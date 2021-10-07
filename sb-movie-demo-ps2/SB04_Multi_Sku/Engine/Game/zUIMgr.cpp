



void zUIMgrRenderElementHDR(zUIMgrHDRContext& context, zUI* ui);
void zUIMgrEnableHDR(uint8 enabled);
void zUIMgrExit();
void zUIMgrRender();
void zUIMgrUpdate(float32 dt);
void zUIMgrInit(zScene* s);

// zUIMgrRenderElementHDR__FR16zUIMgrHDRContextP3zUI
// Start address: 0x2b7220
void zUIMgrRenderElementHDR(zUIMgrHDRContext& context, zUI* ui)
{
	uint8 blends;
	xColor_tag save;
	void* oldAlphaTest;
	void* oldAlphaTestValue;
	// Line 419, Address: 0x2b7220, Func Offset: 0
	// Line 423, Address: 0x2b723c, Func Offset: 0x1c
	// Line 426, Address: 0x2b7248, Func Offset: 0x28
	// Line 428, Address: 0x2b725c, Func Offset: 0x3c
	// Line 431, Address: 0x2b7274, Func Offset: 0x54
	// Line 430, Address: 0x2b7284, Func Offset: 0x64
	// Line 431, Address: 0x2b7288, Func Offset: 0x68
	// Line 430, Address: 0x2b728c, Func Offset: 0x6c
	// Line 431, Address: 0x2b7290, Func Offset: 0x70
	// Line 430, Address: 0x2b7294, Func Offset: 0x74
	// Line 439, Address: 0x2b7298, Func Offset: 0x78
	// Line 430, Address: 0x2b729c, Func Offset: 0x7c
	// Line 439, Address: 0x2b72a0, Func Offset: 0x80
	// Line 431, Address: 0x2b72a4, Func Offset: 0x84
	// Line 430, Address: 0x2b72a8, Func Offset: 0x88
	// Line 431, Address: 0x2b72b4, Func Offset: 0x94
	// Line 439, Address: 0x2b72d4, Func Offset: 0xb4
	// Line 441, Address: 0x2b72e0, Func Offset: 0xc0
	// Line 442, Address: 0x2b72f4, Func Offset: 0xd4
	// Line 441, Address: 0x2b72f8, Func Offset: 0xd8
	// Line 442, Address: 0x2b72fc, Func Offset: 0xdc
	// Line 444, Address: 0x2b7308, Func Offset: 0xe8
	// Line 445, Address: 0x2b7314, Func Offset: 0xf4
	// Line 447, Address: 0x2b7360, Func Offset: 0x140
	// Line 448, Address: 0x2b7364, Func Offset: 0x144
	// Line 447, Address: 0x2b7368, Func Offset: 0x148
	// Line 448, Address: 0x2b736c, Func Offset: 0x14c
	// Line 447, Address: 0x2b7370, Func Offset: 0x150
	// Line 448, Address: 0x2b7374, Func Offset: 0x154
	// Line 447, Address: 0x2b7378, Func Offset: 0x158
	// Line 446, Address: 0x2b737c, Func Offset: 0x15c
	// Line 447, Address: 0x2b7380, Func Offset: 0x160
	// Line 448, Address: 0x2b738c, Func Offset: 0x16c
	// Line 449, Address: 0x2b7394, Func Offset: 0x174
	// Line 452, Address: 0x2b73a0, Func Offset: 0x180
	// Line 453, Address: 0x2b73a8, Func Offset: 0x188
	// Line 456, Address: 0x2b73b4, Func Offset: 0x194
	// Line 459, Address: 0x2b73c4, Func Offset: 0x1a4
	// Line 462, Address: 0x2b73d0, Func Offset: 0x1b0
	// Line 463, Address: 0x2b741c, Func Offset: 0x1fc
	// Line 455, Address: 0x2b7428, Func Offset: 0x208
	// Line 463, Address: 0x2b742c, Func Offset: 0x20c
	// Func End, Address: 0x2b7458, Func Offset: 0x238
}

