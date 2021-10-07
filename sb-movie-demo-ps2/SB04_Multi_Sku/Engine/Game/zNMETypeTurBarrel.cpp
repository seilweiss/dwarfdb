



int32 GoalHandleMail(NMEMsg* mail);
int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
int32 Enter();
int32 BangBang(zNMETurBarrel* npc);
int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
int32 Enter();
int32 QRotTowards(xMat3x3* mat, xQuat* qfrom, xQuat* qdest, float32 dt, float32 spd);
en_rotinf RotateUpdate(float32 dt);
int32 SubStateUpdate(zNMETurBarrel* npc, float32 dt, int32& nextgoal, en_trantype& trantype);
int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
int32 Enter();
int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
en_vis VisionTarget(xEnt* ent);
void CalcEndPoints(xMat3x3* mat_ref);
int32 TurBarMailDamage(NMEDamageInfo* dmgmail);
int32 TypeHandleMail(NMEMsg* mail);
void Process(float32 dt);
void BUpdate(xVec3* pos);
void Reset();
void Init(xEntAsset* asset);
int32 DfltVulnFlags();
xAnimTable* CreateAnimTable(xAnimTable* table);
uint32 AnimPick(int32 gid, en_npcgspot gspot);
void SelfSetup();
void CreateConfig();

// GoalHandleMail__17zNMEGoalTurrBHurtFP6NMEMsg
// Start address: 0x1fcd20
int32 zNMEGoalTurrBHurt::GoalHandleMail(NMEMsg* mail)
{
	int32 snarfed;
	// Line 1326, Address: 0x1fcd20, Func Offset: 0
	// Line 1340, Address: 0x1fcd38, Func Offset: 0x18
	// Func End, Address: 0x1fcd40, Func Offset: 0x20
}

// Process__17zNMEGoalTurrBHurtFP11en_trantypefPv
// Start address: 0x1fcd40
int32 zNMEGoalTurrBHurt::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	zNMETurBarrel* npc;
	int32 amDone;
	// Line 1293, Address: 0x1fcd40, Func Offset: 0
	// Line 1296, Address: 0x1fcd44, Func Offset: 0x4
	// Line 1293, Address: 0x1fcd48, Func Offset: 0x8
	// Line 1296, Address: 0x1fcd4c, Func Offset: 0xc
	// Line 1293, Address: 0x1fcd50, Func Offset: 0x10
	// Line 1294, Address: 0x1fcd54, Func Offset: 0x14
	// Line 1296, Address: 0x1fcd60, Func Offset: 0x20
	// Line 1299, Address: 0x1fcd88, Func Offset: 0x48
	// Line 1303, Address: 0x1fcdac, Func Offset: 0x6c
	// Line 1304, Address: 0x1fcdbc, Func Offset: 0x7c
	// Line 1309, Address: 0x1fcdc0, Func Offset: 0x80
	// Line 1312, Address: 0x1fcdc8, Func Offset: 0x88
	// Line 1311, Address: 0x1fcdcc, Func Offset: 0x8c
	// Line 1312, Address: 0x1fcdd0, Func Offset: 0x90
	// Line 1316, Address: 0x1fcddc, Func Offset: 0x9c
	// Line 1318, Address: 0x1fce04, Func Offset: 0xc4
	// Line 1299, Address: 0x1fce70, Func Offset: 0x130
	// Line 1319, Address: 0x1fce78, Func Offset: 0x138
	// Func End, Address: 0x1fce88, Func Offset: 0x148
}

// Enter__17zNMEGoalTurrBHurtFfPv
// Start address: 0x1fce90
int32 zNMEGoalTurrBHurt::Enter()
{
	// Line 1287, Address: 0x1fce90, Func Offset: 0
	// Line 1288, Address: 0x1fce94, Func Offset: 0x4
	// Line 1287, Address: 0x1fce98, Func Offset: 0x8
	// Line 1289, Address: 0x1fce9c, Func Offset: 0xc
	// Line 1287, Address: 0x1fcea0, Func Offset: 0x10
	// Line 1288, Address: 0x1fceac, Func Offset: 0x1c
	// Line 1289, Address: 0x1fceb0, Func Offset: 0x20
	// Line 1290, Address: 0x1fcf34, Func Offset: 0xa4
	// Func End, Address: 0x1fcf4c, Func Offset: 0xbc
}

// BangBang__18zNMEGoalTurrBShootFP13zNMETurBarrel
// Start address: 0x1fcf50
int32 zNMEGoalTurrBShoot::BangBang(zNMETurBarrel* npc)
{
	zNMEHazard* haz;
	NMECfgTBarrel* cfg;
	int32 rc;
	xMat4x3* mat_gun;
	xVec3 pos_src;
	xVec3 pos_tgt;
	// Line 1243, Address: 0x1fcf50, Func Offset: 0
	// Line 1244, Address: 0x1fcf68, Func Offset: 0x18
	// Line 1247, Address: 0x1fcf74, Func Offset: 0x24
	// Line 1250, Address: 0x1fcf84, Func Offset: 0x34
	// Line 1251, Address: 0x1fcf88, Func Offset: 0x38
	// Line 1250, Address: 0x1fcf94, Func Offset: 0x44
	// Line 1251, Address: 0x1fcf98, Func Offset: 0x48
	// Line 1252, Address: 0x1fcfe8, Func Offset: 0x98
	// Line 1253, Address: 0x1fcff0, Func Offset: 0xa0
	// Line 1254, Address: 0x1fd064, Func Offset: 0x114
	// Line 1260, Address: 0x1fd070, Func Offset: 0x120
	// Line 1257, Address: 0x1fd074, Func Offset: 0x124
	// Line 1260, Address: 0x1fd078, Func Offset: 0x128
	// Line 1262, Address: 0x1fd080, Func Offset: 0x130
	// Line 1263, Address: 0x1fd088, Func Offset: 0x138
	// Line 1262, Address: 0x1fd08c, Func Offset: 0x13c
	// Line 1263, Address: 0x1fd0a4, Func Offset: 0x154
	// Line 1262, Address: 0x1fd0ac, Func Offset: 0x15c
	// Line 1263, Address: 0x1fd0b0, Func Offset: 0x160
	// Line 1260, Address: 0x1fd0bc, Func Offset: 0x16c
	// Line 1263, Address: 0x1fd0c0, Func Offset: 0x170
	// Line 1260, Address: 0x1fd0c4, Func Offset: 0x174
	// Line 1263, Address: 0x1fd0c8, Func Offset: 0x178
	// Line 1267, Address: 0x1fd110, Func Offset: 0x1c0
	// Line 1265, Address: 0x1fd114, Func Offset: 0x1c4
	// Line 1267, Address: 0x1fd12c, Func Offset: 0x1dc
	// Line 1265, Address: 0x1fd130, Func Offset: 0x1e0
	// Line 1267, Address: 0x1fd148, Func Offset: 0x1f8
	// Line 1268, Address: 0x1fd190, Func Offset: 0x240
	// Line 1275, Address: 0x1fd194, Func Offset: 0x244
	// Line 1270, Address: 0x1fd19c, Func Offset: 0x24c
	// Line 1268, Address: 0x1fd1a0, Func Offset: 0x250
	// Line 1270, Address: 0x1fd1a4, Func Offset: 0x254
	// Line 1268, Address: 0x1fd1a8, Func Offset: 0x258
	// Line 1270, Address: 0x1fd1ac, Func Offset: 0x25c
	// Line 1268, Address: 0x1fd1b0, Func Offset: 0x260
	// Line 1270, Address: 0x1fd1b4, Func Offset: 0x264
	// Line 1268, Address: 0x1fd1bc, Func Offset: 0x26c
	// Line 1270, Address: 0x1fd1cc, Func Offset: 0x27c
	// Line 1268, Address: 0x1fd1d8, Func Offset: 0x288
	// Line 1270, Address: 0x1fd1e0, Func Offset: 0x290
	// Line 1268, Address: 0x1fd1e4, Func Offset: 0x294
	// Line 1270, Address: 0x1fd1ec, Func Offset: 0x29c
	// Line 1268, Address: 0x1fd204, Func Offset: 0x2b4
	// Line 1270, Address: 0x1fd20c, Func Offset: 0x2bc
	// Line 1271, Address: 0x1fd280, Func Offset: 0x330
	// Line 1270, Address: 0x1fd284, Func Offset: 0x334
	// Line 1271, Address: 0x1fd288, Func Offset: 0x338
	// Line 1275, Address: 0x1fd2ac, Func Offset: 0x35c
	// Line 1276, Address: 0x1fd2c4, Func Offset: 0x374
	// Line 1278, Address: 0x1fd328, Func Offset: 0x3d8
	// Line 1276, Address: 0x1fd32c, Func Offset: 0x3dc
	// Line 1279, Address: 0x1fd334, Func Offset: 0x3e4
	// Func End, Address: 0x1fd350, Func Offset: 0x400
}

