typedef struct tagXStreamMDSDirectory;
typedef struct _RwV2d;
typedef struct XStreamHeader;
typedef struct _XDG;
typedef struct tagXStreamDirectoryEntry;
typedef struct PerfTimes;


typedef tagXStreamDirectoryEntry type_0[1000];
typedef PerfTimes type_1[100];
typedef int8 type_2[8];
typedef int8 type_3[8][6];
typedef int8 type_4[2048];
typedef int8 type_5[6];
typedef int16 type_6[51];
typedef int8 type_7[16];
typedef int8 type_8[16][18];
typedef int8 type_9[128];
typedef uint32 type_10[6];
typedef int8 type_11[15];
typedef int8 type_12[15][28];
typedef _XDG type_13[6];

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

struct _XDG
{
	uint16 idx;
	int16 value[51];
	float32 mult;
	uint32 graphcolor;
	int32 tickmin;
	int32 tickmax;
	int32 tickstep;
	uint32 tickcolor;
	uint32 flags;
};

struct tagXStreamDirectoryEntry
{
	uint32 id;
	uint32 type;
	uint32 offset;
	uint32 length;
};

struct PerfTimes
{
	ulong32 total;
	ulong32 lasttotal;
	ulong32 console;
	ulong32 sound;
	ulong32 anim;
	ulong32 animPost;
	ulong32 actor;
	ulong32 obj;
	ulong32 script;
	ulong32 scriptPF;
	ulong32 particle;
	ulong32 path;
	ulong32 route;
	ulong32 gui;
	ulong32 cart;
	ulong32 gstate;
	ulong32 msg;
	ulong32 x1;
	ulong32 x2;
	ulong32 x3;
	ulong32 scrfx;
	ulong32 fmv;
	ulong32 xidle;
	ulong32 xsceneidle;
	ulong32 camera;
	ulong32 decode;
	ulong32 main0V;
	ulong32 plate;
};

int8 dm_names[16][18];
PerfTimes g_perfTimes;
PerfTimes statRecord[100];
int32 statRecordLoc;
uint8 debug_mode;
uint8 dbfont_display;
int32 sndDebugMode;
int32 routeDebugMode;
int32 guiDebugMode;
int32 animDebugMode;
int32 msgDebugMode;
int32 parDebugMode;
int32 sTestSndID;
uint8 gDGon;
uint8 gDGmode;
uint8 gDGbits;
int8 gDGfield[6];
_XDG dg[6];
uint32 dg_color[6];
int8 dg_color_str[8][6];
int8 dg_field_str[15][28];
int8 vAssertBuf2[128];
XStreamHeader currentHeader;
uint32 frametime;
uint32 l_currentStaticUsed;
int32 gDebugDrawDebugInfo;

void xDebugGraphIdle();
void xDebugGraphInit();
void xDebugGraphRender(_XDG* gp);
void xDebugGraphSetup(_XDG* gp, float32 mult, uint32 graphcolor, int32 tickmin, int32 tickmax, int32 tickstep, uint32 tickcolor);
void xDebugModeService();
void xDebugUpdateStats();

