"""Exercise first-run XMLB setup in disposable directories, never player data."""
import argparse, hashlib, struct, subprocess, tempfile, zipfile
from pathlib import Path
p=argparse.ArgumentParser();p.add_argument('--driver',type=Path,required=True);a=p.parse_args();driver=a.driver.resolve()
def run(root,ok=True,language=None):
 r=subprocess.run([str(driver),'--setup',str(root)]+([language] if language else []),capture_output=True)
 assert (r.returncode==0)==ok,(r.returncode,r.stderr.decode(errors='replace'))
def put(root,name,data):
 p=root/name;p.parent.mkdir(parents=True,exist_ok=True);p.write_bytes(data)
# Synthetic inputs only. No Xbox assets or third-party binary patch are shipped.
roster_path='maps/astral/savepx/final_astral.chr'
mission_path='data/missions/astral_sk.eng'
roster=b'<characters>'+b''.join(b'<character name="'+n+b'"/>' for n in (b'shadowkingtwo',b'shadowking',b'shadesking'))+b'</characters>'
mission=b'<MISSION mapload="astral/savepx/final_astral"><REQUIREDHERO name="PROFXGLADIATOR"/></MISSION>'
# Hash of the corrected map file attached to #36, an independent byte-level oracle.
corrected_sha='91b3531d18ccbd54f6adb134704c074ff34f13a681398ae1c5df8c1a7ab2d939'
def archive(root):
 put(root,'z/assetsfb.zip',b'')
 with zipfile.ZipFile(root/'z/assetsfb.zip','w') as z:
  z.writestr('data/test.eng',b'<root><n text="retail"/></root>')
  z.writestr('maps/test.nav',b'<nav cellSize="40"><c p="1 2 3"/></nav>')
  z.writestr(roster_path,roster);z.writestr(mission_path,mission)
  # The same data under a different map name is not eligible for repair.
  z.writestr('maps/unrelated.chr',roster)
  z.writestr('data/other-route.eng',mission.replace(b'final_astral',b'other'))
  z.writestr('data/other-hero.eng',mission.replace(b'PROFXGLADIATOR',b'OtherHero'))
  z.writestr('data/multi-hero.eng',mission.replace(b'</MISSION>',b'<REQUIREDHERO name="other"/></MISSION>'))
  z.writestr('maps/modded.chr',roster.replace(b'</characters>',b'<character name="other"/></characters>'))
with tempfile.TemporaryDirectory(prefix='xml1-xmlb-test-') as temporary:
 root=Path(temporary)/'fresh';root.mkdir();archive(root)
 overlay=b'<root><n text="overlay caf\xe9 & <"/></root>'
 put(root,'data/test.eng',overlay);put(root,'UDATA/save.dat',b'save-preserved')
 run(root)
 assert (root/'data/test.eng').read_bytes()==overlay
 assert (root/'UDATA/save.dat').read_bytes()==b'save-preserved'
 b=(root/'data/test.engb').read_bytes();assert struct.unpack_from('<2I',b)==(0x11b1,1) and b'overlay caf\xe9 & <\0' in b
 assert (root/'maps/test.navb').exists() and (root/'.xml1-xmlb-ready').exists()
 target=root/(roster_path+'b')
 assert (root/roster_path).read_bytes()==roster
 assert hashlib.sha256(target.read_bytes()).hexdigest()==corrected_sha
 original=(root/'maps/unrelated.chrb').read_bytes()
 assert original!=target.read_bytes() and b'profxgladiator' not in original
 snapshot={str(f.relative_to(root)):hashlib.sha256(f.read_bytes()).hexdigest() for f in root.rglob('*') if f.is_file()}
 run(root)
 assert snapshot=={str(f.relative_to(root)):hashlib.sha256(f.read_bytes()).hexdigest() for f in root.rglob('*') if f.is_file()}
 # Existing, fully marked installs must migrate without their ZIP. Preserve
 # modded/rewired missions, editable source, already-fixed and custom binaries.
 pre=Path(temporary)/'marked';pre.mkdir()
 for marker in ('.xml1-loose-ready','.xml1-xmlb-ready'):
  put(pre,marker,(root/marker).read_bytes())
 put(pre,roster_path+'b',original);put(pre,roster_path,roster)
 cur=pre/(roster_path+'b')
 for alt in ('other-route.engb','other-hero.engb','multi-hero.engb'):
  put(pre,mission_path+'b',(root/'data'/alt).read_bytes())
  run(pre);assert cur.read_bytes()==original
 put(pre,mission_path+'b',(root/(mission_path+'b')).read_bytes())
 put(pre,roster_path,roster.replace(b'shadesking',b'custom'))
 run(pre);assert cur.read_bytes()==original
 put(pre,roster_path,roster)
 custom=(root/'maps/modded.chrb').read_bytes()
 put(pre,roster_path+'b',custom);run(pre);assert cur.read_bytes()==custom
 alternate=original+b'noncanonical binary overlay\x00'
 put(pre,roster_path+'b',alternate);run(pre);assert cur.read_bytes()==alternate
 put(pre,roster_path+'b',original)
 put(pre,'data/missions/astral_sk.freb',(root/(mission_path+'b')).read_bytes())
 put(pre,mission_path+'b',(root/'data/other-hero.engb').read_bytes())
 run(pre);assert cur.read_bytes()==original
 run(pre,language='fre');assert cur.read_bytes()==target.read_bytes()
 run(pre);assert cur.read_bytes()==target.read_bytes() and (pre/roster_path).read_bytes()==roster
 assert not list(pre.glob('.loose-setup-*'))
 old=Path(temporary)/'upgrade';old.mkdir();put(old,'.xml1-loose-ready',b'OpenXML1 loose assets version 1\n');put(old,'data/a.xml',b'<a/>')
 run(old);assert (old/'data/a.xmlb').exists() # no ZIP required for installed assets
 bad=Path(temporary)/'bad';bad.mkdir();archive(bad);put(bad,'data/test.eng',b'<root><unclosed>')
 run(bad,False);assert not (bad/'.xml1-xmlb-ready').exists() and not (bad/'.xml1-loose-ready').exists()
 assert not (bad/'maps/test.navb').exists() # all conversion validates before publish
 put(bad,'data/test.eng',b'<fixed/>');run(bad);assert (bad/'.xml1-xmlb-ready').exists()
 mod=Path(temporary)/'mod';mod.mkdir();archive(mod);put(mod,'data/test.engb',b);run(mod);assert (mod/'data/test.engb').read_bytes()==b
 invalid=Path(temporary)/'invalid';invalid.mkdir();archive(invalid);put(invalid,'data/test.engb',b'not binary');run(invalid,False)
 assert (invalid/'data/test.engb').read_bytes()==b'not binary' and not (invalid/'.xml1-xmlb-ready').exists()
print('PASS fresh extraction, upgrade, #36 fresh/marked migrations, independent corrected roster hash, mod/mission guards, save preservation, repeat run, failure/retry and corrupt binary rejection')
