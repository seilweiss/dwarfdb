



zLODTable* zLOD_Get(xEnt* ent);
void zLOD_Update(uint32 percent_update);
void zLOD_Setup(float32 fadeDistance);
xEnt* AddToLODList(xEnt* ent);
void AddToLODList(xEnt* ent);

// zLOD_Get__FP4xEnt
// Start address: 0x2c5700
zLODTable* zLOD_Get(xEnt* ent)
{
	uint32 i;
	// Line 346, Address: 0x2c5700, Func Offset: 0
	// Line 348, Address: 0x2c5704, Func Offset: 0x4
	// Line 353, Address: 0x2c570c, Func Offset: 0xc
	// Line 354, Address: 0x2c5728, Func Offset: 0x28
	// Line 356, Address: 0x2c5744, Func Offset: 0x44
	// Line 349, Address: 0x2c5758, Func Offset: 0x58
	// Line 358, Address: 0x2c5760, Func Offset: 0x60
	// Line 361, Address: 0x2c5770, Func Offset: 0x70
	// Line 362, Address: 0x2c5774, Func Offset: 0x74
	// Func End, Address: 0x2c577c, Func Offset: 0x7c
}

// zLOD_Update__FUi
// Start address: 0x2c5780
void zLOD_Update(uint32 percent_update)
{
	uint32 sManagerIndex'118;
	xVec3* campos;
	uint32 numUpdates;
	zLODTable* lod;
	xModelInstance* model;
	float32 camdist2;
	float32 distscale;
	int32 i;
	// Line 232, Address: 0x2c5780, Func Offset: 0
	// Line 235, Address: 0x2c578c, Func Offset: 0xc
	// Line 239, Address: 0x2c57ac, Func Offset: 0x2c
	// Line 240, Address: 0x2c57b4, Func Offset: 0x34
	// Line 272, Address: 0x2c57c4, Func Offset: 0x44
	// Line 324, Address: 0x2c57c8, Func Offset: 0x48
	// Line 272, Address: 0x2c57cc, Func Offset: 0x4c
	// Line 324, Address: 0x2c57d0, Func Offset: 0x50
	// Line 262, Address: 0x2c57d4, Func Offset: 0x54
	// Line 271, Address: 0x2c57d8, Func Offset: 0x58
	// Line 244, Address: 0x2c57e4, Func Offset: 0x64
	// Line 245, Address: 0x2c57e8, Func Offset: 0x68
	// Line 244, Address: 0x2c57ec, Func Offset: 0x6c
	// Line 245, Address: 0x2c57f0, Func Offset: 0x70
	// Line 248, Address: 0x2c57fc, Func Offset: 0x7c
	// Line 245, Address: 0x2c5800, Func Offset: 0x80
	// Line 251, Address: 0x2c5810, Func Offset: 0x90
	// Line 256, Address: 0x2c5814, Func Offset: 0x94
	// Line 264, Address: 0x2c581c, Func Offset: 0x9c
	// Line 265, Address: 0x2c582c, Func Offset: 0xac
	// Line 268, Address: 0x2c5848, Func Offset: 0xc8
	// Line 271, Address: 0x2c585c, Func Offset: 0xdc
	// Line 272, Address: 0x2c5868, Func Offset: 0xe8
	// Line 273, Address: 0x2c586c, Func Offset: 0xec
	// Line 272, Address: 0x2c5870, Func Offset: 0xf0
	// Line 276, Address: 0x2c5874, Func Offset: 0xf4
	// Line 277, Address: 0x2c589c, Func Offset: 0x11c
	// Line 288, Address: 0x2c58c0, Func Offset: 0x140
	// Line 291, Address: 0x2c58cc, Func Offset: 0x14c
	// Line 292, Address: 0x2c58e4, Func Offset: 0x164
	// Line 293, Address: 0x2c58e8, Func Offset: 0x168
	// Line 294, Address: 0x2c58f0, Func Offset: 0x170
	// Line 295, Address: 0x2c58fc, Func Offset: 0x17c
	// Line 296, Address: 0x2c5900, Func Offset: 0x180
	// Line 299, Address: 0x2c590c, Func Offset: 0x18c
	// Line 304, Address: 0x2c5918, Func Offset: 0x198
	// Line 311, Address: 0x2c5928, Func Offset: 0x1a8
	// Line 313, Address: 0x2c593c, Func Offset: 0x1bc
	// Line 314, Address: 0x2c5940, Func Offset: 0x1c0
	// Line 321, Address: 0x2c5950, Func Offset: 0x1d0
	// Line 236, Address: 0x2c5998, Func Offset: 0x218
	// Line 321, Address: 0x2c59a0, Func Offset: 0x220
	// Line 277, Address: 0x2c59ac, Func Offset: 0x22c
	// Line 321, Address: 0x2c59b0, Func Offset: 0x230
	// Line 285, Address: 0x2c59b4, Func Offset: 0x234
	// Line 321, Address: 0x2c59b8, Func Offset: 0x238
	// Line 324, Address: 0x2c59c8, Func Offset: 0x248
	// Line 325, Address: 0x2c59e0, Func Offset: 0x260
	// Line 326, Address: 0x2c59e8, Func Offset: 0x268
	// Line 327, Address: 0x2c59ec, Func Offset: 0x26c
	// Line 328, Address: 0x2c59f8, Func Offset: 0x278
	// Line 329, Address: 0x2c5a04, Func Offset: 0x284
	// Line 330, Address: 0x2c5a08, Func Offset: 0x288
	// Line 331, Address: 0x2c5a14, Func Offset: 0x294
	// Line 332, Address: 0x2c5a20, Func Offset: 0x2a0
	// Line 333, Address: 0x2c5a24, Func Offset: 0x2a4
	// Line 334, Address: 0x2c5a30, Func Offset: 0x2b0
	// Line 335, Address: 0x2c5a3c, Func Offset: 0x2bc
	// Line 336, Address: 0x2c5a40, Func Offset: 0x2c0
	// Line 341, Address: 0x2c5a4c, Func Offset: 0x2cc
	// Line 342, Address: 0x2c5a60, Func Offset: 0x2e0
	// Func End, Address: 0x2c5a68, Func Offset: 0x2e8
}

