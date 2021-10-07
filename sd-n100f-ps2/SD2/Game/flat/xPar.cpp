typedef struct xPar;
typedef struct _xVec3;
typedef struct zParEmitterAsset;


typedef uint8 type_0[4];
typedef xPar type_1[2000];
typedef uint8 type_2[2];
typedef uint8 type_3[3];
typedef float32 type_4[4];

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

struct _xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct zParEmitterAsset
{
};

xPar gParPool[2000];
xPar* gParDead;

void xParInit(xPar* p);
void xParFree(xPar* par);
xPar* xParAlloc();
void xParMemInit();

// xParInit__FP4xPar
// Start address: 0x1af130
void xParInit(xPar* p)
{
	// Line 129, Address: 0x1af130, Func Offset: 0
	// Line 130, Address: 0x1af134, Func Offset: 0x4
	// Line 131, Address: 0x1af138, Func Offset: 0x8
	// Line 133, Address: 0x1af13c, Func Offset: 0xc
	// Line 134, Address: 0x1af140, Func Offset: 0x10
	// Line 135, Address: 0x1af144, Func Offset: 0x14
	// Line 137, Address: 0x1af148, Func Offset: 0x18
	// Line 138, Address: 0x1af14c, Func Offset: 0x1c
	// Line 140, Address: 0x1af150, Func Offset: 0x20
	// Line 141, Address: 0x1af154, Func Offset: 0x24
	// Line 143, Address: 0x1af158, Func Offset: 0x28
	// Line 144, Address: 0x1af15c, Func Offset: 0x2c
	// Line 145, Address: 0x1af160, Func Offset: 0x30
	// Line 146, Address: 0x1af164, Func Offset: 0x34
	// Line 148, Address: 0x1af168, Func Offset: 0x38
	// Line 149, Address: 0x1af170, Func Offset: 0x40
	// Line 150, Address: 0x1af174, Func Offset: 0x44
	// Line 151, Address: 0x1af178, Func Offset: 0x48
	// Line 153, Address: 0x1af17c, Func Offset: 0x4c
	// Line 158, Address: 0x1af180, Func Offset: 0x50
	// Line 161, Address: 0x1af18c, Func Offset: 0x5c
	// Line 162, Address: 0x1af190, Func Offset: 0x60
	// Line 163, Address: 0x1af194, Func Offset: 0x64
	// Line 166, Address: 0x1af198, Func Offset: 0x68
	// Func End, Address: 0x1af1a0, Func Offset: 0x70
}

// xParFree__FP4xPar
// Start address: 0x1af1a0
void xParFree(xPar* par)
{
	// Line 98, Address: 0x1af1a0, Func Offset: 0
	// Line 99, Address: 0x1af1ac, Func Offset: 0xc
	// Line 101, Address: 0x1af1b4, Func Offset: 0x14
	// Line 102, Address: 0x1af1c0, Func Offset: 0x20
	// Line 105, Address: 0x1af1c8, Func Offset: 0x28
	// Line 107, Address: 0x1af1d8, Func Offset: 0x38
	// Line 109, Address: 0x1af1dc, Func Offset: 0x3c
	// Line 110, Address: 0x1af1e4, Func Offset: 0x44
	// Line 114, Address: 0x1af1e8, Func Offset: 0x48
	// Func End, Address: 0x1af1f0, Func Offset: 0x50
}

// xParAlloc__Fv
// Start address: 0x1af1f0
xPar* xParAlloc()
{
	// Line 64, Address: 0x1af1f0, Func Offset: 0
	// Line 66, Address: 0x1af200, Func Offset: 0x10
	// Line 73, Address: 0x1af208, Func Offset: 0x18
	// Line 74, Address: 0x1af214, Func Offset: 0x24
	// Line 76, Address: 0x1af218, Func Offset: 0x28
	// Line 79, Address: 0x1af220, Func Offset: 0x30
	// Line 80, Address: 0x1af224, Func Offset: 0x34
	// Line 84, Address: 0x1af228, Func Offset: 0x38
	// Func End, Address: 0x1af230, Func Offset: 0x40
}

// xParMemInit__Fv
// Start address: 0x1af230
void xParMemInit()
{
	int32 i;
	// Line 32, Address: 0x1af234, Func Offset: 0x4
	// Line 36, Address: 0x1af240, Func Offset: 0x10
	// Line 37, Address: 0x1af244, Func Offset: 0x14
	// Line 39, Address: 0x1af248, Func Offset: 0x18
	// Line 41, Address: 0x1af254, Func Offset: 0x24
	// Line 42, Address: 0x1af258, Func Offset: 0x28
	// Line 45, Address: 0x1af260, Func Offset: 0x30
	// Line 44, Address: 0x1af264, Func Offset: 0x34
	// Line 45, Address: 0x1af268, Func Offset: 0x38
	// Line 46, Address: 0x1af274, Func Offset: 0x44
	// Func End, Address: 0x1af27c, Func Offset: 0x4c
}

