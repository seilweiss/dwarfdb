



int32 zThrown_IsStacked(xEnt* ent);
int32 zThrown_IsFruit(xEnt* ent, float32* stackHeight);
void zThrownCollide_StoneTiki(zThrownStruct* thrown, xEntCollis* collis, float32* bounce, float32* friction);
void zThrownCollide_Tiki(zThrownStruct* thrown, xEntCollis* collis, float32* bounce, float32* friction);
void zThrownCollide_DestructObj(zThrownStruct* thrown, xEntCollis* collis, float32* bounce, float32* friction);
void zThrownCollide_ThrowFreeze(zThrownStruct* thrown, xEntCollis* collis, float32* bounce, float32* friction);
void zThrownCollide_ThrowFruit(zThrownStruct* thrown, xEntCollis* collis, float32* bounce, float32* friction);
int32 zThrownCollide_CauseDamage(zThrownStruct* thrown, xEntCollis* collis);
int32 zThrown_KillFruit(xEnt* ent);
void zThrown_Remove(xEnt* ent);
void zThrown_AddFruit(xEnt* ent);
void zThrown_PatrickLauncher(xEnt* ent, xEnt* launcher);
void zThrown_LaunchStack(xEnt* ent, xEnt* stackTgt);
int32 zThrown_LaunchPos(xEnt* ent, xVec3* pos, xVec3* dir);
void zThrown_LaunchDir(xEnt* ent, xVec3* dir);
void zThrown_LaunchVel(xEnt* ent, xVec3* vel);
void zThrown_NMEUpdate(xEnt* ent, xScene* sc, float32 dt);
void zThrown_Update(xEnt* ent, xScene* sc, float32 dt);
void Recurse_TranslateStack(xEnt* ent, xVec3* delta);
void zFruit_Update(xEnt* ent, xScene* sc, float32 dt);
void zThrown_Setup(zScene* sc);

// zThrown_IsStacked__FP4xEnt
// Start address: 0x2e14c0
int32 zThrown_IsStacked(xEnt* ent)
{
	uint32 i;
	// Line 1735, Address: 0x2e14c0, Func Offset: 0
	// Line 1736, Address: 0x2e14dc, Func Offset: 0x1c
	// Line 1738, Address: 0x2e14f8, Func Offset: 0x38
	// Line 1740, Address: 0x2e1500, Func Offset: 0x40
	// Line 1741, Address: 0x2e1510, Func Offset: 0x50
	// Line 1742, Address: 0x2e1514, Func Offset: 0x54
	// Func End, Address: 0x2e151c, Func Offset: 0x5c
}

// zThrown_IsFruit__FP4xEntPf
// Start address: 0x2e1520
int32 zThrown_IsFruit(xEnt* ent, float32* stackHeight)
{
	ThrowableStats* stats;
	// Line 1715, Address: 0x2e1520, Func Offset: 0
	// Line 1716, Address: 0x2e1528, Func Offset: 0x8
	// Line 1717, Address: 0x2e153c, Func Offset: 0x1c
	// Line 1720, Address: 0x2e1554, Func Offset: 0x34
	// Line 1721, Address: 0x2e1558, Func Offset: 0x38
	// Line 1722, Address: 0x2e1568, Func Offset: 0x48
	// Line 1723, Address: 0x2e1580, Func Offset: 0x60
	// Line 1724, Address: 0x2e1588, Func Offset: 0x68
	// Line 1726, Address: 0x2e1590, Func Offset: 0x70
	// Line 1728, Address: 0x2e159c, Func Offset: 0x7c
	// Line 1729, Address: 0x2e15a0, Func Offset: 0x80
	// Func End, Address: 0x2e15a8, Func Offset: 0x88
}

// zThrownCollide_StoneTiki__FP13zThrownStructP10xEntCollisPfPf
// Start address: 0x2e15b0
void zThrownCollide_StoneTiki(zThrownStruct* thrown, xEntCollis* collis, float32* bounce, float32* friction)
{
	uint32 collidx;
	xEnt* hitent;
	en_npctyp type;
	uint32 collfound;
	// Line 1643, Address: 0x2e15b0, Func Offset: 0
	// Line 1648, Address: 0x2e15b4, Func Offset: 0x4
	// Line 1643, Address: 0x2e15b8, Func Offset: 0x8
	// Line 1644, Address: 0x2e15e8, Func Offset: 0x38
	// Line 1645, Address: 0x2e15ec, Func Offset: 0x3c
	// Line 1649, Address: 0x2e15f0, Func Offset: 0x40
	// Line 1651, Address: 0x2e15f8, Func Offset: 0x48
	// Line 1681, Address: 0x2e1600, Func Offset: 0x50
	// Line 1658, Address: 0x2e162c, Func Offset: 0x7c
	// Line 1681, Address: 0x2e1630, Func Offset: 0x80
	// Line 1664, Address: 0x2e1654, Func Offset: 0xa4
	// Line 1681, Address: 0x2e166c, Func Offset: 0xbc
	// Line 1667, Address: 0x2e1674, Func Offset: 0xc4
	// Line 1681, Address: 0x2e1678, Func Offset: 0xc8
	// Line 1668, Address: 0x2e167c, Func Offset: 0xcc
	// Line 1681, Address: 0x2e1680, Func Offset: 0xd0
	// Line 1672, Address: 0x2e168c, Func Offset: 0xdc
	// Line 1681, Address: 0x2e1690, Func Offset: 0xe0
	// Line 1676, Address: 0x2e16b8, Func Offset: 0x108
	// Line 1681, Address: 0x2e16d0, Func Offset: 0x120
	// Line 1670, Address: 0x2e16ec, Func Offset: 0x13c
	// Line 1681, Address: 0x2e1704, Func Offset: 0x154
	// Line 1692, Address: 0x2e1718, Func Offset: 0x168
	// Line 1693, Address: 0x2e1724, Func Offset: 0x174
	// Line 1694, Address: 0x2e1734, Func Offset: 0x184
	// Line 1695, Address: 0x2e1740, Func Offset: 0x190
	// Line 1696, Address: 0x2e1750, Func Offset: 0x1a0
	// Line 1698, Address: 0x2e1754, Func Offset: 0x1a4
	// Line 1699, Address: 0x2e175c, Func Offset: 0x1ac
	// Line 1704, Address: 0x2e178c, Func Offset: 0x1dc
	// Line 1707, Address: 0x2e17c4, Func Offset: 0x214
	// Line 1708, Address: 0x2e17c8, Func Offset: 0x218
	// Line 1710, Address: 0x2e17cc, Func Offset: 0x21c
	// Func End, Address: 0x2e17f4, Func Offset: 0x244
}

// zThrownCollide_Tiki__FP13zThrownStructP10xEntCollisPfPf
// Start address: 0x2e1800
void zThrownCollide_Tiki(zThrownStruct* thrown, xEntCollis* collis, float32* bounce, float32* friction)
{
	int32 didDamage;
	// Line 1618, Address: 0x2e1800, Func Offset: 0
	// Line 1620, Address: 0x2e1804, Func Offset: 0x4
	// Line 1618, Address: 0x2e1808, Func Offset: 0x8
	// Line 1621, Address: 0x2e1824, Func Offset: 0x24
	// Line 1625, Address: 0x2e182c, Func Offset: 0x2c
	// Line 1636, Address: 0x2e1830, Func Offset: 0x30
	// Line 1639, Address: 0x2e1838, Func Offset: 0x38
	// Line 1640, Address: 0x2e185c, Func Offset: 0x5c
	// Func End, Address: 0x2e1874, Func Offset: 0x74
}

// zThrownCollide_DestructObj__FP13zThrownStructP10xEntCollisPfPf
// Start address: 0x2e1880
void zThrownCollide_DestructObj(zThrownStruct* thrown, xEntCollis* collis, float32* bounce, float32* friction)
{
	int32 didDamage;
	// Line 1587, Address: 0x2e1880, Func Offset: 0
	// Line 1589, Address: 0x2e1884, Func Offset: 0x4
	// Line 1587, Address: 0x2e1888, Func Offset: 0x8
	// Line 1590, Address: 0x2e18a4, Func Offset: 0x24
	// Line 1594, Address: 0x2e18ac, Func Offset: 0x2c
	// Line 1611, Address: 0x2e18b0, Func Offset: 0x30
	// Line 1614, Address: 0x2e18d4, Func Offset: 0x54
	// Line 1615, Address: 0x2e18f8, Func Offset: 0x78
	// Func End, Address: 0x2e1910, Func Offset: 0x90
}

// zThrownCollide_ThrowFreeze__FP13zThrownStructP10xEntCollisPfPf
// Start address: 0x2e1910
void zThrownCollide_ThrowFreeze(zThrownStruct* thrown, xEntCollis* collis, float32* bounce, float32* friction)
{
	// Line 1581, Address: 0x2e1910, Func Offset: 0
	// Line 1582, Address: 0x2e1914, Func Offset: 0x4
	// Line 1581, Address: 0x2e1918, Func Offset: 0x8
	// Line 1583, Address: 0x2e191c, Func Offset: 0xc
	// Line 1584, Address: 0x2e1924, Func Offset: 0x14
	// Line 1585, Address: 0x2e1928, Func Offset: 0x18
	// Func End, Address: 0x2e1934, Func Offset: 0x24
}

