import importlib.util
from pathlib import Path
import unittest
import numpy as np
spec=importlib.util.spec_from_file_location('texture_pack',Path(__file__).resolve().parents[1]/'scripts/texture-pack.py')
tp=importlib.util.module_from_spec(spec);spec.loader.exec_module(tp)

class TexturePackBuilderTests(unittest.TestCase):
    def test_keys_match_renderer_definition(self):
        # Same values as tests/texture_pack_test.cpp.
        self.assertEqual(tp.texture_key(4,4,14,bytes(range(16))),'f3f723a607a7a7c3')
        palette=bytes((i*7)&255 for i in range(1024));indices=bytes((i*3)&255 for i in range(16))
        self.assertEqual(tp.texture_key(4,4,11,palette+indices),'ae362924c52abe1b')

    def test_dxt_decode(self):
        red_dxt3=bytes([0xff]*8)+bytes([0x00,0xf8,0x00,0xf8,0,0,0,0])
        rgba=tp.decode_wire(red_dxt3,4,4,14)
        self.assertTrue((rgba==[255,0,0,255]).all())
        # DXT1 three-color block: index 3 is transparent black.
        cut=bytes([0x00,0x00,0x1f,0x00,0xff,0xff,0xff,0xff])
        self.assertTrue((tp.decode_wire(cut,4,4,12)[...,3]==0).all())

    def test_upscale_stays_within_source_neighborhood(self):
        rng=np.random.default_rng(1)
        src=rng.integers(0,256,(16,16,4),dtype=np.uint8);src[...,3]=255
        big=tp.upscale(src).astype(int)
        self.assertEqual(big.shape,(64,64,4))
        padded=np.pad(src.astype(int),((1,1),(1,1),(0,0)),mode='wrap' if tp.tiles(src,1) else 'edge')
        for y in range(64):
            for x in range(64):
                sy,sx=(y+0.5)/4-0.5,(x+0.5)/4-0.5
                y0,x0=int(np.floor(sy))+1,int(np.floor(sx))+1
                block=padded[y0:y0+2,x0:x0+2,:3].reshape(-1,3)
                self.assertTrue(((big[y,x,:3]>=block.min(0)-1)&(big[y,x,:3]<=block.max(0)+1)).all())

    def test_binary_alpha_stays_binary_and_flat_art_stays_flat(self):
        src=np.zeros((8,8,4),np.uint8);src[...,:3]=(200,40,10);src[2:6,2:6,3]=255
        big=tp.upscale(src,False,False)
        self.assertTrue(np.isin(big[...,3],(0,255)).all())
        opaque=big[big[...,3]==255]
        self.assertTrue((opaque[:,:3]==(200,40,10)).all())  # no dark fringe from transparent texels

    def test_model_output_is_locked_to_original_texel_averages(self):
        # A deliberately wrong "model" (nearest, brightened) must be corrected
        # so each 4x4 block averages back to its original texel.
        class Fake:
            def get_inputs(self):return [type('I',(),{'name':'data'})()]
            def run(self,_,feeds):
                x=feeds['data'];return [np.clip(x.repeat(4,2).repeat(4,3)*1.3+.05,0,1)]
        tp._session=Fake()
        try:
            rng=np.random.default_rng(3)
            src=rng.integers(0,256,(32,32,4),dtype=np.uint8);src[...,3]=255
            big=tp.model_upscale(src).astype(np.float32)
            drift=np.abs(tp.box_down(big[...,:3])-src[...,:3]).mean()
            self.assertLess(drift,1.5)
            cut=src.copy();cut[...,3]=0;cut[8:24,8:24,3]=255
            self.assertTrue(np.isin(tp.model_upscale(cut)[...,3],(0,255)).all())
        finally:tp._session=None

    def test_original_export_is_unscaled_and_exact(self):
        import tempfile
        from PIL import Image
        red_dxt3=bytes([0xff]*8)+bytes([0x00,0xf8,0x00,0xf8,0,0,0,0])
        with tempfile.TemporaryDirectory() as t:
            out=Path(t)/'x.png'
            tp.make(('k',4,4,14,red_dxt3,True,True,str(out),True))
            png=np.asarray(Image.open(out).convert('RGBA'))
        self.assertEqual(png.shape,(4,4,4))
        self.assertTrue((png==tp.decode_wire(red_dxt3,4,4,14)).all())

    def test_ncnn_conversion_matches_reference(self):
        try:import onnxruntime as ort
        except ImportError:self.skipTest('onnxruntime not installed')
        import struct,tempfile
        spec2=importlib.util.spec_from_file_location('ncnn_to_onnx',Path(__file__).resolve().parents[1]/'scripts/ncnn_to_onnx.py')
        conv=importlib.util.module_from_spec(spec2);spec2.loader.exec_module(conv)
        rng=np.random.default_rng(5);w=rng.normal(0,.3,(3,3,3,3)).astype(np.float32);b=rng.normal(0,.1,3).astype(np.float32)
        param='\n'.join(['7767517','5 6','Input in 0 1 data','Split sp 1 2 data d0 d1',
            'Convolution c 1 1 d0 c0 0=3 1=3 4=1 5=1 6=81 9=2 -23310=1,2.000000e-01',
            'Eltwise e 2 1 c0 d1 s 0=1 -23301=2,2.000000e-01,1.000000e+00',
            'Interp up 1 1 s output 0=1 1=2.000000e+00 2=2.000000e+00',''])
        with tempfile.TemporaryDirectory() as t:
            t=Path(t);(t/'m.param').write_text(param)
            (t/'m.bin').write_bytes(struct.pack('<I',0)+w.tobytes()+b.tobytes())
            conv.convert(t/'m.param',t/'m.bin',t/'m.onnx')
            x=rng.random((1,3,5,6),dtype=np.float32)
            y=ort.InferenceSession(str(t/'m.onnx'),providers=['CPUExecutionProvider']).run(None,{'data':x})[0]
        p=np.pad(x[0],((0,0),(1,1),(1,1)));c=np.zeros((3,5,6),np.float32)
        for o in range(3):
            for i in range(3):
                for ky in range(3):
                    for kx in range(3):c[o]+=w[o,i,ky,kx]*p[i,ky:ky+5,kx:kx+6]
            c[o]+=b[o]
        c=np.where(c>0,c,.2*c);ref=(.2*c+x[0]).repeat(2,1).repeat(2,2)
        self.assertLess(np.abs(y[0]-ref).max(),1e-4)

if __name__=='__main__':unittest.main()
