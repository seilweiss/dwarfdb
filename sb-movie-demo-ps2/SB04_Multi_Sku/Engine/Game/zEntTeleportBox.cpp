



void zEntTeleportBoxEventCB(xBase* to, uint32 toEvent);
int32 zEntTeleportBox_playerIn();
void zEntTeleportBox_Load(_zEntTeleportBox* ent, xSerial* s);
void zEntTeleportBox_Save(_zEntTeleportBox* ent, xSerial* s);
void zEntTeleportBox_Update(xEnt* rawent, xScene* sc, float32 dt);
void zEntTeleportBox_Setup(_zEntTeleportBox* ent);
void zEntTeleportBox_Init(_zEntTeleportBox* ent, teleport_asset* asset);
void zEntTeleportBox_Init(xBase& data, xDynAsset& asset);
uint32 JumpOutEffectJOAnimCB(void* object);
uint32 JumpOutEffectPlrEjectCB(void* object);
uint32 JumpOutEffectPlrVisibleCB();
uint32 CtoOEffectTboxEnableCB(void* object);
uint32 JumpInEffectJIAnimCB(void* object);
uint32 JumpInEffectPlrTeleportCB(void* object);
uint32 JumpInEffectPlrInvisibleCB();
uint32 CtoOCB(void* object);
uint32 CtoOCheck(void* object);
uint32 JOtoOCB(void* object);
uint32 JOtoOCheck(void* object);
uint32 JItoOCB(void* object);
uint32 JItoOCheck(void* object);
uint32 JumpOutCB(void* object);
uint32 JumpOutCheck(void* object);
uint32 JumpInCB(void* object);
uint32 JumpInCheck(void* object);
uint32 OpenCheck(void* object);

// zEntTeleportBoxEventCB__FP5xBaseP5xBaseUiPCfP5xBaseUi
// Start address: 0x3129c0
void zEntTeleportBoxEventCB(xBase* to, uint32 toEvent)
{
	_zEntTeleportBox* s;
	// Line 1007, Address: 0x3129c0, Func Offset: 0
	// Line 1016, Address: 0x3129c4, Func Offset: 0x4
	// Line 1020, Address: 0x312a3c, Func Offset: 0x7c
	// Line 1021, Address: 0x312a5c, Func Offset: 0x9c
	// Line 1024, Address: 0x312a64, Func Offset: 0xa4
	// Line 1025, Address: 0x312a84, Func Offset: 0xc4
	// Line 1027, Address: 0x312a8c, Func Offset: 0xcc
	// Line 1028, Address: 0x312a94, Func Offset: 0xd4
	// Line 1030, Address: 0x312a9c, Func Offset: 0xdc
	// Line 1031, Address: 0x312aa4, Func Offset: 0xe4
	// Line 1033, Address: 0x312aac, Func Offset: 0xec
	// Line 1034, Address: 0x312ab8, Func Offset: 0xf8
	// Line 1035, Address: 0x312ad8, Func Offset: 0x118
	// Line 1037, Address: 0x312ae0, Func Offset: 0x120
	// Line 1038, Address: 0x312aec, Func Offset: 0x12c
	// Line 1039, Address: 0x312b0c, Func Offset: 0x14c
	// Line 1041, Address: 0x312b14, Func Offset: 0x154
	// Line 1042, Address: 0x312b24, Func Offset: 0x164
	// Line 1044, Address: 0x312b2c, Func Offset: 0x16c
	// Line 1055, Address: 0x312b3c, Func Offset: 0x17c
	// Func End, Address: 0x312b48, Func Offset: 0x188
}

// zEntTeleportBox_playerIn__Fv
// Start address: 0x312b50
int32 zEntTeleportBox_playerIn()
{
	// Line 993, Address: 0x312b50, Func Offset: 0
	// Func End, Address: 0x312b58, Func Offset: 0x8
}

// zEntTeleportBox_Load__FP16_zEntTeleportBoxP7xSerial
// Start address: 0x312b60
void zEntTeleportBox_Load(_zEntTeleportBox* ent, xSerial* s)
{
	int32 open;
	// Line 913, Address: 0x312b60, Func Offset: 0
	// Line 914, Address: 0x312b74, Func Offset: 0x14
	// Line 922, Address: 0x312b7c, Func Offset: 0x1c
	// Line 923, Address: 0x312b8c, Func Offset: 0x2c
	// Line 924, Address: 0x312b98, Func Offset: 0x38
	// Line 926, Address: 0x312bb0, Func Offset: 0x50
	// Line 928, Address: 0x312bc0, Func Offset: 0x60
	// Line 929, Address: 0x312bcc, Func Offset: 0x6c
	// Func End, Address: 0x312be0, Func Offset: 0x80
}

