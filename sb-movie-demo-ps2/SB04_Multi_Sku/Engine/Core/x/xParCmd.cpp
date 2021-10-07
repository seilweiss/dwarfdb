



void xParCmd_Shaper_Update(xParCmd* c, xParGroup* ps, float32 dt);
void xParCmd_AlphaInOut_Update(xParCmd* c, xParGroup* ps);
void xParCmd_SizeInOut_Update(xParCmd* c, xParGroup* ps);
void xParCmd_DampenSpeed_Update(xParCmd* c, xParGroup* ps, float32 dt);
void xParCmdCollideFallSticky_Update(xParCmd* c, xParGroup* ps);
void xParCmdCollideFall_Update(xParCmd* c, xParGroup* ps);
void xParCmdTexAnim_Update(xParCmd* c, xParGroup* ps, float32 dt);
void xParCmdTex_Update();
void xParCmdRotateAround_Update(xParCmd* c, xParGroup* ps, float32 dt);
void xParCmdVelocityApply_Update(xParGroup* ps, float32 dt);
void xParCmdRotPar_Update(xParCmd* c, xParGroup* ps, float32 dt);
void xParCmdApplyWind_Update(xParCmd* c, xParGroup* ps, float32 dt);
void xParCmdRandomVelocityPar_Update(xParCmd* c, xParGroup* ps, float32 dt);
void xParCmdAlpha3rdPolyReg_Update();
void xParCmdScale_Update();
void xParCmdSmokeAlpha_Update();
void xParCmdScale3rdPolyReg_Update();
void xParCmdMoveRandomPar_Update(xParCmd* c, xParGroup* ps, float32 dt);
void xParCmdMoveRandom_Update(xParCmd* c, xParGroup* ps, float32 dt);
void xParCmdMove_Update(xParCmd* c, xParGroup* ps, float32 dt);
void xParCmdAccelerate_Update(xParCmd* c, xParGroup* ps, float32 dt);
void xParCmdOrbitLine_Update(xParCmd* c, xParGroup* ps, float32 dt);
void xParCmdOrbitPoint_Update(xParCmd* c, xParGroup* ps, float32 dt);
void xParCmdFollow_Update(xParCmd* c, xParGroup* ps, float32 dt);
void xParCmdAge_Update(xParCmd* c, xParGroup* ps, float32 dt);
void xParCmdKillSlow_Update(xParCmd* c, xParGroup* ps, float32 dt);
void xParCmdRegister(uint32 parType, uint32 size, void(*func)(xParCmd*, xParGroup*, float32));
void xParCmdInit();

// xParCmd_Shaper_Update__FP7xParCmdP9xParGroupf
// Start address: 0x3c2370
void xParCmd_Shaper_Update(xParCmd* c, xParGroup* ps, float32 dt)
{
	xPar* p;
	xParCmdShaperData* cmd;
	float32 damp;
	float32 grav;
	int32 doalpha;
	int32 dosize;
	int32 i;
	int32 seg;
	float32 slope_alfa[3];
	float32 slope_size[3];
	float32 frac;
	float32 alfa;
	// Line 1526, Address: 0x3c2370, Func Offset: 0
	// Line 1528, Address: 0x3c2374, Func Offset: 0x4
	// Line 1533, Address: 0x3c2378, Func Offset: 0x8
	// Line 1543, Address: 0x3c2384, Func Offset: 0x14
	// Line 1541, Address: 0x3c2388, Func Offset: 0x18
	// Line 1536, Address: 0x3c238c, Func Offset: 0x1c
	// Line 1542, Address: 0x3c2390, Func Offset: 0x20
	// Line 1539, Address: 0x3c2394, Func Offset: 0x24
	// Line 1543, Address: 0x3c2398, Func Offset: 0x28
	// Line 1536, Address: 0x3c23a4, Func Offset: 0x34
	// Line 1543, Address: 0x3c23a8, Func Offset: 0x38
	// Line 1544, Address: 0x3c23b4, Func Offset: 0x44
	// Line 1564, Address: 0x3c23d0, Func Offset: 0x60
	// Line 1563, Address: 0x3c23d4, Func Offset: 0x64
	// Line 1564, Address: 0x3c23d8, Func Offset: 0x68
	// Line 1574, Address: 0x3c23dc, Func Offset: 0x6c
	// Line 1563, Address: 0x3c23e0, Func Offset: 0x70
	// Line 1564, Address: 0x3c23ec, Func Offset: 0x7c
	// Line 1563, Address: 0x3c2400, Func Offset: 0x90
	// Line 1564, Address: 0x3c2408, Func Offset: 0x98
	// Line 1563, Address: 0x3c2420, Func Offset: 0xb0
	// Line 1564, Address: 0x3c2428, Func Offset: 0xb8
	// Line 1563, Address: 0x3c242c, Func Offset: 0xbc
	// Line 1564, Address: 0x3c2434, Func Offset: 0xc4
	// Line 1563, Address: 0x3c2438, Func Offset: 0xc8
	// Line 1564, Address: 0x3c243c, Func Offset: 0xcc
	// Line 1575, Address: 0x3c2440, Func Offset: 0xd0
	// Line 1610, Address: 0x3c2448, Func Offset: 0xd8
	// Line 1600, Address: 0x3c244c, Func Offset: 0xdc
	// Line 1610, Address: 0x3c2450, Func Offset: 0xe0
	// Line 1605, Address: 0x3c2454, Func Offset: 0xe4
	// Line 1610, Address: 0x3c2458, Func Offset: 0xe8
	// Line 1606, Address: 0x3c245c, Func Offset: 0xec
	// Line 1600, Address: 0x3c2460, Func Offset: 0xf0
	// Line 1605, Address: 0x3c2464, Func Offset: 0xf4
	// Line 1626, Address: 0x3c2470, Func Offset: 0x100
	// Line 1601, Address: 0x3c2474, Func Offset: 0x104
	// Line 1625, Address: 0x3c2478, Func Offset: 0x108
	// Line 1626, Address: 0x3c2480, Func Offset: 0x110
	// Line 1591, Address: 0x3c2488, Func Offset: 0x118
	// Line 1583, Address: 0x3c2494, Func Offset: 0x124
	// Line 1586, Address: 0x3c24d0, Func Offset: 0x160
	// Line 1591, Address: 0x3c24e0, Func Offset: 0x170
	// Line 1594, Address: 0x3c24fc, Func Offset: 0x18c
	// Line 1600, Address: 0x3c2504, Func Offset: 0x194
	// Line 1601, Address: 0x3c2518, Func Offset: 0x1a8
	// Line 1604, Address: 0x3c255c, Func Offset: 0x1ec
	// Line 1605, Address: 0x3c2568, Func Offset: 0x1f8
	// Line 1606, Address: 0x3c257c, Func Offset: 0x20c
	// Line 1610, Address: 0x3c2580, Func Offset: 0x210
	// Line 1635, Address: 0x3c25ac, Func Offset: 0x23c
	// Line 1637, Address: 0x3c25b4, Func Offset: 0x244
	// Line 1604, Address: 0x3c25bc, Func Offset: 0x24c
	// Line 1637, Address: 0x3c25c8, Func Offset: 0x258
	// Line 1624, Address: 0x3c25dc, Func Offset: 0x26c
	// Line 1637, Address: 0x3c25e0, Func Offset: 0x270
	// Line 1624, Address: 0x3c25ec, Func Offset: 0x27c
	// Line 1625, Address: 0x3c25f4, Func Offset: 0x284
	// Line 1637, Address: 0x3c25f8, Func Offset: 0x288
	// Line 1625, Address: 0x3c2600, Func Offset: 0x290
	// Line 1637, Address: 0x3c2610, Func Offset: 0x2a0
	// Line 1625, Address: 0x3c2618, Func Offset: 0x2a8
	// Line 1637, Address: 0x3c2624, Func Offset: 0x2b4
	// Line 1625, Address: 0x3c262c, Func Offset: 0x2bc
	// Line 1626, Address: 0x3c2638, Func Offset: 0x2c8
	// Line 1637, Address: 0x3c2668, Func Offset: 0x2f8
	// Line 1620, Address: 0x3c2678, Func Offset: 0x308
	// Line 1637, Address: 0x3c267c, Func Offset: 0x30c
	// Line 1620, Address: 0x3c2688, Func Offset: 0x318
	// Line 1638, Address: 0x3c2698, Func Offset: 0x328
	// Func End, Address: 0x3c26a4, Func Offset: 0x334
}

