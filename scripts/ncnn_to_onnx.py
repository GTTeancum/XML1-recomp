"""Convert an ncnn ESRGAN-family upscaling model (.param/.bin) to ONNX.

Supports the layer set used by RRDB super-resolution models: Input,
Convolution (optional leaky ReLU), Split, Concat, Eltwise sum, BinaryOp
add/sub/mul (tensor or scalar), ReLU (leaky) and nearest Interp. The ONNX
protobuf is written directly, so only numpy is needed. Input/output: float32
NCHW RGB in [0,1], dynamic height and width.
"""
from pathlib import Path
import struct
import numpy as np

def _varint(v):
    out=bytearray();v&=(1<<64)-1
    while True:
        b=v&0x7f;v>>=7
        if v:out.append(b|0x80)
        else:out.append(b);return bytes(out)
def _key(field,wire):return _varint(field<<3|wire)
def _int(field,v):return _key(field,0)+_varint(v)
def _bytes(field,data):
    data=data.encode() if isinstance(data,str) else data
    return _key(field,2)+_varint(len(data))+data
def _float(field,v):return _key(field,5)+struct.pack('<f',v)

def _attr(name,value):
    if isinstance(value,float):return _bytes(1,name)+_float(2,value)+_int(20,1)
    if isinstance(value,int):return _bytes(1,name)+_int(3,value)+_int(20,2)
    if isinstance(value,str):return _bytes(1,name)+_bytes(4,value)+_int(20,3)
    return _bytes(1,name)+b''.join(_int(8,v) for v in value)+_int(20,7)
def _node(op,inputs,outputs,name,**attrs):
    return (b''.join(_bytes(1,i) for i in inputs)+b''.join(_bytes(2,o) for o in outputs)+
            _bytes(3,name)+_bytes(4,op)+b''.join(_bytes(5,_attr(k,v)) for k,v in attrs.items()))
def _tensor(name,array):
    array=np.ascontiguousarray(array,np.float32)
    return b''.join(_int(1,d) for d in array.shape)+_int(2,1)+_bytes(8,name)+_bytes(9,array.tobytes())
def _value_info(name):
    dims=b''.join(_bytes(1,_bytes(2,p) if isinstance(p,str) else _int(1,p)) for p in (1,3,'h','w'))
    return _bytes(1,name)+_bytes(2,_bytes(1,_int(1,1)+_bytes(2,dims)))

def _params(tokens):
    out={}
    for token in tokens:
        k,v=token.split('=',1);k=int(k)
        if k<=-23300:out[-(k+23300)]=[float(x) for x in v.split(',')[1:]]
        else:out[k]=float(v) if ('.' in v or 'e' in v) else int(v)
    return out

