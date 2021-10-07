



void NCIN_PopRockLaunch_Upd(NCINEntry* fxrec, int32 killit);
void NCIN_NMERibHelp_Twk();
void NCIN_NMERibHelp_AR(NCINEntry* fxrec, RwMatrixTag* animMat, uint32 animIndex);
void NCIN_NMERibHelp_Upd(NCINEntry* fxrec, int32 killit);
void NCIN_HuffNPuff_Twk();
void NCIN_HuffNPuff_AR(NCINEntry* fxrec, RwMatrixTag* animMat, uint32 animIndex);
void NCIN_HuffNPuff_Upd(NCINEntry* fxrec, int32 killit);
void NCIN_PopGround_Twk();
void NCIN_PopGround_AR(NCINEntry* fxrec, RwMatrixTag* animMat, uint32 animIndex);
void NCIN_PopGround_Upd(NCINEntry* fxrec, int32 killit);

// NCIN_PopRockLaunch_Upd__11IntroPopperFPC12zCutsceneMgrP9NCINEntryi
// Start address: 0x4bc9c0
void NCIN_PopRockLaunch_Upd(NCINEntry* fxrec, int32 killit)
{
	NCINHaz* storage;
	zNMEHazard* haz;
	int32 rc;
	HAZLob* hazlob;
	xVec3 pos_orig;
	xVec3 pos_dest;
	float32 tym;
	xVec3 diff;
	// Line 503, Address: 0x4bc9c0, Func Offset: 0
	// Line 511, Address: 0x4bc9d8, Func Offset: 0x18
	// Line 529, Address: 0x4bc9e0, Func Offset: 0x20
	// Line 575, Address: 0x4bc9f4, Func Offset: 0x34
	// Line 585, Address: 0x4bc9fc, Func Offset: 0x3c
	// Line 590, Address: 0x4bca0c, Func Offset: 0x4c
	// Line 512, Address: 0x4bca18, Func Offset: 0x58
	// Line 590, Address: 0x4bca1c, Func Offset: 0x5c
	// Line 514, Address: 0x4bca30, Func Offset: 0x70
	// Line 590, Address: 0x4bca3c, Func Offset: 0x7c
	// Line 515, Address: 0x4bca48, Func Offset: 0x88
	// Line 590, Address: 0x4bca4c, Func Offset: 0x8c
	// Line 521, Address: 0x4bca50, Func Offset: 0x90
	// Line 590, Address: 0x4bca58, Func Offset: 0x98
	// Line 531, Address: 0x4bca60, Func Offset: 0xa0
	// Line 590, Address: 0x4bca64, Func Offset: 0xa4
	// Line 546, Address: 0x4bca80, Func Offset: 0xc0
	// Line 590, Address: 0x4bca84, Func Offset: 0xc4
	// Line 546, Address: 0x4bca88, Func Offset: 0xc8
	// Line 552, Address: 0x4bca8c, Func Offset: 0xcc
	// Line 545, Address: 0x4bca90, Func Offset: 0xd0
	// Line 546, Address: 0x4bca94, Func Offset: 0xd4
	// Line 590, Address: 0x4bca9c, Func Offset: 0xdc
	// Line 552, Address: 0x4bcac8, Func Offset: 0x108
	// Line 590, Address: 0x4bcacc, Func Offset: 0x10c
	// Line 565, Address: 0x4bcae0, Func Offset: 0x120
	// Line 590, Address: 0x4bcae4, Func Offset: 0x124
	// Line 557, Address: 0x4bcb0c, Func Offset: 0x14c
	// Line 590, Address: 0x4bcb10, Func Offset: 0x150
	// Line 557, Address: 0x4bcb2c, Func Offset: 0x16c
	// Line 590, Address: 0x4bcb30, Func Offset: 0x170
	// Line 556, Address: 0x4bcb54, Func Offset: 0x194
	// Line 557, Address: 0x4bcb58, Func Offset: 0x198
	// Line 590, Address: 0x4bcb5c, Func Offset: 0x19c
	// Line 557, Address: 0x4bcb60, Func Offset: 0x1a0
	// Line 554, Address: 0x4bcb64, Func Offset: 0x1a4
	// Line 590, Address: 0x4bcb68, Func Offset: 0x1a8
	// Line 554, Address: 0x4bcb74, Func Offset: 0x1b4
	// Line 590, Address: 0x4bcb78, Func Offset: 0x1b8
	// Line 554, Address: 0x4bcb7c, Func Offset: 0x1bc
	// Line 590, Address: 0x4bcb80, Func Offset: 0x1c0
	// Line 558, Address: 0x4bcbac, Func Offset: 0x1ec
	// Line 590, Address: 0x4bcbbc, Func Offset: 0x1fc
	// Line 576, Address: 0x4bcbc0, Func Offset: 0x200
	// Line 590, Address: 0x4bcbc4, Func Offset: 0x204
	// Line 591, Address: 0x4bcbc8, Func Offset: 0x208
	// Func End, Address: 0x4bcbe0, Func Offset: 0x220
}

