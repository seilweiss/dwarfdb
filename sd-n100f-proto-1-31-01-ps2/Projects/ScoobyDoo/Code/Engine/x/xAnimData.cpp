typedef struct _anon0;
typedef struct _RwV3d;
typedef struct iAnimInstance;
typedef struct _RpSkinFrame;
typedef struct iAnimData;
typedef struct xAnimData;
typedef struct _RpSkinAnim;
typedef struct _anon1;
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

struct iAnimInstance
{
	float32 time;

	void* __dt();
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
};

struct xAnimData : iAnimInstance
{
	uint32 m_assetID;
	uint32 m_ID;
	iAnimData* m_resource;

	void* __dt();
	void* __ct(uint32 asset_id, uint32 anim_ID, iAnimData* res);
};

struct _RpSkinAnim
{
	int32 numFrames;
	int32 flags;
	float32 duration;
	_RpSkinFrame* pFrames;
};

struct _anon1
{
};

struct _RtQuat
{
	_RwV3d imag;
	float32 real;
};

_anon1 __vt__9xAnimData;
_anon0 __vt__13iAnimInstance;

void* __dt();
void* __ct(uint32 asset_id, uint32 anim_ID, iAnimData* res);

// __dt__9xAnimDataFv
// Start address: 0x404980
void* xAnimData::__dt()
{
	// Line 14, Address: 0x404980, Func Offset: 0
	// Line 15, Address: 0x4049d8, Func Offset: 0x58
	// Func End, Address: 0x4049ec, Func Offset: 0x6c
}

// __ct__9xAnimDataFUiUiP9iAnimData
// Start address: 0x4049f0
void* xAnimData::__ct(uint32 asset_id, uint32 anim_ID, iAnimData* res)
{
	// Line 5, Address: 0x4049f0, Func Offset: 0
	// Line 7, Address: 0x404a0c, Func Offset: 0x1c
	// Line 8, Address: 0x404a10, Func Offset: 0x20
	// Line 9, Address: 0x404a14, Func Offset: 0x24
	// Line 10, Address: 0x404a18, Func Offset: 0x28
	// Func End, Address: 0x404a24, Func Offset: 0x34
}

