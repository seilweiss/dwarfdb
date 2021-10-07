



int32 xSweptSphereToNPC(xSweptSphere* sws, xScene* sc, xEnt* mover, uint8 collType, int32 penby);
int32 xSweptSphereToStatDyn(xSweptSphere* sws, xScene* sc, xEnt* mover, uint8 collType, int32 penby);
int32 xSweptSphereToNonMoving(xSweptSphere* sws, xScene* sc, xEnt* mover, uint8 collType, int32 penby);
int32 xSweptSphereToScene(xSweptSphere* sws, xScene* sc, xEnt* mover, uint8 collType, int32 penby);
int32 xSweptSphereToEnt(xSweptSphere* sws, xEnt* ent, xRay3* ray);
void SweptSphereHitsEntCB(xRay3* ray, xQCData* qcd, xEnt* ent, void* data);
int32 xSweptSphereToTriangle(xSweptSphere& sws, xVec3& v0, xVec3& v1, xVec3& v2);
int32 xSweptSphereToBound(xSweptSphere* sws, xBound* bound);
int32 xSweptSphereToSphere(xSweptSphere& sws, xVec3& center, float32 radius);
int32 xSweptSphereToModel(xSweptSphere* sws, RpAtomic* model, RwMatrixTag* mat);
void RpCollTreeForAllCapsuleIntsec(RpCollTree* tree, RwLine* line, float32 radius, int32(*callBack)(int32, int32, void*), void* data);
int32 SweptSphereModelCB(int32 numTriangles, int32 triOffset, void* data);
int32 xSweptSphereToEnv(xSweptSphere* sws, xEnv* env);
int32 SweptSphereLeafNodeCB(xClumpCollBSPTriangle* triangles, void* data);
void xSweptSphereGetResults(xSweptSphere* sws);
void xSweptSpherePrepare(xSweptSphere* sws, xVec3* start, xVec3* end, float32 radius);

// xSweptSphereToNPC__FP12xSweptSphereP6xSceneP4xEntUci
// Start address: 0x418ce0
int32 xSweptSphereToNPC(xSweptSphere* sws, xScene* sc, xEnt* mover, uint8 collType, int32 penby)
{
	xRay3 ray;
	float32 one_len;
	// Line 1926, Address: 0x418ce0, Func Offset: 0
	// Line 1936, Address: 0x418ce8, Func Offset: 0x8
	// Line 1928, Address: 0x418cec, Func Offset: 0xc
	// Line 1929, Address: 0x418cf0, Func Offset: 0x10
	// Line 1930, Address: 0x418cf4, Func Offset: 0x14
	// Line 1927, Address: 0x418cf8, Func Offset: 0x18
	// Line 1936, Address: 0x418cfc, Func Offset: 0x1c
	// Line 1942, Address: 0x418d44, Func Offset: 0x64
	// Line 1948, Address: 0x418d4c, Func Offset: 0x6c
	// Line 1949, Address: 0x418d74, Func Offset: 0x94
	// Line 1948, Address: 0x418d78, Func Offset: 0x98
	// Line 1949, Address: 0x418df0, Func Offset: 0x110
	// Line 1953, Address: 0x418df8, Func Offset: 0x118
	// Line 1956, Address: 0x418e14, Func Offset: 0x134
	// Line 1950, Address: 0x418e1c, Func Offset: 0x13c
	// Line 1956, Address: 0x418e20, Func Offset: 0x140
	// Line 1957, Address: 0x418e2c, Func Offset: 0x14c
	// Func End, Address: 0x418e38, Func Offset: 0x158
}

// xSweptSphereToStatDyn__FP12xSweptSphereP6xSceneP4xEntUci
// Start address: 0x418e40
int32 xSweptSphereToStatDyn(xSweptSphere* sws, xScene* sc, xEnt* mover, uint8 collType, int32 penby)
{
	xRay3 ray;
	float32 one_len;
	// Line 1890, Address: 0x418e40, Func Offset: 0
	// Line 1899, Address: 0x418e48, Func Offset: 0x8
	// Line 1890, Address: 0x418e4c, Func Offset: 0xc
	// Line 1892, Address: 0x418e58, Func Offset: 0x18
	// Line 1893, Address: 0x418e5c, Func Offset: 0x1c
	// Line 1894, Address: 0x418e60, Func Offset: 0x20
	// Line 1891, Address: 0x418e64, Func Offset: 0x24
	// Line 1899, Address: 0x418e68, Func Offset: 0x28
	// Line 1905, Address: 0x418eb0, Func Offset: 0x70
	// Line 1911, Address: 0x418eb8, Func Offset: 0x78
	// Line 1912, Address: 0x418ee0, Func Offset: 0xa0
	// Line 1911, Address: 0x418ee4, Func Offset: 0xa4
	// Line 1912, Address: 0x418f5c, Func Offset: 0x11c
	// Line 1916, Address: 0x418f64, Func Offset: 0x124
	// Line 1917, Address: 0x418f88, Func Offset: 0x148
	// Line 1920, Address: 0x418fac, Func Offset: 0x16c
	// Line 1913, Address: 0x418fb4, Func Offset: 0x174
	// Line 1920, Address: 0x418fb8, Func Offset: 0x178
	// Line 1921, Address: 0x418fc4, Func Offset: 0x184
	// Func End, Address: 0x418fd8, Func Offset: 0x198
}

// xSweptSphereToNonMoving__FP12xSweptSphereP6xSceneP4xEntUci
// Start address: 0x418fe0
int32 xSweptSphereToNonMoving(xSweptSphere* sws, xScene* sc, xEnt* mover, uint8 collType, int32 penby)
{
	int32 envcollfound;
	xRay3 ray;
	float32 one_len;
	// Line 1840, Address: 0x418fe0, Func Offset: 0
	// Line 1843, Address: 0x418ff8, Func Offset: 0x18
	// Line 1844, Address: 0x418ffc, Func Offset: 0x1c
	// Line 1845, Address: 0x419000, Func Offset: 0x20
	// Line 1842, Address: 0x419004, Func Offset: 0x24
	// Line 1848, Address: 0x419008, Func Offset: 0x28
	// Line 1855, Address: 0x419014, Func Offset: 0x34
	// Line 1856, Address: 0x419018, Func Offset: 0x38
	// Line 1855, Address: 0x41901c, Func Offset: 0x3c
	// Line 1856, Address: 0x419020, Func Offset: 0x40
	// Line 1855, Address: 0x419024, Func Offset: 0x44
	// Line 1848, Address: 0x419028, Func Offset: 0x48
	// Line 1855, Address: 0x41902c, Func Offset: 0x4c
	// Line 1856, Address: 0x419030, Func Offset: 0x50
	// Line 1855, Address: 0x419034, Func Offset: 0x54
	// Line 1856, Address: 0x419064, Func Offset: 0x84
	// Line 1859, Address: 0x41908c, Func Offset: 0xac
	// Line 1863, Address: 0x419094, Func Offset: 0xb4
	// Line 1866, Address: 0x4190b8, Func Offset: 0xd8
	// Line 1867, Address: 0x4190e0, Func Offset: 0x100
	// Line 1866, Address: 0x4190e4, Func Offset: 0x104
	// Line 1867, Address: 0x41915c, Func Offset: 0x17c
	// Line 1868, Address: 0x419164, Func Offset: 0x184
	// Line 1869, Address: 0x419168, Func Offset: 0x188
	// Line 1868, Address: 0x41916c, Func Offset: 0x18c
	// Line 1871, Address: 0x419170, Func Offset: 0x190
	// Line 1872, Address: 0x419174, Func Offset: 0x194
	// Line 1871, Address: 0x419180, Func Offset: 0x1a0
	// Line 1872, Address: 0x419184, Func Offset: 0x1a4
	// Line 1873, Address: 0x41919c, Func Offset: 0x1bc
	// Line 1877, Address: 0x4191c0, Func Offset: 0x1e0
	// Line 1878, Address: 0x4191d8, Func Offset: 0x1f8
	// Func End, Address: 0x4191f0, Func Offset: 0x210
}

