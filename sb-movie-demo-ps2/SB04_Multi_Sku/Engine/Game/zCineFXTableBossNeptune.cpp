



void NCIN_FloorDestroy();
void NCIN_NMEExhaustImpact_Twk();
void NCIN_NMEExhaustImpact_AR(NCINEntry* fxrec, uint32 animIndex);
void NCIN_NepTridLyt_Twk();
void NCIN_NepTridLyt_AR(NCINEntry* fxrec, RwMatrixTag* animMat, uint32 animIndex);
void NCIN_NepTridLyt_Upd(NCINEntry* fxrec, int32 killit);

// NCIN_FloorDestroy__12CinFXNeptuneFPC12zCutsceneMgrP9NCINEntryP8RpAtomicP11RwMatrixTagUiUi
// Start address: 0x4beb80
void NCIN_FloorDestroy()
{
	xEnt* entDestructFloor;
	xJSPHeader* underFloorJSP;
	float32 zeroParam[4];
	// Line 357, Address: 0x4beb80, Func Offset: 0
	// Line 359, Address: 0x4beb84, Func Offset: 0x4
	// Line 357, Address: 0x4beb88, Func Offset: 0x8
	// Line 359, Address: 0x4beb8c, Func Offset: 0xc
	// Line 357, Address: 0x4beb90, Func Offset: 0x10
	// Line 359, Address: 0x4beb94, Func Offset: 0x14
	// Line 360, Address: 0x4beba0, Func Offset: 0x20
	// Line 361, Address: 0x4bebb0, Func Offset: 0x30
	// Line 362, Address: 0x4bebb8, Func Offset: 0x38
	// Line 363, Address: 0x4bebe0, Func Offset: 0x60
	// Line 364, Address: 0x4bec04, Func Offset: 0x84
	// Line 366, Address: 0x4bec3c, Func Offset: 0xbc
	// Line 368, Address: 0x4bec60, Func Offset: 0xe0
	// Line 369, Address: 0x4bec68, Func Offset: 0xe8
	// Line 371, Address: 0x4bec80, Func Offset: 0x100
	// Func End, Address: 0x4bec94, Func Offset: 0x114
}

// NCIN_NMEExhaustImpact_Twk__12CinFXNeptuneFPCcP9NCINEntry
// Start address: 0x4beca0
void NCIN_NMEExhaustImpact_Twk()
{
	// Line 351, Address: 0x4beca0, Func Offset: 0
	// Func End, Address: 0x4beca8, Func Offset: 0x8
}

// NCIN_NMEExhaustImpact_AR__12CinFXNeptuneFPC12zCutsceneMgrP9NCINEntryP8RpAtomicP11RwMatrixTagUiUi
// Start address: 0x4becb0
void NCIN_NMEExhaustImpact_AR(NCINEntry* fxrec, uint32 animIndex)
{
	xVec3 pos_emit;
	xVec3 dir_emit;
	float32 spd_mult;
	// Line 275, Address: 0x4becb0, Func Offset: 0
	// Line 277, Address: 0x4becb8, Func Offset: 0x8
	// Line 304, Address: 0x4becc4, Func Offset: 0x14
	// Line 313, Address: 0x4becc8, Func Offset: 0x18
	// Line 304, Address: 0x4beccc, Func Offset: 0x1c
	// Line 313, Address: 0x4becd0, Func Offset: 0x20
	// Line 304, Address: 0x4becd4, Func Offset: 0x24
	// Line 313, Address: 0x4becd8, Func Offset: 0x28
	// Line 304, Address: 0x4becdc, Func Offset: 0x2c
	// Line 305, Address: 0x4bece8, Func Offset: 0x38
	// Line 306, Address: 0x4bed00, Func Offset: 0x50
	// Line 309, Address: 0x4bed10, Func Offset: 0x60
	// Line 313, Address: 0x4bed28, Func Offset: 0x78
	// Line 316, Address: 0x4bed34, Func Offset: 0x84
	// Line 321, Address: 0x4bed64, Func Offset: 0xb4
	// Line 323, Address: 0x4bed88, Func Offset: 0xd8
	// Line 314, Address: 0x4bedb0, Func Offset: 0x100
	// Line 324, Address: 0x4bedb8, Func Offset: 0x108
	// Func End, Address: 0x4bedc4, Func Offset: 0x114
}

