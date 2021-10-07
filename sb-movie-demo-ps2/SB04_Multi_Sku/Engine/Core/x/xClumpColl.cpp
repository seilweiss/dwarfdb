



int32 FastIntersectSphereTriangle(RwSphere* sphere, RwV3d* v0, RwV3d* v1, RwV3d* v2, RwV3d* normal, float32* distance, RwV3d* vc);
xClumpCollBSPTree* xClumpColl_ForAllIntersections(xClumpCollBSPTree* tree, RpIntersection* intersection, RpCollisionTriangle*(*callBack)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, float32, void*), void* data);
int32 LeafNodeBoxPolyIntersect(xClumpCollBSPTriangle* triangles, void* data);
int32 LeafNodeSpherePolyIntersect(xClumpCollBSPTriangle* triangles, void* data);
int32 LeafNodeLinePolyIntersect(xClumpCollBSPTriangle* triangles, void* data);
xClumpCollBSPTree* xClumpColl_ForAllCapsuleLeafNodeIntersections(xClumpCollBSPTree* tree, RwLine* line, float32 radius, xClumpCollV3dGradient* grad, int32(*callBack)(xClumpCollBSPTriangle*, void*), void* data);
xClumpCollBSPTree* xClumpColl_ForAllLineLeafNodeIntersections(xClumpCollBSPTree* tree, RwLine* line, xClumpCollV3dGradient* grad, int32(*callBack)(xClumpCollBSPTriangle*, void*), void* data);
xClumpCollBSPTree* xClumpColl_ForAllBoxLeafNodeIntersections(xClumpCollBSPTree* tree, RwBBox* box, int32(*callBack)(xClumpCollBSPTriangle*, void*), void* data);
void xClumpColl_InstancePointers();
xClumpCollBSPTree* xClumpColl_StaticBufferInit(void* data);

// FastIntersectSphereTriangle__FP8RwSphereP5RwV3dP5RwV3dP5RwV3dP5RwV3dPfP5RwV3d
// Start address: 0x42f380
int32 FastIntersectSphereTriangle(RwSphere* sphere, RwV3d* v0, RwV3d* v1, RwV3d* v2, RwV3d* normal, float32* distance, RwV3d* vc)
{
	float32 nDotN;
	float32 distToPlane;
	float32 sphereRadiusSquared;
	float32 factor;
	// Line 1458, Address: 0x42f380, Func Offset: 0
	// Line 1480, Address: 0x42f384, Func Offset: 0x4
	// Line 1481, Address: 0x42f390, Func Offset: 0x10
	// Line 1480, Address: 0x42f394, Func Offset: 0x14
	// Line 1481, Address: 0x42f3a4, Func Offset: 0x24
	// Line 1480, Address: 0x42f3ac, Func Offset: 0x2c
	// Line 1481, Address: 0x42f3b0, Func Offset: 0x30
	// Line 1482, Address: 0x42f3b8, Func Offset: 0x38
	// Line 1481, Address: 0x42f3bc, Func Offset: 0x3c
	// Line 1482, Address: 0x42f3c0, Func Offset: 0x40
	// Line 1485, Address: 0x42f400, Func Offset: 0x80
	// Line 1492, Address: 0x42f40c, Func Offset: 0x8c
	// Line 1493, Address: 0x42f444, Func Offset: 0xc4
	// Line 1496, Address: 0x42f448, Func Offset: 0xc8
	// Line 1493, Address: 0x42f450, Func Offset: 0xd0
	// Line 1496, Address: 0x42f470, Func Offset: 0xf0
	// Line 1499, Address: 0x42f498, Func Offset: 0x118
	// Line 1507, Address: 0x42f4b4, Func Offset: 0x134
	// Line 1510, Address: 0x42f4bc, Func Offset: 0x13c
	// Line 1513, Address: 0x42f4cc, Func Offset: 0x14c
	// Line 1514, Address: 0x42f4e0, Func Offset: 0x160
	// Line 1519, Address: 0x42f4f8, Func Offset: 0x178
	// Line 1520, Address: 0x42f50c, Func Offset: 0x18c
	// Line 1525, Address: 0x42f524, Func Offset: 0x1a4
	// Line 1526, Address: 0x42f538, Func Offset: 0x1b8
	// Line 1532, Address: 0x42f544, Func Offset: 0x1c4
	// Line 1534, Address: 0x42f550, Func Offset: 0x1d0
	// Line 1537, Address: 0x42f55c, Func Offset: 0x1dc
	// Line 1540, Address: 0x42f59c, Func Offset: 0x21c
	// Line 1546, Address: 0x42f5a4, Func Offset: 0x224
	// Line 1549, Address: 0x42f5e0, Func Offset: 0x260
	// Line 1555, Address: 0x42f5e8, Func Offset: 0x268
	// Line 1558, Address: 0x42f5f4, Func Offset: 0x274
	// Line 1561, Address: 0x42f630, Func Offset: 0x2b0
	// Line 1567, Address: 0x42f638, Func Offset: 0x2b8
	// Line 1570, Address: 0x42f674, Func Offset: 0x2f4
	// Line 1576, Address: 0x42f67c, Func Offset: 0x2fc
	// Line 1577, Address: 0x42f684, Func Offset: 0x304
	// Line 1576, Address: 0x42f688, Func Offset: 0x308
	// Line 1577, Address: 0x42f68c, Func Offset: 0x30c
	// Line 1581, Address: 0x42f6ac, Func Offset: 0x32c
	// Line 1583, Address: 0x42f6c4, Func Offset: 0x344
	// Line 1585, Address: 0x42f6d0, Func Offset: 0x350
	// Line 1589, Address: 0x42f6fc, Func Offset: 0x37c
	// Line 1593, Address: 0x42f704, Func Offset: 0x384
	// Line 1595, Address: 0x42f70c, Func Offset: 0x38c
	// Line 1593, Address: 0x42f710, Func Offset: 0x390
	// Line 1595, Address: 0x42f714, Func Offset: 0x394
	// Line 1599, Address: 0x42f734, Func Offset: 0x3b4
	// Line 1601, Address: 0x42f74c, Func Offset: 0x3cc
	// Line 1603, Address: 0x42f758, Func Offset: 0x3d8
	// Line 1607, Address: 0x42f784, Func Offset: 0x404
	// Line 1611, Address: 0x42f78c, Func Offset: 0x40c
	// Line 1612, Address: 0x42f794, Func Offset: 0x414
	// Line 1611, Address: 0x42f798, Func Offset: 0x418
	// Line 1612, Address: 0x42f79c, Func Offset: 0x41c
	// Line 1616, Address: 0x42f7bc, Func Offset: 0x43c
	// Line 1618, Address: 0x42f7d4, Func Offset: 0x454
	// Line 1620, Address: 0x42f7e0, Func Offset: 0x460
	// Line 1624, Address: 0x42f80c, Func Offset: 0x48c
	// Line 1488, Address: 0x42f814, Func Offset: 0x494
	// Line 1502, Address: 0x42f81c, Func Offset: 0x49c
	// Line 1517, Address: 0x42f828, Func Offset: 0x4a8
	// Line 1523, Address: 0x42f830, Func Offset: 0x4b0
	// Line 1529, Address: 0x42f838, Func Offset: 0x4b8
	// Line 1628, Address: 0x42f840, Func Offset: 0x4c0
	// Line 1629, Address: 0x42f844, Func Offset: 0x4c4
	// Func End, Address: 0x42f84c, Func Offset: 0x4cc
}

