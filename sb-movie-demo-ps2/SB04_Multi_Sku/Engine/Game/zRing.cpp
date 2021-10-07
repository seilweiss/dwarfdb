



uint8 CheckIfPlayerCrossed(xMat4x3& mat, xVec3& lastCheckedPos);
void Show(xModelInstance* modelInstance);
void Render(xModelInstance* modelInstance);
void Update(float32 dt, xModelInstance* modelInstance);
void DrawShadow(xMat4x3* Mat, RwRaster* rwras, float32 factor, float32 distance);
void ChangeRingColor(float32 dt, xModelInstance* modelInstance);
void CalculateBubbleOffsets();
void Reset();
void Load(xBase& data, xDynAsset& asset);

// CheckIfPlayerCrossed__5zRingFRC7xMat4x3R5xVec3
// Start address: 0x301c50
uint8 zRing::CheckIfPlayerCrossed(xMat4x3& mat, xVec3& lastCheckedPos)
{
	xVec3 end;
	xRay3 ray;
	xPlane plane;
	float32 t;
	xVec3 ringCenter;
	// Line 664, Address: 0x301c50, Func Offset: 0
	// Line 665, Address: 0x301c60, Func Offset: 0x10
	// Line 674, Address: 0x301c74, Func Offset: 0x24
	// Line 682, Address: 0x301c78, Func Offset: 0x28
	// Line 674, Address: 0x301c7c, Func Offset: 0x2c
	// Line 682, Address: 0x301c80, Func Offset: 0x30
	// Line 674, Address: 0x301c84, Func Offset: 0x34
	// Line 681, Address: 0x301c88, Func Offset: 0x38
	// Line 682, Address: 0x301c94, Func Offset: 0x44
	// Line 681, Address: 0x301c98, Func Offset: 0x48
	// Line 674, Address: 0x301c9c, Func Offset: 0x4c
	// Line 680, Address: 0x301ca8, Func Offset: 0x58
	// Line 681, Address: 0x301cb4, Func Offset: 0x64
	// Line 680, Address: 0x301cbc, Func Offset: 0x6c
	// Line 681, Address: 0x301cc8, Func Offset: 0x78
	// Line 682, Address: 0x301d04, Func Offset: 0xb4
	// Line 681, Address: 0x301d08, Func Offset: 0xb8
	// Line 682, Address: 0x301d0c, Func Offset: 0xbc
	// Line 681, Address: 0x301d10, Func Offset: 0xc0
	// Line 682, Address: 0x301d14, Func Offset: 0xc4
	// Line 683, Address: 0x301d5c, Func Offset: 0x10c
	// Line 685, Address: 0x301d60, Func Offset: 0x110
	// Line 683, Address: 0x301d64, Func Offset: 0x114
	// Line 685, Address: 0x301d68, Func Offset: 0x118
	// Line 683, Address: 0x301d6c, Func Offset: 0x11c
	// Line 689, Address: 0x301d78, Func Offset: 0x128
	// Line 684, Address: 0x301d7c, Func Offset: 0x12c
	// Line 688, Address: 0x301d90, Func Offset: 0x140
	// Line 689, Address: 0x301d94, Func Offset: 0x144
	// Line 693, Address: 0x301db0, Func Offset: 0x160
	// Line 694, Address: 0x301df0, Func Offset: 0x1a0
	// Line 695, Address: 0x301e30, Func Offset: 0x1e0
	// Line 696, Address: 0x301e40, Func Offset: 0x1f0
	// Line 698, Address: 0x301e54, Func Offset: 0x204
	// Line 700, Address: 0x301e58, Func Offset: 0x208
	// Line 796, Address: 0x301e60, Func Offset: 0x210
	// Line 799, Address: 0x301e64, Func Offset: 0x214
	// Line 796, Address: 0x301e68, Func Offset: 0x218
	// Line 799, Address: 0x301e6c, Func Offset: 0x21c
	// Line 796, Address: 0x301e70, Func Offset: 0x220
	// Line 799, Address: 0x301e74, Func Offset: 0x224
	// Line 796, Address: 0x301e78, Func Offset: 0x228
	// Line 799, Address: 0x301e7c, Func Offset: 0x22c
	// Line 796, Address: 0x301e98, Func Offset: 0x248
	// Line 799, Address: 0x301e9c, Func Offset: 0x24c
	// Line 800, Address: 0x301ea0, Func Offset: 0x250
	// Line 801, Address: 0x301eb8, Func Offset: 0x268
	// Line 796, Address: 0x301ebc, Func Offset: 0x26c
	// Line 801, Address: 0x301ec0, Func Offset: 0x270
	// Line 804, Address: 0x301ec8, Func Offset: 0x278
	// Line 801, Address: 0x301ecc, Func Offset: 0x27c
	// Line 799, Address: 0x301ee4, Func Offset: 0x294
	// Line 804, Address: 0x301eec, Func Offset: 0x29c
	// Line 806, Address: 0x301f14, Func Offset: 0x2c4
	// Line 811, Address: 0x301f1c, Func Offset: 0x2cc
	// Line 806, Address: 0x301f20, Func Offset: 0x2d0
	// Line 807, Address: 0x301f24, Func Offset: 0x2d4
	// Line 811, Address: 0x301f28, Func Offset: 0x2d8
	// Line 807, Address: 0x301f2c, Func Offset: 0x2dc
	// Line 811, Address: 0x301f34, Func Offset: 0x2e4
	// Line 807, Address: 0x301f3c, Func Offset: 0x2ec
	// Line 811, Address: 0x301f54, Func Offset: 0x304
	// Line 812, Address: 0x301f58, Func Offset: 0x308
	// Line 807, Address: 0x301f5c, Func Offset: 0x30c
	// Line 811, Address: 0x301f68, Func Offset: 0x318
	// Line 812, Address: 0x301fa8, Func Offset: 0x358
	// Line 814, Address: 0x301fb4, Func Offset: 0x364
	// Line 848, Address: 0x301fb8, Func Offset: 0x368
	// Line 668, Address: 0x301fc4, Func Offset: 0x374
	// Line 848, Address: 0x301fcc, Func Offset: 0x37c
	// Line 682, Address: 0x301fe0, Func Offset: 0x390
	// Line 804, Address: 0x301fe8, Func Offset: 0x398
	// Line 848, Address: 0x301fec, Func Offset: 0x39c
	// Line 849, Address: 0x301ffc, Func Offset: 0x3ac
	// Func End, Address: 0x302010, Func Offset: 0x3c0
}

