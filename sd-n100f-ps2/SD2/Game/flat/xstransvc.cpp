typedef struct st_PACKER_READ_DATA;
typedef struct st_PACKER_READ_FUNCS;
typedef struct st_STRAN_SCENE;
typedef struct st_PACKER_ASSETTYPE;
typedef enum en_LAYER_TYPE;
typedef struct st_xST_XASSETINFO;
typedef struct st_PKR_ASSET_TOCINFO;
typedef struct st_STRAN_DATA;

typedef int32(*type_0)(st_PACKER_READ_DATA*, en_LAYER_TYPE);
typedef void*(*type_1)(void*, uint32, void*, uint32, uint32*);
typedef void*(*type_2)(void*, uint32, void*, void*, uint32, uint32*);
typedef uint32(*type_3)(st_PACKER_READ_DATA*, uint32);
typedef int32(*type_4)(void*, uint32, void*, int32);
typedef void*(*type_5)(void*, uint32, void*, int32*, int32*);
typedef void*(*type_6)(st_PACKER_READ_DATA*, uint32, int8*, void*);
typedef void(*type_7)(void*, uint32, void*);
typedef void(*type_8)(void*, uint32);
typedef void(*type_9)(void*, uint32, void*, int8*);
typedef void*(*type_10)(st_PACKER_READ_DATA*, uint32, int32, uint32*);
typedef int32(*type_11)(void*, float32);
typedef int32(*type_13)(st_PACKER_READ_DATA*, uint32);
typedef int32(*type_14)(st_PACKER_READ_DATA*, uint32);
typedef int32(*type_15)(st_PACKER_READ_DATA*, en_LAYER_TYPE);
typedef int8*(*type_17)(st_PACKER_READ_DATA*, uint32);
typedef uint32(*type_18)(st_PACKER_READ_DATA*);
typedef int32(*type_19)(st_PACKER_READ_DATA*, uint32, st_PKR_ASSET_TOCINFO*);
typedef int32(*type_21)(st_PACKER_READ_DATA*, uint32, int32, st_PKR_ASSET_TOCINFO*);
typedef int32(*type_22)(st_PACKER_READ_DATA*, uint32);
typedef uint32(*type_24)(st_PACKER_READ_DATA*);
typedef st_PACKER_READ_DATA*(*type_25)(void*, int8*, uint32, int32*, st_PACKER_ASSETTYPE*);
typedef void(*type_27)(st_PACKER_READ_DATA*);

typedef int8 type_12[64];
typedef int8 type_16[256];
typedef st_STRAN_SCENE type_20[8];
typedef int8 type_23[2];
typedef int8 type_26[64];

struct st_PACKER_READ_DATA
{
};

struct st_PACKER_READ_FUNCS
{
	uint32 api_ver;
	st_PACKER_READ_DATA*(*Init)(void*, int8*, uint32, int32*, st_PACKER_ASSETTYPE*);
	void(*Done)(st_PACKER_READ_DATA*);
	int32(*LoadLayer)(st_PACKER_READ_DATA*, en_LAYER_TYPE);
	uint32(*GetAssetSize)(st_PACKER_READ_DATA*, uint32);
	void*(*LoadAsset)(st_PACKER_READ_DATA*, uint32, int8*, void*);
	void*(*AssetByType)(st_PACKER_READ_DATA*, uint32, int32, uint32*);
	int32(*AssetCount)(st_PACKER_READ_DATA*, uint32);
	int32(*IsAssetReady)(st_PACKER_READ_DATA*, uint32);
	int32(*SetActive)(st_PACKER_READ_DATA*, en_LAYER_TYPE);
	int8*(*AssetName)(st_PACKER_READ_DATA*, uint32);
	uint32(*GetBaseSector)(st_PACKER_READ_DATA*);
	int32(*GetAssetInfo)(st_PACKER_READ_DATA*, uint32, st_PKR_ASSET_TOCINFO*);
	int32(*GetAssetInfoByType)(st_PACKER_READ_DATA*, uint32, int32, st_PKR_ASSET_TOCINFO*);
	int32(*PkgHasAsset)(st_PACKER_READ_DATA*, uint32);
	uint32(*PkgTimeStamp)(st_PACKER_READ_DATA*);
};

