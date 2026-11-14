#pragma once
#include <algorithm>
#include <cmath>
#include <cstring>
#include <stdexcept>
#include <vector>

// Game-local color adjustment. Never changes a monitor/desktop gamma ramp.
// Native readback supplies the same validated path used for frame completion,
// including the lockable-backbuffer fallback on drivers that reject CopyRects.
class DisplayColor {
    IDirect3DTexture8 *upload_=nullptr,*texture_=nullptr;
    unsigned tw_=0,th_=0;
    std::vector<unsigned char> pixels_;
public:
    DisplayColor()=default;
    DisplayColor(const DisplayColor&)=delete;
    DisplayColor& operator=(const DisplayColor&)=delete;
    ~DisplayColor() { clear(); }
    void clear() {
        if(upload_)upload_->Release();if(texture_)texture_->Release();
        upload_=texture_=nullptr;tw_=th_=0;pixels_.clear();
    }
    static void table(unsigned brightness,unsigned gamma,unsigned char (&lut)[256]) {
        if(brightness<50 || brightness>150 || gamma<50 || gamma>200)
            throw std::runtime_error("Brightness must be 50..150 and gamma 50..200");
        for(unsigned i=0;i<256;++i)
            lut[i]=(unsigned char)std::min(255.0,std::floor(255.0*(brightness/100.0)*std::pow(i/255.0,100.0/gamma)+0.5));
    }
    template<class Readback> void apply(IDirect3DDevice8 *device,Readback &readback,unsigned brightness,unsigned gamma) {
        if(brightness==100 && gamma==100)return;
        unsigned char lut[256];table(brightness,gamma,lut);
        IDirect3DSurface8 *source=nullptr;
        checked(readback.surface(device,false,&source));
        D3DSURFACE_DESC desc={};HRESULT hr=source->GetDesc(&desc);
        if(FAILED(hr)){source->Release();checked(hr);}
        if(desc.Format!=D3DFMT_X8R8G8B8 && desc.Format!=D3DFMT_A8R8G8B8) {
            source->Release();throw std::runtime_error("Display color requires a 32-bit backbuffer");
        }
        unsigned tw=1,th=1;while(tw<desc.Width)tw*=2;while(th<desc.Height)th*=2;
        if(tw!=tw_ || th!=th_) {
            clear();
            hr=device->CreateTexture(tw,th,1,0,D3DFMT_A8R8G8B8,D3DPOOL_SYSTEMMEM,&upload_);
            if(SUCCEEDED(hr))hr=device->CreateTexture(tw,th,1,0,D3DFMT_A8R8G8B8,D3DPOOL_DEFAULT,&texture_);
            if(FAILED(hr)){source->Release();clear();checked(hr);}
            tw_=tw;th_=th;
        }
        // Unlock the source before drawing: it may be the actual backbuffer.
        try {pixels_.resize((size_t)desc.Width*desc.Height*4);}
        catch(...) {source->Release();throw;}
        D3DLOCKED_RECT lock={};hr=source->LockRect(&lock,nullptr,D3DLOCK_READONLY);
        if(SUCCEEDED(hr)) {
            for(unsigned y=0;y<desc.Height;++y) {
                const auto *in=(const unsigned char*)lock.pBits+(size_t)y*lock.Pitch;
                auto *out=pixels_.data()+(size_t)y*desc.Width*4;
                for(unsigned x=0;x<desc.Width;++x) {
                    out[x*4]=lut[in[x*4]];out[x*4+1]=lut[in[x*4+1]];
                    out[x*4+2]=lut[in[x*4+2]];out[x*4+3]=255;
                }
            }
            hr=source->UnlockRect();
        }
        source->Release();checked(hr);
        checked(upload_->LockRect(0,&lock,nullptr,0));
        for(unsigned y=0;y<desc.Height;++y)
            std::memcpy((char*)lock.pBits+(size_t)y*lock.Pitch,pixels_.data()+(size_t)y*desc.Width*4,(size_t)desc.Width*4);
        checked(upload_->UnlockRect(0));checked(device->UpdateTexture(upload_,texture_));

        DWORD saved=0;checked(device->CreateStateBlock(D3DSBT_ALL,&saved));
        bool scene=false;
        try {
            D3DVIEWPORT8 viewport={0,0,desc.Width,desc.Height,0,1};checked(device->SetViewport(&viewport));
            checked(device->SetVertexShader(D3DFVF_XYZRHW|D3DFVF_TEX1));checked(device->SetPixelShader(0));
            for(auto state:{D3DRS_ZENABLE,D3DRS_ZWRITEENABLE,D3DRS_ALPHABLENDENABLE,D3DRS_ALPHATESTENABLE,
                            D3DRS_STENCILENABLE,D3DRS_FOGENABLE,D3DRS_LIGHTING})checked(device->SetRenderState(state,FALSE));
            checked(device->SetRenderState(D3DRS_CULLMODE,D3DCULL_NONE));
            checked(device->SetRenderState(D3DRS_FILLMODE,D3DFILL_SOLID));
            checked(device->SetRenderState(D3DRS_COLORWRITEENABLE,15));
            checked(device->SetTexture(0,texture_));
            checked(device->SetTextureStageState(0,D3DTSS_COLOROP,D3DTOP_SELECTARG1));
            checked(device->SetTextureStageState(0,D3DTSS_COLORARG1,D3DTA_TEXTURE));
            checked(device->SetTextureStageState(0,D3DTSS_ALPHAOP,D3DTOP_SELECTARG1));
            checked(device->SetTextureStageState(0,D3DTSS_ALPHAARG1,D3DTA_TEXTURE));
            checked(device->SetTextureStageState(0,D3DTSS_RESULTARG,D3DTA_CURRENT));
            checked(device->SetTextureStageState(0,D3DTSS_TEXCOORDINDEX,0));
            checked(device->SetTextureStageState(0,D3DTSS_TEXTURETRANSFORMFLAGS,D3DTTFF_DISABLE));
            checked(device->SetTextureStageState(0,D3DTSS_MAGFILTER,D3DTEXF_POINT));
            checked(device->SetTextureStageState(0,D3DTSS_MINFILTER,D3DTEXF_POINT));
            checked(device->SetTextureStageState(0,D3DTSS_MIPFILTER,D3DTEXF_NONE));
            checked(device->SetTextureStageState(0,D3DTSS_ADDRESSU,D3DTADDRESS_CLAMP));
            checked(device->SetTextureStageState(0,D3DTSS_ADDRESSV,D3DTADDRESS_CLAMP));
            checked(device->SetTextureStageState(1,D3DTSS_COLOROP,D3DTOP_DISABLE));
            const float right=(float)desc.Width-.5f,bottom=(float)desc.Height-.5f;
            const float u=(float)desc.Width/tw_,v=(float)desc.Height/th_;
            struct Vertex {float x,y,z,rhw,u,v;};
            Vertex quad[]={{-.5f,-.5f,0,1,0,0},{right,-.5f,0,1,u,0},{-.5f,bottom,0,1,0,v},{right,bottom,0,1,u,v}};
            checked(device->BeginScene());scene=true;
            checked(device->DrawPrimitiveUP(D3DPT_TRIANGLESTRIP,2,quad,sizeof(Vertex)));
            checked(device->EndScene());scene=false;
        } catch(...) {
            if(scene)device->EndScene();device->ApplyStateBlock(saved);device->DeleteStateBlock(saved);throw;
        }
        hr=device->ApplyStateBlock(saved);device->DeleteStateBlock(saved);checked(hr);
    }
};
