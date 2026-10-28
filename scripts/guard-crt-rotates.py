"""Restore RCR in the CRT's 64-bit division/remainder normalizers."""
from pathlib import Path
import re, sys
from recomp_source import RecompSources, find_function
ROOT = Path(__file__).resolve().parents[1]
ADDRESSES = (0x342E20, 0x343460, 0x3436B0, 0x343B30, 0x343BF0, 0x349070)
def repair(root):
    index = RecompSources(root)
    for address in ADDRESSES:
        path = index.path(address)
        source = path.read_text()
        match = find_function(source, address)
        body = match[0]
        def replace(m):
            reg = m[1]
            return ('{ uint32_t carry_out = '+reg+' & 1u; '+reg+' = ('+reg+
                    ' >> 1) | ((uint32_t)_cf << 31); _cf = (int)carry_out; } /* rcr '+reg+', 1 */')
        fixed, count = re.subn(r'/\* TODO: rcr (eax|ebx|ecx), 1 \*/', replace, body)
        if count not in (0, 2) or fixed.count('uint32_t carry_out') != 2:
            raise RuntimeError(f'CRT rotate contract changed at {address:08X}')
        if count:
            path.write_text(source[:match.start()] + fixed + source[match.end():])
if __name__ == '__main__':
    repair(Path(sys.argv[1]) if len(sys.argv)>1 else ROOT/'src/recomp/gen')
