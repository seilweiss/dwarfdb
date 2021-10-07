typedef struct xFontBox;
typedef struct xFontInfo;
typedef enum RwTextureFilterMode;
typedef struct RwTexture;
typedef struct RwLinkList;
typedef struct xFontGlobals_t;
typedef struct RwRaster;
typedef struct RwTexDictionary;
typedef struct iColor_tag;
typedef struct iFontInfo;
typedef struct iFontSpacing;
typedef enum RwTextureAddressMode;
typedef struct RwLLLink;
typedef struct RwObject;


typedef int8 type_0[32];
typedef int8 type_1[32];
typedef xFontBox type_2[4];
typedef uint8 type_3[128];
typedef iFontSpacing type_4[128];
typedef xFontInfo type_5[4];

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

struct iColor_tag
{
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 a;
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

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

xFontInfo gFontList[4];
xFontBox gBoxList[4];
uint32 gDBfont;
xFontGlobals_t gFontGlobals;
int8* blankText;

void xFontBoxSetBackdrop(xFontBox* box, iColor_tag color);
void xFontBoxSetJustification(xFontBox* box, int32 mode);
void xFontBoxSetInset(xFontBox* box, float32 inset_left, float32 inset_right, float32 inset_top, float32 inset_bottom);
void xFontBoxSetDrawSpacing(xFontBox* box, float32 x_spacing, float32 y_spacing);
void xFontBoxSetColor(xFontBox* box, iColor_tag color);
void xFontBoxSetFont(xFontBox* box, uint32 id);
void xFontBoxSetText(xFontBox* box, int8* text);
void xFontBoxDestroy(xFontBox* box);
int8* xFontBoxRender(xFontBox* box);
int8* JustifyLine(xFontBox* box, int8* text, float32 maxwidth, float32 maxheight);
int8* ProcessWord(xFontBox* box, int8* text, float32* width, float32* height, float32 maxw);
xFontBox* xFontBoxCreate(float32 x, float32 y, float32 w, float32 h, uint32 id, iColor_tag color);
void xFontBoxSetDrawSize(xFontBox* box, float32 draw_width, float32 draw_height);
void xFontRender();
void xFontInit();

// xFontBoxSetBackdrop__FP8xFontBox10iColor_tag
// Start address: 0x198510
void xFontBoxSetBackdrop(xFontBox* box, iColor_tag color)
{
	// Line 799, Address: 0x198510, Func Offset: 0
	// Line 803, Address: 0x198518, Func Offset: 0x8
	// Line 804, Address: 0x198524, Func Offset: 0x14
	// Line 805, Address: 0x198544, Func Offset: 0x34
	// Func End, Address: 0x19854c, Func Offset: 0x3c
}

// xFontBoxSetJustification__FP8xFontBoxi
// Start address: 0x198550
void xFontBoxSetJustification(xFontBox* box, int32 mode)
{
	// Line 791, Address: 0x198550, Func Offset: 0
	// Line 792, Address: 0x198558, Func Offset: 0x8
	// Line 793, Address: 0x19855c, Func Offset: 0xc
	// Line 791, Address: 0x198560, Func Offset: 0x10
	// Line 792, Address: 0x198568, Func Offset: 0x18
	// Line 793, Address: 0x198574, Func Offset: 0x24
	// Line 794, Address: 0x198580, Func Offset: 0x30
	// Line 795, Address: 0x198588, Func Offset: 0x38
	// Func End, Address: 0x198590, Func Offset: 0x40
}

// xFontBoxSetInset__FP8xFontBoxffff
// Start address: 0x198590
void xFontBoxSetInset(xFontBox* box, float32 inset_left, float32 inset_right, float32 inset_top, float32 inset_bottom)
{
	// Line 779, Address: 0x198590, Func Offset: 0
	// Line 781, Address: 0x198598, Func Offset: 0x8
	// Line 779, Address: 0x19859c, Func Offset: 0xc
	// Line 781, Address: 0x1985a0, Func Offset: 0x10
	// Line 779, Address: 0x1985a4, Func Offset: 0x14
	// Line 780, Address: 0x1985ac, Func Offset: 0x1c
	// Line 781, Address: 0x1985b8, Func Offset: 0x28
	// Line 782, Address: 0x1985c4, Func Offset: 0x34
	// Line 781, Address: 0x1985c8, Func Offset: 0x38
	// Line 782, Address: 0x1985cc, Func Offset: 0x3c
	// Line 781, Address: 0x1985d4, Func Offset: 0x44
	// Line 783, Address: 0x1985d8, Func Offset: 0x48
	// Func End, Address: 0x1985e0, Func Offset: 0x50
}

// xFontBoxSetDrawSpacing__FP8xFontBoxff
// Start address: 0x1985e0
void xFontBoxSetDrawSpacing(xFontBox* box, float32 x_spacing, float32 y_spacing)
{
	// Line 757, Address: 0x1985e0, Func Offset: 0
	// Line 758, Address: 0x1985e8, Func Offset: 0x8
	// Line 757, Address: 0x1985ec, Func Offset: 0xc
	// Line 758, Address: 0x1985f0, Func Offset: 0x10
	// Line 757, Address: 0x1985f4, Func Offset: 0x14
	// Line 758, Address: 0x1985f8, Func Offset: 0x18
	// Line 757, Address: 0x198600, Func Offset: 0x20
	// Line 758, Address: 0x198604, Func Offset: 0x24
	// Line 759, Address: 0x19861c, Func Offset: 0x3c
	// Func End, Address: 0x198624, Func Offset: 0x44
}

// xFontBoxSetColor__FP8xFontBox10iColor_tag
// Start address: 0x198630
void xFontBoxSetColor(xFontBox* box, iColor_tag color)
{
	// Line 742, Address: 0x198630, Func Offset: 0
	// Line 746, Address: 0x198644, Func Offset: 0x14
	// Line 747, Address: 0x198658, Func Offset: 0x28
	// Line 748, Address: 0x19866c, Func Offset: 0x3c
	// Func End, Address: 0x198674, Func Offset: 0x44
}

// xFontBoxSetFont__FP8xFontBoxUi
// Start address: 0x198680
void xFontBoxSetFont(xFontBox* box, uint32 id)
{
	xFontInfo* font;
	// Line 734, Address: 0x198680, Func Offset: 0
	// Line 731, Address: 0x198688, Func Offset: 0x8
	// Line 734, Address: 0x19868c, Func Offset: 0xc
	// Line 735, Address: 0x198698, Func Offset: 0x18
	// Line 736, Address: 0x1986a4, Func Offset: 0x24
	// Line 735, Address: 0x1986ac, Func Offset: 0x2c
	// Line 736, Address: 0x1986cc, Func Offset: 0x4c
	// Line 737, Address: 0x1986f4, Func Offset: 0x74
	// Func End, Address: 0x1986fc, Func Offset: 0x7c
}

// xFontBoxSetText__FP8xFontBoxPc
// Start address: 0x198700
void xFontBoxSetText(xFontBox* box, int8* text)
{
	// Line 703, Address: 0x198700, Func Offset: 0
	// Line 704, Address: 0x198708, Func Offset: 0x8
	// Line 707, Address: 0x198710, Func Offset: 0x10
	// Func End, Address: 0x198718, Func Offset: 0x18
}

// xFontBoxDestroy__FP8xFontBox
// Start address: 0x198720
void xFontBoxDestroy(xFontBox* box)
{
	// Line 692, Address: 0x198720, Func Offset: 0
	// Func End, Address: 0x198728, Func Offset: 0x8
}

// xFontBoxRender__FP8xFontBox
// Start address: 0x198730
int8* xFontBoxRender(xFontBox* box)
{
	float32 maxy;
	float32 maxx;
	float32 miny;
	float32 minx;
	int8* ret;
	int8* t;
	int8* s;
	// Line 598, Address: 0x198730, Func Offset: 0
	// Line 607, Address: 0x198754, Func Offset: 0x24
	// Line 610, Address: 0x19875c, Func Offset: 0x2c
	// Line 611, Address: 0x19876c, Func Offset: 0x3c
	// Line 612, Address: 0x198774, Func Offset: 0x44
	// Line 616, Address: 0x19877c, Func Offset: 0x4c
	// Line 617, Address: 0x198788, Func Offset: 0x58
	// Line 620, Address: 0x198790, Func Offset: 0x60
	// Line 622, Address: 0x198798, Func Offset: 0x68
	// Line 621, Address: 0x19879c, Func Offset: 0x6c
	// Line 623, Address: 0x1987a0, Func Offset: 0x70
	// Line 622, Address: 0x1987a4, Func Offset: 0x74
	// Line 621, Address: 0x1987a8, Func Offset: 0x78
	// Line 620, Address: 0x1987ac, Func Offset: 0x7c
	// Line 623, Address: 0x1987b0, Func Offset: 0x80
	// Line 622, Address: 0x1987b8, Func Offset: 0x88
	// Line 623, Address: 0x1987bc, Func Offset: 0x8c
	// Line 622, Address: 0x1987c0, Func Offset: 0x90
	// Line 626, Address: 0x1987c4, Func Offset: 0x94
	// Line 627, Address: 0x198820, Func Offset: 0xf0
	// Line 641, Address: 0x19882c, Func Offset: 0xfc
	// Line 642, Address: 0x198834, Func Offset: 0x104
	// Line 645, Address: 0x198838, Func Offset: 0x108
	// Line 647, Address: 0x19883c, Func Offset: 0x10c
	// Line 649, Address: 0x198844, Func Offset: 0x114
	// Line 652, Address: 0x198850, Func Offset: 0x120
	// Line 654, Address: 0x19885c, Func Offset: 0x12c
	// Line 662, Address: 0x198864, Func Offset: 0x134
	// Line 663, Address: 0x19887c, Func Offset: 0x14c
	// Line 666, Address: 0x198884, Func Offset: 0x154
	// Line 671, Address: 0x19888c, Func Offset: 0x15c
	// Line 673, Address: 0x198890, Func Offset: 0x160
	// Line 668, Address: 0x198898, Func Offset: 0x168
	// Line 673, Address: 0x19889c, Func Offset: 0x16c
	// Line 674, Address: 0x1988a0, Func Offset: 0x170
	// Line 676, Address: 0x1988a8, Func Offset: 0x178
	// Line 681, Address: 0x1988b0, Func Offset: 0x180
	// Line 682, Address: 0x1988b4, Func Offset: 0x184
	// Func End, Address: 0x1988dc, Func Offset: 0x1ac
}

// JustifyLine__FP8xFontBoxPcff
// Start address: 0x1988e0
int8* JustifyLine(xFontBox* box, int8* text, float32 maxwidth, float32 maxheight)
{
	float32 space;
	float32 space;
	xFontInfo* font;
	int8* end;
	int8* t;
	int8* s;
	float32 testheight;
	float32 testwidth;
	float32 whitespace_width;
	float32 height;
	float32 width;
	// Line 386, Address: 0x1988e0, Func Offset: 0
	// Line 391, Address: 0x198918, Func Offset: 0x38
	// Line 393, Address: 0x198938, Func Offset: 0x58
	// Line 394, Address: 0x198940, Func Offset: 0x60
	// Line 397, Address: 0x198948, Func Offset: 0x68
	// Line 399, Address: 0x19894c, Func Offset: 0x6c
	// Line 397, Address: 0x198950, Func Offset: 0x70
	// Line 398, Address: 0x198958, Func Offset: 0x78
	// Line 400, Address: 0x198960, Func Offset: 0x80
	// Line 403, Address: 0x198968, Func Offset: 0x88
	// Line 407, Address: 0x198974, Func Offset: 0x94
	// Line 409, Address: 0x198988, Func Offset: 0xa8
	// Line 410, Address: 0x19898c, Func Offset: 0xac
	// Line 414, Address: 0x198994, Func Offset: 0xb4
	// Line 415, Address: 0x198998, Func Offset: 0xb8
	// Line 417, Address: 0x1989a0, Func Offset: 0xc0
	// Line 418, Address: 0x1989b0, Func Offset: 0xd0
	// Line 419, Address: 0x1989b8, Func Offset: 0xd8
	// Line 420, Address: 0x1989c0, Func Offset: 0xe0
	// Line 421, Address: 0x1989cc, Func Offset: 0xec
	// Line 422, Address: 0x1989e0, Func Offset: 0x100
	// Line 423, Address: 0x1989e8, Func Offset: 0x108
	// Line 425, Address: 0x198a68, Func Offset: 0x188
	// Line 426, Address: 0x198a74, Func Offset: 0x194
	// Line 427, Address: 0x198a78, Func Offset: 0x198
	// Line 428, Address: 0x198a80, Func Offset: 0x1a0
	// Line 436, Address: 0x198a90, Func Offset: 0x1b0
	// Line 437, Address: 0x198a94, Func Offset: 0x1b4
	// Line 440, Address: 0x198ab0, Func Offset: 0x1d0
	// Line 444, Address: 0x198ab8, Func Offset: 0x1d8
	// Line 446, Address: 0x198ad0, Func Offset: 0x1f0
	// Line 447, Address: 0x198ad4, Func Offset: 0x1f4
	// Line 451, Address: 0x198adc, Func Offset: 0x1fc
	// Line 452, Address: 0x198af4, Func Offset: 0x214
	// Line 455, Address: 0x198af8, Func Offset: 0x218
	// Line 458, Address: 0x198b10, Func Offset: 0x230
	// Line 460, Address: 0x198b2c, Func Offset: 0x24c
	// Line 461, Address: 0x198b3c, Func Offset: 0x25c
	// Line 465, Address: 0x198b50, Func Offset: 0x270
	// Line 469, Address: 0x198b58, Func Offset: 0x278
	// Line 486, Address: 0x198b6c, Func Offset: 0x28c
	// Line 490, Address: 0x198b74, Func Offset: 0x294
	// Line 491, Address: 0x198b90, Func Offset: 0x2b0
	// Line 493, Address: 0x198bb8, Func Offset: 0x2d8
	// Line 494, Address: 0x198bc0, Func Offset: 0x2e0
	// Line 504, Address: 0x198bc8, Func Offset: 0x2e8
	// Line 505, Address: 0x198bd8, Func Offset: 0x2f8
	// Line 507, Address: 0x198be8, Func Offset: 0x308
	// Line 508, Address: 0x198bf8, Func Offset: 0x318
	// Line 526, Address: 0x198c14, Func Offset: 0x334
	// Line 527, Address: 0x198c18, Func Offset: 0x338
	// Line 530, Address: 0x198c20, Func Offset: 0x340
	// Line 537, Address: 0x198c38, Func Offset: 0x358
	// Line 538, Address: 0x198c3c, Func Offset: 0x35c
	// Line 540, Address: 0x198c44, Func Offset: 0x364
	// Line 541, Address: 0x198c54, Func Offset: 0x374
	// Line 542, Address: 0x198c5c, Func Offset: 0x37c
	// Line 543, Address: 0x198c68, Func Offset: 0x388
	// Line 544, Address: 0x198c74, Func Offset: 0x394
	// Line 545, Address: 0x198c88, Func Offset: 0x3a8
	// Line 546, Address: 0x198c90, Func Offset: 0x3b0
	// Line 548, Address: 0x198d10, Func Offset: 0x430
	// Line 549, Address: 0x198d1c, Func Offset: 0x43c
	// Line 550, Address: 0x198d20, Func Offset: 0x440
	// Line 551, Address: 0x198d28, Func Offset: 0x448
	// Line 559, Address: 0x198d38, Func Offset: 0x458
	// Line 560, Address: 0x198d3c, Func Offset: 0x45c
	// Line 563, Address: 0x198d58, Func Offset: 0x478
	// Line 564, Address: 0x198d70, Func Offset: 0x490
	// Line 566, Address: 0x198d78, Func Offset: 0x498
	// Line 570, Address: 0x198d7c, Func Offset: 0x49c
	// Line 566, Address: 0x198d90, Func Offset: 0x4b0
	// Line 570, Address: 0x198d98, Func Offset: 0x4b8
	// Line 571, Address: 0x198da0, Func Offset: 0x4c0
	// Line 573, Address: 0x198da8, Func Offset: 0x4c8
	// Line 574, Address: 0x198dc4, Func Offset: 0x4e4
	// Line 575, Address: 0x198dd4, Func Offset: 0x4f4
	// Line 578, Address: 0x198de8, Func Offset: 0x508
	// Line 581, Address: 0x198df0, Func Offset: 0x510
	// Line 585, Address: 0x198e08, Func Offset: 0x528
	// Line 583, Address: 0x198e0c, Func Offset: 0x52c
	// Line 585, Address: 0x198e10, Func Offset: 0x530
	// Line 586, Address: 0x198e14, Func Offset: 0x534
	// Line 590, Address: 0x198e20, Func Offset: 0x540
	// Line 591, Address: 0x198e24, Func Offset: 0x544
	// Func End, Address: 0x198e5c, Func Offset: 0x57c
}

// ProcessWord__FP8xFontBoxPcPfPff
// Start address: 0x198e60
int8* ProcessWord(xFontBox* box, int8* text, float32* width, float32* height, float32 maxw)
{
	int8 c;
	float32 dx;
	iColor_tag color;
	xFontInfo* font;
	uint32 fontID;
	int8* s;
	// Line 278, Address: 0x198e60, Func Offset: 0
	// Line 286, Address: 0x198e94, Func Offset: 0x34
	// Line 288, Address: 0x198e98, Func Offset: 0x38
	// Line 287, Address: 0x198e9c, Func Offset: 0x3c
	// Line 290, Address: 0x198ea0, Func Offset: 0x40
	// Line 287, Address: 0x198ea4, Func Offset: 0x44
	// Line 288, Address: 0x198eb0, Func Offset: 0x50
	// Line 287, Address: 0x198ec0, Func Offset: 0x60
	// Line 288, Address: 0x198ec4, Func Offset: 0x64
	// Line 287, Address: 0x198ee4, Func Offset: 0x84
	// Line 288, Address: 0x198ee8, Func Offset: 0x88
	// Line 291, Address: 0x198ef4, Func Offset: 0x94
	// Line 292, Address: 0x198ef8, Func Offset: 0x98
	// Line 294, Address: 0x198efc, Func Offset: 0x9c
	// Line 304, Address: 0x198f0c, Func Offset: 0xac
	// Line 306, Address: 0x198f14, Func Offset: 0xb4
	// Line 309, Address: 0x198f40, Func Offset: 0xe0
	// Line 310, Address: 0x198f6c, Func Offset: 0x10c
	// Line 316, Address: 0x198f74, Func Offset: 0x114
	// Line 317, Address: 0x198fa4, Func Offset: 0x144
	// Line 318, Address: 0x198fd4, Func Offset: 0x174
	// Line 319, Address: 0x199004, Func Offset: 0x1a4
	// Line 320, Address: 0x199048, Func Offset: 0x1e8
	// Line 323, Address: 0x199050, Func Offset: 0x1f0
	// Line 332, Address: 0x199074, Func Offset: 0x214
	// Line 335, Address: 0x199078, Func Offset: 0x218
	// Line 337, Address: 0x199088, Func Offset: 0x228
	// Line 338, Address: 0x199090, Func Offset: 0x230
	// Line 340, Address: 0x1990d0, Func Offset: 0x270
	// Line 348, Address: 0x199110, Func Offset: 0x2b0
	// Line 352, Address: 0x199130, Func Offset: 0x2d0
	// Line 356, Address: 0x199140, Func Offset: 0x2e0
	// Line 359, Address: 0x199170, Func Offset: 0x310
	// Line 360, Address: 0x19917c, Func Offset: 0x31c
	// Line 361, Address: 0x19918c, Func Offset: 0x32c
	// Line 364, Address: 0x199198, Func Offset: 0x338
	// Line 365, Address: 0x1991a4, Func Offset: 0x344
	// Line 368, Address: 0x1991c0, Func Offset: 0x360
	// Line 370, Address: 0x1991c8, Func Offset: 0x368
	// Line 372, Address: 0x1991d4, Func Offset: 0x374
	// Line 373, Address: 0x1991d8, Func Offset: 0x378
	// Line 376, Address: 0x1991fc, Func Offset: 0x39c
	// Line 377, Address: 0x199200, Func Offset: 0x3a0
	// Func End, Address: 0x199238, Func Offset: 0x3d8
}

// xFontBoxCreate__FffffUi10iColor_tag
// Start address: 0x199240
xFontBox* xFontBoxCreate(float32 x, float32 y, float32 w, float32 h, uint32 id, iColor_tag color)
{
	xFontInfo* font;
	xFontBox* box;
	uint32 i;
	// Line 219, Address: 0x199240, Func Offset: 0
	// Line 225, Address: 0x199254, Func Offset: 0x14
	// Line 226, Address: 0x199260, Func Offset: 0x20
	// Line 231, Address: 0x19926c, Func Offset: 0x2c
	// Line 234, Address: 0x199280, Func Offset: 0x40
	// Line 235, Address: 0x199288, Func Offset: 0x48
	// Line 234, Address: 0x19928c, Func Offset: 0x4c
	// Line 244, Address: 0x199290, Func Offset: 0x50
	// Line 235, Address: 0x199298, Func Offset: 0x58
	// Line 247, Address: 0x19929c, Func Offset: 0x5c
	// Line 234, Address: 0x1992a0, Func Offset: 0x60
	// Line 244, Address: 0x1992a4, Func Offset: 0x64
	// Line 250, Address: 0x1992b0, Func Offset: 0x70
	// Line 248, Address: 0x1992b8, Func Offset: 0x78
	// Line 256, Address: 0x1992bc, Func Offset: 0x7c
	// Line 234, Address: 0x1992c0, Func Offset: 0x80
	// Line 235, Address: 0x1992c4, Func Offset: 0x84
	// Line 236, Address: 0x1992d8, Func Offset: 0x98
	// Line 237, Address: 0x1992dc, Func Offset: 0x9c
	// Line 236, Address: 0x1992e0, Func Offset: 0xa0
	// Line 237, Address: 0x1992e4, Func Offset: 0xa4
	// Line 236, Address: 0x1992e8, Func Offset: 0xa8
	// Line 237, Address: 0x1992ec, Func Offset: 0xac
	// Line 238, Address: 0x1992f0, Func Offset: 0xb0
	// Line 239, Address: 0x199304, Func Offset: 0xc4
	// Line 243, Address: 0x199318, Func Offset: 0xd8
	// Line 247, Address: 0x19931c, Func Offset: 0xdc
	// Line 248, Address: 0x199320, Func Offset: 0xe0
	// Line 249, Address: 0x199324, Func Offset: 0xe4
	// Line 250, Address: 0x199328, Func Offset: 0xe8
	// Line 251, Address: 0x19932c, Func Offset: 0xec
	// Line 252, Address: 0x199330, Func Offset: 0xf0
	// Line 253, Address: 0x199354, Func Offset: 0x114
	// Line 254, Address: 0x199378, Func Offset: 0x138
	// Line 255, Address: 0x19939c, Func Offset: 0x15c
	// Line 256, Address: 0x1993c0, Func Offset: 0x180
	// Line 259, Address: 0x1993c4, Func Offset: 0x184
	// Func End, Address: 0x1993cc, Func Offset: 0x18c
}

// xFontBoxSetDrawSize__FP8xFontBoxff
// Start address: 0x1993d0
void xFontBoxSetDrawSize(xFontBox* box, float32 draw_width, float32 draw_height)
{
	// Line 211, Address: 0x1993d0, Func Offset: 0
	// Line 212, Address: 0x1993d8, Func Offset: 0x8
	// Line 211, Address: 0x1993dc, Func Offset: 0xc
	// Line 212, Address: 0x1993e0, Func Offset: 0x10
	// Line 211, Address: 0x1993e4, Func Offset: 0x14
	// Line 212, Address: 0x1993e8, Func Offset: 0x18
	// Line 211, Address: 0x1993f0, Func Offset: 0x20
	// Line 212, Address: 0x1993f4, Func Offset: 0x24
	// Line 213, Address: 0x19940c, Func Offset: 0x3c
	// Func End, Address: 0x199414, Func Offset: 0x44
}

// xFontRender__Fv
// Start address: 0x199420
void xFontRender()
{
	xFontBox* box;
	uint32 i;
	// Line 195, Address: 0x199420, Func Offset: 0
	// Line 199, Address: 0x199430, Func Offset: 0x10
	// Line 200, Address: 0x19943c, Func Offset: 0x1c
	// Line 201, Address: 0x19944c, Func Offset: 0x2c
	// Line 202, Address: 0x199458, Func Offset: 0x38
	// Line 203, Address: 0x199468, Func Offset: 0x48
	// Func End, Address: 0x19947c, Func Offset: 0x5c
}

// xFontInit__Fv
// Start address: 0x199480
void xFontInit()
{
	float32 pdone;
	// Line 105, Address: 0x199480, Func Offset: 0
	// Line 112, Address: 0x199488, Func Offset: 0x8
	// Line 118, Address: 0x199490, Func Offset: 0x10
	// Line 120, Address: 0x1994a0, Func Offset: 0x20
	// Line 123, Address: 0x1994b0, Func Offset: 0x30
	// Line 126, Address: 0x1994c0, Func Offset: 0x40
	// Line 128, Address: 0x1994cc, Func Offset: 0x4c
	// Line 131, Address: 0x1994dc, Func Offset: 0x5c
	// Line 133, Address: 0x199504, Func Offset: 0x84
	// Line 144, Address: 0x199514, Func Offset: 0x94
	// Line 149, Address: 0x19952c, Func Offset: 0xac
	// Line 162, Address: 0x199544, Func Offset: 0xc4
	// Line 172, Address: 0x19954c, Func Offset: 0xcc
	// Func End, Address: 0x199558, Func Offset: 0xd8
}