// xParCmd_AlphaInOut_Update__FP7xParCmdP9xParGroupf
// Start address: 0x3c26b0
void xParCmd_AlphaInOut_Update(xParCmd* c, xParGroup* ps)
{
	xPar* p;
	xParCmdAlphaInOutData* cmd;
	int32 i;
	int32 seg;
	float32 slope_alfa[3];
	float32 frac;
	float32 alfa;
	// Line 1440, Address: 0x3c26b0, Func Offset: 0
	// Line 1442, Address: 0x3c26b4, Func Offset: 0x4
	// Line 1447, Address: 0x3c26b8, Func Offset: 0x8
	// Line 1464, Address: 0x3c26c4, Func Offset: 0x14
	// Line 1468, Address: 0x3c26d0, Func Offset: 0x20
	// Line 1464, Address: 0x3c26d4, Func Offset: 0x24
	// Line 1469, Address: 0x3c2700, Func Offset: 0x50
	// Line 1484, Address: 0x3c2708, Func Offset: 0x58
	// Line 1475, Address: 0x3c270c, Func Offset: 0x5c
	// Line 1484, Address: 0x3c2710, Func Offset: 0x60
	// Line 1479, Address: 0x3c2714, Func Offset: 0x64
	// Line 1484, Address: 0x3c2718, Func Offset: 0x68
	// Line 1480, Address: 0x3c271c, Func Offset: 0x6c
	// Line 1475, Address: 0x3c2720, Func Offset: 0x70
	// Line 1479, Address: 0x3c2724, Func Offset: 0x74
	// Line 1475, Address: 0x3c2730, Func Offset: 0x80
	// Line 1493, Address: 0x3c2734, Func Offset: 0x84
	// Line 1494, Address: 0x3c273c, Func Offset: 0x8c
	// Line 1474, Address: 0x3c2748, Func Offset: 0x98
	// Line 1475, Address: 0x3c275c, Func Offset: 0xac
	// Line 1478, Address: 0x3c27a0, Func Offset: 0xf0
	// Line 1479, Address: 0x3c27ac, Func Offset: 0xfc
	// Line 1480, Address: 0x3c27c0, Func Offset: 0x110
	// Line 1484, Address: 0x3c27c4, Func Offset: 0x114
	// Line 1501, Address: 0x3c27f0, Func Offset: 0x140
	// Line 1478, Address: 0x3c27f8, Func Offset: 0x148
	// Line 1492, Address: 0x3c2808, Func Offset: 0x158
	// Line 1501, Address: 0x3c280c, Func Offset: 0x15c
	// Line 1492, Address: 0x3c2818, Func Offset: 0x168
	// Line 1493, Address: 0x3c2820, Func Offset: 0x170
	// Line 1501, Address: 0x3c2824, Func Offset: 0x174
	// Line 1493, Address: 0x3c282c, Func Offset: 0x17c
	// Line 1501, Address: 0x3c283c, Func Offset: 0x18c
	// Line 1493, Address: 0x3c2844, Func Offset: 0x194
	// Line 1501, Address: 0x3c2850, Func Offset: 0x1a0
	// Line 1493, Address: 0x3c2858, Func Offset: 0x1a8
	// Line 1494, Address: 0x3c2864, Func Offset: 0x1b4
	// Line 1501, Address: 0x3c2894, Func Offset: 0x1e4
	// Line 1502, Address: 0x3c28ac, Func Offset: 0x1fc
	// Func End, Address: 0x3c28b8, Func Offset: 0x208
}

// xParCmd_SizeInOut_Update__FP7xParCmdP9xParGroupf
// Start address: 0x3c28c0
void xParCmd_SizeInOut_Update(xParCmd* c, xParGroup* ps)
{
	xPar* p;
	xParCmdSizeInOutData* cmd;
	int32 i;
	int32 seg;
	float32 slope_size[3];
	float32 frac;
	// Line 1362, Address: 0x3c28c0, Func Offset: 0
	// Line 1364, Address: 0x3c28c4, Func Offset: 0x4
	// Line 1369, Address: 0x3c28c8, Func Offset: 0x8
	// Line 1386, Address: 0x3c28d4, Func Offset: 0x14
	// Line 1390, Address: 0x3c28e0, Func Offset: 0x20
	// Line 1386, Address: 0x3c28e4, Func Offset: 0x24
	// Line 1391, Address: 0x3c2910, Func Offset: 0x50
	// Line 1406, Address: 0x3c2918, Func Offset: 0x58
	// Line 1397, Address: 0x3c291c, Func Offset: 0x5c
	// Line 1406, Address: 0x3c2920, Func Offset: 0x60
	// Line 1401, Address: 0x3c2924, Func Offset: 0x64
	// Line 1406, Address: 0x3c2928, Func Offset: 0x68
	// Line 1401, Address: 0x3c292c, Func Offset: 0x6c
	// Line 1397, Address: 0x3c2930, Func Offset: 0x70
	// Line 1401, Address: 0x3c2934, Func Offset: 0x74
	// Line 1402, Address: 0x3c293c, Func Offset: 0x7c
	// Line 1397, Address: 0x3c2940, Func Offset: 0x80
	// Line 1396, Address: 0x3c2944, Func Offset: 0x84
	// Line 1397, Address: 0x3c2958, Func Offset: 0x98
	// Line 1400, Address: 0x3c299c, Func Offset: 0xdc
	// Line 1401, Address: 0x3c29a8, Func Offset: 0xe8
	// Line 1402, Address: 0x3c29bc, Func Offset: 0xfc
	// Line 1406, Address: 0x3c29c0, Func Offset: 0x100
	// Line 1418, Address: 0x3c29ec, Func Offset: 0x12c
	// Line 1400, Address: 0x3c29f4, Func Offset: 0x134
	// Line 1411, Address: 0x3c2a04, Func Offset: 0x144
	// Line 1418, Address: 0x3c2a08, Func Offset: 0x148
	// Line 1411, Address: 0x3c2a14, Func Offset: 0x154
	// Line 1418, Address: 0x3c2a1c, Func Offset: 0x15c
	// Line 1419, Address: 0x3c2a34, Func Offset: 0x174
	// Func End, Address: 0x3c2a40, Func Offset: 0x180
}

// xParCmd_DampenSpeed_Update__FP7xParCmdP9xParGroupf
// Start address: 0x3c2a40
void xParCmd_DampenSpeed_Update(xParCmd* c, xParGroup* ps, float32 dt)
{
	xPar* p;
	xParCmdDampenData* cmd;
	float32 damp;
	// Line 1335, Address: 0x3c2a40, Func Offset: 0
	// Line 1340, Address: 0x3c2a44, Func Offset: 0x4
	// Line 1343, Address: 0x3c2a50, Func Offset: 0x10
	// Line 1345, Address: 0x3c2a54, Func Offset: 0x14
	// Line 1346, Address: 0x3c2a58, Func Offset: 0x18
	// Line 1347, Address: 0x3c2a60, Func Offset: 0x20
	// Line 1348, Address: 0x3c2aa0, Func Offset: 0x60
	// Line 1349, Address: 0x3c2aa4, Func Offset: 0x64
	// Line 1352, Address: 0x3c2aac, Func Offset: 0x6c
	// Func End, Address: 0x3c2ab4, Func Offset: 0x74
}

// xParCmdCollideFallSticky_Update__FP7xParCmdP9xParGroupf
// Start address: 0x3c2ac0
void xParCmdCollideFallSticky_Update(xParCmd* c, xParGroup* ps)
{
	xParCmdCollideFallSticky& cmd;
	float32 xzdamp;
	xPar* p;
	float32& loc;
	float32& vel;
	float32 dloc;
	// Line 1309, Address: 0x3c2ac0, Func Offset: 0
	// Line 1311, Address: 0x3c2ac4, Func Offset: 0x4
	// Line 1312, Address: 0x3c2ac8, Func Offset: 0x8
	// Line 1311, Address: 0x3c2acc, Func Offset: 0xc
	// Line 1312, Address: 0x3c2ad4, Func Offset: 0x14
	// Line 1317, Address: 0x3c2adc, Func Offset: 0x1c
	// Line 1315, Address: 0x3c2ae0, Func Offset: 0x20
	// Line 1314, Address: 0x3c2ae4, Func Offset: 0x24
	// Line 1316, Address: 0x3c2ae8, Func Offset: 0x28
	// Line 1317, Address: 0x3c2af0, Func Offset: 0x30
	// Line 1322, Address: 0x3c2afc, Func Offset: 0x3c
	// Line 1323, Address: 0x3c2b10, Func Offset: 0x50
	// Line 1318, Address: 0x3c2b1c, Func Offset: 0x5c
	// Line 1323, Address: 0x3c2b24, Func Offset: 0x64
	// Line 1319, Address: 0x3c2b2c, Func Offset: 0x6c
	// Line 1323, Address: 0x3c2b30, Func Offset: 0x70
	// Line 1320, Address: 0x3c2b3c, Func Offset: 0x7c
	// Line 1323, Address: 0x3c2b40, Func Offset: 0x80
	// Line 1321, Address: 0x3c2b48, Func Offset: 0x88
	// Line 1319, Address: 0x3c2b58, Func Offset: 0x98
	// Line 1323, Address: 0x3c2b5c, Func Offset: 0x9c
	// Line 1319, Address: 0x3c2b60, Func Offset: 0xa0
	// Line 1323, Address: 0x3c2b70, Func Offset: 0xb0
	// Func End, Address: 0x3c2b78, Func Offset: 0xb8
}

