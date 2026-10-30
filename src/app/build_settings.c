#include "app/build_settings.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <errno.h>

Xml1BuildSettings xml1_build_settings={1,"eng","eng","eng",0,1,-1,0,1,"texturepack"};
int xml1_prefer_files_loose(void) { return xml1_build_settings.prefer_files_loose; }
static char *trim(char *s) {
    while(isspace((unsigned char)*s)) ++s;
    char *end=s+strlen(s);
    while(end>s && isspace((unsigned char)end[-1])) *--end=0;
    return s;
}
static int equal(const char *a,const char *b) {
    while(*a && *b) if(tolower((unsigned char)*a++)!=tolower((unsigned char)*b++)) return 0;
    return *a==*b;
}
static int fail(char *error,unsigned size,const char *message) {
    if(size) snprintf(error,size,"%s",message);
    return 0;
}
static int language(const char *s) {
    static const char *codes[]={"eng","fre","ger","ita","spa","pol","rus"};
    for(unsigned i=0;i<sizeof(codes)/sizeof(codes[0]);++i) if(equal(s,codes[i])) return 1;
    return 0;
}
int xml1_read_build_settings(const char *path,Xml1BuildSettings *out,char *error,unsigned size) {
    Xml1BuildSettings settings={1,"eng","eng","eng",0,1,-1,0,1,"texturepack"};
    char allowed[3][128]={"eng,fre,ger","eng","eng"};
    char *defaults[]={settings.text_language,settings.movie_language,settings.audio_language};
    const char *allow_keys[]={"AllowedTextLanguages","AllowedMovieLanguages","AllowedAudioLanguages"};
    const char *default_keys[]={"DefaultTextLanguage","DefaultMovieLanguage","DefaultAudioLanguage"};
    FILE *file=fopen(path,"rb");
    if(!file) { if(errno==ENOENT) { *out=settings; return 1; } return fail(error,size,"Cannot read build.ini"); }
    char line[512];int build=0,ok=1;
    while(fgets(line,sizeof(line),file)) {
        if(!strchr(line,'\n') && !feof(file)) { ok=fail(error,size,"build.ini line is too long");break; }
        char *s=trim(line);
        if((unsigned char)s[0]==0xef && (unsigned char)s[1]==0xbb && (unsigned char)s[2]==0xbf) s+=3;
        if(!*s || *s==';' || *s=='#') continue;
        if(*s=='[') { build=equal(s,"[BUILD]");continue; }
        if(!build) continue;
        char *value=strchr(s,'=');
        if(!value) { ok=fail(error,size,"Expected key=value in [BUILD]");break; }
        *value++=0;s=trim(s);value=trim(value);
        char *comment=strchr(value,';');if(comment) {*comment=0;value=trim(value);}
        if(equal(s,"PreferFilesLoose")) {
            if(equal(value,"1")||equal(value,"true")) settings.prefer_files_loose=1;
            else if(equal(value,"0")||equal(value,"false")) settings.prefer_files_loose=0;
            else {ok=fail(error,size,"PreferFilesLoose must be 1, true, 0, or false");break;}
        }
        if(equal(s,"dangerRoomUnlockAll")) {
            if(equal(value,"1")||equal(value,"true")) settings.danger_room_unlock_all=1;
            else if(equal(value,"0")||equal(value,"false")) settings.danger_room_unlock_all=0;
            else {ok=fail(error,size,"dangerRoomUnlockAll must be 1, true, 0, or false");break;}
        }
        if(equal(s,"performanceLogging")) {
            if(equal(value,"1")||equal(value,"true")) settings.performance_logging=1;
            else if(equal(value,"0")||equal(value,"false")) settings.performance_logging=0;
            else {ok=fail(error,size,"performanceLogging must be 1, true, 0, or false");break;}
        }
        if(equal(s,"graphicsAdapter")) {
            if(equal(value,"auto"))settings.graphics_adapter=-1;
            else {
                char *end;errno=0;long n=strtol(value,&end,10);
                if(errno || end==value || *end || n<0 || n>255) {ok=fail(error,size,"graphicsAdapter must be auto or a DX8 adapter index (0-255)");break;}
                settings.graphics_adapter=(int)n;
            }
        }
        if(equal(s,"HDTextures")) {
            if(equal(value,"1")||equal(value,"true")) settings.hd_textures=1;
            else if(equal(value,"0")||equal(value,"false")) settings.hd_textures=0;
            else {ok=fail(error,size,"HDTextures must be 1, true, 0, or false");break;}
        }
        if(equal(s,"HDTexturePack")) {
            if(!*value || strlen(value)>=sizeof(settings.hd_texture_pack)) {ok=fail(error,size,"HDTexturePack must be a folder path shorter than 260 characters");break;}
            strcpy(settings.hd_texture_pack,value);
        }
        if(equal(s,"modderMode")) {
            if(equal(value,"1")||equal(value,"true")) settings.modder_mode=1;
            else if(equal(value,"0")||equal(value,"false")) settings.modder_mode=0;
            else {ok=fail(error,size,"modderMode must be 1, true, 0, or false");break;}
        }
        for(int i=0;i<3;++i) {
            if(equal(s,allow_keys[i])) {
                if(strlen(value)>=sizeof(allowed[i])) {ok=fail(error,size,"Allowed language list is too long");break;}
                strcpy(allowed[i],value);
            }
            if(equal(s,default_keys[i])) {
                if(!language(value)) {ok=fail(error,size,"Unsupported default language code");break;}
                for(int j=0;j<3;++j) defaults[i][j]=(char)tolower((unsigned char)value[j]);
                defaults[i][3]=0;
            }
        }
        if(!ok)break;
    }
    if(ferror(file))ok=fail(error,size,"Error reading build.ini");
    fclose(file);if(!ok)return 0;
    for(int i=0;i<3;++i) {
        int found=0;char *token=allowed[i];
        for(;;) {
            char *comma=strchr(token,',');if(comma)*comma=0;
            token=trim(token);
            if(!language(token))return fail(error,size,"Invalid or empty AllowedLanguages entry");
            if(equal(token,defaults[i]))found=1;
            if(!comma)break;token=comma+1;
        }
        if(!found)return fail(error,size,"Default language must appear in its AllowedLanguages list");
    }
    *out=settings;return 1;
}
