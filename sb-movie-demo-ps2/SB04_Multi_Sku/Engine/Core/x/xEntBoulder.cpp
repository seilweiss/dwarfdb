



void xBoulderGenerator_GenBoulder(xBoulderGenerator* bg);
void xBoulderGenerator_EventCB(xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget);
void xBoulderGenerator_Launch(xBoulderGenerator* bg, xVec3* pnt, float32 t);
int32 GetBoulderForGenerating(xBoulderGenerator* bg);
void xBoulderGenerator_Init(xBoulderGenerator* bg, xBoulderGeneratorAsset* asset);
void xBoulderGenerator_Init(xBase& data, xDynAsset& asset);
void RecurseChild(xBase* child, xEntBoulder** boulList, int32& currBoul);
void xEntBoulderEventCB(xBase* from, xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget);
void xEntBoulder_Reset(xEntBoulder* ent);
void xEntBoulder_Setup(xEntBoulder* ent);
void xEntBoulder_BubbleBowl(float32 multiplier);
void xEntBoulder_Kill(xEntBoulder* ent);
int32 xEntBoulder_KilledBySurface(xEntBoulder* ent);
void xEntBoulder_Update(xEntBoulder* ent, xScene* sc, float32 dt);
void xEntBoulder_RealBUpdate(xEnt* ent, xVec3* pos);
void xEntBoulder_BUpdate();
void xEntBoulder_AddForce(xEntBoulder* ent, xVec3* force);
void xEntBoulder_AddInstantForce(xEntBoulder* ent, xVec3* force);
void xEntBoulder_ApplyForces(xEntCollis* collis);
void xEntBoulder_Init(xEntBoulder* ent, xEntAsset* asset);
void xEntBoulder_Init(void* ent, void* asset);
void xEntBoulder_Render(xEnt* ent);

// xBoulderGenerator_GenBoulder__FP17xBoulderGenerator
// Start address: 0x3f1220
void xBoulderGenerator_GenBoulder(xBoulderGenerator* bg)
{
	int32 i;
	xEntBoulder* b;
	xEnt* genEnt;
	xEntBoulder* bb;
	xVec3 worldOffset;
	float32 p1c;
	float32 p2c;
	float32 nf;
	xVec3 perpRand;
	float32 randAng;
	float32 sclMag;
	// Line 1747, Address: 0x3f1220, Func Offset: 0
	// Line 1749, Address: 0x3f123c, Func Offset: 0x1c
	// Line 1750, Address: 0x3f1248, Func Offset: 0x28
	// Line 1755, Address: 0x3f1258, Func Offset: 0x38
	// Line 1756, Address: 0x3f1268, Func Offset: 0x48
	// Line 1757, Address: 0x3f1278, Func Offset: 0x58
	// Line 1758, Address: 0x3f129c, Func Offset: 0x7c
	// Line 1760, Address: 0x3f12a4, Func Offset: 0x84
	// Line 1762, Address: 0x3f12ac, Func Offset: 0x8c
	// Line 1760, Address: 0x3f12b0, Func Offset: 0x90
	// Line 1762, Address: 0x3f12b4, Func Offset: 0x94
	// Line 1765, Address: 0x3f12d0, Func Offset: 0xb0
	// Line 1766, Address: 0x3f12e8, Func Offset: 0xc8
	// Line 1767, Address: 0x3f12f0, Func Offset: 0xd0
	// Line 1772, Address: 0x3f1304, Func Offset: 0xe4
	// Line 1773, Address: 0x3f130c, Func Offset: 0xec
	// Line 1777, Address: 0x3f1314, Func Offset: 0xf4
	// Line 1778, Address: 0x3f1334, Func Offset: 0x114
	// Line 1780, Address: 0x3f1344, Func Offset: 0x124
	// Line 1782, Address: 0x3f1368, Func Offset: 0x148
	// Line 1785, Address: 0x3f1374, Func Offset: 0x154
	// Line 1786, Address: 0x3f1380, Func Offset: 0x160
	// Line 1788, Address: 0x3f139c, Func Offset: 0x17c
	// Line 1789, Address: 0x3f13a4, Func Offset: 0x184
	// Line 1791, Address: 0x3f13c8, Func Offset: 0x1a8
	// Line 1792, Address: 0x3f13e4, Func Offset: 0x1c4
	// Line 1791, Address: 0x3f13e8, Func Offset: 0x1c8
	// Line 1792, Address: 0x3f13ec, Func Offset: 0x1cc
	// Line 1797, Address: 0x3f1408, Func Offset: 0x1e8
	// Line 1792, Address: 0x3f140c, Func Offset: 0x1ec
	// Line 1797, Address: 0x3f1410, Func Offset: 0x1f0
	// Line 1800, Address: 0x3f1430, Func Offset: 0x210
	// Line 1802, Address: 0x3f144c, Func Offset: 0x22c
	// Line 1805, Address: 0x3f14a0, Func Offset: 0x280
	// Line 1806, Address: 0x3f14d0, Func Offset: 0x2b0
	// Line 1807, Address: 0x3f14d8, Func Offset: 0x2b8
	// Line 1809, Address: 0x3f150c, Func Offset: 0x2ec
	// Line 1810, Address: 0x3f1524, Func Offset: 0x304
	// Line 1812, Address: 0x3f15a0, Func Offset: 0x380
	// Line 1814, Address: 0x3f1614, Func Offset: 0x3f4
	// Line 1819, Address: 0x3f168c, Func Offset: 0x46c
	// Line 1820, Address: 0x3f16a4, Func Offset: 0x484
	// Line 1821, Address: 0x3f16c4, Func Offset: 0x4a4
	// Line 1824, Address: 0x3f1718, Func Offset: 0x4f8
	// Line 1826, Address: 0x3f1720, Func Offset: 0x500
	// Line 1830, Address: 0x3f1728, Func Offset: 0x508
	// Line 1832, Address: 0x3f175c, Func Offset: 0x53c
	// Line 1833, Address: 0x3f17a4, Func Offset: 0x584
	// Line 1835, Address: 0x3f17ec, Func Offset: 0x5cc
	// Line 1833, Address: 0x3f17f4, Func Offset: 0x5d4
	// Line 1834, Address: 0x3f1800, Func Offset: 0x5e0
	// Line 1835, Address: 0x3f180c, Func Offset: 0x5ec
	// Line 1834, Address: 0x3f1810, Func Offset: 0x5f0
	// Line 1835, Address: 0x3f1824, Func Offset: 0x604
	// Line 1838, Address: 0x3f1830, Func Offset: 0x610
	// Line 1840, Address: 0x3f1838, Func Offset: 0x618
	// Line 1839, Address: 0x3f183c, Func Offset: 0x61c
	// Line 1844, Address: 0x3f1840, Func Offset: 0x620
	// Line 1845, Address: 0x3f1854, Func Offset: 0x634
	// Line 1844, Address: 0x3f1860, Func Offset: 0x640
	// Line 1845, Address: 0x3f1868, Func Offset: 0x648
	// Line 1844, Address: 0x3f1878, Func Offset: 0x658
	// Line 1845, Address: 0x3f187c, Func Offset: 0x65c
	// Line 1846, Address: 0x3f188c, Func Offset: 0x66c
	// Line 1847, Address: 0x3f18d4, Func Offset: 0x6b4
	// Line 1846, Address: 0x3f18dc, Func Offset: 0x6bc
	// Line 1847, Address: 0x3f18e8, Func Offset: 0x6c8
	// Line 1846, Address: 0x3f18f0, Func Offset: 0x6d0
	// Line 1847, Address: 0x3f18f4, Func Offset: 0x6d4
	// Line 1848, Address: 0x3f18f8, Func Offset: 0x6d8
	// Line 1849, Address: 0x3f1900, Func Offset: 0x6e0
	// Line 1850, Address: 0x3f190c, Func Offset: 0x6ec
	// Line 1851, Address: 0x3f1910, Func Offset: 0x6f0
	// Line 1850, Address: 0x3f1920, Func Offset: 0x700
	// Line 1851, Address: 0x3f1944, Func Offset: 0x724
	// Line 1852, Address: 0x3f1970, Func Offset: 0x750
	// Line 1853, Address: 0x3f1978, Func Offset: 0x758
	// Line 1857, Address: 0x3f1994, Func Offset: 0x774
	// Line 1858, Address: 0x3f19b4, Func Offset: 0x794
	// Line 1859, Address: 0x3f19c4, Func Offset: 0x7a4
	// Line 1860, Address: 0x3f1a0c, Func Offset: 0x7ec
	// Line 1859, Address: 0x3f1a10, Func Offset: 0x7f0
	// Line 1860, Address: 0x3f1a28, Func Offset: 0x808
	// Line 1861, Address: 0x3f1a44, Func Offset: 0x824
	// Line 1862, Address: 0x3f1a4c, Func Offset: 0x82c
	// Line 1863, Address: 0x3f1ab4, Func Offset: 0x894
	// Line 1864, Address: 0x3f1b1c, Func Offset: 0x8fc
	// Line 1868, Address: 0x3f1b88, Func Offset: 0x968
	// Line 1869, Address: 0x3f1ba8, Func Offset: 0x988
	// Line 1875, Address: 0x3f1bfc, Func Offset: 0x9dc
	// Line 1876, Address: 0x3f1c4c, Func Offset: 0xa2c
	// Func End, Address: 0x3f1c6c, Func Offset: 0xa4c
}

// xBoulderGenerator_EventCB__FP5xBaseP5xBaseUiPCfP5xBaseUi
// Start address: 0x3f1c70
void xBoulderGenerator_EventCB(xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget)
{
	xBoulderGenerator* bg;
	xVec3 pnt;
	// Line 1666, Address: 0x3f1c70, Func Offset: 0
	// Line 1676, Address: 0x3f1c74, Func Offset: 0x4
	// Line 1666, Address: 0x3f1c78, Func Offset: 0x8
	// Line 1676, Address: 0x3f1c90, Func Offset: 0x20
	// Line 1679, Address: 0x3f1cc8, Func Offset: 0x58
	// Line 1680, Address: 0x3f1cd0, Func Offset: 0x60
	// Line 1682, Address: 0x3f1cd8, Func Offset: 0x68
	// Line 1697, Address: 0x3f1d70, Func Offset: 0x100
	// Line 1699, Address: 0x3f1d74, Func Offset: 0x104
	// Line 1697, Address: 0x3f1d7c, Func Offset: 0x10c
	// Line 1699, Address: 0x3f1d88, Func Offset: 0x118
	// Line 1697, Address: 0x3f1d8c, Func Offset: 0x11c
	// Line 1699, Address: 0x3f1da0, Func Offset: 0x130
	// Line 1700, Address: 0x3f1da8, Func Offset: 0x138
	// Line 1701, Address: 0x3f1e18, Func Offset: 0x1a8
	// Line 1702, Address: 0x3f1e8c, Func Offset: 0x21c
	// Line 1704, Address: 0x3f1f04, Func Offset: 0x294
	// Line 1705, Address: 0x3f1f14, Func Offset: 0x2a4
	// Line 1709, Address: 0x3f1f1c, Func Offset: 0x2ac
	// Line 1711, Address: 0x3f1f2c, Func Offset: 0x2bc
	// Line 1709, Address: 0x3f1f30, Func Offset: 0x2c0
	// Line 1711, Address: 0x3f1f34, Func Offset: 0x2c4
	// Line 1709, Address: 0x3f1f38, Func Offset: 0x2c8
	// Line 1711, Address: 0x3f1f40, Func Offset: 0x2d0
	// Line 1709, Address: 0x3f1f44, Func Offset: 0x2d4
	// Line 1711, Address: 0x3f1f4c, Func Offset: 0x2dc
	// Line 1712, Address: 0x3f1f54, Func Offset: 0x2e4
	// Line 1713, Address: 0x3f1fc4, Func Offset: 0x354
	// Line 1714, Address: 0x3f2038, Func Offset: 0x3c8
	// Line 1716, Address: 0x3f20b0, Func Offset: 0x440
	// Line 1719, Address: 0x3f20c0, Func Offset: 0x450
	// Line 1721, Address: 0x3f20c8, Func Offset: 0x458
	// Line 1724, Address: 0x3f20cc, Func Offset: 0x45c
	// Line 1722, Address: 0x3f20d0, Func Offset: 0x460
	// Line 1724, Address: 0x3f20d4, Func Offset: 0x464
	// Line 1723, Address: 0x3f20d8, Func Offset: 0x468
	// Line 1724, Address: 0x3f20dc, Func Offset: 0x46c
	// Line 1721, Address: 0x3f20e0, Func Offset: 0x470
	// Line 1722, Address: 0x3f20e4, Func Offset: 0x474
	// Line 1724, Address: 0x3f20e8, Func Offset: 0x478
	// Line 1725, Address: 0x3f20f0, Func Offset: 0x480
	// Line 1728, Address: 0x3f20f8, Func Offset: 0x488
	// Line 1725, Address: 0x3f2104, Func Offset: 0x494
	// Line 1728, Address: 0x3f2108, Func Offset: 0x498
	// Line 1727, Address: 0x3f210c, Func Offset: 0x49c
	// Line 1729, Address: 0x3f2110, Func Offset: 0x4a0
	// Line 1727, Address: 0x3f2114, Func Offset: 0x4a4
	// Line 1728, Address: 0x3f2118, Func Offset: 0x4a8
	// Line 1727, Address: 0x3f2124, Func Offset: 0x4b4
	// Line 1728, Address: 0x3f2128, Func Offset: 0x4b8
	// Line 1727, Address: 0x3f212c, Func Offset: 0x4bc
	// Line 1729, Address: 0x3f2134, Func Offset: 0x4c4
	// Line 1727, Address: 0x3f2138, Func Offset: 0x4c8
	// Line 1728, Address: 0x3f2144, Func Offset: 0x4d4
	// Line 1727, Address: 0x3f2148, Func Offset: 0x4d8
	// Line 1728, Address: 0x3f214c, Func Offset: 0x4dc
	// Line 1727, Address: 0x3f2150, Func Offset: 0x4e0
	// Line 1728, Address: 0x3f2154, Func Offset: 0x4e4
	// Line 1727, Address: 0x3f2158, Func Offset: 0x4e8
	// Line 1728, Address: 0x3f215c, Func Offset: 0x4ec
	// Line 1729, Address: 0x3f2190, Func Offset: 0x520
	// Line 1730, Address: 0x3f2198, Func Offset: 0x528
	// Line 1731, Address: 0x3f2208, Func Offset: 0x598
	// Line 1732, Address: 0x3f227c, Func Offset: 0x60c
	// Line 1734, Address: 0x3f22f4, Func Offset: 0x684
	// Line 1735, Address: 0x3f2304, Func Offset: 0x694
	// Line 1737, Address: 0x3f230c, Func Offset: 0x69c
	// Line 1745, Address: 0x3f2350, Func Offset: 0x6e0
	// Func End, Address: 0x3f236c, Func Offset: 0x6fc
}

