



void zEGeneratorEventCB(xBase* to, uint32 toEvent, xBase* toParamWidget);
void zEGenerator_TurnOn(zEGenerator* egen);
void zEGenerator_Render(zEGenerator* egen);
void zEGenerator_Update(zEGenerator* egen, xScene* sc, float32 dt);
void zEGenerator_Move();
void zEGenerator_Reset(zEGenerator* egen);
void zEGenerator_Load(zEGenerator* ent, xSerial* s);
void zEGenerator_Save(zEGenerator* ent, xSerial* s);
void zEGenerator_Setup(zEGenerator* egen);
void zEGenerator_Init(zEGenerator* egen, xEntAsset* asset);
void zEGenerator_Init(void* egen, void* asset);

// zEGeneratorEventCB__FP5xBaseP5xBaseUiPCfP5xBaseUi
// Start address: 0x37e0a0
void zEGeneratorEventCB(xBase* to, uint32 toEvent, xBase* toParamWidget)
{
	zEGenerator* egen;
	zShrapnelAsset* shrap;
	// Line 439, Address: 0x37e0a0, Func Offset: 0
	// Line 447, Address: 0x37e0a4, Func Offset: 0x4
	// Line 439, Address: 0x37e0a8, Func Offset: 0x8
	// Line 447, Address: 0x37e0bc, Func Offset: 0x1c
	// Line 450, Address: 0x37e198, Func Offset: 0xf8
	// Line 451, Address: 0x37e1a4, Func Offset: 0x104
	// Line 454, Address: 0x37e1ac, Func Offset: 0x10c
	// Line 455, Address: 0x37e1f0, Func Offset: 0x150
	// Line 458, Address: 0x37e1f8, Func Offset: 0x158
	// Line 462, Address: 0x37e258, Func Offset: 0x1b8
	// Line 463, Address: 0x37e300, Func Offset: 0x260
	// Line 467, Address: 0x37e308, Func Offset: 0x268
	// Line 468, Address: 0x37e328, Func Offset: 0x288
	// Line 472, Address: 0x37e330, Func Offset: 0x290
	// Line 473, Address: 0x37e350, Func Offset: 0x2b0
	// Line 476, Address: 0x37e358, Func Offset: 0x2b8
	// Line 478, Address: 0x37e378, Func Offset: 0x2d8
	// Line 479, Address: 0x37e37c, Func Offset: 0x2dc
	// Line 478, Address: 0x37e380, Func Offset: 0x2e0
	// Line 479, Address: 0x37e384, Func Offset: 0x2e4
	// Line 480, Address: 0x37e398, Func Offset: 0x2f8
	// Line 483, Address: 0x37e3a0, Func Offset: 0x300
	// Line 486, Address: 0x37e3c0, Func Offset: 0x320
	// Line 489, Address: 0x37e3c8, Func Offset: 0x328
	// Line 491, Address: 0x37e3dc, Func Offset: 0x33c
	// Line 492, Address: 0x37e3e4, Func Offset: 0x344
	// Line 494, Address: 0x37e3ec, Func Offset: 0x34c
	// Line 495, Address: 0x37e404, Func Offset: 0x364
	// Line 499, Address: 0x37e40c, Func Offset: 0x36c
	// Line 501, Address: 0x37e41c, Func Offset: 0x37c
	// Line 504, Address: 0x37e424, Func Offset: 0x384
	// Line 505, Address: 0x37e434, Func Offset: 0x394
	// Line 508, Address: 0x37e43c, Func Offset: 0x39c
	// Line 513, Address: 0x37e444, Func Offset: 0x3a4
	// Line 514, Address: 0x37e458, Func Offset: 0x3b8
	// Line 516, Address: 0x37e46c, Func Offset: 0x3cc
	// Line 523, Address: 0x37e474, Func Offset: 0x3d4
	// Line 527, Address: 0x37e480, Func Offset: 0x3e0
	// Line 458, Address: 0x37e4b0, Func Offset: 0x410
	// Line 527, Address: 0x37e4b4, Func Offset: 0x414
	// Line 459, Address: 0x37e4bc, Func Offset: 0x41c
	// Line 462, Address: 0x37e4c4, Func Offset: 0x424
	// Line 527, Address: 0x37e4c8, Func Offset: 0x428
	// Line 462, Address: 0x37e4d0, Func Offset: 0x430
	// Line 527, Address: 0x37e4d8, Func Offset: 0x438
	// Line 528, Address: 0x37e4ec, Func Offset: 0x44c
	// Func End, Address: 0x37e508, Func Offset: 0x468
}