// Process__18zNMEGoalTurrBShootFP11en_trantypefPv
// Start address: 0x1fd350
int32 zNMEGoalTurrBShoot::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	zNMETurBarrel* npc;
	int32 rc;
	float32 tym_shoot[1];
	// Line 1225, Address: 0x1fd350, Func Offset: 0
	// Line 1226, Address: 0x1fd374, Func Offset: 0x24
	// Line 1230, Address: 0x1fd378, Func Offset: 0x28
	// Line 1226, Address: 0x1fd37c, Func Offset: 0x2c
	// Line 1230, Address: 0x1fd380, Func Offset: 0x30
	// Line 1232, Address: 0x1fd390, Func Offset: 0x40
	// Line 1233, Address: 0x1fd398, Func Offset: 0x48
	// Line 1234, Address: 0x1fd3b8, Func Offset: 0x68
	// Line 1235, Address: 0x1fd3c0, Func Offset: 0x70
	// Line 1236, Address: 0x1fd3c8, Func Offset: 0x78
	// Line 1239, Address: 0x1fd3d4, Func Offset: 0x84
	// Line 1240, Address: 0x1fd3e8, Func Offset: 0x98
	// Func End, Address: 0x1fd404, Func Offset: 0xb4
}

// Enter__18zNMEGoalTurrBShootFfPv
// Start address: 0x1fd410
int32 zNMEGoalTurrBShoot::Enter()
{
	// Line 1219, Address: 0x1fd410, Func Offset: 0
	// Line 1221, Address: 0x1fd414, Func Offset: 0x4
	// Line 1219, Address: 0x1fd418, Func Offset: 0x8
	// Line 1221, Address: 0x1fd41c, Func Offset: 0xc
	// Line 1219, Address: 0x1fd420, Func Offset: 0x10
	// Line 1221, Address: 0x1fd424, Func Offset: 0x14
	// Line 1219, Address: 0x1fd428, Func Offset: 0x18
	// Line 1221, Address: 0x1fd42c, Func Offset: 0x1c
	// Line 1219, Address: 0x1fd430, Func Offset: 0x20
	// Line 1221, Address: 0x1fd434, Func Offset: 0x24
	// Line 1220, Address: 0x1fd438, Func Offset: 0x28
	// Line 1221, Address: 0x1fd43c, Func Offset: 0x2c
	// Line 1222, Address: 0x1fd4c4, Func Offset: 0xb4
	// Func End, Address: 0x1fd4dc, Func Offset: 0xcc
}

// QRotTowards__17zNMEGoalTurrBTurnFP7xMat3x3PC5xQuatPC5xQuatff
// Start address: 0x1fd4e0
int32 zNMEGoalTurrBTurn::QRotTowards(xMat3x3* mat, xQuat* qfrom, xQuat* qdest, float32 dt, float32 spd)
{
	xQuat quat;
	float32 qdot;
	float32 ang_rotate;
	float32 ang_perstep;
	// Line 1185, Address: 0x1fd4e0, Func Offset: 0
	// Line 1187, Address: 0x1fd4e8, Func Offset: 0x8
	// Line 1185, Address: 0x1fd4ec, Func Offset: 0xc
	// Line 1187, Address: 0x1fd4f0, Func Offset: 0x10
	// Line 1185, Address: 0x1fd4f4, Func Offset: 0x14
	// Line 1189, Address: 0x1fd4f8, Func Offset: 0x18
	// Line 1185, Address: 0x1fd4fc, Func Offset: 0x1c
	// Line 1187, Address: 0x1fd508, Func Offset: 0x28
	// Line 1189, Address: 0x1fd524, Func Offset: 0x44
	// Line 1187, Address: 0x1fd534, Func Offset: 0x54
	// Line 1189, Address: 0x1fd53c, Func Offset: 0x5c
	// Line 1190, Address: 0x1fd550, Func Offset: 0x70
	// Line 1187, Address: 0x1fd554, Func Offset: 0x74
	// Line 1190, Address: 0x1fd55c, Func Offset: 0x7c
	// Line 1195, Address: 0x1fd564, Func Offset: 0x84
	// Line 1197, Address: 0x1fd580, Func Offset: 0xa0
	// Line 1198, Address: 0x1fd5c4, Func Offset: 0xe4
	// Line 1197, Address: 0x1fd5c8, Func Offset: 0xe8
	// Line 1199, Address: 0x1fd5cc, Func Offset: 0xec
	// Line 1206, Address: 0x1fd5d8, Func Offset: 0xf8
	// Line 1207, Address: 0x1fd5f4, Func Offset: 0x114
	// Line 1208, Address: 0x1fd600, Func Offset: 0x120
	// Line 1210, Address: 0x1fd60c, Func Offset: 0x12c
	// Line 1191, Address: 0x1fd614, Func Offset: 0x134
	// Line 1210, Address: 0x1fd618, Func Offset: 0x138
	// Line 1191, Address: 0x1fd61c, Func Offset: 0x13c
	// Line 1210, Address: 0x1fd620, Func Offset: 0x140
	// Line 1191, Address: 0x1fd624, Func Offset: 0x144
	// Line 1210, Address: 0x1fd628, Func Offset: 0x148
	// Line 1191, Address: 0x1fd62c, Func Offset: 0x14c
	// Line 1210, Address: 0x1fd630, Func Offset: 0x150
	// Line 1201, Address: 0x1fd644, Func Offset: 0x164
	// Line 1211, Address: 0x1fd648, Func Offset: 0x168
	// Func End, Address: 0x1fd664, Func Offset: 0x184
}