// xBoulderGenerator_Launch__FP17xBoulderGeneratorP5xVec3f
// Start address: 0x3f2370
void xBoulderGenerator_Launch(xBoulderGenerator* bg, xVec3* pnt, float32 t)
{
	int32 i;
	xEntBoulder* b;
	xEnt* genEnt;
	xVec3 worldOffset;
	float32 invTime;
	// Line 1606, Address: 0x3f2370, Func Offset: 0
	// Line 1607, Address: 0x3f2394, Func Offset: 0x24
	// Line 1608, Address: 0x3f239c, Func Offset: 0x2c
	// Line 1607, Address: 0x3f23a0, Func Offset: 0x30
	// Line 1608, Address: 0x3f23a4, Func Offset: 0x34
	// Line 1609, Address: 0x3f23a8, Func Offset: 0x38
	// Line 1608, Address: 0x3f23ac, Func Offset: 0x3c
	// Line 1609, Address: 0x3f23b4, Func Offset: 0x44
	// Line 1610, Address: 0x3f23d4, Func Offset: 0x64
	// Line 1612, Address: 0x3f23e4, Func Offset: 0x74
	// Line 1614, Address: 0x3f2408, Func Offset: 0x98
	// Line 1619, Address: 0x3f2414, Func Offset: 0xa4
	// Line 1620, Address: 0x3f2420, Func Offset: 0xb0
	// Line 1621, Address: 0x3f2438, Func Offset: 0xc8
	// Line 1622, Address: 0x3f2440, Func Offset: 0xd0
	// Line 1623, Address: 0x3f2464, Func Offset: 0xf4
	// Line 1624, Address: 0x3f2480, Func Offset: 0x110
	// Line 1623, Address: 0x3f2484, Func Offset: 0x114
	// Line 1624, Address: 0x3f2488, Func Offset: 0x118
	// Line 1629, Address: 0x3f24a4, Func Offset: 0x134
	// Line 1624, Address: 0x3f24a8, Func Offset: 0x138
	// Line 1629, Address: 0x3f24ac, Func Offset: 0x13c
	// Line 1632, Address: 0x3f24cc, Func Offset: 0x15c
	// Line 1634, Address: 0x3f24e8, Func Offset: 0x178
	// Line 1637, Address: 0x3f253c, Func Offset: 0x1cc
	// Line 1638, Address: 0x3f256c, Func Offset: 0x1fc
	// Line 1639, Address: 0x3f2574, Func Offset: 0x204
	// Line 1643, Address: 0x3f25a8, Func Offset: 0x238
	// Line 1644, Address: 0x3f25c0, Func Offset: 0x250
	// Line 1645, Address: 0x3f25e0, Func Offset: 0x270
	// Line 1648, Address: 0x3f2634, Func Offset: 0x2c4
	// Line 1650, Address: 0x3f263c, Func Offset: 0x2cc
	// Line 1655, Address: 0x3f2644, Func Offset: 0x2d4
	// Line 1656, Address: 0x3f2658, Func Offset: 0x2e8
	// Line 1657, Address: 0x3f2660, Func Offset: 0x2f0
	// Line 1658, Address: 0x3f2664, Func Offset: 0x2f4
	// Line 1657, Address: 0x3f2668, Func Offset: 0x2f8
	// Line 1660, Address: 0x3f2674, Func Offset: 0x304
	// Line 1658, Address: 0x3f2678, Func Offset: 0x308
	// Line 1660, Address: 0x3f2680, Func Offset: 0x310
	// Line 1658, Address: 0x3f2688, Func Offset: 0x318
	// Line 1659, Address: 0x3f2694, Func Offset: 0x324
	// Line 1660, Address: 0x3f26ac, Func Offset: 0x33c
	// Line 1663, Address: 0x3f26d4, Func Offset: 0x364
	// Line 1664, Address: 0x3f2724, Func Offset: 0x3b4
	// Func End, Address: 0x3f2744, Func Offset: 0x3d4
}

// GetBoulderForGenerating__FP17xBoulderGenerator
// Start address: 0x3f2750
int32 GetBoulderForGenerating(xBoulderGenerator* bg)
{
	int32 i;
	int32 j;
	int32 oldestCulled;
	int32 minAge;
	int32 numList;
	// Line 1566, Address: 0x3f2750, Func Offset: 0
	// Line 1568, Address: 0x3f2754, Func Offset: 0x4
	// Line 1566, Address: 0x3f2758, Func Offset: 0x8
	// Line 1569, Address: 0x3f275c, Func Offset: 0xc
	// Line 1566, Address: 0x3f2760, Func Offset: 0x10
	// Line 1572, Address: 0x3f2764, Func Offset: 0x14
	// Line 1566, Address: 0x3f2768, Func Offset: 0x18
	// Line 1569, Address: 0x3f276c, Func Offset: 0x1c
	// Line 1572, Address: 0x3f2774, Func Offset: 0x24
	// Line 1574, Address: 0x3f2788, Func Offset: 0x38
	// Line 1575, Address: 0x3f279c, Func Offset: 0x4c
	// Line 1577, Address: 0x3f27c8, Func Offset: 0x78
	// Line 1578, Address: 0x3f27d4, Func Offset: 0x84
	// Line 1581, Address: 0x3f27dc, Func Offset: 0x8c
	// Line 1582, Address: 0x3f27f4, Func Offset: 0xa4
	// Line 1585, Address: 0x3f2814, Func Offset: 0xc4
	// Line 1586, Address: 0x3f2820, Func Offset: 0xd0
	// Line 1588, Address: 0x3f2840, Func Offset: 0xf0
	// Line 1592, Address: 0x3f2844, Func Offset: 0xf4
	// Line 1594, Address: 0x3f2860, Func Offset: 0x110
	// Line 1601, Address: 0x3f2868, Func Offset: 0x118
	// Line 1602, Address: 0x3f2870, Func Offset: 0x120
	// Line 1603, Address: 0x3f2880, Func Offset: 0x130
	// Line 1580, Address: 0x3f2888, Func Offset: 0x138
	// Line 1603, Address: 0x3f2890, Func Offset: 0x140
	// Line 1595, Address: 0x3f28ac, Func Offset: 0x15c
	// Line 1603, Address: 0x3f28b8, Func Offset: 0x168
	// Line 1595, Address: 0x3f28c0, Func Offset: 0x170
	// Line 1603, Address: 0x3f28f0, Func Offset: 0x1a0
	// Line 1595, Address: 0x3f28f4, Func Offset: 0x1a4
	// Line 1603, Address: 0x3f28fc, Func Offset: 0x1ac
	// Line 1597, Address: 0x3f2908, Func Offset: 0x1b8
	// Line 1604, Address: 0x3f2918, Func Offset: 0x1c8
	// Func End, Address: 0x3f2928, Func Offset: 0x1d8
}

// xBoulderGenerator_Init__FP17xBoulderGeneratorP22xBoulderGeneratorAsset
// Start address: 0x3f2930
void xBoulderGenerator_Init(xBoulderGenerator* bg, xBoulderGeneratorAsset* asset)
{
	uint32 size;
	// Line 1494, Address: 0x3f2930, Func Offset: 0
	// Line 1495, Address: 0x3f2950, Func Offset: 0x20
	// Line 1498, Address: 0x3f2958, Func Offset: 0x28
	// Line 1499, Address: 0x3f2964, Func Offset: 0x34
	// Line 1501, Address: 0x3f2968, Func Offset: 0x38
	// Line 1502, Address: 0x3f2974, Func Offset: 0x44
	// Line 1504, Address: 0x3f2984, Func Offset: 0x54
	// Line 1507, Address: 0x3f2988, Func Offset: 0x58
	// Line 1508, Address: 0x3f298c, Func Offset: 0x5c
	// Line 1509, Address: 0x3f299c, Func Offset: 0x6c
	// Line 1510, Address: 0x3f29ac, Func Offset: 0x7c
	// Line 1517, Address: 0x3f29b4, Func Offset: 0x84
	// Line 1521, Address: 0x3f29f4, Func Offset: 0xc4
	// Line 1517, Address: 0x3f29f8, Func Offset: 0xc8
	// Line 1518, Address: 0x3f29fc, Func Offset: 0xcc
	// Line 1521, Address: 0x3f2a04, Func Offset: 0xd4
	// Line 1532, Address: 0x3f2a18, Func Offset: 0xe8
	// Line 1524, Address: 0x3f2a1c, Func Offset: 0xec
	// Line 1532, Address: 0x3f2a30, Func Offset: 0x100
	// Line 1535, Address: 0x3f2a68, Func Offset: 0x138
	// Line 1538, Address: 0x3f2a6c, Func Offset: 0x13c
	// Line 1535, Address: 0x3f2a74, Func Offset: 0x144
	// Line 1536, Address: 0x3f2a7c, Func Offset: 0x14c
	// Line 1537, Address: 0x3f2a88, Func Offset: 0x158
	// Line 1538, Address: 0x3f2a90, Func Offset: 0x160
	// Line 1540, Address: 0x3f2a9c, Func Offset: 0x16c
	// Line 1538, Address: 0x3f2aa0, Func Offset: 0x170
	// Line 1540, Address: 0x3f2aa4, Func Offset: 0x174
	// Line 1538, Address: 0x3f2aa8, Func Offset: 0x178
	// Line 1540, Address: 0x3f2aac, Func Offset: 0x17c
	// Line 1538, Address: 0x3f2ab4, Func Offset: 0x184
	// Line 1539, Address: 0x3f2abc, Func Offset: 0x18c
	// Line 1540, Address: 0x3f2ae0, Func Offset: 0x1b0
	// Line 1549, Address: 0x3f2aec, Func Offset: 0x1bc
	// Line 1550, Address: 0x3f2afc, Func Offset: 0x1cc
	// Line 1517, Address: 0x3f2b28, Func Offset: 0x1f8
	// Line 1550, Address: 0x3f2b2c, Func Offset: 0x1fc
	// Line 1532, Address: 0x3f2b50, Func Offset: 0x220
	// Line 1550, Address: 0x3f2b54, Func Offset: 0x224
	// Line 1544, Address: 0x3f2b6c, Func Offset: 0x23c
	// Line 1550, Address: 0x3f2b74, Func Offset: 0x244
	// Line 1541, Address: 0x3f2b7c, Func Offset: 0x24c
	// Line 1550, Address: 0x3f2b80, Func Offset: 0x250
	// Line 1542, Address: 0x3f2b90, Func Offset: 0x260
	// Line 1550, Address: 0x3f2b94, Func Offset: 0x264
	// Line 1543, Address: 0x3f2ba4, Func Offset: 0x274
	// Line 1550, Address: 0x3f2ba8, Func Offset: 0x278
	// Line 1545, Address: 0x3f2bc4, Func Offset: 0x294
	// Line 1550, Address: 0x3f2bcc, Func Offset: 0x29c
	// Line 1545, Address: 0x3f2be0, Func Offset: 0x2b0
	// Line 1550, Address: 0x3f2be8, Func Offset: 0x2b8
	// Line 1545, Address: 0x3f2bfc, Func Offset: 0x2cc
	// Line 1550, Address: 0x3f2c04, Func Offset: 0x2d4
	// Line 1546, Address: 0x3f2c10, Func Offset: 0x2e0
	// Line 1550, Address: 0x3f2c14, Func Offset: 0x2e4
	// Line 1546, Address: 0x3f2c1c, Func Offset: 0x2ec
	// Line 1550, Address: 0x3f2c20, Func Offset: 0x2f0
	// Line 1546, Address: 0x3f2c28, Func Offset: 0x2f8
	// Line 1550, Address: 0x3f2c38, Func Offset: 0x308
	// Func End, Address: 0x3f2c8c, Func Offset: 0x35c
}

