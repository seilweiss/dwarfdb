



void iParMgrRenderParSys_Flat(void* data, xParGroup* ps);
void iParMgrRenderParSys_Ground(void* data, xParGroup* ps);
void iParMgrRenderParSys_Static();
void iParMgrRenderParSys_QuadStreak(void* data, xParGroup* ps);
void iParMgrRenderParSys_InvStreak(void* data, xParGroup* ps);
void iParMgrRenderParSys_Streak(void* data, xParGroup* ps);
void iRenderPushFlat(xPar* p, xParCmdTex* tex);
void iRenderPushQuadStreak(xPar* p, xParCmdTex* tex);
void iParMgrRenderParSys_Sprite(void* data, xParGroup* ps);
void iParMgrRender();
void iParMgrUpdate();
void iParMgrInit();

// iParMgrRenderParSys_Flat__FPvP9xParGroup
// Start address: 0x4a6460
void iParMgrRenderParSys_Flat(void* data, xParGroup* ps)
{
	xPar* idx;
	RwTexture* texture;
	RwRaster* raster;
	// Line 1627, Address: 0x4a6460, Func Offset: 0
	// Line 1631, Address: 0x4a6464, Func Offset: 0x4
	// Line 1627, Address: 0x4a6468, Func Offset: 0x8
	// Line 1631, Address: 0x4a6480, Func Offset: 0x20
	// Line 1629, Address: 0x4a6484, Func Offset: 0x24
	// Line 1631, Address: 0x4a6488, Func Offset: 0x28
	// Line 1634, Address: 0x4a66a8, Func Offset: 0x248
	// Line 1636, Address: 0x4a66ac, Func Offset: 0x24c
	// Line 1638, Address: 0x4a66b4, Func Offset: 0x254
	// Line 1639, Address: 0x4a66b8, Func Offset: 0x258
	// Line 1641, Address: 0x4a66c0, Func Offset: 0x260
	// Line 1651, Address: 0x4a66d0, Func Offset: 0x270
	// Line 1654, Address: 0x4a66d8, Func Offset: 0x278
	// Line 1657, Address: 0x4a66e4, Func Offset: 0x284
	// Line 1658, Address: 0x4a66e8, Func Offset: 0x288
	// Line 1660, Address: 0x4a6700, Func Offset: 0x2a0
	// Line 1661, Address: 0x4a6714, Func Offset: 0x2b4
	// Line 1660, Address: 0x4a6728, Func Offset: 0x2c8
	// Line 1661, Address: 0x4a672c, Func Offset: 0x2cc
	// Line 1660, Address: 0x4a6750, Func Offset: 0x2f0
	// Line 1661, Address: 0x4a6758, Func Offset: 0x2f8
	// Func End, Address: 0x4a67a0, Func Offset: 0x340
}

