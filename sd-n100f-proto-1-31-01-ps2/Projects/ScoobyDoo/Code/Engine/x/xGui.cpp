typedef struct _xGuiSys;
typedef struct _xGuiItem;
typedef struct XStreamHeader;
typedef struct tagXStreamDirectoryEntry;
typedef struct _xGuiMaya;
typedef struct tagXStreamMDSDirectory;

typedef void(*type_5)(_xGuiItem*, _xGuiSys*);

typedef tagXStreamDirectoryEntry type_0[1000];
typedef int8 type_1[2048];
typedef void* type_2[5];
typedef _xGuiItem* type_3[6];
typedef _xGuiItem type_4[180];
typedef uint8 type_6[2];
typedef int16 type_7[2];
typedef int8 type_8[128];
typedef _xGuiSys* type_9[6];
typedef void* type_10[2];
typedef int8 type_11[3];
typedef int16 type_12[2];
typedef int16 type_13[4];
typedef _xGuiSys type_14[52];

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

struct _xGuiMaya
{
	uint32 m_modelID;
	uint32 m_texID;
	int8 m_partID;
	int8 m_val[3];
	int16 m_off[2];
	int16 m_bbox[4];
};

struct tagXStreamMDSDirectory
{
	uint32 count;
	tagXStreamDirectoryEntry directory[1000];
};

int16 gFX1Color;
uint8 gFX1Dir;
float32 gZOffset;
float32 gZOffsetDelta;
_xGuiItem gGuiItem[180];
_xGuiSys gGuiSys[52];
_xGuiSys* gActiveGuiSys;
int8 vAssertBuf2[128];
XStreamHeader currentHeader;
void(*iGuiItemRenderFunc_Image)(_xGuiItem*, _xGuiSys*);

int32 xGuiSysGetFlag(_xGuiSys* sys);
void xGuiSysSetFlag(_xGuiSys* sys, int32 flag);
void xGuiSysAddFlag(_xGuiSys* sys, int32 flag);
void xGuiSysRemoveFlag(_xGuiSys* sys, int32 flag);
int32 xGuiItemGetFlag(_xGuiItem* item);
void xGuiItemSetFlag(_xGuiItem* item, int32 flag);
void xGuiItemAddFlag(_xGuiItem* item, int32 flag);
void xGuiItemRemoveFlag(_xGuiItem* item, int32 flag);
void xGuiItemSetDataID(_xGuiItem* item, int32 id);
void xGuiItemLink(_xGuiItem* a, int32 dira, _xGuiItem* b, int32 dirb);
_xGuiItem* xGuiItemCreate(uint32 flag, _xGuiSys* sys);
void xGuiItemSetRenderFunc(_xGuiItem* i, void* func);
void xGuiSysLink(_xGuiSys* a, int32 dira, _xGuiSys* b, int32 dirb);
void xGuiSysSetRenderFunc(_xGuiSys* s, void* func);
_xGuiSys* xGuiSysCreate(uint32 flag);
void xGuiSysSet(_xGuiSys* sys);
void xGuiSysSetDim();
void xGuiSysAdjustPos();
void xGuiSysSetPos();
void xGuiSysFuncCall(_xGuiSys* sys, int32 func);
void xGuiItemFuncCall(_xGuiSys* sys, _xGuiItem* item, int32 func);
void xGuiItemAdvanceText(_xGuiItem* item);
void xGuiItemSelect(_xGuiSys* sys, _xGuiItem* item);
void xGuiSelectItemDir(_xGuiSys* sys, int32 dir);
void xGuiItemAdjustPos();
void xGuiItemSetColor(_xGuiItem* item, int32 r, int32 g, int32 b, int32 a);
void xGuiItemSetPos();
void xGuiIdle();
void xGuiDebug(int32 mode);
void xGuiDraw();
void xGuiSetLevelReset();
void xGuiInit();

// xGuiSysGetFlag__FP8_xGuiSys
// Start address: 0x35a2a0
int32 xGuiSysGetFlag(_xGuiSys* sys)
{
	// Line 1173, Address: 0x35a2a0, Func Offset: 0
	// Line 1174, Address: 0x35a2b0, Func Offset: 0x10
	// Line 1175, Address: 0x35a350, Func Offset: 0xb0
	// Line 1176, Address: 0x35a354, Func Offset: 0xb4
	// Func End, Address: 0x35a368, Func Offset: 0xc8
}

