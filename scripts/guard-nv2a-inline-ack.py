"""Complete the XDK kickoff's NV2A handshakes inline instead of on another core.

The XDK kickoff at 0035FC00 (and its twin at 0035FCB0) sets the PFB flush bit
at register+0x100410, spins until hardware clears it, then writes DMA_PUT.
There is no NV2A: XboxRecomp's ack thread clears the bit and copies PUT to GET
from a Sleep(0) loop, so every kickoff spins until that thread is scheduled.
That costs a whole core and, with fewer cores than runnable threads, a
scheduler quantum per kickoff. Clearing the bit before the wait and publishing
GET with PUT gives the same register values the ack thread produces, at once.
The native path at 0035FC76 already stores PUT and GET together.

Usage: guard-nv2a-inline-ack.py [gen|game]  (default gen)
"""
from pathlib import Path
import sys
from recomp_source import RecompSources, find_function

tree = sys.argv[1] if len(sys.argv) > 1 else 'gen'
if tree not in ('gen', 'game'):
    raise SystemExit('Expected gen or game')
index = RecompSources(Path(__file__).resolve().parents[1] / 'src/recomp' / tree)
NOTE = '/* PC: no NV2A; the flush completes when requested. */'
SITES = {
    0x35FC00: [
        ('    MEM32(eax + 0x100410) = ecx;\n    /* nop */\n\nloc_0035FC40: ;',
         '    MEM32(eax + 0x100410) = ecx;\n    MEM32(eax + 0x100410) &= ~0x10000u; ' + NOTE + '\n    /* nop */\n\nloc_0035FC40: ;'),
        ('    MEM32(ecx + 0x40) = edx;\n    eax = MEM32(0x36C650);',
         '    MEM32(ecx + 0x40) = edx;\n    MEM32(ecx + 0x44) = edx; /* PC: GET reaches PUT, as the ack thread did. */\n    eax = MEM32(0x36C650);'),
    ],
    0x35FCB0: [
        ('    MEM32(eax + 0x100410) = edx;\n    goto loc_0035FCF0;',
         '    MEM32(eax + 0x100410) = edx;\n    MEM32(eax + 0x100410) &= ~0x10000u; ' + NOTE + '\n    goto loc_0035FCF0;'),
        ('    MEM32(ecx + 0x40) = esi;\n    goto loc_0035FD10;',
         '    MEM32(ecx + 0x40) = esi;\n    MEM32(ecx + 0x44) = esi; /* PC: GET reaches PUT, as the ack thread did. */\n    goto loc_0035FD10;'),
    ],
}
changed = 0
for address, edits in SITES.items():
    path = index.path(address)
    text = path.read_text(encoding='utf-8')
    match = find_function(text, address)
    start, end = match.span()
    part = text[start:end]
    for old, new in edits:
        if part.count(new) == 1:
            continue
        if part.count(old) != 1:
            raise SystemExit(f'Kickoff handshake at {address:08X} changed; retrace before patching')
        part = part.replace(old, new); changed += 1
    text = text[:start] + part + text[end:]
    path.write_text(text, encoding='utf-8')
print(f'NV2A inline kickoff handshake ({tree}): {changed} edit(s) applied' if changed else
      f'NV2A inline kickoff handshake ({tree}) already installed')
