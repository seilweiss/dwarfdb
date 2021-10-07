



void NCIN_BuckExplode_AR(NCINEntry* fxrec, RwMatrixTag* animMat, uint32 animIndex);
void NCIN_BuckExplode_Upd(NCINEntry* fxrec, int32 killit);
void NCIN_SpawnballLaunch_Upd(NCINEntry* fxrec, int32 killit);

// NCIN_BuckExplode_AR__14IntroBuckOTronFPC12zCutsceneMgrP9NCINEntryP8RpAtomicP11RwMatrixTagUiUi
// Start address: 0x4bdd20
void NCIN_BuckExplode_AR(NCINEntry* fxrec, RwMatrixTag* animMat, uint32 animIndex)
{
	NCINHaz* storage;
	zNMEHazard* haz;
	int32 rc;
	xMat4x3* mat_root;
	xVec3 pos_emit;
	int32 idx_bone;
	xMat4x3* mat_bone;
	xVec3 vec_offset;
	float32 tym;
	// Line 265, Address: 0x4bdd20, Func Offset: 0
	// Line 267, Address: 0x4bdd3c, Func Offset: 0x1c
	// Line 273, Address: 0x4bdd48, Func Offset: 0x28
	// Line 274, Address: 0x4bdd58, Func Offset: 0x38
	// Line 276, Address: 0x4bdd60, Func Offset: 0x40
	// Line 277, Address: 0x4bdd6c, Func Offset: 0x4c
	// Line 281, Address: 0x4bdd74, Func Offset: 0x54
	// Line 283, Address: 0x4bdd80, Func Offset: 0x60
	// Line 287, Address: 0x4bdd88, Func Offset: 0x68
	// Line 291, Address: 0x4bdd8c, Func Offset: 0x6c
	// Line 298, Address: 0x4bdda4, Func Offset: 0x84
	// Line 299, Address: 0x4bdda8, Func Offset: 0x88
	// Line 303, Address: 0x4bddb0, Func Offset: 0x90
	// Line 306, Address: 0x4bddb4, Func Offset: 0x94
	// Line 303, Address: 0x4bddb8, Func Offset: 0x98
	// Line 306, Address: 0x4bddbc, Func Offset: 0x9c
	// Line 304, Address: 0x4bddc0, Func Offset: 0xa0
	// Line 305, Address: 0x4bddcc, Func Offset: 0xac
	// Line 304, Address: 0x4bddd8, Func Offset: 0xb8
	// Line 305, Address: 0x4bdde4, Func Offset: 0xc4
	// Line 306, Address: 0x4bddf0, Func Offset: 0xd0
	// Line 307, Address: 0x4bde4c, Func Offset: 0x12c
	// Line 308, Address: 0x4bdea0, Func Offset: 0x180
	// Line 309, Address: 0x4bdef0, Func Offset: 0x1d0
	// Line 310, Address: 0x4bdef8, Func Offset: 0x1d8
	// Line 313, Address: 0x4bdf28, Func Offset: 0x208
	// Line 315, Address: 0x4bdf2c, Func Offset: 0x20c
	// Line 321, Address: 0x4bdf50, Func Offset: 0x230
	// Line 325, Address: 0x4bdf74, Func Offset: 0x254
	// Line 333, Address: 0x4bdf78, Func Offset: 0x258
	// Line 335, Address: 0x4bdf8c, Func Offset: 0x26c
	// Line 300, Address: 0x4bdfa8, Func Offset: 0x288
	// Line 316, Address: 0x4bdfb0, Func Offset: 0x290
	// Line 335, Address: 0x4bdfb8, Func Offset: 0x298
	// Line 316, Address: 0x4bdfc0, Func Offset: 0x2a0
	// Line 336, Address: 0x4bdfc8, Func Offset: 0x2a8
	// Func End, Address: 0x4bdfe4, Func Offset: 0x2c4
}

// NCIN_BuckExplode_Upd__14IntroBuckOTronFPC12zCutsceneMgrP9NCINEntryi
// Start address: 0x4bdff0
void NCIN_BuckExplode_Upd(NCINEntry* fxrec, int32 killit)
{
	NCINHaz* storage;
	// Line 226, Address: 0x4bdff0, Func Offset: 0
	// Line 245, Address: 0x4bdff8, Func Offset: 0x8
	// Line 249, Address: 0x4be008, Func Offset: 0x18
	// Line 251, Address: 0x4be014, Func Offset: 0x24
	// Line 227, Address: 0x4be020, Func Offset: 0x30
	// Line 251, Address: 0x4be024, Func Offset: 0x34
	// Line 229, Address: 0x4be038, Func Offset: 0x48
	// Line 251, Address: 0x4be044, Func Offset: 0x54
	// Line 230, Address: 0x4be050, Func Offset: 0x60
	// Line 251, Address: 0x4be054, Func Offset: 0x64
	// Line 260, Address: 0x4be05c, Func Offset: 0x6c
	// Func End, Address: 0x4be064, Func Offset: 0x74
}

