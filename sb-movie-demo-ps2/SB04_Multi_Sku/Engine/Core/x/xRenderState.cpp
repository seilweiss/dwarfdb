



void xRenderTexCacheRestore();
void xRenderFixIMEnd();
void xRenderFixIMBegin();
void xRenderFixUntexturedEnd();
void xRenderFixUntexturedBegin(RpAtomic* atomic);
int32 yet_another_bullshit_workaround(RxPS2AllPipeData* ps2AllPipeData, RwMatrixTag** transform);
int32 HackedRpPDS_G3x_Generic_MeshPS2AllBridgeCallBack(RxPS2AllPipeData* ps2AllPipeData);
int32 HackedRpPDS_G3_Matfx_PS2AllMatBridgeCallBack(RxPS2AllPipeData* ps2AllPipeData);
int32 HackedRpPDS_G3_Gem_PS2AllMatBridgeCallBack(RxPS2AllPipeData* ps2AllPipeData);
int32 HackedRpPDS_G3_Uva_PS2AllMatBridgeCallBack(RxPS2AllPipeData* ps2AllPipeData);
int32 HackedRpMeshPS2AllBridgeCallBack(RxPS2AllPipeData* ps2AllPipeData);
void Hacked_rpMatFXSkyUploadTextures(RwTexture* _tex_1, RwTexture* _tex_2, ulong32& _tex0_1, ulong32& _tex0_2, ulong32& _tex1_1, ulong32& _tex1_2, ulong32& _clamp_1, ulong32& _clamp_2);
void LessRetardedRpMeshPS2AllGIFTagUpload(RxPS2AllPipeData* ps2AllPipeData);
void xRenderSceneExit();
void xRenderSceneEnter();

// xRenderTexCacheRestore__Fv
// Start address: 0x3a0820
void xRenderTexCacheRestore()
{
	// Line 1295, Address: 0x3a0820, Func Offset: 0
	// Line 1299, Address: 0x3a0824, Func Offset: 0x4
	// Line 1295, Address: 0x3a0828, Func Offset: 0x8
	// Line 1299, Address: 0x3a082c, Func Offset: 0xc
	// Line 1300, Address: 0x3a083c, Func Offset: 0x1c
	// Line 1301, Address: 0x3a0844, Func Offset: 0x24
	// Func End, Address: 0x3a0850, Func Offset: 0x30
}

// xRenderFixIMEnd__Fv
// Start address: 0x3a0850
void xRenderFixIMEnd()
{
	// Line 1280, Address: 0x3a0850, Func Offset: 0
	// Line 1281, Address: 0x3a0854, Func Offset: 0x4
	// Line 1283, Address: 0x3a0860, Func Offset: 0x10
	// Line 1284, Address: 0x3a0880, Func Offset: 0x30
	// Line 1292, Address: 0x3a0884, Func Offset: 0x34
	// Func End, Address: 0x3a08bc, Func Offset: 0x6c
}

// xRenderFixIMBegin__Fv
// Start address: 0x3a08c0
void xRenderFixIMBegin()
{
	int32(*im_setup_cb)(RxPS2AllPipeData*, RwMatrixTag**);
	// Line 1274, Address: 0x3a08c0, Func Offset: 0
	// Line 1276, Address: 0x3a08cc, Func Offset: 0xc
	// Line 1274, Address: 0x3a08d4, Func Offset: 0x14
	// Line 1275, Address: 0x3a08e4, Func Offset: 0x24
	// Line 1277, Address: 0x3a08ec, Func Offset: 0x2c
	// Func End, Address: 0x3a08f4, Func Offset: 0x34
}

// xRenderFixUntexturedEnd__FP8RpAtomic
// Start address: 0x3a0900
void xRenderFixUntexturedEnd()
{
	// Line 1264, Address: 0x3a0900, Func Offset: 0
	// Line 1266, Address: 0x3a090c, Func Offset: 0xc
	// Func End, Address: 0x3a0914, Func Offset: 0x14
}

// xRenderFixUntexturedBegin__FP8RpAtomic
// Start address: 0x3a0920
void xRenderFixUntexturedBegin(RpAtomic* atomic)
{
	RpMatFXMaterialFlags matfx;
	// Line 1209, Address: 0x3a0920, Func Offset: 0
	// Line 1212, Address: 0x3a0930, Func Offset: 0x10
	// Line 1215, Address: 0x3a0958, Func Offset: 0x38
	// Line 1212, Address: 0x3a0960, Func Offset: 0x40
	// Line 1213, Address: 0x3a0964, Func Offset: 0x44
	// Line 1215, Address: 0x3a096c, Func Offset: 0x4c
	// Line 1219, Address: 0x3a0974, Func Offset: 0x54
	// Line 1223, Address: 0x3a0984, Func Offset: 0x64
	// Line 1232, Address: 0x3a09b0, Func Offset: 0x90
	// Line 1234, Address: 0x3a09c0, Func Offset: 0xa0
	// Line 1235, Address: 0x3a09d0, Func Offset: 0xb0
	// Line 1238, Address: 0x3a09f4, Func Offset: 0xd4
	// Line 1239, Address: 0x3a09fc, Func Offset: 0xdc
	// Line 1242, Address: 0x3a0a04, Func Offset: 0xe4
	// Line 1257, Address: 0x3a0a10, Func Offset: 0xf0
	// Line 1212, Address: 0x3a0a3c, Func Offset: 0x11c
	// Line 1257, Address: 0x3a0a40, Func Offset: 0x120
	// Line 1218, Address: 0x3a0a70, Func Offset: 0x150
	// Line 1257, Address: 0x3a0a78, Func Offset: 0x158
	// Line 1222, Address: 0x3a0a7c, Func Offset: 0x15c
	// Line 1257, Address: 0x3a0a84, Func Offset: 0x164
	// Func End, Address: 0x3a0a98, Func Offset: 0x178
}