// zThrownCollide_ThrowFruit__FP13zThrownStructP10xEntCollisPfPf
// Start address: 0x2e1940
void zThrownCollide_ThrowFruit(zThrownStruct* thrown, xEntCollis* collis, float32* bounce, float32* friction)
{
	uint32 collfound;
	float32 stackHeight;
	xEnt* landEnt;
	uint32 i;
	float32 killTimer;
	float32 dx;
	float32 dz;
	float32 lerp;
	float32 stackHeight;
	xEnt* landEnt;
	uint32 i;
	float32 killTimer;
	float32 dx;
	float32 dy;
	float32 dz;
	// Line 1436, Address: 0x2e1940, Func Offset: 0
	// Line 1438, Address: 0x2e1944, Func Offset: 0x4
	// Line 1436, Address: 0x2e1948, Func Offset: 0x8
	// Line 1439, Address: 0x2e196c, Func Offset: 0x2c
	// Line 1451, Address: 0x2e197c, Func Offset: 0x3c
	// Line 1455, Address: 0x2e1990, Func Offset: 0x50
	// Line 1458, Address: 0x2e1998, Func Offset: 0x58
	// Line 1467, Address: 0x2e1a14, Func Offset: 0xd4
	// Line 1466, Address: 0x2e1a18, Func Offset: 0xd8
	// Line 1467, Address: 0x2e1a20, Func Offset: 0xe0
	// Line 1468, Address: 0x2e1a34, Func Offset: 0xf4
	// Line 1471, Address: 0x2e1a40, Func Offset: 0x100
	// Line 1468, Address: 0x2e1a48, Func Offset: 0x108
	// Line 1471, Address: 0x2e1a4c, Func Offset: 0x10c
	// Line 1476, Address: 0x2e1a5c, Func Offset: 0x11c
	// Line 1471, Address: 0x2e1a60, Func Offset: 0x120
	// Line 1476, Address: 0x2e1a64, Func Offset: 0x124
	// Line 1471, Address: 0x2e1a70, Func Offset: 0x130
	// Line 1473, Address: 0x2e1a7c, Func Offset: 0x13c
	// Line 1476, Address: 0x2e1a94, Func Offset: 0x154
	// Line 1477, Address: 0x2e1ac0, Func Offset: 0x180
	// Line 1478, Address: 0x2e1ad0, Func Offset: 0x190
	// Line 1479, Address: 0x2e1ad4, Func Offset: 0x194
	// Line 1481, Address: 0x2e1ad8, Func Offset: 0x198
	// Line 1519, Address: 0x2e1ae0, Func Offset: 0x1a0
	// Line 1520, Address: 0x2e1ae4, Func Offset: 0x1a4
	// Line 1521, Address: 0x2e1b00, Func Offset: 0x1c0
	// Line 1522, Address: 0x2e1b1c, Func Offset: 0x1dc
	// Line 1523, Address: 0x2e1b30, Func Offset: 0x1f0
	// Line 1528, Address: 0x2e1b50, Func Offset: 0x210
	// Line 1531, Address: 0x2e1b58, Func Offset: 0x218
	// Line 1540, Address: 0x2e1bd4, Func Offset: 0x294
	// Line 1539, Address: 0x2e1bd8, Func Offset: 0x298
	// Line 1540, Address: 0x2e1be0, Func Offset: 0x2a0
	// Line 1541, Address: 0x2e1bf4, Func Offset: 0x2b4
	// Line 1544, Address: 0x2e1c00, Func Offset: 0x2c0
	// Line 1541, Address: 0x2e1c08, Func Offset: 0x2c8
	// Line 1544, Address: 0x2e1c0c, Func Offset: 0x2cc
	// Line 1550, Address: 0x2e1c1c, Func Offset: 0x2dc
	// Line 1546, Address: 0x2e1c28, Func Offset: 0x2e8
	// Line 1544, Address: 0x2e1c2c, Func Offset: 0x2ec
	// Line 1546, Address: 0x2e1c34, Func Offset: 0x2f4
	// Line 1550, Address: 0x2e1c38, Func Offset: 0x2f8
	// Line 1546, Address: 0x2e1c3c, Func Offset: 0x2fc
	// Line 1550, Address: 0x2e1c50, Func Offset: 0x310
	// Line 1551, Address: 0x2e1c98, Func Offset: 0x358
	// Line 1552, Address: 0x2e1c9c, Func Offset: 0x35c
	// Line 1551, Address: 0x2e1ca0, Func Offset: 0x360
	// Line 1552, Address: 0x2e1cac, Func Offset: 0x36c
	// Line 1553, Address: 0x2e1ccc, Func Offset: 0x38c
	// Line 1554, Address: 0x2e1ce0, Func Offset: 0x3a0
	// Line 1555, Address: 0x2e1ce4, Func Offset: 0x3a4
	// Line 1557, Address: 0x2e1ce8, Func Offset: 0x3a8
	// Line 1442, Address: 0x2e1cf4, Func Offset: 0x3b4
	// Line 1557, Address: 0x2e1cf8, Func Offset: 0x3b8
	// Line 1442, Address: 0x2e1cfc, Func Offset: 0x3bc
	// Line 1443, Address: 0x2e1d00, Func Offset: 0x3c0
	// Line 1458, Address: 0x2e1d10, Func Offset: 0x3d0
	// Line 1484, Address: 0x2e1d24, Func Offset: 0x3e4
	// Line 1557, Address: 0x2e1d28, Func Offset: 0x3e8
	// Line 1489, Address: 0x2e1d38, Func Offset: 0x3f8
	// Line 1557, Address: 0x2e1d3c, Func Offset: 0x3fc
	// Line 1490, Address: 0x2e1d48, Func Offset: 0x408
	// Line 1557, Address: 0x2e1d58, Func Offset: 0x418
	// Line 1490, Address: 0x2e1d5c, Func Offset: 0x41c
	// Line 1557, Address: 0x2e1d60, Func Offset: 0x420
	// Line 1495, Address: 0x2e1d74, Func Offset: 0x434
	// Line 1557, Address: 0x2e1d7c, Func Offset: 0x43c
	// Line 1501, Address: 0x2e1d90, Func Offset: 0x450
	// Line 1557, Address: 0x2e1da0, Func Offset: 0x460
	// Line 1502, Address: 0x2e1dac, Func Offset: 0x46c
	// Line 1557, Address: 0x2e1db0, Func Offset: 0x470
	// Line 1505, Address: 0x2e1dc0, Func Offset: 0x480
	// Line 1557, Address: 0x2e1dc4, Func Offset: 0x484
	// Line 1510, Address: 0x2e1dcc, Func Offset: 0x48c
	// Line 1557, Address: 0x2e1dd0, Func Offset: 0x490
	// Line 1510, Address: 0x2e1dd8, Func Offset: 0x498
	// Line 1557, Address: 0x2e1de0, Func Offset: 0x4a0
	// Line 1512, Address: 0x2e1de4, Func Offset: 0x4a4
	// Line 1557, Address: 0x2e1de8, Func Offset: 0x4a8
	// Line 1513, Address: 0x2e1df0, Func Offset: 0x4b0
	// Line 1557, Address: 0x2e1df4, Func Offset: 0x4b4
	// Line 1515, Address: 0x2e1df8, Func Offset: 0x4b8
	// Line 1557, Address: 0x2e1e00, Func Offset: 0x4c0
	// Line 1505, Address: 0x2e1e10, Func Offset: 0x4d0
	// Line 1557, Address: 0x2e1e18, Func Offset: 0x4d8
	// Line 1508, Address: 0x2e1e1c, Func Offset: 0x4dc
	// Line 1531, Address: 0x2e1e2c, Func Offset: 0x4ec
	// Line 1563, Address: 0x2e1e40, Func Offset: 0x500
	// Line 1564, Address: 0x2e1e44, Func Offset: 0x504
	// Line 1563, Address: 0x2e1e48, Func Offset: 0x508
	// Line 1564, Address: 0x2e1e4c, Func Offset: 0x50c
	// Line 1567, Address: 0x2e1e68, Func Offset: 0x528
	// Line 1568, Address: 0x2e1e70, Func Offset: 0x530
	// Line 1571, Address: 0x2e1e78, Func Offset: 0x538
	// Line 1573, Address: 0x2e1e80, Func Offset: 0x540
	// Line 1576, Address: 0x2e1e88, Func Offset: 0x548
	// Line 1577, Address: 0x2e1e8c, Func Offset: 0x54c
	// Line 1578, Address: 0x2e1e90, Func Offset: 0x550
	// Func End, Address: 0x2e1eac, Func Offset: 0x56c
}

// zThrownCollide_CauseDamage__FP13zThrownStructP10xEntCollis
// Start address: 0x2e1eb0
int32 zThrownCollide_CauseDamage(zThrownStruct* thrown, xEntCollis* collis)
{
	int32 damageInflicted;
	uint32 collidx;
	xCollis* currcoll;
	xEnt* hitent;
	float32 dummy;
	xVec3 pos;
	// Line 1352, Address: 0x2e1eb0, Func Offset: 0
	// Line 1354, Address: 0x2e1ec0, Func Offset: 0x10
	// Line 1352, Address: 0x2e1ec4, Func Offset: 0x14
	// Line 1354, Address: 0x2e1ec8, Func Offset: 0x18
	// Line 1352, Address: 0x2e1ecc, Func Offset: 0x1c
	// Line 1354, Address: 0x2e1ed4, Func Offset: 0x24
	// Line 1352, Address: 0x2e1ed8, Func Offset: 0x28
	// Line 1353, Address: 0x2e1ee4, Func Offset: 0x34
	// Line 1352, Address: 0x2e1ee8, Func Offset: 0x38
	// Line 1418, Address: 0x2e1ef4, Func Offset: 0x44
	// Line 1365, Address: 0x2e1f38, Func Offset: 0x88
	// Line 1418, Address: 0x2e1f40, Func Offset: 0x90
	// Line 1369, Address: 0x2e1f50, Func Offset: 0xa0
	// Line 1418, Address: 0x2e1f54, Func Offset: 0xa4
	// Line 1374, Address: 0x2e1f5c, Func Offset: 0xac
	// Line 1418, Address: 0x2e1f60, Func Offset: 0xb0
	// Line 1394, Address: 0x2e1f88, Func Offset: 0xd8
	// Line 1418, Address: 0x2e1f8c, Func Offset: 0xdc
	// Line 1398, Address: 0x2e1fb0, Func Offset: 0x100
	// Line 1418, Address: 0x2e1fb4, Func Offset: 0x104
	// Line 1406, Address: 0x2e1fe4, Func Offset: 0x134
	// Line 1418, Address: 0x2e1fe8, Func Offset: 0x138
	// Line 1406, Address: 0x2e2020, Func Offset: 0x170
	// Line 1418, Address: 0x2e2028, Func Offset: 0x178
	// Line 1406, Address: 0x2e202c, Func Offset: 0x17c
	// Line 1418, Address: 0x2e2030, Func Offset: 0x180
	// Line 1406, Address: 0x2e2038, Func Offset: 0x188
	// Line 1418, Address: 0x2e203c, Func Offset: 0x18c
	// Line 1406, Address: 0x2e2040, Func Offset: 0x190
	// Line 1418, Address: 0x2e2044, Func Offset: 0x194
	// Line 1406, Address: 0x2e204c, Func Offset: 0x19c
	// Line 1418, Address: 0x2e2050, Func Offset: 0x1a0
	// Line 1409, Address: 0x2e206c, Func Offset: 0x1bc
	// Line 1418, Address: 0x2e2070, Func Offset: 0x1c0
	// Line 1409, Address: 0x2e2074, Func Offset: 0x1c4
	// Line 1418, Address: 0x2e2080, Func Offset: 0x1d0
	// Line 1409, Address: 0x2e2084, Func Offset: 0x1d4
	// Line 1418, Address: 0x2e2088, Func Offset: 0x1d8
	// Line 1409, Address: 0x2e2094, Func Offset: 0x1e4
	// Line 1418, Address: 0x2e2098, Func Offset: 0x1e8
	// Line 1409, Address: 0x2e209c, Func Offset: 0x1ec
	// Line 1418, Address: 0x2e20a0, Func Offset: 0x1f0
	// Line 1413, Address: 0x2e20ac, Func Offset: 0x1fc
	// Line 1418, Address: 0x2e20b0, Func Offset: 0x200
	// Line 1413, Address: 0x2e20c8, Func Offset: 0x218
	// Line 1418, Address: 0x2e20cc, Func Offset: 0x21c
	// Line 1370, Address: 0x2e20dc, Func Offset: 0x22c
	// Line 1418, Address: 0x2e20f4, Func Offset: 0x244
	// Line 1373, Address: 0x2e20fc, Func Offset: 0x24c
	// Line 1418, Address: 0x2e2104, Func Offset: 0x254
	// Line 1375, Address: 0x2e2108, Func Offset: 0x258
	// Line 1418, Address: 0x2e2114, Func Offset: 0x264
	// Line 1375, Address: 0x2e2120, Func Offset: 0x270
	// Line 1418, Address: 0x2e2134, Func Offset: 0x284
	// Line 1378, Address: 0x2e2140, Func Offset: 0x290
	// Line 1380, Address: 0x2e2148, Func Offset: 0x298
	// Line 1418, Address: 0x2e2160, Func Offset: 0x2b0
	// Line 1382, Address: 0x2e2174, Func Offset: 0x2c4
	// Line 1418, Address: 0x2e217c, Func Offset: 0x2cc
	// Line 1383, Address: 0x2e2184, Func Offset: 0x2d4
	// Line 1386, Address: 0x2e218c, Func Offset: 0x2dc
	// Line 1418, Address: 0x2e21a4, Func Offset: 0x2f4
	// Line 1387, Address: 0x2e21ac, Func Offset: 0x2fc
	// Line 1418, Address: 0x2e21c8, Func Offset: 0x318
	// Line 1388, Address: 0x2e21d0, Func Offset: 0x320
	// Line 1391, Address: 0x2e21d8, Func Offset: 0x328
	// Line 1418, Address: 0x2e21f0, Func Offset: 0x340
	// Line 1392, Address: 0x2e21f8, Func Offset: 0x348
	// Line 1418, Address: 0x2e2214, Func Offset: 0x364
	// Line 1393, Address: 0x2e221c, Func Offset: 0x36c
	// Line 1419, Address: 0x2e2224, Func Offset: 0x374
	// Line 1420, Address: 0x2e2228, Func Offset: 0x378
	// Func End, Address: 0x2e2258, Func Offset: 0x3a8
}

// zThrown_KillFruit__FP4xEnt
// Start address: 0x2e2260
int32 zThrown_KillFruit(xEnt* ent)
{
	uint32 i;
	// Line 1337, Address: 0x2e2260, Func Offset: 0
	// Line 1338, Address: 0x2e2278, Func Offset: 0x18
	// Line 1339, Address: 0x2e2284, Func Offset: 0x24
	// Line 1338, Address: 0x2e2288, Func Offset: 0x28
	// Line 1339, Address: 0x2e228c, Func Offset: 0x2c
	// Line 1344, Address: 0x2e22ac, Func Offset: 0x4c
	// Line 1346, Address: 0x2e22b4, Func Offset: 0x54
	// Line 1347, Address: 0x2e22c8, Func Offset: 0x68
	// Line 1340, Address: 0x2e22d4, Func Offset: 0x74
	// Line 1347, Address: 0x2e22d8, Func Offset: 0x78
	// Line 1340, Address: 0x2e22dc, Func Offset: 0x7c
	// Line 1347, Address: 0x2e22e0, Func Offset: 0x80
	// Line 1341, Address: 0x2e22e8, Func Offset: 0x88
	// Line 1348, Address: 0x2e22ec, Func Offset: 0x8c
	// Func End, Address: 0x2e22f4, Func Offset: 0x94
}