// zEntTeleportBox_Save__FP16_zEntTeleportBoxP7xSerial
// Start address: 0x312be0
void zEntTeleportBox_Save(_zEntTeleportBox* ent, xSerial* s)
{
	// Line 887, Address: 0x312be0, Func Offset: 0
	// Line 888, Address: 0x312bf4, Func Offset: 0x14
	// Line 894, Address: 0x312bfc, Func Offset: 0x1c
	// Line 895, Address: 0x312c08, Func Offset: 0x28
	// Line 897, Address: 0x312c1c, Func Offset: 0x3c
	// Line 899, Address: 0x312c24, Func Offset: 0x44
	// Line 900, Address: 0x312c30, Func Offset: 0x50
	// Func End, Address: 0x312c44, Func Offset: 0x64
}

// zEntTeleportBox_Update__FP4xEntP6xScenef
// Start address: 0x312c50
void zEntTeleportBox_Update(xEnt* rawent, xScene* sc, float32 dt)
{
	_zEntTeleportBox* ent;
	float32 distsqr;
	float32 dx__;
	float32 dy__;
	float32 dz__;
	xVec3 playerMid;
	_zEntTeleportBox* target;
	xMat4x3& mat;
	xVec3 ypr;
	xVec3 dir;
	// Line 653, Address: 0x312c50, Func Offset: 0
	// Line 654, Address: 0x312c60, Func Offset: 0x10
	// Line 653, Address: 0x312c64, Func Offset: 0x14
	// Line 657, Address: 0x312c6c, Func Offset: 0x1c
	// Line 666, Address: 0x312c78, Func Offset: 0x28
	// Line 657, Address: 0x312c7c, Func Offset: 0x2c
	// Line 666, Address: 0x312c80, Func Offset: 0x30
	// Line 657, Address: 0x312c88, Func Offset: 0x38
	// Line 665, Address: 0x312c90, Func Offset: 0x40
	// Line 666, Address: 0x312cc4, Func Offset: 0x74
	// Line 667, Address: 0x312cd0, Func Offset: 0x80
	// Line 669, Address: 0x312cd8, Func Offset: 0x88
	// Line 671, Address: 0x312ce0, Func Offset: 0x90
	// Line 673, Address: 0x312cec, Func Offset: 0x9c
	// Line 675, Address: 0x312cf4, Func Offset: 0xa4
	// Line 676, Address: 0x312cfc, Func Offset: 0xac
	// Line 678, Address: 0x312d24, Func Offset: 0xd4
	// Line 680, Address: 0x312d30, Func Offset: 0xe0
	// Line 684, Address: 0x312d38, Func Offset: 0xe8
	// Line 687, Address: 0x312d48, Func Offset: 0xf8
	// Line 700, Address: 0x312d4c, Func Offset: 0xfc
	// Line 699, Address: 0x312d54, Func Offset: 0x104
	// Line 701, Address: 0x312d58, Func Offset: 0x108
	// Line 687, Address: 0x312d60, Func Offset: 0x110
	// Line 699, Address: 0x312d64, Func Offset: 0x114
	// Line 700, Address: 0x312d84, Func Offset: 0x134
	// Line 699, Address: 0x312d88, Func Offset: 0x138
	// Line 700, Address: 0x312d8c, Func Offset: 0x13c
	// Line 699, Address: 0x312d90, Func Offset: 0x140
	// Line 701, Address: 0x312d94, Func Offset: 0x144
	// Line 706, Address: 0x312dfc, Func Offset: 0x1ac
	// Line 717, Address: 0x312e64, Func Offset: 0x214
	// Line 718, Address: 0x312e6c, Func Offset: 0x21c
	// Line 723, Address: 0x312e70, Func Offset: 0x220
	// Line 724, Address: 0x312e74, Func Offset: 0x224
	// Line 727, Address: 0x312e7c, Func Offset: 0x22c
	// Line 729, Address: 0x312e80, Func Offset: 0x230
	// Line 730, Address: 0x312e90, Func Offset: 0x240
	// Line 735, Address: 0x312e98, Func Offset: 0x248
	// Line 737, Address: 0x312ea4, Func Offset: 0x254
	// Line 740, Address: 0x312eac, Func Offset: 0x25c
	// Line 739, Address: 0x312eb0, Func Offset: 0x260
	// Line 740, Address: 0x312eb8, Func Offset: 0x268
	// Line 741, Address: 0x312ebc, Func Offset: 0x26c
	// Line 745, Address: 0x312ec4, Func Offset: 0x274
	// Line 744, Address: 0x312ecc, Func Offset: 0x27c
	// Line 745, Address: 0x312ed0, Func Offset: 0x280
	// Line 748, Address: 0x312ed8, Func Offset: 0x288
	// Line 756, Address: 0x312ee4, Func Offset: 0x294
	// Line 760, Address: 0x312ef0, Func Offset: 0x2a0
	// Line 767, Address: 0x312f28, Func Offset: 0x2d8
	// Line 768, Address: 0x312f2c, Func Offset: 0x2dc
	// Line 767, Address: 0x312f3c, Func Offset: 0x2ec
	// Line 768, Address: 0x312f44, Func Offset: 0x2f4
	// Line 772, Address: 0x312f84, Func Offset: 0x334
	// Line 776, Address: 0x312f88, Func Offset: 0x338
	// Line 772, Address: 0x312f90, Func Offset: 0x340
	// Line 773, Address: 0x312f9c, Func Offset: 0x34c
	// Line 776, Address: 0x312fa8, Func Offset: 0x358
	// Line 778, Address: 0x312fe0, Func Offset: 0x390
	// Line 782, Address: 0x312fe8, Func Offset: 0x398
	// Line 783, Address: 0x312ff4, Func Offset: 0x3a4
	// Line 784, Address: 0x312ff8, Func Offset: 0x3a8
	// Line 787, Address: 0x313000, Func Offset: 0x3b0
	// Line 792, Address: 0x313004, Func Offset: 0x3b4
	// Line 787, Address: 0x313008, Func Offset: 0x3b8
	// Line 788, Address: 0x313034, Func Offset: 0x3e4
	// Line 790, Address: 0x313060, Func Offset: 0x410
	// Line 792, Address: 0x313070, Func Offset: 0x420
	// Line 793, Address: 0x313078, Func Offset: 0x428
	// Line 794, Address: 0x3130b0, Func Offset: 0x460
	// Line 793, Address: 0x3130b4, Func Offset: 0x464
	// Line 794, Address: 0x3130b8, Func Offset: 0x468
	// Line 793, Address: 0x3130bc, Func Offset: 0x46c
	// Line 794, Address: 0x3130c8, Func Offset: 0x478
	// Line 796, Address: 0x3130d0, Func Offset: 0x480
	// Line 797, Address: 0x3130d8, Func Offset: 0x488
	// Line 798, Address: 0x313110, Func Offset: 0x4c0
	// Line 801, Address: 0x313134, Func Offset: 0x4e4
	// Line 804, Address: 0x313140, Func Offset: 0x4f0
	// Line 811, Address: 0x313148, Func Offset: 0x4f8
	// Line 810, Address: 0x31314c, Func Offset: 0x4fc
	// Line 811, Address: 0x313150, Func Offset: 0x500
	// Line 814, Address: 0x31316c, Func Offset: 0x51c
	// Line 819, Address: 0x313174, Func Offset: 0x524
	// Line 822, Address: 0x313188, Func Offset: 0x538
	// Line 823, Address: 0x31322c, Func Offset: 0x5dc
	// Line 827, Address: 0x313230, Func Offset: 0x5e0
	// Line 823, Address: 0x313234, Func Offset: 0x5e4
	// Line 827, Address: 0x313238, Func Offset: 0x5e8
	// Line 823, Address: 0x31323c, Func Offset: 0x5ec
	// Line 824, Address: 0x313258, Func Offset: 0x608
	// Line 827, Address: 0x31326c, Func Offset: 0x61c
	// Line 828, Address: 0x31329c, Func Offset: 0x64c
	// Line 837, Address: 0x3132d0, Func Offset: 0x680
	// Line 843, Address: 0x3132e0, Func Offset: 0x690
	// Line 845, Address: 0x3132fc, Func Offset: 0x6ac
	// Line 847, Address: 0x313338, Func Offset: 0x6e8
	// Line 848, Address: 0x31333c, Func Offset: 0x6ec
	// Line 874, Address: 0x313348, Func Offset: 0x6f8
	// Func End, Address: 0x313364, Func Offset: 0x714
}