// yet_another_bullshit_workaround__19@unnamed@xWad4_cpp@FP16RxPS2AllPipeDataPP11RwMatrixTag
// Start address: 0x3a0aa0
int32 yet_another_bullshit_workaround(RxPS2AllPipeData* ps2AllPipeData, RwMatrixTag** transform)
{
	int32 ret;
	RpMaterial* material;
	// Line 1177, Address: 0x3a0aa0, Func Offset: 0
	// Line 1178, Address: 0x3a0aac, Func Offset: 0xc
	// Line 1181, Address: 0x3a0ab8, Func Offset: 0x18
	// Line 1184, Address: 0x3a0abc, Func Offset: 0x1c
	// Line 1181, Address: 0x3a0ac0, Func Offset: 0x20
	// Line 1182, Address: 0x3a0ac4, Func Offset: 0x24
	// Line 1183, Address: 0x3a0ac8, Func Offset: 0x28
	// Line 1182, Address: 0x3a0acc, Func Offset: 0x2c
	// Line 1183, Address: 0x3a0ae8, Func Offset: 0x48
	// Line 1184, Address: 0x3a0aec, Func Offset: 0x4c
	// Line 1189, Address: 0x3a0af0, Func Offset: 0x50
	// Line 1192, Address: 0x3a0b04, Func Offset: 0x64
	// Func End, Address: 0x3a0b14, Func Offset: 0x74
}

// HackedRpPDS_G3x_Generic_MeshPS2AllBridgeCallBack__FP16RxPS2AllPipeData
// Start address: 0x3a0b20
int32 HackedRpPDS_G3x_Generic_MeshPS2AllBridgeCallBack(RxPS2AllPipeData* ps2AllPipeData)
{
	int32 skyAlphaTex'252;
	<unknown fundamental type (0xa510)>* _rwDMAPktPtr'251;
	long32 old_sky_test;
	RwTexture* _nwtx;
	RwRaster* _nwrs;
	uint32 cFormat;
	ulong32 tmp;
	ulong32 __tmp1;
	ulong32 __tmp1;
	ulong32 __tmp1;
	uint32 __skySwitchFlag;
	ulong32 __tmp;
	ulong32 __tmp1;
	void* _kohd;
	ulong32 tmp;
	rwPS2AllResEntryHeader* _p2rh;
	ulong32 __tmp;
	ulong32 __tmp1;
	// Line 1100, Address: 0x3a0b20, Func Offset: 0
	// Line 1104, Address: 0x3a0b38, Func Offset: 0x18
	// Line 1105, Address: 0x3a0b40, Func Offset: 0x20
	// Line 1106, Address: 0x3a0b50, Func Offset: 0x30
	// Line 1117, Address: 0x3a0c14, Func Offset: 0xf4
	// Line 1121, Address: 0x3a0c38, Func Offset: 0x118
	// Line 1117, Address: 0x3a0c3c, Func Offset: 0x11c
	// Line 1121, Address: 0x3a0c48, Func Offset: 0x128
	// Line 1122, Address: 0x3a0c50, Func Offset: 0x130
	// Line 1123, Address: 0x3a0cbc, Func Offset: 0x19c
	// Line 1124, Address: 0x3a0cfc, Func Offset: 0x1dc
	// Line 1125, Address: 0x3a0d64, Func Offset: 0x244
	// Line 1126, Address: 0x3a0de8, Func Offset: 0x2c8
	// Line 1127, Address: 0x3a0df8, Func Offset: 0x2d8
	// Line 1128, Address: 0x3a0e4c, Func Offset: 0x32c
	// Line 1131, Address: 0x3a0eec, Func Offset: 0x3cc
	// Line 1106, Address: 0x3a0ef8, Func Offset: 0x3d8
	// Line 1131, Address: 0x3a0f08, Func Offset: 0x3e8
	// Line 1106, Address: 0x3a0f0c, Func Offset: 0x3ec
	// Line 1125, Address: 0x3a0f18, Func Offset: 0x3f8
	// Line 1131, Address: 0x3a0f20, Func Offset: 0x400
	// Line 1125, Address: 0x3a0f24, Func Offset: 0x404
	// Line 1131, Address: 0x3a0f28, Func Offset: 0x408
	// Line 1125, Address: 0x3a0f2c, Func Offset: 0x40c
	// Line 1131, Address: 0x3a0f30, Func Offset: 0x410
	// Line 1125, Address: 0x3a0f38, Func Offset: 0x418
	// Line 1131, Address: 0x3a0f3c, Func Offset: 0x41c
	// Line 1125, Address: 0x3a0f40, Func Offset: 0x420
	// Line 1131, Address: 0x3a0f4c, Func Offset: 0x42c
	// Line 1125, Address: 0x3a0f58, Func Offset: 0x438
	// Line 1131, Address: 0x3a0f5c, Func Offset: 0x43c
	// Line 1132, Address: 0x3a0f88, Func Offset: 0x468
	// Func End, Address: 0x3a0fa4, Func Offset: 0x484
}

