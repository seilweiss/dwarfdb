



uint8 zEntSimpleObj_UsePartialCameraCollision(zEntSimpleObj* ent);
void zEntSimpleObjEventCB(xBase* from, xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget, uint32 toParamWidgetID);
void zEntSimpleObj_Reset(zEntSimpleObj* ent);
void zEntSimpleObj_Load(zEntSimpleObj* ent, xSerial* s);
void zEntSimpleObj_Save(zEntSimpleObj* ent, xSerial* s);
void zEntSimpleObj_Setup(zEntSimpleObj* ent);
void zEntSimpleObj_Update(zEntSimpleObj* ent, xScene* sc, float32 dt);
void zEntSimple_Orientation(xMat4x3& mat, RwMatrixTag* modelmat, uint8 use_world_up);
void zEntSimpleObj_Move();
void zEntSimpleObj_Init(zEntSimpleObj* ent, xEntAsset* asset, uint8 physparams, uint8 candestroy);
void zEntSimpleObj_Init(void* ent, void* asset);
void zEntTrackPhysics_Init(void* ent, void* asset);
void zEntSimpleObj_Render(xEnt* ent);
void zEntSimpleObj_MgrCustomRender();
void zEntSimpleObj_MgrCustomUpdate(zScene* s, float32 dt);
void zEntSimpleObj_MgrUpdateRender();
void zEntSimpleObj_MgrInit(zEntSimpleObj** entList, uint32 entCount);
void VisUpdateSimpleMgr(xEnt* ent);
int32 CmpSimpleMgr(void* a, void* b);

// zEntSimpleObj_UsePartialCameraCollision__FP13zEntSimpleObj
// Start address: 0x3149c0
uint8 zEntSimpleObj_UsePartialCameraCollision(zEntSimpleObj* ent)
{
	// Line 1567, Address: 0x3149c0, Func Offset: 0
	// Line 1568, Address: 0x3149c8, Func Offset: 0x8
	// Func End, Address: 0x3149d0, Func Offset: 0x10
}

// zEntSimpleObjEventCB__FP5xBaseP5xBaseUiPCfP5xBaseUi
// Start address: 0x3149d0
void zEntSimpleObjEventCB(xBase* from, xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget, uint32 toParamWidgetID)
{
	zEntSimpleObj* s;
	zShrapnelAsset* shrap;
	FloatAndVoid dist;
	uint32 numFireworks;
	uint32 i;
	xVec3 position;
	xEnt* ent;
	uint32 i;
	xVec3 position;
	// Line 1226, Address: 0x3149d0, Func Offset: 0
	// Line 1231, Address: 0x314a10, Func Offset: 0x40
	// Line 1235, Address: 0x314a14, Func Offset: 0x44
	// Line 1236, Address: 0x314a24, Func Offset: 0x54
	// Line 1238, Address: 0x314a3c, Func Offset: 0x6c
	// Line 1243, Address: 0x314bd4, Func Offset: 0x204
	// Line 1245, Address: 0x314bf4, Func Offset: 0x224
	// Line 1246, Address: 0x314c24, Func Offset: 0x254
	// Line 1248, Address: 0x314c34, Func Offset: 0x264
	// Line 1253, Address: 0x314c3c, Func Offset: 0x26c
	// Line 1255, Address: 0x314c5c, Func Offset: 0x28c
	// Line 1256, Address: 0x314c8c, Func Offset: 0x2bc
	// Line 1258, Address: 0x314c9c, Func Offset: 0x2cc
	// Line 1263, Address: 0x314ca4, Func Offset: 0x2d4
	// Line 1264, Address: 0x314cac, Func Offset: 0x2dc
	// Line 1266, Address: 0x314cb8, Func Offset: 0x2e8
	// Line 1272, Address: 0x314cd8, Func Offset: 0x308
	// Line 1273, Address: 0x314ce8, Func Offset: 0x318
	// Line 1274, Address: 0x314cf0, Func Offset: 0x320
	// Line 1276, Address: 0x314d0c, Func Offset: 0x33c
	// Line 1279, Address: 0x314d20, Func Offset: 0x350
	// Line 1280, Address: 0x314d50, Func Offset: 0x380
	// Line 1282, Address: 0x314d60, Func Offset: 0x390
	// Line 1288, Address: 0x314d68, Func Offset: 0x398
	// Line 1289, Address: 0x314d74, Func Offset: 0x3a4
	// Line 1292, Address: 0x314d7c, Func Offset: 0x3ac
	// Line 1293, Address: 0x314d84, Func Offset: 0x3b4
	// Line 1298, Address: 0x314d8c, Func Offset: 0x3bc
	// Line 1299, Address: 0x314d90, Func Offset: 0x3c0
	// Line 1298, Address: 0x314d94, Func Offset: 0x3c4
	// Line 1299, Address: 0x314d98, Func Offset: 0x3c8
	// Line 1300, Address: 0x314da0, Func Offset: 0x3d0
	// Line 1301, Address: 0x314da8, Func Offset: 0x3d8
	// Line 1302, Address: 0x314dbc, Func Offset: 0x3ec
	// Line 1303, Address: 0x314dc4, Func Offset: 0x3f4
	// Line 1305, Address: 0x314dd8, Func Offset: 0x408
	// Line 1310, Address: 0x314de0, Func Offset: 0x410
	// Line 1311, Address: 0x314de4, Func Offset: 0x414
	// Line 1310, Address: 0x314de8, Func Offset: 0x418
	// Line 1311, Address: 0x314df0, Func Offset: 0x420
	// Line 1312, Address: 0x314e00, Func Offset: 0x430
	// Line 1313, Address: 0x314e08, Func Offset: 0x438
	// Line 1314, Address: 0x314e1c, Func Offset: 0x44c
	// Line 1315, Address: 0x314e24, Func Offset: 0x454
	// Line 1317, Address: 0x314e38, Func Offset: 0x468
	// Line 1322, Address: 0x314e40, Func Offset: 0x470
	// Line 1323, Address: 0x314e44, Func Offset: 0x474
	// Line 1324, Address: 0x314e50, Func Offset: 0x480
	// Line 1326, Address: 0x314e70, Func Offset: 0x4a0
	// Line 1327, Address: 0x314ea0, Func Offset: 0x4d0
	// Line 1329, Address: 0x314eb0, Func Offset: 0x4e0
	// Line 1334, Address: 0x314eb8, Func Offset: 0x4e8
	// Line 1335, Address: 0x314ebc, Func Offset: 0x4ec
	// Line 1336, Address: 0x314ec4, Func Offset: 0x4f4
	// Line 1337, Address: 0x314ecc, Func Offset: 0x4fc
	// Line 1338, Address: 0x314ee0, Func Offset: 0x510
	// Line 1339, Address: 0x314ee8, Func Offset: 0x518
	// Line 1341, Address: 0x314efc, Func Offset: 0x52c
	// Line 1345, Address: 0x314f04, Func Offset: 0x534
	// Line 1346, Address: 0x314f0c, Func Offset: 0x53c
	// Line 1347, Address: 0x314f14, Func Offset: 0x544
	// Line 1350, Address: 0x314f1c, Func Offset: 0x54c
	// Line 1351, Address: 0x314f24, Func Offset: 0x554
	// Line 1353, Address: 0x314f2c, Func Offset: 0x55c
	// Line 1354, Address: 0x314f34, Func Offset: 0x564
	// Line 1357, Address: 0x314f3c, Func Offset: 0x56c
	// Line 1358, Address: 0x314f4c, Func Offset: 0x57c
	// Line 1362, Address: 0x314f58, Func Offset: 0x588
	// Line 1364, Address: 0x314f60, Func Offset: 0x590
	// Line 1365, Address: 0x314f74, Func Offset: 0x5a4
	// Line 1368, Address: 0x314f8c, Func Offset: 0x5bc
	// Line 1377, Address: 0x314f94, Func Offset: 0x5c4
	// Line 1378, Address: 0x314fd0, Func Offset: 0x600
	// Line 1381, Address: 0x314fd8, Func Offset: 0x608
	// Line 1382, Address: 0x315018, Func Offset: 0x648
	// Line 1386, Address: 0x315020, Func Offset: 0x650
	// Line 1388, Address: 0x31503c, Func Offset: 0x66c
	// Line 1390, Address: 0x31506c, Func Offset: 0x69c
	// Line 1392, Address: 0x315074, Func Offset: 0x6a4
	// Line 1393, Address: 0x31507c, Func Offset: 0x6ac
	// Line 1396, Address: 0x315084, Func Offset: 0x6b4
	// Line 1397, Address: 0x315090, Func Offset: 0x6c0
	// Line 1400, Address: 0x315098, Func Offset: 0x6c8
	// Line 1401, Address: 0x3150a0, Func Offset: 0x6d0
	// Line 1404, Address: 0x3150a8, Func Offset: 0x6d8
	// Line 1405, Address: 0x3150b0, Func Offset: 0x6e0
	// Line 1407, Address: 0x3150b8, Func Offset: 0x6e8
	// Line 1408, Address: 0x3150c0, Func Offset: 0x6f0
	// Line 1415, Address: 0x3150c8, Func Offset: 0x6f8
	// Line 1416, Address: 0x3150dc, Func Offset: 0x70c
	// Line 1418, Address: 0x3150f0, Func Offset: 0x720
	// Line 1425, Address: 0x3150f8, Func Offset: 0x728
	// Line 1427, Address: 0x315108, Func Offset: 0x738
	// Line 1431, Address: 0x315114, Func Offset: 0x744
	// Line 1433, Address: 0x31511c, Func Offset: 0x74c
	// Line 1436, Address: 0x315128, Func Offset: 0x758
	// Line 1441, Address: 0x315134, Func Offset: 0x764
	// Line 1442, Address: 0x315154, Func Offset: 0x784
	// Line 1443, Address: 0x315158, Func Offset: 0x788
	// Line 1444, Address: 0x31515c, Func Offset: 0x78c
	// Line 1443, Address: 0x315160, Func Offset: 0x790
	// Line 1445, Address: 0x315164, Func Offset: 0x794
	// Line 1451, Address: 0x315170, Func Offset: 0x7a0
	// Line 1452, Address: 0x315178, Func Offset: 0x7a8
	// Line 1453, Address: 0x31517c, Func Offset: 0x7ac
	// Line 1454, Address: 0x315188, Func Offset: 0x7b8
	// Line 1459, Address: 0x315198, Func Offset: 0x7c8
	// Line 1461, Address: 0x3151a4, Func Offset: 0x7d4
	// Line 1463, Address: 0x3151b8, Func Offset: 0x7e8
	// Line 1464, Address: 0x3151cc, Func Offset: 0x7fc
	// Line 1469, Address: 0x3151d4, Func Offset: 0x804
	// Line 1468, Address: 0x3151dc, Func Offset: 0x80c
	// Line 1469, Address: 0x3151e0, Func Offset: 0x810
	// Line 1472, Address: 0x3151ec, Func Offset: 0x81c
	// Line 1487, Address: 0x3151f4, Func Offset: 0x824
	// Line 1492, Address: 0x315200, Func Offset: 0x830
	// Line 1493, Address: 0x315258, Func Offset: 0x888
	// Line 1496, Address: 0x315288, Func Offset: 0x8b8
	// Line 1499, Address: 0x315290, Func Offset: 0x8c0
	// Line 1500, Address: 0x31529c, Func Offset: 0x8cc
	// Line 1499, Address: 0x3152a0, Func Offset: 0x8d0
	// Line 1500, Address: 0x3152b0, Func Offset: 0x8e0
	// Line 1503, Address: 0x3152ec, Func Offset: 0x91c
	// Line 1507, Address: 0x3152f0, Func Offset: 0x920
	// Line 1503, Address: 0x3152f4, Func Offset: 0x924
	// Line 1504, Address: 0x3152f8, Func Offset: 0x928
	// Line 1505, Address: 0x315300, Func Offset: 0x930
	// Line 1503, Address: 0x315308, Func Offset: 0x938
	// Line 1504, Address: 0x31530c, Func Offset: 0x93c
	// Line 1505, Address: 0x315310, Func Offset: 0x940
	// Line 1503, Address: 0x315314, Func Offset: 0x944
	// Line 1504, Address: 0x315318, Func Offset: 0x948
	// Line 1505, Address: 0x31531c, Func Offset: 0x94c
	// Line 1507, Address: 0x315320, Func Offset: 0x950
	// Line 1508, Address: 0x315378, Func Offset: 0x9a8
	// Line 1511, Address: 0x315380, Func Offset: 0x9b0
	// Line 1512, Address: 0x315384, Func Offset: 0x9b4
	// Line 1513, Address: 0x315388, Func Offset: 0x9b8
	// Line 1511, Address: 0x31538c, Func Offset: 0x9bc
	// Line 1512, Address: 0x315390, Func Offset: 0x9c0
	// Line 1513, Address: 0x315394, Func Offset: 0x9c4
	// Line 1516, Address: 0x315398, Func Offset: 0x9c8
	// Line 1517, Address: 0x315424, Func Offset: 0xa54
	// Line 1518, Address: 0x315434, Func Offset: 0xa64
	// Line 1522, Address: 0x31543c, Func Offset: 0xa6c
	// Line 1525, Address: 0x31544c, Func Offset: 0xa7c
	// Line 1527, Address: 0x315454, Func Offset: 0xa84
	// Line 1528, Address: 0x315468, Func Offset: 0xa98
	// Line 1531, Address: 0x315470, Func Offset: 0xaa0
	// Line 1532, Address: 0x315474, Func Offset: 0xaa4
	// Line 1533, Address: 0x315478, Func Offset: 0xaa8
	// Line 1534, Address: 0x31547c, Func Offset: 0xaac
	// Line 1536, Address: 0x315480, Func Offset: 0xab0
	// Line 1537, Address: 0x315534, Func Offset: 0xb64
	// Line 1558, Address: 0x315544, Func Offset: 0xb74
	// Line 1561, Address: 0x315548, Func Offset: 0xb78
	// Func End, Address: 0x31557c, Func Offset: 0xbac
}