// xParCmdCollideFall_Update__FP7xParCmdP9xParGroupf
// Start address: 0x3c2b80
void xParCmdCollideFall_Update(xParCmd* c, xParGroup* ps)
{
	xParCmdCollideFall& cmd;
	xPar* p;
	float32& loc;
	float32& vel;
	float32 dloc;
	// Line 1296, Address: 0x3c2b80, Func Offset: 0
	// Line 1301, Address: 0x3c2b8c, Func Offset: 0xc
	// Line 1299, Address: 0x3c2b90, Func Offset: 0x10
	// Line 1298, Address: 0x3c2b94, Func Offset: 0x14
	// Line 1300, Address: 0x3c2b98, Func Offset: 0x18
	// Line 1301, Address: 0x3c2ba0, Func Offset: 0x20
	// Line 1304, Address: 0x3c2bac, Func Offset: 0x2c
	// Line 1305, Address: 0x3c2bc0, Func Offset: 0x40
	// Line 1302, Address: 0x3c2bcc, Func Offset: 0x4c
	// Line 1305, Address: 0x3c2bd4, Func Offset: 0x54
	// Line 1303, Address: 0x3c2bdc, Func Offset: 0x5c
	// Line 1305, Address: 0x3c2be0, Func Offset: 0x60
	// Line 1303, Address: 0x3c2be8, Func Offset: 0x68
	// Line 1305, Address: 0x3c2bec, Func Offset: 0x6c
	// Line 1303, Address: 0x3c2bf0, Func Offset: 0x70
	// Line 1305, Address: 0x3c2c00, Func Offset: 0x80
	// Func End, Address: 0x3c2c08, Func Offset: 0x88
}

// xParCmdTexAnim_Update__FP7xParCmdP9xParGroupf
// Start address: 0x3c2c10
void xParCmdTexAnim_Update(xParCmd* c, xParGroup* ps, float32 dt)
{
	xPar* p;
	xParCmdTexAnim* cmd;
	xParCmdTex* tex;
	// Line 1130, Address: 0x3c2c10, Func Offset: 0
	// Line 1138, Address: 0x3c2c28, Func Offset: 0x18
	// Line 1139, Address: 0x3c2c2c, Func Offset: 0x1c
	// Line 1147, Address: 0x3c2c34, Func Offset: 0x24
	// Line 1158, Address: 0x3c2c4c, Func Offset: 0x3c
	// Line 1160, Address: 0x3c2c50, Func Offset: 0x40
	// Line 1172, Address: 0x3c2c58, Func Offset: 0x48
	// Line 1208, Address: 0x3c2c64, Func Offset: 0x54
	// Line 1234, Address: 0x3c2c70, Func Offset: 0x60
	// Line 1261, Address: 0x3c2c7c, Func Offset: 0x6c
	// Line 1263, Address: 0x3c2c88, Func Offset: 0x78
	// Line 1265, Address: 0x3c2c98, Func Offset: 0x88
	// Line 1268, Address: 0x3c2ca0, Func Offset: 0x90
	// Line 1269, Address: 0x3c2cac, Func Offset: 0x9c
	// Line 1282, Address: 0x3c2cc0, Func Offset: 0xb0
	// Line 1283, Address: 0x3c2cc4, Func Offset: 0xb4
	// Line 1289, Address: 0x3c2ccc, Func Offset: 0xbc
	// Line 1290, Address: 0x3c2cd0, Func Offset: 0xc0
	// Line 1149, Address: 0x3c2cdc, Func Offset: 0xcc
	// Line 1150, Address: 0x3c2ce0, Func Offset: 0xd0
	// Line 1290, Address: 0x3c2ce4, Func Offset: 0xd4
	// Line 1165, Address: 0x3c2d00, Func Offset: 0xf0
	// Line 1290, Address: 0x3c2d04, Func Offset: 0xf4
	// Line 1165, Address: 0x3c2d08, Func Offset: 0xf8
	// Line 1290, Address: 0x3c2d14, Func Offset: 0x104
	// Line 1165, Address: 0x3c2d1c, Func Offset: 0x10c
	// Line 1290, Address: 0x3c2d24, Func Offset: 0x114
	// Line 1165, Address: 0x3c2d30, Func Offset: 0x120
	// Line 1290, Address: 0x3c2d3c, Func Offset: 0x12c
	// Line 1165, Address: 0x3c2d54, Func Offset: 0x144
	// Line 1290, Address: 0x3c2d58, Func Offset: 0x148
	// Line 1165, Address: 0x3c2d68, Func Offset: 0x158
	// Line 1290, Address: 0x3c2d6c, Func Offset: 0x15c
	// Line 1165, Address: 0x3c2d78, Func Offset: 0x168
	// Line 1290, Address: 0x3c2d8c, Func Offset: 0x17c
	// Line 1165, Address: 0x3c2d90, Func Offset: 0x180
	// Line 1290, Address: 0x3c2d94, Func Offset: 0x184
	// Line 1165, Address: 0x3c2db4, Func Offset: 0x1a4
	// Line 1290, Address: 0x3c2db8, Func Offset: 0x1a8
	// Line 1165, Address: 0x3c2dc4, Func Offset: 0x1b4
	// Line 1290, Address: 0x3c2dd8, Func Offset: 0x1c8
	// Line 1165, Address: 0x3c2ddc, Func Offset: 0x1cc
	// Line 1290, Address: 0x3c2de0, Func Offset: 0x1d0
	// Line 1165, Address: 0x3c2df8, Func Offset: 0x1e8
	// Line 1290, Address: 0x3c2dfc, Func Offset: 0x1ec
	// Line 1165, Address: 0x3c2e04, Func Offset: 0x1f4
	// Line 1290, Address: 0x3c2e18, Func Offset: 0x208
	// Line 1165, Address: 0x3c2e1c, Func Offset: 0x20c
	// Line 1290, Address: 0x3c2e20, Func Offset: 0x210
	// Line 1165, Address: 0x3c2e3c, Func Offset: 0x22c
	// Line 1290, Address: 0x3c2e40, Func Offset: 0x230
	// Line 1165, Address: 0x3c2e44, Func Offset: 0x234
	// Line 1290, Address: 0x3c2e4c, Func Offset: 0x23c
	// Line 1165, Address: 0x3c2e50, Func Offset: 0x240
	// Line 1290, Address: 0x3c2e58, Func Offset: 0x248
	// Line 1165, Address: 0x3c2e5c, Func Offset: 0x24c
	// Line 1290, Address: 0x3c2e60, Func Offset: 0x250
	// Line 1165, Address: 0x3c2e64, Func Offset: 0x254
	// Line 1290, Address: 0x3c2e70, Func Offset: 0x260
	// Line 1166, Address: 0x3c2e8c, Func Offset: 0x27c
	// Line 1290, Address: 0x3c2e90, Func Offset: 0x280
	// Line 1166, Address: 0x3c2ea0, Func Offset: 0x290
	// Line 1290, Address: 0x3c2ea4, Func Offset: 0x294
	// Line 1166, Address: 0x3c2eb0, Func Offset: 0x2a0
	// Line 1290, Address: 0x3c2ec4, Func Offset: 0x2b4
	// Line 1166, Address: 0x3c2ec8, Func Offset: 0x2b8
	// Line 1290, Address: 0x3c2ecc, Func Offset: 0x2bc
	// Line 1166, Address: 0x3c2eec, Func Offset: 0x2dc
	// Line 1290, Address: 0x3c2ef0, Func Offset: 0x2e0
	// Line 1166, Address: 0x3c2efc, Func Offset: 0x2ec
	// Line 1290, Address: 0x3c2f10, Func Offset: 0x300
	// Line 1166, Address: 0x3c2f14, Func Offset: 0x304
	// Line 1290, Address: 0x3c2f18, Func Offset: 0x308
	// Line 1166, Address: 0x3c2f30, Func Offset: 0x320
	// Line 1290, Address: 0x3c2f34, Func Offset: 0x324
	// Line 1166, Address: 0x3c2f3c, Func Offset: 0x32c
	// Line 1290, Address: 0x3c2f50, Func Offset: 0x340
	// Line 1166, Address: 0x3c2f54, Func Offset: 0x344
	// Line 1290, Address: 0x3c2f58, Func Offset: 0x348
	// Line 1166, Address: 0x3c2f74, Func Offset: 0x364
	// Line 1290, Address: 0x3c2f78, Func Offset: 0x368
	// Line 1166, Address: 0x3c2f7c, Func Offset: 0x36c
	// Line 1290, Address: 0x3c2f84, Func Offset: 0x374
	// Line 1166, Address: 0x3c2f88, Func Offset: 0x378
	// Line 1290, Address: 0x3c2f90, Func Offset: 0x380
	// Line 1166, Address: 0x3c2f94, Func Offset: 0x384
	// Line 1290, Address: 0x3c2f98, Func Offset: 0x388
	// Line 1166, Address: 0x3c2f9c, Func Offset: 0x38c
	// Line 1290, Address: 0x3c2fa8, Func Offset: 0x398
	// Line 1171, Address: 0x3c2fb8, Func Offset: 0x3a8
	// Line 1290, Address: 0x3c2fc0, Func Offset: 0x3b0
	// Line 1188, Address: 0x3c2fd8, Func Offset: 0x3c8
	// Line 1192, Address: 0x3c2fdc, Func Offset: 0x3cc
	// Line 1290, Address: 0x3c2fe0, Func Offset: 0x3d0
	// Line 1207, Address: 0x3c300c, Func Offset: 0x3fc
	// Line 1290, Address: 0x3c3014, Func Offset: 0x404
	// Line 1187, Address: 0x3c3090, Func Offset: 0x480
	// Line 1290, Address: 0x3c3098, Func Offset: 0x488
	// Line 1190, Address: 0x3c30ac, Func Offset: 0x49c
	// Line 1290, Address: 0x3c30b8, Func Offset: 0x4a8
	// Line 1191, Address: 0x3c30bc, Func Offset: 0x4ac
	// Line 1290, Address: 0x3c30c8, Func Offset: 0x4b8
	// Line 1224, Address: 0x3c3120, Func Offset: 0x510
	// Line 1290, Address: 0x3c3128, Func Offset: 0x518
	// Line 1226, Address: 0x3c312c, Func Offset: 0x51c
	// Line 1290, Address: 0x3c3138, Func Offset: 0x528
	// Line 1233, Address: 0x3c314c, Func Offset: 0x53c
	// Line 1290, Address: 0x3c3154, Func Offset: 0x544
	// Line 1221, Address: 0x3c3174, Func Offset: 0x564
	// Line 1290, Address: 0x3c3180, Func Offset: 0x570
	// Line 1251, Address: 0x3c31d8, Func Offset: 0x5c8
	// Line 1290, Address: 0x3c31e0, Func Offset: 0x5d0
	// Line 1253, Address: 0x3c31e4, Func Offset: 0x5d4
	// Line 1290, Address: 0x3c31f0, Func Offset: 0x5e0
	// Line 1260, Address: 0x3c3204, Func Offset: 0x5f4
	// Line 1290, Address: 0x3c320c, Func Offset: 0x5fc
	// Line 1248, Address: 0x3c322c, Func Offset: 0x61c
	// Line 1290, Address: 0x3c3238, Func Offset: 0x628
	// Line 1279, Address: 0x3c3264, Func Offset: 0x654
	// Line 1290, Address: 0x3c3270, Func Offset: 0x660
	// Line 1276, Address: 0x3c32a0, Func Offset: 0x690
	// Line 1290, Address: 0x3c32a8, Func Offset: 0x698
	// Func End, Address: 0x3c32c4, Func Offset: 0x6b4
}

