



void iEnvMatOrderRenderPS2(iEnv* env, uint8 alpha);
void iEnvMatOrderSetup(iEnv* env);
int32 CmpMatOrder(void* a, void* b);
void iEnvEndRenderFX();
void iEnvRender(iEnv* env, uint8 alpha);
void iEnvSetup(iEnv* env);
void iEnvLightingBasics();
void iEnvDefaultLighting();
void iEnvFree(iEnv* env);
void iEnvLoadEnd(iEnv* env, int32 dataType);
void iEnvJSPOff(iEnv* env, xJSPHeader* jsp);
void iEnvJSPOn(iEnv* env, xJSPHeader* jsp);
void iEnvJSPVisibilityDec(iEnv* env, xJSPHeader* jsp);
void iEnvJSPVisibilityInc(iEnv* env, xJSPHeader* jsp);
uint8 iEnvLoadJSP(iEnv* env, uint32 aid, void* data, int32 dataType, int32 index);
void iEnvLoadBegin(iEnv* env, int32 dataType, int32 count);
void iEnvStartup();
RpAtomic* SetPipelineCB(RpAtomic* atomic);

// iEnvMatOrderRenderPS2__FP4iEnvb
// Start address: 0x4b2c30
void iEnvMatOrderRenderPS2(iEnv* env, uint8 alpha)
{
	int32 i;
	int32 backcullon;
	int32 zbufferon;
	int32 matOrderCount;
	iEnvMatOrder* currMatOrder;
	int32 currMatGroup;
	uint32 old_zWriteEnable;
	uint32 old_cullMode;
	uint32 oldState;
	uint32 newState;
	int32 matOrderEnd;
	RpAtomic* apAtom;
	xJSPNodeInfo* nodeInfo;
	// Line 1586, Address: 0x4b2c30, Func Offset: 0
	// Line 1588, Address: 0x4b2c48, Func Offset: 0x18
	// Line 1586, Address: 0x4b2c4c, Func Offset: 0x1c
	// Line 1589, Address: 0x4b2c54, Func Offset: 0x24
	// Line 1586, Address: 0x4b2c58, Func Offset: 0x28
	// Line 1592, Address: 0x4b2c60, Func Offset: 0x30
	// Line 1586, Address: 0x4b2c64, Func Offset: 0x34
	// Line 1592, Address: 0x4b2c6c, Func Offset: 0x3c
	// Line 1591, Address: 0x4b2c70, Func Offset: 0x40
	// Line 1592, Address: 0x4b2c74, Func Offset: 0x44
	// Line 1606, Address: 0x4b2c78, Func Offset: 0x48
	// Line 1607, Address: 0x4b2c8c, Func Offset: 0x5c
	// Line 1612, Address: 0x4b2c9c, Func Offset: 0x6c
	// Line 1613, Address: 0x4b2ca8, Func Offset: 0x78
	// Line 1614, Address: 0x4b2cac, Func Offset: 0x7c
	// Line 1616, Address: 0x4b2cb0, Func Offset: 0x80
	// Line 1614, Address: 0x4b2cb4, Func Offset: 0x84
	// Line 1616, Address: 0x4b2cb8, Func Offset: 0x88
	// Line 1618, Address: 0x4b2cc0, Func Offset: 0x90
	// Line 1620, Address: 0x4b2ccc, Func Offset: 0x9c
	// Line 1621, Address: 0x4b2cd4, Func Offset: 0xa4
	// Line 1622, Address: 0x4b2ce0, Func Offset: 0xb0
	// Line 1623, Address: 0x4b2cf8, Func Offset: 0xc8
	// Line 1625, Address: 0x4b2d10, Func Offset: 0xe0
	// Line 1629, Address: 0x4b2d2c, Func Offset: 0xfc
	// Line 1632, Address: 0x4b2d30, Func Offset: 0x100
	// Line 1640, Address: 0x4b2d40, Func Offset: 0x110
	// Line 1641, Address: 0x4b2d54, Func Offset: 0x124
	// Line 1642, Address: 0x4b2d58, Func Offset: 0x128
	// Line 1643, Address: 0x4b2d5c, Func Offset: 0x12c
	// Line 1644, Address: 0x4b2d60, Func Offset: 0x130
	// Line 1645, Address: 0x4b2d64, Func Offset: 0x134
	// Line 1646, Address: 0x4b2d68, Func Offset: 0x138
	// Line 1647, Address: 0x4b2d6c, Func Offset: 0x13c
	// Line 1648, Address: 0x4b2d70, Func Offset: 0x140
	// Line 1649, Address: 0x4b2d74, Func Offset: 0x144
	// Line 1650, Address: 0x4b2d78, Func Offset: 0x148
	// Line 1651, Address: 0x4b2d7c, Func Offset: 0x14c
	// Line 1652, Address: 0x4b2d80, Func Offset: 0x150
	// Line 1653, Address: 0x4b2d84, Func Offset: 0x154
	// Line 1654, Address: 0x4b2d88, Func Offset: 0x158
	// Line 1655, Address: 0x4b2d8c, Func Offset: 0x15c
	// Line 1656, Address: 0x4b2d90, Func Offset: 0x160
	// Line 1658, Address: 0x4b2d94, Func Offset: 0x164
	// Line 1659, Address: 0x4b2d98, Func Offset: 0x168
	// Line 1660, Address: 0x4b2d9c, Func Offset: 0x16c
	// Line 1661, Address: 0x4b2da0, Func Offset: 0x170
	// Line 1662, Address: 0x4b2da4, Func Offset: 0x174
	// Line 1663, Address: 0x4b2da8, Func Offset: 0x178
	// Line 1664, Address: 0x4b2dac, Func Offset: 0x17c
	// Line 1665, Address: 0x4b2db0, Func Offset: 0x180
	// Line 1667, Address: 0x4b2db4, Func Offset: 0x184
	// Line 1668, Address: 0x4b2db8, Func Offset: 0x188
	// Line 1669, Address: 0x4b2dbc, Func Offset: 0x18c
	// Line 1670, Address: 0x4b2dc0, Func Offset: 0x190
	// Line 1671, Address: 0x4b2dc4, Func Offset: 0x194
	// Line 1672, Address: 0x4b2dc8, Func Offset: 0x198
	// Line 1673, Address: 0x4b2dcc, Func Offset: 0x19c
	// Line 1674, Address: 0x4b2dd0, Func Offset: 0x1a0
	// Line 1676, Address: 0x4b2dd4, Func Offset: 0x1a4
	// Line 1677, Address: 0x4b2dd8, Func Offset: 0x1a8
	// Line 1678, Address: 0x4b2ddc, Func Offset: 0x1ac
	// Line 1680, Address: 0x4b2de0, Func Offset: 0x1b0
	// Line 1681, Address: 0x4b2de4, Func Offset: 0x1b4
	// Line 1682, Address: 0x4b2de8, Func Offset: 0x1b8
	// Line 1683, Address: 0x4b2dec, Func Offset: 0x1bc
	// Line 1684, Address: 0x4b2df0, Func Offset: 0x1c0
	// Line 1685, Address: 0x4b2df4, Func Offset: 0x1c4
	// Line 1687, Address: 0x4b2df8, Func Offset: 0x1c8
	// Line 1689, Address: 0x4b2e00, Func Offset: 0x1d0
	// Line 1698, Address: 0x4b2e08, Func Offset: 0x1d8
	// Line 1699, Address: 0x4b2e10, Func Offset: 0x1e0
	// Line 1702, Address: 0x4b2e20, Func Offset: 0x1f0
	// Line 1700, Address: 0x4b2e2c, Func Offset: 0x1fc
	// Line 1702, Address: 0x4b2e30, Func Offset: 0x200
	// Line 1704, Address: 0x4b2e38, Func Offset: 0x208
	// Line 1705, Address: 0x4b2e40, Func Offset: 0x210
	// Line 1708, Address: 0x4b2e50, Func Offset: 0x220
	// Line 1706, Address: 0x4b2e5c, Func Offset: 0x22c
	// Line 1708, Address: 0x4b2e60, Func Offset: 0x230
	// Line 1713, Address: 0x4b2e68, Func Offset: 0x238
	// Line 1714, Address: 0x4b2e70, Func Offset: 0x240
	// Line 1717, Address: 0x4b2e80, Func Offset: 0x250
	// Line 1715, Address: 0x4b2e8c, Func Offset: 0x25c
	// Line 1717, Address: 0x4b2e90, Func Offset: 0x260
	// Line 1719, Address: 0x4b2e98, Func Offset: 0x268
	// Line 1720, Address: 0x4b2ea0, Func Offset: 0x270
	// Line 1723, Address: 0x4b2eb0, Func Offset: 0x280
	// Line 1721, Address: 0x4b2eb4, Func Offset: 0x284
	// Line 1723, Address: 0x4b2eb8, Func Offset: 0x288
	// Line 1728, Address: 0x4b2ec8, Func Offset: 0x298
	// Line 1729, Address: 0x4b2ed4, Func Offset: 0x2a4
	// Line 1730, Address: 0x4b2edc, Func Offset: 0x2ac
	// Line 1731, Address: 0x4b2ee8, Func Offset: 0x2b8
	// Line 1732, Address: 0x4b2ef4, Func Offset: 0x2c4
	// Line 1733, Address: 0x4b2ef8, Func Offset: 0x2c8
	// Line 1734, Address: 0x4b2efc, Func Offset: 0x2cc
	// Line 1736, Address: 0x4b2f00, Func Offset: 0x2d0
	// Line 1739, Address: 0x4b2f18, Func Offset: 0x2e8
	// Line 1744, Address: 0x4b2f28, Func Offset: 0x2f8
	// Line 1739, Address: 0x4b2f2c, Func Offset: 0x2fc
	// Line 1744, Address: 0x4b2f30, Func Offset: 0x300
	// Line 1745, Address: 0x4b2f3c, Func Offset: 0x30c
	// Line 1747, Address: 0x4b2f4c, Func Offset: 0x31c
	// Func End, Address: 0x4b2f7c, Func Offset: 0x34c
}

