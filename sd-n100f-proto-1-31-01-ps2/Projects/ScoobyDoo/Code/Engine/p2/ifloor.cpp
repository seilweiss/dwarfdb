typedef struct tagXStreamMDSDirectory;
typedef struct _RwV2d;
typedef struct tagiFloorTri;
typedef struct XStreamHeader;
typedef struct Vector3D;
typedef struct tagiFloor;
typedef struct tagXStreamDirectoryEntry;
typedef struct xLine2D;
typedef struct tagFile;


typedef tagXStreamDirectoryEntry type_0[1000];
typedef float32 type_1[2];
typedef float32 type_2[2];
typedef uint16 type_3[3];
typedef int8 type_4[2048];
typedef _RwV2d type_5[2];
typedef _RwV2d type_6[2];
typedef int8 type_7[256];
typedef int8 type_8[128];
typedef Vector3D type_9[4];
typedef float32 type_10[2];
typedef float32 type_11[2];
typedef float32 type_12[32];
typedef float32 type_13[32][32];
typedef int8 type_14[256];
typedef int8 type_15[256];

struct tagXStreamMDSDirectory
{
	uint32 count;
	tagXStreamDirectoryEntry directory[1000];
};

struct _RwV2d
{
	float32 x;
	float32 y;
};

struct tagiFloorTri
{
	uint16 m_v[3];
	uint16 m_n;
};

struct XStreamHeader
{
	uint32 id;
	uint32 versionID;
	uint8 month;
	uint8 day;
	uint8 hour;
	uint8 minute;
	uint32 mdsOffset;
	uint32 mdsLength;
	tagXStreamMDSDirectory directory;
	int8 safety[2048];
};

struct Vector3D
{
	float32 x;
	float32 y;
	float32 z;
};

struct tagiFloor
{
	float32 m_x1;
	float32 m_y1;
	float32 m_z1;
	float32 m_x2;
	float32 m_y2;
	float32 m_z2;
	uint32 m_unit;
	float32 m_w;
	float32 m_h;
	uint32 m_vCount;
	uint32 m_nCount;
	uint32 m_tCount;
	Vector3D* m_v;
	Vector3D* m_n;
	tagiFloorTri* m_t;
	uint32* m_tmask;
};

struct tagXStreamDirectoryEntry
{
	uint32 id;
	uint32 type;
	uint32 offset;
	uint32 length;
};

struct xLine2D
{
	_RwV2d m_p[2];
	_RwV2d m_i[2];
	int32 m_iCount;
};

struct tagFile
{
	int8 m_name[256];
	int32 m_state;
	int32 m_desc;
	uint32 m_fpos;
};

float32 gFloorQuickHeight[32][32];
int32 sLastTriangle;
int8 vAssertBuf2[128];
XStreamHeader currentHeader;

void iFloorDrawZBuffer();
void iFloorDebugDraw(tagiFloor* f);
float32 iFloorGetHeightIdx(tagiFloor* f, float32 x, float32 y, float32 z, uint32* triIdx);
float32 iFloorGetHeight(tagiFloor* f, float32 x, float32 y, float32 z);
void iFloorLoadFromBuffer(tagiFloor* f, uint8* data);
uint32 iFloorGetMaskLine2D(tagiFloor* f, xLine2D* l);
uint32 iFloorGetMaskRadius(tagiFloor* f, float32 x, float32 z, float32 r);
uint32 iFloorGetMask(tagiFloor* f, float32 x, float32 z);
void iFloorLevelReset(tagiFloor* f);

// iFloorDrawZBuffer__FP9tagiFloor
// Start address: 0x3881f0
void iFloorDrawZBuffer()
{
	// Line 803, Address: 0x3881f0, Func Offset: 0
	// Func End, Address: 0x3881f8, Func Offset: 0x8
}