// xBoulderGenerator_Init__FR5xBaseR9xDynAssetUi
// Start address: 0x3f2c90
void xBoulderGenerator_Init(xBase& data, xDynAsset& asset)
{
	// Line 1491, Address: 0x3f2c90, Func Offset: 0
	// Func End, Address: 0x3f2c98, Func Offset: 0x8
}

// RecurseChild__FP5xBasePP11xEntBoulderRi
// Start address: 0x3f2ca0
void RecurseChild(xBase* child, xEntBoulder** boulList, int32& currBoul)
{
	uint32 i;
	uint32 cnt;
	xGroup* grp;
	// Line 1456, Address: 0x3f2ca0, Func Offset: 0
	// Line 1462, Address: 0x3f2ca4, Func Offset: 0x4
	// Line 1456, Address: 0x3f2ca8, Func Offset: 0x8
	// Line 1462, Address: 0x3f2cc8, Func Offset: 0x28
	// Line 1464, Address: 0x3f2ce8, Func Offset: 0x48
	// Line 1465, Address: 0x3f2d00, Func Offset: 0x60
	// Line 1466, Address: 0x3f2d08, Func Offset: 0x68
	// Line 1470, Address: 0x3f2d10, Func Offset: 0x70
	// Line 1468, Address: 0x3f2d14, Func Offset: 0x74
	// Line 1470, Address: 0x3f2d18, Func Offset: 0x78
	// Line 1471, Address: 0x3f2d1c, Func Offset: 0x7c
	// Line 1472, Address: 0x3f2d2c, Func Offset: 0x8c
	// Line 1474, Address: 0x3f2d58, Func Offset: 0xb8
	// Line 1475, Address: 0x3f2d64, Func Offset: 0xc4
	// Line 1479, Address: 0x3f2d70, Func Offset: 0xd0
	// Line 1480, Address: 0x3f2d7c, Func Offset: 0xdc
	// Line 1486, Address: 0x3f2d90, Func Offset: 0xf0
	// Line 1472, Address: 0x3f2d98, Func Offset: 0xf8
	// Line 1486, Address: 0x3f2d9c, Func Offset: 0xfc
	// Line 1476, Address: 0x3f2db8, Func Offset: 0x118
	// Line 1486, Address: 0x3f2dbc, Func Offset: 0x11c
	// Line 1487, Address: 0x3f2de8, Func Offset: 0x148
	// Func End, Address: 0x3f2e0c, Func Offset: 0x16c
}

// xEntBoulderEventCB__FP5xBaseP5xBaseUiPCfP5xBaseUi
// Start address: 0x3f2e10
void xEntBoulderEventCB(xBase* from, xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget)
{
	xEntBoulder* s;
	FloatAndVoid dist;
	zShrapnelAsset* shrap;
	// Line 1278, Address: 0x3f2e10, Func Offset: 0
	// Line 1287, Address: 0x3f2e14, Func Offset: 0x4
	// Line 1278, Address: 0x3f2e18, Func Offset: 0x8
	// Line 1287, Address: 0x3f2e28, Func Offset: 0x18
	// Line 1291, Address: 0x3f2f1c, Func Offset: 0x10c
	// Line 1293, Address: 0x3f2f3c, Func Offset: 0x12c
	// Line 1294, Address: 0x3f2f6c, Func Offset: 0x15c
	// Line 1296, Address: 0x3f2f7c, Func Offset: 0x16c
	// Line 1299, Address: 0x3f2f84, Func Offset: 0x174
	// Line 1301, Address: 0x3f2fa4, Func Offset: 0x194
	// Line 1302, Address: 0x3f2fd4, Func Offset: 0x1c4
	// Line 1304, Address: 0x3f2fe4, Func Offset: 0x1d4
	// Line 1306, Address: 0x3f2fec, Func Offset: 0x1dc
	// Line 1307, Address: 0x3f2ff4, Func Offset: 0x1e4
	// Line 1309, Address: 0x3f2ffc, Func Offset: 0x1ec
	// Line 1310, Address: 0x3f3004, Func Offset: 0x1f4
	// Line 1312, Address: 0x3f300c, Func Offset: 0x1fc
	// Line 1313, Address: 0x3f3010, Func Offset: 0x200
	// Line 1315, Address: 0x3f3018, Func Offset: 0x208
	// Line 1316, Address: 0x3f3024, Func Offset: 0x214
	// Line 1318, Address: 0x3f3044, Func Offset: 0x234
	// Line 1319, Address: 0x3f3074, Func Offset: 0x264
	// Line 1321, Address: 0x3f3084, Func Offset: 0x274
	// Line 1323, Address: 0x3f308c, Func Offset: 0x27c
	// Line 1324, Address: 0x3f3098, Func Offset: 0x288
	// Line 1326, Address: 0x3f30b8, Func Offset: 0x2a8
	// Line 1327, Address: 0x3f30e8, Func Offset: 0x2d8
	// Line 1329, Address: 0x3f30f8, Func Offset: 0x2e8
	// Line 1334, Address: 0x3f3100, Func Offset: 0x2f0
	// Line 1335, Address: 0x3f310c, Func Offset: 0x2fc
	// Line 1338, Address: 0x3f3114, Func Offset: 0x304
	// Line 1339, Address: 0x3f3120, Func Offset: 0x310
	// Line 1344, Address: 0x3f3128, Func Offset: 0x318
	// Line 1346, Address: 0x3f3134, Func Offset: 0x324
	// Line 1349, Address: 0x3f313c, Func Offset: 0x32c
	// Line 1350, Address: 0x3f3148, Func Offset: 0x338
	// Line 1352, Address: 0x3f3150, Func Offset: 0x340
	// Line 1353, Address: 0x3f315c, Func Offset: 0x34c
	// Line 1355, Address: 0x3f3164, Func Offset: 0x354
	// Line 1356, Address: 0x3f3174, Func Offset: 0x364
	// Line 1357, Address: 0x3f3194, Func Offset: 0x384
	// Line 1359, Address: 0x3f319c, Func Offset: 0x38c
	// Line 1360, Address: 0x3f31a8, Func Offset: 0x398
	// Line 1363, Address: 0x3f31b8, Func Offset: 0x3a8
	// Line 1366, Address: 0x3f31e4, Func Offset: 0x3d4
	// Line 1367, Address: 0x3f31f0, Func Offset: 0x3e0
	// Line 1368, Address: 0x3f31fc, Func Offset: 0x3ec
	// Line 1371, Address: 0x3f3220, Func Offset: 0x410
	// Line 1374, Address: 0x3f3228, Func Offset: 0x418
	// Line 1388, Address: 0x3f3238, Func Offset: 0x428
	// Line 1389, Address: 0x3f3240, Func Offset: 0x430
	// Line 1391, Address: 0x3f3250, Func Offset: 0x440
	// Line 1392, Address: 0x3f325c, Func Offset: 0x44c
	// Line 1396, Address: 0x3f3270, Func Offset: 0x460
	// Line 1397, Address: 0x3f3274, Func Offset: 0x464
	// Line 1396, Address: 0x3f3278, Func Offset: 0x468
	// Line 1397, Address: 0x3f327c, Func Offset: 0x46c
	// Line 1400, Address: 0x3f3288, Func Offset: 0x478
	// Line 1405, Address: 0x3f3290, Func Offset: 0x480
	// Line 1406, Address: 0x3f32a4, Func Offset: 0x494
	// Line 1408, Address: 0x3f32b8, Func Offset: 0x4a8
	// Line 1415, Address: 0x3f32c0, Func Offset: 0x4b0
	// Line 1424, Address: 0x3f32cc, Func Offset: 0x4bc
	// Line 1360, Address: 0x3f32dc, Func Offset: 0x4cc
	// Line 1424, Address: 0x3f32e0, Func Offset: 0x4d0
	// Line 1375, Address: 0x3f32f8, Func Offset: 0x4e8
	// Line 1424, Address: 0x3f3304, Func Offset: 0x4f4
	// Line 1382, Address: 0x3f3314, Func Offset: 0x504
	// Line 1424, Address: 0x3f331c, Func Offset: 0x50c
	// Line 1393, Address: 0x3f3340, Func Offset: 0x530
	// Line 1424, Address: 0x3f3344, Func Offset: 0x534
	// Line 1394, Address: 0x3f334c, Func Offset: 0x53c
	// Line 1425, Address: 0x3f3354, Func Offset: 0x544
	// Func End, Address: 0x3f3368, Func Offset: 0x558
}

// xEntBoulder_Reset__FP11xEntBoulderP6xScene
// Start address: 0x3f3370
void xEntBoulder_Reset(xEntBoulder* ent)
{
	// Line 1241, Address: 0x3f3370, Func Offset: 0
	// Line 1243, Address: 0x3f3374, Func Offset: 0x4
	// Line 1241, Address: 0x3f3378, Func Offset: 0x8
	// Line 1244, Address: 0x3f337c, Func Offset: 0xc
	// Line 1241, Address: 0x3f3380, Func Offset: 0x10
	// Line 1243, Address: 0x3f3384, Func Offset: 0x14
	// Line 1245, Address: 0x3f338c, Func Offset: 0x1c
	// Line 1244, Address: 0x3f3390, Func Offset: 0x20
	// Line 1245, Address: 0x3f3394, Func Offset: 0x24
	// Line 1249, Address: 0x3f3398, Func Offset: 0x28
	// Line 1250, Address: 0x3f33a0, Func Offset: 0x30
	// Line 1253, Address: 0x3f33a4, Func Offset: 0x34
	// Line 1250, Address: 0x3f33a8, Func Offset: 0x38
	// Line 1251, Address: 0x3f33b0, Func Offset: 0x40
	// Line 1252, Address: 0x3f33bc, Func Offset: 0x4c
	// Line 1253, Address: 0x3f33c8, Func Offset: 0x58
	// Line 1254, Address: 0x3f33d4, Func Offset: 0x64
	// Line 1255, Address: 0x3f33dc, Func Offset: 0x6c
	// Line 1256, Address: 0x3f33ec, Func Offset: 0x7c
	// Line 1258, Address: 0x3f33f8, Func Offset: 0x88
	// Line 1259, Address: 0x3f33fc, Func Offset: 0x8c
	// Line 1262, Address: 0x3f3400, Func Offset: 0x90
	// Line 1259, Address: 0x3f3408, Func Offset: 0x98
	// Line 1262, Address: 0x3f3410, Func Offset: 0xa0
	// Line 1264, Address: 0x3f34a0, Func Offset: 0x130
	// Func End, Address: 0x3f34b0, Func Offset: 0x140
}

// xEntBoulder_Setup__FP11xEntBoulder
// Start address: 0x3f34b0
void xEntBoulder_Setup(xEntBoulder* ent)
{
	// Line 1227, Address: 0x3f34b0, Func Offset: 0
	// Line 1229, Address: 0x3f34b4, Func Offset: 0x4
	// Line 1227, Address: 0x3f34b8, Func Offset: 0x8
	// Line 1229, Address: 0x3f34bc, Func Offset: 0xc
	// Line 1230, Address: 0x3f34c8, Func Offset: 0x18
	// Line 1231, Address: 0x3f34d0, Func Offset: 0x20
	// Line 1232, Address: 0x3f34dc, Func Offset: 0x2c
	// Line 1233, Address: 0x3f34e4, Func Offset: 0x34
	// Line 1237, Address: 0x3f34f0, Func Offset: 0x40
	// Line 1238, Address: 0x3f34f8, Func Offset: 0x48
	// Func End, Address: 0x3f3514, Func Offset: 0x64
}

