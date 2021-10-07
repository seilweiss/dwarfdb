typedef struct _iTexResource;
typedef struct _xGuiItem;
typedef struct tagP2Mesh;
typedef struct _xGuiSys;
typedef struct tagP2VERTEX;
typedef struct tagP2MeshVertex;
typedef struct tagP2Weight;
typedef struct XStreamHeader;
typedef struct Vector3D;
typedef struct _FCinfo;
typedef struct Vector4D;
typedef struct _iTexRuntime;
typedef struct tagiMesh;
typedef struct tagXStreamDirectoryEntry;
typedef struct xFontBox_t;
typedef struct _xTex;
typedef struct _xGuiMaya;
typedef struct _PVRheader;
typedef struct tagXStreamMDSDirectory;


typedef tagXStreamDirectoryEntry type_0[1000];
typedef uint32 type_1[3];
typedef int8 type_2[2048];
typedef void* type_3[5];
typedef _xGuiItem* type_4[6];
typedef int8 type_5[16];
typedef uint8 type_6[2];
typedef int16 type_7[2];
typedef int8 type_8[128];
typedef _xGuiSys* type_9[6];
typedef void* type_10[2];
typedef int8 type_11[3];
typedef int16 type_12[2];
typedef int16 type_13[4];
typedef uint16 type_14[3];

struct _iTexResource
{
	uint32 m_assetID;
	uint32 pad[3];
	_PVRheader header;
};

struct _xGuiItem
{
	uint8 m_idx;
	uint8 m_scriptCreateIndex;
	int16 m_textOffset;
	uint32 m_flag;
	uint32 m_rgba;
	uint32 m_dataID;
	_xGuiMaya m_img;
	void* m_edobjPad;
	void* m_func[5];
	_xGuiItem* m_dir[6];
	_xGuiItem* m_next;
	_xGuiItem* m_prev;
};

struct tagP2Mesh
{
	int32 m_vertexCount;
	tagP2VERTEX* m_vertex;
	tagP2VERTEX* m_neutralPose0;
	tagP2MeshVertex* m_neutralPose1;
	tagP2Weight* m_joints;
	int32 m_indexCount;
	uint16* m_index;
	int32 m_visible;
	_FCinfo* fc;
	Vector3D* fnorm;
	Vector3D* m_vnorm;
	Vector4D* m_vtnorm;
	tagiMesh* m_next;
	int32 m_normalsBuilt;
};

struct _xGuiSys
{
	uint8 m_idx;
	uint8 m_scriptCreateCount;
	uint8 m_pad[2];
	uint32 m_flag;
	int16 m_off[2];
	void* m_data;
	_xGuiItem* m_item;
	_xGuiItem* m_select;
	_xGuiSys* m_dir[6];
	void* m_edobjPad;
	void* m_func[2];
};

struct tagP2VERTEX
{
	float32 x;
	float32 y;
	float32 z;
	float32 tu;
	float32 tv;
};

struct tagP2MeshVertex
{
	float32 m_x;
	float32 m_y;
	float32 m_z;
};

