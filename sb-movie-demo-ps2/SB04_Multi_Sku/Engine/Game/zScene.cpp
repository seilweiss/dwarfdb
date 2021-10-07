



uint8 zSceneLoadPackFile(uint32 id, int32 options, uint8 noLocalized, int8* filename);
void zSceneSpawnRandomBubbles();
uint32 zScene_ScreenAdjustMode();
void zSceneSetOldScreenAdj();
void zSceneEnableScreenAdj(uint32 enable);
void zSceneEnableVisited(zScene* s);
void zSceneCardCheckStartup_set(int32 needed, int32 available, int32 files);
void zScene_UpdateFlyToInterface();
uint32 zSceneGetLevelIndex();
int8* zSceneGetLevelName(uint32 sceneID);
void zSceneMemLvlChkCB();
int8* zSceneGetName(xBase* b);
int8* zSceneGetName(uint32 gameID);
xBase* zSceneFindObject(uint32 gameID);
void zSceneObjHashtableAdd(uint32 id, xBase* base);
void zSceneRender();
void zSceneRenderPostFX();
void zSceneRenderPreFX();
void zSceneUpdate(float32 elapsedSec);
int32 zSceneSetup_serialTraverseCB(uint32 clientID, xSerial* xser);
void zSceneResetLightKits();
void zSceneSetup();
void DeactivateCB(xBase* base);
void ActivateCB(xBase* base);
void zSceneDiskSpin();
void zSceneStoreCheckPoint(xVec3& pos, float32 rot, uint32 initialCameraID);
void zSceneStoreCheckPoint(uint32 initialCameraID);
void zSceneReset();
void zSceneLoad(zScene* ent);
void zSceneSave(zScene* ent);
void zSceneSwitch(_zPortal* p, int32 forceSameScene);
void zSceneUpdateSFXWidgets();
void zSceneExit(int32 beginReload);
void zSceneInit(uint32 theSceneID, int32 reloadInProgress);
uint32 BaseTypeNeedsUpdate(uint8 baseType);
void PipeForAllSceneModels(void(*pipeCB)(RpAtomic*, xModelPipe&, uint32));
void PipeAddStuffCB(RpAtomic* data, xModelPipe& pipe);
void PipeCountStuffCB();
void zSceneSet(xBase* b, int32 idx);
uint32 zSceneInitFunc_Dispatcher(zScene* s, zSceneObjectInstanceDesc* desc, uint32 base_idx);
uint32 zSceneInitFunc_LobMaster(uint32 base_idx);
uint32 zSceneInitFunc_Volume(zScene* s, zSceneObjectInstanceDesc* desc, uint32 base_idx);
uint32 zSceneInitFunc_Surface(zScene* s, zSceneObjectInstanceDesc* desc, uint32 base_idx);
uint32 zSceneInitFunc_Camera(zScene* s, zSceneObjectInstanceDesc* desc, uint32 base_idx);
uint32 zSceneInitFunc_Player(zScene* s, zSceneObjectInstanceDesc* desc, uint32 base_idx);
uint32 zSceneInitFunc_MovePoint(zScene* s, zSceneObjectInstanceDesc* desc, uint32 base_idx);
uint32 zSceneInitFunc_Default(zScene* s, zSceneObjectInstanceDesc* desc, uint32 base_idx);
uint32 zSceneInitFunc_DefaultEnt(zScene* s, zSceneObjectInstanceDesc* desc, uint32 base_idx);
uint32 init_dynamic_type(zScene& s, uint32 index, dynamic_type_data& d);

// zSceneLoadPackFile__FUiibPCc
// Start address: 0x2ee7f0
uint8 zSceneLoadPackFile(uint32 id, int32 options, uint8 noLocalized, int8* filename)
{
	int32 versionNumber;
	int32 versionNumber;
	int8 buffer[256];
	int8* token;
	// Line 7452, Address: 0x2ee7f0, Func Offset: 0
	// Line 7458, Address: 0x2ee814, Func Offset: 0x24
	// Line 7460, Address: 0x2ee84c, Func Offset: 0x5c
	// Line 7462, Address: 0x2ee860, Func Offset: 0x70
	// Line 7465, Address: 0x2ee868, Func Offset: 0x78
	// Line 7469, Address: 0x2ee874, Func Offset: 0x84
	// Line 7472, Address: 0x2ee894, Func Offset: 0xa4
	// Line 7475, Address: 0x2ee8a0, Func Offset: 0xb0
	// Line 7478, Address: 0x2ee8b8, Func Offset: 0xc8
	// Line 7481, Address: 0x2ee8c0, Func Offset: 0xd0
	// Line 7482, Address: 0x2ee8d4, Func Offset: 0xe4
	// Line 7483, Address: 0x2ee8dc, Func Offset: 0xec
	// Line 7486, Address: 0x2ee8fc, Func Offset: 0x10c
	// Line 7492, Address: 0x2ee914, Func Offset: 0x124
	// Line 7495, Address: 0x2ee928, Func Offset: 0x138
	// Line 7499, Address: 0x2ee930, Func Offset: 0x140
	// Line 7502, Address: 0x2ee950, Func Offset: 0x160
	// Line 7505, Address: 0x2ee95c, Func Offset: 0x16c
	// Line 7485, Address: 0x2ee974, Func Offset: 0x184
	// Line 7505, Address: 0x2ee97c, Func Offset: 0x18c
	// Line 7489, Address: 0x2ee990, Func Offset: 0x1a0
	// Line 7505, Address: 0x2ee99c, Func Offset: 0x1ac
	// Line 7506, Address: 0x2ee9ac, Func Offset: 0x1bc
	// Func End, Address: 0x2ee9c8, Func Offset: 0x1d8
}

// zSceneSpawnRandomBubbles__Fv
// Start address: 0x2ee9d0
void zSceneSpawnRandomBubbles()
{
	RwCamera* currentCamera;
	RwMatrixTag* mat;
	xVec3 pos;
	float32 r;
	// Line 7400, Address: 0x2ee9d0, Func Offset: 0
	// Line 7401, Address: 0x2ee9d4, Func Offset: 0x4
	// Line 7400, Address: 0x2ee9d8, Func Offset: 0x8
	// Line 7401, Address: 0x2ee9ec, Func Offset: 0x1c
	// Line 7402, Address: 0x2ee9f0, Func Offset: 0x20
	// Line 7407, Address: 0x2eea08, Func Offset: 0x38
	// Line 7408, Address: 0x2eea0c, Func Offset: 0x3c
	// Line 7411, Address: 0x2eea4c, Func Offset: 0x7c
	// Line 7415, Address: 0x2eea68, Func Offset: 0x98
	// Line 7416, Address: 0x2eea70, Func Offset: 0xa0
	// Line 7415, Address: 0x2eea74, Func Offset: 0xa4
	// Line 7416, Address: 0x2eea78, Func Offset: 0xa8
	// Line 7417, Address: 0x2eea80, Func Offset: 0xb0
	// Line 7419, Address: 0x2eea84, Func Offset: 0xb4
	// Line 7420, Address: 0x2eeac4, Func Offset: 0xf4
	// Line 7422, Address: 0x2eeb04, Func Offset: 0x134
	// Line 7420, Address: 0x2eeb08, Func Offset: 0x138
	// Line 7422, Address: 0x2eeb0c, Func Offset: 0x13c
	// Line 7420, Address: 0x2eeb10, Func Offset: 0x140
	// Line 7425, Address: 0x2eeb14, Func Offset: 0x144
	// Line 7421, Address: 0x2eeb18, Func Offset: 0x148
	// Line 7429, Address: 0x2eeb1c, Func Offset: 0x14c
	// Line 7420, Address: 0x2eeb20, Func Offset: 0x150
	// Line 7422, Address: 0x2eeb24, Func Offset: 0x154
	// Line 7429, Address: 0x2eeb28, Func Offset: 0x158
	// Line 7420, Address: 0x2eeb30, Func Offset: 0x160
	// Line 7421, Address: 0x2eeb34, Func Offset: 0x164
	// Line 7422, Address: 0x2eeb3c, Func Offset: 0x16c
	// Line 7421, Address: 0x2eeb50, Func Offset: 0x180
	// Line 7422, Address: 0x2eeb54, Func Offset: 0x184
	// Line 7424, Address: 0x2eeb74, Func Offset: 0x1a4
	// Line 7425, Address: 0x2eeb78, Func Offset: 0x1a8
	// Line 7424, Address: 0x2eeb84, Func Offset: 0x1b4
	// Line 7425, Address: 0x2eeb88, Func Offset: 0x1b8
	// Line 7424, Address: 0x2eeb8c, Func Offset: 0x1bc
	// Line 7425, Address: 0x2eeb90, Func Offset: 0x1c0
	// Line 7424, Address: 0x2eeb9c, Func Offset: 0x1cc
	// Line 7425, Address: 0x2eeba0, Func Offset: 0x1d0
	// Line 7428, Address: 0x2eebac, Func Offset: 0x1dc
	// Line 7425, Address: 0x2eebb0, Func Offset: 0x1e0
	// Line 7427, Address: 0x2eebb4, Func Offset: 0x1e4
	// Line 7428, Address: 0x2eebbc, Func Offset: 0x1ec
	// Line 7427, Address: 0x2eebc8, Func Offset: 0x1f8
	// Line 7428, Address: 0x2eebd0, Func Offset: 0x200
	// Line 7429, Address: 0x2eebe4, Func Offset: 0x214
	// Line 7431, Address: 0x2eebec, Func Offset: 0x21c
	// Func End, Address: 0x2eec08, Func Offset: 0x238
}

// zScene_ScreenAdjustMode__Fv
// Start address: 0x2eec10
uint32 zScene_ScreenAdjustMode()
{
	// Line 7395, Address: 0x2eec10, Func Offset: 0
	// Func End, Address: 0x2eec18, Func Offset: 0x8
}

// zSceneSetOldScreenAdj__Fv
// Start address: 0x2eec20
void zSceneSetOldScreenAdj()
{
	// Line 7388, Address: 0x2eec20, Func Offset: 0
	// Line 7389, Address: 0x2eec24, Func Offset: 0x4
	// Line 7388, Address: 0x2eec28, Func Offset: 0x8
	// Line 7390, Address: 0x2eec2c, Func Offset: 0xc
	// Func End, Address: 0x2eec34, Func Offset: 0x14
}

// zSceneEnableScreenAdj__FUi
// Start address: 0x2eec40
void zSceneEnableScreenAdj(uint32 enable)
{
	// Line 7384, Address: 0x2eec40, Func Offset: 0
	// Func End, Address: 0x2eec48, Func Offset: 0x8
}

// zSceneEnableVisited__FP6zScene
// Start address: 0x2eec50
void zSceneEnableVisited(zScene* s)
{
	uint32 uiNameID;
	int8 uiName[64];
	int8* sceneName;
	int32 i;
	// Line 7357, Address: 0x2eec50, Func Offset: 0
	// Line 7362, Address: 0x2eec60, Func Offset: 0x10
	// Line 7364, Address: 0x2eec6c, Func Offset: 0x1c
	// Line 7366, Address: 0x2eec78, Func Offset: 0x28
	// Line 7367, Address: 0x2eec7c, Func Offset: 0x2c
	// Line 7366, Address: 0x2eec84, Func Offset: 0x34
	// Line 7367, Address: 0x2eec88, Func Offset: 0x38
	// Line 7368, Address: 0x2eec90, Func Offset: 0x40
	// Line 7369, Address: 0x2eec98, Func Offset: 0x48
	// Line 7371, Address: 0x2eecac, Func Offset: 0x5c
	// Line 7369, Address: 0x2eecb0, Func Offset: 0x60
	// Line 7371, Address: 0x2eecbc, Func Offset: 0x6c
	// Line 7373, Address: 0x2eecd0, Func Offset: 0x80
	// Line 7374, Address: 0x2eecdc, Func Offset: 0x8c
	// Line 7376, Address: 0x2eece8, Func Offset: 0x98
	// Line 7378, Address: 0x2eed00, Func Offset: 0xb0
	// Func End, Address: 0x2eed10, Func Offset: 0xc0
}

// zSceneCardCheckStartup_set__Fiii
// Start address: 0x2eed10
void zSceneCardCheckStartup_set(int32 needed, int32 available, int32 files)
{
	// Line 7351, Address: 0x2eed10, Func Offset: 0
	// Line 7352, Address: 0x2eed14, Func Offset: 0x4
	// Line 7354, Address: 0x2eed18, Func Offset: 0x8
	// Func End, Address: 0x2eed20, Func Offset: 0x10
}

// zScene_UpdateFlyToInterface__Ff
// Start address: 0x2eed20
void zScene_UpdateFlyToInterface()
{
	// Line 7346, Address: 0x2eed20, Func Offset: 0
	// Func End, Address: 0x2eed28, Func Offset: 0x8
}

// zSceneGetLevelIndex__Fv
// Start address: 0x2eed30
uint32 zSceneGetLevelIndex()
{
	int32 world;
	int32 task;
	// Line 7278, Address: 0x2eed30, Func Offset: 0
	// Line 7280, Address: 0x2eed34, Func Offset: 0x4
	// Line 7278, Address: 0x2eed38, Func Offset: 0x8
	// Line 7280, Address: 0x2eed3c, Func Offset: 0xc
	// Line 7281, Address: 0x2eed54, Func Offset: 0x24
	// Line 7282, Address: 0x2eed68, Func Offset: 0x38
	// Func End, Address: 0x2eed74, Func Offset: 0x44
}

// zSceneGetLevelName__FUi
// Start address: 0x2eed80
int8* zSceneGetLevelName(uint32 sceneID)
{
	int32 world;
	int32 task;
	int8 name[32];
	int8* text;
	// Line 7220, Address: 0x2eed80, Func Offset: 0
	// Line 7223, Address: 0x2eed88, Func Offset: 0x8
	// Line 7236, Address: 0x2eed98, Func Offset: 0x18
	// Line 7246, Address: 0x2eeda0, Func Offset: 0x20
	// Line 7247, Address: 0x2eedcc, Func Offset: 0x4c
	// Func End, Address: 0x2eedd8, Func Offset: 0x58
}

// zSceneMemLvlChkCB__Fv
// Start address: 0x2eede0
void zSceneMemLvlChkCB()
{
	// Line 7107, Address: 0x2eede0, Func Offset: 0
	// Func End, Address: 0x2eede8, Func Offset: 0x8
}

// zSceneGetName__FP5xBase
// Start address: 0x2eedf0
int8* zSceneGetName(xBase* b)
{
	int8* n;
	// Line 6953, Address: 0x2eedf0, Func Offset: 0
	// Line 6956, Address: 0x2eedf4, Func Offset: 0x4
	// Line 6958, Address: 0x2eedfc, Func Offset: 0xc
	// Line 6959, Address: 0x2eee04, Func Offset: 0x14
	// Line 6960, Address: 0x2eee0c, Func Offset: 0x1c
	// Line 6963, Address: 0x2eee14, Func Offset: 0x24
	// Line 6964, Address: 0x2eee1c, Func Offset: 0x2c
	// Func End, Address: 0x2eee28, Func Offset: 0x38
}

// zSceneGetName__FUi
// Start address: 0x2eee30
int8* zSceneGetName(uint32 gameID)
{
	int8* n;
	// Line 6939, Address: 0x2eee30, Func Offset: 0
	// Line 6940, Address: 0x2eee34, Func Offset: 0x4
	// Line 6939, Address: 0x2eee38, Func Offset: 0x8
	// Line 6940, Address: 0x2eee40, Func Offset: 0x10
	// Line 6941, Address: 0x2eee9c, Func Offset: 0x6c
	// Line 6943, Address: 0x2eeea4, Func Offset: 0x74
	// Line 6940, Address: 0x2eeec4, Func Offset: 0x94
	// Line 6943, Address: 0x2eeecc, Func Offset: 0x9c
	// Line 6945, Address: 0x2eeed8, Func Offset: 0xa8
	// Line 6947, Address: 0x2eeee0, Func Offset: 0xb0
	// Line 6950, Address: 0x2eeef8, Func Offset: 0xc8
	// Func End, Address: 0x2eef04, Func Offset: 0xd4
}

// zSceneFindObject__FUi
// Start address: 0x2eef10
xBase* zSceneFindObject(uint32 gameID)
{
	// Line 6914, Address: 0x2eef10, Func Offset: 0
	// Line 6916, Address: 0x2eef14, Func Offset: 0x4
	// Line 6936, Address: 0x2eef84, Func Offset: 0x74
	// Func End, Address: 0x2eef8c, Func Offset: 0x7c
}

// zSceneObjHashtableAdd__FUiP5xBase
// Start address: 0x2eef90
void zSceneObjHashtableAdd(uint32 id, xBase* base)
{
	int32 k;
	int32 chkd;
	IDBasePair* idbp;
	// Line 6847, Address: 0x2eef90, Func Offset: 0
	// Line 6850, Address: 0x2eef94, Func Offset: 0x4
	// Line 6849, Address: 0x2eef98, Func Offset: 0x8
	// Line 6851, Address: 0x2eef9c, Func Offset: 0xc
	// Line 6852, Address: 0x2eefac, Func Offset: 0x1c
	// Line 6853, Address: 0x2eefb4, Func Offset: 0x24
	// Line 6855, Address: 0x2eefc0, Func Offset: 0x30
	// Line 6856, Address: 0x2eefc4, Func Offset: 0x34
	// Line 6857, Address: 0x2eefc8, Func Offset: 0x38
	// Line 6858, Address: 0x2eefd0, Func Offset: 0x40
	// Line 6861, Address: 0x2eefd8, Func Offset: 0x48
	// Line 6862, Address: 0x2eefdc, Func Offset: 0x4c
	// Line 6863, Address: 0x2eefe4, Func Offset: 0x54
	// Line 6865, Address: 0x2eefe8, Func Offset: 0x58
	// Line 6866, Address: 0x2eefec, Func Offset: 0x5c
	// Line 6869, Address: 0x2eeff8, Func Offset: 0x68
	// Func End, Address: 0x2ef000, Func Offset: 0x70
}

// zSceneRender__Fv
// Start address: 0x2ef000
void zSceneRender()
{
	// Line 6719, Address: 0x2ef000, Func Offset: 0
	// Line 6728, Address: 0x2ef004, Func Offset: 0x4
	// Line 6719, Address: 0x2ef008, Func Offset: 0x8
	// Line 6728, Address: 0x2ef018, Func Offset: 0x18
	// Line 6735, Address: 0x2ef0c8, Func Offset: 0xc8
	// Line 6737, Address: 0x2ef0dc, Func Offset: 0xdc
	// Line 6738, Address: 0x2ef0e4, Func Offset: 0xe4
	// Line 6739, Address: 0x2ef0ec, Func Offset: 0xec
	// Line 6740, Address: 0x2ef0f8, Func Offset: 0xf8
	// Line 6741, Address: 0x2ef104, Func Offset: 0x104
	// Line 6742, Address: 0x2ef10c, Func Offset: 0x10c
	// Line 6762, Address: 0x2ef11c, Func Offset: 0x11c
	// Line 6775, Address: 0x2ef124, Func Offset: 0x124
	// Line 6782, Address: 0x2ef13c, Func Offset: 0x13c
	// Func End, Address: 0x2ef14c, Func Offset: 0x14c
}

// zSceneRenderPostFX__Fv
// Start address: 0x2ef160
void zSceneRenderPostFX()
{
	eGameMode mode;
	// Line 6520, Address: 0x2ef160, Func Offset: 0
	// Line 6525, Address: 0x2ef178, Func Offset: 0x18
	// Line 6536, Address: 0x2ef18c, Func Offset: 0x2c
	// Line 6542, Address: 0x2ef1a0, Func Offset: 0x40
	// Line 6543, Address: 0x2ef1b4, Func Offset: 0x54
	// Line 6546, Address: 0x2ef1c4, Func Offset: 0x64
	// Line 6547, Address: 0x2ef1d4, Func Offset: 0x74
	// Line 6555, Address: 0x2ef1e4, Func Offset: 0x84
	// Line 6558, Address: 0x2ef1ec, Func Offset: 0x8c
	// Line 6561, Address: 0x2ef1f4, Func Offset: 0x94
	// Line 6564, Address: 0x2ef200, Func Offset: 0xa0
	// Line 6566, Address: 0x2ef208, Func Offset: 0xa8
	// Line 6567, Address: 0x2ef218, Func Offset: 0xb8
	// Line 6569, Address: 0x2ef220, Func Offset: 0xc0
	// Line 6575, Address: 0x2ef230, Func Offset: 0xd0
	// Line 6576, Address: 0x2ef240, Func Offset: 0xe0
	// Line 6585, Address: 0x2ef258, Func Offset: 0xf8
	// Line 6588, Address: 0x2ef260, Func Offset: 0x100
	// Line 6590, Address: 0x2ef270, Func Offset: 0x110
	// Line 6591, Address: 0x2ef278, Func Offset: 0x118
	// Line 6599, Address: 0x2ef280, Func Offset: 0x120
	// Line 6600, Address: 0x2ef288, Func Offset: 0x128
	// Line 6604, Address: 0x2ef290, Func Offset: 0x130
	// Line 6605, Address: 0x2ef2a8, Func Offset: 0x148
	// Line 6628, Address: 0x2ef2b0, Func Offset: 0x150
	// Line 6631, Address: 0x2ef2bc, Func Offset: 0x15c
	// Line 6633, Address: 0x2ef2d4, Func Offset: 0x174
	// Line 6636, Address: 0x2ef2e8, Func Offset: 0x188
	// Line 6638, Address: 0x2ef2f0, Func Offset: 0x190
	// Line 6640, Address: 0x2ef2f8, Func Offset: 0x198
	// Line 6642, Address: 0x2ef308, Func Offset: 0x1a8
	// Line 6643, Address: 0x2ef374, Func Offset: 0x214
	// Line 6644, Address: 0x2ef378, Func Offset: 0x218
	// Line 6660, Address: 0x2ef388, Func Offset: 0x228
	// Line 6661, Address: 0x2ef390, Func Offset: 0x230
	// Line 6681, Address: 0x2ef3a0, Func Offset: 0x240
	// Line 6682, Address: 0x2ef3b4, Func Offset: 0x254
	// Line 6685, Address: 0x2ef3d8, Func Offset: 0x278
	// Line 6691, Address: 0x2ef3f8, Func Offset: 0x298
	// Line 6696, Address: 0x2ef400, Func Offset: 0x2a0
	// Line 6698, Address: 0x2ef408, Func Offset: 0x2a8
	// Line 6706, Address: 0x2ef41c, Func Offset: 0x2bc
	// Line 6526, Address: 0x2ef43c, Func Offset: 0x2dc
	// Line 6706, Address: 0x2ef440, Func Offset: 0x2e0
	// Line 6648, Address: 0x2ef484, Func Offset: 0x324
	// Line 6706, Address: 0x2ef488, Func Offset: 0x328
	// Line 6648, Address: 0x2ef48c, Func Offset: 0x32c
	// Line 6706, Address: 0x2ef49c, Func Offset: 0x33c
	// Line 6699, Address: 0x2ef4a4, Func Offset: 0x344
	// Line 6706, Address: 0x2ef4a8, Func Offset: 0x348
	// Func End, Address: 0x2ef4e0, Func Offset: 0x380
}