// iFloorDebugDraw__FP9tagiFloor
// Start address: 0x388200
void iFloorDebugDraw(tagiFloor* f)
{
	int32 j;
	int32 i;
	Vector3D s[4];
	// Line 765, Address: 0x388200, Func Offset: 0
	// Line 769, Address: 0x388214, Func Offset: 0x14
	// Line 771, Address: 0x3882b4, Func Offset: 0xb4
	// Line 773, Address: 0x3882c0, Func Offset: 0xc0
	// Line 776, Address: 0x3882cc, Func Offset: 0xcc
	// Line 778, Address: 0x3882d8, Func Offset: 0xd8
	// Line 779, Address: 0x388324, Func Offset: 0x124
	// Line 780, Address: 0x388370, Func Offset: 0x170
	// Line 781, Address: 0x3883c0, Func Offset: 0x1c0
	// Line 782, Address: 0x3883d4, Func Offset: 0x1d4
	// Line 783, Address: 0x3883f8, Func Offset: 0x1f8
	// Line 784, Address: 0x38841c, Func Offset: 0x21c
	// Line 786, Address: 0x388440, Func Offset: 0x240
	// Line 787, Address: 0x388458, Func Offset: 0x258
	// Func End, Address: 0x388470, Func Offset: 0x270
}

// iFloorGetHeightIdx__FP9tagiFloorfffPUi
// Start address: 0x388470
float32 iFloorGetHeightIdx(tagiFloor* f, float32 x, float32 y, float32 z, uint32* triIdx)
{
	float32 ooarea;
	float32 v3z;
	float32 v3x;
	float32 v2z;
	float32 v2x;
	float32 v1z;
	float32 v1x;
	float32 bw;
	float32 bv;
	float32 bu;
	float32 ooarea;
	float32 v3z;
	float32 v3x;
	float32 v2z;
	float32 v2x;
	float32 v1z;
	float32 v1x;
	float32 bw;
	float32 bv;
	float32 bu;
	uint32 ti;
	uint32 pmasklo;
	uint32 pmaskhi;
	uint32 pmask;
	uint32 i;
	Vector3D p;
	// Line 591, Address: 0x388470, Func Offset: 0
	// Line 600, Address: 0x3884b0, Func Offset: 0x40
	// Line 601, Address: 0x3884b8, Func Offset: 0x48
	// Line 604, Address: 0x3884c4, Func Offset: 0x54
	// Line 606, Address: 0x388564, Func Offset: 0xf4
	// Line 609, Address: 0x388608, Func Offset: 0x198
	// Line 611, Address: 0x388614, Func Offset: 0x1a4
	// Line 612, Address: 0x38861c, Func Offset: 0x1ac
	// Line 619, Address: 0x388628, Func Offset: 0x1b8
	// Line 625, Address: 0x388678, Func Offset: 0x208
	// Line 626, Address: 0x388680, Func Offset: 0x210
	// Line 631, Address: 0x38868c, Func Offset: 0x21c
	// Line 632, Address: 0x3886f8, Func Offset: 0x288
	// Line 633, Address: 0x388700, Func Offset: 0x290
	// Line 634, Address: 0x388704, Func Offset: 0x294
	// Line 635, Address: 0x388708, Func Offset: 0x298
	// Line 636, Address: 0x38870c, Func Offset: 0x29c
	// Line 638, Address: 0x388710, Func Offset: 0x2a0
	// Line 640, Address: 0x388714, Func Offset: 0x2a4
	// Line 643, Address: 0x388720, Func Offset: 0x2b0
	// Line 645, Address: 0x388730, Func Offset: 0x2c0
	// Line 647, Address: 0x38874c, Func Offset: 0x2dc
	// Line 650, Address: 0x388768, Func Offset: 0x2f8
	// Line 660, Address: 0x3887ec, Func Offset: 0x37c
	// Line 663, Address: 0x3888ac, Func Offset: 0x43c
	// Line 666, Address: 0x3888dc, Func Offset: 0x46c
	// Line 667, Address: 0x388908, Func Offset: 0x498
	// Line 669, Address: 0x388934, Func Offset: 0x4c4
	// Line 670, Address: 0x388960, Func Offset: 0x4f0
	// Line 672, Address: 0x38898c, Func Offset: 0x51c
	// Line 673, Address: 0x3889b8, Func Offset: 0x548
	// Line 675, Address: 0x3889e4, Func Offset: 0x574
	// Line 676, Address: 0x3889ec, Func Offset: 0x57c
	// Line 677, Address: 0x3889f4, Func Offset: 0x584
	// Line 679, Address: 0x3889fc, Func Offset: 0x58c
	// Line 685, Address: 0x388a04, Func Offset: 0x594
	// Line 695, Address: 0x388aa4, Func Offset: 0x634
	// Line 698, Address: 0x388ab0, Func Offset: 0x640
	// Line 700, Address: 0x388acc, Func Offset: 0x65c
	// Line 703, Address: 0x388ae8, Func Offset: 0x678
	// Line 713, Address: 0x388b6c, Func Offset: 0x6fc
	// Line 716, Address: 0x388c2c, Func Offset: 0x7bc
	// Line 719, Address: 0x388c5c, Func Offset: 0x7ec
	// Line 720, Address: 0x388c88, Func Offset: 0x818
	// Line 722, Address: 0x388cb4, Func Offset: 0x844
	// Line 723, Address: 0x388ce0, Func Offset: 0x870
	// Line 725, Address: 0x388d0c, Func Offset: 0x89c
	// Line 726, Address: 0x388d38, Func Offset: 0x8c8
	// Line 728, Address: 0x388d64, Func Offset: 0x8f4
	// Line 729, Address: 0x388d6c, Func Offset: 0x8fc
	// Line 730, Address: 0x388d74, Func Offset: 0x904
	// Line 732, Address: 0x388d7c, Func Offset: 0x90c
	// Line 737, Address: 0x388d84, Func Offset: 0x914
	// Line 738, Address: 0x388d88, Func Offset: 0x918
	// Line 745, Address: 0x388e28, Func Offset: 0x9b8
	// Line 747, Address: 0x388e40, Func Offset: 0x9d0
	// Line 751, Address: 0x388e48, Func Offset: 0x9d8
	// Line 752, Address: 0x388e4c, Func Offset: 0x9dc
	// Func End, Address: 0x388e80, Func Offset: 0xa10
}

