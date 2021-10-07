



void xGridCheckBoundSetup(xBox& box, int32& lower_x, int32& lower_z, int32& upper_x, int32& upper_z, xGrid& grid, xBound& bound);
void xGridIterClose(xGridIterator& it);
xGridBound* xGridIterFirstCell(xGrid* grid, int32 grx, int32 grz, xGridIterator& it);
xGridBound* xGridIterFirstCell(xGridBound** head, xGridIterator& it);
void xGridCheckPosition(xGrid* grid, xVec3* pos, xQCData* qcd, int32(*hitCB)(xEnt*, void*), void* cbdata);
int32 xGridEntIsTooBig(xGrid* grid, xEnt* ent);
void xGridGetCell(xGrid* grid, float32 posx, float32 posz, int32& grx, int32& grz);
void xGridUpdate(xGrid* grid, xEnt* ent);
int32 xGridRemove(xGridBound* gridb);
int32 xGridAdd(xGrid* grid, xEnt* ent);
void xGridEmpty(xGrid* grid);
void xGridKill(xGrid* grid);
void xGridInit(xGrid* grid, xBox* bounds, uint16 nx, uint16 nz, uint8 ingrid_id);

// xGridCheckBoundSetup__FR4xBoxRiRiRiRiR5xGridRC6xBound
// Start address: 0x3d1c40
void xGridCheckBoundSetup(xBox& box, int32& lower_x, int32& lower_z, int32& upper_x, int32& upper_z, xGrid& grid, xBound& bound)
{
	float32 ex;
	float32 ez;
	// Line 629, Address: 0x3d1c40, Func Offset: 0
	// Line 631, Address: 0x3d1c78, Func Offset: 0x38
	// Line 636, Address: 0x3d1c84, Func Offset: 0x44
	// Line 637, Address: 0x3d1c94, Func Offset: 0x54
	// Line 641, Address: 0x3d1c98, Func Offset: 0x58
	// Line 636, Address: 0x3d1c9c, Func Offset: 0x5c
	// Line 637, Address: 0x3d1ca0, Func Offset: 0x60
	// Line 636, Address: 0x3d1cac, Func Offset: 0x6c
	// Line 637, Address: 0x3d1cb0, Func Offset: 0x70
	// Line 638, Address: 0x3d1cb8, Func Offset: 0x78
	// Line 641, Address: 0x3d1cd0, Func Offset: 0x90
	// Line 642, Address: 0x3d1d38, Func Offset: 0xf8
	// Line 641, Address: 0x3d1d3c, Func Offset: 0xfc
	// Line 642, Address: 0x3d1d40, Func Offset: 0x100
	// Line 645, Address: 0x3d1db4, Func Offset: 0x174
	// Line 647, Address: 0x3d1dc8, Func Offset: 0x188
	// Func End, Address: 0x3d1e04, Func Offset: 0x1c4
}

// xGridIterClose__FR13xGridIterator
// Start address: 0x3d1e10
void xGridIterClose(xGridIterator& it)
{
	int32& iter_active;
	xGridBound* cur;
	xGridBound** prev;
	// Line 587, Address: 0x3d1e10, Func Offset: 0
	// Line 588, Address: 0x3d1e14, Func Offset: 0x4
	// Line 590, Address: 0x3d1e1c, Func Offset: 0xc
	// Line 591, Address: 0x3d1e24, Func Offset: 0x14
	// Line 593, Address: 0x3d1e30, Func Offset: 0x20
	// Line 596, Address: 0x3d1e4c, Func Offset: 0x3c
	// Line 597, Address: 0x3d1e50, Func Offset: 0x40
	// Line 604, Address: 0x3d1e58, Func Offset: 0x48
	// Line 598, Address: 0x3d1e5c, Func Offset: 0x4c
	// Line 608, Address: 0x3d1e68, Func Offset: 0x58
	// Line 609, Address: 0x3d1e6c, Func Offset: 0x5c
	// Line 611, Address: 0x3d1e70, Func Offset: 0x60
	// Line 612, Address: 0x3d1e7c, Func Offset: 0x6c
	// Line 613, Address: 0x3d1e80, Func Offset: 0x70
	// Line 614, Address: 0x3d1e84, Func Offset: 0x74
	// Line 615, Address: 0x3d1e88, Func Offset: 0x78
	// Line 617, Address: 0x3d1e8c, Func Offset: 0x7c
	// Line 607, Address: 0x3d1eb4, Func Offset: 0xa4
	// Line 617, Address: 0x3d1ec0, Func Offset: 0xb0
	// Func End, Address: 0x3d1ec8, Func Offset: 0xb8
}

