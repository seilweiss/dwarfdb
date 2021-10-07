



void create();
void xCutscene_Render(xCutscene* csn);
void CutsceneShadowRender(CutsceneShadowModel* smod);
void JDeltaEval(RpAtomic* model, void* deltaModel, void* deltaAnim, float32 time);
void xcsCalcAnimMatrices(RwMatrixTag* animMat, RpAtomic* model, xCutsceneAnimHdr* ahdr, float32 time, uint32 tworoot);
int32 xCutscene_Update(xCutscene* csn, float32 dt);
int32 xCutscene_LoadStart(xCutscene* csn);
int32 xCutscene_Destroy(xCutscene* csn);
xCutscene* xCutscene_Create(uint32 csnID, uint32 subtitlesID);
void xCutscene_InitEnd();
void xCutscene_InitTOC(void* toc);
void xCutscene_InitBegin();
void start();
void stop();
void update();

// create__Q219@unnamed@xWad1_cpp@12xCamCutsceneFv
// Start address: 0x413b70
void xCamCutscene::create()
{
	// Line 1322, Address: 0x413b70, Func Offset: 0
	// Line 1325, Address: 0x413b7c, Func Offset: 0xc
	// Line 1322, Address: 0x413b80, Func Offset: 0x10
	// Line 1323, Address: 0x413b88, Func Offset: 0x18
	// Line 1324, Address: 0x413b8c, Func Offset: 0x1c
	// Line 1325, Address: 0x413b90, Func Offset: 0x20
	// Line 1327, Address: 0x413b94, Func Offset: 0x24
	// Func End, Address: 0x413b9c, Func Offset: 0x2c
}

