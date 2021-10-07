



void zCineFX_ZapperIntro_PostInit();
void NCIN_ZapGunLaser_Twk();
void NCIN_ZapGunLaser_Rnd();
void NCIN_ZapGunLaser_AR(NCINEntry* fxrec, RwMatrixTag* animMat, uint32 animIndex);
void NCIN_EngineExhaust_Twk();
void NCIN_EngineExhaust_AR(NCINEntry* fxrec, RwMatrixTag* animMat, uint32 animIndex);
void NCIN_ZapGunSparks_Twk();
void NCIN_ZapGunSparks_AR(NCINEntry* fxrec, RwMatrixTag* animMat, uint32 animIndex);

// zCineFX_ZapperIntro_PostInit__Fv
// Start address: 0x4bbc50
void zCineFX_ZapperIntro_PostInit()
{
	PKRAssetTOCInfo tocdata;
	uint32 aid_cutscn;
	int32 rc;
	// Line 1558, Address: 0x4bbc50, Func Offset: 0
	// Line 1560, Address: 0x4bbc54, Func Offset: 0x4
	// Line 1558, Address: 0x4bbc58, Func Offset: 0x8
	// Line 1560, Address: 0x4bbc5c, Func Offset: 0xc
	// Line 1561, Address: 0x4bbc64, Func Offset: 0x14
	// Line 1562, Address: 0x4bbc70, Func Offset: 0x20
	// Line 1565, Address: 0x4bbc78, Func Offset: 0x28
	// Line 1563, Address: 0x4bbca4, Func Offset: 0x54
	// Line 1565, Address: 0x4bbca8, Func Offset: 0x58
	// Line 1563, Address: 0x4bbcac, Func Offset: 0x5c
	// Line 1565, Address: 0x4bbcb0, Func Offset: 0x60
	// Line 1563, Address: 0x4bbcc0, Func Offset: 0x70
	// Line 1565, Address: 0x4bbcc4, Func Offset: 0x74
	// Line 1563, Address: 0x4bbcc8, Func Offset: 0x78
	// Line 1565, Address: 0x4bbccc, Func Offset: 0x7c
	// Line 1563, Address: 0x4bbcd4, Func Offset: 0x84
	// Line 1565, Address: 0x4bbcd8, Func Offset: 0x88
	// Line 1563, Address: 0x4bbcdc, Func Offset: 0x8c
	// Line 1565, Address: 0x4bbce0, Func Offset: 0x90
	// Line 1563, Address: 0x4bbd80, Func Offset: 0x130
	// Line 1565, Address: 0x4bbd84, Func Offset: 0x134
	// Line 1563, Address: 0x4bbd88, Func Offset: 0x138
	// Line 1565, Address: 0x4bbd8c, Func Offset: 0x13c
	// Line 1563, Address: 0x4bbda0, Func Offset: 0x150
	// Line 1565, Address: 0x4bbda4, Func Offset: 0x154
	// Line 1563, Address: 0x4bbda8, Func Offset: 0x158
	// Line 1565, Address: 0x4bbdac, Func Offset: 0x15c
	// Line 1563, Address: 0x4bbdb4, Func Offset: 0x164
	// Line 1565, Address: 0x4bbdb8, Func Offset: 0x168
	// Line 1566, Address: 0x4bbe40, Func Offset: 0x1f0
	// Func End, Address: 0x4bbe48, Func Offset: 0x1f8
}

// NCIN_ZapGunLaser_Twk__11IntroZapperFPCcP9NCINEntry
// Start address: 0x4bbe50
void NCIN_ZapGunLaser_Twk()
{
	// Line 456, Address: 0x4bbe50, Func Offset: 0
	// Func End, Address: 0x4bbe58, Func Offset: 0x8
}

