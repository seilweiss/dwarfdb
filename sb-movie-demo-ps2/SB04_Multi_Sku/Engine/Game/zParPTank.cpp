



void zParPTankRender();
void zParPTankExit();
void zParPTankSpawnEffectsParticles(xVec3* pos, xVec3* vel, uint32 count);
void zParPTankEffectsParticleUpdate(zParPTank* zp, float32 dt);
void zParPTankEffectsParticleCreate(zParPTank* zp, uint32 max_particles, void(*update)(zParPTank*, float32));
void zParPTankSteamUpdate(zParPTank* zp, float32 dt);
void zParPTankSteamCreate(zParPTank* zp, uint32 max_particles, void(*update)(zParPTank*, float32));
void zParPTankSpawnSnow(xVec3* pos, xVec3* vel, uint32 count);
void zParPTankSnowUpdate(zParPTank* zp, float32 dt);
void zParPTankSpawnMenuBubbles(xVec3* pos, xVec3* vel, uint32 count);
int32 zParPTankBubblesAvailable();
void zParPTankSpawnBubbles(xVec3* pos, xVec3* vel, uint32 count, float32 scale);
void zParPTankSpawnBubbles(xVec3* pos, xVec3* vel, uint32 count, float32 scale, zParPTank* zp);
void zParPTankBubbleUpdate(zParPTank* zp, float32 dt);
void zParPTankMenuBubbleCreate(zParPTank* zp, uint32 max_particles, void(*update)(zParPTank*, float32));
void zParPTankBubbleCreate(zParPTank* zp, uint32 max_particles, void(*update)(zParPTank*, float32));
void zParPTankSparkleUpdate(zParPTank* zp, float32 dt);
void zParPTankSparkleCreate(zParPTank* zp, uint32 max_particles, void(*update)(zParPTank*, float32));

// zParPTankRender__Fv
// Start address: 0x30e560
void zParPTankRender()
{
	zParPTank* zp;
	int32 renders;
	int32 paused;
	uint32 i;
	// Line 1472, Address: 0x30e560, Func Offset: 0
	// Line 1473, Address: 0x30e570, Func Offset: 0x10
	// Line 1472, Address: 0x30e574, Func Offset: 0x14
	// Line 1473, Address: 0x30e578, Func Offset: 0x18
	// Line 1472, Address: 0x30e57c, Func Offset: 0x1c
	// Line 1475, Address: 0x30e580, Func Offset: 0x20
	// Line 1476, Address: 0x30e588, Func Offset: 0x28
	// Line 1475, Address: 0x30e58c, Func Offset: 0x2c
	// Line 1476, Address: 0x30e590, Func Offset: 0x30
	// Line 1478, Address: 0x30e59c, Func Offset: 0x3c
	// Line 1479, Address: 0x30e5b4, Func Offset: 0x54
	// Line 1480, Address: 0x30e5b8, Func Offset: 0x58
	// Line 1482, Address: 0x30e5c4, Func Offset: 0x64
	// Line 1484, Address: 0x30e5d0, Func Offset: 0x70
	// Line 1486, Address: 0x30e5dc, Func Offset: 0x7c
	// Line 1487, Address: 0x30e5e8, Func Offset: 0x88
	// Line 1488, Address: 0x30e5ec, Func Offset: 0x8c
	// Line 1489, Address: 0x30e608, Func Offset: 0xa8
	// Func End, Address: 0x30e63c, Func Offset: 0xdc
}

// zParPTankExit__Fv
// Start address: 0x30e640
void zParPTankExit()
{
	zParPTank* zp;
	uint32 i;
	RwFrame* tmpframe;
	// Line 1419, Address: 0x30e640, Func Offset: 0
	// Line 1420, Address: 0x30e654, Func Offset: 0x14
	// Line 1421, Address: 0x30e658, Func Offset: 0x18
	// Line 1420, Address: 0x30e65c, Func Offset: 0x1c
	// Line 1421, Address: 0x30e660, Func Offset: 0x20
	// Line 1422, Address: 0x30e670, Func Offset: 0x30
	// Line 1425, Address: 0x30e678, Func Offset: 0x38
	// Line 1426, Address: 0x30e67c, Func Offset: 0x3c
	// Line 1427, Address: 0x30e684, Func Offset: 0x44
	// Line 1429, Address: 0x30e694, Func Offset: 0x54
	// Line 1431, Address: 0x30e69c, Func Offset: 0x5c
	// Line 1441, Address: 0x30e6bc, Func Offset: 0x7c
	// Line 1443, Address: 0x30e6c4, Func Offset: 0x84
	// Line 1445, Address: 0x30e6d4, Func Offset: 0x94
	// Line 1446, Address: 0x30e6d8, Func Offset: 0x98
	// Line 1448, Address: 0x30e6e0, Func Offset: 0xa0
	// Line 1450, Address: 0x30e6f0, Func Offset: 0xb0
	// Line 1451, Address: 0x30e6f4, Func Offset: 0xb4
	// Line 1453, Address: 0x30e6fc, Func Offset: 0xbc
	// Line 1455, Address: 0x30e70c, Func Offset: 0xcc
	// Line 1456, Address: 0x30e710, Func Offset: 0xd0
	// Func End, Address: 0x30e728, Func Offset: 0xe8
}

