typedef struct _xGuiSys;
typedef struct _xGuiItem;
typedef struct tagxPad;
typedef struct tagXStreamMDSDirectory;
typedef struct tagxPadAction;
typedef struct XStreamHeader;
typedef struct _tagNativePadData;
typedef struct _XBUTTON;
typedef struct tagXStreamDirectoryEntry;
typedef struct _xGuiMaya;

typedef void(*type_1)(int32, int32);
typedef void(*type_2)(_xGuiItem*, _xGuiSys*);
typedef void(*type_5)(int32, int32);
typedef void(*type_7)(_xGuiItem*, _xGuiSys*);
typedef void(*type_8)(int32, int32, int32, int32);
typedef void(*type_9)(int32, int32);
typedef void(*type_11)(int32, int32, int32);
typedef void(*type_13)(int32, int32);
typedef void(*type_14)(int32, int32);
typedef void(*type_15)(int32, int32, int32, int32, int32);
typedef int32(*type_17)(int32);
typedef void(*type_18)(int32, int32);
typedef void(*type_19)(int32, int32, int32);
typedef void(*type_20)(int32, int32);
typedef void(*type_21)(int32, int32, int32);
typedef void(*type_22)(int32, int32);
typedef void(*type_23)(int32, int32, int32);
typedef void(*type_24)(int32, int32);
typedef void(*type_26)(int32, int32);
typedef void(*type_27)(int32, int32, int32, int32, int32);
typedef void(*type_28)(int32, int32, int32, int32);
typedef int32(*type_29)(int32, int32, int32);
typedef void(*type_32)(int32, int32);
typedef void(*type_33)(int32, int32, int32, int32);
typedef int32(*type_36)(int32);
typedef int32(*type_37)(int32, int32);
typedef void(*type_38)(int32, int32);
typedef void(*type_39)(int32);
typedef void(*type_40)(int32, int32);
typedef void(*type_41)(int32, int32);
typedef void(*type_42)(int32, int32, int32, int32);
typedef void(*type_43)(int32, int32, int32);
typedef void(*type_44)(_xGuiItem*, _xGuiSys*);
typedef void(*type_45)(int32, int32, int32);
typedef int32(*type_46)(int32);
typedef void(*type_47)(_xGuiItem*, _xGuiSys*);
typedef void(*type_48)(int32, int32, int32, int32);
typedef void(*type_50)(int32, int32);
typedef void(*type_53)(int32, int32, int32, int32);
typedef void(*type_54)(_xGuiItem*, _xGuiSys*);
typedef void(*type_55)(int32, int32, int32, int32);
typedef void(*type_56)(int32, int32, int32);
typedef int32(*type_59)(int32);
typedef void(*type_60)(_xGuiItem*, _xGuiSys*);
typedef void(*type_61)(int32, int32, int32, int32);
typedef void(*type_64)(int32, int32);

typedef void* type_0[2];
typedef int8 type_3[3];
typedef int16 type_4[2];
typedef int16 type_6[4];
typedef _xGuiItem type_10[180];
typedef _xGuiSys type_12[52];
typedef tagXStreamDirectoryEntry type_16[1000];
typedef _XBUTTON type_25[16];
typedef uint8 type_30[6];
typedef int8 type_31[2048];
typedef void* type_34[5];
typedef _xGuiItem* type_35[6];
typedef uint8 type_49[2];
typedef int8 type_51[128];
typedef int16 type_52[2];
typedef uint8 type_57[4];
typedef uint8 type_58[12];
typedef uint8 type_62[12];
typedef _xGuiSys* type_63[6];

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

struct tagxPad
{
	ulong32 m_lastTime;
	ulong32 m_currentTime;
	uint8 m_active;
	uint8 m_playerNumber;
	uint8 m_controllerNumber;
	uint8 m_deviceType;
	int32 m_padHandle;
	void* m_funcInit;
	void* m_funcMapper;
	void* m_funcAction;
	_tagNativePadData* m_pad;
	_XBUTTON m_xbutton[16];
	uint8 m_analogActive;
	int8 m_analogXValue;
	int8 m_analogYValue;
	int32 m_shock : 3;
	uint8 m_vib[6];
};

struct tagXStreamMDSDirectory
{
	uint32 count;
	tagXStreamDirectoryEntry directory[1000];
};