// iParMgrRenderParSys_Ground__FPvP9xParGroup
// Start address: 0x4a67a0
void iParMgrRenderParSys_Ground(void* data, xParGroup* ps)
{
	xPar* idx;
	zParSys* s;
	RwTexture* texture;
	RwRaster* raster;
	xParCmdTex* tex;
	xPar* p;
	void* vertices;
	uint16* indices;
	int32 vertexCount;
	int32 indexCount;
	float32 size;
	xVec3 vert[4];
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 a;
	xMat3x3 groundmat;
	float32 angx;
	float32 angy;
	float32 angz;
	xVec3 zdir;
	xVec3 xdir;
	xVec3 centre;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwV3d _packed;
	RwV3d _packed;
	RwV3d _packed;
	RwV3d _packed;
	float32 u1;
	float32 u2;
	float32 v1;
	float32 v2;
	uint16* src;
	uint16* dst;
	int32 i;
	RxObjSpace3DVertex v3d[4];
	uint16 i3d[6];
	// Line 1409, Address: 0x4a67a0, Func Offset: 0
	// Line 1412, Address: 0x4a67a4, Func Offset: 0x4
	// Line 1409, Address: 0x4a67a8, Func Offset: 0x8
	// Line 1412, Address: 0x4a67e8, Func Offset: 0x48
	// Line 1410, Address: 0x4a67ec, Func Offset: 0x4c
	// Line 1412, Address: 0x4a67f0, Func Offset: 0x50
	// Line 1415, Address: 0x4a6a10, Func Offset: 0x270
	// Line 1417, Address: 0x4a6a14, Func Offset: 0x274
	// Line 1419, Address: 0x4a6a1c, Func Offset: 0x27c
	// Line 1420, Address: 0x4a6a20, Func Offset: 0x280
	// Line 1422, Address: 0x4a6a28, Func Offset: 0x288
	// Line 1427, Address: 0x4a6a38, Func Offset: 0x298
	// Line 1430, Address: 0x4a6a50, Func Offset: 0x2b0
	// Line 1440, Address: 0x4a6a94, Func Offset: 0x2f4
	// Line 1446, Address: 0x4a6a98, Func Offset: 0x2f8
	// Line 1447, Address: 0x4a6a9c, Func Offset: 0x2fc
	// Line 1446, Address: 0x4a6aa0, Func Offset: 0x300
	// Line 1447, Address: 0x4a6aa4, Func Offset: 0x304
	// Line 1450, Address: 0x4a6aa8, Func Offset: 0x308
	// Line 1440, Address: 0x4a6aac, Func Offset: 0x30c
	// Line 1451, Address: 0x4a6ab0, Func Offset: 0x310
	// Line 1454, Address: 0x4a6ab8, Func Offset: 0x318
	// Line 1460, Address: 0x4a6ae8, Func Offset: 0x348
	// Line 1463, Address: 0x4a6b50, Func Offset: 0x3b0
	// Line 1467, Address: 0x4a6b68, Func Offset: 0x3c8
	// Line 1471, Address: 0x4a6b70, Func Offset: 0x3d0
	// Line 1485, Address: 0x4a6b98, Func Offset: 0x3f8
	// Line 1474, Address: 0x4a6ba0, Func Offset: 0x400
	// Line 1485, Address: 0x4a6ba4, Func Offset: 0x404
	// Line 1475, Address: 0x4a6ba8, Func Offset: 0x408
	// Line 1476, Address: 0x4a6bac, Func Offset: 0x40c
	// Line 1477, Address: 0x4a6bb0, Func Offset: 0x410
	// Line 1486, Address: 0x4a6bb4, Func Offset: 0x414
	// Line 1488, Address: 0x4a6bbc, Func Offset: 0x41c
	// Line 1490, Address: 0x4a6bfc, Func Offset: 0x45c
	// Line 1492, Address: 0x4a6c04, Func Offset: 0x464
	// Line 1494, Address: 0x4a6c44, Func Offset: 0x4a4
	// Line 1496, Address: 0x4a6c4c, Func Offset: 0x4ac
	// Line 1500, Address: 0x4a6c88, Func Offset: 0x4e8
	// Line 1501, Address: 0x4a6c98, Func Offset: 0x4f8
	// Line 1502, Address: 0x4a6ca8, Func Offset: 0x508
	// Line 1504, Address: 0x4a6cb8, Func Offset: 0x518
	// Line 1505, Address: 0x4a6d08, Func Offset: 0x568
	// Line 1506, Address: 0x4a6d28, Func Offset: 0x588
	// Line 1507, Address: 0x4a6d88, Func Offset: 0x5e8
	// Line 1508, Address: 0x4a6dc8, Func Offset: 0x628
	// Line 1514, Address: 0x4a6ddc, Func Offset: 0x63c
	// Line 1557, Address: 0x4a6de0, Func Offset: 0x640
	// Line 1514, Address: 0x4a6de4, Func Offset: 0x644
	// Line 1557, Address: 0x4a6de8, Func Offset: 0x648
	// Line 1519, Address: 0x4a6dec, Func Offset: 0x64c
	// Line 1557, Address: 0x4a6df0, Func Offset: 0x650
	// Line 1524, Address: 0x4a6df4, Func Offset: 0x654
	// Line 1557, Address: 0x4a6df8, Func Offset: 0x658
	// Line 1549, Address: 0x4a6dfc, Func Offset: 0x65c
	// Line 1550, Address: 0x4a6e00, Func Offset: 0x660
	// Line 1551, Address: 0x4a6e04, Func Offset: 0x664
	// Line 1552, Address: 0x4a6e08, Func Offset: 0x668
	// Line 1526, Address: 0x4a6e0c, Func Offset: 0x66c
	// Line 1554, Address: 0x4a6e10, Func Offset: 0x670
	// Line 1515, Address: 0x4a6e14, Func Offset: 0x674
	// Line 1554, Address: 0x4a6e18, Func Offset: 0x678
	// Line 1515, Address: 0x4a6e1c, Func Offset: 0x67c
	// Line 1557, Address: 0x4a6e20, Func Offset: 0x680
	// Line 1514, Address: 0x4a6e24, Func Offset: 0x684
	// Line 1554, Address: 0x4a6e28, Func Offset: 0x688
	// Line 1549, Address: 0x4a6e2c, Func Offset: 0x68c
	// Line 1556, Address: 0x4a6e30, Func Offset: 0x690
	// Line 1515, Address: 0x4a6e34, Func Offset: 0x694
	// Line 1550, Address: 0x4a6e38, Func Offset: 0x698
	// Line 1551, Address: 0x4a6e3c, Func Offset: 0x69c
	// Line 1552, Address: 0x4a6e40, Func Offset: 0x6a0
	// Line 1555, Address: 0x4a6e44, Func Offset: 0x6a4
	// Line 1516, Address: 0x4a6e4c, Func Offset: 0x6ac
	// Line 1555, Address: 0x4a6e50, Func Offset: 0x6b0
	// Line 1516, Address: 0x4a6e54, Func Offset: 0x6b4
	// Line 1556, Address: 0x4a6e58, Func Offset: 0x6b8
	// Line 1515, Address: 0x4a6e5c, Func Offset: 0x6bc
	// Line 1520, Address: 0x4a6e60, Func Offset: 0x6c0
	// Line 1519, Address: 0x4a6e68, Func Offset: 0x6c8
	// Line 1521, Address: 0x4a6e6c, Func Offset: 0x6cc
	// Line 1520, Address: 0x4a6e74, Func Offset: 0x6d4
	// Line 1521, Address: 0x4a6e78, Func Offset: 0x6d8
	// Line 1556, Address: 0x4a6e7c, Func Offset: 0x6dc
	// Line 1525, Address: 0x4a6e80, Func Offset: 0x6e0
	// Line 1516, Address: 0x4a6e84, Func Offset: 0x6e4
	// Line 1530, Address: 0x4a6e88, Func Offset: 0x6e8
	// Line 1549, Address: 0x4a6e8c, Func Offset: 0x6ec
	// Line 1535, Address: 0x4a6e9c, Func Offset: 0x6fc
	// Line 1525, Address: 0x4a6ea0, Func Offset: 0x700
	// Line 1550, Address: 0x4a6ea4, Func Offset: 0x704
	// Line 1524, Address: 0x4a6eb0, Func Offset: 0x710
	// Line 1550, Address: 0x4a6eb4, Func Offset: 0x714
	// Line 1530, Address: 0x4a6eb8, Func Offset: 0x718
	// Line 1551, Address: 0x4a6ebc, Func Offset: 0x71c
	// Line 1552, Address: 0x4a6ec0, Func Offset: 0x720
	// Line 1551, Address: 0x4a6ec4, Func Offset: 0x724
	// Line 1552, Address: 0x4a6ec8, Func Offset: 0x728
	// Line 1545, Address: 0x4a6ecc, Func Offset: 0x72c
	// Line 1551, Address: 0x4a6ed0, Func Offset: 0x730
	// Line 1552, Address: 0x4a6ed8, Func Offset: 0x738
	// Line 1519, Address: 0x4a6ee0, Func Offset: 0x740
	// Line 1554, Address: 0x4a6ee4, Func Offset: 0x744
	// Line 1545, Address: 0x4a6ee8, Func Offset: 0x748
	// Line 1531, Address: 0x4a6eec, Func Offset: 0x74c
	// Line 1530, Address: 0x4a6ef0, Func Offset: 0x750
	// Line 1554, Address: 0x4a6ef4, Func Offset: 0x754
	// Line 1531, Address: 0x4a6ef8, Func Offset: 0x758
	// Line 1554, Address: 0x4a6efc, Func Offset: 0x75c
	// Line 1557, Address: 0x4a6f00, Func Offset: 0x760
	// Line 1545, Address: 0x4a6f08, Func Offset: 0x768
	// Line 1557, Address: 0x4a6f0c, Func Offset: 0x76c
	// Line 1546, Address: 0x4a6f10, Func Offset: 0x770
	// Line 1557, Address: 0x4a6f14, Func Offset: 0x774
	// Line 1531, Address: 0x4a6f18, Func Offset: 0x778
	// Line 1554, Address: 0x4a6f20, Func Offset: 0x780
	// Line 1546, Address: 0x4a6f28, Func Offset: 0x788
	// Line 1557, Address: 0x4a6f30, Func Offset: 0x790
	// Line 1532, Address: 0x4a6f38, Func Offset: 0x798
	// Line 1554, Address: 0x4a6f40, Func Offset: 0x7a0
	// Line 1525, Address: 0x4a6f44, Func Offset: 0x7a4
	// Line 1557, Address: 0x4a6f48, Func Offset: 0x7a8
	// Line 1547, Address: 0x4a6f4c, Func Offset: 0x7ac
	// Line 1526, Address: 0x4a6f50, Func Offset: 0x7b0
	// Line 1514, Address: 0x4a6f54, Func Offset: 0x7b4
	// Line 1557, Address: 0x4a6f58, Func Offset: 0x7b8
	// Line 1532, Address: 0x4a6f5c, Func Offset: 0x7bc
	// Line 1554, Address: 0x4a6f64, Func Offset: 0x7c4
	// Line 1547, Address: 0x4a6f6c, Func Offset: 0x7cc
	// Line 1557, Address: 0x4a6f74, Func Offset: 0x7d4
	// Line 1535, Address: 0x4a6f7c, Func Offset: 0x7dc
	// Line 1540, Address: 0x4a6f80, Func Offset: 0x7e0
	// Line 1556, Address: 0x4a6f84, Func Offset: 0x7e4
	// Line 1535, Address: 0x4a6f88, Func Offset: 0x7e8
	// Line 1540, Address: 0x4a6f90, Func Offset: 0x7f0
	// Line 1515, Address: 0x4a6f94, Func Offset: 0x7f4
	// Line 1516, Address: 0x4a6f98, Func Offset: 0x7f8
	// Line 1520, Address: 0x4a6fa0, Func Offset: 0x800
	// Line 1521, Address: 0x4a6fa8, Func Offset: 0x808
	// Line 1536, Address: 0x4a6fac, Func Offset: 0x80c
	// Line 1556, Address: 0x4a6fb0, Func Offset: 0x810
	// Line 1540, Address: 0x4a6fb4, Func Offset: 0x814
	// Line 1536, Address: 0x4a6fb8, Func Offset: 0x818
	// Line 1541, Address: 0x4a6fbc, Func Offset: 0x81c
	// Line 1556, Address: 0x4a6fc0, Func Offset: 0x820
	// Line 1536, Address: 0x4a6fc4, Func Offset: 0x824
	// Line 1555, Address: 0x4a6fcc, Func Offset: 0x82c
	// Line 1541, Address: 0x4a6fd4, Func Offset: 0x834
	// Line 1556, Address: 0x4a6fdc, Func Offset: 0x83c
	// Line 1537, Address: 0x4a6fe4, Func Offset: 0x844
	// Line 1542, Address: 0x4a6ff0, Func Offset: 0x850
	// Line 1537, Address: 0x4a6ff4, Func Offset: 0x854
	// Line 1555, Address: 0x4a6ff8, Func Offset: 0x858
	// Line 1542, Address: 0x4a7000, Func Offset: 0x860
	// Line 1556, Address: 0x4a7008, Func Offset: 0x868
	// Line 1521, Address: 0x4a700c, Func Offset: 0x86c
	// Line 1526, Address: 0x4a7010, Func Offset: 0x870
	// Line 1555, Address: 0x4a7014, Func Offset: 0x874
	// Line 1556, Address: 0x4a7024, Func Offset: 0x884
	// Line 1559, Address: 0x4a7028, Func Offset: 0x888
	// Line 1564, Address: 0x4a7038, Func Offset: 0x898
	// Line 1565, Address: 0x4a707c, Func Offset: 0x8dc
	// Line 1567, Address: 0x4a70ac, Func Offset: 0x90c
	// Line 1568, Address: 0x4a70b0, Func Offset: 0x910
	// Line 1567, Address: 0x4a70b4, Func Offset: 0x914
	// Line 1570, Address: 0x4a70b8, Func Offset: 0x918
	// Line 1568, Address: 0x4a70bc, Func Offset: 0x91c
	// Line 1571, Address: 0x4a70c0, Func Offset: 0x920
	// Line 1568, Address: 0x4a70c4, Func Offset: 0x924
	// Line 1570, Address: 0x4a70c8, Func Offset: 0x928
	// Line 1567, Address: 0x4a70cc, Func Offset: 0x92c
	// Line 1571, Address: 0x4a70d0, Func Offset: 0x930
	// Line 1573, Address: 0x4a70d4, Func Offset: 0x934
	// Line 1572, Address: 0x4a70d8, Func Offset: 0x938
	// Line 1570, Address: 0x4a70dc, Func Offset: 0x93c
	// Line 1572, Address: 0x4a70e0, Func Offset: 0x940
	// Line 1573, Address: 0x4a70e4, Func Offset: 0x944
	// Line 1565, Address: 0x4a70ec, Func Offset: 0x94c
	// Line 1567, Address: 0x4a70f0, Func Offset: 0x950
	// Line 1565, Address: 0x4a70f4, Func Offset: 0x954
	// Line 1567, Address: 0x4a70fc, Func Offset: 0x95c
	// Line 1568, Address: 0x4a7104, Func Offset: 0x964
	// Line 1570, Address: 0x4a7110, Func Offset: 0x970
	// Line 1572, Address: 0x4a7114, Func Offset: 0x974
	// Line 1571, Address: 0x4a7118, Func Offset: 0x978
	// Line 1572, Address: 0x4a711c, Func Offset: 0x97c
	// Line 1571, Address: 0x4a7120, Func Offset: 0x980
	// Line 1575, Address: 0x4a7124, Func Offset: 0x984
	// Line 1578, Address: 0x4a7130, Func Offset: 0x990
	// Line 1579, Address: 0x4a7140, Func Offset: 0x9a0
	// Line 1580, Address: 0x4a7150, Func Offset: 0x9b0
	// Line 1581, Address: 0x4a7160, Func Offset: 0x9c0
	// Line 1590, Address: 0x4a7170, Func Offset: 0x9d0
	// Line 1596, Address: 0x4a7178, Func Offset: 0x9d8
	// Line 1592, Address: 0x4a717c, Func Offset: 0x9dc
	// Line 1590, Address: 0x4a7180, Func Offset: 0x9e0
	// Line 1596, Address: 0x4a718c, Func Offset: 0x9ec
	// Line 1592, Address: 0x4a728c, Func Offset: 0xaec
	// Line 1596, Address: 0x4a7290, Func Offset: 0xaf0
	// Line 1599, Address: 0x4a72c0, Func Offset: 0xb20
	// Line 1604, Address: 0x4a72e4, Func Offset: 0xb44
	// Line 1605, Address: 0x4a72f0, Func Offset: 0xb50
	// Line 1604, Address: 0x4a72f4, Func Offset: 0xb54
	// Line 1605, Address: 0x4a72f8, Func Offset: 0xb58
	// Line 1604, Address: 0x4a72fc, Func Offset: 0xb5c
	// Line 1605, Address: 0x4a7300, Func Offset: 0xb60
	// Line 1607, Address: 0x4a730c, Func Offset: 0xb6c
	// Line 1609, Address: 0x4a7310, Func Offset: 0xb70
	// Line 1610, Address: 0x4a7314, Func Offset: 0xb74
	// Line 1615, Address: 0x4a7328, Func Offset: 0xb88
	// Line 1616, Address: 0x4a739c, Func Offset: 0xbfc
	// Func End, Address: 0x4a73e4, Func Offset: 0xc44
}

