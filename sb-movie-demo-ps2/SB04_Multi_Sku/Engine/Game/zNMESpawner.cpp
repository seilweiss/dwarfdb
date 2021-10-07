



void SPUnlock(SMNPCStatus* npcstat);
void ChildCleanup();
int32 SpawnBeastie(SMNPCStatus* npcstat, SMSPStatus* spstat);
SMNPCStatus* StatForNPC(zNMECommon* npc);
int32 IsSPLZClear(zMovePoint* sp);
uint8 __cl(xEnt& ent);
SMSPStatus* SPSelect_Avail();
void Notify(en_smnote note, void* data);
void UpdateContinuous();
void UpdateAmbushWave();
void UpdateWaveMode();
void Timestep(float32 dt);
void MapPreferred();
int32 AddSpawnNPC(zNMECommon* npc);
int32 AddSpawnPoint(zMovePoint* sp);
zNMESpawner* zNMESpawner_GetInstance();
void SceneFinish();
void ScenePrepare();

// SPUnlock__11zNMESpawnerFPC11SMNPCStatusi
// Start address: 0x26e3a0
void zNMESpawner::SPUnlock(SMNPCStatus* npcstat)
{
	int32 i;
	// Line 1853, Address: 0x26e3a0, Func Offset: 0
	// Line 1854, Address: 0x26e3a8, Func Offset: 0x8
	// Line 1856, Address: 0x26e3bc, Func Offset: 0x1c
	// Line 1862, Address: 0x26e3c4, Func Offset: 0x24
	// Line 1863, Address: 0x26e3cc, Func Offset: 0x2c
	// Line 1870, Address: 0x26e3e0, Func Offset: 0x40
	// Func End, Address: 0x26e3e8, Func Offset: 0x48
}

// ChildCleanup__11zNMESpawnerFf
// Start address: 0x26e3f0
void zNMESpawner::ChildCleanup()
{
	int32 i;
	SMNPCStatus* npc_stat;
	int32 cnt_know;
	int32 cnt_dead;
	// Line 1692, Address: 0x26e3f0, Func Offset: 0
	// Line 1722, Address: 0x26e3f4, Func Offset: 0x4
	// Line 1692, Address: 0x26e3f8, Func Offset: 0x8
	// Line 1722, Address: 0x26e410, Func Offset: 0x20
	// Line 1735, Address: 0x26e420, Func Offset: 0x30
	// Line 1746, Address: 0x26e430, Func Offset: 0x40
	// Line 1752, Address: 0x26e448, Func Offset: 0x58
	// Line 1754, Address: 0x26e44c, Func Offset: 0x5c
	// Line 1756, Address: 0x26e454, Func Offset: 0x64
	// Line 1758, Address: 0x26e468, Func Offset: 0x78
	// Line 1760, Address: 0x26e478, Func Offset: 0x88
	// Line 1761, Address: 0x26e480, Func Offset: 0x90
	// Line 1771, Address: 0x26e490, Func Offset: 0xa0
	// Line 1773, Address: 0x26e498, Func Offset: 0xa8
	// Line 1779, Address: 0x26e4a8, Func Offset: 0xb8
	// Line 1781, Address: 0x26e4b0, Func Offset: 0xc0
	// Line 1742, Address: 0x26e4bc, Func Offset: 0xcc
	// Line 1781, Address: 0x26e4cc, Func Offset: 0xdc
	// Line 1782, Address: 0x26e4fc, Func Offset: 0x10c
	// Func End, Address: 0x26e514, Func Offset: 0x124
}

// SpawnBeastie__11zNMESpawnerFP11SMNPCStatusP10SMSPStatus
// Start address: 0x26e520
int32 zNMESpawner::SpawnBeastie(SMNPCStatus* npcstat, SMSPStatus* spstat)
{
	zNMECommon* npc;
	zMovePoint* sp;
	zMovePoint* nav_dest;
	xVec3 pos_sp;
	// Line 1572, Address: 0x26e520, Func Offset: 0
	// Line 1591, Address: 0x26e524, Func Offset: 0x4
	// Line 1572, Address: 0x26e528, Func Offset: 0x8
	// Line 1574, Address: 0x26e54c, Func Offset: 0x2c
	// Line 1573, Address: 0x26e550, Func Offset: 0x30
	// Line 1591, Address: 0x26e554, Func Offset: 0x34
	// Line 1592, Address: 0x26e568, Func Offset: 0x48
	// Line 1596, Address: 0x26e574, Func Offset: 0x54
	// Line 1607, Address: 0x26e578, Func Offset: 0x58
	// Line 1608, Address: 0x26e57c, Func Offset: 0x5c
	// Line 1596, Address: 0x26e588, Func Offset: 0x68
	// Line 1608, Address: 0x26e5a0, Func Offset: 0x80
	// Line 1609, Address: 0x26e5a8, Func Offset: 0x88
	// Line 1612, Address: 0x26e5b4, Func Offset: 0x94
	// Line 1615, Address: 0x26e5f0, Func Offset: 0xd0
	// Line 1612, Address: 0x26e5f4, Func Offset: 0xd4
	// Line 1615, Address: 0x26e5f8, Func Offset: 0xd8
	// Line 1619, Address: 0x26e608, Func Offset: 0xe8
	// Line 1622, Address: 0x26e60c, Func Offset: 0xec
	// Line 1619, Address: 0x26e624, Func Offset: 0x104
	// Line 1622, Address: 0x26e62c, Func Offset: 0x10c
	// Line 1624, Address: 0x26e638, Func Offset: 0x118
	// Line 1625, Address: 0x26e648, Func Offset: 0x128
	// Func End, Address: 0x26e668, Func Offset: 0x148
}

// StatForNPC__11zNMESpawnerFP10zNMECommon
// Start address: 0x26e670
SMNPCStatus* zNMESpawner::StatForNPC(zNMECommon* npc)
{
	SMNPCStatus* tmp_stat;
	SMNPCStatus* npc_stat;
	int32 i;
	// Line 1531, Address: 0x26e670, Func Offset: 0
	// Line 1536, Address: 0x26e674, Func Offset: 0x4
	// Line 1537, Address: 0x26e678, Func Offset: 0x8
	// Line 1538, Address: 0x26e67c, Func Offset: 0xc
	// Line 1540, Address: 0x26e684, Func Offset: 0x14
	// Line 1542, Address: 0x26e68c, Func Offset: 0x1c
	// Line 1548, Address: 0x26e690, Func Offset: 0x20
	// Line 1549, Address: 0x26e6b0, Func Offset: 0x40
	// Func End, Address: 0x26e6b8, Func Offset: 0x48
}

