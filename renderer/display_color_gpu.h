#pragma once
#include <cstdio>

// PS 1.1 dependent texture reads implement the exact 8-bit CPU lookup table.
// t1 maps red (V); t2 maps green/blue (U/V). No runtime shader compiler.
class DisplayColorGpu {
    IDirect3DDevice8 *device_=nullptr;
    IDirect3DTexture8 *image_=nullptr,*red_=nullptr,*gb_=nullptr;
    DWORD shader_=0;
    unsigned width_=0,height_=0,brightness_=0,gamma_=0;
    bool disabled_=false;
    void release() {
        if(image_)image_->Release();if(red_)red_->Release();if(gb_)gb_->Release();
        image_=red_=gb_=nullptr;
        if(device_){if(shader_)device_->DeletePixelShader(shader_);device_->Release();}
        device_=nullptr;shader_=0;width_=height_=0;
    }
public:
    DisplayColorGpu()=default;
    DisplayColorGpu(const DisplayColorGpu&)=delete;
    DisplayColorGpu& operator=(const DisplayColorGpu&)=delete;
    ~DisplayColorGpu(){release();}
    void clear(){release();disabled_=false;brightness_=gamma_=0;}
    DWORD shader()const{return shader_;}
    unsigned width()const{return width_;}
    unsigned height()const{return height_;}
    IDirect3DTexture8 *red()const{return red_;}
    IDirect3DTexture8 *gb()const{return gb_;}
    IDirect3DTexture8 *prepare(IDirect3DDevice8 *device,unsigned brightness,unsigned gamma,
                              const DWORD *red,const DWORD *green,const DWORD *blue,D3DSURFACE_DESC &desc) {
        if(disabled_)return nullptr;
        IDirect3DSurface8 *back=nullptr,*target=nullptr;
        HRESULT hr=device->GetBackBuffer(0,D3DBACKBUFFER_TYPE_MONO,&back);
        if(SUCCEEDED(hr))hr=back->GetDesc(&desc);
        if(SUCCEEDED(hr) && !image_) {
            unsigned w=1,h=1;while(w<desc.Width)w*=2;while(h<desc.Height)h*=2;
            constexpr DWORD dest=0x80000000u|D3DSPR_TEXTURE|D3DSP_WRITEMASK_ALL;
            constexpr DWORD src=0x80000000u|D3DSPR_TEXTURE|D3DSP_NOSWIZZLE;
            const DWORD code[]={D3DPS_VERSION(1,1),
                D3DSIO_TEX,dest,
                D3DSIO_TEXREG2AR,dest|1,src,
                D3DSIO_TEXREG2GB,dest|2,src,
                D3DSIO_ADD,0x80000000u|D3DSP_WRITEMASK_ALL,src|1,src|2,D3DSIO_END};
            hr=device->CreatePixelShader(code,&shader_);
            if(SUCCEEDED(hr)){device_=device;device_->AddRef();}
            if(SUCCEEDED(hr))hr=device->CreateTexture(w,h,1,D3DUSAGE_RENDERTARGET,desc.Format,D3DPOOL_DEFAULT,&image_);
            if(SUCCEEDED(hr))hr=device->CreateTexture(1,256,1,0,D3DFMT_A8R8G8B8,D3DPOOL_MANAGED,&red_);
            if(SUCCEEDED(hr))hr=device->CreateTexture(256,256,1,0,D3DFMT_A8R8G8B8,D3DPOOL_MANAGED,&gb_);
            width_=w;height_=h;
        }
        if(SUCCEEDED(hr) && (brightness!=brightness_ || gamma!=gamma_)) {
            D3DLOCKED_RECT lock={};hr=red_->LockRect(0,&lock,nullptr,0);
            if(SUCCEEDED(hr)) {
                for(unsigned r=0;r<256;++r)*(DWORD*)((char*)lock.pBits+r*lock.Pitch)=red[r];
                hr=red_->UnlockRect(0);
            }
            if(SUCCEEDED(hr))hr=gb_->LockRect(0,&lock,nullptr,0);
            if(SUCCEEDED(hr)) {
                for(unsigned b=0;b<256;++b)for(unsigned g=0;g<256;++g)
                    ((DWORD*)((char*)lock.pBits+b*lock.Pitch))[g]=green[g]|blue[b];
                hr=gb_->UnlockRect(0);
            }
            brightness_=brightness;gamma_=gamma;
        }
        if(SUCCEEDED(hr))hr=image_->GetSurfaceLevel(0,&target);
        const RECT region={0,0,(LONG)desc.Width,(LONG)desc.Height};const POINT origin={0,0};
        if(SUCCEEDED(hr))hr=device->CopyRects(back,&region,1,target,&origin);
        if(target)target->Release();if(back)back->Release();
        if(FAILED(hr)) {
            std::fprintf(stderr,"[DISPLAY COLOR] GPU path unavailable (%08lx); using independent CPU path\n",(unsigned long)hr);
            release();disabled_=true;return nullptr;
        }
        return image_;
    }
};