// zEntSimpleObj_Reset__FP13zEntSimpleObjP6xScene
// Start address: 0x315580
void zEntSimpleObj_Reset(zEntSimpleObj* ent)
{
	RpAtomic* imodel;
	xLightKit* pLightKit;
	xSurface* surface;
	int32 i;
	xLinkAsset* la;
	xEnt* dent;
	// Line 1044, Address: 0x315580, Func Offset: 0
	// Line 1052, Address: 0x3155a4, Func Offset: 0x24
	// Line 1055, Address: 0x3155b8, Func Offset: 0x38
	// Line 1056, Address: 0x3155c8, Func Offset: 0x48
	// Line 1062, Address: 0x3155d4, Func Offset: 0x54
	// Line 1065, Address: 0x3155dc, Func Offset: 0x5c
	// Line 1066, Address: 0x3155e4, Func Offset: 0x64
	// Line 1071, Address: 0x3155e8, Func Offset: 0x68
	// Line 1072, Address: 0x315600, Func Offset: 0x80
	// Line 1076, Address: 0x315608, Func Offset: 0x88
	// Line 1078, Address: 0x315614, Func Offset: 0x94
	// Line 1086, Address: 0x315618, Func Offset: 0x98
	// Line 1078, Address: 0x31561c, Func Offset: 0x9c
	// Line 1079, Address: 0x315628, Func Offset: 0xa8
	// Line 1086, Address: 0x315638, Func Offset: 0xb8
	// Line 1087, Address: 0x315644, Func Offset: 0xc4
	// Line 1088, Address: 0x315648, Func Offset: 0xc8
	// Line 1087, Address: 0x315658, Func Offset: 0xd8
	// Line 1088, Address: 0x31565c, Func Offset: 0xdc
	// Line 1089, Address: 0x315664, Func Offset: 0xe4
	// Line 1090, Address: 0x31566c, Func Offset: 0xec
	// Line 1096, Address: 0x315674, Func Offset: 0xf4
	// Line 1098, Address: 0x315680, Func Offset: 0x100
	// Line 1099, Address: 0x315688, Func Offset: 0x108
	// Line 1101, Address: 0x31568c, Func Offset: 0x10c
	// Line 1099, Address: 0x315690, Func Offset: 0x110
	// Line 1100, Address: 0x315698, Func Offset: 0x118
	// Line 1101, Address: 0x3156a4, Func Offset: 0x124
	// Line 1104, Address: 0x3156b8, Func Offset: 0x138
	// Line 1105, Address: 0x3156c0, Func Offset: 0x140
	// Line 1109, Address: 0x3156cc, Func Offset: 0x14c
	// Line 1111, Address: 0x3156e0, Func Offset: 0x160
	// Line 1112, Address: 0x3156e4, Func Offset: 0x164
	// Line 1111, Address: 0x3156e8, Func Offset: 0x168
	// Line 1112, Address: 0x3156ec, Func Offset: 0x16c
	// Line 1133, Address: 0x3156f8, Func Offset: 0x178
	// Line 1135, Address: 0x31570c, Func Offset: 0x18c
	// Line 1133, Address: 0x315710, Func Offset: 0x190
	// Line 1139, Address: 0x315714, Func Offset: 0x194
	// Line 1140, Address: 0x31571c, Func Offset: 0x19c
	// Line 1148, Address: 0x315720, Func Offset: 0x1a0
	// Line 1140, Address: 0x315724, Func Offset: 0x1a4
	// Line 1148, Address: 0x315728, Func Offset: 0x1a8
	// Line 1150, Address: 0x315730, Func Offset: 0x1b0
	// Line 1153, Address: 0x315744, Func Offset: 0x1c4
	// Line 1156, Address: 0x315758, Func Offset: 0x1d8
	// Line 1159, Address: 0x31576c, Func Offset: 0x1ec
	// Line 1162, Address: 0x315780, Func Offset: 0x200
	// Line 1168, Address: 0x315784, Func Offset: 0x204
	// Line 1169, Address: 0x315788, Func Offset: 0x208
	// Line 1170, Address: 0x31578c, Func Offset: 0x20c
	// Line 1166, Address: 0x315790, Func Offset: 0x210
	// Line 1168, Address: 0x315794, Func Offset: 0x214
	// Line 1169, Address: 0x315798, Func Offset: 0x218
	// Line 1170, Address: 0x31579c, Func Offset: 0x21c
	// Line 1162, Address: 0x3157a0, Func Offset: 0x220
	// Line 1165, Address: 0x3157a8, Func Offset: 0x228
	// Line 1166, Address: 0x3157b4, Func Offset: 0x234
	// Line 1167, Address: 0x3157c0, Func Offset: 0x240
	// Line 1168, Address: 0x3157c4, Func Offset: 0x244
	// Line 1169, Address: 0x3157c8, Func Offset: 0x248
	// Line 1170, Address: 0x3157cc, Func Offset: 0x24c
	// Line 1171, Address: 0x3157d0, Func Offset: 0x250
	// Line 1181, Address: 0x3157e0, Func Offset: 0x260
	// Line 1183, Address: 0x3157ec, Func Offset: 0x26c
	// Line 1184, Address: 0x3157f4, Func Offset: 0x274
	// Line 1190, Address: 0x315808, Func Offset: 0x288
	// Line 1193, Address: 0x315814, Func Offset: 0x294
	// Line 1196, Address: 0x31583c, Func Offset: 0x2bc
	// Line 1197, Address: 0x315848, Func Offset: 0x2c8
	// Line 1198, Address: 0x315854, Func Offset: 0x2d4
	// Line 1202, Address: 0x3158e4, Func Offset: 0x364
	// Line 1203, Address: 0x3158f0, Func Offset: 0x370
	// Line 1206, Address: 0x3158fc, Func Offset: 0x37c
	// Line 1212, Address: 0x315908, Func Offset: 0x388
	// Line 1114, Address: 0x31591c, Func Offset: 0x39c
	// Line 1212, Address: 0x315920, Func Offset: 0x3a0
	// Line 1123, Address: 0x315934, Func Offset: 0x3b4
	// Line 1212, Address: 0x315938, Func Offset: 0x3b8
	// Line 1129, Address: 0x315944, Func Offset: 0x3c4
	// Line 1212, Address: 0x31594c, Func Offset: 0x3cc
	// Line 1121, Address: 0x315960, Func Offset: 0x3e0
	// Line 1212, Address: 0x315964, Func Offset: 0x3e4
	// Line 1142, Address: 0x315978, Func Offset: 0x3f8
	// Line 1212, Address: 0x315980, Func Offset: 0x400
	// Line 1151, Address: 0x315984, Func Offset: 0x404
	// Line 1212, Address: 0x315990, Func Offset: 0x410
	// Line 1154, Address: 0x315994, Func Offset: 0x414
	// Line 1212, Address: 0x3159a0, Func Offset: 0x420
	// Line 1157, Address: 0x3159a4, Func Offset: 0x424
	// Line 1212, Address: 0x3159b0, Func Offset: 0x430
	// Line 1160, Address: 0x3159b4, Func Offset: 0x434
	// Line 1212, Address: 0x3159c8, Func Offset: 0x448
	// Line 1186, Address: 0x3159cc, Func Offset: 0x44c
	// Line 1212, Address: 0x3159d0, Func Offset: 0x450
	// Line 1208, Address: 0x3159e8, Func Offset: 0x468
	// Line 1212, Address: 0x3159f4, Func Offset: 0x474
	// Func End, Address: 0x315a14, Func Offset: 0x494
}

