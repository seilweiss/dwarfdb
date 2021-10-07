



xRegion xSTGetLocalizationEnum();
int8* xSTGetLocalizationCode();
void xSTSetLocalizationCode(int8* code);
st_STRAN_SCENE* XST_find_bySID(uint32 sid, int32 flagHipHop);
st_STRAN_SCENE* XST_lock_next();
int8* XST_translate_sid_path(uint32 sid, int8* exten, uint8 local);
int8* xST_xAssetID_HIPFullPath(uint32 aid, uint32* sceneID);
int8* xST_xAssetID_HIPFullPath(uint32 aid);
int32 xSTGetAssetInfoByType(uint32 type, int32 idx, PKRAssetTOCInfo* tocainfo);
int32 xSTGetAssetInfo(uint32 aid, PKRAssetTOCInfo* tocainfo);
void* xSTFindAssetByType(uint32 type, int32 idx, uint32* size);
int32 xSTAssetCountByType(uint32 type);
void* xSTFindAsset(uint32 aid, uint32* size);
int8* xSTAssetName(void* raw_HIP_asset);
int8* xSTAssetName(uint32 aid);
int32 xSTSwitchScene(uint32 sid, void* userdata, int32(*progmon)(void*, float32));
void xSTDisconnect(uint32 sid, int32 flg_hiphop);
float32 xSTLoadStep();
void xSTUnLoadSceneMany(uint32 sceneID, int32 type);
int32 xSTQueueSceneAssets(uint32 sid, int32 flg_hiphop);
int32 xSTPreLoadScene(uint32 sid, void* userdata, int32 flg_hiphop, int32 fileflags, int8* filename);
int32 xSTShutdown();
int32 xSTStartup(PKRAssetType* handlers);

// xSTGetLocalizationEnum__Fv
// Start address: 0x44e490
xRegion xSTGetLocalizationEnum()
{
	// Line 1268, Address: 0x44e490, Func Offset: 0
	// Func End, Address: 0x44e498, Func Offset: 0x8
}

// xSTGetLocalizationCode__Fv
// Start address: 0x44e4a0
int8* xSTGetLocalizationCode()
{
	// Line 1263, Address: 0x44e4a0, Func Offset: 0
	// Func End, Address: 0x44e4a8, Func Offset: 0x8
}

// xSTSetLocalizationCode__FPCc
// Start address: 0x44e4b0
void xSTSetLocalizationCode(int8* code)
{
	xRegion iRegion;
	// Line 1244, Address: 0x44e4b0, Func Offset: 0
	// Line 1245, Address: 0x44e4b4, Func Offset: 0x4
	// Line 1244, Address: 0x44e4b8, Func Offset: 0x8
	// Line 1246, Address: 0x44e4c8, Func Offset: 0x18
	// Line 1245, Address: 0x44e4cc, Func Offset: 0x1c
	// Line 1246, Address: 0x44e4d0, Func Offset: 0x20
	// Line 1248, Address: 0x44e4d8, Func Offset: 0x28
	// Line 1258, Address: 0x44e4e8, Func Offset: 0x38
	// Line 1252, Address: 0x44e4f4, Func Offset: 0x44
	// Line 1258, Address: 0x44e4f8, Func Offset: 0x48
	// Line 1255, Address: 0x44e514, Func Offset: 0x64
	// Line 1258, Address: 0x44e51c, Func Offset: 0x6c
	// Func End, Address: 0x44e544, Func Offset: 0x94
}

// XST_find_bySID__FUii
// Start address: 0x44e550
st_STRAN_SCENE* XST_find_bySID(uint32 sid, int32 flagHipHop)
{
	st_STRAN_SCENE* da_sdata;
	int32 i;
	// Line 1223, Address: 0x44e550, Func Offset: 0
	// Line 1217, Address: 0x44e560, Func Offset: 0x10
	// Line 1223, Address: 0x44e564, Func Offset: 0x14
	// Line 1224, Address: 0x44e56c, Func Offset: 0x1c
	// Line 1237, Address: 0x44e580, Func Offset: 0x30
	// Line 1240, Address: 0x44e590, Func Offset: 0x40
	// Line 1230, Address: 0x44e5a8, Func Offset: 0x58
	// Line 1240, Address: 0x44e5ac, Func Offset: 0x5c
	// Line 1236, Address: 0x44e5b4, Func Offset: 0x64
	// Line 1241, Address: 0x44e5bc, Func Offset: 0x6c
	// Func End, Address: 0x44e5c4, Func Offset: 0x74
}

