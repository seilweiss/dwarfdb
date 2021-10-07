



void zEntGetShadowParams(xEnt* ent, xVec3* center, float32* radius, float32* strength, radius_enum rtype);
int8* zParamGetString(xModelAssetParam* param, uint32 size, int8* tok, int8* def);
xModelAssetParam* zEntGetModelParams(uint32 assetID, uint16* size);
void zEntAnimEvent_AutoAnim(zEnt* ent, uint32 animEvent, float32* animParam);
void zEntAnimEvent(zEnt* ent, uint32 animEvent, float32* animParam);
void zEntAnimEventCore(xModelInstance* model, xAnimTable* atbl, uint32 animEvent, float32* animParam);
void zEntParseModelInfo(xEnt* ent, uint32 assetID);
xModelInstance* zEntRecurseModelInfo(void* info, xEnt* ent);
void zEntEventAllOfType(uint32 toEvent, uint32 type);
void zEntEventAll(xBase* from, uint32 fromEvent, uint32 toEvent, float32* toParam);
void zEntUpdate(zEnt* ent, zScene* scene, float32 elapsedSec);
void zEntReset(zEnt* ent);
void zEntLoad(zEnt* ent, xSerial* s);
void zEntSave(zEnt* ent, xSerial* s);
void zEntSetup(zEnt* ent);
void zEntInit(zEnt* ent, xEntAsset* asset, uint32 type);

// zEntGetShadowParams__FP4xEntP5xVec3PfPfQ210xEntShadow11radius_enum
// Start address: 0x365c50
void zEntGetShadowParams(xEnt* ent, xVec3* center, float32* radius, float32* strength, radius_enum rtype)
{
	xBox* bbox;
	float32 cacheFudgeFactor;
	float32 r;
	xVec3* lower;
	xVec3* upper;
	// Line 1196, Address: 0x365c50, Func Offset: 0
	// Line 1198, Address: 0x365c60, Func Offset: 0x10
	// Line 1202, Address: 0x365c6c, Func Offset: 0x1c
	// Line 1209, Address: 0x365c78, Func Offset: 0x28
	// Line 1210, Address: 0x365c8c, Func Offset: 0x3c
	// Line 1213, Address: 0x365cc8, Func Offset: 0x78
	// Line 1227, Address: 0x365cd8, Func Offset: 0x88
	// Line 1213, Address: 0x365ce0, Func Offset: 0x90
	// Line 1230, Address: 0x365ce4, Func Offset: 0x94
	// Line 1213, Address: 0x365ce8, Func Offset: 0x98
	// Line 1214, Address: 0x365cf0, Func Offset: 0xa0
	// Line 1215, Address: 0x365d04, Func Offset: 0xb4
	// Line 1230, Address: 0x365d18, Func Offset: 0xc8
	// Line 1232, Address: 0x365d24, Func Offset: 0xd4
	// Line 1237, Address: 0x365d28, Func Offset: 0xd8
	// Line 1241, Address: 0x365d40, Func Offset: 0xf0
	// Line 1246, Address: 0x365d58, Func Offset: 0x108
	// Line 1247, Address: 0x365d60, Func Offset: 0x110
	// Line 1248, Address: 0x365d68, Func Offset: 0x118
	// Line 1249, Address: 0x365d70, Func Offset: 0x120
	// Line 1252, Address: 0x365d8c, Func Offset: 0x13c
	// Line 1200, Address: 0x365d94, Func Offset: 0x144
	// Line 1252, Address: 0x365da8, Func Offset: 0x158
	// Line 1238, Address: 0x365dac, Func Offset: 0x15c
	// Line 1252, Address: 0x365dc8, Func Offset: 0x178
	// Line 1242, Address: 0x365dcc, Func Offset: 0x17c
	// Line 1243, Address: 0x365dd4, Func Offset: 0x184
	// Line 1242, Address: 0x365de0, Func Offset: 0x190
	// Line 1252, Address: 0x365de4, Func Offset: 0x194
	// Line 1243, Address: 0x365dec, Func Offset: 0x19c
	// Line 1255, Address: 0x365df8, Func Offset: 0x1a8
	// Line 1257, Address: 0x365e14, Func Offset: 0x1c4
	// Line 1260, Address: 0x365e38, Func Offset: 0x1e8
	// Line 1265, Address: 0x365e40, Func Offset: 0x1f0
	// Line 1267, Address: 0x365e50, Func Offset: 0x200
	// Line 1270, Address: 0x365e58, Func Offset: 0x208
	// Line 1275, Address: 0x365e94, Func Offset: 0x244
	// Line 1278, Address: 0x365ed4, Func Offset: 0x284
	// Line 1289, Address: 0x365ee4, Func Offset: 0x294
	// Line 1308, Address: 0x365efc, Func Offset: 0x2ac
	// Func End, Address: 0x365f04, Func Offset: 0x2b4
}

// zParamGetString__FP16xModelAssetParamUiPCcPCc
// Start address: 0x365f10
int8* zParamGetString(xModelAssetParam* param, uint32 size, int8* tok, int8* def)
{
	// Line 1074, Address: 0x365f10, Func Offset: 0
	// Line 1075, Address: 0x365f28, Func Offset: 0x18
	// Line 1076, Address: 0x365f8c, Func Offset: 0x7c
	// Func End, Address: 0x365fa0, Func Offset: 0x90
}

