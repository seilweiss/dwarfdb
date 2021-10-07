



int32 MakeIceCreamSplat(xVec3* splatPos);
void FXUpdate(float32 dt, float32 tym_animPlusTime, float32 tym_animDur, float32 tym_animCurr);
void RibbonLoop();
void DoCapsuleTests();
int32 TongueSpinMailDamage(NMEDamageInfo* dmgmail);
int32 TypeHandleMail(NMEMsg* mail);
int32 ColChk_Player();
int32 ColChk_PlayerJump();
void KnockMeBack();
uint8 PickRandomPointInArena(xVec3* pos, uint8 fNearPlayer);
void EnterState(eTongueSpinState newState);
int32 DfltVulnFlags();
void Reset();
void Process(float32 dt);
void BUpdate(xVec3* pos);
void Setup();
void Init(xEntAsset* asset);
void SelfSetup();
xAnimTable* CreateAnimTable(xAnimTable* table);
void CreateTongueSpinAnimTable(xAnimTable* table);

// MakeIceCreamSplat__14zNMETongueSpinFP5xVec3
// Start address: 0x1f6730
int32 zNMETongueSpin::MakeIceCreamSplat(xVec3* splatPos)
{
	zNMEHazard* haz;
	HAZTypical* typical;
	// Line 1502, Address: 0x1f6730, Func Offset: 0
	// Line 1503, Address: 0x1f674c, Func Offset: 0x1c
	// Line 1504, Address: 0x1f6758, Func Offset: 0x28
	// Line 1508, Address: 0x1f6760, Func Offset: 0x30
	// Line 1509, Address: 0x1f6798, Func Offset: 0x68
	// Line 1512, Address: 0x1f67a0, Func Offset: 0x70
	// Line 1513, Address: 0x1f6814, Func Offset: 0xe4
	// Line 1505, Address: 0x1f6820, Func Offset: 0xf0
	// Line 1513, Address: 0x1f6828, Func Offset: 0xf8
	// Line 1508, Address: 0x1f682c, Func Offset: 0xfc
	// Line 1513, Address: 0x1f683c, Func Offset: 0x10c
	// Line 1508, Address: 0x1f6844, Func Offset: 0x114
	// Line 1516, Address: 0x1f6850, Func Offset: 0x120
	// Line 1513, Address: 0x1f6854, Func Offset: 0x124
	// Line 1516, Address: 0x1f6858, Func Offset: 0x128
	// Line 1517, Address: 0x1f6870, Func Offset: 0x140
	// Line 1522, Address: 0x1f6878, Func Offset: 0x148
	// Line 1523, Address: 0x1f6880, Func Offset: 0x150
	// Line 1516, Address: 0x1f6884, Func Offset: 0x154
	// Line 1517, Address: 0x1f6888, Func Offset: 0x158
	// Line 1520, Address: 0x1f6894, Func Offset: 0x164
	// Line 1522, Address: 0x1f68a0, Func Offset: 0x170
	// Line 1523, Address: 0x1f68a4, Func Offset: 0x174
	// Line 1525, Address: 0x1f68fc, Func Offset: 0x1cc
	// Line 1523, Address: 0x1f6900, Func Offset: 0x1d0
	// Line 1526, Address: 0x1f6908, Func Offset: 0x1d8
	// Func End, Address: 0x1f6924, Func Offset: 0x1f4
}

// FXUpdate__14zNMETongueSpinFffff
// Start address: 0x1f6930
void zNMETongueSpin::FXUpdate(float32 dt, float32 tym_animPlusTime, float32 tym_animDur, float32 tym_animCurr)
{
	xSphere bubSphere;
	xMat4x3* mat_root;
	xVec3 pos_head;
	xVec3 posEmit;
	xVec3 dirEmit;
	xVec3 decalScale;
	xMat4x3 gopherMat;
	xRay3 ray;
	xCollis coll;
	// Line 1407, Address: 0x1f6930, Func Offset: 0
	// Line 1408, Address: 0x1f6968, Func Offset: 0x38
	// Line 1411, Address: 0x1f6970, Func Offset: 0x40
	// Line 1413, Address: 0x1f697c, Func Offset: 0x4c
	// Line 1417, Address: 0x1f699c, Func Offset: 0x6c
	// Line 1418, Address: 0x1f6a18, Func Offset: 0xe8
	// Line 1420, Address: 0x1f6a24, Func Offset: 0xf4
	// Line 1421, Address: 0x1f6a2c, Func Offset: 0xfc
	// Line 1423, Address: 0x1f6a34, Func Offset: 0x104
	// Line 1428, Address: 0x1f6a54, Func Offset: 0x124
	// Line 1429, Address: 0x1f6a8c, Func Offset: 0x15c
	// Line 1431, Address: 0x1f6a94, Func Offset: 0x164
	// Line 1434, Address: 0x1f6abc, Func Offset: 0x18c
	// Line 1433, Address: 0x1f6ac0, Func Offset: 0x190
	// Line 1434, Address: 0x1f6ac4, Func Offset: 0x194
	// Line 1436, Address: 0x1f6afc, Func Offset: 0x1cc
	// Line 1439, Address: 0x1f6b14, Func Offset: 0x1e4
	// Line 1440, Address: 0x1f6b18, Func Offset: 0x1e8
	// Line 1439, Address: 0x1f6b1c, Func Offset: 0x1ec
	// Line 1440, Address: 0x1f6b34, Func Offset: 0x204
	// Line 1439, Address: 0x1f6b38, Func Offset: 0x208
	// Line 1442, Address: 0x1f6b40, Func Offset: 0x210
	// Line 1443, Address: 0x1f6b48, Func Offset: 0x218
	// Line 1444, Address: 0x1f6b90, Func Offset: 0x260
	// Line 1445, Address: 0x1f6b94, Func Offset: 0x264
	// Line 1444, Address: 0x1f6b98, Func Offset: 0x268
	// Line 1445, Address: 0x1f6b9c, Func Offset: 0x26c
	// Line 1444, Address: 0x1f6ba0, Func Offset: 0x270
	// Line 1445, Address: 0x1f6ba8, Func Offset: 0x278
	// Line 1444, Address: 0x1f6bac, Func Offset: 0x27c
	// Line 1445, Address: 0x1f6bc8, Func Offset: 0x298
	// Line 1446, Address: 0x1f6bd0, Func Offset: 0x2a0
	// Line 1447, Address: 0x1f6bf8, Func Offset: 0x2c8
	// Line 1446, Address: 0x1f6bfc, Func Offset: 0x2cc
	// Line 1447, Address: 0x1f6c00, Func Offset: 0x2d0
	// Line 1448, Address: 0x1f6c18, Func Offset: 0x2e8
	// Line 1449, Address: 0x1f6c68, Func Offset: 0x338
	// Line 1451, Address: 0x1f6c74, Func Offset: 0x344
	// Line 1449, Address: 0x1f6c78, Func Offset: 0x348
	// Line 1450, Address: 0x1f6ca4, Func Offset: 0x374
	// Line 1451, Address: 0x1f6ca8, Func Offset: 0x378
	// Line 1456, Address: 0x1f6cb4, Func Offset: 0x384
	// Line 1462, Address: 0x1f6d10, Func Offset: 0x3e0
	// Line 1463, Address: 0x1f6d18, Func Offset: 0x3e8
	// Line 1462, Address: 0x1f6d1c, Func Offset: 0x3ec
	// Line 1463, Address: 0x1f6d34, Func Offset: 0x404
	// Line 1464, Address: 0x1f6d44, Func Offset: 0x414
	// Line 1466, Address: 0x1f6d48, Func Offset: 0x418
	// Line 1464, Address: 0x1f6d4c, Func Offset: 0x41c
	// Line 1466, Address: 0x1f6d50, Func Offset: 0x420
	// Line 1464, Address: 0x1f6d58, Func Offset: 0x428
	// Line 1466, Address: 0x1f6d5c, Func Offset: 0x42c
	// Line 1467, Address: 0x1f6d88, Func Offset: 0x458
	// Line 1468, Address: 0x1f6de4, Func Offset: 0x4b4
	// Line 1470, Address: 0x1f6e2c, Func Offset: 0x4fc
	// Line 1468, Address: 0x1f6e3c, Func Offset: 0x50c
	// Line 1470, Address: 0x1f6e50, Func Offset: 0x520
	// Line 1472, Address: 0x1f6e58, Func Offset: 0x528
	// Line 1473, Address: 0x1f6e5c, Func Offset: 0x52c
	// Line 1472, Address: 0x1f6e64, Func Offset: 0x534
	// Line 1473, Address: 0x1f6e68, Func Offset: 0x538
	// Line 1476, Address: 0x1f6e74, Func Offset: 0x544
	// Line 1473, Address: 0x1f6e78, Func Offset: 0x548
	// Line 1476, Address: 0x1f6e7c, Func Offset: 0x54c
	// Line 1473, Address: 0x1f6e84, Func Offset: 0x554
	// Line 1476, Address: 0x1f6e88, Func Offset: 0x558
	// Line 1478, Address: 0x1f6e8c, Func Offset: 0x55c
	// Line 1476, Address: 0x1f6e90, Func Offset: 0x560
	// Line 1478, Address: 0x1f6eb8, Func Offset: 0x588
	// Line 1485, Address: 0x1f6ee0, Func Offset: 0x5b0
	// Line 1486, Address: 0x1f6ee4, Func Offset: 0x5b4
	// Line 1489, Address: 0x1f6ee8, Func Offset: 0x5b8
	// Line 1492, Address: 0x1f6eec, Func Offset: 0x5bc
	// Line 1478, Address: 0x1f6ef4, Func Offset: 0x5c4
	// Line 1487, Address: 0x1f6f0c, Func Offset: 0x5dc
	// Line 1478, Address: 0x1f6f18, Func Offset: 0x5e8
	// Line 1492, Address: 0x1f6f1c, Func Offset: 0x5ec
	// Line 1479, Address: 0x1f6f24, Func Offset: 0x5f4
	// Line 1480, Address: 0x1f6f34, Func Offset: 0x604
	// Line 1481, Address: 0x1f6f38, Func Offset: 0x608
	// Line 1486, Address: 0x1f6f3c, Func Offset: 0x60c
	// Line 1481, Address: 0x1f6f44, Func Offset: 0x614
	// Line 1487, Address: 0x1f6f48, Func Offset: 0x618
	// Line 1481, Address: 0x1f6f4c, Func Offset: 0x61c
	// Line 1487, Address: 0x1f6f50, Func Offset: 0x620
	// Line 1485, Address: 0x1f6f54, Func Offset: 0x624
	// Line 1481, Address: 0x1f6f58, Func Offset: 0x628
	// Line 1489, Address: 0x1f6f5c, Func Offset: 0x62c
	// Line 1486, Address: 0x1f6f60, Func Offset: 0x630
	// Line 1485, Address: 0x1f6f64, Func Offset: 0x634
	// Line 1486, Address: 0x1f6f68, Func Offset: 0x638
	// Line 1485, Address: 0x1f6f6c, Func Offset: 0x63c
	// Line 1492, Address: 0x1f6f70, Func Offset: 0x640
	// Line 1494, Address: 0x1f6f78, Func Offset: 0x648
	// Line 1496, Address: 0x1f6f8c, Func Offset: 0x65c
	// Line 1494, Address: 0x1f6f90, Func Offset: 0x660
	// Line 1496, Address: 0x1f6f94, Func Offset: 0x664
	// Line 1494, Address: 0x1f6fa4, Func Offset: 0x674
	// Line 1496, Address: 0x1f6fac, Func Offset: 0x67c
	// Line 1497, Address: 0x1f6fb4, Func Offset: 0x684
	// Line 1499, Address: 0x1f6fc0, Func Offset: 0x690
	// Func End, Address: 0x1f6fe4, Func Offset: 0x6b4
}

