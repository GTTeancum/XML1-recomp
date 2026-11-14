#include <windows.h>
typedef BOOL WINBOOL;
#define __MSABI_LONG(value) value##L
#include <d3d8.h>
#include "../renderer/dx8_readback.h"
#include <cstdio>
#include <stdexcept>
#define REQUIRE(x) do {if(!(x))throw std::runtime_error(#x);}while(0)
struct Vertex {float x,y,z,w;DWORD color;};
// Keep real surfaces/draws/readback pixels; inject only the driver's rejection.
struct ReadbackDevice {
 IDirect3DDevice8 *device;
 HRESULT pixel_error=D3D_OK, full_error=D3D_OK, image_error=D3D_OK;
 unsigned pixel_calls=0,full_calls=0;
 HRESULT GetBackBuffer(UINT n,D3DBACKBUFFER_TYPE type,IDirect3DSurface8 **out) {return device->GetBackBuffer(n,type,out);}
 HRESULT CreateImageSurface(UINT w,UINT h,D3DFORMAT format,IDirect3DSurface8 **out) {
  if(w==1 && h==1 && FAILED(image_error))return image_error;
  return device->CreateImageSurface(w,h,format,out);
 }
 HRESULT CopyRects(IDirect3DSurface8 *src,const RECT *rects,UINT count,IDirect3DSurface8 *dst,const POINT *points) {
  if(rects) {++pixel_calls;if(FAILED(pixel_error))return pixel_error;}
  else {++full_calls;if(FAILED(full_error))return full_error;}
  return device->CopyRects(src,rects,count,dst,points);
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
  D3DDISPLAYMODE mode={};REQUIRE(SUCCEEDED(api->GetAdapterDisplayMode(0,&mode)));
  REQUIRE(mode.Format==D3DFMT_X8R8G8B8 || mode.Format==D3DFMT_A8R8G8B8);
  const unsigned counts[]={0,2,4,8};unsigned tested=0;
  for(unsigned n:counts) {
   auto samples=(D3DMULTISAMPLE_TYPE)n;
   if(FAILED(api->CheckDeviceMultiSampleType(0,D3DDEVTYPE_HAL,mode.Format,TRUE,samples)) || FAILED(api->CheckDeviceMultiSampleType(0,D3DDEVTYPE_HAL,D3DFMT_D24S8,TRUE,samples))) {printf("SKIP unsupported samples=%u\n",n);continue;}
   D3DPRESENT_PARAMETERS pp={};pp.BackBufferWidth=1920;pp.BackBufferHeight=1080;pp.BackBufferFormat=mode.Format;pp.BackBufferCount=1;pp.MultiSampleType=samples;pp.SwapEffect=D3DSWAPEFFECT_DISCARD;pp.hDeviceWindow=wnd;pp.Windowed=TRUE;pp.EnableAutoDepthStencil=TRUE;pp.AutoDepthStencilFormat=D3DFMT_D24S8;pp.Flags=0;
   IDirect3DDevice8 *dev=nullptr;REQUIRE(SUCCEEDED(api->CreateDevice(0,D3DDEVTYPE_HAL,wnd,D3DCREATE_HARDWARE_VERTEXPROCESSING|D3DCREATE_FPU_PRESERVE,&pp,&dev)));
   for(bool reject_pixel : {false,true}) {
   ReadbackDevice shim{dev};shim.pixel_error=reject_pixel?D3DERR_INVALIDCALL:D3D_OK;
   BasicDx8Readback<ReadbackDevice,IDirect3DSurface8> readback;
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
     IDirect3DSurface8 *surface=nullptr;REQUIRE(SUCCEEDED(readback.surface(&shim,!full,&surface)));
     D3DSURFACE_DESC desc={};REQUIRE(SUCCEEDED(surface->GetDesc(&desc)));
     REQUIRE((!full && !reject_pixel && desc.Width==1 && desc.Height==1) || (desc.Width==1920 && desc.Height==1080));
     D3DLOCKED_RECT lock={};REQUIRE(SUCCEEDED(surface->LockRect(&lock,nullptr,D3DLOCK_READONLY)));
     REQUIRE(((unsigned char*)lock.pBits)[0]==blue); // no stale frame at fence or capture
     if(full) {gray=0;for(int y=0;y<64;y++)for(int x=0;x<64;x++) {unsigned red=((unsigned char*)lock.pBits)[y*lock.Pitch+x*4+2];gray+=red>0&&red<255;}REQUIRE(n?gray>0:gray==0);}
     REQUIRE(SUCCEEDED(surface->UnlockRect()));surface->Release();QueryPerformanceCounter(&b);elapsed[full]+=1000.0*(b.QuadPart-a.QuadPart)/freq.QuadPart;
    }
   }
   if(reject_pixel)REQUIRE(shim.pixel_calls==1 && shim.full_calls==64);
   printf("PASS samples=%u rejected_pixel=%u frames=32 resolved_edge_pixels=%u pixel_calls=%u full_calls=%u\n",n,reject_pixel,gray,shim.pixel_calls,shim.full_calls);++tested;
   QueryPerformanceCounter(&end);printf("READBACK TIME samples=%u 1080p ms_per_iteration=%.3f\n",n,1000.0*(end.QuadPart-begin.QuadPart)/freq.QuadPart/32);
   printf("FENCE/CAPTURE samples=%u fence_ms=%.3f capture_ms=%.3f\n",n,elapsed[0]/32,elapsed[1]/32);
   readback.clear();
   if(reject_pixel) {
    // A reset must re-probe; a failed fence must never return a stale surface.
    IDirect3DSurface8 *surface=nullptr;
    REQUIRE(SUCCEEDED(readback.surface(&shim,true,&surface)));surface->Release();
    REQUIRE(shim.pixel_calls==2);
    readback.clear();shim.pixel_error=D3DERR_DEVICELOST;shim.full_calls=0;
    REQUIRE(readback.surface(&shim,true,&surface)==D3DERR_DEVICELOST && !surface && !shim.full_calls);
    readback.clear();shim.pixel_error=D3DERR_INVALIDCALL;shim.full_error=D3DERR_INVALIDCALL;
    REQUIRE(readback.surface(&shim,true,&surface)==D3DERR_INVALIDCALL && !surface && shim.full_calls==1);
    readback.clear();shim.full_error=D3D_OK;shim.image_error=D3DERR_INVALIDCALL;
    REQUIRE(SUCCEEDED(readback.surface(&shim,true,&surface)));surface->Release();
    puts("PASS reset retries pixel path; device loss/full-copy failure propagate; rejected small allocation falls back");
   }
   readback.clear();
   }
   dev->Release();
  }
  REQUIRE(tested);DestroyWindow(wnd);api->Release();FreeLibrary(lib);return 0;
 }catch(const std::exception &error){fprintf(stderr,"FAIL: %s\n",error.what());return 1;}
}
