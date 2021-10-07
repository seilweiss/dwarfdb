typedef struct _xVec3;
typedef struct _xMat3x3;
typedef struct RwSky2DVertexAlignmentOverlay;
typedef struct _xMat4x3;
typedef struct RwRGBAReal;
typedef struct _xVec2;
typedef struct iColor_tag;
typedef struct _xBox;
typedef struct RwV3d;
typedef struct RwSky2DVertex;
typedef struct _xSphere;
typedef struct RwSky2DVertexFields;


typedef uint32 type_0[2];
typedef RwV3d type_1[2];
typedef uint32 type_2[4096];
typedef <unknown fundamental type (0xa510)> type_3[4];
typedef RwSky2DVertex type_4[2];
typedef _xVec3 type_5[8];
typedef _xVec3 type_6[8];
typedef uint32 type_7[2];
typedef RwV3d type_8[8];
typedef RwV3d type_9[2];
typedef uint32 type_10[2];
typedef uint32 type_11[2][12];

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

struct RwSky2DVertexAlignmentOverlay
{
	union
	{
		RwSky2DVertexFields els;
		<unknown fundamental type (0xa510)> qWords[4];
	};
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

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct _xVec2
{
	float32 x;
	float32 y;
};

struct iColor_tag
{
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 a;
};

struct _xBox
{
	_xVec3 upper;
	_xVec3 lower;
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct RwSky2DVertex
{
	RwSky2DVertexAlignmentOverlay u;
};

struct _xSphere
{
	_xVec3 center;
	float32 r;
};

struct RwSky2DVertexFields
{
	RwV3d scrVertex;
	float32 camVertex_z;
	float32 u;
	float32 v;
	float32 recipZ;
	float32 pad1;
	RwRGBAReal color;
	RwV3d objNormal;
	float32 pad2;
};

iColor_tag sgDrawColor;
float32 sph2_yaw;
_xVec3 g_O3;
uint32 ourGlobals[4096];

void xDrawLine(_xVec3* a, _xVec3* b);
void xDrawSetColor(uint8 r, uint8 g, uint8 b, uint8 a);
void xDrawSetColor(iColor_tag color);
void xDrawEnd();
void xDrawBegin();

// xDrawLine__FPC6_xVec3PC6_xVec3
// Start address: 0x13cbb0
void xDrawLine(_xVec3* a, _xVec3* b)
{
	RwV3d verts[2];
	uint32 indices[2];
	// Line 73, Address: 0x13cbb0, Func Offset: 0
	// Line 77, Address: 0x13cbb8, Func Offset: 0x8
	// Line 78, Address: 0x13cbbc, Func Offset: 0xc
	// Line 80, Address: 0x13cbc4, Func Offset: 0x14
	// Line 83, Address: 0x13cbc8, Func Offset: 0x18
	// Line 80, Address: 0x13cbd8, Func Offset: 0x28
	// Line 81, Address: 0x13cbec, Func Offset: 0x3c
	// Line 83, Address: 0x13cbf0, Func Offset: 0x40
	// Line 81, Address: 0x13cbf4, Func Offset: 0x44
	// Line 83, Address: 0x13cc08, Func Offset: 0x58
	// Line 84, Address: 0x13cc10, Func Offset: 0x60
	// Func End, Address: 0x13cc1c, Func Offset: 0x6c
}

// xDrawSetColor__FUcUcUcUc
// Start address: 0x13cc20
void xDrawSetColor(uint8 r, uint8 g, uint8 b, uint8 a)
{
	// Line 68, Address: 0x13cc20, Func Offset: 0
	// Line 69, Address: 0x13cc24, Func Offset: 0x4
	// Line 70, Address: 0x13cc68, Func Offset: 0x48
	// Func End, Address: 0x13cc70, Func Offset: 0x50
}

// xDrawSetColor__F10iColor_tag
// Start address: 0x13cc70
void xDrawSetColor(iColor_tag color)
{
	// Line 63, Address: 0x13cc70, Func Offset: 0
	// Line 64, Address: 0x13cc78, Func Offset: 0x8
	// Line 65, Address: 0x13cc94, Func Offset: 0x24
	// Func End, Address: 0x13cc9c, Func Offset: 0x2c
}

// xDrawEnd__Fv
// Start address: 0x13cca0
void xDrawEnd()
{
	// Line 59, Address: 0x13cca0, Func Offset: 0
	// Func End, Address: 0x13cca8, Func Offset: 0x8
}

// xDrawBegin__Fv
// Start address: 0x13ccb0
void xDrawBegin()
{
	// Line 55, Address: 0x13ccb0, Func Offset: 0
	// Func End, Address: 0x13ccb8, Func Offset: 0x8
}

