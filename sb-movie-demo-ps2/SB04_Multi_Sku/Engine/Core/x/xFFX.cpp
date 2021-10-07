



xFFXRotMatchState* xFFXRotMatchAlloc();
void xFFXRotMatchPoolInit(uint32 num);
void xFFXShakeFree(xFFXShakeState* s);
xFFXShakeState* xFFXShakeAlloc();
void xFFXShakePoolInit(uint32 num);
void xFFXShakeUpdateEnt(xEnt* ent, float32 dt, void* fdata);
void xFFXApply(xEnt* ent, xScene* sc, float32 dt);
void xFFXApplyOne(xFFX* ffx, xEnt* ent, xScene* sc, float32 dt);
int16 xFFXAddEffect(xEnt* ent, void(*dof)(xEnt*, xScene*, float32, void*), void* fd);
int16 xFFXAddEffect(xEnt* ent, xFFX* f);
xFFX* xFFXAlloc();
void xFFXPoolInit(uint32 num_ffx);

// xFFXRotMatchAlloc__Fv
// Start address: 0x3eaef0
xFFXRotMatchState* xFFXRotMatchAlloc()
{
	// Line 497, Address: 0x3eaef0, Func Offset: 0
	// Line 499, Address: 0x3eaef4, Func Offset: 0x4
	// Line 504, Address: 0x3eaefc, Func Offset: 0xc
	// Line 505, Address: 0x3eaf00, Func Offset: 0x10
	// Line 500, Address: 0x3eaf08, Func Offset: 0x18
	// Line 506, Address: 0x3eaf0c, Func Offset: 0x1c
	// Func End, Address: 0x3eaf14, Func Offset: 0x24
}

// xFFXRotMatchPoolInit__FUi
// Start address: 0x3eaf20
void xFFXRotMatchPoolInit(uint32 num)
{
	uint32 i;
	// Line 483, Address: 0x3eaf20, Func Offset: 0
	// Line 488, Address: 0x3eaf24, Func Offset: 0x4
	// Line 483, Address: 0x3eaf28, Func Offset: 0x8
	// Line 488, Address: 0x3eaf2c, Func Offset: 0xc
	// Line 487, Address: 0x3eaf30, Func Offset: 0x10
	// Line 488, Address: 0x3eaf34, Func Offset: 0x14
	// Line 489, Address: 0x3eaf48, Func Offset: 0x28
	// Line 490, Address: 0x3eaf4c, Func Offset: 0x2c
	// Line 491, Address: 0x3eaf64, Func Offset: 0x44
	// Line 492, Address: 0x3eaf68, Func Offset: 0x48
	// Line 491, Address: 0x3eaf6c, Func Offset: 0x4c
	// Line 492, Address: 0x3eaf78, Func Offset: 0x58
	// Line 493, Address: 0x3eaf88, Func Offset: 0x68
	// Line 494, Address: 0x3eafa4, Func Offset: 0x84
	// Func End, Address: 0x3eafb0, Func Offset: 0x90
}

// xFFXShakeFree__FP14xFFXShakeState
// Start address: 0x3eafb0
void xFFXShakeFree(xFFXShakeState* s)
{
	// Line 325, Address: 0x3eafb0, Func Offset: 0
	// Line 327, Address: 0x3eafb8, Func Offset: 0x8
	// Func End, Address: 0x3eafc0, Func Offset: 0x10
}

// xFFXShakeAlloc__Fv
// Start address: 0x3eafc0
xFFXShakeState* xFFXShakeAlloc()
{
	// Line 309, Address: 0x3eafc0, Func Offset: 0
	// Line 311, Address: 0x3eafc4, Func Offset: 0x4
	// Line 316, Address: 0x3eafcc, Func Offset: 0xc
	// Line 317, Address: 0x3eafd0, Func Offset: 0x10
	// Line 312, Address: 0x3eafd8, Func Offset: 0x18
	// Line 318, Address: 0x3eafdc, Func Offset: 0x1c
	// Func End, Address: 0x3eafe4, Func Offset: 0x24
}