struct st_STRAN_SCENE
{
	uint32 scnid;
	int32 lockid;
	st_PACKER_READ_DATA* spkg;
	void* userdata;
	int8 fnam[256];
};

struct st_PACKER_ASSETTYPE
{
	uint32 typetag;
	uint32 tflags;
	int32 typalign;
	void*(*readXForm)(void*, uint32, void*, uint32, uint32*);
	void*(*writeXForm)(void*, uint32, void*, void*, uint32, uint32*);
	int32(*assetLoaded)(void*, uint32, void*, int32);
	void*(*makeData)(void*, uint32, void*, int32*, int32*);
	void(*cleanup)(void*, uint32, void*);
	void(*assetUnloaded)(void*, uint32);
	void(*writePeek)(void*, uint32, void*, int8*);
};

enum en_LAYER_TYPE
{
	PKR_LTYPE_ALL = 0xffffffff,
	PKR_LTYPE_DEFAULT,
	PKR_LTYPE_TEXTURE,
	PKR_LTYPE_BSP,
	PKR_LTYPE_MODEL,
	PKR_LTYPE_ANIMATION,
	PKR_LTYPE_VRAM,
	PKR_LTYPE_SRAM,
	PKR_LTYPE_SNDTOC,
	PKR_LTYPE_CUTSCENE,
	PKR_LTYPE_CUTSCENETOC,
	PKR_LTYPE_NOMORE
};

struct st_xST_XASSETINFO
{
	uint32 aid;
	uint32 sector;
	uint32 plus_offset;
	uint32 size;
	void* mempos;
};

struct st_PKR_ASSET_TOCINFO
{
	uint32 aid;
	uint32 sector;
	uint32 plus_offset;
	uint32 size;
	void* mempos;
};

struct st_STRAN_DATA
{
	st_STRAN_SCENE hipscn[8];
	uint32 loadlock;
};

int32 g_straninit;
st_STRAN_DATA g_xstdata;
st_PACKER_READ_FUNCS* g_pkrf;
st_PACKER_ASSETTYPE* g_typeHandlers;

st_STRAN_SCENE* XST_find_bySID(uint32 sid);
st_STRAN_SCENE* XST_lock_next();
int8* xST_xAssetID_HIPFullPath(uint32 aid, uint32* sceneID);
int8* xST_xAssetID_HIPFullPath(uint32 aid);
int32 xSTGetAssetInfoByType(uint32 type, int32 idx, st_xST_XASSETINFO* ainfo);
int32 xSTGetAssetInfo(uint32 aid, st_xST_XASSETINFO* ainfo);
void* xSTFindAssetByType(uint32 type, int32 idx, uint32* size);
int32 xSTAssetCountByType(uint32 type);
void* xSTFindAsset(uint32 aid, uint32* size);
int8* xSTAssetName(uint32 aid);
int32 xSTSwitchScene(uint32 sid, void* userdata, int32(*progmon)(void*, float32));
float32 xSTLoadStep();
void xSTUnLoadScene(uint32 sid);
int32 xSTQueueSceneAssets(uint32 sid);
int32 xSTPreLoadScene(uint32 sid, void* userdata);
int32 xSTShutdown();
int32 xSTStartup(st_PACKER_ASSETTYPE* handlers);

// XST_find_bySID__FUi
// Start address: 0x120200
st_STRAN_SCENE* XST_find_bySID(uint32 sid)
{
	int32 i;
	st_STRAN_SCENE* da_sdata;
	// Line 935, Address: 0x120200, Func Offset: 0
	// Line 929, Address: 0x12020c, Func Offset: 0xc
	// Line 935, Address: 0x120210, Func Offset: 0x10
	// Line 936, Address: 0x120218, Func Offset: 0x18
	// Line 939, Address: 0x12022c, Func Offset: 0x2c
	// Line 941, Address: 0x120238, Func Offset: 0x38
	// Line 943, Address: 0x120240, Func Offset: 0x40
	// Line 947, Address: 0x120250, Func Offset: 0x50
	// Func End, Address: 0x120258, Func Offset: 0x58
}