struct tagP2Weight
{
	uint16 m_joint0;
	uint16 m_joint1;
	float32 m_weight0;
	float32 m_weight1;
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

struct Vector3D
{
	float32 x;
	float32 y;
	float32 z;
};

struct _FCinfo
{
	uint16 nidx[3];
};

struct Vector4D
{
	float32 x;
	float32 y;
	float32 z;
	float32 t;
};

struct _iTexRuntime
{
	void* surface;
	uint32 m_flags;
};

struct tagiMesh
{
};

struct tagXStreamDirectoryEntry
{
	uint32 id;
	uint32 type;
	uint32 offset;
	uint32 length;
};

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

struct _xTex
{
	_iTexResource* m_resource;
	_iTexRuntime* m_runtime;
};

struct _xGuiMaya
{
	uint32 m_modelID;
	uint32 m_texID;
	int8 m_partID;
	int8 m_val[3];
	int16 m_off[2];
	int16 m_bbox[4];
};

struct _PVRheader
{
	uint32 id;
	uint32 nTextureDataSize;
	uint32 nTextureType;
	uint16 nWidth;
	uint16 nHeight;
};

struct tagXStreamMDSDirectory
{
	uint32 count;
	tagXStreamDirectoryEntry directory[1000];
};

int8 vAssertBuf2[128];
XStreamHeader currentHeader;
int16 gFX1Color;
int32 gGameState;
float32 gZOffset;
float32 gZOffsetDelta;

void iGuiItemRenderFunc_MayaClip(_xGuiItem* gui, _xGuiSys* sys);
void iGuiItemRenderFunc_Maya(_xGuiItem* gui, _xGuiSys* sys);
void iGuiItemRenderFunc_Text(_xGuiItem* gui, _xGuiSys* sys);
void iGuiItemRenderFunc_TextNumber(_xGuiItem* gui, _xGuiSys* sys);
void iGuiItemRenderFunc_Image(_xGuiItem* gui, _xGuiSys* sys);
void iGuiItemRenderFunc_DebugOutline();
void iGuiInit();

// iGuiItemRenderFunc_MayaClip__FP9_xGuiItemP8_xGuiSys
// Start address: 0x384df0
void iGuiItemRenderFunc_MayaClip(_xGuiItem* gui, _xGuiSys* sys)
{
	int16 offy;
	int16 offx;
	Vector3D b;
	Vector3D a;
	int32 meshCount;
	tagP2Mesh* mesh;
	// Line 559, Address: 0x384df0, Func Offset: 0
	// Line 567, Address: 0x384e2c, Func Offset: 0x3c
	// Line 568, Address: 0x384ecc, Func Offset: 0xdc
	// Line 570, Address: 0x384f6c, Func Offset: 0x17c
	// Line 574, Address: 0x384f7c, Func Offset: 0x18c
	// Line 575, Address: 0x384f8c, Func Offset: 0x19c
	// Line 578, Address: 0x384f94, Func Offset: 0x1a4
	// Line 583, Address: 0x384fc4, Func Offset: 0x1d4
	// Line 586, Address: 0x384fdc, Func Offset: 0x1ec
	// Line 587, Address: 0x385004, Func Offset: 0x214
	// Line 588, Address: 0x385034, Func Offset: 0x244
	// Line 589, Address: 0x38505c, Func Offset: 0x26c
	// Line 591, Address: 0x38508c, Func Offset: 0x29c
	// Line 592, Address: 0x3850a0, Func Offset: 0x2b0
	// Line 594, Address: 0x3850b4, Func Offset: 0x2c4
	// Line 595, Address: 0x3850c8, Func Offset: 0x2d8
	// Line 596, Address: 0x3850dc, Func Offset: 0x2ec
	// Line 597, Address: 0x3850f0, Func Offset: 0x300
	// Line 600, Address: 0x385104, Func Offset: 0x314
	// Line 602, Address: 0x385110, Func Offset: 0x320
	// Line 603, Address: 0x385148, Func Offset: 0x358
	// Line 604, Address: 0x385150, Func Offset: 0x360
	// Line 606, Address: 0x385160, Func Offset: 0x370
	// Line 607, Address: 0x385198, Func Offset: 0x3a8
	// Line 608, Address: 0x3851a0, Func Offset: 0x3b0
	// Line 610, Address: 0x3851b0, Func Offset: 0x3c0
	// Line 611, Address: 0x3851e8, Func Offset: 0x3f8
	// Line 612, Address: 0x3851f0, Func Offset: 0x400
	// Line 614, Address: 0x385200, Func Offset: 0x410
	// Line 625, Address: 0x385238, Func Offset: 0x448
	// Line 639, Address: 0x3852b8, Func Offset: 0x4c8
	// Line 640, Address: 0x3852c4, Func Offset: 0x4d4
	// Line 641, Address: 0x3852d4, Func Offset: 0x4e4
	// Line 642, Address: 0x3852ec, Func Offset: 0x4fc
	// Func End, Address: 0x385328, Func Offset: 0x538
}

// iGuiItemRenderFunc_Maya__FP9_xGuiItemP8_xGuiSys
// Start address: 0x385330
void iGuiItemRenderFunc_Maya(_xGuiItem* gui, _xGuiSys* sys)
{
	Vector3D b;
	Vector3D a;
	_xTex* tex;
	int32 meshCount;
	tagP2Mesh* mesh;
	// Line 452, Address: 0x385330, Func Offset: 0
	// Line 456, Address: 0x385350, Func Offset: 0x20
	// Line 457, Address: 0x3853f0, Func Offset: 0xc0
	// Line 461, Address: 0x385490, Func Offset: 0x160
	// Line 464, Address: 0x3854a0, Func Offset: 0x170
	// Line 465, Address: 0x3854b4, Func Offset: 0x184
	// Line 467, Address: 0x3854bc, Func Offset: 0x18c
	// Line 468, Address: 0x3854cc, Func Offset: 0x19c
	// Line 470, Address: 0x3854dc, Func Offset: 0x1ac
	// Line 472, Address: 0x3854ec, Func Offset: 0x1bc
	// Line 478, Address: 0x38551c, Func Offset: 0x1ec
	// Line 489, Address: 0x385534, Func Offset: 0x204
	// Line 490, Address: 0x38555c, Func Offset: 0x22c
	// Line 491, Address: 0x38558c, Func Offset: 0x25c
	// Line 492, Address: 0x3855b4, Func Offset: 0x284
	// Line 494, Address: 0x3855e4, Func Offset: 0x2b4
	// Line 499, Address: 0x385614, Func Offset: 0x2e4
	// Line 502, Address: 0x385620, Func Offset: 0x2f0
	// Line 506, Address: 0x385628, Func Offset: 0x2f8
	// Line 517, Address: 0x385720, Func Offset: 0x3f0
	// Line 520, Address: 0x385728, Func Offset: 0x3f8
	// Line 524, Address: 0x385734, Func Offset: 0x404
	// Line 526, Address: 0x38573c, Func Offset: 0x40c
	// Line 538, Address: 0x38577c, Func Offset: 0x44c
	// Line 539, Address: 0x385788, Func Offset: 0x458
	// Line 540, Address: 0x385798, Func Offset: 0x468
	// Line 541, Address: 0x3857b0, Func Offset: 0x480
	// Func End, Address: 0x3857d0, Func Offset: 0x4a0
}

// iGuiItemRenderFunc_Text__FP9_xGuiItemP8_xGuiSys
// Start address: 0x3857d0
void iGuiItemRenderFunc_Text(_xGuiItem* gui, _xGuiSys* sys)
{
	int8* off;
	int16 offy;
	int16 offx;
	int8* text;
	xFontBox_t* fontBox;
	_xTex* tex;
	Vector3D b;
	Vector3D a;
	int32 meshCount;
	tagP2Mesh* mesh;
	// Line 286, Address: 0x3857d0, Func Offset: 0
	// Line 291, Address: 0x3857f0, Func Offset: 0x20
	// Line 292, Address: 0x385890, Func Offset: 0xc0
	// Line 296, Address: 0x385930, Func Offset: 0x160
	// Line 300, Address: 0x385940, Func Offset: 0x170
	// Line 302, Address: 0x385950, Func Offset: 0x180
	// Line 305, Address: 0x385958, Func Offset: 0x188
	// Line 310, Address: 0x385988, Func Offset: 0x1b8
	// Line 313, Address: 0x3859a0, Func Offset: 0x1d0
	// Line 314, Address: 0x3859c8, Func Offset: 0x1f8
	// Line 315, Address: 0x3859f8, Func Offset: 0x228
	// Line 316, Address: 0x385a20, Func Offset: 0x250
	// Line 319, Address: 0x385a50, Func Offset: 0x280
	// Line 320, Address: 0x385a5c, Func Offset: 0x28c
	// Line 323, Address: 0x385a64, Func Offset: 0x294
	// Line 327, Address: 0x385a74, Func Offset: 0x2a4
	// Line 328, Address: 0x385ac0, Func Offset: 0x2f0
	// Line 332, Address: 0x385b0c, Func Offset: 0x33c
	// Line 334, Address: 0x385b1c, Func Offset: 0x34c
	// Line 342, Address: 0x385ba8, Func Offset: 0x3d8
	// Line 343, Address: 0x385c48, Func Offset: 0x478
	// Line 344, Address: 0x385c50, Func Offset: 0x480
	// Line 345, Address: 0x385c60, Func Offset: 0x490
	// Line 347, Address: 0x385c68, Func Offset: 0x498
	// Line 356, Address: 0x385d00, Func Offset: 0x530
	// Line 357, Address: 0x385da0, Func Offset: 0x5d0
	// Line 358, Address: 0x385da8, Func Offset: 0x5d8
	// Line 361, Address: 0x385db8, Func Offset: 0x5e8
	// Line 367, Address: 0x385dd4, Func Offset: 0x604
	// Line 370, Address: 0x385e10, Func Offset: 0x640
	// Line 372, Address: 0x385e2c, Func Offset: 0x65c
	// Line 375, Address: 0x385e48, Func Offset: 0x678
	// Line 376, Address: 0x385e58, Func Offset: 0x688
	// Line 377, Address: 0x385e70, Func Offset: 0x6a0
	// Line 378, Address: 0x385e80, Func Offset: 0x6b0
	// Line 379, Address: 0x385e98, Func Offset: 0x6c8
	// Line 380, Address: 0x385eac, Func Offset: 0x6dc
	// Line 382, Address: 0x385ebc, Func Offset: 0x6ec
	// Line 383, Address: 0x385ed0, Func Offset: 0x700
	// Line 384, Address: 0x385edc, Func Offset: 0x70c
	// Line 386, Address: 0x385ee4, Func Offset: 0x714
	// Line 390, Address: 0x385ef4, Func Offset: 0x724
	// Line 391, Address: 0x385f00, Func Offset: 0x730
	// Line 393, Address: 0x385f08, Func Offset: 0x738
	// Line 396, Address: 0x385f10, Func Offset: 0x740
	// Line 398, Address: 0x385f20, Func Offset: 0x750
	// Line 399, Address: 0x385f2c, Func Offset: 0x75c
	// Line 402, Address: 0x385f30, Func Offset: 0x760
	// Line 408, Address: 0x385f3c, Func Offset: 0x76c
	// Line 409, Address: 0x385f48, Func Offset: 0x778
	// Line 410, Address: 0x385f58, Func Offset: 0x788
	// Line 413, Address: 0x385f70, Func Offset: 0x7a0
	// Func End, Address: 0x385f90, Func Offset: 0x7c0
}

// iGuiItemRenderFunc_TextNumber__FP9_xGuiItemP8_xGuiSys
// Start address: 0x385f90
void iGuiItemRenderFunc_TextNumber(_xGuiItem* gui, _xGuiSys* sys)
{
	int16 offy;
	int16 offx;
	int8 text[16];
	xFontBox_t* fontBox;
	Vector3D b;
	Vector3D a;
	int32 meshCount;
	tagP2Mesh* mesh;
	// Line 188, Address: 0x385f90, Func Offset: 0
	// Line 193, Address: 0x385fac, Func Offset: 0x1c
	// Line 194, Address: 0x38604c, Func Offset: 0xbc
	// Line 198, Address: 0x3860ec, Func Offset: 0x15c
	// Line 202, Address: 0x3860fc, Func Offset: 0x16c
	// Line 204, Address: 0x38610c, Func Offset: 0x17c
	// Line 207, Address: 0x386114, Func Offset: 0x184
	// Line 212, Address: 0x386144, Func Offset: 0x1b4
	// Line 215, Address: 0x38615c, Func Offset: 0x1cc
	// Line 216, Address: 0x386184, Func Offset: 0x1f4
	// Line 217, Address: 0x3861b4, Func Offset: 0x224
	// Line 218, Address: 0x3861dc, Func Offset: 0x24c
	// Line 228, Address: 0x38620c, Func Offset: 0x27c
	// Line 229, Address: 0x386224, Func Offset: 0x294
	// Line 230, Address: 0x386270, Func Offset: 0x2e0
	// Line 234, Address: 0x3862bc, Func Offset: 0x32c
	// Line 243, Address: 0x386348, Func Offset: 0x3b8
	// Line 245, Address: 0x3863e8, Func Offset: 0x458
	// Line 246, Address: 0x3863f0, Func Offset: 0x460
	// Line 248, Address: 0x386400, Func Offset: 0x470
	// Line 249, Address: 0x38641c, Func Offset: 0x48c
	// Line 252, Address: 0x386438, Func Offset: 0x4a8
	// Line 253, Address: 0x386448, Func Offset: 0x4b8
	// Line 254, Address: 0x386460, Func Offset: 0x4d0
	// Line 255, Address: 0x386470, Func Offset: 0x4e0
	// Line 256, Address: 0x386488, Func Offset: 0x4f8
	// Line 257, Address: 0x38649c, Func Offset: 0x50c
	// Line 259, Address: 0x3864ac, Func Offset: 0x51c
	// Line 260, Address: 0x3864bc, Func Offset: 0x52c
	// Line 262, Address: 0x3864c8, Func Offset: 0x538
	// Line 268, Address: 0x3864d4, Func Offset: 0x544
	// Line 269, Address: 0x3864e0, Func Offset: 0x550
	// Line 270, Address: 0x3864f0, Func Offset: 0x560
	// Line 271, Address: 0x386508, Func Offset: 0x578
	// Func End, Address: 0x386524, Func Offset: 0x594
}

// iGuiItemRenderFunc_Image__FP9_xGuiItemP8_xGuiSys
// Start address: 0x386530
void iGuiItemRenderFunc_Image(_xGuiItem* gui, _xGuiSys* sys)
{
	// Line 168, Address: 0x386530, Func Offset: 0
	// Line 170, Address: 0x38653c, Func Offset: 0xc
	// Line 171, Address: 0x386548, Func Offset: 0x18
	// Line 172, Address: 0x386558, Func Offset: 0x28
	// Line 174, Address: 0x38656c, Func Offset: 0x3c
	// Func End, Address: 0x38657c, Func Offset: 0x4c
}

// iGuiItemRenderFunc_DebugOutline__FP9_xGuiItemP8_xGuiSys
// Start address: 0x386580
void iGuiItemRenderFunc_DebugOutline()
{
	// Line 152, Address: 0x386580, Func Offset: 0
	// Func End, Address: 0x386588, Func Offset: 0x8
}

// iGuiInit__Fv
// Start address: 0x386590
void iGuiInit()
{
	// Line 69, Address: 0x386590, Func Offset: 0
	// Func End, Address: 0x386598, Func Offset: 0x8
}