// xSweptSphereToScene__FP12xSweptSphereP6xSceneP4xEntUci
// Start address: 0x4191f0
int32 xSweptSphereToScene(xSweptSphere* sws, xScene* sc, xEnt* mover, uint8 collType, int32 penby)
{
	int32 envcollfound;
	xRay3 ray;
	float32 one_len;
	// Line 1812, Address: 0x4191f0, Func Offset: 0
	// Line 1815, Address: 0x419208, Func Offset: 0x18
	// Line 1816, Address: 0x41920c, Func Offset: 0x1c
	// Line 1817, Address: 0x419210, Func Offset: 0x20
	// Line 1814, Address: 0x419214, Func Offset: 0x24
	// Line 1820, Address: 0x419218, Func Offset: 0x28
	// Line 1824, Address: 0x419224, Func Offset: 0x34
	// Line 1820, Address: 0x419228, Func Offset: 0x38
	// Line 1824, Address: 0x41922c, Func Offset: 0x3c
	// Line 1825, Address: 0x419250, Func Offset: 0x60
	// Line 1824, Address: 0x419254, Func Offset: 0x64
	// Line 1825, Address: 0x4192cc, Func Offset: 0xdc
	// Line 1826, Address: 0x4192d4, Func Offset: 0xe4
	// Line 1827, Address: 0x4192d8, Func Offset: 0xe8
	// Line 1826, Address: 0x4192dc, Func Offset: 0xec
	// Line 1829, Address: 0x4192e0, Func Offset: 0xf0
	// Line 1830, Address: 0x419304, Func Offset: 0x114
	// Line 1831, Address: 0x419328, Func Offset: 0x138
	// Line 1834, Address: 0x41934c, Func Offset: 0x15c
	// Line 1835, Address: 0x419360, Func Offset: 0x170
	// Line 1834, Address: 0x419364, Func Offset: 0x174
	// Line 1835, Address: 0x419368, Func Offset: 0x178
	// Func End, Address: 0x41937c, Func Offset: 0x18c
}

// xSweptSphereToEnt__FP12xSweptSphereP4xEntP5xRay3
// Start address: 0x419380
int32 xSweptSphereToEnt(xSweptSphere* sws, xEnt* ent, xRay3* ray)
{
	uint32 result;
	float32 oldrad;
	xBox tmpbox;
	xBox tmpbox;
	xRay3 lr;
	xMat3x3 mn;
	// Line 1677, Address: 0x419380, Func Offset: 0
	// Line 1698, Address: 0x419384, Func Offset: 0x4
	// Line 1677, Address: 0x419388, Func Offset: 0x8
	// Line 1698, Address: 0x4193a8, Func Offset: 0x28
	// Line 1705, Address: 0x4193b4, Func Offset: 0x34
	// Line 1708, Address: 0x4193ec, Func Offset: 0x6c
	// Line 1709, Address: 0x4193f0, Func Offset: 0x70
	// Line 1710, Address: 0x4193f4, Func Offset: 0x74
	// Line 1709, Address: 0x4193f8, Func Offset: 0x78
	// Line 1710, Address: 0x419400, Func Offset: 0x80
	// Line 1711, Address: 0x4194d0, Func Offset: 0x150
	// Line 1713, Address: 0x4194d4, Func Offset: 0x154
	// Line 1717, Address: 0x4194dc, Func Offset: 0x15c
	// Line 1723, Address: 0x4194e0, Func Offset: 0x160
	// Line 1717, Address: 0x4194e4, Func Offset: 0x164
	// Line 1723, Address: 0x4194e8, Func Offset: 0x168
	// Line 1717, Address: 0x4194f0, Func Offset: 0x170
	// Line 1723, Address: 0x419544, Func Offset: 0x1c4
	// Line 1725, Address: 0x419590, Func Offset: 0x210
	// Line 1733, Address: 0x419598, Func Offset: 0x218
	// Line 1736, Address: 0x41959c, Func Offset: 0x21c
	// Line 1733, Address: 0x4195a0, Func Offset: 0x220
	// Line 1736, Address: 0x4195c4, Func Offset: 0x244
	// Line 1737, Address: 0x4195cc, Func Offset: 0x24c
	// Line 1738, Address: 0x41960c, Func Offset: 0x28c
	// Line 1739, Address: 0x41961c, Func Offset: 0x29c
	// Line 1749, Address: 0x419620, Func Offset: 0x2a0
	// Line 1739, Address: 0x41962c, Func Offset: 0x2ac
	// Line 1740, Address: 0x419634, Func Offset: 0x2b4
	// Line 1741, Address: 0x419640, Func Offset: 0x2c0
	// Line 1743, Address: 0x419648, Func Offset: 0x2c8
	// Line 1749, Address: 0x4196c0, Func Offset: 0x340
	// Line 1756, Address: 0x41970c, Func Offset: 0x38c
	// Line 1761, Address: 0x419718, Func Offset: 0x398
	// Line 1763, Address: 0x41972c, Func Offset: 0x3ac
	// Line 1765, Address: 0x41973c, Func Offset: 0x3bc
	// Line 1769, Address: 0x419770, Func Offset: 0x3f0
	// Line 1773, Address: 0x419784, Func Offset: 0x404
	// Line 1787, Address: 0x41978c, Func Offset: 0x40c
	// Line 1789, Address: 0x4197c4, Func Offset: 0x444
	// Line 1790, Address: 0x4197d8, Func Offset: 0x458
	// Line 1794, Address: 0x4197f4, Func Offset: 0x474
	// Line 1795, Address: 0x419804, Func Offset: 0x484
	// Line 1799, Address: 0x419820, Func Offset: 0x4a0
	// Line 1800, Address: 0x419834, Func Offset: 0x4b4
	// Line 1808, Address: 0x419850, Func Offset: 0x4d0
	// Line 1710, Address: 0x41985c, Func Offset: 0x4dc
	// Line 1757, Address: 0x419864, Func Offset: 0x4e4
	// Line 1808, Address: 0x41986c, Func Offset: 0x4ec
	// Line 1779, Address: 0x419898, Func Offset: 0x518
	// Line 1808, Address: 0x41989c, Func Offset: 0x51c
	// Line 1783, Address: 0x4198a4, Func Offset: 0x524
	// Line 1808, Address: 0x4198ac, Func Offset: 0x52c
	// Line 1776, Address: 0x4198b0, Func Offset: 0x530
	// Line 1808, Address: 0x4198b4, Func Offset: 0x534
	// Line 1809, Address: 0x4198e0, Func Offset: 0x560
	// Func End, Address: 0x419900, Func Offset: 0x580
}