// iFloorGetHeight__FP9tagiFloorfff
// Start address: 0x388e80
float32 iFloorGetHeight(tagiFloor* f, float32 x, float32 y, float32 z)
{
	float32 ooarea;
	float32 bw;
	float32 bv;
	float32 bu;
	float32 ooarea;
	float32 bw;
	float32 bv;
	float32 bu;
	uint32 pmasklo;
	uint32 pmaskhi;
	uint32 pmask;
	uint32 i;
	Vector3D p;
	// Line 462, Address: 0x388e80, Func Offset: 0
	// Line 469, Address: 0x388eb8, Func Offset: 0x38
	// Line 474, Address: 0x388f58, Func Offset: 0xd8
	// Line 475, Address: 0x388f64, Func Offset: 0xe4
	// Line 479, Address: 0x388f70, Func Offset: 0xf0
	// Line 484, Address: 0x388fc0, Func Offset: 0x140
	// Line 487, Address: 0x388fcc, Func Offset: 0x14c
	// Line 488, Address: 0x389038, Func Offset: 0x1b8
	// Line 489, Address: 0x389040, Func Offset: 0x1c0
	// Line 490, Address: 0x389044, Func Offset: 0x1c4
	// Line 491, Address: 0x389048, Func Offset: 0x1c8
	// Line 492, Address: 0x38904c, Func Offset: 0x1cc
	// Line 494, Address: 0x389050, Func Offset: 0x1d0
	// Line 496, Address: 0x389060, Func Offset: 0x1e0
	// Line 508, Address: 0x3890f0, Func Offset: 0x270
	// Line 509, Address: 0x389124, Func Offset: 0x2a4
	// Line 511, Address: 0x389158, Func Offset: 0x2d8
	// Line 512, Address: 0x38918c, Func Offset: 0x30c
	// Line 514, Address: 0x3891c0, Func Offset: 0x340
	// Line 515, Address: 0x3891f4, Func Offset: 0x374
	// Line 517, Address: 0x389228, Func Offset: 0x3a8
	// Line 518, Address: 0x389230, Func Offset: 0x3b0
	// Line 519, Address: 0x389238, Func Offset: 0x3b8
	// Line 521, Address: 0x389240, Func Offset: 0x3c0
	// Line 523, Address: 0x389258, Func Offset: 0x3d8
	// Line 524, Address: 0x38925c, Func Offset: 0x3dc
	// Line 525, Address: 0x389260, Func Offset: 0x3e0
	// Line 529, Address: 0x389264, Func Offset: 0x3e4
	// Line 534, Address: 0x389300, Func Offset: 0x480
	// Line 537, Address: 0x38930c, Func Offset: 0x48c
	// Line 539, Address: 0x389328, Func Offset: 0x4a8
	// Line 542, Address: 0x389344, Func Offset: 0x4c4
	// Line 553, Address: 0x3893c8, Func Offset: 0x548
	// Line 556, Address: 0x3893cc, Func Offset: 0x54c
	// Line 557, Address: 0x3893fc, Func Offset: 0x57c
	// Line 559, Address: 0x38942c, Func Offset: 0x5ac
	// Line 560, Address: 0x38945c, Func Offset: 0x5dc
	// Line 562, Address: 0x38948c, Func Offset: 0x60c
	// Line 563, Address: 0x3894bc, Func Offset: 0x63c
	// Line 565, Address: 0x3894ec, Func Offset: 0x66c
	// Line 566, Address: 0x3894f4, Func Offset: 0x674
	// Line 567, Address: 0x3894fc, Func Offset: 0x67c
	// Line 569, Address: 0x389504, Func Offset: 0x684
	// Line 571, Address: 0x38951c, Func Offset: 0x69c
	// Line 572, Address: 0x389520, Func Offset: 0x6a0
	// Line 573, Address: 0x389524, Func Offset: 0x6a4
	// Line 577, Address: 0x389528, Func Offset: 0x6a8
	// Line 584, Address: 0x3895b8, Func Offset: 0x738
	// Line 587, Address: 0x3895d0, Func Offset: 0x750
	// Line 588, Address: 0x3895d4, Func Offset: 0x754
	// Func End, Address: 0x389604, Func Offset: 0x784
}

