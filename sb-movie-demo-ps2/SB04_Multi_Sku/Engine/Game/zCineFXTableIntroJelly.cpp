



void NCIN_BB02JellyAttack_Twk();
void NCIN_BB02JellyDanger_Twk();
void NCIN_BB02JellyGround_Twk();
void NCIN_BB02JellyGround_AR(NCINEntry* fxrec, RwMatrixTag* animMat, uint32 animIndex);
void NCIN_BB02JellyAttack_AR(zCutsceneMgr* csnmgr, NCINEntry* fxrec, RpAtomic* model, RwMatrixTag* animMat, uint32 animIndex, uint32 dataIndex);
void NCIN_BB02JellyDanger_AR(NCINEntry* fxrec, RwMatrixTag* animMat, uint32 animIndex);
void NCIN_BB02JellyLight_Upd(NCINEntry* fxrec, int32 killit);

// NCIN_BB02JellyAttack_Twk__10IntroJellyFPCcP9NCINEntry
// Start address: 0x4bd1f0
void NCIN_BB02JellyAttack_Twk()
{
	// Line 335, Address: 0x4bd1f0, Func Offset: 0
	// Func End, Address: 0x4bd1f8, Func Offset: 0x8
}

// NCIN_BB02JellyDanger_Twk__10IntroJellyFPCcP9NCINEntry
// Start address: 0x4bd200
void NCIN_BB02JellyDanger_Twk()
{
	// Line 333, Address: 0x4bd200, Func Offset: 0
	// Func End, Address: 0x4bd208, Func Offset: 0x8
}

// NCIN_BB02JellyGround_Twk__10IntroJellyFPCcP9NCINEntry
// Start address: 0x4bd210
void NCIN_BB02JellyGround_Twk()
{
	// Line 337, Address: 0x4bd210, Func Offset: 0
	// Func End, Address: 0x4bd218, Func Offset: 0x8
}

// NCIN_BB02JellyGround_AR__10IntroJellyFPC12zCutsceneMgrP9NCINEntryP8RpAtomicP11RwMatrixTagUiUi
// Start address: 0x4bd220
void NCIN_BB02JellyGround_AR(NCINEntry* fxrec, RwMatrixTag* animMat, uint32 animIndex)
{
	zLightning* light;
	int32 idx_animSrc;
	int32 boneIndex;
	xVec3 vec_offset;
	xMat4x3* mat_bone;
	xMat4x3* mat_root;
	xVec3 pnt;
	xVec3 pos_ground;
	// Line 246, Address: 0x4bd220, Func Offset: 0
	// Line 248, Address: 0x4bd234, Func Offset: 0x14
	// Line 249, Address: 0x4bd238, Func Offset: 0x18
	// Line 255, Address: 0x4bd250, Func Offset: 0x30
	// Line 260, Address: 0x4bd258, Func Offset: 0x38
	// Line 261, Address: 0x4bd25c, Func Offset: 0x3c
	// Line 268, Address: 0x4bd264, Func Offset: 0x44
	// Line 261, Address: 0x4bd268, Func Offset: 0x48
	// Line 260, Address: 0x4bd270, Func Offset: 0x50
	// Line 261, Address: 0x4bd278, Func Offset: 0x58
	// Line 263, Address: 0x4bd27c, Func Offset: 0x5c
	// Line 261, Address: 0x4bd280, Func Offset: 0x60
	// Line 263, Address: 0x4bd284, Func Offset: 0x64
	// Line 261, Address: 0x4bd288, Func Offset: 0x68
	// Line 268, Address: 0x4bd28c, Func Offset: 0x6c
	// Line 269, Address: 0x4bd2d4, Func Offset: 0xb4
	// Line 271, Address: 0x4bd308, Func Offset: 0xe8
	// Line 272, Address: 0x4bd310, Func Offset: 0xf0
	// Line 274, Address: 0x4bd340, Func Offset: 0x120
	// Line 272, Address: 0x4bd348, Func Offset: 0x128
	// Line 274, Address: 0x4bd34c, Func Offset: 0x12c
	// Line 275, Address: 0x4bd36c, Func Offset: 0x14c
	// Line 276, Address: 0x4bd3b8, Func Offset: 0x198
	// Line 275, Address: 0x4bd3bc, Func Offset: 0x19c
	// Line 276, Address: 0x4bd3d0, Func Offset: 0x1b0
	// Line 275, Address: 0x4bd3d8, Func Offset: 0x1b8
	// Line 276, Address: 0x4bd3e4, Func Offset: 0x1c4
	// Line 275, Address: 0x4bd3e8, Func Offset: 0x1c8
	// Line 277, Address: 0x4bd3f4, Func Offset: 0x1d4
	// Line 280, Address: 0x4bd440, Func Offset: 0x220
	// Line 277, Address: 0x4bd44c, Func Offset: 0x22c
	// Line 280, Address: 0x4bd474, Func Offset: 0x254
	// Line 283, Address: 0x4bd47c, Func Offset: 0x25c
	// Func End, Address: 0x4bd494, Func Offset: 0x274
}