// RibbonLoop__14zNMETongueSpinFv
// Start address: 0x1f6ff0
void zNMETongueSpin::RibbonLoop()
{
	RibData* ribhelp;
	xVec3 pos1;
	xVec3 pos2;
	xMat4x3* mat_root;
	xVec3 dir_emit;
	float32 dst;
	// Line 1362, Address: 0x1f6ff0, Func Offset: 0
	// Line 1363, Address: 0x1f7000, Func Offset: 0x10
	// Line 1366, Address: 0x1f700c, Func Offset: 0x1c
	// Line 1367, Address: 0x1f7018, Func Offset: 0x28
	// Line 1372, Address: 0x1f7024, Func Offset: 0x34
	// Line 1370, Address: 0x1f7028, Func Offset: 0x38
	// Line 1372, Address: 0x1f702c, Func Offset: 0x3c
	// Line 1370, Address: 0x1f7030, Func Offset: 0x40
	// Line 1385, Address: 0x1f7034, Func Offset: 0x44
	// Line 1386, Address: 0x1f7038, Func Offset: 0x48
	// Line 1372, Address: 0x1f703c, Func Offset: 0x4c
	// Line 1385, Address: 0x1f7048, Func Offset: 0x58
	// Line 1386, Address: 0x1f7054, Func Offset: 0x64
	// Line 1385, Address: 0x1f7060, Func Offset: 0x70
	// Line 1386, Address: 0x1f706c, Func Offset: 0x7c
	// Line 1389, Address: 0x1f7078, Func Offset: 0x88
	// Line 1391, Address: 0x1f7080, Func Offset: 0x90
	// Line 1392, Address: 0x1f70c8, Func Offset: 0xd8
	// Line 1394, Address: 0x1f7100, Func Offset: 0x110
	// Line 1398, Address: 0x1f7148, Func Offset: 0x158
	// Line 1395, Address: 0x1f7150, Func Offset: 0x160
	// Line 1398, Address: 0x1f7154, Func Offset: 0x164
	// Line 1395, Address: 0x1f7158, Func Offset: 0x168
	// Line 1398, Address: 0x1f715c, Func Offset: 0x16c
	// Line 1395, Address: 0x1f7168, Func Offset: 0x178
	// Line 1399, Address: 0x1f716c, Func Offset: 0x17c
	// Line 1395, Address: 0x1f7170, Func Offset: 0x180
	// Line 1398, Address: 0x1f7174, Func Offset: 0x184
	// Line 1395, Address: 0x1f7180, Func Offset: 0x190
	// Line 1398, Address: 0x1f7184, Func Offset: 0x194
	// Line 1395, Address: 0x1f7188, Func Offset: 0x198
	// Line 1398, Address: 0x1f718c, Func Offset: 0x19c
	// Line 1395, Address: 0x1f7198, Func Offset: 0x1a8
	// Line 1398, Address: 0x1f719c, Func Offset: 0x1ac
	// Line 1395, Address: 0x1f71a8, Func Offset: 0x1b8
	// Line 1398, Address: 0x1f71ac, Func Offset: 0x1bc
	// Line 1395, Address: 0x1f71b0, Func Offset: 0x1c0
	// Line 1398, Address: 0x1f71b4, Func Offset: 0x1c4
	// Line 1395, Address: 0x1f71bc, Func Offset: 0x1cc
	// Line 1398, Address: 0x1f71c0, Func Offset: 0x1d0
	// Line 1395, Address: 0x1f71c4, Func Offset: 0x1d4
	// Line 1398, Address: 0x1f71c8, Func Offset: 0x1d8
	// Line 1395, Address: 0x1f71d4, Func Offset: 0x1e4
	// Line 1398, Address: 0x1f71d8, Func Offset: 0x1e8
	// Line 1395, Address: 0x1f71f4, Func Offset: 0x204
	// Line 1398, Address: 0x1f71f8, Func Offset: 0x208
	// Line 1399, Address: 0x1f7204, Func Offset: 0x214
	// Line 1403, Address: 0x1f720c, Func Offset: 0x21c
	// Line 1404, Address: 0x1f722c, Func Offset: 0x23c
	// Func End, Address: 0x1f7240, Func Offset: 0x250
}