// xFFXShakePoolInit__FUi
// Start address: 0x3eaff0
void xFFXShakePoolInit(uint32 num)
{
	uint32 i;
	// Line 295, Address: 0x3eaff0, Func Offset: 0
	// Line 300, Address: 0x3eaff4, Func Offset: 0x4
	// Line 295, Address: 0x3eaff8, Func Offset: 0x8
	// Line 300, Address: 0x3eaffc, Func Offset: 0xc
	// Line 299, Address: 0x3eb000, Func Offset: 0x10
	// Line 300, Address: 0x3eb004, Func Offset: 0x14
	// Line 301, Address: 0x3eb018, Func Offset: 0x28
	// Line 302, Address: 0x3eb01c, Func Offset: 0x2c
	// Line 303, Address: 0x3eb034, Func Offset: 0x44
	// Line 304, Address: 0x3eb038, Func Offset: 0x48
	// Line 303, Address: 0x3eb03c, Func Offset: 0x4c
	// Line 304, Address: 0x3eb048, Func Offset: 0x58
	// Line 305, Address: 0x3eb058, Func Offset: 0x68
	// Line 306, Address: 0x3eb074, Func Offset: 0x84
	// Func End, Address: 0x3eb080, Func Offset: 0x90
}

// xFFXShakeUpdateEnt__FP4xEntP6xScenefPv
// Start address: 0x3eb080
void xFFXShakeUpdateEnt(xEnt* ent, float32 dt, void* fdata)
{
	xFFXShakeState* ss;
	float32 tnext;
	float32 mag;
	// Line 252, Address: 0x3eb080, Func Offset: 0
	// Line 259, Address: 0x3eb0a0, Func Offset: 0x20
	// Line 263, Address: 0x3eb0a4, Func Offset: 0x24
	// Line 259, Address: 0x3eb0a8, Func Offset: 0x28
	// Line 263, Address: 0x3eb0ac, Func Offset: 0x2c
	// Line 266, Address: 0x3eb0c8, Func Offset: 0x48
	// Line 272, Address: 0x3eb0dc, Func Offset: 0x5c
	// Line 273, Address: 0x3eb100, Func Offset: 0x80
	// Line 274, Address: 0x3eb150, Func Offset: 0xd0
	// Line 275, Address: 0x3eb158, Func Offset: 0xd8
	// Line 278, Address: 0x3eb160, Func Offset: 0xe0
	// Line 279, Address: 0x3eb164, Func Offset: 0xe4
	// Line 278, Address: 0x3eb168, Func Offset: 0xe8
	// Line 279, Address: 0x3eb170, Func Offset: 0xf0
	// Line 278, Address: 0x3eb174, Func Offset: 0xf4
	// Line 279, Address: 0x3eb180, Func Offset: 0x100
	// Line 281, Address: 0x3eb1a8, Func Offset: 0x128
	// Line 283, Address: 0x3eb1ac, Func Offset: 0x12c
	// Line 272, Address: 0x3eb1b4, Func Offset: 0x134
	// Line 283, Address: 0x3eb1bc, Func Offset: 0x13c
	// Func End, Address: 0x3eb1d8, Func Offset: 0x158
}

// xFFXApply__FP4xEntP6xScenef
// Start address: 0x3eb1e0
void xFFXApply(xEnt* ent, xScene* sc, float32 dt)
{
	// Line 242, Address: 0x3eb1e0, Func Offset: 0
	// Line 245, Address: 0x3eb1f4, Func Offset: 0x14
	// Line 246, Address: 0x3eb1fc, Func Offset: 0x1c
	// Line 248, Address: 0x3eb204, Func Offset: 0x24
	// Func End, Address: 0x3eb210, Func Offset: 0x30
}

