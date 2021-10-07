



void zLightningCollision(zLightning* l, xVec3& start, xVec3& end);
void zLightningModifyEndpoints(zLightning* l, xVec3* start, xVec3* end, float32 scalePerLength);
void zLightningModifyEndpoints(zLightning* l, xVec3* start, xVec3* end);
void _zLightningKill(zLightning* l);
void zLightningKill(zLightning* l);
void zLightningRender();
uint8 zLightningCull(zLightning* l, float32& distanceFade);
void zLightningFunc_Render(zLightning* l);
void zLightningUpdate(float32 dt);
void UpdateLightning(zLightning* l, float32 dt);
zLightning* _zLightningAdd(_tagLightningAdd* add);
zLightning* zLightningAdd(_tagLightningAdd* add);
void zLightningReset();
void zLightningInit();
void lightningAddTweaks();
zLightning* lightningStart(zLightningAsset* asset);
void lightningTweakStart();
void EventCB(xBase* to, uint32 toEvent);
void Init(xBase& data, xDynAsset& asset);

// zLightningCollision__FP10zLightningR5xVec3R5xVec3
// Start address: 0x2c6210
void zLightningCollision(zLightning* l, xVec3& start, xVec3& end)
{
	xBound bound;
	xMat4x3 mat;
	// Line 1649, Address: 0x2c6210, Func Offset: 0
	// Line 1650, Address: 0x2c6218, Func Offset: 0x8
	// Line 1655, Address: 0x2c6224, Func Offset: 0x14
	// Line 1658, Address: 0x2c6228, Func Offset: 0x18
	// Line 1655, Address: 0x2c622c, Func Offset: 0x1c
	// Line 1658, Address: 0x2c6230, Func Offset: 0x20
	// Line 1659, Address: 0x2c6238, Func Offset: 0x28
	// Line 1658, Address: 0x2c623c, Func Offset: 0x2c
	// Line 1660, Address: 0x2c6258, Func Offset: 0x48
	// Line 1658, Address: 0x2c6260, Func Offset: 0x50
	// Line 1659, Address: 0x2c6264, Func Offset: 0x54
	// Line 1658, Address: 0x2c6268, Func Offset: 0x58
	// Line 1660, Address: 0x2c6278, Func Offset: 0x68
	// Line 1658, Address: 0x2c627c, Func Offset: 0x6c
	// Line 1660, Address: 0x2c6294, Func Offset: 0x84
	// Line 1658, Address: 0x2c6298, Func Offset: 0x88
	// Line 1660, Address: 0x2c629c, Func Offset: 0x8c
	// Line 1658, Address: 0x2c62a8, Func Offset: 0x98
	// Line 1660, Address: 0x2c62ac, Func Offset: 0x9c
	// Line 1661, Address: 0x2c63cc, Func Offset: 0x1bc
	// Line 1672, Address: 0x2c63d4, Func Offset: 0x1c4
	// Line 1662, Address: 0x2c63d8, Func Offset: 0x1c8
	// Line 1672, Address: 0x2c63dc, Func Offset: 0x1cc
	// Line 1662, Address: 0x2c63e0, Func Offset: 0x1d0
	// Line 1672, Address: 0x2c63e4, Func Offset: 0x1d4
	// Line 1662, Address: 0x2c63e8, Func Offset: 0x1d8
	// Line 1668, Address: 0x2c63ec, Func Offset: 0x1dc
	// Line 1669, Address: 0x2c63f0, Func Offset: 0x1e0
	// Line 1671, Address: 0x2c63f4, Func Offset: 0x1e4
	// Line 1675, Address: 0x2c63f8, Func Offset: 0x1e8
	// Line 1676, Address: 0x2c63fc, Func Offset: 0x1ec
	// Line 1662, Address: 0x2c6400, Func Offset: 0x1f0
	// Line 1678, Address: 0x2c6404, Func Offset: 0x1f4
	// Line 1662, Address: 0x2c6408, Func Offset: 0x1f8
	// Line 1672, Address: 0x2c6410, Func Offset: 0x200
	// Line 1668, Address: 0x2c6414, Func Offset: 0x204
	// Line 1672, Address: 0x2c6418, Func Offset: 0x208
	// Line 1669, Address: 0x2c641c, Func Offset: 0x20c
	// Line 1672, Address: 0x2c6420, Func Offset: 0x210
	// Line 1670, Address: 0x2c6424, Func Offset: 0x214
	// Line 1671, Address: 0x2c6428, Func Offset: 0x218
	// Line 1672, Address: 0x2c642c, Func Offset: 0x21c
	// Line 1673, Address: 0x2c6430, Func Offset: 0x220
	// Line 1678, Address: 0x2c6438, Func Offset: 0x228
	// Line 1673, Address: 0x2c643c, Func Offset: 0x22c
	// Line 1675, Address: 0x2c6448, Func Offset: 0x238
	// Line 1676, Address: 0x2c6450, Func Offset: 0x240
	// Line 1678, Address: 0x2c6458, Func Offset: 0x248
	// Line 1687, Address: 0x2c6554, Func Offset: 0x344
	// Line 1660, Address: 0x2c6588, Func Offset: 0x378
	// Line 1687, Address: 0x2c6594, Func Offset: 0x384
	// Line 1660, Address: 0x2c659c, Func Offset: 0x38c
	// Line 1687, Address: 0x2c65a0, Func Offset: 0x390
	// Line 1660, Address: 0x2c65b4, Func Offset: 0x3a4
	// Line 1687, Address: 0x2c65b8, Func Offset: 0x3a8
	// Line 1660, Address: 0x2c65c8, Func Offset: 0x3b8
	// Line 1687, Address: 0x2c65cc, Func Offset: 0x3bc
	// Line 1660, Address: 0x2c65d4, Func Offset: 0x3c4
	// Line 1687, Address: 0x2c65e0, Func Offset: 0x3d0
	// Line 1660, Address: 0x2c65e8, Func Offset: 0x3d8
	// Line 1687, Address: 0x2c65ec, Func Offset: 0x3dc
	// Line 1660, Address: 0x2c65fc, Func Offset: 0x3ec
	// Line 1687, Address: 0x2c6604, Func Offset: 0x3f4
	// Line 1660, Address: 0x2c660c, Func Offset: 0x3fc
	// Line 1687, Address: 0x2c6610, Func Offset: 0x400
	// Line 1660, Address: 0x2c6630, Func Offset: 0x420
	// Line 1687, Address: 0x2c6634, Func Offset: 0x424
	// Line 1660, Address: 0x2c6640, Func Offset: 0x430
	// Line 1687, Address: 0x2c664c, Func Offset: 0x43c
	// Line 1660, Address: 0x2c6650, Func Offset: 0x440
	// Line 1687, Address: 0x2c665c, Func Offset: 0x44c
	// Line 1660, Address: 0x2c6670, Func Offset: 0x460
	// Line 1687, Address: 0x2c6678, Func Offset: 0x468
	// Line 1660, Address: 0x2c66a0, Func Offset: 0x490
	// Line 1687, Address: 0x2c66a8, Func Offset: 0x498
	// Line 1660, Address: 0x2c66ac, Func Offset: 0x49c
	// Line 1687, Address: 0x2c66b4, Func Offset: 0x4a4
	// Line 1660, Address: 0x2c66bc, Func Offset: 0x4ac
	// Line 1687, Address: 0x2c66c4, Func Offset: 0x4b4
	// Func End, Address: 0x2c66f4, Func Offset: 0x4e4
}

// zLightningModifyEndpoints__FP10zLightningPC5xVec3PC5xVec3f
// Start address: 0x2c6700
void zLightningModifyEndpoints(zLightning* l, xVec3* start, xVec3* end, float32 scalePerLength)
{
	// Line 1486, Address: 0x2c6700, Func Offset: 0
	// Line 1491, Address: 0x2c6708, Func Offset: 0x8
	// Line 1496, Address: 0x2c670c, Func Offset: 0xc
	// Line 1491, Address: 0x2c6714, Func Offset: 0x14
	// Line 1492, Address: 0x2c671c, Func Offset: 0x1c
	// Line 1491, Address: 0x2c6724, Func Offset: 0x24
	// Line 1492, Address: 0x2c6728, Func Offset: 0x28
	// Line 1491, Address: 0x2c672c, Func Offset: 0x2c
	// Line 1492, Address: 0x2c6734, Func Offset: 0x34
	// Line 1496, Address: 0x2c673c, Func Offset: 0x3c
	// Line 1492, Address: 0x2c6744, Func Offset: 0x44
	// Line 1493, Address: 0x2c6748, Func Offset: 0x48
	// Line 1494, Address: 0x2c6754, Func Offset: 0x54
	// Line 1495, Address: 0x2c675c, Func Offset: 0x5c
	// Line 1494, Address: 0x2c6764, Func Offset: 0x64
	// Line 1495, Address: 0x2c6798, Func Offset: 0x98
	// Line 1496, Address: 0x2c67ac, Func Offset: 0xac
	// Line 1498, Address: 0x2c67b8, Func Offset: 0xb8
	// Line 1504, Address: 0x2c67e8, Func Offset: 0xe8
	// Line 1505, Address: 0x2c67f8, Func Offset: 0xf8
	// Line 1509, Address: 0x2c680c, Func Offset: 0x10c
	// Line 1513, Address: 0x2c681c, Func Offset: 0x11c
	// Line 1514, Address: 0x2c6830, Func Offset: 0x130
	// Line 1518, Address: 0x2c6840, Func Offset: 0x140
	// Line 1519, Address: 0x2c6844, Func Offset: 0x144
	// Func End, Address: 0x2c687c, Func Offset: 0x17c
}

