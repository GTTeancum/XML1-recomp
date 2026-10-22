#include "ui/pc_options_model.h"
#include "input/pc_input_channel.h"
#include "input/pc_gamepad.h"
#include <windows.h>
#include <cstdio>
#include <cstring>
#include <unordered_map>
#include <string>
#include <cstdlib>
#include <map>
#include <vector>
#include <cmath>

namespace {
Xml1PcOptionsModel native_model{};
unsigned native_owner=0;
unsigned shake_owner=0;
bool shake_dirty=false;
unsigned shake_draft=1;
unsigned shake_value() {
    if(shake_dirty)return shake_draft;
    Xml1PcInputSnapshot current{};
    return xml1_pc_channel_read(&current,1)?current.settings.view_shake:1;
}
unsigned pointer_owner=0;
unsigned pending_click=0;
unsigned pending_hover=0;
unsigned dragging_slider=0;
bool advanced_space_held=true;
struct NativeItem {
    std::string command;
    std::string gamevar;
    bool adjustable=false;
    int adjustment=0;
    unsigned owner=0;
    unsigned flags=4;
    std::string key, shown, original_prompt; bool initialized=false;
    unsigned text_handle=0;
    int profile_indicator=-1;
    int x=0,top=0,width=0,height=0;
    bool projection_logged=false;
    bool screen_valid=false;
    float left=0,screen_top=0,right=0,bottom=0;
    unsigned screen_frame=~0u;
    float slider_left=0,slider_top=0,slider_right=0,slider_bottom=0;
    unsigned slider_frame=~0u;
    float slider_value=0;
    bool slider_pending=false;
};
std::unordered_map<unsigned, NativeItem> native_items;
std::map<unsigned,unsigned> vertex_items;
constexpr unsigned visible_rows=7;
const char *action_labels[]={
    "Move forward","Move backward","Move left","Move right","Attack / Power 1",
    "Smash / Power 2","Jump / Xtreme","Use / Boost","Use powers","Health pack",
    "Energy pack","Call allies","Select hero: up","Select hero: down","Select hero: left",
    "Select hero: right","Map","Pause","Team stats","Camera up","Camera down",
    "Camera left","Camera right","Walk","Quick power 1","Quick power 2","Quick power 3",
    "Quick power 4","Rotate camera (hold)"
};
static_assert(sizeof(action_labels)/sizeof(*action_labels)==XML1_PC_ACTION_COUNT);
bool binding_index(const char *text,unsigned &action,unsigned &slot) {
    int end=0;
    return std::sscanf(text,"%u_%u%n",&action,&slot,&end)==2 && text[end]==0 &&
        action<XML1_PC_ACTION_COUNT && slot<2;
}
std::string key_name(unsigned key) {
    if(!key)return "Unbound";
    if(key==VK_LBUTTON)return "Left mouse";
    if(key==VK_RBUTTON)return "Right mouse";
    if(key==VK_MBUTTON)return "Middle mouse";
    if(key>=VK_NUMPAD0 && key<=VK_NUMPAD9)return "Num "+std::to_string(key-VK_NUMPAD0);
    char name[80]={};UINT scan=MapVirtualKeyA(key,MAPVK_VK_TO_VSC);
    if(key==VK_LEFT || key==VK_RIGHT || key==VK_UP || key==VK_DOWN || key==VK_DELETE)scan|=0x100;
    if(GetKeyNameTextA((LONG)(scan<<16),name,sizeof(name)))return name;
    return "Key "+std::to_string(key);
}
void capture_update() {
    if(native_model.binding_action<0)return;
    if(native_model.controller_bindings) {
        unsigned key=xml1_pc_channel_capture_key();
        unsigned source=xml1_pc_channel_capture_source();
        if(key==VK_ESCAPE) {
            native_model.binding_action=-1;native_model.status[0]=0;
        } else if(key==VK_DELETE || source) {
            if(!xml1_pc_options_bind_controller(&native_model,native_model.binding_action,
                key==VK_DELETE?0:source,native_model.binding_alternate))return;
        } else {
            Xml1PcInputSnapshot current{};
            constexpr const char *unavailable="No controller. Delete / Esc available.";
            if(!xml1_pc_channel_read(&current,1) ||
               !(current.connected_players&(1u<<native_model.selected_player)))
                std::snprintf(native_model.status,sizeof(native_model.status),"%s",unavailable);
            else if(!std::strcmp(native_model.status,unavailable))
                std::snprintf(native_model.status,sizeof(native_model.status),"Release controls, then press or move.");
            return;
        }
        xml1_pc_channel_capture(0);
        std::fprintf(stderr,"[PC NATIVE] controller capture ended key=%u source=%u\n",key,source);
        return;
    }
    unsigned key=xml1_pc_channel_capture_key();if(!key)return;
    if(key==VK_ESCAPE) {
        native_model.binding_action=-1;native_model.status[0]=0;
    } else if(!xml1_pc_options_bind_slot(&native_model,native_model.binding_action,
        key==VK_DELETE?0:key,native_model.binding_alternate))return;
    xml1_pc_channel_capture(0);
    std::fprintf(stderr,"[PC NATIVE] binding capture ended key=%u\n",key);
}
std::string value(const std::string &key) {
    const auto &s=native_model.draft;
    unsigned action=0,slot=0;
    if(key.compare(0,8,"rowname_")==0 && binding_index(key.c_str()+8,action,slot) && action<visible_rows)
        return action_labels[native_model.page+action];
    if(key.compare(0,7,"rowkey_")==0 && binding_index(key.c_str()+7,action,slot) && action<visible_rows)
        return value("key_"+std::to_string(native_model.page+action)+"_"+std::to_string(slot));
    if(key=="scroll")return std::to_string(native_model.page+1)+" - "+
        std::to_string(native_model.page+visible_rows)+" of "+std::to_string(XML1_PC_ACTION_COUNT);
    if(key.compare(0,4,"key_")==0 && binding_index(key.c_str()+4,action,slot)) {
        if(native_model.binding_action==(int)action && native_model.binding_alternate==slot)
            return native_model.controller_bindings?"Move / press...":"Press key...";
        if(native_model.controller_bindings)return action==XML1_PC_CAMERA_DRAG?"Mouse only":
            xml1_pc_controller_source_name(slot?s.alternate_pad_bindings[native_model.selected_player][action]:s.pad_bindings[native_model.selected_player][action]);
        return key_name(slot?s.alternate_keys[native_model.selected_player][action]:s.keys[native_model.selected_player][action]);
    }
    if(key=="resolution")return "Resolution: "+std::to_string(s.width)+"x"+std::to_string(s.height);
    if(key=="resolution_value")return std::to_string(s.width)+"x"+std::to_string(s.height);
    if(key=="window")return std::string("Window: ")+(s.fullscreen?"Fullscreen":"Windowed");
    if(key=="fsaa")return "FSAA: "+(s.fsaa?std::to_string(s.fsaa)+"x":std::string("Off"));
    if(key=="fsaa_value")return s.fsaa?std::to_string(s.fsaa)+"x":std::string("Off");
    if(key=="keyboard")return std::string("Keyboard / mouse: ")+(s.keyboard_enabled?"On":"Off");
    if(key.size()==9 && key.compare(0,8,"profile_")==0 && key[8]>='1' && key[8]<='4') {
        std::string label="Player "+key.substr(8);
        return native_model.selected_player==(unsigned)(key[8]-'1')?"["+label+"]":label;
    }
    if(key=="profile")return "Player "+std::to_string(native_model.selected_player+1);
    if(key=="player")return "Keyboard player: "+std::to_string(s.keyboard_player+1);
    if(key=="sensitivity")return "Mouse sensitivity: "+std::to_string(s.mouse_sensitivity)+"%";
    if(key=="invert")return std::string("Invert camera: ")+(s.invert_camera_y?"On":"Off");
    if(key=="sharing")return std::string("Controllers: ")+(s.separate_controllers?"Separate":"Shared");
    if(key=="status")return native_model.status;
    if(key.size()==8 && key.compare(0,7,"device_")==0 && key[7]>='1' && key[7]<='4') {
        const unsigned player=(unsigned)(key[7]-'1');
        const std::string prefix="P"+std::to_string(player+1)+": ";
        Xml1PcInputSnapshot current{};
        if(!xml1_pc_channel_read(&current,1))return prefix+"Unavailable";
        // Report the active routing, not un-applied assignment changes.
        int slot=xml1_pc_controller_slot(&current.settings,player);
        if(slot<0)return prefix+"Keyboard / mouse";
        return prefix+"Controller "+std::to_string(slot+1)+
            ((current.connected_players&(1u<<player))?" - connected":" - disconnected");
    }
    if(key=="binding_device") {
        if(!native_model.controller_bindings)return "Keyboard / mouse bindings";
        Xml1PcInputSnapshot current{};
        if(!xml1_pc_channel_read(&current,1))return "Controller unavailable";
        int slot=xml1_pc_controller_slot(&current.settings,native_model.selected_player);
        if(slot<0)return "Keyboard-only player";
        return "Controller "+std::to_string(slot+1)+
            ((current.connected_players&(1u<<native_model.selected_player))?": connected":": disconnected");
    }
    return {};
}
}