// XST_lock_next__Fv
// Start address: 0x120260
st_STRAN_SCENE* XST_lock_next()
{
	int32 uselock;
	int32 i;
	st_STRAN_SCENE* sdata;
	// Line 822, Address: 0x120260, Func Offset: 0
	// Line 828, Address: 0x120270, Func Offset: 0x10
	// Line 823, Address: 0x120278, Func Offset: 0x18
	// Line 825, Address: 0x12027c, Func Offset: 0x1c
	// Line 828, Address: 0x120280, Func Offset: 0x20
	// Line 829, Address: 0x120284, Func Offset: 0x24
	// Line 830, Address: 0x120298, Func Offset: 0x38
	// Line 831, Address: 0x1202a0, Func Offset: 0x40
	// Line 830, Address: 0x1202b4, Func Offset: 0x54
	// Line 831, Address: 0x1202bc, Func Offset: 0x5c
	// Line 830, Address: 0x1202c0, Func Offset: 0x60
	// Line 833, Address: 0x1202c4, Func Offset: 0x64
	// Line 835, Address: 0x1202d4, Func Offset: 0x74
	// Line 837, Address: 0x1202dc, Func Offset: 0x7c
	// Line 842, Address: 0x1202e8, Func Offset: 0x88
	// Line 845, Address: 0x1202f4, Func Offset: 0x94
	// Func End, Address: 0x120308, Func Offset: 0xa8
}

// xST_xAssetID_HIPFullPath__FUiPUi
// Start address: 0x120310
int8* xST_xAssetID_HIPFullPath(uint32 aid, uint32* sceneID)
{
	int32 i;
	int32 rc;
	int8* da_hipname;
	// Line 638, Address: 0x120310, Func Offset: 0
	// Line 645, Address: 0x120334, Func Offset: 0x24
	// Line 639, Address: 0x120340, Func Offset: 0x30
	// Line 645, Address: 0x120344, Func Offset: 0x34
	// Line 646, Address: 0x120378, Func Offset: 0x68
	// Line 647, Address: 0x120384, Func Offset: 0x74
	// Line 651, Address: 0x1203e8, Func Offset: 0xd8
	// Line 652, Address: 0x1203fc, Func Offset: 0xec
	// Line 654, Address: 0x120404, Func Offset: 0xf4
	// Line 655, Address: 0x120410, Func Offset: 0x100
	// Line 658, Address: 0x120418, Func Offset: 0x108
	// Line 660, Address: 0x120428, Func Offset: 0x118
	// Line 661, Address: 0x12042c, Func Offset: 0x11c
	// Func End, Address: 0x120450, Func Offset: 0x140
}

// xST_xAssetID_HIPFullPath__FUi
// Start address: 0x120450
int8* xST_xAssetID_HIPFullPath(uint32 aid)
{
	// Line 634, Address: 0x120450, Func Offset: 0
	// Func End, Address: 0x120458, Func Offset: 0x8
}

