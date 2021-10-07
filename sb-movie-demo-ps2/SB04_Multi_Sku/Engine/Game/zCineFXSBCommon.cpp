



void NCIN_NMEBreathSpew_AR(NCINEntry* fxrec, RwMatrixTag* animMat, uint32 animIndex);
void NCIN_NMEPuffPropWash_AR(NCINEntry* fxrec, RwMatrixTag* animMat, uint32 animIndex);
void NCIN_EjectShrapnel_AR(NCINEntry* fxrec, RpAtomic* model, RwMatrixTag* animMat, uint32 animIndex);
void NCIN_NMEEjectShrapnel_AR(NCINEntry* fxrec, RpAtomic* model, RwMatrixTag* animMat, uint32 animIndex);
void NCIN_NMERibHelp_AR(NCINEntry* fxrec, RwMatrixTag* animMat, uint32 animIndex);
void NCIN_NMERibHelp_Upd(NCINEntry* fxrec, int32 killit);
void zCinFX_BubBurst_AR(NCINEntry* fxrec, RwMatrixTag* animMat, uint32 animIndex);
void zCinFX_BubbleTrail_AR(NCINEntry* fxrec, RwMatrixTag* animMat, uint32 animIndex);
void zCinFX_BubbleTrail_Upd(NCINEntry* fxrec, int32 killit);
void zCinFX_BubTrailBoneSimp_AR(NCINEntry* fxrec, RwMatrixTag* animMat, uint32 animIndex);
void zCinFX_BubSlamBone_AR(NCINEntry* fxrec, RwMatrixTag* animMat, uint32 animIndex);

// NCIN_NMEBreathSpew_AR__FPC12zCutsceneMgrP9NCINEntryP8RpAtomicP11RwMatrixTagUiUi
// Start address: 0x4bff40
void NCIN_NMEBreathSpew_AR(NCINEntry* fxrec, RwMatrixTag* animMat, uint32 animIndex)
{
	int32 idx_bone;
	xMat4x3* mat_root;
	xMat4x3* mat_bone;
	xVec3 pos_emit;
	// Line 1028, Address: 0x4bff40, Func Offset: 0
	// Line 1030, Address: 0x4bff48, Func Offset: 0x8
	// Line 1033, Address: 0x4bff54, Func Offset: 0x14
	// Line 1035, Address: 0x4bff58, Func Offset: 0x18
	// Line 1037, Address: 0x4bff60, Func Offset: 0x20
	// Line 1038, Address: 0x4bff74, Func Offset: 0x34
	// Line 1046, Address: 0x4bff7c, Func Offset: 0x3c
	// Line 1048, Address: 0x4bff88, Func Offset: 0x48
	// Line 1039, Address: 0x4bffa0, Func Offset: 0x60
	// Line 1048, Address: 0x4bffa4, Func Offset: 0x64
	// Line 1039, Address: 0x4bffac, Func Offset: 0x6c
	// Line 1048, Address: 0x4bffb0, Func Offset: 0x70
	// Line 1039, Address: 0x4bffb8, Func Offset: 0x78
	// Line 1049, Address: 0x4bffc4, Func Offset: 0x84
	// Func End, Address: 0x4bffd0, Func Offset: 0x90
}

