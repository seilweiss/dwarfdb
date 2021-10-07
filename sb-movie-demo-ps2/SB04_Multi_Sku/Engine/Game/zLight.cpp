



void zLightSetVolume(zVolume* vol);
void zLightRemoveLocalEnv();
void zLightAddLocal(xEnt* ent);
void zLightAddLocalEnv();
void zLightUpdate(xBase* to, float32 dt);
void zLightEventCB(xBase* to, uint32 toEvent);
void zLightLoad(_zLight* ent, xSerial* s);
void zLightSave(_zLight* ent, xSerial* s);
void zLightDestroyAll();
void zLightResolveLinks();
void zLightInit(xBase* b, zLightAsset* tasset);
void zLightInit(void* b, void* tasset);
void zLightResetAll(xEnv* env);

// zLightSetVolume__FP7zVolume
// Start address: 0x2ca600
void zLightSetVolume(zVolume* vol)
{
	uint32 lp_id;
	// Line 830, Address: 0x2ca600, Func Offset: 0
	// Line 831, Address: 0x2ca610, Func Offset: 0x10
	// Line 839, Address: 0x2ca618, Func Offset: 0x18
	// Line 840, Address: 0x2ca624, Func Offset: 0x24
	// Line 844, Address: 0x2ca630, Func Offset: 0x30
	// Line 847, Address: 0x2ca634, Func Offset: 0x34
	// Line 835, Address: 0x2ca63c, Func Offset: 0x3c
	// Line 847, Address: 0x2ca644, Func Offset: 0x44
	// Func End, Address: 0x2ca654, Func Offset: 0x54
}

// zLightRemoveLocalEnv__Fv
// Start address: 0x2ca660
void zLightRemoveLocalEnv()
{
	int32 i;
	RwLLLink* link;
	// Line 805, Address: 0x2ca660, Func Offset: 0
	// Line 807, Address: 0x2ca670, Func Offset: 0x10
	// Line 809, Address: 0x2ca674, Func Offset: 0x14
	// Line 807, Address: 0x2ca678, Func Offset: 0x18
	// Line 808, Address: 0x2ca67c, Func Offset: 0x1c
	// Line 809, Address: 0x2ca694, Func Offset: 0x34
	// Line 811, Address: 0x2ca6a8, Func Offset: 0x48
	// Func End, Address: 0x2ca6b0, Func Offset: 0x50
}

// zLightAddLocal__FP4xEnt
// Start address: 0x2ca6b0
void zLightAddLocal(xEnt* ent)
{
	xVec3 default_light_pos;
	// Line 556, Address: 0x2ca6b0, Func Offset: 0
	// Line 564, Address: 0x2ca6b4, Func Offset: 0x4
	// Line 556, Address: 0x2ca6b8, Func Offset: 0x8
	// Line 564, Address: 0x2ca6bc, Func Offset: 0xc
	// Line 556, Address: 0x2ca6c0, Func Offset: 0x10
	// Line 563, Address: 0x2ca6c4, Func Offset: 0x14
	// Line 572, Address: 0x2ca6cc, Func Offset: 0x1c
	// Line 563, Address: 0x2ca6d0, Func Offset: 0x20
	// Line 564, Address: 0x2ca6e0, Func Offset: 0x30
	// Line 563, Address: 0x2ca6e4, Func Offset: 0x34
	// Line 572, Address: 0x2ca6ec, Func Offset: 0x3c
	// Line 789, Address: 0x2ca6f8, Func Offset: 0x48
	// Line 800, Address: 0x2ca708, Func Offset: 0x58
	// Line 574, Address: 0x2ca714, Func Offset: 0x64
	// Line 800, Address: 0x2ca718, Func Offset: 0x68
	// Func End, Address: 0x2ca778, Func Offset: 0xc8
}

// zLightAddLocalEnv__Fv
// Start address: 0x2ca780
void zLightAddLocalEnv()
{
	int32 i;
	_zLight* zlight;
	iLight* light;
	// Line 518, Address: 0x2ca780, Func Offset: 0
	// Line 520, Address: 0x2ca798, Func Offset: 0x18
	// Line 522, Address: 0x2ca7b0, Func Offset: 0x30
	// Line 525, Address: 0x2ca7b4, Func Offset: 0x34
	// Line 528, Address: 0x2ca7c4, Func Offset: 0x44
	// Line 532, Address: 0x2ca7d8, Func Offset: 0x58
	// Line 535, Address: 0x2ca7e4, Func Offset: 0x64
	// Line 536, Address: 0x2ca7e8, Func Offset: 0x68
	// Line 535, Address: 0x2ca7ec, Func Offset: 0x6c
	// Line 536, Address: 0x2ca7f0, Func Offset: 0x70
	// Line 535, Address: 0x2ca7f4, Func Offset: 0x74
	// Line 536, Address: 0x2ca830, Func Offset: 0xb0
	// Line 537, Address: 0x2ca838, Func Offset: 0xb8
	// Line 536, Address: 0x2ca83c, Func Offset: 0xbc
	// Line 537, Address: 0x2ca840, Func Offset: 0xc0
	// Line 536, Address: 0x2ca844, Func Offset: 0xc4
	// Line 540, Address: 0x2ca848, Func Offset: 0xc8
	// Line 541, Address: 0x2ca860, Func Offset: 0xe0
	// Func End, Address: 0x2ca87c, Func Offset: 0xfc
}