// xClumpColl_ForAllIntersections__FP17xClumpCollBSPTreeP14RpIntersectionPFP14RpIntersectionP13RpWorldSectorP19RpCollisionTrianglefPv_P19RpCollisionTrianglePv
// Start address: 0x42f850
xClumpCollBSPTree* xClumpColl_ForAllIntersections(xClumpCollBSPTree* tree, RpIntersection* intersection, RpCollisionTriangle*(*callBack)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, float32, void*), void* data)
{
	CallBackParam cbParam;
	PolyLineTestParam isData;
	PolyTestParam isData;
	TestSphere testSphere;
	PolyTestParam isData;
	// Line 1359, Address: 0x42f850, Func Offset: 0
	// Line 1371, Address: 0x42f854, Func Offset: 0x4
	// Line 1359, Address: 0x42f858, Func Offset: 0x8
	// Line 1368, Address: 0x42f860, Func Offset: 0x10
	// Line 1369, Address: 0x42f864, Func Offset: 0x14
	// Line 1367, Address: 0x42f868, Func Offset: 0x18
	// Line 1371, Address: 0x42f86c, Func Offset: 0x1c
	// Line 1376, Address: 0x42f8a0, Func Offset: 0x50
	// Line 1384, Address: 0x42f8a8, Func Offset: 0x58
	// Line 1385, Address: 0x42f8b0, Func Offset: 0x60
	// Line 1386, Address: 0x42f8b8, Func Offset: 0x68
	// Line 1390, Address: 0x42f8bc, Func Offset: 0x6c
	// Line 1384, Address: 0x42f8c0, Func Offset: 0x70
	// Line 1385, Address: 0x42f8d4, Func Offset: 0x84
	// Line 1387, Address: 0x42f8ec, Func Offset: 0x9c
	// Line 1385, Address: 0x42f8f0, Func Offset: 0xa0
	// Line 1390, Address: 0x42f900, Func Offset: 0xb0
	// Line 1385, Address: 0x42f904, Func Offset: 0xb4
	// Line 1386, Address: 0x42f908, Func Offset: 0xb8
	// Line 1385, Address: 0x42f90c, Func Offset: 0xbc
	// Line 1387, Address: 0x42f910, Func Offset: 0xc0
	// Line 1390, Address: 0x42f93c, Func Offset: 0xec
	// Line 1393, Address: 0x42f9f0, Func Offset: 0x1a0
	// Line 1390, Address: 0x42f9f4, Func Offset: 0x1a4
	// Line 1393, Address: 0x42f9fc, Func Offset: 0x1ac
	// Line 1390, Address: 0x42fa08, Func Offset: 0x1b8
	// Line 1393, Address: 0x42fa10, Func Offset: 0x1c0
	// Line 1399, Address: 0x42fa18, Func Offset: 0x1c8
	// Line 1408, Address: 0x42fa20, Func Offset: 0x1d0
	// Line 1412, Address: 0x42fa24, Func Offset: 0x1d4
	// Line 1408, Address: 0x42fa2c, Func Offset: 0x1dc
	// Line 1412, Address: 0x42fa40, Func Offset: 0x1f0
	// Line 1408, Address: 0x42fa48, Func Offset: 0x1f8
	// Line 1411, Address: 0x42fac8, Func Offset: 0x278
	// Line 1408, Address: 0x42facc, Func Offset: 0x27c
	// Line 1411, Address: 0x42fad0, Func Offset: 0x280
	// Line 1412, Address: 0x42fad4, Func Offset: 0x284
	// Line 1413, Address: 0x42faf0, Func Offset: 0x2a0
	// Line 1419, Address: 0x42fafc, Func Offset: 0x2ac
	// Line 1415, Address: 0x42fb04, Func Offset: 0x2b4
	// Line 1416, Address: 0x42fb08, Func Offset: 0x2b8
	// Line 1419, Address: 0x42fb0c, Func Offset: 0x2bc
	// Line 1413, Address: 0x42fb18, Func Offset: 0x2c8
	// Line 1415, Address: 0x42fb20, Func Offset: 0x2d0
	// Line 1416, Address: 0x42fb24, Func Offset: 0x2d4
	// Line 1419, Address: 0x42fb28, Func Offset: 0x2d8
	// Line 1424, Address: 0x42fb30, Func Offset: 0x2e0
	// Line 1431, Address: 0x42fb38, Func Offset: 0x2e8
	// Line 1437, Address: 0x42fb3c, Func Offset: 0x2ec
	// Line 1431, Address: 0x42fb40, Func Offset: 0x2f0
	// Line 1434, Address: 0x42fb4c, Func Offset: 0x2fc
	// Line 1437, Address: 0x42fb50, Func Offset: 0x300
	// Line 1431, Address: 0x42fb54, Func Offset: 0x304
	// Line 1437, Address: 0x42fb70, Func Offset: 0x320
	// Line 1431, Address: 0x42fb74, Func Offset: 0x324
	// Line 1434, Address: 0x42fb78, Func Offset: 0x328
	// Line 1437, Address: 0x42fb7c, Func Offset: 0x32c
	// Line 1442, Address: 0x42fb84, Func Offset: 0x334
	// Line 1450, Address: 0x42fb88, Func Offset: 0x338
	// Func End, Address: 0x42fb98, Func Offset: 0x348
}

// LeafNodeBoxPolyIntersect__FP21xClumpCollBSPTrianglePv
// Start address: 0x42fba0
int32 LeafNodeBoxPolyIntersect(xClumpCollBSPTriangle* triangles, void* data)
{
	PolyTestParam* isData;
	CallBackParam* cbParam;
	RwV3d* v1;
	RwV3d* v2;
	RpCollisionTriangle collisionTri;
	float32 lengthSq;
	// Line 1303, Address: 0x42fba0, Func Offset: 0
	// Line 1307, Address: 0x42fbb0, Func Offset: 0x10
	// Line 1303, Address: 0x42fbb4, Func Offset: 0x14
	// Line 1306, Address: 0x42fbb8, Func Offset: 0x18
	// Line 1303, Address: 0x42fbbc, Func Offset: 0x1c
	// Line 1307, Address: 0x42fbc0, Func Offset: 0x20
	// Line 1303, Address: 0x42fbc4, Func Offset: 0x24
	// Line 1307, Address: 0x42fbc8, Func Offset: 0x28
	// Line 1303, Address: 0x42fbcc, Func Offset: 0x2c
	// Line 1307, Address: 0x42fbe0, Func Offset: 0x40
	// Line 1315, Address: 0x42fbe8, Func Offset: 0x48
	// Line 1318, Address: 0x42fc18, Func Offset: 0x78
	// Line 1319, Address: 0x42fc24, Func Offset: 0x84
	// Line 1321, Address: 0x42fc28, Func Offset: 0x88
	// Line 1322, Address: 0x42fc30, Func Offset: 0x90
	// Line 1323, Address: 0x42fc34, Func Offset: 0x94
	// Line 1327, Address: 0x42fc38, Func Offset: 0x98
	// Line 1330, Address: 0x42fc54, Func Offset: 0xb4
	// Line 1332, Address: 0x42fc5c, Func Offset: 0xbc
	// Line 1330, Address: 0x42fc60, Func Offset: 0xc0
	// Line 1331, Address: 0x42fc78, Func Offset: 0xd8
	// Line 1332, Address: 0x42fc84, Func Offset: 0xe4
	// Line 1333, Address: 0x42fd20, Func Offset: 0x180
	// Line 1332, Address: 0x42fd24, Func Offset: 0x184
	// Line 1333, Address: 0x42fd28, Func Offset: 0x188
	// Line 1332, Address: 0x42fd2c, Func Offset: 0x18c
	// Line 1334, Address: 0x42fd30, Func Offset: 0x190
	// Line 1332, Address: 0x42fd38, Func Offset: 0x198
	// Line 1335, Address: 0x42fd3c, Func Offset: 0x19c
	// Line 1338, Address: 0x42fd40, Func Offset: 0x1a0
	// Line 1335, Address: 0x42fd44, Func Offset: 0x1a4
	// Line 1338, Address: 0x42fd48, Func Offset: 0x1a8
	// Line 1332, Address: 0x42fd4c, Func Offset: 0x1ac
	// Line 1338, Address: 0x42fd64, Func Offset: 0x1c4
	// Line 1342, Address: 0x42fd80, Func Offset: 0x1e0
	// Line 1348, Address: 0x42fd88, Func Offset: 0x1e8
	// Line 1349, Address: 0x42fd8c, Func Offset: 0x1ec
	// Line 1351, Address: 0x42fd9c, Func Offset: 0x1fc
	// Line 1352, Address: 0x42fdb8, Func Offset: 0x218
	// Func End, Address: 0x42fde8, Func Offset: 0x248
}

