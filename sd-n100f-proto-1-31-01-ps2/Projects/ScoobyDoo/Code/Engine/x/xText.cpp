typedef struct tagxText;
typedef struct XStreamHeader;
typedef struct tagXStreamDirectoryEntry;
typedef struct tagXStreamMDSDirectory;


typedef tagXStreamDirectoryEntry type_0[1000];
typedef int8 type_1[2048];
typedef int8 type_2[128];
typedef tagxText type_3[320];

struct tagxText
{
	uint32 assetId;
	int8* string;
};

struct XStreamHeader
{
	uint32 id;
	uint32 versionID;
	uint8 month;
	uint8 day;
	uint8 hour;
	uint8 minute;
	uint32 mdsOffset;
	uint32 mdsLength;
	tagXStreamMDSDirectory directory;
	int8 safety[2048];
};

struct tagXStreamDirectoryEntry
{
	uint32 id;
	uint32 type;
	uint32 offset;
	uint32 length;
};

struct tagXStreamMDSDirectory
{
	uint32 count;
	tagXStreamDirectoryEntry directory[1000];
};

int32 gTextCount;
int32 gTextResetPoint;
tagxText gTextReference[320];
int8* badText;
int8* blankText;
int8 vAssertBuf2[128];
XStreamHeader currentHeader;

int8* xTextFind(uint32 assetId);
void xTextAdd(uint32 assetId, int8* string);
void xTextLevelReset();
void xTextSetLevelReset();
void xTextInit();

// xTextFind__FUi
// Start address: 0x32e110
int8* xTextFind(uint32 assetId)
{
	int8* ret;
	int32 i;
	// Line 87, Address: 0x32e110, Func Offset: 0
	// Line 93, Address: 0x32e118, Func Offset: 0x8
	// Line 95, Address: 0x32e124, Func Offset: 0x14
	// Line 100, Address: 0x32e130, Func Offset: 0x20
	// Line 104, Address: 0x32e144, Func Offset: 0x34
	// Line 106, Address: 0x32e14c, Func Offset: 0x3c
	// Line 112, Address: 0x32e154, Func Offset: 0x44
	// Line 114, Address: 0x32e160, Func Offset: 0x50
	// Line 116, Address: 0x32e17c, Func Offset: 0x6c
	// Line 118, Address: 0x32e198, Func Offset: 0x88
	// Line 126, Address: 0x32e1b0, Func Offset: 0xa0
	// Line 128, Address: 0x32e1b4, Func Offset: 0xa4
	// Func End, Address: 0x32e1c4, Func Offset: 0xb4
}

// xTextAdd__FUiPc
// Start address: 0x32e1d0
void xTextAdd(uint32 assetId, int8* string)
{
	// Line 60, Address: 0x32e1d0, Func Offset: 0
	// Line 61, Address: 0x32e1e8, Func Offset: 0x18
	// Line 65, Address: 0x32e290, Func Offset: 0xc0
	// Line 66, Address: 0x32e2a8, Func Offset: 0xd8
	// Line 68, Address: 0x32e2c0, Func Offset: 0xf0
	// Line 69, Address: 0x32e2cc, Func Offset: 0xfc
	// Func End, Address: 0x32e2e4, Func Offset: 0x114
}

// xTextLevelReset__Fv
// Start address: 0x32e2f0
void xTextLevelReset()
{
	// Line 52, Address: 0x32e2f0, Func Offset: 0
	// Line 53, Address: 0x32e2f8, Func Offset: 0x8
	// Func End, Address: 0x32e300, Func Offset: 0x10
}

// xTextSetLevelReset__Fv
// Start address: 0x32e300
void xTextSetLevelReset()
{
	// Line 41, Address: 0x32e300, Func Offset: 0
	// Line 42, Address: 0x32e308, Func Offset: 0x8
	// Func End, Address: 0x32e310, Func Offset: 0x10
}

// xTextInit__Fv
// Start address: 0x32e310
void xTextInit()
{
	// Line 29, Address: 0x32e310, Func Offset: 0
	// Line 30, Address: 0x32e314, Func Offset: 0x4
	// Line 31, Address: 0x32e318, Func Offset: 0x8
	// Func End, Address: 0x32e320, Func Offset: 0x10
}

