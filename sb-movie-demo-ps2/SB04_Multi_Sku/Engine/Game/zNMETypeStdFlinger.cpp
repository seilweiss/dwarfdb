



void TellMyNukeFam();
void FiddleThrottle(zNMEFlinger* npc, float32 dt);
int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
int32 Exit();
int32 Enter();
int32 GoalHandleMail(NMEMsg* mail);
int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
int32 Enter();
int32 GoalHandleMail(NMEMsg* mail);
int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
int32 Enter();
int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
int32 Enter();
int32 SubStateUpdate(zNMEFlinger* npc, int32& nextgoal, en_trantype& trantype);
int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
int32 Enter();
int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
int32 Exit();
int32 Enter();
void Notice(xGoal* goal);
void WoundedInput(en_npcgol gid, NMEDamageInfo* dmgmail);
int32 FlingMailDamage(NMEDamageInfo* dmgmail);
int32 TypeHandleMail(NMEMsg* mail);
float32 HealthRatio();
en_vis VisionTarget(xEnt* ent, en_defcon defcon);
void Process(float32 dt);
void Reset();
int32 GoalPick(int32& gid_would);
xAnimTable* CreateAnimTable(xAnimTable* table);
uint32 AnimPick(int32 gid, en_npcgspot gspot);
void FlingMainBrain();
void SelfDestroy();
void SelfSetup();
void Setup();
void BUpdate(xVec3* pos);
void Init(xEntAsset* asset);
int32 DfltVulnFlags();
void CreateConfig();

// TellMyNukeFam__17zNMEGoalFlingMoveF10en_sentellP10zNMECommon
// Start address: 0x2272f0
void TellMyNukeFam()
{
	// Line 1738, Address: 0x2272f0, Func Offset: 0
	// Func End, Address: 0x2272f8, Func Offset: 0x8
}

// FiddleThrottle__17zNMEGoalFlingMoveFP11zNMEFlingerf
// Start address: 0x227300
void zNMEGoalFlingMove::FiddleThrottle(zNMEFlinger* npc, float32 dt)
{
	NMECfgCommon* cfg_comm;
	NMECfgFlinger* cfg;
	int32 gid;
	float32 spd;
	float32 acc;
	// Line 1689, Address: 0x227300, Func Offset: 0
	// Line 1690, Address: 0x22731c, Func Offset: 0x1c
	// Line 1691, Address: 0x227320, Func Offset: 0x20
	// Line 1693, Address: 0x227324, Func Offset: 0x24
	// Line 1700, Address: 0x227330, Func Offset: 0x30
	// Line 1704, Address: 0x227384, Func Offset: 0x84
	// Line 1705, Address: 0x227388, Func Offset: 0x88
	// Line 1709, Address: 0x227390, Func Offset: 0x90
	// Line 1710, Address: 0x227398, Func Offset: 0x98
	// Line 1709, Address: 0x22739c, Func Offset: 0x9c
	// Line 1711, Address: 0x2273a8, Func Offset: 0xa8
	// Line 1715, Address: 0x2273b0, Func Offset: 0xb0
	// Line 1716, Address: 0x2273b4, Func Offset: 0xb4
	// Line 1726, Address: 0x2273bc, Func Offset: 0xbc
	// Line 1730, Address: 0x2273c0, Func Offset: 0xc0
	// Line 1733, Address: 0x2273cc, Func Offset: 0xcc
	// Func End, Address: 0x2273e8, Func Offset: 0xe8
}

// Process__17zNMEGoalFlingMoveFP11en_trantypefPv
// Start address: 0x2273f0
int32 zNMEGoalFlingMove::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	zNMEFlinger* npc;
	// Line 1674, Address: 0x2273f0, Func Offset: 0
	// Line 1675, Address: 0x227418, Func Offset: 0x28
	// Line 1678, Address: 0x22741c, Func Offset: 0x2c
	// Line 1675, Address: 0x227420, Func Offset: 0x30
	// Line 1678, Address: 0x227424, Func Offset: 0x34
	// Line 1679, Address: 0x227430, Func Offset: 0x40
	// Line 1683, Address: 0x227434, Func Offset: 0x44
	// Line 1685, Address: 0x227444, Func Offset: 0x54
	// Line 1686, Address: 0x2274b4, Func Offset: 0xc4
	// Func End, Address: 0x2274d4, Func Offset: 0xe4
}

// Exit__17zNMEGoalFlingMoveFfPv
// Start address: 0x2274e0
int32 zNMEGoalFlingMove::Exit()
{
	// Line 1669, Address: 0x2274e0, Func Offset: 0
	// Line 1671, Address: 0x2274e8, Func Offset: 0x8
	// Func End, Address: 0x2274f0, Func Offset: 0x10
}

// Enter__17zNMEGoalFlingMoveFfPv
// Start address: 0x2274f0
int32 zNMEGoalFlingMove::Enter()
{
	zNMEFlinger* npc;
	// Line 1658, Address: 0x2274f0, Func Offset: 0
	// Line 1661, Address: 0x2274f4, Func Offset: 0x4
	// Line 1658, Address: 0x2274f8, Func Offset: 0x8
	// Line 1661, Address: 0x2274fc, Func Offset: 0xc
	// Line 1658, Address: 0x227500, Func Offset: 0x10
	// Line 1661, Address: 0x227504, Func Offset: 0x14
	// Line 1658, Address: 0x227508, Func Offset: 0x18
	// Line 1659, Address: 0x227510, Func Offset: 0x20
	// Line 1661, Address: 0x227518, Func Offset: 0x28
	// Line 1664, Address: 0x227574, Func Offset: 0x84
	// Line 1661, Address: 0x227580, Func Offset: 0x90
	// Line 1662, Address: 0x22759c, Func Offset: 0xac
	// Line 1664, Address: 0x2275a0, Func Offset: 0xb0
	// Line 1665, Address: 0x227638, Func Offset: 0x148
	// Func End, Address: 0x227650, Func Offset: 0x160
}

// GoalHandleMail__17zNMEGoalFlingFleeFP6NMEMsg
// Start address: 0x227650
int32 zNMEGoalFlingFlee::GoalHandleMail(NMEMsg* mail)
{
	int32 snarfed;
	// Line 1596, Address: 0x227650, Func Offset: 0
	// Line 1600, Address: 0x227654, Func Offset: 0x4
	// Line 1596, Address: 0x227658, Func Offset: 0x8
	// Line 1600, Address: 0x227668, Func Offset: 0x18
	// Line 1613, Address: 0x227674, Func Offset: 0x24
	// Line 1617, Address: 0x227678, Func Offset: 0x28
	// Line 1605, Address: 0x227684, Func Offset: 0x34
	// Line 1617, Address: 0x227688, Func Offset: 0x38
	// Line 1605, Address: 0x2276c0, Func Offset: 0x70
	// Line 1617, Address: 0x2276cc, Func Offset: 0x7c
	// Line 1609, Address: 0x2276dc, Func Offset: 0x8c
	// Line 1617, Address: 0x2276e4, Func Offset: 0x94
	// Line 1605, Address: 0x2276fc, Func Offset: 0xac
	// Line 1618, Address: 0x227704, Func Offset: 0xb4
	// Func End, Address: 0x227718, Func Offset: 0xc8
}

