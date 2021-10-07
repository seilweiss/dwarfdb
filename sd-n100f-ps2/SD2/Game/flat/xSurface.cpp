typedef struct xSurface;
typedef struct xBase;
typedef struct xSerial;
typedef struct p2LinkAsset;
typedef struct _xCollis;
typedef struct _iCollis;
typedef struct _xVec3;
typedef struct _xEnt;

typedef int32(*type_1)(xBase*, xBase*, uint32, float32*, xBase*);

typedef float32 type_0[4];
typedef uint8 type_2[3];

struct xSurface : xBase
{
	uint32 idx;
	uint32 type;
	union
	{
		uint32 mat_idx;
		_xEnt* ent;
		void* obj;
	};
	float32 friction;
	uint8 state;
	uint8 pad[3];
	void* moprops;
};

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	p2LinkAsset* link;
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
};

struct xSerial
{
};

struct p2LinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	float32 param[4];
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
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

struct _iCollis
{
	int32 unknown;
};

struct _xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct _xEnt
{
};

xSurface* surfs;
uint16 nsurfs;
uint32 gActiveHeap;

xSurface* xSurfaceGetByIdx(uint16 n);
uint16 xSurfaceGetNumSurfaces();
void xSurfaceReset();
void xSurfaceLoad(xSurface* ent, xSerial* s);
void xSurfaceSave(xSurface* ent, xSerial* s);
void xSurfaceExit();
void xSurfaceInit(uint16 num_surfs);

// xSurfaceGetByIdx__FUs
// Start address: 0x1a3e50
xSurface* xSurfaceGetByIdx(uint16 n)
{
	// Line 124, Address: 0x1a3e50, Func Offset: 0
	// Line 129, Address: 0x1a3e70, Func Offset: 0x20
	// Func End, Address: 0x1a3e78, Func Offset: 0x28
}

// xSurfaceGetNumSurfaces__Fv
// Start address: 0x1a3e80
uint16 xSurfaceGetNumSurfaces()
{
	// Line 106, Address: 0x1a3e80, Func Offset: 0
	// Func End, Address: 0x1a3e88, Func Offset: 0x8
}

// xSurfaceReset__FP8xSurface
// Start address: 0x1a3e90
void xSurfaceReset()
{
	// Line 101, Address: 0x1a3e90, Func Offset: 0
	// Func End, Address: 0x1a3e98, Func Offset: 0x8
}

// xSurfaceLoad__FP8xSurfaceP7xSerial
// Start address: 0x1a3ea0
void xSurfaceLoad(xSurface* ent, xSerial* s)
{
	// Line 91, Address: 0x1a3ea0, Func Offset: 0
	// Func End, Address: 0x1a3ea8, Func Offset: 0x8
}

// xSurfaceSave__FP8xSurfaceP7xSerial
// Start address: 0x1a3eb0
void xSurfaceSave(xSurface* ent, xSerial* s)
{
	// Line 72, Address: 0x1a3eb0, Func Offset: 0
	// Func End, Address: 0x1a3eb8, Func Offset: 0x8
}

// xSurfaceExit__Fv
// Start address: 0x1a3ec0
void xSurfaceExit()
{
	// Line 59, Address: 0x1a3ec0, Func Offset: 0
	// Func End, Address: 0x1a3ec8, Func Offset: 0x8
}

// xSurfaceInit__FUs
// Start address: 0x1a3ed0
void xSurfaceInit(uint16 num_surfs)
{
	uint16 i;
	// Line 24, Address: 0x1a3ed0, Func Offset: 0
	// Line 25, Address: 0x1a3edc, Func Offset: 0xc
	// Line 26, Address: 0x1a3ee0, Func Offset: 0x10
	// Line 27, Address: 0x1a3ee8, Func Offset: 0x18
	// Line 30, Address: 0x1a3f08, Func Offset: 0x38
	// Line 31, Address: 0x1a3f14, Func Offset: 0x44
	// Line 32, Address: 0x1a3f1c, Func Offset: 0x4c
	// Line 31, Address: 0x1a3f24, Func Offset: 0x54
	// Line 32, Address: 0x1a3f30, Func Offset: 0x60
	// Line 33, Address: 0x1a3f44, Func Offset: 0x74
	// Line 34, Address: 0x1a3f4c, Func Offset: 0x7c
	// Line 36, Address: 0x1a3f50, Func Offset: 0x80
	// Func End, Address: 0x1a3f60, Func Offset: 0x90
}