// SweptSphereHitsEntCB__FP6xSceneP5xRay3P7xQCDataP4xEntPv
// Start address: 0x419900
void SweptSphereHitsEntCB(xRay3* ray, xQCData* qcd, xEnt* ent, void* data)
{
	xSweptSphere* sws;
	xMat4x3* m1;
	xMat4x3* m2;
	// Line 1606, Address: 0x419900, Func Offset: 0
	// Line 1609, Address: 0x419904, Func Offset: 0x4
	// Line 1606, Address: 0x419908, Func Offset: 0x8
	// Line 1608, Address: 0x419920, Func Offset: 0x20
	// Line 1609, Address: 0x419924, Func Offset: 0x24
	// Line 1612, Address: 0x419934, Func Offset: 0x34
	// Line 1615, Address: 0x419940, Func Offset: 0x40
	// Line 1618, Address: 0x419958, Func Offset: 0x58
	// Line 1619, Address: 0x419970, Func Offset: 0x70
	// Line 1621, Address: 0x419978, Func Offset: 0x78
	// Line 1625, Address: 0x419988, Func Offset: 0x88
	// Line 1630, Address: 0x4199b0, Func Offset: 0xb0
	// Line 1633, Address: 0x4199b8, Func Offset: 0xb8
	// Line 1634, Address: 0x4199bc, Func Offset: 0xbc
	// Line 1633, Address: 0x4199c0, Func Offset: 0xc0
	// Line 1634, Address: 0x4199c4, Func Offset: 0xc4
	// Line 1643, Address: 0x4199d4, Func Offset: 0xd4
	// Line 1647, Address: 0x4199dc, Func Offset: 0xdc
	// Line 1648, Address: 0x4199f4, Func Offset: 0xf4
	// Line 1634, Address: 0x419a04, Func Offset: 0x104
	// Line 1648, Address: 0x419a08, Func Offset: 0x108
	// Line 1634, Address: 0x419a18, Func Offset: 0x118
	// Line 1648, Address: 0x419a1c, Func Offset: 0x11c
	// Line 1634, Address: 0x419a2c, Func Offset: 0x12c
	// Line 1648, Address: 0x419a30, Func Offset: 0x130
	// Line 1634, Address: 0x419a40, Func Offset: 0x140
	// Line 1648, Address: 0x419a44, Func Offset: 0x144
	// Line 1634, Address: 0x419a54, Func Offset: 0x154
	// Line 1648, Address: 0x419a58, Func Offset: 0x158
	// Line 1634, Address: 0x419a68, Func Offset: 0x168
	// Line 1648, Address: 0x419a6c, Func Offset: 0x16c
	// Line 1634, Address: 0x419a7c, Func Offset: 0x17c
	// Line 1648, Address: 0x419a80, Func Offset: 0x180
	// Line 1634, Address: 0x419a90, Func Offset: 0x190
	// Line 1648, Address: 0x419a94, Func Offset: 0x194
	// Func End, Address: 0x419abc, Func Offset: 0x1bc
}

// xSweptSphereToTriangle__FR12xSweptSphereRC5xVec3RC5xVec3RC5xVec3
// Start address: 0x419ac0
int32 xSweptSphereToTriangle(xSweptSphere& sws, xVec3& v0, xVec3& v1, xVec3& v2)
{
	xPlane surface;
	xCollideSphereToPolygonResults results;
	// Line 1570, Address: 0x419ac0, Func Offset: 0
	// Line 1574, Address: 0x419ac8, Func Offset: 0x8
	// Line 1570, Address: 0x419acc, Func Offset: 0xc
	// Line 1574, Address: 0x419ad0, Func Offset: 0x10
	// Line 1576, Address: 0x419ae8, Func Offset: 0x28
	// Line 1580, Address: 0x419af0, Func Offset: 0x30
	// Line 1584, Address: 0x419af4, Func Offset: 0x34
	// Line 1580, Address: 0x419af8, Func Offset: 0x38
	// Line 1581, Address: 0x419afc, Func Offset: 0x3c
	// Line 1582, Address: 0x419b14, Func Offset: 0x54
	// Line 1585, Address: 0x419b1c, Func Offset: 0x5c
	// Func End, Address: 0x419b2c, Func Offset: 0x6c
}

// xSweptSphereToBound__FP12xSweptSpherePC6xBound
// Start address: 0x419b30
int32 xSweptSphereToBound(xSweptSphere* sws, xBound* bound)
{
	// Line 1539, Address: 0x419b30, Func Offset: 0
	// Line 1540, Address: 0x419b34, Func Offset: 0x4
	// Line 1539, Address: 0x419b3c, Func Offset: 0xc
	// Line 1540, Address: 0x419b40, Func Offset: 0x10
	// Line 1543, Address: 0x419b68, Func Offset: 0x38
	// Line 1546, Address: 0x419b7c, Func Offset: 0x4c
	// Line 1549, Address: 0x419b8c, Func Offset: 0x5c
	// Line 1555, Address: 0x419b98, Func Offset: 0x68
	// Func End, Address: 0x419ba4, Func Offset: 0x74
}