// zSceneRenderPreFX__Fv
// Start address: 0x2ef4f0
void zSceneRenderPreFX()
{
	zScene* s;
	xScene* sc;
	uint32 shadowHackCase;
	xEnt** entptr;
	xEnt** entlast;
	xEnt* ent;
	xLightKit* objLightKit;
	zParSys* psys;
	int32 i;
	// Line 5824, Address: 0x2ef4f0, Func Offset: 0
	// Line 5828, Address: 0x2ef4f4, Func Offset: 0x4
	// Line 5824, Address: 0x2ef4f8, Func Offset: 0x8
	// Line 5828, Address: 0x2ef50c, Func Offset: 0x1c
	// Line 5921, Address: 0x2ef514, Func Offset: 0x24
	// Line 5922, Address: 0x2ef518, Func Offset: 0x28
	// Line 5921, Address: 0x2ef51c, Func Offset: 0x2c
	// Line 5932, Address: 0x2ef520, Func Offset: 0x30
	// Line 5922, Address: 0x2ef528, Func Offset: 0x38
	// Line 5932, Address: 0x2ef534, Func Offset: 0x44
	// Line 5934, Address: 0x2ef53c, Func Offset: 0x4c
	// Line 5939, Address: 0x2ef548, Func Offset: 0x58
	// Line 5949, Address: 0x2ef558, Func Offset: 0x68
	// Line 5950, Address: 0x2ef560, Func Offset: 0x70
	// Line 5953, Address: 0x2ef568, Func Offset: 0x78
	// Line 5956, Address: 0x2ef570, Func Offset: 0x80
	// Line 5958, Address: 0x2ef578, Func Offset: 0x88
	// Line 5959, Address: 0x2ef580, Func Offset: 0x90
	// Line 5968, Address: 0x2ef588, Func Offset: 0x98
	// Line 5978, Address: 0x2ef590, Func Offset: 0xa0
	// Line 5972, Address: 0x2ef594, Func Offset: 0xa4
	// Line 5978, Address: 0x2ef598, Func Offset: 0xa8
	// Line 5977, Address: 0x2ef59c, Func Offset: 0xac
	// Line 5978, Address: 0x2ef5a0, Func Offset: 0xb0
	// Line 5972, Address: 0x2ef5a4, Func Offset: 0xb4
	// Line 5978, Address: 0x2ef5a8, Func Offset: 0xb8
	// Line 5977, Address: 0x2ef5ac, Func Offset: 0xbc
	// Line 5978, Address: 0x2ef5b0, Func Offset: 0xc0
	// Line 5977, Address: 0x2ef5b4, Func Offset: 0xc4
	// Line 5978, Address: 0x2ef5b8, Func Offset: 0xc8
	// Line 5977, Address: 0x2ef5bc, Func Offset: 0xcc
	// Line 5990, Address: 0x2ef5c0, Func Offset: 0xd0
	// Line 5994, Address: 0x2ef5c8, Func Offset: 0xd8
	// Line 5997, Address: 0x2ef5d8, Func Offset: 0xe8
	// Line 5999, Address: 0x2ef5e0, Func Offset: 0xf0
	// Line 6001, Address: 0x2ef5e8, Func Offset: 0xf8
	// Line 6003, Address: 0x2ef5f4, Func Offset: 0x104
	// Line 6006, Address: 0x2ef5f8, Func Offset: 0x108
	// Line 6003, Address: 0x2ef5fc, Func Offset: 0x10c
	// Line 6006, Address: 0x2ef600, Func Offset: 0x110
	// Line 6008, Address: 0x2ef608, Func Offset: 0x118
	// Line 6013, Address: 0x2ef610, Func Offset: 0x120
	// Line 6015, Address: 0x2ef618, Func Offset: 0x128
	// Line 6019, Address: 0x2ef62c, Func Offset: 0x13c
	// Line 6022, Address: 0x2ef634, Func Offset: 0x144
	// Line 6025, Address: 0x2ef63c, Func Offset: 0x14c
	// Line 6033, Address: 0x2ef650, Func Offset: 0x160
	// Line 6037, Address: 0x2ef658, Func Offset: 0x168
	// Line 6038, Address: 0x2ef660, Func Offset: 0x170
	// Line 6042, Address: 0x2ef6b0, Func Offset: 0x1c0
	// Line 6047, Address: 0x2ef6d4, Func Offset: 0x1e4
	// Line 6063, Address: 0x2ef6e0, Func Offset: 0x1f0
	// Line 6066, Address: 0x2ef6f8, Func Offset: 0x208
	// Line 6068, Address: 0x2ef704, Func Offset: 0x214
	// Line 6077, Address: 0x2ef714, Func Offset: 0x224
	// Line 6078, Address: 0x2ef71c, Func Offset: 0x22c
	// Line 6082, Address: 0x2ef724, Func Offset: 0x234
	// Line 6088, Address: 0x2ef7c0, Func Offset: 0x2d0
	// Line 6092, Address: 0x2ef7c8, Func Offset: 0x2d8
	// Line 6093, Address: 0x2ef7d0, Func Offset: 0x2e0
	// Line 6103, Address: 0x2ef7d8, Func Offset: 0x2e8
	// Line 6105, Address: 0x2ef7e0, Func Offset: 0x2f0
	// Line 6113, Address: 0x2ef7f0, Func Offset: 0x300
	// Line 6115, Address: 0x2ef800, Func Offset: 0x310
	// Line 6120, Address: 0x2ef80c, Func Offset: 0x31c
	// Line 6131, Address: 0x2ef81c, Func Offset: 0x32c
	// Line 6137, Address: 0x2ef828, Func Offset: 0x338
	// Line 6142, Address: 0x2ef830, Func Offset: 0x340
	// Line 6154, Address: 0x2ef848, Func Offset: 0x358
	// Line 6159, Address: 0x2ef870, Func Offset: 0x380
	// Line 6171, Address: 0x2ef878, Func Offset: 0x388
	// Line 6174, Address: 0x2ef880, Func Offset: 0x390
	// Line 6178, Address: 0x2ef89c, Func Offset: 0x3ac
	// Line 6184, Address: 0x2ef8ac, Func Offset: 0x3bc
	// Line 6192, Address: 0x2ef8c0, Func Offset: 0x3d0
	// Line 6170, Address: 0x2ef964, Func Offset: 0x474
	// Line 6165, Address: 0x2ef96c, Func Offset: 0x47c
	// Line 6192, Address: 0x2ef970, Func Offset: 0x480
	// Line 6194, Address: 0x2ef998, Func Offset: 0x4a8
	// Line 6203, Address: 0x2ef9a0, Func Offset: 0x4b0
	// Line 6206, Address: 0x2ef9a8, Func Offset: 0x4b8
	// Line 6209, Address: 0x2ef9b0, Func Offset: 0x4c0
	// Line 6214, Address: 0x2ef9b8, Func Offset: 0x4c8
	// Line 6222, Address: 0x2ef9c0, Func Offset: 0x4d0
	// Line 6229, Address: 0x2ef9c8, Func Offset: 0x4d8
	// Line 6236, Address: 0x2ef9d0, Func Offset: 0x4e0
	// Line 6237, Address: 0x2ef9e0, Func Offset: 0x4f0
	// Line 6238, Address: 0x2ef9e8, Func Offset: 0x4f8
	// Line 6249, Address: 0x2ef9f0, Func Offset: 0x500
	// Line 6258, Address: 0x2ef9f8, Func Offset: 0x508
	// Line 6264, Address: 0x2efa00, Func Offset: 0x510
	// Line 6265, Address: 0x2efa08, Func Offset: 0x518
	// Line 6270, Address: 0x2efa10, Func Offset: 0x520
	// Line 6271, Address: 0x2efa20, Func Offset: 0x530
	// Line 6272, Address: 0x2efa28, Func Offset: 0x538
	// Line 6290, Address: 0x2efa30, Func Offset: 0x540
	// Line 6294, Address: 0x2efa3c, Func Offset: 0x54c
	// Line 6295, Address: 0x2efa44, Func Offset: 0x554
	// Line 6298, Address: 0x2efa4c, Func Offset: 0x55c
	// Line 6299, Address: 0x2efa54, Func Offset: 0x564
	// Line 6300, Address: 0x2efa5c, Func Offset: 0x56c
	// Line 6303, Address: 0x2efa64, Func Offset: 0x574
	// Line 6312, Address: 0x2efa6c, Func Offset: 0x57c
	// Line 6313, Address: 0x2efa74, Func Offset: 0x584
	// Line 6317, Address: 0x2efa7c, Func Offset: 0x58c
	// Line 6318, Address: 0x2efa8c, Func Offset: 0x59c
	// Line 6319, Address: 0x2efa94, Func Offset: 0x5a4
	// Line 6326, Address: 0x2efa9c, Func Offset: 0x5ac
	// Line 6332, Address: 0x2efaa8, Func Offset: 0x5b8
	// Line 6335, Address: 0x2efab8, Func Offset: 0x5c8
	// Line 6336, Address: 0x2efac0, Func Offset: 0x5d0
	// Line 6345, Address: 0x2efad8, Func Offset: 0x5e8
	// Line 6356, Address: 0x2efae0, Func Offset: 0x5f0
	// Line 6366, Address: 0x2efaec, Func Offset: 0x5fc
	// Line 6367, Address: 0x2efaf4, Func Offset: 0x604
	// Line 6376, Address: 0x2efafc, Func Offset: 0x60c
	// Line 6400, Address: 0x2efb0c, Func Offset: 0x61c
	// Line 6401, Address: 0x2efb1c, Func Offset: 0x62c
	// Line 6402, Address: 0x2efb24, Func Offset: 0x634
	// Line 6417, Address: 0x2efb2c, Func Offset: 0x63c
	// Line 6420, Address: 0x2efb34, Func Offset: 0x644
	// Line 6421, Address: 0x2efb3c, Func Offset: 0x64c
	// Line 6425, Address: 0x2efb4c, Func Offset: 0x65c
	// Line 6426, Address: 0x2efb5c, Func Offset: 0x66c
	// Line 6427, Address: 0x2efb64, Func Offset: 0x674
	// Line 6433, Address: 0x2efb6c, Func Offset: 0x67c
	// Line 6436, Address: 0x2efb74, Func Offset: 0x684
	// Line 6440, Address: 0x2efb7c, Func Offset: 0x68c
	// Line 6442, Address: 0x2efb84, Func Offset: 0x694
	// Line 6447, Address: 0x2efb8c, Func Offset: 0x69c
	// Line 6448, Address: 0x2efb9c, Func Offset: 0x6ac
	// Line 6449, Address: 0x2efba4, Func Offset: 0x6b4
	// Line 6457, Address: 0x2efbac, Func Offset: 0x6bc
	// Line 6458, Address: 0x2efbc0, Func Offset: 0x6d0
	// Line 6459, Address: 0x2efbc8, Func Offset: 0x6d8
	// Line 6469, Address: 0x2efbd0, Func Offset: 0x6e0
	// Line 6471, Address: 0x2efbd8, Func Offset: 0x6e8
	// Line 6472, Address: 0x2efbe0, Func Offset: 0x6f0
	// Line 6474, Address: 0x2efbe8, Func Offset: 0x6f8
	// Line 6478, Address: 0x2efc00, Func Offset: 0x710
	// Line 6479, Address: 0x2efc10, Func Offset: 0x720
	// Line 6480, Address: 0x2efc18, Func Offset: 0x728
	// Line 6491, Address: 0x2efc20, Func Offset: 0x730
	// Line 6493, Address: 0x2efc28, Func Offset: 0x738
	// Func End, Address: 0x2efc48, Func Offset: 0x758
}