// HackedRpPDS_G3_Matfx_PS2AllMatBridgeCallBack__FP16RxPS2AllPipeData
// Start address: 0x3a0fb0
int32 HackedRpPDS_G3_Matfx_PS2AllMatBridgeCallBack(RxPS2AllPipeData* ps2AllPipeData)
{
	RpMatFXMaterialFlags effectType;
	rpMatFXMaterialData* materialData;
	void** oldVU1CodeArray;
	int32 ret;
	// Line 1003, Address: 0x3a0fb0, Func Offset: 0
	// Line 1010, Address: 0x3a0fc0, Func Offset: 0x10
	// Line 1013, Address: 0x3a0fd4, Func Offset: 0x24
	// Line 1020, Address: 0x3a0fec, Func Offset: 0x3c
	// Line 1023, Address: 0x3a0ff0, Func Offset: 0x40
	// Line 1016, Address: 0x3a0ff4, Func Offset: 0x44
	// Line 1020, Address: 0x3a0ff8, Func Offset: 0x48
	// Line 1023, Address: 0x3a0ffc, Func Offset: 0x4c
	// Line 1026, Address: 0x3a1020, Func Offset: 0x70
	// Line 1027, Address: 0x3a1028, Func Offset: 0x78
	// Line 1029, Address: 0x3a1030, Func Offset: 0x80
	// Line 1030, Address: 0x3a1038, Func Offset: 0x88
	// Line 1039, Address: 0x3a1040, Func Offset: 0x90
	// Line 1044, Address: 0x3a105c, Func Offset: 0xac
	// Line 1047, Address: 0x3a1064, Func Offset: 0xb4
	// Func End, Address: 0x3a1078, Func Offset: 0xc8
}