// RotateUpdate__17zNMEGoalTurrBTurnFf
// Start address: 0x1fd670
en_rotinf zNMEGoalTurrBTurn::RotateUpdate(float32 dt)
{
	zNMETurBarrel* npc;
	xQuat quat_curr;
	xQuat quat_want;
	NMECfgTBarrel* cfg;
	float32 spd_turn;
	int32 arrived;
	int32 atEndpoint;
	// Line 1034, Address: 0x1fd670, Func Offset: 0
	// Line 1038, Address: 0x1fd674, Func Offset: 0x4
	// Line 1034, Address: 0x1fd678, Func Offset: 0x8
	// Line 1038, Address: 0x1fd67c, Func Offset: 0xc
	// Line 1034, Address: 0x1fd680, Func Offset: 0x10
	// Line 1038, Address: 0x1fd684, Func Offset: 0x14
	// Line 1034, Address: 0x1fd688, Func Offset: 0x18
	// Line 1035, Address: 0x1fd694, Func Offset: 0x24
	// Line 1038, Address: 0x1fd69c, Func Offset: 0x2c
	// Line 1035, Address: 0x1fd6a0, Func Offset: 0x30
	// Line 1038, Address: 0x1fd6a4, Func Offset: 0x34
	// Line 1047, Address: 0x1fd700, Func Offset: 0x90
	// Line 1051, Address: 0x1fd710, Func Offset: 0xa0
	// Line 1053, Address: 0x1fd758, Func Offset: 0xe8
	// Line 1056, Address: 0x1fd75c, Func Offset: 0xec
	// Line 1057, Address: 0x1fd770, Func Offset: 0x100
	// Line 1059, Address: 0x1fd774, Func Offset: 0x104
	// Line 1063, Address: 0x1fd790, Func Offset: 0x120
	// Line 1075, Address: 0x1fd798, Func Offset: 0x128
	// Line 1076, Address: 0x1fd7a0, Func Offset: 0x130
	// Line 1078, Address: 0x1fd7a8, Func Offset: 0x138
	// Line 1038, Address: 0x1fd7bc, Func Offset: 0x14c
	// Line 1078, Address: 0x1fd7c0, Func Offset: 0x150
	// Line 1038, Address: 0x1fd7c4, Func Offset: 0x154
	// Line 1078, Address: 0x1fd7c8, Func Offset: 0x158
	// Line 1038, Address: 0x1fd7cc, Func Offset: 0x15c
	// Line 1078, Address: 0x1fd7d0, Func Offset: 0x160
	// Line 1038, Address: 0x1fd7d8, Func Offset: 0x168
	// Line 1078, Address: 0x1fd7dc, Func Offset: 0x16c
	// Line 1038, Address: 0x1fd7e0, Func Offset: 0x170
	// Line 1078, Address: 0x1fd7e4, Func Offset: 0x174
	// Line 1038, Address: 0x1fd7e8, Func Offset: 0x178
	// Line 1078, Address: 0x1fd7f0, Func Offset: 0x180
	// Line 1067, Address: 0x1fd82c, Func Offset: 0x1bc
	// Line 1078, Address: 0x1fd83c, Func Offset: 0x1cc
	// Line 1072, Address: 0x1fd844, Func Offset: 0x1d4
	// Line 1078, Address: 0x1fd84c, Func Offset: 0x1dc
	// Line 1072, Address: 0x1fd870, Func Offset: 0x200
	// Line 1078, Address: 0x1fd884, Func Offset: 0x214
	// Line 1072, Address: 0x1fd88c, Func Offset: 0x21c
	// Line 1078, Address: 0x1fd898, Func Offset: 0x228
	// Line 1072, Address: 0x1fd89c, Func Offset: 0x22c
	// Line 1078, Address: 0x1fd8a4, Func Offset: 0x234
	// Line 1072, Address: 0x1fd8cc, Func Offset: 0x25c
	// Line 1078, Address: 0x1fd8e0, Func Offset: 0x270
	// Line 1072, Address: 0x1fd8e8, Func Offset: 0x278
	// Line 1078, Address: 0x1fd8f4, Func Offset: 0x284
	// Line 1081, Address: 0x1fd90c, Func Offset: 0x29c
	// Func End, Address: 0x1fd924, Func Offset: 0x2b4
}