// zEntGetModelParams__FUiPUs
// Start address: 0x365fa0
xModelAssetParam* zEntGetModelParams(uint32 assetID, uint16* size)
{
	uint32 bufsize;
	uint32 tempsize;
	void* info;
	xModelAssetInfo* minf;
	// Line 1036, Address: 0x365fa0, Func Offset: 0
	// Line 1039, Address: 0x365fb0, Func Offset: 0x10
	// Line 1041, Address: 0x365fb8, Func Offset: 0x18
	// Line 1044, Address: 0x365fcc, Func Offset: 0x2c
	// Line 1045, Address: 0x365fe8, Func Offset: 0x48
	// Line 1046, Address: 0x365ff0, Func Offset: 0x50
	// Line 1048, Address: 0x365ff4, Func Offset: 0x54
	// Line 1055, Address: 0x366010, Func Offset: 0x70
	// Line 1056, Address: 0x366020, Func Offset: 0x80
	// Func End, Address: 0x366030, Func Offset: 0x90
}

// zEntAnimEvent_AutoAnim__FP4zEntUiPCf
// Start address: 0x366030
void zEntAnimEvent_AutoAnim(zEnt* ent, uint32 animEvent, float32* animParam)
{
	xAnimSingle* single;
	int32 anum;
	xAnimTable* tab;
	xAnimState* ast;
	xAnimTable* tab;
	xAnimState* ast;
	int32 anum1;
	int32 anum2;
	int32 anum;
	xAnimTable* tab;
	xAnimState* ast;
	// Line 878, Address: 0x366030, Func Offset: 0
	// Line 884, Address: 0x366054, Func Offset: 0x24
	// Line 878, Address: 0x366058, Func Offset: 0x28
	// Line 884, Address: 0x36605c, Func Offset: 0x2c
	// Line 878, Address: 0x366060, Func Offset: 0x30
	// Line 881, Address: 0x366064, Func Offset: 0x34
	// Line 884, Address: 0x366068, Func Offset: 0x38
	// Line 889, Address: 0x36608c, Func Offset: 0x5c
	// Line 891, Address: 0x366094, Func Offset: 0x64
	// Line 895, Address: 0x3660a8, Func Offset: 0x78
	// Line 898, Address: 0x3660b8, Func Offset: 0x88
	// Line 899, Address: 0x3660bc, Func Offset: 0x8c
	// Line 903, Address: 0x3660c4, Func Offset: 0x94
	// Line 905, Address: 0x3660e0, Func Offset: 0xb0
	// Line 909, Address: 0x3660e8, Func Offset: 0xb8
	// Line 910, Address: 0x3660f0, Func Offset: 0xc0
	// Line 911, Address: 0x3660f8, Func Offset: 0xc8
	// Line 912, Address: 0x366108, Func Offset: 0xd8
	// Line 913, Address: 0x366110, Func Offset: 0xe0
	// Line 915, Address: 0x366118, Func Offset: 0xe8
	// Line 916, Address: 0x36611c, Func Offset: 0xec
	// Line 915, Address: 0x366120, Func Offset: 0xf0
	// Line 916, Address: 0x366128, Func Offset: 0xf8
	// Line 921, Address: 0x366134, Func Offset: 0x104
	// Line 922, Address: 0x366140, Func Offset: 0x110
	// Line 924, Address: 0x366144, Func Offset: 0x114
	// Line 925, Address: 0x366154, Func Offset: 0x124
	// Line 927, Address: 0x36615c, Func Offset: 0x12c
	// Line 933, Address: 0x366164, Func Offset: 0x134
	// Line 934, Address: 0x366168, Func Offset: 0x138
	// Line 937, Address: 0x366170, Func Offset: 0x140
	// Line 939, Address: 0x366180, Func Offset: 0x150
	// Line 942, Address: 0x366188, Func Offset: 0x158
	// Line 943, Address: 0x366194, Func Offset: 0x164
	// Line 945, Address: 0x366198, Func Offset: 0x168
	// Line 946, Address: 0x3661a4, Func Offset: 0x174
	// Line 948, Address: 0x3661ac, Func Offset: 0x17c
	// Line 952, Address: 0x3661b4, Func Offset: 0x184
	// Line 955, Address: 0x3661bc, Func Offset: 0x18c
	// Line 956, Address: 0x3661c0, Func Offset: 0x190
	// Line 959, Address: 0x3661c8, Func Offset: 0x198
	// Line 961, Address: 0x3661e8, Func Offset: 0x1b8
	// Line 966, Address: 0x3661f0, Func Offset: 0x1c0
	// Line 968, Address: 0x3661f8, Func Offset: 0x1c8
	// Line 969, Address: 0x3661fc, Func Offset: 0x1cc
	// Line 968, Address: 0x366200, Func Offset: 0x1d0
	// Line 969, Address: 0x366208, Func Offset: 0x1d8
	// Line 968, Address: 0x36620c, Func Offset: 0x1dc
	// Line 969, Address: 0x366210, Func Offset: 0x1e0
	// Line 980, Address: 0x366214, Func Offset: 0x1e4
	// Line 981, Address: 0x36621c, Func Offset: 0x1ec
	// Line 982, Address: 0x366224, Func Offset: 0x1f4
	// Line 983, Address: 0x36622c, Func Offset: 0x1fc
	// Line 987, Address: 0x366238, Func Offset: 0x208
	// Line 991, Address: 0x366244, Func Offset: 0x214
	// Line 987, Address: 0x366248, Func Offset: 0x218
	// Line 991, Address: 0x366250, Func Offset: 0x220
	// Line 987, Address: 0x366258, Func Offset: 0x228
	// Line 992, Address: 0x36625c, Func Offset: 0x22c
	// Line 995, Address: 0x366264, Func Offset: 0x234
	// Line 997, Address: 0x366280, Func Offset: 0x250
	// Line 999, Address: 0x366288, Func Offset: 0x258
	// Line 1001, Address: 0x366290, Func Offset: 0x260
	// Line 1002, Address: 0x366294, Func Offset: 0x264
	// Line 1001, Address: 0x366298, Func Offset: 0x268
	// Line 1002, Address: 0x3662a0, Func Offset: 0x270
	// Line 1005, Address: 0x3662ac, Func Offset: 0x27c
	// Line 1006, Address: 0x3662b8, Func Offset: 0x288
	// Line 1008, Address: 0x3662bc, Func Offset: 0x28c
	// Line 1009, Address: 0x3662cc, Func Offset: 0x29c
	// Line 1011, Address: 0x3662d4, Func Offset: 0x2a4
	// Line 1019, Address: 0x3662dc, Func Offset: 0x2ac
	// Line 1020, Address: 0x3662fc, Func Offset: 0x2cc
	// Line 1026, Address: 0x366308, Func Offset: 0x2d8
	// Func End, Address: 0x366328, Func Offset: 0x2f8
}

