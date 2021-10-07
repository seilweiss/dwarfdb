



void AddTables();
void zCineFXCutscene(zCutsceneMgr* csnmgr);
void zCineFXCutsceneDone(zCutsceneMgr* csnmgr);
int32 zCineFXCutscenePrep(zCutsceneMgr* csnmgr);
NCINEntry* zCineFXCutscenePickTable(zCutsceneMgr* csnmgr);
void zCineFXRegisterTable(NCINMap* maplist);
void zCineFXSceneSetup();
void zCineFXShutdown();
void zCineFXStartup();
void UpdatedAnimated(RpAtomic* model, RwMatrixTag* animMat, uint32 animIndex, uint32 dataIndex);
void CanRenderNow();

// AddTables__Fv
// Start address: 0x4c1630
void AddTables()
{
	// Line 618, Address: 0x4c1630, Func Offset: 0
	// Line 619, Address: 0x4c1634, Func Offset: 0x4
	// Line 618, Address: 0x4c1638, Func Offset: 0x8
	// Line 619, Address: 0x4c163c, Func Offset: 0xc
	// Line 621, Address: 0x4c1644, Func Offset: 0x14
	// Line 623, Address: 0x4c1650, Func Offset: 0x20
	// Line 624, Address: 0x4c165c, Func Offset: 0x2c
	// Line 625, Address: 0x4c1668, Func Offset: 0x38
	// Line 626, Address: 0x4c1674, Func Offset: 0x44
	// Line 627, Address: 0x4c1680, Func Offset: 0x50
	// Line 628, Address: 0x4c168c, Func Offset: 0x5c
	// Line 629, Address: 0x4c1698, Func Offset: 0x68
	// Line 630, Address: 0x4c16a4, Func Offset: 0x74
	// Line 631, Address: 0x4c16b0, Func Offset: 0x80
	// Line 633, Address: 0x4c16bc, Func Offset: 0x8c
	// Line 634, Address: 0x4c16c8, Func Offset: 0x98
	// Line 635, Address: 0x4c16d4, Func Offset: 0xa4
	// Line 636, Address: 0x4c16e0, Func Offset: 0xb0
	// Line 638, Address: 0x4c16ec, Func Offset: 0xbc
	// Line 639, Address: 0x4c16f8, Func Offset: 0xc8
	// Line 640, Address: 0x4c1704, Func Offset: 0xd4
	// Line 641, Address: 0x4c1710, Func Offset: 0xe0
	// Line 642, Address: 0x4c171c, Func Offset: 0xec
	// Line 643, Address: 0x4c1728, Func Offset: 0xf8
	// Line 646, Address: 0x4c1734, Func Offset: 0x104
	// Func End, Address: 0x4c1740, Func Offset: 0x110
}