// NCIN_NMEPuffPropWash_AR__FPC12zCutsceneMgrP9NCINEntryP8RpAtomicP11RwMatrixTagUiUi
// Start address: 0x4bffd0
void NCIN_NMEPuffPropWash_AR(NCINEntry* fxrec, RwMatrixTag* animMat, uint32 animIndex)
{
	int32 idx_bone;
	xMat4x3* mat_root;
	xMat4x3* mat_bone;
	xVec3 vec_offset;
	xVec3 pos_emit;
	xVec3 vel_base;
	xVec3 vel_drift;
	// Line 901, Address: 0x4bffd0, Func Offset: 0
	// Line 903, Address: 0x4bffd8, Func Offset: 0x8
	// Line 906, Address: 0x4bffe4, Func Offset: 0x14
	// Line 917, Address: 0x4bffe8, Func Offset: 0x18
	// Line 908, Address: 0x4bfff4, Func Offset: 0x24
	// Line 917, Address: 0x4bfff8, Func Offset: 0x28
	// Line 908, Address: 0x4bfffc, Func Offset: 0x2c
	// Line 917, Address: 0x4c0000, Func Offset: 0x30
	// Line 918, Address: 0x4c0008, Func Offset: 0x38
	// Line 919, Address: 0x4c001c, Func Offset: 0x4c
	// Line 921, Address: 0x4c0024, Func Offset: 0x54
	// Line 929, Address: 0x4c0038, Func Offset: 0x68
	// Line 921, Address: 0x4c003c, Func Offset: 0x6c
	// Line 929, Address: 0x4c0040, Func Offset: 0x70
	// Line 921, Address: 0x4c0044, Func Offset: 0x74
	// Line 935, Address: 0x4c0048, Func Offset: 0x78
	// Line 921, Address: 0x4c004c, Func Offset: 0x7c
	// Line 922, Address: 0x4c0088, Func Offset: 0xb8
	// Line 923, Address: 0x4c008c, Func Offset: 0xbc
	// Line 921, Address: 0x4c0090, Func Offset: 0xc0
	// Line 922, Address: 0x4c00a0, Func Offset: 0xd0
	// Line 923, Address: 0x4c00f4, Func Offset: 0x124
	// Line 927, Address: 0x4c0148, Func Offset: 0x178
	// Line 929, Address: 0x4c014c, Func Offset: 0x17c
	// Line 927, Address: 0x4c0154, Func Offset: 0x184
	// Line 929, Address: 0x4c015c, Func Offset: 0x18c
	// Line 927, Address: 0x4c0160, Func Offset: 0x190
	// Line 929, Address: 0x4c0164, Func Offset: 0x194
	// Line 927, Address: 0x4c0188, Func Offset: 0x1b8
	// Line 929, Address: 0x4c0190, Func Offset: 0x1c0
	// Line 930, Address: 0x4c01a4, Func Offset: 0x1d4
	// Line 931, Address: 0x4c01fc, Func Offset: 0x22c
	// Line 935, Address: 0x4c0250, Func Offset: 0x280
	// Line 937, Address: 0x4c025c, Func Offset: 0x28c
	// Line 920, Address: 0x4c0274, Func Offset: 0x2a4
	// Line 937, Address: 0x4c0278, Func Offset: 0x2a8
	// Line 920, Address: 0x4c0280, Func Offset: 0x2b0
	// Line 937, Address: 0x4c0284, Func Offset: 0x2b4
	// Line 920, Address: 0x4c028c, Func Offset: 0x2bc
	// Line 938, Address: 0x4c0298, Func Offset: 0x2c8
	// Func End, Address: 0x4c02a4, Func Offset: 0x2d4
}

// NCIN_EjectShrapnel_AR__FPC12zCutsceneMgrP9NCINEntryP8RpAtomicP11RwMatrixTagUiUi
// Start address: 0x4c02b0
void NCIN_EjectShrapnel_AR(NCINEntry* fxrec, RpAtomic* model, RwMatrixTag* animMat, uint32 animIndex)
{
	uint32 aid_shrap;
	zShrapnelAsset* shrap;
	xMat4x3 mat_bone;
	xVec3 vel_rel;
	xVec3 vel_emit;
	// Line 849, Address: 0x4c02b0, Func Offset: 0
	// Line 851, Address: 0x4c02cc, Func Offset: 0x1c
	// Line 855, Address: 0x4c02d8, Func Offset: 0x28
	// Line 856, Address: 0x4c02e8, Func Offset: 0x38
	// Line 867, Address: 0x4c02f0, Func Offset: 0x40
	// Line 868, Address: 0x4c02f8, Func Offset: 0x48
	// Line 871, Address: 0x4c0308, Func Offset: 0x58
	// Line 875, Address: 0x4c0310, Func Offset: 0x60
	// Line 877, Address: 0x4c038c, Func Offset: 0xdc
	// Line 879, Address: 0x4c0390, Func Offset: 0xe0
	// Line 877, Address: 0x4c0394, Func Offset: 0xe4
	// Line 879, Address: 0x4c0398, Func Offset: 0xe8
	// Line 877, Address: 0x4c039c, Func Offset: 0xec
	// Line 879, Address: 0x4c03a0, Func Offset: 0xf0
	// Line 880, Address: 0x4c03a4, Func Offset: 0xf4
	// Line 883, Address: 0x4c03a8, Func Offset: 0xf8
	// Line 879, Address: 0x4c03ac, Func Offset: 0xfc
	// Line 883, Address: 0x4c03b0, Func Offset: 0x100
	// Line 878, Address: 0x4c03b4, Func Offset: 0x104
	// Line 879, Address: 0x4c03bc, Func Offset: 0x10c
	// Line 878, Address: 0x4c03c0, Func Offset: 0x110
	// Line 883, Address: 0x4c03c8, Func Offset: 0x118
	// Line 879, Address: 0x4c03cc, Func Offset: 0x11c
	// Line 880, Address: 0x4c03d0, Func Offset: 0x120
	// Line 879, Address: 0x4c03d4, Func Offset: 0x124
	// Line 878, Address: 0x4c03d8, Func Offset: 0x128
	// Line 879, Address: 0x4c03dc, Func Offset: 0x12c
	// Line 880, Address: 0x4c03e4, Func Offset: 0x134
	// Line 878, Address: 0x4c03e8, Func Offset: 0x138
	// Line 879, Address: 0x4c03ec, Func Offset: 0x13c
	// Line 880, Address: 0x4c03f0, Func Offset: 0x140
	// Line 879, Address: 0x4c03f8, Func Offset: 0x148
	// Line 880, Address: 0x4c0404, Func Offset: 0x154
	// Line 879, Address: 0x4c0408, Func Offset: 0x158
	// Line 880, Address: 0x4c040c, Func Offset: 0x15c
	// Line 879, Address: 0x4c0410, Func Offset: 0x160
	// Line 880, Address: 0x4c0414, Func Offset: 0x164
	// Line 879, Address: 0x4c041c, Func Offset: 0x16c
	// Line 877, Address: 0x4c0420, Func Offset: 0x170
	// Line 879, Address: 0x4c0428, Func Offset: 0x178
	// Line 880, Address: 0x4c042c, Func Offset: 0x17c
	// Line 879, Address: 0x4c0430, Func Offset: 0x180
	// Line 881, Address: 0x4c0434, Func Offset: 0x184
	// Line 879, Address: 0x4c0438, Func Offset: 0x188
	// Line 880, Address: 0x4c0440, Func Offset: 0x190
	// Line 881, Address: 0x4c044c, Func Offset: 0x19c
	// Line 880, Address: 0x4c0450, Func Offset: 0x1a0
	// Line 879, Address: 0x4c0458, Func Offset: 0x1a8
	// Line 880, Address: 0x4c045c, Func Offset: 0x1ac
	// Line 881, Address: 0x4c0464, Func Offset: 0x1b4
	// Line 877, Address: 0x4c0470, Func Offset: 0x1c0
	// Line 879, Address: 0x4c0474, Func Offset: 0x1c4
	// Line 881, Address: 0x4c047c, Func Offset: 0x1cc
	// Line 883, Address: 0x4c04b4, Func Offset: 0x204
	// Line 885, Address: 0x4c04bc, Func Offset: 0x20c
	// Line 875, Address: 0x4c04d8, Func Offset: 0x228
	// Line 885, Address: 0x4c04e4, Func Offset: 0x234
	// Line 886, Address: 0x4c04f4, Func Offset: 0x244
	// Func End, Address: 0x4c050c, Func Offset: 0x25c
}