// xCutscene_Render__FP9xCutscenePP4xEntPiPf
// Start address: 0x413ba0
void xCutscene_Render(xCutscene* csn)
{
	uint32 visFlags'558;
	uint32 i;
	uint32 dataIndex;
	uint32 animIndex;
	uint32 mphIndex;
	uint32 visFlags;
	uint32 visIdx;
	uint32 fakeCount;
	uint32 tworoot;
	uint32 noshadow;
	xCutsceneData* data;
	xCutsceneData* mphdata;
	RpAtomic* model;
	RpAtomic* shadowModel;
	RwMatrixTag animMat[65];
	xVec3* camVec;
	xModelPipe* pipeCurr;
	XCSNNosey* nosey;
	uint32 tempSize;
	uint32 viscnt;
	uint32* currvis;
	uint32 subIndex;
	uint32 frameMin;
	uint32 frameMax;
	uint32 frameIndex;
	uint32 shadowBits;
	xBox combinedAnimBound;
	uint32 morphAnimIndex;
	uint32 morphModelIndex;
	uint32 numFrame;
	uint32 numRun;
	xCutsceneMphFrame* mphFrame;
	xCutsceneMphRun* mphRun;
	xMorphTargetFile* mphFile;
	int16* v_array[4];
	int16 weight[4];
	uint32 skipsize;
	xVec3* csnTmpArray;
	xVec3* currtmp;
	xVec3* outv;
	uint32 j;
	uint32 cmpval;
	void* deltaAnim;
	void* deltaModel;
	int32 culled;
	xBox worldbox;
	int32 culled;
	xBox worldbox;
	CutsceneShadowModel smod;
	xShadowCache scache;
	xVec3 center;
	xVec3 shadVec;
	// Line 865, Address: 0x413ba0, Func Offset: 0
	// Line 871, Address: 0x413ba4, Func Offset: 0x4
	// Line 865, Address: 0x413ba8, Func Offset: 0x8
	// Line 871, Address: 0x413bd8, Func Offset: 0x38
	// Line 882, Address: 0x413be4, Func Offset: 0x44
	// Line 878, Address: 0x413be8, Func Offset: 0x48
	// Line 882, Address: 0x413bec, Func Offset: 0x4c
	// Line 878, Address: 0x413bf0, Func Offset: 0x50
	// Line 892, Address: 0x413bf8, Func Offset: 0x58
	// Line 895, Address: 0x413bfc, Func Offset: 0x5c
	// Line 896, Address: 0x413c00, Func Offset: 0x60
	// Line 892, Address: 0x413c04, Func Offset: 0x64
	// Line 882, Address: 0x413c08, Func Offset: 0x68
	// Line 892, Address: 0x413c0c, Func Offset: 0x6c
	// Line 894, Address: 0x413c10, Func Offset: 0x70
	// Line 897, Address: 0x413c14, Func Offset: 0x74
	// Line 894, Address: 0x413c18, Func Offset: 0x78
	// Line 882, Address: 0x413c1c, Func Offset: 0x7c
	// Line 897, Address: 0x413c20, Func Offset: 0x80
	// Line 899, Address: 0x413c44, Func Offset: 0xa4
	// Line 902, Address: 0x413c5c, Func Offset: 0xbc
	// Line 912, Address: 0x413cd8, Func Offset: 0x138
	// Line 906, Address: 0x413cdc, Func Offset: 0x13c
	// Line 908, Address: 0x413ce0, Func Offset: 0x140
	// Line 909, Address: 0x413ce4, Func Offset: 0x144
	// Line 910, Address: 0x413ce8, Func Offset: 0x148
	// Line 912, Address: 0x413cec, Func Offset: 0x14c
	// Line 913, Address: 0x413d00, Func Offset: 0x160
	// Line 923, Address: 0x413d1c, Func Offset: 0x17c
	// Line 913, Address: 0x413d28, Func Offset: 0x188
	// Line 923, Address: 0x413d2c, Func Offset: 0x18c
	// Line 1289, Address: 0x413d3c, Func Offset: 0x19c
	// Line 1291, Address: 0x413d40, Func Offset: 0x1a0
	// Line 1293, Address: 0x413d44, Func Offset: 0x1a4
	// Line 1291, Address: 0x413d48, Func Offset: 0x1a8
	// Line 1293, Address: 0x413d50, Func Offset: 0x1b0
	// Line 1292, Address: 0x413d54, Func Offset: 0x1b4
	// Line 1291, Address: 0x413d60, Func Offset: 0x1c0
	// Line 1293, Address: 0x413d78, Func Offset: 0x1d8
	// Line 1296, Address: 0x413d88, Func Offset: 0x1e8
	// Line 1297, Address: 0x413da4, Func Offset: 0x204
	// Line 1299, Address: 0x413dbc, Func Offset: 0x21c
	// Line 1303, Address: 0x413dc8, Func Offset: 0x228
	// Line 1306, Address: 0x413dd4, Func Offset: 0x234
	// Line 920, Address: 0x413df4, Func Offset: 0x254
	// Line 1306, Address: 0x413df8, Func Offset: 0x258
	// Line 919, Address: 0x413e00, Func Offset: 0x260
	// Line 1306, Address: 0x413e04, Func Offset: 0x264
	// Line 918, Address: 0x413e08, Func Offset: 0x268
	// Line 1306, Address: 0x413e0c, Func Offset: 0x26c
	// Line 919, Address: 0x413e10, Func Offset: 0x270
	// Line 918, Address: 0x413e18, Func Offset: 0x278
	// Line 1306, Address: 0x413e1c, Func Offset: 0x27c
	// Line 924, Address: 0x413e24, Func Offset: 0x284
	// Line 1306, Address: 0x413e28, Func Offset: 0x288
	// Line 977, Address: 0x413ea0, Func Offset: 0x300
	// Line 963, Address: 0x413ea4, Func Offset: 0x304
	// Line 1306, Address: 0x413ea8, Func Offset: 0x308
	// Line 965, Address: 0x413eb4, Func Offset: 0x314
	// Line 969, Address: 0x413eb8, Func Offset: 0x318
	// Line 966, Address: 0x413ebc, Func Offset: 0x31c
	// Line 1306, Address: 0x413ec0, Func Offset: 0x320
	// Line 974, Address: 0x413ed8, Func Offset: 0x338
	// Line 976, Address: 0x413ee0, Func Offset: 0x340
	// Line 1306, Address: 0x413eec, Func Offset: 0x34c
	// Line 976, Address: 0x413ef4, Func Offset: 0x354
	// Line 1306, Address: 0x413efc, Func Offset: 0x35c
	// Line 981, Address: 0x413f1c, Func Offset: 0x37c
	// Line 1306, Address: 0x413f20, Func Offset: 0x380
	// Line 981, Address: 0x413f28, Func Offset: 0x388
	// Line 1306, Address: 0x413f2c, Func Offset: 0x38c
	// Line 984, Address: 0x413f34, Func Offset: 0x394
	// Line 1306, Address: 0x413f38, Func Offset: 0x398
	// Line 987, Address: 0x413f3c, Func Offset: 0x39c
	// Line 1306, Address: 0x413f44, Func Offset: 0x3a4
	// Line 987, Address: 0x413f48, Func Offset: 0x3a8
	// Line 1306, Address: 0x413f4c, Func Offset: 0x3ac
	// Line 987, Address: 0x413f50, Func Offset: 0x3b0
	// Line 1306, Address: 0x413f54, Func Offset: 0x3b4
	// Line 990, Address: 0x413f6c, Func Offset: 0x3cc
	// Line 1306, Address: 0x413f70, Func Offset: 0x3d0
	// Line 991, Address: 0x413f78, Func Offset: 0x3d8
	// Line 1306, Address: 0x413f84, Func Offset: 0x3e4
	// Line 991, Address: 0x413f88, Func Offset: 0x3e8
	// Line 1306, Address: 0x413f8c, Func Offset: 0x3ec
	// Line 1009, Address: 0x413fa0, Func Offset: 0x400
	// Line 998, Address: 0x413fa8, Func Offset: 0x408
	// Line 999, Address: 0x413fac, Func Offset: 0x40c
	// Line 1306, Address: 0x413fb0, Func Offset: 0x410
	// Line 1019, Address: 0x413fd8, Func Offset: 0x438
	// Line 1306, Address: 0x413fdc, Func Offset: 0x43c
	// Line 1024, Address: 0x413fec, Func Offset: 0x44c
	// Line 1162, Address: 0x413ff0, Func Offset: 0x450
	// Line 1024, Address: 0x413ff4, Func Offset: 0x454
	// Line 1306, Address: 0x413ff8, Func Offset: 0x458
	// Line 1022, Address: 0x414000, Func Offset: 0x460
	// Line 1306, Address: 0x414004, Func Offset: 0x464
	// Line 1160, Address: 0x414014, Func Offset: 0x474
	// Line 1306, Address: 0x414018, Func Offset: 0x478
	// Line 1162, Address: 0x414028, Func Offset: 0x488
	// Line 1306, Address: 0x41402c, Func Offset: 0x48c
	// Line 1166, Address: 0x414044, Func Offset: 0x4a4
	// Line 1306, Address: 0x414048, Func Offset: 0x4a8
	// Line 1171, Address: 0x414068, Func Offset: 0x4c8
	// Line 1306, Address: 0x41406c, Func Offset: 0x4cc
	// Line 1174, Address: 0x414098, Func Offset: 0x4f8
	// Line 1175, Address: 0x41409c, Func Offset: 0x4fc
	// Line 1306, Address: 0x4140a0, Func Offset: 0x500
	// Line 1178, Address: 0x4140d0, Func Offset: 0x530
	// Line 1306, Address: 0x4140f8, Func Offset: 0x558
	// Line 1178, Address: 0x4140fc, Func Offset: 0x55c
	// Line 1306, Address: 0x414108, Func Offset: 0x568
	// Line 1182, Address: 0x414140, Func Offset: 0x5a0
	// Line 1306, Address: 0x414144, Func Offset: 0x5a4
	// Line 1215, Address: 0x41415c, Func Offset: 0x5bc
	// Line 1306, Address: 0x414160, Func Offset: 0x5c0
	// Line 1218, Address: 0x41416c, Func Offset: 0x5cc
	// Line 1233, Address: 0x414170, Func Offset: 0x5d0
	// Line 1306, Address: 0x414174, Func Offset: 0x5d4
	// Line 1233, Address: 0x41417c, Func Offset: 0x5dc
	// Line 1306, Address: 0x414180, Func Offset: 0x5e0
	// Line 1240, Address: 0x414194, Func Offset: 0x5f4
	// Line 1306, Address: 0x414198, Func Offset: 0x5f8
	// Line 1240, Address: 0x41419c, Func Offset: 0x5fc
	// Line 1306, Address: 0x4141a4, Func Offset: 0x604
	// Line 1240, Address: 0x4141b0, Func Offset: 0x610
	// Line 1306, Address: 0x4141b4, Func Offset: 0x614
	// Line 1240, Address: 0x4141c4, Func Offset: 0x624
	// Line 1306, Address: 0x4141d0, Func Offset: 0x630
	// Line 1240, Address: 0x4141dc, Func Offset: 0x63c
	// Line 1306, Address: 0x4141e4, Func Offset: 0x644
	// Line 1240, Address: 0x4141f0, Func Offset: 0x650
	// Line 1306, Address: 0x4141f4, Func Offset: 0x654
	// Line 1256, Address: 0x414234, Func Offset: 0x694
	// Line 1306, Address: 0x414244, Func Offset: 0x6a4
	// Line 1256, Address: 0x41424c, Func Offset: 0x6ac
	// Line 1306, Address: 0x414250, Func Offset: 0x6b0
	// Line 1276, Address: 0x414278, Func Offset: 0x6d8
	// Line 1259, Address: 0x414280, Func Offset: 0x6e0
	// Line 1306, Address: 0x414284, Func Offset: 0x6e4
	// Line 1259, Address: 0x41428c, Func Offset: 0x6ec
	// Line 1257, Address: 0x414298, Func Offset: 0x6f8
	// Line 1306, Address: 0x41429c, Func Offset: 0x6fc
	// Line 1259, Address: 0x4142a8, Func Offset: 0x708
	// Line 1306, Address: 0x4142ac, Func Offset: 0x70c
	// Line 1258, Address: 0x4142b0, Func Offset: 0x710
	// Line 1257, Address: 0x4142b4, Func Offset: 0x714
	// Line 1306, Address: 0x4142b8, Func Offset: 0x718
	// Line 1258, Address: 0x4142bc, Func Offset: 0x71c
	// Line 1306, Address: 0x4142c0, Func Offset: 0x720
	// Line 1277, Address: 0x4142d8, Func Offset: 0x738
	// Line 1306, Address: 0x4142e4, Func Offset: 0x744
	// Line 1277, Address: 0x4142e8, Func Offset: 0x748
	// Line 1306, Address: 0x4142ec, Func Offset: 0x74c
	// Line 1277, Address: 0x4142f0, Func Offset: 0x750
	// Line 1306, Address: 0x4142f4, Func Offset: 0x754
	// Line 1278, Address: 0x414304, Func Offset: 0x764
	// Line 1306, Address: 0x414308, Func Offset: 0x768
	// Line 1279, Address: 0x414318, Func Offset: 0x778
	// Line 1306, Address: 0x41431c, Func Offset: 0x77c
	// Line 1279, Address: 0x414320, Func Offset: 0x780
	// Line 1306, Address: 0x414334, Func Offset: 0x794
	// Line 1287, Address: 0x41433c, Func Offset: 0x79c
	// Line 1306, Address: 0x414340, Func Offset: 0x7a0
	// Line 1029, Address: 0x41437c, Func Offset: 0x7dc
	// Line 1306, Address: 0x414380, Func Offset: 0x7e0
	// Line 1090, Address: 0x414388, Func Offset: 0x7e8
	// Line 1306, Address: 0x41438c, Func Offset: 0x7ec
	// Line 1092, Address: 0x4143a8, Func Offset: 0x808
	// Line 1306, Address: 0x4143b0, Func Offset: 0x810
	// Line 1092, Address: 0x4143b4, Func Offset: 0x814
	// Line 1306, Address: 0x4143bc, Func Offset: 0x81c
	// Line 1096, Address: 0x4143c4, Func Offset: 0x824
	// Line 1306, Address: 0x4143c8, Func Offset: 0x828
	// Line 1033, Address: 0x4143f0, Func Offset: 0x850
	// Line 1035, Address: 0x4143f4, Func Offset: 0x854
	// Line 1306, Address: 0x4143f8, Func Offset: 0x858
	// Line 1042, Address: 0x4143fc, Func Offset: 0x85c
	// Line 1034, Address: 0x414400, Func Offset: 0x860
	// Line 1035, Address: 0x414404, Func Offset: 0x864
	// Line 1306, Address: 0x414408, Func Offset: 0x868
	// Line 1035, Address: 0x414410, Func Offset: 0x870
	// Line 1306, Address: 0x414414, Func Offset: 0x874
	// Line 1035, Address: 0x414418, Func Offset: 0x878
	// Line 1306, Address: 0x414424, Func Offset: 0x884
	// Line 1042, Address: 0x414430, Func Offset: 0x890
	// Line 1306, Address: 0x414438, Func Offset: 0x898
	// Line 1043, Address: 0x414458, Func Offset: 0x8b8
	// Line 1306, Address: 0x414460, Func Offset: 0x8c0
	// Line 1046, Address: 0x414484, Func Offset: 0x8e4
	// Line 1306, Address: 0x414488, Func Offset: 0x8e8
	// Line 1047, Address: 0x41448c, Func Offset: 0x8ec
	// Line 1306, Address: 0x414490, Func Offset: 0x8f0
	// Line 1053, Address: 0x4144b0, Func Offset: 0x910
	// Line 1306, Address: 0x4144b8, Func Offset: 0x918
	// Line 1055, Address: 0x4144bc, Func Offset: 0x91c
	// Line 1056, Address: 0x4144c0, Func Offset: 0x920
	// Line 1057, Address: 0x4144d4, Func Offset: 0x934
	// Line 1056, Address: 0x4144d8, Func Offset: 0x938
	// Line 1306, Address: 0x4144dc, Func Offset: 0x93c
	// Line 1057, Address: 0x4144e4, Func Offset: 0x944
	// Line 1055, Address: 0x4144e8, Func Offset: 0x948
	// Line 1306, Address: 0x4144f4, Func Offset: 0x954
	// Line 1057, Address: 0x414504, Func Offset: 0x964
	// Line 1306, Address: 0x414514, Func Offset: 0x974
	// Line 1057, Address: 0x414518, Func Offset: 0x978
	// Line 1306, Address: 0x414520, Func Offset: 0x980
	// Line 1060, Address: 0x414534, Func Offset: 0x994
	// Line 1306, Address: 0x414538, Func Offset: 0x998
	// Line 1061, Address: 0x414548, Func Offset: 0x9a8
	// Line 1070, Address: 0x41454c, Func Offset: 0x9ac
	// Line 1306, Address: 0x414550, Func Offset: 0x9b0
	// Line 1070, Address: 0x414558, Func Offset: 0x9b8
	// Line 1306, Address: 0x414560, Func Offset: 0x9c0
	// Line 1070, Address: 0x414570, Func Offset: 0x9d0
	// Line 1306, Address: 0x414578, Func Offset: 0x9d8
	// Line 1077, Address: 0x4145a4, Func Offset: 0xa04
	// Line 1306, Address: 0x4145a8, Func Offset: 0xa08
	// Line 1103, Address: 0x41472c, Func Offset: 0xb8c
	// Line 1306, Address: 0x414730, Func Offset: 0xb90
	// Line 1108, Address: 0x414750, Func Offset: 0xbb0
	// Line 1306, Address: 0x414754, Func Offset: 0xbb4
	// Line 1111, Address: 0x414780, Func Offset: 0xbe0
	// Line 1112, Address: 0x414784, Func Offset: 0xbe4
	// Line 1306, Address: 0x414788, Func Offset: 0xbe8
	// Line 1115, Address: 0x4147b8, Func Offset: 0xc18
	// Line 1306, Address: 0x4147e0, Func Offset: 0xc40
	// Line 1115, Address: 0x4147e4, Func Offset: 0xc44
	// Line 1306, Address: 0x4147f0, Func Offset: 0xc50
	// Line 1119, Address: 0x414828, Func Offset: 0xc88
	// Line 1306, Address: 0x41482c, Func Offset: 0xc8c
	// Line 1125, Address: 0x414840, Func Offset: 0xca0
	// Line 1306, Address: 0x414848, Func Offset: 0xca8
	// Line 1051, Address: 0x414850, Func Offset: 0xcb0
	// Line 1306, Address: 0x414858, Func Offset: 0xcb8
	// Line 1052, Address: 0x41485c, Func Offset: 0xcbc
	// Line 1306, Address: 0x414860, Func Offset: 0xcc0
	// Line 1060, Address: 0x414878, Func Offset: 0xcd8
	// Line 1306, Address: 0x41487c, Func Offset: 0xcdc
	// Line 1100, Address: 0x4148a8, Func Offset: 0xd08
	// Line 1306, Address: 0x4148ac, Func Offset: 0xd0c
	// Line 1125, Address: 0x4148bc, Func Offset: 0xd1c
	// Line 1128, Address: 0x4148c0, Func Offset: 0xd20
	// Line 1306, Address: 0x4148c4, Func Offset: 0xd24
	// Line 1130, Address: 0x4148d8, Func Offset: 0xd38
	// Line 1306, Address: 0x4148dc, Func Offset: 0xd3c
	// Line 1131, Address: 0x4148f0, Func Offset: 0xd50
	// Line 1132, Address: 0x4148f4, Func Offset: 0xd54
	// Line 1306, Address: 0x4148f8, Func Offset: 0xd58
	// Line 1133, Address: 0x414900, Func Offset: 0xd60
	// Line 1134, Address: 0x414908, Func Offset: 0xd68
	// Line 1306, Address: 0x41490c, Func Offset: 0xd6c
	// Line 1141, Address: 0x414928, Func Offset: 0xd88
	// Line 1306, Address: 0x41492c, Func Offset: 0xd8c
	// Line 1143, Address: 0x414934, Func Offset: 0xd94
	// Line 1306, Address: 0x414938, Func Offset: 0xd98
	// Line 1159, Address: 0x414958, Func Offset: 0xdb8
	// Line 1191, Address: 0x414960, Func Offset: 0xdc0
	// Line 1306, Address: 0x414964, Func Offset: 0xdc4
	// Line 1193, Address: 0x414978, Func Offset: 0xdd8
	// Line 1306, Address: 0x41497c, Func Offset: 0xddc
	// Line 1194, Address: 0x414990, Func Offset: 0xdf0
	// Line 1195, Address: 0x414994, Func Offset: 0xdf4
	// Line 1306, Address: 0x414998, Func Offset: 0xdf8
	// Line 1196, Address: 0x4149a0, Func Offset: 0xe00
	// Line 1197, Address: 0x4149a8, Func Offset: 0xe08
	// Line 1306, Address: 0x4149ac, Func Offset: 0xe0c
	// Line 1307, Address: 0x4149e8, Func Offset: 0xe48
	// Func End, Address: 0x414a1c, Func Offset: 0xe7c
}