// xGuiSysSetFlag__FP8_xGuiSysi
// Start address: 0x35a370
void xGuiSysSetFlag(_xGuiSys* sys, int32 flag)
{
	// Line 1158, Address: 0x35a370, Func Offset: 0
	// Line 1159, Address: 0x35a388, Func Offset: 0x18
	// Line 1160, Address: 0x35a428, Func Offset: 0xb8
	// Line 1161, Address: 0x35a42c, Func Offset: 0xbc
	// Func End, Address: 0x35a444, Func Offset: 0xd4
}

// xGuiSysAddFlag__FP8_xGuiSysi
// Start address: 0x35a450
void xGuiSysAddFlag(_xGuiSys* sys, int32 flag)
{
	// Line 1142, Address: 0x35a450, Func Offset: 0
	// Line 1143, Address: 0x35a468, Func Offset: 0x18
	// Line 1144, Address: 0x35a508, Func Offset: 0xb8
	// Line 1145, Address: 0x35a514, Func Offset: 0xc4
	// Func End, Address: 0x35a52c, Func Offset: 0xdc
}

// xGuiSysRemoveFlag__FP8_xGuiSysi
// Start address: 0x35a530
void xGuiSysRemoveFlag(_xGuiSys* sys, int32 flag)
{
	// Line 1126, Address: 0x35a530, Func Offset: 0
	// Line 1127, Address: 0x35a548, Func Offset: 0x18
	// Line 1128, Address: 0x35a5e8, Func Offset: 0xb8
	// Line 1129, Address: 0x35a604, Func Offset: 0xd4
	// Func End, Address: 0x35a61c, Func Offset: 0xec
}

// xGuiItemGetFlag__FP9_xGuiItem
// Start address: 0x35a620
int32 xGuiItemGetFlag(_xGuiItem* item)
{
	// Line 1110, Address: 0x35a620, Func Offset: 0
	// Line 1111, Address: 0x35a630, Func Offset: 0x10
	// Line 1112, Address: 0x35a6d0, Func Offset: 0xb0
	// Line 1113, Address: 0x35a6d4, Func Offset: 0xb4
	// Func End, Address: 0x35a6e8, Func Offset: 0xc8
}

// xGuiItemSetFlag__FP9_xGuiItemi
// Start address: 0x35a6f0
void xGuiItemSetFlag(_xGuiItem* item, int32 flag)
{
	// Line 1092, Address: 0x35a6f0, Func Offset: 0
	// Line 1093, Address: 0x35a708, Func Offset: 0x18
	// Line 1094, Address: 0x35a7a8, Func Offset: 0xb8
	// Line 1098, Address: 0x35a7ac, Func Offset: 0xbc
	// Func End, Address: 0x35a7c4, Func Offset: 0xd4
}

// xGuiItemAddFlag__FP9_xGuiItemi
// Start address: 0x35a7d0
void xGuiItemAddFlag(_xGuiItem* item, int32 flag)
{
	// Line 1072, Address: 0x35a7d0, Func Offset: 0
	// Line 1073, Address: 0x35a7e8, Func Offset: 0x18
	// Line 1074, Address: 0x35a888, Func Offset: 0xb8
	// Line 1079, Address: 0x35a894, Func Offset: 0xc4
	// Func End, Address: 0x35a8ac, Func Offset: 0xdc
}

// xGuiItemRemoveFlag__FP9_xGuiItemi
// Start address: 0x35a8b0
void xGuiItemRemoveFlag(_xGuiItem* item, int32 flag)
{
	// Line 1052, Address: 0x35a8b0, Func Offset: 0
	// Line 1053, Address: 0x35a8c8, Func Offset: 0x18
	// Line 1054, Address: 0x35a968, Func Offset: 0xb8
	// Line 1059, Address: 0x35a984, Func Offset: 0xd4
	// Func End, Address: 0x35a99c, Func Offset: 0xec
}

