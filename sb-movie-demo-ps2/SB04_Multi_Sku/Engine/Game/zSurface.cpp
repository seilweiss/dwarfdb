



xSurface& zSurfaceGetDefault();
void zSurfaceEventCB(xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget);
void zSurfaceSetup(xSurface* s);
float32 zSurfaceGetDamping(xSurface* surf, float32 min_vel);
int32 zSurfaceGetSlickness(xSurface* surf);
float32 zSurfaceGetOutOfBoundsDelay(xSurface& s);
float32 zSurfaceGetFriction(xSurface* surf);
uint32 zSurfaceGetStandOn(xSurface* surf);
uint32 zSurfaceGetSticky(xSurface* surf);
uint32 zSurfaceGetDamagePassthrough(xSurface* surf);
int32 zSurfaceGetDamageType(xSurface* surf);
uint32 zSurfaceGetMatchOrient(xSurface* surf);
float32 zSurfaceGetSlideStopAngle(xSurface* surf);
float32 zSurfaceGetSlideStartAngle(xSurface* surf);
uint8 zSurfaceOutOfBounds(xSurface& s);
uint32 zSurfaceGetStep(xSurface* surf);
uint32 zSurfaceGetSlide(xSurface* surf);
xSurface* zSurfaceGetSurface(xCollis* coll);
xSurface* zSurfaceGetSurface(uint32 mat_id);
void zSurfaceRegisterMapper(uint32 assetId);
void zSurfaceInit();

// zSurfaceGetDefault__Fv
// Start address: 0x2e5e00
xSurface& zSurfaceGetDefault()
{
	// Line 934, Address: 0x2e5e00, Func Offset: 0
	// Func End, Address: 0x2e5e08, Func Offset: 0x8
}