// zEntSimpleObj_Load__FP13zEntSimpleObjP7xSerial
// Start address: 0x315a20
void zEntSimpleObj_Load(zEntSimpleObj* ent, xSerial* s)
{
	// Line 1025, Address: 0x315a20, Func Offset: 0
	// Func End, Address: 0x315a28, Func Offset: 0x8
}

// zEntSimpleObj_Save__FP13zEntSimpleObjP7xSerial
// Start address: 0x315a30
void zEntSimpleObj_Save(zEntSimpleObj* ent, xSerial* s)
{
	// Line 1006, Address: 0x315a30, Func Offset: 0
	// Func End, Address: 0x315a38, Func Offset: 0x8
}

// zEntSimpleObj_Setup__FP13zEntSimpleObj
// Start address: 0x315a40
void zEntSimpleObj_Setup(zEntSimpleObj* ent)
{
	// Line 983, Address: 0x315a40, Func Offset: 0
	// Line 986, Address: 0x315a50, Func Offset: 0x10
	// Line 990, Address: 0x315a60, Func Offset: 0x20
	// Line 991, Address: 0x315a84, Func Offset: 0x44
	// Line 994, Address: 0x315a88, Func Offset: 0x48
	// Line 987, Address: 0x315aac, Func Offset: 0x6c
	// Line 994, Address: 0x315ab8, Func Offset: 0x78
	// Line 987, Address: 0x315ac0, Func Offset: 0x80
	// Line 994, Address: 0x315ad4, Func Offset: 0x94
	// Line 987, Address: 0x315b0c, Func Offset: 0xcc
	// Line 994, Address: 0x315b10, Func Offset: 0xd0
	// Line 987, Address: 0x315b18, Func Offset: 0xd8
	// Line 994, Address: 0x315b1c, Func Offset: 0xdc
	// Line 987, Address: 0x315b24, Func Offset: 0xe4
	// Line 994, Address: 0x315b28, Func Offset: 0xe8
	// Line 987, Address: 0x315b30, Func Offset: 0xf0
	// Line 994, Address: 0x315b34, Func Offset: 0xf4
	// Line 987, Address: 0x315b3c, Func Offset: 0xfc
	// Line 994, Address: 0x315b40, Func Offset: 0x100
	// Line 987, Address: 0x315b58, Func Offset: 0x118
	// Line 994, Address: 0x315b5c, Func Offset: 0x11c
	// Line 987, Address: 0x315b64, Func Offset: 0x124
	// Line 994, Address: 0x315b68, Func Offset: 0x128
	// Line 987, Address: 0x315b74, Func Offset: 0x134
	// Line 994, Address: 0x315b80, Func Offset: 0x140
	// Func End, Address: 0x315b94, Func Offset: 0x154
}

