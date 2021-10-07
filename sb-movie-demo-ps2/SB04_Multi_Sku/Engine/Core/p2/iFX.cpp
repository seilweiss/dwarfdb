



RxPipeline* iFXanimUVCreatePipe();
RxPipeline* iFXanimUVCreateMaterialPipe();
int32 iFXanimUVBridgeCallBack(RxPS2AllPipeData* ps2AllPipeData);

// iFXanimUVCreatePipe__Fv
// Start address: 0x4b15e0
RxPipeline* iFXanimUVCreatePipe()
{
	RxPipeline* newPipe;
	RxPipeline* matPipe;
	RxPipelineNode* plNode;
	RxPipeline* lPipe;
	RxNodeDefinition* ps2All;
	// Line 405, Address: 0x4b15e0, Func Offset: 0
	// Line 412, Address: 0x4b15f0, Func Offset: 0x10
	// Line 414, Address: 0x4b15fc, Func Offset: 0x1c
	// Line 416, Address: 0x4b1604, Func Offset: 0x24
	// Line 419, Address: 0x4b160c, Func Offset: 0x2c
	// Line 422, Address: 0x4b1614, Func Offset: 0x34
	// Line 425, Address: 0x4b1620, Func Offset: 0x40
	// Line 432, Address: 0x4b1638, Func Offset: 0x58
	// Line 436, Address: 0x4b1640, Func Offset: 0x60
	// Line 432, Address: 0x4b1648, Func Offset: 0x68
	// Line 436, Address: 0x4b164c, Func Offset: 0x6c
	// Line 443, Address: 0x4b165c, Func Offset: 0x7c
	// Line 447, Address: 0x4b1668, Func Offset: 0x88
	// Line 451, Address: 0x4b167c, Func Offset: 0x9c
	// Line 414, Address: 0x4b1684, Func Offset: 0xa4
	// Line 452, Address: 0x4b1688, Func Offset: 0xa8
	// Func End, Address: 0x4b16a0, Func Offset: 0xc0
}

// iFXanimUVCreateMaterialPipe__Fv
// Start address: 0x4b16a0
RxPipeline* iFXanimUVCreateMaterialPipe()
{
	RxPipeline* newPipe;
	RxPipeline* lockedPipe;
	RxNodeDefinition* ps2AllMat;
	RxPipelineNode* plNode;
	void* VUCodeArray[32];
	// Line 280, Address: 0x4b16a0, Func Offset: 0
	// Line 292, Address: 0x4b16b0, Func Offset: 0x10
	// Line 294, Address: 0x4b16b8, Func Offset: 0x18
	// Line 297, Address: 0x4b16c0, Func Offset: 0x20
	// Line 299, Address: 0x4b16cc, Func Offset: 0x2c
	// Line 302, Address: 0x4b16d4, Func Offset: 0x34
	// Line 306, Address: 0x4b16e0, Func Offset: 0x40
	// Line 312, Address: 0x4b16f4, Func Offset: 0x54
	// Line 306, Address: 0x4b16f8, Func Offset: 0x58
	// Line 312, Address: 0x4b16fc, Func Offset: 0x5c
	// Line 319, Address: 0x4b1710, Func Offset: 0x70
	// Line 323, Address: 0x4b1724, Func Offset: 0x84
	// Line 327, Address: 0x4b1738, Func Offset: 0x98
	// Line 331, Address: 0x4b174c, Func Offset: 0xac
	// Line 336, Address: 0x4b1760, Func Offset: 0xc0
	// Line 342, Address: 0x4b1774, Func Offset: 0xd4
	// Line 346, Address: 0x4b177c, Func Offset: 0xdc
	// Line 342, Address: 0x4b1784, Func Offset: 0xe4
	// Line 346, Address: 0x4b1788, Func Offset: 0xe8
	// Line 353, Address: 0x4b1798, Func Offset: 0xf8
	// Line 358, Address: 0x4b17a4, Func Offset: 0x104
	// Line 379, Address: 0x4b17a8, Func Offset: 0x108
	// Line 358, Address: 0x4b17ac, Func Offset: 0x10c
	// Line 379, Address: 0x4b17b8, Func Offset: 0x118
	// Line 359, Address: 0x4b17bc, Func Offset: 0x11c
	// Line 379, Address: 0x4b17c0, Func Offset: 0x120
	// Line 359, Address: 0x4b17c4, Func Offset: 0x124
	// Line 379, Address: 0x4b17c8, Func Offset: 0x128
	// Line 360, Address: 0x4b17cc, Func Offset: 0x12c
	// Line 361, Address: 0x4b17d4, Func Offset: 0x134
	// Line 362, Address: 0x4b17dc, Func Offset: 0x13c
	// Line 363, Address: 0x4b17e4, Func Offset: 0x144
	// Line 364, Address: 0x4b17ec, Func Offset: 0x14c
	// Line 365, Address: 0x4b17f4, Func Offset: 0x154
	// Line 379, Address: 0x4b17f8, Func Offset: 0x158
	// Line 382, Address: 0x4b1800, Func Offset: 0x160
	// Line 385, Address: 0x4b1814, Func Offset: 0x174
	// Line 388, Address: 0x4b1828, Func Offset: 0x188
	// Line 391, Address: 0x4b183c, Func Offset: 0x19c
	// Line 400, Address: 0x4b1850, Func Offset: 0x1b0
	// Line 295, Address: 0x4b1858, Func Offset: 0x1b8
	// Line 300, Address: 0x4b1860, Func Offset: 0x1c0
	// Line 401, Address: 0x4b1864, Func Offset: 0x1c4
	// Func End, Address: 0x4b187c, Func Offset: 0x1dc
}

