typedef struct xPar;
typedef struct tagParCmdList;
typedef struct tagxParSys;
typedef struct xParCmd;
typedef struct XStreamHeader;
typedef struct Vector3D;
typedef struct tagXStreamDirectoryEntry;
typedef struct tagXStreamMDSDirectory;


typedef tagXStreamDirectoryEntry type_0[1000];
typedef xPar type_1[1500];
typedef uint8 type_2[2];
typedef tagxParSys type_3[37];
typedef uint8 type_4[4];
typedef int8 type_5[4];
typedef uint8 type_6[4];
typedef uint8 type_7[4];
typedef uint8 type_8[3];
typedef int8 type_9[2048];
typedef float32 type_10[2];
typedef float32 type_11[2];
typedef int8 type_12[128];
typedef int32 type_13[37];

struct xPar
{
	xPar* m_next;
	xPar* m_prev;
	Vector3D m_pos;
	Vector3D m_vel;
	Vector3D m_acc;
	float32 m_size;
	float32 m_sizeVel;
	int16 m_lifetime;
	uint8 m_flag;
	uint8 m_mode;
	uint8 m_c[4];
	int8 m_cvel[4];
	uint8 m_c1[4];
	uint8 m_c2[4];
	uint8 m_rotdeg[3];
	uint8 m_texIdx;
	float32 m_uva[2];
	float32 m_uvb[2];
};

struct tagParCmdList
{
	int32 m_numCmd;
	xParCmd* m_cmd;
	xParCmd* m_lastCmd;
	tagParCmdList* m_prev;
	tagParCmdList* m_next;
};

struct tagxParSys
{
	uint32 m_idx;
	xPar* m_root;
	xPar* m_dead;
	int32 m_num_of_particles;
	tagParCmdList* m_cmd;
	uint8 m_alive;
	uint8 m_killWhenDead;
	uint8 m_active;
	uint8 m_visible;
	uint8 m_culled;
	uint8 m_deadGlobalPool;
	uint8 m_pad[2];
};