// HackedRpPDS_G3_Gem_PS2AllMatBridgeCallBack__FP16RxPS2AllPipeData
// Start address: 0x3a1080
int32 HackedRpPDS_G3_Gem_PS2AllMatBridgeCallBack(RxPS2AllPipeData* ps2AllPipeData)
{
	<unknown fundamental type (0xa510)>* _rwDMAPktPtr'408;
	uint32 skyUserSwitch1'407;
	RpMaterial* material;
	rpMatFXMaterialData* materialData;
	RwTexture* baseTexture;
	RwTexture* envMapTexture;
	RwFrame* envMapFrame;
	RwMatrixTag envMapMatrix;
	float32 envMapCoef;
	ulong32 alpha_2;
	ulong32 clamp_2;
	ulong32 fogcol_2;
	ulong32 test_2;
	ulong32 tex1_2;
	ulong32 zbuf_2;
	ulong32 rastex1;
	ulong32 rastex2;
	ulong32 tmp;
	ulong32 tmp1;
	ulong32 tmp;
	ulong32 __tmp1;
	ulong32 __tmp1;
	ulong32 __tmp1;
	uint32 __skySwitchFlag;
	ulong32 __tmp;
	ulong32 __tmp1;
	void* _kohd;
	ulong32 tmp;
	rwPS2AllResEntryHeader* _p2rh;
	ulong32 __tmp;
	ulong32 __tmp1;
	ulong32 tmp;
	ulong32 tmp1;
	float32 envParams[4];
	// Line 782, Address: 0x3a1080, Func Offset: 0
	// Line 817, Address: 0x3a1084, Func Offset: 0x4
	// Line 782, Address: 0x3a1088, Func Offset: 0x8
	// Line 817, Address: 0x3a108c, Func Offset: 0xc
	// Line 782, Address: 0x3a1090, Func Offset: 0x10
	// Line 817, Address: 0x3a1094, Func Offset: 0x14
	// Line 782, Address: 0x3a1098, Func Offset: 0x18
	// Line 822, Address: 0x3a109c, Func Offset: 0x1c
	// Line 782, Address: 0x3a10a0, Func Offset: 0x20
	// Line 822, Address: 0x3a10b0, Func Offset: 0x30
	// Line 782, Address: 0x3a10b4, Func Offset: 0x34
	// Line 805, Address: 0x3a10bc, Func Offset: 0x3c
	// Line 806, Address: 0x3a10c0, Func Offset: 0x40
	// Line 819, Address: 0x3a10c4, Func Offset: 0x44
	// Line 817, Address: 0x3a10c8, Func Offset: 0x48
	// Line 805, Address: 0x3a10cc, Func Offset: 0x4c
	// Line 817, Address: 0x3a10d0, Func Offset: 0x50
	// Line 809, Address: 0x3a10d8, Func Offset: 0x58
	// Line 806, Address: 0x3a10dc, Func Offset: 0x5c
	// Line 810, Address: 0x3a10e4, Func Offset: 0x64
	// Line 811, Address: 0x3a10e8, Func Offset: 0x68
	// Line 812, Address: 0x3a10ec, Func Offset: 0x6c
	// Line 813, Address: 0x3a10f0, Func Offset: 0x70
	// Line 810, Address: 0x3a10f4, Func Offset: 0x74
	// Line 814, Address: 0x3a10f8, Func Offset: 0x78
	// Line 815, Address: 0x3a10fc, Func Offset: 0x7c
	// Line 822, Address: 0x3a1100, Func Offset: 0x80
	// Line 834, Address: 0x3a1108, Func Offset: 0x88
	// Line 830, Address: 0x3a1128, Func Offset: 0xa8
	// Line 834, Address: 0x3a112c, Func Offset: 0xac
	// Line 854, Address: 0x3a1134, Func Offset: 0xb4
	// Line 929, Address: 0x3a1144, Func Offset: 0xc4
	// Line 854, Address: 0x3a1148, Func Offset: 0xc8
	// Line 929, Address: 0x3a1154, Func Offset: 0xd4
	// Line 854, Address: 0x3a1158, Func Offset: 0xd8
	// Line 866, Address: 0x3a1160, Func Offset: 0xe0
	// Line 854, Address: 0x3a1174, Func Offset: 0xf4
	// Line 866, Address: 0x3a1178, Func Offset: 0xf8
	// Line 854, Address: 0x3a1184, Func Offset: 0x104
	// Line 924, Address: 0x3a1188, Func Offset: 0x108
	// Line 866, Address: 0x3a118c, Func Offset: 0x10c
	// Line 854, Address: 0x3a1194, Func Offset: 0x114
	// Line 866, Address: 0x3a119c, Func Offset: 0x11c
	// Line 874, Address: 0x3a11a0, Func Offset: 0x120
	// Line 866, Address: 0x3a11a4, Func Offset: 0x124
	// Line 874, Address: 0x3a11a8, Func Offset: 0x128
	// Line 961, Address: 0x3a11ac, Func Offset: 0x12c
	// Line 876, Address: 0x3a11b0, Func Offset: 0x130
	// Line 875, Address: 0x3a11b4, Func Offset: 0x134
	// Line 876, Address: 0x3a11b8, Func Offset: 0x138
	// Line 877, Address: 0x3a11bc, Func Offset: 0x13c
	// Line 930, Address: 0x3a11c0, Func Offset: 0x140
	// Line 910, Address: 0x3a11c8, Func Offset: 0x148
	// Line 878, Address: 0x3a11cc, Func Offset: 0x14c
	// Line 939, Address: 0x3a11d4, Func Offset: 0x154
	// Line 892, Address: 0x3a11d8, Func Offset: 0x158
	// Line 910, Address: 0x3a11dc, Func Offset: 0x15c
	// Line 914, Address: 0x3a11e0, Func Offset: 0x160
	// Line 924, Address: 0x3a11e4, Func Offset: 0x164
	// Line 939, Address: 0x3a11e8, Func Offset: 0x168
	// Line 878, Address: 0x3a11ec, Func Offset: 0x16c
	// Line 879, Address: 0x3a11f0, Func Offset: 0x170
	// Line 939, Address: 0x3a11f4, Func Offset: 0x174
	// Line 888, Address: 0x3a11f8, Func Offset: 0x178
	// Line 939, Address: 0x3a11fc, Func Offset: 0x17c
	// Line 890, Address: 0x3a1200, Func Offset: 0x180
	// Line 931, Address: 0x3a1204, Func Offset: 0x184
	// Line 939, Address: 0x3a1208, Func Offset: 0x188
	// Line 890, Address: 0x3a120c, Func Offset: 0x18c
	// Line 891, Address: 0x3a1210, Func Offset: 0x190
	// Line 952, Address: 0x3a1214, Func Offset: 0x194
	// Line 892, Address: 0x3a1218, Func Offset: 0x198
	// Line 942, Address: 0x3a121c, Func Offset: 0x19c
	// Line 947, Address: 0x3a1224, Func Offset: 0x1a4
	// Line 950, Address: 0x3a1228, Func Offset: 0x1a8
	// Line 956, Address: 0x3a122c, Func Offset: 0x1ac
	// Line 950, Address: 0x3a1230, Func Offset: 0x1b0
	// Line 954, Address: 0x3a1234, Func Offset: 0x1b4
	// Line 892, Address: 0x3a1238, Func Offset: 0x1b8
	// Line 893, Address: 0x3a123c, Func Offset: 0x1bc
	// Line 954, Address: 0x3a1240, Func Offset: 0x1c0
	// Line 910, Address: 0x3a1244, Func Offset: 0x1c4
	// Line 958, Address: 0x3a1248, Func Offset: 0x1c8
	// Line 910, Address: 0x3a124c, Func Offset: 0x1cc
	// Line 958, Address: 0x3a1250, Func Offset: 0x1d0
	// Line 967, Address: 0x3a1254, Func Offset: 0x1d4
	// Line 910, Address: 0x3a1258, Func Offset: 0x1d8
	// Line 914, Address: 0x3a127c, Func Offset: 0x1fc
	// Line 915, Address: 0x3a1280, Func Offset: 0x200
	// Line 919, Address: 0x3a1284, Func Offset: 0x204
	// Line 921, Address: 0x3a128c, Func Offset: 0x20c
	// Line 924, Address: 0x3a1294, Func Offset: 0x214
	// Line 922, Address: 0x3a1298, Func Offset: 0x218
	// Line 924, Address: 0x3a129c, Func Offset: 0x21c
	// Line 925, Address: 0x3a12a0, Func Offset: 0x220
	// Line 926, Address: 0x3a12a4, Func Offset: 0x224
	// Line 932, Address: 0x3a12a8, Func Offset: 0x228
	// Line 939, Address: 0x3a12ac, Func Offset: 0x22c
	// Line 948, Address: 0x3a12b0, Func Offset: 0x230
	// Line 951, Address: 0x3a12b4, Func Offset: 0x234
	// Line 952, Address: 0x3a12b8, Func Offset: 0x238
	// Line 953, Address: 0x3a12c0, Func Offset: 0x240
	// Line 955, Address: 0x3a12c4, Func Offset: 0x244
	// Line 956, Address: 0x3a12c8, Func Offset: 0x248
	// Line 957, Address: 0x3a12d0, Func Offset: 0x250
	// Line 959, Address: 0x3a12d4, Func Offset: 0x254
	// Line 967, Address: 0x3a12d8, Func Offset: 0x258
	// Line 972, Address: 0x3a12e0, Func Offset: 0x260
	// Line 975, Address: 0x3a134c, Func Offset: 0x2cc
	// Line 978, Address: 0x3a138c, Func Offset: 0x30c
	// Line 982, Address: 0x3a1460, Func Offset: 0x3e0
	// Line 985, Address: 0x3a14e8, Func Offset: 0x468
	// Line 988, Address: 0x3a1500, Func Offset: 0x480
	// Line 991, Address: 0x3a1554, Func Offset: 0x4d4
	// Line 994, Address: 0x3a15fc, Func Offset: 0x57c
	// Line 997, Address: 0x3a1654, Func Offset: 0x5d4
	// Line 994, Address: 0x3a1658, Func Offset: 0x5d8
	// Line 997, Address: 0x3a1668, Func Offset: 0x5e8
	// Line 978, Address: 0x3a169c, Func Offset: 0x61c
	// Line 982, Address: 0x3a16a8, Func Offset: 0x628
	// Line 997, Address: 0x3a16ac, Func Offset: 0x62c
	// Line 982, Address: 0x3a16b0, Func Offset: 0x630
	// Line 997, Address: 0x3a16b4, Func Offset: 0x634
	// Line 982, Address: 0x3a16b8, Func Offset: 0x638
	// Line 997, Address: 0x3a16c0, Func Offset: 0x640
	// Line 982, Address: 0x3a16c4, Func Offset: 0x644
	// Line 997, Address: 0x3a16c8, Func Offset: 0x648
	// Line 982, Address: 0x3a16d0, Func Offset: 0x650
	// Line 997, Address: 0x3a16d4, Func Offset: 0x654
	// Line 982, Address: 0x3a16d8, Func Offset: 0x658
	// Line 997, Address: 0x3a16e0, Func Offset: 0x660
	// Line 982, Address: 0x3a16ec, Func Offset: 0x66c
	// Line 997, Address: 0x3a16f0, Func Offset: 0x670
	// Line 998, Address: 0x3a170c, Func Offset: 0x68c
	// Func End, Address: 0x3a1734, Func Offset: 0x6b4
}