// zThrown_Remove__FP4xEnt
// Start address: 0x2e2300
void zThrown_Remove(xEnt* ent)
{
	uint32 i;
	xModelInstance* mod;
	void(*thisCollCB)(zThrownStruct*, xEntCollis*, float32*, float32*);
	// Line 1289, Address: 0x2e2300, Func Offset: 0
	// Line 1291, Address: 0x2e2328, Func Offset: 0x28
	// Line 1292, Address: 0x2e2340, Func Offset: 0x40
	// Line 1293, Address: 0x2e236c, Func Offset: 0x6c
	// Line 1294, Address: 0x2e237c, Func Offset: 0x7c
	// Line 1295, Address: 0x2e2390, Func Offset: 0x90
	// Line 1299, Address: 0x2e23a0, Func Offset: 0xa0
	// Line 1295, Address: 0x2e23a4, Func Offset: 0xa4
	// Line 1299, Address: 0x2e23a8, Func Offset: 0xa8
	// Line 1295, Address: 0x2e23ac, Func Offset: 0xac
	// Line 1299, Address: 0x2e23b0, Func Offset: 0xb0
	// Line 1298, Address: 0x2e23b4, Func Offset: 0xb4
	// Line 1302, Address: 0x2e23b8, Func Offset: 0xb8
	// Line 1308, Address: 0x2e23c0, Func Offset: 0xc0
	// Line 1298, Address: 0x2e23e4, Func Offset: 0xe4
	// Line 1299, Address: 0x2e23e8, Func Offset: 0xe8
	// Line 1308, Address: 0x2e23ec, Func Offset: 0xec
	// Line 1302, Address: 0x2e23f8, Func Offset: 0xf8
	// Line 1308, Address: 0x2e23fc, Func Offset: 0xfc
	// Line 1299, Address: 0x2e240c, Func Offset: 0x10c
	// Line 1308, Address: 0x2e2410, Func Offset: 0x110
	// Line 1299, Address: 0x2e2414, Func Offset: 0x114
	// Line 1308, Address: 0x2e2418, Func Offset: 0x118
	// Line 1299, Address: 0x2e241c, Func Offset: 0x11c
	// Line 1308, Address: 0x2e2420, Func Offset: 0x120
	// Line 1302, Address: 0x2e2424, Func Offset: 0x124
	// Line 1308, Address: 0x2e2428, Func Offset: 0x128
	// Line 1302, Address: 0x2e242c, Func Offset: 0x12c
	// Line 1308, Address: 0x2e2430, Func Offset: 0x130
	// Line 1302, Address: 0x2e2448, Func Offset: 0x148
	// Line 1308, Address: 0x2e244c, Func Offset: 0x14c
	// Line 1302, Address: 0x2e2450, Func Offset: 0x150
	// Line 1308, Address: 0x2e2454, Func Offset: 0x154
	// Line 1306, Address: 0x2e2460, Func Offset: 0x160
	// Line 1308, Address: 0x2e2464, Func Offset: 0x164
	// Line 1306, Address: 0x2e2474, Func Offset: 0x174
	// Line 1308, Address: 0x2e2478, Func Offset: 0x178
	// Line 1309, Address: 0x2e257c, Func Offset: 0x27c
	// Line 1312, Address: 0x2e2580, Func Offset: 0x280
	// Line 1309, Address: 0x2e2584, Func Offset: 0x284
	// Line 1312, Address: 0x2e258c, Func Offset: 0x28c
	// Line 1317, Address: 0x2e2598, Func Offset: 0x298
	// Line 1323, Address: 0x2e25a8, Func Offset: 0x2a8
	// Line 1331, Address: 0x2e25f0, Func Offset: 0x2f0
	// Line 1313, Address: 0x2e2614, Func Offset: 0x314
	// Line 1331, Address: 0x2e2618, Func Offset: 0x318
	// Line 1328, Address: 0x2e264c, Func Offset: 0x34c
	// Line 1331, Address: 0x2e2650, Func Offset: 0x350
	// Line 1332, Address: 0x2e2654, Func Offset: 0x354
	// Func End, Address: 0x2e267c, Func Offset: 0x37c
}

// zThrown_AddFruit__FP4xEnt
// Start address: 0x2e2680
void zThrown_AddFruit(xEnt* ent)
{
	uint32 i;
	ThrowableStats* stats;
	zThrownStruct* newThrown;
	// Line 1228, Address: 0x2e2680, Func Offset: 0
	// Line 1231, Address: 0x2e2684, Func Offset: 0x4
	// Line 1228, Address: 0x2e2688, Func Offset: 0x8
	// Line 1231, Address: 0x2e2698, Func Offset: 0x18
	// Line 1232, Address: 0x2e26b0, Func Offset: 0x30
	// Line 1235, Address: 0x2e26c0, Func Offset: 0x40
	// Line 1232, Address: 0x2e26c4, Func Offset: 0x44
	// Line 1235, Address: 0x2e26c8, Func Offset: 0x48
	// Line 1236, Address: 0x2e26d0, Func Offset: 0x50
	// Line 1235, Address: 0x2e26d4, Func Offset: 0x54
	// Line 1236, Address: 0x2e26d8, Func Offset: 0x58
	// Line 1237, Address: 0x2e26dc, Func Offset: 0x5c
	// Line 1236, Address: 0x2e26e0, Func Offset: 0x60
	// Line 1235, Address: 0x2e26e4, Func Offset: 0x64
	// Line 1237, Address: 0x2e26e8, Func Offset: 0x68
	// Line 1236, Address: 0x2e26ec, Func Offset: 0x6c
	// Line 1241, Address: 0x2e26f0, Func Offset: 0x70
	// Line 1237, Address: 0x2e26f4, Func Offset: 0x74
	// Line 1241, Address: 0x2e26f8, Func Offset: 0x78
	// Line 1238, Address: 0x2e26fc, Func Offset: 0x7c
	// Line 1241, Address: 0x2e2700, Func Offset: 0x80
	// Line 1238, Address: 0x2e2704, Func Offset: 0x84
	// Line 1241, Address: 0x2e270c, Func Offset: 0x8c
	// Line 1244, Address: 0x2e2718, Func Offset: 0x98
	// Line 1245, Address: 0x2e271c, Func Offset: 0x9c
	// Line 1244, Address: 0x2e2720, Func Offset: 0xa0
	// Line 1245, Address: 0x2e2724, Func Offset: 0xa4
	// Line 1244, Address: 0x2e2728, Func Offset: 0xa8
	// Line 1245, Address: 0x2e272c, Func Offset: 0xac
	// Line 1244, Address: 0x2e2730, Func Offset: 0xb0
	// Line 1246, Address: 0x2e2734, Func Offset: 0xb4
	// Line 1245, Address: 0x2e2738, Func Offset: 0xb8
	// Line 1246, Address: 0x2e273c, Func Offset: 0xbc
	// Line 1247, Address: 0x2e2744, Func Offset: 0xc4
	// Line 1248, Address: 0x2e274c, Func Offset: 0xcc
	// Line 1251, Address: 0x2e2760, Func Offset: 0xe0
	// Line 1252, Address: 0x2e276c, Func Offset: 0xec
	// Line 1253, Address: 0x2e277c, Func Offset: 0xfc
	// Line 1256, Address: 0x2e2794, Func Offset: 0x114
	// Line 1257, Address: 0x2e279c, Func Offset: 0x11c
	// Line 1258, Address: 0x2e27a8, Func Offset: 0x128
	// Line 1266, Address: 0x2e27c0, Func Offset: 0x140
	// Line 1265, Address: 0x2e27c4, Func Offset: 0x144
	// Line 1276, Address: 0x2e27d8, Func Offset: 0x158
	// Line 1265, Address: 0x2e27dc, Func Offset: 0x15c
	// Line 1276, Address: 0x2e27e0, Func Offset: 0x160
	// Line 1266, Address: 0x2e27e4, Func Offset: 0x164
	// Line 1269, Address: 0x2e27ec, Func Offset: 0x16c
	// Line 1270, Address: 0x2e27f4, Func Offset: 0x174
	// Line 1271, Address: 0x2e27f8, Func Offset: 0x178
	// Line 1272, Address: 0x2e2800, Func Offset: 0x180
	// Line 1273, Address: 0x2e2804, Func Offset: 0x184
	// Line 1274, Address: 0x2e2808, Func Offset: 0x188
	// Line 1275, Address: 0x2e280c, Func Offset: 0x18c
	// Line 1276, Address: 0x2e2818, Func Offset: 0x198
	// Line 1277, Address: 0x2e281c, Func Offset: 0x19c
	// Line 1278, Address: 0x2e2828, Func Offset: 0x1a8
	// Line 1281, Address: 0x2e2838, Func Offset: 0x1b8
	// Line 1282, Address: 0x2e2844, Func Offset: 0x1c4
	// Line 1283, Address: 0x2e2848, Func Offset: 0x1c8
	// Line 1286, Address: 0x2e284c, Func Offset: 0x1cc
	// Line 1242, Address: 0x2e2858, Func Offset: 0x1d8
	// Line 1286, Address: 0x2e285c, Func Offset: 0x1dc
	// Line 1242, Address: 0x2e2860, Func Offset: 0x1e0
	// Line 1286, Address: 0x2e2864, Func Offset: 0x1e4
	// Line 1242, Address: 0x2e2868, Func Offset: 0x1e8
	// Line 1286, Address: 0x2e286c, Func Offset: 0x1ec
	// Line 1278, Address: 0x2e287c, Func Offset: 0x1fc
	// Line 1286, Address: 0x2e2884, Func Offset: 0x204
	// Line 1278, Address: 0x2e288c, Func Offset: 0x20c
	// Line 1286, Address: 0x2e2890, Func Offset: 0x210
	// Func End, Address: 0x2e293c, Func Offset: 0x2bc
}

// zThrown_PatrickLauncher__FP4xEntP4xEnt
// Start address: 0x2e2940
void zThrown_PatrickLauncher(xEnt* ent, xEnt* launcher)
{
	uint32 i;
	// Line 1213, Address: 0x2e2940, Func Offset: 0
	// Line 1214, Address: 0x2e2958, Func Offset: 0x18
	// Line 1216, Address: 0x2e2964, Func Offset: 0x24
	// Line 1217, Address: 0x2e2978, Func Offset: 0x38
	// Line 1223, Address: 0x2e2980, Func Offset: 0x40
	// Line 1224, Address: 0x2e2998, Func Offset: 0x58
	// Func End, Address: 0x2e29a0, Func Offset: 0x60
}

// zThrown_LaunchStack__FP4xEntP4xEnt
// Start address: 0x2e29a0
void zThrown_LaunchStack(xEnt* ent, xEnt* stackTgt)
{
	xVec3 stackPos;
	xVec3 stackDir;
	xBox tmpbox;
	uint32 i;
	// Line 1161, Address: 0x2e29a0, Func Offset: 0
	// Line 1165, Address: 0x2e29a4, Func Offset: 0x4
	// Line 1161, Address: 0x2e29a8, Func Offset: 0x8
	// Line 1165, Address: 0x2e29b8, Func Offset: 0x18
	// Line 1167, Address: 0x2e29e0, Func Offset: 0x40
	// Line 1165, Address: 0x2e29e4, Func Offset: 0x44
	// Line 1167, Address: 0x2e29e8, Func Offset: 0x48
	// Line 1168, Address: 0x2e29f0, Func Offset: 0x50
	// Line 1170, Address: 0x2e29f8, Func Offset: 0x58
	// Line 1168, Address: 0x2e29fc, Func Offset: 0x5c
	// Line 1171, Address: 0x2e2a00, Func Offset: 0x60
	// Line 1173, Address: 0x2e2a08, Func Offset: 0x68
	// Line 1174, Address: 0x2e2a18, Func Offset: 0x78
	// Line 1173, Address: 0x2e2a1c, Func Offset: 0x7c
	// Line 1175, Address: 0x2e2a20, Func Offset: 0x80
	// Line 1177, Address: 0x2e2a2c, Func Offset: 0x8c
	// Line 1180, Address: 0x2e2a38, Func Offset: 0x98
	// Line 1188, Address: 0x2e2a44, Func Offset: 0xa4
	// Line 1180, Address: 0x2e2a48, Func Offset: 0xa8
	// Line 1181, Address: 0x2e2a4c, Func Offset: 0xac
	// Line 1188, Address: 0x2e2a50, Func Offset: 0xb0
	// Line 1180, Address: 0x2e2a54, Func Offset: 0xb4
	// Line 1181, Address: 0x2e2a5c, Func Offset: 0xbc
	// Line 1182, Address: 0x2e2a6c, Func Offset: 0xcc
	// Line 1185, Address: 0x2e2a70, Func Offset: 0xd0
	// Line 1182, Address: 0x2e2a74, Func Offset: 0xd4
	// Line 1185, Address: 0x2e2a80, Func Offset: 0xe0
	// Line 1186, Address: 0x2e2a90, Func Offset: 0xf0
	// Line 1185, Address: 0x2e2a94, Func Offset: 0xf4
	// Line 1187, Address: 0x2e2a98, Func Offset: 0xf8
	// Line 1188, Address: 0x2e2aa8, Func Offset: 0x108
	// Line 1191, Address: 0x2e2ab0, Func Offset: 0x110
	// Line 1198, Address: 0x2e2ac8, Func Offset: 0x128
	// Line 1199, Address: 0x2e2ae0, Func Offset: 0x140
	// Line 1201, Address: 0x2e2aec, Func Offset: 0x14c
	// Line 1204, Address: 0x2e2b00, Func Offset: 0x160
	// Line 1206, Address: 0x2e2b1c, Func Offset: 0x17c
	// Func End, Address: 0x2e2b30, Func Offset: 0x190
}