// xParCmdTex_Update__FP7xParCmdP9xParGroupf
// Start address: 0x3c32d0
void xParCmdTex_Update()
{
	// Line 1092, Address: 0x3c32d0, Func Offset: 0
	// Func End, Address: 0x3c32d8, Func Offset: 0x8
}

// xParCmdRotateAround_Update__FP7xParCmdP9xParGroupf
// Start address: 0x3c32e0
void xParCmdRotateAround_Update(xParCmd* c, xParGroup* ps, float32 dt)
{
	xPar* p;
	xParCmdRotateAround* cmd;
	float32 yaw;
	float32 radius_growth;
	xVec3 at;
	xMat3x3 lookmat;
	float32 radius;
	xVec3 angles;
	xMat3x3 rotmat;
	xVec3 offset;
	xVec3 out_offset;
	// Line 1011, Address: 0x3c32e0, Func Offset: 0
	// Line 1019, Address: 0x3c32e4, Func Offset: 0x4
	// Line 1011, Address: 0x3c32e8, Func Offset: 0x8
	// Line 1019, Address: 0x3c32ec, Func Offset: 0xc
	// Line 1011, Address: 0x3c32f0, Func Offset: 0x10
	// Line 1019, Address: 0x3c32f4, Func Offset: 0x14
	// Line 1011, Address: 0x3c32f8, Func Offset: 0x18
	// Line 1013, Address: 0x3c3328, Func Offset: 0x48
	// Line 1025, Address: 0x3c332c, Func Offset: 0x4c
	// Line 1018, Address: 0x3c3330, Func Offset: 0x50
	// Line 1022, Address: 0x3c3334, Func Offset: 0x54
	// Line 1018, Address: 0x3c3338, Func Offset: 0x58
	// Line 1019, Address: 0x3c333c, Func Offset: 0x5c
	// Line 1026, Address: 0x3c3340, Func Offset: 0x60
	// Line 1030, Address: 0x3c3368, Func Offset: 0x88
	// Line 1033, Address: 0x3c336c, Func Offset: 0x8c
	// Line 1030, Address: 0x3c3370, Func Offset: 0x90
	// Line 1033, Address: 0x3c3374, Func Offset: 0x94
	// Line 1030, Address: 0x3c3378, Func Offset: 0x98
	// Line 1033, Address: 0x3c33a0, Func Offset: 0xc0
	// Line 1037, Address: 0x3c33ac, Func Offset: 0xcc
	// Line 1040, Address: 0x3c33b8, Func Offset: 0xd8
	// Line 1044, Address: 0x3c33bc, Func Offset: 0xdc
	// Line 1040, Address: 0x3c33c8, Func Offset: 0xe8
	// Line 1044, Address: 0x3c33cc, Func Offset: 0xec
	// Line 1047, Address: 0x3c33d4, Func Offset: 0xf4
	// Line 1056, Address: 0x3c33d8, Func Offset: 0xf8
	// Line 1053, Address: 0x3c33e4, Func Offset: 0x104
	// Line 1055, Address: 0x3c33e8, Func Offset: 0x108
	// Line 1054, Address: 0x3c33ec, Func Offset: 0x10c
	// Line 1056, Address: 0x3c33f0, Func Offset: 0x110
	// Line 1061, Address: 0x3c3438, Func Offset: 0x158
	// Line 1062, Address: 0x3c3440, Func Offset: 0x160
	// Line 1061, Address: 0x3c3444, Func Offset: 0x164
	// Line 1062, Address: 0x3c344c, Func Offset: 0x16c
	// Line 1066, Address: 0x3c3458, Func Offset: 0x178
	// Line 1067, Address: 0x3c345c, Func Offset: 0x17c
	// Line 1069, Address: 0x3c3468, Func Offset: 0x188
	// Func End, Address: 0x3c34a8, Func Offset: 0x1c8
}