// zEntAnimEvent__FP4zEntUiPCf
// Start address: 0x366330
void zEntAnimEvent(zEnt* ent, uint32 animEvent, float32* animParam)
{
	// Line 790, Address: 0x366330, Func Offset: 0
	// Line 791, Address: 0x36633c, Func Offset: 0xc
	// Line 793, Address: 0x36634c, Func Offset: 0x1c
	// Line 794, Address: 0x366354, Func Offset: 0x24
	// Line 797, Address: 0x36635c, Func Offset: 0x2c
	// Line 798, Address: 0x36636c, Func Offset: 0x3c
	// Func End, Address: 0x366378, Func Offset: 0x48
}

// zEntAnimEventCore__FP14xModelInstanceP10xAnimTableUiPCfP4xEnt
// Start address: 0x366380
void zEntAnimEventCore(xModelInstance* model, xAnimTable* atbl, uint32 animEvent, float32* animParam)
{
	xAnimPlay* play;
	xAnimSingle* single;
	int32 anum;
	int8 name[12];
	xAnimState* ast;
	int8 name[12];
	xAnimState* ast;
	int32 anum1;
	int32 anum2;
	int8 name[12];
	xAnimState* ast;
	int32 anum;
	float32 prob;
	int8 name[12];
	xAnimState* ast;
	// Line 646, Address: 0x366380, Func Offset: 0
	// Line 647, Address: 0x3663a4, Func Offset: 0x24
	// Line 649, Address: 0x3663a8, Func Offset: 0x28
	// Line 650, Address: 0x3663b0, Func Offset: 0x30
	// Line 652, Address: 0x3663b4, Func Offset: 0x34
	// Line 654, Address: 0x3663bc, Func Offset: 0x3c
	// Line 658, Address: 0x3663e8, Func Offset: 0x68
	// Line 659, Address: 0x3663f0, Func Offset: 0x70
	// Line 662, Address: 0x366404, Func Offset: 0x84
	// Line 664, Address: 0x366418, Func Offset: 0x98
	// Line 666, Address: 0x366420, Func Offset: 0xa0
	// Line 667, Address: 0x36642c, Func Offset: 0xac
	// Line 668, Address: 0x366440, Func Offset: 0xc0
	// Line 669, Address: 0x366448, Func Offset: 0xc8
	// Line 671, Address: 0x36645c, Func Offset: 0xdc
	// Line 673, Address: 0x36646c, Func Offset: 0xec
	// Line 675, Address: 0x366474, Func Offset: 0xf4
	// Line 676, Address: 0x366488, Func Offset: 0x108
	// Line 680, Address: 0x36649c, Func Offset: 0x11c
	// Line 683, Address: 0x3664a4, Func Offset: 0x124
	// Line 684, Address: 0x3664b0, Func Offset: 0x130
	// Line 689, Address: 0x3664b8, Func Offset: 0x138
	// Line 694, Address: 0x3664c0, Func Offset: 0x140
	// Line 695, Address: 0x3664d0, Func Offset: 0x150
	// Line 697, Address: 0x3664d4, Func Offset: 0x154
	// Line 695, Address: 0x3664d8, Func Offset: 0x158
	// Line 697, Address: 0x3664dc, Func Offset: 0x15c
	// Line 696, Address: 0x3664e0, Func Offset: 0x160
	// Line 697, Address: 0x3664e4, Func Offset: 0x164
	// Line 701, Address: 0x3664ec, Func Offset: 0x16c
	// Line 705, Address: 0x3664f4, Func Offset: 0x174
	// Line 708, Address: 0x3664fc, Func Offset: 0x17c
	// Line 709, Address: 0x366500, Func Offset: 0x180
	// Line 712, Address: 0x366508, Func Offset: 0x188
	// Line 714, Address: 0x366520, Func Offset: 0x1a0
	// Line 715, Address: 0x366528, Func Offset: 0x1a8
	// Line 717, Address: 0x36652c, Func Offset: 0x1ac
	// Line 721, Address: 0x366534, Func Offset: 0x1b4
	// Line 722, Address: 0x36653c, Func Offset: 0x1bc
	// Line 723, Address: 0x366540, Func Offset: 0x1c0
	// Line 722, Address: 0x366544, Func Offset: 0x1c4
	// Line 723, Address: 0x36654c, Func Offset: 0x1cc
	// Line 722, Address: 0x366550, Func Offset: 0x1d0
	// Line 723, Address: 0x366554, Func Offset: 0x1d4
	// Line 727, Address: 0x366558, Func Offset: 0x1d8
	// Line 729, Address: 0x366578, Func Offset: 0x1f8
	// Line 732, Address: 0x366580, Func Offset: 0x200
	// Line 737, Address: 0x366588, Func Offset: 0x208
	// Line 739, Address: 0x3665b0, Func Offset: 0x230
	// Line 741, Address: 0x3665c0, Func Offset: 0x240
	// Line 742, Address: 0x3665c8, Func Offset: 0x248
	// Line 743, Address: 0x3665d4, Func Offset: 0x254
	// Line 745, Address: 0x3665d8, Func Offset: 0x258
	// Line 746, Address: 0x3665e8, Func Offset: 0x268
	// Line 751, Address: 0x3665f0, Func Offset: 0x270
	// Line 755, Address: 0x3665f8, Func Offset: 0x278
	// Line 756, Address: 0x366600, Func Offset: 0x280
	// Line 757, Address: 0x366604, Func Offset: 0x284
	// Line 756, Address: 0x366614, Func Offset: 0x294
	// Line 762, Address: 0x366624, Func Offset: 0x2a4
	// Line 764, Address: 0x366688, Func Offset: 0x308
	// Line 769, Address: 0x366690, Func Offset: 0x310
	// Line 771, Address: 0x3666a4, Func Offset: 0x324
	// Line 773, Address: 0x3666b4, Func Offset: 0x334
	// Line 774, Address: 0x3666bc, Func Offset: 0x33c
	// Line 775, Address: 0x3666c0, Func Offset: 0x340
	// Line 777, Address: 0x3666d0, Func Offset: 0x350
	// Line 778, Address: 0x3666dc, Func Offset: 0x35c
	// Line 786, Address: 0x3666e4, Func Offset: 0x364
	// Line 677, Address: 0x3666ec, Func Offset: 0x36c
	// Line 786, Address: 0x3666f0, Func Offset: 0x370
	// Line 678, Address: 0x3666f4, Func Offset: 0x374
	// Line 786, Address: 0x3666fc, Func Offset: 0x37c
	// Func End, Address: 0x366720, Func Offset: 0x3a0
}

