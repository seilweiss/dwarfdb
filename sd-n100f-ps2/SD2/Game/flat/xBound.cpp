typedef struct _xRay3;
typedef struct _xBound;
typedef struct _xIsect;
typedef struct _xCollis;
typedef struct xQCData;
typedef struct _xMat4x3;
typedef struct _xBBox;
typedef struct xModelInstance;
typedef struct _xVec3;
typedef struct _xMat3x3;
typedef struct _iCollis;
typedef struct _xSphere;
typedef struct _xCylinder;
typedef struct _xBox;


typedef uint8 type[3];

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

struct _xIsect
{
	uint32 flags;
	float32 penned;
	float32 contained;
	float32 lapped;
	_xVec3 point;
	_xVec3 norm;
	float32 dist;
};

struct _xCollis
{
	uint32 flags;
	uint32 oid;
	void* optr;
	float32 dist;
	_xVec3 norm;
	_xVec3 tohit;
	_xVec3 depen;
	_xVec3 hdng;
	_iCollis ixtra;
};

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

struct _xBBox
{
	_xVec3 center;
	_xBox box;
};

struct xModelInstance
{
};

struct _xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct _xMat3x3
{
	_xVec3 right;
	int32 flags;
	_xVec3 up;
	uint32 pad1;
	_xVec3 at;
	uint32 pad2;
};

