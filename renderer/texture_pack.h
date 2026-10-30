#pragma once
// HD texture packs: PNG replacements keyed by the original level-0 texels.
//
// Key: the first 8 bytes of MD5 over little-endian u32 width, height and Xbox
// format (low byte of the packed wire value), followed by level 0 exactly as it
// crosses the wire: DXT blocks, linear texels, or a P8 1024-byte palette plus
// linear indices. A pack file is any "<name><16 hex>.png" below the pack root.
// A replacement is the original texture scaled by a power of two (1x for a
// recolor, normally 4x) and keeps the original texture format.
//
// Stability rules. A texture is either always replaced or never replaced:
// - Content keys cover the whole base level. Streamed and animated textures
//   (movies, palette cycling) change key every frame and stay original instead
//   of alternating between pack and original art.
// - Loading is synchronous. A texture never draws once original and then HD.
//   A failed replacement is remembered and remains original for the session.
// - The chain is [upscaled levels..., original levels...]. Distant surfaces
//   sample the authored mips. Mip filtering is enabled for replaced textures
//   whose stage disables it, so a 4x level 0 is never minified unfiltered
//   (the shimmer/flicker of earlier upscales). MAXMIPLEVEL is offset to match.
// - Replacement allocations are never recycled for other layouts.
// d3d8types.h already defines D3DCOLORVALUE; WIC reaches dxgitype.h.
#define D3DCOLORVALUE_DEFINED
#include <wincodec.h>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <cfloat>
#include <climits>
#include <cmath>
#include <string>
#include <thread>
#include <vector>