// zEntParseModelInfo__FP4xEntUi
// Start address: 0x366720
void zEntParseModelInfo(xEnt* ent, uint32 assetID)
{
	uint32 bufsize;
	void* info;
	// Line 601, Address: 0x366720, Func Offset: 0
	// Line 603, Address: 0x366738, Func Offset: 0x18
	// Line 615, Address: 0x366748, Func Offset: 0x28
	// Line 618, Address: 0x366750, Func Offset: 0x30
	// Line 621, Address: 0x366764, Func Offset: 0x44
	// Line 623, Address: 0x366770, Func Offset: 0x50
	// Line 626, Address: 0x366778, Func Offset: 0x58
	// Line 627, Address: 0x366780, Func Offset: 0x60
	// Line 642, Address: 0x366788, Func Offset: 0x68
	// Func End, Address: 0x36679c, Func Offset: 0x7c
}

// zEntRecurseModelInfo__FPvP4xEnt
// Start address: 0x3667a0
xModelInstance* zEntRecurseModelInfo(void* info, xEnt* ent)
{
	uint32 i;
	uint32 bufsize;
	RpAtomic* imodel;
	xModelInstance* tempInst[64];
	xModelAssetInfo* zinfo;
	xModelAssetInst* zinst;
	xAnimTable* table;
	// Line 541, Address: 0x3667a0, Func Offset: 0
	// Line 548, Address: 0x3667a4, Func Offset: 0x4
	// Line 541, Address: 0x3667a8, Func Offset: 0x8
	// Line 548, Address: 0x3667bc, Func Offset: 0x1c
	// Line 541, Address: 0x3667c0, Func Offset: 0x20
	// Line 545, Address: 0x3667c4, Func Offset: 0x24
	// Line 541, Address: 0x3667c8, Func Offset: 0x28
	// Line 548, Address: 0x3667cc, Func Offset: 0x2c
	// Line 541, Address: 0x3667d0, Func Offset: 0x30
	// Line 548, Address: 0x3667d4, Func Offset: 0x34
	// Line 552, Address: 0x3667dc, Func Offset: 0x3c
	// Line 592, Address: 0x3667f0, Func Offset: 0x50
	// Line 597, Address: 0x3667f8, Func Offset: 0x58
	// Line 553, Address: 0x366814, Func Offset: 0x74
	// Line 558, Address: 0x366818, Func Offset: 0x78
	// Line 597, Address: 0x366820, Func Offset: 0x80
	// Line 569, Address: 0x366830, Func Offset: 0x90
	// Line 597, Address: 0x366840, Func Offset: 0xa0
	// Line 573, Address: 0x36684c, Func Offset: 0xac
	// Line 597, Address: 0x366850, Func Offset: 0xb0
	// Line 574, Address: 0x366868, Func Offset: 0xc8
	// Line 597, Address: 0x36687c, Func Offset: 0xdc
	// Line 578, Address: 0x3668a0, Func Offset: 0x100
	// Line 597, Address: 0x3668a8, Func Offset: 0x108
	// Line 579, Address: 0x3668b0, Func Offset: 0x110
	// Line 597, Address: 0x3668bc, Func Offset: 0x11c
	// Line 580, Address: 0x3668cc, Func Offset: 0x12c
	// Line 597, Address: 0x3668d4, Func Offset: 0x134
	// Line 584, Address: 0x3668f0, Func Offset: 0x150
	// Line 597, Address: 0x366904, Func Offset: 0x164
	// Line 564, Address: 0x36697c, Func Offset: 0x1dc
	// Line 597, Address: 0x366984, Func Offset: 0x1e4
	// Line 567, Address: 0x366990, Func Offset: 0x1f0
	// Line 597, Address: 0x366998, Func Offset: 0x1f8
	// Line 594, Address: 0x3669ac, Func Offset: 0x20c
	// Line 597, Address: 0x3669b4, Func Offset: 0x214
	// Line 598, Address: 0x3669c8, Func Offset: 0x228
	// Func End, Address: 0x3669ec, Func Offset: 0x24c
}