// iEnvMatOrderSetup__FP4iEnv
// Start address: 0x4b2f80
void iEnvMatOrderSetup(iEnv* env)
{
	int32 i;
	int32 currMatGroup;
	int32 nodeIndex;
	RwLLLink* cur;
	RwLLLink* end;
	RpClump* clump;
	int32 i;
	// Line 1520, Address: 0x4b2f80, Func Offset: 0
	// Line 1524, Address: 0x4b2f84, Func Offset: 0x4
	// Line 1520, Address: 0x4b2f88, Func Offset: 0x8
	// Line 1523, Address: 0x4b2fa0, Func Offset: 0x20
	// Line 1524, Address: 0x4b2fa4, Func Offset: 0x24
	// Line 1525, Address: 0x4b2fb8, Func Offset: 0x38
	// Line 1526, Address: 0x4b2fbc, Func Offset: 0x3c
	// Line 1525, Address: 0x4b2fc0, Func Offset: 0x40
	// Line 1526, Address: 0x4b2fd8, Func Offset: 0x58
	// Line 1527, Address: 0x4b2fe8, Func Offset: 0x68
	// Line 1530, Address: 0x4b3000, Func Offset: 0x80
	// Line 1533, Address: 0x4b3018, Func Offset: 0x98
	// Line 1534, Address: 0x4b3028, Func Offset: 0xa8
	// Line 1535, Address: 0x4b302c, Func Offset: 0xac
	// Line 1537, Address: 0x4b3030, Func Offset: 0xb0
	// Line 1542, Address: 0x4b3040, Func Offset: 0xc0
	// Line 1545, Address: 0x4b3044, Func Offset: 0xc4
	// Line 1542, Address: 0x4b3048, Func Offset: 0xc8
	// Line 1543, Address: 0x4b3050, Func Offset: 0xd0
	// Line 1544, Address: 0x4b305c, Func Offset: 0xdc
	// Line 1548, Address: 0x4b3060, Func Offset: 0xe0
	// Line 1544, Address: 0x4b3064, Func Offset: 0xe4
	// Line 1545, Address: 0x4b306c, Func Offset: 0xec
	// Line 1546, Address: 0x4b3078, Func Offset: 0xf8
	// Line 1549, Address: 0x4b309c, Func Offset: 0x11c
	// Line 1550, Address: 0x4b30a0, Func Offset: 0x120
	// Line 1551, Address: 0x4b30a8, Func Offset: 0x128
	// Line 1555, Address: 0x4b30c0, Func Offset: 0x140
	// Line 1554, Address: 0x4b30c4, Func Offset: 0x144
	// Line 1556, Address: 0x4b30c8, Func Offset: 0x148
	// Line 1555, Address: 0x4b30cc, Func Offset: 0x14c
	// Line 1556, Address: 0x4b30d0, Func Offset: 0x150
	// Line 1563, Address: 0x4b30e4, Func Offset: 0x164
	// Line 1565, Address: 0x4b30e8, Func Offset: 0x168
	// Line 1566, Address: 0x4b30fc, Func Offset: 0x17c
	// Line 1567, Address: 0x4b3108, Func Offset: 0x188
	// Line 1568, Address: 0x4b310c, Func Offset: 0x18c
	// Line 1569, Address: 0x4b3110, Func Offset: 0x190
	// Line 1570, Address: 0x4b3114, Func Offset: 0x194
	// Line 1569, Address: 0x4b3118, Func Offset: 0x198
	// Line 1570, Address: 0x4b3120, Func Offset: 0x1a0
	// Line 1573, Address: 0x4b3130, Func Offset: 0x1b0
	// Line 1574, Address: 0x4b3134, Func Offset: 0x1b4
	// Line 1575, Address: 0x4b3138, Func Offset: 0x1b8
	// Line 1576, Address: 0x4b314c, Func Offset: 0x1cc
	// Line 1578, Address: 0x4b3160, Func Offset: 0x1e0
	// Line 1579, Address: 0x4b3164, Func Offset: 0x1e4
	// Line 1580, Address: 0x4b316c, Func Offset: 0x1ec
	// Line 1581, Address: 0x4b3174, Func Offset: 0x1f4
	// Line 1582, Address: 0x4b3188, Func Offset: 0x208
	// Line 1566, Address: 0x4b3198, Func Offset: 0x218
	// Line 1582, Address: 0x4b319c, Func Offset: 0x21c
	// Func End, Address: 0x4b31d4, Func Offset: 0x254
}

