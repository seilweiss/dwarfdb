



uint32 xSceneNearestFloorPoly(xScene* sc, xNearFloorPoly* nfpoly, uint8 collType, uint8 chk);
int32 gridNearestFloorCB(xEnt* ent, void* cbdata);
RpCollisionTriangle* sectorNearestFloorCB(RpIntersection* intersection, RpCollisionTriangle* collTriangle, float32 distance, void* data);
RpCollisionTriangle* boxNearestFloorCB(RpIntersection* intersection, RpCollisionTriangle* collTriangle, float32 distance, void* data);
RpCollisionTriangle* nearestFloorCB(RpCollisionTriangle* collTriangle, void* data);
uint32 Mgc_TriBoxTest(xVec3* apkTri, xBox* rkBox);
void xRayHitsSceneFlags(xScene* sc, xRay3* r, xCollis* coll, uint8 collType, uint8 chk);
void xRayHitsScene(xScene* sc, xRay3* r, xCollis* coll);
void xRayHitsTikiLandableScene(xScene* sc, xRay3* r, xCollis* coll);
void xRayHitsEnt(xRay3* r, xQCData* qcr, xEnt* ent, void* colldata);
void xRayHitsTikiLandableEnt(xRay3* r, xQCData* qcr, xEnt* ent, void* colldata);
void xRayHitsGrid(xGrid* grid, xScene* sc, xRay3* r, void(*rentcb)(xScene*, xRay3*, xQCData*, xEnt*, void*), xQCData* qcr, void* data);
void xSceneForAllNPCs(xScene* sc, xEnt*(*func)(xEnt*, xScene*, void*), void* data);
void xSceneForAllDynamics(xScene* sc, xEnt*(*func)(xEnt*, xScene*, void*), void* data);
void xSceneForAllStatics(xScene* sc, xEnt*(*func)(xEnt*, xScene*, void*), void* data);
void xSceneForAllEnts(xScene* sc, xEnt*(*func)(xEnt*, xScene*, void*), void* data);
xBase* xSceneResolvID(xScene* sc, uint32 id);
void xSceneAddEnt(xScene* sc, xEnt* ent);
void xSceneSetup(xScene* sc);
void xSceneLoad();
void xSceneSave();
void xSceneExit();
void xSceneInit(xScene* sc, uint16 num_trigs, uint16 num_stats, uint16 num_dyns, uint16 num_npcs);

// xSceneNearestFloorPoly__FP6xSceneP14xNearFloorPolyUcUc
// Start address: 0x399ec0
uint32 xSceneNearestFloorPoly(xScene* sc, xNearFloorPoly* nfpoly, uint8 collType, uint8 chk)
{
	RpIntersection isx;
	int32 i;
	float32 test_dist;
	// Line 1523, Address: 0x399ec0, Func Offset: 0
	// Line 1530, Address: 0x399ec4, Func Offset: 0x4
	// Line 1523, Address: 0x399ec8, Func Offset: 0x8
	// Line 1531, Address: 0x399ecc, Func Offset: 0xc
	// Line 1523, Address: 0x399ed0, Func Offset: 0x10
	// Line 1532, Address: 0x399ed4, Func Offset: 0x14
	// Line 1523, Address: 0x399ed8, Func Offset: 0x18
	// Line 1531, Address: 0x399edc, Func Offset: 0x1c
	// Line 1523, Address: 0x399ee0, Func Offset: 0x20
	// Line 1531, Address: 0x399ee4, Func Offset: 0x24
	// Line 1523, Address: 0x399ee8, Func Offset: 0x28
	// Line 1530, Address: 0x399ef4, Func Offset: 0x34
	// Line 1532, Address: 0x399efc, Func Offset: 0x3c
	// Line 1531, Address: 0x399f00, Func Offset: 0x40
	// Line 1532, Address: 0x399f04, Func Offset: 0x44
	// Line 1531, Address: 0x399f08, Func Offset: 0x48
	// Line 1532, Address: 0x399f0c, Func Offset: 0x4c
	// Line 1531, Address: 0x399f10, Func Offset: 0x50
	// Line 1532, Address: 0x399f14, Func Offset: 0x54
	// Line 1531, Address: 0x399f1c, Func Offset: 0x5c
	// Line 1532, Address: 0x399f28, Func Offset: 0x68
	// Line 1531, Address: 0x399f3c, Func Offset: 0x7c
	// Line 1532, Address: 0x399f44, Func Offset: 0x84
	// Line 1531, Address: 0x399f48, Func Offset: 0x88
	// Line 1532, Address: 0x399f50, Func Offset: 0x90
	// Line 1531, Address: 0x399f54, Func Offset: 0x94
	// Line 1532, Address: 0x399f5c, Func Offset: 0x9c
	// Line 1533, Address: 0x399f98, Func Offset: 0xd8
	// Line 1531, Address: 0x399f9c, Func Offset: 0xdc
	// Line 1533, Address: 0x399fa8, Func Offset: 0xe8
	// Line 1542, Address: 0x39a2d4, Func Offset: 0x414
	// Line 1541, Address: 0x39a2d8, Func Offset: 0x418
	// Line 1533, Address: 0x39a2dc, Func Offset: 0x41c
	// Line 1541, Address: 0x39a2e0, Func Offset: 0x420
	// Line 1540, Address: 0x39a2e4, Func Offset: 0x424
	// Line 1541, Address: 0x39a2ec, Func Offset: 0x42c
	// Line 1542, Address: 0x39a2f8, Func Offset: 0x438
	// Line 1541, Address: 0x39a2fc, Func Offset: 0x43c
	// Line 1545, Address: 0x39a314, Func Offset: 0x454
	// Line 1542, Address: 0x39a318, Func Offset: 0x458
	// Line 1541, Address: 0x39a320, Func Offset: 0x460
	// Line 1542, Address: 0x39a324, Func Offset: 0x464
	// Line 1546, Address: 0x39a344, Func Offset: 0x484
	// Line 1545, Address: 0x39a348, Func Offset: 0x488
	// Line 1546, Address: 0x39a34c, Func Offset: 0x48c
	// Line 1545, Address: 0x39a350, Func Offset: 0x490
	// Line 1546, Address: 0x39a358, Func Offset: 0x498
	// Line 1542, Address: 0x39a364, Func Offset: 0x4a4
	// Line 1546, Address: 0x39a368, Func Offset: 0x4a8
	// Line 1549, Address: 0x39a374, Func Offset: 0x4b4
	// Line 1552, Address: 0x39a37c, Func Offset: 0x4bc
	// Line 1553, Address: 0x39a388, Func Offset: 0x4c8
	// Line 1549, Address: 0x39a38c, Func Offset: 0x4cc
	// Line 1553, Address: 0x39a39c, Func Offset: 0x4dc
	// Line 1561, Address: 0x39a3a8, Func Offset: 0x4e8
	// Line 1553, Address: 0x39a3ac, Func Offset: 0x4ec
	// Line 1546, Address: 0x39a3b0, Func Offset: 0x4f0
	// Line 1549, Address: 0x39a3b4, Func Offset: 0x4f4
	// Line 1552, Address: 0x39a3cc, Func Offset: 0x50c
	// Line 1553, Address: 0x39a3d0, Func Offset: 0x510
	// Line 1556, Address: 0x39a3e8, Func Offset: 0x528
	// Line 1557, Address: 0x39a3ec, Func Offset: 0x52c
	// Line 1561, Address: 0x39a3f0, Func Offset: 0x530
	// Line 1573, Address: 0x39a3f8, Func Offset: 0x538
	// Line 1599, Address: 0x39a408, Func Offset: 0x548
	// Line 1602, Address: 0x39a424, Func Offset: 0x564
	// Line 1603, Address: 0x39a434, Func Offset: 0x574
	// Line 1569, Address: 0x39a4b0, Func Offset: 0x5f0
	// Line 1603, Address: 0x39a4b4, Func Offset: 0x5f4
	// Line 1579, Address: 0x39a4c8, Func Offset: 0x608
	// Line 1603, Address: 0x39a4cc, Func Offset: 0x60c
	// Line 1589, Address: 0x39a52c, Func Offset: 0x66c
	// Line 1603, Address: 0x39a530, Func Offset: 0x670
	// Line 1605, Address: 0x39a584, Func Offset: 0x6c4
	// Line 1606, Address: 0x39a588, Func Offset: 0x6c8
	// Line 1608, Address: 0x39a58c, Func Offset: 0x6cc
	// Func End, Address: 0x39a5ac, Func Offset: 0x6ec
}