// zEGenerator_TurnOn__FP11zEGenerator
// Start address: 0x37e510
void zEGenerator_TurnOn(zEGenerator* egen)
{
	zEGenAsset* zasset;
	xAnimPlay* aplay;
	xAnimSingle* asing;
	uint16 itgt;
	uint16 imp;
	int32 i;
	xLinkAsset* link;
	uint32 dstAssetID;
	xBase* b;
	xVec3 destOffset;
	xEnt* ent;
	int32 i;
	_tagLightningAdd add;
	// Line 245, Address: 0x37e510, Func Offset: 0
	// Line 246, Address: 0x37e53c, Func Offset: 0x2c
	// Line 250, Address: 0x37e548, Func Offset: 0x38
	// Line 248, Address: 0x37e54c, Func Offset: 0x3c
	// Line 250, Address: 0x37e550, Func Offset: 0x40
	// Line 257, Address: 0x37e55c, Func Offset: 0x4c
	// Line 250, Address: 0x37e560, Func Offset: 0x50
	// Line 252, Address: 0x37e564, Func Offset: 0x54
	// Line 257, Address: 0x37e568, Func Offset: 0x58
	// Line 260, Address: 0x37e56c, Func Offset: 0x5c
	// Line 263, Address: 0x37e570, Func Offset: 0x60
	// Line 260, Address: 0x37e578, Func Offset: 0x68
	// Line 263, Address: 0x37e57c, Func Offset: 0x6c
	// Line 264, Address: 0x37e5d4, Func Offset: 0xc4
	// Line 265, Address: 0x37e5e0, Func Offset: 0xd0
	// Line 266, Address: 0x37e5ec, Func Offset: 0xdc
	// Line 267, Address: 0x37e5f0, Func Offset: 0xe0
	// Line 265, Address: 0x37e5f8, Func Offset: 0xe8
	// Line 267, Address: 0x37e5fc, Func Offset: 0xec
	// Line 265, Address: 0x37e604, Func Offset: 0xf4
	// Line 267, Address: 0x37e608, Func Offset: 0xf8
	// Line 268, Address: 0x37e620, Func Offset: 0x110
	// Line 270, Address: 0x37e628, Func Offset: 0x118
	// Line 273, Address: 0x37e630, Func Offset: 0x120
	// Line 270, Address: 0x37e634, Func Offset: 0x124
	// Line 274, Address: 0x37e638, Func Offset: 0x128
	// Line 275, Address: 0x37e63c, Func Offset: 0x12c
	// Line 273, Address: 0x37e640, Func Offset: 0x130
	// Line 274, Address: 0x37e644, Func Offset: 0x134
	// Line 276, Address: 0x37e648, Func Offset: 0x138
	// Line 275, Address: 0x37e650, Func Offset: 0x140
	// Line 278, Address: 0x37e654, Func Offset: 0x144
	// Line 279, Address: 0x37e65c, Func Offset: 0x14c
	// Line 280, Address: 0x37e66c, Func Offset: 0x15c
	// Line 281, Address: 0x37e678, Func Offset: 0x168
	// Line 283, Address: 0x37e684, Func Offset: 0x174
	// Line 284, Address: 0x37e6a4, Func Offset: 0x194
	// Line 286, Address: 0x37e6d4, Func Offset: 0x1c4
	// Line 287, Address: 0x37e6dc, Func Offset: 0x1cc
	// Line 289, Address: 0x37e6e4, Func Offset: 0x1d4
	// Line 291, Address: 0x37e6fc, Func Offset: 0x1ec
	// Line 292, Address: 0x37e704, Func Offset: 0x1f4
	// Line 294, Address: 0x37e714, Func Offset: 0x204
	// Line 296, Address: 0x37e774, Func Offset: 0x264
	// Line 301, Address: 0x37e77c, Func Offset: 0x26c
	// Line 305, Address: 0x37e784, Func Offset: 0x274
	// Line 312, Address: 0x37e79c, Func Offset: 0x28c
	// Line 314, Address: 0x37e7a0, Func Offset: 0x290
	// Line 316, Address: 0x37e7ac, Func Offset: 0x29c
	// Line 318, Address: 0x37e7b4, Func Offset: 0x2a4
	// Line 319, Address: 0x37e7bc, Func Offset: 0x2ac
	// Line 321, Address: 0x37e7c0, Func Offset: 0x2b0
	// Line 327, Address: 0x37e7d0, Func Offset: 0x2c0
	// Line 332, Address: 0x37e7e0, Func Offset: 0x2d0
	// Line 333, Address: 0x37e7ec, Func Offset: 0x2dc
	// Line 332, Address: 0x37e7f0, Func Offset: 0x2e0
	// Line 333, Address: 0x37e7f4, Func Offset: 0x2e4
	// Line 334, Address: 0x37e800, Func Offset: 0x2f0
	// Line 336, Address: 0x37e808, Func Offset: 0x2f8
	// Line 334, Address: 0x37e80c, Func Offset: 0x2fc
	// Line 337, Address: 0x37e810, Func Offset: 0x300
	// Line 339, Address: 0x37e81c, Func Offset: 0x30c
	// Line 337, Address: 0x37e820, Func Offset: 0x310
	// Line 340, Address: 0x37e82c, Func Offset: 0x31c
	// Line 339, Address: 0x37e834, Func Offset: 0x324
	// Line 340, Address: 0x37e838, Func Offset: 0x328
	// Line 345, Address: 0x37e83c, Func Offset: 0x32c
	// Line 338, Address: 0x37e844, Func Offset: 0x334
	// Line 345, Address: 0x37e848, Func Offset: 0x338
	// Line 348, Address: 0x37e84c, Func Offset: 0x33c
	// Line 345, Address: 0x37e850, Func Offset: 0x340
	// Line 346, Address: 0x37e854, Func Offset: 0x344
	// Line 348, Address: 0x37e85c, Func Offset: 0x34c
	// Line 346, Address: 0x37e860, Func Offset: 0x350
	// Line 352, Address: 0x37e864, Func Offset: 0x354
	// Line 348, Address: 0x37e868, Func Offset: 0x358
	// Line 338, Address: 0x37e870, Func Offset: 0x360
	// Line 348, Address: 0x37e874, Func Offset: 0x364
	// Line 338, Address: 0x37e880, Func Offset: 0x370
	// Line 349, Address: 0x37e884, Func Offset: 0x374
	// Line 348, Address: 0x37e888, Func Offset: 0x378
	// Line 349, Address: 0x37e88c, Func Offset: 0x37c
	// Line 350, Address: 0x37e894, Func Offset: 0x384
	// Line 348, Address: 0x37e898, Func Offset: 0x388
	// Line 350, Address: 0x37e89c, Func Offset: 0x38c
	// Line 348, Address: 0x37e8a0, Func Offset: 0x390
	// Line 351, Address: 0x37e8a4, Func Offset: 0x394
	// Line 350, Address: 0x37e8a8, Func Offset: 0x398
	// Line 351, Address: 0x37e8ac, Func Offset: 0x39c
	// Line 354, Address: 0x37e8b0, Func Offset: 0x3a0
	// Line 353, Address: 0x37e8b4, Func Offset: 0x3a4
	// Line 351, Address: 0x37e8b8, Func Offset: 0x3a8
	// Line 353, Address: 0x37e8bc, Func Offset: 0x3ac
	// Line 352, Address: 0x37e8c0, Func Offset: 0x3b0
	// Line 354, Address: 0x37e8c4, Func Offset: 0x3b4
	// Line 348, Address: 0x37e8c8, Func Offset: 0x3b8
	// Line 356, Address: 0x37e8cc, Func Offset: 0x3bc
	// Line 361, Address: 0x37e8dc, Func Offset: 0x3cc
	// Line 362, Address: 0x37e8e4, Func Offset: 0x3d4
	// Line 364, Address: 0x37e8e8, Func Offset: 0x3d8
	// Line 365, Address: 0x37e948, Func Offset: 0x438
	// Line 366, Address: 0x37e95c, Func Offset: 0x44c
	// Line 367, Address: 0x37e968, Func Offset: 0x458
	// Line 373, Address: 0x37e9ac, Func Offset: 0x49c
	// Line 372, Address: 0x37e9b0, Func Offset: 0x4a0
	// Line 373, Address: 0x37e9b4, Func Offset: 0x4a4
	// Line 367, Address: 0x37e9b8, Func Offset: 0x4a8
	// Line 374, Address: 0x37e9bc, Func Offset: 0x4ac
	// Line 372, Address: 0x37e9c0, Func Offset: 0x4b0
	// Line 374, Address: 0x37e9c4, Func Offset: 0x4b4
	// Line 372, Address: 0x37e9c8, Func Offset: 0x4b8
	// Line 367, Address: 0x37e9cc, Func Offset: 0x4bc
	// Line 374, Address: 0x37e9d0, Func Offset: 0x4c0
	// Line 375, Address: 0x37e9d4, Func Offset: 0x4c4
	// Line 372, Address: 0x37e9d8, Func Offset: 0x4c8
	// Line 367, Address: 0x37e9dc, Func Offset: 0x4cc
	// Line 375, Address: 0x37e9e0, Func Offset: 0x4d0
	// Line 367, Address: 0x37e9e4, Func Offset: 0x4d4
	// Line 376, Address: 0x37e9e8, Func Offset: 0x4d8
	// Line 372, Address: 0x37e9ec, Func Offset: 0x4dc
	// Line 367, Address: 0x37e9f0, Func Offset: 0x4e0
	// Line 376, Address: 0x37e9f4, Func Offset: 0x4e4
	// Line 367, Address: 0x37e9f8, Func Offset: 0x4e8
	// Line 377, Address: 0x37e9fc, Func Offset: 0x4ec
	// Line 372, Address: 0x37ea00, Func Offset: 0x4f0
	// Line 367, Address: 0x37ea04, Func Offset: 0x4f4
	// Line 372, Address: 0x37ea08, Func Offset: 0x4f8
	// Line 379, Address: 0x37ea0c, Func Offset: 0x4fc
	// Line 377, Address: 0x37ea10, Func Offset: 0x500
	// Line 372, Address: 0x37ea14, Func Offset: 0x504
	// Line 379, Address: 0x37ea18, Func Offset: 0x508
	// Line 385, Address: 0x37ea24, Func Offset: 0x514
	// Func End, Address: 0x37ea54, Func Offset: 0x544
}