// Process__17zNMEGoalFlingFleeFP11en_trantypefPv
// Start address: 0x227720
int32 zNMEGoalFlingFlee::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	zNMEFlinger* npc;
	int32 nextgoal;
	// Line 1559, Address: 0x227720, Func Offset: 0
	// Line 1567, Address: 0x227724, Func Offset: 0x4
	// Line 1559, Address: 0x227728, Func Offset: 0x8
	// Line 1567, Address: 0x22772c, Func Offset: 0xc
	// Line 1559, Address: 0x227730, Func Offset: 0x10
	// Line 1560, Address: 0x227750, Func Offset: 0x30
	// Line 1561, Address: 0x227758, Func Offset: 0x38
	// Line 1567, Address: 0x227760, Func Offset: 0x40
	// Line 1586, Address: 0x227780, Func Offset: 0x60
	// Line 1590, Address: 0x2277a8, Func Offset: 0x88
	// Line 1592, Address: 0x22787c, Func Offset: 0x15c
	// Line 1569, Address: 0x2278e0, Func Offset: 0x1c0
	// Line 1592, Address: 0x2278e4, Func Offset: 0x1c4
	// Line 1571, Address: 0x2278f0, Func Offset: 0x1d0
	// Line 1592, Address: 0x2278f8, Func Offset: 0x1d8
	// Line 1578, Address: 0x227904, Func Offset: 0x1e4
	// Line 1592, Address: 0x227920, Func Offset: 0x200
	// Line 1579, Address: 0x227928, Func Offset: 0x208
	// Line 1581, Address: 0x22792c, Func Offset: 0x20c
	// Line 1592, Address: 0x227930, Func Offset: 0x210
	// Line 1581, Address: 0x227934, Func Offset: 0x214
	// Line 1580, Address: 0x227938, Func Offset: 0x218
	// Line 1581, Address: 0x22793c, Func Offset: 0x21c
	// Line 1580, Address: 0x227940, Func Offset: 0x220
	// Line 1592, Address: 0x227944, Func Offset: 0x224
	// Line 1582, Address: 0x227958, Func Offset: 0x238
	// Line 1592, Address: 0x227960, Func Offset: 0x240
	// Line 1572, Address: 0x227964, Func Offset: 0x244
	// Line 1573, Address: 0x227974, Func Offset: 0x254
	// Line 1572, Address: 0x227978, Func Offset: 0x258
	// Line 1592, Address: 0x227980, Func Offset: 0x260
	// Line 1573, Address: 0x227988, Func Offset: 0x268
	// Line 1590, Address: 0x227998, Func Offset: 0x278
	// Line 1592, Address: 0x2279b4, Func Offset: 0x294
	// Line 1590, Address: 0x2279b8, Func Offset: 0x298
	// Line 1592, Address: 0x2279bc, Func Offset: 0x29c
	// Line 1590, Address: 0x2279c4, Func Offset: 0x2a4
	// Line 1592, Address: 0x2279cc, Func Offset: 0x2ac
	// Line 1593, Address: 0x2279dc, Func Offset: 0x2bc
	// Func End, Address: 0x2279fc, Func Offset: 0x2dc
}

// Enter__17zNMEGoalFlingFleeFfPv
// Start address: 0x227a00
int32 zNMEGoalFlingFlee::Enter()
{
	zNMEFlinger* npc;
	// Line 1543, Address: 0x227a00, Func Offset: 0
	// Line 1546, Address: 0x227a04, Func Offset: 0x4
	// Line 1543, Address: 0x227a08, Func Offset: 0x8
	// Line 1547, Address: 0x227a0c, Func Offset: 0xc
	// Line 1543, Address: 0x227a10, Func Offset: 0x10
	// Line 1544, Address: 0x227a20, Func Offset: 0x20
	// Line 1547, Address: 0x227a28, Func Offset: 0x28
	// Line 1544, Address: 0x227a2c, Func Offset: 0x2c
	// Line 1546, Address: 0x227a30, Func Offset: 0x30
	// Line 1547, Address: 0x227a34, Func Offset: 0x34
	// Line 1550, Address: 0x227a7c, Func Offset: 0x7c
	// Line 1551, Address: 0x227a8c, Func Offset: 0x8c
	// Line 1552, Address: 0x227a90, Func Offset: 0x90
	// Line 1551, Address: 0x227a94, Func Offset: 0x94
	// Line 1553, Address: 0x227a98, Func Offset: 0x98
	// Line 1552, Address: 0x227a9c, Func Offset: 0x9c
	// Line 1555, Address: 0x227aac, Func Offset: 0xac
	// Line 1552, Address: 0x227ab8, Func Offset: 0xb8
	// Line 1553, Address: 0x227ac4, Func Offset: 0xc4
	// Line 1555, Address: 0x227ad4, Func Offset: 0xd4
	// Line 1556, Address: 0x227b50, Func Offset: 0x150
	// Func End, Address: 0x227b6c, Func Offset: 0x16c
}

// GoalHandleMail__18zNMEGoalFlingBoingFP6NMEMsg
// Start address: 0x227b70
int32 zNMEGoalFlingBoing::GoalHandleMail(NMEMsg* mail)
{
	int32 snarfed;
	// Line 1497, Address: 0x227b70, Func Offset: 0
	// Line 1501, Address: 0x227b74, Func Offset: 0x4
	// Line 1497, Address: 0x227b78, Func Offset: 0x8
	// Line 1501, Address: 0x227b88, Func Offset: 0x18
	// Line 1515, Address: 0x227b94, Func Offset: 0x24
	// Line 1519, Address: 0x227b98, Func Offset: 0x28
	// Line 1507, Address: 0x227ba4, Func Offset: 0x34
	// Line 1519, Address: 0x227ba8, Func Offset: 0x38
	// Line 1507, Address: 0x227be0, Func Offset: 0x70
	// Line 1519, Address: 0x227bec, Func Offset: 0x7c
	// Line 1511, Address: 0x227bfc, Func Offset: 0x8c
	// Line 1519, Address: 0x227c04, Func Offset: 0x94
	// Line 1507, Address: 0x227c1c, Func Offset: 0xac
	// Line 1520, Address: 0x227c24, Func Offset: 0xb4
	// Func End, Address: 0x227c38, Func Offset: 0xc8
}

// Process__18zNMEGoalFlingBoingFP11en_trantypefPv
// Start address: 0x227c40
int32 zNMEGoalFlingBoing::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	zNMEFlinger* npc;
	int32 nextgoal;
	// Line 1463, Address: 0x227c40, Func Offset: 0
	// Line 1468, Address: 0x227c44, Func Offset: 0x4
	// Line 1463, Address: 0x227c48, Func Offset: 0x8
	// Line 1468, Address: 0x227c4c, Func Offset: 0xc
	// Line 1463, Address: 0x227c50, Func Offset: 0x10
	// Line 1464, Address: 0x227c70, Func Offset: 0x30
	// Line 1465, Address: 0x227c78, Func Offset: 0x38
	// Line 1468, Address: 0x227c80, Func Offset: 0x40
	// Line 1487, Address: 0x227ca0, Func Offset: 0x60
	// Line 1491, Address: 0x227cc8, Func Offset: 0x88
	// Line 1493, Address: 0x227d9c, Func Offset: 0x15c
	// Line 1470, Address: 0x227e00, Func Offset: 0x1c0
	// Line 1493, Address: 0x227e04, Func Offset: 0x1c4
	// Line 1472, Address: 0x227e10, Func Offset: 0x1d0
	// Line 1493, Address: 0x227e18, Func Offset: 0x1d8
	// Line 1479, Address: 0x227e24, Func Offset: 0x1e4
	// Line 1493, Address: 0x227e40, Func Offset: 0x200
	// Line 1480, Address: 0x227e48, Func Offset: 0x208
	// Line 1482, Address: 0x227e4c, Func Offset: 0x20c
	// Line 1493, Address: 0x227e50, Func Offset: 0x210
	// Line 1482, Address: 0x227e54, Func Offset: 0x214
	// Line 1481, Address: 0x227e58, Func Offset: 0x218
	// Line 1482, Address: 0x227e5c, Func Offset: 0x21c
	// Line 1481, Address: 0x227e60, Func Offset: 0x220
	// Line 1493, Address: 0x227e64, Func Offset: 0x224
	// Line 1483, Address: 0x227e78, Func Offset: 0x238
	// Line 1493, Address: 0x227e80, Func Offset: 0x240
	// Line 1473, Address: 0x227e84, Func Offset: 0x244
	// Line 1474, Address: 0x227e94, Func Offset: 0x254
	// Line 1473, Address: 0x227e98, Func Offset: 0x258
	// Line 1493, Address: 0x227ea0, Func Offset: 0x260
	// Line 1474, Address: 0x227ea8, Func Offset: 0x268
	// Line 1491, Address: 0x227eb8, Func Offset: 0x278
	// Line 1493, Address: 0x227ed4, Func Offset: 0x294
	// Line 1491, Address: 0x227ed8, Func Offset: 0x298
	// Line 1493, Address: 0x227edc, Func Offset: 0x29c
	// Line 1491, Address: 0x227ee4, Func Offset: 0x2a4
	// Line 1493, Address: 0x227eec, Func Offset: 0x2ac
	// Line 1494, Address: 0x227efc, Func Offset: 0x2bc
	// Func End, Address: 0x227f1c, Func Offset: 0x2dc
}