// zCineFXCutscene__FPC6xScenefPC12zCutsceneMgr
// Start address: 0x4c1740
void zCineFXCutscene(zCutsceneMgr* csnmgr)
{
	xCutscene* csn;
	NCINEntry* fxtab;
	int32 need_animated;
	int32 need_render;
	NCINEntry* nextrec;
	NCINEntry* fxrec;
	int32 flags;
	// Line 390, Address: 0x4c1740, Func Offset: 0
	// Line 392, Address: 0x4c174c, Func Offset: 0xc
	// Line 390, Address: 0x4c1750, Func Offset: 0x10
	// Line 396, Address: 0x4c1760, Func Offset: 0x20
	// Line 390, Address: 0x4c1764, Func Offset: 0x24
	// Line 396, Address: 0x4c1768, Func Offset: 0x28
	// Line 397, Address: 0x4c1774, Func Offset: 0x34
	// Line 405, Address: 0x4c177c, Func Offset: 0x3c
	// Line 400, Address: 0x4c1780, Func Offset: 0x40
	// Line 405, Address: 0x4c1784, Func Offset: 0x44
	// Line 406, Address: 0x4c178c, Func Offset: 0x4c
	// Line 407, Address: 0x4c1790, Func Offset: 0x50
	// Line 414, Address: 0x4c1794, Func Offset: 0x54
	// Line 416, Address: 0x4c17ac, Func Offset: 0x6c
	// Line 420, Address: 0x4c17b8, Func Offset: 0x78
	// Line 428, Address: 0x4c17c4, Func Offset: 0x84
	// Line 429, Address: 0x4c17c8, Func Offset: 0x88
	// Line 439, Address: 0x4c17dc, Func Offset: 0x9c
	// Line 440, Address: 0x4c17e4, Func Offset: 0xa4
	// Line 398, Address: 0x4c17f0, Func Offset: 0xb0
	// Line 420, Address: 0x4c17f8, Func Offset: 0xb8
	// Line 440, Address: 0x4c17fc, Func Offset: 0xbc
	// Line 423, Address: 0x4c1808, Func Offset: 0xc8
	// Line 440, Address: 0x4c1810, Func Offset: 0xd0
	// Line 425, Address: 0x4c181c, Func Offset: 0xdc
	// Line 427, Address: 0x4c1824, Func Offset: 0xe4
	// Line 441, Address: 0x4c182c, Func Offset: 0xec
	// Line 447, Address: 0x4c1830, Func Offset: 0xf0
	// Line 449, Address: 0x4c1834, Func Offset: 0xf4
	// Line 447, Address: 0x4c183c, Func Offset: 0xfc
	// Line 449, Address: 0x4c1844, Func Offset: 0x104
	// Line 451, Address: 0x4c1850, Func Offset: 0x110
	// Line 453, Address: 0x4c1860, Func Offset: 0x120
	// Line 455, Address: 0x4c1870, Func Offset: 0x130
	// Line 461, Address: 0x4c1880, Func Offset: 0x140
	// Line 470, Address: 0x4c1890, Func Offset: 0x150
	// Line 471, Address: 0x4c189c, Func Offset: 0x15c
	// Line 472, Address: 0x4c18a0, Func Offset: 0x160
	// Line 473, Address: 0x4c18ac, Func Offset: 0x16c
	// Line 475, Address: 0x4c18b0, Func Offset: 0x170
	// Line 484, Address: 0x4c18c4, Func Offset: 0x184
	// Line 485, Address: 0x4c18cc, Func Offset: 0x18c
	// Line 487, Address: 0x4c18d0, Func Offset: 0x190
	// Line 488, Address: 0x4c18d8, Func Offset: 0x198
	// Line 489, Address: 0x4c18e0, Func Offset: 0x1a0
	// Line 495, Address: 0x4c18e8, Func Offset: 0x1a8
	// Line 452, Address: 0x4c18f0, Func Offset: 0x1b0
	// Line 456, Address: 0x4c1900, Func Offset: 0x1c0
	// Line 495, Address: 0x4c1910, Func Offset: 0x1d0
	// Line 496, Address: 0x4c1928, Func Offset: 0x1e8
	// Func End, Address: 0x4c194c, Func Offset: 0x20c
}

// zCineFXCutsceneDone__FPC6xScenefPC12zCutsceneMgr
// Start address: 0x4c1950
void zCineFXCutsceneDone(zCutsceneMgr* csnmgr)
{
	NCINEntry* fxtab;
	NCINEntry* nextrec;
	NCINEntry* fxrec;
	// Line 346, Address: 0x4c1950, Func Offset: 0
	// Line 348, Address: 0x4c1964, Func Offset: 0x14
	// Line 349, Address: 0x4c1974, Func Offset: 0x24
	// Line 354, Address: 0x4c197c, Func Offset: 0x2c
	// Line 355, Address: 0x4c1990, Func Offset: 0x40
	// Line 358, Address: 0x4c1998, Func Offset: 0x48
	// Line 362, Address: 0x4c19a4, Func Offset: 0x54
	// Line 363, Address: 0x4c19b0, Func Offset: 0x60
	// Line 364, Address: 0x4c19b4, Func Offset: 0x64
	// Line 367, Address: 0x4c19b8, Func Offset: 0x68
	// Line 369, Address: 0x4c19c4, Func Offset: 0x74
	// Line 376, Address: 0x4c19d0, Func Offset: 0x80
	// Line 377, Address: 0x4c19e4, Func Offset: 0x94
	// Line 381, Address: 0x4c19f4, Func Offset: 0xa4
	// Line 384, Address: 0x4c1a08, Func Offset: 0xb8
	// Func End, Address: 0x4c1a20, Func Offset: 0xd0
}

