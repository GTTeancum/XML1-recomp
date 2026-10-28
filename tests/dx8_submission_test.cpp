#include <windows.h>
typedef BOOL WINBOOL;
#define __MSABI_LONG(value) value##L
#include <d3d8.h>
#include <cstdio>
#include <cstring>
#include "../renderer/dx8_replay.h"
#define REQUIRE(x) do {if(!(x))throw std::runtime_error(#x);}while(0)
// Run from a repository-local test output directory. Avoid CRT tmpfile(),
// whose Windows destination need not follow the caller's TEMP setting.
static FILE *test_file() { return std::fopen("dx8-submission-test.tmp","w+b"); }
static void put(FILE *f,const void *p,size_t n) {REQUIRE(std::fwrite(p,1,n,f)==n);}
static void command(IDirect3DDevice8 *device,const char *magic,const std::vector<unsigned char>& data) {
    FILE *f=test_file();REQUIRE(f);put(f,magic,8);put(f,data.data(),data.size());std::rewind(f);
    replay_stream(device,f,nullptr,false);std::fclose(f);
}
template<class T> static void append(std::vector<unsigned char>& out,const T& value) {
    auto p=(const unsigned char*)&value;out.insert(out.end(),p,p+sizeof(value));
}
static DWORD pixel(IDirect3DDevice8 *device,unsigned x,unsigned y) {
    IDirect3DSurface8 *surface=nullptr;checked(native_readback.surface(device,false,&surface));
    D3DLOCKED_RECT lock={};checked(surface->LockRect(&lock,nullptr,D3DLOCK_READONLY));
    DWORD value=*(DWORD*)((char*)lock.pBits+y*lock.Pitch+x*4)&0xffffff;
    checked(surface->UnlockRect());surface->Release();return value;
}
int main() {
 try {
    SetErrorMode(SEM_FAILCRITICALERRORS|SEM_NOGPFAULTERRORBOX);
    auto lib=LoadLibraryExW(L"d3d8.dll",nullptr,LOAD_LIBRARY_SEARCH_SYSTEM32);REQUIRE(lib);
    auto create=(IDirect3D8*(WINAPI*)(UINT))GetProcAddress(lib,"Direct3DCreate8");REQUIRE(create);
    auto api=create(D3D_SDK_VERSION);REQUIRE(api);
    WNDCLASSW wc={};wc.lpfnWndProc=DefWindowProcW;wc.hInstance=GetModuleHandleW(nullptr);wc.lpszClassName=L"XML1-submission-test";RegisterClassW(&wc);
    auto window=CreateWindowW(wc.lpszClassName,L"Hidden DX8 test",WS_POPUP,0,0,64,64,nullptr,nullptr,wc.hInstance,nullptr);REQUIRE(window);
    D3DDISPLAYMODE mode={};checked(api->GetAdapterDisplayMode(0,&mode));
    D3DPRESENT_PARAMETERS pp={};pp.BackBufferWidth=1920;pp.BackBufferHeight=1080;pp.BackBufferFormat=mode.Format;pp.BackBufferCount=1;pp.SwapEffect=D3DSWAPEFFECT_DISCARD;pp.hDeviceWindow=window;pp.Windowed=TRUE;pp.EnableAutoDepthStencil=TRUE;pp.AutoDepthStencilFormat=D3DFMT_D24S8;
    IDirect3DDevice8 *device=nullptr;checked(api->CreateDevice(0,D3DDEVTYPE_HAL,window,D3DCREATE_HARDWARE_VERTEXPROCESSING|D3DCREATE_FPU_PRESERVE,&pp,&device));
    output_width=1920;output_height=1080;
    uint32_t clear[]={0xf1,0xffff0000,0x3f800000,0,0};
    std::vector<unsigned char> packet;append(packet,clear);command(device,"XMLDX8C5",packet);
    REQUIRE(completion_waits==0);
    packet.clear();uint32_t count=1;append(packet,count);
    uint32_t header[]={2,2,3,6,0x142,5};append(packet,header);
    D3DVIEWPORT8 viewport={0,0,640,480,0,1};append(packet,viewport);
    D3DMATRIX identity={};identity._11=identity._22=identity._33=identity._44=1;
    for(unsigned i=0;i<3;++i)append(packet,identity);
    uint32_t rs[168]={},ts[128]={};rs[57]=rs[58]=0x207;rs[62]=1;rs[67]=0x01010101;rs[139]=0x1b02;rs[74]=0x8006;
    for(unsigned s=0;s<4;++s) {ts[s*32]=ts[s*32+1]=ts[s*32+2]=1;ts[s*32+3]=ts[s*32+4]=1;ts[s*32+12]=s?1:2;ts[s*32+14]=2;ts[s*32+16]=1;}
    append(packet,rs);append(packet,ts);D3DMATERIAL8 material={};append(packet,material);uint32_t zero=0;append(packet,zero);
    uint32_t second[3]={};append(packet,second);append(packet,identity);append(packet,identity);append(packet,zero);
    uint32_t blue[4]={0xff0000ff,0xff0000ff,0xff0000ff,0xff0000ff};append(packet,blue);
    struct V {float x,y,z;DWORD color;float u,v;};V vertices[]={{-1,-1,0,0xffffffff,0,0},{1,-1,0,0xffffffff,1,0},{0,1,0,0xffffffff,.5f,1}};append(packet,vertices);
    const auto blue_packet=packet;
    command(device,"XMLDX8D8",packet);REQUIRE(completion_waits==0);
    packet.clear();clear[1]=0xff00ff00;clear[4]=1;append(packet,clear);D3DRECT corner={0,0,20,20};append(packet,corner);
    command(device,"XMLDX8C5",packet);REQUIRE(completion_waits==0);
    packet.clear();append(packet,zero);command(device,"XMLDX8F8",packet);REQUIRE(completion_waits==1);
    REQUIRE(pixel(device,960,540)==0xff);REQUIRE(pixel(device,10,10)==0xff00);REQUIRE(pixel(device,1800,100)==0xff0000);
    command(device,"XMLDX8F8",packet);REQUIRE(completion_waits==1);
    puts("PASS ordered draw/partial clear preserves pixels; explicit fence completes once; redundant empty fence does not wait");
    // Bind blue, explicitly unbind it, then bind blue again. No placeholder
    // texture is allowed: inspect both native binding and the rendered pixels.
    packet.clear();append(packet,count);
    header[0]=header[1]=header[3]=0;append(packet,header);append(packet,viewport);
    for(unsigned i=0;i<3;++i)append(packet,identity);
    ts[14]=0; // SELECTARG1 DIFFUSE, with no texture bound.
    append(packet,rs);append(packet,ts);append(packet,material);append(packet,zero);
    append(packet,second);append(packet,identity);append(packet,identity);
    append(packet,zero);uint32_t three=3;append(packet,three);append(packet,vertices);
    command(device,"XMLDX8D9",packet);
    REQUIRE(bound_textures_known[0] && bound_textures[0]==nullptr);
    packet.clear();append(packet,zero);command(device,"XMLDX8F9",packet);
    REQUIRE(pixel(device,960,540)==0xffffff);
    command(device,"XMLDX8D8",blue_packet);command(device,"XMLDX8F8",packet);
    REQUIRE(bound_textures[0]!=nullptr);REQUIRE(pixel(device,960,540)==0xff);
    puts("PASS native NULL texture binding renders diffuse white and subsequent textured draw restores blue");
    clear_texture_cache();
    // More than the cache budget of distinct frames forces allocation reuse.
    // One dictionary-pinned texture and the current first-stage texture must
    // remain unchanged while the second-stage texture is uploaded.
    IDirect3DTexture8 *protected_texture=nullptr;
    for(unsigned i=0;i<80;++i) {
        DWORD color=0xff000000|((i+1)*17777);
        std::vector<DWORD> pixels(1024*512,color);
        FILE *f=test_file();REQUIRE(f);put(f,pixels.data(),pixels.size()*4);std::rewind(f);
        auto texture=read_texture(device,f,1024,512,6,protected_texture);std::fclose(f);
        if(i==0) {wire_textures[0]={1024,512,6,texture};texture->AddRef();}
        if(protected_texture) {
            D3DLOCKED_RECT lock={};checked(protected_texture->LockRect(0,&lock,nullptr,D3DLOCK_READONLY));
            REQUIRE(*(DWORD*)lock.pBits==(0xff000000|i*17777));checked(protected_texture->UnlockRect(0));protected_texture->Release();
        }
        protected_texture=texture;
        D3DLOCKED_RECT lock={};checked(texture->LockRect(0,&lock,nullptr,D3DLOCK_READONLY));
        REQUIRE(*(DWORD*)lock.pBits==color);REQUIRE(*(DWORD*)((char*)lock.pBits+511*lock.Pitch+1023*4)==color);checked(texture->UnlockRect(0));
    }
    D3DLOCKED_RECT lock={};checked(wire_textures[0].texture->LockRect(0,&lock,nullptr,D3DLOCK_READONLY));REQUIRE(*(DWORD*)lock.pBits==(0xff000000|17777));checked(wire_textures[0].texture->UnlockRect(0));
    REQUIRE(texture_reuses>0);printf("PASS texture reuse=%llu with immutable dictionary/current-draw references and fresh first/last pixels\n",texture_reuses);
    protected_texture->Release();clear_texture_cache();geometry_stream.clear();native_readback.clear();device->Release();DestroyWindow(window);api->Release();FreeLibrary(lib);return 0;
 }catch(const std::exception& error) {fprintf(stderr,"FAIL: %s\n",error.what());return 1;}
}