// CutsceneShadowRender__FP19CutsceneShadowModel
// Start address: 0x414a20
void CutsceneShadowRender(CutsceneShadowModel* smod)
{
	RpAtomic* model;
	uint32 bits;
	// Line 850, Address: 0x414a20, Func Offset: 0
	// Line 851, Address: 0x414a34, Func Offset: 0x14
	// Line 852, Address: 0x414a38, Func Offset: 0x18
	// Line 853, Address: 0x414a3c, Func Offset: 0x1c
	// Line 854, Address: 0x414a44, Func Offset: 0x24
	// Line 855, Address: 0x414a50, Func Offset: 0x30
	// Line 856, Address: 0x414a5c, Func Offset: 0x3c
	// Line 857, Address: 0x414a60, Func Offset: 0x40
	// Line 859, Address: 0x414a6c, Func Offset: 0x4c
	// Line 860, Address: 0x414a78, Func Offset: 0x58
	// Func End, Address: 0x414a90, Func Offset: 0x70
}

// JDeltaEval__FP8RpAtomicPvPvf
// Start address: 0x414a90
void JDeltaEval(RpAtomic* model, void* deltaModel, void* deltaAnim, float32 time)
{
	float32 outweight[128];
	float32* currweight;
	int32 i;
	int32 numFrames;
	int32 numWeights;
	float32* times;
	float32* weights;
	float32 lerp;
	float32 invlerp;
	RwV3d* outverts;
	int32 numRun;
	JDeltaTarget* dtgt;
	float32 scale;
	int16* svert;
	int32 j;
	int32 cmpval;
	RwV3d* vert;
	int32 j;
	int32 cmpval;
	float32 scale;
	int16* svert;
	int32 j;
	int32 cmpval;
	float32 scale;
	RwV3d* vert;
	int32 j;
	int32 cmpval;
	// Line 724, Address: 0x414a90, Func Offset: 0
	// Line 746, Address: 0x414aac, Func Offset: 0x1c
	// Line 739, Address: 0x414ab0, Func Offset: 0x20
	// Line 740, Address: 0x414ab4, Func Offset: 0x24
	// Line 742, Address: 0x414ab8, Func Offset: 0x28
	// Line 746, Address: 0x414abc, Func Offset: 0x2c
	// Line 748, Address: 0x414ad8, Func Offset: 0x48
	// Line 755, Address: 0x414af8, Func Offset: 0x68
	// Line 756, Address: 0x414afc, Func Offset: 0x6c
	// Line 757, Address: 0x414b04, Func Offset: 0x74
	// Line 747, Address: 0x414b1c, Func Offset: 0x8c
	// Line 757, Address: 0x414b20, Func Offset: 0x90
	// Line 767, Address: 0x414b28, Func Offset: 0x98
	// Line 775, Address: 0x414b34, Func Offset: 0xa4
	// Line 776, Address: 0x414b3c, Func Offset: 0xac
	// Line 771, Address: 0x414b40, Func Offset: 0xb0
	// Line 775, Address: 0x414b44, Func Offset: 0xb4
	// Line 776, Address: 0x414b48, Func Offset: 0xb8
	// Line 775, Address: 0x414b4c, Func Offset: 0xbc
	// Line 776, Address: 0x414b50, Func Offset: 0xc0
	// Line 778, Address: 0x414b58, Func Offset: 0xc8
	// Line 779, Address: 0x414b64, Func Offset: 0xd4
	// Line 778, Address: 0x414b68, Func Offset: 0xd8
	// Line 779, Address: 0x414b6c, Func Offset: 0xdc
	// Line 778, Address: 0x414b70, Func Offset: 0xe0
	// Line 779, Address: 0x414b7c, Func Offset: 0xec
	// Line 780, Address: 0x414b90, Func Offset: 0x100
	// Line 786, Address: 0x414b98, Func Offset: 0x108
	// Line 782, Address: 0x414c24, Func Offset: 0x194
	// Line 786, Address: 0x414c2c, Func Offset: 0x19c
	// Line 782, Address: 0x414c30, Func Offset: 0x1a0
	// Line 786, Address: 0x414c34, Func Offset: 0x1a4
	// Line 783, Address: 0x414c3c, Func Offset: 0x1ac
	// Line 786, Address: 0x414c44, Func Offset: 0x1b4
	// Line 783, Address: 0x414c48, Func Offset: 0x1b8
	// Line 786, Address: 0x414c4c, Func Offset: 0x1bc
	// Line 784, Address: 0x414c54, Func Offset: 0x1c4
	// Line 786, Address: 0x414c5c, Func Offset: 0x1cc
	// Line 784, Address: 0x414c60, Func Offset: 0x1d0
	// Line 786, Address: 0x414c64, Func Offset: 0x1d4
	// Line 782, Address: 0x414c6c, Func Offset: 0x1dc
	// Line 786, Address: 0x414c74, Func Offset: 0x1e4
	// Line 782, Address: 0x414c78, Func Offset: 0x1e8
	// Line 786, Address: 0x414c7c, Func Offset: 0x1ec
	// Line 783, Address: 0x414c84, Func Offset: 0x1f4
	// Line 786, Address: 0x414c8c, Func Offset: 0x1fc
	// Line 783, Address: 0x414c90, Func Offset: 0x200
	// Line 786, Address: 0x414c94, Func Offset: 0x204
	// Line 784, Address: 0x414c9c, Func Offset: 0x20c
	// Line 786, Address: 0x414ca4, Func Offset: 0x214
	// Line 784, Address: 0x414ca8, Func Offset: 0x218
	// Line 786, Address: 0x414cac, Func Offset: 0x21c
	// Line 782, Address: 0x414cb4, Func Offset: 0x224
	// Line 786, Address: 0x414cbc, Func Offset: 0x22c
	// Line 782, Address: 0x414cc0, Func Offset: 0x230
	// Line 786, Address: 0x414cc4, Func Offset: 0x234
	// Line 783, Address: 0x414ccc, Func Offset: 0x23c
	// Line 786, Address: 0x414cd4, Func Offset: 0x244
	// Line 783, Address: 0x414cd8, Func Offset: 0x248
	// Line 786, Address: 0x414cdc, Func Offset: 0x24c
	// Line 784, Address: 0x414ce4, Func Offset: 0x254
	// Line 786, Address: 0x414cec, Func Offset: 0x25c
	// Line 784, Address: 0x414cf0, Func Offset: 0x260
	// Line 786, Address: 0x414cf4, Func Offset: 0x264
	// Line 782, Address: 0x414cfc, Func Offset: 0x26c
	// Line 786, Address: 0x414d04, Func Offset: 0x274
	// Line 782, Address: 0x414d08, Func Offset: 0x278
	// Line 786, Address: 0x414d0c, Func Offset: 0x27c
	// Line 783, Address: 0x414d14, Func Offset: 0x284
	// Line 786, Address: 0x414d1c, Func Offset: 0x28c
	// Line 783, Address: 0x414d20, Func Offset: 0x290
	// Line 786, Address: 0x414d24, Func Offset: 0x294
	// Line 784, Address: 0x414d2c, Func Offset: 0x29c
	// Line 786, Address: 0x414d34, Func Offset: 0x2a4
	// Line 784, Address: 0x414d38, Func Offset: 0x2a8
	// Line 786, Address: 0x414d3c, Func Offset: 0x2ac
	// Line 782, Address: 0x414d44, Func Offset: 0x2b4
	// Line 786, Address: 0x414d4c, Func Offset: 0x2bc
	// Line 782, Address: 0x414d50, Func Offset: 0x2c0
	// Line 786, Address: 0x414d54, Func Offset: 0x2c4
	// Line 783, Address: 0x414d5c, Func Offset: 0x2cc
	// Line 786, Address: 0x414d64, Func Offset: 0x2d4
	// Line 783, Address: 0x414d68, Func Offset: 0x2d8
	// Line 786, Address: 0x414d6c, Func Offset: 0x2dc
	// Line 784, Address: 0x414d74, Func Offset: 0x2e4
	// Line 786, Address: 0x414d7c, Func Offset: 0x2ec
	// Line 784, Address: 0x414d80, Func Offset: 0x2f0
	// Line 786, Address: 0x414d84, Func Offset: 0x2f4
	// Line 782, Address: 0x414d8c, Func Offset: 0x2fc
	// Line 786, Address: 0x414d94, Func Offset: 0x304
	// Line 782, Address: 0x414d98, Func Offset: 0x308
	// Line 786, Address: 0x414d9c, Func Offset: 0x30c
	// Line 783, Address: 0x414da4, Func Offset: 0x314
	// Line 786, Address: 0x414dac, Func Offset: 0x31c
	// Line 783, Address: 0x414db0, Func Offset: 0x320
	// Line 786, Address: 0x414db4, Func Offset: 0x324
	// Line 784, Address: 0x414dbc, Func Offset: 0x32c
	// Line 786, Address: 0x414dc4, Func Offset: 0x334
	// Line 784, Address: 0x414dc8, Func Offset: 0x338
	// Line 786, Address: 0x414dcc, Func Offset: 0x33c
	// Line 782, Address: 0x414dd4, Func Offset: 0x344
	// Line 786, Address: 0x414ddc, Func Offset: 0x34c
	// Line 782, Address: 0x414de0, Func Offset: 0x350
	// Line 786, Address: 0x414de4, Func Offset: 0x354
	// Line 783, Address: 0x414dec, Func Offset: 0x35c
	// Line 786, Address: 0x414df4, Func Offset: 0x364
	// Line 783, Address: 0x414df8, Func Offset: 0x368
	// Line 786, Address: 0x414dfc, Func Offset: 0x36c
	// Line 784, Address: 0x414e04, Func Offset: 0x374
	// Line 786, Address: 0x414e0c, Func Offset: 0x37c
	// Line 784, Address: 0x414e10, Func Offset: 0x380
	// Line 786, Address: 0x414e14, Func Offset: 0x384
	// Line 782, Address: 0x414e1c, Func Offset: 0x38c
	// Line 786, Address: 0x414e24, Func Offset: 0x394
	// Line 782, Address: 0x414e28, Func Offset: 0x398
	// Line 786, Address: 0x414e2c, Func Offset: 0x39c
	// Line 783, Address: 0x414e34, Func Offset: 0x3a4
	// Line 786, Address: 0x414e3c, Func Offset: 0x3ac
	// Line 783, Address: 0x414e40, Func Offset: 0x3b0
	// Line 786, Address: 0x414e44, Func Offset: 0x3b4
	// Line 784, Address: 0x414e4c, Func Offset: 0x3bc
	// Line 786, Address: 0x414e50, Func Offset: 0x3c0
	// Line 784, Address: 0x414e58, Func Offset: 0x3c8
	// Line 786, Address: 0x414e5c, Func Offset: 0x3cc
	// Line 782, Address: 0x414e8c, Func Offset: 0x3fc
	// Line 786, Address: 0x414e94, Func Offset: 0x404
	// Line 782, Address: 0x414e98, Func Offset: 0x408
	// Line 786, Address: 0x414e9c, Func Offset: 0x40c
	// Line 783, Address: 0x414ea4, Func Offset: 0x414
	// Line 786, Address: 0x414eac, Func Offset: 0x41c
	// Line 783, Address: 0x414eb0, Func Offset: 0x420
	// Line 786, Address: 0x414eb4, Func Offset: 0x424
	// Line 784, Address: 0x414ebc, Func Offset: 0x42c
	// Line 786, Address: 0x414ec0, Func Offset: 0x430
	// Line 784, Address: 0x414ec8, Func Offset: 0x438
	// Line 786, Address: 0x414ecc, Func Offset: 0x43c
	// Line 787, Address: 0x414ed8, Func Offset: 0x448
	// Line 802, Address: 0x414ee8, Func Offset: 0x458
	// Line 800, Address: 0x414eec, Func Offset: 0x45c
	// Line 804, Address: 0x414ef0, Func Offset: 0x460
	// Line 814, Address: 0x414ef8, Func Offset: 0x468
	// Line 810, Address: 0x414f00, Func Offset: 0x470
	// Line 806, Address: 0x414f04, Func Offset: 0x474
	// Line 807, Address: 0x414f08, Func Offset: 0x478
	// Line 808, Address: 0x414f18, Func Offset: 0x488
	// Line 811, Address: 0x414f24, Func Offset: 0x494
	// Line 810, Address: 0x414f28, Func Offset: 0x498
	// Line 811, Address: 0x414f2c, Func Offset: 0x49c
	// Line 810, Address: 0x414f30, Func Offset: 0x4a0
	// Line 809, Address: 0x414f40, Func Offset: 0x4b0
	// Line 811, Address: 0x414f44, Func Offset: 0x4b4
	// Line 812, Address: 0x414f54, Func Offset: 0x4c4
	// Line 818, Address: 0x414f5c, Func Offset: 0x4cc
	// Line 814, Address: 0x414fe8, Func Offset: 0x558
	// Line 818, Address: 0x414ff4, Func Offset: 0x564
	// Line 814, Address: 0x414ff8, Func Offset: 0x568
	// Line 818, Address: 0x414ffc, Func Offset: 0x56c
	// Line 815, Address: 0x415008, Func Offset: 0x578
	// Line 818, Address: 0x415014, Func Offset: 0x584
	// Line 815, Address: 0x415018, Func Offset: 0x588
	// Line 818, Address: 0x41501c, Func Offset: 0x58c
	// Line 816, Address: 0x415028, Func Offset: 0x598
	// Line 818, Address: 0x415034, Func Offset: 0x5a4
	// Line 816, Address: 0x415038, Func Offset: 0x5a8
	// Line 818, Address: 0x41503c, Func Offset: 0x5ac
	// Line 814, Address: 0x415048, Func Offset: 0x5b8
	// Line 818, Address: 0x415054, Func Offset: 0x5c4
	// Line 814, Address: 0x415058, Func Offset: 0x5c8
	// Line 818, Address: 0x41505c, Func Offset: 0x5cc
	// Line 815, Address: 0x415068, Func Offset: 0x5d8
	// Line 818, Address: 0x415074, Func Offset: 0x5e4
	// Line 815, Address: 0x415078, Func Offset: 0x5e8
	// Line 818, Address: 0x41507c, Func Offset: 0x5ec
	// Line 816, Address: 0x415088, Func Offset: 0x5f8
	// Line 818, Address: 0x415094, Func Offset: 0x604
	// Line 816, Address: 0x415098, Func Offset: 0x608
	// Line 818, Address: 0x41509c, Func Offset: 0x60c
	// Line 814, Address: 0x4150a8, Func Offset: 0x618
	// Line 818, Address: 0x4150b4, Func Offset: 0x624
	// Line 814, Address: 0x4150b8, Func Offset: 0x628
	// Line 818, Address: 0x4150bc, Func Offset: 0x62c
	// Line 815, Address: 0x4150c8, Func Offset: 0x638
	// Line 818, Address: 0x4150d4, Func Offset: 0x644
	// Line 815, Address: 0x4150d8, Func Offset: 0x648
	// Line 818, Address: 0x4150dc, Func Offset: 0x64c
	// Line 816, Address: 0x4150e8, Func Offset: 0x658
	// Line 818, Address: 0x4150f4, Func Offset: 0x664
	// Line 816, Address: 0x4150f8, Func Offset: 0x668
	// Line 818, Address: 0x4150fc, Func Offset: 0x66c
	// Line 814, Address: 0x415108, Func Offset: 0x678
	// Line 818, Address: 0x415114, Func Offset: 0x684
	// Line 814, Address: 0x415118, Func Offset: 0x688
	// Line 818, Address: 0x41511c, Func Offset: 0x68c
	// Line 815, Address: 0x415128, Func Offset: 0x698
	// Line 818, Address: 0x415134, Func Offset: 0x6a4
	// Line 815, Address: 0x415138, Func Offset: 0x6a8
	// Line 818, Address: 0x41513c, Func Offset: 0x6ac
	// Line 816, Address: 0x415148, Func Offset: 0x6b8
	// Line 818, Address: 0x415154, Func Offset: 0x6c4
	// Line 816, Address: 0x415158, Func Offset: 0x6c8
	// Line 818, Address: 0x41515c, Func Offset: 0x6cc
	// Line 814, Address: 0x415168, Func Offset: 0x6d8
	// Line 818, Address: 0x415174, Func Offset: 0x6e4
	// Line 814, Address: 0x415178, Func Offset: 0x6e8
	// Line 818, Address: 0x41517c, Func Offset: 0x6ec
	// Line 815, Address: 0x415188, Func Offset: 0x6f8
	// Line 818, Address: 0x415194, Func Offset: 0x704
	// Line 815, Address: 0x415198, Func Offset: 0x708
	// Line 818, Address: 0x41519c, Func Offset: 0x70c
	// Line 816, Address: 0x4151a8, Func Offset: 0x718
	// Line 818, Address: 0x4151b4, Func Offset: 0x724
	// Line 816, Address: 0x4151b8, Func Offset: 0x728
	// Line 818, Address: 0x4151bc, Func Offset: 0x72c
	// Line 814, Address: 0x4151c8, Func Offset: 0x738
	// Line 818, Address: 0x4151d4, Func Offset: 0x744
	// Line 814, Address: 0x4151d8, Func Offset: 0x748
	// Line 818, Address: 0x4151dc, Func Offset: 0x74c
	// Line 815, Address: 0x4151e8, Func Offset: 0x758
	// Line 818, Address: 0x4151f4, Func Offset: 0x764
	// Line 815, Address: 0x4151f8, Func Offset: 0x768
	// Line 818, Address: 0x4151fc, Func Offset: 0x76c
	// Line 816, Address: 0x415208, Func Offset: 0x778
	// Line 818, Address: 0x415214, Func Offset: 0x784
	// Line 816, Address: 0x415218, Func Offset: 0x788
	// Line 818, Address: 0x41521c, Func Offset: 0x78c
	// Line 814, Address: 0x415228, Func Offset: 0x798
	// Line 818, Address: 0x415234, Func Offset: 0x7a4
	// Line 814, Address: 0x415238, Func Offset: 0x7a8
	// Line 818, Address: 0x41523c, Func Offset: 0x7ac
	// Line 815, Address: 0x415248, Func Offset: 0x7b8
	// Line 818, Address: 0x415254, Func Offset: 0x7c4
	// Line 815, Address: 0x415258, Func Offset: 0x7c8
	// Line 818, Address: 0x41525c, Func Offset: 0x7cc
	// Line 816, Address: 0x415268, Func Offset: 0x7d8
	// Line 818, Address: 0x415274, Func Offset: 0x7e4
	// Line 816, Address: 0x415278, Func Offset: 0x7e8
	// Line 818, Address: 0x41527c, Func Offset: 0x7ec
	// Line 814, Address: 0x415288, Func Offset: 0x7f8
	// Line 818, Address: 0x415294, Func Offset: 0x804
	// Line 814, Address: 0x415298, Func Offset: 0x808
	// Line 818, Address: 0x41529c, Func Offset: 0x80c
	// Line 815, Address: 0x4152a8, Func Offset: 0x818
	// Line 818, Address: 0x4152b4, Func Offset: 0x824
	// Line 815, Address: 0x4152b8, Func Offset: 0x828
	// Line 818, Address: 0x4152bc, Func Offset: 0x82c
	// Line 816, Address: 0x4152c8, Func Offset: 0x838
	// Line 818, Address: 0x4152cc, Func Offset: 0x83c
	// Line 816, Address: 0x4152d0, Func Offset: 0x840
	// Line 818, Address: 0x4152d8, Func Offset: 0x848
	// Line 816, Address: 0x4152dc, Func Offset: 0x84c
	// Line 818, Address: 0x4152e0, Func Offset: 0x850
	// Line 814, Address: 0x415318, Func Offset: 0x888
	// Line 818, Address: 0x415324, Func Offset: 0x894
	// Line 814, Address: 0x415328, Func Offset: 0x898
	// Line 818, Address: 0x41532c, Func Offset: 0x89c
	// Line 815, Address: 0x415338, Func Offset: 0x8a8
	// Line 818, Address: 0x415344, Func Offset: 0x8b4
	// Line 815, Address: 0x415348, Func Offset: 0x8b8
	// Line 818, Address: 0x41534c, Func Offset: 0x8bc
	// Line 816, Address: 0x415358, Func Offset: 0x8c8
	// Line 818, Address: 0x41535c, Func Offset: 0x8cc
	// Line 816, Address: 0x415360, Func Offset: 0x8d0
	// Line 818, Address: 0x415368, Func Offset: 0x8d8
	// Line 816, Address: 0x41536c, Func Offset: 0x8dc
	// Line 818, Address: 0x415370, Func Offset: 0x8e0
	// Line 819, Address: 0x415380, Func Offset: 0x8f0
	// Line 835, Address: 0x415390, Func Offset: 0x900
	// Line 837, Address: 0x415394, Func Offset: 0x904
	// Line 836, Address: 0x415398, Func Offset: 0x908
	// Line 838, Address: 0x41539c, Func Offset: 0x90c
	// Line 840, Address: 0x4153a8, Func Offset: 0x918
	// Line 841, Address: 0x4153b0, Func Offset: 0x920
	// Line 749, Address: 0x4153b8, Func Offset: 0x928
	// Line 841, Address: 0x4153c0, Func Offset: 0x930
	// Line 749, Address: 0x4153c4, Func Offset: 0x934
	// Line 841, Address: 0x4153c8, Func Offset: 0x938
	// Line 750, Address: 0x4153d0, Func Offset: 0x940
	// Line 841, Address: 0x4153d8, Func Offset: 0x948
	// Line 759, Address: 0x4153dc, Func Offset: 0x94c
	// Line 760, Address: 0x4153e4, Func Offset: 0x954
	// Line 758, Address: 0x4153e8, Func Offset: 0x958
	// Line 841, Address: 0x4153f8, Func Offset: 0x968
	// Line 761, Address: 0x41545c, Func Offset: 0x9cc
	// Line 841, Address: 0x415464, Func Offset: 0x9d4
	// Line 761, Address: 0x415470, Func Offset: 0x9e0
	// Line 841, Address: 0x415478, Func Offset: 0x9e8
	// Line 761, Address: 0x415484, Func Offset: 0x9f4
	// Line 841, Address: 0x41548c, Func Offset: 0x9fc
	// Line 761, Address: 0x415498, Func Offset: 0xa08
	// Line 841, Address: 0x4154a0, Func Offset: 0xa10
	// Line 761, Address: 0x4154ac, Func Offset: 0xa1c
	// Line 841, Address: 0x4154b4, Func Offset: 0xa24
	// Line 761, Address: 0x4154c0, Func Offset: 0xa30
	// Line 841, Address: 0x4154c8, Func Offset: 0xa38
	// Line 761, Address: 0x4154d4, Func Offset: 0xa44
	// Line 841, Address: 0x4154dc, Func Offset: 0xa4c
	// Line 761, Address: 0x4154e8, Func Offset: 0xa58
	// Line 841, Address: 0x4154ec, Func Offset: 0xa5c
	// Line 761, Address: 0x4154f0, Func Offset: 0xa60
	// Line 841, Address: 0x4154f4, Func Offset: 0xa64
	// Line 761, Address: 0x41553c, Func Offset: 0xaac
	// Line 841, Address: 0x415540, Func Offset: 0xab0
	// Line 761, Address: 0x415544, Func Offset: 0xab4
	// Line 841, Address: 0x415548, Func Offset: 0xab8
	// Line 789, Address: 0x415570, Func Offset: 0xae0
	// Line 841, Address: 0x415574, Func Offset: 0xae4
	// Line 789, Address: 0x415578, Func Offset: 0xae8
	// Line 841, Address: 0x415580, Func Offset: 0xaf0
	// Line 790, Address: 0x415588, Func Offset: 0xaf8
	// Line 841, Address: 0x41558c, Func Offset: 0xafc
	// Line 789, Address: 0x415590, Func Offset: 0xb00
	// Line 841, Address: 0x415594, Func Offset: 0xb04
	// Line 822, Address: 0x415788, Func Offset: 0xcf8
	// Line 841, Address: 0x41578c, Func Offset: 0xcfc
	// Line 822, Address: 0x415794, Func Offset: 0xd04
	// Line 823, Address: 0x415798, Func Offset: 0xd08
	// Line 841, Address: 0x41579c, Func Offset: 0xd0c
	// Line 822, Address: 0x4157a4, Func Offset: 0xd14
	// Line 841, Address: 0x4157a8, Func Offset: 0xd18
	// Line 823, Address: 0x4157b4, Func Offset: 0xd24
	// Line 841, Address: 0x4157b8, Func Offset: 0xd28
	// Line 826, Address: 0x415850, Func Offset: 0xdc0
	// Line 841, Address: 0x415858, Func Offset: 0xdc8
	// Line 827, Address: 0x415864, Func Offset: 0xdd4
	// Line 841, Address: 0x41586c, Func Offset: 0xddc
	// Line 828, Address: 0x415878, Func Offset: 0xde8
	// Line 841, Address: 0x415880, Func Offset: 0xdf0
	// Line 826, Address: 0x41588c, Func Offset: 0xdfc
	// Line 841, Address: 0x415894, Func Offset: 0xe04
	// Line 827, Address: 0x4158a0, Func Offset: 0xe10
	// Line 841, Address: 0x4158a8, Func Offset: 0xe18
	// Line 828, Address: 0x4158b4, Func Offset: 0xe24
	// Line 841, Address: 0x4158bc, Func Offset: 0xe2c
	// Line 826, Address: 0x4158c8, Func Offset: 0xe38
	// Line 841, Address: 0x4158d0, Func Offset: 0xe40
	// Line 827, Address: 0x4158dc, Func Offset: 0xe4c
	// Line 841, Address: 0x4158e4, Func Offset: 0xe54
	// Line 828, Address: 0x4158f0, Func Offset: 0xe60
	// Line 841, Address: 0x4158f8, Func Offset: 0xe68
	// Line 826, Address: 0x415904, Func Offset: 0xe74
	// Line 841, Address: 0x41590c, Func Offset: 0xe7c
	// Line 827, Address: 0x415918, Func Offset: 0xe88
	// Line 841, Address: 0x415920, Func Offset: 0xe90
	// Line 828, Address: 0x41592c, Func Offset: 0xe9c
	// Line 841, Address: 0x415934, Func Offset: 0xea4
	// Line 826, Address: 0x415940, Func Offset: 0xeb0
	// Line 841, Address: 0x415948, Func Offset: 0xeb8
	// Line 827, Address: 0x415954, Func Offset: 0xec4
	// Line 841, Address: 0x41595c, Func Offset: 0xecc
	// Line 828, Address: 0x415968, Func Offset: 0xed8
	// Line 841, Address: 0x415970, Func Offset: 0xee0
	// Line 826, Address: 0x41597c, Func Offset: 0xeec
	// Line 841, Address: 0x415984, Func Offset: 0xef4
	// Line 827, Address: 0x415990, Func Offset: 0xf00
	// Line 841, Address: 0x415998, Func Offset: 0xf08
	// Line 828, Address: 0x4159a4, Func Offset: 0xf14
	// Line 841, Address: 0x4159ac, Func Offset: 0xf1c
	// Line 826, Address: 0x4159b8, Func Offset: 0xf28
	// Line 841, Address: 0x4159c0, Func Offset: 0xf30
	// Line 827, Address: 0x4159cc, Func Offset: 0xf3c
	// Line 841, Address: 0x4159d4, Func Offset: 0xf44
	// Line 828, Address: 0x4159e0, Func Offset: 0xf50
	// Line 841, Address: 0x4159e8, Func Offset: 0xf58
	// Line 826, Address: 0x4159f4, Func Offset: 0xf64
	// Line 841, Address: 0x4159fc, Func Offset: 0xf6c
	// Line 827, Address: 0x415a08, Func Offset: 0xf78
	// Line 841, Address: 0x415a10, Func Offset: 0xf80
	// Line 828, Address: 0x415a1c, Func Offset: 0xf8c
	// Line 841, Address: 0x415a24, Func Offset: 0xf94
	// Line 826, Address: 0x415a60, Func Offset: 0xfd0
	// Line 841, Address: 0x415a68, Func Offset: 0xfd8
	// Line 827, Address: 0x415a74, Func Offset: 0xfe4
	// Line 841, Address: 0x415a7c, Func Offset: 0xfec
	// Line 828, Address: 0x415a88, Func Offset: 0xff8
	// Line 841, Address: 0x415a90, Func Offset: 0x1000
	// Func End, Address: 0x415ae0, Func Offset: 0x1050
}

