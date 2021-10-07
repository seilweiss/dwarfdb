



void NCIN_BoneEmitExhaust_Twk();
void NCIN_BoneEmitExhaust_AR(NCINEntry* fxrec, RwMatrixTag* animMat, uint32 animIndex);
void NCIN_FlingSpit_Upd(NCINEntry* fxrec, int32 killit);

// NCIN_BoneEmitExhaust_Twk__12IntroFlingerFPCcP9NCINEntry
// Start address: 0x4bd820
void NCIN_BoneEmitExhaust_Twk()
{
	// Line 271, Address: 0x4bd820, Func Offset: 0
	// Func End, Address: 0x4bd828, Func Offset: 0x8
}

// NCIN_BoneEmitExhaust_AR__12IntroFlingerFPC12zCutsceneMgrP9NCINEntryP8RpAtomicP11RwMatrixTagUiUi
// Start address: 0x4bd830
void NCIN_BoneEmitExhaust_AR(NCINEntry* fxrec, RwMatrixTag* animMat, uint32 animIndex)
{
	int32 idx_bone;
	xMat4x3* mat_bone;
	xMat4x3* mat_root;
	xVec3 pos_emit;
	xVec3 dir_rel;
	xVec3 dir_emit;
	// Line 210, Address: 0x4bd830, Func Offset: 0
	// Line 212, Address: 0x4bd838, Func Offset: 0x8
	// Line 217, Address: 0x4bd844, Func Offset: 0x14
	// Line 223, Address: 0x4bd848, Func Offset: 0x18
	// Line 219, Address: 0x4bd858, Func Offset: 0x28
	// Line 223, Address: 0x4bd860, Func Offset: 0x30
	// Line 224, Address: 0x4bd86c, Func Offset: 0x3c
	// Line 225, Address: 0x4bd8b4, Func Offset: 0x84
	// Line 227, Address: 0x4bd8e8, Func Offset: 0xb8
	// Line 228, Address: 0x4bd8f0, Func Offset: 0xc0
	// Line 231, Address: 0x4bd920, Func Offset: 0xf0
	// Line 234, Address: 0x4bd924, Func Offset: 0xf4
	// Line 231, Address: 0x4bd928, Func Offset: 0xf8
	// Line 234, Address: 0x4bd92c, Func Offset: 0xfc
	// Line 231, Address: 0x4bd930, Func Offset: 0x100
	// Line 234, Address: 0x4bd934, Func Offset: 0x104
	// Line 232, Address: 0x4bd938, Func Offset: 0x108
	// Line 231, Address: 0x4bd940, Func Offset: 0x110
	// Line 232, Address: 0x4bd948, Func Offset: 0x118
	// Line 231, Address: 0x4bd950, Func Offset: 0x120
	// Line 232, Address: 0x4bd954, Func Offset: 0x124
	// Line 234, Address: 0x4bd95c, Func Offset: 0x12c
	// Line 235, Address: 0x4bd968, Func Offset: 0x138
	// Line 237, Address: 0x4bd984, Func Offset: 0x154
	// Line 238, Address: 0x4bd98c, Func Offset: 0x15c
	// Line 237, Address: 0x4bd990, Func Offset: 0x160
	// Line 238, Address: 0x4bd994, Func Offset: 0x164
	// Line 237, Address: 0x4bd998, Func Offset: 0x168
	// Line 238, Address: 0x4bd9a4, Func Offset: 0x174
	// Line 237, Address: 0x4bd9a8, Func Offset: 0x178
	// Line 238, Address: 0x4bd9b0, Func Offset: 0x180
	// Line 237, Address: 0x4bd9b4, Func Offset: 0x184
	// Line 238, Address: 0x4bd9b8, Func Offset: 0x188
	// Line 237, Address: 0x4bd9c0, Func Offset: 0x190
	// Line 238, Address: 0x4bd9c4, Func Offset: 0x194
	// Line 237, Address: 0x4bd9c8, Func Offset: 0x198
	// Line 238, Address: 0x4bd9d0, Func Offset: 0x1a0
	// Line 239, Address: 0x4bda00, Func Offset: 0x1d0
	// Line 240, Address: 0x4bda58, Func Offset: 0x228
	// Line 246, Address: 0x4bdaac, Func Offset: 0x27c
	// Line 249, Address: 0x4bdac4, Func Offset: 0x294
	// Func End, Address: 0x4bdad0, Func Offset: 0x2a0
}

