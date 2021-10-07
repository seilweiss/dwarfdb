



void xModelBucket_PreAllocModelPipe(RpAtomic* m);
void xModelBucket_Deinit();
void xModelBucket_RenderAlphaEnd();
uint8 xModelBucket_RenderAny(int32 maxLayer);
void xModelBucket_RenderAlphaLayer(int32 maxLayer);
void xModelBucket_RenderAlphaLayerInternal(int32 maxLayer);
void xModelBucket_RenderAlphaBegin();
void xModelBucket_RenderOpaque(int32 maxLayer);
void xModelBucket_RenderOpaqueBegin();
void xModelBucket_AddAlphaFade(xModelInstance* minst, float32 alphaFade);
void xModelBucket_Add(xModelInstance* minst);
void xModelBucket_Begin();
xModelBucket** xModelBucket_GetBuckets(RpAtomic* data);
void xModelBucket_Init();
void xModelBucket_InsertBucket(RpAtomic* data, xModelPipe& pipe, uint32 subObjects);
void xModelBucket_SetMaterialFX(RpAtomic* model, xModelPipe& pipe);
void FullAtomicDupe(RpAtomic* atomic, int32 count, RpAtomic** output);
RpAtomic* GimmeAtomicCallback(RpAtomic* atomic, void* tmp);
void xModelBucket_PreCountAlloc(int32 maxAlphaModels);
void xModelBucket_PreCountBucket(RpAtomic* data, xModelPipe& pipe, uint32 subObjects);
void xModelBucket_PreCountReset();
int32 compare_opaque_buckets(void* e1, void* e2);

// xModelBucket_PreAllocModelPipe__FP8RpAtomic
// Start address: 0x405d60
void xModelBucket_PreAllocModelPipe(RpAtomic* m)
{
	// Line 2098, Address: 0x405d60, Func Offset: 0
	// Line 2100, Address: 0x405d70, Func Offset: 0x10
	// Line 2101, Address: 0x405d78, Func Offset: 0x18
	// Line 2102, Address: 0x405d88, Func Offset: 0x28
	// Line 2104, Address: 0x405d98, Func Offset: 0x38
	// Line 2105, Address: 0x405da4, Func Offset: 0x44
	// Line 2107, Address: 0x405db0, Func Offset: 0x50
	// Func End, Address: 0x405dc0, Func Offset: 0x60
}

// xModelBucket_Deinit__Fv
// Start address: 0x405dc0
void xModelBucket_Deinit()
{
	int32 i;
	// Line 2070, Address: 0x405dc0, Func Offset: 0
	// Line 2073, Address: 0x405dd0, Func Offset: 0x10
	// Line 2074, Address: 0x405dec, Func Offset: 0x2c
	// Line 2078, Address: 0x405dfc, Func Offset: 0x3c
	// Line 2080, Address: 0x405e04, Func Offset: 0x44
	// Line 2089, Address: 0x405e14, Func Offset: 0x54
	// Line 2090, Address: 0x405e18, Func Offset: 0x58
	// Line 2093, Address: 0x405e30, Func Offset: 0x70
	// Line 2094, Address: 0x405e58, Func Offset: 0x98
	// Func End, Address: 0x405e6c, Func Offset: 0xac
}

// xModelBucket_RenderAlphaEnd__Fv
// Start address: 0x405e70
void xModelBucket_RenderAlphaEnd()
{
	// Line 2063, Address: 0x405e70, Func Offset: 0
	// Func End, Address: 0x405e78, Func Offset: 0x8
}

// xModelBucket_RenderAny__Fi
// Start address: 0x405e80
uint8 xModelBucket_RenderAny(int32 maxLayer)
{
	// Line 2053, Address: 0x405e80, Func Offset: 0
	// Line 2054, Address: 0x405e84, Func Offset: 0x4
	// Line 2055, Address: 0x405eb8, Func Offset: 0x38
	// Line 2056, Address: 0x405ec0, Func Offset: 0x40
	// Line 2058, Address: 0x405efc, Func Offset: 0x7c
	// Func End, Address: 0x405f04, Func Offset: 0x84
}

// xModelBucket_RenderAlphaLayer__Fi
// Start address: 0x405f10
void xModelBucket_RenderAlphaLayer(int32 maxLayer)
{
	int32 lastLayer;
	int32 layer;
	// Line 2034, Address: 0x405f10, Func Offset: 0
	// Line 2035, Address: 0x405f14, Func Offset: 0x4
	// Line 2034, Address: 0x405f18, Func Offset: 0x8
	// Line 2035, Address: 0x405f24, Func Offset: 0x14
	// Line 2036, Address: 0x405f28, Func Offset: 0x18
	// Line 2038, Address: 0x405f38, Func Offset: 0x28
	// Line 2039, Address: 0x405f50, Func Offset: 0x40
	// Line 2040, Address: 0x405f5c, Func Offset: 0x4c
	// Line 2041, Address: 0x405f60, Func Offset: 0x50
	// Line 2043, Address: 0x405f70, Func Offset: 0x60
	// Line 2044, Address: 0x405f78, Func Offset: 0x68
	// Line 2045, Address: 0x405f80, Func Offset: 0x70
	// Line 2046, Address: 0x405f84, Func Offset: 0x74
	// Line 2047, Address: 0x405f98, Func Offset: 0x88
	// Line 2049, Address: 0x405fa4, Func Offset: 0x94
	// Func End, Address: 0x405fcc, Func Offset: 0xbc
}

