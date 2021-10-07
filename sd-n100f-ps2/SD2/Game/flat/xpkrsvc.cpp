typedef struct st_PACKER_READ_DATA;
typedef struct st_HIPLOADDATA;
typedef struct st_PACKER_ATOC_NODE;
typedef enum en_LAYER_TYPE;
typedef struct st_PACKER_ASSETTYPE;
typedef struct st_PACKER_LTOC_NODE;
typedef struct RwResEntry;
typedef struct st_PKR_ASSET_TOCINFO;
typedef struct st_XORDEREDARRAY;
typedef struct st_HIPLOADFUNCS;
typedef struct RwLLLink;
typedef struct st_PACKER_READ_FUNCS;
typedef enum en_READ_ASYNC_STATUS;

typedef void(*type_0)(st_HIPLOADDATA*);
typedef int32(*type_1)(st_PACKER_READ_DATA*, uint32);
typedef uint32(*type_2)(st_HIPLOADDATA*);
typedef int32(*type_3)(st_PACKER_READ_DATA*, uint32);
typedef uint32(*type_4)(st_HIPLOADDATA*);
typedef int32(*type_5)(st_PACKER_READ_DATA*, en_LAYER_TYPE);
typedef void(*type_6)(st_HIPLOADDATA*);
typedef void(*type_7)(RwResEntry*);
typedef void*(*type_8)(void*, uint32, void*, uint32, uint32*);
typedef int8*(*type_10)(st_PACKER_READ_DATA*, uint32);
typedef int32(*type_11)(st_HIPLOADDATA*, int8*, int32);
typedef uint32(*type_12)(st_PACKER_READ_DATA*);
typedef void*(*type_13)(void*, uint32, void*, void*, uint32, uint32*);
typedef int32(*type_14)(st_HIPLOADDATA*, int16*, int32);
typedef int32(*type_15)(st_PACKER_READ_DATA*, uint32, st_PKR_ASSET_TOCINFO*);
typedef void(*type_17)(void*, uint32, void*, int8*);
typedef int32(*type_18)(st_HIPLOADDATA*, int32*, int32);
typedef int32(*type_19)(void*, void*);
typedef int32(*type_20)(st_PACKER_READ_DATA*, uint32, int32, st_PKR_ASSET_TOCINFO*);
typedef int32(*type_21)(st_HIPLOADDATA*, float32*, int32);
typedef int32(*type_22)(void*, uint32, void*, int32);
typedef void(*type_23)(void*, uint32);
typedef int32(*type_24)(st_PACKER_READ_DATA*, uint32);
typedef int32(*type_25)(st_HIPLOADDATA*, int8*);
typedef int32(*type_26)(void*, void*);
typedef uint32(*type_27)(st_PACKER_READ_DATA*);
typedef st_PACKER_READ_DATA*(*type_28)(void*, int8*, uint32, int32*, st_PACKER_ASSETTYPE*);
typedef int32(*type_29)(st_HIPLOADDATA*, int32, int32);
typedef void*(*type_30)(void*, uint32, void*, int32*, int32*);
typedef void(*type_31)(st_HIPLOADDATA*, int32);
typedef void(*type_32)(void*, uint32, void*);
typedef void(*type_34)(st_PACKER_READ_DATA*);
typedef en_READ_ASYNC_STATUS(*type_36)(st_HIPLOADDATA*);
typedef void(*type_37)(RwResEntry*);
typedef int32(*type_38)(st_PACKER_READ_DATA*, en_LAYER_TYPE);
typedef uint32(*type_41)(st_PACKER_READ_DATA*, uint32);
typedef void*(*type_42)(st_PACKER_READ_DATA*, uint32, int8*, void*);
typedef void*(*type_44)(st_PACKER_READ_DATA*, uint32, int32, uint32*);
typedef st_HIPLOADDATA*(*type_45)(int8*, int8*, int32);

typedef int8 type_9[128];
typedef st_XORDEREDARRAY type_16[129];
typedef int32 type_33[129];
typedef int8 type_35[32];
typedef int8 type_39[256];
typedef int8 type_40[256];
typedef st_PACKER_READ_DATA type_43[8];

struct st_PACKER_READ_DATA
{
	st_PACKER_ASSETTYPE* types;
	void* userdata;
	uint32 opts;
	uint32 pkgver;
	int32 cltver;
	int32 subver;
	int32 compatver;
	st_HIPLOADDATA* pkg;
	uint32 base_sector;
	int32 lockid;
	int8 packfile[128];
	int32 asscnt;
	int32 laycnt;
	st_XORDEREDARRAY asstoc;
	st_XORDEREDARRAY laytoc;
	st_PACKER_ATOC_NODE* pool_anode;
	int32 pool_nextaidx;
	st_XORDEREDARRAY typelist[129];
	long32 time_made;
	long32 time_mod;
};

struct st_HIPLOADDATA
{
};