// xFFXApplyOne__FP4xFFXP4xEntP6xScenef
// Start address: 0x3eb210
void xFFXApplyOne(xFFX* ffx, xEnt* ent, xScene* sc, float32 dt)
{
	// Line 227, Address: 0x3eb210, Func Offset: 0
	// Line 233, Address: 0x3eb250, Func Offset: 0x40
	// Line 234, Address: 0x3eb25c, Func Offset: 0x4c
	// Line 236, Address: 0x3eb408, Func Offset: 0x1f8
	// Line 239, Address: 0x3eb41c, Func Offset: 0x20c
	// Line 237, Address: 0x3eb428, Func Offset: 0x218
	// Line 239, Address: 0x3eb430, Func Offset: 0x220
	// Func End, Address: 0x3eb478, Func Offset: 0x268
}

// xFFXAddEffect__FP4xEntPFP4xEntP6xScenefPv_vPv
// Start address: 0x3eb480
int16 xFFXAddEffect(xEnt* ent, void(*dof)(xEnt*, xScene*, float32, void*), void* fd)
{
	// Line 126, Address: 0x3eb480, Func Offset: 0
	// Line 127, Address: 0x3eb484, Func Offset: 0x4
	// Line 129, Address: 0x3eb494, Func Offset: 0x14
	// Line 133, Address: 0x3eb49c, Func Offset: 0x1c
	// Line 134, Address: 0x3eb4a0, Func Offset: 0x20
	// Line 135, Address: 0x3eb4a4, Func Offset: 0x24
	// Line 127, Address: 0x3eb4cc, Func Offset: 0x4c
	// Line 136, Address: 0x3eb4d4, Func Offset: 0x54
	// Func End, Address: 0x3eb4dc, Func Offset: 0x5c
}

// xFFXAddEffect__FP4xEntP4xFFX
// Start address: 0x3eb4e0
int16 xFFXAddEffect(xEnt* ent, xFFX* f)
{
	// Line 119, Address: 0x3eb4e0, Func Offset: 0
	// Line 120, Address: 0x3eb4e8, Func Offset: 0x8
	// Line 121, Address: 0x3eb4f4, Func Offset: 0x14
	// Line 122, Address: 0x3eb4f8, Func Offset: 0x18
	// Line 123, Address: 0x3eb500, Func Offset: 0x20
	// Func End, Address: 0x3eb508, Func Offset: 0x28
}

// xFFXAlloc__Fv
// Start address: 0x3eb510
xFFX* xFFXAlloc()
{
	// Line 43, Address: 0x3eb510, Func Offset: 0
	// Line 45, Address: 0x3eb514, Func Offset: 0x4
	// Line 50, Address: 0x3eb51c, Func Offset: 0xc
	// Line 51, Address: 0x3eb520, Func Offset: 0x10
	// Line 46, Address: 0x3eb528, Func Offset: 0x18
	// Line 52, Address: 0x3eb52c, Func Offset: 0x1c
	// Func End, Address: 0x3eb534, Func Offset: 0x24
}

// xFFXPoolInit__FUi
// Start address: 0x3eb540
void xFFXPoolInit(uint32 num_ffx)
{
	uint32 i;
	// Line 29, Address: 0x3eb540, Func Offset: 0
	// Line 34, Address: 0x3eb544, Func Offset: 0x4
	// Line 29, Address: 0x3eb548, Func Offset: 0x8
	// Line 33, Address: 0x3eb54c, Func Offset: 0xc
	// Line 34, Address: 0x3eb550, Func Offset: 0x10
	// Line 35, Address: 0x3eb560, Func Offset: 0x20
	// Line 36, Address: 0x3eb564, Func Offset: 0x24
	// Line 37, Address: 0x3eb57c, Func Offset: 0x3c
	// Line 38, Address: 0x3eb584, Func Offset: 0x44
	// Line 37, Address: 0x3eb588, Func Offset: 0x48
	// Line 38, Address: 0x3eb594, Func Offset: 0x54
	// Line 39, Address: 0x3eb5a8, Func Offset: 0x68
	// Line 40, Address: 0x3eb5bc, Func Offset: 0x7c
	// Func End, Address: 0x3eb5c8, Func Offset: 0x88
}