// zSceneUpdate__Ff
// Start address: 0x2efc50
void zSceneUpdate(float32 elapsedSec)
{
	uint32 i;
	int32 isPaused;
	float32 apadx;
	float32 apady;
	zScene* pScene;
	xBase** ppBaseObjs;
	xBase* bob;
	xEnt* ent;
	int32 mode;
	// Line 5030, Address: 0x2efc50, Func Offset: 0
	// Line 5031, Address: 0x2efc58, Func Offset: 0x8
	// Line 5030, Address: 0x2efc5c, Func Offset: 0xc
	// Line 5031, Address: 0x2efc84, Func Offset: 0x34
	// Line 5030, Address: 0x2efc88, Func Offset: 0x38
	// Line 5031, Address: 0x2efc8c, Func Offset: 0x3c
	// Line 5037, Address: 0x2efc94, Func Offset: 0x44
	// Line 5049, Address: 0x2efca0, Func Offset: 0x50
	// Line 5052, Address: 0x2efca8, Func Offset: 0x58
	// Line 5055, Address: 0x2efcb0, Func Offset: 0x60
	// Line 5056, Address: 0x2efcb8, Func Offset: 0x68
	// Line 5060, Address: 0x2efde0, Func Offset: 0x190
	// Line 5061, Address: 0x2efde8, Func Offset: 0x198
	// Line 5065, Address: 0x2efe00, Func Offset: 0x1b0
	// Line 5067, Address: 0x2efe08, Func Offset: 0x1b8
	// Line 5068, Address: 0x2efe28, Func Offset: 0x1d8
	// Line 5093, Address: 0x2efe30, Func Offset: 0x1e0
	// Line 5089, Address: 0x2efe34, Func Offset: 0x1e4
	// Line 5093, Address: 0x2efe38, Func Offset: 0x1e8
	// Line 5095, Address: 0x2efe44, Func Offset: 0x1f4
	// Line 5093, Address: 0x2efe48, Func Offset: 0x1f8
	// Line 5095, Address: 0x2efe4c, Func Offset: 0x1fc
	// Line 5101, Address: 0x2efe5c, Func Offset: 0x20c
	// Line 5107, Address: 0x2efe74, Func Offset: 0x224
	// Line 5109, Address: 0x2efe94, Func Offset: 0x244
	// Line 5110, Address: 0x2efe98, Func Offset: 0x248
	// Line 5112, Address: 0x2efebc, Func Offset: 0x26c
	// Line 5114, Address: 0x2efedc, Func Offset: 0x28c
	// Line 5115, Address: 0x2efee0, Func Offset: 0x290
	// Line 5114, Address: 0x2efee4, Func Offset: 0x294
	// Line 5115, Address: 0x2efee8, Func Offset: 0x298
	// Line 5114, Address: 0x2efeec, Func Offset: 0x29c
	// Line 5115, Address: 0x2efef0, Func Offset: 0x2a0
	// Line 5117, Address: 0x2eff0c, Func Offset: 0x2bc
	// Line 5119, Address: 0x2eff2c, Func Offset: 0x2dc
	// Line 5120, Address: 0x2eff30, Func Offset: 0x2e0
	// Line 5122, Address: 0x2eff54, Func Offset: 0x304
	// Line 5124, Address: 0x2eff74, Func Offset: 0x324
	// Line 5125, Address: 0x2eff78, Func Offset: 0x328
	// Line 5124, Address: 0x2eff7c, Func Offset: 0x32c
	// Line 5125, Address: 0x2eff80, Func Offset: 0x330
	// Line 5124, Address: 0x2eff84, Func Offset: 0x334
	// Line 5125, Address: 0x2eff88, Func Offset: 0x338
	// Line 5128, Address: 0x2effa4, Func Offset: 0x354
	// Line 5131, Address: 0x2effb0, Func Offset: 0x360
	// Line 5134, Address: 0x2effbc, Func Offset: 0x36c
	// Line 5137, Address: 0x2effc8, Func Offset: 0x378
	// Line 5138, Address: 0x2effd4, Func Offset: 0x384
	// Line 5142, Address: 0x2efff0, Func Offset: 0x3a0
	// Line 5145, Address: 0x2f0000, Func Offset: 0x3b0
	// Line 5149, Address: 0x2f0008, Func Offset: 0x3b8
	// Line 5145, Address: 0x2f000c, Func Offset: 0x3bc
	// Line 5146, Address: 0x2f0010, Func Offset: 0x3c0
	// Line 5149, Address: 0x2f0014, Func Offset: 0x3c4
	// Line 5145, Address: 0x2f0018, Func Offset: 0x3c8
	// Line 5149, Address: 0x2f0020, Func Offset: 0x3d0
	// Line 5145, Address: 0x2f0024, Func Offset: 0x3d4
	// Line 5146, Address: 0x2f002c, Func Offset: 0x3dc
	// Line 5149, Address: 0x2f0034, Func Offset: 0x3e4
	// Line 5146, Address: 0x2f0038, Func Offset: 0x3e8
	// Line 5149, Address: 0x2f003c, Func Offset: 0x3ec
	// Line 5150, Address: 0x2f0044, Func Offset: 0x3f4
	// Line 5151, Address: 0x2f0064, Func Offset: 0x414
	// Line 5152, Address: 0x2f0084, Func Offset: 0x434
	// Line 5160, Address: 0x2f00a8, Func Offset: 0x458
	// Line 5176, Address: 0x2f00b0, Func Offset: 0x460
	// Line 5162, Address: 0x2f00b4, Func Offset: 0x464
	// Line 5176, Address: 0x2f00b8, Func Offset: 0x468
	// Line 5177, Address: 0x2f00c0, Func Offset: 0x470
	// Line 5178, Address: 0x2f00cc, Func Offset: 0x47c
	// Line 5196, Address: 0x2f00e4, Func Offset: 0x494
	// Line 5202, Address: 0x2f00ec, Func Offset: 0x49c
	// Line 5208, Address: 0x2f01bc, Func Offset: 0x56c
	// Line 5056, Address: 0x2f01cc, Func Offset: 0x57c
	// Line 5208, Address: 0x2f01d8, Func Offset: 0x588
	// Line 5056, Address: 0x2f01e8, Func Offset: 0x598
	// Line 5208, Address: 0x2f01ec, Func Offset: 0x59c
	// Line 5056, Address: 0x2f01f4, Func Offset: 0x5a4
	// Line 5208, Address: 0x2f01f8, Func Offset: 0x5a8
	// Line 5056, Address: 0x2f0204, Func Offset: 0x5b4
	// Line 5208, Address: 0x2f0218, Func Offset: 0x5c8
	// Line 5056, Address: 0x2f0228, Func Offset: 0x5d8
	// Line 5208, Address: 0x2f022c, Func Offset: 0x5dc
	// Line 5056, Address: 0x2f0234, Func Offset: 0x5e4
	// Line 5208, Address: 0x2f0238, Func Offset: 0x5e8
	// Line 5056, Address: 0x2f0240, Func Offset: 0x5f0
	// Line 5208, Address: 0x2f024c, Func Offset: 0x5fc
	// Line 5056, Address: 0x2f0254, Func Offset: 0x604
	// Line 5208, Address: 0x2f0258, Func Offset: 0x608
	// Line 5056, Address: 0x2f0260, Func Offset: 0x610
	// Line 5208, Address: 0x2f02b4, Func Offset: 0x664
	// Line 5063, Address: 0x2f02bc, Func Offset: 0x66c
	// Line 5208, Address: 0x2f02c0, Func Offset: 0x670
	// Line 5129, Address: 0x2f02f4, Func Offset: 0x6a4
	// Line 5130, Address: 0x2f0308, Func Offset: 0x6b8
	// Line 5208, Address: 0x2f0310, Func Offset: 0x6c0
	// Line 5132, Address: 0x2f0314, Func Offset: 0x6c4
	// Line 5133, Address: 0x2f0328, Func Offset: 0x6d8
	// Line 5208, Address: 0x2f0330, Func Offset: 0x6e0
	// Line 5135, Address: 0x2f0334, Func Offset: 0x6e4
	// Line 5136, Address: 0x2f0348, Func Offset: 0x6f8
	// Line 5208, Address: 0x2f0350, Func Offset: 0x700
	// Line 5143, Address: 0x2f0364, Func Offset: 0x714
	// Line 5208, Address: 0x2f037c, Func Offset: 0x72c
	// Line 5206, Address: 0x2f03a4, Func Offset: 0x754
	// Line 5208, Address: 0x2f03a8, Func Offset: 0x758
	// Line 5212, Address: 0x2f03ac, Func Offset: 0x75c
	// Line 5213, Address: 0x2f03b0, Func Offset: 0x760
	// Line 5212, Address: 0x2f03b8, Func Offset: 0x768
	// Line 5215, Address: 0x2f03c4, Func Offset: 0x774
	// Line 5213, Address: 0x2f03c8, Func Offset: 0x778
	// Line 5215, Address: 0x2f03d4, Func Offset: 0x784
	// Line 5212, Address: 0x2f03d8, Func Offset: 0x788
	// Line 5215, Address: 0x2f03dc, Func Offset: 0x78c
	// Line 5212, Address: 0x2f03ec, Func Offset: 0x79c
	// Line 5213, Address: 0x2f0408, Func Offset: 0x7b8
	// Line 5215, Address: 0x2f041c, Func Offset: 0x7cc
	// Line 5217, Address: 0x2f0424, Func Offset: 0x7d4
	// Line 5219, Address: 0x2f0434, Func Offset: 0x7e4
	// Line 5222, Address: 0x2f043c, Func Offset: 0x7ec
	// Line 5225, Address: 0x2f0448, Func Offset: 0x7f8
	// Line 5228, Address: 0x2f0454, Func Offset: 0x804
	// Line 5232, Address: 0x2f05fc, Func Offset: 0x9ac
	// Line 5233, Address: 0x2f0604, Func Offset: 0x9b4
	// Line 5234, Address: 0x2f0614, Func Offset: 0x9c4
	// Line 5255, Address: 0x2f061c, Func Offset: 0x9cc
	// Line 5234, Address: 0x2f0620, Func Offset: 0x9d0
	// Line 5258, Address: 0x2f0624, Func Offset: 0x9d4
	// Line 5259, Address: 0x2f0634, Func Offset: 0x9e4
	// Line 5260, Address: 0x2f0644, Func Offset: 0x9f4
	// Line 5262, Address: 0x2f064c, Func Offset: 0x9fc
	// Line 5264, Address: 0x2f0650, Func Offset: 0xa00
	// Line 5265, Address: 0x2f0654, Func Offset: 0xa04
	// Line 5266, Address: 0x2f0664, Func Offset: 0xa14
	// Line 5268, Address: 0x2f0674, Func Offset: 0xa24
	// Line 5270, Address: 0x2f067c, Func Offset: 0xa2c
	// Line 5305, Address: 0x2f0680, Func Offset: 0xa30
	// Line 5310, Address: 0x2f069c, Func Offset: 0xa4c
	// Line 5311, Address: 0x2f06a0, Func Offset: 0xa50
	// Line 5312, Address: 0x2f06a8, Func Offset: 0xa58
	// Line 5315, Address: 0x2f06e8, Func Offset: 0xa98
	// Line 5317, Address: 0x2f06f0, Func Offset: 0xaa0
	// Line 5320, Address: 0x2f06f8, Func Offset: 0xaa8
	// Line 5321, Address: 0x2f0700, Func Offset: 0xab0
	// Line 5322, Address: 0x2f0710, Func Offset: 0xac0
	// Line 5326, Address: 0x2f0718, Func Offset: 0xac8
	// Line 5327, Address: 0x2f0720, Func Offset: 0xad0
	// Line 5329, Address: 0x2f0730, Func Offset: 0xae0
	// Line 5333, Address: 0x2f0738, Func Offset: 0xae8
	// Line 5334, Address: 0x2f0750, Func Offset: 0xb00
	// Line 5336, Address: 0x2f0760, Func Offset: 0xb10
	// Line 5339, Address: 0x2f0768, Func Offset: 0xb18
	// Line 5340, Address: 0x2f0770, Func Offset: 0xb20
	// Line 5341, Address: 0x2f0780, Func Offset: 0xb30
	// Line 5344, Address: 0x2f0788, Func Offset: 0xb38
	// Line 5350, Address: 0x2f07a8, Func Offset: 0xb58
	// Line 5351, Address: 0x2f07b0, Func Offset: 0xb60
	// Line 5353, Address: 0x2f07c0, Func Offset: 0xb70
	// Line 5356, Address: 0x2f07c8, Func Offset: 0xb78
	// Line 5357, Address: 0x2f07d0, Func Offset: 0xb80
	// Line 5359, Address: 0x2f07e0, Func Offset: 0xb90
	// Line 5362, Address: 0x2f07e8, Func Offset: 0xb98
	// Line 5363, Address: 0x2f07f0, Func Offset: 0xba0
	// Line 5365, Address: 0x2f0800, Func Offset: 0xbb0
	// Line 5367, Address: 0x2f0808, Func Offset: 0xbb8
	// Line 5370, Address: 0x2f0810, Func Offset: 0xbc0
	// Line 5372, Address: 0x2f081c, Func Offset: 0xbcc
	// Line 5374, Address: 0x2f0824, Func Offset: 0xbd4
	// Line 5375, Address: 0x2f0828, Func Offset: 0xbd8
	// Line 5378, Address: 0x2f0830, Func Offset: 0xbe0
	// Line 5380, Address: 0x2f083c, Func Offset: 0xbec
	// Line 5384, Address: 0x2f0844, Func Offset: 0xbf4
	// Line 5385, Address: 0x2f0848, Func Offset: 0xbf8
	// Line 5386, Address: 0x2f0850, Func Offset: 0xc00
	// Line 5387, Address: 0x2f0860, Func Offset: 0xc10
	// Line 5390, Address: 0x2f0868, Func Offset: 0xc18
	// Line 5393, Address: 0x2f0870, Func Offset: 0xc20
	// Line 5305, Address: 0x2f0884, Func Offset: 0xc34
	// Line 5306, Address: 0x2f0888, Func Offset: 0xc38
	// Line 5393, Address: 0x2f0890, Func Offset: 0xc40
	// Line 5308, Address: 0x2f0898, Func Offset: 0xc48
	// Line 5393, Address: 0x2f08a0, Func Offset: 0xc50
	// Line 5345, Address: 0x2f08ac, Func Offset: 0xc5c
	// Line 5393, Address: 0x2f08f8, Func Offset: 0xca8
	// Line 5345, Address: 0x2f0900, Func Offset: 0xcb0
	// Line 5393, Address: 0x2f0904, Func Offset: 0xcb4
	// Line 5345, Address: 0x2f0910, Func Offset: 0xcc0
	// Line 5393, Address: 0x2f0914, Func Offset: 0xcc4
	// Line 5345, Address: 0x2f091c, Func Offset: 0xccc
	// Line 5393, Address: 0x2f0920, Func Offset: 0xcd0
	// Line 5345, Address: 0x2f0924, Func Offset: 0xcd4
	// Line 5393, Address: 0x2f0928, Func Offset: 0xcd8
	// Line 5345, Address: 0x2f0930, Func Offset: 0xce0
	// Line 5393, Address: 0x2f0934, Func Offset: 0xce4
	// Line 5345, Address: 0x2f0944, Func Offset: 0xcf4
	// Line 5393, Address: 0x2f0954, Func Offset: 0xd04
	// Line 5345, Address: 0x2f095c, Func Offset: 0xd0c
	// Line 5393, Address: 0x2f0974, Func Offset: 0xd24
	// Line 5345, Address: 0x2f097c, Func Offset: 0xd2c
	// Line 5393, Address: 0x2f0980, Func Offset: 0xd30
	// Line 5345, Address: 0x2f0984, Func Offset: 0xd34
	// Line 5393, Address: 0x2f098c, Func Offset: 0xd3c
	// Line 5345, Address: 0x2f09a4, Func Offset: 0xd54
	// Line 5393, Address: 0x2f09b0, Func Offset: 0xd60
	// Line 5345, Address: 0x2f09bc, Func Offset: 0xd6c
	// Line 5393, Address: 0x2f09e8, Func Offset: 0xd98
	// Line 5345, Address: 0x2f09f4, Func Offset: 0xda4
	// Line 5393, Address: 0x2f0a00, Func Offset: 0xdb0
	// Line 5345, Address: 0x2f0a10, Func Offset: 0xdc0
	// Line 5393, Address: 0x2f0a3c, Func Offset: 0xdec
	// Line 5345, Address: 0x2f0a48, Func Offset: 0xdf8
	// Line 5393, Address: 0x2f0a54, Func Offset: 0xe04
	// Line 5345, Address: 0x2f0a64, Func Offset: 0xe14
	// Line 5393, Address: 0x2f0a90, Func Offset: 0xe40
	// Line 5345, Address: 0x2f0a9c, Func Offset: 0xe4c
	// Line 5393, Address: 0x2f0aa8, Func Offset: 0xe58
	// Line 5345, Address: 0x2f0ab8, Func Offset: 0xe68
	// Line 5393, Address: 0x2f0ae4, Func Offset: 0xe94
	// Line 5345, Address: 0x2f0af0, Func Offset: 0xea0
	// Line 5393, Address: 0x2f0af8, Func Offset: 0xea8
	// Line 5345, Address: 0x2f0afc, Func Offset: 0xeac
	// Line 5393, Address: 0x2f0b08, Func Offset: 0xeb8
	// Line 5345, Address: 0x2f0b14, Func Offset: 0xec4
	// Line 5393, Address: 0x2f0b18, Func Offset: 0xec8
	// Line 5345, Address: 0x2f0b24, Func Offset: 0xed4
	// Line 5393, Address: 0x2f0b28, Func Offset: 0xed8
	// Line 5345, Address: 0x2f0b2c, Func Offset: 0xedc
	// Line 5393, Address: 0x2f0b34, Func Offset: 0xee4
	// Line 5345, Address: 0x2f0b40, Func Offset: 0xef0
	// Line 5393, Address: 0x2f0b54, Func Offset: 0xf04
	// Line 5345, Address: 0x2f0b58, Func Offset: 0xf08
	// Line 5393, Address: 0x2f0b60, Func Offset: 0xf10
	// Line 5345, Address: 0x2f0b70, Func Offset: 0xf20
	// Line 5393, Address: 0x2f0b84, Func Offset: 0xf34
	// Line 5345, Address: 0x2f0b8c, Func Offset: 0xf3c
	// Line 5393, Address: 0x2f0b98, Func Offset: 0xf48
	// Line 5345, Address: 0x2f0ba4, Func Offset: 0xf54
	// Line 5393, Address: 0x2f0ba8, Func Offset: 0xf58
	// Line 5345, Address: 0x2f0bb4, Func Offset: 0xf64
	// Line 5393, Address: 0x2f0bb8, Func Offset: 0xf68
	// Line 5345, Address: 0x2f0bbc, Func Offset: 0xf6c
	// Line 5393, Address: 0x2f0bc4, Func Offset: 0xf74
	// Line 5345, Address: 0x2f0bd0, Func Offset: 0xf80
	// Line 5393, Address: 0x2f0be4, Func Offset: 0xf94
	// Line 5345, Address: 0x2f0be8, Func Offset: 0xf98
	// Line 5393, Address: 0x2f0bf0, Func Offset: 0xfa0
	// Line 5345, Address: 0x2f0c00, Func Offset: 0xfb0
	// Line 5393, Address: 0x2f0c14, Func Offset: 0xfc4
	// Line 5345, Address: 0x2f0c18, Func Offset: 0xfc8
	// Line 5393, Address: 0x2f0c1c, Func Offset: 0xfcc
	// Line 5345, Address: 0x2f0c24, Func Offset: 0xfd4
	// Line 5393, Address: 0x2f0c28, Func Offset: 0xfd8
	// Line 5345, Address: 0x2f0c38, Func Offset: 0xfe8
	// Line 5393, Address: 0x2f0c40, Func Offset: 0xff0
	// Line 5345, Address: 0x2f0c48, Func Offset: 0xff8
	// Line 5393, Address: 0x2f0c4c, Func Offset: 0xffc
	// Line 5345, Address: 0x2f0c58, Func Offset: 0x1008
	// Line 5393, Address: 0x2f0c5c, Func Offset: 0x100c
	// Line 5345, Address: 0x2f0c64, Func Offset: 0x1014
	// Line 5393, Address: 0x2f0c68, Func Offset: 0x1018
	// Line 5345, Address: 0x2f0c7c, Func Offset: 0x102c
	// Line 5393, Address: 0x2f0c80, Func Offset: 0x1030
	// Line 5345, Address: 0x2f0c94, Func Offset: 0x1044
	// Line 5393, Address: 0x2f0c98, Func Offset: 0x1048
	// Line 5345, Address: 0x2f0ca0, Func Offset: 0x1050
	// Line 5393, Address: 0x2f0ca4, Func Offset: 0x1054
	// Line 5345, Address: 0x2f0cb0, Func Offset: 0x1060
	// Line 5393, Address: 0x2f0cb4, Func Offset: 0x1064
	// Line 5345, Address: 0x2f0cb8, Func Offset: 0x1068
	// Line 5393, Address: 0x2f0cd0, Func Offset: 0x1080
	// Line 5345, Address: 0x2f0ce0, Func Offset: 0x1090
	// Line 5393, Address: 0x2f0cec, Func Offset: 0x109c
	// Line 5345, Address: 0x2f0cfc, Func Offset: 0x10ac
	// Line 5393, Address: 0x2f0d00, Func Offset: 0x10b0
	// Line 5345, Address: 0x2f0d04, Func Offset: 0x10b4
	// Line 5393, Address: 0x2f0d08, Func Offset: 0x10b8
	// Line 5345, Address: 0x2f0d1c, Func Offset: 0x10cc
	// Line 5393, Address: 0x2f0d20, Func Offset: 0x10d0
	// Line 5445, Address: 0x2f0d30, Func Offset: 0x10e0
	// Line 5454, Address: 0x2f0d48, Func Offset: 0x10f8
	// Line 5456, Address: 0x2f0d50, Func Offset: 0x1100
	// Line 5463, Address: 0x2f0d58, Func Offset: 0x1108
	// Line 5479, Address: 0x2f0d60, Func Offset: 0x1110
	// Line 5485, Address: 0x2f0d68, Func Offset: 0x1118
	// Line 5487, Address: 0x2f0d70, Func Offset: 0x1120
	// Line 5488, Address: 0x2f0d78, Func Offset: 0x1128
	// Line 5498, Address: 0x2f0dc0, Func Offset: 0x1170
	// Line 5500, Address: 0x2f0dc8, Func Offset: 0x1178
	// Line 5501, Address: 0x2f0dd0, Func Offset: 0x1180
	// Line 5508, Address: 0x2f0dd8, Func Offset: 0x1188
	// Line 5514, Address: 0x2f0de0, Func Offset: 0x1190
	// Line 5607, Address: 0x2f0e34, Func Offset: 0x11e4
	// Line 5608, Address: 0x2f0e3c, Func Offset: 0x11ec
	// Line 5619, Address: 0x2f0e68, Func Offset: 0x1218
	// Line 5345, Address: 0x2f0e74, Func Offset: 0x1224
	// Line 5619, Address: 0x2f0e78, Func Offset: 0x1228
	// Line 5345, Address: 0x2f0e88, Func Offset: 0x1238
	// Line 5619, Address: 0x2f0e94, Func Offset: 0x1244
	// Line 5345, Address: 0x2f0e9c, Func Offset: 0x124c
	// Line 5619, Address: 0x2f0ea8, Func Offset: 0x1258
	// Line 5345, Address: 0x2f0eac, Func Offset: 0x125c
	// Line 5619, Address: 0x2f0eb4, Func Offset: 0x1264
	// Line 5345, Address: 0x2f0ec8, Func Offset: 0x1278
	// Line 5619, Address: 0x2f0ecc, Func Offset: 0x127c
	// Line 5345, Address: 0x2f0ed8, Func Offset: 0x1288
	// Line 5619, Address: 0x2f0edc, Func Offset: 0x128c
	// Line 5345, Address: 0x2f0ee0, Func Offset: 0x1290
	// Line 5619, Address: 0x2f0ef4, Func Offset: 0x12a4
	// Line 5345, Address: 0x2f0efc, Func Offset: 0x12ac
	// Line 5619, Address: 0x2f0f04, Func Offset: 0x12b4
	// Line 5345, Address: 0x2f0f0c, Func Offset: 0x12bc
	// Line 5619, Address: 0x2f0f10, Func Offset: 0x12c0
	// Line 5345, Address: 0x2f0f18, Func Offset: 0x12c8
	// Line 5619, Address: 0x2f0f1c, Func Offset: 0x12cc
	// Line 5345, Address: 0x2f0f24, Func Offset: 0x12d4
	// Line 5619, Address: 0x2f0f28, Func Offset: 0x12d8
	// Line 5345, Address: 0x2f0f2c, Func Offset: 0x12dc
	// Line 5619, Address: 0x2f0f34, Func Offset: 0x12e4
	// Line 5345, Address: 0x2f0f48, Func Offset: 0x12f8
	// Line 5619, Address: 0x2f0f54, Func Offset: 0x1304
	// Line 5345, Address: 0x2f0f5c, Func Offset: 0x130c
	// Line 5619, Address: 0x2f0f68, Func Offset: 0x1318
	// Line 5345, Address: 0x2f0f6c, Func Offset: 0x131c
	// Line 5619, Address: 0x2f0f74, Func Offset: 0x1324
	// Line 5345, Address: 0x2f0f88, Func Offset: 0x1338
	// Line 5619, Address: 0x2f0f8c, Func Offset: 0x133c
	// Line 5345, Address: 0x2f0f90, Func Offset: 0x1340
	// Line 5619, Address: 0x2f0f9c, Func Offset: 0x134c
	// Line 5345, Address: 0x2f0fa4, Func Offset: 0x1354
	// Line 5619, Address: 0x2f0fa8, Func Offset: 0x1358
	// Line 5345, Address: 0x2f0fac, Func Offset: 0x135c
	// Line 5619, Address: 0x2f0fb4, Func Offset: 0x1364
	// Line 5345, Address: 0x2f0fc8, Func Offset: 0x1378
	// Line 5619, Address: 0x2f0fd4, Func Offset: 0x1384
	// Line 5345, Address: 0x2f0fdc, Func Offset: 0x138c
	// Line 5619, Address: 0x2f0fe8, Func Offset: 0x1398
	// Line 5345, Address: 0x2f0fec, Func Offset: 0x139c
	// Line 5619, Address: 0x2f0ff4, Func Offset: 0x13a4
	// Line 5345, Address: 0x2f1008, Func Offset: 0x13b8
	// Line 5619, Address: 0x2f100c, Func Offset: 0x13bc
	// Line 5345, Address: 0x2f1018, Func Offset: 0x13c8
	// Line 5619, Address: 0x2f101c, Func Offset: 0x13cc
	// Line 5345, Address: 0x2f1020, Func Offset: 0x13d0
	// Line 5619, Address: 0x2f1034, Func Offset: 0x13e4
	// Line 5345, Address: 0x2f103c, Func Offset: 0x13ec
	// Line 5619, Address: 0x2f1044, Func Offset: 0x13f4
	// Line 5345, Address: 0x2f104c, Func Offset: 0x13fc
	// Line 5619, Address: 0x2f1050, Func Offset: 0x1400
	// Line 5345, Address: 0x2f1058, Func Offset: 0x1408
	// Line 5619, Address: 0x2f105c, Func Offset: 0x140c
	// Line 5345, Address: 0x2f1064, Func Offset: 0x1414
	// Line 5619, Address: 0x2f1068, Func Offset: 0x1418
	// Line 5345, Address: 0x2f106c, Func Offset: 0x141c
	// Line 5619, Address: 0x2f1074, Func Offset: 0x1424
	// Line 5345, Address: 0x2f1088, Func Offset: 0x1438
	// Line 5619, Address: 0x2f1094, Func Offset: 0x1444
	// Line 5345, Address: 0x2f109c, Func Offset: 0x144c
	// Line 5619, Address: 0x2f10a8, Func Offset: 0x1458
	// Line 5345, Address: 0x2f10ac, Func Offset: 0x145c
	// Line 5619, Address: 0x2f10b4, Func Offset: 0x1464
	// Line 5345, Address: 0x2f10c8, Func Offset: 0x1478
	// Line 5619, Address: 0x2f10cc, Func Offset: 0x147c
	// Line 5345, Address: 0x2f10d0, Func Offset: 0x1480
	// Line 5619, Address: 0x2f10dc, Func Offset: 0x148c
	// Line 5345, Address: 0x2f10e4, Func Offset: 0x1494
	// Line 5619, Address: 0x2f10e8, Func Offset: 0x1498
	// Line 5345, Address: 0x2f10ec, Func Offset: 0x149c
	// Line 5619, Address: 0x2f10f4, Func Offset: 0x14a4
	// Line 5345, Address: 0x2f1108, Func Offset: 0x14b8
	// Line 5619, Address: 0x2f1114, Func Offset: 0x14c4
	// Line 5345, Address: 0x2f111c, Func Offset: 0x14cc
	// Line 5619, Address: 0x2f1128, Func Offset: 0x14d8
	// Line 5345, Address: 0x2f112c, Func Offset: 0x14dc
	// Line 5619, Address: 0x2f1134, Func Offset: 0x14e4
	// Line 5345, Address: 0x2f1144, Func Offset: 0x14f4
	// Line 5619, Address: 0x2f1170, Func Offset: 0x1520
	// Line 5345, Address: 0x2f1180, Func Offset: 0x1530
	// Line 5619, Address: 0x2f11a0, Func Offset: 0x1550
	// Line 5345, Address: 0x2f11b4, Func Offset: 0x1564
	// Line 5619, Address: 0x2f11b8, Func Offset: 0x1568
	// Line 5345, Address: 0x2f11c8, Func Offset: 0x1578
	// Line 5619, Address: 0x2f11cc, Func Offset: 0x157c
	// Line 5345, Address: 0x2f11d4, Func Offset: 0x1584
	// Line 5619, Address: 0x2f11ec, Func Offset: 0x159c
	// Line 5345, Address: 0x2f11f4, Func Offset: 0x15a4
	// Line 5619, Address: 0x2f1234, Func Offset: 0x15e4
	// Line 5345, Address: 0x2f124c, Func Offset: 0x15fc
	// Line 5619, Address: 0x2f125c, Func Offset: 0x160c
	// Line 5345, Address: 0x2f1264, Func Offset: 0x1614
	// Line 5619, Address: 0x2f127c, Func Offset: 0x162c
	// Line 5345, Address: 0x2f1284, Func Offset: 0x1634
	// Line 5619, Address: 0x2f12c4, Func Offset: 0x1674
	// Line 5345, Address: 0x2f12d8, Func Offset: 0x1688
	// Line 5465, Address: 0x2f12e8, Func Offset: 0x1698
	// Line 5619, Address: 0x2f12ec, Func Offset: 0x169c
	// Line 5488, Address: 0x2f12fc, Func Offset: 0x16ac
	// Line 5619, Address: 0x2f1300, Func Offset: 0x16b0
	// Line 5558, Address: 0x2f137c, Func Offset: 0x172c
	// Line 5619, Address: 0x2f1384, Func Offset: 0x1734
	// Line 5610, Address: 0x2f1408, Func Offset: 0x17b8
	// Line 5619, Address: 0x2f140c, Func Offset: 0x17bc
	// Line 5610, Address: 0x2f1428, Func Offset: 0x17d8
	// Line 5619, Address: 0x2f142c, Func Offset: 0x17dc
	// Line 5610, Address: 0x2f1434, Func Offset: 0x17e4
	// Line 5619, Address: 0x2f1438, Func Offset: 0x17e8
	// Line 5610, Address: 0x2f1444, Func Offset: 0x17f4
	// Line 5619, Address: 0x2f1448, Func Offset: 0x17f8
	// Func End, Address: 0x2f14a4, Func Offset: 0x1854
}

// zSceneSetup_serialTraverseCB__FUiP7xSerial
// Start address: 0x2f14b0
int32 zSceneSetup_serialTraverseCB(uint32 clientID, xSerial* xser)
{
	int8 uiName[16];
	int32 val;
	// Line 4979, Address: 0x2f14b0, Func Offset: 0
	// Line 4981, Address: 0x2f14c0, Func Offset: 0x10
	// Line 4983, Address: 0x2f14c4, Func Offset: 0x14
	// Line 4984, Address: 0x2f14d0, Func Offset: 0x20
	// Line 4985, Address: 0x2f14dc, Func Offset: 0x2c
	// Line 4990, Address: 0x2f14e4, Func Offset: 0x34
	// Line 4991, Address: 0x2f1500, Func Offset: 0x50
	// Line 4993, Address: 0x2f1504, Func Offset: 0x54
	// Line 4991, Address: 0x2f150c, Func Offset: 0x5c
	// Line 4993, Address: 0x2f1510, Func Offset: 0x60
	// Line 4996, Address: 0x2f1518, Func Offset: 0x68
	// Line 4999, Address: 0x2f1584, Func Offset: 0xd4
	// Line 5000, Address: 0x2f158c, Func Offset: 0xdc
	// Line 5003, Address: 0x2f1598, Func Offset: 0xe8
	// Line 4996, Address: 0x2f15a4, Func Offset: 0xf4
	// Line 5005, Address: 0x2f15ac, Func Offset: 0xfc
	// Func End, Address: 0x2f15bc, Func Offset: 0x10c
}

