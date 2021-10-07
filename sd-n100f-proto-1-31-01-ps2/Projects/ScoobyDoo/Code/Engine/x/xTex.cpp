typedef struct _iTexResource;
typedef struct _iTexRuntime;
typedef struct _xTex;
typedef struct XStreamHeader;
typedef struct _PVRheader;
typedef struct tagXStreamDirectoryEntry;
typedef struct tagXStreamMDSDirectory;


typedef tagXStreamDirectoryEntry type_0[1000];
typedef int8 type_1[2048];
typedef uint32 type_2[3];
typedef int8 type_3[128];
typedef _xTex* type_4[200];

struct _iTexResource
{
	uint32 m_assetID;
	uint32 pad[3];
	_PVRheader header;
};

struct _iTexRuntime
{
	void* surface;
	uint32 m_flags;
};

struct _xTex
{
	_iTexResource* m_resource;
	_iTexRuntime* m_runtime;
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

struct _PVRheader
{
	uint32 id;
	uint32 nTextureDataSize;
	uint32 nTextureType;
	uint16 nWidth;
	uint16 nHeight;
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

int32 g_TextureCount;
int32 g_TextureLevelReset;
_xTex* g_Textures[200];
int8 vAssertBuf2[128];
XStreamHeader currentHeader;

_xTex* xTexFind(uint32 assetID);
void xTexAdd(_xTex* next);
void xTexLevelReset();
void xTexSetLevelReset();
void xTexInit();

// xTexFind__FUi
// Start address: 0x32e320
_xTex* xTexFind(uint32 assetID)
{
	uint32 testID;
	int32 i;
	// Line 128, Address: 0x32e320, Func Offset: 0
	// Line 129, Address: 0x32e328, Func Offset: 0x8
	// Line 131, Address: 0x32e334, Func Offset: 0x14
	// Line 133, Address: 0x32e350, Func Offset: 0x30
	// Line 134, Address: 0x32e374, Func Offset: 0x54
	// Line 136, Address: 0x32e37c, Func Offset: 0x5c
	// Line 140, Address: 0x32e398, Func Offset: 0x78
	// Line 143, Address: 0x32e3b0, Func Offset: 0x90
	// Line 144, Address: 0x32e3bc, Func Offset: 0x9c
	// Func End, Address: 0x32e3c4, Func Offset: 0xa4
}

// xTexAdd__FP5_xTex
// Start address: 0x32e3d0
void xTexAdd(_xTex* next)
{
	// Line 93, Address: 0x32e3d0, Func Offset: 0
	// Line 111, Address: 0x32e3e0, Func Offset: 0x10
	// Line 112, Address: 0x32e488, Func Offset: 0xb8
	// Line 113, Address: 0x32e4a0, Func Offset: 0xd0
	// Line 115, Address: 0x32e4ac, Func Offset: 0xdc
	// Func End, Address: 0x32e4c0, Func Offset: 0xf0
}

// xTexLevelReset__Fv
// Start address: 0x32e4c0
void xTexLevelReset()
{
	// Line 86, Address: 0x32e4c0, Func Offset: 0
	// Line 87, Address: 0x32e4c8, Func Offset: 0x8
	// Func End, Address: 0x32e4d0, Func Offset: 0x10
}

// xTexSetLevelReset__Fv
// Start address: 0x32e4d0
void xTexSetLevelReset()
{
	// Line 77, Address: 0x32e4d0, Func Offset: 0
	// Line 78, Address: 0x32e4d8, Func Offset: 0x8
	// Func End, Address: 0x32e4e0, Func Offset: 0x10
}

// xTexInit__Fv
// Start address: 0x32e4e0
void xTexInit()
{
	// Line 64, Address: 0x32e4e0, Func Offset: 0
	// Line 66, Address: 0x32e4e8, Func Offset: 0x8
	// Line 67, Address: 0x32e4ec, Func Offset: 0xc
	// Line 68, Address: 0x32e4f0, Func Offset: 0x10
	// Line 69, Address: 0x32e4f8, Func Offset: 0x18
	// Func End, Address: 0x32e508, Func Offset: 0x28
}

