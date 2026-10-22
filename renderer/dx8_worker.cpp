#include <memory>
#include "pipe_ready.h"
#include <windows.h>
// mingw-w64 vocabulary used by the pinned, otherwise unmodified DX8 headers.
typedef BOOL WINBOOL;
#ifndef __MSABI_LONG
#define __MSABI_LONG(value) value##L
#endif
#include <d3d8.h>
#include <cstdio>
#include <cstring>
#include <cerrno>
#include "dx8_replay.h"
#include "performance_report.h"
#include "window_geometry.h"
#include <io.h>
#include <fcntl.h>

// Hints belong to the process that creates the device, not the 64-bit game.
// Explicit Windows GPU preferences retain precedence over these defaults.
extern "C" {
__declspec(dllexport) DWORD NvOptimusEnablement=1;
__declspec(dllexport) int AmdPowerXpressRequestHighPerformance=1;
}

static bool user_closed = false;
static constexpr UINT_PTR fps_title_timer = 1;
static ULONGLONG fps_title_started;
static unsigned fps_title_frames;
static unsigned captured_mouse_buttons;
static bool publish_display_events=false;
static unsigned window_render_width=1280,window_render_height=720;
static bool window_borderless=false;
static Xml1WindowSize fitted_window(HWND window,const RECT &area,bool enlarge) {
    RECT frame={0,0,0,0};
    AdjustWindowRect(&frame,(DWORD)GetWindowLongPtrW(window,GWL_STYLE),FALSE);
    return xml1_fit_window(window_render_width,window_render_height,
        area.right-area.left,area.bottom-area.top,frame.right-frame.left,frame.bottom-frame.top,enlarge);
}
static void publish_output_display(HWND window) {
    MONITORINFOEXA info={};info.cbSize=sizeof(info);
    if(GetMonitorInfoA(MonitorFromWindow(window,MONITOR_DEFAULTTONEAREST),&info))xml1_pc_channel_set_display(info.szDevice);
}
static LRESULT CALLBACK playtest_window_proc(HWND window, UINT message, WPARAM wparam, LPARAM lparam) {
    if(message==WM_SIZE && wparam!=SIZE_MINIMIZED) {
        RECT client={};GetClientRect(window,&client);
        if(client.right>0 && client.bottom>0) {
            pc_ui::client_width=client.right;pc_ui::client_height=client.bottom;
        }
    }
    if(message==WM_GETMINMAXINFO && !window_borderless) {
        MONITORINFO monitor={};monitor.cbSize=sizeof(monitor);
        if(GetMonitorInfoW(MonitorFromWindow(window,MONITOR_DEFAULTTONEAREST),&monitor)) {
            auto size=fitted_window(window,monitor.rcWork,true);
            auto info=reinterpret_cast<MINMAXINFO*>(lparam);
            info->ptMaxSize={size.width,size.height};
            info->ptMaxPosition={monitor.rcWork.left-monitor.rcMonitor.left+(monitor.rcWork.right-monitor.rcWork.left-size.width)/2,
                monitor.rcWork.top-monitor.rcMonitor.top+(monitor.rcWork.bottom-monitor.rcWork.top-size.height)/2};
            return 0;
        }
    }
    if(publish_display_events && (message==WM_MOVE || message==WM_DISPLAYCHANGE))publish_output_display(window);
    if (message == WM_CLOSE) { user_closed = true; return 0; }
    if(message==WM_SETFOCUS || message==WM_KILLFOCUS) {
        xml1_pc_channel_focus(message==WM_SETFOCUS);return 0;
    }
    if(message==WM_KEYDOWN || message==WM_KEYUP || message==WM_SYSKEYDOWN || message==WM_SYSKEYUP) {
        bool down=message==WM_KEYDOWN || message==WM_SYSKEYDOWN;
        // Deliver bindable Alt combinations through the same mapping as other
        // keys. Leaving these to DefWindowProc activates the window menu and
        // interrupts gameplay. Alt+F4 remains the normal close shortcut.
        if((message==WM_SYSKEYDOWN || message==WM_SYSKEYUP) && wparam==VK_F4)
            return DefWindowProcW(window,message,wparam,lparam);
        if(!down || !(lparam&(1u<<30)))pc_ui::input_key((unsigned)wparam,down);
        return 0;
    }
    if(message==WM_SYSCOMMAND && (wparam&0xfff0)==SC_KEYMENU)return 0;
    if(message==WM_MOUSEMOVE || message==WM_LBUTTONDOWN || message==WM_LBUTTONUP ||
       message==WM_RBUTTONDOWN || message==WM_RBUTTONUP || message==WM_MBUTTONDOWN || message==WM_MBUTTONUP) {
        int x=(short)LOWORD(lparam),y=(short)HIWORD(lparam);
        unsigned key=message==WM_LBUTTONDOWN || message==WM_LBUTTONUP?VK_LBUTTON:
            message==WM_RBUTTONDOWN || message==WM_RBUTTONUP?VK_RBUTTON:
            message==WM_MBUTTONDOWN || message==WM_MBUTTONUP?VK_MBUTTON:0;
        bool down=message==WM_LBUTTONDOWN || message==WM_RBUTTONDOWN || message==WM_MBUTTONDOWN;
        if(key) {if(down)captured_mouse_buttons|=key;else captured_mouse_buttons&=~key;}
        if(down)SetCapture(window);
        pc_ui::input_mouse(x,y,key,down,0);
        if(key && !down && !(wparam&(MK_LBUTTON|MK_RBUTTON|MK_MBUTTON)) && GetCapture()==window)ReleaseCapture();
        return 0;
    }
    if(message==WM_CAPTURECHANGED) {
        xml1_pc_channel_key(VK_LBUTTON,0);xml1_pc_channel_key(VK_RBUTTON,0);xml1_pc_channel_key(VK_MBUTTON,0);
        // ReleaseCapture after a normal button-up must retain the queued click.
        // Only an unexpected transfer while a button is down cancels a drag.
        if(captured_mouse_buttons)xml1_pc_channel_pointer_cancel();
        captured_mouse_buttons=0;
        return 0;
    }
    if(message==WM_MOUSEWHEEL) {
        POINT point={(short)LOWORD(lparam),(short)HIWORD(lparam)};ScreenToClient(window,&point);
        int wheel=(short)HIWORD(wparam);
        pc_ui::input_mouse(point.x,point.y,0,false,wheel);
        return 0;
    }
    if (message == WM_TIMER && wparam == fps_title_timer) {
        ULONGLONG now = GetTickCount64();
        ULONGLONG elapsed = now - fps_title_started;
        if (elapsed) {
            char title[96];
            std::snprintf(title, sizeof(title), "OpenXML1 - DX8 Playtest | %.1f FPS",
                1000.0 * fps_title_frames / elapsed);
            SetWindowTextA(window, title);
            fps_title_started = now;
            fps_title_frames = 0;
        }
        return 0;
    }
    return DefWindowProcW(window, message, wparam, lparam);
}