// zSceneResetLightKits__Fv
// Start address: 0x2f15c0
void zSceneResetLightKits()
{
	int32 i;
	xEnvAsset* easset;
	xLightKit* objLightKit;
	int32 lkitCount;
	xLightKit* lkit;
	xGroup* group;
	uint32 j;
	uint32 nitam;
	xBase* itamz;
	// Line 4918, Address: 0x2f15c0, Func Offset: 0
	// Line 4924, Address: 0x2f15c4, Func Offset: 0x4
	// Line 4918, Address: 0x2f15c8, Func Offset: 0x8
	// Line 4924, Address: 0x2f15e4, Func Offset: 0x24
	// Line 4925, Address: 0x2f15f4, Func Offset: 0x34
	// Line 4931, Address: 0x2f1600, Func Offset: 0x40
	// Line 4932, Address: 0x2f1608, Func Offset: 0x48
	// Line 4934, Address: 0x2f1614, Func Offset: 0x54
	// Line 4935, Address: 0x2f1694, Func Offset: 0xd4
	// Line 4938, Address: 0x2f1698, Func Offset: 0xd8
	// Line 4939, Address: 0x2f16a8, Func Offset: 0xe8
	// Line 4965, Address: 0x2f16b4, Func Offset: 0xf4
	// Line 4940, Address: 0x2f16d8, Func Offset: 0x118
	// Line 4965, Address: 0x2f16e4, Func Offset: 0x124
	// Line 4944, Address: 0x2f16fc, Func Offset: 0x13c
	// Line 4965, Address: 0x2f1700, Func Offset: 0x140
	// Line 4944, Address: 0x2f1714, Func Offset: 0x154
	// Line 4965, Address: 0x2f171c, Func Offset: 0x15c
	// Line 4944, Address: 0x2f172c, Func Offset: 0x16c
	// Line 4965, Address: 0x2f1738, Func Offset: 0x178
	// Line 4944, Address: 0x2f174c, Func Offset: 0x18c
	// Line 4965, Address: 0x2f1750, Func Offset: 0x190
	// Line 4944, Address: 0x2f1760, Func Offset: 0x1a0
	// Line 4965, Address: 0x2f1768, Func Offset: 0x1a8
	// Line 4949, Address: 0x2f1778, Func Offset: 0x1b8
	// Line 4965, Address: 0x2f177c, Func Offset: 0x1bc
	// Line 4951, Address: 0x2f1788, Func Offset: 0x1c8
	// Line 4965, Address: 0x2f178c, Func Offset: 0x1cc
	// Line 4952, Address: 0x2f17a0, Func Offset: 0x1e0
	// Line 4965, Address: 0x2f17a4, Func Offset: 0x1e4
	// Line 4944, Address: 0x2f17e8, Func Offset: 0x228
	// Line 4965, Address: 0x2f17f0, Func Offset: 0x230
	// Func End, Address: 0x2f1814, Func Offset: 0x254
}

// zSceneSetup__Fv
// Start address: 0x2f1820
void zSceneSetup()
{
	FloatAndVoid defaultDist'813;
	zScene* s;
	uint32 dontcaresize;
	int32 CutsceneTocCount;
	int32 i;
	int32 i;
	xBase* b;
	int32 i;
	int32 i;
	xEnt* ent;
	zLODTable* lod;
	int32 max_drivensort_iters;
	uint32 driven_swapped;
	uint32 i;
	uint32 j;
	xEnt* bdriven;
	xBase* btmp;
	zEntSimpleObj** entList;
	uint32 entCount;
	xEnt** entList;
	int32 entCount;
	int32 i;
	int32 j;
	uint32 k;
	uint32 numPrimeMovers;
	uint32 numDriven;
	xEnt* ent;
	uint32 numGroups;
	xGroup* grp;
	uint32 gcnt;
	xBase* gbase;
	xEnt* gent;
	xGroup* driveGroupList;
	uint32 currMover;
	uint32 allocsize;
	xGroupAsset* grpAssetList;
	xBase** grpBaseList;
	uint32 i;
	int32 i;
	xEnt* ent;
	xGroupAsset* gasset;
	xEnt* other;
	xGroup** tempGrpList;
	xGroup** tempGrpCurr;
	xGroup* grp;
	uint32 i;
	FloatAndVoid defaultDist;
	FloatAndVoid lodDist;
	zLODTable* lod;
	// Line 4103, Address: 0x2f1820, Func Offset: 0
	// Line 4115, Address: 0x2f1824, Func Offset: 0x4
	// Line 4103, Address: 0x2f1828, Func Offset: 0x8
	// Line 4115, Address: 0x2f1850, Func Offset: 0x30
	// Line 4118, Address: 0x2f1854, Func Offset: 0x34
	// Line 4121, Address: 0x2f1858, Func Offset: 0x38
	// Line 4125, Address: 0x2f1864, Func Offset: 0x44
	// Line 4131, Address: 0x2f1868, Func Offset: 0x48
	// Line 4135, Address: 0x2f1874, Func Offset: 0x54
	// Line 4136, Address: 0x2f1878, Func Offset: 0x58
	// Line 4135, Address: 0x2f187c, Func Offset: 0x5c
	// Line 4136, Address: 0x2f1880, Func Offset: 0x60
	// Line 4137, Address: 0x2f1888, Func Offset: 0x68
	// Line 4149, Address: 0x2f188c, Func Offset: 0x6c
	// Line 4150, Address: 0x2f1894, Func Offset: 0x74
	// Line 4151, Address: 0x2f189c, Func Offset: 0x7c
	// Line 4152, Address: 0x2f18a4, Func Offset: 0x84
	// Line 4154, Address: 0x2f18ac, Func Offset: 0x8c
	// Line 4157, Address: 0x2f18b4, Func Offset: 0x94
	// Line 4158, Address: 0x2f18c0, Func Offset: 0xa0
	// Line 4159, Address: 0x2f18fc, Func Offset: 0xdc
	// Line 4162, Address: 0x2f1900, Func Offset: 0xe0
	// Line 4164, Address: 0x2f1908, Func Offset: 0xe8
	// Line 4165, Address: 0x2f1918, Func Offset: 0xf8
	// Line 4166, Address: 0x2f1924, Func Offset: 0x104
	// Line 4167, Address: 0x2f1940, Func Offset: 0x120
	// Line 4168, Address: 0x2f1950, Func Offset: 0x130
	// Line 4174, Address: 0x2f1958, Func Offset: 0x138
	// Line 4175, Address: 0x2f195c, Func Offset: 0x13c
	// Line 4177, Address: 0x2f1970, Func Offset: 0x150
	// Line 4178, Address: 0x2f197c, Func Offset: 0x15c
	// Line 4180, Address: 0x2f1984, Func Offset: 0x164
	// Line 4182, Address: 0x2f1c6c, Func Offset: 0x44c
	// Line 4184, Address: 0x2f1c70, Func Offset: 0x450
	// Line 4186, Address: 0x2f1c7c, Func Offset: 0x45c
	// Line 4188, Address: 0x2f1c90, Func Offset: 0x470
	// Line 4207, Address: 0x2f1c98, Func Offset: 0x478
	// Line 4208, Address: 0x2f1ca4, Func Offset: 0x484
	// Line 4209, Address: 0x2f1e54, Func Offset: 0x634
	// Line 4211, Address: 0x2f1e5c, Func Offset: 0x63c
	// Line 4213, Address: 0x2f1e60, Func Offset: 0x640
	// Line 4214, Address: 0x2f1e6c, Func Offset: 0x64c
	// Line 4216, Address: 0x2f1e74, Func Offset: 0x654
	// Line 4217, Address: 0x2f1e78, Func Offset: 0x658
	// Line 4218, Address: 0x2f1e84, Func Offset: 0x664
	// Line 4219, Address: 0x2f1e98, Func Offset: 0x678
	// Line 4222, Address: 0x2f1ea0, Func Offset: 0x680
	// Line 4223, Address: 0x2f1eac, Func Offset: 0x68c
	// Line 4224, Address: 0x2f1eb8, Func Offset: 0x698
	// Line 4231, Address: 0x2f1ec0, Func Offset: 0x6a0
	// Line 4232, Address: 0x2f1ec8, Func Offset: 0x6a8
	// Line 4235, Address: 0x2f1ed0, Func Offset: 0x6b0
	// Line 4236, Address: 0x2f1ed8, Func Offset: 0x6b8
	// Line 4239, Address: 0x2f1ee0, Func Offset: 0x6c0
	// Line 4240, Address: 0x2f1eec, Func Offset: 0x6cc
	// Line 4242, Address: 0x2f1ef4, Func Offset: 0x6d4
	// Line 4243, Address: 0x2f1ef8, Func Offset: 0x6d8
	// Line 4244, Address: 0x2f1f04, Func Offset: 0x6e4
	// Line 4246, Address: 0x2f1f10, Func Offset: 0x6f0
	// Line 4250, Address: 0x2f1f18, Func Offset: 0x6f8
	// Line 4251, Address: 0x2f1f20, Func Offset: 0x700
	// Line 4252, Address: 0x2f1f28, Func Offset: 0x708
	// Line 4257, Address: 0x2f1f30, Func Offset: 0x710
	// Line 4259, Address: 0x2f1f38, Func Offset: 0x718
	// Line 4262, Address: 0x2f1f40, Func Offset: 0x720
	// Line 4263, Address: 0x2f1f48, Func Offset: 0x728
	// Line 4267, Address: 0x2f1f50, Func Offset: 0x730
	// Line 4269, Address: 0x2f1f58, Func Offset: 0x738
	// Line 4272, Address: 0x2f1f60, Func Offset: 0x740
	// Line 4273, Address: 0x2f1f68, Func Offset: 0x748
	// Line 4277, Address: 0x2f1f70, Func Offset: 0x750
	// Line 4278, Address: 0x2f1f78, Func Offset: 0x758
	// Line 4281, Address: 0x2f1f80, Func Offset: 0x760
	// Line 4282, Address: 0x2f1f88, Func Offset: 0x768
	// Line 4285, Address: 0x2f1f90, Func Offset: 0x770
	// Line 4286, Address: 0x2f1f98, Func Offset: 0x778
	// Line 4289, Address: 0x2f1fa0, Func Offset: 0x780
	// Line 4290, Address: 0x2f1fa8, Func Offset: 0x788
	// Line 4294, Address: 0x2f1fb0, Func Offset: 0x790
	// Line 4295, Address: 0x2f1fb8, Func Offset: 0x798
	// Line 4304, Address: 0x2f1fc0, Func Offset: 0x7a0
	// Line 4399, Address: 0x2f1fc8, Func Offset: 0x7a8
	// Line 4401, Address: 0x2f1fe0, Func Offset: 0x7c0
	// Line 4402, Address: 0x2f1fe8, Func Offset: 0x7c8
	// Line 4403, Address: 0x2f1ff0, Func Offset: 0x7d0
	// Line 4413, Address: 0x2f1ff8, Func Offset: 0x7d8
	// Line 4208, Address: 0x2f2088, Func Offset: 0x868
	// Line 4413, Address: 0x2f20ac, Func Offset: 0x88c
	// Line 4415, Address: 0x2f20c8, Func Offset: 0x8a8
	// Line 4417, Address: 0x2f20d0, Func Offset: 0x8b0
	// Line 4418, Address: 0x2f20dc, Func Offset: 0x8bc
	// Line 4419, Address: 0x2f20e4, Func Offset: 0x8c4
	// Line 4421, Address: 0x2f20ec, Func Offset: 0x8cc
	// Line 4426, Address: 0x2f21fc, Func Offset: 0x9dc
	// Line 4428, Address: 0x2f2204, Func Offset: 0x9e4
	// Line 4430, Address: 0x2f221c, Func Offset: 0x9fc
	// Line 4446, Address: 0x2f222c, Func Offset: 0xa0c
	// Line 4448, Address: 0x2f224c, Func Offset: 0xa2c
	// Line 4450, Address: 0x2f2254, Func Offset: 0xa34
	// Line 4452, Address: 0x2f2274, Func Offset: 0xa54
	// Line 4453, Address: 0x2f2278, Func Offset: 0xa58
	// Line 4463, Address: 0x2f2280, Func Offset: 0xa60
	// Line 4464, Address: 0x2f2298, Func Offset: 0xa78
	// Line 4467, Address: 0x2f22a0, Func Offset: 0xa80
	// Line 4471, Address: 0x2f22a8, Func Offset: 0xa88
	// Line 4477, Address: 0x2f22b0, Func Offset: 0xa90
	// Line 4482, Address: 0x2f22b8, Func Offset: 0xa98
	// Line 4485, Address: 0x2f22c0, Func Offset: 0xaa0
	// Line 4516, Address: 0x2f22cc, Func Offset: 0xaac
	// Line 4520, Address: 0x2f22dc, Func Offset: 0xabc
	// Line 4522, Address: 0x2f22fc, Func Offset: 0xadc
	// Line 4525, Address: 0x2f2314, Func Offset: 0xaf4
	// Line 4527, Address: 0x2f231c, Func Offset: 0xafc
	// Line 4528, Address: 0x2f2328, Func Offset: 0xb08
	// Line 4529, Address: 0x2f2330, Func Offset: 0xb10
	// Line 4530, Address: 0x2f233c, Func Offset: 0xb1c
	// Line 4421, Address: 0x2f2348, Func Offset: 0xb28
	// Line 4530, Address: 0x2f2350, Func Offset: 0xb30
	// Line 4531, Address: 0x2f236c, Func Offset: 0xb4c
	// Line 4535, Address: 0x2f237c, Func Offset: 0xb5c
	// Line 4547, Address: 0x2f2398, Func Offset: 0xb78
	// Line 4554, Address: 0x2f23a0, Func Offset: 0xb80
	// Line 4570, Address: 0x2f23a4, Func Offset: 0xb84
	// Line 4559, Address: 0x2f23a8, Func Offset: 0xb88
	// Line 4558, Address: 0x2f23ac, Func Offset: 0xb8c
	// Line 4559, Address: 0x2f23b0, Func Offset: 0xb90
	// Line 4560, Address: 0x2f23c0, Func Offset: 0xba0
	// Line 4561, Address: 0x2f23cc, Func Offset: 0xbac
	// Line 4564, Address: 0x2f23e8, Func Offset: 0xbc8
	// Line 4565, Address: 0x2f23fc, Func Offset: 0xbdc
	// Line 4564, Address: 0x2f2400, Func Offset: 0xbe0
	// Line 4565, Address: 0x2f2408, Func Offset: 0xbe8
	// Line 4572, Address: 0x2f2410, Func Offset: 0xbf0
	// Line 4574, Address: 0x2f2424, Func Offset: 0xc04
	// Line 4579, Address: 0x2f2438, Func Offset: 0xc18
	// Line 4581, Address: 0x2f243c, Func Offset: 0xc1c
	// Line 4584, Address: 0x2f2444, Func Offset: 0xc24
	// Line 4586, Address: 0x2f2450, Func Offset: 0xc30
	// Line 4588, Address: 0x2f2458, Func Offset: 0xc38
	// Line 4589, Address: 0x2f2464, Func Offset: 0xc44
	// Line 4588, Address: 0x2f2468, Func Offset: 0xc48
	// Line 4590, Address: 0x2f2470, Func Offset: 0xc50
	// Line 4596, Address: 0x2f2478, Func Offset: 0xc58
	// Line 4634, Address: 0x2f2488, Func Offset: 0xc68
	// Line 4596, Address: 0x2f248c, Func Offset: 0xc6c
	// Line 4634, Address: 0x2f2490, Func Offset: 0xc70
	// Line 4603, Address: 0x2f2494, Func Offset: 0xc74
	// Line 4635, Address: 0x2f2498, Func Offset: 0xc78
	// Line 4620, Address: 0x2f24a0, Func Offset: 0xc80
	// Line 4603, Address: 0x2f24a4, Func Offset: 0xc84
	// Line 4635, Address: 0x2f24b0, Func Offset: 0xc90
	// Line 4603, Address: 0x2f24b4, Func Offset: 0xc94
	// Line 4620, Address: 0x2f24b8, Func Offset: 0xc98
	// Line 4635, Address: 0x2f24c0, Func Offset: 0xca0
	// Line 4639, Address: 0x2f24cc, Func Offset: 0xcac
	// Line 4635, Address: 0x2f24d4, Func Offset: 0xcb4
	// Line 4637, Address: 0x2f24e0, Func Offset: 0xcc0
	// Line 4639, Address: 0x2f24f8, Func Offset: 0xcd8
	// Line 4641, Address: 0x2f2508, Func Offset: 0xce8
	// Line 4643, Address: 0x2f2520, Func Offset: 0xd00
	// Line 4649, Address: 0x2f2530, Func Offset: 0xd10
	// Line 4666, Address: 0x2f2538, Func Offset: 0xd18
	// Line 4643, Address: 0x2f253c, Func Offset: 0xd1c
	// Line 4645, Address: 0x2f2548, Func Offset: 0xd28
	// Line 4647, Address: 0x2f2560, Func Offset: 0xd40
	// Line 4648, Address: 0x2f256c, Func Offset: 0xd4c
	// Line 4651, Address: 0x2f257c, Func Offset: 0xd5c
	// Line 4648, Address: 0x2f2580, Func Offset: 0xd60
	// Line 4653, Address: 0x2f2584, Func Offset: 0xd64
	// Line 4654, Address: 0x2f2590, Func Offset: 0xd70
	// Line 4664, Address: 0x2f2598, Func Offset: 0xd78
	// Line 4570, Address: 0x2f25c0, Func Offset: 0xda0
	// Line 4664, Address: 0x2f25c4, Func Offset: 0xda4
	// Line 4649, Address: 0x2f25d8, Func Offset: 0xdb8
	// Line 4664, Address: 0x2f25e0, Func Offset: 0xdc0
	// Line 4665, Address: 0x2f25f0, Func Offset: 0xdd0
	// Line 4667, Address: 0x2f2600, Func Offset: 0xde0
	// Line 4666, Address: 0x2f2604, Func Offset: 0xde4
	// Line 4671, Address: 0x2f260c, Func Offset: 0xdec
	// Line 4677, Address: 0x2f2628, Func Offset: 0xe08
	// Line 4676, Address: 0x2f262c, Func Offset: 0xe0c
	// Line 4677, Address: 0x2f2630, Func Offset: 0xe10
	// Line 4679, Address: 0x2f264c, Func Offset: 0xe2c
	// Line 4681, Address: 0x2f2664, Func Offset: 0xe44
	// Line 4682, Address: 0x2f267c, Func Offset: 0xe5c
	// Line 4690, Address: 0x2f269c, Func Offset: 0xe7c
	// Line 4691, Address: 0x2f26ac, Func Offset: 0xe8c
	// Line 4692, Address: 0x2f26b8, Func Offset: 0xe98
	// Line 4693, Address: 0x2f26c4, Func Offset: 0xea4
	// Line 4694, Address: 0x2f26dc, Func Offset: 0xebc
	// Line 4695, Address: 0x2f26e4, Func Offset: 0xec4
	// Line 4696, Address: 0x2f26ec, Func Offset: 0xecc
	// Line 4698, Address: 0x2f26f8, Func Offset: 0xed8
	// Line 4699, Address: 0x2f2700, Func Offset: 0xee0
	// Line 4700, Address: 0x2f2704, Func Offset: 0xee4
	// Line 4701, Address: 0x2f2708, Func Offset: 0xee8
	// Line 4704, Address: 0x2f2720, Func Offset: 0xf00
	// Line 4707, Address: 0x2f2730, Func Offset: 0xf10
	// Line 4709, Address: 0x2f2744, Func Offset: 0xf24
	// Line 4707, Address: 0x2f2748, Func Offset: 0xf28
	// Line 4709, Address: 0x2f274c, Func Offset: 0xf2c
	// Line 4707, Address: 0x2f2750, Func Offset: 0xf30
	// Line 4709, Address: 0x2f2758, Func Offset: 0xf38
	// Line 4714, Address: 0x2f2768, Func Offset: 0xf48
	// Line 4779, Address: 0x2f2770, Func Offset: 0xf50
	// Line 4780, Address: 0x2f2778, Func Offset: 0xf58
	// Line 4783, Address: 0x2f278c, Func Offset: 0xf6c
	// Line 4780, Address: 0x2f2790, Func Offset: 0xf70
	// Line 4783, Address: 0x2f2794, Func Offset: 0xf74
	// Line 4789, Address: 0x2f27a8, Func Offset: 0xf88
	// Line 4785, Address: 0x2f27b0, Func Offset: 0xf90
	// Line 4783, Address: 0x2f27b4, Func Offset: 0xf94
	// Line 4785, Address: 0x2f27c0, Func Offset: 0xfa0
	// Line 4788, Address: 0x2f27d4, Func Offset: 0xfb4
	// Line 4789, Address: 0x2f27ec, Func Offset: 0xfcc
	// Line 4793, Address: 0x2f2804, Func Offset: 0xfe4
	// Line 4794, Address: 0x2f2808, Func Offset: 0xfe8
	// Line 4796, Address: 0x2f280c, Func Offset: 0xfec
	// Line 4798, Address: 0x2f2824, Func Offset: 0x1004
	// Line 4801, Address: 0x2f2840, Func Offset: 0x1020
	// Line 4802, Address: 0x2f2850, Func Offset: 0x1030
	// Line 4806, Address: 0x2f2864, Func Offset: 0x1044
	// Line 4810, Address: 0x2f2878, Func Offset: 0x1058
	// Line 4812, Address: 0x2f2890, Func Offset: 0x1070
	// Line 4810, Address: 0x2f2894, Func Offset: 0x1074
	// Line 4812, Address: 0x2f2898, Func Offset: 0x1078
	// Line 4811, Address: 0x2f289c, Func Offset: 0x107c
	// Line 4817, Address: 0x2f28a0, Func Offset: 0x1080
	// Line 4811, Address: 0x2f28a4, Func Offset: 0x1084
	// Line 4818, Address: 0x2f28a8, Func Offset: 0x1088
	// Line 4811, Address: 0x2f28ac, Func Offset: 0x108c
	// Line 4812, Address: 0x2f28b0, Func Offset: 0x1090
	// Line 4817, Address: 0x2f28b4, Func Offset: 0x1094
	// Line 4812, Address: 0x2f28b8, Func Offset: 0x1098
	// Line 4818, Address: 0x2f28c0, Func Offset: 0x10a0
	// Line 4819, Address: 0x2f28d0, Func Offset: 0x10b0
	// Line 4820, Address: 0x2f28dc, Func Offset: 0x10bc
	// Line 4822, Address: 0x2f28e8, Func Offset: 0x10c8
	// Line 4826, Address: 0x2f28fc, Func Offset: 0x10dc
	// Line 4835, Address: 0x2f2924, Func Offset: 0x1104
	// Line 4836, Address: 0x2f292c, Func Offset: 0x110c
	// Line 4838, Address: 0x2f2938, Func Offset: 0x1118
	// Line 4839, Address: 0x2f2940, Func Offset: 0x1120
	// Line 4843, Address: 0x2f294c, Func Offset: 0x112c
	// Line 4848, Address: 0x2f2960, Func Offset: 0x1140
	// Line 4843, Address: 0x2f2968, Func Offset: 0x1148
	// Line 4845, Address: 0x2f2974, Func Offset: 0x1154
	// Line 4848, Address: 0x2f298c, Func Offset: 0x116c
	// Line 4850, Address: 0x2f299c, Func Offset: 0x117c
	// Line 4863, Address: 0x2f29b8, Func Offset: 0x1198
	// Line 4868, Address: 0x2f29c4, Func Offset: 0x11a4
	// Line 4877, Address: 0x2f29e4, Func Offset: 0x11c4
	// Line 4882, Address: 0x2f29f0, Func Offset: 0x11d0
	// Line 4716, Address: 0x2f2a00, Func Offset: 0x11e0
	// Line 4721, Address: 0x2f2a04, Func Offset: 0x11e4
	// Line 4715, Address: 0x2f2a0c, Func Offset: 0x11ec
	// Line 4882, Address: 0x2f2a10, Func Offset: 0x11f0
	// Line 4721, Address: 0x2f2a30, Func Offset: 0x1210
	// Line 4722, Address: 0x2f2a34, Func Offset: 0x1214
	// Line 4882, Address: 0x2f2a3c, Func Offset: 0x121c
	// Line 4725, Address: 0x2f2a4c, Func Offset: 0x122c
	// Line 4882, Address: 0x2f2a50, Func Offset: 0x1230
	// Line 4726, Address: 0x2f2a6c, Func Offset: 0x124c
	// Line 4882, Address: 0x2f2a70, Func Offset: 0x1250
	// Line 4727, Address: 0x2f2a7c, Func Offset: 0x125c
	// Line 4882, Address: 0x2f2a80, Func Offset: 0x1260
	// Line 4727, Address: 0x2f2a84, Func Offset: 0x1264
	// Line 4882, Address: 0x2f2a9c, Func Offset: 0x127c
	// Line 4728, Address: 0x2f2aa4, Func Offset: 0x1284
	// Line 4882, Address: 0x2f2aa8, Func Offset: 0x1288
	// Line 4728, Address: 0x2f2ab8, Func Offset: 0x1298
	// Line 4882, Address: 0x2f2abc, Func Offset: 0x129c
	// Line 4728, Address: 0x2f2acc, Func Offset: 0x12ac
	// Line 4882, Address: 0x2f2ad0, Func Offset: 0x12b0
	// Line 4728, Address: 0x2f2ae0, Func Offset: 0x12c0
	// Line 4882, Address: 0x2f2ae4, Func Offset: 0x12c4
	// Line 4728, Address: 0x2f2af4, Func Offset: 0x12d4
	// Line 4882, Address: 0x2f2af8, Func Offset: 0x12d8
	// Line 4728, Address: 0x2f2b08, Func Offset: 0x12e8
	// Line 4882, Address: 0x2f2b0c, Func Offset: 0x12ec
	// Line 4728, Address: 0x2f2b1c, Func Offset: 0x12fc
	// Line 4882, Address: 0x2f2b20, Func Offset: 0x1300
	// Line 4728, Address: 0x2f2b30, Func Offset: 0x1310
	// Line 4882, Address: 0x2f2b34, Func Offset: 0x1314
	// Line 4726, Address: 0x2f2b60, Func Offset: 0x1340
	// Line 4882, Address: 0x2f2b64, Func Offset: 0x1344
	// Line 4728, Address: 0x2f2b7c, Func Offset: 0x135c
	// Line 4882, Address: 0x2f2b80, Func Offset: 0x1360
	// Line 4749, Address: 0x2f2ba8, Func Offset: 0x1388
	// Line 4735, Address: 0x2f2bac, Func Offset: 0x138c
	// Line 4882, Address: 0x2f2bb0, Func Offset: 0x1390
	// Line 4732, Address: 0x2f2bc8, Func Offset: 0x13a8
	// Line 4882, Address: 0x2f2bcc, Func Offset: 0x13ac
	// Line 4735, Address: 0x2f2bd8, Func Offset: 0x13b8
	// Line 4882, Address: 0x2f2bdc, Func Offset: 0x13bc
	// Line 4745, Address: 0x2f2be8, Func Offset: 0x13c8
	// Line 4882, Address: 0x2f2bec, Func Offset: 0x13cc
	// Line 4745, Address: 0x2f2c14, Func Offset: 0x13f4
	// Line 4882, Address: 0x2f2c18, Func Offset: 0x13f8
	// Line 4747, Address: 0x2f2c30, Func Offset: 0x1410
	// Line 4882, Address: 0x2f2c34, Func Offset: 0x1414
	// Line 4749, Address: 0x2f2c40, Func Offset: 0x1420
	// Line 4882, Address: 0x2f2c44, Func Offset: 0x1424
	// Line 4752, Address: 0x2f2c58, Func Offset: 0x1438
	// Line 4882, Address: 0x2f2c5c, Func Offset: 0x143c
	// Line 4761, Address: 0x2f2c94, Func Offset: 0x1474
	// Line 4882, Address: 0x2f2c98, Func Offset: 0x1478
	// Line 4766, Address: 0x2f2cbc, Func Offset: 0x149c
	// Line 4882, Address: 0x2f2cc0, Func Offset: 0x14a0
	// Line 4823, Address: 0x2f2d08, Func Offset: 0x14e8
	// Line 4882, Address: 0x2f2d0c, Func Offset: 0x14ec
	// Line 4829, Address: 0x2f2d14, Func Offset: 0x14f4
	// Line 4882, Address: 0x2f2d1c, Func Offset: 0x14fc
	// Func End, Address: 0x2f2d90, Func Offset: 0x1570
}