// XST_lock_next__Fv
// Start address: 0x44e5d0
st_STRAN_SCENE* XST_lock_next()
{
	st_STRAN_SCENE* sdata;
	int32 i;
	int32 uselock;
	// Line 1104, Address: 0x44e5d0, Func Offset: 0
	// Line 1110, Address: 0x44e5d4, Func Offset: 0x4
	// Line 1104, Address: 0x44e5d8, Func Offset: 0x8
	// Line 1107, Address: 0x44e5dc, Func Offset: 0xc
	// Line 1104, Address: 0x44e5e0, Func Offset: 0x10
	// Line 1105, Address: 0x44e5e8, Func Offset: 0x18
	// Line 1110, Address: 0x44e5ec, Func Offset: 0x1c
	// Line 1111, Address: 0x44e5fc, Func Offset: 0x2c
	// Line 1112, Address: 0x44e608, Func Offset: 0x38
	// Line 1115, Address: 0x44e614, Func Offset: 0x44
	// Line 1113, Address: 0x44e61c, Func Offset: 0x4c
	// Line 1112, Address: 0x44e63c, Func Offset: 0x6c
	// Line 1115, Address: 0x44e640, Func Offset: 0x70
	// Line 1117, Address: 0x44e64c, Func Offset: 0x7c
	// Line 1119, Address: 0x44e654, Func Offset: 0x84
	// Line 1125, Address: 0x44e668, Func Offset: 0x98
	// Line 1126, Address: 0x44e670, Func Offset: 0xa0
	// Line 1129, Address: 0x44e674, Func Offset: 0xa4
	// Func End, Address: 0x44e688, Func Offset: 0xb8
}

// XST_translate_sid_path__FUiPcb
// Start address: 0x44e690
int8* XST_translate_sid_path(uint32 sid, int8* exten, uint8 local)
{
	int8 path_delimiter[2];
	int8 subdir[4];
	int8 fname[64];
	// Line 1062, Address: 0x44e690, Func Offset: 0
	// Line 1073, Address: 0x44e694, Func Offset: 0x4
	// Line 1062, Address: 0x44e698, Func Offset: 0x8
	// Line 1068, Address: 0x44e6b0, Func Offset: 0x20
	// Line 1073, Address: 0x44e6b4, Func Offset: 0x24
	// Line 1068, Address: 0x44e6b8, Func Offset: 0x28
	// Line 1073, Address: 0x44e6bc, Func Offset: 0x2c
	// Line 1068, Address: 0x44e6c0, Func Offset: 0x30
	// Line 1073, Address: 0x44e6c8, Func Offset: 0x38
	// Line 1075, Address: 0x44e6cc, Func Offset: 0x3c
	// Line 1076, Address: 0x44e6e0, Func Offset: 0x50
	// Line 1077, Address: 0x44e6f0, Func Offset: 0x60
	// Line 1088, Address: 0x44e70c, Func Offset: 0x7c
	// Line 1089, Address: 0x44e718, Func Offset: 0x88
	// Line 1091, Address: 0x44e728, Func Offset: 0x98
	// Line 1081, Address: 0x44e734, Func Offset: 0xa4
	// Line 1091, Address: 0x44e738, Func Offset: 0xa8
	// Line 1082, Address: 0x44e744, Func Offset: 0xb4
	// Line 1091, Address: 0x44e74c, Func Offset: 0xbc
	// Line 1086, Address: 0x44e780, Func Offset: 0xf0
	// Line 1091, Address: 0x44e784, Func Offset: 0xf4
	// Line 1086, Address: 0x44e790, Func Offset: 0x100
	// Line 1091, Address: 0x44e794, Func Offset: 0x104
	// Line 1092, Address: 0x44e7ac, Func Offset: 0x11c
	// Func End, Address: 0x44e7c4, Func Offset: 0x134
}