// xSTGetAssetInfoByType__FUiiP17st_xST_XASSETINFO
// Start address: 0x120460
int32 xSTGetAssetInfoByType(uint32 type, int32 idx, st_xST_XASSETINFO* ainfo)
{
	int32 cnt;
	int32 sum;
	int32 i;
	int32 rc;
	st_PKR_ASSET_TOCINFO tocinfo;
	int32 found;
	// Line 573, Address: 0x120460, Func Offset: 0
	// Line 576, Address: 0x120488, Func Offset: 0x28
	// Line 573, Address: 0x12048c, Func Offset: 0x2c
	// Line 576, Address: 0x120490, Func Offset: 0x30
	// Line 586, Address: 0x1204a8, Func Offset: 0x48
	// Line 576, Address: 0x1204ac, Func Offset: 0x4c
	// Line 586, Address: 0x1204b0, Func Offset: 0x50
	// Line 574, Address: 0x1204b8, Func Offset: 0x58
	// Line 582, Address: 0x1204bc, Func Offset: 0x5c
	// Line 576, Address: 0x1204c0, Func Offset: 0x60
	// Line 586, Address: 0x1204c4, Func Offset: 0x64
	// Line 589, Address: 0x1204cc, Func Offset: 0x6c
	// Line 590, Address: 0x120508, Func Offset: 0xa8
	// Line 591, Address: 0x120514, Func Offset: 0xb4
	// Line 595, Address: 0x120578, Func Offset: 0x118
	// Line 598, Address: 0x120590, Func Offset: 0x130
	// Line 600, Address: 0x1205ac, Func Offset: 0x14c
	// Line 602, Address: 0x1205bc, Func Offset: 0x15c
	// Line 604, Address: 0x1205d8, Func Offset: 0x178
	// Line 606, Address: 0x1205e0, Func Offset: 0x180
	// Line 615, Address: 0x1205e4, Func Offset: 0x184
	// Line 606, Address: 0x1205e8, Func Offset: 0x188
	// Line 607, Address: 0x1205ec, Func Offset: 0x18c
	// Line 608, Address: 0x1205f4, Func Offset: 0x194
	// Line 609, Address: 0x1205fc, Func Offset: 0x19c
	// Line 610, Address: 0x120604, Func Offset: 0x1a4
	// Line 616, Address: 0x120608, Func Offset: 0x1a8
	// Line 623, Address: 0x120610, Func Offset: 0x1b0
	// Line 625, Address: 0x120620, Func Offset: 0x1c0
	// Line 626, Address: 0x120624, Func Offset: 0x1c4
	// Func End, Address: 0x120654, Func Offset: 0x1f4
}

// xSTGetAssetInfo__FUiP17st_xST_XASSETINFO
// Start address: 0x120660
int32 xSTGetAssetInfo(uint32 aid, st_xST_XASSETINFO* ainfo)
{
	int32 i;
	int32 rc;
	st_PKR_ASSET_TOCINFO tocinfo;
	int32 found;
	// Line 523, Address: 0x120660, Func Offset: 0
	// Line 526, Address: 0x12067c, Func Offset: 0x1c
	// Line 523, Address: 0x120680, Func Offset: 0x20
	// Line 526, Address: 0x120684, Func Offset: 0x24
	// Line 533, Address: 0x120698, Func Offset: 0x38
	// Line 526, Address: 0x1206a0, Func Offset: 0x40
	// Line 533, Address: 0x1206a4, Func Offset: 0x44
	// Line 524, Address: 0x1206a8, Func Offset: 0x48
	// Line 526, Address: 0x1206ac, Func Offset: 0x4c
	// Line 533, Address: 0x1206b0, Func Offset: 0x50
	// Line 536, Address: 0x1206b8, Func Offset: 0x58
	// Line 537, Address: 0x1206f0, Func Offset: 0x90
	// Line 538, Address: 0x1206fc, Func Offset: 0x9c
	// Line 542, Address: 0x120760, Func Offset: 0x100
	// Line 543, Address: 0x120774, Func Offset: 0x114
	// Line 546, Address: 0x12077c, Func Offset: 0x11c
	// Line 548, Address: 0x12078c, Func Offset: 0x12c
	// Line 549, Address: 0x1207a4, Func Offset: 0x144
	// Line 551, Address: 0x1207ac, Func Offset: 0x14c
	// Line 561, Address: 0x1207b0, Func Offset: 0x150
	// Line 551, Address: 0x1207b4, Func Offset: 0x154
	// Line 553, Address: 0x1207b8, Func Offset: 0x158
	// Line 554, Address: 0x1207c0, Func Offset: 0x160
	// Line 555, Address: 0x1207c8, Func Offset: 0x168
	// Line 556, Address: 0x1207d0, Func Offset: 0x170
	// Line 562, Address: 0x1207d4, Func Offset: 0x174
	// Line 565, Address: 0x1207dc, Func Offset: 0x17c
	// Line 567, Address: 0x1207f0, Func Offset: 0x190
	// Line 568, Address: 0x1207f4, Func Offset: 0x194
	// Func End, Address: 0x120818, Func Offset: 0x1b8
}

