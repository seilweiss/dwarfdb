



void zCinFX_StreakBone_AR(NCINEntry* fxrec, RwMatrixTag* animMat, uint32 animIndex);
void zCinFX_StreakBone_Upd(NCINEntry* fxrec, int32 killit);
void zCinFX_EntityBonePar_AR(NCINEntry* fxrec, RwMatrixTag* animMat, uint32 animIndex);
void zCinFX_CycleOnce_Upd(NCINEntry* fxrec, int32 killit);
void zCinFX_GenNCINInput_Upd(NCINEntry* fxrec, int32 killit);
void zCinFX_Generic_Upd(NCINEntry* fxrec, int32 killit);

// zCinFX_StreakBone_AR__FPC12zCutsceneMgrP9NCINEntryP8RpAtomicP11RwMatrixTagUiUi
// Start address: 0x4bf6b0
void zCinFX_StreakBone_AR(NCINEntry* fxrec, RwMatrixTag* animMat, uint32 animIndex)
{
	xMat4x3* mat_bone;
	xMat4x3* mat_root;
	NCINStreakInput* streakIn;
	xVec3 pos_a;
	xVec3 pos_b;
	// Line 562, Address: 0x4bf6b0, Func Offset: 0
	// Line 563, Address: 0x4bf6b8, Func Offset: 0x8
	// Line 566, Address: 0x4bf6c4, Func Offset: 0x14
	// Line 569, Address: 0x4bf6c8, Func Offset: 0x18
	// Line 566, Address: 0x4bf6cc, Func Offset: 0x1c
	// Line 571, Address: 0x4bf6d0, Func Offset: 0x20
	// Line 575, Address: 0x4bf6d8, Func Offset: 0x28
	// Line 576, Address: 0x4bf6fc, Func Offset: 0x4c
	// Line 575, Address: 0x4bf700, Func Offset: 0x50
	// Line 576, Address: 0x4bf704, Func Offset: 0x54
	// Line 575, Address: 0x4bf708, Func Offset: 0x58
	// Line 576, Address: 0x4bf70c, Func Offset: 0x5c
	// Line 575, Address: 0x4bf710, Func Offset: 0x60
	// Line 576, Address: 0x4bf71c, Func Offset: 0x6c
	// Line 575, Address: 0x4bf720, Func Offset: 0x70
	// Line 576, Address: 0x4bf724, Func Offset: 0x74
	// Line 575, Address: 0x4bf728, Func Offset: 0x78
	// Line 576, Address: 0x4bf75c, Func Offset: 0xac
	// Line 575, Address: 0x4bf760, Func Offset: 0xb0
	// Line 576, Address: 0x4bf764, Func Offset: 0xb4
	// Line 575, Address: 0x4bf76c, Func Offset: 0xbc
	// Line 576, Address: 0x4bf770, Func Offset: 0xc0
	// Line 575, Address: 0x4bf790, Func Offset: 0xe0
	// Line 576, Address: 0x4bf794, Func Offset: 0xe4
	// Line 579, Address: 0x4bf814, Func Offset: 0x164
	// Line 576, Address: 0x4bf818, Func Offset: 0x168
	// Line 579, Address: 0x4bf81c, Func Offset: 0x16c
	// Line 582, Address: 0x4bf824, Func Offset: 0x174
	// Func End, Address: 0x4bf830, Func Offset: 0x180
}