// DeactivateCB__FP5xBase
// Start address: 0x2f2d90
void DeactivateCB(xBase* base)
{
	// Line 4086, Address: 0x2f2d90, Func Offset: 0
	// Line 4091, Address: 0x2f2d98, Func Offset: 0x8
	// Func End, Address: 0x2f2da0, Func Offset: 0x10
}

// ActivateCB__FP5xBase
// Start address: 0x2f2da0
void ActivateCB(xBase* base)
{
	// Line 4078, Address: 0x2f2da0, Func Offset: 0
	// Line 4083, Address: 0x2f2da8, Func Offset: 0x8
	// Func End, Address: 0x2f2db0, Func Offset: 0x10
}

// zSceneDiskSpin__Ff
// Start address: 0x2f2db0
void zSceneDiskSpin()
{
	// Line 4074, Address: 0x2f2db0, Func Offset: 0
	// Func End, Address: 0x2f2db8, Func Offset: 0x8
}

// zSceneStoreCheckPoint__FRC5xVec3fUi
// Start address: 0x2f2dc0
void zSceneStoreCheckPoint(xVec3& pos, float32 rot, uint32 initialCameraID)
{
	// Line 4060, Address: 0x2f2dc0, Func Offset: 0
	// Line 4062, Address: 0x2f2dc4, Func Offset: 0x4
	// Line 4060, Address: 0x2f2dc8, Func Offset: 0x8
	// Line 4062, Address: 0x2f2dcc, Func Offset: 0xc
	// Line 4065, Address: 0x2f2e30, Func Offset: 0x70
	// Line 4066, Address: 0x2f2e38, Func Offset: 0x78
	// Func End, Address: 0x2f2e74, Func Offset: 0xb4
}

// zSceneStoreCheckPoint__FUi
// Start address: 0x2f2e80
void zSceneStoreCheckPoint(uint32 initialCameraID)
{
	// Line 4051, Address: 0x2f2e80, Func Offset: 0
	// Line 4053, Address: 0x2f2e98, Func Offset: 0x18
	// Line 4056, Address: 0x2f2eb0, Func Offset: 0x30
	// Line 4057, Address: 0x2f2f2c, Func Offset: 0xac
	// Func End, Address: 0x2f2f6c, Func Offset: 0xec
}

// zSceneReset__Fv
// Start address: 0x2f2f70
void zSceneReset()
{
	zScene* s;
	int32 i;
	_zEnv* env;
	// Line 3743, Address: 0x2f2f70, Func Offset: 0
	// Line 3746, Address: 0x2f2f74, Func Offset: 0x4
	// Line 3743, Address: 0x2f2f78, Func Offset: 0x8
	// Line 3754, Address: 0x2f2f7c, Func Offset: 0xc
	// Line 3743, Address: 0x2f2f80, Func Offset: 0x10
	// Line 3746, Address: 0x2f2f98, Func Offset: 0x28
	// Line 3754, Address: 0x2f2f9c, Func Offset: 0x2c
	// Line 3756, Address: 0x2f2fa0, Func Offset: 0x30
	// Line 3757, Address: 0x2f2fa8, Func Offset: 0x38
	// Line 3758, Address: 0x2f2fb0, Func Offset: 0x40
	// Line 3760, Address: 0x2f2fb8, Func Offset: 0x48
	// Line 3763, Address: 0x2f2fc0, Func Offset: 0x50
	// Line 3765, Address: 0x2f2fc8, Func Offset: 0x58
	// Line 3766, Address: 0x2f2fd0, Func Offset: 0x60
	// Line 3768, Address: 0x2f2fd8, Func Offset: 0x68
	// Line 3769, Address: 0x2f2fe0, Func Offset: 0x70
	// Line 3772, Address: 0x2f2fe8, Func Offset: 0x78
	// Line 3775, Address: 0x2f2ff0, Func Offset: 0x80
	// Line 3781, Address: 0x2f2ff8, Func Offset: 0x88
	// Line 3785, Address: 0x2f30a0, Func Offset: 0x130
	// Line 3792, Address: 0x2f30e8, Func Offset: 0x178
	// Line 3794, Address: 0x2f30f0, Func Offset: 0x180
	// Line 3797, Address: 0x2f30f8, Func Offset: 0x188
	// Line 3799, Address: 0x2f3100, Func Offset: 0x190
	// Line 3801, Address: 0x2f3108, Func Offset: 0x198
	// Line 3804, Address: 0x2f3120, Func Offset: 0x1b0
	// Line 3807, Address: 0x2f3124, Func Offset: 0x1b4
	// Line 3804, Address: 0x2f3128, Func Offset: 0x1b8
	// Line 3807, Address: 0x2f312c, Func Offset: 0x1bc
	// Line 3810, Address: 0x2f313c, Func Offset: 0x1cc
	// Line 3813, Address: 0x2f3150, Func Offset: 0x1e0
	// Line 3816, Address: 0x2f3158, Func Offset: 0x1e8
	// Line 3817, Address: 0x2f3164, Func Offset: 0x1f4
	// Line 3819, Address: 0x2f316c, Func Offset: 0x1fc
	// Line 3833, Address: 0x2f317c, Func Offset: 0x20c
	// Line 3835, Address: 0x2f319c, Func Offset: 0x22c
	// Line 3837, Address: 0x2f31a4, Func Offset: 0x234
	// Line 3839, Address: 0x2f3204, Func Offset: 0x294
	// Line 3840, Address: 0x2f3208, Func Offset: 0x298
	// Line 3841, Address: 0x2f3228, Func Offset: 0x2b8
	// Line 3847, Address: 0x2f3230, Func Offset: 0x2c0
	// Line 3848, Address: 0x2f3238, Func Offset: 0x2c8
	// Line 3851, Address: 0x2f3240, Func Offset: 0x2d0
	// Line 3852, Address: 0x2f3250, Func Offset: 0x2e0
	// Line 3855, Address: 0x2f3258, Func Offset: 0x2e8
	// Line 3856, Address: 0x2f3268, Func Offset: 0x2f8
	// Line 3859, Address: 0x2f3270, Func Offset: 0x300
	// Line 3860, Address: 0x2f3280, Func Offset: 0x310
	// Line 3863, Address: 0x2f3288, Func Offset: 0x318
	// Line 3864, Address: 0x2f3290, Func Offset: 0x320
	// Line 3867, Address: 0x2f3298, Func Offset: 0x328
	// Line 3868, Address: 0x2f32b8, Func Offset: 0x348
	// Line 3871, Address: 0x2f32c0, Func Offset: 0x350
	// Line 3872, Address: 0x2f32d0, Func Offset: 0x360
	// Line 3886, Address: 0x2f32d8, Func Offset: 0x368
	// Line 3897, Address: 0x2f32e0, Func Offset: 0x370
	// Line 3903, Address: 0x2f32f0, Func Offset: 0x380
	// Line 3907, Address: 0x2f3308, Func Offset: 0x398
	// Line 3911, Address: 0x2f3310, Func Offset: 0x3a0
	// Line 3913, Address: 0x2f3318, Func Offset: 0x3a8
	// Line 3921, Address: 0x2f34a0, Func Offset: 0x530
	// Line 3928, Address: 0x2f34a8, Func Offset: 0x538
	// Line 3942, Address: 0x2f34b0, Func Offset: 0x540
	// Line 3944, Address: 0x2f34b8, Func Offset: 0x548
	// Line 3951, Address: 0x2f34c0, Func Offset: 0x550
	// Line 3952, Address: 0x2f34c8, Func Offset: 0x558
	// Line 3953, Address: 0x2f34d0, Func Offset: 0x560
	// Line 3955, Address: 0x2f34dc, Func Offset: 0x56c
	// Line 3956, Address: 0x2f34ec, Func Offset: 0x57c
	// Line 3960, Address: 0x2f34f4, Func Offset: 0x584
	// Line 3963, Address: 0x2f34fc, Func Offset: 0x58c
	// Line 3967, Address: 0x2f3508, Func Offset: 0x598
	// Line 3969, Address: 0x2f3510, Func Offset: 0x5a0
	// Line 3979, Address: 0x2f351c, Func Offset: 0x5ac
	// Line 3980, Address: 0x2f3528, Func Offset: 0x5b8
	// Line 3984, Address: 0x2f3538, Func Offset: 0x5c8
	// Line 3992, Address: 0x2f3540, Func Offset: 0x5d0
	// Line 3995, Address: 0x2f3554, Func Offset: 0x5e4
	// Line 3998, Address: 0x2f3568, Func Offset: 0x5f8
	// Line 4004, Address: 0x2f357c, Func Offset: 0x60c
	// Line 4008, Address: 0x2f358c, Func Offset: 0x61c
	// Line 4011, Address: 0x2f3594, Func Offset: 0x624
	// Line 4015, Address: 0x2f359c, Func Offset: 0x62c
	// Line 4017, Address: 0x2f36b4, Func Offset: 0x744
	// Line 4020, Address: 0x2f36c4, Func Offset: 0x754
	// Line 4023, Address: 0x2f382c, Func Offset: 0x8bc
	// Line 4048, Address: 0x2f3834, Func Offset: 0x8c4
	// Func End, Address: 0x2f3858, Func Offset: 0x8e8
}

// zSceneLoad__FP6zScene
// Start address: 0x2f3860
void zSceneLoad(zScene* ent)
{
	xSerial xser;
	xSerial* s;
	int32 sceneExist;
	int32 i;
	uint16 i;
	xBase* b;
	// Line 3394, Address: 0x2f3860, Func Offset: 0
	// Line 3407, Address: 0x2f3864, Func Offset: 0x4
	// Line 3394, Address: 0x2f3868, Func Offset: 0x8
	// Line 3407, Address: 0x2f386c, Func Offset: 0xc
	// Line 3394, Address: 0x2f3870, Func Offset: 0x10
	// Line 3402, Address: 0x2f3888, Func Offset: 0x28
	// Line 3407, Address: 0x2f388c, Func Offset: 0x2c
	// Line 3420, Address: 0x2f3894, Func Offset: 0x34
	// Line 3421, Address: 0x2f38a4, Func Offset: 0x44
	// Line 3425, Address: 0x2f38b0, Func Offset: 0x50
	// Line 3426, Address: 0x2f38c0, Func Offset: 0x60
	// Line 3427, Address: 0x2f38d0, Func Offset: 0x70
	// Line 3428, Address: 0x2f38e0, Func Offset: 0x80
	// Line 3429, Address: 0x2f38f0, Func Offset: 0x90
	// Line 3432, Address: 0x2f3900, Func Offset: 0xa0
	// Line 3434, Address: 0x2f390c, Func Offset: 0xac
	// Line 3435, Address: 0x2f3918, Func Offset: 0xb8
	// Line 3436, Address: 0x2f3924, Func Offset: 0xc4
	// Line 3438, Address: 0x2f3934, Func Offset: 0xd4
	// Line 3439, Address: 0x2f3940, Func Offset: 0xe0
	// Line 3441, Address: 0x2f395c, Func Offset: 0xfc
	// Line 3442, Address: 0x2f3968, Func Offset: 0x108
	// Line 3441, Address: 0x2f396c, Func Offset: 0x10c
	// Line 3442, Address: 0x2f3970, Func Offset: 0x110
	// Line 3441, Address: 0x2f3974, Func Offset: 0x114
	// Line 3442, Address: 0x2f3978, Func Offset: 0x118
	// Line 3443, Address: 0x2f3980, Func Offset: 0x120
	// Line 3447, Address: 0x2f3988, Func Offset: 0x128
	// Line 3450, Address: 0x2f39b4, Func Offset: 0x154
	// Line 3447, Address: 0x2f39b8, Func Offset: 0x158
	// Line 3450, Address: 0x2f39bc, Func Offset: 0x15c
	// Line 3471, Address: 0x2f39cc, Func Offset: 0x16c
	// Line 3475, Address: 0x2f39d4, Func Offset: 0x174
	// Line 3476, Address: 0x2f39dc, Func Offset: 0x17c
	// Line 3481, Address: 0x2f39e4, Func Offset: 0x184
	// Line 3491, Address: 0x2f39ec, Func Offset: 0x18c
	// Line 3498, Address: 0x2f39f8, Func Offset: 0x198
	// Line 3500, Address: 0x2f3a08, Func Offset: 0x1a8
	// Line 3503, Address: 0x2f3a14, Func Offset: 0x1b4
	// Line 3505, Address: 0x2f3a20, Func Offset: 0x1c0
	// Line 3506, Address: 0x2f3a2c, Func Offset: 0x1cc
	// Line 3509, Address: 0x2f3a38, Func Offset: 0x1d8
	// Line 3511, Address: 0x2f3a54, Func Offset: 0x1f4
	// Line 3515, Address: 0x2f3a60, Func Offset: 0x200
	// Line 3521, Address: 0x2f3a70, Func Offset: 0x210
	// Line 3524, Address: 0x2f3c4c, Func Offset: 0x3ec
	// Line 3525, Address: 0x2f3c54, Func Offset: 0x3f4
	// Line 3543, Address: 0x2f3c5c, Func Offset: 0x3fc
	// Line 3547, Address: 0x2f3c64, Func Offset: 0x404
	// Line 3550, Address: 0x2f3c6c, Func Offset: 0x40c
	// Line 3551, Address: 0x2f3c74, Func Offset: 0x414
	// Line 3554, Address: 0x2f3c7c, Func Offset: 0x41c
	// Line 3555, Address: 0x2f3c84, Func Offset: 0x424
	// Line 3558, Address: 0x2f3c8c, Func Offset: 0x42c
	// Line 3559, Address: 0x2f3c94, Func Offset: 0x434
	// Line 3562, Address: 0x2f3c9c, Func Offset: 0x43c
	// Line 3563, Address: 0x2f3ca4, Func Offset: 0x444
	// Line 3566, Address: 0x2f3cac, Func Offset: 0x44c
	// Line 3567, Address: 0x2f3cb4, Func Offset: 0x454
	// Line 3584, Address: 0x2f3cbc, Func Offset: 0x45c
	// Line 3585, Address: 0x2f3cc4, Func Offset: 0x464
	// Line 3593, Address: 0x2f3ccc, Func Offset: 0x46c
	// Line 3594, Address: 0x2f3cd4, Func Offset: 0x474
	// Line 3597, Address: 0x2f3cdc, Func Offset: 0x47c
	// Line 3598, Address: 0x2f3ce4, Func Offset: 0x484
	// Line 3605, Address: 0x2f3cec, Func Offset: 0x48c
	// Line 3606, Address: 0x2f3cf4, Func Offset: 0x494
	// Line 3609, Address: 0x2f3cfc, Func Offset: 0x49c
	// Line 3610, Address: 0x2f3d04, Func Offset: 0x4a4
	// Line 3613, Address: 0x2f3d0c, Func Offset: 0x4ac
	// Line 3614, Address: 0x2f3d14, Func Offset: 0x4b4
	// Line 3622, Address: 0x2f3d1c, Func Offset: 0x4bc
	// Line 3623, Address: 0x2f3d24, Func Offset: 0x4c4
	// Line 3626, Address: 0x2f3d2c, Func Offset: 0x4cc
	// Line 3627, Address: 0x2f3d34, Func Offset: 0x4d4
	// Line 3630, Address: 0x2f3d3c, Func Offset: 0x4dc
	// Line 3631, Address: 0x2f3d44, Func Offset: 0x4e4
	// Line 3638, Address: 0x2f3d4c, Func Offset: 0x4ec
	// Line 3639, Address: 0x2f3d54, Func Offset: 0x4f4
	// Line 3648, Address: 0x2f3d5c, Func Offset: 0x4fc
	// Line 3649, Address: 0x2f3d64, Func Offset: 0x504
	// Line 3657, Address: 0x2f3d6c, Func Offset: 0x50c
	// Line 3658, Address: 0x2f3d74, Func Offset: 0x514
	// Line 3661, Address: 0x2f3d7c, Func Offset: 0x51c
	// Line 3662, Address: 0x2f3d84, Func Offset: 0x524
	// Line 3665, Address: 0x2f3d8c, Func Offset: 0x52c
	// Line 3666, Address: 0x2f3d94, Func Offset: 0x534
	// Line 3677, Address: 0x2f3d9c, Func Offset: 0x53c
	// Line 3678, Address: 0x2f3da4, Func Offset: 0x544
	// Line 3681, Address: 0x2f3dac, Func Offset: 0x54c
	// Line 3682, Address: 0x2f3db4, Func Offset: 0x554
	// Line 3685, Address: 0x2f3dbc, Func Offset: 0x55c
	// Line 3686, Address: 0x2f3dc4, Func Offset: 0x564
	// Line 3689, Address: 0x2f3dcc, Func Offset: 0x56c
	// Line 3690, Address: 0x2f3dd4, Func Offset: 0x574
	// Line 3693, Address: 0x2f3ddc, Func Offset: 0x57c
	// Line 3694, Address: 0x2f3e6c, Func Offset: 0x60c
	// Line 3698, Address: 0x2f3e74, Func Offset: 0x614
	// Line 3699, Address: 0x2f3e7c, Func Offset: 0x61c
	// Line 3702, Address: 0x2f3e84, Func Offset: 0x624
	// Line 3720, Address: 0x2f3e8c, Func Offset: 0x62c
	// Line 3727, Address: 0x2f3eac, Func Offset: 0x64c
	// Line 3729, Address: 0x2f3eb8, Func Offset: 0x658
	// Line 3459, Address: 0x2f3ec0, Func Offset: 0x660
	// Line 3729, Address: 0x2f3ec8, Func Offset: 0x668
	// Line 3466, Address: 0x2f3ed0, Func Offset: 0x670
	// Line 3729, Address: 0x2f3ed4, Func Offset: 0x674
	// Line 3730, Address: 0x2f3ef4, Func Offset: 0x694
	// Func End, Address: 0x2f3f10, Func Offset: 0x6b0
}

