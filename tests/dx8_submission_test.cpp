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
    Xml1PcSettings settings{};xml1_pc_settings_defaults(&settings);
    REQUIRE(xml1_pc_channel_create(&settings));xml1_pc_channel_focus(1);
    REQUIRE(xml1_pc_channel_native_pointer(1));
    pc_ui::client_width=1920;pc_ui::client_height=1080;
    pc_ui::aspect_width=640;pc_ui::aspect_height=480;
    Xml1PcMenuPointer pointer{};
    pc_ui::input_mouse(100,540,VK_LBUTTON,true,0);
    REQUIRE(!xml1_pc_channel_pointer_read(&pointer)); // black margin cannot click
    pc_ui::input_mouse(960,540,VK_LBUTTON,true,0);
    REQUIRE(xml1_pc_channel_pointer_read(&pointer));
    REQUIRE(pointer.x==720 && pointer.y==540 && pointer.width==1440 && pointer.height==1080 && pointer.button==VK_LBUTTON);
    pc_ui::input_mouse(100,540,VK_LBUTTON,false,0);
    REQUIRE(xml1_pc_channel_pointer_read(&pointer));
    REQUIRE(pointer.x==-140 && !pointer.buttons); // releases outside must end drag
    pc_ui::client_width=3440;
    pc_ui::client_height=1440;
    pc_ui::aspect_width=1280;pc_ui::aspect_height=720;
    pc_ui::input_mouse(1720,720,VK_LBUTTON,true,0);
    REQUIRE(xml1_pc_channel_pointer_read(&pointer));
    REQUIRE(pointer.x==1280 && pointer.y==720 && pointer.width==2560 && pointer.height==1440);
    xml1_pc_channel_close();
    puts("PASS fullscreen/custom-aspect pointer positions, margin rejection and outside drag release");
    auto lib=LoadLibraryExW(L"d3d8.dll",nullptr,LOAD_LIBRARY_SEARCH_SYSTEM32);REQUIRE(lib);
    auto create=(IDirect3D8*(WINAPI*)(UINT))GetProcAddress(lib,"Direct3DCreate8");REQUIRE(create);
    auto api=create(D3D_SDK_VERSION);REQUIRE(api);
    WNDCLASSW wc={};wc.lpfnWndProc=DefWindowProcW;wc.hInstance=GetModuleHandleW(nullptr);wc.lpszClassName=L"XML1-submission-test";RegisterClassW(&wc);
    auto window=CreateWindowW(wc.lpszClassName,L"Hidden DX8 test",WS_POPUP,0,0,64,64,nullptr,nullptr,wc.hInstance,nullptr);REQUIRE(window);
    D3DDISPLAYMODE mode={};checked(api->GetAdapterDisplayMode(0,&mode));
    D3DPRESENT_PARAMETERS pp={};pp.BackBufferWidth=1920;pp.BackBufferHeight=1080;pp.BackBufferFormat=mode.Format;pp.BackBufferCount=1;pp.SwapEffect=D3DSWAPEFFECT_DISCARD;pp.hDeviceWindow=window;pp.Windowed=TRUE;pp.EnableAutoDepthStencil=TRUE;pp.AutoDepthStencilFormat=D3DFMT_D24S8;
    IDirect3DDevice8 *device=nullptr;checked(api->CreateDevice(0,D3DDEVTYPE_HAL,window,D3DCREATE_HARDWARE_VERTEXPROCESSING|D3DCREATE_FPU_PRESERVE,&pp,&device));
    checked(device->Clear(0,nullptr,D3DCLEAR_TARGET,0,1,0));
    checked(native_readback.initialize(device));
    output_width=1920;output_height=1080;
    source_width=720;source_height=480;
    auto retail=output_viewport({0,0,720,480,0,1});
    REQUIRE(retail.X==240 && retail.Y==0 && retail.Width==1440 && retail.Height==1080);
    source_width=640;source_height=480;
    // A new frame's first C6 depth-only clear must not reset the world's
    // color. Initialize the raw output ourselves so this detects an implicit
    // black fullscreen Clear, not the natural color of a discarded surface.
    checked(device->Clear(0,nullptr,D3DCLEAR_TARGET,0xffab2345,1,0));
    std::vector<unsigned char> packet;
    uint32_t first[]={1,0,0x3f800000,0,1};D3DRECT upper_right={320,0,640,240};
    append(packet,first);append(packet,upper_right);command(device,"XMLDX8C6",packet);
    REQUIRE(pixel(device,260,20)==0xab2345 && pixel(device,1460,100)==0xab2345);
    REQUIRE(pixel(device,10,20)==0 && pixel(device,1800,20)==0);
    uint32_t clear[]={0xf1,0xffff0000,0x3f800000,0,0};
    packet.clear();append(packet,clear);command(device,"XMLDX8C5",packet);
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
    REQUIRE(pixel(device,960,540)==0xff);REQUIRE(pixel(device,250,10)==0xff00);REQUIRE(pixel(device,1600,100)==0xff0000);
    command(device,"XMLDX8F8",packet);REQUIRE(completion_waits==1);
    REQUIRE(pixel(device,10,10)==0 && pixel(device,1800,100)==0);
    puts("PASS ordered draw/partial clear preserves pixels; explicit fence completes once; redundant empty fence does not wait");
    // C6 carries the effective Xbox clear rectangles, regardless of the
    // viewport of the last submitted draw. Keep the left and right 4:3
    // bars untouched. C4/C5 above retain their historical payload behavior.
    auto rectclear=[&](DWORD color,const D3DRECT* box) {
        packet.clear();uint32_t info[]={0xf0,color,0x3f800000,0,box?1u:0u};
        append(packet,info);if(box)append(packet,*box);command(device,"XMLDX8C6",packet);
    };
    packet=blue_packet;
    D3DVIEWPORT8 previous_area={0,0,240,480,0,1};
    std::memcpy(packet.data()+sizeof(count)+sizeof(header),&previous_area,sizeof(previous_area));
    command(device,"XMLDX8D8",packet);
    D3DRECT right_box={320,0,640,480}, full_box={0,0,640,480};
    rectclear(0xff007733,&right_box);
    REQUIRE(pixel(device,1460,300)==0x007733 && pixel(device,250,10)==0x00ff00);
    rectclear(0xff997700,nullptr);
    REQUIRE(pixel(device,1460,300)==0x007733 && pixel(device,250,10)==0x00ff00);
    rectclear(0xff234567,&full_box);
    REQUIRE(pixel(device,250,20)==0x234567 && pixel(device,1460,300)==0x234567);
    REQUIRE(pixel(device,10,20)==0 && pixel(device,1800,20)==0);
    puts("PASS C6 cropped, no-op and full guest clears across viewport changes and pillarboxing");
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
    // Exact Conversion Sequencer layout. Select UV set 3, so losing or
    // mis-sizing the extra coordinates produces the wrong sampled color.
    struct ExtendedVertex {float xyz[3],normal[3];DWORD diffuse;float uv0[2],uv1[2],uv2[3],uv3[3];};
    static_assert(sizeof(ExtendedVertex)==68,"Sequencer vertex layout");
    REQUIRE(xml1_fvf_stride(0x500452)==68);
    REQUIRE(xml1_fvf_stride(0x30102)==16); // XYZ + one 1D coordinate
    REQUIRE(xml1_fvf_stride(0x20102)==28); // XYZ + one 4D coordinate
    REQUIRE(!xml1_fvf_stride(0x902)); // impossible set count
    REQUIRE(!xml1_fvf_stride(0x10002)); // dimensions without a set
    REQUIRE(!xml1_fvf_stride(0x146)); // transformed positions unsupported
    const ExtendedVertex extended[]={
        {{-.8f,-.8f,.5f},{0,0,1},0xffffffff,{.25f,.25f},{0,0},{0,0,0},{.75f,.25f,0}},
        {{0,.8f,.5f},{0,0,1},0xffffffff,{.25f,.25f},{0,0},{0,0,0},{.75f,.25f,0}},
        {{.8f,-.8f,.5f},{0,0,1},0xffffffff,{.25f,.25f},{0,0},{0,0,0},{.75f,.25f,0}}};
    const DWORD uv_colors[]={0xffff0000,0xff00ff00,0xff0000ff,0xffffffff};
    for(unsigned indexed=0;indexed<2;++indexed) {
        packet.clear();append(packet,count);
        uint32_t extended_header[]={2,2,3,6,0x500452,6};append(packet,extended_header);
        append(packet,viewport);for(unsigned i=0;i<3;++i)append(packet,identity);
        ts[14]=2;ts[28]=3;
        append(packet,rs);append(packet,ts);append(packet,material);append(packet,zero);
        append(packet,second);append(packet,identity);append(packet,identity);
        append(packet,zero);append(packet,zero);append(packet,uv_colors);
        uint32_t indices_count=indexed?3:0;append(packet,indices_count);append(packet,three);
        append(packet,extended);
        if(indexed){const uint16_t indices[]={0,1,2};append(packet,indices);}
        command(device,"XMLDX8D9",packet);
        packet.clear();append(packet,zero);command(device,"XMLDX8F9",packet);
        DWORD sampled=pixel(device,960,540);
        printf("Sequencer indexed=%u sampled=%06lx\n",indexed,(unsigned long)sampled);
        REQUIRE(sampled==0x00ff00);
    }
    puts("PASS Sequencer 68-byte FVF samples fourth UV set correctly in indexed and nonindexed strips");
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