// zParPTankSpawnEffectsParticles__FP5xVec3P5xVec3Ui
// Start address: 0x30e730
void zParPTankSpawnEffectsParticles(xVec3* pos, xVec3* vel, uint32 count)
{
	zParPTank* zp;
	RpPTankLockStruct posLock;
	RpPTankLockStruct vtx2TexCoordsLock;
	uint32 poslock_base;
	uint32 uvlock_base;
	xVec3* ref_pos;
	RwCamera* camera;
	uint32 i;
	RwTexCoords* uv;
	// Line 1272, Address: 0x30e730, Func Offset: 0
	// Line 1275, Address: 0x30e754, Func Offset: 0x24
	// Line 1276, Address: 0x30e76c, Func Offset: 0x3c
	// Line 1278, Address: 0x30e770, Func Offset: 0x40
	// Line 1284, Address: 0x30e778, Func Offset: 0x48
	// Line 1285, Address: 0x30e78c, Func Offset: 0x5c
	// Line 1287, Address: 0x30e798, Func Offset: 0x68
	// Line 1288, Address: 0x30e7b0, Func Offset: 0x80
	// Line 1295, Address: 0x30e7b8, Func Offset: 0x88
	// Line 1296, Address: 0x30e7bc, Func Offset: 0x8c
	// Line 1295, Address: 0x30e7c0, Func Offset: 0x90
	// Line 1290, Address: 0x30e7c4, Func Offset: 0x94
	// Line 1296, Address: 0x30e7c8, Func Offset: 0x98
	// Line 1297, Address: 0x30e7dc, Func Offset: 0xac
	// Line 1305, Address: 0x30e7e4, Func Offset: 0xb4
	// Line 1325, Address: 0x30e7f0, Func Offset: 0xc0
	// Line 1305, Address: 0x30e7f4, Func Offset: 0xc4
	// Line 1325, Address: 0x30e7f8, Func Offset: 0xc8
	// Line 1305, Address: 0x30e7fc, Func Offset: 0xcc
	// Line 1324, Address: 0x30e800, Func Offset: 0xd0
	// Line 1314, Address: 0x30e804, Func Offset: 0xd4
	// Line 1310, Address: 0x30e80c, Func Offset: 0xdc
	// Line 1319, Address: 0x30e818, Func Offset: 0xe8
	// Line 1320, Address: 0x30e840, Func Offset: 0x110
	// Line 1319, Address: 0x30e848, Func Offset: 0x118
	// Line 1320, Address: 0x30e84c, Func Offset: 0x11c
	// Line 1321, Address: 0x30e868, Func Offset: 0x138
	// Line 1322, Address: 0x30e87c, Func Offset: 0x14c
	// Line 1323, Address: 0x30e88c, Func Offset: 0x15c
	// Line 1324, Address: 0x30e890, Func Offset: 0x160
	// Line 1325, Address: 0x30e894, Func Offset: 0x164
	// Line 1326, Address: 0x30e8a0, Func Offset: 0x170
	// Line 1329, Address: 0x30e8ac, Func Offset: 0x17c
	// Line 1330, Address: 0x30e8b8, Func Offset: 0x188
	// Line 1329, Address: 0x30e8c0, Func Offset: 0x190
	// Line 1330, Address: 0x30e8c4, Func Offset: 0x194
	// Line 1332, Address: 0x30e8d0, Func Offset: 0x1a0
	// Line 1334, Address: 0x30e8d8, Func Offset: 0x1a8
	// Line 1335, Address: 0x30e90c, Func Offset: 0x1dc
	// Line 1313, Address: 0x30e934, Func Offset: 0x204
	// Line 1314, Address: 0x30e93c, Func Offset: 0x20c
	// Line 1313, Address: 0x30e940, Func Offset: 0x210
	// Line 1314, Address: 0x30e944, Func Offset: 0x214
	// Line 1335, Address: 0x30e950, Func Offset: 0x220
	// Func End, Address: 0x30e97c, Func Offset: 0x24c
}

// zParPTankEffectsParticleUpdate__FP9zParPTankf
// Start address: 0x30e980
void zParPTankEffectsParticleUpdate(zParPTank* zp, float32 dt)
{
	RpPTankLockStruct plock;
	RpPTankLockStruct uvlock;
	uint32 plock_base;
	uint32 uvlock_base;
	BubbleData* base_xp;
	BubbleData* xp;
	float32 damp;
	uint32 i;
	RwTexCoords* uv;
	xVec3* pos;
	RwTexCoords* end_uv;
	// Line 1188, Address: 0x30e980, Func Offset: 0
	// Line 1196, Address: 0x30e984, Func Offset: 0x4
	// Line 1188, Address: 0x30e988, Func Offset: 0x8
	// Line 1196, Address: 0x30e98c, Func Offset: 0xc
	// Line 1188, Address: 0x30e990, Func Offset: 0x10
	// Line 1196, Address: 0x30e9ac, Func Offset: 0x2c
	// Line 1194, Address: 0x30e9b0, Func Offset: 0x30
	// Line 1196, Address: 0x30e9b8, Func Offset: 0x38
	// Line 1194, Address: 0x30e9bc, Func Offset: 0x3c
	// Line 1196, Address: 0x30e9c0, Func Offset: 0x40
	// Line 1203, Address: 0x30e9d8, Func Offset: 0x58
	// Line 1204, Address: 0x30e9e8, Func Offset: 0x68
	// Line 1214, Address: 0x30e9fc, Func Offset: 0x7c
	// Line 1209, Address: 0x30ea00, Func Offset: 0x80
	// Line 1214, Address: 0x30ea04, Func Offset: 0x84
	// Line 1208, Address: 0x30ea08, Func Offset: 0x88
	// Line 1209, Address: 0x30ea0c, Func Offset: 0x8c
	// Line 1214, Address: 0x30ea10, Func Offset: 0x90
	// Line 1215, Address: 0x30ea1c, Func Offset: 0x9c
	// Line 1261, Address: 0x30ea20, Func Offset: 0xa0
	// Line 1231, Address: 0x30ea38, Func Offset: 0xb8
	// Line 1261, Address: 0x30ea3c, Func Offset: 0xbc
	// Line 1231, Address: 0x30ea40, Func Offset: 0xc0
	// Line 1261, Address: 0x30ea44, Func Offset: 0xc4
	// Line 1223, Address: 0x30ea48, Func Offset: 0xc8
	// Line 1235, Address: 0x30ea4c, Func Offset: 0xcc
	// Line 1261, Address: 0x30ea54, Func Offset: 0xd4
	// Line 1219, Address: 0x30ea5c, Func Offset: 0xdc
	// Line 1261, Address: 0x30ea60, Func Offset: 0xe0
	// Line 1223, Address: 0x30ea6c, Func Offset: 0xec
	// Line 1261, Address: 0x30ea74, Func Offset: 0xf4
	// Line 1224, Address: 0x30ea80, Func Offset: 0x100
	// Line 1261, Address: 0x30ea88, Func Offset: 0x108
	// Line 1225, Address: 0x30ea94, Func Offset: 0x114
	// Line 1261, Address: 0x30ea9c, Func Offset: 0x11c
	// Line 1227, Address: 0x30eaa4, Func Offset: 0x124
	// Line 1261, Address: 0x30eaa8, Func Offset: 0x128
	// Line 1228, Address: 0x30eab0, Func Offset: 0x130
	// Line 1261, Address: 0x30eab4, Func Offset: 0x134
	// Line 1229, Address: 0x30eabc, Func Offset: 0x13c
	// Line 1261, Address: 0x30eac0, Func Offset: 0x140
	// Line 1231, Address: 0x30eac8, Func Offset: 0x148
	// Line 1261, Address: 0x30eacc, Func Offset: 0x14c
	// Line 1232, Address: 0x30ead4, Func Offset: 0x154
	// Line 1261, Address: 0x30ead8, Func Offset: 0x158
	// Line 1235, Address: 0x30eae0, Func Offset: 0x160
	// Line 1261, Address: 0x30eae4, Func Offset: 0x164
	// Line 1235, Address: 0x30eaf0, Func Offset: 0x170
	// Line 1261, Address: 0x30eaf4, Func Offset: 0x174
	// Line 1258, Address: 0x30eafc, Func Offset: 0x17c
	// Line 1261, Address: 0x30eb00, Func Offset: 0x180
	// Line 1263, Address: 0x30eb38, Func Offset: 0x1b8
	// Line 1265, Address: 0x30eb40, Func Offset: 0x1c0
	// Line 1267, Address: 0x30eb44, Func Offset: 0x1c4
	// Line 1265, Address: 0x30eb48, Func Offset: 0x1c8
	// Line 1267, Address: 0x30eb4c, Func Offset: 0x1cc
	// Line 1265, Address: 0x30eb50, Func Offset: 0x1d0
	// Line 1267, Address: 0x30eb54, Func Offset: 0x1d4
	// Line 1265, Address: 0x30eb58, Func Offset: 0x1d8
	// Line 1267, Address: 0x30eb84, Func Offset: 0x204
	// Line 1269, Address: 0x30eb98, Func Offset: 0x218
	// Line 1239, Address: 0x30ebac, Func Offset: 0x22c
	// Line 1269, Address: 0x30ebb4, Func Offset: 0x234
	// Line 1241, Address: 0x30ebe4, Func Offset: 0x264
	// Line 1269, Address: 0x30ebe8, Func Offset: 0x268
	// Line 1246, Address: 0x30ec10, Func Offset: 0x290
	// Line 1269, Address: 0x30ec14, Func Offset: 0x294
	// Line 1249, Address: 0x30ec34, Func Offset: 0x2b4
	// Line 1269, Address: 0x30ec38, Func Offset: 0x2b8
	// Func End, Address: 0x30ec9c, Func Offset: 0x31c
}