// zSceneSave__FP6zScene
// Start address: 0x2f3f10
void zSceneSave(zScene* ent)
{
	xSerial xser;
	xSerial* s;
	int32 i;
	int32 i;
	xBase* b;
	// Line 3059, Address: 0x2f3f10, Func Offset: 0
	// Line 3078, Address: 0x2f3f14, Func Offset: 0x4
	// Line 3059, Address: 0x2f3f18, Func Offset: 0x8
	// Line 3078, Address: 0x2f3f1c, Func Offset: 0xc
	// Line 3059, Address: 0x2f3f20, Func Offset: 0x10
	// Line 3067, Address: 0x2f3f2c, Func Offset: 0x1c
	// Line 3059, Address: 0x2f3f30, Func Offset: 0x20
	// Line 3078, Address: 0x2f3f38, Func Offset: 0x28
	// Line 3081, Address: 0x2f3f40, Func Offset: 0x30
	// Line 3084, Address: 0x2f3f4c, Func Offset: 0x3c
	// Line 3085, Address: 0x2f3f5c, Func Offset: 0x4c
	// Line 3086, Address: 0x2f3f6c, Func Offset: 0x5c
	// Line 3087, Address: 0x2f3f7c, Func Offset: 0x6c
	// Line 3088, Address: 0x2f3f8c, Func Offset: 0x7c
	// Line 3091, Address: 0x2f3f9c, Func Offset: 0x8c
	// Line 3093, Address: 0x2f3fa8, Func Offset: 0x98
	// Line 3094, Address: 0x2f3fb4, Func Offset: 0xa4
	// Line 3095, Address: 0x2f3fc0, Func Offset: 0xb0
	// Line 3097, Address: 0x2f3fd0, Func Offset: 0xc0
	// Line 3098, Address: 0x2f3fdc, Func Offset: 0xcc
	// Line 3101, Address: 0x2f3ff8, Func Offset: 0xe8
	// Line 3112, Address: 0x2f4004, Func Offset: 0xf4
	// Line 3118, Address: 0x2f4014, Func Offset: 0x104
	// Line 3121, Address: 0x2f4020, Func Offset: 0x110
	// Line 3125, Address: 0x2f4028, Func Offset: 0x118
	// Line 3133, Address: 0x2f4030, Func Offset: 0x120
	// Line 3140, Address: 0x2f403c, Func Offset: 0x12c
	// Line 3143, Address: 0x2f4048, Func Offset: 0x138
	// Line 3145, Address: 0x2f4054, Func Offset: 0x144
	// Line 3146, Address: 0x2f4060, Func Offset: 0x150
	// Line 3148, Address: 0x2f406c, Func Offset: 0x15c
	// Line 3150, Address: 0x2f4088, Func Offset: 0x178
	// Line 3154, Address: 0x2f4094, Func Offset: 0x184
	// Line 3156, Address: 0x2f409c, Func Offset: 0x18c
	// Line 3161, Address: 0x2f40ac, Func Offset: 0x19c
	// Line 3164, Address: 0x2f4268, Func Offset: 0x358
	// Line 3165, Address: 0x2f4274, Func Offset: 0x364
	// Line 3185, Address: 0x2f427c, Func Offset: 0x36c
	// Line 3186, Address: 0x2f4280, Func Offset: 0x370
	// Line 3187, Address: 0x2f428c, Func Offset: 0x37c
	// Line 3190, Address: 0x2f4294, Func Offset: 0x384
	// Line 3191, Address: 0x2f4298, Func Offset: 0x388
	// Line 3192, Address: 0x2f42a4, Func Offset: 0x394
	// Line 3194, Address: 0x2f42ac, Func Offset: 0x39c
	// Line 3195, Address: 0x2f42b0, Func Offset: 0x3a0
	// Line 3196, Address: 0x2f42bc, Func Offset: 0x3ac
	// Line 3198, Address: 0x2f42c4, Func Offset: 0x3b4
	// Line 3199, Address: 0x2f42c8, Func Offset: 0x3b8
	// Line 3200, Address: 0x2f42d4, Func Offset: 0x3c4
	// Line 3202, Address: 0x2f42dc, Func Offset: 0x3cc
	// Line 3203, Address: 0x2f42e0, Func Offset: 0x3d0
	// Line 3204, Address: 0x2f42ec, Func Offset: 0x3dc
	// Line 3206, Address: 0x2f42f4, Func Offset: 0x3e4
	// Line 3207, Address: 0x2f42f8, Func Offset: 0x3e8
	// Line 3208, Address: 0x2f4304, Func Offset: 0x3f4
	// Line 3224, Address: 0x2f430c, Func Offset: 0x3fc
	// Line 3225, Address: 0x2f4310, Func Offset: 0x400
	// Line 3226, Address: 0x2f431c, Func Offset: 0x40c
	// Line 3233, Address: 0x2f4324, Func Offset: 0x414
	// Line 3234, Address: 0x2f4328, Func Offset: 0x418
	// Line 3235, Address: 0x2f4334, Func Offset: 0x424
	// Line 3237, Address: 0x2f433c, Func Offset: 0x42c
	// Line 3238, Address: 0x2f4340, Func Offset: 0x430
	// Line 3239, Address: 0x2f434c, Func Offset: 0x43c
	// Line 3245, Address: 0x2f4354, Func Offset: 0x444
	// Line 3246, Address: 0x2f4358, Func Offset: 0x448
	// Line 3247, Address: 0x2f4364, Func Offset: 0x454
	// Line 3249, Address: 0x2f436c, Func Offset: 0x45c
	// Line 3250, Address: 0x2f4370, Func Offset: 0x460
	// Line 3251, Address: 0x2f437c, Func Offset: 0x46c
	// Line 3253, Address: 0x2f4384, Func Offset: 0x474
	// Line 3254, Address: 0x2f4388, Func Offset: 0x478
	// Line 3255, Address: 0x2f4394, Func Offset: 0x484
	// Line 3262, Address: 0x2f439c, Func Offset: 0x48c
	// Line 3263, Address: 0x2f43a0, Func Offset: 0x490
	// Line 3264, Address: 0x2f43ac, Func Offset: 0x49c
	// Line 3266, Address: 0x2f43b4, Func Offset: 0x4a4
	// Line 3267, Address: 0x2f43b8, Func Offset: 0x4a8
	// Line 3268, Address: 0x2f43c4, Func Offset: 0x4b4
	// Line 3270, Address: 0x2f43cc, Func Offset: 0x4bc
	// Line 3271, Address: 0x2f43d0, Func Offset: 0x4c0
	// Line 3272, Address: 0x2f43dc, Func Offset: 0x4cc
	// Line 3278, Address: 0x2f43e4, Func Offset: 0x4d4
	// Line 3279, Address: 0x2f43e8, Func Offset: 0x4d8
	// Line 3280, Address: 0x2f43f4, Func Offset: 0x4e4
	// Line 3288, Address: 0x2f43fc, Func Offset: 0x4ec
	// Line 3289, Address: 0x2f4400, Func Offset: 0x4f0
	// Line 3290, Address: 0x2f440c, Func Offset: 0x4fc
	// Line 3298, Address: 0x2f4414, Func Offset: 0x504
	// Line 3299, Address: 0x2f4418, Func Offset: 0x508
	// Line 3300, Address: 0x2f4424, Func Offset: 0x514
	// Line 3302, Address: 0x2f442c, Func Offset: 0x51c
	// Line 3303, Address: 0x2f4430, Func Offset: 0x520
	// Line 3305, Address: 0x2f443c, Func Offset: 0x52c
	// Line 3307, Address: 0x2f4444, Func Offset: 0x534
	// Line 3308, Address: 0x2f4448, Func Offset: 0x538
	// Line 3309, Address: 0x2f4454, Func Offset: 0x544
	// Line 3319, Address: 0x2f445c, Func Offset: 0x54c
	// Line 3320, Address: 0x2f4460, Func Offset: 0x550
	// Line 3321, Address: 0x2f446c, Func Offset: 0x55c
	// Line 3323, Address: 0x2f4474, Func Offset: 0x564
	// Line 3324, Address: 0x2f4478, Func Offset: 0x568
	// Line 3325, Address: 0x2f4484, Func Offset: 0x574
	// Line 3328, Address: 0x2f448c, Func Offset: 0x57c
	// Line 3329, Address: 0x2f4490, Func Offset: 0x580
	// Line 3330, Address: 0x2f449c, Func Offset: 0x58c
	// Line 3331, Address: 0x2f44a4, Func Offset: 0x594
	// Line 3332, Address: 0x2f44a8, Func Offset: 0x598
	// Line 3333, Address: 0x2f44b4, Func Offset: 0x5a4
	// Line 3334, Address: 0x2f44bc, Func Offset: 0x5ac
	// Line 3335, Address: 0x2f44c0, Func Offset: 0x5b0
	// Line 3336, Address: 0x2f44cc, Func Offset: 0x5bc
	// Line 3339, Address: 0x2f44d4, Func Offset: 0x5c4
	// Line 3340, Address: 0x2f44d8, Func Offset: 0x5c8
	// Line 3341, Address: 0x2f44e4, Func Offset: 0x5d4
	// Line 3343, Address: 0x2f44ec, Func Offset: 0x5dc
	// Line 3344, Address: 0x2f44f0, Func Offset: 0x5e0
	// Line 3370, Address: 0x2f44fc, Func Offset: 0x5ec
	// Line 3377, Address: 0x2f4520, Func Offset: 0x610
	// Line 3380, Address: 0x2f452c, Func Offset: 0x61c
	// Func End, Address: 0x2f4548, Func Offset: 0x638
}

// zSceneSwitch__FP8_zPortali
// Start address: 0x2f4550
void zSceneSwitch(_zPortal* p, int32 forceSameScene)
{
	xPortalAsset* passet;
	uint32 nextUnlockedSceneID;
	uint32 nextSceneID;
	uint32 PlayerMarkerStartID;
	uint32 PlayerMarkerStartCamID;
	float32 PlayerStartAngle;
	pointer_asset* pointer;
	xMarkerAsset* marker;
	xEnt& player;
	xVec3& loc;
	pointer_asset* pointer;
	xEntFrame* frame;
	uint32 size;
	xMarkerAsset* m;
	xEntFrame* frame;
	// Line 2770, Address: 0x2f4550, Func Offset: 0
	// Line 2775, Address: 0x2f4554, Func Offset: 0x4
	// Line 2770, Address: 0x2f4558, Func Offset: 0x8
	// Line 2782, Address: 0x2f455c, Func Offset: 0xc
	// Line 2770, Address: 0x2f4560, Func Offset: 0x10
	// Line 2775, Address: 0x2f4570, Func Offset: 0x20
	// Line 2782, Address: 0x2f4578, Func Offset: 0x28
	// Line 2788, Address: 0x2f4584, Func Offset: 0x34
	// Line 2789, Address: 0x2f4594, Func Offset: 0x44
	// Line 2791, Address: 0x2f45a0, Func Offset: 0x50
	// Line 2792, Address: 0x2f45b0, Func Offset: 0x60
	// Line 2803, Address: 0x2f45b4, Func Offset: 0x64
	// Line 2805, Address: 0x2f467c, Func Offset: 0x12c
	// Line 2806, Address: 0x2f4684, Func Offset: 0x134
	// Line 2815, Address: 0x2f4688, Func Offset: 0x138
	// Line 2822, Address: 0x2f46a4, Func Offset: 0x154
	// Line 2833, Address: 0x2f46a8, Func Offset: 0x158
	// Line 2820, Address: 0x2f46b0, Func Offset: 0x160
	// Line 2826, Address: 0x2f46b8, Func Offset: 0x168
	// Line 2833, Address: 0x2f46bc, Func Offset: 0x16c
	// Line 2836, Address: 0x2f46c8, Func Offset: 0x178
	// Line 2839, Address: 0x2f46d8, Func Offset: 0x188
	// Line 2842, Address: 0x2f4724, Func Offset: 0x1d4
	// Line 2843, Address: 0x2f4744, Func Offset: 0x1f4
	// Line 2846, Address: 0x2f474c, Func Offset: 0x1fc
	// Line 2847, Address: 0x2f4758, Func Offset: 0x208
	// Line 2849, Address: 0x2f4760, Func Offset: 0x210
	// Line 2852, Address: 0x2f4764, Func Offset: 0x214
	// Line 2849, Address: 0x2f4770, Func Offset: 0x220
	// Line 2850, Address: 0x2f4774, Func Offset: 0x224
	// Line 2852, Address: 0x2f4778, Func Offset: 0x228
	// Line 2850, Address: 0x2f477c, Func Offset: 0x22c
	// Line 2852, Address: 0x2f4780, Func Offset: 0x230
	// Line 2855, Address: 0x2f47a0, Func Offset: 0x250
	// Line 2859, Address: 0x2f47a8, Func Offset: 0x258
	// Line 2862, Address: 0x2f47b8, Func Offset: 0x268
	// Line 2868, Address: 0x2f4804, Func Offset: 0x2b4
	// Line 2866, Address: 0x2f4808, Func Offset: 0x2b8
	// Line 2868, Address: 0x2f480c, Func Offset: 0x2bc
	// Line 2869, Address: 0x2f4814, Func Offset: 0x2c4
	// Line 2870, Address: 0x2f4824, Func Offset: 0x2d4
	// Line 2867, Address: 0x2f4828, Func Offset: 0x2d8
	// Line 2869, Address: 0x2f4830, Func Offset: 0x2e0
	// Line 2867, Address: 0x2f4834, Func Offset: 0x2e4
	// Line 2866, Address: 0x2f4838, Func Offset: 0x2e8
	// Line 2869, Address: 0x2f483c, Func Offset: 0x2ec
	// Line 2866, Address: 0x2f4840, Func Offset: 0x2f0
	// Line 2867, Address: 0x2f4844, Func Offset: 0x2f4
	// Line 2868, Address: 0x2f4850, Func Offset: 0x300
	// Line 2869, Address: 0x2f485c, Func Offset: 0x30c
	// Line 2870, Address: 0x2f4868, Func Offset: 0x318
	// Line 2871, Address: 0x2f4880, Func Offset: 0x330
	// Line 2872, Address: 0x2f48b0, Func Offset: 0x360
	// Line 2873, Address: 0x2f48b8, Func Offset: 0x368
	// Line 2874, Address: 0x2f48d0, Func Offset: 0x380
	// Line 2883, Address: 0x2f48d8, Func Offset: 0x388
	// Line 2884, Address: 0x2f48e4, Func Offset: 0x394
	// Line 2889, Address: 0x2f48ec, Func Offset: 0x39c
	// Line 2890, Address: 0x2f4910, Func Offset: 0x3c0
	// Line 2891, Address: 0x2f4938, Func Offset: 0x3e8
	// Line 2895, Address: 0x2f494c, Func Offset: 0x3fc
	// Line 2896, Address: 0x2f4950, Func Offset: 0x400
	// Line 2897, Address: 0x2f495c, Func Offset: 0x40c
	// Line 2898, Address: 0x2f4968, Func Offset: 0x418
	// Line 2895, Address: 0x2f496c, Func Offset: 0x41c
	// Line 2896, Address: 0x2f4970, Func Offset: 0x420
	// Line 2897, Address: 0x2f4974, Func Offset: 0x424
	// Line 2895, Address: 0x2f497c, Func Offset: 0x42c
	// Line 2897, Address: 0x2f4980, Func Offset: 0x430
	// Line 2898, Address: 0x2f4984, Func Offset: 0x434
	// Line 2896, Address: 0x2f4988, Func Offset: 0x438
	// Line 2897, Address: 0x2f498c, Func Offset: 0x43c
	// Line 2898, Address: 0x2f4998, Func Offset: 0x448
	// Line 2899, Address: 0x2f49a4, Func Offset: 0x454
	// Line 2901, Address: 0x2f49b0, Func Offset: 0x460
	// Line 2899, Address: 0x2f49b4, Func Offset: 0x464
	// Line 2901, Address: 0x2f4a14, Func Offset: 0x4c4
	// Line 2902, Address: 0x2f4a1c, Func Offset: 0x4cc
	// Line 2907, Address: 0x2f4a34, Func Offset: 0x4e4
	// Line 2910, Address: 0x2f4a40, Func Offset: 0x4f0
	// Func End, Address: 0x2f4a5c, Func Offset: 0x50c
}

// zSceneUpdateSFXWidgets__Fv
// Start address: 0x2f4a60
void zSceneUpdateSFXWidgets()
{
	zScene* s;
	// Line 2739, Address: 0x2f4a60, Func Offset: 0
	// Line 2742, Address: 0x2f4a68, Func Offset: 0x8
	// Func End, Address: 0x2f4a74, Func Offset: 0x14
}

// zSceneExit__Fi
// Start address: 0x2f4a80
void zSceneExit(int32 beginReload)
{
	zScene* s;
	RpWorld* world;
	int8 nextScene[8];
	int8 curScene[8];
	zParSys* ps;
	int32 i;
	int32 scenesCompleted;
	// Line 2412, Address: 0x2f4a80, Func Offset: 0
	// Line 2417, Address: 0x2f4aac, Func Offset: 0x2c
	// Line 2418, Address: 0x2f4ab4, Func Offset: 0x34
	// Line 2421, Address: 0x2f4abc, Func Offset: 0x3c
	// Line 2428, Address: 0x2f4acc, Func Offset: 0x4c
	// Line 2431, Address: 0x2f4ad4, Func Offset: 0x54
	// Line 2433, Address: 0x2f4adc, Func Offset: 0x5c
	// Line 2435, Address: 0x2f4b30, Func Offset: 0xb0
	// Line 2437, Address: 0x2f4b40, Func Offset: 0xc0
	// Line 2442, Address: 0x2f4b48, Func Offset: 0xc8
	// Line 2445, Address: 0x2f4b50, Func Offset: 0xd0
	// Line 2447, Address: 0x2f4b58, Func Offset: 0xd8
	// Line 2449, Address: 0x2f4b60, Func Offset: 0xe0
	// Line 2451, Address: 0x2f4b6c, Func Offset: 0xec
	// Line 2452, Address: 0x2f4b74, Func Offset: 0xf4
	// Line 2453, Address: 0x2f4b7c, Func Offset: 0xfc
	// Line 2455, Address: 0x2f4b84, Func Offset: 0x104
	// Line 2458, Address: 0x2f4b8c, Func Offset: 0x10c
	// Line 2461, Address: 0x2f4b94, Func Offset: 0x114
	// Line 2464, Address: 0x2f4ba8, Func Offset: 0x128
	// Line 2466, Address: 0x2f4bc8, Func Offset: 0x148
	// Line 2472, Address: 0x2f4bd0, Func Offset: 0x150
	// Line 2473, Address: 0x2f4bec, Func Offset: 0x16c
	// Line 2484, Address: 0x2f4c14, Func Offset: 0x194
	// Line 2487, Address: 0x2f4c1c, Func Offset: 0x19c
	// Line 2488, Address: 0x2f4c24, Func Offset: 0x1a4
	// Line 2489, Address: 0x2f4c2c, Func Offset: 0x1ac
	// Line 2491, Address: 0x2f4c34, Func Offset: 0x1b4
	// Line 2498, Address: 0x2f4c3c, Func Offset: 0x1bc
	// Line 2507, Address: 0x2f4c50, Func Offset: 0x1d0
	// Line 2509, Address: 0x2f4c58, Func Offset: 0x1d8
	// Line 2511, Address: 0x2f4c5c, Func Offset: 0x1dc
	// Line 2513, Address: 0x2f4c68, Func Offset: 0x1e8
	// Line 2517, Address: 0x2f4c78, Func Offset: 0x1f8
	// Line 2518, Address: 0x2f4c8c, Func Offset: 0x20c
	// Line 2522, Address: 0x2f4c90, Func Offset: 0x210
	// Line 2526, Address: 0x2f4c98, Func Offset: 0x218
	// Line 2532, Address: 0x2f4ca0, Func Offset: 0x220
	// Line 2535, Address: 0x2f4cb0, Func Offset: 0x230
	// Line 2538, Address: 0x2f4cb8, Func Offset: 0x238
	// Line 2542, Address: 0x2f4cc0, Func Offset: 0x240
	// Line 2544, Address: 0x2f4cc8, Func Offset: 0x248
	// Line 2545, Address: 0x2f4cd0, Func Offset: 0x250
	// Line 2547, Address: 0x2f4cd8, Func Offset: 0x258
	// Line 2548, Address: 0x2f4ce0, Func Offset: 0x260
	// Line 2549, Address: 0x2f4ce8, Func Offset: 0x268
	// Line 2550, Address: 0x2f4cf0, Func Offset: 0x270
	// Line 2551, Address: 0x2f4cf8, Func Offset: 0x278
	// Line 2554, Address: 0x2f4d00, Func Offset: 0x280
	// Line 2555, Address: 0x2f4d08, Func Offset: 0x288
	// Line 2556, Address: 0x2f4d10, Func Offset: 0x290
	// Line 2557, Address: 0x2f4d18, Func Offset: 0x298
	// Line 2556, Address: 0x2f4d1c, Func Offset: 0x29c
	// Line 2557, Address: 0x2f4d20, Func Offset: 0x2a0
	// Line 2625, Address: 0x2f4ddc, Func Offset: 0x35c
	// Line 2626, Address: 0x2f4dec, Func Offset: 0x36c
	// Line 2629, Address: 0x2f4df4, Func Offset: 0x374
	// Line 2636, Address: 0x2f4e00, Func Offset: 0x380
	// Line 2638, Address: 0x2f4e04, Func Offset: 0x384
	// Line 2641, Address: 0x2f4e0c, Func Offset: 0x38c
	// Line 2648, Address: 0x2f4e1c, Func Offset: 0x39c
	// Line 2643, Address: 0x2f4e20, Func Offset: 0x3a0
	// Line 2648, Address: 0x2f4e24, Func Offset: 0x3a4
	// Line 2651, Address: 0x2f4e2c, Func Offset: 0x3ac
	// Line 2659, Address: 0x2f4e38, Func Offset: 0x3b8
	// Line 2660, Address: 0x2f4e40, Func Offset: 0x3c0
	// Line 2663, Address: 0x2f4e44, Func Offset: 0x3c4
	// Line 2665, Address: 0x2f4ec0, Func Offset: 0x440
	// Line 2677, Address: 0x2f4ec8, Func Offset: 0x448
	// Line 2688, Address: 0x2f4edc, Func Offset: 0x45c
	// Line 2701, Address: 0x2f4ee0, Func Offset: 0x460
	// Line 2703, Address: 0x2f4ee8, Func Offset: 0x468
	// Line 2688, Address: 0x2f4eec, Func Offset: 0x46c
	// Line 2703, Address: 0x2f4ef0, Func Offset: 0x470
	// Line 2726, Address: 0x2f4ef8, Func Offset: 0x478
	// Line 2727, Address: 0x2f4f00, Func Offset: 0x480
	// Line 2728, Address: 0x2f4f08, Func Offset: 0x488
	// Line 2730, Address: 0x2f4f10, Func Offset: 0x490
	// Line 2731, Address: 0x2f5000, Func Offset: 0x580
	// Func End, Address: 0x2f5024, Func Offset: 0x5a4
}

