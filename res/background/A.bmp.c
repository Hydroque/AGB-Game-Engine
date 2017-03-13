// background.bmp.h

#include "../../src/types.h"

#include "A.bmp.h"

const u32 width_A_bmp = 88;
const u32 height_A_bmp = 48;

const u16 palette_A_bmp[256] __attribute__((aligned(4))) = {

	0x0000,0x0010,0x0200,0x0210,0x4000,0x4010,0x4200,0x6318,0x6378,0x7b34,0x0088,0x008c,0x0090,0x0094,0x0098,0x009c,
	0x0100,0x0104,0x0108,0x010c,0x0110,0x0114,0x0118,0x011c,0x0180,0x0184,0x0188,0x018c,0x0190,0x0194,0x0198,0x019c,
	0x0200,0x0204,0x0208,0x020c,0x0210,0x0214,0x0218,0x021c,0x0280,0x0284,0x0288,0x028c,0x0290,0x0294,0x0298,0x029c,
	0x0300,0x0304,0x0308,0x030c,0x0310,0x0314,0x0318,0x031c,0x0380,0x0384,0x0388,0x038c,0x0390,0x0394,0x0398,0x039c,
	0x2000,0x2004,0x2008,0x200c,0x2010,0x2014,0x2018,0x201c,0x2080,0x2084,0x2088,0x208c,0x2090,0x2094,0x2098,0x209c,
	0x2100,0x2104,0x2108,0x210c,0x2110,0x2114,0x2118,0x211c,0x2180,0x2184,0x2188,0x218c,0x2190,0x2194,0x2198,0x219c,
	0x2200,0x2204,0x2208,0x220c,0x2210,0x2214,0x2218,0x221c,0x2280,0x2284,0x2288,0x228c,0x2290,0x2294,0x2298,0x229c,
	0x2300,0x2304,0x2308,0x230c,0x2310,0x2314,0x2318,0x231c,0x2380,0x2384,0x2388,0x238c,0x2390,0x2394,0x2398,0x239c,
	0x4000,0x4004,0x4008,0x400c,0x4010,0x4014,0x4018,0x401c,0x4080,0x4084,0x4088,0x408c,0x4090,0x4094,0x4098,0x409c,
	0x4100,0x4104,0x4108,0x410c,0x4110,0x4114,0x4118,0x411c,0x4180,0x4184,0x4188,0x418c,0x4190,0x4194,0x4198,0x419c,
	0x4200,0x4204,0x4208,0x420c,0x4210,0x4214,0x4218,0x421c,0x4280,0x4284,0x4288,0x428c,0x4290,0x4294,0x4298,0x429c,
	0x4300,0x4304,0x4308,0x430c,0x4310,0x4314,0x4318,0x431c,0x4380,0x4384,0x4388,0x438c,0x4390,0x4394,0x4398,0x439c,
	0x6000,0x6004,0x6008,0x600c,0x6010,0x6014,0x6018,0x601c,0x6080,0x6084,0x6088,0x608c,0x6090,0x6094,0x6098,0x609c,
	0x6100,0x6104,0x6108,0x610c,0x6110,0x6114,0x6118,0x611c,0x6180,0x6184,0x6188,0x618c,0x6190,0x6194,0x6198,0x619c,
	0x6200,0x6204,0x6208,0x620c,0x6210,0x6214,0x6218,0x621c,0x6280,0x6284,0x6288,0x628c,0x6290,0x6294,0x6298,0x629c,
	0x6300,0x6304,0x6308,0x630c,0x6310,0x6314,0x7bff,0x5294,0x4210,0x001f,0x03e0,0x03ff,0x7c00,0x7c1f,0x7fe0,0x7fff

};

