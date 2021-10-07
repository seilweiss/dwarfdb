typedef struct RwFrustumPlane;
typedef struct RwRaster;
typedef struct RwBBox;
typedef struct RwPlane;
typedef struct RwCamera;
typedef struct RwTexture;
typedef struct RwFrame;
typedef struct _iMotionBlurData;
typedef struct xColor_tag;
typedef struct iScrFxLensFlare;
typedef struct RwV2d;
typedef struct RwRect;
typedef struct xFXFastRaster;
typedef struct RwRGBA;
typedef struct oldRenderStateInfo;
typedef struct RwMatrixTag;
typedef enum RwCameraProjection;
typedef struct RwObjectHasFrame;
typedef struct xVec3;
typedef struct RwV3d;
typedef struct RwLLLink;
typedef struct RwSky2DVertex;
typedef struct RwSky2DVertexAlignmentOverlay;
typedef struct RwTexDictionary;
typedef struct RwSky2DVertexFields;
typedef struct RwLinkList;
typedef struct RwVideoMode;
typedef enum RwVideoModeFlag;
typedef struct RwRGBAReal;
typedef struct RwObject;

typedef RwCamera*(*type_8)(RwCamera*);
typedef RwCamera*(*type_9)(RwCamera*);
typedef void(*type_10)(RwRaster*, RwFrame*, uint8, void*);
typedef RwObjectHasFrame*(*type_13)(RwObjectHasFrame*);

typedef RwV3d type_0[8];
typedef RwFrustumPlane type_1[6];
typedef uint16 type_2[4];
typedef int8 type_3[16];
typedef uint32 type_4[4096];
typedef RwSky2DVertex type_5[4];
typedef uint16 type_6[6];
typedef float32 type_7[3];
typedef RwSky2DVertex type_11[5];
typedef uint16 type_12[8];
typedef int8 type_14[32];
typedef int8 type_15[32];
typedef <unknown fundamental type (0xa510)> type_16[4];
typedef int8 type_17[16];
typedef RwSky2DVertex type_18[4];

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
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

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct RwPlane
{
	RwV3d normal;
	float32 distance;
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	RwCamera*(*beginUpdate)(RwCamera*);
	RwCamera*(*endUpdate)(RwCamera*);
	RwMatrixTag viewMatrix;
	RwRaster* frameBuffer;
	RwRaster* zBuffer;
	RwV2d viewWindow;
	RwV2d recipViewWindow;
	RwV2d viewOffset;
	float32 nearPlane;
	float32 farPlane;
	float32 fogPlane;
	float32 zScale;
	float32 zShift;
	RwFrustumPlane frustumPlanes[6];
	RwBBox frustumBoundBox;
	RwV3d frustumCorners[8];
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	int8 name[32];
	int8 mask[32];
	uint32 filterAddressing;
	int32 refCount;
};

struct RwFrame
{
	RwObject object;
	RwLLLink inDirtyListLink;
	RwMatrixTag modelling;
	RwMatrixTag ltm;
	RwLinkList objectList;
	RwFrame* child;
	RwFrame* next;
	RwFrame* root;
};

struct _iMotionBlurData
{
	int32 motionBlurAlpha;
	RwRaster* motionBlurFrontBuffer;
	RwSky2DVertex vertex[4];
	uint16 index[6];
	uint32 w;
	uint32 h;
};

struct xColor_tag
{
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 a;
	RwRGBA rgba;
};

struct iScrFxLensFlare
{
	xVec3 pos;
	float32 dist2;
	xVec3 at;
	void* source;
	float32 intensity;
	float32 attenuatedIntensity;
	uint32 flags;
	uint32 padding;
};

struct RwV2d
{
	float32 x;
	float32 y;
};

struct RwRect
{
	int32 x;
	int32 y;
	int32 w;
	int32 h;
};

struct xFXFastRaster
{
	RwRaster* src;
	RwRaster* dst;
	uint32 fbmsk;
	uint32 test;
	uint32 old_alpha_1;
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct oldRenderStateInfo
{
	int32 textureFilter;
	int32 fogEnable;
	int32 zTestEnable;
	int32 zWriteEnable;
	int32 vertexAlphaEnable;
	int32 srcBlend;
	int32 destBlend;
	int32 cullMode;
};

struct RwMatrixTag
{
	RwV3d right;
	uint32 flags;
	RwV3d up;
	uint32 pad1;
	RwV3d at;
	uint32 pad2;
	RwV3d pos;
	uint32 pad3;
};

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
};

