#include "input/pc_input_channel.h"
#include <windows.h>
#include <cstdio>
#include <cstdlib>
#include <cstring>

namespace {
constexpr uint32_t version=15;
constexpr unsigned pointer_capacity=16;
struct Shared {
    uint32_t version, bytes;
    Xml1PcInputSnapshot snapshot;
    uint8_t pressed[256];
    uint32_t mouse_valid;
    uint32_t capture_active, capture_key;
    uint32_t pad_capture_player, pad_capture_armed, pad_capture_source;
    uint32_t native_pointer, pointer_head, pointer_count, pointer_buttons;
    Xml1PcMenuPointer pointer_events[pointer_capacity];
};
static_assert(sizeof(Xml1PcSettings)==1968);
static_assert(sizeof(Xml1PcControlState)==280);
static_assert(sizeof(Shared)==3128);
HANDLE mapping=nullptr, mutex=nullptr;
Shared *shared=nullptr;
struct Lock {
    bool locked=false;
    Lock() {
        if(mutex) {
            DWORD result=WaitForSingleObject(mutex,100);
            locked=result==WAIT_OBJECT_0 || result==WAIT_ABANDONED;
            // No partially updated state survives a crashed producer.
            if(result==WAIT_ABANDONED && shared) {
                xml1_pc_control_focus(&shared->snapshot.controls,0);
                std::memset(shared->pressed,0,sizeof(shared->pressed));
                shared->mouse_valid=0;
                shared->capture_key=0;
                shared->pad_capture_armed=shared->pad_capture_source=0;
                shared->pointer_count=shared->pointer_buttons=0;
            }
        }
    }
    ~Lock() {if(locked)ReleaseMutex(mutex);}
};
void clear_keys() {
    std::memset(shared->snapshot.controls.held,0,256);
    std::memset(shared->pressed,0,256);
    shared->snapshot.controls.wheel=0;
    shared->snapshot.controls.mouse_dx=shared->snapshot.controls.mouse_dy=0;
    shared->mouse_valid=0;
    shared->pointer_count=shared->pointer_buttons=0;
}
}
extern "C" void xml1_pc_channel_close() {
    if(shared)UnmapViewOfFile(shared);
    if(mapping)CloseHandle(mapping);
    if(mutex)CloseHandle(mutex);
    shared=nullptr;mapping=nullptr;mutex=nullptr;
}
extern "C" int xml1_pc_channel_set_display(const char *display) {
    if(!display || !*display || std::strlen(display)>=32)return 0;
    Lock lock;if(!lock.locked || !shared)return 0;
    std::strcpy(shared->snapshot.output_display,display);return 1;
}
extern "C" int xml1_pc_channel_shader_result(const char *selection,unsigned result) {
    if(!selection || std::strlen(selection)>=64 || result>2)return 0;
    Lock lock;if(!lock.locked || !shared)return 0;
    std::strcpy(shared->snapshot.shader_selection,selection);shared->snapshot.shader_result=result;return 1;
}
extern "C" int xml1_pc_channel_get_display(char *display,unsigned capacity) {
    if(!display || capacity<32)return 0;
    Lock lock;if(!lock.locked || !shared || !shared->snapshot.output_display[0])return 0;
    std::strcpy(display,shared->snapshot.output_display);return 1;
}
extern "C" int xml1_pc_channel_create(const Xml1PcSettings *settings) {
    if(shared || !xml1_pc_settings_validate(settings,nullptr,0))return 0;
    char name[128],lock_name[144];
    std::snprintf(name,sizeof(name),"Local\\OpenXML1-PC-%lu-%llu",GetCurrentProcessId(),GetTickCount64());
    std::snprintf(lock_name,sizeof(lock_name),"%s-lock",name);
    mutex=CreateMutexA(nullptr,FALSE,lock_name);
    if(!mutex || GetLastError()==ERROR_ALREADY_EXISTS) {xml1_pc_channel_close();return 0;}
    mapping=CreateFileMappingA(INVALID_HANDLE_VALUE,nullptr,PAGE_READWRITE,0,sizeof(Shared),name);
    if(!mapping || GetLastError()==ERROR_ALREADY_EXISTS) {xml1_pc_channel_close();return 0;}
    shared=(Shared*)MapViewOfFile(mapping,FILE_MAP_ALL_ACCESS,0,0,sizeof(Shared));
    if(!shared) {xml1_pc_channel_close();return 0;}
    {
        Lock lock;
        if(!lock.locked) {xml1_pc_channel_close();return 0;}
        *shared={};shared->version=version;shared->bytes=sizeof(Shared);
        shared->snapshot.settings=*settings;
        shared->snapshot.fsaa_modes=1; // Off until the renderer reports support.
    }
    if(_putenv_s("XML1_PC_INPUT_CHANNEL",name)) {xml1_pc_channel_close();return 0;}
    return 1;
}
extern "C" int xml1_pc_channel_connect() {
    if(shared)return 1;
    const char *name=std::getenv("XML1_PC_INPUT_CHANNEL");
    if(!name || !*name || std::strlen(name)>127)return 0;
    char lock_name[144];std::snprintf(lock_name,sizeof(lock_name),"%s-lock",name);
    mutex=OpenMutexA(SYNCHRONIZE|MUTEX_MODIFY_STATE,FALSE,lock_name);
    mapping=OpenFileMappingA(FILE_MAP_ALL_ACCESS,FALSE,name);
    if(mapping)shared=(Shared*)MapViewOfFile(mapping,FILE_MAP_ALL_ACCESS,0,0,sizeof(Shared));
    bool valid=false;
    if(mutex && shared) {
        Lock lock;valid=lock.locked && shared->version==version && shared->bytes==sizeof(Shared);
    }
    if(!valid)xml1_pc_channel_close();
    return valid;
}
extern "C" int xml1_pc_channel_read(Xml1PcInputSnapshot *out,int peek) {
    Lock lock;if(!lock.locked || !shared)return 0;
    *out=shared->snapshot;
    if(!peek) {
        for(unsigned key=0;key<256;++key) {
            out->controls.held[key]|=shared->pressed[key];
            shared->pressed[key]=0;
        }
        shared->snapshot.controls.wheel=0;
        shared->snapshot.controls.mouse_dx=shared->snapshot.controls.mouse_dy=0;
    }
    return 1;
}
extern "C" void xml1_pc_channel_focus(int focused) {
    Lock lock;if(!lock.locked || !shared)return;
    clear_keys();xml1_pc_control_focus(&shared->snapshot.controls,focused);
    // Retain cancellation even if focus is lost and regained between frames.
    if(shared->native_pointer && !shared->capture_active) {
        shared->pointer_head=0;shared->pointer_count=1;shared->pointer_events[0]={};
    }
    shared->capture_key=0;
    shared->pad_capture_armed=shared->pad_capture_source=0;
    ++shared->snapshot.sequence;
}
extern "C" void xml1_pc_channel_key(unsigned key,int down) {
    Lock lock;if(!lock.locked || !shared || key>=256 || !shared->snapshot.controls.focused)return;
    if(shared->capture_active && down && !shared->snapshot.controls.held[key] && !shared->capture_key)
        shared->capture_key=key;
    if(down && !shared->snapshot.controls.held[key])shared->pressed[key]=1;
    if(down && !shared->snapshot.controls.held[key] && (key==shared->snapshot.settings.keys[shared->snapshot.settings.keyboard_player][XML1_PC_CAMERA_DRAG] ||
       key==shared->snapshot.settings.alternate_keys[shared->snapshot.settings.keyboard_player][XML1_PC_CAMERA_DRAG]))
        shared->snapshot.controls.mouse_dx=shared->snapshot.controls.mouse_dy=0;
    xml1_pc_control_key(&shared->snapshot.controls,key,down);
    shared->snapshot.last_device=1;++shared->snapshot.sequence;
}
extern "C" void xml1_pc_channel_mouse(int x,int y,int wheel) {
    Lock lock;if(!lock.locked || !shared || !shared->snapshot.controls.focused)return;
    auto &s=shared->snapshot;
    if(shared->mouse_valid) {
        int64_t dx=(int64_t)s.controls.mouse_dx+x-s.controls.mouse_x;
        int64_t dy=(int64_t)s.controls.mouse_dy+y-s.controls.mouse_y;
        s.controls.mouse_dx=(int32_t)(dx>4000?4000:dx<-4000?-4000:dx);
        s.controls.mouse_dy=(int32_t)(dy>4000?4000:dy<-4000?-4000:dy);
    }
    shared->mouse_valid=1;
    s.controls.mouse_x=x;s.controls.mouse_y=y;
    // Bound accumulated wheel input even if the consumer stops polling.
    int64_t value=(int64_t)s.controls.wheel+wheel;
    s.controls.wheel=(int32_t)(value>12000?12000:value<-12000?-12000:value);
    s.last_device=1;++s.sequence;
}
extern "C" void xml1_pc_channel_controller_active() {
    Lock lock;if(lock.locked && shared && shared->snapshot.controls.focused && shared->snapshot.last_device) {
        shared->snapshot.last_device=0;++shared->snapshot.sequence;
    }
}
extern "C" void xml1_pc_channel_request_menu() {
    Lock lock;if(!lock.locked || !shared)return;
    ++shared->snapshot.menu_requested;clear_keys();
}
extern "C" int xml1_pc_channel_set_menu(int active) {
    Lock lock;if(!lock.locked || !shared)return 0;
    shared->snapshot.menu_active=active!=0;clear_keys();return 1;
}
extern "C" int xml1_pc_channel_set_settings(const Xml1PcSettings *settings) {
    if(!xml1_pc_settings_validate(settings,nullptr,0))return 0;
    Lock lock;if(!lock.locked || !shared)return 0;
    const auto &old=shared->snapshot.settings;
    if(old.keyboard_enabled!=settings->keyboard_enabled || old.keyboard_player!=settings->keyboard_player ||
       old.separate_controllers!=settings->separate_controllers)shared->snapshot.connected_players=0;
    shared->snapshot.settings=*settings;clear_keys();++shared->snapshot.sequence;return 1;
}
extern "C" int xml1_pc_channel_set_fsaa_modes(uint32_t modes) {
    constexpr uint32_t allowed=1u|(1u<<2)|(1u<<4)|(1u<<8);
    if(!(modes&1) || (modes&~allowed))return 0;
    Lock lock;if(!lock.locked || !shared)return 0;
    shared->snapshot.fsaa_modes=modes;++shared->snapshot.sequence;return 1;
}
extern "C" int xml1_pc_channel_capture(int active) {
    Lock lock;if(!lock.locked || !shared)return 0;
    shared->capture_active=active!=0;shared->capture_key=0;
    shared->pad_capture_player=shared->pad_capture_armed=shared->pad_capture_source=0;
    shared->snapshot.menu_active=active!=0;
    shared->pointer_count=shared->pointer_buttons=0;
    if(active)std::memset(shared->pressed,0,sizeof(shared->pressed));
    else clear_keys();
    return 1;
}
extern "C" unsigned xml1_pc_channel_capture_key() {
    Lock lock;if(!lock.locked || !shared || !shared->capture_active)return 0;
    unsigned key=shared->capture_key;shared->capture_key=0;return key;
}
extern "C" int xml1_pc_channel_capture_controller(unsigned player) {
    if(player>=4)return 0;
    Lock lock;if(!lock.locked || !shared)return 0;
    clear_keys();shared->capture_active=shared->snapshot.menu_active=1;
    shared->capture_key=0;shared->pad_capture_player=player+1;
    shared->pad_capture_armed=shared->pad_capture_source=0;
    return 1;
}
extern "C" unsigned xml1_pc_channel_capture_source() {
    Lock lock;if(!lock.locked || !shared || !shared->capture_active || !shared->pad_capture_player)return 0;
    unsigned source=shared->pad_capture_source;shared->pad_capture_source=0;return source;
}
extern "C" void xml1_pc_channel_controller_connection(unsigned player,int connected) {
    if(player>=4)return;
    Lock lock;if(!lock.locked || !shared)return;
    uint32_t mask=1u<<player;
    uint32_t before=shared->snapshot.connected_players;
    if(connected)shared->snapshot.connected_players|=mask;
    else {
        shared->snapshot.connected_players&=~mask;
        if(shared->pad_capture_player==player+1)shared->pad_capture_armed=shared->pad_capture_source=0;
    }
    if(before!=shared->snapshot.connected_players)++shared->snapshot.sequence;
}
extern "C" void xml1_pc_channel_controller_state(unsigned player,int connected,uint32_t active,uint32_t held) {
    if(player>=4)return;
    Lock lock;if(!lock.locked || !shared || !shared->capture_active || shared->pad_capture_player!=player+1)return;
    if(!connected || !shared->snapshot.controls.focused) {
        shared->pad_capture_armed=shared->pad_capture_source=0;return;
    }
    constexpr uint32_t valid=((1u<<XML1_PAD_SOURCE_COUNT)-1)&~1u;
    if((active|held)&~valid || (active&~held))return;
    if(!held)shared->pad_capture_armed=1;
    if(shared->pad_capture_armed && active && !shared->pad_capture_source) {
        for(unsigned source=1;source<XML1_PAD_SOURCE_COUNT;++source)if(active&(1u<<source)) {
            shared->pad_capture_source=source;shared->pad_capture_armed=0;break;
        }
    }
}
extern "C" int xml1_pc_channel_native_pointer(int active) {
    Lock lock;if(!lock.locked || !shared)return 0;
    shared->native_pointer=active!=0;
    shared->snapshot.native_menu=active!=0;
    clear_keys();
    return 1;
}
extern "C" void xml1_pc_channel_menu_back(int active) {
    Lock lock;if(!lock.locked || !shared)return;
    shared->snapshot.native_menu=(shared->snapshot.native_menu&1u)|(active?2u:0u);
}
extern "C" int xml1_pc_channel_pointer_event(int x,int y,unsigned button,int down,
                                             int wheel,unsigned width,unsigned height) {
    Lock lock;if(!lock.locked || !shared || !shared->native_pointer || shared->capture_active)return 0;
    // Consume unfocused events so they cannot become gameplay actions.
    if(!shared->snapshot.controls.focused)return 1;
    unsigned mask=button==VK_LBUTTON?1:button==VK_RBUTTON?2:button==VK_MBUTTON?4:0;
    bool outside=!width || !height || x<0 || y<0 || (unsigned)x>=width || (unsigned)y>=height;
    if(outside && down && mask && !(shared->pointer_buttons&mask))return 1;
    bool click=mask && down && !(shared->pointer_buttons&mask);
    if(mask) {
        if(down)shared->pointer_buttons|=mask;
        else shared->pointer_buttons&=~mask;
    }
    // An in-progress drag must receive its final move/release outside the
    // client rectangle too. New presses outside still cannot activate a menu.
    Xml1PcMenuPointer event{x,y,wheel,click?button:0,width,height,shared->pointer_buttons};
    shared->snapshot.last_device=1;
    // Coalesce only consecutive motion events. Never overwrite a queued click
    // with a later move or release before the game thread gets to consume it.
    if(!event.button && !event.wheel && shared->pointer_count) {
        auto &last=shared->pointer_events[(shared->pointer_head+shared->pointer_count-1)%pointer_capacity];
        if(!last.button && !last.wheel && last.buttons==event.buttons) {last=event;return 1;}
    }
    if(shared->pointer_count==pointer_capacity) {
        // Saturation cancels the gesture rather than losing a release and
        // allowing stale held state to leak into a later frame.
        shared->pointer_head=shared->pointer_count=shared->pointer_buttons=0;
        event.button=event.buttons=0;event.wheel=0;event.width=event.height=0;
    }
    shared->pointer_events[(shared->pointer_head+shared->pointer_count++)%pointer_capacity]=event;
    return 1;
}
extern "C" void xml1_pc_channel_pointer_cancel(void) {
    Lock lock;if(!lock.locked || !shared)return;
    shared->pointer_head=shared->pointer_buttons=0;
    shared->pointer_count=shared->native_pointer?1:0;
    shared->pointer_events[0]={};
}
extern "C" int xml1_pc_channel_pointer_read(Xml1PcMenuPointer *event) {
    Lock lock;if(!lock.locked || !shared || !event || !shared->native_pointer ||
                 shared->capture_active || !shared->pointer_count)return 0;
    *event=shared->pointer_events[shared->pointer_head];
    shared->pointer_head=(shared->pointer_head+1)%pointer_capacity;
    --shared->pointer_count;
    return 1;
}