const u16 pixel_A_bmp[2112] __attribute__((aligned(4))) = {

	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	
	0x1609,0x1616,0x1616,0x1616,
	0x6716,0x6767,0x6767,0x6767,
	0x6716,0x6700,0x6767,0x6767,
	0x6716,0x6767,0x1667,0x1616,
	0x6716,0x6767,0x1616,0x0000,
	0x6716,0x6767,0x1616,0x6f00,
	0x6716,0x6767,0x1616,0x6f00,
	0x6716,0x6767,0x0067,0x6f00,
	
	0x1616,0x1616,0x1616,0x0916,
	0x6767,0x6767,0x6767,0x0067,
	0x6767,0x6767,0x0067,0x0067,
	0x1616,0x6767,0x6767,0x0067,
	0x1600,0x6716,0x6767,0x0067,
	0x166f,0x0016,0x6767,0x0067,
	0x166f,0x0016,0x6767,0x0067,
	0x1616,0x0016,0x6767,0x0067,
	
	0x0009,0x0000,0x0000,0x0000,
	0x6700,0x6767,0x6767,0x6767,
	0x6700,0x6700,0x6767,0x6767,
	0x6700,0x6767,0x6767,0x6767,
	0x6700,0x6767,0x6767,0x6767,
	0x6700,0x6767,0x6767,0x6767,
	0x6700,0x6767,0x6767,0x6767,
	0x6700,0x6767,0x6767,0x6767,
	
	0x0000,0x0000,0x0000,0xe800,
	0x6767,0x6767,0x6767,0x0067,
	0x6767,0x6767,0x0067,0x0067,
	0x6767,0x6767,0x6767,0x0067,
	0x6767,0x6767,0x6767,0x0067,
	0x6767,0x6767,0x6767,0x0067,
	0x6767,0x6767,0x6767,0x0067,
	0x6767,0x6767,0x6767,0x0067,
	
	0xef16,0xefef,0xefef,0xefef,
	0x67ef,0x6767,0x6767,0x6767,
	0x67ef,0x6767,0x6767,0x6767,
	0x67ef,0x6767,0x6767,0x6767,
	0x67ef,0x6767,0x6767,0x6767,
	0x67ef,0x6767,0x6767,0x6767,
	0x67ef,0x6767,0x6767,0x6767,
	0x67ef,0x6767,0x6767,0x6767,
	
	0x00ef,0xef16,0xefef,0x16ef,
	0x0067,0x67ef,0x6767,0x0067,
	0x0067,0x67ef,0x6767,0x0067,
	0x0067,0x67ef,0x6767,0x0067,
	0x0067,0x00ef,0x6767,0x0067,
	0x0067,0x0016,0x0000,0x1600,
	0x0067,0xefef,0xefef,0x00ef,
	0x0067,0x67ef,0x6767,0x0067,
	
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	
	0x0909,0x0909,0x0909,0x0000,
	0x0909,0x0909,0x0009,0xffff,
	0x0909,0x0009,0xff00,0xffff,
	0x0909,0xff00,0xffff,0xffff,
	0x0909,0xff00,0xffff,0xffff,
	0x0909,0xff00,0xffff,0xffff,
	0x0009,0xffff,0xf2ff,0xfff2,
	0xff00,0xffff,0xfff2,0xffff,
	
	0x0000,0x0909,0x0909,0x0909,
	0xffff,0x0900,0x0909,0x0909,
	0xffff,0x00ff,0x0909,0x0909,
	0xffff,0x00ff,0x0009,0x0909,
	0xffff,0xffff,0xff00,0x0900,
	0xf2ff,0xffff,0xffff,0x00ff,
	0xffff,0xfff2,0xffff,0x00ff,
	0xffff,0xffff,0xffff,0x00ff,
	
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	
	0x6716,0x6767,0x6767,0x1667,
	0x6716,0x6767,0x6767,0x1667,
	0x6716,0x6767,0x6767,0x6767,
	0x6716,0x6767,0x6767,0x1667,
	0x6716,0x6767,0x6767,0x1667,
	0x6716,0x6700,0x6767,0x6767,
	0x6716,0x6767,0x6767,0x6767,
	0x0000,0x0000,0x0000,0x0000,
	
	0x0016,0x0000,0x6767,0x0067,
	0x0016,0x6767,0x6767,0x0067,
	0x0000,0x6767,0x6767,0x0067,
	0x6716,0x6767,0x6767,0x0067,
	0x0016,0x6767,0x6767,0x0067,
	0x0000,0x6767,0x0067,0x0067,
	0x6767,0x6767,0x6767,0x0067,
	0x0000,0x0000,0x0000,0x0000,
	
	0x6700,0x6767,0x6767,0x6767,
	0x6700,0x6767,0x6767,0x6767,
	0x6700,0x6767,0x6767,0x6767,
	0x6700,0x6767,0x6767,0x6767,
	0x6700,0x6767,0x6767,0x6767,
	0x6700,0x6700,0x6767,0x6767,
	0x6700,0x6767,0x6767,0x6767,
	0x0009,0x0000,0x0000,0x0000,
	
	0x6767,0x6767,0x6767,0x0067,
	0x6767,0x6767,0x6767,0x0067,
	0x6767,0x6767,0x6767,0x0067,
	0x6767,0x6767,0x6767,0x0067,
	0x6767,0x6767,0x6767,0x0067,
	0x6767,0x6767,0x0067,0x0067,
	0x6767,0x6767,0x6767,0x0067,
	0x0000,0x0000,0x0000,0x0900,
	
	0x67ef,0x6767,0x6767,0x6767,
	0x67ef,0x6767,0x6767,0x6767,
	0x0000,0x6767,0x6767,0x6767,
	0xefef,0x0000,0x6767,0x6767,
	0x67ef,0xefef,0x0000,0x0000,
	0x67ef,0x6767,0xefef,0x00ef,
	0x67ef,0x6767,0x6767,0x0067,
	0x0016,0x0000,0x0000,0x1600,
	
	0x0067,0x67ef,0x6767,0x0067,
	0x0067,0x67ef,0x6767,0x0067,
	0xef00,0x6767,0x6767,0x0067,
	0xef00,0x6767,0x6767,0x0067,
	0x67ef,0x6767,0x6767,0x0067,
	0x67ef,0x6767,0x6767,0x0067,
	0x67ef,0x6767,0x6767,0x0000,
	0x00ef,0x0000,0x0000,0x1600,
	
	0x0909,0x0909,0x0009,0x0000,
	0x0909,0x0909,0xff00,0xffff,
	0x0909,0x0009,0xffff,0xffff,
	0x0909,0xff09,0xffff,0xffff,
	0x0009,0xff00,0xffff,0xffff,
	0xff00,0xffff,0xffff,0xffff,
	0xff00,0xffff,0xffff,0xffff,
	0x0009,0xffff,0xffff,0xffff,
	
	0xffff,0xffff,0xffff,0xffff,
	0xffff,0xffff,0xffff,0xffff,
	0xffff,0xffff,0xffff,0xffff,
	0xffff,0xffff,0xffff,0xffff,
	0xffff,0xffff,0xffff,0xffff,
	0xffff,0xffff,0xffff,0xffff,
	0xffff,0xffff,0xffff,0xffff,
	0xffff,0xffff,0xffff,0xffff,
	
	0xffff,0xffff,0xffff,0xffff,
	0xffff,0xffff,0xffff,0xffff,
	0xffff,0xffff,0xffff,0xffff,
	0xffff,0xffff,0xffff,0xffff,
	0xffff,0xffff,0xffff,0xffff,
	0xffff,0xffff,0xffff,0xffff,
	0xffff,0xffff,0xffff,0xffff,
	0xffff,0xffff,0xffff,0xffff,
	
	0x0900,0x0009,0x0909,0x0909,
	0x0900,0xff00,0x0900,0x0909,
	0x00ff,0xffff,0x0900,0x0909,
	0xffff,0xffff,0x0900,0x0900,
	0xffff,0xffff,0x00ff,0x00ff,
	0xffff,0xffff,0xffff,0x00ff,
	0xffff,0xffff,0xffff,0x00ff,
	0xffff,0xffff,0xffff,0x0900,
	
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0009,
	0x0909,0x0909,0x0909,0x7100,
	0x0909,0x0909,0x0009,0x7171,
	0x0909,0x0909,0x7100,0x7171,
	0x0909,0x0009,0x7171,0x7171,
	
	0x0909,0x0909,0x0009,0x0000,
	0x0909,0x0000,0x7100,0x7171,
	0x0000,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	
	0x0000,0x0900,0x0909,0x0909,
	0x7171,0x0071,0x0000,0x0909,
	0x7171,0x7171,0x7171,0x0000,
	0x7171,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0900,0x0909,0x0909,0x0909,
	0x0071,0x0909,0x0909,0x0909,
	0x7171,0x0900,0x0909,0x0909,
	0x7171,0x0071,0x0909,0x0909,
	0x7171,0x7171,0x0900,0x0909,
	
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	
	0x0909,0xff00,0xf2ff,0xffff,
	0x0909,0x0009,0xffff,0xfff2,
	0x0909,0x0909,0xff00,0xf2ff,
	0x0909,0x0909,0xff00,0xffff,
	0x0909,0x0909,0x0009,0x0000,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	
	0xffff,0xffff,0xffff,0xffff,
	0xf2ff,0xffff,0xffff,0xffff,
	0xf2f2,0xfff2,0xffff,0xf2f2,
	0xffff,0xf2f2,0xf2f2,0xf2f2,
	0xffff,0xffff,0xf2f2,0xffff,
	0xff00,0xffff,0xffff,0x00ff,
	0x0009,0xff00,0xffff,0x0900,
	0x0909,0x0009,0x0000,0x0909,
	
	0xf2ff,0xffff,0xffff,0xffff,
	0xfff2,0xffff,0xffff,0xffff,
	0xf2f2,0xffff,0xffff,0xfff2,
	0xf2ff,0xf2f2,0xf2f2,0xffff,
	0xffff,0xf2f2,0xfff2,0xffff,
	0xffff,0xffff,0xffff,0xffff,
	0x0000,0xffff,0xffff,0x0000,
	0x0909,0x0000,0x0000,0x0909,
	
	0xffff,0xffff,0x00ff,0x0909,
	0xffff,0xffff,0xffff,0x0900,
	0xffff,0xffff,0xffff,0x00ff,
	0xffff,0xffff,0xffff,0x09ff,
	0xffff,0xffff,0x00ff,0x0900,
	0xff00,0x00ff,0x0900,0x0909,
	0x0009,0x0900,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0009,
	0x0909,0x0909,0x0909,0x7100,
	0x0909,0x0909,0x0009,0x7171,
	0x0909,0x0909,0x7100,0x7171,
	0x0909,0x0009,0x7171,0x7171,
	
	0x0909,0x7100,0x7171,0x7171,
	0x0009,0x7171,0x7171,0x7171,
	0x7100,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	
	0x7171,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	
	0x7171,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	
	0x7171,0x7171,0x0071,0x0909,
	0x7171,0x7171,0x7171,0x0900,
	0x7171,0x7171,0x7171,0x0071,
	0x7171,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0900,0x0909,0x0909,0x0909,
	0x0071,0x0909,0x0909,0x0909,
	0x7171,0x0900,0x0909,0x0909,
	0x7171,0x0071,0x0909,0x0909,
	0x7171,0x7171,0x0900,0x0909,
	
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	
	0x0909,0x0909,0x0909,0x0000,
	0x0909,0x0909,0x0009,0x7171,
	0x0909,0x0009,0x7100,0x7171,
	0x0909,0x7100,0x7171,0x7171,
	0x0909,0x7100,0x7171,0x7171,
	0x0909,0x7100,0x7171,0x7171,
	0x0009,0x7171,0x2871,0x7128,
	0x7100,0x7171,0x7128,0x7171,
	
	0x0000,0x0909,0x0909,0x0909,
	0x7171,0x0900,0x0909,0x0909,
	0x7171,0x0071,0x0909,0x0909,
	0x7171,0x0071,0x0009,0x0909,
	0x7171,0x7171,0x7100,0x0900,
	0x2871,0x7171,0x7171,0x0071,
	0x7171,0x7128,0x7171,0x0071,
	0x7171,0x7171,0x7171,0x0071,
	
	0x0909,0x0909,0x0909,0x0000,
	0x0909,0x0909,0x0009,0x7171,
	0x0909,0x0009,0x7100,0x7171,
	0x0909,0x7100,0x7171,0x7171,
	0x0909,0x7100,0x7171,0x7171,
	0x0909,0x7100,0x7171,0x7171,
	0x0009,0x7171,0x2871,0x7128,
	0x7100,0x7171,0x7128,0x7171,
	
	0x0000,0x0909,0x0909,0x0909,
	0x7171,0x0900,0x0909,0x0909,
	0x7171,0x0071,0x0909,0x0909,
	0x7171,0x0071,0x0009,0x0909,
	0x7171,0x7171,0x7100,0x0900,
	0x2871,0x7171,0x7171,0x0071,
	0x7171,0x7128,0x7171,0x0071,
	0x7171,0x7171,0x7171,0x0071,
	
	0x0909,0x0909,0x0909,0x0000,
	0x0909,0x0909,0x0009,0x7171,
	0x0909,0x0009,0x7100,0x7171,
	0x0909,0x7100,0x7171,0x7171,
	0x0909,0x7100,0x7171,0x7171,
	0x0909,0x7100,0x7171,0x7171,
	0x0009,0x7171,0x2871,0x7128,
	0x7100,0x7171,0x7128,0x7171,
	
	0x0000,0x0909,0x0909,0x0909,
	0x7171,0x0900,0x0909,0x0909,
	0x7171,0x0071,0x0909,0x0909,
	0x7171,0x0071,0x0009,0x0909,
	0x7171,0x7171,0x7100,0x0900,
	0x2871,0x7171,0x7171,0x0071,
	0x7171,0x7128,0x7171,0x0071,
	0x7171,0x7171,0x7171,0x0071,
	
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	
	0x0909,0x0909,0x0009,0x0000,
	0x0909,0x0909,0x7100,0x7171,
	0x0909,0x0009,0x7171,0x7171,
	0x0909,0x7109,0x7171,0x7171,
	0x0009,0x7100,0x7171,0x7171,
	0x7100,0x7171,0x7171,0x7171,
	0x7100,0x7171,0x7171,0x7171,
	0x00eb,0x7171,0x7171,0x7171,
	
	0x7171,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	
	0x7171,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	
	0x7171,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	
	0x7171,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	
	0x7171,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	
	0x7171,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	0x7171,0x7171,0x7171,0x7171,
	
	0x0900,0x0009,0x0909,0x0909,
	0x0900,0x7100,0x0900,0x0909,
	0x0071,0x7171,0x0900,0x0909,
	0x7171,0x7171,0x0900,0x0900,
	0x7171,0x7171,0x0071,0x0071,
	0x7171,0x7171,0x7171,0x0071,
	0x7171,0x7171,0x7171,0x0071,
	0x7171,0x7171,0x7171,0x0900,
	
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	0x0909,0x0909,0x0909,0x0909,
	
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd,
	0xfdfd,0xfdfd,0xfdfd,0xfdfd
	
};