// Enter__18zNMEGoalFlingBoingFfPv
// Start address: 0x227f20
int32 zNMEGoalFlingBoing::Enter()
{
	zNMEFlinger* npc;
	// Line 1447, Address: 0x227f20, Func Offset: 0
	// Line 1450, Address: 0x227f24, Func Offset: 0x4
	// Line 1447, Address: 0x227f28, Func Offset: 0x8
	// Line 1451, Address: 0x227f2c, Func Offset: 0xc
	// Line 1447, Address: 0x227f30, Func Offset: 0x10
	// Line 1448, Address: 0x227f40, Func Offset: 0x20
	// Line 1451, Address: 0x227f48, Func Offset: 0x28
	// Line 1448, Address: 0x227f4c, Func Offset: 0x2c
	// Line 1450, Address: 0x227f50, Func Offset: 0x30
	// Line 1451, Address: 0x227f54, Func Offset: 0x34
	// Line 1454, Address: 0x227f9c, Func Offset: 0x7c
	// Line 1455, Address: 0x227fac, Func Offset: 0x8c
	// Line 1456, Address: 0x227fb0, Func Offset: 0x90
	// Line 1455, Address: 0x227fb4, Func Offset: 0x94
	// Line 1457, Address: 0x227fb8, Func Offset: 0x98
	// Line 1456, Address: 0x227fbc, Func Offset: 0x9c
	// Line 1459, Address: 0x227fcc, Func Offset: 0xac
	// Line 1456, Address: 0x227fd8, Func Offset: 0xb8
	// Line 1457, Address: 0x227fe4, Func Offset: 0xc4
	// Line 1459, Address: 0x227ff4, Func Offset: 0xd4
	// Line 1460, Address: 0x228070, Func Offset: 0x150
	// Func End, Address: 0x22808c, Func Offset: 0x16c
}

// Process__19zNMEGoalFlingAttackFP11en_trantypefPv
// Start address: 0x228090
int32 zNMEGoalFlingAttack::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	zNMEFlinger* npc;
	float32 tym_animCurr;
	// Line 1371, Address: 0x228090, Func Offset: 0
	// Line 1375, Address: 0x228098, Func Offset: 0x8
	// Line 1371, Address: 0x22809c, Func Offset: 0xc
	// Line 1375, Address: 0x2280a0, Func Offset: 0x10
	// Line 1371, Address: 0x2280a4, Func Offset: 0x14
	// Line 1375, Address: 0x2280a8, Func Offset: 0x18
	// Line 1371, Address: 0x2280ac, Func Offset: 0x1c
	// Line 1375, Address: 0x2280c8, Func Offset: 0x38
	// Line 1372, Address: 0x2280cc, Func Offset: 0x3c
	// Line 1375, Address: 0x2280d0, Func Offset: 0x40
	// Line 1372, Address: 0x2280d4, Func Offset: 0x44
	// Line 1375, Address: 0x2280dc, Func Offset: 0x4c
	// Line 1372, Address: 0x2280e4, Func Offset: 0x54
	// Line 1375, Address: 0x2280e8, Func Offset: 0x58
	// Line 1372, Address: 0x2280ec, Func Offset: 0x5c
	// Line 1375, Address: 0x2280f4, Func Offset: 0x64
	// Line 1377, Address: 0x2281dc, Func Offset: 0x14c
	// Line 1379, Address: 0x2281ec, Func Offset: 0x15c
	// Line 1378, Address: 0x2281f8, Func Offset: 0x168
	// Line 1379, Address: 0x228204, Func Offset: 0x174
	// Line 1381, Address: 0x228210, Func Offset: 0x180
	// Line 1382, Address: 0x22836c, Func Offset: 0x2dc
	// Line 1383, Address: 0x228374, Func Offset: 0x2e4
	// Line 1388, Address: 0x22838c, Func Offset: 0x2fc
	// Line 1390, Address: 0x2283b8, Func Offset: 0x328
	// Line 1392, Address: 0x2283e0, Func Offset: 0x350
	// Line 1393, Address: 0x2283e4, Func Offset: 0x354
	// Line 1396, Address: 0x2283f0, Func Offset: 0x360
	// Line 1397, Address: 0x228448, Func Offset: 0x3b8
	// Func End, Address: 0x22846c, Func Offset: 0x3dc
}

// Enter__19zNMEGoalFlingAttackFfPv
// Start address: 0x228470
int32 zNMEGoalFlingAttack::Enter()
{
	// Line 1363, Address: 0x228470, Func Offset: 0
	// Line 1365, Address: 0x228474, Func Offset: 0x4
	// Line 1363, Address: 0x228478, Func Offset: 0x8
	// Line 1366, Address: 0x22847c, Func Offset: 0xc
	// Line 1363, Address: 0x228480, Func Offset: 0x10
	// Line 1365, Address: 0x22848c, Func Offset: 0x1c
	// Line 1366, Address: 0x228494, Func Offset: 0x24
	// Line 1367, Address: 0x2284c0, Func Offset: 0x50
	// Line 1366, Address: 0x2284f4, Func Offset: 0x84
	// Line 1367, Address: 0x2284f8, Func Offset: 0x88
	// Line 1366, Address: 0x228508, Func Offset: 0x98
	// Line 1367, Address: 0x228518, Func Offset: 0xa8
	// Line 1368, Address: 0x22856c, Func Offset: 0xfc
	// Func End, Address: 0x228584, Func Offset: 0x114
}

// SubStateUpdate__19zNMEGoalFlingBattleFP11zNMEFlingerfRiR11en_trantype
// Start address: 0x228590
int32 zNMEGoalFlingBattle::SubStateUpdate(zNMEFlinger* npc, int32& nextgoal, en_trantype& trantype)
{
	en_vis iseeplyr;
	// Line 1313, Address: 0x228590, Func Offset: 0
	// Line 1315, Address: 0x228594, Func Offset: 0x4
	// Line 1313, Address: 0x228598, Func Offset: 0x8
	// Line 1315, Address: 0x2285b8, Func Offset: 0x28
	// Line 1322, Address: 0x2285c8, Func Offset: 0x38
	// Line 1324, Address: 0x2285e8, Func Offset: 0x58
	// Line 1334, Address: 0x2285f4, Func Offset: 0x64
	// Line 1335, Address: 0x2285fc, Func Offset: 0x6c
	// Line 1341, Address: 0x228604, Func Offset: 0x74
	// Line 1343, Address: 0x22862c, Func Offset: 0x9c
	// Line 1345, Address: 0x228638, Func Offset: 0xa8
	// Line 1348, Address: 0x228644, Func Offset: 0xb4
	// Line 1346, Address: 0x228648, Func Offset: 0xb8
	// Line 1348, Address: 0x22864c, Func Offset: 0xbc
	// Line 1347, Address: 0x228650, Func Offset: 0xc0
	// Line 1346, Address: 0x228654, Func Offset: 0xc4
	// Line 1347, Address: 0x228658, Func Offset: 0xc8
	// Line 1348, Address: 0x22865c, Func Offset: 0xcc
	// Line 1349, Address: 0x228670, Func Offset: 0xe0
	// Line 1354, Address: 0x228678, Func Offset: 0xe8
	// Line 1316, Address: 0x228684, Func Offset: 0xf4
	// Line 1318, Address: 0x228688, Func Offset: 0xf8
	// Line 1354, Address: 0x22868c, Func Offset: 0xfc
	// Line 1317, Address: 0x228690, Func Offset: 0x100
	// Line 1354, Address: 0x228698, Func Offset: 0x108
	// Line 1319, Address: 0x2286ac, Func Offset: 0x11c
	// Line 1326, Address: 0x2286b4, Func Offset: 0x124
	// Line 1328, Address: 0x2286b8, Func Offset: 0x128
	// Line 1354, Address: 0x2286bc, Func Offset: 0x12c
	// Line 1328, Address: 0x2286c0, Func Offset: 0x130
	// Line 1327, Address: 0x2286c4, Func Offset: 0x134
	// Line 1328, Address: 0x2286c8, Func Offset: 0x138
	// Line 1327, Address: 0x2286cc, Func Offset: 0x13c
	// Line 1354, Address: 0x2286d0, Func Offset: 0x140
	// Line 1329, Address: 0x2286e4, Func Offset: 0x154
	// Line 1355, Address: 0x2286e8, Func Offset: 0x158
	// Func End, Address: 0x228704, Func Offset: 0x174
}