// zLOD_Setup__Ff
// Start address: 0x2c5a70
void zLOD_Setup(float32 fadeDistance)
{
	uint32 tmpsize;
	uint32 i;
	uint32 j;
	void* data;
	uint32 count;
	zLODTable* tableCurr;
	RpAtomic* model;
	RpAtomic* model;
	// Line 111, Address: 0x2c5a70, Func Offset: 0
	// Line 167, Address: 0x2c5a74, Func Offset: 0x4
	// Line 111, Address: 0x2c5a78, Func Offset: 0x8
	// Line 167, Address: 0x2c5a7c, Func Offset: 0xc
	// Line 111, Address: 0x2c5a80, Func Offset: 0x10
	// Line 157, Address: 0x2c5a90, Func Offset: 0x20
	// Line 158, Address: 0x2c5a94, Func Offset: 0x24
	// Line 159, Address: 0x2c5a98, Func Offset: 0x28
	// Line 167, Address: 0x2c5a9c, Func Offset: 0x2c
	// Line 168, Address: 0x2c5aa8, Func Offset: 0x38
	// Line 171, Address: 0x2c5ab0, Func Offset: 0x40
	// Line 175, Address: 0x2c5ac0, Func Offset: 0x50
	// Line 176, Address: 0x2c5ac8, Func Offset: 0x58
	// Line 172, Address: 0x2c5ad0, Func Offset: 0x60
	// Line 176, Address: 0x2c5adc, Func Offset: 0x6c
	// Line 180, Address: 0x2c5b08, Func Offset: 0x98
	// Line 181, Address: 0x2c5b24, Func Offset: 0xb4
	// Line 182, Address: 0x2c5b28, Func Offset: 0xb8
	// Line 190, Address: 0x2c5b34, Func Offset: 0xc4
	// Line 199, Address: 0x2c5b50, Func Offset: 0xe0
	// Line 200, Address: 0x2c5b68, Func Offset: 0xf8
	// Line 201, Address: 0x2c5b70, Func Offset: 0x100
	// Line 202, Address: 0x2c5b78, Func Offset: 0x108
	// Line 203, Address: 0x2c5b80, Func Offset: 0x110
	// Line 204, Address: 0x2c5b90, Func Offset: 0x120
	// Line 183, Address: 0x2c5b98, Func Offset: 0x128
	// Line 204, Address: 0x2c5ba4, Func Offset: 0x134
	// Line 183, Address: 0x2c5bb0, Func Offset: 0x140
	// Line 184, Address: 0x2c5bb4, Func Offset: 0x144
	// Line 204, Address: 0x2c5bc0, Func Offset: 0x150
	// Line 185, Address: 0x2c5bd8, Func Offset: 0x168
	// Line 204, Address: 0x2c5bdc, Func Offset: 0x16c
	// Line 185, Address: 0x2c5be0, Func Offset: 0x170
	// Line 204, Address: 0x2c5be4, Func Offset: 0x174
	// Line 206, Address: 0x2c5bf4, Func Offset: 0x184
	// Line 209, Address: 0x2c5c00, Func Offset: 0x190
	// Line 210, Address: 0x2c5c18, Func Offset: 0x1a8
	// Line 211, Address: 0x2c5c20, Func Offset: 0x1b0
	// Line 212, Address: 0x2c5c28, Func Offset: 0x1b8
	// Line 213, Address: 0x2c5c30, Func Offset: 0x1c0
	// Line 214, Address: 0x2c5c44, Func Offset: 0x1d4
	// Line 215, Address: 0x2c5c50, Func Offset: 0x1e0
	// Line 219, Address: 0x2c5c64, Func Offset: 0x1f4
	// Line 215, Address: 0x2c5c6c, Func Offset: 0x1fc
	// Line 218, Address: 0x2c5c74, Func Offset: 0x204
	// Line 219, Address: 0x2c5c80, Func Offset: 0x210
	// Line 220, Address: 0x2c5c88, Func Offset: 0x218
	// Line 225, Address: 0x2c5ca0, Func Offset: 0x230
	// Line 226, Address: 0x2c5cbc, Func Offset: 0x24c
	// Func End, Address: 0x2c5cd8, Func Offset: 0x268
}