extern "C" int xml1_pc_filter_camera_shake(float *xyz) {
    if(!xyz)return 0;
    Xml1PcInputSnapshot current{};
    if(!xml1_pc_channel_read(&current,1) || current.settings.view_shake)return 0;
    static unsigned reports=0;
    if(reports<16 && (xyz[0]!=0 || xyz[1]!=0 || xyz[2]!=0) && std::getenv("XML1_PC_SHAKE_TRACE")) {
        ++reports;
        std::fprintf(stderr,"[PC SHAKE] filtered xyz=%.9g,%.9g,%.9g\n",xyz[0],xyz[1],xyz[2]);
    }
    xyz[0]=xyz[1]=xyz[2]=0;
    return 1;
}

// Called for each token by the existing native command dispatcher. Returning
// true consumes only this PC action; native semicolon-separated commands continue.
extern "C" int xml1_pc_native_token(const char *token) {
    if(!token || std::strncmp(token,"pcnative_",9))return 0;
    const char *action=token+9;
    // This row belongs to normal Options, whose Accept/Back transaction is
    // independent of the Advanced menu's Apply/Cancel session.
    if(!std::strcmp(action,"shake") || !std::strcmp(action,"shake_accept")) {
        if(!shake_owner)return 1;
        if(!std::strcmp(action,"shake")) {
            shake_draft=!shake_value();shake_dirty=true;
        } else if(shake_dirty) {
            Xml1PcSettings settings{};char error[160]={};
            if(!xml1_pc_settings_load("pc-settings.ini",&settings,error,sizeof(error))) {
                std::fprintf(stderr,"[PC NATIVE] View Shake load failed: %s\n",error);return 1;
            }
            settings.view_shake=shake_draft;
            if(!xml1_pc_settings_save("pc-settings.ini",&settings,error,sizeof(error))) {
                std::fprintf(stderr,"[PC NATIVE] View Shake save failed: %s\n",error);return 1;
            }
            Xml1PcInputSnapshot current{};
            if(xml1_pc_channel_read(&current,1)) {
                current.settings.view_shake=shake_draft;
                xml1_pc_channel_set_settings(&current.settings);
            }
            shake_dirty=false;
        }
        std::fprintf(stderr,"[PC NATIVE] action=%s view_shake=%u dirty=%u\n",action,shake_value(),shake_dirty);
        return 1;
    }
    if(!std::strcmp(action,"open")) {
        xml1_pc_channel_capture(0);
        Xml1PcSettings settings;char error[160]={};
        xml1_pc_settings_defaults(&settings);
        if(!xml1_pc_settings_load("pc-settings.ini",&settings,error,sizeof(error))) {
            std::fprintf(stderr,"[PC NATIVE] Cannot load settings: %s\n",error);return 1;
        }
        xml1_pc_options_open(&native_model,&settings);native_owner=0;pending_click=pending_hover=0;vertex_items.clear();
        Xml1PcInputSnapshot current{};
        if(xml1_pc_channel_read(&current,1))native_model.running=current.settings;
    } else if(!native_model.active) {
        std::fprintf(stderr,"[PC NATIVE] Ignored action outside settings session: %s\n",action);return 1;
    } else if(!std::strcmp(action,"bindings_controller") || !std::strcmp(action,"bindings_keyboard") || !std::strcmp(action,"binding_device")) {
        xml1_pc_channel_capture(0);native_model.binding_action=-1;native_model.status[0]=0;
        native_model.controller_bindings=!std::strcmp(action,"binding_device")?!native_model.controller_bindings:
            !std::strcmp(action,"bindings_controller");
    } else if(!std::strncmp(action,"device_",7) && std::strlen(action)==8 && action[7]>='1' && action[7]<='4') {
        xml1_pc_channel_capture(0);
        const unsigned player=(unsigned)(action[7]-'1');
        xml1_pc_options_select_player(&native_model,player);
        Xml1PcInputSnapshot current{};
        native_model.controller_bindings=!(xml1_pc_channel_read(&current,1) &&
            xml1_pc_controller_slot(&current.settings,player)<0);
    } else if(!std::strncmp(action,"profile_",8) && std::strlen(action)==9 && action[8]>='1' && action[8]<='4') {
        xml1_pc_channel_capture(0);
        xml1_pc_options_select_player(&native_model,(unsigned)(action[8]-'1'));
    } else if(!std::strncmp(action,"preset_",7) && std::strlen(action)==8 && action[7]>='1' && action[7]<='3') {
        xml1_pc_channel_capture(0);
        xml1_pc_options_preset(&native_model,(unsigned)(action[7]-'0'));
    } else if(!std::strcmp(action,"cancel")) {
        xml1_pc_channel_capture(0);
        xml1_pc_channel_native_pointer(0);pending_click=pending_hover=0;
        xml1_pc_options_cancel(&native_model);
    } else if(!std::strcmp(action,"defaults")) {
        xml1_pc_channel_capture(0);
        xml1_pc_options_defaults(&native_model);
    } else if(!std::strcmp(action,"scroll_next") || !std::strcmp(action,"scroll_prev")) {
        if(native_model.binding_action>=0)return 1;
        if(!std::strcmp(action,"scroll_next"))
            native_model.page=native_model.page+visible_rows>XML1_PC_ACTION_COUNT-visible_rows?
                XML1_PC_ACTION_COUNT-visible_rows:native_model.page+visible_rows;
        else native_model.page=native_model.page<visible_rows?0:native_model.page-visible_rows;
    } else if(!std::strncmp(action,"rowbind_",8)) {
        unsigned row=0,slot=0;
        if(binding_index(action+8,row,slot) && row<visible_rows) {
            auto command="pcnative_bind_"+std::to_string(native_model.page+row)+"_"+std::to_string(slot);
            return xml1_pc_native_token(command.c_str());
        }
    } else if(!std::strncmp(action,"bind_",5)) {
        unsigned index=0,slot=0;
        if(native_model.controller_bindings && binding_index(action+5,index,slot) && index==XML1_PC_CAMERA_DRAG) {
            std::snprintf(native_model.status,sizeof(native_model.status),"Rotate camera hold applies only to mouse input.");return 1;
        }
        if(binding_index(action+5,index,slot) && (native_model.controller_bindings?
            xml1_pc_channel_capture_controller(native_model.selected_player):xml1_pc_channel_capture(1))) {
            native_model.binding_action=index;native_model.binding_alternate=slot;
            std::snprintf(native_model.status,sizeof(native_model.status),native_model.controller_bindings?
                "Release controls, then press or move.":
                "Press a key. Delete unbinds; Esc cancels.");
        }
    } else if(!std::strcmp(action,"apply")) {
        if(xml1_pc_options_apply(&native_model,"pc-settings.ini")) {
            Xml1PcInputSnapshot current{};
            if(xml1_pc_channel_read(&current,1)) {
                auto live=native_model.applied;
                live.width=current.settings.width;live.height=current.settings.height;
                live.fullscreen=current.settings.fullscreen;live.fsaa=current.settings.fsaa;
                live.keyboard_enabled=current.settings.keyboard_enabled;
                live.keyboard_player=current.settings.keyboard_player;
                live.separate_controllers=current.settings.separate_controllers;
                xml1_pc_channel_set_settings(&live);
            }
        }
    } else {
        auto &s=native_model.draft;native_model.status[0]=0;
        if(!std::strcmp(action,"resolution")) {
            xml1_pc_resolution_next(&s);
        } else if(!std::strcmp(action,"window"))s.fullscreen=!s.fullscreen;
        else if(!std::strcmp(action,"fsaa")) {
            Xml1PcInputSnapshot current{};
            if(xml1_pc_channel_read(&current,1)) {
                for(unsigned step=1;step<=9;++step) {
                    unsigned next=(s.fsaa+step)%9;
                    if(current.fsaa_modes&(1u<<next)){s.fsaa=next;break;}
                }
            }
        }
        else if(!std::strcmp(action,"keyboard"))s.keyboard_enabled=!s.keyboard_enabled;
        else if(!std::strcmp(action,"player"))s.keyboard_player=(s.keyboard_player+1)%4;
        else if(!std::strcmp(action,"sensitivity"))s.mouse_sensitivity=s.mouse_sensitivity>=300?25:s.mouse_sensitivity+25;
        else if(!std::strcmp(action,"invert"))s.invert_camera_y=!s.invert_camera_y;
        else if(!std::strcmp(action,"sharing"))s.separate_controllers=!s.separate_controllers;
        else {std::fprintf(stderr,"[PC NATIVE] Unknown action: %s\n",action);return 1;}
    }
    std::fprintf(stderr,"[PC NATIVE] action=%s resolution=%ux%u active=%u status=%s\n",action,
        native_model.draft.width,native_model.draft.height,native_model.active,native_model.status);
    return 1;
}

