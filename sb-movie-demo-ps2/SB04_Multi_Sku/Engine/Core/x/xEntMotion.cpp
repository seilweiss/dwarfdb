



void xEntMotionTranslate(xEntMotion* motion, xVec3* dpos, xMat4x3* dmat);
void xEntMechReverse(xEntMotion* motion);
void xEntMechForward(xEntMotion* motion);
uint32 xEntRotMove(xEntMotion* motion, float32 dt, xEntFrame* frame);
uint32 xEntSldMove(xEntMotion* motion, float32 dt, xEntFrame* frame);
uint32 xEntScale(xEntMotion* motion, float32 dt, xEntFrame* frame);
void xEntMechMove(xEntMotion* motion, xScene* sc, float32 dt, xEntFrame* frame);
void xEntPenMove(xEntMotion* motion, float32 dt, xEntFrame* frame);
void xEntSplineMove(xEntMotion* motion, float32 dt, xEntFrame* frame);
void xEntMPMove(xEntMotion* motion, xScene* sc, float32 dt, xEntFrame* frame);
void xEntMPGetNext(xEntMotion* motion, xMovePoint* prev);
void xEntOrbitMove(xEntMotion* motion, float32 dt, xEntFrame* frame);
void xEntERMove(xEntMotion* motion, float32 dt, xEntFrame* frame);
void xEntMotionMove(xEntMotion* motion, xScene* sc, float32 dt, xEntFrame* frame);
void xEntMotionReset(xEntMotion* motion, xScene* sc);
void xEntMotionSetup(xEntMotion* motion);
void xEntMotionInit(xEntMotion* motion, xEnt* owner, xEntMotionAsset* asset);

// xEntMotionTranslate__FP10xEntMotionPC5xVec3P7xMat4x3
// Start address: 0x3ec0b0
void xEntMotionTranslate(xEntMotion* motion, xVec3* dpos, xMat4x3* dmat)
{
	// Line 1491, Address: 0x3ec0b0, Func Offset: 0
	// Line 1494, Address: 0x3ec0b4, Func Offset: 0x4
	// Line 1495, Address: 0x3ec0c0, Func Offset: 0x10
	// Line 1496, Address: 0x3ec0c8, Func Offset: 0x18
	// Line 1497, Address: 0x3ec11c, Func Offset: 0x6c
	// Line 1499, Address: 0x3ec170, Func Offset: 0xc0
	// Line 1500, Address: 0x3ec180, Func Offset: 0xd0
	// Line 1501, Address: 0x3ec1d4, Func Offset: 0x124
	// Line 1503, Address: 0x3ec228, Func Offset: 0x178
	// Line 1505, Address: 0x3ec23c, Func Offset: 0x18c
	// Line 1507, Address: 0x3ec244, Func Offset: 0x194
	// Line 1508, Address: 0x3ec250, Func Offset: 0x1a0
	// Line 1509, Address: 0x3ec2a4, Func Offset: 0x1f4
	// Line 1511, Address: 0x3ec2b0, Func Offset: 0x200
	// Line 1512, Address: 0x3ec2c0, Func Offset: 0x210
	// Line 1513, Address: 0x3ec314, Func Offset: 0x264
	// Line 1514, Address: 0x3ec368, Func Offset: 0x2b8
	// Line 1517, Address: 0x3ec3b4, Func Offset: 0x304
	// Line 1520, Address: 0x3ec3c0, Func Offset: 0x310
	// Line 1521, Address: 0x3ec3c8, Func Offset: 0x318
	// Line 1522, Address: 0x3ec3f8, Func Offset: 0x348
	// Line 1524, Address: 0x3ec418, Func Offset: 0x368
	// Line 1525, Address: 0x3ec428, Func Offset: 0x378
	// Line 1526, Address: 0x3ec458, Func Offset: 0x3a8
	// Line 1528, Address: 0x3ec478, Func Offset: 0x3c8
	// Line 1530, Address: 0x3ec48c, Func Offset: 0x3dc
	// Line 1532, Address: 0x3ec494, Func Offset: 0x3e4
	// Line 1533, Address: 0x3ec4a0, Func Offset: 0x3f0
	// Line 1534, Address: 0x3ec4d0, Func Offset: 0x420
	// Line 1536, Address: 0x3ec4f0, Func Offset: 0x440
	// Line 1537, Address: 0x3ec500, Func Offset: 0x450
	// Line 1538, Address: 0x3ec530, Func Offset: 0x480
	// Line 1541, Address: 0x3ec554, Func Offset: 0x4a4
	// Func End, Address: 0x3ec560, Func Offset: 0x4b0
}

// xEntMechReverse__FP10xEntMotion
// Start address: 0x3ec560
void xEntMechReverse(xEntMotion* motion)
{
	xEntMechData* mech;
	xEntMotionMechData* mkasst;
	// Line 1429, Address: 0x3ec560, Func Offset: 0
	// Line 1419, Address: 0x3ec564, Func Offset: 0x4
	// Line 1420, Address: 0x3ec568, Func Offset: 0x8
	// Line 1429, Address: 0x3ec56c, Func Offset: 0xc
	// Line 1431, Address: 0x3ec578, Func Offset: 0x18
	// Line 1437, Address: 0x3ec580, Func Offset: 0x20
	// Line 1443, Address: 0x3ec58c, Func Offset: 0x2c
	// Line 1449, Address: 0x3ec598, Func Offset: 0x38
	// Line 1452, Address: 0x3ec5a4, Func Offset: 0x44
	// Line 1455, Address: 0x3ec5b0, Func Offset: 0x50
	// Line 1458, Address: 0x3ec5bc, Func Offset: 0x5c
	// Line 1461, Address: 0x3ec5c8, Func Offset: 0x68
	// Line 1464, Address: 0x3ec5d4, Func Offset: 0x74
	// Line 1465, Address: 0x3ec5e0, Func Offset: 0x80
	// Line 1466, Address: 0x3ec5ec, Func Offset: 0x8c
	// Line 1467, Address: 0x3ec5f8, Func Offset: 0x98
	// Line 1468, Address: 0x3ec600, Func Offset: 0xa0
	// Line 1474, Address: 0x3ec618, Func Offset: 0xb8
	// Line 1479, Address: 0x3ec628, Func Offset: 0xc8
	// Line 1481, Address: 0x3ec630, Func Offset: 0xd0
	// Line 1487, Address: 0x3ec634, Func Offset: 0xd4
	// Line 1435, Address: 0x3ec640, Func Offset: 0xe0
	// Line 1432, Address: 0x3ec644, Func Offset: 0xe4
	// Line 1487, Address: 0x3ec648, Func Offset: 0xe8
	// Line 1433, Address: 0x3ec650, Func Offset: 0xf0
	// Line 1487, Address: 0x3ec654, Func Offset: 0xf4
	// Line 1434, Address: 0x3ec660, Func Offset: 0x100
	// Line 1487, Address: 0x3ec664, Func Offset: 0x104
	// Line 1437, Address: 0x3ec668, Func Offset: 0x108
	// Line 1487, Address: 0x3ec670, Func Offset: 0x110
	// Line 1441, Address: 0x3ec674, Func Offset: 0x114
	// Line 1438, Address: 0x3ec678, Func Offset: 0x118
	// Line 1487, Address: 0x3ec67c, Func Offset: 0x11c
	// Line 1439, Address: 0x3ec684, Func Offset: 0x124
	// Line 1487, Address: 0x3ec688, Func Offset: 0x128
	// Line 1440, Address: 0x3ec694, Func Offset: 0x134
	// Line 1487, Address: 0x3ec698, Func Offset: 0x138
	// Line 1443, Address: 0x3ec69c, Func Offset: 0x13c
	// Line 1487, Address: 0x3ec6a4, Func Offset: 0x144
	// Line 1447, Address: 0x3ec6a8, Func Offset: 0x148
	// Line 1444, Address: 0x3ec6ac, Func Offset: 0x14c
	// Line 1487, Address: 0x3ec6b0, Func Offset: 0x150
	// Line 1445, Address: 0x3ec6b8, Func Offset: 0x158
	// Line 1487, Address: 0x3ec6bc, Func Offset: 0x15c
	// Line 1446, Address: 0x3ec6c8, Func Offset: 0x168
	// Line 1487, Address: 0x3ec6cc, Func Offset: 0x16c
	// Line 1449, Address: 0x3ec6d0, Func Offset: 0x170
	// Line 1472, Address: 0x3ec6d8, Func Offset: 0x178
	// Line 1474, Address: 0x3ec6dc, Func Offset: 0x17c
	// Line 1487, Address: 0x3ec6e4, Func Offset: 0x184
	// Func End, Address: 0x3ec6ec, Func Offset: 0x18c
}

// xEntMechForward__FP10xEntMotion
// Start address: 0x3ec6f0
void xEntMechForward(xEntMotion* motion)
{
	xEntMechData* mech;
	xEntMotionMechData* mkasst;
	// Line 1368, Address: 0x3ec6f0, Func Offset: 0
	// Line 1358, Address: 0x3ec6f4, Func Offset: 0x4
	// Line 1359, Address: 0x3ec6f8, Func Offset: 0x8
	// Line 1368, Address: 0x3ec6fc, Func Offset: 0xc
	// Line 1370, Address: 0x3ec708, Func Offset: 0x18
	// Line 1373, Address: 0x3ec710, Func Offset: 0x20
	// Line 1376, Address: 0x3ec71c, Func Offset: 0x2c
	// Line 1379, Address: 0x3ec724, Func Offset: 0x34
	// Line 1385, Address: 0x3ec72c, Func Offset: 0x3c
	// Line 1391, Address: 0x3ec734, Func Offset: 0x44
	// Line 1394, Address: 0x3ec73c, Func Offset: 0x4c
	// Line 1397, Address: 0x3ec748, Func Offset: 0x58
	// Line 1398, Address: 0x3ec750, Func Offset: 0x60
	// Line 1399, Address: 0x3ec75c, Func Offset: 0x6c
	// Line 1400, Address: 0x3ec768, Func Offset: 0x78
	// Line 1401, Address: 0x3ec770, Func Offset: 0x80
	// Line 1407, Address: 0x3ec790, Func Offset: 0xa0
	// Line 1380, Address: 0x3ec794, Func Offset: 0xa4
	// Line 1407, Address: 0x3ec798, Func Offset: 0xa8
	// Line 1381, Address: 0x3ec7a0, Func Offset: 0xb0
	// Line 1407, Address: 0x3ec7a4, Func Offset: 0xb4
	// Line 1382, Address: 0x3ec7b0, Func Offset: 0xc0
	// Line 1407, Address: 0x3ec7b4, Func Offset: 0xc4
	// Line 1385, Address: 0x3ec7b8, Func Offset: 0xc8
	// Line 1407, Address: 0x3ec7c0, Func Offset: 0xd0
	// Line 1386, Address: 0x3ec7c4, Func Offset: 0xd4
	// Line 1407, Address: 0x3ec7c8, Func Offset: 0xd8
	// Line 1387, Address: 0x3ec7d0, Func Offset: 0xe0
	// Line 1407, Address: 0x3ec7d4, Func Offset: 0xe4
	// Line 1388, Address: 0x3ec7e0, Func Offset: 0xf0
	// Line 1407, Address: 0x3ec7e4, Func Offset: 0xf4
	// Line 1391, Address: 0x3ec7e8, Func Offset: 0xf8
	// Line 1407, Address: 0x3ec7f0, Func Offset: 0x100
	// Line 1411, Address: 0x3ec7f4, Func Offset: 0x104
	// Func End, Address: 0x3ec7fc, Func Offset: 0x10c
}

