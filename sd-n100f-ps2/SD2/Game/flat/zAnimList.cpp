typedef struct xAnimFile;
typedef struct xAnimSingle;
typedef struct xAnimEffect;
typedef struct xAnimTable;
typedef struct xAnimTransitionList;
typedef struct zAnimListAsset;
typedef struct xMemPool;
typedef struct xModelInstance;
typedef struct xAnimActiveEffect;
typedef struct xAnimTransition;
typedef struct xAnimState;
typedef struct _xQuat;
typedef struct xAnimPlay;
typedef struct st_xST_XASSETINFO;
typedef struct _xVec3;

typedef uint32(*type_2)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef uint32(*type_5)(xAnimTransition*, xAnimSingle*, void*);
typedef uint32(*type_6)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_7)(xMemPool*, void*);

typedef _xVec3 type_0[2];
typedef _xQuat type_1[2];
typedef uint32 type_3[10];
typedef int8* type_4[20];
typedef float32 type_8[2];
typedef float32 type_9[4];
typedef float32 type_10[4];
typedef uint8 type_11[2];

struct xAnimFile
{
	xAnimFile* Next;
	int8* Name;
	uint32 ID;
	uint32 FileFlags;
	float32 Duration;
	float32 TimeOffset;
	float32 PhysBase[4];
	float32 PhysDelta[4];
	uint16 BoneCount;
	uint8 NumAnims[2];
	void** RawData;
	void* Physics;
};

struct xAnimSingle
{
	uint32 SingleFlags;
	xAnimState* State;
	float32 Time;
	float32 CurrentSpeed;
	float32 BilinearLerp[2];
	xAnimEffect* Effect;
	uint32 ActiveCount;
	xAnimActiveEffect* ActiveList;
	xAnimPlay* Play;
	float32 LastTime;
	_xVec3 LastTranslation;
	float32 LastYaw;
	uint32 pad;
	_xQuat LastQuat;
	xAnimTransition* Sync;
	xAnimTransition* Tran;
	xAnimSingle* Blend;
	float32 BlendFactor;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
};