// zSurfaceEventCB__FP5xBaseP5xBaseUiPCfP5xBaseUi
// Start address: 0x2e5e10
void zSurfaceEventCB(xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget)
{
	xSurface* t;
	zSurfaceProps* p;
	zSurfaceProps* p;
	zSurfaceProps* p;
	zSurfaceProps* p;
	zSurfaceProps* p;
	zSurfaceProps* p;
	// Line 663, Address: 0x2e5e10, Func Offset: 0
	// Line 670, Address: 0x2e5e14, Func Offset: 0x4
	// Line 663, Address: 0x2e5e18, Func Offset: 0x8
	// Line 670, Address: 0x2e5e20, Func Offset: 0x10
	// Line 675, Address: 0x2e5ec0, Func Offset: 0xb0
	// Line 678, Address: 0x2e5ec8, Func Offset: 0xb8
	// Line 679, Address: 0x2e5ecc, Func Offset: 0xbc
	// Line 682, Address: 0x2e5ed4, Func Offset: 0xc4
	// Line 683, Address: 0x2e5ee0, Func Offset: 0xd0
	// Line 684, Address: 0x2e5ee4, Func Offset: 0xd4
	// Line 687, Address: 0x2e5eec, Func Offset: 0xdc
	// Line 690, Address: 0x2e5ef4, Func Offset: 0xe4
	// Line 692, Address: 0x2e5f10, Func Offset: 0x100
	// Line 695, Address: 0x2e5f1c, Func Offset: 0x10c
	// Line 699, Address: 0x2e5f24, Func Offset: 0x114
	// Line 702, Address: 0x2e5f3c, Func Offset: 0x12c
	// Line 704, Address: 0x2e5f44, Func Offset: 0x134
	// Line 708, Address: 0x2e5f50, Func Offset: 0x140
	// Line 713, Address: 0x2e5f58, Func Offset: 0x148
	// Line 716, Address: 0x2e5f68, Func Offset: 0x158
	// Line 719, Address: 0x2e5f80, Func Offset: 0x170
	// Line 722, Address: 0x2e5f8c, Func Offset: 0x17c
	// Line 725, Address: 0x2e5f98, Func Offset: 0x188
	// Line 729, Address: 0x2e5fa0, Func Offset: 0x190
	// Line 735, Address: 0x2e5fb8, Func Offset: 0x1a8
	// Line 738, Address: 0x2e5fc4, Func Offset: 0x1b4
	// Line 741, Address: 0x2e5fd0, Func Offset: 0x1c0
	// Line 744, Address: 0x2e5fd8, Func Offset: 0x1c8
	// Line 757, Address: 0x2e5ff0, Func Offset: 0x1e0
	// Line 759, Address: 0x2e6000, Func Offset: 0x1f0
	// Line 760, Address: 0x2e600c, Func Offset: 0x1fc
	// Line 763, Address: 0x2e6014, Func Offset: 0x204
	// Line 767, Address: 0x2e6018, Func Offset: 0x208
	// Line 779, Address: 0x2e6024, Func Offset: 0x214
	// Line 782, Address: 0x2e602c, Func Offset: 0x21c
	// Line 792, Address: 0x2e6050, Func Offset: 0x240
	// Line 782, Address: 0x2e605c, Func Offset: 0x24c
	// Line 792, Address: 0x2e6064, Func Offset: 0x254
	// Line 801, Address: 0x2e606c, Func Offset: 0x25c
	// Line 819, Address: 0x2e6078, Func Offset: 0x268
	// Line 824, Address: 0x2e6080, Func Offset: 0x270
	// Line 827, Address: 0x2e6098, Func Offset: 0x288
	// Line 834, Address: 0x2e60a0, Func Offset: 0x290
	// Line 700, Address: 0x2e60ac, Func Offset: 0x29c
	// Line 834, Address: 0x2e60b8, Func Offset: 0x2a8
	// Line 717, Address: 0x2e60c0, Func Offset: 0x2b0
	// Line 834, Address: 0x2e60cc, Func Offset: 0x2bc
	// Line 731, Address: 0x2e60d0, Func Offset: 0x2c0
	// Line 732, Address: 0x2e60d8, Func Offset: 0x2c8
	// Line 834, Address: 0x2e60e0, Func Offset: 0x2d0
	// Line 746, Address: 0x2e60e4, Func Offset: 0x2d4
	// Line 834, Address: 0x2e60e8, Func Offset: 0x2d8
	// Line 748, Address: 0x2e60f4, Func Offset: 0x2e4
	// Line 749, Address: 0x2e60fc, Func Offset: 0x2ec
	// Line 752, Address: 0x2e6104, Func Offset: 0x2f4
	// Line 754, Address: 0x2e6108, Func Offset: 0x2f8
	// Line 834, Address: 0x2e6110, Func Offset: 0x300
	// Line 805, Address: 0x2e6114, Func Offset: 0x304
	// Line 834, Address: 0x2e6120, Func Offset: 0x310
	// Line 817, Address: 0x2e612c, Func Offset: 0x31c
	// Line 834, Address: 0x2e6134, Func Offset: 0x324
	// Line 809, Address: 0x2e6138, Func Offset: 0x328
	// Line 834, Address: 0x2e6140, Func Offset: 0x330
	// Line 825, Address: 0x2e6144, Func Offset: 0x334
	// Line 835, Address: 0x2e614c, Func Offset: 0x33c
	// Func End, Address: 0x2e615c, Func Offset: 0x34c
}