struct xVec3
{
	union
	{
		RwV3d m_RwV3d;
		float32 x;
	};
	float32 y;
	float32 z;
	float32 a[3];
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct RwSky2DVertex
{
	RwSky2DVertexAlignmentOverlay u;
};

struct RwSky2DVertexAlignmentOverlay
{
	union
	{
		RwSky2DVertexFields els;
		<unknown fundamental type (0xa510)> qWords[4];
	};
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct RwSky2DVertexFields
{
	RwV3d scrVertex;
	float32 camVertex_z;
	float32 u;
	float32 v;
	float32 recipZ;
	float32 pad1;
	RwRGBAReal color;
	RwV3d objNormal;
	float32 pad2;
};

struct RwLinkList
{
	RwLLLink link;
};

struct RwVideoMode
{
	int32 width;
	int32 height;
	int32 depth;
	RwVideoModeFlag flags;
	int32 refRate;
	int32 format;
};

enum RwVideoModeFlag
{
	rwVIDEOMODEEXCLUSIVE = 0x1,
	rwVIDEOMODEINTERLACE,
	rwVIDEOMODEFFINTERLACE = 0x4,
	rwVIDEOMODE_PS2_FSAASHRINKBLIT = 0x100,
	rwVIDEOMODE_PS2_FSAAREADCIRCUIT = 0x200,
	rwVIDEOMODE_XBOX_WIDESCREEN = 0x100,
	rwVIDEOMODE_XBOX_PROGRESSIVE = 0x200,
	rwVIDEOMODE_XBOX_FIELD = 0x400,
	rwVIDEOMODE_XBOX_10X11PIXELASPECT = 0x800,
	rwVIDEOMODEFLAGFORCEENUMSIZEINT = 0x7fffffff
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

int8 buffer[16];
int8 buffer[16];
float32 scale;
oldRenderStateInfo oldRendState;
uint32 sMotionBlurEnabled;
_iMotionBlurData sMBD;
uint32 FLARE_SIZE;
int32 RenderLightPos;
uint32 inv_raster;
RwTexture* gxFlareTexture;
uint32 ourGlobals[4096];
<unknown fundamental type (0xa510)>* _rwDMAGateSlot;
RwFrame* gxFlareFrame;
xColor_tag g_BLACK;
<unknown fundamental type (0xa510)>* _rwDMAPktPtr;
long32 skyAlpha_1;
long32 skyClamp_1;

void iScrFxLensFlare_Render(RwCamera* camera, iScrFxLensFlare* flare, void(*renderCB)(RwRaster*, RwFrame*, uint8, void*));
void iScrFxLensFlare_Reset();
int32 DetermineFlareOcclusion(RwCamera* camera, RwTexture* flareTexture, RwFrame* frame);
void AlphaSprite(RwRect* rect, uint8 alpha, float32 z, uint32 ztest);
int32 BlitAlphaToClut(RwRaster* src, RwRaster* dst);
int32 BlitScaledAlphaRasterToRaster(RwRaster* srcRaster, RwRect* srcRect, RwRaster* dstRaster, RwRect* dstRect);
int32 iScrFxCameraDestroyed();
int32 iScrFxMotionBlurOpen(RwCamera* camera);
void iCameraOverlayRender(RwRaster* ras, RwRGBA col);
void iScrFxMotionBlurCreateImmediateModeData(RwCamera* camera, RwRect* rect);
void iScrFxCameraEndScene(RwCamera* pCamera);
void iScrFxCameraCreated(RwCamera* pCamera);
void iCameraSetBlurriness(float32 amount);
void iCameraMotionBlurActivate(uint32 activate);
void iScrFxDrawBox(float32 x1, float32 y1, float32 x2, float32 y2, uint8 red, uint8 green, uint8 blue, uint8 alpha, uint8 clear_z_to_far);
void iScrFxEnd();
void iScrFxBegin();
void iScrFxInit();

// iScrFxLensFlare_Render__FP8RwCameraP15iScrFxLensFlarePFP8RwRasterP7RwFrameUcPv_v
// Start address: 0x4b8320
void iScrFxLensFlare_Render(RwCamera* camera, iScrFxLensFlare* flare, void(*renderCB)(RwRaster*, RwFrame*, uint8, void*))
{
	int32 result;
	// Line 1258, Address: 0x4b8320, Func Offset: 0
	// Line 1259, Address: 0x4b8348, Func Offset: 0x28
	// Line 1262, Address: 0x4b8358, Func Offset: 0x38
	// Line 1267, Address: 0x4b8368, Func Offset: 0x48
	// Line 1268, Address: 0x4b8374, Func Offset: 0x54
	// Line 1270, Address: 0x4b837c, Func Offset: 0x5c
	// Line 1276, Address: 0x4b8384, Func Offset: 0x64
	// Line 1275, Address: 0x4b8388, Func Offset: 0x68
	// Line 1276, Address: 0x4b838c, Func Offset: 0x6c
	// Line 1283, Address: 0x4b8398, Func Offset: 0x78
	// Line 1284, Address: 0x4b83ac, Func Offset: 0x8c
	// Line 1286, Address: 0x4b83b4, Func Offset: 0x94
	// Line 1289, Address: 0x4b83c4, Func Offset: 0xa4
	// Line 1286, Address: 0x4b83c8, Func Offset: 0xa8
	// Line 1289, Address: 0x4b83cc, Func Offset: 0xac
	// Line 1290, Address: 0x4b83d8, Func Offset: 0xb8
	// Line 1293, Address: 0x4b83e8, Func Offset: 0xc8
	// Line 1299, Address: 0x4b8400, Func Offset: 0xe0
	// Line 1301, Address: 0x4b8410, Func Offset: 0xf0
	// Line 1303, Address: 0x4b8420, Func Offset: 0x100
	// Line 1313, Address: 0x4b8428, Func Offset: 0x108
	// Line 1314, Address: 0x4b8438, Func Offset: 0x118
	// Line 1316, Address: 0x4b8444, Func Offset: 0x124
	// Line 1317, Address: 0x4b844c, Func Offset: 0x12c
	// Func End, Address: 0x4b8470, Func Offset: 0x150
}

// iScrFxLensFlare_Reset__Fv
// Start address: 0x4b8470
void iScrFxLensFlare_Reset()
{
	// Line 1253, Address: 0x4b8470, Func Offset: 0
	// Func End, Address: 0x4b8478, Func Offset: 0x8
}

// DetermineFlareOcclusion__FP8RwCameraP9RwTextureP7RwFrame
// Start address: 0x4b8480
int32 DetermineFlareOcclusion(RwCamera* camera, RwTexture* flareTexture, RwFrame* frame)
{
	RwRect srcRect;
	RwRect dstRect;
	int32 size;
	RwVideoMode vidInfo;
	RwMatrixTag invMtx;
	RwMatrixTag tmp;
	int32 calcEdgeFactor;
	int32 edgeFactor;
	int32 area;
	RwMatrixTag* matrix;
	RwV2d* vw;
	// Line 1044, Address: 0x4b8480, Func Offset: 0
	// Line 1053, Address: 0x4b8498, Func Offset: 0x18
	// Line 1044, Address: 0x4b849c, Func Offset: 0x1c
	// Line 1052, Address: 0x4b84a4, Func Offset: 0x24
	// Line 1044, Address: 0x4b84a8, Func Offset: 0x28
	// Line 1056, Address: 0x4b84c8, Func Offset: 0x48
	// Line 1046, Address: 0x4b84cc, Func Offset: 0x4c
	// Line 1056, Address: 0x4b84d0, Func Offset: 0x50
	// Line 1062, Address: 0x4b84d8, Func Offset: 0x58
	// Line 1063, Address: 0x4b84e8, Func Offset: 0x68
	// Line 1064, Address: 0x4b8500, Func Offset: 0x80
	// Line 1071, Address: 0x4b8504, Func Offset: 0x84
	// Line 1064, Address: 0x4b8508, Func Offset: 0x88
	// Line 1071, Address: 0x4b850c, Func Offset: 0x8c
	// Line 1073, Address: 0x4b8518, Func Offset: 0x98
	// Line 1079, Address: 0x4b8534, Func Offset: 0xb4
	// Line 1082, Address: 0x4b8538, Func Offset: 0xb8
	// Line 1087, Address: 0x4b8550, Func Offset: 0xd0
	// Line 1082, Address: 0x4b855c, Func Offset: 0xdc
	// Line 1087, Address: 0x4b8560, Func Offset: 0xe0
	// Line 1106, Address: 0x4b856c, Func Offset: 0xec
	// Line 1087, Address: 0x4b8570, Func Offset: 0xf0
	// Line 1105, Address: 0x4b8574, Func Offset: 0xf4
	// Line 1087, Address: 0x4b8578, Func Offset: 0xf8
	// Line 1106, Address: 0x4b8598, Func Offset: 0x118
	// Line 1113, Address: 0x4b85b0, Func Offset: 0x130
	// Line 1111, Address: 0x4b85b4, Func Offset: 0x134
	// Line 1113, Address: 0x4b85b8, Func Offset: 0x138
	// Line 1106, Address: 0x4b85bc, Func Offset: 0x13c
	// Line 1111, Address: 0x4b85cc, Func Offset: 0x14c
	// Line 1106, Address: 0x4b85d0, Func Offset: 0x150
	// Line 1113, Address: 0x4b85d4, Func Offset: 0x154
	// Line 1111, Address: 0x4b85d8, Func Offset: 0x158
	// Line 1113, Address: 0x4b85dc, Func Offset: 0x15c
	// Line 1111, Address: 0x4b85e0, Func Offset: 0x160
	// Line 1113, Address: 0x4b85f4, Func Offset: 0x174
	// Line 1111, Address: 0x4b85f8, Func Offset: 0x178
	// Line 1113, Address: 0x4b860c, Func Offset: 0x18c
	// Line 1111, Address: 0x4b8610, Func Offset: 0x190
	// Line 1113, Address: 0x4b8624, Func Offset: 0x1a4
	// Line 1122, Address: 0x4b863c, Func Offset: 0x1bc
	// Line 1113, Address: 0x4b8640, Func Offset: 0x1c0
	// Line 1122, Address: 0x4b8648, Func Offset: 0x1c8
	// Line 1113, Address: 0x4b864c, Func Offset: 0x1cc
	// Line 1128, Address: 0x4b8650, Func Offset: 0x1d0
	// Line 1113, Address: 0x4b8658, Func Offset: 0x1d8
	// Line 1128, Address: 0x4b8660, Func Offset: 0x1e0
	// Line 1135, Address: 0x4b8668, Func Offset: 0x1e8
	// Line 1139, Address: 0x4b8670, Func Offset: 0x1f0
	// Line 1142, Address: 0x4b8674, Func Offset: 0x1f4
	// Line 1140, Address: 0x4b8678, Func Offset: 0x1f8
	// Line 1139, Address: 0x4b867c, Func Offset: 0x1fc
	// Line 1142, Address: 0x4b8684, Func Offset: 0x204
	// Line 1145, Address: 0x4b8690, Func Offset: 0x210
	// Line 1154, Address: 0x4b869c, Func Offset: 0x21c
	// Line 1156, Address: 0x4b86a4, Func Offset: 0x224
	// Line 1161, Address: 0x4b86a8, Func Offset: 0x228
	// Line 1158, Address: 0x4b86ac, Func Offset: 0x22c
	// Line 1159, Address: 0x4b86b0, Func Offset: 0x230
	// Line 1156, Address: 0x4b86b4, Func Offset: 0x234
	// Line 1158, Address: 0x4b86b8, Func Offset: 0x238
	// Line 1161, Address: 0x4b86c0, Func Offset: 0x240
	// Line 1164, Address: 0x4b86c4, Func Offset: 0x244
	// Line 1177, Address: 0x4b86d8, Func Offset: 0x258
	// Line 1179, Address: 0x4b86e0, Func Offset: 0x260
	// Line 1194, Address: 0x4b8710, Func Offset: 0x290
	// Line 1195, Address: 0x4b8718, Func Offset: 0x298
	// Line 1196, Address: 0x4b875c, Func Offset: 0x2dc
	// Line 1202, Address: 0x4b8764, Func Offset: 0x2e4
	// Line 1205, Address: 0x4b8774, Func Offset: 0x2f4
	// Line 1206, Address: 0x4b877c, Func Offset: 0x2fc
	// Line 1205, Address: 0x4b8780, Func Offset: 0x300
	// Line 1204, Address: 0x4b8784, Func Offset: 0x304
	// Line 1206, Address: 0x4b8788, Func Offset: 0x308
	// Line 1209, Address: 0x4b878c, Func Offset: 0x30c
	// Line 1215, Address: 0x4b87b0, Func Offset: 0x330
	// Line 1222, Address: 0x4b87b4, Func Offset: 0x334
	// Line 1213, Address: 0x4b87b8, Func Offset: 0x338
	// Line 1215, Address: 0x4b87bc, Func Offset: 0x33c
	// Line 1212, Address: 0x4b87c0, Func Offset: 0x340
	// Line 1222, Address: 0x4b87c4, Func Offset: 0x344
	// Line 1224, Address: 0x4b87cc, Func Offset: 0x34c
	// Line 1227, Address: 0x4b87d0, Func Offset: 0x350
	// Line 1229, Address: 0x4b87e4, Func Offset: 0x364
	// Line 1227, Address: 0x4b87e8, Func Offset: 0x368
	// Line 1232, Address: 0x4b87ec, Func Offset: 0x36c
	// Line 1235, Address: 0x4b8810, Func Offset: 0x390
	// Line 1133, Address: 0x4b8828, Func Offset: 0x3a8
	// Line 1235, Address: 0x4b882c, Func Offset: 0x3ac
	// Line 1134, Address: 0x4b883c, Func Offset: 0x3bc
	// Line 1235, Address: 0x4b8844, Func Offset: 0x3c4
	// Line 1152, Address: 0x4b8848, Func Offset: 0x3c8
	// Line 1235, Address: 0x4b884c, Func Offset: 0x3cc
	// Line 1147, Address: 0x4b8854, Func Offset: 0x3d4
	// Line 1235, Address: 0x4b8858, Func Offset: 0x3d8
	// Line 1153, Address: 0x4b8864, Func Offset: 0x3e4
	// Line 1170, Address: 0x4b886c, Func Offset: 0x3ec
	// Line 1243, Address: 0x4b8878, Func Offset: 0x3f8
	// Line 1246, Address: 0x4b888c, Func Offset: 0x40c
	// Line 1247, Address: 0x4b8890, Func Offset: 0x410
	// Func End, Address: 0x4b88cc, Func Offset: 0x44c
}

// AlphaSprite__FP6RwRectUcfUi
// Start address: 0x4b88d0
void AlphaSprite(RwRect* rect, uint8 alpha, float32 z, uint32 ztest)
{
	xFXFastRaster fr;
	xColor_tag color;
	ulong32 tmp;
	// Line 968, Address: 0x4b88d0, Func Offset: 0
	// Line 969, Address: 0x4b88d8, Func Offset: 0x8
	// Line 968, Address: 0x4b88dc, Func Offset: 0xc
	// Line 969, Address: 0x4b88f8, Func Offset: 0x28
	// Line 973, Address: 0x4b8920, Func Offset: 0x50
	// Line 974, Address: 0x4b8928, Func Offset: 0x58
	// Line 977, Address: 0x4b8944, Func Offset: 0x74
	// Line 979, Address: 0x4b8948, Func Offset: 0x78
	// Line 977, Address: 0x4b894c, Func Offset: 0x7c
	// Line 979, Address: 0x4b8954, Func Offset: 0x84
	// Line 980, Address: 0x4b8960, Func Offset: 0x90
	// Line 981, Address: 0x4b8970, Func Offset: 0xa0
	// Line 984, Address: 0x4b8980, Func Offset: 0xb0
	// Line 988, Address: 0x4b898c, Func Offset: 0xbc
	// Line 993, Address: 0x4b8998, Func Offset: 0xc8
	// Line 994, Address: 0x4b89a4, Func Offset: 0xd4
	// Line 999, Address: 0x4b89b0, Func Offset: 0xe0
	// Line 994, Address: 0x4b89b4, Func Offset: 0xe4
	// Line 999, Address: 0x4b89b8, Func Offset: 0xe8
	// Line 1002, Address: 0x4b89c0, Func Offset: 0xf0
	// Line 1003, Address: 0x4b89cc, Func Offset: 0xfc
	// Line 1000, Address: 0x4b89e4, Func Offset: 0x114
	// Line 1003, Address: 0x4b89e8, Func Offset: 0x118
	// Line 1006, Address: 0x4b89ec, Func Offset: 0x11c
	// Line 1003, Address: 0x4b89f0, Func Offset: 0x120
	// Line 1004, Address: 0x4b89f4, Func Offset: 0x124
	// Line 1006, Address: 0x4b89f8, Func Offset: 0x128
	// Line 1004, Address: 0x4b89fc, Func Offset: 0x12c
	// Line 1006, Address: 0x4b8a08, Func Offset: 0x138
	// Line 1004, Address: 0x4b8a0c, Func Offset: 0x13c
	// Line 1006, Address: 0x4b8a20, Func Offset: 0x150
	// Line 1008, Address: 0x4b8a2c, Func Offset: 0x15c
	// Line 1009, Address: 0x4b8a34, Func Offset: 0x164
	// Func End, Address: 0x4b8a50, Func Offset: 0x180
}

// BlitAlphaToClut__FP8RwRasterP8RwRaster
// Start address: 0x4b8a50
int32 BlitAlphaToClut(RwRaster* src, RwRaster* dst)
{
	uint32 msb;
	uint32 lsb;
	uint32 offset;
	uint32 x;
	uint32 y;
	uint32 cbp;
	ulong32 tmp;
	ulong32 tmp1;
	// Line 714, Address: 0x4b8a50, Func Offset: 0
	// Line 739, Address: 0x4b8a68, Func Offset: 0x18
	// Line 899, Address: 0x4b8a7c, Func Offset: 0x2c
	// Line 901, Address: 0x4b8a84, Func Offset: 0x34
	// Line 757, Address: 0x4b8a8c, Func Offset: 0x3c
	// Line 901, Address: 0x4b8a98, Func Offset: 0x48
	// Line 757, Address: 0x4b8a9c, Func Offset: 0x4c
	// Line 791, Address: 0x4b8aa0, Func Offset: 0x50
	// Line 901, Address: 0x4b8aa4, Func Offset: 0x54
	// Line 764, Address: 0x4b8aa8, Func Offset: 0x58
	// Line 901, Address: 0x4b8aac, Func Offset: 0x5c
	// Line 769, Address: 0x4b8ab0, Func Offset: 0x60
	// Line 770, Address: 0x4b8ab4, Func Offset: 0x64
	// Line 901, Address: 0x4b8ab8, Func Offset: 0x68
	// Line 774, Address: 0x4b8abc, Func Offset: 0x6c
	// Line 901, Address: 0x4b8ac0, Func Offset: 0x70
	// Line 778, Address: 0x4b8ac4, Func Offset: 0x74
	// Line 774, Address: 0x4b8ac8, Func Offset: 0x78
	// Line 901, Address: 0x4b8acc, Func Offset: 0x7c
	// Line 805, Address: 0x4b8af4, Func Offset: 0xa4
	// Line 815, Address: 0x4b8af8, Func Offset: 0xa8
	// Line 805, Address: 0x4b8afc, Func Offset: 0xac
	// Line 815, Address: 0x4b8b00, Func Offset: 0xb0
	// Line 819, Address: 0x4b8b04, Func Offset: 0xb4
	// Line 901, Address: 0x4b8b08, Func Offset: 0xb8
	// Line 808, Address: 0x4b8b14, Func Offset: 0xc4
	// Line 811, Address: 0x4b8b18, Func Offset: 0xc8
	// Line 794, Address: 0x4b8b1c, Func Offset: 0xcc
	// Line 804, Address: 0x4b8b20, Func Offset: 0xd0
	// Line 807, Address: 0x4b8b24, Func Offset: 0xd4
	// Line 795, Address: 0x4b8b28, Func Offset: 0xd8
	// Line 807, Address: 0x4b8b2c, Func Offset: 0xdc
	// Line 795, Address: 0x4b8b30, Func Offset: 0xe0
	// Line 807, Address: 0x4b8b34, Func Offset: 0xe4
	// Line 795, Address: 0x4b8b38, Func Offset: 0xe8
	// Line 807, Address: 0x4b8b3c, Func Offset: 0xec
	// Line 804, Address: 0x4b8b40, Func Offset: 0xf0
	// Line 808, Address: 0x4b8b44, Func Offset: 0xf4
	// Line 804, Address: 0x4b8b48, Func Offset: 0xf8
	// Line 901, Address: 0x4b8b4c, Func Offset: 0xfc
	// Line 805, Address: 0x4b8b54, Func Offset: 0x104
	// Line 901, Address: 0x4b8b5c, Func Offset: 0x10c
	// Line 805, Address: 0x4b8b60, Func Offset: 0x110
	// Line 823, Address: 0x4b8b64, Func Offset: 0x114
	// Line 805, Address: 0x4b8b68, Func Offset: 0x118
	// Line 901, Address: 0x4b8b6c, Func Offset: 0x11c
	// Line 804, Address: 0x4b8b74, Func Offset: 0x124
	// Line 901, Address: 0x4b8b7c, Func Offset: 0x12c
	// Line 825, Address: 0x4b8b98, Func Offset: 0x148
	// Line 901, Address: 0x4b8b9c, Func Offset: 0x14c
	// Line 825, Address: 0x4b8ba0, Func Offset: 0x150
	// Line 901, Address: 0x4b8ba4, Func Offset: 0x154
	// Line 831, Address: 0x4b8ba8, Func Offset: 0x158
	// Line 835, Address: 0x4b8bac, Func Offset: 0x15c
	// Line 827, Address: 0x4b8bb0, Func Offset: 0x160
	// Line 901, Address: 0x4b8bb4, Func Offset: 0x164
	// Line 853, Address: 0x4b8bb8, Func Offset: 0x168
	// Line 839, Address: 0x4b8bbc, Func Offset: 0x16c
	// Line 824, Address: 0x4b8bc0, Func Offset: 0x170
	// Line 843, Address: 0x4b8bc4, Func Offset: 0x174
	// Line 901, Address: 0x4b8bc8, Func Offset: 0x178
	// Line 859, Address: 0x4b8bd4, Func Offset: 0x184
	// Line 901, Address: 0x4b8bd8, Func Offset: 0x188
	// Line 863, Address: 0x4b8bf0, Func Offset: 0x1a0
	// Line 901, Address: 0x4b8bf4, Func Offset: 0x1a4
	// Line 863, Address: 0x4b8bf8, Func Offset: 0x1a8
	// Line 873, Address: 0x4b8bfc, Func Offset: 0x1ac
	// Line 863, Address: 0x4b8c00, Func Offset: 0x1b0
	// Line 864, Address: 0x4b8c04, Func Offset: 0x1b4
	// Line 901, Address: 0x4b8c08, Func Offset: 0x1b8
	// Line 869, Address: 0x4b8c18, Func Offset: 0x1c8
	// Line 901, Address: 0x4b8c1c, Func Offset: 0x1cc
	// Line 883, Address: 0x4b8c20, Func Offset: 0x1d0
	// Line 873, Address: 0x4b8c24, Func Offset: 0x1d4
	// Line 901, Address: 0x4b8c28, Func Offset: 0x1d8
	// Line 883, Address: 0x4b8c2c, Func Offset: 0x1dc
	// Line 873, Address: 0x4b8c30, Func Offset: 0x1e0
	// Line 901, Address: 0x4b8c34, Func Offset: 0x1e4
	// Line 883, Address: 0x4b8c38, Func Offset: 0x1e8
	// Line 873, Address: 0x4b8c3c, Func Offset: 0x1ec
	// Line 883, Address: 0x4b8c40, Func Offset: 0x1f0
	// Line 874, Address: 0x4b8c44, Func Offset: 0x1f4
	// Line 883, Address: 0x4b8c48, Func Offset: 0x1f8
	// Line 901, Address: 0x4b8c4c, Func Offset: 0x1fc
	// Line 883, Address: 0x4b8c58, Func Offset: 0x208
	// Line 901, Address: 0x4b8c5c, Func Offset: 0x20c
	// Line 888, Address: 0x4b8c70, Func Offset: 0x220
	// Line 901, Address: 0x4b8c78, Func Offset: 0x228
	// Line 902, Address: 0x4b8ca8, Func Offset: 0x258
	// Func End, Address: 0x4b8cbc, Func Offset: 0x26c
}

// BlitScaledAlphaRasterToRaster__FP8RwRasterP6RwRectP8RwRasterP6RwRect
// Start address: 0x4b8cc0
int32 BlitScaledAlphaRasterToRaster(RwRaster* srcRaster, RwRect* srcRect, RwRaster* dstRaster, RwRect* dstRect)
{
	ulong32 tmp;
	ulong32 tmp1;
	uint32 msb;
	uint32 lsb;
	// Line 548, Address: 0x4b8cc0, Func Offset: 0
	// Line 572, Address: 0x4b8cc4, Func Offset: 0x4
	// Line 548, Address: 0x4b8cc8, Func Offset: 0x8
	// Line 572, Address: 0x4b8ce8, Func Offset: 0x28
	// Line 578, Address: 0x4b8d08, Func Offset: 0x48
	// Line 704, Address: 0x4b8d1c, Func Offset: 0x5c
	// Line 706, Address: 0x4b8d24, Func Offset: 0x64
	// Line 575, Address: 0x4b8d2c, Func Offset: 0x6c
	// Line 596, Address: 0x4b8d38, Func Offset: 0x78
	// Line 706, Address: 0x4b8d44, Func Offset: 0x84
	// Line 596, Address: 0x4b8d48, Func Offset: 0x88
	// Line 621, Address: 0x4b8d4c, Func Offset: 0x8c
	// Line 706, Address: 0x4b8d50, Func Offset: 0x90
	// Line 603, Address: 0x4b8d54, Func Offset: 0x94
	// Line 706, Address: 0x4b8d58, Func Offset: 0x98
	// Line 608, Address: 0x4b8d5c, Func Offset: 0x9c
	// Line 609, Address: 0x4b8d60, Func Offset: 0xa0
	// Line 706, Address: 0x4b8d64, Func Offset: 0xa4
	// Line 613, Address: 0x4b8d68, Func Offset: 0xa8
	// Line 706, Address: 0x4b8d6c, Func Offset: 0xac
	// Line 617, Address: 0x4b8d70, Func Offset: 0xb0
	// Line 613, Address: 0x4b8d74, Func Offset: 0xb4
	// Line 706, Address: 0x4b8d78, Func Offset: 0xb8
	// Line 623, Address: 0x4b8da0, Func Offset: 0xe0
	// Line 625, Address: 0x4b8da4, Func Offset: 0xe4
	// Line 623, Address: 0x4b8da8, Func Offset: 0xe8
	// Line 625, Address: 0x4b8dac, Func Offset: 0xec
	// Line 626, Address: 0x4b8db0, Func Offset: 0xf0
	// Line 625, Address: 0x4b8db4, Func Offset: 0xf4
	// Line 634, Address: 0x4b8db8, Func Offset: 0xf8
	// Line 706, Address: 0x4b8dbc, Func Offset: 0xfc
	// Line 638, Address: 0x4b8dc0, Func Offset: 0x100
	// Line 706, Address: 0x4b8dc4, Func Offset: 0x104
	// Line 624, Address: 0x4b8dd4, Func Offset: 0x114
	// Line 623, Address: 0x4b8dd8, Func Offset: 0x118
	// Line 624, Address: 0x4b8ddc, Func Offset: 0x11c
	// Line 622, Address: 0x4b8de0, Func Offset: 0x120
	// Line 624, Address: 0x4b8de4, Func Offset: 0x124
	// Line 622, Address: 0x4b8dec, Func Offset: 0x12c
	// Line 623, Address: 0x4b8df0, Func Offset: 0x130
	// Line 624, Address: 0x4b8df4, Func Offset: 0x134
	// Line 706, Address: 0x4b8df8, Func Offset: 0x138
	// Line 630, Address: 0x4b8e2c, Func Offset: 0x16c
	// Line 706, Address: 0x4b8e38, Func Offset: 0x178
	// Line 640, Address: 0x4b8e60, Func Offset: 0x1a0
	// Line 706, Address: 0x4b8e64, Func Offset: 0x1a4
	// Line 640, Address: 0x4b8e68, Func Offset: 0x1a8
	// Line 706, Address: 0x4b8e6c, Func Offset: 0x1ac
	// Line 645, Address: 0x4b8e70, Func Offset: 0x1b0
	// Line 649, Address: 0x4b8e74, Func Offset: 0x1b4
	// Line 641, Address: 0x4b8e78, Func Offset: 0x1b8
	// Line 706, Address: 0x4b8e7c, Func Offset: 0x1bc
	// Line 663, Address: 0x4b8e80, Func Offset: 0x1c0
	// Line 659, Address: 0x4b8e84, Func Offset: 0x1c4
	// Line 639, Address: 0x4b8e88, Func Offset: 0x1c8
	// Line 663, Address: 0x4b8e8c, Func Offset: 0x1cc
	// Line 706, Address: 0x4b8e90, Func Offset: 0x1d0
	// Line 663, Address: 0x4b8e98, Func Offset: 0x1d8
	// Line 706, Address: 0x4b8e9c, Func Offset: 0x1dc
	// Line 664, Address: 0x4b8ea4, Func Offset: 0x1e4
	// Line 706, Address: 0x4b8ea8, Func Offset: 0x1e8
	// Line 696, Address: 0x4b8eb4, Func Offset: 0x1f4
	// Line 670, Address: 0x4b8ebc, Func Offset: 0x1fc
	// Line 706, Address: 0x4b8ec0, Func Offset: 0x200
	// Line 677, Address: 0x4b8ec4, Func Offset: 0x204
	// Line 706, Address: 0x4b8ec8, Func Offset: 0x208
	// Line 653, Address: 0x4b8ee4, Func Offset: 0x224
	// Line 706, Address: 0x4b8ee8, Func Offset: 0x228
	// Line 653, Address: 0x4b8eec, Func Offset: 0x22c
	// Line 706, Address: 0x4b8ef8, Func Offset: 0x238
	// Line 653, Address: 0x4b8efc, Func Offset: 0x23c
	// Line 706, Address: 0x4b8f0c, Func Offset: 0x24c
	// Line 653, Address: 0x4b8f10, Func Offset: 0x250
	// Line 706, Address: 0x4b8f14, Func Offset: 0x254
	// Line 668, Address: 0x4b8f48, Func Offset: 0x288
	// Line 706, Address: 0x4b8f50, Func Offset: 0x290
	// Line 675, Address: 0x4b8f74, Func Offset: 0x2b4
	// Line 706, Address: 0x4b8f7c, Func Offset: 0x2bc
	// Line 684, Address: 0x4b8fb8, Func Offset: 0x2f8
	// Line 706, Address: 0x4b8fc0, Func Offset: 0x300
	// Line 691, Address: 0x4b8ff0, Func Offset: 0x330
	// Line 706, Address: 0x4b8ff4, Func Offset: 0x334
	// Line 691, Address: 0x4b8ff8, Func Offset: 0x338
	// Line 706, Address: 0x4b8ffc, Func Offset: 0x33c
	// Line 707, Address: 0x4b9028, Func Offset: 0x368
	// Func End, Address: 0x4b9044, Func Offset: 0x384
}

// iScrFxCameraDestroyed__FP8RwCamera
// Start address: 0x4b9050
int32 iScrFxCameraDestroyed()
{
	// Line 488, Address: 0x4b9050, Func Offset: 0
	// Line 489, Address: 0x4b9060, Func Offset: 0x10
	// Line 491, Address: 0x4b9068, Func Offset: 0x18
	// Line 492, Address: 0x4b9070, Func Offset: 0x20
	// Line 493, Address: 0x4b9074, Func Offset: 0x24
	// Line 492, Address: 0x4b9078, Func Offset: 0x28
	// Line 497, Address: 0x4b907c, Func Offset: 0x2c
	// Func End, Address: 0x4b9088, Func Offset: 0x38
}

// iScrFxMotionBlurOpen__FP8RwCamera
// Start address: 0x4b9090
int32 iScrFxMotionBlurOpen(RwCamera* camera)
{
	RwRect rect;
	// Line 442, Address: 0x4b9090, Func Offset: 0
	// Line 443, Address: 0x4b9094, Func Offset: 0x4
	// Line 442, Address: 0x4b9098, Func Offset: 0x8
	// Line 443, Address: 0x4b909c, Func Offset: 0xc
	// Line 442, Address: 0x4b90a0, Func Offset: 0x10
	// Line 443, Address: 0x4b90a4, Func Offset: 0x14
	// Line 447, Address: 0x4b90c8, Func Offset: 0x38
	// Line 443, Address: 0x4b90cc, Func Offset: 0x3c
	// Line 447, Address: 0x4b90d0, Func Offset: 0x40
	// Line 448, Address: 0x4b90dc, Func Offset: 0x4c
	// Line 450, Address: 0x4b90e4, Func Offset: 0x54
	// Line 456, Address: 0x4b90f4, Func Offset: 0x64
	// Line 458, Address: 0x4b910c, Func Offset: 0x7c
	// Line 460, Address: 0x4b9114, Func Offset: 0x84
	// Line 482, Address: 0x4b912c, Func Offset: 0x9c
	// Line 484, Address: 0x4b9134, Func Offset: 0xa4
	// Line 453, Address: 0x4b9140, Func Offset: 0xb0
	// Line 484, Address: 0x4b914c, Func Offset: 0xbc
	// Line 467, Address: 0x4b915c, Func Offset: 0xcc
	// Line 484, Address: 0x4b9168, Func Offset: 0xd8
	// Line 474, Address: 0x4b9174, Func Offset: 0xe4
	// Line 485, Address: 0x4b9178, Func Offset: 0xe8
	// Func End, Address: 0x4b9188, Func Offset: 0xf8
}

// iCameraOverlayRender__FP8RwCameraP8RwRaster6RwRGBA
// Start address: 0x4b9190
void iCameraOverlayRender(RwRaster* ras, RwRGBA col)
{
	RwRect rect;
	// Line 402, Address: 0x4b9190, Func Offset: 0
	// Line 406, Address: 0x4b91a4, Func Offset: 0x14
	// Line 402, Address: 0x4b91a8, Func Offset: 0x18
	// Line 406, Address: 0x4b91b4, Func Offset: 0x24
	// Line 408, Address: 0x4b9500, Func Offset: 0x370
	// Line 406, Address: 0x4b9504, Func Offset: 0x374
	// Line 408, Address: 0x4b9508, Func Offset: 0x378
	// Line 417, Address: 0x4b9530, Func Offset: 0x3a0
	// Line 408, Address: 0x4b9534, Func Offset: 0x3a4
	// Line 417, Address: 0x4b9538, Func Offset: 0x3a8
	// Line 418, Address: 0x4b9544, Func Offset: 0x3b4
	// Line 419, Address: 0x4b9554, Func Offset: 0x3c4
	// Line 420, Address: 0x4b9564, Func Offset: 0x3d4
	// Line 421, Address: 0x4b9574, Func Offset: 0x3e4
	// Line 422, Address: 0x4b9584, Func Offset: 0x3f4
	// Line 423, Address: 0x4b9594, Func Offset: 0x404
	// Line 424, Address: 0x4b95a4, Func Offset: 0x414
	// Line 426, Address: 0x4b95b4, Func Offset: 0x424
	// Line 428, Address: 0x4b95dc, Func Offset: 0x44c
	// Line 429, Address: 0x4b95ec, Func Offset: 0x45c
	// Line 430, Address: 0x4b95fc, Func Offset: 0x46c
	// Line 431, Address: 0x4b960c, Func Offset: 0x47c
	// Line 432, Address: 0x4b961c, Func Offset: 0x48c
	// Line 433, Address: 0x4b962c, Func Offset: 0x49c
	// Line 434, Address: 0x4b963c, Func Offset: 0x4ac
	// Line 437, Address: 0x4b964c, Func Offset: 0x4bc
	// Func End, Address: 0x4b9660, Func Offset: 0x4d0
}

// iScrFxMotionBlurCreateImmediateModeData__FP8RwCameraP6RwRect
// Start address: 0x4b9660
void iScrFxMotionBlurCreateImmediateModeData(RwCamera* camera, RwRect* rect)
{
	float32 w;
	float32 h;
	float32 xSize;
	float32 U;
	float32 V;
	float32 u;
	RwSky2DVertex* ver;
	float32 nearz;
	float32 oocameraNearClipPlane;
	float32 ustep;
	float32 vstep;
	// Line 288, Address: 0x4b9660, Func Offset: 0
	// Line 303, Address: 0x4b9664, Func Offset: 0x4
	// Line 289, Address: 0x4b9668, Func Offset: 0x8
	// Line 303, Address: 0x4b966c, Func Offset: 0xc
	// Line 288, Address: 0x4b9670, Func Offset: 0x10
	// Line 303, Address: 0x4b9674, Func Offset: 0x14
	// Line 307, Address: 0x4b9688, Func Offset: 0x28
	// Line 317, Address: 0x4b968c, Func Offset: 0x2c
	// Line 307, Address: 0x4b9690, Func Offset: 0x30
	// Line 320, Address: 0x4b9694, Func Offset: 0x34
	// Line 318, Address: 0x4b9698, Func Offset: 0x38
	// Line 317, Address: 0x4b969c, Func Offset: 0x3c
	// Line 307, Address: 0x4b96a0, Func Offset: 0x40
	// Line 327, Address: 0x4b96a4, Func Offset: 0x44
	// Line 308, Address: 0x4b96a8, Func Offset: 0x48
	// Line 307, Address: 0x4b96ac, Func Offset: 0x4c
	// Line 337, Address: 0x4b96b0, Func Offset: 0x50
	// Line 327, Address: 0x4b96b4, Func Offset: 0x54
	// Line 308, Address: 0x4b96f4, Func Offset: 0x94
	// Line 309, Address: 0x4b96fc, Func Offset: 0x9c
	// Line 318, Address: 0x4b9700, Func Offset: 0xa0
	// Line 308, Address: 0x4b9704, Func Offset: 0xa4
	// Line 318, Address: 0x4b9708, Func Offset: 0xa8
	// Line 320, Address: 0x4b970c, Func Offset: 0xac
	// Line 324, Address: 0x4b9710, Func Offset: 0xb0
	// Line 327, Address: 0x4b9714, Func Offset: 0xb4
	// Line 320, Address: 0x4b9720, Func Offset: 0xc0
	// Line 326, Address: 0x4b9724, Func Offset: 0xc4
	// Line 327, Address: 0x4b9728, Func Offset: 0xc8
	// Line 325, Address: 0x4b9738, Func Offset: 0xd8
	// Line 327, Address: 0x4b973c, Func Offset: 0xdc
	// Line 336, Address: 0x4b974c, Func Offset: 0xec
	// Line 337, Address: 0x4b9750, Func Offset: 0xf0
	// Line 371, Address: 0x4b9754, Func Offset: 0xf4
	// Line 382, Address: 0x4b9758, Func Offset: 0xf8
	// Line 337, Address: 0x4b9760, Func Offset: 0x100
	// Line 349, Address: 0x4b9768, Func Offset: 0x108
	// Line 360, Address: 0x4b976c, Func Offset: 0x10c
	// Line 361, Address: 0x4b9778, Func Offset: 0x118
	// Line 372, Address: 0x4b977c, Func Offset: 0x11c
	// Line 350, Address: 0x4b9784, Func Offset: 0x124
	// Line 383, Address: 0x4b9788, Func Offset: 0x128
	// Line 351, Address: 0x4b9794, Func Offset: 0x134
	// Line 362, Address: 0x4b9798, Func Offset: 0x138
	// Line 373, Address: 0x4b97a4, Func Offset: 0x144
	// Line 384, Address: 0x4b97a8, Func Offset: 0x148
	// Line 352, Address: 0x4b97b4, Func Offset: 0x154
	// Line 385, Address: 0x4b97b8, Func Offset: 0x158
	// Line 363, Address: 0x4b97bc, Func Offset: 0x15c
	// Line 396, Address: 0x4b97c0, Func Offset: 0x160
	// Func End, Address: 0x4b97c8, Func Offset: 0x168
}

// iScrFxCameraEndScene__FP8RwCamera
// Start address: 0x4b97d0
void iScrFxCameraEndScene(RwCamera* pCamera)
{
	// Line 245, Address: 0x4b97d0, Func Offset: 0
	// Line 251, Address: 0x4b97d8, Func Offset: 0x8
	// Line 253, Address: 0x4b97f0, Func Offset: 0x20
	// Line 255, Address: 0x4b981c, Func Offset: 0x4c
	// Func End, Address: 0x4b9828, Func Offset: 0x58
}

// iScrFxCameraCreated__FP8RwCamera
// Start address: 0x4b9830
void iScrFxCameraCreated(RwCamera* pCamera)
{
	// Line 224, Address: 0x4b9830, Func Offset: 0
	// Line 225, Address: 0x4b983c, Func Offset: 0xc
	// Line 230, Address: 0x4b9840, Func Offset: 0x10
	// Line 225, Address: 0x4b9844, Func Offset: 0x14
	// Line 230, Address: 0x4b9848, Func Offset: 0x18
	// Line 231, Address: 0x4b984c, Func Offset: 0x1c
	// Line 232, Address: 0x4b9854, Func Offset: 0x24
	// Line 231, Address: 0x4b9858, Func Offset: 0x28
	// Line 232, Address: 0x4b985c, Func Offset: 0x2c
	// Line 233, Address: 0x4b9860, Func Offset: 0x30
	// Line 232, Address: 0x4b9864, Func Offset: 0x34
	// Line 234, Address: 0x4b9868, Func Offset: 0x38
	// Line 233, Address: 0x4b986c, Func Offset: 0x3c
	// Line 234, Address: 0x4b9870, Func Offset: 0x40
	// Line 235, Address: 0x4b9874, Func Offset: 0x44
	// Line 238, Address: 0x4b987c, Func Offset: 0x4c
	// Func End, Address: 0x4b9884, Func Offset: 0x54
}

// iCameraSetBlurriness__Ff
// Start address: 0x4b9890
void iCameraSetBlurriness(float32 amount)
{
	// Line 211, Address: 0x4b9890, Func Offset: 0
	// Line 214, Address: 0x4b98a4, Func Offset: 0x14
	// Line 216, Address: 0x4b98bc, Func Offset: 0x2c
	// Line 215, Address: 0x4b98c0, Func Offset: 0x30
	// Line 216, Address: 0x4b98c4, Func Offset: 0x34
	// Line 218, Address: 0x4b98f4, Func Offset: 0x64
	// Line 211, Address: 0x4b98fc, Func Offset: 0x6c
	// Line 218, Address: 0x4b9904, Func Offset: 0x74
	// Func End, Address: 0x4b990c, Func Offset: 0x7c
}

// iCameraMotionBlurActivate__FUi
// Start address: 0x4b9910
void iCameraMotionBlurActivate(uint32 activate)
{
	// Line 207, Address: 0x4b9910, Func Offset: 0
	// Func End, Address: 0x4b9918, Func Offset: 0x8
}

// iScrFxDrawBox__FffffUcUcUcUcb
// Start address: 0x4b9920
void iScrFxDrawBox(float32 x1, float32 y1, float32 x2, float32 y2, uint8 red, uint8 green, uint8 blue, uint8 alpha, uint8 clear_z_to_far)
{
	float32 farz;
	int32 old_z_write;
	uint16 indices[4];
	RwSky2DVertex v[4];
	// Line 109, Address: 0x4b9920, Func Offset: 0
	// Line 114, Address: 0x4b9924, Func Offset: 0x4
	// Line 109, Address: 0x4b9928, Func Offset: 0x8
	// Line 114, Address: 0x4b9930, Func Offset: 0x10
	// Line 115, Address: 0x4b9934, Func Offset: 0x14
	// Line 116, Address: 0x4b993c, Func Offset: 0x1c
	// Line 117, Address: 0x4b9944, Func Offset: 0x24
	// Line 118, Address: 0x4b994c, Func Offset: 0x2c
	// Line 119, Address: 0x4b9954, Func Offset: 0x34
	// Line 120, Address: 0x4b995c, Func Offset: 0x3c
	// Line 121, Address: 0x4b9964, Func Offset: 0x44
	// Line 123, Address: 0x4b9968, Func Offset: 0x48
	// Line 124, Address: 0x4b9a38, Func Offset: 0x118
	// Line 125, Address: 0x4b9b08, Func Offset: 0x1e8
	// Line 126, Address: 0x4b9bd8, Func Offset: 0x2b8
	// Line 129, Address: 0x4b9ca8, Func Offset: 0x388
	// Line 126, Address: 0x4b9cac, Func Offset: 0x38c
	// Line 129, Address: 0x4b9cb0, Func Offset: 0x390
	// Line 154, Address: 0x4b9cbc, Func Offset: 0x39c
	// Line 156, Address: 0x4b9ce0, Func Offset: 0x3c0
	// Line 141, Address: 0x4b9cfc, Func Offset: 0x3dc
	// Line 156, Address: 0x4b9d00, Func Offset: 0x3e0
	// Line 144, Address: 0x4b9d24, Func Offset: 0x404
	// Line 156, Address: 0x4b9d28, Func Offset: 0x408
	// Line 147, Address: 0x4b9d3c, Func Offset: 0x41c
	// Line 156, Address: 0x4b9d40, Func Offset: 0x420
	// Line 147, Address: 0x4b9d4c, Func Offset: 0x42c
	// Line 156, Address: 0x4b9d50, Func Offset: 0x430
	// Line 151, Address: 0x4b9d6c, Func Offset: 0x44c
	// Line 156, Address: 0x4b9d74, Func Offset: 0x454
	// Func End, Address: 0x4b9d80, Func Offset: 0x460
}

// iScrFxEnd__Fv
// Start address: 0x4b9d80
void iScrFxEnd()
{
	// Line 81, Address: 0x4b9d80, Func Offset: 0
	// Line 84, Address: 0x4b9d84, Func Offset: 0x4
	// Line 81, Address: 0x4b9d88, Func Offset: 0x8
	// Line 84, Address: 0x4b9d90, Func Offset: 0x10
	// Line 81, Address: 0x4b9d94, Func Offset: 0x14
	// Line 84, Address: 0x4b9d9c, Func Offset: 0x1c
	// Line 85, Address: 0x4b9da8, Func Offset: 0x28
	// Line 86, Address: 0x4b9dbc, Func Offset: 0x3c
	// Line 87, Address: 0x4b9dd0, Func Offset: 0x50
	// Line 89, Address: 0x4b9de4, Func Offset: 0x64
	// Line 90, Address: 0x4b9df8, Func Offset: 0x78
	// Line 91, Address: 0x4b9e0c, Func Offset: 0x8c
	// Line 92, Address: 0x4b9e20, Func Offset: 0xa0
	// Line 103, Address: 0x4b9e34, Func Offset: 0xb4
	// Func End, Address: 0x4b9e44, Func Offset: 0xc4
}

// iScrFxBegin__Fv
// Start address: 0x4b9e50
void iScrFxBegin()
{
	// Line 49, Address: 0x4b9e50, Func Offset: 0
	// Line 51, Address: 0x4b9e54, Func Offset: 0x4
	// Line 49, Address: 0x4b9e58, Func Offset: 0x8
	// Line 51, Address: 0x4b9e5c, Func Offset: 0xc
	// Line 49, Address: 0x4b9e60, Func Offset: 0x10
	// Line 51, Address: 0x4b9e6c, Func Offset: 0x1c
	// Line 52, Address: 0x4b9e78, Func Offset: 0x28
	// Line 53, Address: 0x4b9e8c, Func Offset: 0x3c
	// Line 54, Address: 0x4b9ea0, Func Offset: 0x50
	// Line 56, Address: 0x4b9eb4, Func Offset: 0x64
	// Line 57, Address: 0x4b9ec8, Func Offset: 0x78
	// Line 58, Address: 0x4b9edc, Func Offset: 0x8c
	// Line 59, Address: 0x4b9ef0, Func Offset: 0xa0
	// Line 63, Address: 0x4b9f08, Func Offset: 0xb8
	// Line 59, Address: 0x4b9f0c, Func Offset: 0xbc
	// Line 63, Address: 0x4b9f10, Func Offset: 0xc0
	// Line 64, Address: 0x4b9f1c, Func Offset: 0xcc
	// Line 65, Address: 0x4b9f2c, Func Offset: 0xdc
	// Line 66, Address: 0x4b9f3c, Func Offset: 0xec
	// Line 67, Address: 0x4b9f4c, Func Offset: 0xfc
	// Line 68, Address: 0x4b9f5c, Func Offset: 0x10c
	// Line 69, Address: 0x4b9f6c, Func Offset: 0x11c
	// Line 70, Address: 0x4b9f7c, Func Offset: 0x12c
	// Line 73, Address: 0x4b9f8c, Func Offset: 0x13c
	// Line 75, Address: 0x4b9f9c, Func Offset: 0x14c
	// Func End, Address: 0x4b9fac, Func Offset: 0x15c
}

// iScrFxInit__Fv
// Start address: 0x4b9fb0
void iScrFxInit()
{
	// Line 27, Address: 0x4b9fb0, Func Offset: 0
	// Func End, Address: 0x4b9fb8, Func Offset: 0x8
}