// xModelBucket_RenderAlphaLayerInternal__Fi
// Start address: 0x405fd0
void xModelBucket_RenderAlphaLayerInternal(int32 maxLayer)
{
	uint32 pipeMask;
	uint32 curPipeFlags;
	uint32 lastPipeFlags;
	uint8 curAlphaDiscard;
	uint8 lastAlphaDiscard;
	RwFogType oldfogtype;
	uint8 startAlphaDiscard;
	xModelInstance* minst;
	RpAtomic* oldmodel;
	float32 oldAlpha;
	float32 fade;
	uint8 skyOldFade;
	uint32 xorPipeFlags;
	// Line 1685, Address: 0x405fd0, Func Offset: 0
	// Line 1695, Address: 0x405fd4, Func Offset: 0x4
	// Line 1685, Address: 0x405fd8, Func Offset: 0x8
	// Line 1695, Address: 0x405fe4, Func Offset: 0x14
	// Line 1685, Address: 0x405fe8, Func Offset: 0x18
	// Line 1698, Address: 0x405ffc, Func Offset: 0x2c
	// Line 1685, Address: 0x406000, Func Offset: 0x30
	// Line 1707, Address: 0x406010, Func Offset: 0x40
	// Line 1708, Address: 0x406018, Func Offset: 0x48
	// Line 1709, Address: 0x406020, Func Offset: 0x50
	// Line 1717, Address: 0x406028, Func Offset: 0x58
	// Line 1720, Address: 0x406030, Func Offset: 0x60
	// Line 1724, Address: 0x406034, Func Offset: 0x64
	// Line 1717, Address: 0x406038, Func Offset: 0x68
	// Line 1724, Address: 0x406044, Func Offset: 0x74
	// Line 1719, Address: 0x406048, Func Offset: 0x78
	// Line 1720, Address: 0x406050, Func Offset: 0x80
	// Line 1724, Address: 0x406054, Func Offset: 0x84
	// Line 1727, Address: 0x406068, Func Offset: 0x98
	// Line 1730, Address: 0x40608c, Func Offset: 0xbc
	// Line 1734, Address: 0x406090, Func Offset: 0xc0
	// Line 1733, Address: 0x406094, Func Offset: 0xc4
	// Line 1734, Address: 0x406098, Func Offset: 0xc8
	// Line 1737, Address: 0x4060a0, Func Offset: 0xd0
	// Line 1738, Address: 0x4060a8, Func Offset: 0xd8
	// Line 1742, Address: 0x4060b0, Func Offset: 0xe0
	// Line 1743, Address: 0x4060b4, Func Offset: 0xe4
	// Line 1744, Address: 0x4060c0, Func Offset: 0xf0
	// Line 1745, Address: 0x4060c4, Func Offset: 0xf4
	// Line 1746, Address: 0x4060d0, Func Offset: 0x100
	// Line 1751, Address: 0x4060d4, Func Offset: 0x104
	// Line 1756, Address: 0x4060dc, Func Offset: 0x10c
	// Line 1747, Address: 0x4060e0, Func Offset: 0x110
	// Line 1751, Address: 0x4060e4, Func Offset: 0x114
	// Line 1748, Address: 0x4060e8, Func Offset: 0x118
	// Line 1751, Address: 0x4060ec, Func Offset: 0x11c
	// Line 1756, Address: 0x4060f4, Func Offset: 0x124
	// Line 1751, Address: 0x4060f8, Func Offset: 0x128
	// Line 1752, Address: 0x406104, Func Offset: 0x134
	// Line 1756, Address: 0x406108, Func Offset: 0x138
	// Line 1769, Address: 0x406110, Func Offset: 0x140
	// Line 1770, Address: 0x40613c, Func Offset: 0x16c
	// Line 1771, Address: 0x406140, Func Offset: 0x170
	// Line 1770, Address: 0x406148, Func Offset: 0x178
	// Line 1771, Address: 0x406150, Func Offset: 0x180
	// Line 1772, Address: 0x406190, Func Offset: 0x1c0
	// Line 1789, Address: 0x4061d4, Func Offset: 0x204
	// Line 1790, Address: 0x4061d8, Func Offset: 0x208
	// Line 1793, Address: 0x4061e0, Func Offset: 0x210
	// Line 1796, Address: 0x4061ec, Func Offset: 0x21c
	// Line 1801, Address: 0x4061f8, Func Offset: 0x228
	// Line 1802, Address: 0x406208, Func Offset: 0x238
	// Line 1803, Address: 0x406218, Func Offset: 0x248
	// Line 1804, Address: 0x406228, Func Offset: 0x258
	// Line 1805, Address: 0x406230, Func Offset: 0x260
	// Line 1810, Address: 0x406240, Func Offset: 0x270
	// Line 1811, Address: 0x406250, Func Offset: 0x280
	// Line 1813, Address: 0x40625c, Func Offset: 0x28c
	// Line 1814, Address: 0x406264, Func Offset: 0x294
	// Line 1819, Address: 0x406274, Func Offset: 0x2a4
	// Line 1820, Address: 0x406280, Func Offset: 0x2b0
	// Line 1821, Address: 0x40628c, Func Offset: 0x2bc
	// Line 1822, Address: 0x406294, Func Offset: 0x2c4
	// Line 1823, Address: 0x40629c, Func Offset: 0x2cc
	// Line 1828, Address: 0x4062a4, Func Offset: 0x2d4
	// Line 1829, Address: 0x4062b8, Func Offset: 0x2e8
	// Line 1833, Address: 0x4062e4, Func Offset: 0x314
	// Line 1888, Address: 0x4062f0, Func Offset: 0x320
	// Line 1895, Address: 0x4062f8, Func Offset: 0x328
	// Line 1901, Address: 0x406308, Func Offset: 0x338
	// Line 1930, Address: 0x406318, Func Offset: 0x348
	// Line 1944, Address: 0x406320, Func Offset: 0x350
	// Line 1957, Address: 0x406328, Func Offset: 0x358
	// Line 1958, Address: 0x406354, Func Offset: 0x384
	// Line 1959, Address: 0x40635c, Func Offset: 0x38c
	// Line 1958, Address: 0x406364, Func Offset: 0x394
	// Line 1959, Address: 0x406368, Func Offset: 0x398
	// Line 1964, Address: 0x406374, Func Offset: 0x3a4
	// Line 1965, Address: 0x40637c, Func Offset: 0x3ac
	// Line 1969, Address: 0x406384, Func Offset: 0x3b4
	// Line 1972, Address: 0x40638c, Func Offset: 0x3bc
	// Line 1973, Address: 0x406390, Func Offset: 0x3c0
	// Line 1972, Address: 0x406394, Func Offset: 0x3c4
	// Line 1973, Address: 0x406398, Func Offset: 0x3c8
	// Line 1976, Address: 0x4063a4, Func Offset: 0x3d4
	// Line 1980, Address: 0x4063b0, Func Offset: 0x3e0
	// Line 1983, Address: 0x4063c4, Func Offset: 0x3f4
	// Line 1988, Address: 0x4063d8, Func Offset: 0x408
	// Line 1993, Address: 0x4063f0, Func Offset: 0x420
	// Line 1999, Address: 0x406404, Func Offset: 0x434
	// Line 2004, Address: 0x406410, Func Offset: 0x440
	// Line 2005, Address: 0x406420, Func Offset: 0x450
	// Line 2027, Address: 0x40643c, Func Offset: 0x46c
	// Line 2031, Address: 0x40644c, Func Offset: 0x47c
	// Line 1758, Address: 0x406458, Func Offset: 0x488
	// Line 1759, Address: 0x406460, Func Offset: 0x490
	// Line 1758, Address: 0x406464, Func Offset: 0x494
	// Line 2031, Address: 0x406468, Func Offset: 0x498
	// Line 1794, Address: 0x406474, Func Offset: 0x4a4
	// Line 2031, Address: 0x406478, Func Offset: 0x4a8
	// Line 1797, Address: 0x40648c, Func Offset: 0x4bc
	// Line 2031, Address: 0x406490, Func Offset: 0x4c0
	// Line 1812, Address: 0x4064a8, Func Offset: 0x4d8
	// Line 2031, Address: 0x4064ac, Func Offset: 0x4dc
	// Line 1813, Address: 0x4064b4, Func Offset: 0x4e4
	// Line 2031, Address: 0x4064bc, Func Offset: 0x4ec
	// Line 1896, Address: 0x4064d0, Func Offset: 0x500
	// Line 2031, Address: 0x4064d4, Func Offset: 0x504
	// Line 1898, Address: 0x4064e8, Func Offset: 0x518
	// Line 2031, Address: 0x4064ec, Func Offset: 0x51c
	// Line 1900, Address: 0x4064fc, Func Offset: 0x52c
	// Line 2031, Address: 0x406504, Func Offset: 0x534
	// Line 1904, Address: 0x406508, Func Offset: 0x538
	// Line 2031, Address: 0x406530, Func Offset: 0x560
	// Line 1906, Address: 0x406540, Func Offset: 0x570
	// Line 2031, Address: 0x406548, Func Offset: 0x578
	// Line 1906, Address: 0x40654c, Func Offset: 0x57c
	// Line 2031, Address: 0x406568, Func Offset: 0x598
	// Line 1927, Address: 0x40657c, Func Offset: 0x5ac
	// Line 2031, Address: 0x406584, Func Offset: 0x5b4
	// Line 1989, Address: 0x4065c8, Func Offset: 0x5f8
	// Line 2031, Address: 0x4065cc, Func Offset: 0x5fc
	// Line 1995, Address: 0x4065e4, Func Offset: 0x614
	// Line 2031, Address: 0x4065e8, Func Offset: 0x618
	// Line 2028, Address: 0x406610, Func Offset: 0x640
	// Line 2031, Address: 0x40661c, Func Offset: 0x64c
	// Func End, Address: 0x40665c, Func Offset: 0x68c
}

// xModelBucket_RenderAlphaBegin__Fv
// Start address: 0x406660
void xModelBucket_RenderAlphaBegin()
{
	// Line 1522, Address: 0x406660, Func Offset: 0
	// Line 1533, Address: 0x406668, Func Offset: 0x8
	// Line 1524, Address: 0x40666c, Func Offset: 0xc
	// Line 1533, Address: 0x406670, Func Offset: 0x10
	// Line 1539, Address: 0x406678, Func Offset: 0x18
	// Line 1537, Address: 0x40668c, Func Offset: 0x2c
	// Line 1539, Address: 0x406690, Func Offset: 0x30
	// Func End, Address: 0x4066a8, Func Offset: 0x48
}

