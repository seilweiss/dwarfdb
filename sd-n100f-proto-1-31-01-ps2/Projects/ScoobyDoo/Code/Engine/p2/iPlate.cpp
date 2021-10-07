typedef struct tagXStreamMDSDirectory;
typedef struct _iPlateMaskResource;
typedef struct XStreamHeader;
typedef struct _iPlateResource;
typedef struct tagXStreamDirectoryEntry;
typedef struct _iPlateRuntime;
typedef struct XStream;
typedef struct xPlate;


typedef tagXStreamDirectoryEntry type_0[1000];
typedef _iPlateResource type_1[300];
typedef int8 type_2[51];
typedef int8 type_3[2048];
typedef int8 type_4[128];

struct tagXStreamMDSDirectory
{
	uint32 count;
	tagXStreamDirectoryEntry directory[1000];
};

struct _iPlateMaskResource
{
	uint8 columnStart;
	uint8 scanStart;
	uint8 columnWidth;
	uint8 columnHeight;
	float32 depth;
	uint8* data;
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

struct _iPlateResource
{
	uint32 maskCount;
	_iPlateMaskResource* masks;
};

struct tagXStreamDirectoryEntry
{
	uint32 id;
	uint32 type;
	uint32 offset;
	uint32 length;
};

struct _iPlateRuntime
{
	int32 nextFrame;
	int32 cineFrame;
	int32 dispFrame;
	float32 cinez;
};

struct XStream
{
	uint32 id;
	int32 currentOffset;
	uint32* data;
	uint32 length;
	uint32 offset;
	uint32 done;
	uint32 assetID;
	tagXStreamDirectoryEntry* dir;
	uint32 count;
	uint32 index;
};

struct xPlate
{
	int32 m_initialized;
	int32 m_currentIndex;
	_iPlateRuntime* m_runtime;
};

int8 dbfont_chars[51];
uint8 dxoff;
_iPlateRuntime* g_PlateMgr;
int32 gPlateCount;
_iPlateResource gPlateList[300];
uint16 mask_color;
float32 mask_alpha;
uint8 actual_mask_pixels;
float32 bgi;
uint32 blank_frames;
int32 after_fmv_master_volume;
uint32 sTexMemHack;
int32 gGameState;
xPlate gPlate;
int8 vAssertBuf2[128];
XStreamHeader currentHeader;

void p2PlateRender();
void iPlateReset();
void p2PlateExit();
void p2MaskExit();

// p2PlateRender__Fv
// Start address: 0x370220
void p2PlateRender()
{
	// Line 614, Address: 0x370220, Func Offset: 0
	// Line 682, Address: 0x370240, Func Offset: 0x20
	// Func End, Address: 0x370248, Func Offset: 0x28
}

// iPlateReset__Fv
// Start address: 0x370250
void iPlateReset()
{
	int32 i;
	// Line 522, Address: 0x370250, Func Offset: 0
	// Line 525, Address: 0x37025c, Func Offset: 0xc
	// Line 526, Address: 0x370268, Func Offset: 0x18
	// Line 527, Address: 0x370468, Func Offset: 0x218
	// Line 528, Address: 0x370480, Func Offset: 0x230
	// Line 530, Address: 0x370484, Func Offset: 0x234
	// Line 531, Address: 0x370528, Func Offset: 0x2d8
	// Line 534, Address: 0x370534, Func Offset: 0x2e4
	// Func End, Address: 0x370548, Func Offset: 0x2f8
}

// p2PlateExit__Fv
// Start address: 0x370550
void p2PlateExit()
{
	// Line 166, Address: 0x370550, Func Offset: 0
	// Func End, Address: 0x370558, Func Offset: 0x8
}

// p2MaskExit__Fv
// Start address: 0x370560
void p2MaskExit()
{
	// Line 160, Address: 0x370560, Func Offset: 0
	// Func End, Address: 0x370568, Func Offset: 0x8
}

