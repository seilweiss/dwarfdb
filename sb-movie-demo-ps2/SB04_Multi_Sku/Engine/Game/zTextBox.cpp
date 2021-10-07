typedef struct ztextbox;
typedef struct RwRaster;
typedef struct xLinkAsset;
typedef struct _class_0;
typedef struct asset_type;
typedef struct _class_1;
typedef struct xColor_tag;
typedef struct xBase;
typedef struct basic_rect;
typedef struct _class_2;
typedef enum _enum_0;
typedef struct _class_3;
typedef struct xDynAsset;
typedef enum _enum_1;
typedef struct RwRGBA;
typedef enum _enum_2;
typedef struct xBaseAsset;
typedef struct RwTexture;
typedef struct jot;
typedef struct RwV3d;
typedef struct split_tag;
typedef struct RwLLLink;
typedef struct RwSky2DVertex;
typedef struct xtextbox;
typedef struct _class_4;
typedef struct _class_5;
typedef struct callback;
typedef struct tag_type;
typedef struct RwSky2DVertexAlignmentOverlay;
typedef struct RwTexDictionary;
typedef struct color_type;
typedef struct RwSky2DVertexFields;
typedef struct RwLinkList;
typedef struct substr;
typedef struct xfont;
typedef struct _class_6;
typedef struct RwRGBAReal;
typedef struct RwObject;

typedef void(*type_2)(ztextbox&);
typedef void(*type_9)(xBase*, xBase*, uint32, float32*, xBase*, uint32);
typedef void(*type_14)(jot&, xtextbox&, float32, float32);
typedef void(*type_15)(jot&, xtextbox&, xtextbox&);
typedef void(*type_17)(jot&, xtextbox&, xtextbox&, split_tag&);
typedef void(*type_18)(xBase*, xBase*, uint32, float32*, xBase*, uint32);

typedef int8 type_0[16];
typedef uint32 type_1[4096];
typedef float32 type_3[4];
typedef void(*type_4)(ztextbox&)[4];
typedef uint32 type_5[3];
typedef uint32 type_6[3];
typedef int8 type_7[16];
typedef RwSky2DVertex type_8[6];
typedef _class_2 type_10[9];
typedef tag_type type_11[1];
typedef int8 type_12[32];
typedef int8 type_13[32];
typedef <unknown fundamental type (0xa510)> type_16[4];
typedef int8* type_19[16];
typedef RwSky2DVertex type_20[54];

struct ztextbox : xBase
{
	_class_4 flag;
	asset_type* asset;
	xtextbox tb;
	int8* segments[16];
	uint32 segments_size;
	ztextbox* next;
	ztextbox* prev;
	RwRaster* bgtex;

	void get_text(int8* buffer, uint32 buffer_size);
	void refresh();
	void clear_text();
	void add_text(int8* s);
	void set_text(uint32 id);
	void set_text(int8* s);
	void deactivate();
	void activate(uint8 skipFirstFrame);
	void render_backdrop();
	void load(asset_type& a);
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

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	float32 param[4];
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct _class_0
{
	float32 x;
	float32 y;
};

struct asset_type : xDynAsset
{
	uint32 text;
	basic_rect bounds;
	uint32 font;
	_class_6 size;
	_class_0 space;
	color_type color;
	_class_1 inset;
	_enum_0 xjustify;
	_enum_1 yjustify;
	_enum_2 expand;
	float32 max_height;
	_class_5 backdrop;
	color_type shadowColor;
	float32 shadowOffsetX;
	float32 shadowOffsetY;
};

struct _class_1
{
	float32 left;
	float32 top;
	float32 right;
	float32 bottom;
};

struct xColor_tag
{
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 a;
	RwRGBA rgba;
};

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	void(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*, uint32);
};

struct basic_rect
{
	float32 x;
	float32 y;
	float32 w;
	float32 h;
};

struct _class_2
{
	float32 x;
	float32 y;
	float32 w;
	float32 h;
	float32 lu;
	float32 lv;
	float32 hu;
	float32 hv;
};

enum _enum_0
{
	XJ_LEFT,
	XJ_CENTER,
	XJ_RIGHT
};

struct _class_3
{
	struct
	{
		uint8 invisible : 1;
		uint8 ethereal : 1;
		uint8 merge : 1;
		uint8 word_break : 1;
		uint8 word_end : 1;
		uint8 line_break : 1;
		uint8 stop : 1;
		uint8 tab : 1;
	};
	struct
	{
		uint8 insert : 1;
		uint8 dynamic : 1;
		uint8 page_break : 1;
		uint8 stateful : 1;
		uint8 japanese_break : 1;
	};
	uint16 dummy : 3;
};

struct xDynAsset : xBaseAsset
{
	uint32 type;
	uint16 version;
	uint16 handle;
};

