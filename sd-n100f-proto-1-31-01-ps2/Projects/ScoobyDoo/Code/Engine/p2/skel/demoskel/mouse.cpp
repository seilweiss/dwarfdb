typedef struct _RwLLLink;
typedef struct RsMouse;
typedef struct _RwFrustumPlane;
typedef struct _RwImage;
typedef struct _RwRGBA;
typedef struct _RwV2d;
typedef struct _RwMatrix;
typedef struct _RwPlane;
typedef struct PsMouse;
typedef struct _RwRaster;
typedef enum _RwCameraProjection;
typedef struct _RwV3d;
typedef struct _RwObjectHasFrame;
typedef struct _RwCamera;
typedef struct _RwObject;
typedef struct _RwBBox;

typedef _RwCamera*(*type_0)(_RwCamera*);
typedef _RwCamera*(*type_1)(_RwCamera*);
typedef _RwObjectHasFrame*(*type_5)(_RwObjectHasFrame*);

typedef uint8 type_2[836];
typedef _RwFrustumPlane type_3[6];
typedef _RwV3d type_4[8];

struct _RwLLLink
{
	_RwLLLink* next;
	_RwLLLink* prev;
};

struct RsMouse
{
	_RwV2d pos;
	_RwRaster* raster;
	PsMouse* psmouse;
	int32 draw;

	void* __ct(int32 visible);
	void* __dt();
	void render(_RwCamera* camera);
	void setVisibility(int32 visible);
};

struct _RwFrustumPlane
{
	_RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
};

struct _RwImage
{
	int32 flags;
	int32 width;
	int32 height;
	int32 depth;
	int32 stride;
	uint8* cpPixels;
	_RwRGBA* palette;
};

struct _RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct _RwV2d
{
	float32 x;
	float32 y;
};

struct _RwMatrix
{
	_RwV3d right;
	uint32 flags;
	_RwV3d up;
	uint32 pad1;
	_RwV3d at;
	uint32 pad2;
	_RwV3d pos;
	uint32 pad3;
};

struct _RwPlane
{
	_RwV3d normal;
	float32 distance;
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

enum _RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

struct _RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct _RwObjectHasFrame
{
	_RwObject object;
	_RwLLLink lFrame;
	_RwObjectHasFrame*(*sync)(_RwObjectHasFrame*);
};

struct _RwCamera
{
	_RwObjectHasFrame object;
	_RwCameraProjection projectionType;
	_RwCamera*(*beginUpdate)(_RwCamera*);
	_RwCamera*(*endUpdate)(_RwCamera*);
	_RwMatrix viewMatrix;
	_RwRaster* frameBuffer;
	_RwRaster* zBuffer;
	_RwV2d viewWindow;
	_RwV2d recipViewWindow;
	_RwV2d viewOffset;
	float32 nearPlane;
	float32 farPlane;
	float32 fogPlane;
	float32 zScale;
	float32 zShift;
	uint16 renderFrame;
	_RwFrustumPlane frustumPlanes[6];
	_RwBBox frustumBoundBox;
	_RwV3d frustumCorners[8];
};

struct _RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct _RwBBox
{
	_RwV3d sup;
	_RwV3d inf;
};

uint8 mousedat[836];

void* __ct(int32 visible);
void* __dt();
void render(_RwCamera* camera);
void setVisibility(int32 visible);

// __ct__7RsMouseFi
// Start address: 0x2023e0
void* RsMouse::__ct(int32 visible)
{
	_RwImage* image;
	int32 rasterFlags;
	int32 rasterDepth;
	int32 rasterWidth;
	int32 rasterHeight;
	// Line 80, Address: 0x2023e0, Func Offset: 0
	// Line 85, Address: 0x2023fc, Func Offset: 0x1c
	// Line 86, Address: 0x202414, Func Offset: 0x34
	// Line 87, Address: 0x202424, Func Offset: 0x44
	// Line 89, Address: 0x202438, Func Offset: 0x58
	// Line 94, Address: 0x202458, Func Offset: 0x78
	// Line 97, Address: 0x202464, Func Offset: 0x84
	// Line 99, Address: 0x202480, Func Offset: 0xa0
	// Line 101, Address: 0x20248c, Func Offset: 0xac
	// Line 103, Address: 0x202498, Func Offset: 0xb8
	// Line 107, Address: 0x2024a4, Func Offset: 0xc4
	// Line 108, Address: 0x2024b4, Func Offset: 0xd4
	// Line 112, Address: 0x2024c0, Func Offset: 0xe0
	// Line 113, Address: 0x2024c4, Func Offset: 0xe4
	// Func End, Address: 0x2024e4, Func Offset: 0x104
}

// __dt__7RsMouseFv
// Start address: 0x2024f0
void* RsMouse::__dt()
{
	// Line 71, Address: 0x2024f0, Func Offset: 0
	// Line 72, Address: 0x202510, Func Offset: 0x20
	// Line 74, Address: 0x20251c, Func Offset: 0x2c
	// Line 75, Address: 0x202528, Func Offset: 0x38
	// Line 76, Address: 0x20252c, Func Offset: 0x3c
	// Line 77, Address: 0x20254c, Func Offset: 0x5c
	// Func End, Address: 0x202564, Func Offset: 0x74
}

// render__7RsMouseFP9_RwCamera
// Start address: 0x202570
void RsMouse::render(_RwCamera* camera)
{
	// Line 41, Address: 0x202570, Func Offset: 0
	// Line 43, Address: 0x202588, Func Offset: 0x18
	// Line 45, Address: 0x2025a4, Func Offset: 0x34
	// Line 47, Address: 0x2025a8, Func Offset: 0x38
	// Line 49, Address: 0x2025c4, Func Offset: 0x54
	// Line 51, Address: 0x2025c8, Func Offset: 0x58
	// Line 53, Address: 0x202600, Func Offset: 0x90
	// Line 55, Address: 0x202628, Func Offset: 0xb8
	// Line 57, Address: 0x202660, Func Offset: 0xf0
	// Line 60, Address: 0x202688, Func Offset: 0x118
	// Line 62, Address: 0x2026a0, Func Offset: 0x130
	// Line 64, Address: 0x2026c0, Func Offset: 0x150
	// Line 65, Address: 0x2026f0, Func Offset: 0x180
	// Line 68, Address: 0x2026f8, Func Offset: 0x188
	// Func End, Address: 0x202710, Func Offset: 0x1a0
}

// setVisibility__7RsMouseFi
// Start address: 0x202710
void RsMouse::setVisibility(int32 visible)
{
	// Line 9, Address: 0x202710, Func Offset: 0
	// Line 13, Address: 0x202714, Func Offset: 0x4
	// Func End, Address: 0x20271c, Func Offset: 0xc
}