// IsSPLZClear__11zNMESpawnerFP10zMovePoint
// Start address: 0x26e6c0
int32 zNMESpawner::IsSPLZClear(zMovePoint* sp)
{
	xVec3 pos_sp;
	xBound bnd;
	xVec3 delt;
	SpawnChkCollData cbdata;
	xBound bnd_bigger;
	// Line 1308, Address: 0x26e6c0, Func Offset: 0
	// Line 1309, Address: 0x26e6c4, Func Offset: 0x4
	// Line 1308, Address: 0x26e6c8, Func Offset: 0x8
	// Line 1309, Address: 0x26e6cc, Func Offset: 0xc
	// Line 1308, Address: 0x26e6d0, Func Offset: 0x10
	// Line 1309, Address: 0x26e6d8, Func Offset: 0x18
	// Line 1313, Address: 0x26e6fc, Func Offset: 0x3c
	// Line 1318, Address: 0x26e70c, Func Offset: 0x4c
	// Line 1313, Address: 0x26e710, Func Offset: 0x50
	// Line 1318, Address: 0x26e714, Func Offset: 0x54
	// Line 1328, Address: 0x26e720, Func Offset: 0x60
	// Line 1318, Address: 0x26e724, Func Offset: 0x64
	// Line 1328, Address: 0x26e728, Func Offset: 0x68
	// Line 1318, Address: 0x26e72c, Func Offset: 0x6c
	// Line 1325, Address: 0x26e730, Func Offset: 0x70
	// Line 1326, Address: 0x26e734, Func Offset: 0x74
	// Line 1328, Address: 0x26e738, Func Offset: 0x78
	// Line 1318, Address: 0x26e740, Func Offset: 0x80
	// Line 1325, Address: 0x26e748, Func Offset: 0x88
	// Line 1327, Address: 0x26e74c, Func Offset: 0x8c
	// Line 1326, Address: 0x26e750, Func Offset: 0x90
	// Line 1327, Address: 0x26e754, Func Offset: 0x94
	// Line 1318, Address: 0x26e758, Func Offset: 0x98
	// Line 1328, Address: 0x26e75c, Func Offset: 0x9c
	// Line 1337, Address: 0x26e764, Func Offset: 0xa4
	// Line 1338, Address: 0x26e7ac, Func Offset: 0xec
	// Line 1349, Address: 0x26e7c0, Func Offset: 0x100
	// Line 1350, Address: 0x26e7c4, Func Offset: 0x104
	// Line 1349, Address: 0x26e7cc, Func Offset: 0x10c
	// Line 1350, Address: 0x26e848, Func Offset: 0x188
	// Line 1349, Address: 0x26e84c, Func Offset: 0x18c
	// Line 1350, Address: 0x26e850, Func Offset: 0x190
	// Line 1351, Address: 0x26e864, Func Offset: 0x1a4
	// Line 1339, Address: 0x26e86c, Func Offset: 0x1ac
	// Line 1362, Address: 0x26e874, Func Offset: 0x1b4
	// Line 1363, Address: 0x26e884, Func Offset: 0x1c4
	// Line 1362, Address: 0x26e8a0, Func Offset: 0x1e0
	// Line 1363, Address: 0x26e8a4, Func Offset: 0x1e4
	// Line 1373, Address: 0x26e8bc, Func Offset: 0x1fc
	// Line 1363, Address: 0x26e8c0, Func Offset: 0x200
	// Line 1373, Address: 0x26e8d4, Func Offset: 0x214
	// Line 1363, Address: 0x26e8d8, Func Offset: 0x218
	// Line 1373, Address: 0x26e8fc, Func Offset: 0x23c
	// Line 1363, Address: 0x26e900, Func Offset: 0x240
	// Line 1373, Address: 0x26e918, Func Offset: 0x258
	// Line 1363, Address: 0x26e91c, Func Offset: 0x25c
	// Line 1373, Address: 0x26e938, Func Offset: 0x278
	// Line 1363, Address: 0x26e93c, Func Offset: 0x27c
	// Line 1364, Address: 0x26e94c, Func Offset: 0x28c
	// Line 1373, Address: 0x26e950, Func Offset: 0x290
	// Line 1364, Address: 0x26e954, Func Offset: 0x294
	// Line 1363, Address: 0x26e958, Func Offset: 0x298
	// Line 1365, Address: 0x26e95c, Func Offset: 0x29c
	// Line 1363, Address: 0x26e960, Func Offset: 0x2a0
	// Line 1365, Address: 0x26e964, Func Offset: 0x2a4
	// Line 1363, Address: 0x26e968, Func Offset: 0x2a8
	// Line 1373, Address: 0x26e96c, Func Offset: 0x2ac
	// Line 1363, Address: 0x26e970, Func Offset: 0x2b0
	// Line 1373, Address: 0x26e974, Func Offset: 0x2b4
	// Line 1363, Address: 0x26e978, Func Offset: 0x2b8
	// Line 1373, Address: 0x26e97c, Func Offset: 0x2bc
	// Line 1363, Address: 0x26e980, Func Offset: 0x2c0
	// Line 1373, Address: 0x26e984, Func Offset: 0x2c4
	// Line 1363, Address: 0x26e990, Func Offset: 0x2d0
	// Line 1373, Address: 0x26e994, Func Offset: 0x2d4
	// Line 1363, Address: 0x26e998, Func Offset: 0x2d8
	// Line 1373, Address: 0x26e99c, Func Offset: 0x2dc
	// Line 1363, Address: 0x26e9a0, Func Offset: 0x2e0
	// Line 1373, Address: 0x26e9a4, Func Offset: 0x2e4
	// Line 1363, Address: 0x26e9b0, Func Offset: 0x2f0
	// Line 1373, Address: 0x26e9bc, Func Offset: 0x2fc
	// Line 1363, Address: 0x26e9c0, Func Offset: 0x300
	// Line 1373, Address: 0x26e9c4, Func Offset: 0x304
	// Line 1363, Address: 0x26e9cc, Func Offset: 0x30c
	// Line 1373, Address: 0x26e9e8, Func Offset: 0x328
	// Line 1363, Address: 0x26e9ec, Func Offset: 0x32c
	// Line 1373, Address: 0x26e9f8, Func Offset: 0x338
	// Line 1363, Address: 0x26e9fc, Func Offset: 0x33c
	// Line 1373, Address: 0x26ea00, Func Offset: 0x340
	// Line 1363, Address: 0x26ea04, Func Offset: 0x344
	// Line 1373, Address: 0x26ea0c, Func Offset: 0x34c
	// Line 1363, Address: 0x26ea10, Func Offset: 0x350
	// Line 1373, Address: 0x26ea18, Func Offset: 0x358
	// Line 1363, Address: 0x26ea1c, Func Offset: 0x35c
	// Line 1373, Address: 0x26ea34, Func Offset: 0x374
	// Line 1363, Address: 0x26ea40, Func Offset: 0x380
	// Line 1373, Address: 0x26ea54, Func Offset: 0x394
	// Line 1363, Address: 0x26ea60, Func Offset: 0x3a0
	// Line 1373, Address: 0x26ea74, Func Offset: 0x3b4
	// Line 1363, Address: 0x26ea84, Func Offset: 0x3c4
	// Line 1373, Address: 0x26ea88, Func Offset: 0x3c8
	// Line 1363, Address: 0x26ea90, Func Offset: 0x3d0
	// Line 1373, Address: 0x26ea98, Func Offset: 0x3d8
	// Line 1363, Address: 0x26eaa0, Func Offset: 0x3e0
	// Line 1375, Address: 0x26eaa4, Func Offset: 0x3e4
	// Line 1373, Address: 0x26eaa8, Func Offset: 0x3e8
	// Line 1363, Address: 0x26eaac, Func Offset: 0x3ec
	// Line 1373, Address: 0x26eab8, Func Offset: 0x3f8
	// Line 1375, Address: 0x26eabc, Func Offset: 0x3fc
	// Line 1373, Address: 0x26eac0, Func Offset: 0x400
	// Line 1375, Address: 0x26eac4, Func Offset: 0x404
	// Line 1363, Address: 0x26eac8, Func Offset: 0x408
	// Line 1373, Address: 0x26eacc, Func Offset: 0x40c
	// Line 1376, Address: 0x26eadc, Func Offset: 0x41c
	// Line 1373, Address: 0x26eae0, Func Offset: 0x420
	// Line 1376, Address: 0x26eae4, Func Offset: 0x424
	// Line 1373, Address: 0x26eae8, Func Offset: 0x428
	// Line 1376, Address: 0x26eaec, Func Offset: 0x42c
	// Line 1363, Address: 0x26eaf0, Func Offset: 0x430
	// Line 1376, Address: 0x26eaf4, Func Offset: 0x434
	// Line 1363, Address: 0x26eaf8, Func Offset: 0x438
	// Line 1373, Address: 0x26eb3c, Func Offset: 0x47c
	// Line 1363, Address: 0x26eb44, Func Offset: 0x484
	// Line 1375, Address: 0x26eb48, Func Offset: 0x488
	// Line 1363, Address: 0x26eb4c, Func Offset: 0x48c
	// Line 1373, Address: 0x26eb50, Func Offset: 0x490
	// Line 1376, Address: 0x26eb54, Func Offset: 0x494
	// Line 1380, Address: 0x26eb5c, Func Offset: 0x49c
	// Line 1383, Address: 0x26eb74, Func Offset: 0x4b4
	// Line 1410, Address: 0x26eb84, Func Offset: 0x4c4
	// Func End, Address: 0x26eb98, Func Offset: 0x4d8
}