// zCinFX_StreakBone_Upd__FPC12zCutsceneMgrP9NCINEntryi
// Start address: 0x4bf830
void zCinFX_StreakBone_Upd(NCINEntry* fxrec, int32 killit)
{
	NCINStreak* streak;
	// Line 499, Address: 0x4bf830, Func Offset: 0
	// Line 504, Address: 0x4bf844, Func Offset: 0x14
	// Line 515, Address: 0x4bf84c, Func Offset: 0x1c
	// Line 535, Address: 0x4bf854, Func Offset: 0x24
	// Line 549, Address: 0x4bf864, Func Offset: 0x34
	// Line 505, Address: 0x4bf870, Func Offset: 0x40
	// Line 506, Address: 0x4bf874, Func Offset: 0x44
	// Line 549, Address: 0x4bf87c, Func Offset: 0x4c
	// Line 516, Address: 0x4bf880, Func Offset: 0x50
	// Line 549, Address: 0x4bf884, Func Offset: 0x54
	// Line 521, Address: 0x4bf894, Func Offset: 0x64
	// Line 523, Address: 0x4bf898, Func Offset: 0x68
	// Line 549, Address: 0x4bf8a0, Func Offset: 0x70
	// Line 540, Address: 0x4bf8ac, Func Offset: 0x7c
	// Line 549, Address: 0x4bf8b0, Func Offset: 0x80
	// Line 540, Address: 0x4bf8b4, Func Offset: 0x84
	// Line 549, Address: 0x4bf8b8, Func Offset: 0x88
	// Line 550, Address: 0x4bf8c8, Func Offset: 0x98
	// Func End, Address: 0x4bf8dc, Func Offset: 0xac
}