// xGridIterFirstCell__FP5xGridiiR13xGridIterator
// Start address: 0x3d1ed0
xGridBound* xGridIterFirstCell(xGrid* grid, int32 grx, int32 grz, xGridIterator& it)
{
	// Line 581, Address: 0x3d1ed0, Func Offset: 0
	// Line 582, Address: 0x3d1ee8, Func Offset: 0x18
	// Line 583, Address: 0x3d1f00, Func Offset: 0x30
	// Line 581, Address: 0x3d1f48, Func Offset: 0x78
	// Line 582, Address: 0x3d1f50, Func Offset: 0x80
	// Line 583, Address: 0x3d1f5c, Func Offset: 0x8c
	// Line 584, Address: 0x3d1f64, Func Offset: 0x94
	// Func End, Address: 0x3d1f6c, Func Offset: 0x9c
}

// xGridIterFirstCell__FPP10xGridBoundR13xGridIterator
// Start address: 0x3d1f70
xGridBound* xGridIterFirstCell(xGridBound** head, xGridIterator& it)
{
	xGridBound* curcell;
	// Line 571, Address: 0x3d1f70, Func Offset: 0
	// Line 572, Address: 0x3d1f74, Func Offset: 0x4
	// Line 573, Address: 0x3d1f7c, Func Offset: 0xc
	// Line 574, Address: 0x3d1f80, Func Offset: 0x10
	// Line 575, Address: 0x3d1f84, Func Offset: 0x14
	// Line 576, Address: 0x3d1f88, Func Offset: 0x18
	// Line 577, Address: 0x3d1f94, Func Offset: 0x24
	// Line 572, Address: 0x3d1f9c, Func Offset: 0x2c
	// Line 578, Address: 0x3d1fa0, Func Offset: 0x30
	// Func End, Address: 0x3d1fa8, Func Offset: 0x38
}

