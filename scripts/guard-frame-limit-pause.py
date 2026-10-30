"""Let the retail frame limiter sleep instead of polling the clock for a whole frame.

00011400 re-reads the game clock until FrameManager's minimum interval (+4)
has elapsed since the last frame (+8). On PC that loop occupies a core for the
idle part of every frame. Before each comparison, xml1_frame_limit_pause sleeps
through most of the remaining interval; the original loop still makes the exit
decision and records the actual elapsed timestamp, so game time is unchanged.

Usage: guard-frame-limit-pause.py [gen|game]  (default gen)
"""
from pathlib import Path
import sys
from recomp_source import RecompSources, find_function

tree = sys.argv[1] if len(sys.argv) > 1 else 'gen'
if tree not in ('gen', 'game'):
    raise SystemExit('Expected gen or game')
index = RecompSources(Path(__file__).resolve().parents[1] / 'src/recomp' / tree)
path = index.label_path(0x0001140C)
text = path.read_text(encoding='utf-8')
old = ('loc_0001140C: ;\n    MEMF(esp + 0xC) = (float)fp_top(); /* fst */\n'
       '    fp_top() = fp_top() - MEMF(esi + 8); /* fsub dword ptr [esi + 8] */\n')
new = old + '    xml1_frame_limit_pause(fp_top(), MEMF(esi + 4)); /* PC: sleep, then the original poll decides */\n'
declaration = 'void xml1_frame_limit_pause(double elapsed, float minimum);\n'
if text.count(new) == 1 and declaration in text:
    print(f'Frame limiter pause ({tree}) already installed')
elif text.count(old) == 1:
    text = text.replace(old, new)
    match = find_function(text, 0x00011390)
    text = text[:match.start()] + declaration + text[match.start():]
    path.write_text(text, encoding='utf-8')
    print(f'Frame limiter pause ({tree}) installed')
else:
    raise SystemExit('Pinned frame-limiter loop changed; retrace before patching')