// gridNearestFloorCB__FP4xEntPv
// Start address: 0x39a5b0
int32 gridNearestFloorCB(xEnt* ent, void* cbdata)
{
	xNearFloorPoly* nfpoly;
	xCollis tempC;
	// Line 1472, Address: 0x39a5b0, Func Offset: 0
	// Line 1473, Address: 0x39a5c4, Func Offset: 0x14
	// Line 1475, Address: 0x39a5c8, Func Offset: 0x18
	// Line 1481, Address: 0x39a5e8, Func Offset: 0x38
	// Line 1484, Address: 0x39a600, Func Offset: 0x50
	// Line 1485, Address: 0x39a618, Func Offset: 0x68
	// Line 1476, Address: 0x39a620, Func Offset: 0x70
	// Line 1482, Address: 0x39a628, Func Offset: 0x78
	// Line 1485, Address: 0x39a630, Func Offset: 0x80
	// Line 1487, Address: 0x39a634, Func Offset: 0x84
	// Line 1488, Address: 0x39a64c, Func Offset: 0x9c
	// Line 1494, Address: 0x39a654, Func Offset: 0xa4
	// Line 1495, Address: 0x39a668, Func Offset: 0xb8
	// Line 1498, Address: 0x39a678, Func Offset: 0xc8
	// Line 1500, Address: 0x39a688, Func Offset: 0xd8
	// Line 1501, Address: 0x39a690, Func Offset: 0xe0
	// Line 1505, Address: 0x39a6a8, Func Offset: 0xf8
	// Line 1507, Address: 0x39a6c0, Func Offset: 0x110
	// Line 1506, Address: 0x39a6d0, Func Offset: 0x120
	// Line 1507, Address: 0x39a6d8, Func Offset: 0x128
	// Line 1517, Address: 0x39a6e4, Func Offset: 0x134
	// Line 1518, Address: 0x39a6e8, Func Offset: 0x138
	// Func End, Address: 0x39a6fc, Func Offset: 0x14c
}

// sectorNearestFloorCB__FP14RpIntersectionP13RpWorldSectorP19RpCollisionTrianglefPv
// Start address: 0x39a700
RpCollisionTriangle* sectorNearestFloorCB(RpIntersection* intersection, RpCollisionTriangle* collTriangle, float32 distance, void* data)
{
	// Line 1468, Address: 0x39a700, Func Offset: 0
	// Func End, Address: 0x39a70c, Func Offset: 0xc
}

// boxNearestFloorCB__FP14RpIntersectionP19RpCollisionTrianglefPv
// Start address: 0x39a710
RpCollisionTriangle* boxNearestFloorCB(RpIntersection* intersection, RpCollisionTriangle* collTriangle, float32 distance, void* data)
{
	xNearFloorPoly* nfpoly;
	xVec3 xformVert[3];
	// Line 1431, Address: 0x39a710, Func Offset: 0
	// Line 1436, Address: 0x39a734, Func Offset: 0x24
	// Line 1437, Address: 0x39a744, Func Offset: 0x34
	// Line 1438, Address: 0x39a79c, Func Offset: 0x8c
	// Line 1439, Address: 0x39a7f8, Func Offset: 0xe8
	// Line 1440, Address: 0x39a850, Func Offset: 0x140
	// Line 1441, Address: 0x39a858, Func Offset: 0x148
	// Line 1442, Address: 0x39a874, Func Offset: 0x164
	// Line 1443, Address: 0x39a890, Func Offset: 0x180
	// Line 1447, Address: 0x39a8ac, Func Offset: 0x19c
	// Line 1454, Address: 0x39a8c0, Func Offset: 0x1b0
	// Line 1456, Address: 0x39a8d8, Func Offset: 0x1c8
	// Line 1457, Address: 0x39a8dc, Func Offset: 0x1cc
	// Func End, Address: 0x39a8f8, Func Offset: 0x1e8
}