// zEntSimpleObj_Update__FP13zEntSimpleObjP6xScenef
// Start address: 0x315ba0
void zEntSimpleObj_Update(zEntSimpleObj* ent, xScene* sc, float32 dt)
{
	float32 duration;
	xQuat* q0;
	xVec3* t0;
	// Line 928, Address: 0x315ba0, Func Offset: 0
	// Line 930, Address: 0x315bc0, Func Offset: 0x20
	// Line 934, Address: 0x315bcc, Func Offset: 0x2c
	// Line 936, Address: 0x315bd0, Func Offset: 0x30
	// Line 941, Address: 0x315bdc, Func Offset: 0x3c
	// Line 947, Address: 0x315bf0, Func Offset: 0x50
	// Line 948, Address: 0x315bf8, Func Offset: 0x58
	// Line 953, Address: 0x315c0c, Func Offset: 0x6c
	// Line 956, Address: 0x315c28, Func Offset: 0x88
	// Line 958, Address: 0x315c40, Func Offset: 0xa0
	// Line 959, Address: 0x315c48, Func Offset: 0xa8
	// Line 960, Address: 0x315c50, Func Offset: 0xb0
	// Line 963, Address: 0x315c5c, Func Offset: 0xbc
	// Line 965, Address: 0x315c60, Func Offset: 0xc0
	// Line 964, Address: 0x315c6c, Func Offset: 0xcc
	// Line 965, Address: 0x315c70, Func Offset: 0xd0
	// Line 966, Address: 0x315c80, Func Offset: 0xe0
	// Line 976, Address: 0x315c9c, Func Offset: 0xfc
	// Line 977, Address: 0x315cb8, Func Offset: 0x118
	// Line 979, Address: 0x315cc8, Func Offset: 0x128
	// Line 938, Address: 0x315cdc, Func Offset: 0x13c
	// Line 979, Address: 0x315ce0, Func Offset: 0x140
	// Line 961, Address: 0x315d18, Func Offset: 0x178
	// Line 980, Address: 0x315d24, Func Offset: 0x184
	// Func End, Address: 0x315d40, Func Offset: 0x1a0
}

// zEntSimple_Orientation__FRC7xMat4x3P11RwMatrixTagb
// Start address: 0x315d40
void zEntSimple_Orientation(xMat4x3& mat, RwMatrixTag* modelmat, uint8 use_world_up)
{
	xVec3 _up_;
	xVec3 _at_;
	xVec3 _right_;
	// Line 886, Address: 0x315d40, Func Offset: 0
	// Line 893, Address: 0x315d44, Func Offset: 0x4
	// Line 886, Address: 0x315d48, Func Offset: 0x8
	// Line 895, Address: 0x315d4c, Func Offset: 0xc
	// Line 886, Address: 0x315d50, Func Offset: 0x10
	// Line 895, Address: 0x315d54, Func Offset: 0x14
	// Line 886, Address: 0x315d58, Func Offset: 0x18
	// Line 895, Address: 0x315d5c, Func Offset: 0x1c
	// Line 886, Address: 0x315d60, Func Offset: 0x20
	// Line 895, Address: 0x315d64, Func Offset: 0x24
	// Line 886, Address: 0x315d68, Func Offset: 0x28
	// Line 895, Address: 0x315d6c, Func Offset: 0x2c
	// Line 886, Address: 0x315d70, Func Offset: 0x30
	// Line 895, Address: 0x315d74, Func Offset: 0x34
	// Line 886, Address: 0x315d78, Func Offset: 0x38
	// Line 896, Address: 0x315d7c, Func Offset: 0x3c
	// Line 886, Address: 0x315d80, Func Offset: 0x40
	// Line 896, Address: 0x315d8c, Func Offset: 0x4c
	// Line 886, Address: 0x315d90, Func Offset: 0x50
	// Line 887, Address: 0x315d98, Func Offset: 0x58
	// Line 888, Address: 0x315da4, Func Offset: 0x64
	// Line 887, Address: 0x315db0, Func Offset: 0x70
	// Line 888, Address: 0x315dbc, Func Offset: 0x7c
	// Line 887, Address: 0x315dc8, Func Offset: 0x88
	// Line 888, Address: 0x315dcc, Func Offset: 0x8c
	// Line 889, Address: 0x315dd0, Func Offset: 0x90
	// Line 891, Address: 0x315dd4, Func Offset: 0x94
	// Line 889, Address: 0x315ddc, Func Offset: 0x9c
	// Line 892, Address: 0x315de4, Func Offset: 0xa4
	// Line 889, Address: 0x315de8, Func Offset: 0xa8
	// Line 893, Address: 0x315dec, Func Offset: 0xac
	// Line 891, Address: 0x315df0, Func Offset: 0xb0
	// Line 889, Address: 0x315df4, Func Offset: 0xb4
	// Line 891, Address: 0x315dfc, Func Offset: 0xbc
	// Line 892, Address: 0x315e00, Func Offset: 0xc0
	// Line 889, Address: 0x315e04, Func Offset: 0xc4
	// Line 892, Address: 0x315e08, Func Offset: 0xc8
	// Line 893, Address: 0x315e10, Func Offset: 0xd0
	// Line 895, Address: 0x315e20, Func Offset: 0xe0
	// Line 896, Address: 0x315e40, Func Offset: 0x100
	// Line 899, Address: 0x315e78, Func Offset: 0x138
	// Line 896, Address: 0x315e7c, Func Offset: 0x13c
	// Line 899, Address: 0x315e84, Func Offset: 0x144
	// Line 896, Address: 0x315e90, Func Offset: 0x150
	// Line 899, Address: 0x315e98, Func Offset: 0x158
	// Line 896, Address: 0x315ea4, Func Offset: 0x164
	// Line 899, Address: 0x315eb0, Func Offset: 0x170
	// Line 896, Address: 0x315ecc, Func Offset: 0x18c
	// Line 899, Address: 0x315ed0, Func Offset: 0x190
	// Line 900, Address: 0x315ed4, Func Offset: 0x194
	// Line 902, Address: 0x315ee8, Func Offset: 0x1a8
	// Line 900, Address: 0x315eec, Func Offset: 0x1ac
	// Line 902, Address: 0x315ef0, Func Offset: 0x1b0
	// Line 903, Address: 0x315f20, Func Offset: 0x1e0
	// Line 906, Address: 0x315f30, Func Offset: 0x1f0
	// Line 909, Address: 0x315f60, Func Offset: 0x220
	// Line 910, Address: 0x315f6c, Func Offset: 0x22c
	// Line 911, Address: 0x315f78, Func Offset: 0x238
	// Line 913, Address: 0x315f84, Func Offset: 0x244
	// Line 914, Address: 0x315f90, Func Offset: 0x250
	// Line 915, Address: 0x315f9c, Func Offset: 0x25c
	// Line 917, Address: 0x315fa8, Func Offset: 0x268
	// Line 918, Address: 0x315fb4, Func Offset: 0x274
	// Line 919, Address: 0x315fc0, Func Offset: 0x280
	// Line 921, Address: 0x315fcc, Func Offset: 0x28c
	// Line 922, Address: 0x315fd8, Func Offset: 0x298
	// Line 923, Address: 0x315fe4, Func Offset: 0x2a4
	// Line 924, Address: 0x315ff0, Func Offset: 0x2b0
	// Func End, Address: 0x316024, Func Offset: 0x2e4
}

// zEntSimpleObj_Move__FP4xEntP6xScenefP9xEntFrame
// Start address: 0x316030
void zEntSimpleObj_Move()
{
	// Line 877, Address: 0x316030, Func Offset: 0
	// Func End, Address: 0x316038, Func Offset: 0x8
}