// zLightningModifyEndpoints__FP10zLightningPC5xVec3PC5xVec3
// Start address: 0x2c6880
void zLightningModifyEndpoints(zLightning* l, xVec3* start, xVec3* end)
{
	// Line 1480, Address: 0x2c6880, Func Offset: 0
	// Func End, Address: 0x2c6888, Func Offset: 0x8
}

// _zLightningKill__FP10zLightning
// Start address: 0x2c6890
void _zLightningKill(zLightning* l)
{
	// Line 1404, Address: 0x2c6890, Func Offset: 0
	// Line 1405, Address: 0x2c68a0, Func Offset: 0x10
	// Line 1407, Address: 0x2c68a8, Func Offset: 0x18
	// Line 1408, Address: 0x2c68b0, Func Offset: 0x20
	// Line 1407, Address: 0x2c68b4, Func Offset: 0x24
	// Line 1408, Address: 0x2c68bc, Func Offset: 0x2c
	// Line 1410, Address: 0x2c68c8, Func Offset: 0x38
	// Line 1411, Address: 0x2c68d0, Func Offset: 0x40
	// Line 1415, Address: 0x2c68d8, Func Offset: 0x48
	// Func End, Address: 0x2c68e8, Func Offset: 0x58
}

// zLightningKill__FP10zLightning
// Start address: 0x2c68f0
void zLightningKill(zLightning* l)
{
	// Line 1395, Address: 0x2c68f0, Func Offset: 0
	// Line 1398, Address: 0x2c6900, Func Offset: 0x10
	// Line 1399, Address: 0x2c6938, Func Offset: 0x48
	// Func End, Address: 0x2c6948, Func Offset: 0x58
}

// zLightningRender__Fv
// Start address: 0x2c6950
void zLightningRender()
{
	int32 i;
	zLightning* l;
	int32 start;
	float32 frac;
	xVec3 oldEndPoint;
	// Line 1286, Address: 0x2c6950, Func Offset: 0
	// Line 1288, Address: 0x2c6954, Func Offset: 0x4
	// Line 1286, Address: 0x2c6958, Func Offset: 0x8
	// Line 1288, Address: 0x2c6980, Func Offset: 0x30
	// Line 1293, Address: 0x2c6990, Func Offset: 0x40
	// Line 1288, Address: 0x2c6994, Func Offset: 0x44
	// Line 1293, Address: 0x2c699c, Func Offset: 0x4c
	// Line 1294, Address: 0x2c69a8, Func Offset: 0x58
	// Line 1297, Address: 0x2c69bc, Func Offset: 0x6c
	// Line 1299, Address: 0x2c69e8, Func Offset: 0x98
	// Line 1297, Address: 0x2c69ec, Func Offset: 0x9c
	// Line 1299, Address: 0x2c69f4, Func Offset: 0xa4
	// Line 1362, Address: 0x2c6a04, Func Offset: 0xb4
	// Line 1299, Address: 0x2c6a08, Func Offset: 0xb8
	// Line 1362, Address: 0x2c6a14, Func Offset: 0xc4
	// Line 1374, Address: 0x2c6a2c, Func Offset: 0xdc
	// Line 1375, Address: 0x2c6a38, Func Offset: 0xe8
	// Line 1288, Address: 0x2c6a44, Func Offset: 0xf4
	// Line 1375, Address: 0x2c6a48, Func Offset: 0xf8
	// Line 1307, Address: 0x2c6a74, Func Offset: 0x124
	// Line 1375, Address: 0x2c6a78, Func Offset: 0x128
	// Line 1333, Address: 0x2c6acc, Func Offset: 0x17c
	// Line 1375, Address: 0x2c6ad8, Func Offset: 0x188
	// Line 1337, Address: 0x2c6b08, Func Offset: 0x1b8
	// Line 1335, Address: 0x2c6b0c, Func Offset: 0x1bc
	// Line 1375, Address: 0x2c6b18, Func Offset: 0x1c8
	// Line 1340, Address: 0x2c6b40, Func Offset: 0x1f0
	// Line 1375, Address: 0x2c6b44, Func Offset: 0x1f4
	// Line 1340, Address: 0x2c6b54, Func Offset: 0x204
	// Line 1375, Address: 0x2c6b58, Func Offset: 0x208
	// Line 1340, Address: 0x2c6b7c, Func Offset: 0x22c
	// Line 1375, Address: 0x2c6b80, Func Offset: 0x230
	// Line 1340, Address: 0x2c6b88, Func Offset: 0x238
	// Line 1375, Address: 0x2c6b90, Func Offset: 0x240
	// Line 1340, Address: 0x2c6ba0, Func Offset: 0x250
	// Line 1375, Address: 0x2c6ba4, Func Offset: 0x254
	// Line 1340, Address: 0x2c6bf4, Func Offset: 0x2a4
	// Line 1375, Address: 0x2c6bf8, Func Offset: 0x2a8
	// Line 1340, Address: 0x2c6bfc, Func Offset: 0x2ac
	// Line 1375, Address: 0x2c6c00, Func Offset: 0x2b0
	// Line 1340, Address: 0x2c6c18, Func Offset: 0x2c8
	// Line 1375, Address: 0x2c6c1c, Func Offset: 0x2cc
	// Line 1341, Address: 0x2c6c5c, Func Offset: 0x30c
	// Line 1375, Address: 0x2c6c60, Func Offset: 0x310
	// Line 1341, Address: 0x2c6c64, Func Offset: 0x314
	// Line 1375, Address: 0x2c6c68, Func Offset: 0x318
	// Line 1341, Address: 0x2c6c78, Func Offset: 0x328
	// Line 1375, Address: 0x2c6c7c, Func Offset: 0x32c
	// Line 1341, Address: 0x2c6c90, Func Offset: 0x340
	// Line 1375, Address: 0x2c6c94, Func Offset: 0x344
	// Line 1341, Address: 0x2c6ca8, Func Offset: 0x358
	// Line 1375, Address: 0x2c6cac, Func Offset: 0x35c
	// Line 1341, Address: 0x2c6cb4, Func Offset: 0x364
	// Line 1375, Address: 0x2c6cb8, Func Offset: 0x368
	// Line 1346, Address: 0x2c6cbc, Func Offset: 0x36c
	// Line 1375, Address: 0x2c6cc0, Func Offset: 0x370
	// Line 1355, Address: 0x2c6ccc, Func Offset: 0x37c
	// Line 1375, Address: 0x2c6cd0, Func Offset: 0x380
	// Line 1342, Address: 0x2c6cec, Func Offset: 0x39c
	// Line 1375, Address: 0x2c6cf0, Func Offset: 0x3a0
	// Line 1345, Address: 0x2c6cfc, Func Offset: 0x3ac
	// Line 1375, Address: 0x2c6d08, Func Offset: 0x3b8
	// Line 1345, Address: 0x2c6d0c, Func Offset: 0x3bc
	// Line 1375, Address: 0x2c6d10, Func Offset: 0x3c0
	// Line 1352, Address: 0x2c6d38, Func Offset: 0x3e8
	// Line 1375, Address: 0x2c6d40, Func Offset: 0x3f0
	// Line 1352, Address: 0x2c6d48, Func Offset: 0x3f8
	// Line 1375, Address: 0x2c6d88, Func Offset: 0x438
	// Line 1352, Address: 0x2c6d8c, Func Offset: 0x43c
	// Line 1375, Address: 0x2c6d9c, Func Offset: 0x44c
	// Line 1353, Address: 0x2c6da4, Func Offset: 0x454
	// Line 1375, Address: 0x2c6dac, Func Offset: 0x45c
	// Line 1353, Address: 0x2c6db4, Func Offset: 0x464
	// Line 1375, Address: 0x2c6df4, Func Offset: 0x4a4
	// Line 1353, Address: 0x2c6df8, Func Offset: 0x4a8
	// Line 1375, Address: 0x2c6e08, Func Offset: 0x4b8
	// Line 1354, Address: 0x2c6e10, Func Offset: 0x4c0
	// Line 1375, Address: 0x2c6e18, Func Offset: 0x4c8
	// Line 1354, Address: 0x2c6e20, Func Offset: 0x4d0
	// Line 1375, Address: 0x2c6e60, Func Offset: 0x510
	// Line 1354, Address: 0x2c6e64, Func Offset: 0x514
	// Line 1374, Address: 0x2c6e80, Func Offset: 0x530
	// Line 1375, Address: 0x2c6e8c, Func Offset: 0x53c
	// Func End, Address: 0x2c6ec8, Func Offset: 0x578
}