// xST_xAssetID_HIPFullPath__FUiPUi
// Start address: 0x44e7d0
int8* xST_xAssetID_HIPFullPath(uint32 aid, uint32* sceneID)
{
	int8* da_hipname;
	int32 rc;
	int32 i;
	// Line 877, Address: 0x44e7d0, Func Offset: 0
	// Line 884, Address: 0x44e7d4, Func Offset: 0x4
	// Line 877, Address: 0x44e7d8, Func Offset: 0x8
	// Line 878, Address: 0x44e7e4, Func Offset: 0x14
	// Line 877, Address: 0x44e7e8, Func Offset: 0x18
	// Line 884, Address: 0x44e7fc, Func Offset: 0x2c
	// Line 877, Address: 0x44e800, Func Offset: 0x30
	// Line 884, Address: 0x44e804, Func Offset: 0x34
	// Line 885, Address: 0x44e838, Func Offset: 0x68
	// Line 886, Address: 0x44e844, Func Offset: 0x74
	// Line 890, Address: 0x44e880, Func Offset: 0xb0
	// Line 891, Address: 0x44e894, Func Offset: 0xc4
	// Line 897, Address: 0x44e89c, Func Offset: 0xcc
	// Line 886, Address: 0x44e8c8, Func Offset: 0xf8
	// Line 897, Address: 0x44e8cc, Func Offset: 0xfc
	// Line 886, Address: 0x44e8d0, Func Offset: 0x100
	// Line 897, Address: 0x44e8d4, Func Offset: 0x104
	// Line 886, Address: 0x44e8e0, Func Offset: 0x110
	// Line 897, Address: 0x44e8f0, Func Offset: 0x120
	// Line 899, Address: 0x44e900, Func Offset: 0x130
	// Line 900, Address: 0x44e904, Func Offset: 0x134
	// Func End, Address: 0x44e928, Func Offset: 0x158
}

// xST_xAssetID_HIPFullPath__FUi
// Start address: 0x44e930
int8* xST_xAssetID_HIPFullPath(uint32 aid)
{
	// Line 873, Address: 0x44e930, Func Offset: 0
	// Func End, Address: 0x44e938, Func Offset: 0x8
}

// xSTGetAssetInfoByType__FUiiP15PKRAssetTOCInfo
// Start address: 0x44e940
int32 xSTGetAssetInfoByType(uint32 type, int32 idx, PKRAssetTOCInfo* tocainfo)
{
	int32 found;
	int32 sum;
	int32 cnt;
	int32 i;
	int32 rc;
	// Line 778, Address: 0x44e940, Func Offset: 0
	// Line 790, Address: 0x44e944, Func Offset: 0x4
	// Line 778, Address: 0x44e948, Func Offset: 0x8
	// Line 779, Address: 0x44e95c, Func Offset: 0x1c
	// Line 778, Address: 0x44e960, Func Offset: 0x20
	// Line 790, Address: 0x44e968, Func Offset: 0x28
	// Line 778, Address: 0x44e96c, Func Offset: 0x2c
	// Line 783, Address: 0x44e980, Func Offset: 0x40
	// Line 778, Address: 0x44e984, Func Offset: 0x44
	// Line 790, Address: 0x44e988, Func Offset: 0x48
	// Line 791, Address: 0x44e9b8, Func Offset: 0x78
	// Line 792, Address: 0x44e9c4, Func Offset: 0x84
	// Line 796, Address: 0x44ea00, Func Offset: 0xc0
	// Line 799, Address: 0x44ea18, Func Offset: 0xd8
	// Line 803, Address: 0x44ea34, Func Offset: 0xf4
	// Line 805, Address: 0x44ea50, Func Offset: 0x110
	// Line 817, Address: 0x44ea58, Func Offset: 0x118
	// Line 824, Address: 0x44ea60, Func Offset: 0x120
	// Line 826, Address: 0x44ea70, Func Offset: 0x130
	// Line 792, Address: 0x44ea88, Func Offset: 0x148
	// Line 826, Address: 0x44ea8c, Func Offset: 0x14c
	// Line 792, Address: 0x44ea90, Func Offset: 0x150
	// Line 826, Address: 0x44ea94, Func Offset: 0x154
	// Line 792, Address: 0x44eaa0, Func Offset: 0x160
	// Line 827, Address: 0x44eab0, Func Offset: 0x170
	// Func End, Address: 0x44eae0, Func Offset: 0x1a0
}

// xSTGetAssetInfo__FUiP15PKRAssetTOCInfo
// Start address: 0x44eae0
int32 xSTGetAssetInfo(uint32 aid, PKRAssetTOCInfo* tocainfo)
{
	int32 found;
	int32 i;
	int32 rc;
	// Line 743, Address: 0x44eae0, Func Offset: 0
	// Line 746, Address: 0x44eae4, Func Offset: 0x4
	// Line 743, Address: 0x44eae8, Func Offset: 0x8
	// Line 744, Address: 0x44eb04, Func Offset: 0x24
	// Line 743, Address: 0x44eb08, Func Offset: 0x28
	// Line 746, Address: 0x44eb0c, Func Offset: 0x2c
	// Line 747, Address: 0x44eb40, Func Offset: 0x60
	// Line 748, Address: 0x44eb4c, Func Offset: 0x6c
	// Line 763, Address: 0x44eb88, Func Offset: 0xa8
	// Line 764, Address: 0x44eba0, Func Offset: 0xc0
	// Line 770, Address: 0x44eba8, Func Offset: 0xc8
	// Line 748, Address: 0x44ebd0, Func Offset: 0xf0
	// Line 770, Address: 0x44ebd4, Func Offset: 0xf4
	// Line 748, Address: 0x44ebd8, Func Offset: 0xf8
	// Line 770, Address: 0x44ebdc, Func Offset: 0xfc
	// Line 748, Address: 0x44ebe8, Func Offset: 0x108
	// Line 767, Address: 0x44ebf8, Func Offset: 0x118
	// Line 772, Address: 0x44ebfc, Func Offset: 0x11c
	// Line 773, Address: 0x44ec00, Func Offset: 0x120
	// Func End, Address: 0x44ec20, Func Offset: 0x140
}