// DoCapsuleTests__14zNMETongueSpinFv
// Start address: 0x1f7240
void zNMETongueSpin::DoCapsuleTests()
{
	xVec3 pos_head;
	xVec3 pos_hand;
	xSweptSphere sws;
	// Line 1250, Address: 0x1f7240, Func Offset: 0
	// Line 1256, Address: 0x1f7248, Func Offset: 0x8
	// Line 1250, Address: 0x1f724c, Func Offset: 0xc
	// Line 1257, Address: 0x1f7250, Func Offset: 0x10
	// Line 1250, Address: 0x1f7254, Func Offset: 0x14
	// Line 1256, Address: 0x1f7260, Func Offset: 0x20
	// Line 1257, Address: 0x1f7280, Func Offset: 0x40
	// Line 1258, Address: 0x1f7298, Func Offset: 0x58
	// Line 1259, Address: 0x1f72e8, Func Offset: 0xa8
	// Line 1260, Address: 0x1f7338, Func Offset: 0xf8
	// Line 1272, Address: 0x1f7344, Func Offset: 0x104
	// Line 1260, Address: 0x1f7348, Func Offset: 0x108
	// Line 1272, Address: 0x1f734c, Func Offset: 0x10c
	// Line 1261, Address: 0x1f7350, Func Offset: 0x110
	// Line 1272, Address: 0x1f7354, Func Offset: 0x114
	// Line 1261, Address: 0x1f7358, Func Offset: 0x118
	// Line 1260, Address: 0x1f7360, Func Offset: 0x120
	// Line 1261, Address: 0x1f7388, Func Offset: 0x148
	// Line 1272, Address: 0x1f73b0, Func Offset: 0x170
	// Line 1273, Address: 0x1f73b8, Func Offset: 0x178
	// Line 1281, Address: 0x1f73d0, Func Offset: 0x190
	// Line 1283, Address: 0x1f73dc, Func Offset: 0x19c
	// Line 1284, Address: 0x1f73f4, Func Offset: 0x1b4
	// Line 1285, Address: 0x1f73fc, Func Offset: 0x1bc
	// Line 1286, Address: 0x1f740c, Func Offset: 0x1cc
	// Line 1291, Address: 0x1f7414, Func Offset: 0x1d4
	// Func End, Address: 0x1f7424, Func Offset: 0x1e4
}

// TongueSpinMailDamage__14zNMETongueSpinFP13NMEDamageInfo
// Start address: 0x1f7430
int32 zNMETongueSpin::TongueSpinMailDamage(NMEDamageInfo* dmgmail)
{
	int32 handled;
	en_plyrpup pup;
	int32 amt_dmg;
	// Line 1168, Address: 0x1f7430, Func Offset: 0
	// Line 1175, Address: 0x1f7434, Func Offset: 0x4
	// Line 1168, Address: 0x1f7438, Func Offset: 0x8
	// Line 1172, Address: 0x1f744c, Func Offset: 0x1c
	// Line 1175, Address: 0x1f7450, Func Offset: 0x20
	// Line 1181, Address: 0x1f7464, Func Offset: 0x34
	// Line 1207, Address: 0x1f7488, Func Offset: 0x58
	// Line 1210, Address: 0x1f7494, Func Offset: 0x64
	// Line 1207, Address: 0x1f7498, Func Offset: 0x68
	// Line 1210, Address: 0x1f749c, Func Offset: 0x6c
	// Line 1212, Address: 0x1f74a8, Func Offset: 0x78
	// Line 1213, Address: 0x1f74f4, Func Offset: 0xc4
	// Line 1214, Address: 0x1f74fc, Func Offset: 0xcc
	// Line 1219, Address: 0x1f7504, Func Offset: 0xd4
	// Line 1221, Address: 0x1f7510, Func Offset: 0xe0
	// Line 1226, Address: 0x1f7518, Func Offset: 0xe8
	// Line 1232, Address: 0x1f751c, Func Offset: 0xec
	// Line 1175, Address: 0x1f752c, Func Offset: 0xfc
	// Line 1232, Address: 0x1f7530, Func Offset: 0x100
	// Line 1178, Address: 0x1f754c, Func Offset: 0x11c
	// Line 1233, Address: 0x1f755c, Func Offset: 0x12c
	// Func End, Address: 0x1f7574, Func Offset: 0x144
}

// TypeHandleMail__14zNMETongueSpinFP6NMEMsg
// Start address: 0x1f7580
int32 zNMETongueSpin::TypeHandleMail(NMEMsg* mail)
{
	int32 handled;
	// Line 1120, Address: 0x1f7580, Func Offset: 0
	// Line 1123, Address: 0x1f7584, Func Offset: 0x4
	// Line 1120, Address: 0x1f7588, Func Offset: 0x8
	// Line 1123, Address: 0x1f759c, Func Offset: 0x1c
	// Line 1126, Address: 0x1f75c4, Func Offset: 0x44
	// Line 1127, Address: 0x1f765c, Func Offset: 0xdc
	// Line 1132, Address: 0x1f7664, Func Offset: 0xe4
	// Line 1133, Address: 0x1f766c, Func Offset: 0xec
	// Line 1136, Address: 0x1f7674, Func Offset: 0xf4
	// Line 1145, Address: 0x1f767c, Func Offset: 0xfc
	// Line 1126, Address: 0x1f7684, Func Offset: 0x104
	// Line 1145, Address: 0x1f7688, Func Offset: 0x108
	// Line 1146, Address: 0x1f76a4, Func Offset: 0x124
	// Func End, Address: 0x1f76b8, Func Offset: 0x138
}

// ColChk_Player__14zNMETongueSpinFv
// Start address: 0x1f76c0
int32 zNMETongueSpin::ColChk_Player()
{
	xVec3 pos_nme;
	float32 upper;
	xVec3 pos_plyr;
	xVec3 vec_NtoB;
	// Line 1072, Address: 0x1f76c0, Func Offset: 0
	// Line 1073, Address: 0x1f76cc, Func Offset: 0xc
	// Line 1076, Address: 0x1f76dc, Func Offset: 0x1c
	// Line 1077, Address: 0x1f76e8, Func Offset: 0x28
	// Line 1078, Address: 0x1f76f4, Func Offset: 0x34
	// Line 1074, Address: 0x1f76fc, Func Offset: 0x3c
	// Line 1095, Address: 0x1f7704, Func Offset: 0x44
	// Line 1079, Address: 0x1f7708, Func Offset: 0x48
	// Line 1095, Address: 0x1f770c, Func Offset: 0x4c
	// Line 1098, Address: 0x1f7710, Func Offset: 0x50
	// Line 1095, Address: 0x1f7714, Func Offset: 0x54
	// Line 1079, Address: 0x1f7718, Func Offset: 0x58
	// Line 1098, Address: 0x1f771c, Func Offset: 0x5c
	// Line 1079, Address: 0x1f7724, Func Offset: 0x64
	// Line 1098, Address: 0x1f7728, Func Offset: 0x68
	// Line 1093, Address: 0x1f772c, Func Offset: 0x6c
	// Line 1098, Address: 0x1f773c, Func Offset: 0x7c
	// Line 1095, Address: 0x1f7740, Func Offset: 0x80
	// Line 1093, Address: 0x1f7744, Func Offset: 0x84
	// Line 1098, Address: 0x1f7748, Func Offset: 0x88
	// Line 1093, Address: 0x1f7754, Func Offset: 0x94
	// Line 1098, Address: 0x1f775c, Func Offset: 0x9c
	// Line 1099, Address: 0x1f7768, Func Offset: 0xa8
	// Line 1101, Address: 0x1f7774, Func Offset: 0xb4
	// Line 1106, Address: 0x1f7780, Func Offset: 0xc0
	// Line 1101, Address: 0x1f7794, Func Offset: 0xd4
	// Line 1106, Address: 0x1f7798, Func Offset: 0xd8
	// Line 1108, Address: 0x1f779c, Func Offset: 0xdc
	// Line 1106, Address: 0x1f77a0, Func Offset: 0xe0
	// Line 1108, Address: 0x1f77a4, Func Offset: 0xe4
	// Line 1106, Address: 0x1f77a8, Func Offset: 0xe8
	// Line 1108, Address: 0x1f77b4, Func Offset: 0xf4
	// Line 1106, Address: 0x1f77b8, Func Offset: 0xf8
	// Line 1107, Address: 0x1f7804, Func Offset: 0x144
	// Line 1108, Address: 0x1f7814, Func Offset: 0x154
	// Line 1110, Address: 0x1f7820, Func Offset: 0x160
	// Line 1111, Address: 0x1f783c, Func Offset: 0x17c
	// Line 1100, Address: 0x1f7844, Func Offset: 0x184
	// Line 1102, Address: 0x1f784c, Func Offset: 0x18c
	// Line 1109, Address: 0x1f7854, Func Offset: 0x194
	// Line 1114, Address: 0x1f785c, Func Offset: 0x19c
	// Line 1116, Address: 0x1f7868, Func Offset: 0x1a8
	// Line 1117, Address: 0x1f786c, Func Offset: 0x1ac
	// Func End, Address: 0x1f787c, Func Offset: 0x1bc
}