// NCIN_FlingSpit_Upd__12IntroFlingerFPC12zCutsceneMgrP9NCINEntryi
// Start address: 0x4bdad0
void NCIN_FlingSpit_Upd(NCINEntry* fxrec, int32 killit)
{
	NCINHaz* storage;
	zNMEHazard* haz;
	int32 rc;
	HAZLob* hazlob;
	xVec3 pos_orig;
	xVec3 pos_dest;
	float32 tym;
	xVec3 diff;
	// Line 105, Address: 0x4bdad0, Func Offset: 0
	// Line 113, Address: 0x4bdae8, Func Offset: 0x18
	// Line 133, Address: 0x4bdaf0, Func Offset: 0x20
	// Line 179, Address: 0x4bdb04, Func Offset: 0x34
	// Line 190, Address: 0x4bdb0c, Func Offset: 0x3c
	// Line 195, Address: 0x4bdb18, Func Offset: 0x48
	// Line 114, Address: 0x4bdb24, Func Offset: 0x54
	// Line 195, Address: 0x4bdb28, Func Offset: 0x58
	// Line 116, Address: 0x4bdb3c, Func Offset: 0x6c
	// Line 195, Address: 0x4bdb48, Func Offset: 0x78
	// Line 117, Address: 0x4bdb54, Func Offset: 0x84
	// Line 195, Address: 0x4bdb58, Func Offset: 0x88
	// Line 119, Address: 0x4bdb64, Func Offset: 0x94
	// Line 195, Address: 0x4bdb68, Func Offset: 0x98
	// Line 125, Address: 0x4bdb6c, Func Offset: 0x9c
	// Line 195, Address: 0x4bdb74, Func Offset: 0xa4
	// Line 135, Address: 0x4bdb7c, Func Offset: 0xac
	// Line 195, Address: 0x4bdb80, Func Offset: 0xb0
	// Line 150, Address: 0x4bdb9c, Func Offset: 0xcc
	// Line 195, Address: 0x4bdba0, Func Offset: 0xd0
	// Line 150, Address: 0x4bdba4, Func Offset: 0xd4
	// Line 156, Address: 0x4bdba8, Func Offset: 0xd8
	// Line 149, Address: 0x4bdbac, Func Offset: 0xdc
	// Line 150, Address: 0x4bdbb0, Func Offset: 0xe0
	// Line 195, Address: 0x4bdbb8, Func Offset: 0xe8
	// Line 156, Address: 0x4bdbe4, Func Offset: 0x114
	// Line 195, Address: 0x4bdbe8, Func Offset: 0x118
	// Line 169, Address: 0x4bdbfc, Func Offset: 0x12c
	// Line 195, Address: 0x4bdc00, Func Offset: 0x130
	// Line 161, Address: 0x4bdc28, Func Offset: 0x158
	// Line 195, Address: 0x4bdc2c, Func Offset: 0x15c
	// Line 161, Address: 0x4bdc48, Func Offset: 0x178
	// Line 195, Address: 0x4bdc4c, Func Offset: 0x17c
	// Line 160, Address: 0x4bdc70, Func Offset: 0x1a0
	// Line 161, Address: 0x4bdc74, Func Offset: 0x1a4
	// Line 195, Address: 0x4bdc78, Func Offset: 0x1a8
	// Line 161, Address: 0x4bdc7c, Func Offset: 0x1ac
	// Line 158, Address: 0x4bdc80, Func Offset: 0x1b0
	// Line 195, Address: 0x4bdc84, Func Offset: 0x1b4
	// Line 158, Address: 0x4bdc90, Func Offset: 0x1c0
	// Line 195, Address: 0x4bdc94, Func Offset: 0x1c4
	// Line 158, Address: 0x4bdc98, Func Offset: 0x1c8
	// Line 195, Address: 0x4bdc9c, Func Offset: 0x1cc
	// Line 162, Address: 0x4bdcc8, Func Offset: 0x1f8
	// Line 195, Address: 0x4bdcd8, Func Offset: 0x208
	// Line 180, Address: 0x4bdcdc, Func Offset: 0x20c
	// Line 195, Address: 0x4bdce0, Func Offset: 0x210
	// Line 196, Address: 0x4bdce4, Func Offset: 0x214
	// Func End, Address: 0x4bdcfc, Func Offset: 0x22c
}