// zEGenerator_Render__FP11zEGenerator
// Start address: 0x37ea60
void zEGenerator_Render(zEGenerator* egen)
{
	// Line 232, Address: 0x37ea60, Func Offset: 0
	// Func End, Address: 0x37ea68, Func Offset: 0x8
}

// zEGenerator_Update__FP11zEGeneratorP6xScenef
// Start address: 0x37ea70
void zEGenerator_Update(zEGenerator* egen, xScene* sc, float32 dt)
{
	xBase* b;
	zEnt* ent;
	// Line 184, Address: 0x37ea70, Func Offset: 0
	// Line 186, Address: 0x37ea8c, Func Offset: 0x1c
	// Line 189, Address: 0x37ea94, Func Offset: 0x24
	// Line 186, Address: 0x37ea9c, Func Offset: 0x2c
	// Line 189, Address: 0x37eaa0, Func Offset: 0x30
	// Line 191, Address: 0x37eafc, Func Offset: 0x8c
	// Line 193, Address: 0x37eb04, Func Offset: 0x94
	// Line 198, Address: 0x37eb14, Func Offset: 0xa4
	// Line 201, Address: 0x37eb24, Func Offset: 0xb4
	// Line 202, Address: 0x37eb38, Func Offset: 0xc8
	// Line 205, Address: 0x37eb40, Func Offset: 0xd0
	// Line 210, Address: 0x37eba4, Func Offset: 0x134
	// Line 211, Address: 0x37ebac, Func Offset: 0x13c
	// Line 213, Address: 0x37ebb8, Func Offset: 0x148
	// Line 214, Address: 0x37ebc0, Func Offset: 0x150
	// Line 219, Address: 0x37ebc8, Func Offset: 0x158
	// Line 220, Address: 0x37ebe0, Func Offset: 0x170
	// Line 221, Address: 0x37ebe4, Func Offset: 0x174
	// Line 222, Address: 0x37ebf0, Func Offset: 0x180
	// Line 223, Address: 0x37ec48, Func Offset: 0x1d8
	// Line 226, Address: 0x37ec6c, Func Offset: 0x1fc
	// Func End, Address: 0x37ec88, Func Offset: 0x218
}

