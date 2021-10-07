



void check_hide_entities();
void zCutsceneMgrUpdate(xBase* to, xScene* sc, float32 dt);
void zCutsceneMgrUpdateFX(zCutsceneMgr* t);
void zCutsceneMgrFinishExit(xBase* to);
void zCutsceneMgrFinishLoad(xBase* to);
void zCutsceneMgrEventCB(xBase* to, uint32 toEvent, float32* toParam);
void zCutsceneMgrPlayStart(zCutsceneMgr* t);
void zCutsceneMgrLoad();
void zCutsceneMgrSave();
void zCutsceneMgrInit(void* b, void* tasset);

// check_hide_entities__Fv
// Start address: 0x3859a0
void check_hide_entities()
{
	zScene& scene;
	zEnt** it;
	zEnt** end;
	zEnt* ent;
	zEnt* ent;
	// Line 961, Address: 0x3859a0, Func Offset: 0
	// Line 965, Address: 0x3859a4, Func Offset: 0x4
	// Line 961, Address: 0x3859a8, Func Offset: 0x8
	// Line 965, Address: 0x3859ac, Func Offset: 0xc
	// Line 961, Address: 0x3859b0, Func Offset: 0x10
	// Line 965, Address: 0x3859b8, Func Offset: 0x18
	// Line 968, Address: 0x3859ec, Func Offset: 0x4c
	// Line 971, Address: 0x3859fc, Func Offset: 0x5c
	// Line 969, Address: 0x385a00, Func Offset: 0x60
	// Line 971, Address: 0x385a04, Func Offset: 0x64
	// Line 973, Address: 0x385a08, Func Offset: 0x68
	// Line 974, Address: 0x385a14, Func Offset: 0x74
	// Line 976, Address: 0x385a1c, Func Offset: 0x7c
	// Line 978, Address: 0x385a24, Func Offset: 0x84
	// Line 979, Address: 0x385a2c, Func Offset: 0x8c
	// Line 980, Address: 0x385a38, Func Offset: 0x98
	// Line 981, Address: 0x385a44, Func Offset: 0xa4
	// Line 982, Address: 0x385a54, Func Offset: 0xb4
	// Line 983, Address: 0x385a5c, Func Offset: 0xbc
	// Line 984, Address: 0x385a64, Func Offset: 0xc4
	// Line 985, Address: 0x385a74, Func Offset: 0xd4
	// Line 990, Address: 0x385a84, Func Offset: 0xe4
	// Line 991, Address: 0x385a88, Func Offset: 0xe8
	// Line 995, Address: 0x385a98, Func Offset: 0xf8
	// Line 996, Address: 0x385aa4, Func Offset: 0x104
	// Line 997, Address: 0x385aa8, Func Offset: 0x108
	// Line 992, Address: 0x385ac4, Func Offset: 0x124
	// Line 997, Address: 0x385ac8, Func Offset: 0x128
	// Func End, Address: 0x385afc, Func Offset: 0x15c
}