// zParPTankEffectsParticleCreate__FP9zParPTankUiPFP9zParPTankf_v
// Start address: 0x30eca0
void zParPTankEffectsParticleCreate(zParPTank* zp, uint32 max_particles, void(*update)(zParPTank*, float32))
{
	RwTexture* tex;
	RwFrame* frame;
	// Line 1147, Address: 0x30eca0, Func Offset: 0
	// Line 1155, Address: 0x30eca4, Func Offset: 0x4
	// Line 1147, Address: 0x30eca8, Func Offset: 0x8
	// Line 1149, Address: 0x30ecc8, Func Offset: 0x28
	// Line 1150, Address: 0x30eccc, Func Offset: 0x2c
	// Line 1152, Address: 0x30ecd0, Func Offset: 0x30
	// Line 1155, Address: 0x30ecd4, Func Offset: 0x34
	// Line 1153, Address: 0x30ecd8, Func Offset: 0x38
	// Line 1155, Address: 0x30ecdc, Func Offset: 0x3c
	// Line 1156, Address: 0x30ece8, Func Offset: 0x48
	// Line 1158, Address: 0x30ecf0, Func Offset: 0x50
	// Line 1163, Address: 0x30ecf4, Func Offset: 0x54
	// Line 1158, Address: 0x30ecf8, Func Offset: 0x58
	// Line 1163, Address: 0x30ecfc, Func Offset: 0x5c
	// Line 1158, Address: 0x30ed00, Func Offset: 0x60
	// Line 1163, Address: 0x30ed0c, Func Offset: 0x6c
	// Line 1160, Address: 0x30ed10, Func Offset: 0x70
	// Line 1163, Address: 0x30ed20, Func Offset: 0x80
	// Line 1169, Address: 0x30ed28, Func Offset: 0x88
	// Line 1170, Address: 0x30ed30, Func Offset: 0x90
	// Line 1172, Address: 0x30ed78, Func Offset: 0xd8
	// Line 1173, Address: 0x30ed84, Func Offset: 0xe4
	// Line 1174, Address: 0x30ede8, Func Offset: 0x148
	// Line 1173, Address: 0x30edec, Func Offset: 0x14c
	// Line 1174, Address: 0x30edf0, Func Offset: 0x150
	// Line 1173, Address: 0x30edf4, Func Offset: 0x154
	// Line 1174, Address: 0x30edf8, Func Offset: 0x158
	// Line 1173, Address: 0x30ee00, Func Offset: 0x160
	// Line 1174, Address: 0x30ee14, Func Offset: 0x174
	// Line 1175, Address: 0x30ee48, Func Offset: 0x1a8
	// Line 1176, Address: 0x30ee60, Func Offset: 0x1c0
	// Line 1177, Address: 0x30ee74, Func Offset: 0x1d4
	// Line 1183, Address: 0x30ee78, Func Offset: 0x1d8
	// Line 1176, Address: 0x30ee80, Func Offset: 0x1e0
	// Line 1177, Address: 0x30eebc, Func Offset: 0x21c
	// Line 1183, Address: 0x30eed0, Func Offset: 0x230
	// Line 1184, Address: 0x30eee4, Func Offset: 0x244
	// Line 1185, Address: 0x30eee8, Func Offset: 0x248
	// Func End, Address: 0x30ef0c, Func Offset: 0x26c
}

// zParPTankSteamUpdate__FP9zParPTankf
// Start address: 0x30ef10
void zParPTankSteamUpdate(zParPTank* zp, float32 dt)
{
	RpPTankLockStruct plock;
	RpPTankLockStruct uvlock;
	uint32 plock_base;
	uint32 uvlock_base;
	uint32 i;
	RwTexCoords* uv;
	RwTexCoords* end_uv;
	// Line 1036, Address: 0x30ef10, Func Offset: 0
	// Line 1037, Address: 0x30ef14, Func Offset: 0x4
	// Line 1036, Address: 0x30ef1c, Func Offset: 0xc
	// Line 1041, Address: 0x30ef24, Func Offset: 0x14
	// Line 1037, Address: 0x30ef28, Func Offset: 0x18
	// Line 1041, Address: 0x30ef34, Func Offset: 0x24
	// Line 1037, Address: 0x30ef38, Func Offset: 0x28
	// Line 1041, Address: 0x30ef6c, Func Offset: 0x5c
	// Line 1039, Address: 0x30ef70, Func Offset: 0x60
	// Line 1041, Address: 0x30ef74, Func Offset: 0x64
	// Line 1039, Address: 0x30ef78, Func Offset: 0x68
	// Line 1041, Address: 0x30ef7c, Func Offset: 0x6c
	// Line 1089, Address: 0x30ef88, Func Offset: 0x78
	// Line 1047, Address: 0x30efa8, Func Offset: 0x98
	// Line 1089, Address: 0x30efac, Func Offset: 0x9c
	// Line 1057, Address: 0x30efcc, Func Offset: 0xbc
	// Line 1060, Address: 0x30efd0, Func Offset: 0xc0
	// Line 1057, Address: 0x30efd4, Func Offset: 0xc4
	// Line 1089, Address: 0x30efd8, Func Offset: 0xc8
	// Line 1060, Address: 0x30efdc, Func Offset: 0xcc
	// Line 1089, Address: 0x30efe0, Func Offset: 0xd0
	// Line 1057, Address: 0x30efec, Func Offset: 0xdc
	// Line 1089, Address: 0x30eff0, Func Offset: 0xe0
	// Line 1058, Address: 0x30eff8, Func Offset: 0xe8
	// Line 1089, Address: 0x30effc, Func Offset: 0xec
	// Line 1060, Address: 0x30f004, Func Offset: 0xf4
	// Line 1089, Address: 0x30f008, Func Offset: 0xf8
	// Line 1079, Address: 0x30f044, Func Offset: 0x134
	// Line 1089, Address: 0x30f048, Func Offset: 0x138
	// Line 1079, Address: 0x30f058, Func Offset: 0x148
	// Line 1089, Address: 0x30f05c, Func Offset: 0x14c
	// Line 1063, Address: 0x30f088, Func Offset: 0x178
	// Line 1089, Address: 0x30f090, Func Offset: 0x180
	// Line 1065, Address: 0x30f0c0, Func Offset: 0x1b0
	// Line 1089, Address: 0x30f0c4, Func Offset: 0x1b4
	// Func End, Address: 0x30f118, Func Offset: 0x208
}