// xEntBoulder_BubbleBowl__Ff
// Start address: 0x3f3520
void xEntBoulder_BubbleBowl(float32 multiplier)
{
	xEntBoulder* ent;
	xRay3 ray;
	xCollis rayCollis;
	// Line 1111, Address: 0x3f3520, Func Offset: 0
	// Line 1113, Address: 0x3f3534, Func Offset: 0x14
	// Line 1114, Address: 0x3f3540, Func Offset: 0x20
	// Line 1115, Address: 0x3f3548, Func Offset: 0x28
	// Line 1118, Address: 0x3f355c, Func Offset: 0x3c
	// Line 1119, Address: 0x3f356c, Func Offset: 0x4c
	// Line 1121, Address: 0x3f3570, Func Offset: 0x50
	// Line 1119, Address: 0x3f3574, Func Offset: 0x54
	// Line 1121, Address: 0x3f3580, Func Offset: 0x60
	// Line 1123, Address: 0x3f3588, Func Offset: 0x68
	// Line 1124, Address: 0x3f35d8, Func Offset: 0xb8
	// Line 1127, Address: 0x3f35e0, Func Offset: 0xc0
	// Line 1161, Address: 0x3f35e4, Func Offset: 0xc4
	// Line 1127, Address: 0x3f35ec, Func Offset: 0xcc
	// Line 1129, Address: 0x3f35f0, Func Offset: 0xd0
	// Line 1132, Address: 0x3f35f4, Func Offset: 0xd4
	// Line 1129, Address: 0x3f35f8, Func Offset: 0xd8
	// Line 1135, Address: 0x3f35fc, Func Offset: 0xdc
	// Line 1147, Address: 0x3f3600, Func Offset: 0xe0
	// Line 1150, Address: 0x3f3604, Func Offset: 0xe4
	// Line 1153, Address: 0x3f3608, Func Offset: 0xe8
	// Line 1168, Address: 0x3f360c, Func Offset: 0xec
	// Line 1127, Address: 0x3f3610, Func Offset: 0xf0
	// Line 1161, Address: 0x3f3614, Func Offset: 0xf4
	// Line 1127, Address: 0x3f3618, Func Offset: 0xf8
	// Line 1169, Address: 0x3f3620, Func Offset: 0x100
	// Line 1127, Address: 0x3f3624, Func Offset: 0x104
	// Line 1129, Address: 0x3f3640, Func Offset: 0x120
	// Line 1132, Address: 0x3f3698, Func Offset: 0x178
	// Line 1135, Address: 0x3f36f0, Func Offset: 0x1d0
	// Line 1138, Address: 0x3f3748, Func Offset: 0x228
	// Line 1144, Address: 0x3f3768, Func Offset: 0x248
	// Line 1147, Address: 0x3f378c, Func Offset: 0x26c
	// Line 1150, Address: 0x3f37c4, Func Offset: 0x2a4
	// Line 1153, Address: 0x3f3814, Func Offset: 0x2f4
	// Line 1157, Address: 0x3f3864, Func Offset: 0x344
	// Line 1159, Address: 0x3f3888, Func Offset: 0x368
	// Line 1161, Address: 0x3f38b0, Func Offset: 0x390
	// Line 1167, Address: 0x3f38b4, Func Offset: 0x394
	// Line 1168, Address: 0x3f38c8, Func Offset: 0x3a8
	// Line 1167, Address: 0x3f38cc, Func Offset: 0x3ac
	// Line 1168, Address: 0x3f38d4, Func Offset: 0x3b4
	// Line 1167, Address: 0x3f38d8, Func Offset: 0x3b8
	// Line 1168, Address: 0x3f38dc, Func Offset: 0x3bc
	// Line 1169, Address: 0x3f3908, Func Offset: 0x3e8
	// Line 1170, Address: 0x3f3910, Func Offset: 0x3f0
	// Line 1169, Address: 0x3f3918, Func Offset: 0x3f8
	// Line 1170, Address: 0x3f391c, Func Offset: 0x3fc
	// Line 1171, Address: 0x3f3924, Func Offset: 0x404
	// Line 1172, Address: 0x3f3928, Func Offset: 0x408
	// Line 1170, Address: 0x3f3938, Func Offset: 0x418
	// Line 1171, Address: 0x3f3944, Func Offset: 0x424
	// Line 1172, Address: 0x3f3948, Func Offset: 0x428
	// Line 1173, Address: 0x3f3950, Func Offset: 0x430
	// Line 1175, Address: 0x3f3960, Func Offset: 0x440
	// Line 1180, Address: 0x3f39e0, Func Offset: 0x4c0
	// Line 1179, Address: 0x3f39e4, Func Offset: 0x4c4
	// Line 1180, Address: 0x3f39e8, Func Offset: 0x4c8
	// Line 1187, Address: 0x3f39ec, Func Offset: 0x4cc
	// Line 1116, Address: 0x3f39f4, Func Offset: 0x4d4
	// Line 1187, Address: 0x3f3a10, Func Offset: 0x4f0
	// Line 1175, Address: 0x3f3a20, Func Offset: 0x500
	// Line 1187, Address: 0x3f3a30, Func Offset: 0x510
	// Line 1175, Address: 0x3f3a34, Func Offset: 0x514
	// Line 1187, Address: 0x3f3a38, Func Offset: 0x518
	// Line 1175, Address: 0x3f3a4c, Func Offset: 0x52c
	// Line 1187, Address: 0x3f3a50, Func Offset: 0x530
	// Line 1175, Address: 0x3f3a6c, Func Offset: 0x54c
	// Line 1187, Address: 0x3f3a70, Func Offset: 0x550
	// Line 1175, Address: 0x3f3a78, Func Offset: 0x558
	// Line 1187, Address: 0x3f3a88, Func Offset: 0x568
	// Func End, Address: 0x3f3aa0, Func Offset: 0x580
}

// xEntBoulder_Kill__FP11xEntBoulder
// Start address: 0x3f3aa0
void xEntBoulder_Kill(xEntBoulder* ent)
{
	sphericalEmitter* bbowlExplodeRumble;
	// Line 1024, Address: 0x3f3aa0, Func Offset: 0
	// Line 1025, Address: 0x3f3ab0, Func Offset: 0x10
	// Line 1030, Address: 0x3f3ab8, Func Offset: 0x18
	// Line 1031, Address: 0x3f3abc, Func Offset: 0x1c
	// Line 1032, Address: 0x3f3ac0, Func Offset: 0x20
	// Line 1033, Address: 0x3f3ac4, Func Offset: 0x24
	// Line 1034, Address: 0x3f3ac8, Func Offset: 0x28
	// Line 1035, Address: 0x3f3acc, Func Offset: 0x2c
	// Line 1037, Address: 0x3f3aec, Func Offset: 0x4c
	// Line 1038, Address: 0x3f3af8, Func Offset: 0x58
	// Line 1042, Address: 0x3f3b00, Func Offset: 0x60
	// Line 1058, Address: 0x3f3b10, Func Offset: 0x70
	// Line 1043, Address: 0x3f3b1c, Func Offset: 0x7c
	// Line 1058, Address: 0x3f3b20, Func Offset: 0x80
	// Line 1044, Address: 0x3f3b28, Func Offset: 0x88
	// Line 1058, Address: 0x3f3b2c, Func Offset: 0x8c
	// Line 1044, Address: 0x3f3b34, Func Offset: 0x94
	// Line 1058, Address: 0x3f3b38, Func Offset: 0x98
	// Line 1044, Address: 0x3f3b54, Func Offset: 0xb4
	// Line 1058, Address: 0x3f3b58, Func Offset: 0xb8
	// Line 1044, Address: 0x3f3b60, Func Offset: 0xc0
	// Line 1058, Address: 0x3f3b68, Func Offset: 0xc8
	// Line 1044, Address: 0x3f3b70, Func Offset: 0xd0
	// Line 1058, Address: 0x3f3b74, Func Offset: 0xd4
	// Line 1045, Address: 0x3f3b78, Func Offset: 0xd8
	// Line 1058, Address: 0x3f3b7c, Func Offset: 0xdc
	// Line 1049, Address: 0x3f3b94, Func Offset: 0xf4
	// Line 1058, Address: 0x3f3b98, Func Offset: 0xf8
	// Line 1054, Address: 0x3f3bd0, Func Offset: 0x130
	// Line 1058, Address: 0x3f3bf8, Func Offset: 0x158
	// Line 1054, Address: 0x3f3bfc, Func Offset: 0x15c
	// Line 1058, Address: 0x3f3c08, Func Offset: 0x168
	// Line 1054, Address: 0x3f3c0c, Func Offset: 0x16c
	// Line 1058, Address: 0x3f3c18, Func Offset: 0x178
	// Func End, Address: 0x3f3c40, Func Offset: 0x1a0
}