// zCinFX_EntityBonePar_AR__FPC12zCutsceneMgrP9NCINEntryP8RpAtomicP11RwMatrixTagUiUi
// Start address: 0x4bf8e0
void zCinFX_EntityBonePar_AR(NCINEntry* fxrec, RwMatrixTag* animMat, uint32 animIndex)
{
	float32 dt;
	xParEmitter* pe;
	xParEmitterAsset* a;
	xParEmitterPropsAsset* prop;
	xParSys* ps;
	xParGroup* g;
	int32 rate_has_elapsed;
	float32 rate;
	int32 count;
	float32 life;
	float32 size_birth;
	float32 size_death;
	xMat4x3 bone_mat;
	xVec3 oldloc;
	xVec3 loc;
	xVec3 vel;
	int32 i;
	xPar* p;
	int32 c;
	float32 fc1;
	float32 fc2;
	// Line 351, Address: 0x4bf8e0, Func Offset: 0
	// Line 357, Address: 0x4bf928, Func Offset: 0x48
	// Line 362, Address: 0x4bf934, Func Offset: 0x54
	// Line 363, Address: 0x4bf938, Func Offset: 0x58
	// Line 364, Address: 0x4bf93c, Func Offset: 0x5c
	// Line 366, Address: 0x4bf944, Func Offset: 0x64
	// Line 368, Address: 0x4bf948, Func Offset: 0x68
	// Line 367, Address: 0x4bf94c, Func Offset: 0x6c
	// Line 369, Address: 0x4bf950, Func Offset: 0x70
	// Line 371, Address: 0x4bf958, Func Offset: 0x78
	// Line 372, Address: 0x4bf95c, Func Offset: 0x7c
	// Line 374, Address: 0x4bf964, Func Offset: 0x84
	// Line 378, Address: 0x4bf974, Func Offset: 0x94
	// Line 379, Address: 0x4bf984, Func Offset: 0xa4
	// Line 381, Address: 0x4bf998, Func Offset: 0xb8
	// Line 385, Address: 0x4bf9c0, Func Offset: 0xe0
	// Line 387, Address: 0x4bf9f0, Func Offset: 0x110
	// Line 391, Address: 0x4bfa04, Func Offset: 0x124
	// Line 393, Address: 0x4bfa08, Func Offset: 0x128
	// Line 394, Address: 0x4bfa14, Func Offset: 0x134
	// Line 396, Address: 0x4bfa20, Func Offset: 0x140
	// Line 397, Address: 0x4bfa34, Func Offset: 0x154
	// Line 399, Address: 0x4bfa3c, Func Offset: 0x15c
	// Line 402, Address: 0x4bfa58, Func Offset: 0x178
	// Line 404, Address: 0x4bfa60, Func Offset: 0x180
	// Line 406, Address: 0x4bfa78, Func Offset: 0x198
	// Line 407, Address: 0x4bfa88, Func Offset: 0x1a8
	// Line 415, Address: 0x4bfa8c, Func Offset: 0x1ac
	// Line 416, Address: 0x4bfb20, Func Offset: 0x240
	// Line 418, Address: 0x4bfb24, Func Offset: 0x244
	// Line 416, Address: 0x4bfb28, Func Offset: 0x248
	// Line 418, Address: 0x4bfb2c, Func Offset: 0x24c
	// Line 416, Address: 0x4bfb30, Func Offset: 0x250
	// Line 418, Address: 0x4bfb34, Func Offset: 0x254
	// Line 416, Address: 0x4bfb3c, Func Offset: 0x25c
	// Line 418, Address: 0x4bfb44, Func Offset: 0x264
	// Line 419, Address: 0x4bfb4c, Func Offset: 0x26c
	// Line 420, Address: 0x4bfb64, Func Offset: 0x284
	// Line 425, Address: 0x4bfb88, Func Offset: 0x2a8
	// Line 431, Address: 0x4bfb98, Func Offset: 0x2b8
	// Line 434, Address: 0x4bfba8, Func Offset: 0x2c8
	// Line 485, Address: 0x4bfbb4, Func Offset: 0x2d4
	// Line 415, Address: 0x4bfbcc, Func Offset: 0x2ec
	// Line 485, Address: 0x4bfbd0, Func Offset: 0x2f0
	// Line 415, Address: 0x4bfbd8, Func Offset: 0x2f8
	// Line 485, Address: 0x4bfbdc, Func Offset: 0x2fc
	// Line 415, Address: 0x4bfbe4, Func Offset: 0x304
	// Line 485, Address: 0x4bfbf0, Func Offset: 0x310
	// Line 429, Address: 0x4bfbf4, Func Offset: 0x314
	// Line 485, Address: 0x4bfbf8, Func Offset: 0x318
	// Line 429, Address: 0x4bfc08, Func Offset: 0x328
	// Line 485, Address: 0x4bfc0c, Func Offset: 0x32c
	// Line 429, Address: 0x4bfc10, Func Offset: 0x330
	// Line 485, Address: 0x4bfc14, Func Offset: 0x334
	// Line 427, Address: 0x4bfc1c, Func Offset: 0x33c
	// Line 485, Address: 0x4bfc28, Func Offset: 0x348
	// Line 429, Address: 0x4bfc48, Func Offset: 0x368
	// Line 485, Address: 0x4bfc58, Func Offset: 0x378
	// Line 429, Address: 0x4bfc60, Func Offset: 0x380
	// Line 430, Address: 0x4bfc68, Func Offset: 0x388
	// Line 485, Address: 0x4bfc70, Func Offset: 0x390
	// Line 436, Address: 0x4bfc78, Func Offset: 0x398
	// Line 485, Address: 0x4bfc7c, Func Offset: 0x39c
	// Line 440, Address: 0x4bfc8c, Func Offset: 0x3ac
	// Line 485, Address: 0x4bfc94, Func Offset: 0x3b4
	// Line 442, Address: 0x4bfca4, Func Offset: 0x3c4
	// Line 440, Address: 0x4bfcac, Func Offset: 0x3cc
	// Line 485, Address: 0x4bfcb0, Func Offset: 0x3d0
	// Line 445, Address: 0x4bfcc0, Func Offset: 0x3e0
	// Line 442, Address: 0x4bfcc8, Func Offset: 0x3e8
	// Line 485, Address: 0x4bfccc, Func Offset: 0x3ec
	// Line 452, Address: 0x4bfcd4, Func Offset: 0x3f4
	// Line 460, Address: 0x4bfcd8, Func Offset: 0x3f8
	// Line 452, Address: 0x4bfce4, Func Offset: 0x404
	// Line 485, Address: 0x4bfce8, Func Offset: 0x408
	// Line 460, Address: 0x4bfd14, Func Offset: 0x434
	// Line 485, Address: 0x4bfd18, Func Offset: 0x438
	// Line 462, Address: 0x4bfd20, Func Offset: 0x440
	// Line 485, Address: 0x4bfd28, Func Offset: 0x448
	// Line 465, Address: 0x4bfd38, Func Offset: 0x458
	// Line 462, Address: 0x4bfd40, Func Offset: 0x460
	// Line 485, Address: 0x4bfd44, Func Offset: 0x464
	// Line 470, Address: 0x4bfd4c, Func Offset: 0x46c
	// Line 471, Address: 0x4bfd8c, Func Offset: 0x4ac
	// Line 485, Address: 0x4bfd90, Func Offset: 0x4b0
	// Line 471, Address: 0x4bfda4, Func Offset: 0x4c4
	// Line 485, Address: 0x4bfdac, Func Offset: 0x4cc
	// Line 478, Address: 0x4bfdbc, Func Offset: 0x4dc
	// Line 485, Address: 0x4bfdc0, Func Offset: 0x4e0
	// Line 478, Address: 0x4bfdc4, Func Offset: 0x4e4
	// Line 485, Address: 0x4bfdc8, Func Offset: 0x4e8
	// Line 481, Address: 0x4bfde0, Func Offset: 0x500
	// Line 485, Address: 0x4bfde4, Func Offset: 0x504
	// Line 481, Address: 0x4bfde8, Func Offset: 0x508
	// Line 485, Address: 0x4bfdec, Func Offset: 0x50c
	// Line 481, Address: 0x4bfdf4, Func Offset: 0x514
	// Line 485, Address: 0x4bfdf8, Func Offset: 0x518
	// Line 482, Address: 0x4bfe14, Func Offset: 0x534
	// Line 485, Address: 0x4bfe18, Func Offset: 0x538
	// Line 482, Address: 0x4bfe20, Func Offset: 0x540
	// Line 485, Address: 0x4bfe24, Func Offset: 0x544
	// Line 482, Address: 0x4bfe2c, Func Offset: 0x54c
	// Line 485, Address: 0x4bfe30, Func Offset: 0x550
	// Func End, Address: 0x4bfe88, Func Offset: 0x5a8
}