// nearestFloorCB__FP14RpIntersectionP19RpCollisionTrianglefPv
// Start address: 0x39a900
RpCollisionTriangle* nearestFloorCB(RpCollisionTriangle* collTriangle, void* data)
{
	xNearFloorPoly* nfpoly;
	float32 currnear;
	xVec3 currpt;
	int32 currvert;
	int32 curredge;
	xVec3 xformVert[4];
	xVec3 xformNorm;
	uint32 potentialOID;
	int32 i;
	float32 pdx[3];
	float32 pdz[3];
	float32 numer;
	float32 denom;
	float32 t;
	float32 testdist2;
	float32 neardx;
	float32 neardz;
	// Line 1270, Address: 0x39a900, Func Offset: 0
	// Line 1274, Address: 0x39a904, Func Offset: 0x4
	// Line 1270, Address: 0x39a908, Func Offset: 0x8
	// Line 1274, Address: 0x39a90c, Func Offset: 0xc
	// Line 1270, Address: 0x39a910, Func Offset: 0x10
	// Line 1273, Address: 0x39a934, Func Offset: 0x34
	// Line 1274, Address: 0x39a938, Func Offset: 0x38
	// Line 1282, Address: 0x39a95c, Func Offset: 0x5c
	// Line 1275, Address: 0x39a960, Func Offset: 0x60
	// Line 1282, Address: 0x39a964, Func Offset: 0x64
	// Line 1285, Address: 0x39a970, Func Offset: 0x70
	// Line 1286, Address: 0x39a980, Func Offset: 0x80
	// Line 1289, Address: 0x39a988, Func Offset: 0x88
	// Line 1290, Address: 0x39a990, Func Offset: 0x90
	// Line 1294, Address: 0x39a994, Func Offset: 0x94
	// Line 1295, Address: 0x39a9a4, Func Offset: 0xa4
	// Line 1296, Address: 0x39a9fc, Func Offset: 0xfc
	// Line 1297, Address: 0x39aa58, Func Offset: 0x158
	// Line 1298, Address: 0x39aab0, Func Offset: 0x1b0
	// Line 1299, Address: 0x39ab00, Func Offset: 0x200
	// Line 1300, Address: 0x39ab08, Func Offset: 0x208
	// Line 1301, Address: 0x39ab10, Func Offset: 0x210
	// Line 1304, Address: 0x39ab14, Func Offset: 0x214
	// Line 1302, Address: 0x39ab18, Func Offset: 0x218
	// Line 1304, Address: 0x39ab1c, Func Offset: 0x21c
	// Line 1303, Address: 0x39ab20, Func Offset: 0x220
	// Line 1304, Address: 0x39ab24, Func Offset: 0x224
	// Line 1301, Address: 0x39ab28, Func Offset: 0x228
	// Line 1302, Address: 0x39ab2c, Func Offset: 0x22c
	// Line 1301, Address: 0x39ab30, Func Offset: 0x230
	// Line 1302, Address: 0x39ab3c, Func Offset: 0x23c
	// Line 1301, Address: 0x39ab48, Func Offset: 0x248
	// Line 1303, Address: 0x39ab54, Func Offset: 0x254
	// Line 1302, Address: 0x39ab60, Func Offset: 0x260
	// Line 1303, Address: 0x39ab6c, Func Offset: 0x26c
	// Line 1304, Address: 0x39ab78, Func Offset: 0x278
	// Line 1308, Address: 0x39ab84, Func Offset: 0x284
	// Line 1309, Address: 0x39ab98, Func Offset: 0x298
	// Line 1317, Address: 0x39abac, Func Offset: 0x2ac
	// Line 1316, Address: 0x39abb4, Func Offset: 0x2b4
	// Line 1317, Address: 0x39abb8, Func Offset: 0x2b8
	// Line 1316, Address: 0x39abc4, Func Offset: 0x2c4
	// Line 1317, Address: 0x39abc8, Func Offset: 0x2c8
	// Line 1316, Address: 0x39abd0, Func Offset: 0x2d0
	// Line 1317, Address: 0x39abd4, Func Offset: 0x2d4
	// Line 1316, Address: 0x39abd8, Func Offset: 0x2d8
	// Line 1319, Address: 0x39abdc, Func Offset: 0x2dc
	// Line 1317, Address: 0x39abe8, Func Offset: 0x2e8
	// Line 1320, Address: 0x39abec, Func Offset: 0x2ec
	// Line 1322, Address: 0x39abf4, Func Offset: 0x2f4
	// Line 1317, Address: 0x39abf8, Func Offset: 0x2f8
	// Line 1321, Address: 0x39abfc, Func Offset: 0x2fc
	// Line 1316, Address: 0x39ac00, Func Offset: 0x300
	// Line 1317, Address: 0x39ac04, Func Offset: 0x304
	// Line 1322, Address: 0x39ac10, Func Offset: 0x310
	// Line 1327, Address: 0x39ac5c, Func Offset: 0x35c
	// Line 1326, Address: 0x39ac60, Func Offset: 0x360
	// Line 1327, Address: 0x39ac64, Func Offset: 0x364
	// Line 1335, Address: 0x39ac68, Func Offset: 0x368
	// Line 1327, Address: 0x39ac6c, Func Offset: 0x36c
	// Line 1328, Address: 0x39ac70, Func Offset: 0x370
	// Line 1327, Address: 0x39ac7c, Func Offset: 0x37c
	// Line 1328, Address: 0x39ac88, Func Offset: 0x388
	// Line 1329, Address: 0x39ac90, Func Offset: 0x390
	// Line 1328, Address: 0x39ac94, Func Offset: 0x394
	// Line 1329, Address: 0x39ac98, Func Offset: 0x398
	// Line 1332, Address: 0x39acac, Func Offset: 0x3ac
	// Line 1333, Address: 0x39acb4, Func Offset: 0x3b4
	// Line 1335, Address: 0x39acbc, Func Offset: 0x3bc
	// Line 1341, Address: 0x39acc4, Func Offset: 0x3c4
	// Line 1335, Address: 0x39acc8, Func Offset: 0x3c8
	// Line 1341, Address: 0x39accc, Func Offset: 0x3cc
	// Line 1344, Address: 0x39acd0, Func Offset: 0x3d0
	// Line 1348, Address: 0x39acd4, Func Offset: 0x3d4
	// Line 1344, Address: 0x39acd8, Func Offset: 0x3d8
	// Line 1349, Address: 0x39acdc, Func Offset: 0x3dc
	// Line 1344, Address: 0x39ace0, Func Offset: 0x3e0
	// Line 1350, Address: 0x39ace4, Func Offset: 0x3e4
	// Line 1389, Address: 0x39ace8, Func Offset: 0x3e8
	// Line 1341, Address: 0x39acec, Func Offset: 0x3ec
	// Line 1357, Address: 0x39acf0, Func Offset: 0x3f0
	// Line 1341, Address: 0x39acf4, Func Offset: 0x3f4
	// Line 1357, Address: 0x39acfc, Func Offset: 0x3fc
	// Line 1362, Address: 0x39ad04, Func Offset: 0x404
	// Line 1357, Address: 0x39ad08, Func Offset: 0x408
	// Line 1347, Address: 0x39ad0c, Func Offset: 0x40c
	// Line 1348, Address: 0x39ad10, Func Offset: 0x410
	// Line 1346, Address: 0x39ad14, Func Offset: 0x414
	// Line 1347, Address: 0x39ad18, Func Offset: 0x418
	// Line 1344, Address: 0x39ad1c, Func Offset: 0x41c
	// Line 1346, Address: 0x39ad20, Func Offset: 0x420
	// Line 1348, Address: 0x39ad24, Func Offset: 0x424
	// Line 1347, Address: 0x39ad28, Func Offset: 0x428
	// Line 1350, Address: 0x39ad2c, Func Offset: 0x42c
	// Line 1349, Address: 0x39ad30, Func Offset: 0x430
	// Line 1346, Address: 0x39ad34, Func Offset: 0x434
	// Line 1353, Address: 0x39ad38, Func Offset: 0x438
	// Line 1351, Address: 0x39ad3c, Func Offset: 0x43c
	// Line 1353, Address: 0x39ad40, Func Offset: 0x440
	// Line 1354, Address: 0x39ad48, Func Offset: 0x448
	// Line 1357, Address: 0x39ad54, Func Offset: 0x454
	// Line 1358, Address: 0x39ad70, Func Offset: 0x470
	// Line 1362, Address: 0x39ad78, Func Offset: 0x478
	// Line 1363, Address: 0x39ad84, Func Offset: 0x484
	// Line 1364, Address: 0x39ad98, Func Offset: 0x498
	// Line 1367, Address: 0x39ada4, Func Offset: 0x4a4
	// Line 1369, Address: 0x39ada8, Func Offset: 0x4a8
	// Line 1368, Address: 0x39adac, Func Offset: 0x4ac
	// Line 1370, Address: 0x39adb0, Func Offset: 0x4b0
	// Line 1368, Address: 0x39adb4, Func Offset: 0x4b4
	// Line 1373, Address: 0x39adc4, Func Offset: 0x4c4
	// Line 1376, Address: 0x39addc, Func Offset: 0x4dc
	// Line 1377, Address: 0x39ade8, Func Offset: 0x4e8
	// Line 1378, Address: 0x39adf0, Func Offset: 0x4f0
	// Line 1379, Address: 0x39adf8, Func Offset: 0x4f8
	// Line 1380, Address: 0x39ae04, Func Offset: 0x504
	// Line 1384, Address: 0x39ae20, Func Offset: 0x520
	// Line 1388, Address: 0x39ae2c, Func Offset: 0x52c
	// Line 1389, Address: 0x39ae30, Func Offset: 0x530
	// Line 1388, Address: 0x39ae34, Func Offset: 0x534
	// Line 1390, Address: 0x39ae38, Func Offset: 0x538
	// Line 1388, Address: 0x39ae3c, Func Offset: 0x53c
	// Line 1387, Address: 0x39ae40, Func Offset: 0x540
	// Line 1394, Address: 0x39ae44, Func Offset: 0x544
	// Line 1397, Address: 0x39ae58, Func Offset: 0x558
	// Line 1400, Address: 0x39ae6c, Func Offset: 0x56c
	// Line 1402, Address: 0x39ae80, Func Offset: 0x580
	// Line 1404, Address: 0x39ae84, Func Offset: 0x584
	// Line 1402, Address: 0x39ae88, Func Offset: 0x588
	// Line 1404, Address: 0x39ae8c, Func Offset: 0x58c
	// Line 1401, Address: 0x39ae90, Func Offset: 0x590
	// Line 1404, Address: 0x39ae98, Func Offset: 0x598
	// Line 1402, Address: 0x39aea0, Func Offset: 0x5a0
	// Line 1403, Address: 0x39aea4, Func Offset: 0x5a4
	// Line 1401, Address: 0x39aea8, Func Offset: 0x5a8
	// Line 1403, Address: 0x39aeac, Func Offset: 0x5ac
	// Line 1404, Address: 0x39aec0, Func Offset: 0x5c0
	// Line 1405, Address: 0x39aecc, Func Offset: 0x5cc
	// Line 1406, Address: 0x39aed4, Func Offset: 0x5d4
	// Line 1407, Address: 0x39af00, Func Offset: 0x600
	// Line 1411, Address: 0x39af08, Func Offset: 0x608
	// Line 1412, Address: 0x39af14, Func Offset: 0x614
	// Line 1411, Address: 0x39af20, Func Offset: 0x620
	// Line 1412, Address: 0x39af2c, Func Offset: 0x62c
	// Line 1413, Address: 0x39af34, Func Offset: 0x634
	// Line 1412, Address: 0x39af38, Func Offset: 0x638
	// Line 1413, Address: 0x39af3c, Func Offset: 0x63c
	// Line 1415, Address: 0x39af44, Func Offset: 0x644
	// Line 1413, Address: 0x39af4c, Func Offset: 0x64c
	// Line 1415, Address: 0x39af50, Func Offset: 0x650
	// Line 1413, Address: 0x39af54, Func Offset: 0x654
	// Line 1414, Address: 0x39af5c, Func Offset: 0x65c
	// Line 1415, Address: 0x39af60, Func Offset: 0x660
	// Line 1416, Address: 0x39af6c, Func Offset: 0x66c
	// Line 1417, Address: 0x39af70, Func Offset: 0x670
	// Line 1420, Address: 0x39af74, Func Offset: 0x674
	// Line 1421, Address: 0x39af7c, Func Offset: 0x67c
	// Line 1422, Address: 0x39af84, Func Offset: 0x684
	// Line 1425, Address: 0x39af88, Func Offset: 0x688
	// Line 1426, Address: 0x39af8c, Func Offset: 0x68c
	// Func End, Address: 0x39afb8, Func Offset: 0x6b8
}