// HackedRpPDS_G3_Uva_PS2AllMatBridgeCallBack__FP16RxPS2AllPipeData
// Start address: 0x3a1740
int32 HackedRpPDS_G3_Uva_PS2AllMatBridgeCallBack(RxPS2AllPipeData* ps2AllPipeData)
{
	int32 skyAlphaTex'317;
	<unknown fundamental type (0xa510)>* _rwDMAPktPtr'316;
	uint32 skyUserSwitch1'315;
	RwMatrixTag* baseTransform;
	RwMatrixTag identity;
	ulong32 tmp;
	ulong32 tmp1;
	long32 old_sky_test;
	RwTexture* _nwtx;
	RwRaster* _nwrs;
	uint32 cFormat;
	ulong32 tmp;
	ulong32 __tmp1;
	ulong32 __tmp1;
	ulong32 __tmp1;
	uint32 __skySwitchFlag;
	ulong32 __tmp;
	ulong32 __tmp1;
	void* _kohd;
	ulong32 tmp;
	rwPS2AllResEntryHeader* _p2rh;
	ulong32 __tmp;
	ulong32 __tmp1;
	// Line 596, Address: 0x3a1740, Func Offset: 0
	// Line 610, Address: 0x3a175c, Func Offset: 0x1c
	// Line 612, Address: 0x3a1774, Func Offset: 0x34
	// Line 624, Address: 0x3a177c, Func Offset: 0x3c
	// Line 625, Address: 0x3a1780, Func Offset: 0x40
	// Line 626, Address: 0x3a1790, Func Offset: 0x50
	// Line 631, Address: 0x3a1854, Func Offset: 0x114
	// Line 636, Address: 0x3a1864, Func Offset: 0x124
	// Line 637, Address: 0x3a1868, Func Offset: 0x128
	// Line 636, Address: 0x3a186c, Func Offset: 0x12c
	// Line 637, Address: 0x3a1870, Func Offset: 0x130
	// Line 640, Address: 0x3a1878, Func Offset: 0x138
	// Line 637, Address: 0x3a187c, Func Offset: 0x13c
	// Line 646, Address: 0x3a1880, Func Offset: 0x140
	// Line 637, Address: 0x3a1884, Func Offset: 0x144
	// Line 649, Address: 0x3a1888, Func Offset: 0x148
	// Line 637, Address: 0x3a188c, Func Offset: 0x14c
	// Line 652, Address: 0x3a1890, Func Offset: 0x150
	// Line 640, Address: 0x3a1894, Func Offset: 0x154
	// Line 667, Address: 0x3a1898, Func Offset: 0x158
	// Line 641, Address: 0x3a18a0, Func Offset: 0x160
	// Line 657, Address: 0x3a18a4, Func Offset: 0x164
	// Line 645, Address: 0x3a18a8, Func Offset: 0x168
	// Line 646, Address: 0x3a18ac, Func Offset: 0x16c
	// Line 647, Address: 0x3a18b0, Func Offset: 0x170
	// Line 648, Address: 0x3a18b4, Func Offset: 0x174
	// Line 649, Address: 0x3a18b8, Func Offset: 0x178
	// Line 650, Address: 0x3a18bc, Func Offset: 0x17c
	// Line 651, Address: 0x3a18c0, Func Offset: 0x180
	// Line 652, Address: 0x3a18c4, Func Offset: 0x184
	// Line 653, Address: 0x3a18c8, Func Offset: 0x188
	// Line 667, Address: 0x3a18cc, Func Offset: 0x18c
	// Line 671, Address: 0x3a18e8, Func Offset: 0x1a8
	// Line 667, Address: 0x3a18ec, Func Offset: 0x1ac
	// Line 671, Address: 0x3a18f8, Func Offset: 0x1b8
	// Line 672, Address: 0x3a1900, Func Offset: 0x1c0
	// Line 673, Address: 0x3a196c, Func Offset: 0x22c
	// Line 674, Address: 0x3a19ac, Func Offset: 0x26c
	// Line 675, Address: 0x3a1a80, Func Offset: 0x340
	// Line 676, Address: 0x3a1b08, Func Offset: 0x3c8
	// Line 677, Address: 0x3a1b20, Func Offset: 0x3e0
	// Line 678, Address: 0x3a1b74, Func Offset: 0x434
	// Line 682, Address: 0x3a1c14, Func Offset: 0x4d4
	// Line 615, Address: 0x3a1c1c, Func Offset: 0x4dc
	// Line 682, Address: 0x3a1c24, Func Offset: 0x4e4
	// Line 615, Address: 0x3a1c28, Func Offset: 0x4e8
	// Line 682, Address: 0x3a1c2c, Func Offset: 0x4ec
	// Line 615, Address: 0x3a1c50, Func Offset: 0x510
	// Line 682, Address: 0x3a1c54, Func Offset: 0x514
	// Line 626, Address: 0x3a1c70, Func Offset: 0x530
	// Line 682, Address: 0x3a1c80, Func Offset: 0x540
	// Line 626, Address: 0x3a1c84, Func Offset: 0x544
	// Line 682, Address: 0x3a1c90, Func Offset: 0x550
	// Line 674, Address: 0x3a1cbc, Func Offset: 0x57c
	// Line 675, Address: 0x3a1cc8, Func Offset: 0x588
	// Line 682, Address: 0x3a1ccc, Func Offset: 0x58c
	// Line 675, Address: 0x3a1cd0, Func Offset: 0x590
	// Line 682, Address: 0x3a1cd4, Func Offset: 0x594
	// Line 675, Address: 0x3a1cd8, Func Offset: 0x598
	// Line 682, Address: 0x3a1ce0, Func Offset: 0x5a0
	// Line 675, Address: 0x3a1ce4, Func Offset: 0x5a4
	// Line 682, Address: 0x3a1ce8, Func Offset: 0x5a8
	// Line 675, Address: 0x3a1cf0, Func Offset: 0x5b0
	// Line 682, Address: 0x3a1cf4, Func Offset: 0x5b4
	// Line 675, Address: 0x3a1cf8, Func Offset: 0x5b8
	// Line 682, Address: 0x3a1d00, Func Offset: 0x5c0
	// Line 675, Address: 0x3a1d0c, Func Offset: 0x5cc
	// Line 682, Address: 0x3a1d10, Func Offset: 0x5d0
	// Line 683, Address: 0x3a1d3c, Func Offset: 0x5fc
	// Func End, Address: 0x3a1d5c, Func Offset: 0x61c
}