// xcsCalcAnimMatrices__FP11RwMatrixTagP8RpAtomicP16xCutsceneAnimHdrfUi
// Start address: 0x415ae0
void xcsCalcAnimMatrices(RwMatrixTag* animMat, RpAtomic* model, xCutsceneAnimHdr* ahdr, float32 time, uint32 tworoot)
{
	xQuat quatresult[65];
	xVec3 tranresult[65];
	void* afile;
	xMat4x3 m1;
	xMat4x3 m2;
	uint32 numbone;
	uint32 boneidx;
	xQuat* qqq;
	xVec3* ttt;
	// Line 626, Address: 0x415ae0, Func Offset: 0
	// Line 629, Address: 0x415b14, Func Offset: 0x34
	// Line 626, Address: 0x415b18, Func Offset: 0x38
	// Line 630, Address: 0x415b1c, Func Offset: 0x3c
	// Line 633, Address: 0x415b30, Func Offset: 0x50
	// Line 636, Address: 0x415b40, Func Offset: 0x60
	// Line 637, Address: 0x415b68, Func Offset: 0x88
	// Line 638, Address: 0x415b70, Func Offset: 0x90
	// Line 639, Address: 0x415b78, Func Offset: 0x98
	// Line 642, Address: 0x415b7c, Func Offset: 0x9c
	// Line 646, Address: 0x415b88, Func Offset: 0xa8
	// Line 648, Address: 0x415b90, Func Offset: 0xb0
	// Line 647, Address: 0x415b94, Func Offset: 0xb4
	// Line 648, Address: 0x415b98, Func Offset: 0xb8
	// Line 646, Address: 0x415b9c, Func Offset: 0xbc
	// Line 647, Address: 0x415ba0, Func Offset: 0xc0
	// Line 646, Address: 0x415ba4, Func Offset: 0xc4
	// Line 648, Address: 0x415ba8, Func Offset: 0xc8
	// Line 649, Address: 0x415bb0, Func Offset: 0xd0
	// Line 650, Address: 0x415bc0, Func Offset: 0xe0
	// Line 651, Address: 0x415bcc, Func Offset: 0xec
	// Line 652, Address: 0x415bd0, Func Offset: 0xf0
	// Line 651, Address: 0x415bd4, Func Offset: 0xf4
	// Line 652, Address: 0x415bd8, Func Offset: 0xf8
	// Line 650, Address: 0x415bdc, Func Offset: 0xfc
	// Line 652, Address: 0x415be0, Func Offset: 0x100
	// Line 650, Address: 0x415be4, Func Offset: 0x104
	// Line 651, Address: 0x415bf4, Func Offset: 0x114
	// Line 650, Address: 0x415bf8, Func Offset: 0x118
	// Line 651, Address: 0x415bfc, Func Offset: 0x11c
	// Line 650, Address: 0x415c00, Func Offset: 0x120
	// Line 651, Address: 0x415c0c, Func Offset: 0x12c
	// Line 652, Address: 0x415c10, Func Offset: 0x130
	// Line 659, Address: 0x415c18, Func Offset: 0x138
	// Line 660, Address: 0x415c1c, Func Offset: 0x13c
	// Line 659, Address: 0x415c20, Func Offset: 0x140
	// Line 660, Address: 0x415c24, Func Offset: 0x144
	// Line 653, Address: 0x415c28, Func Offset: 0x148
	// Line 654, Address: 0x415c2c, Func Offset: 0x14c
	// Line 655, Address: 0x415c30, Func Offset: 0x150
	// Line 656, Address: 0x415c34, Func Offset: 0x154
	// Line 657, Address: 0x415c38, Func Offset: 0x158
	// Line 660, Address: 0x415c3c, Func Offset: 0x15c
	// Line 662, Address: 0x415c44, Func Offset: 0x164
	// Line 661, Address: 0x415c4c, Func Offset: 0x16c
	// Line 662, Address: 0x415c50, Func Offset: 0x170
	// Line 661, Address: 0x415c6c, Func Offset: 0x18c
	// Line 667, Address: 0x415c74, Func Offset: 0x194
	// Line 670, Address: 0x415c7c, Func Offset: 0x19c
	// Line 667, Address: 0x415c80, Func Offset: 0x1a0
	// Line 670, Address: 0x415c84, Func Offset: 0x1a4
	// Line 668, Address: 0x415c88, Func Offset: 0x1a8
	// Line 670, Address: 0x415c8c, Func Offset: 0x1ac
	// Line 671, Address: 0x415c98, Func Offset: 0x1b8
	// Line 672, Address: 0x415ca8, Func Offset: 0x1c8
	// Line 673, Address: 0x415cb8, Func Offset: 0x1d8
	// Line 677, Address: 0x415cc8, Func Offset: 0x1e8
	// Line 674, Address: 0x415ccc, Func Offset: 0x1ec
	// Line 675, Address: 0x415cd0, Func Offset: 0x1f0
	// Line 677, Address: 0x415cd4, Func Offset: 0x1f4
	// Line 679, Address: 0x415ce4, Func Offset: 0x204
	// Line 680, Address: 0x415ce8, Func Offset: 0x208
	// Line 681, Address: 0x415cec, Func Offset: 0x20c
	// Line 682, Address: 0x415cf0, Func Offset: 0x210
	// Line 684, Address: 0x415d10, Func Offset: 0x230
	// Line 686, Address: 0x415d24, Func Offset: 0x244
	// Line 687, Address: 0x415d2c, Func Offset: 0x24c
	// Line 688, Address: 0x415d34, Func Offset: 0x254
	// Line 689, Address: 0x415d44, Func Offset: 0x264
	// Line 690, Address: 0x415d54, Func Offset: 0x274
	// Line 692, Address: 0x415d64, Func Offset: 0x284
	// Func End, Address: 0x415d94, Func Offset: 0x2b4
}