// Mgc_TriBoxTest__FP5xVec3P4xBox
// Start address: 0x39afc0
uint32 Mgc_TriBoxTest(xVec3* apkTri, xBox* rkBox)
{
	float32 fMin0;
	float32 fMax0;
	float32 fMin1;
	float32 fMax1;
	xVec3 akE[3];
	xVec3 baxis;
	uint32 andflag;
	uint32 curflag;
	int32 i;
	int32 i0;
	int32 i1;
	// Line 1196, Address: 0x39afc0, Func Offset: 0
	// Line 1201, Address: 0x39afc4, Func Offset: 0x4
	// Line 1196, Address: 0x39afc8, Func Offset: 0x8
	// Line 1203, Address: 0x39afcc, Func Offset: 0xc
	// Line 1196, Address: 0x39afd0, Func Offset: 0x10
	// Line 1203, Address: 0x39afd8, Func Offset: 0x18
	// Line 1204, Address: 0x39afe4, Func Offset: 0x24
	// Line 1205, Address: 0x39afe8, Func Offset: 0x28
	// Line 1206, Address: 0x39aff4, Func Offset: 0x34
	// Line 1207, Address: 0x39b00c, Func Offset: 0x4c
	// Line 1208, Address: 0x39b018, Func Offset: 0x58
	// Line 1209, Address: 0x39b034, Func Offset: 0x74
	// Line 1210, Address: 0x39b040, Func Offset: 0x80
	// Line 1213, Address: 0x39b058, Func Offset: 0x98
	// Line 1218, Address: 0x39b060, Func Offset: 0xa0
	// Line 1219, Address: 0x39b064, Func Offset: 0xa4
	// Line 1222, Address: 0x39b074, Func Offset: 0xb4
	// Line 1227, Address: 0x39b07c, Func Offset: 0xbc
	// Line 1232, Address: 0x39b080, Func Offset: 0xc0
	// Line 1227, Address: 0x39b084, Func Offset: 0xc4
	// Line 1228, Address: 0x39b09c, Func Offset: 0xdc
	// Line 1227, Address: 0x39b0a4, Func Offset: 0xe4
	// Line 1228, Address: 0x39b0a8, Func Offset: 0xe8
	// Line 1227, Address: 0x39b0ac, Func Offset: 0xec
	// Line 1228, Address: 0x39b0b8, Func Offset: 0xf8
	// Line 1227, Address: 0x39b0c0, Func Offset: 0x100
	// Line 1228, Address: 0x39b0c4, Func Offset: 0x104
	// Line 1229, Address: 0x39b0d0, Func Offset: 0x110
	// Line 1230, Address: 0x39b0e8, Func Offset: 0x128
	// Line 1232, Address: 0x39b10c, Func Offset: 0x14c
	// Line 1233, Address: 0x39b164, Func Offset: 0x1a4
	// Line 1229, Address: 0x39b168, Func Offset: 0x1a8
	// Line 1227, Address: 0x39b16c, Func Offset: 0x1ac
	// Line 1228, Address: 0x39b178, Func Offset: 0x1b8
	// Line 1233, Address: 0x39b180, Func Offset: 0x1c0
	// Line 1240, Address: 0x39b194, Func Offset: 0x1d4
	// Line 1237, Address: 0x39b198, Func Offset: 0x1d8
	// Line 1238, Address: 0x39b19c, Func Offset: 0x1dc
	// Line 1241, Address: 0x39b1a0, Func Offset: 0x1e0
	// Line 1245, Address: 0x39b1a8, Func Offset: 0x1e8
	// Line 1243, Address: 0x39b1ac, Func Offset: 0x1ec
	// Line 1240, Address: 0x39b1b0, Func Offset: 0x1f0
	// Line 1237, Address: 0x39b1b8, Func Offset: 0x1f8
	// Line 1240, Address: 0x39b1bc, Func Offset: 0x1fc
	// Line 1238, Address: 0x39b1c8, Func Offset: 0x208
	// Line 1239, Address: 0x39b1cc, Func Offset: 0x20c
	// Line 1245, Address: 0x39b1d0, Func Offset: 0x210
	// Line 1243, Address: 0x39b1d4, Func Offset: 0x214
	// Line 1245, Address: 0x39b1d8, Func Offset: 0x218
	// Line 1246, Address: 0x39b1e0, Func Offset: 0x220
	// Line 1248, Address: 0x39b1e4, Func Offset: 0x224
	// Line 1243, Address: 0x39b1fc, Func Offset: 0x23c
	// Line 1245, Address: 0x39b200, Func Offset: 0x240
	// Line 1246, Address: 0x39b20c, Func Offset: 0x24c
	// Line 1247, Address: 0x39b21c, Func Offset: 0x25c
	// Line 1246, Address: 0x39b220, Func Offset: 0x260
	// Line 1248, Address: 0x39b22c, Func Offset: 0x26c
	// Line 1249, Address: 0x39b2c0, Func Offset: 0x300
	// Line 1250, Address: 0x39b314, Func Offset: 0x354
	// Line 1252, Address: 0x39b32c, Func Offset: 0x36c
	// Line 1253, Address: 0x39b33c, Func Offset: 0x37c
	// Line 1255, Address: 0x39b34c, Func Offset: 0x38c
	// Line 1205, Address: 0x39b354, Func Offset: 0x394
	// Line 1207, Address: 0x39b360, Func Offset: 0x3a0
	// Line 1209, Address: 0x39b368, Func Offset: 0x3a8
	// Line 1214, Address: 0x39b370, Func Offset: 0x3b0
	// Line 1223, Address: 0x39b378, Func Offset: 0x3b8
	// Line 1234, Address: 0x39b380, Func Offset: 0x3c0
	// Line 1256, Address: 0x39b384, Func Offset: 0x3c4
	// Func End, Address: 0x39b394, Func Offset: 0x3d4
}

// xRayHitsSceneFlags__FP6xSceneP5xRay3P7xCollisUcUc
// Start address: 0x39b3a0
void xRayHitsSceneFlags(xScene* sc, xRay3* r, xCollis* coll, uint8 collType, uint8 chk)
{
	cb_ray_hits_ent cb;
	xBound bound;
	xCollis temp_coll;
	// Line 1088, Address: 0x39b3a0, Func Offset: 0
	// Line 1092, Address: 0x39b3a4, Func Offset: 0x4
	// Line 1088, Address: 0x39b3a8, Func Offset: 0x8
	// Line 1092, Address: 0x39b3ac, Func Offset: 0xc
	// Line 1088, Address: 0x39b3b0, Func Offset: 0x10
	// Line 1093, Address: 0x39b3c0, Func Offset: 0x20
	// Line 1088, Address: 0x39b3c4, Func Offset: 0x24
	// Line 1092, Address: 0x39b3cc, Func Offset: 0x2c
	// Line 1093, Address: 0x39b3d4, Func Offset: 0x34
	// Line 1098, Address: 0x39b3dc, Func Offset: 0x3c
	// Line 1093, Address: 0x39b3e0, Func Offset: 0x40
	// Line 1094, Address: 0x39b3ec, Func Offset: 0x4c
	// Line 1098, Address: 0x39b404, Func Offset: 0x64
	// Line 1094, Address: 0x39b408, Func Offset: 0x68
	// Line 1098, Address: 0x39b40c, Func Offset: 0x6c
	// Line 1099, Address: 0x39b414, Func Offset: 0x74
	// Line 1100, Address: 0x39b54c, Func Offset: 0x1ac
	// Line 1101, Address: 0x39b558, Func Offset: 0x1b8
	// Line 1100, Address: 0x39b55c, Func Offset: 0x1bc
	// Line 1099, Address: 0x39b560, Func Offset: 0x1c0
	// Line 1100, Address: 0x39b564, Func Offset: 0x1c4
	// Line 1101, Address: 0x39b578, Func Offset: 0x1d8
	// Line 1100, Address: 0x39b57c, Func Offset: 0x1dc
	// Line 1101, Address: 0x39b580, Func Offset: 0x1e0
	// Line 1100, Address: 0x39b588, Func Offset: 0x1e8
	// Line 1099, Address: 0x39b5a8, Func Offset: 0x208
	// Line 1100, Address: 0x39b5ac, Func Offset: 0x20c
	// Line 1101, Address: 0x39b5c0, Func Offset: 0x220
	// Line 1104, Address: 0x39b5cc, Func Offset: 0x22c
	// Line 1109, Address: 0x39b5d8, Func Offset: 0x238
	// Line 1113, Address: 0x39b5e4, Func Offset: 0x244
	// Line 1126, Address: 0x39b5f0, Func Offset: 0x250
	// Line 1106, Address: 0x39b604, Func Offset: 0x264
	// Line 1126, Address: 0x39b608, Func Offset: 0x268
	// Line 1107, Address: 0x39b61c, Func Offset: 0x27c
	// Line 1126, Address: 0x39b620, Func Offset: 0x280
	// Line 1110, Address: 0x39b63c, Func Offset: 0x29c
	// Line 1126, Address: 0x39b640, Func Offset: 0x2a0
	// Line 1117, Address: 0x39b654, Func Offset: 0x2b4
	// Line 1126, Address: 0x39b658, Func Offset: 0x2b8
	// Line 1117, Address: 0x39b65c, Func Offset: 0x2bc
	// Line 1118, Address: 0x39b660, Func Offset: 0x2c0
	// Line 1126, Address: 0x39b664, Func Offset: 0x2c4
	// Line 1119, Address: 0x39b680, Func Offset: 0x2e0
	// Line 1126, Address: 0x39b684, Func Offset: 0x2e4
	// Line 1121, Address: 0x39b68c, Func Offset: 0x2ec
	// Line 1126, Address: 0x39b690, Func Offset: 0x2f0
	// Func End, Address: 0x39b6c4, Func Offset: 0x324
}