// xDebugGraphIdle__Fv
// Start address: 0x35f8d0
void xDebugGraphIdle()
{
	ulong32* ptr;
	uint32 val;
	uint32 stack;
	uint32 i;
	// Line 777, Address: 0x35f8d0, Func Offset: 0
	// Line 781, Address: 0x35f8e4, Func Offset: 0x14
	// Line 782, Address: 0x35f904, Func Offset: 0x34
	// Line 783, Address: 0x35f914, Func Offset: 0x44
	// Line 784, Address: 0x35f918, Func Offset: 0x48
	// Line 785, Address: 0x35f924, Func Offset: 0x54
	// Line 787, Address: 0x35f940, Func Offset: 0x70
	// Line 788, Address: 0x35f960, Func Offset: 0x90
	// Line 789, Address: 0x35f964, Func Offset: 0x94
	// Line 791, Address: 0x35f974, Func Offset: 0xa4
	// Line 792, Address: 0x35f978, Func Offset: 0xa8
	// Line 793, Address: 0x35fb14, Func Offset: 0x244
	// Line 794, Address: 0x35fb1c, Func Offset: 0x24c
	// Line 797, Address: 0x35fcbc, Func Offset: 0x3ec
	// Line 798, Address: 0x35fcd4, Func Offset: 0x404
	// Line 801, Address: 0x35fdf0, Func Offset: 0x520
	// Line 802, Address: 0x35fe0c, Func Offset: 0x53c
	// Line 803, Address: 0x35fe18, Func Offset: 0x548
	// Line 805, Address: 0x35fe30, Func Offset: 0x560
	// Line 806, Address: 0x35fe40, Func Offset: 0x570
	// Line 807, Address: 0x35fe4c, Func Offset: 0x57c
	// Line 808, Address: 0x35fe5c, Func Offset: 0x58c
	// Line 810, Address: 0x35fe94, Func Offset: 0x5c4
	// Line 811, Address: 0x35fe9c, Func Offset: 0x5cc
	// Line 812, Address: 0x35fea8, Func Offset: 0x5d8
	// Line 813, Address: 0x35fec8, Func Offset: 0x5f8
	// Line 814, Address: 0x35fed4, Func Offset: 0x604
	// Line 816, Address: 0x35fef4, Func Offset: 0x624
	// Line 817, Address: 0x35fef8, Func Offset: 0x628
	// Line 818, Address: 0x35ff18, Func Offset: 0x648
	// Line 819, Address: 0x35ff2c, Func Offset: 0x65c
	// Line 820, Address: 0x35ff30, Func Offset: 0x660
	// Line 821, Address: 0x35ff40, Func Offset: 0x670
	// Line 822, Address: 0x35ff58, Func Offset: 0x688
	// Line 823, Address: 0x35ff64, Func Offset: 0x694
	// Line 824, Address: 0x35ff7c, Func Offset: 0x6ac
	// Line 825, Address: 0x35ff88, Func Offset: 0x6b8
	// Line 826, Address: 0x35ffa0, Func Offset: 0x6d0
	// Line 827, Address: 0x35ffac, Func Offset: 0x6dc
	// Line 828, Address: 0x35ffc4, Func Offset: 0x6f4
	// Line 841, Address: 0x35ffd0, Func Offset: 0x700
	// Line 842, Address: 0x35ffe8, Func Offset: 0x718
	// Line 843, Address: 0x35fff4, Func Offset: 0x724
	// Line 844, Address: 0x360020, Func Offset: 0x750
	// Line 845, Address: 0x360034, Func Offset: 0x764
	// Line 846, Address: 0x360038, Func Offset: 0x768
	// Line 847, Address: 0x360050, Func Offset: 0x780
	// Line 848, Address: 0x36005c, Func Offset: 0x78c
	// Line 849, Address: 0x360088, Func Offset: 0x7b8
	// Line 850, Address: 0x36009c, Func Offset: 0x7cc
	// Line 853, Address: 0x3600a0, Func Offset: 0x7d0
	// Line 854, Address: 0x3600d0, Func Offset: 0x800
	// Line 855, Address: 0x3600dc, Func Offset: 0x80c
	// Line 856, Address: 0x3600f4, Func Offset: 0x824
	// Line 858, Address: 0x360100, Func Offset: 0x830
	// Func End, Address: 0x36011c, Func Offset: 0x84c
}

// xDebugGraphInit__Fv
// Start address: 0x360120
void xDebugGraphInit()
{
	// Line 771, Address: 0x360120, Func Offset: 0
	// Line 772, Address: 0x360128, Func Offset: 0x8
	// Func End, Address: 0x360130, Func Offset: 0x10
}