// xGuiItemSetDataID__FP9_xGuiItemi
// Start address: 0x35a9a0
void xGuiItemSetDataID(_xGuiItem* item, int32 id)
{
	// Line 1032, Address: 0x35a9a0, Func Offset: 0
	// Line 1033, Address: 0x35a9b8, Func Offset: 0x18
	// Line 1035, Address: 0x35aa58, Func Offset: 0xb8
	// Line 1036, Address: 0x35aa5c, Func Offset: 0xbc
	// Line 1037, Address: 0x35aa60, Func Offset: 0xc0
	// Func End, Address: 0x35aa78, Func Offset: 0xd8
}

// xGuiItemLink__FP9_xGuiItemiP9_xGuiItemi
// Start address: 0x35aa80
void xGuiItemLink(_xGuiItem* a, int32 dira, _xGuiItem* b, int32 dirb)
{
	// Line 1011, Address: 0x35aa80, Func Offset: 0
	// Line 1012, Address: 0x35aaa8, Func Offset: 0x28
	// Line 1013, Address: 0x35ab48, Func Offset: 0xc8
	// Line 1015, Address: 0x35abe8, Func Offset: 0x168
	// Line 1016, Address: 0x35abf4, Func Offset: 0x174
	// Line 1017, Address: 0x35ac00, Func Offset: 0x180
	// Func End, Address: 0x35ac20, Func Offset: 0x1a0
}

// xGuiItemCreate__FUiP8_xGuiSys
// Start address: 0x35ac20
_xGuiItem* xGuiItemCreate(uint32 flag, _xGuiSys* sys)
{
	_xGuiItem* t;
	_xGuiItem* g;
	int32 j;
	int32 i;
	// Line 913, Address: 0x35ac20, Func Offset: 0
	// Line 917, Address: 0x35ac3c, Func Offset: 0x1c
	// Line 919, Address: 0x35acdc, Func Offset: 0xbc
	// Line 921, Address: 0x35ace8, Func Offset: 0xc8
	// Line 924, Address: 0x35ad00, Func Offset: 0xe0
	// Line 926, Address: 0x35ad10, Func Offset: 0xf0
	// Line 928, Address: 0x35ad20, Func Offset: 0x100
	// Line 929, Address: 0x35ad2c, Func Offset: 0x10c
	// Line 931, Address: 0x35ad4c, Func Offset: 0x12c
	// Line 932, Address: 0x35ad58, Func Offset: 0x138
	// Line 936, Address: 0x35ad74, Func Offset: 0x154
	// Line 939, Address: 0x35ae24, Func Offset: 0x204
	// Line 940, Address: 0x35ae34, Func Offset: 0x214
	// Line 941, Address: 0x35ae38, Func Offset: 0x218
	// Line 942, Address: 0x35ae44, Func Offset: 0x224
	// Line 943, Address: 0x35ae48, Func Offset: 0x228
	// Line 952, Address: 0x35ae4c, Func Offset: 0x22c
	// Line 956, Address: 0x35ae58, Func Offset: 0x238
	// Line 957, Address: 0x35ae5c, Func Offset: 0x23c
	// Line 959, Address: 0x35ae64, Func Offset: 0x244
	// Line 960, Address: 0x35ae6c, Func Offset: 0x24c
	// Line 962, Address: 0x35ae88, Func Offset: 0x268
	// Line 963, Address: 0x35ae8c, Func Offset: 0x26c
	// Line 964, Address: 0x35ae90, Func Offset: 0x270
	// Line 966, Address: 0x35ae94, Func Offset: 0x274
	// Line 968, Address: 0x35ae9c, Func Offset: 0x27c
	// Line 971, Address: 0x35aea0, Func Offset: 0x280
	// Line 972, Address: 0x35aeac, Func Offset: 0x28c
	// Line 973, Address: 0x35aeb8, Func Offset: 0x298
	// Line 975, Address: 0x35aec4, Func Offset: 0x2a4
	// Line 977, Address: 0x35aed4, Func Offset: 0x2b4
	// Line 978, Address: 0x35aed8, Func Offset: 0x2b8
	// Func End, Address: 0x35aef4, Func Offset: 0x2d4
}