// xEntBoulder_KilledBySurface__FP11xEntBoulderP6xScenef
// Start address: 0x3f3c40
int32 xEntBoulder_KilledBySurface(xEntBoulder* ent)
{
	xCollis* coll;
	xCollis* cend;
	float32 depthUNUSED;
	xSurface* surf;
	zSurfaceProps* prop;
	// Line 943, Address: 0x3f3c40, Func Offset: 0
	// Line 944, Address: 0x3f3c54, Func Offset: 0x14
	// Line 952, Address: 0x3f3c6c, Func Offset: 0x2c
	// Line 951, Address: 0x3f3c70, Func Offset: 0x30
	// Line 952, Address: 0x3f3c74, Func Offset: 0x34
	// Line 954, Address: 0x3f3c8c, Func Offset: 0x4c
	// Line 955, Address: 0x3f3c98, Func Offset: 0x58
	// Line 1019, Address: 0x3f3ca8, Func Offset: 0x68
	// Line 1020, Address: 0x3f3cb8, Func Offset: 0x78
	// Line 948, Address: 0x3f3cc0, Func Offset: 0x80
	// Line 1020, Address: 0x3f3cc8, Func Offset: 0x88
	// Line 958, Address: 0x3f3cd0, Func Offset: 0x90
	// Line 1020, Address: 0x3f3cd4, Func Offset: 0x94
	// Line 963, Address: 0x3f3cfc, Func Offset: 0xbc
	// Line 1020, Address: 0x3f3d00, Func Offset: 0xc0
	// Line 964, Address: 0x3f3d04, Func Offset: 0xc4
	// Line 1020, Address: 0x3f3d08, Func Offset: 0xc8
	// Line 964, Address: 0x3f3d0c, Func Offset: 0xcc
	// Line 1020, Address: 0x3f3d10, Func Offset: 0xd0
	// Line 964, Address: 0x3f3d14, Func Offset: 0xd4
	// Line 1020, Address: 0x3f3d18, Func Offset: 0xd8
	// Line 964, Address: 0x3f3d1c, Func Offset: 0xdc
	// Line 1020, Address: 0x3f3d20, Func Offset: 0xe0
	// Line 964, Address: 0x3f3d24, Func Offset: 0xe4
	// Line 1020, Address: 0x3f3d28, Func Offset: 0xe8
	// Line 964, Address: 0x3f3d2c, Func Offset: 0xec
	// Line 963, Address: 0x3f3d30, Func Offset: 0xf0
	// Line 964, Address: 0x3f3d34, Func Offset: 0xf4
	// Line 963, Address: 0x3f3d38, Func Offset: 0xf8
	// Line 964, Address: 0x3f3d3c, Func Offset: 0xfc
	// Line 1020, Address: 0x3f3d40, Func Offset: 0x100
	// Line 963, Address: 0x3f3d48, Func Offset: 0x108
	// Line 1020, Address: 0x3f3d6c, Func Offset: 0x12c
	// Line 963, Address: 0x3f3d78, Func Offset: 0x138
	// Line 1020, Address: 0x3f3d80, Func Offset: 0x140
	// Line 963, Address: 0x3f3d8c, Func Offset: 0x14c
	// Line 1020, Address: 0x3f3d94, Func Offset: 0x154
	// Line 965, Address: 0x3f3d9c, Func Offset: 0x15c
	// Line 969, Address: 0x3f3da4, Func Offset: 0x164
	// Line 1020, Address: 0x3f3da8, Func Offset: 0x168
	// Line 975, Address: 0x3f3de4, Func Offset: 0x1a4
	// Line 1020, Address: 0x3f3de8, Func Offset: 0x1a8
	// Line 976, Address: 0x3f3e04, Func Offset: 0x1c4
	// Line 1020, Address: 0x3f3e08, Func Offset: 0x1c8
	// Line 976, Address: 0x3f3e0c, Func Offset: 0x1cc
	// Line 983, Address: 0x3f3e1c, Func Offset: 0x1dc
	// Line 1020, Address: 0x3f3e20, Func Offset: 0x1e0
	// Line 988, Address: 0x3f3e3c, Func Offset: 0x1fc
	// Line 1020, Address: 0x3f3e40, Func Offset: 0x200
	// Line 991, Address: 0x3f3e44, Func Offset: 0x204
	// Line 1020, Address: 0x3f3e48, Func Offset: 0x208
	// Line 991, Address: 0x3f3e4c, Func Offset: 0x20c
	// Line 1020, Address: 0x3f3e50, Func Offset: 0x210
	// Line 991, Address: 0x3f3e54, Func Offset: 0x214
	// Line 1020, Address: 0x3f3e58, Func Offset: 0x218
	// Line 991, Address: 0x3f3e5c, Func Offset: 0x21c
	// Line 1020, Address: 0x3f3e60, Func Offset: 0x220
	// Line 991, Address: 0x3f3e64, Func Offset: 0x224
	// Line 1020, Address: 0x3f3e68, Func Offset: 0x228
	// Line 991, Address: 0x3f3e6c, Func Offset: 0x22c
	// Line 988, Address: 0x3f3e70, Func Offset: 0x230
	// Line 991, Address: 0x3f3e74, Func Offset: 0x234
	// Line 988, Address: 0x3f3e78, Func Offset: 0x238
	// Line 991, Address: 0x3f3e7c, Func Offset: 0x23c
	// Line 1020, Address: 0x3f3e80, Func Offset: 0x240
	// Line 988, Address: 0x3f3e88, Func Offset: 0x248
	// Line 1020, Address: 0x3f3eac, Func Offset: 0x26c
	// Line 988, Address: 0x3f3eb8, Func Offset: 0x278
	// Line 1020, Address: 0x3f3ec0, Func Offset: 0x280
	// Line 988, Address: 0x3f3ecc, Func Offset: 0x28c
	// Line 1020, Address: 0x3f3ed4, Func Offset: 0x294
	// Line 992, Address: 0x3f3edc, Func Offset: 0x29c
	// Line 1020, Address: 0x3f3ee4, Func Offset: 0x2a4
	// Line 998, Address: 0x3f3ee8, Func Offset: 0x2a8
	// Line 1001, Address: 0x3f3ef0, Func Offset: 0x2b0
	// Line 1020, Address: 0x3f3ef4, Func Offset: 0x2b4
	// Line 1001, Address: 0x3f3ef8, Func Offset: 0x2b8
	// Line 1020, Address: 0x3f3efc, Func Offset: 0x2bc
	// Line 1001, Address: 0x3f3f00, Func Offset: 0x2c0
	// Line 1020, Address: 0x3f3f04, Func Offset: 0x2c4
	// Line 1001, Address: 0x3f3f08, Func Offset: 0x2c8
	// Line 1020, Address: 0x3f3f0c, Func Offset: 0x2cc
	// Line 1001, Address: 0x3f3f10, Func Offset: 0x2d0
	// Line 998, Address: 0x3f3f14, Func Offset: 0x2d4
	// Line 1001, Address: 0x3f3f18, Func Offset: 0x2d8
	// Line 998, Address: 0x3f3f24, Func Offset: 0x2e4
	// Line 1020, Address: 0x3f3f2c, Func Offset: 0x2ec
	// Line 998, Address: 0x3f3f34, Func Offset: 0x2f4
	// Line 1020, Address: 0x3f3f38, Func Offset: 0x2f8
	// Line 998, Address: 0x3f3f3c, Func Offset: 0x2fc
	// Line 1020, Address: 0x3f3f50, Func Offset: 0x310
	// Line 998, Address: 0x3f3f5c, Func Offset: 0x31c
	// Line 1020, Address: 0x3f3f64, Func Offset: 0x324
	// Line 998, Address: 0x3f3f70, Func Offset: 0x330
	// Line 1020, Address: 0x3f3f78, Func Offset: 0x338
	// Line 1002, Address: 0x3f3f80, Func Offset: 0x340
	// Line 1020, Address: 0x3f3f88, Func Offset: 0x348
	// Line 1005, Address: 0x3f3f90, Func Offset: 0x350
	// Line 1020, Address: 0x3f3f94, Func Offset: 0x354
	// Line 1006, Address: 0x3f3fa4, Func Offset: 0x364
	// Line 1020, Address: 0x3f3fa8, Func Offset: 0x368
	// Line 1009, Address: 0x3f3fb4, Func Offset: 0x374
	// Line 1012, Address: 0x3f3fbc, Func Offset: 0x37c
	// Line 1020, Address: 0x3f3fc0, Func Offset: 0x380
	// Line 1012, Address: 0x3f3fc4, Func Offset: 0x384
	// Line 1020, Address: 0x3f3fc8, Func Offset: 0x388
	// Line 1012, Address: 0x3f3fcc, Func Offset: 0x38c
	// Line 1020, Address: 0x3f3fd0, Func Offset: 0x390
	// Line 1012, Address: 0x3f3fd4, Func Offset: 0x394
	// Line 1020, Address: 0x3f3fd8, Func Offset: 0x398
	// Line 1012, Address: 0x3f3fdc, Func Offset: 0x39c
	// Line 1009, Address: 0x3f3fe0, Func Offset: 0x3a0
	// Line 1012, Address: 0x3f3fe4, Func Offset: 0x3a4
	// Line 1009, Address: 0x3f3ff0, Func Offset: 0x3b0
	// Line 1020, Address: 0x3f3ff8, Func Offset: 0x3b8
	// Line 1009, Address: 0x3f4000, Func Offset: 0x3c0
	// Line 1020, Address: 0x3f4004, Func Offset: 0x3c4
	// Line 1009, Address: 0x3f4008, Func Offset: 0x3c8
	// Line 1020, Address: 0x3f401c, Func Offset: 0x3dc
	// Line 1009, Address: 0x3f4028, Func Offset: 0x3e8
	// Line 1020, Address: 0x3f4030, Func Offset: 0x3f0
	// Line 1009, Address: 0x3f403c, Func Offset: 0x3fc
	// Line 1020, Address: 0x3f4044, Func Offset: 0x404
	// Line 1013, Address: 0x3f404c, Func Offset: 0x40c
	// Line 1021, Address: 0x3f4050, Func Offset: 0x410
	// Func End, Address: 0x3f4068, Func Offset: 0x428
}

