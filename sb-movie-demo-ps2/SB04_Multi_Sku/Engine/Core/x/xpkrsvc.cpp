



void* PKR_specialGet_loadbuf(st_PACKER_READ_DATA* pr, int32 amount, int32 align);
void PKR_special_loadbuf_killed();
void PKR_relmem(uint32 id, int32 blksize, void* memptr, int32 isTemp);
void* PKR_getmem(uint32 id, int32 amount, int32 align, int32 isTemp, int8** memtru);
void PKR_bld_typecnt(st_PACKER_READ_DATA* pr);
PKRAssetType* PKR_type2typeref(uint32 type, PKRAssetType* typelist);
int32 LOD_r_STRM(st_HIPLOADDATA* pkg);
int32 LOD_r_LHDR(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
int32 LOD_r_LTOC(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
int32 LOD_r_ADBG(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr, st_PACKER_ATOC_NODE* assnode);
int32 LOD_r_AHDR(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
int32 LOD_r_ATOC(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
int32 LOD_r_DICT(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
int32 LOD_r_PLAT(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
int32 ValidatePlatform(int8* plat, int8* vid, int8* lang, int8* title);
int32 LOD_r_PVER(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
int32 LOD_r_PACK(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
int32 OrdTest_R_AssetID(void* vkey, void* vitem);
int32 OrdComp_R_Asset(void* vkey, void* vitem);
int32 PKR_FRIEND_assetIsGameDup(uint32 aid, st_PACKER_READ_DATA* skippr, int32 oursize, uint32 ourtype, uint32 chksum);
int32 PKR_PkgHasAsset(st_PACKER_READ_DATA* pr, uint32 aid);
int32 PKR_GetAssetInfoByType(st_PACKER_READ_DATA* pr, uint32 type, int32 idx, PKRAssetTOCInfo* tocinfo);
int32 PKR_GetAssetInfo(st_PACKER_READ_DATA* pr, uint32 aid, PKRAssetTOCInfo* tocinfo);
uint32 PKR_GetBaseSector(st_PACKER_READ_DATA* pr);
int8* PKR_AssetName(st_PACKER_READ_DATA* pr, uint32 aid);
uint32 PKRAssetIDFromInst(void* asset_inst);
void PKR_Disconnect(st_PACKER_READ_DATA* pr);
uint32 PKR_getPackTimestamp(st_PACKER_READ_DATA* pr);
int32 PKR_IsAssetReady(st_PACKER_READ_DATA* pr, uint32 aid);
void* PKR_AssetByType(st_PACKER_READ_DATA* pr, uint32 type, int32 idx, uint32* size);
int32 PKR_AssetCount(st_PACKER_READ_DATA* pr, uint32 type);
uint32 PKR_GetAssetSize(st_PACKER_READ_DATA* pr, uint32 aid);
void* PKR_LoadAsset(st_PACKER_READ_DATA* pr, uint32 aid, int32* assetsize);
int32 PKR_LoadLayer();
void* PKR_FindAsset(st_PACKER_READ_DATA* pr, uint32 aid, int32* assetsize);
void PKR_xform_asset(st_PACKER_ATOC_NODE* assnode, int32 dumpable_layer);
void PKR_xformLayerAssets(st_PACKER_LTOC_NODE* laynode);
void PKR_updateLayerAssets(st_PACKER_LTOC_NODE* laynode);
int32 PKR_findNextLayerToLoad(st_PACKER_READ_DATA** work_on_pkg, st_PACKER_LTOC_NODE** next_layer);
void PKR_LayerMemRelease(st_PACKER_LTOC_NODE* layer);
int8* PKR_LayerMemReserve(st_PACKER_READ_DATA* pr, st_PACKER_LTOC_NODE* layer);
int32 PKR_LoadStep_Async();
int32 PKR_parse_TOC(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
int32 PKR_SetActive(st_PACKER_READ_DATA* pr, en_LAYER_TYPE layer);
void PKR_ReadDone(st_PACKER_READ_DATA* pr);
st_PACKER_READ_DATA* PKR_ReadInit(void* userdata, int8* pkgfile, uint32 opts, int32* cltver, PKRAssetType* typelist, int32 fileflags);
int32 PKRLoadStep();
int32 PKRShutdown();
int32 PKRStartup();
PKRReadFuncs* PKRGetReadFuncs(int32 apiver);

// PKR_specialGet_loadbuf__FP19st_PACKER_READ_DATAii
// Start address: 0x3a6170
void* PKR_specialGet_loadbuf(st_PACKER_READ_DATA* pr, int32 amount, int32 align)
{
	void* da_mem;
	// Line 8470, Address: 0x3a6170, Func Offset: 0
	// Line 8479, Address: 0x3a618c, Func Offset: 0x1c
	// Line 8492, Address: 0x3a6194, Func Offset: 0x24
	// Line 8497, Address: 0x3a61ac, Func Offset: 0x3c
	// Line 8528, Address: 0x3a61b4, Func Offset: 0x44
	// Line 8530, Address: 0x3a61b8, Func Offset: 0x48
	// Line 8529, Address: 0x3a61bc, Func Offset: 0x4c
	// Line 8530, Address: 0x3a61c0, Func Offset: 0x50
	// Line 8529, Address: 0x3a61c4, Func Offset: 0x54
	// Line 8530, Address: 0x3a61d0, Func Offset: 0x60
	// Line 8540, Address: 0x3a61d8, Func Offset: 0x68
	// Line 8509, Address: 0x3a61e0, Func Offset: 0x70
	// Line 8541, Address: 0x3a61e4, Func Offset: 0x74
	// Func End, Address: 0x3a61fc, Func Offset: 0x8c
}

// PKR_special_loadbuf_killed__FP10RwResEntry
// Start address: 0x3a6200
void PKR_special_loadbuf_killed()
{
	// Line 8467, Address: 0x3a6200, Func Offset: 0
	// Func End, Address: 0x3a6208, Func Offset: 0x8
}

// PKR_relmem__FUiiPvUii
// Start address: 0x3a6210
void PKR_relmem(uint32 id, int32 blksize, void* memptr, int32 isTemp)
{
	// Line 7246, Address: 0x3a6210, Func Offset: 0
	// Line 7253, Address: 0x3a6234, Func Offset: 0x24
	// Line 7254, Address: 0x3a623c, Func Offset: 0x2c
	// Line 7253, Address: 0x3a6240, Func Offset: 0x30
	// Line 7254, Address: 0x3a6244, Func Offset: 0x34
	// Line 7253, Address: 0x3a6248, Func Offset: 0x38
	// Line 7255, Address: 0x3a624c, Func Offset: 0x3c
	// Line 7256, Address: 0x3a6254, Func Offset: 0x44
	// Line 7260, Address: 0x3a6260, Func Offset: 0x50
	// Line 7261, Address: 0x3a6268, Func Offset: 0x58
	// Line 7274, Address: 0x3a6270, Func Offset: 0x60
	// Line 7276, Address: 0x3a6290, Func Offset: 0x80
	// Line 7282, Address: 0x3a6298, Func Offset: 0x88
	// Line 7283, Address: 0x3a62a8, Func Offset: 0x98
	// Func End, Address: 0x3a62c4, Func Offset: 0xb4
}

// PKR_getmem__FUiiUiiiPPc
// Start address: 0x3a62d0
void* PKR_getmem(uint32 id, int32 amount, int32 align, int32 isTemp, int8** memtru)
{
	void* memptr;
	// Line 7167, Address: 0x3a62d0, Func Offset: 0
	// Line 7174, Address: 0x3a62f8, Func Offset: 0x28
	// Line 7201, Address: 0x3a6300, Func Offset: 0x30
	// Line 7202, Address: 0x3a6308, Func Offset: 0x38
	// Line 7203, Address: 0x3a6318, Func Offset: 0x48
	// Line 7204, Address: 0x3a6324, Func Offset: 0x54
	// Line 7205, Address: 0x3a6334, Func Offset: 0x64
	// Line 7206, Address: 0x3a633c, Func Offset: 0x6c
	// Line 7213, Address: 0x3a634c, Func Offset: 0x7c
	// Line 7217, Address: 0x3a6360, Func Offset: 0x90
	// Line 7218, Address: 0x3a6364, Func Offset: 0x94
	// Line 7217, Address: 0x3a6368, Func Offset: 0x98
	// Line 7218, Address: 0x3a636c, Func Offset: 0x9c
	// Line 7217, Address: 0x3a6370, Func Offset: 0xa0
	// Line 7219, Address: 0x3a6374, Func Offset: 0xa4
	// Line 7222, Address: 0x3a637c, Func Offset: 0xac
	// Line 7231, Address: 0x3a6388, Func Offset: 0xb8
	// Line 7174, Address: 0x3a6390, Func Offset: 0xc0
	// Line 7232, Address: 0x3a63a0, Func Offset: 0xd0
	// Func End, Address: 0x3a63c0, Func Offset: 0xf0
}

// PKR_bld_typecnt__FP19st_PACKER_READ_DATA
// Start address: 0x3a63c0
void PKR_bld_typecnt(st_PACKER_READ_DATA* pr)
{
	st_PACKER_LTOC_NODE* laynode;
	st_PACKER_ATOC_NODE* assnode;
	int32 i;
	int32 j;
	int32 idx;
	int32 typcnt[129];
	st_XORDEREDARRAY* tmplist;
	uint32 lasttype;
	int32 lasttidx;
	// Line 6948, Address: 0x3a63c0, Func Offset: 0
	// Line 6956, Address: 0x3a63c4, Func Offset: 0x4
	// Line 6948, Address: 0x3a63c8, Func Offset: 0x8
	// Line 6956, Address: 0x3a63e8, Func Offset: 0x28
	// Line 6948, Address: 0x3a63ec, Func Offset: 0x2c
	// Line 6956, Address: 0x3a63f4, Func Offset: 0x34
	// Line 6980, Address: 0x3a6418, Func Offset: 0x58
	// Line 6959, Address: 0x3a641c, Func Offset: 0x5c
	// Line 6960, Address: 0x3a6420, Func Offset: 0x60
	// Line 6980, Address: 0x3a6424, Func Offset: 0x64
	// Line 6981, Address: 0x3a6438, Func Offset: 0x78
	// Line 6984, Address: 0x3a6444, Func Offset: 0x84
	// Line 6985, Address: 0x3a6458, Func Offset: 0x98
	// Line 6987, Address: 0x3a645c, Func Offset: 0x9c
	// Line 6985, Address: 0x3a6460, Func Offset: 0xa0
	// Line 6987, Address: 0x3a646c, Func Offset: 0xac
	// Line 6991, Address: 0x3a6478, Func Offset: 0xb8
	// Line 6998, Address: 0x3a6488, Func Offset: 0xc8
	// Line 7008, Address: 0x3a649c, Func Offset: 0xdc
	// Line 7012, Address: 0x3a64a0, Func Offset: 0xe0
	// Line 7018, Address: 0x3a64a8, Func Offset: 0xe8
	// Line 7003, Address: 0x3a64c4, Func Offset: 0x104
	// Line 7018, Address: 0x3a64c8, Func Offset: 0x108
	// Line 7003, Address: 0x3a64e0, Func Offset: 0x120
	// Line 7018, Address: 0x3a64e8, Func Offset: 0x128
	// Line 7020, Address: 0x3a6514, Func Offset: 0x154
	// Line 7021, Address: 0x3a6530, Func Offset: 0x170
	// Line 7024, Address: 0x3a6548, Func Offset: 0x188
	// Line 7027, Address: 0x3a6558, Func Offset: 0x198
	// Line 7034, Address: 0x3a6560, Func Offset: 0x1a0
	// Line 7035, Address: 0x3a6584, Func Offset: 0x1c4
	// Line 7034, Address: 0x3a6588, Func Offset: 0x1c8
	// Line 7035, Address: 0x3a658c, Func Offset: 0x1cc
	// Line 7039, Address: 0x3a6598, Func Offset: 0x1d8
	// Line 7040, Address: 0x3a65ac, Func Offset: 0x1ec
	// Line 7043, Address: 0x3a65b8, Func Offset: 0x1f8
	// Line 7044, Address: 0x3a65cc, Func Offset: 0x20c
	// Line 7046, Address: 0x3a65d0, Func Offset: 0x210
	// Line 7044, Address: 0x3a65d4, Func Offset: 0x214
	// Line 7046, Address: 0x3a65e0, Func Offset: 0x220
	// Line 7047, Address: 0x3a65ec, Func Offset: 0x22c
	// Line 7051, Address: 0x3a65fc, Func Offset: 0x23c
	// Line 7069, Address: 0x3a6610, Func Offset: 0x250
	// Line 7071, Address: 0x3a6634, Func Offset: 0x274
	// Line 7072, Address: 0x3a6648, Func Offset: 0x288
	// Line 7081, Address: 0x3a665c, Func Offset: 0x29c
	// Line 7056, Address: 0x3a6668, Func Offset: 0x2a8
	// Line 7081, Address: 0x3a666c, Func Offset: 0x2ac
	// Line 7056, Address: 0x3a6684, Func Offset: 0x2c4
	// Line 7081, Address: 0x3a668c, Func Offset: 0x2cc
	// Line 7056, Address: 0x3a669c, Func Offset: 0x2dc
	// Line 7082, Address: 0x3a66a8, Func Offset: 0x2e8
	// Func End, Address: 0x3a66d8, Func Offset: 0x318
}

// PKR_type2typeref__FUiP12PKRAssetType
// Start address: 0x3a66e0
PKRAssetType* PKR_type2typeref(uint32 type, PKRAssetType* typelist)
{
	PKRAssetType* da_type;
	PKRAssetType* tmptype;
	// Line 6898, Address: 0x3a66e0, Func Offset: 0
	// Line 6908, Address: 0x3a66ec, Func Offset: 0xc
	// Line 6909, Address: 0x3a66f4, Func Offset: 0x14
	// Line 6910, Address: 0x3a6700, Func Offset: 0x20
	// Line 6912, Address: 0x3a670c, Func Offset: 0x2c
	// Line 6916, Address: 0x3a6714, Func Offset: 0x34
	// Line 6919, Address: 0x3a6718, Func Offset: 0x38
	// Line 6920, Address: 0x3a6724, Func Offset: 0x44
	// Line 6923, Address: 0x3a6728, Func Offset: 0x48
	// Line 6928, Address: 0x3a6730, Func Offset: 0x50
	// Line 6929, Address: 0x3a6748, Func Offset: 0x68
	// Func End, Address: 0x3a6758, Func Offset: 0x78
}

// LOD_r_STRM__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA
// Start address: 0x3a6760
int32 LOD_r_STRM(st_HIPLOADDATA* pkg)
{
	uint32 cid;
	// Line 5240, Address: 0x3a6760, Func Offset: 0
	// Line 5249, Address: 0x3a676c, Func Offset: 0xc
	// Line 5250, Address: 0x3a677c, Func Offset: 0x1c
	// Line 5251, Address: 0x3a6784, Func Offset: 0x24
	// Line 5268, Address: 0x3a67a0, Func Offset: 0x40
	// Line 5269, Address: 0x3a67b0, Func Offset: 0x50
	// Line 5271, Address: 0x3a67c0, Func Offset: 0x60
	// Line 5273, Address: 0x3a67c8, Func Offset: 0x68
	// Line 5254, Address: 0x3a67d4, Func Offset: 0x74
	// Line 5273, Address: 0x3a67d8, Func Offset: 0x78
	// Line 5274, Address: 0x3a67f4, Func Offset: 0x94
	// Func End, Address: 0x3a6804, Func Offset: 0xa4
}

// LOD_r_LHDR__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA
// Start address: 0x3a6810
int32 LOD_r_LHDR(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr)
{
	uint32 cid;
	int32 ival;
	en_LAYER_TYPE laytyp;
	int32 refcnt;
	int32 idx;
	int32 i;
	st_PACKER_LTOC_NODE* laynode;
	st_PACKER_ATOC_NODE* assnode;
	// Line 5037, Address: 0x3a6810, Func Offset: 0
	// Line 5054, Address: 0x3a6814, Func Offset: 0x4
	// Line 5037, Address: 0x3a6818, Func Offset: 0x8
	// Line 5054, Address: 0x3a6838, Func Offset: 0x28
	// Line 5041, Address: 0x3a683c, Func Offset: 0x2c
	// Line 5043, Address: 0x3a6840, Func Offset: 0x30
	// Line 5054, Address: 0x3a6844, Func Offset: 0x34
	// Line 5059, Address: 0x3a6850, Func Offset: 0x40
	// Line 5055, Address: 0x3a6858, Func Offset: 0x48
	// Line 5059, Address: 0x3a685c, Func Offset: 0x4c
	// Line 5110, Address: 0x3a686c, Func Offset: 0x5c
	// Line 5111, Address: 0x3a68d0, Func Offset: 0xc0
	// Line 5119, Address: 0x3a68dc, Func Offset: 0xcc
	// Line 5166, Address: 0x3a68f0, Func Offset: 0xe0
	// Line 5169, Address: 0x3a68f8, Func Offset: 0xe8
	// Line 5174, Address: 0x3a6904, Func Offset: 0xf4
	// Line 5175, Address: 0x3a6914, Func Offset: 0x104
	// Line 5176, Address: 0x3a691c, Func Offset: 0x10c
	// Line 5189, Address: 0x3a692c, Func Offset: 0x11c
	// Line 5190, Address: 0x3a693c, Func Offset: 0x12c
	// Line 5191, Address: 0x3a694c, Func Offset: 0x13c
	// Line 5194, Address: 0x3a6954, Func Offset: 0x144
	// Line 5120, Address: 0x3a6960, Func Offset: 0x150
	// Line 5194, Address: 0x3a6964, Func Offset: 0x154
	// Line 5134, Address: 0x3a697c, Func Offset: 0x16c
	// Line 5194, Address: 0x3a6980, Func Offset: 0x170
	// Line 5140, Address: 0x3a6988, Func Offset: 0x178
	// Line 5143, Address: 0x3a698c, Func Offset: 0x17c
	// Line 5194, Address: 0x3a6990, Func Offset: 0x180
	// Line 5155, Address: 0x3a69c8, Func Offset: 0x1b8
	// Line 5194, Address: 0x3a69d0, Func Offset: 0x1c0
	// Line 5179, Address: 0x3a6a14, Func Offset: 0x204
	// Line 5194, Address: 0x3a6a18, Func Offset: 0x208
	// Line 5195, Address: 0x3a6a34, Func Offset: 0x224
	// Func End, Address: 0x3a6a54, Func Offset: 0x244
}

// LOD_r_LTOC__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA
// Start address: 0x3a6a60
int32 LOD_r_LTOC(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr)
{
	uint32 cid;
	// Line 4965, Address: 0x3a6a60, Func Offset: 0
	// Line 4974, Address: 0x3a6a74, Func Offset: 0x14
	// Line 4975, Address: 0x3a6a84, Func Offset: 0x24
	// Line 4976, Address: 0x3a6a8c, Func Offset: 0x2c
	// Line 4979, Address: 0x3a6ab0, Func Offset: 0x50
	// Line 4980, Address: 0x3a6acc, Func Offset: 0x6c
	// Line 4981, Address: 0x3a6ad4, Func Offset: 0x74
	// Line 4983, Address: 0x3a6ad8, Func Offset: 0x78
	// Line 4990, Address: 0x3a6ae4, Func Offset: 0x84
	// Line 4993, Address: 0x3a6ae8, Func Offset: 0x88
	// Line 4994, Address: 0x3a6af8, Func Offset: 0x98
	// Line 4996, Address: 0x3a6b08, Func Offset: 0xa8
	// Line 4999, Address: 0x3a6b10, Func Offset: 0xb0
	// Line 4998, Address: 0x3a6b18, Func Offset: 0xb8
	// Line 4999, Address: 0x3a6b1c, Func Offset: 0xbc
	// Func End, Address: 0x3a6b28, Func Offset: 0xc8
}

// LOD_r_ADBG__FP14st_HIPLOADDATAP19st_PACKER_READ_DATAP19st_PACKER_ATOC_NODE
// Start address: 0x3a6b30
int32 LOD_r_ADBG(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr, st_PACKER_ATOC_NODE* assnode)
{
	int32 ival;
	int8 tmpbuf[256];
	// Line 4910, Address: 0x3a6b30, Func Offset: 0
	// Line 4914, Address: 0x3a6b34, Func Offset: 0x4
	// Line 4910, Address: 0x3a6b38, Func Offset: 0x8
	// Line 4914, Address: 0x3a6b3c, Func Offset: 0xc
	// Line 4910, Address: 0x3a6b40, Func Offset: 0x10
	// Line 4914, Address: 0x3a6b58, Func Offset: 0x28
	// Line 4920, Address: 0x3a6b7c, Func Offset: 0x4c
	// Line 4921, Address: 0x3a6b94, Func Offset: 0x64
	// Line 4926, Address: 0x3a6b98, Func Offset: 0x68
	// Line 4921, Address: 0x3a6b9c, Func Offset: 0x6c
	// Line 4926, Address: 0x3a6ba0, Func Offset: 0x70
	// Line 4927, Address: 0x3a6bb0, Func Offset: 0x80
	// Line 4928, Address: 0x3a6bc0, Func Offset: 0x90
	// Line 4934, Address: 0x3a6bc4, Func Offset: 0x94
	// Line 4930, Address: 0x3a6bcc, Func Offset: 0x9c
	// Line 4934, Address: 0x3a6bd0, Func Offset: 0xa0
	// Line 4941, Address: 0x3a6bdc, Func Offset: 0xac
	// Line 4954, Address: 0x3a6bec, Func Offset: 0xbc
	// Line 4944, Address: 0x3a6bf8, Func Offset: 0xc8
	// Line 4954, Address: 0x3a6bfc, Func Offset: 0xcc
	// Line 4955, Address: 0x3a6c18, Func Offset: 0xe8
	// Func End, Address: 0x3a6c30, Func Offset: 0x100
}

// LOD_r_AHDR__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA
// Start address: 0x3a6c30
int32 LOD_r_AHDR(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr)
{
	uint32 cid;
	int32 ival;
	int32 isdup;
	// Line 4680, Address: 0x3a6c30, Func Offset: 0
	// Line 4697, Address: 0x3a6c34, Func Offset: 0x4
	// Line 4680, Address: 0x3a6c38, Func Offset: 0x8
	// Line 4697, Address: 0x3a6c54, Func Offset: 0x24
	// Line 4684, Address: 0x3a6c58, Func Offset: 0x28
	// Line 4697, Address: 0x3a6c5c, Func Offset: 0x2c
	// Line 4770, Address: 0x3a6c68, Func Offset: 0x38
	// Line 4773, Address: 0x3a6ca0, Func Offset: 0x70
	// Line 4771, Address: 0x3a6ca4, Func Offset: 0x74
	// Line 4773, Address: 0x3a6ca8, Func Offset: 0x78
	// Line 4782, Address: 0x3a6cb4, Func Offset: 0x84
	// Line 4784, Address: 0x3a6ccc, Func Offset: 0x9c
	// Line 4785, Address: 0x3a6cd4, Func Offset: 0xa4
	// Line 4788, Address: 0x3a6ce4, Func Offset: 0xb4
	// Line 4790, Address: 0x3a6cfc, Func Offset: 0xcc
	// Line 4794, Address: 0x3a6d00, Func Offset: 0xd0
	// Line 4790, Address: 0x3a6d08, Func Offset: 0xd8
	// Line 4794, Address: 0x3a6d0c, Func Offset: 0xdc
	// Line 4796, Address: 0x3a6d1c, Func Offset: 0xec
	// Line 4797, Address: 0x3a6d24, Func Offset: 0xf4
	// Line 4798, Address: 0x3a6d2c, Func Offset: 0xfc
	// Line 4800, Address: 0x3a6d30, Func Offset: 0x100
	// Line 4803, Address: 0x3a6d3c, Func Offset: 0x10c
	// Line 4805, Address: 0x3a6d54, Func Offset: 0x124
	// Line 4808, Address: 0x3a6d58, Func Offset: 0x128
	// Line 4805, Address: 0x3a6d60, Func Offset: 0x130
	// Line 4808, Address: 0x3a6d64, Func Offset: 0x134
	// Line 4809, Address: 0x3a6d74, Func Offset: 0x144
	// Line 4827, Address: 0x3a6d7c, Func Offset: 0x14c
	// Line 4828, Address: 0x3a6d8c, Func Offset: 0x15c
	// Line 4829, Address: 0x3a6d94, Func Offset: 0x164
	// Line 4830, Address: 0x3a6dac, Func Offset: 0x17c
	// Line 4832, Address: 0x3a6db0, Func Offset: 0x180
	// Line 4842, Address: 0x3a6dc0, Func Offset: 0x190
	// Line 4843, Address: 0x3a6dd0, Func Offset: 0x1a0
	// Line 4844, Address: 0x3a6de0, Func Offset: 0x1b0
	// Line 4860, Address: 0x3a6de8, Func Offset: 0x1b8
	// Line 4864, Address: 0x3a6e04, Func Offset: 0x1d4
	// Line 4895, Address: 0x3a6e0c, Func Offset: 0x1dc
	// Line 4800, Address: 0x3a6e18, Func Offset: 0x1e8
	// Line 4895, Address: 0x3a6e28, Func Offset: 0x1f8
	// Line 4864, Address: 0x3a6e2c, Func Offset: 0x1fc
	// Line 4896, Address: 0x3a6e3c, Func Offset: 0x20c
	// Func End, Address: 0x3a6e58, Func Offset: 0x228
}

// LOD_r_ATOC__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA
// Start address: 0x3a6e60
int32 LOD_r_ATOC(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr)
{
	uint32 cid;
	// Line 4599, Address: 0x3a6e60, Func Offset: 0
	// Line 4611, Address: 0x3a6e74, Func Offset: 0x14
	// Line 4612, Address: 0x3a6e84, Func Offset: 0x24
	// Line 4613, Address: 0x3a6e8c, Func Offset: 0x2c
	// Line 4616, Address: 0x3a6eb0, Func Offset: 0x50
	// Line 4617, Address: 0x3a6ecc, Func Offset: 0x6c
	// Line 4618, Address: 0x3a6ed4, Func Offset: 0x74
	// Line 4620, Address: 0x3a6ed8, Func Offset: 0x78
	// Line 4627, Address: 0x3a6ee4, Func Offset: 0x84
	// Line 4630, Address: 0x3a6ee8, Func Offset: 0x88
	// Line 4631, Address: 0x3a6ef8, Func Offset: 0x98
	// Line 4633, Address: 0x3a6f08, Func Offset: 0xa8
	// Line 4639, Address: 0x3a6f10, Func Offset: 0xb0
	// Line 4638, Address: 0x3a6f18, Func Offset: 0xb8
	// Line 4639, Address: 0x3a6f1c, Func Offset: 0xbc
	// Func End, Address: 0x3a6f28, Func Offset: 0xc8
}

// LOD_r_DICT__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA
// Start address: 0x3a6f30
int32 LOD_r_DICT(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr)
{
	uint32 cid;
	// Line 4547, Address: 0x3a6f30, Func Offset: 0
	// Line 4556, Address: 0x3a6f44, Func Offset: 0x14
	// Line 4557, Address: 0x3a6f54, Func Offset: 0x24
	// Line 4558, Address: 0x3a6f5c, Func Offset: 0x2c
	// Line 4561, Address: 0x3a6f80, Func Offset: 0x50
	// Line 4568, Address: 0x3a6f8c, Func Offset: 0x5c
	// Line 4571, Address: 0x3a6f9c, Func Offset: 0x6c
	// Line 4572, Address: 0x3a6fa4, Func Offset: 0x74
	// Line 4574, Address: 0x3a6fa8, Func Offset: 0x78
	// Line 4581, Address: 0x3a6fb4, Func Offset: 0x84
	// Line 4584, Address: 0x3a6fb8, Func Offset: 0x88
	// Line 4585, Address: 0x3a6fc8, Func Offset: 0x98
	// Line 4586, Address: 0x3a6fd8, Func Offset: 0xa8
	// Line 4589, Address: 0x3a6fe0, Func Offset: 0xb0
	// Line 4588, Address: 0x3a6fe8, Func Offset: 0xb8
	// Line 4589, Address: 0x3a6fec, Func Offset: 0xbc
	// Func End, Address: 0x3a6ff8, Func Offset: 0xc8
}

// LOD_r_PLAT__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA
// Start address: 0x3a7000
int32 LOD_r_PLAT(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr)
{
	int32 result;
	int8 platname[32];
	int8 vidname[32];
	int8 langname[32];
	int8 titlename[32];
	int32 n;
	int32 rc;
	// Line 4506, Address: 0x3a7000, Func Offset: 0
	// Line 4509, Address: 0x3a7004, Func Offset: 0x4
	// Line 4506, Address: 0x3a7008, Func Offset: 0x8
	// Line 4509, Address: 0x3a700c, Func Offset: 0xc
	// Line 4506, Address: 0x3a7010, Func Offset: 0x10
	// Line 4509, Address: 0x3a7024, Func Offset: 0x24
	// Line 4510, Address: 0x3a7048, Func Offset: 0x48
	// Line 4511, Address: 0x3a7070, Func Offset: 0x70
	// Line 4512, Address: 0x3a7098, Func Offset: 0x98
	// Line 4516, Address: 0x3a70c0, Func Offset: 0xc0
	// Line 4519, Address: 0x3a70d4, Func Offset: 0xd4
	// Line 4522, Address: 0x3a70e8, Func Offset: 0xe8
	// Line 4525, Address: 0x3a70fc, Func Offset: 0xfc
	// Line 4527, Address: 0x3a7110, Func Offset: 0x110
	// Line 4530, Address: 0x3a7128, Func Offset: 0x128
	// Line 4531, Address: 0x3a7144, Func Offset: 0x144
	// Line 4536, Address: 0x3a7150, Func Offset: 0x150
	// Line 4537, Address: 0x3a7154, Func Offset: 0x154
	// Func End, Address: 0x3a716c, Func Offset: 0x16c
}

// ValidatePlatform__FP14st_HIPLOADDATAP19st_PACKER_READ_DATAPcPcPcPc
// Start address: 0x3a7170
int32 ValidatePlatform(int8* plat, int8* vid, int8* lang, int8* title)
{
	int8 fullname[128];
	int32 rc;
	// Line 4435, Address: 0x3a7170, Func Offset: 0
	// Line 4439, Address: 0x3a7174, Func Offset: 0x4
	// Line 4435, Address: 0x3a7178, Func Offset: 0x8
	// Line 4439, Address: 0x3a717c, Func Offset: 0xc
	// Line 4435, Address: 0x3a7180, Func Offset: 0x10
	// Line 4439, Address: 0x3a7194, Func Offset: 0x24
	// Line 4440, Address: 0x3a71b8, Func Offset: 0x48
	// Line 4461, Address: 0x3a71d4, Func Offset: 0x64
	// Line 4470, Address: 0x3a71f0, Func Offset: 0x80
	// Line 4477, Address: 0x3a71fc, Func Offset: 0x8c
	// Line 4479, Address: 0x3a7204, Func Offset: 0x94
	// Line 4480, Address: 0x3a7210, Func Offset: 0xa0
	// Line 4483, Address: 0x3a7228, Func Offset: 0xb8
	// Line 4470, Address: 0x3a7238, Func Offset: 0xc8
	// Line 4478, Address: 0x3a7240, Func Offset: 0xd0
	// Line 4483, Address: 0x3a7244, Func Offset: 0xd4
	// Line 4478, Address: 0x3a7254, Func Offset: 0xe4
	// Line 4494, Address: 0x3a725c, Func Offset: 0xec
	// Line 4499, Address: 0x3a7274, Func Offset: 0x104
	// Line 4503, Address: 0x3a7278, Func Offset: 0x108
	// Func End, Address: 0x3a7290, Func Offset: 0x120
}

// LOD_r_PVER__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA
// Start address: 0x3a7290
int32 LOD_r_PVER(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr)
{
	int32 ver;
	int32 amt;
	// Line 4233, Address: 0x3a7290, Func Offset: 0
	// Line 4242, Address: 0x3a7294, Func Offset: 0x4
	// Line 4233, Address: 0x3a7298, Func Offset: 0x8
	// Line 4242, Address: 0x3a72a8, Func Offset: 0x18
	// Line 4236, Address: 0x3a72b0, Func Offset: 0x20
	// Line 4242, Address: 0x3a72b4, Func Offset: 0x24
	// Line 4243, Address: 0x3a72c0, Func Offset: 0x30
	// Line 4251, Address: 0x3a72c4, Func Offset: 0x34
	// Line 4252, Address: 0x3a72c8, Func Offset: 0x38
	// Line 4243, Address: 0x3a72d0, Func Offset: 0x40
	// Line 4251, Address: 0x3a72d4, Func Offset: 0x44
	// Line 4252, Address: 0x3a72d8, Func Offset: 0x48
	// Line 4256, Address: 0x3a72e8, Func Offset: 0x58
	// Line 4259, Address: 0x3a72ec, Func Offset: 0x5c
	// Line 4260, Address: 0x3a72f0, Func Offset: 0x60
	// Line 4256, Address: 0x3a72f8, Func Offset: 0x68
	// Line 4259, Address: 0x3a72fc, Func Offset: 0x6c
	// Line 4260, Address: 0x3a7300, Func Offset: 0x70
	// Line 4261, Address: 0x3a7310, Func Offset: 0x80
	// Line 4264, Address: 0x3a731c, Func Offset: 0x8c
	// Line 4265, Address: 0x3a7324, Func Offset: 0x94
	// Line 4274, Address: 0x3a732c, Func Offset: 0x9c
	// Line 4273, Address: 0x3a7330, Func Offset: 0xa0
	// Line 4274, Address: 0x3a7334, Func Offset: 0xa4
	// Func End, Address: 0x3a7344, Func Offset: 0xb4
}

// LOD_r_PACK__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA
// Start address: 0x3a7350
int32 LOD_r_PACK(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr)
{
	uint32 cid;
	// Line 4171, Address: 0x3a7350, Func Offset: 0
	// Line 4180, Address: 0x3a7364, Func Offset: 0x14
	// Line 4181, Address: 0x3a7374, Func Offset: 0x24
	// Line 4182, Address: 0x3a737c, Func Offset: 0x2c
	// Line 4185, Address: 0x3a73d8, Func Offset: 0x88
	// Line 4186, Address: 0x3a73e4, Func Offset: 0x94
	// Line 4187, Address: 0x3a73ec, Func Offset: 0x9c
	// Line 4189, Address: 0x3a73f0, Func Offset: 0xa0
	// Line 4190, Address: 0x3a740c, Func Offset: 0xbc
	// Line 4191, Address: 0x3a7414, Func Offset: 0xc4
	// Line 4193, Address: 0x3a7418, Func Offset: 0xc8
	// Line 4194, Address: 0x3a74a4, Func Offset: 0x154
	// Line 4195, Address: 0x3a74ac, Func Offset: 0x15c
	// Line 4197, Address: 0x3a74b0, Func Offset: 0x160
	// Line 4198, Address: 0x3a7520, Func Offset: 0x1d0
	// Line 4201, Address: 0x3a7528, Func Offset: 0x1d8
	// Line 4202, Address: 0x3a7548, Func Offset: 0x1f8
	// Line 4205, Address: 0x3a7550, Func Offset: 0x200
	// Line 4212, Address: 0x3a755c, Func Offset: 0x20c
	// Line 4215, Address: 0x3a7560, Func Offset: 0x210
	// Line 4216, Address: 0x3a7570, Func Offset: 0x220
	// Line 4217, Address: 0x3a7580, Func Offset: 0x230
	// Line 4220, Address: 0x3a7588, Func Offset: 0x238
	// Line 4219, Address: 0x3a7590, Func Offset: 0x240
	// Line 4220, Address: 0x3a7594, Func Offset: 0x244
	// Func End, Address: 0x3a75a0, Func Offset: 0x250
}

// OrdTest_R_AssetID__FPCvPv
// Start address: 0x3a75a0
int32 OrdTest_R_AssetID(void* vkey, void* vitem)
{
	int32 rc;
	uint32 key;
	// Line 3377, Address: 0x3a75a0, Func Offset: 0
	// Line 3384, Address: 0x3a75a4, Func Offset: 0x4
	// Line 3385, Address: 0x3a75b0, Func Offset: 0x10
	// Line 3388, Address: 0x3a75c0, Func Offset: 0x20
	// Line 3384, Address: 0x3a75c8, Func Offset: 0x28
	// Line 3389, Address: 0x3a75d0, Func Offset: 0x30
	// Func End, Address: 0x3a75d8, Func Offset: 0x38
}

// OrdComp_R_Asset__FPvPv
// Start address: 0x3a75e0
int32 OrdComp_R_Asset(void* vkey, void* vitem)
{
	int32 rc;
	// Line 3360, Address: 0x3a75e0, Func Offset: 0
	// Line 3366, Address: 0x3a75e8, Func Offset: 0x8
	// Line 3367, Address: 0x3a75f4, Func Offset: 0x14
	// Line 3370, Address: 0x3a7604, Func Offset: 0x24
	// Line 3366, Address: 0x3a760c, Func Offset: 0x2c
	// Line 3371, Address: 0x3a7614, Func Offset: 0x34
	// Func End, Address: 0x3a761c, Func Offset: 0x3c
}

// PKR_FRIEND_assetIsGameDup__FUiPC19st_PACKER_READ_DATAiUiUiPc
// Start address: 0x3a7620
int32 PKR_FRIEND_assetIsGameDup(uint32 aid, st_PACKER_READ_DATA* skippr, int32 oursize, uint32 ourtype, uint32 chksum)
{
	int32 is_dup;
	st_PACKER_ATOC_NODE* tmp_ass;
	int32 i;
	int32 idx;
	// Line 3003, Address: 0x3a7620, Func Offset: 0
	// Line 3023, Address: 0x3a7624, Func Offset: 0x4
	// Line 3003, Address: 0x3a7628, Func Offset: 0x8
	// Line 3023, Address: 0x3a762c, Func Offset: 0xc
	// Line 3003, Address: 0x3a7630, Func Offset: 0x10
	// Line 3004, Address: 0x3a7650, Func Offset: 0x30
	// Line 3003, Address: 0x3a7654, Func Offset: 0x34
	// Line 3023, Address: 0x3a7668, Func Offset: 0x48
	// Line 3032, Address: 0x3a7670, Func Offset: 0x50
	// Line 3033, Address: 0x3a767c, Func Offset: 0x5c
	// Line 3206, Address: 0x3a7694, Func Offset: 0x74
	// Line 3208, Address: 0x3a76a8, Func Offset: 0x88
	// Line 3023, Address: 0x3a76b0, Func Offset: 0x90
	// Line 3208, Address: 0x3a76b8, Func Offset: 0x98
	// Line 3041, Address: 0x3a76c0, Func Offset: 0xa0
	// Line 3208, Address: 0x3a76c8, Func Offset: 0xa8
	// Line 3046, Address: 0x3a76dc, Func Offset: 0xbc
	// Line 3062, Address: 0x3a76e0, Func Offset: 0xc0
	// Line 3208, Address: 0x3a76e4, Func Offset: 0xc4
	// Line 3062, Address: 0x3a76f0, Func Offset: 0xd0
	// Line 3208, Address: 0x3a76f4, Func Offset: 0xd4
	// Line 3068, Address: 0x3a7700, Func Offset: 0xe0
	// Line 3208, Address: 0x3a7708, Func Offset: 0xe8
	// Line 3068, Address: 0x3a7710, Func Offset: 0xf0
	// Line 3208, Address: 0x3a7714, Func Offset: 0xf4
	// Line 3073, Address: 0x3a771c, Func Offset: 0xfc
	// Line 3208, Address: 0x3a7720, Func Offset: 0x100
	// Line 3152, Address: 0x3a7748, Func Offset: 0x128
	// Line 3208, Address: 0x3a774c, Func Offset: 0x12c
	// Line 3204, Address: 0x3a7794, Func Offset: 0x174
	// Line 3205, Address: 0x3a7798, Func Offset: 0x178
	// Line 3209, Address: 0x3a77a0, Func Offset: 0x180
	// Func End, Address: 0x3a77d0, Func Offset: 0x1b0
}

// PKR_PkgHasAsset__FP19st_PACKER_READ_DATAUi
// Start address: 0x3a77d0
int32 PKR_PkgHasAsset(st_PACKER_READ_DATA* pr, uint32 aid)
{
	int32 rc;
	int32 idx;
	// Line 2888, Address: 0x3a77d0, Func Offset: 0
	// Line 2894, Address: 0x3a77d4, Func Offset: 0x4
	// Line 2888, Address: 0x3a77d8, Func Offset: 0x8
	// Line 2894, Address: 0x3a77dc, Func Offset: 0xc
	// Line 2888, Address: 0x3a77e0, Func Offset: 0x10
	// Line 2894, Address: 0x3a77e8, Func Offset: 0x18
	// Line 2896, Address: 0x3a77f0, Func Offset: 0x20
	// Line 2900, Address: 0x3a77f8, Func Offset: 0x28
	// Line 2902, Address: 0x3a7800, Func Offset: 0x30
	// Line 2900, Address: 0x3a7804, Func Offset: 0x34
	// Line 2902, Address: 0x3a7810, Func Offset: 0x40
	// Line 2903, Address: 0x3a781c, Func Offset: 0x4c
	// Line 2907, Address: 0x3a7830, Func Offset: 0x60
	// Line 2896, Address: 0x3a7838, Func Offset: 0x68
	// Line 2902, Address: 0x3a7840, Func Offset: 0x70
	// Line 2908, Address: 0x3a7848, Func Offset: 0x78
	// Func End, Address: 0x3a7858, Func Offset: 0x88
}

// PKR_GetAssetInfoByType__FP19st_PACKER_READ_DATAUiiP15PKRAssetTOCInfo
// Start address: 0x3a7860
int32 PKR_GetAssetInfoByType(st_PACKER_READ_DATA* pr, uint32 type, int32 idx, PKRAssetTOCInfo* tocinfo)
{
	st_PACKER_ATOC_NODE* assnode;
	st_XORDEREDARRAY* typlist;
	// Line 2800, Address: 0x3a7860, Func Offset: 0
	// Line 2807, Address: 0x3a7888, Func Offset: 0x28
	// Line 2810, Address: 0x3a7898, Func Offset: 0x38
	// Line 2813, Address: 0x3a78a0, Func Offset: 0x40
	// Line 2815, Address: 0x3a78d8, Func Offset: 0x78
	// Line 2818, Address: 0x3a78e0, Func Offset: 0x80
	// Line 2822, Address: 0x3a78ec, Func Offset: 0x8c
	// Line 2815, Address: 0x3a790c, Func Offset: 0xac
	// Line 2825, Address: 0x3a7914, Func Offset: 0xb4
	// Line 2851, Address: 0x3a791c, Func Offset: 0xbc
	// Line 2825, Address: 0x3a7920, Func Offset: 0xc0
	// Line 2830, Address: 0x3a7928, Func Offset: 0xc8
	// Line 2831, Address: 0x3a7930, Func Offset: 0xd0
	// Line 2836, Address: 0x3a7938, Func Offset: 0xd8
	// Line 2837, Address: 0x3a794c, Func Offset: 0xec
	// Line 2838, Address: 0x3a7960, Func Offset: 0x100
	// Line 2839, Address: 0x3a7968, Func Offset: 0x108
	// Line 2884, Address: 0x3a7970, Func Offset: 0x110
	// Func End, Address: 0x3a798c, Func Offset: 0x12c
}

// PKR_GetAssetInfo__FP19st_PACKER_READ_DATAUiP15PKRAssetTOCInfo
// Start address: 0x3a7990
int32 PKR_GetAssetInfo(st_PACKER_READ_DATA* pr, uint32 aid, PKRAssetTOCInfo* tocinfo)
{
	int32 idx;
	st_PACKER_ATOC_NODE* assnode;
	// Line 2761, Address: 0x3a7990, Func Offset: 0
	// Line 2765, Address: 0x3a79b0, Func Offset: 0x20
	// Line 2768, Address: 0x3a79c0, Func Offset: 0x30
	// Line 2769, Address: 0x3a79d4, Func Offset: 0x44
	// Line 2772, Address: 0x3a79dc, Func Offset: 0x4c
	// Line 2795, Address: 0x3a79e4, Func Offset: 0x54
	// Line 2772, Address: 0x3a79e8, Func Offset: 0x58
	// Line 2775, Address: 0x3a79f0, Func Offset: 0x60
	// Line 2776, Address: 0x3a79f4, Func Offset: 0x64
	// Line 2781, Address: 0x3a79fc, Func Offset: 0x6c
	// Line 2783, Address: 0x3a7a10, Func Offset: 0x80
	// Line 2784, Address: 0x3a7a24, Func Offset: 0x94
	// Line 2785, Address: 0x3a7a2c, Func Offset: 0x9c
	// Line 2795, Address: 0x3a7a30, Func Offset: 0xa0
	// Line 2769, Address: 0x3a7a38, Func Offset: 0xa8
	// Line 2796, Address: 0x3a7a3c, Func Offset: 0xac
	// Func End, Address: 0x3a7a54, Func Offset: 0xc4
}

// PKR_GetBaseSector__FP19st_PACKER_READ_DATA
// Start address: 0x3a7a60
uint32 PKR_GetBaseSector(st_PACKER_READ_DATA* pr)
{
	// Line 2758, Address: 0x3a7a60, Func Offset: 0
	// Func End, Address: 0x3a7a68, Func Offset: 0x8
}

// PKR_AssetName__FP19st_PACKER_READ_DATAUi
// Start address: 0x3a7a70
int8* PKR_AssetName(st_PACKER_READ_DATA* pr, uint32 aid)
{
	int8* da_name;
	int32 idx;
	// Line 2737, Address: 0x3a7a70, Func Offset: 0
	// Line 2743, Address: 0x3a7a84, Func Offset: 0x14
	// Line 2745, Address: 0x3a7a94, Func Offset: 0x24
	// Line 2746, Address: 0x3a7aa4, Func Offset: 0x34
	// Line 2748, Address: 0x3a7aac, Func Offset: 0x3c
	// Line 2751, Address: 0x3a7abc, Func Offset: 0x4c
	// Line 2752, Address: 0x3a7ac0, Func Offset: 0x50
	// Func End, Address: 0x3a7ad4, Func Offset: 0x64
}

// PKRAssetIDFromInst__FPv
// Start address: 0x3a7ae0
uint32 PKRAssetIDFromInst(void* asset_inst)
{
	// Line 2733, Address: 0x3a7ae0, Func Offset: 0
	// Func End, Address: 0x3a7ae8, Func Offset: 0x8
}

// PKR_Disconnect__FP19st_PACKER_READ_DATA
// Start address: 0x3a7af0
void PKR_Disconnect(st_PACKER_READ_DATA* pr)
{
	// Line 2716, Address: 0x3a7af0, Func Offset: 0
	// Line 2721, Address: 0x3a7b04, Func Offset: 0x14
	// Line 2724, Address: 0x3a7b0c, Func Offset: 0x1c
	// Line 2725, Address: 0x3a7b1c, Func Offset: 0x2c
	// Line 2728, Address: 0x3a7b20, Func Offset: 0x30
	// Func End, Address: 0x3a7b30, Func Offset: 0x40
}

// PKR_getPackTimestamp__FP19st_PACKER_READ_DATA
// Start address: 0x3a7b30
uint32 PKR_getPackTimestamp(st_PACKER_READ_DATA* pr)
{
	// Line 2701, Address: 0x3a7b30, Func Offset: 0
	// Func End, Address: 0x3a7b38, Func Offset: 0x8
}

// PKR_IsAssetReady__FP19st_PACKER_READ_DATAUi
// Start address: 0x3a7b40
int32 PKR_IsAssetReady(st_PACKER_READ_DATA* pr, uint32 aid)
{
	int32 is_ok;
	int32 idx;
	// Line 2670, Address: 0x3a7b40, Func Offset: 0
	// Line 2680, Address: 0x3a7b44, Func Offset: 0x4
	// Line 2670, Address: 0x3a7b48, Func Offset: 0x8
	// Line 2680, Address: 0x3a7b4c, Func Offset: 0xc
	// Line 2670, Address: 0x3a7b50, Func Offset: 0x10
	// Line 2680, Address: 0x3a7b5c, Func Offset: 0x1c
	// Line 2681, Address: 0x3a7b68, Func Offset: 0x28
	// Line 2690, Address: 0x3a7b70, Func Offset: 0x30
	// Line 2694, Address: 0x3a7b98, Func Offset: 0x58
	// Line 2695, Address: 0x3a7b9c, Func Offset: 0x5c
	// Func End, Address: 0x3a7bb0, Func Offset: 0x70
}

// PKR_AssetByType__FP19st_PACKER_READ_DATAUiiPUi
// Start address: 0x3a7bb0
void* PKR_AssetByType(st_PACKER_READ_DATA* pr, uint32 type, int32 idx, uint32* size)
{
	st_XORDEREDARRAY* typlist;
	st_PACKER_ATOC_NODE* assnode;
	// Line 2586, Address: 0x3a7bb0, Func Offset: 0
	// Line 2589, Address: 0x3a7bbc, Func Offset: 0xc
	// Line 2592, Address: 0x3a7bc4, Func Offset: 0x14
	// Line 2594, Address: 0x3a7bf8, Func Offset: 0x48
	// Line 2597, Address: 0x3a7c00, Func Offset: 0x50
	// Line 2601, Address: 0x3a7c0c, Func Offset: 0x5c
	// Line 2604, Address: 0x3a7c1c, Func Offset: 0x6c
	// Line 2609, Address: 0x3a7c28, Func Offset: 0x78
	// Line 2616, Address: 0x3a7c38, Func Offset: 0x88
	// Line 2665, Address: 0x3a7c48, Func Offset: 0x98
	// Func End, Address: 0x3a7c50, Func Offset: 0xa0
}

// PKR_AssetCount__FP19st_PACKER_READ_DATAUi
// Start address: 0x3a7c50
int32 PKR_AssetCount(st_PACKER_READ_DATA* pr, uint32 type)
{
	int32 cnt;
	// Line 2559, Address: 0x3a7c50, Func Offset: 0
	// Line 2562, Address: 0x3a7c58, Func Offset: 0x8
	// Line 2565, Address: 0x3a7c90, Func Offset: 0x40
	// Line 2567, Address: 0x3a7c98, Func Offset: 0x48
	// Line 2570, Address: 0x3a7ca4, Func Offset: 0x54
	// Line 2571, Address: 0x3a7cb0, Func Offset: 0x60
	// Func End, Address: 0x3a7cb8, Func Offset: 0x68
}

// PKR_GetAssetSize__FP19st_PACKER_READ_DATAUi
// Start address: 0x3a7cc0
uint32 PKR_GetAssetSize(st_PACKER_READ_DATA* pr, uint32 aid)
{
	int32 idx;
	st_PACKER_ATOC_NODE* assnode;
	// Line 2522, Address: 0x3a7cc0, Func Offset: 0
	// Line 2532, Address: 0x3a7cc4, Func Offset: 0x4
	// Line 2522, Address: 0x3a7cc8, Func Offset: 0x8
	// Line 2532, Address: 0x3a7ccc, Func Offset: 0xc
	// Line 2522, Address: 0x3a7cd0, Func Offset: 0x10
	// Line 2532, Address: 0x3a7cdc, Func Offset: 0x1c
	// Line 2534, Address: 0x3a7ce8, Func Offset: 0x28
	// Line 2536, Address: 0x3a7cf4, Func Offset: 0x34
	// Line 2543, Address: 0x3a7d00, Func Offset: 0x40
	// Line 2544, Address: 0x3a7d0c, Func Offset: 0x4c
	// Line 2548, Address: 0x3a7d20, Func Offset: 0x60
	// Func End, Address: 0x3a7d34, Func Offset: 0x74
}

// PKR_LoadAsset__FP19st_PACKER_READ_DATAUiPCcPvPi
// Start address: 0x3a7d40
void* PKR_LoadAsset(st_PACKER_READ_DATA* pr, uint32 aid, int32* assetsize)
{
	// Line 2511, Address: 0x3a7d40, Func Offset: 0
	// Func End, Address: 0x3a7d48, Func Offset: 0x8
}

// PKR_LoadLayer__FP19st_PACKER_READ_DATA13en_LAYER_TYPE
// Start address: 0x3a7d50
int32 PKR_LoadLayer()
{
	// Line 2506, Address: 0x3a7d50, Func Offset: 0
	// Func End, Address: 0x3a7d58, Func Offset: 0x8
}

// PKR_FindAsset__FP19st_PACKER_READ_DATAUiPi
// Start address: 0x3a7d60
void* PKR_FindAsset(st_PACKER_READ_DATA* pr, uint32 aid, int32* assetsize)
{
	int32 idx;
	st_PACKER_ATOC_NODE* assnode;
	// Line 2457, Address: 0x3a7d60, Func Offset: 0
	// Line 2461, Address: 0x3a7d78, Func Offset: 0x18
	// Line 2459, Address: 0x3a7d80, Func Offset: 0x20
	// Line 2461, Address: 0x3a7d84, Func Offset: 0x24
	// Line 2462, Address: 0x3a7d90, Func Offset: 0x30
	// Line 2471, Address: 0x3a7d98, Func Offset: 0x38
	// Line 2474, Address: 0x3a7da4, Func Offset: 0x44
	// Line 2476, Address: 0x3a7dac, Func Offset: 0x4c
	// Line 2477, Address: 0x3a7db4, Func Offset: 0x54
	// Line 2478, Address: 0x3a7dc4, Func Offset: 0x64
	// Line 2476, Address: 0x3a7dd4, Func Offset: 0x74
	// Line 2477, Address: 0x3a7ddc, Func Offset: 0x7c
	// Line 2479, Address: 0x3a7de4, Func Offset: 0x84
	// Line 2495, Address: 0x3a7dec, Func Offset: 0x8c
	// Line 2498, Address: 0x3a7df8, Func Offset: 0x98
	// Func End, Address: 0x3a7e10, Func Offset: 0xb0
}

// PKR_xform_asset__FP19st_PACKER_ATOC_NODEi
// Start address: 0x3a7e10
void PKR_xform_asset(st_PACKER_ATOC_NODE* assnode, int32 dumpable_layer)
{
	int8* xformloc;
	PKRAssetType* atype;
	// Line 2348, Address: 0x3a7e10, Func Offset: 0
	// Line 2354, Address: 0x3a7e28, Func Offset: 0x18
	// Line 2357, Address: 0x3a7e3c, Func Offset: 0x2c
	// Line 2358, Address: 0x3a7e50, Func Offset: 0x40
	// Line 2368, Address: 0x3a7e5c, Func Offset: 0x4c
	// Line 2370, Address: 0x3a7e60, Func Offset: 0x50
	// Line 2379, Address: 0x3a7e68, Func Offset: 0x58
	// Line 2393, Address: 0x3a7e74, Func Offset: 0x64
	// Line 2405, Address: 0x3a7e80, Func Offset: 0x70
	// Line 2430, Address: 0x3a7ea0, Func Offset: 0x90
	// Line 2438, Address: 0x3a7ec0, Func Offset: 0xb0
	// Line 2447, Address: 0x3a7ed8, Func Offset: 0xc8
	// Line 2453, Address: 0x3a7edc, Func Offset: 0xcc
	// Line 2445, Address: 0x3a7efc, Func Offset: 0xec
	// Line 2453, Address: 0x3a7f00, Func Offset: 0xf0
	// Line 2445, Address: 0x3a7f04, Func Offset: 0xf4
	// Line 2446, Address: 0x3a7f08, Func Offset: 0xf8
	// Line 2454, Address: 0x3a7f10, Func Offset: 0x100
	// Func End, Address: 0x3a7f28, Func Offset: 0x118
}

// PKR_xformLayerAssets__FP19st_PACKER_LTOC_NODE
// Start address: 0x3a7f30
void PKR_xformLayerAssets(st_PACKER_LTOC_NODE* laynode)
{
	int32 i;
	int32 will_be_dumped;
	st_PACKER_ATOC_NODE* tmpass;
	en_PKR_LAYER_LOAD_DEST loaddest;
	// Line 2302, Address: 0x3a7f30, Func Offset: 0
	// Line 2311, Address: 0x3a7f50, Func Offset: 0x20
	// Line 2312, Address: 0x3a7fa0, Func Offset: 0x70
	// Line 2315, Address: 0x3a7fb0, Func Offset: 0x80
	// Line 2316, Address: 0x3a7fc4, Func Offset: 0x94
	// Line 2317, Address: 0x3a7fc8, Func Offset: 0x98
	// Line 2316, Address: 0x3a7fcc, Func Offset: 0x9c
	// Line 2317, Address: 0x3a7fd4, Func Offset: 0xa4
	// Line 2342, Address: 0x3a7fe4, Func Offset: 0xb4
	// Line 2344, Address: 0x3a8000, Func Offset: 0xd0
	// Line 2345, Address: 0x3a8030, Func Offset: 0x100
	// Func End, Address: 0x3a8050, Func Offset: 0x120
}

// PKR_updateLayerAssets__FP19st_PACKER_LTOC_NODE
// Start address: 0x3a8050
void PKR_updateLayerAssets(st_PACKER_LTOC_NODE* laynode)
{
	int32 i;
	st_PACKER_ATOC_NODE* tmpass;
	int32 lay_hip_pos;
	// Line 2195, Address: 0x3a8050, Func Offset: 0
	// Line 2194, Address: 0x3a8054, Func Offset: 0x4
	// Line 2195, Address: 0x3a8058, Func Offset: 0x8
	// Line 2196, Address: 0x3a8068, Func Offset: 0x18
	// Line 2198, Address: 0x3a806c, Func Offset: 0x1c
	// Line 2200, Address: 0x3a8088, Func Offset: 0x38
	// Line 2199, Address: 0x3a8090, Func Offset: 0x40
	// Line 2200, Address: 0x3a8094, Func Offset: 0x44
	// Line 2208, Address: 0x3a80a0, Func Offset: 0x50
	// Line 2223, Address: 0x3a80a4, Func Offset: 0x54
	// Line 2235, Address: 0x3a80b4, Func Offset: 0x64
	// Line 2252, Address: 0x3a80b8, Func Offset: 0x68
	// Line 2231, Address: 0x3a80bc, Func Offset: 0x6c
	// Line 2224, Address: 0x3a80c0, Func Offset: 0x70
	// Line 2231, Address: 0x3a80d0, Func Offset: 0x80
	// Line 2235, Address: 0x3a80dc, Func Offset: 0x8c
	// Line 2240, Address: 0x3a80e4, Func Offset: 0x94
	// Line 2241, Address: 0x3a80ec, Func Offset: 0x9c
	// Line 2249, Address: 0x3a80f0, Func Offset: 0xa0
	// Line 2252, Address: 0x3a8104, Func Offset: 0xb4
	// Line 2283, Address: 0x3a8110, Func Offset: 0xc0
	// Line 2299, Address: 0x3a8128, Func Offset: 0xd8
	// Func End, Address: 0x3a8130, Func Offset: 0xe0
}

// PKR_findNextLayerToLoad__FPP19st_PACKER_READ_DATAPP19st_PACKER_LTOC_NODE
// Start address: 0x3a8130
int32 PKR_findNextLayerToLoad(st_PACKER_READ_DATA** work_on_pkg, st_PACKER_LTOC_NODE** next_layer)
{
	st_PACKER_READ_DATA* tmppr;
	st_PACKER_LTOC_NODE* tmplay;
	int32 i;
	int32 j;
	// Line 2144, Address: 0x3a8130, Func Offset: 0
	// Line 2147, Address: 0x3a8134, Func Offset: 0x4
	// Line 2148, Address: 0x3a8138, Func Offset: 0x8
	// Line 2149, Address: 0x3a8140, Func Offset: 0x10
	// Line 2151, Address: 0x3a8154, Func Offset: 0x24
	// Line 2150, Address: 0x3a8158, Func Offset: 0x28
	// Line 2151, Address: 0x3a815c, Func Offset: 0x2c
	// Line 2152, Address: 0x3a816c, Func Offset: 0x3c
	// Line 2154, Address: 0x3a8170, Func Offset: 0x40
	// Line 2155, Address: 0x3a8178, Func Offset: 0x48
	// Line 2161, Address: 0x3a818c, Func Offset: 0x5c
	// Line 2184, Address: 0x3a8194, Func Offset: 0x64
	// Line 2164, Address: 0x3a819c, Func Offset: 0x6c
	// Line 2184, Address: 0x3a81a0, Func Offset: 0x70
	// Line 2173, Address: 0x3a81a4, Func Offset: 0x74
	// Line 2166, Address: 0x3a81a8, Func Offset: 0x78
	// Line 2184, Address: 0x3a81ac, Func Offset: 0x7c
	// Line 2166, Address: 0x3a81b0, Func Offset: 0x80
	// Line 2184, Address: 0x3a81b4, Func Offset: 0x84
	// Line 2173, Address: 0x3a8200, Func Offset: 0xd0
	// Line 2184, Address: 0x3a8204, Func Offset: 0xd4
	// Line 2176, Address: 0x3a8210, Func Offset: 0xe0
	// Line 2184, Address: 0x3a8218, Func Offset: 0xe8
	// Line 2185, Address: 0x3a8240, Func Offset: 0x110
	// Func End, Address: 0x3a8248, Func Offset: 0x118
}

// PKR_LayerMemRelease__FP19st_PACKER_READ_DATAP19st_PACKER_LTOC_NODE
// Start address: 0x3a8250
void PKR_LayerMemRelease(st_PACKER_LTOC_NODE* layer)
{
	en_PKR_LAYER_LOAD_DEST loaddest;
	// Line 1902, Address: 0x3a8250, Func Offset: 0
	// Line 1909, Address: 0x3a825c, Func Offset: 0xc
	// Line 1910, Address: 0x3a82ac, Func Offset: 0x5c
	// Line 1915, Address: 0x3a82d8, Func Offset: 0x88
	// Line 1933, Address: 0x3a82e8, Func Offset: 0x98
	// Line 1944, Address: 0x3a82f0, Func Offset: 0xa0
	// Line 1946, Address: 0x3a8314, Func Offset: 0xc4
	// Line 1952, Address: 0x3a831c, Func Offset: 0xcc
	// Line 1954, Address: 0x3a8340, Func Offset: 0xf0
	// Line 1955, Address: 0x3a8344, Func Offset: 0xf4
	// Line 1968, Address: 0x3a8348, Func Offset: 0xf8
	// Func End, Address: 0x3a8358, Func Offset: 0x108
}

// PKR_LayerMemReserve__FP19st_PACKER_READ_DATAP19st_PACKER_LTOC_NODE
// Start address: 0x3a8360
int8* PKR_LayerMemReserve(st_PACKER_READ_DATA* pr, st_PACKER_LTOC_NODE* layer)
{
	int8* mem;
	en_PKR_LAYER_LOAD_DEST loaddest;
	// Line 1819, Address: 0x3a8360, Func Offset: 0
	// Line 1820, Address: 0x3a836c, Func Offset: 0xc
	// Line 1830, Address: 0x3a8370, Func Offset: 0x10
	// Line 1842, Address: 0x3a8380, Func Offset: 0x20
	// Line 1843, Address: 0x3a83d0, Func Offset: 0x70
	// Line 1850, Address: 0x3a8400, Func Offset: 0xa0
	// Line 1853, Address: 0x3a8428, Func Offset: 0xc8
	// Line 1859, Address: 0x3a8430, Func Offset: 0xd0
	// Line 1863, Address: 0x3a8458, Func Offset: 0xf8
	// Line 1873, Address: 0x3a8460, Func Offset: 0x100
	// Line 1898, Address: 0x3a8470, Func Offset: 0x110
	// Line 1899, Address: 0x3a8474, Func Offset: 0x114
	// Func End, Address: 0x3a8480, Func Offset: 0x120
}

// PKR_LoadStep_Async__Fv
// Start address: 0x3a8480
int32 PKR_LoadStep_Async()
{
	int32 moretodo;
	int32 rc;
	en_READ_ASYNC_STATUS readstat;
	st_PACKER_ATOC_NODE* tmpass;
	en_PKR_LAYER_LOAD_DEST loaddest;
	en_PKR_LAYER_LOAD_DEST loaddest;
	en_PKR_LAYER_LOAD_DEST loaddest;
	en_PKR_LAYER_LOAD_DEST loaddest;
	st_PACKER_READ_DATA* curpr;
	st_PACKER_LTOC_NODE* asynlay;
	// Line 1457, Address: 0x3a8480, Func Offset: 0
	// Line 1470, Address: 0x3a848c, Func Offset: 0xc
	// Line 1634, Address: 0x3a8498, Func Offset: 0x18
	// Line 1637, Address: 0x3a84ac, Func Offset: 0x2c
	// Line 1638, Address: 0x3a84b8, Func Offset: 0x38
	// Line 1693, Address: 0x3a84bc, Func Offset: 0x3c
	// Line 1713, Address: 0x3a84c4, Func Offset: 0x44
	// Line 1789, Address: 0x3a84d4, Func Offset: 0x54
	// Line 1790, Address: 0x3a8524, Func Offset: 0xa4
	// Line 1792, Address: 0x3a853c, Func Offset: 0xbc
	// Line 1797, Address: 0x3a8544, Func Offset: 0xc4
	// Line 1803, Address: 0x3a8550, Func Offset: 0xd0
	// Line 1797, Address: 0x3a8554, Func Offset: 0xd4
	// Line 1801, Address: 0x3a8560, Func Offset: 0xe0
	// Line 1802, Address: 0x3a8564, Func Offset: 0xe4
	// Line 1807, Address: 0x3a8568, Func Offset: 0xe8
	// Line 1492, Address: 0x3a859c, Func Offset: 0x11c
	// Line 1807, Address: 0x3a85a0, Func Offset: 0x120
	// Line 1492, Address: 0x3a85a4, Func Offset: 0x124
	// Line 1807, Address: 0x3a85d8, Func Offset: 0x158
	// Line 1568, Address: 0x3a8654, Func Offset: 0x1d4
	// Line 1807, Address: 0x3a8658, Func Offset: 0x1d8
	// Line 1568, Address: 0x3a865c, Func Offset: 0x1dc
	// Line 1807, Address: 0x3a8660, Func Offset: 0x1e0
	// Line 1598, Address: 0x3a8664, Func Offset: 0x1e4
	// Line 1807, Address: 0x3a866c, Func Offset: 0x1ec
	// Line 1591, Address: 0x3a867c, Func Offset: 0x1fc
	// Line 1807, Address: 0x3a8684, Func Offset: 0x204
	// Line 1591, Address: 0x3a8688, Func Offset: 0x208
	// Line 1807, Address: 0x3a868c, Func Offset: 0x20c
	// Line 1609, Address: 0x3a86a0, Func Offset: 0x220
	// Line 1611, Address: 0x3a86a4, Func Offset: 0x224
	// Line 1609, Address: 0x3a86a8, Func Offset: 0x228
	// Line 1807, Address: 0x3a86ac, Func Offset: 0x22c
	// Line 1614, Address: 0x3a86b0, Func Offset: 0x230
	// Line 1807, Address: 0x3a86b8, Func Offset: 0x238
	// Line 1619, Address: 0x3a86bc, Func Offset: 0x23c
	// Line 1622, Address: 0x3a86c0, Func Offset: 0x240
	// Line 1807, Address: 0x3a86c8, Func Offset: 0x248
	// Line 1705, Address: 0x3a86e0, Func Offset: 0x260
	// Line 1807, Address: 0x3a86e4, Func Offset: 0x264
	// Line 1705, Address: 0x3a86e8, Func Offset: 0x268
	// Line 1706, Address: 0x3a871c, Func Offset: 0x29c
	// Line 1807, Address: 0x3a8720, Func Offset: 0x2a0
	// Line 1712, Address: 0x3a8798, Func Offset: 0x318
	// Line 1807, Address: 0x3a87a0, Func Offset: 0x320
	// Line 1737, Address: 0x3a87c0, Func Offset: 0x340
	// Line 1807, Address: 0x3a87c4, Func Offset: 0x344
	// Line 1737, Address: 0x3a87c8, Func Offset: 0x348
	// Line 1807, Address: 0x3a87f4, Func Offset: 0x374
	// Line 1750, Address: 0x3a8814, Func Offset: 0x394
	// Line 1807, Address: 0x3a8818, Func Offset: 0x398
	// Line 1750, Address: 0x3a881c, Func Offset: 0x39c
	// Line 1751, Address: 0x3a8850, Func Offset: 0x3d0
	// Line 1807, Address: 0x3a8854, Func Offset: 0x3d4
	// Line 1759, Address: 0x3a8860, Func Offset: 0x3e0
	// Line 1763, Address: 0x3a8864, Func Offset: 0x3e4
	// Line 1807, Address: 0x3a8868, Func Offset: 0x3e8
	// Line 1759, Address: 0x3a886c, Func Offset: 0x3ec
	// Line 1807, Address: 0x3a8870, Func Offset: 0x3f0
	// Line 1765, Address: 0x3a8874, Func Offset: 0x3f4
	// Line 1807, Address: 0x3a887c, Func Offset: 0x3fc
	// Line 1808, Address: 0x3a889c, Func Offset: 0x41c
	// Func End, Address: 0x3a88ac, Func Offset: 0x42c
}

// PKR_parse_TOC__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA
// Start address: 0x3a88b0
int32 PKR_parse_TOC(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr)
{
	int32 is_ok;
	uint32 cid;
	int32 done;
	// Line 918, Address: 0x3a88b0, Func Offset: 0
	// Line 920, Address: 0x3a88d0, Func Offset: 0x20
	// Line 924, Address: 0x3a88d4, Func Offset: 0x24
	// Line 926, Address: 0x3a88e4, Func Offset: 0x34
	// Line 927, Address: 0x3a88ec, Func Offset: 0x3c
	// Line 928, Address: 0x3a892c, Func Offset: 0x7c
	// Line 929, Address: 0x3a8930, Func Offset: 0x80
	// Line 930, Address: 0x3a8934, Func Offset: 0x84
	// Line 931, Address: 0x3a893c, Func Offset: 0x8c
	// Line 932, Address: 0x3a8940, Func Offset: 0x90
	// Line 949, Address: 0x3a894c, Func Offset: 0x9c
	// Line 950, Address: 0x3a8958, Func Offset: 0xa8
	// Line 954, Address: 0x3a8964, Func Offset: 0xb4
	// Line 957, Address: 0x3a8974, Func Offset: 0xc4
	// Line 958, Address: 0x3a897c, Func Offset: 0xcc
	// Line 959, Address: 0x3a8980, Func Offset: 0xd0
	// Line 962, Address: 0x3a898c, Func Offset: 0xdc
	// Line 964, Address: 0x3a8994, Func Offset: 0xe4
	// Line 965, Address: 0x3a899c, Func Offset: 0xec
	// Line 968, Address: 0x3a89a0, Func Offset: 0xf0
	// Line 972, Address: 0x3a89ac, Func Offset: 0xfc
	// Line 975, Address: 0x3a89b0, Func Offset: 0x100
	// Line 981, Address: 0x3a89b8, Func Offset: 0x108
	// Line 982, Address: 0x3a89c8, Func Offset: 0x118
	// Line 984, Address: 0x3a89e0, Func Offset: 0x130
	// Line 986, Address: 0x3a89e8, Func Offset: 0x138
	// Line 952, Address: 0x3a8a04, Func Offset: 0x154
	// Line 986, Address: 0x3a8a08, Func Offset: 0x158
	// Line 952, Address: 0x3a8a0c, Func Offset: 0x15c
	// Line 986, Address: 0x3a8a24, Func Offset: 0x174
	// Line 987, Address: 0x3a8a40, Func Offset: 0x190
	// Func End, Address: 0x3a8a5c, Func Offset: 0x1ac
}

// PKR_SetActive__FP19st_PACKER_READ_DATA13en_LAYER_TYPE
// Start address: 0x3a8a60
int32 PKR_SetActive(st_PACKER_READ_DATA* pr, en_LAYER_TYPE layer)
{
	int32 result;
	int32 rc;
	int32 i;
	int32 j;
	st_PACKER_ATOC_NODE* assnode;
	st_PACKER_LTOC_NODE* laynode;
	// Line 832, Address: 0x3a8a60, Func Offset: 0
	// Line 833, Address: 0x3a8a78, Func Offset: 0x18
	// Line 832, Address: 0x3a8a7c, Func Offset: 0x1c
	// Line 842, Address: 0x3a8a94, Func Offset: 0x34
	// Line 847, Address: 0x3a8a9c, Func Offset: 0x3c
	// Line 848, Address: 0x3a8ab0, Func Offset: 0x50
	// Line 852, Address: 0x3a8ab8, Func Offset: 0x58
	// Line 855, Address: 0x3a8ad0, Func Offset: 0x70
	// Line 856, Address: 0x3a8ae8, Func Offset: 0x88
	// Line 867, Address: 0x3a8aec, Func Offset: 0x8c
	// Line 856, Address: 0x3a8af0, Func Offset: 0x90
	// Line 867, Address: 0x3a8afc, Func Offset: 0x9c
	// Line 868, Address: 0x3a8b08, Func Offset: 0xa8
	// Line 877, Address: 0x3a8b18, Func Offset: 0xb8
	// Line 884, Address: 0x3a8b24, Func Offset: 0xc4
	// Line 888, Address: 0x3a8b2c, Func Offset: 0xcc
	// Line 893, Address: 0x3a8b40, Func Offset: 0xe0
	// Line 898, Address: 0x3a8b48, Func Offset: 0xe8
	// Line 902, Address: 0x3a8b50, Func Offset: 0xf0
	// Line 906, Address: 0x3a8b68, Func Offset: 0x108
	// Line 842, Address: 0x3a8b70, Func Offset: 0x110
	// Line 906, Address: 0x3a8b78, Func Offset: 0x118
	// Line 881, Address: 0x3a8b84, Func Offset: 0x124
	// Line 898, Address: 0x3a8b8c, Func Offset: 0x12c
	// Line 906, Address: 0x3a8b90, Func Offset: 0x130
	// Line 899, Address: 0x3a8b94, Func Offset: 0x134
	// Line 906, Address: 0x3a8b9c, Func Offset: 0x13c
	// Line 907, Address: 0x3a8bc0, Func Offset: 0x160
	// Func End, Address: 0x3a8bf0, Func Offset: 0x190
}

// PKR_ReadDone__FP19st_PACKER_READ_DATA
// Start address: 0x3a8bf0
void PKR_ReadDone(st_PACKER_READ_DATA* pr)
{
	int32 i;
	int32 j;
	int32 lockid;
	st_PACKER_ATOC_NODE* assnode;
	st_PACKER_LTOC_NODE* laynode;
	st_XORDEREDARRAY* tmplist;
	// Line 675, Address: 0x3a8bf0, Func Offset: 0
	// Line 685, Address: 0x3a8c10, Func Offset: 0x20
	// Line 692, Address: 0x3a8c18, Func Offset: 0x28
	// Line 693, Address: 0x3a8c2c, Func Offset: 0x3c
	// Line 695, Address: 0x3a8c38, Func Offset: 0x48
	// Line 696, Address: 0x3a8c50, Func Offset: 0x60
	// Line 699, Address: 0x3a8c60, Func Offset: 0x70
	// Line 700, Address: 0x3a8c6c, Func Offset: 0x7c
	// Line 701, Address: 0x3a8c74, Func Offset: 0x84
	// Line 704, Address: 0x3a8c88, Func Offset: 0x98
	// Line 705, Address: 0x3a8c94, Func Offset: 0xa4
	// Line 706, Address: 0x3a8ca8, Func Offset: 0xb8
	// Line 759, Address: 0x3a8cb8, Func Offset: 0xc8
	// Line 760, Address: 0x3a8ccc, Func Offset: 0xdc
	// Line 762, Address: 0x3a8cd8, Func Offset: 0xe8
	// Line 777, Address: 0x3a8ce4, Func Offset: 0xf4
	// Line 783, Address: 0x3a8d04, Func Offset: 0x114
	// Line 786, Address: 0x3a8d0c, Func Offset: 0x11c
	// Line 787, Address: 0x3a8d20, Func Offset: 0x130
	// Line 789, Address: 0x3a8d24, Func Offset: 0x134
	// Line 787, Address: 0x3a8d28, Func Offset: 0x138
	// Line 789, Address: 0x3a8d30, Func Offset: 0x140
	// Line 790, Address: 0x3a8d5c, Func Offset: 0x16c
	// Line 770, Address: 0x3a8d78, Func Offset: 0x188
	// Line 790, Address: 0x3a8d7c, Func Offset: 0x18c
	// Line 783, Address: 0x3a8d90, Func Offset: 0x1a0
	// Line 790, Address: 0x3a8d94, Func Offset: 0x1a4
	// Line 783, Address: 0x3a8d9c, Func Offset: 0x1ac
	// Line 790, Address: 0x3a8db0, Func Offset: 0x1c0
	// Line 793, Address: 0x3a8dc4, Func Offset: 0x1d4
	// Line 794, Address: 0x3a8dd0, Func Offset: 0x1e0
	// Line 797, Address: 0x3a8ddc, Func Offset: 0x1ec
	// Line 802, Address: 0x3a8de4, Func Offset: 0x1f4
	// Line 804, Address: 0x3a8df0, Func Offset: 0x200
	// Line 812, Address: 0x3a8e04, Func Offset: 0x214
	// Line 813, Address: 0x3a8e0c, Func Offset: 0x21c
	// Line 814, Address: 0x3a8e1c, Func Offset: 0x22c
	// Line 819, Address: 0x3a8e20, Func Offset: 0x230
	// Line 820, Address: 0x3a8e24, Func Offset: 0x234
	// Line 821, Address: 0x3a8e34, Func Offset: 0x244
	// Line 823, Address: 0x3a8e48, Func Offset: 0x258
	// Line 824, Address: 0x3a8e60, Func Offset: 0x270
	// Func End, Address: 0x3a8e84, Func Offset: 0x294
}

// PKR_ReadInit__FPvPCcUiPiP12PKRAssetTypei
// Start address: 0x3a8e90
st_PACKER_READ_DATA* PKR_ReadInit(void* userdata, int8* pkgfile, uint32 opts, int32* cltver, PKRAssetType* typelist, int32 fileflags)
{
	st_PACKER_READ_DATA* pr;
	int32 i;
	int32 uselock;
	int8* tocbuf_RAW;
	int8* tocbuf_aligned;
	// Line 483, Address: 0x3a8e90, Func Offset: 0
	// Line 498, Address: 0x3a8e94, Func Offset: 0x4
	// Line 483, Address: 0x3a8e98, Func Offset: 0x8
	// Line 498, Address: 0x3a8ebc, Func Offset: 0x2c
	// Line 483, Address: 0x3a8ec0, Func Offset: 0x30
	// Line 498, Address: 0x3a8edc, Func Offset: 0x4c
	// Line 488, Address: 0x3a8ef0, Func Offset: 0x60
	// Line 484, Address: 0x3a8ef4, Func Offset: 0x64
	// Line 498, Address: 0x3a8ef8, Func Offset: 0x68
	// Line 505, Address: 0x3a8f00, Func Offset: 0x70
	// Line 498, Address: 0x3a8f04, Func Offset: 0x74
	// Line 505, Address: 0x3a8f08, Func Offset: 0x78
	// Line 506, Address: 0x3a8f14, Func Offset: 0x84
	// Line 507, Address: 0x3a8f20, Func Offset: 0x90
	// Line 508, Address: 0x3a8f24, Func Offset: 0x94
	// Line 509, Address: 0x3a8f28, Func Offset: 0x98
	// Line 508, Address: 0x3a8f2c, Func Offset: 0x9c
	// Line 507, Address: 0x3a8f44, Func Offset: 0xb4
	// Line 510, Address: 0x3a8f48, Func Offset: 0xb8
	// Line 512, Address: 0x3a8f50, Func Offset: 0xc0
	// Line 515, Address: 0x3a8f60, Func Offset: 0xd0
	// Line 517, Address: 0x3a8f68, Func Offset: 0xd8
	// Line 519, Address: 0x3a8f78, Func Offset: 0xe8
	// Line 524, Address: 0x3a8f7c, Func Offset: 0xec
	// Line 521, Address: 0x3a8f80, Func Offset: 0xf0
	// Line 527, Address: 0x3a8f84, Func Offset: 0xf4
	// Line 522, Address: 0x3a8f88, Func Offset: 0xf8
	// Line 527, Address: 0x3a8f8c, Func Offset: 0xfc
	// Line 523, Address: 0x3a8f90, Func Offset: 0x100
	// Line 527, Address: 0x3a8f94, Func Offset: 0x104
	// Line 530, Address: 0x3a8fa0, Func Offset: 0x110
	// Line 534, Address: 0x3a8fa8, Func Offset: 0x118
	// Line 540, Address: 0x3a8fcc, Func Offset: 0x13c
	// Line 562, Address: 0x3a8fd4, Func Offset: 0x144
	// Line 564, Address: 0x3a8fe8, Func Offset: 0x158
	// Line 570, Address: 0x3a8ff4, Func Offset: 0x164
	// Line 587, Address: 0x3a8ff8, Func Offset: 0x168
	// Line 570, Address: 0x3a8ffc, Func Offset: 0x16c
	// Line 587, Address: 0x3a9000, Func Offset: 0x170
	// Line 631, Address: 0x3a9014, Func Offset: 0x184
	// Line 670, Address: 0x3a9030, Func Offset: 0x1a0
	// Line 531, Address: 0x3a9040, Func Offset: 0x1b0
	// Line 670, Address: 0x3a904c, Func Offset: 0x1bc
	// Line 532, Address: 0x3a9058, Func Offset: 0x1c8
	// Line 670, Address: 0x3a9060, Func Offset: 0x1d0
	// Line 619, Address: 0x3a9068, Func Offset: 0x1d8
	// Line 618, Address: 0x3a906c, Func Offset: 0x1dc
	// Line 622, Address: 0x3a9070, Func Offset: 0x1e0
	// Line 625, Address: 0x3a9078, Func Offset: 0x1e8
	// Line 671, Address: 0x3a9084, Func Offset: 0x1f4
	// Func End, Address: 0x3a90b4, Func Offset: 0x224
}

// PKRLoadStep__Fi
// Start address: 0x3a90c0
int32 PKRLoadStep()
{
	int32 more_todo;
	// Line 419, Address: 0x3a90c0, Func Offset: 0
	// Func End, Address: 0x3a90c8, Func Offset: 0x8
}

// PKRShutdown__Fv
// Start address: 0x3a90d0
int32 PKRShutdown()
{
	// Line 337, Address: 0x3a90d0, Func Offset: 0
	// Line 350, Address: 0x3a90d8, Func Offset: 0x8
	// Func End, Address: 0x3a90e0, Func Offset: 0x10
}

// PKRStartup__Fv
// Start address: 0x3a90e0
int32 PKRStartup()
{
	// Line 265, Address: 0x3a90e0, Func Offset: 0
	// Line 266, Address: 0x3a90e8, Func Offset: 0x8
	// Line 325, Address: 0x3a90f8, Func Offset: 0x18
	// Line 288, Address: 0x3a9158, Func Offset: 0x78
	// Line 326, Address: 0x3a9164, Func Offset: 0x84
	// Func End, Address: 0x3a9170, Func Offset: 0x90
}

// PKRGetReadFuncs__Fi
// Start address: 0x3a9170
PKRReadFuncs* PKRGetReadFuncs(int32 apiver)
{
	// Line 248, Address: 0x3a9170, Func Offset: 0
	// Line 250, Address: 0x3a9184, Func Offset: 0x14
	// Line 256, Address: 0x3a9188, Func Offset: 0x18
	// Func End, Address: 0x3a9190, Func Offset: 0x20
}