// NCIN_ZapGunLaser_Rnd__11IntroZapperFPC12zCutsceneMgrP9NCINEntry
// Start address: 0x4bbe60
void NCIN_ZapGunLaser_Rnd()
{
	// Line 428, Address: 0x4bbe60, Func Offset: 0
	// Func End, Address: 0x4bbe68, Func Offset: 0x8
}

// NCIN_ZapGunLaser_AR__11IntroZapperFPC12zCutsceneMgrP9NCINEntryP8RpAtomicP11RwMatrixTagUiUi
// Start address: 0x4bbe70
void NCIN_ZapGunLaser_AR(NCINEntry* fxrec, RwMatrixTag* animMat, uint32 animIndex)
{
	int32 boneIndex;
	xMat4x3* mat_bone;
	xMat4x3* mat_root;
	xVec3 pos_emit;
	int32 boneIndex;
	xMat4x3* mat_bone;
	xMat4x3* mat_root;
	xVec3 pos_emit;
	NMELaser* laser;
	// Line 330, Address: 0x4bbe70, Func Offset: 0
	// Line 333, Address: 0x4bbe78, Func Offset: 0x8
	// Line 338, Address: 0x4bbe84, Func Offset: 0x14
	// Line 342, Address: 0x4bbe88, Func Offset: 0x18
	// Line 339, Address: 0x4bbe98, Func Offset: 0x28
	// Line 342, Address: 0x4bbe9c, Func Offset: 0x2c
	// Line 339, Address: 0x4bbea0, Func Offset: 0x30
	// Line 342, Address: 0x4bbea4, Func Offset: 0x34
	// Line 343, Address: 0x4bbeac, Func Offset: 0x3c
	// Line 344, Address: 0x4bbef4, Func Offset: 0x84
	// Line 346, Address: 0x4bbf28, Func Offset: 0xb8
	// Line 347, Address: 0x4bbf30, Func Offset: 0xc0
	// Line 350, Address: 0x4bbf54, Func Offset: 0xe4
	// Line 351, Address: 0x4bbf6c, Func Offset: 0xfc
	// Line 360, Address: 0x4bbf78, Func Offset: 0x108
	// Line 365, Address: 0x4bbf84, Func Offset: 0x114
	// Line 369, Address: 0x4bbf88, Func Offset: 0x118
	// Line 366, Address: 0x4bbf98, Func Offset: 0x128
	// Line 369, Address: 0x4bbf9c, Func Offset: 0x12c
	// Line 366, Address: 0x4bbfa0, Func Offset: 0x130
	// Line 369, Address: 0x4bbfa4, Func Offset: 0x134
	// Line 370, Address: 0x4bbfac, Func Offset: 0x13c
	// Line 371, Address: 0x4bbff4, Func Offset: 0x184
	// Line 373, Address: 0x4bc028, Func Offset: 0x1b8
	// Line 374, Address: 0x4bc030, Func Offset: 0x1c0
	// Line 377, Address: 0x4bc054, Func Offset: 0x1e4
	// Line 378, Address: 0x4bc06c, Func Offset: 0x1fc
	// Line 385, Address: 0x4bc078, Func Offset: 0x208
	// Line 391, Address: 0x4bc08c, Func Offset: 0x21c
	// Line 397, Address: 0x4bc090, Func Offset: 0x220
	// Line 394, Address: 0x4bc098, Func Offset: 0x228
	// Line 397, Address: 0x4bc0a0, Func Offset: 0x230
	// Line 403, Address: 0x4bc0a8, Func Offset: 0x238
	// Func End, Address: 0x4bc0b4, Func Offset: 0x244
}

// NCIN_EngineExhaust_Twk__11IntroZapperFPCcP9NCINEntry
// Start address: 0x4bc0c0
void NCIN_EngineExhaust_Twk()
{
	// Line 247, Address: 0x4bc0c0, Func Offset: 0
	// Func End, Address: 0x4bc0c8, Func Offset: 0x8
}

