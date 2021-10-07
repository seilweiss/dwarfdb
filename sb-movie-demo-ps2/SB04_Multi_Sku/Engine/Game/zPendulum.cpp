



void zPendulumEventCB(xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget);
void zPendulumTranslate(xEnt* xent, xVec3* dpos, xMat4x3* dmat);
void zPendulum_Move(_zPendulum* pend, xScene* s, float32 dt, xEntFrame* frame);
void zPendulum_Update(_zPendulum* pend, xScene* sc, float32 dt);
void zPendulum_Reset(_zPendulum* pend, xScene* sc);
void zPendulum_Init(_zPendulum* pend, xEntAsset* asset);
void zPendulum_Init(void* pend, void* asset);

// zPendulumEventCB__FP5xBaseP5xBaseUiPCfP5xBaseUi
// Start address: 0x30def0
void zPendulumEventCB(xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget)
{
	_zPendulum* pend;
	FloatAndVoid dist;
	zShrapnelAsset* shrap;
	// Line 203, Address: 0x30def0, Func Offset: 0
	// Line 211, Address: 0x30def4, Func Offset: 0x4
	// Line 203, Address: 0x30def8, Func Offset: 0x8
	// Line 211, Address: 0x30df00, Func Offset: 0x10
	// Line 214, Address: 0x30e030, Func Offset: 0x140
	// Line 215, Address: 0x30e038, Func Offset: 0x148
	// Line 218, Address: 0x30e040, Func Offset: 0x150
	// Line 219, Address: 0x30e048, Func Offset: 0x158
	// Line 222, Address: 0x30e050, Func Offset: 0x160
	// Line 223, Address: 0x30e060, Func Offset: 0x170
	// Line 227, Address: 0x30e068, Func Offset: 0x178
	// Line 228, Address: 0x30e088, Func Offset: 0x198
	// Line 232, Address: 0x30e090, Func Offset: 0x1a0
	// Line 233, Address: 0x30e0b0, Func Offset: 0x1c0
	// Line 236, Address: 0x30e0b8, Func Offset: 0x1c8
	// Line 238, Address: 0x30e0d8, Func Offset: 0x1e8
	// Line 239, Address: 0x30e0dc, Func Offset: 0x1ec
	// Line 238, Address: 0x30e0e0, Func Offset: 0x1f0
	// Line 239, Address: 0x30e0e4, Func Offset: 0x1f4
	// Line 240, Address: 0x30e0f8, Func Offset: 0x208
	// Line 243, Address: 0x30e100, Func Offset: 0x210
	// Line 246, Address: 0x30e120, Func Offset: 0x230
	// Line 250, Address: 0x30e128, Func Offset: 0x238
	// Line 252, Address: 0x30e134, Func Offset: 0x244
	// Line 255, Address: 0x30e13c, Func Offset: 0x24c
	// Line 256, Address: 0x30e148, Func Offset: 0x258
	// Line 258, Address: 0x30e150, Func Offset: 0x260
	// Line 259, Address: 0x30e15c, Func Offset: 0x26c
	// Line 269, Address: 0x30e164, Func Offset: 0x274
	// Line 270, Address: 0x30e174, Func Offset: 0x284
	// Line 273, Address: 0x30e184, Func Offset: 0x294
	// Line 274, Address: 0x30e190, Func Offset: 0x2a0
	// Line 278, Address: 0x30e1a4, Func Offset: 0x2b4
	// Line 279, Address: 0x30e1a8, Func Offset: 0x2b8
	// Line 278, Address: 0x30e1ac, Func Offset: 0x2bc
	// Line 279, Address: 0x30e1b0, Func Offset: 0x2c0
	// Line 282, Address: 0x30e1bc, Func Offset: 0x2cc
	// Line 287, Address: 0x30e1c4, Func Offset: 0x2d4
	// Line 288, Address: 0x30e1d8, Func Offset: 0x2e8
	// Line 290, Address: 0x30e1ec, Func Offset: 0x2fc
	// Line 297, Address: 0x30e1f4, Func Offset: 0x304
	// Line 301, Address: 0x30e200, Func Offset: 0x310
	// Line 275, Address: 0x30e20c, Func Offset: 0x31c
	// Line 301, Address: 0x30e210, Func Offset: 0x320
	// Line 276, Address: 0x30e218, Func Offset: 0x328
	// Line 302, Address: 0x30e220, Func Offset: 0x330
	// Func End, Address: 0x30e230, Func Offset: 0x340
}

// zPendulumTranslate__FP4xEntP5xVec3P7xMat4x3
// Start address: 0x30e230
void zPendulumTranslate(xEnt* xent, xVec3* dpos, xMat4x3* dmat)
{
	_zPendulum* pend;
	// Line 183, Address: 0x30e230, Func Offset: 0
	// Line 186, Address: 0x30e24c, Func Offset: 0x1c
	// Line 187, Address: 0x30e254, Func Offset: 0x24
	// Line 188, Address: 0x30e264, Func Offset: 0x34
	// Func End, Address: 0x30e27c, Func Offset: 0x4c
}

// zPendulum_Move__FP10_zPendulumP6xScenefP9xEntFrame
// Start address: 0x30e280
void zPendulum_Move(_zPendulum* pend, xScene* s, float32 dt, xEntFrame* frame)
{
	// Line 178, Address: 0x30e280, Func Offset: 0
	// Func End, Address: 0x30e288, Func Offset: 0x8
}