// xEntRotMove__FP10xEntMotionP6xScenefP9xEntFrame
// Start address: 0x3ec800
uint32 xEntRotMove(xEntMotion* motion, float32 dt, xEntFrame* frame)
{
	xEntMechData* mech;
	xEntMotionMechData* mkasst;
	uint32 last;
	float32 tmradj;
	float32 rem;
	float32 speed;
	xEnt* ownr;
	xEntAsset* easst;
	// Line 1282, Address: 0x3ec800, Func Offset: 0
	// Line 1288, Address: 0x3ec804, Func Offset: 0x4
	// Line 1282, Address: 0x3ec808, Func Offset: 0x8
	// Line 1288, Address: 0x3ec80c, Func Offset: 0xc
	// Line 1282, Address: 0x3ec810, Func Offset: 0x10
	// Line 1288, Address: 0x3ec814, Func Offset: 0x14
	// Line 1282, Address: 0x3ec818, Func Offset: 0x18
	// Line 1284, Address: 0x3ec828, Func Offset: 0x28
	// Line 1283, Address: 0x3ec830, Func Offset: 0x30
	// Line 1288, Address: 0x3ec834, Func Offset: 0x34
	// Line 1284, Address: 0x3ec838, Func Offset: 0x38
	// Line 1288, Address: 0x3ec83c, Func Offset: 0x3c
	// Line 1292, Address: 0x3ec844, Func Offset: 0x44
	// Line 1293, Address: 0x3ec858, Func Offset: 0x58
	// Line 1311, Address: 0x3ec888, Func Offset: 0x88
	// Line 1315, Address: 0x3ec8b0, Func Offset: 0xb0
	// Line 1316, Address: 0x3ec8d4, Func Offset: 0xd4
	// Line 1317, Address: 0x3ec8e8, Func Offset: 0xe8
	// Line 1322, Address: 0x3ec900, Func Offset: 0x100
	// Line 1323, Address: 0x3ec90c, Func Offset: 0x10c
	// Line 1324, Address: 0x3ec930, Func Offset: 0x130
	// Line 1325, Address: 0x3ec944, Func Offset: 0x144
	// Line 1328, Address: 0x3ec95c, Func Offset: 0x15c
	// Line 1332, Address: 0x3ec960, Func Offset: 0x160
	// Line 1333, Address: 0x3ec97c, Func Offset: 0x17c
	// Line 1332, Address: 0x3ec980, Func Offset: 0x180
	// Line 1336, Address: 0x3ec984, Func Offset: 0x184
	// Line 1340, Address: 0x3ec998, Func Offset: 0x198
	// Line 1341, Address: 0x3ec99c, Func Offset: 0x19c
	// Line 1342, Address: 0x3ec9a4, Func Offset: 0x1a4
	// Line 1343, Address: 0x3ec9a8, Func Offset: 0x1a8
	// Line 1344, Address: 0x3ec9d0, Func Offset: 0x1d0
	// Line 1345, Address: 0x3ec9f8, Func Offset: 0x1f8
	// Line 1348, Address: 0x3eca20, Func Offset: 0x220
	// Line 1349, Address: 0x3eca24, Func Offset: 0x224
	// Line 1348, Address: 0x3eca28, Func Offset: 0x228
	// Line 1349, Address: 0x3eca2c, Func Offset: 0x22c
	// Line 1309, Address: 0x3eca40, Func Offset: 0x240
	// Line 1349, Address: 0x3eca48, Func Offset: 0x248
	// Line 1317, Address: 0x3eca6c, Func Offset: 0x26c
	// Line 1349, Address: 0x3eca80, Func Offset: 0x280
	// Line 1318, Address: 0x3eca8c, Func Offset: 0x28c
	// Line 1319, Address: 0x3eca9c, Func Offset: 0x29c
	// Line 1349, Address: 0x3ecaa4, Func Offset: 0x2a4
	// Line 1325, Address: 0x3ecaa8, Func Offset: 0x2a8
	// Line 1349, Address: 0x3ecabc, Func Offset: 0x2bc
	// Line 1326, Address: 0x3ecac8, Func Offset: 0x2c8
	// Line 1327, Address: 0x3ecad8, Func Offset: 0x2d8
	// Line 1350, Address: 0x3ecae0, Func Offset: 0x2e0
	// Func End, Address: 0x3ecaf8, Func Offset: 0x2f8
}

// xEntSldMove__FP10xEntMotionP6xScenefP9xEntFrame
// Start address: 0x3ecb00
uint32 xEntSldMove(xEntMotion* motion, float32 dt, xEntFrame* frame)
{
	xEntMechData* mech;
	xEntMotionMechData* mkasst;
	uint32 last;
	float32 tmradj;
	float32 rem;
	float32 speed;
	// Line 1193, Address: 0x3ecb00, Func Offset: 0
	// Line 1206, Address: 0x3ecb08, Func Offset: 0x8
	// Line 1192, Address: 0x3ecb0c, Func Offset: 0xc
	// Line 1206, Address: 0x3ecb10, Func Offset: 0x10
	// Line 1193, Address: 0x3ecb20, Func Offset: 0x20
	// Line 1206, Address: 0x3ecb24, Func Offset: 0x24
	// Line 1210, Address: 0x3ecb2c, Func Offset: 0x2c
	// Line 1211, Address: 0x3ecb40, Func Offset: 0x40
	// Line 1224, Address: 0x3ecb6c, Func Offset: 0x6c
	// Line 1234, Address: 0x3ecb90, Func Offset: 0x90
	// Line 1235, Address: 0x3ecbb4, Func Offset: 0xb4
	// Line 1236, Address: 0x3ecbc8, Func Offset: 0xc8
	// Line 1239, Address: 0x3ecbe0, Func Offset: 0xe0
	// Line 1243, Address: 0x3ecbe4, Func Offset: 0xe4
	// Line 1245, Address: 0x3ecc10, Func Offset: 0x110
	// Line 1249, Address: 0x3ecc38, Func Offset: 0x138
	// Line 1245, Address: 0x3ecc3c, Func Offset: 0x13c
	// Line 1249, Address: 0x3ecc44, Func Offset: 0x144
	// Line 1250, Address: 0x3ecc50, Func Offset: 0x150
	// Line 1252, Address: 0x3ecc64, Func Offset: 0x164
	// Line 1254, Address: 0x3ecc70, Func Offset: 0x170
	// Line 1258, Address: 0x3ecc94, Func Offset: 0x194
	// Line 1254, Address: 0x3ecc98, Func Offset: 0x198
	// Line 1258, Address: 0x3ecca0, Func Offset: 0x1a0
	// Line 1259, Address: 0x3eccac, Func Offset: 0x1ac
	// Line 1261, Address: 0x3eccc0, Func Offset: 0x1c0
	// Line 1263, Address: 0x3ecccc, Func Offset: 0x1cc
	// Line 1267, Address: 0x3ecce8, Func Offset: 0x1e8
	// Line 1263, Address: 0x3eccec, Func Offset: 0x1ec
	// Line 1267, Address: 0x3eccf4, Func Offset: 0x1f4
	// Line 1268, Address: 0x3ecd00, Func Offset: 0x200
	// Line 1273, Address: 0x3ecd0c, Func Offset: 0x20c
	// Line 1274, Address: 0x3ecd10, Func Offset: 0x210
	// Line 1273, Address: 0x3ecd18, Func Offset: 0x218
	// Line 1277, Address: 0x3ecd38, Func Offset: 0x238
	// Line 1278, Address: 0x3ecd40, Func Offset: 0x240
	// Line 1213, Address: 0x3ecd50, Func Offset: 0x250
	// Line 1278, Address: 0x3ecd54, Func Offset: 0x254
	// Line 1213, Address: 0x3ecd60, Func Offset: 0x260
	// Line 1278, Address: 0x3ecd64, Func Offset: 0x264
	// Line 1213, Address: 0x3ecd70, Func Offset: 0x270
	// Line 1278, Address: 0x3ecd74, Func Offset: 0x274
	// Line 1221, Address: 0x3ecd78, Func Offset: 0x278
	// Line 1278, Address: 0x3ecd80, Func Offset: 0x280
	// Line 1215, Address: 0x3ecd88, Func Offset: 0x288
	// Line 1278, Address: 0x3ecd8c, Func Offset: 0x28c
	// Line 1215, Address: 0x3ecd98, Func Offset: 0x298
	// Line 1278, Address: 0x3ecd9c, Func Offset: 0x29c
	// Line 1215, Address: 0x3ecda8, Func Offset: 0x2a8
	// Line 1278, Address: 0x3ecdb4, Func Offset: 0x2b4
	// Line 1226, Address: 0x3ecdb8, Func Offset: 0x2b8
	// Line 1278, Address: 0x3ecdbc, Func Offset: 0x2bc
	// Line 1226, Address: 0x3ecdc4, Func Offset: 0x2c4
	// Line 1278, Address: 0x3ecdd4, Func Offset: 0x2d4
	// Line 1227, Address: 0x3ecde0, Func Offset: 0x2e0
	// Line 1228, Address: 0x3ecdf0, Func Offset: 0x2f0
	// Line 1278, Address: 0x3ecdf8, Func Offset: 0x2f8
	// Line 1228, Address: 0x3ecdfc, Func Offset: 0x2fc
	// Line 1278, Address: 0x3ece00, Func Offset: 0x300
	// Line 1233, Address: 0x3ece08, Func Offset: 0x308
	// Line 1278, Address: 0x3ece10, Func Offset: 0x310
	// Line 1228, Address: 0x3ece14, Func Offset: 0x314
	// Line 1278, Address: 0x3ece28, Func Offset: 0x328
	// Line 1229, Address: 0x3ece34, Func Offset: 0x334
	// Line 1230, Address: 0x3ece44, Func Offset: 0x344
	// Line 1278, Address: 0x3ece4c, Func Offset: 0x34c
	// Line 1236, Address: 0x3ece50, Func Offset: 0x350
	// Line 1278, Address: 0x3ece64, Func Offset: 0x364
	// Line 1237, Address: 0x3ece70, Func Offset: 0x370
	// Line 1238, Address: 0x3ece80, Func Offset: 0x380
	// Line 1278, Address: 0x3ece88, Func Offset: 0x388
	// Line 1246, Address: 0x3ece90, Func Offset: 0x390
	// Line 1278, Address: 0x3ece94, Func Offset: 0x394
	// Line 1246, Address: 0x3ecea0, Func Offset: 0x3a0
	// Line 1278, Address: 0x3ecea4, Func Offset: 0x3a4
	// Line 1247, Address: 0x3eceac, Func Offset: 0x3ac
	// Line 1248, Address: 0x3ecec0, Func Offset: 0x3c0
	// Line 1278, Address: 0x3ecec8, Func Offset: 0x3c8
	// Line 1255, Address: 0x3eced0, Func Offset: 0x3d0
	// Line 1278, Address: 0x3eced4, Func Offset: 0x3d4
	// Line 1255, Address: 0x3ecee0, Func Offset: 0x3e0
	// Line 1278, Address: 0x3ecee4, Func Offset: 0x3e4
	// Line 1256, Address: 0x3eceec, Func Offset: 0x3ec
	// Line 1257, Address: 0x3ecf00, Func Offset: 0x400
	// Line 1278, Address: 0x3ecf08, Func Offset: 0x408
	// Line 1264, Address: 0x3ecf10, Func Offset: 0x410
	// Line 1278, Address: 0x3ecf14, Func Offset: 0x414
	// Line 1264, Address: 0x3ecf20, Func Offset: 0x420
	// Line 1278, Address: 0x3ecf24, Func Offset: 0x424
	// Line 1265, Address: 0x3ecf2c, Func Offset: 0x42c
	// Line 1266, Address: 0x3ecf40, Func Offset: 0x440
	// Line 1279, Address: 0x3ecf48, Func Offset: 0x448
	// Func End, Address: 0x3ecf50, Func Offset: 0x450
}