// zEntTeleportBox_Setup__FP16_zEntTeleportBox
// Start address: 0x313370
void zEntTeleportBox_Setup(_zEntTeleportBox* ent)
{
	_zEntTeleportBox* target;
	xBox wbox;
	// Line 570, Address: 0x313370, Func Offset: 0
	// Line 571, Address: 0x313374, Func Offset: 0x4
	// Line 570, Address: 0x313378, Func Offset: 0x8
	// Line 571, Address: 0x313384, Func Offset: 0x14
	// Line 572, Address: 0x313390, Func Offset: 0x20
	// Line 573, Address: 0x313398, Func Offset: 0x28
	// Line 574, Address: 0x3133a0, Func Offset: 0x30
	// Line 575, Address: 0x3133a4, Func Offset: 0x34
	// Line 583, Address: 0x3133c0, Func Offset: 0x50
	// Line 586, Address: 0x3133c8, Func Offset: 0x58
	// Line 591, Address: 0x3133cc, Func Offset: 0x5c
	// Line 595, Address: 0x3133d8, Func Offset: 0x68
	// Line 611, Address: 0x3133dc, Func Offset: 0x6c
	// Line 596, Address: 0x3133e0, Func Offset: 0x70
	// Line 611, Address: 0x3133e4, Func Offset: 0x74
	// Line 597, Address: 0x3133e8, Func Offset: 0x78
	// Line 612, Address: 0x3133ec, Func Offset: 0x7c
	// Line 598, Address: 0x3133f0, Func Offset: 0x80
	// Line 612, Address: 0x3133f4, Func Offset: 0x84
	// Line 599, Address: 0x3133f8, Func Offset: 0x88
	// Line 607, Address: 0x3133fc, Func Offset: 0x8c
	// Line 601, Address: 0x313400, Func Offset: 0x90
	// Line 600, Address: 0x313404, Func Offset: 0x94
	// Line 601, Address: 0x313408, Func Offset: 0x98
	// Line 607, Address: 0x31340c, Func Offset: 0x9c
	// Line 616, Address: 0x313410, Func Offset: 0xa0
	// Line 607, Address: 0x313414, Func Offset: 0xa4
	// Line 611, Address: 0x313418, Func Offset: 0xa8
	// Line 608, Address: 0x313420, Func Offset: 0xb0
	// Line 611, Address: 0x313424, Func Offset: 0xb4
	// Line 608, Address: 0x31342c, Func Offset: 0xbc
	// Line 609, Address: 0x31343c, Func Offset: 0xcc
	// Line 616, Address: 0x313440, Func Offset: 0xd0
	// Line 608, Address: 0x313448, Func Offset: 0xd8
	// Line 607, Address: 0x31344c, Func Offset: 0xdc
	// Line 626, Address: 0x313454, Func Offset: 0xe4
	// Line 609, Address: 0x313458, Func Offset: 0xe8
	// Line 626, Address: 0x31345c, Func Offset: 0xec
	// Line 609, Address: 0x313460, Func Offset: 0xf0
	// Line 627, Address: 0x313464, Func Offset: 0xf4
	// Line 616, Address: 0x313468, Func Offset: 0xf8
	// Line 610, Address: 0x313470, Func Offset: 0x100
	// Line 626, Address: 0x313478, Func Offset: 0x108
	// Line 616, Address: 0x31347c, Func Offset: 0x10c
	// Line 610, Address: 0x313480, Func Offset: 0x110
	// Line 627, Address: 0x313484, Func Offset: 0x114
	// Line 622, Address: 0x313488, Func Offset: 0x118
	// Line 628, Address: 0x31348c, Func Offset: 0x11c
	// Line 617, Address: 0x313494, Func Offset: 0x124
	// Line 622, Address: 0x313498, Func Offset: 0x128
	// Line 623, Address: 0x31349c, Func Offset: 0x12c
	// Line 628, Address: 0x3134a4, Func Offset: 0x134
	// Line 627, Address: 0x3134a8, Func Offset: 0x138
	// Line 631, Address: 0x3134ac, Func Offset: 0x13c
	// Line 629, Address: 0x3134b4, Func Offset: 0x144
	// Line 623, Address: 0x3134b8, Func Offset: 0x148
	// Line 619, Address: 0x3134c0, Func Offset: 0x150
	// Line 620, Address: 0x3134c4, Func Offset: 0x154
	// Line 619, Address: 0x3134c8, Func Offset: 0x158
	// Line 620, Address: 0x3134cc, Func Offset: 0x15c
	// Line 623, Address: 0x3134d0, Func Offset: 0x160
	// Line 621, Address: 0x3134d4, Func Offset: 0x164
	// Line 623, Address: 0x3134dc, Func Offset: 0x16c
	// Line 618, Address: 0x3134e0, Func Offset: 0x170
	// Line 623, Address: 0x3134e4, Func Offset: 0x174
	// Line 631, Address: 0x3134f0, Func Offset: 0x180
	// Line 629, Address: 0x3134f4, Func Offset: 0x184
	// Line 623, Address: 0x3134f8, Func Offset: 0x188
	// Line 634, Address: 0x313500, Func Offset: 0x190
	// Line 635, Address: 0x313514, Func Offset: 0x1a4
	// Line 639, Address: 0x313518, Func Offset: 0x1a8
	// Line 640, Address: 0x313520, Func Offset: 0x1b0
	// Line 636, Address: 0x313528, Func Offset: 0x1b8
	// Line 635, Address: 0x313530, Func Offset: 0x1c0
	// Line 641, Address: 0x313534, Func Offset: 0x1c4
	// Line 637, Address: 0x313538, Func Offset: 0x1c8
	// Line 638, Address: 0x313540, Func Offset: 0x1d0
	// Line 641, Address: 0x313548, Func Offset: 0x1d8
	// Line 636, Address: 0x313558, Func Offset: 0x1e8
	// Line 641, Address: 0x31355c, Func Offset: 0x1ec
	// Line 644, Address: 0x313570, Func Offset: 0x200
	// Line 645, Address: 0x31357c, Func Offset: 0x20c
	// Line 646, Address: 0x313584, Func Offset: 0x214
	// Line 575, Address: 0x31358c, Func Offset: 0x21c
	// Line 646, Address: 0x313598, Func Offset: 0x228
	// Line 575, Address: 0x3135a0, Func Offset: 0x230
	// Line 646, Address: 0x3135b4, Func Offset: 0x244
	// Line 575, Address: 0x3135ec, Func Offset: 0x27c
	// Line 646, Address: 0x3135f0, Func Offset: 0x280
	// Line 575, Address: 0x3135f8, Func Offset: 0x288
	// Line 646, Address: 0x3135fc, Func Offset: 0x28c
	// Line 575, Address: 0x313604, Func Offset: 0x294
	// Line 646, Address: 0x313608, Func Offset: 0x298
	// Line 575, Address: 0x313610, Func Offset: 0x2a0
	// Line 646, Address: 0x313614, Func Offset: 0x2a4
	// Line 575, Address: 0x31361c, Func Offset: 0x2ac
	// Line 646, Address: 0x313620, Func Offset: 0x2b0
	// Line 575, Address: 0x313638, Func Offset: 0x2c8
	// Line 646, Address: 0x31363c, Func Offset: 0x2cc
	// Line 575, Address: 0x313644, Func Offset: 0x2d4
	// Line 646, Address: 0x313648, Func Offset: 0x2d8
	// Line 575, Address: 0x313654, Func Offset: 0x2e4
	// Line 646, Address: 0x313660, Func Offset: 0x2f0
	// Func End, Address: 0x313674, Func Offset: 0x304
}

