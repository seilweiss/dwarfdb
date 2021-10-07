



uint8 zEntTriggerHitsSphere(zEntTrigger& trig, xSphere& o, xVec3& dir);
void zEntTriggerLoad(zEntTrigger* ent, xSerial* s);
void zEntTriggerSave(zEntTrigger* ent, xSerial* s);
void zEntTriggerEventCB(xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget);
void zEntTriggerUpdate(zEntTrigger* trig, xScene* sc, float32 dt);
void zEntTriggerInit(zEntTrigger* ent, xEntAsset* asset);
void zEntTriggerInit(void* ent, void* asset);

// zEntTriggerHitsSphere__FRC11zEntTriggerRC7xSphereRC5xVec3
// Start address: 0x311ef0
uint8 zEntTriggerHitsSphere(zEntTrigger& trig, xSphere& o, xVec3& dir)
{
	// Line 363, Address: 0x311ef0, Func Offset: 0
	// Line 364, Address: 0x311ef4, Func Offset: 0x4
	// Line 363, Address: 0x311ef8, Func Offset: 0x8
	// Line 364, Address: 0x311f04, Func Offset: 0x14
	// Line 367, Address: 0x311f10, Func Offset: 0x20
	// Line 369, Address: 0x311f18, Func Offset: 0x28
	// Line 371, Address: 0x311f60, Func Offset: 0x70
	// Line 365, Address: 0x311f68, Func Offset: 0x78
	// Line 373, Address: 0x311f70, Func Offset: 0x80
	// Line 376, Address: 0x311fa8, Func Offset: 0xb8
	// Line 378, Address: 0x312008, Func Offset: 0x118
	// Line 380, Address: 0x3120b0, Func Offset: 0x1c0
	// Line 383, Address: 0x3120d0, Func Offset: 0x1e0
	// Line 386, Address: 0x3120ec, Func Offset: 0x1fc
	// Line 387, Address: 0x3120f0, Func Offset: 0x200
	// Func End, Address: 0x312104, Func Offset: 0x214
}

// zEntTriggerLoad__FP11zEntTriggerP7xSerial
// Start address: 0x312110
void zEntTriggerLoad(zEntTrigger* ent, xSerial* s)
{
	// Line 321, Address: 0x312110, Func Offset: 0
	// Func End, Address: 0x312118, Func Offset: 0x8
}

// zEntTriggerSave__FP11zEntTriggerP7xSerial
// Start address: 0x312120
void zEntTriggerSave(zEntTrigger* ent, xSerial* s)
{
	// Line 302, Address: 0x312120, Func Offset: 0
	// Func End, Address: 0x312128, Func Offset: 0x8
}

// zEntTriggerEventCB__FP5xBaseP5xBaseUiPCfP5xBaseUi
// Start address: 0x312130
void zEntTriggerEventCB(xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget)
{
	zEntTrigger* trig;
	float32 mt;
	float32 mt;
	// Line 255, Address: 0x312130, Func Offset: 0
	// Line 261, Address: 0x312134, Func Offset: 0x4
	// Line 255, Address: 0x312138, Func Offset: 0x8
	// Line 261, Address: 0x312140, Func Offset: 0x10
	// Line 264, Address: 0x312164, Func Offset: 0x34
	// Line 265, Address: 0x3122d8, Func Offset: 0x1a8
	// Line 268, Address: 0x3122e0, Func Offset: 0x1b0
	// Line 269, Address: 0x3122e8, Func Offset: 0x1b8
	// Line 270, Address: 0x3122f0, Func Offset: 0x1c0
	// Line 269, Address: 0x3122f4, Func Offset: 0x1c4
	// Line 270, Address: 0x3122fc, Func Offset: 0x1cc
	// Line 271, Address: 0x312308, Func Offset: 0x1d8
	// Line 273, Address: 0x31230c, Func Offset: 0x1dc
	// Line 275, Address: 0x312318, Func Offset: 0x1e8
	// Line 278, Address: 0x312320, Func Offset: 0x1f0
	// Line 279, Address: 0x312328, Func Offset: 0x1f8
	// Line 280, Address: 0x312330, Func Offset: 0x200
	// Line 279, Address: 0x312334, Func Offset: 0x204
	// Line 280, Address: 0x31233c, Func Offset: 0x20c
	// Line 281, Address: 0x312348, Func Offset: 0x218
	// Line 283, Address: 0x31234c, Func Offset: 0x21c
	// Line 289, Address: 0x312354, Func Offset: 0x224
	// Func End, Address: 0x312364, Func Offset: 0x234
}

