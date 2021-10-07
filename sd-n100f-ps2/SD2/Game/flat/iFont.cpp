typedef struct RwV3d;
typedef struct RwRGBA;
typedef struct RwSky2DVertex;
typedef enum RwTextureFilterMode;
typedef struct RwTexture;
typedef struct RwLinkList;
typedef struct xFontGlobals_t;
typedef struct RwRaster;
typedef struct RwTexDictionary;
typedef struct xFontBox;
typedef struct RxRenderStateVector;
typedef enum RwFogType;
typedef struct iColor_tag;
typedef struct xFontInfo;
typedef struct RwImage;
typedef enum RwBlendFunction;
typedef struct iFontInfo;
typedef struct iFontSpacing;
typedef struct RwSky2DVertexFields;
typedef enum RwTextureAddressMode;
typedef struct RwLLLink;
typedef struct RwRGBAReal;
typedef struct RwSky2DVertexAlignmentOverlay;
typedef enum RwShadeMode;
typedef struct RwObject;


typedef int8 type_0[32];
typedef int8 type_1[32];
typedef xFontInfo type_2[4];
typedef RwSky2DVertex type_3[4];
typedef uint8 type_4[128];
typedef iFontSpacing type_5[128];
typedef uint32 type_6[4096];
typedef <unknown fundamental type (0xa510)> type_7[4];

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct RwSky2DVertex
{
	RwSky2DVertexAlignmentOverlay u;
};

enum RwTextureFilterMode
{
	rwFILTERNAFILTERMODE,
	rwFILTERNEAREST,
	rwFILTERLINEAR,
	rwFILTERMIPNEAREST,
	rwFILTERMIPLINEAR,
	rwFILTERLINEARMIPNEAREST,
	rwFILTERLINEARMIPLINEAR,
	rwTEXTUREFILTERMODEFORCEENUMSIZEINT = 0x7fffffff
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	int8 name[32];
	int8 mask[32];
	int32 refCount;
	RwTextureFilterMode filtering;
	RwTextureAddressMode addressingU;
	RwTextureAddressMode addressingV;
};

struct RwLinkList
{
	RwLLLink link;
};