// zLightningCull__FP10zLightningRf
// Start address: 0x2c6ed0
uint8 zLightningCull(zLightning* l, float32& distanceFade)
{
	xMat4x3 mat;
	xVec3 pos;
	float32 dist2;
	xVec3 step;
	int32 i;
	uint8 doDraw;
	// Line 1215, Address: 0x2c6ed0, Func Offset: 0
	// Line 1216, Address: 0x2c6ef8, Func Offset: 0x28
	// Line 1219, Address: 0x2c6f44, Func Offset: 0x74
	// Line 1220, Address: 0x2c6f4c, Func Offset: 0x7c
	// Line 1219, Address: 0x2c6f50, Func Offset: 0x80
	// Line 1220, Address: 0x2c6f54, Func Offset: 0x84
	// Line 1219, Address: 0x2c6f58, Func Offset: 0x88
	// Line 1220, Address: 0x2c6f5c, Func Offset: 0x8c
	// Line 1219, Address: 0x2c6f60, Func Offset: 0x90
	// Line 1220, Address: 0x2c6f68, Func Offset: 0x98
	// Line 1219, Address: 0x2c6f80, Func Offset: 0xb0
	// Line 1220, Address: 0x2c6f84, Func Offset: 0xb4
	// Line 1219, Address: 0x2c6f88, Func Offset: 0xb8
	// Line 1220, Address: 0x2c6f8c, Func Offset: 0xbc
	// Line 1219, Address: 0x2c6f90, Func Offset: 0xc0
	// Line 1220, Address: 0x2c6f98, Func Offset: 0xc8
	// Line 1221, Address: 0x2c703c, Func Offset: 0x16c
	// Line 1220, Address: 0x2c7040, Func Offset: 0x170
	// Line 1221, Address: 0x2c7044, Func Offset: 0x174
	// Line 1220, Address: 0x2c7048, Func Offset: 0x178
	// Line 1221, Address: 0x2c7088, Func Offset: 0x1b8
	// Line 1220, Address: 0x2c7090, Func Offset: 0x1c0
	// Line 1221, Address: 0x2c70a0, Func Offset: 0x1d0
	// Line 1223, Address: 0x2c70c0, Func Offset: 0x1f0
	// Line 1225, Address: 0x2c70cc, Func Offset: 0x1fc
	// Line 1228, Address: 0x2c70d8, Func Offset: 0x208
	// Line 1230, Address: 0x2c70e8, Func Offset: 0x218
	// Line 1231, Address: 0x2c7104, Func Offset: 0x234
	// Line 1234, Address: 0x2c710c, Func Offset: 0x23c
	// Line 1239, Address: 0x2c7110, Func Offset: 0x240
	// Line 1246, Address: 0x2c7154, Func Offset: 0x284
	// Line 1240, Address: 0x2c715c, Func Offset: 0x28c
	// Line 1241, Address: 0x2c7160, Func Offset: 0x290
	// Line 1242, Address: 0x2c7164, Func Offset: 0x294
	// Line 1239, Address: 0x2c7168, Func Offset: 0x298
	// Line 1246, Address: 0x2c716c, Func Offset: 0x29c
	// Line 1239, Address: 0x2c7170, Func Offset: 0x2a0
	// Line 1246, Address: 0x2c7174, Func Offset: 0x2a4
	// Line 1239, Address: 0x2c7178, Func Offset: 0x2a8
	// Line 1240, Address: 0x2c71a0, Func Offset: 0x2d0
	// Line 1239, Address: 0x2c71a8, Func Offset: 0x2d8
	// Line 1240, Address: 0x2c71b4, Func Offset: 0x2e4
	// Line 1239, Address: 0x2c71b8, Func Offset: 0x2e8
	// Line 1240, Address: 0x2c71bc, Func Offset: 0x2ec
	// Line 1239, Address: 0x2c71c0, Func Offset: 0x2f0
	// Line 1240, Address: 0x2c71c4, Func Offset: 0x2f4
	// Line 1239, Address: 0x2c71c8, Func Offset: 0x2f8
	// Line 1240, Address: 0x2c71d0, Func Offset: 0x300
	// Line 1239, Address: 0x2c71d4, Func Offset: 0x304
	// Line 1246, Address: 0x2c7210, Func Offset: 0x340
	// Line 1239, Address: 0x2c7214, Func Offset: 0x344
	// Line 1246, Address: 0x2c721c, Func Offset: 0x34c
	// Line 1239, Address: 0x2c7220, Func Offset: 0x350
	// Line 1250, Address: 0x2c7224, Func Offset: 0x354
	// Line 1246, Address: 0x2c7228, Func Offset: 0x358
	// Line 1248, Address: 0x2c7290, Func Offset: 0x3c0
	// Line 1250, Address: 0x2c7298, Func Offset: 0x3c8
	// Line 1251, Address: 0x2c72b8, Func Offset: 0x3e8
	// Line 1253, Address: 0x2c72c0, Func Offset: 0x3f0
	// Line 1254, Address: 0x2c72c8, Func Offset: 0x3f8
	// Func End, Address: 0x2c72dc, Func Offset: 0x40c
}