// iParMgrRenderParSys_Static__FPvP9xParGroup
// Start address: 0x4a73f0
void iParMgrRenderParSys_Static()
{
	// Line 1398, Address: 0x4a73f0, Func Offset: 0
	// Func End, Address: 0x4a73f8, Func Offset: 0x8
}

// iParMgrRenderParSys_QuadStreak__FPvP9xParGroup
// Start address: 0x4a7400
void iParMgrRenderParSys_QuadStreak(void* data, xParGroup* ps)
{
	xPar* idx;
	RwTexture* texture;
	RwRaster* raster;
	// Line 1349, Address: 0x4a7400, Func Offset: 0
	// Line 1353, Address: 0x4a7404, Func Offset: 0x4
	// Line 1349, Address: 0x4a7408, Func Offset: 0x8
	// Line 1353, Address: 0x4a7420, Func Offset: 0x20
	// Line 1351, Address: 0x4a7424, Func Offset: 0x24
	// Line 1353, Address: 0x4a7428, Func Offset: 0x28
	// Line 1356, Address: 0x4a7648, Func Offset: 0x248
	// Line 1358, Address: 0x4a764c, Func Offset: 0x24c
	// Line 1360, Address: 0x4a7654, Func Offset: 0x254
	// Line 1361, Address: 0x4a7658, Func Offset: 0x258
	// Line 1363, Address: 0x4a7660, Func Offset: 0x260
	// Line 1377, Address: 0x4a7670, Func Offset: 0x270
	// Line 1379, Address: 0x4a7678, Func Offset: 0x278
	// Line 1382, Address: 0x4a7684, Func Offset: 0x284
	// Line 1383, Address: 0x4a7688, Func Offset: 0x288
	// Line 1368, Address: 0x4a76a0, Func Offset: 0x2a0
	// Line 1383, Address: 0x4a76a4, Func Offset: 0x2a4
	// Line 1385, Address: 0x4a76c0, Func Offset: 0x2c0
	// Line 1386, Address: 0x4a76d4, Func Offset: 0x2d4
	// Line 1385, Address: 0x4a76e8, Func Offset: 0x2e8
	// Line 1386, Address: 0x4a76ec, Func Offset: 0x2ec
	// Line 1385, Address: 0x4a7710, Func Offset: 0x310
	// Line 1386, Address: 0x4a7718, Func Offset: 0x318
	// Func End, Address: 0x4a7760, Func Offset: 0x360
}

// iParMgrRenderParSys_InvStreak__FPvP9xParGroup
// Start address: 0x4a7760
void iParMgrRenderParSys_InvStreak(void* data, xParGroup* ps)
{
	uint32 transformFlags;
	xPar* idx;
	zParSys* s;
	RwTexture* texture;
	RwRaster* raster;
	RxObjSpace3DVertex* v3d;
	int32 vertexCount;
	// Line 1192, Address: 0x4a7760, Func Offset: 0
	// Line 1197, Address: 0x4a7764, Func Offset: 0x4
	// Line 1192, Address: 0x4a7768, Func Offset: 0x8
	// Line 1197, Address: 0x4a778c, Func Offset: 0x2c
	// Line 1200, Address: 0x4a79b0, Func Offset: 0x250
	// Line 1202, Address: 0x4a79b4, Func Offset: 0x254
	// Line 1204, Address: 0x4a79bc, Func Offset: 0x25c
	// Line 1205, Address: 0x4a79c0, Func Offset: 0x260
	// Line 1207, Address: 0x4a79c8, Func Offset: 0x268
	// Line 1209, Address: 0x4a79d8, Func Offset: 0x278
	// Line 1212, Address: 0x4a79e0, Func Offset: 0x280
	// Line 1220, Address: 0x4a79f4, Func Offset: 0x294
	// Line 1223, Address: 0x4a7a0c, Func Offset: 0x2ac
	// Line 1224, Address: 0x4a7a14, Func Offset: 0x2b4
	// Line 1230, Address: 0x4a7a18, Func Offset: 0x2b8
	// Line 1233, Address: 0x4a7a1c, Func Offset: 0x2bc
	// Line 1242, Address: 0x4a7a40, Func Offset: 0x2e0
	// Line 1259, Address: 0x4a7a44, Func Offset: 0x2e4
	// Line 1260, Address: 0x4a7a48, Func Offset: 0x2e8
	// Line 1261, Address: 0x4a7a4c, Func Offset: 0x2ec
	// Line 1262, Address: 0x4a7a54, Func Offset: 0x2f4
	// Line 1263, Address: 0x4a7a58, Func Offset: 0x2f8
	// Line 1264, Address: 0x4a7a5c, Func Offset: 0x2fc
	// Line 1265, Address: 0x4a7a60, Func Offset: 0x300
	// Line 1266, Address: 0x4a7a64, Func Offset: 0x304
	// Line 1267, Address: 0x4a7a68, Func Offset: 0x308
	// Line 1268, Address: 0x4a7a6c, Func Offset: 0x30c
	// Line 1269, Address: 0x4a7a70, Func Offset: 0x310
	// Line 1270, Address: 0x4a7a74, Func Offset: 0x314
	// Line 1271, Address: 0x4a7a78, Func Offset: 0x318
	// Line 1272, Address: 0x4a7a7c, Func Offset: 0x31c
	// Line 1273, Address: 0x4a7a80, Func Offset: 0x320
	// Line 1274, Address: 0x4a7a84, Func Offset: 0x324
	// Line 1275, Address: 0x4a7a88, Func Offset: 0x328
	// Line 1276, Address: 0x4a7a8c, Func Offset: 0x32c
	// Line 1277, Address: 0x4a7a90, Func Offset: 0x330
	// Line 1278, Address: 0x4a7a94, Func Offset: 0x334
	// Line 1279, Address: 0x4a7a98, Func Offset: 0x338
	// Line 1280, Address: 0x4a7a9c, Func Offset: 0x33c
	// Line 1282, Address: 0x4a7aa4, Func Offset: 0x344
	// Line 1283, Address: 0x4a7aa8, Func Offset: 0x348
	// Line 1284, Address: 0x4a7aac, Func Offset: 0x34c
	// Line 1285, Address: 0x4a7ab0, Func Offset: 0x350
	// Line 1286, Address: 0x4a7ab4, Func Offset: 0x354
	// Line 1287, Address: 0x4a7ab8, Func Offset: 0x358
	// Line 1288, Address: 0x4a7abc, Func Offset: 0x35c
	// Line 1289, Address: 0x4a7ac0, Func Offset: 0x360
	// Line 1290, Address: 0x4a7ac4, Func Offset: 0x364
	// Line 1291, Address: 0x4a7ac8, Func Offset: 0x368
	// Line 1292, Address: 0x4a7acc, Func Offset: 0x36c
	// Line 1293, Address: 0x4a7ad0, Func Offset: 0x370
	// Line 1294, Address: 0x4a7ad4, Func Offset: 0x374
	// Line 1295, Address: 0x4a7ad8, Func Offset: 0x378
	// Line 1296, Address: 0x4a7adc, Func Offset: 0x37c
	// Line 1297, Address: 0x4a7ae0, Func Offset: 0x380
	// Line 1298, Address: 0x4a7ae4, Func Offset: 0x384
	// Line 1299, Address: 0x4a7ae8, Func Offset: 0x388
	// Line 1300, Address: 0x4a7aec, Func Offset: 0x38c
	// Line 1301, Address: 0x4a7af0, Func Offset: 0x390
	// Line 1302, Address: 0x4a7af4, Func Offset: 0x394
	// Line 1306, Address: 0x4a7af8, Func Offset: 0x398
	// Line 1311, Address: 0x4a7afc, Func Offset: 0x39c
	// Line 1306, Address: 0x4a7b00, Func Offset: 0x3a0
	// Line 1311, Address: 0x4a7b04, Func Offset: 0x3a4
	// Line 1307, Address: 0x4a7b08, Func Offset: 0x3a8
	// Line 1308, Address: 0x4a7b10, Func Offset: 0x3b0
	// Line 1311, Address: 0x4a7b18, Func Offset: 0x3b8
	// Line 1315, Address: 0x4a7b24, Func Offset: 0x3c4
	// Line 1318, Address: 0x4a7b34, Func Offset: 0x3d4
	// Line 1319, Address: 0x4a7ba8, Func Offset: 0x448
	// Line 1322, Address: 0x4a7bb0, Func Offset: 0x450
	// Line 1325, Address: 0x4a7bc8, Func Offset: 0x468
	// Line 1326, Address: 0x4a7bd0, Func Offset: 0x470
	// Line 1331, Address: 0x4a7bd4, Func Offset: 0x474
	// Line 1333, Address: 0x4a7bd8, Func Offset: 0x478
	// Line 1334, Address: 0x4a7bdc, Func Offset: 0x47c
	// Line 1336, Address: 0x4a7bf0, Func Offset: 0x490
	// Line 1338, Address: 0x4a7c64, Func Offset: 0x504
	// Func End, Address: 0x4a7c90, Func Offset: 0x530
}