// LeafNodeSpherePolyIntersect__FP21xClumpCollBSPTrianglePv
// Start address: 0x42fdf0
int32 LeafNodeSpherePolyIntersect(xClumpCollBSPTriangle* triangles, void* data)
{
	PolyTestParam* isData;
	CallBackParam* cbParam;
	TestSphere* testSphere;
	RwV3d* v0;
	RwV3d* v1;
	RwV3d* v2;
	float32 distance;
	RpCollisionTriangle collisionTri;
	RwV3d vc[3];
	// Line 1232, Address: 0x42fdf0, Func Offset: 0
	// Line 1237, Address: 0x42fe00, Func Offset: 0x10
	// Line 1232, Address: 0x42fe04, Func Offset: 0x14
	// Line 1237, Address: 0x42fe08, Func Offset: 0x18
	// Line 1232, Address: 0x42fe0c, Func Offset: 0x1c
	// Line 1237, Address: 0x42fe10, Func Offset: 0x20
	// Line 1232, Address: 0x42fe14, Func Offset: 0x24
	// Line 1237, Address: 0x42fe18, Func Offset: 0x28
	// Line 1232, Address: 0x42fe1c, Func Offset: 0x2c
	// Line 1237, Address: 0x42fe30, Func Offset: 0x40
	// Line 1236, Address: 0x42fe34, Func Offset: 0x44
	// Line 1237, Address: 0x42fe38, Func Offset: 0x48
	// Line 1246, Address: 0x42fe44, Func Offset: 0x54
	// Line 1249, Address: 0x42fe78, Func Offset: 0x88
	// Line 1250, Address: 0x42fe84, Func Offset: 0x94
	// Line 1252, Address: 0x42fe88, Func Offset: 0x98
	// Line 1253, Address: 0x42fe90, Func Offset: 0xa0
	// Line 1254, Address: 0x42fe94, Func Offset: 0xa4
	// Line 1260, Address: 0x42fe98, Func Offset: 0xa8
	// Line 1261, Address: 0x42ff94, Func Offset: 0x1a4
	// Line 1273, Address: 0x42ffac, Func Offset: 0x1bc
	// Line 1277, Address: 0x42ffb0, Func Offset: 0x1c0
	// Line 1280, Address: 0x42ffb4, Func Offset: 0x1c4
	// Line 1273, Address: 0x42ffb8, Func Offset: 0x1c8
	// Line 1275, Address: 0x42ffc8, Func Offset: 0x1d8
	// Line 1273, Address: 0x42ffcc, Func Offset: 0x1dc
	// Line 1276, Address: 0x42ffd0, Func Offset: 0x1e0
	// Line 1282, Address: 0x42ffd4, Func Offset: 0x1e4
	// Line 1274, Address: 0x42ffd8, Func Offset: 0x1e8
	// Line 1277, Address: 0x42ffdc, Func Offset: 0x1ec
	// Line 1280, Address: 0x42ffe0, Func Offset: 0x1f0
	// Line 1282, Address: 0x42ffec, Func Offset: 0x1fc
	// Line 1287, Address: 0x43000c, Func Offset: 0x21c
	// Line 1296, Address: 0x430014, Func Offset: 0x224
	// Line 1297, Address: 0x430018, Func Offset: 0x228
	// Line 1300, Address: 0x430028, Func Offset: 0x238
	// Func End, Address: 0x430058, Func Offset: 0x268
}

// LeafNodeLinePolyIntersect__FP21xClumpCollBSPTrianglePv
// Start address: 0x430060
int32 LeafNodeLinePolyIntersect(xClumpCollBSPTriangle* triangles, void* data)
{
	PolyLineTestParam* isData;
	CallBackParam* cbParam;
	RwV3d* v0;
	RwV3d* v1;
	RwV3d* v2;
	float32 distance;
	RpCollisionTriangle collisionTri;
	RwV3d vTmp;
	RwV3d vTmp2;
	// Line 1160, Address: 0x430060, Func Offset: 0
	// Line 1164, Address: 0x430074, Func Offset: 0x14
	// Line 1160, Address: 0x430078, Func Offset: 0x18
	// Line 1164, Address: 0x43007c, Func Offset: 0x1c
	// Line 1160, Address: 0x430080, Func Offset: 0x20
	// Line 1164, Address: 0x430084, Func Offset: 0x24
	// Line 1160, Address: 0x430088, Func Offset: 0x28
	// Line 1164, Address: 0x43008c, Func Offset: 0x2c
	// Line 1160, Address: 0x430090, Func Offset: 0x30
	// Line 1164, Address: 0x4300a8, Func Offset: 0x48
	// Line 1160, Address: 0x4300ac, Func Offset: 0x4c
	// Line 1164, Address: 0x4300b0, Func Offset: 0x50
	// Line 1160, Address: 0x4300b4, Func Offset: 0x54
	// Line 1164, Address: 0x4300b8, Func Offset: 0x58
	// Line 1169, Address: 0x4300c4, Func Offset: 0x64
	// Line 1173, Address: 0x4300cc, Func Offset: 0x6c
	// Line 1177, Address: 0x430100, Func Offset: 0xa0
	// Line 1178, Address: 0x43010c, Func Offset: 0xac
	// Line 1180, Address: 0x430110, Func Offset: 0xb0
	// Line 1181, Address: 0x430118, Func Offset: 0xb8
	// Line 1182, Address: 0x43011c, Func Offset: 0xbc
	// Line 1194, Address: 0x430120, Func Offset: 0xc0
	// Line 1201, Address: 0x4302bc, Func Offset: 0x25c
	// Line 1203, Address: 0x4302d8, Func Offset: 0x278
	// Line 1201, Address: 0x4302dc, Func Offset: 0x27c
	// Line 1205, Address: 0x4302e0, Func Offset: 0x280
	// Line 1202, Address: 0x4302e4, Func Offset: 0x284
	// Line 1209, Address: 0x4302e8, Func Offset: 0x288
	// Line 1202, Address: 0x4302ec, Func Offset: 0x28c
	// Line 1204, Address: 0x4302f0, Func Offset: 0x290
	// Line 1209, Address: 0x4302f4, Func Offset: 0x294
	// Line 1211, Address: 0x4303c8, Func Offset: 0x368
	// Line 1209, Address: 0x4303cc, Func Offset: 0x36c
	// Line 1211, Address: 0x4303d8, Func Offset: 0x378
	// Line 1209, Address: 0x4303dc, Func Offset: 0x37c
	// Line 1211, Address: 0x4303f4, Func Offset: 0x394
	// Line 1216, Address: 0x430410, Func Offset: 0x3b0
	// Line 1225, Address: 0x430418, Func Offset: 0x3b8
	// Line 1226, Address: 0x43041c, Func Offset: 0x3bc
	// Line 1229, Address: 0x43042c, Func Offset: 0x3cc
	// Func End, Address: 0x430464, Func Offset: 0x404
}