// xSTFindAssetByType__FUiiPUi
// Start address: 0x120820
void* xSTFindAssetByType(uint32 type, int32 idx, uint32* size)
{
	int32 cnt;
	int32 sum;
	int32 i;
	void* memptr;
	// Line 492, Address: 0x120820, Func Offset: 0
	// Line 500, Address: 0x12084c, Func Offset: 0x2c
	// Line 494, Address: 0x12085c, Func Offset: 0x3c
	// Line 497, Address: 0x120860, Func Offset: 0x40
	// Line 500, Address: 0x120864, Func Offset: 0x44
	// Line 501, Address: 0x120898, Func Offset: 0x78
	// Line 502, Address: 0x1208a4, Func Offset: 0x84
	// Line 505, Address: 0x120908, Func Offset: 0xe8
	// Line 506, Address: 0x12091c, Func Offset: 0xfc
	// Line 509, Address: 0x120938, Func Offset: 0x118
	// Line 511, Address: 0x120954, Func Offset: 0x134
	// Line 513, Address: 0x12095c, Func Offset: 0x13c
	// Line 514, Address: 0x120960, Func Offset: 0x140
	// Line 516, Address: 0x120970, Func Offset: 0x150
	// Line 517, Address: 0x120974, Func Offset: 0x154
	// Func End, Address: 0x1209a0, Func Offset: 0x180
}

// xSTAssetCountByType__FUi
// Start address: 0x1209a0
int32 xSTAssetCountByType(uint32 type)
{
	int32 i;
	int32 cnt;
	int32 sum;
	// Line 456, Address: 0x1209a0, Func Offset: 0
	// Line 463, Address: 0x1209b8, Func Offset: 0x18
	// Line 457, Address: 0x1209c4, Func Offset: 0x24
	// Line 463, Address: 0x1209c8, Func Offset: 0x28
	// Line 464, Address: 0x1209f8, Func Offset: 0x58
	// Line 465, Address: 0x120a04, Func Offset: 0x64
	// Line 468, Address: 0x120a68, Func Offset: 0xc8
	// Line 469, Address: 0x120a7c, Func Offset: 0xdc
	// Line 470, Address: 0x120a80, Func Offset: 0xe0
	// Line 472, Address: 0x120a90, Func Offset: 0xf0
	// Line 473, Address: 0x120a94, Func Offset: 0xf4
	// Func End, Address: 0x120ab0, Func Offset: 0x110
}

// xSTFindAsset__FUiPUi
// Start address: 0x120ab0
void* xSTFindAsset(uint32 aid, uint32* size)
{
	int32 rc;
	int32 i;
	int32 ready;
	void* memloc;
	// Line 394, Address: 0x120ab0, Func Offset: 0
	// Line 420, Address: 0x120ad4, Func Offset: 0x24
	// Line 398, Address: 0x120ae0, Func Offset: 0x30
	// Line 420, Address: 0x120ae4, Func Offset: 0x34
	// Line 421, Address: 0x120b18, Func Offset: 0x68
	// Line 422, Address: 0x120b24, Func Offset: 0x74
	// Line 425, Address: 0x120b88, Func Offset: 0xd8
	// Line 426, Address: 0x120b9c, Func Offset: 0xec
	// Line 429, Address: 0x120ba4, Func Offset: 0xf4
	// Line 432, Address: 0x120bc4, Func Offset: 0x114
	// Line 433, Address: 0x120bd8, Func Offset: 0x128
	// Line 436, Address: 0x120be0, Func Offset: 0x130
	// Line 438, Address: 0x120be8, Func Offset: 0x138
	// Line 441, Address: 0x120bf0, Func Offset: 0x140
	// Line 442, Address: 0x120bf8, Func Offset: 0x148
	// Line 446, Address: 0x120c0c, Func Offset: 0x15c
	// Line 448, Address: 0x120c14, Func Offset: 0x164
	// Line 450, Address: 0x120c20, Func Offset: 0x170
	// Line 451, Address: 0x120c24, Func Offset: 0x174
	// Func End, Address: 0x120c48, Func Offset: 0x198
}