// zSurfaceSetup__FP8xSurface
// Start address: 0x2e6160
void zSurfaceSetup(xSurface* s)
{
	zSurfaceProps* pp;
	int32 i;
	void* memptr;
	// Line 586, Address: 0x2e6160, Func Offset: 0
	// Line 589, Address: 0x2e6184, Func Offset: 0x24
	// Line 591, Address: 0x2e6188, Func Offset: 0x28
	// Line 594, Address: 0x2e6190, Func Offset: 0x30
	// Line 597, Address: 0x2e6198, Func Offset: 0x38
	// Line 599, Address: 0x2e61a0, Func Offset: 0x40
	// Line 602, Address: 0x2e61ac, Func Offset: 0x4c
	// Line 606, Address: 0x2e621c, Func Offset: 0xbc
	// Line 613, Address: 0x2e6228, Func Offset: 0xc8
	// Line 614, Address: 0x2e62b0, Func Offset: 0x150
	// Line 617, Address: 0x2e62c8, Func Offset: 0x168
	// Line 618, Address: 0x2e62d0, Func Offset: 0x170
	// Line 619, Address: 0x2e62d8, Func Offset: 0x178
	// Line 624, Address: 0x2e62dc, Func Offset: 0x17c
	// Line 602, Address: 0x2e62e4, Func Offset: 0x184
	// Line 624, Address: 0x2e62f0, Func Offset: 0x190
	// Func End, Address: 0x2e6338, Func Offset: 0x1d8
}

// zSurfaceGetDamping__FPC8xSurfacef
// Start address: 0x2e6340
float32 zSurfaceGetDamping(xSurface* surf, float32 min_vel)
{
	// Line 484, Address: 0x2e6340, Func Offset: 0
	// Func End, Address: 0x2e6348, Func Offset: 0x8
}

// zSurfaceGetSlickness__FPC8xSurface
// Start address: 0x2e6350
int32 zSurfaceGetSlickness(xSurface* surf)
{
	// Line 477, Address: 0x2e6350, Func Offset: 0
	// Line 478, Address: 0x2e6370, Func Offset: 0x20
	// Func End, Address: 0x2e6378, Func Offset: 0x28
}

// zSurfaceGetOutOfBoundsDelay__FRC8xSurface
// Start address: 0x2e6380
float32 zSurfaceGetOutOfBoundsDelay(xSurface& s)
{
	// Line 463, Address: 0x2e6380, Func Offset: 0
	// Line 468, Address: 0x2e6384, Func Offset: 0x4
	// Line 471, Address: 0x2e63a0, Func Offset: 0x20
	// Func End, Address: 0x2e63a8, Func Offset: 0x28
}

// zSurfaceGetFriction__FPC8xSurface
// Start address: 0x2e63b0
float32 zSurfaceGetFriction(xSurface* surf)
{
	// Line 460, Address: 0x2e63b0, Func Offset: 0
	// Func End, Address: 0x2e63b8, Func Offset: 0x8
}

// zSurfaceGetStandOn__FPC8xSurface
// Start address: 0x2e63c0
uint32 zSurfaceGetStandOn(xSurface* surf)
{
	// Line 443, Address: 0x2e63c0, Func Offset: 0
	// Line 449, Address: 0x2e63c4, Func Offset: 0x4
	// Line 453, Address: 0x2e63ec, Func Offset: 0x2c
	// Func End, Address: 0x2e63f4, Func Offset: 0x34
}

// zSurfaceGetSticky__FPC8xSurface
// Start address: 0x2e6400
uint32 zSurfaceGetSticky(xSurface* surf)
{
	// Line 430, Address: 0x2e6400, Func Offset: 0
	// Line 436, Address: 0x2e6404, Func Offset: 0x4
	// Line 440, Address: 0x2e641c, Func Offset: 0x1c
	// Func End, Address: 0x2e6424, Func Offset: 0x24
}

// zSurfaceGetDamagePassthrough__FPC8xSurface
// Start address: 0x2e6430
uint32 zSurfaceGetDamagePassthrough(xSurface* surf)
{
	// Line 417, Address: 0x2e6430, Func Offset: 0
	// Line 423, Address: 0x2e6434, Func Offset: 0x4
	// Line 427, Address: 0x2e6450, Func Offset: 0x20
	// Func End, Address: 0x2e6458, Func Offset: 0x28
}