// xClumpColl_ForAllCapsuleLeafNodeIntersections__FP17xClumpCollBSPTreeP6RwLinefP21xClumpCollV3dGradientPFP21xClumpCollBSPTrianglePv_iPv
// Start address: 0x430470
xClumpCollBSPTree* xClumpColl_ForAllCapsuleLeafNodeIntersections(xClumpCollBSPTree* tree, RwLine* line, float32 radius, xClumpCollV3dGradient* grad, int32(*callBack)(xClumpCollBSPTriangle*, void*), void* data)
{
	int32 nStack;
	nodeInfo nodeStack[33];
	RwLine lineStack[33];
	RwLine currLine;
	RwSplitBits lStart;
	RwSplitBits lEnd;
	RwSplitBits rStart;
	RwSplitBits rEnd;
	xClumpCollBSPBranchNode* branch;
	RwV3d vTmp;
	float32 delta;
	RwV3d vTmp;
	float32 delta;
	RwV3d vLeft;
	RwV3d vRight;
	float32 delta;
	float32 delta;
	// Line 937, Address: 0x430470, Func Offset: 0
	// Line 941, Address: 0x430474, Func Offset: 0x4
	// Line 937, Address: 0x430478, Func Offset: 0x8
	// Line 941, Address: 0x43047c, Func Offset: 0xc
	// Line 937, Address: 0x430480, Func Offset: 0x10
	// Line 954, Address: 0x430484, Func Offset: 0x14
	// Line 937, Address: 0x430488, Func Offset: 0x18
	// Line 956, Address: 0x43048c, Func Offset: 0x1c
	// Line 937, Address: 0x430490, Func Offset: 0x20
	// Line 958, Address: 0x430494, Func Offset: 0x24
	// Line 937, Address: 0x430498, Func Offset: 0x28
	// Line 958, Address: 0x43049c, Func Offset: 0x2c
	// Line 937, Address: 0x4304a0, Func Offset: 0x30
	// Line 958, Address: 0x4304ac, Func Offset: 0x3c
	// Line 937, Address: 0x4304b0, Func Offset: 0x40
	// Line 957, Address: 0x4304b4, Func Offset: 0x44
	// Line 937, Address: 0x4304b8, Func Offset: 0x48
	// Line 958, Address: 0x4304bc, Func Offset: 0x4c
	// Line 937, Address: 0x4304c0, Func Offset: 0x50
	// Line 958, Address: 0x4304c4, Func Offset: 0x54
	// Line 937, Address: 0x4304c8, Func Offset: 0x58
	// Line 954, Address: 0x4304d4, Func Offset: 0x64
	// Line 941, Address: 0x4304d8, Func Offset: 0x68
	// Line 958, Address: 0x4304e4, Func Offset: 0x74
	// Line 957, Address: 0x4304ec, Func Offset: 0x7c
	// Line 954, Address: 0x4304f4, Func Offset: 0x84
	// Line 957, Address: 0x4304f8, Func Offset: 0x88
	// Line 954, Address: 0x4304fc, Func Offset: 0x8c
	// Line 957, Address: 0x430500, Func Offset: 0x90
	// Line 962, Address: 0x430524, Func Offset: 0xb4
	// Line 997, Address: 0x430530, Func Offset: 0xc0
	// Line 1005, Address: 0x430548, Func Offset: 0xd8
	// Line 997, Address: 0x430554, Func Offset: 0xe4
	// Line 1003, Address: 0x430558, Func Offset: 0xe8
	// Line 1005, Address: 0x43056c, Func Offset: 0xfc
	// Line 1007, Address: 0x430578, Func Offset: 0x108
	// Line 1009, Address: 0x430580, Func Offset: 0x110
	// Line 1017, Address: 0x430584, Func Offset: 0x114
	// Line 1023, Address: 0x430590, Func Offset: 0x120
	// Line 1026, Address: 0x4305ac, Func Offset: 0x13c
	// Line 1027, Address: 0x4305b0, Func Offset: 0x140
	// Line 1153, Address: 0x4305b4, Func Offset: 0x144
	// Line 1156, Address: 0x4305c0, Func Offset: 0x150
	// Line 968, Address: 0x4305c8, Func Offset: 0x158
	// Line 1156, Address: 0x4305cc, Func Offset: 0x15c
	// Line 977, Address: 0x430644, Func Offset: 0x1d4
	// Line 970, Address: 0x430650, Func Offset: 0x1e0
	// Line 1156, Address: 0x430658, Func Offset: 0x1e8
	// Line 1020, Address: 0x430664, Func Offset: 0x1f4
	// Line 1022, Address: 0x430668, Func Offset: 0x1f8
	// Line 1156, Address: 0x430670, Func Offset: 0x200
	// Line 1029, Address: 0x430678, Func Offset: 0x208
	// Line 1156, Address: 0x43067c, Func Offset: 0x20c
	// Line 1029, Address: 0x430680, Func Offset: 0x210
	// Line 1156, Address: 0x430684, Func Offset: 0x214
	// Line 1049, Address: 0x43068c, Func Offset: 0x21c
	// Line 1156, Address: 0x430690, Func Offset: 0x220
	// Line 1052, Address: 0x430698, Func Offset: 0x228
	// Line 1156, Address: 0x43069c, Func Offset: 0x22c
	// Line 1052, Address: 0x4306a0, Func Offset: 0x230
	// Line 1156, Address: 0x4306a4, Func Offset: 0x234
	// Line 1056, Address: 0x4306d0, Func Offset: 0x260
	// Line 1156, Address: 0x4306d8, Func Offset: 0x268
	// Line 1061, Address: 0x4306ec, Func Offset: 0x27c
	// Line 1156, Address: 0x4306f4, Func Offset: 0x284
	// Line 1061, Address: 0x43070c, Func Offset: 0x29c
	// Line 1156, Address: 0x430718, Func Offset: 0x2a8
	// Line 1061, Address: 0x430730, Func Offset: 0x2c0
	// Line 1156, Address: 0x430748, Func Offset: 0x2d8
	// Line 1061, Address: 0x430750, Func Offset: 0x2e0
	// Line 1156, Address: 0x430758, Func Offset: 0x2e8
	// Line 1061, Address: 0x430768, Func Offset: 0x2f8
	// Line 1156, Address: 0x43076c, Func Offset: 0x2fc
	// Line 1061, Address: 0x430774, Func Offset: 0x304
	// Line 1156, Address: 0x430780, Func Offset: 0x310
	// Line 1061, Address: 0x430788, Func Offset: 0x318
	// Line 1156, Address: 0x430798, Func Offset: 0x328
	// Line 1061, Address: 0x4307a8, Func Offset: 0x338
	// Line 1156, Address: 0x4307ac, Func Offset: 0x33c
	// Line 1061, Address: 0x4307b4, Func Offset: 0x344
	// Line 1156, Address: 0x4307c0, Func Offset: 0x350
	// Line 1061, Address: 0x4307c8, Func Offset: 0x358
	// Line 1156, Address: 0x4307d0, Func Offset: 0x360
	// Line 1061, Address: 0x4307d4, Func Offset: 0x364
	// Line 1156, Address: 0x4307d8, Func Offset: 0x368
	// Line 1078, Address: 0x430828, Func Offset: 0x3b8
	// Line 1156, Address: 0x43082c, Func Offset: 0x3bc
	// Line 1078, Address: 0x430834, Func Offset: 0x3c4
	// Line 1156, Address: 0x430838, Func Offset: 0x3c8
	// Line 1079, Address: 0x430840, Func Offset: 0x3d0
	// Line 1080, Address: 0x430844, Func Offset: 0x3d4
	// Line 1156, Address: 0x430848, Func Offset: 0x3d8
	// Line 1082, Address: 0x430854, Func Offset: 0x3e4
	// Line 1156, Address: 0x430860, Func Offset: 0x3f0
	// Line 1083, Address: 0x430868, Func Offset: 0x3f8
	// Line 1156, Address: 0x43086c, Func Offset: 0x3fc
	// Line 1083, Address: 0x430870, Func Offset: 0x400
	// Line 1156, Address: 0x430874, Func Offset: 0x404
	// Line 1087, Address: 0x4308a0, Func Offset: 0x430
	// Line 1156, Address: 0x4308a8, Func Offset: 0x438
	// Line 1092, Address: 0x4308bc, Func Offset: 0x44c
	// Line 1156, Address: 0x4308c4, Func Offset: 0x454
	// Line 1092, Address: 0x4308dc, Func Offset: 0x46c
	// Line 1156, Address: 0x4308e8, Func Offset: 0x478
	// Line 1092, Address: 0x430904, Func Offset: 0x494
	// Line 1156, Address: 0x430918, Func Offset: 0x4a8
	// Line 1092, Address: 0x43091c, Func Offset: 0x4ac
	// Line 1156, Address: 0x430920, Func Offset: 0x4b0
	// Line 1092, Address: 0x430928, Func Offset: 0x4b8
	// Line 1156, Address: 0x430930, Func Offset: 0x4c0
	// Line 1092, Address: 0x430944, Func Offset: 0x4d4
	// Line 1156, Address: 0x430948, Func Offset: 0x4d8
	// Line 1092, Address: 0x430950, Func Offset: 0x4e0
	// Line 1156, Address: 0x430954, Func Offset: 0x4e4
	// Line 1092, Address: 0x430958, Func Offset: 0x4e8
	// Line 1156, Address: 0x430960, Func Offset: 0x4f0
	// Line 1092, Address: 0x430968, Func Offset: 0x4f8
	// Line 1156, Address: 0x430978, Func Offset: 0x508
	// Line 1092, Address: 0x43098c, Func Offset: 0x51c
	// Line 1156, Address: 0x430990, Func Offset: 0x520
	// Line 1092, Address: 0x430998, Func Offset: 0x528
	// Line 1156, Address: 0x43099c, Func Offset: 0x52c
	// Line 1092, Address: 0x4309a0, Func Offset: 0x530
	// Line 1156, Address: 0x4309a8, Func Offset: 0x538
	// Line 1092, Address: 0x4309b0, Func Offset: 0x540
	// Line 1156, Address: 0x4309b8, Func Offset: 0x548
	// Line 1092, Address: 0x4309bc, Func Offset: 0x54c
	// Line 1156, Address: 0x4309c0, Func Offset: 0x550
	// Line 1108, Address: 0x430a10, Func Offset: 0x5a0
	// Line 1156, Address: 0x430a14, Func Offset: 0x5a4
	// Line 1108, Address: 0x430a1c, Func Offset: 0x5ac
	// Line 1156, Address: 0x430a20, Func Offset: 0x5b0
	// Line 1109, Address: 0x430a2c, Func Offset: 0x5bc
	// Line 1156, Address: 0x430a30, Func Offset: 0x5c0
	// Line 1110, Address: 0x430a34, Func Offset: 0x5c4
	// Line 1156, Address: 0x430a38, Func Offset: 0x5c8
	// Line 1113, Address: 0x430a5c, Func Offset: 0x5ec
	// Line 1156, Address: 0x430a68, Func Offset: 0x5f8
	// Line 1029, Address: 0x430a74, Func Offset: 0x604
	// Line 1156, Address: 0x430a78, Func Offset: 0x608
	// Line 1037, Address: 0x430ad8, Func Offset: 0x668
	// Line 1156, Address: 0x430adc, Func Offset: 0x66c
	// Line 1037, Address: 0x430ae4, Func Offset: 0x674
	// Line 1156, Address: 0x430ae8, Func Offset: 0x678
	// Line 1038, Address: 0x430af0, Func Offset: 0x680
	// Line 1039, Address: 0x430af4, Func Offset: 0x684
	// Line 1156, Address: 0x430af8, Func Offset: 0x688
	// Line 1040, Address: 0x430b04, Func Offset: 0x694
	// Line 1045, Address: 0x430b0c, Func Offset: 0x69c
	// Line 1156, Address: 0x430b10, Func Offset: 0x6a0
	// Line 1045, Address: 0x430b18, Func Offset: 0x6a8
	// Line 1156, Address: 0x430b1c, Func Offset: 0x6ac
	// Line 1045, Address: 0x430b2c, Func Offset: 0x6bc
	// Line 1156, Address: 0x430b3c, Func Offset: 0x6cc
	// Line 1046, Address: 0x430b54, Func Offset: 0x6e4
	// Line 1156, Address: 0x430b58, Func Offset: 0x6e8
	// Line 1047, Address: 0x430b60, Func Offset: 0x6f0
	// Line 1156, Address: 0x430b64, Func Offset: 0x6f4
	// Line 1049, Address: 0x430b7c, Func Offset: 0x70c
	// Line 1156, Address: 0x430b88, Func Offset: 0x718
	// Line 1068, Address: 0x430bcc, Func Offset: 0x75c
	// Line 1156, Address: 0x430bd0, Func Offset: 0x760
	// Line 1068, Address: 0x430bdc, Func Offset: 0x76c
	// Line 1156, Address: 0x430be0, Func Offset: 0x770
	// Line 1069, Address: 0x430bec, Func Offset: 0x77c
	// Line 1070, Address: 0x430bf0, Func Offset: 0x780
	// Line 1156, Address: 0x430bf4, Func Offset: 0x784
	// Line 1072, Address: 0x430c10, Func Offset: 0x7a0
	// Line 1156, Address: 0x430c18, Func Offset: 0x7a8
	// Line 1099, Address: 0x430c4c, Func Offset: 0x7dc
	// Line 1156, Address: 0x430c50, Func Offset: 0x7e0
	// Line 1099, Address: 0x430c58, Func Offset: 0x7e8
	// Line 1156, Address: 0x430c5c, Func Offset: 0x7ec
	// Line 1100, Address: 0x430c68, Func Offset: 0x7f8
	// Line 1156, Address: 0x430c6c, Func Offset: 0x7fc
	// Line 1101, Address: 0x430c78, Func Offset: 0x808
	// Line 1156, Address: 0x430c7c, Func Offset: 0x80c
	// Line 1102, Address: 0x430c90, Func Offset: 0x820
	// Line 1156, Address: 0x430c98, Func Offset: 0x828
	// Line 1117, Address: 0x430ca8, Func Offset: 0x838
	// Line 1156, Address: 0x430cb0, Func Offset: 0x840
	// Line 1117, Address: 0x430cd0, Func Offset: 0x860
	// Line 1156, Address: 0x430cd8, Func Offset: 0x868
	// Line 1122, Address: 0x430cec, Func Offset: 0x87c
	// Line 1156, Address: 0x430cf4, Func Offset: 0x884
	// Line 1122, Address: 0x430d0c, Func Offset: 0x89c
	// Line 1156, Address: 0x430d18, Func Offset: 0x8a8
	// Line 1122, Address: 0x430d34, Func Offset: 0x8c4
	// Line 1156, Address: 0x430d48, Func Offset: 0x8d8
	// Line 1122, Address: 0x430d4c, Func Offset: 0x8dc
	// Line 1156, Address: 0x430d50, Func Offset: 0x8e0
	// Line 1122, Address: 0x430d58, Func Offset: 0x8e8
	// Line 1156, Address: 0x430d60, Func Offset: 0x8f0
	// Line 1122, Address: 0x430d74, Func Offset: 0x904
	// Line 1156, Address: 0x430d78, Func Offset: 0x908
	// Line 1122, Address: 0x430d80, Func Offset: 0x910
	// Line 1156, Address: 0x430d84, Func Offset: 0x914
	// Line 1122, Address: 0x430d88, Func Offset: 0x918
	// Line 1156, Address: 0x430d90, Func Offset: 0x920
	// Line 1122, Address: 0x430d98, Func Offset: 0x928
	// Line 1156, Address: 0x430da8, Func Offset: 0x938
	// Line 1122, Address: 0x430dbc, Func Offset: 0x94c
	// Line 1156, Address: 0x430dc0, Func Offset: 0x950
	// Line 1122, Address: 0x430dc8, Func Offset: 0x958
	// Line 1156, Address: 0x430dcc, Func Offset: 0x95c
	// Line 1122, Address: 0x430dd0, Func Offset: 0x960
	// Line 1156, Address: 0x430dd8, Func Offset: 0x968
	// Line 1122, Address: 0x430de0, Func Offset: 0x970
	// Line 1156, Address: 0x430de8, Func Offset: 0x978
	// Line 1126, Address: 0x430dec, Func Offset: 0x97c
	// Line 1156, Address: 0x430df0, Func Offset: 0x980
	// Line 1126, Address: 0x430df4, Func Offset: 0x984
	// Line 1156, Address: 0x430dfc, Func Offset: 0x98c
	// Line 1126, Address: 0x430e14, Func Offset: 0x9a4
	// Line 1156, Address: 0x430e20, Func Offset: 0x9b0
	// Line 1126, Address: 0x430e3c, Func Offset: 0x9cc
	// Line 1156, Address: 0x430e50, Func Offset: 0x9e0
	// Line 1126, Address: 0x430e54, Func Offset: 0x9e4
	// Line 1156, Address: 0x430e58, Func Offset: 0x9e8
	// Line 1126, Address: 0x430e60, Func Offset: 0x9f0
	// Line 1156, Address: 0x430e68, Func Offset: 0x9f8
	// Line 1126, Address: 0x430e7c, Func Offset: 0xa0c
	// Line 1156, Address: 0x430e80, Func Offset: 0xa10
	// Line 1126, Address: 0x430e88, Func Offset: 0xa18
	// Line 1156, Address: 0x430e8c, Func Offset: 0xa1c
	// Line 1126, Address: 0x430e90, Func Offset: 0xa20
	// Line 1156, Address: 0x430e98, Func Offset: 0xa28
	// Line 1126, Address: 0x430ea0, Func Offset: 0xa30
	// Line 1156, Address: 0x430eb0, Func Offset: 0xa40
	// Line 1126, Address: 0x430ec4, Func Offset: 0xa54
	// Line 1156, Address: 0x430ec8, Func Offset: 0xa58
	// Line 1126, Address: 0x430ed0, Func Offset: 0xa60
	// Line 1156, Address: 0x430ed4, Func Offset: 0xa64
	// Line 1126, Address: 0x430ed8, Func Offset: 0xa68
	// Line 1156, Address: 0x430ee0, Func Offset: 0xa70
	// Line 1126, Address: 0x430ee8, Func Offset: 0xa78
	// Line 1156, Address: 0x430ef0, Func Offset: 0xa80
	// Line 1126, Address: 0x430ef4, Func Offset: 0xa84
	// Line 1156, Address: 0x430ef8, Func Offset: 0xa88
	// Line 1144, Address: 0x430f40, Func Offset: 0xad0
	// Line 1156, Address: 0x430f44, Func Offset: 0xad4
	// Line 1144, Address: 0x430f4c, Func Offset: 0xadc
	// Line 1156, Address: 0x430f50, Func Offset: 0xae0
	// Line 1145, Address: 0x430f5c, Func Offset: 0xaec
	// Line 1156, Address: 0x430f60, Func Offset: 0xaf0
	// Line 1146, Address: 0x430f80, Func Offset: 0xb10
	// Line 1156, Address: 0x430f84, Func Offset: 0xb14
	// Line 1133, Address: 0x430fe0, Func Offset: 0xb70
	// Line 1156, Address: 0x430fe4, Func Offset: 0xb74
	// Line 1133, Address: 0x430fec, Func Offset: 0xb7c
	// Line 1156, Address: 0x430ff0, Func Offset: 0xb80
	// Line 1134, Address: 0x430ffc, Func Offset: 0xb8c
	// Line 1156, Address: 0x431000, Func Offset: 0xb90
	// Line 1135, Address: 0x431014, Func Offset: 0xba4
	// Line 1156, Address: 0x431018, Func Offset: 0xba8
	// Line 1137, Address: 0x431040, Func Offset: 0xbd0
	// Line 1157, Address: 0x431048, Func Offset: 0xbd8
	// Func End, Address: 0x43107c, Func Offset: 0xc0c
}