// xParCmdVelocityApply_Update__FP7xParCmdP9xParGroupf
// Start address: 0x3c34b0
void xParCmdVelocityApply_Update(xParGroup* ps, float32 dt)
{
	xPar* p;
	// Line 981, Address: 0x3c34b0, Func Offset: 0
	// Line 995, Address: 0x3c34b4, Func Offset: 0x4
	// Line 996, Address: 0x3c34b8, Func Offset: 0x8
	// Line 998, Address: 0x3c34cc, Func Offset: 0x1c
	// Line 999, Address: 0x3c34d8, Func Offset: 0x28
	// Line 998, Address: 0x3c34dc, Func Offset: 0x2c
	// Line 999, Address: 0x3c350c, Func Offset: 0x5c
	// Line 998, Address: 0x3c3510, Func Offset: 0x60
	// Line 999, Address: 0x3c3514, Func Offset: 0x64
	// Line 998, Address: 0x3c3524, Func Offset: 0x74
	// Line 999, Address: 0x3c3528, Func Offset: 0x78
	// Line 1001, Address: 0x3c3540, Func Offset: 0x90
	// Line 1002, Address: 0x3c3544, Func Offset: 0x94
	// Line 1004, Address: 0x3c3550, Func Offset: 0xa0
	// Func End, Address: 0x3c3558, Func Offset: 0xa8
}

// xParCmdRotPar_Update__FP7xParCmdP9xParGroupf
// Start address: 0x3c3560
void xParCmdRotPar_Update(xParCmd* c, xParGroup* ps, float32 dt)
{
	xPar* p;
	xParCmdRotPar* cmd;
	// Line 945, Address: 0x3c3560, Func Offset: 0
	// Line 953, Address: 0x3c3564, Func Offset: 0x4
	// Line 945, Address: 0x3c3568, Func Offset: 0x8
	// Line 953, Address: 0x3c356c, Func Offset: 0xc
	// Line 945, Address: 0x3c3570, Func Offset: 0x10
	// Line 953, Address: 0x3c3578, Func Offset: 0x18
	// Line 945, Address: 0x3c357c, Func Offset: 0x1c
	// Line 953, Address: 0x3c3580, Func Offset: 0x20
	// Line 947, Address: 0x3c3584, Func Offset: 0x24
	// Line 963, Address: 0x3c3588, Func Offset: 0x28
	// Line 953, Address: 0x3c358c, Func Offset: 0x2c
	// Line 954, Address: 0x3c3590, Func Offset: 0x30
	// Line 947, Address: 0x3c3594, Func Offset: 0x34
	// Line 953, Address: 0x3c3598, Func Offset: 0x38
	// Line 954, Address: 0x3c359c, Func Offset: 0x3c
	// Line 955, Address: 0x3c35a0, Func Offset: 0x40
	// Line 954, Address: 0x3c35a4, Func Offset: 0x44
	// Line 955, Address: 0x3c35a8, Func Offset: 0x48
	// Line 953, Address: 0x3c35b0, Func Offset: 0x50
	// Line 955, Address: 0x3c35b4, Func Offset: 0x54
	// Line 953, Address: 0x3c35b8, Func Offset: 0x58
	// Line 958, Address: 0x3c35bc, Func Offset: 0x5c
	// Line 954, Address: 0x3c35c0, Func Offset: 0x60
	// Line 958, Address: 0x3c35c8, Func Offset: 0x68
	// Line 959, Address: 0x3c35cc, Func Offset: 0x6c
	// Line 960, Address: 0x3c35d0, Func Offset: 0x70
	// Line 953, Address: 0x3c35d4, Func Offset: 0x74
	// Line 960, Address: 0x3c35d8, Func Offset: 0x78
	// Line 959, Address: 0x3c35dc, Func Offset: 0x7c
	// Line 964, Address: 0x3c35e0, Func Offset: 0x80
	// Line 967, Address: 0x3c35e8, Func Offset: 0x88
	// Line 968, Address: 0x3c3634, Func Offset: 0xd4
	// Line 969, Address: 0x3c3638, Func Offset: 0xd8
	// Line 967, Address: 0x3c363c, Func Offset: 0xdc
	// Line 968, Address: 0x3c3804, Func Offset: 0x2a4
	// Line 969, Address: 0x3c39cc, Func Offset: 0x46c
	// Line 971, Address: 0x3c3b94, Func Offset: 0x634
	// Line 972, Address: 0x3c3b98, Func Offset: 0x638
	// Line 973, Address: 0x3c3ba0, Func Offset: 0x640
	// Func End, Address: 0x3c3bb8, Func Offset: 0x658
}

// xParCmdApplyWind_Update__FP7xParCmdP9xParGroupf
// Start address: 0x3c3bc0
void xParCmdApplyWind_Update(xParCmd* c, xParGroup* ps, float32 dt)
{
	xPar* p;
	// Line 922, Address: 0x3c3bc0, Func Offset: 0
	// Line 929, Address: 0x3c3bc4, Func Offset: 0x4
	// Line 922, Address: 0x3c3bc8, Func Offset: 0x8
	// Line 920, Address: 0x3c3bcc, Func Offset: 0xc
	// Line 930, Address: 0x3c3bdc, Func Offset: 0x1c
	// Line 933, Address: 0x3c3be4, Func Offset: 0x24
	// Line 934, Address: 0x3c3bf0, Func Offset: 0x30
	// Line 936, Address: 0x3c3bfc, Func Offset: 0x3c
	// Line 937, Address: 0x3c3c00, Func Offset: 0x40
	// Line 938, Address: 0x3c3c08, Func Offset: 0x48
	// Func End, Address: 0x3c3c10, Func Offset: 0x50
}

// xParCmdRandomVelocityPar_Update__FP7xParCmdP9xParGroupf
// Start address: 0x3c3c10
void xParCmdRandomVelocityPar_Update(xParCmd* c, xParGroup* ps, float32 dt)
{
	xPar* p;
	xParCmdRandomVelocityPar* cmd;
	xVec3 rot;
	xVec3* velvec;
	uint32 uvelx;
	uint32 uvely;
	uint32 uvelz;
	// Line 795, Address: 0x3c3c10, Func Offset: 0
	// Line 797, Address: 0x3c3c14, Func Offset: 0x4
	// Line 820, Address: 0x3c3c18, Func Offset: 0x8
	// Line 805, Address: 0x3c3c1c, Func Offset: 0xc
	// Line 820, Address: 0x3c3c20, Func Offset: 0x10
	// Line 805, Address: 0x3c3c24, Func Offset: 0x14
	// Line 806, Address: 0x3c3c28, Func Offset: 0x18
	// Line 807, Address: 0x3c3c30, Func Offset: 0x20
	// Line 805, Address: 0x3c3c34, Func Offset: 0x24
	// Line 806, Address: 0x3c3c38, Func Offset: 0x28
	// Line 807, Address: 0x3c3c3c, Func Offset: 0x2c
	// Line 805, Address: 0x3c3c40, Func Offset: 0x30
	// Line 806, Address: 0x3c3c44, Func Offset: 0x34
	// Line 807, Address: 0x3c3c48, Func Offset: 0x38
	// Line 820, Address: 0x3c3c4c, Func Offset: 0x3c
	// Line 821, Address: 0x3c3c94, Func Offset: 0x84
	// Line 822, Address: 0x3c3e60, Func Offset: 0x250
	// Line 823, Address: 0x3c3e68, Func Offset: 0x258
	// Line 824, Address: 0x3c3e70, Func Offset: 0x260
	// Line 825, Address: 0x3c3e78, Func Offset: 0x268
	// Line 826, Address: 0x3c3e7c, Func Offset: 0x26c
	// Line 827, Address: 0x3c3e80, Func Offset: 0x270
	// Line 828, Address: 0x3c3e88, Func Offset: 0x278
	// Line 829, Address: 0x3c3e90, Func Offset: 0x280
	// Line 830, Address: 0x3c3e98, Func Offset: 0x288
	// Line 831, Address: 0x3c3e9c, Func Offset: 0x28c
	// Line 832, Address: 0x3c3ea0, Func Offset: 0x290
	// Line 839, Address: 0x3c3ea4, Func Offset: 0x294
	// Line 840, Address: 0x3c3ea8, Func Offset: 0x298
	// Line 844, Address: 0x3c3eb0, Func Offset: 0x2a0
	// Line 846, Address: 0x3c3eb4, Func Offset: 0x2a4
	// Line 850, Address: 0x3c3eb8, Func Offset: 0x2a8
	// Line 851, Address: 0x3c3ebc, Func Offset: 0x2ac
	// Line 852, Address: 0x3c3ec0, Func Offset: 0x2b0
	// Line 853, Address: 0x3c3ec4, Func Offset: 0x2b4
	// Line 854, Address: 0x3c3ec8, Func Offset: 0x2b8
	// Line 855, Address: 0x3c3ecc, Func Offset: 0x2bc
	// Line 861, Address: 0x3c3ed0, Func Offset: 0x2c0
	// Line 862, Address: 0x3c3f30, Func Offset: 0x320
	// Line 863, Address: 0x3c3f70, Func Offset: 0x360
	// Line 873, Address: 0x3c3f7c, Func Offset: 0x36c
	// Line 874, Address: 0x3c3f80, Func Offset: 0x370
	// Line 875, Address: 0x3c3f84, Func Offset: 0x374
	// Line 876, Address: 0x3c3f88, Func Offset: 0x378
	// Line 877, Address: 0x3c3f8c, Func Offset: 0x37c
	// Line 878, Address: 0x3c3f90, Func Offset: 0x380
	// Line 879, Address: 0x3c3f94, Func Offset: 0x384
	// Line 880, Address: 0x3c3f98, Func Offset: 0x388
	// Line 881, Address: 0x3c3f9c, Func Offset: 0x38c
	// Line 882, Address: 0x3c3fa0, Func Offset: 0x390
	// Line 883, Address: 0x3c3fa4, Func Offset: 0x394
	// Line 884, Address: 0x3c3fa8, Func Offset: 0x398
	// Line 902, Address: 0x3c3fac, Func Offset: 0x39c
	// Line 903, Address: 0x3c3fb8, Func Offset: 0x3a8
	// Func End, Address: 0x3c3fc0, Func Offset: 0x3b0
}