// zCutsceneMgrUpdate__FP5xBaseP6xScenef
// Start address: 0x385b00
void zCutsceneMgrUpdate(xBase* to, xScene* sc, float32 dt)
{
	zCutsceneMgr* t;
	int32 csncount;
	int32 cnum;
	uint32 skipButtons;
	xRegion region;
	int32 doCineFX;
	float32 csnPlayTimeLimit;
	// Line 673, Address: 0x385b00, Func Offset: 0
	// Line 681, Address: 0x385b20, Func Offset: 0x20
	// Line 687, Address: 0x385b30, Func Offset: 0x30
	// Line 698, Address: 0x385b40, Func Offset: 0x40
	// Line 714, Address: 0x385b4c, Func Offset: 0x4c
	// Line 717, Address: 0x385b58, Func Offset: 0x58
	// Line 719, Address: 0x385b64, Func Offset: 0x64
	// Line 720, Address: 0x385b70, Func Offset: 0x70
	// Line 723, Address: 0x385b80, Func Offset: 0x80
	// Line 822, Address: 0x385b8c, Func Offset: 0x8c
	// Line 835, Address: 0x385b9c, Func Offset: 0x9c
	// Line 838, Address: 0x385ba8, Func Offset: 0xa8
	// Line 839, Address: 0x385bb4, Func Offset: 0xb4
	// Line 842, Address: 0x385bc4, Func Offset: 0xc4
	// Line 844, Address: 0x385bd8, Func Offset: 0xd8
	// Line 846, Address: 0x385c04, Func Offset: 0x104
	// Line 847, Address: 0x385c08, Func Offset: 0x108
	// Line 850, Address: 0x385c10, Func Offset: 0x110
	// Line 853, Address: 0x385c28, Func Offset: 0x128
	// Line 856, Address: 0x385c30, Func Offset: 0x130
	// Line 857, Address: 0x385c58, Func Offset: 0x158
	// Line 861, Address: 0x385c80, Func Offset: 0x180
	// Line 864, Address: 0x385ca4, Func Offset: 0x1a4
	// Line 867, Address: 0x385cb0, Func Offset: 0x1b0
	// Line 870, Address: 0x385cc0, Func Offset: 0x1c0
	// Line 872, Address: 0x385cd0, Func Offset: 0x1d0
	// Line 874, Address: 0x385ce0, Func Offset: 0x1e0
	// Line 877, Address: 0x385cf4, Func Offset: 0x1f4
	// Line 879, Address: 0x385d00, Func Offset: 0x200
	// Line 886, Address: 0x385d14, Func Offset: 0x214
	// Line 891, Address: 0x385d28, Func Offset: 0x228
	// Line 956, Address: 0x385d3c, Func Offset: 0x23c
	// Line 957, Address: 0x385d44, Func Offset: 0x244
	// Line 689, Address: 0x385d4c, Func Offset: 0x24c
	// Line 957, Address: 0x385d68, Func Offset: 0x268
	// Line 692, Address: 0x385d78, Func Offset: 0x278
	// Line 957, Address: 0x385d80, Func Offset: 0x280
	// Line 706, Address: 0x385da0, Func Offset: 0x2a0
	// Line 957, Address: 0x385da4, Func Offset: 0x2a4
	// Line 706, Address: 0x385db4, Func Offset: 0x2b4
	// Line 957, Address: 0x385db8, Func Offset: 0x2b8
	// Line 714, Address: 0x385de8, Func Offset: 0x2e8
	// Line 703, Address: 0x385df0, Func Offset: 0x2f0
	// Line 957, Address: 0x385df8, Func Offset: 0x2f8
	// Line 706, Address: 0x385e1c, Func Offset: 0x31c
	// Line 718, Address: 0x385e28, Func Offset: 0x328
	// Line 957, Address: 0x385e30, Func Offset: 0x330
	// Line 826, Address: 0x385e44, Func Offset: 0x344
	// Line 825, Address: 0x385e4c, Func Offset: 0x34c
	// Line 826, Address: 0x385e50, Func Offset: 0x350
	// Line 957, Address: 0x385e54, Func Offset: 0x354
	// Line 828, Address: 0x385e5c, Func Offset: 0x35c
	// Line 829, Address: 0x385e60, Func Offset: 0x360
	// Line 957, Address: 0x385e64, Func Offset: 0x364
	// Line 912, Address: 0x385e9c, Func Offset: 0x39c
	// Line 957, Address: 0x385ea0, Func Offset: 0x3a0
	// Line 923, Address: 0x385ea4, Func Offset: 0x3a4
	// Line 957, Address: 0x385eac, Func Offset: 0x3ac
	// Line 923, Address: 0x385eb0, Func Offset: 0x3b0
	// Line 957, Address: 0x385eb4, Func Offset: 0x3b4
	// Line 925, Address: 0x385ed4, Func Offset: 0x3d4
	// Line 940, Address: 0x385ed8, Func Offset: 0x3d8
	// Line 957, Address: 0x385ee0, Func Offset: 0x3e0
	// Line 844, Address: 0x385ef4, Func Offset: 0x3f4
	// Line 957, Address: 0x385f00, Func Offset: 0x400
	// Line 881, Address: 0x385f14, Func Offset: 0x414
	// Line 957, Address: 0x385f20, Func Offset: 0x420
	// Line 881, Address: 0x385f30, Func Offset: 0x430
	// Line 957, Address: 0x385f4c, Func Offset: 0x44c
	// Line 887, Address: 0x385f5c, Func Offset: 0x45c
	// Line 957, Address: 0x385f60, Func Offset: 0x460
	// Line 945, Address: 0x385f8c, Func Offset: 0x48c
	// Line 957, Address: 0x385fa8, Func Offset: 0x4a8
	// Line 948, Address: 0x385fb4, Func Offset: 0x4b4
	// Line 957, Address: 0x385fcc, Func Offset: 0x4cc
	// Line 949, Address: 0x385fdc, Func Offset: 0x4dc
	// Line 957, Address: 0x385ff4, Func Offset: 0x4f4
	// Line 952, Address: 0x386000, Func Offset: 0x500
	// Line 957, Address: 0x386008, Func Offset: 0x508
	// Func End, Address: 0x386034, Func Offset: 0x534
}

