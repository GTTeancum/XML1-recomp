#include "input/pc_controls.h"
#include <cstdio>
#include <cstring>
#include <string>
#include <fstream>
#include <filesystem>
#include <charconv>
#include <windows.h>

static const char *action_names[] = {
    "MoveForward", "MoveBackward", "MoveLeft", "MoveRight",
    "Attack", "Smash", "Jump", "Use", "Powers", "HealthPack", "EnergyPack", "CallAllies",
    "HeroUp", "HeroDown", "HeroLeft", "HeroRight", "Map", "Pause", "Stats",
    "CameraUp", "CameraDown", "CameraLeft", "CameraRight", "Walk",
    "Power1", "Power2", "Power3", "Power4", "RotateCamera"
};
static_assert(sizeof(action_names)/sizeof(action_names[0]) == XML1_PC_ACTION_COUNT);
extern "C" const char *xml1_pc_action_name(unsigned action) {
    return action < XML1_PC_ACTION_COUNT ? action_names[action] : "";
}
extern "C" void xml1_pc_settings_defaults(Xml1PcSettings *s) {
    *s = {};
    s->width=1920; s->height=1080; s->keyboard_enabled=1;
    s->mouse_sensitivity=100;
    s->view_shake=1;
    const uint32_t keys[]={'W','S','A','D',VK_NUMPAD4,VK_NUMPAD6,VK_SPACE,'E',
        VK_NUMPAD5,'P','O','C',VK_UP,VK_DOWN,VK_LEFT,VK_RIGHT,'M',VK_ESCAPE,VK_F1,
        'I','K','J','L',VK_SHIFT,'1','2','3','4','V'};
    static_assert(sizeof(keys)==sizeof(s->keys[0]));
    const uint32_t pad[]={XML1_PAD_LY_POS,XML1_PAD_LY_NEG,XML1_PAD_LX_NEG,XML1_PAD_LX_POS,
        XML1_PAD_A,XML1_PAD_B,XML1_PAD_Y,XML1_PAD_X,XML1_PAD_RT,XML1_PAD_WHITE,
        XML1_PAD_BLACK,XML1_PAD_LT,XML1_PAD_UP,XML1_PAD_DOWN,XML1_PAD_LEFT,XML1_PAD_RIGHT,
        XML1_PAD_LTHUMB,XML1_PAD_START,XML1_PAD_BACK,XML1_PAD_RY_POS,XML1_PAD_RY_NEG,
        XML1_PAD_RX_NEG,XML1_PAD_RX_POS,0,0,0,0,0,0};
    static_assert(sizeof(pad)==sizeof(s->pad_bindings[0]));
    for(unsigned player=0;player<4;++player) {
        std::memcpy(s->keys[player],keys,sizeof(keys));
        std::memcpy(s->pad_bindings[player],pad,sizeof(pad));
        s->alternate_keys[player][XML1_PC_ATTACK]=VK_LBUTTON;
        s->alternate_keys[player][XML1_PC_SMASH]=VK_RBUTTON;
        s->alternate_keys[player][XML1_PC_CAMERA_DRAG]=VK_MBUTTON;
    }
}
// Derived from the installed XML2 preset tables; see docs/PC-OPTIONS-CONTROLS.md.
// XML1 keeps its health/energy actions and mouse attack/camera conveniences.
extern "C" int xml1_pc_settings_preset(Xml1PcSettings *s,unsigned player,unsigned preset) {
    if(!s || player>=4 || preset<1 || preset>3)return 0;
    Xml1PcSettings base;xml1_pc_settings_defaults(&base);
    std::memcpy(s->keys[player],base.keys[0],sizeof(s->keys[player]));
    std::memcpy(s->alternate_keys[player],base.alternate_keys[0],sizeof(s->alternate_keys[player]));
    auto &k=s->keys[player];auto &alt=s->alternate_keys[player];
    if(preset==2) {
        k[XML1_PC_ATTACK]='J';k[XML1_PC_SMASH]='K';k[XML1_PC_USE]='H';
        k[XML1_PC_POWERS]=VK_CONTROL;alt[XML1_PC_POWERS]=VK_SHIFT;
        k[XML1_PC_CAMERA_UP]=VK_HOME;k[XML1_PC_CAMERA_DOWN]=VK_END;
        k[XML1_PC_CAMERA_LEFT]=VK_DELETE;k[XML1_PC_CAMERA_RIGHT]=VK_NEXT;
        k[XML1_PC_WALK]='Z';
        // V/MMB remains camera drag; distinguishing right Ctrl is not required.
    } else if(preset==3) {
        k[XML1_PC_ATTACK]='Q';k[XML1_PC_SMASH]='E';k[XML1_PC_USE]='R';
        k[XML1_PC_ALLIES]='X';
        k[XML1_PC_HERO_UP]=VK_NUMPAD8;k[XML1_PC_HERO_DOWN]=VK_NUMPAD2;
        k[XML1_PC_HERO_LEFT]=VK_NUMPAD4;k[XML1_PC_HERO_RIGHT]=VK_NUMPAD6;
        k[XML1_PC_CAMERA_UP]=VK_UP;k[XML1_PC_CAMERA_DOWN]=VK_DOWN;
        k[XML1_PC_CAMERA_LEFT]=VK_LEFT;k[XML1_PC_CAMERA_RIGHT]=VK_RIGHT;
    }
    return 1;
}
static int fail(char *error,unsigned capacity,const char *message) {
    if(capacity) std::snprintf(error,capacity,"%s",message);
    return 0;
}
extern "C" int xml1_pc_binding_conflict(const Xml1PcSettings *s,unsigned action,unsigned key) {
    return xml1_pc_player_binding_conflict(s,0,action,key);
}
extern "C" int xml1_pc_player_binding_conflict(const Xml1PcSettings *s,unsigned player,unsigned action,unsigned key) {
    if(!key || player>=4)return -1;
    for(unsigned i=0;i<XML1_PC_ACTION_COUNT;++i)
        if(i!=action && (s->keys[player][i]==key || s->alternate_keys[player][i]==key))return (int)i;
    return -1;
}
extern "C" int xml1_pc_pad_binding_conflict(const Xml1PcSettings *s,unsigned player,unsigned action,unsigned source) {
    if(!source || player>=4)return -1;
    for(unsigned i=0;i<XML1_PC_ACTION_COUNT;++i)
        if(i!=action && (s->pad_bindings[player][i]==source || s->alternate_pad_bindings[player][i]==source))return (int)i;
    return -1;
}
// Shared by INI validation, native Options and the embedded DX8 renderer.
// Output size is independent of desktop size; window fitting only scales presentation.
static const uint32_t resolutions[][2]={{640,480},{1280,720},{1920,1080},{2560,1440},{3840,2160}};
extern "C" int xml1_pc_resolution_supported(uint32_t width,uint32_t height) {
    for(const auto &mode:resolutions)if(mode[0]==width && mode[1]==height)return 1;
    return 0;
}
extern "C" void xml1_pc_resolution_next(Xml1PcSettings *s) {
    unsigned next=1; // Keep the existing widescreen menu cycle; 4:3 remains INI-selectable.
    for(unsigned i=1;i<sizeof(resolutions)/sizeof(resolutions[0]);++i)
        if(s->width==resolutions[i][0] && s->height==resolutions[i][1]) {
            next=i+1;if(next==sizeof(resolutions)/sizeof(resolutions[0]))next=1;break;
        }
    s->width=resolutions[next][0];s->height=resolutions[next][1];
}
extern "C" int xml1_pc_settings_validate(const Xml1PcSettings *s,char *error,unsigned capacity) {
    if(!xml1_pc_resolution_supported(s->width,s->height)) return fail(error,capacity,"Unsupported resolution");
    if(s->fullscreen>1 || s->keyboard_enabled>1 || s->separate_controllers>1 ||
       s->invert_camera_y>1 || s->view_shake>1 || s->keyboard_player>3) return fail(error,capacity,"Invalid input/display option");
    if(s->fsaa!=0 && s->fsaa!=2 && s->fsaa!=4 && s->fsaa!=8)
        return fail(error,capacity,"FSAA must be Off, 2x, 4x or 8x");
    if(s->mouse_sensitivity<10 || s->mouse_sensitivity>300) return fail(error,capacity,"Mouse sensitivity must be 10 through 300");
    for(unsigned player=0;player<4;++player) for(unsigned i=0;i<XML1_PC_ACTION_COUNT;++i) {
        const unsigned a=s->pad_bindings[player][i],b=s->alternate_pad_bindings[player][i];
        if(a>=XML1_PAD_SOURCE_COUNT || b>=XML1_PAD_SOURCE_COUNT)
            return fail(error,capacity,"Invalid controller binding");
        if(i==XML1_PC_CAMERA_DRAG && (a || b))
            return fail(error,capacity,"Rotate camera hold applies only to mouse input");
        if(xml1_pc_pad_binding_conflict(s,player,i,a)>=0 || xml1_pc_pad_binding_conflict(s,player,i,b)>=0)
            return fail(error,capacity,"A controller input is assigned to more than one action");
        if(s->keys[player][i]>255 || s->alternate_keys[player][i]>255) return fail(error,capacity,"Invalid key binding");
        if(s->keys[player][i]==VK_RETURN || s->keys[player][i]==VK_BACK || s->alternate_keys[player][i]==VK_RETURN || s->alternate_keys[player][i]==VK_BACK)
            return fail(error,capacity,"Enter and Backspace are reserved for menu accept/back");
        if(xml1_pc_player_binding_conflict(s,player,i,s->keys[player][i])>=0 || xml1_pc_player_binding_conflict(s,player,i,s->alternate_keys[player][i])>=0)
            return fail(error,capacity,"A key is assigned to more than one action");
    }
    if(capacity) error[0]=0;
    return 1;
}
struct Field { const char *name; uint32_t Xml1PcSettings::*member; };
static const Field fields[]={
    {"Width",&Xml1PcSettings::width},{"Height",&Xml1PcSettings::height},
    {"Fullscreen",&Xml1PcSettings::fullscreen},{"FSAA",&Xml1PcSettings::fsaa},
    {"KeyboardEnabled",&Xml1PcSettings::keyboard_enabled},{"KeyboardPlayer",&Xml1PcSettings::keyboard_player},
    {"SeparateControllers",&Xml1PcSettings::separate_controllers},
    {"MouseSensitivity",&Xml1PcSettings::mouse_sensitivity},{"InvertCameraY",&Xml1PcSettings::invert_camera_y},
    {"ViewShake",&Xml1PcSettings::view_shake}
};
static std::string trim(std::string s) {
    auto a=s.find_first_not_of(" \t\r\n"), b=s.find_last_not_of(" \t\r\n");
    return a==std::string::npos?"":s.substr(a,b-a+1);
}
extern "C" int xml1_pc_settings_load(const char *path,Xml1PcSettings *out,char *error,unsigned capacity) {
    try {
        Xml1PcSettings s; xml1_pc_settings_defaults(&s);
        if(!std::filesystem::exists(std::filesystem::u8path(path))) { *out=s;return 1; }
        std::ifstream input(std::filesystem::u8path(path));
        if(!input) return fail(error,capacity,"Cannot read PC settings");
        std::string line, section;
        bool explicit_profiles=false;
        while(std::getline(input,line)) {
            line=trim(line.substr(0,line.find_first_of(";#")));
            if(line.empty()) continue;
            if(line.front()=='[' && line.back()==']') { section=line.substr(1,line.size()-2);continue; }
            auto eq=line.find('=');
            if(eq==std::string::npos) return fail(error,capacity,"PC setting requires name=value");
            auto key=trim(line.substr(0,eq)), value=trim(line.substr(eq+1));
            uint32_t n=0; auto parsed=std::from_chars(value.data(),value.data()+value.size(),n);
            if(parsed.ec!=std::errc() || parsed.ptr!=value.data()+value.size())
                return fail(error,capacity,"PC setting requires an unsigned integer");
            bool found=false;
            if(section=="PC") for(const auto &field:fields) if(key==field.name) {s.*field.member=n;found=true;break;}
            for(unsigned player=0;player<4;++player) {
                std::string suffix=player?".Player"+std::to_string(player+1):"";
                bool primary=section=="Bindings"+suffix, alternate=section=="AlternateBindings"+suffix;
                bool pad_primary=section=="ControllerBindings"+suffix;
                bool pad_alternate=section=="AlternateControllerBindings"+suffix;
                if(pad_primary || pad_alternate)for(unsigned i=0;i<XML1_PC_ACTION_COUNT;++i)if(key==action_names[i]) {
                    (pad_primary?s.pad_bindings[player][i]:s.alternate_pad_bindings[player][i])=n;found=true;break;
                }
                if(!primary && !alternate)continue;
                if(player)explicit_profiles=true;
                for(unsigned i=0;i<XML1_PC_ACTION_COUNT;++i)if(key==action_names[i]) {
                    (primary?s.keys[player][i]:s.alternate_keys[player][i])=n;found=true;break;
                }
            }
            if(!found) return fail(error,capacity,"Unknown PC setting");
        }
        if(input.bad()) return fail(error,capacity,"PC settings read failed");
        // Old files had one profile used by whichever player owned the keyboard.
        if(!explicit_profiles)for(unsigned player=1;player<4;++player) {
            std::memcpy(s.keys[player],s.keys[0],sizeof(s.keys[0]));
            std::memcpy(s.alternate_keys[player],s.alternate_keys[0],sizeof(s.alternate_keys[0]));
        }
        for(unsigned player=0;player<4;++player)for(unsigned i=0;i<XML1_PC_ACTION_COUNT;++i)
            if(s.keys[player][i]==s.alternate_keys[player][i])s.alternate_keys[player][i]=0;
        if(!xml1_pc_settings_validate(&s,error,capacity)) return 0;
        *out=s; return 1;
    } catch(const std::exception &e) {return fail(error,capacity,e.what());}
}
extern "C" int xml1_pc_settings_save(const char *path,const Xml1PcSettings *s,char *error,unsigned capacity) {
    if(!xml1_pc_settings_validate(s,error,capacity)) return 0;
    try {
        auto target=std::filesystem::u8path(path), temp=target;
        temp+=L".tmp";
        std::ofstream output(temp,std::ios::binary|std::ios::trunc);
        if(!output) return fail(error,capacity,"Cannot write PC settings");
        output<<"[PC]\n";
        for(const auto &field:fields) output<<field.name<<" = "<<s->*field.member<<"\n";
        for(unsigned player=0;player<4;++player) {
            std::string suffix=player?".Player"+std::to_string(player+1):"";
            output<<"\n[Bindings"<<suffix<<"]\n";
            for(unsigned i=0;i<XML1_PC_ACTION_COUNT;++i)output<<action_names[i]<<" = "<<s->keys[player][i]<<"\n";
            output<<"\n[AlternateBindings"<<suffix<<"]\n";
            for(unsigned i=0;i<XML1_PC_ACTION_COUNT;++i)output<<action_names[i]<<" = "<<s->alternate_keys[player][i]<<"\n";
            output<<"\n[ControllerBindings"<<suffix<<"]\n";
            for(unsigned i=0;i<XML1_PC_ACTION_COUNT;++i)output<<action_names[i]<<" = "<<s->pad_bindings[player][i]<<"\n";
            output<<"\n[AlternateControllerBindings"<<suffix<<"]\n";
            for(unsigned i=0;i<XML1_PC_ACTION_COUNT;++i)output<<action_names[i]<<" = "<<s->alternate_pad_bindings[player][i]<<"\n";
        }
        output.close();
        if(!output || !MoveFileExW(temp.c_str(),target.c_str(),MOVEFILE_REPLACE_EXISTING|MOVEFILE_WRITE_THROUGH))
            return fail(error,capacity,"Could not replace PC settings; previous settings retained");
        return 1;
    } catch(const std::exception &e) {return fail(error,capacity,e.what());}
}
extern "C" void xml1_pc_control_focus(Xml1PcControlState *state,int focused) {
    std::memset(state->held,0,sizeof(state->held)); state->wheel=0; state->focused=focused!=0;
    state->mouse_dx=state->mouse_dy=0;
}
extern "C" void xml1_pc_control_key(Xml1PcControlState *state,unsigned key,int down) {
    if(key<256 && state->focused) state->held[key]=down!=0;
}
extern "C" int xml1_pc_action_down(const Xml1PcSettings *settings,const Xml1PcControlState *state,unsigned action) {
    if(!settings->keyboard_enabled || !state->focused || action>=XML1_PC_ACTION_COUNT)return 0;
    unsigned player=settings->keyboard_player;if(player>=4)return 0;
    unsigned a=settings->keys[player][action],b=settings->alternate_keys[player][action];
    return (a>0 && a<256 && state->held[a]) || (b>0 && b<256 && state->held[b]);
}