// zParPTankSteamCreate__FP9zParPTankUiPFP9zParPTankf_v
// Start address: 0x30f120
void zParPTankSteamCreate(zParPTank* zp, uint32 max_particles, void(*update)(zParPTank*, float32))
{
	RwTexture* tex;
	RwFrame* frame;
	// Line 999, Address: 0x30f120, Func Offset: 0
	// Line 1007, Address: 0x30f124, Func Offset: 0x4
	// Line 999, Address: 0x30f128, Func Offset: 0x8
	// Line 1001, Address: 0x30f148, Func Offset: 0x28
	// Line 1002, Address: 0x30f14c, Func Offset: 0x2c
	// Line 1004, Address: 0x30f150, Func Offset: 0x30
	// Line 1007, Address: 0x30f154, Func Offset: 0x34
	// Line 1005, Address: 0x30f158, Func Offset: 0x38
	// Line 1007, Address: 0x30f15c, Func Offset: 0x3c
	// Line 1008, Address: 0x30f168, Func Offset: 0x48
	// Line 1010, Address: 0x30f170, Func Offset: 0x50
	// Line 1015, Address: 0x30f174, Func Offset: 0x54
	// Line 1010, Address: 0x30f178, Func Offset: 0x58
	// Line 1015, Address: 0x30f17c, Func Offset: 0x5c
	// Line 1010, Address: 0x30f180, Func Offset: 0x60
	// Line 1015, Address: 0x30f18c, Func Offset: 0x6c
	// Line 1012, Address: 0x30f190, Func Offset: 0x70
	// Line 1015, Address: 0x30f1a0, Func Offset: 0x80
	// Line 1022, Address: 0x30f1a8, Func Offset: 0x88
	// Line 1023, Address: 0x30f1b0, Func Offset: 0x90
	// Line 1024, Address: 0x30f1f8, Func Offset: 0xd8
	// Line 1026, Address: 0x30f204, Func Offset: 0xe4
	// Line 1027, Address: 0x30f268, Func Offset: 0x148
	// Line 1026, Address: 0x30f26c, Func Offset: 0x14c
	// Line 1027, Address: 0x30f270, Func Offset: 0x150
	// Line 1026, Address: 0x30f274, Func Offset: 0x154
	// Line 1027, Address: 0x30f278, Func Offset: 0x158
	// Line 1026, Address: 0x30f280, Func Offset: 0x160
	// Line 1027, Address: 0x30f294, Func Offset: 0x174
	// Line 1028, Address: 0x30f2c8, Func Offset: 0x1a8
	// Line 1029, Address: 0x30f2e0, Func Offset: 0x1c0
	// Line 1030, Address: 0x30f2f4, Func Offset: 0x1d4
	// Line 1029, Address: 0x30f2f8, Func Offset: 0x1d8
	// Line 1030, Address: 0x30f334, Func Offset: 0x214
	// Line 1032, Address: 0x30f348, Func Offset: 0x228
	// Line 1033, Address: 0x30f34c, Func Offset: 0x22c
	// Func End, Address: 0x30f370, Func Offset: 0x250
}

// zParPTankSpawnSnow__FP5xVec3P5xVec3Ui
// Start address: 0x30f370
void zParPTankSpawnSnow(xVec3* pos, xVec3* vel, uint32 count)
{
	uint32 old_size;
	snow_particle_data* it;
	snow_particle_data* end;
	// Line 764, Address: 0x30f370, Func Offset: 0
	// Line 765, Address: 0x30f390, Func Offset: 0x20
	// Line 770, Address: 0x30f3a4, Func Offset: 0x34
	// Line 769, Address: 0x30f3a8, Func Offset: 0x38
	// Line 770, Address: 0x30f3ac, Func Offset: 0x3c
	// Line 771, Address: 0x30f3b8, Func Offset: 0x48
	// Line 776, Address: 0x30f3c8, Func Offset: 0x58
	// Line 774, Address: 0x30f3cc, Func Offset: 0x5c
	// Line 776, Address: 0x30f3d0, Func Offset: 0x60
	// Line 774, Address: 0x30f3dc, Func Offset: 0x6c
	// Line 776, Address: 0x30f3e0, Func Offset: 0x70
	// Line 777, Address: 0x30f3f4, Func Offset: 0x84
	// Line 779, Address: 0x30f3fc, Func Offset: 0x8c
	// Line 780, Address: 0x30f414, Func Offset: 0xa4
	// Line 781, Address: 0x30f42c, Func Offset: 0xbc
	// Line 782, Address: 0x30f430, Func Offset: 0xc0
	// Line 783, Address: 0x30f490, Func Offset: 0x120
	// Line 784, Address: 0x30f4d4, Func Offset: 0x164
	// Line 783, Address: 0x30f4d8, Func Offset: 0x168
	// Line 784, Address: 0x30f4e8, Func Offset: 0x178
	// Line 785, Address: 0x30f504, Func Offset: 0x194
	// Func End, Address: 0x30f520, Func Offset: 0x1b0
}