// NCIN_NMEEjectShrapnel_AR__FPC12zCutsceneMgrP9NCINEntryP8RpAtomicP11RwMatrixTagUiUi
// Start address: 0x4c0510
void NCIN_NMEEjectShrapnel_AR(NCINEntry* fxrec, RpAtomic* model, RwMatrixTag* animMat, uint32 animIndex)
{
	zShrapnelAsset* shrap;
	xMat4x3 mat_bone;
	xVec3 vel_rel;
	xVec3 vel_emit;
	// Line 802, Address: 0x4c0510, Func Offset: 0
	// Line 804, Address: 0x4c052c, Func Offset: 0x1c
	// Line 808, Address: 0x4c0538, Func Offset: 0x28
	// Line 809, Address: 0x4c0548, Func Offset: 0x38
	// Line 816, Address: 0x4c0550, Func Offset: 0x40
	// Line 819, Address: 0x4c055c, Func Offset: 0x4c
	// Line 823, Address: 0x4c0564, Func Offset: 0x54
	// Line 825, Address: 0x4c05e0, Func Offset: 0xd0
	// Line 827, Address: 0x4c05e4, Func Offset: 0xd4
	// Line 825, Address: 0x4c05e8, Func Offset: 0xd8
	// Line 827, Address: 0x4c05ec, Func Offset: 0xdc
	// Line 825, Address: 0x4c05f0, Func Offset: 0xe0
	// Line 827, Address: 0x4c05f4, Func Offset: 0xe4
	// Line 828, Address: 0x4c05f8, Func Offset: 0xe8
	// Line 831, Address: 0x4c05fc, Func Offset: 0xec
	// Line 827, Address: 0x4c0600, Func Offset: 0xf0
	// Line 831, Address: 0x4c0604, Func Offset: 0xf4
	// Line 826, Address: 0x4c0608, Func Offset: 0xf8
	// Line 827, Address: 0x4c0610, Func Offset: 0x100
	// Line 826, Address: 0x4c0614, Func Offset: 0x104
	// Line 831, Address: 0x4c061c, Func Offset: 0x10c
	// Line 827, Address: 0x4c0620, Func Offset: 0x110
	// Line 828, Address: 0x4c0624, Func Offset: 0x114
	// Line 827, Address: 0x4c0628, Func Offset: 0x118
	// Line 826, Address: 0x4c062c, Func Offset: 0x11c
	// Line 827, Address: 0x4c0630, Func Offset: 0x120
	// Line 828, Address: 0x4c0638, Func Offset: 0x128
	// Line 826, Address: 0x4c063c, Func Offset: 0x12c
	// Line 827, Address: 0x4c0640, Func Offset: 0x130
	// Line 828, Address: 0x4c0644, Func Offset: 0x134
	// Line 827, Address: 0x4c064c, Func Offset: 0x13c
	// Line 828, Address: 0x4c0658, Func Offset: 0x148
	// Line 827, Address: 0x4c065c, Func Offset: 0x14c
	// Line 828, Address: 0x4c0660, Func Offset: 0x150
	// Line 827, Address: 0x4c0664, Func Offset: 0x154
	// Line 828, Address: 0x4c0668, Func Offset: 0x158
	// Line 827, Address: 0x4c0670, Func Offset: 0x160
	// Line 825, Address: 0x4c0674, Func Offset: 0x164
	// Line 827, Address: 0x4c067c, Func Offset: 0x16c
	// Line 828, Address: 0x4c0680, Func Offset: 0x170
	// Line 827, Address: 0x4c0684, Func Offset: 0x174
	// Line 829, Address: 0x4c0688, Func Offset: 0x178
	// Line 827, Address: 0x4c068c, Func Offset: 0x17c
	// Line 828, Address: 0x4c0694, Func Offset: 0x184
	// Line 829, Address: 0x4c06a0, Func Offset: 0x190
	// Line 828, Address: 0x4c06a4, Func Offset: 0x194
	// Line 827, Address: 0x4c06ac, Func Offset: 0x19c
	// Line 828, Address: 0x4c06b0, Func Offset: 0x1a0
	// Line 829, Address: 0x4c06b8, Func Offset: 0x1a8
	// Line 825, Address: 0x4c06c4, Func Offset: 0x1b4
	// Line 827, Address: 0x4c06c8, Func Offset: 0x1b8
	// Line 829, Address: 0x4c06d0, Func Offset: 0x1c0
	// Line 831, Address: 0x4c0708, Func Offset: 0x1f8
	// Line 833, Address: 0x4c0710, Func Offset: 0x200
	// Line 823, Address: 0x4c072c, Func Offset: 0x21c
	// Line 833, Address: 0x4c0738, Func Offset: 0x228
	// Line 834, Address: 0x4c0748, Func Offset: 0x238
	// Func End, Address: 0x4c0760, Func Offset: 0x250
}