// xClumpColl_ForAllLineLeafNodeIntersections__FP17xClumpCollBSPTreeP6RwLineP21xClumpCollV3dGradientPFP21xClumpCollBSPTrianglePv_iPv
// Start address: 0x431080
xClumpCollBSPTree* xClumpColl_ForAllLineLeafNodeIntersections(xClumpCollBSPTree* tree, RwLine* line, xClumpCollV3dGradient* grad, int32(*callBack)(xClumpCollBSPTriangle*, void*), void* data)
{
	int32 nStack;
	nodeInfo nodeStack[33];
	RwLine lineStack[33];
	RwLine currLine;
	RwSplitBits lStart;
	RwSplitBits lEnd;
	RwSplitBits rStart;
	RwSplitBits rEnd;
	xClumpCollBSPBranchNode* branch;
	RwV3d vTmp;
	float32 delta;
	RwV3d vTmp;
	float32 delta;
	RwV3d vLeft;
	RwV3d vRight;
	float32 delta;
	float32 delta;
	// Line 707, Address: 0x431080, Func Offset: 0
	// Line 719, Address: 0x431084, Func Offset: 0x4
	// Line 707, Address: 0x431088, Func Offset: 0x8
	// Line 721, Address: 0x43108c, Func Offset: 0xc
	// Line 707, Address: 0x431090, Func Offset: 0x10
	// Line 723, Address: 0x431098, Func Offset: 0x18
	// Line 707, Address: 0x43109c, Func Offset: 0x1c
	// Line 723, Address: 0x4310a0, Func Offset: 0x20
	// Line 707, Address: 0x4310a4, Func Offset: 0x24
	// Line 723, Address: 0x4310a8, Func Offset: 0x28
	// Line 707, Address: 0x4310ac, Func Offset: 0x2c
	// Line 723, Address: 0x4310b8, Func Offset: 0x38
	// Line 707, Address: 0x4310bc, Func Offset: 0x3c
	// Line 722, Address: 0x4310c0, Func Offset: 0x40
	// Line 707, Address: 0x4310c4, Func Offset: 0x44
	// Line 723, Address: 0x4310c8, Func Offset: 0x48
	// Line 707, Address: 0x4310cc, Func Offset: 0x4c
	// Line 723, Address: 0x4310d0, Func Offset: 0x50
	// Line 722, Address: 0x4310d4, Func Offset: 0x54
	// Line 719, Address: 0x4310d8, Func Offset: 0x58
	// Line 722, Address: 0x4310dc, Func Offset: 0x5c
	// Line 723, Address: 0x4310f8, Func Offset: 0x78
	// Line 722, Address: 0x4310fc, Func Offset: 0x7c
	// Line 719, Address: 0x431100, Func Offset: 0x80
	// Line 722, Address: 0x431104, Func Offset: 0x84
	// Line 719, Address: 0x431108, Func Offset: 0x88
	// Line 722, Address: 0x43110c, Func Offset: 0x8c
	// Line 727, Address: 0x431120, Func Offset: 0xa0
	// Line 762, Address: 0x43112c, Func Offset: 0xac
	// Line 770, Address: 0x431144, Func Offset: 0xc4
	// Line 762, Address: 0x431150, Func Offset: 0xd0
	// Line 768, Address: 0x431154, Func Offset: 0xd4
	// Line 770, Address: 0x431164, Func Offset: 0xe4
	// Line 772, Address: 0x43116c, Func Offset: 0xec
	// Line 782, Address: 0x431174, Func Offset: 0xf4
	// Line 774, Address: 0x431178, Func Offset: 0xf8
	// Line 782, Address: 0x43117c, Func Offset: 0xfc
	// Line 787, Address: 0x431184, Func Offset: 0x104
	// Line 788, Address: 0x431188, Func Offset: 0x108
	// Line 791, Address: 0x4311a4, Func Offset: 0x124
	// Line 792, Address: 0x4311a8, Func Offset: 0x128
	// Line 918, Address: 0x4311ac, Func Offset: 0x12c
	// Line 921, Address: 0x4311b8, Func Offset: 0x138
	// Line 733, Address: 0x4311c0, Func Offset: 0x140
	// Line 921, Address: 0x4311c4, Func Offset: 0x144
	// Line 742, Address: 0x43123c, Func Offset: 0x1bc
	// Line 735, Address: 0x431248, Func Offset: 0x1c8
	// Line 921, Address: 0x431250, Func Offset: 0x1d0
	// Line 785, Address: 0x43125c, Func Offset: 0x1dc
	// Line 787, Address: 0x431260, Func Offset: 0x1e0
	// Line 921, Address: 0x431268, Func Offset: 0x1e8
	// Line 794, Address: 0x431270, Func Offset: 0x1f0
	// Line 921, Address: 0x431274, Func Offset: 0x1f4
	// Line 794, Address: 0x431278, Func Offset: 0x1f8
	// Line 921, Address: 0x43127c, Func Offset: 0x1fc
	// Line 814, Address: 0x431284, Func Offset: 0x204
	// Line 921, Address: 0x431288, Func Offset: 0x208
	// Line 817, Address: 0x431290, Func Offset: 0x210
	// Line 921, Address: 0x431294, Func Offset: 0x214
	// Line 817, Address: 0x431298, Func Offset: 0x218
	// Line 921, Address: 0x43129c, Func Offset: 0x21c
	// Line 821, Address: 0x4312c8, Func Offset: 0x248
	// Line 921, Address: 0x4312d0, Func Offset: 0x250
	// Line 826, Address: 0x4312e4, Func Offset: 0x264
	// Line 921, Address: 0x4312ec, Func Offset: 0x26c
	// Line 826, Address: 0x431304, Func Offset: 0x284
	// Line 921, Address: 0x431310, Func Offset: 0x290
	// Line 826, Address: 0x431328, Func Offset: 0x2a8
	// Line 921, Address: 0x431340, Func Offset: 0x2c0
	// Line 826, Address: 0x431348, Func Offset: 0x2c8
	// Line 921, Address: 0x431350, Func Offset: 0x2d0
	// Line 826, Address: 0x431360, Func Offset: 0x2e0
	// Line 921, Address: 0x431364, Func Offset: 0x2e4
	// Line 826, Address: 0x43136c, Func Offset: 0x2ec
	// Line 921, Address: 0x431378, Func Offset: 0x2f8
	// Line 826, Address: 0x431380, Func Offset: 0x300
	// Line 921, Address: 0x431390, Func Offset: 0x310
	// Line 826, Address: 0x4313a0, Func Offset: 0x320
	// Line 921, Address: 0x4313a4, Func Offset: 0x324
	// Line 826, Address: 0x4313ac, Func Offset: 0x32c
	// Line 921, Address: 0x4313b8, Func Offset: 0x338
	// Line 826, Address: 0x4313c0, Func Offset: 0x340
	// Line 921, Address: 0x4313c8, Func Offset: 0x348
	// Line 826, Address: 0x4313cc, Func Offset: 0x34c
	// Line 921, Address: 0x4313d0, Func Offset: 0x350
	// Line 843, Address: 0x431420, Func Offset: 0x3a0
	// Line 921, Address: 0x431424, Func Offset: 0x3a4
	// Line 843, Address: 0x43142c, Func Offset: 0x3ac
	// Line 921, Address: 0x431430, Func Offset: 0x3b0
	// Line 844, Address: 0x431438, Func Offset: 0x3b8
	// Line 845, Address: 0x43143c, Func Offset: 0x3bc
	// Line 921, Address: 0x431440, Func Offset: 0x3c0
	// Line 847, Address: 0x43144c, Func Offset: 0x3cc
	// Line 921, Address: 0x431458, Func Offset: 0x3d8
	// Line 848, Address: 0x431460, Func Offset: 0x3e0
	// Line 921, Address: 0x431464, Func Offset: 0x3e4
	// Line 848, Address: 0x431468, Func Offset: 0x3e8
	// Line 921, Address: 0x43146c, Func Offset: 0x3ec
	// Line 852, Address: 0x431498, Func Offset: 0x418
	// Line 921, Address: 0x4314a0, Func Offset: 0x420
	// Line 857, Address: 0x4314b4, Func Offset: 0x434
	// Line 921, Address: 0x4314bc, Func Offset: 0x43c
	// Line 857, Address: 0x4314d4, Func Offset: 0x454
	// Line 921, Address: 0x4314e0, Func Offset: 0x460
	// Line 857, Address: 0x4314fc, Func Offset: 0x47c
	// Line 921, Address: 0x431510, Func Offset: 0x490
	// Line 857, Address: 0x431514, Func Offset: 0x494
	// Line 921, Address: 0x431518, Func Offset: 0x498
	// Line 857, Address: 0x431520, Func Offset: 0x4a0
	// Line 921, Address: 0x431528, Func Offset: 0x4a8
	// Line 857, Address: 0x43153c, Func Offset: 0x4bc
	// Line 921, Address: 0x431540, Func Offset: 0x4c0
	// Line 857, Address: 0x431548, Func Offset: 0x4c8
	// Line 921, Address: 0x43154c, Func Offset: 0x4cc
	// Line 857, Address: 0x431550, Func Offset: 0x4d0
	// Line 921, Address: 0x431558, Func Offset: 0x4d8
	// Line 857, Address: 0x431560, Func Offset: 0x4e0
	// Line 921, Address: 0x431570, Func Offset: 0x4f0
	// Line 857, Address: 0x431584, Func Offset: 0x504
	// Line 921, Address: 0x431588, Func Offset: 0x508
	// Line 857, Address: 0x431590, Func Offset: 0x510
	// Line 921, Address: 0x431594, Func Offset: 0x514
	// Line 857, Address: 0x431598, Func Offset: 0x518
	// Line 921, Address: 0x4315a0, Func Offset: 0x520
	// Line 857, Address: 0x4315a8, Func Offset: 0x528
	// Line 921, Address: 0x4315b0, Func Offset: 0x530
	// Line 857, Address: 0x4315b4, Func Offset: 0x534
	// Line 921, Address: 0x4315b8, Func Offset: 0x538
	// Line 873, Address: 0x431608, Func Offset: 0x588
	// Line 921, Address: 0x43160c, Func Offset: 0x58c
	// Line 873, Address: 0x431614, Func Offset: 0x594
	// Line 921, Address: 0x431618, Func Offset: 0x598
	// Line 874, Address: 0x431624, Func Offset: 0x5a4
	// Line 921, Address: 0x431628, Func Offset: 0x5a8
	// Line 875, Address: 0x43162c, Func Offset: 0x5ac
	// Line 921, Address: 0x431630, Func Offset: 0x5b0
	// Line 878, Address: 0x431654, Func Offset: 0x5d4
	// Line 921, Address: 0x431660, Func Offset: 0x5e0
	// Line 794, Address: 0x43166c, Func Offset: 0x5ec
	// Line 921, Address: 0x431670, Func Offset: 0x5f0
	// Line 802, Address: 0x4316d0, Func Offset: 0x650
	// Line 921, Address: 0x4316d4, Func Offset: 0x654
	// Line 802, Address: 0x4316dc, Func Offset: 0x65c
	// Line 921, Address: 0x4316e0, Func Offset: 0x660
	// Line 803, Address: 0x4316e8, Func Offset: 0x668
	// Line 804, Address: 0x4316ec, Func Offset: 0x66c
	// Line 921, Address: 0x4316f0, Func Offset: 0x670
	// Line 805, Address: 0x4316fc, Func Offset: 0x67c
	// Line 810, Address: 0x431704, Func Offset: 0x684
	// Line 921, Address: 0x431708, Func Offset: 0x688
	// Line 810, Address: 0x431710, Func Offset: 0x690
	// Line 921, Address: 0x431714, Func Offset: 0x694
	// Line 810, Address: 0x431724, Func Offset: 0x6a4
	// Line 921, Address: 0x431734, Func Offset: 0x6b4
	// Line 811, Address: 0x43174c, Func Offset: 0x6cc
	// Line 921, Address: 0x431750, Func Offset: 0x6d0
	// Line 812, Address: 0x431758, Func Offset: 0x6d8
	// Line 921, Address: 0x43175c, Func Offset: 0x6dc
	// Line 814, Address: 0x431774, Func Offset: 0x6f4
	// Line 921, Address: 0x431780, Func Offset: 0x700
	// Line 833, Address: 0x4317c4, Func Offset: 0x744
	// Line 921, Address: 0x4317c8, Func Offset: 0x748
	// Line 833, Address: 0x4317d4, Func Offset: 0x754
	// Line 921, Address: 0x4317d8, Func Offset: 0x758
	// Line 834, Address: 0x4317e4, Func Offset: 0x764
	// Line 835, Address: 0x4317e8, Func Offset: 0x768
	// Line 921, Address: 0x4317ec, Func Offset: 0x76c
	// Line 837, Address: 0x431808, Func Offset: 0x788
	// Line 921, Address: 0x431810, Func Offset: 0x790
	// Line 864, Address: 0x431844, Func Offset: 0x7c4
	// Line 921, Address: 0x431848, Func Offset: 0x7c8
	// Line 864, Address: 0x431850, Func Offset: 0x7d0
	// Line 921, Address: 0x431854, Func Offset: 0x7d4
	// Line 865, Address: 0x431860, Func Offset: 0x7e0
	// Line 921, Address: 0x431864, Func Offset: 0x7e4
	// Line 866, Address: 0x431870, Func Offset: 0x7f0
	// Line 921, Address: 0x431874, Func Offset: 0x7f4
	// Line 867, Address: 0x431888, Func Offset: 0x808
	// Line 921, Address: 0x431890, Func Offset: 0x810
	// Line 882, Address: 0x4318a0, Func Offset: 0x820
	// Line 921, Address: 0x4318a8, Func Offset: 0x828
	// Line 882, Address: 0x4318c8, Func Offset: 0x848
	// Line 921, Address: 0x4318d0, Func Offset: 0x850
	// Line 887, Address: 0x4318e4, Func Offset: 0x864
	// Line 921, Address: 0x4318ec, Func Offset: 0x86c
	// Line 887, Address: 0x431904, Func Offset: 0x884
	// Line 921, Address: 0x431910, Func Offset: 0x890
	// Line 887, Address: 0x43192c, Func Offset: 0x8ac
	// Line 921, Address: 0x431940, Func Offset: 0x8c0
	// Line 887, Address: 0x431944, Func Offset: 0x8c4
	// Line 921, Address: 0x431948, Func Offset: 0x8c8
	// Line 887, Address: 0x431950, Func Offset: 0x8d0
	// Line 921, Address: 0x431958, Func Offset: 0x8d8
	// Line 887, Address: 0x43196c, Func Offset: 0x8ec
	// Line 921, Address: 0x431970, Func Offset: 0x8f0
	// Line 887, Address: 0x431978, Func Offset: 0x8f8
	// Line 921, Address: 0x43197c, Func Offset: 0x8fc
	// Line 887, Address: 0x431980, Func Offset: 0x900
	// Line 921, Address: 0x431988, Func Offset: 0x908
	// Line 887, Address: 0x431990, Func Offset: 0x910
	// Line 921, Address: 0x4319a0, Func Offset: 0x920
	// Line 887, Address: 0x4319b4, Func Offset: 0x934
	// Line 921, Address: 0x4319b8, Func Offset: 0x938
	// Line 887, Address: 0x4319c0, Func Offset: 0x940
	// Line 921, Address: 0x4319c4, Func Offset: 0x944
	// Line 887, Address: 0x4319c8, Func Offset: 0x948
	// Line 921, Address: 0x4319d0, Func Offset: 0x950
	// Line 887, Address: 0x4319d8, Func Offset: 0x958
	// Line 921, Address: 0x4319e0, Func Offset: 0x960
	// Line 891, Address: 0x4319e4, Func Offset: 0x964
	// Line 921, Address: 0x4319e8, Func Offset: 0x968
	// Line 891, Address: 0x4319ec, Func Offset: 0x96c
	// Line 921, Address: 0x4319f4, Func Offset: 0x974
	// Line 891, Address: 0x431a0c, Func Offset: 0x98c
	// Line 921, Address: 0x431a18, Func Offset: 0x998
	// Line 891, Address: 0x431a34, Func Offset: 0x9b4
	// Line 921, Address: 0x431a48, Func Offset: 0x9c8
	// Line 891, Address: 0x431a4c, Func Offset: 0x9cc
	// Line 921, Address: 0x431a50, Func Offset: 0x9d0
	// Line 891, Address: 0x431a58, Func Offset: 0x9d8
	// Line 921, Address: 0x431a60, Func Offset: 0x9e0
	// Line 891, Address: 0x431a74, Func Offset: 0x9f4
	// Line 921, Address: 0x431a78, Func Offset: 0x9f8
	// Line 891, Address: 0x431a80, Func Offset: 0xa00
	// Line 921, Address: 0x431a84, Func Offset: 0xa04
	// Line 891, Address: 0x431a88, Func Offset: 0xa08
	// Line 921, Address: 0x431a90, Func Offset: 0xa10
	// Line 891, Address: 0x431a98, Func Offset: 0xa18
	// Line 921, Address: 0x431aa8, Func Offset: 0xa28
	// Line 891, Address: 0x431abc, Func Offset: 0xa3c
	// Line 921, Address: 0x431ac0, Func Offset: 0xa40
	// Line 891, Address: 0x431ac8, Func Offset: 0xa48
	// Line 921, Address: 0x431acc, Func Offset: 0xa4c
	// Line 891, Address: 0x431ad0, Func Offset: 0xa50
	// Line 921, Address: 0x431ad8, Func Offset: 0xa58
	// Line 891, Address: 0x431ae0, Func Offset: 0xa60
	// Line 921, Address: 0x431ae8, Func Offset: 0xa68
	// Line 891, Address: 0x431aec, Func Offset: 0xa6c
	// Line 921, Address: 0x431af0, Func Offset: 0xa70
	// Line 909, Address: 0x431b38, Func Offset: 0xab8
	// Line 921, Address: 0x431b3c, Func Offset: 0xabc
	// Line 909, Address: 0x431b44, Func Offset: 0xac4
	// Line 921, Address: 0x431b48, Func Offset: 0xac8
	// Line 910, Address: 0x431b54, Func Offset: 0xad4
	// Line 921, Address: 0x431b58, Func Offset: 0xad8
	// Line 911, Address: 0x431b78, Func Offset: 0xaf8
	// Line 921, Address: 0x431b7c, Func Offset: 0xafc
	// Line 898, Address: 0x431bd8, Func Offset: 0xb58
	// Line 921, Address: 0x431bdc, Func Offset: 0xb5c
	// Line 898, Address: 0x431be4, Func Offset: 0xb64
	// Line 921, Address: 0x431be8, Func Offset: 0xb68
	// Line 899, Address: 0x431bf4, Func Offset: 0xb74
	// Line 921, Address: 0x431bf8, Func Offset: 0xb78
	// Line 900, Address: 0x431c0c, Func Offset: 0xb8c
	// Line 921, Address: 0x431c10, Func Offset: 0xb90
	// Line 902, Address: 0x431c38, Func Offset: 0xbb8
	// Line 922, Address: 0x431c40, Func Offset: 0xbc0
	// Func End, Address: 0x431c70, Func Offset: 0xbf0
}