// __cl__16SpawnChkCollDataFR4xEnt
// Start address: 0x26eba0
uint8 SpawnChkCollData::__cl(xEnt& ent)
{
	en_npctyp ntyp;
	xVec3 vec_cent;
	// Line 1240, Address: 0x26eba0, Func Offset: 0
	// Line 1241, Address: 0x26eba4, Func Offset: 0x4
	// Line 1240, Address: 0x26eba8, Func Offset: 0x8
	// Line 1241, Address: 0x26ebac, Func Offset: 0xc
	// Line 1246, Address: 0x26ebb8, Func Offset: 0x18
	// Line 1249, Address: 0x26ebc8, Func Offset: 0x28
	// Line 1251, Address: 0x26ebcc, Func Offset: 0x2c
	// Line 1252, Address: 0x26ebe4, Func Offset: 0x44
	// Line 1254, Address: 0x26ebec, Func Offset: 0x4c
	// Line 1255, Address: 0x26ebfc, Func Offset: 0x5c
	// Line 1242, Address: 0x26ec04, Func Offset: 0x64
	// Line 1271, Address: 0x26ec0c, Func Offset: 0x6c
	// Line 1282, Address: 0x26ec14, Func Offset: 0x74
	// Line 1286, Address: 0x26ec20, Func Offset: 0x80
	// Line 1287, Address: 0x26ecfc, Func Offset: 0x15c
	// Line 1289, Address: 0x26ed04, Func Offset: 0x164
	// Line 1287, Address: 0x26ed08, Func Offset: 0x168
	// Line 1289, Address: 0x26ed10, Func Offset: 0x170
	// Line 1290, Address: 0x26ed24, Func Offset: 0x184
	// Line 1292, Address: 0x26ed2c, Func Offset: 0x18c
	// Line 1293, Address: 0x26ed30, Func Offset: 0x190
	// Line 1292, Address: 0x26ed34, Func Offset: 0x194
	// Line 1305, Address: 0x26ed3c, Func Offset: 0x19c
	// Func End, Address: 0x26ed48, Func Offset: 0x1a8
}

// SPSelect_Avail__11zNMESpawnerFPC11SMNPCStatus
// Start address: 0x26ed50
SMSPStatus* zNMESpawner::SPSelect_Avail()
{
	SMSPStatus* splist[32];
	int32 cnt;
	int32 i;
	SMSPStatus* tmp_stat;
	int32 rc;
	SMSPStatus* sp_stat;
	// Line 1087, Address: 0x26ed50, Func Offset: 0
	// Line 1090, Address: 0x26ed54, Func Offset: 0x4
	// Line 1087, Address: 0x26ed58, Func Offset: 0x8
	// Line 1090, Address: 0x26ed5c, Func Offset: 0xc
	// Line 1087, Address: 0x26ed60, Func Offset: 0x10
	// Line 1090, Address: 0x26ed78, Func Offset: 0x28
	// Line 1094, Address: 0x26ed9c, Func Offset: 0x4c
	// Line 1095, Address: 0x26eda0, Func Offset: 0x50
	// Line 1096, Address: 0x26edac, Func Offset: 0x5c
	// Line 1099, Address: 0x26edb0, Func Offset: 0x60
	// Line 1101, Address: 0x26edb8, Func Offset: 0x68
	// Line 1103, Address: 0x26edc4, Func Offset: 0x74
	// Line 1105, Address: 0x26edd0, Func Offset: 0x80
	// Line 1109, Address: 0x26ee18, Func Offset: 0xc8
	// Line 1110, Address: 0x26ee20, Func Offset: 0xd0
	// Line 1114, Address: 0x26ee28, Func Offset: 0xd8
	// Line 1115, Address: 0x26ee34, Func Offset: 0xe4
	// Line 1118, Address: 0x26ee44, Func Offset: 0xf4
	// Line 1119, Address: 0x26ee4c, Func Offset: 0xfc
	// Line 1121, Address: 0x26ee54, Func Offset: 0x104
	// Line 1119, Address: 0x26ee64, Func Offset: 0x114
	// Line 1121, Address: 0x26ee6c, Func Offset: 0x11c
	// Line 1119, Address: 0x26ee74, Func Offset: 0x124
	// Line 1121, Address: 0x26eea8, Func Offset: 0x158
	// Line 1119, Address: 0x26eeac, Func Offset: 0x15c
	// Line 1121, Address: 0x26eeb0, Func Offset: 0x160
	// Line 1119, Address: 0x26eeb4, Func Offset: 0x164
	// Line 1121, Address: 0x26eebc, Func Offset: 0x16c
	// Line 1119, Address: 0x26eed4, Func Offset: 0x184
	// Line 1123, Address: 0x26eeec, Func Offset: 0x19c
	// Func End, Address: 0x26ef10, Func Offset: 0x1c0
}