// NCIN_NMERibHelp_Twk__11IntroPopperFPCcP9NCINEntry
// Start address: 0x4bcbe0
void NCIN_NMERibHelp_Twk()
{
	// Line 493, Address: 0x4bcbe0, Func Offset: 0
	// Func End, Address: 0x4bcbe8, Func Offset: 0x8
}

// NCIN_NMERibHelp_AR__11IntroPopperFPC12zCutsceneMgrP9NCINEntryP8RpAtomicP11RwMatrixTagUiUi
// Start address: 0x4bcbf0
void NCIN_NMERibHelp_AR(NCINEntry* fxrec, RwMatrixTag* animMat, uint32 animIndex)
{
	NCINRibbon* storage;
	RibData* ribhelp;
	int32 idx_bone;
	xMat4x3* mat_root;
	xMat4x3* mat_bone;
	xMat4x3* mat_boneA;
	xVec3 pos_emit;
	xVec3 dir_emit;
	// Line 445, Address: 0x4bcbf0, Func Offset: 0
	// Line 447, Address: 0x4bcbf8, Func Offset: 0x8
	// Line 451, Address: 0x4bcc04, Func Offset: 0x14
	// Line 453, Address: 0x4bcc10, Func Offset: 0x20
	// Line 454, Address: 0x4bcc14, Func Offset: 0x24
	// Line 458, Address: 0x4bcc1c, Func Offset: 0x2c
	// Line 462, Address: 0x4bcc20, Func Offset: 0x30
	// Line 461, Address: 0x4bcc24, Func Offset: 0x34
	// Line 462, Address: 0x4bcc2c, Func Offset: 0x3c
	// Line 464, Address: 0x4bcc30, Func Offset: 0x40
	// Line 462, Address: 0x4bcc34, Func Offset: 0x44
	// Line 464, Address: 0x4bcc38, Func Offset: 0x48
	// Line 465, Address: 0x4bcc48, Func Offset: 0x58
	// Line 468, Address: 0x4bcc50, Func Offset: 0x60
	// Line 470, Address: 0x4bcc88, Func Offset: 0x98
	// Line 468, Address: 0x4bcc8c, Func Offset: 0x9c
	// Line 470, Address: 0x4bcc90, Func Offset: 0xa0
	// Line 468, Address: 0x4bcc94, Func Offset: 0xa4
	// Line 470, Address: 0x4bcca4, Func Offset: 0xb4
	// Line 468, Address: 0x4bcca8, Func Offset: 0xb8
	// Line 469, Address: 0x4bccdc, Func Offset: 0xec
	// Line 468, Address: 0x4bccec, Func Offset: 0xfc
	// Line 469, Address: 0x4bccf0, Func Offset: 0x100
	// Line 470, Address: 0x4bccf8, Func Offset: 0x108
	// Line 471, Address: 0x4bcd04, Func Offset: 0x114
	// Line 466, Address: 0x4bcd1c, Func Offset: 0x12c
	// Line 471, Address: 0x4bcd20, Func Offset: 0x130
	// Line 466, Address: 0x4bcd28, Func Offset: 0x138
	// Line 471, Address: 0x4bcd2c, Func Offset: 0x13c
	// Line 466, Address: 0x4bcd34, Func Offset: 0x144
	// Line 475, Address: 0x4bcd40, Func Offset: 0x150
	// Line 478, Address: 0x4bcd5c, Func Offset: 0x16c
	// Func End, Address: 0x4bcd68, Func Offset: 0x178
}