// iParMgrRenderParSys_Streak__FPvP9xParGroup
// Start address: 0x4a7c90
void iParMgrRenderParSys_Streak(void* data, xParGroup* ps)
{
	uint32 transformFlags;
	xPar* idx;
	zParSys* s;
	RwTexture* texture;
	RwRaster* raster;
	RxObjSpace3DVertex* v3d;
	int32 vertexCount;
	// Line 979, Address: 0x4a7c90, Func Offset: 0
	// Line 983, Address: 0x4a7c94, Func Offset: 0x4
	// Line 979, Address: 0x4a7c98, Func Offset: 0x8
	// Line 983, Address: 0x4a7cbc, Func Offset: 0x2c
	// Line 986, Address: 0x4a7ee0, Func Offset: 0x250
	// Line 988, Address: 0x4a7ee4, Func Offset: 0x254
	// Line 990, Address: 0x4a7eec, Func Offset: 0x25c
	// Line 991, Address: 0x4a7ef0, Func Offset: 0x260
	// Line 993, Address: 0x4a7ef8, Func Offset: 0x268
	// Line 995, Address: 0x4a7f08, Func Offset: 0x278
	// Line 998, Address: 0x4a7f10, Func Offset: 0x280
	// Line 1007, Address: 0x4a7f24, Func Offset: 0x294
	// Line 1010, Address: 0x4a7f3c, Func Offset: 0x2ac
	// Line 1011, Address: 0x4a7f44, Func Offset: 0x2b4
	// Line 1017, Address: 0x4a7f48, Func Offset: 0x2b8
	// Line 1020, Address: 0x4a7f4c, Func Offset: 0x2bc
	// Line 1029, Address: 0x4a7f70, Func Offset: 0x2e0
	// Line 1047, Address: 0x4a7f74, Func Offset: 0x2e4
	// Line 1048, Address: 0x4a7f78, Func Offset: 0x2e8
	// Line 1049, Address: 0x4a7f7c, Func Offset: 0x2ec
	// Line 1050, Address: 0x4a7f84, Func Offset: 0x2f4
	// Line 1051, Address: 0x4a7f88, Func Offset: 0x2f8
	// Line 1052, Address: 0x4a7f8c, Func Offset: 0x2fc
	// Line 1053, Address: 0x4a7f90, Func Offset: 0x300
	// Line 1054, Address: 0x4a7f94, Func Offset: 0x304
	// Line 1055, Address: 0x4a7f98, Func Offset: 0x308
	// Line 1056, Address: 0x4a7f9c, Func Offset: 0x30c
	// Line 1057, Address: 0x4a7fa0, Func Offset: 0x310
	// Line 1058, Address: 0x4a7fa4, Func Offset: 0x314
	// Line 1059, Address: 0x4a7fa8, Func Offset: 0x318
	// Line 1060, Address: 0x4a7fac, Func Offset: 0x31c
	// Line 1061, Address: 0x4a7fb0, Func Offset: 0x320
	// Line 1062, Address: 0x4a7fb4, Func Offset: 0x324
	// Line 1063, Address: 0x4a7fb8, Func Offset: 0x328
	// Line 1064, Address: 0x4a7fbc, Func Offset: 0x32c
	// Line 1065, Address: 0x4a7fc0, Func Offset: 0x330
	// Line 1066, Address: 0x4a7fc4, Func Offset: 0x334
	// Line 1067, Address: 0x4a7fc8, Func Offset: 0x338
	// Line 1068, Address: 0x4a7fcc, Func Offset: 0x33c
	// Line 1070, Address: 0x4a7fd4, Func Offset: 0x344
	// Line 1071, Address: 0x4a7fd8, Func Offset: 0x348
	// Line 1072, Address: 0x4a7fdc, Func Offset: 0x34c
	// Line 1073, Address: 0x4a7fe0, Func Offset: 0x350
	// Line 1074, Address: 0x4a7fe4, Func Offset: 0x354
	// Line 1075, Address: 0x4a7fe8, Func Offset: 0x358
	// Line 1076, Address: 0x4a7fec, Func Offset: 0x35c
	// Line 1077, Address: 0x4a7ff0, Func Offset: 0x360
	// Line 1078, Address: 0x4a7ff4, Func Offset: 0x364
	// Line 1079, Address: 0x4a7ff8, Func Offset: 0x368
	// Line 1080, Address: 0x4a7ffc, Func Offset: 0x36c
	// Line 1081, Address: 0x4a8000, Func Offset: 0x370
	// Line 1082, Address: 0x4a8004, Func Offset: 0x374
	// Line 1083, Address: 0x4a8008, Func Offset: 0x378
	// Line 1084, Address: 0x4a800c, Func Offset: 0x37c
	// Line 1085, Address: 0x4a8010, Func Offset: 0x380
	// Line 1086, Address: 0x4a8014, Func Offset: 0x384
	// Line 1087, Address: 0x4a8018, Func Offset: 0x388
	// Line 1088, Address: 0x4a801c, Func Offset: 0x38c
	// Line 1089, Address: 0x4a8020, Func Offset: 0x390
	// Line 1090, Address: 0x4a8024, Func Offset: 0x394
	// Line 1145, Address: 0x4a8028, Func Offset: 0x398
	// Line 1150, Address: 0x4a802c, Func Offset: 0x39c
	// Line 1145, Address: 0x4a8030, Func Offset: 0x3a0
	// Line 1150, Address: 0x4a8034, Func Offset: 0x3a4
	// Line 1146, Address: 0x4a8038, Func Offset: 0x3a8
	// Line 1147, Address: 0x4a8040, Func Offset: 0x3b0
	// Line 1150, Address: 0x4a8048, Func Offset: 0x3b8
	// Line 1154, Address: 0x4a8054, Func Offset: 0x3c4
	// Line 1157, Address: 0x4a8064, Func Offset: 0x3d4
	// Line 1158, Address: 0x4a80d8, Func Offset: 0x448
	// Line 1162, Address: 0x4a80e0, Func Offset: 0x450
	// Line 1165, Address: 0x4a80f8, Func Offset: 0x468
	// Line 1166, Address: 0x4a8100, Func Offset: 0x470
	// Line 1172, Address: 0x4a8104, Func Offset: 0x474
	// Line 1174, Address: 0x4a8108, Func Offset: 0x478
	// Line 1175, Address: 0x4a810c, Func Offset: 0x47c
	// Line 1177, Address: 0x4a8120, Func Offset: 0x490
	// Line 1178, Address: 0x4a8194, Func Offset: 0x504
	// Func End, Address: 0x4a81c0, Func Offset: 0x530
}