// xEntScale__FP10xEntMotionP6xScenefP9xEntFrame
// Start address: 0x3ecf50
uint32 xEntScale(xEntMotion* motion, float32 dt, xEntFrame* frame)
{
	xEntMechData* mech;
	xEntMotionMechData* mkasst;
	uint32 last;
	float32 scale;
	float32 u;
	float32 scale_adjust;
	// Line 1113, Address: 0x3ecf50, Func Offset: 0
	// Line 1117, Address: 0x3ecf58, Func Offset: 0x8
	// Line 1127, Address: 0x3ecf60, Func Offset: 0x10
	// Line 1122, Address: 0x3ecf64, Func Offset: 0x14
	// Line 1129, Address: 0x3ecf68, Func Offset: 0x18
	// Line 1120, Address: 0x3ecf6c, Func Offset: 0x1c
	// Line 1129, Address: 0x3ecf70, Func Offset: 0x20
	// Line 1123, Address: 0x3ecf74, Func Offset: 0x24
	// Line 1127, Address: 0x3ecf78, Func Offset: 0x28
	// Line 1122, Address: 0x3ecf7c, Func Offset: 0x2c
	// Line 1127, Address: 0x3ecf80, Func Offset: 0x30
	// Line 1129, Address: 0x3ecf90, Func Offset: 0x40
	// Line 1130, Address: 0x3ecf9c, Func Offset: 0x4c
	// Line 1131, Address: 0x3ecfa0, Func Offset: 0x50
	// Line 1138, Address: 0x3ecfa4, Func Offset: 0x54
	// Line 1141, Address: 0x3ecff8, Func Offset: 0xa8
	// Line 1142, Address: 0x3ed000, Func Offset: 0xb0
	// Line 1141, Address: 0x3ed004, Func Offset: 0xb4
	// Line 1145, Address: 0x3ed008, Func Offset: 0xb8
	// Line 1147, Address: 0x3ed038, Func Offset: 0xe8
	// Line 1148, Address: 0x3ed05c, Func Offset: 0x10c
	// Line 1149, Address: 0x3ed07c, Func Offset: 0x12c
	// Line 1151, Address: 0x3ed088, Func Offset: 0x138
	// Line 1152, Address: 0x3ed0ac, Func Offset: 0x15c
	// Line 1153, Address: 0x3ed0cc, Func Offset: 0x17c
	// Line 1155, Address: 0x3ed0d8, Func Offset: 0x188
	// Line 1156, Address: 0x3ed0fc, Func Offset: 0x1ac
	// Line 1157, Address: 0x3ed11c, Func Offset: 0x1cc
	// Line 1159, Address: 0x3ed128, Func Offset: 0x1d8
	// Line 1160, Address: 0x3ed150, Func Offset: 0x200
	// Line 1161, Address: 0x3ed174, Func Offset: 0x224
	// Line 1162, Address: 0x3ed198, Func Offset: 0x248
	// Line 1163, Address: 0x3ed1b8, Func Offset: 0x268
	// Line 1165, Address: 0x3ed1c4, Func Offset: 0x274
	// Line 1166, Address: 0x3ed1ec, Func Offset: 0x29c
	// Line 1167, Address: 0x3ed210, Func Offset: 0x2c0
	// Line 1168, Address: 0x3ed234, Func Offset: 0x2e4
	// Line 1169, Address: 0x3ed254, Func Offset: 0x304
	// Line 1171, Address: 0x3ed260, Func Offset: 0x310
	// Line 1172, Address: 0x3ed288, Func Offset: 0x338
	// Line 1173, Address: 0x3ed2ac, Func Offset: 0x35c
	// Line 1174, Address: 0x3ed2d0, Func Offset: 0x380
	// Line 1175, Address: 0x3ed2f0, Func Offset: 0x3a0
	// Line 1177, Address: 0x3ed2fc, Func Offset: 0x3ac
	// Line 1178, Address: 0x3ed324, Func Offset: 0x3d4
	// Line 1179, Address: 0x3ed34c, Func Offset: 0x3fc
	// Line 1180, Address: 0x3ed370, Func Offset: 0x420
	// Line 1181, Address: 0x3ed394, Func Offset: 0x444
	// Line 1182, Address: 0x3ed3b8, Func Offset: 0x468
	// Line 1186, Address: 0x3ed3dc, Func Offset: 0x48c
	// Line 1118, Address: 0x3ed3e4, Func Offset: 0x494
	// Line 1187, Address: 0x3ed3e8, Func Offset: 0x498
	// Func End, Address: 0x3ed3f0, Func Offset: 0x4a0
}

// xEntMechMove__FP10xEntMotionP6xScenefP9xEntFrame
// Start address: 0x3ed3f0
void xEntMechMove(xEntMotion* motion, xScene* sc, float32 dt, xEntFrame* frame)
{
	xEntMechData* mech;
	xEntMotionMechData* mkasst;
	uint32 last;
	// Line 959, Address: 0x3ed3f0, Func Offset: 0
	// Line 966, Address: 0x3ed3f4, Func Offset: 0x4
	// Line 959, Address: 0x3ed3f8, Func Offset: 0x8
	// Line 962, Address: 0x3ed410, Func Offset: 0x20
	// Line 959, Address: 0x3ed414, Func Offset: 0x24
	// Line 960, Address: 0x3ed418, Func Offset: 0x28
	// Line 959, Address: 0x3ed41c, Func Offset: 0x2c
	// Line 961, Address: 0x3ed420, Func Offset: 0x30
	// Line 964, Address: 0x3ed428, Func Offset: 0x38
	// Line 966, Address: 0x3ed430, Func Offset: 0x40
	// Line 983, Address: 0x3ed438, Func Offset: 0x48
	// Line 998, Address: 0x3ed444, Func Offset: 0x54
	// Line 1017, Address: 0x3ed44c, Func Offset: 0x5c
	// Line 1033, Address: 0x3ed454, Func Offset: 0x64
	// Line 1054, Address: 0x3ed45c, Func Offset: 0x6c
	// Line 1071, Address: 0x3ed464, Func Offset: 0x74
	// Line 1085, Address: 0x3ed470, Func Offset: 0x80
	// Line 1086, Address: 0x3ed478, Func Offset: 0x88
	// Line 1087, Address: 0x3ed48c, Func Offset: 0x9c
	// Line 1091, Address: 0x3ed494, Func Offset: 0xa4
	// Line 1092, Address: 0x3ed498, Func Offset: 0xa8
	// Line 1091, Address: 0x3ed49c, Func Offset: 0xac
	// Line 1096, Address: 0x3ed4a4, Func Offset: 0xb4
	// Line 1098, Address: 0x3ed4ac, Func Offset: 0xbc
	// Line 1099, Address: 0x3ed4b4, Func Offset: 0xc4
	// Line 1101, Address: 0x3ed4c0, Func Offset: 0xd0
	// Line 968, Address: 0x3ed4d4, Func Offset: 0xe4
	// Line 1101, Address: 0x3ed4d8, Func Offset: 0xe8
	// Line 972, Address: 0x3ed4ec, Func Offset: 0xfc
	// Line 1101, Address: 0x3ed4f0, Func Offset: 0x100
	// Line 976, Address: 0x3ed4f8, Func Offset: 0x108
	// Line 1101, Address: 0x3ed4fc, Func Offset: 0x10c
	// Line 977, Address: 0x3ed504, Func Offset: 0x114
	// Line 978, Address: 0x3ed508, Func Offset: 0x118
	// Line 983, Address: 0x3ed510, Func Offset: 0x120
	// Line 969, Address: 0x3ed518, Func Offset: 0x128
	// Line 1101, Address: 0x3ed51c, Func Offset: 0x12c
	// Line 974, Address: 0x3ed534, Func Offset: 0x144
	// Line 1101, Address: 0x3ed538, Func Offset: 0x148
	// Line 975, Address: 0x3ed540, Func Offset: 0x150
	// Line 976, Address: 0x3ed544, Func Offset: 0x154
	// Line 1101, Address: 0x3ed54c, Func Offset: 0x15c
	// Line 985, Address: 0x3ed558, Func Offset: 0x168
	// Line 1101, Address: 0x3ed55c, Func Offset: 0x16c
	// Line 989, Address: 0x3ed570, Func Offset: 0x180
	// Line 1101, Address: 0x3ed574, Func Offset: 0x184
	// Line 992, Address: 0x3ed57c, Func Offset: 0x18c
	// Line 993, Address: 0x3ed580, Func Offset: 0x190
	// Line 998, Address: 0x3ed588, Func Offset: 0x198
	// Line 986, Address: 0x3ed590, Func Offset: 0x1a0
	// Line 1101, Address: 0x3ed594, Func Offset: 0x1a4
	// Line 1000, Address: 0x3ed5b0, Func Offset: 0x1c0
	// Line 1101, Address: 0x3ed5b4, Func Offset: 0x1c4
	// Line 1004, Address: 0x3ed5c8, Func Offset: 0x1d8
	// Line 1101, Address: 0x3ed5cc, Func Offset: 0x1dc
	// Line 1006, Address: 0x3ed5d8, Func Offset: 0x1e8
	// Line 1101, Address: 0x3ed5dc, Func Offset: 0x1ec
	// Line 1010, Address: 0x3ed5e4, Func Offset: 0x1f4
	// Line 1101, Address: 0x3ed5e8, Func Offset: 0x1f8
	// Line 1011, Address: 0x3ed5f0, Func Offset: 0x200
	// Line 1012, Address: 0x3ed5f4, Func Offset: 0x204
	// Line 1017, Address: 0x3ed5fc, Func Offset: 0x20c
	// Line 1001, Address: 0x3ed604, Func Offset: 0x214
	// Line 1101, Address: 0x3ed608, Func Offset: 0x218
	// Line 1006, Address: 0x3ed618, Func Offset: 0x228
	// Line 1101, Address: 0x3ed620, Func Offset: 0x230
	// Line 1008, Address: 0x3ed628, Func Offset: 0x238
	// Line 1101, Address: 0x3ed62c, Func Offset: 0x23c
	// Line 1009, Address: 0x3ed634, Func Offset: 0x244
	// Line 1010, Address: 0x3ed638, Func Offset: 0x248
	// Line 1101, Address: 0x3ed640, Func Offset: 0x250
	// Line 1018, Address: 0x3ed648, Func Offset: 0x258
	// Line 1101, Address: 0x3ed64c, Func Offset: 0x25c
	// Line 1020, Address: 0x3ed658, Func Offset: 0x268
	// Line 1101, Address: 0x3ed65c, Func Offset: 0x26c
	// Line 1022, Address: 0x3ed668, Func Offset: 0x278
	// Line 1101, Address: 0x3ed66c, Func Offset: 0x27c
	// Line 1026, Address: 0x3ed674, Func Offset: 0x284
	// Line 1101, Address: 0x3ed678, Func Offset: 0x288
	// Line 1028, Address: 0x3ed684, Func Offset: 0x294
	// Line 1101, Address: 0x3ed690, Func Offset: 0x2a0
	// Line 1033, Address: 0x3ed698, Func Offset: 0x2a8
	// Line 1022, Address: 0x3ed6a0, Func Offset: 0x2b0
	// Line 1101, Address: 0x3ed6a8, Func Offset: 0x2b8
	// Line 1024, Address: 0x3ed6b0, Func Offset: 0x2c0
	// Line 1101, Address: 0x3ed6b4, Func Offset: 0x2c4
	// Line 1025, Address: 0x3ed6bc, Func Offset: 0x2cc
	// Line 1026, Address: 0x3ed6c0, Func Offset: 0x2d0
	// Line 1028, Address: 0x3ed6c8, Func Offset: 0x2d8
	// Line 1101, Address: 0x3ed6d0, Func Offset: 0x2e0
	// Line 1034, Address: 0x3ed6d8, Func Offset: 0x2e8
	// Line 1101, Address: 0x3ed6dc, Func Offset: 0x2ec
	// Line 1046, Address: 0x3ed710, Func Offset: 0x320
	// Line 1101, Address: 0x3ed718, Func Offset: 0x328
	// Line 1054, Address: 0x3ed71c, Func Offset: 0x32c
	// Line 1039, Address: 0x3ed724, Func Offset: 0x334
	// Line 1041, Address: 0x3ed728, Func Offset: 0x338
	// Line 1101, Address: 0x3ed730, Func Offset: 0x340
	// Line 1056, Address: 0x3ed73c, Func Offset: 0x34c
	// Line 1101, Address: 0x3ed740, Func Offset: 0x350
	// Line 1060, Address: 0x3ed754, Func Offset: 0x364
	// Line 1101, Address: 0x3ed758, Func Offset: 0x368
	// Line 1062, Address: 0x3ed764, Func Offset: 0x374
	// Line 1101, Address: 0x3ed768, Func Offset: 0x378
	// Line 1065, Address: 0x3ed770, Func Offset: 0x380
	// Line 1066, Address: 0x3ed774, Func Offset: 0x384
	// Line 1071, Address: 0x3ed77c, Func Offset: 0x38c
	// Line 1057, Address: 0x3ed784, Func Offset: 0x394
	// Line 1101, Address: 0x3ed788, Func Offset: 0x398
	// Line 1062, Address: 0x3ed798, Func Offset: 0x3a8
	// Line 1101, Address: 0x3ed7a0, Func Offset: 0x3b0
	// Line 1072, Address: 0x3ed7a8, Func Offset: 0x3b8
	// Line 1101, Address: 0x3ed7ac, Func Offset: 0x3bc
	// Line 1074, Address: 0x3ed7b8, Func Offset: 0x3c8
	// Line 1101, Address: 0x3ed7bc, Func Offset: 0x3cc
	// Line 1076, Address: 0x3ed7c8, Func Offset: 0x3d8
	// Line 1101, Address: 0x3ed7cc, Func Offset: 0x3dc
	// Line 1079, Address: 0x3ed7d4, Func Offset: 0x3e4
	// Line 1080, Address: 0x3ed7d8, Func Offset: 0x3e8
	// Line 1085, Address: 0x3ed7e0, Func Offset: 0x3f0
	// Line 1076, Address: 0x3ed7e8, Func Offset: 0x3f8
	// Line 1101, Address: 0x3ed7f0, Func Offset: 0x400
	// Func End, Address: 0x3ed80c, Func Offset: 0x41c
}