// xSTAssetName__FUi
// Start address: 0x120c50
int8* xSTAssetName(uint32 aid)
{
	int32 i;
	int8* aname;
	// Line 339, Address: 0x120c50, Func Offset: 0
	// Line 345, Address: 0x120c64, Func Offset: 0x14
	// Line 340, Address: 0x120c70, Func Offset: 0x20
	// Line 345, Address: 0x120c74, Func Offset: 0x24
	// Line 346, Address: 0x120ca8, Func Offset: 0x58
	// Line 347, Address: 0x120cb4, Func Offset: 0x64
	// Line 349, Address: 0x120d18, Func Offset: 0xc8
	// Line 350, Address: 0x120d24, Func Offset: 0xd4
	// Line 351, Address: 0x120d34, Func Offset: 0xe4
	// Line 353, Address: 0x120d3c, Func Offset: 0xec
	// Line 354, Address: 0x120d40, Func Offset: 0xf0
	// Line 357, Address: 0x120d50, Func Offset: 0x100
	// Func End, Address: 0x120d68, Func Offset: 0x118
}

// xSTSwitchScene__FUiPvPFPvf_i
// Start address: 0x120d70
int32 xSTSwitchScene(uint32 sid, void* userdata, int32(*progmon)(void*, float32))
{
	int32 rc;
	st_STRAN_SCENE* sdata;
	int32 result;
	// Line 306, Address: 0x120d70, Func Offset: 0
	// Line 307, Address: 0x120d90, Func Offset: 0x20
	// Line 313, Address: 0x120d94, Func Offset: 0x24
	// Line 314, Address: 0x120d9c, Func Offset: 0x2c
	// Line 317, Address: 0x120da8, Func Offset: 0x38
	// Line 319, Address: 0x120db4, Func Offset: 0x44
	// Line 320, Address: 0x120dbc, Func Offset: 0x4c
	// Line 324, Address: 0x120dd0, Func Offset: 0x60
	// Line 325, Address: 0x120de4, Func Offset: 0x74
	// Line 330, Address: 0x120df0, Func Offset: 0x80
	// Line 333, Address: 0x120e04, Func Offset: 0x94
	// Line 334, Address: 0x120e08, Func Offset: 0x98
	// Func End, Address: 0x120e24, Func Offset: 0xb4
}

// xSTLoadStep__FUi
// Start address: 0x120e30
float32 xSTLoadStep()
{
	int32 rc;
	// Line 270, Address: 0x120e30, Func Offset: 0
	// Line 278, Address: 0x120e38, Func Offset: 0x8
	// Line 284, Address: 0x120e40, Func Offset: 0x10
	// Line 285, Address: 0x120e5c, Func Offset: 0x2c
	// Func End, Address: 0x120e68, Func Offset: 0x38
}

// xSTUnLoadScene__FUi
// Start address: 0x120e70
void xSTUnLoadScene(uint32 sid)
{
	int32 i;
	st_STRAN_SCENE* sdata;
	// Line 223, Address: 0x120e70, Func Offset: 0
	// Line 228, Address: 0x120e80, Func Offset: 0x10
	// Line 231, Address: 0x120e88, Func Offset: 0x18
	// Line 234, Address: 0x120ec0, Func Offset: 0x50
	// Line 235, Address: 0x120ecc, Func Offset: 0x5c
	// Line 238, Address: 0x120f30, Func Offset: 0xc0
	// Line 240, Address: 0x120f50, Func Offset: 0xe0
	// Line 243, Address: 0x120f60, Func Offset: 0xf0
	// Line 244, Address: 0x120fe0, Func Offset: 0x170
	// Line 246, Address: 0x120fe8, Func Offset: 0x178
	// Line 248, Address: 0x120ff4, Func Offset: 0x184
	// Line 249, Address: 0x120ffc, Func Offset: 0x18c
	// Line 250, Address: 0x121018, Func Offset: 0x1a8
	// Line 252, Address: 0x12101c, Func Offset: 0x1ac
	// Line 256, Address: 0x121060, Func Offset: 0x1f0
	// Func End, Address: 0x121078, Func Offset: 0x208
}

// xSTQueueSceneAssets__FUi
// Start address: 0x121080
int32 xSTQueueSceneAssets(uint32 sid)
{
	st_STRAN_SCENE* sdata;
	int32 result;
	// Line 197, Address: 0x121080, Func Offset: 0
	// Line 206, Address: 0x12108c, Func Offset: 0xc
	// Line 208, Address: 0x121094, Func Offset: 0x14
	// Line 211, Address: 0x1210a4, Func Offset: 0x24
	// Line 213, Address: 0x1210b0, Func Offset: 0x30
	// Line 217, Address: 0x1210c0, Func Offset: 0x40
	// Line 218, Address: 0x1210c4, Func Offset: 0x44
	// Func End, Address: 0x1210d4, Func Offset: 0x54
}