// Process__19zNMEGoalFlingBattleFP11en_trantypefPv
// Start address: 0x228710
int32 zNMEGoalFlingBattle::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	zNMEFlinger* npc;
	int32 nextgoal;
	int32 doTran;
	// Line 1288, Address: 0x228710, Func Offset: 0
	// Line 1291, Address: 0x228714, Func Offset: 0x4
	// Line 1288, Address: 0x228718, Func Offset: 0x8
	// Line 1291, Address: 0x22873c, Func Offset: 0x2c
	// Line 1289, Address: 0x228740, Func Offset: 0x30
	// Line 1291, Address: 0x228748, Func Offset: 0x38
	// Line 1292, Address: 0x228754, Func Offset: 0x44
	// Line 1303, Address: 0x228780, Func Offset: 0x70
	// Line 1306, Address: 0x2287ac, Func Offset: 0x9c
	// Line 1308, Address: 0x228880, Func Offset: 0x170
	// Line 1296, Address: 0x2288e0, Func Offset: 0x1d0
	// Line 1308, Address: 0x2288e8, Func Offset: 0x1d8
	// Line 1296, Address: 0x2288ec, Func Offset: 0x1dc
	// Line 1308, Address: 0x2288f0, Func Offset: 0x1e0
	// Line 1298, Address: 0x228900, Func Offset: 0x1f0
	// Line 1306, Address: 0x228908, Func Offset: 0x1f8
	// Line 1308, Address: 0x228924, Func Offset: 0x214
	// Line 1306, Address: 0x228928, Func Offset: 0x218
	// Line 1308, Address: 0x22892c, Func Offset: 0x21c
	// Line 1306, Address: 0x228934, Func Offset: 0x224
	// Line 1308, Address: 0x22893c, Func Offset: 0x22c
	// Line 1309, Address: 0x22894c, Func Offset: 0x23c
	// Func End, Address: 0x22896c, Func Offset: 0x25c
}

// Enter__19zNMEGoalFlingBattleFfPv
// Start address: 0x228970
int32 zNMEGoalFlingBattle::Enter()
{
	// Line 1282, Address: 0x228970, Func Offset: 0
	// Line 1283, Address: 0x228974, Func Offset: 0x4
	// Line 1282, Address: 0x228978, Func Offset: 0x8
	// Line 1284, Address: 0x22897c, Func Offset: 0xc
	// Line 1282, Address: 0x228980, Func Offset: 0x10
	// Line 1283, Address: 0x22898c, Func Offset: 0x1c
	// Line 1284, Address: 0x228990, Func Offset: 0x20
	// Line 1285, Address: 0x228a14, Func Offset: 0xa4
	// Func End, Address: 0x228a2c, Func Offset: 0xbc
}

// Process__18zNMEGoalFlingAwareFP11en_trantypefPv
// Start address: 0x228a30
int32 zNMEGoalFlingAware::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	int32 nextgoal;
	zNMEFlinger* npc;
	en_vis iseeplyr;
	// Line 1239, Address: 0x228a30, Func Offset: 0
	// Line 1248, Address: 0x228a34, Func Offset: 0x4
	// Line 1239, Address: 0x228a38, Func Offset: 0x8
	// Line 1240, Address: 0x228a5c, Func Offset: 0x2c
	// Line 1248, Address: 0x228a60, Func Offset: 0x30
	// Line 1241, Address: 0x228a64, Func Offset: 0x34
	// Line 1248, Address: 0x228a68, Func Offset: 0x38
	// Line 1241, Address: 0x228a6c, Func Offset: 0x3c
	// Line 1248, Address: 0x228a70, Func Offset: 0x40
	// Line 1255, Address: 0x228a78, Func Offset: 0x48
	// Line 1256, Address: 0x228a98, Func Offset: 0x68
	// Line 1263, Address: 0x228aa4, Func Offset: 0x74
	// Line 1271, Address: 0x228ab0, Func Offset: 0x80
	// Line 1273, Address: 0x228b84, Func Offset: 0x154
	// Line 1249, Address: 0x228be4, Func Offset: 0x1b4
	// Line 1251, Address: 0x228be8, Func Offset: 0x1b8
	// Line 1273, Address: 0x228bec, Func Offset: 0x1bc
	// Line 1251, Address: 0x228bf0, Func Offset: 0x1c0
	// Line 1250, Address: 0x228bf4, Func Offset: 0x1c4
	// Line 1251, Address: 0x228bf8, Func Offset: 0x1c8
	// Line 1250, Address: 0x228bfc, Func Offset: 0x1cc
	// Line 1273, Address: 0x228c00, Func Offset: 0x1d0
	// Line 1252, Address: 0x228c14, Func Offset: 0x1e4
	// Line 1257, Address: 0x228c1c, Func Offset: 0x1ec
	// Line 1259, Address: 0x228c20, Func Offset: 0x1f0
	// Line 1273, Address: 0x228c24, Func Offset: 0x1f4
	// Line 1259, Address: 0x228c28, Func Offset: 0x1f8
	// Line 1258, Address: 0x228c2c, Func Offset: 0x1fc
	// Line 1259, Address: 0x228c30, Func Offset: 0x200
	// Line 1258, Address: 0x228c34, Func Offset: 0x204
	// Line 1273, Address: 0x228c38, Func Offset: 0x208
	// Line 1260, Address: 0x228c4c, Func Offset: 0x21c
	// Line 1264, Address: 0x228c54, Func Offset: 0x224
	// Line 1266, Address: 0x228c58, Func Offset: 0x228
	// Line 1273, Address: 0x228c5c, Func Offset: 0x22c
	// Line 1266, Address: 0x228c60, Func Offset: 0x230
	// Line 1265, Address: 0x228c64, Func Offset: 0x234
	// Line 1266, Address: 0x228c68, Func Offset: 0x238
	// Line 1265, Address: 0x228c6c, Func Offset: 0x23c
	// Line 1273, Address: 0x228c70, Func Offset: 0x240
	// Line 1267, Address: 0x228c84, Func Offset: 0x254
	// Line 1271, Address: 0x228c8c, Func Offset: 0x25c
	// Line 1273, Address: 0x228ca8, Func Offset: 0x278
	// Line 1271, Address: 0x228cac, Func Offset: 0x27c
	// Line 1273, Address: 0x228cb0, Func Offset: 0x280
	// Line 1271, Address: 0x228cb8, Func Offset: 0x288
	// Line 1273, Address: 0x228cc0, Func Offset: 0x290
	// Line 1274, Address: 0x228cd0, Func Offset: 0x2a0
	// Func End, Address: 0x228cf0, Func Offset: 0x2c0
}

// Process__19zNMEGoalFlingNormalFP11en_trantypefPv
// Start address: 0x228cf0
int32 zNMEGoalFlingNormal::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	zNMEFlinger* npc;
	int32 nextgoal;
	en_vis iseeplyr;
	// Line 1210, Address: 0x228cf0, Func Offset: 0
	// Line 1219, Address: 0x228cf4, Func Offset: 0x4
	// Line 1210, Address: 0x228cf8, Func Offset: 0x8
	// Line 1211, Address: 0x228d1c, Func Offset: 0x2c
	// Line 1219, Address: 0x228d20, Func Offset: 0x30
	// Line 1211, Address: 0x228d24, Func Offset: 0x34
	// Line 1212, Address: 0x228d28, Func Offset: 0x38
	// Line 1219, Address: 0x228d2c, Func Offset: 0x3c
	// Line 1221, Address: 0x228d38, Func Offset: 0x48
	// Line 1222, Address: 0x228d58, Func Offset: 0x68
	// Line 1223, Address: 0x228d64, Func Offset: 0x74
	// Line 1225, Address: 0x228d68, Func Offset: 0x78
	// Line 1223, Address: 0x228d6c, Func Offset: 0x7c
	// Line 1225, Address: 0x228d70, Func Offset: 0x80
	// Line 1224, Address: 0x228d74, Func Offset: 0x84
	// Line 1225, Address: 0x228d78, Func Offset: 0x88
	// Line 1224, Address: 0x228d7c, Func Offset: 0x8c
	// Line 1225, Address: 0x228d84, Func Offset: 0x94
	// Line 1226, Address: 0x228d94, Func Offset: 0xa4
	// Line 1230, Address: 0x228d9c, Func Offset: 0xac
	// Line 1231, Address: 0x228df8, Func Offset: 0x108
	// Func End, Address: 0x228e18, Func Offset: 0x128
}

// Exit__19zNMEGoalFlingNormalFfPv
// Start address: 0x228e20
int32 zNMEGoalFlingNormal::Exit()
{
	// Line 1202, Address: 0x228e20, Func Offset: 0
	// Line 1204, Address: 0x228e24, Func Offset: 0x4
	// Line 1202, Address: 0x228e28, Func Offset: 0x8
	// Line 1204, Address: 0x228e2c, Func Offset: 0xc
	// Line 1205, Address: 0x228e40, Func Offset: 0x20
	// Line 1207, Address: 0x228e60, Func Offset: 0x40
	// Line 1206, Address: 0x228e64, Func Offset: 0x44
	// Line 1207, Address: 0x228e68, Func Offset: 0x48
	// Func End, Address: 0x228e70, Func Offset: 0x50
}