// Show__5zRingFP14xModelInstance
// Start address: 0x302010
void zRing::Show(xModelInstance* modelInstance)
{
	xModelInstance* minst;
	// Line 602, Address: 0x302010, Func Offset: 0
	// Line 603, Address: 0x302028, Func Offset: 0x18
	// Line 637, Address: 0x302038, Func Offset: 0x28
	// Line 605, Address: 0x302044, Func Offset: 0x34
	// Line 637, Address: 0x302048, Func Offset: 0x38
	// Line 615, Address: 0x302078, Func Offset: 0x68
	// Line 637, Address: 0x30207c, Func Offset: 0x6c
	// Line 615, Address: 0x302080, Func Offset: 0x70
	// Line 616, Address: 0x3020cc, Func Offset: 0xbc
	// Line 637, Address: 0x3020d4, Func Offset: 0xc4
	// Line 616, Address: 0x3020dc, Func Offset: 0xcc
	// Line 617, Address: 0x302120, Func Offset: 0x110
	// Line 637, Address: 0x302128, Func Offset: 0x118
	// Line 617, Address: 0x302130, Func Offset: 0x120
	// Line 618, Address: 0x302174, Func Offset: 0x164
	// Line 637, Address: 0x30217c, Func Offset: 0x16c
	// Line 618, Address: 0x302184, Func Offset: 0x174
	// Line 637, Address: 0x3021c8, Func Offset: 0x1b8
	// Line 619, Address: 0x3021d0, Func Offset: 0x1c0
	// Line 637, Address: 0x3021d4, Func Offset: 0x1c4
	// Line 619, Address: 0x3021fc, Func Offset: 0x1ec
	// Line 620, Address: 0x302200, Func Offset: 0x1f0
	// Line 637, Address: 0x302208, Func Offset: 0x1f8
	// Line 608, Address: 0x30220c, Func Offset: 0x1fc
	// Line 637, Address: 0x302210, Func Offset: 0x200
	// Line 608, Address: 0x302218, Func Offset: 0x208
	// Line 637, Address: 0x302220, Func Offset: 0x210
	// Func End, Address: 0x302298, Func Offset: 0x288
}

