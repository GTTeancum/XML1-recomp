#include <windows.h>
#include <stdio.h>
#include <string.h>
#include "app/loose_extract.h"
#include "app/loose_setup.h"
static int report(void *context,unsigned done,unsigned total,const char *name) {
    if(done%100==0||done==total)printf("%u/%u %s\n",done,total,name);
    return !context || done<1;
}
int wmain(int argc,wchar_t **argv) {
    char error[1024]={0};
    if((argc==3 || argc==4) && !wcscmp(argv[1],L"--setup")) {
        char root[4096];if(!WideCharToMultiByte(CP_UTF8,0,argv[2],-1,root,sizeof(root),NULL,NULL))return 2;
        char language[4]="eng";
        if(argc==4 && !WideCharToMultiByte(CP_UTF8,0,argv[3],-1,language,sizeof(language),NULL,NULL))return 2;
        if(xml1_prepare_loose_assets(root,language,1,error,sizeof(error)))return 0;
    } else if(argc==5 && !wcscmp(argv[1],L"--extract-for-install")) {
        if(xml1_extract_loose_for_install(argv[2],argv[3],argv[4],report,NULL,error,sizeof(error)))return 0;
    } else {
        if(argc!=3 && argc!=4)return 2;
        if(xml1_extract_loose(argv[1],argv[2],report,argc==4?(void*)1:NULL,error,sizeof(error)))return 0;
    }
    fprintf(stderr,"%s\n",error);return 1;
}