// zCineFXCutscenePrep__FPC6xScenefPC12zCutsceneMgr
// Start address: 0x4c1a20
int32 zCineFXCutscenePrep(zCutsceneMgr* csnmgr)
{
	NCINEntry* fxtab;
	NCINEntry* nextrec;
	NCINEntry* fxrec;
	// Line 303, Address: 0x4c1a20, Func Offset: 0
	// Line 305, Address: 0x4c1a34, Func Offset: 0x14
	// Line 306, Address: 0x4c1a3c, Func Offset: 0x1c
	// Line 311, Address: 0x4c1a44, Func Offset: 0x24
	// Line 312, Address: 0x4c1a58, Func Offset: 0x38
	// Line 315, Address: 0x4c1a60, Func Offset: 0x40
	// Line 318, Address: 0x4c1a64, Func Offset: 0x44
	// Line 315, Address: 0x4c1a68, Func Offset: 0x48
	// Line 319, Address: 0x4c1a74, Func Offset: 0x54
	// Line 338, Address: 0x4c1a80, Func Offset: 0x60
	// Line 307, Address: 0x4c1a88, Func Offset: 0x68
	// Line 331, Address: 0x4c1a90, Func Offset: 0x70
	// Line 334, Address: 0x4c1a94, Func Offset: 0x74
	// Line 338, Address: 0x4c1a98, Func Offset: 0x78
	// Line 334, Address: 0x4c1a9c, Func Offset: 0x7c
	// Line 338, Address: 0x4c1aa4, Func Offset: 0x84
	// Line 339, Address: 0x4c1ac0, Func Offset: 0xa0
	// Func End, Address: 0x4c1ad4, Func Offset: 0xb4
}

// zCineFXCutscenePickTable__FPC12zCutsceneMgr
// Start address: 0x4c1ae0
NCINEntry* zCineFXCutscenePickTable(zCutsceneMgr* csnmgr)
{
	NCINEntry* da_fxtab;
	int32 i;
	NCINMap* cutrec;
	// Line 280, Address: 0x4c1ae0, Func Offset: 0
	// Line 279, Address: 0x4c1ae4, Func Offset: 0x4
	// Line 280, Address: 0x4c1ae8, Func Offset: 0x8
	// Line 285, Address: 0x4c1af0, Func Offset: 0x10
	// Line 281, Address: 0x4c1af4, Func Offset: 0x14
	// Line 282, Address: 0x4c1af8, Func Offset: 0x18
	// Line 285, Address: 0x4c1b00, Func Offset: 0x20
	// Line 287, Address: 0x4c1b14, Func Offset: 0x34
	// Line 291, Address: 0x4c1b18, Func Offset: 0x38
	// Line 292, Address: 0x4c1b38, Func Offset: 0x58
	// Func End, Address: 0x4c1b40, Func Offset: 0x60
}

// zCineFXRegisterTable__FP7NCINMap
// Start address: 0x4c1b40
void zCineFXRegisterTable(NCINMap* maplist)
{
	NCINMap* maprec;
	int32 i;
	// Line 239, Address: 0x4c1b40, Func Offset: 0
	// Line 242, Address: 0x4c1b50, Func Offset: 0x10
	// Line 246, Address: 0x4c1b5c, Func Offset: 0x1c
	// Line 247, Address: 0x4c1b68, Func Offset: 0x28
	// Line 251, Address: 0x4c1b84, Func Offset: 0x44
	// Line 254, Address: 0x4c1b88, Func Offset: 0x48
	// Line 257, Address: 0x4c1b98, Func Offset: 0x58
	// Line 259, Address: 0x4c1ba0, Func Offset: 0x60
	// Line 263, Address: 0x4c1bb0, Func Offset: 0x70
	// Line 264, Address: 0x4c1bb4, Func Offset: 0x74
	// Line 267, Address: 0x4c1bc0, Func Offset: 0x80
	// Func End, Address: 0x4c1bd4, Func Offset: 0x94
}