// xSTFindAssetByType__FUiiPUi
// Start address: 0x44ec20
void* xSTFindAssetByType(uint32 type, int32 idx, uint32* size)
{
	void* memptr;
	int32 i;
	int32 sum;
	int32 cnt;
	// Line 712, Address: 0x44ec20, Func Offset: 0
	// Line 720, Address: 0x44ec24, Func Offset: 0x4
	// Line 712, Address: 0x44ec28, Func Offset: 0x8
	// Line 714, Address: 0x44ec3c, Func Offset: 0x1c
	// Line 712, Address: 0x44ec40, Func Offset: 0x20
	// Line 720, Address: 0x44ec54, Func Offset: 0x34
	// Line 712, Address: 0x44ec58, Func Offset: 0x38
	// Line 717, Address: 0x44ec5c, Func Offset: 0x3c
	// Line 712, Address: 0x44ec60, Func Offset: 0x40
	// Line 720, Address: 0x44ec64, Func Offset: 0x44
	// Line 721, Address: 0x44ec98, Func Offset: 0x78
	// Line 722, Address: 0x44eca4, Func Offset: 0x84
	// Line 725, Address: 0x44ece0, Func Offset: 0xc0
	// Line 726, Address: 0x44ecf4, Func Offset: 0xd4
	// Line 729, Address: 0x44ed0c, Func Offset: 0xec
	// Line 731, Address: 0x44ed28, Func Offset: 0x108
	// Line 733, Address: 0x44ed30, Func Offset: 0x110
	// Line 734, Address: 0x44ed34, Func Offset: 0x114
	// Line 736, Address: 0x44ed48, Func Offset: 0x128
	// Line 722, Address: 0x44ed60, Func Offset: 0x140
	// Line 736, Address: 0x44ed64, Func Offset: 0x144
	// Line 722, Address: 0x44ed68, Func Offset: 0x148
	// Line 736, Address: 0x44ed6c, Func Offset: 0x14c
	// Line 722, Address: 0x44ed78, Func Offset: 0x158
	// Line 737, Address: 0x44ed88, Func Offset: 0x168
	// Func End, Address: 0x44edb4, Func Offset: 0x194
}

// xSTAssetCountByType__FUi
// Start address: 0x44edc0
int32 xSTAssetCountByType(uint32 type)
{
	int32 sum;
	int32 cnt;
	int32 i;
	// Line 676, Address: 0x44edc0, Func Offset: 0
	// Line 683, Address: 0x44edc4, Func Offset: 0x4
	// Line 676, Address: 0x44edc8, Func Offset: 0x8
	// Line 683, Address: 0x44edcc, Func Offset: 0xc
	// Line 676, Address: 0x44edd0, Func Offset: 0x10
	// Line 677, Address: 0x44ede0, Func Offset: 0x20
	// Line 676, Address: 0x44ede4, Func Offset: 0x24
	// Line 683, Address: 0x44ede8, Func Offset: 0x28
	// Line 684, Address: 0x44ee18, Func Offset: 0x58
	// Line 685, Address: 0x44ee24, Func Offset: 0x64
	// Line 688, Address: 0x44ee60, Func Offset: 0xa0
	// Line 689, Address: 0x44ee74, Func Offset: 0xb4
	// Line 690, Address: 0x44ee78, Func Offset: 0xb8
	// Line 692, Address: 0x44ee88, Func Offset: 0xc8
	// Line 685, Address: 0x44eea0, Func Offset: 0xe0
	// Line 692, Address: 0x44eea4, Func Offset: 0xe4
	// Line 685, Address: 0x44eea8, Func Offset: 0xe8
	// Line 692, Address: 0x44eeac, Func Offset: 0xec
	// Line 685, Address: 0x44eeb8, Func Offset: 0xf8
	// Line 693, Address: 0x44eec8, Func Offset: 0x108
	// Func End, Address: 0x44eee4, Func Offset: 0x124
}