// ColChk_PlayerJump__14zNMETongueSpinFv
// Start address: 0x1f7880
int32 zNMETongueSpin::ColChk_PlayerJump()
{
	xVec3 pos_nme;
	xVec3 pos_plyr;
	xVec3 vec_NtoB;
	uint32 anid_player;
	int32 found;
	int32 k;
	int8 @47188;
	uint32 hashes_pa[6];
	// Line 1019, Address: 0x1f7880, Func Offset: 0
	// Line 1027, Address: 0x1f7884, Func Offset: 0x4
	// Line 1019, Address: 0x1f7888, Func Offset: 0x8
	// Line 1027, Address: 0x1f788c, Func Offset: 0xc
	// Line 1019, Address: 0x1f7890, Func Offset: 0x10
	// Line 1025, Address: 0x1f7894, Func Offset: 0x14
	// Line 1020, Address: 0x1f7898, Func Offset: 0x18
	// Line 1021, Address: 0x1f78a4, Func Offset: 0x24
	// Line 1020, Address: 0x1f78a8, Func Offset: 0x28
	// Line 1027, Address: 0x1f78b0, Func Offset: 0x30
	// Line 1025, Address: 0x1f78b4, Func Offset: 0x34
	// Line 1020, Address: 0x1f78b8, Func Offset: 0x38
	// Line 1025, Address: 0x1f78c4, Func Offset: 0x44
	// Line 1020, Address: 0x1f78c8, Func Offset: 0x48
	// Line 1021, Address: 0x1f78cc, Func Offset: 0x4c
	// Line 1025, Address: 0x1f78d8, Func Offset: 0x58
	// Line 1021, Address: 0x1f78dc, Func Offset: 0x5c
	// Line 1025, Address: 0x1f78e0, Func Offset: 0x60
	// Line 1021, Address: 0x1f78e8, Func Offset: 0x68
	// Line 1025, Address: 0x1f78f0, Func Offset: 0x70
	// Line 1026, Address: 0x1f794c, Func Offset: 0xcc
	// Line 1027, Address: 0x1f795c, Func Offset: 0xdc
	// Line 1029, Address: 0x1f7968, Func Offset: 0xe8
	// Line 1037, Address: 0x1f798c, Func Offset: 0x10c
	// Line 1047, Address: 0x1f7998, Func Offset: 0x118
	// Line 1050, Address: 0x1f799c, Func Offset: 0x11c
	// Line 1048, Address: 0x1f79a0, Func Offset: 0x120
	// Line 1050, Address: 0x1f79a4, Func Offset: 0x124
	// Line 1047, Address: 0x1f79ac, Func Offset: 0x12c
	// Line 1051, Address: 0x1f79c4, Func Offset: 0x144
	// Line 1053, Address: 0x1f79d0, Func Offset: 0x150
	// Line 1054, Address: 0x1f79d8, Func Offset: 0x158
	// Line 1056, Address: 0x1f79e8, Func Offset: 0x168
	// Line 1057, Address: 0x1f79f0, Func Offset: 0x170
	// Line 1028, Address: 0x1f79f8, Func Offset: 0x178
	// Line 1030, Address: 0x1f7a00, Func Offset: 0x180
	// Line 1057, Address: 0x1f7a08, Func Offset: 0x188
	// Line 1037, Address: 0x1f7a78, Func Offset: 0x1f8
	// Line 1057, Address: 0x1f7a7c, Func Offset: 0x1fc
	// Line 1064, Address: 0x1f7a88, Func Offset: 0x208
	// Line 1066, Address: 0x1f7aa4, Func Offset: 0x224
	// Line 1067, Address: 0x1f7aa8, Func Offset: 0x228
	// Func End, Address: 0x1f7ab8, Func Offset: 0x238
}

// KnockMeBack__14zNMETongueSpinFv
// Start address: 0x1f7ac0
void zNMETongueSpin::KnockMeBack()
{
	// Line 997, Address: 0x1f7ac0, Func Offset: 0
	// Line 1003, Address: 0x1f7ac4, Func Offset: 0x4
	// Line 997, Address: 0x1f7acc, Func Offset: 0xc
	// Line 1003, Address: 0x1f7ad0, Func Offset: 0x10
	// Line 997, Address: 0x1f7ad8, Func Offset: 0x18
	// Line 1000, Address: 0x1f7ae4, Func Offset: 0x24
	// Line 1002, Address: 0x1f7ae8, Func Offset: 0x28
	// Line 997, Address: 0x1f7aec, Func Offset: 0x2c
	// Line 1000, Address: 0x1f7af0, Func Offset: 0x30
	// Line 1002, Address: 0x1f7af4, Func Offset: 0x34
	// Line 1000, Address: 0x1f7af8, Func Offset: 0x38
	// Line 1002, Address: 0x1f7b00, Func Offset: 0x40
	// Line 1003, Address: 0x1f7b04, Func Offset: 0x44
	// Line 1009, Address: 0x1f7b44, Func Offset: 0x84
	// Line 1011, Address: 0x1f7b50, Func Offset: 0x90
	// Line 1012, Address: 0x1f7b64, Func Offset: 0xa4
	// Line 1013, Address: 0x1f7b68, Func Offset: 0xa8
	// Line 1014, Address: 0x1f7b6c, Func Offset: 0xac
	// Line 1016, Address: 0x1f7b70, Func Offset: 0xb0
	// Line 1004, Address: 0x1f7b78, Func Offset: 0xb8
	// Line 1016, Address: 0x1f7b8c, Func Offset: 0xcc
	// Line 1004, Address: 0x1f7b94, Func Offset: 0xd4
	// Line 1016, Address: 0x1f7ba0, Func Offset: 0xe0
	// Func End, Address: 0x1f7ba8, Func Offset: 0xe8
}