// xModelBucket_RenderOpaque__Fi
// Start address: 0x4066b0
void xModelBucket_RenderOpaque(int32 maxLayer)
{
	int32 i;
	xModelBucket* bucket;
	RpAtomic* data;
	xModelInstance* minst;
	int32 flags;
	uint32 cloneCount;
	rwPDS_HICloneArray clone[12];
	xLightKit* lkit;
	RwRGBA matcol;
	RpAtomic* oldmodel;
	int32 flags;
	// Line 1258, Address: 0x4066b0, Func Offset: 0
	// Line 1272, Address: 0x4066ec, Func Offset: 0x3c
	// Line 1275, Address: 0x4066f0, Func Offset: 0x40
	// Line 1282, Address: 0x406718, Func Offset: 0x68
	// Line 1286, Address: 0x40671c, Func Offset: 0x6c
	// Line 1282, Address: 0x406720, Func Offset: 0x70
	// Line 1283, Address: 0x406728, Func Offset: 0x78
	// Line 1284, Address: 0x40672c, Func Offset: 0x7c
	// Line 1282, Address: 0x406730, Func Offset: 0x80
	// Line 1286, Address: 0x406734, Func Offset: 0x84
	// Line 1288, Address: 0x40675c, Func Offset: 0xac
	// Line 1291, Address: 0x406760, Func Offset: 0xb0
	// Line 1293, Address: 0x40677c, Func Offset: 0xcc
	// Line 1295, Address: 0x406780, Func Offset: 0xd0
	// Line 1298, Address: 0x406790, Func Offset: 0xe0
	// Line 1300, Address: 0x40679c, Func Offset: 0xec
	// Line 1301, Address: 0x4067a8, Func Offset: 0xf8
	// Line 1302, Address: 0x4067b4, Func Offset: 0x104
	// Line 1303, Address: 0x4067bc, Func Offset: 0x10c
	// Line 1304, Address: 0x4067c4, Func Offset: 0x114
	// Line 1305, Address: 0x4067cc, Func Offset: 0x11c
	// Line 1306, Address: 0x4067d4, Func Offset: 0x124
	// Line 1307, Address: 0x4067e0, Func Offset: 0x130
	// Line 1308, Address: 0x4067e8, Func Offset: 0x138
	// Line 1317, Address: 0x406808, Func Offset: 0x158
	// Line 1313, Address: 0x40680c, Func Offset: 0x15c
	// Line 1317, Address: 0x406814, Func Offset: 0x164
	// Line 1318, Address: 0x40682c, Func Offset: 0x17c
	// Line 1321, Address: 0x4068bc, Func Offset: 0x20c
	// Line 1324, Address: 0x4068c8, Func Offset: 0x218
	// Line 1341, Address: 0x4068e8, Func Offset: 0x238
	// Line 1342, Address: 0x406934, Func Offset: 0x284
	// Line 1343, Address: 0x406984, Func Offset: 0x2d4
	// Line 1344, Address: 0x4069d4, Func Offset: 0x324
	// Line 1345, Address: 0x406a28, Func Offset: 0x378
	// Line 1344, Address: 0x406a2c, Func Offset: 0x37c
	// Line 1345, Address: 0x406a30, Func Offset: 0x380
	// Line 1355, Address: 0x406a60, Func Offset: 0x3b0
	// Line 1356, Address: 0x406a64, Func Offset: 0x3b4
	// Line 1359, Address: 0x406a70, Func Offset: 0x3c0
	// Line 1364, Address: 0x406a78, Func Offset: 0x3c8
	// Line 1367, Address: 0x406a90, Func Offset: 0x3e0
	// Line 1369, Address: 0x406aac, Func Offset: 0x3fc
	// Line 1370, Address: 0x406ab0, Func Offset: 0x400
	// Line 1371, Address: 0x406abc, Func Offset: 0x40c
	// Line 1372, Address: 0x406ac0, Func Offset: 0x410
	// Line 1374, Address: 0x406ac8, Func Offset: 0x418
	// Line 1375, Address: 0x406ad4, Func Offset: 0x424
	// Line 1376, Address: 0x406ad8, Func Offset: 0x428
	// Line 1377, Address: 0x406ae0, Func Offset: 0x430
	// Line 1390, Address: 0x406b0c, Func Offset: 0x45c
	// Line 1391, Address: 0x406b14, Func Offset: 0x464
	// Line 1392, Address: 0x406b1c, Func Offset: 0x46c
	// Line 1395, Address: 0x406b20, Func Offset: 0x470
	// Line 1396, Address: 0x406b24, Func Offset: 0x474
	// Line 1398, Address: 0x406b28, Func Offset: 0x478
	// Line 1395, Address: 0x406b2c, Func Offset: 0x47c
	// Line 1401, Address: 0x406b30, Func Offset: 0x480
	// Line 1406, Address: 0x406b44, Func Offset: 0x494
	// Line 1408, Address: 0x406b4c, Func Offset: 0x49c
	// Line 1410, Address: 0x406b58, Func Offset: 0x4a8
	// Line 1411, Address: 0x406b64, Func Offset: 0x4b4
	// Line 1412, Address: 0x406b6c, Func Offset: 0x4bc
	// Line 1413, Address: 0x406b74, Func Offset: 0x4c4
	// Line 1414, Address: 0x406b7c, Func Offset: 0x4cc
	// Line 1415, Address: 0x406b84, Func Offset: 0x4d4
	// Line 1416, Address: 0x406b90, Func Offset: 0x4e0
	// Line 1417, Address: 0x406b98, Func Offset: 0x4e8
	// Line 1420, Address: 0x406bb8, Func Offset: 0x508
	// Line 1423, Address: 0x406bc0, Func Offset: 0x510
	// Line 1428, Address: 0x406bc8, Func Offset: 0x518
	// Line 1430, Address: 0x406bd4, Func Offset: 0x524
	// Line 1432, Address: 0x406bd8, Func Offset: 0x528
	// Line 1433, Address: 0x406be4, Func Offset: 0x534
	// Line 1434, Address: 0x406be8, Func Offset: 0x538
	// Line 1436, Address: 0x406bf0, Func Offset: 0x540
	// Line 1437, Address: 0x406bfc, Func Offset: 0x54c
	// Line 1438, Address: 0x406c00, Func Offset: 0x550
	// Line 1439, Address: 0x406c08, Func Offset: 0x558
	// Line 1444, Address: 0x406c24, Func Offset: 0x574
	// Line 1447, Address: 0x406c28, Func Offset: 0x578
	// Line 1457, Address: 0x406c30, Func Offset: 0x580
	// Line 1459, Address: 0x406c34, Func Offset: 0x584
	// Line 1461, Address: 0x406c40, Func Offset: 0x590
	// Line 1462, Address: 0x406c44, Func Offset: 0x594
	// Line 1461, Address: 0x406c48, Func Offset: 0x598
	// Line 1462, Address: 0x406c58, Func Offset: 0x5a8
	// Line 1475, Address: 0x406c68, Func Offset: 0x5b8
	// Line 1296, Address: 0x406c74, Func Offset: 0x5c4
	// Line 1475, Address: 0x406c78, Func Offset: 0x5c8
	// Line 1302, Address: 0x406c9c, Func Offset: 0x5ec
	// Line 1475, Address: 0x406ca0, Func Offset: 0x5f0
	// Line 1304, Address: 0x406cb0, Func Offset: 0x600
	// Line 1475, Address: 0x406cb8, Func Offset: 0x608
	// Line 1306, Address: 0x406cd0, Func Offset: 0x620
	// Line 1475, Address: 0x406cd8, Func Offset: 0x628
	// Line 1324, Address: 0x406cec, Func Offset: 0x63c
	// Line 1325, Address: 0x406cf0, Func Offset: 0x640
	// Line 1475, Address: 0x406cf8, Func Offset: 0x648
	// Line 1360, Address: 0x406d20, Func Offset: 0x670
	// Line 1475, Address: 0x406d28, Func Offset: 0x678
	// Line 1368, Address: 0x406d4c, Func Offset: 0x69c
	// Line 1475, Address: 0x406d50, Func Offset: 0x6a0
	// Line 1371, Address: 0x406d64, Func Offset: 0x6b4
	// Line 1475, Address: 0x406d68, Func Offset: 0x6b8
	// Line 1373, Address: 0x406d7c, Func Offset: 0x6cc
	// Line 1475, Address: 0x406d80, Func Offset: 0x6d0
	// Line 1375, Address: 0x406d94, Func Offset: 0x6e4
	// Line 1475, Address: 0x406d98, Func Offset: 0x6e8
	// Line 1402, Address: 0x406dac, Func Offset: 0x6fc
	// Line 1475, Address: 0x406db0, Func Offset: 0x700
	// Line 1411, Address: 0x406dd4, Func Offset: 0x724
	// Line 1475, Address: 0x406dd8, Func Offset: 0x728
	// Line 1413, Address: 0x406de8, Func Offset: 0x738
	// Line 1475, Address: 0x406df0, Func Offset: 0x740
	// Line 1415, Address: 0x406e08, Func Offset: 0x758
	// Line 1475, Address: 0x406e10, Func Offset: 0x760
	// Line 1429, Address: 0x406e3c, Func Offset: 0x78c
	// Line 1475, Address: 0x406e40, Func Offset: 0x790
	// Line 1433, Address: 0x406e54, Func Offset: 0x7a4
	// Line 1475, Address: 0x406e58, Func Offset: 0x7a8
	// Line 1435, Address: 0x406e6c, Func Offset: 0x7bc
	// Line 1475, Address: 0x406e70, Func Offset: 0x7c0
	// Line 1437, Address: 0x406e84, Func Offset: 0x7d4
	// Line 1475, Address: 0x406e88, Func Offset: 0x7d8
	// Func End, Address: 0x406ed4, Func Offset: 0x824
}