// iFXanimUVBridgeCallBack__FP16RxPS2AllPipeData
// Start address: 0x4b1880
int32 iFXanimUVBridgeCallBack(RxPS2AllPipeData* ps2AllPipeData)
{
	int32 skyAlphaTex'404;
	<unknown fundamental type (0xa510)>* _rwDMAPktPtr'403;
	uint32 skyUserSwitch1'402;
	RwRaster* customRaster;
	ulong32 tmp;
	ulong32 tmp1;
	RwTexture* _nwtx;
	RwRaster* _nwrs;
	uint32 cFormat;
	ulong32 tmp;
	ulong32 __tmp1;
	ulong32 __tmp1;
	ulong32 __tmp1;
	ulong32 __tmp1;
	uint32 __skySwitchFlag;
	ulong32 __tmp;
	ulong32 __tmp1;
	void* _kohd;
	ulong32 tmp;
	rwPS2AllResEntryHeader* _p2rh;
	ulong32 __tmp;
	ulong32 __tmp1;
	// Line 67, Address: 0x4b1880, Func Offset: 0
	// Line 76, Address: 0x4b189c, Func Offset: 0x1c
	// Line 77, Address: 0x4b18a4, Func Offset: 0x24
	// Line 81, Address: 0x4b18a8, Func Offset: 0x28
	// Line 82, Address: 0x4b18b0, Func Offset: 0x30
	// Line 86, Address: 0x4b18c0, Func Offset: 0x40
	// Line 88, Address: 0x4b18d0, Func Offset: 0x50
	// Line 104, Address: 0x4b19b4, Func Offset: 0x134
	// Line 237, Address: 0x4b19c4, Func Offset: 0x144
	// Line 104, Address: 0x4b19c8, Func Offset: 0x148
	// Line 112, Address: 0x4b19dc, Func Offset: 0x15c
	// Line 111, Address: 0x4b19e0, Func Offset: 0x160
	// Line 112, Address: 0x4b19e4, Func Offset: 0x164
	// Line 246, Address: 0x4b19e8, Func Offset: 0x168
	// Line 112, Address: 0x4b19ec, Func Offset: 0x16c
	// Line 237, Address: 0x4b19f0, Func Offset: 0x170
	// Line 112, Address: 0x4b19f4, Func Offset: 0x174
	// Line 134, Address: 0x4b1a00, Func Offset: 0x180
	// Line 104, Address: 0x4b1a04, Func Offset: 0x184
	// Line 115, Address: 0x4b1a08, Func Offset: 0x188
	// Line 104, Address: 0x4b1a0c, Func Offset: 0x18c
	// Line 134, Address: 0x4b1a10, Func Offset: 0x190
	// Line 206, Address: 0x4b1a14, Func Offset: 0x194
	// Line 207, Address: 0x4b1a1c, Func Offset: 0x19c
	// Line 237, Address: 0x4b1a24, Func Offset: 0x1a4
	// Line 218, Address: 0x4b1a30, Func Offset: 0x1b0
	// Line 246, Address: 0x4b1a34, Func Offset: 0x1b4
	// Line 104, Address: 0x4b1a38, Func Offset: 0x1b8
	// Line 226, Address: 0x4b1a3c, Func Offset: 0x1bc
	// Line 104, Address: 0x4b1a40, Func Offset: 0x1c0
	// Line 227, Address: 0x4b1a44, Func Offset: 0x1c4
	// Line 116, Address: 0x4b1a48, Func Offset: 0x1c8
	// Line 217, Address: 0x4b1a4c, Func Offset: 0x1cc
	// Line 134, Address: 0x4b1a50, Func Offset: 0x1d0
	// Line 237, Address: 0x4b1a54, Func Offset: 0x1d4
	// Line 240, Address: 0x4b1a58, Func Offset: 0x1d8
	// Line 134, Address: 0x4b1a5c, Func Offset: 0x1dc
	// Line 229, Address: 0x4b1a60, Func Offset: 0x1e0
	// Line 139, Address: 0x4b1a6c, Func Offset: 0x1ec
	// Line 138, Address: 0x4b1a70, Func Offset: 0x1f0
	// Line 234, Address: 0x4b1a74, Func Offset: 0x1f4
	// Line 134, Address: 0x4b1a78, Func Offset: 0x1f8
	// Line 246, Address: 0x4b1a7c, Func Offset: 0x1fc
	// Line 134, Address: 0x4b1a84, Func Offset: 0x204
	// Line 246, Address: 0x4b1a8c, Func Offset: 0x20c
	// Line 134, Address: 0x4b1a90, Func Offset: 0x210
	// Line 139, Address: 0x4b1ab8, Func Offset: 0x238
	// Line 140, Address: 0x4b1abc, Func Offset: 0x23c
	// Line 141, Address: 0x4b1ac0, Func Offset: 0x240
	// Line 246, Address: 0x4b1ac4, Func Offset: 0x244
	// Line 147, Address: 0x4b1ac8, Func Offset: 0x248
	// Line 148, Address: 0x4b1acc, Func Offset: 0x24c
	// Line 149, Address: 0x4b1ad0, Func Offset: 0x250
	// Line 150, Address: 0x4b1ad4, Func Offset: 0x254
	// Line 153, Address: 0x4b1ad8, Func Offset: 0x258
	// Line 155, Address: 0x4b1adc, Func Offset: 0x25c
	// Line 156, Address: 0x4b1ae0, Func Offset: 0x260
	// Line 157, Address: 0x4b1ae4, Func Offset: 0x264
	// Line 162, Address: 0x4b1ae8, Func Offset: 0x268
	// Line 163, Address: 0x4b1aec, Func Offset: 0x26c
	// Line 164, Address: 0x4b1af0, Func Offset: 0x270
	// Line 165, Address: 0x4b1af4, Func Offset: 0x274
	// Line 168, Address: 0x4b1af8, Func Offset: 0x278
	// Line 170, Address: 0x4b1afc, Func Offset: 0x27c
	// Line 171, Address: 0x4b1b00, Func Offset: 0x280
	// Line 172, Address: 0x4b1b04, Func Offset: 0x284
	// Line 208, Address: 0x4b1b08, Func Offset: 0x288
	// Line 209, Address: 0x4b1b0c, Func Offset: 0x28c
	// Line 210, Address: 0x4b1b10, Func Offset: 0x290
	// Line 211, Address: 0x4b1b14, Func Offset: 0x294
	// Line 218, Address: 0x4b1b18, Func Offset: 0x298
	// Line 228, Address: 0x4b1b1c, Func Offset: 0x29c
	// Line 230, Address: 0x4b1b20, Func Offset: 0x2a0
	// Line 234, Address: 0x4b1b24, Func Offset: 0x2a4
	// Line 235, Address: 0x4b1b2c, Func Offset: 0x2ac
	// Line 238, Address: 0x4b1b30, Func Offset: 0x2b0
	// Line 240, Address: 0x4b1b34, Func Offset: 0x2b4
	// Line 246, Address: 0x4b1b38, Func Offset: 0x2b8
	// Line 251, Address: 0x4b1bd0, Func Offset: 0x350
	// Line 246, Address: 0x4b1bd4, Func Offset: 0x354
	// Line 251, Address: 0x4b1bd8, Func Offset: 0x358
	// Line 246, Address: 0x4b1bec, Func Offset: 0x36c
	// Line 251, Address: 0x4b1c00, Func Offset: 0x380
	// Line 246, Address: 0x4b1c04, Func Offset: 0x384
	// Line 251, Address: 0x4b1c08, Func Offset: 0x388
	// Line 246, Address: 0x4b1c0c, Func Offset: 0x38c
	// Line 251, Address: 0x4b1c14, Func Offset: 0x394
	// Line 246, Address: 0x4b1c18, Func Offset: 0x398
	// Line 251, Address: 0x4b1c1c, Func Offset: 0x39c
	// Line 254, Address: 0x4b1c5c, Func Offset: 0x3dc
	// Line 257, Address: 0x4b1c9c, Func Offset: 0x41c
	// Line 263, Address: 0x4b1d70, Func Offset: 0x4f0
	// Line 266, Address: 0x4b1ddc, Func Offset: 0x55c
	// Line 268, Address: 0x4b1df4, Func Offset: 0x574
	// Line 271, Address: 0x4b1e48, Func Offset: 0x5c8
	// Line 273, Address: 0x4b1ee8, Func Offset: 0x668
	// Line 88, Address: 0x4b1ef4, Func Offset: 0x674
	// Line 273, Address: 0x4b1f04, Func Offset: 0x684
	// Line 88, Address: 0x4b1f08, Func Offset: 0x688
	// Line 273, Address: 0x4b1f14, Func Offset: 0x694
	// Line 257, Address: 0x4b1f54, Func Offset: 0x6d4
	// Line 263, Address: 0x4b1f60, Func Offset: 0x6e0
	// Line 273, Address: 0x4b1f68, Func Offset: 0x6e8
	// Line 263, Address: 0x4b1f6c, Func Offset: 0x6ec
	// Line 273, Address: 0x4b1f70, Func Offset: 0x6f0
	// Line 263, Address: 0x4b1f74, Func Offset: 0x6f4
	// Line 273, Address: 0x4b1f78, Func Offset: 0x6f8
	// Line 263, Address: 0x4b1f80, Func Offset: 0x700
	// Line 273, Address: 0x4b1f84, Func Offset: 0x704
	// Line 263, Address: 0x4b1f88, Func Offset: 0x708
	// Line 273, Address: 0x4b1f94, Func Offset: 0x714
	// Line 263, Address: 0x4b1fa0, Func Offset: 0x720
	// Line 273, Address: 0x4b1fa4, Func Offset: 0x724
	// Line 274, Address: 0x4b1fd0, Func Offset: 0x750
	// Func End, Address: 0x4b1fec, Func Offset: 0x76c
}

