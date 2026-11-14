"""Rebuild and audit the XML1 PC menu assets from local original game assets.

Creates a new directory with intermediate stages and a final assets/ tree.
Never stages into a game installation or copies saves/settings/executables.
"""
import argparse
import hashlib
import json
import shutil
import subprocess
import sys
from pathlib import Path
from xml1_packages import read_pkgb


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('--xml2', type=Path, required=True)
    p.add_argument('--xml1', type=Path, required=True)
    p.add_argument('--writer-root', type=Path, required=True)
    p.add_argument('--output', type=Path, required=True)
    a = p.parse_args()
    xml1, xml2, writer = (v.resolve(strict=True) for v in (a.xml1, a.xml2, a.writer_root))
    out = a.output.resolve()
    if out.exists() or any(out.is_relative_to(v) or v.is_relative_to(out) for v in (xml1, xml2, writer)):
        raise ValueError('Output must be new and separate from all source trees')
    scripts = Path(__file__).resolve().parent
    out.mkdir(parents=True, exist_ok=False)
    commands = []

    def call(script, *args):
        command = [sys.executable, str(scripts / script), *map(str, args)]
        commands.append(command)
        (out / 'commands.json').write_text(json.dumps(commands, indent=2) + '\n', encoding='utf-8')
        subprocess.run(command, check=True)

    imported, initial, packages = out / 'import', out / 'initial', out / 'packages'
    call('prepare-menu-import.py', '--reference', xml2, '--output', imported)
    blue = imported / 'xml1-blue'
    call('prepare-menu-layout.py', '--xml2-import', blue, '--xml1-assets', xml1,
         '--writer-root', writer, '--output', initial)
    call('prepare-menu-packages.py', '--original-assets', xml1, '--output-assets', packages)
    for name in ('options', 'advanced'):
        call('prepare-menu-options.py', '--source', imported / 'original/UI/menus/options.engb',
             '--menu', name, '--output-assets', out / 'contents' / name)

    working = out / 'working'
    shutil.copytree(blue, working)

    def copy(relative, source):
        target = working / relative
        target.parent.mkdir(parents=True, exist_ok=True)
        shutil.copy2(source, target)

    layout_rel = Path('ui/menus/x2m_options.igb')
    copy(layout_rel, initial / 'type-scale' / layout_rel)
    for name in ('options', 'options_controller_xbox'):
        relative = Path('packages/generated/maps/package/menus') / (name + '.pkgb')
        copy(relative, packages / relative)
        kind = 'options' if name == 'options' else 'advanced'
        relative = Path('ui/menus') / (name + '.eng')
        copy(relative, out / 'contents' / kind / relative)
    layout = working / layout_rel
    normal = working / 'ui/menus/options.eng'
    advanced = working / 'ui/menus/options_controller_xbox.eng'
    normal_pkg = working / 'packages/generated/maps/package/menus/options.pkgb'
    advanced_pkg = working / 'packages/generated/maps/package/menus/options_controller_xbox.pkgb'

    def stage(script, name, *args, uses_writer=True):
        destination = out / 'stages' / name
        prefix = ['--writer-root', writer] if uses_writer else []
        call(script, *prefix, *args, '--output-assets', destination)
        # Each authoring tool preserves its inputs; adopt outputs only afterward.
        for source in destination.rglob('*'):
            if source.is_file() and source.suffix.lower() in ('.igb', '.eng'):
                copy(source.relative_to(destination), source)
        return destination

    stage('author-menu-advanced-link.py', 'footer', '--input', layout, '--menu', normal, '--package', normal_pkg)
    stage('author-menu-binding-focus.py', 'focus', '--input', layout, '--menu', advanced,
          '--package', advanced_pkg, '--assets', working)
    stage('author-menu-remove-invisible-model.py', 'focus-cleanup', '--input', layout)
    stage('author-menu-volume-animation.py', 'volume-animation', '--layout', layout,
          '--model', working / 'ui/models/m_options_sound_select.igb',
          '--animation-reference', xml1 / 'ui/models/model_bar_sound.igb',
          '--package', normal_pkg, '--menu', normal, '--menu', advanced)
    for script, name in [('author-menu-fsaa.py', 'fsaa'), ('author-menu-player-tabs.py', 'players'),
                         ('author-menu-presets.py', 'presets'), ('author-menu-display-values.py', 'display')]:
        stage(script, name, '--input', layout, '--menu', advanced, '--package', advanced_pkg)
    for name, menu, package in [('options', normal, normal_pkg), ('advanced', advanced, advanced_pkg)]:
        stage('author-menu-prompts.py', name + '-prompts', '--menu', menu, '--package', package, uses_writer=False)
    # Split is an intermediate only: do not adopt its panel before reattachment.
    split = out / 'split'
    panel = blue / 'ui/models/m_options_screen.igb'
    call('author-menu-track-split.py', '--writer-root', writer, '--input', panel, '--output-assets', split)
    stage('author-menu-volume-tracks.py', 'volume-tracks', '--assets', working, '--panel', panel,
          '--split-model', split / 'ui/models/m_options_screen.igb',
          '--tracks', split / 'ui/models/m_options_screen.tracks.json')
    stage('author-menu-binding-device.py', 'binding-device', '--input', layout, '--menu', advanced, '--package', advanced_pkg)
    for kind, png in [('players', 'tabimg.png'), ('defaults', 'tabimg2.png')]:
        stage('author-menu-tab-art.py', kind + '-art', '--assets', working,
              '--reference', imported / 'original/Texs' / png, '--kind', kind)
    stage('author-menu-tab-selection.py', 'selected-tab', '--assets', working,
          '--reference', imported / 'original/Texs/tabbtn.png')
    stage('author-menu-binding-columns.py', 'columns', '--input', layout, '--package', advanced_pkg)
    stage('author-menu-device-list.py', 'devices', '--input', layout, '--menu', advanced, '--package', advanced_pkg)
    stage('author-menu-color-controls.py', 'color', '--input', layout, '--menu', advanced, '--package', advanced_pkg)
    stage('author-menu-view-shake.py', 'shake', '--assets', working, uses_writer=False)

    paths, original_models = set(), set()
    for name in ('options', 'options_controller_xbox'):
        relative = Path('packages/generated/maps/package/menus') / (name + '.pkgb')
        paths.add(relative)
        original_models.update(dict(r.attributes)['filename'] + '.igb'
                               for r in read_pkgb((xml1 / relative).read_bytes()) if r.kind == 'model')
        for row in read_pkgb((working / relative).read_bytes()):
            for suffix in (('.igb',) if row.kind == 'model' else ('.eng', '.fre', '.ger')):
                paths.add(Path(dict(row.attributes)['filename'] + suffix))
    final = out / 'assets'
    manifest = []
    for relative in sorted(paths):
        original = relative.as_posix() in original_models or relative.suffix in ('.fre', '.ger')
        source = (xml1 if original else working) / relative
        destination = final / relative
        destination.parent.mkdir(parents=True, exist_ok=True)
        data = source.read_bytes()
        destination.write_bytes(data)
        manifest.append({'path': relative.as_posix(), 'sha256': hashlib.sha256(data).hexdigest()})
    (out / 'manifest.json').write_text(json.dumps(manifest, indent=2) + '\n', encoding='utf-8')
    call('audit-native-menu-packages.py', '--assets', final, '--writer-root', writer, '--output', out / 'audit.json')
    print(f'Built and audited {len(manifest)} files at {final}. Native validation is required before player staging.')


if __name__ == '__main__':
    main()