// Render__5zRingFP14xModelInstance
// Start address: 0x3022a0
void zRing::Render(xModelInstance* modelInstance)
{
	int32 cull;
	xSphere* worldSphere;
	xModelInstance* minst;
	// Line 431, Address: 0x3022a0, Func Offset: 0
	// Line 462, Address: 0x3022d0, Func Offset: 0x30
	// Line 464, Address: 0x3022dc, Func Offset: 0x3c
	// Line 466, Address: 0x3022e4, Func Offset: 0x44
	// Line 467, Address: 0x302360, Func Offset: 0xc0
	// Line 470, Address: 0x302370, Func Offset: 0xd0
	// Line 472, Address: 0x302378, Func Offset: 0xd8
	// Line 478, Address: 0x3023f8, Func Offset: 0x158
	// Line 522, Address: 0x302400, Func Offset: 0x160
	// Line 525, Address: 0x302424, Func Offset: 0x184
	// Line 550, Address: 0x302428, Func Offset: 0x188
	// Line 525, Address: 0x30242c, Func Offset: 0x18c
	// Line 526, Address: 0x302430, Func Offset: 0x190
	// Line 550, Address: 0x3024b0, Func Offset: 0x210
	// Line 551, Address: 0x3024b8, Func Offset: 0x218
	// Line 552, Address: 0x3024bc, Func Offset: 0x21c
	// Line 554, Address: 0x3024c4, Func Offset: 0x224
	// Line 557, Address: 0x3024c8, Func Offset: 0x228
	// Line 599, Address: 0x3024e8, Func Offset: 0x248
	// Line 480, Address: 0x3024f4, Func Offset: 0x254
	// Line 599, Address: 0x3024f8, Func Offset: 0x258
	// Line 515, Address: 0x302544, Func Offset: 0x2a4
	// Line 599, Address: 0x30254c, Func Offset: 0x2ac
	// Line 500, Address: 0x302550, Func Offset: 0x2b0
	// Line 599, Address: 0x302554, Func Offset: 0x2b4
	// Line 500, Address: 0x302558, Func Offset: 0x2b8
	// Line 501, Address: 0x3025a4, Func Offset: 0x304
	// Line 599, Address: 0x3025ac, Func Offset: 0x30c
	// Line 501, Address: 0x3025b4, Func Offset: 0x314
	// Line 502, Address: 0x3025f8, Func Offset: 0x358
	// Line 599, Address: 0x302600, Func Offset: 0x360
	// Line 502, Address: 0x302608, Func Offset: 0x368
	// Line 503, Address: 0x30264c, Func Offset: 0x3ac
	// Line 599, Address: 0x302654, Func Offset: 0x3b4
	// Line 503, Address: 0x30265c, Func Offset: 0x3bc
	// Line 599, Address: 0x3026a0, Func Offset: 0x400
	// Line 504, Address: 0x3026ac, Func Offset: 0x40c
	// Line 599, Address: 0x3026b0, Func Offset: 0x410
	// Line 504, Address: 0x3026d8, Func Offset: 0x438
	// Line 599, Address: 0x3026dc, Func Offset: 0x43c
	// Func End, Address: 0x302718, Func Offset: 0x478
}