// zParPTankSnowUpdate__FP9zParPTankf
// Start address: 0x30f520
void zParPTankSnowUpdate(zParPTank* zp, float32 dt)
{
	snow_particle_data* end;
	float32 fadein_life;
	float32 fadeout_life;
	float32 ilife;
	float32 ifadein;
	float32 ifadeout;
	snow_particle_data* it;
	// Line 695, Address: 0x30f520, Func Offset: 0
	// Line 699, Address: 0x30f524, Func Offset: 0x4
	// Line 695, Address: 0x30f528, Func Offset: 0x8
	// Line 699, Address: 0x30f52c, Func Offset: 0xc
	// Line 695, Address: 0x30f530, Func Offset: 0x10
	// Line 699, Address: 0x30f534, Func Offset: 0x14
	// Line 695, Address: 0x30f538, Func Offset: 0x18
	// Line 701, Address: 0x30f544, Func Offset: 0x24
	// Line 695, Address: 0x30f548, Func Offset: 0x28
	// Line 701, Address: 0x30f54c, Func Offset: 0x2c
	// Line 695, Address: 0x30f550, Func Offset: 0x30
	// Line 696, Address: 0x30f570, Func Offset: 0x50
	// Line 695, Address: 0x30f578, Func Offset: 0x58
	// Line 698, Address: 0x30f580, Func Offset: 0x60
	// Line 696, Address: 0x30f584, Func Offset: 0x64
	// Line 698, Address: 0x30f588, Func Offset: 0x68
	// Line 699, Address: 0x30f594, Func Offset: 0x74
	// Line 700, Address: 0x30f598, Func Offset: 0x78
	// Line 698, Address: 0x30f5a0, Func Offset: 0x80
	// Line 696, Address: 0x30f5a4, Func Offset: 0x84
	// Line 702, Address: 0x30f5a8, Func Offset: 0x88
	// Line 696, Address: 0x30f5ac, Func Offset: 0x8c
	// Line 702, Address: 0x30f5b0, Func Offset: 0x90
	// Line 696, Address: 0x30f5b4, Func Offset: 0x94
	// Line 709, Address: 0x30f5b8, Func Offset: 0x98
	// Line 700, Address: 0x30f5c0, Func Offset: 0xa0
	// Line 709, Address: 0x30f5c4, Func Offset: 0xa4
	// Line 710, Address: 0x30f5d4, Func Offset: 0xb4
	// Line 701, Address: 0x30f5e0, Func Offset: 0xc0
	// Line 702, Address: 0x30f5e4, Func Offset: 0xc4
	// Line 701, Address: 0x30f5ec, Func Offset: 0xcc
	// Line 702, Address: 0x30f5f0, Func Offset: 0xd0
	// Line 710, Address: 0x30f5f4, Func Offset: 0xd4
	// Line 711, Address: 0x30f644, Func Offset: 0x124
	// Line 713, Address: 0x30f658, Func Offset: 0x138
	// Line 714, Address: 0x30f65c, Func Offset: 0x13c
	// Line 713, Address: 0x30f664, Func Offset: 0x144
	// Line 714, Address: 0x30f668, Func Offset: 0x148
	// Line 716, Address: 0x30f674, Func Offset: 0x154
	// Line 717, Address: 0x30f6d4, Func Offset: 0x1b4
	// Line 718, Address: 0x30f6dc, Func Offset: 0x1bc
	// Line 721, Address: 0x30f6e0, Func Offset: 0x1c0
	// Line 722, Address: 0x30f754, Func Offset: 0x234
	// Line 724, Address: 0x30f79c, Func Offset: 0x27c
	// Line 725, Address: 0x30f938, Func Offset: 0x418
	// Line 728, Address: 0x30f948, Func Offset: 0x428
	// Line 732, Address: 0x30f950, Func Offset: 0x430
	// Line 733, Address: 0x30f960, Func Offset: 0x440
	// Line 734, Address: 0x30f96c, Func Offset: 0x44c
	// Line 735, Address: 0x30f9d8, Func Offset: 0x4b8
	// Line 736, Address: 0x30f9e4, Func Offset: 0x4c4
	// Line 738, Address: 0x30fa48, Func Offset: 0x528
	// Line 741, Address: 0x30fa58, Func Offset: 0x538
	// Line 746, Address: 0x30fa68, Func Offset: 0x548
	// Line 741, Address: 0x30fa6c, Func Offset: 0x54c
	// Line 742, Address: 0x30fa70, Func Offset: 0x550
	// Line 745, Address: 0x30fa74, Func Offset: 0x554
	// Line 746, Address: 0x30fa7c, Func Offset: 0x55c
	// Line 745, Address: 0x30fa80, Func Offset: 0x560
	// Line 741, Address: 0x30fa84, Func Offset: 0x564
	// Line 742, Address: 0x30fa90, Func Offset: 0x570
	// Line 745, Address: 0x30faa0, Func Offset: 0x580
	// Line 746, Address: 0x30fab4, Func Offset: 0x594
	// Line 752, Address: 0x30facc, Func Offset: 0x5ac
	// Line 753, Address: 0x30fad0, Func Offset: 0x5b0
	// Line 754, Address: 0x30fad4, Func Offset: 0x5b4
	// Line 757, Address: 0x30fae0, Func Offset: 0x5c0
	// Line 759, Address: 0x30fb40, Func Offset: 0x620
	// Line 760, Address: 0x30fb68, Func Offset: 0x648
	// Func End, Address: 0x30fba4, Func Offset: 0x684
}

// zParPTankSpawnMenuBubbles__FP5xVec3P5xVec3Ui
// Start address: 0x30fbb0
void zParPTankSpawnMenuBubbles(xVec3* pos, xVec3* vel, uint32 count)
{
	// Line 559, Address: 0x30fbb0, Func Offset: 0
	// Func End, Address: 0x30fbc4, Func Offset: 0x14
}

// zParPTankBubblesAvailable__Fv
// Start address: 0x30fbd0
int32 zParPTankBubblesAvailable()
{
	// Line 552, Address: 0x30fbd0, Func Offset: 0
	// Line 553, Address: 0x30fbd4, Func Offset: 0x4
	// Line 554, Address: 0x30fbdc, Func Offset: 0xc
	// Func End, Address: 0x30fbe4, Func Offset: 0x14
}

// zParPTankSpawnBubbles__FP5xVec3P5xVec3Uif
// Start address: 0x30fbf0
void zParPTankSpawnBubbles(xVec3* pos, xVec3* vel, uint32 count, float32 scale)
{
	// Line 544, Address: 0x30fbf0, Func Offset: 0
	// Line 545, Address: 0x30fc14, Func Offset: 0x24
	// Line 548, Address: 0x30fc24, Func Offset: 0x34
	// Line 549, Address: 0x30fc3c, Func Offset: 0x4c
	// Func End, Address: 0x30fc58, Func Offset: 0x68
}

