"""Package an HD texture pack as an N-part 7z split for release downloads.

PNG data does not compress further, so files are stored (-mx0): the archive is
the same size and extracts quickly. Parts are equal-sized and must stay under
GitHub's 2 GiB release-asset limit. The archive root is `texturepack/`, so
players extract part 1 directly into the game folder beside default.xbe.

python scripts/package-texture-pack.py --pack XBOXgame/texturepack --out work/release --parts 3
python scripts/package-texture-pack.py --pack XML1-original-textures --out work/release --parts 1 --name XML1-Original-Textures
"""
from pathlib import Path
import argparse,math,shutil,subprocess,sys

LIMIT=2*1024**3-64*1024**2   # GitHub release assets: < 2 GiB, with headroom

def main():
    p=argparse.ArgumentParser(description=__doc__,formatter_class=argparse.RawDescriptionHelpFormatter)
    p.add_argument('--pack',type=Path,required=True)
    p.add_argument('--out',type=Path,required=True)
    p.add_argument('--parts',type=int,default=3)
    p.add_argument('--name',default='XML1-HD-Textures')
    p.add_argument('--sevenzip',default=shutil.which('7z') or r'C:\Program Files\7-Zip\7z.exe')
    a=p.parse_args()
    pack=a.pack.resolve()
    if not (pack/'pack.json').is_file():sys.exit(f'{pack} is not a texture pack (pack.json missing)')
    total=sum(f.stat().st_size for f in pack.rglob('*') if f.is_file())
    part=math.ceil((total+1024**2)/a.parts)          # headroom for 7z headers
    if part>LIMIT:sys.exit(f'{total} bytes in {a.parts} parts exceeds the 2 GiB per-asset limit; use more parts')
    a.out.mkdir(parents=True,exist_ok=True)
    archive=a.out.resolve()/f'{a.name}.7z'
    for old in a.out.glob(f'{a.name}.7z*'):old.unlink()
    split=[f'-v{part}b'] if a.parts>1 else []
    subprocess.run([a.sevenzip,'a','-t7z','-mx0',*split,str(archive),pack.name],cwd=pack.parent,check=True,
                   stdout=subprocess.DEVNULL)
    parts=sorted(a.out.glob(f'{a.name}.7z.*')) if a.parts>1 else [archive]
    for f in parts:print(f'{f.name} {f.stat().st_size}')
    if len(parts)!=a.parts:sys.exit(f'expected {a.parts} parts, got {len(parts)}')

if __name__=='__main__':main()