// xEntPenMove__FP10xEntMotionP6xScenefP9xEntFrame
// Start address: 0x3ed810
void xEntPenMove(xEntMotion* motion, float32 dt, xEntFrame* frame)
{
	xEntPenData* pen;
	xEntMotionPenData* aspen;
	float32 th;
	float32 tf;
	float32 u;
	float32 v;
	float32 dangle;
	float32 newt;
	float32 rem;
	xMat4x3 delta_mat;
	// Line 907, Address: 0x3ed810, Func Offset: 0
	// Line 917, Address: 0x3ed814, Func Offset: 0x4
	// Line 907, Address: 0x3ed818, Func Offset: 0x8
	// Line 917, Address: 0x3ed81c, Func Offset: 0xc
	// Line 907, Address: 0x3ed820, Func Offset: 0x10
	// Line 908, Address: 0x3ed83c, Func Offset: 0x2c
	// Line 907, Address: 0x3ed840, Func Offset: 0x30
	// Line 909, Address: 0x3ed848, Func Offset: 0x38
	// Line 917, Address: 0x3ed84c, Func Offset: 0x3c
	// Line 909, Address: 0x3ed854, Func Offset: 0x44
	// Line 918, Address: 0x3ed858, Func Offset: 0x48
	// Line 924, Address: 0x3ed86c, Func Offset: 0x5c
	// Line 927, Address: 0x3ed88c, Func Offset: 0x7c
	// Line 928, Address: 0x3ed894, Func Offset: 0x84
	// Line 924, Address: 0x3ed898, Func Offset: 0x88
	// Line 927, Address: 0x3ed8a4, Func Offset: 0x94
	// Line 928, Address: 0x3ed8a8, Func Offset: 0x98
	// Line 929, Address: 0x3ed8b4, Func Offset: 0xa4
	// Line 934, Address: 0x3ed8b8, Func Offset: 0xa8
	// Line 935, Address: 0x3ed8d8, Func Offset: 0xc8
	// Line 936, Address: 0x3ed8fc, Func Offset: 0xec
	// Line 937, Address: 0x3ed900, Func Offset: 0xf0
	// Line 952, Address: 0x3ed908, Func Offset: 0xf8
	// Line 953, Address: 0x3ed914, Func Offset: 0x104
	// Line 954, Address: 0x3ed924, Func Offset: 0x114
	// Line 956, Address: 0x3ed92c, Func Offset: 0x11c
	// Func End, Address: 0x3ed950, Func Offset: 0x140
}

// xEntSplineMove__FP10xEntMotionP6xScenefP9xEntFrame
// Start address: 0x3ed950
void xEntSplineMove(xEntMotion* motion, float32 dt, xEntFrame* frame)
{
	xEntSplineData* spline_data;
	uint8 still_on_spline;
	xVec3 target_position;
	xVec3 new_position;
	xVec3 dir;
	xMat3x3 mat;
	xQuat target_orient;
	// Line 817, Address: 0x3ed950, Func Offset: 0
	// Line 822, Address: 0x3ed954, Func Offset: 0x4
	// Line 817, Address: 0x3ed958, Func Offset: 0x8
	// Line 821, Address: 0x3ed97c, Func Offset: 0x2c
	// Line 817, Address: 0x3ed980, Func Offset: 0x30
	// Line 822, Address: 0x3ed990, Func Offset: 0x40
	// Line 825, Address: 0x3ed9a0, Func Offset: 0x50
	// Line 828, Address: 0x3ed9d8, Func Offset: 0x88
	// Line 831, Address: 0x3ed9f8, Func Offset: 0xa8
	// Line 834, Address: 0x3eda00, Func Offset: 0xb0
	// Line 841, Address: 0x3eda14, Func Offset: 0xc4
	// Line 847, Address: 0x3eda1c, Func Offset: 0xcc
	// Line 850, Address: 0x3eda2c, Func Offset: 0xdc
	// Line 853, Address: 0x3eda30, Func Offset: 0xe0
	// Line 850, Address: 0x3eda34, Func Offset: 0xe4
	// Line 853, Address: 0x3eda3c, Func Offset: 0xec
	// Line 855, Address: 0x3eda48, Func Offset: 0xf8
	// Line 865, Address: 0x3edaa4, Func Offset: 0x154
	// Line 899, Address: 0x3edab4, Func Offset: 0x164
	// Line 825, Address: 0x3edac0, Func Offset: 0x170
	// Line 899, Address: 0x3edad0, Func Offset: 0x180
	// Line 825, Address: 0x3edad8, Func Offset: 0x188
	// Line 899, Address: 0x3edadc, Func Offset: 0x18c
	// Line 825, Address: 0x3edae4, Func Offset: 0x194
	// Line 899, Address: 0x3edaf0, Func Offset: 0x1a0
	// Line 825, Address: 0x3edb00, Func Offset: 0x1b0
	// Line 899, Address: 0x3edb04, Func Offset: 0x1b4
	// Line 825, Address: 0x3edb20, Func Offset: 0x1d0
	// Line 899, Address: 0x3edb24, Func Offset: 0x1d4
	// Line 838, Address: 0x3edb3c, Func Offset: 0x1ec
	// Line 860, Address: 0x3edb44, Func Offset: 0x1f4
	// Line 899, Address: 0x3edb48, Func Offset: 0x1f8
	// Line 860, Address: 0x3edb4c, Func Offset: 0x1fc
	// Line 899, Address: 0x3edb58, Func Offset: 0x208
	// Line 861, Address: 0x3edb7c, Func Offset: 0x22c
	// Line 899, Address: 0x3edb80, Func Offset: 0x230
	// Line 861, Address: 0x3edb90, Func Offset: 0x240
	// Line 899, Address: 0x3edb98, Func Offset: 0x248
	// Line 873, Address: 0x3edbd4, Func Offset: 0x284
	// Line 899, Address: 0x3edbd8, Func Offset: 0x288
	// Line 868, Address: 0x3edbf8, Func Offset: 0x2a8
	// Line 869, Address: 0x3edc04, Func Offset: 0x2b4
	// Line 899, Address: 0x3edc0c, Func Offset: 0x2bc
	// Line 869, Address: 0x3edc20, Func Offset: 0x2d0
	// Line 899, Address: 0x3edc24, Func Offset: 0x2d4
	// Line 870, Address: 0x3edc28, Func Offset: 0x2d8
	// Line 899, Address: 0x3edc2c, Func Offset: 0x2dc
	// Line 870, Address: 0x3edc30, Func Offset: 0x2e0
	// Line 899, Address: 0x3edc34, Func Offset: 0x2e4
	// Line 870, Address: 0x3edc3c, Func Offset: 0x2ec
	// Line 899, Address: 0x3edc40, Func Offset: 0x2f0
	// Line 873, Address: 0x3edc88, Func Offset: 0x338
	// Line 874, Address: 0x3edc8c, Func Offset: 0x33c
	// Line 899, Address: 0x3edc94, Func Offset: 0x344
	// Line 874, Address: 0x3edca4, Func Offset: 0x354
	// Line 899, Address: 0x3edca8, Func Offset: 0x358
	// Line 873, Address: 0x3edcac, Func Offset: 0x35c
	// Line 899, Address: 0x3edcb0, Func Offset: 0x360
	// Line 873, Address: 0x3edcb4, Func Offset: 0x364
	// Line 899, Address: 0x3edcb8, Func Offset: 0x368
	// Line 873, Address: 0x3edce8, Func Offset: 0x398
	// Line 899, Address: 0x3edcf4, Func Offset: 0x3a4
	// Line 873, Address: 0x3edcfc, Func Offset: 0x3ac
	// Line 899, Address: 0x3edd00, Func Offset: 0x3b0
	// Line 873, Address: 0x3edd1c, Func Offset: 0x3cc
	// Line 874, Address: 0x3edd24, Func Offset: 0x3d4
	// Line 899, Address: 0x3edd30, Func Offset: 0x3e0
	// Line 874, Address: 0x3edd44, Func Offset: 0x3f4
	// Line 899, Address: 0x3edd48, Func Offset: 0x3f8
	// Line 874, Address: 0x3edd60, Func Offset: 0x410
	// Line 899, Address: 0x3edd64, Func Offset: 0x414
	// Line 874, Address: 0x3edd70, Func Offset: 0x420
	// Line 899, Address: 0x3edd78, Func Offset: 0x428
	// Line 878, Address: 0x3edda0, Func Offset: 0x450
	// Line 899, Address: 0x3edda4, Func Offset: 0x454
	// Line 878, Address: 0x3eddac, Func Offset: 0x45c
	// Line 899, Address: 0x3eddb0, Func Offset: 0x460
	// Line 878, Address: 0x3eddb4, Func Offset: 0x464
	// Line 899, Address: 0x3eddc0, Func Offset: 0x470
	// Line 878, Address: 0x3eddc8, Func Offset: 0x478
	// Line 899, Address: 0x3eddcc, Func Offset: 0x47c
	// Line 878, Address: 0x3edddc, Func Offset: 0x48c
	// Line 899, Address: 0x3edde0, Func Offset: 0x490
	// Line 878, Address: 0x3eddf8, Func Offset: 0x4a8
	// Line 899, Address: 0x3eddfc, Func Offset: 0x4ac
	// Line 878, Address: 0x3ede08, Func Offset: 0x4b8
	// Line 899, Address: 0x3ede10, Func Offset: 0x4c0
	// Line 880, Address: 0x3ede1c, Func Offset: 0x4cc
	// Line 899, Address: 0x3ede28, Func Offset: 0x4d8
	// Line 885, Address: 0x3ede3c, Func Offset: 0x4ec
	// Line 899, Address: 0x3ede40, Func Offset: 0x4f0
	// Line 885, Address: 0x3ede44, Func Offset: 0x4f4
	// Line 899, Address: 0x3ede48, Func Offset: 0x4f8
	// Line 884, Address: 0x3ede68, Func Offset: 0x518
	// Line 899, Address: 0x3ede6c, Func Offset: 0x51c
	// Line 884, Address: 0x3ede70, Func Offset: 0x520
	// Line 899, Address: 0x3ede74, Func Offset: 0x524
	// Line 884, Address: 0x3ede78, Func Offset: 0x528
	// Line 899, Address: 0x3ede80, Func Offset: 0x530
	// Line 884, Address: 0x3ede8c, Func Offset: 0x53c
	// Line 899, Address: 0x3ede94, Func Offset: 0x544
	// Line 885, Address: 0x3ede9c, Func Offset: 0x54c
	// Line 899, Address: 0x3edea0, Func Offset: 0x550
	// Line 884, Address: 0x3edeb0, Func Offset: 0x560
	// Line 899, Address: 0x3edeb4, Func Offset: 0x564
	// Line 884, Address: 0x3eded0, Func Offset: 0x580
	// Line 899, Address: 0x3eded8, Func Offset: 0x588
	// Line 885, Address: 0x3edef0, Func Offset: 0x5a0
	// Line 899, Address: 0x3edef4, Func Offset: 0x5a4
	// Line 885, Address: 0x3edef8, Func Offset: 0x5a8
	// Line 899, Address: 0x3edefc, Func Offset: 0x5ac
	// Line 885, Address: 0x3edf00, Func Offset: 0x5b0
	// Line 899, Address: 0x3edf04, Func Offset: 0x5b4
	// Line 885, Address: 0x3edf10, Func Offset: 0x5c0
	// Line 899, Address: 0x3edf14, Func Offset: 0x5c4
	// Line 885, Address: 0x3edf2c, Func Offset: 0x5dc
	// Line 899, Address: 0x3edf30, Func Offset: 0x5e0
	// Line 885, Address: 0x3edf3c, Func Offset: 0x5ec
	// Line 899, Address: 0x3edf44, Func Offset: 0x5f4
	// Line 886, Address: 0x3edf5c, Func Offset: 0x60c
	// Line 899, Address: 0x3edf64, Func Offset: 0x614
	// Line 886, Address: 0x3edf94, Func Offset: 0x644
	// Line 899, Address: 0x3edf9c, Func Offset: 0x64c
	// Line 886, Address: 0x3edfa0, Func Offset: 0x650
	// Line 899, Address: 0x3edfa8, Func Offset: 0x658
	// Line 886, Address: 0x3edfb0, Func Offset: 0x660
	// Line 899, Address: 0x3edfb8, Func Offset: 0x668
	// Line 890, Address: 0x3edfdc, Func Offset: 0x68c
	// Line 899, Address: 0x3edff4, Func Offset: 0x6a4
	// Line 893, Address: 0x3ee000, Func Offset: 0x6b0
	// Line 892, Address: 0x3ee008, Func Offset: 0x6b8
	// Line 899, Address: 0x3ee00c, Func Offset: 0x6bc
	// Line 895, Address: 0x3ee018, Func Offset: 0x6c8
	// Line 899, Address: 0x3ee01c, Func Offset: 0x6cc
	// Line 895, Address: 0x3ee024, Func Offset: 0x6d4
	// Line 899, Address: 0x3ee028, Func Offset: 0x6d8
	// Line 895, Address: 0x3ee030, Func Offset: 0x6e0
	// Line 899, Address: 0x3ee034, Func Offset: 0x6e4
	// Line 896, Address: 0x3ee03c, Func Offset: 0x6ec
	// Line 899, Address: 0x3ee040, Func Offset: 0x6f0
	// Line 896, Address: 0x3ee048, Func Offset: 0x6f8
	// Line 899, Address: 0x3ee04c, Func Offset: 0x6fc
	// Line 896, Address: 0x3ee054, Func Offset: 0x704
	// Line 899, Address: 0x3ee058, Func Offset: 0x708
	// Line 897, Address: 0x3ee060, Func Offset: 0x710
	// Line 899, Address: 0x3ee064, Func Offset: 0x714
	// Line 897, Address: 0x3ee06c, Func Offset: 0x71c
	// Line 899, Address: 0x3ee070, Func Offset: 0x720
	// Line 897, Address: 0x3ee078, Func Offset: 0x728
	// Line 899, Address: 0x3ee084, Func Offset: 0x734
	// Line 874, Address: 0x3ee0a4, Func Offset: 0x754
	// Line 899, Address: 0x3ee0ac, Func Offset: 0x75c
	// Line 878, Address: 0x3ee0c0, Func Offset: 0x770
	// Line 899, Address: 0x3ee0c8, Func Offset: 0x778
	// Line 881, Address: 0x3ee0dc, Func Offset: 0x78c
	// Line 899, Address: 0x3ee0e0, Func Offset: 0x790
	// Line 881, Address: 0x3ee108, Func Offset: 0x7b8
	// Line 899, Address: 0x3ee10c, Func Offset: 0x7bc
	// Line 881, Address: 0x3ee110, Func Offset: 0x7c0
	// Line 899, Address: 0x3ee118, Func Offset: 0x7c8
	// Line 885, Address: 0x3ee15c, Func Offset: 0x80c
	// Line 899, Address: 0x3ee164, Func Offset: 0x814
	// Func End, Address: 0x3ee198, Func Offset: 0x848
}