struct _iCollis
{
	int32 unknown;
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

struct _xBox
{
	_xVec3 upper;
	_xVec3 lower;
};


void xVecHitsBound(_xVec3* v, _xBound* b, _xCollis* c);
void xRayHitsBound(_xRay3* r, xQCData* q, _xBound* b, _xCollis* c);
void xRayHitsBound(_xRay3* r, _xBound* b, _xCollis* c);
void xBoundHitsModel(_xBound* b, xModelInstance* m, _xCollis* colls, uint8 ncolls, float32 sth);
void xBoundHitsBound(_xBound* a, _xBound* b, _xCollis* c);
void xBoundUpdate(_xBound* b);
_xVec3* xBoundCenter(_xBound* b);

// xVecHitsBound__FPC6_xVec3PC7_xBoundP8_xCollis
// Start address: 0x1a71f0
void xVecHitsBound(_xVec3* v, _xBound* b, _xCollis* c)
{
	_xVec3 lv;
	_xIsect isect;
	// Line 184, Address: 0x1a71f0, Func Offset: 0
	// Line 191, Address: 0x1a7204, Func Offset: 0x14
	// Line 192, Address: 0x1a7218, Func Offset: 0x28
	// Line 193, Address: 0x1a7228, Func Offset: 0x38
	// Line 195, Address: 0x1a723c, Func Offset: 0x4c
	// Line 196, Address: 0x1a727c, Func Offset: 0x8c
	// Line 197, Address: 0x1a728c, Func Offset: 0x9c
	// Line 198, Address: 0x1a729c, Func Offset: 0xac
	// Line 204, Address: 0x1a72a8, Func Offset: 0xb8
	// Line 205, Address: 0x1a72c4, Func Offset: 0xd4
	// Line 206, Address: 0x1a72cc, Func Offset: 0xdc
	// Line 207, Address: 0x1a72d4, Func Offset: 0xe4
	// Line 209, Address: 0x1a72e4, Func Offset: 0xf4
	// Func End, Address: 0x1a72f8, Func Offset: 0x108
}

// xRayHitsBound__FPC6_xRay3PC7xQCDataPC7_xBoundP8_xCollis
// Start address: 0x1a7300
void xRayHitsBound(_xRay3* r, xQCData* q, _xBound* b, _xCollis* c)
{
	// Line 175, Address: 0x1a7300, Func Offset: 0
	// Line 176, Address: 0x1a731c, Func Offset: 0x1c
	// Line 177, Address: 0x1a7334, Func Offset: 0x34
	// Line 178, Address: 0x1a7340, Func Offset: 0x40
	// Line 180, Address: 0x1a7348, Func Offset: 0x48
	// Line 181, Address: 0x1a7354, Func Offset: 0x54
	// Func End, Address: 0x1a736c, Func Offset: 0x6c
}

// xRayHitsBound__FPC6_xRay3PC7_xBoundP8_xCollis
// Start address: 0x1a7370
void xRayHitsBound(_xRay3* r, _xBound* b, _xCollis* c)
{
	float32 one_ms;
	_xMat3x3* dmp;
	_xMat3x3 mn;
	_xRay3 lr;
	_xIsect isect;
	// Line 118, Address: 0x1a7370, Func Offset: 0
	// Line 125, Address: 0x1a7390, Func Offset: 0x20
	// Line 126, Address: 0x1a73a4, Func Offset: 0x34
	// Line 128, Address: 0x1a73b4, Func Offset: 0x44
	// Line 134, Address: 0x1a73c8, Func Offset: 0x58
	// Line 137, Address: 0x1a73cc, Func Offset: 0x5c
	// Line 134, Address: 0x1a73d4, Func Offset: 0x64
	// Line 137, Address: 0x1a73f0, Func Offset: 0x80
	// Line 138, Address: 0x1a7418, Func Offset: 0xa8
	// Line 139, Address: 0x1a7428, Func Offset: 0xb8
	// Line 138, Address: 0x1a742c, Func Offset: 0xbc
	// Line 139, Address: 0x1a7430, Func Offset: 0xc0
	// Line 140, Address: 0x1a7438, Func Offset: 0xc8
	// Line 141, Address: 0x1a7444, Func Offset: 0xd4
	// Line 143, Address: 0x1a7450, Func Offset: 0xe0
	// Line 144, Address: 0x1a7458, Func Offset: 0xe8
	// Line 145, Address: 0x1a7460, Func Offset: 0xf0
	// Line 146, Address: 0x1a7468, Func Offset: 0xf8
	// Line 148, Address: 0x1a7470, Func Offset: 0x100
	// Line 149, Address: 0x1a74b0, Func Offset: 0x140
	// Line 150, Address: 0x1a74c0, Func Offset: 0x150
	// Line 151, Address: 0x1a74c4, Func Offset: 0x154
	// Line 153, Address: 0x1a74d8, Func Offset: 0x168
	// Line 154, Address: 0x1a74e8, Func Offset: 0x178
	// Line 162, Address: 0x1a74f4, Func Offset: 0x184
	// Line 163, Address: 0x1a7510, Func Offset: 0x1a0
	// Line 167, Address: 0x1a751c, Func Offset: 0x1ac
	// Line 169, Address: 0x1a7520, Func Offset: 0x1b0
	// Line 170, Address: 0x1a7528, Func Offset: 0x1b8
	// Line 172, Address: 0x1a7538, Func Offset: 0x1c8
	// Func End, Address: 0x1a7558, Func Offset: 0x1e8
}

// xBoundHitsModel__FPC7_xBoundPC14xModelInstanceP8_xCollisUcf
// Start address: 0x1a7560
void xBoundHitsModel(_xBound* b, xModelInstance* m, _xCollis* colls, uint8 ncolls, float32 sth)
{
	// Line 100, Address: 0x1a7560, Func Offset: 0
	// Line 105, Address: 0x1a7568, Func Offset: 0x8
	// Line 107, Address: 0x1a7598, Func Offset: 0x38
	// Line 115, Address: 0x1a75a0, Func Offset: 0x40
	// Func End, Address: 0x1a75ac, Func Offset: 0x4c
}

// xBoundHitsBound__FPC7_xBoundPC7_xBoundP8_xCollis
// Start address: 0x1a75b0
void xBoundHitsBound(_xBound* a, _xBound* b, _xCollis* c)
{
	// Line 56, Address: 0x1a75b0, Func Offset: 0
	// Line 62, Address: 0x1a75d0, Func Offset: 0x20
	// Line 63, Address: 0x1a75e4, Func Offset: 0x34
	// Line 64, Address: 0x1a75f0, Func Offset: 0x40
	// Line 68, Address: 0x1a75f8, Func Offset: 0x48
	// Line 70, Address: 0x1a7628, Func Offset: 0x78
	// Line 72, Address: 0x1a7654, Func Offset: 0xa4
	// Line 73, Address: 0x1a7660, Func Offset: 0xb0
	// Line 75, Address: 0x1a7668, Func Offset: 0xb8
	// Line 76, Address: 0x1a767c, Func Offset: 0xcc
	// Line 78, Address: 0x1a7684, Func Offset: 0xd4
	// Line 92, Address: 0x1a7690, Func Offset: 0xe0
	// Func End, Address: 0x1a76a8, Func Offset: 0xf8
}

// xBoundUpdate__FP7_xBound
// Start address: 0x1a76b0
void xBoundUpdate(_xBound* b)
{
	// Line 37, Address: 0x1a76b0, Func Offset: 0
	// Line 38, Address: 0x1a76c4, Func Offset: 0x14
	// Line 39, Address: 0x1a76d4, Func Offset: 0x24
	// Line 40, Address: 0x1a772c, Func Offset: 0x7c
	// Line 41, Address: 0x1a773c, Func Offset: 0x8c
	// Line 42, Address: 0x1a7748, Func Offset: 0x98
	// Line 41, Address: 0x1a774c, Func Offset: 0x9c
	// Line 42, Address: 0x1a7750, Func Offset: 0xa0
	// Line 41, Address: 0x1a7754, Func Offset: 0xa4
	// Line 42, Address: 0x1a77a0, Func Offset: 0xf0
	// Line 45, Address: 0x1a77dc, Func Offset: 0x12c
	// Line 46, Address: 0x1a77e8, Func Offset: 0x138
	// Line 52, Address: 0x1a77f0, Func Offset: 0x140
	// Func End, Address: 0x1a7804, Func Offset: 0x154
}

// xBoundCenter__FPC7_xBound
// Start address: 0x1a7810
_xVec3* xBoundCenter(_xBound* b)
{
	// Line 22, Address: 0x1a7810, Func Offset: 0
	// Line 23, Address: 0x1a7820, Func Offset: 0x10
	// Line 24, Address: 0x1a7828, Func Offset: 0x18
	// Line 25, Address: 0x1a7830, Func Offset: 0x20
	// Line 26, Address: 0x1a7838, Func Offset: 0x28
	// Line 27, Address: 0x1a7840, Func Offset: 0x30
	// Line 29, Address: 0x1a7848, Func Offset: 0x38
	// Line 34, Address: 0x1a7858, Func Offset: 0x48
	// Func End, Address: 0x1a7860, Func Offset: 0x50
}