// xModelBucket_RenderOpaqueBegin__Fv
// Start address: 0x406ee0
void xModelBucket_RenderOpaqueBegin()
{
	// Line 1255, Address: 0x406ee0, Func Offset: 0
	// Func End, Address: 0x406ee8, Func Offset: 0x8
}

// xModelBucket_AddAlphaFade__FP14xModelInstancef
// Start address: 0x406ef0
void xModelBucket_AddAlphaFade(xModelInstance* minst, float32 alphaFade)
{
	RpAtomic* model;
	RwFrustumTestResult cullresult;
	xMat4x3* cammat;
	xModelBucket* bucket;
	float32 camdot;
	uint8 alphaFlags;
	uint8 alphaProg;
	// Line 1108, Address: 0x406ef0, Func Offset: 0
	// Line 1109, Address: 0x406ef8, Func Offset: 0x8
	// Line 1108, Address: 0x406efc, Func Offset: 0xc
	// Line 1109, Address: 0x406f10, Func Offset: 0x20
	// Line 1113, Address: 0x406f1c, Func Offset: 0x2c
	// Line 1139, Address: 0x406f30, Func Offset: 0x40
	// Line 1140, Address: 0x406f3c, Func Offset: 0x4c
	// Line 1141, Address: 0x406f48, Func Offset: 0x58
	// Line 1142, Address: 0x406f50, Func Offset: 0x60
	// Line 1144, Address: 0x406f5c, Func Offset: 0x6c
	// Line 1145, Address: 0x406f64, Func Offset: 0x74
	// Line 1147, Address: 0x406f74, Func Offset: 0x84
	// Line 1150, Address: 0x406f7c, Func Offset: 0x8c
	// Line 1171, Address: 0x406f88, Func Offset: 0x98
	// Line 1167, Address: 0x406f8c, Func Offset: 0x9c
	// Line 1171, Address: 0x406fa4, Func Offset: 0xb4
	// Line 1167, Address: 0x406fa8, Func Offset: 0xb8
	// Line 1171, Address: 0x406fbc, Func Offset: 0xcc
	// Line 1181, Address: 0x406fd8, Func Offset: 0xe8
	// Line 1178, Address: 0x406fe4, Func Offset: 0xf4
	// Line 1181, Address: 0x406ff0, Func Offset: 0x100
	// Line 1178, Address: 0x406ff4, Func Offset: 0x104
	// Line 1181, Address: 0x407008, Func Offset: 0x118
	// Line 1182, Address: 0x407014, Func Offset: 0x124
	// Line 1184, Address: 0x407018, Func Offset: 0x128
	// Line 1182, Address: 0x40701c, Func Offset: 0x12c
	// Line 1186, Address: 0x407020, Func Offset: 0x130
	// Line 1187, Address: 0x407028, Func Offset: 0x138
	// Line 1189, Address: 0x407030, Func Offset: 0x140
	// Line 1200, Address: 0x407038, Func Offset: 0x148
	// Line 1199, Address: 0x40704c, Func Offset: 0x15c
	// Line 1200, Address: 0x407050, Func Offset: 0x160
	// Line 1202, Address: 0x407088, Func Offset: 0x198
	// Line 1204, Address: 0x40709c, Func Offset: 0x1ac
	// Line 1206, Address: 0x4070ac, Func Offset: 0x1bc
	// Line 1207, Address: 0x4070b8, Func Offset: 0x1c8
	// Line 1209, Address: 0x4070c0, Func Offset: 0x1d0
	// Line 1246, Address: 0x4070d0, Func Offset: 0x1e0
	// Line 1248, Address: 0x4070e0, Func Offset: 0x1f0
	// Line 1213, Address: 0x4070f4, Func Offset: 0x204
	// Line 1248, Address: 0x4070f8, Func Offset: 0x208
	// Line 1213, Address: 0x407104, Func Offset: 0x214
	// Line 1225, Address: 0x407108, Func Offset: 0x218
	// Line 1248, Address: 0x407110, Func Offset: 0x220
	// Line 1214, Address: 0x407120, Func Offset: 0x230
	// Line 1248, Address: 0x407124, Func Offset: 0x234
	// Line 1214, Address: 0x407128, Func Offset: 0x238
	// Line 1248, Address: 0x407130, Func Offset: 0x240
	// Line 1215, Address: 0x40713c, Func Offset: 0x24c
	// Line 1248, Address: 0x407140, Func Offset: 0x250
	// Line 1215, Address: 0x407144, Func Offset: 0x254
	// Line 1248, Address: 0x40714c, Func Offset: 0x25c
	// Line 1223, Address: 0x407158, Func Offset: 0x268
	// Line 1248, Address: 0x40715c, Func Offset: 0x26c
	// Line 1223, Address: 0x407160, Func Offset: 0x270
	// Line 1248, Address: 0x407168, Func Offset: 0x278
	// Line 1225, Address: 0x407178, Func Offset: 0x288
	// Line 1248, Address: 0x407180, Func Offset: 0x290
	// Line 1225, Address: 0x407184, Func Offset: 0x294
	// Line 1248, Address: 0x407188, Func Offset: 0x298
	// Line 1225, Address: 0x40718c, Func Offset: 0x29c
	// Line 1248, Address: 0x407198, Func Offset: 0x2a8
	// Line 1225, Address: 0x40719c, Func Offset: 0x2ac
	// Line 1248, Address: 0x4071a0, Func Offset: 0x2b0
	// Line 1226, Address: 0x4071b0, Func Offset: 0x2c0
	// Line 1248, Address: 0x4071b4, Func Offset: 0x2c4
	// Line 1226, Address: 0x4071b8, Func Offset: 0x2c8
	// Line 1248, Address: 0x4071c0, Func Offset: 0x2d0
	// Line 1250, Address: 0x4071d0, Func Offset: 0x2e0
	// Line 1203, Address: 0x4071d8, Func Offset: 0x2e8
	// Line 1205, Address: 0x4071e4, Func Offset: 0x2f4
	// Line 1250, Address: 0x4071ec, Func Offset: 0x2fc
	// Func End, Address: 0x407208, Func Offset: 0x318
}