// SubStateUpdate__17zNMEGoalTurrBTurnFP13zNMETurBarrelfRiR11en_trantype
// Start address: 0x1fd930
int32 zNMEGoalTurrBTurn::SubStateUpdate(zNMETurBarrel* npc, float32 dt, int32& nextgoal, en_trantype& trantype)
{
	en_rotinf rotinf;
	en_nmevar nvar;
	// Line 934, Address: 0x1fd930, Func Offset: 0
	// Line 935, Address: 0x1fd95c, Func Offset: 0x2c
	// Line 951, Address: 0x1fd968, Func Offset: 0x38
	// Line 959, Address: 0x1fd980, Func Offset: 0x50
	// Line 960, Address: 0x1fd9a8, Func Offset: 0x78
	// Line 961, Address: 0x1fd9d0, Func Offset: 0xa0
	// Line 941, Address: 0x1fd9dc, Func Offset: 0xac
	// Line 961, Address: 0x1fd9e0, Func Offset: 0xb0
	// Line 941, Address: 0x1fd9e4, Func Offset: 0xb4
	// Line 961, Address: 0x1fd9e8, Func Offset: 0xb8
	// Line 941, Address: 0x1fda00, Func Offset: 0xd0
	// Line 961, Address: 0x1fda04, Func Offset: 0xd4
	// Line 941, Address: 0x1fda18, Func Offset: 0xe8
	// Line 961, Address: 0x1fda2c, Func Offset: 0xfc
	// Line 941, Address: 0x1fda30, Func Offset: 0x100
	// Line 961, Address: 0x1fda38, Func Offset: 0x108
	// Line 941, Address: 0x1fda48, Func Offset: 0x118
	// Line 961, Address: 0x1fda50, Func Offset: 0x120
	// Line 941, Address: 0x1fda74, Func Offset: 0x144
	// Line 961, Address: 0x1fda7c, Func Offset: 0x14c
	// Line 941, Address: 0x1fdab0, Func Offset: 0x180
	// Line 961, Address: 0x1fdab4, Func Offset: 0x184
	// Line 945, Address: 0x1fdae4, Func Offset: 0x1b4
	// Line 961, Address: 0x1fdafc, Func Offset: 0x1cc
	// Line 941, Address: 0x1fdb00, Func Offset: 0x1d0
	// Line 961, Address: 0x1fdb04, Func Offset: 0x1d4
	// Line 941, Address: 0x1fdb08, Func Offset: 0x1d8
	// Line 961, Address: 0x1fdb0c, Func Offset: 0x1dc
	// Line 941, Address: 0x1fdb10, Func Offset: 0x1e0
	// Line 961, Address: 0x1fdb14, Func Offset: 0x1e4
	// Line 941, Address: 0x1fdb1c, Func Offset: 0x1ec
	// Line 961, Address: 0x1fdb20, Func Offset: 0x1f0
	// Line 941, Address: 0x1fdb24, Func Offset: 0x1f4
	// Line 961, Address: 0x1fdb28, Func Offset: 0x1f8
	// Line 941, Address: 0x1fdb2c, Func Offset: 0x1fc
	// Line 961, Address: 0x1fdb34, Func Offset: 0x204
	// Line 941, Address: 0x1fdb70, Func Offset: 0x240
	// Line 943, Address: 0x1fdb88, Func Offset: 0x258
	// Line 952, Address: 0x1fdb90, Func Offset: 0x260
	// Line 953, Address: 0x1fdba0, Func Offset: 0x270
	// Line 961, Address: 0x1fdba4, Func Offset: 0x274
	// Line 953, Address: 0x1fdba8, Func Offset: 0x278
	// Line 961, Address: 0x1fdbac, Func Offset: 0x27c
	// Line 954, Address: 0x1fdbb0, Func Offset: 0x280
	// Line 961, Address: 0x1fdbb4, Func Offset: 0x284
	// Line 955, Address: 0x1fdbb8, Func Offset: 0x288
	// Line 965, Address: 0x1fdbc0, Func Offset: 0x290
	// Line 966, Address: 0x1fdbc8, Func Offset: 0x298
	// Line 1006, Address: 0x1fdbd4, Func Offset: 0x2a4
	// Line 1014, Address: 0x1fdbdc, Func Offset: 0x2ac
	// Line 976, Address: 0x1fdbf8, Func Offset: 0x2c8
	// Line 1014, Address: 0x1fdbfc, Func Offset: 0x2cc
	// Line 983, Address: 0x1fdc10, Func Offset: 0x2e0
	// Line 1014, Address: 0x1fdc18, Func Offset: 0x2e8
	// Line 984, Address: 0x1fdc20, Func Offset: 0x2f0
	// Line 1014, Address: 0x1fdc2c, Func Offset: 0x2fc
	// Line 991, Address: 0x1fdc34, Func Offset: 0x304
	// Line 1014, Address: 0x1fdc3c, Func Offset: 0x30c
	// Line 997, Address: 0x1fdc4c, Func Offset: 0x31c
	// Line 1014, Address: 0x1fdc50, Func Offset: 0x320
	// Line 998, Address: 0x1fdc5c, Func Offset: 0x32c
	// Line 1014, Address: 0x1fdc60, Func Offset: 0x330
	// Line 998, Address: 0x1fdc64, Func Offset: 0x334
	// Line 1014, Address: 0x1fdc74, Func Offset: 0x344
	// Line 998, Address: 0x1fdc94, Func Offset: 0x364
	// Line 1014, Address: 0x1fdca4, Func Offset: 0x374
	// Line 998, Address: 0x1fdcb0, Func Offset: 0x380
	// Line 1014, Address: 0x1fdcb4, Func Offset: 0x384
	// Line 998, Address: 0x1fdcc0, Func Offset: 0x390
	// Line 1014, Address: 0x1fdcc4, Func Offset: 0x394
	// Line 998, Address: 0x1fdcd0, Func Offset: 0x3a0
	// Line 1014, Address: 0x1fdcd4, Func Offset: 0x3a4
	// Line 998, Address: 0x1fdcd8, Func Offset: 0x3a8
	// Line 1014, Address: 0x1fdcdc, Func Offset: 0x3ac
	// Line 998, Address: 0x1fdce4, Func Offset: 0x3b4
	// Line 1014, Address: 0x1fdce8, Func Offset: 0x3b8
	// Line 998, Address: 0x1fdcec, Func Offset: 0x3bc
	// Line 1014, Address: 0x1fdcf0, Func Offset: 0x3c0
	// Line 998, Address: 0x1fdcf4, Func Offset: 0x3c4
	// Line 1014, Address: 0x1fdcf8, Func Offset: 0x3c8
	// Line 998, Address: 0x1fdcfc, Func Offset: 0x3cc
	// Line 1014, Address: 0x1fdd00, Func Offset: 0x3d0
	// Line 998, Address: 0x1fdd08, Func Offset: 0x3d8
	// Line 1014, Address: 0x1fdd14, Func Offset: 0x3e4
	// Line 998, Address: 0x1fdd18, Func Offset: 0x3e8
	// Line 1014, Address: 0x1fdd2c, Func Offset: 0x3fc
	// Line 998, Address: 0x1fdd50, Func Offset: 0x420
	// Line 1014, Address: 0x1fdd60, Func Offset: 0x430
	// Line 1001, Address: 0x1fdd64, Func Offset: 0x434
	// Line 1002, Address: 0x1fdd68, Func Offset: 0x438
	// Line 1001, Address: 0x1fdd6c, Func Offset: 0x43c
	// Line 1014, Address: 0x1fdd70, Func Offset: 0x440
	// Line 1003, Address: 0x1fdd74, Func Offset: 0x444
	// Line 1014, Address: 0x1fdd80, Func Offset: 0x450
	// Line 979, Address: 0x1fdd84, Func Offset: 0x454
	// Line 980, Address: 0x1fdd94, Func Offset: 0x464
	// Line 1014, Address: 0x1fdd9c, Func Offset: 0x46c
	// Line 987, Address: 0x1fdda0, Func Offset: 0x470
	// Line 1011, Address: 0x1fddc0, Func Offset: 0x490
	// Line 1009, Address: 0x1fddc4, Func Offset: 0x494
	// Line 1014, Address: 0x1fddcc, Func Offset: 0x49c
	// Line 1015, Address: 0x1fddd4, Func Offset: 0x4a4
	// Func End, Address: 0x1fddf4, Func Offset: 0x4c4
}