// iRenderPushFlat__FP4xParP10xParCmdTex
// Start address: 0x4a81c0
void iRenderPushFlat(xPar* p, xParCmdTex* tex)
{
	void* vertices;
	uint16* indices;
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 a;
	float32 size;
	xMat3x3 groundmat;
	float32 yaw;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	float32 u1;
	float32 u2;
	float32 v1;
	float32 v2;
	uint16* dst;
	RxObjSpace3DVertex v3d[4];
	uint16 i3d[6];
	// Line 802, Address: 0x4a81c0, Func Offset: 0
	// Line 806, Address: 0x4a81c4, Func Offset: 0x4
	// Line 802, Address: 0x4a81c8, Func Offset: 0x8
	// Line 805, Address: 0x4a81d4, Func Offset: 0x14
	// Line 802, Address: 0x4a81d8, Func Offset: 0x18
	// Line 805, Address: 0x4a81dc, Func Offset: 0x1c
	// Line 802, Address: 0x4a81e0, Func Offset: 0x20
	// Line 806, Address: 0x4a81f4, Func Offset: 0x34
	// Line 802, Address: 0x4a81f8, Func Offset: 0x38
	// Line 806, Address: 0x4a8204, Func Offset: 0x44
	// Line 812, Address: 0x4a8208, Func Offset: 0x48
	// Line 813, Address: 0x4a8220, Func Offset: 0x60
	// Line 815, Address: 0x4a8240, Func Offset: 0x80
	// Line 816, Address: 0x4a8250, Func Offset: 0x90
	// Line 825, Address: 0x4a8268, Func Offset: 0xa8
	// Line 820, Address: 0x4a8274, Func Offset: 0xb4
	// Line 821, Address: 0x4a8278, Func Offset: 0xb8
	// Line 829, Address: 0x4a827c, Func Offset: 0xbc
	// Line 822, Address: 0x4a8284, Func Offset: 0xc4
	// Line 823, Address: 0x4a8288, Func Offset: 0xc8
	// Line 830, Address: 0x4a828c, Func Offset: 0xcc
	// Line 832, Address: 0x4a8294, Func Offset: 0xd4
	// Line 834, Address: 0x4a82e0, Func Offset: 0x120
	// Line 837, Address: 0x4a82f0, Func Offset: 0x130
	// Line 872, Address: 0x4a82f4, Func Offset: 0x134
	// Line 873, Address: 0x4a82f8, Func Offset: 0x138
	// Line 874, Address: 0x4a82fc, Func Offset: 0x13c
	// Line 875, Address: 0x4a8300, Func Offset: 0x140
	// Line 872, Address: 0x4a8304, Func Offset: 0x144
	// Line 847, Address: 0x4a8308, Func Offset: 0x148
	// Line 878, Address: 0x4a830c, Func Offset: 0x14c
	// Line 848, Address: 0x4a8310, Func Offset: 0x150
	// Line 877, Address: 0x4a8314, Func Offset: 0x154
	// Line 849, Address: 0x4a8318, Func Offset: 0x158
	// Line 873, Address: 0x4a831c, Func Offset: 0x15c
	// Line 839, Address: 0x4a8320, Func Offset: 0x160
	// Line 874, Address: 0x4a8324, Func Offset: 0x164
	// Line 837, Address: 0x4a8328, Func Offset: 0x168
	// Line 875, Address: 0x4a832c, Func Offset: 0x16c
	// Line 877, Address: 0x4a8330, Func Offset: 0x170
	// Line 878, Address: 0x4a8338, Func Offset: 0x178
	// Line 879, Address: 0x4a833c, Func Offset: 0x17c
	// Line 878, Address: 0x4a8340, Func Offset: 0x180
	// Line 872, Address: 0x4a8344, Func Offset: 0x184
	// Line 878, Address: 0x4a8348, Func Offset: 0x188
	// Line 872, Address: 0x4a834c, Func Offset: 0x18c
	// Line 880, Address: 0x4a8350, Func Offset: 0x190
	// Line 872, Address: 0x4a8354, Func Offset: 0x194
	// Line 877, Address: 0x4a835c, Func Offset: 0x19c
	// Line 879, Address: 0x4a8360, Func Offset: 0x1a0
	// Line 880, Address: 0x4a8364, Func Offset: 0x1a4
	// Line 873, Address: 0x4a836c, Func Offset: 0x1ac
	// Line 844, Address: 0x4a8370, Func Offset: 0x1b0
	// Line 880, Address: 0x4a8374, Func Offset: 0x1b4
	// Line 879, Address: 0x4a8378, Func Offset: 0x1b8
	// Line 873, Address: 0x4a837c, Func Offset: 0x1bc
	// Line 842, Address: 0x4a8380, Func Offset: 0x1c0
	// Line 873, Address: 0x4a8384, Func Offset: 0x1c4
	// Line 839, Address: 0x4a8388, Func Offset: 0x1c8
	// Line 873, Address: 0x4a838c, Func Offset: 0x1cc
	// Line 879, Address: 0x4a8390, Func Offset: 0x1d0
	// Line 874, Address: 0x4a8394, Func Offset: 0x1d4
	// Line 875, Address: 0x4a8398, Func Offset: 0x1d8
	// Line 874, Address: 0x4a839c, Func Offset: 0x1dc
	// Line 875, Address: 0x4a83a0, Func Offset: 0x1e0
	// Line 844, Address: 0x4a83a4, Func Offset: 0x1e4
	// Line 874, Address: 0x4a83a8, Func Offset: 0x1e8
	// Line 875, Address: 0x4a83b0, Func Offset: 0x1f0
	// Line 842, Address: 0x4a83b8, Func Offset: 0x1f8
	// Line 877, Address: 0x4a83c8, Func Offset: 0x208
	// Line 880, Address: 0x4a83d0, Func Offset: 0x210
	// Line 877, Address: 0x4a83d8, Func Offset: 0x218
	// Line 880, Address: 0x4a83e0, Func Offset: 0x220
	// Line 878, Address: 0x4a83ec, Func Offset: 0x22c
	// Line 879, Address: 0x4a83f4, Func Offset: 0x234
	// Line 878, Address: 0x4a83fc, Func Offset: 0x23c
	// Line 879, Address: 0x4a8404, Func Offset: 0x244
	// Line 882, Address: 0x4a8408, Func Offset: 0x248
	// Line 887, Address: 0x4a8418, Func Offset: 0x258
	// Line 888, Address: 0x4a845c, Func Offset: 0x29c
	// Line 890, Address: 0x4a848c, Func Offset: 0x2cc
	// Line 891, Address: 0x4a8490, Func Offset: 0x2d0
	// Line 890, Address: 0x4a8494, Func Offset: 0x2d4
	// Line 891, Address: 0x4a8498, Func Offset: 0x2d8
	// Line 890, Address: 0x4a849c, Func Offset: 0x2dc
	// Line 893, Address: 0x4a84a0, Func Offset: 0x2e0
	// Line 890, Address: 0x4a84ac, Func Offset: 0x2ec
	// Line 896, Address: 0x4a84b0, Func Offset: 0x2f0
	// Line 894, Address: 0x4a84b4, Func Offset: 0x2f4
	// Line 895, Address: 0x4a84bc, Func Offset: 0x2fc
	// Line 896, Address: 0x4a84c4, Func Offset: 0x304
	// Line 891, Address: 0x4a84cc, Func Offset: 0x30c
	// Line 888, Address: 0x4a84d0, Func Offset: 0x310
	// Line 891, Address: 0x4a84d4, Func Offset: 0x314
	// Line 888, Address: 0x4a84d8, Func Offset: 0x318
	// Line 890, Address: 0x4a84e0, Func Offset: 0x320
	// Line 891, Address: 0x4a84e8, Func Offset: 0x328
	// Line 893, Address: 0x4a84f0, Func Offset: 0x330
	// Line 894, Address: 0x4a84f4, Func Offset: 0x334
	// Line 895, Address: 0x4a84fc, Func Offset: 0x33c
	// Line 896, Address: 0x4a8504, Func Offset: 0x344
	// Line 913, Address: 0x4a8508, Func Offset: 0x348
	// Line 918, Address: 0x4a850c, Func Offset: 0x34c
	// Line 913, Address: 0x4a8510, Func Offset: 0x350
	// Line 918, Address: 0x4a8514, Func Offset: 0x354
	// Line 922, Address: 0x4a8534, Func Offset: 0x374
	// Line 913, Address: 0x4a8538, Func Offset: 0x378
	// Line 918, Address: 0x4a8540, Func Offset: 0x380
	// Line 913, Address: 0x4a8548, Func Offset: 0x388
	// Line 918, Address: 0x4a854c, Func Offset: 0x38c
	// Line 913, Address: 0x4a8550, Func Offset: 0x390
	// Line 918, Address: 0x4a8554, Func Offset: 0x394
	// Line 922, Address: 0x4a8568, Func Offset: 0x3a8
	// Line 918, Address: 0x4a856c, Func Offset: 0x3ac
	// Line 922, Address: 0x4a8570, Func Offset: 0x3b0
	// Line 918, Address: 0x4a8574, Func Offset: 0x3b4
	// Line 922, Address: 0x4a85ac, Func Offset: 0x3ec
	// Line 927, Address: 0x4a85c4, Func Offset: 0x404
	// Line 928, Address: 0x4a85d0, Func Offset: 0x410
	// Line 927, Address: 0x4a85d4, Func Offset: 0x414
	// Line 928, Address: 0x4a85d8, Func Offset: 0x418
	// Line 927, Address: 0x4a85dc, Func Offset: 0x41c
	// Line 928, Address: 0x4a85e0, Func Offset: 0x420
	// Line 929, Address: 0x4a85e8, Func Offset: 0x428
	// Line 813, Address: 0x4a85f8, Func Offset: 0x438
	// Line 929, Address: 0x4a85fc, Func Offset: 0x43c
	// Line 813, Address: 0x4a8618, Func Offset: 0x458
	// Line 929, Address: 0x4a8620, Func Offset: 0x460
	// Line 816, Address: 0x4a8650, Func Offset: 0x490
	// Line 929, Address: 0x4a8654, Func Offset: 0x494
	// Line 816, Address: 0x4a8678, Func Offset: 0x4b8
	// Line 929, Address: 0x4a8680, Func Offset: 0x4c0
	// Line 902, Address: 0x4a86b8, Func Offset: 0x4f8
	// Line 929, Address: 0x4a86bc, Func Offset: 0x4fc
	// Func End, Address: 0x4a8720, Func Offset: 0x560
}