// NCIN_NMERibHelp_Upd__11IntroPopperFPC12zCutsceneMgrP9NCINEntryi
// Start address: 0x4bcd70
void NCIN_NMERibHelp_Upd(NCINEntry* fxrec, int32 killit)
{
	RibData* ribhelp;
	NCINRibbon* storage;
	// Line 385, Address: 0x4bcd70, Func Offset: 0
	// Line 386, Address: 0x4bcd88, Func Offset: 0x18
	// Line 388, Address: 0x4bcd8c, Func Offset: 0x1c
	// Line 400, Address: 0x4bcd94, Func Offset: 0x24
	// Line 414, Address: 0x4bcd9c, Func Offset: 0x2c
	// Line 415, Address: 0x4bcdb0, Func Offset: 0x40
	// Line 416, Address: 0x4bcdc8, Func Offset: 0x58
	// Line 417, Address: 0x4bcdd4, Func Offset: 0x64
	// Line 418, Address: 0x4bcddc, Func Offset: 0x6c
	// Line 435, Address: 0x4bcde4, Func Offset: 0x74
	// Line 436, Address: 0x4bcdf0, Func Offset: 0x80
	// Line 439, Address: 0x4bce78, Func Offset: 0x108
	// Line 389, Address: 0x4bce84, Func Offset: 0x114
	// Line 390, Address: 0x4bce88, Func Offset: 0x118
	// Line 439, Address: 0x4bce90, Func Offset: 0x120
	// Line 401, Address: 0x4bce94, Func Offset: 0x124
	// Line 439, Address: 0x4bce98, Func Offset: 0x128
	// Line 406, Address: 0x4bceb0, Func Offset: 0x140
	// Line 415, Address: 0x4bceb8, Func Offset: 0x148
	// Line 439, Address: 0x4bcec0, Func Offset: 0x150
	// Line 429, Address: 0x4bcf04, Func Offset: 0x194
	// Line 439, Address: 0x4bcf0c, Func Offset: 0x19c
	// Line 429, Address: 0x4bcf30, Func Offset: 0x1c0
	// Line 439, Address: 0x4bcf34, Func Offset: 0x1c4
	// Line 429, Address: 0x4bcf38, Func Offset: 0x1c8
	// Line 439, Address: 0x4bcf48, Func Offset: 0x1d8
	// Line 429, Address: 0x4bcf54, Func Offset: 0x1e4
	// Line 439, Address: 0x4bcf5c, Func Offset: 0x1ec
	// Line 424, Address: 0x4bcf78, Func Offset: 0x208
	// Line 425, Address: 0x4bcf7c, Func Offset: 0x20c
	// Line 439, Address: 0x4bcf84, Func Offset: 0x214
	// Line 429, Address: 0x4bcf98, Func Offset: 0x228
	// Line 439, Address: 0x4bcfa0, Func Offset: 0x230
	// Line 429, Address: 0x4bcfa8, Func Offset: 0x238
	// Line 439, Address: 0x4bcfb0, Func Offset: 0x240
	// Line 436, Address: 0x4bcfc4, Func Offset: 0x254
	// Line 439, Address: 0x4bcfcc, Func Offset: 0x25c
	// Line 436, Address: 0x4bcfd4, Func Offset: 0x264
	// Line 440, Address: 0x4bcfdc, Func Offset: 0x26c
	// Func End, Address: 0x4bcff8, Func Offset: 0x288
}

// NCIN_HuffNPuff_Twk__11IntroPopperFPCcP9NCINEntry
// Start address: 0x4bd000
void NCIN_HuffNPuff_Twk()
{
	// Line 377, Address: 0x4bd000, Func Offset: 0
	// Func End, Address: 0x4bd008, Func Offset: 0x8
}

// NCIN_HuffNPuff_AR__11IntroPopperFPC12zCutsceneMgrP9NCINEntryP8RpAtomicP11RwMatrixTagUiUi
// Start address: 0x4bd010
void NCIN_HuffNPuff_AR(NCINEntry* fxrec, RwMatrixTag* animMat, uint32 animIndex)
{
	int32 idx_bone;
	xMat4x3* mat_root;
	xMat4x3* mat_bone;
	xVec3 pos_emit;
	// Line 347, Address: 0x4bd010, Func Offset: 0
	// Line 349, Address: 0x4bd018, Func Offset: 0x8
	// Line 352, Address: 0x4bd024, Func Offset: 0x14
	// Line 354, Address: 0x4bd028, Func Offset: 0x18
	// Line 356, Address: 0x4bd030, Func Offset: 0x20
	// Line 357, Address: 0x4bd044, Func Offset: 0x34
	// Line 361, Address: 0x4bd04c, Func Offset: 0x3c
	// Line 363, Address: 0x4bd05c, Func Offset: 0x4c
	// Line 358, Address: 0x4bd074, Func Offset: 0x64
	// Line 363, Address: 0x4bd078, Func Offset: 0x68
	// Line 358, Address: 0x4bd080, Func Offset: 0x70
	// Line 363, Address: 0x4bd084, Func Offset: 0x74
	// Line 358, Address: 0x4bd08c, Func Offset: 0x7c
	// Line 364, Address: 0x4bd098, Func Offset: 0x88
	// Func End, Address: 0x4bd0a4, Func Offset: 0x94
}

