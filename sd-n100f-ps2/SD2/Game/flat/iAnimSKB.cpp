typedef struct iAnimSKBKey;
typedef struct _xQuat;
typedef struct iAnimSKBHeader;
typedef struct _xVec3;
typedef struct ANMHeader;
typedef struct SKAHeader;
typedef struct SKAKey;
typedef struct ANMKey;

typedef int32(*type_1)(void*, void*);
typedef int32(*type_14)(void*, void*);

typedef float32 type_0[3];
typedef int16 type_2[4];
typedef int16 type_3[3];
typedef float32 type_4[4];
typedef float32 type_5[24];
typedef float32 type_6[4];
typedef float32 type_7[3];
typedef int16 type_8[4];
typedef float32 type_9[4];
typedef int16 type_10[3];
typedef float32 type_11[3];
typedef float32 type_12[3];
typedef float32 type_13[3];
typedef float32 type_15[3];
typedef float32 type_16[3];
typedef float32 type_17[3];
typedef float32 type_18[3];
typedef SKAKey* type_19[64];

struct iAnimSKBKey
{
	uint16 TimeIndex;
	int16 Quat[4];
	int16 Tran[3];
};

struct _xQuat
{
	_xVec3 v;
	float32 s;
};

struct iAnimSKBHeader
{
	uint32 Magic;
	uint32 Flags;
	uint16 BoneCount;
	uint16 TimeCount;
	uint32 KeyCount;
	float32 Scale[3];
};

struct _xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct ANMHeader
{
	uint32 chunkType;
	uint32 chunkLength;
	uint32 chunkVersion;
	int32 hanimVersion;
	int32 hanimTypeID;
	uint32 numFrames;
	int32 flags;
	float32 duration;
};

struct SKAHeader
{
	uint32 numFrames;
	uint32 flags;
	float32 duration;
};

struct SKAKey
{
	float32 quat[4];
	float32 tran[3];
	float32 time;
	uint32 prevFrame;
};

struct ANMKey
{
	float32 time;
	float32 quat[4];
	float32 tran[3];
	uint32 prevFrame;
};

float32 slerpPolynomial[24];
int32(*CmpBoneTime)(void*, void*);
uint32 gActiveHeap;
int32(*CmpTime)(void*, void*);
uint8* giAnimScratch;

void _iAnimSKBFlip180(iAnimSKBHeader* data, uint32 bone);
void _iAnimSKBAdjustTranslate(iAnimSKBHeader* data, uint32 bone, float32* tran);
void _iAnimSKBSwapTranslate(iAnimSKBHeader* data, uint32 bonelo, uint32 bonehi);
float32 iAnimDurationSKB(iAnimSKBHeader* data);
void _iAnimSKBFixTransPop(void* data, void* pose, uint32 maxbone);
void iAnimEvalSKB(iAnimSKBHeader* data, float32 time, uint32 flags, _xVec3* tran, _xQuat* quat);