// iFloorLoadFromBuffer__FP9tagiFloorPUc
// Start address: 0x389610
void iFloorLoadFromBuffer(tagiFloor* f, uint8* data)
{
	// Line 322, Address: 0x389610, Func Offset: 0
	// Line 323, Address: 0x38962c, Func Offset: 0x1c
	// Line 324, Address: 0x3896cc, Func Offset: 0xbc
	// Line 326, Address: 0x38976c, Func Offset: 0x15c
	// Line 328, Address: 0x389780, Func Offset: 0x170
	// Line 330, Address: 0x389784, Func Offset: 0x174
	// Line 331, Address: 0x389788, Func Offset: 0x178
	// Line 333, Address: 0x38979c, Func Offset: 0x18c
	// Line 334, Address: 0x3897a0, Func Offset: 0x190
	// Line 336, Address: 0x3897b4, Func Offset: 0x1a4
	// Line 337, Address: 0x3897b8, Func Offset: 0x1a8
	// Line 339, Address: 0x3897c4, Func Offset: 0x1b4
	// Line 342, Address: 0x3897c8, Func Offset: 0x1b8
	// Line 345, Address: 0x38992c, Func Offset: 0x31c
	// Func End, Address: 0x389948, Func Offset: 0x338
}

// iFloorGetMaskLine2D__FP9tagiFloorP7xLine2D
// Start address: 0x389950
uint32 iFloorGetMaskLine2D(tagiFloor* f, xLine2D* l)
{
	uint32 himask;
	uint32 lomask;
	uint32 i;
	float32 ooh;
	float32 oow;
	uint32 tmp;
	float32 zd[2];
	float32 xd[2];
	// Line 236, Address: 0x389950, Func Offset: 0
	// Line 244, Address: 0x38996c, Func Offset: 0x1c
	// Line 245, Address: 0x389974, Func Offset: 0x24
	// Line 249, Address: 0x389980, Func Offset: 0x30
	// Line 250, Address: 0x389990, Func Offset: 0x40
	// Line 252, Address: 0x3899a0, Func Offset: 0x50
	// Line 253, Address: 0x3899b0, Func Offset: 0x60
	// Line 256, Address: 0x3899c0, Func Offset: 0x70
	// Line 257, Address: 0x3899d0, Func Offset: 0x80
	// Line 260, Address: 0x3899e8, Func Offset: 0x98
	// Line 262, Address: 0x3899f4, Func Offset: 0xa4
	// Line 263, Address: 0x389a18, Func Offset: 0xc8
	// Line 264, Address: 0x389a2c, Func Offset: 0xdc
	// Line 265, Address: 0x389a4c, Func Offset: 0xfc
	// Line 267, Address: 0x389a60, Func Offset: 0x110
	// Line 268, Address: 0x389a84, Func Offset: 0x134
	// Line 269, Address: 0x389a98, Func Offset: 0x148
	// Line 270, Address: 0x389ab8, Func Offset: 0x168
	// Line 271, Address: 0x389ac8, Func Offset: 0x178
	// Line 274, Address: 0x389adc, Func Offset: 0x18c
	// Line 275, Address: 0x389afc, Func Offset: 0x1ac
	// Line 276, Address: 0x389b1c, Func Offset: 0x1cc
	// Line 277, Address: 0x389b3c, Func Offset: 0x1ec
	// Line 280, Address: 0x389b58, Func Offset: 0x208
	// Line 282, Address: 0x389b64, Func Offset: 0x214
	// Line 283, Address: 0x389b68, Func Offset: 0x218
	// Line 284, Address: 0x389b6c, Func Offset: 0x21c
	// Line 287, Address: 0x389b70, Func Offset: 0x220
	// Line 289, Address: 0x389b7c, Func Offset: 0x22c
	// Line 290, Address: 0x389b80, Func Offset: 0x230
	// Line 291, Address: 0x389b84, Func Offset: 0x234
	// Line 296, Address: 0x389b88, Func Offset: 0x238
	// Line 297, Address: 0x389b8c, Func Offset: 0x23c
	// Line 299, Address: 0x389b90, Func Offset: 0x240
	// Line 301, Address: 0x389b98, Func Offset: 0x248
	// Line 302, Address: 0x389ba4, Func Offset: 0x254
	// Line 304, Address: 0x389bb4, Func Offset: 0x264
	// Line 306, Address: 0x389bc0, Func Offset: 0x270
	// Line 307, Address: 0x389bd0, Func Offset: 0x280
	// Line 310, Address: 0x389be4, Func Offset: 0x294
	// Line 311, Address: 0x389be8, Func Offset: 0x298
	// Func End, Address: 0x389c0c, Func Offset: 0x2bc
}

