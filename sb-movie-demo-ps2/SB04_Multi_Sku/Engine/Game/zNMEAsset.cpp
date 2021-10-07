



void zNMEAsset_RegisterEnemies(zScene* zscn, int32* base_idx);
void zNMEAsset_CreateEnemies();
int32 zNMEAsset_CountEnemies(int32* num_nme, int32* num_INnpc);
xEnt* MakeNMEGeneric(xDynAsset* dynass, uint32 siz_dynass);
int32 ValidTurret(xDynAsset* dynass, uint32 siz_dynass);
int32 ValidStandard(xDynAsset* dynass, uint32 siz_dynass);
int32 ValidNeptune(xDynAsset* dynass, uint32 siz_dynass);
int32 ValidMindy(xDynAsset* dynass, uint32 siz_dynass);
int32 ValidFrogFish(xDynAsset* dynass, uint32 siz_dynass);
int32 ValidDennis(xDynAsset* dynass, uint32 siz_dynass);
int32 ValidCritter(xDynAsset* dynass, uint32 siz_dynass);
int32 ValidCrate(xDynAsset* dynass, uint32 siz_dynass);
int32 ValidCastNCrew(xDynAsset* dynass, uint32 siz_dynass);
int32 ValidBucketOTron(xDynAsset* dynass, uint32 siz_dynass);
int32 ValidGeneric(xDynAsset* dynass, uint32 siz_dynass);

// zNMEAsset_RegisterEnemies__FP6zScenePi
// Start address: 0x2a3d90
void zNMEAsset_RegisterEnemies(zScene* zscn, int32* base_idx)
{
	st_XORDEREDARRAY* npclist;
	int32 num_npc;
	int32 i;
	base* npc;
	// Line 544, Address: 0x2a3d90, Func Offset: 0
	// Line 546, Address: 0x2a3db8, Func Offset: 0x28
	// Line 548, Address: 0x2a3dc0, Func Offset: 0x30
	// Line 546, Address: 0x2a3dc4, Func Offset: 0x34
	// Line 549, Address: 0x2a3dc8, Func Offset: 0x38
	// Line 565, Address: 0x2a3dd4, Func Offset: 0x44
	// Line 557, Address: 0x2a3e00, Func Offset: 0x70
	// Line 565, Address: 0x2a3e04, Func Offset: 0x74
	// Line 566, Address: 0x2a3e44, Func Offset: 0xb4
	// Func End, Address: 0x2a3e68, Func Offset: 0xd8
}

// zNMEAsset_CreateEnemies__Fv
// Start address: 0x2a3e70
void zNMEAsset_CreateEnemies()
{
	int32 num_alldyn;
	int32 i;
	uint32 siz_dynass;
	xDynAsset* dynass;
	DynNMEInfo* nmeinf_next;
	DynNMEInfo* nmeinf;
	// Line 493, Address: 0x2a3e70, Func Offset: 0
	// Line 495, Address: 0x2a3e74, Func Offset: 0x4
	// Line 493, Address: 0x2a3e78, Func Offset: 0x8
	// Line 495, Address: 0x2a3e7c, Func Offset: 0xc
	// Line 493, Address: 0x2a3e80, Func Offset: 0x10
	// Line 495, Address: 0x2a3e84, Func Offset: 0x14
	// Line 496, Address: 0x2a3e90, Func Offset: 0x20
	// Line 540, Address: 0x2a3e9c, Func Offset: 0x2c
	// Line 501, Address: 0x2a3ea4, Func Offset: 0x34
	// Line 540, Address: 0x2a3eb0, Func Offset: 0x40
	// Line 501, Address: 0x2a3eb8, Func Offset: 0x48
	// Line 540, Address: 0x2a3ebc, Func Offset: 0x4c
	// Line 510, Address: 0x2a3ed8, Func Offset: 0x68
	// Line 540, Address: 0x2a3edc, Func Offset: 0x6c
	// Line 535, Address: 0x2a3ef4, Func Offset: 0x84
	// Line 536, Address: 0x2a3efc, Func Offset: 0x8c
	// Line 540, Address: 0x2a3f00, Func Offset: 0x90
	// Line 538, Address: 0x2a3f0c, Func Offset: 0x9c
	// Line 540, Address: 0x2a3f10, Func Offset: 0xa0
	// Line 541, Address: 0x2a3f28, Func Offset: 0xb8
	// Func End, Address: 0x2a3f38, Func Offset: 0xc8
}