// NCIN_EngineExhaust_AR__11IntroZapperFPC12zCutsceneMgrP9NCINEntryP8RpAtomicP11RwMatrixTagUiUi
// Start address: 0x4bc0d0
void NCIN_EngineExhaust_AR(NCINEntry* fxrec, RwMatrixTag* animMat, uint32 animIndex)
{
	int32 idx_bone;
	xMat4x3* mat_bone;
	xMat4x3* mat_root;
	xVec3 pos_emit;
	xVec3 dir_rel;
	xVec3 dir_emit;
	// Line 186, Address: 0x4bc0d0, Func Offset: 0
	// Line 188, Address: 0x4bc0d8, Func Offset: 0x8
	// Line 193, Address: 0x4bc0e4, Func Offset: 0x14
	// Line 199, Address: 0x4bc0e8, Func Offset: 0x18
	// Line 195, Address: 0x4bc0f8, Func Offset: 0x28
	// Line 199, Address: 0x4bc100, Func Offset: 0x30
	// Line 200, Address: 0x4bc10c, Func Offset: 0x3c
	// Line 201, Address: 0x4bc154, Func Offset: 0x84
	// Line 203, Address: 0x4bc188, Func Offset: 0xb8
	// Line 204, Address: 0x4bc190, Func Offset: 0xc0
	// Line 207, Address: 0x4bc1c0, Func Offset: 0xf0
	// Line 210, Address: 0x4bc1c4, Func Offset: 0xf4
	// Line 207, Address: 0x4bc1c8, Func Offset: 0xf8
	// Line 210, Address: 0x4bc1cc, Func Offset: 0xfc
	// Line 207, Address: 0x4bc1d0, Func Offset: 0x100
	// Line 210, Address: 0x4bc1d4, Func Offset: 0x104
	// Line 208, Address: 0x4bc1d8, Func Offset: 0x108
	// Line 207, Address: 0x4bc1e0, Func Offset: 0x110
	// Line 208, Address: 0x4bc1e8, Func Offset: 0x118
	// Line 207, Address: 0x4bc1f0, Func Offset: 0x120
	// Line 208, Address: 0x4bc1f4, Func Offset: 0x124
	// Line 210, Address: 0x4bc1fc, Func Offset: 0x12c
	// Line 211, Address: 0x4bc208, Func Offset: 0x138
	// Line 213, Address: 0x4bc224, Func Offset: 0x154
	// Line 214, Address: 0x4bc22c, Func Offset: 0x15c
	// Line 213, Address: 0x4bc230, Func Offset: 0x160
	// Line 214, Address: 0x4bc234, Func Offset: 0x164
	// Line 213, Address: 0x4bc238, Func Offset: 0x168
	// Line 214, Address: 0x4bc244, Func Offset: 0x174
	// Line 213, Address: 0x4bc248, Func Offset: 0x178
	// Line 214, Address: 0x4bc250, Func Offset: 0x180
	// Line 213, Address: 0x4bc254, Func Offset: 0x184
	// Line 214, Address: 0x4bc258, Func Offset: 0x188
	// Line 213, Address: 0x4bc260, Func Offset: 0x190
	// Line 214, Address: 0x4bc264, Func Offset: 0x194
	// Line 213, Address: 0x4bc268, Func Offset: 0x198
	// Line 214, Address: 0x4bc270, Func Offset: 0x1a0
	// Line 215, Address: 0x4bc2a0, Func Offset: 0x1d0
	// Line 216, Address: 0x4bc2f8, Func Offset: 0x228
	// Line 222, Address: 0x4bc34c, Func Offset: 0x27c
	// Line 225, Address: 0x4bc364, Func Offset: 0x294
	// Func End, Address: 0x4bc370, Func Offset: 0x2a0
}

// NCIN_ZapGunSparks_Twk__11IntroZapperFPCcP9NCINEntry
// Start address: 0x4bc370
void NCIN_ZapGunSparks_Twk()
{
	// Line 173, Address: 0x4bc370, Func Offset: 0
	// Func End, Address: 0x4bc378, Func Offset: 0x8
}