// NCIN_NMERibHelp_AR__FPC12zCutsceneMgrP9NCINEntryP8RpAtomicP11RwMatrixTagUiUi
// Start address: 0x4c0760
void NCIN_NMERibHelp_AR(NCINEntry* fxrec, RwMatrixTag* animMat, uint32 animIndex)
{
	xMat4x3 mat_bone;
	xVec3 vec_offset;
	xVec3 vec_orient;
	xVec3 pos_emit;
	xVec3 dir_emit;
	RibData* ribhelp;
	// Line 542, Address: 0x4c0760, Func Offset: 0
	// Line 543, Address: 0x4c0768, Func Offset: 0x8
	// Line 548, Address: 0x4c0774, Func Offset: 0x14
	// Line 551, Address: 0x4c07f0, Func Offset: 0x90
	// Line 556, Address: 0x4c07f4, Func Offset: 0x94
	// Line 551, Address: 0x4c07f8, Func Offset: 0x98
	// Line 555, Address: 0x4c07fc, Func Offset: 0x9c
	// Line 551, Address: 0x4c0800, Func Offset: 0xa0
	// Line 555, Address: 0x4c0804, Func Offset: 0xa4
	// Line 552, Address: 0x4c0808, Func Offset: 0xa8
	// Line 555, Address: 0x4c0814, Func Offset: 0xb4
	// Line 556, Address: 0x4c0818, Func Offset: 0xb8
	// Line 555, Address: 0x4c081c, Func Offset: 0xbc
	// Line 557, Address: 0x4c0820, Func Offset: 0xc0
	// Line 555, Address: 0x4c0828, Func Offset: 0xc8
	// Line 556, Address: 0x4c0838, Func Offset: 0xd8
	// Line 555, Address: 0x4c0840, Func Offset: 0xe0
	// Line 557, Address: 0x4c0844, Func Offset: 0xe4
	// Line 556, Address: 0x4c0850, Func Offset: 0xf0
	// Line 557, Address: 0x4c0854, Func Offset: 0xf4
	// Line 555, Address: 0x4c0860, Func Offset: 0x100
	// Line 556, Address: 0x4c0868, Func Offset: 0x108
	// Line 563, Address: 0x4c086c, Func Offset: 0x10c
	// Line 556, Address: 0x4c0874, Func Offset: 0x114
	// Line 557, Address: 0x4c0884, Func Offset: 0x124
	// Line 556, Address: 0x4c088c, Func Offset: 0x12c
	// Line 557, Address: 0x4c0890, Func Offset: 0x130
	// Line 556, Address: 0x4c0894, Func Offset: 0x134
	// Line 557, Address: 0x4c0898, Func Offset: 0x138
	// Line 556, Address: 0x4c08a0, Func Offset: 0x140
	// Line 558, Address: 0x4c08a4, Func Offset: 0x144
	// Line 563, Address: 0x4c08ac, Func Offset: 0x14c
	// Line 556, Address: 0x4c08b0, Func Offset: 0x150
	// Line 557, Address: 0x4c08b8, Func Offset: 0x158
	// Line 556, Address: 0x4c08c0, Func Offset: 0x160
	// Line 557, Address: 0x4c08c4, Func Offset: 0x164
	// Line 551, Address: 0x4c08d0, Func Offset: 0x170
	// Line 556, Address: 0x4c08d4, Func Offset: 0x174
	// Line 558, Address: 0x4c08d8, Func Offset: 0x178
	// Line 556, Address: 0x4c08e8, Func Offset: 0x188
	// Line 557, Address: 0x4c08f0, Func Offset: 0x190
	// Line 558, Address: 0x4c08f8, Func Offset: 0x198
	// Line 556, Address: 0x4c0900, Func Offset: 0x1a0
	// Line 557, Address: 0x4c0904, Func Offset: 0x1a4
	// Line 556, Address: 0x4c090c, Func Offset: 0x1ac
	// Line 558, Address: 0x4c0910, Func Offset: 0x1b0
	// Line 557, Address: 0x4c0914, Func Offset: 0x1b4
	// Line 558, Address: 0x4c0918, Func Offset: 0x1b8
	// Line 561, Address: 0x4c092c, Func Offset: 0x1cc
	// Line 552, Address: 0x4c0930, Func Offset: 0x1d0
	// Line 558, Address: 0x4c0934, Func Offset: 0x1d4
	// Line 552, Address: 0x4c093c, Func Offset: 0x1dc
	// Line 561, Address: 0x4c0940, Func Offset: 0x1e0
	// Line 551, Address: 0x4c0944, Func Offset: 0x1e4
	// Line 561, Address: 0x4c0948, Func Offset: 0x1e8
	// Line 558, Address: 0x4c0950, Func Offset: 0x1f0
	// Line 563, Address: 0x4c095c, Func Offset: 0x1fc
	// Line 561, Address: 0x4c0960, Func Offset: 0x200
	// Line 551, Address: 0x4c0964, Func Offset: 0x204
	// Line 552, Address: 0x4c0968, Func Offset: 0x208
	// Line 557, Address: 0x4c096c, Func Offset: 0x20c
	// Line 558, Address: 0x4c0970, Func Offset: 0x210
	// Line 563, Address: 0x4c098c, Func Offset: 0x22c
	// Line 567, Address: 0x4c0998, Func Offset: 0x238
	// Line 568, Address: 0x4c09a0, Func Offset: 0x240
	// Line 569, Address: 0x4c09a4, Func Offset: 0x244
	// Line 567, Address: 0x4c09a8, Func Offset: 0x248
	// Line 566, Address: 0x4c09ac, Func Offset: 0x24c
	// Line 567, Address: 0x4c09b8, Func Offset: 0x258
	// Line 566, Address: 0x4c09c0, Func Offset: 0x260
	// Line 567, Address: 0x4c09c4, Func Offset: 0x264
	// Line 566, Address: 0x4c09dc, Func Offset: 0x27c
	// Line 567, Address: 0x4c09e0, Func Offset: 0x280
	// Line 566, Address: 0x4c09e4, Func Offset: 0x284
	// Line 568, Address: 0x4c09ec, Func Offset: 0x28c
	// Line 569, Address: 0x4c09f4, Func Offset: 0x294
	// Line 566, Address: 0x4c09f8, Func Offset: 0x298
	// Line 567, Address: 0x4c09fc, Func Offset: 0x29c
	// Line 568, Address: 0x4c0a04, Func Offset: 0x2a4
	// Line 567, Address: 0x4c0a08, Func Offset: 0x2a8
	// Line 566, Address: 0x4c0a0c, Func Offset: 0x2ac
	// Line 568, Address: 0x4c0a10, Func Offset: 0x2b0
	// Line 569, Address: 0x4c0a30, Func Offset: 0x2d0
	// Line 568, Address: 0x4c0a34, Func Offset: 0x2d4
	// Line 569, Address: 0x4c0a38, Func Offset: 0x2d8
	// Line 567, Address: 0x4c0a40, Func Offset: 0x2e0
	// Line 568, Address: 0x4c0a44, Func Offset: 0x2e4
	// Line 567, Address: 0x4c0a48, Func Offset: 0x2e8
	// Line 569, Address: 0x4c0a50, Func Offset: 0x2f0
	// Line 568, Address: 0x4c0a68, Func Offset: 0x308
	// Line 569, Address: 0x4c0a74, Func Offset: 0x314
	// Line 568, Address: 0x4c0a80, Func Offset: 0x320
	// Line 569, Address: 0x4c0a84, Func Offset: 0x324
	// Line 570, Address: 0x4c0aa0, Func Offset: 0x340
	// Line 566, Address: 0x4c0ad4, Func Offset: 0x374
	// Line 570, Address: 0x4c0adc, Func Offset: 0x37c
	// Line 574, Address: 0x4c0ae0, Func Offset: 0x380
	// Line 582, Address: 0x4c0ae4, Func Offset: 0x384
	// Line 584, Address: 0x4c0b00, Func Offset: 0x3a0
	// Line 548, Address: 0x4c0b1c, Func Offset: 0x3bc
	// Line 584, Address: 0x4c0b28, Func Offset: 0x3c8
	// Line 564, Address: 0x4c0b4c, Func Offset: 0x3ec
	// Line 585, Address: 0x4c0b54, Func Offset: 0x3f4
	// Func End, Address: 0x4c0b60, Func Offset: 0x400
}