// xRayHitsScene__FP6xSceneP5xRay3P7xCollis
// Start address: 0x39b6d0
void xRayHitsScene(xScene* sc, xRay3* r, xCollis* coll)
{
	xQCData q;
	xCollis c;
	// Line 791, Address: 0x39b6d0, Func Offset: 0
	// Line 803, Address: 0x39b6d4, Func Offset: 0x4
	// Line 791, Address: 0x39b6d8, Func Offset: 0x8
	// Line 803, Address: 0x39b6dc, Func Offset: 0xc
	// Line 791, Address: 0x39b6e0, Func Offset: 0x10
	// Line 806, Address: 0x39b6f4, Func Offset: 0x24
	// Line 803, Address: 0x39b6fc, Func Offset: 0x2c
	// Line 806, Address: 0x39b700, Func Offset: 0x30
	// Line 818, Address: 0x39b710, Func Offset: 0x40
	// Line 819, Address: 0x39b734, Func Offset: 0x64
	// Line 820, Address: 0x39b758, Func Offset: 0x88
	// Line 859, Address: 0x39b77c, Func Offset: 0xac
	// Line 860, Address: 0x39b780, Func Offset: 0xb0
	// Line 859, Address: 0x39b784, Func Offset: 0xb4
	// Line 860, Address: 0x39b788, Func Offset: 0xb8
	// Line 861, Address: 0x39b798, Func Offset: 0xc8
	// Line 870, Address: 0x39b7a8, Func Offset: 0xd8
	// Line 871, Address: 0x39b7c8, Func Offset: 0xf8
	// Line 874, Address: 0x39b7d4, Func Offset: 0x104
	// Line 875, Address: 0x39b7e4, Func Offset: 0x114
	// Line 880, Address: 0x39b7fc, Func Offset: 0x12c
	// Line 878, Address: 0x39b820, Func Offset: 0x150
	// Line 880, Address: 0x39b830, Func Offset: 0x160
	// Func End, Address: 0x39b848, Func Offset: 0x178
}

// xRayHitsTikiLandableScene__FP6xSceneP5xRay3P7xCollis
// Start address: 0x39b850
void xRayHitsTikiLandableScene(xScene* sc, xRay3* r, xCollis* coll)
{
	xQCData q;
	xCollis c;
	// Line 721, Address: 0x39b850, Func Offset: 0
	// Line 733, Address: 0x39b854, Func Offset: 0x4
	// Line 721, Address: 0x39b858, Func Offset: 0x8
	// Line 733, Address: 0x39b85c, Func Offset: 0xc
	// Line 721, Address: 0x39b860, Func Offset: 0x10
	// Line 736, Address: 0x39b874, Func Offset: 0x24
	// Line 733, Address: 0x39b87c, Func Offset: 0x2c
	// Line 736, Address: 0x39b880, Func Offset: 0x30
	// Line 748, Address: 0x39b890, Func Offset: 0x40
	// Line 749, Address: 0x39b8b4, Func Offset: 0x64
	// Line 750, Address: 0x39b8d8, Func Offset: 0x88
	// Line 773, Address: 0x39b8fc, Func Offset: 0xac
	// Line 774, Address: 0x39b910, Func Offset: 0xc0
	// Line 783, Address: 0x39b920, Func Offset: 0xd0
	// Line 784, Address: 0x39b940, Func Offset: 0xf0
	// Line 785, Address: 0x39b948, Func Offset: 0xf8
	// Line 786, Address: 0x39b950, Func Offset: 0x100
	// Line 788, Address: 0x39b960, Func Offset: 0x110
	// Func End, Address: 0x39b994, Func Offset: 0x144
}

// xRayHitsEnt__FP6xSceneP5xRay3P7xQCDataP4xEntPv
// Start address: 0x39b9a0
void xRayHitsEnt(xRay3* r, xQCData* qcr, xEnt* ent, void* colldata)
{
	xCollis* coll;
	xCollis c;
	// Line 691, Address: 0x39b9a0, Func Offset: 0
	// Line 694, Address: 0x39b9b4, Func Offset: 0x14
	// Line 698, Address: 0x39b9c0, Func Offset: 0x20
	// Line 705, Address: 0x39b9f4, Func Offset: 0x54
	// Line 706, Address: 0x39ba04, Func Offset: 0x64
	// Line 709, Address: 0x39ba18, Func Offset: 0x78
	// Line 710, Address: 0x39ba28, Func Offset: 0x88
	// Line 711, Address: 0x39ba2c, Func Offset: 0x8c
	// Line 712, Address: 0x39ba34, Func Offset: 0x94
	// Line 713, Address: 0x39ba38, Func Offset: 0x98
	// Line 715, Address: 0x39ba40, Func Offset: 0xa0
	// Func End, Address: 0x39ba54, Func Offset: 0xb4
}

// xRayHitsTikiLandableEnt__FP6xSceneP5xRay3P7xQCDataP4xEntPv
// Start address: 0x39ba60
void xRayHitsTikiLandableEnt(xRay3* r, xQCData* qcr, xEnt* ent, void* colldata)
{
	xCollis* coll;
	xCollis c;
	// Line 649, Address: 0x39ba60, Func Offset: 0
	// Line 652, Address: 0x39ba7c, Func Offset: 0x1c
	// Line 653, Address: 0x39ba88, Func Offset: 0x28
	// Line 654, Address: 0x39ba98, Func Offset: 0x38
	// Line 661, Address: 0x39baa8, Func Offset: 0x48
	// Line 668, Address: 0x39badc, Func Offset: 0x7c
	// Line 669, Address: 0x39baec, Func Offset: 0x8c
	// Line 673, Address: 0x39bafc, Func Offset: 0x9c
	// Line 676, Address: 0x39bb0c, Func Offset: 0xac
	// Line 677, Address: 0x39bb1c, Func Offset: 0xbc
	// Line 682, Address: 0x39bb30, Func Offset: 0xd0
	// Line 683, Address: 0x39bb40, Func Offset: 0xe0
	// Line 684, Address: 0x39bb44, Func Offset: 0xe4
	// Line 685, Address: 0x39bb4c, Func Offset: 0xec
	// Line 686, Address: 0x39bb50, Func Offset: 0xf0
	// Line 688, Address: 0x39bb58, Func Offset: 0xf8
	// Func End, Address: 0x39bb70, Func Offset: 0x110
}