// AddToLODList__FP4xEntP6xScenePv
// Start address: 0x2c5ce0
xEnt* AddToLODList(xEnt* ent)
{
	// Line 97, Address: 0x2c5ce0, Func Offset: 0
	// Line 98, Address: 0x2c5cec, Func Offset: 0xc
	// Line 100, Address: 0x2c5cf8, Func Offset: 0x18
	// Line 104, Address: 0x2c5d00, Func Offset: 0x20
	// Line 106, Address: 0x2c5d08, Func Offset: 0x28
	// Line 107, Address: 0x2c5d0c, Func Offset: 0x2c
	// Func End, Address: 0x2c5d1c, Func Offset: 0x3c
}

// AddToLODList__FP4xEnt
// Start address: 0x2c5d20
void AddToLODList(xEnt* ent)
{
	xModelInstance* model;
	uint32 i;
	xModelInstance* minst;
	uint32 numextra;
	float32 distscale;
	zDestructible* destructible;
	// Line 43, Address: 0x2c5d20, Func Offset: 0
	// Line 45, Address: 0x2c5d3c, Func Offset: 0x1c
	// Line 44, Address: 0x2c5d40, Func Offset: 0x20
	// Line 45, Address: 0x2c5d44, Func Offset: 0x24
	// Line 46, Address: 0x2c5d60, Func Offset: 0x40
	// Line 51, Address: 0x2c5d7c, Func Offset: 0x5c
	// Line 53, Address: 0x2c5d80, Func Offset: 0x60
	// Line 55, Address: 0x2c5d88, Func Offset: 0x68
	// Line 54, Address: 0x2c5d8c, Func Offset: 0x6c
	// Line 56, Address: 0x2c5d90, Func Offset: 0x70
	// Line 59, Address: 0x2c5da8, Func Offset: 0x88
	// Line 61, Address: 0x2c5db8, Func Offset: 0x98
	// Line 65, Address: 0x2c5dbc, Func Offset: 0x9c
	// Line 61, Address: 0x2c5dc8, Func Offset: 0xa8
	// Line 62, Address: 0x2c5dd4, Func Offset: 0xb4
	// Line 65, Address: 0x2c5de0, Func Offset: 0xc0
	// Line 68, Address: 0x2c5e00, Func Offset: 0xe0
	// Line 69, Address: 0x2c5e18, Func Offset: 0xf8
	// Line 70, Address: 0x2c5e24, Func Offset: 0x104
	// Line 71, Address: 0x2c5e28, Func Offset: 0x108
	// Line 73, Address: 0x2c5e34, Func Offset: 0x114
	// Line 76, Address: 0x2c5e38, Func Offset: 0x118
	// Line 71, Address: 0x2c5e40, Func Offset: 0x120
	// Line 79, Address: 0x2c5e48, Func Offset: 0x128
	// Line 71, Address: 0x2c5e50, Func Offset: 0x130
	// Line 73, Address: 0x2c5e54, Func Offset: 0x134
	// Line 74, Address: 0x2c5e5c, Func Offset: 0x13c
	// Line 75, Address: 0x2c5e60, Func Offset: 0x140
	// Line 76, Address: 0x2c5e6c, Func Offset: 0x14c
	// Line 79, Address: 0x2c5e78, Func Offset: 0x158
	// Line 80, Address: 0x2c5e84, Func Offset: 0x164
	// Line 82, Address: 0x2c5e8c, Func Offset: 0x16c
	// Line 83, Address: 0x2c5e94, Func Offset: 0x174
	// Line 85, Address: 0x2c5e98, Func Offset: 0x178
	// Line 88, Address: 0x2c5ea4, Func Offset: 0x184
	// Line 89, Address: 0x2c5ec0, Func Offset: 0x1a0
	// Func End, Address: 0x2c5edc, Func Offset: 0x1bc
}

