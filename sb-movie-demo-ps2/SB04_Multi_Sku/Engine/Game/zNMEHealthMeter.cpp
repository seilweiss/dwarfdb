



void RenderBar(RwRaster* rast, float32 xoffset, float32* xywh, float32* uv_beg, float32* uv_end, xColor_tag c1, xColor_tag c2);
void RenderBars(float32 offset, int32 healthMax, int32 stage);
void RenderInner(float32 offset, int32 healthCurr, int32 healthMax, int32 stage);
void Render();

// RenderBar__Q214NMEHealthMeter9MeterDataFP8RwRasterfPCfPCfPCf10xColor_tag10xColor_tag
// Start address: 0x2804d0
void RenderBar(RwRaster* rast, float32 xoffset, float32* xywh, float32* uv_beg, float32* uv_end, xColor_tag c1, xColor_tag c2)
{
	RxObjSpace3DVertex vtxbuf[4];
	RxObjSpace3DVertex* vtx_horz;
	int32 i;
	xColor_tag currColor;
	float32 rat;
	float32 u;
	RwRGBA* _col;
	RwRGBA* _col;
	uint32 drawflag;
	// Line 342, Address: 0x2804d0, Func Offset: 0
	// Line 351, Address: 0x2804d8, Func Offset: 0x8
	// Line 342, Address: 0x2804dc, Func Offset: 0xc
	// Line 351, Address: 0x2804e0, Func Offset: 0x10
	// Line 342, Address: 0x2804e4, Func Offset: 0x14
	// Line 351, Address: 0x2804e8, Func Offset: 0x18
	// Line 342, Address: 0x2804ec, Func Offset: 0x1c
	// Line 351, Address: 0x2804f0, Func Offset: 0x20
	// Line 349, Address: 0x2804f4, Func Offset: 0x24
	// Line 357, Address: 0x2804f8, Func Offset: 0x28
	// Line 366, Address: 0x2804fc, Func Offset: 0x2c
	// Line 357, Address: 0x280500, Func Offset: 0x30
	// Line 366, Address: 0x280504, Func Offset: 0x34
	// Line 360, Address: 0x280510, Func Offset: 0x40
	// Line 366, Address: 0x280514, Func Offset: 0x44
	// Line 353, Address: 0x28051c, Func Offset: 0x4c
	// Line 366, Address: 0x280520, Func Offset: 0x50
	// Line 369, Address: 0x280524, Func Offset: 0x54
	// Line 357, Address: 0x280528, Func Offset: 0x58
	// Line 376, Address: 0x28052c, Func Offset: 0x5c
	// Line 366, Address: 0x280530, Func Offset: 0x60
	// Line 379, Address: 0x280534, Func Offset: 0x64
	// Line 376, Address: 0x280538, Func Offset: 0x68
	// Line 366, Address: 0x28053c, Func Offset: 0x6c
	// Line 376, Address: 0x280544, Func Offset: 0x74
	// Line 360, Address: 0x280548, Func Offset: 0x78
	// Line 366, Address: 0x28054c, Func Offset: 0x7c
	// Line 357, Address: 0x280550, Func Offset: 0x80
	// Line 353, Address: 0x280554, Func Offset: 0x84
	// Line 356, Address: 0x280560, Func Offset: 0x90
	// Line 353, Address: 0x280564, Func Offset: 0x94
	// Line 357, Address: 0x28056c, Func Offset: 0x9c
	// Line 356, Address: 0x280570, Func Offset: 0xa0
	// Line 353, Address: 0x280574, Func Offset: 0xa4
	// Line 357, Address: 0x280580, Func Offset: 0xb0
	// Line 353, Address: 0x280584, Func Offset: 0xb4
	// Line 357, Address: 0x28058c, Func Offset: 0xbc
	// Line 359, Address: 0x280590, Func Offset: 0xc0
	// Line 360, Address: 0x28059c, Func Offset: 0xcc
	// Line 382, Address: 0x2805b8, Func Offset: 0xe8
	// Line 366, Address: 0x2805bc, Func Offset: 0xec
	// Line 367, Address: 0x2805c0, Func Offset: 0xf0
	// Line 366, Address: 0x2805c4, Func Offset: 0xf4
	// Line 367, Address: 0x2805c8, Func Offset: 0xf8
	// Line 366, Address: 0x2805cc, Func Offset: 0xfc
	// Line 367, Address: 0x2805d0, Func Offset: 0x100
	// Line 366, Address: 0x2805d4, Func Offset: 0x104
	// Line 367, Address: 0x2805d8, Func Offset: 0x108
	// Line 382, Address: 0x2805dc, Func Offset: 0x10c
	// Line 366, Address: 0x2805e0, Func Offset: 0x110
	// Line 376, Address: 0x2805e8, Func Offset: 0x118
	// Line 366, Address: 0x2805ec, Func Offset: 0x11c
	// Line 376, Address: 0x2805f0, Func Offset: 0x120
	// Line 367, Address: 0x2805f4, Func Offset: 0x124
	// Line 376, Address: 0x2805f8, Func Offset: 0x128
	// Line 367, Address: 0x2805fc, Func Offset: 0x12c
	// Line 376, Address: 0x280604, Func Offset: 0x134
	// Line 367, Address: 0x280608, Func Offset: 0x138
	// Line 368, Address: 0x28060c, Func Offset: 0x13c
	// Line 369, Address: 0x280610, Func Offset: 0x140
	// Line 376, Address: 0x280614, Func Offset: 0x144
	// Line 377, Address: 0x280620, Func Offset: 0x150
	// Line 378, Address: 0x280630, Func Offset: 0x160
	// Line 379, Address: 0x280634, Func Offset: 0x164
	// Line 382, Address: 0x280638, Func Offset: 0x168
	// Line 460, Address: 0x280640, Func Offset: 0x170
	// Line 466, Address: 0x280648, Func Offset: 0x178
	// Line 475, Address: 0x28065c, Func Offset: 0x18c
	// Line 476, Address: 0x280670, Func Offset: 0x1a0
	// Line 478, Address: 0x280678, Func Offset: 0x1a8
	// Line 479, Address: 0x280680, Func Offset: 0x1b0
	// Func End, Address: 0x28069c, Func Offset: 0x1cc
}