// NCIN_SpawnballLaunch_Upd__14IntroBuckOTronFPC12zCutsceneMgrP9NCINEntryi
// Start address: 0x4be070
void NCIN_SpawnballLaunch_Upd(NCINEntry* fxrec, int32 killit)
{
	NCINHaz* storage;
	zNMEHazard* haz;
	int32 rc;
	HAZLob* hazlob;
	xVec3 pos_orig;
	xVec3 pos_dest;
	float32 tym;
	xVec3 diff;
	// Line 109, Address: 0x4be070, Func Offset: 0
	// Line 117, Address: 0x4be088, Func Offset: 0x18
	// Line 137, Address: 0x4be090, Func Offset: 0x20
	// Line 183, Address: 0x4be0a4, Func Offset: 0x34
	// Line 193, Address: 0x4be0ac, Func Offset: 0x3c
	// Line 198, Address: 0x4be0bc, Func Offset: 0x4c
	// Line 118, Address: 0x4be0c8, Func Offset: 0x58
	// Line 198, Address: 0x4be0cc, Func Offset: 0x5c
	// Line 120, Address: 0x4be0e0, Func Offset: 0x70
	// Line 198, Address: 0x4be0ec, Func Offset: 0x7c
	// Line 121, Address: 0x4be0f8, Func Offset: 0x88
	// Line 198, Address: 0x4be0fc, Func Offset: 0x8c
	// Line 123, Address: 0x4be108, Func Offset: 0x98
	// Line 198, Address: 0x4be10c, Func Offset: 0x9c
	// Line 129, Address: 0x4be110, Func Offset: 0xa0
	// Line 198, Address: 0x4be118, Func Offset: 0xa8
	// Line 139, Address: 0x4be120, Func Offset: 0xb0
	// Line 198, Address: 0x4be124, Func Offset: 0xb4
	// Line 154, Address: 0x4be140, Func Offset: 0xd0
	// Line 198, Address: 0x4be144, Func Offset: 0xd4
	// Line 154, Address: 0x4be148, Func Offset: 0xd8
	// Line 160, Address: 0x4be14c, Func Offset: 0xdc
	// Line 153, Address: 0x4be150, Func Offset: 0xe0
	// Line 154, Address: 0x4be154, Func Offset: 0xe4
	// Line 198, Address: 0x4be15c, Func Offset: 0xec
	// Line 160, Address: 0x4be188, Func Offset: 0x118
	// Line 198, Address: 0x4be18c, Func Offset: 0x11c
	// Line 173, Address: 0x4be1a0, Func Offset: 0x130
	// Line 198, Address: 0x4be1a4, Func Offset: 0x134
	// Line 165, Address: 0x4be1cc, Func Offset: 0x15c
	// Line 198, Address: 0x4be1d0, Func Offset: 0x160
	// Line 165, Address: 0x4be1ec, Func Offset: 0x17c
	// Line 198, Address: 0x4be1f0, Func Offset: 0x180
	// Line 164, Address: 0x4be214, Func Offset: 0x1a4
	// Line 165, Address: 0x4be218, Func Offset: 0x1a8
	// Line 198, Address: 0x4be21c, Func Offset: 0x1ac
	// Line 165, Address: 0x4be220, Func Offset: 0x1b0
	// Line 162, Address: 0x4be224, Func Offset: 0x1b4
	// Line 198, Address: 0x4be228, Func Offset: 0x1b8
	// Line 162, Address: 0x4be234, Func Offset: 0x1c4
	// Line 198, Address: 0x4be238, Func Offset: 0x1c8
	// Line 162, Address: 0x4be23c, Func Offset: 0x1cc
	// Line 198, Address: 0x4be240, Func Offset: 0x1d0
	// Line 166, Address: 0x4be26c, Func Offset: 0x1fc
	// Line 198, Address: 0x4be27c, Func Offset: 0x20c
	// Line 184, Address: 0x4be280, Func Offset: 0x210
	// Line 198, Address: 0x4be284, Func Offset: 0x214
	// Line 199, Address: 0x4be288, Func Offset: 0x218
	// Func End, Address: 0x4be2a0, Func Offset: 0x230
}

