typedef struct xQCData;
typedef struct _xMat4x3;
typedef struct _xBox;
typedef struct _xBBox;
typedef struct _xRay3;
typedef struct _xBound;
typedef struct _xVec3;
typedef struct _xLine3;
typedef struct _xSphere;
typedef struct _xCylinder;


typedef uint8 type[3];

struct xQCData
{
	uint32 xmask;
	uint32 ymask;
	uint32 zmask;
};

struct _xMat4x3
{
	_xVec3 right;
	int32 flags;
	_xVec3 up;
	uint32 pad1;
	_xVec3 at;
	uint32 pad2;
	_xVec3 pos;
	uint32 pad3;
};

struct _xBox
{
	_xVec3 upper;
	_xVec3 lower;
};

struct _xBBox
{
	_xVec3 center;
	_xBox box;
};

struct _xRay3
{
	_xVec3 origin;
	_xVec3 dir;
	float32 min_t;
	float32 max_t;
	int32 flags;
};

struct _xBound
{
	uint8 type;
	uint8 pad[3];
	union
	{
		_xSphere sph;
		_xBBox box;
		_xCylinder cyl;
	};
	_xMat4x3* mat;
	xQCData qcd;
};

struct _xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct _xLine3
{
	_xVec3 p1;
	_xVec3 p2;
};

struct _xSphere
{
	_xVec3 center;
	float32 r;
};

struct _xCylinder
{
	_xVec3 center;
	float32 r;
	float32 h;
};

float32 world_xmin;
float32 world_ymin;
float32 world_zmin;
float32 world_xmax;
float32 world_ymax;
float32 world_zmax;
float32 world_xsz;
float32 world_ysz;
float32 world_zsz;
float32 block_xsz;
float32 block_ysz;
float32 block_zsz;
float32 one_block_xsz;
float32 one_block_ysz;
float32 one_block_zsz;
float32 lcl_world_xsz;
float32 lcl_world_ysz;
float32 lcl_world_zsz;
float32 ucl_world_xsz;
float32 ucl_world_ysz;
float32 ucl_world_zsz;

void xQuickCullForRay(xQCData* q, _xRay3* r);
void xQuickCullCellMerge(xQCData* o, xQCData* a, xQCData* b);
void xQuickCullCellForVec(xQCData* c, _xVec3* v);
void xQuickCullForBound(xQCData* q, _xBound* b);
int32 xQuickCullIsects(xQCData* a, xQCData* b);
void xQuickCullInit(_xBox* box);
void xQuickCullInit(float32 xmin, float32 ymin, float32 zmin, float32 xmax, float32 ymax, float32 zmax);

// xQuickCullForRay__FP7xQCDataPC6_xRay3
// Start address: 0x1d2300
void xQuickCullForRay(xQCData* q, _xRay3* r)
{
	xQCData b;
	xQCData a;
	float32 len;
	_xLine3 ln;
	// Line 458, Address: 0x1d2300, Func Offset: 0
	// Line 463, Address: 0x1d2310, Func Offset: 0x10
	// Line 466, Address: 0x1d2400, Func Offset: 0x100
	// Line 463, Address: 0x1d2408, Func Offset: 0x108
	// Line 466, Address: 0x1d242c, Func Offset: 0x12c
	// Line 467, Address: 0x1d2434, Func Offset: 0x134
	// Line 468, Address: 0x1d2440, Func Offset: 0x140
	// Line 469, Address: 0x1d2450, Func Offset: 0x150
	// Func End, Address: 0x1d2464, Func Offset: 0x164
}

