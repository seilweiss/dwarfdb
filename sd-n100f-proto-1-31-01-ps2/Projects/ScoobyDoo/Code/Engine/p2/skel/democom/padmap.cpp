typedef struct RwSkel;
typedef struct _RsPadButtonStatus;
typedef struct PadMap;
typedef struct _RsMouseStatus;
typedef struct RsMouse;
typedef struct Platform;
typedef struct PsMouse;
typedef struct _RwRaster;
typedef struct _RwV2d;



struct RwSkel
{
	int8* appName;
	int32 maximumWidth;
	int32 maximumHeight;
	RsMouse* mouse;
	Platform* ps;
};

struct _RsPadButtonStatus
{
	int32 padID;
	uint32 padButtons;
};

struct PadMap
{
	RwSkel* skel;
	_RsMouseStatus ms;

	void* __ct(RwSkel* skel);
};

struct _RsMouseStatus
{
	_RwV2d pos;
	_RwV2d delta;
	int32 shift;
	int32 control;
};

struct RsMouse
{
	_RwV2d pos;
	_RwRaster* raster;
	PsMouse* psmouse;
	int32 draw;
};

struct Platform
{
	int32 quit;
};

struct PsMouse
{
};

struct _RwRaster
{
	_RwRaster* parent;
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

struct _RwV2d
{
	float32 x;
	float32 y;
};


void* __ct(RwSkel* skel);

// __ct__6PadMapFP6RwSkel
// Start address: 0x204b50
void* PadMap::__ct(RwSkel* skel)
{
	// Line 96, Address: 0x204b50, Func Offset: 0
	// Line 97, Address: 0x204b54, Func Offset: 0x4
	// Line 98, Address: 0x204b5c, Func Offset: 0xc
	// Line 100, Address: 0x204b6c, Func Offset: 0x1c
	// Func End, Address: 0x204b78, Func Offset: 0x28
}

