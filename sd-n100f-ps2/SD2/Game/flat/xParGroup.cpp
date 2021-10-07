typedef struct xPar;
typedef struct xParGroup;
typedef struct zParEmitterAsset;
typedef struct xParCmdTex;
typedef struct _tagEmitCircle;
typedef struct _tagEmitSphere;
typedef struct p2BaseAsset;
typedef struct _xVec3;
typedef struct _tagEmitRect;
typedef struct _tagEmitLine;
typedef struct _tagEmitVolume;
typedef struct _tagEmitOffsetPoint;

typedef void(*type_0)(void*, xParGroup*);

typedef xParGroup* type_1[255];
typedef uint8 type_2[4];
typedef uint8 type_3[2];
typedef uint8 type_4[3];
typedef uint8 type_5[4];
typedef uint8 type_6[4];
typedef float32 type_7[4];
typedef uint8 type_8[2];

struct xPar
{
	xPar* m_next;
	xPar* m_prev;
	float32 m_lifetime;
	uint8 m_c[4];
	_xVec3 m_pos;
	float32 m_size;
	_xVec3 m_vel;
	float32 m_sizeVel;
	uint8 m_flag;
	uint8 m_mode;
	uint8 m_texIdx[2];
	uint8 m_rotdeg[3];
	uint8 pad8;
	uint32 pad32;
	zParEmitterAsset* m_asset;
	float32 m_cvel[4];
};

struct xParGroup
{
	xPar* m_root;
	xPar* m_dead;
	int32 m_num_of_particles;
	uint8 m_alive;
	uint8 m_killWhenDead;
	uint8 m_active;
	uint8 m_visible;
	uint8 m_culled;
	uint8 m_priority;
	uint8 m_flags;
	uint8 m_regidx;
	xParGroup* m_next;
	xParGroup* m_prev;
	void(*draw)(void*, xParGroup*);
	xParCmdTex* m_cmdTex;
};

struct zParEmitterAsset : p2BaseAsset
{
	uint8 emit_flags;
	uint8 emit_type;
	uint8 count;
	uint8 count_variation;
	float32 interval;
	union
	{
		_tagEmitCircle e_circle;
		_tagEmitSphere e_sphere;
		_tagEmitRect e_rect;
		_tagEmitLine e_line;
		_tagEmitVolume e_volume;
		_tagEmitOffsetPoint e_offsetp;
	};
	uint32 attachToID;
	uint32 parSysID;
	_xVec3 pos;
	_xVec3 vel;
	float32 vel_angle_variation;
	uint8 color_birth[4];
	uint8 color_death[4];
	float32 size_birth;
	float32 size_birth_variation;
	float32 size_death;
	float32 life;
	float32 life_variation;
	uint8 pad_emit[2];
	uint8 cull_mode;
	float32 cull_dist_sqr;
	uint8 max_emit;
};

struct xParCmdTex
{
};

struct _tagEmitCircle
{
	float32 radius;
	float32 deflection;
};

struct _tagEmitSphere
{
	float32 radius;
};

struct p2BaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct _xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct _tagEmitRect
{
	float32 x_len;
	float32 z_len;
};

struct _tagEmitLine
{
	_xVec3 pos1;
	_xVec3 pos2;
	float32 radius;
};

struct _tagEmitVolume
{
	uint32 emit_volumeID;
};

struct _tagEmitOffsetPoint
{
	_xVec3 offset;
};

int32 sParGroupRegTableInit;
int32 sParGroupRegTableCount;
xParGroup* sParGroupRegTable[255];

void xParGroupKillPar(xParGroup* ps, xPar* p);
xPar* xParGroupAddPar(xParGroup* ps);
void xParGroupAnimate(xParGroup* ps, float32 dt);
void xParGroupKillAllParticles(xParGroup* ps);
void xParGroupSetActive(xParGroup* ps, uint32 isActive);
void xParGroupUnregister(xParGroup* ps);
void xParGroupRegister(xParGroup* ps);
void xParGroupSetPriority(xParGroup* ps, uint8 val);
void xParGroupSetVisibility(xParGroup* ps, int32 vis);
void xParGroupSetStealing(xParGroup* ps, int32 stealing);
void xParGroupSetBack2Life(xParGroup* ps, int32 b2l);
void xParGroupSetAging(xParGroup* ps, int32 age);
void xParGroupInit(xParGroup* ps);