// xModelBucket_Add__FP14xModelInstance
// Start address: 0x407210
void xModelBucket_Add(xModelInstance* minst)
{
	RpAtomic* model;
	RwFrustumTestResult cullresult;
	xMat4x3* cammat;
	float32 camdist2;
	xModelBucket* bucket;
	float32 camdot;
	float32 alphaFade;
	uint8 alphaFlags;
	uint8 alphaProg;
	// Line 924, Address: 0x407210, Func Offset: 0
	// Line 926, Address: 0x407214, Func Offset: 0x4
	// Line 924, Address: 0x407218, Func Offset: 0x8
	// Line 926, Address: 0x40722c, Func Offset: 0x1c
	// Line 952, Address: 0x40723c, Func Offset: 0x2c
	// Line 953, Address: 0x407248, Func Offset: 0x38
	// Line 954, Address: 0x407254, Func Offset: 0x44
	// Line 955, Address: 0x40725c, Func Offset: 0x4c
	// Line 957, Address: 0x407268, Func Offset: 0x58
	// Line 958, Address: 0x407270, Func Offset: 0x60
	// Line 960, Address: 0x407280, Func Offset: 0x70
	// Line 963, Address: 0x407288, Func Offset: 0x78
	// Line 981, Address: 0x407294, Func Offset: 0x84
	// Line 980, Address: 0x407298, Func Offset: 0x88
	// Line 981, Address: 0x40729c, Func Offset: 0x8c
	// Line 980, Address: 0x4072a0, Func Offset: 0x90
	// Line 984, Address: 0x4072b0, Func Offset: 0xa0
	// Line 980, Address: 0x4072b4, Func Offset: 0xa4
	// Line 981, Address: 0x4072c8, Func Offset: 0xb8
	// Line 984, Address: 0x4072d8, Func Offset: 0xc8
	// Line 1026, Address: 0x4072e4, Func Offset: 0xd4
	// Line 1023, Address: 0x4072f0, Func Offset: 0xe0
	// Line 1026, Address: 0x4072fc, Func Offset: 0xec
	// Line 1023, Address: 0x407300, Func Offset: 0xf0
	// Line 1026, Address: 0x407314, Func Offset: 0x104
	// Line 1027, Address: 0x407320, Func Offset: 0x110
	// Line 1029, Address: 0x407324, Func Offset: 0x114
	// Line 1027, Address: 0x407328, Func Offset: 0x118
	// Line 1031, Address: 0x40732c, Func Offset: 0x11c
	// Line 1032, Address: 0x407334, Func Offset: 0x124
	// Line 1034, Address: 0x40733c, Func Offset: 0x12c
	// Line 1044, Address: 0x407340, Func Offset: 0x130
	// Line 1045, Address: 0x40734c, Func Offset: 0x13c
	// Line 1046, Address: 0x40735c, Func Offset: 0x14c
	// Line 1047, Address: 0x40736c, Func Offset: 0x15c
	// Line 1046, Address: 0x407374, Func Offset: 0x164
	// Line 1047, Address: 0x407388, Func Offset: 0x178
	// Line 1050, Address: 0x407394, Func Offset: 0x184
	// Line 1055, Address: 0x4073b4, Func Offset: 0x1a4
	// Line 1054, Address: 0x4073c8, Func Offset: 0x1b8
	// Line 1055, Address: 0x4073cc, Func Offset: 0x1bc
	// Line 1057, Address: 0x407404, Func Offset: 0x1f4
	// Line 1059, Address: 0x407418, Func Offset: 0x208
	// Line 1061, Address: 0x407428, Func Offset: 0x218
	// Line 1062, Address: 0x407434, Func Offset: 0x224
	// Line 1064, Address: 0x40743c, Func Offset: 0x22c
	// Line 1101, Address: 0x40744c, Func Offset: 0x23c
	// Line 1103, Address: 0x40745c, Func Offset: 0x24c
	// Line 1068, Address: 0x407470, Func Offset: 0x260
	// Line 1103, Address: 0x407474, Func Offset: 0x264
	// Line 1068, Address: 0x407480, Func Offset: 0x270
	// Line 1080, Address: 0x407484, Func Offset: 0x274
	// Line 1103, Address: 0x40748c, Func Offset: 0x27c
	// Line 1069, Address: 0x40749c, Func Offset: 0x28c
	// Line 1103, Address: 0x4074a0, Func Offset: 0x290
	// Line 1069, Address: 0x4074a4, Func Offset: 0x294
	// Line 1103, Address: 0x4074ac, Func Offset: 0x29c
	// Line 1070, Address: 0x4074b8, Func Offset: 0x2a8
	// Line 1103, Address: 0x4074bc, Func Offset: 0x2ac
	// Line 1070, Address: 0x4074c0, Func Offset: 0x2b0
	// Line 1103, Address: 0x4074c8, Func Offset: 0x2b8
	// Line 1078, Address: 0x4074d4, Func Offset: 0x2c4
	// Line 1103, Address: 0x4074d8, Func Offset: 0x2c8
	// Line 1078, Address: 0x4074dc, Func Offset: 0x2cc
	// Line 1103, Address: 0x4074e4, Func Offset: 0x2d4
	// Line 1080, Address: 0x4074f4, Func Offset: 0x2e4
	// Line 1103, Address: 0x4074fc, Func Offset: 0x2ec
	// Line 1080, Address: 0x407500, Func Offset: 0x2f0
	// Line 1103, Address: 0x407504, Func Offset: 0x2f4
	// Line 1080, Address: 0x407508, Func Offset: 0x2f8
	// Line 1103, Address: 0x407514, Func Offset: 0x304
	// Line 1080, Address: 0x407518, Func Offset: 0x308
	// Line 1103, Address: 0x40751c, Func Offset: 0x30c
	// Line 1081, Address: 0x40752c, Func Offset: 0x31c
	// Line 1103, Address: 0x407530, Func Offset: 0x320
	// Line 1081, Address: 0x407534, Func Offset: 0x324
	// Line 1103, Address: 0x40753c, Func Offset: 0x32c
	// Line 1105, Address: 0x40754c, Func Offset: 0x33c
	// Line 1058, Address: 0x407554, Func Offset: 0x344
	// Line 1060, Address: 0x407560, Func Offset: 0x350
	// Line 1105, Address: 0x407568, Func Offset: 0x358
	// Func End, Address: 0x407580, Func Offset: 0x370
}

// xModelBucket_Begin__Fv
// Start address: 0x407580
void xModelBucket_Begin()
{
	int32 i;
	// Line 908, Address: 0x407580, Func Offset: 0
	// Line 909, Address: 0x407594, Func Offset: 0x14
	// Line 910, Address: 0x407598, Func Offset: 0x18
	// Line 909, Address: 0x40759c, Func Offset: 0x1c
	// Line 910, Address: 0x4075a4, Func Offset: 0x24
	// Line 913, Address: 0x4075b8, Func Offset: 0x38
	// Line 914, Address: 0x4075bc, Func Offset: 0x3c
	// Func End, Address: 0x4075c4, Func Offset: 0x44
}

// xModelBucket_GetBuckets__FP8RpAtomic
// Start address: 0x4075d0
xModelBucket** xModelBucket_GetBuckets(RpAtomic* data)
{
	int32 i;
	// Line 893, Address: 0x4075d0, Func Offset: 0
	// Line 894, Address: 0x4075e8, Func Offset: 0x18
	// Line 895, Address: 0x4075f8, Func Offset: 0x28
	// Line 897, Address: 0x407600, Func Offset: 0x30
	// Line 898, Address: 0x407610, Func Offset: 0x40
	// Line 899, Address: 0x407614, Func Offset: 0x44
	// Func End, Address: 0x40761c, Func Offset: 0x4c
}