// xDebugGraphRender__FP4_XDG
// Start address: 0x360130
void xDebugGraphRender(_XDG* gp)
{
	uint8 b;
	uint8 g;
	uint8 r;
	_RwV2d p1;
	_RwV2d p0;
	int32 idx;
	int32 i;
	// Line 602, Address: 0x360130, Func Offset: 0
	// Line 607, Address: 0x360154, Func Offset: 0x24
	// Line 609, Address: 0x3601f4, Func Offset: 0xc4
	// Line 611, Address: 0x360200, Func Offset: 0xd0
	// Line 612, Address: 0x36020c, Func Offset: 0xdc
	// Line 613, Address: 0x360218, Func Offset: 0xe8
	// Line 614, Address: 0x36021c, Func Offset: 0xec
	// Line 615, Address: 0x360228, Func Offset: 0xf8
	// Line 616, Address: 0x360230, Func Offset: 0x100
	// Line 620, Address: 0x360238, Func Offset: 0x108
	// Line 622, Address: 0x360270, Func Offset: 0x140
	// Line 623, Address: 0x36028c, Func Offset: 0x15c
	// Line 627, Address: 0x3602a8, Func Offset: 0x178
	// Line 628, Address: 0x3602b4, Func Offset: 0x184
	// Line 629, Address: 0x3602c0, Func Offset: 0x190
	// Line 634, Address: 0x3602c4, Func Offset: 0x194
	// Line 635, Address: 0x3602cc, Func Offset: 0x19c
	// Line 636, Address: 0x3602f4, Func Offset: 0x1c4
	// Line 637, Address: 0x360318, Func Offset: 0x1e8
	// Line 647, Address: 0x360324, Func Offset: 0x1f4
	// Line 648, Address: 0x360344, Func Offset: 0x214
	// Line 649, Address: 0x360368, Func Offset: 0x238
	// Line 655, Address: 0x360374, Func Offset: 0x244
	// Line 657, Address: 0x360390, Func Offset: 0x260
	// Line 658, Address: 0x3603a0, Func Offset: 0x270
	// Line 659, Address: 0x3603b4, Func Offset: 0x284
	// Func End, Address: 0x3603dc, Func Offset: 0x2ac
}

// xDebugGraphSetup__FP4_XDGfUiiiiUi
// Start address: 0x3603e0
void xDebugGraphSetup(_XDG* gp, float32 mult, uint32 graphcolor, int32 tickmin, int32 tickmax, int32 tickstep, uint32 tickcolor)
{
	// Line 549, Address: 0x3603e0, Func Offset: 0
	// Line 550, Address: 0x360420, Func Offset: 0x40
	// Line 554, Address: 0x3604c0, Func Offset: 0xe0
	// Line 560, Address: 0x3604c4, Func Offset: 0xe4
	// Line 561, Address: 0x3604c8, Func Offset: 0xe8
	// Line 564, Address: 0x3604dc, Func Offset: 0xfc
	// Line 567, Address: 0x3604e0, Func Offset: 0x100
	// Line 568, Address: 0x3604e8, Func Offset: 0x108
	// Line 571, Address: 0x3604ec, Func Offset: 0x10c
	// Line 572, Address: 0x3604f4, Func Offset: 0x114
	// Line 573, Address: 0x3604f8, Func Offset: 0x118
	// Line 574, Address: 0x360500, Func Offset: 0x120
	// Line 576, Address: 0x360504, Func Offset: 0x124
	// Line 579, Address: 0x3605cc, Func Offset: 0x1ec
	// Line 580, Address: 0x3605d0, Func Offset: 0x1f0
	// Line 581, Address: 0x3605d4, Func Offset: 0x1f4
	// Line 584, Address: 0x3605d8, Func Offset: 0x1f8
	// Line 585, Address: 0x3605dc, Func Offset: 0x1fc
	// Func End, Address: 0x360608, Func Offset: 0x228
}