// xGuiItemSetRenderFunc__FP9_xGuiItemPv
// Start address: 0x35af00
void xGuiItemSetRenderFunc(_xGuiItem* i, void* func)
{
	// Line 892, Address: 0x35af00, Func Offset: 0
	// Line 893, Address: 0x35af18, Func Offset: 0x18
	// Line 895, Address: 0x35afb8, Func Offset: 0xb8
	// Line 897, Address: 0x35afbc, Func Offset: 0xbc
	// Func End, Address: 0x35afd4, Func Offset: 0xd4
}

// xGuiSysLink__FP8_xGuiSysiP8_xGuiSysi
// Start address: 0x35afe0
void xGuiSysLink(_xGuiSys* a, int32 dira, _xGuiSys* b, int32 dirb)
{
	// Line 872, Address: 0x35afe0, Func Offset: 0
	// Line 873, Address: 0x35b008, Func Offset: 0x28
	// Line 874, Address: 0x35b0a8, Func Offset: 0xc8
	// Line 876, Address: 0x35b148, Func Offset: 0x168
	// Line 877, Address: 0x35b154, Func Offset: 0x174
	// Line 878, Address: 0x35b160, Func Offset: 0x180
	// Func End, Address: 0x35b180, Func Offset: 0x1a0
}

// xGuiSysSetRenderFunc__FP8_xGuiSysPv
// Start address: 0x35b180
void xGuiSysSetRenderFunc(_xGuiSys* s, void* func)
{
	// Line 851, Address: 0x35b180, Func Offset: 0
	// Line 852, Address: 0x35b198, Func Offset: 0x18
	// Line 855, Address: 0x35b238, Func Offset: 0xb8
	// Line 856, Address: 0x35b23c, Func Offset: 0xbc
	// Func End, Address: 0x35b254, Func Offset: 0xd4
}

// xGuiSysCreate__FUi
// Start address: 0x35b260
_xGuiSys* xGuiSysCreate(uint32 flag)
{
	_xGuiSys* s;
	int32 j;
	int32 i;
	// Line 795, Address: 0x35b260, Func Offset: 0
	// Line 799, Address: 0x35b268, Func Offset: 0x8
	// Line 801, Address: 0x35b274, Func Offset: 0x14
	// Line 803, Address: 0x35b28c, Func Offset: 0x2c
	// Line 805, Address: 0x35b29c, Func Offset: 0x3c
	// Line 807, Address: 0x35b2ac, Func Offset: 0x4c
	// Line 809, Address: 0x35b2b0, Func Offset: 0x50
	// Line 810, Address: 0x35b2bc, Func Offset: 0x5c
	// Line 812, Address: 0x35b2dc, Func Offset: 0x7c
	// Line 814, Address: 0x35b2e4, Func Offset: 0x84
	// Line 816, Address: 0x35b2f4, Func Offset: 0x94
	// Line 818, Address: 0x35b304, Func Offset: 0xa4
	// Line 819, Address: 0x35b308, Func Offset: 0xa8
	// Func End, Address: 0x35b318, Func Offset: 0xb8
}

// xGuiSysSet__FP8_xGuiSys
// Start address: 0x35b320
void xGuiSysSet(_xGuiSys* sys)
{
	_xGuiItem* item;
	_xGuiSys* oldSys;
	// Line 739, Address: 0x35b320, Func Offset: 0
	// Line 740, Address: 0x35b334, Func Offset: 0x14
	// Line 743, Address: 0x35b3d4, Func Offset: 0xb4
	// Line 752, Address: 0x35b3ec, Func Offset: 0xcc
	// Line 754, Address: 0x35b3f8, Func Offset: 0xd8
	// Line 756, Address: 0x35b3fc, Func Offset: 0xdc
	// Line 757, Address: 0x35b410, Func Offset: 0xf0
	// Line 760, Address: 0x35b420, Func Offset: 0x100
	// Line 761, Address: 0x35b424, Func Offset: 0x104
	// Line 763, Address: 0x35b42c, Func Offset: 0x10c
	// Line 764, Address: 0x35b440, Func Offset: 0x120
	// Line 768, Address: 0x35b450, Func Offset: 0x130
	// Line 769, Address: 0x35b458, Func Offset: 0x138
	// Line 774, Address: 0x35b464, Func Offset: 0x144
	// Line 775, Address: 0x35b468, Func Offset: 0x148
	// Line 777, Address: 0x35b46c, Func Offset: 0x14c
	// Line 780, Address: 0x35b478, Func Offset: 0x158
	// Func End, Address: 0x35b490, Func Offset: 0x170
}