// iRenderPushQuadStreak__FP4xParP10xParCmdTex
// Start address: 0x4a8720
void iRenderPushQuadStreak(xPar* p, xParCmdTex* tex)
{
	void* vertices;
	uint16* indices;
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 a;
	float32 size;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	float32 u1;
	float32 u2;
	float32 v1;
	float32 v2;
	uint16* dst;
	RxObjSpace3DVertex v3d[4];
	uint16 i3d[6];
	// Line 666, Address: 0x4a8720, Func Offset: 0
	// Line 670, Address: 0x4a8724, Func Offset: 0x4
	// Line 666, Address: 0x4a8728, Func Offset: 0x8
	// Line 669, Address: 0x4a8734, Func Offset: 0x14
	// Line 666, Address: 0x4a8738, Func Offset: 0x18
	// Line 669, Address: 0x4a873c, Func Offset: 0x1c
	// Line 666, Address: 0x4a8740, Func Offset: 0x20
	// Line 670, Address: 0x4a875c, Func Offset: 0x3c
	// Line 677, Address: 0x4a8764, Func Offset: 0x44
	// Line 678, Address: 0x4a877c, Func Offset: 0x5c
	// Line 680, Address: 0x4a879c, Func Offset: 0x7c
	// Line 681, Address: 0x4a87ac, Func Offset: 0x8c
	// Line 692, Address: 0x4a87c4, Func Offset: 0xa4
	// Line 741, Address: 0x4a87c8, Func Offset: 0xa8
	// Line 692, Address: 0x4a87cc, Func Offset: 0xac
	// Line 742, Address: 0x4a87d0, Func Offset: 0xb0
	// Line 691, Address: 0x4a87d4, Func Offset: 0xb4
	// Line 743, Address: 0x4a87d8, Func Offset: 0xb8
	// Line 744, Address: 0x4a87dc, Func Offset: 0xbc
	// Line 685, Address: 0x4a87e0, Func Offset: 0xc0
	// Line 694, Address: 0x4a87e4, Func Offset: 0xc4
	// Line 686, Address: 0x4a87e8, Func Offset: 0xc8
	// Line 687, Address: 0x4a87ec, Func Offset: 0xcc
	// Line 699, Address: 0x4a87f0, Func Offset: 0xd0
	// Line 688, Address: 0x4a87f4, Func Offset: 0xd4
	// Line 700, Address: 0x4a87f8, Func Offset: 0xd8
	// Line 693, Address: 0x4a87fc, Func Offset: 0xdc
	// Line 746, Address: 0x4a8800, Func Offset: 0xe0
	// Line 693, Address: 0x4a8804, Func Offset: 0xe4
	// Line 749, Address: 0x4a8808, Func Offset: 0xe8
	// Line 692, Address: 0x4a880c, Func Offset: 0xec
	// Line 746, Address: 0x4a8810, Func Offset: 0xf0
	// Line 749, Address: 0x4a8814, Func Offset: 0xf4
	// Line 746, Address: 0x4a8818, Func Offset: 0xf8
	// Line 747, Address: 0x4a881c, Func Offset: 0xfc
	// Line 748, Address: 0x4a8820, Func Offset: 0x100
	// Line 747, Address: 0x4a8824, Func Offset: 0x104
	// Line 748, Address: 0x4a8828, Func Offset: 0x108
	// Line 747, Address: 0x4a882c, Func Offset: 0x10c
	// Line 741, Address: 0x4a8830, Func Offset: 0x110
	// Line 694, Address: 0x4a8834, Func Offset: 0x114
	// Line 742, Address: 0x4a8838, Func Offset: 0x118
	// Line 694, Address: 0x4a883c, Func Offset: 0x11c
	// Line 743, Address: 0x4a8840, Func Offset: 0x120
	// Line 693, Address: 0x4a8844, Func Offset: 0x124
	// Line 744, Address: 0x4a8848, Func Offset: 0x128
	// Line 748, Address: 0x4a884c, Func Offset: 0x12c
	// Line 694, Address: 0x4a8850, Func Offset: 0x130
	// Line 710, Address: 0x4a8854, Func Offset: 0x134
	// Line 711, Address: 0x4a885c, Func Offset: 0x13c
	// Line 712, Address: 0x4a8860, Func Offset: 0x140
	// Line 721, Address: 0x4a8864, Func Offset: 0x144
	// Line 710, Address: 0x4a8868, Func Offset: 0x148
	// Line 746, Address: 0x4a886c, Func Offset: 0x14c
	// Line 741, Address: 0x4a8870, Func Offset: 0x150
	// Line 736, Address: 0x4a8874, Func Offset: 0x154
	// Line 749, Address: 0x4a8878, Func Offset: 0x158
	// Line 741, Address: 0x4a887c, Func Offset: 0x15c
	// Line 749, Address: 0x4a8888, Func Offset: 0x168
	// Line 742, Address: 0x4a888c, Func Offset: 0x16c
	// Line 722, Address: 0x4a8890, Func Offset: 0x170
	// Line 742, Address: 0x4a8894, Func Offset: 0x174
	// Line 743, Address: 0x4a88a0, Func Offset: 0x180
	// Line 746, Address: 0x4a88a4, Func Offset: 0x184
	// Line 744, Address: 0x4a88a8, Func Offset: 0x188
	// Line 737, Address: 0x4a88ac, Func Offset: 0x18c
	// Line 743, Address: 0x4a88b0, Func Offset: 0x190
	// Line 744, Address: 0x4a88b4, Func Offset: 0x194
	// Line 743, Address: 0x4a88b8, Func Offset: 0x198
	// Line 749, Address: 0x4a88c0, Func Offset: 0x1a0
	// Line 744, Address: 0x4a88c4, Func Offset: 0x1a4
	// Line 723, Address: 0x4a88c8, Func Offset: 0x1a8
	// Line 744, Address: 0x4a88cc, Func Offset: 0x1ac
	// Line 746, Address: 0x4a88d0, Func Offset: 0x1b0
	// Line 738, Address: 0x4a88d4, Func Offset: 0x1b4
	// Line 710, Address: 0x4a88d8, Func Offset: 0x1b8
	// Line 749, Address: 0x4a88dc, Func Offset: 0x1bc
	// Line 710, Address: 0x4a88e0, Func Offset: 0x1c0
	// Line 726, Address: 0x4a88e8, Func Offset: 0x1c8
	// Line 747, Address: 0x4a88ec, Func Offset: 0x1cc
	// Line 731, Address: 0x4a88f0, Func Offset: 0x1d0
	// Line 711, Address: 0x4a88f4, Func Offset: 0x1d4
	// Line 748, Address: 0x4a88fc, Func Offset: 0x1dc
	// Line 727, Address: 0x4a8900, Func Offset: 0x1e0
	// Line 747, Address: 0x4a8904, Func Offset: 0x1e4
	// Line 732, Address: 0x4a8908, Func Offset: 0x1e8
	// Line 712, Address: 0x4a890c, Func Offset: 0x1ec
	// Line 748, Address: 0x4a8914, Func Offset: 0x1f4
	// Line 728, Address: 0x4a8918, Func Offset: 0x1f8
	// Line 747, Address: 0x4a891c, Func Offset: 0x1fc
	// Line 733, Address: 0x4a8920, Func Offset: 0x200
	// Line 751, Address: 0x4a8924, Func Offset: 0x204
	// Line 756, Address: 0x4a8934, Func Offset: 0x214
	// Line 757, Address: 0x4a8978, Func Offset: 0x258
	// Line 759, Address: 0x4a89a8, Func Offset: 0x288
	// Line 760, Address: 0x4a89ac, Func Offset: 0x28c
	// Line 759, Address: 0x4a89b0, Func Offset: 0x290
	// Line 760, Address: 0x4a89b4, Func Offset: 0x294
	// Line 759, Address: 0x4a89b8, Func Offset: 0x298
	// Line 762, Address: 0x4a89bc, Func Offset: 0x29c
	// Line 763, Address: 0x4a89c0, Func Offset: 0x2a0
	// Line 762, Address: 0x4a89c4, Func Offset: 0x2a4
	// Line 759, Address: 0x4a89c8, Func Offset: 0x2a8
	// Line 763, Address: 0x4a89cc, Func Offset: 0x2ac
	// Line 764, Address: 0x4a89d0, Func Offset: 0x2b0
	// Line 765, Address: 0x4a89d8, Func Offset: 0x2b8
	// Line 762, Address: 0x4a89dc, Func Offset: 0x2bc
	// Line 763, Address: 0x4a89e0, Func Offset: 0x2c0
	// Line 765, Address: 0x4a89e4, Func Offset: 0x2c4
	// Line 760, Address: 0x4a89e8, Func Offset: 0x2c8
	// Line 757, Address: 0x4a89ec, Func Offset: 0x2cc
	// Line 760, Address: 0x4a89f0, Func Offset: 0x2d0
	// Line 757, Address: 0x4a89f4, Func Offset: 0x2d4
	// Line 759, Address: 0x4a89fc, Func Offset: 0x2dc
	// Line 760, Address: 0x4a8a04, Func Offset: 0x2e4
	// Line 762, Address: 0x4a8a0c, Func Offset: 0x2ec
	// Line 765, Address: 0x4a8a10, Func Offset: 0x2f0
	// Line 763, Address: 0x4a8a14, Func Offset: 0x2f4
	// Line 764, Address: 0x4a8a18, Func Offset: 0x2f8
	// Line 765, Address: 0x4a8a20, Func Offset: 0x300
	// Line 781, Address: 0x4a8a24, Func Offset: 0x304
	// Line 786, Address: 0x4a8a28, Func Offset: 0x308
	// Line 781, Address: 0x4a8a2c, Func Offset: 0x30c
	// Line 786, Address: 0x4a8a30, Func Offset: 0x310
	// Line 790, Address: 0x4a8a50, Func Offset: 0x330
	// Line 781, Address: 0x4a8a54, Func Offset: 0x334
	// Line 786, Address: 0x4a8a5c, Func Offset: 0x33c
	// Line 781, Address: 0x4a8a64, Func Offset: 0x344
	// Line 786, Address: 0x4a8a68, Func Offset: 0x348
	// Line 781, Address: 0x4a8a6c, Func Offset: 0x34c
	// Line 786, Address: 0x4a8a70, Func Offset: 0x350
	// Line 790, Address: 0x4a8a84, Func Offset: 0x364
	// Line 786, Address: 0x4a8a88, Func Offset: 0x368
	// Line 790, Address: 0x4a8a8c, Func Offset: 0x36c
	// Line 786, Address: 0x4a8a90, Func Offset: 0x370
	// Line 790, Address: 0x4a8ac8, Func Offset: 0x3a8
	// Line 795, Address: 0x4a8ae0, Func Offset: 0x3c0
	// Line 796, Address: 0x4a8aec, Func Offset: 0x3cc
	// Line 795, Address: 0x4a8af0, Func Offset: 0x3d0
	// Line 796, Address: 0x4a8af4, Func Offset: 0x3d4
	// Line 795, Address: 0x4a8af8, Func Offset: 0x3d8
	// Line 796, Address: 0x4a8afc, Func Offset: 0x3dc
	// Line 797, Address: 0x4a8b04, Func Offset: 0x3e4
	// Line 678, Address: 0x4a8b14, Func Offset: 0x3f4
	// Line 797, Address: 0x4a8b18, Func Offset: 0x3f8
	// Line 678, Address: 0x4a8b34, Func Offset: 0x414
	// Line 797, Address: 0x4a8b3c, Func Offset: 0x41c
	// Line 681, Address: 0x4a8b6c, Func Offset: 0x44c
	// Line 797, Address: 0x4a8b70, Func Offset: 0x450
	// Line 681, Address: 0x4a8b94, Func Offset: 0x474
	// Line 797, Address: 0x4a8b9c, Func Offset: 0x47c
	// Line 770, Address: 0x4a8bc8, Func Offset: 0x4a8
	// Line 797, Address: 0x4a8bcc, Func Offset: 0x4ac
	// Func End, Address: 0x4a8c30, Func Offset: 0x510
}