// iFloorGetMaskRadius__FP9tagiFloorfff
// Start address: 0x389c10
uint32 iFloorGetMaskRadius(tagiFloor* f, float32 x, float32 z, float32 r)
{
	uint32 himask;
	uint32 lomask;
	uint32 i;
	uint32 tmp;
	float32 zd[2];
	float32 xd[2];
	// Line 151, Address: 0x389c10, Func Offset: 0
	// Line 158, Address: 0x389c2c, Func Offset: 0x1c
	// Line 159, Address: 0x389c34, Func Offset: 0x24
	// Line 163, Address: 0x389c40, Func Offset: 0x30
	// Line 164, Address: 0x389c50, Func Offset: 0x40
	// Line 166, Address: 0x389c60, Func Offset: 0x50
	// Line 167, Address: 0x389c70, Func Offset: 0x60
	// Line 171, Address: 0x389c80, Func Offset: 0x70
	// Line 173, Address: 0x389c8c, Func Offset: 0x7c
	// Line 174, Address: 0x389cb0, Func Offset: 0xa0
	// Line 175, Address: 0x389cc4, Func Offset: 0xb4
	// Line 176, Address: 0x389ce4, Func Offset: 0xd4
	// Line 178, Address: 0x389cf8, Func Offset: 0xe8
	// Line 179, Address: 0x389d1c, Func Offset: 0x10c
	// Line 180, Address: 0x389d30, Func Offset: 0x120
	// Line 181, Address: 0x389d50, Func Offset: 0x140
	// Line 182, Address: 0x389d60, Func Offset: 0x150
	// Line 186, Address: 0x389d74, Func Offset: 0x164
	// Line 187, Address: 0x389d9c, Func Offset: 0x18c
	// Line 189, Address: 0x389dc4, Func Offset: 0x1b4
	// Line 190, Address: 0x389dec, Func Offset: 0x1dc
	// Line 193, Address: 0x389e10, Func Offset: 0x200
	// Line 195, Address: 0x389e1c, Func Offset: 0x20c
	// Line 196, Address: 0x389e20, Func Offset: 0x210
	// Line 197, Address: 0x389e24, Func Offset: 0x214
	// Line 200, Address: 0x389e28, Func Offset: 0x218
	// Line 202, Address: 0x389e34, Func Offset: 0x224
	// Line 203, Address: 0x389e38, Func Offset: 0x228
	// Line 204, Address: 0x389e3c, Func Offset: 0x22c
	// Line 209, Address: 0x389e40, Func Offset: 0x230
	// Line 210, Address: 0x389e44, Func Offset: 0x234
	// Line 212, Address: 0x389e48, Func Offset: 0x238
	// Line 214, Address: 0x389e50, Func Offset: 0x240
	// Line 215, Address: 0x389e5c, Func Offset: 0x24c
	// Line 217, Address: 0x389e6c, Func Offset: 0x25c
	// Line 219, Address: 0x389e78, Func Offset: 0x268
	// Line 220, Address: 0x389e84, Func Offset: 0x274
	// Line 221, Address: 0x389e94, Func Offset: 0x284
	// Line 224, Address: 0x389e98, Func Offset: 0x288
	// Line 225, Address: 0x389e9c, Func Offset: 0x28c
	// Func End, Address: 0x389ebc, Func Offset: 0x2ac
}

