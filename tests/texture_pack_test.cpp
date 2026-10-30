#include <windows.h>
typedef BOOL WINBOOL;
#define __MSABI_LONG(value) value##L
#include <d3d8.h>
#include <cstdio>
#include <cstring>
#include "../renderer/dx8_replay.h"
#define REQUIRE(x) do {if(!(x))throw std::runtime_error(#x);}while(0)
// HD texture pack contract: keys agree with the pack builder, DXT encoding is
// faithful, and a replaced texture renders through the live draw path.
template<class T> static void append(std::vector<unsigned char>& out,const T& value) {
    auto p=(const unsigned char*)&value;out.insert(out.end(),p,p+sizeof(value));
}
static uint64_t md5_prefix(const char *text) {texture_pack::Md5 md5;md5.update(text,std::strlen(text));return md5.key();}
static void decode_block(const unsigned char *block,bool dxt3,unsigned char out[16][4]) {
    if(dxt3)block+=8;
    const uint16_t c0=block[0]|block[1]<<8,c1=block[2]|block[3]<<8;
    int p[4][4];texture_pack::unpack565(c0,p[0]);texture_pack::unpack565(c1,p[1]);p[0][3]=p[1][3]=255;
    for(unsigned c=0;c<3;++c) {
        if(c0>c1 || dxt3){p[2][c]=(2*p[0][c]+p[1][c])/3;p[3][c]=(p[0][c]+2*p[1][c])/3;}
        else {p[2][c]=(p[0][c]+p[1][c])/2;p[3][c]=0;}
    }
    p[2][3]=255;p[3][3]=(c0>c1 || dxt3)?255:0;
    uint32_t bits;std::memcpy(&bits,block+4,4);
    for(unsigned i=0;i<16;++i) {
        const unsigned j=bits>>(i*2)&3;
        out[i][2]=(unsigned char)p[j][0];out[i][1]=(unsigned char)p[j][1];out[i][0]=(unsigned char)p[j][2];out[i][3]=(unsigned char)p[j][3];
        if(dxt3)out[i][3]=(unsigned char)(((block[-8+i/2]>>((i&1)*4))&15)*17);
    }
}
static void write_png(const wchar_t *path,unsigned width,unsigned height,const std::vector<unsigned char> &bgra) {
    IWICImagingFactory *factory=nullptr;IWICStream *stream=nullptr;IWICBitmapEncoder *encoder=nullptr;
    IWICBitmapFrameEncode *frame=nullptr;
    REQUIRE(SUCCEEDED(CoCreateInstance(CLSID_WICImagingFactory,nullptr,CLSCTX_INPROC_SERVER,IID_PPV_ARGS(&factory))));
    REQUIRE(SUCCEEDED(factory->CreateStream(&stream)));
    REQUIRE(SUCCEEDED(stream->InitializeFromFilename(path,GENERIC_WRITE)));
    REQUIRE(SUCCEEDED(factory->CreateEncoder(GUID_ContainerFormatPng,nullptr,&encoder)));
    REQUIRE(SUCCEEDED(encoder->Initialize(stream,WICBitmapEncoderNoCache)));
    REQUIRE(SUCCEEDED(encoder->CreateNewFrame(&frame,nullptr)));
    REQUIRE(SUCCEEDED(frame->Initialize(nullptr)));
    REQUIRE(SUCCEEDED(frame->SetSize(width,height)));
    WICPixelFormatGUID format=GUID_WICPixelFormat32bppBGRA;
    REQUIRE(SUCCEEDED(frame->SetPixelFormat(&format)) && format==GUID_WICPixelFormat32bppBGRA);
    REQUIRE(SUCCEEDED(frame->WritePixels(height,width*4,(UINT)bgra.size(),(BYTE*)bgra.data())));
    REQUIRE(SUCCEEDED(frame->Commit()) && SUCCEEDED(encoder->Commit()));
    frame->Release();encoder->Release();stream->Release();factory->Release();
}
static std::vector<unsigned char> solid(unsigned width,unsigned height,uint32_t bgra) {
    std::vector<unsigned char> out((size_t)width*height*4);
    for(size_t i=0;i<out.size();i+=4)std::memcpy(&out[i],&bgra,4);
    return out;
}
static DWORD pixel(IDirect3DDevice8 *device,unsigned x,unsigned y) {
    IDirect3DSurface8 *surface=nullptr;checked(native_readback.surface(device,false,&surface));
    D3DLOCKED_RECT lock={};checked(surface->LockRect(&lock,nullptr,D3DLOCK_READONLY));
    DWORD value=*(DWORD*)((char*)lock.pBits+y*lock.Pitch+x*4)&0xffffff;
    checked(surface->UnlockRect());surface->Release();return value;
}
// One 4x4 DXT3 texture drawn over the whole 640x480 guest viewport.
static void draw(IDirect3DDevice8 *device,const unsigned char block[16],DWORD mip_filter) {
    std::vector<unsigned char> packet;uint32_t count=1,zero=0;append(packet,count);
    uint32_t header[]={4,4,3,14,0x142,5};append(packet,header);
    D3DVIEWPORT8 viewport={0,0,640,480,0,1};append(packet,viewport);
    D3DMATRIX identity={};identity._11=identity._22=identity._33=identity._44=1;
    for(unsigned i=0;i<3;++i)append(packet,identity);
    uint32_t rs[168]={},ts[128]={};rs[57]=rs[58]=0x207;rs[62]=1;rs[67]=0x01010101;rs[139]=0x1b02;rs[74]=0x8006;
    for(unsigned s=0;s<4;++s) {ts[s*32]=ts[s*32+1]=ts[s*32+2]=1;ts[s*32+3]=ts[s*32+4]=2;ts[s*32+12]=s?1:2;ts[s*32+14]=2;ts[s*32+16]=1;}
    ts[5]=mip_filter;
    append(packet,rs);append(packet,ts);D3DMATERIAL8 material={};append(packet,material);append(packet,zero);
    uint32_t second[3]={};append(packet,second);append(packet,identity);append(packet,identity);append(packet,zero);
    packet.insert(packet.end(),block,block+16);
    struct V {float x,y,z;DWORD color;float u,v;};V vertices[]={{-1,-1,0,~0u,0,1},{3,-1,0,~0u,2,1},{-1,3,0,~0u,0,-1}};
    append(packet,vertices);
    FILE *f=std::fopen("texture-pack-test.tmp","w+b");REQUIRE(f);
    REQUIRE(std::fwrite("XMLDX8R8",1,8,f)==8 && std::fwrite(packet.data(),1,packet.size(),f)==packet.size());
    std::rewind(f);replay_stream(device,f,nullptr,false);std::fclose(f);
}
int main() {
 try {
    REQUIRE(md5_prefix("")==0xd41d8cd98f00b204ull);
    REQUIRE(md5_prefix("abc")==0x900150983cd24fb0ull);
    unsigned char ramp[16];for(unsigned i=0;i<16;++i)ramp[i]=(unsigned char)i;
    REQUIRE(texture_pack::texture_key(4,4,14|(3u<<8),ramp)==0xf3f723a607a7a7c3ull); // Mip count is not part of the key.
    std::vector<unsigned char> p8(1024+16);
    for(unsigned i=0;i<1024;++i)p8[i]=(unsigned char)(i*7);
    for(unsigned i=0;i<16;++i)p8[1024+i]=(unsigned char)(i*3);
    REQUIRE(texture_pack::texture_key(4,4,11,p8.data())==0xae362924c52abe1bull);
    puts("PASS texture keys match the pack builder's MD5 definition");

    unsigned char block[16][4],decoded[16][4],encoded[16];
    // Four colors on one line are exactly representable apart from 565 rounding.
    for(unsigned i=0;i<16;++i){const unsigned t=(i*7)%4;block[i][0]=(unsigned char)(t*80);block[i][1]=(unsigned char)(255-t*60);block[i][2]=(unsigned char)(40+t*40);block[i][3]=(unsigned char)(i*17);}
    texture_pack::encode_color(block,false,encoded+8);
    for(unsigned i=0;i<8;++i)encoded[i]=(unsigned char)(((block[i*2][3]*15+127)/255)|((block[i*2+1][3]*15+127)/255)<<4);
    decode_block(encoded,true,decoded);
    for(unsigned i=0;i<16;++i) {
        for(unsigned c=0;c<3;++c)REQUIRE(std::abs(decoded[i][c]-block[i][c])<=12);
        REQUIRE(decoded[i][3]==block[i][3]);
    }
    for(unsigned i=0;i<16;++i)block[i][3]=(i&5)?255:0;
    texture_pack::encode_color(block,true,encoded);decode_block(encoded,false,decoded);
    for(unsigned i=0;i<16;++i) {
        REQUIRE(decoded[i][3]==block[i][3]);
        if(block[i][3])for(unsigned c=0;c<3;++c)REQUIRE(std::abs(decoded[i][c]-block[i][c])<=48); // Three colors for four.
    }
    for(unsigned i=0;i<16;++i){block[i][0]=10;block[i][1]=200;block[i][2]=90;block[i][3]=255;}
    texture_pack::encode_color(block,true,encoded);decode_block(encoded,false,decoded);
    for(unsigned i=0;i<16;++i){REQUIRE(decoded[i][3]==255);for(unsigned c=0;c<3;++c)REQUIRE(std::abs(decoded[i][c]-block[i][c])<=4);}
    std::vector<unsigned char> edge={0,0,255,255, 0,0,0,0, 0,0,255,255, 0,0,0,0};
    auto halved=texture_pack::half(edge,2,2);
    REQUIRE(halved[2]==255 && halved[0]==0 && halved[3]==128); // Transparent black does not darken red.
    puts("PASS DXT1/DXT3 encoding keeps alpha exactly and color within tolerance; mips ignore transparent color");

    REQUIRE(texture_pack::stage_state(D3DTSS_MIPFILTER,D3DTEXF_NONE,2)==D3DTEXF_LINEAR);
    REQUIRE(texture_pack::stage_state(D3DTSS_MIPFILTER,D3DTEXF_POINT,2)==D3DTEXF_POINT);
    REQUIRE(texture_pack::stage_state(D3DTSS_MAXMIPLEVEL,1,2)==3 && texture_pack::stage_state(D3DTSS_MAXMIPLEVEL,0,2)==0);
    REQUIRE(texture_pack::stage_state(D3DTSS_MIPFILTER,D3DTEXF_NONE,0)==D3DTEXF_NONE);
    puts("PASS replaced textures never sample a 4x level without mip filtering");

    REQUIRE(SUCCEEDED(CoInitializeEx(nullptr,COINIT_MULTITHREADED)));
    wchar_t root[MAX_PATH];REQUIRE(GetFullPathNameW(L"texture-pack-test",MAX_PATH,root,nullptr));
    CreateDirectoryW(root,nullptr);CreateDirectoryW((std::wstring(root)+L"\\actors").c_str(),nullptr);
    unsigned char red[16]={255,255,255,255,255,255,255,255,0x00,0xf8,0x00,0xf8,0,0,0,0};
    unsigned char blue[16]={255,255,255,255,255,255,255,255,0x1f,0x00,0x1f,0x00,0,0,0,0};
    unsigned char yellow[16]={255,255,255,255,255,255,255,255,0xe0,0xff,0xe0,0xff,0,0,0,0};
    wchar_t path[MAX_PATH];
    std::swprintf(path,MAX_PATH,L"%ls\\actors\\0101_%016llx.png",root,(unsigned long long)texture_pack::texture_key(4,4,14,red));
    write_png(path,16,16,solid(16,16,0xff00ff00));
    std::swprintf(path,MAX_PATH,L"%ls\\bad_%016llx.png",root,(unsigned long long)texture_pack::texture_key(4,4,14,yellow));
    write_png(path,12,16,solid(12,16,0xff00ff00));
    REQUIRE(!_wputenv_s(L"XML1_DX8_TEXTURE_PACK",root));

    auto lib=LoadLibraryExW(L"d3d8.dll",nullptr,LOAD_LIBRARY_SEARCH_SYSTEM32);REQUIRE(lib);
    auto create=(IDirect3D8*(WINAPI*)(UINT))GetProcAddress(lib,"Direct3DCreate8");REQUIRE(create);
    auto api=create(D3D_SDK_VERSION);REQUIRE(api);
    WNDCLASSW wc={};wc.lpfnWndProc=DefWindowProcW;wc.hInstance=GetModuleHandleW(nullptr);wc.lpszClassName=L"XML1-texture-pack-test";RegisterClassW(&wc);
    auto window=CreateWindowW(wc.lpszClassName,L"Hidden DX8 test",WS_POPUP,0,0,64,64,nullptr,nullptr,wc.hInstance,nullptr);REQUIRE(window);
    D3DDISPLAYMODE mode={};checked(api->GetAdapterDisplayMode(0,&mode));
    D3DPRESENT_PARAMETERS pp={};pp.BackBufferWidth=640;pp.BackBufferHeight=480;pp.BackBufferFormat=mode.Format;pp.BackBufferCount=1;pp.SwapEffect=D3DSWAPEFFECT_DISCARD;pp.hDeviceWindow=window;pp.Windowed=TRUE;pp.EnableAutoDepthStencil=TRUE;pp.AutoDepthStencilFormat=D3DFMT_D24S8;
    IDirect3DDevice8 *device=nullptr;checked(api->CreateDevice(0,D3DDEVTYPE_HAL,window,D3DCREATE_HARDWARE_VERTEXPROCESSING|D3DCREATE_FPU_PRESERVE,&pp,&device));

    std::vector<unsigned char> wire(red,red+16);
    IDirect3DTexture8 *hd=texture_pack::replacement(device,4,4,14,wire,D3DFMT_DXT3);
    REQUIRE(hd && hd->GetLevelCount()==3 && texture_pack::extra_levels(hd)==2);
    D3DSURFACE_DESC desc={};checked(hd->GetLevelDesc(0,&desc));
    REQUIRE(desc.Width==16 && desc.Height==16 && desc.Format==D3DFMT_DXT3 && desc.Pool==D3DPOOL_DEFAULT);
    IDirect3DTexture8 *again=texture_pack::replacement(device,4,4,14,wire,D3DFMT_DXT3);
    REQUIRE(again==hd && texture_pack::state().loads==1 && texture_pack::state().hits==1);
    hd->Release();again->Release();
    wire.assign(yellow,yellow+16);
    REQUIRE(!texture_pack::replacement(device,4,4,14,wire,D3DFMT_DXT3) && texture_pack::state().failures==1);
    REQUIRE(!texture_pack::replacement(device,4,4,14,wire,D3DFMT_DXT3) && texture_pack::state().failures==1);
    puts("PASS replacement keeps the original format, appends the authored mips, and rejects invalid scales once");

    draw(device,red,D3DTEXF_NONE);REQUIRE(pixel(device,320,240)==0x00ff00);
    draw(device,blue,D3DTEXF_NONE);REQUIRE(pixel(device,320,240)==0x0000ff);
    draw(device,yellow,D3DTEXF_NONE);REQUIRE(pixel(device,320,240)==0xffff00);
    draw(device,red,D3DTEXF_NONE);REQUIRE(pixel(device,320,240)==0x00ff00);
    DWORD filter=0;checked(device->GetTextureStageState(0,D3DTSS_MIPFILTER,&filter));REQUIRE(filter==D3DTEXF_LINEAR);
    puts("PASS live draws use the replacement every time, keep unmatched and rejected textures original, and enable mips");

    clear_texture_cache();geometry_stream.clear();native_readback.clear();
    device->Release();api->Release();DestroyWindow(window);FreeLibrary(lib);
    return 0;
 } catch(const std::exception &error) {std::fprintf(stderr,"FAIL %s\n",error.what());return 1;}
}