// zThrown_LaunchPos__FP4xEntP5xVec3P5xVec3
// Start address: 0x2e2b30
int32 zThrown_LaunchPos(xEnt* ent, xVec3* pos, xVec3* dir)
{
	int32 retval;
	ThrowableStats* stats;
	float32 throwHeight;
	float32 throwDistance;
	float32 throwHeightFudge;
	float32 throwSpeedY;
	float32 throwSpeedXZ;
	float32 tpeak;
	float32 hpeak;
	xVec3 tempVel;
	float32 speed;
	// Line 1061, Address: 0x2e2b30, Func Offset: 0
	// Line 1065, Address: 0x2e2b34, Func Offset: 0x4
	// Line 1061, Address: 0x2e2b38, Func Offset: 0x8
	// Line 1065, Address: 0x2e2b3c, Func Offset: 0xc
	// Line 1061, Address: 0x2e2b40, Func Offset: 0x10
	// Line 1065, Address: 0x2e2b44, Func Offset: 0x14
	// Line 1066, Address: 0x2e2b48, Func Offset: 0x18
	// Line 1067, Address: 0x2e2b58, Func Offset: 0x28
	// Line 1070, Address: 0x2e2b70, Func Offset: 0x40
	// Line 1071, Address: 0x2e2b78, Func Offset: 0x48
	// Line 1073, Address: 0x2e2b80, Func Offset: 0x50
	// Line 1082, Address: 0x2e2b94, Func Offset: 0x64
	// Line 1073, Address: 0x2e2b98, Func Offset: 0x68
	// Line 1082, Address: 0x2e2b9c, Func Offset: 0x6c
	// Line 1073, Address: 0x2e2ba4, Func Offset: 0x74
	// Line 1083, Address: 0x2e2ba8, Func Offset: 0x78
	// Line 1082, Address: 0x2e2bbc, Func Offset: 0x8c
	// Line 1083, Address: 0x2e2bd0, Func Offset: 0xa0
	// Line 1087, Address: 0x2e2bd8, Func Offset: 0xa8
	// Line 1088, Address: 0x2e2be0, Func Offset: 0xb0
	// Line 1087, Address: 0x2e2be8, Func Offset: 0xb8
	// Line 1088, Address: 0x2e2bec, Func Offset: 0xbc
	// Line 1089, Address: 0x2e2bf0, Func Offset: 0xc0
	// Line 1092, Address: 0x2e2c04, Func Offset: 0xd4
	// Line 1094, Address: 0x2e2c10, Func Offset: 0xe0
	// Line 1095, Address: 0x2e2c14, Func Offset: 0xe4
	// Line 1097, Address: 0x2e2c28, Func Offset: 0xf8
	// Line 1098, Address: 0x2e2c3c, Func Offset: 0x10c
	// Line 1112, Address: 0x2e2c44, Func Offset: 0x114
	// Line 1104, Address: 0x2e2c48, Func Offset: 0x118
	// Line 1112, Address: 0x2e2c54, Func Offset: 0x124
	// Line 1104, Address: 0x2e2c58, Func Offset: 0x128
	// Line 1107, Address: 0x2e2c60, Func Offset: 0x130
	// Line 1106, Address: 0x2e2c6c, Func Offset: 0x13c
	// Line 1110, Address: 0x2e2c70, Func Offset: 0x140
	// Line 1112, Address: 0x2e2c7c, Func Offset: 0x14c
	// Line 1113, Address: 0x2e2c88, Func Offset: 0x158
	// Line 1128, Address: 0x2e2cbc, Func Offset: 0x18c
	// Line 1143, Address: 0x2e2ccc, Func Offset: 0x19c
	// Line 1153, Address: 0x2e2cd0, Func Offset: 0x1a0
	// Line 1143, Address: 0x2e2cd4, Func Offset: 0x1a4
	// Line 1144, Address: 0x2e2cec, Func Offset: 0x1bc
	// Line 1143, Address: 0x2e2cf0, Func Offset: 0x1c0
	// Line 1144, Address: 0x2e2cf8, Func Offset: 0x1c8
	// Line 1146, Address: 0x2e2d04, Func Offset: 0x1d4
	// Line 1144, Address: 0x2e2d08, Func Offset: 0x1d8
	// Line 1146, Address: 0x2e2d0c, Func Offset: 0x1dc
	// Line 1148, Address: 0x2e2d10, Func Offset: 0x1e0
	// Line 1146, Address: 0x2e2d14, Func Offset: 0x1e4
	// Line 1152, Address: 0x2e2d18, Func Offset: 0x1e8
	// Line 1156, Address: 0x2e2d24, Func Offset: 0x1f4
	// Line 1157, Address: 0x2e2d2c, Func Offset: 0x1fc
	// Line 1115, Address: 0x2e2d48, Func Offset: 0x218
	// Line 1157, Address: 0x2e2d64, Func Offset: 0x234
	// Line 1139, Address: 0x2e2d68, Func Offset: 0x238
	// Line 1131, Address: 0x2e2d6c, Func Offset: 0x23c
	// Line 1157, Address: 0x2e2d70, Func Offset: 0x240
	// Line 1133, Address: 0x2e2d7c, Func Offset: 0x24c
	// Line 1140, Address: 0x2e2d80, Func Offset: 0x250
	// Line 1158, Address: 0x2e2d88, Func Offset: 0x258
	// Func End, Address: 0x2e2d98, Func Offset: 0x268
}

// zThrown_LaunchDir__FP4xEntP5xVec3
// Start address: 0x2e2da0
void zThrown_LaunchDir(xEnt* ent, xVec3* dir)
{
	ThrowableStats* stats;
	float32 throwSpeedXZ;
	xVec3 tempVel;
	// Line 1015, Address: 0x2e2da0, Func Offset: 0
	// Line 1019, Address: 0x2e2da4, Func Offset: 0x4
	// Line 1015, Address: 0x2e2da8, Func Offset: 0x8
	// Line 1016, Address: 0x2e2dac, Func Offset: 0xc
	// Line 1019, Address: 0x2e2db4, Func Offset: 0x14
	// Line 1020, Address: 0x2e2dbc, Func Offset: 0x1c
	// Line 1021, Address: 0x2e2dcc, Func Offset: 0x2c
	// Line 1024, Address: 0x2e2de4, Func Offset: 0x44
	// Line 1025, Address: 0x2e2dec, Func Offset: 0x4c
	// Line 1036, Address: 0x2e2e04, Func Offset: 0x64
	// Line 1025, Address: 0x2e2e08, Func Offset: 0x68
	// Line 1036, Address: 0x2e2e10, Func Offset: 0x70
	// Line 1039, Address: 0x2e2e28, Func Offset: 0x88
	// Line 1036, Address: 0x2e2e30, Func Offset: 0x90
	// Line 1042, Address: 0x2e2e34, Func Offset: 0x94
	// Line 1039, Address: 0x2e2e38, Func Offset: 0x98
	// Line 1036, Address: 0x2e2e44, Func Offset: 0xa4
	// Line 1039, Address: 0x2e2e50, Func Offset: 0xb0
	// Line 1043, Address: 0x2e2e5c, Func Offset: 0xbc
	// Line 1042, Address: 0x2e2e64, Func Offset: 0xc4
	// Line 1044, Address: 0x2e2e6c, Func Offset: 0xcc
	// Line 1046, Address: 0x2e2e74, Func Offset: 0xd4
	// Line 1058, Address: 0x2e2e80, Func Offset: 0xe0
	// Func End, Address: 0x2e2e8c, Func Offset: 0xec
}

// zThrown_LaunchVel__FP4xEntP5xVec3
// Start address: 0x2e2e90
void zThrown_LaunchVel(xEnt* ent, xVec3* vel)
{
	ThrowableStats* stats;
	zThrownStruct* newThrown;
	uint32 i;
	// Line 948, Address: 0x2e2e90, Func Offset: 0
	// Line 950, Address: 0x2e2ea8, Func Offset: 0x18
	// Line 948, Address: 0x2e2eac, Func Offset: 0x1c
	// Line 950, Address: 0x2e2eb0, Func Offset: 0x20
	// Line 951, Address: 0x2e2eb8, Func Offset: 0x28
	// Line 952, Address: 0x2e2ec8, Func Offset: 0x38
	// Line 955, Address: 0x2e2ee0, Func Offset: 0x50
	// Line 956, Address: 0x2e2ee8, Func Offset: 0x58
	// Line 958, Address: 0x2e2ef0, Func Offset: 0x60
	// Line 963, Address: 0x2e2ef8, Func Offset: 0x68
	// Line 977, Address: 0x2e2f0c, Func Offset: 0x7c
	// Line 979, Address: 0x2e2f14, Func Offset: 0x84
	// Line 983, Address: 0x2e2f1c, Func Offset: 0x8c
	// Line 979, Address: 0x2e2f20, Func Offset: 0x90
	// Line 994, Address: 0x2e2f24, Func Offset: 0x94
	// Line 980, Address: 0x2e2f28, Func Offset: 0x98
	// Line 979, Address: 0x2e2f2c, Func Offset: 0x9c
	// Line 980, Address: 0x2e2f30, Func Offset: 0xa0
	// Line 979, Address: 0x2e2f34, Func Offset: 0xa4
	// Line 983, Address: 0x2e2f38, Func Offset: 0xa8
	// Line 979, Address: 0x2e2f3c, Func Offset: 0xac
	// Line 994, Address: 0x2e2f44, Func Offset: 0xb4
	// Line 983, Address: 0x2e2f48, Func Offset: 0xb8
	// Line 984, Address: 0x2e2f4c, Func Offset: 0xbc
	// Line 985, Address: 0x2e2f50, Func Offset: 0xc0
	// Line 986, Address: 0x2e2f58, Func Offset: 0xc8
	// Line 987, Address: 0x2e2f5c, Func Offset: 0xcc
	// Line 988, Address: 0x2e2f60, Func Offset: 0xd0
	// Line 989, Address: 0x2e2f64, Func Offset: 0xd4
	// Line 990, Address: 0x2e2f68, Func Offset: 0xd8
	// Line 994, Address: 0x2e2f74, Func Offset: 0xe4
	// Line 995, Address: 0x2e2f7c, Func Offset: 0xec
	// Line 996, Address: 0x2e2f80, Func Offset: 0xf0
	// Line 998, Address: 0x2e2f84, Func Offset: 0xf4
	// Line 1000, Address: 0x2e2f90, Func Offset: 0x100
	// Line 998, Address: 0x2e2f94, Func Offset: 0x104
	// Line 999, Address: 0x2e2fa0, Func Offset: 0x110
	// Line 1000, Address: 0x2e2fac, Func Offset: 0x11c
	// Line 1002, Address: 0x2e2fbc, Func Offset: 0x12c
	// Line 1001, Address: 0x2e2fc0, Func Offset: 0x130
	// Line 1003, Address: 0x2e2fc4, Func Offset: 0x134
	// Line 1004, Address: 0x2e2fcc, Func Offset: 0x13c
	// Line 1007, Address: 0x2e2fd0, Func Offset: 0x140
	// Line 1008, Address: 0x2e2fd4, Func Offset: 0x144
	// Line 1007, Address: 0x2e2fd8, Func Offset: 0x148
	// Line 1008, Address: 0x2e2fe0, Func Offset: 0x150
	// Line 1010, Address: 0x2e2fe4, Func Offset: 0x154
	// Line 1011, Address: 0x2e2ff0, Func Offset: 0x160
	// Line 1012, Address: 0x2e3000, Func Offset: 0x170
	// Line 969, Address: 0x2e3038, Func Offset: 0x1a8
	// Line 1012, Address: 0x2e303c, Func Offset: 0x1ac
	// Line 969, Address: 0x2e3048, Func Offset: 0x1b8
	// Line 970, Address: 0x2e304c, Func Offset: 0x1bc
	// Line 1012, Address: 0x2e3054, Func Offset: 0x1c4
	// Line 974, Address: 0x2e3064, Func Offset: 0x1d4
	// Line 1011, Address: 0x2e306c, Func Offset: 0x1dc
	// Line 1012, Address: 0x2e3070, Func Offset: 0x1e0
	// Line 1011, Address: 0x2e3078, Func Offset: 0x1e8
	// Line 1012, Address: 0x2e307c, Func Offset: 0x1ec
	// Func End, Address: 0x2e3128, Func Offset: 0x298
}

