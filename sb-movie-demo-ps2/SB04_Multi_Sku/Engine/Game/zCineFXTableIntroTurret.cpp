



void NCIN_MissileBoom_Upd(NCINEntry* fxrec, int32 killit);
void NCIN_TurMissileLaunch_Upd(NCINEntry* fxrec, int32 killit);

// NCIN_MissileBoom_Upd__11IntroTurretFPC12zCutsceneMgrP9NCINEntryi
// Start address: 0x4bc630
void NCIN_MissileBoom_Upd(NCINEntry* fxrec, int32 killit)
{
	NCINHaz* storage;
	zNMEHazard* haz;
	int32 rc;
	xVec3 pos_orig;
	float32 tym;
	// Line 202, Address: 0x4bc630, Func Offset: 0
	// Line 210, Address: 0x4bc648, Func Offset: 0x18
	// Line 230, Address: 0x4bc650, Func Offset: 0x20
	// Line 232, Address: 0x4bc660, Func Offset: 0x30
	// Line 233, Address: 0x4bc66c, Func Offset: 0x3c
	// Line 237, Address: 0x4bc674, Func Offset: 0x44
	// Line 239, Address: 0x4bc67c, Func Offset: 0x4c
	// Line 243, Address: 0x4bc684, Func Offset: 0x54
	// Line 252, Address: 0x4bc688, Func Offset: 0x58
	// Line 247, Address: 0x4bc68c, Func Offset: 0x5c
	// Line 252, Address: 0x4bc690, Func Offset: 0x60
	// Line 247, Address: 0x4bc694, Func Offset: 0x64
	// Line 249, Address: 0x4bc6a8, Func Offset: 0x78
	// Line 251, Address: 0x4bc6c0, Func Offset: 0x90
	// Line 252, Address: 0x4bc6c4, Func Offset: 0x94
	// Line 253, Address: 0x4bc6dc, Func Offset: 0xac
	// Line 256, Address: 0x4bc6f8, Func Offset: 0xc8
	// Line 259, Address: 0x4bc704, Func Offset: 0xd4
	// Line 267, Address: 0x4bc70c, Func Offset: 0xdc
	// Line 278, Address: 0x4bc714, Func Offset: 0xe4
	// Line 283, Address: 0x4bc720, Func Offset: 0xf0
	// Line 211, Address: 0x4bc72c, Func Offset: 0xfc
	// Line 283, Address: 0x4bc730, Func Offset: 0x100
	// Line 213, Address: 0x4bc744, Func Offset: 0x114
	// Line 283, Address: 0x4bc750, Func Offset: 0x120
	// Line 214, Address: 0x4bc75c, Func Offset: 0x12c
	// Line 283, Address: 0x4bc760, Func Offset: 0x130
	// Line 222, Address: 0x4bc764, Func Offset: 0x134
	// Line 283, Address: 0x4bc76c, Func Offset: 0x13c
	// Line 268, Address: 0x4bc770, Func Offset: 0x140
	// Line 283, Address: 0x4bc774, Func Offset: 0x144
	// Line 284, Address: 0x4bc778, Func Offset: 0x148
	// Func End, Address: 0x4bc790, Func Offset: 0x160
}

// NCIN_TurMissileLaunch_Upd__11IntroTurretFPC12zCutsceneMgrP9NCINEntryi
// Start address: 0x4bc790
void NCIN_TurMissileLaunch_Upd(NCINEntry* fxrec, int32 killit)
{
	NCINHaz* storage;
	zNMEHazard* haz;
	int32 rc;
	HAZLob* hazlob;
	xVec3 pos_orig;
	xVec3 pos_dest;
	float32 tym;
	xVec3 diff;
	// Line 105, Address: 0x4bc790, Func Offset: 0
	// Line 113, Address: 0x4bc7a8, Func Offset: 0x18
	// Line 133, Address: 0x4bc7b0, Func Offset: 0x20
	// Line 180, Address: 0x4bc7c4, Func Offset: 0x34
	// Line 191, Address: 0x4bc7cc, Func Offset: 0x3c
	// Line 196, Address: 0x4bc7d8, Func Offset: 0x48
	// Line 114, Address: 0x4bc7e4, Func Offset: 0x54
	// Line 196, Address: 0x4bc7e8, Func Offset: 0x58
	// Line 116, Address: 0x4bc7fc, Func Offset: 0x6c
	// Line 196, Address: 0x4bc808, Func Offset: 0x78
	// Line 117, Address: 0x4bc814, Func Offset: 0x84
	// Line 196, Address: 0x4bc818, Func Offset: 0x88
	// Line 125, Address: 0x4bc81c, Func Offset: 0x8c
	// Line 196, Address: 0x4bc824, Func Offset: 0x94
	// Line 135, Address: 0x4bc82c, Func Offset: 0x9c
	// Line 196, Address: 0x4bc830, Func Offset: 0xa0
	// Line 150, Address: 0x4bc84c, Func Offset: 0xbc
	// Line 196, Address: 0x4bc850, Func Offset: 0xc0
	// Line 150, Address: 0x4bc854, Func Offset: 0xc4
	// Line 156, Address: 0x4bc858, Func Offset: 0xc8
	// Line 149, Address: 0x4bc85c, Func Offset: 0xcc
	// Line 150, Address: 0x4bc860, Func Offset: 0xd0
	// Line 196, Address: 0x4bc868, Func Offset: 0xd8
	// Line 156, Address: 0x4bc894, Func Offset: 0x104
	// Line 196, Address: 0x4bc898, Func Offset: 0x108
	// Line 169, Address: 0x4bc8ac, Func Offset: 0x11c
	// Line 196, Address: 0x4bc8b0, Func Offset: 0x120
	// Line 161, Address: 0x4bc8d8, Func Offset: 0x148
	// Line 196, Address: 0x4bc8dc, Func Offset: 0x14c
	// Line 161, Address: 0x4bc8f8, Func Offset: 0x168
	// Line 196, Address: 0x4bc8fc, Func Offset: 0x16c
	// Line 160, Address: 0x4bc920, Func Offset: 0x190
	// Line 161, Address: 0x4bc924, Func Offset: 0x194
	// Line 196, Address: 0x4bc928, Func Offset: 0x198
	// Line 161, Address: 0x4bc92c, Func Offset: 0x19c
	// Line 158, Address: 0x4bc930, Func Offset: 0x1a0
	// Line 196, Address: 0x4bc934, Func Offset: 0x1a4
	// Line 158, Address: 0x4bc940, Func Offset: 0x1b0
	// Line 196, Address: 0x4bc944, Func Offset: 0x1b4
	// Line 158, Address: 0x4bc948, Func Offset: 0x1b8
	// Line 196, Address: 0x4bc94c, Func Offset: 0x1bc
	// Line 162, Address: 0x4bc978, Func Offset: 0x1e8
	// Line 196, Address: 0x4bc988, Func Offset: 0x1f8
	// Line 181, Address: 0x4bc98c, Func Offset: 0x1fc
	// Line 196, Address: 0x4bc990, Func Offset: 0x200
	// Line 197, Address: 0x4bc994, Func Offset: 0x204
	// Func End, Address: 0x4bc9ac, Func Offset: 0x21c
}