// iParMgrRenderParSys_Sprite__FPvP9xParGroup
// Start address: 0x4a8c30
void iParMgrRenderParSys_Sprite(void* data, xParGroup* ps)
{
	xPar* idx;
	zParSys* s;
	RwTexture* texture;
	RwRaster* raster;
	int32 indexCount;
	int32 vertexCount;
	uint16* i3d;
	RxObjSpace3DVertex* v3d;
	xParCmdTex* tex;
	uint32 pivot;
	xVec3 offset;
	xVec3 temp_offset;
	xPar* p;
	float32 u1;
	float32 u2;
	float32 v1;
	float32 v2;
	// Line 376, Address: 0x4a8c30, Func Offset: 0
	// Line 379, Address: 0x4a8c34, Func Offset: 0x4
	// Line 376, Address: 0x4a8c38, Func Offset: 0x8
	// Line 379, Address: 0x4a8c6c, Func Offset: 0x3c
	// Line 377, Address: 0x4a8c70, Func Offset: 0x40
	// Line 379, Address: 0x4a8c74, Func Offset: 0x44
	// Line 383, Address: 0x4a8e94, Func Offset: 0x264
	// Line 385, Address: 0x4a8e98, Func Offset: 0x268
	// Line 387, Address: 0x4a8ea0, Func Offset: 0x270
	// Line 388, Address: 0x4a8ea4, Func Offset: 0x274
	// Line 390, Address: 0x4a8eac, Func Offset: 0x27c
	// Line 404, Address: 0x4a8ebc, Func Offset: 0x28c
	// Line 399, Address: 0x4a8ec0, Func Offset: 0x290
	// Line 400, Address: 0x4a8ec4, Func Offset: 0x294
	// Line 399, Address: 0x4a8ec8, Func Offset: 0x298
	// Line 400, Address: 0x4a8ecc, Func Offset: 0x29c
	// Line 397, Address: 0x4a8ed0, Func Offset: 0x2a0
	// Line 401, Address: 0x4a8ed4, Func Offset: 0x2a4
	// Line 398, Address: 0x4a8ed8, Func Offset: 0x2a8
	// Line 404, Address: 0x4a8edc, Func Offset: 0x2ac
	// Line 405, Address: 0x4a8ee0, Func Offset: 0x2b0
	// Line 406, Address: 0x4a8f08, Func Offset: 0x2d8
	// Line 407, Address: 0x4a8fa4, Func Offset: 0x374
	// Line 408, Address: 0x4a9038, Func Offset: 0x408
	// Line 409, Address: 0x4a90d4, Func Offset: 0x4a4
	// Line 413, Address: 0x4a9168, Func Offset: 0x538
	// Line 416, Address: 0x4a9180, Func Offset: 0x550
	// Line 417, Address: 0x4a9190, Func Offset: 0x560
	// Line 418, Address: 0x4a9194, Func Offset: 0x564
	// Line 419, Address: 0x4a9198, Func Offset: 0x568
	// Line 420, Address: 0x4a919c, Func Offset: 0x56c
	// Line 421, Address: 0x4a91a0, Func Offset: 0x570
	// Line 427, Address: 0x4a91a4, Func Offset: 0x574
	// Line 430, Address: 0x4a91bc, Func Offset: 0x58c
	// Line 433, Address: 0x4a91c0, Func Offset: 0x590
	// Line 435, Address: 0x4a91cc, Func Offset: 0x59c
	// Line 436, Address: 0x4a91d8, Func Offset: 0x5a8
	// Line 435, Address: 0x4a91dc, Func Offset: 0x5ac
	// Line 436, Address: 0x4a9228, Func Offset: 0x5f8
	// Line 435, Address: 0x4a922c, Func Offset: 0x5fc
	// Line 436, Address: 0x4a9234, Func Offset: 0x604
	// Line 435, Address: 0x4a9238, Func Offset: 0x608
	// Line 436, Address: 0x4a923c, Func Offset: 0x60c
	// Line 435, Address: 0x4a9244, Func Offset: 0x614
	// Line 436, Address: 0x4a9250, Func Offset: 0x620
	// Line 437, Address: 0x4a9264, Func Offset: 0x634
	// Line 458, Address: 0x4a9268, Func Offset: 0x638
	// Line 459, Address: 0x4a926c, Func Offset: 0x63c
	// Line 460, Address: 0x4a9270, Func Offset: 0x640
	// Line 461, Address: 0x4a9274, Func Offset: 0x644
	// Line 462, Address: 0x4a9278, Func Offset: 0x648
	// Line 463, Address: 0x4a927c, Func Offset: 0x64c
	// Line 464, Address: 0x4a9280, Func Offset: 0x650
	// Line 466, Address: 0x4a9288, Func Offset: 0x658
	// Line 467, Address: 0x4a928c, Func Offset: 0x65c
	// Line 468, Address: 0x4a9290, Func Offset: 0x660
	// Line 469, Address: 0x4a9294, Func Offset: 0x664
	// Line 470, Address: 0x4a9298, Func Offset: 0x668
	// Line 471, Address: 0x4a929c, Func Offset: 0x66c
	// Line 472, Address: 0x4a92a4, Func Offset: 0x674
	// Line 473, Address: 0x4a92a8, Func Offset: 0x678
	// Line 474, Address: 0x4a92ac, Func Offset: 0x67c
	// Line 475, Address: 0x4a92b0, Func Offset: 0x680
	// Line 476, Address: 0x4a92b4, Func Offset: 0x684
	// Line 477, Address: 0x4a92b8, Func Offset: 0x688
	// Line 478, Address: 0x4a92bc, Func Offset: 0x68c
	// Line 479, Address: 0x4a92c0, Func Offset: 0x690
	// Line 480, Address: 0x4a92c4, Func Offset: 0x694
	// Line 481, Address: 0x4a92c8, Func Offset: 0x698
	// Line 482, Address: 0x4a92cc, Func Offset: 0x69c
	// Line 483, Address: 0x4a92d0, Func Offset: 0x6a0
	// Line 484, Address: 0x4a92d4, Func Offset: 0x6a4
	// Line 485, Address: 0x4a92d8, Func Offset: 0x6a8
	// Line 486, Address: 0x4a92dc, Func Offset: 0x6ac
	// Line 487, Address: 0x4a92e0, Func Offset: 0x6b0
	// Line 488, Address: 0x4a92e4, Func Offset: 0x6b4
	// Line 489, Address: 0x4a92e8, Func Offset: 0x6b8
	// Line 490, Address: 0x4a92ec, Func Offset: 0x6bc
	// Line 491, Address: 0x4a92f0, Func Offset: 0x6c0
	// Line 492, Address: 0x4a92f4, Func Offset: 0x6c4
	// Line 493, Address: 0x4a92f8, Func Offset: 0x6c8
	// Line 494, Address: 0x4a92fc, Func Offset: 0x6cc
	// Line 495, Address: 0x4a9300, Func Offset: 0x6d0
	// Line 496, Address: 0x4a9304, Func Offset: 0x6d4
	// Line 497, Address: 0x4a9308, Func Offset: 0x6d8
	// Line 498, Address: 0x4a930c, Func Offset: 0x6dc
	// Line 499, Address: 0x4a9310, Func Offset: 0x6e0
	// Line 551, Address: 0x4a9314, Func Offset: 0x6e4
	// Line 556, Address: 0x4a9324, Func Offset: 0x6f4
	// Line 557, Address: 0x4a9368, Func Offset: 0x738
	// Line 559, Address: 0x4a9398, Func Offset: 0x768
	// Line 560, Address: 0x4a939c, Func Offset: 0x76c
	// Line 559, Address: 0x4a93a0, Func Offset: 0x770
	// Line 560, Address: 0x4a93a4, Func Offset: 0x774
	// Line 559, Address: 0x4a93a8, Func Offset: 0x778
	// Line 560, Address: 0x4a93ac, Func Offset: 0x77c
	// Line 559, Address: 0x4a93b4, Func Offset: 0x784
	// Line 557, Address: 0x4a93b8, Func Offset: 0x788
	// Line 560, Address: 0x4a93bc, Func Offset: 0x78c
	// Line 557, Address: 0x4a93c0, Func Offset: 0x790
	// Line 559, Address: 0x4a93c8, Func Offset: 0x798
	// Line 562, Address: 0x4a93cc, Func Offset: 0x79c
	// Line 559, Address: 0x4a93d0, Func Offset: 0x7a0
	// Line 560, Address: 0x4a93d4, Func Offset: 0x7a4
	// Line 562, Address: 0x4a93d8, Func Offset: 0x7a8
	// Line 560, Address: 0x4a93dc, Func Offset: 0x7ac
	// Line 563, Address: 0x4a93e0, Func Offset: 0x7b0
	// Line 564, Address: 0x4a93e8, Func Offset: 0x7b8
	// Line 565, Address: 0x4a93f0, Func Offset: 0x7c0
	// Line 567, Address: 0x4a93f4, Func Offset: 0x7c4
	// Line 570, Address: 0x4a9400, Func Offset: 0x7d0
	// Line 571, Address: 0x4a9408, Func Offset: 0x7d8
	// Line 572, Address: 0x4a9410, Func Offset: 0x7e0
	// Line 573, Address: 0x4a9418, Func Offset: 0x7e8
	// Line 580, Address: 0x4a9420, Func Offset: 0x7f0
	// Line 590, Address: 0x4a9438, Func Offset: 0x808
	// Line 580, Address: 0x4a943c, Func Offset: 0x80c
	// Line 595, Address: 0x4a9440, Func Offset: 0x810
	// Line 580, Address: 0x4a9444, Func Offset: 0x814
	// Line 591, Address: 0x4a9448, Func Offset: 0x818
	// Line 580, Address: 0x4a944c, Func Offset: 0x81c
	// Line 592, Address: 0x4a9450, Func Offset: 0x820
	// Line 595, Address: 0x4a9454, Func Offset: 0x824
	// Line 599, Address: 0x4a9468, Func Offset: 0x838
	// Line 600, Address: 0x4a9470, Func Offset: 0x840
	// Line 601, Address: 0x4a9480, Func Offset: 0x850
	// Line 606, Address: 0x4a9484, Func Offset: 0x854
	// Line 612, Address: 0x4a94e0, Func Offset: 0x8b0
	// Line 606, Address: 0x4a94e4, Func Offset: 0x8b4
	// Line 607, Address: 0x4a94e8, Func Offset: 0x8b8
	// Line 606, Address: 0x4a94ec, Func Offset: 0x8bc
	// Line 612, Address: 0x4a94f0, Func Offset: 0x8c0
	// Line 608, Address: 0x4a94f4, Func Offset: 0x8c4
	// Line 612, Address: 0x4a94f8, Func Offset: 0x8c8
	// Line 613, Address: 0x4a9508, Func Offset: 0x8d8
	// Line 614, Address: 0x4a9518, Func Offset: 0x8e8
	// Line 615, Address: 0x4a951c, Func Offset: 0x8ec
	// Line 616, Address: 0x4a9520, Func Offset: 0x8f0
	// Line 617, Address: 0x4a9524, Func Offset: 0x8f4
	// Line 618, Address: 0x4a9528, Func Offset: 0x8f8
	// Line 624, Address: 0x4a952c, Func Offset: 0x8fc
	// Line 625, Address: 0x4a9530, Func Offset: 0x900
	// Line 627, Address: 0x4a953c, Func Offset: 0x90c
	// Line 629, Address: 0x4a9574, Func Offset: 0x944
	// Line 632, Address: 0x4a9580, Func Offset: 0x950
	// Line 633, Address: 0x4a9588, Func Offset: 0x958
	// Line 637, Address: 0x4a958c, Func Offset: 0x95c
	// Line 638, Address: 0x4a95fc, Func Offset: 0x9cc
	// Func End, Address: 0x4a9634, Func Offset: 0xa04
}

// iParMgrRender__Fv
// Start address: 0x4a9640
void iParMgrRender()
{
	// Line 216, Address: 0x4a9640, Func Offset: 0
	// Func End, Address: 0x4a9648, Func Offset: 0x8
}

// iParMgrUpdate__Ff
// Start address: 0x4a9650
void iParMgrUpdate()
{
	// Line 178, Address: 0x4a9650, Func Offset: 0
	// Func End, Address: 0x4a9658, Func Offset: 0x8
}

// iParMgrInit__Fv
// Start address: 0x4a9660
void iParMgrInit()
{
	int32 i;
	// Line 138, Address: 0x4a9660, Func Offset: 0
	// Line 141, Address: 0x4a966c, Func Offset: 0xc
	// Line 142, Address: 0x4a9670, Func Offset: 0x10
	// Line 141, Address: 0x4a9674, Func Offset: 0x14
	// Line 142, Address: 0x4a967c, Func Offset: 0x1c
	// Line 144, Address: 0x4a9738, Func Offset: 0xd8
	// Line 148, Address: 0x4a9740, Func Offset: 0xe0
	// Func End, Address: 0x4a9748, Func Offset: 0xe8
}