// zParPTankSpawnBubbles__FP5xVec3P5xVec3UifP9zParPTank
// Start address: 0x30fc60
void zParPTankSpawnBubbles(xVec3* pos, xVec3* vel, uint32 count, float32 scale, zParPTank* zp)
{
	RpPTankLockStruct plock;
	RpPTankLockStruct clock;
	RpPTankLockStruct slock;
	RpPTankLockStruct uvlock;
	uint32 plock_base;
	uint32 clock_base;
	uint32 slock_base;
	uint32 uvlock_base;
	xVec3* ref_pos;
	RwCamera* camera;
	uint32 i;
	RwTexCoords* uv;
	RwV2d* size;
	// Line 452, Address: 0x30fc60, Func Offset: 0
	// Line 453, Address: 0x30fcac, Func Offset: 0x4c
	// Line 456, Address: 0x30fccc, Func Offset: 0x6c
	// Line 457, Address: 0x30fcd8, Func Offset: 0x78
	// Line 460, Address: 0x30fcdc, Func Offset: 0x7c
	// Line 463, Address: 0x30fce4, Func Offset: 0x84
	// Line 470, Address: 0x30fcfc, Func Offset: 0x9c
	// Line 471, Address: 0x30fd10, Func Offset: 0xb0
	// Line 473, Address: 0x30fd1c, Func Offset: 0xbc
	// Line 474, Address: 0x30fd30, Func Offset: 0xd0
	// Line 476, Address: 0x30fd3c, Func Offset: 0xdc
	// Line 477, Address: 0x30fd50, Func Offset: 0xf0
	// Line 479, Address: 0x30fd5c, Func Offset: 0xfc
	// Line 480, Address: 0x30fd74, Func Offset: 0x114
	// Line 483, Address: 0x30fd7c, Func Offset: 0x11c
	// Line 491, Address: 0x30fd80, Func Offset: 0x120
	// Line 483, Address: 0x30fd84, Func Offset: 0x124
	// Line 484, Address: 0x30fd88, Func Offset: 0x128
	// Line 490, Address: 0x30fd90, Func Offset: 0x130
	// Line 485, Address: 0x30fd98, Func Offset: 0x138
	// Line 491, Address: 0x30fda0, Func Offset: 0x140
	// Line 492, Address: 0x30fdb4, Func Offset: 0x154
	// Line 495, Address: 0x30fdbc, Func Offset: 0x15c
	// Line 499, Address: 0x30fdf8, Func Offset: 0x198
	// Line 506, Address: 0x30fe04, Func Offset: 0x1a4
	// Line 508, Address: 0x30fe08, Func Offset: 0x1a8
	// Line 511, Address: 0x30fe20, Func Offset: 0x1c0
	// Line 515, Address: 0x30fe24, Func Offset: 0x1c4
	// Line 517, Address: 0x30fe28, Func Offset: 0x1c8
	// Line 516, Address: 0x30fe2c, Func Offset: 0x1cc
	// Line 508, Address: 0x30fe34, Func Offset: 0x1d4
	// Line 510, Address: 0x30fe4c, Func Offset: 0x1ec
	// Line 511, Address: 0x30fe70, Func Offset: 0x210
	// Line 513, Address: 0x30fe80, Func Offset: 0x220
	// Line 514, Address: 0x30fe94, Func Offset: 0x234
	// Line 515, Address: 0x30fe98, Func Offset: 0x238
	// Line 516, Address: 0x30fe9c, Func Offset: 0x23c
	// Line 517, Address: 0x30fea8, Func Offset: 0x248
	// Line 519, Address: 0x30feac, Func Offset: 0x24c
	// Line 520, Address: 0x30fec0, Func Offset: 0x260
	// Line 522, Address: 0x30ff20, Func Offset: 0x2c0
	// Line 520, Address: 0x30ff24, Func Offset: 0x2c4
	// Line 522, Address: 0x30ff38, Func Offset: 0x2d8
	// Line 534, Address: 0x30ff6c, Func Offset: 0x30c
	// Line 535, Address: 0x30ff78, Func Offset: 0x318
	// Line 534, Address: 0x30ff80, Func Offset: 0x320
	// Line 535, Address: 0x30ff84, Func Offset: 0x324
	// Line 537, Address: 0x30ff90, Func Offset: 0x330
	// Line 539, Address: 0x30ff98, Func Offset: 0x338
	// Line 540, Address: 0x30ffcc, Func Offset: 0x36c
	// Line 503, Address: 0x30ffe0, Func Offset: 0x380
	// Line 540, Address: 0x30ffe4, Func Offset: 0x384
	// Line 503, Address: 0x30ffe8, Func Offset: 0x388
	// Line 540, Address: 0x30ffec, Func Offset: 0x38c
	// Line 503, Address: 0x30fffc, Func Offset: 0x39c
	// Line 502, Address: 0x310000, Func Offset: 0x3a0
	// Line 503, Address: 0x310008, Func Offset: 0x3a8
	// Line 502, Address: 0x31000c, Func Offset: 0x3ac
	// Line 503, Address: 0x310010, Func Offset: 0x3b0
	// Line 540, Address: 0x31001c, Func Offset: 0x3bc
	// Func End, Address: 0x310064, Func Offset: 0x404
}

// zParPTankBubbleUpdate__FP9zParPTankf
// Start address: 0x310070
void zParPTankBubbleUpdate(zParPTank* zp, float32 dt)
{
	RpPTankLockStruct plock;
	RpPTankLockStruct clock;
	RpPTankLockStruct slock;
	RpPTankLockStruct uvlock;
	uint32 plock_base;
	uint32 clock_base;
	uint32 slock_base;
	uint32 uvlock_base;
	float32 damp;
	BubbleData* base_xp;
	BubbleData* xp;
	uint32 i;
	xVec3* pos;
	RwTexCoords* uv;
	RwRGBA* color;
	RwTexCoords* uv;
	RwTexCoords* end_uv;
	// Line 341, Address: 0x310070, Func Offset: 0
	// Line 344, Address: 0x310074, Func Offset: 0x4
	// Line 341, Address: 0x310078, Func Offset: 0x8
	// Line 344, Address: 0x31007c, Func Offset: 0xc
	// Line 341, Address: 0x310080, Func Offset: 0x10
	// Line 344, Address: 0x310084, Func Offset: 0x14
	// Line 341, Address: 0x310088, Func Offset: 0x18
	// Line 344, Address: 0x3100b8, Func Offset: 0x48
	// Line 345, Address: 0x3100c4, Func Offset: 0x54
	// Line 346, Address: 0x3100d8, Func Offset: 0x68
	// Line 347, Address: 0x3100ec, Func Offset: 0x7c
	// Line 357, Address: 0x310100, Func Offset: 0x90
	// Line 352, Address: 0x310104, Func Offset: 0x94
	// Line 357, Address: 0x310108, Func Offset: 0x98
	// Line 353, Address: 0x31010c, Func Offset: 0x9c
	// Line 357, Address: 0x310110, Func Offset: 0xa0
	// Line 354, Address: 0x310118, Func Offset: 0xa8
	// Line 357, Address: 0x31011c, Func Offset: 0xac
	// Line 354, Address: 0x310120, Func Offset: 0xb0
	// Line 355, Address: 0x310124, Func Offset: 0xb4
	// Line 357, Address: 0x310128, Func Offset: 0xb8
	// Line 359, Address: 0x310130, Func Offset: 0xc0
	// Line 362, Address: 0x310148, Func Offset: 0xd8
	// Line 360, Address: 0x31014c, Func Offset: 0xdc
	// Line 362, Address: 0x310150, Func Offset: 0xe0
	// Line 364, Address: 0x31016c, Func Offset: 0xfc
	// Line 378, Address: 0x310170, Func Offset: 0x100
	// Line 368, Address: 0x310174, Func Offset: 0x104
	// Line 378, Address: 0x310178, Func Offset: 0x108
	// Line 364, Address: 0x310180, Func Offset: 0x110
	// Line 366, Address: 0x310188, Func Offset: 0x118
	// Line 368, Address: 0x31018c, Func Offset: 0x11c
	// Line 369, Address: 0x3101a0, Func Offset: 0x130
	// Line 370, Address: 0x3101b4, Func Offset: 0x144
	// Line 372, Address: 0x3101c8, Func Offset: 0x158
	// Line 373, Address: 0x3101d4, Func Offset: 0x164
	// Line 374, Address: 0x3101dc, Func Offset: 0x16c
	// Line 375, Address: 0x3101e4, Func Offset: 0x174
	// Line 377, Address: 0x3101f0, Func Offset: 0x180
	// Line 378, Address: 0x3101f4, Func Offset: 0x184
	// Line 383, Address: 0x310204, Func Offset: 0x194
	// Line 386, Address: 0x310224, Func Offset: 0x1b4
	// Line 389, Address: 0x310240, Func Offset: 0x1d0
	// Line 391, Address: 0x31025c, Func Offset: 0x1ec
	// Line 396, Address: 0x3102b8, Func Offset: 0x248
	// Line 403, Address: 0x310300, Func Offset: 0x290
	// Line 433, Address: 0x310324, Func Offset: 0x2b4
	// Line 437, Address: 0x310330, Func Offset: 0x2c0
	// Line 434, Address: 0x310334, Func Offset: 0x2c4
	// Line 435, Address: 0x310338, Func Offset: 0x2c8
	// Line 436, Address: 0x31033c, Func Offset: 0x2cc
	// Line 434, Address: 0x310340, Func Offset: 0x2d0
	// Line 433, Address: 0x310344, Func Offset: 0x2d4
	// Line 434, Address: 0x310348, Func Offset: 0x2d8
	// Line 433, Address: 0x31034c, Func Offset: 0x2dc
	// Line 435, Address: 0x310350, Func Offset: 0x2e0
	// Line 434, Address: 0x310354, Func Offset: 0x2e4
	// Line 435, Address: 0x310358, Func Offset: 0x2e8
	// Line 434, Address: 0x31035c, Func Offset: 0x2ec
	// Line 436, Address: 0x310360, Func Offset: 0x2f0
	// Line 435, Address: 0x310364, Func Offset: 0x2f4
	// Line 436, Address: 0x310368, Func Offset: 0x2f8
	// Line 435, Address: 0x31036c, Func Offset: 0x2fc
	// Line 436, Address: 0x310370, Func Offset: 0x300
	// Line 437, Address: 0x310378, Func Offset: 0x308
	// Line 439, Address: 0x310388, Func Offset: 0x318
	// Line 441, Address: 0x310390, Func Offset: 0x320
	// Line 449, Address: 0x3103c4, Func Offset: 0x354
	// Line 379, Address: 0x3103cc, Func Offset: 0x35c
	// Line 449, Address: 0x31042c, Func Offset: 0x3bc
	// Line 379, Address: 0x310434, Func Offset: 0x3c4
	// Line 380, Address: 0x310474, Func Offset: 0x404
	// Line 449, Address: 0x310478, Func Offset: 0x408
	// Line 388, Address: 0x310484, Func Offset: 0x414
	// Line 449, Address: 0x3104f0, Func Offset: 0x480
	// Line 389, Address: 0x3104f4, Func Offset: 0x484
	// Line 449, Address: 0x310504, Func Offset: 0x494
	// Line 396, Address: 0x31050c, Func Offset: 0x49c
	// Line 449, Address: 0x310514, Func Offset: 0x4a4
	// Line 396, Address: 0x31051c, Func Offset: 0x4ac
	// Line 449, Address: 0x310558, Func Offset: 0x4e8
	// Line 407, Address: 0x31057c, Func Offset: 0x50c
	// Line 449, Address: 0x310580, Func Offset: 0x510
	// Line 409, Address: 0x3105ac, Func Offset: 0x53c
	// Line 449, Address: 0x3105b0, Func Offset: 0x540
	// Line 411, Address: 0x3105e8, Func Offset: 0x578
	// Line 449, Address: 0x3105ec, Func Offset: 0x57c
	// Line 414, Address: 0x310618, Func Offset: 0x5a8
	// Line 449, Address: 0x31061c, Func Offset: 0x5ac
	// Line 418, Address: 0x310648, Func Offset: 0x5d8
	// Line 449, Address: 0x31064c, Func Offset: 0x5dc
	// Line 421, Address: 0x31066c, Func Offset: 0x5fc
	// Line 449, Address: 0x310670, Func Offset: 0x600
	// Func End, Address: 0x31071c, Func Offset: 0x6ac
}