// xSweptSphereToSphere__FR12xSweptSphereRC5xVec3f
// Start address: 0x419bb0
int32 xSweptSphereToSphere(xSweptSphere& sws, xVec3& center, float32 radius)
{
	float32 combined_raidus;
	float32 combined_radius_squ;
	float32 dist_to_collide;
	float32 ratio;
	// Line 1416, Address: 0x419bb0, Func Offset: 0
	// Line 1421, Address: 0x419bb4, Func Offset: 0x4
	// Line 1428, Address: 0x419bc8, Func Offset: 0x18
	// Line 1434, Address: 0x419bcc, Func Offset: 0x1c
	// Line 1428, Address: 0x419bd0, Func Offset: 0x20
	// Line 1434, Address: 0x419bd4, Func Offset: 0x24
	// Line 1428, Address: 0x419bd8, Func Offset: 0x28
	// Line 1431, Address: 0x419bf8, Func Offset: 0x48
	// Line 1428, Address: 0x419bfc, Func Offset: 0x4c
	// Line 1431, Address: 0x419c00, Func Offset: 0x50
	// Line 1428, Address: 0x419c04, Func Offset: 0x54
	// Line 1434, Address: 0x419c08, Func Offset: 0x58
	// Line 1431, Address: 0x419c0c, Func Offset: 0x5c
	// Line 1434, Address: 0x419c18, Func Offset: 0x68
	// Line 1447, Address: 0x419c24, Func Offset: 0x74
	// Line 1458, Address: 0x419c28, Func Offset: 0x78
	// Line 1447, Address: 0x419c2c, Func Offset: 0x7c
	// Line 1458, Address: 0x419c30, Func Offset: 0x80
	// Line 1447, Address: 0x419c34, Func Offset: 0x84
	// Line 1453, Address: 0x419c44, Func Offset: 0x94
	// Line 1450, Address: 0x419c48, Func Offset: 0x98
	// Line 1453, Address: 0x419c4c, Func Offset: 0x9c
	// Line 1450, Address: 0x419c50, Func Offset: 0xa0
	// Line 1458, Address: 0x419c5c, Func Offset: 0xac
	// Line 1450, Address: 0x419c60, Func Offset: 0xb0
	// Line 1454, Address: 0x419c64, Func Offset: 0xb4
	// Line 1458, Address: 0x419c68, Func Offset: 0xb8
	// Line 1469, Address: 0x419c78, Func Offset: 0xc8
	// Line 1472, Address: 0x419c88, Func Offset: 0xd8
	// Line 1476, Address: 0x419c8c, Func Offset: 0xdc
	// Line 1498, Address: 0x419c98, Func Offset: 0xe8
	// Line 1500, Address: 0x419ca4, Func Offset: 0xf4
	// Line 1423, Address: 0x419cac, Func Offset: 0xfc
	// Line 1438, Address: 0x419cb4, Func Offset: 0x104
	// Line 1461, Address: 0x419cbc, Func Offset: 0x10c
	// Line 1483, Address: 0x419cc4, Func Offset: 0x114
	// Line 1500, Address: 0x419cd8, Func Offset: 0x128
	// Line 1483, Address: 0x419ce8, Func Offset: 0x138
	// Line 1500, Address: 0x419cec, Func Offset: 0x13c
	// Line 1483, Address: 0x419cf4, Func Offset: 0x144
	// Line 1494, Address: 0x419d18, Func Offset: 0x168
	// Line 1500, Address: 0x419d24, Func Offset: 0x174
	// Line 1491, Address: 0x419d28, Func Offset: 0x178
	// Line 1500, Address: 0x419d2c, Func Offset: 0x17c
	// Line 1491, Address: 0x419d34, Func Offset: 0x184
	// Line 1500, Address: 0x419d3c, Func Offset: 0x18c
	// Line 1491, Address: 0x419d40, Func Offset: 0x190
	// Line 1500, Address: 0x419d50, Func Offset: 0x1a0
	// Line 1494, Address: 0x419d54, Func Offset: 0x1a4
	// Line 1483, Address: 0x419d5c, Func Offset: 0x1ac
	// Line 1504, Address: 0x419d64, Func Offset: 0x1b4
	// Line 1520, Address: 0x419d68, Func Offset: 0x1b8
	// Line 1509, Address: 0x419d6c, Func Offset: 0x1bc
	// Line 1512, Address: 0x419d70, Func Offset: 0x1c0
	// Line 1509, Address: 0x419d74, Func Offset: 0x1c4
	// Line 1512, Address: 0x419d78, Func Offset: 0x1c8
	// Line 1517, Address: 0x419da4, Func Offset: 0x1f4
	// Line 1521, Address: 0x419dec, Func Offset: 0x23c
	// Func End, Address: 0x419df4, Func Offset: 0x244
}