// zEntTeleportBox_Init__FP16_zEntTeleportBoxP14teleport_asset
// Start address: 0x313680
void zEntTeleportBox_Init(_zEntTeleportBox* ent, teleport_asset* asset)
{
	xEntAsset* easset;
	uint32 size;
	xMarkerAsset* marker;
	xAnimTable* table;
	xAnimState* state;
	void* buf;
	xAnimFile* afile;
	xAnimFile* afile;
	xAnimFile* afile;
	xAnimFile* afile;
	xAnimFile* afile;
	xAnimFile* afile;
	// Line 318, Address: 0x313680, Func Offset: 0
	// Line 323, Address: 0x313684, Func Offset: 0x4
	// Line 318, Address: 0x313688, Func Offset: 0x8
	// Line 323, Address: 0x3136a0, Func Offset: 0x20
	// Line 324, Address: 0x3136ac, Func Offset: 0x2c
	// Line 340, Address: 0x3136b0, Func Offset: 0x30
	// Line 325, Address: 0x3136b4, Func Offset: 0x34
	// Line 329, Address: 0x3136b8, Func Offset: 0x38
	// Line 333, Address: 0x3136bc, Func Offset: 0x3c
	// Line 323, Address: 0x3136c0, Func Offset: 0x40
	// Line 340, Address: 0x3136c4, Func Offset: 0x44
	// Line 324, Address: 0x3136c8, Func Offset: 0x48
	// Line 325, Address: 0x3136cc, Func Offset: 0x4c
	// Line 326, Address: 0x3136d0, Func Offset: 0x50
	// Line 327, Address: 0x3136d8, Func Offset: 0x58
	// Line 328, Address: 0x3136e0, Func Offset: 0x60
	// Line 329, Address: 0x3136ec, Func Offset: 0x6c
	// Line 330, Address: 0x3136f0, Func Offset: 0x70
	// Line 331, Address: 0x3136fc, Func Offset: 0x7c
	// Line 332, Address: 0x313700, Func Offset: 0x80
	// Line 333, Address: 0x31370c, Func Offset: 0x8c
	// Line 334, Address: 0x313710, Func Offset: 0x90
	// Line 335, Address: 0x313714, Func Offset: 0x94
	// Line 336, Address: 0x313718, Func Offset: 0x98
	// Line 337, Address: 0x31371c, Func Offset: 0x9c
	// Line 340, Address: 0x313720, Func Offset: 0xa0
	// Line 341, Address: 0x31372c, Func Offset: 0xac
	// Line 345, Address: 0x313730, Func Offset: 0xb0
	// Line 346, Address: 0x31373c, Func Offset: 0xbc
	// Line 352, Address: 0x313744, Func Offset: 0xc4
	// Line 356, Address: 0x313754, Func Offset: 0xd4
	// Line 358, Address: 0x31375c, Func Offset: 0xdc
	// Line 363, Address: 0x313760, Func Offset: 0xe0
	// Line 358, Address: 0x313770, Func Offset: 0xf0
	// Line 359, Address: 0x313774, Func Offset: 0xf4
	// Line 360, Address: 0x31377c, Func Offset: 0xfc
	// Line 363, Address: 0x313780, Func Offset: 0x100
	// Line 365, Address: 0x313788, Func Offset: 0x108
	// Line 373, Address: 0x31378c, Func Offset: 0x10c
	// Line 367, Address: 0x313790, Func Offset: 0x110
	// Line 374, Address: 0x313794, Func Offset: 0x114
	// Line 373, Address: 0x313798, Func Offset: 0x118
	// Line 374, Address: 0x31379c, Func Offset: 0x11c
	// Line 367, Address: 0x3137a0, Func Offset: 0x120
	// Line 370, Address: 0x3137a8, Func Offset: 0x128
	// Line 372, Address: 0x3137b4, Func Offset: 0x134
	// Line 373, Address: 0x3137b8, Func Offset: 0x138
	// Line 374, Address: 0x3137bc, Func Offset: 0x13c
	// Line 376, Address: 0x3137c0, Func Offset: 0x140
	// Line 377, Address: 0x3137cc, Func Offset: 0x14c
	// Line 379, Address: 0x3137d8, Func Offset: 0x158
	// Line 381, Address: 0x3137dc, Func Offset: 0x15c
	// Line 385, Address: 0x3137e0, Func Offset: 0x160
	// Line 381, Address: 0x3137e4, Func Offset: 0x164
	// Line 385, Address: 0x3137e8, Func Offset: 0x168
	// Line 389, Address: 0x3137f0, Func Offset: 0x170
	// Line 392, Address: 0x313804, Func Offset: 0x184
	// Line 393, Address: 0x31384c, Func Offset: 0x1cc
	// Line 394, Address: 0x313894, Func Offset: 0x214
	// Line 395, Address: 0x3138dc, Func Offset: 0x25c
	// Line 396, Address: 0x313924, Func Offset: 0x2a4
	// Line 397, Address: 0x31396c, Func Offset: 0x2ec
	// Line 399, Address: 0x3139b4, Func Offset: 0x334
	// Line 400, Address: 0x313a04, Func Offset: 0x384
	// Line 401, Address: 0x313a54, Func Offset: 0x3d4
	// Line 402, Address: 0x313aa4, Func Offset: 0x424
	// Line 404, Address: 0x313af4, Func Offset: 0x474
	// Line 405, Address: 0x313b44, Func Offset: 0x4c4
	// Line 406, Address: 0x313b94, Func Offset: 0x514
	// Line 407, Address: 0x313be4, Func Offset: 0x564
	// Line 408, Address: 0x313c34, Func Offset: 0x5b4
	// Line 411, Address: 0x313c84, Func Offset: 0x604
	// Line 414, Address: 0x313c98, Func Offset: 0x618
	// Line 421, Address: 0x313cc4, Func Offset: 0x644
	// Line 428, Address: 0x313cec, Func Offset: 0x66c
	// Line 436, Address: 0x313d18, Func Offset: 0x698
	// Line 439, Address: 0x313d2c, Func Offset: 0x6ac
	// Line 446, Address: 0x313d58, Func Offset: 0x6d8
	// Line 453, Address: 0x313d84, Func Offset: 0x704
	// Line 460, Address: 0x313db0, Func Offset: 0x730
	// Line 463, Address: 0x313dc0, Func Offset: 0x740
	// Line 472, Address: 0x313de8, Func Offset: 0x768
	// Line 473, Address: 0x313e00, Func Offset: 0x780
	// Line 475, Address: 0x313e08, Func Offset: 0x788
	// Line 477, Address: 0x313e20, Func Offset: 0x7a0
	// Line 478, Address: 0x313e34, Func Offset: 0x7b4
	// Line 486, Address: 0x313e50, Func Offset: 0x7d0
	// Line 487, Address: 0x313e68, Func Offset: 0x7e8
	// Line 489, Address: 0x313e70, Func Offset: 0x7f0
	// Line 491, Address: 0x313e88, Func Offset: 0x808
	// Line 492, Address: 0x313e9c, Func Offset: 0x81c
	// Line 500, Address: 0x313eb8, Func Offset: 0x838
	// Line 501, Address: 0x313ed0, Func Offset: 0x850
	// Line 503, Address: 0x313ed8, Func Offset: 0x858
	// Line 505, Address: 0x313ef0, Func Offset: 0x870
	// Line 506, Address: 0x313f04, Func Offset: 0x884
	// Line 514, Address: 0x313f20, Func Offset: 0x8a0
	// Line 515, Address: 0x313f38, Func Offset: 0x8b8
	// Line 517, Address: 0x313f40, Func Offset: 0x8c0
	// Line 519, Address: 0x313f58, Func Offset: 0x8d8
	// Line 520, Address: 0x313f6c, Func Offset: 0x8ec
	// Line 528, Address: 0x313f88, Func Offset: 0x908
	// Line 529, Address: 0x313fa0, Func Offset: 0x920
	// Line 531, Address: 0x313fa8, Func Offset: 0x928
	// Line 533, Address: 0x313fc0, Func Offset: 0x940
	// Line 534, Address: 0x313fd4, Func Offset: 0x954
	// Line 542, Address: 0x313ff0, Func Offset: 0x970
	// Line 543, Address: 0x31400c, Func Offset: 0x98c
	// Line 545, Address: 0x314014, Func Offset: 0x994
	// Line 547, Address: 0x314028, Func Offset: 0x9a8
	// Line 548, Address: 0x31403c, Func Offset: 0x9bc
	// Line 558, Address: 0x314058, Func Offset: 0x9d8
	// Func End, Address: 0x314070, Func Offset: 0x9f0
}