// zNMEAsset_CountEnemies__FPiPi
// Start address: 0x2a3f40
int32 zNMEAsset_CountEnemies(int32* num_nme, int32* num_INnpc)
{
	int32 count_NME;
	int32 num_alldyn;
	int32 i;
	uint32 siz_dynass;
	xDynAsset* dynass;
	int32 isOurs;
	DynNMEInfo* nmeinf_next;
	DynNMEInfo* nmeinf;
	int32 needToHash;
	// Line 446, Address: 0x2a3f40, Func Offset: 0
	// Line 450, Address: 0x2a3f44, Func Offset: 0x4
	// Line 446, Address: 0x2a3f48, Func Offset: 0x8
	// Line 450, Address: 0x2a3f64, Func Offset: 0x24
	// Line 453, Address: 0x2a3f6c, Func Offset: 0x2c
	// Line 452, Address: 0x2a3f70, Func Offset: 0x30
	// Line 453, Address: 0x2a3f74, Func Offset: 0x34
	// Line 454, Address: 0x2a3f80, Func Offset: 0x40
	// Line 482, Address: 0x2a3f8c, Func Offset: 0x4c
	// Line 483, Address: 0x2a3f94, Func Offset: 0x54
	// Line 484, Address: 0x2a3f98, Func Offset: 0x58
	// Line 485, Address: 0x2a3fa0, Func Offset: 0x60
	// Line 489, Address: 0x2a3fa4, Func Offset: 0x64
	// Line 450, Address: 0x2a3fc4, Func Offset: 0x84
	// Line 489, Address: 0x2a3fc8, Func Offset: 0x88
	// Line 459, Address: 0x2a3fec, Func Offset: 0xac
	// Line 489, Address: 0x2a3ff8, Func Offset: 0xb8
	// Line 463, Address: 0x2a400c, Func Offset: 0xcc
	// Line 489, Address: 0x2a4010, Func Offset: 0xd0
	// Line 465, Address: 0x2a401c, Func Offset: 0xdc
	// Line 489, Address: 0x2a4020, Func Offset: 0xe0
	// Line 471, Address: 0x2a402c, Func Offset: 0xec
	// Line 472, Address: 0x2a4034, Func Offset: 0xf4
	// Line 489, Address: 0x2a4038, Func Offset: 0xf8
	// Line 480, Address: 0x2a4054, Func Offset: 0x114
	// Line 489, Address: 0x2a4058, Func Offset: 0x118
	// Line 490, Address: 0x2a4080, Func Offset: 0x140
	// Func End, Address: 0x2a40a0, Func Offset: 0x160
}

// MakeNMEGeneric__FPC9xDynAssetUi
// Start address: 0x2a40a0
xEnt* MakeNMEGeneric(xDynAsset* dynass, uint32 siz_dynass)
{
	xEntAsset* entass;
	xEnt* ent;
	// Line 405, Address: 0x2a40a0, Func Offset: 0
	// Line 402, Address: 0x2a40a4, Func Offset: 0x4
	// Line 405, Address: 0x2a40a8, Func Offset: 0x8
	// Line 403, Address: 0x2a40b0, Func Offset: 0x10
	// Line 399, Address: 0x2a40b4, Func Offset: 0x14
	// Line 404, Address: 0x2a40b8, Func Offset: 0x18
	// Line 409, Address: 0x2a40bc, Func Offset: 0x1c
	// Line 402, Address: 0x2a40c0, Func Offset: 0x20
	// Line 403, Address: 0x2a40c4, Func Offset: 0x24
	// Line 404, Address: 0x2a40c8, Func Offset: 0x28
	// Line 409, Address: 0x2a40cc, Func Offset: 0x2c
	// Func End, Address: 0x2a40d4, Func Offset: 0x34
}

// ValidTurret__FPC9xDynAssetUi
// Start address: 0x2a40e0
int32 ValidTurret(xDynAsset* dynass, uint32 siz_dynass)
{
	uint32 size_expected;
	// Line 385, Address: 0x2a40e0, Func Offset: 0
	// Line 384, Address: 0x2a40e4, Func Offset: 0x4
	// Line 385, Address: 0x2a40e8, Func Offset: 0x8
	// Line 390, Address: 0x2a40f0, Func Offset: 0x10
	// Line 391, Address: 0x2a40f4, Func Offset: 0x14
	// Func End, Address: 0x2a40fc, Func Offset: 0x1c
}

// ValidStandard__FPC9xDynAssetUi
// Start address: 0x2a4100
int32 ValidStandard(xDynAsset* dynass, uint32 siz_dynass)
{
	uint32 size_expected;
	// Line 368, Address: 0x2a4100, Func Offset: 0
	// Line 367, Address: 0x2a4104, Func Offset: 0x4
	// Line 368, Address: 0x2a4108, Func Offset: 0x8
	// Line 373, Address: 0x2a4110, Func Offset: 0x10
	// Line 374, Address: 0x2a4114, Func Offset: 0x14
	// Func End, Address: 0x2a411c, Func Offset: 0x1c
}

// ValidNeptune__FPC9xDynAssetUi
// Start address: 0x2a4120
int32 ValidNeptune(xDynAsset* dynass, uint32 siz_dynass)
{
	uint32 size_expected;
	// Line 351, Address: 0x2a4120, Func Offset: 0
	// Line 350, Address: 0x2a4124, Func Offset: 0x4
	// Line 351, Address: 0x2a4128, Func Offset: 0x8
	// Line 356, Address: 0x2a4130, Func Offset: 0x10
	// Line 357, Address: 0x2a4134, Func Offset: 0x14
	// Func End, Address: 0x2a413c, Func Offset: 0x1c
}