// xCutscene_Update__FP9xCutscenef
// Start address: 0x415da0
int32 xCutscene_Update(xCutscene* csn, float32 dt)
{
	xCutsceneTime* oldChunk;
	// Line 395, Address: 0x415da0, Func Offset: 0
	// Line 403, Address: 0x415db4, Func Offset: 0x14
	// Line 404, Address: 0x415dcc, Func Offset: 0x2c
	// Line 407, Address: 0x415de0, Func Offset: 0x40
	// Line 409, Address: 0x415dec, Func Offset: 0x4c
	// Line 410, Address: 0x415df8, Func Offset: 0x58
	// Line 411, Address: 0x415e04, Func Offset: 0x64
	// Line 428, Address: 0x415e10, Func Offset: 0x70
	// Line 429, Address: 0x415e28, Func Offset: 0x88
	// Line 433, Address: 0x415e38, Func Offset: 0x98
	// Line 435, Address: 0x415ec0, Func Offset: 0x120
	// Line 433, Address: 0x415ec4, Func Offset: 0x124
	// Line 435, Address: 0x415ec8, Func Offset: 0x128
	// Line 438, Address: 0x415ee0, Func Offset: 0x140
	// Line 444, Address: 0x415ef8, Func Offset: 0x158
	// Line 448, Address: 0x415f10, Func Offset: 0x170
	// Line 449, Address: 0x415f14, Func Offset: 0x174
	// Line 453, Address: 0x415f5c, Func Offset: 0x1bc
	// Line 454, Address: 0x415f70, Func Offset: 0x1d0
	// Line 490, Address: 0x415f78, Func Offset: 0x1d8
	// Line 424, Address: 0x415f8c, Func Offset: 0x1ec
	// Line 490, Address: 0x415f9c, Func Offset: 0x1fc
	// Line 440, Address: 0x415fb8, Func Offset: 0x218
	// Line 490, Address: 0x415fc0, Func Offset: 0x220
	// Line 460, Address: 0x415ff4, Func Offset: 0x254
	// Line 490, Address: 0x41600c, Func Offset: 0x26c
	// Line 460, Address: 0x41601c, Func Offset: 0x27c
	// Line 490, Address: 0x416024, Func Offset: 0x284
	// Line 460, Address: 0x41602c, Func Offset: 0x28c
	// Line 490, Address: 0x416030, Func Offset: 0x290
	// Line 460, Address: 0x416040, Func Offset: 0x2a0
	// Line 490, Address: 0x416048, Func Offset: 0x2a8
	// Line 469, Address: 0x416084, Func Offset: 0x2e4
	// Line 490, Address: 0x416090, Func Offset: 0x2f0
	// Line 485, Address: 0x4160d4, Func Offset: 0x334
	// Line 490, Address: 0x4160dc, Func Offset: 0x33c
	// Line 491, Address: 0x4160f4, Func Offset: 0x354
	// Func End, Address: 0x416108, Func Offset: 0x368
}