// PickRandomPointInArena__14zNMETongueSpinFP5xVec3b
// Start address: 0x1f7bb0
uint8 zNMETongueSpin::PickRandomPointInArena(xVec3* pos, uint8 fNearPlayer)
{
	xVec3 center;
	xVec3 player;
	float32 radius;
	xVec3 plyrToFF;
	float32 deltax;
	float32 deltaz;
	float32 angle;
	xVec3 tongueToCenter;
	float32 angle;
	xVec3 dir;
	float32 dist;
	// Line 928, Address: 0x1f7bb0, Func Offset: 0
	// Line 933, Address: 0x1f7bb8, Func Offset: 0x8
	// Line 928, Address: 0x1f7bbc, Func Offset: 0xc
	// Line 936, Address: 0x1f7bc0, Func Offset: 0x10
	// Line 928, Address: 0x1f7bc4, Func Offset: 0x14
	// Line 936, Address: 0x1f7bd0, Func Offset: 0x20
	// Line 928, Address: 0x1f7bd4, Func Offset: 0x24
	// Line 936, Address: 0x1f7bd8, Func Offset: 0x28
	// Line 928, Address: 0x1f7bdc, Func Offset: 0x2c
	// Line 936, Address: 0x1f7be0, Func Offset: 0x30
	// Line 928, Address: 0x1f7be4, Func Offset: 0x34
	// Line 933, Address: 0x1f7be8, Func Offset: 0x38
	// Line 930, Address: 0x1f7bec, Func Offset: 0x3c
	// Line 933, Address: 0x1f7bf0, Func Offset: 0x40
	// Line 930, Address: 0x1f7bf4, Func Offset: 0x44
	// Line 936, Address: 0x1f7c00, Func Offset: 0x50
	// Line 934, Address: 0x1f7c04, Func Offset: 0x54
	// Line 932, Address: 0x1f7c08, Func Offset: 0x58
	// Line 930, Address: 0x1f7c0c, Func Offset: 0x5c
	// Line 935, Address: 0x1f7c10, Func Offset: 0x60
	// Line 936, Address: 0x1f7c14, Func Offset: 0x64
	// Line 934, Address: 0x1f7c18, Func Offset: 0x68
	// Line 930, Address: 0x1f7c1c, Func Offset: 0x6c
	// Line 932, Address: 0x1f7c20, Func Offset: 0x70
	// Line 936, Address: 0x1f7c24, Func Offset: 0x74
	// Line 930, Address: 0x1f7c2c, Func Offset: 0x7c
	// Line 936, Address: 0x1f7c30, Func Offset: 0x80
	// Line 930, Address: 0x1f7c34, Func Offset: 0x84
	// Line 936, Address: 0x1f7c3c, Func Offset: 0x8c
	// Line 930, Address: 0x1f7c78, Func Offset: 0xc8
	// Line 936, Address: 0x1f7c7c, Func Offset: 0xcc
	// Line 930, Address: 0x1f7c80, Func Offset: 0xd0
	// Line 936, Address: 0x1f7c88, Func Offset: 0xd8
	// Line 938, Address: 0x1f7c94, Func Offset: 0xe4
	// Line 942, Address: 0x1f7c9c, Func Offset: 0xec
	// Line 943, Address: 0x1f7ca0, Func Offset: 0xf0
	// Line 941, Address: 0x1f7ca8, Func Offset: 0xf8
	// Line 943, Address: 0x1f7cac, Func Offset: 0xfc
	// Line 944, Address: 0x1f7cc0, Func Offset: 0x110
	// Line 947, Address: 0x1f7cc4, Func Offset: 0x114
	// Line 949, Address: 0x1f7ccc, Func Offset: 0x11c
	// Line 950, Address: 0x1f7ce0, Func Offset: 0x130
	// Line 951, Address: 0x1f7d1c, Func Offset: 0x16c
	// Line 953, Address: 0x1f7d34, Func Offset: 0x184
	// Line 951, Address: 0x1f7d38, Func Offset: 0x188
	// Line 953, Address: 0x1f7d44, Func Offset: 0x194
	// Line 956, Address: 0x1f7d58, Func Offset: 0x1a8
	// Line 953, Address: 0x1f7d5c, Func Offset: 0x1ac
	// Line 956, Address: 0x1f7d60, Func Offset: 0x1b0
	// Line 953, Address: 0x1f7d78, Func Offset: 0x1c8
	// Line 956, Address: 0x1f7d84, Func Offset: 0x1d4
	// Line 958, Address: 0x1f7d90, Func Offset: 0x1e0
	// Line 956, Address: 0x1f7d94, Func Offset: 0x1e4
	// Line 958, Address: 0x1f7ddc, Func Offset: 0x22c
	// Line 956, Address: 0x1f7de0, Func Offset: 0x230
	// Line 958, Address: 0x1f7de4, Func Offset: 0x234
	// Line 966, Address: 0x1f7df8, Func Offset: 0x248
	// Line 971, Address: 0x1f7e00, Func Offset: 0x250
	// Line 972, Address: 0x1f7e14, Func Offset: 0x264
	// Line 975, Address: 0x1f7e50, Func Offset: 0x2a0
	// Line 977, Address: 0x1f7e58, Func Offset: 0x2a8
	// Line 976, Address: 0x1f7e5c, Func Offset: 0x2ac
	// Line 977, Address: 0x1f7e60, Func Offset: 0x2b0
	// Line 979, Address: 0x1f7e6c, Func Offset: 0x2bc
	// Line 977, Address: 0x1f7e70, Func Offset: 0x2c0
	// Line 981, Address: 0x1f7e74, Func Offset: 0x2c4
	// Line 979, Address: 0x1f7e78, Func Offset: 0x2c8
	// Line 981, Address: 0x1f7e80, Func Offset: 0x2d0
	// Line 979, Address: 0x1f7e84, Func Offset: 0x2d4
	// Line 981, Address: 0x1f7f24, Func Offset: 0x374
	// Line 983, Address: 0x1f7f30, Func Offset: 0x380
	// Line 985, Address: 0x1f7f38, Func Offset: 0x388
	// Line 983, Address: 0x1f7f40, Func Offset: 0x390
	// Line 985, Address: 0x1f7f50, Func Offset: 0x3a0
	// Line 983, Address: 0x1f7f54, Func Offset: 0x3a4
	// Line 985, Address: 0x1f7f58, Func Offset: 0x3a8
	// Line 984, Address: 0x1f7f5c, Func Offset: 0x3ac
	// Line 985, Address: 0x1f7f60, Func Offset: 0x3b0
	// Line 993, Address: 0x1f7f64, Func Offset: 0x3b4
	// Line 982, Address: 0x1f7f74, Func Offset: 0x3c4
	// Line 994, Address: 0x1f7f98, Func Offset: 0x3e8
	// Func End, Address: 0x1f7fbc, Func Offset: 0x40c
}