// NCIN_ZapGunSparks_AR__11IntroZapperFPC12zCutsceneMgrP9NCINEntryP8RpAtomicP11RwMatrixTagUiUi
// Start address: 0x4bc380
void NCIN_ZapGunSparks_AR(NCINEntry* fxrec, RwMatrixTag* animMat, uint32 animIndex)
{
	int32 idx_bone;
	xMat4x3* mat_bone;
	xMat4x3* mat_root;
	xVec3 pos_emit;
	xVec3 dir_rel;
	xVec3 dir_emit;
	// Line 112, Address: 0x4bc380, Func Offset: 0
	// Line 114, Address: 0x4bc388, Func Offset: 0x8
	// Line 119, Address: 0x4bc394, Func Offset: 0x14
	// Line 125, Address: 0x4bc398, Func Offset: 0x18
	// Line 121, Address: 0x4bc3a8, Func Offset: 0x28
	// Line 125, Address: 0x4bc3b0, Func Offset: 0x30
	// Line 126, Address: 0x4bc3bc, Func Offset: 0x3c
	// Line 127, Address: 0x4bc404, Func Offset: 0x84
	// Line 129, Address: 0x4bc438, Func Offset: 0xb8
	// Line 130, Address: 0x4bc440, Func Offset: 0xc0
	// Line 133, Address: 0x4bc470, Func Offset: 0xf0
	// Line 136, Address: 0x4bc474, Func Offset: 0xf4
	// Line 133, Address: 0x4bc478, Func Offset: 0xf8
	// Line 136, Address: 0x4bc47c, Func Offset: 0xfc
	// Line 133, Address: 0x4bc480, Func Offset: 0x100
	// Line 136, Address: 0x4bc484, Func Offset: 0x104
	// Line 134, Address: 0x4bc488, Func Offset: 0x108
	// Line 133, Address: 0x4bc490, Func Offset: 0x110
	// Line 134, Address: 0x4bc498, Func Offset: 0x118
	// Line 133, Address: 0x4bc4a0, Func Offset: 0x120
	// Line 134, Address: 0x4bc4a4, Func Offset: 0x124
	// Line 136, Address: 0x4bc4ac, Func Offset: 0x12c
	// Line 137, Address: 0x4bc4b8, Func Offset: 0x138
	// Line 139, Address: 0x4bc4d4, Func Offset: 0x154
	// Line 140, Address: 0x4bc4dc, Func Offset: 0x15c
	// Line 139, Address: 0x4bc4e0, Func Offset: 0x160
	// Line 140, Address: 0x4bc4e4, Func Offset: 0x164
	// Line 139, Address: 0x4bc4e8, Func Offset: 0x168
	// Line 140, Address: 0x4bc4f4, Func Offset: 0x174
	// Line 139, Address: 0x4bc4f8, Func Offset: 0x178
	// Line 140, Address: 0x4bc500, Func Offset: 0x180
	// Line 139, Address: 0x4bc504, Func Offset: 0x184
	// Line 140, Address: 0x4bc508, Func Offset: 0x188
	// Line 139, Address: 0x4bc510, Func Offset: 0x190
	// Line 140, Address: 0x4bc514, Func Offset: 0x194
	// Line 139, Address: 0x4bc518, Func Offset: 0x198
	// Line 140, Address: 0x4bc520, Func Offset: 0x1a0
	// Line 141, Address: 0x4bc550, Func Offset: 0x1d0
	// Line 142, Address: 0x4bc5a8, Func Offset: 0x228
	// Line 148, Address: 0x4bc5fc, Func Offset: 0x27c
	// Line 151, Address: 0x4bc618, Func Offset: 0x298
	// Func End, Address: 0x4bc624, Func Offset: 0x2a4
}

