#pragma once
#include <cstdio>

// Never lock the presentation surface, including with FSAA disabled. A full
// lock can transfer the HD image to CPU memory at every guest fence on a
// discrete GPU and requires a slower lockable presentation allocation.
// CopyRects resolves into an ordinary image surface before a CPU read. A one-pixel copy
// provides the same ordered GPU-to-CPU synchronization without transferring
// an entire HD frame at every guest fence. If a driver rejects that partial
// readback, retain a full-size copy fallback, never skip GPU completion.
// Device/surface parameters allow the driver rejection contract to be tested
// without requiring the reporter's GPU. Production uses the native D3D8 types.
template<class Device, class Surface> class BasicDx8Readback {
    Surface *image_ = nullptr, *fence_ = nullptr;
    D3DFORMAT format_ = D3DFMT_UNKNOWN;
    unsigned width_ = 0, height_ = 0;
    D3DMULTISAMPLE_TYPE samples_ = D3DMULTISAMPLE_NONE;
    bool full_completion_ = false;

    HRESULT copy(Device *device, Surface *backbuffer, bool pixel_copy, Surface **out) {
        auto &target = pixel_copy ? fence_ : image_;
        HRESULT hr = D3D_OK;
        if (!target) {
            hr = device->CreateImageSurface(pixel_copy ? 1 : width_, pixel_copy ? 1 : height_, format_, &target);
            if (FAILED(hr)) {
                std::fprintf(stderr,"[DX8 READBACK] CreateImageSurface %ux%u format=%u hr=%08lx\n",
                    pixel_copy ? 1 : width_,pixel_copy ? 1 : height_,(unsigned)format_,(unsigned long)hr);
                return hr;
            }
        }
        const RECT pixel = {0, 0, 1, 1};
        hr = device->CopyRects(backbuffer, pixel_copy ? &pixel : nullptr, pixel_copy ? 1 : 0, target, nullptr);
        if (FAILED(hr)) {
            std::fprintf(stderr,"[DX8 READBACK] CopyRects %s source=%ux%u format=%u samples=%u hr=%08lx\n",
                pixel_copy ? "pixel" : "full",width_,height_,(unsigned)format_,(unsigned)samples_,(unsigned long)hr);
        } else { target->AddRef(); *out = target; }
        return hr;
    }
public:
    BasicDx8Readback() = default;
    BasicDx8Readback(const BasicDx8Readback&) = delete;
    BasicDx8Readback& operator=(const BasicDx8Readback&) = delete;
    ~BasicDx8Readback() { clear(); }
    void clear() {
        if (image_) image_->Release();
        if (fence_) fence_->Release();
        image_ = fence_ = nullptr; format_ = D3DFMT_UNKNOWN;
        width_ = height_ = 0;
        samples_ = D3DMULTISAMPLE_NONE; full_completion_ = false;
    }
    HRESULT surface(Device *device, bool completion_only, Surface **out) {
        *out = nullptr;
        Surface *backbuffer = nullptr;
        HRESULT hr = device->GetBackBuffer(0, D3DBACKBUFFER_TYPE_MONO, &backbuffer);
        if (FAILED(hr)) {
            std::fprintf(stderr,"[DX8 READBACK] GetBackBuffer hr=%08lx\n",(unsigned long)hr);
            return hr;
        }
        D3DSURFACE_DESC desc = {};
        hr = backbuffer->GetDesc(&desc);
        if (FAILED(hr)) std::fprintf(stderr,"[DX8 READBACK] GetDesc hr=%08lx\n",(unsigned long)hr);
        if (SUCCEEDED(hr)) {
            if (format_ != desc.Format || width_ != desc.Width || height_ != desc.Height || samples_ != desc.MultiSampleType) {
                clear(); format_ = desc.Format; width_ = desc.Width; height_ = desc.Height;
                samples_ = desc.MultiSampleType;
            }
            const bool pixel_copy = completion_only && !full_completion_;
            hr = copy(device, backbuffer, pixel_copy, out);
            if (pixel_copy && hr == D3DERR_INVALIDCALL) {
                hr = copy(device, backbuffer, false, out);
                if (SUCCEEDED(hr)) {
                    full_completion_ = true;
                    if (fence_) { fence_->Release(); fence_ = nullptr; }
                    std::fprintf(stderr,"[DX8 READBACK] Using full-size GPU completion after rejected pixel readback\n");
                }
            }
        }
        backbuffer->Release(); return hr;
    }
};
using Dx8Readback = BasicDx8Readback<IDirect3DDevice8, IDirect3DSurface8>;
