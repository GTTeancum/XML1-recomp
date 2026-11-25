#include <windows.h>
#include <commctrl.h>
#include <filesystem>
#include <fstream>
#include <string>
#include <thread>
#include <mutex>
#include <atomic>
#include <stdexcept>
#include <cstdio>
#include "app/loose_extract.h"
#include "app/loose_setup.h"
#include "app/shadow_king_roster.h"
#include "engine/resources/xmlb.h"
#include "ui/pc_menu.h"
#include <vector>
#include <iterator>
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")
namespace fs=std::filesystem;
namespace {
struct SetupLock {
    HANDLE handle=INVALID_HANDLE_VALUE;
    ~SetupLock() {if(handle!=INVALID_HANDLE_VALUE)CloseHandle(handle);}
};
struct Setup {
    fs::path root,archive,stage;std::string language;
    std::atomic<bool> cancel{false},finished{false};
    std::mutex mutex;unsigned done=0,total=1;std::string current="Preparing files",error;
    bool success=false,extract=true;std::thread worker;
};
int progress(void *context,unsigned done,unsigned total,const char *name) {
    auto& s=*(Setup*)context;
    {std::lock_guard<std::mutex> lock(s.mutex);s.done=done;s.total=total?total:1;s.current=name;}
    return !s.cancel;
}
void cleanup_stage(Setup& s) {
    // Only remove the unique staging directory owned by this invocation.
    fs::path root=fs::absolute(s.root).lexically_normal();
    fs::path stage=fs::absolute(s.stage).lexically_normal();
    if(stage.parent_path()!=root || stage.filename().wstring().find(L".loose-setup-")!=0)
        throw std::runtime_error("Refusing cleanup outside the setup staging directory");
    DWORD attrs=GetFileAttributesW(stage.c_str());
    if(attrs==INVALID_FILE_ATTRIBUTES)return;
    if(attrs&FILE_ATTRIBUTE_REPARSE_POINT)throw std::runtime_error("Setup staging directory became a link");
    fs::remove_all(stage);
}
// Called with the setup lock held and a staging directory we own. Never
// patch the source .chr or the Xbox archive, and never expose a partial XMLB.
void publish_roster(const Setup& s,const xml1::BinaryXml& bytes) {
    if(bytes.empty())return;
    auto pending=s.stage/"shadow-king-roster.tmp";
    std::ofstream f(pending,std::ios::binary);
    f.write(reinterpret_cast<const char*>(bytes.data()),static_cast<std::streamsize>(bytes.size()));
    f.close();
    if(!f || !MoveFileExW(pending.c_str(),(s.root/xml1::shadow_king_roster).c_str(),
                         MOVEFILE_REPLACE_EXISTING|MOVEFILE_WRITE_THROUGH))
        throw std::runtime_error("Cannot update the Shadow King map character list");
    fprintf(stderr,"[LOOSE SETUP] Added required Professor X to the Shadow King map character list\n");
}
void run(Setup& s) {
    try {
        char error[1024]={0};
        if(s.extract) {
            if(!xml1_extract_loose(s.archive.c_str(),s.stage.c_str(),progress,&s,error,sizeof(error)))throw std::runtime_error(error);
        } else fs::create_directory(s.stage);
        // Publish only complete files. Existing files are user-owned and kept.
        // Reject reparse directories so installation cannot write outside root.
        for(auto& entry:fs::recursive_directory_iterator(s.stage)) {
            if(!entry.is_regular_file())continue;
            if(s.cancel)throw std::runtime_error("Setup cancelled. Completed files were preserved; restart to try again.");
            fs::path relative=fs::relative(entry.path(),s.stage),target=s.root/relative;
            fs::path parent=s.root;
            for(auto& component:relative.parent_path()) {
                parent/=component;
                DWORD attrs=GetFileAttributesW(parent.c_str());
                if(attrs!=INVALID_FILE_ATTRIBUTES && (attrs&FILE_ATTRIBUTE_REPARSE_POINT))throw std::runtime_error("Installation directory is a link: "+parent.u8string());
                fs::create_directory(parent);
            }
            if(fs::exists(target) && !fs::is_regular_file(target))
                throw std::runtime_error("A directory occupies an asset filename: "+relative.u8string());
            if(!fs::exists(target)) {
                if(!MoveFileExW(entry.path().c_str(),target.c_str(),MOVEFILE_WRITE_THROUGH))throw std::runtime_error("Cannot install "+relative.u8string());
            }
        }
        // Finish native menu authoring before compiling its effective contents.
        // Existing overlays win during extraction; compile those actual files.
        if(!xml1_install_pc_menu(s.root.u8string().c_str(),error,sizeof(error)))throw std::runtime_error(error);
        std::vector<fs::path> sources;
        for(auto it=fs::recursive_directory_iterator(s.root);it!=fs::recursive_directory_iterator();++it) {
            auto relative=fs::relative(it->path(),s.root);
            if(it->is_directory()) {
                auto name=it->path().filename().u8string();
                if((!name.empty()&&name[0]=='.')||name=="UDATA"||name=="TDATA"||name=="logs"||name=="captures")it.disable_recursion_pending();
                if(GetFileAttributesW(it->path().c_str())&FILE_ATTRIBUTE_REPARSE_POINT)it.disable_recursion_pending();
                continue;
            }
            if(it->is_regular_file()&&xml1::xml_text_extension(it->path().extension().u8string()))sources.push_back(relative);
        }
        unsigned done=0;
        for(const auto& relative:sources) {
            if(!progress(&s,done++,(unsigned)sources.size(),relative.u8string().c_str()))throw std::runtime_error("XMLB setup cancelled");
            fs::path source=s.root/relative,target=source;target+=L"b";
            if(GetFileAttributesW(source.c_str())&FILE_ATTRIBUTE_REPARSE_POINT)throw std::runtime_error("XML source is a link: "+relative.u8string());
            try {
                // An existing binary is a user's mod or a completed file from an
                // interrupted setup. Validate it without overwriting it.
                if(fs::exists(target)) {
                    if(!fs::is_regular_file(target)||(GetFileAttributesW(target.c_str())&FILE_ATTRIBUTE_REPARSE_POINT))throw std::runtime_error("Invalid XMLB target");
                    std::ifstream input(target,std::ios::binary);std::string bytes((std::istreambuf_iterator<char>(input)),{});
                    xml1::decode_xmlb(bytes.data(),(unsigned)bytes.size());continue;
                }
                std::ifstream input(source,std::ios::binary);if(!input)throw std::runtime_error("Cannot read XML");
                std::string text((std::istreambuf_iterator<char>(input)),{});
                auto binary=xml1::compile_xmlb(text);
                auto decoded=xml1::decode_xmlb(binary.data(),(unsigned)binary.size());
                if(xml1::compile_xmlb(decoded)!=binary)throw std::runtime_error("XMLB round-trip validation failed");
                auto pending=s.stage/"compiled"/relative;pending+=L"b";fs::create_directories(pending.parent_path());
                std::ofstream output(pending,std::ios::binary);output.write((const char*)binary.data(),binary.size());output.close();
                if(!output)throw std::runtime_error("Cannot write XMLB");
            } catch(const std::exception& e){throw std::runtime_error(relative.u8string()+": "+e.what());}
        }
        // Publish only after the complete conversion pass succeeds. Text files
        // and saves remain untouched; binary counterparts use conventional names.
        auto compiled=s.stage/"compiled";
        if(fs::exists(compiled))for(auto& entry:fs::recursive_directory_iterator(compiled)) {
            if(!entry.is_regular_file())continue;
            if(s.cancel)throw std::runtime_error("XMLB setup cancelled");
            auto target=s.root/fs::relative(entry.path(),compiled);
            if(!MoveFileExW(entry.path().c_str(),target.c_str(),MOVEFILE_WRITE_THROUGH))throw std::runtime_error("Cannot publish XMLB: "+target.u8string());
        }
        publish_roster(s,xml1::shadow_king_roster_fix(s.root,s.language));
        auto marker=[&](const char *name,const char *contents){
            if(s.cancel)throw std::runtime_error("Setup cancelled");
            auto pending=s.stage/name;std::ofstream file(pending,std::ios::binary);file<<contents;file.close();
            if(!file||!MoveFileExW(pending.c_str(),(s.root/name).c_str(),MOVEFILE_REPLACE_EXISTING|MOVEFILE_WRITE_THROUGH))throw std::runtime_error("Cannot publish setup completion marker");
        };
        marker(".xml1-loose-ready","OpenXML1 loose assets version 1\n");
        marker(".xml1-xmlb-ready","OpenXML1 XMLB assets version 1\n");
        fprintf(stderr,"[XMLB SETUP] Validated %u compiled data files; originals preserved\n",(unsigned)sources.size());
        s.success=true;
    } catch(const std::exception& e) {s.error=e.what();}
    try { cleanup_stage(s); }
    catch(const std::exception& e) { if(!s.success)s.error+="; "+std::string(e.what()); }
    s.finished=true;
}
HRESULT CALLBACK dialog(HWND window,UINT message,WPARAM w,LPARAM,LONG_PTR data) {
    auto& s=*(Setup*)data;
    if(message==TDN_CREATED) {
        SendMessageW(window,TDM_SET_PROGRESS_BAR_RANGE,0,MAKELPARAM(0,1000));
        s.worker=std::thread([&s]{run(s);});
    } else if(message==TDN_TIMER) {
        {std::lock_guard<std::mutex> lock(s.mutex);
            SendMessageW(window,TDM_SET_PROGRESS_BAR_POS,(WPARAM)(1000ull*s.done/s.total),0);
            std::wstring name(s.current.begin(),s.current.end());
            SendMessageW(window,TDM_SET_ELEMENT_TEXT,TDE_CONTENT,(LPARAM)name.c_str());
        }
        if(s.finished)SendMessageW(window,TDM_CLICK_BUTTON,IDCANCEL,0);
    } else if(message==TDN_BUTTON_CLICKED) {
        if(!s.finished) {s.cancel=true;return S_FALSE;}
    }
    return S_OK;
}
}
extern "C" int xml1_prepare_loose_assets(const char *game_root,const char *text_language,int headless,char *error,unsigned error_size) {
    Setup s;
    SetupLock setup_lock;
    try {
        s.root=fs::absolute(fs::u8path(game_root));
        s.language=text_language;
        fs::path marker=s.root/".xml1-loose-ready";
        if(fs::exists(marker)) {
            std::ifstream f(marker);std::string version;std::getline(f,version);
            if(version!="OpenXML1 loose assets version 1")throw std::runtime_error("Unrecognized loose setup marker");
            s.extract=false;
        }
        fs::path binary_marker=s.root/".xml1-xmlb-ready";
        auto binary_ready=[&](){
            if(!fs::exists(binary_marker))return false;
            std::ifstream f(binary_marker);std::string version;std::getline(f,version);
            if(version!="OpenXML1 XMLB assets version 1")throw std::runtime_error("Unrecognized XMLB setup marker");
            return true;
        };
        const bool already_ready=!s.extract && binary_ready();
        if(already_ready && xml1::shadow_king_roster_fix(s.root,s.language).empty())return 1;
        s.archive=s.root/"z/assetsfb.zip";
        if(s.extract&&!fs::is_regular_file(s.archive))throw std::runtime_error("First-run setup needs z/assetsfb.zip in the game directory.");
        setup_lock.handle=CreateFileW((s.root/".xml1-loose-setup.lock").c_str(),GENERIC_READ|GENERIC_WRITE,
            0,nullptr,OPEN_ALWAYS,FILE_ATTRIBUTE_TEMPORARY|FILE_FLAG_DELETE_ON_CLOSE,nullptr);
        if(setup_lock.handle==INVALID_HANDLE_VALUE) {
            // This optional repair must not lock a previously working install
            // out of every other level if its directory is busy or read-only.
            if(already_ready) {
                fprintf(stderr,"[LOOSE SETUP] Shadow King roster update deferred: directory is busy or read-only\n");
                return 1;
            }
            throw std::runtime_error("Cannot start setup. Close any other game setup using this directory and check that the directory is writable.");
        }
        s.stage=s.root/(".loose-setup-"+std::to_string(GetCurrentProcessId())+"-"+std::to_string(GetTickCount64()));
        // A second process may have completed setup between the first check and lock acquisition.
        if(fs::exists(marker)) {
            std::ifstream f(marker);std::string version;std::getline(f,version);
            if(version!="OpenXML1 loose assets version 1")throw std::runtime_error("Unrecognized loose setup marker");
            s.extract=false;
            if(binary_ready()) {
                // An existing installation may predate #36. Recheck under the
                // lock; no extraction, mass recompilation or marker reset.
                const auto fix=xml1::shadow_king_roster_fix(s.root,s.language);
                if(!fix.empty()) {
                    try {
                        if(!fs::create_directory(s.stage))throw std::runtime_error("Migration staging directory exists");
                        try {publish_roster(s,fix);} catch(...) {cleanup_stage(s);throw;}
                        cleanup_stage(s);
                    } catch(const std::exception& e) {
                        fprintf(stderr,"[LOOSE SETUP] Shadow King roster update deferred: %s\n",e.what());
                    }
                }
                return 1;
            }
        }
        if(headless)run(s);
        else {
            INITCOMMONCONTROLSEX controls{sizeof(controls),ICC_PROGRESS_CLASS};InitCommonControlsEx(&controls);
            TASKDIALOGCONFIG config{};config.cbSize=sizeof(config);config.hInstance=GetModuleHandleW(nullptr);
            config.dwFlags=TDF_SHOW_PROGRESS_BAR|TDF_CALLBACK_TIMER|TDF_ALLOW_DIALOG_CANCELLATION|TDF_SIZE_TO_CONTENT;
            config.dwCommonButtons=TDCBF_CANCEL_BUTTON;
            config.pszWindowTitle=L"X-Men Legends - First-run setup";
            config.pszMainInstruction=L"Preparing game files";
            config.pszContent=L"Preparing loose assets, packages and compiled XMLB data. This only needs to run once.";
            config.pszFooter=L"Existing files and saved games will be kept.";
            config.pfCallback=dialog;config.lpCallbackData=(LONG_PTR)&s;
            HRESULT hr=TaskDialogIndirect(&config,nullptr,nullptr,nullptr);
            if(FAILED(hr)) {s.cancel=true;if(s.worker.joinable())s.worker.join();throw std::runtime_error("Could not open the first-run setup dialog");}
            if(s.worker.joinable())s.worker.join();
        }
        if(!s.success)throw std::runtime_error(s.error.empty()?"Setup did not complete":s.error);
        return 1;
    } catch(const std::exception& e) {
        if(error_size)snprintf(error,error_size,"%s",e.what());
        if(!headless)MessageBoxA(nullptr,e.what(),"X-Men Legends setup",MB_OK|MB_ICONERROR);
        return 0;
    }
}