// CmpMatOrder__FPCvPCv
// Start address: 0x4b31e0
int32 CmpMatOrder(void* a, void* b)
{
	iEnvMatOrder* ael;
	iEnvMatOrder* bel;
	xJSPNodeInfo* anod;
	xJSPNodeInfo* bnod;
	int32 sidecmp;
	RpMaterial* amat;
	RpMaterial* bmat;
	int8* atex;
	int32 namecmp;
	int32 decalcmp;
	uint32 acol;
	uint32 bcol;
	// Line 1449, Address: 0x4b31e0, Func Offset: 0
	// Line 1454, Address: 0x4b31f0, Func Offset: 0x10
	// Line 1455, Address: 0x4b31f4, Func Offset: 0x14
	// Line 1449, Address: 0x4b31f8, Func Offset: 0x18
	// Line 1455, Address: 0x4b3200, Func Offset: 0x20
	// Line 1456, Address: 0x4b3208, Func Offset: 0x28
	// Line 1457, Address: 0x4b3214, Func Offset: 0x34
	// Line 1463, Address: 0x4b3220, Func Offset: 0x40
	// Line 1465, Address: 0x4b3234, Func Offset: 0x54
	// Line 1466, Address: 0x4b323c, Func Offset: 0x5c
	// Line 1471, Address: 0x4b3258, Func Offset: 0x78
	// Line 1472, Address: 0x4b325c, Func Offset: 0x7c
	// Line 1471, Address: 0x4b3260, Func Offset: 0x80
	// Line 1472, Address: 0x4b3264, Func Offset: 0x84
	// Line 1471, Address: 0x4b3268, Func Offset: 0x88
	// Line 1472, Address: 0x4b326c, Func Offset: 0x8c
	// Line 1471, Address: 0x4b3270, Func Offset: 0x90
	// Line 1472, Address: 0x4b3274, Func Offset: 0x94
	// Line 1478, Address: 0x4b327c, Func Offset: 0x9c
	// Line 1481, Address: 0x4b3298, Func Offset: 0xb8
	// Line 1482, Address: 0x4b32b8, Func Offset: 0xd8
	// Line 1488, Address: 0x4b32c0, Func Offset: 0xe0
	// Line 1490, Address: 0x4b32d4, Func Offset: 0xf4
	// Line 1491, Address: 0x4b32dc, Func Offset: 0xfc
	// Line 1497, Address: 0x4b3300, Func Offset: 0x120
	// Line 1498, Address: 0x4b330c, Func Offset: 0x12c
	// Line 1499, Address: 0x4b3320, Func Offset: 0x140
	// Line 1500, Address: 0x4b332c, Func Offset: 0x14c
	// Line 1501, Address: 0x4b3340, Func Offset: 0x160
	// Line 1502, Address: 0x4b334c, Func Offset: 0x16c
	// Line 1504, Address: 0x4b3358, Func Offset: 0x178
	// Line 1508, Address: 0x4b3364, Func Offset: 0x184
	// Line 1509, Address: 0x4b3368, Func Offset: 0x188
	// Line 1510, Address: 0x4b336c, Func Offset: 0x18c
	// Line 1511, Address: 0x4b3378, Func Offset: 0x198
	// Line 1456, Address: 0x4b338c, Func Offset: 0x1ac
	// Line 1457, Address: 0x4b3394, Func Offset: 0x1b4
	// Line 1497, Address: 0x4b339c, Func Offset: 0x1bc
	// Line 1498, Address: 0x4b33a8, Func Offset: 0x1c8
	// Line 1499, Address: 0x4b33b4, Func Offset: 0x1d4
	// Line 1500, Address: 0x4b33c0, Func Offset: 0x1e0
	// Line 1501, Address: 0x4b33cc, Func Offset: 0x1ec
	// Line 1502, Address: 0x4b33d8, Func Offset: 0x1f8
	// Line 1510, Address: 0x4b33e4, Func Offset: 0x204
	// Line 1515, Address: 0x4b33ec, Func Offset: 0x20c
	// Line 1516, Address: 0x4b33f0, Func Offset: 0x210
	// Func End, Address: 0x4b340c, Func Offset: 0x22c
}