namespace texture_pack {

struct Md5 {
    uint32_t state[4]={0x67452301u,0xefcdab89u,0x98badcfeu,0x10325476u};
    uint64_t length=0; unsigned char buffer[64]; size_t used=0;
    static uint32_t rotate(uint32_t v,unsigned s) {return (v<<s)|(v>>(32-s));}
    void block(const unsigned char *p) {
        static uint32_t k[64];static bool ready=false;
        static const unsigned shifts[16]={7,12,17,22,5,9,14,20,4,11,16,23,6,10,15,21};
        if(!ready) {for(unsigned i=0;i<64;++i)k[i]=(uint32_t)(std::fabs(std::sin((double)(i+1)))*4294967296.0);ready=true;}
        uint32_t m[16];for(unsigned i=0;i<16;++i)m[i]=p[i*4]|p[i*4+1]<<8|p[i*4+2]<<16|(uint32_t)p[i*4+3]<<24;
        uint32_t a=state[0],b=state[1],c=state[2],d=state[3];
        for(unsigned i=0;i<64;++i) {
            uint32_t f;unsigned g;
            if(i<16){f=(b&c)|(~b&d);g=i;}
            else if(i<32){f=(d&b)|(~d&c);g=(5*i+1)&15;}
            else if(i<48){f=b^c^d;g=(3*i+5)&15;}
            else {f=c^(b|~d);g=(7*i)&15;}
            const uint32_t next=d;d=c;c=b;b+=rotate(a+f+k[i]+m[g],shifts[(i>>4)*4+(i&3)]);a=next;
        }
        state[0]+=a;state[1]+=b;state[2]+=c;state[3]+=d;
    }
    void update(const void *data,size_t bytes) {
        auto p=(const unsigned char*)data;length+=bytes;
        while(bytes) {
            size_t n=std::min(bytes,64-used);std::memcpy(buffer+used,p,n);used+=n;p+=n;bytes-=n;
            if(used==64){block(buffer);used=0;}
        }
    }
    uint64_t key() {
        const uint64_t bits=length*8;const unsigned char pad=0x80,zero=0;
        update(&pad,1);while(used!=56)update(&zero,1);
        unsigned char tail[8];for(unsigned i=0;i<8;++i)tail[i]=(unsigned char)(bits>>(i*8));
        update(tail,8);
        uint64_t key=0;for(unsigned i=0;i<8;++i)key=key<<8|((state[i/4]>>((i%4)*8))&255);
        return key;
    }
};
static uint64_t texture_key(unsigned width,unsigned height,uint32_t packed,const unsigned char *wire) {
    const uint32_t format=packed&255,header[3]={width,height,format};
    Md5 md5;md5.update(header,sizeof(header));
    md5.update(wire,(format==11?1024:0)+xml1_texture_level_bytes(width,height,format));
    return md5.key();
}

static int luma(const unsigned char *bgra) {return (bgra[2]*77+bgra[1]*150+bgra[0]*29+128)>>8;}
static uint16_t pack565(const int c[3]) {
    return (uint16_t)(((c[0]*31+127)/255)<<11|((c[1]*63+127)/255)<<5|((c[2]*31+127)/255));
}
static void unpack565(uint16_t v,int c[3]) {
    const int r=v>>11&31,g=v>>5&63,b=v&31;c[0]=r<<3|r>>2;c[1]=g<<2|g>>4;c[2]=b<<3|b>>2;
}
// Squared error of RGB pixels against a 565 endpoint pair; chooses indices.
static int fit_block(const int px[16][3],unsigned active,uint16_t e0,uint16_t e1,bool three,unsigned char idx[16]) {
    int palette[4][3];unpack565(e0,palette[0]);unpack565(e1,palette[1]);
    for(unsigned c=0;c<3;++c) {
        if(three) {palette[2][c]=(palette[0][c]+palette[1][c])/2;palette[3][c]=0;}
        else {palette[2][c]=(2*palette[0][c]+palette[1][c])/3;palette[3][c]=(palette[0][c]+2*palette[1][c])/3;}
    }
    int total=0;
    for(unsigned i=0;i<16;++i) {
        if(!(active&(1u<<i))) {idx[i]=3;continue;}
        int best=INT_MAX;
        for(unsigned j=0;j<(three?3u:4u);++j) {
            int e=0;for(unsigned c=0;c<3;++c){const int d=px[i][c]-palette[j][c];e+=d*d;}
            if(e<best){best=e;idx[i]=(unsigned char)j;}
        }
        total+=best;
    }
    return total;
}
// Least-squares endpoints for fixed indices (stb_dxt style refinement).
static bool refine(const int px[16][3],unsigned active,const unsigned char idx[16],bool three,int e0[3],int e1[3]) {
    static const float w4[4][2]={{1,0},{0,1},{2.f/3,1.f/3},{1.f/3,2.f/3}},w3[3][2]={{1,0},{0,1},{.5f,.5f}};
    float aa=0,ab=0,bb=0,ax[3]={},bx[3]={};
    for(unsigned i=0;i<16;++i) {
        if(!(active&(1u<<i)))continue;
        const float a=three?w3[idx[i]][0]:w4[idx[i]][0],b=three?w3[idx[i]][1]:w4[idx[i]][1];
        aa+=a*a;ab+=a*b;bb+=b*b;
        for(unsigned c=0;c<3;++c){ax[c]+=a*px[i][c];bx[c]+=b*px[i][c];}
    }
    const float det=aa*bb-ab*ab;
    if(std::fabs(det)<1e-6f)return false;
    for(unsigned c=0;c<3;++c) {
        e0[c]=std::clamp((int)std::lround((ax[c]*bb-bx[c]*ab)/det),0,255);
        e1[c]=std::clamp((int)std::lround((bx[c]*aa-ax[c]*ab)/det),0,255);
    }
    return true;
}
// One DXT color block. Three-color mode is used only for DXT1 transparency.
static void encode_color(const unsigned char block[16][4],bool punch_through,unsigned char out[8]) {
    int px[16][3];unsigned active=0;
    for(unsigned i=0;i<16;++i) {
        px[i][0]=block[i][2];px[i][1]=block[i][1];px[i][2]=block[i][0];
        if(!punch_through || block[i][3]>=128)active|=1u<<i;
    }
    const bool three=punch_through && active!=0xFFFFu;
    unsigned char idx[16]={};uint16_t c0=0,c1=0;
    if(active) {
        float mean[3]={},cov[6]={};unsigned n=0;
        for(unsigned i=0;i<16;++i)if(active&(1u<<i)){for(unsigned c=0;c<3;++c)mean[c]+=px[i][c];++n;}
        for(auto &m:mean)m/=n;
        for(unsigned i=0;i<16;++i)if(active&(1u<<i)) {
            const float r=px[i][0]-mean[0],g=px[i][1]-mean[1],b=px[i][2]-mean[2];
            cov[0]+=r*r;cov[1]+=r*g;cov[2]+=r*b;cov[3]+=g*g;cov[4]+=g*b;cov[5]+=b*b;
        }
        float axis[3]={1,1,1};
        for(unsigned iteration=0;iteration<8;++iteration) {
            const float x=cov[0]*axis[0]+cov[1]*axis[1]+cov[2]*axis[2];
            const float y=cov[1]*axis[0]+cov[3]*axis[1]+cov[4]*axis[2];
            const float z=cov[2]*axis[0]+cov[4]*axis[1]+cov[5]*axis[2];
            const float length=std::max({std::fabs(x),std::fabs(y),std::fabs(z)});
            if(length<1e-6f)break;
            axis[0]=x/length;axis[1]=y/length;axis[2]=z/length;
        }
        float low=FLT_MAX,high=-FLT_MAX;unsigned lo=0,hi=0;
        for(unsigned i=0;i<16;++i)if(active&(1u<<i)) {
            const float d=px[i][0]*axis[0]+px[i][1]*axis[1]+px[i][2]*axis[2];
            if(d<low){low=d;lo=i;} if(d>high){high=d;hi=i;}
        }
        int e0[3],e1[3];
        for(unsigned c=0;c<3;++c) {
            const int inset=three?0:(px[hi][c]-px[lo][c])/16;
            e0[c]=std::clamp(px[hi][c]-inset,0,255);e1[c]=std::clamp(px[lo][c]+inset,0,255);
        }
        auto order=[&](uint16_t a,uint16_t b) {
            if(three ? a>b : a<b) std::swap(a,b);
            return std::make_pair(a,b);
        };
        auto best=order(pack565(e0),pack565(e1));
        unsigned char trial[16];int error=fit_block(px,active,best.first,best.second,three,idx);
        for(unsigned pass=0;pass<2 && error;++pass) {
            if(!refine(px,active,idx,three,e0,e1))break;
            auto candidate=order(pack565(e0),pack565(e1));
            const int e=fit_block(px,active,candidate.first,candidate.second,three,trial);
            if(e>=error)break;
            error=e;best=candidate;std::memcpy(idx,trial,16);
        }
        c0=best.first;c1=best.second;
        // Equal endpoints decode as three-color DXT1: index 0 remains exact.
        if(!three && c0==c1)for(unsigned i=0;i<16;++i)idx[i]=0;
    } else if(three) {
        for(unsigned i=0;i<16;++i)idx[i]=3;
    }
    out[0]=(unsigned char)c0;out[1]=(unsigned char)(c0>>8);out[2]=(unsigned char)c1;out[3]=(unsigned char)(c1>>8);
    uint32_t bits=0;for(unsigned i=0;i<16;++i)bits|=(uint32_t)idx[i]<<(i*2);
    std::memcpy(out+4,&bits,4);
}

// Splits independent rows across worker threads; small images stay inline.
template<class F> static void parallel_rows(unsigned rows,unsigned grain,F f) {
    const unsigned workers=std::min(std::max(1u,std::thread::hardware_concurrency()),8u);
    const unsigned chunk=std::max(grain,(rows+workers-1)/workers);
    std::vector<std::thread> threads;
    for(unsigned begin=chunk;begin<rows;begin+=chunk)threads.emplace_back(f,begin,std::min(rows,begin+chunk));
    f(0u,std::min(rows,chunk));
    for(auto &thread:threads)thread.join();
}
// Writes one BGRA level into a locked level of the original texture format.
static void encode_level(const std::vector<unsigned char> &bgra,unsigned width,unsigned height,unsigned format,const D3DLOCKED_RECT &lock) {
    if(format==12 || format==14) {
        const unsigned block_bytes=format==12?8:16;
        parallel_rows((height+3)/4,16,[&](unsigned first,unsigned last) {
        for(unsigned by=first;by<last;++by) {
            unsigned char *row=(unsigned char*)lock.pBits+by*lock.Pitch;
            for(unsigned bx=0;bx<(width+3)/4;++bx) {
                unsigned char block[16][4];
                for(unsigned i=0;i<16;++i) {
                    const unsigned x=std::min(bx*4+(i&3),width-1),y=std::min(by*4+(i>>2),height-1);
                    std::memcpy(block[i],&bgra[((size_t)y*width+x)*4],4);
                }
                unsigned char *out=row+bx*block_bytes;
                if(format==14) {
                    for(unsigned i=0;i<8;++i)
                        out[i]=(unsigned char)(((block[i*2][3]*15+127)/255)|((block[i*2+1][3]*15+127)/255)<<4);
                    out+=8;
                }
                encode_color(block,format==12,out);
            }
        }
        });
        return;
    }
    for(unsigned y=0;y<height;++y) {
        unsigned char *row=(unsigned char*)lock.pBits+y*lock.Pitch;
        const unsigned char *source=&bgra[(size_t)y*width*4];
        if(format==0) for(unsigned x=0;x<width;++x)row[x]=(unsigned char)luma(source+x*4);
        else if(format==25) for(unsigned x=0;x<width;++x)row[x]=source[x*4+3];
        else std::memcpy(row,source,(size_t)width*4);
    }
}
// Alpha-weighted 2x2 box filter: transparent texels do not darken edges.
static std::vector<unsigned char> half(const std::vector<unsigned char> &source,unsigned width,unsigned height) {
    const unsigned w=std::max(1u,width/2),h=std::max(1u,height/2);
    std::vector<unsigned char> out((size_t)w*h*4);
    parallel_rows(h,64,[&](unsigned first,unsigned last) {
    for(unsigned y=first;y<last;++y)for(unsigned x=0;x<w;++x) {
        unsigned weight=0,alpha=0,plain[3]={},weighted[3]={};
        for(unsigned i=0;i<4;++i) {
            const unsigned sx=std::min(x*2+(i&1),width-1),sy=std::min(y*2+(i>>1),height-1);
            const unsigned char *p=&source[((size_t)sy*width+sx)*4];
            alpha+=p[3];weight+=p[3];
            for(unsigned c=0;c<3;++c){plain[c]+=p[c];weighted[c]+=p[c]*p[3];}
        }
        unsigned char *o=&out[((size_t)y*w+x)*4];
        for(unsigned c=0;c<3;++c)o[c]=(unsigned char)(weight?(weighted[c]+weight/2)/weight:(plain[c]+2)/4);
        o[3]=(unsigned char)((alpha+2)/4);
    }
    });
    return out;
}

struct Entry { IDirect3DTexture8 *texture; size_t bytes; uint64_t touched; };
struct State {
    bool initialized=false,active=false,dumping=false;
    std::wstring root,dump_root;
    std::unordered_map<uint64_t,std::wstring> files;
    std::unordered_map<uint64_t,Entry> cache;
    std::unordered_set<uint64_t> failed,dumped;
    IWICImagingFactory *wic=nullptr;
    unsigned max_width=2048,max_height=2048;
    size_t cache_bytes=0,budget=(size_t)1024*1024*1024;
    uint64_t clock=0,loads=0,hits=0,failures=0,keys=0,forced_mips=0;
    double load_ms=0,max_load_ms=0,decode_ms=0,encode_ms=0;
};
static State &state() {static State s;return s;}
// {6A3C1E52-0B7D-4F38-9E21-58F1D0A2C4E1}: number of upscaled levels above level 0.
static const GUID extra_levels_tag={0x6a3c1e52,0x0b7d,0x4f38,{0x9e,0x21,0x58,0xf1,0xd0,0xa2,0xc4,0xe1}};

static void scan(State &s,const std::wstring &directory,unsigned &duplicates) {
    WIN32_FIND_DATAW data;HANDLE find=FindFirstFileW((directory+L"\\*").c_str(),&data);
    if(find==INVALID_HANDLE_VALUE)return;
    do {
        const std::wstring name=data.cFileName;
        if(name==L"." || name==L"..")continue;
        if(data.dwFileAttributes&FILE_ATTRIBUTE_DIRECTORY) {scan(s,directory+L"\\"+name,duplicates);continue;}
        if(name.size()<20 || _wcsicmp(name.c_str()+name.size()-4,L".png"))continue;
        uint64_t key=0;bool valid=true;
        for(size_t i=name.size()-20;i<name.size()-4;++i) {
            const wchar_t c=name[i];
            const int digit=c>=L'0'&&c<=L'9'?c-L'0':c>=L'a'&&c<=L'f'?c-L'a'+10:c>=L'A'&&c<=L'F'?c-L'A'+10:-1;
            if(digit<0){valid=false;break;}
            key=key<<4|(unsigned)digit;
        }
        if(!valid)continue;
        if(!s.files.emplace(key,directory+L"\\"+name).second)++duplicates;
    } while(FindNextFileW(find,&data));
    FindClose(find);
}
static State &initialize(IDirect3DDevice8 *device) {
    State &s=state();
    if(s.initialized)return s;
    s.initialized=true;
    if(const wchar_t *dump=_wgetenv(L"XML1_DX8_TEXTURE_DUMP"))if(*dump) {
        s.dump_root=dump;CreateDirectoryW(dump,nullptr);s.dumping=true;
        std::printf("[TEXTURE DUMP] %ls\n",dump);
    }
    const wchar_t *root=_wgetenv(L"XML1_DX8_TEXTURE_PACK");
    if(!root || !*root)return s;
    s.root=root;unsigned duplicates=0;scan(s,s.root,duplicates);
    D3DCAPS8 caps={};
    if(SUCCEEDED(device->GetDeviceCaps(&caps))) {s.max_width=caps.MaxTextureWidth;s.max_height=caps.MaxTextureHeight;}
    // Leave half of the reported texture memory to the game's own resources.
    if(const UINT available=device->GetAvailableTextureMem())s.budget=std::min(s.budget,(size_t)available/2);
    const HRESULT com=CoInitializeEx(nullptr,COINIT_MULTITHREADED);
    if(FAILED(com) && com!=RPC_E_CHANGED_MODE)std::fprintf(stderr,"[TEXTURE PACK] COM initialization failed: %08lx\n",(unsigned long)com);
    if(FAILED(CoCreateInstance(CLSID_WICImagingFactory,nullptr,CLSCTX_INPROC_SERVER,IID_PPV_ARGS(&s.wic)))) {
        std::fprintf(stderr,"[TEXTURE PACK] PNG decoder unavailable; using original textures\n");
        return s;
    }
    s.active=!s.files.empty();
    std::printf("[TEXTURE PACK] root=%ls replacements=%zu duplicates=%u max=%ux%u budget_mb=%zu active=%d\n",
        s.root.c_str(),s.files.size(),duplicates,s.max_width,s.max_height,s.budget>>20,s.active);
    return s;
}
static void dump(State &s,uint64_t key,unsigned width,unsigned height,uint32_t packed,const std::vector<unsigned char> &wire) {
    if(!s.dumped.insert(key).second)return;
    wchar_t path[MAX_PATH];
    std::swprintf(path,MAX_PATH,L"%ls\\%016llx.xtex",s.dump_root.c_str(),(unsigned long long)key);
    if(GetFileAttributesW(path)!=INVALID_FILE_ATTRIBUTES)return;
    FILE *file=_wfopen(path,L"wb");
    if(!file)return;
    const uint32_t header[4]={width,height,packed,(uint32_t)wire.size()};
    std::fwrite("XML1TEX1",1,8,file);std::fwrite(header,1,sizeof(header),file);
    std::fwrite(wire.data(),1,wire.size(),file);std::fclose(file);
}
static std::vector<unsigned char> decode_png(State &s,const std::wstring &path,unsigned &width,unsigned &height) {
    IWICBitmapDecoder *decoder=nullptr;IWICBitmapFrameDecode *frame=nullptr;IWICBitmapSource *bgra=nullptr;
    std::vector<unsigned char> pixels;
    HRESULT hr=s.wic->CreateDecoderFromFilename(path.c_str(),nullptr,GENERIC_READ,WICDecodeMetadataCacheOnDemand,&decoder);
    if(SUCCEEDED(hr))hr=decoder->GetFrame(0,&frame);
    if(SUCCEEDED(hr))hr=WICConvertBitmapSource(GUID_WICPixelFormat32bppBGRA,frame,&bgra);
    UINT w=0,h=0;
    if(SUCCEEDED(hr))hr=bgra->GetSize(&w,&h);
    if(SUCCEEDED(hr) && (!w || !h || w>16384 || h>16384))hr=E_INVALIDARG;
    if(SUCCEEDED(hr)) {pixels.resize((size_t)w*h*4);hr=bgra->CopyPixels(nullptr,w*4,(UINT)pixels.size(),pixels.data());}
    if(bgra)bgra->Release();if(frame)frame->Release();if(decoder)decoder->Release();
    if(FAILED(hr))throw std::runtime_error("PNG decode failed");
    width=w;height=h;return pixels;
}
static size_t chain_bytes(unsigned width,unsigned height,unsigned levels,unsigned format) {
    size_t total=0;const unsigned texel=format==11||format==6||format==7?4:1;
    for(unsigned level=0;level<levels;++level) {
        total+=format==12||format==14?xml1_texture_level_bytes(width,height,format):(size_t)width*height*texel;
        width=std::max(1u,width/2);height=std::max(1u,height/2);
    }
    return total;
}
static IDirect3DTexture8 *load(State &s,IDirect3DDevice8 *device,const std::wstring &path,unsigned width,unsigned height,
                               uint32_t packed,const std::vector<unsigned char> &wire,D3DFORMAT d3d_format,size_t &bytes) {
    double started=perf_now_ms();
    unsigned pw,ph;std::vector<unsigned char> image=decode_png(s,path,pw,ph);
    s.decode_ms+=perf_now_ms()-started;started=perf_now_ms();
    if(pw%width || ph%height || pw/width!=ph/height)throw std::runtime_error("replacement is not a uniform multiple of the original size");
    unsigned scale=pw/width,extra=0;
    if(scale&(scale-1))throw std::runtime_error("replacement scale is not a power of two");
    while(pw>s.max_width || ph>s.max_height) {
        if(scale==1)throw std::runtime_error("replacement exceeds device texture limits");
        image=half(image,pw,ph);pw/=2;ph/=2;scale/=2;
    }
    while((1u<<extra)<scale)++extra;
    const unsigned format=packed&255,original_levels=xml1_texture_levels(packed),levels=extra+original_levels;
    IDirect3DTexture8 *staging=nullptr,*texture=nullptr;
    checked(device->CreateTexture(pw,ph,levels,0,d3d_format,D3DPOOL_SYSTEMMEM,&staging));
    try {
        unsigned w=pw,h=ph;
        for(unsigned level=0;level<extra;++level) {
            D3DLOCKED_RECT lock={};checked(staging->LockRect(level,&lock,nullptr,0));
            encode_level(image,w,h,format,lock);checked(staging->UnlockRect(level));
            if(level+1<extra)image=half(image,w,h);
            w=std::max(1u,w/2);h=std::max(1u,h/2);
        }
        // The authored chain follows unchanged, including P8 palette expansion.
        size_t offset=format==11?1024:0;
        for(unsigned level=0;level<original_levels;++level) {
            const unsigned rows=(format==12||format==14)?(h+3)/4:h;
            const unsigned row_bytes=(format==12||format==14)?((w+3)/4)*(format==12?8:16):w*((format==6||format==7)?4:1);
            D3DLOCKED_RECT lock={};checked(staging->LockRect(extra+level,&lock,nullptr,0));
            for(unsigned y=0;y<rows;++y) {
                unsigned char *dest=(unsigned char*)lock.pBits+y*lock.Pitch;
                const unsigned char *source=wire.data()+offset+(size_t)y*row_bytes;
                if(format==11)xml1_expand_palette_row(dest,source,w,wire.data());
                else std::memcpy(dest,source,row_bytes);
            }
            checked(staging->UnlockRect(extra+level));
            offset+=(size_t)rows*row_bytes;w=std::max(1u,w/2);h=std::max(1u,h/2);
        }
        s.encode_ms+=perf_now_ms()-started;
        checked(device->CreateTexture(pw,ph,levels,0,d3d_format,D3DPOOL_DEFAULT,&texture));
        checked(device->UpdateTexture(staging,texture));
        const DWORD tag=extra;checked(texture->SetPrivateData(extra_levels_tag,&tag,sizeof(tag),0));
    } catch(...) {staging->Release();if(texture)texture->Release();throw;}
    staging->Release();
    bytes=chain_bytes(pw,ph,levels,format);
    return texture;
}
// Returns an owned reference, or null when the original texture is used.
static IDirect3DTexture8 *replacement(IDirect3DDevice8 *device,unsigned width,unsigned height,uint32_t packed,
                                      const std::vector<unsigned char> &wire,D3DFORMAT d3d_format) {
    State &s=initialize(device);
    if(!s.active && !s.dumping)return nullptr;
    const uint64_t key=texture_key(width,height,packed,wire.data());++s.keys;
    if(s.dumping)dump(s,key,width,height,packed,wire);
    if(!s.active)return nullptr;
    ++s.clock;
    auto cached=s.cache.find(key);
    if(cached!=s.cache.end()) {cached->second.touched=s.clock;++s.hits;cached->second.texture->AddRef();return cached->second.texture;}
    auto file=s.files.find(key);
    if(file==s.files.end() || s.failed.count(key))return nullptr;
    const double started=perf_now_ms();
    size_t bytes=0;IDirect3DTexture8 *texture=nullptr;
    try {texture=load(s,device,file->second,width,height,packed,wire,d3d_format,bytes);}
    catch(const std::exception &error) {
        s.failed.insert(key);++s.failures;
        std::fprintf(stderr,"[TEXTURE PACK] %ls: %s; original texture retained\n",file->second.c_str(),error.what());
        return nullptr;
    }
    const double elapsed=perf_now_ms()-started;
    ++s.loads;s.load_ms+=elapsed;s.max_load_ms=std::max(s.max_load_ms,elapsed);
    while(!s.cache.empty() && s.cache_bytes+bytes>s.budget) {
        auto oldest=s.cache.begin();
        for(auto i=s.cache.begin();i!=s.cache.end();++i)if(i->second.touched<oldest->second.touched)oldest=i;
        s.cache_bytes-=oldest->second.bytes;oldest->second.texture->Release();s.cache.erase(oldest);
    }
    s.cache.emplace(key,Entry{texture,bytes,s.clock});s.cache_bytes+=bytes;
    texture->AddRef();
    return texture;
}
static unsigned extra_levels(IDirect3DTexture8 *texture) {
    if(!texture || !state().active)return 0;
    DWORD value=0,size=sizeof(value);
    return SUCCEEDED(texture->GetPrivateData(extra_levels_tag,&value,&size))?value:0;
}
// Stage state for a replaced texture: never sample a 4x level 0 without mips.
static DWORD stage_state(D3DTEXTURESTAGESTATETYPE type,DWORD value,unsigned extra) {
    if(!extra)return value;
    if(type==D3DTSS_MIPFILTER && value==D3DTEXF_NONE) {++state().forced_mips;return D3DTEXF_LINEAR;}
    if(type==D3DTSS_MAXMIPLEVEL && value)return value+extra;
    return value;
}
static void report() {
    const State &s=state();
    if(!s.active && !s.dumping)return;
    std::printf("[TEXTURE PACK] keys=%llu loads=%llu hits=%llu failures=%llu resident=%zu bytes=%zu load_ms=%.1f decode_ms=%.1f encode_ms=%.1f max_load_ms=%.1f forced_mip_draws=%llu dumped=%zu\n",
        s.keys,s.loads,s.hits,s.failures,s.cache.size(),s.cache_bytes,s.load_ms,s.decode_ms,s.encode_ms,s.max_load_ms,s.forced_mips,s.dumped.size());
}
static void clear() {
    State &s=state();
    for(auto &entry:s.cache)entry.second.texture->Release();
    s.cache.clear();s.cache_bytes=0;
}

}
