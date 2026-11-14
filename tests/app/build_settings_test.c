#include "app/build_settings.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#define CHECK(x) do {if(!(x)){fprintf(stderr,"FAIL line %d: %s\n",__LINE__,#x);exit(1);}}while(0)
static void put(const char *path,const char *text) {FILE *f=fopen(path,"wb");CHECK(f);fputs(text,f);fclose(f);}
int main(void) {
    char temp[MAX_PATH],path[MAX_PATH],error[256];Xml1BuildSettings s;
    CHECK(GetTempPathA(sizeof(temp),temp));CHECK(GetTempFileNameA(temp,"xbs",0,path));
    const char *values[]={"1","true","TRUE","0","false","FALSE"};
    for(unsigned i=0;i<6;++i) {
        char text[256];snprintf(text,sizeof(text),"[BUILD]\nPreferFilesLoose = %s\n",values[i]);put(path,text);
        CHECK(xml1_read_build_settings(path,&s,error,sizeof(error)));CHECK(s.prefer_files_loose==(i<3));
        snprintf(text,sizeof(text),"[BUILD]\nmodderMode = %s\n",values[i]);put(path,text);
        CHECK(xml1_read_build_settings(path,&s,error,sizeof(error)));CHECK(s.modder_mode==(i<3));
        snprintf(text,sizeof(text),"[BUILD]\ndangerRoomUnlockAll = %s\n",values[i]);put(path,text);
        CHECK(xml1_read_build_settings(path,&s,error,sizeof(error)));CHECK(s.danger_room_unlock_all==(i<3));
        snprintf(text,sizeof(text),"[BUILD]\nperformanceLogging = %s\n",values[i]);put(path,text);
        CHECK(xml1_read_build_settings(path,&s,error,sizeof(error)));CHECK(s.performance_logging==(i<3));
    }
    put(path,"[BUILD]\nDefaultTextLanguage=fre\nAllowedTextLanguages=eng, fre, ger\n");
    CHECK(xml1_read_build_settings(path,&s,error,sizeof(error)));CHECK(!strcmp(s.text_language,"fre"));CHECK(s.prefer_files_loose);
    const char *invalid[]={"performanceLogging=yes","modderMode=yes","dangerRoomUnlockAll=yes","PreferFilesLoose=yes","DefaultTextLanguage=zzz","DefaultMovieLanguage=fre","AllowedTextLanguages=eng,","AllowedTextLanguages=","bad line"};
    for(unsigned i=0;i<sizeof(invalid)/sizeof(invalid[0]);++i) {
        char text[256];snprintf(text,sizeof(text),"[BUILD]\n%s\n",invalid[i]);put(path,text);
        CHECK(!xml1_read_build_settings(path,&s,error,sizeof(error)));CHECK(*error);
    }
    CHECK(DeleteFileA(path));CHECK(xml1_read_build_settings(path,&s,error,sizeof(error)));CHECK(s.prefer_files_loose);CHECK(!strcmp(s.text_language,"eng"));CHECK(!s.modder_mode);CHECK(!s.danger_room_unlock_all);CHECK(s.performance_logging);
    CHECK(s.graphics_adapter==-1);
    CHECK(!*s.custom_shader);
    put(path,"[BUILD]\nCustomShader = shaders/my effect.ps\n");
    CHECK(xml1_read_build_settings(path,&s,error,sizeof(error)));CHECK(!strcmp(s.custom_shader,"shaders/my effect.ps"));
    put(path,"[BUILD]\nCustomShader =\n");CHECK(xml1_read_build_settings(path,&s,error,sizeof(error)));CHECK(!*s.custom_shader);
    char oversized[300];memset(oversized,'a',sizeof(oversized));oversized[sizeof(oversized)-1]=0;
    char shader_ini[350];snprintf(shader_ini,sizeof(shader_ini),"[BUILD]\nCustomShader=%s\n",oversized);put(path,shader_ini);
    CHECK(!xml1_read_build_settings(path,&s,error,sizeof(error)));
    put(path,"[BUILD]\ngraphicsAdapter=1\n");CHECK(xml1_read_build_settings(path,&s,error,sizeof(error)));CHECK(s.graphics_adapter==1);
    put(path,"[BUILD]\ngraphicsAdapter=auto\n");CHECK(xml1_read_build_settings(path,&s,error,sizeof(error)));CHECK(s.graphics_adapter==-1);
    put(path,"[BUILD]\ngraphicsAdapter=-2\n");CHECK(!xml1_read_build_settings(path,&s,error,sizeof(error)));
    put(path,"[BUILD]\ngraphicsAdapter=1bad\n");CHECK(!xml1_read_build_settings(path,&s,error,sizeof(error)));CHECK(DeleteFileA(path));
    puts("Build settings parsing/defaults/validation passed");return 0;
}
