typedef struct p2LinkAsset;
typedef struct xBase;
typedef struct xSerial;
typedef struct p2BaseAsset;
typedef struct st_SERIAL_CLIENTINFO;

typedef int32(*type_1)(xBase*, xBase*, uint32, float32*, xBase*);

typedef float32 type_0[4];

struct p2LinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	float32 param[4];
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
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


void xBaseReset(xBase* xb, p2BaseAsset* asset);
void xBaseLoad(xBase* ent, xSerial* s);
void xBaseSave(xBase* ent, xSerial* s);
void xBaseSetup();
void xBaseInit(xBase* xb, p2BaseAsset* asset);

// xBaseReset__FP5xBaseP11p2BaseAsset
// Start address: 0x19d320
void xBaseReset(xBase* xb, p2BaseAsset* asset)
{
	// Line 118, Address: 0x19d320, Func Offset: 0
	// Line 120, Address: 0x19d328, Func Offset: 0x8
	// Line 122, Address: 0x19d330, Func Offset: 0x10
	// Func End, Address: 0x19d338, Func Offset: 0x18
}

// xBaseLoad__FP5xBaseP7xSerial
// Start address: 0x19d340
void xBaseLoad(xBase* ent, xSerial* s)
{
	int32 b;
	// Line 100, Address: 0x19d340, Func Offset: 0
	// Line 105, Address: 0x19d350, Func Offset: 0x10
	// Line 106, Address: 0x19d360, Func Offset: 0x20
	// Line 107, Address: 0x19d36c, Func Offset: 0x2c
	// Line 109, Address: 0x19d37c, Func Offset: 0x3c
	// Line 111, Address: 0x19d388, Func Offset: 0x48
	// Func End, Address: 0x19d398, Func Offset: 0x58
}

// xBaseSave__FP5xBaseP7xSerial
// Start address: 0x19d3a0
void xBaseSave(xBase* ent, xSerial* s)
{
	// Line 78, Address: 0x19d3a0, Func Offset: 0
	// Line 82, Address: 0x19d3a8, Func Offset: 0x8
	// Line 83, Address: 0x19d3b8, Func Offset: 0x18
	// Line 85, Address: 0x19d3cc, Func Offset: 0x2c
	// Line 87, Address: 0x19d3d4, Func Offset: 0x34
	// Func End, Address: 0x19d3e0, Func Offset: 0x40
}

// xBaseSetup__FP5xBase
// Start address: 0x19d3e0
void xBaseSetup()
{
	// Line 65, Address: 0x19d3e0, Func Offset: 0
	// Func End, Address: 0x19d3e8, Func Offset: 0x8
}

// xBaseInit__FP5xBaseP11p2BaseAsset
// Start address: 0x19d3f0
void xBaseInit(xBase* xb, p2BaseAsset* asset)
{
	// Line 24, Address: 0x19d3f0, Func Offset: 0
	// Line 25, Address: 0x19d3f8, Func Offset: 0x8
	// Line 26, Address: 0x19d400, Func Offset: 0x10
	// Line 27, Address: 0x19d408, Func Offset: 0x18
	// Line 28, Address: 0x19d410, Func Offset: 0x20
	// Line 31, Address: 0x19d414, Func Offset: 0x24
	// Line 35, Address: 0x19d41c, Func Offset: 0x2c
	// Func End, Address: 0x19d424, Func Offset: 0x34
}

