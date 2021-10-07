



void zCollGeom_CamDisable(xEnt* ent);
void zCollGeom_CamEnable(xEnt* ent);
void zCollGeom_Init();
uint32 zCollGeom_EntSetup(xEnt* ent);

// zCollGeom_CamDisable__FP4xEnt
// Start address: 0x387470
void zCollGeom_CamDisable(xEnt* ent)
{
	// Line 225, Address: 0x387470, Func Offset: 0
	// Func End, Address: 0x387478, Func Offset: 0x8
}

// zCollGeom_CamEnable__FP4xEnt
// Start address: 0x387480
void zCollGeom_CamEnable(xEnt* ent)
{
	// Line 216, Address: 0x387480, Func Offset: 0
	// Line 220, Address: 0x38748c, Func Offset: 0xc
	// Func End, Address: 0x3874a8, Func Offset: 0x28
}

// zCollGeom_Init__Fv
// Start address: 0x3874b0
void zCollGeom_Init()
{
	uint32 sCollisionGeomTableCount'94;
	uint32 tmpsize;
	uint32 i;
	uint32 k;
	void* data;
	uint32 hash;
	// Line 137, Address: 0x3874b0, Func Offset: 0
	// Line 142, Address: 0x3874b4, Func Offset: 0x4
	// Line 137, Address: 0x3874b8, Func Offset: 0x8
	// Line 142, Address: 0x3874bc, Func Offset: 0xc
	// Line 137, Address: 0x3874c0, Func Offset: 0x10
	// Line 142, Address: 0x3874d0, Func Offset: 0x20
	// Line 147, Address: 0x3874e4, Func Offset: 0x34
	// Line 153, Address: 0x3874f0, Func Offset: 0x40
	// Line 212, Address: 0x387504, Func Offset: 0x54
	// Line 150, Address: 0x38750c, Func Offset: 0x5c
	// Line 212, Address: 0x387518, Func Offset: 0x68
	// Line 155, Address: 0x387520, Func Offset: 0x70
	// Line 212, Address: 0x38752c, Func Offset: 0x7c
	// Line 165, Address: 0x387550, Func Offset: 0xa0
	// Line 167, Address: 0x387558, Func Offset: 0xa8
	// Line 212, Address: 0x38755c, Func Offset: 0xac
	// Line 170, Address: 0x387574, Func Offset: 0xc4
	// Line 212, Address: 0x387578, Func Offset: 0xc8
	// Line 175, Address: 0x38758c, Func Offset: 0xdc
	// Line 212, Address: 0x387590, Func Offset: 0xe0
	// Line 180, Address: 0x3875bc, Func Offset: 0x10c
	// Line 212, Address: 0x3875c0, Func Offset: 0x110
	// Line 183, Address: 0x3875c8, Func Offset: 0x118
	// Line 212, Address: 0x3875cc, Func Offset: 0x11c
	// Line 209, Address: 0x38761c, Func Offset: 0x16c
	// Line 212, Address: 0x387620, Func Offset: 0x170
	// Line 211, Address: 0x387634, Func Offset: 0x184
	// Line 212, Address: 0x387638, Func Offset: 0x188
	// Func End, Address: 0x387698, Func Offset: 0x1e8
}

// zCollGeom_EntSetup__FP4xEnt
// Start address: 0x3876a0
uint32 zCollGeom_EntSetup(xEnt* ent)
{
	uint32 i;
	uint32 j;
	uint8 auto_cam_coll;
	zCollGeomTable* tableList;
	RpAtomic* imodel;
	xModelInstance* model;
	xModelInstance* model;
	// Line 38, Address: 0x3876a0, Func Offset: 0
	// Line 45, Address: 0x3876a4, Func Offset: 0x4
	// Line 38, Address: 0x3876a8, Func Offset: 0x8
	// Line 45, Address: 0x3876cc, Func Offset: 0x2c
	// Line 57, Address: 0x387704, Func Offset: 0x64
	// Line 63, Address: 0x387718, Func Offset: 0x78
	// Line 60, Address: 0x38771c, Func Offset: 0x7c
	// Line 63, Address: 0x387720, Func Offset: 0x80
	// Line 65, Address: 0x387730, Func Offset: 0x90
	// Line 114, Address: 0x387744, Func Offset: 0xa4
	// Line 115, Address: 0x387760, Func Offset: 0xc0
	// Line 116, Address: 0x387774, Func Offset: 0xd4
	// Line 119, Address: 0x387778, Func Offset: 0xd8
	// Line 121, Address: 0x38778c, Func Offset: 0xec
	// Line 124, Address: 0x387794, Func Offset: 0xf4
	// Line 126, Address: 0x3877a0, Func Offset: 0x100
	// Line 76, Address: 0x3877d0, Func Offset: 0x130
	// Line 126, Address: 0x3877e0, Func Offset: 0x140
	// Line 76, Address: 0x3877ec, Func Offset: 0x14c
	// Line 126, Address: 0x3877f0, Func Offset: 0x150
	// Line 81, Address: 0x3877f4, Func Offset: 0x154
	// Line 126, Address: 0x3877f8, Func Offset: 0x158
	// Line 83, Address: 0x387810, Func Offset: 0x170
	// Line 126, Address: 0x387824, Func Offset: 0x184
	// Line 83, Address: 0x38782c, Func Offset: 0x18c
	// Line 126, Address: 0x387830, Func Offset: 0x190
	// Line 85, Address: 0x387848, Func Offset: 0x1a8
	// Line 126, Address: 0x387850, Func Offset: 0x1b0
	// Line 94, Address: 0x38785c, Func Offset: 0x1bc
	// Line 126, Address: 0x38786c, Func Offset: 0x1cc
	// Line 94, Address: 0x387878, Func Offset: 0x1d8
	// Line 126, Address: 0x38787c, Func Offset: 0x1dc
	// Line 103, Address: 0x387880, Func Offset: 0x1e0
	// Line 126, Address: 0x387884, Func Offset: 0x1e4
	// Line 103, Address: 0x38789c, Func Offset: 0x1fc
	// Line 105, Address: 0x3878a0, Func Offset: 0x200
	// Line 126, Address: 0x3878b4, Func Offset: 0x214
	// Line 105, Address: 0x3878bc, Func Offset: 0x21c
	// Line 126, Address: 0x3878c0, Func Offset: 0x220
	// Line 107, Address: 0x3878d8, Func Offset: 0x238
	// Line 131, Address: 0x3878e8, Func Offset: 0x248
	// Line 132, Address: 0x3878ec, Func Offset: 0x24c
	// Line 131, Address: 0x3878f0, Func Offset: 0x250
	// Line 134, Address: 0x3878f4, Func Offset: 0x254
	// Func End, Address: 0x387920, Func Offset: 0x280
}