// Notify__11zNMESpawnerF9en_smnotePv
// Start address: 0x26ef10
void zNMESpawner::Notify(en_smnote note, void* data)
{
	SMNPCStatus* npcstat;
	SMNPCStatus* npcstat;
	// Line 867, Address: 0x26ef10, Func Offset: 0
	// Line 868, Address: 0x26ef14, Func Offset: 0x4
	// Line 867, Address: 0x26ef18, Func Offset: 0x8
	// Line 868, Address: 0x26ef24, Func Offset: 0x14
	// Line 876, Address: 0x26ef48, Func Offset: 0x38
	// Line 878, Address: 0x26ef88, Func Offset: 0x78
	// Line 880, Address: 0x26ef9c, Func Offset: 0x8c
	// Line 885, Address: 0x26efa4, Func Offset: 0x94
	// Line 886, Address: 0x26efac, Func Offset: 0x9c
	// Line 887, Address: 0x26efb0, Func Offset: 0xa0
	// Line 885, Address: 0x26efb4, Func Offset: 0xa4
	// Line 887, Address: 0x26efb8, Func Offset: 0xa8
	// Line 889, Address: 0x26efc0, Func Offset: 0xb0
	// Line 894, Address: 0x26efc8, Func Offset: 0xb8
	// Line 895, Address: 0x26efd0, Func Offset: 0xc0
	// Line 896, Address: 0x26efd4, Func Offset: 0xc4
	// Line 894, Address: 0x26efd8, Func Offset: 0xc8
	// Line 896, Address: 0x26efdc, Func Offset: 0xcc
	// Line 898, Address: 0x26efe8, Func Offset: 0xd8
	// Line 903, Address: 0x26eff0, Func Offset: 0xe0
	// Line 905, Address: 0x26f038, Func Offset: 0x128
	// Line 912, Address: 0x26f040, Func Offset: 0x130
	// Line 913, Address: 0x26f048, Func Offset: 0x138
	// Line 917, Address: 0x26f050, Func Offset: 0x140
	// Line 921, Address: 0x26f060, Func Offset: 0x150
	// Line 922, Address: 0x26f068, Func Offset: 0x158
	// Line 926, Address: 0x26f070, Func Offset: 0x160
	// Line 928, Address: 0x26f074, Func Offset: 0x164
	// Line 929, Address: 0x26f09c, Func Offset: 0x18c
	// Line 933, Address: 0x26f0a4, Func Offset: 0x194
	// Line 937, Address: 0x26f0b4, Func Offset: 0x1a4
	// Line 956, Address: 0x26f0f8, Func Offset: 0x1e8
	// Line 966, Address: 0x26f13c, Func Offset: 0x22c
	// Line 937, Address: 0x26f144, Func Offset: 0x234
	// Line 966, Address: 0x26f148, Func Offset: 0x238
	// Line 944, Address: 0x26f154, Func Offset: 0x244
	// Line 938, Address: 0x26f158, Func Offset: 0x248
	// Line 966, Address: 0x26f15c, Func Offset: 0x24c
	// Line 944, Address: 0x26f170, Func Offset: 0x260
	// Line 966, Address: 0x26f174, Func Offset: 0x264
	// Line 946, Address: 0x26f180, Func Offset: 0x270
	// Line 966, Address: 0x26f198, Func Offset: 0x288
	// Line 948, Address: 0x26f1a0, Func Offset: 0x290
	// Line 956, Address: 0x26f1a8, Func Offset: 0x298
	// Line 966, Address: 0x26f1ac, Func Offset: 0x29c
	// Line 957, Address: 0x26f1b8, Func Offset: 0x2a8
	// Line 966, Address: 0x26f1bc, Func Offset: 0x2ac
	// Line 958, Address: 0x26f1c4, Func Offset: 0x2b4
	// Line 967, Address: 0x26f1d0, Func Offset: 0x2c0
	// Func End, Address: 0x26f1e4, Func Offset: 0x2d4
}