// zLightningFunc_Render__FP10zLightning
// Start address: 0x2c72e0
void zLightningFunc_Render(zLightning* l)
{
	float32 percent;
	float32 pstep;
	xVec3 val[2];
	int32 i;
	float32 distanceFade;
	xVec3 drawAxis[2];
	RxObjSpace3DVertex* verts0;
	uint32 numVerts;
	int32 u;
	uint8 aVal;
	float32 pstep2;
	float32 pstep3;
	float32 w1func;
	float32 w1funcB;
	float32 w1funcC;
	float32 w1funcEnd;
	float32 w2func;
	float32 w2funcB;
	float32 w2funcC;
	float32 w2funcEnd;
	float32 wsumfunc;
	float32 wsumfuncB;
	float32 wsumfuncC;
	float32 wsumfuncEnd;
	float32 _scl2;
	float32 _scl3;
	uint8 isFinishLoop;
	float32 fParam;
	int32 iParam;
	zLightningFuncPiece* piece;
	float32 alpha;
	RwRGBA* _col;
	RwRGBA* _col;
	uint32 vidx;
	// Line 902, Address: 0x2c72e0, Func Offset: 0
	// Line 915, Address: 0x2c72e8, Func Offset: 0x8
	// Line 902, Address: 0x2c72ec, Func Offset: 0xc
	// Line 915, Address: 0x2c7340, Func Offset: 0x60
	// Line 923, Address: 0x2c7350, Func Offset: 0x70
	// Line 924, Address: 0x2c735c, Func Offset: 0x7c
	// Line 922, Address: 0x2c7368, Func Offset: 0x88
	// Line 924, Address: 0x2c736c, Func Offset: 0x8c
	// Line 929, Address: 0x2c7378, Func Offset: 0x98
	// Line 940, Address: 0x2c7394, Func Offset: 0xb4
	// Line 961, Address: 0x2c73a0, Func Offset: 0xc0
	// Line 955, Address: 0x2c73a4, Func Offset: 0xc4
	// Line 961, Address: 0x2c73a8, Func Offset: 0xc8
	// Line 955, Address: 0x2c73ac, Func Offset: 0xcc
	// Line 961, Address: 0x2c73b0, Func Offset: 0xd0
	// Line 971, Address: 0x2c73c4, Func Offset: 0xe4
	// Line 972, Address: 0x2c73cc, Func Offset: 0xec
	// Line 971, Address: 0x2c73d4, Func Offset: 0xf4
	// Line 972, Address: 0x2c73e0, Func Offset: 0x100
	// Line 982, Address: 0x2c73ec, Func Offset: 0x10c
	// Line 984, Address: 0x2c73fc, Func Offset: 0x11c
	// Line 985, Address: 0x2c740c, Func Offset: 0x12c
	// Line 984, Address: 0x2c7414, Func Offset: 0x134
	// Line 985, Address: 0x2c7418, Func Offset: 0x138
	// Line 987, Address: 0x2c7424, Func Offset: 0x144
	// Line 989, Address: 0x2c7458, Func Offset: 0x178
	// Line 992, Address: 0x2c7460, Func Offset: 0x180
	// Line 997, Address: 0x2c747c, Func Offset: 0x19c
	// Line 999, Address: 0x2c7484, Func Offset: 0x1a4
	// Line 1003, Address: 0x2c7488, Func Offset: 0x1a8
	// Line 998, Address: 0x2c7494, Func Offset: 0x1b4
	// Line 999, Address: 0x2c749c, Func Offset: 0x1bc
	// Line 998, Address: 0x2c74b0, Func Offset: 0x1d0
	// Line 999, Address: 0x2c74b4, Func Offset: 0x1d4
	// Line 1000, Address: 0x2c7504, Func Offset: 0x224
	// Line 999, Address: 0x2c7514, Func Offset: 0x234
	// Line 1000, Address: 0x2c751c, Func Offset: 0x23c
	// Line 1001, Address: 0x2c7550, Func Offset: 0x270
	// Line 1000, Address: 0x2c7558, Func Offset: 0x278
	// Line 1001, Address: 0x2c7568, Func Offset: 0x288
	// Line 1000, Address: 0x2c756c, Func Offset: 0x28c
	// Line 1001, Address: 0x2c7578, Func Offset: 0x298
	// Line 1000, Address: 0x2c7580, Func Offset: 0x2a0
	// Line 1001, Address: 0x2c7588, Func Offset: 0x2a8
	// Line 1009, Address: 0x2c75cc, Func Offset: 0x2ec
	// Line 1033, Address: 0x2c75d8, Func Offset: 0x2f8
	// Line 1035, Address: 0x2c75f0, Func Offset: 0x310
	// Line 1039, Address: 0x2c75f4, Func Offset: 0x314
	// Line 1036, Address: 0x2c75f8, Func Offset: 0x318
	// Line 1039, Address: 0x2c75fc, Func Offset: 0x31c
	// Line 1037, Address: 0x2c7600, Func Offset: 0x320
	// Line 1038, Address: 0x2c7604, Func Offset: 0x324
	// Line 1049, Address: 0x2c760c, Func Offset: 0x32c
	// Line 1041, Address: 0x2c7618, Func Offset: 0x338
	// Line 1055, Address: 0x2c761c, Func Offset: 0x33c
	// Line 1044, Address: 0x2c7624, Func Offset: 0x344
	// Line 1055, Address: 0x2c7630, Func Offset: 0x350
	// Line 1041, Address: 0x2c7634, Func Offset: 0x354
	// Line 1042, Address: 0x2c763c, Func Offset: 0x35c
	// Line 1041, Address: 0x2c7644, Func Offset: 0x364
	// Line 1042, Address: 0x2c764c, Func Offset: 0x36c
	// Line 1041, Address: 0x2c765c, Func Offset: 0x37c
	// Line 1042, Address: 0x2c7660, Func Offset: 0x380
	// Line 1049, Address: 0x2c7668, Func Offset: 0x388
	// Line 1042, Address: 0x2c766c, Func Offset: 0x38c
	// Line 1047, Address: 0x2c7670, Func Offset: 0x390
	// Line 1048, Address: 0x2c7680, Func Offset: 0x3a0
	// Line 1049, Address: 0x2c76ac, Func Offset: 0x3cc
	// Line 1051, Address: 0x2c76bc, Func Offset: 0x3dc
	// Line 1052, Address: 0x2c76d4, Func Offset: 0x3f4
	// Line 1055, Address: 0x2c76d8, Func Offset: 0x3f8
	// Line 1059, Address: 0x2c76e0, Func Offset: 0x400
	// Line 1056, Address: 0x2c76e4, Func Offset: 0x404
	// Line 1059, Address: 0x2c76e8, Func Offset: 0x408
	// Line 1056, Address: 0x2c76ec, Func Offset: 0x40c
	// Line 1058, Address: 0x2c76f0, Func Offset: 0x410
	// Line 1057, Address: 0x2c76f4, Func Offset: 0x414
	// Line 1058, Address: 0x2c76fc, Func Offset: 0x41c
	// Line 1056, Address: 0x2c7704, Func Offset: 0x424
	// Line 1057, Address: 0x2c770c, Func Offset: 0x42c
	// Line 1056, Address: 0x2c7714, Func Offset: 0x434
	// Line 1058, Address: 0x2c7718, Func Offset: 0x438
	// Line 1057, Address: 0x2c771c, Func Offset: 0x43c
	// Line 1058, Address: 0x2c7720, Func Offset: 0x440
	// Line 1059, Address: 0x2c7728, Func Offset: 0x448
	// Line 1062, Address: 0x2c7730, Func Offset: 0x450
	// Line 1063, Address: 0x2c773c, Func Offset: 0x45c
	// Line 1062, Address: 0x2c7744, Func Offset: 0x464
	// Line 1071, Address: 0x2c7748, Func Offset: 0x468
	// Line 1062, Address: 0x2c7750, Func Offset: 0x470
	// Line 1063, Address: 0x2c7754, Func Offset: 0x474
	// Line 1062, Address: 0x2c775c, Func Offset: 0x47c
	// Line 1064, Address: 0x2c7764, Func Offset: 0x484
	// Line 1063, Address: 0x2c776c, Func Offset: 0x48c
	// Line 1064, Address: 0x2c7770, Func Offset: 0x490
	// Line 1063, Address: 0x2c7778, Func Offset: 0x498
	// Line 1064, Address: 0x2c7784, Func Offset: 0x4a4
	// Line 1071, Address: 0x2c7794, Func Offset: 0x4b4
	// Line 1080, Address: 0x2c77a0, Func Offset: 0x4c0
	// Line 1083, Address: 0x2c77e0, Func Offset: 0x500
	// Line 1087, Address: 0x2c77f4, Func Offset: 0x514
	// Line 1089, Address: 0x2c780c, Func Offset: 0x52c
	// Line 1092, Address: 0x2c7810, Func Offset: 0x530
	// Line 1121, Address: 0x2c78b0, Func Offset: 0x5d0
	// Line 1123, Address: 0x2c78c8, Func Offset: 0x5e8
	// Line 1138, Address: 0x2c7940, Func Offset: 0x660
	// Line 1136, Address: 0x2c7944, Func Offset: 0x664
	// Line 1140, Address: 0x2c794c, Func Offset: 0x66c
	// Line 1138, Address: 0x2c7950, Func Offset: 0x670
	// Line 1156, Address: 0x2c7954, Func Offset: 0x674
	// Line 1138, Address: 0x2c7958, Func Offset: 0x678
	// Line 1136, Address: 0x2c795c, Func Offset: 0x67c
	// Line 1138, Address: 0x2c7964, Func Offset: 0x684
	// Line 1136, Address: 0x2c7968, Func Offset: 0x688
	// Line 1140, Address: 0x2c7974, Func Offset: 0x694
	// Line 1138, Address: 0x2c7978, Func Offset: 0x698
	// Line 1140, Address: 0x2c797c, Func Offset: 0x69c
	// Line 1158, Address: 0x2c7980, Func Offset: 0x6a0
	// Line 1147, Address: 0x2c7984, Func Offset: 0x6a4
	// Line 1158, Address: 0x2c7988, Func Offset: 0x6a8
	// Line 1138, Address: 0x2c798c, Func Offset: 0x6ac
	// Line 1136, Address: 0x2c7990, Func Offset: 0x6b0
	// Line 1138, Address: 0x2c7994, Func Offset: 0x6b4
	// Line 1140, Address: 0x2c79a8, Func Offset: 0x6c8
	// Line 1138, Address: 0x2c79b0, Func Offset: 0x6d0
	// Line 1143, Address: 0x2c79b8, Func Offset: 0x6d8
	// Line 1140, Address: 0x2c79c4, Func Offset: 0x6e4
	// Line 1138, Address: 0x2c79c8, Func Offset: 0x6e8
	// Line 1143, Address: 0x2c79d0, Func Offset: 0x6f0
	// Line 1138, Address: 0x2c79d4, Func Offset: 0x6f4
	// Line 1165, Address: 0x2c79d8, Func Offset: 0x6f8
	// Line 1138, Address: 0x2c79dc, Func Offset: 0x6fc
	// Line 1143, Address: 0x2c79e8, Func Offset: 0x708
	// Line 1140, Address: 0x2c79ec, Func Offset: 0x70c
	// Line 1143, Address: 0x2c79fc, Func Offset: 0x71c
	// Line 1145, Address: 0x2c7a00, Func Offset: 0x720
	// Line 1140, Address: 0x2c7a04, Func Offset: 0x724
	// Line 1147, Address: 0x2c7a0c, Func Offset: 0x72c
	// Line 1140, Address: 0x2c7a10, Func Offset: 0x730
	// Line 1145, Address: 0x2c7a14, Func Offset: 0x734
	// Line 1140, Address: 0x2c7a18, Func Offset: 0x738
	// Line 1147, Address: 0x2c7a1c, Func Offset: 0x73c
	// Line 1140, Address: 0x2c7a20, Func Offset: 0x740
	// Line 1145, Address: 0x2c7a28, Func Offset: 0x748
	// Line 1171, Address: 0x2c7a2c, Func Offset: 0x74c
	// Line 1147, Address: 0x2c7a30, Func Offset: 0x750
	// Line 1140, Address: 0x2c7a34, Func Offset: 0x754
	// Line 1165, Address: 0x2c7a3c, Func Offset: 0x75c
	// Line 1145, Address: 0x2c7a44, Func Offset: 0x764
	// Line 1165, Address: 0x2c7a48, Func Offset: 0x768
	// Line 1166, Address: 0x2c7a4c, Func Offset: 0x76c
	// Line 1145, Address: 0x2c7a50, Func Offset: 0x770
	// Line 1147, Address: 0x2c7a58, Func Offset: 0x778
	// Line 1166, Address: 0x2c7a64, Func Offset: 0x784
	// Line 1147, Address: 0x2c7a68, Func Offset: 0x788
	// Line 1166, Address: 0x2c7a6c, Func Offset: 0x78c
	// Line 1169, Address: 0x2c7a74, Func Offset: 0x794
	// Line 1166, Address: 0x2c7a78, Func Offset: 0x798
	// Line 1167, Address: 0x2c7a8c, Func Offset: 0x7ac
	// Line 1166, Address: 0x2c7a90, Func Offset: 0x7b0
	// Line 1167, Address: 0x2c7a94, Func Offset: 0x7b4
	// Line 1171, Address: 0x2c7ab4, Func Offset: 0x7d4
	// Line 1175, Address: 0x2c7ac0, Func Offset: 0x7e0
	// Line 1176, Address: 0x2c7ac8, Func Offset: 0x7e8
	// Line 1184, Address: 0x2c7adc, Func Offset: 0x7fc
	// Line 1187, Address: 0x2c7c14, Func Offset: 0x934
	// Line 1188, Address: 0x2c7c1c, Func Offset: 0x93c
	// Line 1210, Address: 0x2c7c30, Func Offset: 0x950
	// Line 936, Address: 0x2c7c3c, Func Offset: 0x95c
	// Line 1210, Address: 0x2c7c84, Func Offset: 0x9a4
	// Line 966, Address: 0x2c7ca8, Func Offset: 0x9c8
	// Line 963, Address: 0x2c7cac, Func Offset: 0x9cc
	// Line 1210, Address: 0x2c7cb0, Func Offset: 0x9d0
	// Line 964, Address: 0x2c7cbc, Func Offset: 0x9dc
	// Line 1210, Address: 0x2c7cc0, Func Offset: 0x9e0
	// Line 965, Address: 0x2c7ccc, Func Offset: 0x9ec
	// Line 1210, Address: 0x2c7cd0, Func Offset: 0x9f0
	// Line 967, Address: 0x2c7d00, Func Offset: 0xa20
	// Line 1210, Address: 0x2c7d08, Func Offset: 0xa28
	// Line 967, Address: 0x2c7d14, Func Offset: 0xa34
	// Line 1210, Address: 0x2c7d1c, Func Offset: 0xa3c
	// Line 967, Address: 0x2c7d28, Func Offset: 0xa48
	// Line 968, Address: 0x2c7d30, Func Offset: 0xa50
	// Line 1086, Address: 0x2c7d38, Func Offset: 0xa58
	// Line 1210, Address: 0x2c7d40, Func Offset: 0xa60
	// Line 1178, Address: 0x2c7d5c, Func Offset: 0xa7c
	// Line 1210, Address: 0x2c7d60, Func Offset: 0xa80
	// Line 1190, Address: 0x2c8110, Func Offset: 0xe30
	// Line 1210, Address: 0x2c8114, Func Offset: 0xe34
	// Func End, Address: 0x2c851c, Func Offset: 0x123c
}