// _iAnimSKBFlip180__FP14iAnimSKBHeaderUi
// Start address: 0x11be00
void _iAnimSKBFlip180(iAnimSKBHeader* data, uint32 bone)
{
	float32 _z;
	float32 _y;
	float32 _x;
	float32 _s;
	float32 quat[4];
	uint16* offsets;
	iAnimSKBKey* keys;
	uint32 tcount;
	uint32 kcount;
	uint32 keylast;
	uint32 keyfirst;
	uint32 i;
	// Line 1208, Address: 0x11be00, Func Offset: 0
	// Line 1214, Address: 0x11be04, Func Offset: 0x4
	// Line 1208, Address: 0x11be08, Func Offset: 0x8
	// Line 1214, Address: 0x11be0c, Func Offset: 0xc
	// Line 1209, Address: 0x11be14, Func Offset: 0x14
	// Line 1211, Address: 0x11be18, Func Offset: 0x18
	// Line 1207, Address: 0x11be28, Func Offset: 0x28
	// Line 1214, Address: 0x11be2c, Func Offset: 0x2c
	// Line 1218, Address: 0x11be34, Func Offset: 0x34
	// Line 1217, Address: 0x11be3c, Func Offset: 0x3c
	// Line 1220, Address: 0x11be44, Func Offset: 0x44
	// Line 1218, Address: 0x11be48, Func Offset: 0x48
	// Line 1217, Address: 0x11be4c, Func Offset: 0x4c
	// Line 1218, Address: 0x11be50, Func Offset: 0x50
	// Line 1220, Address: 0x11be60, Func Offset: 0x60
	// Line 1221, Address: 0x11be7c, Func Offset: 0x7c
	// Line 1224, Address: 0x11be94, Func Offset: 0x94
	// Line 1229, Address: 0x11be9c, Func Offset: 0x9c
	// Line 1224, Address: 0x11bea4, Func Offset: 0xa4
	// Line 1229, Address: 0x11bef8, Func Offset: 0xf8
	// Line 1224, Address: 0x11befc, Func Offset: 0xfc
	// Line 1229, Address: 0x11bf20, Func Offset: 0x120
	// Line 1230, Address: 0x11bf84, Func Offset: 0x184
	// Line 1229, Address: 0x11bf90, Func Offset: 0x190
	// Line 1230, Address: 0x11bf94, Func Offset: 0x194
	// Line 1231, Address: 0x11bff8, Func Offset: 0x1f8
	// Line 1230, Address: 0x11c004, Func Offset: 0x204
	// Line 1231, Address: 0x11c008, Func Offset: 0x208
	// Line 1232, Address: 0x11c06c, Func Offset: 0x26c
	// Line 1231, Address: 0x11c078, Func Offset: 0x278
	// Line 1232, Address: 0x11c07c, Func Offset: 0x27c
	// Line 1235, Address: 0x11c0ec, Func Offset: 0x2ec
	// Line 1236, Address: 0x11c0f8, Func Offset: 0x2f8
	// Line 1237, Address: 0x11c104, Func Offset: 0x304
	// Line 1238, Address: 0x11c108, Func Offset: 0x308
	// Line 1239, Address: 0x11c118, Func Offset: 0x318
	// Func End, Address: 0x11c120, Func Offset: 0x320
}