// zEntTriggerUpdate__FP11zEntTriggerP6xScenef
// Start address: 0x312370
void zEntTriggerUpdate(zEntTrigger* trig, xScene* sc, float32 dt)
{
	uint32 i;
	xLinkAsset* link;
	xTriggerAsset* tasset;
	xIsect isect;
	int32 collide;
	xEnt* chkEnt;
	xVec3* chkPos;
	xVec3 xformVec;
	xSphere sphere;
	xIsect isect;
	xCylinder cylinder;
	xIsect isect;
	xSphere sphere;
	xIsect isect;
	xLinkAsset* linkNC;
	// Line 99, Address: 0x312370, Func Offset: 0
	// Line 100, Address: 0x31239c, Func Offset: 0x2c
	// Line 104, Address: 0x3123ac, Func Offset: 0x3c
	// Line 112, Address: 0x3123b8, Func Offset: 0x48
	// Line 108, Address: 0x3123c0, Func Offset: 0x50
	// Line 107, Address: 0x3123c4, Func Offset: 0x54
	// Line 112, Address: 0x3123c8, Func Offset: 0x58
	// Line 113, Address: 0x3123e4, Func Offset: 0x74
	// Line 121, Address: 0x312408, Func Offset: 0x98
	// Line 123, Address: 0x312410, Func Offset: 0xa0
	// Line 125, Address: 0x312418, Func Offset: 0xa8
	// Line 131, Address: 0x312420, Func Offset: 0xb0
	// Line 134, Address: 0x312444, Func Offset: 0xd4
	// Line 140, Address: 0x312470, Func Offset: 0x100
	// Line 141, Address: 0x3124b0, Func Offset: 0x140
	// Line 142, Address: 0x3124c0, Func Offset: 0x150
	// Line 144, Address: 0x3124dc, Func Offset: 0x16c
	// Line 150, Address: 0x3124e4, Func Offset: 0x174
	// Line 151, Address: 0x3124e8, Func Offset: 0x178
	// Line 150, Address: 0x3124ec, Func Offset: 0x17c
	// Line 153, Address: 0x3124f0, Func Offset: 0x180
	// Line 150, Address: 0x3124f4, Func Offset: 0x184
	// Line 153, Address: 0x3124fc, Func Offset: 0x18c
	// Line 150, Address: 0x312500, Func Offset: 0x190
	// Line 151, Address: 0x31250c, Func Offset: 0x19c
	// Line 153, Address: 0x312510, Func Offset: 0x1a0
	// Line 154, Address: 0x312518, Func Offset: 0x1a8
	// Line 156, Address: 0x312538, Func Offset: 0x1c8
	// Line 162, Address: 0x312540, Func Offset: 0x1d0
	// Line 163, Address: 0x312544, Func Offset: 0x1d4
	// Line 162, Address: 0x312548, Func Offset: 0x1d8
	// Line 166, Address: 0x31254c, Func Offset: 0x1dc
	// Line 162, Address: 0x312550, Func Offset: 0x1e0
	// Line 166, Address: 0x312558, Func Offset: 0x1e8
	// Line 162, Address: 0x31255c, Func Offset: 0x1ec
	// Line 163, Address: 0x312568, Func Offset: 0x1f8
	// Line 164, Address: 0x312570, Func Offset: 0x200
	// Line 166, Address: 0x312578, Func Offset: 0x208
	// Line 167, Address: 0x312580, Func Offset: 0x210
	// Line 169, Address: 0x3125a0, Func Offset: 0x230
	// Line 175, Address: 0x3125a8, Func Offset: 0x238
	// Line 176, Address: 0x3125ac, Func Offset: 0x23c
	// Line 175, Address: 0x3125b0, Func Offset: 0x240
	// Line 179, Address: 0x3125b4, Func Offset: 0x244
	// Line 175, Address: 0x3125b8, Func Offset: 0x248
	// Line 179, Address: 0x3125c0, Func Offset: 0x250
	// Line 175, Address: 0x3125c4, Func Offset: 0x254
	// Line 176, Address: 0x3125d0, Func Offset: 0x260
	// Line 179, Address: 0x3125d4, Func Offset: 0x264
	// Line 180, Address: 0x3125dc, Func Offset: 0x26c
	// Line 207, Address: 0x312600, Func Offset: 0x290
	// Line 209, Address: 0x312608, Func Offset: 0x298
	// Line 218, Address: 0x312618, Func Offset: 0x2a8
	// Line 220, Address: 0x312628, Func Offset: 0x2b8
	// Line 222, Address: 0x31262c, Func Offset: 0x2bc
	// Line 225, Address: 0x312634, Func Offset: 0x2c4
	// Line 233, Address: 0x312644, Func Offset: 0x2d4
	// Line 235, Address: 0x312654, Func Offset: 0x2e4
	// Line 240, Address: 0x31265c, Func Offset: 0x2ec
	// Line 241, Address: 0x312670, Func Offset: 0x300
	// Line 211, Address: 0x312678, Func Offset: 0x308
	// Line 241, Address: 0x31267c, Func Offset: 0x30c
	// Line 212, Address: 0x31268c, Func Offset: 0x31c
	// Line 241, Address: 0x312690, Func Offset: 0x320
	// Line 212, Address: 0x31269c, Func Offset: 0x32c
	// Line 241, Address: 0x3126b4, Func Offset: 0x344
	// Line 227, Address: 0x3126c4, Func Offset: 0x354
	// Line 241, Address: 0x3126c8, Func Offset: 0x358
	// Line 228, Address: 0x3126d8, Func Offset: 0x368
	// Line 241, Address: 0x3126dc, Func Offset: 0x36c
	// Line 228, Address: 0x3126e8, Func Offset: 0x378
	// Line 241, Address: 0x312700, Func Offset: 0x390
	// Func End, Address: 0x312740, Func Offset: 0x3d0
}