// xModelBucket_Init__Fv
// Start address: 0x407620
void xModelBucket_Init()
{
	int32 i;
	xModelBucket* bucket;
	xModelBucket** backref;
	// Line 844, Address: 0x407620, Func Offset: 0
	// Line 849, Address: 0x40762c, Func Offset: 0xc
	// Line 850, Address: 0x407634, Func Offset: 0x14
	// Line 851, Address: 0x40763c, Func Offset: 0x1c
	// Line 852, Address: 0x407644, Func Offset: 0x24
	// Line 853, Address: 0x40764c, Func Offset: 0x2c
	// Line 854, Address: 0x407650, Func Offset: 0x30
	// Line 859, Address: 0x407654, Func Offset: 0x34
	// Line 862, Address: 0x40766c, Func Offset: 0x4c
	// Line 864, Address: 0x407680, Func Offset: 0x60
	// Line 868, Address: 0x407684, Func Offset: 0x64
	// Line 864, Address: 0x407688, Func Offset: 0x68
	// Line 865, Address: 0x40768c, Func Offset: 0x6c
	// Line 868, Address: 0x407690, Func Offset: 0x70
	// Line 871, Address: 0x4076ac, Func Offset: 0x8c
	// Line 876, Address: 0x4076b0, Func Offset: 0x90
	// Line 879, Address: 0x4076b4, Func Offset: 0x94
	// Line 880, Address: 0x4076b8, Func Offset: 0x98
	// Line 887, Address: 0x4076d0, Func Offset: 0xb0
	// Func End, Address: 0x4076dc, Func Offset: 0xbc
}

// xModelBucket_InsertBucket__FP8RpAtomicR10xModelPipeUi
// Start address: 0x4076e0
void xModelBucket_InsertBucket(RpAtomic* data, xModelPipe& pipe, uint32 subObjects)
{
	uint32 pipeFlags;
	int32 numbuckets;
	int32 pipeSetting[2];
	int32 i;
	uint32 subObjTemp;
	RpAtomic* dataTemp;
	RpAtomic* extraData;
	// Line 703, Address: 0x4076e0, Func Offset: 0
	// Line 706, Address: 0x407714, Func Offset: 0x34
	// Line 710, Address: 0x40771c, Func Offset: 0x3c
	// Line 717, Address: 0x407720, Func Offset: 0x40
	// Line 721, Address: 0x407760, Func Offset: 0x80
	// Line 724, Address: 0x407768, Func Offset: 0x88
	// Line 725, Address: 0x40776c, Func Offset: 0x8c
	// Line 730, Address: 0x407774, Func Offset: 0x94
	// Line 731, Address: 0x407778, Func Offset: 0x98
	// Line 736, Address: 0x407780, Func Offset: 0xa0
	// Line 737, Address: 0x407788, Func Offset: 0xa8
	// Line 740, Address: 0x407790, Func Offset: 0xb0
	// Line 741, Address: 0x4077a4, Func Offset: 0xc4
	// Line 743, Address: 0x4077a8, Func Offset: 0xc8
	// Line 746, Address: 0x4077b0, Func Offset: 0xd0
	// Line 745, Address: 0x4077b8, Func Offset: 0xd8
	// Line 754, Address: 0x4077c0, Func Offset: 0xe0
	// Line 755, Address: 0x4077c4, Func Offset: 0xe4
	// Line 757, Address: 0x4077c8, Func Offset: 0xe8
	// Line 758, Address: 0x4077d4, Func Offset: 0xf4
	// Line 759, Address: 0x4077e0, Func Offset: 0x100
	// Line 767, Address: 0x4077f0, Func Offset: 0x110
	// Line 770, Address: 0x407808, Func Offset: 0x128
	// Line 771, Address: 0x40782c, Func Offset: 0x14c
	// Line 772, Address: 0x40783c, Func Offset: 0x15c
	// Line 776, Address: 0x407844, Func Offset: 0x164
	// Line 778, Address: 0x407848, Func Offset: 0x168
	// Line 779, Address: 0x407858, Func Offset: 0x178
	// Line 782, Address: 0x407870, Func Offset: 0x190
	// Line 783, Address: 0x407894, Func Offset: 0x1b4
	// Line 784, Address: 0x4078a4, Func Offset: 0x1c4
	// Line 789, Address: 0x4078b0, Func Offset: 0x1d0
	// Line 793, Address: 0x4078c0, Func Offset: 0x1e0
	// Line 794, Address: 0x4078d0, Func Offset: 0x1f0
	// Line 797, Address: 0x4078d8, Func Offset: 0x1f8
	// Line 802, Address: 0x4078e0, Func Offset: 0x200
	// Line 836, Address: 0x4078ec, Func Offset: 0x20c
	// Line 838, Address: 0x4078f0, Func Offset: 0x210
	// Line 840, Address: 0x407900, Func Offset: 0x220
	// Line 841, Address: 0x407908, Func Offset: 0x228
	// Line 818, Address: 0x407914, Func Offset: 0x234
	// Line 841, Address: 0x407918, Func Offset: 0x238
	// Line 809, Address: 0x407928, Func Offset: 0x248
	// Line 841, Address: 0x40792c, Func Offset: 0x24c
	// Line 809, Address: 0x407930, Func Offset: 0x250
	// Line 841, Address: 0x407938, Func Offset: 0x258
	// Line 810, Address: 0x407954, Func Offset: 0x274
	// Line 841, Address: 0x407958, Func Offset: 0x278
	// Line 810, Address: 0x40795c, Func Offset: 0x27c
	// Line 841, Address: 0x407964, Func Offset: 0x284
	// Line 812, Address: 0x407978, Func Offset: 0x298
	// Line 841, Address: 0x40797c, Func Offset: 0x29c
	// Line 812, Address: 0x407980, Func Offset: 0x2a0
	// Line 841, Address: 0x407984, Func Offset: 0x2a4
	// Line 813, Address: 0x407994, Func Offset: 0x2b4
	// Line 841, Address: 0x407998, Func Offset: 0x2b8
	// Line 813, Address: 0x40799c, Func Offset: 0x2bc
	// Line 841, Address: 0x4079a0, Func Offset: 0x2c0
	// Line 815, Address: 0x4079bc, Func Offset: 0x2dc
	// Line 841, Address: 0x4079c0, Func Offset: 0x2e0
	// Line 815, Address: 0x4079c4, Func Offset: 0x2e4
	// Line 841, Address: 0x4079c8, Func Offset: 0x2e8
	// Line 815, Address: 0x4079cc, Func Offset: 0x2ec
	// Line 841, Address: 0x4079d0, Func Offset: 0x2f0
	// Line 816, Address: 0x4079e0, Func Offset: 0x300
	// Line 841, Address: 0x4079e4, Func Offset: 0x304
	// Line 816, Address: 0x4079e8, Func Offset: 0x308
	// Line 841, Address: 0x4079ec, Func Offset: 0x30c
	// Line 817, Address: 0x407a00, Func Offset: 0x320
	// Line 841, Address: 0x407a04, Func Offset: 0x324
	// Line 817, Address: 0x407a08, Func Offset: 0x328
	// Line 841, Address: 0x407a0c, Func Offset: 0x32c
	// Line 820, Address: 0x407a50, Func Offset: 0x370
	// Line 841, Address: 0x407a58, Func Offset: 0x378
	// Line 821, Address: 0x407a6c, Func Offset: 0x38c
	// Line 841, Address: 0x407a70, Func Offset: 0x390
	// Line 821, Address: 0x407a74, Func Offset: 0x394
	// Line 841, Address: 0x407a78, Func Offset: 0x398
	// Line 822, Address: 0x407a88, Func Offset: 0x3a8
	// Line 841, Address: 0x407a8c, Func Offset: 0x3ac
	// Line 822, Address: 0x407a90, Func Offset: 0x3b0
	// Line 841, Address: 0x407a94, Func Offset: 0x3b4
	// Line 824, Address: 0x407aac, Func Offset: 0x3cc
	// Line 841, Address: 0x407ab0, Func Offset: 0x3d0
	// Line 824, Address: 0x407ab4, Func Offset: 0x3d4
	// Line 841, Address: 0x407ab8, Func Offset: 0x3d8
	// Line 824, Address: 0x407abc, Func Offset: 0x3dc
	// Line 841, Address: 0x407ac0, Func Offset: 0x3e0
	// Line 825, Address: 0x407ad0, Func Offset: 0x3f0
	// Line 841, Address: 0x407ad4, Func Offset: 0x3f4
	// Line 825, Address: 0x407ad8, Func Offset: 0x3f8
	// Line 841, Address: 0x407adc, Func Offset: 0x3fc
	// Line 826, Address: 0x407af4, Func Offset: 0x414
	// Line 841, Address: 0x407af8, Func Offset: 0x418
	// Line 826, Address: 0x407afc, Func Offset: 0x41c
	// Line 841, Address: 0x407b00, Func Offset: 0x420
	// Line 829, Address: 0x407b34, Func Offset: 0x454
	// Line 841, Address: 0x407b3c, Func Offset: 0x45c
	// Line 829, Address: 0x407b44, Func Offset: 0x464
	// Line 841, Address: 0x407b48, Func Offset: 0x468
	// Func End, Address: 0x407b88, Func Offset: 0x4a8
}