// zEGenerator_Move__FP11zEGeneratorP6xScenef
// Start address: 0x37ec90
void zEGenerator_Move()
{
	// Line 181, Address: 0x37ec90, Func Offset: 0
	// Func End, Address: 0x37ec98, Func Offset: 0x8
}

// zEGenerator_Reset__FP11zEGeneratorP6xScene
// Start address: 0x37eca0
void zEGenerator_Reset(zEGenerator* egen)
{
	zEGenAsset* zasset;
	// Line 155, Address: 0x37eca0, Func Offset: 0
	// Line 157, Address: 0x37ecb8, Func Offset: 0x18
	// Line 159, Address: 0x37ecc0, Func Offset: 0x20
	// Line 161, Address: 0x37ecc4, Func Offset: 0x24
	// Line 163, Address: 0x37eccc, Func Offset: 0x2c
	// Line 167, Address: 0x37ecdc, Func Offset: 0x3c
	// Line 170, Address: 0x37ed28, Func Offset: 0x88
	// Line 172, Address: 0x37ed38, Func Offset: 0x98
	// Line 173, Address: 0x37ed40, Func Offset: 0xa0
	// Line 175, Address: 0x37ed44, Func Offset: 0xa4
	// Line 176, Address: 0x37ed5c, Func Offset: 0xbc
	// Line 165, Address: 0x37ed6c, Func Offset: 0xcc
	// Line 176, Address: 0x37ed74, Func Offset: 0xd4
	// Func End, Address: 0x37eda0, Func Offset: 0x100
}

