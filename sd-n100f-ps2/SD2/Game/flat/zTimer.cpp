typedef struct xBase;
typedef struct xSerial;
typedef struct _zTimer;
typedef struct zTimerAsset;
typedef struct p2LinkAsset;
typedef struct p2BaseAsset;
typedef struct st_SERIAL_CLIENTINFO;

typedef int32(*type_0)(xBase*, xBase*, uint32, float32*, xBase*);
typedef int32(*type_3)(xBase*, xBase*, uint32, float32*, xBase*);

typedef float32 type_1[4];
typedef uint8 type_2[3];

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
	uint32 idtag;
	int32 baseoff;
	st_SERIAL_CLIENTINFO* ctxtdata;
	int32 warned;
	int32 curele;
	int32 bitidx;
	int32 bittally;
};

struct _zTimer : xBase
{
	zTimerAsset* tasset;
	uint8 state;
	uint8 pad[3];
	float32 secondsLeft;
};

struct zTimerAsset : p2BaseAsset
{
	float32 seconds;
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

struct st_SERIAL_CLIENTINFO
{
};

int32(*zTimerEventCB)(xBase*, xBase*, uint32, float32*, xBase*);

void zTimerUpdate(xBase* to, float32 dt);
int32 zTimerEventCB(xBase* to, uint32 toEvent);
void zTimerLoad(_zTimer* ent, xSerial* s);
void zTimerSave(_zTimer* ent, xSerial* s);
void zTimerInit(void* b, void* tasset);

// zTimerUpdate__FP5xBaseP7_xScenef
// Start address: 0x195a50
void zTimerUpdate(xBase* to, float32 dt)
{
	_zTimer* t;
	// Line 187, Address: 0x195a50, Func Offset: 0
	// Line 195, Address: 0x195a58, Func Offset: 0x8
	// Line 198, Address: 0x195a68, Func Offset: 0x18
	// Line 201, Address: 0x195a6c, Func Offset: 0x1c
	// Line 198, Address: 0x195a74, Func Offset: 0x24
	// Line 201, Address: 0x195a78, Func Offset: 0x28
	// Line 204, Address: 0x195a88, Func Offset: 0x38
	// Line 207, Address: 0x195a94, Func Offset: 0x44
	// Func End, Address: 0x195aa0, Func Offset: 0x50
}

// zTimerEventCB__FP5xBaseP5xBaseUiPfP5xBase
// Start address: 0x195aa0
int32 zTimerEventCB(xBase* to, uint32 toEvent)
{
	_zTimer* t;
	// Line 141, Address: 0x195aa0, Func Offset: 0
	// Line 148, Address: 0x195aac, Func Offset: 0xc
	// Line 152, Address: 0x195adc, Func Offset: 0x3c
	// Line 156, Address: 0x195ae4, Func Offset: 0x44
	// Line 160, Address: 0x195af4, Func Offset: 0x54
	// Line 163, Address: 0x195afc, Func Offset: 0x5c
	// Line 164, Address: 0x195b14, Func Offset: 0x74
	// Line 167, Address: 0x195b1c, Func Offset: 0x7c
	// Line 173, Address: 0x195b20, Func Offset: 0x80
	// Line 172, Address: 0x195b28, Func Offset: 0x88
	// Line 173, Address: 0x195b2c, Func Offset: 0x8c
	// Func End, Address: 0x195b34, Func Offset: 0x94
}

// zTimerLoad__FP7_zTimerP7xSerial
// Start address: 0x195b40
void zTimerLoad(_zTimer* ent, xSerial* s)
{
	// Line 117, Address: 0x195b40, Func Offset: 0
	// Line 118, Address: 0x195b54, Func Offset: 0x14
	// Line 124, Address: 0x195b5c, Func Offset: 0x1c
	// Line 125, Address: 0x195b68, Func Offset: 0x28
	// Line 126, Address: 0x195b74, Func Offset: 0x34
	// Func End, Address: 0x195b88, Func Offset: 0x48
}

// zTimerSave__FP7_zTimerP7xSerial
// Start address: 0x195b90
void zTimerSave(_zTimer* ent, xSerial* s)
{
	// Line 96, Address: 0x195b90, Func Offset: 0
	// Line 97, Address: 0x195ba4, Func Offset: 0x14
	// Line 102, Address: 0x195bac, Func Offset: 0x1c
	// Line 103, Address: 0x195bb8, Func Offset: 0x28
	// Line 104, Address: 0x195bc4, Func Offset: 0x34
	// Func End, Address: 0x195bd8, Func Offset: 0x48
}

// zTimerInit__FPvPv
// Start address: 0x195be0
void zTimerInit(void* b, void* tasset)
{
	// Line 48, Address: 0x195be0, Func Offset: 0
	// Line 49, Address: 0x195bf4, Func Offset: 0x14
	// Line 50, Address: 0x195c38, Func Offset: 0x58
	// Func End, Address: 0x195c4c, Func Offset: 0x6c
}