def convert(param_path,bin_path,onnx_path):
    lines=Path(param_path).read_text().split('\n')
    if lines[0].strip()!='7767517':raise ValueError('not an ncnn param file')
    weights=Path(bin_path).read_bytes();pos=0
    def take_weights(count):
        nonlocal pos
        tag=struct.unpack_from('<I',weights,pos)[0];pos+=4
        if tag==0x01306B47:
            data=np.frombuffer(weights,np.float16,count,pos).astype(np.float32);pos+=count*2
            pos=(pos+3)&~3
        elif tag==0:
            data=np.frombuffer(weights,np.float32,count,pos);pos+=count*4
        else:raise ValueError(f'unsupported weight storage tag {tag:08x}')
        return data
    def take_float32(count):
        nonlocal pos
        data=np.frombuffer(weights,np.float32,count,pos);pos+=count*4;return data
    alias={};nodes=[];inits=[];input_name=output_name=None;n=0
    def blob(name):return alias.get(name,name)
    def scalar(value):
        nonlocal n
        n+=1;name=f'const_{n}';inits.append(_tensor(name,np.array(value,np.float32)));return name
    for line in lines[2:]:
        parts=line.split()
        if not parts:continue
        kind,name,nin,nout=parts[0],parts[1],int(parts[2]),int(parts[3])
        ins=[blob(x) for x in parts[4:4+nin]];outs=parts[4+nin:4+nin+nout];p=_params(parts[4+nin+nout:])
        if kind=='Input':input_name=outs[0]
        elif kind=='Split':
            for o in outs:alias[o]=ins[0]
        elif kind=='Convolution':
            cout,k=p[0],p.get(1,1);size=p[6];cin=size//(cout*k*k)
            w=take_weights(size).reshape(cout,cin,k,k)
            pad=p.get(4,0);conv_out=outs[0] if p.get(9,0)==0 else outs[0]+'_linear'
            inputs=[ins[0],name+'_w'];inits.append(_tensor(name+'_w',w))
            if p.get(5,0):inits.append(_tensor(name+'_b',take_float32(cout)));inputs.append(name+'_b')
            nodes.append(_node('Conv',inputs,[conv_out],name,kernel_shape=[k,k],pads=[pad]*4,
                               strides=[p.get(3,1)]*2,dilations=[p.get(2,1)]*2))
            act=p.get(9,0)
            if act==2:nodes.append(_node('LeakyRelu',[conv_out],[outs[0]],name+'_act',alpha=float(p[10][0])))
            elif act==1:nodes.append(_node('Relu',[conv_out],[outs[0]],name+'_act'))
            elif act:raise ValueError(f'unsupported activation {act}')
        elif kind=='ReLU':
            slope=float(p.get(0,0.0))
            nodes.append(_node('LeakyRelu',ins,outs,name,alpha=slope) if slope else _node('Relu',ins,outs,name))
        elif kind=='Concat':
            if p.get(0,0)!=0:raise ValueError('only channel concat is supported')
            nodes.append(_node('Concat',ins,outs,name,axis=1))
        elif kind=='Eltwise':
            if p.get(0,1)!=1:raise ValueError('only Eltwise sum is supported')
            coeffs=p.get(1,[1.0]*nin);terms=[]
            for i,(x,c) in enumerate(zip(ins,coeffs)):
                if c==1.0:terms.append(x)
                else:nodes.append(_node('Mul',[x,scalar(c)],[f'{name}_t{i}'],f'{name}_m{i}'));terms.append(f'{name}_t{i}')
            acc=terms[0]
            for i,t in enumerate(terms[1:],1):
                out=outs[0] if i==len(terms)-1 else f'{name}_s{i}'
                nodes.append(_node('Add',[acc,t],[out],f'{name}_a{i}'));acc=out
        elif kind=='BinaryOp':
            op={0:'Add',1:'Sub',2:'Mul',3:'Div'}[p.get(0,0)]
            operands=[ins[0],scalar(p.get(2,0.0))] if p.get(1,0) else ins
            nodes.append(_node(op,operands,outs,name))
        elif kind=='Interp':
            if p.get(0,0)!=1:raise ValueError('only nearest Interp is supported')
            scales=scalar([1.0,1.0,float(p[1]),float(p[2])])
            nodes.append(_node('Resize',[ins[0],'',scales],outs,name,mode='nearest',
                               coordinate_transformation_mode='asymmetric',nearest_mode='floor'))
        else:raise ValueError(f'unsupported ncnn layer {kind}')
        if outs:output_name=outs[-1]
    if pos!=len(weights):raise ValueError(f'weights not fully consumed: {pos}/{len(weights)}')
    graph=(b''.join(_bytes(1,x) for x in nodes)+_bytes(2,'upscale')+b''.join(_bytes(5,x) for x in inits)+
           _bytes(11,_value_info(input_name))+_bytes(12,_value_info(blob(output_name))))
    model=_int(1,8)+_bytes(2,'ncnn_to_onnx')+_bytes(7,graph)+_bytes(8,_bytes(1,'')+_int(2,13))
    Path(onnx_path).write_bytes(model)
    return input_name,blob(output_name)

if __name__=='__main__':
    import sys
    print(convert(*sys.argv[1:4]))