// ValidMindy__FPC9xDynAssetUi
// Start address: 0x2a4140
int32 ValidMindy(xDynAsset* dynass, uint32 siz_dynass)
{
	uint32 size_expected;
	// Line 334, Address: 0x2a4140, Func Offset: 0
	// Line 333, Address: 0x2a4144, Func Offset: 0x4
	// Line 334, Address: 0x2a4148, Func Offset: 0x8
	// Line 339, Address: 0x2a4150, Func Offset: 0x10
	// Line 340, Address: 0x2a4154, Func Offset: 0x14
	// Func End, Address: 0x2a415c, Func Offset: 0x1c
}

// ValidFrogFish__FPC9xDynAssetUi
// Start address: 0x2a4160
int32 ValidFrogFish(xDynAsset* dynass, uint32 siz_dynass)
{
	uint32 size_expected;
	// Line 317, Address: 0x2a4160, Func Offset: 0
	// Line 316, Address: 0x2a4164, Func Offset: 0x4
	// Line 317, Address: 0x2a4168, Func Offset: 0x8
	// Line 322, Address: 0x2a4170, Func Offset: 0x10
	// Line 323, Address: 0x2a4174, Func Offset: 0x14
	// Func End, Address: 0x2a417c, Func Offset: 0x1c
}

// ValidDennis__FPC9xDynAssetUi
// Start address: 0x2a4180
int32 ValidDennis(xDynAsset* dynass, uint32 siz_dynass)
{
	uint32 size_expected;
	// Line 300, Address: 0x2a4180, Func Offset: 0
	// Line 299, Address: 0x2a4184, Func Offset: 0x4
	// Line 300, Address: 0x2a4188, Func Offset: 0x8
	// Line 305, Address: 0x2a4190, Func Offset: 0x10
	// Line 306, Address: 0x2a4194, Func Offset: 0x14
	// Func End, Address: 0x2a419c, Func Offset: 0x1c
}

// ValidCritter__FPC9xDynAssetUi
// Start address: 0x2a41a0
int32 ValidCritter(xDynAsset* dynass, uint32 siz_dynass)
{
	uint32 size_expected;
	// Line 283, Address: 0x2a41a0, Func Offset: 0
	// Line 282, Address: 0x2a41a4, Func Offset: 0x4
	// Line 283, Address: 0x2a41a8, Func Offset: 0x8
	// Line 288, Address: 0x2a41b0, Func Offset: 0x10
	// Line 289, Address: 0x2a41b4, Func Offset: 0x14
	// Func End, Address: 0x2a41bc, Func Offset: 0x1c
}

// ValidCrate__FPC9xDynAssetUi
// Start address: 0x2a41c0
int32 ValidCrate(xDynAsset* dynass, uint32 siz_dynass)
{
	uint32 size_expected;
	// Line 266, Address: 0x2a41c0, Func Offset: 0
	// Line 265, Address: 0x2a41c4, Func Offset: 0x4
	// Line 266, Address: 0x2a41c8, Func Offset: 0x8
	// Line 271, Address: 0x2a41d0, Func Offset: 0x10
	// Line 272, Address: 0x2a41d4, Func Offset: 0x14
	// Func End, Address: 0x2a41dc, Func Offset: 0x1c
}

// ValidCastNCrew__FPC9xDynAssetUi
// Start address: 0x2a41e0
int32 ValidCastNCrew(xDynAsset* dynass, uint32 siz_dynass)
{
	uint32 size_expected;
	// Line 249, Address: 0x2a41e0, Func Offset: 0
	// Line 248, Address: 0x2a41e4, Func Offset: 0x4
	// Line 249, Address: 0x2a41e8, Func Offset: 0x8
	// Line 254, Address: 0x2a41f0, Func Offset: 0x10
	// Line 255, Address: 0x2a41f4, Func Offset: 0x14
	// Func End, Address: 0x2a41fc, Func Offset: 0x1c
}

// ValidBucketOTron__FPC9xDynAssetUi
// Start address: 0x2a4200
int32 ValidBucketOTron(xDynAsset* dynass, uint32 siz_dynass)
{
	uint32 size_expected;
	// Line 232, Address: 0x2a4200, Func Offset: 0
	// Line 231, Address: 0x2a4204, Func Offset: 0x4
	// Line 232, Address: 0x2a4208, Func Offset: 0x8
	// Line 237, Address: 0x2a4210, Func Offset: 0x10
	// Line 238, Address: 0x2a4214, Func Offset: 0x14
	// Func End, Address: 0x2a421c, Func Offset: 0x1c
}

// ValidGeneric__FPC9xDynAssetUi
// Start address: 0x2a4220
int32 ValidGeneric(xDynAsset* dynass, uint32 siz_dynass)
{
	uint32 size_expected;
	// Line 215, Address: 0x2a4220, Func Offset: 0
	// Line 214, Address: 0x2a4224, Func Offset: 0x4
	// Line 215, Address: 0x2a4228, Func Offset: 0x8
	// Line 220, Address: 0x2a4230, Func Offset: 0x10
	// Line 221, Address: 0x2a4234, Func Offset: 0x14
	// Func End, Address: 0x2a423c, Func Offset: 0x1c
}