// zLightningUpdate__Ff
// Start address: 0x2c8520
void zLightningUpdate(float32 dt)
{
	int32 i;
	int32 picker;
	int32 j;
	float32 prevEnd;
	// Line 720, Address: 0x2c8520, Func Offset: 0
	// Line 725, Address: 0x2c8548, Func Offset: 0x28
	// Line 720, Address: 0x2c854c, Func Offset: 0x2c
	// Line 725, Address: 0x2c8558, Func Offset: 0x38
	// Line 727, Address: 0x2c8560, Func Offset: 0x40
	// Line 731, Address: 0x2c8570, Func Offset: 0x50
	// Line 733, Address: 0x2c8580, Func Offset: 0x60
	// Line 734, Address: 0x2c8584, Func Offset: 0x64
	// Line 733, Address: 0x2c8588, Func Offset: 0x68
	// Line 734, Address: 0x2c8590, Func Offset: 0x70
	// Line 733, Address: 0x2c8598, Func Offset: 0x78
	// Line 734, Address: 0x2c85a0, Func Offset: 0x80
	// Line 738, Address: 0x2c85ac, Func Offset: 0x8c
	// Line 739, Address: 0x2c85b0, Func Offset: 0x90
	// Line 738, Address: 0x2c85b4, Func Offset: 0x94
	// Line 739, Address: 0x2c85bc, Func Offset: 0x9c
	// Line 738, Address: 0x2c85c4, Func Offset: 0xa4
	// Line 739, Address: 0x2c85cc, Func Offset: 0xac
	// Line 778, Address: 0x2c85d8, Func Offset: 0xb8
	// Line 780, Address: 0x2c85fc, Func Offset: 0xdc
	// Line 787, Address: 0x2c8600, Func Offset: 0xe0
	// Line 781, Address: 0x2c8604, Func Offset: 0xe4
	// Line 787, Address: 0x2c8608, Func Offset: 0xe8
	// Line 782, Address: 0x2c860c, Func Offset: 0xec
	// Line 783, Address: 0x2c8610, Func Offset: 0xf0
	// Line 784, Address: 0x2c8614, Func Offset: 0xf4
	// Line 785, Address: 0x2c8618, Func Offset: 0xf8
	// Line 780, Address: 0x2c861c, Func Offset: 0xfc
	// Line 781, Address: 0x2c8620, Func Offset: 0x100
	// Line 782, Address: 0x2c8624, Func Offset: 0x104
	// Line 783, Address: 0x2c8628, Func Offset: 0x108
	// Line 784, Address: 0x2c862c, Func Offset: 0x10c
	// Line 786, Address: 0x2c8630, Func Offset: 0x110
	// Line 785, Address: 0x2c8634, Func Offset: 0x114
	// Line 786, Address: 0x2c8638, Func Offset: 0x118
	// Line 787, Address: 0x2c8648, Func Offset: 0x128
	// Line 790, Address: 0x2c8650, Func Offset: 0x130
	// Line 791, Address: 0x2c86cc, Func Offset: 0x1ac
	// Line 736, Address: 0x2c86e8, Func Offset: 0x1c8
	// Line 791, Address: 0x2c86f4, Func Offset: 0x1d4
	// Line 741, Address: 0x2c86fc, Func Offset: 0x1dc
	// Line 791, Address: 0x2c8704, Func Offset: 0x1e4
	// Line 741, Address: 0x2c870c, Func Offset: 0x1ec
	// Line 791, Address: 0x2c8744, Func Offset: 0x224
	// Line 741, Address: 0x2c8748, Func Offset: 0x228
	// Line 791, Address: 0x2c8750, Func Offset: 0x230
	// Line 744, Address: 0x2c875c, Func Offset: 0x23c
	// Line 791, Address: 0x2c8760, Func Offset: 0x240
	// Line 751, Address: 0x2c878c, Func Offset: 0x26c
	// Line 791, Address: 0x2c8790, Func Offset: 0x270
	// Line 751, Address: 0x2c8798, Func Offset: 0x278
	// Line 791, Address: 0x2c879c, Func Offset: 0x27c
	// Line 751, Address: 0x2c87a4, Func Offset: 0x284
	// Line 791, Address: 0x2c87f4, Func Offset: 0x2d4
	// Line 751, Address: 0x2c87fc, Func Offset: 0x2dc
	// Line 791, Address: 0x2c8830, Func Offset: 0x310
	// Line 751, Address: 0x2c883c, Func Offset: 0x31c
	// Line 791, Address: 0x2c8858, Func Offset: 0x338
	// Line 751, Address: 0x2c8860, Func Offset: 0x340
	// Line 791, Address: 0x2c8894, Func Offset: 0x374
	// Line 751, Address: 0x2c88a0, Func Offset: 0x380
	// Line 791, Address: 0x2c88b4, Func Offset: 0x394
	// Line 752, Address: 0x2c88cc, Func Offset: 0x3ac
	// Line 791, Address: 0x2c88d4, Func Offset: 0x3b4
	// Line 752, Address: 0x2c88dc, Func Offset: 0x3bc
	// Line 791, Address: 0x2c8908, Func Offset: 0x3e8
	// Line 752, Address: 0x2c890c, Func Offset: 0x3ec
	// Line 791, Address: 0x2c8910, Func Offset: 0x3f0
	// Line 754, Address: 0x2c8914, Func Offset: 0x3f4
	// Line 752, Address: 0x2c8918, Func Offset: 0x3f8
	// Line 791, Address: 0x2c8930, Func Offset: 0x410
	// Line 752, Address: 0x2c8934, Func Offset: 0x414
	// Line 791, Address: 0x2c893c, Func Offset: 0x41c
	// Line 767, Address: 0x2c897c, Func Offset: 0x45c
	// Line 791, Address: 0x2c8980, Func Offset: 0x460
	// Line 770, Address: 0x2c899c, Func Offset: 0x47c
	// Line 791, Address: 0x2c89a0, Func Offset: 0x480
	// Line 771, Address: 0x2c89bc, Func Offset: 0x49c
	// Line 791, Address: 0x2c89c0, Func Offset: 0x4a0
	// Line 772, Address: 0x2c89d4, Func Offset: 0x4b4
	// Line 791, Address: 0x2c89d8, Func Offset: 0x4b8
	// Line 762, Address: 0x2c8a20, Func Offset: 0x500
	// Line 763, Address: 0x2c8a24, Func Offset: 0x504
	// Line 791, Address: 0x2c8a30, Func Offset: 0x510
	// Func End, Address: 0x2c8a60, Func Offset: 0x540
}