// zSurfaceGetDamageType__FPC8xSurface
// Start address: 0x2e6460
int32 zSurfaceGetDamageType(xSurface* surf)
{
	// Line 404, Address: 0x2e6460, Func Offset: 0
	// Line 410, Address: 0x2e6464, Func Offset: 0x4
	// Line 414, Address: 0x2e647c, Func Offset: 0x1c
	// Func End, Address: 0x2e6484, Func Offset: 0x24
}

// zSurfaceGetMatchOrient__FPC8xSurface
// Start address: 0x2e6490
uint32 zSurfaceGetMatchOrient(xSurface* surf)
{
	// Line 391, Address: 0x2e6490, Func Offset: 0
	// Line 397, Address: 0x2e6494, Func Offset: 0x4
	// Line 401, Address: 0x2e64b0, Func Offset: 0x20
	// Func End, Address: 0x2e64b8, Func Offset: 0x28
}

// zSurfaceGetSlideStopAngle__FPC8xSurface
// Start address: 0x2e64c0
float32 zSurfaceGetSlideStopAngle(xSurface* surf)
{
	// Line 378, Address: 0x2e64c0, Func Offset: 0
	// Line 384, Address: 0x2e64c4, Func Offset: 0x4
	// Line 388, Address: 0x2e6520, Func Offset: 0x60
	// Func End, Address: 0x2e6528, Func Offset: 0x68
}

// zSurfaceGetSlideStartAngle__FPC8xSurface
// Start address: 0x2e6530
float32 zSurfaceGetSlideStartAngle(xSurface* surf)
{
	// Line 365, Address: 0x2e6530, Func Offset: 0
	// Line 371, Address: 0x2e6534, Func Offset: 0x4
	// Line 375, Address: 0x2e6590, Func Offset: 0x60
	// Func End, Address: 0x2e6598, Func Offset: 0x68
}

// zSurfaceOutOfBounds__FRC8xSurface
// Start address: 0x2e65a0
uint8 zSurfaceOutOfBounds(xSurface& s)
{
	// Line 354, Address: 0x2e65a0, Func Offset: 0
	// Line 359, Address: 0x2e65a4, Func Offset: 0x4
	// Line 362, Address: 0x2e65c4, Func Offset: 0x24
	// Func End, Address: 0x2e65cc, Func Offset: 0x2c
}

// zSurfaceGetStep__FPC8xSurface
// Start address: 0x2e65d0
uint32 zSurfaceGetStep(xSurface* surf)
{
	// Line 341, Address: 0x2e65d0, Func Offset: 0
	// Line 347, Address: 0x2e65d4, Func Offset: 0x4
	// Line 351, Address: 0x2e65f0, Func Offset: 0x20
	// Func End, Address: 0x2e65f8, Func Offset: 0x28
}

// zSurfaceGetSlide__FPC8xSurface
// Start address: 0x2e6600
uint32 zSurfaceGetSlide(xSurface* surf)
{
	// Line 328, Address: 0x2e6600, Func Offset: 0
	// Line 334, Address: 0x2e6604, Func Offset: 0x4
	// Line 338, Address: 0x2e6620, Func Offset: 0x20
	// Func End, Address: 0x2e6628, Func Offset: 0x28
}

// zSurfaceGetSurface__FPC7xCollis
// Start address: 0x2e6630
xSurface* zSurfaceGetSurface(xCollis* coll)
{
	xSurface* surf;
	// Line 298, Address: 0x2e6630, Func Offset: 0
	// Line 302, Address: 0x2e6634, Func Offset: 0x4
	// Line 298, Address: 0x2e6638, Func Offset: 0x8
	// Line 302, Address: 0x2e663c, Func Offset: 0xc
	// Line 304, Address: 0x2e6648, Func Offset: 0x18
	// Line 306, Address: 0x2e6658, Func Offset: 0x28
	// Line 311, Address: 0x2e6660, Func Offset: 0x30
	// Line 314, Address: 0x2e6668, Func Offset: 0x38
	// Line 320, Address: 0x2e6670, Func Offset: 0x40
	// Line 325, Address: 0x2e6684, Func Offset: 0x54
	// Func End, Address: 0x2e6690, Func Offset: 0x60
}