// NCIN_NMERibHelp_Upd__FPC12zCutsceneMgrP9NCINEntryi
// Start address: 0x4c0b60
void NCIN_NMERibHelp_Upd(NCINEntry* fxrec, int32 killit)
{
	RibData* ribhelp;
	NCINRibbon* ribrun;
	NCINRibbon* ribrun;
	// Line 483, Address: 0x4c0b60, Func Offset: 0
	// Line 484, Address: 0x4c0b7c, Func Offset: 0x1c
	// Line 486, Address: 0x4c0b80, Func Offset: 0x20
	// Line 497, Address: 0x4c0b88, Func Offset: 0x28
	// Line 519, Address: 0x4c0b90, Func Offset: 0x30
	// Line 521, Address: 0x4c0ba4, Func Offset: 0x44
	// Line 522, Address: 0x4c0bbc, Func Offset: 0x5c
	// Line 523, Address: 0x4c0bcc, Func Offset: 0x6c
	// Line 524, Address: 0x4c0bd4, Func Offset: 0x74
	// Line 531, Address: 0x4c0c54, Func Offset: 0xf4
	// Line 536, Address: 0x4c0c60, Func Offset: 0x100
	// Line 487, Address: 0x4c0c6c, Func Offset: 0x10c
	// Line 488, Address: 0x4c0c70, Func Offset: 0x110
	// Line 536, Address: 0x4c0c78, Func Offset: 0x118
	// Line 498, Address: 0x4c0c7c, Func Offset: 0x11c
	// Line 536, Address: 0x4c0c80, Func Offset: 0x120
	// Line 505, Address: 0x4c0c90, Func Offset: 0x130
	// Line 536, Address: 0x4c0c98, Func Offset: 0x138
	// Line 521, Address: 0x4c0ca8, Func Offset: 0x148
	// Line 536, Address: 0x4c0cb0, Func Offset: 0x150
	// Line 524, Address: 0x4c0cd4, Func Offset: 0x174
	// Line 536, Address: 0x4c0cdc, Func Offset: 0x17c
	// Line 524, Address: 0x4c0ce4, Func Offset: 0x184
	// Line 536, Address: 0x4c0cec, Func Offset: 0x18c
	// Line 532, Address: 0x4c0cf0, Func Offset: 0x190
	// Line 536, Address: 0x4c0cf4, Func Offset: 0x194
	// Line 537, Address: 0x4c0cf8, Func Offset: 0x198
	// Func End, Address: 0x4c0d18, Func Offset: 0x1b8
}