// zThrown_NMEUpdate__FP4xEntP6xScenef
// Start address: 0x2e3130
void zThrown_NMEUpdate(xEnt* ent, xScene* sc, float32 dt)
{
	uint32 i;
	// Line 907, Address: 0x2e3130, Func Offset: 0
	// Line 909, Address: 0x2e3138, Func Offset: 0x8
	// Line 910, Address: 0x2e3150, Func Offset: 0x20
	// Line 912, Address: 0x2e315c, Func Offset: 0x2c
	// Line 915, Address: 0x2e3170, Func Offset: 0x40
	// Line 917, Address: 0x2e317c, Func Offset: 0x4c
	// Line 919, Address: 0x2e31a0, Func Offset: 0x70
	// Line 923, Address: 0x2e31a8, Func Offset: 0x78
	// Func End, Address: 0x2e31b4, Func Offset: 0x84
}

// zThrown_Update__FP4xEntP6xScenef
// Start address: 0x2e31c0
void zThrown_Update(xEnt* ent, xScene* sc, float32 dt)
{
	uint32 i;
	uint32 removethis;
	zThrownStruct* thrown;
	float32 dist2;
	xVec3 stackDelta;
	xEntCollis collis;
	xEntCollis* oldcollis;
	xBound oldbound;
	uint8 oldpflags;
	uint8 oldcollType;
	void(*old_bupdateFunc)(xEnt*, xVec3*);
	float32 oldgrav;
	xVec3 dposvel;
	float32 posdot;
	xVec3 velunit;
	xSweptSphere sws;
	xVec3 start;
	float32 lerp;
	float32 lerpdist;
	xCollis* coll;
	xCollis* cend;
	zSurfaceProps* prop;
	float32 bounce;
	float32 friction;
	float32 dothdng;
	float32 boxX;
	float32 boxYupper;
	float32 boxZ;
	xVec3 boxCenter;
	zShrapnelAsset* shrap;
	xCollis* fcoll;
	float32 fruitPattern[18];
	xEntFrame tmpNPCframe;
	// Line 353, Address: 0x2e31c0, Func Offset: 0
	// Line 360, Address: 0x2e31f4, Func Offset: 0x34
	// Line 353, Address: 0x2e31f8, Func Offset: 0x38
	// Line 358, Address: 0x2e31fc, Func Offset: 0x3c
	// Line 353, Address: 0x2e3200, Func Offset: 0x40
	// Line 360, Address: 0x2e3204, Func Offset: 0x44
	// Line 361, Address: 0x2e321c, Func Offset: 0x5c
	// Line 363, Address: 0x2e3228, Func Offset: 0x68
	// Line 365, Address: 0x2e3238, Func Offset: 0x78
	// Line 369, Address: 0x2e3248, Func Offset: 0x88
	// Line 365, Address: 0x2e324c, Func Offset: 0x8c
	// Line 369, Address: 0x2e3254, Func Offset: 0x94
	// Line 370, Address: 0x2e3260, Func Offset: 0xa0
	// Line 372, Address: 0x2e326c, Func Offset: 0xac
	// Line 373, Address: 0x2e3278, Func Offset: 0xb8
	// Line 372, Address: 0x2e327c, Func Offset: 0xbc
	// Line 373, Address: 0x2e3280, Func Offset: 0xc0
	// Line 399, Address: 0x2e3298, Func Offset: 0xd8
	// Line 400, Address: 0x2e32b0, Func Offset: 0xf0
	// Line 407, Address: 0x2e32b4, Func Offset: 0xf4
	// Line 400, Address: 0x2e32b8, Func Offset: 0xf8
	// Line 399, Address: 0x2e32c0, Func Offset: 0x100
	// Line 407, Address: 0x2e32c4, Func Offset: 0x104
	// Line 400, Address: 0x2e32c8, Func Offset: 0x108
	// Line 407, Address: 0x2e32ec, Func Offset: 0x12c
	// Line 408, Address: 0x2e32f8, Func Offset: 0x138
	// Line 410, Address: 0x2e3308, Func Offset: 0x148
	// Line 412, Address: 0x2e3310, Func Offset: 0x150
	// Line 413, Address: 0x2e3384, Func Offset: 0x1c4
	// Line 415, Address: 0x2e3400, Func Offset: 0x240
	// Line 416, Address: 0x2e3414, Func Offset: 0x254
	// Line 417, Address: 0x2e3424, Func Offset: 0x264
	// Line 419, Address: 0x2e3444, Func Offset: 0x284
	// Line 425, Address: 0x2e3448, Func Offset: 0x288
	// Line 426, Address: 0x2e3460, Func Offset: 0x2a0
	// Line 427, Address: 0x2e3464, Func Offset: 0x2a4
	// Line 428, Address: 0x2e3470, Func Offset: 0x2b0
	// Line 429, Address: 0x2e3474, Func Offset: 0x2b4
	// Line 443, Address: 0x2e3480, Func Offset: 0x2c0
	// Line 450, Address: 0x2e3484, Func Offset: 0x2c4
	// Line 440, Address: 0x2e3488, Func Offset: 0x2c8
	// Line 451, Address: 0x2e348c, Func Offset: 0x2cc
	// Line 441, Address: 0x2e3490, Func Offset: 0x2d0
	// Line 460, Address: 0x2e3494, Func Offset: 0x2d4
	// Line 442, Address: 0x2e3498, Func Offset: 0x2d8
	// Line 464, Address: 0x2e349c, Func Offset: 0x2dc
	// Line 465, Address: 0x2e34a4, Func Offset: 0x2e4
	// Line 443, Address: 0x2e34a8, Func Offset: 0x2e8
	// Line 444, Address: 0x2e34b8, Func Offset: 0x2f8
	// Line 445, Address: 0x2e34d0, Func Offset: 0x310
	// Line 447, Address: 0x2e34e8, Func Offset: 0x328
	// Line 448, Address: 0x2e34ec, Func Offset: 0x32c
	// Line 450, Address: 0x2e34f0, Func Offset: 0x330
	// Line 451, Address: 0x2e34f4, Func Offset: 0x334
	// Line 455, Address: 0x2e34f8, Func Offset: 0x338
	// Line 452, Address: 0x2e34fc, Func Offset: 0x33c
	// Line 455, Address: 0x2e3500, Func Offset: 0x340
	// Line 453, Address: 0x2e3504, Func Offset: 0x344
	// Line 455, Address: 0x2e3508, Func Offset: 0x348
	// Line 454, Address: 0x2e350c, Func Offset: 0x34c
	// Line 455, Address: 0x2e3514, Func Offset: 0x354
	// Line 456, Address: 0x2e3520, Func Offset: 0x360
	// Line 460, Address: 0x2e352c, Func Offset: 0x36c
	// Line 464, Address: 0x2e3530, Func Offset: 0x370
	// Line 465, Address: 0x2e35e4, Func Offset: 0x424
	// Line 468, Address: 0x2e3644, Func Offset: 0x484
	// Line 470, Address: 0x2e365c, Func Offset: 0x49c
	// Line 473, Address: 0x2e3664, Func Offset: 0x4a4
	// Line 468, Address: 0x2e3668, Func Offset: 0x4a8
	// Line 472, Address: 0x2e3670, Func Offset: 0x4b0
	// Line 470, Address: 0x2e3674, Func Offset: 0x4b4
	// Line 471, Address: 0x2e367c, Func Offset: 0x4bc
	// Line 472, Address: 0x2e3684, Func Offset: 0x4c4
	// Line 471, Address: 0x2e3688, Func Offset: 0x4c8
	// Line 473, Address: 0x2e3690, Func Offset: 0x4d0
	// Line 474, Address: 0x2e3698, Func Offset: 0x4d8
	// Line 481, Address: 0x2e36f4, Func Offset: 0x534
	// Line 487, Address: 0x2e36fc, Func Offset: 0x53c
	// Line 488, Address: 0x2e3708, Func Offset: 0x548
	// Line 489, Address: 0x2e371c, Func Offset: 0x55c
	// Line 488, Address: 0x2e3720, Func Offset: 0x560
	// Line 489, Address: 0x2e372c, Func Offset: 0x56c
	// Line 494, Address: 0x2e3740, Func Offset: 0x580
	// Line 495, Address: 0x2e3750, Func Offset: 0x590
	// Line 496, Address: 0x2e3760, Func Offset: 0x5a0
	// Line 497, Address: 0x2e3768, Func Offset: 0x5a8
	// Line 502, Address: 0x2e3778, Func Offset: 0x5b8
	// Line 497, Address: 0x2e377c, Func Offset: 0x5bc
	// Line 502, Address: 0x2e3780, Func Offset: 0x5c0
	// Line 501, Address: 0x2e3784, Func Offset: 0x5c4
	// Line 505, Address: 0x2e3788, Func Offset: 0x5c8
	// Line 502, Address: 0x2e378c, Func Offset: 0x5cc
	// Line 505, Address: 0x2e3790, Func Offset: 0x5d0
	// Line 506, Address: 0x2e37b8, Func Offset: 0x5f8
	// Line 508, Address: 0x2e37cc, Func Offset: 0x60c
	// Line 506, Address: 0x2e37d0, Func Offset: 0x610
	// Line 508, Address: 0x2e37d4, Func Offset: 0x614
	// Line 506, Address: 0x2e37dc, Func Offset: 0x61c
	// Line 508, Address: 0x2e37ec, Func Offset: 0x62c
	// Line 509, Address: 0x2e37fc, Func Offset: 0x63c
	// Line 511, Address: 0x2e380c, Func Offset: 0x64c
	// Line 519, Address: 0x2e3818, Func Offset: 0x658
	// Line 511, Address: 0x2e381c, Func Offset: 0x65c
	// Line 514, Address: 0x2e3834, Func Offset: 0x674
	// Line 511, Address: 0x2e3838, Func Offset: 0x678
	// Line 513, Address: 0x2e3844, Func Offset: 0x684
	// Line 514, Address: 0x2e3854, Func Offset: 0x694
	// Line 513, Address: 0x2e3858, Func Offset: 0x698
	// Line 514, Address: 0x2e385c, Func Offset: 0x69c
	// Line 519, Address: 0x2e3880, Func Offset: 0x6c0
	// Line 522, Address: 0x2e388c, Func Offset: 0x6cc
	// Line 526, Address: 0x2e3898, Func Offset: 0x6d8
	// Line 522, Address: 0x2e389c, Func Offset: 0x6dc
	// Line 526, Address: 0x2e38a4, Func Offset: 0x6e4
	// Line 522, Address: 0x2e38b0, Func Offset: 0x6f0
	// Line 526, Address: 0x2e38b4, Func Offset: 0x6f4
	// Line 531, Address: 0x2e38d8, Func Offset: 0x718
	// Line 534, Address: 0x2e38dc, Func Offset: 0x71c
	// Line 532, Address: 0x2e38e0, Func Offset: 0x720
	// Line 534, Address: 0x2e38e4, Func Offset: 0x724
	// Line 533, Address: 0x2e38e8, Func Offset: 0x728
	// Line 534, Address: 0x2e38f4, Func Offset: 0x734
	// Line 535, Address: 0x2e3910, Func Offset: 0x750
	// Line 534, Address: 0x2e3914, Func Offset: 0x754
	// Line 541, Address: 0x2e3918, Func Offset: 0x758
	// Line 534, Address: 0x2e3924, Func Offset: 0x764
	// Line 535, Address: 0x2e3938, Func Offset: 0x778
	// Line 537, Address: 0x2e3948, Func Offset: 0x788
	// Line 538, Address: 0x2e3950, Func Offset: 0x790
	// Line 541, Address: 0x2e395c, Func Offset: 0x79c
	// Line 543, Address: 0x2e3974, Func Offset: 0x7b4
	// Line 544, Address: 0x2e3978, Func Offset: 0x7b8
	// Line 545, Address: 0x2e3980, Func Offset: 0x7c0
	// Line 546, Address: 0x2e3988, Func Offset: 0x7c8
	// Line 548, Address: 0x2e398c, Func Offset: 0x7cc
	// Line 551, Address: 0x2e39b4, Func Offset: 0x7f4
	// Line 558, Address: 0x2e39b8, Func Offset: 0x7f8
	// Line 559, Address: 0x2e39c4, Func Offset: 0x804
	// Line 563, Address: 0x2e39d4, Func Offset: 0x814
	// Line 564, Address: 0x2e39d8, Func Offset: 0x818
	// Line 563, Address: 0x2e39dc, Func Offset: 0x81c
	// Line 564, Address: 0x2e39f4, Func Offset: 0x834
	// Line 565, Address: 0x2e3a00, Func Offset: 0x840
	// Line 566, Address: 0x2e3a04, Func Offset: 0x844
	// Line 565, Address: 0x2e3a08, Func Offset: 0x848
	// Line 566, Address: 0x2e3a10, Func Offset: 0x850
	// Line 567, Address: 0x2e3a1c, Func Offset: 0x85c
	// Line 568, Address: 0x2e3a30, Func Offset: 0x870
	// Line 569, Address: 0x2e3a40, Func Offset: 0x880
	// Line 570, Address: 0x2e3a48, Func Offset: 0x888
	// Line 574, Address: 0x2e3a58, Func Offset: 0x898
	// Line 575, Address: 0x2e3a70, Func Offset: 0x8b0
	// Line 576, Address: 0x2e3a7c, Func Offset: 0x8bc
	// Line 577, Address: 0x2e3a84, Func Offset: 0x8c4
	// Line 578, Address: 0x2e3a88, Func Offset: 0x8c8
	// Line 579, Address: 0x2e3a94, Func Offset: 0x8d4
	// Line 581, Address: 0x2e3a9c, Func Offset: 0x8dc
	// Line 588, Address: 0x2e3ab8, Func Offset: 0x8f8
	// Line 591, Address: 0x2e3ac4, Func Offset: 0x904
	// Line 588, Address: 0x2e3acc, Func Offset: 0x90c
	// Line 589, Address: 0x2e3ae4, Func Offset: 0x924
	// Line 590, Address: 0x2e3b08, Func Offset: 0x948
	// Line 591, Address: 0x2e3b2c, Func Offset: 0x96c
	// Line 592, Address: 0x2e3b38, Func Offset: 0x978
	// Line 597, Address: 0x2e3b88, Func Offset: 0x9c8
	// Line 598, Address: 0x2e3b9c, Func Offset: 0x9dc
	// Line 600, Address: 0x2e3bb8, Func Offset: 0x9f8
	// Line 599, Address: 0x2e3bc0, Func Offset: 0xa00
	// Line 603, Address: 0x2e3bc4, Func Offset: 0xa04
	// Line 599, Address: 0x2e3bc8, Func Offset: 0xa08
	// Line 600, Address: 0x2e3bcc, Func Offset: 0xa0c
	// Line 603, Address: 0x2e3c34, Func Offset: 0xa74
	// Line 604, Address: 0x2e3c40, Func Offset: 0xa80
	// Line 605, Address: 0x2e3c44, Func Offset: 0xa84
	// Line 604, Address: 0x2e3c48, Func Offset: 0xa88
	// Line 605, Address: 0x2e3c50, Func Offset: 0xa90
	// Line 606, Address: 0x2e3c5c, Func Offset: 0xa9c
	// Line 607, Address: 0x2e3c70, Func Offset: 0xab0
	// Line 608, Address: 0x2e3c80, Func Offset: 0xac0
	// Line 609, Address: 0x2e3c88, Func Offset: 0xac8
	// Line 614, Address: 0x2e3c98, Func Offset: 0xad8
	// Line 617, Address: 0x2e3ca8, Func Offset: 0xae8
	// Line 619, Address: 0x2e3cbc, Func Offset: 0xafc
	// Line 617, Address: 0x2e3cc0, Func Offset: 0xb00
	// Line 618, Address: 0x2e3cc4, Func Offset: 0xb04
	// Line 619, Address: 0x2e3cd0, Func Offset: 0xb10
	// Line 621, Address: 0x2e3cd8, Func Offset: 0xb18
	// Line 622, Address: 0x2e3ce4, Func Offset: 0xb24
	// Line 624, Address: 0x2e3cec, Func Offset: 0xb2c
	// Line 627, Address: 0x2e3d08, Func Offset: 0xb48
	// Line 632, Address: 0x2e3d1c, Func Offset: 0xb5c
	// Line 635, Address: 0x2e3d20, Func Offset: 0xb60
	// Line 638, Address: 0x2e3d2c, Func Offset: 0xb6c
	// Line 645, Address: 0x2e3d8c, Func Offset: 0xbcc
	// Line 646, Address: 0x2e3da4, Func Offset: 0xbe4
	// Line 647, Address: 0x2e3e14, Func Offset: 0xc54
	// Line 649, Address: 0x2e3e44, Func Offset: 0xc84
	// Line 651, Address: 0x2e3e48, Func Offset: 0xc88
	// Line 649, Address: 0x2e3e4c, Func Offset: 0xc8c
	// Line 651, Address: 0x2e3e54, Func Offset: 0xc94
	// Line 655, Address: 0x2e3e64, Func Offset: 0xca4
	// Line 654, Address: 0x2e3e68, Func Offset: 0xca8
	// Line 655, Address: 0x2e3e6c, Func Offset: 0xcac
	// Line 656, Address: 0x2e3e84, Func Offset: 0xcc4
	// Line 657, Address: 0x2e3e90, Func Offset: 0xcd0
	// Line 659, Address: 0x2e3ea0, Func Offset: 0xce0
	// Line 660, Address: 0x2e3eec, Func Offset: 0xd2c
	// Line 662, Address: 0x2e3ef4, Func Offset: 0xd34
	// Line 665, Address: 0x2e3f00, Func Offset: 0xd40
	// Line 666, Address: 0x2e3f04, Func Offset: 0xd44
	// Line 668, Address: 0x2e3f10, Func Offset: 0xd50
	// Line 672, Address: 0x2e3f18, Func Offset: 0xd58
	// Line 674, Address: 0x2e3f24, Func Offset: 0xd64
	// Line 675, Address: 0x2e3f48, Func Offset: 0xd88
	// Line 679, Address: 0x2e3f5c, Func Offset: 0xd9c
	// Line 684, Address: 0x2e3f78, Func Offset: 0xdb8
	// Line 685, Address: 0x2e3f84, Func Offset: 0xdc4
	// Line 687, Address: 0x2e3f8c, Func Offset: 0xdcc
	// Line 688, Address: 0x2e3ffc, Func Offset: 0xe3c
	// Line 690, Address: 0x2e4078, Func Offset: 0xeb8
	// Line 691, Address: 0x2e4088, Func Offset: 0xec8
	// Line 692, Address: 0x2e4098, Func Offset: 0xed8
	// Line 695, Address: 0x2e40c0, Func Offset: 0xf00
	// Line 697, Address: 0x2e40e4, Func Offset: 0xf24
	// Line 696, Address: 0x2e40e8, Func Offset: 0xf28
	// Line 697, Address: 0x2e40f0, Func Offset: 0xf30
	// Line 698, Address: 0x2e40fc, Func Offset: 0xf3c
	// Line 699, Address: 0x2e4104, Func Offset: 0xf44
	// Line 700, Address: 0x2e410c, Func Offset: 0xf4c
	// Line 701, Address: 0x2e4110, Func Offset: 0xf50
	// Line 702, Address: 0x2e4118, Func Offset: 0xf58
	// Line 704, Address: 0x2e4120, Func Offset: 0xf60
	// Line 705, Address: 0x2e4128, Func Offset: 0xf68
	// Line 706, Address: 0x2e4130, Func Offset: 0xf70
	// Line 724, Address: 0x2e414c, Func Offset: 0xf8c
	// Line 706, Address: 0x2e4150, Func Offset: 0xf90
	// Line 724, Address: 0x2e4154, Func Offset: 0xf94
	// Line 706, Address: 0x2e415c, Func Offset: 0xf9c
	// Line 724, Address: 0x2e4164, Func Offset: 0xfa4
	// Line 712, Address: 0x2e4168, Func Offset: 0xfa8
	// Line 713, Address: 0x2e416c, Func Offset: 0xfac
	// Line 724, Address: 0x2e4170, Func Offset: 0xfb0
	// Line 712, Address: 0x2e4174, Func Offset: 0xfb4
	// Line 713, Address: 0x2e4178, Func Offset: 0xfb8
	// Line 714, Address: 0x2e417c, Func Offset: 0xfbc
	// Line 712, Address: 0x2e418c, Func Offset: 0xfcc
	// Line 715, Address: 0x2e4190, Func Offset: 0xfd0
	// Line 714, Address: 0x2e4198, Func Offset: 0xfd8
	// Line 715, Address: 0x2e419c, Func Offset: 0xfdc
	// Line 717, Address: 0x2e41a4, Func Offset: 0xfe4
	// Line 724, Address: 0x2e41a8, Func Offset: 0xfe8
	// Line 725, Address: 0x2e41c0, Func Offset: 0x1000
	// Line 718, Address: 0x2e41cc, Func Offset: 0x100c
	// Line 725, Address: 0x2e41d0, Func Offset: 0x1010
	// Line 719, Address: 0x2e41e0, Func Offset: 0x1020
	// Line 725, Address: 0x2e41e4, Func Offset: 0x1024
	// Line 726, Address: 0x2e41f4, Func Offset: 0x1034
	// Line 727, Address: 0x2e421c, Func Offset: 0x105c
	// Line 729, Address: 0x2e4224, Func Offset: 0x1064
	// Line 731, Address: 0x2e4234, Func Offset: 0x1074
	// Line 734, Address: 0x2e4238, Func Offset: 0x1078
	// Line 738, Address: 0x2e423c, Func Offset: 0x107c
	// Line 739, Address: 0x2e4240, Func Offset: 0x1080
	// Line 734, Address: 0x2e4244, Func Offset: 0x1084
	// Line 735, Address: 0x2e425c, Func Offset: 0x109c
	// Line 736, Address: 0x2e4260, Func Offset: 0x10a0
	// Line 737, Address: 0x2e4264, Func Offset: 0x10a4
	// Line 739, Address: 0x2e4268, Func Offset: 0x10a8
	// Line 746, Address: 0x2e428c, Func Offset: 0x10cc
	// Line 741, Address: 0x2e4290, Func Offset: 0x10d0
	// Line 746, Address: 0x2e4294, Func Offset: 0x10d4
	// Line 744, Address: 0x2e4298, Func Offset: 0x10d8
	// Line 747, Address: 0x2e429c, Func Offset: 0x10dc
	// Line 744, Address: 0x2e42a4, Func Offset: 0x10e4
	// Line 748, Address: 0x2e42a8, Func Offset: 0x10e8
	// Line 746, Address: 0x2e42b0, Func Offset: 0x10f0
	// Line 747, Address: 0x2e42b4, Func Offset: 0x10f4
	// Line 746, Address: 0x2e42b8, Func Offset: 0x10f8
	// Line 744, Address: 0x2e42bc, Func Offset: 0x10fc
	// Line 747, Address: 0x2e42c8, Func Offset: 0x1108
	// Line 744, Address: 0x2e42cc, Func Offset: 0x110c
	// Line 748, Address: 0x2e42d0, Func Offset: 0x1110
	// Line 751, Address: 0x2e42d4, Func Offset: 0x1114
	// Line 748, Address: 0x2e42d8, Func Offset: 0x1118
	// Line 744, Address: 0x2e42dc, Func Offset: 0x111c
	// Line 755, Address: 0x2e42e0, Func Offset: 0x1120
	// Line 750, Address: 0x2e42e4, Func Offset: 0x1124
	// Line 748, Address: 0x2e42ec, Func Offset: 0x112c
	// Line 751, Address: 0x2e42f0, Func Offset: 0x1130
	// Line 752, Address: 0x2e42f4, Func Offset: 0x1134
	// Line 754, Address: 0x2e42f8, Func Offset: 0x1138
	// Line 752, Address: 0x2e42fc, Func Offset: 0x113c
	// Line 754, Address: 0x2e4300, Func Offset: 0x1140
	// Line 756, Address: 0x2e4304, Func Offset: 0x1144
	// Line 755, Address: 0x2e4308, Func Offset: 0x1148
	// Line 756, Address: 0x2e430c, Func Offset: 0x114c
	// Line 758, Address: 0x2e4310, Func Offset: 0x1150
	// Line 748, Address: 0x2e4318, Func Offset: 0x1158
	// Line 758, Address: 0x2e431c, Func Offset: 0x115c
	// Line 759, Address: 0x2e4328, Func Offset: 0x1168
	// Line 760, Address: 0x2e433c, Func Offset: 0x117c
	// Line 761, Address: 0x2e434c, Func Offset: 0x118c
	// Line 767, Address: 0x2e4354, Func Offset: 0x1194
	// Line 766, Address: 0x2e4358, Func Offset: 0x1198
	// Line 767, Address: 0x2e435c, Func Offset: 0x119c
	// Line 768, Address: 0x2e4360, Func Offset: 0x11a0
	// Line 767, Address: 0x2e4364, Func Offset: 0x11a4
	// Line 768, Address: 0x2e4368, Func Offset: 0x11a8
	// Line 767, Address: 0x2e436c, Func Offset: 0x11ac
	// Line 769, Address: 0x2e43a8, Func Offset: 0x11e8
	// Line 772, Address: 0x2e43b0, Func Offset: 0x11f0
	// Line 774, Address: 0x2e43c0, Func Offset: 0x1200
	// Line 773, Address: 0x2e43d0, Func Offset: 0x1210
	// Line 774, Address: 0x2e43d4, Func Offset: 0x1214
	// Line 781, Address: 0x2e43e4, Func Offset: 0x1224
	// Line 780, Address: 0x2e43e8, Func Offset: 0x1228
	// Line 781, Address: 0x2e43ec, Func Offset: 0x122c
	// Line 783, Address: 0x2e43f0, Func Offset: 0x1230
	// Line 780, Address: 0x2e43f4, Func Offset: 0x1234
	// Line 783, Address: 0x2e43f8, Func Offset: 0x1238
	// Line 782, Address: 0x2e43fc, Func Offset: 0x123c
	// Line 780, Address: 0x2e4404, Func Offset: 0x1244
	// Line 781, Address: 0x2e4414, Func Offset: 0x1254
	// Line 782, Address: 0x2e442c, Func Offset: 0x126c
	// Line 783, Address: 0x2e4440, Func Offset: 0x1280
	// Line 786, Address: 0x2e4448, Func Offset: 0x1288
	// Line 789, Address: 0x2e4460, Func Offset: 0x12a0
	// Line 790, Address: 0x2e446c, Func Offset: 0x12ac
	// Line 791, Address: 0x2e4470, Func Offset: 0x12b0
	// Line 792, Address: 0x2e4518, Func Offset: 0x1358
	// Line 795, Address: 0x2e451c, Func Offset: 0x135c
	// Line 792, Address: 0x2e4520, Func Offset: 0x1360
	// Line 795, Address: 0x2e4528, Func Offset: 0x1368
	// Line 797, Address: 0x2e4534, Func Offset: 0x1374
	// Line 796, Address: 0x2e4538, Func Offset: 0x1378
	// Line 799, Address: 0x2e453c, Func Offset: 0x137c
	// Line 800, Address: 0x2e4548, Func Offset: 0x1388
	// Line 803, Address: 0x2e454c, Func Offset: 0x138c
	// Line 804, Address: 0x2e4554, Func Offset: 0x1394
	// Line 805, Address: 0x2e4568, Func Offset: 0x13a8
	// Line 809, Address: 0x2e4578, Func Offset: 0x13b8
	// Line 810, Address: 0x2e4580, Func Offset: 0x13c0
	// Line 811, Address: 0x2e45a4, Func Offset: 0x13e4
	// Line 812, Address: 0x2e45b4, Func Offset: 0x13f4
	// Line 813, Address: 0x2e45bc, Func Offset: 0x13fc
	// Line 814, Address: 0x2e45c4, Func Offset: 0x1404
	// Line 815, Address: 0x2e45d0, Func Offset: 0x1410
	// Line 818, Address: 0x2e45dc, Func Offset: 0x141c
	// Line 821, Address: 0x2e45f0, Func Offset: 0x1430
	// Line 818, Address: 0x2e45f4, Func Offset: 0x1434
	// Line 821, Address: 0x2e45f8, Func Offset: 0x1438
	// Line 819, Address: 0x2e45fc, Func Offset: 0x143c
	// Line 820, Address: 0x2e4608, Func Offset: 0x1448
	// Line 821, Address: 0x2e460c, Func Offset: 0x144c
	// Line 822, Address: 0x2e4614, Func Offset: 0x1454
	// Line 823, Address: 0x2e4618, Func Offset: 0x1458
	// Line 824, Address: 0x2e4624, Func Offset: 0x1464
	// Line 826, Address: 0x2e4628, Func Offset: 0x1468
	// Line 828, Address: 0x2e4640, Func Offset: 0x1480
	// Line 830, Address: 0x2e4648, Func Offset: 0x1488
	// Line 834, Address: 0x2e46f0, Func Offset: 0x1530
	// Line 836, Address: 0x2e4798, Func Offset: 0x15d8
	// Line 839, Address: 0x2e47b0, Func Offset: 0x15f0
	// Line 840, Address: 0x2e47b8, Func Offset: 0x15f8
	// Line 841, Address: 0x2e47cc, Func Offset: 0x160c
	// Line 842, Address: 0x2e47d4, Func Offset: 0x1614
	// Line 846, Address: 0x2e47e8, Func Offset: 0x1628
	// Line 847, Address: 0x2e47ec, Func Offset: 0x162c
	// Line 850, Address: 0x2e47f4, Func Offset: 0x1634
	// Line 856, Address: 0x2e4840, Func Offset: 0x1680
	// Line 857, Address: 0x2e484c, Func Offset: 0x168c
	// Line 858, Address: 0x2e485c, Func Offset: 0x169c
	// Line 861, Address: 0x2e4874, Func Offset: 0x16b4
	// Line 864, Address: 0x2e487c, Func Offset: 0x16bc
	// Line 867, Address: 0x2e4884, Func Offset: 0x16c4
	// Line 870, Address: 0x2e48a0, Func Offset: 0x16e0
	// Line 871, Address: 0x2e48ac, Func Offset: 0x16ec
	// Line 872, Address: 0x2e48bc, Func Offset: 0x16fc
	// Line 874, Address: 0x2e48d0, Func Offset: 0x1710
	// Line 875, Address: 0x2e48d8, Func Offset: 0x1718
	// Line 881, Address: 0x2e48dc, Func Offset: 0x171c
	// Line 878, Address: 0x2e48e0, Func Offset: 0x1720
	// Line 881, Address: 0x2e48e4, Func Offset: 0x1724
	// Line 882, Address: 0x2e48f8, Func Offset: 0x1738
	// Line 883, Address: 0x2e48fc, Func Offset: 0x173c
	// Line 884, Address: 0x2e4908, Func Offset: 0x1748
	// Line 888, Address: 0x2e490c, Func Offset: 0x174c
	// Line 891, Address: 0x2e4918, Func Offset: 0x1758
	// Line 893, Address: 0x2e492c, Func Offset: 0x176c
	// Line 894, Address: 0x2e4938, Func Offset: 0x1778
	// Line 896, Address: 0x2e493c, Func Offset: 0x177c
	// Line 897, Address: 0x2e4944, Func Offset: 0x1784
	// Line 901, Address: 0x2e494c, Func Offset: 0x178c
	// Line 902, Address: 0x2e495c, Func Offset: 0x179c
	// Line 904, Address: 0x2e4960, Func Offset: 0x17a0
	// Func End, Address: 0x2e4998, Func Offset: 0x17d8
}