// Update__5zRingFfP14xModelInstance
// Start address: 0x302720
void zRing::Update(float32 dt, xModelInstance* modelInstance)
{
	uint32 count;
	// Line 371, Address: 0x302720, Func Offset: 0
	// Line 372, Address: 0x302724, Func Offset: 0x4
	// Line 371, Address: 0x302728, Func Offset: 0x8
	// Line 372, Address: 0x302744, Func Offset: 0x24
	// Line 379, Address: 0x302778, Func Offset: 0x58
	// Line 404, Address: 0x302788, Func Offset: 0x68
	// Line 407, Address: 0x3027a8, Func Offset: 0x88
	// Line 411, Address: 0x3027b0, Func Offset: 0x90
	// Line 413, Address: 0x3027c4, Func Offset: 0xa4
	// Line 414, Address: 0x3027d0, Func Offset: 0xb0
	// Line 416, Address: 0x3027ec, Func Offset: 0xcc
	// Line 417, Address: 0x302808, Func Offset: 0xe8
	// Line 428, Address: 0x302810, Func Offset: 0xf0
	// Line 382, Address: 0x302824, Func Offset: 0x104
	// Line 428, Address: 0x30284c, Func Offset: 0x12c
	// Line 382, Address: 0x302850, Func Offset: 0x130
	// Line 385, Address: 0x302898, Func Offset: 0x178
	// Line 428, Address: 0x30289c, Func Offset: 0x17c
	// Line 390, Address: 0x3028bc, Func Offset: 0x19c
	// Line 428, Address: 0x3028c0, Func Offset: 0x1a0
	// Line 390, Address: 0x3028c8, Func Offset: 0x1a8
	// Line 428, Address: 0x3028cc, Func Offset: 0x1ac
	// Line 390, Address: 0x3028d0, Func Offset: 0x1b0
	// Line 428, Address: 0x3028d4, Func Offset: 0x1b4
	// Line 390, Address: 0x3028e0, Func Offset: 0x1c0
	// Line 428, Address: 0x3028e4, Func Offset: 0x1c4
	// Line 390, Address: 0x3028f8, Func Offset: 0x1d8
	// Line 428, Address: 0x3028fc, Func Offset: 0x1dc
	// Line 390, Address: 0x302900, Func Offset: 0x1e0
	// Line 428, Address: 0x30290c, Func Offset: 0x1ec
	// Line 392, Address: 0x30293c, Func Offset: 0x21c
	// Line 428, Address: 0x302940, Func Offset: 0x220
	// Line 392, Address: 0x302948, Func Offset: 0x228
	// Line 428, Address: 0x302950, Func Offset: 0x230
	// Line 393, Address: 0x30295c, Func Offset: 0x23c
	// Line 396, Address: 0x302964, Func Offset: 0x244
	// Line 428, Address: 0x302968, Func Offset: 0x248
	// Line 396, Address: 0x302974, Func Offset: 0x254
	// Line 428, Address: 0x302978, Func Offset: 0x258
	// Line 396, Address: 0x30298c, Func Offset: 0x26c
	// Line 428, Address: 0x302990, Func Offset: 0x270
	// Line 396, Address: 0x302994, Func Offset: 0x274
	// Line 428, Address: 0x30299c, Func Offset: 0x27c
	// Line 400, Address: 0x3029c0, Func Offset: 0x2a0
	// Line 401, Address: 0x3029c4, Func Offset: 0x2a4
	// Line 422, Address: 0x3029cc, Func Offset: 0x2ac
	// Line 428, Address: 0x3029e4, Func Offset: 0x2c4
	// Func End, Address: 0x302a10, Func Offset: 0x2f0
}