// zEntEventAllOfType__FUiUi
// Start address: 0x3669f0
void zEntEventAllOfType(uint32 toEvent, uint32 type)
{
	// Line 535, Address: 0x3669f0, Func Offset: 0
	// Line 536, Address: 0x3669f4, Func Offset: 0x4
	// Line 535, Address: 0x3669f8, Func Offset: 0x8
	// Line 536, Address: 0x366a14, Func Offset: 0x24
	// Line 537, Address: 0x366a88, Func Offset: 0x98
	// Func End, Address: 0x366aa8, Func Offset: 0xb8
}

// zEntEventAll__FP5xBaseUiUiPf
// Start address: 0x366ab0
void zEntEventAll(xBase* from, uint32 fromEvent, uint32 toEvent, float32* toParam)
{
	zScene* s;
	uint16 i;
	// Line 468, Address: 0x366ab0, Func Offset: 0
	// Line 469, Address: 0x366ab4, Func Offset: 0x4
	// Line 468, Address: 0x366ab8, Func Offset: 0x8
	// Line 469, Address: 0x366ae8, Func Offset: 0x38
	// Line 472, Address: 0x366aec, Func Offset: 0x3c
	// Line 475, Address: 0x366b0c, Func Offset: 0x5c
	// Line 476, Address: 0x366b24, Func Offset: 0x74
	// Line 478, Address: 0x366b40, Func Offset: 0x90
	// Line 479, Address: 0x366b58, Func Offset: 0xa8
	// Func End, Address: 0x366b80, Func Offset: 0xd0
}

// zEntUpdate__FP4zEntP6zScenef
// Start address: 0x366b80
void zEntUpdate(zEnt* ent, zScene* scene, float32 elapsedSec)
{
	// Line 444, Address: 0x366b80, Func Offset: 0
	// Func End, Address: 0x366b88, Func Offset: 0x8
}

// zEntReset__FP4zEnt
// Start address: 0x366b90
void zEntReset(zEnt* ent)
{
	xAnimState* ast;
	xAnimSingle* single;
	// Line 405, Address: 0x366b90, Func Offset: 0
	// Line 406, Address: 0x366b9c, Func Offset: 0xc
	// Line 409, Address: 0x366ba4, Func Offset: 0x14
	// Line 410, Address: 0x366bc0, Func Offset: 0x30
	// Line 411, Address: 0x366bc8, Func Offset: 0x38
	// Line 413, Address: 0x366bd8, Func Offset: 0x48
	// Line 415, Address: 0x366be0, Func Offset: 0x50
	// Line 417, Address: 0x366be4, Func Offset: 0x54
	// Line 419, Address: 0x366be8, Func Offset: 0x58
	// Line 418, Address: 0x366bec, Func Offset: 0x5c
	// Line 419, Address: 0x366bf0, Func Offset: 0x60
	// Line 420, Address: 0x366bf4, Func Offset: 0x64
	// Line 428, Address: 0x366bfc, Func Offset: 0x6c
	// Line 434, Address: 0x366c5c, Func Offset: 0xcc
	// Line 428, Address: 0x366c60, Func Offset: 0xd0
	// Line 434, Address: 0x366c64, Func Offset: 0xd4
	// Line 436, Address: 0x366c74, Func Offset: 0xe4
	// Line 439, Address: 0x366c80, Func Offset: 0xf0
	// Line 440, Address: 0x366c94, Func Offset: 0x104
	// Line 439, Address: 0x366c9c, Func Offset: 0x10c
	// Line 440, Address: 0x366ca8, Func Offset: 0x118
	// Line 439, Address: 0x366cb0, Func Offset: 0x120
	// Line 440, Address: 0x366cc4, Func Offset: 0x134
	// Line 439, Address: 0x366cfc, Func Offset: 0x16c
	// Line 440, Address: 0x366d00, Func Offset: 0x170
	// Line 439, Address: 0x366d08, Func Offset: 0x178
	// Line 440, Address: 0x366d0c, Func Offset: 0x17c
	// Line 439, Address: 0x366d14, Func Offset: 0x184
	// Line 440, Address: 0x366d18, Func Offset: 0x188
	// Line 439, Address: 0x366d20, Func Offset: 0x190
	// Line 440, Address: 0x366d24, Func Offset: 0x194
	// Line 439, Address: 0x366d2c, Func Offset: 0x19c
	// Line 440, Address: 0x366d30, Func Offset: 0x1a0
	// Line 439, Address: 0x366d48, Func Offset: 0x1b8
	// Line 440, Address: 0x366d4c, Func Offset: 0x1bc
	// Line 439, Address: 0x366d54, Func Offset: 0x1c4
	// Line 440, Address: 0x366d58, Func Offset: 0x1c8
	// Line 439, Address: 0x366d64, Func Offset: 0x1d4
	// Line 440, Address: 0x366d70, Func Offset: 0x1e0
	// Func End, Address: 0x366d7c, Func Offset: 0x1ec
}

// zEntLoad__FP4zEntP7xSerial
// Start address: 0x366d80
void zEntLoad(zEnt* ent, xSerial* s)
{
	// Line 398, Address: 0x366d80, Func Offset: 0
	// Func End, Address: 0x366d88, Func Offset: 0x8
}

// zEntSave__FP4zEntP7xSerial
// Start address: 0x366d90
void zEntSave(zEnt* ent, xSerial* s)
{
	// Line 379, Address: 0x366d90, Func Offset: 0
	// Func End, Address: 0x366d98, Func Offset: 0x8
}