// UpdateLightning__FP10zLightningf
// Start address: 0x2c8a60
void UpdateLightning(zLightning* l, float32 dt)
{
	xVec3 start;
	xVec3 end;
	int32 i;
	// Line 631, Address: 0x2c8a60, Func Offset: 0
	// Line 633, Address: 0x2c8a74, Func Offset: 0x14
	// Line 635, Address: 0x2c8a80, Func Offset: 0x20
	// Line 636, Address: 0x2c8a9c, Func Offset: 0x3c
	// Line 637, Address: 0x2c8ab0, Func Offset: 0x50
	// Line 638, Address: 0x2c8ae4, Func Offset: 0x84
	// Line 639, Address: 0x2c8b00, Func Offset: 0xa0
	// Line 640, Address: 0x2c8b14, Func Offset: 0xb4
	// Line 641, Address: 0x2c8b48, Func Offset: 0xe8
	// Line 644, Address: 0x2c8b60, Func Offset: 0x100
	// Line 663, Address: 0x2c8b6c, Func Offset: 0x10c
	// Line 665, Address: 0x2c8b74, Func Offset: 0x114
	// Line 669, Address: 0x2c8b80, Func Offset: 0x120
	// Line 671, Address: 0x2c8b98, Func Offset: 0x138
	// Line 673, Address: 0x2c8ba8, Func Offset: 0x148
	// Line 674, Address: 0x2c8bac, Func Offset: 0x14c
	// Line 675, Address: 0x2c8bb8, Func Offset: 0x158
	// Line 678, Address: 0x2c8bc0, Func Offset: 0x160
	// Line 679, Address: 0x2c8bcc, Func Offset: 0x16c
	// Line 681, Address: 0x2c8bd4, Func Offset: 0x174
	// Line 683, Address: 0x2c8be0, Func Offset: 0x180
	// Line 685, Address: 0x2c8be8, Func Offset: 0x188
	// Line 698, Address: 0x2c8bf0, Func Offset: 0x190
	// Line 692, Address: 0x2c8bf4, Func Offset: 0x194
	// Line 698, Address: 0x2c8bf8, Func Offset: 0x198
	// Line 704, Address: 0x2c8c00, Func Offset: 0x1a0
	// Line 699, Address: 0x2c8c04, Func Offset: 0x1a4
	// Line 696, Address: 0x2c8c08, Func Offset: 0x1a8
	// Line 694, Address: 0x2c8c0c, Func Offset: 0x1ac
	// Line 696, Address: 0x2c8c28, Func Offset: 0x1c8
	// Line 698, Address: 0x2c8c38, Func Offset: 0x1d8
	// Line 699, Address: 0x2c8c44, Func Offset: 0x1e4
	// Line 646, Address: 0x2c8c78, Func Offset: 0x218
	// Line 699, Address: 0x2c8c84, Func Offset: 0x224
	// Line 648, Address: 0x2c8c90, Func Offset: 0x230
	// Line 699, Address: 0x2c8c94, Func Offset: 0x234
	// Line 650, Address: 0x2c8c9c, Func Offset: 0x23c
	// Line 699, Address: 0x2c8ca0, Func Offset: 0x240
	// Line 654, Address: 0x2c8ca8, Func Offset: 0x248
	// Line 699, Address: 0x2c8cac, Func Offset: 0x24c
	// Line 659, Address: 0x2c8cb4, Func Offset: 0x254
	// Line 653, Address: 0x2c8cbc, Func Offset: 0x25c
	// Line 701, Address: 0x2c8cc4, Func Offset: 0x264
	// Line 703, Address: 0x2c8cd0, Func Offset: 0x270
	// Line 704, Address: 0x2c8cd8, Func Offset: 0x278
	// Line 703, Address: 0x2c8cdc, Func Offset: 0x27c
	// Line 704, Address: 0x2c8ce0, Func Offset: 0x280
	// Line 705, Address: 0x2c8cf0, Func Offset: 0x290
	// Line 707, Address: 0x2c8d00, Func Offset: 0x2a0
	// Line 714, Address: 0x2c8d10, Func Offset: 0x2b0
	// Line 712, Address: 0x2c8d18, Func Offset: 0x2b8
	// Line 714, Address: 0x2c8d1c, Func Offset: 0x2bc
	// Func End, Address: 0x2c8d3c, Func Offset: 0x2dc
}

// _zLightningAdd__FP16_tagLightningAdd
// Start address: 0x2c8d40
zLightning* _zLightningAdd(_tagLightningAdd* add)
{
	RwTexture* tex;
	float32 defaultWeightParam[12][4];
	// Line 493, Address: 0x2c8d40, Func Offset: 0
	// Line 497, Address: 0x2c8d50, Func Offset: 0x10
	// Line 498, Address: 0x2c8ddc, Func Offset: 0x9c
	// Line 508, Address: 0x2c8de4, Func Offset: 0xa4
	// Line 512, Address: 0x2c8df0, Func Offset: 0xb0
	// Line 513, Address: 0x2c8dfc, Func Offset: 0xbc
	// Line 515, Address: 0x2c8e04, Func Offset: 0xc4
	// Line 520, Address: 0x2c8e0c, Func Offset: 0xcc
	// Line 521, Address: 0x2c8e18, Func Offset: 0xd8
	// Line 523, Address: 0x2c8e20, Func Offset: 0xe0
	// Line 527, Address: 0x2c8e28, Func Offset: 0xe8
	// Line 528, Address: 0x2c8e30, Func Offset: 0xf0
	// Line 530, Address: 0x2c8e3c, Func Offset: 0xfc
	// Line 532, Address: 0x2c8e5c, Func Offset: 0x11c
	// Line 533, Address: 0x2c8e60, Func Offset: 0x120
	// Line 535, Address: 0x2c8e7c, Func Offset: 0x13c
	// Line 536, Address: 0x2c8e80, Func Offset: 0x140
	// Line 539, Address: 0x2c8e84, Func Offset: 0x144
	// Line 542, Address: 0x2c8e98, Func Offset: 0x158
	// Line 543, Address: 0x2c8ee8, Func Offset: 0x1a8
	// Line 544, Address: 0x2c8f2c, Func Offset: 0x1ec
	// Line 545, Address: 0x2c8f30, Func Offset: 0x1f0
	// Line 543, Address: 0x2c8f34, Func Offset: 0x1f4
	// Line 544, Address: 0x2c8f44, Func Offset: 0x204
	// Line 545, Address: 0x2c8f48, Func Offset: 0x208
	// Line 546, Address: 0x2c8f4c, Func Offset: 0x20c
	// Line 547, Address: 0x2c8f54, Func Offset: 0x214
	// Line 548, Address: 0x2c8f5c, Func Offset: 0x21c
	// Line 549, Address: 0x2c8f60, Func Offset: 0x220
	// Line 550, Address: 0x2c8f68, Func Offset: 0x228
	// Line 551, Address: 0x2c8f70, Func Offset: 0x230
	// Line 552, Address: 0x2c8f78, Func Offset: 0x238
	// Line 553, Address: 0x2c8f80, Func Offset: 0x240
	// Line 554, Address: 0x2c8f88, Func Offset: 0x248
	// Line 555, Address: 0x2c8f8c, Func Offset: 0x24c
	// Line 556, Address: 0x2c8f98, Func Offset: 0x258
	// Line 557, Address: 0x2c8fac, Func Offset: 0x26c
	// Line 561, Address: 0x2c8fc8, Func Offset: 0x288
	// Line 562, Address: 0x2c8fd4, Func Offset: 0x294
	// Line 563, Address: 0x2c8fe8, Func Offset: 0x2a8
	// Line 568, Address: 0x2c9004, Func Offset: 0x2c4
	// Line 569, Address: 0x2c9008, Func Offset: 0x2c8
	// Line 572, Address: 0x2c900c, Func Offset: 0x2cc
	// Line 606, Address: 0x2c901c, Func Offset: 0x2dc
	// Line 608, Address: 0x2c904c, Func Offset: 0x30c
	// Line 610, Address: 0x2c905c, Func Offset: 0x31c
	// Line 611, Address: 0x2c9064, Func Offset: 0x324
	// Line 614, Address: 0x2c906c, Func Offset: 0x32c
	// Line 619, Address: 0x2c9078, Func Offset: 0x338
	// Line 624, Address: 0x2c9088, Func Offset: 0x348
	// Line 500, Address: 0x2c9090, Func Offset: 0x350
	// Line 624, Address: 0x2c90b0, Func Offset: 0x370
	// Line 625, Address: 0x2c90c0, Func Offset: 0x380
	// Func End, Address: 0x2c90d4, Func Offset: 0x394
}

// zLightningAdd__FP16_tagLightningAdd
// Start address: 0x2c90e0
zLightning* zLightningAdd(_tagLightningAdd* add)
{
	// Line 486, Address: 0x2c90e0, Func Offset: 0
	// Line 487, Address: 0x2c90e4, Func Offset: 0x4
	// Func End, Address: 0x2c90ec, Func Offset: 0xc
}