// zEntSimpleObj_Init__FP13zEntSimpleObjP9xEntAssetbb
// Start address: 0x316040
void zEntSimpleObj_Init(zEntSimpleObj* ent, xEntAsset* asset, uint8 physparams, uint8 candestroy)
{
	xSimpleObjAsset* sasset;
	uint32 tmpsize;
	RpAtomic* modelData;
	void* animData;
	uint32 animBoneCount;
	uint32 size;
	uint32 newid;
	xDestructibleAsset* destruct;
	// Line 722, Address: 0x316040, Func Offset: 0
	// Line 726, Address: 0x316044, Func Offset: 0x4
	// Line 722, Address: 0x316048, Func Offset: 0x8
	// Line 726, Address: 0x316070, Func Offset: 0x30
	// Line 728, Address: 0x316078, Func Offset: 0x38
	// Line 736, Address: 0x316080, Func Offset: 0x40
	// Line 741, Address: 0x316084, Func Offset: 0x44
	// Line 742, Address: 0x316088, Func Offset: 0x48
	// Line 743, Address: 0x31608c, Func Offset: 0x4c
	// Line 746, Address: 0x316090, Func Offset: 0x50
	// Line 749, Address: 0x3160a4, Func Offset: 0x64
	// Line 752, Address: 0x3160b8, Func Offset: 0x78
	// Line 755, Address: 0x3160cc, Func Offset: 0x8c
	// Line 760, Address: 0x3160e0, Func Offset: 0xa0
	// Line 767, Address: 0x3160e4, Func Offset: 0xa4
	// Line 761, Address: 0x3160e8, Func Offset: 0xa8
	// Line 768, Address: 0x3160ec, Func Offset: 0xac
	// Line 769, Address: 0x3160f0, Func Offset: 0xb0
	// Line 765, Address: 0x3160f4, Func Offset: 0xb4
	// Line 767, Address: 0x3160f8, Func Offset: 0xb8
	// Line 768, Address: 0x3160fc, Func Offset: 0xbc
	// Line 769, Address: 0x316100, Func Offset: 0xc0
	// Line 761, Address: 0x316104, Func Offset: 0xc4
	// Line 764, Address: 0x31610c, Func Offset: 0xcc
	// Line 765, Address: 0x316118, Func Offset: 0xd8
	// Line 766, Address: 0x316124, Func Offset: 0xe4
	// Line 767, Address: 0x316128, Func Offset: 0xe8
	// Line 768, Address: 0x31612c, Func Offset: 0xec
	// Line 769, Address: 0x316130, Func Offset: 0xf0
	// Line 771, Address: 0x316134, Func Offset: 0xf4
	// Line 773, Address: 0x316140, Func Offset: 0x100
	// Line 774, Address: 0x316148, Func Offset: 0x108
	// Line 776, Address: 0x316158, Func Offset: 0x118
	// Line 781, Address: 0x316164, Func Offset: 0x124
	// Line 790, Address: 0x316170, Func Offset: 0x130
	// Line 800, Address: 0x316180, Func Offset: 0x140
	// Line 806, Address: 0x3161e0, Func Offset: 0x1a0
	// Line 800, Address: 0x3161e4, Func Offset: 0x1a4
	// Line 806, Address: 0x3161e8, Func Offset: 0x1a8
	// Line 807, Address: 0x3161f8, Func Offset: 0x1b8
	// Line 834, Address: 0x316204, Func Offset: 0x1c4
	// Line 839, Address: 0x316208, Func Offset: 0x1c8
	// Line 841, Address: 0x316214, Func Offset: 0x1d4
	// Line 843, Address: 0x316220, Func Offset: 0x1e0
	// Line 846, Address: 0x316228, Func Offset: 0x1e8
	// Line 847, Address: 0x31622c, Func Offset: 0x1ec
	// Line 849, Address: 0x316234, Func Offset: 0x1f4
	// Line 851, Address: 0x31623c, Func Offset: 0x1fc
	// Line 852, Address: 0x316250, Func Offset: 0x210
	// Line 854, Address: 0x31625c, Func Offset: 0x21c
	// Line 856, Address: 0x316264, Func Offset: 0x224
	// Line 858, Address: 0x31627c, Func Offset: 0x23c
	// Line 861, Address: 0x31628c, Func Offset: 0x24c
	// Line 863, Address: 0x316294, Func Offset: 0x254
	// Line 865, Address: 0x316298, Func Offset: 0x258
	// Line 863, Address: 0x31629c, Func Offset: 0x25c
	// Line 864, Address: 0x3162a0, Func Offset: 0x260
	// Line 865, Address: 0x3162ac, Func Offset: 0x26c
	// Line 868, Address: 0x3162c0, Func Offset: 0x280
	// Line 869, Address: 0x3162c8, Func Offset: 0x288
	// Line 873, Address: 0x3162d4, Func Offset: 0x294
	// Line 729, Address: 0x3162dc, Func Offset: 0x29c
	// Line 873, Address: 0x3162e8, Func Offset: 0x2a8
	// Line 747, Address: 0x3162ec, Func Offset: 0x2ac
	// Line 873, Address: 0x3162f8, Func Offset: 0x2b8
	// Line 750, Address: 0x3162fc, Func Offset: 0x2bc
	// Line 873, Address: 0x316308, Func Offset: 0x2c8
	// Line 753, Address: 0x31630c, Func Offset: 0x2cc
	// Line 873, Address: 0x316318, Func Offset: 0x2d8
	// Line 756, Address: 0x31631c, Func Offset: 0x2dc
	// Line 873, Address: 0x316330, Func Offset: 0x2f0
	// Line 811, Address: 0x316350, Func Offset: 0x310
	// Line 873, Address: 0x316354, Func Offset: 0x314
	// Line 816, Address: 0x316364, Func Offset: 0x324
	// Line 873, Address: 0x316368, Func Offset: 0x328
	// Line 821, Address: 0x316378, Func Offset: 0x338
	// Line 873, Address: 0x31637c, Func Offset: 0x33c
	// Func End, Address: 0x3163b4, Func Offset: 0x374
}

// zEntSimpleObj_Init__FPvPv
// Start address: 0x3163c0
void zEntSimpleObj_Init(void* ent, void* asset)
{
	// Line 718, Address: 0x3163c0, Func Offset: 0
	// Func End, Address: 0x3163cc, Func Offset: 0xc
}

// zEntTrackPhysics_Init__FPvPv
// Start address: 0x3163d0
void zEntTrackPhysics_Init(void* ent, void* asset)
{
	// Line 713, Address: 0x3163d0, Func Offset: 0
	// Func End, Address: 0x3163dc, Func Offset: 0xc
}

// zEntSimpleObj_Render__FP4xEnt
// Start address: 0x3163e0
void zEntSimpleObj_Render(xEnt* ent)
{
	// Line 703, Address: 0x3163e0, Func Offset: 0
	// Line 705, Address: 0x3163ec, Func Offset: 0xc
	// Line 708, Address: 0x31640c, Func Offset: 0x2c
	// Line 709, Address: 0x316414, Func Offset: 0x34
	// Func End, Address: 0x316420, Func Offset: 0x40
}

// zEntSimpleObj_MgrCustomRender__Fv
// Start address: 0x316420
void zEntSimpleObj_MgrCustomRender()
{
	uint32 i;
	// Line 694, Address: 0x316420, Func Offset: 0
	// Line 696, Address: 0x316430, Func Offset: 0x10
	// Line 699, Address: 0x316440, Func Offset: 0x20
	// Func End, Address: 0x316490, Func Offset: 0x70
}

// zEntSimpleObj_MgrCustomUpdate__FP6zScenef
// Start address: 0x316490
void zEntSimpleObj_MgrCustomUpdate(zScene* s, float32 dt)
{
	uint32 i;
	// Line 684, Address: 0x316490, Func Offset: 0
	// Line 686, Address: 0x3164a8, Func Offset: 0x18
	// Line 684, Address: 0x3164ac, Func Offset: 0x1c
	// Line 686, Address: 0x3164b0, Func Offset: 0x20
	// Line 687, Address: 0x3164d0, Func Offset: 0x40
	// Line 691, Address: 0x3164e0, Func Offset: 0x50
	// Line 692, Address: 0x3164f8, Func Offset: 0x68
	// Line 690, Address: 0x316504, Func Offset: 0x74
	// Line 692, Address: 0x316508, Func Offset: 0x78
	// Func End, Address: 0x316534, Func Offset: 0xa4
}

