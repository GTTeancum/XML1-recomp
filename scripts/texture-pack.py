"""Build a 4x HD texture pack of PNG replacements for the native DX8 renderer,
or export the original textures (--originals) for an external upscale.

Sources are the game's IGB textures (every igTextureAttr base image) and,
optionally, renderer dumps (XML1_DX8_TEXTURE_DUMP=<folder>, *.xtex) for
textures created outside IGB files. Each PNG is named <source>_<key>.png, where
key is the renderer's texture key: the first 8 bytes of MD5 over little-endian
u32 width, height and wire format, followed by the wire level-0 bytes.

The upscale changes resolution only. Separable Lanczos-3 interpolation in
premultiplied alpha is clamped to the four surrounding source texels, then a
mild unsharp mask is clamped to the same bounds. No texel can leave the range of
its source neighborhood, so no new colors, halos, texture or detail are
invented. Binary alpha (alpha test cut-outs) stays binary with smooth contours.
Tiling is detected per axis so repeat textures keep seamless edges.

Usage:
  python scripts/texture-pack.py build --game XBOXgame --out XBOXgame/texturepack
  python scripts/texture-pack.py build --game XBOXgame --out XBOXgame/texturepack --dumps build/texture-dump
  python scripts/texture-pack.py build --game XBOXgame --out XML1-original-textures --originals
"""
from pathlib import Path
from concurrent.futures import ProcessPoolExecutor
import argparse,hashlib,json,os,struct,sys,time,types
import numpy as np
from PIL import Image

PACK_VERSION=1
SCALE=4
# Alchemy pixel format -> renderer wire format. DXT blocks cross unchanged;
# linear RGBA 8888 arrives as linear BGRA (verified against renderer dumps).
IGB_WIRE={7:6,13:12,14:12,15:14}
STREAMED_GROUP=16   # More runtime-only keys of one size/format: a movie or animation.

