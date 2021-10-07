typedef struct _RwLLLink;
typedef struct PsMouse;
typedef struct _RwFrustumPlane;
typedef struct _RwImage;
typedef struct _RwRGBA;
typedef struct _anon0;
typedef struct Platform;
typedef struct _RwMatrix;
typedef struct _RwEngineOpenParams;
typedef struct _RwPlane;
typedef struct _RwRaster;
typedef struct _RsMouseStatus;
typedef struct RwSkel;
typedef struct RsMouse;
typedef struct _RwCamera;
typedef struct _RwV2d;
typedef enum _RwCameraProjection;
typedef struct _RwV3d;
typedef struct _RwObjectHasFrame;
typedef struct _RwObject;
typedef struct _RwBBox;

typedef _RwCamera*(*type_0)(_RwCamera*);
typedef _RwCamera*(*type_1)(_RwCamera*);
typedef _RwImage*(*type_4)(int8*);
typedef _RwImage*(*type_6)(int8*);
typedef _RwObjectHasFrame*(*type_7)(_RwObjectHasFrame*);

typedef _RwFrustumPlane type_2[6];
typedef _RwV3d type_3[8];
typedef int8 type_5[256];

struct _RwLLLink
{
	_RwLLLink* next;
	_RwLLLink* prev;
};

struct PsMouse
{
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

struct _anon0
{
};

struct Platform
{
	int32 quit;
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

struct _RwEngineOpenParams
{
	void* displayID;
};

struct _RwPlane
{
	_RwV3d normal;
	float32 distance;
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

struct _RsMouseStatus
{
	_RwV2d pos;
	_RwV2d delta;
	int32 shift;
	int32 control;
};

struct RwSkel
{
	int8* appName;
	int32 maximumWidth;
	int32 maximumHeight;
	RsMouse* mouse;
	Platform* ps;