// xSweptSphereToModel__FP12xSweptSphereP8RpAtomicPC11RwMatrixTag
// Start address: 0x419e00
int32 xSweptSphereToModel(xSweptSphere* sws, RpAtomic* model, RwMatrixTag* mat)
{
	xVec3 old_start;
	xVec3 old_end;
	xVec3 old_dir;
	float32 old_radius;
	xBox old_box;
	float32 old_dist;
	float32 model_scale;
	float32 old_curdist;
	float32 start_curdist;
	RpGeometry* geom;
	RpCollisionData* colldata;
	RwLine line;
	SweptSphereCollParam isData;
	RpTriangle* tri;
	RwV3d* vert;
	int32 i;
	xVec3* p0;
	xVec3* p1;
	xVec3* p2;
	xCollideSphereToPolygonResults tri_collide;
	xPlane surface;
	// Line 1233, Address: 0x419e00, Func Offset: 0
	// Line 1238, Address: 0x419e08, Func Offset: 0x8
	// Line 1233, Address: 0x419e0c, Func Offset: 0xc
	// Line 1238, Address: 0x419e44, Func Offset: 0x44
	// Line 1239, Address: 0x419e64, Func Offset: 0x64
	// Line 1242, Address: 0x419e6c, Func Offset: 0x6c
	// Line 1256, Address: 0x419e70, Func Offset: 0x70
	// Line 1243, Address: 0x419e74, Func Offset: 0x74
	// Line 1249, Address: 0x419e78, Func Offset: 0x78
	// Line 1250, Address: 0x419e7c, Func Offset: 0x7c
	// Line 1262, Address: 0x419e80, Func Offset: 0x80
	// Line 1253, Address: 0x419e84, Func Offset: 0x84
	// Line 1262, Address: 0x419e88, Func Offset: 0x88
	// Line 1250, Address: 0x419e8c, Func Offset: 0x8c
	// Line 1253, Address: 0x419ea8, Func Offset: 0xa8
	// Line 1256, Address: 0x419eb0, Func Offset: 0xb0
	// Line 1250, Address: 0x419eb4, Func Offset: 0xb4
	// Line 1251, Address: 0x419ebc, Func Offset: 0xbc
	// Line 1253, Address: 0x419ec0, Func Offset: 0xc0
	// Line 1256, Address: 0x419ec4, Func Offset: 0xc4
	// Line 1251, Address: 0x419ed4, Func Offset: 0xd4
	// Line 1259, Address: 0x419edc, Func Offset: 0xdc
	// Line 1251, Address: 0x419ee0, Func Offset: 0xe0
	// Line 1253, Address: 0x419ee8, Func Offset: 0xe8
	// Line 1251, Address: 0x419eec, Func Offset: 0xec
	// Line 1253, Address: 0x419ef0, Func Offset: 0xf0
	// Line 1249, Address: 0x419ef8, Func Offset: 0xf8
	// Line 1253, Address: 0x419f00, Func Offset: 0x100
	// Line 1262, Address: 0x419f04, Func Offset: 0x104
	// Line 1253, Address: 0x419f08, Func Offset: 0x108
	// Line 1262, Address: 0x419f0c, Func Offset: 0x10c
	// Line 1253, Address: 0x419f10, Func Offset: 0x110
	// Line 1249, Address: 0x419f14, Func Offset: 0x114
	// Line 1262, Address: 0x419f18, Func Offset: 0x118
	// Line 1253, Address: 0x419f1c, Func Offset: 0x11c
	// Line 1252, Address: 0x419f20, Func Offset: 0x120
	// Line 1256, Address: 0x419f24, Func Offset: 0x124
	// Line 1262, Address: 0x419f28, Func Offset: 0x128
	// Line 1249, Address: 0x419f3c, Func Offset: 0x13c
	// Line 1253, Address: 0x419f48, Func Offset: 0x148
	// Line 1262, Address: 0x419f4c, Func Offset: 0x14c
	// Line 1259, Address: 0x419f50, Func Offset: 0x150
	// Line 1262, Address: 0x419f58, Func Offset: 0x158
	// Line 1263, Address: 0x419f60, Func Offset: 0x160
	// Line 1266, Address: 0x419fa0, Func Offset: 0x1a0
	// Line 1267, Address: 0x419fa4, Func Offset: 0x1a4
	// Line 1266, Address: 0x419fa8, Func Offset: 0x1a8
	// Line 1267, Address: 0x419fac, Func Offset: 0x1ac
	// Line 1266, Address: 0x419fb8, Func Offset: 0x1b8
	// Line 1267, Address: 0x419ffc, Func Offset: 0x1fc
	// Line 1269, Address: 0x41a04c, Func Offset: 0x24c
	// Line 1275, Address: 0x41a060, Func Offset: 0x260
	// Line 1280, Address: 0x41a064, Func Offset: 0x264
	// Line 1275, Address: 0x41a068, Func Offset: 0x268
	// Line 1276, Address: 0x41a070, Func Offset: 0x270
	// Line 1275, Address: 0x41a07c, Func Offset: 0x27c
	// Line 1277, Address: 0x41a088, Func Offset: 0x288
	// Line 1276, Address: 0x41a08c, Func Offset: 0x28c
	// Line 1277, Address: 0x41a098, Func Offset: 0x298
	// Line 1280, Address: 0x41a0ac, Func Offset: 0x2ac
	// Line 1285, Address: 0x41a0b4, Func Offset: 0x2b4
	// Line 1290, Address: 0x41a0b8, Func Offset: 0x2b8
	// Line 1284, Address: 0x41a0bc, Func Offset: 0x2bc
	// Line 1285, Address: 0x41a0c0, Func Offset: 0x2c0
	// Line 1286, Address: 0x41a0c8, Func Offset: 0x2c8
	// Line 1290, Address: 0x41a0d4, Func Offset: 0x2d4
	// Line 1295, Address: 0x41a1b0, Func Offset: 0x3b0
	// Line 1296, Address: 0x41a1b4, Func Offset: 0x3b4
	// Line 1297, Address: 0x41a1bc, Func Offset: 0x3bc
	// Line 1318, Address: 0x41a1d4, Func Offset: 0x3d4
	// Line 1297, Address: 0x41a1d8, Func Offset: 0x3d8
	// Line 1308, Address: 0x41a1dc, Func Offset: 0x3dc
	// Line 1297, Address: 0x41a1e0, Func Offset: 0x3e0
	// Line 1318, Address: 0x41a1e4, Func Offset: 0x3e4
	// Line 1308, Address: 0x41a1e8, Func Offset: 0x3e8
	// Line 1318, Address: 0x41a1ec, Func Offset: 0x3ec
	// Line 1308, Address: 0x41a1f0, Func Offset: 0x3f0
	// Line 1304, Address: 0x41a1f8, Func Offset: 0x3f8
	// Line 1308, Address: 0x41a208, Func Offset: 0x408
	// Line 1309, Address: 0x41a214, Func Offset: 0x414
	// Line 1312, Address: 0x41a224, Func Offset: 0x424
	// Line 1309, Address: 0x41a228, Func Offset: 0x428
	// Line 1313, Address: 0x41a22c, Func Offset: 0x42c
	// Line 1309, Address: 0x41a230, Func Offset: 0x430
	// Line 1318, Address: 0x41a234, Func Offset: 0x434
	// Line 1340, Address: 0x41a250, Func Offset: 0x450
	// Line 1347, Address: 0x41a258, Func Offset: 0x458
	// Line 1350, Address: 0x41a25c, Func Offset: 0x45c
	// Line 1344, Address: 0x41a260, Func Offset: 0x460
	// Line 1347, Address: 0x41a264, Func Offset: 0x464
	// Line 1350, Address: 0x41a268, Func Offset: 0x468
	// Line 1352, Address: 0x41a27c, Func Offset: 0x47c
	// Line 1353, Address: 0x41a280, Func Offset: 0x480
	// Line 1354, Address: 0x41a284, Func Offset: 0x484
	// Line 1352, Address: 0x41a288, Func Offset: 0x488
	// Line 1353, Address: 0x41a290, Func Offset: 0x490
	// Line 1352, Address: 0x41a298, Func Offset: 0x498
	// Line 1353, Address: 0x41a29c, Func Offset: 0x49c
	// Line 1352, Address: 0x41a2a4, Func Offset: 0x4a4
	// Line 1354, Address: 0x41a2a8, Func Offset: 0x4a8
	// Line 1356, Address: 0x41a2bc, Func Offset: 0x4bc
	// Line 1360, Address: 0x41a46c, Func Offset: 0x66c
	// Line 1362, Address: 0x41a488, Func Offset: 0x688
	// Line 1365, Address: 0x41a4e0, Func Offset: 0x6e0
	// Line 1367, Address: 0x41a4e8, Func Offset: 0x6e8
	// Line 1370, Address: 0x41a4f0, Func Offset: 0x6f0
	// Line 1376, Address: 0x41a4f4, Func Offset: 0x6f4
	// Line 1380, Address: 0x41a508, Func Offset: 0x708
	// Line 1381, Address: 0x41a514, Func Offset: 0x714
	// Line 1380, Address: 0x41a520, Func Offset: 0x720
	// Line 1382, Address: 0x41a52c, Func Offset: 0x72c
	// Line 1381, Address: 0x41a530, Func Offset: 0x730
	// Line 1382, Address: 0x41a53c, Func Offset: 0x73c
	// Line 1383, Address: 0x41a550, Func Offset: 0x750
	// Line 1384, Address: 0x41a554, Func Offset: 0x754
	// Line 1388, Address: 0x41a558, Func Offset: 0x758
	// Line 1389, Address: 0x41a568, Func Offset: 0x768
	// Line 1391, Address: 0x41a578, Func Offset: 0x778
	// Line 1394, Address: 0x41a57c, Func Offset: 0x77c
	// Line 1397, Address: 0x41a5ac, Func Offset: 0x7ac
	// Line 1398, Address: 0x41a5b0, Func Offset: 0x7b0
	// Func End, Address: 0x41a5ec, Func Offset: 0x7ec
}