// iEnvEndRenderFX__FP4iEnv
// Start address: 0x4b3410
void iEnvEndRenderFX()
{
	// Line 1431, Address: 0x4b3410, Func Offset: 0
	// Line 1434, Address: 0x4b3420, Func Offset: 0x10
	// Line 1436, Address: 0x4b344c, Func Offset: 0x3c
	// Line 1437, Address: 0x4b3454, Func Offset: 0x44
	// Line 1438, Address: 0x4b3460, Func Offset: 0x50
	// Line 1441, Address: 0x4b3464, Func Offset: 0x54
	// Func End, Address: 0x4b3474, Func Offset: 0x64
}

// iEnvRender__FP4iEnvb
// Start address: 0x4b3480
void iEnvRender(iEnv* env, uint8 alpha)
{
	// Line 1371, Address: 0x4b3480, Func Offset: 0
	// Line 1379, Address: 0x4b3498, Func Offset: 0x18
	// Line 1383, Address: 0x4b34a0, Func Offset: 0x20
	// Line 1384, Address: 0x4b34ac, Func Offset: 0x2c
	// Line 1390, Address: 0x4b34b4, Func Offset: 0x34
	// Func End, Address: 0x4b34e0, Func Offset: 0x60
}

// iEnvSetup__FP4iEnv
// Start address: 0x4b34e0
void iEnvSetup(iEnv* env)
{
	// Line 1367, Address: 0x4b34e0, Func Offset: 0
	// Func End, Address: 0x4b34e8, Func Offset: 0x8
}