struct xParCmd
{
	uint8 m_tag;
	uint8 m_flag;
	int16 m_count;
	void* m_method;
	void* m_data;
	xParCmd* m_next;
	xParCmd* m_prev;
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

struct tagXStreamDirectoryEntry
{
	uint32 id;
	uint32 type;
	uint32 offset;
	uint32 length;
};

struct tagXStreamMDSDirectory
{
	uint32 count;
	tagXStreamDirectoryEntry directory[1000];
};

xPar gParPool[1500];
xPar* gParDead;
int8 vAssertBuf2[128];
XStreamHeader currentHeader;
tagxParSys gParSys[37];
int32 gParSysPriority[37];

tagParCmdList* xParSysInitParCmdList(tagxParSys* ps);
void xParSysAllocPars(tagxParSys* ps, int32 numPars);
void xParSysKillPar(tagxParSys* ps, xPar* p);
xPar* xParSysAddPar(tagxParSys* ps);
void xParSysAddParP(tagxParSys* ps, xPar* p);
void xParSysAnimate(tagxParSys* ps, uint32 dt);
void xParSysKillAllParticles(tagxParSys* ps);
void xParSysExecute(tagxParSys* ps, uint32 dt);
void xParSysSetCulled(tagxParSys* ps, int32 isCulled);
void xParSysSetVisible(tagxParSys* ps, int32 isVisible);
void xParSysInit(tagxParSys* ps);
void xParInit(xPar* p);
void xParMemInit();

// xParSysInitParCmdList__FP10tagxParSys
// Start address: 0x34afd0
tagParCmdList* xParSysInitParCmdList(tagxParSys* ps)
{
	// Line 581, Address: 0x34afd0, Func Offset: 0
	// Line 582, Address: 0x34afe0, Func Offset: 0x10
	// Line 584, Address: 0x34afec, Func Offset: 0x1c
	// Line 585, Address: 0x34aff8, Func Offset: 0x28
	// Line 589, Address: 0x34affc, Func Offset: 0x2c
	// Line 590, Address: 0x34b008, Func Offset: 0x38
	// Line 592, Address: 0x34b014, Func Offset: 0x44
	// Line 593, Address: 0x34b018, Func Offset: 0x48
	// Func End, Address: 0x34b02c, Func Offset: 0x5c
}

// xParSysAllocPars__FP10tagxParSysi
// Start address: 0x34b030
void xParSysAllocPars(tagxParSys* ps, int32 numPars)
{
	xPar* p;
	int32 i;
	// Line 544, Address: 0x34b030, Func Offset: 0
	// Line 548, Address: 0x34b050, Func Offset: 0x20
	// Line 549, Address: 0x34b0f0, Func Offset: 0xc0
	// Line 550, Address: 0x34b194, Func Offset: 0x164
	// Line 551, Address: 0x34b238, Func Offset: 0x208
	// Line 553, Address: 0x34b2d8, Func Offset: 0x2a8
	// Line 555, Address: 0x34b2e0, Func Offset: 0x2b0
	// Line 556, Address: 0x34b2e8, Func Offset: 0x2b8
	// Line 559, Address: 0x34b2f0, Func Offset: 0x2c0
	// Line 561, Address: 0x34b2f4, Func Offset: 0x2c4
	// Line 563, Address: 0x34b300, Func Offset: 0x2d0
	// Line 564, Address: 0x34b340, Func Offset: 0x310
	// Line 567, Address: 0x34b348, Func Offset: 0x318
	// Line 570, Address: 0x34b354, Func Offset: 0x324
	// Line 572, Address: 0x34b420, Func Offset: 0x3f0
	// Line 573, Address: 0x34b434, Func Offset: 0x404
	// Line 574, Address: 0x34b438, Func Offset: 0x408
	// Func End, Address: 0x34b458, Func Offset: 0x428
}

// xParSysKillPar__FP10tagxParSysP4xPar
// Start address: 0x34b460
void xParSysKillPar(tagxParSys* ps, xPar* p)
{
	// Line 469, Address: 0x34b460, Func Offset: 0
	// Line 470, Address: 0x34b478, Func Offset: 0x18
	// Line 473, Address: 0x34b518, Func Offset: 0xb8
	// Line 476, Address: 0x34b524, Func Offset: 0xc4
	// Line 477, Address: 0x34b52c, Func Offset: 0xcc
	// Line 478, Address: 0x34b538, Func Offset: 0xd8
	// Line 481, Address: 0x34b540, Func Offset: 0xe0
	// Line 482, Address: 0x34b544, Func Offset: 0xe4
	// Line 483, Address: 0x34b548, Func Offset: 0xe8
	// Line 486, Address: 0x34b550, Func Offset: 0xf0
	// Line 487, Address: 0x34b55c, Func Offset: 0xfc
	// Line 488, Address: 0x34b568, Func Offset: 0x108
	// Line 489, Address: 0x34b574, Func Offset: 0x114
	// Line 491, Address: 0x34b580, Func Offset: 0x120
	// Line 492, Address: 0x34b584, Func Offset: 0x124
	// Line 496, Address: 0x34b588, Func Offset: 0x128
	// Line 498, Address: 0x34b594, Func Offset: 0x134
	// Line 502, Address: 0x34b5a4, Func Offset: 0x144
	// Line 503, Address: 0x34b698, Func Offset: 0x238
	// Line 508, Address: 0x34b6a0, Func Offset: 0x240
	// Line 514, Address: 0x34b764, Func Offset: 0x304
	// Func End, Address: 0x34b77c, Func Offset: 0x31c
}

// xParSysAddPar__FP10tagxParSys
// Start address: 0x34b780
xPar* xParSysAddPar(tagxParSys* ps)
{
	int32 myPriority;
	uint32 i;
	xPar* p;
	// Line 400, Address: 0x34b780, Func Offset: 0
	// Line 407, Address: 0x34b794, Func Offset: 0x14
	// Line 410, Address: 0x34b7a4, Func Offset: 0x24
	// Line 411, Address: 0x34b7e4, Func Offset: 0x64
	// Line 414, Address: 0x34b7ec, Func Offset: 0x6c
	// Line 417, Address: 0x34b804, Func Offset: 0x84
	// Line 420, Address: 0x34b810, Func Offset: 0x90
	// Line 424, Address: 0x34b81c, Func Offset: 0x9c
	// Line 426, Address: 0x34b844, Func Offset: 0xc4
	// Line 429, Address: 0x34b864, Func Offset: 0xe4
	// Line 432, Address: 0x34b888, Func Offset: 0x108
	// Line 433, Address: 0x34b8c4, Func Offset: 0x144
	// Line 434, Address: 0x34b908, Func Offset: 0x188
	// Line 435, Address: 0x34b9a8, Func Offset: 0x228
	// Line 440, Address: 0x34b9b0, Func Offset: 0x230
	// Line 443, Address: 0x34b9c4, Func Offset: 0x244
	// Line 447, Address: 0x34b9cc, Func Offset: 0x24c
	// Line 449, Address: 0x34b9d8, Func Offset: 0x258
	// Line 451, Address: 0x34b9dc, Func Offset: 0x25c
	// Line 452, Address: 0x34b9e4, Func Offset: 0x264
	// Line 453, Address: 0x34b9f0, Func Offset: 0x270
	// Line 454, Address: 0x34b9f8, Func Offset: 0x278
	// Line 456, Address: 0x34ba00, Func Offset: 0x280
	// Line 459, Address: 0x34ba04, Func Offset: 0x284
	// Line 461, Address: 0x34ba0c, Func Offset: 0x28c
	// Line 462, Address: 0x34ba18, Func Offset: 0x298
	// Line 465, Address: 0x34ba28, Func Offset: 0x2a8
	// Line 466, Address: 0x34ba2c, Func Offset: 0x2ac
	// Func End, Address: 0x34ba44, Func Offset: 0x2c4
}

// xParSysAddParP__FP10tagxParSysP4xPar
// Start address: 0x34ba50
void xParSysAddParP(tagxParSys* ps, xPar* p)
{
	// Line 371, Address: 0x34ba50, Func Offset: 0
	// Line 376, Address: 0x34ba68, Func Offset: 0x18
	// Line 377, Address: 0x34bb08, Func Offset: 0xb8
	// Line 379, Address: 0x34bba8, Func Offset: 0x158
	// Line 381, Address: 0x34bbb0, Func Offset: 0x160
	// Line 382, Address: 0x34bbbc, Func Offset: 0x16c
	// Line 383, Address: 0x34bbc0, Func Offset: 0x170
	// Line 386, Address: 0x34bbc4, Func Offset: 0x174
	// Line 388, Address: 0x34bbd0, Func Offset: 0x180
	// Line 389, Address: 0x34bbd8, Func Offset: 0x188
	// Line 390, Address: 0x34bbe0, Func Offset: 0x190
	// Line 391, Address: 0x34bbe4, Func Offset: 0x194
	// Line 394, Address: 0x34bbec, Func Offset: 0x19c
	// Line 396, Address: 0x34bbf0, Func Offset: 0x1a0
	// Func End, Address: 0x34bc08, Func Offset: 0x1b8
}

// xParSysAnimate__FP10tagxParSysUi
// Start address: 0x34bc10
void xParSysAnimate(tagxParSys* ps, uint32 dt)
{
	int16 col;
	uint8 t;
	xPar* tmp;
	xPar* i;
	// Line 309, Address: 0x34bc10, Func Offset: 0
	// Line 312, Address: 0x34bc30, Func Offset: 0x20
	// Line 314, Address: 0x34bc34, Func Offset: 0x24
	// Line 315, Address: 0x34bcd4, Func Offset: 0xc4
	// Line 317, Address: 0x34bcd8, Func Offset: 0xc8
	// Line 319, Address: 0x34bce4, Func Offset: 0xd4
	// Line 321, Address: 0x34bce8, Func Offset: 0xd8
	// Line 323, Address: 0x34bcf0, Func Offset: 0xe0
	// Line 325, Address: 0x34bcfc, Func Offset: 0xec
	// Line 326, Address: 0x34bd00, Func Offset: 0xf0
	// Line 327, Address: 0x34bd04, Func Offset: 0xf4
	// Line 328, Address: 0x34bd10, Func Offset: 0x100
	// Line 332, Address: 0x34bd18, Func Offset: 0x108
	// Line 333, Address: 0x34bd34, Func Offset: 0x124
	// Line 334, Address: 0x34bd3c, Func Offset: 0x12c
	// Line 335, Address: 0x34bd48, Func Offset: 0x138
	// Line 336, Address: 0x34bd5c, Func Offset: 0x14c
	// Line 337, Address: 0x34bd60, Func Offset: 0x150
	// Line 339, Address: 0x34bd64, Func Offset: 0x154
	// Line 340, Address: 0x34bd80, Func Offset: 0x170
	// Line 341, Address: 0x34bd88, Func Offset: 0x178
	// Line 342, Address: 0x34bd94, Func Offset: 0x184
	// Line 343, Address: 0x34bda8, Func Offset: 0x198
	// Line 344, Address: 0x34bdb0, Func Offset: 0x1a0
	// Line 346, Address: 0x34bdb4, Func Offset: 0x1a4
	// Line 347, Address: 0x34bdd0, Func Offset: 0x1c0
	// Line 348, Address: 0x34bdd8, Func Offset: 0x1c8
	// Line 349, Address: 0x34bde4, Func Offset: 0x1d4
	// Line 350, Address: 0x34bdf8, Func Offset: 0x1e8
	// Line 351, Address: 0x34be00, Func Offset: 0x1f0
	// Line 353, Address: 0x34be04, Func Offset: 0x1f4
	// Line 354, Address: 0x34be20, Func Offset: 0x210
	// Line 355, Address: 0x34be28, Func Offset: 0x218
	// Line 356, Address: 0x34be34, Func Offset: 0x224
	// Line 357, Address: 0x34be48, Func Offset: 0x238
	// Line 358, Address: 0x34be50, Func Offset: 0x240
	// Line 361, Address: 0x34be54, Func Offset: 0x244
	// Line 362, Address: 0x34bea0, Func Offset: 0x290
	// Line 364, Address: 0x34beb4, Func Offset: 0x2a4
	// Line 366, Address: 0x34bebc, Func Offset: 0x2ac
	// Line 367, Address: 0x34bec8, Func Offset: 0x2b8
	// Func End, Address: 0x34bee8, Func Offset: 0x2d8
}

// xParSysKillAllParticles__FP10tagxParSys
// Start address: 0x34bef0
void xParSysKillAllParticles(tagxParSys* ps)
{
	xPar* tmp;
	xPar* i;
	// Line 288, Address: 0x34bef0, Func Offset: 0
	// Line 292, Address: 0x34bf04, Func Offset: 0x14
	// Line 293, Address: 0x34bfa4, Func Offset: 0xb4
	// Line 297, Address: 0x34bfa8, Func Offset: 0xb8
	// Line 300, Address: 0x34bfb0, Func Offset: 0xc0
	// Line 301, Address: 0x34bfb4, Func Offset: 0xc4
	// Line 304, Address: 0x34bfb8, Func Offset: 0xc8
	// Line 305, Address: 0x34bfc4, Func Offset: 0xd4
	// Line 306, Address: 0x34bfd4, Func Offset: 0xe4
	// Func End, Address: 0x34bfec, Func Offset: 0xfc
}

// xParSysExecute__FP10tagxParSysUi
// Start address: 0x34bff0
void xParSysExecute(tagxParSys* ps, uint32 dt)
{
	tagParCmdList* list;
	// Line 275, Address: 0x34bff0, Func Offset: 0
	// Line 278, Address: 0x34c008, Func Offset: 0x18
	// Line 280, Address: 0x34c0a8, Func Offset: 0xb8
	// Line 281, Address: 0x34c0ac, Func Offset: 0xbc
	// Line 283, Address: 0x34c0b4, Func Offset: 0xc4
	// Line 285, Address: 0x34c0c4, Func Offset: 0xd4
	// Func End, Address: 0x34c0dc, Func Offset: 0xec
}

// xParSysSetCulled__FP10tagxParSysi
// Start address: 0x34c0e0
void xParSysSetCulled(tagxParSys* ps, int32 isCulled)
{
	// Line 237, Address: 0x34c0e0, Func Offset: 0
	// Line 238, Address: 0x34c0e4, Func Offset: 0x4
	// Func End, Address: 0x34c0ec, Func Offset: 0xc
}

// xParSysSetVisible__FP10tagxParSysi
// Start address: 0x34c0f0
void xParSysSetVisible(tagxParSys* ps, int32 isVisible)
{
	// Line 226, Address: 0x34c0f0, Func Offset: 0
	// Line 227, Address: 0x34c0f4, Func Offset: 0x4
	// Func End, Address: 0x34c0fc, Func Offset: 0xc
}

// xParSysInit__FP10tagxParSys
// Start address: 0x34c100
void xParSysInit(tagxParSys* ps)
{
	// Line 178, Address: 0x34c100, Func Offset: 0
	// Line 179, Address: 0x34c104, Func Offset: 0x4
	// Line 180, Address: 0x34c108, Func Offset: 0x8
	// Line 181, Address: 0x34c10c, Func Offset: 0xc
	// Line 182, Address: 0x34c110, Func Offset: 0x10
	// Line 183, Address: 0x34c114, Func Offset: 0x14
	// Line 185, Address: 0x34c118, Func Offset: 0x18
	// Line 186, Address: 0x34c120, Func Offset: 0x20
	// Line 187, Address: 0x34c128, Func Offset: 0x28
	// Line 188, Address: 0x34c12c, Func Offset: 0x2c
	// Line 189, Address: 0x34c134, Func Offset: 0x34
	// Func End, Address: 0x34c13c, Func Offset: 0x3c
}

// xParInit__FP4xPar
// Start address: 0x34c140
void xParInit(xPar* p)
{
	int32 i;
	// Line 131, Address: 0x34c140, Func Offset: 0
	// Line 132, Address: 0x34c144, Func Offset: 0x4
	// Line 133, Address: 0x34c148, Func Offset: 0x8
	// Line 135, Address: 0x34c14c, Func Offset: 0xc
	// Line 136, Address: 0x34c150, Func Offset: 0x10
	// Line 137, Address: 0x34c154, Func Offset: 0x14
	// Line 139, Address: 0x34c158, Func Offset: 0x18
	// Line 140, Address: 0x34c15c, Func Offset: 0x1c
	// Line 141, Address: 0x34c160, Func Offset: 0x20
	// Line 143, Address: 0x34c164, Func Offset: 0x24
	// Line 144, Address: 0x34c168, Func Offset: 0x28
	// Line 146, Address: 0x34c16c, Func Offset: 0x2c
	// Line 148, Address: 0x34c170, Func Offset: 0x30
	// Line 149, Address: 0x34c174, Func Offset: 0x34
	// Line 150, Address: 0x34c178, Func Offset: 0x38
	// Line 151, Address: 0x34c17c, Func Offset: 0x3c
	// Line 153, Address: 0x34c180, Func Offset: 0x40
	// Line 154, Address: 0x34c188, Func Offset: 0x48
	// Line 155, Address: 0x34c190, Func Offset: 0x50
	// Line 156, Address: 0x34c198, Func Offset: 0x58
	// Line 158, Address: 0x34c1a0, Func Offset: 0x60
	// Line 160, Address: 0x34c1a4, Func Offset: 0x64
	// Line 162, Address: 0x34c1b0, Func Offset: 0x70
	// Line 163, Address: 0x34c1c0, Func Offset: 0x80
	// Line 164, Address: 0x34c1d0, Func Offset: 0x90
	// Line 166, Address: 0x34c1e4, Func Offset: 0xa4
	// Line 168, Address: 0x34c1f0, Func Offset: 0xb0
	// Line 169, Address: 0x34c1f8, Func Offset: 0xb8
	// Line 171, Address: 0x34c210, Func Offset: 0xd0
	// Line 172, Address: 0x34c214, Func Offset: 0xd4
	// Line 173, Address: 0x34c218, Func Offset: 0xd8
	// Func End, Address: 0x34c220, Func Offset: 0xe0
}

// xParMemInit__Fv
// Start address: 0x34c220
void xParMemInit()
{
	xPar* p;
	int32 i;
	// Line 34, Address: 0x34c220, Func Offset: 0
	// Line 36, Address: 0x34c22c, Func Offset: 0xc
	// Line 38, Address: 0x34c24c, Func Offset: 0x2c
	// Line 39, Address: 0x34c250, Func Offset: 0x30
	// Line 41, Address: 0x34c254, Func Offset: 0x34
	// Line 43, Address: 0x34c260, Func Offset: 0x40
	// Line 44, Address: 0x34c268, Func Offset: 0x48
	// Line 46, Address: 0x34c270, Func Offset: 0x50
	// Line 47, Address: 0x34c274, Func Offset: 0x54
	// Line 48, Address: 0x34c284, Func Offset: 0x64
	// Func End, Address: 0x34c28c, Func Offset: 0x6c
}