// xParGroupKillPar__FP9xParGroupP4xPar
// Start address: 0x1d5420
void xParGroupKillPar(xParGroup* ps, xPar* p)
{
	// Line 485, Address: 0x1d5420, Func Offset: 0
	// Line 513, Address: 0x1d5428, Func Offset: 0x8
	// Line 516, Address: 0x1d5434, Func Offset: 0x14
	// Line 517, Address: 0x1d543c, Func Offset: 0x1c
	// Line 518, Address: 0x1d5448, Func Offset: 0x28
	// Line 521, Address: 0x1d544c, Func Offset: 0x2c
	// Line 523, Address: 0x1d5450, Func Offset: 0x30
	// Line 526, Address: 0x1d5458, Func Offset: 0x38
	// Line 527, Address: 0x1d5464, Func Offset: 0x44
	// Line 528, Address: 0x1d546c, Func Offset: 0x4c
	// Line 529, Address: 0x1d5478, Func Offset: 0x58
	// Line 531, Address: 0x1d5480, Func Offset: 0x60
	// Line 532, Address: 0x1d5484, Func Offset: 0x64
	// Line 536, Address: 0x1d5488, Func Offset: 0x68
	// Line 538, Address: 0x1d5494, Func Offset: 0x74
	// Line 542, Address: 0x1d54a4, Func Offset: 0x84
	// Line 543, Address: 0x1d54ac, Func Offset: 0x8c
	// Line 548, Address: 0x1d54b4, Func Offset: 0x94
	// Line 554, Address: 0x1d54d4, Func Offset: 0xb4
	// Func End, Address: 0x1d54e0, Func Offset: 0xc0
}

// xParGroupAddPar__FP9xParGroup
// Start address: 0x1d54e0
xPar* xParGroupAddPar(xParGroup* ps)
{
	uint8 i;
	int32 myPriority;
	xPar* p;
	// Line 405, Address: 0x1d54e0, Func Offset: 0
	// Line 414, Address: 0x1d54f0, Func Offset: 0x10
	// Line 417, Address: 0x1d5500, Func Offset: 0x20
	// Line 418, Address: 0x1d550c, Func Offset: 0x2c
	// Line 421, Address: 0x1d5514, Func Offset: 0x34
	// Line 424, Address: 0x1d5520, Func Offset: 0x40
	// Line 426, Address: 0x1d552c, Func Offset: 0x4c
	// Line 429, Address: 0x1d5538, Func Offset: 0x58
	// Line 433, Address: 0x1d5540, Func Offset: 0x60
	// Line 437, Address: 0x1d5550, Func Offset: 0x70
	// Line 439, Address: 0x1d5558, Func Offset: 0x78
	// Line 442, Address: 0x1d5568, Func Offset: 0x88
	// Line 445, Address: 0x1d5574, Func Offset: 0x94
	// Line 446, Address: 0x1d5588, Func Offset: 0xa8
	// Line 448, Address: 0x1d5590, Func Offset: 0xb0
	// Line 455, Address: 0x1d5598, Func Offset: 0xb8
	// Line 448, Address: 0x1d559c, Func Offset: 0xbc
	// Line 455, Address: 0x1d55a0, Func Offset: 0xc0
	// Line 459, Address: 0x1d55b8, Func Offset: 0xd8
	// Line 463, Address: 0x1d55c0, Func Offset: 0xe0
	// Line 467, Address: 0x1d55cc, Func Offset: 0xec
	// Line 468, Address: 0x1d55d4, Func Offset: 0xf4
	// Line 469, Address: 0x1d55e0, Func Offset: 0x100
	// Line 475, Address: 0x1d55e4, Func Offset: 0x104
	// Line 477, Address: 0x1d55ec, Func Offset: 0x10c
	// Line 478, Address: 0x1d55f4, Func Offset: 0x114
	// Line 481, Address: 0x1d5634, Func Offset: 0x154
	// Line 482, Address: 0x1d5638, Func Offset: 0x158
	// Func End, Address: 0x1d564c, Func Offset: 0x16c
}