// RenderBars__Q214NMEHealthMeter9MeterDataFfiii
// Start address: 0x2806a0
void MeterData::RenderBars(float32 offset, int32 healthMax, int32 stage)
{
	float32 xywh[4];
	float32 uv_beg[2];
	float32 uv_end[2];
	float32 uv_beg_rhs[2];
	float32 uv_end_rhs[2];
	// Line 301, Address: 0x2806a0, Func Offset: 0
	// Line 302, Address: 0x2806a4, Func Offset: 0x4
	// Line 301, Address: 0x2806a8, Func Offset: 0x8
	// Line 302, Address: 0x2806ac, Func Offset: 0xc
	// Line 301, Address: 0x2806b0, Func Offset: 0x10
	// Line 302, Address: 0x2806cc, Func Offset: 0x2c
	// Line 303, Address: 0x2806f0, Func Offset: 0x50
	// Line 302, Address: 0x2806f8, Func Offset: 0x58
	// Line 303, Address: 0x2806fc, Func Offset: 0x5c
	// Line 304, Address: 0x280720, Func Offset: 0x80
	// Line 308, Address: 0x280724, Func Offset: 0x84
	// Line 304, Address: 0x280728, Func Offset: 0x88
	// Line 305, Address: 0x280730, Func Offset: 0x90
	// Line 306, Address: 0x28073c, Func Offset: 0x9c
	// Line 304, Address: 0x280748, Func Offset: 0xa8
	// Line 305, Address: 0x280750, Func Offset: 0xb0
	// Line 306, Address: 0x280758, Func Offset: 0xb8
	// Line 308, Address: 0x28075c, Func Offset: 0xbc
	// Line 319, Address: 0x280764, Func Offset: 0xc4
	// Line 321, Address: 0x280770, Func Offset: 0xd0
	// Line 322, Address: 0x280788, Func Offset: 0xe8
	// Line 323, Address: 0x28078c, Func Offset: 0xec
	// Line 324, Address: 0x280790, Func Offset: 0xf0
	// Line 321, Address: 0x28079c, Func Offset: 0xfc
	// Line 322, Address: 0x2807a4, Func Offset: 0x104
	// Line 323, Address: 0x2807a8, Func Offset: 0x108
	// Line 322, Address: 0x2807ac, Func Offset: 0x10c
	// Line 323, Address: 0x2807b0, Func Offset: 0x110
	// Line 321, Address: 0x2807b4, Func Offset: 0x114
	// Line 324, Address: 0x2807b8, Func Offset: 0x118
	// Line 321, Address: 0x2807bc, Func Offset: 0x11c
	// Line 323, Address: 0x2807c8, Func Offset: 0x128
	// Line 324, Address: 0x2807cc, Func Offset: 0x12c
	// Line 325, Address: 0x2807dc, Func Offset: 0x13c
	// Line 328, Address: 0x2807e4, Func Offset: 0x144
	// Line 329, Address: 0x2807fc, Func Offset: 0x15c
	// Line 330, Address: 0x280800, Func Offset: 0x160
	// Line 331, Address: 0x280804, Func Offset: 0x164
	// Line 328, Address: 0x280810, Func Offset: 0x170
	// Line 329, Address: 0x280818, Func Offset: 0x178
	// Line 330, Address: 0x28081c, Func Offset: 0x17c
	// Line 329, Address: 0x280820, Func Offset: 0x180
	// Line 330, Address: 0x280824, Func Offset: 0x184
	// Line 328, Address: 0x280828, Func Offset: 0x188
	// Line 331, Address: 0x28082c, Func Offset: 0x18c
	// Line 328, Address: 0x280830, Func Offset: 0x190
	// Line 330, Address: 0x28083c, Func Offset: 0x19c
	// Line 331, Address: 0x280840, Func Offset: 0x1a0
	// Line 333, Address: 0x280850, Func Offset: 0x1b0
	// Line 313, Address: 0x280858, Func Offset: 0x1b8
	// Line 311, Address: 0x28085c, Func Offset: 0x1bc
	// Line 333, Address: 0x280864, Func Offset: 0x1c4
	// Line 312, Address: 0x280868, Func Offset: 0x1c8
	// Line 313, Address: 0x28086c, Func Offset: 0x1cc
	// Line 333, Address: 0x280870, Func Offset: 0x1d0
	// Line 312, Address: 0x280874, Func Offset: 0x1d4
	// Line 333, Address: 0x280878, Func Offset: 0x1d8
	// Line 313, Address: 0x28087c, Func Offset: 0x1dc
	// Line 333, Address: 0x280880, Func Offset: 0x1e0
	// Line 313, Address: 0x280894, Func Offset: 0x1f4
	// Line 333, Address: 0x280898, Func Offset: 0x1f8
	// Line 314, Address: 0x2808ac, Func Offset: 0x20c
	// Line 333, Address: 0x2808bc, Func Offset: 0x21c
	// Line 314, Address: 0x2808c0, Func Offset: 0x220
	// Line 315, Address: 0x2808c4, Func Offset: 0x224
	// Line 333, Address: 0x2808c8, Func Offset: 0x228
	// Line 315, Address: 0x2808cc, Func Offset: 0x22c
	// Line 333, Address: 0x2808d0, Func Offset: 0x230
	// Line 314, Address: 0x2808e4, Func Offset: 0x244
	// Line 333, Address: 0x2808ec, Func Offset: 0x24c
	// Line 314, Address: 0x2808f0, Func Offset: 0x250
	// Line 317, Address: 0x2808fc, Func Offset: 0x25c
	// Line 333, Address: 0x280900, Func Offset: 0x260
	// Line 318, Address: 0x280910, Func Offset: 0x270
	// Line 333, Address: 0x280918, Func Offset: 0x278
	// Func End, Address: 0x280934, Func Offset: 0x294
}