// Recurse_TranslateStack__FP4xEntP5xVec3
// Start address: 0x2e49a0
void Recurse_TranslateStack(xEnt* ent, xVec3* delta)
{
	uint32 i;
	// Line 332, Address: 0x2e49a0, Func Offset: 0
	// Line 334, Address: 0x2e49d4, Func Offset: 0x34
	// Line 336, Address: 0x2e49d8, Func Offset: 0x38
	// Line 334, Address: 0x2e49e0, Func Offset: 0x40
	// Line 336, Address: 0x2e49e4, Func Offset: 0x44
	// Line 337, Address: 0x2e49fc, Func Offset: 0x5c
	// Line 347, Address: 0x2e4a1c, Func Offset: 0x7c
	// Line 348, Address: 0x2e4a40, Func Offset: 0xa0
	// Line 349, Address: 0x2e4a48, Func Offset: 0xa8
	// Line 340, Address: 0x2e4a58, Func Offset: 0xb8
	// Line 349, Address: 0x2e4a5c, Func Offset: 0xbc
	// Line 340, Address: 0x2e4a94, Func Offset: 0xf4
	// Line 349, Address: 0x2e4a98, Func Offset: 0xf8
	// Line 343, Address: 0x2e4aec, Func Offset: 0x14c
	// Line 349, Address: 0x2e4af0, Func Offset: 0x150
	// Line 344, Address: 0x2e4b0c, Func Offset: 0x16c
	// Line 349, Address: 0x2e4b10, Func Offset: 0x170
	// Line 345, Address: 0x2e4b2c, Func Offset: 0x18c
	// Line 349, Address: 0x2e4b38, Func Offset: 0x198
	// Line 340, Address: 0x2e4b40, Func Offset: 0x1a0
	// Line 349, Address: 0x2e4b44, Func Offset: 0x1a4
	// Line 340, Address: 0x2e4b64, Func Offset: 0x1c4
	// Line 349, Address: 0x2e4b68, Func Offset: 0x1c8
	// Line 340, Address: 0x2e4bbc, Func Offset: 0x21c
	// Line 349, Address: 0x2e4bc0, Func Offset: 0x220
	// Line 340, Address: 0x2e4bdc, Func Offset: 0x23c
	// Line 349, Address: 0x2e4be0, Func Offset: 0x240
	// Line 340, Address: 0x2e4bfc, Func Offset: 0x25c
	// Line 349, Address: 0x2e4c08, Func Offset: 0x268
	// Line 340, Address: 0x2e4c10, Func Offset: 0x270
	// Line 349, Address: 0x2e4c14, Func Offset: 0x274
	// Line 340, Address: 0x2e4c80, Func Offset: 0x2e0
	// Line 349, Address: 0x2e4c84, Func Offset: 0x2e4
	// Line 340, Address: 0x2e4c9c, Func Offset: 0x2fc
	// Line 349, Address: 0x2e4ca0, Func Offset: 0x300
	// Line 340, Address: 0x2e4cb8, Func Offset: 0x318
	// Line 349, Address: 0x2e4cc8, Func Offset: 0x328
	// Line 340, Address: 0x2e4cd0, Func Offset: 0x330
	// Line 349, Address: 0x2e4cd4, Func Offset: 0x334
	// Line 340, Address: 0x2e4d40, Func Offset: 0x3a0
	// Line 349, Address: 0x2e4d44, Func Offset: 0x3a4
	// Line 340, Address: 0x2e4d5c, Func Offset: 0x3bc
	// Line 349, Address: 0x2e4d60, Func Offset: 0x3c0
	// Line 340, Address: 0x2e4d78, Func Offset: 0x3d8
	// Line 349, Address: 0x2e4d88, Func Offset: 0x3e8
	// Line 340, Address: 0x2e4d90, Func Offset: 0x3f0
	// Line 349, Address: 0x2e4d94, Func Offset: 0x3f4
	// Line 340, Address: 0x2e4e00, Func Offset: 0x460
	// Line 349, Address: 0x2e4e04, Func Offset: 0x464
	// Line 340, Address: 0x2e4e1c, Func Offset: 0x47c
	// Line 349, Address: 0x2e4e20, Func Offset: 0x480
	// Line 340, Address: 0x2e4e38, Func Offset: 0x498
	// Line 349, Address: 0x2e4e48, Func Offset: 0x4a8
	// Line 340, Address: 0x2e4e50, Func Offset: 0x4b0
	// Line 349, Address: 0x2e4e54, Func Offset: 0x4b4
	// Line 340, Address: 0x2e4ec0, Func Offset: 0x520
	// Line 349, Address: 0x2e4ec4, Func Offset: 0x524
	// Line 340, Address: 0x2e4edc, Func Offset: 0x53c
	// Line 349, Address: 0x2e4ee0, Func Offset: 0x540
	// Line 340, Address: 0x2e4ef8, Func Offset: 0x558
	// Line 349, Address: 0x2e4f08, Func Offset: 0x568
	// Line 340, Address: 0x2e4f10, Func Offset: 0x570
	// Line 349, Address: 0x2e4f14, Func Offset: 0x574
	// Line 340, Address: 0x2e4f80, Func Offset: 0x5e0
	// Line 349, Address: 0x2e4f84, Func Offset: 0x5e4
	// Line 340, Address: 0x2e4f9c, Func Offset: 0x5fc
	// Line 349, Address: 0x2e4fa0, Func Offset: 0x600
	// Line 340, Address: 0x2e4fb8, Func Offset: 0x618
	// Line 349, Address: 0x2e4fc8, Func Offset: 0x628
	// Line 340, Address: 0x2e4fd0, Func Offset: 0x630
	// Line 349, Address: 0x2e4fd4, Func Offset: 0x634
	// Line 340, Address: 0x2e5038, Func Offset: 0x698
	// Line 349, Address: 0x2e503c, Func Offset: 0x69c
	// Line 340, Address: 0x2e5054, Func Offset: 0x6b4
	// Line 349, Address: 0x2e5058, Func Offset: 0x6b8
	// Line 340, Address: 0x2e5070, Func Offset: 0x6d0
	// Line 349, Address: 0x2e5080, Func Offset: 0x6e0
	// Line 340, Address: 0x2e50a0, Func Offset: 0x700
	// Line 349, Address: 0x2e50a4, Func Offset: 0x704
	// Line 340, Address: 0x2e50bc, Func Offset: 0x71c
	// Line 349, Address: 0x2e50c0, Func Offset: 0x720
	// Line 340, Address: 0x2e50d8, Func Offset: 0x738
	// Line 349, Address: 0x2e50e8, Func Offset: 0x748
	// Func End, Address: 0x2e5118, Func Offset: 0x778
}

