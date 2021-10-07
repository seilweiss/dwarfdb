typedef struct tag_xFile;
typedef struct RwRaster;
typedef struct tagBITMAPFILEHEADER;
typedef struct tag_iFile;
typedef struct sceCdlFILE;
typedef struct RwRGBA;
typedef struct tagBITMAPINFOHEADER;
typedef struct RwImage;
typedef struct BmpMegaHeader;

typedef void(*type_0)(int32);

typedef int8 type_1[256];
typedef int8 type_2[128];
typedef int8 type_3[16];
typedef uint8 type_4[8];
typedef int8 type_5[64];
typedef int8 type_6[2];
typedef int8 type_7[2];
typedef int8 type_8[16];
typedef uint32 type_9[4096];

struct tag_xFile
{
	int8 relname[16];
	tag_iFile ps;
};

struct RwRaster
{
	RwRaster* parent;
	uint8* cpPixels;
	uint8* palette;
	int32 width;
	int32 height;
	int32 depth;
	int32 stride;
	int16 nOffsetX;
	int16 nOffsetY;
	uint8 cType;
	uint8 cFlags;
	uint8 privateFlags;
	uint8 cFormat;
	uint8* originalPixels;
	int32 originalWidth;
	int32 originalHeight;
	int32 originalStride;
};

struct tagBITMAPFILEHEADER
{
	int32 bfSize;
	int16 bfReserved1;
	int16 bfReserved2;
	int32 bfOffBits;
};

struct tag_iFile
{
	uint32 flags;
	int8 path[128];
	int32 fd;
	sceCdlFILE file;
	void(*cb)(int32);
};