// zUIMgrEnableHDR__Fb
// Start address: 0x2b7460
void zUIMgrEnableHDR(uint8 enabled)
{
	// Line 359, Address: 0x2b7460, Func Offset: 0
	// Func End, Address: 0x2b7468, Func Offset: 0x8
}

// zUIMgrExit__FP6zScene
// Start address: 0x2b7470
void zUIMgrExit()
{
	uint32 i;
	// Line 321, Address: 0x2b7470, Func Offset: 0
	// Line 322, Address: 0x2b7484, Func Offset: 0x14
	// Line 323, Address: 0x2b749c, Func Offset: 0x2c
	// Line 324, Address: 0x2b74e8, Func Offset: 0x78
	// Func End, Address: 0x2b7500, Func Offset: 0x90
}

// zUIMgrRender__Fv
// Start address: 0x2b7500
void zUIMgrRender()
{
	zUIMgrHDRContext context;
	int32 i;
	// Line 286, Address: 0x2b7500, Func Offset: 0
	// Line 288, Address: 0x2b7514, Func Offset: 0x14
	// Line 293, Address: 0x2b7520, Func Offset: 0x20
	// Line 297, Address: 0x2b752c, Func Offset: 0x2c
	// Line 300, Address: 0x2b7534, Func Offset: 0x34
	// Line 303, Address: 0x2b7554, Func Offset: 0x54
	// Line 305, Address: 0x2b756c, Func Offset: 0x6c
	// Line 308, Address: 0x2b757c, Func Offset: 0x7c
	// Line 289, Address: 0x2b75d8, Func Offset: 0xd8
	// Line 308, Address: 0x2b75e0, Func Offset: 0xe0
	// Line 294, Address: 0x2b75fc, Func Offset: 0xfc
	// Line 308, Address: 0x2b7600, Func Offset: 0x100
	// Line 294, Address: 0x2b7608, Func Offset: 0x108
	// Line 308, Address: 0x2b760c, Func Offset: 0x10c
	// Line 310, Address: 0x2b7644, Func Offset: 0x144
	// Line 313, Address: 0x2b7658, Func Offset: 0x158
	// Line 314, Address: 0x2b7664, Func Offset: 0x164
	// Line 318, Address: 0x2b769c, Func Offset: 0x19c
	// Func End, Address: 0x2b76b4, Func Offset: 0x1b4
}

// zUIMgrUpdate__Ff
// Start address: 0x2b76c0
void zUIMgrUpdate(float32 dt)
{
	uint32 i;
	uint32 i;
	// Line 225, Address: 0x2b76c0, Func Offset: 0
	// Line 227, Address: 0x2b76e8, Func Offset: 0x28
	// Line 231, Address: 0x2b76f8, Func Offset: 0x38
	// Line 233, Address: 0x2b76fc, Func Offset: 0x3c
	// Line 231, Address: 0x2b7704, Func Offset: 0x44
	// Line 233, Address: 0x2b7708, Func Offset: 0x48
	// Line 235, Address: 0x2b7714, Func Offset: 0x54
	// Line 236, Address: 0x2b7720, Func Offset: 0x60
	// Line 239, Address: 0x2b7728, Func Offset: 0x68
	// Line 244, Address: 0x2b772c, Func Offset: 0x6c
	// Line 248, Address: 0x2b7738, Func Offset: 0x78
	// Line 249, Address: 0x2b7754, Func Offset: 0x94
	// Line 228, Address: 0x2b7778, Func Offset: 0xb8
	// Line 251, Address: 0x2b7784, Func Offset: 0xc4
	// Line 253, Address: 0x2b77a8, Func Offset: 0xe8
	// Line 255, Address: 0x2b77ac, Func Offset: 0xec
	// Line 254, Address: 0x2b77b0, Func Offset: 0xf0
	// Line 255, Address: 0x2b77b4, Func Offset: 0xf4
	// Line 262, Address: 0x2b77bc, Func Offset: 0xfc
	// Line 261, Address: 0x2b77c0, Func Offset: 0x100
	// Line 262, Address: 0x2b77c4, Func Offset: 0x104
	// Line 264, Address: 0x2b77d8, Func Offset: 0x118
	// Line 276, Address: 0x2b7818, Func Offset: 0x158
	// Line 278, Address: 0x2b7874, Func Offset: 0x1b4
	// Line 276, Address: 0x2b787c, Func Offset: 0x1bc
	// Line 278, Address: 0x2b7880, Func Offset: 0x1c0
	// Line 280, Address: 0x2b78a8, Func Offset: 0x1e8
	// Line 282, Address: 0x2b78b0, Func Offset: 0x1f0
	// Line 283, Address: 0x2b78c8, Func Offset: 0x208
	// Func End, Address: 0x2b78e8, Func Offset: 0x228
}