// xGuiSysSetDim__FP8_xGuiSysiii
// Start address: 0x35b490
void xGuiSysSetDim()
{
	// Line 729, Address: 0x35b490, Func Offset: 0
	// Func End, Address: 0x35b498, Func Offset: 0x8
}

// xGuiSysAdjustPos__FP8_xGuiSysiii
// Start address: 0x35b4a0
void xGuiSysAdjustPos()
{
	// Line 703, Address: 0x35b4a0, Func Offset: 0
	// Func End, Address: 0x35b4a8, Func Offset: 0x8
}

// xGuiSysSetPos__FP8_xGuiSysiii
// Start address: 0x35b4b0
void xGuiSysSetPos()
{
	// Line 679, Address: 0x35b4b0, Func Offset: 0
	// Func End, Address: 0x35b4b8, Func Offset: 0x8
}

// xGuiSysFuncCall__FP8_xGuiSysi
// Start address: 0x35b4c0
void xGuiSysFuncCall(_xGuiSys* sys, int32 func)
{
	// Line 633, Address: 0x35b4c0, Func Offset: 0
	// Line 634, Address: 0x35b4d8, Func Offset: 0x18
	// Line 635, Address: 0x35b57c, Func Offset: 0xbc
	// Line 636, Address: 0x35b61c, Func Offset: 0x15c
	// Line 638, Address: 0x35b6bc, Func Offset: 0x1fc
	// Line 640, Address: 0x35b6d0, Func Offset: 0x210
	// Line 644, Address: 0x35b6ec, Func Offset: 0x22c
	// Line 645, Address: 0x35b704, Func Offset: 0x244
	// Line 647, Address: 0x35b70c, Func Offset: 0x24c
	// Line 648, Address: 0x35b724, Func Offset: 0x264
	// Line 650, Address: 0x35b72c, Func Offset: 0x26c
	// Line 654, Address: 0x35b740, Func Offset: 0x280
	// Func End, Address: 0x35b758, Func Offset: 0x298
}

// xGuiItemFuncCall__FP8_xGuiSysP9_xGuiItemi
// Start address: 0x35b760
void xGuiItemFuncCall(_xGuiSys* sys, _xGuiItem* item, int32 func)
{
	// Line 590, Address: 0x35b760, Func Offset: 0
	// Line 591, Address: 0x35b780, Func Offset: 0x20
	// Line 592, Address: 0x35b824, Func Offset: 0xc4
	// Line 593, Address: 0x35b8c4, Func Offset: 0x164
	// Line 594, Address: 0x35b964, Func Offset: 0x204
	// Line 596, Address: 0x35ba04, Func Offset: 0x2a4
	// Line 598, Address: 0x35ba18, Func Offset: 0x2b8
	// Line 601, Address: 0x35ba58, Func Offset: 0x2f8
	// Line 602, Address: 0x35ba74, Func Offset: 0x314
	// Line 604, Address: 0x35ba7c, Func Offset: 0x31c
	// Line 605, Address: 0x35ba98, Func Offset: 0x338
	// Line 607, Address: 0x35baa0, Func Offset: 0x340
	// Line 608, Address: 0x35babc, Func Offset: 0x35c
	// Line 610, Address: 0x35bac4, Func Offset: 0x364
	// Line 611, Address: 0x35bae0, Func Offset: 0x380
	// Line 613, Address: 0x35bae8, Func Offset: 0x388
	// Line 614, Address: 0x35bb04, Func Offset: 0x3a4
	// Line 616, Address: 0x35bb0c, Func Offset: 0x3ac
	// Line 620, Address: 0x35bb20, Func Offset: 0x3c0
	// Func End, Address: 0x35bb3c, Func Offset: 0x3dc
}

// xGuiItemAdvanceText__FP9_xGuiItemi
// Start address: 0x35bb40
void xGuiItemAdvanceText(_xGuiItem* item)
{
	// Line 572, Address: 0x35bb40, Func Offset: 0
	// Line 573, Address: 0x35bb50, Func Offset: 0x10
	// Line 575, Address: 0x35bbf0, Func Offset: 0xb0
	// Line 576, Address: 0x35bc9c, Func Offset: 0x15c
	// Func End, Address: 0x35bcb0, Func Offset: 0x170
}

