#pragma once
#include "input/pc_input_channel.h"
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <stdexcept>
#include "aspect_layout.h"

// Transport window input to the game. Options are rendered by the game's
// native menu system from its packaged IGB resources, never by this worker.
namespace pc_ui {
static unsigned client_width=1280,client_height=720;
static unsigned aspect_width=1280,aspect_height=720;
static void input_key(unsigned value,bool down) {
    xml1_pc_channel_key(value,down);
}
static void input_mouse(int x,int y,unsigned button,bool down,int wheel) {
    const auto inner=xml1_fit_content(client_width,client_height,aspect_width,aspect_height);
    x-=inner.x;y-=inner.y;
    if(!xml1_pc_channel_pointer_event(x,y,button,down,wheel,inner.width,inner.height)) {
        if((x<0 || y<0 || x>=inner.width || y>=inner.height) && (down || wheel))return;
        xml1_pc_channel_mouse(x,y,wheel);
        if(button)xml1_pc_channel_key(button,down);
    }
}
static void test_input() {
    // Explicit process-local fixture. Never sends a message to a HWND or the OS.
    const char *path=std::getenv("XML1_PC_TEST_INPUT");if(!path || !*path)return;
    FILE *file=std::fopen(path,"rb");if(!file)return;
    char line[128]={},command[24]={},extra;unsigned id=0;int a=0,b=0,c=0;
    bool complete=std::fgets(line,sizeof(line),file) && std::strchr(line,'\n');std::fclose(file);
    if(!complete)return;
    int fields=std::sscanf(line,"%u %23s %d %d %d %c",&id,command,&a,&b,&c,&extra);
    static unsigned previous=0;if(id<=previous)return;
    if(fields==3 && !std::strcmp(command,"focus"))xml1_pc_channel_focus(a);
    else if(fields==3 && !std::strcmp(command,"device") && a==0)xml1_pc_channel_controller_active();
    else if(fields==3 && (!std::strcmp(command,"down") || !std::strcmp(command,"up")) && a>=0 && a<256)
        input_key((unsigned)a,!std::strcmp(command,"down"));
    else if(fields==5 && !std::strcmp(command,"click") && (c==1 || c==2 || c==4)) {
        input_mouse(a,b,c,true,0);input_mouse(a,b,c,false,0);
    } else if(fields==5 && (!std::strcmp(command,"mousedown") || !std::strcmp(command,"mouseup")) &&
              (c==1 || c==2 || c==4)) {
        input_mouse(a,b,c,!std::strcmp(command,"mousedown"),0);
    } else if(fields==5 && !std::strcmp(command,"mouse"))input_mouse(a,b,0,false,c);
    else throw std::runtime_error("Malformed process-local PC input fixture");
    previous=id;std::printf("[PC INPUT TEST] %s",line);
}
static void update() {test_input();}
}
