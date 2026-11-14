#pragma once
#include <cstdio>

// Choose and validate a readback strategy before accepting guest work.
// Prefer a small image copy, then a full image copy. If neither works, the
// owner recreates a non-MSAA device with LOCKABLE_BACKBUFFER and initializes
// direct mode, which does not allocate image surfaces or call CopyRects.
// Device/surface parameters allow the driver rejection contract to be tested
// without requiring the reporter's GPU. Production uses the native D3D8 types.
template<class Device, class Surface> class BasicDx8Readback {
    Surface *image_ = nullptr, *fence_ = nullptr;
    D3DFORMAT format_ = D3DFMT_UNKNOWN;
    unsigned width_ = 0, height_ = 0;
    D3DMULTISAMPLE_TYPE samples_ = D3DMULTISAMPLE_NONE;
    bool full_completion_ = false;
    bool direct_ = false, ready_ = false;

    HRESULT probe(Device *device, bool completion_only) {
        Surface *target = nullptr;
        HRESULT hr = surface(device, completion_only, &target);
        if (FAILED(hr)) return hr;
        D3DLOCKED_RECT lock = {};
        hr = target->LockRect(&lock, nullptr, D3DLOCK_READONLY);
        if (SUCCEEDED(hr)) hr = target->UnlockRect();
        target->Release();
        return hr;
    }

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
        direct_ = ready_ = false;
    }
    // A failed initialization never leaves a usable/stale completion path.
    HRESULT initialize(Device *device, bool direct = false) {
        clear();
        Surface *backbuffer = nullptr;
        HRESULT hr = device->GetBackBuffer(0, D3DBACKBUFFER_TYPE_MONO, &backbuffer);
        if (FAILED(hr)) return hr;
        D3DSURFACE_DESC desc = {};
        hr = backbuffer->GetDesc(&desc); backbuffer->Release();
        if (FAILED(hr)) return hr;
        if (direct && desc.MultiSampleType != D3DMULTISAMPLE_NONE) return D3DERR_INVALIDCALL;
        format_ = desc.Format; width_ = desc.Width; height_ = desc.Height;
        samples_ = desc.MultiSampleType; direct_ = direct; ready_ = true;
        hr = probe(device, true);
        if (!direct && hr == D3DERR_INVALIDCALL) {
            full_completion_ = true;
            hr = probe(device, true);
        }
        // Capture must work too, including its LockRect, before startup succeeds.
        if (SUCCEEDED(hr)) hr = probe(device, false);
        if (FAILED(hr)) { clear(); return hr; }
        if (full_completion_ && fence_) { fence_->Release(); fence_ = nullptr; }
        std::fprintf(stderr,"[DX8 READBACK] Validated %s completion and capture\n",
            direct_ ? "direct-lock" : full_completion_ ? "full-image" : "pixel-image");
        return D3D_OK;
    }
    HRESULT surface(Device *device, bool completion_only, Surface **out) {
        *out = nullptr;
        if (!ready_) return D3DERR_INVALIDCALL;
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
                // Device reset requires initialization before more guest work.
                clear(); backbuffer->Release(); return D3DERR_INVALIDCALL;
            }
            if (direct_) { *out = backbuffer; return D3D_OK; }
            const bool pixel_copy = completion_only && !full_completion_;
            hr = copy(device, backbuffer, pixel_copy, out);
        }
        backbuffer->Release(); return hr;
    }
};
using Dx8Readback = BasicDx8Readback<IDirect3DDevice8, IDirect3DSurface8>;