// _iAnimSKBAdjustTranslate__FP14iAnimSKBHeaderUiPf
// Start address: 0x11c120
void _iAnimSKBAdjustTranslate(iAnimSKBHeader* data, uint32 bone, float32* tran)
{
	uint16* offsets;
	iAnimSKBKey* keys;
	float32 newmax[3];
	float32 oldmax[3];
	float32 factor[3];
	float32 pos;
	float32 outScale[3];
	uint32 tcount;
	uint32 kcount;
	uint32 keylast;
	uint32 keyfirst;
	uint32 idx;
	uint32 i;
	int32 ipos;
	// Line 1147, Address: 0x11c120, Func Offset: 0
	// Line 1149, Address: 0x11c158, Func Offset: 0x38
	// Line 1150, Address: 0x11c15c, Func Offset: 0x3c
	// Line 1149, Address: 0x11c164, Func Offset: 0x44
	// Line 1150, Address: 0x11c168, Func Offset: 0x48
	// Line 1149, Address: 0x11c178, Func Offset: 0x58
	// Line 1150, Address: 0x11c17c, Func Offset: 0x5c
	// Line 1151, Address: 0x11c184, Func Offset: 0x64
	// Line 1153, Address: 0x11c190, Func Offset: 0x70
	// Line 1150, Address: 0x11c194, Func Offset: 0x74
	// Line 1153, Address: 0x11c19c, Func Offset: 0x7c
	// Line 1150, Address: 0x11c1a4, Func Offset: 0x84
	// Line 1153, Address: 0x11c1ac, Func Offset: 0x8c
	// Line 1156, Address: 0x11c1b8, Func Offset: 0x98
	// Line 1150, Address: 0x11c1bc, Func Offset: 0x9c
	// Line 1156, Address: 0x11c1c0, Func Offset: 0xa0
	// Line 1150, Address: 0x11c1c4, Func Offset: 0xa4
	// Line 1156, Address: 0x11c1c8, Func Offset: 0xa8
	// Line 1157, Address: 0x11c1cc, Func Offset: 0xac
	// Line 1159, Address: 0x11c1ec, Func Offset: 0xcc
	// Line 1160, Address: 0x11c210, Func Offset: 0xf0
	// Line 1161, Address: 0x11c220, Func Offset: 0x100
	// Line 1162, Address: 0x11c23c, Func Offset: 0x11c
	// Line 1163, Address: 0x11c254, Func Offset: 0x134
	// Line 1164, Address: 0x11c280, Func Offset: 0x160
	// Line 1165, Address: 0x11c294, Func Offset: 0x174
	// Line 1166, Address: 0x11c29c, Func Offset: 0x17c
	// Line 1168, Address: 0x11c2c4, Func Offset: 0x1a4
	// Line 1166, Address: 0x11c2d0, Func Offset: 0x1b0
	// Line 1168, Address: 0x11c2e0, Func Offset: 0x1c0
	// Line 1170, Address: 0x11c310, Func Offset: 0x1f0
	// Line 1171, Address: 0x11c32c, Func Offset: 0x20c
	// Line 1172, Address: 0x11c348, Func Offset: 0x228
	// Line 1173, Address: 0x11c37c, Func Offset: 0x25c
	// Line 1174, Address: 0x11c388, Func Offset: 0x268
	// Line 1175, Address: 0x11c3a0, Func Offset: 0x280
	// Line 1174, Address: 0x11c3a8, Func Offset: 0x288
	// Line 1175, Address: 0x11c3bc, Func Offset: 0x29c
	// Line 1177, Address: 0x11c3c4, Func Offset: 0x2a4
	// Line 1178, Address: 0x11c3e0, Func Offset: 0x2c0
	// Line 1179, Address: 0x11c3f0, Func Offset: 0x2d0
	// Line 1180, Address: 0x11c40c, Func Offset: 0x2ec
	// Line 1183, Address: 0x11c420, Func Offset: 0x300
	// Line 1184, Address: 0x11c450, Func Offset: 0x330
	// Line 1185, Address: 0x11c464, Func Offset: 0x344
	// Line 1188, Address: 0x11c478, Func Offset: 0x358
	// Line 1191, Address: 0x11c498, Func Offset: 0x378
	// Line 1192, Address: 0x11c4c0, Func Offset: 0x3a0
	// Line 1193, Address: 0x11c4d4, Func Offset: 0x3b4
	// Line 1194, Address: 0x11c4e8, Func Offset: 0x3c8
	// Line 1196, Address: 0x11c4ec, Func Offset: 0x3cc
	// Line 1194, Address: 0x11c4f8, Func Offset: 0x3d8
	// Line 1196, Address: 0x11c508, Func Offset: 0x3e8
	// Line 1198, Address: 0x11c530, Func Offset: 0x410
	// Line 1199, Address: 0x11c534, Func Offset: 0x414
	// Line 1200, Address: 0x11c550, Func Offset: 0x430
	// Line 1201, Address: 0x11c55c, Func Offset: 0x43c
	// Line 1200, Address: 0x11c560, Func Offset: 0x440
	// Line 1201, Address: 0x11c564, Func Offset: 0x444
	// Line 1200, Address: 0x11c568, Func Offset: 0x448
	// Line 1201, Address: 0x11c57c, Func Offset: 0x45c
	// Line 1202, Address: 0x11c588, Func Offset: 0x468
	// Func End, Address: 0x11c5bc, Func Offset: 0x49c
}