// UpdateContinuous__11zNMESpawnerFf
// Start address: 0x26f1f0
void zNMESpawner::UpdateContinuous()
{
	SMSPStatus* spstat;
	// Line 711, Address: 0x26f1f0, Func Offset: 0
	// Line 715, Address: 0x26f1f4, Func Offset: 0x4
	// Line 711, Address: 0x26f1f8, Func Offset: 0x8
	// Line 715, Address: 0x26f210, Func Offset: 0x20
	// Line 718, Address: 0x26f250, Func Offset: 0x60
	// Line 735, Address: 0x26f294, Func Offset: 0xa4
	// Line 737, Address: 0x26f2a0, Func Offset: 0xb0
	// Line 740, Address: 0x26f2b8, Func Offset: 0xc8
	// Line 780, Address: 0x26f2c0, Func Offset: 0xd0
	// Line 782, Address: 0x26f2d4, Func Offset: 0xe4
	// Line 784, Address: 0x26f2ec, Func Offset: 0xfc
	// Line 797, Address: 0x26f2f4, Func Offset: 0x104
	// Line 799, Address: 0x26f300, Func Offset: 0x110
	// Line 804, Address: 0x26f344, Func Offset: 0x154
	// Line 831, Address: 0x26f358, Func Offset: 0x168
	// Line 834, Address: 0x26f370, Func Offset: 0x180
	// Line 835, Address: 0x26f380, Func Offset: 0x190
	// Line 836, Address: 0x26f384, Func Offset: 0x194
	// Line 835, Address: 0x26f388, Func Offset: 0x198
	// Line 836, Address: 0x26f38c, Func Offset: 0x19c
	// Line 837, Address: 0x26f3ac, Func Offset: 0x1bc
	// Line 840, Address: 0x26f3d0, Func Offset: 0x1e0
	// Line 841, Address: 0x26f3e0, Func Offset: 0x1f0
	// Line 863, Address: 0x26f404, Func Offset: 0x214
	// Line 718, Address: 0x26f40c, Func Offset: 0x21c
	// Line 863, Address: 0x26f410, Func Offset: 0x220
	// Line 718, Address: 0x26f418, Func Offset: 0x228
	// Line 863, Address: 0x26f420, Func Offset: 0x230
	// Line 718, Address: 0x26f430, Func Offset: 0x240
	// Line 863, Address: 0x26f434, Func Offset: 0x244
	// Line 718, Address: 0x26f43c, Func Offset: 0x24c
	// Line 863, Address: 0x26f440, Func Offset: 0x250
	// Line 718, Address: 0x26f448, Func Offset: 0x258
	// Line 863, Address: 0x26f44c, Func Offset: 0x25c
	// Line 731, Address: 0x26f46c, Func Offset: 0x27c
	// Line 732, Address: 0x26f470, Func Offset: 0x280
	// Line 720, Address: 0x26f478, Func Offset: 0x288
	// Line 721, Address: 0x26f47c, Func Offset: 0x28c
	// Line 863, Address: 0x26f480, Func Offset: 0x290
	// Line 721, Address: 0x26f484, Func Offset: 0x294
	// Line 863, Address: 0x26f488, Func Offset: 0x298
	// Line 721, Address: 0x26f48c, Func Offset: 0x29c
	// Line 863, Address: 0x26f498, Func Offset: 0x2a8
	// Line 722, Address: 0x26f4a4, Func Offset: 0x2b4
	// Line 725, Address: 0x26f4a8, Func Offset: 0x2b8
	// Line 722, Address: 0x26f4ac, Func Offset: 0x2bc
	// Line 863, Address: 0x26f4b0, Func Offset: 0x2c0
	// Line 727, Address: 0x26f4c4, Func Offset: 0x2d4
	// Line 736, Address: 0x26f4d4, Func Offset: 0x2e4
	// Line 863, Address: 0x26f4dc, Func Offset: 0x2ec
	// Line 747, Address: 0x26f4f0, Func Offset: 0x300
	// Line 863, Address: 0x26f4f8, Func Offset: 0x308
	// Line 747, Address: 0x26f50c, Func Offset: 0x31c
	// Line 863, Address: 0x26f510, Func Offset: 0x320
	// Line 750, Address: 0x26f524, Func Offset: 0x334
	// Line 863, Address: 0x26f530, Func Offset: 0x340
	// Line 750, Address: 0x26f544, Func Offset: 0x354
	// Line 863, Address: 0x26f548, Func Offset: 0x358
	// Line 750, Address: 0x26f558, Func Offset: 0x368
	// Line 863, Address: 0x26f55c, Func Offset: 0x36c
	// Line 752, Address: 0x26f56c, Func Offset: 0x37c
	// Line 863, Address: 0x26f574, Func Offset: 0x384
	// Line 756, Address: 0x26f584, Func Offset: 0x394
	// Line 863, Address: 0x26f58c, Func Offset: 0x39c
	// Line 756, Address: 0x26f594, Func Offset: 0x3a4
	// Line 863, Address: 0x26f5ec, Func Offset: 0x3fc
	// Line 761, Address: 0x26f604, Func Offset: 0x414
	// Line 763, Address: 0x26f608, Func Offset: 0x418
	// Line 747, Address: 0x26f610, Func Offset: 0x420
	// Line 863, Address: 0x26f618, Func Offset: 0x428
	// Line 747, Address: 0x26f620, Func Offset: 0x430
	// Line 863, Address: 0x26f628, Func Offset: 0x438
	// Line 747, Address: 0x26f630, Func Offset: 0x440
	// Line 863, Address: 0x26f664, Func Offset: 0x474
	// Line 747, Address: 0x26f668, Func Offset: 0x478
	// Line 863, Address: 0x26f66c, Func Offset: 0x47c
	// Line 747, Address: 0x26f670, Func Offset: 0x480
	// Line 863, Address: 0x26f678, Func Offset: 0x488
	// Line 747, Address: 0x26f690, Func Offset: 0x4a0
	// Line 863, Address: 0x26f694, Func Offset: 0x4a4
	// Line 750, Address: 0x26f6c0, Func Offset: 0x4d0
	// Line 863, Address: 0x26f6c4, Func Offset: 0x4d4
	// Line 750, Address: 0x26f6d4, Func Offset: 0x4e4
	// Line 863, Address: 0x26f6d8, Func Offset: 0x4e8
	// Line 764, Address: 0x26f6ec, Func Offset: 0x4fc
	// Line 863, Address: 0x26f708, Func Offset: 0x518
	// Line 766, Address: 0x26f718, Func Offset: 0x528
	// Line 863, Address: 0x26f720, Func Offset: 0x530
	// Line 766, Address: 0x26f734, Func Offset: 0x544
	// Line 863, Address: 0x26f738, Func Offset: 0x548
	// Line 769, Address: 0x26f74c, Func Offset: 0x55c
	// Line 863, Address: 0x26f758, Func Offset: 0x568
	// Line 769, Address: 0x26f76c, Func Offset: 0x57c
	// Line 863, Address: 0x26f770, Func Offset: 0x580
	// Line 769, Address: 0x26f780, Func Offset: 0x590
	// Line 863, Address: 0x26f784, Func Offset: 0x594
	// Line 771, Address: 0x26f794, Func Offset: 0x5a4
	// Line 863, Address: 0x26f79c, Func Offset: 0x5ac
	// Line 773, Address: 0x26f7ac, Func Offset: 0x5bc
	// Line 863, Address: 0x26f7b4, Func Offset: 0x5c4
	// Line 773, Address: 0x26f7bc, Func Offset: 0x5cc
	// Line 775, Address: 0x26f814, Func Offset: 0x624
	// Line 766, Address: 0x26f81c, Func Offset: 0x62c
	// Line 863, Address: 0x26f824, Func Offset: 0x634
	// Line 766, Address: 0x26f82c, Func Offset: 0x63c
	// Line 863, Address: 0x26f834, Func Offset: 0x644
	// Line 766, Address: 0x26f83c, Func Offset: 0x64c
	// Line 863, Address: 0x26f870, Func Offset: 0x680
	// Line 766, Address: 0x26f874, Func Offset: 0x684
	// Line 863, Address: 0x26f878, Func Offset: 0x688
	// Line 766, Address: 0x26f87c, Func Offset: 0x68c
	// Line 863, Address: 0x26f884, Func Offset: 0x694
	// Line 766, Address: 0x26f89c, Func Offset: 0x6ac
	// Line 863, Address: 0x26f8a0, Func Offset: 0x6b0
	// Line 769, Address: 0x26f8cc, Func Offset: 0x6dc
	// Line 863, Address: 0x26f8d0, Func Offset: 0x6e0
	// Line 769, Address: 0x26f8e0, Func Offset: 0x6f0
	// Line 863, Address: 0x26f8e4, Func Offset: 0x6f4
	// Line 781, Address: 0x26f8f4, Func Offset: 0x704
	// Line 863, Address: 0x26f8fc, Func Offset: 0x70c
	// Line 785, Address: 0x26f900, Func Offset: 0x710
	// Line 863, Address: 0x26f91c, Func Offset: 0x72c
	// Line 792, Address: 0x26f930, Func Offset: 0x740
	// Line 793, Address: 0x26f934, Func Offset: 0x744
	// Line 863, Address: 0x26f93c, Func Offset: 0x74c
	// Line 786, Address: 0x26f944, Func Offset: 0x754
	// Line 863, Address: 0x26f94c, Func Offset: 0x75c
	// Line 786, Address: 0x26f954, Func Offset: 0x764
	// Line 787, Address: 0x26f988, Func Offset: 0x798
	// Line 786, Address: 0x26f990, Func Offset: 0x7a0
	// Line 863, Address: 0x26f9b4, Func Offset: 0x7c4
	// Line 787, Address: 0x26f9c8, Func Offset: 0x7d8
	// Line 863, Address: 0x26f9cc, Func Offset: 0x7dc
	// Line 787, Address: 0x26f9d4, Func Offset: 0x7e4
	// Line 863, Address: 0x26f9d8, Func Offset: 0x7e8
	// Line 787, Address: 0x26f9e0, Func Offset: 0x7f0
	// Line 863, Address: 0x26f9e4, Func Offset: 0x7f4
	// Line 789, Address: 0x26fa04, Func Offset: 0x814
	// Line 790, Address: 0x26fa08, Func Offset: 0x818
	// Line 799, Address: 0x26fa18, Func Offset: 0x828
	// Line 863, Address: 0x26fa1c, Func Offset: 0x82c
	// Line 800, Address: 0x26fa24, Func Offset: 0x834
	// Line 863, Address: 0x26fa2c, Func Offset: 0x83c
	// Line 805, Address: 0x26fa30, Func Offset: 0x840
	// Line 863, Address: 0x26fa48, Func Offset: 0x858
	// Line 846, Address: 0x26fa5c, Func Offset: 0x86c
	// Line 863, Address: 0x26fa60, Func Offset: 0x870
	// Line 848, Address: 0x26fa68, Func Offset: 0x878
	// Line 863, Address: 0x26fa6c, Func Offset: 0x87c
	// Line 849, Address: 0x26fa74, Func Offset: 0x884
	// Line 850, Address: 0x26fa78, Func Offset: 0x888
	// Line 863, Address: 0x26fa7c, Func Offset: 0x88c
	// Line 850, Address: 0x26fa80, Func Offset: 0x890
	// Line 863, Address: 0x26fa84, Func Offset: 0x894
	// Line 850, Address: 0x26fa88, Func Offset: 0x898
	// Line 863, Address: 0x26fa98, Func Offset: 0x8a8
	// Line 851, Address: 0x26faa4, Func Offset: 0x8b4
	// Line 863, Address: 0x26fabc, Func Offset: 0x8cc
	// Line 864, Address: 0x26facc, Func Offset: 0x8dc
	// Func End, Address: 0x26fae8, Func Offset: 0x8f8
}