// xClumpColl_ForAllBoxLeafNodeIntersections__FP17xClumpCollBSPTreeP6RwBBoxPFP21xClumpCollBSPTrianglePv_iPv
// Start address: 0x431c70
xClumpCollBSPTree* xClumpColl_ForAllBoxLeafNodeIntersections(xClumpCollBSPTree* tree, RwBBox* box, int32(*callBack)(xClumpCollBSPTriangle*, void*), void* data)
{
	int32 nStack;
	nodeInfo nodeStack[33];
	xClumpCollBSPBranchNode* branch;
	// Line 631, Address: 0x431c70, Func Offset: 0
	// Line 640, Address: 0x431c74, Func Offset: 0x4
	// Line 631, Address: 0x431c78, Func Offset: 0x8
	// Line 640, Address: 0x431ca0, Func Offset: 0x30
	// Line 641, Address: 0x431ca8, Func Offset: 0x38
	// Line 642, Address: 0x431cac, Func Offset: 0x3c
	// Line 640, Address: 0x431cb0, Func Offset: 0x40
	// Line 645, Address: 0x431cb4, Func Offset: 0x44
	// Line 664, Address: 0x431cc0, Func Offset: 0x50
	// Line 666, Address: 0x431cd0, Func Offset: 0x60
	// Line 672, Address: 0x431cec, Func Offset: 0x7c
	// Line 669, Address: 0x431cf0, Func Offset: 0x80
	// Line 672, Address: 0x431cf4, Func Offset: 0x84
	// Line 676, Address: 0x431d04, Func Offset: 0x94
	// Line 677, Address: 0x431d18, Func Offset: 0xa8
	// Line 678, Address: 0x431d1c, Func Offset: 0xac
	// Line 677, Address: 0x431d20, Func Offset: 0xb0
	// Line 680, Address: 0x431d24, Func Offset: 0xb4
	// Line 684, Address: 0x431d34, Func Offset: 0xc4
	// Line 685, Address: 0x431d38, Func Offset: 0xc8
	// Line 688, Address: 0x431d3c, Func Offset: 0xcc
	// Line 691, Address: 0x431d48, Func Offset: 0xd8
	// Line 650, Address: 0x431d54, Func Offset: 0xe4
	// Line 691, Address: 0x431d5c, Func Offset: 0xec
	// Line 658, Address: 0x431d80, Func Offset: 0x110
	// Line 652, Address: 0x431d88, Func Offset: 0x118
	// Line 692, Address: 0x431d8c, Func Offset: 0x11c
	// Func End, Address: 0x431dac, Func Offset: 0x13c
}