// Enter__19zNMEGoalFlingNormalFfPv
// Start address: 0x228e70
int32 zNMEGoalFlingNormal::Enter()
{
	// Line 1194, Address: 0x228e70, Func Offset: 0
	// Line 1196, Address: 0x228e74, Func Offset: 0x4
	// Line 1194, Address: 0x228e78, Func Offset: 0x8
	// Line 1196, Address: 0x228e7c, Func Offset: 0xc
	// Line 1194, Address: 0x228e80, Func Offset: 0x10
	// Line 1196, Address: 0x228e8c, Func Offset: 0x1c
	// Line 1197, Address: 0x228ea0, Func Offset: 0x30
	// Line 1198, Address: 0x228eb0, Func Offset: 0x40
	// Line 1197, Address: 0x228ebc, Func Offset: 0x4c
	// Line 1198, Address: 0x228ec8, Func Offset: 0x58
	// Line 1199, Address: 0x228f44, Func Offset: 0xd4
	// Func End, Address: 0x228f5c, Func Offset: 0xec
}

// Notice__14FlingLetMeKnowF10en_psynoteP5xGoalPv
// Start address: 0x228f60
void Notice(xGoal* goal)
{
	xPsyche* psy_move;
	int32 gid_move;
	int32 gid_want;
	// Line 1119, Address: 0x228f60, Func Offset: 0
	// Line 1122, Address: 0x228f74, Func Offset: 0x14
	// Line 1124, Address: 0x228f80, Func Offset: 0x20
	// Line 1128, Address: 0x228f88, Func Offset: 0x28
	// Line 1133, Address: 0x22905c, Func Offset: 0xfc
	// Line 1134, Address: 0x229064, Func Offset: 0x104
	// Line 1137, Address: 0x229068, Func Offset: 0x108
	// Line 1142, Address: 0x229070, Func Offset: 0x110
	// Line 1143, Address: 0x229088, Func Offset: 0x128
	// Func End, Address: 0x229098, Func Offset: 0x138
}

// WoundedInput__11zNMEFlingerF9en_npcgolP13NMEDamageInfo
// Start address: 0x2290a0
void zNMEFlinger::WoundedInput(en_npcgol gid, NMEDamageInfo* dmgmail)
{
	xGoal* goal;
	// Line 1096, Address: 0x2290a0, Func Offset: 0
	// Line 1097, Address: 0x2290a4, Func Offset: 0x4
	// Line 1096, Address: 0x2290a8, Func Offset: 0x8
	// Line 1097, Address: 0x2290b4, Func Offset: 0x14
	// Line 1106, Address: 0x2290c0, Func Offset: 0x20
	// Line 1108, Address: 0x2290e8, Func Offset: 0x48
	// Line 1109, Address: 0x2290f8, Func Offset: 0x58
	// Func End, Address: 0x229108, Func Offset: 0x68
}

// FlingMailDamage__11zNMEFlingerFP13NMEDamageInfo
// Start address: 0x229110
int32 zNMEFlinger::FlingMailDamage(NMEDamageInfo* dmgmail)
{
	int32 rc;
	int32 handled;
	xPsyche* psy;
	xGoal* goal;
	// Line 1010, Address: 0x229110, Func Offset: 0
	// Line 1011, Address: 0x229128, Func Offset: 0x18
	// Line 1012, Address: 0x229134, Func Offset: 0x24
	// Line 1017, Address: 0x22913c, Func Offset: 0x2c
	// Line 1021, Address: 0x229168, Func Offset: 0x58
	// Line 1022, Address: 0x22917c, Func Offset: 0x6c
	// Line 1046, Address: 0x229184, Func Offset: 0x74
	// Line 1049, Address: 0x2291a0, Func Offset: 0x90
	// Line 1050, Address: 0x2291ac, Func Offset: 0x9c
	// Line 1051, Address: 0x2291c8, Func Offset: 0xb8
	// Line 1052, Address: 0x2291dc, Func Offset: 0xcc
	// Line 1054, Address: 0x2291e4, Func Offset: 0xd4
	// Line 1055, Address: 0x229200, Func Offset: 0xf0
	// Line 1058, Address: 0x229214, Func Offset: 0x104
	// Line 1062, Address: 0x22921c, Func Offset: 0x10c
	// Line 1064, Address: 0x229220, Func Offset: 0x110
	// Line 1067, Address: 0x229230, Func Offset: 0x120
	// Line 1068, Address: 0x229234, Func Offset: 0x124
	// Line 1067, Address: 0x229238, Func Offset: 0x128
	// Line 1068, Address: 0x22923c, Func Offset: 0x12c
	// Line 1070, Address: 0x22924c, Func Offset: 0x13c
	// Line 1073, Address: 0x229254, Func Offset: 0x144
	// Line 1079, Address: 0x229258, Func Offset: 0x148
	// Line 1013, Address: 0x229264, Func Offset: 0x154
	// Line 1080, Address: 0x229274, Func Offset: 0x164
	// Func End, Address: 0x22928c, Func Offset: 0x17c
}

// TypeHandleMail__11zNMEFlingerFP6NMEMsg
// Start address: 0x229290
int32 zNMEFlinger::TypeHandleMail(NMEMsg* mail)
{
	int32 handled;
	// Line 981, Address: 0x229290, Func Offset: 0
	// Line 984, Address: 0x229294, Func Offset: 0x4
	// Line 981, Address: 0x229298, Func Offset: 0x8
	// Line 984, Address: 0x2292a8, Func Offset: 0x18
	// Line 989, Address: 0x2292cc, Func Offset: 0x3c
	// Line 990, Address: 0x2292d4, Func Offset: 0x44
	// Line 994, Address: 0x2292dc, Func Offset: 0x4c
	// Line 995, Address: 0x2292e4, Func Offset: 0x54
	// Line 998, Address: 0x2292ec, Func Offset: 0x5c
	// Line 1006, Address: 0x2293c8, Func Offset: 0x138
	// Line 1007, Address: 0x2293cc, Func Offset: 0x13c
	// Func End, Address: 0x2293e0, Func Offset: 0x150
}

// HealthRatio__11zNMEFlingerFv
// Start address: 0x2293e0
float32 zNMEFlinger::HealthRatio()
{
	float32 rat;
	// Line 965, Address: 0x2293e0, Func Offset: 0
	// Line 966, Address: 0x2293e4, Func Offset: 0x4
	// Line 969, Address: 0x2293ec, Func Offset: 0xc
	// Line 972, Address: 0x2293f0, Func Offset: 0x10
	// Line 970, Address: 0x2293f4, Func Offset: 0x14
	// Line 972, Address: 0x2293f8, Func Offset: 0x18
	// Line 969, Address: 0x2293fc, Func Offset: 0x1c
	// Line 970, Address: 0x229400, Func Offset: 0x20
	// Line 972, Address: 0x229410, Func Offset: 0x30
	// Line 967, Address: 0x229468, Func Offset: 0x88
	// Line 973, Address: 0x22946c, Func Offset: 0x8c
	// Func End, Address: 0x229474, Func Offset: 0x94
}