// xModelBucket_SetMaterialFX__FP8RpAtomicR10xModelPipe
// Start address: 0x407b90
void xModelBucket_SetMaterialFX(RpAtomic* model, xModelPipe& pipe)
{
	RpGeometry* geom;
	uint8 skinned;
	RxPipeline* p;
	int32 numMaterials;
	int32 i;
	RpMaterial* material;
	// Line 643, Address: 0x407b90, Func Offset: 0
	// Line 645, Address: 0x407b94, Func Offset: 0x4
	// Line 643, Address: 0x407b98, Func Offset: 0x8
	// Line 645, Address: 0x407bbc, Func Offset: 0x2c
	// Line 647, Address: 0x407bcc, Func Offset: 0x3c
	// Line 649, Address: 0x407bd4, Func Offset: 0x44
	// Line 650, Address: 0x407bdc, Func Offset: 0x4c
	// Line 652, Address: 0x407be0, Func Offset: 0x50
	// Line 653, Address: 0x407bec, Func Offset: 0x5c
	// Line 655, Address: 0x407bf4, Func Offset: 0x64
	// Line 668, Address: 0x407c00, Func Offset: 0x70
	// Line 673, Address: 0x407c2c, Func Offset: 0x9c
	// Line 674, Address: 0x407c30, Func Offset: 0xa0
	// Line 676, Address: 0x407c40, Func Offset: 0xb0
	// Line 679, Address: 0x407c48, Func Offset: 0xb8
	// Line 688, Address: 0x407c58, Func Offset: 0xc8
	// Line 689, Address: 0x407c60, Func Offset: 0xd0
	// Line 692, Address: 0x407c68, Func Offset: 0xd8
	// Line 694, Address: 0x407c70, Func Offset: 0xe0
	// Line 697, Address: 0x407c80, Func Offset: 0xf0
	// Line 698, Address: 0x407c8c, Func Offset: 0xfc
	// Line 700, Address: 0x407c94, Func Offset: 0x104
	// Line 686, Address: 0x407ca0, Func Offset: 0x110
	// Line 700, Address: 0x407ca8, Func Offset: 0x118
	// Func End, Address: 0x407ce0, Func Offset: 0x150
}

// FullAtomicDupe__FP8RpAtomiciPP8RpAtomic
// Start address: 0x407ce0
void FullAtomicDupe(RpAtomic* atomic, int32 count, RpAtomic** output)
{
	int32 matidx;
	int32 i;
	RwStream* stream;
	RwMemory rwmemA;
	RpAtomic* tempAtom;
	RpClump* clump;
	RwLinkList backupClump_atomicList;
	RwLLLink backupAtomic_inClumpLink;
	RpClump* tempClump;
	uint32 fastused;
	RxPipeline* fastAtmPipe;
	RxPipeline* fastMatPipe[256];
	RpMaterialList* matList;
	RwMemory rwmemB;
	RpClump* outClump;
	RpMaterialList* matList;
	RpHAnimHierarchy* pHier;
	RpSkin* pSkin;
	// Line 412, Address: 0x407ce0, Func Offset: 0
	// Line 418, Address: 0x407ce4, Func Offset: 0x4
	// Line 412, Address: 0x407ce8, Func Offset: 0x8
	// Line 418, Address: 0x407cec, Func Offset: 0xc
	// Line 412, Address: 0x407cf0, Func Offset: 0x10
	// Line 418, Address: 0x407d18, Func Offset: 0x38
	// Line 442, Address: 0x407d3c, Func Offset: 0x5c
	// Line 444, Address: 0x407d50, Func Offset: 0x70
	// Line 452, Address: 0x407d58, Func Offset: 0x78
	// Line 449, Address: 0x407d5c, Func Offset: 0x7c
	// Line 452, Address: 0x407d60, Func Offset: 0x80
	// Line 457, Address: 0x407d68, Func Offset: 0x88
	// Line 452, Address: 0x407d6c, Func Offset: 0x8c
	// Line 451, Address: 0x407d70, Func Offset: 0x90
	// Line 452, Address: 0x407d74, Func Offset: 0x94
	// Line 457, Address: 0x407d78, Func Offset: 0x98
	// Line 451, Address: 0x407d7c, Func Offset: 0x9c
	// Line 453, Address: 0x407d88, Func Offset: 0xa8
	// Line 451, Address: 0x407d8c, Func Offset: 0xac
	// Line 454, Address: 0x407d90, Func Offset: 0xb0
	// Line 455, Address: 0x407d94, Func Offset: 0xb4
	// Line 457, Address: 0x407d98, Func Offset: 0xb8
	// Line 458, Address: 0x407da0, Func Offset: 0xc0
	// Line 459, Address: 0x407da4, Func Offset: 0xc4
	// Line 458, Address: 0x407da8, Func Offset: 0xc8
	// Line 459, Address: 0x407dac, Func Offset: 0xcc
	// Line 463, Address: 0x407db0, Func Offset: 0xd0
	// Line 458, Address: 0x407db8, Func Offset: 0xd8
	// Line 459, Address: 0x407dc0, Func Offset: 0xe0
	// Line 463, Address: 0x407dc4, Func Offset: 0xe4
	// Line 467, Address: 0x407dcc, Func Offset: 0xec
	// Line 471, Address: 0x407de0, Func Offset: 0x100
	// Line 476, Address: 0x407df4, Func Offset: 0x114
	// Line 478, Address: 0x407e08, Func Offset: 0x128
	// Line 481, Address: 0x407e14, Func Offset: 0x134
	// Line 483, Address: 0x407e20, Func Offset: 0x140
	// Line 499, Address: 0x407e34, Func Offset: 0x154
	// Line 502, Address: 0x407e38, Func Offset: 0x158
	// Line 503, Address: 0x407e50, Func Offset: 0x170
	// Line 504, Address: 0x407e60, Func Offset: 0x180
	// Line 505, Address: 0x407e74, Func Offset: 0x194
	// Line 508, Address: 0x407e7c, Func Offset: 0x19c
	// Line 509, Address: 0x407e84, Func Offset: 0x1a4
	// Line 510, Address: 0x407e88, Func Offset: 0x1a8
	// Line 512, Address: 0x407e90, Func Offset: 0x1b0
	// Line 514, Address: 0x407e94, Func Offset: 0x1b4
	// Line 521, Address: 0x407fb0, Func Offset: 0x2d0
	// Line 522, Address: 0x407fb8, Func Offset: 0x2d8
	// Line 526, Address: 0x407fc0, Func Offset: 0x2e0
	// Line 527, Address: 0x407fe8, Func Offset: 0x308
	// Line 529, Address: 0x407ffc, Func Offset: 0x31c
	// Line 531, Address: 0x408004, Func Offset: 0x324
	// Line 535, Address: 0x40800c, Func Offset: 0x32c
	// Line 537, Address: 0x408018, Func Offset: 0x338
	// Line 539, Address: 0x40802c, Func Offset: 0x34c
	// Line 542, Address: 0x408034, Func Offset: 0x354
	// Line 557, Address: 0x408044, Func Offset: 0x364
	// Line 558, Address: 0x40804c, Func Offset: 0x36c
	// Line 562, Address: 0x408060, Func Offset: 0x380
	// Line 565, Address: 0x40806c, Func Offset: 0x38c
	// Line 566, Address: 0x408070, Func Offset: 0x390
	// Line 574, Address: 0x40807c, Func Offset: 0x39c
	// Line 577, Address: 0x408084, Func Offset: 0x3a4
	// Line 599, Address: 0x408090, Func Offset: 0x3b0
	// Line 600, Address: 0x4080a0, Func Offset: 0x3c0
	// Line 601, Address: 0x4080a4, Func Offset: 0x3c4
	// Line 602, Address: 0x4080b0, Func Offset: 0x3d0
	// Line 603, Address: 0x4080c8, Func Offset: 0x3e8
	// Line 604, Address: 0x4080d0, Func Offset: 0x3f0
	// Line 603, Address: 0x4080d4, Func Offset: 0x3f4
	// Line 604, Address: 0x4080e4, Func Offset: 0x404
	// Line 605, Address: 0x4080f4, Func Offset: 0x414
	// Line 604, Address: 0x4080f8, Func Offset: 0x418
	// Line 609, Address: 0x4080fc, Func Offset: 0x41c
	// Line 610, Address: 0x408104, Func Offset: 0x424
	// Line 611, Address: 0x408110, Func Offset: 0x430
	// Line 612, Address: 0x40811c, Func Offset: 0x43c
	// Line 614, Address: 0x40812c, Func Offset: 0x44c
	// Line 617, Address: 0x408138, Func Offset: 0x458
	// Line 620, Address: 0x408148, Func Offset: 0x468
	// Line 640, Address: 0x408158, Func Offset: 0x478
	// Line 563, Address: 0x40817c, Func Offset: 0x49c
	// Line 640, Address: 0x408188, Func Offset: 0x4a8
	// Func End, Address: 0x4081b4, Func Offset: 0x4d4
}

