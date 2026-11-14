"""Check distribution imports and the actual renderer payload in the game EXE."""
from pathlib import Path
import argparse
import hashlib
import pefile

parser = argparse.ArgumentParser()
parser.add_argument('game', type=Path)
parser.add_argument('renderer', type=Path)
args = parser.parse_args()
game = pefile.PE(str(args.game))
payload = None
for kind in game.DIRECTORY_ENTRY_RESOURCE.entries:
    if kind.id != 10:
        continue
    for entry in kind.directory.entries:
        if entry.id == 101:
            item = entry.directory.entries[0].data.struct
            payload = game.get_data(item.OffsetToData, item.Size)
assert payload == args.renderer.read_bytes(), 'Embedded renderer is stale or missing'
worker = pefile.PE(data=payload)
assert game.FILE_HEADER.Machine == 0x8664 and worker.FILE_HEADER.Machine == 0x14c
exports = {entry.name: entry.address for entry in
           getattr(worker, 'DIRECTORY_ENTRY_EXPORT').symbols}
for hint in (b'NvOptimusEnablement', b'AmdPowerXpressRequestHighPerformance'):
    assert hint in exports, f'Embedded renderer lacks GPU preference export {hint!r}'
    assert int.from_bytes(worker.get_data(exports[hint], 4), 'little') == 1, \
        f'Embedded renderer GPU preference is disabled: {hint!r}'
print('Embedded renderer: NVIDIA and AMD high-performance hints enabled')
system = {'kernel32.dll', 'user32.dll', 'gdi32.dll', 'advapi32.dll',
          'ole32.dll', 'oleaut32.dll', 'shell32.dll', 'shlwapi.dll', 'windowscodecs.dll',
          'winmm.dll', 'ws2_32.dll', 'bcrypt.dll', 'comctl32.dll',
          'dbghelp.dll', 'xaudio2_9.dll', 'xinput1_4.dll', 'd3d11.dll',
          'dxgi.dll', 'd3dcompiler_47.dll', 'ntdll.dll', 'version.dll',
          'setupapi.dll', 'imm32.dll', 'hid.dll', 'bcryptprimitives.dll',
          'mfreadwrite.dll', 'mfplat.dll', 'api-ms-win-core-synch-l1-2-0.dll', 'userenv.dll'}
for name, image in [('game', game), ('renderer', worker)]:
    imports = {entry.dll.decode().lower() for table in
               ('DIRECTORY_ENTRY_IMPORT', 'DIRECTORY_ENTRY_DELAY_IMPORT')
               for entry in getattr(image, table, [])}
    assert imports <= system, f'{name}: unexpected external imports {imports-system}'
    print(name, 'Windows system imports only:', ', '.join(sorted(imports)))
print('Embedded renderer SHA256:', hashlib.sha256(payload).hexdigest())