// xGridCheckPosition__FP5xGridP5xVec3P7xQCDataPFP4xEntPv_iPv
// Start address: 0x3d1fb0
void xGridCheckPosition(xGrid* grid, xVec3* pos, xQCData* qcd, int32(*hitCB)(xEnt*, void*), void* cbdata)
{
	xGridIterator it;
	xEnt* ent;
	int32 px;
	int32 pz;
	xGridBound* cell;
	float32 clcenterx;
	float32 clcenterz;
	int32 i;
	int32 _x;
	int32 _z;
	int32 offs[2][3][4];
	int32 k;
	// Line 484, Address: 0x3d1fb0, Func Offset: 0
	// Line 488, Address: 0x3d1fb8, Func Offset: 0x8
	// Line 484, Address: 0x3d1fbc, Func Offset: 0xc
	// Line 488, Address: 0x3d1ff4, Func Offset: 0x44
	// Line 489, Address: 0x3d216c, Func Offset: 0x1bc
	// Line 491, Address: 0x3d217c, Func Offset: 0x1cc
	// Line 499, Address: 0x3d2194, Func Offset: 0x1e4
	// Line 500, Address: 0x3d21f8, Func Offset: 0x248
	// Line 515, Address: 0x3d2208, Func Offset: 0x258
	// Line 517, Address: 0x3d2214, Func Offset: 0x264
	// Line 520, Address: 0x3d221c, Func Offset: 0x26c
	// Line 521, Address: 0x3d2224, Func Offset: 0x274
	// Line 522, Address: 0x3d2234, Func Offset: 0x284
	// Line 523, Address: 0x3d2238, Func Offset: 0x288
	// Line 524, Address: 0x3d2240, Func Offset: 0x290
	// Line 528, Address: 0x3d2244, Func Offset: 0x294
	// Line 529, Address: 0x3d2274, Func Offset: 0x2c4
	// Line 530, Address: 0x3d2280, Func Offset: 0x2d0
	// Line 533, Address: 0x3d2298, Func Offset: 0x2e8
	// Line 534, Address: 0x3d22a4, Func Offset: 0x2f4
	// Line 537, Address: 0x3d22bc, Func Offset: 0x30c
	// Line 538, Address: 0x3d2320, Func Offset: 0x370
	// Line 540, Address: 0x3d2328, Func Offset: 0x378
	// Line 547, Address: 0x3d233c, Func Offset: 0x38c
	// Line 540, Address: 0x3d2340, Func Offset: 0x390
	// Line 548, Address: 0x3d2344, Func Offset: 0x394
	// Line 549, Address: 0x3d23a8, Func Offset: 0x3f8
	// Line 550, Address: 0x3d23b0, Func Offset: 0x400
	// Line 552, Address: 0x3d23c0, Func Offset: 0x410
	// Line 553, Address: 0x3d23e8, Func Offset: 0x438
	// Line 555, Address: 0x3d23f0, Func Offset: 0x440
	// Line 562, Address: 0x3d2404, Func Offset: 0x454
	// Line 555, Address: 0x3d2408, Func Offset: 0x458
	// Line 563, Address: 0x3d240c, Func Offset: 0x45c
	// Line 564, Address: 0x3d2470, Func Offset: 0x4c0
	// Line 566, Address: 0x3d2478, Func Offset: 0x4c8
	// Line 488, Address: 0x3d2480, Func Offset: 0x4d0
	// Line 566, Address: 0x3d2498, Func Offset: 0x4e8
	// Line 496, Address: 0x3d24b4, Func Offset: 0x504
	// Line 512, Address: 0x3d24bc, Func Offset: 0x50c
	// Line 566, Address: 0x3d24c4, Func Offset: 0x514
	// Line 510, Address: 0x3d24c8, Func Offset: 0x518
	// Line 566, Address: 0x3d24cc, Func Offset: 0x51c
	// Line 510, Address: 0x3d24d0, Func Offset: 0x520
	// Line 566, Address: 0x3d24d8, Func Offset: 0x528
	// Line 510, Address: 0x3d24dc, Func Offset: 0x52c
	// Line 512, Address: 0x3d24e4, Func Offset: 0x534
	// Line 566, Address: 0x3d24e8, Func Offset: 0x538
	// Line 510, Address: 0x3d24ec, Func Offset: 0x53c
	// Line 566, Address: 0x3d24f4, Func Offset: 0x544
	// Line 511, Address: 0x3d24f8, Func Offset: 0x548
	// Line 513, Address: 0x3d24fc, Func Offset: 0x54c
	// Line 510, Address: 0x3d2500, Func Offset: 0x550
	// Line 566, Address: 0x3d2504, Func Offset: 0x554
	// Line 514, Address: 0x3d250c, Func Offset: 0x55c
	// Line 511, Address: 0x3d2510, Func Offset: 0x560
	// Line 566, Address: 0x3d2514, Func Offset: 0x564
	// Line 537, Address: 0x3d2524, Func Offset: 0x574
	// Line 566, Address: 0x3d2540, Func Offset: 0x590
	// Line 545, Address: 0x3d255c, Func Offset: 0x5ac
	// Line 552, Address: 0x3d2564, Func Offset: 0x5b4
	// Line 566, Address: 0x3d256c, Func Offset: 0x5bc
	// Func End, Address: 0x3d25b8, Func Offset: 0x608
}