// xDebugModeService__Fv
// Start address: 0x360610
void xDebugModeService()
{
	// Line 242, Address: 0x360610, Func Offset: 0
	// Line 250, Address: 0x360618, Func Offset: 0x8
	// Line 251, Address: 0x360630, Func Offset: 0x20
	// Line 253, Address: 0x360654, Func Offset: 0x44
	// Line 254, Address: 0x36066c, Func Offset: 0x5c
	// Line 285, Address: 0x360694, Func Offset: 0x84
	// Line 288, Address: 0x3606c0, Func Offset: 0xb0
	// Line 289, Address: 0x3606d8, Func Offset: 0xc8
	// Line 291, Address: 0x3606e4, Func Offset: 0xd4
	// Line 292, Address: 0x3606fc, Func Offset: 0xec
	// Line 294, Address: 0x360708, Func Offset: 0xf8
	// Line 295, Address: 0x360718, Func Offset: 0x108
	// Line 296, Address: 0x36071c, Func Offset: 0x10c
	// Line 297, Address: 0x360728, Func Offset: 0x118
	// Line 299, Address: 0x360730, Func Offset: 0x120
	// Line 301, Address: 0x36073c, Func Offset: 0x12c
	// Line 302, Address: 0x36074c, Func Offset: 0x13c
	// Line 304, Address: 0x36075c, Func Offset: 0x14c
	// Line 305, Address: 0x360760, Func Offset: 0x150
	// Line 308, Address: 0x360768, Func Offset: 0x158
	// Line 309, Address: 0x360780, Func Offset: 0x170
	// Line 311, Address: 0x36078c, Func Offset: 0x17c
	// Line 312, Address: 0x3607a4, Func Offset: 0x194
	// Line 314, Address: 0x3607b0, Func Offset: 0x1a0
	// Line 315, Address: 0x3607c0, Func Offset: 0x1b0
	// Line 316, Address: 0x3607c4, Func Offset: 0x1b4
	// Line 317, Address: 0x3607d0, Func Offset: 0x1c0
	// Line 319, Address: 0x3607d8, Func Offset: 0x1c8
	// Line 320, Address: 0x3607e4, Func Offset: 0x1d4
	// Line 323, Address: 0x3607ec, Func Offset: 0x1dc
	// Line 324, Address: 0x360804, Func Offset: 0x1f4
	// Line 326, Address: 0x360810, Func Offset: 0x200
	// Line 327, Address: 0x360828, Func Offset: 0x218
	// Line 329, Address: 0x360834, Func Offset: 0x224
	// Line 330, Address: 0x360844, Func Offset: 0x234
	// Line 331, Address: 0x360848, Func Offset: 0x238
	// Line 332, Address: 0x360854, Func Offset: 0x244
	// Line 334, Address: 0x36085c, Func Offset: 0x24c
	// Line 335, Address: 0x360868, Func Offset: 0x258
	// Line 338, Address: 0x360870, Func Offset: 0x260
	// Line 339, Address: 0x360888, Func Offset: 0x278
	// Line 341, Address: 0x360894, Func Offset: 0x284
	// Line 342, Address: 0x3608ac, Func Offset: 0x29c
	// Line 344, Address: 0x3608b8, Func Offset: 0x2a8
	// Line 345, Address: 0x3608c8, Func Offset: 0x2b8
	// Line 346, Address: 0x3608cc, Func Offset: 0x2bc
	// Line 347, Address: 0x3608d8, Func Offset: 0x2c8
	// Line 348, Address: 0x3608e0, Func Offset: 0x2d0
	// Line 349, Address: 0x3608ec, Func Offset: 0x2dc
	// Line 352, Address: 0x3608f4, Func Offset: 0x2e4
	// Line 353, Address: 0x3608fc, Func Offset: 0x2ec
	// Line 360, Address: 0x360904, Func Offset: 0x2f4
	// Line 361, Address: 0x36091c, Func Offset: 0x30c
	// Line 362, Address: 0x360944, Func Offset: 0x334
	// Line 363, Address: 0x36095c, Func Offset: 0x34c
	// Line 364, Address: 0x360980, Func Offset: 0x370
	// Line 365, Address: 0x360994, Func Offset: 0x384
	// Line 368, Address: 0x36099c, Func Offset: 0x38c
	// Line 369, Address: 0x3609a4, Func Offset: 0x394
	// Line 379, Address: 0x3609ac, Func Offset: 0x39c
	// Line 380, Address: 0x3609c4, Func Offset: 0x3b4
	// Line 382, Address: 0x3609d0, Func Offset: 0x3c0
	// Line 383, Address: 0x3609e8, Func Offset: 0x3d8
	// Line 385, Address: 0x3609f4, Func Offset: 0x3e4
	// Line 387, Address: 0x360a0c, Func Offset: 0x3fc
	// Line 389, Address: 0x360a28, Func Offset: 0x418
	// Line 390, Address: 0x360a34, Func Offset: 0x424
	// Line 393, Address: 0x360a3c, Func Offset: 0x42c
	// Line 397, Address: 0x360a40, Func Offset: 0x430
	// Line 399, Address: 0x360a58, Func Offset: 0x448
	// Line 401, Address: 0x360a74, Func Offset: 0x464
	// Line 402, Address: 0x360a80, Func Offset: 0x470
	// Line 405, Address: 0x360a88, Func Offset: 0x478
	// Line 410, Address: 0x360a8c, Func Offset: 0x47c
	// Line 412, Address: 0x360aa0, Func Offset: 0x490
	// Line 413, Address: 0x360ab0, Func Offset: 0x4a0
	// Line 414, Address: 0x360ab4, Func Offset: 0x4a4
	// Line 415, Address: 0x360ac0, Func Offset: 0x4b0
	// Line 418, Address: 0x360ac8, Func Offset: 0x4b8
	// Line 419, Address: 0x360ad4, Func Offset: 0x4c4
	// Line 422, Address: 0x360adc, Func Offset: 0x4cc
	// Line 423, Address: 0x360af4, Func Offset: 0x4e4
	// Line 424, Address: 0x360afc, Func Offset: 0x4ec
	// Line 425, Address: 0x360b14, Func Offset: 0x504
	// Line 428, Address: 0x360b1c, Func Offset: 0x50c
	// Line 429, Address: 0x360b2c, Func Offset: 0x51c
	// Line 434, Address: 0x360b34, Func Offset: 0x524
	// Line 435, Address: 0x360b4c, Func Offset: 0x53c
	// Line 436, Address: 0x360b58, Func Offset: 0x548
	// Line 437, Address: 0x360b70, Func Offset: 0x560
	// Line 438, Address: 0x360b7c, Func Offset: 0x56c
	// Line 439, Address: 0x360b8c, Func Offset: 0x57c
	// Line 440, Address: 0x360b90, Func Offset: 0x580
	// Line 441, Address: 0x360b9c, Func Offset: 0x58c
	// Line 444, Address: 0x360ba4, Func Offset: 0x594
	// Line 445, Address: 0x360bb0, Func Offset: 0x5a0
	// Line 450, Address: 0x360bb8, Func Offset: 0x5a8
	// Line 463, Address: 0x360c24, Func Offset: 0x614
	// Line 464, Address: 0x360c3c, Func Offset: 0x62c
	// Line 466, Address: 0x360c48, Func Offset: 0x638
	// Func End, Address: 0x360c58, Func Offset: 0x648
}

// xDebugUpdateStats__Fv
// Start address: 0x360c60
void xDebugUpdateStats()
{
	// Line 117, Address: 0x360c60, Func Offset: 0
	// Line 118, Address: 0x360c68, Func Offset: 0x8
	// Line 119, Address: 0x360c98, Func Offset: 0x38
	// Line 120, Address: 0x360ca4, Func Offset: 0x44
	// Line 121, Address: 0x360cb4, Func Offset: 0x54
	// Line 123, Address: 0x360cb8, Func Offset: 0x58
	// Func End, Address: 0x360cc8, Func Offset: 0x68
}

