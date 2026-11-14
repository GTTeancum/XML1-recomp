"""Reuse Advanced Options' dormant footer link for shader selection."""
import argparse
from pathlib import Path
import xml.etree.ElementTree as ET
from xml1_packages import read_pkgb

p=argparse.ArgumentParser(description=__doc__)
p.add_argument('--menu',type=Path,required=True)
p.add_argument('--package',type=Path,required=True)
p.add_argument('--output-assets',type=Path,required=True)
a=p.parse_args()
original=a.menu.read_bytes();menu=ET.fromstring(original)
assert menu.get('name')=='options_controller_xbox' and menu.get('igb')=='x2m_options'
rows=read_pkgb(a.package.read_bytes())
assert any(r.kind=='xml' and dict(r.attributes).get('filename')=='ui/menus/options_controller_xbox' for r in rows)
items={i.get('name'):i for i in menu.findall('item')}
item=items['label_click02'];assert item.get('hide')=='true'
item.attrib.clear()
item.attrib.update(name='label_click02',style='STYLE_SMALL',text='Shader: Off',
    textalignx='TEXT_ALIGN_LEFT',gamevar='pcnative_shader',usecmd='pcnative_shader',
    up='label_accept',down='pc_player1',left='label_accept',right='label_accept')
items['label_accept'].set('down','label_click02')
items['pc_player1'].set('up','label_click02')
items['desctext2'].set('hide','true')
output=a.output_assets/'ui/menus'/a.menu.name
assert output.resolve()!=a.menu.resolve()
output.parent.mkdir(parents=True,exist_ok=True)
ET.indent(menu,space='  ');output.write_text(ET.tostring(menu,encoding='unicode'),encoding='utf8')
assert a.menu.read_bytes()==original
print(output)