// _iAnimSKBSwapTranslate__FP14iAnimSKBHeaderUiUi
// Start address: 0x11c5c0
void _iAnimSKBSwapTranslate(iAnimSKBHeader* data, uint32 bonelo, uint32 bonehi)
{
	uint16 keyIndex;
	uint16* offsets;
	iAnimSKBKey* keys;
	iAnimSKBKey* bufmid;
	iAnimSKBKey* bufhi;
	iAnimSKBKey* buflo;
	uint32 tcount;
	uint32 bcount;
	uint32 j;
	uint32 i;
	int32 out;
	// Line 1080, Address: 0x11c5c0, Func Offset: 0
	// Line 1082, Address: 0x11c5ec, Func Offset: 0x2c
	// Line 1084, Address: 0x11c5f4, Func Offset: 0x34
	// Line 1088, Address: 0x11c600, Func Offset: 0x40
	// Line 1086, Address: 0x11c604, Func Offset: 0x44
	// Line 1088, Address: 0x11c60c, Func Offset: 0x4c
	// Line 1086, Address: 0x11c610, Func Offset: 0x50
	// Line 1088, Address: 0x11c61c, Func Offset: 0x5c
	// Line 1089, Address: 0x11c624, Func Offset: 0x64
	// Line 1088, Address: 0x11c628, Func Offset: 0x68
	// Line 1089, Address: 0x11c62c, Func Offset: 0x6c
	// Line 1090, Address: 0x11c630, Func Offset: 0x70
	// Line 1093, Address: 0x11c638, Func Offset: 0x78
	// Line 1094, Address: 0x11c644, Func Offset: 0x84
	// Line 1096, Address: 0x11c664, Func Offset: 0xa4
	// Line 1094, Address: 0x11c670, Func Offset: 0xb0
	// Line 1096, Address: 0x11c678, Func Offset: 0xb8
	// Line 1100, Address: 0x11c69c, Func Offset: 0xdc
	// Line 1098, Address: 0x11c6a0, Func Offset: 0xe0
	// Line 1101, Address: 0x11c6ac, Func Offset: 0xec
	// Line 1100, Address: 0x11c6b0, Func Offset: 0xf0
	// Line 1101, Address: 0x11c6c0, Func Offset: 0x100
	// Line 1100, Address: 0x11c6c8, Func Offset: 0x108
	// Line 1101, Address: 0x11c6d8, Func Offset: 0x118
	// Line 1103, Address: 0x11c6e8, Func Offset: 0x128
	// Line 1105, Address: 0x11c6f0, Func Offset: 0x130
	// Line 1106, Address: 0x11c6fc, Func Offset: 0x13c
	// Line 1107, Address: 0x11c704, Func Offset: 0x144
	// Line 1111, Address: 0x11c718, Func Offset: 0x158
	// Line 1112, Address: 0x11c728, Func Offset: 0x168
	// Line 1113, Address: 0x11c72c, Func Offset: 0x16c
	// Line 1114, Address: 0x11c734, Func Offset: 0x174
	// Line 1115, Address: 0x11c748, Func Offset: 0x188
	// Line 1117, Address: 0x11c74c, Func Offset: 0x18c
	// Line 1119, Address: 0x11c760, Func Offset: 0x1a0
	// Line 1123, Address: 0x11c768, Func Offset: 0x1a8
	// Line 1122, Address: 0x11c76c, Func Offset: 0x1ac
	// Line 1123, Address: 0x11c770, Func Offset: 0x1b0
	// Line 1131, Address: 0x11c778, Func Offset: 0x1b8
	// Line 1132, Address: 0x11c7a0, Func Offset: 0x1e0
	// Line 1133, Address: 0x11c7a8, Func Offset: 0x1e8
	// Line 1132, Address: 0x11c7ac, Func Offset: 0x1ec
	// Line 1133, Address: 0x11c7b4, Func Offset: 0x1f4
	// Line 1135, Address: 0x11c7c8, Func Offset: 0x208
	// Line 1136, Address: 0x11c7d8, Func Offset: 0x218
	// Line 1140, Address: 0x11c7f8, Func Offset: 0x238
	// Line 1141, Address: 0x11c800, Func Offset: 0x240
	// Line 1140, Address: 0x11c804, Func Offset: 0x244
	// Line 1141, Address: 0x11c808, Func Offset: 0x248
	// Line 1142, Address: 0x11c820, Func Offset: 0x260
	// Line 1143, Address: 0x11c828, Func Offset: 0x268
	// Line 1144, Address: 0x11c838, Func Offset: 0x278
	// Func End, Address: 0x11c868, Func Offset: 0x2a8
}