// GimmeAtomicCallback__FP8RpAtomicPv
// Start address: 0x4081c0
RpAtomic* GimmeAtomicCallback(RpAtomic* atomic, void* tmp)
{
	// Line 405, Address: 0x4081c0, Func Offset: 0
	// Line 407, Address: 0x4081c4, Func Offset: 0x4
	// Func End, Address: 0x4081cc, Func Offset: 0xc
}

// xModelBucket_PreCountAlloc__Fi
// Start address: 0x4081d0
void xModelBucket_PreCountAlloc(int32 maxAlphaModels)
{
	RwBBox bbox;
	// Line 362, Address: 0x4081d0, Func Offset: 0
	// Line 364, Address: 0x4081d4, Func Offset: 0x4
	// Line 362, Address: 0x4081d8, Func Offset: 0x8
	// Line 364, Address: 0x4081dc, Func Offset: 0xc
	// Line 363, Address: 0x4081e0, Func Offset: 0x10
	// Line 364, Address: 0x4081e4, Func Offset: 0x14
	// Line 365, Address: 0x4081fc, Func Offset: 0x2c
	// Line 366, Address: 0x408210, Func Offset: 0x40
	// Line 365, Address: 0x408218, Func Offset: 0x48
	// Line 366, Address: 0x40821c, Func Offset: 0x4c
	// Line 378, Address: 0x408234, Func Offset: 0x64
	// Line 372, Address: 0x408238, Func Offset: 0x68
	// Line 375, Address: 0x408240, Func Offset: 0x70
	// Line 372, Address: 0x408244, Func Offset: 0x74
	// Line 375, Address: 0x408248, Func Offset: 0x78
	// Line 373, Address: 0x40824c, Func Offset: 0x7c
	// Line 374, Address: 0x408250, Func Offset: 0x80
	// Line 375, Address: 0x408254, Func Offset: 0x84
	// Line 376, Address: 0x408258, Func Offset: 0x88
	// Line 378, Address: 0x40825c, Func Offset: 0x8c
	// Line 382, Address: 0x408268, Func Offset: 0x98
	// Line 384, Address: 0x408278, Func Offset: 0xa8
	// Line 385, Address: 0x408288, Func Offset: 0xb8
	// Func End, Address: 0x408294, Func Offset: 0xc4
}

// xModelBucket_PreCountBucket__FP8RpAtomicR10xModelPipeUi
// Start address: 0x4082a0
void xModelBucket_PreCountBucket(RpAtomic* data, xModelPipe& pipe, uint32 subObjects)
{
	int32 numbuckets;
	int32 modelcount;
	// Line 309, Address: 0x4082a0, Func Offset: 0
	// Line 319, Address: 0x4082bc, Func Offset: 0x1c
	// Line 324, Address: 0x408304, Func Offset: 0x64
	// Line 325, Address: 0x408308, Func Offset: 0x68
	// Line 329, Address: 0x408310, Func Offset: 0x70
	// Line 330, Address: 0x408314, Func Offset: 0x74
	// Line 333, Address: 0x40831c, Func Offset: 0x7c
	// Line 334, Address: 0x408320, Func Offset: 0x80
	// Line 337, Address: 0x408328, Func Offset: 0x88
	// Line 339, Address: 0x40833c, Func Offset: 0x9c
	// Line 340, Address: 0x408344, Func Offset: 0xa4
	// Line 346, Address: 0x408348, Func Offset: 0xa8
	// Line 348, Address: 0x40834c, Func Offset: 0xac
	// Line 349, Address: 0x408358, Func Offset: 0xb8
	// Line 350, Address: 0x40835c, Func Offset: 0xbc
	// Line 352, Address: 0x408360, Func Offset: 0xc0
	// Line 353, Address: 0x408370, Func Offset: 0xd0
	// Line 356, Address: 0x408378, Func Offset: 0xd8
	// Line 357, Address: 0x408380, Func Offset: 0xe0
	// Line 356, Address: 0x408388, Func Offset: 0xe8
	// Line 357, Address: 0x40838c, Func Offset: 0xec
	// Line 356, Address: 0x408390, Func Offset: 0xf0
	// Line 357, Address: 0x408394, Func Offset: 0xf4
	// Line 358, Address: 0x408398, Func Offset: 0xf8
	// Func End, Address: 0x4083b4, Func Offset: 0x114
}

// xModelBucket_PreCountReset__Fv
// Start address: 0x4083c0
void xModelBucket_PreCountReset()
{
	// Line 296, Address: 0x4083c0, Func Offset: 0
	// Line 297, Address: 0x4083c4, Func Offset: 0x4
	// Line 298, Address: 0x4083c8, Func Offset: 0x8
	// Line 299, Address: 0x4083cc, Func Offset: 0xc
	// Line 300, Address: 0x4083d0, Func Offset: 0x10
	// Line 301, Address: 0x4083d4, Func Offset: 0x14
	// Line 302, Address: 0x4083d8, Func Offset: 0x18
	// Line 303, Address: 0x4083dc, Func Offset: 0x1c
	// Line 304, Address: 0x4083e0, Func Offset: 0x20
	// Line 306, Address: 0x4083e4, Func Offset: 0x24
	// Func End, Address: 0x4083ec, Func Offset: 0x2c
}

// compare_opaque_buckets__19@unnamed@xWad3_cpp@FPCvPCv
// Start address: 0x4083f0
int32 compare_opaque_buckets(void* e1, void* e2)
{
	xModelBucket& b1;
	xModelBucket& b2;
	int32 use_layer1;
	int32 use_layer2;
	// Line 120, Address: 0x4083f0, Func Offset: 0
	// Line 121, Address: 0x4083f4, Func Offset: 0x4
	// Line 122, Address: 0x408400, Func Offset: 0x10
	// Line 123, Address: 0x408404, Func Offset: 0x14
	// Line 125, Address: 0x408414, Func Offset: 0x24
	// Line 127, Address: 0x40841c, Func Offset: 0x2c
	// Line 129, Address: 0x40842c, Func Offset: 0x3c
	// Line 130, Address: 0x408434, Func Offset: 0x44
	// Line 124, Address: 0x40843c, Func Offset: 0x4c
	// Line 126, Address: 0x408444, Func Offset: 0x54
	// Line 128, Address: 0x40844c, Func Offset: 0x5c
	// Line 130, Address: 0x408454, Func Offset: 0x64
	// Line 132, Address: 0x40845c, Func Offset: 0x6c
	// Line 135, Address: 0x408478, Func Offset: 0x88
	// Func End, Address: 0x408480, Func Offset: 0x90
}