static bool pump_playtest_window() {
    MSG message;
    while (PeekMessageW(&message, nullptr, 0, 0, PM_REMOVE)) {
        TranslateMessage(&message);
        DispatchMessageW(&message);
    }
    return !user_closed;
}

// Stage one: establish actual system D3D8 capabilities before defining the
// Xbox-to-PC graphics bridge. This probe does not run or render game code.
int main(int argc, char** argv) {
    const bool replayMode = argc == 4 && std::strcmp(argv[1], "--replay") == 0;
    const bool benchmarkMode = argc == 4 && std::strcmp(argv[1], "--benchmark") == 0;
    const bool vblankMode = argc == 3 && std::strcmp(argv[1], "--vblank-stream") == 0;
    const bool liveMode = vblankMode || (argc == 3 && std::strcmp(argv[1], "--stream") == 0);
    const char* visibleEnv = std::getenv("XML1_DX8_VISIBLE");
    const bool visible = liveMode && !vblankMode && visibleEnv && !std::strcmp(visibleEnv, "1");
    if (liveMode) {
        std::freopen(vblankMode?"build/dx8-vblank.log":"build/dx8-live.log","wb",stdout);
        std::freopen(vblankMode?"build/dx8-vblank-errors.log":"build/dx8-live-errors.log","wb",stderr);
        std::setvbuf(stdout,nullptr,_IONBF,0);
    }
    if (!replayMode && !benchmarkMode && !liveMode && (argc != 2 || std::strcmp(argv[1], "--probe") != 0)) {
        std::fprintf(stderr, "Usage: xml1-dx8-worker --probe | --replay packet.bin capture.bmp | --benchmark packet.bin iterations\n");
        return 2;
    }
    SetErrorMode(SEM_FAILCRITICALERRORS | SEM_NOGPFAULTERRORBOX);
    HMODULE library = LoadLibraryExW(L"d3d8.dll", nullptr, LOAD_LIBRARY_SEARCH_SYSTEM32);
    if (!library) { std::fprintf(stderr, "System D3D8 load failed: %lu\n", GetLastError()); return 1; }
    using Create = IDirect3D8* (WINAPI*)(UINT);
    auto create = reinterpret_cast<Create>(GetProcAddress(library, "Direct3DCreate8"));
    IDirect3D8* api = create ? create(D3D_SDK_VERSION) : nullptr;
    if (!api) { std::fprintf(stderr, "Direct3DCreate8 failed\n"); FreeLibrary(library); return 1; }
    wchar_t modulePath[MAX_PATH] = {};
    GetModuleFileNameW(library, modulePath, MAX_PATH);
    std::printf("System D3D8: %ls\n", modulePath);
    std::printf("[DX8 PROCESS] pid=%lu role=%s adapters=%u\n",GetCurrentProcessId(),vblankMode?"vblank":"renderer",api->GetAdapterCount());
    for(UINT index=0;index<api->GetAdapterCount();++index) {
        D3DADAPTER_IDENTIFIER8 identity={};
        if(SUCCEEDED(api->GetAdapterIdentifier(index,0,&identity)))
            std::printf("[DX8 ADAPTER] index=%u description=%s driver=%s vendor=%04lx device=%04lx subsystem=%08lx revision=%lu driver_version=%08lx:%08lx\n",
                index,identity.Description,identity.Driver,identity.VendorId,identity.DeviceId,identity.SubSysId,identity.Revision,
                identity.DriverVersion.HighPart,identity.DriverVersion.LowPart);
    }
    D3DADAPTER_IDENTIFIER8 adapter = {};
    D3DCAPS8 caps = {};
    UINT adapter_index=D3DADAPTER_DEFAULT;
    if(const char *value=std::getenv("XML1_DX8_ADAPTER")) {
        char *end=nullptr;long index=std::strtol(value,&end,10);
        if(!*value || *end || index < -1 || index >= (long)api->GetAdapterCount()) {
            std::fprintf(stderr,"Requested DX8 adapter is unavailable: %s\n",value);api->Release();FreeLibrary(library);return 2;
        }
        if(index>=0)adapter_index=(UINT)index;
    }
    api->GetAdapterIdentifier(adapter_index, 0, &adapter);
    HRESULT hr = api->GetDeviceCaps(adapter_index, D3DDEVTYPE_HAL, &caps);
    if (FAILED(hr)) { api->Release(); FreeLibrary(library); return 1; }
    std::printf("Adapter: %s\nVertex shader: %08lx; pixel shader: %08lx\nMax texture: %lux%lu; stages: %lu; simultaneous textures: %lu\n",
        adapter.Description, caps.VertexShaderVersion, caps.PixelShaderVersion,
        caps.MaxTextureWidth, caps.MaxTextureHeight, caps.MaxTextureBlendStages, caps.MaxSimultaneousTextures);
    WNDCLASSW wc = {};
    wc.lpfnWndProc = playtest_window_proc;
    wc.hInstance = GetModuleHandleW(nullptr);
    // A null class cursor leaves the previous cursor in place over the client
    // area, including Windows' busy cursor inherited during startup.
    wc.hCursor = LoadCursor(nullptr, IDC_ARROW);
    wc.lpszClassName = L"OpenXML1DX8Probe";
    RegisterClassW(&wc);
    Xml1PcInputSnapshot initial_input={};
    bool pc_connected=liveMode && !vblankMode && std::getenv("XML1_PC_INPUT_CHANNEL");
    publish_display_events=pc_connected;
    if(vblankMode && std::getenv("XML1_PC_INPUT_CHANNEL") && !xml1_pc_channel_connect()) {
        std::fprintf(stderr,"Cannot connect display timing channel\n");return 2;
    }
    if(pc_connected && (!xml1_pc_channel_connect() || !xml1_pc_channel_read(&initial_input,1))) {
        std::fprintf(stderr,"Cannot connect PC input channel\n");return 2;
    }
    // A hidden process-local layout check uses the same window setup as a
    // player run without showing or activating the window.
    const bool apply_window_layout=visible || std::getenv("XML1_TEST_WINDOW_LAYOUT");
    bool borderless=apply_window_layout && pc_connected && initial_input.settings.fullscreen;
    window_borderless=borderless;
    const DWORD windowStyle = borderless?WS_POPUP:WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU | WS_MINIMIZEBOX | WS_MAXIMIZEBOX;
    unsigned render_width=liveMode&&!vblankMode?1280:640,render_height=liveMode&&!vblankMode?720:480;
    const char* resolution=vblankMode?nullptr:std::getenv("XML1_DX8_RESOLUTION");
    if(resolution) {
        unsigned width=0,height=0;char trailing=0;
        if(std::sscanf(resolution,"%ux%u%c",&width,&height,&trailing)!=2 ||
           !xml1_pc_resolution_supported(width,height)) {
            std::fprintf(stderr,"Unsupported XML1_DX8_RESOLUTION\n");return 2;
        }
        render_width=width;render_height=height;
    }
    output_width=render_width;output_height=render_height;
    window_render_width=render_width;window_render_height=render_height;
    pc_ui::client_width=render_width;pc_ui::client_height=render_height;
    RECT client = {0, 0, (LONG)render_width, (LONG)render_height};
    AdjustWindowRect(&client, windowStyle, FALSE);
    HWND window = CreateWindowW(wc.lpszClassName, visible ? L"OpenXML1 - DX8 Playtest" : L"XML1 D3D8 probe", windowStyle,
        CW_USEDEFAULT, CW_USEDEFAULT, client.right-client.left, client.bottom-client.top,
        nullptr, nullptr, wc.hInstance, nullptr);
    if(apply_window_layout && !borderless) {
        MONITORINFO monitor={};monitor.cbSize=sizeof(monitor);
        if(GetMonitorInfoW(MonitorFromWindow(window,MONITOR_DEFAULTTONEAREST),&monitor)) {
            auto size=fitted_window(window,monitor.rcWork,false);
            const RECT &r=monitor.rcWork;
            SetWindowPos(window,nullptr,r.left+(r.right-r.left-size.width)/2,r.top+(r.bottom-r.top-size.height)/2,
                size.width,size.height,SWP_NOZORDER|SWP_NOACTIVATE);
        }
    }
    if(borderless) {
        MONITORINFO monitor={};monitor.cbSize=sizeof(monitor);
        if(!GetMonitorInfoW(MonitorFromWindow(window,MONITOR_DEFAULTTONEAREST),&monitor))return 2;
        const RECT &r=monitor.rcMonitor;
        SetWindowPos(window,nullptr,r.left,r.top,r.right-r.left,r.bottom-r.top,SWP_NOZORDER|SWP_NOACTIVATE);
        // Mouse coordinates are client pixels; scale hit targets to this size.
        pc_ui::client_width=r.right-r.left;pc_ui::client_height=r.bottom-r.top;
    }
    {
        RECT outer={},client_area={};MONITORINFO monitor={};monitor.cbSize=sizeof(monitor);
        GetWindowRect(window,&outer);GetClientRect(window,&client_area);
        if(GetMonitorInfoW(MonitorFromWindow(window,MONITOR_DEFAULTTONEAREST),&monitor)) {
            auto maximum=fitted_window(window,monitor.rcWork,true);
            std::printf("[WINDOW GEOMETRY] mode=%s client=%ldx%ld outer=%ld,%ld,%ld,%ld work=%ld,%ld,%ld,%ld monitor=%ld,%ld,%ld,%ld maximize=%ldx%ld render=%ux%u\n",
                borderless?"borderless":"windowed",client_area.right,client_area.bottom,
                outer.left,outer.top,outer.right,outer.bottom,
                monitor.rcWork.left,monitor.rcWork.top,monitor.rcWork.right,monitor.rcWork.bottom,
                monitor.rcMonitor.left,monitor.rcMonitor.top,monitor.rcMonitor.right,monitor.rcMonitor.bottom,
                maximum.width,maximum.height,render_width,render_height);
        }
    }
    if(pc_connected)publish_output_display(window);
    D3DPRESENT_PARAMETERS pp = {};
    D3DDISPLAYMODE mode = {};
    api->GetAdapterDisplayMode(adapter_index, &mode);
    std::printf("Native display refresh: %u Hz\n",mode.RefreshRate);
    pp.BackBufferWidth = render_width;
    pp.BackBufferHeight = render_height;
    pp.BackBufferFormat = mode.Format;
    pp.BackBufferCount = 1;
    pp.SwapEffect = D3DSWAPEFFECT_DISCARD;
    pp.hDeviceWindow = window;
    pp.Windowed = TRUE;
    pp.EnableAutoDepthStencil = TRUE;
    pp.AutoDepthStencilFormat = D3DFMT_D24S8;
    unsigned fsaa_modes=1;
    const unsigned sample_counts[]={2,4,8};
    for(unsigned count:sample_counts) {
        auto samples=static_cast<D3DMULTISAMPLE_TYPE>(count);
        if(SUCCEEDED(api->CheckDeviceMultiSampleType(adapter_index,D3DDEVTYPE_HAL,mode.Format,TRUE,samples)) &&
           SUCCEEDED(api->CheckDeviceMultiSampleType(adapter_index,D3DDEVTYPE_HAL,D3DFMT_D24S8,TRUE,samples)))
            fsaa_modes|=1u<<count;
    }
    if(pc_connected)xml1_pc_channel_set_fsaa_modes(fsaa_modes);
    unsigned fsaa=pc_connected?initial_input.settings.fsaa:0;
    if(fsaa>8 || !(fsaa_modes&(1u<<fsaa))) {
        std::fprintf(stderr,"Saved FSAA %ux is unsupported by this DX8 device\n",fsaa);
        xml1_pc_channel_close();DestroyWindow(window);api->Release();FreeLibrary(library);return 2;
    }
    pp.MultiSampleType=static_cast<D3DMULTISAMPLE_TYPE>(fsaa);
    pp.Flags = 0; // Completion uses a one-pixel image copy; no lockable backbuffer.
    IDirect3DDevice8* device = nullptr;
    hr = api->CreateDevice(adapter_index, D3DDEVTYPE_HAL, window,
        D3DCREATE_HARDWARE_VERTEXPROCESSING | D3DCREATE_FPU_PRESERVE, &pp, &device);
    std::printf("%s D3D8 HAL device creation: %08lx\n", visible ? "Visible playtest" : "Hidden", static_cast<unsigned long>(hr));
    std::printf("Native backbuffer: %ux%u\n",render_width,render_height);
    std::printf("Native FSAA: %u; supported mask=%08x\n",fsaa,fsaa_modes);
    if(device) {
        D3DDEVICE_CREATION_PARAMETERS actual={};checked(device->GetCreationParameters(&actual));
        MONITORINFOEXA monitor={};monitor.cbSize=sizeof(monitor);
        GetMonitorInfoA(api->GetAdapterMonitor(actual.AdapterOrdinal),&monitor);
        std::printf("[DX8 DEVICE] adapter=%u type=%u behavior=%08lx display=%s refresh=%u windowed=%u\n",
            actual.AdapterOrdinal,(unsigned)actual.DeviceType,actual.BehaviorFlags,monitor.szDevice,mode.RefreshRate,pp.Windowed);
        if(vblankMode || replayMode || benchmarkMode) {
            try {native_vblank.open(api->GetAdapterMonitor(adapter_index));}
            catch(const std::exception& e){std::fprintf(stderr,"%s\n",e.what());device->Release();api->Release();FreeLibrary(library);return 2;}
        }
    }
    if(device && fsaa) {
        // Fail before consuming any guest work if this driver cannot resolve
        // its multisampled surface for the mandatory completion/capture path.
        try { checked(device->Clear(0,nullptr,D3DCLEAR_TARGET,0,1,0));complete_rendering(device); }
        catch(const std::exception &error) {
            std::fprintf(stderr,"FSAA readback initialization failed: %s\n",error.what());
            native_readback.clear();device->Release();device=nullptr;hr=E_FAIL;
        }
    }
    if (device && visible) {
        fps_title_started = GetTickCount64();
        SetWindowTextA(window, "OpenXML1 - DX8 Playtest | 0.0 FPS");
        SetTimer(window, fps_title_timer, 500, nullptr);
        ShowWindow(window, SW_SHOWNORMAL);
    }
    if (device && replayMode) {
        try { replay(device,argv[2],argv[3]); }
        catch (const std::exception& error) { std::fprintf(stderr,"%s\n",error.what()); hr=E_FAIL; }
    }
    if(device && benchmarkMode) {
        quiet_replay=true;
        unsigned iterations=(unsigned)std::strtoul(argv[3],nullptr,10);
        if(!iterations || iterations>10000) return 2;
        try {
            LARGE_INTEGER start,end,frequency; QueryPerformanceFrequency(&frequency);
            for(unsigned i=0;i<5;++i) replay(device,argv[2],nullptr);
            QueryPerformanceCounter(&start);
            for(unsigned i=0;i<iterations;++i) replay(device,argv[2],nullptr);
            QueryPerformanceCounter(&end);
            double ms=1000.0*(end.QuadPart-start.QuadPart)/frequency.QuadPart/iterations;
            std::printf("[DX8 BENCHMARK] iterations=%u mean_ms=%.3f render_fps=%.2f\n",iterations,ms,1000.0/ms);
        } catch(const std::exception& error) {std::fprintf(stderr,"%s\n",error.what());hr=E_FAIL;}
    }
    if (device && liveMode) {
        try {
            HANDLE pipe=CreateFileA(argv[2],GENERIC_READ|GENERIC_WRITE,0,nullptr,OPEN_EXISTING,0,nullptr);
            if (pipe==INVALID_HANDLE_VALUE) throw std::runtime_error("Cannot connect live graphics pipe");
            int fd=_open_osfhandle((intptr_t)pipe,_O_RDONLY|_O_BINARY);
            FILE* input=fd>=0?_fdopen(fd,"rb"):nullptr;
            if (!input) throw std::runtime_error("Cannot read graphics pipe");
            std::unique_ptr<PipeReady> reader;
            if(visible || std::getenv("XML1_DX8_MESSAGE_WAIT_TEST"))reader.reset(new PipeReady(input));
            char report_display[32]={};xml1_pc_channel_get_display(report_display,sizeof(report_display));
            PerformanceReport report;if(!vblankMode)report.start(api,pp,visible,adapter_index,report_display);
            unsigned frame=1;
            LARGE_INTEGER fps_start,fps_previous,fps_frequency;QueryPerformanceFrequency(&fps_frequency);
            QueryPerformanceCounter(&fps_start);fps_previous=fps_start;double max_frame_ms=0;
            for (unsigned sequence=1;;++sequence) {
                double wait_started=perf_now_ms();
                int next=reader?reader->next(pump_playtest_window):std::fgetc(input);
                if (user_closed) {report.exit_reason("window_closed",sequence,0);std::printf("Playtest window closed by user\n");break;}
                if (next==EOF) {
                    report.exit_reason("pipe_end",sequence,reader?reader->read_error():GetLastError());
                    std::fprintf(stderr,"[DX8 PIPE END] seq=%u frame=%u eof=%d error=%d errno=%d win32=%lu\n",
                        sequence,frame,std::feof(input),std::ferror(input),reader?reader->read_errno():errno,
                        reader?reader->read_error():GetLastError());
                    break;
                }
                std::ungetc(next,input);
                perf_wait_ms+=perf_now_ms()-wait_started;
                double work_started=perf_now_ms();
                char capture[128];
                std::snprintf(capture,sizeof(capture),"build/dx8-live-frame-%06u.bmp",frame);
                ULONGLONG command_start=GetTickCount64();
                if(vblankMode) {
                    char magic[8];
                    if(std::fread(magic,1,8,input)!=8 || std::memcmp(magic,"XMLDX8V1",8))
                        throw std::runtime_error("Invalid vertical blank command");
                    wait_native_vblank(device);
                    DWORD ack=sequence,written=0;
                    if(!WriteFile(pipe,&ack,4,&written,nullptr)||written!=4) break;
                    continue;
                }
                // Diagnostic full-frame capture is optional; guest completion
                // barriers remain mandatory even when screenshots are disabled.
                const bool capture_enabled = !std::getenv("XML1_DX8_NO_CAPTURE");
                bool presented=replay_stream(device,input,(capture_enabled && (std::getenv("XML1_DX8_CAPTURE_ALL")||frame<=8||frame%60==0))?capture:nullptr,true);
                perf_work_ms+=perf_now_ms()-work_started;++perf_commands;
                ULONGLONG command_ms=GetTickCount64()-command_start;
                if(command_ms>=50) std::printf("[DX8 COMMAND] seq=%u frame=%u presented=%u ms=%llu\n",sequence,frame,presented,command_ms);
                DWORD ack=sequence,written=0;
                if (!WriteFile(pipe,&ack,4,&written,nullptr)||written!=4) {
                    DWORD error=GetLastError();report.exit_reason("ack_failed",sequence,error);
                    std::fprintf(stderr,"[DX8 ACK FAILED] seq=%u frame=%u written=%lu win32=%lu\n",
                        sequence,frame,written,error);
                    break;
                }
                if (presented) {
                    if (visible) ++fps_title_frames;
                    LARGE_INTEGER now;QueryPerformanceCounter(&now);
                    double frame_ms=1000.0*(now.QuadPart-fps_previous.QuadPart)/fps_frequency.QuadPart;
                    if(frame_ms>max_frame_ms)max_frame_ms=frame_ms;fps_previous=now;
                    report.frame(frame,frame_ms,render_width,render_height,perf_wait_ms,perf_work_ms,perf_read_ms,perf_texture_ms,perf_fence_ms,perf_present_ms,perf_commands,perf_fences);
                    if(frame%120==0) {
                        double seconds=(double)(now.QuadPart-fps_start.QuadPart)/fps_frequency.QuadPart;
                        std::printf("[DX8 FPS] frame=%u fps=%.2f mean_ms=%.3f max_frame_ms=%.3f output=%ux%u\n",frame,120.0/seconds,1000.0*seconds/120,max_frame_ms,render_width,render_height);
                        std::printf("[DX8 COST] frames=120 commands=%u fences=%u wait_ms=%.3f work_ms=%.3f fence_ms=%.3f present_ms=%.3f\n",
                            perf_commands,perf_fences,perf_wait_ms,perf_work_ms,perf_fence_ms,perf_present_ms);
                        // These are disjoint wall-time categories. decode_submit
                        // includes driver calls and host scheduling, not pure CPU
                        // execution. Texture time is a subset of decode_submit.
                        std::printf("[DX8 COST SPLIT] incoming_read_ms=%.3f decode_submit_ms=%.3f texture_ms=%.3f\n",
                            perf_read_ms,std::max(0.0,perf_work_ms-perf_read_ms-perf_fence_ms-perf_present_ms),perf_texture_ms);
                        perf_wait_ms=perf_work_ms=perf_fence_ms=perf_present_ms=0;perf_commands=perf_fences=0;
                        perf_read_ms=perf_texture_ms=0;
                        fps_start=now;max_frame_ms=0;
                    }
                    if (frame==1||frame%60==0) {std::printf("Presented live frame %u\n",frame);report_texture_cache(frame);}
                    ++frame;
                }
            }
            reader.reset();
            std::fclose(input);
        } catch (const std::exception& error) { std::fprintf(stderr,"%s\n",error.what()); hr=E_FAIL; }
    }
    if(texture_requests) report_texture_cache(0);
    clear_texture_cache();
    geometry_stream.clear();
    native_vblank.clear();
    native_readback.clear();
    xml1_pc_channel_close();
    if (device) device->Release();
    if (window) { KillTimer(window, fps_title_timer); DestroyWindow(window); }
    UnregisterClassW(wc.lpszClassName, wc.hInstance);
    api->Release();
    FreeLibrary(library);
    return FAILED(hr) ? 1 : 0;
}