// Process__17zNMEGoalTurrBTurnFP11en_trantypefPv
// Start address: 0x1fde00
int32 zNMEGoalTurrBTurn::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	zNMETurBarrel* npc;
	en_vis vis;
	int32 nextgoal;
	int32 doTran;
	// Line 913, Address: 0x1fde00, Func Offset: 0
	// Line 916, Address: 0x1fde04, Func Offset: 0x4
	// Line 913, Address: 0x1fde08, Func Offset: 0x8
	// Line 914, Address: 0x1fde2c, Func Offset: 0x2c
	// Line 916, Address: 0x1fde34, Func Offset: 0x34
	// Line 914, Address: 0x1fde3c, Func Offset: 0x3c
	// Line 916, Address: 0x1fde40, Func Offset: 0x40
	// Line 917, Address: 0x1fde54, Func Offset: 0x54
	// Line 919, Address: 0x1fde60, Func Offset: 0x60
	// Line 920, Address: 0x1fde64, Func Offset: 0x64
	// Line 919, Address: 0x1fde68, Func Offset: 0x68
	// Line 920, Address: 0x1fde6c, Func Offset: 0x6c
	// Line 925, Address: 0x1fde74, Func Offset: 0x74
	// Line 926, Address: 0x1fde8c, Func Offset: 0x8c
	// Line 927, Address: 0x1fde94, Func Offset: 0x94
	// Line 929, Address: 0x1fde9c, Func Offset: 0x9c
	// Line 930, Address: 0x1fdef4, Func Offset: 0xf4
	// Func End, Address: 0x1fdf14, Func Offset: 0x114
}

// Enter__17zNMEGoalTurrBTurnFfPv
// Start address: 0x1fdf20
int32 zNMEGoalTurrBTurn::Enter()
{
	zNMETurBarrel* npc;
	// Line 903, Address: 0x1fdf20, Func Offset: 0
	// Line 905, Address: 0x1fdf24, Func Offset: 0x4
	// Line 903, Address: 0x1fdf28, Func Offset: 0x8
	// Line 905, Address: 0x1fdf2c, Func Offset: 0xc
	// Line 903, Address: 0x1fdf30, Func Offset: 0x10
	// Line 904, Address: 0x1fdf40, Func Offset: 0x20
	// Line 905, Address: 0x1fdf44, Func Offset: 0x24
	// Line 904, Address: 0x1fdf48, Func Offset: 0x28
	// Line 905, Address: 0x1fdf4c, Func Offset: 0x2c
	// Line 907, Address: 0x1fdfc4, Func Offset: 0xa4
	// Line 909, Address: 0x1fdfc8, Func Offset: 0xa8
	// Line 907, Address: 0x1fdfcc, Func Offset: 0xac
	// Line 909, Address: 0x1fdfd0, Func Offset: 0xb0
	// Line 910, Address: 0x1fe054, Func Offset: 0x134
	// Func End, Address: 0x1fe06c, Func Offset: 0x14c
}

// Process__17zNMEGoalTurrBIdleFP11en_trantypefPv
// Start address: 0x1fe070
int32 zNMEGoalTurrBIdle::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	zNMETurBarrel* npc;
	en_vis vis;
	uint32 anid_active;
	uint32 anid_inactive;
	// Line 861, Address: 0x1fe070, Func Offset: 0
	// Line 862, Address: 0x1fe074, Func Offset: 0x4
	// Line 861, Address: 0x1fe078, Func Offset: 0x8
	// Line 862, Address: 0x1fe07c, Func Offset: 0xc
	// Line 861, Address: 0x1fe080, Func Offset: 0x10
	// Line 862, Address: 0x1fe0ac, Func Offset: 0x3c
	// Line 864, Address: 0x1fe0c0, Func Offset: 0x50
	// Line 866, Address: 0x1fe0c4, Func Offset: 0x54
	// Line 864, Address: 0x1fe0d0, Func Offset: 0x60
	// Line 866, Address: 0x1fe0d4, Func Offset: 0x64
	// Line 867, Address: 0x1fe0ec, Func Offset: 0x7c
	// Line 875, Address: 0x1fe0fc, Func Offset: 0x8c
	// Line 877, Address: 0x1fe118, Func Offset: 0xa8
	// Line 885, Address: 0x1fe124, Func Offset: 0xb4
	// Line 886, Address: 0x1fe130, Func Offset: 0xc0
	// Line 888, Address: 0x1fe14c, Func Offset: 0xdc
	// Line 889, Address: 0x1fe158, Func Offset: 0xe8
	// Line 894, Address: 0x1fe180, Func Offset: 0x110
	// Line 872, Address: 0x1fe1e0, Func Offset: 0x170
	// Line 894, Address: 0x1fe1e4, Func Offset: 0x174
	// Line 872, Address: 0x1fe1e8, Func Offset: 0x178
	// Line 894, Address: 0x1fe1f0, Func Offset: 0x180
	// Line 875, Address: 0x1fe208, Func Offset: 0x198
	// Line 894, Address: 0x1fe210, Func Offset: 0x1a0
	// Line 878, Address: 0x1fe214, Func Offset: 0x1a4
	// Line 894, Address: 0x1fe218, Func Offset: 0x1a8
	// Line 878, Address: 0x1fe21c, Func Offset: 0x1ac
	// Line 894, Address: 0x1fe220, Func Offset: 0x1b0
	// Line 881, Address: 0x1fe238, Func Offset: 0x1c8
	// Line 894, Address: 0x1fe23c, Func Offset: 0x1cc
	// Line 881, Address: 0x1fe254, Func Offset: 0x1e4
	// Line 895, Address: 0x1fe264, Func Offset: 0x1f4
	// Func End, Address: 0x1fe290, Func Offset: 0x220
}

