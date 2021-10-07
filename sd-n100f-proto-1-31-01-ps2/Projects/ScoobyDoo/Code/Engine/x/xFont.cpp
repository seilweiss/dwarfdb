typedef struct xFontBox_t;
typedef struct xFontInfo_t;
typedef struct XStreamHeader;
typedef struct tagXStreamDirectoryEntry;
typedef struct tagXStreamMDSDirectory;


typedef tagXStreamDirectoryEntry type_0[1000];
typedef uint8 type_1[128];
typedef xFontBox_t type_2[3];
typedef int8 type_3[2048];
typedef int8 type_4[128];
typedef xFontInfo_t type_5[3];

struct xFontBox_t
{
	uint32 flags;
	float32 x;
	float32 y;
	float32 w;
	float32 h;
	uint32 font;
	uint32 color;
	uint32 saved_color;
	float32 x_spacing;
	float32 y_spacing;
	float32 depth;
	float32 inset_left;
	float32 inset_right;
	float32 inset_top;
	float32 inset_bottom;
	int8* text;
	uint32 backdrop_color;
};

struct xFontInfo_t
{
	uint8 type;
	uint8 id;
	uint16 flags;
	uint16 char_width;
	uint16 char_height;
	uint16 draw_width;
	uint16 draw_height;
	uint16 tex_width;
	uint16 tex_height;
	uint16 layout;
	uint16 pad;
	uint8 lookup[128];
	int8* characters;
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

xFontInfo_t FontList[3];
xFontBox_t BoxList[3];
uint32 dbFont;
uint32 draw;
uint32 dpx;
uint32 dpy;
int8* blankText;
int8 vAssertBuf2[128];
XStreamHeader currentHeader;

void xFontBoxSetBackdrop(xFontBox_t* box, uint32 color, uint32 opaque);
void xFontBoxSetJustification(xFontBox_t* box, uint32 mode);
void xFontBoxSetInset(xFontBox_t* box, float32 inset_left, float32 inset_right, float32 inset_top, float32 inset_bottom);
void xFontBoxSetSpacing(xFontBox_t* box, float32 x_spacing, float32 y_spacing);
void xFontBoxSetColor(xFontBox_t* box, uint32 color);
void xFontBoxSetText(xFontBox_t* box, int8* text);
void xFontBoxDestroy(xFontBox_t* box);
int8* xFontBoxRender(xFontBox_t* box);
int8* JustifyLine(xFontBox_t* box, int8* text, uint32 maxwidth, uint32 maxheight);
int8* ProcessWord(xFontBox_t* box, int8* text, uint32* width, uint32* height);
xFontBox_t* xFontBoxCreate(float32 x, float32 y, float32 w, float32 h, uint32 id, uint32 color);
void xFontRender();
void xFontExit();
void xFontInit();

// xFontBoxSetBackdrop__FP10xFontBox_tUiUi
// Start address: 0x35d160
void xFontBoxSetBackdrop(xFontBox_t* box, uint32 color, uint32 opaque)
{
	// Line 789, Address: 0x35d160, Func Offset: 0
	// Line 790, Address: 0x35d180, Func Offset: 0x20
	// Line 791, Address: 0x35d220, Func Offset: 0xc0
	// Line 793, Address: 0x35d2c8, Func Offset: 0x168
	// Line 794, Address: 0x35d2e0, Func Offset: 0x180
	// Line 795, Address: 0x35d2e4, Func Offset: 0x184
	// Func End, Address: 0x35d300, Func Offset: 0x1a0
}

// xFontBoxSetJustification__FP10xFontBox_tUi
// Start address: 0x35d300
void xFontBoxSetJustification(xFontBox_t* box, uint32 mode)
{
	// Line 778, Address: 0x35d300, Func Offset: 0
	// Line 779, Address: 0x35d318, Func Offset: 0x18
	// Line 780, Address: 0x35d3b8, Func Offset: 0xb8
	// Line 782, Address: 0x35d460, Func Offset: 0x160
	// Line 783, Address: 0x35d470, Func Offset: 0x170
	// Line 784, Address: 0x35d480, Func Offset: 0x180
	// Line 785, Address: 0x35d490, Func Offset: 0x190
	// Line 786, Address: 0x35d49c, Func Offset: 0x19c
	// Func End, Address: 0x35d4b4, Func Offset: 0x1b4
}

// xFontBoxSetInset__FP10xFontBox_tffff
// Start address: 0x35d4c0
void xFontBoxSetInset(xFontBox_t* box, float32 inset_left, float32 inset_right, float32 inset_top, float32 inset_bottom)
{
	// Line 767, Address: 0x35d4c0, Func Offset: 0
	// Line 768, Address: 0x35d4f0, Func Offset: 0x30
	// Line 769, Address: 0x35d590, Func Offset: 0xd0
	// Line 771, Address: 0x35d638, Func Offset: 0x178
	// Line 772, Address: 0x35d64c, Func Offset: 0x18c
	// Line 773, Address: 0x35d660, Func Offset: 0x1a0
	// Line 774, Address: 0x35d674, Func Offset: 0x1b4
	// Line 775, Address: 0x35d688, Func Offset: 0x1c8
	// Func End, Address: 0x35d6ac, Func Offset: 0x1ec
}

// xFontBoxSetSpacing__FP10xFontBox_tff
// Start address: 0x35d6b0
void xFontBoxSetSpacing(xFontBox_t* box, float32 x_spacing, float32 y_spacing)
{
	// Line 747, Address: 0x35d6b0, Func Offset: 0
	// Line 748, Address: 0x35d6d0, Func Offset: 0x20
	// Line 749, Address: 0x35d770, Func Offset: 0xc0
	// Line 751, Address: 0x35d818, Func Offset: 0x168
	// Line 752, Address: 0x35d81c, Func Offset: 0x16c
	// Line 753, Address: 0x35d820, Func Offset: 0x170
	// Func End, Address: 0x35d83c, Func Offset: 0x18c
}

// xFontBoxSetColor__FP10xFontBox_tUi
// Start address: 0x35d840
void xFontBoxSetColor(xFontBox_t* box, uint32 color)
{
	// Line 737, Address: 0x35d840, Func Offset: 0
	// Line 738, Address: 0x35d858, Func Offset: 0x18
	// Line 739, Address: 0x35d8f8, Func Offset: 0xb8
	// Line 741, Address: 0x35d9a0, Func Offset: 0x160
	// Line 742, Address: 0x35d9a4, Func Offset: 0x164
	// Line 743, Address: 0x35d9a8, Func Offset: 0x168
	// Func End, Address: 0x35d9c0, Func Offset: 0x180
}

// xFontBoxSetText__FP10xFontBox_tPc
// Start address: 0x35d9c0
void xFontBoxSetText(xFontBox_t* box, int8* text)
{
	// Line 697, Address: 0x35d9c0, Func Offset: 0
	// Line 698, Address: 0x35d9d8, Func Offset: 0x18
	// Line 699, Address: 0x35da78, Func Offset: 0xb8
	// Line 701, Address: 0x35db20, Func Offset: 0x160
	// Line 702, Address: 0x35db28, Func Offset: 0x168
	// Line 704, Address: 0x35db30, Func Offset: 0x170
	// Line 705, Address: 0x35db34, Func Offset: 0x174
	// Func End, Address: 0x35db4c, Func Offset: 0x18c
}

// xFontBoxDestroy__FP10xFontBox_t
// Start address: 0x35db50
void xFontBoxDestroy(xFontBox_t* box)
{
	// Line 686, Address: 0x35db50, Func Offset: 0
	// Line 687, Address: 0x35db60, Func Offset: 0x10
	// Line 688, Address: 0x35dc00, Func Offset: 0xb0
	// Line 690, Address: 0x35dca8, Func Offset: 0x158
	// Line 691, Address: 0x35dcac, Func Offset: 0x15c
	// Func End, Address: 0x35dcc0, Func Offset: 0x170
}

// xFontBoxRender__FP10xFontBox_t
// Start address: 0x35dcc0
int8* xFontBoxRender(xFontBox_t* box)
{
	uint32 maxy;
	uint32 maxx;
	uint32 miny;
	uint32 minx;
	uint32 maxheight;
	uint32 maxwidth;
	int8* t;
	int8* s;
	// Line 604, Address: 0x35dcc0, Func Offset: 0
	// Line 609, Address: 0x35dce0, Func Offset: 0x20
	// Line 612, Address: 0x35dd80, Func Offset: 0xc0
	// Line 613, Address: 0x35dd90, Func Offset: 0xd0
	// Line 616, Address: 0x35dd9c, Func Offset: 0xdc
	// Line 617, Address: 0x35dda8, Func Offset: 0xe8
	// Line 620, Address: 0x35ddb4, Func Offset: 0xf4
	// Line 621, Address: 0x35ddcc, Func Offset: 0x10c
	// Line 622, Address: 0x35dde4, Func Offset: 0x124
	// Line 623, Address: 0x35de04, Func Offset: 0x144
	// Line 647, Address: 0x35de24, Func Offset: 0x164
	// Line 648, Address: 0x35de28, Func Offset: 0x168
	// Line 651, Address: 0x35de2c, Func Offset: 0x16c
	// Line 653, Address: 0x35de30, Func Offset: 0x170
	// Line 656, Address: 0x35de38, Func Offset: 0x178
	// Line 657, Address: 0x35de44, Func Offset: 0x184
	// Line 661, Address: 0x35de50, Func Offset: 0x190
	// Line 662, Address: 0x35de54, Func Offset: 0x194
	// Line 665, Address: 0x35de5c, Func Offset: 0x19c
	// Line 666, Address: 0x35de6c, Func Offset: 0x1ac
	// Line 668, Address: 0x35de74, Func Offset: 0x1b4
	// Line 670, Address: 0x35de80, Func Offset: 0x1c0
	// Line 673, Address: 0x35de84, Func Offset: 0x1c4
	// Line 675, Address: 0x35de88, Func Offset: 0x1c8
	// Line 678, Address: 0x35ded8, Func Offset: 0x218
	// Line 681, Address: 0x35dee0, Func Offset: 0x220
	// Line 682, Address: 0x35dee4, Func Offset: 0x224
	// Func End, Address: 0x35df08, Func Offset: 0x248
}

// JustifyLine__FP10xFontBox_tPcUiUi
// Start address: 0x35df10
int8* JustifyLine(xFontBox_t* box, int8* text, uint32 maxwidth, uint32 maxheight)
{
	int8* end;
	int8* t;
	int8* s;
	uint32 testheight;
	uint32 testwidth;
	uint32 whitespace_width;
	uint32 height;
	uint32 width;
	// Line 435, Address: 0x35df10, Func Offset: 0
	// Line 441, Address: 0x35df4c, Func Offset: 0x3c
	// Line 442, Address: 0x35df54, Func Offset: 0x44
	// Line 445, Address: 0x35df60, Func Offset: 0x50
	// Line 446, Address: 0x35df64, Func Offset: 0x54
	// Line 447, Address: 0x35df6c, Func Offset: 0x5c
	// Line 448, Address: 0x35df74, Func Offset: 0x64
	// Line 451, Address: 0x35df7c, Func Offset: 0x6c
	// Line 455, Address: 0x35df88, Func Offset: 0x78
	// Line 456, Address: 0x35dfa8, Func Offset: 0x98
	// Line 457, Address: 0x35dfac, Func Offset: 0x9c
	// Line 458, Address: 0x35dfb0, Func Offset: 0xa0
	// Line 462, Address: 0x35dfb8, Func Offset: 0xa8
	// Line 463, Address: 0x35dfbc, Func Offset: 0xac
	// Line 464, Address: 0x35dfc4, Func Offset: 0xb4
	// Line 465, Address: 0x35dfd4, Func Offset: 0xc4
	// Line 466, Address: 0x35e020, Func Offset: 0x110
	// Line 467, Address: 0x35e030, Func Offset: 0x120
	// Line 468, Address: 0x35e088, Func Offset: 0x178
	// Line 469, Address: 0x35e08c, Func Offset: 0x17c
	// Line 472, Address: 0x35e0b0, Func Offset: 0x1a0
	// Line 476, Address: 0x35e0bc, Func Offset: 0x1ac
	// Line 477, Address: 0x35e0e0, Func Offset: 0x1d0
	// Line 478, Address: 0x35e0e4, Func Offset: 0x1d4
	// Line 479, Address: 0x35e0e8, Func Offset: 0x1d8
	// Line 483, Address: 0x35e0f0, Func Offset: 0x1e0
	// Line 484, Address: 0x35e0f8, Func Offset: 0x1e8
	// Line 487, Address: 0x35e100, Func Offset: 0x1f0
	// Line 490, Address: 0x35e118, Func Offset: 0x208
	// Line 494, Address: 0x35e130, Func Offset: 0x220
	// Line 511, Address: 0x35e140, Func Offset: 0x230
	// Line 514, Address: 0x35e148, Func Offset: 0x238
	// Line 515, Address: 0x35e154, Func Offset: 0x244
	// Line 518, Address: 0x35e174, Func Offset: 0x264
	// Line 520, Address: 0x35e198, Func Offset: 0x288
	// Line 521, Address: 0x35e1a0, Func Offset: 0x290
	// Line 531, Address: 0x35e1ac, Func Offset: 0x29c
	// Line 532, Address: 0x35e1bc, Func Offset: 0x2ac
	// Line 534, Address: 0x35e1cc, Func Offset: 0x2bc
	// Line 535, Address: 0x35e1dc, Func Offset: 0x2cc
	// Line 560, Address: 0x35e1f0, Func Offset: 0x2e0
	// Line 561, Address: 0x35e1f8, Func Offset: 0x2e8
	// Line 562, Address: 0x35e1fc, Func Offset: 0x2ec
	// Line 563, Address: 0x35e200, Func Offset: 0x2f0
	// Line 566, Address: 0x35e208, Func Offset: 0x2f8
	// Line 567, Address: 0x35e228, Func Offset: 0x318
	// Line 568, Address: 0x35e22c, Func Offset: 0x31c
	// Line 569, Address: 0x35e2cc, Func Offset: 0x3bc
	// Line 573, Address: 0x35e2d4, Func Offset: 0x3c4
	// Line 574, Address: 0x35e2d8, Func Offset: 0x3c8
	// Line 575, Address: 0x35e2e0, Func Offset: 0x3d0
	// Line 576, Address: 0x35e2f0, Func Offset: 0x3e0
	// Line 577, Address: 0x35e340, Func Offset: 0x430
	// Line 578, Address: 0x35e350, Func Offset: 0x440
	// Line 579, Address: 0x35e3a8, Func Offset: 0x498
	// Line 580, Address: 0x35e3ac, Func Offset: 0x49c
	// Line 583, Address: 0x35e3d0, Func Offset: 0x4c0
	// Line 584, Address: 0x35e3d8, Func Offset: 0x4c8
	// Line 586, Address: 0x35e3e0, Func Offset: 0x4d0
	// Line 589, Address: 0x35e3ec, Func Offset: 0x4dc
	// Line 590, Address: 0x35e404, Func Offset: 0x4f4
	// Line 592, Address: 0x35e408, Func Offset: 0x4f8
	// Line 593, Address: 0x35e414, Func Offset: 0x504
	// Line 597, Address: 0x35e420, Func Offset: 0x510
	// Line 598, Address: 0x35e424, Func Offset: 0x514
	// Func End, Address: 0x35e458, Func Offset: 0x548
}

// ProcessWord__FP10xFontBox_tPcPUiPUi
// Start address: 0x35e460
int8* ProcessWord(xFontBox_t* box, int8* text, uint32* width, uint32* height)
{
	xFontInfo_t* font;
	int8 c;
	uint32 b;
	uint32 g;
	uint32 r;
	uint32 color;
	uint32 fontID;
	int8* s;
	// Line 345, Address: 0x35e460, Func Offset: 0
	// Line 351, Address: 0x35e498, Func Offset: 0x38
	// Line 352, Address: 0x35e49c, Func Offset: 0x3c
	// Line 354, Address: 0x35e4a0, Func Offset: 0x40
	// Line 355, Address: 0x35e4a4, Func Offset: 0x44
	// Line 356, Address: 0x35e4a8, Func Offset: 0x48
	// Line 359, Address: 0x35e4ac, Func Offset: 0x4c
	// Line 369, Address: 0x35e4bc, Func Offset: 0x5c
	// Line 370, Address: 0x35e4c4, Func Offset: 0x64
	// Line 371, Address: 0x35e4c8, Func Offset: 0x68
	// Line 374, Address: 0x35e4f4, Func Offset: 0x94
	// Line 375, Address: 0x35e5e8, Func Offset: 0x188
	// Line 379, Address: 0x35e5f0, Func Offset: 0x190
	// Line 380, Address: 0x35e6e0, Func Offset: 0x280
	// Line 381, Address: 0x35e7d0, Func Offset: 0x370
	// Line 382, Address: 0x35e8c0, Func Offset: 0x460
	// Line 383, Address: 0x35e8d0, Func Offset: 0x470
	// Line 386, Address: 0x35e8d8, Func Offset: 0x478
	// Line 387, Address: 0x35e8dc, Func Offset: 0x47c
	// Line 390, Address: 0x35e8e4, Func Offset: 0x484
	// Line 391, Address: 0x35e8f8, Func Offset: 0x498
	// Line 400, Address: 0x35e990, Func Offset: 0x530
	// Line 404, Address: 0x35e9bc, Func Offset: 0x55c
	// Line 406, Address: 0x35e9dc, Func Offset: 0x57c
	// Line 409, Address: 0x35e9e8, Func Offset: 0x588
	// Line 410, Address: 0x35ea08, Func Offset: 0x5a8
	// Line 411, Address: 0x35ea1c, Func Offset: 0x5bc
	// Line 412, Address: 0x35ea6c, Func Offset: 0x60c
	// Line 414, Address: 0x35ea70, Func Offset: 0x610
	// Line 415, Address: 0x35eac0, Func Offset: 0x660
	// Line 417, Address: 0x35eb68, Func Offset: 0x708
	// Line 418, Address: 0x35eb6c, Func Offset: 0x70c
	// Line 420, Address: 0x35eb74, Func Offset: 0x714
	// Line 422, Address: 0x35eb80, Func Offset: 0x720
	// Line 423, Address: 0x35eb84, Func Offset: 0x724
	// Line 426, Address: 0x35eb88, Func Offset: 0x728
	// Line 427, Address: 0x35eb8c, Func Offset: 0x72c
	// Func End, Address: 0x35ebc0, Func Offset: 0x760
}

// xFontBoxCreate__FffffUiUi
// Start address: 0x35ebc0
xFontBox_t* xFontBoxCreate(float32 x, float32 y, float32 w, float32 h, uint32 id, uint32 color)
{
	xFontInfo_t* font;
	xFontBox_t* box;
	uint32 i;
	// Line 290, Address: 0x35ebc0, Func Offset: 0
	// Line 296, Address: 0x35ebd4, Func Offset: 0x14
	// Line 297, Address: 0x35ebe8, Func Offset: 0x28
	// Line 300, Address: 0x35ebf4, Func Offset: 0x34
	// Line 305, Address: 0x35ec10, Func Offset: 0x50
	// Line 306, Address: 0x35ec24, Func Offset: 0x64
	// Line 307, Address: 0x35ec38, Func Offset: 0x78
	// Line 308, Address: 0x35ec4c, Func Offset: 0x8c
	// Line 309, Address: 0x35ec60, Func Offset: 0xa0
	// Line 310, Address: 0x35ec64, Func Offset: 0xa4
	// Line 313, Address: 0x35ec68, Func Offset: 0xa8
	// Line 314, Address: 0x35ed0c, Func Offset: 0x14c
	// Line 315, Address: 0x35ed10, Func Offset: 0x150
	// Line 318, Address: 0x35ed30, Func Offset: 0x170
	// Line 319, Address: 0x35ed38, Func Offset: 0x178
	// Line 320, Address: 0x35ed40, Func Offset: 0x180
	// Line 321, Address: 0x35ed48, Func Offset: 0x188
	// Line 322, Address: 0x35ed50, Func Offset: 0x190
	// Line 323, Address: 0x35ed58, Func Offset: 0x198
	// Line 324, Address: 0x35ed98, Func Offset: 0x1d8
	// Line 325, Address: 0x35edd8, Func Offset: 0x218
	// Line 327, Address: 0x35ede0, Func Offset: 0x220
	// Line 328, Address: 0x35ede4, Func Offset: 0x224
	// Func End, Address: 0x35edfc, Func Offset: 0x23c
}

// xFontRender__Fv
// Start address: 0x35ee00
void xFontRender()
{
	xFontBox_t* box;
	uint32 i;
	// Line 261, Address: 0x35ee00, Func Offset: 0
	// Line 265, Address: 0x35ee10, Func Offset: 0x10
	// Line 266, Address: 0x35ee24, Func Offset: 0x24
	// Line 267, Address: 0x35ee34, Func Offset: 0x34
	// Line 268, Address: 0x35ee40, Func Offset: 0x40
	// Line 269, Address: 0x35ee54, Func Offset: 0x54
	// Func End, Address: 0x35ee6c, Func Offset: 0x6c
}

// xFontExit__Fv
// Start address: 0x35ee70
void xFontExit()
{
	xFontInfo_t* font;
	uint32 i;
	// Line 243, Address: 0x35ee70, Func Offset: 0
	// Line 248, Address: 0x35ee80, Func Offset: 0x10
	// Line 249, Address: 0x35ee94, Func Offset: 0x24
	// Line 250, Address: 0x35eea4, Func Offset: 0x34
	// Line 251, Address: 0x35eeb0, Func Offset: 0x40
	// Line 252, Address: 0x35eeb4, Func Offset: 0x44
	// Line 253, Address: 0x35eeb8, Func Offset: 0x48
	// Line 254, Address: 0x35eecc, Func Offset: 0x5c
	// Func End, Address: 0x35eee4, Func Offset: 0x74
}

// xFontInit__Fv
// Start address: 0x35eef0
void xFontInit()
{
	uint32 i;
	// Line 156, Address: 0x35eef0, Func Offset: 0
	// Line 159, Address: 0x35eefc, Func Offset: 0xc
	// Line 162, Address: 0x35ef0c, Func Offset: 0x1c
	// Line 163, Address: 0x35ef18, Func Offset: 0x28
	// Line 164, Address: 0x35ef3c, Func Offset: 0x4c
	// Line 167, Address: 0x35ef4c, Func Offset: 0x5c
	// Line 168, Address: 0x35ef58, Func Offset: 0x68
	// Line 169, Address: 0x35ef74, Func Offset: 0x84
	// Line 227, Address: 0x35ef84, Func Offset: 0x94
	// Line 231, Address: 0x35f05c, Func Offset: 0x16c
	// Line 239, Address: 0x35f08c, Func Offset: 0x19c
	// Func End, Address: 0x35f0a0, Func Offset: 0x1b0
}