// VisionTarget__11zNMEFlingerCFP4xEnt9en_defconi
// Start address: 0x229480
en_vis zNMEFlinger::VisionTarget(xEnt* ent, en_defcon defcon)
{
	float32 dy;
	NMECfgFlinger* cfg;
	// Line 819, Address: 0x229480, Func Offset: 0
	// Line 822, Address: 0x22948c, Func Offset: 0xc
	// Line 830, Address: 0x229498, Func Offset: 0x18
	// Line 833, Address: 0x2294c8, Func Offset: 0x48
	// Line 836, Address: 0x2294cc, Func Offset: 0x4c
	// Line 831, Address: 0x2294d0, Func Offset: 0x50
	// Line 836, Address: 0x2294e8, Func Offset: 0x68
	// Line 839, Address: 0x22950c, Func Offset: 0x8c
	// Line 844, Address: 0x229514, Func Offset: 0x94
	// Line 847, Address: 0x22951c, Func Offset: 0x9c
	// Line 849, Address: 0x22952c, Func Offset: 0xac
	// Line 850, Address: 0x229534, Func Offset: 0xb4
	// Line 853, Address: 0x22953c, Func Offset: 0xbc
	// Line 862, Address: 0x229558, Func Offset: 0xd8
	// Line 865, Address: 0x229560, Func Offset: 0xe0
	// Line 867, Address: 0x229570, Func Offset: 0xf0
	// Line 868, Address: 0x229574, Func Offset: 0xf4
	// Line 867, Address: 0x229578, Func Offset: 0xf8
	// Line 869, Address: 0x229584, Func Offset: 0x104
	// Line 868, Address: 0x22958c, Func Offset: 0x10c
	// Line 867, Address: 0x229590, Func Offset: 0x110
	// Line 869, Address: 0x22959c, Func Offset: 0x11c
	// Line 870, Address: 0x2295c8, Func Offset: 0x148
	// Line 872, Address: 0x2295d0, Func Offset: 0x150
	// Line 887, Address: 0x2295d8, Func Offset: 0x158
	// Line 889, Address: 0x2295e0, Func Offset: 0x160
	// Line 891, Address: 0x2295ec, Func Offset: 0x16c
	// Line 892, Address: 0x2295f0, Func Offset: 0x170
	// Line 891, Address: 0x2295f4, Func Offset: 0x174
	// Line 893, Address: 0x229600, Func Offset: 0x180
	// Line 892, Address: 0x229608, Func Offset: 0x188
	// Line 891, Address: 0x22960c, Func Offset: 0x18c
	// Line 893, Address: 0x229618, Func Offset: 0x198
	// Line 894, Address: 0x229644, Func Offset: 0x1c4
	// Line 896, Address: 0x22964c, Func Offset: 0x1cc
	// Line 961, Address: 0x229654, Func Offset: 0x1d4
	// Line 820, Address: 0x22965c, Func Offset: 0x1dc
	// Line 823, Address: 0x229664, Func Offset: 0x1e4
	// Line 848, Address: 0x229674, Func Offset: 0x1f4
	// Line 961, Address: 0x22967c, Func Offset: 0x1fc
	// Line 865, Address: 0x229680, Func Offset: 0x200
	// Line 961, Address: 0x229684, Func Offset: 0x204
	// Line 876, Address: 0x229690, Func Offset: 0x210
	// Line 961, Address: 0x229694, Func Offset: 0x214
	// Line 877, Address: 0x22969c, Func Offset: 0x21c
	// Line 961, Address: 0x2296a4, Func Offset: 0x224
	// Line 880, Address: 0x2296ac, Func Offset: 0x22c
	// Line 961, Address: 0x2296c0, Func Offset: 0x240
	// Line 889, Address: 0x2296c4, Func Offset: 0x244
	// Line 961, Address: 0x2296c8, Func Offset: 0x248
	// Line 900, Address: 0x2296d4, Func Offset: 0x254
	// Line 961, Address: 0x2296d8, Func Offset: 0x258
	// Line 901, Address: 0x2296e4, Func Offset: 0x264
	// Line 904, Address: 0x2296f0, Func Offset: 0x270
	// Line 961, Address: 0x2296f8, Func Offset: 0x278
	// Line 901, Address: 0x2296fc, Func Offset: 0x27c
	// Line 961, Address: 0x229708, Func Offset: 0x288
	// Line 904, Address: 0x229714, Func Offset: 0x294
	// Line 961, Address: 0x22972c, Func Offset: 0x2ac
	// Line 904, Address: 0x229734, Func Offset: 0x2b4
	// Line 961, Address: 0x229748, Func Offset: 0x2c8
	// Line 910, Address: 0x22974c, Func Offset: 0x2cc
	// Line 961, Address: 0x229750, Func Offset: 0x2d0
	// Line 911, Address: 0x229758, Func Offset: 0x2d8
	// Line 961, Address: 0x229760, Func Offset: 0x2e0
	// Line 914, Address: 0x229768, Func Offset: 0x2e8
	// Line 962, Address: 0x229770, Func Offset: 0x2f0
	// Func End, Address: 0x229778, Func Offset: 0x2f8
}

// Process__11zNMEFlingerFf
// Start address: 0x229780
void zNMEFlinger::Process(float32 dt)
{
	xMat4x3 oldMat;
	xEntFrame tmpFrame;
	// Line 766, Address: 0x229780, Func Offset: 0
	// Line 772, Address: 0x2297a8, Func Offset: 0x28
	// Line 766, Address: 0x2297ac, Func Offset: 0x2c
	// Line 772, Address: 0x2297b8, Func Offset: 0x38
	// Line 785, Address: 0x2297c0, Func Offset: 0x40
	// Line 786, Address: 0x2297d0, Func Offset: 0x50
	// Line 788, Address: 0x2297e0, Func Offset: 0x60
	// Line 793, Address: 0x2297fc, Func Offset: 0x7c
	// Line 794, Address: 0x229804, Func Offset: 0x84
	// Line 797, Address: 0x2298a8, Func Offset: 0x128
	// Line 811, Address: 0x2298b4, Func Offset: 0x134
	// Line 791, Address: 0x229940, Func Offset: 0x1c0
	// Line 811, Address: 0x229950, Func Offset: 0x1d0
	// Line 791, Address: 0x229958, Func Offset: 0x1d8
	// Line 811, Address: 0x22995c, Func Offset: 0x1dc
	// Line 791, Address: 0x229964, Func Offset: 0x1e4
	// Line 811, Address: 0x229968, Func Offset: 0x1e8
	// Line 792, Address: 0x22997c, Func Offset: 0x1fc
	// Line 811, Address: 0x229984, Func Offset: 0x204
	// Line 800, Address: 0x2299ac, Func Offset: 0x22c
	// Line 811, Address: 0x2299b0, Func Offset: 0x230
	// Line 806, Address: 0x229a8c, Func Offset: 0x30c
	// Line 811, Address: 0x229a90, Func Offset: 0x310
	// Line 806, Address: 0x229ab0, Func Offset: 0x330
	// Line 811, Address: 0x229ab4, Func Offset: 0x334
	// Line 812, Address: 0x229b48, Func Offset: 0x3c8
	// Func End, Address: 0x229b68, Func Offset: 0x3e8
}

// Reset__11zNMEFlingerFv
// Start address: 0x229b70
void zNMEFlinger::Reset()
{
	xPsyche* psy;
	zNMEGoalAfterlife* goal;
	// Line 731, Address: 0x229b70, Func Offset: 0
	// Line 732, Address: 0x229b80, Func Offset: 0x10
	// Line 739, Address: 0x229e20, Func Offset: 0x2b0
	// Line 742, Address: 0x229e34, Func Offset: 0x2c4
	// Line 752, Address: 0x229e40, Func Offset: 0x2d0
	// Line 756, Address: 0x229e50, Func Offset: 0x2e0
	// Line 757, Address: 0x229e60, Func Offset: 0x2f0
	// Line 760, Address: 0x229e80, Func Offset: 0x310
	// Line 762, Address: 0x229e88, Func Offset: 0x318
	// Line 740, Address: 0x229e90, Func Offset: 0x320
	// Line 762, Address: 0x229e98, Func Offset: 0x328
	// Line 741, Address: 0x229ea0, Func Offset: 0x330
	// Line 745, Address: 0x229ea8, Func Offset: 0x338
	// Line 762, Address: 0x229eac, Func Offset: 0x33c
	// Line 748, Address: 0x229eb4, Func Offset: 0x344
	// Line 747, Address: 0x229eb8, Func Offset: 0x348
	// Line 748, Address: 0x229ebc, Func Offset: 0x34c
	// Line 745, Address: 0x229ec0, Func Offset: 0x350
	// Line 762, Address: 0x229ec4, Func Offset: 0x354
	// Line 749, Address: 0x229ed0, Func Offset: 0x360
	// Line 750, Address: 0x229ed4, Func Offset: 0x364
	// Line 763, Address: 0x229edc, Func Offset: 0x36c
	// Func End, Address: 0x229ef0, Func Offset: 0x380
}

// GoalPick__11zNMEFlingerFP5xGoalRiR11en_trantype
// Start address: 0x229ef0
int32 GoalPick(int32& gid_would)
{
	int32 altered;
	// Line 686, Address: 0x229ef0, Func Offset: 0
	// Line 690, Address: 0x229f28, Func Offset: 0x38
	// Line 692, Address: 0x229f30, Func Offset: 0x40
	// Line 695, Address: 0x229f38, Func Offset: 0x48
	// Line 697, Address: 0x229f40, Func Offset: 0x50
	// Line 700, Address: 0x229f48, Func Offset: 0x58
	// Line 702, Address: 0x229f50, Func Offset: 0x60
	// Line 706, Address: 0x229f58, Func Offset: 0x68
	// Line 708, Address: 0x229f60, Func Offset: 0x70
	// Line 712, Address: 0x229f68, Func Offset: 0x78
	// Line 714, Address: 0x229f70, Func Offset: 0x80
	// Line 718, Address: 0x229f78, Func Offset: 0x88
	// Line 720, Address: 0x229f80, Func Offset: 0x90
	// Line 723, Address: 0x229f88, Func Offset: 0x98
	// Line 728, Address: 0x229f8c, Func Offset: 0x9c
	// Func End, Address: 0x229f94, Func Offset: 0xa4
}