// VisionTarget__13zNMETurBarrelCFP4xEnt9en_defconi
// Start address: 0x1fe290
en_vis zNMETurBarrel::VisionTarget(xEnt* ent)
{
	NMECfgTBarrel* cfg;
	// Line 756, Address: 0x1fe290, Func Offset: 0
	// Line 761, Address: 0x1fe294, Func Offset: 0x4
	// Line 765, Address: 0x1fe2a0, Func Offset: 0x10
	// Line 769, Address: 0x1fe2ac, Func Offset: 0x1c
	// Line 772, Address: 0x1fe2b8, Func Offset: 0x28
	// Line 769, Address: 0x1fe2bc, Func Offset: 0x2c
	// Line 768, Address: 0x1fe2c0, Func Offset: 0x30
	// Line 769, Address: 0x1fe2c4, Func Offset: 0x34
	// Line 772, Address: 0x1fe2f8, Func Offset: 0x68
	// Line 775, Address: 0x1fe320, Func Offset: 0x90
	// Line 783, Address: 0x1fe32c, Func Offset: 0x9c
	// Line 785, Address: 0x1fe334, Func Offset: 0xa4
	// Line 789, Address: 0x1fe354, Func Offset: 0xc4
	// Line 790, Address: 0x1fe368, Func Offset: 0xd8
	// Line 762, Address: 0x1fe370, Func Offset: 0xe0
	// Line 766, Address: 0x1fe378, Func Offset: 0xe8
	// Line 787, Address: 0x1fe380, Func Offset: 0xf0
	// Line 797, Address: 0x1fe38c, Func Offset: 0xfc
	// Line 800, Address: 0x1fe398, Func Offset: 0x108
	// Line 803, Address: 0x1fe3ac, Func Offset: 0x11c
	// Line 804, Address: 0x1fe3b4, Func Offset: 0x124
	// Line 806, Address: 0x1fe3bc, Func Offset: 0x12c
	// Line 807, Address: 0x1fe3c0, Func Offset: 0x130
	// Line 810, Address: 0x1fe3dc, Func Offset: 0x14c
	// Func End, Address: 0x1fe3e8, Func Offset: 0x158
}

// CalcEndPoints__13zNMETurBarrelFPC7xMat3x3
// Start address: 0x1fe3f0
void zNMETurBarrel::CalcEndPoints(xMat3x3* mat_ref)
{
	float32 ang_half;
	xMat3x3 mat_rot;
	xMat3x3 mat_tmp;
	xVec3 dir_around;
	// Line 708, Address: 0x1fe3f0, Func Offset: 0
	// Line 713, Address: 0x1fe3f4, Func Offset: 0x4
	// Line 708, Address: 0x1fe3f8, Func Offset: 0x8
	// Line 713, Address: 0x1fe3fc, Func Offset: 0xc
	// Line 708, Address: 0x1fe400, Func Offset: 0x10
	// Line 713, Address: 0x1fe404, Func Offset: 0x14
	// Line 708, Address: 0x1fe408, Func Offset: 0x18
	// Line 713, Address: 0x1fe424, Func Offset: 0x34
	// Line 725, Address: 0x1fe434, Func Offset: 0x44
	// Line 737, Address: 0x1fe438, Func Offset: 0x48
	// Line 725, Address: 0x1fe43c, Func Offset: 0x4c
	// Line 737, Address: 0x1fe44c, Func Offset: 0x5c
	// Line 725, Address: 0x1fe458, Func Offset: 0x68
	// Line 738, Address: 0x1fe45c, Func Offset: 0x6c
	// Line 737, Address: 0x1fe460, Func Offset: 0x70
	// Line 738, Address: 0x1fe468, Func Offset: 0x78
	// Line 737, Address: 0x1fe46c, Func Offset: 0x7c
	// Line 738, Address: 0x1fe478, Func Offset: 0x88
	// Line 739, Address: 0x1fe484, Func Offset: 0x94
	// Line 741, Address: 0x1fe4b0, Func Offset: 0xc0
	// Line 739, Address: 0x1fe4b4, Func Offset: 0xc4
	// Line 741, Address: 0x1fe4b8, Func Offset: 0xc8
	// Line 742, Address: 0x1fe4cc, Func Offset: 0xdc
	// Line 743, Address: 0x1fe4dc, Func Offset: 0xec
	// Line 745, Address: 0x1fe4e8, Func Offset: 0xf8
	// Line 746, Address: 0x1fe500, Func Offset: 0x110
	// Line 747, Address: 0x1fe510, Func Offset: 0x120
	// Line 749, Address: 0x1fe51c, Func Offset: 0x12c
	// Line 750, Address: 0x1fe528, Func Offset: 0x138
	// Line 752, Address: 0x1fe534, Func Offset: 0x144
	// Line 717, Address: 0x1fe544, Func Offset: 0x154
	// Line 752, Address: 0x1fe548, Func Offset: 0x158
	// Line 719, Address: 0x1fe550, Func Offset: 0x160
	// Line 752, Address: 0x1fe554, Func Offset: 0x164
	// Line 720, Address: 0x1fe55c, Func Offset: 0x16c
	// Line 752, Address: 0x1fe560, Func Offset: 0x170
	// Line 753, Address: 0x1fe568, Func Offset: 0x178
	// Func End, Address: 0x1fe588, Func Offset: 0x198
}

// TurBarMailDamage__13zNMETurBarrelFP13NMEDamageInfo
// Start address: 0x1fe590
int32 zNMETurBarrel::TurBarMailDamage(NMEDamageInfo* dmgmail)
{
	int32 handled;
	xPsyche* psy;
	xGoal* goal;
	xPsyche* psy;
	// Line 617, Address: 0x1fe590, Func Offset: 0
	// Line 624, Address: 0x1fe5a0, Func Offset: 0x10
	// Line 627, Address: 0x1fe5cc, Func Offset: 0x3c
	// Line 632, Address: 0x1fe5d0, Func Offset: 0x40
	// Line 629, Address: 0x1fe5d4, Func Offset: 0x44
	// Line 632, Address: 0x1fe5d8, Func Offset: 0x48
	// Line 634, Address: 0x1fe5e4, Func Offset: 0x54
	// Line 635, Address: 0x1fe5e8, Func Offset: 0x58
	// Line 634, Address: 0x1fe5ec, Func Offset: 0x5c
	// Line 635, Address: 0x1fe5f0, Func Offset: 0x60
	// Line 637, Address: 0x1fe600, Func Offset: 0x70
	// Line 661, Address: 0x1fe608, Func Offset: 0x78
	// Line 663, Address: 0x1fe60c, Func Offset: 0x7c
	// Line 665, Address: 0x1fe614, Func Offset: 0x84
	// Line 666, Address: 0x1fe620, Func Offset: 0x90
	// Line 668, Address: 0x1fe62c, Func Offset: 0x9c
	// Line 669, Address: 0x1fe640, Func Offset: 0xb0
	// Line 672, Address: 0x1fe648, Func Offset: 0xb8
	// Line 675, Address: 0x1fe658, Func Offset: 0xc8
	// Line 678, Address: 0x1fe660, Func Offset: 0xd0
	// Line 684, Address: 0x1fe664, Func Offset: 0xd4
	// Line 685, Address: 0x1fe668, Func Offset: 0xd8
	// Func End, Address: 0x1fe67c, Func Offset: 0xec
}