// zUIMgrInit__FP6zScene
// Start address: 0x2b78f0
void zUIMgrInit(zScene* s)
{
	zUIText* ui1;
	int32 i;
	zUIImage* ui2;
	int32 i;
	zUIModel* ui3;
	int32 i;
	zUIBox* ui4;
	int32 i;
	zUIUserString* ui5;
	int32 i;
	zUIController* ui7;
	int32 i;
	uint32 i;
	// Line 99, Address: 0x2b78f0, Func Offset: 0
	// Line 103, Address: 0x2b7908, Func Offset: 0x18
	// Line 107, Address: 0x2b7910, Func Offset: 0x20
	// Line 106, Address: 0x2b7914, Func Offset: 0x24
	// Line 107, Address: 0x2b7918, Func Offset: 0x28
	// Line 108, Address: 0x2b7938, Func Offset: 0x48
	// Line 111, Address: 0x2b7960, Func Offset: 0x70
	// Line 110, Address: 0x2b7964, Func Offset: 0x74
	// Line 111, Address: 0x2b7968, Func Offset: 0x78
	// Line 112, Address: 0x2b7988, Func Offset: 0x98
	// Line 115, Address: 0x2b79b0, Func Offset: 0xc0
	// Line 114, Address: 0x2b79b4, Func Offset: 0xc4
	// Line 115, Address: 0x2b79b8, Func Offset: 0xc8
	// Line 116, Address: 0x2b79d8, Func Offset: 0xe8
	// Line 119, Address: 0x2b7a00, Func Offset: 0x110
	// Line 118, Address: 0x2b7a04, Func Offset: 0x114
	// Line 119, Address: 0x2b7a08, Func Offset: 0x118
	// Line 120, Address: 0x2b7a28, Func Offset: 0x138
	// Line 123, Address: 0x2b7a50, Func Offset: 0x160
	// Line 122, Address: 0x2b7a54, Func Offset: 0x164
	// Line 123, Address: 0x2b7a58, Func Offset: 0x168
	// Line 124, Address: 0x2b7a78, Func Offset: 0x188
	// Line 133, Address: 0x2b7aa0, Func Offset: 0x1b0
	// Line 132, Address: 0x2b7aa4, Func Offset: 0x1b4
	// Line 133, Address: 0x2b7aa8, Func Offset: 0x1b8
	// Line 134, Address: 0x2b7ac8, Func Offset: 0x1d8
	// Line 137, Address: 0x2b7af0, Func Offset: 0x200
	// Line 142, Address: 0x2b7b10, Func Offset: 0x220
	// Line 146, Address: 0x2b7b20, Func Offset: 0x230
	// Line 174, Address: 0x2b7b30, Func Offset: 0x240
	// Line 146, Address: 0x2b7bc4, Func Offset: 0x2d4
	// Line 174, Address: 0x2b7bc8, Func Offset: 0x2d8
	// Func End, Address: 0x2b7bfc, Func Offset: 0x30c
}

