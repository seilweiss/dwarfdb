typedef struct xBase;
typedef struct zFogAsset;
typedef struct _zFog;
typedef struct xSerial;
typedef struct RwRGBA;
typedef struct p2LinkAsset;
typedef struct iFogParams;
typedef enum RwFogType;
typedef struct p2BaseAsset;

typedef int32(*type_0)(xBase*, xBase*, uint32, float32*, xBase*);
typedef int32(*type_5)(xBase*, xBase*, uint32, float32*, xBase*);

typedef uint8 type_1[4];
typedef uint8 type_2[4];
typedef float32 type_3[4];
typedef uint8 type_4[3];

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	p2LinkAsset* link;
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
};

struct zFogAsset : p2BaseAsset
{
	uint8 bkgndColor[4];
	uint8 fogColor[4];
	float32 fogDensity;
	float32 fogStart;
	float32 fogStop;
	float32 transitionTime;
	uint8 fogType;
	uint8 padFog[3];
};

struct _zFog : xBase
{
	zFogAsset* tasset;
};

struct xSerial
{
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
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

struct iFogParams
{
	RwFogType type;
	float32 start;
	float32 stop;
	float32 density;
	RwRGBA fogcolor;
	RwRGBA bgcolor;
	uint8* table;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct p2BaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

int32(*zFogEventCB)(xBase*, xBase*, uint32, float32*, xBase*);

void zFogUpdate();
int32 zFogEventCB(xBase* to, uint32 toEvent);
void zFogLoad(_zFog* ent, xSerial* s);
void zFogSave(_zFog* ent, xSerial* s);
void zFogInit(void* b, void* tasset);

// zFogUpdate__FP5xBaseP7_xScenef
// Start address: 0x1cc5a0
void zFogUpdate()
{
	// Line 183, Address: 0x1cc5a0, Func Offset: 0
	// Func End, Address: 0x1cc5a8, Func Offset: 0x8
}

// zFogEventCB__FP5xBaseP5xBaseUiPfP5xBase
// Start address: 0x1cc5b0
int32 zFogEventCB(xBase* to, uint32 toEvent)
{
	iFogParams fog;
	_zFog* t;
	// Line 119, Address: 0x1cc5b0, Func Offset: 0
	// Line 126, Address: 0x1cc5b4, Func Offset: 0x4
	// Line 131, Address: 0x1cc5dc, Func Offset: 0x2c
	// Line 132, Address: 0x1cc5e0, Func Offset: 0x30
	// Line 133, Address: 0x1cc5ec, Func Offset: 0x3c
	// Line 134, Address: 0x1cc5f8, Func Offset: 0x48
	// Line 135, Address: 0x1cc604, Func Offset: 0x54
	// Line 136, Address: 0x1cc610, Func Offset: 0x60
	// Line 137, Address: 0x1cc61c, Func Offset: 0x6c
	// Line 138, Address: 0x1cc628, Func Offset: 0x78
	// Line 139, Address: 0x1cc634, Func Offset: 0x84
	// Line 140, Address: 0x1cc640, Func Offset: 0x90
	// Line 141, Address: 0x1cc64c, Func Offset: 0x9c
	// Line 142, Address: 0x1cc658, Func Offset: 0xa8
	// Line 143, Address: 0x1cc664, Func Offset: 0xb4
	// Line 144, Address: 0x1cc668, Func Offset: 0xb8
	// Line 145, Address: 0x1cc678, Func Offset: 0xc8
	// Line 149, Address: 0x1cc680, Func Offset: 0xd0
	// Line 150, Address: 0x1cc68c, Func Offset: 0xdc
	// Line 153, Address: 0x1cc694, Func Offset: 0xe4
	// Line 160, Address: 0x1cc6a4, Func Offset: 0xf4
	// Line 159, Address: 0x1cc6a8, Func Offset: 0xf8
	// Line 160, Address: 0x1cc6ac, Func Offset: 0xfc
	// Func End, Address: 0x1cc6b4, Func Offset: 0x104
}

// zFogLoad__FP5_zFogP7xSerial
// Start address: 0x1cc6c0
void zFogLoad(_zFog* ent, xSerial* s)
{
	// Line 100, Address: 0x1cc6c0, Func Offset: 0
	// Func End, Address: 0x1cc6c8, Func Offset: 0x8
}

// zFogSave__FP5_zFogP7xSerial
// Start address: 0x1cc6d0
void zFogSave(_zFog* ent, xSerial* s)
{
	// Line 81, Address: 0x1cc6d0, Func Offset: 0
	// Func End, Address: 0x1cc6d8, Func Offset: 0x8
}

// zFogInit__FPvPv
// Start address: 0x1cc6e0
void zFogInit(void* b, void* tasset)
{
	// Line 36, Address: 0x1cc6e0, Func Offset: 0
	// Line 37, Address: 0x1cc6f4, Func Offset: 0x14
	// Line 38, Address: 0x1cc72c, Func Offset: 0x4c
	// Func End, Address: 0x1cc740, Func Offset: 0x60
}