// zLightUpdate__FP5xBaseP6xScenef
// Start address: 0x2ca880
void zLightUpdate(xBase* to, float32 dt)
{
	_zLight* t;
	xVec3 pos;
	// Line 479, Address: 0x2ca880, Func Offset: 0
	// Line 483, Address: 0x2ca890, Func Offset: 0x10
	// Line 488, Address: 0x2ca894, Func Offset: 0x14
	// Line 491, Address: 0x2ca8a8, Func Offset: 0x28
	// Line 495, Address: 0x2ca8b0, Func Offset: 0x30
	// Line 496, Address: 0x2ca8b4, Func Offset: 0x34
	// Line 495, Address: 0x2ca8bc, Func Offset: 0x3c
	// Line 497, Address: 0x2ca8c0, Func Offset: 0x40
	// Line 495, Address: 0x2ca8c4, Func Offset: 0x44
	// Line 496, Address: 0x2ca8d4, Func Offset: 0x54
	// Line 495, Address: 0x2ca8d8, Func Offset: 0x58
	// Line 497, Address: 0x2ca8e0, Func Offset: 0x60
	// Line 500, Address: 0x2ca8e8, Func Offset: 0x68
	// Line 503, Address: 0x2ca8ec, Func Offset: 0x6c
	// Line 500, Address: 0x2ca8f0, Func Offset: 0x70
	// Line 503, Address: 0x2ca8fc, Func Offset: 0x7c
	// Line 500, Address: 0x2ca900, Func Offset: 0x80
	// Line 503, Address: 0x2ca90c, Func Offset: 0x8c
	// Line 509, Address: 0x2ca934, Func Offset: 0xb4
	// Line 511, Address: 0x2ca93c, Func Offset: 0xbc
	// Line 513, Address: 0x2ca944, Func Offset: 0xc4
	// Func End, Address: 0x2ca958, Func Offset: 0xd8
}

// zLightEventCB__FP5xBaseP5xBaseUiPCfP5xBaseUi
// Start address: 0x2ca960
void zLightEventCB(xBase* to, uint32 toEvent)
{
	_zLight* t;
	// Line 442, Address: 0x2ca960, Func Offset: 0
	// Line 449, Address: 0x2ca964, Func Offset: 0x4
	// Line 442, Address: 0x2ca968, Func Offset: 0x8
	// Line 449, Address: 0x2ca970, Func Offset: 0x10
	// Line 452, Address: 0x2ca998, Func Offset: 0x38
	// Line 453, Address: 0x2ca9a0, Func Offset: 0x40
	// Line 456, Address: 0x2ca9a8, Func Offset: 0x48
	// Line 457, Address: 0x2ca9b4, Func Offset: 0x54
	// Line 460, Address: 0x2ca9bc, Func Offset: 0x5c
	// Line 464, Address: 0x2caa1c, Func Offset: 0xbc
	// Line 460, Address: 0x2caa28, Func Offset: 0xc8
	// Line 465, Address: 0x2caa34, Func Offset: 0xd4
	// Func End, Address: 0x2caa44, Func Offset: 0xe4
}

// zLightLoad__FP7_zLightP7xSerial
// Start address: 0x2caa50
void zLightLoad(_zLight* ent, xSerial* s)
{
	// Line 423, Address: 0x2caa50, Func Offset: 0
	// Func End, Address: 0x2caa58, Func Offset: 0x8
}

// zLightSave__FP7_zLightP7xSerial
// Start address: 0x2caa60
void zLightSave(_zLight* ent, xSerial* s)
{
	// Line 404, Address: 0x2caa60, Func Offset: 0
	// Func End, Address: 0x2caa68, Func Offset: 0x8
}

// zLightDestroyAll__Fv
// Start address: 0x2caa70
void zLightDestroyAll()
{
	int32 total;
	int32 i;
	// Line 355, Address: 0x2caa70, Func Offset: 0
	// Line 357, Address: 0x2caa88, Func Offset: 0x18
	// Line 363, Address: 0x2caa94, Func Offset: 0x24
	// Func End, Address: 0x2caaec, Func Offset: 0x7c
}

