



int32 zNPCMgr_OrdComp_npcid(void* vkey, void* vitem);
int32 zNPCMgr_OrdTest_npcid(void* vkey, void* vitem);
xEnt* CreateDynNME(xEntAsset* ent_asset, xDynAsset* dyn_asset, int32 siz_dynass);
base* FindNPC(uint32 aid);
void Shutdown();
xEnt* zNPCMgr_createDynNMEInst(xEntAsset* assdat, xDynAsset* dynass, int32 siz_dynass);
void zNPCMgr_scenePostInit();
void zNPCMgr_sceneReset();
void zNPCMgr_sceneFinish();
void zNPCMgr_sceneInit();
void zNPCMgr_scenePrepare(int32 npccnt);
void zNPCMgr_Shutdown();
void zNPCMgr_Startup();
st_XORDEREDARRAY* zNPCMgr_GetNPCList();
zNPCMgr* zNPCMgrSelf();

// zNPCMgr_OrdComp_npcid__FPvPv
// Start address: 0x2bdce0
int32 zNPCMgr_OrdComp_npcid(void* vkey, void* vitem)
{
	int32 rc;
	// Line 900, Address: 0x2bdce0, Func Offset: 0
	// Line 906, Address: 0x2bdce8, Func Offset: 0x8
	// Line 907, Address: 0x2bdcf4, Func Offset: 0x14
	// Line 910, Address: 0x2bdd04, Func Offset: 0x24
	// Line 906, Address: 0x2bdd0c, Func Offset: 0x2c
	// Line 911, Address: 0x2bdd14, Func Offset: 0x34
	// Func End, Address: 0x2bdd1c, Func Offset: 0x3c
}

// zNPCMgr_OrdTest_npcid__FPCvPv
// Start address: 0x2bdd20
int32 zNPCMgr_OrdTest_npcid(void* vkey, void* vitem)
{
	int32 rc;
	uint32 key;
	// Line 888, Address: 0x2bdd20, Func Offset: 0
	// Line 892, Address: 0x2bdd24, Func Offset: 0x4
	// Line 893, Address: 0x2bdd30, Func Offset: 0x10
	// Line 896, Address: 0x2bdd40, Func Offset: 0x20
	// Line 892, Address: 0x2bdd48, Func Offset: 0x28
	// Line 897, Address: 0x2bdd50, Func Offset: 0x30
	// Func End, Address: 0x2bdd58, Func Offset: 0x38
}

// CreateDynNME__7zNPCMgrFPC9xEntAssetPC9xDynAsseti
// Start address: 0x2bdd60
xEnt* zNPCMgr::CreateDynNME(xEntAsset* ent_asset, xDynAsset* dyn_asset, int32 siz_dynass)
{
	uint32 size;
	uint32 aid_minf;
	void* thing;
	xModelAssetInfo* modelInfoAsset;
	en_npctyp nt;
	xFactoryInst* npc_inst;
	base* npc;
	zNMECommon* nme;
	// Line 759, Address: 0x2bdd60, Func Offset: 0
	// Line 785, Address: 0x2bdd78, Func Offset: 0x18
	// Line 759, Address: 0x2bdd80, Func Offset: 0x20
	// Line 785, Address: 0x2bdd98, Func Offset: 0x38
	// Line 786, Address: 0x2bdda8, Func Offset: 0x48
	// Line 800, Address: 0x2bddb4, Func Offset: 0x54
	// Line 786, Address: 0x2bddb8, Func Offset: 0x58
	// Line 800, Address: 0x2bddbc, Func Offset: 0x5c
	// Line 806, Address: 0x2bde14, Func Offset: 0xb4
	// Line 808, Address: 0x2bde24, Func Offset: 0xc4
	// Line 809, Address: 0x2bde34, Func Offset: 0xd4
	// Line 812, Address: 0x2bde3c, Func Offset: 0xdc
	// Line 817, Address: 0x2bde40, Func Offset: 0xe0
	// Line 823, Address: 0x2bde4c, Func Offset: 0xec
	// Line 824, Address: 0x2bde60, Func Offset: 0x100
	// Line 832, Address: 0x2bde70, Func Offset: 0x110
	// Line 834, Address: 0x2bde74, Func Offset: 0x114
	// Line 832, Address: 0x2bde78, Func Offset: 0x118
	// Line 834, Address: 0x2bde84, Func Offset: 0x124
	// Line 835, Address: 0x2bde94, Func Offset: 0x134
	// Line 837, Address: 0x2bdeb0, Func Offset: 0x150
	// Line 810, Address: 0x2bdebc, Func Offset: 0x15c
	// Line 837, Address: 0x2bdec4, Func Offset: 0x164
	// Line 810, Address: 0x2bdecc, Func Offset: 0x16c
	// Line 837, Address: 0x2bded4, Func Offset: 0x174
	// Line 815, Address: 0x2bded8, Func Offset: 0x178
	// Line 837, Address: 0x2bdee0, Func Offset: 0x180
	// Line 835, Address: 0x2bdef0, Func Offset: 0x190
	// Line 837, Address: 0x2bdef4, Func Offset: 0x194
	// Line 839, Address: 0x2bdf04, Func Offset: 0x1a4
	// Func End, Address: 0x2bdf2c, Func Offset: 0x1cc
}