// zParPTankMenuBubbleCreate__FP9zParPTankUiPFP9zParPTankf_v
// Start address: 0x310720
void zParPTankMenuBubbleCreate(zParPTank* zp, uint32 max_particles, void(*update)(zParPTank*, float32))
{
	RwTexture* tex;
	RwFrame* frame;
	// Line 302, Address: 0x310720, Func Offset: 0
	// Line 310, Address: 0x310724, Func Offset: 0x4
	// Line 302, Address: 0x310728, Func Offset: 0x8
	// Line 304, Address: 0x310738, Func Offset: 0x18
	// Line 305, Address: 0x31073c, Func Offset: 0x1c
	// Line 307, Address: 0x310740, Func Offset: 0x20
	// Line 310, Address: 0x310744, Func Offset: 0x24
	// Line 308, Address: 0x310748, Func Offset: 0x28
	// Line 310, Address: 0x31074c, Func Offset: 0x2c
	// Line 311, Address: 0x310758, Func Offset: 0x38
	// Line 313, Address: 0x310760, Func Offset: 0x40
	// Line 318, Address: 0x310764, Func Offset: 0x44
	// Line 313, Address: 0x310768, Func Offset: 0x48
	// Line 318, Address: 0x31076c, Func Offset: 0x4c
	// Line 313, Address: 0x310770, Func Offset: 0x50
	// Line 318, Address: 0x31077c, Func Offset: 0x5c
	// Line 327, Address: 0x310788, Func Offset: 0x68
	// Line 328, Address: 0x310790, Func Offset: 0x70
	// Line 329, Address: 0x3107d8, Func Offset: 0xb8
	// Line 331, Address: 0x3107e4, Func Offset: 0xc4
	// Line 332, Address: 0x3107fc, Func Offset: 0xdc
	// Line 333, Address: 0x310810, Func Offset: 0xf0
	// Line 336, Address: 0x310814, Func Offset: 0xf4
	// Line 332, Address: 0x31081c, Func Offset: 0xfc
	// Line 333, Address: 0x310858, Func Offset: 0x138
	// Line 336, Address: 0x31086c, Func Offset: 0x14c
	// Line 338, Address: 0x310880, Func Offset: 0x160
	// Func End, Address: 0x310894, Func Offset: 0x174
}

// zParPTankBubbleCreate__FP9zParPTankUiPFP9zParPTankf_v
// Start address: 0x3108a0
void zParPTankBubbleCreate(zParPTank* zp, uint32 max_particles, void(*update)(zParPTank*, float32))
{
	RwTexture* tex;
	RwFrame* frame;
	// Line 263, Address: 0x3108a0, Func Offset: 0
	// Line 271, Address: 0x3108a4, Func Offset: 0x4
	// Line 263, Address: 0x3108a8, Func Offset: 0x8
	// Line 265, Address: 0x3108b8, Func Offset: 0x18
	// Line 266, Address: 0x3108bc, Func Offset: 0x1c
	// Line 268, Address: 0x3108c0, Func Offset: 0x20
	// Line 271, Address: 0x3108c4, Func Offset: 0x24
	// Line 269, Address: 0x3108c8, Func Offset: 0x28
	// Line 271, Address: 0x3108cc, Func Offset: 0x2c
	// Line 272, Address: 0x3108d8, Func Offset: 0x38
	// Line 274, Address: 0x3108e0, Func Offset: 0x40
	// Line 279, Address: 0x3108e4, Func Offset: 0x44
	// Line 274, Address: 0x3108e8, Func Offset: 0x48
	// Line 279, Address: 0x3108ec, Func Offset: 0x4c
	// Line 274, Address: 0x3108f0, Func Offset: 0x50
	// Line 279, Address: 0x3108fc, Func Offset: 0x5c
	// Line 288, Address: 0x310908, Func Offset: 0x68
	// Line 289, Address: 0x310910, Func Offset: 0x70
	// Line 290, Address: 0x310958, Func Offset: 0xb8
	// Line 292, Address: 0x310964, Func Offset: 0xc4
	// Line 293, Address: 0x31097c, Func Offset: 0xdc
	// Line 294, Address: 0x310990, Func Offset: 0xf0
	// Line 297, Address: 0x310994, Func Offset: 0xf4
	// Line 293, Address: 0x31099c, Func Offset: 0xfc
	// Line 294, Address: 0x3109d8, Func Offset: 0x138
	// Line 297, Address: 0x3109ec, Func Offset: 0x14c
	// Line 299, Address: 0x310a00, Func Offset: 0x160
	// Func End, Address: 0x310a14, Func Offset: 0x174
}