// zCinFX_BubBurst_AR__FPC12zCutsceneMgrP9NCINEntryP8RpAtomicP11RwMatrixTagUiUi
// Start address: 0x4c0d20
void zCinFX_BubBurst_AR(NCINEntry* fxrec, RwMatrixTag* animMat, uint32 animIndex)
{
	float32 dt;
	xVec3& offset;
	float32 rate;
	xVec3& root_vel;
	float32 rand_diameter;
	float32 rand_vel;
	float32 scale;
	NCINCustom& data;
	xVec3& oldloc;
	xVec3& oldvel;
	float32& emitted;
	int32 total;
	xMat4x3 mat;
	xVec3 vel;
	xVec3 loc;
	xVec3 rloc;
	xVec3 rvel;
	// Line 389, Address: 0x4c0d20, Func Offset: 0
	// Line 390, Address: 0x4c0d30, Func Offset: 0x10
	// Line 403, Address: 0x4c0d3c, Func Offset: 0x1c
	// Line 408, Address: 0x4c0d40, Func Offset: 0x20
	// Line 397, Address: 0x4c0d44, Func Offset: 0x24
	// Line 390, Address: 0x4c0d48, Func Offset: 0x28
	// Line 399, Address: 0x4c0d4c, Func Offset: 0x2c
	// Line 397, Address: 0x4c0d50, Func Offset: 0x30
	// Line 404, Address: 0x4c0d54, Func Offset: 0x34
	// Line 408, Address: 0x4c0d58, Func Offset: 0x38
	// Line 405, Address: 0x4c0d5c, Func Offset: 0x3c
	// Line 400, Address: 0x4c0d60, Func Offset: 0x40
	// Line 401, Address: 0x4c0d64, Func Offset: 0x44
	// Line 408, Address: 0x4c0d68, Func Offset: 0x48
	// Line 402, Address: 0x4c0d6c, Func Offset: 0x4c
	// Line 408, Address: 0x4c0d70, Func Offset: 0x50
	// Line 409, Address: 0x4c0d74, Func Offset: 0x54
	// Line 410, Address: 0x4c0d80, Func Offset: 0x60
	// Line 412, Address: 0x4c0d88, Func Offset: 0x68
	// Line 415, Address: 0x4c0d8c, Func Offset: 0x6c
	// Line 412, Address: 0x4c0d90, Func Offset: 0x70
	// Line 415, Address: 0x4c0d9c, Func Offset: 0x7c
	// Line 418, Address: 0x4c0e58, Func Offset: 0x138
	// Line 420, Address: 0x4c0ea8, Func Offset: 0x188
	// Line 422, Address: 0x4c0efc, Func Offset: 0x1dc
	// Line 424, Address: 0x4c0f1c, Func Offset: 0x1fc
	// Line 430, Address: 0x4c0f4c, Func Offset: 0x22c
	// Line 431, Address: 0x4c0f74, Func Offset: 0x254
	// Line 430, Address: 0x4c0f7c, Func Offset: 0x25c
	// Line 431, Address: 0x4c0f84, Func Offset: 0x264
	// Line 432, Address: 0x4c0fa8, Func Offset: 0x288
	// Line 431, Address: 0x4c0fb0, Func Offset: 0x290
	// Line 432, Address: 0x4c0fb4, Func Offset: 0x294
	// Line 431, Address: 0x4c0fb8, Func Offset: 0x298
	// Line 432, Address: 0x4c0fbc, Func Offset: 0x29c
	// Line 434, Address: 0x4c0fc8, Func Offset: 0x2a8
	// Line 435, Address: 0x4c0fd4, Func Offset: 0x2b4
	// Line 434, Address: 0x4c0fe0, Func Offset: 0x2c0
	// Line 435, Address: 0x4c0fec, Func Offset: 0x2cc
	// Line 438, Address: 0x4c0ff8, Func Offset: 0x2d8
	// Func End, Address: 0x4c100c, Func Offset: 0x2ec
}