// zFruit_Update__FP4xEntP6xScenef
// Start address: 0x2e5120
void zFruit_Update(xEnt* ent, xScene* sc, float32 dt)
{
	uint32 i;
	zThrownStruct* thrown;
	zShrapnelAsset* shrap;
	// Line 234, Address: 0x2e5120, Func Offset: 0
	// Line 236, Address: 0x2e5128, Func Offset: 0x8
	// Line 234, Address: 0x2e512c, Func Offset: 0xc
	// Line 236, Address: 0x2e514c, Func Offset: 0x2c
	// Line 239, Address: 0x2e5158, Func Offset: 0x38
	// Line 251, Address: 0x2e5174, Func Offset: 0x54
	// Line 254, Address: 0x2e5188, Func Offset: 0x68
	// Line 251, Address: 0x2e518c, Func Offset: 0x6c
	// Line 254, Address: 0x2e5190, Func Offset: 0x70
	// Line 251, Address: 0x2e5198, Func Offset: 0x78
	// Line 252, Address: 0x2e51a4, Func Offset: 0x84
	// Line 253, Address: 0x2e51b0, Func Offset: 0x90
	// Line 254, Address: 0x2e51bc, Func Offset: 0x9c
	// Line 260, Address: 0x2e51cc, Func Offset: 0xac
	// Line 261, Address: 0x2e51dc, Func Offset: 0xbc
	// Line 262, Address: 0x2e51ec, Func Offset: 0xcc
	// Line 240, Address: 0x2e51f8, Func Offset: 0xd8
	// Line 262, Address: 0x2e51fc, Func Offset: 0xdc
	// Line 240, Address: 0x2e5200, Func Offset: 0xe0
	// Line 262, Address: 0x2e5208, Func Offset: 0xe8
	// Line 240, Address: 0x2e522c, Func Offset: 0x10c
	// Line 262, Address: 0x2e524c, Func Offset: 0x12c
	// Line 240, Address: 0x2e5258, Func Offset: 0x138
	// Line 262, Address: 0x2e525c, Func Offset: 0x13c
	// Line 247, Address: 0x2e5268, Func Offset: 0x148
	// Line 262, Address: 0x2e5274, Func Offset: 0x154
	// Line 244, Address: 0x2e527c, Func Offset: 0x15c
	// Line 262, Address: 0x2e5284, Func Offset: 0x164
	// Line 245, Address: 0x2e528c, Func Offset: 0x16c
	// Line 262, Address: 0x2e5294, Func Offset: 0x174
	// Line 268, Address: 0x2e52a8, Func Offset: 0x188
	// Line 269, Address: 0x2e52c0, Func Offset: 0x1a0
	// Line 271, Address: 0x2e52cc, Func Offset: 0x1ac
	// Line 273, Address: 0x2e52e0, Func Offset: 0x1c0
	// Line 276, Address: 0x2e52e8, Func Offset: 0x1c8
	// Line 273, Address: 0x2e52ec, Func Offset: 0x1cc
	// Line 276, Address: 0x2e52f8, Func Offset: 0x1d8
	// Line 273, Address: 0x2e52fc, Func Offset: 0x1dc
	// Line 276, Address: 0x2e5300, Func Offset: 0x1e0
	// Line 277, Address: 0x2e5308, Func Offset: 0x1e8
	// Line 280, Address: 0x2e5318, Func Offset: 0x1f8
	// Line 283, Address: 0x2e5330, Func Offset: 0x210
	// Line 325, Address: 0x2e533c, Func Offset: 0x21c
	// Line 286, Address: 0x2e53a4, Func Offset: 0x284
	// Line 325, Address: 0x2e53a8, Func Offset: 0x288
	// Line 286, Address: 0x2e53b8, Func Offset: 0x298
	// Line 325, Address: 0x2e53bc, Func Offset: 0x29c
	// Line 286, Address: 0x2e53d0, Func Offset: 0x2b0
	// Line 325, Address: 0x2e53d4, Func Offset: 0x2b4
	// Line 286, Address: 0x2e53e4, Func Offset: 0x2c4
	// Line 325, Address: 0x2e53e8, Func Offset: 0x2c8
	// Line 301, Address: 0x2e5450, Func Offset: 0x330
	// Line 325, Address: 0x2e5454, Func Offset: 0x334
	// Line 306, Address: 0x2e5464, Func Offset: 0x344
	// Line 325, Address: 0x2e5480, Func Offset: 0x360
	// Line 307, Address: 0x2e548c, Func Offset: 0x36c
	// Line 325, Address: 0x2e5494, Func Offset: 0x374
	// Line 310, Address: 0x2e54ac, Func Offset: 0x38c
	// Line 325, Address: 0x2e54b0, Func Offset: 0x390
	// Line 311, Address: 0x2e54b8, Func Offset: 0x398
	// Line 325, Address: 0x2e54bc, Func Offset: 0x39c
	// Line 318, Address: 0x2e54ec, Func Offset: 0x3cc
	// Line 325, Address: 0x2e54f0, Func Offset: 0x3d0
	// Line 322, Address: 0x2e54fc, Func Offset: 0x3dc
	// Line 325, Address: 0x2e5500, Func Offset: 0x3e0
	// Line 324, Address: 0x2e5514, Func Offset: 0x3f4
	// Line 325, Address: 0x2e551c, Func Offset: 0x3fc
	// Line 286, Address: 0x2e5520, Func Offset: 0x400
	// Line 325, Address: 0x2e5528, Func Offset: 0x408
	// Line 286, Address: 0x2e5530, Func Offset: 0x410
	// Line 325, Address: 0x2e5548, Func Offset: 0x428
	// Line 328, Address: 0x2e55d8, Func Offset: 0x4b8
	// Func End, Address: 0x2e55f4, Func Offset: 0x4d4
}