// EnterState__14zNMETongueSpinF16eTongueSpinState
// Start address: 0x1f7fc0
void zNMETongueSpin::EnterState(eTongueSpinState newState)
{
	// Line 810, Address: 0x1f7fc0, Func Offset: 0
	// Line 811, Address: 0x1f7fe8, Func Offset: 0x28
	// Line 814, Address: 0x1f7ff0, Func Offset: 0x30
	// Line 816, Address: 0x1f7ff8, Func Offset: 0x38
	// Line 819, Address: 0x1f8010, Func Offset: 0x50
	// Line 820, Address: 0x1f8014, Func Offset: 0x54
	// Line 829, Address: 0x1f803c, Func Offset: 0x7c
	// Line 830, Address: 0x1f80ec, Func Offset: 0x12c
	// Line 831, Address: 0x1f80f0, Func Offset: 0x130
	// Line 832, Address: 0x1f8308, Func Offset: 0x348
	// Line 833, Address: 0x1f8314, Func Offset: 0x354
	// Line 835, Address: 0x1f831c, Func Offset: 0x35c
	// Line 836, Address: 0x1f832c, Func Offset: 0x36c
	// Line 838, Address: 0x1f8350, Func Offset: 0x390
	// Line 842, Address: 0x1f8358, Func Offset: 0x398
	// Line 844, Address: 0x1f836c, Func Offset: 0x3ac
	// Line 845, Address: 0x1f8398, Func Offset: 0x3d8
	// Line 846, Address: 0x1f8488, Func Offset: 0x4c8
	// Line 847, Address: 0x1f84ac, Func Offset: 0x4ec
	// Line 850, Address: 0x1f84b4, Func Offset: 0x4f4
	// Line 851, Address: 0x1f84dc, Func Offset: 0x51c
	// Line 852, Address: 0x1f85cc, Func Offset: 0x60c
	// Line 856, Address: 0x1f85d0, Func Offset: 0x610
	// Line 860, Address: 0x1f85d8, Func Offset: 0x618
	// Line 861, Address: 0x1f85fc, Func Offset: 0x63c
	// Line 860, Address: 0x1f8600, Func Offset: 0x640
	// Line 861, Address: 0x1f8604, Func Offset: 0x644
	// Line 862, Address: 0x1f8608, Func Offset: 0x648
	// Line 866, Address: 0x1f8610, Func Offset: 0x650
	// Line 867, Address: 0x1f8634, Func Offset: 0x674
	// Line 871, Address: 0x1f863c, Func Offset: 0x67c
	// Line 872, Address: 0x1f8664, Func Offset: 0x6a4
	// Line 880, Address: 0x1f866c, Func Offset: 0x6ac
	// Line 881, Address: 0x1f8690, Func Offset: 0x6d0
	// Line 882, Address: 0x1f86bc, Func Offset: 0x6fc
	// Line 883, Address: 0x1f86c8, Func Offset: 0x708
	// Line 887, Address: 0x1f86d0, Func Offset: 0x710
	// Line 898, Address: 0x1f86fc, Func Offset: 0x73c
	// Line 900, Address: 0x1f870c, Func Offset: 0x74c
	// Line 902, Address: 0x1f871c, Func Offset: 0x75c
	// Line 903, Address: 0x1f8728, Func Offset: 0x768
	// Line 907, Address: 0x1f872c, Func Offset: 0x76c
	// Line 909, Address: 0x1f8740, Func Offset: 0x780
	// Line 912, Address: 0x1f8760, Func Offset: 0x7a0
	// Line 913, Address: 0x1f876c, Func Offset: 0x7ac
	// Line 916, Address: 0x1f8770, Func Offset: 0x7b0
	// Func End, Address: 0x1f8790, Func Offset: 0x7d0
}

// DfltVulnFlags__14zNMETongueSpinFv
// Start address: 0x1f8790
int32 zNMETongueSpin::DfltVulnFlags()
{
	// Line 774, Address: 0x1f8790, Func Offset: 0
	// Line 775, Address: 0x1f8794, Func Offset: 0x4
	// Func End, Address: 0x1f879c, Func Offset: 0xc
}

// Reset__14zNMETongueSpinFv
// Start address: 0x1f87a0
void zNMETongueSpin::Reset()
{
	// Line 748, Address: 0x1f87a0, Func Offset: 0
	// Line 750, Address: 0x1f87b0, Func Offset: 0x10
	// Line 752, Address: 0x1f8a2c, Func Offset: 0x28c
	// Line 753, Address: 0x1f8a30, Func Offset: 0x290
	// Line 754, Address: 0x1f8a44, Func Offset: 0x2a4
	// Line 755, Address: 0x1f8a48, Func Offset: 0x2a8
	// Line 756, Address: 0x1f8a54, Func Offset: 0x2b4
	// Line 759, Address: 0x1f8a5c, Func Offset: 0x2bc
	// Line 760, Address: 0x1f8a74, Func Offset: 0x2d4
	// Func End, Address: 0x1f8a88, Func Offset: 0x2e8
}