struct xFontGlobals_t
{
	float32 dpx;
	float32 dpy;
	uint32 draw;
	float32 aspect_ratio;
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

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct xFontBox
{
	int32 flags;
	float32 x;
	float32 y;
	float32 w;
	float32 h;
	uint32 font;
	iColor_tag color;
	iColor_tag saved_color;
	float32 draw_width;
	float32 draw_height;
	float32 x_spacing;
	float32 y_spacing;
	float32 depth;
	float32 inset_left;
	float32 inset_right;
	float32 inset_top;
	float32 inset_bottom;
	int8* text;
	iColor_tag backdrop_color;
};

struct RxRenderStateVector
{
	uint32 Flags;
	RwShadeMode ShadeMode;
	RwBlendFunction SrcBlend;
	RwBlendFunction DestBlend;
	RwRaster* TextureRaster;
	RwTextureAddressMode AddressModeU;
	RwTextureAddressMode AddressModeV;
	RwTextureFilterMode FilterMode;
	RwRGBA BorderColor;
	RwFogType FogType;
	RwRGBA FogColor;
	uint8* FogTable;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct iColor_tag
{
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 a;
};

struct xFontInfo
{
	uint16 id;
	uint16 flags;
	uint16 char_width;
	uint16 char_height;
	float32 oo_tex_width;
	float32 oo_tex_height;
	float32 u;
	float32 v;
	uint16 layout;
	uint16 pad;
	uint8 lookup[128];
	iFontSpacing pspc[128];
	int8* characters;
	iFontInfo ps;
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

enum RwBlendFunction
{
	rwBLENDNABLEND,
	rwBLENDZERO,
	rwBLENDONE,
	rwBLENDSRCCOLOR,
	rwBLENDINVSRCCOLOR,
	rwBLENDSRCALPHA,
	rwBLENDINVSRCALPHA,
	rwBLENDDESTALPHA,
	rwBLENDINVDESTALPHA,
	rwBLENDDESTCOLOR,
	rwBLENDINVDESTCOLOR,
	rwBLENDSRCALPHASAT,
	rwBLENDFUNCTIONFORCEENUMSIZEINT = 0x7fffffff
};

struct iFontInfo
{
	RwTexture* texture;
	RwRaster* raster;
};

struct iFontSpacing
{
	uint8 ox;
	uint8 dx;
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

enum RwTextureAddressMode
{
	rwTEXTUREADDRESSNATEXTUREADDRESS,
	rwTEXTUREADDRESSWRAP,
	rwTEXTUREADDRESSMIRROR,
	rwTEXTUREADDRESSCLAMP,
	rwTEXTUREADDRESSBORDER,
	rwTEXTUREADDRESSMODEFORCEENUMSIZEINT = 0x7fffffff
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct RwSky2DVertexAlignmentOverlay
{
	union
	{
		RwSky2DVertexFields els;
		<unknown fundamental type (0xa510)> qWords[4];
	};
};

enum RwShadeMode
{
	rwSHADEMODENASHADEMODE,
	rwSHADEMODEFLAT,
	rwSHADEMODEGOURAUD,
	rwSHADEMODEFORCEENUMSIZEINT = 0x7fffffff
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

RwSky2DVertex* im2d_vert;
int32 im2d_vert_ct;
float32 gFontWiggle;
float32 gFontWiggleTime;
RxRenderStateVector rsv;
float32 rcz;
float32 nsz;
RwRaster* sRaster;
RwRaster* sButtonRaster;
uint32 gDBfont;
xFontInfo gFontList[4];
xFontGlobals_t gFontGlobals;
uint32 ourGlobals[4096];

void iFontInit();
uint32 iFontInitFont(RwTexture* texture, int8* characters, uint32 layout, uint16 u, uint16 v, uint16 char_width, uint16 char_height, uint16 flags);
void iFontDrawChar(int8 c, iColor_tag color, xFontBox* box);
void iFontDrawBackdrop(xFontBox* box);
void iFontRestoreRenderState();
void iFontSetCharRenderState(xFontBox* box);
void iFontSetBackdropRenderState();
void iFontSaveRenderState();

// iFontInit__Fv
// Start address: 0x199560
void iFontInit()
{
	RwTexture* button_texture;
	RwTexture* font_texture;
	uint32 id;
	// Line 585, Address: 0x199560, Func Offset: 0
	// Line 590, Address: 0x199564, Func Offset: 0x4
	// Line 585, Address: 0x199568, Func Offset: 0x8
	// Line 590, Address: 0x19956c, Func Offset: 0xc
	// Line 593, Address: 0x199588, Func Offset: 0x28
	// Line 600, Address: 0x1995b0, Func Offset: 0x50
	// Line 607, Address: 0x1995d8, Func Offset: 0x78
	// Line 613, Address: 0x199600, Func Offset: 0xa0
	// Line 615, Address: 0x199604, Func Offset: 0xa4
	// Line 617, Address: 0x19961c, Func Offset: 0xbc
	// Line 618, Address: 0x199624, Func Offset: 0xc4
	// Func End, Address: 0x199634, Func Offset: 0xd4
}

// iFontInitFont__FP9RwTexturePCcUiUsUsUsUsUs
// Start address: 0x199640
uint32 iFontInitFont(RwTexture* texture, int8* characters, uint32 layout, uint16 u, uint16 v, uint16 char_width, uint16 char_height, uint16 flags)
{
	uint32 ov;
	uint32 ou;
	uint8 maxu;
	uint8 minu;
	uint8 vv;
	uint8 uu;
	uint8 c;
	uint8* imp;
	RwImage* image;
	uint8 val;
	uint32 tex_height;
	uint32 tex_width;
	xFontInfo* font;
	int8 t;
	int8* s;
	uint32 id;
	// Line 473, Address: 0x199640, Func Offset: 0
	// Line 480, Address: 0x199678, Func Offset: 0x38
	// Line 484, Address: 0x19967c, Func Offset: 0x3c
	// Line 480, Address: 0x199690, Func Offset: 0x50
	// Line 484, Address: 0x199698, Func Offset: 0x58
	// Line 480, Address: 0x19969c, Func Offset: 0x5c
	// Line 481, Address: 0x1996a0, Func Offset: 0x60
	// Line 485, Address: 0x1996a8, Func Offset: 0x68
	// Line 487, Address: 0x1996b4, Func Offset: 0x74
	// Line 492, Address: 0x1996c8, Func Offset: 0x88
	// Line 493, Address: 0x1996cc, Func Offset: 0x8c
	// Line 497, Address: 0x1996d4, Func Offset: 0x94
	// Line 493, Address: 0x1996e0, Func Offset: 0xa0
	// Line 494, Address: 0x1996e4, Func Offset: 0xa4
	// Line 497, Address: 0x1996ec, Func Offset: 0xac
	// Line 498, Address: 0x1996f4, Func Offset: 0xb4
	// Line 499, Address: 0x1996f8, Func Offset: 0xb8
	// Line 500, Address: 0x1996fc, Func Offset: 0xbc
	// Line 501, Address: 0x199708, Func Offset: 0xc8
	// Line 503, Address: 0x199718, Func Offset: 0xd8
	// Line 504, Address: 0x199738, Func Offset: 0xf8
	// Line 505, Address: 0x199740, Func Offset: 0x100
	// Line 506, Address: 0x19974c, Func Offset: 0x10c
	// Line 508, Address: 0x199750, Func Offset: 0x110
	// Line 507, Address: 0x199754, Func Offset: 0x114
	// Line 508, Address: 0x199758, Func Offset: 0x118
	// Line 509, Address: 0x19975c, Func Offset: 0x11c
	// Line 513, Address: 0x19976c, Func Offset: 0x12c
	// Line 514, Address: 0x199778, Func Offset: 0x138
	// Line 515, Address: 0x19977c, Func Offset: 0x13c
	// Line 516, Address: 0x199780, Func Offset: 0x140
	// Line 515, Address: 0x199784, Func Offset: 0x144
	// Line 516, Address: 0x199788, Func Offset: 0x148
	// Line 518, Address: 0x1997a0, Func Offset: 0x160
	// Line 520, Address: 0x1997b4, Func Offset: 0x174
	// Line 521, Address: 0x1997bc, Func Offset: 0x17c
	// Line 522, Address: 0x1997c4, Func Offset: 0x184
	// Line 524, Address: 0x1997d4, Func Offset: 0x194
	// Line 525, Address: 0x1997d8, Func Offset: 0x198
	// Line 526, Address: 0x1997f4, Func Offset: 0x1b4
	// Line 527, Address: 0x1997fc, Func Offset: 0x1bc
	// Line 531, Address: 0x199800, Func Offset: 0x1c0
	// Line 530, Address: 0x199808, Func Offset: 0x1c8
	// Line 534, Address: 0x199810, Func Offset: 0x1d0
	// Line 531, Address: 0x199814, Func Offset: 0x1d4
	// Line 532, Address: 0x199818, Func Offset: 0x1d8
	// Line 533, Address: 0x19982c, Func Offset: 0x1ec
	// Line 532, Address: 0x199830, Func Offset: 0x1f0
	// Line 533, Address: 0x199838, Func Offset: 0x1f8
	// Line 534, Address: 0x199840, Func Offset: 0x200
	// Line 535, Address: 0x199848, Func Offset: 0x208
	// Line 536, Address: 0x19985c, Func Offset: 0x21c
	// Line 537, Address: 0x199874, Func Offset: 0x234
	// Line 538, Address: 0x199880, Func Offset: 0x240
	// Line 537, Address: 0x199888, Func Offset: 0x248
	// Line 538, Address: 0x199890, Func Offset: 0x250
	// Line 540, Address: 0x199894, Func Offset: 0x254
	// Line 541, Address: 0x199898, Func Offset: 0x258
	// Line 543, Address: 0x1998b0, Func Offset: 0x270
	// Line 545, Address: 0x1998c8, Func Offset: 0x288
	// Line 544, Address: 0x1998d0, Func Offset: 0x290
	// Line 545, Address: 0x1998d8, Func Offset: 0x298
	// Line 544, Address: 0x1998dc, Func Offset: 0x29c
	// Line 545, Address: 0x1998e0, Func Offset: 0x2a0
	// Line 546, Address: 0x1998e4, Func Offset: 0x2a4
	// Line 547, Address: 0x1998ec, Func Offset: 0x2ac
	// Line 548, Address: 0x199908, Func Offset: 0x2c8
	// Line 549, Address: 0x199918, Func Offset: 0x2d8
	// Line 551, Address: 0x19991c, Func Offset: 0x2dc
	// Line 556, Address: 0x199920, Func Offset: 0x2e0
	// Line 557, Address: 0x199924, Func Offset: 0x2e4
	// Line 559, Address: 0x199934, Func Offset: 0x2f4
	// Line 563, Address: 0x19993c, Func Offset: 0x2fc
	// Line 562, Address: 0x199940, Func Offset: 0x300
	// Line 563, Address: 0x199944, Func Offset: 0x304
	// Line 567, Address: 0x19994c, Func Offset: 0x30c
	// Line 568, Address: 0x199994, Func Offset: 0x354
	// Line 569, Address: 0x1999dc, Func Offset: 0x39c
	// Line 570, Address: 0x1999e0, Func Offset: 0x3a0
	// Line 571, Address: 0x1999e8, Func Offset: 0x3a8
	// Line 572, Address: 0x1999ec, Func Offset: 0x3ac
	// Line 573, Address: 0x1999f4, Func Offset: 0x3b4
	// Line 574, Address: 0x199a00, Func Offset: 0x3c0
	// Line 575, Address: 0x199a0c, Func Offset: 0x3cc
	// Line 576, Address: 0x199a3c, Func Offset: 0x3fc
	// Line 578, Address: 0x199a70, Func Offset: 0x430
	// Line 579, Address: 0x199a74, Func Offset: 0x434
	// Func End, Address: 0x199aa4, Func Offset: 0x464
}

// iFontDrawChar__Fcf10iColor_tagP8xFontBox
// Start address: 0x199ab0
void iFontDrawChar(int8 c, iColor_tag color, xFontBox* box)
{
	float32 pulse_h;
	float32 pulse_w;
	float32 wave;
	float32 pulse_h;
	float32 pulse_w;
	float32 wave;
	float32 _dy;
	float32 _dx;
	float32 _y;
	float32 _x;
	float32 n;
	float32 n;
	float32 n;
	float32 n;
	float32 sy;
	float32 sx;
	uint32 draw_bg;
	RwSky2DVertex* vert;
	xFontInfo* font;
	uint32 i;
	float32 dv;
	float32 du;
	float32 v;
	float32 u;
	float32 dy;
	float32 dx;
	float32 y;
	float32 x;
	// Line 179, Address: 0x199ab0, Func Offset: 0
	// Line 190, Address: 0x199b10, Func Offset: 0x60
	// Line 179, Address: 0x199b20, Func Offset: 0x70
	// Line 190, Address: 0x199b24, Func Offset: 0x74
	// Line 179, Address: 0x199b28, Func Offset: 0x78
	// Line 190, Address: 0x199b2c, Func Offset: 0x7c
	// Line 193, Address: 0x199b30, Func Offset: 0x80
	// Line 194, Address: 0x199b40, Func Offset: 0x90
	// Line 195, Address: 0x199b5c, Func Offset: 0xac
	// Line 197, Address: 0x199b60, Func Offset: 0xb0
	// Line 199, Address: 0x199b6c, Func Offset: 0xbc
	// Line 209, Address: 0x199b78, Func Offset: 0xc8
	// Line 205, Address: 0x199b84, Func Offset: 0xd4
	// Line 209, Address: 0x199b88, Func Offset: 0xd8
	// Line 210, Address: 0x199bc8, Func Offset: 0x118
	// Line 209, Address: 0x199bcc, Func Offset: 0x11c
	// Line 210, Address: 0x199bd8, Func Offset: 0x128
	// Line 211, Address: 0x199c20, Func Offset: 0x170
	// Line 212, Address: 0x199c60, Func Offset: 0x1b0
	// Line 228, Address: 0x199c98, Func Offset: 0x1e8
	// Line 212, Address: 0x199c9c, Func Offset: 0x1ec
	// Line 226, Address: 0x199ca0, Func Offset: 0x1f0
	// Line 227, Address: 0x199cac, Func Offset: 0x1fc
	// Line 229, Address: 0x199cb0, Func Offset: 0x200
	// Line 233, Address: 0x199cb4, Func Offset: 0x204
	// Line 234, Address: 0x199cc0, Func Offset: 0x210
	// Line 235, Address: 0x199d30, Func Offset: 0x280
	// Line 236, Address: 0x199d6c, Func Offset: 0x2bc
	// Line 240, Address: 0x199db0, Func Offset: 0x300
	// Line 241, Address: 0x199dd0, Func Offset: 0x320
	// Line 245, Address: 0x199e00, Func Offset: 0x350
	// Line 247, Address: 0x199e08, Func Offset: 0x358
	// Line 246, Address: 0x199e0c, Func Offset: 0x35c
	// Line 247, Address: 0x199e14, Func Offset: 0x364
	// Line 245, Address: 0x199e18, Func Offset: 0x368
	// Line 246, Address: 0x199e20, Func Offset: 0x370
	// Line 247, Address: 0x199e24, Func Offset: 0x374
	// Line 248, Address: 0x199e2c, Func Offset: 0x37c
	// Line 252, Address: 0x199e40, Func Offset: 0x390
	// Line 253, Address: 0x199e44, Func Offset: 0x394
	// Line 254, Address: 0x199e48, Func Offset: 0x398
	// Line 253, Address: 0x199e4c, Func Offset: 0x39c
	// Line 256, Address: 0x199e50, Func Offset: 0x3a0
	// Line 257, Address: 0x199e78, Func Offset: 0x3c8
	// Line 260, Address: 0x199e88, Func Offset: 0x3d8
	// Line 262, Address: 0x199e8c, Func Offset: 0x3dc
	// Line 261, Address: 0x199e90, Func Offset: 0x3e0
	// Line 262, Address: 0x199e94, Func Offset: 0x3e4
	// Line 264, Address: 0x199e98, Func Offset: 0x3e8
	// Line 265, Address: 0x199eb0, Func Offset: 0x400
	// Line 269, Address: 0x199ec4, Func Offset: 0x414
	// Line 270, Address: 0x199ec8, Func Offset: 0x418
	// Line 271, Address: 0x199ecc, Func Offset: 0x41c
	// Line 270, Address: 0x199ed0, Func Offset: 0x420
	// Line 273, Address: 0x199ed4, Func Offset: 0x424
	// Line 274, Address: 0x199ef8, Func Offset: 0x448
	// Line 277, Address: 0x199f08, Func Offset: 0x458
	// Line 279, Address: 0x199f0c, Func Offset: 0x45c
	// Line 278, Address: 0x199f10, Func Offset: 0x460
	// Line 279, Address: 0x199f14, Func Offset: 0x464
	// Line 282, Address: 0x199f18, Func Offset: 0x468
	// Line 284, Address: 0x199f20, Func Offset: 0x470
	// Line 282, Address: 0x199f30, Func Offset: 0x480
	// Line 283, Address: 0x199f34, Func Offset: 0x484
	// Line 284, Address: 0x199f38, Func Offset: 0x488
	// Line 287, Address: 0x199f3c, Func Offset: 0x48c
	// Line 288, Address: 0x199f44, Func Offset: 0x494
	// Line 289, Address: 0x199f54, Func Offset: 0x4a4
	// Line 290, Address: 0x199f60, Func Offset: 0x4b0
	// Line 293, Address: 0x199f64, Func Offset: 0x4b4
	// Line 301, Address: 0x199f70, Func Offset: 0x4c0
	// Line 294, Address: 0x199f7c, Func Offset: 0x4cc
	// Line 302, Address: 0x199f80, Func Offset: 0x4d0
	// Line 301, Address: 0x199f8c, Func Offset: 0x4dc
	// Line 303, Address: 0x199f90, Func Offset: 0x4e0
	// Line 304, Address: 0x199f98, Func Offset: 0x4e8
	// Line 302, Address: 0x199fa0, Func Offset: 0x4f0
	// Line 307, Address: 0x199fa4, Func Offset: 0x4f4
	// Line 294, Address: 0x199fa8, Func Offset: 0x4f8
	// Line 303, Address: 0x199fac, Func Offset: 0x4fc
	// Line 301, Address: 0x199fb4, Func Offset: 0x504
	// Line 303, Address: 0x199fb8, Func Offset: 0x508
	// Line 307, Address: 0x199fbc, Func Offset: 0x50c
	// Line 302, Address: 0x199fc0, Func Offset: 0x510
	// Line 303, Address: 0x199fc4, Func Offset: 0x514
	// Line 304, Address: 0x199fc8, Func Offset: 0x518
	// Line 307, Address: 0x199fcc, Func Offset: 0x51c
	// Line 304, Address: 0x199fd0, Func Offset: 0x520
	// Line 307, Address: 0x199fd4, Func Offset: 0x524
	// Line 317, Address: 0x199fe8, Func Offset: 0x538
	// Line 308, Address: 0x199fec, Func Offset: 0x53c
	// Line 307, Address: 0x199ff8, Func Offset: 0x548
	// Line 311, Address: 0x199ffc, Func Offset: 0x54c
	// Line 318, Address: 0x19a000, Func Offset: 0x550
	// Line 321, Address: 0x19a004, Func Offset: 0x554
	// Line 308, Address: 0x19a008, Func Offset: 0x558
	// Line 321, Address: 0x19a00c, Func Offset: 0x55c
	// Line 340, Address: 0x19a010, Func Offset: 0x560
	// Line 308, Address: 0x19a018, Func Offset: 0x568
	// Line 309, Address: 0x19a01c, Func Offset: 0x56c
	// Line 311, Address: 0x19a024, Func Offset: 0x574
	// Line 310, Address: 0x19a028, Func Offset: 0x578
	// Line 317, Address: 0x19a02c, Func Offset: 0x57c
	// Line 327, Address: 0x19a034, Func Offset: 0x584
	// Line 311, Address: 0x19a038, Func Offset: 0x588
	// Line 315, Address: 0x19a03c, Func Offset: 0x58c
	// Line 327, Address: 0x19a040, Func Offset: 0x590
	// Line 311, Address: 0x19a044, Func Offset: 0x594
	// Line 313, Address: 0x19a048, Func Offset: 0x598
	// Line 312, Address: 0x19a04c, Func Offset: 0x59c
	// Line 313, Address: 0x19a050, Func Offset: 0x5a0
	// Line 316, Address: 0x19a054, Func Offset: 0x5a4
	// Line 317, Address: 0x19a058, Func Offset: 0x5a8
	// Line 323, Address: 0x19a060, Func Offset: 0x5b0
	// Line 317, Address: 0x19a064, Func Offset: 0x5b4
	// Line 318, Address: 0x19a06c, Func Offset: 0x5bc
	// Line 332, Address: 0x19a070, Func Offset: 0x5c0
	// Line 318, Address: 0x19a074, Func Offset: 0x5c4
	// Line 319, Address: 0x19a078, Func Offset: 0x5c8
	// Line 320, Address: 0x19a07c, Func Offset: 0x5cc
	// Line 321, Address: 0x19a080, Func Offset: 0x5d0
	// Line 323, Address: 0x19a090, Func Offset: 0x5e0
	// Line 324, Address: 0x19a094, Func Offset: 0x5e4
	// Line 325, Address: 0x19a098, Func Offset: 0x5e8
	// Line 326, Address: 0x19a0a4, Func Offset: 0x5f4
	// Line 327, Address: 0x19a0ac, Func Offset: 0x5fc
	// Line 328, Address: 0x19a0b0, Func Offset: 0x600
	// Line 329, Address: 0x19a0b4, Func Offset: 0x604
	// Line 331, Address: 0x19a0c4, Func Offset: 0x614
	// Line 332, Address: 0x19a0c8, Func Offset: 0x618
	// Line 333, Address: 0x19a0cc, Func Offset: 0x61c
	// Line 334, Address: 0x19a0d8, Func Offset: 0x628
	// Line 335, Address: 0x19a0e0, Func Offset: 0x630
	// Line 336, Address: 0x19a0e4, Func Offset: 0x634
	// Line 337, Address: 0x19a0e8, Func Offset: 0x638
	// Line 340, Address: 0x19a0f4, Func Offset: 0x644
	// Line 341, Address: 0x19a10c, Func Offset: 0x65c
	// Line 340, Address: 0x19a114, Func Offset: 0x664
	// Line 341, Address: 0x19a120, Func Offset: 0x670
	// Line 345, Address: 0x19a138, Func Offset: 0x688
	// Line 347, Address: 0x19a144, Func Offset: 0x694
	// Line 341, Address: 0x19a148, Func Offset: 0x698
	// Line 343, Address: 0x19a158, Func Offset: 0x6a8
	// Line 344, Address: 0x19a15c, Func Offset: 0x6ac
	// Line 345, Address: 0x19a160, Func Offset: 0x6b0
	// Line 347, Address: 0x19a164, Func Offset: 0x6b4
	// Line 349, Address: 0x19a168, Func Offset: 0x6b8
	// Line 351, Address: 0x19a170, Func Offset: 0x6c0
	// Line 345, Address: 0x19a174, Func Offset: 0x6c4
	// Line 346, Address: 0x19a17c, Func Offset: 0x6cc
	// Line 347, Address: 0x19a184, Func Offset: 0x6d4
	// Line 348, Address: 0x19a188, Func Offset: 0x6d8
	// Line 349, Address: 0x19a18c, Func Offset: 0x6dc
	// Line 351, Address: 0x19a19c, Func Offset: 0x6ec
	// Line 352, Address: 0x19a1a8, Func Offset: 0x6f8
	// Line 355, Address: 0x19a1b4, Func Offset: 0x704
	// Line 357, Address: 0x19a1d0, Func Offset: 0x720
	// Line 358, Address: 0x19a1dc, Func Offset: 0x72c
	// Line 360, Address: 0x19a1e0, Func Offset: 0x730
	// Line 363, Address: 0x19a1ec, Func Offset: 0x73c
	// Line 365, Address: 0x19a1f4, Func Offset: 0x744
	// Line 366, Address: 0x19a210, Func Offset: 0x760
	// Line 365, Address: 0x19a218, Func Offset: 0x768
	// Line 369, Address: 0x19a21c, Func Offset: 0x76c
	// Line 366, Address: 0x19a220, Func Offset: 0x770
	// Line 369, Address: 0x19a224, Func Offset: 0x774
	// Line 366, Address: 0x19a228, Func Offset: 0x778
	// Line 367, Address: 0x19a230, Func Offset: 0x780
	// Line 369, Address: 0x19a238, Func Offset: 0x788
	// Line 371, Address: 0x19a240, Func Offset: 0x790
	// Line 368, Address: 0x19a244, Func Offset: 0x794
	// Line 370, Address: 0x19a248, Func Offset: 0x798
	// Line 371, Address: 0x19a24c, Func Offset: 0x79c
	// Line 375, Address: 0x19a250, Func Offset: 0x7a0
	// Line 376, Address: 0x19a254, Func Offset: 0x7a4
	// Line 377, Address: 0x19a258, Func Offset: 0x7a8
	// Line 378, Address: 0x19a260, Func Offset: 0x7b0
	// Line 377, Address: 0x19a264, Func Offset: 0x7b4
	// Line 378, Address: 0x19a268, Func Offset: 0x7b8
	// Line 379, Address: 0x19a270, Func Offset: 0x7c0
	// Line 380, Address: 0x19a274, Func Offset: 0x7c4
	// Line 381, Address: 0x19a278, Func Offset: 0x7c8
	// Line 383, Address: 0x19a338, Func Offset: 0x888
	// Line 381, Address: 0x19a33c, Func Offset: 0x88c
	// Line 383, Address: 0x19a340, Func Offset: 0x890
	// Line 384, Address: 0x19a344, Func Offset: 0x894
	// Line 385, Address: 0x19a348, Func Offset: 0x898
	// Line 387, Address: 0x19a34c, Func Offset: 0x89c
	// Line 385, Address: 0x19a350, Func Offset: 0x8a0
	// Line 386, Address: 0x19a354, Func Offset: 0x8a4
	// Line 387, Address: 0x19a35c, Func Offset: 0x8ac
	// Line 388, Address: 0x19a360, Func Offset: 0x8b0
	// Line 389, Address: 0x19a364, Func Offset: 0x8b4
	// Line 392, Address: 0x19a424, Func Offset: 0x974
	// Line 389, Address: 0x19a428, Func Offset: 0x978
	// Line 391, Address: 0x19a42c, Func Offset: 0x97c
	// Line 392, Address: 0x19a430, Func Offset: 0x980
	// Line 393, Address: 0x19a434, Func Offset: 0x984
	// Line 396, Address: 0x19a438, Func Offset: 0x988
	// Line 393, Address: 0x19a43c, Func Offset: 0x98c
	// Line 394, Address: 0x19a440, Func Offset: 0x990
	// Line 395, Address: 0x19a448, Func Offset: 0x998
	// Line 396, Address: 0x19a44c, Func Offset: 0x99c
	// Line 397, Address: 0x19a450, Func Offset: 0x9a0
	// Line 400, Address: 0x19a514, Func Offset: 0xa64
	// Line 401, Address: 0x19a530, Func Offset: 0xa80
	// Line 400, Address: 0x19a538, Func Offset: 0xa88
	// Line 401, Address: 0x19a544, Func Offset: 0xa94
	// Line 403, Address: 0x19a56c, Func Offset: 0xabc
	// Line 404, Address: 0x19a570, Func Offset: 0xac0
	// Line 405, Address: 0x19a574, Func Offset: 0xac4
	// Line 406, Address: 0x19a57c, Func Offset: 0xacc
	// Line 407, Address: 0x19a584, Func Offset: 0xad4
	// Line 408, Address: 0x19a588, Func Offset: 0xad8
	// Line 409, Address: 0x19a58c, Func Offset: 0xadc
	// Line 411, Address: 0x19a650, Func Offset: 0xba0
	// Line 413, Address: 0x19a65c, Func Offset: 0xbac
	// Func End, Address: 0x19a6b8, Func Offset: 0xc08
}

// iFontDrawBackdrop__FP8xFontBox
// Start address: 0x19a750
void iFontDrawBackdrop(xFontBox* box)
{
	RwSky2DVertex vert[4];
	// Line 125, Address: 0x19a750, Func Offset: 0
	// Line 130, Address: 0x19a758, Func Offset: 0x8
	// Line 132, Address: 0x19a75c, Func Offset: 0xc
	// Line 133, Address: 0x19a760, Func Offset: 0x10
	// Line 130, Address: 0x19a764, Func Offset: 0x14
	// Line 131, Address: 0x19a768, Func Offset: 0x18
	// Line 132, Address: 0x19a770, Func Offset: 0x20
	// Line 133, Address: 0x19a774, Func Offset: 0x24
	// Line 136, Address: 0x19a778, Func Offset: 0x28
	// Line 138, Address: 0x19a848, Func Offset: 0xf8
	// Line 139, Address: 0x19a858, Func Offset: 0x108
	// Line 140, Address: 0x19a860, Func Offset: 0x110
	// Line 141, Address: 0x19a864, Func Offset: 0x114
	// Line 144, Address: 0x19a868, Func Offset: 0x118
	// Line 146, Address: 0x19a938, Func Offset: 0x1e8
	// Line 147, Address: 0x19a940, Func Offset: 0x1f0
	// Line 148, Address: 0x19a950, Func Offset: 0x200
	// Line 149, Address: 0x19a954, Func Offset: 0x204
	// Line 152, Address: 0x19a958, Func Offset: 0x208
	// Line 154, Address: 0x19aa28, Func Offset: 0x2d8
	// Line 155, Address: 0x19aa38, Func Offset: 0x2e8
	// Line 156, Address: 0x19aa48, Func Offset: 0x2f8
	// Line 157, Address: 0x19aa4c, Func Offset: 0x2fc
	// Line 160, Address: 0x19aa50, Func Offset: 0x300
	// Line 162, Address: 0x19ab1c, Func Offset: 0x3cc
	// Line 160, Address: 0x19ab20, Func Offset: 0x3d0
	// Line 162, Address: 0x19ab24, Func Offset: 0x3d4
	// Line 163, Address: 0x19ab30, Func Offset: 0x3e0
	// Func End, Address: 0x19ab3c, Func Offset: 0x3ec
}

// iFontRestoreRenderState__Fv
// Start address: 0x19ab40
void iFontRestoreRenderState()
{
	// Line 86, Address: 0x19ab40, Func Offset: 0
	// Line 87, Address: 0x19ab4c, Func Offset: 0xc
	// Line 89, Address: 0x19ab5c, Func Offset: 0x1c
	// Line 90, Address: 0x19ab68, Func Offset: 0x28
	// Line 93, Address: 0x19ab6c, Func Offset: 0x2c
	// Line 95, Address: 0x19ab8c, Func Offset: 0x4c
	// Line 96, Address: 0x19ab98, Func Offset: 0x58
	// Line 97, Address: 0x19aba4, Func Offset: 0x64
	// Line 99, Address: 0x19abbc, Func Offset: 0x7c
	// Line 100, Address: 0x19abc8, Func Offset: 0x88
	// Line 101, Address: 0x19abd4, Func Offset: 0x94
	// Line 109, Address: 0x19abec, Func Offset: 0xac
	// Line 116, Address: 0x19abf4, Func Offset: 0xb4
	// Line 117, Address: 0x19ac00, Func Offset: 0xc0
	// Line 120, Address: 0x19ac04, Func Offset: 0xc4
	// Func End, Address: 0x19ac14, Func Offset: 0xd4
}

// iFontSetCharRenderState__FP8xFontBox
// Start address: 0x19ac20
void iFontSetCharRenderState(xFontBox* box)
{
	xFontInfo* font;
	// Line 64, Address: 0x19ac20, Func Offset: 0
	// Line 67, Address: 0x19ac2c, Func Offset: 0xc
	// Line 69, Address: 0x19ac3c, Func Offset: 0x1c
	// Line 67, Address: 0x19ac40, Func Offset: 0x20
	// Line 69, Address: 0x19ac44, Func Offset: 0x24
	// Line 70, Address: 0x19ac50, Func Offset: 0x30
	// Line 71, Address: 0x19ac5c, Func Offset: 0x3c
	// Line 72, Address: 0x19ac68, Func Offset: 0x48
	// Line 73, Address: 0x19ac74, Func Offset: 0x54
	// Line 74, Address: 0x19ac80, Func Offset: 0x60
	// Line 75, Address: 0x19ac8c, Func Offset: 0x6c
	// Line 77, Address: 0x19ac98, Func Offset: 0x78
	// Line 79, Address: 0x19ac9c, Func Offset: 0x7c
	// Line 81, Address: 0x19acac, Func Offset: 0x8c
	// Func End, Address: 0x19acbc, Func Offset: 0x9c
}

// iFontSetBackdropRenderState__FP8xFontBox
// Start address: 0x19acc0
void iFontSetBackdropRenderState()
{
	// Line 45, Address: 0x19acc0, Func Offset: 0
	// Line 46, Address: 0x19acc8, Func Offset: 0x8
	// Line 47, Address: 0x19acd4, Func Offset: 0x14
	// Line 48, Address: 0x19ace0, Func Offset: 0x20
	// Line 49, Address: 0x19acec, Func Offset: 0x2c
	// Line 50, Address: 0x19acf8, Func Offset: 0x38
	// Line 51, Address: 0x19ad04, Func Offset: 0x44
	// Func End, Address: 0x19ad10, Func Offset: 0x50
}

// iFontSaveRenderState__Fv
// Start address: 0x19ad10
void iFontSaveRenderState()
{
	// Line 36, Address: 0x19ad10, Func Offset: 0
	// Line 37, Address: 0x19ad14, Func Offset: 0x4
	// Line 36, Address: 0x19ad18, Func Offset: 0x8
	// Line 37, Address: 0x19ad1c, Func Offset: 0xc
	// Line 39, Address: 0x19ad24, Func Offset: 0x14
	// Line 40, Address: 0x19ad4c, Func Offset: 0x3c
	// Line 41, Address: 0x19ad58, Func Offset: 0x48
	// Func End, Address: 0x19ad64, Func Offset: 0x54
}