// zThrown_Setup__FP6zScene
// Start address: 0x2e5600
void zThrown_Setup(zScene* sc)
{
	ThrowableStats* stats;
	int8 tmpstr[256];
	int32 i;
	xEnt* myent;
	// Line 142, Address: 0x2e5600, Func Offset: 0
	// Line 144, Address: 0x2e5604, Func Offset: 0x4
	// Line 142, Address: 0x2e5608, Func Offset: 0x8
	// Line 149, Address: 0x2e560c, Func Offset: 0xc
	// Line 142, Address: 0x2e5610, Func Offset: 0x10
	// Line 144, Address: 0x2e561c, Func Offset: 0x1c
	// Line 153, Address: 0x2e5628, Func Offset: 0x28
	// Line 147, Address: 0x2e5630, Func Offset: 0x30
	// Line 144, Address: 0x2e5640, Func Offset: 0x40
	// Line 150, Address: 0x2e5644, Func Offset: 0x44
	// Line 147, Address: 0x2e5648, Func Offset: 0x48
	// Line 150, Address: 0x2e564c, Func Offset: 0x4c
	// Line 147, Address: 0x2e5650, Func Offset: 0x50
	// Line 149, Address: 0x2e5658, Func Offset: 0x58
	// Line 150, Address: 0x2e565c, Func Offset: 0x5c
	// Line 149, Address: 0x2e5660, Func Offset: 0x60
	// Line 150, Address: 0x2e5664, Func Offset: 0x64
	// Line 154, Address: 0x2e5668, Func Offset: 0x68
	// Line 150, Address: 0x2e566c, Func Offset: 0x6c
	// Line 154, Address: 0x2e5670, Func Offset: 0x70
	// Line 150, Address: 0x2e5674, Func Offset: 0x74
	// Line 154, Address: 0x2e567c, Func Offset: 0x7c
	// Line 156, Address: 0x2e5684, Func Offset: 0x84
	// Line 157, Address: 0x2e5690, Func Offset: 0x90
	// Line 158, Address: 0x2e569c, Func Offset: 0x9c
	// Line 159, Address: 0x2e56ac, Func Offset: 0xac
	// Line 162, Address: 0x2e56b8, Func Offset: 0xb8
	// Line 165, Address: 0x2e56c4, Func Offset: 0xc4
	// Line 168, Address: 0x2e56c8, Func Offset: 0xc8
	// Line 169, Address: 0x2e56cc, Func Offset: 0xcc
	// Line 171, Address: 0x2e56d8, Func Offset: 0xd8
	// Line 188, Address: 0x2e56e8, Func Offset: 0xe8
	// Line 173, Address: 0x2e56f0, Func Offset: 0xf0
	// Line 188, Address: 0x2e56f4, Func Offset: 0xf4
	// Line 173, Address: 0x2e56fc, Func Offset: 0xfc
	// Line 172, Address: 0x2e5700, Func Offset: 0x100
	// Line 173, Address: 0x2e5710, Func Offset: 0x110
	// Line 187, Address: 0x2e5720, Func Offset: 0x120
	// Line 188, Address: 0x2e5738, Func Offset: 0x138
	// Line 163, Address: 0x2e5748, Func Offset: 0x148
	// Line 188, Address: 0x2e574c, Func Offset: 0x14c
	// Line 164, Address: 0x2e5754, Func Offset: 0x154
	// Line 173, Address: 0x2e575c, Func Offset: 0x15c
	// Line 188, Address: 0x2e5760, Func Offset: 0x160
	// Line 177, Address: 0x2e5774, Func Offset: 0x174
	// Line 188, Address: 0x2e5778, Func Offset: 0x178
	// Line 180, Address: 0x2e57ac, Func Offset: 0x1ac
	// Line 188, Address: 0x2e57b0, Func Offset: 0x1b0
	// Line 181, Address: 0x2e57bc, Func Offset: 0x1bc
	// Line 182, Address: 0x2e57c0, Func Offset: 0x1c0
	// Line 188, Address: 0x2e57c8, Func Offset: 0x1c8
	// Func End, Address: 0x2e57dc, Func Offset: 0x1dc
}