// zLightningReset__Fv
// Start address: 0x2c90f0
void zLightningReset()
{
	int32 i;
	// Line 401, Address: 0x2c90f0, Func Offset: 0
	// Line 405, Address: 0x2c9100, Func Offset: 0x10
	// Line 407, Address: 0x2c9108, Func Offset: 0x18
	// Line 408, Address: 0x2c9120, Func Offset: 0x30
	// Line 409, Address: 0x2c9130, Func Offset: 0x40
	// Line 416, Address: 0x2c9134, Func Offset: 0x44
	// Line 409, Address: 0x2c9138, Func Offset: 0x48
	// Line 416, Address: 0x2c913c, Func Offset: 0x4c
	// Line 409, Address: 0x2c9140, Func Offset: 0x50
	// Line 416, Address: 0x2c9148, Func Offset: 0x58
	// Line 417, Address: 0x2c9150, Func Offset: 0x60
	// Func End, Address: 0x2c9164, Func Offset: 0x74
}

// zLightningInit__Fv
// Start address: 0x2c9170
void zLightningInit()
{
	int32 i;
	int32 j;
	float32 prevEnd;
	// Line 302, Address: 0x2c9170, Func Offset: 0
	// Line 306, Address: 0x2c9174, Func Offset: 0x4
	// Line 302, Address: 0x2c9178, Func Offset: 0x8
	// Line 309, Address: 0x2c917c, Func Offset: 0xc
	// Line 302, Address: 0x2c9180, Func Offset: 0x10
	// Line 309, Address: 0x2c9184, Func Offset: 0x14
	// Line 302, Address: 0x2c9188, Func Offset: 0x18
	// Line 309, Address: 0x2c91a8, Func Offset: 0x38
	// Line 306, Address: 0x2c91ac, Func Offset: 0x3c
	// Line 307, Address: 0x2c91b0, Func Offset: 0x40
	// Line 309, Address: 0x2c91b8, Func Offset: 0x48
	// Line 311, Address: 0x2c91c4, Func Offset: 0x54
	// Line 313, Address: 0x2c91cc, Func Offset: 0x5c
	// Line 324, Address: 0x2c9240, Func Offset: 0xd0
	// Line 327, Address: 0x2c9250, Func Offset: 0xe0
	// Line 324, Address: 0x2c9258, Func Offset: 0xe8
	// Line 327, Address: 0x2c925c, Func Offset: 0xec
	// Line 332, Address: 0x2c9264, Func Offset: 0xf4
	// Line 327, Address: 0x2c927c, Func Offset: 0x10c
	// Line 332, Address: 0x2c9280, Func Offset: 0x110
	// Line 334, Address: 0x2c9284, Func Offset: 0x114
	// Line 335, Address: 0x2c9288, Func Offset: 0x118
	// Line 336, Address: 0x2c928c, Func Offset: 0x11c
	// Line 332, Address: 0x2c9290, Func Offset: 0x120
	// Line 336, Address: 0x2c9294, Func Offset: 0x124
	// Line 334, Address: 0x2c92a0, Func Offset: 0x130
	// Line 335, Address: 0x2c92a4, Func Offset: 0x134
	// Line 334, Address: 0x2c92a8, Func Offset: 0x138
	// Line 336, Address: 0x2c92ac, Func Offset: 0x13c
	// Line 335, Address: 0x2c92b0, Func Offset: 0x140
	// Line 336, Address: 0x2c92b4, Func Offset: 0x144
	// Line 339, Address: 0x2c9304, Func Offset: 0x194
	// Line 340, Address: 0x2c9308, Func Offset: 0x198
	// Line 339, Address: 0x2c930c, Func Offset: 0x19c
	// Line 343, Address: 0x2c9310, Func Offset: 0x1a0
	// Line 341, Address: 0x2c9314, Func Offset: 0x1a4
	// Line 343, Address: 0x2c9318, Func Offset: 0x1a8
	// Line 340, Address: 0x2c9320, Func Offset: 0x1b0
	// Line 343, Address: 0x2c9324, Func Offset: 0x1b4
	// Line 341, Address: 0x2c9328, Func Offset: 0x1b8
	// Line 343, Address: 0x2c932c, Func Offset: 0x1bc
	// Line 345, Address: 0x2c9338, Func Offset: 0x1c8
	// Line 346, Address: 0x2c9454, Func Offset: 0x2e4
	// Line 347, Address: 0x2c9580, Func Offset: 0x410
	// Line 348, Address: 0x2c96ac, Func Offset: 0x53c
	// Line 349, Address: 0x2c96f8, Func Offset: 0x588
	// Line 348, Address: 0x2c96fc, Func Offset: 0x58c
	// Line 349, Address: 0x2c972c, Func Offset: 0x5bc
	// Line 352, Address: 0x2c9734, Func Offset: 0x5c4
	// Line 350, Address: 0x2c9748, Func Offset: 0x5d8
	// Line 352, Address: 0x2c9750, Func Offset: 0x5e0
	// Line 350, Address: 0x2c9754, Func Offset: 0x5e4
	// Line 352, Address: 0x2c9758, Func Offset: 0x5e8
	// Line 356, Address: 0x2c976c, Func Offset: 0x5fc
	// Line 364, Address: 0x2c9774, Func Offset: 0x604
	// Line 366, Address: 0x2c979c, Func Offset: 0x62c
	// Line 364, Address: 0x2c97a0, Func Offset: 0x630
	// Line 366, Address: 0x2c97a4, Func Offset: 0x634
	// Line 367, Address: 0x2c97b8, Func Offset: 0x648
	// Line 368, Address: 0x2c97d0, Func Offset: 0x660
	// Line 369, Address: 0x2c97e8, Func Offset: 0x678
	// Line 368, Address: 0x2c97ec, Func Offset: 0x67c
	// Line 369, Address: 0x2c97f0, Func Offset: 0x680
	// Line 368, Address: 0x2c97f4, Func Offset: 0x684
	// Line 369, Address: 0x2c9800, Func Offset: 0x690
	// Line 373, Address: 0x2c9808, Func Offset: 0x698
	// Line 374, Address: 0x2c9814, Func Offset: 0x6a4
	// Line 377, Address: 0x2c981c, Func Offset: 0x6ac
	// Line 374, Address: 0x2c9820, Func Offset: 0x6b0
	// Line 378, Address: 0x2c9824, Func Offset: 0x6b4
	// Line 375, Address: 0x2c9828, Func Offset: 0x6b8
	// Line 371, Address: 0x2c982c, Func Offset: 0x6bc
	// Line 375, Address: 0x2c9830, Func Offset: 0x6c0
	// Line 376, Address: 0x2c983c, Func Offset: 0x6cc
	// Line 377, Address: 0x2c9840, Func Offset: 0x6d0
	// Line 376, Address: 0x2c9844, Func Offset: 0x6d4
	// Line 377, Address: 0x2c984c, Func Offset: 0x6dc
	// Line 376, Address: 0x2c9850, Func Offset: 0x6e0
	// Line 380, Address: 0x2c9854, Func Offset: 0x6e4
	// Line 376, Address: 0x2c9858, Func Offset: 0x6e8
	// Line 377, Address: 0x2c9860, Func Offset: 0x6f0
	// Line 378, Address: 0x2c9870, Func Offset: 0x700
	// Line 380, Address: 0x2c9874, Func Offset: 0x704
	// Line 378, Address: 0x2c9878, Func Offset: 0x708
	// Line 379, Address: 0x2c987c, Func Offset: 0x70c
	// Line 380, Address: 0x2c9880, Func Offset: 0x710
	// Line 379, Address: 0x2c9884, Func Offset: 0x714
	// Line 382, Address: 0x2c9888, Func Offset: 0x718
	// Line 381, Address: 0x2c988c, Func Offset: 0x71c
	// Line 384, Address: 0x2c9890, Func Offset: 0x720
	// Line 381, Address: 0x2c9894, Func Offset: 0x724
	// Line 382, Address: 0x2c9898, Func Offset: 0x728
	// Line 383, Address: 0x2c98a0, Func Offset: 0x730
	// Line 384, Address: 0x2c98b0, Func Offset: 0x740
	// Line 385, Address: 0x2c98b4, Func Offset: 0x744
	// Line 384, Address: 0x2c98b8, Func Offset: 0x748
	// Line 385, Address: 0x2c98bc, Func Offset: 0x74c
	// Line 387, Address: 0x2c98c0, Func Offset: 0x750
	// Line 385, Address: 0x2c98c4, Func Offset: 0x754
	// Line 386, Address: 0x2c98c8, Func Offset: 0x758
	// Line 387, Address: 0x2c98d8, Func Offset: 0x768
	// Line 388, Address: 0x2c98dc, Func Offset: 0x76c
	// Line 387, Address: 0x2c98e0, Func Offset: 0x770
	// Line 388, Address: 0x2c98e4, Func Offset: 0x774
	// Line 389, Address: 0x2c98e8, Func Offset: 0x778
	// Line 390, Address: 0x2c98f4, Func Offset: 0x784
	// Line 391, Address: 0x2c9904, Func Offset: 0x794
	// Line 392, Address: 0x2c9908, Func Offset: 0x798
	// Line 391, Address: 0x2c990c, Func Offset: 0x79c
	// Line 392, Address: 0x2c9910, Func Offset: 0x7a0
	// Line 397, Address: 0x2c9918, Func Offset: 0x7a8
	// Line 359, Address: 0x2c9920, Func Offset: 0x7b0
	// Line 360, Address: 0x2c9924, Func Offset: 0x7b4
	// Line 397, Address: 0x2c9930, Func Offset: 0x7c0
	// Func End, Address: 0x2c9960, Func Offset: 0x7f0
}