// The ordinary CMenuItem initializer resets registrations on every reuse.
extern "C" void xml1_pc_native_item(unsigned item,const char *gamevar) {
    if(gamevar && !std::strncmp(gamevar,"pcnative_",9)) {
        native_items[item].key=gamevar+9;
        return;
    }
    if(gamevar) {
        if(*gamevar)native_items[item].gamevar=gamevar;
        return;
    }
    native_items.erase(item);
    if(dragging_slider==item)dragging_slider=0;
    if(pending_click==item)pending_click=0;
    if(pending_hover==item)pending_hover=0;
    for(auto it=vertex_items.begin();it!=vertex_items.end();) {
        if(it->second==item)it=vertex_items.erase(it);else ++it;
    }
}
extern "C" void xml1_pc_native_command(unsigned item,const char *command) {
    if(command && *command)native_items[item].command=command;
}
extern "C" int xml1_pc_native_prompt_pending(unsigned item) {
    auto it=native_items.find(item);
    return it!=native_items.end() && (it->second.key=="prompt_back" ||
        it->second.key=="prompt_change" || it->second.key=="prompt_options_back" ||
        it->second.key=="prompt_options_advanced") && it->second.original_prompt.empty();
}
extern "C" void xml1_pc_native_prompt_original(unsigned item,const char *text) {
    if(text && *text && xml1_pc_native_prompt_pending(item))
        native_items[item].original_prompt=text;
}
// Native focus/gamevar refreshes may replace the interned text without changing
// our desired value. Track the actual string handle so that cache stays coherent.
extern "C" void xml1_pc_native_text_handle(unsigned item,unsigned handle) {
    auto it=native_items.find(item);
    if(it==native_items.end() || it->second.key.empty())return;
    if(it->second.text_handle!=handle)it->second.initialized=false;
    it->second.text_handle=handle;
}
// The native focus-model anchor also represents the selected profile. Keep
// that model populated after focus moves into the table; all other items
// retain the game's ordinary focus behavior.
extern "C" int xml1_pc_native_profile_indicator(unsigned item,unsigned focused) {
    auto it=native_items.find(item);
    if(!native_model.active || it==native_items.end())return -1;
    auto &entry=it->second;
    if(entry.key.size()!=9 || entry.key.compare(0,8,"profile_") ||
       entry.key[8]<'1' || entry.key[8]>'4')return -1;
    int shown=focused || native_model.selected_player==(unsigned)(entry.key[8]-'1');
    if(entry.profile_indicator==shown)return -1;
    entry.profile_indicator=shown;
    return shown;
}
extern "C" int xml1_pc_native_value(unsigned item,char *buffer,unsigned size) {
    capture_update();
    auto it=native_items.find(item);
    if(it==native_items.end() || it->second.key.empty() || !size)return 0;
    // Normal Options owns its native settings transaction independently of Advanced.
    const bool options_back=it->second.key=="prompt_options_back";
    const bool options_advanced=it->second.key=="prompt_options_advanced";
    const bool options_shake=it->second.key=="view_shake";
    if(!native_model.active && !options_back && !options_advanced && !options_shake)return 0;
    std::string next;
    if(options_shake)next=shake_value()?"On":"Off";
    else if(it->second.key=="prompt_back" || it->second.key=="prompt_change" || options_back || options_advanced) {
        if(it->second.original_prompt.empty())return 0;
        Xml1PcInputSnapshot input{};
        bool keyboard=xml1_pc_channel_read(&input,1) && input.last_device;
        if(!keyboard)next=it->second.original_prompt;
        else if(options_back)next="[Backspace] Back";
        else if(options_advanced)next="[Space] Advanced Options";
        else if(it->second.key=="prompt_back")next=native_model.binding_action>=0?
            "[Esc] Cancel binding":"[Backspace] Back";
        else next=native_model.binding_action>=0?"[Delete] Unbind":"[Enter] Change";
    } else next=value(it->second.key);
    if((it->second.initialized && next==it->second.shown) || next.size()>=size)return 0;
    std::memcpy(buffer,next.c_str(),next.size()+1);it->second.shown=next;it->second.initialized=true;
    return 1;
}
extern "C" void xml1_pc_native_owner(unsigned item,unsigned owner) {
    auto found=native_items.find(item);
    if(found!=native_items.end())found->second.owner=owner;
    if(found!=native_items.end() && found->second.key=="view_shake" && owner) {
        if(shake_owner!=owner) {shake_owner=owner;shake_dirty=false;}
        return;
    }
    if(native_model.active && owner && !native_owner && found!=native_items.end() && !found->second.key.empty() &&
       found->second.key!="prompt_options_back" && found->second.key!="prompt_options_advanced") {
        native_owner=owner;
    }
}
extern "C" void xml1_pc_native_menu(unsigned owner) {
    if(owner==pointer_owner)return;
    pointer_owner=owner;pending_click=pending_hover=dragging_slider=0;vertex_items.clear();
    advanced_space_held=true; // A key held across a menu transition must be released first.
    for(auto &entry:native_items) {entry.second.adjustment=0;entry.second.slider_pending=false;entry.second.slider_frame=~0u;}
    xml1_pc_channel_native_pointer(owner!=0);
    if(std::getenv("XML1_PC_NATIVE_BOUNDS"))
        std::fprintf(stderr,"[PC POINTER MENU] owner=%08X\n",owner);
}
extern "C" void xml1_pc_native_menu_type(unsigned vtable) {
    // PAUSE_MENU factory 001723D3 -> constructor 00172100 -> vtable 003DEE44.
    xml1_pc_channel_menu_back(vtable==0x003DEE44);
}
extern "C" void xml1_pc_native_flags(unsigned item,unsigned flags) {
    auto it=native_items.find(item);if(it!=native_items.end())it->second.flags=flags;
}
extern "C" void xml1_pc_native_adjustable(unsigned item,int enabled) {
    auto it=native_items.find(item);
    if(it!=native_items.end())it->second.adjustable=enabled!=0;
}
extern "C" int xml1_pc_native_adjust(unsigned item) {
    auto it=native_items.find(item);
    if(it==native_items.end())return 0;
    int adjustment=it->second.adjustment;it->second.adjustment=0;
    return pointer_owner && it->second.owner==pointer_owner && (it->second.flags&14)==4 ? adjustment : 0;
}
extern "C" void xml1_pc_native_bounds(unsigned item,int x,int top,int width,int height) {
    auto it=native_items.find(item);
    if(it==native_items.end() || !native_model.active)return;
    auto &entry=it->second;
    if(entry.x==x && entry.top==top && entry.width==width && entry.height==height)return;
    entry.x=x;entry.top=top;entry.width=width;entry.height=height;
    if(std::getenv("XML1_PC_NATIVE_BOUNDS"))
        std::fprintf(stderr,"[PC BOUNDS] %s x=%d top=%d width=%d height=%d owner=%08X\n",
            entry.key.c_str(),x,top,width,height,native_owner);
}
extern "C" void xml1_pc_native_closed(unsigned owner) {
    if(owner==shake_owner) {shake_owner=0;shake_dirty=false;}
    if(owner==pointer_owner)xml1_pc_native_menu(0);
    if(!native_model.active || !native_owner || owner!=native_owner)return;
    xml1_pc_channel_capture(0);
    xml1_pc_channel_native_pointer(0);pending_click=pending_hover=0;
    xml1_pc_options_cancel(&native_model);
    std::fprintf(stderr,"[PC NATIVE] Native menu closed; discarded unapplied draft\n");
}
extern "C" void xml1_pc_native_projection(unsigned item,const float *world,const float *view,const float *projection) {
    auto it=native_items.find(item);
    if(it==native_items.end() || !native_model.active || it->second.projection_logged ||
       !std::getenv("XML1_PC_NATIVE_BOUNDS"))return;
    it->second.projection_logged=true;
    std::fprintf(stderr,"[PC PROJECTION] %s",it->second.key.c_str());
    for(auto matrix:{world,view,projection}) {
        std::fprintf(stderr," | ");
        for(unsigned i=0;i<16;++i)std::fprintf(stderr," %.6g",matrix[i]);
    }
    std::fprintf(stderr,"\n");
}
extern "C" int xml1_pc_native_interested(unsigned item) {
    auto it=native_items.find(item);
    return pointer_owner && it!=native_items.end() && it->second.owner==pointer_owner;
}
extern "C" void xml1_pc_native_screen_bounds(unsigned item,float left,float top,float right,float bottom) {
    auto it=native_items.find(item);if(it==native_items.end() || !native_model.active)return;
    auto &entry=it->second;
    if(!entry.screen_valid && std::getenv("XML1_PC_NATIVE_BOUNDS"))
        std::fprintf(stderr,"[PC SCREEN] %s %.6f %.6f %.6f %.6f\n",entry.key.c_str(),left,top,right,bottom);
    entry.screen_valid=true;entry.left=left;entry.screen_top=top;entry.right=right;entry.bottom=bottom;
}
extern "C" void xml1_pc_native_vertex_owner(unsigned address,unsigned item) {
    address&=0x7fffffffu;
    if(item)vertex_items[address]=item;
    else vertex_items.erase(address);
}
extern "C" unsigned xml1_pc_native_vertex_item(unsigned address) {
    if(!pointer_owner)return 0;
    auto it=vertex_items.find(address&0x7fffffffu);
    return it==vertex_items.end()?0:it->second;
}
extern "C" int xml1_pc_native_tracking(void) {
    return pointer_owner && !vertex_items.empty();
}
extern "C" void xml1_pc_native_vertex_copy(unsigned destination,unsigned source,unsigned bytes) {
    if(vertex_items.empty() || bytes<12 || !pointer_owner)return;
    source&=0x7fffffffu;destination&=0x7fffffffu;
    if(source==destination)return;
    const uint64_t source_end=(uint64_t)source+bytes,destination_end=(uint64_t)destination+bytes;
    std::vector<std::pair<unsigned,unsigned>> copied;
    for(auto it=vertex_items.lower_bound(source);it!=vertex_items.end() && (uint64_t)it->first+12<=source_end;++it)
        copied.emplace_back(destination+(it->first-source),it->second);
    auto begin=vertex_items.lower_bound(destination),end=begin;
    while(end!=vertex_items.end() && end->first<destination_end)++end;
    vertex_items.erase(begin,end);
    for(auto entry:copied)vertex_items[entry.first]=entry.second;
    static unsigned reports;
    if(!copied.empty() && reports++<8 && std::getenv("XML1_PC_NATIVE_BOUNDS"))
        std::fprintf(stderr,"[PC VERTEX COPY] %08X -> %08X bytes=%u vertices=%zu\n",source,destination,bytes,copied.size());
}
extern "C" void xml1_pc_native_render_vertex(unsigned item,float x,float y,unsigned frame) {
    auto it=native_items.find(item);if(it==native_items.end() || it->second.owner!=pointer_owner)return;
    auto &entry=it->second;
    if(entry.screen_frame!=frame) {
        if(entry.screen_frame!=~0u && std::getenv("XML1_PC_NATIVE_BOUNDS") && !entry.screen_valid)
            std::fprintf(stderr,"[PC DRAW BOUNDS] %s %.6f %.6f %.6f %.6f\n",entry.key.c_str(),entry.left,entry.screen_top,entry.right,entry.bottom);
        entry.screen_valid=entry.screen_frame!=~0u;
        entry.screen_frame=frame;entry.left=entry.right=x;entry.screen_top=entry.bottom=y;
    } else {
        if(x<entry.left)entry.left=x;if(x>entry.right)entry.right=x;
        if(y<entry.screen_top)entry.screen_top=y;if(y>entry.bottom)entry.bottom=y;
    }
}