// zEntTeleportBox_Init__FR5xBaseR9xDynAssetUi
// Start address: 0x314070
void zEntTeleportBox_Init(xBase& data, xDynAsset& asset)
{
	// Line 314, Address: 0x314070, Func Offset: 0
	// Func End, Address: 0x314078, Func Offset: 0x8
}

// JumpOutEffectJOAnimCB__FUiP17xAnimActiveEffectP11xAnimSinglePv
// Start address: 0x314080
uint32 JumpOutEffectJOAnimCB(void* object)
{
	// Line 303, Address: 0x314080, Func Offset: 0
	// Line 306, Address: 0x314088, Func Offset: 0x8
	// Func End, Address: 0x314090, Func Offset: 0x10
}

// JumpOutEffectPlrEjectCB__FUiP17xAnimActiveEffectP11xAnimSinglePv
// Start address: 0x314090
uint32 JumpOutEffectPlrEjectCB(void* object)
{
	_zEntTeleportBox* tbox;
	xVec3 tmp;
	// Line 283, Address: 0x314090, Func Offset: 0
	// Line 287, Address: 0x314094, Func Offset: 0x4
	// Line 283, Address: 0x314098, Func Offset: 0x8
	// Line 292, Address: 0x31409c, Func Offset: 0xc
	// Line 287, Address: 0x3140a0, Func Offset: 0x10
	// Line 294, Address: 0x3140a4, Func Offset: 0x14
	// Line 288, Address: 0x3140a8, Func Offset: 0x18
	// Line 294, Address: 0x3140ac, Func Offset: 0x1c
	// Line 288, Address: 0x3140b0, Func Offset: 0x20
	// Line 292, Address: 0x3140b8, Func Offset: 0x28
	// Line 293, Address: 0x3140bc, Func Offset: 0x2c
	// Line 292, Address: 0x3140c4, Func Offset: 0x34
	// Line 293, Address: 0x3140d8, Func Offset: 0x48
	// Line 292, Address: 0x3140dc, Func Offset: 0x4c
	// Line 293, Address: 0x3140e0, Func Offset: 0x50
	// Line 292, Address: 0x3140e4, Func Offset: 0x54
	// Line 294, Address: 0x3140e8, Func Offset: 0x58
	// Line 297, Address: 0x3140f0, Func Offset: 0x60
	// Line 296, Address: 0x3140f4, Func Offset: 0x64
	// Line 297, Address: 0x3140f8, Func Offset: 0x68
	// Func End, Address: 0x314100, Func Offset: 0x70
}