// UpdateAmbushWave__11zNMESpawnerFf
// Start address: 0x26faf0
void zNMESpawner::UpdateAmbushWave()
{
	SMSPStatus* spstat;
	// Line 578, Address: 0x26faf0, Func Offset: 0
	// Line 584, Address: 0x26faf4, Func Offset: 0x4
	// Line 578, Address: 0x26faf8, Func Offset: 0x8
	// Line 579, Address: 0x26fb04, Func Offset: 0x14
	// Line 578, Address: 0x26fb08, Func Offset: 0x18
	// Line 584, Address: 0x26fb10, Func Offset: 0x20
	// Line 587, Address: 0x26fb50, Func Offset: 0x60
	// Line 597, Address: 0x26fb94, Func Offset: 0xa4
	// Line 599, Address: 0x26fba0, Func Offset: 0xb0
	// Line 602, Address: 0x26fbb8, Func Offset: 0xc8
	// Line 620, Address: 0x26fbc0, Func Offset: 0xd0
	// Line 622, Address: 0x26fbd0, Func Offset: 0xe0
	// Line 630, Address: 0x26fbe8, Func Offset: 0xf8
	// Line 634, Address: 0x26fbf0, Func Offset: 0x100
	// Line 636, Address: 0x26fbfc, Func Offset: 0x10c
	// Line 640, Address: 0x26fc40, Func Offset: 0x150
	// Line 659, Address: 0x26fc54, Func Offset: 0x164
	// Line 663, Address: 0x26fc6c, Func Offset: 0x17c
	// Line 664, Address: 0x26fc7c, Func Offset: 0x18c
	// Line 666, Address: 0x26fc80, Func Offset: 0x190
	// Line 664, Address: 0x26fc84, Func Offset: 0x194
	// Line 666, Address: 0x26fc88, Func Offset: 0x198
	// Line 667, Address: 0x26fca8, Func Offset: 0x1b8
	// Line 670, Address: 0x26fccc, Func Offset: 0x1dc
	// Line 671, Address: 0x26fcdc, Func Offset: 0x1ec
	// Line 699, Address: 0x26fd00, Func Offset: 0x210
	// Line 587, Address: 0x26fd08, Func Offset: 0x218
	// Line 699, Address: 0x26fd0c, Func Offset: 0x21c
	// Line 587, Address: 0x26fd14, Func Offset: 0x224
	// Line 699, Address: 0x26fd1c, Func Offset: 0x22c
	// Line 587, Address: 0x26fd2c, Func Offset: 0x23c
	// Line 699, Address: 0x26fd30, Func Offset: 0x240
	// Line 587, Address: 0x26fd38, Func Offset: 0x248
	// Line 699, Address: 0x26fd3c, Func Offset: 0x24c
	// Line 587, Address: 0x26fd44, Func Offset: 0x254
	// Line 699, Address: 0x26fd48, Func Offset: 0x258
	// Line 587, Address: 0x26fd4c, Func Offset: 0x25c
	// Line 699, Address: 0x26fd50, Func Offset: 0x260
	// Line 593, Address: 0x26fd6c, Func Offset: 0x27c
	// Line 594, Address: 0x26fd74, Func Offset: 0x284
	// Line 589, Address: 0x26fd7c, Func Offset: 0x28c
	// Line 590, Address: 0x26fd80, Func Offset: 0x290
	// Line 699, Address: 0x26fd84, Func Offset: 0x294
	// Line 590, Address: 0x26fd88, Func Offset: 0x298
	// Line 699, Address: 0x26fd8c, Func Offset: 0x29c
	// Line 590, Address: 0x26fd90, Func Offset: 0x2a0
	// Line 699, Address: 0x26fd9c, Func Offset: 0x2ac
	// Line 591, Address: 0x26fda8, Func Offset: 0x2b8
	// Line 598, Address: 0x26fdb8, Func Offset: 0x2c8
	// Line 699, Address: 0x26fdc0, Func Offset: 0x2d0
	// Line 607, Address: 0x26fdc4, Func Offset: 0x2d4
	// Line 699, Address: 0x26fde0, Func Offset: 0x2f0
	// Line 609, Address: 0x26fdf0, Func Offset: 0x300
	// Line 699, Address: 0x26fdf8, Func Offset: 0x308
	// Line 609, Address: 0x26fe0c, Func Offset: 0x31c
	// Line 699, Address: 0x26fe10, Func Offset: 0x320
	// Line 612, Address: 0x26fe24, Func Offset: 0x334
	// Line 699, Address: 0x26fe30, Func Offset: 0x340
	// Line 612, Address: 0x26fe44, Func Offset: 0x354
	// Line 699, Address: 0x26fe48, Func Offset: 0x358
	// Line 612, Address: 0x26fe58, Func Offset: 0x368
	// Line 699, Address: 0x26fe5c, Func Offset: 0x36c
	// Line 614, Address: 0x26fe6c, Func Offset: 0x37c
	// Line 699, Address: 0x26fe74, Func Offset: 0x384
	// Line 615, Address: 0x26fe7c, Func Offset: 0x38c
	// Line 617, Address: 0x26fe84, Func Offset: 0x394
	// Line 609, Address: 0x26fe8c, Func Offset: 0x39c
	// Line 699, Address: 0x26fe94, Func Offset: 0x3a4
	// Line 609, Address: 0x26fe9c, Func Offset: 0x3ac
	// Line 699, Address: 0x26fea4, Func Offset: 0x3b4
	// Line 609, Address: 0x26feac, Func Offset: 0x3bc
	// Line 699, Address: 0x26fee0, Func Offset: 0x3f0
	// Line 609, Address: 0x26fee4, Func Offset: 0x3f4
	// Line 699, Address: 0x26fee8, Func Offset: 0x3f8
	// Line 609, Address: 0x26feec, Func Offset: 0x3fc
	// Line 699, Address: 0x26fef4, Func Offset: 0x404
	// Line 609, Address: 0x26ff0c, Func Offset: 0x41c
	// Line 699, Address: 0x26ff10, Func Offset: 0x420
	// Line 612, Address: 0x26ff3c, Func Offset: 0x44c
	// Line 699, Address: 0x26ff40, Func Offset: 0x450
	// Line 612, Address: 0x26ff50, Func Offset: 0x460
	// Line 699, Address: 0x26ff54, Func Offset: 0x464
	// Line 621, Address: 0x26ff64, Func Offset: 0x474
	// Line 636, Address: 0x26ff74, Func Offset: 0x484
	// Line 699, Address: 0x26ff78, Func Offset: 0x488
	// Line 637, Address: 0x26ff80, Func Offset: 0x490
	// Line 699, Address: 0x26ff88, Func Offset: 0x498
	// Line 641, Address: 0x26ff8c, Func Offset: 0x49c
	// Line 699, Address: 0x26ffa4, Func Offset: 0x4b4
	// Line 676, Address: 0x26ffb8, Func Offset: 0x4c8
	// Line 699, Address: 0x26ffbc, Func Offset: 0x4cc
	// Line 678, Address: 0x26ffc4, Func Offset: 0x4d4
	// Line 699, Address: 0x26ffc8, Func Offset: 0x4d8
	// Line 680, Address: 0x26ffd4, Func Offset: 0x4e4
	// Line 679, Address: 0x26ffec, Func Offset: 0x4fc
	// Line 699, Address: 0x26fff0, Func Offset: 0x500
	// Line 681, Address: 0x270004, Func Offset: 0x514
	// Line 699, Address: 0x27001c, Func Offset: 0x52c
	// Line 683, Address: 0x270024, Func Offset: 0x534
	// Line 700, Address: 0x270034, Func Offset: 0x544
	// Func End, Address: 0x270050, Func Offset: 0x560
}

