"""Update an already-authored XML1 PC Options menu to the current seed policy.

Only removes continuous animation from the three decorative model items.
Opening/closing transitions, sliders and focus bindings remain native.
"""
import argparse
from pathlib import Path
import re
import subprocess
import tempfile
import xml.etree.ElementTree as ET

ITEMS = ('title_light', 'accept_light', 'accept_focus')


def update(data):
    root = ET.fromstring(data)
    if root.tag != 'MENU' or root.get('name') != 'options' or root.get('igb') != 'x2m_options':
        raise ValueError('Expected the authored x2m_options Options menu')
    for name in ITEMS:
        items = [item for item in root.findall('item') if item.get('name') == name]
        if len(items) != 1 or items[0].get('type') != 'MENU_ITEM_MODEL':
            raise ValueError(f'Missing or ambiguous model item: {name}')
    def item(match):
        text = match.group(0)
        node = ET.fromstring(text)
        if node.get('name') in ITEMS:
            return re.sub(rb'\s+animate\s*=\s*([\'"]).*?\1', b'', text)
        return text
    result = re.sub(rb'<item\b[^<>]*/>', item, data)
    verified = ET.fromstring(result)
    for node in verified.findall('item'):
        if node.get('name') in ITEMS and node.get('animate') is not None:
            raise ValueError('Unexpected non-self-closing decorative item')
    return result


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--menu', required=True, type=Path)
    parser.add_argument('--driver', required=True, type=Path, help='Built xmlb-driver executable')
    args = parser.parse_args()
    original = args.menu.read_bytes()
    changed = update(original)
    driver = args.driver.resolve(strict=True)
    binary = args.menu.with_suffix(args.menu.suffix + 'b')
    # Compilation must succeed before either installed file changes. Keep all
    # temporary artifacts alongside the selected menu, inside the game tree.
    with tempfile.TemporaryDirectory(prefix='.options-idle-', dir=args.menu.parent) as temp:
        text = Path(temp) / args.menu.name
        compiled = Path(temp) / binary.name
        text.write_bytes(changed)
        subprocess.run([str(driver), 'compile', str(text), str(compiled)], check=True)
        if changed != original:
            args.menu.write_bytes(changed)
        compiled.replace(binary)
    print('Updated text and compiled Options menu')