// zEntSimpleObj_MgrUpdateRender__FP7RpWorldf
// Start address: 0x316540
void zEntSimpleObj_MgrUpdateRender()
{
	uint32 i;
	uint32 currPipeFlags;
	uint32 pipeMask;
	RwFogType oldfogtype;
	CloneContainer ccont[2];
	RpAtomic* cloneAtomic;
	xLightKit* cloneLightKit;
	float32 camX;
	float32 camY;
	float32 camZ;
	zSimpleMgr* smgr;
	uint32 smgrFlags;
	float32 camdist2;
	RwFrustumTestResult cullresult;
	zEntSimpleObj* ent;
	uint32 testPipeFlags;
	uint32 xorFlags;
	int32 picklod;
	xModelInstance* minst;
	RpAtomic* thisAtomic;
	CloneContainer* thisCont;
	xMat4x3* cammat;
	RpAtomic* modelData;
	xVec3 pos;
	xVec3 blob_posrnd;
	// Line 409, Address: 0x316540, Func Offset: 0
	// Line 419, Address: 0x316544, Func Offset: 0x4
	// Line 409, Address: 0x316548, Func Offset: 0x8
	// Line 419, Address: 0x316574, Func Offset: 0x34
	// Line 409, Address: 0x316578, Func Offset: 0x38
	// Line 420, Address: 0x316584, Func Offset: 0x44
	// Line 421, Address: 0x31658c, Func Offset: 0x4c
	// Line 422, Address: 0x316594, Func Offset: 0x54
	// Line 430, Address: 0x3165a4, Func Offset: 0x64
	// Line 438, Address: 0x3165a8, Func Offset: 0x68
	// Line 430, Address: 0x3165ac, Func Offset: 0x6c
	// Line 428, Address: 0x3165b0, Func Offset: 0x70
	// Line 431, Address: 0x3165b4, Func Offset: 0x74
	// Line 438, Address: 0x3165b8, Func Offset: 0x78
	// Line 431, Address: 0x3165bc, Func Offset: 0x7c
	// Line 435, Address: 0x3165c8, Func Offset: 0x88
	// Line 439, Address: 0x3165d4, Func Offset: 0x94
	// Line 454, Address: 0x3165e8, Func Offset: 0xa8
	// Line 455, Address: 0x3165ec, Func Offset: 0xac
	// Line 459, Address: 0x3165fc, Func Offset: 0xbc
	// Line 460, Address: 0x316618, Func Offset: 0xd8
	// Line 461, Address: 0x316620, Func Offset: 0xe0
	// Line 469, Address: 0x316634, Func Offset: 0xf4
	// Line 466, Address: 0x316640, Func Offset: 0x100
	// Line 469, Address: 0x316650, Func Offset: 0x110
	// Line 470, Address: 0x316660, Func Offset: 0x120
	// Line 471, Address: 0x316670, Func Offset: 0x130
	// Line 663, Address: 0x316678, Func Offset: 0x138
	// Line 666, Address: 0x316688, Func Offset: 0x148
	// Line 668, Address: 0x316690, Func Offset: 0x150
	// Line 669, Address: 0x3166a8, Func Offset: 0x168
	// Line 670, Address: 0x3166b8, Func Offset: 0x178
	// Line 675, Address: 0x3166d4, Func Offset: 0x194
	// Line 678, Address: 0x3166e4, Func Offset: 0x1a4
	// Line 681, Address: 0x3166f8, Func Offset: 0x1b8
	// Line 478, Address: 0x316710, Func Offset: 0x1d0
	// Line 681, Address: 0x316714, Func Offset: 0x1d4
	// Line 480, Address: 0x316724, Func Offset: 0x1e4
	// Line 681, Address: 0x316728, Func Offset: 0x1e8
	// Line 482, Address: 0x316738, Func Offset: 0x1f8
	// Line 681, Address: 0x316740, Func Offset: 0x200
	// Line 486, Address: 0x316754, Func Offset: 0x214
	// Line 681, Address: 0x316758, Func Offset: 0x218
	// Line 493, Address: 0x31679c, Func Offset: 0x25c
	// Line 681, Address: 0x3167a0, Func Offset: 0x260
	// Line 504, Address: 0x3167a8, Func Offset: 0x268
	// Line 681, Address: 0x3167ac, Func Offset: 0x26c
	// Line 508, Address: 0x3167b4, Func Offset: 0x274
	// Line 681, Address: 0x3167b8, Func Offset: 0x278
	// Line 516, Address: 0x3167d8, Func Offset: 0x298
	// Line 681, Address: 0x3167dc, Func Offset: 0x29c
	// Line 518, Address: 0x3167ec, Func Offset: 0x2ac
	// Line 681, Address: 0x3167f8, Func Offset: 0x2b8
	// Line 522, Address: 0x316800, Func Offset: 0x2c0
	// Line 681, Address: 0x316804, Func Offset: 0x2c4
	// Line 523, Address: 0x31680c, Func Offset: 0x2cc
	// Line 681, Address: 0x316810, Func Offset: 0x2d0
	// Line 526, Address: 0x316824, Func Offset: 0x2e4
	// Line 681, Address: 0x316828, Func Offset: 0x2e8
	// Line 506, Address: 0x316880, Func Offset: 0x340
	// Line 681, Address: 0x316884, Func Offset: 0x344
	// Line 524, Address: 0x3168a4, Func Offset: 0x364
	// Line 681, Address: 0x3168a8, Func Offset: 0x368
	// Line 529, Address: 0x3168b4, Func Offset: 0x374
	// Line 681, Address: 0x3168b8, Func Offset: 0x378
	// Line 533, Address: 0x3168bc, Func Offset: 0x37c
	// Line 535, Address: 0x3168d0, Func Offset: 0x390
	// Line 681, Address: 0x3168d4, Func Offset: 0x394
	// Line 535, Address: 0x3168e0, Func Offset: 0x3a0
	// Line 681, Address: 0x3168e4, Func Offset: 0x3a4
	// Line 604, Address: 0x31690c, Func Offset: 0x3cc
	// Line 608, Address: 0x316910, Func Offset: 0x3d0
	// Line 681, Address: 0x316914, Func Offset: 0x3d4
	// Line 616, Address: 0x316954, Func Offset: 0x414
	// Line 681, Address: 0x316958, Func Offset: 0x418
	// Line 650, Address: 0x31698c, Func Offset: 0x44c
	// Line 681, Address: 0x316990, Func Offset: 0x450
	// Line 655, Address: 0x3169a0, Func Offset: 0x460
	// Line 681, Address: 0x3169a4, Func Offset: 0x464
	// Line 658, Address: 0x3169dc, Func Offset: 0x49c
	// Line 681, Address: 0x3169e4, Func Offset: 0x4a4
	// Line 658, Address: 0x3169ec, Func Offset: 0x4ac
	// Line 681, Address: 0x316a10, Func Offset: 0x4d0
	// Line 658, Address: 0x316a1c, Func Offset: 0x4dc
	// Line 681, Address: 0x316a20, Func Offset: 0x4e0
	// Line 658, Address: 0x316a28, Func Offset: 0x4e8
	// Line 681, Address: 0x316a2c, Func Offset: 0x4ec
	// Line 658, Address: 0x316a44, Func Offset: 0x504
	// Line 681, Address: 0x316a4c, Func Offset: 0x50c
	// Line 658, Address: 0x316a54, Func Offset: 0x514
	// Line 681, Address: 0x316a5c, Func Offset: 0x51c
	// Line 658, Address: 0x316a78, Func Offset: 0x538
	// Line 681, Address: 0x316a7c, Func Offset: 0x53c
	// Line 660, Address: 0x316a84, Func Offset: 0x544
	// Line 681, Address: 0x316a88, Func Offset: 0x548
	// Line 535, Address: 0x316aa4, Func Offset: 0x564
	// Line 681, Address: 0x316aac, Func Offset: 0x56c
	// Line 543, Address: 0x316ac8, Func Offset: 0x588
	// Line 569, Address: 0x316ad0, Func Offset: 0x590
	// Line 681, Address: 0x316ad4, Func Offset: 0x594
	// Line 550, Address: 0x316adc, Func Offset: 0x59c
	// Line 681, Address: 0x316ae0, Func Offset: 0x5a0
	// Line 551, Address: 0x316af0, Func Offset: 0x5b0
	// Line 681, Address: 0x316af4, Func Offset: 0x5b4
	// Line 551, Address: 0x316af8, Func Offset: 0x5b8
	// Line 681, Address: 0x316afc, Func Offset: 0x5bc
	// Line 551, Address: 0x316b00, Func Offset: 0x5c0
	// Line 681, Address: 0x316b08, Func Offset: 0x5c8
	// Line 569, Address: 0x316b0c, Func Offset: 0x5cc
	// Line 681, Address: 0x316b10, Func Offset: 0x5d0
	// Line 569, Address: 0x316b14, Func Offset: 0x5d4
	// Line 681, Address: 0x316b18, Func Offset: 0x5d8
	// Line 569, Address: 0x316b2c, Func Offset: 0x5ec
	// Line 681, Address: 0x316b38, Func Offset: 0x5f8
	// Line 569, Address: 0x316b3c, Func Offset: 0x5fc
	// Line 681, Address: 0x316b48, Func Offset: 0x608
	// Line 569, Address: 0x316b58, Func Offset: 0x618
	// Line 681, Address: 0x316b78, Func Offset: 0x638
	// Line 569, Address: 0x316b7c, Func Offset: 0x63c
	// Line 681, Address: 0x316b80, Func Offset: 0x640
	// Line 569, Address: 0x316b84, Func Offset: 0x644
	// Line 681, Address: 0x316b8c, Func Offset: 0x64c
	// Line 578, Address: 0x316ba4, Func Offset: 0x664
	// Line 681, Address: 0x316ba8, Func Offset: 0x668
	// Line 586, Address: 0x316bb4, Func Offset: 0x674
	// Line 681, Address: 0x316bb8, Func Offset: 0x678
	// Line 591, Address: 0x316bec, Func Offset: 0x6ac
	// Line 681, Address: 0x316bf8, Func Offset: 0x6b8
	// Line 580, Address: 0x316c00, Func Offset: 0x6c0
	// Line 681, Address: 0x316c04, Func Offset: 0x6c4
	// Line 580, Address: 0x316c08, Func Offset: 0x6c8
	// Line 681, Address: 0x316c0c, Func Offset: 0x6cc
	// Line 580, Address: 0x316c14, Func Offset: 0x6d4
	// Line 681, Address: 0x316c18, Func Offset: 0x6d8
	// Line 581, Address: 0x316c28, Func Offset: 0x6e8
	// Line 681, Address: 0x316c2c, Func Offset: 0x6ec
	// Line 581, Address: 0x316c30, Func Offset: 0x6f0
	// Line 681, Address: 0x316c34, Func Offset: 0x6f4
	// Line 581, Address: 0x316c3c, Func Offset: 0x6fc
	// Line 681, Address: 0x316c40, Func Offset: 0x700
	// Line 582, Address: 0x316c50, Func Offset: 0x710
	// Line 681, Address: 0x316c54, Func Offset: 0x714
	// Line 582, Address: 0x316c58, Func Offset: 0x718
	// Line 681, Address: 0x316c5c, Func Offset: 0x71c
	// Line 582, Address: 0x316c64, Func Offset: 0x724
	// Line 681, Address: 0x316c70, Func Offset: 0x730
	// Line 679, Address: 0x316cb4, Func Offset: 0x774
	// Line 681, Address: 0x316cb8, Func Offset: 0x778
	// Func End, Address: 0x316d08, Func Offset: 0x7c8
}