// xSTFindAsset__FUiPUi
// Start address: 0x44eef0
void* xSTFindAsset(uint32 aid, uint32* size)
{
	void* memloc;
	int32 i;
	int32 asssize;
	// Line 594, Address: 0x44eef0, Func Offset: 0
	// Line 596, Address: 0x44ef0c, Func Offset: 0x1c
	// Line 616, Address: 0x44ef14, Func Offset: 0x24
	// Line 599, Address: 0x44ef18, Func Offset: 0x28
	// Line 616, Address: 0x44ef1c, Func Offset: 0x2c
	// Line 617, Address: 0x44ef50, Func Offset: 0x60
	// Line 618, Address: 0x44ef5c, Func Offset: 0x6c
	// Line 637, Address: 0x44ef98, Func Offset: 0xa8
	// Line 636, Address: 0x44ef9c, Func Offset: 0xac
	// Line 637, Address: 0x44efa0, Func Offset: 0xb0
	// Line 638, Address: 0x44efbc, Func Offset: 0xcc
	// Line 667, Address: 0x44efc4, Func Offset: 0xd4
	// Line 597, Address: 0x44efdc, Func Offset: 0xec
	// Line 667, Address: 0x44efe4, Func Offset: 0xf4
	// Line 618, Address: 0x44eff8, Func Offset: 0x108
	// Line 667, Address: 0x44effc, Func Offset: 0x10c
	// Line 618, Address: 0x44f000, Func Offset: 0x110
	// Line 667, Address: 0x44f004, Func Offset: 0x114
	// Line 618, Address: 0x44f010, Func Offset: 0x120
	// Line 667, Address: 0x44f020, Func Offset: 0x130
	// Line 670, Address: 0x44f030, Func Offset: 0x140
	// Func End, Address: 0x44f04c, Func Offset: 0x15c
}

// xSTAssetName__FPv
// Start address: 0x44f050
int8* xSTAssetName(void* raw_HIP_asset)
{
	int8* aname;
	int32 i;
	uint32 aid;
	// Line 532, Address: 0x44f050, Func Offset: 0
	// Line 535, Address: 0x44f054, Func Offset: 0x4
	// Line 532, Address: 0x44f058, Func Offset: 0x8
	// Line 533, Address: 0x44f05c, Func Offset: 0xc
	// Line 532, Address: 0x44f060, Func Offset: 0x10
	// Line 535, Address: 0x44f064, Func Offset: 0x14
	// Line 532, Address: 0x44f068, Func Offset: 0x18
	// Line 535, Address: 0x44f078, Func Offset: 0x28
	// Line 536, Address: 0x44f0a8, Func Offset: 0x58
	// Line 537, Address: 0x44f0b4, Func Offset: 0x64
	// Line 540, Address: 0x44f0f0, Func Offset: 0xa0
	// Line 541, Address: 0x44f0f8, Func Offset: 0xa8
	// Line 542, Address: 0x44f10c, Func Offset: 0xbc
	// Line 544, Address: 0x44f114, Func Offset: 0xc4
	// Line 546, Address: 0x44f128, Func Offset: 0xd8
	// Line 537, Address: 0x44f140, Func Offset: 0xf0
	// Line 546, Address: 0x44f144, Func Offset: 0xf4
	// Line 537, Address: 0x44f148, Func Offset: 0xf8
	// Line 546, Address: 0x44f14c, Func Offset: 0xfc
	// Line 537, Address: 0x44f158, Func Offset: 0x108
	// Line 547, Address: 0x44f168, Func Offset: 0x118
	// Func End, Address: 0x44f184, Func Offset: 0x134
}

// xSTAssetName__FUi
// Start address: 0x44f190
int8* xSTAssetName(uint32 aid)
{
	int8* aname;
	int32 i;
	// Line 510, Address: 0x44f190, Func Offset: 0
	// Line 516, Address: 0x44f194, Func Offset: 0x4
	// Line 510, Address: 0x44f198, Func Offset: 0x8
	// Line 511, Address: 0x44f19c, Func Offset: 0xc
	// Line 510, Address: 0x44f1a0, Func Offset: 0x10
	// Line 516, Address: 0x44f1a4, Func Offset: 0x14
	// Line 510, Address: 0x44f1a8, Func Offset: 0x18
	// Line 516, Address: 0x44f1b4, Func Offset: 0x24
	// Line 517, Address: 0x44f1e8, Func Offset: 0x58
	// Line 518, Address: 0x44f1f4, Func Offset: 0x64
	// Line 520, Address: 0x44f234, Func Offset: 0xa4
	// Line 521, Address: 0x44f23c, Func Offset: 0xac
	// Line 522, Address: 0x44f24c, Func Offset: 0xbc
	// Line 525, Address: 0x44f254, Func Offset: 0xc4
	// Line 527, Address: 0x44f268, Func Offset: 0xd8
	// Line 518, Address: 0x44f280, Func Offset: 0xf0
	// Line 527, Address: 0x44f284, Func Offset: 0xf4
	// Line 518, Address: 0x44f288, Func Offset: 0xf8
	// Line 527, Address: 0x44f28c, Func Offset: 0xfc
	// Line 518, Address: 0x44f298, Func Offset: 0x108
	// Line 528, Address: 0x44f2a8, Func Offset: 0x118
	// Func End, Address: 0x44f2c0, Func Offset: 0x130
}