// HackedRpMeshPS2AllBridgeCallBack__FP16RxPS2AllPipeData
// Start address: 0x3a1d60
int32 HackedRpMeshPS2AllBridgeCallBack(RxPS2AllPipeData* ps2AllPipeData)
{
	int32 skyAlphaTex'279;
	<unknown fundamental type (0xa510)>* _rwDMAPktPtr'278;
	uint32 skyUserSwitch1'277;
	long32 old_sky_test;
	RwTexture* _nwtx;
	RwRaster* _nwrs;
	uint32 cFormat;
	ulong32 tmp;
	ulong32 __tmp1;
	ulong32 __tmp1;
	ulong32 __tmp1;
	uint32 __skySwitchFlag;
	ulong32 __tmp;
	ulong32 __tmp1;
	void* _kohd;
	ulong32 tmp;
	rwPS2AllResEntryHeader* _p2rh;
	ulong32 __tmp;
	ulong32 __tmp1;
	// Line 563, Address: 0x3a1d60, Func Offset: 0
	// Line 568, Address: 0x3a1d78, Func Offset: 0x18
	// Line 569, Address: 0x3a1d80, Func Offset: 0x20
	// Line 570, Address: 0x3a1d90, Func Offset: 0x30
	// Line 579, Address: 0x3a1e54, Func Offset: 0xf4
	// Line 581, Address: 0x3a1e78, Func Offset: 0x118
	// Line 579, Address: 0x3a1e7c, Func Offset: 0x11c
	// Line 581, Address: 0x3a1e88, Func Offset: 0x128
	// Line 583, Address: 0x3a1e90, Func Offset: 0x130
	// Line 584, Address: 0x3a1efc, Func Offset: 0x19c
	// Line 585, Address: 0x3a1f3c, Func Offset: 0x1dc
	// Line 586, Address: 0x3a2010, Func Offset: 0x2b0
	// Line 587, Address: 0x3a2098, Func Offset: 0x338
	// Line 588, Address: 0x3a20b0, Func Offset: 0x350
	// Line 589, Address: 0x3a2104, Func Offset: 0x3a4
	// Line 590, Address: 0x3a21a4, Func Offset: 0x444
	// Line 570, Address: 0x3a21b0, Func Offset: 0x450
	// Line 590, Address: 0x3a21c0, Func Offset: 0x460
	// Line 570, Address: 0x3a21c4, Func Offset: 0x464
	// Line 590, Address: 0x3a21d0, Func Offset: 0x470
	// Line 585, Address: 0x3a21fc, Func Offset: 0x49c
	// Line 586, Address: 0x3a2208, Func Offset: 0x4a8
	// Line 590, Address: 0x3a220c, Func Offset: 0x4ac
	// Line 586, Address: 0x3a2210, Func Offset: 0x4b0
	// Line 590, Address: 0x3a2214, Func Offset: 0x4b4
	// Line 586, Address: 0x3a2218, Func Offset: 0x4b8
	// Line 590, Address: 0x3a2220, Func Offset: 0x4c0
	// Line 586, Address: 0x3a2224, Func Offset: 0x4c4
	// Line 590, Address: 0x3a2228, Func Offset: 0x4c8
	// Line 586, Address: 0x3a2230, Func Offset: 0x4d0
	// Line 590, Address: 0x3a2234, Func Offset: 0x4d4
	// Line 586, Address: 0x3a2238, Func Offset: 0x4d8
	// Line 590, Address: 0x3a2240, Func Offset: 0x4e0
	// Line 586, Address: 0x3a224c, Func Offset: 0x4ec
	// Line 590, Address: 0x3a2250, Func Offset: 0x4f0
	// Line 591, Address: 0x3a227c, Func Offset: 0x51c
	// Func End, Address: 0x3a2298, Func Offset: 0x538
}