// DrawShadow__5zRingFP7xMat4x3P8RwRasterff
// Start address: 0x302a10
void zRing::DrawShadow(xMat4x3* Mat, RwRaster* rwras, float32 factor, float32 distance)
{
	xVec3 center;
	xMat4x3 matrix;
	xShadowCache cache;
	int32 i;
	xEnt* ep;
	// Line 315, Address: 0x302a10, Func Offset: 0
	// Line 322, Address: 0x302a14, Func Offset: 0x4
	// Line 315, Address: 0x302a18, Func Offset: 0x8
	// Line 322, Address: 0x302a1c, Func Offset: 0xc
	// Line 315, Address: 0x302a20, Func Offset: 0x10
	// Line 318, Address: 0x302a24, Func Offset: 0x14
	// Line 315, Address: 0x302a28, Func Offset: 0x18
	// Line 318, Address: 0x302a2c, Func Offset: 0x1c
	// Line 315, Address: 0x302a30, Func Offset: 0x20
	// Line 322, Address: 0x302a3c, Func Offset: 0x2c
	// Line 315, Address: 0x302a40, Func Offset: 0x30
	// Line 326, Address: 0x302a44, Func Offset: 0x34
	// Line 315, Address: 0x302a48, Func Offset: 0x38
	// Line 326, Address: 0x302a4c, Func Offset: 0x3c
	// Line 318, Address: 0x302a50, Func Offset: 0x40
	// Line 331, Address: 0x302a54, Func Offset: 0x44
	// Line 318, Address: 0x302a58, Func Offset: 0x48
	// Line 322, Address: 0x302a60, Func Offset: 0x50
	// Line 318, Address: 0x302a64, Func Offset: 0x54
	// Line 322, Address: 0x302a6c, Func Offset: 0x5c
	// Line 318, Address: 0x302a74, Func Offset: 0x64
	// Line 322, Address: 0x302a78, Func Offset: 0x68
	// Line 323, Address: 0x302a90, Func Offset: 0x80
	// Line 322, Address: 0x302a94, Func Offset: 0x84
	// Line 323, Address: 0x302aa4, Func Offset: 0x94
	// Line 322, Address: 0x302aa8, Func Offset: 0x98
	// Line 323, Address: 0x302ab0, Func Offset: 0xa0
	// Line 325, Address: 0x302acc, Func Offset: 0xbc
	// Line 323, Address: 0x302ad0, Func Offset: 0xc0
	// Line 325, Address: 0x302ae0, Func Offset: 0xd0
	// Line 323, Address: 0x302ae4, Func Offset: 0xd4
	// Line 325, Address: 0x302aec, Func Offset: 0xdc
	// Line 326, Address: 0x302afc, Func Offset: 0xec
	// Line 327, Address: 0x302b14, Func Offset: 0x104
	// Line 328, Address: 0x302b2c, Func Offset: 0x11c
	// Line 331, Address: 0x302b50, Func Offset: 0x140
	// Line 333, Address: 0x302b5c, Func Offset: 0x14c
	// Line 334, Address: 0x302b80, Func Offset: 0x170
	// Line 339, Address: 0x302b88, Func Offset: 0x178
	// Line 347, Address: 0x302bb8, Func Offset: 0x1a8
	// Line 354, Address: 0x302bc4, Func Offset: 0x1b4
	// Line 347, Address: 0x302bc8, Func Offset: 0x1b8
	// Line 354, Address: 0x302bcc, Func Offset: 0x1bc
	// Line 347, Address: 0x302bd0, Func Offset: 0x1c0
	// Line 354, Address: 0x302bdc, Func Offset: 0x1cc
	// Line 347, Address: 0x302be0, Func Offset: 0x1d0
	// Line 354, Address: 0x302c18, Func Offset: 0x208
	// Line 347, Address: 0x302c20, Func Offset: 0x210
	// Line 354, Address: 0x302c3c, Func Offset: 0x22c
	// Line 347, Address: 0x302c4c, Func Offset: 0x23c
	// Line 354, Address: 0x302c6c, Func Offset: 0x25c
	// Line 358, Address: 0x302c74, Func Offset: 0x264
	// Line 360, Address: 0x302c90, Func Offset: 0x280
	// Line 368, Address: 0x302ca4, Func Offset: 0x294
	// Line 367, Address: 0x302cc4, Func Offset: 0x2b4
	// Line 368, Address: 0x302cc8, Func Offset: 0x2b8
	// Line 365, Address: 0x302ce4, Func Offset: 0x2d4
	// Line 368, Address: 0x302cec, Func Offset: 0x2dc
	// Func End, Address: 0x302d24, Func Offset: 0x314
}