// xParCmdAlpha3rdPolyReg_Update__FP7xParCmdP9xParGroupf
// Start address: 0x3c3fc0
void xParCmdAlpha3rdPolyReg_Update()
{
	// Line 787, Address: 0x3c3fc0, Func Offset: 0
	// Func End, Address: 0x3c3fc8, Func Offset: 0x8
}

// xParCmdScale_Update__FP7xParCmdP9xParGroupf
// Start address: 0x3c3fd0
void xParCmdScale_Update()
{
	// Line 740, Address: 0x3c3fd0, Func Offset: 0
	// Func End, Address: 0x3c3fd8, Func Offset: 0x8
}

// xParCmdSmokeAlpha_Update__FP7xParCmdP9xParGroupf
// Start address: 0x3c3fe0
void xParCmdSmokeAlpha_Update()
{
	// Line 674, Address: 0x3c3fe0, Func Offset: 0
	// Func End, Address: 0x3c3fe8, Func Offset: 0x8
}

// xParCmdScale3rdPolyReg_Update__FP7xParCmdP9xParGroupf
// Start address: 0x3c3ff0
void xParCmdScale3rdPolyReg_Update()
{
	// Line 595, Address: 0x3c3ff0, Func Offset: 0
	// Func End, Address: 0x3c3ff8, Func Offset: 0x8
}

// xParCmdMoveRandomPar_Update__FP7xParCmdP9xParGroupf
// Start address: 0x3c4000
void xParCmdMoveRandomPar_Update(xParCmd* c, xParGroup* ps, float32 dt)
{
	xPar* p;
	xParCmdMoveRandomPar* cmd;
	// Line 523, Address: 0x3c4000, Func Offset: 0
	// Line 532, Address: 0x3c4004, Func Offset: 0x4
	// Line 523, Address: 0x3c4008, Func Offset: 0x8
	// Line 532, Address: 0x3c400c, Func Offset: 0xc
	// Line 523, Address: 0x3c4010, Func Offset: 0x10
	// Line 532, Address: 0x3c4018, Func Offset: 0x18
	// Line 525, Address: 0x3c401c, Func Offset: 0x1c
	// Line 539, Address: 0x3c4020, Func Offset: 0x20
	// Line 534, Address: 0x3c4024, Func Offset: 0x24
	// Line 536, Address: 0x3c4028, Func Offset: 0x28
	// Line 534, Address: 0x3c402c, Func Offset: 0x2c
	// Line 540, Address: 0x3c4030, Func Offset: 0x30
	// Line 542, Address: 0x3c4038, Func Offset: 0x38
	// Line 543, Address: 0x3c407c, Func Offset: 0x7c
	// Line 542, Address: 0x3c4080, Func Offset: 0x80
	// Line 543, Address: 0x3c41e8, Func Offset: 0x1e8
	// Line 545, Address: 0x3c4350, Func Offset: 0x350
	// Line 546, Address: 0x3c4354, Func Offset: 0x354
	// Line 548, Address: 0x3c435c, Func Offset: 0x35c
	// Func End, Address: 0x3c4370, Func Offset: 0x370
}

// xParCmdMoveRandom_Update__FP7xParCmdP9xParGroupf
// Start address: 0x3c4370
void xParCmdMoveRandom_Update(xParCmd* c, xParGroup* ps, float32 dt)
{
	int32 left'291;
	uint32* next'290;
	xPar* p;
	xParCmdMove* cmd;
	xVec3 delta;
	// Line 488, Address: 0x3c4370, Func Offset: 0
	// Line 490, Address: 0x3c4374, Func Offset: 0x4
	// Line 499, Address: 0x3c4378, Func Offset: 0x8
	// Line 498, Address: 0x3c437c, Func Offset: 0xc
	// Line 499, Address: 0x3c4384, Func Offset: 0x14
	// Line 498, Address: 0x3c4388, Func Offset: 0x18
	// Line 499, Address: 0x3c4398, Func Offset: 0x28
	// Line 500, Address: 0x3c4534, Func Offset: 0x1c4
	// Line 499, Address: 0x3c4544, Func Offset: 0x1d4
	// Line 500, Address: 0x3c4554, Func Offset: 0x1e4
	// Line 501, Address: 0x3c46f8, Func Offset: 0x388
	// Line 500, Address: 0x3c4708, Func Offset: 0x398
	// Line 501, Address: 0x3c4718, Func Offset: 0x3a8
	// Line 508, Address: 0x3c48bc, Func Offset: 0x54c
	// Line 501, Address: 0x3c48c0, Func Offset: 0x550
	// Line 503, Address: 0x3c48d0, Func Offset: 0x560
	// Line 501, Address: 0x3c48dc, Func Offset: 0x56c
	// Line 503, Address: 0x3c48e0, Func Offset: 0x570
	// Line 504, Address: 0x3c48e4, Func Offset: 0x574
	// Line 503, Address: 0x3c48e8, Func Offset: 0x578
	// Line 504, Address: 0x3c48f8, Func Offset: 0x588
	// Line 509, Address: 0x3c48fc, Func Offset: 0x58c
	// Line 511, Address: 0x3c4904, Func Offset: 0x594
	// Line 513, Address: 0x3c4928, Func Offset: 0x5b8
	// Line 514, Address: 0x3c492c, Func Offset: 0x5bc
	// Line 516, Address: 0x3c4938, Func Offset: 0x5c8
	// Func End, Address: 0x3c4940, Func Offset: 0x5d0
}

// xParCmdMove_Update__FP7xParCmdP9xParGroupf
// Start address: 0x3c4940
void xParCmdMove_Update(xParCmd* c, xParGroup* ps, float32 dt)
{
	xPar* p;
	xVec3 delta;
	// Line 458, Address: 0x3c4940, Func Offset: 0
	// Line 468, Address: 0x3c4944, Func Offset: 0x4
	// Line 474, Address: 0x3c494c, Func Offset: 0xc
	// Line 468, Address: 0x3c4950, Func Offset: 0x10
	// Line 470, Address: 0x3c4958, Func Offset: 0x18
	// Line 475, Address: 0x3c496c, Func Offset: 0x2c
	// Line 477, Address: 0x3c4974, Func Offset: 0x34
	// Line 479, Address: 0x3c4998, Func Offset: 0x58
	// Line 480, Address: 0x3c499c, Func Offset: 0x5c
	// Line 482, Address: 0x3c49a8, Func Offset: 0x68
	// Func End, Address: 0x3c49b0, Func Offset: 0x70
}