// xQuickCullCellMerge__FP7xQCDataPC7xQCDataPC7xQCData
// Start address: 0x1d2470
void xQuickCullCellMerge(xQCData* o, xQCData* a, xQCData* b)
{
	// Line 332, Address: 0x1d2470, Func Offset: 0
	// Line 333, Address: 0x1d2474, Func Offset: 0x4
	// Line 334, Address: 0x1d2478, Func Offset: 0x8
	// Line 335, Address: 0x1d247c, Func Offset: 0xc
	// Line 336, Address: 0x1d2480, Func Offset: 0x10
	// Line 337, Address: 0x1d2484, Func Offset: 0x14
	// Line 338, Address: 0x1d2488, Func Offset: 0x18
	// Line 339, Address: 0x1d248c, Func Offset: 0x1c
	// Line 340, Address: 0x1d2490, Func Offset: 0x20
	// Line 341, Address: 0x1d2494, Func Offset: 0x24
	// Line 342, Address: 0x1d2498, Func Offset: 0x28
	// Line 343, Address: 0x1d249c, Func Offset: 0x2c
	// Line 344, Address: 0x1d24a0, Func Offset: 0x30
	// Line 345, Address: 0x1d24a4, Func Offset: 0x34
	// Line 346, Address: 0x1d24a8, Func Offset: 0x38
	// Line 347, Address: 0x1d24ac, Func Offset: 0x3c
	// Line 348, Address: 0x1d24b0, Func Offset: 0x40
	// Line 349, Address: 0x1d24b4, Func Offset: 0x44
	// Line 350, Address: 0x1d24b8, Func Offset: 0x48
	// Line 351, Address: 0x1d24bc, Func Offset: 0x4c
	// Line 352, Address: 0x1d24c0, Func Offset: 0x50
	// Line 353, Address: 0x1d24c4, Func Offset: 0x54
	// Line 354, Address: 0x1d24c8, Func Offset: 0x58
	// Line 355, Address: 0x1d24cc, Func Offset: 0x5c
	// Line 356, Address: 0x1d24d0, Func Offset: 0x60
	// Line 357, Address: 0x1d24d4, Func Offset: 0x64
	// Line 358, Address: 0x1d24d8, Func Offset: 0x68
	// Line 359, Address: 0x1d24dc, Func Offset: 0x6c
	// Line 360, Address: 0x1d24e0, Func Offset: 0x70
	// Line 361, Address: 0x1d24e4, Func Offset: 0x74
	// Line 362, Address: 0x1d24e8, Func Offset: 0x78
	// Line 363, Address: 0x1d24ec, Func Offset: 0x7c
	// Line 364, Address: 0x1d24f0, Func Offset: 0x80
	// Line 365, Address: 0x1d24f4, Func Offset: 0x84
	// Line 366, Address: 0x1d24f8, Func Offset: 0x88
	// Line 367, Address: 0x1d24fc, Func Offset: 0x8c
	// Line 368, Address: 0x1d2500, Func Offset: 0x90
	// Line 442, Address: 0x1d2504, Func Offset: 0x94
	// Func End, Address: 0x1d250c, Func Offset: 0x9c
}

// xQuickCullCellForVec__FP7xQCDataPC6_xVec3
// Start address: 0x1d2510
void xQuickCullCellForVec(xQCData* c, _xVec3* v)
{
	// Line 177, Address: 0x1d2510, Func Offset: 0
	// Line 178, Address: 0x1d252c, Func Offset: 0x1c
	// Line 179, Address: 0x1d2530, Func Offset: 0x20
	// Line 180, Address: 0x1d2534, Func Offset: 0x24
	// Line 181, Address: 0x1d2538, Func Offset: 0x28
	// Line 182, Address: 0x1d253c, Func Offset: 0x2c
	// Line 183, Address: 0x1d2540, Func Offset: 0x30
	// Line 184, Address: 0x1d2544, Func Offset: 0x34
	// Line 185, Address: 0x1d2548, Func Offset: 0x38
	// Line 186, Address: 0x1d254c, Func Offset: 0x3c
	// Line 192, Address: 0x1d2550, Func Offset: 0x40
	// Line 193, Address: 0x1d2564, Func Offset: 0x54
	// Line 194, Address: 0x1d2568, Func Offset: 0x58
	// Line 195, Address: 0x1d256c, Func Offset: 0x5c
	// Line 196, Address: 0x1d2570, Func Offset: 0x60
	// Line 197, Address: 0x1d2574, Func Offset: 0x64
	// Line 198, Address: 0x1d2578, Func Offset: 0x68
	// Line 199, Address: 0x1d257c, Func Offset: 0x6c
	// Line 200, Address: 0x1d2580, Func Offset: 0x70
	// Line 201, Address: 0x1d2584, Func Offset: 0x74
	// Line 202, Address: 0x1d2588, Func Offset: 0x78
	// Line 203, Address: 0x1d258c, Func Offset: 0x7c
	// Line 204, Address: 0x1d2590, Func Offset: 0x80
	// Line 205, Address: 0x1d2594, Func Offset: 0x84
	// Line 206, Address: 0x1d2598, Func Offset: 0x88
	// Line 207, Address: 0x1d259c, Func Offset: 0x8c
	// Line 318, Address: 0x1d25a0, Func Offset: 0x90
	// Func End, Address: 0x1d25a8, Func Offset: 0x98
}