enum _enum_1
{
	YJ_TOP,
	YJ_CENTER,
	YJ_BOTTOM
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

enum _enum_2
{
	EX_UP,
	EX_CENTER,
	EX_DOWN,
	MAX_EX
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
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

struct jot
{
	substr s;
	_class_3 flag;
	uint16 context_size;
	void* context;
	basic_rect bounds;
	basic_rect render_bounds;
	callback* cb;
	tag_type* tag;
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct split_tag
{
	substr tag;
	substr name;
	substr action;
	substr value;
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

struct xtextbox
{
	xfont font;
	basic_rect bounds;
	uint32 flags;
	float32 line_space;
	float32 tab_stop;
	float32 left_indent;
	float32 right_indent;
	callback* cb;
	void* context;
	int8** texts;
	uint32* text_sizes;
	uint32 texts_size;
	substr text;
	uint32 text_hash;
};

struct _class_4
{
	struct
	{
		uint8 active : 1;
		uint8 dirty : 1;
		uint8 show_backdrop : 1;
		uint8 skipFrame : 1;
	};
};

struct _class_5
{
	uint32 type;
	color_type color;
	uint32 texture;
	float32 borderU;
	float32 borderV;
	float32 borderWidth;
	float32 borderHeight;
};

struct callback
{
	void(*render)(jot&, xtextbox&, float32, float32);
	void(*layout_update)(jot&, xtextbox&, xtextbox&);
	void(*render_update)(jot&, xtextbox&, xtextbox&);
};

struct tag_type
{
	substr name;
	void(*parse_tag)(jot&, xtextbox&, xtextbox&, split_tag&);
	void(*reset_tag)(jot&, xtextbox&, xtextbox&, split_tag&);
	void* context;
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

struct color_type
{
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 a;
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

struct substr
{
	int8* text;
	uint32 size;
};

struct xfont
{
	uint32 id;
	float32 width;
	float32 height;
	float32 space;
	xColor_tag color;
	xColor_tag shadowColor;
	float32 shadowOffsetX;
	float32 shadowOffsetY;
	basic_rect clip;
};

struct _class_6
{
	float32 width;
	float32 height;
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

basic_rect screen_bounds;
basic_rect default_adjust;
int8 buffer[16];
int8 buffer[16];
float32 scale;
ztextbox* head_active;
void(*render_bk_table)(ztextbox&)[4];
tag_type new_tags[1];
uint32 new_tags_size;
void(*cb_dispatch)(xBase*, xBase*, uint32, float32*, xBase*, uint32);
uint32 ourGlobals[4096];
uint32 FB_XRES;
uint32 FB_YRES;

void render_all();
void update_all();
void load(xBase& data, xDynAsset& asset);
void init();
void get_text(int8* buffer, uint32 buffer_size);
void refresh();
void clear_text();
void add_text(int8* s);
void set_text(uint32 id);
void set_text(int8* s);
void deactivate();
void activate(uint8 skipFirstFrame);
void render_backdrop();
void load(asset_type& a);
void cb_dispatch(xBase* to, uint32 event, float32* argf);
void parse_tag_blahblah();
void init_textbox(ztextbox& e);
void render_bk_by_pieces(ztextbox& e);
void render_bk_tex_wrap();
void render_bk_tex_scale(ztextbox& e);
void render_bk_fill(ztextbox& e);

// render_all__8ztextboxFv
// Start address: 0x47a860
void ztextbox::render_all()
{
	ztextbox* it;
	// Line 468, Address: 0x47a860, Func Offset: 0
	// Line 470, Address: 0x47a870, Func Offset: 0x10
	// Line 471, Address: 0x47a878, Func Offset: 0x18
	// Line 472, Address: 0x47a918, Func Offset: 0xb8
	// Line 471, Address: 0x47a92c, Func Offset: 0xcc
	// Line 472, Address: 0x47a968, Func Offset: 0x108
	// Func End, Address: 0x47a978, Func Offset: 0x118
}

// update_all__8ztextboxFR6xScenef
// Start address: 0x47a980
void ztextbox::update_all()
{
	ztextbox* it;
	// Line 452, Address: 0x47a980, Func Offset: 0
	// Line 453, Address: 0x47a984, Func Offset: 0x4
	// Line 454, Address: 0x47a98c, Func Offset: 0xc
	// Line 455, Address: 0x47a9a8, Func Offset: 0x28
	// Func End, Address: 0x47a9b0, Func Offset: 0x30
}

// load__8ztextboxFR5xBaseR9xDynAssetUi
// Start address: 0x47a9b0
void ztextbox::load(xBase& data, xDynAsset& asset)
{
	// Line 448, Address: 0x47a9b0, Func Offset: 0
	// Func End, Address: 0x47a9b8, Func Offset: 0x8
}

// init__8ztextboxFv
// Start address: 0x47a9c0
void ztextbox::init()
{
	// Line 440, Address: 0x47a9c0, Func Offset: 0
	// Line 441, Address: 0x47a9c4, Func Offset: 0x4
	// Line 440, Address: 0x47a9c8, Func Offset: 0x8
	// Line 441, Address: 0x47a9cc, Func Offset: 0xc
	// Line 442, Address: 0x47a9d8, Func Offset: 0x18
	// Line 443, Address: 0x47a9dc, Func Offset: 0x1c
	// Func End, Address: 0x47a9e8, Func Offset: 0x28
}

// get_text__8ztextboxCFPcUi
// Start address: 0x47a9f0
void ztextbox::get_text(int8* buffer, uint32 buffer_size)
{
	int8** it;
	int8** end;
	int8* s;
	uint32 len;
	// Line 421, Address: 0x47a9f0, Func Offset: 0
	// Line 422, Address: 0x47a9f4, Func Offset: 0x4
	// Line 421, Address: 0x47a9f8, Func Offset: 0x8
	// Line 422, Address: 0x47aa14, Func Offset: 0x24
	// Line 421, Address: 0x47aa18, Func Offset: 0x28
	// Line 422, Address: 0x47aa1c, Func Offset: 0x2c
	// Line 423, Address: 0x47aa24, Func Offset: 0x34
	// Line 425, Address: 0x47aa2c, Func Offset: 0x3c
	// Line 426, Address: 0x47aa30, Func Offset: 0x40
	// Line 427, Address: 0x47aa3c, Func Offset: 0x4c
	// Line 429, Address: 0x47aa48, Func Offset: 0x58
	// Line 430, Address: 0x47aa58, Func Offset: 0x68
	// Line 431, Address: 0x47aa5c, Func Offset: 0x6c
	// Line 433, Address: 0x47aa64, Func Offset: 0x74
	// Line 435, Address: 0x47aa70, Func Offset: 0x80
	// Line 436, Address: 0x47aa80, Func Offset: 0x90
	// Line 437, Address: 0x47aa84, Func Offset: 0x94
	// Func End, Address: 0x47aaa8, Func Offset: 0xb8
}

// refresh__8ztextboxFv
// Start address: 0x47aab0
void ztextbox::refresh()
{
	// Line 412, Address: 0x47aab0, Func Offset: 0
	// Line 413, Address: 0x47aabc, Func Offset: 0xc
	// Line 418, Address: 0x47aad0, Func Offset: 0x20
	// Line 416, Address: 0x47aae4, Func Offset: 0x34
	// Line 418, Address: 0x47ab00, Func Offset: 0x50
	// Func End, Address: 0x47ab0c, Func Offset: 0x5c
}

// clear_text__8ztextboxFv
// Start address: 0x47ab10
void ztextbox::clear_text()
{
	// Line 407, Address: 0x47ab10, Func Offset: 0
	// Line 408, Address: 0x47ab14, Func Offset: 0x4
	// Line 409, Address: 0x47ab28, Func Offset: 0x18
	// Func End, Address: 0x47ab30, Func Offset: 0x20
}

// add_text__8ztextboxFPCc
// Start address: 0x47ab30
void ztextbox::add_text(int8* s)
{
	// Line 390, Address: 0x47ab30, Func Offset: 0
	// Line 392, Address: 0x47ab38, Func Offset: 0x8
	// Line 394, Address: 0x47ab3c, Func Offset: 0xc
	// Line 392, Address: 0x47ab44, Func Offset: 0x14
	// Line 393, Address: 0x47ab50, Func Offset: 0x20
	// Line 394, Address: 0x47ab5c, Func Offset: 0x2c
	// Line 395, Address: 0x47ab6c, Func Offset: 0x3c
	// Func End, Address: 0x47ab74, Func Offset: 0x44
}

// set_text__8ztextboxFUi
// Start address: 0x47ab80
void ztextbox::set_text(uint32 id)
{
	int8* text;
	// Line 381, Address: 0x47ab80, Func Offset: 0
	// Line 382, Address: 0x47ab8c, Func Offset: 0xc
	// Line 383, Address: 0x47ab94, Func Offset: 0x14
	// Line 384, Address: 0x47aba0, Func Offset: 0x20
	// Line 385, Address: 0x47aba8, Func Offset: 0x28
	// Line 386, Address: 0x47abf4, Func Offset: 0x74
	// Line 384, Address: 0x47ac00, Func Offset: 0x80
	// Line 386, Address: 0x47ac04, Func Offset: 0x84
	// Line 384, Address: 0x47ac08, Func Offset: 0x88
	// Line 386, Address: 0x47ac14, Func Offset: 0x94
	// Func End, Address: 0x47ac28, Func Offset: 0xa8
}

// set_text__8ztextboxFPCc
// Start address: 0x47ac30
void ztextbox::set_text(int8* s)
{
	// Line 376, Address: 0x47ac30, Func Offset: 0
	// Line 377, Address: 0x47ac48, Func Offset: 0x18
	// Line 378, Address: 0x47ac7c, Func Offset: 0x4c
	// Func End, Address: 0x47ac84, Func Offset: 0x54
}

// deactivate__8ztextboxFv
// Start address: 0x47ac90
void ztextbox::deactivate()
{
	// Line 367, Address: 0x47ac90, Func Offset: 0
	// Line 368, Address: 0x47aca0, Func Offset: 0x10
	// Line 369, Address: 0x47acb8, Func Offset: 0x28
	// Line 370, Address: 0x47accc, Func Offset: 0x3c
	// Line 371, Address: 0x47acdc, Func Offset: 0x4c
	// Line 372, Address: 0x47ace8, Func Offset: 0x58
	// Func End, Address: 0x47ad04, Func Offset: 0x74
}

// activate__8ztextboxFb
// Start address: 0x47ad10
void ztextbox::activate(uint8 skipFirstFrame)
{
	// Line 352, Address: 0x47ad10, Func Offset: 0
	// Line 353, Address: 0x47ad20, Func Offset: 0x10
	// Line 356, Address: 0x47ad24, Func Offset: 0x14
	// Line 353, Address: 0x47ad28, Func Offset: 0x18
	// Line 356, Address: 0x47ad34, Func Offset: 0x24
	// Line 353, Address: 0x47ad38, Func Offset: 0x28
	// Line 356, Address: 0x47ad3c, Func Offset: 0x2c
	// Line 359, Address: 0x47ad4c, Func Offset: 0x3c
	// Line 360, Address: 0x47ad50, Func Offset: 0x40
	// Line 361, Address: 0x47ad5c, Func Offset: 0x4c
	// Line 362, Address: 0x47ad68, Func Offset: 0x58
	// Line 363, Address: 0x47ad6c, Func Offset: 0x5c
	// Func End, Address: 0x47ad74, Func Offset: 0x64
}

// render_backdrop__8ztextboxFv
// Start address: 0x47ad80
void ztextbox::render_backdrop()
{
	// Line 343, Address: 0x47ad80, Func Offset: 0
	// Line 346, Address: 0x47ad90, Func Offset: 0x10
	// Line 348, Address: 0x47ad9c, Func Offset: 0x1c
	// Line 347, Address: 0x47ada8, Func Offset: 0x28
	// Line 348, Address: 0x47adac, Func Offset: 0x2c
	// Func End, Address: 0x47add0, Func Offset: 0x50
}

// load__8ztextboxFRCQ28ztextbox10asset_type
// Start address: 0x47add0
void ztextbox::load(asset_type& a)
{
	RwTexture* tex;
	// Line 265, Address: 0x47add0, Func Offset: 0
	// Line 266, Address: 0x47ade4, Func Offset: 0x14
	// Line 267, Address: 0x47adec, Func Offset: 0x1c
	// Line 269, Address: 0x47adf0, Func Offset: 0x20
	// Line 267, Address: 0x47adf4, Func Offset: 0x24
	// Line 269, Address: 0x47adf8, Func Offset: 0x28
	// Line 268, Address: 0x47adfc, Func Offset: 0x2c
	// Line 269, Address: 0x47ae00, Func Offset: 0x30
	// Line 270, Address: 0x47ae04, Func Offset: 0x34
	// Line 271, Address: 0x47ae14, Func Offset: 0x44
	// Line 273, Address: 0x47ae18, Func Offset: 0x48
	// Line 272, Address: 0x47ae1c, Func Offset: 0x4c
	// Line 273, Address: 0x47ae20, Func Offset: 0x50
	// Line 272, Address: 0x47ae24, Func Offset: 0x54
	// Line 273, Address: 0x47ae28, Func Offset: 0x58
	// Line 275, Address: 0x47ae2c, Func Offset: 0x5c
	// Line 273, Address: 0x47ae30, Func Offset: 0x60
	// Line 276, Address: 0x47ae3c, Func Offset: 0x6c
	// Line 287, Address: 0x47ae44, Func Offset: 0x74
	// Line 288, Address: 0x47aef0, Func Offset: 0x120
	// Line 287, Address: 0x47af14, Func Offset: 0x144
	// Line 288, Address: 0x47af20, Func Offset: 0x150
	// Line 287, Address: 0x47af78, Func Offset: 0x1a8
	// Line 288, Address: 0x47af7c, Func Offset: 0x1ac
	// Line 287, Address: 0x47af80, Func Offset: 0x1b0
	// Line 288, Address: 0x47af8c, Func Offset: 0x1bc
	// Line 287, Address: 0x47af98, Func Offset: 0x1c8
	// Line 288, Address: 0x47afa0, Func Offset: 0x1d0
	// Line 287, Address: 0x47afb4, Func Offset: 0x1e4
	// Line 288, Address: 0x47afc4, Func Offset: 0x1f4
	// Line 287, Address: 0x47afc8, Func Offset: 0x1f8
	// Line 288, Address: 0x47afcc, Func Offset: 0x1fc
	// Line 287, Address: 0x47afd0, Func Offset: 0x200
	// Line 288, Address: 0x47afe4, Func Offset: 0x214
	// Func End, Address: 0x47aff8, Func Offset: 0x228
}

// cb_dispatch__22@unnamed@zTextBox_cpp@FP5xBaseP5xBaseUiPCfP5xBaseUi
// Start address: 0x47b000
void cb_dispatch(xBase* to, uint32 event, float32* argf)
{
	ztextbox& e;
	// Line 217, Address: 0x47b000, Func Offset: 0
	// Line 222, Address: 0x47b004, Func Offset: 0x4
	// Line 217, Address: 0x47b008, Func Offset: 0x8
	// Line 222, Address: 0x47b010, Func Offset: 0x10
	// Line 226, Address: 0x47b080, Func Offset: 0x80
	// Line 227, Address: 0x47b12c, Func Offset: 0x12c
	// Line 229, Address: 0x47b134, Func Offset: 0x134
	// Line 230, Address: 0x47b148, Func Offset: 0x148
	// Line 232, Address: 0x47b150, Func Offset: 0x150
	// Line 233, Address: 0x47b168, Func Offset: 0x168
	// Line 237, Address: 0x47b170, Func Offset: 0x170
	// Line 241, Address: 0x47b1ec, Func Offset: 0x1ec
	// Line 242, Address: 0x47b248, Func Offset: 0x248
	// Line 244, Address: 0x47b250, Func Offset: 0x250
	// Line 245, Address: 0x47b2bc, Func Offset: 0x2bc
	// Line 247, Address: 0x47b2c4, Func Offset: 0x2c4
	// Line 248, Address: 0x47b320, Func Offset: 0x320
	// Line 250, Address: 0x47b328, Func Offset: 0x328
	// Line 257, Address: 0x47b344, Func Offset: 0x344
	// Line 226, Address: 0x47b34c, Func Offset: 0x34c
	// Line 257, Address: 0x47b35c, Func Offset: 0x35c
	// Line 226, Address: 0x47b3a0, Func Offset: 0x3a0
	// Line 257, Address: 0x47b3a4, Func Offset: 0x3a4
	// Line 226, Address: 0x47b3b8, Func Offset: 0x3b8
	// Line 257, Address: 0x47b3bc, Func Offset: 0x3bc
	// Line 226, Address: 0x47b3c0, Func Offset: 0x3c0
	// Line 257, Address: 0x47b3cc, Func Offset: 0x3cc
	// Line 226, Address: 0x47b3d8, Func Offset: 0x3d8
	// Line 257, Address: 0x47b3e0, Func Offset: 0x3e0
	// Line 226, Address: 0x47b3f4, Func Offset: 0x3f4
	// Line 257, Address: 0x47b404, Func Offset: 0x404
	// Line 226, Address: 0x47b408, Func Offset: 0x408
	// Line 257, Address: 0x47b40c, Func Offset: 0x40c
	// Line 226, Address: 0x47b410, Func Offset: 0x410
	// Line 257, Address: 0x47b424, Func Offset: 0x424
	// Line 237, Address: 0x47b428, Func Offset: 0x428
	// Line 257, Address: 0x47b42c, Func Offset: 0x42c
	// Line 237, Address: 0x47b430, Func Offset: 0x430
	// Line 257, Address: 0x47b43c, Func Offset: 0x43c
	// Line 238, Address: 0x47b444, Func Offset: 0x444
	// Line 257, Address: 0x47b448, Func Offset: 0x448
	// Line 238, Address: 0x47b450, Func Offset: 0x450
	// Line 257, Address: 0x47b464, Func Offset: 0x464
	// Line 238, Address: 0x47b468, Func Offset: 0x468
	// Line 257, Address: 0x47b46c, Func Offset: 0x46c
	// Line 238, Address: 0x47b470, Func Offset: 0x470
	// Line 257, Address: 0x47b47c, Func Offset: 0x47c
	// Line 239, Address: 0x47b49c, Func Offset: 0x49c
	// Line 257, Address: 0x47b4a4, Func Offset: 0x4a4
	// Line 244, Address: 0x47b4a8, Func Offset: 0x4a8
	// Line 257, Address: 0x47b4ac, Func Offset: 0x4ac
	// Line 244, Address: 0x47b4b0, Func Offset: 0x4b0
	// Line 258, Address: 0x47b4c4, Func Offset: 0x4c4
	// Func End, Address: 0x47b4d4, Func Offset: 0x4d4
}

// parse_tag_blahblah__22@unnamed@zTextBox_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x47b4e0
void parse_tag_blahblah()
{
	// Line 200, Address: 0x47b4e0, Func Offset: 0
	// Func End, Address: 0x47b4e8, Func Offset: 0x8
}

// init_textbox__22@unnamed@zTextBox_cpp@FR8ztextbox
// Start address: 0x47b4f0
void init_textbox(ztextbox& e)
{
	asset_type& a;
	int32 lines;
	float32 minh;
	float32 maxh;
	float32 hmore;
	uint32 yjlookup[3];
	uint32 xjlookup[3];
	// Line 143, Address: 0x47b4f0, Func Offset: 0
	// Line 145, Address: 0x47b508, Func Offset: 0x18
	// Line 146, Address: 0x47b50c, Func Offset: 0x1c
	// Line 147, Address: 0x47b510, Func Offset: 0x20
	// Line 148, Address: 0x47b518, Func Offset: 0x28
	// Line 149, Address: 0x47b520, Func Offset: 0x30
	// Line 150, Address: 0x47b528, Func Offset: 0x38
	// Line 151, Address: 0x47b530, Func Offset: 0x40
	// Line 152, Address: 0x47b538, Func Offset: 0x48
	// Line 154, Address: 0x47b578, Func Offset: 0x88
	// Line 155, Address: 0x47b588, Func Offset: 0x98
	// Line 156, Address: 0x47b598, Func Offset: 0xa8
	// Line 157, Address: 0x47b5b0, Func Offset: 0xc0
	// Line 163, Address: 0x47b5cc, Func Offset: 0xdc
	// Line 166, Address: 0x47b5fc, Func Offset: 0x10c
	// Line 168, Address: 0x47b620, Func Offset: 0x130
	// Line 166, Address: 0x47b624, Func Offset: 0x134
	// Line 168, Address: 0x47b62c, Func Offset: 0x13c
	// Line 170, Address: 0x47b638, Func Offset: 0x148
	// Line 173, Address: 0x47b65c, Func Offset: 0x16c
	// Line 175, Address: 0x47b660, Func Offset: 0x170
	// Line 173, Address: 0x47b664, Func Offset: 0x174
	// Line 175, Address: 0x47b668, Func Offset: 0x178
	// Line 173, Address: 0x47b66c, Func Offset: 0x17c
	// Line 175, Address: 0x47b678, Func Offset: 0x188
	// Line 176, Address: 0x47b69c, Func Offset: 0x1ac
	// Line 178, Address: 0x47b6a8, Func Offset: 0x1b8
	// Line 179, Address: 0x47b6ac, Func Offset: 0x1bc
	// Line 181, Address: 0x47b6b8, Func Offset: 0x1c8
	// Line 182, Address: 0x47b6c0, Func Offset: 0x1d0
	// Line 183, Address: 0x47b6c8, Func Offset: 0x1d8
	// Line 163, Address: 0x47b6d4, Func Offset: 0x1e4
	// Line 183, Address: 0x47b6dc, Func Offset: 0x1ec
	// Line 166, Address: 0x47b6e0, Func Offset: 0x1f0
	// Line 183, Address: 0x47b6e8, Func Offset: 0x1f8
	// Line 180, Address: 0x47b6ec, Func Offset: 0x1fc
	// Line 184, Address: 0x47b708, Func Offset: 0x218
	// Line 187, Address: 0x47b70c, Func Offset: 0x21c
	// Line 188, Address: 0x47b71c, Func Offset: 0x22c
	// Line 189, Address: 0x47b72c, Func Offset: 0x23c
	// Line 190, Address: 0x47b744, Func Offset: 0x254
	// Line 191, Address: 0x47b75c, Func Offset: 0x26c
	// Func End, Address: 0x47b778, Func Offset: 0x288
}

// render_bk_by_pieces__22@unnamed@zTextBox_cpp@FRC8ztextbox
// Start address: 0x47b780
void render_bk_by_pieces(ztextbox& e)
{
	xColor_tag color;
	float32 rcz;
	float32 nsz;
	basic_rect r;
	float32 borderX;
	float32 borderY;
	float32 borderU;
	float32 borderV;
	_class_2 pieces[9];
	RwSky2DVertex vert[54];
	uint32 i;
	// Line 83, Address: 0x47b780, Func Offset: 0
	// Line 85, Address: 0x47b784, Func Offset: 0x4
	// Line 83, Address: 0x47b788, Func Offset: 0x8
	// Line 85, Address: 0x47b78c, Func Offset: 0xc
	// Line 83, Address: 0x47b790, Func Offset: 0x10
	// Line 85, Address: 0x47b794, Func Offset: 0x14
	// Line 83, Address: 0x47b798, Func Offset: 0x18
	// Line 84, Address: 0x47b79c, Func Offset: 0x1c
	// Line 83, Address: 0x47b7a0, Func Offset: 0x20
	// Line 85, Address: 0x47b7a8, Func Offset: 0x28
	// Line 84, Address: 0x47b7ac, Func Offset: 0x2c
	// Line 85, Address: 0x47b7c0, Func Offset: 0x40
	// Line 86, Address: 0x47b7c4, Func Offset: 0x44
	// Line 84, Address: 0x47b7cc, Func Offset: 0x4c
	// Line 87, Address: 0x47b7d0, Func Offset: 0x50
	// Line 84, Address: 0x47b7d4, Func Offset: 0x54
	// Line 85, Address: 0x47b7dc, Func Offset: 0x5c
	// Line 84, Address: 0x47b7e0, Func Offset: 0x60
	// Line 85, Address: 0x47b7ec, Func Offset: 0x6c
	// Line 84, Address: 0x47b7f0, Func Offset: 0x70
	// Line 87, Address: 0x47b7f4, Func Offset: 0x74
	// Line 88, Address: 0x47b7fc, Func Offset: 0x7c
	// Line 89, Address: 0x47b81c, Func Offset: 0x9c
	// Line 91, Address: 0x47b8b8, Func Offset: 0x138
	// Line 92, Address: 0x47b8ec, Func Offset: 0x16c
	// Line 96, Address: 0x47b920, Func Offset: 0x1a0
	// Line 93, Address: 0x47b924, Func Offset: 0x1a4
	// Line 96, Address: 0x47b928, Func Offset: 0x1a8
	// Line 94, Address: 0x47b92c, Func Offset: 0x1ac
	// Line 96, Address: 0x47b930, Func Offset: 0x1b0
	// Line 92, Address: 0x47b934, Func Offset: 0x1b4
	// Line 96, Address: 0x47b938, Func Offset: 0x1b8
	// Line 117, Address: 0x47b968, Func Offset: 0x1e8
	// Line 114, Address: 0x47b970, Func Offset: 0x1f0
	// Line 96, Address: 0x47b974, Func Offset: 0x1f4
	// Line 114, Address: 0x47b978, Func Offset: 0x1f8
	// Line 117, Address: 0x47b9a0, Func Offset: 0x220
	// Line 114, Address: 0x47b9a8, Func Offset: 0x228
	// Line 116, Address: 0x47b9b4, Func Offset: 0x234
	// Line 96, Address: 0x47b9bc, Func Offset: 0x23c
	// Line 116, Address: 0x47b9c0, Func Offset: 0x240
	// Line 96, Address: 0x47b9c4, Func Offset: 0x244
	// Line 116, Address: 0x47ba70, Func Offset: 0x2f0
	// Line 117, Address: 0x47ba7c, Func Offset: 0x2fc
	// Line 96, Address: 0x47ba80, Func Offset: 0x300
	// Line 116, Address: 0x47baec, Func Offset: 0x36c
	// Line 117, Address: 0x47bbb0, Func Offset: 0x430
	// Line 116, Address: 0x47bbb8, Func Offset: 0x438
	// Line 117, Address: 0x47bbbc, Func Offset: 0x43c
	// Line 118, Address: 0x47bc80, Func Offset: 0x500
	// Line 117, Address: 0x47bc88, Func Offset: 0x508
	// Line 118, Address: 0x47bc8c, Func Offset: 0x50c
	// Line 119, Address: 0x47bd54, Func Offset: 0x5d4
	// Line 121, Address: 0x47bd58, Func Offset: 0x5d8
	// Line 119, Address: 0x47bd5c, Func Offset: 0x5dc
	// Line 121, Address: 0x47bd60, Func Offset: 0x5e0
	// Line 119, Address: 0x47bd64, Func Offset: 0x5e4
	// Line 121, Address: 0x47bd68, Func Offset: 0x5e8
	// Line 119, Address: 0x47bd6c, Func Offset: 0x5ec
	// Line 121, Address: 0x47bd70, Func Offset: 0x5f0
	// Line 119, Address: 0x47bd80, Func Offset: 0x600
	// Line 121, Address: 0x47bd8c, Func Offset: 0x60c
	// Line 119, Address: 0x47bd90, Func Offset: 0x610
	// Line 120, Address: 0x47bd94, Func Offset: 0x614
	// Line 121, Address: 0x47bdb4, Func Offset: 0x634
	// Line 122, Address: 0x47be68, Func Offset: 0x6e8
	// Line 121, Address: 0x47be6c, Func Offset: 0x6ec
	// Line 122, Address: 0x47be74, Func Offset: 0x6f4
	// Line 124, Address: 0x47be80, Func Offset: 0x700
	// Line 125, Address: 0x47be98, Func Offset: 0x718
	// Line 126, Address: 0x47bea0, Func Offset: 0x720
	// Func End, Address: 0x47beb8, Func Offset: 0x738
}

// render_bk_tex_wrap__22@unnamed@zTextBox_cpp@FRC8ztextbox
// Start address: 0x47bec0
void render_bk_tex_wrap()
{
	// Line 81, Address: 0x47bec0, Func Offset: 0
	// Func End, Address: 0x47bec8, Func Offset: 0x8
}

// render_bk_tex_scale__22@unnamed@zTextBox_cpp@FRC8ztextbox
// Start address: 0x47bed0
void render_bk_tex_scale(ztextbox& e)
{
	xColor_tag color;
	float32 rcz;
	float32 nsz;
	RwSky2DVertex vert[6];
	basic_rect r;
	// Line 61, Address: 0x47bed0, Func Offset: 0
	// Line 63, Address: 0x47bed4, Func Offset: 0x4
	// Line 61, Address: 0x47bed8, Func Offset: 0x8
	// Line 63, Address: 0x47bedc, Func Offset: 0xc
	// Line 61, Address: 0x47bee0, Func Offset: 0x10
	// Line 63, Address: 0x47bee4, Func Offset: 0x14
	// Line 61, Address: 0x47bee8, Func Offset: 0x18
	// Line 62, Address: 0x47beec, Func Offset: 0x1c
	// Line 61, Address: 0x47bef0, Func Offset: 0x20
	// Line 63, Address: 0x47bef8, Func Offset: 0x28
	// Line 62, Address: 0x47befc, Func Offset: 0x2c
	// Line 63, Address: 0x47bf10, Func Offset: 0x40
	// Line 64, Address: 0x47bf14, Func Offset: 0x44
	// Line 62, Address: 0x47bf1c, Func Offset: 0x4c
	// Line 65, Address: 0x47bf20, Func Offset: 0x50
	// Line 62, Address: 0x47bf24, Func Offset: 0x54
	// Line 63, Address: 0x47bf2c, Func Offset: 0x5c
	// Line 62, Address: 0x47bf30, Func Offset: 0x60
	// Line 63, Address: 0x47bf3c, Func Offset: 0x6c
	// Line 62, Address: 0x47bf40, Func Offset: 0x70
	// Line 65, Address: 0x47bf44, Func Offset: 0x74
	// Line 67, Address: 0x47bf4c, Func Offset: 0x7c
	// Line 68, Address: 0x47bf50, Func Offset: 0x80
	// Line 67, Address: 0x47bf54, Func Offset: 0x84
	// Line 68, Address: 0x47bf6c, Func Offset: 0x9c
	// Line 69, Address: 0x47bfe0, Func Offset: 0x110
	// Line 68, Address: 0x47bfe4, Func Offset: 0x114
	// Line 69, Address: 0x47bfe8, Func Offset: 0x118
	// Line 68, Address: 0x47bfec, Func Offset: 0x11c
	// Line 69, Address: 0x47bff0, Func Offset: 0x120
	// Line 68, Address: 0x47bffc, Func Offset: 0x12c
	// Line 69, Address: 0x47c010, Func Offset: 0x140
	// Line 68, Address: 0x47c014, Func Offset: 0x144
	// Line 69, Address: 0x47c01c, Func Offset: 0x14c
	// Line 70, Address: 0x47c0f0, Func Offset: 0x220
	// Line 69, Address: 0x47c0fc, Func Offset: 0x22c
	// Line 70, Address: 0x47c100, Func Offset: 0x230
	// Line 71, Address: 0x47c1dc, Func Offset: 0x30c
	// Line 70, Address: 0x47c1e8, Func Offset: 0x318
	// Line 71, Address: 0x47c1ec, Func Offset: 0x31c
	// Line 70, Address: 0x47c1f0, Func Offset: 0x320
	// Line 71, Address: 0x47c1f4, Func Offset: 0x324
	// Line 70, Address: 0x47c200, Func Offset: 0x330
	// Line 71, Address: 0x47c208, Func Offset: 0x338
	// Line 74, Address: 0x47c2d0, Func Offset: 0x400
	// Line 72, Address: 0x47c2d4, Func Offset: 0x404
	// Line 74, Address: 0x47c2e8, Func Offset: 0x418
	// Line 72, Address: 0x47c2ec, Func Offset: 0x41c
	// Line 73, Address: 0x47c2fc, Func Offset: 0x42c
	// Line 72, Address: 0x47c300, Func Offset: 0x430
	// Line 73, Address: 0x47c304, Func Offset: 0x434
	// Line 72, Address: 0x47c308, Func Offset: 0x438
	// Line 73, Address: 0x47c30c, Func Offset: 0x43c
	// Line 72, Address: 0x47c310, Func Offset: 0x440
	// Line 73, Address: 0x47c314, Func Offset: 0x444
	// Line 72, Address: 0x47c318, Func Offset: 0x448
	// Line 74, Address: 0x47c340, Func Offset: 0x470
	// Line 72, Address: 0x47c344, Func Offset: 0x474
	// Line 74, Address: 0x47c348, Func Offset: 0x478
	// Line 72, Address: 0x47c34c, Func Offset: 0x47c
	// Line 74, Address: 0x47c350, Func Offset: 0x480
	// Line 72, Address: 0x47c354, Func Offset: 0x484
	// Line 74, Address: 0x47c358, Func Offset: 0x488
	// Line 72, Address: 0x47c35c, Func Offset: 0x48c
	// Line 73, Address: 0x47c360, Func Offset: 0x490
	// Line 72, Address: 0x47c368, Func Offset: 0x498
	// Line 73, Address: 0x47c37c, Func Offset: 0x4ac
	// Line 72, Address: 0x47c380, Func Offset: 0x4b0
	// Line 73, Address: 0x47c384, Func Offset: 0x4b4
	// Line 72, Address: 0x47c388, Func Offset: 0x4b8
	// Line 73, Address: 0x47c398, Func Offset: 0x4c8
	// Line 72, Address: 0x47c3a0, Func Offset: 0x4d0
	// Line 73, Address: 0x47c3b0, Func Offset: 0x4e0
	// Line 72, Address: 0x47c3b4, Func Offset: 0x4e4
	// Line 73, Address: 0x47c3b8, Func Offset: 0x4e8
	// Line 74, Address: 0x47c428, Func Offset: 0x558
	// Line 73, Address: 0x47c42c, Func Offset: 0x55c
	// Line 74, Address: 0x47c430, Func Offset: 0x560
	// Line 75, Address: 0x47c4f0, Func Offset: 0x620
	// Line 74, Address: 0x47c4fc, Func Offset: 0x62c
	// Line 75, Address: 0x47c500, Func Offset: 0x630
	// Line 76, Address: 0x47c50c, Func Offset: 0x63c
	// Line 77, Address: 0x47c514, Func Offset: 0x644
	// Func End, Address: 0x47c52c, Func Offset: 0x65c
}

// render_bk_fill__22@unnamed@zTextBox_cpp@FRC8ztextbox
// Start address: 0x47c530
void render_bk_fill(ztextbox& e)
{
	asset_type& a;
	// Line 41, Address: 0x47c530, Func Offset: 0
	// Line 43, Address: 0x47c534, Func Offset: 0x4
	// Line 41, Address: 0x47c538, Func Offset: 0x8
	// Line 44, Address: 0x47c53c, Func Offset: 0xc
	// Line 45, Address: 0x47c574, Func Offset: 0x44
	// Func End, Address: 0x47c580, Func Offset: 0x50
}