// RpCollTreeForAllCapsuleIntsec__FP10RpCollTreeP6RwLinefPFiiPv_iPv
// Start address: 0x41a5f0
void RpCollTreeForAllCapsuleIntsec(RpCollTree* tree, RwLine* line, float32 radius, int32(*callBack)(int32, int32, void*), void* data)
{
	RpCollSectorCapsuleIt it;
	float32 pa;
	float32 pb;
	int32 result;
	float32 recip;
	float32 p0;
	float32 p1;
	float32 recip;
	float32 p0;
	float32 p1;
	float32 recip;
	float32 p0;
	float32 p1;
	RpCollSplit* split;
	float32 del;
	float32 sta;
	float32 end;
	float32 rec;
	float32 rad;
	// Line 967, Address: 0x41a5f0, Func Offset: 0
	// Line 971, Address: 0x41a5f4, Func Offset: 0x4
	// Line 967, Address: 0x41a5f8, Func Offset: 0x8
	// Line 971, Address: 0x41a5fc, Func Offset: 0xc
	// Line 967, Address: 0x41a600, Func Offset: 0x10
	// Line 971, Address: 0x41a604, Func Offset: 0x14
	// Line 967, Address: 0x41a608, Func Offset: 0x18
	// Line 971, Address: 0x41a628, Func Offset: 0x38
	// Line 977, Address: 0x41aa7c, Func Offset: 0x48c
	// Line 980, Address: 0x41ac88, Func Offset: 0x698
	// Line 981, Address: 0x41ac9c, Func Offset: 0x6ac
	// Line 983, Address: 0x41acb8, Func Offset: 0x6c8
	// Line 971, Address: 0x41acc4, Func Offset: 0x6d4
	// Line 983, Address: 0x41acd8, Func Offset: 0x6e8
	// Line 971, Address: 0x41ace4, Func Offset: 0x6f4
	// Line 983, Address: 0x41ad04, Func Offset: 0x714
	// Line 971, Address: 0x41ad08, Func Offset: 0x718
	// Line 983, Address: 0x41ad1c, Func Offset: 0x72c
	// Line 971, Address: 0x41ad28, Func Offset: 0x738
	// Line 983, Address: 0x41ad48, Func Offset: 0x758
	// Line 971, Address: 0x41ad4c, Func Offset: 0x75c
	// Line 983, Address: 0x41ad60, Func Offset: 0x770
	// Line 971, Address: 0x41ad6c, Func Offset: 0x77c
	// Line 983, Address: 0x41ad8c, Func Offset: 0x79c
	// Line 977, Address: 0x41ad98, Func Offset: 0x7a8
	// Line 983, Address: 0x41ada0, Func Offset: 0x7b0
	// Line 977, Address: 0x41ada4, Func Offset: 0x7b4
	// Line 983, Address: 0x41adb0, Func Offset: 0x7c0
	// Line 977, Address: 0x41adb4, Func Offset: 0x7c4
	// Line 983, Address: 0x41add0, Func Offset: 0x7e0
	// Line 977, Address: 0x41add4, Func Offset: 0x7e4
	// Line 983, Address: 0x41ade0, Func Offset: 0x7f0
	// Line 977, Address: 0x41ade4, Func Offset: 0x7f4
	// Line 984, Address: 0x41adf0, Func Offset: 0x800
	// Func End, Address: 0x41ae1c, Func Offset: 0x82c
}

// SweptSphereModelCB__FiiPv
// Start address: 0x41ae20
int32 SweptSphereModelCB(int32 numTriangles, int32 triOffset, void* data)
{
	SweptSphereCollParam* isData;
	RpGeometry* geometry;
	xSweptSphere* sws;
	RwV3d* vertices;
	RpTriangle* triangles;
	int32 triSlot;
	uint16* triIndex;
	RpTriangle* tri;
	RwV3d* v0;
	RwV3d* v1;
	RwV3d* v2;
	xBox tri_box;
	xCollideSphereToPolygonResults tri_collide;
	// Line 493, Address: 0x41ae20, Func Offset: 0
	// Line 496, Address: 0x41ae50, Func Offset: 0x30
	// Line 502, Address: 0x41ae54, Func Offset: 0x34
	// Line 499, Address: 0x41ae58, Func Offset: 0x38
	// Line 498, Address: 0x41ae5c, Func Offset: 0x3c
	// Line 499, Address: 0x41ae60, Func Offset: 0x40
	// Line 502, Address: 0x41ae64, Func Offset: 0x44
	// Line 498, Address: 0x41ae68, Func Offset: 0x48
	// Line 502, Address: 0x41ae6c, Func Offset: 0x4c
	// Line 503, Address: 0x41ae74, Func Offset: 0x54
	// Line 504, Address: 0x41ae7c, Func Offset: 0x5c
	// Line 505, Address: 0x41ae80, Func Offset: 0x60
	// Line 506, Address: 0x41ae84, Func Offset: 0x64
	// Line 507, Address: 0x41ae8c, Func Offset: 0x6c
	// Line 518, Address: 0x41aea0, Func Offset: 0x80
	// Line 519, Address: 0x41aea8, Func Offset: 0x88
	// Line 521, Address: 0x41aeac, Func Offset: 0x8c
	// Line 522, Address: 0x41aeb8, Func Offset: 0x98
	// Line 523, Address: 0x41aebc, Func Offset: 0x9c
	// Line 532, Address: 0x41aec0, Func Offset: 0xa0
	// Line 542, Address: 0x41aec8, Func Offset: 0xa8
	// Line 532, Address: 0x41aecc, Func Offset: 0xac
	// Line 536, Address: 0x41aed0, Func Offset: 0xb0
	// Line 537, Address: 0x41aed4, Func Offset: 0xb4
	// Line 538, Address: 0x41aed8, Func Offset: 0xb8
	// Line 536, Address: 0x41aedc, Func Offset: 0xbc
	// Line 537, Address: 0x41aee4, Func Offset: 0xc4
	// Line 536, Address: 0x41aef0, Func Offset: 0xd0
	// Line 537, Address: 0x41aef4, Func Offset: 0xd4
	// Line 536, Address: 0x41aef8, Func Offset: 0xd8
	// Line 538, Address: 0x41aefc, Func Offset: 0xdc
	// Line 542, Address: 0x41af00, Func Offset: 0xe0
	// Line 538, Address: 0x41af04, Func Offset: 0xe4
	// Line 542, Address: 0x41af08, Func Offset: 0xe8
	// Line 538, Address: 0x41af0c, Func Offset: 0xec
	// Line 542, Address: 0x41af14, Func Offset: 0xf4
	// Line 545, Address: 0x41af1c, Func Offset: 0xfc
	// Line 555, Address: 0x41aff4, Func Offset: 0x1d4
	// Line 558, Address: 0x41b01c, Func Offset: 0x1fc
	// Line 561, Address: 0x41b074, Func Offset: 0x254
	// Line 563, Address: 0x41b078, Func Offset: 0x258
	// Line 561, Address: 0x41b07c, Func Offset: 0x25c
	// Line 563, Address: 0x41b080, Func Offset: 0x260
	// Line 566, Address: 0x41b088, Func Offset: 0x268
	// Line 568, Address: 0x41b08c, Func Offset: 0x26c
	// Line 571, Address: 0x41b0a0, Func Offset: 0x280
	// Line 570, Address: 0x41b0a8, Func Offset: 0x288
	// Line 571, Address: 0x41b0ac, Func Offset: 0x28c
	// Func End, Address: 0x41b0d4, Func Offset: 0x2b4
}