// xQuickCullForBound__FP7xQCDataPC7_xBound
// Start address: 0x1d25b0
void xQuickCullForBound(xQCData* q, _xBound* b)
{
	// Line 156, Address: 0x1d25b0, Func Offset: 0
	// Line 157, Address: 0x1d25c0, Func Offset: 0x10
	// Line 158, Address: 0x1d25d0, Func Offset: 0x20
	// Line 159, Address: 0x1d264c, Func Offset: 0x9c
	// Line 160, Address: 0x1d2660, Func Offset: 0xb0
	// Line 163, Address: 0x1d2688, Func Offset: 0xd8
	// Line 164, Address: 0x1d2698, Func Offset: 0xe8
	// Line 166, Address: 0x1d2714, Func Offset: 0x164
	// Func End, Address: 0x1d2724, Func Offset: 0x174
}

// xQuickCullIsects__FPC7xQCDataPC7xQCData
// Start address: 0x1d2730
int32 xQuickCullIsects(xQCData* a, xQCData* b)
{
	// Line 152, Address: 0x1d2730, Func Offset: 0
	// Line 153, Address: 0x1d2758, Func Offset: 0x28
	// Func End, Address: 0x1d2760, Func Offset: 0x30
}

// xQuickCullInit__FPC5_xBox
// Start address: 0x1d2760
void xQuickCullInit(_xBox* box)
{
	// Line 118, Address: 0x1d2760, Func Offset: 0
	// Func End, Address: 0x1d277c, Func Offset: 0x1c
}

// xQuickCullInit__Fffffff
// Start address: 0x1d2780
void xQuickCullInit(float32 xmin, float32 ymin, float32 zmin, float32 xmax, float32 ymax, float32 zmax)
{
	// Line 81, Address: 0x1d2780, Func Offset: 0
	// Line 75, Address: 0x1d2784, Func Offset: 0x4
	// Line 76, Address: 0x1d2788, Func Offset: 0x8
	// Line 77, Address: 0x1d278c, Func Offset: 0xc
	// Line 78, Address: 0x1d2790, Func Offset: 0x10
	// Line 79, Address: 0x1d2794, Func Offset: 0x14
	// Line 80, Address: 0x1d2798, Func Offset: 0x18
	// Line 81, Address: 0x1d279c, Func Offset: 0x1c
	// Line 82, Address: 0x1d27a4, Func Offset: 0x24
	// Line 83, Address: 0x1d27ac, Func Offset: 0x2c
	// Line 82, Address: 0x1d27b0, Func Offset: 0x30
	// Line 83, Address: 0x1d27b4, Func Offset: 0x34
	// Line 85, Address: 0x1d27bc, Func Offset: 0x3c
	// Line 89, Address: 0x1d2800, Func Offset: 0x80
	// Line 96, Address: 0x1d2810, Func Offset: 0x90
	// Line 104, Address: 0x1d2814, Func Offset: 0x94
	// Line 105, Address: 0x1d281c, Func Offset: 0x9c
	// Line 106, Address: 0x1d2820, Func Offset: 0xa0
	// Line 107, Address: 0x1d2824, Func Offset: 0xa4
	// Line 104, Address: 0x1d2828, Func Offset: 0xa8
	// Line 96, Address: 0x1d2830, Func Offset: 0xb0
	// Line 97, Address: 0x1d2838, Func Offset: 0xb8
	// Line 99, Address: 0x1d283c, Func Offset: 0xbc
	// Line 97, Address: 0x1d2840, Func Offset: 0xc0
	// Line 98, Address: 0x1d2848, Func Offset: 0xc8
	// Line 100, Address: 0x1d284c, Func Offset: 0xcc
	// Line 105, Address: 0x1d2850, Func Offset: 0xd0
	// Line 100, Address: 0x1d2854, Func Offset: 0xd4
	// Line 99, Address: 0x1d2858, Func Offset: 0xd8
	// Line 98, Address: 0x1d285c, Func Offset: 0xdc
	// Line 101, Address: 0x1d2864, Func Offset: 0xe4
	// Line 104, Address: 0x1d286c, Func Offset: 0xec
	// Line 105, Address: 0x1d2870, Func Offset: 0xf0
	// Line 106, Address: 0x1d2874, Func Offset: 0xf4
	// Line 107, Address: 0x1d287c, Func Offset: 0xfc
	// Line 108, Address: 0x1d2890, Func Offset: 0x110
	// Line 109, Address: 0x1d289c, Func Offset: 0x11c
	// Line 113, Address: 0x1d28ac, Func Offset: 0x12c
	// Func End, Address: 0x1d28b4, Func Offset: 0x134
}

