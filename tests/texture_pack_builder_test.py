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

if __name__=='__main__':unittest.main()