// zLightResolveLinks__Fv
// Start address: 0x2caaf0
void zLightResolveLinks()
{
	int32 i;
	_zLight* zl;
	// Line 339, Address: 0x2caaf0, Func Offset: 0
	// Line 340, Address: 0x2cab04, Func Offset: 0x14
	// Line 342, Address: 0x2cab1c, Func Offset: 0x2c
	// Line 346, Address: 0x2cab28, Func Offset: 0x38
	// Line 349, Address: 0x2cab30, Func Offset: 0x40
	// Line 350, Address: 0x2cab38, Func Offset: 0x48
	// Line 351, Address: 0x2cab50, Func Offset: 0x60
	// Line 347, Address: 0x2cab60, Func Offset: 0x70
	// Line 351, Address: 0x2cab68, Func Offset: 0x78
	// Func End, Address: 0x2cab80, Func Offset: 0x90
}

// zLightInit__FP5xBaseP11zLightAsset
// Start address: 0x2cab80
void zLightInit(xBase* b, zLightAsset* tasset)
{
	_zLight* t;
	uint32 itype;
	// Line 196, Address: 0x2cab80, Func Offset: 0
	// Line 200, Address: 0x2cab94, Func Offset: 0x14
	// Line 210, Address: 0x2cab9c, Func Offset: 0x1c
	// Line 211, Address: 0x2caba8, Func Offset: 0x28
	// Line 213, Address: 0x2cabac, Func Offset: 0x2c
	// Line 214, Address: 0x2cabb8, Func Offset: 0x38
	// Line 216, Address: 0x2cabc8, Func Offset: 0x48
	// Line 220, Address: 0x2cabcc, Func Offset: 0x4c
	// Line 228, Address: 0x2cac00, Func Offset: 0x80
	// Line 242, Address: 0x2cac04, Func Offset: 0x84
	// Line 334, Address: 0x2cac18, Func Offset: 0x98
	// Line 263, Address: 0x2cac2c, Func Offset: 0xac
	// Line 245, Address: 0x2cac34, Func Offset: 0xb4
	// Line 334, Address: 0x2cac38, Func Offset: 0xb8
	// Line 261, Address: 0x2cac94, Func Offset: 0x114
	// Line 334, Address: 0x2cac98, Func Offset: 0x118
	// Line 268, Address: 0x2cacac, Func Offset: 0x12c
	// Line 334, Address: 0x2cacb0, Func Offset: 0x130
	// Line 284, Address: 0x2cacd0, Func Offset: 0x150
	// Line 334, Address: 0x2cacd4, Func Offset: 0x154
	// Line 269, Address: 0x2cacec, Func Offset: 0x16c
	// Line 334, Address: 0x2cacf8, Func Offset: 0x178
	// Line 274, Address: 0x2cacfc, Func Offset: 0x17c
	// Line 334, Address: 0x2cad00, Func Offset: 0x180
	// Line 276, Address: 0x2cad48, Func Offset: 0x1c8
	// Line 334, Address: 0x2cad50, Func Offset: 0x1d0
	// Func End, Address: 0x2cad64, Func Offset: 0x1e4
}

// zLightInit__FPvPv
// Start address: 0x2cad70
void zLightInit(void* b, void* tasset)
{
	// Line 193, Address: 0x2cad70, Func Offset: 0
	// Func End, Address: 0x2cad78, Func Offset: 0x8
}

// zLightResetAll__FP4xEnv
// Start address: 0x2cad80
void zLightResetAll(xEnv* env)
{
	// Line 160, Address: 0x2cad80, Func Offset: 0
	// Line 164, Address: 0x2cad84, Func Offset: 0x4
	// Line 160, Address: 0x2cad88, Func Offset: 0x8
	// Line 164, Address: 0x2cad8c, Func Offset: 0xc
	// Line 160, Address: 0x2cad90, Func Offset: 0x10
	// Line 164, Address: 0x2cad98, Func Offset: 0x18
	// Line 165, Address: 0x2cada4, Func Offset: 0x24
	// Line 168, Address: 0x2cada8, Func Offset: 0x28
	// Line 169, Address: 0x2cadb0, Func Offset: 0x30
	// Line 179, Address: 0x2cadc8, Func Offset: 0x48
	// Line 171, Address: 0x2cadd4, Func Offset: 0x54
	// Line 179, Address: 0x2caddc, Func Offset: 0x5c
	// Line 171, Address: 0x2cade0, Func Offset: 0x60
	// Line 179, Address: 0x2cade4, Func Offset: 0x64
	// Func End, Address: 0x2cae00, Func Offset: 0x80
}