// TypeHandleMail__13zNMETurBarrelFP6NMEMsg
// Start address: 0x1fe680
int32 zNMETurBarrel::TypeHandleMail(NMEMsg* mail)
{
	int32 handled;
	// Line 597, Address: 0x1fe680, Func Offset: 0
	// Line 600, Address: 0x1fe684, Func Offset: 0x4
	// Line 597, Address: 0x1fe688, Func Offset: 0x8
	// Line 600, Address: 0x1fe68c, Func Offset: 0xc
	// Line 602, Address: 0x1fe6a8, Func Offset: 0x28
	// Line 603, Address: 0x1fe6b0, Func Offset: 0x30
	// Line 605, Address: 0x1fe6b8, Func Offset: 0x38
	// Line 614, Address: 0x1fe6c0, Func Offset: 0x40
	// Func End, Address: 0x1fe6cc, Func Offset: 0x4c
}

// Process__13zNMETurBarrelFf
// Start address: 0x1fe6d0
void zNMETurBarrel::Process(float32 dt)
{
	// Line 581, Address: 0x1fe6d0, Func Offset: 0
	// Line 583, Address: 0x1fe6d4, Func Offset: 0x4
	// Line 581, Address: 0x1fe6d8, Func Offset: 0x8
	// Line 583, Address: 0x1fe6e8, Func Offset: 0x18
	// Line 591, Address: 0x1fe6f4, Func Offset: 0x24
	// Line 593, Address: 0x1fe72c, Func Offset: 0x5c
	// Func End, Address: 0x1fe740, Func Offset: 0x70
}

// BUpdate__13zNMETurBarrelFP5xVec3
// Start address: 0x1fe740
void zNMETurBarrel::BUpdate(xVec3* pos)
{
	// Line 575, Address: 0x1fe740, Func Offset: 0
	// Line 576, Address: 0x1fe744, Func Offset: 0x4
	// Line 575, Address: 0x1fe748, Func Offset: 0x8
	// Line 576, Address: 0x1fe750, Func Offset: 0x10
	// Line 577, Address: 0x1fe928, Func Offset: 0x1e8
	// Line 576, Address: 0x1fe938, Func Offset: 0x1f8
	// Line 577, Address: 0x1fe940, Func Offset: 0x200
	// Line 576, Address: 0x1fe980, Func Offset: 0x240
	// Line 577, Address: 0x1fe984, Func Offset: 0x244
	// Line 576, Address: 0x1fe988, Func Offset: 0x248
	// Line 577, Address: 0x1fe98c, Func Offset: 0x24c
	// Line 576, Address: 0x1fe9a8, Func Offset: 0x268
	// Line 577, Address: 0x1fe9ac, Func Offset: 0x26c
	// Line 576, Address: 0x1fe9b4, Func Offset: 0x274
	// Line 577, Address: 0x1fe9b8, Func Offset: 0x278
	// Line 576, Address: 0x1fe9e4, Func Offset: 0x2a4
	// Line 577, Address: 0x1fe9e8, Func Offset: 0x2a8
	// Line 576, Address: 0x1fea18, Func Offset: 0x2d8
	// Line 577, Address: 0x1fea20, Func Offset: 0x2e0
	// Line 576, Address: 0x1fea4c, Func Offset: 0x30c
	// Line 577, Address: 0x1fea50, Func Offset: 0x310
	// Line 576, Address: 0x1fea80, Func Offset: 0x340
	// Line 577, Address: 0x1fea88, Func Offset: 0x348
	// Line 576, Address: 0x1feab0, Func Offset: 0x370
	// Line 577, Address: 0x1feab4, Func Offset: 0x374
	// Line 576, Address: 0x1feab8, Func Offset: 0x378
	// Line 577, Address: 0x1feabc, Func Offset: 0x37c
	// Line 576, Address: 0x1feac4, Func Offset: 0x384
	// Line 577, Address: 0x1feacc, Func Offset: 0x38c
	// Line 576, Address: 0x1feb1c, Func Offset: 0x3dc
	// Line 577, Address: 0x1feb24, Func Offset: 0x3e4
	// Line 576, Address: 0x1feb48, Func Offset: 0x408
	// Line 577, Address: 0x1feb4c, Func Offset: 0x40c
	// Line 576, Address: 0x1feb50, Func Offset: 0x410
	// Line 577, Address: 0x1feb54, Func Offset: 0x414
	// Line 576, Address: 0x1feb74, Func Offset: 0x434
	// Line 577, Address: 0x1feb78, Func Offset: 0x438
	// Line 576, Address: 0x1febb4, Func Offset: 0x474
	// Line 577, Address: 0x1febb8, Func Offset: 0x478
	// Line 576, Address: 0x1febc0, Func Offset: 0x480
	// Line 577, Address: 0x1febc4, Func Offset: 0x484
	// Line 576, Address: 0x1febfc, Func Offset: 0x4bc
	// Line 577, Address: 0x1fec00, Func Offset: 0x4c0
	// Line 576, Address: 0x1fec04, Func Offset: 0x4c4
	// Line 577, Address: 0x1fec08, Func Offset: 0x4c8
	// Line 576, Address: 0x1fec10, Func Offset: 0x4d0
	// Line 577, Address: 0x1fec1c, Func Offset: 0x4dc
	// Line 576, Address: 0x1fec34, Func Offset: 0x4f4
	// Line 577, Address: 0x1fec38, Func Offset: 0x4f8
	// Line 576, Address: 0x1fec7c, Func Offset: 0x53c
	// Line 577, Address: 0x1fec84, Func Offset: 0x544
	// Line 578, Address: 0x1fec94, Func Offset: 0x554
	// Func End, Address: 0x1feca0, Func Offset: 0x560
}

// Reset__13zNMETurBarrelFv
// Start address: 0x1feca0
void zNMETurBarrel::Reset()
{
	zNMEGoalTurrDead* goal;
	// Line 557, Address: 0x1feca0, Func Offset: 0
	// Line 558, Address: 0x1fecb0, Func Offset: 0x10
	// Line 560, Address: 0x1fef2c, Func Offset: 0x28c
	// Line 561, Address: 0x1fef40, Func Offset: 0x2a0
	// Line 562, Address: 0x1fef4c, Func Offset: 0x2ac
	// Line 563, Address: 0x1fef5c, Func Offset: 0x2bc
	// Line 567, Address: 0x1fef70, Func Offset: 0x2d0
	// Line 569, Address: 0x1fef80, Func Offset: 0x2e0
	// Line 572, Address: 0x1fef88, Func Offset: 0x2e8
	// Func End, Address: 0x1fef9c, Func Offset: 0x2fc
}

// Init__13zNMETurBarrelFP9xEntAsset
// Start address: 0x1fefa0
void zNMETurBarrel::Init(xEntAsset* asset)
{
	// Line 543, Address: 0x1fefa0, Func Offset: 0
	// Line 544, Address: 0x1fefb4, Func Offset: 0x14
	// Line 547, Address: 0x1fefc8, Func Offset: 0x28
	// Line 550, Address: 0x1ff13c, Func Offset: 0x19c
	// Line 551, Address: 0x1ff148, Func Offset: 0x1a8
	// Line 554, Address: 0x1ff154, Func Offset: 0x1b4
	// Func End, Address: 0x1ff168, Func Offset: 0x1c8
}