// xEntBoulder_Update__FP11xEntBoulderP6xScenef
// Start address: 0x3f4070
void xEntBoulder_Update(xEntBoulder* ent, xScene* sc, float32 dt)
{
	int32 i;
	zEnt* plent;
	float32 distsqr;
	float32 dx__;
	float32 dy__;
	float32 dz__;
	xVec3 rotatedLC;
	xVec3 a;
	xVec3 b;
	xVec3 tmp;
	float32 fn;
	uint32 n;
	xVec3 oldPos;
	xVec3 velNorm;
	xVec3 sweptDisp;
	uint8 definitelyBounce;
	float32 sweptDistSqr;
	float32 penAllowed;
	xSweptSphere sws;
	float32 pen;
	float32 scaleBack;
	int32 numDepens;
	xVec3 depen;
	xEnt* xb;
	xEntBoulder* boul;
	xVec3 force;
	xVec3 toAdd;
	float32 forceMag;
	xEnt* xb;
	float32 hitParams[4];
	zNMECommon* npc;
	xVec3 newVel;
	float32 newMag;
	float32 oldMag;
	xVec3 depenNorm;
	float32 depenComp;
	float32 afterBounce;
	xVec3 fricComp;
	xMat4x3 baseMatrix;
	xVec3 vForcedRotationAxis;
	float32 fMagnitudeAgainstAxis;
	xVec3 newRotVec;
	float32 newAngVel;
	xMat3x3 rotM;
	float32 vol;
	// Line 362, Address: 0x3f4070, Func Offset: 0
	// Line 366, Address: 0x3f4078, Func Offset: 0x8
	// Line 362, Address: 0x3f407c, Func Offset: 0xc
	// Line 366, Address: 0x3f40b8, Func Offset: 0x48
	// Line 367, Address: 0x3f40c8, Func Offset: 0x58
	// Line 368, Address: 0x3f40cc, Func Offset: 0x5c
	// Line 369, Address: 0x3f40d8, Func Offset: 0x68
	// Line 370, Address: 0x3f40fc, Func Offset: 0x8c
	// Line 375, Address: 0x3f4104, Func Offset: 0x94
	// Line 379, Address: 0x3f4114, Func Offset: 0xa4
	// Line 382, Address: 0x3f4118, Func Offset: 0xa8
	// Line 379, Address: 0x3f4120, Func Offset: 0xb0
	// Line 381, Address: 0x3f4128, Func Offset: 0xb8
	// Line 382, Address: 0x3f415c, Func Offset: 0xec
	// Line 384, Address: 0x3f4168, Func Offset: 0xf8
	// Line 385, Address: 0x3f418c, Func Offset: 0x11c
	// Line 390, Address: 0x3f4194, Func Offset: 0x124
	// Line 391, Address: 0x3f41a0, Func Offset: 0x130
	// Line 393, Address: 0x3f41ac, Func Offset: 0x13c
	// Line 400, Address: 0x3f41b0, Func Offset: 0x140
	// Line 393, Address: 0x3f41b4, Func Offset: 0x144
	// Line 400, Address: 0x3f41b8, Func Offset: 0x148
	// Line 393, Address: 0x3f41bc, Func Offset: 0x14c
	// Line 394, Address: 0x3f41c0, Func Offset: 0x150
	// Line 395, Address: 0x3f41cc, Func Offset: 0x15c
	// Line 396, Address: 0x3f41d4, Func Offset: 0x164
	// Line 400, Address: 0x3f41dc, Func Offset: 0x16c
	// Line 401, Address: 0x3f4228, Func Offset: 0x1b8
	// Line 404, Address: 0x3f4234, Func Offset: 0x1c4
	// Line 401, Address: 0x3f4238, Func Offset: 0x1c8
	// Line 404, Address: 0x3f4268, Func Offset: 0x1f8
	// Line 409, Address: 0x3f4284, Func Offset: 0x214
	// Line 410, Address: 0x3f4288, Func Offset: 0x218
	// Line 409, Address: 0x3f428c, Func Offset: 0x21c
	// Line 410, Address: 0x3f4298, Func Offset: 0x228
	// Line 409, Address: 0x3f429c, Func Offset: 0x22c
	// Line 410, Address: 0x3f42b0, Func Offset: 0x240
	// Line 409, Address: 0x3f42b8, Func Offset: 0x248
	// Line 410, Address: 0x3f42c0, Func Offset: 0x250
	// Line 404, Address: 0x3f42c4, Func Offset: 0x254
	// Line 410, Address: 0x3f42c8, Func Offset: 0x258
	// Line 412, Address: 0x3f42d0, Func Offset: 0x260
	// Line 409, Address: 0x3f42d4, Func Offset: 0x264
	// Line 410, Address: 0x3f42f0, Func Offset: 0x280
	// Line 409, Address: 0x3f42f4, Func Offset: 0x284
	// Line 410, Address: 0x3f4300, Func Offset: 0x290
	// Line 409, Address: 0x3f4310, Func Offset: 0x2a0
	// Line 410, Address: 0x3f4314, Func Offset: 0x2a4
	// Line 409, Address: 0x3f431c, Func Offset: 0x2ac
	// Line 410, Address: 0x3f4324, Func Offset: 0x2b4
	// Line 409, Address: 0x3f4328, Func Offset: 0x2b8
	// Line 410, Address: 0x3f4338, Func Offset: 0x2c8
	// Line 409, Address: 0x3f4340, Func Offset: 0x2d0
	// Line 410, Address: 0x3f434c, Func Offset: 0x2dc
	// Line 409, Address: 0x3f4350, Func Offset: 0x2e0
	// Line 410, Address: 0x3f4360, Func Offset: 0x2f0
	// Line 409, Address: 0x3f4364, Func Offset: 0x2f4
	// Line 410, Address: 0x3f4368, Func Offset: 0x2f8
	// Line 409, Address: 0x3f436c, Func Offset: 0x2fc
	// Line 410, Address: 0x3f437c, Func Offset: 0x30c
	// Line 409, Address: 0x3f4380, Func Offset: 0x310
	// Line 410, Address: 0x3f4388, Func Offset: 0x318
	// Line 409, Address: 0x3f4398, Func Offset: 0x328
	// Line 410, Address: 0x3f43a4, Func Offset: 0x334
	// Line 409, Address: 0x3f43a8, Func Offset: 0x338
	// Line 410, Address: 0x3f43b8, Func Offset: 0x348
	// Line 409, Address: 0x3f43cc, Func Offset: 0x35c
	// Line 410, Address: 0x3f43d0, Func Offset: 0x360
	// Line 412, Address: 0x3f43e4, Func Offset: 0x374
	// Line 416, Address: 0x3f44c0, Func Offset: 0x450
	// Line 417, Address: 0x3f44cc, Func Offset: 0x45c
	// Line 416, Address: 0x3f44dc, Func Offset: 0x46c
	// Line 417, Address: 0x3f450c, Func Offset: 0x49c
	// Line 418, Address: 0x3f4518, Func Offset: 0x4a8
	// Line 419, Address: 0x3f45c4, Func Offset: 0x554
	// Line 423, Address: 0x3f45cc, Func Offset: 0x55c
	// Line 440, Address: 0x3f45dc, Func Offset: 0x56c
	// Line 445, Address: 0x3f45e0, Func Offset: 0x570
	// Line 440, Address: 0x3f45e4, Func Offset: 0x574
	// Line 445, Address: 0x3f45ec, Func Offset: 0x57c
	// Line 452, Address: 0x3f45f0, Func Offset: 0x580
	// Line 443, Address: 0x3f45f4, Func Offset: 0x584
	// Line 452, Address: 0x3f45f8, Func Offset: 0x588
	// Line 440, Address: 0x3f45fc, Func Offset: 0x58c
	// Line 443, Address: 0x3f4610, Func Offset: 0x5a0
	// Line 445, Address: 0x3f4628, Func Offset: 0x5b8
	// Line 446, Address: 0x3f4670, Func Offset: 0x600
	// Line 447, Address: 0x3f467c, Func Offset: 0x60c
	// Line 448, Address: 0x3f46c4, Func Offset: 0x654
	// Line 452, Address: 0x3f46cc, Func Offset: 0x65c
	// Line 458, Address: 0x3f46d4, Func Offset: 0x664
	// Line 461, Address: 0x3f46d8, Func Offset: 0x668
	// Line 458, Address: 0x3f46dc, Func Offset: 0x66c
	// Line 461, Address: 0x3f46e0, Func Offset: 0x670
	// Line 459, Address: 0x3f46e4, Func Offset: 0x674
	// Line 458, Address: 0x3f46ec, Func Offset: 0x67c
	// Line 459, Address: 0x3f46f0, Func Offset: 0x680
	// Line 461, Address: 0x3f46f4, Func Offset: 0x684
	// Line 458, Address: 0x3f46fc, Func Offset: 0x68c
	// Line 459, Address: 0x3f4700, Func Offset: 0x690
	// Line 458, Address: 0x3f4704, Func Offset: 0x694
	// Line 459, Address: 0x3f4708, Func Offset: 0x698
	// Line 458, Address: 0x3f470c, Func Offset: 0x69c
	// Line 459, Address: 0x3f4714, Func Offset: 0x6a4
	// Line 458, Address: 0x3f471c, Func Offset: 0x6ac
	// Line 459, Address: 0x3f4720, Func Offset: 0x6b0
	// Line 458, Address: 0x3f4724, Func Offset: 0x6b4
	// Line 459, Address: 0x3f4728, Func Offset: 0x6b8
	// Line 461, Address: 0x3f4738, Func Offset: 0x6c8
	// Line 462, Address: 0x3f4740, Func Offset: 0x6d0
	// Line 465, Address: 0x3f4748, Func Offset: 0x6d8
	// Line 468, Address: 0x3f4754, Func Offset: 0x6e4
	// Line 470, Address: 0x3f4864, Func Offset: 0x7f4
	// Line 473, Address: 0x3f486c, Func Offset: 0x7fc
	// Line 474, Address: 0x3f4878, Func Offset: 0x808
	// Line 473, Address: 0x3f487c, Func Offset: 0x80c
	// Line 474, Address: 0x3f4884, Func Offset: 0x814
	// Line 475, Address: 0x3f488c, Func Offset: 0x81c
	// Line 474, Address: 0x3f4894, Func Offset: 0x824
	// Line 475, Address: 0x3f4898, Func Offset: 0x828
	// Line 476, Address: 0x3f489c, Func Offset: 0x82c
	// Line 477, Address: 0x3f48ac, Func Offset: 0x83c
	// Line 481, Address: 0x3f48b0, Func Offset: 0x840
	// Line 477, Address: 0x3f48b4, Func Offset: 0x844
	// Line 481, Address: 0x3f48b8, Func Offset: 0x848
	// Line 482, Address: 0x3f48c4, Func Offset: 0x854
	// Line 484, Address: 0x3f48fc, Func Offset: 0x88c
	// Line 485, Address: 0x3f4908, Func Offset: 0x898
	// Line 491, Address: 0x3f490c, Func Offset: 0x89c
	// Line 486, Address: 0x3f4914, Func Offset: 0x8a4
	// Line 491, Address: 0x3f491c, Func Offset: 0x8ac
	// Line 485, Address: 0x3f4924, Func Offset: 0x8b4
	// Line 486, Address: 0x3f4930, Func Offset: 0x8c0
	// Line 487, Address: 0x3f4968, Func Offset: 0x8f8
	// Line 491, Address: 0x3f4988, Func Offset: 0x918
	// Line 492, Address: 0x3f4990, Func Offset: 0x920
	// Line 499, Address: 0x3f4998, Func Offset: 0x928
	// Line 501, Address: 0x3f49a8, Func Offset: 0x938
	// Line 505, Address: 0x3f49ac, Func Offset: 0x93c
	// Line 508, Address: 0x3f49b4, Func Offset: 0x944
	// Line 509, Address: 0x3f49cc, Func Offset: 0x95c
	// Line 510, Address: 0x3f49e0, Func Offset: 0x970
	// Line 512, Address: 0x3f49e4, Func Offset: 0x974
	// Line 515, Address: 0x3f49ec, Func Offset: 0x97c
	// Line 517, Address: 0x3f49f0, Func Offset: 0x980
	// Line 522, Address: 0x3f4a40, Func Offset: 0x9d0
	// Line 525, Address: 0x3f4a58, Func Offset: 0x9e8
	// Line 526, Address: 0x3f4a88, Func Offset: 0xa18
	// Line 527, Address: 0x3f4a9c, Func Offset: 0xa2c
	// Line 528, Address: 0x3f4acc, Func Offset: 0xa5c
	// Line 529, Address: 0x3f4adc, Func Offset: 0xa6c
	// Line 531, Address: 0x3f4afc, Func Offset: 0xa8c
	// Line 532, Address: 0x3f4b0c, Func Offset: 0xa9c
	// Line 537, Address: 0x3f4b3c, Func Offset: 0xacc
	// Line 540, Address: 0x3f4b58, Func Offset: 0xae8
	// Line 544, Address: 0x3f4b94, Func Offset: 0xb24
	// Line 546, Address: 0x3f4ba0, Func Offset: 0xb30
	// Line 548, Address: 0x3f4bdc, Func Offset: 0xb6c
	// Line 553, Address: 0x3f4be0, Func Offset: 0xb70
	// Line 556, Address: 0x3f4c28, Func Offset: 0xbb8
	// Line 555, Address: 0x3f4c30, Func Offset: 0xbc0
	// Line 556, Address: 0x3f4c34, Func Offset: 0xbc4
	// Line 559, Address: 0x3f4c48, Func Offset: 0xbd8
	// Line 567, Address: 0x3f4c78, Func Offset: 0xc08
	// Line 569, Address: 0x3f4c8c, Func Offset: 0xc1c
	// Line 570, Address: 0x3f4cbc, Func Offset: 0xc4c
	// Line 571, Address: 0x3f4ccc, Func Offset: 0xc5c
	// Line 574, Address: 0x3f4ce4, Func Offset: 0xc74
	// Line 571, Address: 0x3f4ce8, Func Offset: 0xc78
	// Line 574, Address: 0x3f4cec, Func Offset: 0xc7c
	// Line 571, Address: 0x3f4cf0, Func Offset: 0xc80
	// Line 574, Address: 0x3f4cfc, Func Offset: 0xc8c
	// Line 575, Address: 0x3f4d2c, Func Offset: 0xcbc
	// Line 574, Address: 0x3f4d30, Func Offset: 0xcc0
	// Line 577, Address: 0x3f4d34, Func Offset: 0xcc4
	// Line 574, Address: 0x3f4d38, Func Offset: 0xcc8
	// Line 576, Address: 0x3f4d3c, Func Offset: 0xccc
	// Line 577, Address: 0x3f4d40, Func Offset: 0xcd0
	// Line 584, Address: 0x3f4d4c, Func Offset: 0xcdc
	// Line 587, Address: 0x3f4d5c, Func Offset: 0xcec
	// Line 584, Address: 0x3f4d60, Func Offset: 0xcf0
	// Line 587, Address: 0x3f4d68, Func Offset: 0xcf8
	// Line 584, Address: 0x3f4d6c, Func Offset: 0xcfc
	// Line 587, Address: 0x3f4d70, Func Offset: 0xd00
	// Line 584, Address: 0x3f4d74, Func Offset: 0xd04
	// Line 587, Address: 0x3f4d7c, Func Offset: 0xd0c
	// Line 584, Address: 0x3f4d8c, Func Offset: 0xd1c
	// Line 587, Address: 0x3f4d90, Func Offset: 0xd20
	// Line 590, Address: 0x3f4dc4, Func Offset: 0xd54
	// Line 592, Address: 0x3f4de4, Func Offset: 0xd74
	// Line 593, Address: 0x3f4df0, Func Offset: 0xd80
	// Line 592, Address: 0x3f4df4, Func Offset: 0xd84
	// Line 593, Address: 0x3f4e00, Func Offset: 0xd90
	// Line 595, Address: 0x3f4e30, Func Offset: 0xdc0
	// Line 596, Address: 0x3f4e38, Func Offset: 0xdc8
	// Line 595, Address: 0x3f4e3c, Func Offset: 0xdcc
	// Line 596, Address: 0x3f4e68, Func Offset: 0xdf8
	// Line 598, Address: 0x3f4e98, Func Offset: 0xe28
	// Line 600, Address: 0x3f4eb8, Func Offset: 0xe48
	// Line 603, Address: 0x3f4ec4, Func Offset: 0xe54
	// Line 604, Address: 0x3f4ec8, Func Offset: 0xe58
	// Line 605, Address: 0x3f4ed8, Func Offset: 0xe68
	// Line 606, Address: 0x3f4ee4, Func Offset: 0xe74
	// Line 609, Address: 0x3f4ef0, Func Offset: 0xe80
	// Line 611, Address: 0x3f4f10, Func Offset: 0xea0
	// Line 615, Address: 0x3f4f44, Func Offset: 0xed4
	// Line 617, Address: 0x3f4f64, Func Offset: 0xef4
	// Line 620, Address: 0x3f4f68, Func Offset: 0xef8
	// Line 619, Address: 0x3f4f70, Func Offset: 0xf00
	// Line 620, Address: 0x3f4f74, Func Offset: 0xf04
	// Line 623, Address: 0x3f4f88, Func Offset: 0xf18
	// Line 631, Address: 0x3f4fb8, Func Offset: 0xf48
	// Line 632, Address: 0x3f4fcc, Func Offset: 0xf5c
	// Line 633, Address: 0x3f4ffc, Func Offset: 0xf8c
	// Line 634, Address: 0x3f500c, Func Offset: 0xf9c
	// Line 636, Address: 0x3f502c, Func Offset: 0xfbc
	// Line 637, Address: 0x3f503c, Func Offset: 0xfcc
	// Line 640, Address: 0x3f5040, Func Offset: 0xfd0
	// Line 637, Address: 0x3f5058, Func Offset: 0xfe8
	// Line 640, Address: 0x3f505c, Func Offset: 0xfec
	// Line 642, Address: 0x3f50a0, Func Offset: 0x1030
	// Line 644, Address: 0x3f50a4, Func Offset: 0x1034
	// Line 646, Address: 0x3f50a8, Func Offset: 0x1038
	// Line 649, Address: 0x3f50f0, Func Offset: 0x1080
	// Line 648, Address: 0x3f50f4, Func Offset: 0x1084
	// Line 649, Address: 0x3f50f8, Func Offset: 0x1088
	// Line 648, Address: 0x3f50fc, Func Offset: 0x108c
	// Line 649, Address: 0x3f5100, Func Offset: 0x1090
	// Line 673, Address: 0x3f511c, Func Offset: 0x10ac
	// Line 675, Address: 0x3f5120, Func Offset: 0x10b0
	// Line 680, Address: 0x3f5140, Func Offset: 0x10d0
	// Line 689, Address: 0x3f5168, Func Offset: 0x10f8
	// Line 690, Address: 0x3f517c, Func Offset: 0x110c
	// Line 689, Address: 0x3f5198, Func Offset: 0x1128
	// Line 690, Address: 0x3f51b4, Func Offset: 0x1144
	// Line 691, Address: 0x3f51bc, Func Offset: 0x114c
	// Line 696, Address: 0x3f51e0, Func Offset: 0x1170
	// Line 697, Address: 0x3f5200, Func Offset: 0x1190
	// Line 701, Address: 0x3f5204, Func Offset: 0x1194
	// Line 703, Address: 0x3f5208, Func Offset: 0x1198
	// Line 702, Address: 0x3f5210, Func Offset: 0x11a0
	// Line 703, Address: 0x3f5214, Func Offset: 0x11a4
	// Line 706, Address: 0x3f5228, Func Offset: 0x11b8
	// Line 712, Address: 0x3f5254, Func Offset: 0x11e4
	// Line 713, Address: 0x3f5268, Func Offset: 0x11f8
	// Line 714, Address: 0x3f5294, Func Offset: 0x1224
	// Line 715, Address: 0x3f52a0, Func Offset: 0x1230
	// Line 717, Address: 0x3f52c0, Func Offset: 0x1250
	// Line 720, Address: 0x3f52f0, Func Offset: 0x1280
	// Line 722, Address: 0x3f5338, Func Offset: 0x12c8
	// Line 733, Address: 0x3f534c, Func Offset: 0x12dc
	// Line 735, Address: 0x3f535c, Func Offset: 0x12ec
	// Line 737, Address: 0x3f5388, Func Offset: 0x1318
	// Line 740, Address: 0x3f5390, Func Offset: 0x1320
	// Line 742, Address: 0x3f53bc, Func Offset: 0x134c
	// Line 744, Address: 0x3f53c0, Func Offset: 0x1350
	// Line 746, Address: 0x3f53d4, Func Offset: 0x1364
	// Line 748, Address: 0x3f53ec, Func Offset: 0x137c
	// Line 750, Address: 0x3f53f8, Func Offset: 0x1388
	// Line 751, Address: 0x3f5408, Func Offset: 0x1398
	// Line 752, Address: 0x3f5418, Func Offset: 0x13a8
	// Line 759, Address: 0x3f5428, Func Offset: 0x13b8
	// Line 760, Address: 0x3f5438, Func Offset: 0x13c8
	// Line 761, Address: 0x3f545c, Func Offset: 0x13ec
	// Line 763, Address: 0x3f5480, Func Offset: 0x1410
	// Line 764, Address: 0x3f54ac, Func Offset: 0x143c
	// Line 766, Address: 0x3f54b0, Func Offset: 0x1440
	// Line 775, Address: 0x3f54bc, Func Offset: 0x144c
	// Line 777, Address: 0x3f54c0, Func Offset: 0x1450
	// Line 776, Address: 0x3f54c8, Func Offset: 0x1458
	// Line 777, Address: 0x3f54cc, Func Offset: 0x145c
	// Line 779, Address: 0x3f54e0, Func Offset: 0x1470
	// Line 780, Address: 0x3f5500, Func Offset: 0x1490
	// Line 789, Address: 0x3f5540, Func Offset: 0x14d0
	// Line 790, Address: 0x3f554c, Func Offset: 0x14dc
	// Line 780, Address: 0x3f5550, Func Offset: 0x14e0
	// Line 790, Address: 0x3f5554, Func Offset: 0x14e4
	// Line 780, Address: 0x3f5558, Func Offset: 0x14e8
	// Line 789, Address: 0x3f555c, Func Offset: 0x14ec
	// Line 795, Address: 0x3f5574, Func Offset: 0x1504
	// Line 790, Address: 0x3f5580, Func Offset: 0x1510
	// Line 794, Address: 0x3f55c0, Func Offset: 0x1550
	// Line 795, Address: 0x3f55c8, Func Offset: 0x1558
	// Line 790, Address: 0x3f55cc, Func Offset: 0x155c
	// Line 794, Address: 0x3f55d0, Func Offset: 0x1560
	// Line 795, Address: 0x3f55d4, Func Offset: 0x1564
	// Line 796, Address: 0x3f55e0, Func Offset: 0x1570
	// Line 797, Address: 0x3f55f0, Func Offset: 0x1580
	// Line 798, Address: 0x3f5608, Func Offset: 0x1598
	// Line 804, Address: 0x3f562c, Func Offset: 0x15bc
	// Line 805, Address: 0x3f5630, Func Offset: 0x15c0
	// Line 806, Address: 0x3f5638, Func Offset: 0x15c8
	// Line 807, Address: 0x3f5674, Func Offset: 0x1604
	// Line 810, Address: 0x3f5678, Func Offset: 0x1608
	// Line 811, Address: 0x3f5688, Func Offset: 0x1618
	// Line 813, Address: 0x3f5694, Func Offset: 0x1624
	// Line 816, Address: 0x3f56e4, Func Offset: 0x1674
	// Line 817, Address: 0x3f56e8, Func Offset: 0x1678
	// Line 816, Address: 0x3f56f0, Func Offset: 0x1680
	// Line 813, Address: 0x3f56f8, Func Offset: 0x1688
	// Line 816, Address: 0x3f5700, Func Offset: 0x1690
	// Line 813, Address: 0x3f5704, Func Offset: 0x1694
	// Line 816, Address: 0x3f5708, Func Offset: 0x1698
	// Line 817, Address: 0x3f570c, Func Offset: 0x169c
	// Line 816, Address: 0x3f5710, Func Offset: 0x16a0
	// Line 817, Address: 0x3f5718, Func Offset: 0x16a8
	// Line 818, Address: 0x3f5720, Func Offset: 0x16b0
	// Line 826, Address: 0x3f5760, Func Offset: 0x16f0
	// Line 829, Address: 0x3f5774, Func Offset: 0x1704
	// Line 828, Address: 0x3f5778, Func Offset: 0x1708
	// Line 830, Address: 0x3f577c, Func Offset: 0x170c
	// Line 828, Address: 0x3f5780, Func Offset: 0x1710
	// Line 830, Address: 0x3f5784, Func Offset: 0x1714
	// Line 829, Address: 0x3f5788, Func Offset: 0x1718
	// Line 830, Address: 0x3f5798, Func Offset: 0x1728
	// Line 829, Address: 0x3f579c, Func Offset: 0x172c
	// Line 830, Address: 0x3f57b8, Func Offset: 0x1748
	// Line 829, Address: 0x3f57d4, Func Offset: 0x1764
	// Line 830, Address: 0x3f57d8, Func Offset: 0x1768
	// Line 835, Address: 0x3f57f0, Func Offset: 0x1780
	// Line 837, Address: 0x3f5804, Func Offset: 0x1794
	// Line 839, Address: 0x3f5810, Func Offset: 0x17a0
	// Line 842, Address: 0x3f5824, Func Offset: 0x17b4
	// Line 843, Address: 0x3f5830, Func Offset: 0x17c0
	// Line 842, Address: 0x3f5838, Func Offset: 0x17c8
	// Line 843, Address: 0x3f583c, Func Offset: 0x17cc
	// Line 845, Address: 0x3f584c, Func Offset: 0x17dc
	// Line 848, Address: 0x3f58dc, Func Offset: 0x186c
	// Line 850, Address: 0x3f58e8, Func Offset: 0x1878
	// Line 851, Address: 0x3f58fc, Func Offset: 0x188c
	// Line 852, Address: 0x3f5904, Func Offset: 0x1894
	// Line 854, Address: 0x3f5910, Func Offset: 0x18a0
	// Line 855, Address: 0x3f5924, Func Offset: 0x18b4
	// Line 858, Address: 0x3f592c, Func Offset: 0x18bc
	// Line 860, Address: 0x3f5950, Func Offset: 0x18e0
	// Line 858, Address: 0x3f5954, Func Offset: 0x18e4
	// Line 860, Address: 0x3f5958, Func Offset: 0x18e8
	// Line 858, Address: 0x3f595c, Func Offset: 0x18ec
	// Line 860, Address: 0x3f5960, Func Offset: 0x18f0
	// Line 861, Address: 0x3f5964, Func Offset: 0x18f4
	// Line 860, Address: 0x3f5968, Func Offset: 0x18f8
	// Line 861, Address: 0x3f597c, Func Offset: 0x190c
	// Line 868, Address: 0x3f59c8, Func Offset: 0x1958
	// Line 869, Address: 0x3f59e8, Func Offset: 0x1978
	// Line 870, Address: 0x3f59fc, Func Offset: 0x198c
	// Line 871, Address: 0x3f5a04, Func Offset: 0x1994
	// Line 874, Address: 0x3f5a40, Func Offset: 0x19d0
	// Line 875, Address: 0x3f5a4c, Func Offset: 0x19dc
	// Line 877, Address: 0x3f5a50, Func Offset: 0x19e0
	// Line 875, Address: 0x3f5a54, Func Offset: 0x19e4
	// Line 877, Address: 0x3f5a58, Func Offset: 0x19e8
	// Line 876, Address: 0x3f5a5c, Func Offset: 0x19ec
	// Line 875, Address: 0x3f5a60, Func Offset: 0x19f0
	// Line 876, Address: 0x3f5a88, Func Offset: 0x1a18
	// Line 877, Address: 0x3f5ac8, Func Offset: 0x1a58
	// Line 879, Address: 0x3f5aec, Func Offset: 0x1a7c
	// Line 880, Address: 0x3f5af8, Func Offset: 0x1a88
	// Line 879, Address: 0x3f5afc, Func Offset: 0x1a8c
	// Line 880, Address: 0x3f5b04, Func Offset: 0x1a94
	// Line 881, Address: 0x3f5b08, Func Offset: 0x1a98
	// Line 880, Address: 0x3f5b1c, Func Offset: 0x1aac
	// Line 881, Address: 0x3f5b28, Func Offset: 0x1ab8
	// Line 886, Address: 0x3f5b3c, Func Offset: 0x1acc
	// Line 881, Address: 0x3f5b40, Func Offset: 0x1ad0
	// Line 886, Address: 0x3f5b44, Func Offset: 0x1ad4
	// Line 887, Address: 0x3f5b50, Func Offset: 0x1ae0
	// Line 889, Address: 0x3f5b58, Func Offset: 0x1ae8
	// Line 887, Address: 0x3f5b5c, Func Offset: 0x1aec
	// Line 889, Address: 0x3f5b64, Func Offset: 0x1af4
	// Line 890, Address: 0x3f5b70, Func Offset: 0x1b00
	// Line 893, Address: 0x3f5b78, Func Offset: 0x1b08
	// Line 895, Address: 0x3f5bb4, Func Offset: 0x1b44
	// Line 896, Address: 0x3f5bd0, Func Offset: 0x1b60
	// Line 900, Address: 0x3f5bdc, Func Offset: 0x1b6c
	// Line 901, Address: 0x3f5c30, Func Offset: 0x1bc0
	// Line 904, Address: 0x3f5c34, Func Offset: 0x1bc4
	// Line 901, Address: 0x3f5c38, Func Offset: 0x1bc8
	// Line 904, Address: 0x3f5c3c, Func Offset: 0x1bcc
	// Line 901, Address: 0x3f5c40, Func Offset: 0x1bd0
	// Line 904, Address: 0x3f5c48, Func Offset: 0x1bd8
	// Line 901, Address: 0x3f5c4c, Func Offset: 0x1bdc
	// Line 904, Address: 0x3f5c74, Func Offset: 0x1c04
	// Line 907, Address: 0x3f5c80, Func Offset: 0x1c10
	// Line 908, Address: 0x3f5c8c, Func Offset: 0x1c1c
	// Line 909, Address: 0x3f5ca4, Func Offset: 0x1c34
	// Line 910, Address: 0x3f5cb8, Func Offset: 0x1c48
	// Line 912, Address: 0x3f5ccc, Func Offset: 0x1c5c
	// Line 914, Address: 0x3f5cdc, Func Offset: 0x1c6c
	// Line 919, Address: 0x3f5d04, Func Offset: 0x1c94
	// Line 920, Address: 0x3f5d14, Func Offset: 0x1ca4
	// Line 923, Address: 0x3f5d20, Func Offset: 0x1cb0
	// Line 924, Address: 0x3f5d2c, Func Offset: 0x1cbc
	// Line 925, Address: 0x3f5d3c, Func Offset: 0x1ccc
	// Line 927, Address: 0x3f5d44, Func Offset: 0x1cd4
	// Line 928, Address: 0x3f5d4c, Func Offset: 0x1cdc
	// Line 932, Address: 0x3f5d58, Func Offset: 0x1ce8
	// Line 933, Address: 0x3f5d60, Func Offset: 0x1cf0
	// Line 937, Address: 0x3f5d8c, Func Offset: 0x1d1c
	// Line 938, Address: 0x3f5da0, Func Offset: 0x1d30
	// Line 940, Address: 0x3f5da4, Func Offset: 0x1d34
	// Func End, Address: 0x3f5de4, Func Offset: 0x1d74
}