// xGuiItemSelect__FP8_xGuiSysP9_xGuiItem
// Start address: 0x35bcb0
void xGuiItemSelect(_xGuiSys* sys, _xGuiItem* item)
{
	// Line 531, Address: 0x35bcb0, Func Offset: 0
	// Line 532, Address: 0x35bccc, Func Offset: 0x1c
	// Line 533, Address: 0x35bd6c, Func Offset: 0xbc
	// Line 535, Address: 0x35be0c, Func Offset: 0x15c
	// Line 544, Address: 0x35be18, Func Offset: 0x168
	// Line 546, Address: 0x35be24, Func Offset: 0x174
	// Line 547, Address: 0x35be38, Func Offset: 0x188
	// Line 550, Address: 0x35bef8, Func Offset: 0x248
	// Line 554, Address: 0x35bf0c, Func Offset: 0x25c
	// Line 557, Address: 0x35bf10, Func Offset: 0x260
	// Line 559, Address: 0x35bf1c, Func Offset: 0x26c
	// Line 560, Address: 0x35bf30, Func Offset: 0x280
	// Line 563, Address: 0x35bfe0, Func Offset: 0x330
	// Line 565, Address: 0x35bff4, Func Offset: 0x344
	// Func End, Address: 0x35c010, Func Offset: 0x360
}

// xGuiSelectItemDir__FP8_xGuiSysi
// Start address: 0x35c010
void xGuiSelectItemDir(_xGuiSys* sys, int32 dir)
{
	_xGuiItem* tmp;
	// Line 480, Address: 0x35c010, Func Offset: 0
	// Line 481, Address: 0x35c028, Func Offset: 0x18
	// Line 482, Address: 0x35c0c8, Func Offset: 0xb8
	// Line 483, Address: 0x35c168, Func Offset: 0x158
	// Line 485, Address: 0x35c20c, Func Offset: 0x1fc
	// Line 487, Address: 0x35c218, Func Offset: 0x208
	// Line 489, Address: 0x35c230, Func Offset: 0x220
	// Line 491, Address: 0x35c240, Func Offset: 0x230
	// Line 493, Address: 0x35c248, Func Offset: 0x238
	// Line 494, Address: 0x35c258, Func Offset: 0x248
	// Line 496, Address: 0x35c270, Func Offset: 0x260
	// Line 498, Address: 0x35c288, Func Offset: 0x278
	// Line 499, Address: 0x35c294, Func Offset: 0x284
	// Line 503, Address: 0x35c29c, Func Offset: 0x28c
	// Line 505, Address: 0x35c2b0, Func Offset: 0x2a0
	// Line 507, Address: 0x35c2c4, Func Offset: 0x2b4
	// Line 512, Address: 0x35c2d8, Func Offset: 0x2c8
	// Func End, Address: 0x35c2f0, Func Offset: 0x2e0
}

// xGuiItemAdjustPos__FP9_xGuiItemiii
// Start address: 0x35c2f0
void xGuiItemAdjustPos()
{
	// Line 437, Address: 0x35c2f0, Func Offset: 0
	// Func End, Address: 0x35c2f8, Func Offset: 0x8
}

// xGuiItemSetColor__FP9_xGuiItemiiii
// Start address: 0x35c300
void xGuiItemSetColor(_xGuiItem* item, int32 r, int32 g, int32 b, int32 a)
{
	// Line 409, Address: 0x35c300, Func Offset: 0
	// Line 410, Address: 0x35c330, Func Offset: 0x30
	// Line 412, Address: 0x35c3d0, Func Offset: 0xd0
	// Line 413, Address: 0x35c3ec, Func Offset: 0xec
	// Func End, Address: 0x35c410, Func Offset: 0x110
}

// xGuiItemSetPos__FP9_xGuiItemiii
// Start address: 0x35c410
void xGuiItemSetPos()
{
	// Line 368, Address: 0x35c410, Func Offset: 0
	// Func End, Address: 0x35c418, Func Offset: 0x8
}

// xGuiIdle__FUl
// Start address: 0x35c420
void xGuiIdle()
{
	// Line 328, Address: 0x35c420, Func Offset: 0
	// Func End, Address: 0x35c428, Func Offset: 0x8
}