// xSweptSphereToEnv__FP12xSweptSphereP4xEnv
// Start address: 0x41b0e0
int32 xSweptSphereToEnv(xSweptSphere* sws, xEnv* env)
{
	xCollis coll;
	xSphere s;
	RwLine line;
	xClumpCollV3dGradient grad;
	int32 i;
	float32 testdist;
	xSweptSphere newsws;
	float32 testdist;
	// Line 363, Address: 0x41b0e0, Func Offset: 0
	// Line 364, Address: 0x41b0e8, Func Offset: 0x8
	// Line 363, Address: 0x41b0ec, Func Offset: 0xc
	// Line 364, Address: 0x41b118, Func Offset: 0x38
	// Line 368, Address: 0x41b128, Func Offset: 0x48
	// Line 386, Address: 0x41b134, Func Offset: 0x54
	// Line 394, Address: 0x41b138, Func Offset: 0x58
	// Line 395, Address: 0x41b148, Func Offset: 0x68
	// Line 397, Address: 0x41b14c, Func Offset: 0x6c
	// Line 395, Address: 0x41b150, Func Offset: 0x70
	// Line 394, Address: 0x41b154, Func Offset: 0x74
	// Line 396, Address: 0x41b15c, Func Offset: 0x7c
	// Line 394, Address: 0x41b160, Func Offset: 0x80
	// Line 395, Address: 0x41b16c, Func Offset: 0x8c
	// Line 396, Address: 0x41b178, Func Offset: 0x98
	// Line 397, Address: 0x41b17c, Func Offset: 0x9c
	// Line 395, Address: 0x41b180, Func Offset: 0xa0
	// Line 396, Address: 0x41b188, Func Offset: 0xa8
	// Line 397, Address: 0x41b190, Func Offset: 0xb0
	// Line 399, Address: 0x41b23c, Func Offset: 0x15c
	// Line 406, Address: 0x41b258, Func Offset: 0x178
	// Line 469, Address: 0x41b324, Func Offset: 0x244
	// Line 406, Address: 0x41b330, Func Offset: 0x250
	// Line 469, Address: 0x41b334, Func Offset: 0x254
	// Line 365, Address: 0x41b34c, Func Offset: 0x26c
	// Line 469, Address: 0x41b354, Func Offset: 0x274
	// Line 378, Address: 0x41b390, Func Offset: 0x2b0
	// Line 469, Address: 0x41b394, Func Offset: 0x2b4
	// Line 379, Address: 0x41b3e8, Func Offset: 0x308
	// Line 469, Address: 0x41b3f0, Func Offset: 0x310
	// Line 379, Address: 0x41b3f4, Func Offset: 0x314
	// Line 469, Address: 0x41b3f8, Func Offset: 0x318
	// Line 380, Address: 0x41b434, Func Offset: 0x354
	// Line 469, Address: 0x41b43c, Func Offset: 0x35c
	// Line 420, Address: 0x41b48c, Func Offset: 0x3ac
	// Line 469, Address: 0x41b490, Func Offset: 0x3b0
	// Line 427, Address: 0x41b49c, Func Offset: 0x3bc
	// Line 469, Address: 0x41b4a0, Func Offset: 0x3c0
	// Line 442, Address: 0x41b6e0, Func Offset: 0x600
	// Line 469, Address: 0x41b6f0, Func Offset: 0x610
	// Line 442, Address: 0x41b700, Func Offset: 0x620
	// Line 469, Address: 0x41b710, Func Offset: 0x630
	// Line 442, Address: 0x41b720, Func Offset: 0x640
	// Line 469, Address: 0x41b730, Func Offset: 0x650
	// Line 442, Address: 0x41b740, Func Offset: 0x660
	// Line 469, Address: 0x41b750, Func Offset: 0x670
	// Line 442, Address: 0x41b760, Func Offset: 0x680
	// Line 469, Address: 0x41b770, Func Offset: 0x690
	// Line 442, Address: 0x41b784, Func Offset: 0x6a4
	// Line 469, Address: 0x41b798, Func Offset: 0x6b8
	// Line 471, Address: 0x41b7c0, Func Offset: 0x6e0
	// Line 456, Address: 0x41b828, Func Offset: 0x748
	// Line 471, Address: 0x41b82c, Func Offset: 0x74c
	// Line 472, Address: 0x41ba18, Func Offset: 0x938
	// Func End, Address: 0x41ba4c, Func Offset: 0x96c
}

// SweptSphereLeafNodeCB__FP21xClumpCollBSPTrianglePv
// Start address: 0x41ba50
int32 SweptSphereLeafNodeCB(xClumpCollBSPTriangle* triangles, void* data)
{
	xSweptSphere* sws;
	xCollideSphereToPolygonResults tri_collide;
	xPlane surface;
	// Line 309, Address: 0x41ba50, Func Offset: 0
	// Line 310, Address: 0x41ba60, Func Offset: 0x10
	// Line 309, Address: 0x41ba64, Func Offset: 0x14
	// Line 310, Address: 0x41ba68, Func Offset: 0x18
	// Line 309, Address: 0x41ba6c, Func Offset: 0x1c
	// Line 310, Address: 0x41ba70, Func Offset: 0x20
	// Line 309, Address: 0x41ba74, Func Offset: 0x24
	// Line 310, Address: 0x41ba78, Func Offset: 0x28
	// Line 309, Address: 0x41ba7c, Func Offset: 0x2c
	// Line 310, Address: 0x41ba88, Func Offset: 0x38
	// Line 309, Address: 0x41ba8c, Func Offset: 0x3c
	// Line 310, Address: 0x41ba94, Func Offset: 0x44
	// Line 315, Address: 0x41ba98, Func Offset: 0x48
	// Line 352, Address: 0x41bbf8, Func Offset: 0x1a8
	// Line 356, Address: 0x41bc08, Func Offset: 0x1b8
	// Line 315, Address: 0x41bc20, Func Offset: 0x1d0
	// Line 356, Address: 0x41bc30, Func Offset: 0x1e0
	// Line 359, Address: 0x41bcb8, Func Offset: 0x268
	// Line 358, Address: 0x41bcc0, Func Offset: 0x270
	// Line 359, Address: 0x41bcc4, Func Offset: 0x274
	// Func End, Address: 0x41bcec, Func Offset: 0x29c
}