// zPendulum_Update__FP10_zPendulumP6xScenef
// Start address: 0x30e290
void zPendulum_Update(_zPendulum* pend, xScene* sc, float32 dt)
{
	xEntMotionPenData* aspen;
	float32 t;
	// Line 157, Address: 0x30e290, Func Offset: 0
	// Line 159, Address: 0x30e29c, Func Offset: 0xc
	// Line 163, Address: 0x30e2a4, Func Offset: 0x14
	// Line 161, Address: 0x30e2a8, Func Offset: 0x18
	// Line 163, Address: 0x30e2ac, Func Offset: 0x1c
	// Line 164, Address: 0x30e2b0, Func Offset: 0x20
	// Line 165, Address: 0x30e2bc, Func Offset: 0x2c
	// Line 167, Address: 0x30e2c8, Func Offset: 0x38
	// Line 168, Address: 0x30e2d4, Func Offset: 0x44
	// Line 169, Address: 0x30e2f4, Func Offset: 0x64
	// Line 170, Address: 0x30e318, Func Offset: 0x88
	// Line 172, Address: 0x30e338, Func Offset: 0xa8
	// Line 173, Address: 0x30e33c, Func Offset: 0xac
	// Line 167, Address: 0x30e348, Func Offset: 0xb8
	// Line 173, Address: 0x30e34c, Func Offset: 0xbc
	// Func End, Address: 0x30e36c, Func Offset: 0xdc
}

// zPendulum_Reset__FP10_zPendulumP6xScene
// Start address: 0x30e370
void zPendulum_Reset(_zPendulum* pend, xScene* sc)
{
	xEntMotionPenData* aspen;
	// Line 128, Address: 0x30e370, Func Offset: 0
	// Line 130, Address: 0x30e384, Func Offset: 0x14
	// Line 132, Address: 0x30e38c, Func Offset: 0x1c
	// Line 134, Address: 0x30e398, Func Offset: 0x28
	// Line 137, Address: 0x30e39c, Func Offset: 0x2c
	// Line 138, Address: 0x30e3ac, Func Offset: 0x3c
	// Line 137, Address: 0x30e3b0, Func Offset: 0x40
	// Line 138, Address: 0x30e3b4, Func Offset: 0x44
	// Line 136, Address: 0x30e3b8, Func Offset: 0x48
	// Line 137, Address: 0x30e3c0, Func Offset: 0x50
	// Line 138, Address: 0x30e3d0, Func Offset: 0x60
	// Line 139, Address: 0x30e3e0, Func Offset: 0x70
	// Line 142, Address: 0x30e3f0, Func Offset: 0x80
	// Line 145, Address: 0x30e40c, Func Offset: 0x9c
	// Line 148, Address: 0x30e424, Func Offset: 0xb4
	// Line 151, Address: 0x30e440, Func Offset: 0xd0
	// Line 152, Address: 0x30e450, Func Offset: 0xe0
	// Line 153, Address: 0x30e45c, Func Offset: 0xec
	// Line 140, Address: 0x30e464, Func Offset: 0xf4
	// Line 143, Address: 0x30e470, Func Offset: 0x100
	// Line 146, Address: 0x30e47c, Func Offset: 0x10c
	// Line 149, Address: 0x30e490, Func Offset: 0x120
	// Line 153, Address: 0x30e49c, Func Offset: 0x12c
	// Func End, Address: 0x30e4b0, Func Offset: 0x140
}

// zPendulum_Init__FP10_zPendulumP9xEntAsset
// Start address: 0x30e4b0
void zPendulum_Init(_zPendulum* pend, xEntAsset* asset)
{
	xEntMotionAsset* motionAsset;
	// Line 42, Address: 0x30e4b0, Func Offset: 0
	// Line 44, Address: 0x30e4b4, Func Offset: 0x4
	// Line 42, Address: 0x30e4b8, Func Offset: 0x8
	// Line 44, Address: 0x30e4bc, Func Offset: 0xc
	// Line 42, Address: 0x30e4c0, Func Offset: 0x10
	// Line 44, Address: 0x30e4cc, Func Offset: 0x1c
	// Line 51, Address: 0x30e4d4, Func Offset: 0x24
	// Line 52, Address: 0x30e4e0, Func Offset: 0x30
	// Line 69, Address: 0x30e4e8, Func Offset: 0x38
	// Line 70, Address: 0x30e4ec, Func Offset: 0x3c
	// Line 69, Address: 0x30e4f0, Func Offset: 0x40
	// Line 70, Address: 0x30e4f4, Func Offset: 0x44
	// Line 69, Address: 0x30e4f8, Func Offset: 0x48
	// Line 75, Address: 0x30e4fc, Func Offset: 0x4c
	// Line 71, Address: 0x30e500, Func Offset: 0x50
	// Line 70, Address: 0x30e504, Func Offset: 0x54
	// Line 71, Address: 0x30e508, Func Offset: 0x58
	// Line 72, Address: 0x30e50c, Func Offset: 0x5c
	// Line 71, Address: 0x30e514, Func Offset: 0x64
	// Line 75, Address: 0x30e518, Func Offset: 0x68
	// Line 77, Address: 0x30e520, Func Offset: 0x70
	// Line 80, Address: 0x30e530, Func Offset: 0x80
	// Func End, Address: 0x30e550, Func Offset: 0xa0
}

// zPendulum_Init__FPvPv
// Start address: 0x30e550
void zPendulum_Init(void* pend, void* asset)
{
	// Line 38, Address: 0x30e550, Func Offset: 0
	// Func End, Address: 0x30e558, Func Offset: 0x8
}