// iEnvLightingBasics__FP4iEnvP9xEnvAsset
// Start address: 0x4b34f0
void iEnvLightingBasics()
{
	// Line 1004, Address: 0x4b34f0, Func Offset: 0
	// Func End, Address: 0x4b34f8, Func Offset: 0x8
}

// iEnvDefaultLighting__FP4iEnv
// Start address: 0x4b3500
void iEnvDefaultLighting()
{
	// Line 974, Address: 0x4b3500, Func Offset: 0
	// Func End, Address: 0x4b3508, Func Offset: 0x8
}

// iEnvFree__FP4iEnv
// Start address: 0x4b3510
void iEnvFree(iEnv* env)
{
	// Line 851, Address: 0x4b3510, Func Offset: 0
	// Line 880, Address: 0x4b351c, Func Offset: 0xc
	// Line 882, Address: 0x4b3524, Func Offset: 0x14
	// Line 887, Address: 0x4b352c, Func Offset: 0x1c
	// Line 889, Address: 0x4b3534, Func Offset: 0x24
	// Line 893, Address: 0x4b353c, Func Offset: 0x2c
	// Line 898, Address: 0x4b3544, Func Offset: 0x34
	// Line 901, Address: 0x4b354c, Func Offset: 0x3c
	// Line 905, Address: 0x4b3554, Func Offset: 0x44
	// Line 910, Address: 0x4b355c, Func Offset: 0x4c
	// Line 912, Address: 0x4b3560, Func Offset: 0x50
	// Func End, Address: 0x4b3570, Func Offset: 0x60
}

