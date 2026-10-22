#include "input/pc_controls.h"
#include "ui/pc_options_model.h"
#include "input/pc_input_channel.h"
#include "input/pc_gamepad.h"
#include "ui/pc_menu.h"
#include "ui/pc_prompts.h"
#include <windows.h>
#include <cstdio>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <string>
#include <stdexcept>
#include <set>

#define REQUIRE(x) do {if(!(x))throw std::runtime_error(#x);}while(0)
int main(int argc,char **argv) {
    try {
        // A separate executable (also built Win32) exercises the exact IPC ABI.
        if(argc==2 && !std::strcmp(argv[1],"--pointer-producer")) {
            REQUIRE(xml1_pc_channel_connect());
            xml1_pc_channel_focus(1);
            REQUIRE(xml1_pc_channel_pointer_event(945,510,VK_LBUTTON,1,0,1920,1080));
            REQUIRE(xml1_pc_channel_pointer_event(945,510,VK_LBUTTON,0,0,1920,1080));
            xml1_pc_channel_close();return 0;
        }
        if(argc==2 && !std::strcmp(argv[1],"--producer")) {
            REQUIRE(xml1_pc_channel_connect());
            Xml1PcInputSnapshot profile_snapshot{};
            char display[32]={};REQUIRE(xml1_pc_channel_get_display(display,sizeof(display)));
            REQUIRE(!std::strcmp(display,"\\\\.\\DISPLAY17"));
            REQUIRE(xml1_pc_channel_set_display("\\\\.\\DISPLAY18"));
            REQUIRE(xml1_pc_channel_read(&profile_snapshot,1));
            REQUIRE(profile_snapshot.settings.keys[3][XML1_PC_FORWARD]=='T');
            REQUIRE(profile_snapshot.settings.pad_bindings[3][XML1_PC_POWER1]==XML1_PAD_RTHUMB);
            xml1_pc_channel_focus(1);
            xml1_pc_channel_key('W',1);xml1_pc_channel_key('W',0);
            xml1_pc_channel_key('A',1);xml1_pc_channel_mouse(320,240,120);
            xml1_pc_channel_close();return 0;
        }
        Xml1PcSettings defaults;xml1_pc_settings_defaults(&defaults);
        char error[160];REQUIRE(xml1_pc_settings_validate(&defaults,error,sizeof(error)));
        REQUIRE(defaults.width==1920 && defaults.height==1080);
        REQUIRE(defaults.view_shake==1);
        { auto invalid=defaults;invalid.view_shake=2;
          REQUIRE(!xml1_pc_settings_validate(&invalid,error,sizeof(error))); }
        REQUIRE(defaults.keys[0][XML1_PC_FORWARD]=='W');
        REQUIRE(defaults.keys[0][XML1_PC_ATTACK]==VK_NUMPAD4);
        REQUIRE(defaults.alternate_keys[0][XML1_PC_ATTACK]==VK_LBUTTON);
        REQUIRE(defaults.alternate_keys[0][XML1_PC_SMASH]==VK_RBUTTON);
        REQUIRE(defaults.alternate_keys[0][XML1_PC_CAMERA_DRAG]==VK_MBUTTON);
        // Default controller settings must preserve every pressure value and
        // both asymmetric axis endpoints exactly, including unused pad bits.
        for(unsigned pressure=0;pressure<256;++pressure) {
            Xml1PcGamepad raw{};raw.buttons=(uint16_t)(pressure*257);
            for(unsigned i=0;i<8;++i)raw.analog[i]=(uint8_t)((pressure+i)%256);
            raw.lx=(int16_t)(pressure*257-32768);raw.ly=(int16_t)(32767-pressure*257);
            raw.rx=-32768;raw.ry=32767;
            for(unsigned player=0;player<4;++player) {
                auto mapped=raw;xml1_pc_remap_controller(&defaults,player,0,&mapped);
                REQUIRE(!std::memcmp(&raw,&mapped,sizeof(raw)));
            }
        }
        {
            Xml1PcOptionsModel editor{};xml1_pc_options_open(&editor,&defaults);
            REQUIRE(xml1_pc_options_select_player(&editor,2));
            REQUIRE(!xml1_pc_options_bind_controller(&editor,XML1_PC_ATTACK,XML1_PAD_B,0));
            REQUIRE(xml1_pc_options_bind_controller(&editor,XML1_PC_SMASH,0,0));
            REQUIRE(xml1_pc_options_bind_controller(&editor,XML1_PC_ATTACK,XML1_PAD_B,0));
            REQUIRE(xml1_pc_options_bind_controller(&editor,XML1_PC_SMASH,XML1_PAD_A,0));
            REQUIRE(xml1_pc_options_bind_controller(&editor,XML1_PC_POWER1,XML1_PAD_RTHUMB,1));
            REQUIRE(!xml1_pc_options_bind_controller(&editor,XML1_PC_CAMERA_DRAG,XML1_PAD_RTHUMB,0));
            REQUIRE(!xml1_pc_options_bind_controller(&editor,XML1_PC_WALK,XML1_PAD_SOURCE_COUNT,0));
            Xml1PcGamepad raw{};raw.analog[0]=128;raw.analog[1]=70;raw.lx=-32768;raw.buttons=0x80;
            auto mapped=raw;xml1_pc_remap_controller(&editor.draft,2,1,&mapped);
            REQUIRE(!std::memcmp(&mapped,&raw,sizeof(raw))); // native menu bypass
            mapped=raw;xml1_pc_remap_controller(&editor.draft,1,0,&mapped);
            REQUIRE(!std::memcmp(&mapped,&raw,sizeof(raw))); // another player unchanged
            mapped=raw;xml1_pc_remap_controller(&editor.draft,2,0,&mapped);
            REQUIRE(mapped.analog[0]==255 && mapped.analog[1]==128 && mapped.analog[7]==255);
            REQUIRE(!(mapped.buttons&0x80) && mapped.lx==-32768); // quick power chord
            raw.buttons=0;mapped=raw;xml1_pc_remap_controller(&editor.draft,2,0,&mapped);
            REQUIRE(mapped.analog[0]==70 && mapped.analog[1]==128);
            auto controller_path=std::filesystem::temp_directory_path()/L"xml1-controller-settings-test.ini";
            REQUIRE(xml1_pc_options_apply(&editor,controller_path.u8string().c_str()));
            Xml1PcSettings loaded{};
            REQUIRE(xml1_pc_settings_load(controller_path.u8string().c_str(),&loaded,error,sizeof(error)));
            REQUIRE(!std::memcmp(&loaded,&editor.draft,sizeof(loaded)));
            REQUIRE(xml1_pc_options_bind_controller(&editor,XML1_PC_ATTACK,0,0));
            xml1_pc_options_cancel(&editor);
            REQUIRE(editor.draft.pad_bindings[2][XML1_PC_ATTACK]==XML1_PAD_B);
            std::filesystem::remove(controller_path);
            auto invalid=defaults;invalid.pad_bindings[0][XML1_PC_SMASH]=XML1_PAD_A;
            REQUIRE(!xml1_pc_settings_validate(&invalid,error,sizeof(error)));
            auto axes=defaults;
            axes.pad_bindings[0][XML1_PC_FORWARD]=XML1_PAD_RY_POS;
            axes.pad_bindings[0][XML1_PC_CAMERA_UP]=XML1_PAD_LY_POS;
            REQUIRE(xml1_pc_settings_validate(&axes,error,sizeof(error)));
            raw={};raw.ly=23456;raw.ry=12345;mapped=raw;
            xml1_pc_remap_controller(&axes,0,0,&mapped);
            REQUIRE(mapped.ly==12345 && mapped.ry==23456);
            axes.pad_bindings[0][XML1_PC_FORWARD]=XML1_PAD_A;
            axes.pad_bindings[0][XML1_PC_ATTACK]=XML1_PAD_RY_POS;
            REQUIRE(xml1_pc_settings_validate(&axes,error,sizeof(error)));
            raw={};raw.analog[0]=255;raw.ry=16384;mapped=raw;
            xml1_pc_remap_controller(&axes,0,0,&mapped);
            REQUIRE(mapped.ly==32767 && mapped.analog[0]==128);
            raw.analog[0]=0;raw.ly=-32768;raw.ry=0;mapped=raw;
            xml1_pc_remap_controller(&axes,0,0,&mapped);
            REQUIRE(mapped.ly==-32768 && mapped.analog[0]==0);
        }
        for(unsigned samples: {0u,2u,4u,8u}) {
            auto antialiased=defaults;antialiased.fsaa=samples;
            REQUIRE(xml1_pc_settings_validate(&antialiased,error,sizeof(error)));
        }
        // Presets replace one profile only and remain draft changes until Apply.
        for(unsigned view=0;view<2;++view) for(unsigned preset=1;preset<=3;++preset) {
            auto settings=defaults;settings.width=1280;settings.height=720;
            settings.mouse_sensitivity=175;settings.keyboard_player=2;
            settings.keys[1][XML1_PC_FORWARD]='T';
            for(unsigned player=0;player<4;++player) {
                settings.pad_bindings[player][XML1_PC_ATTACK]=0;
                settings.alternate_pad_bindings[player][XML1_PC_ATTACK]=XML1_PAD_RTHUMB;
            }
            Xml1PcOptionsModel editor{};xml1_pc_options_open(&editor,&settings);
            REQUIRE(xml1_pc_options_select_player(&editor,1));
            editor.controller_bindings=view;
            REQUIRE(xml1_pc_options_preset(&editor,preset));
            REQUIRE(editor.controller_bindings==view);
            REQUIRE(!std::memcmp(editor.draft.pad_bindings[1],defaults.pad_bindings[1],sizeof(defaults.pad_bindings[1])));
            REQUIRE(!std::memcmp(editor.draft.alternate_pad_bindings[1],defaults.alternate_pad_bindings[1],sizeof(defaults.alternate_pad_bindings[1])));
            REQUIRE(editor.draft.width==1280 && editor.draft.mouse_sensitivity==175);
            REQUIRE(editor.draft.keyboard_player==2);
            for(unsigned player:{0u,2u,3u}) {
                REQUIRE(!std::memcmp(editor.draft.pad_bindings[player],settings.pad_bindings[player],sizeof(settings.pad_bindings[player])));
                REQUIRE(!std::memcmp(editor.draft.alternate_pad_bindings[player],settings.alternate_pad_bindings[player],sizeof(settings.alternate_pad_bindings[player])));
                REQUIRE(!std::memcmp(editor.draft.keys[player],settings.keys[player],sizeof(settings.keys[player])));
                REQUIRE(!std::memcmp(editor.draft.alternate_keys[player],settings.alternate_keys[player],sizeof(settings.alternate_keys[player])));
            }
            REQUIRE(xml1_pc_settings_validate(&editor.draft,error,sizeof(error)));
            REQUIRE(editor.draft.keys[1][XML1_PC_FORWARD]=='W');
            REQUIRE(editor.draft.keys[1][XML1_PC_ATTACK]==(preset==1?VK_NUMPAD4:preset==2?'J':'Q'));
            REQUIRE(editor.draft.alternate_keys[1][XML1_PC_ATTACK]==VK_LBUTTON);
            REQUIRE(editor.draft.alternate_keys[1][XML1_PC_CAMERA_DRAG]==VK_MBUTTON);
            auto saved_draft=editor.draft;
            REQUIRE(!xml1_pc_options_preset(&editor,0));
            REQUIRE(!xml1_pc_options_preset(&editor,4));
            REQUIRE(!std::memcmp(&saved_draft,&editor.draft,sizeof(saved_draft)));
            xml1_pc_options_cancel(&editor);
            REQUIRE(!std::memcmp(&editor.draft,&settings,sizeof(settings)));
            REQUIRE(!xml1_pc_options_preset(&editor,1));
        }
        auto dir=std::filesystem::temp_directory_path()/
            ("OpenXML1-controls-test-"+std::to_string(GetCurrentProcessId()));
        std::filesystem::create_directory(dir);
        auto path=dir/"pc-settings.ini";
        Xml1PcSettings loaded{};
        REQUIRE(xml1_pc_settings_load(path.u8string().c_str(),&loaded,error,sizeof(error)));
        REQUIRE(!std::memcmp(&loaded,&defaults,sizeof(defaults)));
        {
            auto mode=defaults;
            const unsigned expected[][2]={{2560,1440},{3840,2160},{1280,720},{1920,1080}};
            for(const auto &size:expected) {
                xml1_pc_resolution_next(&mode);
                REQUIRE(mode.width==size[0] && mode.height==size[1]);
                REQUIRE(xml1_pc_settings_save(path.u8string().c_str(),&mode,error,sizeof(error)));
                Xml1PcSettings roundtrip{};
                REQUIRE(xml1_pc_settings_load(path.u8string().c_str(),&roundtrip,error,sizeof(error)));
                REQUIRE(!std::memcmp(&mode,&roundtrip,sizeof(mode)));
            }
            // Manual INI entry follows the same path as Options, without requiring a 4K monitor.
            {std::ofstream ini(path);ini<<"[PC]\nWidth=3840\nHeight=2160\n";}
            REQUIRE(xml1_pc_settings_load(path.u8string().c_str(),&mode,error,sizeof(error)));
            REQUIRE(mode.width==3840 && mode.height==2160);
            mode.height=1080;REQUIRE(!xml1_pc_settings_validate(&mode,error,sizeof(error)));
            REQUIRE(!xml1_pc_resolution_supported(7680,4320));
            REQUIRE(xml1_pc_settings_save(path.u8string().c_str(),&defaults,error,sizeof(error)));
        }
        {
            auto profile_path=dir/"profiles.ini";
            std::ofstream old(profile_path);
            old<<"[PC]\nKeyboardPlayer=2\n[Bindings]\nMoveForward=84\n";old.close();
            Xml1PcSettings profiles{};
            REQUIRE(xml1_pc_settings_load(profile_path.u8string().c_str(),&profiles,error,sizeof(error)));
            for(unsigned player=0;player<4;++player)REQUIRE(profiles.keys[player][XML1_PC_FORWARD]=='T');
            Xml1PcOptionsModel editor{};xml1_pc_options_open(&editor,&profiles);
            REQUIRE(editor.selected_player==2);
            REQUIRE(xml1_pc_options_select_player(&editor,1));
            REQUIRE(editor.draft.keyboard_player==2);
            REQUIRE(xml1_pc_options_bind(&editor,XML1_PC_FORWARD,'Y'));
            REQUIRE(editor.draft.keys[0][XML1_PC_FORWARD]=='T');
            REQUIRE(editor.draft.keys[1][XML1_PC_FORWARD]=='Y');
            REQUIRE(editor.draft.keys[2][XML1_PC_FORWARD]=='T');
            REQUIRE(!xml1_pc_options_bind(&editor,XML1_PC_ATTACK,'Y'));
            REQUIRE(xml1_pc_options_select_player(&editor,3));
            REQUIRE(xml1_pc_options_bind(&editor,XML1_PC_ATTACK,'Y'));
            REQUIRE(!xml1_pc_options_select_player(&editor,4));
            REQUIRE(xml1_pc_options_apply(&editor,profile_path.u8string().c_str()));
            Xml1PcSettings restored{};
            REQUIRE(xml1_pc_settings_load(profile_path.u8string().c_str(),&restored,error,sizeof(error)));
            REQUIRE(!std::memcmp(&restored,&editor.draft,sizeof(restored)));
            Xml1PcControlState controls{};xml1_pc_control_focus(&controls,1);
            xml1_pc_control_key(&controls,'Y',1);
            restored.keyboard_player=0;REQUIRE(!xml1_pc_action_down(&restored,&controls,XML1_PC_FORWARD));
            restored.keyboard_player=1;REQUIRE(xml1_pc_action_down(&restored,&controls,XML1_PC_FORWARD));
            restored.keyboard_player=3;REQUIRE(xml1_pc_action_down(&restored,&controls,XML1_PC_ATTACK));
            REQUIRE(!xml1_pc_action_down(&restored,&controls,XML1_PC_FORWARD));
            REQUIRE(xml1_pc_options_select_player(&editor,1));
            REQUIRE(xml1_pc_options_bind(&editor,XML1_PC_FORWARD,'U'));
            xml1_pc_options_cancel(&editor);
            REQUIRE(editor.draft.keys[1][XML1_PC_FORWARD]=='Y');
            std::filesystem::remove(profile_path);
        }
        Xml1PcOptionsModel m;xml1_pc_options_open(&m,&defaults);
        m.draft.view_shake=0;xml1_pc_options_cancel(&m);
        REQUIRE(m.draft.view_shake==1);
        xml1_pc_options_open(&m,&defaults);m.draft.view_shake=0;
        REQUIRE(!xml1_pc_options_bind(&m,XML1_PC_ATTACK,'W'));
        REQUIRE(m.draft.keys[0][XML1_PC_ATTACK]==VK_NUMPAD4);
        REQUIRE(!xml1_pc_options_bind_slot(&m,XML1_PC_JUMP,VK_LBUTTON,1));
        REQUIRE(xml1_pc_options_bind_slot(&m,XML1_PC_ATTACK,VK_LBUTTON,1));
        REQUIRE(m.draft.keys[0][XML1_PC_ATTACK]==VK_NUMPAD4);
        REQUIRE(xml1_pc_options_bind(&m,XML1_PC_ATTACK,VK_LBUTTON));
        m.draft.width=1280;m.draft.height=720;m.draft.keyboard_player=2;
        REQUIRE(xml1_pc_options_apply(&m,path.u8string().c_str()));
        REQUIRE(std::strstr(m.status,"restart"));
        // Apply again must not hide a restart that has not happened.
        REQUIRE(xml1_pc_options_apply(&m,path.u8string().c_str()));
        REQUIRE(std::strstr(m.status,"restart"));
        REQUIRE(xml1_pc_settings_load(path.u8string().c_str(),&loaded,error,sizeof(error)));
        REQUIRE(!std::memcmp(&loaded,&m.applied,sizeof(loaded)));
        REQUIRE(loaded.view_shake==0);
        xml1_pc_options_defaults(&m);xml1_pc_options_cancel(&m);
        REQUIRE(!std::memcmp(&m.draft,&loaded,sizeof(loaded)));
        REQUIRE(!m.active);
        xml1_pc_options_open(&m,&loaded);
        m.draft.keys[0][XML1_PC_ATTACK]='W';
        REQUIRE(!xml1_pc_options_apply(&m,path.u8string().c_str()));
        Xml1PcSettings after{};
        REQUIRE(xml1_pc_settings_load(path.u8string().c_str(),&after,error,sizeof(error)));
        REQUIRE(!std::memcmp(&loaded,&after,sizeof(loaded)));
        // A failed write must retain the live configuration.
        m.draft=defaults;
        REQUIRE(!xml1_pc_options_apply(&m,(dir/"missing"/"settings.ini").u8string().c_str()));
        REQUIRE(!std::memcmp(&loaded,&m.applied,sizeof(loaded)));
        for(const char *bad:{"[PC]\nWidth=-1\n","[PC]\nWidth=abc\n",
            "[PC]\nFSAA=3\n","[PC]\nMouseSensitivity=0\n",
            "[Bindings]\nAttack=87\n","[PC]\nKeyboardPlayer=4\n",
            "[Bindings]\nMoveForward=256\n","[PC]\nUnknown=0\n"}) {
            std::ofstream f(path);f<<bad;f.close();
            REQUIRE(!xml1_pc_settings_load(path.u8string().c_str(),&after,error,sizeof(error)));
            REQUIRE(!std::memcmp(&loaded,&after,sizeof(loaded)));
        }
        Xml1PcControlState keys{};
        xml1_pc_control_focus(&keys,1);xml1_pc_control_key(&keys,VK_LBUTTON,1);
        REQUIRE(xml1_pc_action_down(&defaults,&keys,XML1_PC_ATTACK));
        xml1_pc_control_focus(&keys,0);
        xml1_pc_control_key(&keys,'W',1);REQUIRE(!xml1_pc_action_down(&defaults,&keys,XML1_PC_FORWARD));
        xml1_pc_control_focus(&keys,1);xml1_pc_control_key(&keys,'W',1);
        REQUIRE(xml1_pc_action_down(&defaults,&keys,XML1_PC_FORWARD));
        xml1_pc_control_focus(&keys,0);xml1_pc_control_focus(&keys,1);
        REQUIRE(!xml1_pc_action_down(&defaults,&keys,XML1_PC_FORWARD));
        Xml1PcInputSnapshot mapped{};mapped.settings=defaults;mapped.controls.focused=1;
        {
            auto input=mapped;input.last_device=1;char label[128]={};
            REQUIRE(xml1_pc_prompt_text(&input,"MENU_ACCEPT",label,sizeof(label)));
            REQUIRE(!std::strcmp(label,"[Enter]"));
            REQUIRE(xml1_pc_prompt_text(&input,"ATTACK",label,sizeof(label)));
            REQUIRE(!std::strcmp(label,"[Num4 / LMB]"));
            REQUIRE(xml1_pc_prompt_text(&input,"MENU_BACK",label,sizeof(label)));
            REQUIRE(!std::strcmp(label,"[Bksp]"));
            REQUIRE(xml1_pc_prompt_text(&input,"MENU_OTHER",label,sizeof(label)));
            REQUIRE(!std::strcmp(label,"[Space]"));
            REQUIRE(xml1_pc_prompt_text(&input,"MENU_NEXT",label,sizeof(label)));
            REQUIRE(!std::strcmp(label,"[Num5]"));
            REQUIRE(xml1_pc_prompt_text(&input,"MENU_PREV",label,sizeof(label)));
            REQUIRE(!std::strcmp(label,"[C]"));
            input.settings.keyboard_player=2;
            input.settings.keys[2][XML1_PC_ATTACK]='Q';
            input.settings.alternate_keys[2][XML1_PC_ATTACK]=0;
            REQUIRE(xml1_pc_prompt_text(&input,"ATTACK",label,sizeof(label)));
            REQUIRE(!std::strcmp(label,"[Q]"));
            REQUIRE(!xml1_pc_prompt_text(&input,"C",label,sizeof(label)));
            REQUIRE(!xml1_pc_prompt_text(&input,"UNKNOWN_MOD_TOKEN",label,sizeof(label)));
            REQUIRE(!xml1_pc_prompt_text(&input,"ATTACK",label,2));
            input.last_device=0;REQUIRE(!xml1_pc_prompt_text(&input,"ATTACK",label,sizeof(label)));
        }
        // An unbound modifier must not synthesize a legacy attack. Conversely,
        // explicit rebinding must work, rather than blacklisting Alt globally.
        for(unsigned modifier : {VK_MENU,VK_LMENU,VK_RMENU}) {
            Xml1PcInputSnapshot alt=mapped;alt.controls.held[modifier]=1;
            Xml1PcGamepad actual{},neutral{};xml1_pc_map_gamepad(&alt,&actual);
            REQUIRE(!std::memcmp(&actual,&neutral,sizeof(actual)));
            alt.settings.keys[0][XML1_PC_ATTACK]=modifier;
            xml1_pc_map_gamepad(&alt,&actual);REQUIRE(actual.analog[0]==255);
        }
        mapped.controls.held['W']=mapped.controls.held['D']=1;
        Xml1PcGamepad pad{};xml1_pc_map_gamepad(&mapped,&pad);
        REQUIRE(pad.lx==23169 && pad.ly==23169);
        mapped.controls.held['S']=1;xml1_pc_map_gamepad(&mapped,&pad);REQUIRE(pad.ly==0 && pad.lx==32767);
        mapped.controls.held[VK_SHIFT]=1;xml1_pc_map_gamepad(&mapped,&pad);REQUIRE(pad.lx==12000);
        mapped.controls.held['1']=1;xml1_pc_map_gamepad(&mapped,&pad);REQUIRE(pad.analog[0]==255 && pad.analog[7]==255);
        mapped.menu_active=1;xml1_pc_map_gamepad(&mapped,&pad);REQUIRE(!pad.lx && !pad.analog[0]);
        mapped.menu_active=0;mapped.controls={};mapped.controls.focused=1;
        mapped.controls.held[VK_ESCAPE]=1;
        xml1_pc_map_gamepad(&mapped,&pad);REQUIRE((pad.buttons&(1u<<4)) && !pad.analog[1]);
        mapped.native_menu=1;xml1_pc_map_gamepad(&mapped,&pad);
        REQUIRE((pad.buttons&(1u<<4)) && !pad.analog[1]); // Startup retains Start.
        mapped.native_menu=3;xml1_pc_map_gamepad(&mapped,&pad);
        REQUIRE(!(pad.buttons&(1u<<4)) && pad.analog[1]==255 && !pad.analog[0]);
        mapped.controls.held[VK_ESCAPE]=0;xml1_pc_map_gamepad(&mapped,&pad);
        REQUIRE(!pad.buttons && !pad.analog[1]);mapped.native_menu=0;
        mapped.menu_active=0;mapped.controls={};mapped.controls.focused=1;mapped.controls.held['V']=1;
        mapped.controls.mouse_dx=12;mapped.controls.mouse_dy=6;
        xml1_pc_map_gamepad(&mapped,&pad);REQUIRE(pad.rx>16384 && pad.ry<-16384);
        const int slow_x=pad.rx;REQUIRE(pad.ry==-32767);
        mapped.settings.invert_camera_y=1;mapped.settings.mouse_sensitivity=200;
        xml1_pc_map_gamepad(&mapped,&pad);REQUIRE(pad.rx>slow_x && pad.ry==32767);
        mapped.controls.mouse_dx=1;mapped.controls.mouse_dy=-1;
        xml1_pc_map_gamepad(&mapped,&pad);REQUIRE(pad.rx>16384 && pad.ry==-32767);
        mapped.controls.mouse_dx=0;mapped.controls.mouse_dy=0;
        xml1_pc_map_gamepad(&mapped,&pad);REQUIRE(!pad.rx && !pad.ry);
        mapped.controls.mouse_dx=INT32_MAX;mapped.controls.mouse_dy=INT32_MIN;
        xml1_pc_map_gamepad(&mapped,&pad);REQUIRE(pad.rx==32767 && pad.ry==-32767);
        mapped.controls.focused=0;xml1_pc_map_gamepad(&mapped,&pad);REQUIRE(!pad.rx && !pad.ry);
        for(unsigned keyboard=0;keyboard<4;++keyboard) {
            mapped.settings.keyboard_player=keyboard;mapped.settings.separate_controllers=1;
            int physical=0;
            for(unsigned port=0;port<4;++port) {
                int slot=xml1_pc_controller_slot(&mapped.settings,port);
                if(port==keyboard)REQUIRE(slot==-1);else REQUIRE(slot==physical++);
            }
        }
        auto ipc_profiles=defaults;ipc_profiles.keys[3][XML1_PC_FORWARD]='T';
        ipc_profiles.pad_bindings[3][XML1_PC_POWER1]=XML1_PAD_RTHUMB;
        REQUIRE(xml1_pc_channel_create(&ipc_profiles));
        REQUIRE(xml1_pc_channel_set_display("\\\\.\\DISPLAY17"));
        {
            float camera_output[]={123,4,-5,6,456};
            REQUIRE(!xml1_pc_filter_camera_shake(camera_output+1));
            REQUIRE(camera_output[1]==4 && camera_output[2]==-5 && camera_output[3]==6);
            auto muted=ipc_profiles;muted.view_shake=0;
            REQUIRE(xml1_pc_channel_set_settings(&muted));
            REQUIRE(xml1_pc_filter_camera_shake(camera_output+1));
            REQUIRE(camera_output[0]==123 && camera_output[4]==456);
            REQUIRE(camera_output[1]==0 && camera_output[2]==0 && camera_output[3]==0);
            REQUIRE(xml1_pc_channel_set_settings(&ipc_profiles));
            camera_output[1]=9;REQUIRE(!xml1_pc_filter_camera_shake(camera_output+1));
            REQUIRE(camera_output[1]==9);
        }
        Xml1PcInputSnapshot capabilities{};
        REQUIRE(xml1_pc_channel_read(&capabilities,1));REQUIRE(capabilities.fsaa_modes==1);
        REQUIRE(!xml1_pc_channel_set_fsaa_modes(8)); // invalid three-sample bit
        REQUIRE(xml1_pc_channel_set_fsaa_modes(1|(1<<2)|(1<<4)));
        REQUIRE(xml1_pc_channel_read(&capabilities,1));REQUIRE(capabilities.fsaa_modes==21);
        if(argc==2) {
            std::string command="\""+std::string(argv[1])+"\" --producer";
            STARTUPINFOA si{};si.cb=sizeof(si);PROCESS_INFORMATION pi{};
            REQUIRE(CreateProcessA(nullptr,command.data(),nullptr,nullptr,FALSE,CREATE_NO_WINDOW,nullptr,nullptr,&si,&pi));
            REQUIRE(WaitForSingleObject(pi.hProcess,10000)==WAIT_OBJECT_0);
            DWORD code;REQUIRE(GetExitCodeProcess(pi.hProcess,&code));
            CloseHandle(pi.hThread);CloseHandle(pi.hProcess);REQUIRE(code==0);
            char display[32]={};REQUIRE(xml1_pc_channel_get_display(display,sizeof(display)));
            REQUIRE(!std::strcmp(display,"\\\\.\\DISPLAY18"));
        } else {
            xml1_pc_channel_focus(1);xml1_pc_channel_key('W',1);xml1_pc_channel_key('W',0);
            xml1_pc_channel_key('A',1);xml1_pc_channel_mouse(320,240,120);
        }
        Xml1PcInputSnapshot s;
        REQUIRE(xml1_pc_channel_read(&s,1));REQUIRE(!s.controls.held['W']);
        REQUIRE(xml1_pc_channel_read(&s,0));REQUIRE(s.controls.held['W']);
        REQUIRE(s.controls.held['A'] && s.controls.mouse_x==320 && s.controls.wheel==120);
        REQUIRE(xml1_pc_channel_read(&s,0));REQUIRE(!s.controls.held['W'] && !s.controls.wheel);
        REQUIRE(s.controls.held['A']);
        xml1_pc_channel_focus(0);xml1_pc_channel_key('W',1);xml1_pc_channel_focus(1);
        REQUIRE(xml1_pc_channel_read(&s,0));REQUIRE(!s.controls.held['W'] && !s.controls.held['A']);
        xml1_pc_channel_request_menu();xml1_pc_channel_set_menu(1);
        REQUIRE(xml1_pc_channel_read(&s,1));REQUIRE(s.menu_requested==1 && s.menu_active);
        REQUIRE(xml1_pc_channel_set_settings(&loaded));
        REQUIRE(xml1_pc_channel_read(&s,1));REQUIRE(s.settings.keyboard_player==2);
        REQUIRE(xml1_pc_channel_native_pointer(1));
        REQUIRE(xml1_pc_channel_pointer_event(100,200,VK_LBUTTON,1,0,1920,1080));
        REQUIRE(xml1_pc_channel_pointer_event(100,200,VK_LBUTTON,0,0,1920,1080));
        REQUIRE(xml1_pc_channel_pointer_event(300,400,0,0,0,1920,1080));
        REQUIRE(xml1_pc_channel_read(&s,0));REQUIRE(!s.controls.held[VK_LBUTTON]);
        Xml1PcMenuPointer pointer{};
        REQUIRE(xml1_pc_channel_pointer_read(&pointer));
        REQUIRE(pointer.x==100 && pointer.y==200 && pointer.button==VK_LBUTTON);
        REQUIRE(pointer.width==1920 && pointer.height==1080);
        REQUIRE(pointer.buttons==1);
        REQUIRE(xml1_pc_channel_pointer_read(&pointer));
        REQUIRE(pointer.x==300 && pointer.y==400 && !pointer.button);
        REQUIRE(!pointer.buttons);
        REQUIRE(!xml1_pc_channel_pointer_read(&pointer));
        REQUIRE(xml1_pc_channel_pointer_event(320,240,0,0,-120,1280,720));
        REQUIRE(xml1_pc_channel_pointer_read(&pointer));
        REQUIRE(pointer.wheel==-120 && pointer.width==1280 && pointer.height==720);
        REQUIRE(xml1_pc_channel_pointer_event(-1,240,VK_LBUTTON,1,0,1280,720));
        REQUIRE(!xml1_pc_channel_pointer_read(&pointer));
        // A held drag and its out-of-window release remain separate even when
        // the consumer has not polled between moves. Outside presses are inert.
        REQUIRE(xml1_pc_channel_pointer_event(100,200,VK_LBUTTON,1,0,1280,720));
        REQUIRE(xml1_pc_channel_pointer_event(200,200,0,0,0,1280,720));
        REQUIRE(xml1_pc_channel_pointer_event(300,200,0,0,0,1280,720));
        REQUIRE(xml1_pc_channel_pointer_event(1400,200,VK_LBUTTON,0,0,1280,720));
        REQUIRE(xml1_pc_channel_pointer_read(&pointer));
        REQUIRE(pointer.button==VK_LBUTTON && pointer.buttons==1);
        REQUIRE(xml1_pc_channel_pointer_read(&pointer));
        REQUIRE(pointer.x==300 && pointer.buttons==1 && !pointer.button);
        REQUIRE(xml1_pc_channel_pointer_read(&pointer));
        REQUIRE(pointer.x==1400 && !pointer.buttons && !pointer.button);
        REQUIRE(!xml1_pc_channel_pointer_read(&pointer));
        REQUIRE(xml1_pc_channel_pointer_event(100,200,VK_LBUTTON,1,0,1280,720));
        xml1_pc_channel_pointer_cancel();
        REQUIRE(xml1_pc_channel_pointer_read(&pointer));
        REQUIRE(!pointer.width && !pointer.height && !pointer.buttons);
        REQUIRE(!xml1_pc_channel_pointer_read(&pointer));
        // Saturation must cancel a gesture, rather than retain a stale press.
        for(int i=0;i<17;++i)
            REQUIRE(xml1_pc_channel_pointer_event(100,200,0,0,120,1280,720));
        REQUIRE(xml1_pc_channel_pointer_read(&pointer));
        REQUIRE(!pointer.width && !pointer.height && !pointer.buttons);
        REQUIRE(!xml1_pc_channel_pointer_read(&pointer));
        xml1_pc_channel_focus(0);
        REQUIRE(xml1_pc_channel_pointer_event(100,200,VK_LBUTTON,1,0,1920,1080));
        xml1_pc_channel_focus(1);
        REQUIRE(xml1_pc_channel_pointer_read(&pointer));
        REQUIRE(!pointer.width && !pointer.height && !pointer.buttons);
        REQUIRE(!xml1_pc_channel_pointer_read(&pointer));
        REQUIRE(xml1_pc_channel_capture(1));
        REQUIRE(!xml1_pc_channel_pointer_event(100,200,VK_LBUTTON,1,0,1920,1080));
        xml1_pc_channel_key(VK_LBUTTON,1);
        REQUIRE(xml1_pc_channel_capture_key()==VK_LBUTTON);
        REQUIRE(xml1_pc_channel_capture(0));
        REQUIRE(xml1_pc_channel_capture_controller(2));
        xml1_pc_channel_controller_connection(2,1);
        Xml1PcInputSnapshot connection{};
        REQUIRE(xml1_pc_channel_read(&connection,1) && connection.connected_players==4);
        REQUIRE(!xml1_pc_channel_capture_source()); // availability alone cannot arm
        const unsigned a_source=1u<<XML1_PAD_A, axis_source=1u<<XML1_PAD_RY_NEG;
        xml1_pc_channel_controller_state(2,1,a_source,a_source);
        REQUIRE(!xml1_pc_channel_capture_source()); // entry button held
        xml1_pc_channel_controller_state(1,1,0,0);
        xml1_pc_channel_controller_state(2,1,a_source,a_source);
        REQUIRE(!xml1_pc_channel_capture_source()); // other player cannot arm
        xml1_pc_channel_controller_state(2,1,0,0);
        xml1_pc_channel_controller_state(2,1,axis_source,axis_source);
        REQUIRE(xml1_pc_channel_capture_source()==XML1_PAD_RY_NEG);
        xml1_pc_channel_controller_connection(2,0);
        REQUIRE(xml1_pc_channel_read(&connection,1) && connection.connected_players==0);
        xml1_pc_channel_controller_connection(2,1);
        xml1_pc_channel_controller_state(2,1,axis_source,axis_source);
        REQUIRE(!xml1_pc_channel_capture_source()); // no repeated held capture
        xml1_pc_channel_controller_state(2,1,0,axis_source);
        xml1_pc_channel_controller_state(2,1,axis_source,axis_source);
        REQUIRE(!xml1_pc_channel_capture_source()); // release hysteresis
        xml1_pc_channel_controller_state(2,0,0,0);
        xml1_pc_channel_controller_state(2,1,a_source,a_source);
        REQUIRE(!xml1_pc_channel_capture_source()); // reconnect held
        xml1_pc_channel_controller_state(2,1,0,0);
        xml1_pc_channel_controller_state(2,1,a_source,a_source);
        xml1_pc_channel_focus(0);xml1_pc_channel_focus(1);
        REQUIRE(!xml1_pc_channel_capture_source()); // focus discards pending result
        xml1_pc_channel_controller_state(2,1,a_source,a_source);
        REQUIRE(!xml1_pc_channel_capture_source());
        REQUIRE(xml1_pc_channel_capture(0));
        Xml1PcGamepad capture_pad{};capture_pad.rx=10000;
        REQUIRE(!xml1_pc_controller_sources(&capture_pad,0));
        REQUIRE(xml1_pc_controller_sources(&capture_pad,1)==(1u<<XML1_PAD_RX_POS));
        capture_pad.rx=-32768;capture_pad.analog[7]=128;
        REQUIRE(xml1_pc_controller_sources(&capture_pad,0)==((1u<<XML1_PAD_RX_NEG)|(1u<<XML1_PAD_RT)));
        REQUIRE(xml1_pc_channel_pointer_event(100,200,VK_LBUTTON,1,0,1920,1080));
        REQUIRE(xml1_pc_channel_native_pointer(0));
        REQUIRE(!xml1_pc_channel_pointer_read(&pointer));
        REQUIRE(!xml1_pc_channel_pointer_event(100,200,VK_LBUTTON,1,0,1920,1080));
        if(argc==2) {
            REQUIRE(xml1_pc_channel_native_pointer(1));
            std::string command="\""+std::string(argv[1])+"\" --pointer-producer";
            STARTUPINFOA si{};si.cb=sizeof(si);PROCESS_INFORMATION pi{};
            REQUIRE(CreateProcessA(nullptr,command.data(),nullptr,nullptr,FALSE,CREATE_NO_WINDOW,nullptr,nullptr,&si,&pi));
            REQUIRE(WaitForSingleObject(pi.hProcess,10000)==WAIT_OBJECT_0);
            DWORD code;REQUIRE(GetExitCodeProcess(pi.hProcess,&code));
            CloseHandle(pi.hThread);CloseHandle(pi.hProcess);REQUIRE(code==0);
            REQUIRE(xml1_pc_channel_pointer_read(&pointer));
            REQUIRE(!pointer.width && !pointer.height && !pointer.buttons);
            REQUIRE(xml1_pc_channel_pointer_read(&pointer));
            REQUIRE(pointer.button==VK_LBUTTON && pointer.x==945 && pointer.y==510);
            REQUIRE(pointer.width==1920 && pointer.height==1080);
            REQUIRE(xml1_pc_channel_native_pointer(0));
        }
        xml1_pc_channel_close();
        // Native gamevar updates must survive edits, apply and a reopened menu,
        // without writing menu assets or retaining a reused native item binding.
        REQUIRE(xml1_pc_settings_save(path.u8string().c_str(),&defaults,error,sizeof(error)));
        auto previous_cwd=std::filesystem::current_path();
        std::filesystem::current_path(dir);
        REQUIRE(xml1_pc_native_token("pcnative_open"));
        xml1_pc_native_item(101,"pcnative_resolution");
        char label[160]={};
        REQUIRE(xml1_pc_channel_create(&defaults));xml1_pc_channel_focus(1);
        xml1_pc_native_item(98,"pcnative_prompt_back");
        REQUIRE(xml1_pc_native_prompt_pending(98));
        xml1_pc_native_prompt_original(98,"~1B Back");
        REQUIRE(!xml1_pc_native_prompt_pending(98));
        xml1_pc_channel_controller_active();
        REQUIRE(xml1_pc_native_value(98,label,sizeof(label)) && !std::strcmp(label,"~1B Back"));
        xml1_pc_channel_key('W',1);
        REQUIRE(xml1_pc_native_value(98,label,sizeof(label)) && !std::strcmp(label,"[Backspace] Back"));
        // Simulate native focus refresh replacing the interned text while the
        // desired keyboard prompt is unchanged. Stable handles do not churn text.
        xml1_pc_native_text_handle(98,100);
        REQUIRE(xml1_pc_native_value(98,label,sizeof(label)) && !std::strcmp(label,"[Backspace] Back"));
        xml1_pc_native_text_handle(98,100);
        REQUIRE(!xml1_pc_native_value(98,label,sizeof(label)));
        xml1_pc_native_text_handle(98,101);
        REQUIRE(xml1_pc_native_value(98,label,sizeof(label)) && !std::strcmp(label,"[Backspace] Back"));
        xml1_pc_channel_controller_active();
        REQUIRE(xml1_pc_native_value(98,label,sizeof(label)) && !std::strcmp(label,"~1B Back"));
        xml1_pc_native_item(98,nullptr);REQUIRE(!xml1_pc_native_prompt_pending(98));
        xml1_pc_channel_close();
        REQUIRE(xml1_pc_native_value(101,label,sizeof(label)));
        REQUIRE(!std::strcmp(label,"Resolution: 1920x1080"));
        xml1_pc_native_item(95,"pcnative_resolution_value");
        REQUIRE(xml1_pc_native_value(95,label,sizeof(label)) && !std::strcmp(label,"1920x1080"));
        REQUIRE(!xml1_pc_native_value(101,label,sizeof(label)));
        REQUIRE(xml1_pc_native_token("pcnative_resolution"));
        REQUIRE(xml1_pc_native_value(101,label,sizeof(label)) && !std::strcmp(label,"Resolution: 2560x1440"));
        REQUIRE(xml1_pc_native_token("pcnative_resolution"));
        REQUIRE(xml1_pc_native_value(101,label,sizeof(label)) && !std::strcmp(label,"Resolution: 3840x2160"));
        REQUIRE(xml1_pc_native_value(95,label,sizeof(label)) && !std::strcmp(label,"3840x2160"));
        REQUIRE(xml1_pc_native_token("pcnative_resolution"));
        REQUIRE(!xml1_pc_native_value(101,label,4));
        REQUIRE(xml1_pc_native_value(101,label,sizeof(label)));
        REQUIRE(!std::strcmp(label,"Resolution: 1280x720"));
        REQUIRE(xml1_pc_native_value(95,label,sizeof(label)) && !std::strcmp(label,"1280x720"));
        xml1_pc_native_item(95,nullptr);
        xml1_pc_native_item(102,"pcnative_keyboard");
        REQUIRE(xml1_pc_native_value(102,label,sizeof(label)));
        REQUIRE(!std::strcmp(label,"Keyboard / mouse: On"));
        REQUIRE(xml1_pc_native_token("pcnative_keyboard"));
        REQUIRE(xml1_pc_native_value(102,label,sizeof(label)));
        REQUIRE(!std::strcmp(label,"Keyboard / mouse: Off"));
        REQUIRE(xml1_pc_native_token("pcnative_apply"));
        Xml1PcSettings saved_keyboard{};
        REQUIRE(xml1_pc_settings_load("pc-settings.ini",&saved_keyboard,error,sizeof(error)));
        REQUIRE(!saved_keyboard.keyboard_enabled);
        REQUIRE(xml1_pc_native_token("pcnative_defaults"));
        REQUIRE(xml1_pc_native_value(101,label,sizeof(label)));
        REQUIRE(!std::strcmp(label,"Resolution: 1920x1080"));
        REQUIRE(xml1_pc_native_token("pcnative_cancel"));
        REQUIRE(!xml1_pc_native_value(101,label,sizeof(label)));
        // Normal Options prompts work without opening an Advanced transaction.
        REQUIRE(xml1_pc_channel_create(&defaults));xml1_pc_channel_focus(1);
        xml1_pc_native_item(94,"pcnative_view_shake");
        xml1_pc_native_owner(94,0x2900);
        REQUIRE(xml1_pc_native_value(94,label,sizeof(label)) && !std::strcmp(label,"On"));
        REQUIRE(xml1_pc_native_token("pcnative_shake"));
        REQUIRE(xml1_pc_native_value(94,label,sizeof(label)) && !std::strcmp(label,"Off"));
        float native_shake[3]={1,2,3};
        REQUIRE(!xml1_pc_filter_camera_shake(native_shake)); // Draft cannot change gameplay.
        xml1_pc_native_closed(0x2900); // Back discards it.
        xml1_pc_native_owner(94,0x2901);
        REQUIRE(xml1_pc_native_value(94,label,sizeof(label)) && !std::strcmp(label,"On"));
        REQUIRE(xml1_pc_native_token("pcnative_shake"));
        REQUIRE(xml1_pc_native_token("pcnative_shake_accept"));
        REQUIRE(xml1_pc_filter_camera_shake(native_shake));
        REQUIRE(xml1_pc_settings_load("pc-settings.ini",&saved_keyboard,error,sizeof(error)));
        REQUIRE(!saved_keyboard.view_shake && !saved_keyboard.keyboard_enabled);
        xml1_pc_native_closed(0x2901);
        xml1_pc_native_owner(94,0x2902);
        REQUIRE(xml1_pc_native_token("pcnative_shake"));
        REQUIRE(xml1_pc_native_token("pcnative_shake_accept"));
        native_shake[0]=4;REQUIRE(!xml1_pc_filter_camera_shake(native_shake));
        xml1_pc_native_closed(0x2902);xml1_pc_native_item(94,nullptr);
        xml1_pc_native_item(97,"pcnative_prompt_options_back");
        REQUIRE(!xml1_pc_native_value(97,label,sizeof(label)));
        xml1_pc_native_prompt_original(97,"~1B Back");
        xml1_pc_channel_controller_active();
        REQUIRE(xml1_pc_native_value(97,label,sizeof(label)) && !std::strcmp(label,"~1B Back"));
        xml1_pc_channel_key('W',1);
        REQUIRE(xml1_pc_native_value(97,label,sizeof(label)) && !std::strcmp(label,"[Backspace] Back"));
        xml1_pc_channel_controller_active();
        REQUIRE(xml1_pc_native_value(97,label,sizeof(label)) && !std::strcmp(label,"~1B Back"));
        xml1_pc_native_item(96,"pcnative_prompt_options_advanced");
        xml1_pc_native_prompt_original(96,"Advanced Options");
        REQUIRE(xml1_pc_native_value(96,label,sizeof(label)) && !std::strcmp(label,"Advanced Options"));
        xml1_pc_native_owner(96,900);
        xml1_pc_native_command(96,"pcnative_open;openmenu options_controller_xbox");
        xml1_pc_native_menu(900);
        xml1_pc_channel_key(VK_SPACE,1);
        xml1_pc_native_frame(1); // Held on entering must not activate.
        REQUIRE(!xml1_pc_native_activate(96));
        REQUIRE(xml1_pc_native_value(96,label,sizeof(label)) && !std::strcmp(label,"[Space] Advanced Options"));
        xml1_pc_channel_key(VK_SPACE,0);xml1_pc_native_frame(2);
        xml1_pc_channel_key(VK_SPACE,1);xml1_pc_native_frame(3);
        REQUIRE(xml1_pc_native_activate(96));
        xml1_pc_native_frame(4);REQUIRE(!xml1_pc_native_activate(96));
        xml1_pc_channel_key(VK_SPACE,0);xml1_pc_native_frame(5);
        xml1_pc_native_flags(96,0); // Hidden/disabled targets cannot open.
        xml1_pc_channel_key(VK_SPACE,1);xml1_pc_native_frame(6);
        REQUIRE(!xml1_pc_native_activate(96));
        xml1_pc_native_menu(901);xml1_pc_channel_key(VK_SPACE,0);xml1_pc_native_frame(7);
        xml1_pc_native_flags(96,4);xml1_pc_channel_key(VK_SPACE,1);xml1_pc_native_frame(8);
        REQUIRE(!xml1_pc_native_activate(96)); // A different menu owns input.
        xml1_pc_native_menu(0);xml1_pc_native_item(96,nullptr);
        xml1_pc_native_item(97,nullptr);xml1_pc_channel_close();
        REQUIRE(xml1_pc_native_token("pcnative_open"));
        REQUIRE(xml1_pc_native_value(101,label,sizeof(label)));
        REQUIRE(!std::strcmp(label,"Resolution: 1280x720"));
        xml1_pc_native_item(101,nullptr);
        REQUIRE(!xml1_pc_native_value(101,label,sizeof(label)));
        REQUIRE(!xml1_pc_native_token("openmenu"));
        REQUIRE(!std::filesystem::exists("ui"));
        REQUIRE(xml1_pc_channel_create(&defaults));
        xml1_pc_channel_focus(1);
        xml1_pc_native_item(299,"pcnative_fsaa");
        REQUIRE(xml1_pc_channel_set_fsaa_modes(1|(1<<4))); // device without 2x/8x
        REQUIRE(xml1_pc_native_token("pcnative_fsaa"));
        REQUIRE(xml1_pc_native_value(299,label,sizeof(label)));
        REQUIRE(!std::strcmp(label,"FSAA: 4x"));
        xml1_pc_native_item(298,"pcnative_fsaa_value");
        REQUIRE(xml1_pc_native_value(298,label,sizeof(label)) && !std::strcmp(label,"4x"));
        REQUIRE(xml1_pc_native_token("pcnative_fsaa"));
        REQUIRE(xml1_pc_native_value(299,label,sizeof(label)));
        REQUIRE(!std::strcmp(label,"FSAA: Off"));
        REQUIRE(xml1_pc_native_value(298,label,sizeof(label)) && !std::strcmp(label,"Off"));
        xml1_pc_native_item(298,nullptr);
        xml1_pc_native_item(202,"pcnative_key_0_0");
        REQUIRE(xml1_pc_native_token("pcnative_bindings_controller"));
        REQUIRE(xml1_pc_native_value(202,label,sizeof(label)) && !std::strcmp(label,"Left stick up"));
        REQUIRE(xml1_pc_native_token("pcnative_bind_0_0"));
        xml1_pc_channel_controller_state(0,1,0,0);
        xml1_pc_channel_controller_state(0,1,1u<<XML1_PAD_RTHUMB,1u<<XML1_PAD_RTHUMB);
        REQUIRE(xml1_pc_native_value(202,label,sizeof(label)) && !std::strcmp(label,"Right stick click"));
        REQUIRE(xml1_pc_channel_read(&s,1) && !s.menu_active);
        REQUIRE(xml1_pc_native_token("pcnative_bind_0_0"));
        xml1_pc_channel_key(VK_ESCAPE,1);xml1_pc_channel_key(VK_ESCAPE,0);
        xml1_pc_native_value(202,label,sizeof(label));
        REQUIRE(!std::strcmp(label,"Right stick click"));
        REQUIRE(xml1_pc_native_token("pcnative_bind_0_0"));
        xml1_pc_channel_key(VK_DELETE,1);xml1_pc_channel_key(VK_DELETE,0);
        REQUIRE(xml1_pc_native_value(202,label,sizeof(label)) && !std::strcmp(label,"Unbound"));
        REQUIRE(xml1_pc_native_token("pcnative_bindings_keyboard"));
        xml1_pc_channel_key(VK_RETURN,1);
        REQUIRE(xml1_pc_native_token("pcnative_bind_0_0"));
        xml1_pc_channel_key(VK_RETURN,1); // auto-repeat of the activation key
        REQUIRE(!xml1_pc_channel_capture_key());
        xml1_pc_channel_key(VK_RETURN,0);
        REQUIRE(xml1_pc_channel_read(&s,0));REQUIRE(s.menu_active);
        xml1_pc_channel_key('T',1);xml1_pc_channel_key('T',0);
        REQUIRE(xml1_pc_channel_read(&s,0)); // ordinary consumer cannot lose capture
        REQUIRE(xml1_pc_native_value(202,label,sizeof(label)));
        REQUIRE(!std::strcmp(label,"T"));
        REQUIRE(xml1_pc_channel_read(&s,0));REQUIRE(!s.menu_active && !s.controls.held['T']);
        REQUIRE(xml1_pc_native_token("pcnative_bind_0_0"));
        xml1_pc_channel_key(VK_ESCAPE,1);xml1_pc_channel_key(VK_ESCAPE,0);
        xml1_pc_native_value(202,label,sizeof(label));
        REQUIRE(!std::strcmp(label,"T"));
        REQUIRE(xml1_pc_native_token("pcnative_bind_0_0"));
        xml1_pc_channel_key(VK_DELETE,1);xml1_pc_channel_key(VK_DELETE,0);
        REQUIRE(xml1_pc_native_value(202,label,sizeof(label)));
        REQUIRE(!std::strcmp(label,"Unbound"));
        std::set<std::string> listed_actions;
        for(unsigned page=0;page<5;++page) {
            for(unsigned row=0;row<7;++row) {
                auto variable="pcnative_rowname_"+std::to_string(row)+"_0";
                xml1_pc_native_item(203,variable.c_str());
                REQUIRE(xml1_pc_native_value(203,label,sizeof(label)));
                listed_actions.insert(label);
            }
            REQUIRE(xml1_pc_native_token("pcnative_scroll_next"));
        }
        REQUIRE(listed_actions.size()==XML1_PC_ACTION_COUNT);
        xml1_pc_native_item(203,"pcnative_rowkey_6_1");
        REQUIRE(xml1_pc_native_token("pcnative_rowbind_6_1"));
        xml1_pc_channel_key('Z',1);xml1_pc_channel_key('Z',0);
        REQUIRE(xml1_pc_native_value(203,label,sizeof(label)));
        REQUIRE(!std::strcmp(label,"Z"));
        REQUIRE(xml1_pc_native_token("pcnative_rowbind_7_0"));
        REQUIRE(xml1_pc_channel_read(&s,0));REQUIRE(!s.menu_active);
        // Opening a child closes its parent internally. Only closing the
        // registered Advanced Options owner may discard the current draft.
        xml1_pc_native_item(204,"pcnative_resolution");
        xml1_pc_native_owner(204,0x4000);
        xml1_pc_native_closed(0x3000);
        REQUIRE(xml1_pc_native_token("pcnative_resolution"));
        REQUIRE(xml1_pc_native_value(204,label,sizeof(label)));
        REQUIRE(!std::strcmp(label,"Resolution: 1920x1080"));
        REQUIRE(xml1_pc_native_token("pcnative_bind_0_0"));
        REQUIRE(xml1_pc_channel_read(&s,0));REQUIRE(s.menu_active);
        xml1_pc_native_closed(0x4000);
        REQUIRE(xml1_pc_channel_read(&s,0));REQUIRE(!s.menu_active);
        REQUIRE(!xml1_pc_native_value(204,label,sizeof(label)));
        REQUIRE(xml1_pc_native_token("pcnative_open"));
        xml1_pc_native_item(204,"pcnative_resolution");
        REQUIRE(xml1_pc_native_value(204,label,sizeof(label)));
        REQUIRE(!std::strcmp(label,"Resolution: 1280x720"));
        xml1_pc_native_menu(0x4000);
        xml1_pc_native_vertex_owner(0x04201000,204);
        REQUIRE(xml1_pc_native_vertex_item(0x04201000)==204);
        xml1_pc_native_vertex_copy(0x83001000,0x04201000,48);
        REQUIRE(xml1_pc_native_vertex_item(0x03001000)==204);
        xml1_pc_native_vertex_copy(0x83001000,0x05000000,48);
        REQUIRE(!xml1_pc_native_vertex_item(0x03001000));
        xml1_pc_native_vertex_copy(0x04201018,0x04201000,48);
        REQUIRE(xml1_pc_native_vertex_item(0x04201018)==204);
        xml1_pc_native_command(204,"pcnative_resolution");
        xml1_pc_native_owner(204,0x4000);
        xml1_pc_channel_focus(1);
        xml1_pc_native_render_vertex(204,.2f,.25f,10);
        xml1_pc_native_render_vertex(204,.35f,.30f,10);
        REQUIRE(xml1_pc_channel_pointer_event(500,300,VK_LBUTTON,1,0,1920,1080));
        REQUIRE(xml1_pc_channel_pointer_event(500,300,VK_LBUTTON,0,0,1920,1080));
        xml1_pc_native_frame(10);
        REQUIRE(!xml1_pc_native_activate(203));
        REQUIRE(xml1_pc_native_activate(204));
        REQUIRE(!xml1_pc_native_activate(204));
        // A stale rendered rectangle must not remain clickable next frame.
        REQUIRE(xml1_pc_channel_pointer_event(500,300,VK_LBUTTON,1,0,1920,1080));
        REQUIRE(xml1_pc_channel_pointer_event(500,300,VK_LBUTTON,0,0,1920,1080));
        xml1_pc_native_frame(11);
        REQUIRE(!xml1_pc_native_activate(204));
        // Client scaling uses the event's actual viewport dimensions.
        xml1_pc_native_render_vertex(204,.2f,.25f,12);
        xml1_pc_native_render_vertex(204,.35f,.30f,12);
        REQUIRE(xml1_pc_channel_pointer_event(320,200,VK_LBUTTON,1,0,1280,720));
        REQUIRE(xml1_pc_channel_pointer_event(320,200,VK_LBUTTON,0,0,1280,720));
        xml1_pc_native_frame(12);
        REQUIRE(xml1_pc_native_activate(204));
        REQUIRE(xml1_pc_native_hover(204));
        REQUIRE(!xml1_pc_native_hover(204));
        REQUIRE(xml1_pc_channel_pointer_event(330,200,0,0,0,1280,720));
        xml1_pc_native_frame(12);
        REQUIRE(xml1_pc_native_hover(204));
        REQUIRE(!xml1_pc_native_activate(204));
        // Consuming hover does not continually steal focus from keyboard/pad.
        xml1_pc_native_frame(12);
        REQUIRE(!xml1_pc_native_hover(204));
        xml1_pc_native_item(204,nullptr);
        REQUIRE(!xml1_pc_native_vertex_item(0x04201000));
        REQUIRE(!xml1_pc_native_vertex_item(0x04201018));
        // Ordinary game menus work without an active PC settings draft.
        REQUIRE(xml1_pc_native_token("pcnative_cancel"));
        xml1_pc_native_command(205,"openmenu options");
        xml1_pc_native_owner(205,0x5000);
        xml1_pc_native_menu(0x5000);
        REQUIRE(xml1_pc_native_interested(205));
        xml1_pc_native_render_vertex(205,.2f,.25f,14);
        xml1_pc_native_render_vertex(205,.35f,.30f,14);
        REQUIRE(xml1_pc_channel_pointer_event(320,200,VK_LBUTTON,1,0,1280,720));
        REQUIRE(xml1_pc_channel_pointer_event(320,200,VK_LBUTTON,0,0,1280,720));
        xml1_pc_native_frame(14);
        REQUIRE(xml1_pc_native_activate(205));
        for(unsigned flags:{0u,6u,12u}) {
            xml1_pc_native_flags(205,flags);
            REQUIRE(xml1_pc_channel_pointer_event(320,200,VK_LBUTTON,1,0,1280,720));
            REQUIRE(xml1_pc_channel_pointer_event(320,200,VK_LBUTTON,0,0,1280,720));
            xml1_pc_native_frame(14);
            REQUIRE(!xml1_pc_native_activate(205));
        }
        // Native game variables have no usecmd; their subtype supplies Use.
        xml1_pc_native_item(206,"music");
        xml1_pc_native_owner(206,0x5000);
        REQUIRE(xml1_pc_native_interested(206));
        xml1_pc_native_render_vertex(206,.2f,.25f,15);
        xml1_pc_native_render_vertex(206,.35f,.30f,15);
        REQUIRE(xml1_pc_channel_pointer_event(320,200,VK_LBUTTON,1,0,1280,720));
        REQUIRE(xml1_pc_channel_pointer_event(320,200,VK_LBUTTON,0,0,1280,720));
        xml1_pc_native_frame(15);
        REQUIRE(xml1_pc_native_activate(206));
        char native_text[64]{};
        REQUIRE(!xml1_pc_native_value(206,native_text,sizeof(native_text)));
        xml1_pc_native_adjustable(206,1);
        REQUIRE(xml1_pc_channel_pointer_event(320,200,0,0,-120,1280,720));
        xml1_pc_native_frame(15);
        REQUIRE(xml1_pc_native_adjust(206)==-1);
        REQUIRE(xml1_pc_native_adjust(206)==0);
        REQUIRE(!xml1_pc_native_activate(206));
        REQUIRE(xml1_pc_channel_pointer_event(320,200,0,0,120,1280,720));
        xml1_pc_native_frame(15);
        xml1_pc_native_item(207,"sfxvolume");
        xml1_pc_native_owner(207,0x5000);
        xml1_pc_native_slider_bounds(207,.2f,.4f,.8f,.45f,16);
        REQUIRE(xml1_pc_channel_pointer_event(500,420,VK_LBUTTON,1,0,1000,1000));
        xml1_pc_native_frame(16);
        float volume=0;
        REQUIRE(xml1_pc_native_slider_value(207,&volume) && std::abs(volume-.5f)<.0001f);
        REQUIRE(!xml1_pc_native_activate(207));
        REQUIRE(xml1_pc_channel_pointer_event(1500,420,0,0,0,1000,1000));
        xml1_pc_native_frame(16);
        REQUIRE(xml1_pc_native_slider_value(207,&volume) && volume==1);
        REQUIRE(xml1_pc_channel_pointer_event(-100,420,VK_LBUTTON,0,0,1000,1000));
        xml1_pc_native_frame(16);
        REQUIRE(xml1_pc_native_slider_value(207,&volume) && volume==0);
        REQUIRE(xml1_pc_channel_pointer_event(500,420,0,0,0,1000,1000));
        xml1_pc_native_frame(16);
        REQUIRE(!xml1_pc_native_slider_value(207,&volume));
        REQUIRE(xml1_pc_channel_pointer_event(500,420,VK_LBUTTON,1,0,1000,1000));
        xml1_pc_native_frame(16);
        xml1_pc_channel_pointer_cancel();xml1_pc_native_frame(16);
        REQUIRE(!xml1_pc_native_slider_value(207,&volume));
        REQUIRE(xml1_pc_channel_pointer_event(500,420,VK_LBUTTON,1,0,1000,1000));
        xml1_pc_native_frame(16);
        xml1_pc_channel_focus(0);xml1_pc_channel_focus(1);xml1_pc_native_frame(16);
        REQUIRE(!xml1_pc_native_slider_value(207,&volume));
        // Stale geometry cannot start a gesture on a later frame/menu.
        REQUIRE(xml1_pc_channel_pointer_event(500,420,VK_LBUTTON,1,0,1000,1000));
        xml1_pc_native_frame(17);
        REQUIRE(!xml1_pc_native_slider_value(207,&volume));
        xml1_pc_native_menu(0);
        REQUIRE(xml1_pc_native_adjust(206)==0);
        REQUIRE(!xml1_pc_native_interested(205));
        REQUIRE(!xml1_pc_channel_pointer_event(320,200,VK_LBUTTON,1,0,1280,720));
        xml1_pc_channel_close();
        std::filesystem::current_path(previous_cwd);
        std::filesystem::remove(path);std::filesystem::remove(dir);
        std::puts("PC settings, transactions, focus, short presses and input channel passed");return 0;
    } catch(const std::exception &e) {std::fprintf(stderr,"FAIL: %s\n",e.what());return 1;}
}