// FindNPC__7zNPCMgrFUi
// Start address: 0x2bdf30
base* zNPCMgr::FindNPC(uint32 aid)
{
	int32 idx;
	// Line 484, Address: 0x2bdf30, Func Offset: 0
	// Line 486, Address: 0x2bdf34, Func Offset: 0x4
	// Line 484, Address: 0x2bdf38, Func Offset: 0x8
	// Line 486, Address: 0x2bdf3c, Func Offset: 0xc
	// Line 484, Address: 0x2bdf40, Func Offset: 0x10
	// Line 486, Address: 0x2bdf44, Func Offset: 0x14
	// Line 488, Address: 0x2bdf4c, Func Offset: 0x1c
	// Line 491, Address: 0x2bdf6c, Func Offset: 0x3c
	// Func End, Address: 0x2bdf7c, Func Offset: 0x4c
}

// Shutdown__7zNPCMgrFv
// Start address: 0x2bdf80
void zNPCMgr::Shutdown()
{
	// Line 347, Address: 0x2bdf80, Func Offset: 0
	// Line 348, Address: 0x2bdf94, Func Offset: 0x14
	// Line 349, Address: 0x2bdfa4, Func Offset: 0x24
	// Line 354, Address: 0x2bdfa8, Func Offset: 0x28
	// Func End, Address: 0x2bdfb8, Func Offset: 0x38
}

// zNPCMgr_createDynNMEInst__FPC9xEntAssetPC9xDynAsseti
// Start address: 0x2bdfc0
xEnt* zNPCMgr_createDynNMEInst(xEntAsset* assdat, xDynAsset* dynass, int32 siz_dynass)
{
	// Line 310, Address: 0x2bdfc8, Func Offset: 0x8
	// Func End, Address: 0x2bdfd8, Func Offset: 0x18
}

// zNPCMgr_scenePostInit__Fv
// Start address: 0x2bdfe0
void zNPCMgr_scenePostInit()
{
	// Line 266, Address: 0x2bdfe0, Func Offset: 0
	// Line 269, Address: 0x2bdfe4, Func Offset: 0x4
	// Line 266, Address: 0x2bdfec, Func Offset: 0xc
	// Line 269, Address: 0x2bdff4, Func Offset: 0x14
	// Line 271, Address: 0x2be028, Func Offset: 0x48
	// Func End, Address: 0x2be038, Func Offset: 0x58
}

// zNPCMgr_sceneReset__Fv
// Start address: 0x2be040
void zNPCMgr_sceneReset()
{
	// Line 258, Address: 0x2be040, Func Offset: 0
	// Line 261, Address: 0x2be044, Func Offset: 0x4
	// Line 258, Address: 0x2be04c, Func Offset: 0xc
	// Line 261, Address: 0x2be054, Func Offset: 0x14
	// Line 263, Address: 0x2be088, Func Offset: 0x48
	// Func End, Address: 0x2be098, Func Offset: 0x58
}

