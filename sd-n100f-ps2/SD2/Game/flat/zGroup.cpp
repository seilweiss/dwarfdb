typedef struct xSerial;
typedef struct xBase;
typedef struct _zGroup;
typedef struct zGroupAsset;
typedef struct p2LinkAsset;
typedef struct p2BaseAsset;

typedef int32(*type_0)(xBase*, xBase*, uint32, float32*, xBase*);
typedef int32(*type_2)(xBase*, xBase*, uint32, float32*, xBase*);

typedef float32 type_1[4];

struct xSerial
{
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

struct _zGroup : xBase
{
	zGroupAsset* asset;
};

struct zGroupAsset : p2BaseAsset
{
	uint16 itemCount;
	uint16 groupFlags;
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

struct p2BaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

int32(*zGroupEventCB)(xBase*, xBase*, uint32, float32*, xBase*);

uint32 zGroupGetItem(_zGroup* g, uint32 index);
xBase* zGroupGetItemPtr(_zGroup* g, uint32 index);
uint32 zGroupGetCount(_zGroup* g);
int32 zGroupEventCB(xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget);
void zGroupLoad(_zGroup* ent, xSerial* s);
void zGroupSave(_zGroup* ent, xSerial* s);
void zGroupInit(void* b, void* asset);

// zGroupGetItem__FP7_zGroupUi
// Start address: 0x1a09c0
uint32 zGroupGetItem(_zGroup* g, uint32 index)
{
	// Line 184, Address: 0x1a09c0, Func Offset: 0
	// Line 185, Address: 0x1a09d0, Func Offset: 0x10
	// Func End, Address: 0x1a09d8, Func Offset: 0x18
}

// zGroupGetItemPtr__FP7_zGroupUi
// Start address: 0x1a09e0
xBase* zGroupGetItemPtr(_zGroup* g, uint32 index)
{
	// Line 171, Address: 0x1a09e0, Func Offset: 0
	// Func End, Address: 0x1a09f8, Func Offset: 0x18
}

// zGroupGetCount__FP7_zGroup
// Start address: 0x1a0a00
uint32 zGroupGetCount(_zGroup* g)
{
	// Line 158, Address: 0x1a0a00, Func Offset: 0
	// Line 159, Address: 0x1a0a04, Func Offset: 0x4
	// Func End, Address: 0x1a0a0c, Func Offset: 0xc
}

// zGroupEventCB__FP5xBaseP5xBaseUiPfP5xBase
// Start address: 0x1a0a10
int32 zGroupEventCB(xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget)
{
	xBase* b;
	int32 i;
	int32 rand;
	_zGroup* g;
	// Line 104, Address: 0x1a0a10, Func Offset: 0
	// Line 112, Address: 0x1a0a38, Func Offset: 0x28
	// Line 114, Address: 0x1a0a4c, Func Offset: 0x3c
	// Line 115, Address: 0x1a0a58, Func Offset: 0x48
	// Line 116, Address: 0x1a0a60, Func Offset: 0x50
	// Line 118, Address: 0x1a0a6c, Func Offset: 0x5c
	// Line 123, Address: 0x1a0a70, Func Offset: 0x60
	// Line 125, Address: 0x1a0a84, Func Offset: 0x74
	// Line 130, Address: 0x1a0aa4, Func Offset: 0x94
	// Line 133, Address: 0x1a0ab4, Func Offset: 0xa4
	// Line 136, Address: 0x1a0ac8, Func Offset: 0xb8
	// Line 137, Address: 0x1a0ad0, Func Offset: 0xc0
	// Line 140, Address: 0x1a0ad8, Func Offset: 0xc8
	// Line 141, Address: 0x1a0aec, Func Offset: 0xdc
	// Line 144, Address: 0x1a0af4, Func Offset: 0xe4
	// Line 148, Address: 0x1a0b04, Func Offset: 0xf4
	// Line 151, Address: 0x1a0b1c, Func Offset: 0x10c
	// Line 150, Address: 0x1a0b3c, Func Offset: 0x12c
	// Line 151, Address: 0x1a0b40, Func Offset: 0x130
	// Func End, Address: 0x1a0b48, Func Offset: 0x138
}

// zGroupLoad__FP7_zGroupP7xSerial
// Start address: 0x1a0b50
void zGroupLoad(_zGroup* ent, xSerial* s)
{
	// Line 78, Address: 0x1a0b50, Func Offset: 0
	// Func End, Address: 0x1a0b58, Func Offset: 0x8
}

// zGroupSave__FP7_zGroupP7xSerial
// Start address: 0x1a0b60
void zGroupSave(_zGroup* ent, xSerial* s)
{
	// Line 59, Address: 0x1a0b60, Func Offset: 0
	// Func End, Address: 0x1a0b68, Func Offset: 0x8
}

// zGroupInit__FPvPv
// Start address: 0x1a0b70
void zGroupInit(void* b, void* asset)
{
	// Line 25, Address: 0x1a0b70, Func Offset: 0
	// Line 26, Address: 0x1a0b84, Func Offset: 0x14
	// Line 27, Address: 0x1a0bc8, Func Offset: 0x58
	// Func End, Address: 0x1a0bdc, Func Offset: 0x6c
}