// zSurfaceGetSurface__FUi
// Start address: 0x2e6690
xSurface* zSurfaceGetSurface(uint32 mat_id)
{
	int32 map;
	zMaterialMapAsset* mapper;
	uint16 i;
	zMaterialMapEntry* entry;
	uint16 nsurfs;
	uint16 j;
	xSurface* surf;
	// Line 214, Address: 0x2e6690, Func Offset: 0
	// Line 215, Address: 0x2e66bc, Func Offset: 0x2c
	// Line 217, Address: 0x2e66d4, Func Offset: 0x44
	// Line 219, Address: 0x2e66d8, Func Offset: 0x48
	// Line 223, Address: 0x2e66e0, Func Offset: 0x50
	// Line 225, Address: 0x2e66f8, Func Offset: 0x68
	// Line 240, Address: 0x2e6704, Func Offset: 0x74
	// Line 242, Address: 0x2e6720, Func Offset: 0x90
	// Line 245, Address: 0x2e6738, Func Offset: 0xa8
	// Line 226, Address: 0x2e6748, Func Offset: 0xb8
	// Line 245, Address: 0x2e674c, Func Offset: 0xbc
	// Line 235, Address: 0x2e6770, Func Offset: 0xe0
	// Line 245, Address: 0x2e6778, Func Offset: 0xe8
	// Line 237, Address: 0x2e677c, Func Offset: 0xec
	// Line 245, Address: 0x2e6780, Func Offset: 0xf0
	// Line 246, Address: 0x2e6798, Func Offset: 0x108
	// Func End, Address: 0x2e67c4, Func Offset: 0x134
}

// zSurfaceRegisterMapper__FUi
// Start address: 0x2e67d0
void zSurfaceRegisterMapper(uint32 assetId)
{
	// Line 170, Address: 0x2e67d0, Func Offset: 0
	// Line 174, Address: 0x2e67e0, Func Offset: 0x10
	// Line 176, Address: 0x2e6800, Func Offset: 0x30
	// Line 179, Address: 0x2e6810, Func Offset: 0x40
	// Line 192, Address: 0x2e681c, Func Offset: 0x4c
	// Line 195, Address: 0x2e6828, Func Offset: 0x58
	// Func End, Address: 0x2e6838, Func Offset: 0x68
}