// DfltVulnFlags__13zNMETurBarrelFv
// Start address: 0x1ff170
int32 zNMETurBarrel::DfltVulnFlags()
{
	// Line 539, Address: 0x1ff170, Func Offset: 0
	// Line 540, Address: 0x1ff174, Func Offset: 0x4
	// Func End, Address: 0x1ff17c, Func Offset: 0xc
}

// CreateAnimTable__13zNMETurBarrelFP10xAnimTable
// Start address: 0x1ff180
xAnimTable* zNMETurBarrel::CreateAnimTable(xAnimTable* table)
{
	int32 ourAnims[9];
	// Line 442, Address: 0x1ff180, Func Offset: 0
	// Line 448, Address: 0x1ff190, Func Offset: 0x10
	// Line 455, Address: 0x1ff198, Func Offset: 0x18
	// Line 459, Address: 0x1ff1e0, Func Offset: 0x60
	// Line 464, Address: 0x1ff228, Func Offset: 0xa8
	// Line 468, Address: 0x1ff270, Func Offset: 0xf0
	// Line 473, Address: 0x1ff2b8, Func Offset: 0x138
	// Line 478, Address: 0x1ff300, Func Offset: 0x180
	// Line 483, Address: 0x1ff348, Func Offset: 0x1c8
	// Line 487, Address: 0x1ff390, Func Offset: 0x210
	// Line 495, Address: 0x1ff3d8, Func Offset: 0x258
	// Line 503, Address: 0x1ff3dc, Func Offset: 0x25c
	// Line 495, Address: 0x1ff3e0, Func Offset: 0x260
	// Line 503, Address: 0x1ff3e8, Func Offset: 0x268
	// Line 495, Address: 0x1ff3f4, Func Offset: 0x274
	// Line 503, Address: 0x1ff454, Func Offset: 0x2d4
	// Line 509, Address: 0x1ff468, Func Offset: 0x2e8
	// Line 512, Address: 0x1ff4b0, Func Offset: 0x330
	// Line 515, Address: 0x1ff4f8, Func Offset: 0x378
	// Line 517, Address: 0x1ff540, Func Offset: 0x3c0
	// Line 448, Address: 0x1ff548, Func Offset: 0x3c8
	// Line 517, Address: 0x1ff54c, Func Offset: 0x3cc
	// Line 518, Address: 0x1ff55c, Func Offset: 0x3dc
	// Func End, Address: 0x1ff56c, Func Offset: 0x3ec
}

// AnimPick__13zNMETurBarrelFi11en_npcgspotP5xGoal
// Start address: 0x1ff570
uint32 zNMETurBarrel::AnimPick(int32 gid, en_npcgspot gspot)
{
	en_turranim idx;
	// Line 382, Address: 0x1ff570, Func Offset: 0
	// Line 384, Address: 0x1ff5c4, Func Offset: 0x54
	// Line 396, Address: 0x1ff5cc, Func Offset: 0x5c
	// Line 400, Address: 0x1ff5e0, Func Offset: 0x70
	// Line 401, Address: 0x1ff5f0, Func Offset: 0x80
	// Line 402, Address: 0x1ff60c, Func Offset: 0x9c
	// Line 405, Address: 0x1ff614, Func Offset: 0xa4
	// Line 412, Address: 0x1ff61c, Func Offset: 0xac
	// Line 416, Address: 0x1ff624, Func Offset: 0xb4
	// Line 420, Address: 0x1ff62c, Func Offset: 0xbc
	// Line 424, Address: 0x1ff634, Func Offset: 0xc4
	// Line 438, Address: 0x1ff63c, Func Offset: 0xcc
	// Line 392, Address: 0x1ff688, Func Offset: 0x118
	// Line 395, Address: 0x1ff690, Func Offset: 0x120
	// Line 438, Address: 0x1ff698, Func Offset: 0x128
	// Line 390, Address: 0x1ff6b0, Func Offset: 0x140
	// Line 438, Address: 0x1ff6b8, Func Offset: 0x148
	// Line 400, Address: 0x1ff6d0, Func Offset: 0x160
	// Line 408, Address: 0x1ff6d8, Func Offset: 0x168
	// Line 439, Address: 0x1ff6e0, Func Offset: 0x170
	// Func End, Address: 0x1ff6e8, Func Offset: 0x178
}

// SelfSetup__13zNMETurBarrelFv
// Start address: 0x1ff6f0
void zNMETurBarrel::SelfSetup()
{
	xBehaveMgr* bmgr;
	xPsyche* psy;
	// Line 347, Address: 0x1ff6f0, Func Offset: 0
	// Line 349, Address: 0x1ff6fc, Func Offset: 0xc
	// Line 350, Address: 0x1ff704, Func Offset: 0x14
	// Line 353, Address: 0x1ff718, Func Offset: 0x28
	// Line 356, Address: 0x1ff71c, Func Offset: 0x2c
	// Line 360, Address: 0x1ff724, Func Offset: 0x34
	// Line 361, Address: 0x1ff738, Func Offset: 0x48
	// Line 362, Address: 0x1ff74c, Func Offset: 0x5c
	// Line 363, Address: 0x1ff760, Func Offset: 0x70
	// Line 365, Address: 0x1ff774, Func Offset: 0x84
	// Line 366, Address: 0x1ff788, Func Offset: 0x98
	// Line 370, Address: 0x1ff79c, Func Offset: 0xac
	// Line 373, Address: 0x1ff7a4, Func Offset: 0xb4
	// Line 376, Address: 0x1ff7b0, Func Offset: 0xc0
	// Func End, Address: 0x1ff7c0, Func Offset: 0xd0
}

// CreateConfig__13zNMETurBarrelFPCc
// Start address: 0x1ff7c0
void zNMETurBarrel::CreateConfig()
{
	en_nmevar vidx;
	// Line 289, Address: 0x1ff7c0, Func Offset: 0
	// Line 290, Address: 0x1ff7c4, Func Offset: 0x4
	// Line 289, Address: 0x1ff7c8, Func Offset: 0x8
	// Line 290, Address: 0x1ff7cc, Func Offset: 0xc
	// Line 289, Address: 0x1ff7d0, Func Offset: 0x10
	// Line 290, Address: 0x1ff7d4, Func Offset: 0x14
	// Line 292, Address: 0x1ff7e8, Func Offset: 0x28
	// Line 293, Address: 0x1ff7f0, Func Offset: 0x30
	// Line 304, Address: 0x1ff808, Func Offset: 0x48
	// Func End, Address: 0x1ff818, Func Offset: 0x58
}