// xParGroupAnimate__FP9xParGroupf
// Start address: 0x1d5650
void xParGroupAnimate(xParGroup* ps, float32 dt)
{
	float32 age;
	xPar* tmp;
	xPar* i;
	// Line 277, Address: 0x1d5650, Func Offset: 0
	// Line 285, Address: 0x1d5668, Func Offset: 0x18
	// Line 283, Address: 0x1d5670, Func Offset: 0x20
	// Line 285, Address: 0x1d5678, Func Offset: 0x28
	// Line 286, Address: 0x1d5684, Func Offset: 0x34
	// Line 288, Address: 0x1d5688, Func Offset: 0x38
	// Line 290, Address: 0x1d5690, Func Offset: 0x40
	// Line 297, Address: 0x1d5694, Func Offset: 0x44
	// Line 304, Address: 0x1d569c, Func Offset: 0x4c
	// Line 306, Address: 0x1d56a4, Func Offset: 0x54
	// Line 310, Address: 0x1d56c0, Func Offset: 0x70
	// Line 308, Address: 0x1d56c4, Func Offset: 0x74
	// Line 310, Address: 0x1d56c8, Func Offset: 0x78
	// Line 312, Address: 0x1d56d4, Func Offset: 0x84
	// Line 313, Address: 0x1d56dc, Func Offset: 0x8c
	// Line 316, Address: 0x1d56e4, Func Offset: 0x94
	// Line 318, Address: 0x1d56ec, Func Offset: 0x9c
	// Line 327, Address: 0x1d56f4, Func Offset: 0xa4
	// Line 328, Address: 0x1d56f8, Func Offset: 0xa8
	// Line 329, Address: 0x1d56fc, Func Offset: 0xac
	// Line 330, Address: 0x1d5700, Func Offset: 0xb0
	// Line 331, Address: 0x1d5704, Func Offset: 0xb4
	// Line 332, Address: 0x1d5708, Func Offset: 0xb8
	// Line 333, Address: 0x1d570c, Func Offset: 0xbc
	// Line 334, Address: 0x1d5710, Func Offset: 0xc0
	// Line 335, Address: 0x1d5714, Func Offset: 0xc4
	// Line 336, Address: 0x1d5718, Func Offset: 0xc8
	// Line 337, Address: 0x1d571c, Func Offset: 0xcc
	// Line 338, Address: 0x1d5720, Func Offset: 0xd0
	// Line 339, Address: 0x1d5724, Func Offset: 0xd4
	// Line 340, Address: 0x1d5728, Func Offset: 0xd8
	// Line 366, Address: 0x1d572c, Func Offset: 0xdc
	// Line 367, Address: 0x1d5740, Func Offset: 0xf0
	// Line 369, Address: 0x1d574c, Func Offset: 0xfc
	// Line 370, Address: 0x1d5754, Func Offset: 0x104
	// Line 371, Address: 0x1d5758, Func Offset: 0x108
	// Line 372, Address: 0x1d5760, Func Offset: 0x110
	// Func End, Address: 0x1d577c, Func Offset: 0x12c
}

// xParGroupKillAllParticles__FP9xParGroup
// Start address: 0x1d5780
void xParGroupKillAllParticles(xParGroup* ps)
{
	xPar* tmp;
	xPar* i;
	// Line 255, Address: 0x1d5780, Func Offset: 0
	// Line 260, Address: 0x1d5790, Func Offset: 0x10
	// Line 264, Address: 0x1d5794, Func Offset: 0x14
	// Line 267, Address: 0x1d579c, Func Offset: 0x1c
	// Line 268, Address: 0x1d57a0, Func Offset: 0x20
	// Line 271, Address: 0x1d57a4, Func Offset: 0x24
	// Line 272, Address: 0x1d57ac, Func Offset: 0x2c
	// Line 273, Address: 0x1d57b8, Func Offset: 0x38
	// Func End, Address: 0x1d57cc, Func Offset: 0x4c
}

// xParGroupSetActive__FP9xParGroupUi
// Start address: 0x1d57d0
void xParGroupSetActive(xParGroup* ps, uint32 isActive)
{
	// Line 213, Address: 0x1d57d0, Func Offset: 0
	// Func End, Address: 0x1d57d8, Func Offset: 0x8
}

// xParGroupUnregister__FP9xParGroup
// Start address: 0x1d57e0
void xParGroupUnregister(xParGroup* ps)
{
	uint8 i;
	// Line 155, Address: 0x1d57e8, Func Offset: 0x8
	// Line 157, Address: 0x1d57f4, Func Offset: 0x14
	// Line 159, Address: 0x1d5800, Func Offset: 0x20
	// Line 161, Address: 0x1d5810, Func Offset: 0x30
	// Line 163, Address: 0x1d581c, Func Offset: 0x3c
	// Line 165, Address: 0x1d5830, Func Offset: 0x50
	// Func End, Address: 0x1d5838, Func Offset: 0x58
}