// NCIN_BB02JellyAttack_AR__10IntroJellyFPC12zCutsceneMgrP9NCINEntryP8RpAtomicP11RwMatrixTagUiUi
// Start address: 0x4bd4a0
void NCIN_BB02JellyAttack_AR(zCutsceneMgr* csnmgr, NCINEntry* fxrec, RpAtomic* model, RwMatrixTag* animMat, uint32 animIndex, uint32 dataIndex)
{
	// Line 230, Address: 0x4bd4a0, Func Offset: 0
	// Func End, Address: 0x4bd4a8, Func Offset: 0x8
}

// NCIN_BB02JellyDanger_AR__10IntroJellyFPC12zCutsceneMgrP9NCINEntryP8RpAtomicP11RwMatrixTagUiUi
// Start address: 0x4bd4b0
void NCIN_BB02JellyDanger_AR(NCINEntry* fxrec, RwMatrixTag* animMat, uint32 animIndex)
{
	zLightning* light;
	int32 idx_animSrc;
	int32 idx_animTgt;
	int32 boneIndex;
	xVec3 vec_offset;
	xMat4x3* mat_bone;
	xMat4x3* mat_root;
	xVec3 pnt;
	int32 boneIndex;
	xVec3 vec_offset;
	xMat4x3* mat_bone;
	xMat4x3* mat_root;
	xVec3 pnt;
	// Line 170, Address: 0x4bd4b0, Func Offset: 0
	// Line 172, Address: 0x4bd4d4, Func Offset: 0x24
	// Line 173, Address: 0x4bd4d8, Func Offset: 0x28
	// Line 177, Address: 0x4bd4e4, Func Offset: 0x34
	// Line 173, Address: 0x4bd4e8, Func Offset: 0x38
	// Line 177, Address: 0x4bd4ec, Func Offset: 0x3c
	// Line 180, Address: 0x4bd4f8, Func Offset: 0x48
	// Line 183, Address: 0x4bd500, Func Offset: 0x50
	// Line 184, Address: 0x4bd504, Func Offset: 0x54
	// Line 191, Address: 0x4bd50c, Func Offset: 0x5c
	// Line 184, Address: 0x4bd510, Func Offset: 0x60
	// Line 183, Address: 0x4bd518, Func Offset: 0x68
	// Line 184, Address: 0x4bd520, Func Offset: 0x70
	// Line 186, Address: 0x4bd524, Func Offset: 0x74
	// Line 184, Address: 0x4bd528, Func Offset: 0x78
	// Line 186, Address: 0x4bd52c, Func Offset: 0x7c
	// Line 184, Address: 0x4bd530, Func Offset: 0x80
	// Line 191, Address: 0x4bd534, Func Offset: 0x84
	// Line 192, Address: 0x4bd57c, Func Offset: 0xcc
	// Line 194, Address: 0x4bd5b0, Func Offset: 0x100
	// Line 195, Address: 0x4bd5b8, Func Offset: 0x108
	// Line 198, Address: 0x4bd5e8, Func Offset: 0x138
	// Line 202, Address: 0x4bd5f8, Func Offset: 0x148
	// Line 205, Address: 0x4bd600, Func Offset: 0x150
	// Line 206, Address: 0x4bd604, Func Offset: 0x154
	// Line 213, Address: 0x4bd60c, Func Offset: 0x15c
	// Line 206, Address: 0x4bd610, Func Offset: 0x160
	// Line 205, Address: 0x4bd618, Func Offset: 0x168
	// Line 206, Address: 0x4bd620, Func Offset: 0x170
	// Line 208, Address: 0x4bd624, Func Offset: 0x174
	// Line 206, Address: 0x4bd628, Func Offset: 0x178
	// Line 208, Address: 0x4bd62c, Func Offset: 0x17c
	// Line 206, Address: 0x4bd630, Func Offset: 0x180
	// Line 213, Address: 0x4bd634, Func Offset: 0x184
	// Line 214, Address: 0x4bd67c, Func Offset: 0x1cc
	// Line 216, Address: 0x4bd6b0, Func Offset: 0x200
	// Line 217, Address: 0x4bd6b8, Func Offset: 0x208
	// Line 220, Address: 0x4bd6e8, Func Offset: 0x238
	// Line 224, Address: 0x4bd6f8, Func Offset: 0x248
	// Func End, Address: 0x4bd718, Func Offset: 0x268
}