def level_bytes(w,h,fmt):
    if fmt in (12,14):return ((w+3)//4)*((h+3)//4)*(8 if fmt==12 else 16)
    return w*h*(4 if fmt in (6,7) else 1)

def texture_key(w,h,fmt,base):
    """base: level-0 wire bytes (P8: palette followed by indices)."""
    return hashlib.md5(struct.pack('<3I',w,h,fmt)+base).hexdigest()[:16]

def decode_dxt(data,w,h,fmt):
    bw,bh=(w+3)//4,(h+3)//4
    size=8 if fmt==12 else 16
    blocks=np.frombuffer(data,np.uint8,bw*bh*size).reshape(bh,bw,size)
    color=blocks[...,size-8:]
    c0=color[...,0].astype(np.int32)|color[...,1].astype(np.int32)<<8
    c1=color[...,2].astype(np.int32)|color[...,3].astype(np.int32)<<8
    def expand(c):
        r,g,b=c>>11&31,c>>5&63,c&31
        return np.stack([r<<3|r>>2,g<<2|g>>4,b<<3|b>>2],-1)
    p0,p1=expand(c0),expand(c1)
    four=(c0>c1)[...,None] if fmt==12 else np.ones(c0.shape+(1,),bool)
    p2=np.where(four,(2*p0+p1)//3,(p0+p1)//2)
    p3=np.where(four,(p0+2*p1)//3,0)
    palette=np.stack([p0,p1,p2,p3],2)                       # bh,bw,4,3
    alpha_palette=np.full(c0.shape+(4,),255,np.int32)
    if fmt==12:alpha_palette[...,3]=np.where(four[...,0],255,0)
    bits=color[...,4:8].copy().view('<u4')[...,0].astype(np.int64)
    index=(bits[...,None]>>(2*np.arange(16)))&3              # bh,bw,16
    rgb=np.take_along_axis(palette,index[...,None].repeat(3,-1),2)
    alpha=np.take_along_axis(alpha_palette,index,2)
    if fmt==14:
        nib=blocks[...,:8].astype(np.int32)
        alpha=np.stack([nib&15,nib>>4],-1).reshape(bh,bw,16)*17
    out=np.concatenate([rgb,alpha[...,None]],-1).reshape(bh,bw,4,4,4).transpose(0,2,1,3,4).reshape(bh*4,bw*4,4)
    return out[:h,:w].astype(np.uint8)

def decode_wire(base,w,h,fmt):
    """Level 0 wire bytes -> RGBA uint8."""
    if fmt in (12,14):return decode_dxt(base,w,h,fmt)
    if fmt in (6,7):
        bgra=np.frombuffer(base,np.uint8,w*h*4).reshape(h,w,4)
        out=bgra[...,[2,1,0,3]].copy()
        if fmt==7:out[...,3]=255
        return out
    if fmt==11:
        palette=np.frombuffer(base[:1024],np.uint8).reshape(256,4)[:,[2,1,0,3]]
        return palette[np.frombuffer(base[1024:],np.uint8,w*h).reshape(h,w)]
    plane=np.frombuffer(base,np.uint8,w*h).reshape(h,w)
    if fmt==0:return np.stack([plane,plane,plane,np.full_like(plane,255)],-1)
    if fmt==25:return np.stack([np.full_like(plane,255)]*3+[plane],-1)
    raise ValueError(f'unsupported wire format {fmt}')

# ---- style-preserving 4x resampling -------------------------------------------------
def lanczos(x,a=3):
    x=np.asarray(x,np.float64)
    return np.where(np.abs(x)<a,np.sinc(x)*np.sinc(x/a),0.0)

PHASES=[]
for k in range(SCALE):
    offset=(k+0.5)/SCALE-0.5                    # output centre in input texel units
    base=int(np.floor(offset));frac=offset-base
    taps=np.arange(-2,4)
    weights=lanczos(frac-taps);weights/=weights.sum()
    PHASES.append((base,taps,weights.astype(np.float32)))
PAD=4

def pad_axis(img,axis,wrap):
    widths=[(0,0)]*img.ndim;widths[axis]=(PAD,PAD)
    return np.pad(img,widths,mode='wrap' if wrap else 'edge')

def take(padded,axis,start,n):
    index=[slice(None)]*padded.ndim;index[axis]=slice(PAD+start,PAD+start+n)
    return padded[tuple(index)]

def interleave(parts,axis):
    stacked=np.stack(parts,axis+1)
    shape=list(parts[0].shape);shape[axis]*=SCALE
    return stacked.reshape(shape)

def upsample_axis(img,axis,wrap):
    """Returns (lanczos, low, high): interpolation and its 2-texel bounds."""
    n=img.shape[axis];padded=pad_axis(img,axis,wrap)
    values,lows,highs=[],[],[]
    for base,taps,weights in PHASES:
        acc=np.zeros_like(img)
        for t,wt in zip(taps,weights):acc+=wt*take(padded,axis,base+t,n)
        a,b=take(padded,axis,base,n),take(padded,axis,base+1,n)
        values.append(acc);lows.append(np.minimum(a,b));highs.append(np.maximum(a,b))
    return interleave(values,axis),interleave(lows,axis),interleave(highs,axis)

def upsample(img,wrap_x,wrap_y):
    v,lo,hi=upsample_axis(img,1,wrap_x)
    v,_,_=upsample_axis(v,0,wrap_y)
    # The 2x2 neighborhood bounds are separable: min/max along x, then along y.
    lo=upsample_axis(lo,0,wrap_y)[1];hi=upsample_axis(hi,0,wrap_y)[2]
    return np.clip(v,lo,hi),lo,hi

def gaussian_blur(img,sigma,wrap_x,wrap_y):
    r=int(np.ceil(sigma*3));x=np.arange(-r,r+1)
    k=np.exp(-x*x/(2*sigma*sigma));k=(k/k.sum()).astype(np.float32)
    out=img
    for axis,wrap in ((1,wrap_x),(0,wrap_y)):
        widths=[(0,0)]*out.ndim;widths[axis]=(r,r)
        p=np.pad(out,widths,mode='wrap' if wrap else 'edge');acc=np.zeros_like(out);n=out.shape[axis]
        for i,wt in enumerate(k):
            index=[slice(None)]*out.ndim;index[axis]=slice(i,i+n);acc+=wt*p[tuple(index)]
        out=acc
    return out

def tiles(rgba,axis):
    """True when opposite edges continue each other like interior neighbors."""
    img=rgba.astype(np.float32)
    if img.shape[axis]<4:return True
    first=np.take(img,0,axis);last=np.take(img,-1,axis)
    seam=np.abs(first-last).mean()
    interior=np.abs(np.diff(img,axis=axis)).mean()
    return seam<=2.0*interior+2.0

def fill_hidden(color,visible,passes=16):
    """Spread visible colors into fully transparent texels (edge padding)."""
    color=color.copy();known=visible.copy()
    if not known.any():return color
    for _ in range(passes):
        if known.all():break
        total=np.zeros_like(color);count=np.zeros(known.shape,np.float32)
        for dy,dx in ((-1,0),(1,0),(0,-1),(0,1)):
            k=np.roll(known,(dy,dx),(0,1));total+=np.roll(color,(dy,dx),(0,1))*k[...,None];count+=k
        grow=~known&(count>0)
        color[grow]=total[grow]/count[grow][:,None];known|=grow
    color[~known]=color[known].mean(0)
    return color

SHARPEN=0.6
def upscale(rgba,wrap_s=True,wrap_t=True):
    """rgba uint8 HxWx4 -> 4x RGBA uint8 with the same art."""
    wrap_x=wrap_s and tiles(rgba,1);wrap_y=wrap_t and tiles(rgba,0)
    f=rgba.astype(np.float32)/255.0
    alpha=f[...,3:4]
    opaque=bool((rgba[...,3]==255).all())
    binary=not opaque and bool(np.isin(rgba[...,3],(0,255)).all())
    hidden=bool((rgba[...,3]==0).all())                 # alpha unused: keep color straight
    premultiply=not opaque and not hidden
    color=f[...,:3]*alpha if premultiply else f[...,:3]
    up,lo,hi=upsample(color,wrap_x,wrap_y)
    up=np.clip(up+SHARPEN*(up-gaussian_blur(up,1.0,wrap_x,wrap_y)),lo,hi)
    if opaque:a=np.ones(up.shape[:2]+(1,),np.float32)
    elif hidden:a=np.zeros(up.shape[:2]+(1,),np.float32)
    else:a=upsample(alpha,wrap_x,wrap_y)[0]
    if premultiply:
        # Bound straight color by visible neighbors: transparent texels take
        # their visible neighbors' color, so they neither darken nor widen it.
        straight,lo,hi=upsample(fill_hidden(f[...,:3],rgba[...,3]>0),wrap_x,wrap_y)
        up=np.where(a>1/255,np.clip(up/np.maximum(a,1e-6),lo,hi),straight)
    if binary:a=(a>=0.5).astype(np.float32)
    out=np.concatenate([np.clip(up,0,1),np.clip(a,0,1)],-1)
    return (out*255.0+0.5).astype(np.uint8)

# ---- learned 4x upscale, locked to the original ----------------------------------
# An ESRGAN-family model adds real detail. Its output is then corrected by
# back-projection: the 4x4 box average of every result (what the GPU's next
# mip levels see) is driven back to the original texel. The model may add
# detail inside a texel but cannot move colors, shapes or overall tone.
MODEL_PAD=8          # source texels of wrap/edge context around each texture
MODEL_TILE=192       # source texels per inference tile (bounded memory)
MODEL_OVERLAP=12
BACK_PROJECTION=6
_session=None

def lower_priority():
    """Below-normal priority: foreground applications keep precedence."""
    if os.name=='nt':
        import ctypes
        kernel32=ctypes.windll.kernel32
        kernel32.GetCurrentProcess.restype=ctypes.c_void_p
        kernel32.SetPriorityClass.argtypes=[ctypes.c_void_p,ctypes.c_uint32]
        kernel32.SetPriorityClass(kernel32.GetCurrentProcess(),0x4000)

def load_model(path,threads,background=False):
    """Process initializer: ONNX directly, or an ncnn .param converted once beside the cache."""
    global _session
    if background:lower_priority()
    import onnxruntime as ort
    path=Path(path)
    if path.suffix.lower()=='.param':
        sys.path.insert(0,str(Path(__file__).resolve().parent))
        from ncnn_to_onnx import convert
        cached=Path(__file__).resolve().parent.parent/'work'/'texture-pack-models'/(path.stem+'.onnx')
        if not cached.exists():
            cached.parent.mkdir(parents=True,exist_ok=True);tmp=cached.with_suffix(f'.{os.getpid()}.tmp')
            convert(path,path.with_suffix('.bin'),tmp)
            try:os.replace(tmp,cached)
            except OSError:tmp.unlink(missing_ok=True)
        path=cached
    options=ort.SessionOptions();options.intra_op_num_threads=threads;options.inter_op_num_threads=1
    providers=[p for p in ('DmlExecutionProvider','CPUExecutionProvider') if p in ort.get_available_providers()]
    _session=ort.InferenceSession(str(path),options,providers=providers)

def _infer(rgb):
    """rgb float32 HxWx3 in [0,1] -> 4H x 4W x 3, tiled with overlap."""
    h,w=rgb.shape[:2];out=np.zeros((h*SCALE,w*SCALE,3),np.float32)
    name=_session.get_inputs()[0].name;step=MODEL_TILE
    for y in range(0,h,step):
        for x in range(0,w,step):
            y0,x0=max(0,y-MODEL_OVERLAP),max(0,x-MODEL_OVERLAP)
            y1,x1=min(h,y+step+MODEL_OVERLAP),min(w,x+step+MODEL_OVERLAP)
            tile=np.ascontiguousarray(rgb[y0:y1,x0:x1].transpose(2,0,1)[None])
            res=_session.run(None,{name:tile})[0][0].transpose(1,2,0)
            ty,tx=(y-y0)*SCALE,(x-x0)*SCALE;ny,nx=min(step,h-y)*SCALE,min(step,w-x)*SCALE
            out[y*SCALE:y*SCALE+ny,x*SCALE:x*SCALE+nx]=res[ty:ty+ny,tx:tx+nx]
    return out

def box_down(img):
    h,w=img.shape[0]//SCALE,img.shape[1]//SCALE
    return img.reshape(h,SCALE,w,SCALE,-1).mean((1,3))

def lanczos_up(img,wrap_x,wrap_y):
    return upsample_axis(upsample_axis(img,1,wrap_x)[0],0,wrap_y)[0]

def model_upscale(rgba,wrap_s=True,wrap_t=True):
    """rgba uint8 HxWx4 -> 4x RGBA uint8: model detail, original texel averages."""
    if (rgba[...,:3]==255).all() or min(rgba.shape[:2])<4:return upscale(rgba,wrap_s,wrap_t)
    wrap_x=wrap_s and tiles(rgba,1);wrap_y=wrap_t and tiles(rgba,0)
    f=rgba.astype(np.float32)/255.0
    opaque=bool((rgba[...,3]==255).all())
    binary=not opaque and bool(np.isin(rgba[...,3],(0,255)).all())
    target=fill_hidden(f[...,:3],rgba[...,3]>0) if not opaque and (rgba[...,3]>0).any() else f[...,:3]
    padded=np.pad(target,((MODEL_PAD,MODEL_PAD),(0,0),(0,0)),mode='wrap' if wrap_y else 'edge')
    padded=np.pad(padded,((0,0),(MODEL_PAD,MODEL_PAD),(0,0)),mode='wrap' if wrap_x else 'edge')
    m=MODEL_PAD*SCALE
    up=np.clip(_infer(np.ascontiguousarray(padded))[m:-m,m:-m],0,1)
    for _ in range(BACK_PROJECTION):
        up=np.clip(up+lanczos_up(target-box_down(up),wrap_x,wrap_y),0,1)
    if opaque:a=np.ones(up.shape[:2]+(1,),np.float32)
    else:
        a=upsample(f[...,3:4],wrap_x,wrap_y)[0]
        if binary:a=(a>=0.5).astype(np.float32)
    out=np.concatenate([up,np.clip(a,0,1)],-1)
    return (out*255.0+0.5).astype(np.uint8)

# ---- sources -------------------------------------------------------------------------
def igb_reader(root):
    pkg=types.ModuleType('igbref');pkg.__path__=[str(root)];sys.modules['igbref']=pkg
    from igbref.igb_format.igb_reader import IGBReader
    from igbref.igb_format.igb_objects import IGBObject
    from igbref.scene_graph.sg_materials import extract_image
    return IGBReader,IGBObject,extract_image

def scan_igb(job):
    path,game,reader_root=job
    IGBReader,IGBObject,extract_image=igb_reader(reader_root)
    found=[];rel=Path(path).relative_to(game).as_posix()
    try:
        r=IGBReader(path);r.read()
    except Exception:
        return rel,found
    for o in r.objects:
        if not (isinstance(o,IGBObject) and o.is_type(b'igTextureAttr')):continue
        image=None;wrap=[1,1]
        for slot,val,fi in o._raw_fields:
            if slot==12 and fi.short_name==b'ObjectRef' and val!=-1:image=r.resolve_ref(val)
            elif slot in (7,8) and fi.short_name==b'Enum':wrap[slot-7]=val
        if not isinstance(image,IGBObject):continue
        im=extract_image(r,image)
        fmt=IGB_WIRE.get(im.pixel_format)
        if fmt is None or not im.pixel_data or not im.width or not im.height:continue
        n=level_bytes(im.width,im.height,fmt)
        if len(im.pixel_data)<n:continue
        base=bytes(im.pixel_data[:n])
        if fmt==6:base=np.frombuffer(base,np.uint8).reshape(-1,4)[:,[2,1,0,3]].tobytes()
        found.append((texture_key(im.width,im.height,fmt,base),im.width,im.height,fmt,base,wrap[0]!=0,wrap[1]!=0))
    return rel,found

def read_dump(path):
    data=Path(path).read_bytes()
    if data[:8]!=b'XML1TEX1':raise ValueError(f'{path}: not a texture dump')
    w,h,packed,size=struct.unpack_from('<4I',data,8);fmt=packed&255
    wire=data[24:24+size]
    base=wire[:(1024 if fmt==11 else 0)+level_bytes(w,h,fmt)]
    return texture_key(w,h,fmt,base),w,h,fmt,base

def make(job):
    key,w,h,fmt,base,wrap_s,wrap_t,out,original=job
    out=Path(out)
    if out.exists():return key,0,0.0
    start=time.perf_counter()
    rgba=decode_wire(base,w,h,fmt)
    if original:big=rgba
    else:big=model_upscale(rgba,wrap_s,wrap_t) if _session and fmt!=25 else upscale(rgba,wrap_s,wrap_t)
    out.parent.mkdir(parents=True,exist_ok=True)
    tmp=out.with_suffix('.tmp')
    if fmt==0:Image.fromarray(big[...,0],'L').save(tmp,'PNG',compress_level=6)
    elif (big[...,3]==255).all():Image.fromarray(big[...,:3],'RGB').save(tmp,'PNG',compress_level=6)
    else:Image.fromarray(big,'RGBA').save(tmp,'PNG',compress_level=6)
    os.replace(tmp,out)
    return key,out.stat().st_size,time.perf_counter()-start

def build(args):
    game=args.game.resolve();out=args.out.resolve()
    files=sorted(str(p) for p in game.rglob('*') if p.suffix.lower()=='.igb' and p.is_file() and out not in p.parents)
    textures={}
    with ProcessPoolExecutor(args.jobs) as pool:
        for rel,found in pool.map(scan_igb,[(f,str(game),str(args.igb_reader.resolve())) for f in files],chunksize=16):
            for key,w,h,fmt,base,ws,wt in found:
                if key not in textures:textures[key]=dict(w=w,h=h,fmt=fmt,base=base,wrap_s=ws,wrap_t=wt,source=rel)
    igb_count=len(textures)
    # Runtime-only textures come from dumps. A size/format group with many
    # unique keys is streamed content (FMV frames): replacing only the dumped
    # frames would alternate between pack and original art, so it is skipped.
    runtime={}
    for folder in args.dumps or []:
        for dump in sorted(folder.glob('*.xtex')):
            key,w,h,fmt,base=read_dump(dump)
            if key not in textures and w*h>=16:runtime.setdefault((fmt,w,h),{})[key]=base
    streamed=0
    for (fmt,w,h),group in sorted(runtime.items()):
        if len(group)>STREAMED_GROUP:streamed+=len(group);continue
        for key,base in group.items():
            textures[key]=dict(w=w,h=h,fmt=fmt,base=base,wrap_s=True,wrap_t=True,source='runtime/'+key)
    print(f'[TEXTURE PACK] igb_files={len(files)} igb_textures={igb_count} runtime_only={len(textures)-igb_count} streamed_skipped={streamed}',flush=True)
    jobs=[]
    for key,t in textures.items():
        parts=t['source'].split('/')
        folder=parts[0] if len(parts)>1 else 'misc'
        stem=Path(parts[-1]).stem.replace(' ','_')
        jobs.append((key,t['w'],t['h'],t['fmt'],t['base'],t['wrap_s'],t['wrap_t'],str(out/folder/f'{stem}_{key}.png'),args.originals))
    jobs.sort(key=lambda j:-j[1]*j[2])                   # large first: better load balance
    if args.limit:jobs=jobs[:args.limit]
    written=0;total=0;started=time.perf_counter()
    if args.originals and args.model:sys.exit('--originals exports unscaled textures; it does not take --model')
    if args.background:lower_priority()
    threads=args.threads or max(1,os.cpu_count()//args.jobs)
    model=dict(initializer=load_model,initargs=(str(args.model),threads,args.background)) if args.model else           dict(initializer=lower_priority) if args.background else {}
    with ProcessPoolExecutor(args.jobs,**model) as pool:
        for i,(key,size,seconds) in enumerate(pool.map(make,jobs,chunksize=1),1):
            written+=size>0;total+=size
            if i%(20 if args.model else 200)==0 or i==len(jobs):
                print(f'[TEXTURE PACK] {i}/{len(jobs)} written={written} bytes={total} elapsed={time.perf_counter()-started:.0f}s',flush=True)
    manifest=dict(format='OpenXML1 HD texture pack',version=PACK_VERSION,scale=1 if args.originals else SCALE,textures=len(textures),
                  key='md5(u32 width, u32 height, u32 wire format, wire level 0)[:8]',
                  method='original textures, unscaled' if args.originals else
                         (f'{Path(args.model).stem} 4x, back-projected to the original texel averages' if args.model else
                          'premultiplied Lanczos-3 4x, 2x2-bounded anti-ringing and sharpening')+'; binary alpha kept binary')
    out.mkdir(parents=True,exist_ok=True)
    (out/'pack.json').write_text(json.dumps(manifest,indent=1)+'\n')
    if args.originals:
        (out/'README.txt').write_text(
            'X-Men Legends original textures, exported at their original size.\n\n'
            'This folder is a starting point for your own texture pack. Upscale the PNGs\n'
            'with the tool of your choice by 2x, 4x or 8x (any power of two), keep each\n'
            'file name, and place the results in the texturepack folder beside\n'
            'default.xbe. The 16 hex digits before .png identify the texture the game\n'
            'replaces; subfolders do not matter. Do not use this folder as the pack\n'
            'unchanged: 1x copies only re-encode the original textures.\n')
        return
    (out/'README.txt').write_text(
        'X-Men Legends 4x HD texture pack.\n\n'
        'Each PNG replaces the original texture named by the 16 hex digits before .png.\n'
        'Edit a PNG to mod it; keep its name and size (any power-of-two multiple of the\n'
        'original works, including 1x recolors). Delete a PNG to use the original.\n'
        'Disable the pack with HDTextures = 0 in build.ini.\n')

def main():
    p=argparse.ArgumentParser(description=__doc__,formatter_class=argparse.RawDescriptionHelpFormatter)
    sub=p.add_subparsers(dest='command',required=True)
    b=sub.add_parser('build')
    b.add_argument('--game',type=Path,required=True,help='Game data folder (default.xbe and loose IGB assets)')
    b.add_argument('--out',type=Path,required=True)
    b.add_argument('--dumps',type=Path,action='append',help='Renderer texture dump folder (*.xtex); repeatable')
    b.add_argument('--igb-reader',type=Path,default=Path(__file__).resolve().parent.parent/'work'/'igb-blender-reference',
                   help='IGB reader root (igb_format/, scene_graph/)')
    b.add_argument('--jobs',type=int,default=os.cpu_count())
    b.add_argument('--limit',type=int,default=0,help='Only the N largest textures (testing)')
    b.add_argument('--threads',type=int,default=0,help='Model inference threads per job (default: cores / jobs)')
    b.add_argument('--background',action='store_true',help='Run at below-normal priority')
    b.add_argument('--originals',action='store_true',help='Export every texture unscaled, as the source for an external upscale')
    b.add_argument('--model',type=Path,help='4x ESRGAN-family model: .onnx, or ncnn .param/.bin (e.g. Upscayl ultramix-balanced-4x.param). '
                   'Needs onnxruntime. Without it, the bounded Lanczos upscale is used.')
    a=p.parse_args()
    if a.command=='build':build(a)

if __name__=='__main__':main()