// xEntMPMove__FP10xEntMotionP6xScenefP9xEntFrame
// Start address: 0x3ee1a0
void xEntMPMove(xEntMotion* motion, xScene* sc, float32 dt, xEntFrame* frame)
{
	xEntMPData* mp;
	float32 newdist;
	xMovePoint* prev;
	float32 qdot;
	xVec3 tgt;
	xVec3 direction;
	xVec3 bank;
	xQuat quat;
	xQuat qold;
	xMat3x3 tmpmat;
	float32 u;
	xVec3 gravity;
	// Line 620, Address: 0x3ee1a0, Func Offset: 0
	// Line 624, Address: 0x3ee1c8, Func Offset: 0x28
	// Line 620, Address: 0x3ee1cc, Func Offset: 0x2c
	// Line 621, Address: 0x3ee1d0, Func Offset: 0x30
	// Line 620, Address: 0x3ee1d4, Func Offset: 0x34
	// Line 624, Address: 0x3ee1e8, Func Offset: 0x48
	// Line 630, Address: 0x3ee20c, Func Offset: 0x6c
	// Line 635, Address: 0x3ee228, Func Offset: 0x88
	// Line 642, Address: 0x3ee260, Func Offset: 0xc0
	// Line 647, Address: 0x3ee268, Func Offset: 0xc8
	// Line 650, Address: 0x3ee274, Func Offset: 0xd4
	// Line 647, Address: 0x3ee278, Func Offset: 0xd8
	// Line 650, Address: 0x3ee280, Func Offset: 0xe0
	// Line 653, Address: 0x3ee28c, Func Offset: 0xec
	// Line 656, Address: 0x3ee2c4, Func Offset: 0x124
	// Line 661, Address: 0x3ee2d8, Func Offset: 0x138
	// Line 663, Address: 0x3ee2dc, Func Offset: 0x13c
	// Line 662, Address: 0x3ee2e0, Func Offset: 0x140
	// Line 663, Address: 0x3ee2e4, Func Offset: 0x144
	// Line 668, Address: 0x3ee2f0, Func Offset: 0x150
	// Line 671, Address: 0x3ee2fc, Func Offset: 0x15c
	// Line 675, Address: 0x3ee304, Func Offset: 0x164
	// Line 686, Address: 0x3ee30c, Func Offset: 0x16c
	// Line 684, Address: 0x3ee310, Func Offset: 0x170
	// Line 675, Address: 0x3ee314, Func Offset: 0x174
	// Line 684, Address: 0x3ee31c, Func Offset: 0x17c
	// Line 685, Address: 0x3ee338, Func Offset: 0x198
	// Line 684, Address: 0x3ee35c, Func Offset: 0x1bc
	// Line 686, Address: 0x3ee360, Func Offset: 0x1c0
	// Line 688, Address: 0x3ee380, Func Offset: 0x1e0
	// Line 690, Address: 0x3ee388, Func Offset: 0x1e8
	// Line 691, Address: 0x3ee394, Func Offset: 0x1f4
	// Line 694, Address: 0x3ee3a8, Func Offset: 0x208
	// Line 697, Address: 0x3ee3bc, Func Offset: 0x21c
	// Line 703, Address: 0x3ee3dc, Func Offset: 0x23c
	// Line 697, Address: 0x3ee3e0, Func Offset: 0x240
	// Line 703, Address: 0x3ee3e4, Func Offset: 0x244
	// Line 697, Address: 0x3ee3e8, Func Offset: 0x248
	// Line 703, Address: 0x3ee3ec, Func Offset: 0x24c
	// Line 705, Address: 0x3ee408, Func Offset: 0x268
	// Line 706, Address: 0x3ee438, Func Offset: 0x298
	// Line 708, Address: 0x3ee44c, Func Offset: 0x2ac
	// Line 711, Address: 0x3ee460, Func Offset: 0x2c0
	// Line 712, Address: 0x3ee474, Func Offset: 0x2d4
	// Line 718, Address: 0x3ee488, Func Offset: 0x2e8
	// Line 734, Address: 0x3ee49c, Func Offset: 0x2fc
	// Line 738, Address: 0x3ee4c4, Func Offset: 0x324
	// Line 734, Address: 0x3ee52c, Func Offset: 0x38c
	// Line 738, Address: 0x3ee530, Func Offset: 0x390
	// Line 747, Address: 0x3ee540, Func Offset: 0x3a0
	// Line 738, Address: 0x3ee544, Func Offset: 0x3a4
	// Line 747, Address: 0x3ee548, Func Offset: 0x3a8
	// Line 734, Address: 0x3ee54c, Func Offset: 0x3ac
	// Line 738, Address: 0x3ee550, Func Offset: 0x3b0
	// Line 739, Address: 0x3ee558, Func Offset: 0x3b8
	// Line 738, Address: 0x3ee55c, Func Offset: 0x3bc
	// Line 739, Address: 0x3ee570, Func Offset: 0x3d0
	// Line 738, Address: 0x3ee580, Func Offset: 0x3e0
	// Line 739, Address: 0x3ee59c, Func Offset: 0x3fc
	// Line 738, Address: 0x3ee5a0, Func Offset: 0x400
	// Line 734, Address: 0x3ee5a8, Func Offset: 0x408
	// Line 738, Address: 0x3ee5ac, Func Offset: 0x40c
	// Line 739, Address: 0x3ee5c8, Func Offset: 0x428
	// Line 738, Address: 0x3ee5cc, Func Offset: 0x42c
	// Line 739, Address: 0x3ee5e4, Func Offset: 0x444
	// Line 738, Address: 0x3ee5e8, Func Offset: 0x448
	// Line 739, Address: 0x3ee600, Func Offset: 0x460
	// Line 746, Address: 0x3ee604, Func Offset: 0x464
	// Line 738, Address: 0x3ee608, Func Offset: 0x468
	// Line 739, Address: 0x3ee61c, Func Offset: 0x47c
	// Line 738, Address: 0x3ee620, Func Offset: 0x480
	// Line 739, Address: 0x3ee628, Func Offset: 0x488
	// Line 738, Address: 0x3ee62c, Func Offset: 0x48c
	// Line 742, Address: 0x3ee630, Func Offset: 0x490
	// Line 739, Address: 0x3ee634, Func Offset: 0x494
	// Line 742, Address: 0x3ee638, Func Offset: 0x498
	// Line 738, Address: 0x3ee63c, Func Offset: 0x49c
	// Line 746, Address: 0x3ee648, Func Offset: 0x4a8
	// Line 739, Address: 0x3ee64c, Func Offset: 0x4ac
	// Line 742, Address: 0x3ee650, Func Offset: 0x4b0
	// Line 738, Address: 0x3ee658, Func Offset: 0x4b8
	// Line 746, Address: 0x3ee664, Func Offset: 0x4c4
	// Line 738, Address: 0x3ee668, Func Offset: 0x4c8
	// Line 742, Address: 0x3ee670, Func Offset: 0x4d0
	// Line 746, Address: 0x3ee674, Func Offset: 0x4d4
	// Line 738, Address: 0x3ee678, Func Offset: 0x4d8
	// Line 742, Address: 0x3ee67c, Func Offset: 0x4dc
	// Line 743, Address: 0x3ee6c8, Func Offset: 0x528
	// Line 747, Address: 0x3ee6ec, Func Offset: 0x54c
	// Line 748, Address: 0x3ee710, Func Offset: 0x570
	// Line 747, Address: 0x3ee714, Func Offset: 0x574
	// Line 748, Address: 0x3ee72c, Func Offset: 0x58c
	// Line 747, Address: 0x3ee730, Func Offset: 0x590
	// Line 748, Address: 0x3ee734, Func Offset: 0x594
	// Line 747, Address: 0x3ee73c, Func Offset: 0x59c
	// Line 748, Address: 0x3ee75c, Func Offset: 0x5bc
	// Line 747, Address: 0x3ee760, Func Offset: 0x5c0
	// Line 755, Address: 0x3ee780, Func Offset: 0x5e0
	// Line 756, Address: 0x3ee78c, Func Offset: 0x5ec
	// Line 757, Address: 0x3ee7a0, Func Offset: 0x600
	// Line 756, Address: 0x3ee7b8, Func Offset: 0x618
	// Line 757, Address: 0x3ee7bc, Func Offset: 0x61c
	// Line 758, Address: 0x3ee7d4, Func Offset: 0x634
	// Line 762, Address: 0x3ee7e0, Func Offset: 0x640
	// Line 763, Address: 0x3ee7fc, Func Offset: 0x65c
	// Line 764, Address: 0x3ee85c, Func Offset: 0x6bc
	// Line 765, Address: 0x3ee868, Func Offset: 0x6c8
	// Line 766, Address: 0x3ee874, Func Offset: 0x6d4
	// Line 769, Address: 0x3ee8d4, Func Offset: 0x734
	// Line 770, Address: 0x3ee8f8, Func Offset: 0x758
	// Line 771, Address: 0x3ee91c, Func Offset: 0x77c
	// Line 809, Address: 0x3ee940, Func Offset: 0x7a0
	// Line 814, Address: 0x3ee96c, Func Offset: 0x7cc
	// Line 632, Address: 0x3ee974, Func Offset: 0x7d4
	// Line 633, Address: 0x3ee978, Func Offset: 0x7d8
	// Line 814, Address: 0x3ee980, Func Offset: 0x7e0
	// Line 635, Address: 0x3ee984, Func Offset: 0x7e4
	// Line 814, Address: 0x3ee994, Func Offset: 0x7f4
	// Line 635, Address: 0x3ee99c, Func Offset: 0x7fc
	// Line 814, Address: 0x3ee9a0, Func Offset: 0x800
	// Line 635, Address: 0x3ee9a8, Func Offset: 0x808
	// Line 814, Address: 0x3ee9b4, Func Offset: 0x814
	// Line 635, Address: 0x3ee9c4, Func Offset: 0x824
	// Line 814, Address: 0x3ee9c8, Func Offset: 0x828
	// Line 635, Address: 0x3ee9e4, Func Offset: 0x844
	// Line 814, Address: 0x3ee9e8, Func Offset: 0x848
	// Line 657, Address: 0x3ee9fc, Func Offset: 0x85c
	// Line 814, Address: 0x3eea08, Func Offset: 0x868
	// Line 698, Address: 0x3eea0c, Func Offset: 0x86c
	// Line 814, Address: 0x3eea14, Func Offset: 0x874
	// Line 726, Address: 0x3eea38, Func Offset: 0x898
	// Line 814, Address: 0x3eea44, Func Offset: 0x8a4
	// Line 729, Address: 0x3eea54, Func Offset: 0x8b4
	// Line 759, Address: 0x3eea5c, Func Offset: 0x8bc
	// Line 814, Address: 0x3eea60, Func Offset: 0x8c0
	// Line 759, Address: 0x3eea64, Func Offset: 0x8c4
	// Line 814, Address: 0x3eea68, Func Offset: 0x8c8
	// Line 759, Address: 0x3eea6c, Func Offset: 0x8cc
	// Line 814, Address: 0x3eea70, Func Offset: 0x8d0
	// Line 759, Address: 0x3eea74, Func Offset: 0x8d4
	// Line 814, Address: 0x3eea78, Func Offset: 0x8d8
	// Line 773, Address: 0x3eea84, Func Offset: 0x8e4
	// Line 814, Address: 0x3eea90, Func Offset: 0x8f0
	// Line 779, Address: 0x3eeabc, Func Offset: 0x91c
	// Line 814, Address: 0x3eeac0, Func Offset: 0x920
	// Line 779, Address: 0x3eeac8, Func Offset: 0x928
	// Line 814, Address: 0x3eeacc, Func Offset: 0x92c
	// Line 779, Address: 0x3eead4, Func Offset: 0x934
	// Line 814, Address: 0x3eead8, Func Offset: 0x938
	// Line 780, Address: 0x3eeae0, Func Offset: 0x940
	// Line 814, Address: 0x3eeae4, Func Offset: 0x944
	// Line 780, Address: 0x3eeaec, Func Offset: 0x94c
	// Line 814, Address: 0x3eeaf0, Func Offset: 0x950
	// Line 780, Address: 0x3eeaf8, Func Offset: 0x958
	// Line 814, Address: 0x3eeafc, Func Offset: 0x95c
	// Line 781, Address: 0x3eeb04, Func Offset: 0x964
	// Line 814, Address: 0x3eeb08, Func Offset: 0x968
	// Line 781, Address: 0x3eeb10, Func Offset: 0x970
	// Line 814, Address: 0x3eeb14, Func Offset: 0x974
	// Line 781, Address: 0x3eeb1c, Func Offset: 0x97c
	// Line 785, Address: 0x3eeb20, Func Offset: 0x980
	// Line 814, Address: 0x3eeb28, Func Offset: 0x988
	// Line 787, Address: 0x3eeb44, Func Offset: 0x9a4
	// Line 814, Address: 0x3eeb48, Func Offset: 0x9a8
	// Line 787, Address: 0x3eeb58, Func Offset: 0x9b8
	// Line 814, Address: 0x3eeb64, Func Offset: 0x9c4
	// Line 787, Address: 0x3eeb70, Func Offset: 0x9d0
	// Line 814, Address: 0x3eeb7c, Func Offset: 0x9dc
	// Line 787, Address: 0x3eeb88, Func Offset: 0x9e8
	// Line 814, Address: 0x3eeb94, Func Offset: 0x9f4
	// Line 790, Address: 0x3eeba0, Func Offset: 0xa00
	// Line 814, Address: 0x3eeba4, Func Offset: 0xa04
	// Line 790, Address: 0x3eebb4, Func Offset: 0xa14
	// Line 814, Address: 0x3eebc8, Func Offset: 0xa28
	// Line 790, Address: 0x3eebd8, Func Offset: 0xa38
	// Line 814, Address: 0x3eebe4, Func Offset: 0xa44
	// Line 790, Address: 0x3eebe8, Func Offset: 0xa48
	// Line 814, Address: 0x3eebfc, Func Offset: 0xa5c
	// Line 790, Address: 0x3eec0c, Func Offset: 0xa6c
	// Line 814, Address: 0x3eec18, Func Offset: 0xa78
	// Line 790, Address: 0x3eec1c, Func Offset: 0xa7c
	// Line 814, Address: 0x3eec30, Func Offset: 0xa90
	// Line 790, Address: 0x3eec40, Func Offset: 0xaa0
	// Line 814, Address: 0x3eec4c, Func Offset: 0xaac
	// Line 790, Address: 0x3eec50, Func Offset: 0xab0
	// Line 814, Address: 0x3eec68, Func Offset: 0xac8
	// Line 790, Address: 0x3eec6c, Func Offset: 0xacc
	// Line 814, Address: 0x3eec70, Func Offset: 0xad0
	// Line 797, Address: 0x3eec88, Func Offset: 0xae8
	// Line 814, Address: 0x3eeca0, Func Offset: 0xb00
	// Line 797, Address: 0x3eeca8, Func Offset: 0xb08
	// Line 814, Address: 0x3eecb4, Func Offset: 0xb14
	// Line 797, Address: 0x3eecb8, Func Offset: 0xb18
	// Line 814, Address: 0x3eecbc, Func Offset: 0xb1c
	// Line 801, Address: 0x3eecd4, Func Offset: 0xb34
	// Line 814, Address: 0x3eecd8, Func Offset: 0xb38
	// Line 801, Address: 0x3eece0, Func Offset: 0xb40
	// Line 814, Address: 0x3eece4, Func Offset: 0xb44
	// Line 801, Address: 0x3eecec, Func Offset: 0xb4c
	// Line 814, Address: 0x3eecf0, Func Offset: 0xb50
	// Line 802, Address: 0x3eecf8, Func Offset: 0xb58
	// Line 814, Address: 0x3eecfc, Func Offset: 0xb5c
	// Line 802, Address: 0x3eed04, Func Offset: 0xb64
	// Line 814, Address: 0x3eed08, Func Offset: 0xb68
	// Line 802, Address: 0x3eed10, Func Offset: 0xb70
	// Line 814, Address: 0x3eed14, Func Offset: 0xb74
	// Line 803, Address: 0x3eed1c, Func Offset: 0xb7c
	// Line 814, Address: 0x3eed20, Func Offset: 0xb80
	// Line 803, Address: 0x3eed28, Func Offset: 0xb88
	// Line 814, Address: 0x3eed2c, Func Offset: 0xb8c
	// Line 803, Address: 0x3eed34, Func Offset: 0xb94
	// Line 814, Address: 0x3eed38, Func Offset: 0xb98
	// Line 804, Address: 0x3eed40, Func Offset: 0xba0
	// Line 814, Address: 0x3eed4c, Func Offset: 0xbac
	// Func End, Address: 0x3eed84, Func Offset: 0xbe4
}

