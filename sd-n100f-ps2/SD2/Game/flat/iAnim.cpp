typedef struct RtQuatSlerpCache;
typedef struct RtQuat;
typedef struct _xQuat;
typedef struct _xVec3;
typedef struct RwV3d;


typedef uint8 type[9120];

struct RtQuatSlerpCache
{
	RtQuat raFrom;
	RtQuat raTo;
	float32 omega;
	int32 nearlyZeroOm;
};

struct RtQuat
{
	RwV3d imag;
	float32 real;
};

struct _xQuat
{
	_xVec3 v;
	float32 s;
};

struct _xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

uint8 scratchBuffer[9120];
uint8* giAnimScratch;

void iAnimBlend(float32 BlendFactor, float32 BlendRecip, uint16* BlendTimeOffset, float32* BoneTable, uint32 BoneCount, _xVec3* Tran1, _xQuat* Quat1, _xVec3* Tran2, _xQuat* Quat2, _xVec3* TranDest, _xQuat* QuatDest);
uint32 iAnimBoneCount(void* RawData);
float32 iAnimDuration(void* RawData);
void iAnimEval(void* RawData, float32 time, uint32 flags, _xVec3* tran, _xQuat* quat);
void iAnimInit();

// iAnimBlend__FffPUsPfUiP6_xVec3P6_xQuatP6_xVec3P6_xQuatP6_xVec3P6_xQuat
// Start address: 0x11d040
void iAnimBlend(float32 BlendFactor, float32 BlendRecip, uint16* BlendTimeOffset, float32* BoneTable, uint32 BoneCount, _xVec3* Tran1, _xQuat* Quat1, _xVec3* Tran2, _xQuat* Quat2, _xVec3* TranDest, _xQuat* QuatDest)
{
	float32 z;
	float32 z;
	float32 rSclTo;
	float32 rSclFrom;
	RtQuatSlerpCache qcache;
	float32 lerp;
	float32 baselerp;
	float32 z;
	float32 z;
	float32 rSclTo;
	float32 rSclFrom;
	RtQuatSlerpCache qcache;
	float32 lerp;
	_xVec3* t2;
	RtQuat ident;
	RtQuat* q2;
	uint32 invert;
	uint32 i;
	// Line 134, Address: 0x11d040, Func Offset: 0
	// Line 136, Address: 0x11d078, Func Offset: 0x38
	// Line 135, Address: 0x11d084, Func Offset: 0x44
	// Line 136, Address: 0x11d088, Func Offset: 0x48
	// Line 134, Address: 0x11d08c, Func Offset: 0x4c
	// Line 136, Address: 0x11d090, Func Offset: 0x50
	// Line 140, Address: 0x11d0b0, Func Offset: 0x70
	// Line 141, Address: 0x11d0b8, Func Offset: 0x78
	// Line 144, Address: 0x11d0c0, Func Offset: 0x80
	// Line 146, Address: 0x11d0c8, Func Offset: 0x88
	// Line 145, Address: 0x11d0cc, Func Offset: 0x8c
	// Line 150, Address: 0x11d0d0, Func Offset: 0x90
	// Line 152, Address: 0x11d0e8, Func Offset: 0xa8
	// Line 151, Address: 0x11d0ec, Func Offset: 0xac
	// Line 152, Address: 0x11d0f0, Func Offset: 0xb0
	// Line 155, Address: 0x11d0f8, Func Offset: 0xb8
	// Line 161, Address: 0x11d110, Func Offset: 0xd0
	// Line 162, Address: 0x11d114, Func Offset: 0xd4
	// Line 163, Address: 0x11d134, Func Offset: 0xf4
	// Line 164, Address: 0x11d150, Func Offset: 0x110
	// Line 166, Address: 0x11d168, Func Offset: 0x128
	// Line 167, Address: 0x11d170, Func Offset: 0x130
	// Line 169, Address: 0x11d188, Func Offset: 0x148
	// Line 170, Address: 0x11d198, Func Offset: 0x158
	// Line 172, Address: 0x11d368, Func Offset: 0x328
	// Line 174, Address: 0x11d378, Func Offset: 0x338
	// Line 177, Address: 0x11d388, Func Offset: 0x348
	// Line 178, Address: 0x11d390, Func Offset: 0x350
	// Line 179, Address: 0x11d398, Func Offset: 0x358
	// Line 180, Address: 0x11d3b0, Func Offset: 0x370
	// Line 181, Address: 0x11d3c8, Func Offset: 0x388
	// Line 182, Address: 0x11d3d0, Func Offset: 0x390
	// Line 181, Address: 0x11d3d4, Func Offset: 0x394
	// Line 183, Address: 0x11d3e0, Func Offset: 0x3a0
	// Line 185, Address: 0x11d3f0, Func Offset: 0x3b0
	// Line 188, Address: 0x11d400, Func Offset: 0x3c0
	// Line 196, Address: 0x11d408, Func Offset: 0x3c8
	// Line 197, Address: 0x11d414, Func Offset: 0x3d4
	// Line 198, Address: 0x11d418, Func Offset: 0x3d8
	// Line 199, Address: 0x11d438, Func Offset: 0x3f8
	// Line 200, Address: 0x11d454, Func Offset: 0x414
	// Line 203, Address: 0x11d46c, Func Offset: 0x42c
	// Line 206, Address: 0x11d484, Func Offset: 0x444
	// Line 207, Address: 0x11d490, Func Offset: 0x450
	// Line 208, Address: 0x11d4c8, Func Offset: 0x488
	// Line 209, Address: 0x11d4d4, Func Offset: 0x494
	// Line 210, Address: 0x11d510, Func Offset: 0x4d0
	// Line 211, Address: 0x11d530, Func Offset: 0x4f0
	// Line 212, Address: 0x11d54c, Func Offset: 0x50c
	// Line 214, Address: 0x11d554, Func Offset: 0x514
	// Line 215, Address: 0x11d574, Func Offset: 0x534
	// Line 216, Address: 0x11d57c, Func Offset: 0x53c
	// Line 217, Address: 0x11d580, Func Offset: 0x540
	// Line 224, Address: 0x11d598, Func Offset: 0x558
	// Line 227, Address: 0x11d5b0, Func Offset: 0x570
	// Line 229, Address: 0x11d5b8, Func Offset: 0x578
	// Line 230, Address: 0x11d5c4, Func Offset: 0x584
	// Line 232, Address: 0x11d7a0, Func Offset: 0x760
	// Line 233, Address: 0x11d7b0, Func Offset: 0x770
	// Line 234, Address: 0x11d7b4, Func Offset: 0x774
	// Line 236, Address: 0x11d7b8, Func Offset: 0x778
	// Line 237, Address: 0x11d7c0, Func Offset: 0x780
	// Line 238, Address: 0x11d7d8, Func Offset: 0x798
	// Line 239, Address: 0x11d7f0, Func Offset: 0x7b0
	// Line 240, Address: 0x11d7f8, Func Offset: 0x7b8
	// Line 239, Address: 0x11d7fc, Func Offset: 0x7bc
	// Line 241, Address: 0x11d808, Func Offset: 0x7c8
	// Line 242, Address: 0x11d818, Func Offset: 0x7d8
	// Line 243, Address: 0x11d81c, Func Offset: 0x7dc
	// Line 242, Address: 0x11d820, Func Offset: 0x7e0
	// Line 244, Address: 0x11d82c, Func Offset: 0x7ec
	// Line 246, Address: 0x11d848, Func Offset: 0x808
	// Func End, Address: 0x11d884, Func Offset: 0x844
}

// iAnimBoneCount__FPv
// Start address: 0x11d890
uint32 iAnimBoneCount(void* RawData)
{
	// Line 84, Address: 0x11d890, Func Offset: 0
	// Func End, Address: 0x11d898, Func Offset: 0x8
}

// iAnimDuration__FPv
// Start address: 0x11d8a0
float32 iAnimDuration(void* RawData)
{
	// Line 78, Address: 0x11d8a0, Func Offset: 0
	// Func End, Address: 0x11d8a8, Func Offset: 0x8
}

// iAnimEval__FPvfUiP6_xVec3P6_xQuat
// Start address: 0x11d8b0
void iAnimEval(void* RawData, float32 time, uint32 flags, _xVec3* tran, _xQuat* quat)
{
	// Line 63, Address: 0x11d8b0, Func Offset: 0
	// Func End, Address: 0x11d8b8, Func Offset: 0x8
}

// iAnimInit__Fv
// Start address: 0x11d8c0
void iAnimInit()
{
	// Line 43, Address: 0x11d8c0, Func Offset: 0
	// Func End, Address: 0x11d8c8, Func Offset: 0x8
}