// xRayHitsGrid__FP5xGridP6xSceneP5xRay3PFP6xSceneP5xRay3P7xQCDataP4xEntPv_vP7xQCDataPv
// Start address: 0x39bb70
void xRayHitsGrid(xGrid* grid, xScene* sc, xRay3* r, void(*rentcb)(xScene*, xRay3*, xQCData*, xEnt*, void*), xQCData* qcr, void* data)
{
	xLine3 ln;
	xGridIterator it;
	xVec3 delta;
	float32 len;
	int32 sclgx;
	int32 sclgz;
	int32 eclgx;
	int32 eclgz;
	float32 sclcx;
	float32 sclcz;
	float32 eclcx;
	float32 eclcz;
	float32 halfclx;
	float32 halfclz;
	float32 quatrclx;
	float32 quatrclz;
	int32 sz;
	int32 ez;
	int32 x;
	int32 z;
	float32 dxdz;
	float32 cz;
	float32 lz;
	float32 rz;
	float32 lx;
	float32 rx;
	int32 aclgx;
	int32 aclgz;
	int32 bclgx;
	int32 bclgz;
	float32 aclcx;
	float32 bclcx;
	int32 ax;
	int32 bx;
	xGridBound* cell;
	xBound* cellbound;
	xGridBound* cell;
	xBound* cellbound;
	float32 cz;
	float32 lz;
	float32 rz;
	float32 lx;
	float32 rx;
	int32 aclgx;
	int32 aclgz;
	int32 bclgx;
	int32 bclgz;
	float32 aclcx;
	float32 bclcx;
	int32 ax;
	int32 bx;
	xGridBound* cell;
	xBound* cellbound;
	xGridBound* cell;
	xBound* cellbound;
	xGridBound* cell;
	xBound* cellbound;
	// Line 343, Address: 0x39bb70, Func Offset: 0
	// Line 356, Address: 0x39bbdc, Func Offset: 0x6c
	// Line 357, Address: 0x39bbe8, Func Offset: 0x78
	// Line 365, Address: 0x39bd6c, Func Offset: 0x1fc
	// Line 357, Address: 0x39bd70, Func Offset: 0x200
	// Line 364, Address: 0x39bd88, Func Offset: 0x218
	// Line 365, Address: 0x39bd8c, Func Offset: 0x21c
	// Line 357, Address: 0x39bd90, Func Offset: 0x220
	// Line 365, Address: 0x39bd94, Func Offset: 0x224
	// Line 369, Address: 0x39bd98, Func Offset: 0x228
	// Line 364, Address: 0x39bd9c, Func Offset: 0x22c
	// Line 369, Address: 0x39bda4, Func Offset: 0x234
	// Line 370, Address: 0x39bdb0, Func Offset: 0x240
	// Line 372, Address: 0x39bdc4, Func Offset: 0x254
	// Line 373, Address: 0x39bdcc, Func Offset: 0x25c
	// Line 377, Address: 0x39bdd4, Func Offset: 0x264
	// Line 379, Address: 0x39bdd8, Func Offset: 0x268
	// Line 377, Address: 0x39bddc, Func Offset: 0x26c
	// Line 379, Address: 0x39bde0, Func Offset: 0x270
	// Line 377, Address: 0x39bdf0, Func Offset: 0x280
	// Line 379, Address: 0x39bdf4, Func Offset: 0x284
	// Line 377, Address: 0x39bdfc, Func Offset: 0x28c
	// Line 379, Address: 0x39be04, Func Offset: 0x294
	// Line 380, Address: 0x39be0c, Func Offset: 0x29c
	// Line 381, Address: 0x39be30, Func Offset: 0x2c0
	// Line 382, Address: 0x39be40, Func Offset: 0x2d0
	// Line 384, Address: 0x39be44, Func Offset: 0x2d4
	// Line 386, Address: 0x39be4c, Func Offset: 0x2dc
	// Line 381, Address: 0x39be5c, Func Offset: 0x2ec
	// Line 398, Address: 0x39be60, Func Offset: 0x2f0
	// Line 381, Address: 0x39be64, Func Offset: 0x2f4
	// Line 384, Address: 0x39be68, Func Offset: 0x2f8
	// Line 381, Address: 0x39be6c, Func Offset: 0x2fc
	// Line 384, Address: 0x39be70, Func Offset: 0x300
	// Line 381, Address: 0x39be78, Func Offset: 0x308
	// Line 384, Address: 0x39be7c, Func Offset: 0x30c
	// Line 382, Address: 0x39be84, Func Offset: 0x314
	// Line 385, Address: 0x39be88, Func Offset: 0x318
	// Line 383, Address: 0x39be8c, Func Offset: 0x31c
	// Line 398, Address: 0x39be90, Func Offset: 0x320
	// Line 401, Address: 0x39be98, Func Offset: 0x328
	// Line 403, Address: 0x39beb0, Func Offset: 0x340
	// Line 405, Address: 0x39beb8, Func Offset: 0x348
	// Line 407, Address: 0x39bee0, Func Offset: 0x370
	// Line 410, Address: 0x39bee8, Func Offset: 0x378
	// Line 418, Address: 0x39bf08, Func Offset: 0x398
	// Line 420, Address: 0x39bf28, Func Offset: 0x3b8
	// Line 418, Address: 0x39bf2c, Func Offset: 0x3bc
	// Line 420, Address: 0x39bf30, Func Offset: 0x3c0
	// Line 418, Address: 0x39bf34, Func Offset: 0x3c4
	// Line 419, Address: 0x39bf38, Func Offset: 0x3c8
	// Line 421, Address: 0x39bf3c, Func Offset: 0x3cc
	// Line 422, Address: 0x39bf4c, Func Offset: 0x3dc
	// Line 423, Address: 0x39bf50, Func Offset: 0x3e0
	// Line 424, Address: 0x39bf5c, Func Offset: 0x3ec
	// Line 426, Address: 0x39bf70, Func Offset: 0x400
	// Line 427, Address: 0x39bf7c, Func Offset: 0x40c
	// Line 428, Address: 0x39bf84, Func Offset: 0x414
	// Line 429, Address: 0x39bf90, Func Offset: 0x420
	// Line 438, Address: 0x39bfa0, Func Offset: 0x430
	// Line 439, Address: 0x39bfb8, Func Offset: 0x448
	// Line 446, Address: 0x39bfd8, Func Offset: 0x468
	// Line 442, Address: 0x39bfdc, Func Offset: 0x46c
	// Line 439, Address: 0x39bfe0, Func Offset: 0x470
	// Line 440, Address: 0x39bfe4, Func Offset: 0x474
	// Line 443, Address: 0x39bfe8, Func Offset: 0x478
	// Line 439, Address: 0x39bfec, Func Offset: 0x47c
	// Line 440, Address: 0x39bff0, Func Offset: 0x480
	// Line 443, Address: 0x39bff4, Func Offset: 0x484
	// Line 440, Address: 0x39bff8, Func Offset: 0x488
	// Line 443, Address: 0x39c000, Func Offset: 0x490
	// Line 441, Address: 0x39c004, Func Offset: 0x494
	// Line 444, Address: 0x39c008, Func Offset: 0x498
	// Line 442, Address: 0x39c00c, Func Offset: 0x49c
	// Line 446, Address: 0x39c010, Func Offset: 0x4a0
	// Line 449, Address: 0x39c018, Func Offset: 0x4a8
	// Line 451, Address: 0x39c02c, Func Offset: 0x4bc
	// Line 453, Address: 0x39c030, Func Offset: 0x4c0
	// Line 455, Address: 0x39c054, Func Offset: 0x4e4
	// Line 458, Address: 0x39c058, Func Offset: 0x4e8
	// Line 459, Address: 0x39c068, Func Offset: 0x4f8
	// Line 467, Address: 0x39c07c, Func Offset: 0x50c
	// Line 460, Address: 0x39c08c, Func Offset: 0x51c
	// Line 461, Address: 0x39c090, Func Offset: 0x520
	// Line 467, Address: 0x39c094, Func Offset: 0x524
	// Line 464, Address: 0x39c0c0, Func Offset: 0x550
	// Line 467, Address: 0x39c0cc, Func Offset: 0x55c
	// Line 465, Address: 0x39c0d4, Func Offset: 0x564
	// Line 467, Address: 0x39c0d8, Func Offset: 0x568
	// Line 466, Address: 0x39c0fc, Func Offset: 0x58c
	// Line 467, Address: 0x39c100, Func Offset: 0x590
	// Line 466, Address: 0x39c10c, Func Offset: 0x59c
	// Line 467, Address: 0x39c118, Func Offset: 0x5a8
	// Line 466, Address: 0x39c138, Func Offset: 0x5c8
	// Line 467, Address: 0x39c140, Func Offset: 0x5d0
	// Line 468, Address: 0x39c148, Func Offset: 0x5d8
	// Line 470, Address: 0x39c158, Func Offset: 0x5e8
	// Line 473, Address: 0x39c160, Func Offset: 0x5f0
	// Line 475, Address: 0x39c174, Func Offset: 0x604
	// Line 477, Address: 0x39c178, Func Offset: 0x608
	// Line 479, Address: 0x39c19c, Func Offset: 0x62c
	// Line 482, Address: 0x39c1a0, Func Offset: 0x630
	// Line 483, Address: 0x39c1b0, Func Offset: 0x640
	// Line 491, Address: 0x39c1c4, Func Offset: 0x654
	// Line 484, Address: 0x39c1d4, Func Offset: 0x664
	// Line 485, Address: 0x39c1d8, Func Offset: 0x668
	// Line 491, Address: 0x39c1dc, Func Offset: 0x66c
	// Line 488, Address: 0x39c208, Func Offset: 0x698
	// Line 491, Address: 0x39c214, Func Offset: 0x6a4
	// Line 489, Address: 0x39c21c, Func Offset: 0x6ac
	// Line 491, Address: 0x39c220, Func Offset: 0x6b0
	// Line 490, Address: 0x39c244, Func Offset: 0x6d4
	// Line 491, Address: 0x39c248, Func Offset: 0x6d8
	// Line 490, Address: 0x39c254, Func Offset: 0x6e4
	// Line 491, Address: 0x39c260, Func Offset: 0x6f0
	// Line 490, Address: 0x39c280, Func Offset: 0x710
	// Line 491, Address: 0x39c288, Func Offset: 0x718
	// Line 492, Address: 0x39c290, Func Offset: 0x720
	// Line 494, Address: 0x39c2a0, Func Offset: 0x730
	// Line 496, Address: 0x39c2c0, Func Offset: 0x750
	// Line 499, Address: 0x39c2c8, Func Offset: 0x758
	// Line 501, Address: 0x39c2dc, Func Offset: 0x76c
	// Line 503, Address: 0x39c2e4, Func Offset: 0x774
	// Line 505, Address: 0x39c30c, Func Offset: 0x79c
	// Line 508, Address: 0x39c314, Func Offset: 0x7a4
	// Line 516, Address: 0x39c350, Func Offset: 0x7e0
	// Line 517, Address: 0x39c37c, Func Offset: 0x80c
	// Line 519, Address: 0x39c380, Func Offset: 0x810
	// Line 520, Address: 0x39c38c, Func Offset: 0x81c
	// Line 521, Address: 0x39c390, Func Offset: 0x820
	// Line 522, Address: 0x39c398, Func Offset: 0x828
	// Line 523, Address: 0x39c3a4, Func Offset: 0x834
	// Line 524, Address: 0x39c3a8, Func Offset: 0x838
	// Line 525, Address: 0x39c3b4, Func Offset: 0x844
	// Line 526, Address: 0x39c3b8, Func Offset: 0x848
	// Line 527, Address: 0x39c3c0, Func Offset: 0x850
	// Line 536, Address: 0x39c3d0, Func Offset: 0x860
	// Line 537, Address: 0x39c3e8, Func Offset: 0x878
	// Line 548, Address: 0x39c408, Func Offset: 0x898
	// Line 544, Address: 0x39c40c, Func Offset: 0x89c
	// Line 537, Address: 0x39c410, Func Offset: 0x8a0
	// Line 542, Address: 0x39c414, Func Offset: 0x8a4
	// Line 545, Address: 0x39c418, Func Offset: 0x8a8
	// Line 537, Address: 0x39c41c, Func Offset: 0x8ac
	// Line 542, Address: 0x39c420, Func Offset: 0x8b0
	// Line 545, Address: 0x39c424, Func Offset: 0x8b4
	// Line 542, Address: 0x39c428, Func Offset: 0x8b8
	// Line 545, Address: 0x39c430, Func Offset: 0x8c0
	// Line 543, Address: 0x39c434, Func Offset: 0x8c4
	// Line 546, Address: 0x39c438, Func Offset: 0x8c8
	// Line 544, Address: 0x39c43c, Func Offset: 0x8cc
	// Line 548, Address: 0x39c440, Func Offset: 0x8d0
	// Line 551, Address: 0x39c448, Func Offset: 0x8d8
	// Line 553, Address: 0x39c45c, Func Offset: 0x8ec
	// Line 555, Address: 0x39c460, Func Offset: 0x8f0
	// Line 557, Address: 0x39c484, Func Offset: 0x914
	// Line 560, Address: 0x39c488, Func Offset: 0x918
	// Line 561, Address: 0x39c498, Func Offset: 0x928
	// Line 569, Address: 0x39c4ac, Func Offset: 0x93c
	// Line 562, Address: 0x39c4bc, Func Offset: 0x94c
	// Line 563, Address: 0x39c4c0, Func Offset: 0x950
	// Line 569, Address: 0x39c4c4, Func Offset: 0x954
	// Line 566, Address: 0x39c4f0, Func Offset: 0x980
	// Line 569, Address: 0x39c4fc, Func Offset: 0x98c
	// Line 567, Address: 0x39c504, Func Offset: 0x994
	// Line 569, Address: 0x39c508, Func Offset: 0x998
	// Line 568, Address: 0x39c52c, Func Offset: 0x9bc
	// Line 569, Address: 0x39c530, Func Offset: 0x9c0
	// Line 568, Address: 0x39c53c, Func Offset: 0x9cc
	// Line 569, Address: 0x39c548, Func Offset: 0x9d8
	// Line 568, Address: 0x39c568, Func Offset: 0x9f8
	// Line 569, Address: 0x39c570, Func Offset: 0xa00
	// Line 570, Address: 0x39c578, Func Offset: 0xa08
	// Line 572, Address: 0x39c588, Func Offset: 0xa18
	// Line 575, Address: 0x39c590, Func Offset: 0xa20
	// Line 577, Address: 0x39c5a4, Func Offset: 0xa34
	// Line 579, Address: 0x39c5a8, Func Offset: 0xa38
	// Line 581, Address: 0x39c5cc, Func Offset: 0xa5c
	// Line 584, Address: 0x39c5d0, Func Offset: 0xa60
	// Line 585, Address: 0x39c5e0, Func Offset: 0xa70
	// Line 593, Address: 0x39c5f4, Func Offset: 0xa84
	// Line 586, Address: 0x39c604, Func Offset: 0xa94
	// Line 587, Address: 0x39c608, Func Offset: 0xa98
	// Line 593, Address: 0x39c60c, Func Offset: 0xa9c
	// Line 590, Address: 0x39c638, Func Offset: 0xac8
	// Line 593, Address: 0x39c644, Func Offset: 0xad4
	// Line 591, Address: 0x39c64c, Func Offset: 0xadc
	// Line 593, Address: 0x39c650, Func Offset: 0xae0
	// Line 592, Address: 0x39c674, Func Offset: 0xb04
	// Line 593, Address: 0x39c678, Func Offset: 0xb08
	// Line 592, Address: 0x39c684, Func Offset: 0xb14
	// Line 593, Address: 0x39c690, Func Offset: 0xb20
	// Line 592, Address: 0x39c6b0, Func Offset: 0xb40
	// Line 593, Address: 0x39c6b8, Func Offset: 0xb48
	// Line 594, Address: 0x39c6c0, Func Offset: 0xb50
	// Line 596, Address: 0x39c6d0, Func Offset: 0xb60
	// Line 598, Address: 0x39c6f0, Func Offset: 0xb80
	// Line 606, Address: 0x39c704, Func Offset: 0xb94
	// Line 600, Address: 0x39c718, Func Offset: 0xba8
	// Line 606, Address: 0x39c71c, Func Offset: 0xbac
	// Line 603, Address: 0x39c748, Func Offset: 0xbd8
	// Line 606, Address: 0x39c754, Func Offset: 0xbe4
	// Line 604, Address: 0x39c75c, Func Offset: 0xbec
	// Line 606, Address: 0x39c760, Func Offset: 0xbf0
	// Line 605, Address: 0x39c784, Func Offset: 0xc14
	// Line 606, Address: 0x39c788, Func Offset: 0xc18
	// Line 605, Address: 0x39c794, Func Offset: 0xc24
	// Line 606, Address: 0x39c7a0, Func Offset: 0xc30
	// Line 605, Address: 0x39c7c0, Func Offset: 0xc50
	// Line 606, Address: 0x39c7c8, Func Offset: 0xc58
	// Line 607, Address: 0x39c7d0, Func Offset: 0xc60
	// Func End, Address: 0x39c82c, Func Offset: 0xcbc
}

