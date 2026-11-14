"""Add brightness and gamma rows to the existing Advanced Options layout."""
from pathlib import Path
import argparse,sys,struct,copy,json,hashlib
from xml1_packages import read_pkgb
parser=argparse.ArgumentParser(description=__doc__)
parser.add_argument('--writer-root',type=Path,required=True)
parser.add_argument('--input',type=Path,required=True)
parser.add_argument('--package',type=Path,required=True)
parser.add_argument('--menu',type=Path,required=True)
parser.add_argument('--output-assets',type=Path,required=True)
args=parser.parse_args()
source=args.input
resource='ui/menus/'+source.stem
models={dict(r.attributes)['filename'].lower() for r in read_pkgb(args.package.read_bytes()) if r.kind=='model'}
if resource.lower() not in models:raise ValueError('Input must be a PKGB-declared menu resource')
focus_model='ui/models/m_pda_option_focus'
if focus_model not in models:raise ValueError('Native focus model must retain its PKGB declaration')
output=args.output_assets/'ui'/'menus'/source.name
if output.resolve()==source.resolve():raise ValueError('Use a separate output tree; preserve the source IGB')
original=source.read_bytes()
sys.path.insert(0,str(args.writer_root.resolve()))
from igb_format.igb_reader import IGBReader
from igb_format.igb_writer import from_reader
r=IGBReader(str(source));r.read();w=from_reader(r)
def field(j,k):return next(v for a,v,t in w.objects[j].raw_fields if a==k)
def put(j,k,v):
 o=w.objects[j];o.raw_bytes=None;o.raw_fields=[(a,v if a==k else old,t) for a,old,t in o.raw_fields]
def clone(j):
 n=len(w.objects);w.objects.append(copy.deepcopy(w.objects[j]));w.ref_info.append(copy.deepcopy(w.ref_info[j]));w.index_map.append(w.index_map[j]);return n
def refs(j):return list(struct.unpack('<'+'i'*(len(w.objects[j].data)//4),w.objects[j].data))
def memory(j,values):
 o=w.objects[j];o.data=struct.pack('<'+'i'*len(values),*values);o.raw_data=None
 entry=copy.deepcopy(w.entries[w.index_map[j]]);entry.raw_bytes=None
 for p,t in enumerate(w.meta_objects[entry.type_index].fields):
  if t.slot==7:entry.field_values[p]=len(o.data)
 w.index_map[j]=len(w.entries);w.entries.append(entry);w.ref_info[j]['mem_size']=len(o.data)
transforms={field(j,2):j for j,o in enumerate(w.objects) if hasattr(o,'raw_fields') and w.meta_objects[o.type_index].name==b'igTransform'}
import xml.etree.ElementTree as ET
menu=ET.parse(args.menu);original_menu=args.menu.read_bytes()
assert menu.getroot().get('name')=='options_controller_xbox'
assert menu.getroot().get('igb','').lower()==source.stem.lower()
assert any(r.kind=='xml' and dict(r.attributes).get('filename','').lower()=='ui/menus/'+args.menu.stem.lower() for r in read_pkgb(args.package.read_bytes()))
assert not any(i.get('gamevar')=='pcnative_brightness' for i in menu.getroot().findall('item'))
added=[]
def anchor(name,x,z):
 node=transforms[name];donor=transforms['label_button07'];w.objects[node]=copy.deepcopy(w.objects[donor]);w.ref_info[node]=copy.deepcopy(w.ref_info[donor]);w.index_map[node]=w.index_map[donor]
 children=clone(field(node,7));mem=clone(field(children,4));info=clone(refs(mem)[0]);props=clone(field(info,8));pmem=clone(field(props,4));prop=clone(refs(pmem)[0]);val=clone(field(prop,3))
 put(node,7,children);put(children,4,mem);memory(mem,[info]);put(info,2,name);put(info,8,props);put(props,4,pmem);memory(pmem,[prop]);put(prop,3,val);put(val,2,name);put(node,2,name)
 put(node,8,(.50,0,0,0,0,.50,0,0,0,0,.50,0,x,-120,z,1));added.append(node);transforms[name]=node

items={i.get('name'):i for i in menu.getroot().findall('item')}
# Reuse four dormant anchors: the original collector has only 128 slots.
for key,name,focus,x,above,below,other in [
 ('brightness','controls_light','controls_focus',254,'pc_device_3','pc_preset1','label_click01'),
 ('gamma','label_click01','controls',374,'pc_device_4','pc_preset3','controls_light')]:
 assert all(items[n].get('hide')=='true' for n in (name,focus))
 anchor(name,x,78);anchor(focus,x+49,78)
 node=transforms[focus];matrix=list(field(node,8));matrix[0]=.9;matrix[5]=1.;matrix[10]=.5;matrix[13]=-119.;put(node,8,tuple(matrix))
 items[name].attrib.clear()
 items[name].attrib.update(name=name,style='STYLE_SMALL',text='Loading...',
  gamevar='pcnative_'+key,usecmd='pcnative_'+key,textalignx='TEXT_ALIGN_LEFT',
  up=above,down=below,left=other,right=other,
  focusmodel=focus_model,focusitemname=focus,desctext2='$MENU_ACCEPT Change')
 items[focus].attrib.clear()
 items[focus].attrib.update(name=focus,type='MENU_ITEM_MODEL',enabled='false')
 items[above].set('down',name)
 items[below].set('up',name)
items['pc_preset2'].set('up','controls_light')
assert len(transforms)<=128, 'Native menu collector capacity exceeded'
output.parent.mkdir(parents=True,exist_ok=True);w.write(str(output));check=IGBReader(str(output));check.read()
menu_output=args.output_assets/'ui'/'menus'/args.menu.name
assert menu_output.resolve()!=args.menu.resolve()
ET.indent(menu,space='  ');menu.write(menu_output,encoding='unicode')
assert source.read_bytes()==original and args.menu.read_bytes()==original_menu
output.with_suffix('.color-controls.json').write_text(json.dumps({
 'resource':resource,'menu_resource':'ui/menus/'+args.menu.stem,
 'package_sha256':hashlib.sha256(args.package.read_bytes()).hexdigest(),
 'input_sha256':hashlib.sha256(original).hexdigest(),
 'output_sha256':hashlib.sha256(output.read_bytes()).hexdigest(),
 'menu_input_sha256':hashlib.sha256(original_menu).hexdigest(),
 'menu_output_sha256':hashlib.sha256(menu_output.read_bytes()).hexdigest(),
 'focus_model':focus_model,'anchors':[field(j,2) for j in added]},indent=2))
print('Authored native brightness and gamma controls:',output)
