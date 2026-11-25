// Diagnostic replay of actual XML1 submissions. No host input or desktop capture.
#include <algorithm>
#include <cstdint>
#include <vector>
#include <string>
#include <cwchar>
#include <stdexcept>
#include "../src/graphics/dx8/dx8_packet.h"
#include "../src/graphics/dx8/texture_wire_cache.h"
#include "../src/graphics/dx8/palette_texture.h"

static void checked_result(HRESULT hr,const char* expression,const char* file,int line) {
    if (FAILED(hr)) {
        std::fprintf(stderr, "D3D8 replay HRESULT %08lx at %s:%d: %s\n",
            (unsigned long)hr,file,line,expression);
        throw std::runtime_error("D3D8 call failed");
    }
}
// Evaluate each Direct3D call once, preserving its failure behavior while
// identifying device loss versus a bad resource/state operation in beta logs.
#define checked(expression) checked_result((expression),#expression,__FILE__,__LINE__)
#include "dx8_state_cache.h"
#include "program_vertex.h"
#include "pc_options_ui.h"
#include "dx8_readback.h"
#include "native_vblank.h"
#include "geometry_stream.h"
#include "display_color.h"
static DisplayColor display_color;
#include "custom_shader.h"
static CustomShader custom_shader;
static DisplayColor custom_shader_frame;
static Dx8Readback native_readback;
static NativeVblank native_vblank;
static GeometryStream geometry_stream;
// Per-window wall costs distinguish producer/IPC starvation from GPU completion
// and presentation stalls on any vendor without requiring an external profiler.
static double perf_wait_ms,perf_work_ms,perf_fence_ms,perf_present_ms;
static double perf_read_ms,perf_texture_ms;
static unsigned perf_commands,perf_fences;
static double perf_now_ms() {
    static LARGE_INTEGER frequency=[] {LARGE_INTEGER v;QueryPerformanceFrequency(&v);return v;}();
    LARGE_INTEGER now;QueryPerformanceCounter(&now);
    return 1000.0*now.QuadPart/frequency.QuadPart;
}
static void replay_read(FILE *file,void *dst,size_t bytes) {
    const double start=perf_now_ms();
    const size_t got=std::fread(dst,1,bytes,file);
    perf_read_ms+=perf_now_ms()-start;
    if(got!=bytes)throw std::runtime_error("Truncated replay data");
}