// xSTPreLoadScene__FUiPv
// Start address: 0x1210e0
int32 xSTPreLoadScene(uint32 sid, void* userdata)
{
	int32 cnt_retry;
	int32 cltver;
	st_STRAN_SCENE* sdata;
	int32 result;
	// Line 128, Address: 0x1210e0, Func Offset: 0
	// Line 133, Address: 0x12110c, Func Offset: 0x2c
	// Line 134, Address: 0x121110, Func Offset: 0x30
	// Line 141, Address: 0x121114, Func Offset: 0x34
	// Line 144, Address: 0x12112c, Func Offset: 0x4c
	// Line 147, Address: 0x121134, Func Offset: 0x54
	// Line 148, Address: 0x121138, Func Offset: 0x58
	// Line 144, Address: 0x12113c, Func Offset: 0x5c
	// Line 151, Address: 0x121140, Func Offset: 0x60
	// Line 154, Address: 0x12115c, Func Offset: 0x7c
	// Line 155, Address: 0x1211c8, Func Offset: 0xe8
	// Line 156, Address: 0x1211d8, Func Offset: 0xf8
	// Line 157, Address: 0x1211e0, Func Offset: 0x100
	// Line 159, Address: 0x12121c, Func Offset: 0x13c
	// Line 161, Address: 0x121220, Func Offset: 0x140
	// Line 163, Address: 0x121228, Func Offset: 0x148
	// Line 164, Address: 0x121258, Func Offset: 0x178
	// Line 165, Address: 0x121268, Func Offset: 0x188
	// Line 166, Address: 0x121270, Func Offset: 0x190
	// Line 168, Address: 0x1212ac, Func Offset: 0x1cc
	// Line 174, Address: 0x1212b0, Func Offset: 0x1d0
	// Line 177, Address: 0x1212b8, Func Offset: 0x1d8
	// Line 179, Address: 0x121300, Func Offset: 0x220
	// Line 187, Address: 0x121304, Func Offset: 0x224
	// Line 188, Address: 0x12130c, Func Offset: 0x22c
	// Line 190, Address: 0x121310, Func Offset: 0x230
	// Line 193, Address: 0x121318, Func Offset: 0x238
	// Func End, Address: 0x121340, Func Offset: 0x260
}

// xSTShutdown__Fv
// Start address: 0x121340
int32 xSTShutdown()
{
	// Line 91, Address: 0x121340, Func Offset: 0
	// Line 94, Address: 0x121350, Func Offset: 0x10
	// Line 101, Address: 0x121360, Func Offset: 0x20
	// Line 104, Address: 0x1213e0, Func Offset: 0xa0
	// Line 110, Address: 0x1213e8, Func Offset: 0xa8
	// Line 109, Address: 0x1213f4, Func Offset: 0xb4
	// Line 110, Address: 0x1213f8, Func Offset: 0xb8
	// Func End, Address: 0x121400, Func Offset: 0xc0
}

// xSTStartup__FP19st_PACKER_ASSETTYPE
// Start address: 0x121400
int32 xSTStartup(st_PACKER_ASSETTYPE* handlers)
{
	// Line 53, Address: 0x121400, Func Offset: 0
	// Line 55, Address: 0x121408, Func Offset: 0x8
	// Line 61, Address: 0x121418, Func Offset: 0x18
	// Line 67, Address: 0x12141c, Func Offset: 0x1c
	// Line 70, Address: 0x121430, Func Offset: 0x30
	// Line 73, Address: 0x121438, Func Offset: 0x38
	// Line 83, Address: 0x121444, Func Offset: 0x44
	// Line 82, Address: 0x121448, Func Offset: 0x48
	// Line 83, Address: 0x12144c, Func Offset: 0x4c
	// Func End, Address: 0x121454, Func Offset: 0x54
}