// JumpOutEffectPlrVisibleCB__FUiP17xAnimActiveEffectP11xAnimSinglePv
// Start address: 0x314100
uint32 JumpOutEffectPlrVisibleCB()
{
	// Line 277, Address: 0x314100, Func Offset: 0
	// Line 278, Address: 0x314104, Func Offset: 0x4
	// Line 277, Address: 0x314108, Func Offset: 0x8
	// Line 278, Address: 0x31410c, Func Offset: 0xc
	// Line 279, Address: 0x314130, Func Offset: 0x30
	// Line 281, Address: 0x314138, Func Offset: 0x38
	// Line 280, Address: 0x31413c, Func Offset: 0x3c
	// Line 281, Address: 0x314140, Func Offset: 0x40
	// Func End, Address: 0x314148, Func Offset: 0x48
}

// CtoOEffectTboxEnableCB__FUiP17xAnimActiveEffectP11xAnimSinglePv
// Start address: 0x314150
uint32 CtoOEffectTboxEnableCB(void* object)
{
	_zEntTeleportBox* tbox;
	// Line 269, Address: 0x314150, Func Offset: 0
	// Line 274, Address: 0x314160, Func Offset: 0x10
	// Line 275, Address: 0x314170, Func Offset: 0x20
	// Func End, Address: 0x314178, Func Offset: 0x28
}