// xSTSwitchScene__FUiPvPFPvf_i
// Start address: 0x44f2c0
int32 xSTSwitchScene(uint32 sid, void* userdata, int32(*progmon)(void*, float32))
{
	st_STRAN_SCENE* sdata;
	int32 rc;
	int32 i;
	int32 types[3];
	// Line 474, Address: 0x44f2c0, Func Offset: 0
	// Line 483, Address: 0x44f2c4, Func Offset: 0x4
	// Line 474, Address: 0x44f2c8, Func Offset: 0x8
	// Line 476, Address: 0x44f2d4, Func Offset: 0x14
	// Line 474, Address: 0x44f2d8, Func Offset: 0x18
	// Line 484, Address: 0x44f2f4, Func Offset: 0x34
	// Line 474, Address: 0x44f2f8, Func Offset: 0x38
	// Line 484, Address: 0x44f2fc, Func Offset: 0x3c
	// Line 483, Address: 0x44f300, Func Offset: 0x40
	// Line 485, Address: 0x44f320, Func Offset: 0x60
	// Line 486, Address: 0x44f330, Func Offset: 0x70
	// Line 489, Address: 0x44f338, Func Offset: 0x78
	// Line 492, Address: 0x44f350, Func Offset: 0x90
	// Line 496, Address: 0x44f364, Func Offset: 0xa4
	// Line 497, Address: 0x44f36c, Func Offset: 0xac
	// Line 498, Address: 0x44f37c, Func Offset: 0xbc
	// Line 502, Address: 0x44f38c, Func Offset: 0xcc
	// Line 503, Address: 0x44f390, Func Offset: 0xd0
	// Func End, Address: 0x44f3b8, Func Offset: 0xf8
}

// xSTDisconnect__FUii
// Start address: 0x44f3c0
void xSTDisconnect(uint32 sid, int32 flg_hiphop)
{
	st_STRAN_SCENE* sdata;
	// Line 437, Address: 0x44f3c0, Func Offset: 0
	// Line 443, Address: 0x44f3c8, Func Offset: 0x8
	// Line 447, Address: 0x44f3d0, Func Offset: 0x10
	// Line 448, Address: 0x44f3d8, Func Offset: 0x18
	// Line 452, Address: 0x44f3ec, Func Offset: 0x2c
	// Func End, Address: 0x44f3f8, Func Offset: 0x38
}

// xSTLoadStep__FUi
// Start address: 0x44f400
float32 xSTLoadStep()
{
	float32 pct;
	int32 rc;
	// Line 406, Address: 0x44f400, Func Offset: 0
	// Line 414, Address: 0x44f404, Func Offset: 0x4
	// Line 406, Address: 0x44f408, Func Offset: 0x8
	// Line 414, Address: 0x44f40c, Func Offset: 0xc
	// Line 418, Address: 0x44f414, Func Offset: 0x14
	// Line 429, Address: 0x44f434, Func Offset: 0x34
	// Line 432, Address: 0x44f43c, Func Offset: 0x3c
	// Line 433, Address: 0x44f440, Func Offset: 0x40
	// Func End, Address: 0x44f450, Func Offset: 0x50
}