// UpdateWaveMode__11zNMESpawnerFf
// Start address: 0x270050
void zNMESpawner::UpdateWaveMode()
{
	SMSPStatus* spstat;
	// Line 451, Address: 0x270050, Func Offset: 0
	// Line 455, Address: 0x270054, Func Offset: 0x4
	// Line 451, Address: 0x270058, Func Offset: 0x8
	// Line 452, Address: 0x270064, Func Offset: 0x14
	// Line 451, Address: 0x270068, Func Offset: 0x18
	// Line 455, Address: 0x270070, Func Offset: 0x20
	// Line 458, Address: 0x2700b0, Func Offset: 0x60
	// Line 469, Address: 0x2700f4, Func Offset: 0xa4
	// Line 471, Address: 0x270100, Func Offset: 0xb0
	// Line 474, Address: 0x270118, Func Offset: 0xc8
	// Line 493, Address: 0x270120, Func Offset: 0xd0
	// Line 495, Address: 0x270130, Func Offset: 0xe0
	// Line 503, Address: 0x270148, Func Offset: 0xf8
	// Line 507, Address: 0x270150, Func Offset: 0x100
	// Line 509, Address: 0x27015c, Func Offset: 0x10c
	// Line 513, Address: 0x2701a0, Func Offset: 0x150
	// Line 532, Address: 0x2701b4, Func Offset: 0x164
	// Line 536, Address: 0x2701cc, Func Offset: 0x17c
	// Line 537, Address: 0x2701dc, Func Offset: 0x18c
	// Line 539, Address: 0x2701e0, Func Offset: 0x190
	// Line 537, Address: 0x2701e4, Func Offset: 0x194
	// Line 539, Address: 0x2701e8, Func Offset: 0x198
	// Line 540, Address: 0x270208, Func Offset: 0x1b8
	// Line 543, Address: 0x27022c, Func Offset: 0x1dc
	// Line 544, Address: 0x27023c, Func Offset: 0x1ec
	// Line 571, Address: 0x270260, Func Offset: 0x210
	// Line 458, Address: 0x270268, Func Offset: 0x218
	// Line 571, Address: 0x27026c, Func Offset: 0x21c
	// Line 458, Address: 0x270274, Func Offset: 0x224
	// Line 571, Address: 0x27027c, Func Offset: 0x22c
	// Line 458, Address: 0x27028c, Func Offset: 0x23c
	// Line 571, Address: 0x270290, Func Offset: 0x240
	// Line 458, Address: 0x270298, Func Offset: 0x248
	// Line 571, Address: 0x27029c, Func Offset: 0x24c
	// Line 458, Address: 0x2702a4, Func Offset: 0x254
	// Line 571, Address: 0x2702a8, Func Offset: 0x258
	// Line 458, Address: 0x2702ac, Func Offset: 0x25c
	// Line 571, Address: 0x2702b0, Func Offset: 0x260
	// Line 465, Address: 0x2702cc, Func Offset: 0x27c
	// Line 466, Address: 0x2702d0, Func Offset: 0x280
	// Line 460, Address: 0x2702d8, Func Offset: 0x288
	// Line 461, Address: 0x2702dc, Func Offset: 0x28c
	// Line 571, Address: 0x2702e0, Func Offset: 0x290
	// Line 461, Address: 0x2702e4, Func Offset: 0x294
	// Line 571, Address: 0x2702e8, Func Offset: 0x298
	// Line 461, Address: 0x2702ec, Func Offset: 0x29c
	// Line 571, Address: 0x2702f8, Func Offset: 0x2a8
	// Line 462, Address: 0x270304, Func Offset: 0x2b4
	// Line 470, Address: 0x270314, Func Offset: 0x2c4
	// Line 571, Address: 0x27031c, Func Offset: 0x2cc
	// Line 479, Address: 0x270320, Func Offset: 0x2d0
	// Line 571, Address: 0x27033c, Func Offset: 0x2ec
	// Line 481, Address: 0x27034c, Func Offset: 0x2fc
	// Line 571, Address: 0x270354, Func Offset: 0x304
	// Line 481, Address: 0x270368, Func Offset: 0x318
	// Line 571, Address: 0x27036c, Func Offset: 0x31c
	// Line 484, Address: 0x270380, Func Offset: 0x330
	// Line 571, Address: 0x27038c, Func Offset: 0x33c
	// Line 484, Address: 0x2703a0, Func Offset: 0x350
	// Line 571, Address: 0x2703a4, Func Offset: 0x354
	// Line 484, Address: 0x2703b4, Func Offset: 0x364
	// Line 571, Address: 0x2703b8, Func Offset: 0x368
	// Line 486, Address: 0x2703c8, Func Offset: 0x378
	// Line 571, Address: 0x2703d0, Func Offset: 0x380
	// Line 488, Address: 0x2703e0, Func Offset: 0x390
	// Line 571, Address: 0x2703e8, Func Offset: 0x398
	// Line 488, Address: 0x2703f0, Func Offset: 0x3a0
	// Line 490, Address: 0x270448, Func Offset: 0x3f8
	// Line 481, Address: 0x270450, Func Offset: 0x400
	// Line 571, Address: 0x270458, Func Offset: 0x408
	// Line 481, Address: 0x270460, Func Offset: 0x410
	// Line 571, Address: 0x270468, Func Offset: 0x418
	// Line 481, Address: 0x270470, Func Offset: 0x420
	// Line 571, Address: 0x2704a4, Func Offset: 0x454
	// Line 481, Address: 0x2704a8, Func Offset: 0x458
	// Line 571, Address: 0x2704ac, Func Offset: 0x45c
	// Line 481, Address: 0x2704b0, Func Offset: 0x460
	// Line 571, Address: 0x2704b8, Func Offset: 0x468
	// Line 481, Address: 0x2704d0, Func Offset: 0x480
	// Line 571, Address: 0x2704d4, Func Offset: 0x484
	// Line 484, Address: 0x270500, Func Offset: 0x4b0
	// Line 571, Address: 0x270504, Func Offset: 0x4b4
	// Line 484, Address: 0x270514, Func Offset: 0x4c4
	// Line 571, Address: 0x270518, Func Offset: 0x4c8
	// Line 494, Address: 0x270528, Func Offset: 0x4d8
	// Line 509, Address: 0x270538, Func Offset: 0x4e8
	// Line 571, Address: 0x27053c, Func Offset: 0x4ec
	// Line 510, Address: 0x270544, Func Offset: 0x4f4
	// Line 571, Address: 0x27054c, Func Offset: 0x4fc
	// Line 514, Address: 0x270550, Func Offset: 0x500
	// Line 571, Address: 0x270568, Func Offset: 0x518
	// Line 549, Address: 0x27057c, Func Offset: 0x52c
	// Line 571, Address: 0x270580, Func Offset: 0x530
	// Line 551, Address: 0x270588, Func Offset: 0x538
	// Line 571, Address: 0x27058c, Func Offset: 0x53c
	// Line 553, Address: 0x270598, Func Offset: 0x548
	// Line 552, Address: 0x2705b0, Func Offset: 0x560
	// Line 571, Address: 0x2705b4, Func Offset: 0x564
	// Line 554, Address: 0x2705c8, Func Offset: 0x578
	// Line 571, Address: 0x2705e0, Func Offset: 0x590
	// Line 556, Address: 0x2705e8, Func Offset: 0x598
	// Line 572, Address: 0x2705f8, Func Offset: 0x5a8
	// Func End, Address: 0x270614, Func Offset: 0x5c4
}