// NCIN_NepTridLyt_Twk__12CinFXNeptuneFPCcP9NCINEntry
// Start address: 0x4bedd0
void NCIN_NepTridLyt_Twk()
{
	// Line 254, Address: 0x4bedd0, Func Offset: 0
	// Func End, Address: 0x4bedd8, Func Offset: 0x8
}

// NCIN_NepTridLyt_AR__12CinFXNeptuneFPC12zCutsceneMgrP9NCINEntryP8RpAtomicP11RwMatrixTagUiUi
// Start address: 0x4bede0
void NCIN_NepTridLyt_AR(NCINEntry* fxrec, RwMatrixTag* animMat, uint32 animIndex)
{
	zLightning* light;
	int32 boneIndexSrc;
	int32 boneIndexTgt;
	xVec3 vec_srcOffset;
	xVec3 vec_srcRand;
	xVec3 vec_tgtOffset;
	xVec3 vec_tgtRand;
	xMat4x3* mat_boneSrc;
	xMat4x3* mat_boneTgt;
	xMat4x3* mat_root;
	xVec3 pos_src;
	xVec3 pos_tgt;
	// Line 177, Address: 0x4bede0, Func Offset: 0
	// Line 179, Address: 0x4bee08, Func Offset: 0x28
	// Line 180, Address: 0x4bee0c, Func Offset: 0x2c
	// Line 184, Address: 0x4bee14, Func Offset: 0x34
	// Line 198, Address: 0x4bee24, Func Offset: 0x44
	// Line 199, Address: 0x4bee2c, Func Offset: 0x4c
	// Line 201, Address: 0x4bee30, Func Offset: 0x50
	// Line 207, Address: 0x4bee34, Func Offset: 0x54
	// Line 201, Address: 0x4bee38, Func Offset: 0x58
	// Line 207, Address: 0x4bee3c, Func Offset: 0x5c
	// Line 202, Address: 0x4bee40, Func Offset: 0x60
	// Line 208, Address: 0x4bee44, Func Offset: 0x64
	// Line 212, Address: 0x4bee4c, Func Offset: 0x6c
	// Line 202, Address: 0x4bee50, Func Offset: 0x70
	// Line 212, Address: 0x4bee54, Func Offset: 0x74
	// Line 202, Address: 0x4bee58, Func Offset: 0x78
	// Line 212, Address: 0x4bee5c, Func Offset: 0x7c
	// Line 204, Address: 0x4bee60, Func Offset: 0x80
	// Line 212, Address: 0x4bee64, Func Offset: 0x84
	// Line 201, Address: 0x4bee68, Func Offset: 0x88
	// Line 204, Address: 0x4bee70, Func Offset: 0x90
	// Line 201, Address: 0x4bee74, Func Offset: 0x94
	// Line 202, Address: 0x4bee78, Func Offset: 0x98
	// Line 204, Address: 0x4bee84, Func Offset: 0xa4
	// Line 205, Address: 0x4bee8c, Func Offset: 0xac
	// Line 212, Address: 0x4bee98, Func Offset: 0xb8
	// Line 201, Address: 0x4bee9c, Func Offset: 0xbc
	// Line 212, Address: 0x4beea0, Func Offset: 0xc0
	// Line 204, Address: 0x4beea4, Func Offset: 0xc4
	// Line 212, Address: 0x4beea8, Func Offset: 0xc8
	// Line 204, Address: 0x4beeb8, Func Offset: 0xd8
	// Line 212, Address: 0x4beebc, Func Offset: 0xdc
	// Line 205, Address: 0x4beec0, Func Offset: 0xe0
	// Line 212, Address: 0x4beecc, Func Offset: 0xec
	// Line 213, Address: 0x4beed0, Func Offset: 0xf0
	// Line 214, Address: 0x4befa4, Func Offset: 0x1c4
	// Line 215, Address: 0x4bf07c, Func Offset: 0x29c
	// Line 217, Address: 0x4bf0cc, Func Offset: 0x2ec
	// Line 215, Address: 0x4bf0d0, Func Offset: 0x2f0
	// Line 217, Address: 0x4bf15c, Func Offset: 0x37c
	// Line 218, Address: 0x4bf1a4, Func Offset: 0x3c4
	// Line 220, Address: 0x4bf1d0, Func Offset: 0x3f0
	// Line 221, Address: 0x4bf1d8, Func Offset: 0x3f8
	// Line 224, Address: 0x4bf208, Func Offset: 0x428
	// Line 221, Address: 0x4bf218, Func Offset: 0x438
	// Line 224, Address: 0x4bf21c, Func Offset: 0x43c
	// Line 225, Address: 0x4bf23c, Func Offset: 0x45c
	// Line 226, Address: 0x4bf310, Func Offset: 0x530
	// Line 227, Address: 0x4bf3e8, Func Offset: 0x608
	// Line 228, Address: 0x4bf438, Func Offset: 0x658
	// Line 227, Address: 0x4bf43c, Func Offset: 0x65c
	// Line 228, Address: 0x4bf4c8, Func Offset: 0x6e8
	// Line 229, Address: 0x4bf510, Func Offset: 0x730
	// Line 231, Address: 0x4bf53c, Func Offset: 0x75c
	// Line 232, Address: 0x4bf544, Func Offset: 0x764
	// Line 235, Address: 0x4bf574, Func Offset: 0x794
	// Line 238, Address: 0x4bf584, Func Offset: 0x7a4
	// Func End, Address: 0x4bf5b0, Func Offset: 0x7d0
}