// xGridEntIsTooBig__FP5xGridPC4xEnt
// Start address: 0x3d25c0
int32 xGridEntIsTooBig(xGrid* grid, xEnt* ent)
{
	xBound* bound;
	float32 maxr;
	xBBox* bbox;
	float32 rx;
	float32 ry;
	float32 rz;
	xBBox* bbox;
	float32 rx;
	float32 rz;
	// Line 408, Address: 0x3d25c0, Func Offset: 0
	// Line 409, Address: 0x3d25c4, Func Offset: 0x4
	// Line 408, Address: 0x3d25c8, Func Offset: 0x8
	// Line 409, Address: 0x3d25cc, Func Offset: 0xc
	// Line 415, Address: 0x3d25d4, Func Offset: 0x14
	// Line 429, Address: 0x3d25e0, Func Offset: 0x20
	// Line 432, Address: 0x3d25e8, Func Offset: 0x28
	// Line 435, Address: 0x3d25ec, Func Offset: 0x2c
	// Line 432, Address: 0x3d25f0, Func Offset: 0x30
	// Line 435, Address: 0x3d25f4, Func Offset: 0x34
	// Line 432, Address: 0x3d2600, Func Offset: 0x40
	// Line 435, Address: 0x3d260c, Func Offset: 0x4c
	// Line 432, Address: 0x3d2610, Func Offset: 0x50
	// Line 435, Address: 0x3d2614, Func Offset: 0x54
	// Line 436, Address: 0x3d2628, Func Offset: 0x68
	// Line 442, Address: 0x3d2630, Func Offset: 0x70
	// Line 411, Address: 0x3d263c, Func Offset: 0x7c
	// Line 442, Address: 0x3d2640, Func Offset: 0x80
	// Line 412, Address: 0x3d2648, Func Offset: 0x88
	// Line 442, Address: 0x3d2650, Func Offset: 0x90
	// Line 425, Address: 0x3d265c, Func Offset: 0x9c
	// Line 442, Address: 0x3d2664, Func Offset: 0xa4
	// Line 425, Address: 0x3d2668, Func Offset: 0xa8
	// Line 419, Address: 0x3d266c, Func Offset: 0xac
	// Line 425, Address: 0x3d2670, Func Offset: 0xb0
	// Line 442, Address: 0x3d2678, Func Offset: 0xb8
	// Line 419, Address: 0x3d2690, Func Offset: 0xd0
	// Line 425, Address: 0x3d2698, Func Offset: 0xd8
	// Line 442, Address: 0x3d26a0, Func Offset: 0xe0
	// Line 425, Address: 0x3d26a4, Func Offset: 0xe4
	// Line 442, Address: 0x3d26a8, Func Offset: 0xe8
	// Line 425, Address: 0x3d26b8, Func Offset: 0xf8
	// Line 442, Address: 0x3d26bc, Func Offset: 0xfc
	// Line 425, Address: 0x3d26c0, Func Offset: 0x100
	// Line 442, Address: 0x3d26ec, Func Offset: 0x12c
	// Line 443, Address: 0x3d26f4, Func Offset: 0x134
	// Func End, Address: 0x3d26fc, Func Offset: 0x13c
}

// xGridGetCell__FP5xGridfffRiRi
// Start address: 0x3d2700
void xGridGetCell(xGrid* grid, float32 posx, float32 posz, int32& grx, int32& grz)
{
	float32 pgridx;
	float32 pgridz;
	// Line 391, Address: 0x3d2700, Func Offset: 0
	// Line 392, Address: 0x3d2708, Func Offset: 0x8
	// Line 393, Address: 0x3d2710, Func Offset: 0x10
	// Line 391, Address: 0x3d2714, Func Offset: 0x14
	// Line 392, Address: 0x3d2718, Func Offset: 0x18
	// Line 391, Address: 0x3d271c, Func Offset: 0x1c
	// Line 393, Address: 0x3d2720, Func Offset: 0x20
	// Line 394, Address: 0x3d2784, Func Offset: 0x84
	// Line 393, Address: 0x3d278c, Func Offset: 0x8c
	// Line 394, Address: 0x3d2790, Func Offset: 0x90
	// Line 395, Address: 0x3d27f8, Func Offset: 0xf8
	// Func End, Address: 0x3d2800, Func Offset: 0x100
}