// xSceneForAllNPCs__FP6xScenePFP4xEntP6xScenePv_P4xEntPv
// Start address: 0x39c830
void xSceneForAllNPCs(xScene* sc, xEnt*(*func)(xEnt*, xScene*, void*), void* data)
{
	uint16 i;
	// Line 329, Address: 0x39c830, Func Offset: 0
	// Line 333, Address: 0x39c858, Func Offset: 0x28
	// Line 339, Address: 0x39c868, Func Offset: 0x38
	// Line 335, Address: 0x39c878, Func Offset: 0x48
	// Line 339, Address: 0x39c87c, Func Offset: 0x4c
	// Line 338, Address: 0x39c898, Func Offset: 0x68
	// Line 339, Address: 0x39c89c, Func Offset: 0x6c
	// Func End, Address: 0x39c8d4, Func Offset: 0xa4
}

// xSceneForAllDynamics__FP6xScenePFP4xEntP6xScenePv_P4xEntPv
// Start address: 0x39c8e0
void xSceneForAllDynamics(xScene* sc, xEnt*(*func)(xEnt*, xScene*, void*), void* data)
{
	uint16 i;
	// Line 316, Address: 0x39c8e0, Func Offset: 0
	// Line 320, Address: 0x39c908, Func Offset: 0x28
	// Line 327, Address: 0x39c918, Func Offset: 0x38
	// Line 322, Address: 0x39c928, Func Offset: 0x48
	// Line 327, Address: 0x39c92c, Func Offset: 0x4c
	// Line 326, Address: 0x39c948, Func Offset: 0x68
	// Line 327, Address: 0x39c94c, Func Offset: 0x6c
	// Func End, Address: 0x39c984, Func Offset: 0xa4
}

