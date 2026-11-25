"""Convert self-contained v6 captures to v7 for native pixel/performance checks."""
from pathlib import Path
import argparse,struct

def texture_bytes(w,h,packed):
    total=0;fmt=packed&255
    for _ in range(packed>>8 or 1):
        total+=((w+3)//4)*((h+3)//4)*16 if fmt==14 else w*h*(4 if fmt==6 else 1)
        w=max(1,w//2);h=max(1,h//2)
    return total

def convert(data, persistent=False):
    out=bytearray();pos=0;cache={};retained=0;requests=0;references=0
    if persistent:out+=b'XMLDX8S2'+struct.pack('<3I',640,480,1)
    def take(n):
        nonlocal pos
        result=data[pos:pos+n];assert len(result)==n;pos+=n;return result
    while pos<len(data):
        magic=take(8)
        if magic==b'XMLDX8S1':
            out+=magic+take(8);continue
        if magic in (b'XMLDX8C4', b'XMLDX8C5', b'XMLDX8C6'):
            header=take(20);count=struct.unpack('<5I',header)[4]
            out+=magic+header+take(count*16);continue
        assert magic in (b'XMLDX8F6',b'XMLDX8R6'),magic
        header=take(4);count=struct.unpack('<I',header)[0];out+=magic[:7]+(b'8' if persistent else b'7')+header
        for _ in range(count):
            header=take(24);w,h,vertices,packed,fvf,prim=struct.unpack('<6I',header)
            out+=header+take(24+192+672+512+68)
            mask=take(4);out+=mask+take(struct.unpack('<I',mask)[0].bit_count()*104)
            second=take(12);out+=second+take(128)
            for tw,th,tp in ((w,h,packed),struct.unpack('<3I',second)):
                if not tw:continue
                pixels=take(texture_bytes(tw,th,tp));key=(tw,th,tp,pixels);requests+=1
                if key in cache:
                    out+=struct.pack('<I',cache[key]);references+=1
                elif len(cache)<256 and retained+len(pixels)<=64*1024*1024:
                    cache[key]=len(cache)+1;retained+=len(pixels)
                    out+=struct.pack('<I',cache[key]|0x80000000)+pixels
                else:out+=bytes(4)+pixels
            stride=12+(12 if fvf&16 else 0)+(4 if fvf&64 else 0)+(8 if fvf&256 else 0)
            out+=take(vertices*stride)
        if magic[6:7]==b'R' and not persistent:cache.clear();retained=0
    return bytes(out),requests,references

if __name__=='__main__':
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('source',type=Path);parser.add_argument('target',type=Path)
    parser.add_argument('--persistent',action='store_true',help='Retain texture references across frames (v8)')
    args=parser.parse_args();data=args.source.read_bytes()
    result,requests,references=convert(data,args.persistent);args.target.write_bytes(result)
    print(f'{len(data)} -> {len(result)} bytes; {references}/{requests} texture references')