struct xAnimTable
{
	xAnimTable* Next;
	int8* Name;
	xAnimTransition* TransitionList;
	xAnimState* StateList;
	uint32 AnimIndex;
	uint32 MorphIndex;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct zAnimListAsset
{
	uint32 ids[10];
};

struct xMemPool
{
	void* FreeList;
	uint16 NextOffset;
	uint16 Flags;
	void* UsedList;
	void(*InitCB)(xMemPool*, void*);
	void* Buffer;
	uint16 Size;
	uint16 NumRealloc;
	uint32 Total;
};

struct xModelInstance
{
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	uint32(*Conditional)(xAnimTransition*, xAnimSingle*, void*);
	uint32(*Callback)(xAnimTransition*, xAnimSingle*, void*);
	uint32 Flags;
	uint32 UserFlags;
	float32 SrcTime;
	float32 DestTime;
	uint16 Priority;
	uint16 QueuePriority;
	float32 BlendRecip;
	uint16* BlendOffset;
};

struct xAnimState
{
	xAnimState* Next;
	int8* Name;
	uint32 ID;
	uint32 Flags;
	uint32 UserFlags;
	float32 Speed;
	xAnimFile* Data;
	xAnimEffect* Effects;
	xAnimTransitionList* Default;
	xAnimTransitionList* List;
	float32* BoneBlend;
	float32* TimeSnap;
	float32 FadeRecip;
	uint16* FadeOffset;
};

struct _xQuat
{
	_xVec3 v;
	float32 s;
};

struct xAnimPlay
{
	xAnimPlay* Next;
	uint16 NumSingle;
	uint16 BoneCount;
	xAnimSingle* Single;
	void* Object;
	xAnimTable* Table;
	_xVec3 Translate[2];
	uint32 pad1;
	_xQuat Quat[2];
	float32 Yaw;
	xMemPool* Pool;
	xModelInstance* ModelInst;
	uint32 pad2;
};

struct st_xST_XASSETINFO
{
	uint32 aid;
	uint32 sector;
	uint32 plus_offset;
	uint32 size;
	void* mempos;
};

struct _xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

int32 nals;
uint32* aids;
xAnimTable** atbls;
int32* anused;
int8* astnames[20];
uint32(*AlwaysConditional)(xAnimTransition*, xAnimSingle*, void*);
uint32 gActiveHeap;

int32 zAnimListGetNumUsed(uint32 id);
xAnimTable* zAnimListGetTable(uint32 id);
void zAnimListExit();
void zAnimListInit();
uint32 AlwaysConditional();

// zAnimListGetNumUsed__FUi
// Start address: 0x1dcc30
int32 zAnimListGetNumUsed(uint32 id)
{
	int32 i;
	// Line 145, Address: 0x1dcc30, Func Offset: 0
	// Line 146, Address: 0x1dcc40, Func Offset: 0x10
	// Line 147, Address: 0x1dcc4c, Func Offset: 0x1c
	// Line 149, Address: 0x1dcc60, Func Offset: 0x30
	// Line 151, Address: 0x1dcc74, Func Offset: 0x44
	// Func End, Address: 0x1dcc7c, Func Offset: 0x4c
}

// zAnimListGetTable__FUi
// Start address: 0x1dcc80
xAnimTable* zAnimListGetTable(uint32 id)
{
	int32 i;
	// Line 135, Address: 0x1dcc80, Func Offset: 0
	// Line 136, Address: 0x1dcc90, Func Offset: 0x10
	// Line 137, Address: 0x1dcc9c, Func Offset: 0x1c
	// Line 139, Address: 0x1dccb0, Func Offset: 0x30
	// Line 141, Address: 0x1dccc4, Func Offset: 0x44
	// Func End, Address: 0x1dcccc, Func Offset: 0x4c
}

// zAnimListExit__Fv
// Start address: 0x1dccd0
void zAnimListExit()
{
	// Line 127, Address: 0x1dccd0, Func Offset: 0
	// Line 128, Address: 0x1dccd4, Func Offset: 0x4
	// Line 129, Address: 0x1dccd8, Func Offset: 0x8
	// Line 131, Address: 0x1dccdc, Func Offset: 0xc
	// Func End, Address: 0x1dcce4, Func Offset: 0x14
}

// zAnimListInit__Fv
// Start address: 0x1dccf0
void zAnimListInit()
{
	xAnimFile* afile;
	int32 j;
	int32 idle_exists;
	xAnimFile* afile;
	void* buf;
	xAnimTable* atbl;
	st_xST_XASSETINFO ainfo;
	zAnimListAsset* zala;
	uint32 size;
	int32 i;
	// Line 51, Address: 0x1dccf0, Func Offset: 0
	// Line 52, Address: 0x1dcd14, Func Offset: 0x24
	// Line 51, Address: 0x1dcd18, Func Offset: 0x28
	// Line 52, Address: 0x1dcd1c, Func Offset: 0x2c
	// Line 54, Address: 0x1dcd38, Func Offset: 0x48
	// Line 55, Address: 0x1dcd48, Func Offset: 0x58
	// Line 57, Address: 0x1dcd64, Func Offset: 0x74
	// Line 59, Address: 0x1dcd88, Func Offset: 0x98
	// Line 62, Address: 0x1dcdac, Func Offset: 0xbc
	// Line 64, Address: 0x1dcdbc, Func Offset: 0xcc
	// Line 67, Address: 0x1dcdd0, Func Offset: 0xe0
	// Line 69, Address: 0x1dcde4, Func Offset: 0xf4
	// Line 72, Address: 0x1dcdf8, Func Offset: 0x108
	// Line 73, Address: 0x1dce0c, Func Offset: 0x11c
	// Line 74, Address: 0x1dce1c, Func Offset: 0x12c
	// Line 76, Address: 0x1dce28, Func Offset: 0x138
	// Line 77, Address: 0x1dce38, Func Offset: 0x148
	// Line 78, Address: 0x1dce40, Func Offset: 0x150
	// Line 82, Address: 0x1dce5c, Func Offset: 0x16c
	// Line 83, Address: 0x1dce8c, Func Offset: 0x19c
	// Line 85, Address: 0x1dcea0, Func Offset: 0x1b0
	// Line 86, Address: 0x1dceb4, Func Offset: 0x1c4
	// Line 89, Address: 0x1dcec0, Func Offset: 0x1d0
	// Line 90, Address: 0x1dcec8, Func Offset: 0x1d8
	// Line 91, Address: 0x1dced4, Func Offset: 0x1e4
	// Line 92, Address: 0x1dcee0, Func Offset: 0x1f0
	// Line 93, Address: 0x1dcee8, Func Offset: 0x1f8
	// Line 97, Address: 0x1dcefc, Func Offset: 0x20c
	// Line 98, Address: 0x1dcf04, Func Offset: 0x214
	// Line 102, Address: 0x1dcf30, Func Offset: 0x240
	// Line 104, Address: 0x1dcf70, Func Offset: 0x280
	// Line 105, Address: 0x1dcf78, Func Offset: 0x288
	// Line 106, Address: 0x1dcfa4, Func Offset: 0x2b4
	// Line 108, Address: 0x1dcfa8, Func Offset: 0x2b8
	// Line 111, Address: 0x1dcfb8, Func Offset: 0x2c8
	// Line 112, Address: 0x1dcfe4, Func Offset: 0x2f4
	// Line 116, Address: 0x1dcff4, Func Offset: 0x304
	// Line 119, Address: 0x1dd008, Func Offset: 0x318
	// Line 116, Address: 0x1dd010, Func Offset: 0x320
	// Line 119, Address: 0x1dd014, Func Offset: 0x324
	// Line 121, Address: 0x1dd020, Func Offset: 0x330
	// Line 122, Address: 0x1dd03c, Func Offset: 0x34c
	// Line 123, Address: 0x1dd040, Func Offset: 0x350
	// Func End, Address: 0x1dd070, Func Offset: 0x380
}

// AlwaysConditional__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x1dd070
uint32 AlwaysConditional()
{
	// Line 47, Address: 0x1dd070, Func Offset: 0
	// Func End, Address: 0x1dd078, Func Offset: 0x8
}