// NCIN_NepTridLyt_Upd__12CinFXNeptuneFPC12zCutsceneMgrP9NCINEntryi
// Start address: 0x4bf5b0
void NCIN_NepTridLyt_Upd(NCINEntry* fxrec, int32 killit)
{
	_tagLightningAdd addInfo;
	xVec3 pnt;
	float32 lyfe;
	// Line 110, Address: 0x4bf5b0, Func Offset: 0
	// Line 120, Address: 0x4bf5bc, Func Offset: 0xc
	// Line 121, Address: 0x4bf5c8, Func Offset: 0x18
	// Line 122, Address: 0x4bf5d0, Func Offset: 0x20
	// Line 124, Address: 0x4bf5d8, Func Offset: 0x28
	// Line 125, Address: 0x4bf5dc, Func Offset: 0x2c
	// Line 126, Address: 0x4bf5e4, Func Offset: 0x34
	// Line 138, Address: 0x4bf5ec, Func Offset: 0x3c
	// Line 141, Address: 0x4bf5fc, Func Offset: 0x4c
	// Line 143, Address: 0x4bf608, Func Offset: 0x58
	// Line 149, Address: 0x4bf614, Func Offset: 0x64
	// Line 153, Address: 0x4bf618, Func Offset: 0x68
	// Line 148, Address: 0x4bf61c, Func Offset: 0x6c
	// Line 153, Address: 0x4bf620, Func Offset: 0x70
	// Line 148, Address: 0x4bf624, Func Offset: 0x74
	// Line 153, Address: 0x4bf628, Func Offset: 0x78
	// Line 148, Address: 0x4bf62c, Func Offset: 0x7c
	// Line 149, Address: 0x4bf630, Func Offset: 0x80
	// Line 150, Address: 0x4bf634, Func Offset: 0x84
	// Line 152, Address: 0x4bf638, Func Offset: 0x88
	// Line 153, Address: 0x4bf644, Func Offset: 0x94
	// Line 157, Address: 0x4bf660, Func Offset: 0xb0
	// Line 153, Address: 0x4bf664, Func Offset: 0xb4
	// Line 157, Address: 0x4bf670, Func Offset: 0xc0
	// Line 160, Address: 0x4bf67c, Func Offset: 0xcc
	// Line 163, Address: 0x4bf688, Func Offset: 0xd8
	// Line 161, Address: 0x4bf694, Func Offset: 0xe4
	// Line 164, Address: 0x4bf6a0, Func Offset: 0xf0
	// Func End, Address: 0x4bf6b0, Func Offset: 0x100
}