// CreateAnimTable__11zNMEFlingerFP10xAnimTable
// Start address: 0x229fa0
xAnimTable* zNMEFlinger::CreateAnimTable(xAnimTable* table)
{
	// Line 544, Address: 0x229fa0, Func Offset: 0
	// Line 550, Address: 0x229fb0, Func Offset: 0x10
	// Line 558, Address: 0x229fb8, Func Offset: 0x18
	// Line 562, Address: 0x22a000, Func Offset: 0x60
	// Line 567, Address: 0x22a048, Func Offset: 0xa8
	// Line 571, Address: 0x22a090, Func Offset: 0xf0
	// Line 576, Address: 0x22a0d8, Func Offset: 0x138
	// Line 580, Address: 0x22a120, Func Offset: 0x180
	// Line 586, Address: 0x22a168, Func Offset: 0x1c8
	// Line 590, Address: 0x22a1b0, Func Offset: 0x210
	// Line 595, Address: 0x22a1f8, Func Offset: 0x258
	// Line 601, Address: 0x22a240, Func Offset: 0x2a0
	// Line 605, Address: 0x22a288, Func Offset: 0x2e8
	// Line 609, Address: 0x22a2d0, Func Offset: 0x330
	// Line 615, Address: 0x22a318, Func Offset: 0x378
	// Line 619, Address: 0x22a360, Func Offset: 0x3c0
	// Line 625, Address: 0x22a3a8, Func Offset: 0x408
	// Line 631, Address: 0x22a3f0, Func Offset: 0x450
	// Line 635, Address: 0x22a438, Func Offset: 0x498
	// Line 639, Address: 0x22a480, Func Offset: 0x4e0
	// Line 673, Address: 0x22a4c8, Func Offset: 0x528
	// Line 677, Address: 0x22a510, Func Offset: 0x570
	// Line 679, Address: 0x22a558, Func Offset: 0x5b8
	// Line 550, Address: 0x22a560, Func Offset: 0x5c0
	// Line 679, Address: 0x22a564, Func Offset: 0x5c4
	// Line 680, Address: 0x22a574, Func Offset: 0x5d4
	// Func End, Address: 0x22a584, Func Offset: 0x5e4
}

// AnimPick__11zNMEFlingerFi11en_npcgspotP5xGoal
// Start address: 0x22a590
uint32 zNMEFlinger::AnimPick(int32 gid, en_npcgspot gspot)
{
	en_stananim idx;
	// Line 420, Address: 0x22a590, Func Offset: 0
	// Line 424, Address: 0x22a634, Func Offset: 0xa4
	// Line 425, Address: 0x22a638, Func Offset: 0xa8
	// Line 427, Address: 0x22a640, Func Offset: 0xb0
	// Line 429, Address: 0x22a648, Func Offset: 0xb8
	// Line 430, Address: 0x22a654, Func Offset: 0xc4
	// Line 433, Address: 0x22a65c, Func Offset: 0xcc
	// Line 437, Address: 0x22a664, Func Offset: 0xd4
	// Line 442, Address: 0x22a66c, Func Offset: 0xdc
	// Line 444, Address: 0x22a674, Func Offset: 0xe4
	// Line 445, Address: 0x22a688, Func Offset: 0xf8
	// Line 448, Address: 0x22a690, Func Offset: 0x100
	// Line 450, Address: 0x22a698, Func Offset: 0x108
	// Line 451, Address: 0x22a6a4, Func Offset: 0x114
	// Line 457, Address: 0x22a6ac, Func Offset: 0x11c
	// Line 461, Address: 0x22a6b4, Func Offset: 0x124
	// Line 463, Address: 0x22a6bc, Func Offset: 0x12c
	// Line 465, Address: 0x22a6c8, Func Offset: 0x138
	// Line 467, Address: 0x22a6d4, Func Offset: 0x144
	// Line 468, Address: 0x22a6e0, Func Offset: 0x150
	// Line 471, Address: 0x22a6e8, Func Offset: 0x158
	// Line 475, Address: 0x22a6f0, Func Offset: 0x160
	// Line 477, Address: 0x22a6f8, Func Offset: 0x168
	// Line 479, Address: 0x22a704, Func Offset: 0x174
	// Line 481, Address: 0x22a710, Func Offset: 0x180
	// Line 482, Address: 0x22a71c, Func Offset: 0x18c
	// Line 485, Address: 0x22a724, Func Offset: 0x194
	// Line 488, Address: 0x22a72c, Func Offset: 0x19c
	// Line 490, Address: 0x22a734, Func Offset: 0x1a4
	// Line 492, Address: 0x22a740, Func Offset: 0x1b0
	// Line 494, Address: 0x22a74c, Func Offset: 0x1bc
	// Line 495, Address: 0x22a758, Func Offset: 0x1c8
	// Line 498, Address: 0x22a760, Func Offset: 0x1d0
	// Line 502, Address: 0x22a768, Func Offset: 0x1d8
	// Line 506, Address: 0x22a770, Func Offset: 0x1e0
	// Line 509, Address: 0x22a778, Func Offset: 0x1e8
	// Line 511, Address: 0x22a780, Func Offset: 0x1f0
	// Line 513, Address: 0x22a78c, Func Offset: 0x1fc
	// Line 515, Address: 0x22a798, Func Offset: 0x208
	// Line 516, Address: 0x22a7a4, Func Offset: 0x214
	// Line 519, Address: 0x22a7ac, Func Offset: 0x21c
	// Line 522, Address: 0x22a7b4, Func Offset: 0x224
	// Line 524, Address: 0x22a7bc, Func Offset: 0x22c
	// Line 526, Address: 0x22a7c8, Func Offset: 0x238
	// Line 527, Address: 0x22a7d4, Func Offset: 0x244
	// Line 529, Address: 0x22a7dc, Func Offset: 0x24c
	// Line 540, Address: 0x22a7e0, Func Offset: 0x250
	// Line 428, Address: 0x22a7f8, Func Offset: 0x268
	// Line 462, Address: 0x22a800, Func Offset: 0x270
	// Line 464, Address: 0x22a808, Func Offset: 0x278
	// Line 466, Address: 0x22a810, Func Offset: 0x280
	// Line 476, Address: 0x22a818, Func Offset: 0x288
	// Line 478, Address: 0x22a820, Func Offset: 0x290
	// Line 480, Address: 0x22a828, Func Offset: 0x298
	// Line 489, Address: 0x22a830, Func Offset: 0x2a0
	// Line 491, Address: 0x22a838, Func Offset: 0x2a8
	// Line 493, Address: 0x22a840, Func Offset: 0x2b0
	// Line 510, Address: 0x22a848, Func Offset: 0x2b8
	// Line 512, Address: 0x22a850, Func Offset: 0x2c0
	// Line 514, Address: 0x22a858, Func Offset: 0x2c8
	// Line 523, Address: 0x22a860, Func Offset: 0x2d0
	// Line 525, Address: 0x22a868, Func Offset: 0x2d8
	// Line 541, Address: 0x22a870, Func Offset: 0x2e0
	// Func End, Address: 0x22a878, Func Offset: 0x2e8
}

// FlingMainBrain__11zNMEFlingerFv
// Start address: 0x22a880
void zNMEFlinger::FlingMainBrain()
{
	xBehaveMgr* bmgr;
	xPsyche* psy;
	// Line 340, Address: 0x22a880, Func Offset: 0
	// Line 342, Address: 0x22a88c, Func Offset: 0xc
	// Line 343, Address: 0x22a894, Func Offset: 0x14
	// Line 346, Address: 0x22a8a8, Func Offset: 0x28
	// Line 351, Address: 0x22a8ac, Func Offset: 0x2c
	// Line 353, Address: 0x22a8b4, Func Offset: 0x34
	// Line 354, Address: 0x22a8c8, Func Offset: 0x48
	// Line 355, Address: 0x22a8f0, Func Offset: 0x70
	// Line 356, Address: 0x22a918, Func Offset: 0x98
	// Line 359, Address: 0x22a92c, Func Offset: 0xac
	// Line 360, Address: 0x22a940, Func Offset: 0xc0
	// Line 364, Address: 0x22a954, Func Offset: 0xd4
	// Line 366, Address: 0x22a968, Func Offset: 0xe8
	// Line 368, Address: 0x22a97c, Func Offset: 0xfc
	// Line 369, Address: 0x22a990, Func Offset: 0x110
	// Line 370, Address: 0x22a9a4, Func Offset: 0x124
	// Line 371, Address: 0x22a9b8, Func Offset: 0x138
	// Line 372, Address: 0x22a9cc, Func Offset: 0x14c
	// Line 374, Address: 0x22a9e0, Func Offset: 0x160
	// Line 377, Address: 0x22a9e8, Func Offset: 0x168
	// Line 380, Address: 0x22a9f4, Func Offset: 0x174
	// Func End, Address: 0x22aa04, Func Offset: 0x184
}