// lightningAddTweaks__FP10zLightning
// Start address: 0x2c9960
void lightningAddTweaks()
{
	// Line 296, Address: 0x2c9960, Func Offset: 0
	// Func End, Address: 0x2c9968, Func Offset: 0x8
}

// lightningStart__FP15zLightningAsset
// Start address: 0x2c9970
zLightning* lightningStart(zLightningAsset* asset)
{
	iSndGroupHandle handle;
	xVec3 pos;
	// Line 231, Address: 0x2c9970, Func Offset: 0
	// Line 232, Address: 0x2c9974, Func Offset: 0x4
	// Line 231, Address: 0x2c9978, Func Offset: 0x8
	// Line 232, Address: 0x2c997c, Func Offset: 0xc
	// Line 231, Address: 0x2c9980, Func Offset: 0x10
	// Line 232, Address: 0x2c9984, Func Offset: 0x14
	// Line 231, Address: 0x2c9988, Func Offset: 0x18
	// Line 232, Address: 0x2c998c, Func Offset: 0x1c
	// Line 231, Address: 0x2c9990, Func Offset: 0x20
	// Line 233, Address: 0x2c9994, Func Offset: 0x24
	// Line 231, Address: 0x2c9998, Func Offset: 0x28
	// Line 234, Address: 0x2c999c, Func Offset: 0x2c
	// Line 231, Address: 0x2c99a0, Func Offset: 0x30
	// Line 232, Address: 0x2c99a8, Func Offset: 0x38
	// Line 233, Address: 0x2c99b4, Func Offset: 0x44
	// Line 232, Address: 0x2c99b8, Func Offset: 0x48
	// Line 233, Address: 0x2c99d0, Func Offset: 0x60
	// Line 234, Address: 0x2c99d4, Func Offset: 0x64
	// Line 235, Address: 0x2c99dc, Func Offset: 0x6c
	// Line 237, Address: 0x2c99e4, Func Offset: 0x74
	// Line 238, Address: 0x2c99f0, Func Offset: 0x80
	// Line 239, Address: 0x2c99fc, Func Offset: 0x8c
	// Line 241, Address: 0x2c9a04, Func Offset: 0x94
	// Line 242, Address: 0x2c9a0c, Func Offset: 0x9c
	// Line 243, Address: 0x2c9a14, Func Offset: 0xa4
	// Line 244, Address: 0x2c9a18, Func Offset: 0xa8
	// Line 245, Address: 0x2c9a1c, Func Offset: 0xac
	// Line 246, Address: 0x2c9a20, Func Offset: 0xb0
	// Line 247, Address: 0x2c9a24, Func Offset: 0xb4
	// Line 248, Address: 0x2c9a28, Func Offset: 0xb8
	// Line 241, Address: 0x2c9a2c, Func Offset: 0xbc
	// Line 242, Address: 0x2c9a30, Func Offset: 0xc0
	// Line 243, Address: 0x2c9a34, Func Offset: 0xc4
	// Line 244, Address: 0x2c9a3c, Func Offset: 0xcc
	// Line 245, Address: 0x2c9a44, Func Offset: 0xd4
	// Line 246, Address: 0x2c9a4c, Func Offset: 0xdc
	// Line 247, Address: 0x2c9a54, Func Offset: 0xe4
	// Line 248, Address: 0x2c9a5c, Func Offset: 0xec
	// Line 249, Address: 0x2c9a68, Func Offset: 0xf8
	// Line 251, Address: 0x2c9a74, Func Offset: 0x104
	// Line 253, Address: 0x2c9a78, Func Offset: 0x108
	// Line 254, Address: 0x2c9a80, Func Offset: 0x110
	// Line 255, Address: 0x2c9a9c, Func Offset: 0x12c
	// Line 254, Address: 0x2c9aa0, Func Offset: 0x130
	// Line 255, Address: 0x2c9ae8, Func Offset: 0x178
	// Line 254, Address: 0x2c9af0, Func Offset: 0x180
	// Line 255, Address: 0x2c9af4, Func Offset: 0x184
	// Line 254, Address: 0x2c9af8, Func Offset: 0x188
	// Line 255, Address: 0x2c9b00, Func Offset: 0x190
	// Line 254, Address: 0x2c9b08, Func Offset: 0x198
	// Line 255, Address: 0x2c9bd0, Func Offset: 0x260
	// Line 257, Address: 0x2c9be0, Func Offset: 0x270
	// Line 258, Address: 0x2c9bf0, Func Offset: 0x280
	// Line 260, Address: 0x2c9bfc, Func Offset: 0x28c
	// Line 258, Address: 0x2c9c00, Func Offset: 0x290
	// Line 260, Address: 0x2c9c04, Func Offset: 0x294
	// Line 261, Address: 0x2c9c48, Func Offset: 0x2d8
	// Func End, Address: 0x2c9c68, Func Offset: 0x2f8
}

// lightningTweakStart__FRC10tweak_info
// Start address: 0x2c9c70
void lightningTweakStart()
{
	xVec3 s;
	xVec3 e;
	// Line 219, Address: 0x2c9c70, Func Offset: 0
	// Line 226, Address: 0x2c9c74, Func Offset: 0x4
	// Line 219, Address: 0x2c9c78, Func Offset: 0x8
	// Line 221, Address: 0x2c9c7c, Func Offset: 0xc
	// Line 219, Address: 0x2c9c80, Func Offset: 0x10
	// Line 221, Address: 0x2c9c84, Func Offset: 0x14
	// Line 223, Address: 0x2c9c8c, Func Offset: 0x1c
	// Line 221, Address: 0x2c9c90, Func Offset: 0x20
	// Line 223, Address: 0x2c9c94, Func Offset: 0x24
	// Line 224, Address: 0x2c9c98, Func Offset: 0x28
	// Line 226, Address: 0x2c9c9c, Func Offset: 0x2c
	// Line 221, Address: 0x2c9ca4, Func Offset: 0x34
	// Line 222, Address: 0x2c9cb0, Func Offset: 0x40
	// Line 221, Address: 0x2c9cb8, Func Offset: 0x48
	// Line 222, Address: 0x2c9cbc, Func Offset: 0x4c
	// Line 221, Address: 0x2c9ccc, Func Offset: 0x5c
	// Line 224, Address: 0x2c9cd0, Func Offset: 0x60
	// Line 226, Address: 0x2c9cd4, Func Offset: 0x64
	// Line 221, Address: 0x2c9cd8, Func Offset: 0x68
	// Line 222, Address: 0x2c9cfc, Func Offset: 0x8c
	// Line 223, Address: 0x2c9d28, Func Offset: 0xb8
	// Line 224, Address: 0x2c9d2c, Func Offset: 0xbc
	// Line 226, Address: 0x2c9d30, Func Offset: 0xc0
	// Line 227, Address: 0x2c9d3c, Func Offset: 0xcc
	// Func End, Address: 0x2c9d48, Func Offset: 0xd8
}

// EventCB__16zLightningWidgetFP5xBaseP5xBaseUiPCfP5xBaseUi
// Start address: 0x2c9d50
void zLightningWidget::EventCB(xBase* to, uint32 toEvent)
{
	zLightningWidget& lightningWidget;
	// Line 181, Address: 0x2c9d50, Func Offset: 0
	// Line 186, Address: 0x2c9d54, Func Offset: 0x4
	// Line 181, Address: 0x2c9d58, Func Offset: 0x8
	// Line 186, Address: 0x2c9d64, Func Offset: 0x14
	// Line 190, Address: 0x2c9d98, Func Offset: 0x48
	// Line 194, Address: 0x2c9da0, Func Offset: 0x50
	// Line 195, Address: 0x2c9dd8, Func Offset: 0x88
	// Line 197, Address: 0x2c9ddc, Func Offset: 0x8c
	// Line 201, Address: 0x2c9de4, Func Offset: 0x94
	// Line 205, Address: 0x2c9df0, Func Offset: 0xa0
	// Line 210, Address: 0x2c9df8, Func Offset: 0xa8
	// Line 211, Address: 0x2c9e30, Func Offset: 0xe0
	// Line 215, Address: 0x2c9e34, Func Offset: 0xe4
	// Func End, Address: 0x2c9e48, Func Offset: 0xf8
}

// Init__16zLightningWidgetFR5xBaseR9xDynAssetUi
// Start address: 0x2c9e50
void zLightningWidget::Init(xBase& data, xDynAsset& asset)
{
	// Line 155, Address: 0x2c9e50, Func Offset: 0
	// Line 157, Address: 0x2c9e64, Func Offset: 0x14
	// Line 158, Address: 0x2c9e94, Func Offset: 0x44
	// Func End, Address: 0x2c9ea8, Func Offset: 0x58
}