// zEntSimpleObj_MgrInit__FPP13zEntSimpleObjUi
// Start address: 0x316d10
void zEntSimpleObj_MgrInit(zEntSimpleObj** entList, uint32 entCount)
{
	uint32 i;
	uint32 reactiveExtras;
	uint32 modelsRequired;
	zEntSimpleObj** tempEntList;
	uint32 tempEntCount;
	uint32 custEntCount;
	float32 dt;
	float32 duration;
	int32 frameCount;
	int32 boneCount;
	xQuat* q0;
	xVec3* t0;
	float32 t;
	RwMatrixTag* fastMatList;
	int32 i;
	zSimpleMgr* smgr;
	RpAtomic* model;
	RwSphere oldbound;
	zLODTable* lod;
	float32 distscale;
	uint8 uvAnimated;
	// Line 103, Address: 0x316d10, Func Offset: 0
	// Line 111, Address: 0x316d14, Func Offset: 0x4
	// Line 103, Address: 0x316d18, Func Offset: 0x8
	// Line 105, Address: 0x316d50, Func Offset: 0x40
	// Line 106, Address: 0x316d54, Func Offset: 0x44
	// Line 107, Address: 0x316d58, Func Offset: 0x48
	// Line 111, Address: 0x316d5c, Func Offset: 0x4c
	// Line 115, Address: 0x316d64, Func Offset: 0x54
	// Line 116, Address: 0x316d6c, Func Offset: 0x5c
	// Line 121, Address: 0x316d78, Func Offset: 0x68
	// Line 124, Address: 0x316d90, Func Offset: 0x80
	// Line 126, Address: 0x316d94, Func Offset: 0x84
	// Line 129, Address: 0x316da8, Func Offset: 0x98
	// Line 135, Address: 0x316dd8, Func Offset: 0xc8
	// Line 187, Address: 0x316e90, Func Offset: 0x180
	// Line 186, Address: 0x316e94, Func Offset: 0x184
	// Line 187, Address: 0x316e98, Func Offset: 0x188
	// Line 188, Address: 0x316ea0, Func Offset: 0x190
	// Line 186, Address: 0x316eac, Func Offset: 0x19c
	// Line 187, Address: 0x316eb4, Func Offset: 0x1a4
	// Line 188, Address: 0x316ebc, Func Offset: 0x1ac
	// Line 191, Address: 0x316ec0, Func Offset: 0x1b0
	// Line 193, Address: 0x316ee0, Func Offset: 0x1d0
	// Line 194, Address: 0x316ef0, Func Offset: 0x1e0
	// Line 193, Address: 0x316ef4, Func Offset: 0x1e4
	// Line 194, Address: 0x316ef8, Func Offset: 0x1e8
	// Line 199, Address: 0x316f04, Func Offset: 0x1f4
	// Line 203, Address: 0x316f14, Func Offset: 0x204
	// Line 227, Address: 0x316f30, Func Offset: 0x220
	// Line 131, Address: 0x316f38, Func Offset: 0x228
	// Line 227, Address: 0x316f3c, Func Offset: 0x22c
	// Line 135, Address: 0x316f4c, Func Offset: 0x23c
	// Line 227, Address: 0x316f54, Func Offset: 0x244
	// Line 167, Address: 0x316f6c, Func Offset: 0x25c
	// Line 227, Address: 0x316f70, Func Offset: 0x260
	// Line 173, Address: 0x316fa4, Func Offset: 0x294
	// Line 227, Address: 0x316fa8, Func Offset: 0x298
	// Line 178, Address: 0x316fb8, Func Offset: 0x2a8
	// Line 227, Address: 0x316fbc, Func Offset: 0x2ac
	// Line 177, Address: 0x316fc8, Func Offset: 0x2b8
	// Line 227, Address: 0x316fcc, Func Offset: 0x2bc
	// Line 183, Address: 0x317070, Func Offset: 0x360
	// Line 207, Address: 0x317078, Func Offset: 0x368
	// Line 227, Address: 0x31707c, Func Offset: 0x36c
	// Line 207, Address: 0x317084, Func Offset: 0x374
	// Line 227, Address: 0x317098, Func Offset: 0x388
	// Line 209, Address: 0x3170a0, Func Offset: 0x390
	// Line 227, Address: 0x3170ac, Func Offset: 0x39c
	// Line 211, Address: 0x3170b4, Func Offset: 0x3a4
	// Line 227, Address: 0x3170b8, Func Offset: 0x3a8
	// Line 209, Address: 0x3170c4, Func Offset: 0x3b4
	// Line 211, Address: 0x3170cc, Func Offset: 0x3bc
	// Line 227, Address: 0x3170d0, Func Offset: 0x3c0
	// Line 219, Address: 0x3170dc, Func Offset: 0x3cc
	// Line 227, Address: 0x3170e0, Func Offset: 0x3d0
	// Line 219, Address: 0x3170ec, Func Offset: 0x3dc
	// Line 227, Address: 0x3170f0, Func Offset: 0x3e0
	// Line 219, Address: 0x317104, Func Offset: 0x3f4
	// Line 227, Address: 0x317108, Func Offset: 0x3f8
	// Line 221, Address: 0x31710c, Func Offset: 0x3fc
	// Line 227, Address: 0x317118, Func Offset: 0x408
	// Line 222, Address: 0x317124, Func Offset: 0x414
	// Line 227, Address: 0x31712c, Func Offset: 0x41c
	// Line 230, Address: 0x317150, Func Offset: 0x440
	// Line 233, Address: 0x317168, Func Offset: 0x458
	// Line 240, Address: 0x317174, Func Offset: 0x464
	// Line 241, Address: 0x317178, Func Offset: 0x468
	// Line 249, Address: 0x31717c, Func Offset: 0x46c
	// Line 255, Address: 0x317188, Func Offset: 0x478
	// Line 256, Address: 0x31718c, Func Offset: 0x47c
	// Line 255, Address: 0x317194, Func Offset: 0x484
	// Line 256, Address: 0x317198, Func Offset: 0x488
	// Line 259, Address: 0x3171a4, Func Offset: 0x494
	// Line 260, Address: 0x3171a8, Func Offset: 0x498
	// Line 263, Address: 0x3171c4, Func Offset: 0x4b4
	// Line 264, Address: 0x3171d4, Func Offset: 0x4c4
	// Line 267, Address: 0x3171dc, Func Offset: 0x4cc
	// Line 272, Address: 0x3171e0, Func Offset: 0x4d0
	// Line 273, Address: 0x3171e8, Func Offset: 0x4d8
	// Line 272, Address: 0x3171ec, Func Offset: 0x4dc
	// Line 267, Address: 0x3171f0, Func Offset: 0x4e0
	// Line 272, Address: 0x3171f8, Func Offset: 0x4e8
	// Line 273, Address: 0x3171fc, Func Offset: 0x4ec
	// Line 271, Address: 0x317200, Func Offset: 0x4f0
	// Line 272, Address: 0x317210, Func Offset: 0x500
	// Line 273, Address: 0x317218, Func Offset: 0x508
	// Line 271, Address: 0x31721c, Func Offset: 0x50c
	// Line 273, Address: 0x317228, Func Offset: 0x518
	// Line 274, Address: 0x317238, Func Offset: 0x528
	// Line 277, Address: 0x317258, Func Offset: 0x548
	// Line 279, Address: 0x317260, Func Offset: 0x550
	// Line 285, Address: 0x31726c, Func Offset: 0x55c
	// Line 279, Address: 0x317278, Func Offset: 0x568
	// Line 282, Address: 0x31728c, Func Offset: 0x57c
	// Line 285, Address: 0x317298, Func Offset: 0x588
	// Line 287, Address: 0x3172ac, Func Offset: 0x59c
	// Line 288, Address: 0x3172d8, Func Offset: 0x5c8
	// Line 293, Address: 0x317300, Func Offset: 0x5f0
	// Line 294, Address: 0x317308, Func Offset: 0x5f8
	// Line 297, Address: 0x317310, Func Offset: 0x600
	// Line 312, Address: 0x317328, Func Offset: 0x618
	// Line 316, Address: 0x317330, Func Offset: 0x620
	// Line 312, Address: 0x317334, Func Offset: 0x624
	// Line 316, Address: 0x317348, Func Offset: 0x638
	// Line 312, Address: 0x31734c, Func Offset: 0x63c
	// Line 316, Address: 0x317354, Func Offset: 0x644
	// Line 320, Address: 0x31735c, Func Offset: 0x64c
	// Line 322, Address: 0x317364, Func Offset: 0x654
	// Line 329, Address: 0x31738c, Func Offset: 0x67c
	// Line 336, Address: 0x3173a8, Func Offset: 0x698
	// Line 345, Address: 0x3173d0, Func Offset: 0x6c0
	// Line 336, Address: 0x3173dc, Func Offset: 0x6cc
	// Line 345, Address: 0x3173e4, Func Offset: 0x6d4
	// Line 346, Address: 0x3173f0, Func Offset: 0x6e0
	// Line 350, Address: 0x3173f8, Func Offset: 0x6e8
	// Line 351, Address: 0x31740c, Func Offset: 0x6fc
	// Line 352, Address: 0x317428, Func Offset: 0x718
	// Line 353, Address: 0x317434, Func Offset: 0x724
	// Line 354, Address: 0x317444, Func Offset: 0x734
	// Line 355, Address: 0x31744c, Func Offset: 0x73c
	// Line 357, Address: 0x31745c, Func Offset: 0x74c
	// Line 360, Address: 0x317464, Func Offset: 0x754
	// Line 363, Address: 0x317478, Func Offset: 0x768
	// Line 362, Address: 0x317480, Func Offset: 0x770
	// Line 363, Address: 0x317484, Func Offset: 0x774
	// Line 366, Address: 0x317490, Func Offset: 0x780
	// Line 369, Address: 0x3174a8, Func Offset: 0x798
	// Line 370, Address: 0x3174c8, Func Offset: 0x7b8
	// Line 373, Address: 0x3174e4, Func Offset: 0x7d4
	// Line 382, Address: 0x3174ec, Func Offset: 0x7dc
	// Line 385, Address: 0x317508, Func Offset: 0x7f8
	// Line 386, Address: 0x317518, Func Offset: 0x808
	// Line 235, Address: 0x317524, Func Offset: 0x814
	// Line 386, Address: 0x317528, Func Offset: 0x818
	// Line 237, Address: 0x317560, Func Offset: 0x850
	// Line 386, Address: 0x317564, Func Offset: 0x854
	// Line 237, Address: 0x317568, Func Offset: 0x858
	// Line 386, Address: 0x317570, Func Offset: 0x860
	// Line 237, Address: 0x317580, Func Offset: 0x870
	// Line 386, Address: 0x317584, Func Offset: 0x874
	// Line 237, Address: 0x317590, Func Offset: 0x880
	// Line 386, Address: 0x317594, Func Offset: 0x884
	// Line 237, Address: 0x3175a4, Func Offset: 0x894
	// Line 386, Address: 0x3175a8, Func Offset: 0x898
	// Line 237, Address: 0x3175c8, Func Offset: 0x8b8
	// Line 386, Address: 0x3175cc, Func Offset: 0x8bc
	// Line 237, Address: 0x3175d0, Func Offset: 0x8c0
	// Line 386, Address: 0x3175d4, Func Offset: 0x8c4
	// Line 237, Address: 0x3175dc, Func Offset: 0x8cc
	// Line 386, Address: 0x3175e0, Func Offset: 0x8d0
	// Line 237, Address: 0x3175f0, Func Offset: 0x8e0
	// Line 386, Address: 0x3175f4, Func Offset: 0x8e4
	// Line 237, Address: 0x317610, Func Offset: 0x900
	// Line 386, Address: 0x317614, Func Offset: 0x904
	// Line 237, Address: 0x3176a4, Func Offset: 0x994
	// Line 386, Address: 0x3176a8, Func Offset: 0x998
	// Line 239, Address: 0x3176cc, Func Offset: 0x9bc
	// Line 386, Address: 0x3176d4, Func Offset: 0x9c4
	// Line 251, Address: 0x3176e0, Func Offset: 0x9d0
	// Line 302, Address: 0x3176e8, Func Offset: 0x9d8
	// Line 386, Address: 0x3176f0, Func Offset: 0x9e0
	// Line 334, Address: 0x317714, Func Offset: 0xa04
	// Line 336, Address: 0x317718, Func Offset: 0xa08
	// Line 386, Address: 0x317720, Func Offset: 0xa10
	// Line 341, Address: 0x317724, Func Offset: 0xa14
	// Line 348, Address: 0x317730, Func Offset: 0xa20
	// Line 386, Address: 0x31773c, Func Offset: 0xa2c
	// Line 379, Address: 0x31775c, Func Offset: 0xa4c
	// Line 386, Address: 0x317760, Func Offset: 0xa50
	// Line 380, Address: 0x31777c, Func Offset: 0xa6c
	// Line 386, Address: 0x317784, Func Offset: 0xa74
	// Line 380, Address: 0x317798, Func Offset: 0xa88
	// Line 386, Address: 0x31779c, Func Offset: 0xa8c
	// Line 380, Address: 0x3177a8, Func Offset: 0xa98
	// Line 386, Address: 0x3177b8, Func Offset: 0xaa8
	// Line 380, Address: 0x3177cc, Func Offset: 0xabc
	// Line 386, Address: 0x3177e0, Func Offset: 0xad0
	// Func End, Address: 0x317818, Func Offset: 0xb08
}