// zNPCMgr_sceneFinish__Fv
// Start address: 0x2be0a0
void zNPCMgr_sceneFinish()
{
	zNPCMgr* mgr;
	// Line 250, Address: 0x2be0a0, Func Offset: 0
	// Line 253, Address: 0x2be0a4, Func Offset: 0x4
	// Line 250, Address: 0x2be0a8, Func Offset: 0x8
	// Line 253, Address: 0x2be0ac, Func Offset: 0xc
	// Line 250, Address: 0x2be0b0, Func Offset: 0x10
	// Line 253, Address: 0x2be0c0, Func Offset: 0x20
	// Line 255, Address: 0x2be124, Func Offset: 0x84
	// Func End, Address: 0x2be13c, Func Offset: 0x9c
}

// zNPCMgr_sceneInit__Fv
// Start address: 0x2be140
void zNPCMgr_sceneInit()
{
	// Line 242, Address: 0x2be140, Func Offset: 0
	// Line 244, Address: 0x2be144, Func Offset: 0x4
	// Line 242, Address: 0x2be14c, Func Offset: 0xc
	// Line 244, Address: 0x2be154, Func Offset: 0x14
	// Line 246, Address: 0x2be188, Func Offset: 0x48
	// Func End, Address: 0x2be198, Func Offset: 0x58
}

// zNPCMgr_scenePrepare__Fi
// Start address: 0x2be1a0
void zNPCMgr_scenePrepare(int32 npccnt)
{
	// Line 234, Address: 0x2be1a0, Func Offset: 0
	// Line 236, Address: 0x2be1b0, Func Offset: 0x10
	// Line 238, Address: 0x2be1f8, Func Offset: 0x58
	// Func End, Address: 0x2be208, Func Offset: 0x68
}

// zNPCMgr_Shutdown__Fv
// Start address: 0x2be210
void zNPCMgr_Shutdown()
{
	// Line 212, Address: 0x2be210, Func Offset: 0
	// Line 214, Address: 0x2be21c, Func Offset: 0xc
	// Line 218, Address: 0x2be230, Func Offset: 0x20
	// Line 219, Address: 0x2be23c, Func Offset: 0x2c
	// Line 220, Address: 0x2be24c, Func Offset: 0x3c
	// Line 221, Address: 0x2be25c, Func Offset: 0x4c
	// Line 225, Address: 0x2be260, Func Offset: 0x50
	// Line 229, Address: 0x2be488, Func Offset: 0x278
	// Func End, Address: 0x2be498, Func Offset: 0x288
}

// zNPCMgr_Startup__Fv
// Start address: 0x2be4f0
void zNPCMgr_Startup()
{
	// Line 192, Address: 0x2be4f0, Func Offset: 0
	// Line 194, Address: 0x2be504, Func Offset: 0x14
	// Line 201, Address: 0x2be514, Func Offset: 0x24
	// Line 205, Address: 0x2be52c, Func Offset: 0x3c
	// Line 201, Address: 0x2be534, Func Offset: 0x44
	// Line 205, Address: 0x2be538, Func Offset: 0x48
	// Line 208, Address: 0x2be5c4, Func Offset: 0xd4
	// Func End, Address: 0x2be5dc, Func Offset: 0xec
}

// zNPCMgr_GetNPCList__Fv
// Start address: 0x2be5e0
st_XORDEREDARRAY* zNPCMgr_GetNPCList()
{
	// Line 187, Address: 0x2be5e0, Func Offset: 0
	// Func End, Address: 0x2be5e8, Func Offset: 0x8
}

// zNPCMgrSelf__Fv
// Start address: 0x2be5f0
zNPCMgr* zNPCMgrSelf()
{
	// Line 180, Address: 0x2be5f0, Func Offset: 0
	// Func End, Address: 0x2be5f8, Func Offset: 0x8
}

