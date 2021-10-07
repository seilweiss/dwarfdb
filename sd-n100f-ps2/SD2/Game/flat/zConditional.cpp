typedef struct st_SERIAL_CLIENTINFO;
typedef struct zVarEntry;
typedef struct _zConditional;
typedef struct xBase;
typedef struct xSerial;
typedef struct zCondAsset;
typedef struct p2LinkAsset;
typedef struct p2BaseAsset;

typedef int32(*type_0)(xBase*, xBase*, uint32, float32*, xBase*);
typedef uint32(*type_1)();
typedef int32(*type_3)(xBase*, xBase*, uint32, float32*, xBase*);

typedef float32 type_2[4];
typedef zVarEntry type_4[0];

struct st_SERIAL_CLIENTINFO
{
};

struct zVarEntry
{
	uint32 entry;
	uint32 varNameID;
	int8* varName;
	uint32(*varCB)();
};

struct _zConditional : xBase
{
	zCondAsset* asset;
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
	uint32 idtag;
	int32 baseoff;
	st_SERIAL_CLIENTINFO* ctxtdata;
	int32 warned;
	int32 curele;
	int32 bitidx;
	int32 bittally;
};

struct zCondAsset : p2BaseAsset
{
	uint32 constNum;
	uint32 expr1;
	uint32 op;
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

zVarEntry zVarEntryTable[0];
int32(*zConditionalEventCB)(xBase*, xBase*, uint32, float32*, xBase*);

int32 zConditionalEventCB(xBase* to, uint32 toEvent);
uint32 zConditional_Evaluate(_zConditional* c);
void zConditionalLoad(_zConditional* ent, xSerial* s);
void zConditionalSave(_zConditional* ent, xSerial* s);
void zConditionalInit(void* b, void* asset);

// zConditionalEventCB__FP5xBaseP5xBaseUiPfP5xBase
// Start address: 0x1b16d0
int32 zConditionalEventCB(xBase* to, uint32 toEvent)
{
	_zConditional* t;
	// Line 190, Address: 0x1b16d0, Func Offset: 0
	// Line 198, Address: 0x1b16dc, Func Offset: 0xc
	// Line 202, Address: 0x1b170c, Func Offset: 0x3c
	// Line 203, Address: 0x1b171c, Func Offset: 0x4c
	// Line 205, Address: 0x1b1734, Func Offset: 0x64
	// Line 206, Address: 0x1b1740, Func Offset: 0x70
	// Line 215, Address: 0x1b1748, Func Offset: 0x78
	// Line 221, Address: 0x1b1754, Func Offset: 0x84
	// Line 220, Address: 0x1b175c, Func Offset: 0x8c
	// Line 221, Address: 0x1b1760, Func Offset: 0x90
	// Func End, Address: 0x1b1768, Func Offset: 0x98
}

// zConditional_Evaluate__FP13_zConditional
// Start address: 0x1b1770
uint32 zConditional_Evaluate(_zConditional* c)
{
	int32 i;
	zVarEntry* v;
	uint32 temp;
	// Line 111, Address: 0x1b1770, Func Offset: 0
	// Line 114, Address: 0x1b1784, Func Offset: 0x14
	// Line 117, Address: 0x1b1788, Func Offset: 0x18
	// Line 120, Address: 0x1b1790, Func Offset: 0x20
	// Line 122, Address: 0x1b17a8, Func Offset: 0x38
	// Line 123, Address: 0x1b17ac, Func Offset: 0x3c
	// Line 124, Address: 0x1b17b0, Func Offset: 0x40
	// Line 126, Address: 0x1b17c0, Func Offset: 0x50
	// Line 127, Address: 0x1b17c8, Func Offset: 0x58
	// Line 131, Address: 0x1b17d0, Func Offset: 0x60
	// Line 132, Address: 0x1b17dc, Func Offset: 0x6c
	// Line 136, Address: 0x1b180c, Func Offset: 0x9c
	// Line 142, Address: 0x1b181c, Func Offset: 0xac
	// Line 148, Address: 0x1b1828, Func Offset: 0xb8
	// Line 154, Address: 0x1b1834, Func Offset: 0xc4
	// Line 160, Address: 0x1b1844, Func Offset: 0xd4
	// Line 166, Address: 0x1b1854, Func Offset: 0xe4
	// Line 172, Address: 0x1b1864, Func Offset: 0xf4
	// Line 176, Address: 0x1b1868, Func Offset: 0xf8
	// Func End, Address: 0x1b1878, Func Offset: 0x108
}

// zConditionalLoad__FP13_zConditionalP7xSerial
// Start address: 0x1b1880
void zConditionalLoad(_zConditional* ent, xSerial* s)
{
	// Line 103, Address: 0x1b1880, Func Offset: 0
	// Func End, Address: 0x1b1888, Func Offset: 0x8
}

// zConditionalSave__FP13_zConditionalP7xSerial
// Start address: 0x1b1890
void zConditionalSave(_zConditional* ent, xSerial* s)
{
	// Line 84, Address: 0x1b1890, Func Offset: 0
	// Func End, Address: 0x1b1898, Func Offset: 0x8
}

// zConditionalInit__FPvPv
// Start address: 0x1b18a0
void zConditionalInit(void* b, void* asset)
{
	// Line 40, Address: 0x1b18a0, Func Offset: 0
	// Line 41, Address: 0x1b18b4, Func Offset: 0x14
	// Line 43, Address: 0x1b18ec, Func Offset: 0x4c
	// Line 45, Address: 0x1b18f8, Func Offset: 0x58
	// Func End, Address: 0x1b190c, Func Offset: 0x6c
}