// xSTUnLoadSceneMany__FUii
// Start address: 0x44f450
void xSTUnLoadSceneMany(uint32 sceneID, int32 type)
{
	st_STRAN_SCENE* sdata;
	st_STRAN_SCENE* sdata;
	st_STRAN_SCENE* sdata;
	// Line 362, Address: 0x44f450, Func Offset: 0
	// Line 363, Address: 0x44f468, Func Offset: 0x18
	// Line 373, Address: 0x44f474, Func Offset: 0x24
	// Line 383, Address: 0x44f480, Func Offset: 0x30
	// Line 392, Address: 0x44f48c, Func Offset: 0x3c
	// Line 364, Address: 0x44f49c, Func Offset: 0x4c
	// Line 392, Address: 0x44f4a0, Func Offset: 0x50
	// Line 369, Address: 0x44f4f0, Func Offset: 0xa0
	// Line 392, Address: 0x44f4f4, Func Offset: 0xa4
	// Line 369, Address: 0x44f4f8, Func Offset: 0xa8
	// Line 392, Address: 0x44f4fc, Func Offset: 0xac
	// Line 369, Address: 0x44f500, Func Offset: 0xb0
	// Line 392, Address: 0x44f504, Func Offset: 0xb4
	// Line 374, Address: 0x44f514, Func Offset: 0xc4
	// Line 392, Address: 0x44f518, Func Offset: 0xc8
	// Line 374, Address: 0x44f520, Func Offset: 0xd0
	// Line 392, Address: 0x44f524, Func Offset: 0xd4
	// Line 379, Address: 0x44f574, Func Offset: 0x124
	// Line 392, Address: 0x44f578, Func Offset: 0x128
	// Line 379, Address: 0x44f57c, Func Offset: 0x12c
	// Line 392, Address: 0x44f580, Func Offset: 0x130
	// Line 379, Address: 0x44f584, Func Offset: 0x134
	// Line 392, Address: 0x44f588, Func Offset: 0x138
	// Line 384, Address: 0x44f598, Func Offset: 0x148
	// Line 392, Address: 0x44f59c, Func Offset: 0x14c
	// Line 384, Address: 0x44f5a4, Func Offset: 0x154
	// Line 392, Address: 0x44f5a8, Func Offset: 0x158
	// Line 389, Address: 0x44f5f8, Func Offset: 0x1a8
	// Line 392, Address: 0x44f5fc, Func Offset: 0x1ac
	// Line 389, Address: 0x44f600, Func Offset: 0x1b0
	// Line 392, Address: 0x44f604, Func Offset: 0x1b4
	// Line 389, Address: 0x44f608, Func Offset: 0x1b8
	// Line 392, Address: 0x44f60c, Func Offset: 0x1bc
	// Func End, Address: 0x44f634, Func Offset: 0x1e4
}

// xSTQueueSceneAssets__FUii
// Start address: 0x44f640
int32 xSTQueueSceneAssets(uint32 sid, int32 flg_hiphop)
{
	int32 result;
	st_STRAN_SCENE* sdata;
	// Line 294, Address: 0x44f640, Func Offset: 0
	// Line 304, Address: 0x44f64c, Func Offset: 0xc
	// Line 306, Address: 0x44f654, Func Offset: 0x14
	// Line 309, Address: 0x44f660, Func Offset: 0x20
	// Line 311, Address: 0x44f668, Func Offset: 0x28
	// Line 315, Address: 0x44f678, Func Offset: 0x38
	// Line 306, Address: 0x44f680, Func Offset: 0x40
	// Line 316, Address: 0x44f688, Func Offset: 0x48
	// Func End, Address: 0x44f698, Func Offset: 0x58
}