// SelfDestroy__11zNMEFlingerFv
// Start address: 0x22aa10
void zNMEFlinger::SelfDestroy()
{
	xBehaveMgr* bmgr;
	// Line 331, Address: 0x22aa10, Func Offset: 0
	// Line 332, Address: 0x22aa1c, Func Offset: 0xc
	// Line 333, Address: 0x22aa24, Func Offset: 0x14
	// Line 335, Address: 0x22aa30, Func Offset: 0x20
	// Line 337, Address: 0x22aa50, Func Offset: 0x40
	// Func End, Address: 0x22aa60, Func Offset: 0x50
}

// SelfSetup__11zNMEFlingerFv
// Start address: 0x22aa60
void zNMEFlinger::SelfSetup()
{
	// Line 320, Address: 0x22aa60, Func Offset: 0
	// Line 322, Address: 0x22aa70, Func Offset: 0x10
	// Line 325, Address: 0x22aa78, Func Offset: 0x18
	// Line 328, Address: 0x22aaf0, Func Offset: 0x90
	// Func End, Address: 0x22ab04, Func Offset: 0xa4
}

// Setup__11zNMEFlingerFv
// Start address: 0x22ab10
void zNMEFlinger::Setup()
{
	// Line 311, Address: 0x22ab10, Func Offset: 0
	// Line 312, Address: 0x22ab14, Func Offset: 0x4
	// Line 311, Address: 0x22ab18, Func Offset: 0x8
	// Line 312, Address: 0x22ab1c, Func Offset: 0xc
	// Line 311, Address: 0x22ab20, Func Offset: 0x10
	// Line 312, Address: 0x22ab24, Func Offset: 0x14
	// Line 314, Address: 0x22ab74, Func Offset: 0x64
	// Line 316, Address: 0x22ab84, Func Offset: 0x74
	// Line 315, Address: 0x22ab8c, Func Offset: 0x7c
	// Line 316, Address: 0x22aba0, Func Offset: 0x90
	// Line 317, Address: 0x22abb0, Func Offset: 0xa0
	// Func End, Address: 0x22abbc, Func Offset: 0xac
}

// BUpdate__11zNMEFlingerFP5xVec3
// Start address: 0x22abc0
void zNMEFlinger::BUpdate(xVec3* pos)
{
	// Line 305, Address: 0x22abc0, Func Offset: 0
	// Line 306, Address: 0x22abc4, Func Offset: 0x4
	// Line 305, Address: 0x22abc8, Func Offset: 0x8
	// Line 306, Address: 0x22abd0, Func Offset: 0x10
	// Line 307, Address: 0x22ada8, Func Offset: 0x1e8
	// Line 306, Address: 0x22adb8, Func Offset: 0x1f8
	// Line 307, Address: 0x22adc0, Func Offset: 0x200
	// Line 306, Address: 0x22ae00, Func Offset: 0x240
	// Line 307, Address: 0x22ae04, Func Offset: 0x244
	// Line 306, Address: 0x22ae08, Func Offset: 0x248
	// Line 307, Address: 0x22ae0c, Func Offset: 0x24c
	// Line 306, Address: 0x22ae28, Func Offset: 0x268
	// Line 307, Address: 0x22ae2c, Func Offset: 0x26c
	// Line 306, Address: 0x22ae34, Func Offset: 0x274
	// Line 307, Address: 0x22ae38, Func Offset: 0x278
	// Line 306, Address: 0x22ae64, Func Offset: 0x2a4
	// Line 307, Address: 0x22ae68, Func Offset: 0x2a8
	// Line 306, Address: 0x22ae98, Func Offset: 0x2d8
	// Line 307, Address: 0x22aea0, Func Offset: 0x2e0
	// Line 306, Address: 0x22aecc, Func Offset: 0x30c
	// Line 307, Address: 0x22aed0, Func Offset: 0x310
	// Line 306, Address: 0x22af00, Func Offset: 0x340
	// Line 307, Address: 0x22af08, Func Offset: 0x348
	// Line 306, Address: 0x22af30, Func Offset: 0x370
	// Line 307, Address: 0x22af34, Func Offset: 0x374
	// Line 306, Address: 0x22af38, Func Offset: 0x378
	// Line 307, Address: 0x22af3c, Func Offset: 0x37c
	// Line 306, Address: 0x22af44, Func Offset: 0x384
	// Line 307, Address: 0x22af4c, Func Offset: 0x38c
	// Line 306, Address: 0x22af9c, Func Offset: 0x3dc
	// Line 307, Address: 0x22afa4, Func Offset: 0x3e4
	// Line 306, Address: 0x22afc8, Func Offset: 0x408
	// Line 307, Address: 0x22afcc, Func Offset: 0x40c
	// Line 306, Address: 0x22afd0, Func Offset: 0x410
	// Line 307, Address: 0x22afd4, Func Offset: 0x414
	// Line 306, Address: 0x22aff4, Func Offset: 0x434
	// Line 307, Address: 0x22aff8, Func Offset: 0x438
	// Line 306, Address: 0x22b034, Func Offset: 0x474
	// Line 307, Address: 0x22b038, Func Offset: 0x478
	// Line 306, Address: 0x22b040, Func Offset: 0x480
	// Line 307, Address: 0x22b044, Func Offset: 0x484
	// Line 306, Address: 0x22b07c, Func Offset: 0x4bc
	// Line 307, Address: 0x22b080, Func Offset: 0x4c0
	// Line 306, Address: 0x22b084, Func Offset: 0x4c4
	// Line 307, Address: 0x22b088, Func Offset: 0x4c8
	// Line 306, Address: 0x22b090, Func Offset: 0x4d0
	// Line 307, Address: 0x22b09c, Func Offset: 0x4dc
	// Line 306, Address: 0x22b0b4, Func Offset: 0x4f4
	// Line 307, Address: 0x22b0b8, Func Offset: 0x4f8
	// Line 306, Address: 0x22b0fc, Func Offset: 0x53c
	// Line 307, Address: 0x22b104, Func Offset: 0x544
	// Line 308, Address: 0x22b114, Func Offset: 0x554
	// Func End, Address: 0x22b120, Func Offset: 0x560
}

// Init__11zNMEFlingerFP9xEntAsset
// Start address: 0x22b120
void zNMEFlinger::Init(xEntAsset* asset)
{
	// Line 298, Address: 0x22b120, Func Offset: 0
	// Line 299, Address: 0x22b138, Func Offset: 0x18
	// Line 300, Address: 0x22b1d0, Func Offset: 0xb0
	// Line 299, Address: 0x22b1d8, Func Offset: 0xb8
	// Line 300, Address: 0x22b2f8, Func Offset: 0x1d8
	// Line 301, Address: 0x22b308, Func Offset: 0x1e8
	// Line 299, Address: 0x22b314, Func Offset: 0x1f4
	// Line 301, Address: 0x22b318, Func Offset: 0x1f8
	// Line 299, Address: 0x22b320, Func Offset: 0x200
	// Line 301, Address: 0x22b32c, Func Offset: 0x20c
	// Line 300, Address: 0x22b33c, Func Offset: 0x21c
	// Line 301, Address: 0x22b340, Func Offset: 0x220
	// Line 302, Address: 0x22b350, Func Offset: 0x230
	// Func End, Address: 0x22b364, Func Offset: 0x244
}

// DfltVulnFlags__11zNMEFlingerFv
// Start address: 0x22b370
int32 zNMEFlinger::DfltVulnFlags()
{
	// Line 294, Address: 0x22b370, Func Offset: 0
	// Line 295, Address: 0x22b374, Func Offset: 0x4
	// Func End, Address: 0x22b37c, Func Offset: 0xc
}

// CreateConfig__11zNMEFlingerFPCc
// Start address: 0x22b380
void zNMEFlinger::CreateConfig()
{
	en_nmevar vidx;
	// Line 209, Address: 0x22b380, Func Offset: 0
	// Line 210, Address: 0x22b384, Func Offset: 0x4
	// Line 209, Address: 0x22b388, Func Offset: 0x8
	// Line 210, Address: 0x22b38c, Func Offset: 0xc
	// Line 209, Address: 0x22b390, Func Offset: 0x10
	// Line 210, Address: 0x22b394, Func Offset: 0x14
	// Line 216, Address: 0x22b3b4, Func Offset: 0x34
	// Line 217, Address: 0x22b3bc, Func Offset: 0x3c
	// Line 228, Address: 0x22b3d4, Func Offset: 0x54
	// Func End, Address: 0x22b3e4, Func Offset: 0x64
}