// zSurfaceInit__Fv
// Start address: 0x2e6840
void zSurfaceInit()
{
	uint32 size;
	uint16 nsurfs;
	zSurfAssetIN* defaultAsset;
	uint16 i;
	zSurfAssetIN* asset;
	xSurface* surf;
	zSurfaceProps* moprops;
	int32 j;
	// Line 65, Address: 0x2e6840, Func Offset: 0
	// Line 67, Address: 0x2e6844, Func Offset: 0x4
	// Line 65, Address: 0x2e6848, Func Offset: 0x8
	// Line 67, Address: 0x2e684c, Func Offset: 0xc
	// Line 65, Address: 0x2e6850, Func Offset: 0x10
	// Line 67, Address: 0x2e6868, Func Offset: 0x28
	// Line 69, Address: 0x2e6874, Func Offset: 0x34
	// Line 70, Address: 0x2e687c, Func Offset: 0x3c
	// Line 71, Address: 0x2e688c, Func Offset: 0x4c
	// Line 132, Address: 0x2e6894, Func Offset: 0x54
	// Line 135, Address: 0x2e6898, Func Offset: 0x58
	// Line 140, Address: 0x2e68a4, Func Offset: 0x64
	// Line 72, Address: 0x2e68ac, Func Offset: 0x6c
	// Line 140, Address: 0x2e68b0, Func Offset: 0x70
	// Line 72, Address: 0x2e68b4, Func Offset: 0x74
	// Line 140, Address: 0x2e68bc, Func Offset: 0x7c
	// Line 72, Address: 0x2e68c0, Func Offset: 0x80
	// Line 140, Address: 0x2e68c4, Func Offset: 0x84
	// Line 82, Address: 0x2e68f4, Func Offset: 0xb4
	// Line 77, Address: 0x2e68f8, Func Offset: 0xb8
	// Line 82, Address: 0x2e68fc, Func Offset: 0xbc
	// Line 140, Address: 0x2e6904, Func Offset: 0xc4
	// Line 82, Address: 0x2e6914, Func Offset: 0xd4
	// Line 140, Address: 0x2e6918, Func Offset: 0xd8
	// Line 89, Address: 0x2e6920, Func Offset: 0xe0
	// Line 140, Address: 0x2e6928, Func Offset: 0xe8
	// Line 91, Address: 0x2e693c, Func Offset: 0xfc
	// Line 140, Address: 0x2e6944, Func Offset: 0x104
	// Line 98, Address: 0x2e694c, Func Offset: 0x10c
	// Line 140, Address: 0x2e6950, Func Offset: 0x110
	// Line 102, Address: 0x2e6954, Func Offset: 0x114
	// Line 140, Address: 0x2e6958, Func Offset: 0x118
	// Line 115, Address: 0x2e695c, Func Offset: 0x11c
	// Line 140, Address: 0x2e6960, Func Offset: 0x120
	// Line 98, Address: 0x2e6964, Func Offset: 0x124
	// Line 140, Address: 0x2e6970, Func Offset: 0x130
	// Line 98, Address: 0x2e6978, Func Offset: 0x138
	// Line 140, Address: 0x2e697c, Func Offset: 0x13c
	// Line 112, Address: 0x2e6990, Func Offset: 0x150
	// Line 140, Address: 0x2e6998, Func Offset: 0x158
	// Line 112, Address: 0x2e69c0, Func Offset: 0x180
	// Line 140, Address: 0x2e69c4, Func Offset: 0x184
	// Line 114, Address: 0x2e69cc, Func Offset: 0x18c
	// Line 140, Address: 0x2e69d0, Func Offset: 0x190
	// Line 115, Address: 0x2e69d4, Func Offset: 0x194
	// Line 140, Address: 0x2e69d8, Func Offset: 0x198
	// Line 120, Address: 0x2e69e8, Func Offset: 0x1a8
	// Line 140, Address: 0x2e69ec, Func Offset: 0x1ac
	// Line 130, Address: 0x2e6ac4, Func Offset: 0x284
	// Line 140, Address: 0x2e6ac8, Func Offset: 0x288
	// Line 131, Address: 0x2e6ad4, Func Offset: 0x294
	// Line 140, Address: 0x2e6af8, Func Offset: 0x2b8
	// Line 136, Address: 0x2e6b00, Func Offset: 0x2c0
	// Line 140, Address: 0x2e6b04, Func Offset: 0x2c4
	// Line 136, Address: 0x2e6b10, Func Offset: 0x2d0
	// Line 140, Address: 0x2e6b14, Func Offset: 0x2d4
	// Line 136, Address: 0x2e6b20, Func Offset: 0x2e0
	// Line 140, Address: 0x2e6b24, Func Offset: 0x2e4
	// Line 136, Address: 0x2e6b50, Func Offset: 0x310
	// Line 140, Address: 0x2e6b54, Func Offset: 0x314
	// Line 136, Address: 0x2e6b5c, Func Offset: 0x31c
	// Line 140, Address: 0x2e6b60, Func Offset: 0x320
	// Line 136, Address: 0x2e6b80, Func Offset: 0x340
	// Line 140, Address: 0x2e6b84, Func Offset: 0x344
	// Func End, Address: 0x2e6bd4, Func Offset: 0x394
}