// iEnvLoadEnd__FP4iEnvi
// Start address: 0x4b3570
void iEnvLoadEnd(iEnv* env, int32 dataType)
{
	// Line 829, Address: 0x4b3570, Func Offset: 0
	// Line 831, Address: 0x4b357c, Func Offset: 0xc
	// Line 844, Address: 0x4b3584, Func Offset: 0x14
	// Func End, Address: 0x4b35c8, Func Offset: 0x58
}

// iEnvJSPOff__FP4iEnvP10xJSPHeader
// Start address: 0x4b35d0
void iEnvJSPOff(iEnv* env, xJSPHeader* jsp)
{
	int32 i;
	// Line 775, Address: 0x4b35d0, Func Offset: 0
	// Line 776, Address: 0x4b35e4, Func Offset: 0x14
	// Line 777, Address: 0x4b35f8, Func Offset: 0x28
	// Line 778, Address: 0x4b3604, Func Offset: 0x34
	// Line 782, Address: 0x4b3620, Func Offset: 0x50
	// Line 783, Address: 0x4b3628, Func Offset: 0x58
	// Line 785, Address: 0x4b3630, Func Offset: 0x60
	// Line 788, Address: 0x4b3640, Func Offset: 0x70
	// Func End, Address: 0x4b3678, Func Offset: 0xa8
}

// iEnvJSPOn__FP4iEnvP10xJSPHeader
// Start address: 0x4b3680
void iEnvJSPOn(iEnv* env, xJSPHeader* jsp)
{
	int32 i;
	// Line 759, Address: 0x4b3680, Func Offset: 0
	// Line 760, Address: 0x4b3694, Func Offset: 0x14
	// Line 761, Address: 0x4b36a8, Func Offset: 0x28
	// Line 762, Address: 0x4b36b4, Func Offset: 0x34
	// Line 766, Address: 0x4b36cc, Func Offset: 0x4c
	// Line 767, Address: 0x4b36d8, Func Offset: 0x58
	// Line 769, Address: 0x4b36e0, Func Offset: 0x60
	// Line 772, Address: 0x4b36f0, Func Offset: 0x70
	// Func End, Address: 0x4b3728, Func Offset: 0xa8
}

// iEnvJSPVisibilityDec__FP4iEnvP10xJSPHeader
// Start address: 0x4b3730
void iEnvJSPVisibilityDec(iEnv* env, xJSPHeader* jsp)
{
	int32 i;
	// Line 743, Address: 0x4b3730, Func Offset: 0
	// Line 744, Address: 0x4b3744, Func Offset: 0x14
	// Line 745, Address: 0x4b3758, Func Offset: 0x28
	// Line 746, Address: 0x4b3764, Func Offset: 0x34
	// Line 750, Address: 0x4b3780, Func Offset: 0x50
	// Line 751, Address: 0x4b3790, Func Offset: 0x60
	// Line 753, Address: 0x4b3798, Func Offset: 0x68
	// Line 756, Address: 0x4b37a8, Func Offset: 0x78
	// Func End, Address: 0x4b37e0, Func Offset: 0xb0
}

// iEnvJSPVisibilityInc__FP4iEnvP10xJSPHeader
// Start address: 0x4b37e0
void iEnvJSPVisibilityInc(iEnv* env, xJSPHeader* jsp)
{
	int32 i;
	// Line 724, Address: 0x4b37e0, Func Offset: 0
	// Line 725, Address: 0x4b37f4, Func Offset: 0x14
	// Line 726, Address: 0x4b3808, Func Offset: 0x28
	// Line 727, Address: 0x4b3814, Func Offset: 0x34
	// Line 734, Address: 0x4b382c, Func Offset: 0x4c
	// Line 735, Address: 0x4b383c, Func Offset: 0x5c
	// Line 737, Address: 0x4b3844, Func Offset: 0x64
	// Line 740, Address: 0x4b3858, Func Offset: 0x78
	// Func End, Address: 0x4b3890, Func Offset: 0xb0
}