// xGridUpdate__FP5xGridP4xEnt
// Start address: 0x3d2800
void xGridUpdate(xGrid* grid, xEnt* ent)
{
	int32 dx;
	int32 dz;
	xGridBound* gridb;
	xGridBound* cur;
	xGridBound** prev;
	xGridBound** cell;
	// Line 331, Address: 0x3d2800, Func Offset: 0
	// Line 333, Address: 0x3d28fc, Func Offset: 0xfc
	// Line 332, Address: 0x3d2900, Func Offset: 0x100
	// Line 333, Address: 0x3d2904, Func Offset: 0x104
	// Line 331, Address: 0x3d2908, Func Offset: 0x108
	// Line 333, Address: 0x3d290c, Func Offset: 0x10c
	// Line 344, Address: 0x3d2920, Func Offset: 0x120
	// Line 345, Address: 0x3d2924, Func Offset: 0x124
	// Line 349, Address: 0x3d2928, Func Offset: 0x128
	// Line 347, Address: 0x3d2940, Func Offset: 0x140
	// Line 349, Address: 0x3d2950, Func Offset: 0x150
	// Line 355, Address: 0x3d2964, Func Offset: 0x164
	// Line 356, Address: 0x3d296c, Func Offset: 0x16c
	// Line 358, Address: 0x3d2970, Func Offset: 0x170
	// Line 360, Address: 0x3d2978, Func Offset: 0x178
	// Line 362, Address: 0x3d297c, Func Offset: 0x17c
	// Line 361, Address: 0x3d2980, Func Offset: 0x180
	// Line 362, Address: 0x3d2984, Func Offset: 0x184
	// Line 363, Address: 0x3d2988, Func Offset: 0x188
	// Line 366, Address: 0x3d298c, Func Offset: 0x18c
	// Line 368, Address: 0x3d29a8, Func Offset: 0x1a8
	// Line 369, Address: 0x3d29ac, Func Offset: 0x1ac
	// Line 370, Address: 0x3d29b4, Func Offset: 0x1b4
	// Line 371, Address: 0x3d29b8, Func Offset: 0x1b8
	// Line 372, Address: 0x3d29bc, Func Offset: 0x1bc
	// Line 374, Address: 0x3d29c0, Func Offset: 0x1c0
	// Func End, Address: 0x3d29c8, Func Offset: 0x1c8
}

// xGridRemove__FP10xGridBound
// Start address: 0x3d29d0
int32 xGridRemove(xGridBound* gridb)
{
	xGridBound* cur;
	xGridBound** prev;
	// Line 268, Address: 0x3d29d0, Func Offset: 0
	// Line 277, Address: 0x3d29d4, Func Offset: 0x4
	// Line 280, Address: 0x3d29dc, Func Offset: 0xc
	// Line 288, Address: 0x3d29ec, Func Offset: 0x1c
	// Line 292, Address: 0x3d29f0, Func Offset: 0x20
	// Line 290, Address: 0x3d2a08, Func Offset: 0x38
	// Line 281, Address: 0x3d2a18, Func Offset: 0x48
	// Line 292, Address: 0x3d2a1c, Func Offset: 0x4c
	// Line 282, Address: 0x3d2a20, Func Offset: 0x50
	// Line 298, Address: 0x3d2a28, Func Offset: 0x58
	// Line 303, Address: 0x3d2a2c, Func Offset: 0x5c
	// Line 298, Address: 0x3d2a30, Func Offset: 0x60
	// Line 299, Address: 0x3d2a34, Func Offset: 0x64
	// Line 300, Address: 0x3d2a38, Func Offset: 0x68
	// Line 301, Address: 0x3d2a3c, Func Offset: 0x6c
	// Line 302, Address: 0x3d2a40, Func Offset: 0x70
	// Line 303, Address: 0x3d2a44, Func Offset: 0x74
	// Line 304, Address: 0x3d2a48, Func Offset: 0x78
	// Line 306, Address: 0x3d2a4c, Func Offset: 0x7c
	// Line 307, Address: 0x3d2a50, Func Offset: 0x80
	// Func End, Address: 0x3d2a58, Func Offset: 0x88
}