// xSceneForAllStatics__FP6xScenePFP4xEntP6xScenePv_P4xEntPv
// Start address: 0x39c990
void xSceneForAllStatics(xScene* sc, xEnt*(*func)(xEnt*, xScene*, void*), void* data)
{
	uint16 i;
	// Line 304, Address: 0x39c990, Func Offset: 0
	// Line 308, Address: 0x39c9b8, Func Offset: 0x28
	// Line 314, Address: 0x39c9c8, Func Offset: 0x38
	// Line 310, Address: 0x39c9d8, Func Offset: 0x48
	// Line 314, Address: 0x39c9dc, Func Offset: 0x4c
	// Line 313, Address: 0x39c9f8, Func Offset: 0x68
	// Line 314, Address: 0x39c9fc, Func Offset: 0x6c
	// Func End, Address: 0x39ca34, Func Offset: 0xa4
}

// xSceneForAllEnts__FP6xScenePFP4xEntP6xScenePv_P4xEntPv
// Start address: 0x39ca40
void xSceneForAllEnts(xScene* sc, xEnt*(*func)(xEnt*, xScene*, void*), void* data)
{
	uint16 i;
	// Line 280, Address: 0x39ca40, Func Offset: 0
	// Line 284, Address: 0x39ca68, Func Offset: 0x28
	// Line 289, Address: 0x39ca78, Func Offset: 0x38
	// Line 285, Address: 0x39ca88, Func Offset: 0x48
	// Line 289, Address: 0x39ca8c, Func Offset: 0x4c
	// Line 288, Address: 0x39caa8, Func Offset: 0x68
	// Line 289, Address: 0x39caac, Func Offset: 0x6c
	// Func End, Address: 0x39cae4, Func Offset: 0xa4
}

// xSceneResolvID__FP6xSceneUi
// Start address: 0x39caf0
xBase* xSceneResolvID(xScene* sc, uint32 id)
{
	// Line 229, Address: 0x39caf0, Func Offset: 0
	// Line 233, Address: 0x39cafc, Func Offset: 0xc
	// Line 236, Address: 0x39cb18, Func Offset: 0x28
	// Func End, Address: 0x39cb24, Func Offset: 0x34
}

// xSceneAddEnt__FP6xSceneP4xEnt
// Start address: 0x39cb30
void xSceneAddEnt(xScene* sc, xEnt* ent)
{
	// Line 175, Address: 0x39cb30, Func Offset: 0
	// Line 179, Address: 0x39cb34, Func Offset: 0x4
	// Line 184, Address: 0x39cb40, Func Offset: 0x10
	// Line 189, Address: 0x39cb48, Func Offset: 0x18
	// Line 194, Address: 0x39cb54, Func Offset: 0x24
	// Line 197, Address: 0x39cb5c, Func Offset: 0x2c
	// Line 213, Address: 0x39cb78, Func Offset: 0x48
	// Line 214, Address: 0x39cb90, Func Offset: 0x60
	// Line 182, Address: 0x39cba4, Func Offset: 0x74
	// Line 214, Address: 0x39cba8, Func Offset: 0x78
	// Line 184, Address: 0x39cbb0, Func Offset: 0x80
	// Line 214, Address: 0x39cbb8, Func Offset: 0x88
	// Line 187, Address: 0x39cbc4, Func Offset: 0x94
	// Line 214, Address: 0x39cbc8, Func Offset: 0x98
	// Line 189, Address: 0x39cbd0, Func Offset: 0xa0
	// Line 214, Address: 0x39cbd8, Func Offset: 0xa8
	// Line 192, Address: 0x39cbe4, Func Offset: 0xb4
	// Line 214, Address: 0x39cbe8, Func Offset: 0xb8
	// Line 194, Address: 0x39cbf0, Func Offset: 0xc0
	// Line 214, Address: 0x39cbf8, Func Offset: 0xc8
	// Func End, Address: 0x39cc00, Func Offset: 0xd0
}

// xSceneSetup__FP6xScene
// Start address: 0x39cc00
void xSceneSetup(xScene* sc)
{
	// Line 172, Address: 0x39cc00, Func Offset: 0
	// Func End, Address: 0x39cc08, Func Offset: 0x8
}

// xSceneLoad__FP6xSceneP7xSerial
// Start address: 0x39cc10
void xSceneLoad()
{
	// Line 155, Address: 0x39cc10, Func Offset: 0
	// Func End, Address: 0x39cc18, Func Offset: 0x8
}

// xSceneSave__FP6xSceneP7xSerial
// Start address: 0x39cc20
void xSceneSave()
{
	// Line 137, Address: 0x39cc20, Func Offset: 0
	// Func End, Address: 0x39cc28, Func Offset: 0x8
}

// xSceneExit__FP6xScene
// Start address: 0x39cc30
void xSceneExit()
{
	// Line 121, Address: 0x39cc30, Func Offset: 0
	// Func End, Address: 0x39cc38, Func Offset: 0x8
}

// xSceneInit__FP6xSceneUsUsUsUs
// Start address: 0x39cc40
void xSceneInit(xScene* sc, uint16 num_trigs, uint16 num_stats, uint16 num_dyns, uint16 num_npcs)
{
	// Line 45, Address: 0x39cc40, Func Offset: 0
	// Line 51, Address: 0x39cc68, Func Offset: 0x28
	// Line 48, Address: 0x39cc6c, Func Offset: 0x2c
	// Line 50, Address: 0x39cc74, Func Offset: 0x34
	// Line 51, Address: 0x39cc7c, Func Offset: 0x3c
	// Line 55, Address: 0x39cc90, Func Offset: 0x50
	// Line 54, Address: 0x39cc94, Func Offset: 0x54
	// Line 55, Address: 0x39cc98, Func Offset: 0x58
	// Line 59, Address: 0x39ccac, Func Offset: 0x6c
	// Line 58, Address: 0x39ccb0, Func Offset: 0x70
	// Line 59, Address: 0x39ccb4, Func Offset: 0x74
	// Line 63, Address: 0x39ccc8, Func Offset: 0x88
	// Line 62, Address: 0x39cccc, Func Offset: 0x8c
	// Line 63, Address: 0x39ccd0, Func Offset: 0x90
	// Line 75, Address: 0x39cce0, Func Offset: 0xa0
	// Line 63, Address: 0x39ccec, Func Offset: 0xac
	// Line 75, Address: 0x39ccf0, Func Offset: 0xb0
	// Line 78, Address: 0x39ccf4, Func Offset: 0xb4
	// Line 75, Address: 0x39ccf8, Func Offset: 0xb8
	// Line 77, Address: 0x39cd08, Func Offset: 0xc8
	// Line 78, Address: 0x39cd0c, Func Offset: 0xcc
	// Line 81, Address: 0x39cd20, Func Offset: 0xe0
	// Line 82, Address: 0x39cd24, Func Offset: 0xe4
	// Line 83, Address: 0x39cd28, Func Offset: 0xe8
	// Line 84, Address: 0x39cd2c, Func Offset: 0xec
	// Line 88, Address: 0x39cd30, Func Offset: 0xf0
	// Line 89, Address: 0x39cd38, Func Offset: 0xf8
	// Line 91, Address: 0x39cd40, Func Offset: 0x100
	// Line 107, Address: 0x39cd58, Func Offset: 0x118
	// Line 108, Address: 0x39cd64, Func Offset: 0x124
	// Line 109, Address: 0x39cd70, Func Offset: 0x130
	// Line 117, Address: 0x39cd7c, Func Offset: 0x13c
	// Func End, Address: 0x39cd9c, Func Offset: 0x15c
}

