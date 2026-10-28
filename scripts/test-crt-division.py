"""Compile and exercise the canonical translated 64-bit CRT arithmetic helpers.

Run with Python from any directory; all generated files stay under repository work/.
Requires CMake and a configured native C compiler (Visual Studio on Windows).
"""
from pathlib import Path
import os, subprocess
from recomp_source import find_function, RecompSources
root=Path(__file__).resolve().parents[1]
out=root/'work/crt-division-test';out.mkdir(parents=True,exist_ok=True)
addresses=(0x342E20,0x343460,0x3436B0,0x343B30,0x343BF0,0x349070)
index=RecompSources(root/'src/recomp/game')
head='''#include <stdint.h>
#include <stdio.h>
#include <string.h>
static uint32_t eax,ebx,ecx,edx,esi,edi,esp,g_ebp,g_seh_ebp;
static unsigned char memory[4096];
#define MEM32(a) (*(uint32_t*)(memory+(uint32_t)(a)))
#define PUSH32(s,v) do {s-=4;MEM32(s)=(v);}while(0)
#define POP32(s,v) do {v=MEM32(s);s+=4;}while(0)
'''
for n,op in [('A','>'),('AE','>='),('B','<'),('BE','<='),('EQ','=='),('NE','!='),('G','>'),('GE','>='),('L','<'),('LE','<=')]:head+=f'#define CMP_{n}(a,b) ((a){op}(b))\n'
body='\n'.join(find_function(index.path(a).read_text(),a)[0] for a in addresses)
(out/'helpers.c').write_text(head+body+'\n'+(root/'tests/runtime/guest/crt_division_cases.inc').read_text())
(out/'CMakeLists.txt').write_text('cmake_minimum_required(VERSION 3.20)\nproject(crt_rotates C)\nadd_executable(crt-rotates helpers.c)\n')
temp=out/'temp';temp.mkdir(exist_ok=True)
env=dict(os.environ,TEMP=str(temp),TMP=str(temp))
for command in (["cmake","-S",str(out),"-B",str(out/'build')],
                ["cmake","--build",str(out/'build'),"--config","Release"]):
    subprocess.run(command,cwd=root,env=env,check=True)
binary=out/'build/Release/crt-rotates.exe' if os.name=='nt' else out/'build/crt-rotates'
subprocess.run([str(binary)],cwd=root,env=env,check=True)