// iEnvLoadJSP__FP4iEnvUiPCvUiii
// Start address: 0x4b3890
uint8 iEnvLoadJSP(iEnv* env, uint32 aid, void* data, int32 dataType, int32 index)
{
	xJSPHeader* jsp;
	// Line 678, Address: 0x4b3890, Func Offset: 0
	// Line 684, Address: 0x4b3894, Func Offset: 0x4
	// Line 678, Address: 0x4b3898, Func Offset: 0x8
	// Line 684, Address: 0x4b389c, Func Offset: 0xc
	// Line 678, Address: 0x4b38a0, Func Offset: 0x10
	// Line 684, Address: 0x4b38b0, Func Offset: 0x20
	// Line 689, Address: 0x4b38ec, Func Offset: 0x5c
	// Line 690, Address: 0x4b38fc, Func Offset: 0x6c
	// Line 703, Address: 0x4b3900, Func Offset: 0x70
	// Line 690, Address: 0x4b3908, Func Offset: 0x78
	// Line 693, Address: 0x4b3910, Func Offset: 0x80
	// Line 703, Address: 0x4b391c, Func Offset: 0x8c
	// Line 711, Address: 0x4b3940, Func Offset: 0xb0
	// Line 713, Address: 0x4b394c, Func Offset: 0xbc
	// Line 715, Address: 0x4b3a98, Func Offset: 0x208
	// Line 718, Address: 0x4b3aa0, Func Offset: 0x210
	// Line 719, Address: 0x4b3aa4, Func Offset: 0x214
	// Func End, Address: 0x4b3abc, Func Offset: 0x22c
}

// iEnvLoadBegin__FP4iEnvii
// Start address: 0x4b3ac0
void iEnvLoadBegin(iEnv* env, int32 dataType, int32 count)
{
	RwBBox tmpbbox;
	// Line 640, Address: 0x4b3ac0, Func Offset: 0
	// Line 644, Address: 0x4b3ad8, Func Offset: 0x18
	// Line 675, Address: 0x4b3ae0, Func Offset: 0x20
	// Line 647, Address: 0x4b3af0, Func Offset: 0x30
	// Line 675, Address: 0x4b3af4, Func Offset: 0x34
	// Line 648, Address: 0x4b3b00, Func Offset: 0x40
	// Line 675, Address: 0x4b3b04, Func Offset: 0x44
	// Line 649, Address: 0x4b3b14, Func Offset: 0x54
	// Line 675, Address: 0x4b3b18, Func Offset: 0x58
	// Line 649, Address: 0x4b3b1c, Func Offset: 0x5c
	// Line 675, Address: 0x4b3b20, Func Offset: 0x60
	// Line 653, Address: 0x4b3b30, Func Offset: 0x70
	// Line 675, Address: 0x4b3b34, Func Offset: 0x74
	// Line 667, Address: 0x4b3b6c, Func Offset: 0xac
	// Line 675, Address: 0x4b3b74, Func Offset: 0xb4
	// Func End, Address: 0x4b3bac, Func Offset: 0xec
}

// iEnvStartup__Fv
// Start address: 0x4b3bb0
void iEnvStartup()
{
	// Line 637, Address: 0x4b3bb0, Func Offset: 0
	// Func End, Address: 0x4b3bb8, Func Offset: 0x8
}

// SetPipelineCB__FP8RpAtomicPv
// Start address: 0x4b3bc0
RpAtomic* SetPipelineCB(RpAtomic* atomic)
{
	int32 i;
	RpMaterialList* matlist;
	RxPipeline* atmpipe;
	RxPipeline* matpipe;
	// Line 481, Address: 0x4b3bc0, Func Offset: 0
	// Line 488, Address: 0x4b3bc4, Func Offset: 0x4
	// Line 481, Address: 0x4b3bc8, Func Offset: 0x8
	// Line 487, Address: 0x4b3be0, Func Offset: 0x20
	// Line 488, Address: 0x4b3be8, Func Offset: 0x28
	// Line 489, Address: 0x4b3bf4, Func Offset: 0x34
	// Line 493, Address: 0x4b3c08, Func Offset: 0x48
	// Line 496, Address: 0x4b3c14, Func Offset: 0x54
	// Line 497, Address: 0x4b3c18, Func Offset: 0x58
	// Line 498, Address: 0x4b3c2c, Func Offset: 0x6c
	// Line 499, Address: 0x4b3c30, Func Offset: 0x70
	// Line 498, Address: 0x4b3c34, Func Offset: 0x74
	// Line 499, Address: 0x4b3c40, Func Offset: 0x80
	// Line 512, Address: 0x4b3c68, Func Offset: 0xa8
	// Line 513, Address: 0x4b3c6c, Func Offset: 0xac
	// Func End, Address: 0x4b3c88, Func Offset: 0xc8
}