struct st_PACKER_ATOC_NODE
{
	uint32 aid;
	uint32 asstype;
	int32 d_off;
	int32 d_size;
	int32 d_pad;
	uint32 d_chksum;
	int32 assalign;
	int32 infoflag;
	int32 loadflag;
	int8* memloc;
	int32 x_size;
	int32 readcnt;
	int32 readrem;
	st_PACKER_ASSETTYPE* typeref;
	st_HIPLOADDATA* ownpkg;
	st_PACKER_READ_DATA* ownpr;
	int8 name[32];
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

struct st_PACKER_LTOC_NODE
{
	en_LAYER_TYPE laytyp;
	st_XORDEREDARRAY assref;
	int32 flg_ldstat;
	int32 danglecnt;
	uint32 chksum;
	int32 laysize;
	int8* laymem;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
};

struct st_PKR_ASSET_TOCINFO
{
	uint32 aid;
	uint32 sector;
	uint32 plus_offset;
	uint32 size;
	void* mempos;
};

struct st_XORDEREDARRAY
{
	void** list;
	int32 cnt;
	int32 max;
	int32 warnlvl;
};

struct st_HIPLOADFUNCS
{
	st_HIPLOADDATA*(*create)(int8*, int8*, int32);
	void(*destroy)(st_HIPLOADDATA*);
	uint32(*basesector)(st_HIPLOADDATA*);
	uint32(*enter)(st_HIPLOADDATA*);
	void(*exit)(st_HIPLOADDATA*);
	int32(*readBytes)(st_HIPLOADDATA*, int8*, int32);
	int32(*readShorts)(st_HIPLOADDATA*, int16*, int32);
	int32(*readLongs)(st_HIPLOADDATA*, int32*, int32);
	int32(*readFloats)(st_HIPLOADDATA*, float32*, int32);
	int32(*readString)(st_HIPLOADDATA*, int8*);
	int32(*setBypass)(st_HIPLOADDATA*, int32, int32);
	void(*setSpot)(st_HIPLOADDATA*, int32);
	en_READ_ASYNC_STATUS(*pollRead)(st_HIPLOADDATA*);
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
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

enum en_READ_ASYNC_STATUS
{
	HIP_RDSTAT_NONE = 0xffffffff,
	HIP_RDSTAT_INPROG,
	HIP_RDSTAT_SUCCESS,
	HIP_RDSTAT_FAILED,
	HIP_RDSTAT_NOBYPASS,
	HIP_RDSTAT_NOASYNC
};

st_PACKER_READ_FUNCS g_pkr_read_funcmap;
st_HIPLOADFUNCS* g_hiprf;
st_PACKER_READ_DATA g_readdatainst[8];
uint32 g_loadlock;
int32 g_packinit;
int32 g_memalloc_pair;
int32 g_memalloc_runtot;
RwResEntry* g_RWarena_resEntry;
RwResEntry* g_RWarena_resOwner;
int32 g_RWarena_bufsize;
void(*PKR_special_loadbuf_killed)(RwResEntry*);
uint32 gActiveHeap;
int32(*OrdTest_R_AssetID)(void*, void*);
int32(*OrdTest_R_Asset)(void*, void*);

void PKR_special_loadbuf_killed();
void PKR_relmem(void* memptr, int32 isTemp);
void* PKR_getmem(int32 amount, int32 isTemp);
void PKR_bld_typecnt(st_PACKER_READ_DATA* pr);
st_PACKER_ASSETTYPE* PKR_type2typeref(uint32 type, st_PACKER_ASSETTYPE* typelist);
int32 LOD_r_LHDR(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
int32 LOD_r_ADBG(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr, st_PACKER_ATOC_NODE* assnode);
int32 LOD_r_AHDR(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
int32 LOD_r_ATOC(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
int32 LOD_r_DICT(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
int32 LOD_r_PVER(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
int32 LOD_r_PACK(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
int32 OrdTest_R_AssetID(void* vkey, void* vitem);
int32 OrdTest_R_Asset(void* vkey, void* vitem);
int32 PKR_FRIEND_assetIsGameDup(uint32 aid, st_PACKER_READ_DATA* skippr);
int32 PKR_PkgHasAsset(st_PACKER_READ_DATA* pr, uint32 aid);
int32 PKR_GetAssetInfoByType(st_PACKER_READ_DATA* pr, uint32 type, int32 idx, st_PKR_ASSET_TOCINFO* tocinfo);
int32 PKR_GetAssetInfo(st_PACKER_READ_DATA* pr, uint32 aid, st_PKR_ASSET_TOCINFO* tocinfo);
uint32 PKR_GetBaseSector(st_PACKER_READ_DATA* pr);
int8* PKR_AssetName(st_PACKER_READ_DATA* pr, uint32 aid);
uint32 PKR_getPackTimestamp(st_PACKER_READ_DATA* pr);
int32 PKR_IsAssetReady(st_PACKER_READ_DATA* pr, uint32 aid);
void* PKR_AssetByType(st_PACKER_READ_DATA* pr, uint32 type, int32 idx, uint32* size);
int32 PKR_AssetCount(st_PACKER_READ_DATA* pr, uint32 type);
uint32 PKR_GetAssetSize(st_PACKER_READ_DATA* pr, uint32 aid);
void* PKR_LoadAsset(st_PACKER_READ_DATA* pr, uint32 aid);
int32 PKR_LoadLayer();
void PKR_xform_asset(st_PACKER_ATOC_NODE* assnode);
void PKR_xformLayerAssets(st_PACKER_LTOC_NODE* laynode);
void PKR_updateLayerAssets(st_PACKER_LTOC_NODE* laynode);
int32 PKR_findNextLayerToLoad(st_PACKER_READ_DATA** work_on_pkg, st_PACKER_LTOC_NODE** next_layer);
int32 PKR_LoadStep_Async();
int32 PKR_parse_TOC(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
int32 PKR_SetActive(st_PACKER_READ_DATA* pr, en_LAYER_TYPE layer);
void PKR_ReadDone(st_PACKER_READ_DATA* pr);
st_PACKER_READ_DATA* PKR_ReadInit(void* userdata, int8* pkgfile, uint32 opts, int32* cltver, st_PACKER_ASSETTYPE* typelist);
int32 PKRLoadStep();
int32 PKRShutdown();
int32 PKRStartup();
st_PACKER_READ_FUNCS* PKRGetReadFuncs(int32 apiver);

// PKR_special_loadbuf_killed__FP10RwResEntry
// Start address: 0x11d8d0
void PKR_special_loadbuf_killed()
{
	// Line 7666, Address: 0x11d8d0, Func Offset: 0
	// Func End, Address: 0x11d8d8, Func Offset: 0x8
}

// PKR_relmem__FUiiPvUii
// Start address: 0x11d8e0
void PKR_relmem(void* memptr, int32 isTemp)
{
	// Line 6509, Address: 0x11d8e0, Func Offset: 0
	// Line 6516, Address: 0x11d8e4, Func Offset: 0x4
	// Line 6528, Address: 0x11d8ec, Func Offset: 0xc
	// Line 6536, Address: 0x11d8fc, Func Offset: 0x1c
	// Func End, Address: 0x11d908, Func Offset: 0x28
}

// PKR_getmem__FUiiUii
// Start address: 0x11d910
void* PKR_getmem(int32 amount, int32 isTemp)
{
	void* memptr;
	// Line 6429, Address: 0x11d910, Func Offset: 0
	// Line 6448, Address: 0x11d924, Func Offset: 0x14
	// Line 6458, Address: 0x11d92c, Func Offset: 0x1c
	// Line 6460, Address: 0x11d944, Func Offset: 0x34
	// Line 6466, Address: 0x11d95c, Func Offset: 0x4c
	// Line 6467, Address: 0x11d964, Func Offset: 0x54
	// Line 6488, Address: 0x11d974, Func Offset: 0x64
	// Line 6489, Address: 0x11d978, Func Offset: 0x68
	// Func End, Address: 0x11d98c, Func Offset: 0x7c
}

// PKR_bld_typecnt__FP19st_PACKER_READ_DATA
// Start address: 0x11d990
void PKR_bld_typecnt(st_PACKER_READ_DATA* pr)
{
	int32 lasttidx;
	uint32 lasttype;
	st_XORDEREDARRAY* tmplist;
	int32 typcnt[129];
	int32 idx;
	int32 j;
	int32 i;
	st_PACKER_ATOC_NODE* assnode;
	st_PACKER_LTOC_NODE* laynode;
	// Line 6210, Address: 0x11d990, Func Offset: 0
	// Line 6218, Address: 0x11d9b4, Func Offset: 0x24
	// Line 6210, Address: 0x11d9b8, Func Offset: 0x28
	// Line 6218, Address: 0x11d9c0, Func Offset: 0x30
	// Line 6221, Address: 0x11d9f0, Func Offset: 0x60
	// Line 6222, Address: 0x11d9f4, Func Offset: 0x64
	// Line 6242, Address: 0x11d9f8, Func Offset: 0x68
	// Line 6218, Address: 0x11d9fc, Func Offset: 0x6c
	// Line 6242, Address: 0x11da00, Func Offset: 0x70
	// Line 6243, Address: 0x11da0c, Func Offset: 0x7c
	// Line 6246, Address: 0x11da10, Func Offset: 0x80
	// Line 6243, Address: 0x11da14, Func Offset: 0x84
	// Line 6246, Address: 0x11da1c, Func Offset: 0x8c
	// Line 6247, Address: 0x11da28, Func Offset: 0x98
	// Line 6249, Address: 0x11da2c, Func Offset: 0x9c
	// Line 6247, Address: 0x11da30, Func Offset: 0xa0
	// Line 6249, Address: 0x11da38, Func Offset: 0xa8
	// Line 6253, Address: 0x11da48, Func Offset: 0xb8
	// Line 6260, Address: 0x11da58, Func Offset: 0xc8
	// Line 6263, Address: 0x11da6c, Func Offset: 0xdc
	// Line 6265, Address: 0x11da74, Func Offset: 0xe4
	// Line 6274, Address: 0x11dab0, Func Offset: 0x120
	// Line 6278, Address: 0x11dab8, Func Offset: 0x128
	// Line 6279, Address: 0x11dac0, Func Offset: 0x130
	// Line 6280, Address: 0x11dac8, Func Offset: 0x138
	// Line 6282, Address: 0x11dadc, Func Offset: 0x14c
	// Line 6280, Address: 0x11dae0, Func Offset: 0x150
	// Line 6282, Address: 0x11dae4, Func Offset: 0x154
	// Line 6283, Address: 0x11daf8, Func Offset: 0x168
	// Line 6286, Address: 0x11db0c, Func Offset: 0x17c
	// Line 6289, Address: 0x11db14, Func Offset: 0x184
	// Line 6296, Address: 0x11db20, Func Offset: 0x190
	// Line 6297, Address: 0x11db40, Func Offset: 0x1b0
	// Line 6296, Address: 0x11db48, Func Offset: 0x1b8
	// Line 6297, Address: 0x11db4c, Func Offset: 0x1bc
	// Line 6301, Address: 0x11db54, Func Offset: 0x1c4
	// Line 6302, Address: 0x11db60, Func Offset: 0x1d0
	// Line 6305, Address: 0x11db64, Func Offset: 0x1d4
	// Line 6302, Address: 0x11db68, Func Offset: 0x1d8
	// Line 6305, Address: 0x11db70, Func Offset: 0x1e0
	// Line 6306, Address: 0x11db78, Func Offset: 0x1e8
	// Line 6308, Address: 0x11db7c, Func Offset: 0x1ec
	// Line 6306, Address: 0x11db80, Func Offset: 0x1f0
	// Line 6308, Address: 0x11db88, Func Offset: 0x1f8
	// Line 6309, Address: 0x11db98, Func Offset: 0x208
	// Line 6313, Address: 0x11dba8, Func Offset: 0x218
	// Line 6316, Address: 0x11dbbc, Func Offset: 0x22c
	// Line 6318, Address: 0x11dbc4, Func Offset: 0x234
	// Line 6326, Address: 0x11dc00, Func Offset: 0x270
	// Line 6328, Address: 0x11dc10, Func Offset: 0x280
	// Line 6329, Address: 0x11dc1c, Func Offset: 0x28c
	// Line 6331, Address: 0x11dc20, Func Offset: 0x290
	// Line 6333, Address: 0x11dc2c, Func Offset: 0x29c
	// Line 6334, Address: 0x11dc44, Func Offset: 0x2b4
	// Line 6344, Address: 0x11dc58, Func Offset: 0x2c8
	// Func End, Address: 0x11dc84, Func Offset: 0x2f4
}

// PKR_type2typeref__FUiP19st_PACKER_ASSETTYPE
// Start address: 0x11dc90
st_PACKER_ASSETTYPE* PKR_type2typeref(uint32 type, st_PACKER_ASSETTYPE* typelist)
{
	st_PACKER_ASSETTYPE* tmptype;
	st_PACKER_ASSETTYPE* da_type;
	// Line 6171, Address: 0x11dc90, Func Offset: 0
	// Line 6172, Address: 0x11dc98, Func Offset: 0x8
	// Line 6173, Address: 0x11dca0, Func Offset: 0x10
	// Line 6175, Address: 0x11dca8, Func Offset: 0x18
	// Line 6182, Address: 0x11dcb0, Func Offset: 0x20
	// Line 6183, Address: 0x11dcbc, Func Offset: 0x2c
	// Line 6191, Address: 0x11dcc0, Func Offset: 0x30
	// Func End, Address: 0x11dcc8, Func Offset: 0x38
}

// LOD_r_LHDR__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA
// Start address: 0x11dcd0
int32 LOD_r_LHDR(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr)
{
	st_PACKER_ATOC_NODE* assnode;
	int32 i;
	int32 idx;
	int32 refcnt;
	en_LAYER_TYPE laytyp;
	int32 ival;
	uint32 cid;
	// Line 4389, Address: 0x11dcd0, Func Offset: 0
	// Line 4393, Address: 0x11dcf0, Func Offset: 0x20
	// Line 4395, Address: 0x11dcf4, Func Offset: 0x24
	// Line 4406, Address: 0x11dcf8, Func Offset: 0x28
	// Line 4411, Address: 0x11dd18, Func Offset: 0x48
	// Line 4407, Address: 0x11dd1c, Func Offset: 0x4c
	// Line 4411, Address: 0x11dd20, Func Offset: 0x50
	// Line 4462, Address: 0x11dd34, Func Offset: 0x64
	// Line 4463, Address: 0x11dd88, Func Offset: 0xb8
	// Line 4471, Address: 0x11dd94, Func Offset: 0xc4
	// Line 4472, Address: 0x11dd9c, Func Offset: 0xcc
	// Line 4486, Address: 0x11ddb4, Func Offset: 0xe4
	// Line 4492, Address: 0x11ddc8, Func Offset: 0xf8
	// Line 4495, Address: 0x11ddd0, Func Offset: 0x100
	// Line 4492, Address: 0x11ddd4, Func Offset: 0x104
	// Line 4495, Address: 0x11dddc, Func Offset: 0x10c
	// Line 4504, Address: 0x11dde4, Func Offset: 0x114
	// Line 4506, Address: 0x11ddf4, Func Offset: 0x124
	// Line 4507, Address: 0x11de08, Func Offset: 0x138
	// Line 4510, Address: 0x11de10, Func Offset: 0x140
	// Line 4515, Address: 0x11de20, Func Offset: 0x150
	// Line 4518, Address: 0x11de38, Func Offset: 0x168
	// Line 4521, Address: 0x11de44, Func Offset: 0x174
	// Line 4526, Address: 0x11de50, Func Offset: 0x180
	// Line 4527, Address: 0x11de60, Func Offset: 0x190
	// Line 4528, Address: 0x11de68, Func Offset: 0x198
	// Line 4531, Address: 0x11de80, Func Offset: 0x1b0
	// Line 4533, Address: 0x11deb4, Func Offset: 0x1e4
	// Line 4541, Address: 0x11deb8, Func Offset: 0x1e8
	// Line 4542, Address: 0x11dec8, Func Offset: 0x1f8
	// Line 4543, Address: 0x11ded8, Func Offset: 0x208
	// Line 4547, Address: 0x11dee0, Func Offset: 0x210
	// Line 4546, Address: 0x11defc, Func Offset: 0x22c
	// Line 4547, Address: 0x11df00, Func Offset: 0x230
	// Func End, Address: 0x11df08, Func Offset: 0x238
}

// LOD_r_ADBG__FP14st_HIPLOADDATAP19st_PACKER_READ_DATAP19st_PACKER_ATOC_NODE
// Start address: 0x11df10
int32 LOD_r_ADBG(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr, st_PACKER_ATOC_NODE* assnode)
{
	int8 tmpbuf[256];
	int32 ival;
	// Line 4262, Address: 0x11df10, Func Offset: 0
	// Line 4266, Address: 0x11df34, Func Offset: 0x24
	// Line 4265, Address: 0x11df38, Func Offset: 0x28
	// Line 4266, Address: 0x11df3c, Func Offset: 0x2c
	// Line 4272, Address: 0x11df68, Func Offset: 0x58
	// Line 4273, Address: 0x11df84, Func Offset: 0x74
	// Line 4278, Address: 0x11df88, Func Offset: 0x78
	// Line 4273, Address: 0x11df8c, Func Offset: 0x7c
	// Line 4278, Address: 0x11df90, Func Offset: 0x80
	// Line 4279, Address: 0x11dfa0, Func Offset: 0x90
	// Line 4280, Address: 0x11dfb0, Func Offset: 0xa0
	// Line 4282, Address: 0x11dfb4, Func Offset: 0xa4
	// Line 4286, Address: 0x11dfb8, Func Offset: 0xa8
	// Line 4293, Address: 0x11dfcc, Func Offset: 0xbc
	// Line 4296, Address: 0x11dfdc, Func Offset: 0xcc
	// Line 4299, Address: 0x11dff4, Func Offset: 0xe4
	// Line 4307, Address: 0x11dffc, Func Offset: 0xec
	// Line 4306, Address: 0x11e010, Func Offset: 0x100
	// Line 4307, Address: 0x11e014, Func Offset: 0x104
	// Func End, Address: 0x11e01c, Func Offset: 0x10c
}

// LOD_r_AHDR__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA
// Start address: 0x11e020
int32 LOD_r_AHDR(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr)
{
	int32 isdup;
	int32 ival;
	uint32 cid;
	// Line 4032, Address: 0x11e020, Func Offset: 0
	// Line 4036, Address: 0x11e03c, Func Offset: 0x1c
	// Line 4049, Address: 0x11e040, Func Offset: 0x20
	// Line 4122, Address: 0x11e060, Func Offset: 0x40
	// Line 4123, Address: 0x11e098, Func Offset: 0x78
	// Line 4125, Address: 0x11e09c, Func Offset: 0x7c
	// Line 4134, Address: 0x11e0ac, Func Offset: 0x8c
	// Line 4136, Address: 0x11e0c4, Func Offset: 0xa4
	// Line 4137, Address: 0x11e0cc, Func Offset: 0xac
	// Line 4140, Address: 0x11e0dc, Func Offset: 0xbc
	// Line 4142, Address: 0x11e0f4, Func Offset: 0xd4
	// Line 4146, Address: 0x11e0f8, Func Offset: 0xd8
	// Line 4142, Address: 0x11e100, Func Offset: 0xe0
	// Line 4146, Address: 0x11e104, Func Offset: 0xe4
	// Line 4148, Address: 0x11e114, Func Offset: 0xf4
	// Line 4149, Address: 0x11e11c, Func Offset: 0xfc
	// Line 4150, Address: 0x11e124, Func Offset: 0x104
	// Line 4152, Address: 0x11e128, Func Offset: 0x108
	// Line 4155, Address: 0x11e144, Func Offset: 0x124
	// Line 4157, Address: 0x11e15c, Func Offset: 0x13c
	// Line 4160, Address: 0x11e160, Func Offset: 0x140
	// Line 4157, Address: 0x11e168, Func Offset: 0x148
	// Line 4160, Address: 0x11e16c, Func Offset: 0x14c
	// Line 4161, Address: 0x11e17c, Func Offset: 0x15c
	// Line 4179, Address: 0x11e184, Func Offset: 0x164
	// Line 4180, Address: 0x11e194, Func Offset: 0x174
	// Line 4181, Address: 0x11e19c, Func Offset: 0x17c
	// Line 4184, Address: 0x11e1b4, Func Offset: 0x194
	// Line 4186, Address: 0x11e1c4, Func Offset: 0x1a4
	// Line 4194, Address: 0x11e1c8, Func Offset: 0x1a8
	// Line 4195, Address: 0x11e1d8, Func Offset: 0x1b8
	// Line 4196, Address: 0x11e1e8, Func Offset: 0x1c8
	// Line 4212, Address: 0x11e1f0, Func Offset: 0x1d0
	// Line 4216, Address: 0x11e20c, Func Offset: 0x1ec
	// Line 4248, Address: 0x11e224, Func Offset: 0x204
	// Line 4247, Address: 0x11e23c, Func Offset: 0x21c
	// Line 4248, Address: 0x11e240, Func Offset: 0x220
	// Func End, Address: 0x11e248, Func Offset: 0x228
}

// LOD_r_ATOC__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA
// Start address: 0x11e250
int32 LOD_r_ATOC(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr)
{
	uint32 cid;
	// Line 3951, Address: 0x11e250, Func Offset: 0
	// Line 3963, Address: 0x11e264, Func Offset: 0x14
	// Line 3964, Address: 0x11e27c, Func Offset: 0x2c
	// Line 3965, Address: 0x11e284, Func Offset: 0x34
	// Line 3968, Address: 0x11e2ac, Func Offset: 0x5c
	// Line 3969, Address: 0x11e2c8, Func Offset: 0x78
	// Line 3972, Address: 0x11e2d0, Func Offset: 0x80
	// Line 3979, Address: 0x11e2dc, Func Offset: 0x8c
	// Line 3982, Address: 0x11e2e0, Func Offset: 0x90
	// Line 3983, Address: 0x11e2f0, Func Offset: 0xa0
	// Line 3985, Address: 0x11e300, Func Offset: 0xb0
	// Line 3991, Address: 0x11e308, Func Offset: 0xb8
	// Line 3990, Address: 0x11e318, Func Offset: 0xc8
	// Line 3991, Address: 0x11e31c, Func Offset: 0xcc
	// Func End, Address: 0x11e324, Func Offset: 0xd4
}

// LOD_r_DICT__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA
// Start address: 0x11e330
int32 LOD_r_DICT(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr)
{
	uint32 cid;
	// Line 3899, Address: 0x11e330, Func Offset: 0
	// Line 3908, Address: 0x11e344, Func Offset: 0x14
	// Line 3909, Address: 0x11e35c, Func Offset: 0x2c
	// Line 3910, Address: 0x11e364, Func Offset: 0x34
	// Line 3913, Address: 0x11e388, Func Offset: 0x58
	// Line 3920, Address: 0x11e394, Func Offset: 0x64
	// Line 3923, Address: 0x11e3a4, Func Offset: 0x74
	// Line 3926, Address: 0x11e3ac, Func Offset: 0x7c
	// Line 3936, Address: 0x11e448, Func Offset: 0x118
	// Line 3937, Address: 0x11e458, Func Offset: 0x128
	// Line 3938, Address: 0x11e468, Func Offset: 0x138
	// Line 3941, Address: 0x11e470, Func Offset: 0x140
	// Line 3940, Address: 0x11e480, Func Offset: 0x150
	// Line 3941, Address: 0x11e484, Func Offset: 0x154
	// Func End, Address: 0x11e48c, Func Offset: 0x15c
}

// LOD_r_PVER__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA
// Start address: 0x11e490
int32 LOD_r_PVER(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr)
{
	int32 amt;
	int32 ver;
	// Line 3708, Address: 0x11e490, Func Offset: 0
	// Line 3711, Address: 0x11e4a4, Func Offset: 0x14
	// Line 3717, Address: 0x11e4a8, Func Offset: 0x18
	// Line 3718, Address: 0x11e4c8, Func Offset: 0x38
	// Line 3726, Address: 0x11e4cc, Func Offset: 0x3c
	// Line 3727, Address: 0x11e4d0, Func Offset: 0x40
	// Line 3718, Address: 0x11e4d8, Func Offset: 0x48
	// Line 3726, Address: 0x11e4dc, Func Offset: 0x4c
	// Line 3727, Address: 0x11e4e0, Func Offset: 0x50
	// Line 3731, Address: 0x11e4f0, Func Offset: 0x60
	// Line 3734, Address: 0x11e4f4, Func Offset: 0x64
	// Line 3735, Address: 0x11e4f8, Func Offset: 0x68
	// Line 3731, Address: 0x11e500, Func Offset: 0x70
	// Line 3734, Address: 0x11e504, Func Offset: 0x74
	// Line 3735, Address: 0x11e508, Func Offset: 0x78
	// Line 3736, Address: 0x11e518, Func Offset: 0x88
	// Line 3739, Address: 0x11e524, Func Offset: 0x94
	// Line 3740, Address: 0x11e52c, Func Offset: 0x9c
	// Line 3746, Address: 0x11e534, Func Offset: 0xa4
	// Line 3745, Address: 0x11e544, Func Offset: 0xb4
	// Line 3746, Address: 0x11e548, Func Offset: 0xb8
	// Func End, Address: 0x11e550, Func Offset: 0xc0
}

// LOD_r_PACK__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA
// Start address: 0x11e550
int32 LOD_r_PACK(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr)
{
	uint32 cid;
	// Line 3650, Address: 0x11e550, Func Offset: 0
	// Line 3659, Address: 0x11e568, Func Offset: 0x18
	// Line 3660, Address: 0x11e580, Func Offset: 0x30
	// Line 3661, Address: 0x11e58c, Func Offset: 0x3c
	// Line 3664, Address: 0x11e5d4, Func Offset: 0x84
	// Line 3665, Address: 0x11e5e0, Func Offset: 0x90
	// Line 3668, Address: 0x11e5e8, Func Offset: 0x98
	// Line 3669, Address: 0x11e604, Func Offset: 0xb4
	// Line 3672, Address: 0x11e60c, Func Offset: 0xbc
	// Line 3673, Address: 0x11e698, Func Offset: 0x148
	// Line 3676, Address: 0x11e6a0, Func Offset: 0x150
	// Line 3677, Address: 0x11e714, Func Offset: 0x1c4
	// Line 3680, Address: 0x11e71c, Func Offset: 0x1cc
	// Line 3690, Address: 0x11e740, Func Offset: 0x1f0
	// Line 3691, Address: 0x11e750, Func Offset: 0x200
	// Line 3692, Address: 0x11e760, Func Offset: 0x210
	// Line 3695, Address: 0x11e768, Func Offset: 0x218
	// Line 3694, Address: 0x11e77c, Func Offset: 0x22c
	// Line 3695, Address: 0x11e780, Func Offset: 0x230
	// Func End, Address: 0x11e788, Func Offset: 0x238
}

// OrdTest_R_AssetID__FPCvPv
// Start address: 0x11e790
int32 OrdTest_R_AssetID(void* vkey, void* vitem)
{
	uint32 key;
	int32 rc;
	// Line 2889, Address: 0x11e790, Func Offset: 0
	// Line 2890, Address: 0x11e7a8, Func Offset: 0x18
	// Line 2894, Address: 0x11e7b4, Func Offset: 0x24
	// Func End, Address: 0x11e7bc, Func Offset: 0x2c
}

// OrdTest_R_Asset__FPCvPv
// Start address: 0x11e7c0
int32 OrdTest_R_Asset(void* vkey, void* vitem)
{
	int32 rc;
	// Line 2859, Address: 0x11e7c0, Func Offset: 0
	// Line 2860, Address: 0x11e7dc, Func Offset: 0x1c
	// Line 2864, Address: 0x11e7e8, Func Offset: 0x28
	// Func End, Address: 0x11e7f0, Func Offset: 0x30
}

// PKR_FRIEND_assetIsGameDup__FUiPC19st_PACKER_READ_DATAiUiUiPc
// Start address: 0x11e7f0
int32 PKR_FRIEND_assetIsGameDup(uint32 aid, st_PACKER_READ_DATA* skippr)
{
	int32 idx;
	int32 i;
	st_PACKER_ATOC_NODE* tmp_ass;
	int32 is_dup;
	// Line 2587, Address: 0x11e7f0, Func Offset: 0
	// Line 2606, Address: 0x11e80c, Func Offset: 0x1c
	// Line 2587, Address: 0x11e810, Func Offset: 0x20
	// Line 2606, Address: 0x11e818, Func Offset: 0x28
	// Line 2615, Address: 0x11e834, Func Offset: 0x44
	// Line 2616, Address: 0x11e840, Func Offset: 0x50
	// Line 2619, Address: 0x11e858, Func Offset: 0x68
	// Line 2622, Address: 0x11e860, Func Offset: 0x70
	// Line 2623, Address: 0x11e870, Func Offset: 0x80
	// Line 2626, Address: 0x11e878, Func Offset: 0x88
	// Line 2642, Address: 0x11e880, Func Offset: 0x90
	// Line 2626, Address: 0x11e884, Func Offset: 0x94
	// Line 2642, Address: 0x11e88c, Func Offset: 0x9c
	// Line 2647, Address: 0x11e89c, Func Offset: 0xac
	// Line 2652, Address: 0x11e8bc, Func Offset: 0xcc
	// Line 2717, Address: 0x11e8c0, Func Offset: 0xd0
	// Line 2718, Address: 0x11e8c4, Func Offset: 0xd4
	// Line 2719, Address: 0x11e8cc, Func Offset: 0xdc
	// Line 2721, Address: 0x11e8e0, Func Offset: 0xf0
	// Line 2722, Address: 0x11e8e4, Func Offset: 0xf4
	// Func End, Address: 0x11e908, Func Offset: 0x118
}

// PKR_PkgHasAsset__FP19st_PACKER_READ_DATAUi
// Start address: 0x11e910
int32 PKR_PkgHasAsset(st_PACKER_READ_DATA* pr, uint32 aid)
{
	int32 idx;
	int32 rc;
	// Line 2535, Address: 0x11e910, Func Offset: 0
	// Line 2541, Address: 0x11e920, Func Offset: 0x10
	// Line 2543, Address: 0x11e930, Func Offset: 0x20
	// Line 2549, Address: 0x11e940, Func Offset: 0x30
	// Line 2550, Address: 0x11e96c, Func Offset: 0x5c
	// Line 2555, Address: 0x11e980, Func Offset: 0x70
	// Func End, Address: 0x11e990, Func Offset: 0x80
}

// PKR_GetAssetInfoByType__FP19st_PACKER_READ_DATAUiiP20st_PKR_ASSET_TOCINFO
// Start address: 0x11e990
int32 PKR_GetAssetInfoByType(st_PACKER_READ_DATA* pr, uint32 type, int32 idx, st_PKR_ASSET_TOCINFO* tocinfo)
{
	st_XORDEREDARRAY* typlist;
	st_PACKER_ATOC_NODE* assnode;
	// Line 2451, Address: 0x11e990, Func Offset: 0
	// Line 2458, Address: 0x11e9b8, Func Offset: 0x28
	// Line 2461, Address: 0x11e9c8, Func Offset: 0x38
	// Line 2464, Address: 0x11e9d4, Func Offset: 0x44
	// Line 2466, Address: 0x11ea08, Func Offset: 0x78
	// Line 2469, Address: 0x11ea18, Func Offset: 0x88
	// Line 2473, Address: 0x11ea20, Func Offset: 0x90
	// Line 2476, Address: 0x11ea38, Func Offset: 0xa8
	// Line 2481, Address: 0x11ea48, Func Offset: 0xb8
	// Line 2482, Address: 0x11ea50, Func Offset: 0xc0
	// Line 2484, Address: 0x11ea70, Func Offset: 0xe0
	// Line 2485, Address: 0x11ea8c, Func Offset: 0xfc
	// Line 2498, Address: 0x11ea90, Func Offset: 0x100
	// Line 2485, Address: 0x11ea94, Func Offset: 0x104
	// Line 2486, Address: 0x11ea98, Func Offset: 0x108
	// Line 2531, Address: 0x11eaa0, Func Offset: 0x110
	// Func End, Address: 0x11eabc, Func Offset: 0x12c
}

// PKR_GetAssetInfo__FP19st_PACKER_READ_DATAUiP20st_PKR_ASSET_TOCINFO
// Start address: 0x11eac0
int32 PKR_GetAssetInfo(st_PACKER_READ_DATA* pr, uint32 aid, st_PKR_ASSET_TOCINFO* tocinfo)
{
	st_PACKER_ATOC_NODE* assnode;
	int32 idx;
	// Line 2419, Address: 0x11eac0, Func Offset: 0
	// Line 2423, Address: 0x11eae0, Func Offset: 0x20
	// Line 2426, Address: 0x11eaf0, Func Offset: 0x30
	// Line 2427, Address: 0x11eb04, Func Offset: 0x44
	// Line 2428, Address: 0x11eb0c, Func Offset: 0x4c
	// Line 2430, Address: 0x11eb1c, Func Offset: 0x5c
	// Line 2431, Address: 0x11eb20, Func Offset: 0x60
	// Line 2433, Address: 0x11eb40, Func Offset: 0x80
	// Line 2434, Address: 0x11eb5c, Func Offset: 0x9c
	// Line 2435, Address: 0x11eb64, Func Offset: 0xa4
	// Line 2446, Address: 0x11eb6c, Func Offset: 0xac
	// Line 2447, Address: 0x11eb78, Func Offset: 0xb8
	// Func End, Address: 0x11eb90, Func Offset: 0xd0
}

// PKR_GetBaseSector__FP19st_PACKER_READ_DATA
// Start address: 0x11eb90
uint32 PKR_GetBaseSector(st_PACKER_READ_DATA* pr)
{
	// Line 2416, Address: 0x11eb90, Func Offset: 0
	// Func End, Address: 0x11eb98, Func Offset: 0x8
}

// PKR_AssetName__FP19st_PACKER_READ_DATAUi
// Start address: 0x11eba0
int8* PKR_AssetName(st_PACKER_READ_DATA* pr, uint32 aid)
{
	int32 idx;
	int8* da_name;
	// Line 2398, Address: 0x11eba0, Func Offset: 0
	// Line 2403, Address: 0x11ebb0, Func Offset: 0x10
	// Line 2398, Address: 0x11ebb4, Func Offset: 0x14
	// Line 2403, Address: 0x11ebb8, Func Offset: 0x18
	// Line 2404, Address: 0x11ebc8, Func Offset: 0x28
	// Line 2406, Address: 0x11ebd0, Func Offset: 0x30
	// Line 2409, Address: 0x11ebe4, Func Offset: 0x44
	// Line 2410, Address: 0x11ebe8, Func Offset: 0x48
	// Func End, Address: 0x11ebfc, Func Offset: 0x5c
}

// PKR_getPackTimestamp__FP19st_PACKER_READ_DATA
// Start address: 0x11ec00
uint32 PKR_getPackTimestamp(st_PACKER_READ_DATA* pr)
{
	// Line 2389, Address: 0x11ec00, Func Offset: 0
	// Func End, Address: 0x11ec08, Func Offset: 0x8
}

// PKR_IsAssetReady__FP19st_PACKER_READ_DATAUi
// Start address: 0x11ec10
int32 PKR_IsAssetReady(st_PACKER_READ_DATA* pr, uint32 aid)
{
	int32 idx;
	int32 is_ok;
	// Line 2359, Address: 0x11ec10, Func Offset: 0
	// Line 2368, Address: 0x11ec20, Func Offset: 0x10
	// Line 2359, Address: 0x11ec24, Func Offset: 0x14
	// Line 2368, Address: 0x11ec28, Func Offset: 0x18
	// Line 2369, Address: 0x11ec38, Func Offset: 0x28
	// Line 2378, Address: 0x11ec40, Func Offset: 0x30
	// Line 2382, Address: 0x11ec68, Func Offset: 0x58
	// Line 2383, Address: 0x11ec6c, Func Offset: 0x5c
	// Func End, Address: 0x11ec80, Func Offset: 0x70
}

// PKR_AssetByType__FP19st_PACKER_READ_DATAUiiPUi
// Start address: 0x11ec80
void* PKR_AssetByType(st_PACKER_READ_DATA* pr, uint32 type, int32 idx, uint32* size)
{
	st_PACKER_ATOC_NODE* assnode;
	st_XORDEREDARRAY* typlist;
	// Line 2275, Address: 0x11ec80, Func Offset: 0
	// Line 2278, Address: 0x11ec8c, Func Offset: 0xc
	// Line 2281, Address: 0x11ec98, Func Offset: 0x18
	// Line 2283, Address: 0x11ecd0, Func Offset: 0x50
	// Line 2286, Address: 0x11ece0, Func Offset: 0x60
	// Line 2290, Address: 0x11ece8, Func Offset: 0x68
	// Line 2293, Address: 0x11ed00, Func Offset: 0x80
	// Line 2298, Address: 0x11ed0c, Func Offset: 0x8c
	// Line 2305, Address: 0x11ed1c, Func Offset: 0x9c
	// Line 2354, Address: 0x11ed24, Func Offset: 0xa4
	// Func End, Address: 0x11ed2c, Func Offset: 0xac
}

// PKR_AssetCount__FP19st_PACKER_READ_DATAUi
// Start address: 0x11ed30
int32 PKR_AssetCount(st_PACKER_READ_DATA* pr, uint32 type)
{
	int32 cnt;
	// Line 2248, Address: 0x11ed30, Func Offset: 0
	// Line 2251, Address: 0x11ed40, Func Offset: 0x10
	// Line 2254, Address: 0x11ed78, Func Offset: 0x48
	// Line 2256, Address: 0x11ed80, Func Offset: 0x50
	// Line 2260, Address: 0x11ed90, Func Offset: 0x60
	// Func End, Address: 0x11ed98, Func Offset: 0x68
}

// PKR_GetAssetSize__FP19st_PACKER_READ_DATAUi
// Start address: 0x11eda0
uint32 PKR_GetAssetSize(st_PACKER_READ_DATA* pr, uint32 aid)
{
	st_PACKER_ATOC_NODE* assnode;
	int32 idx;
	// Line 2211, Address: 0x11eda0, Func Offset: 0
	// Line 2221, Address: 0x11edb0, Func Offset: 0x10
	// Line 2211, Address: 0x11edb4, Func Offset: 0x14
	// Line 2221, Address: 0x11edb8, Func Offset: 0x18
	// Line 2223, Address: 0x11edc8, Func Offset: 0x28
	// Line 2225, Address: 0x11edd4, Func Offset: 0x34
	// Line 2232, Address: 0x11ede4, Func Offset: 0x44
	// Line 2233, Address: 0x11edec, Func Offset: 0x4c
	// Line 2237, Address: 0x11ee08, Func Offset: 0x68
	// Func End, Address: 0x11ee1c, Func Offset: 0x7c
}

// PKR_LoadAsset__FP19st_PACKER_READ_DATAUiPCcPv
// Start address: 0x11ee20
void* PKR_LoadAsset(st_PACKER_READ_DATA* pr, uint32 aid)
{
	// Line 2199, Address: 0x11ee20, Func Offset: 0
	// Line 2200, Address: 0x11ee30, Func Offset: 0x10
	// Line 2199, Address: 0x11ee34, Func Offset: 0x14
	// Line 2200, Address: 0x11ee38, Func Offset: 0x18
	// Line 2201, Address: 0x11ee70, Func Offset: 0x50
	// Func End, Address: 0x11ee84, Func Offset: 0x64
}

// PKR_LoadLayer__FP19st_PACKER_READ_DATA13en_LAYER_TYPE
// Start address: 0x11ee90
int32 PKR_LoadLayer()
{
	// Line 2195, Address: 0x11ee90, Func Offset: 0
	// Func End, Address: 0x11ee98, Func Offset: 0x8
}

// PKR_xform_asset__FP19st_PACKER_ATOC_NODE
// Start address: 0x11eea0
void PKR_xform_asset(st_PACKER_ATOC_NODE* assnode)
{
	st_PACKER_ASSETTYPE* atype;
	int8* xformloc;
	// Line 2065, Address: 0x11eea0, Func Offset: 0
	// Line 2071, Address: 0x11eeac, Func Offset: 0xc
	// Line 2074, Address: 0x11eebc, Func Offset: 0x1c
	// Line 2081, Address: 0x11eed4, Func Offset: 0x34
	// Line 2085, Address: 0x11eedc, Func Offset: 0x3c
	// Line 2087, Address: 0x11eee0, Func Offset: 0x40
	// Line 2096, Address: 0x11eee8, Func Offset: 0x48
	// Line 2110, Address: 0x11eef4, Func Offset: 0x54
	// Line 2114, Address: 0x11ef00, Func Offset: 0x60
	// Line 2122, Address: 0x11ef04, Func Offset: 0x64
	// Line 2139, Address: 0x11ef24, Func Offset: 0x84
	// Line 2146, Address: 0x11ef3c, Func Offset: 0x9c
	// Line 2147, Address: 0x11ef54, Func Offset: 0xb4
	// Line 2153, Address: 0x11ef58, Func Offset: 0xb8
	// Line 2154, Address: 0x11ef64, Func Offset: 0xc4
	// Line 2155, Address: 0x11ef6c, Func Offset: 0xcc
	// Line 2162, Address: 0x11ef70, Func Offset: 0xd0
	// Func End, Address: 0x11ef80, Func Offset: 0xe0
}

// PKR_xformLayerAssets__FP19st_PACKER_LTOC_NODE
// Start address: 0x11ef80
void PKR_xformLayerAssets(st_PACKER_LTOC_NODE* laynode)
{
	st_PACKER_ATOC_NODE* tmpass;
	int32 will_be_dumped;
	int32 i;
	// Line 2019, Address: 0x11ef80, Func Offset: 0
	// Line 2027, Address: 0x11ef9c, Func Offset: 0x1c
	// Line 2028, Address: 0x11eff4, Func Offset: 0x74
	// Line 2032, Address: 0x11eff8, Func Offset: 0x78
	// Line 2033, Address: 0x11f000, Func Offset: 0x80
	// Line 2034, Address: 0x11f004, Func Offset: 0x84
	// Line 2033, Address: 0x11f008, Func Offset: 0x88
	// Line 2034, Address: 0x11f010, Func Offset: 0x90
	// Line 2045, Address: 0x11f020, Func Offset: 0xa0
	// Line 2051, Address: 0x11f028, Func Offset: 0xa8
	// Line 2057, Address: 0x11f03c, Func Offset: 0xbc
	// Line 2059, Address: 0x11f044, Func Offset: 0xc4
	// Line 2062, Address: 0x11f058, Func Offset: 0xd8
	// Func End, Address: 0x11f078, Func Offset: 0xf8
}

// PKR_updateLayerAssets__FP19st_PACKER_LTOC_NODE
// Start address: 0x11f080
void PKR_updateLayerAssets(st_PACKER_LTOC_NODE* laynode)
{
	int32 lay_hip_pos;
	st_PACKER_ATOC_NODE* tmpass;
	int32 i;
	// Line 1914, Address: 0x11f080, Func Offset: 0
	// Line 1906, Address: 0x11f084, Func Offset: 0x4
	// Line 1914, Address: 0x11f088, Func Offset: 0x8
	// Line 1915, Address: 0x11f094, Func Offset: 0x14
	// Line 1917, Address: 0x11f0a0, Func Offset: 0x20
	// Line 1918, Address: 0x11f0b8, Func Offset: 0x38
	// Line 1919, Address: 0x11f0c0, Func Offset: 0x40
	// Line 1922, Address: 0x11f0d8, Func Offset: 0x58
	// Line 1930, Address: 0x11f0e0, Func Offset: 0x60
	// Line 1944, Address: 0x11f0e4, Func Offset: 0x64
	// Line 1945, Address: 0x11f0f0, Func Offset: 0x70
	// Line 1952, Address: 0x11f0f4, Func Offset: 0x74
	// Line 1945, Address: 0x11f0f8, Func Offset: 0x78
	// Line 1952, Address: 0x11f100, Func Offset: 0x80
	// Line 1956, Address: 0x11f110, Func Offset: 0x90
	// Line 1961, Address: 0x11f120, Func Offset: 0xa0
	// Line 1970, Address: 0x11f128, Func Offset: 0xa8
	// Line 1973, Address: 0x11f130, Func Offset: 0xb0
	// Line 1970, Address: 0x11f134, Func Offset: 0xb4
	// Line 1973, Address: 0x11f140, Func Offset: 0xc0
	// Line 2001, Address: 0x11f14c, Func Offset: 0xcc
	// Line 1973, Address: 0x11f150, Func Offset: 0xd0
	// Line 2001, Address: 0x11f154, Func Offset: 0xd4
	// Line 2016, Address: 0x11f168, Func Offset: 0xe8
	// Func End, Address: 0x11f170, Func Offset: 0xf0
}

// PKR_findNextLayerToLoad__FPP19st_PACKER_READ_DATAPP19st_PACKER_LTOC_NODE
// Start address: 0x11f170
int32 PKR_findNextLayerToLoad(st_PACKER_READ_DATA** work_on_pkg, st_PACKER_LTOC_NODE** next_layer)
{
	int32 j;
	int32 i;
	st_PACKER_LTOC_NODE* tmplay;
	st_PACKER_READ_DATA* tmppr;
	// Line 1860, Address: 0x11f170, Func Offset: 0
	// Line 1863, Address: 0x11f174, Func Offset: 0x4
	// Line 1864, Address: 0x11f178, Func Offset: 0x8
	// Line 1865, Address: 0x11f180, Func Offset: 0x10
	// Line 1866, Address: 0x11f194, Func Offset: 0x24
	// Line 1867, Address: 0x11f1a0, Func Offset: 0x30
	// Line 1868, Address: 0x11f1b0, Func Offset: 0x40
	// Line 1870, Address: 0x11f1b4, Func Offset: 0x44
	// Line 1871, Address: 0x11f1bc, Func Offset: 0x4c
	// Line 1872, Address: 0x11f1cc, Func Offset: 0x5c
	// Line 1877, Address: 0x11f1d0, Func Offset: 0x60
	// Line 1880, Address: 0x11f1dc, Func Offset: 0x6c
	// Line 1882, Address: 0x11f1e8, Func Offset: 0x78
	// Line 1885, Address: 0x11f200, Func Offset: 0x90
	// Line 1887, Address: 0x11f20c, Func Offset: 0x9c
	// Line 1888, Address: 0x11f21c, Func Offset: 0xac
	// Line 1889, Address: 0x11f220, Func Offset: 0xb0
	// Line 1888, Address: 0x11f224, Func Offset: 0xb4
	// Line 1889, Address: 0x11f22c, Func Offset: 0xbc
	// Line 1890, Address: 0x11f23c, Func Offset: 0xcc
	// Line 1892, Address: 0x11f240, Func Offset: 0xd0
	// Line 1893, Address: 0x11f24c, Func Offset: 0xdc
	// Line 1895, Address: 0x11f260, Func Offset: 0xf0
	// Line 1896, Address: 0x11f26c, Func Offset: 0xfc
	// Line 1900, Address: 0x11f280, Func Offset: 0x110
	// Line 1901, Address: 0x11f288, Func Offset: 0x118
	// Func End, Address: 0x11f290, Func Offset: 0x120
}

// PKR_LoadStep_Async__Fv
// Start address: 0x11f290
int32 PKR_LoadStep_Async()
{
	st_PACKER_ATOC_NODE* tmpass;
	en_READ_ASYNC_STATUS readstat;
	int32 rc;
	int32 moretodo;
	st_PACKER_READ_DATA* curpr;
	st_PACKER_LTOC_NODE* asynlay;
	int8 init;
	int8 init;
	// Line 1308, Address: 0x11f290, Func Offset: 0
	// Line 1314, Address: 0x11f2a8, Func Offset: 0x18
	// Line 1315, Address: 0x11f2c4, Func Offset: 0x34
	// Line 1330, Address: 0x11f2e0, Func Offset: 0x50
	// Line 1336, Address: 0x11f2ec, Func Offset: 0x5c
	// Line 1338, Address: 0x11f2fc, Func Offset: 0x6c
	// Line 1351, Address: 0x11f308, Func Offset: 0x78
	// Line 1368, Address: 0x11f374, Func Offset: 0xe4
	// Line 1376, Address: 0x11f380, Func Offset: 0xf0
	// Line 1380, Address: 0x11f3cc, Func Offset: 0x13c
	// Line 1391, Address: 0x11f430, Func Offset: 0x1a0
	// Line 1394, Address: 0x11f438, Func Offset: 0x1a8
	// Line 1413, Address: 0x11f458, Func Offset: 0x1c8
	// Line 1418, Address: 0x11f45c, Func Offset: 0x1cc
	// Line 1413, Address: 0x11f464, Func Offset: 0x1d4
	// Line 1418, Address: 0x11f468, Func Offset: 0x1d8
	// Line 1413, Address: 0x11f46c, Func Offset: 0x1dc
	// Line 1418, Address: 0x11f470, Func Offset: 0x1e0
	// Line 1451, Address: 0x11f47c, Func Offset: 0x1ec
	// Line 1457, Address: 0x11f498, Func Offset: 0x208
	// Line 1461, Address: 0x11f4a0, Func Offset: 0x210
	// Line 1462, Address: 0x11f4b0, Func Offset: 0x220
	// Line 1481, Address: 0x11f4b8, Func Offset: 0x228
	// Line 1484, Address: 0x11f510, Func Offset: 0x280
	// Line 1497, Address: 0x11f520, Func Offset: 0x290
	// Line 1498, Address: 0x11f524, Func Offset: 0x294
	// Line 1497, Address: 0x11f52c, Func Offset: 0x29c
	// Line 1498, Address: 0x11f530, Func Offset: 0x2a0
	// Line 1500, Address: 0x11f540, Func Offset: 0x2b0
	// Line 1501, Address: 0x11f544, Func Offset: 0x2b4
	// Line 1506, Address: 0x11f548, Func Offset: 0x2b8
	// Line 1516, Address: 0x11f550, Func Offset: 0x2c0
	// Line 1518, Address: 0x11f558, Func Offset: 0x2c8
	// Line 1516, Address: 0x11f55c, Func Offset: 0x2cc
	// Line 1521, Address: 0x11f564, Func Offset: 0x2d4
	// Line 1524, Address: 0x11f56c, Func Offset: 0x2dc
	// Line 1525, Address: 0x11f570, Func Offset: 0x2e0
	// Line 1529, Address: 0x11f574, Func Offset: 0x2e4
	// Line 1541, Address: 0x11f57c, Func Offset: 0x2ec
	// Line 1634, Address: 0x11f590, Func Offset: 0x300
	// Line 1644, Address: 0x11f598, Func Offset: 0x308
	// Line 1645, Address: 0x11f5f0, Func Offset: 0x360
	// Line 1650, Address: 0x11f5f8, Func Offset: 0x368
	// Line 1651, Address: 0x11f600, Func Offset: 0x370
	// Line 1668, Address: 0x11f608, Func Offset: 0x378
	// Line 1671, Address: 0x11f610, Func Offset: 0x380
	// Line 1677, Address: 0x11f664, Func Offset: 0x3d4
	// Line 1681, Address: 0x11f66c, Func Offset: 0x3dc
	// Line 1694, Address: 0x11f6c4, Func Offset: 0x434
	// Line 1708, Address: 0x11f6d4, Func Offset: 0x444
	// Line 1712, Address: 0x11f6dc, Func Offset: 0x44c
	// Line 1716, Address: 0x11f6e4, Func Offset: 0x454
	// Line 1712, Address: 0x11f6e8, Func Offset: 0x458
	// Line 1718, Address: 0x11f6f4, Func Offset: 0x464
	// Line 1736, Address: 0x11f6fc, Func Offset: 0x46c
	// Line 1744, Address: 0x11f760, Func Offset: 0x4d0
	// Line 1757, Address: 0x11f770, Func Offset: 0x4e0
	// Line 1761, Address: 0x11f778, Func Offset: 0x4e8
	// Line 1767, Address: 0x11f784, Func Offset: 0x4f4
	// Line 1761, Address: 0x11f788, Func Offset: 0x4f8
	// Line 1765, Address: 0x11f794, Func Offset: 0x504
	// Line 1766, Address: 0x11f798, Func Offset: 0x508
	// Line 1771, Address: 0x11f79c, Func Offset: 0x50c
	// Line 1772, Address: 0x11f7a0, Func Offset: 0x510
	// Func End, Address: 0x11f7bc, Func Offset: 0x52c
}

// PKR_parse_TOC__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA
// Start address: 0x11f7c0
int32 PKR_parse_TOC(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr)
{
	int32 done;
	uint32 cid;
	int32 is_ok;
	// Line 777, Address: 0x11f7c0, Func Offset: 0
	// Line 783, Address: 0x11f7dc, Func Offset: 0x1c
	// Line 779, Address: 0x11f7ec, Func Offset: 0x2c
	// Line 783, Address: 0x11f7f0, Func Offset: 0x30
	// Line 785, Address: 0x11f7fc, Func Offset: 0x3c
	// Line 786, Address: 0x11f804, Func Offset: 0x44
	// Line 788, Address: 0x11f848, Func Offset: 0x88
	// Line 789, Address: 0x11f854, Func Offset: 0x94
	// Line 791, Address: 0x11f85c, Func Offset: 0x9c
	// Line 806, Address: 0x11f868, Func Offset: 0xa8
	// Line 807, Address: 0x11f870, Func Offset: 0xb0
	// Line 808, Address: 0x11f87c, Func Offset: 0xbc
	// Line 809, Address: 0x11f884, Func Offset: 0xc4
	// Line 810, Address: 0x11f8bc, Func Offset: 0xfc
	// Line 811, Address: 0x11f8c0, Func Offset: 0x100
	// Line 814, Address: 0x11f8d4, Func Offset: 0x114
	// Line 816, Address: 0x11f8dc, Func Offset: 0x11c
	// Line 819, Address: 0x11f8e8, Func Offset: 0x128
	// Line 821, Address: 0x11f8f0, Func Offset: 0x130
	// Line 825, Address: 0x11f8f8, Func Offset: 0x138
	// Line 832, Address: 0x11f978, Func Offset: 0x1b8
	// Line 838, Address: 0x11f980, Func Offset: 0x1c0
	// Line 839, Address: 0x11f990, Func Offset: 0x1d0
	// Line 841, Address: 0x11f9a8, Func Offset: 0x1e8
	// Line 843, Address: 0x11f9b0, Func Offset: 0x1f0
	// Line 844, Address: 0x11f9b4, Func Offset: 0x1f4
	// Func End, Address: 0x11f9d4, Func Offset: 0x214
}

// PKR_SetActive__FP19st_PACKER_READ_DATA13en_LAYER_TYPE
// Start address: 0x11f9e0
int32 PKR_SetActive(st_PACKER_READ_DATA* pr, en_LAYER_TYPE layer)
{
	st_PACKER_LTOC_NODE* laynode;
	st_PACKER_ATOC_NODE* assnode;
	int32 j;
	int32 i;
	int32 rc;
	int32 result;
	// Line 694, Address: 0x11f9e0, Func Offset: 0
	// Line 704, Address: 0x11fa14, Func Offset: 0x34
	// Line 709, Address: 0x11fa24, Func Offset: 0x44
	// Line 710, Address: 0x11fa30, Func Offset: 0x50
	// Line 714, Address: 0x11fa38, Func Offset: 0x58
	// Line 717, Address: 0x11fa50, Func Offset: 0x70
	// Line 718, Address: 0x11fa5c, Func Offset: 0x7c
	// Line 728, Address: 0x11fa60, Func Offset: 0x80
	// Line 718, Address: 0x11fa64, Func Offset: 0x84
	// Line 728, Address: 0x11fa6c, Func Offset: 0x8c
	// Line 729, Address: 0x11fa7c, Func Offset: 0x9c
	// Line 738, Address: 0x11fa8c, Func Offset: 0xac
	// Line 745, Address: 0x11fa98, Func Offset: 0xb8
	// Line 749, Address: 0x11faa4, Func Offset: 0xc4
	// Line 754, Address: 0x11fab8, Func Offset: 0xd8
	// Line 759, Address: 0x11fac0, Func Offset: 0xe0
	// Line 760, Address: 0x11fac8, Func Offset: 0xe8
	// Line 762, Address: 0x11fadc, Func Offset: 0xfc
	// Line 763, Address: 0x11faf4, Func Offset: 0x114
	// Line 766, Address: 0x11fb08, Func Offset: 0x128
	// Func End, Address: 0x11fb38, Func Offset: 0x158
}

// PKR_ReadDone__FP19st_PACKER_READ_DATA
// Start address: 0x11fb40
void PKR_ReadDone(st_PACKER_READ_DATA* pr)
{
	st_XORDEREDARRAY* tmplist;
	st_PACKER_LTOC_NODE* laynode;
	st_PACKER_ATOC_NODE* assnode;
	int32 lockid;
	int32 j;
	int32 i;
	// Line 554, Address: 0x11fb40, Func Offset: 0
	// Line 564, Address: 0x11fb64, Func Offset: 0x24
	// Line 571, Address: 0x11fb6c, Func Offset: 0x2c
	// Line 572, Address: 0x11fb80, Func Offset: 0x40
	// Line 574, Address: 0x11fb8c, Func Offset: 0x4c
	// Line 575, Address: 0x11fba0, Func Offset: 0x60
	// Line 578, Address: 0x11fbac, Func Offset: 0x6c
	// Line 579, Address: 0x11fbb8, Func Offset: 0x78
	// Line 580, Address: 0x11fbc4, Func Offset: 0x84
	// Line 583, Address: 0x11fbd8, Func Offset: 0x98
	// Line 584, Address: 0x11fbe4, Func Offset: 0xa4
	// Line 585, Address: 0x11fbf8, Func Offset: 0xb8
	// Line 638, Address: 0x11fc08, Func Offset: 0xc8
	// Line 639, Address: 0x11fc14, Func Offset: 0xd4
	// Line 640, Address: 0x11fc20, Func Offset: 0xe0
	// Line 646, Address: 0x11fc2c, Func Offset: 0xec
	// Line 647, Address: 0x11fc34, Func Offset: 0xf4
	// Line 653, Address: 0x11fc48, Func Offset: 0x108
	// Line 656, Address: 0x11fc80, Func Offset: 0x140
	// Line 657, Address: 0x11fc8c, Func Offset: 0x14c
	// Line 659, Address: 0x11fc98, Func Offset: 0x158
	// Line 660, Address: 0x11fcc0, Func Offset: 0x180
	// Line 663, Address: 0x11fcd8, Func Offset: 0x198
	// Line 664, Address: 0x11fce0, Func Offset: 0x1a0
	// Line 667, Address: 0x11fce8, Func Offset: 0x1a8
	// Line 672, Address: 0x11fcf0, Func Offset: 0x1b0
	// Line 673, Address: 0x11fcfc, Func Offset: 0x1bc
	// Line 674, Address: 0x11fd04, Func Offset: 0x1c4
	// Line 677, Address: 0x11fd18, Func Offset: 0x1d8
	// Line 681, Address: 0x11fd28, Func Offset: 0x1e8
	// Line 682, Address: 0x11fd2c, Func Offset: 0x1ec
	// Line 683, Address: 0x11fd3c, Func Offset: 0x1fc
	// Line 686, Address: 0x11fd54, Func Offset: 0x214
	// Func End, Address: 0x11fd78, Func Offset: 0x238
}

// PKR_ReadInit__FPvPcUiPiP19st_PACKER_ASSETTYPE
// Start address: 0x11fd80
st_PACKER_READ_DATA* PKR_ReadInit(void* userdata, int8* pkgfile, uint32 opts, int32* cltver, st_PACKER_ASSETTYPE* typelist)
{
	int8* tocbuf_aligned;
	int8* tocbuf_RAW;
	int32 uselock;
	int32 i;
	st_PACKER_READ_DATA* pr;
	// Line 366, Address: 0x11fd80, Func Offset: 0
	// Line 387, Address: 0x11fdc0, Func Offset: 0x40
	// Line 367, Address: 0x11fdc4, Func Offset: 0x44
	// Line 387, Address: 0x11fdc8, Func Offset: 0x48
	// Line 405, Address: 0x11fdf0, Func Offset: 0x70
	// Line 391, Address: 0x11fdf4, Func Offset: 0x74
	// Line 405, Address: 0x11fe00, Func Offset: 0x80
	// Line 406, Address: 0x11fe04, Func Offset: 0x84
	// Line 407, Address: 0x11fe18, Func Offset: 0x98
	// Line 408, Address: 0x11fe1c, Func Offset: 0x9c
	// Line 407, Address: 0x11fe30, Func Offset: 0xb0
	// Line 408, Address: 0x11fe38, Func Offset: 0xb8
	// Line 409, Address: 0x11fe40, Func Offset: 0xc0
	// Line 410, Address: 0x11fe44, Func Offset: 0xc4
	// Line 412, Address: 0x11fe4c, Func Offset: 0xcc
	// Line 415, Address: 0x11fe58, Func Offset: 0xd8
	// Line 417, Address: 0x11fe60, Func Offset: 0xe0
	// Line 419, Address: 0x11fe70, Func Offset: 0xf0
	// Line 421, Address: 0x11fe74, Func Offset: 0xf4
	// Line 422, Address: 0x11fe78, Func Offset: 0xf8
	// Line 423, Address: 0x11fe7c, Func Offset: 0xfc
	// Line 424, Address: 0x11fe80, Func Offset: 0x100
	// Line 427, Address: 0x11fe88, Func Offset: 0x108
	// Line 430, Address: 0x11fe98, Func Offset: 0x118
	// Line 431, Address: 0x11fea0, Func Offset: 0x120
	// Line 432, Address: 0x11feb8, Func Offset: 0x138
	// Line 434, Address: 0x11fec0, Func Offset: 0x140
	// Line 440, Address: 0x11fedc, Func Offset: 0x15c
	// Line 448, Address: 0x11fee8, Func Offset: 0x168
	// Line 450, Address: 0x11ff00, Func Offset: 0x180
	// Line 456, Address: 0x11ff0c, Func Offset: 0x18c
	// Line 473, Address: 0x11ff10, Func Offset: 0x190
	// Line 456, Address: 0x11ff14, Func Offset: 0x194
	// Line 473, Address: 0x11ff18, Func Offset: 0x198
	// Line 497, Address: 0x11ff2c, Func Offset: 0x1ac
	// Line 502, Address: 0x11ff34, Func Offset: 0x1b4
	// Line 504, Address: 0x11ff3c, Func Offset: 0x1bc
	// Line 503, Address: 0x11ff40, Func Offset: 0x1c0
	// Line 507, Address: 0x11ff44, Func Offset: 0x1c4
	// Line 510, Address: 0x11ff4c, Func Offset: 0x1cc
	// Line 511, Address: 0x11ff50, Func Offset: 0x1d0
	// Line 516, Address: 0x11ff54, Func Offset: 0x1d4
	// Line 549, Address: 0x11ff64, Func Offset: 0x1e4
	// Line 550, Address: 0x11ff68, Func Offset: 0x1e8
	// Func End, Address: 0x11ff98, Func Offset: 0x218
}

// PKRLoadStep__Fi
// Start address: 0x11ffa0
int32 PKRLoadStep()
{
	int32 more_todo;
	// Line 316, Address: 0x11ffa0, Func Offset: 0
	// Func End, Address: 0x11ffa8, Func Offset: 0x8
}

// PKRShutdown__Fv
// Start address: 0x11ffb0
int32 PKRShutdown()
{
	// Line 249, Address: 0x11ffb0, Func Offset: 0
	// Line 262, Address: 0x11ffc0, Func Offset: 0x10
	// Func End, Address: 0x11ffc8, Func Offset: 0x18
}

// PKRStartup__Fv
// Start address: 0x11ffd0
int32 PKRStartup()
{
	// Line 192, Address: 0x11ffd0, Func Offset: 0
	// Line 193, Address: 0x11ffdc, Func Offset: 0xc
	// Line 197, Address: 0x11fff0, Func Offset: 0x20
	// Line 237, Address: 0x11fffc, Func Offset: 0x2c
	// Line 238, Address: 0x120000, Func Offset: 0x30
	// Func End, Address: 0x120010, Func Offset: 0x40
}

// PKRGetReadFuncs__Fi
// Start address: 0x120010
st_PACKER_READ_FUNCS* PKRGetReadFuncs(int32 apiver)
{
	// Line 175, Address: 0x120010, Func Offset: 0
	// Line 177, Address: 0x120024, Func Offset: 0x14
	// Line 183, Address: 0x120028, Func Offset: 0x18
	// Func End, Address: 0x120030, Func Offset: 0x20
}