struct tagxPadAction
{
	uint32 m_action;
	uint16 m_button;
	uint16 m_status;
	uint8 pad;
	uint8 m_analogActive;
	int8 m_analogXValue;
	int8 m_analogYValue;
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

struct _tagNativePadData
{
	uint8 status;
	struct
	{
		uint32 id : 4;
		uint32 size : 4;
	};
	uint16 buttons;
	uint8 analog[4];
	uint8 pressure[12];
	uint8 reserved[12];
	uint16 last_buttons;
	uint16 pressed;
	uint16 released;
};

struct _XBUTTON
{
	uint32 m_id;
	uint32 m_nativeID;
	uint32 m_nativeJoyID;
	struct
	{
		uint32 m_down : 13;
		uint32 m_last_down : 13;
		uint32 m_pressed : 1;
		uint32 m_last_pressed : 1;
		uint32 m_released : 1;
		uint32 m_last_released : 1;
		uint32 unused : 2;
	};
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

uint32 interpreterMethodItem;
uint32 interpreterMethodSys;
_xGuiSys gGuiSys[52];
int8 vAssertBuf2[128];
XStreamHeader currentHeader;
_xGuiItem gGuiItem[180];
_xGuiSys* gActiveGuiSys;
void(*iGuiItemRenderFunc_MayaClip)(_xGuiItem*, _xGuiSys*);
void(*iGuiItemRenderFunc_Maya)(_xGuiItem*, _xGuiSys*);
void(*iGuiItemRenderFunc_TextNumber)(_xGuiItem*, _xGuiSys*);
void(*iGuiItemRenderFunc_Text)(_xGuiItem*, _xGuiSys*);
void(*iGuiItemRenderFunc_Image)(_xGuiItem*, _xGuiSys*);
void(*iGuiItemRenderFunc_DebugOutline)(_xGuiItem*, _xGuiSys*);
void(*xScriptGuiItemRemoveFlag)(int32, int32);
void(*xScriptGuiItemAddFlag)(int32, int32);
int32(*xScriptGuiItemGetFlag)(int32);
void(*xScriptGuiItemLink)(int32, int32, int32, int32);
void(*xScriptGuiItemAdjustPos)(int32, int32, int32, int32);
void(*xScriptGuiItemSetPartUVUsingPart)(int32, int32, int32);
int32(*xScriptGuiItemGetDataID)(int32);
void(*xScriptGuiItemSetPartID)(int32, int32);
void(*xScriptGuiItemSetMayaVal)(int32, int32, int32);
void(*xScriptGuiItemSetMayaInfoModelID)(int32, int32);
void(*xScriptGuiItemSetMayaInfoTextureID)(int32, int32);
void(*xScriptGuiItemSetMayaInfo)(int32, int32, int32, int32);
void(*xScriptGuiItemSetColor)(int32, int32, int32, int32, int32);
void(*xScriptGuiItemSetPadObj)(int32, int32);
void(*xScriptGuiItemSetRenderFunc)(int32, int32);
void(*xScriptGuiItemAdjustOffset)(int32, int32, int32);
void(*xScriptGuiItemSetOffset)(int32, int32, int32);
void(*xScriptGuiItemSetPos)(int32, int32, int32, int32);
void(*xScriptGuiItemSetFlag)(int32, int32);
void(*xScriptGuiItemSetDataID)(int32, int32);
void(*xScriptGuiItemFuncCall)(int32, int32, int32);
void(*xScriptGuiItemSelect)(int32, int32);
int32(*xScriptGuiItemCreate)(int32, int32);
void(*xScriptGuiItemAdvanceText)(int32, int32);
int32(*xScriptGuiSysAtOffset)(int32, int32, int32);
void(*xScriptGuiSysOffsetMoveTo)(int32, int32, int32, int32, int32);
void(*xScriptGuiSysAdjustOffset)(int32, int32, int32);
void(*xScriptGuiSysSetOffset)(int32, int32, int32);
void(*xScriptGuiSysSetRenderFunc)(int32, int32);
void(*xScriptGuiSysSetDim)(int32, int32, int32, int32);
void(*xScriptGuiSysSetPos)(int32, int32, int32, int32);
void(*xScriptGuiSysSetPadObj)(int32, int32);
void(*xScriptGuiSysSetFlag)(int32, int32);
void(*xScriptGuiSysSet)(int32);
void(*xScriptGuiSysRemoveFlag)(int32, int32);
void(*xScriptGuiSysLink)(int32, int32, int32, int32);
int32(*xScriptGuiSysGetFlag)(int32);
int32(*xScriptGuiSysCreate)(int32);
void(*xScriptGuiSysAdjustPos)(int32, int32, int32, int32);
void(*xScriptGuiSysAddFlag)(int32, int32);

int32 xScriptGuiSysGetFlag(int32 sysIdx);
void xScriptGuiSysSetFlag(int32 sysIdx, int32 flag);
void xScriptGuiSysAddFlag(int32 sysIdx, int32 flag);
void xScriptGuiSysRemoveFlag(int32 sysIdx, int32 flag);
int32 xScriptGuiItemGetFlag(int32 itemIdx);
void xScriptGuiItemSetFlag(int32 itemIdx, int32 flag);
void xScriptGuiItemAddFlag(int32 itemIdx, int32 flag);
void xScriptGuiItemRemoveFlag(int32 itemIdx, int32 flag);
void xScriptGuiItemSetPadObj(int32 itemIdx, int32 padobj);
int32 xPadMapperFunc_GuiMenu(tagxPad* pad, tagxPadAction* actions, int32 maxActions);
void xPadActionFunc_GuiMenu(int32 count, tagxPadAction* actions);
void xGuiSendPadAction(_xGuiSys* sys, _xGuiItem* item, int32 action);
void xScriptGuiItemSetDataID(int32 itemIdx, int32 dataID);
void xScriptGuiItemLink(int32 itemA, int32 dira, int32 itemB, int32 dirb);
void xScriptGuiItemSetPartUVUsingPart(int32 itemIdx, int32 modelID, int32 partID);
void xScriptGuiItemSetMayaVal(int32 itemIdx, int32 valIdx, int32 value);
void xScriptGuiItemSetMayaInfoModelID(int32 itemIdx, int32 modelID);
void xScriptGuiItemSetMayaInfoTextureID(int32 itemIdx, int32 textureID);
void xScriptGuiItemSetMayaInfo(int32 itemIdx, int32 modelID, int32 textureID, int32 partID);
void xScriptGuiItemSetPartID(int32 itemIdx, int32 partID);
void xScriptGuiItemSetColor(int32 itemIdx, int32 r, int32 g, int32 b, int32 a);
int32 xScriptGuiItemGetDataID(int32 itemIdx);
void xScriptGuiItemAdjustPos(int32 itemIdx, int32 dx, int32 dy, int32 dz);
void xScriptGuiItemSetPos(int32 itemIdx, int32 x, int32 y, int32 z);
void xScriptGuiItemAdjustOffset(int32 itemIdx, int32 dx, int32 dy);
void xScriptGuiItemSetOffset(int32 itemIdx, int32 dx, int32 dy);
void xScriptGuiItemFuncCall(int32 sysIdx, int32 idx, int32 func);
void xScriptGuiItemSetRenderFunc(int32 itemIdx, int32 funcID);
void xScriptGuiItemSelect(int32 sysIdx, int32 idx);
void xScriptGuiItemAdvanceText(int32 idx, int32 amount);
int32 xScriptGuiItemCreate(int32 flag, int32 sysIdx);
void xScriptGuiSysLink(int32 sysA, int32 dira, int32 sysB, int32 dirb);
void xScriptGuiSysSetDim(int32 sysIdx, int32 w, int32 h, int32 d);
void xScriptGuiSysAdjustPos(int32 sysIdx, int32 dx, int32 dy, int32 dz);
void xScriptGuiSysOffsetMoveTo(int32 sysID, int32 xoff, int32 yoff, int32 dx, int32 dy);
int32 xScriptGuiSysAtOffset(int32 sysID, int32 xoff, int32 yoff);
void xScriptGuiSysAdjustOffset(int32 sysIdx, int32 dx, int32 dy);
void xScriptGuiSysSetOffset(int32 sysIdx, int32 dx, int32 dy);
void xScriptGuiSysSetPos(int32 sysIdx, int32 x, int32 y, int32 z);
void xScriptGuiSysSet(int32 idx);
void xScriptGuiSysSetPadObj(int32 idx, int32 padobj);
void xScriptGuiSysSetRenderFunc(int32 sys, int32 funcID);
int32 xScriptGuiSysCreate(int32 flag);
void xGuiReInitializeInterpreter();
void xGuiRegisterExternals();

// xScriptGuiSysGetFlag__Fi
// Start address: 0x3a62f0
int32 xScriptGuiSysGetFlag(int32 sysIdx)
{
	// Line 1356, Address: 0x3a62f0, Func Offset: 0
	// Line 1357, Address: 0x3a6300, Func Offset: 0x10
	// Line 1358, Address: 0x3a63a0, Func Offset: 0xb0
	// Line 1360, Address: 0x3a6444, Func Offset: 0x154
	// Line 1361, Address: 0x3a6464, Func Offset: 0x174
	// Func End, Address: 0x3a6478, Func Offset: 0x188
}

// xScriptGuiSysSetFlag__Fii
// Start address: 0x3a6480
void xScriptGuiSysSetFlag(int32 sysIdx, int32 flag)
{
	// Line 1348, Address: 0x3a6480, Func Offset: 0
	// Line 1349, Address: 0x3a6498, Func Offset: 0x18
	// Line 1350, Address: 0x3a6538, Func Offset: 0xb8
	// Line 1352, Address: 0x3a65dc, Func Offset: 0x15c
	// Line 1353, Address: 0x3a6600, Func Offset: 0x180
	// Func End, Address: 0x3a6618, Func Offset: 0x198
}

// xScriptGuiSysAddFlag__Fii
// Start address: 0x3a6620
void xScriptGuiSysAddFlag(int32 sysIdx, int32 flag)
{
	// Line 1338, Address: 0x3a6620, Func Offset: 0
	// Line 1340, Address: 0x3a6638, Func Offset: 0x18
	// Line 1341, Address: 0x3a66d8, Func Offset: 0xb8
	// Line 1344, Address: 0x3a677c, Func Offset: 0x15c
	// Line 1345, Address: 0x3a67a0, Func Offset: 0x180
	// Func End, Address: 0x3a67b8, Func Offset: 0x198
}

// xScriptGuiSysRemoveFlag__Fii
// Start address: 0x3a67c0
void xScriptGuiSysRemoveFlag(int32 sysIdx, int32 flag)
{
	// Line 1329, Address: 0x3a67c0, Func Offset: 0
	// Line 1331, Address: 0x3a67d8, Func Offset: 0x18
	// Line 1332, Address: 0x3a6878, Func Offset: 0xb8
	// Line 1334, Address: 0x3a691c, Func Offset: 0x15c
	// Line 1335, Address: 0x3a6940, Func Offset: 0x180
	// Func End, Address: 0x3a6958, Func Offset: 0x198
}

// xScriptGuiItemGetFlag__Fi
// Start address: 0x3a6960
int32 xScriptGuiItemGetFlag(int32 itemIdx)
{
	// Line 1321, Address: 0x3a6960, Func Offset: 0
	// Line 1322, Address: 0x3a6970, Func Offset: 0x10
	// Line 1323, Address: 0x3a6a10, Func Offset: 0xb0
	// Line 1325, Address: 0x3a6ab4, Func Offset: 0x154
	// Line 1326, Address: 0x3a6ad4, Func Offset: 0x174
	// Func End, Address: 0x3a6ae8, Func Offset: 0x188
}

// xScriptGuiItemSetFlag__Fii
// Start address: 0x3a6af0
void xScriptGuiItemSetFlag(int32 itemIdx, int32 flag)
{
	// Line 1313, Address: 0x3a6af0, Func Offset: 0
	// Line 1314, Address: 0x3a6b08, Func Offset: 0x18
	// Line 1315, Address: 0x3a6ba8, Func Offset: 0xb8
	// Line 1317, Address: 0x3a6c4c, Func Offset: 0x15c
	// Line 1318, Address: 0x3a6c70, Func Offset: 0x180
	// Func End, Address: 0x3a6c88, Func Offset: 0x198
}

// xScriptGuiItemAddFlag__Fii
// Start address: 0x3a6c90
void xScriptGuiItemAddFlag(int32 itemIdx, int32 flag)
{
	// Line 1304, Address: 0x3a6c90, Func Offset: 0
	// Line 1305, Address: 0x3a6ca8, Func Offset: 0x18
	// Line 1306, Address: 0x3a6d48, Func Offset: 0xb8
	// Line 1309, Address: 0x3a6dec, Func Offset: 0x15c
	// Line 1310, Address: 0x3a6e10, Func Offset: 0x180
	// Func End, Address: 0x3a6e28, Func Offset: 0x198
}

// xScriptGuiItemRemoveFlag__Fii
// Start address: 0x3a6e30
void xScriptGuiItemRemoveFlag(int32 itemIdx, int32 flag)
{
	// Line 1295, Address: 0x3a6e30, Func Offset: 0
	// Line 1296, Address: 0x3a6e48, Func Offset: 0x18
	// Line 1297, Address: 0x3a6ee8, Func Offset: 0xb8
	// Line 1300, Address: 0x3a6f8c, Func Offset: 0x15c
	// Line 1301, Address: 0x3a6fb0, Func Offset: 0x180
	// Func End, Address: 0x3a6fc8, Func Offset: 0x198
}

// xScriptGuiItemSetPadObj__Fii
// Start address: 0x3a6fd0
void xScriptGuiItemSetPadObj(int32 itemIdx, int32 padobj)
{
	// Line 1287, Address: 0x3a6fd0, Func Offset: 0
	// Line 1288, Address: 0x3a6fe8, Func Offset: 0x18
	// Line 1289, Address: 0x3a7088, Func Offset: 0xb8
	// Line 1291, Address: 0x3a712c, Func Offset: 0x15c
	// Line 1292, Address: 0x3a7148, Func Offset: 0x178
	// Func End, Address: 0x3a7160, Func Offset: 0x190
}

// xPadMapperFunc_GuiMenu__FP7tagxPadP13tagxPadActioni
// Start address: 0x3a7160
int32 xPadMapperFunc_GuiMenu(tagxPad* pad, tagxPadAction* actions, int32 maxActions)
{
	tagxPadAction* a;
	_XBUTTON* b;
	int32 i;
	int32 actionCount;
	// Line 1177, Address: 0x3a7160, Func Offset: 0
	// Line 1180, Address: 0x3a7180, Func Offset: 0x20
	// Line 1181, Address: 0x3a7220, Func Offset: 0xc0
	// Line 1183, Address: 0x3a72c0, Func Offset: 0x160
	// Line 1185, Address: 0x3a72c4, Func Offset: 0x164
	// Line 1187, Address: 0x3a72d0, Func Offset: 0x170
	// Line 1188, Address: 0x3a72dc, Func Offset: 0x17c
	// Line 1193, Address: 0x3a72ec, Func Offset: 0x18c
	// Line 1194, Address: 0x3a72f4, Func Offset: 0x194
	// Line 1195, Address: 0x3a7304, Func Offset: 0x1a4
	// Line 1197, Address: 0x3a7308, Func Offset: 0x1a8
	// Line 1200, Address: 0x3a73a4, Func Offset: 0x244
	// Line 1201, Address: 0x3a73b8, Func Offset: 0x258
	// Line 1202, Address: 0x3a73c0, Func Offset: 0x260
	// Line 1205, Address: 0x3a73c8, Func Offset: 0x268
	// Line 1206, Address: 0x3a73dc, Func Offset: 0x27c
	// Line 1207, Address: 0x3a73e4, Func Offset: 0x284
	// Line 1210, Address: 0x3a73ec, Func Offset: 0x28c
	// Line 1211, Address: 0x3a7400, Func Offset: 0x2a0
	// Line 1212, Address: 0x3a7408, Func Offset: 0x2a8
	// Line 1215, Address: 0x3a7410, Func Offset: 0x2b0
	// Line 1216, Address: 0x3a7424, Func Offset: 0x2c4
	// Line 1217, Address: 0x3a742c, Func Offset: 0x2cc
	// Line 1221, Address: 0x3a7434, Func Offset: 0x2d4
	// Line 1222, Address: 0x3a7448, Func Offset: 0x2e8
	// Line 1223, Address: 0x3a7450, Func Offset: 0x2f0
	// Line 1226, Address: 0x3a7458, Func Offset: 0x2f8
	// Line 1227, Address: 0x3a746c, Func Offset: 0x30c
	// Line 1228, Address: 0x3a7474, Func Offset: 0x314
	// Line 1231, Address: 0x3a747c, Func Offset: 0x31c
	// Line 1232, Address: 0x3a7490, Func Offset: 0x330
	// Line 1233, Address: 0x3a7498, Func Offset: 0x338
	// Line 1236, Address: 0x3a74a0, Func Offset: 0x340
	// Line 1237, Address: 0x3a74b4, Func Offset: 0x354
	// Line 1238, Address: 0x3a74bc, Func Offset: 0x35c
	// Line 1241, Address: 0x3a74c4, Func Offset: 0x364
	// Line 1242, Address: 0x3a74d8, Func Offset: 0x378
	// Line 1243, Address: 0x3a74e0, Func Offset: 0x380
	// Line 1245, Address: 0x3a74e8, Func Offset: 0x388
	// Line 1246, Address: 0x3a74fc, Func Offset: 0x39c
	// Line 1247, Address: 0x3a7504, Func Offset: 0x3a4
	// Line 1250, Address: 0x3a750c, Func Offset: 0x3ac
	// Line 1251, Address: 0x3a7520, Func Offset: 0x3c0
	// Line 1252, Address: 0x3a7528, Func Offset: 0x3c8
	// Line 1255, Address: 0x3a7530, Func Offset: 0x3d0
	// Line 1256, Address: 0x3a7544, Func Offset: 0x3e4
	// Line 1259, Address: 0x3a754c, Func Offset: 0x3ec
	// Line 1261, Address: 0x3a7550, Func Offset: 0x3f0
	// Line 1262, Address: 0x3a755c, Func Offset: 0x3fc
	// Line 1263, Address: 0x3a7560, Func Offset: 0x400
	// Line 1265, Address: 0x3a756c, Func Offset: 0x40c
	// Line 1266, Address: 0x3a7570, Func Offset: 0x410
	// Line 1269, Address: 0x3a7588, Func Offset: 0x428
	// Func End, Address: 0x3a75a4, Func Offset: 0x444
}

// xPadActionFunc_GuiMenu__FP7tagxPadiP13tagxPadAction
// Start address: 0x3a75b0
void xPadActionFunc_GuiMenu(int32 count, tagxPadAction* actions)
{
	_xGuiSys* activeSys;
	tagxPadAction* a;
	int32 i;
	// Line 1083, Address: 0x3a75b0, Func Offset: 0
	// Line 1089, Address: 0x3a75d4, Func Offset: 0x24
	// Line 1091, Address: 0x3a75d8, Func Offset: 0x28
	// Line 1093, Address: 0x3a75e8, Func Offset: 0x38
	// Line 1098, Address: 0x3a75f0, Func Offset: 0x40
	// Line 1099, Address: 0x3a76d4, Func Offset: 0x124
	// Line 1101, Address: 0x3a76d8, Func Offset: 0x128
	// Line 1105, Address: 0x3a7708, Func Offset: 0x158
	// Line 1106, Address: 0x3a7710, Func Offset: 0x160
	// Line 1108, Address: 0x3a771c, Func Offset: 0x16c
	// Line 1110, Address: 0x3a772c, Func Offset: 0x17c
	// Line 1114, Address: 0x3a7734, Func Offset: 0x184
	// Line 1115, Address: 0x3a773c, Func Offset: 0x18c
	// Line 1116, Address: 0x3a7748, Func Offset: 0x198
	// Line 1117, Address: 0x3a7758, Func Offset: 0x1a8
	// Line 1120, Address: 0x3a7760, Func Offset: 0x1b0
	// Line 1121, Address: 0x3a7768, Func Offset: 0x1b8
	// Line 1122, Address: 0x3a7774, Func Offset: 0x1c4
	// Line 1123, Address: 0x3a7784, Func Offset: 0x1d4
	// Line 1127, Address: 0x3a778c, Func Offset: 0x1dc
	// Line 1128, Address: 0x3a7794, Func Offset: 0x1e4
	// Line 1129, Address: 0x3a77a0, Func Offset: 0x1f0
	// Line 1160, Address: 0x3a77b0, Func Offset: 0x200
	// Line 1162, Address: 0x3a77c4, Func Offset: 0x214
	// Func End, Address: 0x3a77ec, Func Offset: 0x23c
}

// xGuiSendPadAction__FP8_xGuiSysP9_xGuiItemi
// Start address: 0x3a77f0
void xGuiSendPadAction(_xGuiSys* sys, _xGuiItem* item, int32 action)
{
	// Line 1037, Address: 0x3a77f0, Func Offset: 0
	// Line 1039, Address: 0x3a7810, Func Offset: 0x20
	// Line 1041, Address: 0x3a781c, Func Offset: 0x2c
	// Line 1043, Address: 0x3a783c, Func Offset: 0x4c
	// Line 1045, Address: 0x3a7848, Func Offset: 0x58
	// Line 1049, Address: 0x3a7868, Func Offset: 0x78
	// Line 1050, Address: 0x3a7870, Func Offset: 0x80
	// Line 1055, Address: 0x3a787c, Func Offset: 0x8c
	// Line 1057, Address: 0x3a78a4, Func Offset: 0xb4
	// Line 1058, Address: 0x3a78ac, Func Offset: 0xbc
	// Line 1063, Address: 0x3a78b8, Func Offset: 0xc8
	// Line 1065, Address: 0x3a78e0, Func Offset: 0xf0
	// Func End, Address: 0x3a78fc, Func Offset: 0x10c
}

// xScriptGuiItemSetDataID__Fii
// Start address: 0x3a7900
void xScriptGuiItemSetDataID(int32 itemIdx, int32 dataID)
{
	// Line 1014, Address: 0x3a7900, Func Offset: 0
	// Line 1015, Address: 0x3a7918, Func Offset: 0x18
	// Line 1016, Address: 0x3a79b8, Func Offset: 0xb8
	// Line 1019, Address: 0x3a7a5c, Func Offset: 0x15c
	// Line 1020, Address: 0x3a7a80, Func Offset: 0x180
	// Func End, Address: 0x3a7a98, Func Offset: 0x198
}

// xScriptGuiItemLink__Fiiii
// Start address: 0x3a7aa0
void xScriptGuiItemLink(int32 itemA, int32 dira, int32 itemB, int32 dirb)
{
	// Line 989, Address: 0x3a7aa0, Func Offset: 0
	// Line 990, Address: 0x3a7ac8, Func Offset: 0x28
	// Line 991, Address: 0x3a7b68, Func Offset: 0xc8
	// Line 993, Address: 0x3a7c0c, Func Offset: 0x16c
	// Line 994, Address: 0x3a7cac, Func Offset: 0x20c
	// Line 996, Address: 0x3a7d50, Func Offset: 0x2b0
	// Line 997, Address: 0x3a7d90, Func Offset: 0x2f0
	// Func End, Address: 0x3a7db0, Func Offset: 0x310
}

// xScriptGuiItemSetPartUVUsingPart__Fiii
// Start address: 0x3a7db0
void xScriptGuiItemSetPartUVUsingPart(int32 itemIdx, int32 modelID, int32 partID)
{
	_xGuiItem* i;
	// Line 932, Address: 0x3a7db0, Func Offset: 0
	// Line 935, Address: 0x3a7dd0, Func Offset: 0x20
	// Line 936, Address: 0x3a7e70, Func Offset: 0xc0
	// Line 938, Address: 0x3a7f14, Func Offset: 0x164
	// Line 941, Address: 0x3a7fb8, Func Offset: 0x208
	// Line 944, Address: 0x3a7fd0, Func Offset: 0x220
	// Line 947, Address: 0x3a7fe8, Func Offset: 0x238
	// Func End, Address: 0x3a8004, Func Offset: 0x254
}

// xScriptGuiItemSetMayaVal__Fiii
// Start address: 0x3a8010
void xScriptGuiItemSetMayaVal(int32 itemIdx, int32 valIdx, int32 value)
{
	_xGuiItem* i;
	// Line 900, Address: 0x3a8010, Func Offset: 0
	// Line 903, Address: 0x3a8030, Func Offset: 0x20
	// Line 904, Address: 0x3a80d0, Func Offset: 0xc0
	// Line 906, Address: 0x3a8174, Func Offset: 0x164
	// Line 907, Address: 0x3a8218, Func Offset: 0x208
	// Line 909, Address: 0x3a82b8, Func Offset: 0x2a8
	// Line 910, Address: 0x3a835c, Func Offset: 0x34c
	// Line 913, Address: 0x3a8400, Func Offset: 0x3f0
	// Line 915, Address: 0x3a8418, Func Offset: 0x408
	// Line 916, Address: 0x3a8420, Func Offset: 0x410
	// Func End, Address: 0x3a843c, Func Offset: 0x42c
}

// xScriptGuiItemSetMayaInfoModelID__Fii
// Start address: 0x3a8440
void xScriptGuiItemSetMayaInfoModelID(int32 itemIdx, int32 modelID)
{
	_xGuiItem* i;
	// Line 872, Address: 0x3a8440, Func Offset: 0
	// Line 875, Address: 0x3a8458, Func Offset: 0x18
	// Line 876, Address: 0x3a84f8, Func Offset: 0xb8
	// Line 879, Address: 0x3a859c, Func Offset: 0x15c
	// Line 881, Address: 0x3a85b4, Func Offset: 0x174
	// Line 882, Address: 0x3a85b8, Func Offset: 0x178
	// Func End, Address: 0x3a85d0, Func Offset: 0x190
}

// xScriptGuiItemSetMayaInfoTextureID__Fii
// Start address: 0x3a85d0
void xScriptGuiItemSetMayaInfoTextureID(int32 itemIdx, int32 textureID)
{
	_xGuiItem* i;
	// Line 848, Address: 0x3a85d0, Func Offset: 0
	// Line 851, Address: 0x3a85e8, Func Offset: 0x18
	// Line 852, Address: 0x3a8688, Func Offset: 0xb8
	// Line 855, Address: 0x3a872c, Func Offset: 0x15c
	// Line 857, Address: 0x3a8744, Func Offset: 0x174
	// Line 858, Address: 0x3a8748, Func Offset: 0x178
	// Func End, Address: 0x3a8760, Func Offset: 0x190
}

// xScriptGuiItemSetMayaInfo__Fiiii
// Start address: 0x3a8760
void xScriptGuiItemSetMayaInfo(int32 itemIdx, int32 modelID, int32 textureID, int32 partID)
{
	_xGuiItem* i;
	// Line 819, Address: 0x3a8760, Func Offset: 0
	// Line 822, Address: 0x3a8788, Func Offset: 0x28
	// Line 823, Address: 0x3a8828, Func Offset: 0xc8
	// Line 825, Address: 0x3a88cc, Func Offset: 0x16c
	// Line 828, Address: 0x3a8970, Func Offset: 0x210
	// Line 830, Address: 0x3a8988, Func Offset: 0x228
	// Line 831, Address: 0x3a898c, Func Offset: 0x22c
	// Line 832, Address: 0x3a8990, Func Offset: 0x230
	// Line 834, Address: 0x3a8994, Func Offset: 0x234
	// Func End, Address: 0x3a89b4, Func Offset: 0x254
}

// xScriptGuiItemSetPartID__Fii
// Start address: 0x3a89c0
void xScriptGuiItemSetPartID(int32 itemIdx, int32 partID)
{
	_xGuiItem* i;
	// Line 789, Address: 0x3a89c0, Func Offset: 0
	// Line 792, Address: 0x3a89d8, Func Offset: 0x18
	// Line 793, Address: 0x3a8a78, Func Offset: 0xb8
	// Line 795, Address: 0x3a8b1c, Func Offset: 0x15c
	// Line 798, Address: 0x3a8bc0, Func Offset: 0x200
	// Line 800, Address: 0x3a8bd8, Func Offset: 0x218
	// Line 801, Address: 0x3a8bdc, Func Offset: 0x21c
	// Func End, Address: 0x3a8bf4, Func Offset: 0x234
}

// xScriptGuiItemSetColor__Fiiiii
// Start address: 0x3a8c00
void xScriptGuiItemSetColor(int32 itemIdx, int32 r, int32 g, int32 b, int32 a)
{
	// Line 753, Address: 0x3a8c00, Func Offset: 0
	// Line 754, Address: 0x3a8c30, Func Offset: 0x30
	// Line 755, Address: 0x3a8cd0, Func Offset: 0xd0
	// Line 756, Address: 0x3a8d74, Func Offset: 0x174
	// Line 757, Address: 0x3a8e14, Func Offset: 0x214
	// Line 758, Address: 0x3a8eb8, Func Offset: 0x2b8
	// Line 759, Address: 0x3a8f58, Func Offset: 0x358
	// Line 760, Address: 0x3a8ffc, Func Offset: 0x3fc
	// Line 761, Address: 0x3a909c, Func Offset: 0x49c
	// Line 762, Address: 0x3a9140, Func Offset: 0x540
	// Line 763, Address: 0x3a91e0, Func Offset: 0x5e0
	// Line 772, Address: 0x3a9284, Func Offset: 0x684
	// Line 773, Address: 0x3a92b4, Func Offset: 0x6b4
	// Func End, Address: 0x3a92d8, Func Offset: 0x6d8
}

// xScriptGuiItemGetDataID__Fi
// Start address: 0x3a92e0
int32 xScriptGuiItemGetDataID(int32 itemIdx)
{
	_xGuiItem* i;
	// Line 715, Address: 0x3a92e0, Func Offset: 0
	// Line 718, Address: 0x3a92f0, Func Offset: 0x10
	// Line 719, Address: 0x3a9390, Func Offset: 0xb0
	// Line 722, Address: 0x3a9434, Func Offset: 0x154
	// Line 724, Address: 0x3a944c, Func Offset: 0x16c
	// Line 725, Address: 0x3a9450, Func Offset: 0x170
	// Func End, Address: 0x3a9464, Func Offset: 0x184
}

// xScriptGuiItemAdjustPos__Fiiii
// Start address: 0x3a9470
void xScriptGuiItemAdjustPos(int32 itemIdx, int32 dx, int32 dy, int32 dz)
{
	// Line 697, Address: 0x3a9470, Func Offset: 0
	// Line 698, Address: 0x3a9498, Func Offset: 0x28
	// Line 699, Address: 0x3a9538, Func Offset: 0xc8
	// Line 701, Address: 0x3a95dc, Func Offset: 0x16c
	// Line 702, Address: 0x3a9608, Func Offset: 0x198
	// Func End, Address: 0x3a9628, Func Offset: 0x1b8
}

// xScriptGuiItemSetPos__Fiiii
// Start address: 0x3a9630
void xScriptGuiItemSetPos(int32 itemIdx, int32 x, int32 y, int32 z)
{
	// Line 672, Address: 0x3a9630, Func Offset: 0
	// Line 673, Address: 0x3a9658, Func Offset: 0x28
	// Line 674, Address: 0x3a96f8, Func Offset: 0xc8
	// Line 676, Address: 0x3a979c, Func Offset: 0x16c
	// Line 677, Address: 0x3a97c8, Func Offset: 0x198
	// Func End, Address: 0x3a97e8, Func Offset: 0x1b8
}

// xScriptGuiItemAdjustOffset__Fiii
// Start address: 0x3a97f0
void xScriptGuiItemAdjustOffset(int32 itemIdx, int32 dx, int32 dy)
{
	// Line 646, Address: 0x3a97f0, Func Offset: 0
	// Line 647, Address: 0x3a9810, Func Offset: 0x20
	// Line 648, Address: 0x3a98b0, Func Offset: 0xc0
	// Line 650, Address: 0x3a9954, Func Offset: 0x164
	// Line 651, Address: 0x3a997c, Func Offset: 0x18c
	// Line 652, Address: 0x3a99a4, Func Offset: 0x1b4
	// Func End, Address: 0x3a99c0, Func Offset: 0x1d0
}

// xScriptGuiItemSetOffset__Fiii
// Start address: 0x3a99c0
void xScriptGuiItemSetOffset(int32 itemIdx, int32 dx, int32 dy)
{
	// Line 624, Address: 0x3a99c0, Func Offset: 0
	// Line 625, Address: 0x3a99e0, Func Offset: 0x20
	// Line 626, Address: 0x3a9a80, Func Offset: 0xc0
	// Line 628, Address: 0x3a9b24, Func Offset: 0x164
	// Line 629, Address: 0x3a9b44, Func Offset: 0x184
	// Line 630, Address: 0x3a9b64, Func Offset: 0x1a4
	// Func End, Address: 0x3a9b80, Func Offset: 0x1c0
}

// xScriptGuiItemFuncCall__Fiii
// Start address: 0x3a9b80
void xScriptGuiItemFuncCall(int32 sysIdx, int32 idx, int32 func)
{
	// Line 602, Address: 0x3a9b80, Func Offset: 0
	// Line 603, Address: 0x3a9ba0, Func Offset: 0x20
	// Line 604, Address: 0x3a9c40, Func Offset: 0xc0
	// Line 605, Address: 0x3a9ce4, Func Offset: 0x164
	// Line 606, Address: 0x3a9d84, Func Offset: 0x204
	// Line 608, Address: 0x3a9e28, Func Offset: 0x2a8
	// Line 609, Address: 0x3a9e64, Func Offset: 0x2e4
	// Func End, Address: 0x3a9e80, Func Offset: 0x300
}

// xScriptGuiItemSetRenderFunc__Fii
// Start address: 0x3a9e80
void xScriptGuiItemSetRenderFunc(int32 itemIdx, int32 funcID)
{
	// Line 543, Address: 0x3a9e80, Func Offset: 0
	// Line 544, Address: 0x3a9e98, Func Offset: 0x18
	// Line 545, Address: 0x3a9f38, Func Offset: 0xb8
	// Line 547, Address: 0x3a9fdc, Func Offset: 0x15c
	// Line 550, Address: 0x3aa004, Func Offset: 0x184
	// Line 551, Address: 0x3aa028, Func Offset: 0x1a8
	// Line 555, Address: 0x3aa030, Func Offset: 0x1b0
	// Line 556, Address: 0x3aa058, Func Offset: 0x1d8
	// Line 560, Address: 0x3aa060, Func Offset: 0x1e0
	// Line 561, Address: 0x3aa088, Func Offset: 0x208
	// Line 564, Address: 0x3aa090, Func Offset: 0x210
	// Line 565, Address: 0x3aa0b8, Func Offset: 0x238
	// Line 568, Address: 0x3aa0c0, Func Offset: 0x240
	// Line 569, Address: 0x3aa0e8, Func Offset: 0x268
	// Line 572, Address: 0x3aa0f0, Func Offset: 0x270
	// Line 573, Address: 0x3aa118, Func Offset: 0x298
	// Line 576, Address: 0x3aa120, Func Offset: 0x2a0
	// Line 577, Address: 0x3aa148, Func Offset: 0x2c8
	// Line 581, Address: 0x3aa150, Func Offset: 0x2d0
	// Line 584, Address: 0x3aa164, Func Offset: 0x2e4
	// Line 588, Address: 0x3aa188, Func Offset: 0x308
	// Func End, Address: 0x3aa1a0, Func Offset: 0x320
}

// xScriptGuiItemSelect__Fii
// Start address: 0x3aa1a0
void xScriptGuiItemSelect(int32 sysIdx, int32 idx)
{
	// Line 520, Address: 0x3aa1a0, Func Offset: 0
	// Line 521, Address: 0x3aa1b8, Func Offset: 0x18
	// Line 522, Address: 0x3aa258, Func Offset: 0xb8
	// Line 523, Address: 0x3aa2fc, Func Offset: 0x15c
	// Line 524, Address: 0x3aa39c, Func Offset: 0x1fc
	// Line 526, Address: 0x3aa440, Func Offset: 0x2a0
	// Line 527, Address: 0x3aa478, Func Offset: 0x2d8
	// Func End, Address: 0x3aa490, Func Offset: 0x2f0
}

// xScriptGuiItemAdvanceText__Fii
// Start address: 0x3aa490
void xScriptGuiItemAdvanceText(int32 idx, int32 amount)
{
	// Line 502, Address: 0x3aa490, Func Offset: 0
	// Line 503, Address: 0x3aa4a8, Func Offset: 0x18
	// Line 504, Address: 0x3aa548, Func Offset: 0xb8
	// Line 506, Address: 0x3aa5ec, Func Offset: 0x15c
	// Line 507, Address: 0x3aa610, Func Offset: 0x180
	// Func End, Address: 0x3aa628, Func Offset: 0x198
}

// xScriptGuiItemCreate__Fii
// Start address: 0x3aa630
int32 xScriptGuiItemCreate(int32 flag, int32 sysIdx)
{
	_xGuiItem* item;
	// Line 476, Address: 0x3aa630, Func Offset: 0
	// Line 479, Address: 0x3aa648, Func Offset: 0x18
	// Line 480, Address: 0x3aa6e8, Func Offset: 0xb8
	// Line 482, Address: 0x3aa78c, Func Offset: 0x15c
	// Line 485, Address: 0x3aa7b4, Func Offset: 0x184
	// Line 487, Address: 0x3aa7bc, Func Offset: 0x18c
	// Line 488, Address: 0x3aa7cc, Func Offset: 0x19c
	// Line 489, Address: 0x3aa86c, Func Offset: 0x23c
	// Line 493, Address: 0x3aa878, Func Offset: 0x248
	// Line 494, Address: 0x3aa880, Func Offset: 0x250
	// Func End, Address: 0x3aa898, Func Offset: 0x268
}

// xScriptGuiSysLink__Fiiii
// Start address: 0x3aa8a0
void xScriptGuiSysLink(int32 sysA, int32 dira, int32 sysB, int32 dirb)
{
	// Line 456, Address: 0x3aa8a0, Func Offset: 0
	// Line 457, Address: 0x3aa8c8, Func Offset: 0x28
	// Line 458, Address: 0x3aa968, Func Offset: 0xc8
	// Line 460, Address: 0x3aaa0c, Func Offset: 0x16c
	// Line 461, Address: 0x3aaaac, Func Offset: 0x20c
	// Line 463, Address: 0x3aab50, Func Offset: 0x2b0
	// Line 464, Address: 0x3aab90, Func Offset: 0x2f0
	// Func End, Address: 0x3aabb0, Func Offset: 0x310
}

// xScriptGuiSysSetDim__Fiiii
// Start address: 0x3aabb0
void xScriptGuiSysSetDim(int32 sysIdx, int32 w, int32 h, int32 d)
{
	// Line 433, Address: 0x3aabb0, Func Offset: 0
	// Line 434, Address: 0x3aabd8, Func Offset: 0x28
	// Line 435, Address: 0x3aac78, Func Offset: 0xc8
	// Line 437, Address: 0x3aad1c, Func Offset: 0x16c
	// Line 438, Address: 0x3aad48, Func Offset: 0x198
	// Func End, Address: 0x3aad68, Func Offset: 0x1b8
}

// xScriptGuiSysAdjustPos__Fiiii
// Start address: 0x3aad70
void xScriptGuiSysAdjustPos(int32 sysIdx, int32 dx, int32 dy, int32 dz)
{
	// Line 409, Address: 0x3aad70, Func Offset: 0
	// Line 410, Address: 0x3aad98, Func Offset: 0x28
	// Line 411, Address: 0x3aae38, Func Offset: 0xc8
	// Line 413, Address: 0x3aaedc, Func Offset: 0x16c
	// Line 414, Address: 0x3aaf08, Func Offset: 0x198
	// Func End, Address: 0x3aaf28, Func Offset: 0x1b8
}

// xScriptGuiSysOffsetMoveTo__Fiiiii
// Start address: 0x3aaf30
void xScriptGuiSysOffsetMoveTo(int32 sysID, int32 xoff, int32 yoff, int32 dx, int32 dy)
{
	_xGuiSys* sys;
	// Line 340, Address: 0x3aaf30, Func Offset: 0
	// Line 344, Address: 0x3aaf60, Func Offset: 0x30
	// Line 345, Address: 0x3ab000, Func Offset: 0xd0
	// Line 346, Address: 0x3ab0a4, Func Offset: 0x174
	// Line 347, Address: 0x3ab144, Func Offset: 0x214
	// Line 350, Address: 0x3ab1e4, Func Offset: 0x2b4
	// Line 351, Address: 0x3ab1e8, Func Offset: 0x2b8
	// Line 352, Address: 0x3ab1ec, Func Offset: 0x2bc
	// Line 353, Address: 0x3ab1f0, Func Offset: 0x2c0
	// Line 356, Address: 0x3ab1f4, Func Offset: 0x2c4
	// Line 359, Address: 0x3ab20c, Func Offset: 0x2dc
	// Line 361, Address: 0x3ab218, Func Offset: 0x2e8
	// Line 363, Address: 0x3ab228, Func Offset: 0x2f8
	// Line 364, Address: 0x3ab234, Func Offset: 0x304
	// Line 365, Address: 0x3ab244, Func Offset: 0x314
	// Line 366, Address: 0x3ab248, Func Offset: 0x318
	// Line 369, Address: 0x3ab250, Func Offset: 0x320
	// Line 370, Address: 0x3ab25c, Func Offset: 0x32c
	// Line 371, Address: 0x3ab26c, Func Offset: 0x33c
	// Line 376, Address: 0x3ab270, Func Offset: 0x340
	// Line 378, Address: 0x3ab27c, Func Offset: 0x34c
	// Line 380, Address: 0x3ab28c, Func Offset: 0x35c
	// Line 381, Address: 0x3ab298, Func Offset: 0x368
	// Line 382, Address: 0x3ab2a8, Func Offset: 0x378
	// Line 383, Address: 0x3ab2ac, Func Offset: 0x37c
	// Line 386, Address: 0x3ab2b4, Func Offset: 0x384
	// Line 387, Address: 0x3ab2c0, Func Offset: 0x390
	// Line 388, Address: 0x3ab2d0, Func Offset: 0x3a0
	// Line 391, Address: 0x3ab2d4, Func Offset: 0x3a4
	// Func End, Address: 0x3ab2f8, Func Offset: 0x3c8
}

// xScriptGuiSysAtOffset__Fiii
// Start address: 0x3ab300
int32 xScriptGuiSysAtOffset(int32 sysID, int32 xoff, int32 yoff)
{
	_xGuiSys* sys;
	// Line 307, Address: 0x3ab300, Func Offset: 0
	// Line 309, Address: 0x3ab320, Func Offset: 0x20
	// Line 310, Address: 0x3ab3c0, Func Offset: 0xc0
	// Line 313, Address: 0x3ab464, Func Offset: 0x164
	// Line 315, Address: 0x3ab47c, Func Offset: 0x17c
	// Line 316, Address: 0x3ab48c, Func Offset: 0x18c
	// Line 317, Address: 0x3ab49c, Func Offset: 0x19c
	// Line 319, Address: 0x3ab4a8, Func Offset: 0x1a8
	// Line 320, Address: 0x3ab4ac, Func Offset: 0x1ac
	// Func End, Address: 0x3ab4c8, Func Offset: 0x1c8
}

// xScriptGuiSysAdjustOffset__Fiii
// Start address: 0x3ab4d0
void xScriptGuiSysAdjustOffset(int32 sysIdx, int32 dx, int32 dy)
{
	_xGuiSys* sys;
	// Line 282, Address: 0x3ab4d0, Func Offset: 0
	// Line 284, Address: 0x3ab4f0, Func Offset: 0x20
	// Line 285, Address: 0x3ab590, Func Offset: 0xc0
	// Line 288, Address: 0x3ab634, Func Offset: 0x164
	// Line 290, Address: 0x3ab64c, Func Offset: 0x17c
	// Line 291, Address: 0x3ab65c, Func Offset: 0x18c
	// Line 292, Address: 0x3ab66c, Func Offset: 0x19c
	// Func End, Address: 0x3ab688, Func Offset: 0x1b8
}

// xScriptGuiSysSetOffset__Fiii
// Start address: 0x3ab690
void xScriptGuiSysSetOffset(int32 sysIdx, int32 dx, int32 dy)
{
	_xGuiSys* sys;
	// Line 255, Address: 0x3ab690, Func Offset: 0
	// Line 257, Address: 0x3ab6b0, Func Offset: 0x20
	// Line 258, Address: 0x3ab750, Func Offset: 0xc0
	// Line 261, Address: 0x3ab7f4, Func Offset: 0x164
	// Line 263, Address: 0x3ab80c, Func Offset: 0x17c
	// Line 264, Address: 0x3ab814, Func Offset: 0x184
	// Line 265, Address: 0x3ab81c, Func Offset: 0x18c
	// Func End, Address: 0x3ab838, Func Offset: 0x1a8
}

// xScriptGuiSysSetPos__Fiiii
// Start address: 0x3ab840
void xScriptGuiSysSetPos(int32 sysIdx, int32 x, int32 y, int32 z)
{
	// Line 233, Address: 0x3ab840, Func Offset: 0
	// Line 234, Address: 0x3ab868, Func Offset: 0x28
	// Line 235, Address: 0x3ab908, Func Offset: 0xc8
	// Line 237, Address: 0x3ab9ac, Func Offset: 0x16c
	// Line 238, Address: 0x3ab9d8, Func Offset: 0x198
	// Func End, Address: 0x3ab9f8, Func Offset: 0x1b8
}

// xScriptGuiSysSet__Fi
// Start address: 0x3aba00
void xScriptGuiSysSet(int32 idx)
{
	// Line 209, Address: 0x3aba00, Func Offset: 0
	// Line 210, Address: 0x3aba10, Func Offset: 0x10
	// Line 211, Address: 0x3abab0, Func Offset: 0xb0
	// Line 213, Address: 0x3abb54, Func Offset: 0x154
	// Line 214, Address: 0x3abb74, Func Offset: 0x174
	// Func End, Address: 0x3abb88, Func Offset: 0x188
}

// xScriptGuiSysSetPadObj__Fii
// Start address: 0x3abb90
void xScriptGuiSysSetPadObj(int32 idx, int32 padobj)
{
	// Line 189, Address: 0x3abb90, Func Offset: 0
	// Line 190, Address: 0x3abba8, Func Offset: 0x18
	// Line 191, Address: 0x3abc48, Func Offset: 0xb8
	// Line 193, Address: 0x3abcec, Func Offset: 0x15c
	// Line 194, Address: 0x3abd08, Func Offset: 0x178
	// Func End, Address: 0x3abd20, Func Offset: 0x190
}

// xScriptGuiSysSetRenderFunc__Fii
// Start address: 0x3abd20
void xScriptGuiSysSetRenderFunc(int32 sys, int32 funcID)
{
	// Line 132, Address: 0x3abd20, Func Offset: 0
	// Line 133, Address: 0x3abd38, Func Offset: 0x18
	// Line 134, Address: 0x3abdd8, Func Offset: 0xb8
	// Line 136, Address: 0x3abe7c, Func Offset: 0x15c
	// Line 139, Address: 0x3abea4, Func Offset: 0x184
	// Line 140, Address: 0x3abec8, Func Offset: 0x1a8
	// Line 144, Address: 0x3abed0, Func Offset: 0x1b0
	// Line 145, Address: 0x3abef8, Func Offset: 0x1d8
	// Line 149, Address: 0x3abf00, Func Offset: 0x1e0
	// Line 150, Address: 0x3abf28, Func Offset: 0x208
	// Line 153, Address: 0x3abf30, Func Offset: 0x210
	// Line 154, Address: 0x3abf58, Func Offset: 0x238
	// Line 157, Address: 0x3abf60, Func Offset: 0x240
	// Line 158, Address: 0x3abf88, Func Offset: 0x268
	// Line 161, Address: 0x3abf90, Func Offset: 0x270
	// Line 162, Address: 0x3abfb8, Func Offset: 0x298
	// Line 166, Address: 0x3abfc0, Func Offset: 0x2a0
	// Line 169, Address: 0x3abfd4, Func Offset: 0x2b4
	// Line 173, Address: 0x3abff8, Func Offset: 0x2d8
	// Func End, Address: 0x3ac010, Func Offset: 0x2f0
}

// xScriptGuiSysCreate__Fi
// Start address: 0x3ac010
int32 xScriptGuiSysCreate(int32 flag)
{
	_xGuiSys* sys;
	// Line 104, Address: 0x3ac010, Func Offset: 0
	// Line 105, Address: 0x3ac01c, Func Offset: 0xc
	// Line 108, Address: 0x3ac028, Func Offset: 0x18
	// Line 110, Address: 0x3ac030, Func Offset: 0x20
	// Line 111, Address: 0x3ac040, Func Offset: 0x30
	// Line 112, Address: 0x3ac0e0, Func Offset: 0xd0
	// Line 116, Address: 0x3ac0ec, Func Offset: 0xdc
	// Line 117, Address: 0x3ac0f4, Func Offset: 0xe4
	// Func End, Address: 0x3ac108, Func Offset: 0xf8
}

// xGuiReInitializeInterpreter__Fv
// Start address: 0x3ac110
void xGuiReInitializeInterpreter()
{
	// Line 89, Address: 0x3ac110, Func Offset: 0
	// Line 90, Address: 0x3ac114, Func Offset: 0x4
	// Line 91, Address: 0x3ac118, Func Offset: 0x8
	// Func End, Address: 0x3ac120, Func Offset: 0x10
}

// xGuiRegisterExternals__Fv
// Start address: 0x3ac120
void xGuiRegisterExternals()
{
	// Line 24, Address: 0x3ac120, Func Offset: 0
	// Line 26, Address: 0x3ac128, Func Offset: 0x8
	// Line 27, Address: 0x3ac144, Func Offset: 0x24
	// Line 28, Address: 0x3ac160, Func Offset: 0x40
	// Line 29, Address: 0x3ac17c, Func Offset: 0x5c
	// Line 30, Address: 0x3ac198, Func Offset: 0x78
	// Line 31, Address: 0x3ac1b4, Func Offset: 0x94
	// Line 32, Address: 0x3ac1d0, Func Offset: 0xb0
	// Line 33, Address: 0x3ac1ec, Func Offset: 0xcc
	// Line 34, Address: 0x3ac208, Func Offset: 0xe8
	// Line 35, Address: 0x3ac224, Func Offset: 0x104
	// Line 36, Address: 0x3ac240, Func Offset: 0x120
	// Line 37, Address: 0x3ac25c, Func Offset: 0x13c
	// Line 38, Address: 0x3ac278, Func Offset: 0x158
	// Line 39, Address: 0x3ac294, Func Offset: 0x174
	// Line 40, Address: 0x3ac2b0, Func Offset: 0x190
	// Line 41, Address: 0x3ac2cc, Func Offset: 0x1ac
	// Line 44, Address: 0x3ac2e8, Func Offset: 0x1c8
	// Line 45, Address: 0x3ac304, Func Offset: 0x1e4
	// Line 46, Address: 0x3ac320, Func Offset: 0x200
	// Line 47, Address: 0x3ac33c, Func Offset: 0x21c
	// Line 48, Address: 0x3ac358, Func Offset: 0x238
	// Line 49, Address: 0x3ac374, Func Offset: 0x254
	// Line 50, Address: 0x3ac390, Func Offset: 0x270
	// Line 51, Address: 0x3ac3ac, Func Offset: 0x28c
	// Line 52, Address: 0x3ac3c8, Func Offset: 0x2a8
	// Line 53, Address: 0x3ac3e4, Func Offset: 0x2c4
	// Line 54, Address: 0x3ac400, Func Offset: 0x2e0
	// Line 56, Address: 0x3ac41c, Func Offset: 0x2fc
	// Line 58, Address: 0x3ac438, Func Offset: 0x318
	// Line 59, Address: 0x3ac454, Func Offset: 0x334
	// Line 61, Address: 0x3ac470, Func Offset: 0x350
	// Line 63, Address: 0x3ac48c, Func Offset: 0x36c
	// Line 64, Address: 0x3ac4a8, Func Offset: 0x388
	// Line 65, Address: 0x3ac4c4, Func Offset: 0x3a4
	// Line 67, Address: 0x3ac4e0, Func Offset: 0x3c0
	// Line 70, Address: 0x3ac4fc, Func Offset: 0x3dc
	// Line 71, Address: 0x3ac518, Func Offset: 0x3f8
	// Line 72, Address: 0x3ac534, Func Offset: 0x414
	// Line 73, Address: 0x3ac550, Func Offset: 0x430
	// Line 74, Address: 0x3ac56c, Func Offset: 0x44c
	// Line 75, Address: 0x3ac588, Func Offset: 0x468
	// Func End, Address: 0x3ac598, Func Offset: 0x478
}