// xCutscene_LoadStart__FP9xCutscene
// Start address: 0x416110
int32 xCutscene_LoadStart(xCutscene* csn)
{
	// Line 361, Address: 0x416110, Func Offset: 0
	// Line 365, Address: 0x41611c, Func Offset: 0xc
	// Line 366, Address: 0x41612c, Func Offset: 0x1c
	// Line 368, Address: 0x416134, Func Offset: 0x24
	// Line 370, Address: 0x41613c, Func Offset: 0x2c
	// Func End, Address: 0x41614c, Func Offset: 0x3c
}

// xCutscene_Destroy__FP9xCutscene
// Start address: 0x416150
int32 xCutscene_Destroy(xCutscene* csn)
{
	uint32 i;
	// Line 272, Address: 0x416150, Func Offset: 0
	// Line 273, Address: 0x416168, Func Offset: 0x18
	// Line 302, Address: 0x416174, Func Offset: 0x24
	// Line 305, Address: 0x416180, Func Offset: 0x30
	// Line 306, Address: 0x41618c, Func Offset: 0x3c
	// Line 307, Address: 0x416194, Func Offset: 0x44
	// Line 312, Address: 0x4161a4, Func Offset: 0x54
	// Line 315, Address: 0x4161a8, Func Offset: 0x58
	// Line 316, Address: 0x4161b8, Func Offset: 0x68
	// Line 318, Address: 0x4161c0, Func Offset: 0x70
	// Line 325, Address: 0x4161cc, Func Offset: 0x7c
	// Line 326, Address: 0x4161f0, Func Offset: 0xa0
	// Line 325, Address: 0x4161f4, Func Offset: 0xa4
	// Line 326, Address: 0x4161fc, Func Offset: 0xac
	// Line 328, Address: 0x41620c, Func Offset: 0xbc
	// Line 334, Address: 0x416214, Func Offset: 0xc4
	// Line 335, Address: 0x416228, Func Offset: 0xd8
	// Line 336, Address: 0x416234, Func Offset: 0xe4
	// Line 337, Address: 0x416240, Func Offset: 0xf0
	// Line 339, Address: 0x416248, Func Offset: 0xf8
	// Line 341, Address: 0x416260, Func Offset: 0x110
	// Line 354, Address: 0x416278, Func Offset: 0x128
	// Line 356, Address: 0x416288, Func Offset: 0x138
	// Line 357, Address: 0x4162d0, Func Offset: 0x180
	// Func End, Address: 0x4162ec, Func Offset: 0x19c
}