// zEGenerator_Load__FP11zEGeneratorP7xSerial
// Start address: 0x37eda0
void zEGenerator_Load(zEGenerator* ent, xSerial* s)
{
	// Line 147, Address: 0x37eda0, Func Offset: 0
	// Func End, Address: 0x37eda8, Func Offset: 0x8
}

// zEGenerator_Save__FP11zEGeneratorP7xSerial
// Start address: 0x37edb0
void zEGenerator_Save(zEGenerator* ent, xSerial* s)
{
	// Line 128, Address: 0x37edb0, Func Offset: 0
	// Func End, Address: 0x37edb8, Func Offset: 0x8
}

// zEGenerator_Setup__FP11zEGeneratorP6xScene
// Start address: 0x37edc0
void zEGenerator_Setup(zEGenerator* egen)
{
	int32 i;
	xLinkAsset* la;
	xBase* b;
	// Line 97, Address: 0x37edc0, Func Offset: 0
	// Line 98, Address: 0x37edd8, Func Offset: 0x18
	// Line 100, Address: 0x37ede0, Func Offset: 0x20
	// Line 101, Address: 0x37ede4, Func Offset: 0x24
	// Line 114, Address: 0x37edf4, Func Offset: 0x34
	// Line 104, Address: 0x37ee1c, Func Offset: 0x5c
	// Line 114, Address: 0x37ee20, Func Offset: 0x60
	// Line 105, Address: 0x37ee2c, Func Offset: 0x6c
	// Line 114, Address: 0x37ee30, Func Offset: 0x70
	// Line 107, Address: 0x37ee3c, Func Offset: 0x7c
	// Line 114, Address: 0x37ee40, Func Offset: 0x80
	// Line 113, Address: 0x37ee64, Func Offset: 0xa4
	// Line 114, Address: 0x37ee68, Func Offset: 0xa8
	// Func End, Address: 0x37ee9c, Func Offset: 0xdc
}