// ChangeRingColor__5zRingFfP14xModelInstance
// Start address: 0x302d30
void zRing::ChangeRingColor(float32 dt, xModelInstance* modelInstance)
{
	float32 timeRemaining;
	xModelInstance* minst;
	// Line 275, Address: 0x302d30, Func Offset: 0
	// Line 276, Address: 0x302d38, Func Offset: 0x8
	// Line 275, Address: 0x302d3c, Func Offset: 0xc
	// Line 276, Address: 0x302d40, Func Offset: 0x10
	// Line 280, Address: 0x302d64, Func Offset: 0x34
	// Line 281, Address: 0x302d70, Func Offset: 0x40
	// Line 280, Address: 0x302d7c, Func Offset: 0x4c
	// Line 281, Address: 0x302d8c, Func Offset: 0x5c
	// Line 285, Address: 0x302d98, Func Offset: 0x68
	// Line 301, Address: 0x302da0, Func Offset: 0x70
	// Line 304, Address: 0x302da8, Func Offset: 0x78
	// Line 305, Address: 0x302dac, Func Offset: 0x7c
	// Line 306, Address: 0x302db0, Func Offset: 0x80
	// Line 303, Address: 0x302db4, Func Offset: 0x84
	// Line 304, Address: 0x302dbc, Func Offset: 0x8c
	// Line 305, Address: 0x302dc4, Func Offset: 0x94
	// Line 306, Address: 0x302dcc, Func Offset: 0x9c
	// Line 307, Address: 0x302dd4, Func Offset: 0xa4
	// Line 308, Address: 0x302dd8, Func Offset: 0xa8
	// Line 283, Address: 0x302de8, Func Offset: 0xb8
	// Line 308, Address: 0x302dec, Func Offset: 0xbc
	// Line 290, Address: 0x302df8, Func Offset: 0xc8
	// Line 308, Address: 0x302dfc, Func Offset: 0xcc
	// Line 290, Address: 0x302e00, Func Offset: 0xd0
	// Line 291, Address: 0x302e4c, Func Offset: 0x11c
	// Line 308, Address: 0x302e54, Func Offset: 0x124
	// Line 291, Address: 0x302e5c, Func Offset: 0x12c
	// Line 292, Address: 0x302ea0, Func Offset: 0x170
	// Line 308, Address: 0x302ea8, Func Offset: 0x178
	// Line 292, Address: 0x302eb0, Func Offset: 0x180
	// Line 293, Address: 0x302ef4, Func Offset: 0x1c4
	// Line 308, Address: 0x302efc, Func Offset: 0x1cc
	// Line 293, Address: 0x302f04, Func Offset: 0x1d4
	// Line 308, Address: 0x302f48, Func Offset: 0x218
	// Line 294, Address: 0x302f54, Func Offset: 0x224
	// Line 308, Address: 0x302f58, Func Offset: 0x228
	// Line 294, Address: 0x302f80, Func Offset: 0x250
	// Line 308, Address: 0x302f84, Func Offset: 0x254
	// Line 312, Address: 0x302f88, Func Offset: 0x258
	// Func End, Address: 0x302f90, Func Offset: 0x260
}