// Process__14zNMETongueSpinFf
// Start address: 0x1f8ae0
void zNMETongueSpin::Process(float32 dt)
{
	xMat4x3 oldMat;
	float32 tym_animCurr;
	float32 tym_animDur;
	float32 tym_animPlusTime;
	xVec3 targetPos;
	xVec3 newPos;
	// Line 469, Address: 0x1f8ae0, Func Offset: 0
	// Line 481, Address: 0x1f8ae8, Func Offset: 0x8
	// Line 469, Address: 0x1f8aec, Func Offset: 0xc
	// Line 481, Address: 0x1f8b10, Func Offset: 0x30
	// Line 482, Address: 0x1f8b2c, Func Offset: 0x4c
	// Line 484, Address: 0x1f8b48, Func Offset: 0x68
	// Line 485, Address: 0x1f8b60, Func Offset: 0x80
	// Line 486, Address: 0x1f8b74, Func Offset: 0x94
	// Line 487, Address: 0x1f8b88, Func Offset: 0xa8
	// Line 491, Address: 0x1f8c30, Func Offset: 0x150
	// Line 487, Address: 0x1f8c34, Func Offset: 0x154
	// Line 491, Address: 0x1f8c38, Func Offset: 0x158
	// Line 493, Address: 0x1f8c58, Func Offset: 0x178
	// Line 495, Address: 0x1f8c74, Func Offset: 0x194
	// Line 496, Address: 0x1f8cac, Func Offset: 0x1cc
	// Line 499, Address: 0x1f8cb4, Func Offset: 0x1d4
	// Line 500, Address: 0x1f8ce8, Func Offset: 0x208
	// Line 507, Address: 0x1f8cf8, Func Offset: 0x218
	// Line 511, Address: 0x1f8d3c, Func Offset: 0x25c
	// Line 512, Address: 0x1f8d50, Func Offset: 0x270
	// Line 513, Address: 0x1f8d60, Func Offset: 0x280
	// Line 515, Address: 0x1f8e04, Func Offset: 0x324
	// Line 517, Address: 0x1f8e1c, Func Offset: 0x33c
	// Line 523, Address: 0x1f8e48, Func Offset: 0x368
	// Line 524, Address: 0x1f8e54, Func Offset: 0x374
	// Line 526, Address: 0x1f906c, Func Offset: 0x58c
	// Line 528, Address: 0x1f9078, Func Offset: 0x598
	// Line 529, Address: 0x1f907c, Func Offset: 0x59c
	// Line 528, Address: 0x1f9084, Func Offset: 0x5a4
	// Line 529, Address: 0x1f9088, Func Offset: 0x5a8
	// Line 531, Address: 0x1f9098, Func Offset: 0x5b8
	// Line 529, Address: 0x1f909c, Func Offset: 0x5bc
	// Line 531, Address: 0x1f90a0, Func Offset: 0x5c0
	// Line 533, Address: 0x1f90b8, Func Offset: 0x5d8
	// Line 534, Address: 0x1f90c0, Func Offset: 0x5e0
	// Line 535, Address: 0x1f90c8, Func Offset: 0x5e8
	// Line 537, Address: 0x1f90ec, Func Offset: 0x60c
	// Line 538, Address: 0x1f90f4, Func Offset: 0x614
	// Line 539, Address: 0x1f90fc, Func Offset: 0x61c
	// Line 541, Address: 0x1f9108, Func Offset: 0x628
	// Line 544, Address: 0x1f9110, Func Offset: 0x630
	// Line 547, Address: 0x1f9118, Func Offset: 0x638
	// Line 551, Address: 0x1f9128, Func Offset: 0x648
	// Line 553, Address: 0x1f9138, Func Offset: 0x658
	// Line 555, Address: 0x1f9144, Func Offset: 0x664
	// Line 556, Address: 0x1f9150, Func Offset: 0x670
	// Line 557, Address: 0x1f9158, Func Offset: 0x678
	// Line 559, Address: 0x1f9170, Func Offset: 0x690
	// Line 560, Address: 0x1f917c, Func Offset: 0x69c
	// Line 563, Address: 0x1f9188, Func Offset: 0x6a8
	// Line 566, Address: 0x1f9190, Func Offset: 0x6b0
	// Line 567, Address: 0x1f9194, Func Offset: 0x6b4
	// Line 566, Address: 0x1f919c, Func Offset: 0x6bc
	// Line 567, Address: 0x1f91a0, Func Offset: 0x6c0
	// Line 569, Address: 0x1f91b4, Func Offset: 0x6d4
	// Line 571, Address: 0x1f91bc, Func Offset: 0x6dc
	// Line 573, Address: 0x1f91c8, Func Offset: 0x6e8
	// Line 574, Address: 0x1f91f4, Func Offset: 0x714
	// Line 576, Address: 0x1f9200, Func Offset: 0x720
	// Line 575, Address: 0x1f9204, Func Offset: 0x724
	// Line 576, Address: 0x1f9208, Func Offset: 0x728
	// Line 579, Address: 0x1f9230, Func Offset: 0x750
	// Line 581, Address: 0x1f9248, Func Offset: 0x768
	// Line 583, Address: 0x1f9254, Func Offset: 0x774
	// Line 584, Address: 0x1f927c, Func Offset: 0x79c
	// Line 586, Address: 0x1f9288, Func Offset: 0x7a8
	// Line 585, Address: 0x1f928c, Func Offset: 0x7ac
	// Line 586, Address: 0x1f9290, Func Offset: 0x7b0
	// Line 588, Address: 0x1f92b0, Func Offset: 0x7d0
	// Line 589, Address: 0x1f92bc, Func Offset: 0x7dc
	// Line 590, Address: 0x1f92c4, Func Offset: 0x7e4
	// Line 593, Address: 0x1f92e8, Func Offset: 0x808
	// Line 598, Address: 0x1f92f0, Func Offset: 0x810
	// Line 601, Address: 0x1f92f8, Func Offset: 0x818
	// Line 598, Address: 0x1f92fc, Func Offset: 0x81c
	// Line 601, Address: 0x1f9300, Func Offset: 0x820
	// Line 603, Address: 0x1f930c, Func Offset: 0x82c
	// Line 604, Address: 0x1f9318, Func Offset: 0x838
	// Line 605, Address: 0x1f9340, Func Offset: 0x860
	// Line 606, Address: 0x1f9348, Func Offset: 0x868
	// Line 609, Address: 0x1f9354, Func Offset: 0x874
	// Line 612, Address: 0x1f9364, Func Offset: 0x884
	// Line 613, Address: 0x1f938c, Func Offset: 0x8ac
	// Line 617, Address: 0x1f9394, Func Offset: 0x8b4
	// Line 618, Address: 0x1f93ac, Func Offset: 0x8cc
	// Line 619, Address: 0x1f94bc, Func Offset: 0x9dc
	// Line 621, Address: 0x1f94c0, Func Offset: 0x9e0
	// Line 619, Address: 0x1f94c8, Func Offset: 0x9e8
	// Line 621, Address: 0x1f94ec, Func Offset: 0xa0c
	// Line 623, Address: 0x1f94fc, Func Offset: 0xa1c
	// Line 624, Address: 0x1f952c, Func Offset: 0xa4c
	// Line 626, Address: 0x1f9560, Func Offset: 0xa80
	// Line 627, Address: 0x1f9564, Func Offset: 0xa84
	// Line 629, Address: 0x1f9584, Func Offset: 0xaa4
	// Line 630, Address: 0x1f958c, Func Offset: 0xaac
	// Line 632, Address: 0x1f959c, Func Offset: 0xabc
	// Line 634, Address: 0x1f95a8, Func Offset: 0xac8
	// Line 636, Address: 0x1f95d0, Func Offset: 0xaf0
	// Line 637, Address: 0x1f95d8, Func Offset: 0xaf8
	// Line 639, Address: 0x1f95e4, Func Offset: 0xb04
	// Line 642, Address: 0x1f95f0, Func Offset: 0xb10
	// Line 645, Address: 0x1f9610, Func Offset: 0xb30
	// Line 646, Address: 0x1f961c, Func Offset: 0xb3c
	// Line 649, Address: 0x1f9624, Func Offset: 0xb44
	// Line 650, Address: 0x1f9630, Func Offset: 0xb50
	// Line 653, Address: 0x1f963c, Func Offset: 0xb5c
	// Line 654, Address: 0x1f9644, Func Offset: 0xb64
	// Line 656, Address: 0x1f965c, Func Offset: 0xb7c
	// Line 657, Address: 0x1f9688, Func Offset: 0xba8
	// Line 658, Address: 0x1f96c0, Func Offset: 0xbe0
	// Line 660, Address: 0x1f96c8, Func Offset: 0xbe8
	// Line 663, Address: 0x1f96d0, Func Offset: 0xbf0
	// Line 664, Address: 0x1f96d8, Func Offset: 0xbf8
	// Line 666, Address: 0x1f96e4, Func Offset: 0xc04
	// Line 669, Address: 0x1f970c, Func Offset: 0xc2c
	// Line 672, Address: 0x1f9714, Func Offset: 0xc34
	// Line 673, Address: 0x1f9718, Func Offset: 0xc38
	// Line 672, Address: 0x1f9720, Func Offset: 0xc40
	// Line 673, Address: 0x1f9724, Func Offset: 0xc44
	// Line 675, Address: 0x1f9730, Func Offset: 0xc50
	// Line 677, Address: 0x1f973c, Func Offset: 0xc5c
	// Line 676, Address: 0x1f9740, Func Offset: 0xc60
	// Line 677, Address: 0x1f9744, Func Offset: 0xc64
	// Line 679, Address: 0x1f974c, Func Offset: 0xc6c
	// Line 689, Address: 0x1f9754, Func Offset: 0xc74
	// Line 691, Address: 0x1f9768, Func Offset: 0xc88
	// Line 693, Address: 0x1f9780, Func Offset: 0xca0
	// Line 694, Address: 0x1f97e4, Func Offset: 0xd04
	// Line 696, Address: 0x1f97f0, Func Offset: 0xd10
	// Line 699, Address: 0x1f97fc, Func Offset: 0xd1c
	// Line 701, Address: 0x1f9800, Func Offset: 0xd20
	// Line 702, Address: 0x1f9808, Func Offset: 0xd28
	// Line 699, Address: 0x1f9810, Func Offset: 0xd30
	// Line 701, Address: 0x1f9814, Func Offset: 0xd34
	// Line 699, Address: 0x1f9818, Func Offset: 0xd38
	// Line 701, Address: 0x1f982c, Func Offset: 0xd4c
	// Line 699, Address: 0x1f9834, Func Offset: 0xd54
	// Line 701, Address: 0x1f9838, Func Offset: 0xd58
	// Line 702, Address: 0x1f9848, Func Offset: 0xd68
	// Line 705, Address: 0x1f9850, Func Offset: 0xd70
	// Line 708, Address: 0x1f9858, Func Offset: 0xd78
	// Line 705, Address: 0x1f985c, Func Offset: 0xd7c
	// Line 708, Address: 0x1f9860, Func Offset: 0xd80
	// Line 710, Address: 0x1f986c, Func Offset: 0xd8c
	// Line 712, Address: 0x1f9878, Func Offset: 0xd98
	// Line 714, Address: 0x1f98a0, Func Offset: 0xdc0
	// Line 715, Address: 0x1f98a8, Func Offset: 0xdc8
	// Line 717, Address: 0x1f98b4, Func Offset: 0xdd4
	// Line 719, Address: 0x1f98cc, Func Offset: 0xdec
	// Line 720, Address: 0x1f98f8, Func Offset: 0xe18
	// Line 722, Address: 0x1f9904, Func Offset: 0xe24
	// Line 723, Address: 0x1f990c, Func Offset: 0xe2c
	// Line 725, Address: 0x1f991c, Func Offset: 0xe3c
	// Line 727, Address: 0x1f9928, Func Offset: 0xe48
	// Line 742, Address: 0x1f9930, Func Offset: 0xe50
	// Line 745, Address: 0x1f9960, Func Offset: 0xe80
	// Func End, Address: 0x1f9988, Func Offset: 0xea8
}