// xSTPreLoadScene__FUiPviiPCc
// Start address: 0x44f6a0
int32 xSTPreLoadScene(uint32 sid, void* userdata, int32 flg_hiphop, int32 fileflags, int8* filename)
{
	int32 result;
	st_STRAN_SCENE* sdata;
	int8* sfile;
	int32 cltver;
	// Line 151, Address: 0x44f6a0, Func Offset: 0
	// Line 156, Address: 0x44f6d4, Func Offset: 0x34
	// Line 151, Address: 0x44f6d8, Func Offset: 0x38
	// Line 156, Address: 0x44f6dc, Func Offset: 0x3c
	// Line 158, Address: 0x44f6e4, Func Offset: 0x44
	// Line 168, Address: 0x44f6ec, Func Offset: 0x4c
	// Line 177, Address: 0x44f6f8, Func Offset: 0x58
	// Line 180, Address: 0x44f700, Func Offset: 0x60
	// Line 177, Address: 0x44f704, Func Offset: 0x64
	// Line 181, Address: 0x44f708, Func Offset: 0x68
	// Line 186, Address: 0x44f70c, Func Offset: 0x6c
	// Line 189, Address: 0x44f714, Func Offset: 0x74
	// Line 191, Address: 0x44f71c, Func Offset: 0x7c
	// Line 193, Address: 0x44f724, Func Offset: 0x84
	// Line 194, Address: 0x44f738, Func Offset: 0x98
	// Line 197, Address: 0x44f778, Func Offset: 0xd8
	// Line 199, Address: 0x44f780, Func Offset: 0xe0
	// Line 200, Address: 0x44f7fc, Func Offset: 0x15c
	// Line 201, Address: 0x44f804, Func Offset: 0x164
	// Line 202, Address: 0x44f80c, Func Offset: 0x16c
	// Line 203, Address: 0x44f820, Func Offset: 0x180
	// Line 208, Address: 0x44f860, Func Offset: 0x1c0
	// Line 211, Address: 0x44f868, Func Offset: 0x1c8
	// Line 213, Address: 0x44f8ac, Func Offset: 0x20c
	// Line 220, Address: 0x44f8b0, Func Offset: 0x210
	// Line 234, Address: 0x44f8b8, Func Offset: 0x218
	// Line 237, Address: 0x44f8c0, Func Offset: 0x220
	// Line 234, Address: 0x44f8c4, Func Offset: 0x224
	// Line 238, Address: 0x44f8c8, Func Offset: 0x228
	// Line 242, Address: 0x44f8cc, Func Offset: 0x22c
	// Line 239, Address: 0x44f8d0, Func Offset: 0x230
	// Line 242, Address: 0x44f8d4, Func Offset: 0x234
	// Line 250, Address: 0x44f90c, Func Offset: 0x26c
	// Line 253, Address: 0x44f914, Func Offset: 0x274
	// Line 255, Address: 0x44f91c, Func Offset: 0x27c
	// Line 257, Address: 0x44f924, Func Offset: 0x284
	// Line 258, Address: 0x44f938, Func Offset: 0x298
	// Line 262, Address: 0x44f978, Func Offset: 0x2d8
	// Line 264, Address: 0x44f980, Func Offset: 0x2e0
	// Line 265, Address: 0x44f9f4, Func Offset: 0x354
	// Line 266, Address: 0x44f9fc, Func Offset: 0x35c
	// Line 267, Address: 0x44fa04, Func Offset: 0x364
	// Line 268, Address: 0x44fa18, Func Offset: 0x378
	// Line 278, Address: 0x44fa58, Func Offset: 0x3b8
	// Line 281, Address: 0x44fa60, Func Offset: 0x3c0
	// Line 283, Address: 0x44faa4, Func Offset: 0x404
	// Line 289, Address: 0x44faa8, Func Offset: 0x408
	// Line 187, Address: 0x44fab4, Func Offset: 0x414
	// Line 289, Address: 0x44fab8, Func Offset: 0x418
	// Line 223, Address: 0x44facc, Func Offset: 0x42c
	// Line 289, Address: 0x44fad4, Func Offset: 0x434
	// Line 251, Address: 0x44fad8, Func Offset: 0x438
	// Line 289, Address: 0x44fadc, Func Offset: 0x43c
	// Line 264, Address: 0x44faf0, Func Offset: 0x450
	// Line 289, Address: 0x44faf4, Func Offset: 0x454
	// Line 264, Address: 0x44fb00, Func Offset: 0x460
	// Line 289, Address: 0x44fb04, Func Offset: 0x464
	// Line 264, Address: 0x44fb0c, Func Offset: 0x46c
	// Line 289, Address: 0x44fb10, Func Offset: 0x470
	// Line 290, Address: 0x44fb28, Func Offset: 0x488
	// Func End, Address: 0x44fb50, Func Offset: 0x4b0
}

// xSTShutdown__Fv
// Start address: 0x44fb50
int32 xSTShutdown()
{
	// Line 113, Address: 0x44fb50, Func Offset: 0
	// Line 116, Address: 0x44fb60, Func Offset: 0x10
	// Line 123, Address: 0x44fb70, Func Offset: 0x20
	// Line 126, Address: 0x44fbf8, Func Offset: 0xa8
	// Line 132, Address: 0x44fc00, Func Offset: 0xb0
	// Line 131, Address: 0x44fc0c, Func Offset: 0xbc
	// Line 132, Address: 0x44fc10, Func Offset: 0xc0
	// Func End, Address: 0x44fc18, Func Offset: 0xc8
}

// xSTStartup__FP12PKRAssetType
// Start address: 0x44fc20
int32 xSTStartup(PKRAssetType* handlers)
{
	// Line 75, Address: 0x44fc20, Func Offset: 0
	// Line 77, Address: 0x44fc28, Func Offset: 0x8
	// Line 104, Address: 0x44fc38, Func Offset: 0x18
	// Line 89, Address: 0x44fc44, Func Offset: 0x24
	// Line 104, Address: 0x44fc48, Func Offset: 0x28
	// Line 89, Address: 0x44fc4c, Func Offset: 0x2c
	// Line 104, Address: 0x44fc50, Func Offset: 0x30
	// Line 105, Address: 0x44fc70, Func Offset: 0x50
	// Func End, Address: 0x44fc7c, Func Offset: 0x5c
}