// iAnimDurationSKB__FP14iAnimSKBHeader
// Start address: 0x11c870
float32 iAnimDurationSKB(iAnimSKBHeader* data)
{
	// Line 709, Address: 0x11c870, Func Offset: 0
	// Line 710, Address: 0x11c88c, Func Offset: 0x1c
	// Func End, Address: 0x11c894, Func Offset: 0x24
}

// _iAnimSKBFixTransPop__FPvPvUi
// Start address: 0x11c8a0
void _iAnimSKBFixTransPop(void* data, void* pose, uint32 maxbone)
{
	iAnimSKBHeader* hb;
	float32* ta;
	iAnimSKBKey* ka;
	iAnimSKBHeader* ha;
	_xVec3* t_b;
	_xQuat* q_b;
	_xVec3* t_a;
	_xQuat* q_a;
	float32 invDuration;
	uint32 boneIndex;
	uint32 i;
	// Line 637, Address: 0x11c8a0, Func Offset: 0
	// Line 640, Address: 0x11c8d8, Func Offset: 0x38
	// Line 648, Address: 0x11c8dc, Func Offset: 0x3c
	// Line 646, Address: 0x11c8e0, Func Offset: 0x40
	// Line 647, Address: 0x11c8e8, Func Offset: 0x48
	// Line 649, Address: 0x11c8ec, Func Offset: 0x4c
	// Line 642, Address: 0x11c8f0, Func Offset: 0x50
	// Line 648, Address: 0x11c8f4, Func Offset: 0x54
	// Line 638, Address: 0x11c8f8, Func Offset: 0x58
	// Line 641, Address: 0x11c8fc, Func Offset: 0x5c
	// Line 643, Address: 0x11c900, Func Offset: 0x60
	// Line 651, Address: 0x11c904, Func Offset: 0x64
	// Line 654, Address: 0x11c914, Func Offset: 0x74
	// Line 655, Address: 0x11c92c, Func Offset: 0x8c
	// Line 656, Address: 0x11c944, Func Offset: 0xa4
	// Line 660, Address: 0x11c95c, Func Offset: 0xbc
	// Line 661, Address: 0x11c984, Func Offset: 0xe4
	// Line 662, Address: 0x11c99c, Func Offset: 0xfc
	// Line 663, Address: 0x11c9a8, Func Offset: 0x108
	// Line 666, Address: 0x11c9b0, Func Offset: 0x110
	// Line 663, Address: 0x11c9b4, Func Offset: 0x114
	// Line 664, Address: 0x11c9bc, Func Offset: 0x11c
	// Line 665, Address: 0x11c9cc, Func Offset: 0x12c
	// Line 666, Address: 0x11c9e4, Func Offset: 0x144
	// Line 667, Address: 0x11c9f8, Func Offset: 0x158
	// Line 670, Address: 0x11ca0c, Func Offset: 0x16c
	// Line 667, Address: 0x11ca10, Func Offset: 0x170
	// Line 670, Address: 0x11ca30, Func Offset: 0x190
	// Line 672, Address: 0x11ca38, Func Offset: 0x198
	// Line 673, Address: 0x11ca58, Func Offset: 0x1b8
	// Line 676, Address: 0x11ca60, Func Offset: 0x1c0
	// Line 677, Address: 0x11ca68, Func Offset: 0x1c8
	// Line 678, Address: 0x11ca6c, Func Offset: 0x1cc
	// Line 677, Address: 0x11ca70, Func Offset: 0x1d0
	// Line 678, Address: 0x11ca74, Func Offset: 0x1d4
	// Line 676, Address: 0x11ca78, Func Offset: 0x1d8
	// Line 681, Address: 0x11ca7c, Func Offset: 0x1dc
	// Line 676, Address: 0x11ca80, Func Offset: 0x1e0
	// Line 677, Address: 0x11ca88, Func Offset: 0x1e8
	// Line 678, Address: 0x11ca8c, Func Offset: 0x1ec
	// Line 677, Address: 0x11ca90, Func Offset: 0x1f0
	// Line 678, Address: 0x11ca94, Func Offset: 0x1f4
	// Line 677, Address: 0x11ca98, Func Offset: 0x1f8
	// Line 681, Address: 0x11ca9c, Func Offset: 0x1fc
	// Line 682, Address: 0x11caa4, Func Offset: 0x204
	// Line 683, Address: 0x11caac, Func Offset: 0x20c
	// Line 684, Address: 0x11cab0, Func Offset: 0x210
	// Line 682, Address: 0x11cab4, Func Offset: 0x214
	// Line 683, Address: 0x11cac4, Func Offset: 0x224
	// Line 684, Address: 0x11cac8, Func Offset: 0x228
	// Line 682, Address: 0x11cacc, Func Offset: 0x22c
	// Line 683, Address: 0x11cad0, Func Offset: 0x230
	// Line 684, Address: 0x11cad4, Func Offset: 0x234
	// Line 682, Address: 0x11cad8, Func Offset: 0x238
	// Line 683, Address: 0x11cadc, Func Offset: 0x23c
	// Line 684, Address: 0x11cae0, Func Offset: 0x240
	// Line 685, Address: 0x11cae4, Func Offset: 0x244
	// Line 688, Address: 0x11cae8, Func Offset: 0x248
	// Line 691, Address: 0x11caf4, Func Offset: 0x254
	// Line 688, Address: 0x11caf8, Func Offset: 0x258
	// Line 689, Address: 0x11cb00, Func Offset: 0x260
	// Line 688, Address: 0x11cb04, Func Offset: 0x264
	// Line 689, Address: 0x11cb08, Func Offset: 0x268
	// Line 690, Address: 0x11cb10, Func Offset: 0x270
	// Line 689, Address: 0x11cb14, Func Offset: 0x274
	// Line 690, Address: 0x11cb18, Func Offset: 0x278
	// Line 691, Address: 0x11cb2c, Func Offset: 0x28c
	// Line 694, Address: 0x11cb40, Func Offset: 0x2a0
	// Line 695, Address: 0x11cb44, Func Offset: 0x2a4
	// Line 696, Address: 0x11cb48, Func Offset: 0x2a8
	// Line 697, Address: 0x11cb4c, Func Offset: 0x2ac
	// Func End, Address: 0x11cb88, Func Offset: 0x2e8
}