	void* __ct(int32 width, int32 height);
	void* __dt();
	int32 SelectDevice();
	void CameraShowRaster(_RwCamera* camera);
	int32 RwInitialize(void* displayID);
	int32 InitDebug();
	int32 CommandLine(int8* command);
};

struct RsMouse
{
	_RwV2d pos;
	_RwRaster* raster;
	PsMouse* psmouse;
	int32 draw;
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

struct _RwV2d
{
	float32 x;
	float32 y;
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

_anon0 __vt__6RwSkel;
_RwImage*(*RwImageReadPNG)(int8*);
_RwImage*(*RwImageReadBMP)(int8*);

void* __ct(int32 width, int32 height);
void* __dt();
int32 PadButtonRight();
int32 PadButtonLeft();
int32 PadButtonUp();
int32 PadButtonDown();
int32 KeyUp();
int32 KeyDown();
int32 Update(float32 timeDelta);
int32 SelectDevice();
int32 RwTerminate();
void CameraShowRaster(_RwCamera* camera);
int32 RwInitialize(void* displayID);
int32 RightButtonUp();
int32 RightButtonDown();
int32 RegisterImageLoader();
int32 PluginAttach();
int32 MouseMove();
int32 LeftButtonUp();
int32 LeftButtonDown();
int32 InitDebug();
int32 FileLoad();
int32 CommandLine(int8* command);
int32 CameraSize();

// __ct__6RwSkelFii
// Start address: 0x202720
void* RwSkel::__ct(int32 width, int32 height)
{
	// Line 333, Address: 0x202720, Func Offset: 0
	// Line 334, Address: 0x20272c, Func Offset: 0xc
	// Line 335, Address: 0x202738, Func Offset: 0x18
	// Line 336, Address: 0x20273c, Func Offset: 0x1c
	// Line 337, Address: 0x202740, Func Offset: 0x20
	// Line 338, Address: 0x202744, Func Offset: 0x24
	// Line 339, Address: 0x202748, Func Offset: 0x28
	// Func End, Address: 0x202754, Func Offset: 0x34
}

// __dt__6RwSkelFv
// Start address: 0x202760
void* RwSkel::__dt()
{
	// Line 325, Address: 0x202760, Func Offset: 0
	// Line 326, Address: 0x20278c, Func Offset: 0x2c
	// Line 328, Address: 0x202798, Func Offset: 0x38
	// Line 329, Address: 0x2027a8, Func Offset: 0x48
	// Line 330, Address: 0x2027c8, Func Offset: 0x68
	// Func End, Address: 0x2027e0, Func Offset: 0x80
}

// PadButtonRight__6RwSkelFP6_RwV2d
// Start address: 0x2027e0
int32 PadButtonRight()
{
	// Line 321, Address: 0x2027e0, Func Offset: 0
	// Line 322, Address: 0x2027e4, Func Offset: 0x4
	// Func End, Address: 0x2027ec, Func Offset: 0xc
}

// PadButtonLeft__6RwSkelFP6_RwV2d
// Start address: 0x2027f0
int32 PadButtonLeft()
{
	// Line 312, Address: 0x2027f0, Func Offset: 0
	// Line 313, Address: 0x2027f4, Func Offset: 0x4
	// Func End, Address: 0x2027fc, Func Offset: 0xc
}

// PadButtonUp__6RwSkelFP18_RsPadButtonStatus
// Start address: 0x202800
int32 PadButtonUp()
{
	// Line 303, Address: 0x202800, Func Offset: 0
	// Line 304, Address: 0x202804, Func Offset: 0x4
	// Func End, Address: 0x20280c, Func Offset: 0xc
}

// PadButtonDown__6RwSkelFP18_RsPadButtonStatus
// Start address: 0x202810
int32 PadButtonDown()
{
	// Line 294, Address: 0x202810, Func Offset: 0
	// Line 295, Address: 0x202814, Func Offset: 0x4
	// Func End, Address: 0x20281c, Func Offset: 0xc
}

// KeyUp__6RwSkelFP12_RsKeyStatus
// Start address: 0x202820
int32 KeyUp()
{
	// Line 285, Address: 0x202820, Func Offset: 0
	// Line 286, Address: 0x202824, Func Offset: 0x4
	// Func End, Address: 0x20282c, Func Offset: 0xc
}

// KeyDown__6RwSkelFP12_RsKeyStatus
// Start address: 0x202830
int32 KeyDown()
{
	// Line 276, Address: 0x202830, Func Offset: 0
	// Line 277, Address: 0x202834, Func Offset: 0x4
	// Func End, Address: 0x20283c, Func Offset: 0xc
}

// Update__6RwSkelFf
// Start address: 0x202840
int32 RwSkel::Update(float32 timeDelta)
{
	// Line 267, Address: 0x202840, Func Offset: 0
	// Line 268, Address: 0x202844, Func Offset: 0x4
	// Func End, Address: 0x20284c, Func Offset: 0xc
}

// SelectDevice__6RwSkelFv
// Start address: 0x202850
int32 RwSkel::SelectDevice()
{
	// Line 252, Address: 0x202850, Func Offset: 0
	// Line 255, Address: 0x202858, Func Offset: 0x8
	// Line 259, Address: 0x202870, Func Offset: 0x20
	// Func End, Address: 0x202880, Func Offset: 0x30
}

// RwTerminate__6RwSkelFv
// Start address: 0x202880
int32 RwSkel::RwTerminate()
{
	// Line 241, Address: 0x202880, Func Offset: 0
	// Line 243, Address: 0x202888, Func Offset: 0x8
	// Line 244, Address: 0x202890, Func Offset: 0x10
	// Line 245, Address: 0x202898, Func Offset: 0x18
	// Line 247, Address: 0x2028a0, Func Offset: 0x20
	// Line 248, Address: 0x2028a4, Func Offset: 0x24
	// Func End, Address: 0x2028b4, Func Offset: 0x34
}

// CameraShowRaster__6RwSkelFP9_RwCamera
// Start address: 0x2028c0
void RwSkel::CameraShowRaster(_RwCamera* camera)
{
	// Line 232, Address: 0x2028c0, Func Offset: 0
	// Line 234, Address: 0x2028d8, Func Offset: 0x18
	// Line 236, Address: 0x2028e8, Func Offset: 0x28
	// Line 237, Address: 0x202900, Func Offset: 0x40
	// Func End, Address: 0x202918, Func Offset: 0x58
}

// RwInitialize__6RwSkelFPv
// Start address: 0x202920
int32 RwSkel::RwInitialize(void* displayID)
{
	_RwEngineOpenParams openParams;
	// Line 176, Address: 0x202920, Func Offset: 0
	// Line 180, Address: 0x202938, Func Offset: 0x18
	// Line 182, Address: 0x202964, Func Offset: 0x44
	// Line 186, Address: 0x202970, Func Offset: 0x50
	// Line 189, Address: 0x202984, Func Offset: 0x64
	// Line 192, Address: 0x202998, Func Offset: 0x78
	// Line 194, Address: 0x2029b4, Func Offset: 0x94
	// Line 197, Address: 0x2029c0, Func Offset: 0xa0
	// Line 199, Address: 0x2029c4, Func Offset: 0xa4
	// Line 201, Address: 0x2029d8, Func Offset: 0xb8
	// Line 204, Address: 0x2029e4, Func Offset: 0xc4
	// Line 206, Address: 0x202a00, Func Offset: 0xe0
	// Line 207, Address: 0x202a08, Func Offset: 0xe8
	// Line 209, Address: 0x202a10, Func Offset: 0xf0
	// Line 212, Address: 0x202a1c, Func Offset: 0xfc
	// Line 214, Address: 0x202a2c, Func Offset: 0x10c
	// Line 215, Address: 0x202a34, Func Offset: 0x114
	// Line 217, Address: 0x202a3c, Func Offset: 0x11c
	// Line 222, Address: 0x202a48, Func Offset: 0x128
	// Line 224, Address: 0x202a5c, Func Offset: 0x13c
	// Line 226, Address: 0x202a70, Func Offset: 0x150
	// Line 227, Address: 0x202a98, Func Offset: 0x178
	// Line 228, Address: 0x202a9c, Func Offset: 0x17c
	// Func End, Address: 0x202ab4, Func Offset: 0x194
}

// RightButtonUp__6RwSkelFP14_RsMouseStatus
// Start address: 0x202ac0
int32 RightButtonUp()
{
	// Line 169, Address: 0x202ac0, Func Offset: 0
	// Line 170, Address: 0x202ac4, Func Offset: 0x4
	// Func End, Address: 0x202acc, Func Offset: 0xc
}

// RightButtonDown__6RwSkelFP14_RsMouseStatus
// Start address: 0x202ad0
int32 RightButtonDown()
{
	// Line 150, Address: 0x202ad0, Func Offset: 0
	// Line 151, Address: 0x202ad4, Func Offset: 0x4
	// Func End, Address: 0x202adc, Func Offset: 0xc
}

// RegisterImageLoader__6RwSkelFv
// Start address: 0x202ae0
int32 RwSkel::RegisterImageLoader()
{
	// Line 132, Address: 0x202ae0, Func Offset: 0
	// Line 133, Address: 0x202ae8, Func Offset: 0x8
	// Line 135, Address: 0x202b0c, Func Offset: 0x2c
	// Line 139, Address: 0x202b18, Func Offset: 0x38
	// Line 142, Address: 0x202b38, Func Offset: 0x58
	// Func End, Address: 0x202b48, Func Offset: 0x68
}

// PluginAttach__6RwSkelFv
// Start address: 0x202b50
int32 RwSkel::PluginAttach()
{
	int32 rv;
	// Line 122, Address: 0x202b50, Func Offset: 0
	// Line 123, Address: 0x202b58, Func Offset: 0x8
	// Line 124, Address: 0x202b60, Func Offset: 0x10
	// Line 125, Address: 0x202b7c, Func Offset: 0x2c
	// Line 126, Address: 0x202b98, Func Offset: 0x48
	// Line 128, Address: 0x202bb4, Func Offset: 0x64
	// Func End, Address: 0x202bc4, Func Offset: 0x74
}

// MouseMove__6RwSkelFP14_RsMouseStatus
// Start address: 0x202bd0
int32 MouseMove()
{
	// Line 106, Address: 0x202bd0, Func Offset: 0
	// Line 107, Address: 0x202bd4, Func Offset: 0x4
	// Func End, Address: 0x202bdc, Func Offset: 0xc
}

// LeftButtonUp__6RwSkelFP14_RsMouseStatus
// Start address: 0x202be0
int32 LeftButtonUp()
{
	// Line 97, Address: 0x202be0, Func Offset: 0
	// Line 98, Address: 0x202be4, Func Offset: 0x4
	// Func End, Address: 0x202bec, Func Offset: 0xc
}

// LeftButtonDown__6RwSkelFP14_RsMouseStatus
// Start address: 0x202bf0
int32 LeftButtonDown()
{
	// Line 78, Address: 0x202bf0, Func Offset: 0
	// Line 79, Address: 0x202bf4, Func Offset: 0x4
	// Func End, Address: 0x202bfc, Func Offset: 0xc
}

// InitDebug__6RwSkelFv
// Start address: 0x202c00
int32 RwSkel::InitDebug()
{
	// Line 64, Address: 0x202c00, Func Offset: 0
	// Line 65, Address: 0x202c10, Func Offset: 0x10
	// Line 67, Address: 0x202c30, Func Offset: 0x30
	// Line 69, Address: 0x202c54, Func Offset: 0x54
	// Line 70, Address: 0x202c58, Func Offset: 0x58
	// Func End, Address: 0x202c6c, Func Offset: 0x6c
}

// FileLoad__6RwSkelFPc
// Start address: 0x202c70
int32 RwSkel::FileLoad()
{
	// Line 59, Address: 0x202c70, Func Offset: 0
	// Line 60, Address: 0x202c74, Func Offset: 0x4
	// Func End, Address: 0x202c7c, Func Offset: 0xc
}

// CommandLine__6RwSkelFPc
// Start address: 0x202c80
int32 RwSkel::CommandLine(int8* command)
{
	int8 fileName[256];
	int8* s2;
	int8* s1;
	// Line 20, Address: 0x202c80, Func Offset: 0
	// Line 28, Address: 0x202c94, Func Offset: 0x14
	// Line 30, Address: 0x202c9c, Func Offset: 0x1c
	// Line 31, Address: 0x202ca0, Func Offset: 0x20
	// Line 32, Address: 0x202ca4, Func Offset: 0x24
	// Line 37, Address: 0x202cac, Func Offset: 0x2c
	// Line 38, Address: 0x202cbc, Func Offset: 0x3c
	// Line 39, Address: 0x202ce0, Func Offset: 0x60
	// Line 40, Address: 0x202ce4, Func Offset: 0x64
	// Line 42, Address: 0x202ce8, Func Offset: 0x68
	// Line 44, Address: 0x202cf4, Func Offset: 0x74
	// Line 45, Address: 0x202d0c, Func Offset: 0x8c
	// Line 46, Address: 0x202d10, Func Offset: 0x90
	// Line 47, Address: 0x202d14, Func Offset: 0x94
	// Line 48, Address: 0x202d24, Func Offset: 0xa4
	// Line 50, Address: 0x202d28, Func Offset: 0xa8
	// Line 51, Address: 0x202d2c, Func Offset: 0xac
	// Func End, Address: 0x202d44, Func Offset: 0xc4
}

// CameraSize__6RwSkelFP7_RwRect
// Start address: 0x202d50
int32 CameraSize()
{
	// Line 15, Address: 0x202d50, Func Offset: 0
	// Line 16, Address: 0x202d54, Func Offset: 0x4
	// Func End, Address: 0x202d5c, Func Offset: 0xc
}