// xParCmdAccelerate_Update__FP7xParCmdP9xParGroupf
// Start address: 0x3c49b0
void xParCmdAccelerate_Update(xParCmd* c, xParGroup* ps, float32 dt)
{
	xPar* p;
	xVec3 delta;
	// Line 428, Address: 0x3c49b0, Func Offset: 0
	// Line 438, Address: 0x3c49b4, Func Offset: 0x4
	// Line 439, Address: 0x3c49b8, Func Offset: 0x8
	// Line 443, Address: 0x3c49bc, Func Offset: 0xc
	// Line 438, Address: 0x3c49c0, Func Offset: 0x10
	// Line 439, Address: 0x3c49c4, Func Offset: 0x14
	// Line 438, Address: 0x3c49c8, Func Offset: 0x18
	// Line 439, Address: 0x3c49d4, Func Offset: 0x24
	// Line 438, Address: 0x3c49d8, Func Offset: 0x28
	// Line 439, Address: 0x3c49dc, Func Offset: 0x2c
	// Line 444, Address: 0x3c49f4, Func Offset: 0x44
	// Line 446, Address: 0x3c49fc, Func Offset: 0x4c
	// Line 447, Address: 0x3c4a08, Func Offset: 0x58
	// Line 448, Address: 0x3c4a14, Func Offset: 0x64
	// Line 450, Address: 0x3c4a20, Func Offset: 0x70
	// Line 451, Address: 0x3c4a24, Func Offset: 0x74
	// Line 452, Address: 0x3c4a30, Func Offset: 0x80
	// Func End, Address: 0x3c4a38, Func Offset: 0x88
}

// xParCmdOrbitLine_Update__FP7xParCmdP9xParGroupf
// Start address: 0x3c4a40
void xParCmdOrbitLine_Update(xParCmd* c, xParGroup* ps, float32 dt)
{
	xPar* p;
	xParCmdOrbitLine* cmd;
	float32 mdt;
	float32 force;
	// Line 378, Address: 0x3c4a40, Func Offset: 0
	// Line 387, Address: 0x3c4a44, Func Offset: 0x4
	// Line 390, Address: 0x3c4a48, Func Offset: 0x8
	// Line 391, Address: 0x3c4a4c, Func Offset: 0xc
	// Line 396, Address: 0x3c4a54, Func Offset: 0x14
	// Line 394, Address: 0x3c4a58, Func Offset: 0x18
	// Line 396, Address: 0x3c4a84, Func Offset: 0x44
	// Line 407, Address: 0x3c4a8c, Func Offset: 0x4c
	// Line 396, Address: 0x3c4a90, Func Offset: 0x50
	// Line 401, Address: 0x3c4aa4, Func Offset: 0x64
	// Line 405, Address: 0x3c4ac8, Func Offset: 0x88
	// Line 407, Address: 0x3c4ad8, Func Offset: 0x98
	// Line 416, Address: 0x3c4ae4, Func Offset: 0xa4
	// Line 419, Address: 0x3c4ae8, Func Offset: 0xa8
	// Line 420, Address: 0x3c4aec, Func Offset: 0xac
	// Line 421, Address: 0x3c4af8, Func Offset: 0xb8
	// Line 409, Address: 0x3c4b00, Func Offset: 0xc0
	// Line 421, Address: 0x3c4b10, Func Offset: 0xd0
	// Line 412, Address: 0x3c4b1c, Func Offset: 0xdc
	// Line 413, Address: 0x3c4b28, Func Offset: 0xe8
	// Line 421, Address: 0x3c4b30, Func Offset: 0xf0
	// Line 414, Address: 0x3c4b38, Func Offset: 0xf8
	// Line 421, Address: 0x3c4b40, Func Offset: 0x100
	// Line 415, Address: 0x3c4b48, Func Offset: 0x108
	// Line 421, Address: 0x3c4b58, Func Offset: 0x118
	// Func End, Address: 0x3c4b60, Func Offset: 0x120
}

// xParCmdOrbitPoint_Update__FP7xParCmdP9xParGroupf
// Start address: 0x3c4b60
void xParCmdOrbitPoint_Update(xParCmd* c, xParGroup* ps, float32 dt)
{
	xPar* p;
	xParCmdOrbitPoint* cmd;
	float32 mdt;
	float32 force;
	// Line 334, Address: 0x3c4b60, Func Offset: 0
	// Line 343, Address: 0x3c4b64, Func Offset: 0x4
	// Line 346, Address: 0x3c4b68, Func Offset: 0x8
	// Line 347, Address: 0x3c4b6c, Func Offset: 0xc
	// Line 354, Address: 0x3c4b74, Func Offset: 0x14
	// Line 350, Address: 0x3c4b78, Func Offset: 0x18
	// Line 356, Address: 0x3c4b90, Func Offset: 0x30
	// Line 350, Address: 0x3c4b94, Func Offset: 0x34
	// Line 354, Address: 0x3c4b9c, Func Offset: 0x3c
	// Line 350, Address: 0x3c4ba0, Func Offset: 0x40
	// Line 354, Address: 0x3c4ba4, Func Offset: 0x44
	// Line 356, Address: 0x3c4bb0, Func Offset: 0x50
	// Line 365, Address: 0x3c4bbc, Func Offset: 0x5c
	// Line 368, Address: 0x3c4bc0, Func Offset: 0x60
	// Line 369, Address: 0x3c4bc4, Func Offset: 0x64
	// Line 370, Address: 0x3c4bd0, Func Offset: 0x70
	// Line 358, Address: 0x3c4bd8, Func Offset: 0x78
	// Line 370, Address: 0x3c4be8, Func Offset: 0x88
	// Line 361, Address: 0x3c4bf4, Func Offset: 0x94
	// Line 362, Address: 0x3c4c00, Func Offset: 0xa0
	// Line 370, Address: 0x3c4c08, Func Offset: 0xa8
	// Line 363, Address: 0x3c4c10, Func Offset: 0xb0
	// Line 370, Address: 0x3c4c18, Func Offset: 0xb8
	// Line 364, Address: 0x3c4c20, Func Offset: 0xc0
	// Line 370, Address: 0x3c4c30, Func Offset: 0xd0
	// Func End, Address: 0x3c4c38, Func Offset: 0xd8
}

// xParCmdFollow_Update__FP7xParCmdP9xParGroupf
// Start address: 0x3c4c40
void xParCmdFollow_Update(xParCmd* c, xParGroup* ps, float32 dt)
{
	xPar* p;
	xParCmdFollow* cmd;
	float32 mdt;
	float32 force;
	// Line 296, Address: 0x3c4c40, Func Offset: 0
	// Line 308, Address: 0x3c4c44, Func Offset: 0x4
	// Line 305, Address: 0x3c4c48, Func Offset: 0x8
	// Line 315, Address: 0x3c4c50, Func Offset: 0x10
	// Line 325, Address: 0x3c4c54, Func Offset: 0x14
	// Line 312, Address: 0x3c4c8c, Func Offset: 0x4c
	// Line 315, Address: 0x3c4c94, Func Offset: 0x54
	// Line 312, Address: 0x3c4c98, Func Offset: 0x58
	// Line 315, Address: 0x3c4c9c, Func Offset: 0x5c
	// Line 318, Address: 0x3c4ca8, Func Offset: 0x68
	// Line 325, Address: 0x3c4cac, Func Offset: 0x6c
	// Line 318, Address: 0x3c4cb0, Func Offset: 0x70
	// Line 325, Address: 0x3c4cc4, Func Offset: 0x84
	// Line 320, Address: 0x3c4cc8, Func Offset: 0x88
	// Line 325, Address: 0x3c4cd0, Func Offset: 0x90
	// Line 321, Address: 0x3c4cd8, Func Offset: 0x98
	// Line 325, Address: 0x3c4ce0, Func Offset: 0xa0
	// Line 322, Address: 0x3c4ce8, Func Offset: 0xa8
	// Line 325, Address: 0x3c4cf0, Func Offset: 0xb0
	// Line 326, Address: 0x3c4d00, Func Offset: 0xc0
	// Func End, Address: 0x3c4d08, Func Offset: 0xc8
}

// xParCmdAge_Update__FP7xParCmdP9xParGroupf
// Start address: 0x3c4d10
void xParCmdAge_Update(xParCmd* c, xParGroup* ps, float32 dt)
{
	xPar* p;
	float32 age_rate;
	// Line 275, Address: 0x3c4d10, Func Offset: 0
	// Line 278, Address: 0x3c4d18, Func Offset: 0x8
	// Line 280, Address: 0x3c4d1c, Func Offset: 0xc
	// Line 282, Address: 0x3c4d24, Func Offset: 0x14
	// Line 284, Address: 0x3c4d30, Func Offset: 0x20
	// Line 285, Address: 0x3c4d34, Func Offset: 0x24
	// Line 288, Address: 0x3c4d40, Func Offset: 0x30
	// Func End, Address: 0x3c4d48, Func Offset: 0x38
}