// zCutsceneMgrUpdateFX__FP12zCutsceneMgrf
// Start address: 0x386040
void zCutsceneMgrUpdateFX(zCutsceneMgr* t)
{
	xCutsceneMgrAsset* a;
	xCutscene* csn;
	int32 i;
	zParEmitter* e;
	// Line 620, Address: 0x386040, Func Offset: 0
	// Line 629, Address: 0x386050, Func Offset: 0x10
	// Line 620, Address: 0x386054, Func Offset: 0x14
	// Line 623, Address: 0x386058, Func Offset: 0x18
	// Line 626, Address: 0x38605c, Func Offset: 0x1c
	// Line 629, Address: 0x386060, Func Offset: 0x20
	// Line 632, Address: 0x386064, Func Offset: 0x24
	// Line 658, Address: 0x38606c, Func Offset: 0x2c
	// Line 632, Address: 0x386078, Func Offset: 0x38
	// Line 658, Address: 0x38607c, Func Offset: 0x3c
	// Line 660, Address: 0x386084, Func Offset: 0x44
	// Line 638, Address: 0x3860a0, Func Offset: 0x60
	// Line 660, Address: 0x3860a4, Func Offset: 0x64
	// Line 641, Address: 0x3860b4, Func Offset: 0x74
	// Line 660, Address: 0x3860b8, Func Offset: 0x78
	// Line 644, Address: 0x3860c4, Func Offset: 0x84
	// Line 646, Address: 0x3860c8, Func Offset: 0x88
	// Line 660, Address: 0x3860d0, Func Offset: 0x90
	// Line 650, Address: 0x3860d8, Func Offset: 0x98
	// Line 660, Address: 0x3860dc, Func Offset: 0x9c
	// Line 650, Address: 0x3860e8, Func Offset: 0xa8
	// Line 660, Address: 0x3860ec, Func Offset: 0xac
	// Func End, Address: 0x386118, Func Offset: 0xd8
}

// zCutsceneMgrFinishExit__FP5xBase
// Start address: 0x386120
void zCutsceneMgrFinishExit(xBase* to)
{
	zCutsceneMgr* t;
	// Line 536, Address: 0x386120, Func Offset: 0
	// Line 539, Address: 0x386144, Func Offset: 0x24
	// Line 555, Address: 0x386148, Func Offset: 0x28
	// Line 556, Address: 0x386150, Func Offset: 0x30
	// Line 557, Address: 0x386158, Func Offset: 0x38
	// Line 567, Address: 0x386168, Func Offset: 0x48
	// Line 578, Address: 0x38617c, Func Offset: 0x5c
	// Line 580, Address: 0x386184, Func Offset: 0x64
	// Line 581, Address: 0x38618c, Func Offset: 0x6c
	// Line 570, Address: 0x3861a0, Func Offset: 0x80
	// Line 581, Address: 0x3861c0, Func Offset: 0xa0
	// Line 571, Address: 0x3861d0, Func Offset: 0xb0
	// Line 581, Address: 0x3861f0, Func Offset: 0xd0
	// Line 573, Address: 0x3861fc, Func Offset: 0xdc
	// Line 581, Address: 0x386200, Func Offset: 0xe0
	// Line 573, Address: 0x38620c, Func Offset: 0xec
	// Line 581, Address: 0x386214, Func Offset: 0xf4
	// Line 573, Address: 0x386224, Func Offset: 0x104
	// Line 581, Address: 0x386228, Func Offset: 0x108
	// Line 573, Address: 0x38624c, Func Offset: 0x12c
	// Line 581, Address: 0x386254, Func Offset: 0x134
	// Line 573, Address: 0x386264, Func Offset: 0x144
	// Line 581, Address: 0x386268, Func Offset: 0x148
	// Line 573, Address: 0x386274, Func Offset: 0x154
	// Line 581, Address: 0x386278, Func Offset: 0x158
	// Line 582, Address: 0x386288, Func Offset: 0x168
	// Func End, Address: 0x3862b0, Func Offset: 0x190
}