// xEntMPGetNext__FP10xEntMotionP10xMovePointP6xScene
// Start address: 0x3eed90
void xEntMPGetNext(xEntMotion* motion, xMovePoint* prev)
{
	xEntMPData* mp;
	xVec3 tempdir;
	xMat3x3 mat;
	// Line 563, Address: 0x3eed90, Func Offset: 0
	// Line 569, Address: 0x3eed98, Func Offset: 0x8
	// Line 563, Address: 0x3eed9c, Func Offset: 0xc
	// Line 566, Address: 0x3eeda8, Func Offset: 0x18
	// Line 564, Address: 0x3eedac, Func Offset: 0x1c
	// Line 567, Address: 0x3eedb0, Func Offset: 0x20
	// Line 569, Address: 0x3eedb4, Func Offset: 0x24
	// Line 570, Address: 0x3eedc8, Func Offset: 0x38
	// Line 575, Address: 0x3eedd4, Func Offset: 0x44
	// Line 581, Address: 0x3eeddc, Func Offset: 0x4c
	// Line 599, Address: 0x3eedf8, Func Offset: 0x68
	// Line 600, Address: 0x3eee00, Func Offset: 0x70
	// Line 601, Address: 0x3eee08, Func Offset: 0x78
	// Line 602, Address: 0x3eee18, Func Offset: 0x88
	// Line 603, Address: 0x3eee28, Func Offset: 0x98
	// Line 572, Address: 0x3eee44, Func Offset: 0xb4
	// Line 573, Address: 0x3eee48, Func Offset: 0xb8
	// Line 603, Address: 0x3eee50, Func Offset: 0xc0
	// Line 577, Address: 0x3eee54, Func Offset: 0xc4
	// Line 578, Address: 0x3eee58, Func Offset: 0xc8
	// Line 603, Address: 0x3eee60, Func Offset: 0xd0
	// Line 591, Address: 0x3eee88, Func Offset: 0xf8
	// Line 603, Address: 0x3eee94, Func Offset: 0x104
	// Line 594, Address: 0x3eeea4, Func Offset: 0x114
	// Line 603, Address: 0x3eeea8, Func Offset: 0x118
	// Line 604, Address: 0x3eeeb8, Func Offset: 0x128
	// Line 606, Address: 0x3eeedc, Func Offset: 0x14c
	// Func End, Address: 0x3eeef0, Func Offset: 0x160
}