// xEntBoulder_RealBUpdate__FP4xEntP5xVec3
// Start address: 0x3f5df0
void xEntBoulder_RealBUpdate(xEnt* ent, xVec3* pos)
{
	xEntBoulder* boul;
	xVec3 rotatedLC;
	// Line 347, Address: 0x3f5df0, Func Offset: 0
	// Line 352, Address: 0x3f5df8, Func Offset: 0x8
	// Line 347, Address: 0x3f5dfc, Func Offset: 0xc
	// Line 352, Address: 0x3f5e00, Func Offset: 0x10
	// Line 348, Address: 0x3f5e04, Func Offset: 0x14
	// Line 352, Address: 0x3f5e08, Func Offset: 0x18
	// Line 353, Address: 0x3f5e54, Func Offset: 0x64
	// Line 355, Address: 0x3f5e58, Func Offset: 0x68
	// Line 353, Address: 0x3f5e5c, Func Offset: 0x6c
	// Line 355, Address: 0x3f5e84, Func Offset: 0x94
	// Line 356, Address: 0x3f5e8c, Func Offset: 0x9c
	// Line 359, Address: 0x3f5e94, Func Offset: 0xa4
	// Func End, Address: 0x3f5ea4, Func Offset: 0xb4
}

// xEntBoulder_BUpdate__FP4xEntP5xVec3
// Start address: 0x3f5eb0
void xEntBoulder_BUpdate()
{
	// Line 345, Address: 0x3f5eb0, Func Offset: 0
	// Func End, Address: 0x3f5eb8, Func Offset: 0x8
}