// RenderInner__Q214NMEHealthMeter9MeterDataFfiii
// Start address: 0x280940
void MeterData::RenderInner(float32 offset, int32 healthCurr, int32 healthMax, int32 stage)
{
	float32 percentFull;
	float32 xywh[4];
	float32 uv_beg[2];
	float32 uv_end[2];
	float32 xStart;
	int32 i;
	xColor_tag cLeft;
	xColor_tag cRight;
	float32 leftRatio;
	float32 rightRatio;
	// Line 189, Address: 0x280940, Func Offset: 0
	// Line 191, Address: 0x280944, Func Offset: 0x4
	// Line 189, Address: 0x280948, Func Offset: 0x8
	// Line 193, Address: 0x28095c, Func Offset: 0x1c
	// Line 189, Address: 0x280960, Func Offset: 0x20
	// Line 191, Address: 0x280980, Func Offset: 0x40
	// Line 190, Address: 0x280988, Func Offset: 0x48
	// Line 191, Address: 0x280994, Func Offset: 0x54
	// Line 192, Address: 0x28099c, Func Offset: 0x5c
	// Line 191, Address: 0x2809a0, Func Offset: 0x60
	// Line 193, Address: 0x2809b0, Func Offset: 0x70
	// Line 192, Address: 0x2809b4, Func Offset: 0x74
	// Line 191, Address: 0x2809b8, Func Offset: 0x78
	// Line 194, Address: 0x2809c4, Func Offset: 0x84
	// Line 193, Address: 0x2809c8, Func Offset: 0x88
	// Line 194, Address: 0x2809cc, Func Offset: 0x8c
	// Line 190, Address: 0x2809d4, Func Offset: 0x94
	// Line 191, Address: 0x2809dc, Func Offset: 0x9c
	// Line 190, Address: 0x2809e0, Func Offset: 0xa0
	// Line 198, Address: 0x2809e4, Func Offset: 0xa4
	// Line 190, Address: 0x2809e8, Func Offset: 0xa8
	// Line 192, Address: 0x2809ec, Func Offset: 0xac
	// Line 193, Address: 0x2809f0, Func Offset: 0xb0
	// Line 194, Address: 0x2809f4, Func Offset: 0xb4
	// Line 192, Address: 0x2809fc, Func Offset: 0xbc
	// Line 193, Address: 0x280a00, Func Offset: 0xc0
	// Line 198, Address: 0x280a04, Func Offset: 0xc4
	// Line 209, Address: 0x280a0c, Func Offset: 0xcc
	// Line 217, Address: 0x280a18, Func Offset: 0xd8
	// Line 219, Address: 0x280a28, Func Offset: 0xe8
	// Line 211, Address: 0x280a2c, Func Offset: 0xec
	// Line 219, Address: 0x280a30, Func Offset: 0xf0
	// Line 212, Address: 0x280a34, Func Offset: 0xf4
	// Line 219, Address: 0x280a38, Func Offset: 0xf8
	// Line 213, Address: 0x280a3c, Func Offset: 0xfc
	// Line 217, Address: 0x280a40, Func Offset: 0x100
	// Line 214, Address: 0x280a44, Func Offset: 0x104
	// Line 219, Address: 0x280a48, Func Offset: 0x108
	// Line 215, Address: 0x280a54, Func Offset: 0x114
	// Line 216, Address: 0x280a58, Func Offset: 0x118
	// Line 219, Address: 0x280a5c, Func Offset: 0x11c
	// Line 220, Address: 0x280a68, Func Offset: 0x128
	// Line 223, Address: 0x280a70, Func Offset: 0x130
	// Line 229, Address: 0x280a74, Func Offset: 0x134
	// Line 224, Address: 0x280a80, Func Offset: 0x140
	// Line 230, Address: 0x280a84, Func Offset: 0x144
	// Line 225, Address: 0x280a88, Func Offset: 0x148
	// Line 230, Address: 0x280a8c, Func Offset: 0x14c
	// Line 226, Address: 0x280a90, Func Offset: 0x150
	// Line 229, Address: 0x280a94, Func Offset: 0x154
	// Line 227, Address: 0x280a98, Func Offset: 0x158
	// Line 230, Address: 0x280a9c, Func Offset: 0x15c
	// Line 228, Address: 0x280aa0, Func Offset: 0x160
	// Line 230, Address: 0x280aa4, Func Offset: 0x164
	// Line 233, Address: 0x280ac0, Func Offset: 0x180
	// Line 234, Address: 0x280b18, Func Offset: 0x1d8
	// Line 233, Address: 0x280b1c, Func Offset: 0x1dc
	// Line 234, Address: 0x280b24, Func Offset: 0x1e4
	// Line 239, Address: 0x280b84, Func Offset: 0x244
	// Line 241, Address: 0x280b90, Func Offset: 0x250
	// Line 242, Address: 0x280b94, Func Offset: 0x254
	// Line 243, Address: 0x280b98, Func Offset: 0x258
	// Line 244, Address: 0x280b9c, Func Offset: 0x25c
	// Line 245, Address: 0x280ba0, Func Offset: 0x260
	// Line 246, Address: 0x280ba4, Func Offset: 0x264
	// Line 250, Address: 0x280ba8, Func Offset: 0x268
	// Line 249, Address: 0x280bac, Func Offset: 0x26c
	// Line 250, Address: 0x280bb0, Func Offset: 0x270
	// Line 268, Address: 0x280bbc, Func Offset: 0x27c
	// Line 206, Address: 0x280bc8, Func Offset: 0x288
	// Line 268, Address: 0x280bcc, Func Offset: 0x28c
	// Line 206, Address: 0x280bd0, Func Offset: 0x290
	// Line 207, Address: 0x280bd4, Func Offset: 0x294
	// Line 201, Address: 0x280bd8, Func Offset: 0x298
	// Line 207, Address: 0x280bdc, Func Offset: 0x29c
	// Line 200, Address: 0x280be0, Func Offset: 0x2a0
	// Line 207, Address: 0x280be4, Func Offset: 0x2a4
	// Line 202, Address: 0x280be8, Func Offset: 0x2a8
	// Line 206, Address: 0x280bec, Func Offset: 0x2ac
	// Line 203, Address: 0x280bf0, Func Offset: 0x2b0
	// Line 207, Address: 0x280bf4, Func Offset: 0x2b4
	// Line 204, Address: 0x280bf8, Func Offset: 0x2b8
	// Line 207, Address: 0x280bfc, Func Offset: 0x2bc
	// Line 205, Address: 0x280c00, Func Offset: 0x2c0
	// Line 207, Address: 0x280c04, Func Offset: 0x2c4
	// Line 268, Address: 0x280c18, Func Offset: 0x2d8
	// Line 207, Address: 0x280c1c, Func Offset: 0x2dc
	// Line 208, Address: 0x280c20, Func Offset: 0x2e0
	// Line 268, Address: 0x280c30, Func Offset: 0x2f0
	// Line 254, Address: 0x280c4c, Func Offset: 0x30c
	// Line 255, Address: 0x280c50, Func Offset: 0x310
	// Line 254, Address: 0x280c54, Func Offset: 0x314
	// Line 268, Address: 0x280c58, Func Offset: 0x318
	// Line 254, Address: 0x280c60, Func Offset: 0x320
	// Line 255, Address: 0x280c64, Func Offset: 0x324
	// Line 268, Address: 0x280c70, Func Offset: 0x330
	// Line 255, Address: 0x280c74, Func Offset: 0x334
	// Line 256, Address: 0x280cac, Func Offset: 0x36c
	// Line 255, Address: 0x280cb4, Func Offset: 0x374
	// Line 268, Address: 0x280cb8, Func Offset: 0x378
	// Line 256, Address: 0x280cc0, Func Offset: 0x380
	// Line 257, Address: 0x280d00, Func Offset: 0x3c0
	// Line 256, Address: 0x280d04, Func Offset: 0x3c4
	// Line 257, Address: 0x280d08, Func Offset: 0x3c8
	// Line 268, Address: 0x280d0c, Func Offset: 0x3cc
	// Line 257, Address: 0x280d18, Func Offset: 0x3d8
	// Line 268, Address: 0x280d5c, Func Offset: 0x41c
	// Line 258, Address: 0x280d60, Func Offset: 0x420
	// Line 268, Address: 0x280d64, Func Offset: 0x424
	// Line 259, Address: 0x280d68, Func Offset: 0x428
	// Line 268, Address: 0x280d6c, Func Offset: 0x42c
	// Line 259, Address: 0x280d80, Func Offset: 0x440
	// Line 268, Address: 0x280d88, Func Offset: 0x448
	// Line 260, Address: 0x280d8c, Func Offset: 0x44c
	// Line 259, Address: 0x280d90, Func Offset: 0x450
	// Line 260, Address: 0x280d94, Func Offset: 0x454
	// Line 268, Address: 0x280da0, Func Offset: 0x460
	// Line 260, Address: 0x280da4, Func Offset: 0x464
	// Line 261, Address: 0x280ddc, Func Offset: 0x49c
	// Line 260, Address: 0x280de4, Func Offset: 0x4a4
	// Line 268, Address: 0x280de8, Func Offset: 0x4a8
	// Line 261, Address: 0x280df0, Func Offset: 0x4b0
	// Line 262, Address: 0x280e30, Func Offset: 0x4f0
	// Line 261, Address: 0x280e34, Func Offset: 0x4f4
	// Line 262, Address: 0x280e38, Func Offset: 0x4f8
	// Line 268, Address: 0x280e3c, Func Offset: 0x4fc
	// Line 262, Address: 0x280e48, Func Offset: 0x508
	// Line 268, Address: 0x280e8c, Func Offset: 0x54c
	// Line 263, Address: 0x280e90, Func Offset: 0x550
	// Line 268, Address: 0x280e94, Func Offset: 0x554
	// Line 265, Address: 0x280e9c, Func Offset: 0x55c
	// Line 268, Address: 0x280ea0, Func Offset: 0x560
	// Line 265, Address: 0x280eac, Func Offset: 0x56c
	// Line 268, Address: 0x280eb0, Func Offset: 0x570
	// Line 266, Address: 0x280edc, Func Offset: 0x59c
	// Line 268, Address: 0x280ee0, Func Offset: 0x5a0
	// Func End, Address: 0x280f24, Func Offset: 0x5e4
}