// NCIN_HuffNPuff_Upd__11IntroPopperFPC12zCutsceneMgrP9NCINEntryi
// Start address: 0x4bd0b0
void NCIN_HuffNPuff_Upd(NCINEntry* fxrec, int32 killit)
{
	// Line 316, Address: 0x4bd0b0, Func Offset: 0
	// Line 326, Address: 0x4bd0bc, Func Offset: 0xc
	// Line 341, Address: 0x4bd0c4, Func Offset: 0x14
	// Line 317, Address: 0x4bd0d0, Func Offset: 0x20
	// Line 318, Address: 0x4bd0d4, Func Offset: 0x24
	// Line 341, Address: 0x4bd0dc, Func Offset: 0x2c
	// Line 327, Address: 0x4bd0e0, Func Offset: 0x30
	// Line 341, Address: 0x4bd0e4, Func Offset: 0x34
	// Line 342, Address: 0x4bd0e8, Func Offset: 0x38
	// Func End, Address: 0x4bd0f0, Func Offset: 0x40
}

// NCIN_PopGround_Twk__11IntroPopperFPCcP9NCINEntry
// Start address: 0x4bd0f0
void NCIN_PopGround_Twk()
{
	// Line 305, Address: 0x4bd0f0, Func Offset: 0
	// Func End, Address: 0x4bd0f8, Func Offset: 0x8
}

// NCIN_PopGround_AR__11IntroPopperFPC12zCutsceneMgrP9NCINEntryP8RpAtomicP11RwMatrixTagUiUi
// Start address: 0x4bd100
void NCIN_PopGround_AR(NCINEntry* fxrec, RwMatrixTag* animMat, uint32 animIndex)
{
	xVec3 pos_emit;
	int32 idx_bone;
	xMat4x3* mat_root;
	// Line 273, Address: 0x4bd100, Func Offset: 0
	// Line 275, Address: 0x4bd108, Func Offset: 0x8
	// Line 278, Address: 0x4bd114, Func Offset: 0x14
	// Line 279, Address: 0x4bd12c, Func Offset: 0x2c
	// Line 280, Address: 0x4bd138, Func Offset: 0x38
	// Line 283, Address: 0x4bd13c, Func Offset: 0x3c
	// Line 284, Address: 0x4bd158, Func Offset: 0x58
	// Line 285, Address: 0x4bd160, Func Offset: 0x60
	// Line 289, Address: 0x4bd190, Func Offset: 0x90
	// Line 292, Address: 0x4bd1a0, Func Offset: 0xa0
	// Func End, Address: 0x4bd1ac, Func Offset: 0xac
}

// NCIN_PopGround_Upd__11IntroPopperFPC12zCutsceneMgrP9NCINEntryi
// Start address: 0x4bd1b0
void NCIN_PopGround_Upd(NCINEntry* fxrec, int32 killit)
{
	// Line 242, Address: 0x4bd1b0, Func Offset: 0
	// Line 252, Address: 0x4bd1bc, Func Offset: 0xc
	// Line 267, Address: 0x4bd1c4, Func Offset: 0x14
	// Line 243, Address: 0x4bd1d0, Func Offset: 0x20
	// Line 244, Address: 0x4bd1d4, Func Offset: 0x24
	// Line 267, Address: 0x4bd1dc, Func Offset: 0x2c
	// Line 253, Address: 0x4bd1e0, Func Offset: 0x30
	// Line 267, Address: 0x4bd1e4, Func Offset: 0x34
	// Line 268, Address: 0x4bd1e8, Func Offset: 0x38
	// Func End, Address: 0x4bd1f0, Func Offset: 0x40
}