// xSweptSphereGetResults__FP12xSweptSphere
// Start address: 0x41bcf0
void xSweptSphereGetResults(xSweptSphere* sws)
{
	// Line 213, Address: 0x41bcf0, Func Offset: 0
	// Line 214, Address: 0x41bcfc, Func Offset: 0xc
	// Line 215, Address: 0x41bd00, Func Offset: 0x10
	// Line 220, Address: 0x41bd10, Func Offset: 0x20
	// Line 223, Address: 0x41bd24, Func Offset: 0x34
	// Line 256, Address: 0x41bd34, Func Offset: 0x44
	// Line 226, Address: 0x41bd3c, Func Offset: 0x4c
	// Line 235, Address: 0x41bd40, Func Offset: 0x50
	// Line 256, Address: 0x41bd44, Func Offset: 0x54
	// Line 235, Address: 0x41bd48, Func Offset: 0x58
	// Line 256, Address: 0x41bd4c, Func Offset: 0x5c
	// Line 229, Address: 0x41bd58, Func Offset: 0x68
	// Line 256, Address: 0x41bd60, Func Offset: 0x70
	// Line 229, Address: 0x41bd6c, Func Offset: 0x7c
	// Line 256, Address: 0x41bd74, Func Offset: 0x84
	// Line 229, Address: 0x41bd80, Func Offset: 0x90
	// Line 256, Address: 0x41bd88, Func Offset: 0x98
	// Line 232, Address: 0x41bd94, Func Offset: 0xa4
	// Line 256, Address: 0x41bd98, Func Offset: 0xa8
	// Line 233, Address: 0x41bda4, Func Offset: 0xb4
	// Line 256, Address: 0x41bda8, Func Offset: 0xb8
	// Line 234, Address: 0x41bdb4, Func Offset: 0xc4
	// Line 256, Address: 0x41bdb8, Func Offset: 0xc8
	// Line 241, Address: 0x41bdc4, Func Offset: 0xd4
	// Line 256, Address: 0x41bdc8, Func Offset: 0xd8
	// Line 241, Address: 0x41bdcc, Func Offset: 0xdc
	// Line 256, Address: 0x41bdd0, Func Offset: 0xe0
	// Line 241, Address: 0x41bde0, Func Offset: 0xf0
	// Line 240, Address: 0x41bde4, Func Offset: 0xf4
	// Line 241, Address: 0x41be00, Func Offset: 0x110
	// Line 256, Address: 0x41be10, Func Offset: 0x120
	// Line 244, Address: 0x41be18, Func Offset: 0x128
	// Line 256, Address: 0x41be2c, Func Offset: 0x13c
	// Line 244, Address: 0x41be34, Func Offset: 0x144
	// Line 256, Address: 0x41be48, Func Offset: 0x158
	// Line 244, Address: 0x41be50, Func Offset: 0x160
	// Line 256, Address: 0x41be88, Func Offset: 0x198
	// Line 244, Address: 0x41be9c, Func Offset: 0x1ac
	// Line 246, Address: 0x41bed0, Func Offset: 0x1e0
	// Line 247, Address: 0x41bed4, Func Offset: 0x1e4
	// Line 246, Address: 0x41bed8, Func Offset: 0x1e8
	// Line 247, Address: 0x41bedc, Func Offset: 0x1ec
	// Line 256, Address: 0x41bee0, Func Offset: 0x1f0
	// Line 246, Address: 0x41beec, Func Offset: 0x1fc
	// Line 256, Address: 0x41bef4, Func Offset: 0x204
	// Line 246, Address: 0x41bf00, Func Offset: 0x210
	// Line 256, Address: 0x41bf08, Func Offset: 0x218
	// Line 249, Address: 0x41bf28, Func Offset: 0x238
	// Line 256, Address: 0x41bf40, Func Offset: 0x250
	// Line 250, Address: 0x41bf48, Func Offset: 0x258
	// Line 256, Address: 0x41bf4c, Func Offset: 0x25c
	// Line 251, Address: 0x41bf54, Func Offset: 0x264
	// Line 256, Address: 0x41bf58, Func Offset: 0x268
	// Line 252, Address: 0x41bf60, Func Offset: 0x270
	// Line 256, Address: 0x41bf6c, Func Offset: 0x27c
	// Func End, Address: 0x41bf7c, Func Offset: 0x28c
}

// xSweptSpherePrepare__FP12xSweptSpherePC5xVec3PC5xVec3f
// Start address: 0x41bf80
void xSweptSpherePrepare(xSweptSphere* sws, xVec3* start, xVec3* end, float32 radius)
{
	xCapsule tmpC;
	// Line 158, Address: 0x41bf80, Func Offset: 0
	// Line 173, Address: 0x41bf84, Func Offset: 0x4
	// Line 158, Address: 0x41bf88, Func Offset: 0x8
	// Line 165, Address: 0x41bf8c, Func Offset: 0xc
	// Line 158, Address: 0x41bf90, Func Offset: 0x10
	// Line 165, Address: 0x41bf94, Func Offset: 0x14
	// Line 160, Address: 0x41bf98, Func Offset: 0x18
	// Line 173, Address: 0x41bf9c, Func Offset: 0x1c
	// Line 161, Address: 0x41bfa0, Func Offset: 0x20
	// Line 165, Address: 0x41bfa4, Func Offset: 0x24
	// Line 162, Address: 0x41bfa8, Func Offset: 0x28
	// Line 166, Address: 0x41bfac, Func Offset: 0x2c
	// Line 173, Address: 0x41bfb0, Func Offset: 0x30
	// Line 165, Address: 0x41bfb4, Func Offset: 0x34
	// Line 166, Address: 0x41bfbc, Func Offset: 0x3c
	// Line 165, Address: 0x41bfc4, Func Offset: 0x44
	// Line 166, Address: 0x41bfc8, Func Offset: 0x48
	// Line 167, Address: 0x41bfd4, Func Offset: 0x54
	// Line 168, Address: 0x41bfd8, Func Offset: 0x58
	// Line 169, Address: 0x41bfdc, Func Offset: 0x5c
	// Line 172, Address: 0x41bfe0, Func Offset: 0x60
	// Line 173, Address: 0x41c02c, Func Offset: 0xac
	// Line 176, Address: 0x41c03c, Func Offset: 0xbc
	// Line 177, Address: 0x41c058, Func Offset: 0xd8
	// Line 179, Address: 0x41c05c, Func Offset: 0xdc
	// Line 173, Address: 0x41c070, Func Offset: 0xf0
	// Line 179, Address: 0x41c078, Func Offset: 0xf8
	// Line 173, Address: 0x41c07c, Func Offset: 0xfc
	// Line 179, Address: 0x41c084, Func Offset: 0x104
	// Line 173, Address: 0x41c08c, Func Offset: 0x10c
	// Line 179, Address: 0x41c090, Func Offset: 0x110
	// Line 173, Address: 0x41c098, Func Offset: 0x118
	// Line 183, Address: 0x41c0a4, Func Offset: 0x124
	// Line 189, Address: 0x41c0a8, Func Offset: 0x128
	// Line 184, Address: 0x41c0b0, Func Offset: 0x130
	// Line 189, Address: 0x41c0b4, Func Offset: 0x134
	// Line 185, Address: 0x41c0b8, Func Offset: 0x138
	// Line 189, Address: 0x41c0bc, Func Offset: 0x13c
	// Line 192, Address: 0x41c0c0, Func Offset: 0x140
	// Line 190, Address: 0x41c0c4, Func Offset: 0x144
	// Line 191, Address: 0x41c0d0, Func Offset: 0x150
	// Line 189, Address: 0x41c0d4, Func Offset: 0x154
	// Line 192, Address: 0x41c0dc, Func Offset: 0x15c
	// Line 189, Address: 0x41c0e0, Func Offset: 0x160
	// Line 190, Address: 0x41c0e4, Func Offset: 0x164
	// Line 192, Address: 0x41c0ec, Func Offset: 0x16c
	// Line 193, Address: 0x41c0f4, Func Offset: 0x174
	// Line 194, Address: 0x41c108, Func Offset: 0x188
	// Func End, Address: 0x41c118, Func Offset: 0x198
}

