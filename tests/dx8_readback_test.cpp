#include <windows.h>
typedef BOOL WINBOOL;
#define __MSABI_LONG(value) value##L
#include <d3d8.h>
#include "../renderer/dx8_readback.h"
#include <cstdio>
#include <stdexcept>
#define REQUIRE(x) do {if(!(x))throw std::runtime_error(#x);}while(0)
#define checked(x) REQUIRE(SUCCEEDED(x))
#include "../renderer/display_color.h"
struct Vertex {float x,y,z,w;DWORD color;};
// Keep real surfaces/draws/readback pixels; inject only the driver's rejection.
struct TestSurface {
 IDirect3DSurface8 *native;
 HRESULT *lock_error;
 unsigned refs=1;
 ULONG AddRef() {return ++refs;}
 ULONG Release() {unsigned remaining=--refs;if(!remaining){native->Release();delete this;}return remaining;}
 HRESULT GetDesc(D3DSURFACE_DESC *desc) {return native->GetDesc(desc);}
 HRESULT LockRect(D3DLOCKED_RECT *lock,const RECT *rect,DWORD flags) {
  if(lock_error && FAILED(*lock_error))return *lock_error;
  return native->LockRect(lock,rect,flags);
 }
 HRESULT UnlockRect() {return native->UnlockRect();}
};
struct ReadbackDevice {
 IDirect3DDevice8 *device;
 HRESULT pixel_error=D3D_OK, full_error=D3D_OK, image_error=D3D_OK, lock_error=D3D_OK;
 unsigned pixel_calls=0,full_calls=0;
 HRESULT GetBackBuffer(UINT n,D3DBACKBUFFER_TYPE type,TestSurface **out) {
  IDirect3DSurface8 *surface=nullptr;HRESULT hr=device->GetBackBuffer(n,type,&surface);
  if(SUCCEEDED(hr))*out=new TestSurface{surface,nullptr};return hr;
 }
 HRESULT CreateImageSurface(UINT w,UINT h,D3DFORMAT format,TestSurface **out) {
  if(w==1 && h==1 && FAILED(image_error))return image_error;
  IDirect3DSurface8 *surface=nullptr;HRESULT hr=device->CreateImageSurface(w,h,format,&surface);
  if(SUCCEEDED(hr))*out=new TestSurface{surface,&lock_error};return hr;
 }
 HRESULT CopyRects(TestSurface *src,const RECT *rects,UINT count,TestSurface *dst,const POINT *points) {
  if(rects) {++pixel_calls;if(FAILED(pixel_error))return pixel_error;}
  else {++full_calls;if(FAILED(full_error))return full_error;}
  return device->CopyRects(src->native,rects,count,dst->native,points);
 }
};
int main() {
 try {
  SetErrorMode(SEM_FAILCRITICALERRORS|SEM_NOGPFAULTERRORBOX);
  HMODULE lib=LoadLibraryExW(L"d3d8.dll",nullptr,LOAD_LIBRARY_SEARCH_SYSTEM32);REQUIRE(lib);
  auto create=(IDirect3D8*(WINAPI*)(UINT))GetProcAddress(lib,"Direct3DCreate8");REQUIRE(create);
  auto api=create(D3D_SDK_VERSION);REQUIRE(api);
  WNDCLASSW wc={};wc.lpfnWndProc=DefWindowProcW;wc.hInstance=GetModuleHandleW(nullptr);wc.lpszClassName=L"XML1-DX8-readback-test";RegisterClassW(&wc);
  HWND wnd=CreateWindowW(wc.lpszClassName,L"Hidden readback test",WS_POPUP,0,0,64,64,nullptr,nullptr,wc.hInstance,nullptr);REQUIRE(wnd);
  HWND target=CreateWindowW(L"STATIC",L"",WS_CHILD|WS_DISABLED|WS_VISIBLE,0,8,64,48,wnd,nullptr,wc.hInstance,nullptr);REQUIRE(target);
  D3DDISPLAYMODE mode={};REQUIRE(SUCCEEDED(api->GetAdapterDisplayMode(0,&mode)));
  REQUIRE(mode.Format==D3DFMT_X8R8G8B8 || mode.Format==D3DFMT_A8R8G8B8);
  const unsigned counts[]={0,2,4,8};unsigned tested=0;
  for(unsigned n:counts) {
   auto samples=(D3DMULTISAMPLE_TYPE)n;
   if(FAILED(api->CheckDeviceMultiSampleType(0,D3DDEVTYPE_HAL,mode.Format,TRUE,samples)) || FAILED(api->CheckDeviceMultiSampleType(0,D3DDEVTYPE_HAL,D3DFMT_D24S8,TRUE,samples))) {printf("SKIP unsupported samples=%u\n",n);continue;}
   D3DPRESENT_PARAMETERS pp={};pp.BackBufferWidth=1920;pp.BackBufferHeight=1080;pp.BackBufferFormat=mode.Format;pp.BackBufferCount=1;pp.MultiSampleType=samples;pp.SwapEffect=D3DSWAPEFFECT_DISCARD;pp.hDeviceWindow=wnd;pp.Windowed=TRUE;pp.EnableAutoDepthStencil=TRUE;pp.AutoDepthStencilFormat=D3DFMT_D24S8;pp.Flags=0;
   for(unsigned path : {0u,1u,2u,3u,4u}) {
   pp.MultiSampleType=samples;pp.Flags=0;
   IDirect3DDevice8 *dev=nullptr;REQUIRE(SUCCEEDED(api->CreateDevice(0,D3DDEVTYPE_HAL,wnd,D3DCREATE_HARDWARE_VERTEXPROCESSING|D3DCREATE_FPU_PRESERVE,&pp,&dev)));
   ReadbackDevice shim{dev};shim.pixel_error=(path==1 || path==2)?D3DERR_INVALIDCALL:D3D_OK;
   shim.full_error=(path==2 || path==3)?D3DERR_INVALIDCALL:D3D_OK;
   shim.lock_error=path==4?D3DERR_INVALIDCALL:D3D_OK;
   BasicDx8Readback<ReadbackDevice,TestSurface> readback;
   REQUIRE(SUCCEEDED(dev->Clear(0,nullptr,D3DCLEAR_TARGET,0,1,0)));
   HRESULT init=readback.initialize(&shim);
   if(path>=2) {
    REQUIRE(init==D3DERR_INVALIDCALL);
    TestSurface *stale=nullptr;
    REQUIRE(readback.surface(&shim,true,&stale)==D3DERR_INVALIDCALL && !stale);
    dev->Release();dev=nullptr;
    pp.MultiSampleType=D3DMULTISAMPLE_NONE;pp.Flags=D3DPRESENTFLAG_LOCKABLE_BACKBUFFER;
    REQUIRE(SUCCEEDED(api->CreateDevice(0,D3DDEVTYPE_HAL,wnd,D3DCREATE_HARDWARE_VERTEXPROCESSING|D3DCREATE_FPU_PRESERVE,&pp,&dev)));
    shim.device=dev;shim.pixel_calls=shim.full_calls=0;
    REQUIRE(SUCCEEDED(dev->Clear(0,nullptr,D3DCLEAR_TARGET,0,1,0)));
    REQUIRE(SUCCEEDED(readback.initialize(&shim,true)));
   } else REQUIRE(SUCCEEDED(init));
   REQUIRE(SUCCEEDED(dev->SetRenderState(D3DRS_LIGHTING,FALSE)));REQUIRE(SUCCEEDED(dev->SetRenderState(D3DRS_CULLMODE,D3DCULL_NONE)));REQUIRE(SUCCEEDED(dev->SetVertexShader(D3DFVF_XYZRHW|D3DFVF_DIFFUSE)));
   Vertex v[]={{4.2f,4.3f,0,1,0xffffffff},{59.7f,12.8f,0,1,0xffffffff},{17.1f,59.4f,0,1,0xffffffff}};
   unsigned gray=0;double elapsed[2]={};
   LARGE_INTEGER begin,end,freq;QueryPerformanceFrequency(&freq);QueryPerformanceCounter(&begin);
   for(unsigned iteration=0;iteration<32;++iteration) {
    unsigned blue=(iteration*73+29)&255;
    REQUIRE(SUCCEEDED(dev->Clear(0,nullptr,D3DCLEAR_TARGET|D3DCLEAR_ZBUFFER,blue,1,0)));
    REQUIRE(SUCCEEDED(dev->BeginScene()));REQUIRE(SUCCEEDED(dev->DrawPrimitiveUP(D3DPT_TRIANGLELIST,1,v,sizeof(Vertex))));REQUIRE(SUCCEEDED(dev->EndScene()));
    for(unsigned full=0;full<2;++full) {
     LARGE_INTEGER a,b;QueryPerformanceCounter(&a);
     TestSurface *surface=nullptr;REQUIRE(SUCCEEDED(readback.surface(&shim,!full,&surface)));
     D3DSURFACE_DESC desc={};REQUIRE(SUCCEEDED(surface->GetDesc(&desc)));
     REQUIRE((!full && !path && desc.Width==1 && desc.Height==1) || (desc.Width==1920 && desc.Height==1080));
     D3DLOCKED_RECT lock={};REQUIRE(SUCCEEDED(surface->LockRect(&lock,nullptr,D3DLOCK_READONLY)));
     REQUIRE(((unsigned char*)lock.pBits)[0]==blue); // no stale frame at fence or capture
     if(full) {gray=0;for(int y=0;y<64;y++)for(int x=0;x<64;x++) {unsigned red=((unsigned char*)lock.pBits)[y*lock.Pitch+x*4+2];gray+=red>0&&red<255;}REQUIRE(n && path<2?gray>0:gray==0);}
     REQUIRE(SUCCEEDED(surface->UnlockRect()));surface->Release();QueryPerformanceCounter(&b);elapsed[full]+=1000.0*(b.QuadPart-a.QuadPart)/freq.QuadPart;
    }
   }
   // The actual presentation target may have a different size than the render
   // allocation. Null rectangles + child override must also work with FSAA.
   {
    Dx8Readback color_readback;checked(color_readback.initialize(dev,path>=2));
    DisplayColor color;
    LARGE_INTEGER start_color,end_color;QueryPerformanceCounter(&start_color);
    for(unsigned frame=0;frame<4;++frame) {
     checked(dev->Clear(0,nullptr,D3DCLEAR_TARGET,0xff808080,1,0));
     color.apply(dev,color_readback,100,200);
     IDirect3DSurface8 *surface=nullptr;checked(color_readback.surface(dev,false,&surface));
     D3DLOCKED_RECT lock={};checked(surface->LockRect(&lock,nullptr,D3DLOCK_READONLY));
     REQUIRE((*(DWORD*)((char*)lock.pBits+1079*lock.Pitch+1919*4)&0xffffff)==0xb5b5b5);
     checked(surface->UnlockRect());surface->Release();
    }
    QueryPerformanceCounter(&end_color);
    printf("COLOR PASS requested_samples=%u direct=%u 1080p ms_per_frame_including_validation=%.3f\n",n,path>=2,
        1000.0*(end_color.QuadPart-start_color.QuadPart)/freq.QuadPart/4);
   }
   REQUIRE(SUCCEEDED(dev->Present(nullptr,nullptr,target,nullptr)));
   if(path==1)REQUIRE(shim.pixel_calls==1 && shim.full_calls==66);
   if(path>=2)REQUIRE(shim.pixel_calls==0 && shim.full_calls==0);
   printf("PASS requested_samples=%u path=%u frames=32 resolved_edge_pixels=%u pixel_calls=%u full_calls=%u\n",n,path,gray,shim.pixel_calls,shim.full_calls);++tested;
   QueryPerformanceCounter(&end);printf("READBACK TIME samples=%u 1080p ms_per_iteration=%.3f\n",n,1000.0*(end.QuadPart-begin.QuadPart)/freq.QuadPart/32);
   printf("FENCE/CAPTURE samples=%u fence_ms=%.3f capture_ms=%.3f\n",n,elapsed[0]/32,elapsed[1]/32);
   readback.clear();
   if(path==1) {
    // A reset must initialize again; a failed fence must never return stale data.
    TestSurface *surface=nullptr;
    REQUIRE(readback.surface(&shim,true,&surface)==D3DERR_INVALIDCALL && !surface);
    REQUIRE(SUCCEEDED(readback.initialize(&shim)));
    REQUIRE(shim.pixel_calls==2);
    readback.clear();shim.pixel_error=D3DERR_DEVICELOST;shim.full_calls=0;
    REQUIRE(readback.initialize(&shim)==D3DERR_DEVICELOST && !shim.full_calls);
    readback.clear();shim.pixel_error=D3DERR_INVALIDCALL;shim.full_error=D3DERR_INVALIDCALL;
    REQUIRE(readback.initialize(&shim)==D3DERR_INVALIDCALL && shim.full_calls==1);
    readback.clear();shim.full_error=D3D_OK;shim.image_error=D3DERR_INVALIDCALL;
    REQUIRE(SUCCEEDED(readback.initialize(&shim)));
    puts("PASS reset invalidates selection; device loss/full-copy failure propagate; rejected small allocation selects full copy at startup");
   }
   readback.clear();
   dev->Release();
   }
  }
  REQUIRE(tested);DestroyWindow(wnd);api->Release();FreeLibrary(lib);return 0;
 }catch(const std::exception &error){fprintf(stderr,"FAIL: %s\n",error.what());return 1;}
}