// iAnimEvalSKB__FP14iAnimSKBHeaderfUiP6_xVec3P6_xQuat
// Start address: 0x11cb90
void iAnimEvalSKB(iAnimSKBHeader* data, float32 time, uint32 flags, _xVec3* tran, _xQuat* quat)
{
	uint32 theta;
	uint32 costheta;
	iAnimSKBKey* k;
	float32 lerp;
	float32 time2;
	float32 time1;
	uint16* offsets;
	float32* times;
	iAnimSKBKey* keys;
	uint32 tcount;
	uint32 bcount;
	uint32 tidx;
	uint32 i;
	// Line 410, Address: 0x11cb94, Func Offset: 0x4
	// Line 406, Address: 0x11cb98, Func Offset: 0x8
	// Line 415, Address: 0x11cb9c, Func Offset: 0xc
	// Line 406, Address: 0x11cba0, Func Offset: 0x10
	// Line 409, Address: 0x11cba8, Func Offset: 0x18
	// Line 410, Address: 0x11cbac, Func Offset: 0x1c
	// Line 415, Address: 0x11cbb0, Func Offset: 0x20
	// Line 411, Address: 0x11cbb4, Func Offset: 0x24
	// Line 410, Address: 0x11cbb8, Func Offset: 0x28
	// Line 415, Address: 0x11cbbc, Func Offset: 0x2c
	// Line 416, Address: 0x11cbc8, Func Offset: 0x38
	// Line 426, Address: 0x11cbe8, Func Offset: 0x58
	// Line 427, Address: 0x11cbf0, Func Offset: 0x60
	// Line 429, Address: 0x11cc14, Func Offset: 0x84
	// Line 430, Address: 0x11cc1c, Func Offset: 0x8c
	// Line 433, Address: 0x11cc48, Func Offset: 0xb8
	// Line 436, Address: 0x11cc4c, Func Offset: 0xbc
	// Line 433, Address: 0x11cc50, Func Offset: 0xc0
	// Line 436, Address: 0x11cc54, Func Offset: 0xc4
	// Line 437, Address: 0x11cc5c, Func Offset: 0xcc
	// Line 439, Address: 0x11cc60, Func Offset: 0xd0
	// Line 440, Address: 0x11cc6c, Func Offset: 0xdc
	// Line 441, Address: 0x11cc70, Func Offset: 0xe0
	// Line 448, Address: 0x11cc74, Func Offset: 0xe4
	// Line 449, Address: 0x11cca8, Func Offset: 0x118
	// Line 450, Address: 0x11ccac, Func Offset: 0x11c
	// Line 451, Address: 0x11ccb0, Func Offset: 0x120
	// Line 452, Address: 0x11ccb4, Func Offset: 0x124
	// Line 453, Address: 0x11ccb8, Func Offset: 0x128
	// Line 454, Address: 0x11ccbc, Func Offset: 0x12c
	// Line 455, Address: 0x11ccc0, Func Offset: 0x130
	// Line 456, Address: 0x11ccc4, Func Offset: 0x134
	// Line 457, Address: 0x11ccc8, Func Offset: 0x138
	// Line 458, Address: 0x11cccc, Func Offset: 0x13c
	// Line 470, Address: 0x11ccd0, Func Offset: 0x140
	// Line 473, Address: 0x11ccd8, Func Offset: 0x148
	// Line 476, Address: 0x11cce4, Func Offset: 0x154
	// Line 477, Address: 0x11cce8, Func Offset: 0x158
	// Line 474, Address: 0x11ccec, Func Offset: 0x15c
	// Line 476, Address: 0x11ccf0, Func Offset: 0x160
	// Line 477, Address: 0x11ccfc, Func Offset: 0x16c
	// Line 495, Address: 0x11cd08, Func Offset: 0x178
	// Line 478, Address: 0x11cd0c, Func Offset: 0x17c
	// Line 496, Address: 0x11cd18, Func Offset: 0x188
	// Line 497, Address: 0x11cd1c, Func Offset: 0x18c
	// Line 498, Address: 0x11cd20, Func Offset: 0x190
	// Line 499, Address: 0x11cd24, Func Offset: 0x194
	// Line 500, Address: 0x11cd28, Func Offset: 0x198
	// Line 501, Address: 0x11cd2c, Func Offset: 0x19c
	// Line 502, Address: 0x11cd30, Func Offset: 0x1a0
	// Line 503, Address: 0x11cd34, Func Offset: 0x1a4
	// Line 504, Address: 0x11cd38, Func Offset: 0x1a8
	// Line 505, Address: 0x11cd3c, Func Offset: 0x1ac
	// Line 506, Address: 0x11cd40, Func Offset: 0x1b0
	// Line 507, Address: 0x11cd44, Func Offset: 0x1b4
	// Line 508, Address: 0x11cd48, Func Offset: 0x1b8
	// Line 509, Address: 0x11cd4c, Func Offset: 0x1bc
	// Line 510, Address: 0x11cd50, Func Offset: 0x1c0
	// Line 511, Address: 0x11cd54, Func Offset: 0x1c4
	// Line 512, Address: 0x11cd58, Func Offset: 0x1c8
	// Line 513, Address: 0x11cd5c, Func Offset: 0x1cc
	// Line 514, Address: 0x11cd60, Func Offset: 0x1d0
	// Line 515, Address: 0x11cd64, Func Offset: 0x1d4
	// Line 516, Address: 0x11cd68, Func Offset: 0x1d8
	// Line 517, Address: 0x11cd6c, Func Offset: 0x1dc
	// Line 518, Address: 0x11cd70, Func Offset: 0x1e0
	// Line 519, Address: 0x11cd74, Func Offset: 0x1e4
	// Line 520, Address: 0x11cd78, Func Offset: 0x1e8
	// Line 521, Address: 0x11cd7c, Func Offset: 0x1ec
	// Line 522, Address: 0x11cd80, Func Offset: 0x1f0
	// Line 523, Address: 0x11cd84, Func Offset: 0x1f4
	// Line 524, Address: 0x11cd88, Func Offset: 0x1f8
	// Line 525, Address: 0x11cd8c, Func Offset: 0x1fc
	// Line 526, Address: 0x11cd90, Func Offset: 0x200
	// Line 527, Address: 0x11cd94, Func Offset: 0x204
	// Line 528, Address: 0x11cd9c, Func Offset: 0x20c
	// Line 529, Address: 0x11cda0, Func Offset: 0x210
	// Line 530, Address: 0x11cda4, Func Offset: 0x214
	// Line 531, Address: 0x11cda8, Func Offset: 0x218
	// Line 532, Address: 0x11cdac, Func Offset: 0x21c
	// Line 533, Address: 0x11cdb0, Func Offset: 0x220
	// Line 534, Address: 0x11cdb4, Func Offset: 0x224
	// Line 535, Address: 0x11cdb8, Func Offset: 0x228
	// Line 537, Address: 0x11cdc0, Func Offset: 0x230
	// Line 538, Address: 0x11cdc4, Func Offset: 0x234
	// Line 539, Address: 0x11cdc8, Func Offset: 0x238
	// Line 540, Address: 0x11cdcc, Func Offset: 0x23c
	// Line 541, Address: 0x11cdd0, Func Offset: 0x240
	// Line 542, Address: 0x11cdd4, Func Offset: 0x244
	// Line 543, Address: 0x11cdd8, Func Offset: 0x248
	// Line 544, Address: 0x11cddc, Func Offset: 0x24c
	// Line 545, Address: 0x11cde0, Func Offset: 0x250
	// Line 546, Address: 0x11cde4, Func Offset: 0x254
	// Line 547, Address: 0x11cde8, Func Offset: 0x258
	// Line 548, Address: 0x11cdec, Func Offset: 0x25c
	// Line 549, Address: 0x11cdf0, Func Offset: 0x260
	// Line 550, Address: 0x11cdf4, Func Offset: 0x264
	// Line 551, Address: 0x11cdf8, Func Offset: 0x268
	// Line 557, Address: 0x11cdfc, Func Offset: 0x26c
	// Line 558, Address: 0x11cfbc, Func Offset: 0x42c
	// Line 559, Address: 0x11d00c, Func Offset: 0x47c
	// Line 582, Address: 0x11d010, Func Offset: 0x480
	// Line 583, Address: 0x11d014, Func Offset: 0x484
	// Line 584, Address: 0x11d018, Func Offset: 0x488
	// Line 621, Address: 0x11d01c, Func Offset: 0x48c
	// Line 622, Address: 0x11d020, Func Offset: 0x490
	// Line 623, Address: 0x11d024, Func Offset: 0x494
	// Line 624, Address: 0x11d034, Func Offset: 0x4a4
	// Func End, Address: 0x11d03c, Func Offset: 0x4ac
}