extern "C" void xml1_pc_native_slider_bounds(unsigned item,float left,float top,float right,float bottom,unsigned frame) {
    auto it=native_items.find(item);
    if(it==native_items.end() || !std::isfinite(left) || !std::isfinite(top) ||
       !std::isfinite(right) || !std::isfinite(bottom) || right<=left || bottom<=top)return;
    auto &entry=it->second;
    if(entry.gamevar!="sfxvolume" && entry.gamevar!="musicvolume")return;
    entry.slider_left=left;entry.slider_top=top;entry.slider_right=right;entry.slider_bottom=bottom;
    entry.slider_frame=frame;
}
extern "C" int xml1_pc_native_slider_value(unsigned item,float *value) {
    auto it=native_items.find(item);if(it==native_items.end() || !value)return 0;
    auto &entry=it->second;
    bool valid=entry.slider_pending && entry.owner==pointer_owner && (entry.flags&14)==4;
    entry.slider_pending=false;
    if(valid)*value=entry.slider_value;
    return valid;
}

// Consume pointer events only after all text draws in this frame have arrived.
// The item update subsequently queues its original usecmd through the engine.
extern "C" void xml1_pc_native_frame(unsigned frame) {
    if(!pointer_owner)return;
    Xml1PcInputSnapshot snapshot{};
    if(!xml1_pc_channel_read(&snapshot,1) || !snapshot.controls.focused || snapshot.menu_active) {
        advanced_space_held=true;
        dragging_slider=0;
        for(auto &entry:native_items)entry.second.slider_pending=false;
        return;
    }
    const bool space=snapshot.controls.held[VK_SPACE]!=0;
    if(space && !advanced_space_held && snapshot.settings.keyboard_enabled && !pending_click) {
        for(const auto &pair:native_items) {
            const auto &item=pair.second;
            if(item.owner==pointer_owner && (item.flags&14)==4 &&
               item.key=="prompt_options_advanced" &&
               item.command=="pcnative_open;openmenu options_controller_xbox") {
                pending_click=pending_hover=pair.first;
                std::fprintf(stderr,"[PC NATIVE] Space queued Advanced Options\n");
                break;
            }
        }
    }
    advanced_space_held=space;
    Xml1PcMenuPointer event{};
    while(xml1_pc_channel_pointer_read(&event)) {
        if(!event.width || !event.height) {
            dragging_slider=0;
            for(auto &entry:native_items)entry.second.slider_pending=false;
            continue;
        }
        float x=(float)event.x/event.width,y=(float)event.y/event.height;
        auto drag=native_items.find(dragging_slider);
        if(drag!=native_items.end() && (drag->second.owner!=pointer_owner ||
           (drag->second.flags&14)!=4 || drag->second.slider_frame!=frame)) {
            drag->second.slider_pending=false;dragging_slider=0;drag=native_items.end();
        }
        if(!dragging_slider && event.button==VK_LBUTTON) {
            float smallest=2.f;
            for(auto it=native_items.begin();it!=native_items.end();++it) {
                auto &entry=it->second;
                if(entry.owner!=pointer_owner || (entry.flags&14)!=4 || entry.slider_frame!=frame)continue;
                float area=(entry.slider_right-entry.slider_left)*(entry.slider_bottom-entry.slider_top);
                if(x>=entry.slider_left && x<=entry.slider_right && y>=entry.slider_top && y<=entry.slider_bottom &&
                   (area<smallest || (area==smallest && it->first<dragging_slider))) {
                    smallest=area;dragging_slider=it->first;drag=it;
                }
            }
        }
        if(dragging_slider && drag!=native_items.end()) {
            auto &entry=drag->second;
            entry.slider_value=(x-entry.slider_left)/(entry.slider_right-entry.slider_left);
            if(entry.slider_value<0)entry.slider_value=0;if(entry.slider_value>1)entry.slider_value=1;
            entry.slider_pending=true;pending_hover=dragging_slider;
            if(!(event.buttons&1))dragging_slider=0;
            continue;
        }
        if(pending_click)continue;
        unsigned target=0;float smallest=2.f;
        for(const auto &pair:native_items) {
            const auto &item=pair.second;
            if(item.owner!=pointer_owner || (item.flags&14)!=4 || (item.command.empty() && item.gamevar.empty()) || item.screen_frame!=frame ||
               item.right<=item.left || item.bottom<=item.screen_top)continue;
            // Four client pixels make glyph edges forgiving without using
            // layout-specific coordinates or overlapping adjacent table rows.
            const float dx=4.f/event.width,dy=4.f/event.height;
            if(x<item.left-dx || x>item.right+dx || y<item.screen_top-dy || y>item.bottom+dy)continue;
            float area=(item.right-item.left)*(item.bottom-item.screen_top);
            if(area<smallest || (area==smallest && pair.first<target)) {target=pair.first;smallest=area;}
        }
        pending_hover=target;
        if(target && event.wheel && native_items.at(target).adjustable) {
            // Use the same single-step adjustment as the native menu arrows.
            native_items.at(target).adjustment=event.wheel>0?1:-1;
        }
        if(event.button==VK_LBUTTON) {
            pending_click=target;
            if(target) {
                const auto &item=native_items.at(target);
                std::fprintf(stderr,"[PC NATIVE POINTER] queued %s\n",
                    item.command.empty()?item.gamevar.c_str():item.command.c_str());
            }
        }
    }
}
extern "C" int xml1_pc_native_activate(unsigned item) {
    if(!pointer_owner || !pending_click || item!=pending_click)return 0;
    pending_click=0;
    auto it=native_items.find(item);
    return it!=native_items.end() && it->second.owner==pointer_owner && (it->second.flags&14)==4;
}
extern "C" int xml1_pc_native_hover(unsigned item) {
    if(!pointer_owner || !pending_hover || item!=pending_hover)return 0;
    pending_hover=0;
    auto it=native_items.find(item);
    return it!=native_items.end() && it->second.owner==pointer_owner && (it->second.flags&14)==4;
}
extern "C" void xml1_pc_native_focus_trace(unsigned item,unsigned caller,unsigned active) {
    auto found=native_items.find(item);
    if(found!=native_items.end())found->second.profile_indicator=-1;
    static unsigned reports;
    if(native_model.active && native_items.find(item)!=native_items.end() &&
       std::getenv("XML1_PC_NATIVE_BOUNDS") && reports++<16)
        std::fprintf(stderr,"[PC NATIVE FOCUS] item=%08X caller=%08X active=%u\n",item,caller,active);
}