struct sceCdlFILE
{
	uint32 lsn;
	uint32 size;
	int8 name[16];
	uint8 date[8];
	uint32 flag;
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct tagBITMAPINFOHEADER
{
	int32 biSize;
	int32 biWidth;
	int32 biHeight;
	int16 biPlanes;
	int16 biBitCount;
	int32 biCompression;
	int32 biSizeImage;
	int32 biXPelsPerMeter;
	int32 biYPelsPerMeter;
	int32 biClrUsed;
	int32 biClrImportant;
};

struct RwImage
{
	int32 flags;
	int32 width;
	int32 height;
	int32 depth;
	int32 stride;
	uint8* cpPixels;
	RwRGBA* palette;
};

struct BmpMegaHeader
{
	int8 prepad[2];
	int8 bfType[2];
	tagBITMAPFILEHEADER bmFile;
	tagBITMAPINFOHEADER bmInfo;
};

RwRaster* mCharset;
RwRGBA mForegroundColor;
RwRGBA mBackgroundColor;
uint32 gScreenDump;
int32 sDumpFileNumber;
int8 gScreenDumpPath[256];
uint32 ourGlobals[4096];

void iDebugScreenDump();

// iDebugScreenDump__Fv
// Start address: 0x128410
void iDebugScreenDump()
{
	uint8* p;
	BmpMegaHeader mhdr;
	long32 t1;
	long32 t0;
	uint8* imp;
	uint8* buf;
	uint8* bp;
	int8 fname[64];
	uint32 y;
	uint32 x;
	tag_xFile file;
	uint8* pixels;
	uint8* oldCamPixels;
	RwImage* image;
	int32 height;
	int32 width;
	RwRaster* camRas;
	// Line 150, Address: 0x128410, Func Offset: 0
	// Line 158, Address: 0x128428, Func Offset: 0x18
	// Line 150, Address: 0x12842c, Func Offset: 0x1c
	// Line 158, Address: 0x128430, Func Offset: 0x20
	// Line 160, Address: 0x12843c, Func Offset: 0x2c
	// Line 162, Address: 0x128444, Func Offset: 0x34
	// Line 163, Address: 0x128448, Func Offset: 0x38
	// Line 178, Address: 0x12844c, Func Offset: 0x3c
	// Line 176, Address: 0x128450, Func Offset: 0x40
	// Line 178, Address: 0x128454, Func Offset: 0x44
	// Line 180, Address: 0x128468, Func Offset: 0x58
	// Line 182, Address: 0x128470, Func Offset: 0x60
	// Line 192, Address: 0x128474, Func Offset: 0x64
	// Line 195, Address: 0x12848c, Func Offset: 0x7c
	// Line 198, Address: 0x128498, Func Offset: 0x88
	// Line 199, Address: 0x1284ac, Func Offset: 0x9c
	// Line 201, Address: 0x1284b4, Func Offset: 0xa4
	// Line 202, Address: 0x1284bc, Func Offset: 0xac
	// Line 204, Address: 0x1284c8, Func Offset: 0xb8
	// Line 206, Address: 0x1284d0, Func Offset: 0xc0
	// Line 208, Address: 0x1284dc, Func Offset: 0xcc
	// Line 212, Address: 0x1284e4, Func Offset: 0xd4
	// Line 214, Address: 0x1284f0, Func Offset: 0xe0
	// Line 216, Address: 0x1284fc, Func Offset: 0xec
	// Line 239, Address: 0x128504, Func Offset: 0xf4
	// Line 243, Address: 0x128510, Func Offset: 0x100
	// Line 244, Address: 0x128524, Func Offset: 0x114
	// Line 245, Address: 0x128540, Func Offset: 0x130
	// Line 246, Address: 0x128550, Func Offset: 0x140
	// Line 247, Address: 0x128558, Func Offset: 0x148
	// Line 248, Address: 0x128574, Func Offset: 0x164
	// Line 253, Address: 0x128584, Func Offset: 0x174
	// Line 254, Address: 0x128590, Func Offset: 0x180
	// Line 256, Address: 0x128598, Func Offset: 0x188
	// Line 257, Address: 0x1285a4, Func Offset: 0x194
	// Line 258, Address: 0x1285a8, Func Offset: 0x198
	// Line 259, Address: 0x1285ac, Func Offset: 0x19c
	// Line 261, Address: 0x1285b4, Func Offset: 0x1a4
	// Line 262, Address: 0x1285bc, Func Offset: 0x1ac
	// Line 263, Address: 0x1285c4, Func Offset: 0x1b4
	// Line 264, Address: 0x1285cc, Func Offset: 0x1bc
	// Line 265, Address: 0x1285d4, Func Offset: 0x1c4
	// Line 266, Address: 0x1285dc, Func Offset: 0x1cc
	// Line 267, Address: 0x1285e0, Func Offset: 0x1d0
	// Line 268, Address: 0x1285e4, Func Offset: 0x1d4
	// Line 269, Address: 0x1285e8, Func Offset: 0x1d8
	// Line 270, Address: 0x1285ec, Func Offset: 0x1dc
	// Line 274, Address: 0x1285f0, Func Offset: 0x1e0
	// Line 279, Address: 0x1285fc, Func Offset: 0x1ec
	// Line 280, Address: 0x128604, Func Offset: 0x1f4
	// Line 279, Address: 0x128608, Func Offset: 0x1f8
	// Line 282, Address: 0x12860c, Func Offset: 0x1fc
	// Line 283, Address: 0x128610, Func Offset: 0x200
	// Line 285, Address: 0x128628, Func Offset: 0x218
	// Line 286, Address: 0x128630, Func Offset: 0x220
	// Line 289, Address: 0x128634, Func Offset: 0x224
	// Line 286, Address: 0x12863c, Func Offset: 0x22c
	// Line 287, Address: 0x128640, Func Offset: 0x230
	// Line 288, Address: 0x128648, Func Offset: 0x238
	// Line 289, Address: 0x1286fc, Func Offset: 0x2ec
	// Line 291, Address: 0x128704, Func Offset: 0x2f4
	// Line 292, Address: 0x128714, Func Offset: 0x304
	// Line 294, Address: 0x128724, Func Offset: 0x314
	// Line 309, Address: 0x128728, Func Offset: 0x318
	// Line 310, Address: 0x128738, Func Offset: 0x328
	// Line 311, Address: 0x128740, Func Offset: 0x330
	// Line 313, Address: 0x128748, Func Offset: 0x338
	// Line 317, Address: 0x128750, Func Offset: 0x340
	// Line 318, Address: 0x128758, Func Offset: 0x348
	// Line 323, Address: 0x128764, Func Offset: 0x354
	// Line 324, Address: 0x128768, Func Offset: 0x358
	// Func End, Address: 0x128788, Func Offset: 0x378
}

