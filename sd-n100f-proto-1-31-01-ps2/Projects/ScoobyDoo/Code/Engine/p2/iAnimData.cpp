typedef struct _anon0;
typedef struct _RwV3d;
typedef struct _RpSkinFrame;
typedef struct iAnimData;
typedef struct _RpSkinAnim;
typedef struct _RtQuat;



struct _anon0
{
};

struct _RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct _RpSkinFrame
{
	_RtQuat q;
	_RwV3d t;
	float32 time;
	_RpSkinFrame* prevFrame;
};

struct iAnimData
{
	_RpSkinAnim* skin_anim;
	int8* m_name;
	float32 duration;

	void* __dt();
	void* __ct(int8* filename, int8* name);
};

struct _RpSkinAnim
{
	int32 numFrames;
	int32 flags;
	float32 duration;
	_RpSkinFrame* pFrames;
};

struct _RtQuat
{
	_RwV3d imag;
	float32 real;
};

_anon0 __vt__9iAnimData;

void* __dt();
void* __ct(int8* filename, int8* name);

// __dt__9iAnimDataFv
// Start address: 0x404280
void* iAnimData::__dt()
{
	// Line 17, Address: 0x404280, Func Offset: 0
	// Line 18, Address: 0x4042ac, Func Offset: 0x2c
	// Line 19, Address: 0x4042d8, Func Offset: 0x58
	// Func End, Address: 0x4042f0, Func Offset: 0x70
}

// __ct__9iAnimDataFPCcPCc
// Start address: 0x4042f0
void* iAnimData::__ct(int8* filename, int8* name)
{
	int8* act_name;
	// Line 7, Address: 0x4042f0, Func Offset: 0
	// Line 8, Address: 0x404318, Func Offset: 0x28
	// Line 9, Address: 0x404328, Func Offset: 0x38
	// Line 10, Address: 0x404344, Func Offset: 0x54
	// Line 11, Address: 0x404354, Func Offset: 0x64
	// Line 12, Address: 0x404364, Func Offset: 0x74
	// Line 13, Address: 0x404368, Func Offset: 0x78
	// Func End, Address: 0x404388, Func Offset: 0x98
}