// xGuiDebug__Fi
// Start address: 0x35c430
void xGuiDebug(int32 mode)
{
	_xGuiSys* s;
	int32 i;
	// Line 239, Address: 0x35c430, Func Offset: 0
	// Line 243, Address: 0x35c448, Func Offset: 0x18
	// Line 245, Address: 0x35c45c, Func Offset: 0x2c
	// Line 247, Address: 0x35c468, Func Offset: 0x38
	// Line 250, Address: 0x35c480, Func Offset: 0x50
	// Line 253, Address: 0x35c4a0, Func Offset: 0x70
	// Line 254, Address: 0x35c4f4, Func Offset: 0xc4
	// Line 256, Address: 0x35c500, Func Offset: 0xd0
	// Line 257, Address: 0x35c518, Func Offset: 0xe8
	// Line 259, Address: 0x35c528, Func Offset: 0xf8
	// Line 261, Address: 0x35c548, Func Offset: 0x118
	// Line 262, Address: 0x35c550, Func Offset: 0x120
	// Line 264, Address: 0x35c55c, Func Offset: 0x12c
	// Line 266, Address: 0x35c56c, Func Offset: 0x13c
	// Line 268, Address: 0x35c584, Func Offset: 0x154
	// Line 269, Address: 0x35c58c, Func Offset: 0x15c
	// Line 271, Address: 0x35c598, Func Offset: 0x168
	// Line 273, Address: 0x35c5a8, Func Offset: 0x178
	// Line 275, Address: 0x35c5c0, Func Offset: 0x190
	// Line 276, Address: 0x35c5c8, Func Offset: 0x198
	// Line 278, Address: 0x35c5d4, Func Offset: 0x1a4
	// Line 280, Address: 0x35c5e4, Func Offset: 0x1b4
	// Line 282, Address: 0x35c5fc, Func Offset: 0x1cc
	// Line 283, Address: 0x35c604, Func Offset: 0x1d4
	// Line 285, Address: 0x35c610, Func Offset: 0x1e0
	// Line 287, Address: 0x35c620, Func Offset: 0x1f0
	// Line 289, Address: 0x35c638, Func Offset: 0x208
	// Line 290, Address: 0x35c640, Func Offset: 0x210
	// Line 292, Address: 0x35c64c, Func Offset: 0x21c
	// Line 294, Address: 0x35c65c, Func Offset: 0x22c
	// Line 300, Address: 0x35c6a4, Func Offset: 0x274
	// Line 301, Address: 0x35c6ac, Func Offset: 0x27c
	// Line 303, Address: 0x35c6b8, Func Offset: 0x288
	// Line 305, Address: 0x35c6c8, Func Offset: 0x298
	// Line 311, Address: 0x35c6e0, Func Offset: 0x2b0
	// Line 312, Address: 0x35c6f4, Func Offset: 0x2c4
	// Func End, Address: 0x35c710, Func Offset: 0x2e0
}

// xGuiDraw__Fv
// Start address: 0x35c710
void xGuiDraw()
{
	_xGuiSys* s;
	int32 i;
	// Line 161, Address: 0x35c710, Func Offset: 0
	// Line 169, Address: 0x35c71c, Func Offset: 0xc
	// Line 201, Address: 0x35c728, Func Offset: 0x18
	// Line 202, Address: 0x35c734, Func Offset: 0x24
	// Line 205, Address: 0x35c74c, Func Offset: 0x3c
	// Line 208, Address: 0x35c76c, Func Offset: 0x5c
	// Line 211, Address: 0x35c778, Func Offset: 0x68
	// Line 214, Address: 0x35c788, Func Offset: 0x78
	// Line 219, Address: 0x35c79c, Func Offset: 0x8c
	// Line 220, Address: 0x35c7c0, Func Offset: 0xb0
	// Line 222, Address: 0x35c7d0, Func Offset: 0xc0
	// Line 223, Address: 0x35c7d8, Func Offset: 0xc8
	// Line 224, Address: 0x35c7e0, Func Offset: 0xd0
	// Line 225, Address: 0x35c7e8, Func Offset: 0xd8
	// Line 227, Address: 0x35c7f8, Func Offset: 0xe8
	// Line 228, Address: 0x35c800, Func Offset: 0xf0
	// Line 231, Address: 0x35c804, Func Offset: 0xf4
	// Func End, Address: 0x35c818, Func Offset: 0x108
}