// Render__Q214NMEHealthMeter9MeterDataFv
// Start address: 0x280f30
void MeterData::Render()
{
	_SDRenderState old_rendstat;
	float32 xoff;
	int32 i;
	// Line 156, Address: 0x280f30, Func Offset: 0
	// Line 159, Address: 0x280f50, Func Offset: 0x20
	// Line 161, Address: 0x280f5c, Func Offset: 0x2c
	// Line 162, Address: 0x280f68, Func Offset: 0x38
	// Line 166, Address: 0x280f70, Func Offset: 0x40
	// Line 168, Address: 0x280f74, Func Offset: 0x44
	// Line 166, Address: 0x280f78, Func Offset: 0x48
	// Line 168, Address: 0x280f7c, Func Offset: 0x4c
	// Line 166, Address: 0x280f80, Func Offset: 0x50
	// Line 168, Address: 0x280f84, Func Offset: 0x54
	// Line 171, Address: 0x280ff8, Func Offset: 0xc8
	// Line 173, Address: 0x281004, Func Offset: 0xd4
	// Line 174, Address: 0x2810b8, Func Offset: 0x188
	// Line 175, Address: 0x2810d0, Func Offset: 0x1a0
	// Line 178, Address: 0x2810e8, Func Offset: 0x1b8
	// Line 181, Address: 0x2810ec, Func Offset: 0x1bc
	// Line 178, Address: 0x2810f0, Func Offset: 0x1c0
	// Line 181, Address: 0x28111c, Func Offset: 0x1ec
	// Line 184, Address: 0x281124, Func Offset: 0x1f4
	// Line 185, Address: 0x28112c, Func Offset: 0x1fc
	// Func End, Address: 0x281150, Func Offset: 0x220
}