// xGridAdd__FP5xGridP4xEnt
// Start address: 0x3d2a60
int32 xGridAdd(xGrid* grid, xEnt* ent)
{
	xBound* bound;
	xVec3* center;
	float32 maxr;
	xSphere* sph;
	xBBox* bbox;
	float32 rx;
	float32 ry;
	float32 rz;
	xBBox* bbox;
	float32 rx;
	float32 rz;
	float32 cgridx;
	float32 cgridz;
	int32 x;
	int32 z;
	// Line 163, Address: 0x3d2a60, Func Offset: 0
	// Line 172, Address: 0x3d2a64, Func Offset: 0x4
	// Line 163, Address: 0x3d2a68, Func Offset: 0x8
	// Line 171, Address: 0x3d2a88, Func Offset: 0x28
	// Line 172, Address: 0x3d2a90, Func Offset: 0x30
	// Line 189, Address: 0x3d2a98, Func Offset: 0x38
	// Line 217, Address: 0x3d2aa4, Func Offset: 0x44
	// Line 224, Address: 0x3d2aac, Func Offset: 0x4c
	// Line 221, Address: 0x3d2ab4, Func Offset: 0x54
	// Line 224, Address: 0x3d2abc, Func Offset: 0x5c
	// Line 221, Address: 0x3d2ac0, Func Offset: 0x60
	// Line 224, Address: 0x3d2acc, Func Offset: 0x6c
	// Line 221, Address: 0x3d2ad0, Func Offset: 0x70
	// Line 224, Address: 0x3d2ad4, Func Offset: 0x74
	// Line 231, Address: 0x3d2ae8, Func Offset: 0x88
	// Line 232, Address: 0x3d2b08, Func Offset: 0xa8
	// Line 235, Address: 0x3d2b10, Func Offset: 0xb0
	// Line 248, Address: 0x3d2b18, Func Offset: 0xb8
	// Line 249, Address: 0x3d2b28, Func Offset: 0xc8
	// Line 250, Address: 0x3d2b30, Func Offset: 0xd0
	// Line 248, Address: 0x3d2b34, Func Offset: 0xd4
	// Line 249, Address: 0x3d2b3c, Func Offset: 0xdc
	// Line 250, Address: 0x3d2b40, Func Offset: 0xe0
	// Line 251, Address: 0x3d2ba4, Func Offset: 0x144
	// Line 250, Address: 0x3d2bac, Func Offset: 0x14c
	// Line 251, Address: 0x3d2bb0, Func Offset: 0x150
	// Line 253, Address: 0x3d2c14, Func Offset: 0x1b4
	// Line 251, Address: 0x3d2c20, Func Offset: 0x1c0
	// Line 253, Address: 0x3d2c28, Func Offset: 0x1c8
	// Line 259, Address: 0x3d2c58, Func Offset: 0x1f8
	// Line 175, Address: 0x3d2c64, Func Offset: 0x204
	// Line 259, Address: 0x3d2c68, Func Offset: 0x208
	// Line 179, Address: 0x3d2c8c, Func Offset: 0x22c
	// Line 259, Address: 0x3d2c90, Func Offset: 0x230
	// Line 183, Address: 0x3d2c98, Func Offset: 0x238
	// Line 259, Address: 0x3d2ca0, Func Offset: 0x240
	// Line 179, Address: 0x3d2cb0, Func Offset: 0x250
	// Line 259, Address: 0x3d2cc0, Func Offset: 0x260
	// Line 179, Address: 0x3d2cc8, Func Offset: 0x268
	// Line 259, Address: 0x3d2ccc, Func Offset: 0x26c
	// Line 200, Address: 0x3d2cec, Func Offset: 0x28c
	// Line 259, Address: 0x3d2cf4, Func Offset: 0x294
	// Line 200, Address: 0x3d2cf8, Func Offset: 0x298
	// Line 194, Address: 0x3d2cfc, Func Offset: 0x29c
	// Line 200, Address: 0x3d2d00, Func Offset: 0x2a0
	// Line 259, Address: 0x3d2d08, Func Offset: 0x2a8
	// Line 194, Address: 0x3d2d20, Func Offset: 0x2c0
	// Line 200, Address: 0x3d2d28, Func Offset: 0x2c8
	// Line 259, Address: 0x3d2d30, Func Offset: 0x2d0
	// Line 200, Address: 0x3d2d34, Func Offset: 0x2d4
	// Line 259, Address: 0x3d2d38, Func Offset: 0x2d8
	// Line 200, Address: 0x3d2d48, Func Offset: 0x2e8
	// Line 259, Address: 0x3d2d4c, Func Offset: 0x2ec
	// Line 200, Address: 0x3d2d50, Func Offset: 0x2f0
	// Line 259, Address: 0x3d2d7c, Func Offset: 0x31c
	// Line 207, Address: 0x3d2da0, Func Offset: 0x340
	// Line 259, Address: 0x3d2da4, Func Offset: 0x344
	// Line 211, Address: 0x3d2dac, Func Offset: 0x34c
	// Line 259, Address: 0x3d2db4, Func Offset: 0x354
	// Line 207, Address: 0x3d2dc4, Func Offset: 0x364
	// Line 259, Address: 0x3d2dd4, Func Offset: 0x374
	// Line 207, Address: 0x3d2ddc, Func Offset: 0x37c
	// Line 259, Address: 0x3d2de0, Func Offset: 0x380
	// Line 231, Address: 0x3d2e04, Func Offset: 0x3a4
	// Line 259, Address: 0x3d2e14, Func Offset: 0x3b4
	// Line 231, Address: 0x3d2e1c, Func Offset: 0x3bc
	// Line 259, Address: 0x3d2e20, Func Offset: 0x3c0
	// Line 243, Address: 0x3d2e34, Func Offset: 0x3d4
	// Line 259, Address: 0x3d2e3c, Func Offset: 0x3dc
	// Line 253, Address: 0x3d2e4c, Func Offset: 0x3ec
	// Line 259, Address: 0x3d2e54, Func Offset: 0x3f4
	// Line 253, Address: 0x3d2e58, Func Offset: 0x3f8
	// Line 259, Address: 0x3d2e5c, Func Offset: 0x3fc
	// Line 253, Address: 0x3d2e60, Func Offset: 0x400
	// Line 259, Address: 0x3d2e64, Func Offset: 0x404
	// Line 257, Address: 0x3d2e74, Func Offset: 0x414
	// Line 259, Address: 0x3d2e78, Func Offset: 0x418
	// Line 260, Address: 0x3d2e80, Func Offset: 0x420
	// Func End, Address: 0x3d2ea0, Func Offset: 0x440
}