// BUpdate__14zNMETongueSpinFP5xVec3
// Start address: 0x1f9990
void zNMETongueSpin::BUpdate(xVec3* pos)
{
	// Line 425, Address: 0x1f9990, Func Offset: 0
	// Line 426, Address: 0x1f99a0, Func Offset: 0x10
	// Line 430, Address: 0x1f99a8, Func Offset: 0x18
	// Line 433, Address: 0x1f99b8, Func Offset: 0x28
	// Line 440, Address: 0x1f99bc, Func Offset: 0x2c
	// Line 433, Address: 0x1f99c0, Func Offset: 0x30
	// Line 440, Address: 0x1f99c4, Func Offset: 0x34
	// Line 439, Address: 0x1f99c8, Func Offset: 0x38
	// Line 447, Address: 0x1f99cc, Func Offset: 0x3c
	// Line 439, Address: 0x1f99d0, Func Offset: 0x40
	// Line 440, Address: 0x1f99d8, Func Offset: 0x48
	// Line 439, Address: 0x1f99dc, Func Offset: 0x4c
	// Line 440, Address: 0x1f99e8, Func Offset: 0x58
	// Line 441, Address: 0x1f99ec, Func Offset: 0x5c
	// Line 447, Address: 0x1f99f4, Func Offset: 0x64
	// Line 448, Address: 0x1f99fc, Func Offset: 0x6c
	// Line 449, Address: 0x1f9a04, Func Offset: 0x74
	// Line 453, Address: 0x1f9a0c, Func Offset: 0x7c
	// Line 456, Address: 0x1f9a10, Func Offset: 0x80
	// Line 453, Address: 0x1f9a14, Func Offset: 0x84
	// Line 456, Address: 0x1f9a18, Func Offset: 0x88
	// Line 455, Address: 0x1f9a1c, Func Offset: 0x8c
	// Line 463, Address: 0x1f9a20, Func Offset: 0x90
	// Line 455, Address: 0x1f9a24, Func Offset: 0x94
	// Line 456, Address: 0x1f9a38, Func Offset: 0xa8
	// Line 457, Address: 0x1f9a3c, Func Offset: 0xac
	// Line 463, Address: 0x1f9a44, Func Offset: 0xb4
	// Line 464, Address: 0x1f9a4c, Func Offset: 0xbc
	// Line 466, Address: 0x1f9a54, Func Offset: 0xc4
	// Func End, Address: 0x1f9a64, Func Offset: 0xd4
}

// Setup__14zNMETongueSpinFv
// Start address: 0x1f9a70
void zNMETongueSpin::Setup()
{
	zNPCMgr* npcmgr;
	int8* nam_bossman;
	base* nb;
	int32 i;
	// Line 397, Address: 0x1f9a70, Func Offset: 0
	// Line 398, Address: 0x1f9a74, Func Offset: 0x4
	// Line 397, Address: 0x1f9a78, Func Offset: 0x8
	// Line 398, Address: 0x1f9a7c, Func Offset: 0xc
	// Line 397, Address: 0x1f9a80, Func Offset: 0x10
	// Line 398, Address: 0x1f9a84, Func Offset: 0x14
	// Line 397, Address: 0x1f9a88, Func Offset: 0x18
	// Line 398, Address: 0x1f9a8c, Func Offset: 0x1c
	// Line 401, Address: 0x1f9ac4, Func Offset: 0x54
	// Line 402, Address: 0x1f9acc, Func Offset: 0x5c
	// Line 401, Address: 0x1f9ad0, Func Offset: 0x60
	// Line 403, Address: 0x1f9ad4, Func Offset: 0x64
	// Line 404, Address: 0x1f9ae8, Func Offset: 0x78
	// Line 410, Address: 0x1f9aec, Func Offset: 0x7c
	// Line 413, Address: 0x1f9b00, Func Offset: 0x90
	// Line 414, Address: 0x1f9b0c, Func Offset: 0x9c
	// Line 413, Address: 0x1f9b14, Func Offset: 0xa4
	// Line 414, Address: 0x1f9b18, Func Offset: 0xa8
	// Line 416, Address: 0x1f9b20, Func Offset: 0xb0
	// Line 418, Address: 0x1f9bd8, Func Offset: 0x168
	// Line 416, Address: 0x1f9be4, Func Offset: 0x174
	// Line 418, Address: 0x1f9be8, Func Offset: 0x178
	// Line 419, Address: 0x1f9ca8, Func Offset: 0x238
	// Line 421, Address: 0x1f9cc0, Func Offset: 0x250
	// Line 419, Address: 0x1f9cc8, Func Offset: 0x258
	// Line 421, Address: 0x1f9cd0, Func Offset: 0x260
	// Line 419, Address: 0x1f9cd8, Func Offset: 0x268
	// Line 421, Address: 0x1f9cdc, Func Offset: 0x26c
	// Line 422, Address: 0x1f9cf0, Func Offset: 0x280
	// Func End, Address: 0x1f9d04, Func Offset: 0x294
}

// Init__14zNMETongueSpinFP9xEntAsset
// Start address: 0x1f9d10
void zNMETongueSpin::Init(xEntAsset* asset)
{
	// Line 386, Address: 0x1f9d10, Func Offset: 0
	// Line 387, Address: 0x1f9d24, Func Offset: 0x14
	// Line 390, Address: 0x1f9d38, Func Offset: 0x28
	// Line 391, Address: 0x1f9d3c, Func Offset: 0x2c
	// Line 394, Address: 0x1f9d40, Func Offset: 0x30
	// Func End, Address: 0x1f9d54, Func Offset: 0x44
}

// SelfSetup__14zNMETongueSpinFv
// Start address: 0x1f9d60
void zNMETongueSpin::SelfSetup()
{
	// Line 383, Address: 0x1f9d60, Func Offset: 0
	// Func End, Address: 0x1f9d68, Func Offset: 0x8
}

// CreateAnimTable__14zNMETongueSpinFP10xAnimTable
// Start address: 0x1f9d70
xAnimTable* zNMETongueSpin::CreateAnimTable(xAnimTable* table)
{
	// Line 370, Address: 0x1f9d70, Func Offset: 0
	// Line 371, Address: 0x1f9d80, Func Offset: 0x10
	// Line 375, Address: 0x1f9d88, Func Offset: 0x18
	// Line 377, Address: 0x1f9d90, Func Offset: 0x20
	// Line 372, Address: 0x1f9d98, Func Offset: 0x28
	// Line 377, Address: 0x1f9d9c, Func Offset: 0x2c
	// Line 378, Address: 0x1f9dac, Func Offset: 0x3c
	// Func End, Address: 0x1f9dbc, Func Offset: 0x4c
}

// CreateTongueSpinAnimTable__FP10xAnimTable
// Start address: 0x1f9dc0
void CreateTongueSpinAnimTable(xAnimTable* table)
{
	// Line 273, Address: 0x1f9dc0, Func Offset: 0
	// Line 283, Address: 0x1f9dc4, Func Offset: 0x4
	// Line 273, Address: 0x1f9dc8, Func Offset: 0x8
	// Line 283, Address: 0x1f9dcc, Func Offset: 0xc
	// Line 273, Address: 0x1f9dd0, Func Offset: 0x10
	// Line 283, Address: 0x1f9dd4, Func Offset: 0x14
	// Line 288, Address: 0x1f9e14, Func Offset: 0x54
	// Line 293, Address: 0x1f9e5c, Func Offset: 0x9c
	// Line 298, Address: 0x1f9ea4, Func Offset: 0xe4
	// Line 303, Address: 0x1f9eec, Func Offset: 0x12c
	// Line 308, Address: 0x1f9f34, Func Offset: 0x174
	// Line 313, Address: 0x1f9f7c, Func Offset: 0x1bc
	// Line 318, Address: 0x1f9fc4, Func Offset: 0x204
	// Line 323, Address: 0x1fa00c, Func Offset: 0x24c
	// Line 328, Address: 0x1fa054, Func Offset: 0x294
	// Line 333, Address: 0x1fa09c, Func Offset: 0x2dc
	// Line 346, Address: 0x1fa0e4, Func Offset: 0x324
	// Func End, Address: 0x1fa0f4, Func Offset: 0x334
}