// zEGenerator_Init__FP11zEGeneratorP9xEntAsset
// Start address: 0x37eea0
void zEGenerator_Init(zEGenerator* egen, xEntAsset* asset)
{
	zEGenAsset* zasset;
	void* buf;
	uint32 size;
	// Line 45, Address: 0x37eea0, Func Offset: 0
	// Line 51, Address: 0x37eea4, Func Offset: 0x4
	// Line 45, Address: 0x37eea8, Func Offset: 0x8
	// Line 51, Address: 0x37eeac, Func Offset: 0xc
	// Line 45, Address: 0x37eeb0, Func Offset: 0x10
	// Line 51, Address: 0x37eebc, Func Offset: 0x1c
	// Line 54, Address: 0x37eec4, Func Offset: 0x24
	// Line 56, Address: 0x37eec8, Func Offset: 0x28
	// Line 57, Address: 0x37eed4, Func Offset: 0x34
	// Line 63, Address: 0x37eedc, Func Offset: 0x3c
	// Line 64, Address: 0x37eee0, Func Offset: 0x40
	// Line 63, Address: 0x37eee4, Func Offset: 0x44
	// Line 64, Address: 0x37eee8, Func Offset: 0x48
	// Line 63, Address: 0x37eeec, Func Offset: 0x4c
	// Line 65, Address: 0x37eef0, Func Offset: 0x50
	// Line 64, Address: 0x37eef4, Func Offset: 0x54
	// Line 65, Address: 0x37eef8, Func Offset: 0x58
	// Line 66, Address: 0x37eefc, Func Offset: 0x5c
	// Line 65, Address: 0x37ef04, Func Offset: 0x64
	// Line 66, Address: 0x37ef08, Func Offset: 0x68
	// Line 68, Address: 0x37ef0c, Func Offset: 0x6c
	// Line 71, Address: 0x37ef14, Func Offset: 0x74
	// Line 93, Address: 0x37ef1c, Func Offset: 0x7c
	// Line 74, Address: 0x37ef38, Func Offset: 0x98
	// Line 93, Address: 0x37ef3c, Func Offset: 0x9c
	// Line 77, Address: 0x37ef48, Func Offset: 0xa8
	// Line 93, Address: 0x37ef4c, Func Offset: 0xac
	// Line 81, Address: 0x37ef80, Func Offset: 0xe0
	// Line 93, Address: 0x37ef84, Func Offset: 0xe4
	// Line 81, Address: 0x37ef88, Func Offset: 0xe8
	// Line 93, Address: 0x37ef8c, Func Offset: 0xec
	// Line 81, Address: 0x37ef90, Func Offset: 0xf0
	// Line 93, Address: 0x37ef94, Func Offset: 0xf4
	// Line 81, Address: 0x37ef98, Func Offset: 0xf8
	// Line 93, Address: 0x37ef9c, Func Offset: 0xfc
	// Line 81, Address: 0x37efa0, Func Offset: 0x100
	// Line 93, Address: 0x37efb0, Func Offset: 0x110
	// Line 83, Address: 0x37efd8, Func Offset: 0x138
	// Line 93, Address: 0x37efdc, Func Offset: 0x13c
	// Func End, Address: 0x37f004, Func Offset: 0x164
}

// zEGenerator_Init__FPvPv
// Start address: 0x37f010
void zEGenerator_Init(void* egen, void* asset)
{
	// Line 41, Address: 0x37f010, Func Offset: 0
	// Func End, Address: 0x37f018, Func Offset: 0x8
}