// xEntBoulder_AddForce__FP11xEntBoulderP5xVec3
// Start address: 0x3f5ec0
void xEntBoulder_AddForce(xEntBoulder* ent, xVec3* force)
{
	// Line 335, Address: 0x3f5ec0, Func Offset: 0
	// Line 338, Address: 0x3f5ecc, Func Offset: 0xc
	// Line 336, Address: 0x3f5edc, Func Offset: 0x1c
	// Line 338, Address: 0x3f5ee0, Func Offset: 0x20
	// Line 336, Address: 0x3f5eec, Func Offset: 0x2c
	// Line 338, Address: 0x3f5ef0, Func Offset: 0x30
	// Line 336, Address: 0x3f5efc, Func Offset: 0x3c
	// Line 338, Address: 0x3f5f08, Func Offset: 0x48
	// Func End, Address: 0x3f5f10, Func Offset: 0x50
}

// xEntBoulder_AddInstantForce__FP11xEntBoulderP5xVec3
// Start address: 0x3f5f10
void xEntBoulder_AddInstantForce(xEntBoulder* ent, xVec3* force)
{
	// Line 329, Address: 0x3f5f10, Func Offset: 0
	// Line 332, Address: 0x3f5f1c, Func Offset: 0xc
	// Line 330, Address: 0x3f5f2c, Func Offset: 0x1c
	// Line 332, Address: 0x3f5f30, Func Offset: 0x20
	// Line 330, Address: 0x3f5f3c, Func Offset: 0x2c
	// Line 332, Address: 0x3f5f40, Func Offset: 0x30
	// Line 330, Address: 0x3f5f4c, Func Offset: 0x3c
	// Line 332, Address: 0x3f5f58, Func Offset: 0x48
	// Func End, Address: 0x3f5f60, Func Offset: 0x50
}

// xEntBoulder_ApplyForces__FP10xEntCollis
// Start address: 0x3f5f60
void xEntBoulder_ApplyForces(xEntCollis* collis)
{
	int32 i;
	xEntBoulder* boul;
	xEntDrive* drv;
	// Line 280, Address: 0x3f5f60, Func Offset: 0
	// Line 283, Address: 0x3f5f78, Func Offset: 0x18
	// Line 284, Address: 0x3f5fa8, Func Offset: 0x48
	// Line 286, Address: 0x3f5fb0, Func Offset: 0x50
	// Line 289, Address: 0x3f5fc0, Func Offset: 0x60
	// Line 293, Address: 0x3f5fcc, Func Offset: 0x6c
	// Line 289, Address: 0x3f5fd4, Func Offset: 0x74
	// Line 295, Address: 0x3f5fd8, Func Offset: 0x78
	// Line 289, Address: 0x3f5fdc, Func Offset: 0x7c
	// Line 295, Address: 0x3f5fe8, Func Offset: 0x88
	// Line 299, Address: 0x3f5ffc, Func Offset: 0x9c
	// Line 300, Address: 0x3f6000, Func Offset: 0xa0
	// Line 301, Address: 0x3f6010, Func Offset: 0xb0
	// Line 310, Address: 0x3f6024, Func Offset: 0xc4
	// Line 312, Address: 0x3f6034, Func Offset: 0xd4
	// Line 315, Address: 0x3f603c, Func Offset: 0xdc
	// Line 319, Address: 0x3f6060, Func Offset: 0x100
	// Line 321, Address: 0x3f6068, Func Offset: 0x108
	// Line 325, Address: 0x3f607c, Func Offset: 0x11c
	// Line 326, Address: 0x3f6098, Func Offset: 0x138
	// Line 295, Address: 0x3f60a4, Func Offset: 0x144
	// Line 326, Address: 0x3f60b4, Func Offset: 0x154
	// Line 297, Address: 0x3f60bc, Func Offset: 0x15c
	// Line 326, Address: 0x3f60c8, Func Offset: 0x168
	// Line 300, Address: 0x3f60cc, Func Offset: 0x16c
	// Line 326, Address: 0x3f60d0, Func Offset: 0x170
	// Line 300, Address: 0x3f60d8, Func Offset: 0x178
	// Line 326, Address: 0x3f60dc, Func Offset: 0x17c
	// Line 300, Address: 0x3f60e4, Func Offset: 0x184
	// Line 326, Address: 0x3f60f0, Func Offset: 0x190
	// Func End, Address: 0x3f610c, Func Offset: 0x1ac
}

// xEntBoulder_Init__FP11xEntBoulderP9xEntAsset
// Start address: 0x3f6110
void xEntBoulder_Init(xEntBoulder* ent, xEntAsset* asset)
{
	xEntBoulderAsset* basset;
	// Line 176, Address: 0x3f6110, Func Offset: 0
	// Line 178, Address: 0x3f6128, Func Offset: 0x18
	// Line 180, Address: 0x3f6130, Func Offset: 0x20
	// Line 182, Address: 0x3f6134, Func Offset: 0x24
	// Line 180, Address: 0x3f6138, Func Offset: 0x28
	// Line 181, Address: 0x3f613c, Func Offset: 0x2c
	// Line 182, Address: 0x3f6140, Func Offset: 0x30
	// Line 183, Address: 0x3f6144, Func Offset: 0x34
	// Line 185, Address: 0x3f6150, Func Offset: 0x40
	// Line 188, Address: 0x3f615c, Func Offset: 0x4c
	// Line 189, Address: 0x3f6160, Func Offset: 0x50
	// Line 188, Address: 0x3f6164, Func Offset: 0x54
	// Line 190, Address: 0x3f6168, Func Offset: 0x58
	// Line 189, Address: 0x3f616c, Func Offset: 0x5c
	// Line 190, Address: 0x3f6170, Func Offset: 0x60
	// Line 191, Address: 0x3f617c, Func Offset: 0x6c
	// Line 192, Address: 0x3f6184, Func Offset: 0x74
	// Line 204, Address: 0x3f6188, Func Offset: 0x78
	// Line 191, Address: 0x3f618c, Func Offset: 0x7c
	// Line 192, Address: 0x3f61a0, Func Offset: 0x90
	// Line 193, Address: 0x3f61b0, Func Offset: 0xa0
	// Line 204, Address: 0x3f61b8, Func Offset: 0xa8
	// Line 205, Address: 0x3f61c8, Func Offset: 0xb8
	// Line 217, Address: 0x3f61d8, Func Offset: 0xc8
	// Line 215, Address: 0x3f61dc, Func Offset: 0xcc
	// Line 208, Address: 0x3f61e0, Func Offset: 0xd0
	// Line 217, Address: 0x3f61e4, Func Offset: 0xd4
	// Line 216, Address: 0x3f61e8, Func Offset: 0xd8
	// Line 217, Address: 0x3f61ec, Func Offset: 0xdc
	// Line 218, Address: 0x3f61f0, Func Offset: 0xe0
	// Line 219, Address: 0x3f61fc, Func Offset: 0xec
	// Line 220, Address: 0x3f6208, Func Offset: 0xf8
	// Line 222, Address: 0x3f6214, Func Offset: 0x104
	// Line 223, Address: 0x3f6220, Func Offset: 0x110
	// Line 225, Address: 0x3f6230, Func Offset: 0x120
	// Line 228, Address: 0x3f6234, Func Offset: 0x124
	// Line 231, Address: 0x3f62c0, Func Offset: 0x1b0
	// Line 228, Address: 0x3f62c8, Func Offset: 0x1b8
	// Line 231, Address: 0x3f6310, Func Offset: 0x200
	// Line 234, Address: 0x3f6320, Func Offset: 0x210
	// Line 238, Address: 0x3f6330, Func Offset: 0x220
	// Line 250, Address: 0x3f634c, Func Offset: 0x23c
	// Line 264, Address: 0x3f6368, Func Offset: 0x258
	// Line 265, Address: 0x3f6370, Func Offset: 0x260
	// Line 266, Address: 0x3f6374, Func Offset: 0x264
	// Line 273, Address: 0x3f6378, Func Offset: 0x268
	// Line 276, Address: 0x3f6388, Func Offset: 0x278
	// Line 278, Address: 0x3f6390, Func Offset: 0x280
	// Line 241, Address: 0x3f63a8, Func Offset: 0x298
	// Line 278, Address: 0x3f63ac, Func Offset: 0x29c
	// Line 253, Address: 0x3f63e8, Func Offset: 0x2d8
	// Line 278, Address: 0x3f63ec, Func Offset: 0x2dc
	// Func End, Address: 0x3f6444, Func Offset: 0x334
}

// xEntBoulder_Init__FPvPv
// Start address: 0x3f6450
void xEntBoulder_Init(void* ent, void* asset)
{
	// Line 172, Address: 0x3f6450, Func Offset: 0
	// Func End, Address: 0x3f6458, Func Offset: 0x8
}

// xEntBoulder_Render__FP4xEnt
// Start address: 0x3f6460
void xEntBoulder_Render(xEnt* ent)
{
	xModelInstance* model;
	int32 shadowResult;
	xVec3 shadVec;
	float32 radius;
	float32 radius;
	// Line 118, Address: 0x3f6460, Func Offset: 0
	// Line 120, Address: 0x3f6470, Func Offset: 0x10
	// Line 121, Address: 0x3f6474, Func Offset: 0x14
	// Line 125, Address: 0x3f64a4, Func Offset: 0x44
	// Line 134, Address: 0x3f64b4, Func Offset: 0x54
	// Line 135, Address: 0x3f64b8, Func Offset: 0x58
	// Line 134, Address: 0x3f64c0, Func Offset: 0x60
	// Line 135, Address: 0x3f64c8, Func Offset: 0x68
	// Line 136, Address: 0x3f64d8, Func Offset: 0x78
	// Line 137, Address: 0x3f64e4, Func Offset: 0x84
	// Line 141, Address: 0x3f650c, Func Offset: 0xac
	// Line 143, Address: 0x3f651c, Func Offset: 0xbc
	// Line 148, Address: 0x3f6528, Func Offset: 0xc8
	// Line 161, Address: 0x3f6534, Func Offset: 0xd4
	// Line 162, Address: 0x3f6538, Func Offset: 0xd8
	// Line 161, Address: 0x3f6540, Func Offset: 0xe0
	// Line 162, Address: 0x3f6548, Func Offset: 0xe8
	// Line 163, Address: 0x3f6554, Func Offset: 0xf4
	// Line 164, Address: 0x3f6558, Func Offset: 0xf8
	// Line 168, Address: 0x3f6578, Func Offset: 0x118
	// Line 128, Address: 0x3f6580, Func Offset: 0x120
	// Line 168, Address: 0x3f6584, Func Offset: 0x124
	// Line 130, Address: 0x3f658c, Func Offset: 0x12c
	// Line 139, Address: 0x3f6594, Func Offset: 0x134
	// Line 168, Address: 0x3f6598, Func Offset: 0x138
	// Line 146, Address: 0x3f65b0, Func Offset: 0x150
	// Line 151, Address: 0x3f65b8, Func Offset: 0x158
	// Line 168, Address: 0x3f65bc, Func Offset: 0x15c
	// Line 153, Address: 0x3f65c8, Func Offset: 0x168
	// Line 168, Address: 0x3f65d0, Func Offset: 0x170
	// Line 153, Address: 0x3f65d8, Func Offset: 0x178
	// Line 168, Address: 0x3f65dc, Func Offset: 0x17c
	// Line 154, Address: 0x3f65e4, Func Offset: 0x184
	// Line 155, Address: 0x3f65e8, Func Offset: 0x188
	// Line 168, Address: 0x3f65f4, Func Offset: 0x194
	// Line 155, Address: 0x3f65f8, Func Offset: 0x198
	// Line 168, Address: 0x3f6600, Func Offset: 0x1a0
	// Line 157, Address: 0x3f6608, Func Offset: 0x1a8
	// Line 168, Address: 0x3f6610, Func Offset: 0x1b0
	// Func End, Address: 0x3f6624, Func Offset: 0x1c4
}