// xClumpColl_InstancePointers__FP17xClumpCollBSPTreeP7RpClump
// Start address: 0x431db0
void xClumpColl_InstancePointers()
{
	// Line 520, Address: 0x431db0, Func Offset: 0
	// Func End, Address: 0x431db8, Func Offset: 0x8
}

// xClumpColl_StaticBufferInit__FPvUi
// Start address: 0x431dc0
xClumpCollBSPTree* xClumpColl_StaticBufferInit(void* data)
{
	uint32* header;
	uint32 numBranchNodes;
	uint32 numTriangles;
	xClumpCollBSPTree* tree;
	// Line 355, Address: 0x431dc0, Func Offset: 0
	// Line 368, Address: 0x431dc4, Func Offset: 0x4
	// Line 355, Address: 0x431dc8, Func Offset: 0x8
	// Line 368, Address: 0x431dcc, Func Offset: 0xc
	// Line 355, Address: 0x431dd0, Func Offset: 0x10
	// Line 357, Address: 0x431de0, Func Offset: 0x20
	// Line 358, Address: 0x431de4, Func Offset: 0x24
	// Line 368, Address: 0x431de8, Func Offset: 0x28
	// Line 370, Address: 0x431df4, Func Offset: 0x34
	// Line 371, Address: 0x431dfc, Func Offset: 0x3c
	// Line 372, Address: 0x431e00, Func Offset: 0x40
	// Line 371, Address: 0x431e04, Func Offset: 0x44
	// Line 372, Address: 0x431e08, Func Offset: 0x48
	// Line 379, Address: 0x431e14, Func Offset: 0x54
	// Line 381, Address: 0x431e18, Func Offset: 0x58
	// Line 382, Address: 0x431e2c, Func Offset: 0x6c
	// Func End, Address: 0x431e44, Func Offset: 0x84
}