// VisUpdateSimpleMgr__FP4xEnt
// Start address: 0x317820
void VisUpdateSimpleMgr(xEnt* ent)
{
	// Line 91, Address: 0x317820, Func Offset: 0
	// Line 93, Address: 0x317824, Func Offset: 0x4
	// Line 94, Address: 0x31782c, Func Offset: 0xc
	// Line 95, Address: 0x317858, Func Offset: 0x38
	// Line 96, Address: 0x317860, Func Offset: 0x40
	// Line 97, Address: 0x317868, Func Offset: 0x48
	// Line 100, Address: 0x317878, Func Offset: 0x58
	// Func End, Address: 0x317880, Func Offset: 0x60
}

// CmpSimpleMgr__FPCvPCv
// Start address: 0x317880
int32 CmpSimpleMgr(void* a, void* b)
{
	zSimpleMgr* simpA;
	zSimpleMgr* simpB;
	// Line 81, Address: 0x317880, Func Offset: 0
	// Line 82, Address: 0x317888, Func Offset: 0x8
	// Line 83, Address: 0x317894, Func Offset: 0x14
	// Line 85, Address: 0x3178a8, Func Offset: 0x28
	// Line 86, Address: 0x3178b4, Func Offset: 0x34
	// Line 82, Address: 0x3178c0, Func Offset: 0x40
	// Line 83, Address: 0x3178c8, Func Offset: 0x48
	// Line 85, Address: 0x3178d0, Func Offset: 0x50
	// Line 88, Address: 0x3178d4, Func Offset: 0x54
	// Func End, Address: 0x3178dc, Func Offset: 0x5c
}