// JumpInEffectJIAnimCB__FUiP17xAnimActiveEffectP11xAnimSinglePv
// Start address: 0x314180
uint32 JumpInEffectJIAnimCB(void* object)
{
	// Line 258, Address: 0x314180, Func Offset: 0
	// Line 261, Address: 0x314188, Func Offset: 0x8
	// Func End, Address: 0x314190, Func Offset: 0x10
}

// JumpInEffectPlrTeleportCB__FUiP17xAnimActiveEffectP11xAnimSinglePv
// Start address: 0x314190
uint32 JumpInEffectPlrTeleportCB(void* object)
{
	// Line 249, Address: 0x314190, Func Offset: 0
	// Line 252, Address: 0x314198, Func Offset: 0x8
	// Func End, Address: 0x3141a0, Func Offset: 0x10
}

// JumpInEffectPlrInvisibleCB__FUiP17xAnimActiveEffectP11xAnimSinglePv
// Start address: 0x3141a0
uint32 JumpInEffectPlrInvisibleCB()
{
	// Line 239, Address: 0x3141a0, Func Offset: 0
	// Line 240, Address: 0x3141a4, Func Offset: 0x4
	// Line 239, Address: 0x3141a8, Func Offset: 0x8
	// Line 240, Address: 0x3141ac, Func Offset: 0xc
	// Line 243, Address: 0x3141d0, Func Offset: 0x30
	// Line 242, Address: 0x3141d4, Func Offset: 0x34
	// Line 243, Address: 0x3141d8, Func Offset: 0x38
	// Func End, Address: 0x3141e0, Func Offset: 0x40
}

// CtoOCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x3141e0
uint32 CtoOCB(void* object)
{
	xVec3 tmp;
	// Line 220, Address: 0x3141e0, Func Offset: 0
	// Line 227, Address: 0x3141e4, Func Offset: 0x4
	// Line 220, Address: 0x3141e8, Func Offset: 0x8
	// Line 227, Address: 0x3141ec, Func Offset: 0xc
	// Line 226, Address: 0x3141f0, Func Offset: 0x10
	// Line 229, Address: 0x3141f8, Func Offset: 0x18
	// Line 226, Address: 0x314200, Func Offset: 0x20
	// Line 227, Address: 0x314214, Func Offset: 0x34
	// Line 226, Address: 0x314218, Func Offset: 0x38
	// Line 227, Address: 0x31421c, Func Offset: 0x3c
	// Line 226, Address: 0x314220, Func Offset: 0x40
	// Line 229, Address: 0x314224, Func Offset: 0x44
	// Line 232, Address: 0x31422c, Func Offset: 0x4c
	// Line 234, Address: 0x314260, Func Offset: 0x80
	// Line 233, Address: 0x314264, Func Offset: 0x84
	// Line 234, Address: 0x314268, Func Offset: 0x88
	// Func End, Address: 0x314270, Func Offset: 0x90
}

// CtoOCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x314270
uint32 CtoOCheck(void* object)
{
	zEnt* player;
	float32 dx__;
	float32 dy__;
	float32 dz__;
	// Line 208, Address: 0x314270, Func Offset: 0
	// Line 214, Address: 0x314274, Func Offset: 0x4
	// Line 208, Address: 0x31427c, Func Offset: 0xc
	// Line 214, Address: 0x314280, Func Offset: 0x10
	// Line 208, Address: 0x314284, Func Offset: 0x14
	// Line 210, Address: 0x31428c, Func Offset: 0x1c
	// Line 214, Address: 0x3142ac, Func Offset: 0x3c
	// Line 210, Address: 0x3142b0, Func Offset: 0x40
	// Line 214, Address: 0x3142b4, Func Offset: 0x44
	// Line 218, Address: 0x3142cc, Func Offset: 0x5c
	// Func End, Address: 0x3142d4, Func Offset: 0x64
}

// JOtoOCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x3142e0
uint32 JOtoOCB(void* object)
{
	// Line 193, Address: 0x3142e0, Func Offset: 0
	// Line 196, Address: 0x3142e4, Func Offset: 0x4
	// Func End, Address: 0x3142ec, Func Offset: 0xc
}

// JOtoOCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x3142f0
uint32 JOtoOCheck(void* object)
{
	// Line 184, Address: 0x3142f0, Func Offset: 0
	// Line 187, Address: 0x3142f4, Func Offset: 0x4
	// Func End, Address: 0x3142fc, Func Offset: 0xc
}

// JItoOCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x314300
uint32 JItoOCB(void* object)
{
	_zEntTeleportBox* tbox;
	// Line 170, Address: 0x314300, Func Offset: 0
	// Line 174, Address: 0x314304, Func Offset: 0x4
	// Line 176, Address: 0x314308, Func Offset: 0x8
	// Func End, Address: 0x314310, Func Offset: 0x10
}

// JItoOCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x314310
uint32 JItoOCheck(void* object)
{
	// Line 160, Address: 0x314310, Func Offset: 0
	// Line 164, Address: 0x314314, Func Offset: 0x4
	// Func End, Address: 0x31431c, Func Offset: 0xc
}

// JumpOutCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x314320
uint32 JumpOutCB(void* object)
{
	// Line 149, Address: 0x314320, Func Offset: 0
	// Line 152, Address: 0x314324, Func Offset: 0x4
	// Func End, Address: 0x31432c, Func Offset: 0xc
}

// JumpOutCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x314330
uint32 JumpOutCheck(void* object)
{
	// Line 140, Address: 0x314330, Func Offset: 0
	// Line 143, Address: 0x314334, Func Offset: 0x4
	// Func End, Address: 0x31433c, Func Offset: 0xc
}

// JumpInCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x314340
uint32 JumpInCB(void* object)
{
	// Line 129, Address: 0x314340, Func Offset: 0
	// Line 132, Address: 0x314344, Func Offset: 0x4
	// Func End, Address: 0x31434c, Func Offset: 0xc
}

// JumpInCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x314350
uint32 JumpInCheck(void* object)
{
	// Line 120, Address: 0x314350, Func Offset: 0
	// Line 123, Address: 0x314354, Func Offset: 0x4
	// Func End, Address: 0x31435c, Func Offset: 0xc
}

// OpenCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x314360
uint32 OpenCheck(void* object)
{
	// Line 109, Address: 0x314360, Func Offset: 0
	// Line 112, Address: 0x314368, Func Offset: 0x8
	// Func End, Address: 0x314370, Func Offset: 0x10
}