static D3DFORMAT replay_format(uint32_t format) {
    switch(format) {
        case 0:return D3DFMT_L8;
        case 7:return D3DFMT_X8R8G8B8;
        case 6:return D3DFMT_A8R8G8B8;
        case 11:return D3DFMT_A8R8G8B8; // Expand Xbox P8 with its captured palette.
        case 12:return D3DFMT_DXT1;
        case 14:return D3DFMT_DXT3;
        case 25:return D3DFMT_A8;
        default:throw std::runtime_error("Unsupported texture format");
    }
}
#include "texture_pack.h"
struct TextureEntry {
    unsigned width,height; uint32_t packed,hash;
    uint64_t touched;
    std::vector<unsigned char> pixels;
    IDirect3DTexture8* texture;
};
static std::vector<TextureEntry> texture_cache;
static size_t texture_cache_bytes;
static uint64_t texture_requests,texture_hits,completion_waits;
static uint64_t texture_creates,texture_reuses;
static bool quiet_replay;
static unsigned output_width=640,output_height=480,source_width=640,source_height=480;
static HWND presentation_window=nullptr;
static void (*source_layout_changed)()=nullptr;
static DWORD scale_coordinate(DWORD value,unsigned output,unsigned source) {
    return (DWORD)(((uint64_t)value*output+source/2)/source);
}
static D3DVIEWPORT8 output_viewport(D3DVIEWPORT8 input) {
    if((uint64_t)input.X+input.Width>source_width || (uint64_t)input.Y+input.Height>source_height)
        throw std::runtime_error("Guest viewport exceeds source dimensions");
    const auto content=xml1_fit_content(output_width,output_height,xml1_guest_display_width(source_width,source_height),source_height);
    DWORD right=content.x+scale_coordinate(input.X+input.Width,content.width,source_width);
    DWORD bottom=content.y+scale_coordinate(input.Y+input.Height,content.height,source_height);
    input.X=content.x+scale_coordinate(input.X,content.width,source_width);
    input.Y=content.y+scale_coordinate(input.Y,content.height,source_height);
    input.Width=right-input.X;input.Height=bottom-input.Y;return input;
}
// These pixels are not part of the guest render target. When the first
// packet is an actual viewport clear, initialize only the output margins;
// its color/depth/stencil flags control what happens inside the picture.
static bool clear_output_margins(IDirect3DDevice8* device) {
    auto c=xml1_fit_content(output_width,output_height,xml1_guest_display_width(source_width,source_height),source_height);
    LONG w=(LONG)output_width,h=(LONG)output_height,right=c.x+c.width,bottom=c.y+c.height;
    D3DRECT bars[4];DWORD count=0;
    if(c.y>0)bars[count++]={0,0,w,c.y};
    if(bottom<h)bars[count++]={0,bottom,w,h};
    if(c.x>0)bars[count++]={0,c.y,c.x,bottom};
    if(right<w)bars[count++]={right,c.y,w,bottom};
    if(!count)return false;
    D3DVIEWPORT8 full={0,0,output_width,output_height,0,1};
    cached_viewport(device,&full);
    checked(device->Clear(count,bars,D3DCLEAR_TARGET,0,1,0));
    return true;
}
struct WireTextureEntry {
    unsigned width,height; uint32_t packed;
    IDirect3DTexture8 *texture; // original textures only
    texture_pack::Match match;
    std::vector<unsigned char> pixels; // immutable guest mip chain for an HD token
    bool defined() const {return texture || match.valid;}
    void clear() {if(texture)texture->Release();*this={};}
};
static WireTextureEntry wire_textures[XML1_WIRE_TEXTURE_SLOTS]={};
static void clear_wire_textures() {
    for(auto& entry:wire_textures)entry.clear();
}
static uint32_t texture_hash(const std::vector<unsigned char>& pixels) {
    // A hash only narrows lookup: full byte equality is required for reuse.
    uint32_t h=2166136261u; size_t i=0;
    for(;i+4<=pixels.size();i+=4) {uint32_t word;std::memcpy(&word,pixels.data()+i,4);h=(h^word)*16777619u;}
    for(;i<pixels.size();++i) h=(h^pixels[i])*16777619u;
    return h;
}
static void clear_texture_cache() {
    clear_wire_textures();
    for(auto& entry:texture_cache) entry.texture->Release();
    texture_cache.clear(); texture_cache_bytes=0;
    texture_pack::clear();
}
static void report_texture_cache(unsigned frame) {
    std::printf("[DX8 COMPLETION] waits=%llu\n",completion_waits);
    std::printf("[DX8 TEXTURES] frame=%u requests=%llu hits=%llu retained=%zu bytes=%zu\n",
        frame,texture_requests,texture_hits,texture_cache.size(),texture_cache_bytes);
    std::printf("[DX8 STATE] requests=%llu calls=%llu\n",state_requests,state_calls);
    std::printf("[DX8 TEXTURE ALLOCATION] creates=%llu reuses=%llu\n",texture_creates,texture_reuses);
    texture_pack::report();
}
static IDirect3DTexture8* upload_original(IDirect3DDevice8* device,unsigned width,unsigned height,uint32_t packed,
                                          std::vector<unsigned char> &pixels,IDirect3DTexture8 *protected_texture,
                                          bool enabled,uint32_t hash) {
    const size_t bytes=pixels.size();
    const unsigned format=packed&255,levels=xml1_texture_levels(packed);
    IDirect3DTexture8* texture=nullptr;
    const size_t limit=64u*1024u*1024u;
    // Recycle only an evicted allocation with an identical layout. Dictionary
    // references remain immutable, and stage 0 must survive reading stage 1.
    // Managed LockRect retains the driver's GPU hazard synchronization; never
    // use NOOVERWRITE or mutate a texture still named by a wire token.
    if(enabled && (texture_cache.size()>=256 || texture_cache_bytes+bytes>limit)) {
        size_t candidate=texture_cache.size();
        for(size_t i=0;i<texture_cache.size();++i) {
            const auto &entry=texture_cache[i];
            if(entry.width!=width || entry.height!=height || entry.packed!=packed || entry.texture==protected_texture)continue;
            bool pinned=false;for(const auto &wire:wire_textures)if(wire.texture==entry.texture) {pinned=true;break;}
            if(!pinned && (candidate==texture_cache.size() || entry.touched<texture_cache[candidate].touched))candidate=i;
        }
        if(candidate<texture_cache.size()) {
            texture=texture_cache[candidate].texture;
            texture_cache_bytes-=texture_cache[candidate].pixels.size();
            texture_cache.erase(texture_cache.begin()+candidate);++texture_reuses;
        }
    }
    if(!texture) {checked(device->CreateTexture(width,height,levels,0,replay_format(format),D3DPOOL_MANAGED,&texture));++texture_creates;}
    unsigned w=width,h=height;size_t offset=format==11?1024:0;
    try {
        for(unsigned level=0;level<levels;++level) {
            unsigned rows=(format==12||format==14)?(h+3)/4:h;
            unsigned row_bytes=(format==12||format==14)?((w+3)/4)*(format==12?8:16):w*((format==6||format==7)?4:1);
            D3DLOCKED_RECT lock={}; checked(texture->LockRect(level,&lock,nullptr,0));
            for(unsigned y=0;y<rows;++y) {
                unsigned char *dest=(unsigned char*)lock.pBits+y*lock.Pitch;
                const unsigned char *source=pixels.data()+offset+y*row_bytes;
                if(format==11) {
                    xml1_expand_palette_row(dest,source,w,pixels.data());
                } else std::memcpy(dest,source,row_bytes);
            }
            checked(texture->UnlockRect(level));
            offset+=(size_t)rows*row_bytes;
            w=w>1?w/2:1; h=h>1?h/2:1;
        }
        if(enabled && bytes<=limit) {
            while(!texture_cache.empty() && (texture_cache.size()>=256 || texture_cache_bytes+bytes>limit)) {
                size_t oldest=0;
                for(size_t i=1;i<texture_cache.size();++i) if(texture_cache[i].touched<texture_cache[oldest].touched) oldest=i;
                texture_cache_bytes-=texture_cache[oldest].pixels.size();
                texture_cache[oldest].texture->Release();
                texture_cache.erase(texture_cache.begin()+oldest);
            }
            texture_cache.push_back({width,height,packed,hash,texture_requests,std::move(pixels),texture});
            texture_cache_bytes+=bytes;
            texture->AddRef(); // Cache owns original reference; caller releases this one.
        }
    } catch(...) {texture->Release();throw;}
    return texture;
}
static IDirect3DTexture8* read_texture(IDirect3DDevice8* device,FILE* file,unsigned width,unsigned height,uint32_t packed,IDirect3DTexture8* protected_texture=nullptr,
                                     WireTextureEntry *definition=nullptr) {
    const size_t bytes=xml1_texture_bytes(width,height,packed);
    if(!bytes) throw std::runtime_error("Invalid texture mip chain");
    std::vector<unsigned char> pixels(bytes);
    replay_read(file,pixels.data(),bytes);
    const double texture_started=perf_now_ms();
    static const bool enabled=std::getenv("XML1_DX8_NO_TEXTURE_CACHE")==nullptr;
    const uint32_t hash=enabled?texture_hash(pixels):0;
    ++texture_requests;
    if(enabled) for(auto& entry:texture_cache) {
        if(entry.width==width && entry.height==height && entry.packed==packed && entry.hash==hash && entry.pixels==pixels) {
            entry.touched=texture_requests; ++texture_hits;
            entry.texture->AddRef();perf_texture_ms+=perf_now_ms()-texture_started;return entry.texture;
        }
    }
    texture_pack::Match match;
    auto *texture=texture_pack::replacement(device,width,height,packed,pixels,replay_format(packed&255),&match,protected_texture);
    // A temporary original must not mask a valid replacement on a later draw.
    if(!texture)texture=upload_original(device,width,height,packed,pixels,protected_texture,enabled && !match.valid,hash);
    if(definition && match.valid){definition->match=match;definition->pixels=std::move(pixels);}
    perf_texture_ms+=perf_now_ms()-texture_started;return texture;
}
static IDirect3DTexture8* read_wire_texture(IDirect3DDevice8* device,FILE* file,unsigned width,unsigned height,uint32_t packed,bool version7,IDirect3DTexture8* protected_texture=nullptr,bool version9=false) {
    if(version9) {
        uint32_t count;replay_read(file,&count,4);
        if(count>XML1_WIRE_TEXTURE_SLOTS)throw std::runtime_error("Invalid texture eviction count");
        for(unsigned i=0;i<count;++i) {
            uint32_t id;replay_read(file,&id,4);
            if(!id || id>XML1_WIRE_TEXTURE_SLOTS || !wire_textures[id-1].defined())throw std::runtime_error("Invalid texture eviction id");
            wire_textures[id-1].clear();
        }
    }
    if(!version7) return read_texture(device,file,width,height,packed,protected_texture);
    uint32_t token;
    replay_read(file,&token,4);
    if(!token) return read_texture(device,file,width,height,packed,protected_texture);
    uint32_t id=token&~XML1_WIRE_TEXTURE_DEFINE;
    if(!id || id>XML1_WIRE_TEXTURE_SLOTS) throw std::runtime_error("Invalid texture reference id");
    auto& entry=wire_textures[id-1];
    if(token&XML1_WIRE_TEXTURE_DEFINE) {
        if(entry.defined())throw std::runtime_error("Duplicate texture definition");
        auto *texture=read_texture(device,file,width,height,packed,protected_texture,&entry);
        entry.width=width;entry.height=height;entry.packed=packed;
        if(!entry.match.valid){entry.texture=texture;texture->AddRef();}
        return texture;
    }
    if(!entry.defined() || entry.width!=width || entry.height!=height || entry.packed!=packed)
        throw std::runtime_error("Undefined or mismatched texture reference");
    if(entry.texture){entry.texture->AddRef();return entry.texture;}
    // Resolves in O(1) on a hit; after a budget eviction recreate from the
    // original bytes held for the token, without invalidating the wire ID.
    auto &state=texture_pack::state();
    auto *texture=texture_pack::acquire(state,device,width,height,packed,entry.pixels,replay_format(packed&255),entry.match,protected_texture);
    if(texture)return texture;
    texture=upload_original(device,width,height,packed,entry.pixels,protected_texture,false,0);
    if(state.failed.count(entry.match.chain)) { // permanently invalid PNG, not transient pressure
        entry.clear();entry={width,height,packed,texture};texture->AddRef();
    }
    return texture;
}
static DWORD blend(DWORD v) {
    if (v <= 1) return v + 1;
    if (v >= 0x300 && v <= 0x308) return v - 0x300 + 3;
    throw std::runtime_error("Unsupported Xbox blend");
}
static void capture_backbuffer(IDirect3DDevice8* device, const char* path) {
    IDirect3DSurface8* surface = nullptr;
    checked(native_readback.surface(device, false, &surface));
    D3DSURFACE_DESC desc = {};
    checked(surface->GetDesc(&desc));
    if (desc.Format != D3DFMT_X8R8G8B8 && desc.Format != D3DFMT_A8R8G8B8)
        throw std::runtime_error("Unsupported capture format");
    D3DLOCKED_RECT lock = {};
    checked(surface->LockRect(&lock, nullptr, D3DLOCK_READONLY));
    FILE* file = std::fopen(path, "wb");
    if (!file) throw std::runtime_error("Cannot open capture");
    BITMAPFILEHEADER header = {};
    BITMAPINFOHEADER info = {};
    const DWORD pitch = (desc.Width * 3 + 3) & ~3u;
    header.bfType = 0x4d42;
    header.bfOffBits = sizeof(header) + sizeof(info);
    header.bfSize = header.bfOffBits + pitch * desc.Height;
    info.biSize = sizeof(info); info.biWidth = desc.Width;
    info.biHeight = -(LONG)desc.Height; info.biPlanes = 1; info.biBitCount = 24;
    info.biSizeImage = pitch * desc.Height;
    std::fwrite(&header, sizeof(header), 1, file);
    std::fwrite(&info, sizeof(info), 1, file);
    std::vector<unsigned char> row(pitch);
    for (DWORD y=0; y<desc.Height; ++y) {
        const auto* source = (const unsigned char*)lock.pBits + y*lock.Pitch;
        for (DWORD x=0; x<desc.Width; ++x) std::memcpy(row.data()+x*3, source+x*4, 3);
        if (std::fwrite(row.data(), pitch, 1, file) != 1) throw std::runtime_error("Capture write failed");
    }
    std::fclose(file); checked(surface->UnlockRect()); surface->Release();
    std::printf("Own DX8 backbuffer saved: %s\n", path);
}
static void complete_rendering(IDirect3DDevice8* device) {
    const double started=perf_now_ms();
    IDirect3DSurface8* surface=nullptr;
    checked(native_readback.surface(device, true, &surface));
    D3DLOCKED_RECT lock={};
    HRESULT hr=surface->LockRect(&lock,nullptr,D3DLOCK_READONLY);
    if (SUCCEEDED(hr)) hr=surface->UnlockRect();
    surface->Release(); checked(hr); ++completion_waits;
    perf_fence_ms+=perf_now_ms()-started;++perf_fences;
}
static void requested_native_capture(IDirect3DDevice8 *device) {
    const char *path=std::getenv("XML1_PC_CAPTURE_REQUEST");
    if(!path || !*path)return;
    FILE *request=std::fopen(path,"rb");if(!request)return;
    char line[64]={},extra;unsigned id=0;static unsigned previous=0;
    bool complete=std::fgets(line,sizeof(line),request) && std::strchr(line,'\n');std::fclose(request);
    if(!complete)return;
    if(std::sscanf(line,"%u %c",&id,&extra)!=1)throw std::runtime_error("Invalid native capture request");
    if(id<=previous)return;
    std::string output=std::string(path)+"-"+std::to_string(id)+".bmp";
    if(GetFileAttributesA(output.c_str())!=INVALID_FILE_ATTRIBUTES)throw std::runtime_error("Native capture already exists");
    capture_backbuffer(device,output.c_str());previous=id;
}
static void wait_native_vblank(IDirect3DDevice8* device) {
        (void)device;
        char display[32]={};
        if(xml1_pc_channel_get_display(display,sizeof(display)))native_vblank.select_display(display);
        const double started=perf_now_ms();
        native_vblank.wait();
        const unsigned polls=0;
        static unsigned waits;static double total_ms,max_ms;static uint64_t total_polls;
        const double elapsed=perf_now_ms()-started;
        total_ms+=elapsed;max_ms=std::max(max_ms,elapsed);total_polls+=polls;++waits;
        if(elapsed>=50)std::printf("[DX8 VBLANK SLOW] wait=%u ms=%.3f polls=%u\n",waits,elapsed,polls);
        if(waits%120==0) {
            std::printf("[DX8 VBLANK] waits=120 mean_ms=%.3f max_ms=%.3f polls=%llu\n",total_ms/120,max_ms,total_polls);
            total_ms=max_ms=0;total_polls=0;
        }
}
static bool replay_stream(IDirect3DDevice8* device, FILE* file, const char* capture, bool live=false,unsigned batch_depth=0) {
    static bool frame_open=false;
    static bool completion_pending=false;
    auto read = [&](void* dst, size_t bytes) {
        replay_read(file,dst,bytes);
    };
    char magic[8]; read(magic,8);
    if(!std::memcmp(magic,"XMLDX8B1",8)) {
        uint32_t count;read(&count,4);
        if(batch_depth || !count || count>10000)throw std::runtime_error("Invalid ordered command batch");
        bool presented=false;
        for(unsigned i=0;i<count;++i) {
            presented=replay_stream(device,file,i+1==count?capture:nullptr,live,1);
            if(presented && i+1!=count)throw std::runtime_error("Presentation must end a command batch");
        }
        return presented;
    }
    if(!std::memcmp(magic,"XMLDX8S1",8) || !std::memcmp(magic,"XMLDX8S2",8)) {
        bool reset_envelope=magic[7]=='2';
        uint32_t dimensions[2];read(dimensions,sizeof(dimensions));
        if(!dimensions[0]||!dimensions[1]||dimensions[0]>4096||dimensions[1]>4096)
            throw std::runtime_error("Invalid source dimensions");
        source_width=dimensions[0];source_height=dimensions[1];
        unsigned aspect=xml1_guest_display_width(source_width,source_height);
        bool changed=pc_ui::aspect_width!=aspect || pc_ui::aspect_height!=source_height;
        pc_ui::aspect_width=aspect;pc_ui::aspect_height=source_height;
        if(changed && source_layout_changed)source_layout_changed();
        if(reset_envelope) {
            uint32_t reset;read(&reset,4);
            if(reset>1 || (reset && frame_open)) throw std::runtime_error("Invalid texture dictionary reset");
            if(reset) clear_wire_textures();
        }
        read(magic,8);
    }
    if(!std::memcmp(magic,"XMLDX8V1",8)) {
        wait_native_vblank(device);
        return false;
    }
    const bool clipped_clear=!std::memcmp(magic,"XMLDX8C6",8);
    if(clipped_clear || !std::memcmp(magic,"XMLDX8C4",8) || !std::memcmp(magic,"XMLDX8C5",8)) {
        uint32_t clear[5]; read(clear,sizeof(clear));
        if((clear[0]&~0xF3u)||((clear[0]&0xF0)!=0&&(clear[0]&0xF0)!=0xF0)||clear[4]>4096)
            throw std::runtime_error("Unsupported clear command");
        std::vector<D3DRECT> rects(clear[4]);
        if(clear[4]) read(rects.data(),rects.size()*sizeof(D3DRECT));
        for(auto& rect:rects) {
            if(rect.x1<0||rect.y1<0||rect.x2<rect.x1||rect.y2<rect.y1||rect.x2>(LONG)source_width||rect.y2>(LONG)source_height)
                throw std::runtime_error("Invalid guest clear rectangle");
            D3DVIEWPORT8 area={(DWORD)rect.x1,(DWORD)rect.y1,(DWORD)(rect.x2-rect.x1),(DWORD)(rect.y2-rect.y1),0,1};
            area=output_viewport(area);
            rect={(LONG)area.X,(LONG)area.Y,(LONG)(area.X+area.Width),(LONG)(area.Y+area.Height)};
        }
        bool margins_cleared=false;
        if(!frame_open) {
            if(clipped_clear) margins_cleared=clear_output_margins(device);
            else {
                D3DVIEWPORT8 full={0,0,output_width,output_height,0,1};
                cached_viewport(device,&full);
                checked(device->Clear(0,nullptr,D3DCLEAR_TARGET|D3DCLEAR_ZBUFFER|D3DCLEAR_STENCIL,0,1.0f,0));
            }
        }
        frame_open=true;
        DWORD flags=((clear[0]&0xF0)?D3DCLEAR_TARGET:0)|((clear[0]&1)?D3DCLEAR_ZBUFFER:0)|((clear[0]&2)?D3DCLEAR_STENCIL:0);
        float depth; std::memcpy(&depth,&clear[2],4);
        if(clipped_clear) {
            /* C6 boxes are already intersected in guest space. Native D3D8
             * additionally clips Clear to its current viewport, which might
             * still belong to an unrelated draw. A following draw sets its own. */
            auto content=output_viewport({0,0,source_width,source_height,0,1});
            cached_viewport(device,&content);
            rects.erase(std::remove_if(rects.begin(),rects.end(),[](const D3DRECT& r){
                return r.x1==r.x2 || r.y1==r.y2; // may collapse when downscaling
            }),rects.end());
        } else if(!clear[4]) {
            auto content=xml1_fit_content(output_width,output_height,xml1_guest_display_width(source_width,source_height),source_height);
            rects.push_back({content.x,content.y,content.x+content.width,content.y+content.height});
        }
        if(!rects.empty()) checked(device->Clear((DWORD)rects.size(),rects.data(),flags,clear[1],depth,clear[3]));
        // C4 retains its historical completion acknowledgement. C5/C6 only
        // acknowledges ordered submission; an explicit F8 fence or R8 swap
        // still performs the GPU completion barrier before publishing a fence.
        if(magic[7]=='4') {complete_rendering(device);completion_pending=false;}
        else if(!rects.empty() || margins_cleared) completion_pending=true;
        return false;
    }
    const bool version9=magic[7]=='9';
    const bool version8=magic[7]=='8'||version9;
    const bool version7=magic[7]=='7'||version8;
    const bool version6=magic[7]=='6'||version7;
    const bool version5=magic[7]=='5'||version6;
    const bool version4=magic[7]=='4'||version5;
    const bool version3=magic[7]=='3'||version4;
    const bool version2=magic[7]=='2'||version3;
    const bool flush=!std::memcmp(magic,"XMLDX8F",7);
    const bool ordered=!std::memcmp(magic,"XMLDX8D8",8)||!std::memcmp(magic,"XMLDX8D9",8);
    if ((!flush && !ordered && std::memcmp(magic,"XMLDX8R",7)) || (!version2 && magic[7]!='1')) {
        // Preserve the actual bytes at a protocol failure: a generic version
        // error cannot distinguish an unsupported producer from stream drift.
        char detail[160];
        std::snprintf(detail,sizeof(detail),
            "Invalid replay version: bytes=%02X%02X%02X%02X%02X%02X%02X%02X batch_depth=%u",
            (unsigned char)magic[0],(unsigned char)magic[1],(unsigned char)magic[2],(unsigned char)magic[3],
            (unsigned char)magic[4],(unsigned char)magic[5],(unsigned char)magic[6],(unsigned char)magic[7],batch_depth);
        throw std::runtime_error(detail);
    }
    uint32_t count; read(&count,4);
    if(ordered && !count)return false;
    /* A submitted C5 clear is still pending even with no recorded draws.
     * Never publish a guest fence until that native clear has completed. */
    if (flush && !count) {
        if(completion_pending) {complete_rendering(device);completion_pending=false;}
        return false;
    }
    if ((!live && !count && !frame_open) || count>10000) throw std::runtime_error("Invalid draw count");
    if (!frame_open) { D3DVIEWPORT8 full={0,0,output_width,output_height,0,1};cached_viewport(device,&full);checked(device->Clear(0,nullptr,D3DCLEAR_TARGET|D3DCLEAR_ZBUFFER|D3DCLEAR_STENCIL,0,1.0f,0)); }
    frame_open=true;
    checked(device->BeginScene());
    for (uint32_t n=0;n<count;++n) {
        uint32_t header[6]={0,0,0,14,0x142,6},rs[168],ts[128];
        D3DVIEWPORT8 viewport; D3DMATRIX matrices[3];
        read(header,version5?sizeof(header):version2?20:12); read(&viewport,sizeof(viewport));
        read(matrices,sizeof(matrices)); read(rs,sizeof(rs)); read(ts,sizeof(ts));
        D3DMATERIAL8 material={}; uint32_t light_mask=0; D3DLIGHT8 lights[32]={};
        if(version3) {
            static_assert(sizeof(material)==68 && sizeof(D3DLIGHT8)==104,"DX8 lighting wire layout");
            read(&material,sizeof(material)); read(&light_mask,4);
            for(unsigned i=0;i<32;++i) if(light_mask&(1u<<i)) read(&lights[i],sizeof(D3DLIGHT8));
        }
        uint32_t second_header[3]={}; D3DMATRIX texture_matrices[2]={};
        if(version4) { read(second_header,sizeof(second_header)); read(texture_matrices,sizeof(texture_matrices)); }
        auto width=header[0],height=header[1],vertices=header[2];
        if ((!width!=!height)||(!width&&(!version9||header[3]))||width>4096||height>4096||vertices<3||vertices>1000000)
            throw std::runtime_error("Invalid replay geometry");
        if(!xml1_fvf_stride(header[4])||(!version6&&(header[3]>255||second_header[2]>255)))
            throw std::runtime_error("Unsupported replay format");
        const unsigned stride=xml1_fvf_stride(header[4]);
        if((header[5]!=5&&header[5]!=6&&header[5]!=7)||(header[5]==5&&vertices%3)) throw std::runtime_error("Unsupported primitive type");
        // V9 zero dimensions encode the actual NULL stage-0 binding.
        IDirect3DTexture8* texture=width?read_wire_texture(device,file,width,height,header[3],version7,nullptr,version9):nullptr;
        IDirect3DTexture8* second_texture=second_header[0]?read_wire_texture(device,file,second_header[0],second_header[1],second_header[2],version7,texture,version9):nullptr;
        unsigned index_count=0,vertex_count=vertices;
        if(version9) {
            read(&index_count,4);read(&vertex_count,4);
            if(!vertex_count || vertex_count>1000000 ||
                (index_count && (index_count!=vertices || vertex_count>65536)) ||
                (!index_count && vertex_count!=vertices))throw std::runtime_error("Invalid indexed geometry layout");
        }
        static std::vector<unsigned char> vb;
        static std::vector<uint16_t> indices;
        vb.resize(vertex_count*stride);read(vb.data(),vb.size());
        indices.resize(index_count);
        if(index_count) {
            read(indices.data(),indices.size()*2);
            for(auto index:indices)if(index>=vertex_count)throw std::runtime_error("Index exceeds supplied vertices");
        }
        viewport=output_viewport(viewport);
        cached_viewport(device,&viewport);
        cached_transform(device,D3DTS_WORLD,&matrices[0]);
        cached_transform(device,D3DTS_VIEW,&matrices[1]);
        cached_transform(device,D3DTS_PROJECTION,&matrices[2]);
        if(version4) for(unsigned i=0;i<2;++i) cached_transform(device,(D3DTRANSFORMSTATETYPE)(D3DTS_TEXTURE0+i),&texture_matrices[i]);
        cached_shader(device,header[4]==0x80000001u?program_vertex_shader(device):header[4],false); cached_shader(device,0,true);
        auto state=[&](D3DRENDERSTATETYPE type,DWORD value){ cached_render_state(device,type,value); };
        state(D3DRS_LIGHTING,rs[102]); state(D3DRS_SPECULARENABLE,rs[103]);
        if(version3) {
            if(rs[137]||rs[141]) throw std::runtime_error("Unsupported vertex blend or two-sided lighting");
            cached_material(device,&material);
            for(unsigned i=0;i<32;++i) {
                if(light_mask&(1u<<i)) cached_light(device,i,&lights[i]);
                cached_light_enable(device,i,(light_mask&(1u<<i))!=0);
            }
            state(D3DRS_LOCALVIEWER,rs[104]); state(D3DRS_COLORVERTEX,rs[105]);
            state(D3DRS_SPECULARMATERIALSOURCE,rs[110]); state(D3DRS_DIFFUSEMATERIALSOURCE,rs[111]);
            state(D3DRS_AMBIENTMATERIALSOURCE,rs[112]); state(D3DRS_EMISSIVEMATERIALSOURCE,rs[113]);
            state(D3DRS_AMBIENT,rs[115]); state(D3DRS_NORMALIZENORMALS,rs[142]);
        }
        state(D3DRS_FOGENABLE,rs[92]); state(D3DRS_ZENABLE,rs[143]);
        state(D3DRS_ZWRITEENABLE,rs[64]); state(D3DRS_ZFUNC,rs[57]-0x200+1);
        state(D3DRS_ALPHABLENDENABLE,rs[59]); state(D3DRS_ALPHATESTENABLE,rs[60]);
        state(D3DRS_ALPHAFUNC,rs[58]-0x200+1); state(D3DRS_ALPHAREF,rs[61]);
        state(D3DRS_SRCBLEND,blend(rs[62])); state(D3DRS_DESTBLEND,blend(rs[63]));
        if ((rs[147]!=0 && rs[147]!=0x900 && rs[147]!=0x901) || rs[144] || rs[139]!=0x1B02 || rs[74]!=0x8006) {
            std::fprintf(stderr,"Unsupported states: cull=%08X stencil=%08X fill=%08X blend=%08X\n",rs[147],rs[144],rs[139],rs[74]);
            throw std::runtime_error("Unsupported replay culling/stencil/fill/blend mode");
        }
        state(D3DRS_CULLMODE,rs[147]==0?D3DCULL_NONE:rs[147]==0x900?D3DCULL_CW:D3DCULL_CCW);
        state(D3DRS_STENCILENABLE,FALSE);
        state(D3DRS_BLENDOP,D3DBLENDOP_ADD);
        state(D3DRS_COLORWRITEENABLE, ((rs[67]&0x10000)?1:0)|((rs[67]&0x100)?2:0)|((rs[67]&1)?4:0)|((rs[67]&0x1000000)?8:0));
        if(version4) state(D3DRS_TEXTUREFACTOR,rs[148]);
        const D3DTEXTURESTAGESTATETYPE mapping[22]={D3DTSS_ADDRESSU,D3DTSS_ADDRESSV,D3DTSS_ADDRESSW,
            D3DTSS_MAGFILTER,D3DTSS_MINFILTER,D3DTSS_MIPFILTER,D3DTSS_MIPMAPLODBIAS,
            D3DTSS_MAXMIPLEVEL,D3DTSS_MAXANISOTROPY,(D3DTEXTURESTAGESTATETYPE)0,
            (D3DTEXTURESTAGESTATETYPE)0,(D3DTEXTURESTAGESTATETYPE)0,
            D3DTSS_COLOROP,D3DTSS_COLORARG0,D3DTSS_COLORARG1,D3DTSS_COLORARG2,
            D3DTSS_ALPHAOP,D3DTSS_ALPHAARG0,D3DTSS_ALPHAARG1,D3DTSS_ALPHAARG2,
            D3DTSS_RESULTARG,D3DTSS_TEXTURETRANSFORMFLAGS};
        for (unsigned stage=0;stage<4;++stage) {
            const unsigned extra=texture_pack::extra_levels(stage==0?texture:stage==1?second_texture:nullptr);
            for (unsigned t=0;t<22;++t) if (mapping[t])
                cached_texture_state(device,stage,mapping[t],texture_pack::stage_state(mapping[t],ts[stage*32+t],extra));
            cached_texture_state(device,stage,D3DTSS_TEXCOORDINDEX,ts[stage*32+28]);
            cached_texture_binding(device,stage,stage==0?texture:stage==1?second_texture:nullptr);
        }
        auto type=header[5]==5?D3DPT_TRIANGLELIST:header[5]==6?D3DPT_TRIANGLESTRIP:D3DPT_TRIANGLEFAN;
        unsigned primitives=header[5]==5?vertices/3:vertices-2;
        static const bool legacy_geometry=std::getenv("XML1_DX8_LEGACY_GEOMETRY")!=nullptr;
        if(legacy_geometry) {
            if(index_count)checked(device->DrawIndexedPrimitiveUP(type,0,vertex_count,primitives,indices.data(),D3DFMT_INDEX16,vb.data(),stride));
            else checked(device->DrawPrimitiveUP(type,primitives,vb.data(),stride));
        } else geometry_stream.draw(device,type,primitives,vb.data(),vertex_count,stride,index_count?indices.data():nullptr,index_count);
        if(texture) texture->Release();
        if(second_texture) second_texture->Release();
        if (!live && !quiet_replay) std::printf("Replayed game draw %u: %u vertices, %ux%u format %u\n",n+1,vertices,width,height,header[3]);
    }
    if(!flush && !ordered && live) {pc_ui::update();}
    checked(device->EndScene());
    if(ordered) {completion_pending=true;return false;}
    if (flush) { complete_rendering(device); completion_pending=false; return false; }
    if(live) {
        static Xml1PcInputSnapshot color_settings={};
        static bool color_known=false;
        color_known=xml1_pc_channel_read(&color_settings,1) || color_known;
        if(color_known) {
            display_color.apply(device,native_readback,color_settings.settings.brightness,color_settings.settings.gamma);
        std::string shader_path;
        if(!std::strcmp(color_settings.settings.shader,"@build")) {
            if(const char *configured=std::getenv("XML1_DX8_CUSTOM_SHADER"))shader_path=configured;
        } else if(*color_settings.settings.shader)shader_path="shaders/"+std::string(color_settings.settings.shader);
        DWORD shader=custom_shader.load(device,shader_path.c_str());
        unsigned shader_result=shader?1:(shader_path.empty()?0:2);
        if(shader) {
            auto content=xml1_fit_content(output_width,output_height,xml1_guest_display_width(source_width,source_height),source_height);
            const RECT area={content.x,content.y,content.x+content.width,content.y+content.height};
            try {custom_shader_frame.apply(device,native_readback,100,100,shader,&area);}
            catch(const std::exception &error) {
                std::fprintf(stderr,"[CUSTOM SHADER] Effect disabled: %s\n",error.what());
                custom_shader.disable();custom_shader_frame.clear();
                shader_result=2;
            }
        }
        xml1_pc_channel_shader_result(color_settings.settings.shader,shader_result);
        }
    }
    if (capture) capture_backbuffer(device,capture);
    else complete_rendering(device);
    if(live)requested_native_capture(device);
    if (live) {
        double started=perf_now_ms();
        checked(device->Present(nullptr,nullptr,presentation_window,nullptr));
        perf_present_ms+=perf_now_ms()-started;
    }
    frame_open=false;completion_pending=false;
    if(!version8) clear_wire_textures();
    return true;
}
static void replay(IDirect3DDevice8* device, const char* path, const char* capture) {
    clear_wire_textures(); // Each capture file starts an independent stream.
    FILE* file = std::fopen(path,"rb");
    if (!file) throw std::runtime_error("Cannot open replay");
    try {
        bool last_presented=false;
        for (;;) {
            int next=std::fgetc(file);
            if (next==EOF) break;
            std::ungetc(next,file);
            last_presented=replay_stream(device,file,capture);
        }
        if (!last_presented) throw std::runtime_error("Replay ended without a complete frame");
    }
    catch (...) { std::fclose(file); throw; }
    std::fclose(file);
}