// CalculateBubbleOffsets__5zRingFv
// Start address: 0x302f90
void zRing::CalculateBubbleOffsets()
{
	RpGeometry* geom;
	int32 size;
	RpMorphTarget* mt;
	xVec3* vert;
	xVec3* norm;
	RpTriangle* tri;
	int32 i;
	int32 j;
	int32 bubblesPerFace;
	RpTriangle* myTri;
	float32 u;
	float32 v;
	float32 w;
	xVec3 pos;
	// Line 202, Address: 0x302f90, Func Offset: 0
	// Line 203, Address: 0x302fd4, Func Offset: 0x44
	// Line 208, Address: 0x302fd8, Func Offset: 0x48
	// Line 203, Address: 0x302fdc, Func Offset: 0x4c
	// Line 208, Address: 0x302fe0, Func Offset: 0x50
	// Line 205, Address: 0x302fe4, Func Offset: 0x54
	// Line 204, Address: 0x302fe8, Func Offset: 0x58
	// Line 208, Address: 0x302fec, Func Offset: 0x5c
	// Line 214, Address: 0x302ffc, Func Offset: 0x6c
	// Line 216, Address: 0x303014, Func Offset: 0x84
	// Line 217, Address: 0x30301c, Func Offset: 0x8c
	// Line 220, Address: 0x303024, Func Offset: 0x94
	// Line 223, Address: 0x303028, Func Offset: 0x98
	// Line 225, Address: 0x303038, Func Offset: 0xa8
	// Line 229, Address: 0x303044, Func Offset: 0xb4
	// Line 228, Address: 0x303048, Func Offset: 0xb8
	// Line 229, Address: 0x30304c, Func Offset: 0xbc
	// Line 232, Address: 0x30307c, Func Offset: 0xec
	// Line 235, Address: 0x303084, Func Offset: 0xf4
	// Line 240, Address: 0x303098, Func Offset: 0x108
	// Line 241, Address: 0x3030cc, Func Offset: 0x13c
	// Line 242, Address: 0x303104, Func Offset: 0x174
	// Line 244, Address: 0x303114, Func Offset: 0x184
	// Line 245, Address: 0x303118, Func Offset: 0x188
	// Line 246, Address: 0x30311c, Func Offset: 0x18c
	// Line 250, Address: 0x303120, Func Offset: 0x190
	// Line 247, Address: 0x303124, Func Offset: 0x194
	// Line 261, Address: 0x303128, Func Offset: 0x198
	// Line 250, Address: 0x30312c, Func Offset: 0x19c
	// Line 261, Address: 0x303130, Func Offset: 0x1a0
	// Line 250, Address: 0x303134, Func Offset: 0x1a4
	// Line 261, Address: 0x303138, Func Offset: 0x1a8
	// Line 247, Address: 0x303144, Func Offset: 0x1b4
	// Line 250, Address: 0x303148, Func Offset: 0x1b8
	// Line 261, Address: 0x303170, Func Offset: 0x1e0
	// Line 250, Address: 0x303178, Func Offset: 0x1e8
	// Line 261, Address: 0x30317c, Func Offset: 0x1ec
	// Line 250, Address: 0x303180, Func Offset: 0x1f0
	// Line 261, Address: 0x303184, Func Offset: 0x1f4
	// Line 250, Address: 0x303188, Func Offset: 0x1f8
	// Line 251, Address: 0x303194, Func Offset: 0x204
	// Line 250, Address: 0x3031a0, Func Offset: 0x210
	// Line 252, Address: 0x3031b0, Func Offset: 0x220
	// Line 251, Address: 0x3031bc, Func Offset: 0x22c
	// Line 252, Address: 0x3031c8, Func Offset: 0x238
	// Line 251, Address: 0x3031d4, Func Offset: 0x244
	// Line 252, Address: 0x3031d8, Func Offset: 0x248
	// Line 261, Address: 0x3031dc, Func Offset: 0x24c
	// Line 263, Address: 0x30322c, Func Offset: 0x29c
	// Line 264, Address: 0x303288, Func Offset: 0x2f8
	// Line 265, Address: 0x3032e4, Func Offset: 0x354
	// Line 267, Address: 0x303324, Func Offset: 0x394
	// Line 265, Address: 0x303328, Func Offset: 0x398
	// Line 267, Address: 0x30332c, Func Offset: 0x39c
	// Line 265, Address: 0x303330, Func Offset: 0x3a0
	// Line 266, Address: 0x30334c, Func Offset: 0x3bc
	// Line 267, Address: 0x303354, Func Offset: 0x3c4
	// Line 269, Address: 0x303360, Func Offset: 0x3d0
	// Line 270, Address: 0x303370, Func Offset: 0x3e0
	// Func End, Address: 0x3033b4, Func Offset: 0x424
}

