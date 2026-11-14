#pragma once
#include <cstdio>
#include <string>
#include <vector>

// D3DAssemble emits legacy shader tokens; all rendering remains native D3D8.
// Load only the Windows compiler, never a DLL beside a user shader.
struct Xml1ShaderBlob : IUnknown {
    virtual void *STDMETHODCALLTYPE GetBufferPointer()=0;
    virtual SIZE_T STDMETHODCALLTYPE GetBufferSize()=0;
};
class CustomShader {
    IDirect3DDevice8 *device_=nullptr;
    DWORD shader_=0;
    bool attempted_=false;
public:
    ~CustomShader(){clear();}
    CustomShader()=default;
    CustomShader(const CustomShader&)=delete;
    CustomShader& operator=(const CustomShader&)=delete;
    void clear(){if(device_){if(shader_)device_->DeletePixelShader(shader_);device_->Release();}device_=nullptr;shader_=0;attempted_=false;}
    void disable(){clear();attempted_=true;}
    DWORD load(IDirect3DDevice8 *device,const char *path) {
        if(attempted_)return shader_;
        attempted_=true;
        if(!path || !*path)return 0;
        FILE *file=std::fopen(path,"rb");
        if(!file){std::fprintf(stderr,"[CUSTOM SHADER] Cannot read %s; effect disabled\n",path);return 0;}
        std::vector<char> source(65537);size_t size=std::fread(source.data(),1,source.size(),file);
        bool read_error=std::ferror(file)!=0;std::fclose(file);
        if(read_error || !size || size>65536){std::fprintf(stderr,"[CUSTOM SHADER] Invalid source size; effect disabled\n");return 0;}
        HMODULE compiler=LoadLibraryExW(L"d3dcompiler_47.dll",nullptr,LOAD_LIBRARY_SEARCH_SYSTEM32);
        using Assemble=HRESULT(WINAPI*)(const void*,SIZE_T,const char*,const void*,void*,UINT,Xml1ShaderBlob**,Xml1ShaderBlob**);
        auto assemble=compiler?(Assemble)GetProcAddress(compiler,"D3DAssemble"):nullptr;
        if(!assemble){if(compiler)FreeLibrary(compiler);std::fprintf(stderr,"[CUSTOM SHADER] Windows shader assembler unavailable; effect disabled\n");return 0;}
        Xml1ShaderBlob *code=nullptr,*errors=nullptr;
        // No include handler: source cannot cause arbitrary file inclusion.
        HRESULT hr=assemble(source.data(),size,path,nullptr,nullptr,0,&code,&errors);
        if(errors){std::fprintf(stderr,"[CUSTOM SHADER] %.*s\n",(int)errors->GetBufferSize(),(const char*)errors->GetBufferPointer());errors->Release();}
        if(SUCCEEDED(hr) && code && code->GetBufferSize()>=8) {
            auto tokens=(const DWORD*)code->GetBufferPointer();
            if(tokens[0]<D3DPS_VERSION(1,1) || tokens[0]>D3DPS_VERSION(1,4))hr=E_INVALIDARG;
            else hr=device->CreatePixelShader(tokens,&shader_);
        } else if(SUCCEEDED(hr))hr=E_INVALIDARG;
        if(code)code->Release();FreeLibrary(compiler);
        if(FAILED(hr)){shader_=0;std::fprintf(stderr,"[CUSTOM SHADER] Rejected %s (%08lx); effect disabled\n",path,(unsigned long)hr);return 0;}
        device_=device;device_->AddRef();std::fprintf(stderr,"[CUSTOM SHADER] Loaded %s\n",path);return shader_;
    }
};