// xCutscene_Create__FUiUi
// Start address: 0x4162f0
xCutscene* xCutscene_Create(uint32 csnID, uint32 subtitlesID)
{
	xCutscene* csn;
	int32 tocnum;
	xCutsceneInfo* cnfo;
	uint32 i;
	// Line 204, Address: 0x4162f0, Func Offset: 0
	// Line 205, Address: 0x416308, Func Offset: 0x18
	// Line 204, Address: 0x416310, Func Offset: 0x20
	// Line 205, Address: 0x416314, Func Offset: 0x24
	// Line 209, Address: 0x41631c, Func Offset: 0x2c
	// Line 210, Address: 0x416320, Func Offset: 0x30
	// Line 209, Address: 0x416324, Func Offset: 0x34
	// Line 210, Address: 0x416328, Func Offset: 0x38
	// Line 213, Address: 0x416334, Func Offset: 0x44
	// Line 211, Address: 0x416338, Func Offset: 0x48
	// Line 213, Address: 0x416340, Func Offset: 0x50
	// Line 216, Address: 0x416360, Func Offset: 0x70
	// Line 215, Address: 0x416364, Func Offset: 0x74
	// Line 216, Address: 0x416368, Func Offset: 0x78
	// Line 217, Address: 0x416378, Func Offset: 0x88
	// Line 235, Address: 0x416384, Func Offset: 0x94
	// Line 243, Address: 0x416388, Func Offset: 0x98
	// Line 235, Address: 0x41638c, Func Offset: 0x9c
	// Line 243, Address: 0x416390, Func Offset: 0xa0
	// Line 244, Address: 0x416398, Func Offset: 0xa8
	// Line 262, Address: 0x4163bc, Func Offset: 0xcc
	// Line 263, Address: 0x4163c0, Func Offset: 0xd0
	// Line 264, Address: 0x4163d0, Func Offset: 0xe0
	// Line 263, Address: 0x4163d8, Func Offset: 0xe8
	// Line 264, Address: 0x4163dc, Func Offset: 0xec
	// Line 265, Address: 0x4163e8, Func Offset: 0xf8
	// Line 249, Address: 0x4163f0, Func Offset: 0x100
	// Line 265, Address: 0x4163f4, Func Offset: 0x104
	// Line 257, Address: 0x4163fc, Func Offset: 0x10c
	// Line 265, Address: 0x416400, Func Offset: 0x110
	// Line 250, Address: 0x416414, Func Offset: 0x124
	// Line 265, Address: 0x416418, Func Offset: 0x128
	// Line 251, Address: 0x41642c, Func Offset: 0x13c
	// Line 265, Address: 0x416430, Func Offset: 0x140
	// Line 252, Address: 0x416440, Func Offset: 0x150
	// Line 265, Address: 0x416444, Func Offset: 0x154
	// Line 260, Address: 0x416474, Func Offset: 0x184
	// Line 266, Address: 0x416478, Func Offset: 0x188
	// Func End, Address: 0x416490, Func Offset: 0x1a0
}

// xCutscene_InitEnd__Fv
// Start address: 0x416490
void xCutscene_InitEnd()
{
	int32 i;
	int32 maxModels;
	int32 tocnum;
	xCutsceneInfo* cnfo;
	uint32 cnum;
	// Line 134, Address: 0x416490, Func Offset: 0
	// Line 135, Address: 0x4164a0, Func Offset: 0x10
	// Line 136, Address: 0x4164ac, Func Offset: 0x1c
	// Line 137, Address: 0x4164bc, Func Offset: 0x2c
	// Line 136, Address: 0x4164c4, Func Offset: 0x34
	// Line 137, Address: 0x4164c8, Func Offset: 0x38
	// Line 138, Address: 0x4164d0, Func Offset: 0x40
	// Line 137, Address: 0x4164d8, Func Offset: 0x48
	// Line 138, Address: 0x4164dc, Func Offset: 0x4c
	// Line 144, Address: 0x4164e8, Func Offset: 0x58
	// Line 140, Address: 0x4164ec, Func Offset: 0x5c
	// Line 144, Address: 0x4164f0, Func Offset: 0x60
	// Line 138, Address: 0x4164f4, Func Offset: 0x64
	// Line 139, Address: 0x4164fc, Func Offset: 0x6c
	// Line 140, Address: 0x416504, Func Offset: 0x74
	// Line 141, Address: 0x416508, Func Offset: 0x78
	// Line 142, Address: 0x41650c, Func Offset: 0x7c
	// Line 143, Address: 0x416510, Func Offset: 0x80
	// Line 144, Address: 0x416514, Func Offset: 0x84
	// Line 147, Address: 0x41651c, Func Offset: 0x8c
	// Line 146, Address: 0x416520, Func Offset: 0x90
	// Line 147, Address: 0x416524, Func Offset: 0x94
	// Line 150, Address: 0x416540, Func Offset: 0xb0
	// Line 149, Address: 0x416544, Func Offset: 0xb4
	// Line 150, Address: 0x416548, Func Offset: 0xb8
	// Line 152, Address: 0x416558, Func Offset: 0xc8
	// Line 153, Address: 0x416560, Func Offset: 0xd0
	// Line 154, Address: 0x416564, Func Offset: 0xd4
	// Line 155, Address: 0x416574, Func Offset: 0xe4
	// Line 154, Address: 0x416578, Func Offset: 0xe8
	// Line 155, Address: 0x41657c, Func Offset: 0xec
	// Line 156, Address: 0x416588, Func Offset: 0xf8
	// Line 159, Address: 0x416590, Func Offset: 0x100
	// Line 160, Address: 0x4165c8, Func Offset: 0x138
	// Line 157, Address: 0x4165d4, Func Offset: 0x144
	// Line 160, Address: 0x4165d8, Func Offset: 0x148
	// Func End, Address: 0x4165fc, Func Offset: 0x16c
}