// xGuiSetLevelReset__Fv
// Start address: 0x35c820
void xGuiSetLevelReset()
{
	// Line 151, Address: 0x35c820, Func Offset: 0
	// Func End, Address: 0x35c828, Func Offset: 0x8
}

// xGuiInit__Fv
// Start address: 0x35c830
void xGuiInit()
{
	int32 j;
	int32 i;
	// Line 56, Address: 0x35c830, Func Offset: 0
	// Line 69, Address: 0x35c838, Func Offset: 0x8
	// Line 71, Address: 0x35c844, Func Offset: 0x14
	// Line 72, Address: 0x35c860, Func Offset: 0x30
	// Line 73, Address: 0x35c87c, Func Offset: 0x4c
	// Line 74, Address: 0x35c898, Func Offset: 0x68
	// Line 75, Address: 0x35c8b4, Func Offset: 0x84
	// Line 76, Address: 0x35c8d0, Func Offset: 0xa0
	// Line 77, Address: 0x35c8ec, Func Offset: 0xbc
	// Line 78, Address: 0x35c908, Func Offset: 0xd8
	// Line 79, Address: 0x35c924, Func Offset: 0xf4
	// Line 81, Address: 0x35c940, Func Offset: 0x110
	// Line 83, Address: 0x35c94c, Func Offset: 0x11c
	// Line 84, Address: 0x35c970, Func Offset: 0x140
	// Line 86, Address: 0x35c984, Func Offset: 0x154
	// Line 88, Address: 0x35c990, Func Offset: 0x160
	// Line 89, Address: 0x35c9b4, Func Offset: 0x184
	// Line 91, Address: 0x35c9c4, Func Offset: 0x194
	// Line 92, Address: 0x35c9e0, Func Offset: 0x1b0
	// Line 95, Address: 0x35c9f4, Func Offset: 0x1c4
	// Line 97, Address: 0x35ca00, Func Offset: 0x1d0
	// Line 98, Address: 0x35ca1c, Func Offset: 0x1ec
	// Line 99, Address: 0x35ca38, Func Offset: 0x208
	// Line 100, Address: 0x35ca54, Func Offset: 0x224
	// Line 101, Address: 0x35ca70, Func Offset: 0x240
	// Line 102, Address: 0x35ca8c, Func Offset: 0x25c
	// Line 103, Address: 0x35caa8, Func Offset: 0x278
	// Line 104, Address: 0x35cac4, Func Offset: 0x294
	// Line 105, Address: 0x35cae0, Func Offset: 0x2b0
	// Line 107, Address: 0x35cafc, Func Offset: 0x2cc
	// Line 108, Address: 0x35cb18, Func Offset: 0x2e8
	// Line 110, Address: 0x35cb34, Func Offset: 0x304
	// Line 111, Address: 0x35cb50, Func Offset: 0x320
	// Line 112, Address: 0x35cb6c, Func Offset: 0x33c
	// Line 113, Address: 0x35cb88, Func Offset: 0x358
	// Line 115, Address: 0x35cba4, Func Offset: 0x374
	// Line 118, Address: 0x35cbc0, Func Offset: 0x390
	// Line 120, Address: 0x35cbcc, Func Offset: 0x39c
	// Line 121, Address: 0x35cbf0, Func Offset: 0x3c0
	// Line 123, Address: 0x35cc04, Func Offset: 0x3d4
	// Line 125, Address: 0x35cc10, Func Offset: 0x3e0
	// Line 126, Address: 0x35cc34, Func Offset: 0x404
	// Line 127, Address: 0x35cc44, Func Offset: 0x414
	// Line 130, Address: 0x35cc54, Func Offset: 0x424
	// Line 131, Address: 0x35cc5c, Func Offset: 0x42c
	// Line 134, Address: 0x35cc60, Func Offset: 0x430
	// Line 138, Address: 0x35cc68, Func Offset: 0x438
	// Line 139, Address: 0x35cc70, Func Offset: 0x440
	// Func End, Address: 0x35cc80, Func Offset: 0x450
}