// iFloorGetMask__FP9tagiFloorfff
// Start address: 0x389ec0
uint32 iFloorGetMask(tagiFloor* f, float32 x, float32 z)
{
	uint32 zbit;
	uint32 xbit;
	float32 zd;
	float32 xd;
	// Line 135, Address: 0x389ec0, Func Offset: 0
	// Line 139, Address: 0x389ed8, Func Offset: 0x18
	// Line 140, Address: 0x389ee0, Func Offset: 0x20
	// Line 143, Address: 0x389ee8, Func Offset: 0x28
	// Line 144, Address: 0x389f0c, Func Offset: 0x4c
	// Line 146, Address: 0x389f2c, Func Offset: 0x6c
	// Line 147, Address: 0x389f44, Func Offset: 0x84
	// Func End, Address: 0x389f60, Func Offset: 0xa0
}

// iFloorLevelReset__FP9tagiFloor
// Start address: 0x389f60
void iFloorLevelReset(tagiFloor* f)
{
	// Line 82, Address: 0x389f60, Func Offset: 0
	// Line 89, Address: 0x389f68, Func Offset: 0x8
	// Line 90, Address: 0x389f6c, Func Offset: 0xc
	// Line 91, Address: 0x389f70, Func Offset: 0x10
	// Line 92, Address: 0x389f74, Func Offset: 0x14
	// Line 93, Address: 0x389f78, Func Offset: 0x18
	// Line 94, Address: 0x389f7c, Func Offset: 0x1c
	// Line 95, Address: 0x389f80, Func Offset: 0x20
	// Line 97, Address: 0x389f84, Func Offset: 0x24
	// Line 98, Address: 0x389f88, Func Offset: 0x28
	// Line 99, Address: 0x389f8c, Func Offset: 0x2c
	// Line 100, Address: 0x389f90, Func Offset: 0x30
	// Line 101, Address: 0x389f94, Func Offset: 0x34
	// Line 102, Address: 0x389f98, Func Offset: 0x38
	// Line 103, Address: 0x389f9c, Func Offset: 0x3c
	// Line 104, Address: 0x389fa0, Func Offset: 0x40
	// Line 105, Address: 0x389fa4, Func Offset: 0x44
	// Line 107, Address: 0x389fa8, Func Offset: 0x48
	// Func End, Address: 0x389fb0, Func Offset: 0x50
}