// Hacked_rpMatFXSkyUploadTextures__FP9RwTextureP9RwTextureRUlRUlRUlRUlRUlRUl
// Start address: 0x3a22a0
void Hacked_rpMatFXSkyUploadTextures(RwTexture* _tex_1, RwTexture* _tex_2, ulong32& _tex0_1, ulong32& _tex0_2, ulong32& _tex1_1, ulong32& _tex1_2, ulong32& _clamp_1, ulong32& _clamp_2)
{
	// Line 467, Address: 0x3a22a0, Func Offset: 0
	// Line 471, Address: 0x3a22e8, Func Offset: 0x48
	// Line 473, Address: 0x3a22f0, Func Offset: 0x50
	// Line 474, Address: 0x3a22f8, Func Offset: 0x58
	// Line 477, Address: 0x3a2310, Func Offset: 0x70
	// Line 481, Address: 0x3a2318, Func Offset: 0x78
	// Line 483, Address: 0x3a2320, Func Offset: 0x80
	// Line 484, Address: 0x3a2328, Func Offset: 0x88
	// Line 488, Address: 0x3a2334, Func Offset: 0x94
	// Line 490, Address: 0x3a233c, Func Offset: 0x9c
	// Line 496, Address: 0x3a2348, Func Offset: 0xa8
	// Line 498, Address: 0x3a2368, Func Offset: 0xc8
	// Line 504, Address: 0x3a2370, Func Offset: 0xd0
	// Line 506, Address: 0x3a2390, Func Offset: 0xf0
	// Line 511, Address: 0x3a2398, Func Offset: 0xf8
	// Line 513, Address: 0x3a23a0, Func Offset: 0x100
	// Line 518, Address: 0x3a23a4, Func Offset: 0x104
	// Line 513, Address: 0x3a23a8, Func Offset: 0x108
	// Line 516, Address: 0x3a23b0, Func Offset: 0x110
	// Line 518, Address: 0x3a23b8, Func Offset: 0x118
	// Line 520, Address: 0x3a23c4, Func Offset: 0x124
	// Line 522, Address: 0x3a23d4, Func Offset: 0x134
	// Line 523, Address: 0x3a23d8, Func Offset: 0x138
	// Line 525, Address: 0x3a23f0, Func Offset: 0x150
	// Line 526, Address: 0x3a2408, Func Offset: 0x168
	// Line 535, Address: 0x3a2414, Func Offset: 0x174
	// Line 538, Address: 0x3a241c, Func Offset: 0x17c
	// Line 540, Address: 0x3a2424, Func Offset: 0x184
	// Line 542, Address: 0x3a2434, Func Offset: 0x194
	// Line 544, Address: 0x3a2444, Func Offset: 0x1a4
	// Line 545, Address: 0x3a2448, Func Offset: 0x1a8
	// Line 547, Address: 0x3a2460, Func Offset: 0x1c0
	// Line 548, Address: 0x3a2478, Func Offset: 0x1d8
	// Line 553, Address: 0x3a2484, Func Offset: 0x1e4
	// Line 556, Address: 0x3a24bc, Func Offset: 0x21c
	// Line 558, Address: 0x3a24c4, Func Offset: 0x224
	// Line 524, Address: 0x3a24d0, Func Offset: 0x230
	// Line 558, Address: 0x3a24dc, Func Offset: 0x23c
	// Line 530, Address: 0x3a24e0, Func Offset: 0x240
	// Line 558, Address: 0x3a24e4, Func Offset: 0x244
	// Line 530, Address: 0x3a24e8, Func Offset: 0x248
	// Line 558, Address: 0x3a24f4, Func Offset: 0x254
	// Line 546, Address: 0x3a24f8, Func Offset: 0x258
	// Line 558, Address: 0x3a2504, Func Offset: 0x264
	// Func End, Address: 0x3a2530, Func Offset: 0x290
}