// zCutsceneMgrFinishLoad__FP5xBase
// Start address: 0x3862b0
void zCutsceneMgrFinishLoad(xBase* to)
{
	zCutsceneMgr* t;
	// Line 501, Address: 0x3862b0, Func Offset: 0
	// Line 504, Address: 0x3862c8, Func Offset: 0x18
	// Line 506, Address: 0x3862cc, Func Offset: 0x1c
	// Line 507, Address: 0x3862d8, Func Offset: 0x28
	// Line 511, Address: 0x3862e4, Func Offset: 0x34
	// Line 512, Address: 0x3862ec, Func Offset: 0x3c
	// Line 513, Address: 0x3862f4, Func Offset: 0x44
	// Line 514, Address: 0x386300, Func Offset: 0x50
	// Line 516, Address: 0x386318, Func Offset: 0x68
	// Line 517, Address: 0x386324, Func Offset: 0x74
	// Line 520, Address: 0x38634c, Func Offset: 0x9c
	// Line 521, Address: 0x38637c, Func Offset: 0xcc
	// Line 522, Address: 0x3863ac, Func Offset: 0xfc
	// Line 528, Address: 0x3863b4, Func Offset: 0x104
	// Line 530, Address: 0x3863bc, Func Offset: 0x10c
	// Line 531, Address: 0x3863c8, Func Offset: 0x118
	// Func End, Address: 0x3863e4, Func Offset: 0x134
}

// zCutsceneMgrEventCB__FP5xBaseP5xBaseUiPCfP5xBaseUi
// Start address: 0x3863f0
void zCutsceneMgrEventCB(xBase* to, uint32 toEvent, float32* toParam)
{
	zCutsceneMgr* t;
	// Line 370, Address: 0x3863f0, Func Offset: 0
	// Line 399, Address: 0x3863f4, Func Offset: 0x4
	// Line 370, Address: 0x3863f8, Func Offset: 0x8
	// Line 399, Address: 0x386408, Func Offset: 0x18
	// Line 401, Address: 0x386414, Func Offset: 0x24
	// Line 406, Address: 0x386420, Func Offset: 0x30
	// Line 423, Address: 0x386428, Func Offset: 0x38
	// Line 431, Address: 0x38646c, Func Offset: 0x7c
	// Line 432, Address: 0x386470, Func Offset: 0x80
	// Line 437, Address: 0x386478, Func Offset: 0x88
	// Line 438, Address: 0x386480, Func Offset: 0x90
	// Line 440, Address: 0x386498, Func Offset: 0xa8
	// Line 441, Address: 0x38649c, Func Offset: 0xac
	// Line 446, Address: 0x3864a4, Func Offset: 0xb4
	// Line 448, Address: 0x3864b4, Func Offset: 0xc4
	// Line 449, Address: 0x3864c4, Func Offset: 0xd4
	// Line 450, Address: 0x3864cc, Func Offset: 0xdc
	// Line 452, Address: 0x3864e0, Func Offset: 0xf0
	// Line 454, Address: 0x3864e8, Func Offset: 0xf8
	// Line 459, Address: 0x3864f0, Func Offset: 0x100
	// Line 456, Address: 0x3864f4, Func Offset: 0x104
	// Line 459, Address: 0x3864f8, Func Offset: 0x108
	// Line 456, Address: 0x3864fc, Func Offset: 0x10c
	// Line 459, Address: 0x386500, Func Offset: 0x110
	// Line 462, Address: 0x386504, Func Offset: 0x114
	// Line 472, Address: 0x38652c, Func Offset: 0x13c
	// Line 477, Address: 0x38655c, Func Offset: 0x16c
	// Line 403, Address: 0x386568, Func Offset: 0x178
	// Line 477, Address: 0x38656c, Func Offset: 0x17c
	// Line 403, Address: 0x386570, Func Offset: 0x180
	// Line 477, Address: 0x386588, Func Offset: 0x198
	// Line 404, Address: 0x386590, Func Offset: 0x1a0
	// Line 477, Address: 0x3865ac, Func Offset: 0x1bc
	// Line 463, Address: 0x3865bc, Func Offset: 0x1cc
	// Line 477, Address: 0x3865c0, Func Offset: 0x1d0
	// Line 466, Address: 0x3865c8, Func Offset: 0x1d8
	// Line 478, Address: 0x3865d0, Func Offset: 0x1e0
	// Func End, Address: 0x3865e4, Func Offset: 0x1f4
}