// xEntOrbitMove__FP10xEntMotionP6xScenefP9xEntFrame
// Start address: 0x3eeef0
void xEntOrbitMove(xEntMotion* motion, float32 dt, xEntFrame* frame)
{
	float32 th;
	float32 u;
	float32 newt;
	float32 rem;
	// Line 527, Address: 0x3eeef0, Func Offset: 0
	// Line 532, Address: 0x3eeef4, Func Offset: 0x4
	// Line 527, Address: 0x3eeef8, Func Offset: 0x8
	// Line 532, Address: 0x3eeefc, Func Offset: 0xc
	// Line 527, Address: 0x3eef00, Func Offset: 0x10
	// Line 532, Address: 0x3eef1c, Func Offset: 0x2c
	// Line 527, Address: 0x3eef20, Func Offset: 0x30
	// Line 534, Address: 0x3eef24, Func Offset: 0x34
	// Line 532, Address: 0x3eef28, Func Offset: 0x38
	// Line 534, Address: 0x3eef2c, Func Offset: 0x3c
	// Line 535, Address: 0x3eef30, Func Offset: 0x40
	// Line 537, Address: 0x3eef3c, Func Offset: 0x4c
	// Line 535, Address: 0x3eef44, Func Offset: 0x54
	// Line 538, Address: 0x3eef48, Func Offset: 0x58
	// Line 537, Address: 0x3eef50, Func Offset: 0x60
	// Line 538, Address: 0x3eef54, Func Offset: 0x64
	// Line 542, Address: 0x3eef60, Func Offset: 0x70
	// Line 544, Address: 0x3eef64, Func Offset: 0x74
	// Line 545, Address: 0x3eef84, Func Offset: 0x94
	// Line 552, Address: 0x3eefb4, Func Offset: 0xc4
	// Line 559, Address: 0x3eefb8, Func Offset: 0xc8
	// Line 547, Address: 0x3eefd0, Func Offset: 0xe0
	// Line 559, Address: 0x3eefd8, Func Offset: 0xe8
	// Line 547, Address: 0x3eefdc, Func Offset: 0xec
	// Line 559, Address: 0x3eefe8, Func Offset: 0xf8
	// Line 549, Address: 0x3eefec, Func Offset: 0xfc
	// Line 559, Address: 0x3eeff0, Func Offset: 0x100
	// Line 549, Address: 0x3eeff8, Func Offset: 0x108
	// Line 559, Address: 0x3ef000, Func Offset: 0x110
	// Line 549, Address: 0x3ef004, Func Offset: 0x114
	// Line 559, Address: 0x3ef018, Func Offset: 0x128
	// Func End, Address: 0x3ef038, Func Offset: 0x148
}

// xEntERMove__FP10xEntMotionP6xScenefP9xEntFrame
// Start address: 0x3ef040
void xEntERMove(xEntMotion* motion, float32 dt, xEntFrame* frame)
{
	float32 newt;
	float32 rem;
	float32 scale;
	float32 rem;
	float32 scale;
	// Line 481, Address: 0x3ef040, Func Offset: 0
	// Line 482, Address: 0x3ef048, Func Offset: 0x8
	// Line 481, Address: 0x3ef050, Func Offset: 0x10
	// Line 482, Address: 0x3ef054, Func Offset: 0x14
	// Line 486, Address: 0x3ef068, Func Offset: 0x28
	// Line 502, Address: 0x3ef084, Func Offset: 0x44
	// Line 505, Address: 0x3ef0bc, Func Offset: 0x7c
	// Line 506, Address: 0x3ef0f8, Func Offset: 0xb8
	// Line 508, Address: 0x3ef104, Func Offset: 0xc4
	// Line 510, Address: 0x3ef11c, Func Offset: 0xdc
	// Line 508, Address: 0x3ef120, Func Offset: 0xe0
	// Line 510, Address: 0x3ef130, Func Offset: 0xf0
	// Line 512, Address: 0x3ef138, Func Offset: 0xf8
	// Line 513, Address: 0x3ef164, Func Offset: 0x124
	// Line 514, Address: 0x3ef16c, Func Offset: 0x12c
	// Line 515, Address: 0x3ef19c, Func Offset: 0x15c
	// Line 517, Address: 0x3ef1c0, Func Offset: 0x180
	// Line 521, Address: 0x3ef1c8, Func Offset: 0x188
	// Line 522, Address: 0x3ef1f0, Func Offset: 0x1b0
	// Line 524, Address: 0x3ef1f8, Func Offset: 0x1b8
	// Line 487, Address: 0x3ef210, Func Offset: 0x1d0
	// Line 489, Address: 0x3ef214, Func Offset: 0x1d4
	// Line 524, Address: 0x3ef218, Func Offset: 0x1d8
	// Line 489, Address: 0x3ef220, Func Offset: 0x1e0
	// Line 491, Address: 0x3ef22c, Func Offset: 0x1ec
	// Line 489, Address: 0x3ef230, Func Offset: 0x1f0
	// Line 524, Address: 0x3ef240, Func Offset: 0x200
	// Line 493, Address: 0x3ef250, Func Offset: 0x210
	// Line 524, Address: 0x3ef254, Func Offset: 0x214
	// Line 493, Address: 0x3ef260, Func Offset: 0x220
	// Line 524, Address: 0x3ef264, Func Offset: 0x224
	// Line 493, Address: 0x3ef270, Func Offset: 0x230
	// Line 494, Address: 0x3ef274, Func Offset: 0x234
	// Line 524, Address: 0x3ef27c, Func Offset: 0x23c
	// Line 495, Address: 0x3ef284, Func Offset: 0x244
	// Line 524, Address: 0x3ef288, Func Offset: 0x248
	// Line 495, Address: 0x3ef294, Func Offset: 0x254
	// Line 524, Address: 0x3ef298, Func Offset: 0x258
	// Line 495, Address: 0x3ef2a4, Func Offset: 0x264
	// Line 524, Address: 0x3ef2a8, Func Offset: 0x268
	// Line 496, Address: 0x3ef2b0, Func Offset: 0x270
	// Line 524, Address: 0x3ef2b4, Func Offset: 0x274
	// Line 496, Address: 0x3ef2bc, Func Offset: 0x27c
	// Line 524, Address: 0x3ef2c0, Func Offset: 0x280
	// Line 496, Address: 0x3ef2c8, Func Offset: 0x288
	// Line 524, Address: 0x3ef2cc, Func Offset: 0x28c
	// Line 498, Address: 0x3ef2d0, Func Offset: 0x290
	// Line 524, Address: 0x3ef2d4, Func Offset: 0x294
	// Line 502, Address: 0x3ef2d8, Func Offset: 0x298
	// Line 503, Address: 0x3ef2e0, Func Offset: 0x2a0
	// Line 505, Address: 0x3ef2e4, Func Offset: 0x2a4
	// Line 524, Address: 0x3ef2ec, Func Offset: 0x2ac
	// Func End, Address: 0x3ef2f4, Func Offset: 0x2b4
}

// xEntMotionMove__FP10xEntMotionP6xScenefP9xEntFrame
// Start address: 0x3ef300
void xEntMotionMove(xEntMotion* motion, xScene* sc, float32 dt, xEntFrame* frame)
{
	// Line 438, Address: 0x3ef300, Func Offset: 0
	// Line 442, Address: 0x3ef314, Func Offset: 0x14
	// Line 446, Address: 0x3ef328, Func Offset: 0x28
	// Line 449, Address: 0x3ef330, Func Offset: 0x30
	// Line 452, Address: 0x3ef33c, Func Offset: 0x3c
	// Line 455, Address: 0x3ef348, Func Offset: 0x48
	// Line 458, Address: 0x3ef354, Func Offset: 0x54
	// Line 461, Address: 0x3ef360, Func Offset: 0x60
	// Line 463, Address: 0x3ef36c, Func Offset: 0x6c
	// Line 467, Address: 0x3ef378, Func Offset: 0x78
	// Line 470, Address: 0x3ef37c, Func Offset: 0x7c
	// Line 471, Address: 0x3ef384, Func Offset: 0x84
	// Line 449, Address: 0x3ef394, Func Offset: 0x94
	// Line 471, Address: 0x3ef39c, Func Offset: 0x9c
	// Line 452, Address: 0x3ef3a4, Func Offset: 0xa4
	// Line 471, Address: 0x3ef3ac, Func Offset: 0xac
	// Line 455, Address: 0x3ef3b4, Func Offset: 0xb4
	// Line 471, Address: 0x3ef3bc, Func Offset: 0xbc
	// Line 458, Address: 0x3ef3c4, Func Offset: 0xc4
	// Line 471, Address: 0x3ef3cc, Func Offset: 0xcc
	// Line 461, Address: 0x3ef3d4, Func Offset: 0xd4
	// Line 471, Address: 0x3ef3dc, Func Offset: 0xdc
	// Line 463, Address: 0x3ef3e4, Func Offset: 0xe4
	// Line 471, Address: 0x3ef3ec, Func Offset: 0xec
	// Func End, Address: 0x3ef400, Func Offset: 0x100
}