// LessRetardedRpMeshPS2AllGIFTagUpload__FP16RxPS2AllPipeData
// Start address: 0x3a2530
void LessRetardedRpMeshPS2AllGIFTagUpload(RxPS2AllPipeData* ps2AllPipeData)
{
	ulong32 __tmp1;
	// Line 444, Address: 0x3a2530, Func Offset: 0
	// Line 450, Address: 0x3a2534, Func Offset: 0x4
	// Line 444, Address: 0x3a2538, Func Offset: 0x8
	// Line 453, Address: 0x3a253c, Func Offset: 0xc
	// Line 444, Address: 0x3a2540, Func Offset: 0x10
	// Line 449, Address: 0x3a2550, Func Offset: 0x20
	// Line 450, Address: 0x3a2558, Func Offset: 0x28
	// Line 453, Address: 0x3a255c, Func Offset: 0x2c
	// Line 450, Address: 0x3a256c, Func Offset: 0x3c
	// Line 453, Address: 0x3a2570, Func Offset: 0x40
	// Line 451, Address: 0x3a257c, Func Offset: 0x4c
	// Line 453, Address: 0x3a2580, Func Offset: 0x50
	// Line 455, Address: 0x3a2584, Func Offset: 0x54
	// Line 453, Address: 0x3a2588, Func Offset: 0x58
	// Line 455, Address: 0x3a258c, Func Offset: 0x5c
	// Line 453, Address: 0x3a2590, Func Offset: 0x60
	// Line 456, Address: 0x3a2594, Func Offset: 0x64
	// Line 450, Address: 0x3a2598, Func Offset: 0x68
	// Line 451, Address: 0x3a25a0, Func Offset: 0x70
	// Line 454, Address: 0x3a25a8, Func Offset: 0x78
	// Line 457, Address: 0x3a25b4, Func Offset: 0x84
	// Line 454, Address: 0x3a25b8, Func Offset: 0x88
	// Line 455, Address: 0x3a25d4, Func Offset: 0xa4
	// Line 456, Address: 0x3a25d8, Func Offset: 0xa8
	// Line 457, Address: 0x3a25dc, Func Offset: 0xac
	// Line 458, Address: 0x3a25e8, Func Offset: 0xb8
	// Func End, Address: 0x3a25f0, Func Offset: 0xc0
}

// xRenderSceneExit__Fv
// Start address: 0x3a25f0
void xRenderSceneExit()
{
	// Line 40, Address: 0x3a25f0, Func Offset: 0
	// Line 43, Address: 0x3a25f8, Func Offset: 0x8
	// Line 44, Address: 0x3a2600, Func Offset: 0x10
	// Line 46, Address: 0x3a2604, Func Offset: 0x14
	// Func End, Address: 0x3a2610, Func Offset: 0x20
}

// xRenderSceneEnter__Fv
// Start address: 0x3a2610
void xRenderSceneEnter()
{
	// Line 31, Address: 0x3a2610, Func Offset: 0
	// Line 34, Address: 0x3a2614, Func Offset: 0x4
	// Line 31, Address: 0x3a2618, Func Offset: 0x8
	// Line 34, Address: 0x3a261c, Func Offset: 0xc
	// Line 37, Address: 0x3a2630, Func Offset: 0x20
	// Func End, Address: 0x3a263c, Func Offset: 0x2c
}