// zSceneInit__FUii
// Start address: 0x2f5030
void zSceneInit(uint32 theSceneID, int32 reloadInProgress)
{
	uint32 theSceneID'702;
	int32 base_idx'701;
	int32 sClipVolumeTotal'700;
	float32 pdone;
	zScene* s;
	int32 i;
	int8* pSceneId;
	long32 time;
	int32 numDynAsset;
	xDynAsset* asset;
	uint32 idleWrite;
	uint32 j;
	iAnimFile* raw;
	uint32 j;
	iAnimFile* raw;
	int32 i;
	void* data;
	int32 typeCount;
	int32 j;
	int32 total_npcs;
	int32 base_idx;
	int32 curidx;
	int32 shadForEnemies;
	int32 lkitCount;
	void* lkitData;
	int32 i;
	zPlatform* pobj;
	// Line 1479, Address: 0x2f5030, Func Offset: 0
	// Line 1489, Address: 0x2f5060, Func Offset: 0x30
	// Line 1501, Address: 0x2f5068, Func Offset: 0x38
	// Line 1504, Address: 0x2f5074, Func Offset: 0x44
	// Line 1532, Address: 0x2f5088, Func Offset: 0x58
	// Line 1519, Address: 0x2f508c, Func Offset: 0x5c
	// Line 1533, Address: 0x2f5090, Func Offset: 0x60
	// Line 1519, Address: 0x2f5094, Func Offset: 0x64
	// Line 1533, Address: 0x2f509c, Func Offset: 0x6c
	// Line 1534, Address: 0x2f50cc, Func Offset: 0x9c
	// Line 1535, Address: 0x2f50fc, Func Offset: 0xcc
	// Line 1536, Address: 0x2f512c, Func Offset: 0xfc
	// Line 1540, Address: 0x2f515c, Func Offset: 0x12c
	// Line 1552, Address: 0x2f5168, Func Offset: 0x138
	// Line 1569, Address: 0x2f5170, Func Offset: 0x140
	// Line 1573, Address: 0x2f5178, Func Offset: 0x148
	// Line 1577, Address: 0x2f5180, Func Offset: 0x150
	// Line 1581, Address: 0x2f52ac, Func Offset: 0x27c
	// Line 1588, Address: 0x2f52b4, Func Offset: 0x284
	// Line 1605, Address: 0x2f52bc, Func Offset: 0x28c
	// Line 1608, Address: 0x2f52c4, Func Offset: 0x294
	// Line 1612, Address: 0x2f52cc, Func Offset: 0x29c
	// Line 1629, Address: 0x2f52d8, Func Offset: 0x2a8
	// Line 1654, Address: 0x2f52ec, Func Offset: 0x2bc
	// Line 1658, Address: 0x2f52f4, Func Offset: 0x2c4
	// Line 1654, Address: 0x2f52fc, Func Offset: 0x2cc
	// Line 1658, Address: 0x2f5300, Func Offset: 0x2d0
	// Line 1660, Address: 0x2f5314, Func Offset: 0x2e4
	// Line 1663, Address: 0x2f532c, Func Offset: 0x2fc
	// Line 1667, Address: 0x2f5340, Func Offset: 0x310
	// Line 1673, Address: 0x2f5344, Func Offset: 0x314
	// Line 1674, Address: 0x2f534c, Func Offset: 0x31c
	// Line 1673, Address: 0x2f5350, Func Offset: 0x320
	// Line 1674, Address: 0x2f5354, Func Offset: 0x324
	// Line 1692, Address: 0x2f5364, Func Offset: 0x334
	// Line 1705, Address: 0x2f5378, Func Offset: 0x348
	// Line 1706, Address: 0x2f537c, Func Offset: 0x34c
	// Line 1705, Address: 0x2f5380, Func Offset: 0x350
	// Line 1706, Address: 0x2f5384, Func Offset: 0x354
	// Line 1717, Address: 0x2f5390, Func Offset: 0x360
	// Line 1716, Address: 0x2f5394, Func Offset: 0x364
	// Line 1717, Address: 0x2f5398, Func Offset: 0x368
	// Line 1718, Address: 0x2f53a4, Func Offset: 0x374
	// Line 1729, Address: 0x2f53b0, Func Offset: 0x380
	// Line 1747, Address: 0x2f53c0, Func Offset: 0x390
	// Line 1748, Address: 0x2f53c4, Func Offset: 0x394
	// Line 1743, Address: 0x2f53c8, Func Offset: 0x398
	// Line 1748, Address: 0x2f53d8, Func Offset: 0x3a8
	// Line 1757, Address: 0x2f53ec, Func Offset: 0x3bc
	// Line 1763, Address: 0x2f53f0, Func Offset: 0x3c0
	// Line 1757, Address: 0x2f53f4, Func Offset: 0x3c4
	// Line 1764, Address: 0x2f53f8, Func Offset: 0x3c8
	// Line 1759, Address: 0x2f53fc, Func Offset: 0x3cc
	// Line 1764, Address: 0x2f540c, Func Offset: 0x3dc
	// Line 1766, Address: 0x2f5428, Func Offset: 0x3f8
	// Line 1770, Address: 0x2f543c, Func Offset: 0x40c
	// Line 1771, Address: 0x2f5444, Func Offset: 0x414
	// Line 1772, Address: 0x2f5470, Func Offset: 0x440
	// Line 1771, Address: 0x2f5478, Func Offset: 0x448
	// Line 1772, Address: 0x2f547c, Func Offset: 0x44c
	// Line 1773, Address: 0x2f5490, Func Offset: 0x460
	// Line 1776, Address: 0x2f5494, Func Offset: 0x464
	// Line 1790, Address: 0x2f54a8, Func Offset: 0x478
	// Line 1792, Address: 0x2f54b0, Func Offset: 0x480
	// Line 1797, Address: 0x2f54b8, Func Offset: 0x488
	// Line 1799, Address: 0x2f54cc, Func Offset: 0x49c
	// Line 1800, Address: 0x2f54dc, Func Offset: 0x4ac
	// Line 1803, Address: 0x2f54e4, Func Offset: 0x4b4
	// Line 1807, Address: 0x2f54f4, Func Offset: 0x4c4
	// Line 1808, Address: 0x2f5504, Func Offset: 0x4d4
	// Line 1809, Address: 0x2f5508, Func Offset: 0x4d8
	// Line 1825, Address: 0x2f550c, Func Offset: 0x4dc
	// Line 1808, Address: 0x2f5510, Func Offset: 0x4e0
	// Line 1809, Address: 0x2f5518, Func Offset: 0x4e8
	// Line 1825, Address: 0x2f5520, Func Offset: 0x4f0
	// Line 1807, Address: 0x2f5524, Func Offset: 0x4f4
	// Line 1812, Address: 0x2f5528, Func Offset: 0x4f8
	// Line 1808, Address: 0x2f552c, Func Offset: 0x4fc
	// Line 1809, Address: 0x2f5534, Func Offset: 0x504
	// Line 1812, Address: 0x2f553c, Func Offset: 0x50c
	// Line 1825, Address: 0x2f5540, Func Offset: 0x510
	// Line 1827, Address: 0x2f5548, Func Offset: 0x518
	// Line 1825, Address: 0x2f554c, Func Offset: 0x51c
	// Line 1827, Address: 0x2f5550, Func Offset: 0x520
	// Line 1828, Address: 0x2f5568, Func Offset: 0x538
	// Line 1830, Address: 0x2f557c, Func Offset: 0x54c
	// Line 1831, Address: 0x2f5580, Func Offset: 0x550
	// Line 1832, Address: 0x2f5584, Func Offset: 0x554
	// Line 1830, Address: 0x2f558c, Func Offset: 0x55c
	// Line 1831, Address: 0x2f5590, Func Offset: 0x560
	// Line 1832, Address: 0x2f5598, Func Offset: 0x568
	// Line 1506, Address: 0x2f55b0, Func Offset: 0x580
	// Line 1832, Address: 0x2f55b8, Func Offset: 0x588
	// Line 1720, Address: 0x2f55d8, Func Offset: 0x5a8
	// Line 1832, Address: 0x2f55e4, Func Offset: 0x5b4
	// Line 1721, Address: 0x2f55f0, Func Offset: 0x5c0
	// Line 1832, Address: 0x2f55f8, Func Offset: 0x5c8
	// Line 1724, Address: 0x2f5600, Func Offset: 0x5d0
	// Line 1832, Address: 0x2f5608, Func Offset: 0x5d8
	// Line 1731, Address: 0x2f5624, Func Offset: 0x5f4
	// Line 1832, Address: 0x2f5628, Func Offset: 0x5f8
	// Line 1732, Address: 0x2f5634, Func Offset: 0x604
	// Line 1832, Address: 0x2f5638, Func Offset: 0x608
	// Line 1733, Address: 0x2f5648, Func Offset: 0x618
	// Line 1734, Address: 0x2f564c, Func Offset: 0x61c
	// Line 1735, Address: 0x2f5650, Func Offset: 0x620
	// Line 1736, Address: 0x2f5654, Func Offset: 0x624
	// Line 1739, Address: 0x2f5658, Func Offset: 0x628
	// Line 1832, Address: 0x2f565c, Func Offset: 0x62c
	// Line 1755, Address: 0x2f56b8, Func Offset: 0x688
	// Line 1832, Address: 0x2f56bc, Func Offset: 0x68c
	// Line 1755, Address: 0x2f56c0, Func Offset: 0x690
	// Line 1832, Address: 0x2f56c4, Func Offset: 0x694
	// Line 1756, Address: 0x2f56e4, Func Offset: 0x6b4
	// Line 1832, Address: 0x2f56e8, Func Offset: 0x6b8
	// Line 1835, Address: 0x2f570c, Func Offset: 0x6dc
	// Line 1834, Address: 0x2f5710, Func Offset: 0x6e0
	// Line 1835, Address: 0x2f5714, Func Offset: 0x6e4
	// Line 1836, Address: 0x2f5720, Func Offset: 0x6f0
	// Line 1846, Address: 0x2f5728, Func Offset: 0x6f8
	// Line 1847, Address: 0x2f5730, Func Offset: 0x700
	// Line 1849, Address: 0x2f573c, Func Offset: 0x70c
	// Line 1850, Address: 0x2f5744, Func Offset: 0x714
	// Line 1851, Address: 0x2f5750, Func Offset: 0x720
	// Line 1853, Address: 0x2f5758, Func Offset: 0x728
	// Line 1854, Address: 0x2f5760, Func Offset: 0x730
	// Line 1855, Address: 0x2f5768, Func Offset: 0x738
	// Line 1857, Address: 0x2f5770, Func Offset: 0x740
	// Line 1858, Address: 0x2f5778, Func Offset: 0x748
	// Line 1859, Address: 0x2f5780, Func Offset: 0x750
	// Line 1861, Address: 0x2f5788, Func Offset: 0x758
	// Line 1864, Address: 0x2f5824, Func Offset: 0x7f4
	// Line 1866, Address: 0x2f582c, Func Offset: 0x7fc
	// Line 1867, Address: 0x2f5834, Func Offset: 0x804
	// Line 1869, Address: 0x2f583c, Func Offset: 0x80c
	// Line 1871, Address: 0x2f5844, Func Offset: 0x814
	// Line 1873, Address: 0x2f584c, Func Offset: 0x81c
	// Line 1875, Address: 0x2f5854, Func Offset: 0x824
	// Line 1878, Address: 0x2f585c, Func Offset: 0x82c
	// Line 1891, Address: 0x2f5864, Func Offset: 0x834
	// Line 1896, Address: 0x2f5878, Func Offset: 0x848
	// Line 1899, Address: 0x2f5880, Func Offset: 0x850
	// Line 1902, Address: 0x2f5884, Func Offset: 0x854
	// Line 1907, Address: 0x2f58fc, Func Offset: 0x8cc
	// Line 1909, Address: 0x2f5904, Func Offset: 0x8d4
	// Line 1910, Address: 0x2f590c, Func Offset: 0x8dc
	// Line 1911, Address: 0x2f5914, Func Offset: 0x8e4
	// Line 1921, Address: 0x2f591c, Func Offset: 0x8ec
	// Line 1931, Address: 0x2f5924, Func Offset: 0x8f4
	// Line 1932, Address: 0x2f592c, Func Offset: 0x8fc
	// Line 1939, Address: 0x2f5934, Func Offset: 0x904
	// Line 1940, Address: 0x2f593c, Func Offset: 0x90c
	// Line 1942, Address: 0x2f5944, Func Offset: 0x914
	// Line 1943, Address: 0x2f5954, Func Offset: 0x924
	// Line 1944, Address: 0x2f595c, Func Offset: 0x92c
	// Line 1945, Address: 0x2f5964, Func Offset: 0x934
	// Line 1946, Address: 0x2f596c, Func Offset: 0x93c
	// Line 1947, Address: 0x2f5974, Func Offset: 0x944
	// Line 1954, Address: 0x2f5978, Func Offset: 0x948
	// Line 1947, Address: 0x2f597c, Func Offset: 0x94c
	// Line 1954, Address: 0x2f5980, Func Offset: 0x950
	// Line 1965, Address: 0x2f598c, Func Offset: 0x95c
	// Line 1971, Address: 0x2f5994, Func Offset: 0x964
	// Line 1969, Address: 0x2f5998, Func Offset: 0x968
	// Line 1971, Address: 0x2f599c, Func Offset: 0x96c
	// Line 1976, Address: 0x2f59b0, Func Offset: 0x980
	// Line 1979, Address: 0x2f59bc, Func Offset: 0x98c
	// Line 1982, Address: 0x2f59cc, Func Offset: 0x99c
	// Line 1990, Address: 0x2f59d8, Func Offset: 0x9a8
	// Line 1991, Address: 0x2f59e4, Func Offset: 0x9b4
	// Line 1992, Address: 0x2f59f0, Func Offset: 0x9c0
	// Line 1993, Address: 0x2f5a14, Func Offset: 0x9e4
	// Line 1992, Address: 0x2f5a1c, Func Offset: 0x9ec
	// Line 1993, Address: 0x2f5a20, Func Offset: 0x9f0
	// Line 1997, Address: 0x2f5a2c, Func Offset: 0x9fc
	// Line 1999, Address: 0x2f5a38, Func Offset: 0xa08
	// Line 2012, Address: 0x2f5a98, Func Offset: 0xa68
	// Line 2042, Address: 0x2f5aa0, Func Offset: 0xa70
	// Line 2045, Address: 0x2f5ab0, Func Offset: 0xa80
	// Line 2049, Address: 0x2f5ab4, Func Offset: 0xa84
	// Line 2046, Address: 0x2f5ab8, Func Offset: 0xa88
	// Line 2049, Address: 0x2f5ac0, Func Offset: 0xa90
	// Line 2051, Address: 0x2f5ac8, Func Offset: 0xa98
	// Line 2055, Address: 0x2f5ad8, Func Offset: 0xaa8
	// Line 2056, Address: 0x2f5ae0, Func Offset: 0xab0
	// Line 2060, Address: 0x2f5aec, Func Offset: 0xabc
	// Line 2063, Address: 0x2f5af4, Func Offset: 0xac4
	// Line 2067, Address: 0x2f5af8, Func Offset: 0xac8
	// Line 2078, Address: 0x2f5b28, Func Offset: 0xaf8
	// Line 2079, Address: 0x2f5b2c, Func Offset: 0xafc
	// Line 2081, Address: 0x2f5b34, Func Offset: 0xb04
	// Line 2082, Address: 0x2f5b3c, Func Offset: 0xb0c
	// Line 2083, Address: 0x2f5b44, Func Offset: 0xb14
	// Line 2085, Address: 0x2f5b4c, Func Offset: 0xb1c
	// Line 2091, Address: 0x2f5b54, Func Offset: 0xb24
	// Line 2094, Address: 0x2f5b5c, Func Offset: 0xb2c
	// Line 2096, Address: 0x2f5b64, Func Offset: 0xb34
	// Line 2098, Address: 0x2f5b6c, Func Offset: 0xb3c
	// Line 2106, Address: 0x2f5b74, Func Offset: 0xb44
	// Line 2102, Address: 0x2f5b78, Func Offset: 0xb48
	// Line 2106, Address: 0x2f5b7c, Func Offset: 0xb4c
	// Line 2102, Address: 0x2f5b80, Func Offset: 0xb50
	// Line 2106, Address: 0x2f5b84, Func Offset: 0xb54
	// Line 2112, Address: 0x2f5b98, Func Offset: 0xb68
	// Line 2113, Address: 0x2f5ba0, Func Offset: 0xb70
	// Line 2127, Address: 0x2f5bbc, Func Offset: 0xb8c
	// Line 2129, Address: 0x2f5bc8, Func Offset: 0xb98
	// Line 2142, Address: 0x2f5c0c, Func Offset: 0xbdc
	// Line 2143, Address: 0x2f5c14, Func Offset: 0xbe4
	// Line 2151, Address: 0x2f5c20, Func Offset: 0xbf0
	// Line 2152, Address: 0x2f5c24, Func Offset: 0xbf4
	// Line 2154, Address: 0x2f5c44, Func Offset: 0xc14
	// Line 2155, Address: 0x2f5c5c, Func Offset: 0xc2c
	// Line 2157, Address: 0x2f5c68, Func Offset: 0xc38
	// Line 2158, Address: 0x2f5c80, Func Offset: 0xc50
	// Line 2159, Address: 0x2f5c98, Func Offset: 0xc68
	// Line 2160, Address: 0x2f5c9c, Func Offset: 0xc6c
	// Line 2162, Address: 0x2f5cc0, Func Offset: 0xc90
	// Line 2163, Address: 0x2f5cd8, Func Offset: 0xca8
	// Line 2165, Address: 0x2f5cf8, Func Offset: 0xcc8
	// Line 2170, Address: 0x2f5d10, Func Offset: 0xce0
	// Line 2180, Address: 0x2f5d18, Func Offset: 0xce8
	// Line 2186, Address: 0x2f5d20, Func Offset: 0xcf0
	// Line 2192, Address: 0x2f5d28, Func Offset: 0xcf8
	// Line 2195, Address: 0x2f5d30, Func Offset: 0xd00
	// Line 2197, Address: 0x2f5d38, Func Offset: 0xd08
	// Line 2205, Address: 0x2f5d5c, Func Offset: 0xd2c
	// Line 2209, Address: 0x2f5d64, Func Offset: 0xd34
	// Line 2213, Address: 0x2f5e40, Func Offset: 0xe10
	// Line 2221, Address: 0x2f5e4c, Func Offset: 0xe1c
	// Line 2236, Address: 0x2f5e54, Func Offset: 0xe24
	// Line 2239, Address: 0x2f5e5c, Func Offset: 0xe2c
	// Line 2244, Address: 0x2f5e64, Func Offset: 0xe34
	// Line 2247, Address: 0x2f5e6c, Func Offset: 0xe3c
	// Line 2250, Address: 0x2f5e74, Func Offset: 0xe44
	// Line 2273, Address: 0x2f5e7c, Func Offset: 0xe4c
	// Line 2279, Address: 0x2f5e84, Func Offset: 0xe54
	// Line 2285, Address: 0x2f5e90, Func Offset: 0xe60
	// Line 2286, Address: 0x2f5ea8, Func Offset: 0xe78
	// Line 2290, Address: 0x2f5eb0, Func Offset: 0xe80
	// Line 2293, Address: 0x2f5eb8, Func Offset: 0xe88
	// Line 2294, Address: 0x2f5ed8, Func Offset: 0xea8
	// Line 2295, Address: 0x2f5ee0, Func Offset: 0xeb0
	// Line 2296, Address: 0x2f5ee8, Func Offset: 0xeb8
	// Line 2297, Address: 0x2f5ef0, Func Offset: 0xec0
	// Line 2313, Address: 0x2f5ef8, Func Offset: 0xec8
	// Line 2315, Address: 0x2f5f08, Func Offset: 0xed8
	// Line 2316, Address: 0x2f5f14, Func Offset: 0xee4
	// Line 2318, Address: 0x2f5f28, Func Offset: 0xef8
	// Line 2319, Address: 0x2f5f30, Func Offset: 0xf00
	// Line 1837, Address: 0x2f5f4c, Func Offset: 0xf1c
	// Line 2319, Address: 0x2f5f50, Func Offset: 0xf20
	// Line 1837, Address: 0x2f5f54, Func Offset: 0xf24
	// Line 2319, Address: 0x2f5f58, Func Offset: 0xf28
	// Line 1999, Address: 0x2f5f7c, Func Offset: 0xf4c
	// Line 2319, Address: 0x2f5f88, Func Offset: 0xf58
	// Line 2061, Address: 0x2f5fd4, Func Offset: 0xfa4
	// Line 2319, Address: 0x2f5fd8, Func Offset: 0xfa8
	// Line 2061, Address: 0x2f5fe0, Func Offset: 0xfb0
	// Line 2209, Address: 0x2f5fe8, Func Offset: 0xfb8
	// Line 2319, Address: 0x2f5ff0, Func Offset: 0xfc0
	// Line 2323, Address: 0x2f5ff4, Func Offset: 0xfc4
	// Line 2327, Address: 0x2f6004, Func Offset: 0xfd4
	// Line 2347, Address: 0x2f6010, Func Offset: 0xfe0
	// Line 2349, Address: 0x2f6020, Func Offset: 0xff0
	// Line 2351, Address: 0x2f6024, Func Offset: 0xff4
	// Line 2352, Address: 0x2f6038, Func Offset: 0x1008
	// Line 2388, Address: 0x2f6050, Func Offset: 0x1020
	// Line 2396, Address: 0x2f605c, Func Offset: 0x102c
	// Line 2397, Address: 0x2f6068, Func Offset: 0x1038
	// Func End, Address: 0x2f6094, Func Offset: 0x1064
}

// BaseTypeNeedsUpdate__FUc
// Start address: 0x2f60a0
uint32 BaseTypeNeedsUpdate(uint8 baseType)
{
	// Line 1390, Address: 0x2f60a4, Func Offset: 0x4
	// Line 1432, Address: 0x2f61f4, Func Offset: 0x154
	// Line 1430, Address: 0x2f61fc, Func Offset: 0x15c
	// Line 1433, Address: 0x2f6200, Func Offset: 0x160
	// Func End, Address: 0x2f6208, Func Offset: 0x168
}