// zCineFXSceneSetup__Fv
// Start address: 0x4c1be0
void zCineFXSceneSetup()
{
	// Line 223, Address: 0x4c1be0, Func Offset: 0
	// Func End, Address: 0x4c1be8, Func Offset: 0x8
}

// zCineFXShutdown__Fv
// Start address: 0x4c1bf0
void zCineFXShutdown()
{
	// Line 216, Address: 0x4c1bf0, Func Offset: 0
	// Func End, Address: 0x4c1bf8, Func Offset: 0x8
}

// zCineFXStartup__Fv
// Start address: 0x4c1c00
void zCineFXStartup()
{
	int8 @6225;
	NCINBeNosey nozey_npc_cinematics;
	// Line 202, Address: 0x4c1c00, Func Offset: 0
	// Line 205, Address: 0x4c1c08, Func Offset: 0x8
	// Line 206, Address: 0x4c1c14, Func Offset: 0x14
	// Line 209, Address: 0x4c1c1c, Func Offset: 0x1c
	// Line 210, Address: 0x4c1c24, Func Offset: 0x24
	// Line 205, Address: 0x4c1c38, Func Offset: 0x38
	// Line 211, Address: 0x4c1c44, Func Offset: 0x44
	// Func End, Address: 0x4c1c4c, Func Offset: 0x4c
}

// UpdatedAnimated__11NCINBeNoseyFP8RpAtomicP11RwMatrixTagUiUiRUi
// Start address: 0x4c1c50
void NCINBeNosey::UpdatedAnimated(RpAtomic* model, RwMatrixTag* animMat, uint32 animIndex, uint32 dataIndex)
{
	zCutsceneMgr* csnmgr;
	NCINEntry* fxtab;
	NCINEntry* nextrec;
	NCINEntry* fxrec;
	// Line 158, Address: 0x4c1c50, Func Offset: 0
	// Line 159, Address: 0x4c1c7c, Func Offset: 0x2c
	// Line 162, Address: 0x4c1c80, Func Offset: 0x30
	// Line 165, Address: 0x4c1c84, Func Offset: 0x34
	// Line 167, Address: 0x4c1c8c, Func Offset: 0x3c
	// Line 172, Address: 0x4c1c94, Func Offset: 0x44
	// Line 173, Address: 0x4c1ca0, Func Offset: 0x50
	// Line 174, Address: 0x4c1ca4, Func Offset: 0x54
	// Line 177, Address: 0x4c1ca8, Func Offset: 0x58
	// Line 179, Address: 0x4c1cb0, Func Offset: 0x60
	// Line 186, Address: 0x4c1cc0, Func Offset: 0x70
	// Line 189, Address: 0x4c1cd4, Func Offset: 0x84
	// Line 192, Address: 0x4c1ce8, Func Offset: 0x98
	// Func End, Address: 0x4c1d0c, Func Offset: 0xbc
}

// CanRenderNow__11NCINBeNoseyFv
// Start address: 0x4c1d10
void NCINBeNosey::CanRenderNow()
{
	zCutsceneMgr* csnmgr;
	NCINEntry* fxtab;
	NCINEntry* nextrec;
	NCINEntry* fxrec;
	// Line 123, Address: 0x4c1d10, Func Offset: 0
	// Line 124, Address: 0x4c1d20, Func Offset: 0x10
	// Line 130, Address: 0x4c1d24, Func Offset: 0x14
	// Line 132, Address: 0x4c1d2c, Func Offset: 0x1c
	// Line 137, Address: 0x4c1d34, Func Offset: 0x24
	// Line 138, Address: 0x4c1d40, Func Offset: 0x30
	// Line 139, Address: 0x4c1d44, Func Offset: 0x34
	// Line 142, Address: 0x4c1d48, Func Offset: 0x38
	// Line 144, Address: 0x4c1d50, Func Offset: 0x40
	// Line 148, Address: 0x4c1d60, Func Offset: 0x50
	// Line 150, Address: 0x4c1d68, Func Offset: 0x58
	// Line 153, Address: 0x4c1d78, Func Offset: 0x68
	// Func End, Address: 0x4c1d8c, Func Offset: 0x7c
}