// zEntSetup__FP4zEnt
// Start address: 0x366da0
void zEntSetup(zEnt* ent)
{
	// Line 359, Address: 0x366da0, Func Offset: 0
	// Line 363, Address: 0x366dac, Func Offset: 0xc
	// Line 365, Address: 0x366db4, Func Offset: 0x14
	// Line 366, Address: 0x366dc8, Func Offset: 0x28
	// Line 365, Address: 0x366dd0, Func Offset: 0x30
	// Line 366, Address: 0x366ddc, Func Offset: 0x3c
	// Line 365, Address: 0x366de4, Func Offset: 0x44
	// Line 366, Address: 0x366df8, Func Offset: 0x58
	// Line 365, Address: 0x366e30, Func Offset: 0x90
	// Line 366, Address: 0x366e34, Func Offset: 0x94
	// Line 365, Address: 0x366e3c, Func Offset: 0x9c
	// Line 366, Address: 0x366e40, Func Offset: 0xa0
	// Line 365, Address: 0x366e48, Func Offset: 0xa8
	// Line 366, Address: 0x366e4c, Func Offset: 0xac
	// Line 365, Address: 0x366e54, Func Offset: 0xb4
	// Line 366, Address: 0x366e58, Func Offset: 0xb8
	// Line 365, Address: 0x366e60, Func Offset: 0xc0
	// Line 366, Address: 0x366e64, Func Offset: 0xc4
	// Line 365, Address: 0x366e7c, Func Offset: 0xdc
	// Line 366, Address: 0x366e80, Func Offset: 0xe0
	// Line 365, Address: 0x366e88, Func Offset: 0xe8
	// Line 366, Address: 0x366e8c, Func Offset: 0xec
	// Line 365, Address: 0x366e98, Func Offset: 0xf8
	// Line 366, Address: 0x366ea4, Func Offset: 0x104
	// Func End, Address: 0x366eb0, Func Offset: 0x110
}