// xGridEmpty__FP5xGrid
// Start address: 0x3d2ea0
void xGridEmpty(xGrid* grid)
{
	xGridBound** head;
	xGridBound* curr;
	int32 x;
	int32 z;
	xGridBound* currnext;
	xGridBound* currnext;
	// Line 100, Address: 0x3d2ea0, Func Offset: 0
	// Line 106, Address: 0x3d2eb4, Func Offset: 0x14
	// Line 101, Address: 0x3d2ebc, Func Offset: 0x1c
	// Line 102, Address: 0x3d2ed0, Func Offset: 0x30
	// Line 103, Address: 0x3d2ee8, Func Offset: 0x48
	// Line 104, Address: 0x3d2eec, Func Offset: 0x4c
	// Line 105, Address: 0x3d2ef8, Func Offset: 0x58
	// Line 106, Address: 0x3d2efc, Func Offset: 0x5c
	// Line 108, Address: 0x3d2f18, Func Offset: 0x78
	// Line 109, Address: 0x3d2f20, Func Offset: 0x80
	// Line 110, Address: 0x3d2f24, Func Offset: 0x84
	// Line 111, Address: 0x3d2f38, Func Offset: 0x98
	// Line 114, Address: 0x3d2f50, Func Offset: 0xb0
	// Line 115, Address: 0x3d2f54, Func Offset: 0xb4
	// Line 117, Address: 0x3d2f5c, Func Offset: 0xbc
	// Line 116, Address: 0x3d2f64, Func Offset: 0xc4
	// Line 117, Address: 0x3d2f68, Func Offset: 0xc8
	// Line 119, Address: 0x3d2f84, Func Offset: 0xe4
	// Line 122, Address: 0x3d2f90, Func Offset: 0xf0
	// Func End, Address: 0x3d2f98, Func Offset: 0xf8
}