// xEntMotionReset__FP10xEntMotionP6xScene
// Start address: 0x3ef400
void xEntMotionReset(xEntMotion* motion, xScene* sc)
{
	xEntMotionPenData* aspen;
	float32 dangle;
	xMat3x3 pshrot;
	xVec3 totop;
	xVec3 pshtotop;
	xVec3 pshdelta;
	xMat3x3* modlrot;
	xVec3* modlpos;
	xEnt* ownr;
	xEntMotionMechData* mkasst;
	xEntMechData* mech;
	float32 scale;
	float32 model_scale;
	float32 asset_scale;
	float32 drot;
	// Line 251, Address: 0x3ef400, Func Offset: 0
	// Line 255, Address: 0x3ef40c, Func Offset: 0xc
	// Line 251, Address: 0x3ef410, Func Offset: 0x10
	// Line 254, Address: 0x3ef430, Func Offset: 0x30
	// Line 255, Address: 0x3ef43c, Func Offset: 0x3c
	// Line 257, Address: 0x3ef440, Func Offset: 0x40
	// Line 258, Address: 0x3ef448, Func Offset: 0x48
	// Line 259, Address: 0x3ef450, Func Offset: 0x50
	// Line 260, Address: 0x3ef454, Func Offset: 0x54
	// Line 261, Address: 0x3ef474, Func Offset: 0x74
	// Line 263, Address: 0x3ef4a0, Func Offset: 0xa0
	// Line 264, Address: 0x3ef4b0, Func Offset: 0xb0
	// Line 265, Address: 0x3ef4c4, Func Offset: 0xc4
	// Line 266, Address: 0x3ef4d4, Func Offset: 0xd4
	// Line 268, Address: 0x3ef4f8, Func Offset: 0xf8
	// Line 271, Address: 0x3ef508, Func Offset: 0x108
	// Line 273, Address: 0x3ef534, Func Offset: 0x134
	// Line 274, Address: 0x3ef548, Func Offset: 0x148
	// Line 275, Address: 0x3ef554, Func Offset: 0x154
	// Line 276, Address: 0x3ef560, Func Offset: 0x160
	// Line 277, Address: 0x3ef564, Func Offset: 0x164
	// Line 278, Address: 0x3ef568, Func Offset: 0x168
	// Line 279, Address: 0x3ef570, Func Offset: 0x170
	// Line 280, Address: 0x3ef578, Func Offset: 0x178
	// Line 282, Address: 0x3ef580, Func Offset: 0x180
	// Line 283, Address: 0x3ef590, Func Offset: 0x190
	// Line 285, Address: 0x3ef5b0, Func Offset: 0x1b0
	// Line 286, Address: 0x3ef5c0, Func Offset: 0x1c0
	// Line 293, Address: 0x3ef5cc, Func Offset: 0x1cc
	// Line 286, Address: 0x3ef5d0, Func Offset: 0x1d0
	// Line 296, Address: 0x3ef5d8, Func Offset: 0x1d8
	// Line 303, Address: 0x3ef5e4, Func Offset: 0x1e4
	// Line 306, Address: 0x3ef5fc, Func Offset: 0x1fc
	// Line 305, Address: 0x3ef600, Func Offset: 0x200
	// Line 307, Address: 0x3ef604, Func Offset: 0x204
	// Line 310, Address: 0x3ef608, Func Offset: 0x208
	// Line 306, Address: 0x3ef614, Func Offset: 0x214
	// Line 310, Address: 0x3ef618, Func Offset: 0x218
	// Line 313, Address: 0x3ef660, Func Offset: 0x260
	// Line 316, Address: 0x3ef66c, Func Offset: 0x26c
	// Line 313, Address: 0x3ef670, Func Offset: 0x270
	// Line 316, Address: 0x3ef674, Func Offset: 0x274
	// Line 313, Address: 0x3ef678, Func Offset: 0x278
	// Line 316, Address: 0x3ef69c, Func Offset: 0x29c
	// Line 319, Address: 0x3ef6a4, Func Offset: 0x2a4
	// Line 328, Address: 0x3ef6a8, Func Offset: 0x2a8
	// Line 319, Address: 0x3ef6ac, Func Offset: 0x2ac
	// Line 326, Address: 0x3ef6b8, Func Offset: 0x2b8
	// Line 319, Address: 0x3ef6c4, Func Offset: 0x2c4
	// Line 326, Address: 0x3ef6e4, Func Offset: 0x2e4
	// Line 328, Address: 0x3ef708, Func Offset: 0x308
	// Line 330, Address: 0x3ef728, Func Offset: 0x328
	// Line 332, Address: 0x3ef73c, Func Offset: 0x33c
	// Line 333, Address: 0x3ef740, Func Offset: 0x340
	// Line 331, Address: 0x3ef744, Func Offset: 0x344
	// Line 335, Address: 0x3ef748, Func Offset: 0x348
	// Line 339, Address: 0x3ef750, Func Offset: 0x350
	// Line 343, Address: 0x3ef760, Func Offset: 0x360
	// Line 347, Address: 0x3ef768, Func Offset: 0x368
	// Line 348, Address: 0x3ef788, Func Offset: 0x388
	// Line 349, Address: 0x3ef790, Func Offset: 0x390
	// Line 350, Address: 0x3ef7ac, Func Offset: 0x3ac
	// Line 351, Address: 0x3ef7bc, Func Offset: 0x3bc
	// Line 352, Address: 0x3ef7d8, Func Offset: 0x3d8
	// Line 353, Address: 0x3ef7e0, Func Offset: 0x3e0
	// Line 359, Address: 0x3ef800, Func Offset: 0x400
	// Line 356, Address: 0x3ef804, Func Offset: 0x404
	// Line 359, Address: 0x3ef80c, Func Offset: 0x40c
	// Line 357, Address: 0x3ef810, Func Offset: 0x410
	// Line 359, Address: 0x3ef814, Func Offset: 0x414
	// Line 363, Address: 0x3ef83c, Func Offset: 0x43c
	// Line 359, Address: 0x3ef840, Func Offset: 0x440
	// Line 363, Address: 0x3ef848, Func Offset: 0x448
	// Line 364, Address: 0x3ef864, Func Offset: 0x464
	// Line 363, Address: 0x3ef868, Func Offset: 0x468
	// Line 364, Address: 0x3ef86c, Func Offset: 0x46c
	// Line 365, Address: 0x3ef884, Func Offset: 0x484
	// Line 369, Address: 0x3ef890, Func Offset: 0x490
	// Line 365, Address: 0x3ef894, Func Offset: 0x494
	// Line 369, Address: 0x3ef89c, Func Offset: 0x49c
	// Line 370, Address: 0x3ef8b8, Func Offset: 0x4b8
	// Line 369, Address: 0x3ef8bc, Func Offset: 0x4bc
	// Line 370, Address: 0x3ef8c0, Func Offset: 0x4c0
	// Line 371, Address: 0x3ef8d8, Func Offset: 0x4d8
	// Line 375, Address: 0x3ef8e4, Func Offset: 0x4e4
	// Line 371, Address: 0x3ef8e8, Func Offset: 0x4e8
	// Line 375, Address: 0x3ef8f0, Func Offset: 0x4f0
	// Line 376, Address: 0x3ef90c, Func Offset: 0x50c
	// Line 375, Address: 0x3ef910, Func Offset: 0x510
	// Line 376, Address: 0x3ef914, Func Offset: 0x514
	// Line 385, Address: 0x3ef92c, Func Offset: 0x52c
	// Line 392, Address: 0x3ef930, Func Offset: 0x530
	// Line 385, Address: 0x3ef934, Func Offset: 0x534
	// Line 388, Address: 0x3ef938, Func Offset: 0x538
	// Line 392, Address: 0x3ef940, Func Offset: 0x540
	// Line 388, Address: 0x3ef94c, Func Offset: 0x54c
	// Line 390, Address: 0x3ef970, Func Offset: 0x570
	// Line 392, Address: 0x3ef9a0, Func Offset: 0x5a0
	// Line 395, Address: 0x3ef9c4, Func Offset: 0x5c4
	// Line 396, Address: 0x3ef9d4, Func Offset: 0x5d4
	// Line 398, Address: 0x3ef9e8, Func Offset: 0x5e8
	// Line 400, Address: 0x3ef9f0, Func Offset: 0x5f0
	// Line 401, Address: 0x3ef9f8, Func Offset: 0x5f8
	// Line 403, Address: 0x3efa08, Func Offset: 0x608
	// Line 404, Address: 0x3efa10, Func Offset: 0x610
	// Line 405, Address: 0x3efa18, Func Offset: 0x618
	// Line 407, Address: 0x3efa24, Func Offset: 0x624
	// Line 409, Address: 0x3efa28, Func Offset: 0x628
	// Line 407, Address: 0x3efa34, Func Offset: 0x634
	// Line 409, Address: 0x3efa3c, Func Offset: 0x63c
	// Line 412, Address: 0x3efa40, Func Offset: 0x640
	// Line 409, Address: 0x3efa44, Func Offset: 0x644
	// Line 412, Address: 0x3efa48, Func Offset: 0x648
	// Line 414, Address: 0x3efa54, Func Offset: 0x654
	// Line 417, Address: 0x3efa84, Func Offset: 0x684
	// Line 418, Address: 0x3efa94, Func Offset: 0x694
	// Line 422, Address: 0x3efaa8, Func Offset: 0x6a8
	// Line 427, Address: 0x3efabc, Func Offset: 0x6bc
	// Line 429, Address: 0x3efad4, Func Offset: 0x6d4
	// Line 430, Address: 0x3efad8, Func Offset: 0x6d8
	// Line 431, Address: 0x3efae0, Func Offset: 0x6e0
	// Line 433, Address: 0x3efae4, Func Offset: 0x6e4
	// Line 435, Address: 0x3efae8, Func Offset: 0x6e8
	// Func End, Address: 0x3efb0c, Func Offset: 0x70c
}

// xEntMotionSetup__FP10xEntMotionP6xScene
// Start address: 0x3efb10
void xEntMotionSetup(xEntMotion* motion)
{
	xModelInstance* model;
	// Line 193, Address: 0x3efb10, Func Offset: 0
	// Line 197, Address: 0x3efb14, Func Offset: 0x4
	// Line 193, Address: 0x3efb18, Func Offset: 0x8
	// Line 197, Address: 0x3efb1c, Func Offset: 0xc
	// Line 193, Address: 0x3efb20, Func Offset: 0x10
	// Line 197, Address: 0x3efb28, Func Offset: 0x18
	// Line 204, Address: 0x3efb30, Func Offset: 0x20
	// Line 209, Address: 0x3efb38, Func Offset: 0x28
	// Line 212, Address: 0x3efb44, Func Offset: 0x34
	// Line 219, Address: 0x3efb50, Func Offset: 0x40
	// Line 223, Address: 0x3efb5c, Func Offset: 0x4c
	// Line 226, Address: 0x3efb68, Func Offset: 0x58
	// Line 228, Address: 0x3efb7c, Func Offset: 0x6c
	// Line 229, Address: 0x3efb8c, Func Offset: 0x7c
	// Line 233, Address: 0x3efb90, Func Offset: 0x80
	// Line 229, Address: 0x3efb94, Func Offset: 0x84
	// Line 233, Address: 0x3efb98, Func Offset: 0x88
	// Line 237, Address: 0x3efba8, Func Offset: 0x98
	// Line 248, Address: 0x3efc5c, Func Offset: 0x14c
	// Line 205, Address: 0x3efc6c, Func Offset: 0x15c
	// Line 248, Address: 0x3efc70, Func Offset: 0x160
	// Line 206, Address: 0x3efc78, Func Offset: 0x168
	// Line 248, Address: 0x3efc7c, Func Offset: 0x16c
	// Line 207, Address: 0x3efc84, Func Offset: 0x174
	// Line 209, Address: 0x3efc88, Func Offset: 0x178
	// Line 248, Address: 0x3efc90, Func Offset: 0x180
	// Line 223, Address: 0x3efcac, Func Offset: 0x19c
	// Line 248, Address: 0x3efcb4, Func Offset: 0x1a4
	// Func End, Address: 0x3efcd4, Func Offset: 0x1c4
}

// xEntMotionInit__FP10xEntMotionP4xEntP15xEntMotionAsset
// Start address: 0x3efce0
void xEntMotionInit(xEntMotion* motion, xEnt* owner, xEntMotionAsset* asset)
{
	xEntMotionMechData* mkasst;
	// Line 72, Address: 0x3efce0, Func Offset: 0
	// Line 73, Address: 0x3efce4, Func Offset: 0x4
	// Line 74, Address: 0x3efcec, Func Offset: 0xc
	// Line 76, Address: 0x3efcf8, Func Offset: 0x18
	// Line 88, Address: 0x3efd00, Func Offset: 0x20
	// Line 99, Address: 0x3efd08, Func Offset: 0x28
	// Line 102, Address: 0x3efd14, Func Offset: 0x34
	// Line 105, Address: 0x3efd1c, Func Offset: 0x3c
	// Line 117, Address: 0x3efd28, Func Offset: 0x48
	// Line 120, Address: 0x3efd30, Func Offset: 0x50
	// Line 126, Address: 0x3efd50, Func Offset: 0x70
	// Line 120, Address: 0x3efd58, Func Offset: 0x78
	// Line 126, Address: 0x3efd5c, Func Offset: 0x7c
	// Line 133, Address: 0x3efd6c, Func Offset: 0x8c
	// Line 140, Address: 0x3efd8c, Func Offset: 0xac
	// Line 147, Address: 0x3efdac, Func Offset: 0xcc
	// Line 148, Address: 0x3efdc0, Func Offset: 0xe0
	// Line 152, Address: 0x3efdd0, Func Offset: 0xf0
	// Line 155, Address: 0x3efdd4, Func Offset: 0xf4
	// Line 156, Address: 0x3efde4, Func Offset: 0x104
	// Line 160, Address: 0x3efdf8, Func Offset: 0x118
	// Line 163, Address: 0x3efe00, Func Offset: 0x120
	// Line 160, Address: 0x3efe08, Func Offset: 0x128
	// Line 163, Address: 0x3efe0c, Func Offset: 0x12c
	// Line 165, Address: 0x3efe1c, Func Offset: 0x13c
	// Line 177, Address: 0x3efe30, Func Offset: 0x150
	// Line 183, Address: 0x3efe34, Func Offset: 0x154
	// Line 84, Address: 0x3efe40, Func Offset: 0x160
	// Line 183, Address: 0x3efe48, Func Offset: 0x168
	// Line 78, Address: 0x3efe64, Func Offset: 0x184
	// Line 183, Address: 0x3efe68, Func Offset: 0x188
	// Line 78, Address: 0x3efe74, Func Offset: 0x194
	// Line 183, Address: 0x3efe78, Func Offset: 0x198
	// Line 78, Address: 0x3efe84, Func Offset: 0x1a4
	// Line 183, Address: 0x3efe88, Func Offset: 0x1a8
	// Line 84, Address: 0x3efeb0, Func Offset: 0x1d0
	// Line 183, Address: 0x3efeb4, Func Offset: 0x1d4
	// Line 88, Address: 0x3efebc, Func Offset: 0x1dc
	// Line 183, Address: 0x3efec4, Func Offset: 0x1e4
	// Line 92, Address: 0x3efec8, Func Offset: 0x1e8
	// Line 183, Address: 0x3efed8, Func Offset: 0x1f8
	// Line 92, Address: 0x3eff00, Func Offset: 0x220
	// Line 183, Address: 0x3eff04, Func Offset: 0x224
	// Line 97, Address: 0x3eff14, Func Offset: 0x234
	// Line 183, Address: 0x3eff24, Func Offset: 0x244
	// Line 97, Address: 0x3eff2c, Func Offset: 0x24c
	// Line 99, Address: 0x3eff38, Func Offset: 0x258
	// Line 183, Address: 0x3eff40, Func Offset: 0x260
	// Line 109, Address: 0x3eff44, Func Offset: 0x264
	// Line 183, Address: 0x3eff58, Func Offset: 0x278
	// Line 115, Address: 0x3eff68, Func Offset: 0x288
	// Line 117, Address: 0x3eff84, Func Offset: 0x2a4
	// Line 124, Address: 0x3eff8c, Func Offset: 0x2ac
	// Line 130, Address: 0x3eff98, Func Offset: 0x2b8
	// Line 183, Address: 0x3effa4, Func Offset: 0x2c4
	// Func End, Address: 0x3effc8, Func Offset: 0x2e8
}