// Reset__5zRingFv
// Start address: 0x3033c0
void zRing::Reset()
{
	RwTexture* tex;
	// Line 102, Address: 0x3033c0, Func Offset: 0
	// Line 104, Address: 0x3033cc, Func Offset: 0xc
	// Line 105, Address: 0x3033e0, Func Offset: 0x20
	// Line 114, Address: 0x3033e4, Func Offset: 0x24
	// Line 105, Address: 0x3033ec, Func Offset: 0x2c
	// Line 110, Address: 0x303408, Func Offset: 0x48
	// Line 105, Address: 0x303414, Func Offset: 0x54
	// Line 110, Address: 0x30341c, Func Offset: 0x5c
	// Line 113, Address: 0x303480, Func Offset: 0xc0
	// Line 114, Address: 0x30349c, Func Offset: 0xdc
	// Line 115, Address: 0x3034bc, Func Offset: 0xfc
	// Line 116, Address: 0x3034c8, Func Offset: 0x108
	// Line 119, Address: 0x3034d4, Func Offset: 0x114
	// Line 121, Address: 0x3034e0, Func Offset: 0x120
	// Line 123, Address: 0x3034f0, Func Offset: 0x130
	// Line 121, Address: 0x3034fc, Func Offset: 0x13c
	// Line 122, Address: 0x30350c, Func Offset: 0x14c
	// Line 123, Address: 0x303524, Func Offset: 0x164
	// Line 125, Address: 0x303530, Func Offset: 0x170
	// Line 126, Address: 0x303548, Func Offset: 0x188
	// Line 127, Address: 0x303560, Func Offset: 0x1a0
	// Line 128, Address: 0x303568, Func Offset: 0x1a8
	// Line 131, Address: 0x303570, Func Offset: 0x1b0
	// Line 132, Address: 0x30358c, Func Offset: 0x1cc
	// Line 135, Address: 0x30359c, Func Offset: 0x1dc
	// Line 137, Address: 0x3035a0, Func Offset: 0x1e0
	// Line 136, Address: 0x3035a8, Func Offset: 0x1e8
	// Line 137, Address: 0x3035ac, Func Offset: 0x1ec
	// Line 143, Address: 0x3035b8, Func Offset: 0x1f8
	// Line 144, Address: 0x3035c0, Func Offset: 0x200
	// Line 143, Address: 0x3035c4, Func Offset: 0x204
	// Line 144, Address: 0x3035c8, Func Offset: 0x208
	// Line 145, Address: 0x3035cc, Func Offset: 0x20c
	// Line 146, Address: 0x3035d8, Func Offset: 0x218
	// Line 137, Address: 0x3035dc, Func Offset: 0x21c
	// Line 146, Address: 0x3035e0, Func Offset: 0x220
	// Line 137, Address: 0x3035e4, Func Offset: 0x224
	// Line 149, Address: 0x3035e8, Func Offset: 0x228
	// Line 137, Address: 0x3035ec, Func Offset: 0x22c
	// Line 149, Address: 0x3035f0, Func Offset: 0x230
	// Line 138, Address: 0x3035f4, Func Offset: 0x234
	// Line 149, Address: 0x3035f8, Func Offset: 0x238
	// Line 139, Address: 0x3035fc, Func Offset: 0x23c
	// Line 149, Address: 0x303600, Func Offset: 0x240
	// Line 140, Address: 0x303604, Func Offset: 0x244
	// Line 143, Address: 0x303610, Func Offset: 0x250
	// Line 144, Address: 0x303614, Func Offset: 0x254
	// Line 145, Address: 0x303618, Func Offset: 0x258
	// Line 146, Address: 0x30361c, Func Offset: 0x25c
	// Line 149, Address: 0x303620, Func Offset: 0x260
	// Line 152, Address: 0x303638, Func Offset: 0x278
	// Line 154, Address: 0x303640, Func Offset: 0x280
	// Line 155, Address: 0x3036ac, Func Offset: 0x2ec
	// Line 157, Address: 0x3036b8, Func Offset: 0x2f8
	// Line 159, Address: 0x3036c0, Func Offset: 0x300
	// Line 160, Address: 0x30373c, Func Offset: 0x37c
	// Line 154, Address: 0x303744, Func Offset: 0x384
	// Line 160, Address: 0x30374c, Func Offset: 0x38c
	// Line 163, Address: 0x303754, Func Offset: 0x394
	// Line 165, Address: 0x30375c, Func Offset: 0x39c
	// Line 171, Address: 0x3037dc, Func Offset: 0x41c
	// Line 172, Address: 0x3037f4, Func Offset: 0x434
	// Line 174, Address: 0x3037fc, Func Offset: 0x43c
	// Line 176, Address: 0x303804, Func Offset: 0x444
	// Func End, Address: 0x303814, Func Offset: 0x454
}

// Load__5zRingFR5xBaseR9xDynAssetUi
// Start address: 0x303820
void zRing::Load(xBase& data, xDynAsset& asset)
{
	// Line 96, Address: 0x303820, Func Offset: 0
	// Line 98, Address: 0x303834, Func Offset: 0x14
	// Line 99, Address: 0x303868, Func Offset: 0x48
	// Func End, Address: 0x30387c, Func Offset: 0x5c
}