// zEntTriggerInit__FP11zEntTriggerP9xEntAsset
// Start address: 0x312740
void zEntTriggerInit(zEntTrigger* ent, xEntAsset* asset)
{
	xTriggerAsset* tasset;
	xVec3 boxUpper;
	xVec3 boxLower;
	xVec3 center;
	// Line 38, Address: 0x312740, Func Offset: 0
	// Line 40, Address: 0x312744, Func Offset: 0x4
	// Line 38, Address: 0x312748, Func Offset: 0x8
	// Line 40, Address: 0x31274c, Func Offset: 0xc
	// Line 38, Address: 0x312750, Func Offset: 0x10
	// Line 40, Address: 0x31275c, Func Offset: 0x1c
	// Line 43, Address: 0x312764, Func Offset: 0x24
	// Line 44, Address: 0x312778, Func Offset: 0x38
	// Line 48, Address: 0x312788, Func Offset: 0x48
	// Line 51, Address: 0x312794, Func Offset: 0x54
	// Line 57, Address: 0x3127a0, Func Offset: 0x60
	// Line 59, Address: 0x3127ac, Func Offset: 0x6c
	// Line 58, Address: 0x3127b0, Func Offset: 0x70
	// Line 60, Address: 0x3127b4, Func Offset: 0x74
	// Line 58, Address: 0x3127b8, Func Offset: 0x78
	// Line 59, Address: 0x3127bc, Func Offset: 0x7c
	// Line 60, Address: 0x3127c4, Func Offset: 0x84
	// Line 57, Address: 0x3127c8, Func Offset: 0x88
	// Line 65, Address: 0x3127cc, Func Offset: 0x8c
	// Line 57, Address: 0x3127d0, Func Offset: 0x90
	// Line 65, Address: 0x3127d4, Func Offset: 0x94
	// Line 58, Address: 0x3127d8, Func Offset: 0x98
	// Line 57, Address: 0x3127dc, Func Offset: 0x9c
	// Line 58, Address: 0x3127e0, Func Offset: 0xa0
	// Line 59, Address: 0x3127e8, Func Offset: 0xa8
	// Line 58, Address: 0x3127f4, Func Offset: 0xb4
	// Line 60, Address: 0x3127f8, Func Offset: 0xb8
	// Line 59, Address: 0x3127fc, Func Offset: 0xbc
	// Line 64, Address: 0x312800, Func Offset: 0xc0
	// Line 59, Address: 0x312804, Func Offset: 0xc4
	// Line 60, Address: 0x312808, Func Offset: 0xc8
	// Line 64, Address: 0x312810, Func Offset: 0xd0
	// Line 59, Address: 0x312824, Func Offset: 0xe4
	// Line 60, Address: 0x31282c, Func Offset: 0xec
	// Line 59, Address: 0x312838, Func Offset: 0xf8
	// Line 60, Address: 0x312840, Func Offset: 0x100
	// Line 64, Address: 0x312844, Func Offset: 0x104
	// Line 59, Address: 0x31284c, Func Offset: 0x10c
	// Line 60, Address: 0x312850, Func Offset: 0x110
	// Line 64, Address: 0x312854, Func Offset: 0x114
	// Line 65, Address: 0x312858, Func Offset: 0x118
	// Line 71, Address: 0x3128a0, Func Offset: 0x160
	// Line 70, Address: 0x3128a4, Func Offset: 0x164
	// Line 71, Address: 0x3128a8, Func Offset: 0x168
	// Line 66, Address: 0x3128ac, Func Offset: 0x16c
	// Line 72, Address: 0x3128b0, Func Offset: 0x170
	// Line 66, Address: 0x3128b8, Func Offset: 0x178
	// Line 70, Address: 0x3128c0, Func Offset: 0x180
	// Line 71, Address: 0x3128c4, Func Offset: 0x184
	// Line 72, Address: 0x3128c8, Func Offset: 0x188
	// Line 66, Address: 0x3128cc, Func Offset: 0x18c
	// Line 71, Address: 0x3128d0, Func Offset: 0x190
	// Line 66, Address: 0x3128d4, Func Offset: 0x194
	// Line 70, Address: 0x3128e0, Func Offset: 0x1a0
	// Line 66, Address: 0x3128e8, Func Offset: 0x1a8
	// Line 72, Address: 0x3128ec, Func Offset: 0x1ac
	// Line 66, Address: 0x3128f0, Func Offset: 0x1b0
	// Line 70, Address: 0x3128fc, Func Offset: 0x1bc
	// Line 66, Address: 0x312904, Func Offset: 0x1c4
	// Line 70, Address: 0x31290c, Func Offset: 0x1cc
	// Line 71, Address: 0x312910, Func Offset: 0x1d0
	// Line 72, Address: 0x312914, Func Offset: 0x1d4
	// Line 73, Address: 0x312918, Func Offset: 0x1d8
	// Line 74, Address: 0x312924, Func Offset: 0x1e4
	// Line 75, Address: 0x312930, Func Offset: 0x1f0
	// Line 80, Address: 0x31293c, Func Offset: 0x1fc
	// Line 79, Address: 0x312940, Func Offset: 0x200
	// Line 80, Address: 0x312944, Func Offset: 0x204
	// Line 81, Address: 0x31294c, Func Offset: 0x20c
	// Line 83, Address: 0x312958, Func Offset: 0x218
	// Line 84, Address: 0x312964, Func Offset: 0x224
	// Line 86, Address: 0x312974, Func Offset: 0x234
	// Line 92, Address: 0x312978, Func Offset: 0x238
	// Line 93, Address: 0x312988, Func Offset: 0x248
	// Line 95, Address: 0x312990, Func Offset: 0x250
	// Func End, Address: 0x3129a4, Func Offset: 0x264
}

// zEntTriggerInit__FPvPv
// Start address: 0x3129b0
void zEntTriggerInit(void* ent, void* asset)
{
	// Line 34, Address: 0x3129b0, Func Offset: 0
	// Func End, Address: 0x3129b8, Func Offset: 0x8
}

