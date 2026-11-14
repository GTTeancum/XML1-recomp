"""Build optional PlayStation prompt PNGs from the user's original font assets.

Preserves Xbox font metrics and all pixels outside the controller glyphs.
Requires the same external reader, NumPy and Pillow as texture-pack.py.
"""
import argparse
import importlib.util
import json
from pathlib import Path
import xml.etree.ElementTree as ET
import numpy as np
from PIL import Image

# Xbox glyph -> PS2 artwork glyph, by physical XInput control position.
# The PS2 atlas orders Square before Circle and R shoulder before L shoulder.
GLYPHS = {164:164, 165:166, 166:165, 167:167, 168:169, 169:168,
          170:171, 171:170, 172:172, 173:173, 174:174, 175:175}

def rectangle(glyph, size):
    values = [float(glyph.get(k)) for k in ('s','t','s2','t2')]
    x0,y0,x1,y1 = [round(v*size[i%2]) for i,v in enumerate(values)]
    # Decoded wire images are upside down relative to font UV coordinates.
    box = (x0, size[1]-y1, x1, size[1]-y0)
    if not (0 <= box[0] < box[2] <= size[0] and 0 <= box[1] < box[3] <= size[1]):
        raise ValueError('Invalid controller glyph rectangle')
    return box

def replace_glyphs(target, source, target_metrics, source_metrics):
    result = target.copy()
    mask = np.zeros((target.height,target.width),dtype=bool)
    for dst,src in GLYPHS.items():
        a,b = rectangle(target_metrics[dst],target.size),rectangle(source_metrics[src],source.size)
        patch = source.crop(b)
        # Premultiplied-alpha resize avoids dark/colored fringes.
        patch = patch.convert('RGBa').resize((a[2]-a[0],a[3]-a[1]),Image.Resampling.LANCZOS).convert('RGBA')
        result.paste(patch,a)
        mask[a[1]:a[3],a[0]:a[2]] = True
    if not np.array_equal(np.asarray(result)[~mask],np.asarray(target)[~mask]):
        raise AssertionError('Non-controller pixels changed')
    return result

def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--game',type=Path,required=True)
    parser.add_argument('--igb-reader',type=Path,required=True)
    parser.add_argument('--out',type=Path,required=True)
    args=parser.parse_args()
    game=args.game.resolve(strict=True);out=args.out.resolve()
    if out.exists():raise ValueError('Use a new output folder to avoid ambiguous duplicate texture keys')
    spec=importlib.util.spec_from_file_location('texture_pack',Path(__file__).with_name('texture-pack.py'))
    tp=importlib.util.module_from_spec(spec);spec.loader.exec_module(tp)
    def load(stem):
        path=game/'textures/fonts'/f'{stem}.igb'
        _,textures,error=tp.scan_igb((str(path),game,args.igb_reader.resolve()))
        if error or len(textures)!=1:raise ValueError(f'{path}: expected exactly one texture: {error}')
        key,w,h,fmt,base,*_=textures[0]
        metrics={int(g.get('num')):g for g in ET.parse(game/'ui/fonts'/f'{stem}.xml').getroot()}
        return key,Image.fromarray(tp.decode_wire(base,w,h,fmt)),metrics
    pending={};rows=[]
    for target_path in sorted((game/'textures/fonts').glob('*_xbox*.igb')):
        target_stem=target_path.stem
        source_stem=target_stem.replace('_xbox','')
        key,target,tm=load(target_stem)
        _,source,sm=load(source_stem)
        if all(int(tm[n].get('width'))==0 for n in GLYPHS):continue
        result=replace_glyphs(target,source,tm,sm)
        if key in pending and not np.array_equal(pending[key],result):
            raise ValueError(f'Conflicting font replacements for {key}')
        pending[key]=result
        rows.append({'target':target_stem,'source':source_stem,'key':key,'size':result.size})
    if not rows:raise ValueError('No Xbox controller fonts found')
    out.mkdir(parents=True)
    for key,result in pending.items():result.save(out/(key+'.png'))
    (out/'prompts.json').write_text(json.dumps({'glyphs':GLYPHS,'fonts':rows},indent=2)+'\n')
    print(f'Built {len(pending)} PlayStation prompt textures from {len(rows)} Xbox fonts')

if __name__=='__main__':main()