// zCinFX_BubbleTrail_AR__FPC12zCutsceneMgrP9NCINEntryP8RpAtomicP11RwMatrixTagUiUi
// Start address: 0x4c1010
void zCinFX_BubbleTrail_AR(NCINEntry* fxrec, RwMatrixTag* animMat, uint32 animIndex)
{
	float32 dt;
	float32 rate;
	xVec3& offset;
	xVec3& root_vel;
	float32 rand_diameter;
	float32 rand_vel;
	float32 scale;
	NCINCustom& data;
	xVec3& oldloc;
	xVec3& oldvel;
	float32& emitted;
	int32 total;
	xMat4x3 mat;
	xVec3 vel;
	xVec3 loc;
	xVec3 rloc;
	xVec3 rvel;
	// Line 306, Address: 0x4c1010, Func Offset: 0
	// Line 307, Address: 0x4c1020, Func Offset: 0x10
	// Line 320, Address: 0x4c102c, Func Offset: 0x1c
	// Line 325, Address: 0x4c1030, Func Offset: 0x20
	// Line 315, Address: 0x4c1034, Func Offset: 0x24
	// Line 307, Address: 0x4c1038, Func Offset: 0x28
	// Line 316, Address: 0x4c103c, Func Offset: 0x2c
	// Line 311, Address: 0x4c1040, Func Offset: 0x30
	// Line 321, Address: 0x4c1044, Func Offset: 0x34
	// Line 325, Address: 0x4c1048, Func Offset: 0x38
	// Line 322, Address: 0x4c104c, Func Offset: 0x3c
	// Line 317, Address: 0x4c1050, Func Offset: 0x40
	// Line 318, Address: 0x4c1054, Func Offset: 0x44
	// Line 325, Address: 0x4c1058, Func Offset: 0x48
	// Line 319, Address: 0x4c105c, Func Offset: 0x4c
	// Line 325, Address: 0x4c1060, Func Offset: 0x50
	// Line 326, Address: 0x4c1064, Func Offset: 0x54
	// Line 327, Address: 0x4c1070, Func Offset: 0x60
	// Line 329, Address: 0x4c1078, Func Offset: 0x68
	// Line 332, Address: 0x4c107c, Func Offset: 0x6c
	// Line 329, Address: 0x4c1080, Func Offset: 0x70
	// Line 332, Address: 0x4c108c, Func Offset: 0x7c
	// Line 335, Address: 0x4c1148, Func Offset: 0x138
	// Line 337, Address: 0x4c1198, Func Offset: 0x188
	// Line 339, Address: 0x4c11ec, Func Offset: 0x1dc
	// Line 341, Address: 0x4c120c, Func Offset: 0x1fc
	// Line 347, Address: 0x4c123c, Func Offset: 0x22c
	// Line 348, Address: 0x4c1264, Func Offset: 0x254
	// Line 347, Address: 0x4c126c, Func Offset: 0x25c
	// Line 348, Address: 0x4c1274, Func Offset: 0x264
	// Line 349, Address: 0x4c129c, Func Offset: 0x28c
	// Line 348, Address: 0x4c12a0, Func Offset: 0x290
	// Line 349, Address: 0x4c12a4, Func Offset: 0x294
	// Line 348, Address: 0x4c12a8, Func Offset: 0x298
	// Line 349, Address: 0x4c12ac, Func Offset: 0x29c
	// Line 352, Address: 0x4c12c0, Func Offset: 0x2b0
	// Line 353, Address: 0x4c12d8, Func Offset: 0x2c8
	// Line 354, Address: 0x4c12f0, Func Offset: 0x2e0
	// Func End, Address: 0x4c1304, Func Offset: 0x2f4
}