// zParPTankSparkleUpdate__FP9zParPTankf
// Start address: 0x310a20
void zParPTankSparkleUpdate(zParPTank* zp, float32 dt)
{
	RpPTankLockStruct plock;
	RpPTankLockStruct uvlock;
	uint32 plock_base;
	uint32 uvlock_base;
	uint32 i;
	RwTexCoords* uv;
	RwTexCoords* end_uv;
	// Line 119, Address: 0x310a20, Func Offset: 0
	// Line 125, Address: 0x310a24, Func Offset: 0x4
	// Line 119, Address: 0x310a28, Func Offset: 0x8
	// Line 125, Address: 0x310a2c, Func Offset: 0xc
	// Line 119, Address: 0x310a30, Func Offset: 0x10
	// Line 125, Address: 0x310a34, Func Offset: 0x14
	// Line 123, Address: 0x310a3c, Func Offset: 0x1c
	// Line 125, Address: 0x310a40, Func Offset: 0x20
	// Line 123, Address: 0x310a44, Func Offset: 0x24
	// Line 125, Address: 0x310a48, Func Offset: 0x28
	// Line 168, Address: 0x310a54, Func Offset: 0x34
	// Line 131, Address: 0x310a74, Func Offset: 0x54
	// Line 168, Address: 0x310a78, Func Offset: 0x58
	// Line 141, Address: 0x310a98, Func Offset: 0x78
	// Line 144, Address: 0x310a9c, Func Offset: 0x7c
	// Line 141, Address: 0x310aa0, Func Offset: 0x80
	// Line 168, Address: 0x310aa4, Func Offset: 0x84
	// Line 144, Address: 0x310aa8, Func Offset: 0x88
	// Line 168, Address: 0x310aac, Func Offset: 0x8c
	// Line 141, Address: 0x310ab8, Func Offset: 0x98
	// Line 168, Address: 0x310abc, Func Offset: 0x9c
	// Line 142, Address: 0x310ac4, Func Offset: 0xa4
	// Line 168, Address: 0x310ac8, Func Offset: 0xa8
	// Line 144, Address: 0x310ad0, Func Offset: 0xb0
	// Line 168, Address: 0x310ad4, Func Offset: 0xb4
	// Line 157, Address: 0x310adc, Func Offset: 0xbc
	// Line 168, Address: 0x310ae0, Func Offset: 0xc0
	// Line 165, Address: 0x310b14, Func Offset: 0xf4
	// Line 168, Address: 0x310b18, Func Offset: 0xf8
	// Line 165, Address: 0x310b1c, Func Offset: 0xfc
	// Line 163, Address: 0x310b20, Func Offset: 0x100
	// Line 165, Address: 0x310b24, Func Offset: 0x104
	// Line 168, Address: 0x310b28, Func Offset: 0x108
	// Line 163, Address: 0x310b34, Func Offset: 0x114
	// Line 168, Address: 0x310b38, Func Offset: 0x118
	// Line 165, Address: 0x310b5c, Func Offset: 0x13c
	// Line 168, Address: 0x310b6c, Func Offset: 0x14c
	// Line 147, Address: 0x310b78, Func Offset: 0x158
	// Line 168, Address: 0x310b80, Func Offset: 0x160
	// Line 149, Address: 0x310bb0, Func Offset: 0x190
	// Line 168, Address: 0x310bb4, Func Offset: 0x194
	// Func End, Address: 0x310c08, Func Offset: 0x1e8
}

// zParPTankSparkleCreate__FP9zParPTankUiPFP9zParPTankf_v
// Start address: 0x310c10
void zParPTankSparkleCreate(zParPTank* zp, uint32 max_particles, void(*update)(zParPTank*, float32))
{
	RwTexture* tex;
	RwFrame* frame;
	// Line 82, Address: 0x310c10, Func Offset: 0
	// Line 90, Address: 0x310c14, Func Offset: 0x4
	// Line 82, Address: 0x310c18, Func Offset: 0x8
	// Line 84, Address: 0x310c38, Func Offset: 0x28
	// Line 85, Address: 0x310c3c, Func Offset: 0x2c
	// Line 87, Address: 0x310c40, Func Offset: 0x30
	// Line 90, Address: 0x310c44, Func Offset: 0x34
	// Line 88, Address: 0x310c48, Func Offset: 0x38
	// Line 90, Address: 0x310c4c, Func Offset: 0x3c
	// Line 91, Address: 0x310c58, Func Offset: 0x48
	// Line 93, Address: 0x310c60, Func Offset: 0x50
	// Line 98, Address: 0x310c64, Func Offset: 0x54
	// Line 93, Address: 0x310c68, Func Offset: 0x58
	// Line 98, Address: 0x310c6c, Func Offset: 0x5c
	// Line 93, Address: 0x310c70, Func Offset: 0x60
	// Line 98, Address: 0x310c7c, Func Offset: 0x6c
	// Line 95, Address: 0x310c80, Func Offset: 0x70
	// Line 98, Address: 0x310c90, Func Offset: 0x80
	// Line 105, Address: 0x310c98, Func Offset: 0x88
	// Line 106, Address: 0x310ca0, Func Offset: 0x90
	// Line 107, Address: 0x310ce8, Func Offset: 0xd8
	// Line 109, Address: 0x310cf4, Func Offset: 0xe4
	// Line 110, Address: 0x310d58, Func Offset: 0x148
	// Line 109, Address: 0x310d5c, Func Offset: 0x14c
	// Line 110, Address: 0x310d60, Func Offset: 0x150
	// Line 109, Address: 0x310d64, Func Offset: 0x154
	// Line 110, Address: 0x310d68, Func Offset: 0x158
	// Line 109, Address: 0x310d70, Func Offset: 0x160
	// Line 110, Address: 0x310d84, Func Offset: 0x174
	// Line 111, Address: 0x310db8, Func Offset: 0x1a8
	// Line 112, Address: 0x310dd0, Func Offset: 0x1c0
	// Line 113, Address: 0x310de4, Func Offset: 0x1d4
	// Line 112, Address: 0x310de8, Func Offset: 0x1d8
	// Line 113, Address: 0x310e24, Func Offset: 0x214
	// Line 115, Address: 0x310e38, Func Offset: 0x228
	// Line 116, Address: 0x310e3c, Func Offset: 0x22c
	// Func End, Address: 0x310e60, Func Offset: 0x250
}