// xGridKill__FP5xGrid
// Start address: 0x3d2fa0
void xGridKill(xGrid* grid)
{
	// Line 85, Address: 0x3d2fa0, Func Offset: 0
	// Line 87, Address: 0x3d2fac, Func Offset: 0xc
	// Line 89, Address: 0x3d2fb4, Func Offset: 0x14
	// Line 90, Address: 0x3d2fb8, Func Offset: 0x18
	// Line 91, Address: 0x3d2fbc, Func Offset: 0x1c
	// Func End, Address: 0x3d2fcc, Func Offset: 0x2c
}

// xGridInit__FP5xGridPC4xBoxUsUsUc
// Start address: 0x3d2fd0
void xGridInit(xGrid* grid, xBox* bounds, uint16 nx, uint16 nz, uint8 ingrid_id)
{
	float32 gsizex;
	float32 gsizez;
	// Line 32, Address: 0x3d2fd0, Func Offset: 0
	// Line 43, Address: 0x3d2fd8, Func Offset: 0x8
	// Line 32, Address: 0x3d2fdc, Func Offset: 0xc
	// Line 44, Address: 0x3d2fe0, Func Offset: 0x10
	// Line 32, Address: 0x3d2fe4, Func Offset: 0x14
	// Line 45, Address: 0x3d2fe8, Func Offset: 0x18
	// Line 32, Address: 0x3d2fec, Func Offset: 0x1c
	// Line 40, Address: 0x3d2ff4, Func Offset: 0x24
	// Line 46, Address: 0x3d2ff8, Func Offset: 0x28
	// Line 41, Address: 0x3d2ffc, Func Offset: 0x2c
	// Line 42, Address: 0x3d3004, Func Offset: 0x34
	// Line 43, Address: 0x3d3008, Func Offset: 0x38
	// Line 44, Address: 0x3d300c, Func Offset: 0x3c
	// Line 45, Address: 0x3d3010, Func Offset: 0x40
	// Line 46, Address: 0x3d3014, Func Offset: 0x44
	// Line 47, Address: 0x3d3018, Func Offset: 0x48
	// Line 48, Address: 0x3d3020, Func Offset: 0x50
	// Line 47, Address: 0x3d3028, Func Offset: 0x58
	// Line 49, Address: 0x3d302c, Func Offset: 0x5c
	// Line 50, Address: 0x3d3070, Func Offset: 0xa0
	// Line 51, Address: 0x3d30ac, Func Offset: 0xdc
	// Line 50, Address: 0x3d30b4, Func Offset: 0xe4
	// Line 51, Address: 0x3d30b8, Func Offset: 0xe8
	// Line 53, Address: 0x3d30cc, Func Offset: 0xfc
	// Line 54, Address: 0x3d30d4, Func Offset: 0x104
	// Line 56, Address: 0x3d3110, Func Offset: 0x140
	// Line 58, Address: 0x3d312c, Func Offset: 0x15c
	// Line 59, Address: 0x3d3134, Func Offset: 0x164
	// Line 61, Address: 0x3d3170, Func Offset: 0x1a0
	// Line 62, Address: 0x3d317c, Func Offset: 0x1ac
	// Line 63, Address: 0x3d31a0, Func Offset: 0x1d0
	// Line 62, Address: 0x3d31a4, Func Offset: 0x1d4
	// Line 63, Address: 0x3d31a8, Func Offset: 0x1d8
	// Line 62, Address: 0x3d31b0, Func Offset: 0x1e0
	// Line 63, Address: 0x3d31b4, Func Offset: 0x1e4
	// Line 65, Address: 0x3d31c4, Func Offset: 0x1f4
	// Line 82, Address: 0x3d31dc, Func Offset: 0x20c
	// Func End, Address: 0x3d31f4, Func Offset: 0x224
}