// xParGroupRegister__FP9xParGroup
// Start address: 0x1d5840
void xParGroupRegister(xParGroup* ps)
{
	uint8 i;
	// Line 124, Address: 0x1d5840, Func Offset: 0
	// Line 125, Address: 0x1d5858, Func Offset: 0x18
	// Line 133, Address: 0x1d58d4, Func Offset: 0x94
	// Line 135, Address: 0x1d58e0, Func Offset: 0xa0
	// Line 137, Address: 0x1d58ec, Func Offset: 0xac
	// Line 139, Address: 0x1d58fc, Func Offset: 0xbc
	// Line 141, Address: 0x1d5908, Func Offset: 0xc8
	// Line 144, Address: 0x1d5920, Func Offset: 0xe0
	// Func End, Address: 0x1d5928, Func Offset: 0xe8
}

// xParGroupSetPriority__FP9xParGroupUc
// Start address: 0x1d5930
void xParGroupSetPriority(xParGroup* ps, uint8 val)
{
	// Line 117, Address: 0x1d5930, Func Offset: 0
	// Func End, Address: 0x1d5938, Func Offset: 0x8
}

// xParGroupSetVisibility__FP9xParGroupi
// Start address: 0x1d5940
void xParGroupSetVisibility(xParGroup* ps, int32 vis)
{
	// Line 110, Address: 0x1d5940, Func Offset: 0
	// Func End, Address: 0x1d5948, Func Offset: 0x8
}

// xParGroupSetStealing__FP9xParGroupi
// Start address: 0x1d5950
void xParGroupSetStealing(xParGroup* ps, int32 stealing)
{
	// Line 95, Address: 0x1d5950, Func Offset: 0
	// Line 97, Address: 0x1d5958, Func Offset: 0x8
	// Line 98, Address: 0x1d5960, Func Offset: 0x10
	// Line 101, Address: 0x1d5968, Func Offset: 0x18
	// Line 103, Address: 0x1d597c, Func Offset: 0x2c
	// Func End, Address: 0x1d5984, Func Offset: 0x34
}

// xParGroupSetBack2Life__FP9xParGroupi
// Start address: 0x1d5990
void xParGroupSetBack2Life(xParGroup* ps, int32 b2l)
{
	// Line 81, Address: 0x1d5990, Func Offset: 0
	// Line 83, Address: 0x1d5998, Func Offset: 0x8
	// Line 84, Address: 0x1d59a8, Func Offset: 0x18
	// Line 87, Address: 0x1d59b0, Func Offset: 0x20
	// Line 89, Address: 0x1d59bc, Func Offset: 0x2c
	// Func End, Address: 0x1d59c4, Func Offset: 0x34
}

// xParGroupSetAging__FP9xParGroupi
// Start address: 0x1d59d0
void xParGroupSetAging(xParGroup* ps, int32 age)
{
	// Line 67, Address: 0x1d59d0, Func Offset: 0
	// Line 69, Address: 0x1d59d8, Func Offset: 0x8
	// Line 70, Address: 0x1d59e8, Func Offset: 0x18
	// Line 73, Address: 0x1d59f0, Func Offset: 0x20
	// Line 75, Address: 0x1d59fc, Func Offset: 0x2c
	// Func End, Address: 0x1d5a04, Func Offset: 0x34
}

// xParGroupInit__FP9xParGroup
// Start address: 0x1d5a10
void xParGroupInit(xParGroup* ps)
{
	// Line 33, Address: 0x1d5a10, Func Offset: 0
	// Line 34, Address: 0x1d5a14, Func Offset: 0x4
	// Line 35, Address: 0x1d5a18, Func Offset: 0x8
	// Line 36, Address: 0x1d5a1c, Func Offset: 0xc
	// Line 37, Address: 0x1d5a20, Func Offset: 0x10
	// Line 39, Address: 0x1d5a24, Func Offset: 0x14
	// Line 40, Address: 0x1d5a28, Func Offset: 0x18
	// Line 41, Address: 0x1d5a30, Func Offset: 0x20
	// Line 42, Address: 0x1d5a34, Func Offset: 0x24
	// Line 43, Address: 0x1d5a38, Func Offset: 0x28
	// Line 44, Address: 0x1d5a3c, Func Offset: 0x2c
	// Line 47, Address: 0x1d5a40, Func Offset: 0x30
	// Line 49, Address: 0x1d5a4c, Func Offset: 0x3c
	// Line 50, Address: 0x1d5a54, Func Offset: 0x44
	// Func End, Address: 0x1d5a5c, Func Offset: 0x4c
}