// zCutsceneMgrPlayStart__FP12zCutsceneMgr
// Start address: 0x3865f0
void zCutsceneMgrPlayStart(zCutsceneMgr* t)
{
	uint32 i;
	uint32 j;
	uint32 cinid;
	uint32 hackid;
	// Line 286, Address: 0x3865f0, Func Offset: 0
	// Line 288, Address: 0x3865f4, Func Offset: 0x4
	// Line 286, Address: 0x3865f8, Func Offset: 0x8
	// Line 292, Address: 0x386604, Func Offset: 0x14
	// Line 286, Address: 0x386608, Func Offset: 0x18
	// Line 292, Address: 0x386610, Func Offset: 0x20
	// Line 288, Address: 0x386614, Func Offset: 0x24
	// Line 292, Address: 0x386618, Func Offset: 0x28
	// Line 293, Address: 0x38661c, Func Offset: 0x2c
	// Line 294, Address: 0x386624, Func Offset: 0x34
	// Line 355, Address: 0x386634, Func Offset: 0x44
	// Line 356, Address: 0x386648, Func Offset: 0x58
	// Line 333, Address: 0x38667c, Func Offset: 0x8c
	// Line 356, Address: 0x386680, Func Offset: 0x90
	// Line 349, Address: 0x386684, Func Offset: 0x94
	// Line 327, Address: 0x386688, Func Offset: 0x98
	// Line 300, Address: 0x38668c, Func Offset: 0x9c
	// Line 356, Address: 0x386690, Func Offset: 0xa0
	// Line 327, Address: 0x3866a8, Func Offset: 0xb8
	// Line 356, Address: 0x3866b0, Func Offset: 0xc0
	// Line 344, Address: 0x386714, Func Offset: 0x124
	// Line 356, Address: 0x386718, Func Offset: 0x128
	// Line 354, Address: 0x386734, Func Offset: 0x144
	// Line 356, Address: 0x386738, Func Offset: 0x148
	// Line 333, Address: 0x386760, Func Offset: 0x170
	// Line 356, Address: 0x386770, Func Offset: 0x180
	// Func End, Address: 0x386788, Func Offset: 0x198
}

// zCutsceneMgrLoad__FP12zCutsceneMgrP7xSerial
// Start address: 0x386790
void zCutsceneMgrLoad()
{
	// Line 264, Address: 0x386790, Func Offset: 0
	// Func End, Address: 0x386798, Func Offset: 0x8
}

// zCutsceneMgrSave__FP12zCutsceneMgrP7xSerial
// Start address: 0x3867a0
void zCutsceneMgrSave()
{
	// Line 247, Address: 0x3867a0, Func Offset: 0
	// Func End, Address: 0x3867a8, Func Offset: 0x8
}

// zCutsceneMgrInit__FPvPv
// Start address: 0x3867b0
void zCutsceneMgrInit(void* b, void* tasset)
{
	// Line 185, Address: 0x3867b0, Func Offset: 0
	// Line 186, Address: 0x3867c4, Func Offset: 0x14
	// Line 187, Address: 0x38680c, Func Offset: 0x5c
	// Func End, Address: 0x386820, Func Offset: 0x70
}