// zCinFX_CycleOnce_Upd__FPC12zCutsceneMgrP9NCINEntryi
// Start address: 0x4bfe90
void zCinFX_CycleOnce_Upd(NCINEntry* fxrec, int32 killit)
{
	// Line 133, Address: 0x4bfe90, Func Offset: 0
	// Line 142, Address: 0x4bfe98, Func Offset: 0x8
	// Line 148, Address: 0x4bfea8, Func Offset: 0x18
	// Line 134, Address: 0x4bfeb4, Func Offset: 0x24
	// Line 135, Address: 0x4bfeb8, Func Offset: 0x28
	// Line 149, Address: 0x4bfec8, Func Offset: 0x38
	// Func End, Address: 0x4bfed0, Func Offset: 0x40
}

// zCinFX_GenNCINInput_Upd__FPC12zCutsceneMgrP9NCINEntryi
// Start address: 0x4bfed0
void zCinFX_GenNCINInput_Upd(NCINEntry* fxrec, int32 killit)
{
	// Line 115, Address: 0x4bfed0, Func Offset: 0
	// Line 121, Address: 0x4bfedc, Func Offset: 0xc
	// Line 123, Address: 0x4bfee4, Func Offset: 0x14
	// Line 116, Address: 0x4bfef0, Func Offset: 0x20
	// Line 117, Address: 0x4bfef4, Func Offset: 0x24
	// Line 123, Address: 0x4bfefc, Func Offset: 0x2c
	// Line 121, Address: 0x4bff00, Func Offset: 0x30
	// Line 124, Address: 0x4bff0c, Func Offset: 0x3c
	// Func End, Address: 0x4bff14, Func Offset: 0x44
}

// zCinFX_Generic_Upd__FPC12zCutsceneMgrP9NCINEntryi
// Start address: 0x4bff20
void zCinFX_Generic_Upd(NCINEntry* fxrec, int32 killit)
{
	// Line 93, Address: 0x4bff20, Func Offset: 0
	// Line 94, Address: 0x4bff28, Func Offset: 0x8
	// Line 105, Address: 0x4bff34, Func Offset: 0x14
	// Func End, Address: 0x4bff3c, Func Offset: 0x1c
}