// xParCmdKillSlow_Update__FP7xParCmdP9xParGroupf
// Start address: 0x3c4d50
void xParCmdKillSlow_Update(xParCmd* c, xParGroup* ps, float32 dt)
{
	xPar* p;
	xParCmdKillSlow* cmd;
	float32 speedLimit;
	// Line 224, Address: 0x3c4d50, Func Offset: 0
	// Line 232, Address: 0x3c4d54, Func Offset: 0x4
	// Line 235, Address: 0x3c4d58, Func Offset: 0x8
	// Line 237, Address: 0x3c4d5c, Func Offset: 0xc
	// Line 239, Address: 0x3c4d68, Func Offset: 0x18
	// Line 242, Address: 0x3c4d7c, Func Offset: 0x2c
	// Line 243, Address: 0x3c4d94, Func Offset: 0x44
	// Line 245, Address: 0x3c4d98, Func Offset: 0x48
	// Line 246, Address: 0x3c4d9c, Func Offset: 0x4c
	// Line 247, Address: 0x3c4da4, Func Offset: 0x54
	// Line 253, Address: 0x3c4dc0, Func Offset: 0x70
	// Line 256, Address: 0x3c4dd8, Func Offset: 0x88
	// Line 257, Address: 0x3c4ddc, Func Offset: 0x8c
	// Line 259, Address: 0x3c4de4, Func Offset: 0x94
	// Line 260, Address: 0x3c4de8, Func Offset: 0x98
	// Func End, Address: 0x3c4e08, Func Offset: 0xb8
}

// xParCmdRegister__FUiUiPFP7xParCmdP9xParGroupf_v
// Start address: 0x3c4e10
void xParCmdRegister(uint32 parType, uint32 size, void(*func)(xParCmd*, xParGroup*, float32))
{
	// Line 117, Address: 0x3c4e14, Func Offset: 0x4
	// Line 113, Address: 0x3c4e18, Func Offset: 0x8
	// Line 117, Address: 0x3c4e1c, Func Offset: 0xc
	// Line 118, Address: 0x3c4e24, Func Offset: 0x14
	// Line 117, Address: 0x3c4e28, Func Offset: 0x18
	// Line 118, Address: 0x3c4e2c, Func Offset: 0x1c
	// Line 117, Address: 0x3c4e30, Func Offset: 0x20
	// Line 118, Address: 0x3c4e34, Func Offset: 0x24
	// Line 119, Address: 0x3c4e38, Func Offset: 0x28
	// Line 118, Address: 0x3c4e3c, Func Offset: 0x2c
	// Line 119, Address: 0x3c4e40, Func Offset: 0x30
	// Line 121, Address: 0x3c4e48, Func Offset: 0x38
	// Func End, Address: 0x3c4e50, Func Offset: 0x40
}

// xParCmdInit__Fv
// Start address: 0x3c4e50
void xParCmdInit()
{
	// Line 69, Address: 0x3c4e50, Func Offset: 0
	// Line 72, Address: 0x3c4e5c, Func Offset: 0xc
	// Line 69, Address: 0x3c4e60, Func Offset: 0x10
	// Line 74, Address: 0x3c4e6c, Func Offset: 0x1c
	// Line 69, Address: 0x3c4e70, Func Offset: 0x20
	// Line 70, Address: 0x3c4e7c, Func Offset: 0x2c
	// Line 72, Address: 0x3c4e8c, Func Offset: 0x3c
	// Line 70, Address: 0x3c4e90, Func Offset: 0x40
	// Line 71, Address: 0x3c4ea4, Func Offset: 0x54
	// Line 74, Address: 0x3c4eb4, Func Offset: 0x64
	// Line 71, Address: 0x3c4eb8, Func Offset: 0x68
	// Line 72, Address: 0x3c4ecc, Func Offset: 0x7c
	// Line 75, Address: 0x3c4edc, Func Offset: 0x8c
	// Line 72, Address: 0x3c4ee0, Func Offset: 0x90
	// Line 73, Address: 0x3c4ee4, Func Offset: 0x94
	// Line 72, Address: 0x3c4ee8, Func Offset: 0x98
	// Line 80, Address: 0x3c4eec, Func Offset: 0x9c
	// Line 72, Address: 0x3c4ef0, Func Offset: 0xa0
	// Line 73, Address: 0x3c4ef8, Func Offset: 0xa8
	// Line 74, Address: 0x3c4f14, Func Offset: 0xc4
	// Line 75, Address: 0x3c4f34, Func Offset: 0xe4
	// Line 77, Address: 0x3c4f54, Func Offset: 0x104
	// Line 76, Address: 0x3c4f58, Func Offset: 0x108
	// Line 77, Address: 0x3c4f7c, Func Offset: 0x12c
	// Line 78, Address: 0x3c4f9c, Func Offset: 0x14c
	// Line 77, Address: 0x3c4fa0, Func Offset: 0x150
	// Line 78, Address: 0x3c4fa4, Func Offset: 0x154
	// Line 79, Address: 0x3c4fb8, Func Offset: 0x168
	// Line 78, Address: 0x3c4fbc, Func Offset: 0x16c
	// Line 79, Address: 0x3c4fc8, Func Offset: 0x178
	// Line 80, Address: 0x3c4fec, Func Offset: 0x19c
	// Line 81, Address: 0x3c5008, Func Offset: 0x1b8
	// Line 80, Address: 0x3c500c, Func Offset: 0x1bc
	// Line 81, Address: 0x3c5010, Func Offset: 0x1c0
	// Line 82, Address: 0x3c5030, Func Offset: 0x1e0
	// Line 83, Address: 0x3c5054, Func Offset: 0x204
	// Line 84, Address: 0x3c5078, Func Offset: 0x228
	// Line 85, Address: 0x3c509c, Func Offset: 0x24c
	// Line 86, Address: 0x3c50ac, Func Offset: 0x25c
	// Line 85, Address: 0x3c50b0, Func Offset: 0x260
	// Line 86, Address: 0x3c50c0, Func Offset: 0x270
	// Line 87, Address: 0x3c50d4, Func Offset: 0x284
	// Line 86, Address: 0x3c50d8, Func Offset: 0x288
	// Line 87, Address: 0x3c50e4, Func Offset: 0x294
	// Line 88, Address: 0x3c50f8, Func Offset: 0x2a8
	// Line 87, Address: 0x3c50fc, Func Offset: 0x2ac
	// Line 88, Address: 0x3c5104, Func Offset: 0x2b4
	// Line 87, Address: 0x3c5108, Func Offset: 0x2b8
	// Line 88, Address: 0x3c510c, Func Offset: 0x2bc
	// Line 89, Address: 0x3c511c, Func Offset: 0x2cc
	// Line 88, Address: 0x3c5120, Func Offset: 0x2d0
	// Line 89, Address: 0x3c5128, Func Offset: 0x2d8
	// Line 90, Address: 0x3c5148, Func Offset: 0x2f8
	// Line 91, Address: 0x3c5164, Func Offset: 0x314
	// Line 90, Address: 0x3c5168, Func Offset: 0x318
	// Line 91, Address: 0x3c5170, Func Offset: 0x320
	// Line 93, Address: 0x3c5188, Func Offset: 0x338
	// Line 91, Address: 0x3c518c, Func Offset: 0x33c
	// Line 93, Address: 0x3c5194, Func Offset: 0x344
	// Line 94, Address: 0x3c51b4, Func Offset: 0x364
	// Line 93, Address: 0x3c51b8, Func Offset: 0x368
	// Line 94, Address: 0x3c51bc, Func Offset: 0x36c
	// Line 95, Address: 0x3c51d0, Func Offset: 0x380
	// Line 94, Address: 0x3c51d4, Func Offset: 0x384
	// Line 95, Address: 0x3c51dc, Func Offset: 0x38c
	// Line 94, Address: 0x3c51e0, Func Offset: 0x390
	// Line 95, Address: 0x3c51e4, Func Offset: 0x394
	// Line 96, Address: 0x3c51f8, Func Offset: 0x3a8
	// Line 95, Address: 0x3c51fc, Func Offset: 0x3ac
	// Line 96, Address: 0x3c5200, Func Offset: 0x3b0
	// Line 99, Address: 0x3c521c, Func Offset: 0x3cc
	// Func End, Address: 0x3c5224, Func Offset: 0x3d4
}