// PipeForAllSceneModels__FPFP8RpAtomicR10xModelPipeUi_v
// Start address: 0x2f6210
void PipeForAllSceneModels(void(*pipeCB)(RpAtomic*, xModelPipe&, uint32))
{
	int32 i;
	int32 j;
	int32 k;
	int32 numModels;
	RpAtomic* model;
	PKRAssetTOCInfo ainfo;
	uint32 numSubObjects;
	uint32 remainSubObjBits;
	uint32 currSubObjBits;
	RpAtomic* tempmodel;
	xModelPipe zeroPipe;
	// Line 1267, Address: 0x2f6210, Func Offset: 0
	// Line 1274, Address: 0x2f6214, Func Offset: 0x4
	// Line 1267, Address: 0x2f6218, Func Offset: 0x8
	// Line 1274, Address: 0x2f622c, Func Offset: 0x1c
	// Line 1267, Address: 0x2f6230, Func Offset: 0x20
	// Line 1274, Address: 0x2f6244, Func Offset: 0x34
	// Line 1275, Address: 0x2f624c, Func Offset: 0x3c
	// Line 1274, Address: 0x2f6250, Func Offset: 0x40
	// Line 1275, Address: 0x2f6254, Func Offset: 0x44
	// Line 1354, Address: 0x2f6260, Func Offset: 0x50
	// Line 1278, Address: 0x2f6268, Func Offset: 0x58
	// Line 1354, Address: 0x2f6274, Func Offset: 0x64
	// Line 1278, Address: 0x2f627c, Func Offset: 0x6c
	// Line 1354, Address: 0x2f6280, Func Offset: 0x70
	// Line 1285, Address: 0x2f6288, Func Offset: 0x78
	// Line 1354, Address: 0x2f6294, Func Offset: 0x84
	// Line 1294, Address: 0x2f62a0, Func Offset: 0x90
	// Line 1295, Address: 0x2f62a4, Func Offset: 0x94
	// Line 1354, Address: 0x2f62a8, Func Offset: 0x98
	// Line 1296, Address: 0x2f62ac, Func Offset: 0x9c
	// Line 1354, Address: 0x2f62b0, Func Offset: 0xa0
	// Line 1298, Address: 0x2f62b8, Func Offset: 0xa8
	// Line 1354, Address: 0x2f62bc, Func Offset: 0xac
	// Line 1306, Address: 0x2f62cc, Func Offset: 0xbc
	// Line 1309, Address: 0x2f62d0, Func Offset: 0xc0
	// Line 1306, Address: 0x2f62d4, Func Offset: 0xc4
	// Line 1354, Address: 0x2f62d8, Func Offset: 0xc8
	// Line 1310, Address: 0x2f630c, Func Offset: 0xfc
	// Line 1354, Address: 0x2f6310, Func Offset: 0x100
	// Line 1345, Address: 0x2f6388, Func Offset: 0x178
	// Line 1354, Address: 0x2f638c, Func Offset: 0x17c
	// Line 1349, Address: 0x2f6394, Func Offset: 0x184
	// Line 1354, Address: 0x2f6398, Func Offset: 0x188
	// Line 1318, Address: 0x2f63d8, Func Offset: 0x1c8
	// Line 1354, Address: 0x2f63e0, Func Offset: 0x1d0
	// Line 1320, Address: 0x2f63ec, Func Offset: 0x1dc
	// Line 1354, Address: 0x2f63f0, Func Offset: 0x1e0
	// Line 1320, Address: 0x2f63f8, Func Offset: 0x1e8
	// Line 1354, Address: 0x2f63fc, Func Offset: 0x1ec
	// Line 1327, Address: 0x2f6420, Func Offset: 0x210
	// Line 1354, Address: 0x2f6424, Func Offset: 0x214
	// Line 1328, Address: 0x2f643c, Func Offset: 0x22c
	// Line 1354, Address: 0x2f6448, Func Offset: 0x238
	// Func End, Address: 0x2f6478, Func Offset: 0x268
}

// PipeAddStuffCB__FP8RpAtomicR10xModelPipeUi
// Start address: 0x2f6480
void PipeAddStuffCB(RpAtomic* data, xModelPipe& pipe)
{
	// Line 1255, Address: 0x2f6480, Func Offset: 0
	// Line 1256, Address: 0x2f649c, Func Offset: 0x1c
	// Line 1257, Address: 0x2f64d4, Func Offset: 0x54
	// Line 1258, Address: 0x2f64dc, Func Offset: 0x5c
	// Func End, Address: 0x2f64e4, Func Offset: 0x64
}

// PipeCountStuffCB__FP8RpAtomicR10xModelPipeUi
// Start address: 0x2f64f0
void PipeCountStuffCB()
{
	// Line 1249, Address: 0x2f64f0, Func Offset: 0
	// Line 1250, Address: 0x2f64f8, Func Offset: 0x8
	// Func End, Address: 0x2f6500, Func Offset: 0x10
}

// zSceneSet__FP5xBasei
// Start address: 0x2f6500
void zSceneSet(xBase* b, int32 idx)
{
	// Line 1239, Address: 0x2f6500, Func Offset: 0
	// Line 1240, Address: 0x2f6514, Func Offset: 0x14
	// Func End, Address: 0x2f651c, Func Offset: 0x1c
}

// zSceneInitFunc_Dispatcher__FP6zSceneP24zSceneObjectInstanceDescUi
// Start address: 0x2f6520
uint32 zSceneInitFunc_Dispatcher(zScene* s, zSceneObjectInstanceDesc* desc, uint32 base_idx)
{
	int32 count;
	st_ZDISPATCH_DATA* dpat_pool;
	int32 idx;
	xBase* b;
	xEntAsset* asset;
	// Line 1177, Address: 0x2f6520, Func Offset: 0
	// Line 1182, Address: 0x2f6548, Func Offset: 0x28
	// Line 1184, Address: 0x2f6558, Func Offset: 0x38
	// Line 1217, Address: 0x2f6560, Func Offset: 0x40
	// Line 1191, Address: 0x2f6570, Func Offset: 0x50
	// Line 1217, Address: 0x2f6574, Func Offset: 0x54
	// Line 1193, Address: 0x2f657c, Func Offset: 0x5c
	// Line 1192, Address: 0x2f6580, Func Offset: 0x60
	// Line 1217, Address: 0x2f6588, Func Offset: 0x68
	// Line 1196, Address: 0x2f6590, Func Offset: 0x70
	// Line 1217, Address: 0x2f6594, Func Offset: 0x74
	// Line 1196, Address: 0x2f659c, Func Offset: 0x7c
	// Line 1199, Address: 0x2f65a0, Func Offset: 0x80
	// Line 1217, Address: 0x2f65ac, Func Offset: 0x8c
	// Line 1206, Address: 0x2f65b4, Func Offset: 0x94
	// Line 1203, Address: 0x2f65b8, Func Offset: 0x98
	// Line 1217, Address: 0x2f65bc, Func Offset: 0x9c
	// Line 1206, Address: 0x2f65c0, Func Offset: 0xa0
	// Line 1217, Address: 0x2f65c4, Func Offset: 0xa4
	// Line 1218, Address: 0x2f65fc, Func Offset: 0xdc
	// Func End, Address: 0x2f6620, Func Offset: 0x100
}

// zSceneInitFunc_LobMaster__FP6zSceneP24zSceneObjectInstanceDescUi
// Start address: 0x2f6620
uint32 zSceneInitFunc_LobMaster(uint32 base_idx)
{
	// Line 1173, Address: 0x2f6620, Func Offset: 0
	// Func End, Address: 0x2f6628, Func Offset: 0x8
}

// zSceneInitFunc_Volume__FP6zSceneP24zSceneObjectInstanceDescUi
// Start address: 0x2f6630
uint32 zSceneInitFunc_Volume(zScene* s, zSceneObjectInstanceDesc* desc, uint32 base_idx)
{
	int32 count;
	int32 idx;
	xBase* b;
	// Line 1132, Address: 0x2f6630, Func Offset: 0
	// Line 1140, Address: 0x2f6634, Func Offset: 0x4
	// Line 1132, Address: 0x2f6638, Func Offset: 0x8
	// Line 1140, Address: 0x2f6654, Func Offset: 0x24
	// Line 1132, Address: 0x2f6658, Func Offset: 0x28
	// Line 1137, Address: 0x2f6664, Func Offset: 0x34
	// Line 1140, Address: 0x2f6674, Func Offset: 0x44
	// Line 1143, Address: 0x2f6690, Func Offset: 0x60
	// Line 1148, Address: 0x2f6698, Func Offset: 0x68
	// Line 1149, Address: 0x2f669c, Func Offset: 0x6c
	// Line 1148, Address: 0x2f66a0, Func Offset: 0x70
	// Line 1149, Address: 0x2f66a4, Func Offset: 0x74
	// Line 1148, Address: 0x2f66a8, Func Offset: 0x78
	// Line 1149, Address: 0x2f66b0, Func Offset: 0x80
	// Line 1151, Address: 0x2f66b8, Func Offset: 0x88
	// Line 1153, Address: 0x2f66d0, Func Offset: 0xa0
	// Line 1156, Address: 0x2f66d8, Func Offset: 0xa8
	// Line 1159, Address: 0x2f66f0, Func Offset: 0xc0
	// Line 1163, Address: 0x2f66fc, Func Offset: 0xcc
	// Line 1164, Address: 0x2f670c, Func Offset: 0xdc
	// Line 1166, Address: 0x2f6710, Func Offset: 0xe0
	// Line 1140, Address: 0x2f671c, Func Offset: 0xec
	// Line 1166, Address: 0x2f6728, Func Offset: 0xf8
	// Line 1140, Address: 0x2f674c, Func Offset: 0x11c
	// Line 1166, Address: 0x2f6758, Func Offset: 0x128
	// Line 1140, Address: 0x2f6760, Func Offset: 0x130
	// Line 1166, Address: 0x2f6764, Func Offset: 0x134
	// Line 1140, Address: 0x2f6784, Func Offset: 0x154
	// Line 1166, Address: 0x2f6788, Func Offset: 0x158
	// Line 1140, Address: 0x2f6798, Func Offset: 0x168
	// Line 1167, Address: 0x2f67a0, Func Offset: 0x170
	// Func End, Address: 0x2f67c8, Func Offset: 0x198
}

// zSceneInitFunc_Surface__FP6zSceneP24zSceneObjectInstanceDescUi
// Start address: 0x2f67d0
uint32 zSceneInitFunc_Surface(zScene* s, zSceneObjectInstanceDesc* desc, uint32 base_idx)
{
	int32 count;
	int32 idx;
	xBase* b;
	// Line 1097, Address: 0x2f67d0, Func Offset: 0
	// Line 1102, Address: 0x2f67f0, Func Offset: 0x20
	// Line 1105, Address: 0x2f6800, Func Offset: 0x30
	// Line 1127, Address: 0x2f6808, Func Offset: 0x38
	// Line 1110, Address: 0x2f6820, Func Offset: 0x50
	// Line 1112, Address: 0x2f6824, Func Offset: 0x54
	// Line 1110, Address: 0x2f6828, Func Offset: 0x58
	// Line 1127, Address: 0x2f682c, Func Offset: 0x5c
	// Line 1117, Address: 0x2f6840, Func Offset: 0x70
	// Line 1127, Address: 0x2f6844, Func Offset: 0x74
	// Line 1114, Address: 0x2f6848, Func Offset: 0x78
	// Line 1127, Address: 0x2f684c, Func Offset: 0x7c
	// Line 1128, Address: 0x2f6878, Func Offset: 0xa8
	// Func End, Address: 0x2f6894, Func Offset: 0xc4
}

// zSceneInitFunc_Camera__FP6zSceneP24zSceneObjectInstanceDescUi
// Start address: 0x2f68a0
uint32 zSceneInitFunc_Camera(zScene* s, zSceneObjectInstanceDesc* desc, uint32 base_idx)
{
	int32 count;
	zCamMarker* camBlock;
	int32 idx;
	xBase* b;
	xCamAsset* assetCam;
	// Line 1058, Address: 0x2f68a0, Func Offset: 0
	// Line 1063, Address: 0x2f68c4, Func Offset: 0x24
	// Line 1065, Address: 0x2f68d4, Func Offset: 0x34
	// Line 1092, Address: 0x2f68dc, Func Offset: 0x3c
	// Line 1067, Address: 0x2f68e8, Func Offset: 0x48
	// Line 1092, Address: 0x2f68ec, Func Offset: 0x4c
	// Line 1067, Address: 0x2f68f0, Func Offset: 0x50
	// Line 1092, Address: 0x2f68f4, Func Offset: 0x54
	// Line 1069, Address: 0x2f6904, Func Offset: 0x64
	// Line 1068, Address: 0x2f6908, Func Offset: 0x68
	// Line 1092, Address: 0x2f6910, Func Offset: 0x70
	// Line 1075, Address: 0x2f691c, Func Offset: 0x7c
	// Line 1092, Address: 0x2f6928, Func Offset: 0x88
	// Line 1081, Address: 0x2f6930, Func Offset: 0x90
	// Line 1078, Address: 0x2f6934, Func Offset: 0x94
	// Line 1092, Address: 0x2f6938, Func Offset: 0x98
	// Line 1081, Address: 0x2f693c, Func Offset: 0x9c
	// Line 1092, Address: 0x2f6940, Func Offset: 0xa0
	// Line 1093, Address: 0x2f697c, Func Offset: 0xdc
	// Func End, Address: 0x2f699c, Func Offset: 0xfc
}

// zSceneInitFunc_Player__FP6zSceneP24zSceneObjectInstanceDescUi
// Start address: 0x2f69a0
uint32 zSceneInitFunc_Player(zScene* s, zSceneObjectInstanceDesc* desc, uint32 base_idx)
{
	int32 count;
	zEnt* entBlock;
	int32 idx;
	xBase* b;
	xEntAsset* asset;
	// Line 982, Address: 0x2f69a0, Func Offset: 0
	// Line 987, Address: 0x2f69c8, Func Offset: 0x28
	// Line 989, Address: 0x2f69d8, Func Offset: 0x38
	// Line 1053, Address: 0x2f69e0, Func Offset: 0x40
	// Line 993, Address: 0x2f69ec, Func Offset: 0x4c
	// Line 1053, Address: 0x2f69f0, Func Offset: 0x50
	// Line 993, Address: 0x2f69f4, Func Offset: 0x54
	// Line 1053, Address: 0x2f69fc, Func Offset: 0x5c
	// Line 995, Address: 0x2f6a10, Func Offset: 0x70
	// Line 994, Address: 0x2f6a14, Func Offset: 0x74
	// Line 1053, Address: 0x2f6a1c, Func Offset: 0x7c
	// Line 1007, Address: 0x2f6a34, Func Offset: 0x94
	// Line 1008, Address: 0x2f6a38, Func Offset: 0x98
	// Line 1053, Address: 0x2f6a3c, Func Offset: 0x9c
	// Line 1009, Address: 0x2f6a58, Func Offset: 0xb8
	// Line 1053, Address: 0x2f6a5c, Func Offset: 0xbc
	// Line 1039, Address: 0x2f6a78, Func Offset: 0xd8
	// Line 1053, Address: 0x2f6a84, Func Offset: 0xe4
	// Line 1054, Address: 0x2f6abc, Func Offset: 0x11c
	// Func End, Address: 0x2f6ae0, Func Offset: 0x140
}

// zSceneInitFunc_MovePoint__FP6zSceneP24zSceneObjectInstanceDescUi
// Start address: 0x2f6ae0
uint32 zSceneInitFunc_MovePoint(zScene* s, zSceneObjectInstanceDesc* desc, uint32 base_idx)
{
	int32 count;
	uint32 assetSize;
	zMovePoint* movpBlock;
	int32 idx;
	xBase* b;
	xBaseAsset* basset;
	// Line 895, Address: 0x2f6ae0, Func Offset: 0
	// Line 898, Address: 0x2f6b08, Func Offset: 0x28
	// Line 901, Address: 0x2f6b0c, Func Offset: 0x2c
	// Line 903, Address: 0x2f6b1c, Func Offset: 0x3c
	// Line 904, Address: 0x2f6b24, Func Offset: 0x44
	// Line 906, Address: 0x2f6b2c, Func Offset: 0x4c
	// Line 908, Address: 0x2f6b30, Func Offset: 0x50
	// Line 906, Address: 0x2f6b38, Func Offset: 0x58
	// Line 908, Address: 0x2f6b40, Func Offset: 0x60
	// Line 911, Address: 0x2f6b48, Func Offset: 0x68
	// Line 914, Address: 0x2f6b54, Func Offset: 0x74
	// Line 917, Address: 0x2f6b6c, Func Offset: 0x8c
	// Line 920, Address: 0x2f6b74, Func Offset: 0x94
	// Line 917, Address: 0x2f6b78, Func Offset: 0x98
	// Line 920, Address: 0x2f6b84, Func Offset: 0xa4
	// Line 923, Address: 0x2f6b98, Func Offset: 0xb8
	// Line 927, Address: 0x2f6ba4, Func Offset: 0xc4
	// Line 928, Address: 0x2f6bb4, Func Offset: 0xd4
	// Line 929, Address: 0x2f6bb8, Func Offset: 0xd8
	// Line 930, Address: 0x2f6bbc, Func Offset: 0xdc
	// Func End, Address: 0x2f6bdc, Func Offset: 0xfc
}

// zSceneInitFunc_Default__FP6zSceneP24zSceneObjectInstanceDescUi
// Start address: 0x2f6be0
uint32 zSceneInitFunc_Default(zScene* s, zSceneObjectInstanceDesc* desc, uint32 base_idx)
{
	uint8* block;
	int32 count;
	uint32 assetSize;
	uint32 offset;
	xBase* b;
	int32 i;
	void* asset;
	// Line 800, Address: 0x2f6be0, Func Offset: 0
	// Line 803, Address: 0x2f6c10, Func Offset: 0x30
	// Line 811, Address: 0x2f6c14, Func Offset: 0x34
	// Line 810, Address: 0x2f6c18, Func Offset: 0x38
	// Line 811, Address: 0x2f6c1c, Func Offset: 0x3c
	// Line 812, Address: 0x2f6c28, Func Offset: 0x48
	// Line 819, Address: 0x2f6c30, Func Offset: 0x50
	// Line 840, Address: 0x2f6c3c, Func Offset: 0x5c
	// Line 814, Address: 0x2f6c48, Func Offset: 0x68
	// Line 840, Address: 0x2f6c4c, Func Offset: 0x6c
	// Line 814, Address: 0x2f6c54, Func Offset: 0x74
	// Line 840, Address: 0x2f6c58, Func Offset: 0x78
	// Line 817, Address: 0x2f6c5c, Func Offset: 0x7c
	// Line 840, Address: 0x2f6c6c, Func Offset: 0x8c
	// Line 823, Address: 0x2f6c70, Func Offset: 0x90
	// Line 840, Address: 0x2f6c74, Func Offset: 0x94
	// Line 828, Address: 0x2f6c80, Func Offset: 0xa0
	// Line 840, Address: 0x2f6c84, Func Offset: 0xa4
	// Line 827, Address: 0x2f6c88, Func Offset: 0xa8
	// Line 840, Address: 0x2f6c8c, Func Offset: 0xac
	// Line 841, Address: 0x2f6cd4, Func Offset: 0xf4
	// Func End, Address: 0x2f6cfc, Func Offset: 0x11c
}

// zSceneInitFunc_DefaultEnt__FP6zSceneP24zSceneObjectInstanceDescUi
// Start address: 0x2f6d00
uint32 zSceneInitFunc_DefaultEnt(zScene* s, zSceneObjectInstanceDesc* desc, uint32 base_idx)
{
	uint8* block;
	int32 count;
	uint32 assetSize;
	uint32 offset;
	xBase* b;
	int32 i;
	void* asset;
	// Line 752, Address: 0x2f6d00, Func Offset: 0
	// Line 753, Address: 0x2f6d14, Func Offset: 0x14
	// Line 752, Address: 0x2f6d18, Func Offset: 0x18
	// Line 755, Address: 0x2f6d38, Func Offset: 0x38
	// Line 763, Address: 0x2f6d3c, Func Offset: 0x3c
	// Line 762, Address: 0x2f6d40, Func Offset: 0x40
	// Line 763, Address: 0x2f6d44, Func Offset: 0x44
	// Line 764, Address: 0x2f6d50, Func Offset: 0x50
	// Line 772, Address: 0x2f6d58, Func Offset: 0x58
	// Line 796, Address: 0x2f6d64, Func Offset: 0x64
	// Line 766, Address: 0x2f6d70, Func Offset: 0x70
	// Line 796, Address: 0x2f6d74, Func Offset: 0x74
	// Line 766, Address: 0x2f6d7c, Func Offset: 0x7c
	// Line 796, Address: 0x2f6d80, Func Offset: 0x80
	// Line 769, Address: 0x2f6d84, Func Offset: 0x84
	// Line 796, Address: 0x2f6d98, Func Offset: 0x98
	// Line 774, Address: 0x2f6d9c, Func Offset: 0x9c
	// Line 796, Address: 0x2f6da0, Func Offset: 0xa0
	// Line 780, Address: 0x2f6dac, Func Offset: 0xac
	// Line 796, Address: 0x2f6db0, Func Offset: 0xb0
	// Line 778, Address: 0x2f6db4, Func Offset: 0xb4
	// Line 796, Address: 0x2f6db8, Func Offset: 0xb8
	// Line 783, Address: 0x2f6ddc, Func Offset: 0xdc
	// Line 796, Address: 0x2f6de0, Func Offset: 0xe0
	// Line 797, Address: 0x2f6e1c, Func Offset: 0x11c
	// Func End, Address: 0x2f6e4c, Func Offset: 0x14c
}

// init_dynamic_type__19@unnamed@zWad3_cpp@FR6zSceneUiRCQ219@unnamed@zWad3_cpp@17dynamic_type_data
// Start address: 0x2f6e50
uint32 init_dynamic_type(zScene& s, uint32 index, dynamic_type_data& d)
{
	int32 count;
	uint32 type;
	int32 dyn_size;
	int32 i;
	int32 cnt;
	uint32 asset_size;
	xDynAsset* a;
	xBase* b;
	// Line 667, Address: 0x2f6e50, Func Offset: 0
	// Line 669, Address: 0x2f6e54, Func Offset: 0x4
	// Line 667, Address: 0x2f6e58, Func Offset: 0x8
	// Line 669, Address: 0x2f6e70, Func Offset: 0x20
	// Line 667, Address: 0x2f6e74, Func Offset: 0x24
	// Line 669, Address: 0x2f6e88, Func Offset: 0x38
	// Line 670, Address: 0x2f6e94, Func Offset: 0x44
	// Line 671, Address: 0x2f6e98, Func Offset: 0x48
	// Line 673, Address: 0x2f6ea4, Func Offset: 0x54
	// Line 679, Address: 0x2f6eac, Func Offset: 0x5c
	// Line 680, Address: 0x2f6eb8, Func Offset: 0x68
	// Line 681, Address: 0x2f6ec8, Func Offset: 0x78
	// Line 716, Address: 0x2f6ed8, Func Offset: 0x88
	// Line 671, Address: 0x2f6ee0, Func Offset: 0x90
	// Line 716, Address: 0x2f6ee8, Func Offset: 0x98
	// Line 675, Address: 0x2f6eec, Func Offset: 0x9c
	// Line 716, Address: 0x2f6ef0, Func Offset: 0xa0
	// Line 675, Address: 0x2f6efc, Func Offset: 0xac
	// Line 684, Address: 0x2f6f10, Func Offset: 0xc0
	// Line 716, Address: 0x2f6f1c, Func Offset: 0xcc
	// Line 694, Address: 0x2f6f3c, Func Offset: 0xec
	// Line 716, Address: 0x2f6f40, Func Offset: 0xf0
	// Line 699, Address: 0x2f6f4c, Func Offset: 0xfc
	// Line 716, Address: 0x2f6f50, Func Offset: 0x100
	// Line 702, Address: 0x2f6f60, Func Offset: 0x110
	// Line 716, Address: 0x2f6f64, Func Offset: 0x114
	// Line 702, Address: 0x2f6f6c, Func Offset: 0x11c
	// Line 716, Address: 0x2f6f70, Func Offset: 0x120
	// Line 707, Address: 0x2f6f9c, Func Offset: 0x14c
	// Line 716, Address: 0x2f6fa0, Func Offset: 0x150
	// Line 696, Address: 0x2f6fd0, Func Offset: 0x180
	// Line 716, Address: 0x2f6fd4, Func Offset: 0x184
	// Line 696, Address: 0x2f6fe0, Func Offset: 0x190
	// Line 716, Address: 0x2f6fe4, Func Offset: 0x194
	// Line 698, Address: 0x2f6fec, Func Offset: 0x19c
	// Line 716, Address: 0x2f6ff0, Func Offset: 0x1a0
	// Line 717, Address: 0x2f7000, Func Offset: 0x1b0
	// Func End, Address: 0x2f7030, Func Offset: 0x1e0
}