// NCIN_BB02JellyLight_Upd__10IntroJellyFPC12zCutsceneMgrP9NCINEntryi
// Start address: 0x4bd720
void NCIN_BB02JellyLight_Upd(NCINEntry* fxrec, int32 killit)
{
	_tagLightningAdd addInfo;
	xVec3 pnt;
	float32 lyfe;
	// Line 103, Address: 0x4bd720, Func Offset: 0
	// Line 113, Address: 0x4bd72c, Func Offset: 0xc
	// Line 114, Address: 0x4bd738, Func Offset: 0x18
	// Line 115, Address: 0x4bd740, Func Offset: 0x20
	// Line 117, Address: 0x4bd748, Func Offset: 0x28
	// Line 118, Address: 0x4bd74c, Func Offset: 0x2c
	// Line 119, Address: 0x4bd754, Func Offset: 0x34
	// Line 131, Address: 0x4bd75c, Func Offset: 0x3c
	// Line 133, Address: 0x4bd76c, Func Offset: 0x4c
	// Line 135, Address: 0x4bd778, Func Offset: 0x58
	// Line 141, Address: 0x4bd784, Func Offset: 0x64
	// Line 145, Address: 0x4bd788, Func Offset: 0x68
	// Line 140, Address: 0x4bd78c, Func Offset: 0x6c
	// Line 145, Address: 0x4bd790, Func Offset: 0x70
	// Line 140, Address: 0x4bd794, Func Offset: 0x74
	// Line 145, Address: 0x4bd798, Func Offset: 0x78
	// Line 140, Address: 0x4bd79c, Func Offset: 0x7c
	// Line 141, Address: 0x4bd7a0, Func Offset: 0x80
	// Line 142, Address: 0x4bd7a4, Func Offset: 0x84
	// Line 144, Address: 0x4bd7a8, Func Offset: 0x88
	// Line 145, Address: 0x4bd7b4, Func Offset: 0x94
	// Line 149, Address: 0x4bd7d0, Func Offset: 0xb0
	// Line 145, Address: 0x4bd7d4, Func Offset: 0xb4
	// Line 149, Address: 0x4bd7e0, Func Offset: 0xc0
	// Line 152, Address: 0x4bd7ec, Func Offset: 0xcc
	// Line 155, Address: 0x4bd7f8, Func Offset: 0xd8
	// Line 153, Address: 0x4bd804, Func Offset: 0xe4
	// Line 156, Address: 0x4bd810, Func Offset: 0xf0
	// Func End, Address: 0x4bd820, Func Offset: 0x100
}