// Timestep__11zNMESpawnerFf
// Start address: 0x270620
void zNMESpawner::Timestep(float32 dt)
{
	// Line 403, Address: 0x270620, Func Offset: 0
	// Line 410, Address: 0x270638, Func Offset: 0x18
	// Line 413, Address: 0x270644, Func Offset: 0x24
	// Line 417, Address: 0x270658, Func Offset: 0x38
	// Line 419, Address: 0x270684, Func Offset: 0x64
	// Line 421, Address: 0x2706b4, Func Offset: 0x94
	// Line 422, Address: 0x2706c0, Func Offset: 0xa0
	// Line 424, Address: 0x2706c8, Func Offset: 0xa8
	// Line 425, Address: 0x2706d4, Func Offset: 0xb4
	// Line 427, Address: 0x2706dc, Func Offset: 0xbc
	// Line 428, Address: 0x2706e8, Func Offset: 0xc8
	// Line 430, Address: 0x2706f0, Func Offset: 0xd0
	// Line 447, Address: 0x2706fc, Func Offset: 0xdc
	// Line 448, Address: 0x270714, Func Offset: 0xf4
	// Func End, Address: 0x270728, Func Offset: 0x108
}

// MapPreferred__11zNMESpawnerFv
// Start address: 0x270730
void zNMESpawner::MapPreferred()
{
	int32 i;
	SMNPCStatus* npc_stat;
	zMovePoint* sp;
	// Line 350, Address: 0x270730, Func Offset: 0
	// Line 355, Address: 0x270748, Func Offset: 0x18
	// Line 350, Address: 0x27074c, Func Offset: 0x1c
	// Line 357, Address: 0x270754, Func Offset: 0x24
	// Line 358, Address: 0x270758, Func Offset: 0x28
	// Line 361, Address: 0x270760, Func Offset: 0x30
	// Line 362, Address: 0x270770, Func Offset: 0x40
	// Line 365, Address: 0x270778, Func Offset: 0x48
	// Line 366, Address: 0x270798, Func Offset: 0x68
	// Line 369, Address: 0x2707a0, Func Offset: 0x70
	// Line 370, Address: 0x2707a4, Func Offset: 0x74
	// Line 372, Address: 0x2707ac, Func Offset: 0x7c
	// Line 374, Address: 0x2707c0, Func Offset: 0x90
	// Line 375, Address: 0x2707e0, Func Offset: 0xb0
	// Func End, Address: 0x2707fc, Func Offset: 0xcc
}

// AddSpawnNPC__11zNMESpawnerFP10zNMECommon
// Start address: 0x270800
int32 zNMESpawner::AddSpawnNPC(zNMECommon* npc)
{
	int32 ack;
	int32 i;
	SMNPCStatus* npc_stat;
	// Line 294, Address: 0x270800, Func Offset: 0
	// Line 303, Address: 0x270814, Func Offset: 0x14
	// Line 295, Address: 0x270818, Func Offset: 0x18
	// Line 305, Address: 0x270820, Func Offset: 0x20
	// Line 306, Address: 0x27082c, Func Offset: 0x2c
	// Line 309, Address: 0x270830, Func Offset: 0x30
	// Line 307, Address: 0x270834, Func Offset: 0x34
	// Line 310, Address: 0x270838, Func Offset: 0x38
	// Line 311, Address: 0x270840, Func Offset: 0x40
	// Line 316, Address: 0x270850, Func Offset: 0x50
	// Line 319, Address: 0x270860, Func Offset: 0x60
	// Line 320, Address: 0x270864, Func Offset: 0x64
	// Func End, Address: 0x270874, Func Offset: 0x74
}

// AddSpawnPoint__11zNMESpawnerFP10zMovePoint
// Start address: 0x270880
int32 zNMESpawner::AddSpawnPoint(zMovePoint* sp)
{
	SMSPStatus* sp_stat;
	int32 ack;
	int32 i;
	// Line 276, Address: 0x270880, Func Offset: 0
	// Line 280, Address: 0x270884, Func Offset: 0x4
	// Line 282, Address: 0x270888, Func Offset: 0x8
	// Line 281, Address: 0x27088c, Func Offset: 0xc
	// Line 282, Address: 0x270890, Func Offset: 0x10
	// Line 283, Address: 0x27089c, Func Offset: 0x1c
	// Line 285, Address: 0x2708a0, Func Offset: 0x20
	// Line 286, Address: 0x2708a4, Func Offset: 0x24
	// Line 287, Address: 0x2708ac, Func Offset: 0x2c
	// Line 291, Address: 0x2708c0, Func Offset: 0x40
	// Func End, Address: 0x2708c8, Func Offset: 0x48
}

// zNMESpawner_GetInstance__Fv
// Start address: 0x2708d0
zNMESpawner* zNMESpawner_GetInstance()
{
	zNMESpawner* sm;
	zNMESpawner* sm_tmp;
	SMDepot* depot;
	int32 i;
	// Line 218, Address: 0x2708d0, Func Offset: 0
	// Line 214, Address: 0x2708d4, Func Offset: 0x4
	// Line 218, Address: 0x2708d8, Func Offset: 0x8
	// Line 212, Address: 0x2708dc, Func Offset: 0xc
	// Line 214, Address: 0x2708e0, Func Offset: 0x10
	// Line 218, Address: 0x2708e4, Func Offset: 0x14
	// Line 219, Address: 0x2708f4, Func Offset: 0x24
	// Line 220, Address: 0x2708f8, Func Offset: 0x28
	// Line 221, Address: 0x270908, Func Offset: 0x38
	// Line 223, Address: 0x27090c, Func Offset: 0x3c
	// Line 224, Address: 0x270914, Func Offset: 0x44
	// Line 229, Address: 0x270928, Func Offset: 0x58
	// Func End, Address: 0x270930, Func Offset: 0x60
}

// SceneFinish__11zMODSpawnerFv
// Start address: 0x270930
void zMODSpawner::SceneFinish()
{
	SMDepot* depot;
	int32 i;
	// Line 172, Address: 0x270930, Func Offset: 0
	// Line 178, Address: 0x270934, Func Offset: 0x4
	// Line 172, Address: 0x270938, Func Offset: 0x8
	// Line 173, Address: 0x270944, Func Offset: 0x14
	// Line 172, Address: 0x270948, Func Offset: 0x18
	// Line 173, Address: 0x27094c, Func Offset: 0x1c
	// Line 178, Address: 0x270950, Func Offset: 0x20
	// Line 181, Address: 0x270964, Func Offset: 0x34
	// Line 182, Address: 0x270974, Func Offset: 0x44
	// Line 185, Address: 0x270988, Func Offset: 0x58
	// Line 192, Address: 0x270994, Func Offset: 0x64
	// Func End, Address: 0x2709ac, Func Offset: 0x7c
}

// ScenePrepare__11zMODSpawnerFv
// Start address: 0x2709b0
void zMODSpawner::ScenePrepare()
{
	SMDepot* depot;
	zNMESpawner* sm;
	int32 i;
	// Line 138, Address: 0x2709b0, Func Offset: 0
	// Line 144, Address: 0x2709b4, Func Offset: 0x4
	// Line 138, Address: 0x2709b8, Func Offset: 0x8
	// Line 144, Address: 0x2709bc, Func Offset: 0xc
	// Line 138, Address: 0x2709c0, Func Offset: 0x10
	// Line 139, Address: 0x2709c4, Func Offset: 0x14
	// Line 138, Address: 0x2709c8, Func Offset: 0x18
	// Line 139, Address: 0x2709cc, Func Offset: 0x1c
	// Line 144, Address: 0x2709d0, Func Offset: 0x20
	// Line 152, Address: 0x2709d8, Func Offset: 0x28
	// Line 153, Address: 0x2709dc, Func Offset: 0x2c
	// Line 154, Address: 0x2709f0, Func Offset: 0x40
	// Line 162, Address: 0x2709fc, Func Offset: 0x4c
	// Line 169, Address: 0x270a0c, Func Offset: 0x5c
	// Func End, Address: 0x270a20, Func Offset: 0x70
}