// xCutscene_InitTOC__FPv
// Start address: 0x416600
void xCutscene_InitTOC(void* toc)
{
	// Line 121, Address: 0x416600, Func Offset: 0
	// Line 123, Address: 0x41660c, Func Offset: 0xc
	// Line 124, Address: 0x416614, Func Offset: 0x14
	// Line 123, Address: 0x41661c, Func Offset: 0x1c
	// Line 124, Address: 0x416620, Func Offset: 0x20
	// Line 126, Address: 0x416624, Func Offset: 0x24
	// Line 125, Address: 0x41662c, Func Offset: 0x2c
	// Line 123, Address: 0x416630, Func Offset: 0x30
	// Line 124, Address: 0x416634, Func Offset: 0x34
	// Line 123, Address: 0x416638, Func Offset: 0x38
	// Line 124, Address: 0x41663c, Func Offset: 0x3c
	// Line 126, Address: 0x416640, Func Offset: 0x40
	// Line 131, Address: 0x416648, Func Offset: 0x48
	// Func End, Address: 0x416664, Func Offset: 0x64
}

// xCutscene_InitBegin__Fv
// Start address: 0x416670
void xCutscene_InitBegin()
{
	// Line 110, Address: 0x416670, Func Offset: 0
	// Line 111, Address: 0x416674, Func Offset: 0x4
	// Line 110, Address: 0x416678, Func Offset: 0x8
	// Line 111, Address: 0x41667c, Func Offset: 0xc
	// Line 112, Address: 0x41668c, Func Offset: 0x1c
	// Line 113, Address: 0x4166a0, Func Offset: 0x30
	// Line 114, Address: 0x4166b4, Func Offset: 0x44
	// Line 115, Address: 0x4166b8, Func Offset: 0x48
	// Func End, Address: 0x4166c4, Func Offset: 0x54
}

// start__Q219@unnamed@xWad1_cpp@12xCamCutsceneFv
// Start address: 0x446140
void xCamCutscene::start()
{
	// Line 1331, Address: 0x446140, Func Offset: 0
	// Line 1332, Address: 0x446150, Func Offset: 0x10
	// Line 1333, Address: 0x4461d0, Func Offset: 0x90
	// Line 1334, Address: 0x4461e8, Func Offset: 0xa8
	// Func End, Address: 0x4461f0, Func Offset: 0xb0
}

// stop__Q219@unnamed@xWad1_cpp@12xCamCutsceneFv
// Start address: 0x4461f0
void xCamCutscene::stop()
{
	// Line 1339, Address: 0x4461f0, Func Offset: 0
	// Line 1340, Address: 0x446200, Func Offset: 0x10
	// Line 1341, Address: 0x44627c, Func Offset: 0x8c
	// Func End, Address: 0x446284, Func Offset: 0x94
}

// update__Q219@unnamed@xWad1_cpp@12xCamCutsceneFR6xScenef
// Start address: 0x446290
void xCamCutscene::update()
{
	xCutsceneData* data;
	uint32 i;
	uint32 dataIndex;
	xMat3x3 tmpMat;
	xQuat quats[2];
	float32 lerp;
	int32 frame;
	uint32 count;
	zFlyKey* keys;
	// Line 1344, Address: 0x446290, Func Offset: 0
	// Line 1351, Address: 0x4462a8, Func Offset: 0x18
	// Line 1344, Address: 0x4462ac, Func Offset: 0x1c
	// Line 1350, Address: 0x4462d0, Func Offset: 0x40
	// Line 1352, Address: 0x4462d4, Func Offset: 0x44
	// Line 1353, Address: 0x4462ec, Func Offset: 0x5c
	// Line 1390, Address: 0x4462fc, Func Offset: 0x6c
	// Line 1391, Address: 0x446300, Func Offset: 0x70
	// Line 1392, Address: 0x446304, Func Offset: 0x74
	// Line 1391, Address: 0x446308, Func Offset: 0x78
	// Line 1392, Address: 0x44630c, Func Offset: 0x7c
	// Line 1391, Address: 0x446310, Func Offset: 0x80
	// Line 1393, Address: 0x44631c, Func Offset: 0x8c
	// Line 1395, Address: 0x446330, Func Offset: 0xa0
	// Line 1396, Address: 0x446344, Func Offset: 0xb4
	// Line 1357, Address: 0x446350, Func Offset: 0xc0
	// Line 1396, Address: 0x446358, Func Offset: 0xc8
	// Line 1357, Address: 0x44636c, Func Offset: 0xdc
	// Line 1396, Address: 0x446374, Func Offset: 0xe4
	// Line 1362, Address: 0x446380, Func Offset: 0xf0
	// Line 1396, Address: 0x446384, Func Offset: 0xf4
	// Line 1363, Address: 0x446398, Func Offset: 0x108
	// Line 1364, Address: 0x44639c, Func Offset: 0x10c
	// Line 1363, Address: 0x4463a0, Func Offset: 0x110
	// Line 1396, Address: 0x4463a4, Func Offset: 0x114
	// Line 1370, Address: 0x4463b0, Func Offset: 0x120
	// Line 1396, Address: 0x4463b8, Func Offset: 0x128
	// Line 1380, Address: 0x4463c8, Func Offset: 0x138
	// Line 1396, Address: 0x4463cc, Func Offset: 0x13c
	// Line 1371, Address: 0x4463d0, Func Offset: 0x140
	// Line 1396, Address: 0x4463d4, Func Offset: 0x144
	// Line 1372, Address: 0x4463dc, Func Offset: 0x14c
	// Line 1396, Address: 0x4463e0, Func Offset: 0x150
	// Line 1373, Address: 0x4463e8, Func Offset: 0x158
	// Line 1396, Address: 0x4463ec, Func Offset: 0x15c
	// Line 1377, Address: 0x44641c, Func Offset: 0x18c
	// Line 1396, Address: 0x446420, Func Offset: 0x190
	// Line 1378, Address: 0x44642c, Func Offset: 0x19c
	// Line 1396, Address: 0x446430, Func Offset: 0x1a0
	// Line 1379, Address: 0x44643c, Func Offset: 0x1ac
	// Line 1396, Address: 0x446440, Func Offset: 0x1b0
	// Line 1382, Address: 0x44645c, Func Offset: 0x1cc
	// Line 1396, Address: 0x446460, Func Offset: 0x1d0
	// Line 1382, Address: 0x446464, Func Offset: 0x1d4
	// Line 1396, Address: 0x446468, Func Offset: 0x1d8
	// Line 1383, Address: 0x446470, Func Offset: 0x1e0
	// Line 1396, Address: 0x446474, Func Offset: 0x1e4
	// Line 1389, Address: 0x446480, Func Offset: 0x1f0
	// Line 1396, Address: 0x446484, Func Offset: 0x1f4
	// Line 1389, Address: 0x446488, Func Offset: 0x1f8
	// Line 1384, Address: 0x446490, Func Offset: 0x200
	// Line 1396, Address: 0x446498, Func Offset: 0x208
	// Line 1384, Address: 0x4464a4, Func Offset: 0x214
	// Line 1396, Address: 0x4464ac, Func Offset: 0x21c
	// Line 1384, Address: 0x4464b8, Func Offset: 0x228
	// Line 1396, Address: 0x4464c0, Func Offset: 0x230
	// Line 1389, Address: 0x4464d4, Func Offset: 0x244
	// Line 1396, Address: 0x4464e4, Func Offset: 0x254
	// Line 1389, Address: 0x4464f4, Func Offset: 0x264
	// Line 1361, Address: 0x446510, Func Offset: 0x280
	// Line 1362, Address: 0x446514, Func Offset: 0x284
	// Line 1365, Address: 0x44651c, Func Offset: 0x28c
	// Line 1396, Address: 0x446520, Func Offset: 0x290
	// Line 1366, Address: 0x446524, Func Offset: 0x294
	// Line 1396, Address: 0x44652c, Func Offset: 0x29c
	// Line 1366, Address: 0x44653c, Func Offset: 0x2ac
	// Line 1396, Address: 0x446544, Func Offset: 0x2b4
	// Line 1367, Address: 0x446550, Func Offset: 0x2c0
	// Line 1396, Address: 0x446554, Func Offset: 0x2c4
	// Line 1366, Address: 0x446558, Func Offset: 0x2c8
	// Line 1396, Address: 0x446568, Func Offset: 0x2d8
	// Func End, Address: 0x4465a0, Func Offset: 0x310
}