// zCinFX_BubbleTrail_Upd__FPC12zCutsceneMgrP9NCINEntryi
// Start address: 0x4c1310
void zCinFX_BubbleTrail_Upd(NCINEntry* fxrec, int32 killit)
{
	NCINCustom& data;
	// Line 283, Address: 0x4c1310, Func Offset: 0
	// Line 285, Address: 0x4c1318, Func Offset: 0x8
	// Line 289, Address: 0x4c1328, Func Offset: 0x18
	// Line 290, Address: 0x4c1334, Func Offset: 0x24
	// Line 292, Address: 0x4c1338, Func Offset: 0x28
	// Line 284, Address: 0x4c1344, Func Offset: 0x34
	// Line 292, Address: 0x4c1350, Func Offset: 0x40
	// Func End, Address: 0x4c1358, Func Offset: 0x48
}

// zCinFX_BubTrailBoneSimp_AR__FPC12zCutsceneMgrP9NCINEntryP8RpAtomicP11RwMatrixTagUiUi
// Start address: 0x4c1360
void zCinFX_BubTrailBoneSimp_AR(NCINEntry* fxrec, RwMatrixTag* animMat, uint32 animIndex)
{
	xMat4x3* mat_root;
	int32 idx_bone;
	xVec3 pos_emit;
	xMat4x3* mat_bone;
	xVec3 vec_offset;
	uint32 num_emit;
	xVec3 pos_rand;
	// Line 220, Address: 0x4c1360, Func Offset: 0
	// Line 222, Address: 0x4c1368, Func Offset: 0x8
	// Line 229, Address: 0x4c1374, Func Offset: 0x14
	// Line 230, Address: 0x4c1378, Func Offset: 0x18
	// Line 231, Address: 0x4c1390, Func Offset: 0x30
	// Line 233, Address: 0x4c1398, Func Offset: 0x38
	// Line 232, Address: 0x4c139c, Func Offset: 0x3c
	// Line 233, Address: 0x4c13a0, Func Offset: 0x40
	// Line 232, Address: 0x4c13ac, Func Offset: 0x4c
	// Line 233, Address: 0x4c13b0, Func Offset: 0x50
	// Line 234, Address: 0x4c13bc, Func Offset: 0x5c
	// Line 235, Address: 0x4c1404, Func Offset: 0xa4
	// Line 236, Address: 0x4c1438, Func Offset: 0xd8
	// Line 237, Address: 0x4c1440, Func Offset: 0xe0
	// Line 240, Address: 0x4c1480, Func Offset: 0x120
	// Line 242, Address: 0x4c148c, Func Offset: 0x12c
	// Line 244, Address: 0x4c1490, Func Offset: 0x130
	// Line 242, Address: 0x4c1494, Func Offset: 0x134
	// Line 244, Address: 0x4c1498, Func Offset: 0x138
	// Line 242, Address: 0x4c149c, Func Offset: 0x13c
	// Line 244, Address: 0x4c14a4, Func Offset: 0x144
	// Line 242, Address: 0x4c14b4, Func Offset: 0x154
	// Line 244, Address: 0x4c14b8, Func Offset: 0x158
	// Line 242, Address: 0x4c14c0, Func Offset: 0x160
	// Line 244, Address: 0x4c14c4, Func Offset: 0x164
	// Line 245, Address: 0x4c14cc, Func Offset: 0x16c
	// Line 247, Address: 0x4c14e8, Func Offset: 0x188
	// Line 250, Address: 0x4c14f8, Func Offset: 0x198
	// Func End, Address: 0x4c1504, Func Offset: 0x1a4
}

// zCinFX_BubSlamBone_AR__FPC12zCutsceneMgrP9NCINEntryP8RpAtomicP11RwMatrixTagUiUi
// Start address: 0x4c1510
void zCinFX_BubSlamBone_AR(NCINEntry* fxrec, RwMatrixTag* animMat, uint32 animIndex)
{
	xMat4x3* mat_root;
	int32 idx_bone;
	xVec3 pos_emit;
	// Line 133, Address: 0x4c1510, Func Offset: 0
	// Line 138, Address: 0x4c1518, Func Offset: 0x8
	// Line 145, Address: 0x4c1524, Func Offset: 0x14
	// Line 154, Address: 0x4c1534, Func Offset: 0x24
	// Line 158, Address: 0x4c1538, Func Offset: 0x28
	// Line 162, Address: 0x4c1540, Func Offset: 0x30
	// Line 163, Address: 0x4c155c, Func Offset: 0x4c
	// Line 164, Address: 0x4c1564, Func Offset: 0x54
	// Line 174, Address: 0x4c1594, Func Offset: 0x84
	// Line 176, Address: 0x4c15f4, Func Offset: 0xe4
	// Line 159, Address: 0x4c1610, Func Offset: 0x100
	// Line 177, Address: 0x4c1618, Func Offset: 0x108
	// Func End, Address: 0x4c1624, Func Offset: 0x114
}