// zEntInit__FP4zEntP9xEntAssetUi
// Start address: 0x366eb0
void zEntInit(zEnt* ent, xEntAsset* asset, uint32 type)
{
	int32 num_used;
	xAnimState* ast;
	xAnimSingle* single;
	// Line 115, Address: 0x366eb0, Func Offset: 0
	// Line 120, Address: 0x366ecc, Func Offset: 0x1c
	// Line 123, Address: 0x366ed4, Func Offset: 0x24
	// Line 126, Address: 0x366ed8, Func Offset: 0x28
	// Line 123, Address: 0x366edc, Func Offset: 0x2c
	// Line 126, Address: 0x366ee4, Func Offset: 0x34
	// Line 134, Address: 0x366ef0, Func Offset: 0x40
	// Line 142, Address: 0x366f00, Func Offset: 0x50
	// Line 153, Address: 0x366f10, Func Offset: 0x60
	// Line 158, Address: 0x366f20, Func Offset: 0x70
	// Line 167, Address: 0x366f30, Func Offset: 0x80
	// Line 182, Address: 0x366f3c, Func Offset: 0x8c
	// Line 197, Address: 0x366f4c, Func Offset: 0x9c
	// Line 203, Address: 0x366f5c, Func Offset: 0xac
	// Line 212, Address: 0x366f6c, Func Offset: 0xbc
	// Line 238, Address: 0x366f88, Func Offset: 0xd8
	// Line 240, Address: 0x366f98, Func Offset: 0xe8
	// Line 257, Address: 0x366fa8, Func Offset: 0xf8
	// Line 274, Address: 0x366fb8, Func Offset: 0x108
	// Line 290, Address: 0x366fc8, Func Offset: 0x118
	// Line 291, Address: 0x366fd8, Func Offset: 0x128
	// Line 295, Address: 0x366fdc, Func Offset: 0x12c
	// Line 291, Address: 0x366fe0, Func Offset: 0x130
	// Line 306, Address: 0x366fe4, Func Offset: 0x134
	// Line 303, Address: 0x366fe8, Func Offset: 0x138
	// Line 295, Address: 0x366fec, Func Offset: 0x13c
	// Line 303, Address: 0x366ff0, Func Offset: 0x140
	// Line 306, Address: 0x366ff4, Func Offset: 0x144
	// Line 310, Address: 0x367048, Func Offset: 0x198
	// Line 317, Address: 0x367058, Func Offset: 0x1a8
	// Line 344, Address: 0x367060, Func Offset: 0x1b0
	// Line 352, Address: 0x367064, Func Offset: 0x1b4
	// Line 354, Address: 0x36706c, Func Offset: 0x1bc
	// Line 127, Address: 0x367074, Func Offset: 0x1c4
	// Line 128, Address: 0x367078, Func Offset: 0x1c8
	// Line 354, Address: 0x36707c, Func Offset: 0x1cc
	// Line 129, Address: 0x367084, Func Offset: 0x1d4
	// Line 354, Address: 0x367088, Func Offset: 0x1d8
	// Line 131, Address: 0x3670a8, Func Offset: 0x1f8
	// Line 354, Address: 0x3670b0, Func Offset: 0x200
	// Line 131, Address: 0x3670b8, Func Offset: 0x208
	// Line 354, Address: 0x3670bc, Func Offset: 0x20c
	// Line 131, Address: 0x3670c4, Func Offset: 0x214
	// Line 354, Address: 0x3670d4, Func Offset: 0x224
	// Line 133, Address: 0x3670e0, Func Offset: 0x230
	// Line 135, Address: 0x3670e8, Func Offset: 0x238
	// Line 136, Address: 0x3670ec, Func Offset: 0x23c
	// Line 354, Address: 0x3670f0, Func Offset: 0x240
	// Line 137, Address: 0x3670f8, Func Offset: 0x248
	// Line 354, Address: 0x3670fc, Func Offset: 0x24c
	// Line 138, Address: 0x367108, Func Offset: 0x258
	// Line 354, Address: 0x36710c, Func Offset: 0x25c
	// Line 140, Address: 0x367128, Func Offset: 0x278
	// Line 354, Address: 0x367130, Func Offset: 0x280
	// Line 140, Address: 0x367138, Func Offset: 0x288
	// Line 354, Address: 0x36713c, Func Offset: 0x28c
	// Line 140, Address: 0x367144, Func Offset: 0x294
	// Line 354, Address: 0x367154, Func Offset: 0x2a4
	// Line 141, Address: 0x367160, Func Offset: 0x2b0
	// Line 143, Address: 0x367168, Func Offset: 0x2b8
	// Line 144, Address: 0x36716c, Func Offset: 0x2bc
	// Line 354, Address: 0x367170, Func Offset: 0x2c0
	// Line 145, Address: 0x367178, Func Offset: 0x2c8
	// Line 354, Address: 0x36717c, Func Offset: 0x2cc
	// Line 151, Address: 0x3671a0, Func Offset: 0x2f0
	// Line 354, Address: 0x3671a8, Func Offset: 0x2f8
	// Line 151, Address: 0x3671b0, Func Offset: 0x300
	// Line 354, Address: 0x3671b4, Func Offset: 0x304
	// Line 151, Address: 0x3671bc, Func Offset: 0x30c
	// Line 354, Address: 0x3671cc, Func Offset: 0x31c
	// Line 153, Address: 0x3671d8, Func Offset: 0x328
	// Line 354, Address: 0x3671e0, Func Offset: 0x330
	// Line 158, Address: 0x3671e4, Func Offset: 0x334
	// Line 160, Address: 0x3671ec, Func Offset: 0x33c
	// Line 354, Address: 0x3671f0, Func Offset: 0x340
	// Line 161, Address: 0x367210, Func Offset: 0x360
	// Line 354, Address: 0x367218, Func Offset: 0x368
	// Line 161, Address: 0x367220, Func Offset: 0x370
	// Line 354, Address: 0x367224, Func Offset: 0x374
	// Line 161, Address: 0x36722c, Func Offset: 0x37c
	// Line 354, Address: 0x36723c, Func Offset: 0x38c
	// Line 164, Address: 0x36724c, Func Offset: 0x39c
	// Line 354, Address: 0x367250, Func Offset: 0x3a0
	// Line 167, Address: 0x36725c, Func Offset: 0x3ac
	// Line 168, Address: 0x367264, Func Offset: 0x3b4
	// Line 354, Address: 0x367268, Func Offset: 0x3b8
	// Line 169, Address: 0x367270, Func Offset: 0x3c0
	// Line 354, Address: 0x367274, Func Offset: 0x3c4
	// Line 170, Address: 0x36727c, Func Offset: 0x3cc
	// Line 171, Address: 0x367280, Func Offset: 0x3d0
	// Line 354, Address: 0x367288, Func Offset: 0x3d8
	// Line 176, Address: 0x3672a8, Func Offset: 0x3f8
	// Line 354, Address: 0x3672b0, Func Offset: 0x400
	// Line 176, Address: 0x3672b8, Func Offset: 0x408
	// Line 354, Address: 0x3672bc, Func Offset: 0x40c
	// Line 176, Address: 0x3672c4, Func Offset: 0x414
	// Line 354, Address: 0x3672d4, Func Offset: 0x424
	// Line 179, Address: 0x3672e4, Func Offset: 0x434
	// Line 354, Address: 0x3672e8, Func Offset: 0x438
	// Line 182, Address: 0x3672f4, Func Offset: 0x444
	// Line 183, Address: 0x3672fc, Func Offset: 0x44c
	// Line 354, Address: 0x367300, Func Offset: 0x450
	// Line 184, Address: 0x367308, Func Offset: 0x458
	// Line 354, Address: 0x36730c, Func Offset: 0x45c
	// Line 185, Address: 0x367314, Func Offset: 0x464
	// Line 186, Address: 0x367318, Func Offset: 0x468
	// Line 354, Address: 0x367320, Func Offset: 0x470
	// Line 191, Address: 0x367340, Func Offset: 0x490
	// Line 354, Address: 0x367348, Func Offset: 0x498
	// Line 191, Address: 0x367350, Func Offset: 0x4a0
	// Line 354, Address: 0x367354, Func Offset: 0x4a4
	// Line 191, Address: 0x36735c, Func Offset: 0x4ac
	// Line 354, Address: 0x36736c, Func Offset: 0x4bc
	// Line 194, Address: 0x36737c, Func Offset: 0x4cc
	// Line 354, Address: 0x367380, Func Offset: 0x4d0
	// Line 197, Address: 0x36738c, Func Offset: 0x4dc
	// Line 200, Address: 0x367394, Func Offset: 0x4e4
	// Line 354, Address: 0x367398, Func Offset: 0x4e8
	// Line 203, Address: 0x36739c, Func Offset: 0x4ec
	// Line 205, Address: 0x3673a4, Func Offset: 0x4f4
	// Line 207, Address: 0x3673a8, Func Offset: 0x4f8
	// Line 354, Address: 0x3673ac, Func Offset: 0x4fc
	// Line 209, Address: 0x3673d4, Func Offset: 0x524
	// Line 354, Address: 0x3673dc, Func Offset: 0x52c
	// Line 209, Address: 0x3673e4, Func Offset: 0x534
	// Line 354, Address: 0x3673e8, Func Offset: 0x538
	// Line 209, Address: 0x3673f0, Func Offset: 0x540
	// Line 354, Address: 0x367400, Func Offset: 0x550
	// Line 212, Address: 0x36740c, Func Offset: 0x55c
	// Line 214, Address: 0x367414, Func Offset: 0x564
	// Line 354, Address: 0x367418, Func Offset: 0x568
	// Line 221, Address: 0x367420, Func Offset: 0x570
	// Line 354, Address: 0x367424, Func Offset: 0x574
	// Line 222, Address: 0x36742c, Func Offset: 0x57c
	// Line 223, Address: 0x367430, Func Offset: 0x580
	// Line 224, Address: 0x367438, Func Offset: 0x588
	// Line 354, Address: 0x36743c, Func Offset: 0x58c
	// Line 226, Address: 0x367440, Func Offset: 0x590
	// Line 354, Address: 0x367444, Func Offset: 0x594
	// Line 229, Address: 0x367458, Func Offset: 0x5a8
	// Line 354, Address: 0x36745c, Func Offset: 0x5ac
	// Line 229, Address: 0x367468, Func Offset: 0x5b8
	// Line 354, Address: 0x367470, Func Offset: 0x5c0
	// Line 229, Address: 0x367478, Func Offset: 0x5c8
	// Line 354, Address: 0x36747c, Func Offset: 0x5cc
	// Line 229, Address: 0x367484, Func Offset: 0x5d4
	// Line 354, Address: 0x367490, Func Offset: 0x5e0
	// Line 238, Address: 0x3674b0, Func Offset: 0x600
	// Line 241, Address: 0x3674b8, Func Offset: 0x608
	// Line 354, Address: 0x3674bc, Func Offset: 0x60c
	// Line 242, Address: 0x3674c4, Func Offset: 0x614
	// Line 354, Address: 0x3674c8, Func Offset: 0x618
	// Line 243, Address: 0x3674d0, Func Offset: 0x620
	// Line 244, Address: 0x3674d4, Func Offset: 0x624
	// Line 354, Address: 0x3674dc, Func Offset: 0x62c
	// Line 247, Address: 0x3674e0, Func Offset: 0x630
	// Line 354, Address: 0x3674e4, Func Offset: 0x634
	// Line 248, Address: 0x3674f0, Func Offset: 0x640
	// Line 354, Address: 0x3674f4, Func Offset: 0x644
	// Line 251, Address: 0x367510, Func Offset: 0x660
	// Line 354, Address: 0x367518, Func Offset: 0x668
	// Line 251, Address: 0x367520, Func Offset: 0x670
	// Line 354, Address: 0x367524, Func Offset: 0x674
	// Line 251, Address: 0x36752c, Func Offset: 0x67c
	// Line 354, Address: 0x36753c, Func Offset: 0x68c
	// Line 257, Address: 0x367554, Func Offset: 0x6a4
	// Line 258, Address: 0x36755c, Func Offset: 0x6ac
	// Line 354, Address: 0x367560, Func Offset: 0x6b0
	// Line 259, Address: 0x367568, Func Offset: 0x6b8
	// Line 354, Address: 0x36756c, Func Offset: 0x6bc
	// Line 260, Address: 0x367574, Func Offset: 0x6c4
	// Line 261, Address: 0x367578, Func Offset: 0x6c8
	// Line 354, Address: 0x367580, Func Offset: 0x6d0
	// Line 264, Address: 0x367584, Func Offset: 0x6d4
	// Line 354, Address: 0x367588, Func Offset: 0x6d8
	// Line 265, Address: 0x367594, Func Offset: 0x6e4
	// Line 354, Address: 0x367598, Func Offset: 0x6e8
	// Line 268, Address: 0x3675b4, Func Offset: 0x704
	// Line 354, Address: 0x3675bc, Func Offset: 0x70c
	// Line 268, Address: 0x3675c4, Func Offset: 0x714
	// Line 354, Address: 0x3675c8, Func Offset: 0x718
	// Line 268, Address: 0x3675d0, Func Offset: 0x720
	// Line 354, Address: 0x3675e0, Func Offset: 0x730
	// Line 274, Address: 0x3675f8, Func Offset: 0x748
	// Line 275, Address: 0x367600, Func Offset: 0x750
	// Line 354, Address: 0x367604, Func Offset: 0x754
	// Line 276, Address: 0x36760c, Func Offset: 0x75c
	// Line 354, Address: 0x367610, Func Offset: 0x760
	// Line 277, Address: 0x367618, Func Offset: 0x768
	// Line 278, Address: 0x36761c, Func Offset: 0x76c
	// Line 354, Address: 0x367624, Func Offset: 0x774
	// Line 281, Address: 0x367628, Func Offset: 0x778
	// Line 354, Address: 0x36762c, Func Offset: 0x77c
	// Line 284, Address: 0x36764c, Func Offset: 0x79c
	// Line 354, Address: 0x367654, Func Offset: 0x7a4
	// Line 284, Address: 0x36765c, Func Offset: 0x7ac
	// Line 354, Address: 0x367660, Func Offset: 0x7b0
	// Line 284, Address: 0x367668, Func Offset: 0x7b8
	// Line 354, Address: 0x367678, Func Offset: 0x7c8
	// Line 290, Address: 0x367690, Func Offset: 0x7e0
	// Line 354, Address: 0x367698, Func Offset: 0x7e8
	// Line 343, Address: 0x3676a8, Func Offset: 0x7f8
	// Line 354, Address: 0x3676b0, Func Offset: 0x800
	// Line 323, Address: 0x3676bc, Func Offset: 0x80c
	// Line 354, Address: 0x3676c0, Func Offset: 0x810
	// Line 334, Address: 0x3676f0, Func Offset: 0x840
	// Line 354, Address: 0x3676f4, Func Offset: 0x844
	// Line 334, Address: 0x3676f8, Func Offset: 0x848
	// Line 354, Address: 0x3676fc, Func Offset: 0x84c
	// Line 335, Address: 0x36770c, Func Offset: 0x85c
	// Line 354, Address: 0x367710, Func Offset: 0x860
	// Line 339, Address: 0x36771c, Func Offset: 0x86c
	// Line 354, Address: 0x367724, Func Offset: 0x874
	// Func End, Address: 0x36773c, Func Offset: 0x88c
}

