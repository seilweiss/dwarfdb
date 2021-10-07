



int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
int32 Enter();
int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
int32 Enter();
int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
int32 Enter();
int32 ChkTheSituation(zNMEZapper* npc, int32& nextgoal, en_trantype& trantype);
int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
int32 Enter();
int32 ChkTheSituation(zNMEZapper* npc, int32& nextgoal, en_trantype& trantype);
int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
int32 Exit();
int32 Enter();
en_zapmod SetGunnerState(int32 gid_main);
void Notice(xGoal* goal);
int32 SafeToTaunt();
int32 ZapMailDamage(NMEDamageInfo* dmgmail);
int32 TypeHandleMail(NMEMsg* mail);
void JetEngine(float32 dt);
float32 HealthRatio();
en_vis VisionTarget(xEnt* ent);
void RenderExtra();
void NewTime(float32 dt);
void Process(float32 dt);
void BUpdate();
void Reset();
int32 GoalPick(int32& gid_would);
xAnimTable* CreateAnimTable(xAnimTable* table);
uint32 AnimPick(int32 gid, en_npcgspot gspot);
void ZapMainBrain();
void SelfDestroy();
void SelfSetup();
void Setup();
void Init(xEntAsset* asset);
int32 DfltVulnFlags();
void CreateConfig();

// Process__15zNMEGoalZapMoveFP11en_trantypefPv
// Start address: 0x2063c0
int32 zNMEGoalZapMove::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	zNMEZapper* npc;
	// Line 1739, Address: 0x2063c0, Func Offset: 0
	// Line 1740, Address: 0x2063f0, Func Offset: 0x30
	// Line 1743, Address: 0x2063f4, Func Offset: 0x34
	// Line 1740, Address: 0x2063f8, Func Offset: 0x38
	// Line 1743, Address: 0x2063fc, Func Offset: 0x3c
	// Line 1744, Address: 0x206408, Func Offset: 0x48
	// Line 1748, Address: 0x20640c, Func Offset: 0x4c
	// Line 1750, Address: 0x20641c, Func Offset: 0x5c
	// Line 1746, Address: 0x20648c, Func Offset: 0xcc
	// Line 1750, Address: 0x206494, Func Offset: 0xd4
	// Line 1746, Address: 0x2064a4, Func Offset: 0xe4
	// Line 1750, Address: 0x2064a8, Func Offset: 0xe8
	// Line 1746, Address: 0x2064b8, Func Offset: 0xf8
	// Line 1750, Address: 0x2064c0, Func Offset: 0x100
	// Line 1746, Address: 0x2064c4, Func Offset: 0x104
	// Line 1750, Address: 0x2064cc, Func Offset: 0x10c
	// Line 1746, Address: 0x2064d0, Func Offset: 0x110
	// Line 1750, Address: 0x2064d8, Func Offset: 0x118
	// Line 1746, Address: 0x2064dc, Func Offset: 0x11c
	// Line 1750, Address: 0x2064e0, Func Offset: 0x120
	// Line 1751, Address: 0x2064f0, Func Offset: 0x130
	// Func End, Address: 0x206518, Func Offset: 0x158
}

// Enter__15zNMEGoalZapMoveFfPv
// Start address: 0x206520
int32 zNMEGoalZapMove::Enter()
{
	zNMEZapper* npc;
	// Line 1731, Address: 0x206520, Func Offset: 0
	// Line 1733, Address: 0x206524, Func Offset: 0x4
	// Line 1731, Address: 0x206528, Func Offset: 0x8
	// Line 1733, Address: 0x20652c, Func Offset: 0xc
	// Line 1731, Address: 0x206530, Func Offset: 0x10
	// Line 1733, Address: 0x206534, Func Offset: 0x14
	// Line 1731, Address: 0x206538, Func Offset: 0x18
	// Line 1732, Address: 0x206540, Func Offset: 0x20
	// Line 1733, Address: 0x206548, Func Offset: 0x28
	// Line 1735, Address: 0x2065a4, Func Offset: 0x84
	// Line 1733, Address: 0x2065b0, Func Offset: 0x90
	// Line 1734, Address: 0x2065cc, Func Offset: 0xac
	// Line 1735, Address: 0x2065d0, Func Offset: 0xb0
	// Line 1736, Address: 0x206668, Func Offset: 0x148
	// Func End, Address: 0x206680, Func Offset: 0x160
}

// Process__16zNMEGoalZapWoundFP11en_trantypefPv
// Start address: 0x206680
int32 zNMEGoalZapWound::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	zNMEZapper* npc;
	// Line 1676, Address: 0x206680, Func Offset: 0
	// Line 1680, Address: 0x206684, Func Offset: 0x4
	// Line 1676, Address: 0x206688, Func Offset: 0x8
	// Line 1680, Address: 0x20668c, Func Offset: 0xc
	// Line 1676, Address: 0x206690, Func Offset: 0x10
	// Line 1677, Address: 0x2066b4, Func Offset: 0x34
	// Line 1680, Address: 0x2066c0, Func Offset: 0x40
	// Line 1682, Address: 0x2066e8, Func Offset: 0x68
	// Line 1684, Address: 0x2066f4, Func Offset: 0x74
	// Line 1685, Address: 0x20671c, Func Offset: 0x9c
	// Line 1686, Address: 0x206728, Func Offset: 0xa8
	// Line 1687, Address: 0x20672c, Func Offset: 0xac
	// Line 1686, Address: 0x206730, Func Offset: 0xb0
	// Line 1687, Address: 0x206734, Func Offset: 0xb4
	// Line 1692, Address: 0x20673c, Func Offset: 0xbc
	// Line 1691, Address: 0x206740, Func Offset: 0xc0
	// Line 1692, Address: 0x206744, Func Offset: 0xc4
	// Line 1698, Address: 0x206750, Func Offset: 0xd0
	// Line 1701, Address: 0x206778, Func Offset: 0xf8
	// Line 1703, Address: 0x20678c, Func Offset: 0x10c
	// Line 1704, Address: 0x2067a0, Func Offset: 0x120
	// Line 1706, Address: 0x2067f0, Func Offset: 0x170
	// Line 1682, Address: 0x206868, Func Offset: 0x1e8
	// Line 1706, Address: 0x206870, Func Offset: 0x1f0
	// Line 1702, Address: 0x206874, Func Offset: 0x1f4
	// Line 1706, Address: 0x206878, Func Offset: 0x1f8
	// Line 1702, Address: 0x20687c, Func Offset: 0x1fc
	// Line 1706, Address: 0x206880, Func Offset: 0x200
	// Line 1702, Address: 0x206894, Func Offset: 0x214
	// Line 1706, Address: 0x206898, Func Offset: 0x218
	// Line 1702, Address: 0x2068a0, Func Offset: 0x220
	// Line 1706, Address: 0x2068a4, Func Offset: 0x224
	// Line 1702, Address: 0x2068b4, Func Offset: 0x234
	// Line 1707, Address: 0x2068c4, Func Offset: 0x244
	// Func End, Address: 0x2068e8, Func Offset: 0x268
}

// Enter__16zNMEGoalZapWoundFfPv
// Start address: 0x2068f0
int32 zNMEGoalZapWound::Enter()
{
	// Line 1669, Address: 0x2068f0, Func Offset: 0
	// Line 1671, Address: 0x2068f4, Func Offset: 0x4
	// Line 1669, Address: 0x2068f8, Func Offset: 0x8
	// Line 1672, Address: 0x2068fc, Func Offset: 0xc
	// Line 1669, Address: 0x206900, Func Offset: 0x10
	// Line 1671, Address: 0x20690c, Func Offset: 0x1c
	// Line 1672, Address: 0x206910, Func Offset: 0x20
	// Line 1673, Address: 0x206994, Func Offset: 0xa4
	// Func End, Address: 0x2069ac, Func Offset: 0xbc
}

// Process__14zNMEGoalZapZapFP11en_trantypefPv
// Start address: 0x2069b0
int32 zNMEGoalZapZap::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	int32 nextgoal;
	zNMEZapper* npc;
	float32 tym_inGoal;
	en_vis vis;
	float32 spd_turn;
	// Line 1611, Address: 0x2069b0, Func Offset: 0
	// Line 1616, Address: 0x2069d8, Func Offset: 0x28
	// Line 1612, Address: 0x2069dc, Func Offset: 0x2c
	// Line 1613, Address: 0x2069e4, Func Offset: 0x34
	// Line 1616, Address: 0x2069e8, Func Offset: 0x38
	// Line 1617, Address: 0x2069f0, Func Offset: 0x40
	// Line 1618, Address: 0x206a08, Func Offset: 0x58
	// Line 1627, Address: 0x206a18, Func Offset: 0x68
	// Line 1630, Address: 0x206a24, Func Offset: 0x74
	// Line 1628, Address: 0x206a28, Func Offset: 0x78
	// Line 1630, Address: 0x206a2c, Func Offset: 0x7c
	// Line 1629, Address: 0x206a30, Func Offset: 0x80
	// Line 1630, Address: 0x206a34, Func Offset: 0x84
	// Line 1629, Address: 0x206a38, Func Offset: 0x88
	// Line 1630, Address: 0x206a40, Func Offset: 0x90
	// Line 1631, Address: 0x206a50, Func Offset: 0xa0
	// Line 1635, Address: 0x206a58, Func Offset: 0xa8
	// Line 1636, Address: 0x206a78, Func Offset: 0xc8
	// Line 1637, Address: 0x206a84, Func Offset: 0xd4
	// Line 1658, Address: 0x206a90, Func Offset: 0xe0
	// Line 1637, Address: 0x206a94, Func Offset: 0xe4
	// Line 1658, Address: 0x206a98, Func Offset: 0xe8
	// Line 1637, Address: 0x206ab8, Func Offset: 0x108
	// Line 1658, Address: 0x206ad4, Func Offset: 0x124
	// Line 1652, Address: 0x206adc, Func Offset: 0x12c
	// Line 1658, Address: 0x206ae0, Func Offset: 0x130
	// Line 1652, Address: 0x206ae8, Func Offset: 0x138
	// Line 1658, Address: 0x206aec, Func Offset: 0x13c
	// Line 1660, Address: 0x206b8c, Func Offset: 0x1dc
	// Line 1619, Address: 0x206bc0, Func Offset: 0x210
	// Line 1660, Address: 0x206bc4, Func Offset: 0x214
	// Line 1619, Address: 0x206bc8, Func Offset: 0x218
	// Line 1660, Address: 0x206bcc, Func Offset: 0x21c
	// Line 1621, Address: 0x206bdc, Func Offset: 0x22c
	// Line 1660, Address: 0x206be8, Func Offset: 0x238
	// Line 1624, Address: 0x206bf0, Func Offset: 0x240
	// Line 1660, Address: 0x206bfc, Func Offset: 0x24c
	// Line 1625, Address: 0x206c08, Func Offset: 0x258
	// Line 1646, Address: 0x206c10, Func Offset: 0x260
	// Line 1648, Address: 0x206c14, Func Offset: 0x264
	// Line 1660, Address: 0x206c18, Func Offset: 0x268
	// Line 1648, Address: 0x206c1c, Func Offset: 0x26c
	// Line 1647, Address: 0x206c20, Func Offset: 0x270
	// Line 1648, Address: 0x206c24, Func Offset: 0x274
	// Line 1647, Address: 0x206c28, Func Offset: 0x278
	// Line 1660, Address: 0x206c2c, Func Offset: 0x27c
	// Line 1649, Address: 0x206c40, Func Offset: 0x290
	// Line 1658, Address: 0x206c48, Func Offset: 0x298
	// Line 1660, Address: 0x206c50, Func Offset: 0x2a0
	// Line 1658, Address: 0x206c54, Func Offset: 0x2a4
	// Line 1660, Address: 0x206c5c, Func Offset: 0x2ac
	// Line 1658, Address: 0x206c60, Func Offset: 0x2b0
	// Line 1660, Address: 0x206c6c, Func Offset: 0x2bc
	// Line 1661, Address: 0x206ce0, Func Offset: 0x330
	// Func End, Address: 0x206d00, Func Offset: 0x350
}

// Enter__14zNMEGoalZapZapFfPv
// Start address: 0x206d00
int32 zNMEGoalZapZap::Enter()
{
	// Line 1603, Address: 0x206d00, Func Offset: 0
	// Line 1605, Address: 0x206d04, Func Offset: 0x4
	// Line 1603, Address: 0x206d08, Func Offset: 0x8
	// Line 1605, Address: 0x206d0c, Func Offset: 0xc
	// Line 1603, Address: 0x206d10, Func Offset: 0x10
	// Line 1605, Address: 0x206d1c, Func Offset: 0x1c
	// Line 1606, Address: 0x206d24, Func Offset: 0x24
	// Line 1605, Address: 0x206d28, Func Offset: 0x28
	// Line 1606, Address: 0x206d44, Func Offset: 0x44
	// Line 1607, Address: 0x206de8, Func Offset: 0xe8
	// Line 1608, Address: 0x206fb8, Func Offset: 0x2b8
	// Func End, Address: 0x206fd0, Func Offset: 0x2d0
}

// ChkTheSituation__17zNMEGoalZapBattleFP10zNMEZapperRiR11en_trantype
// Start address: 0x206fd0
int32 zNMEGoalZapBattle::ChkTheSituation(zNMEZapper* npc, int32& nextgoal, en_trantype& trantype)
{
	en_vis vis;
	// Line 1561, Address: 0x206fd0, Func Offset: 0
	// Line 1562, Address: 0x206ff4, Func Offset: 0x24
	// Line 1565, Address: 0x207018, Func Offset: 0x48
	// Line 1575, Address: 0x207024, Func Offset: 0x54
	// Line 1584, Address: 0x20702c, Func Offset: 0x5c
	// Line 1594, Address: 0x207040, Func Offset: 0x70
	// Line 1567, Address: 0x207048, Func Offset: 0x78
	// Line 1569, Address: 0x20704c, Func Offset: 0x7c
	// Line 1594, Address: 0x207050, Func Offset: 0x80
	// Line 1569, Address: 0x207054, Func Offset: 0x84
	// Line 1568, Address: 0x207058, Func Offset: 0x88
	// Line 1569, Address: 0x20705c, Func Offset: 0x8c
	// Line 1568, Address: 0x207060, Func Offset: 0x90
	// Line 1594, Address: 0x207064, Func Offset: 0x94
	// Line 1570, Address: 0x207078, Func Offset: 0xa8
	// Line 1576, Address: 0x207080, Func Offset: 0xb0
	// Line 1587, Address: 0x207088, Func Offset: 0xb8
	// Line 1588, Address: 0x20708c, Func Offset: 0xbc
	// Line 1594, Address: 0x207090, Func Offset: 0xc0
	// Line 1588, Address: 0x207094, Func Offset: 0xc4
	// Line 1594, Address: 0x207098, Func Offset: 0xc8
	// Line 1590, Address: 0x20709c, Func Offset: 0xcc
	// Line 1595, Address: 0x2070a0, Func Offset: 0xd0
	// Func End, Address: 0x2070bc, Func Offset: 0xec
}

// Process__17zNMEGoalZapBattleFP11en_trantypefPv
// Start address: 0x2070c0
int32 zNMEGoalZapBattle::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	int32 nextgoal;
	zNMEZapper* npc;
	int32 doTran;
	// Line 1528, Address: 0x2070c0, Func Offset: 0
	// Line 1529, Address: 0x2070f0, Func Offset: 0x30
	// Line 1530, Address: 0x2070f8, Func Offset: 0x38
	// Line 1532, Address: 0x207100, Func Offset: 0x40
	// Line 1534, Address: 0x207110, Func Offset: 0x50
	// Line 1533, Address: 0x207114, Func Offset: 0x54
	// Line 1534, Address: 0x207118, Func Offset: 0x58
	// Line 1533, Address: 0x20711c, Func Offset: 0x5c
	// Line 1534, Address: 0x207124, Func Offset: 0x64
	// Line 1535, Address: 0x207130, Func Offset: 0x70
	// Line 1537, Address: 0x20713c, Func Offset: 0x7c
	// Line 1538, Address: 0x207140, Func Offset: 0x80
	// Line 1539, Address: 0x20715c, Func Offset: 0x9c
	// Line 1542, Address: 0x207164, Func Offset: 0xa4
	// Line 1543, Address: 0x207174, Func Offset: 0xb4
	// Line 1547, Address: 0x20717c, Func Offset: 0xbc
	// Line 1549, Address: 0x207190, Func Offset: 0xd0
	// Line 1550, Address: 0x2071a4, Func Offset: 0xe4
	// Line 1554, Address: 0x2071f4, Func Offset: 0x134
	// Line 1556, Address: 0x2072d0, Func Offset: 0x210
	// Line 1544, Address: 0x207330, Func Offset: 0x270
	// Line 1556, Address: 0x207338, Func Offset: 0x278
	// Line 1548, Address: 0x20733c, Func Offset: 0x27c
	// Line 1556, Address: 0x207340, Func Offset: 0x280
	// Line 1548, Address: 0x207344, Func Offset: 0x284
	// Line 1556, Address: 0x207348, Func Offset: 0x288
	// Line 1548, Address: 0x20735c, Func Offset: 0x29c
	// Line 1556, Address: 0x207360, Func Offset: 0x2a0
	// Line 1548, Address: 0x207368, Func Offset: 0x2a8
	// Line 1556, Address: 0x20736c, Func Offset: 0x2ac
	// Line 1548, Address: 0x20737c, Func Offset: 0x2bc
	// Line 1554, Address: 0x20738c, Func Offset: 0x2cc
	// Line 1556, Address: 0x207394, Func Offset: 0x2d4
	// Line 1554, Address: 0x207398, Func Offset: 0x2d8
	// Line 1556, Address: 0x2073a0, Func Offset: 0x2e0
	// Line 1554, Address: 0x2073a4, Func Offset: 0x2e4
	// Line 1556, Address: 0x2073b0, Func Offset: 0x2f0
	// Line 1557, Address: 0x2073c4, Func Offset: 0x304
	// Func End, Address: 0x2073ec, Func Offset: 0x32c
}

// Enter__17zNMEGoalZapBattleFfPv
// Start address: 0x2073f0
int32 zNMEGoalZapBattle::Enter()
{
	zNMEZapper* npc;
	// Line 1520, Address: 0x2073f0, Func Offset: 0
	// Line 1522, Address: 0x2073f4, Func Offset: 0x4
	// Line 1520, Address: 0x2073f8, Func Offset: 0x8
	// Line 1523, Address: 0x2073fc, Func Offset: 0xc
	// Line 1520, Address: 0x207400, Func Offset: 0x10
	// Line 1521, Address: 0x20740c, Func Offset: 0x1c
	// Line 1522, Address: 0x207414, Func Offset: 0x24
	// Line 1523, Address: 0x207418, Func Offset: 0x28
	// Line 1524, Address: 0x2074b0, Func Offset: 0xc0
	// Line 1525, Address: 0x207538, Func Offset: 0x148
	// Func End, Address: 0x207550, Func Offset: 0x160
}

// ChkTheSituation__16zNMEGoalZapAwareFP10zNMEZapperRiR11en_trantype
// Start address: 0x207550
int32 zNMEGoalZapAware::ChkTheSituation(zNMEZapper* npc, int32& nextgoal, en_trantype& trantype)
{
	en_vis vis;
	// Line 1480, Address: 0x207550, Func Offset: 0
	// Line 1486, Address: 0x207578, Func Offset: 0x28
	// Line 1488, Address: 0x207588, Func Offset: 0x38
	// Line 1487, Address: 0x20758c, Func Offset: 0x3c
	// Line 1488, Address: 0x207594, Func Offset: 0x44
	// Line 1489, Address: 0x2075a4, Func Offset: 0x54
	// Line 1491, Address: 0x2075b0, Func Offset: 0x60
	// Line 1492, Address: 0x2075b4, Func Offset: 0x64
	// Line 1493, Address: 0x2075d0, Func Offset: 0x80
	// Line 1496, Address: 0x2075d8, Func Offset: 0x88
	// Line 1497, Address: 0x2075f8, Func Offset: 0xa8
	// Line 1504, Address: 0x207604, Func Offset: 0xb4
	// Line 1511, Address: 0x207610, Func Offset: 0xc0
	// Line 1498, Address: 0x207618, Func Offset: 0xc8
	// Line 1500, Address: 0x20761c, Func Offset: 0xcc
	// Line 1498, Address: 0x207620, Func Offset: 0xd0
	// Line 1500, Address: 0x207624, Func Offset: 0xd4
	// Line 1499, Address: 0x207628, Func Offset: 0xd8
	// Line 1511, Address: 0x20762c, Func Offset: 0xdc
	// Line 1500, Address: 0x207634, Func Offset: 0xe4
	// Line 1511, Address: 0x207638, Func Offset: 0xe8
	// Line 1501, Address: 0x207648, Func Offset: 0xf8
	// Line 1505, Address: 0x207650, Func Offset: 0x100
	// Line 1507, Address: 0x207654, Func Offset: 0x104
	// Line 1511, Address: 0x207658, Func Offset: 0x108
	// Line 1507, Address: 0x20765c, Func Offset: 0x10c
	// Line 1506, Address: 0x207660, Func Offset: 0x110
	// Line 1507, Address: 0x207664, Func Offset: 0x114
	// Line 1506, Address: 0x207668, Func Offset: 0x118
	// Line 1511, Address: 0x20766c, Func Offset: 0x11c
	// Line 1508, Address: 0x207680, Func Offset: 0x130
	// Line 1512, Address: 0x207684, Func Offset: 0x134
	// Func End, Address: 0x2076a0, Func Offset: 0x150
}

// Process__16zNMEGoalZapAwareFP11en_trantypefPv
// Start address: 0x2076a0
int32 zNMEGoalZapAware::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	int32 nextgoal;
	zNMEZapper* npc;
	int32 doTran;
	// Line 1458, Address: 0x2076a0, Func Offset: 0
	// Line 1462, Address: 0x2076b8, Func Offset: 0x18
	// Line 1458, Address: 0x2076bc, Func Offset: 0x1c
	// Line 1462, Address: 0x2076d4, Func Offset: 0x34
	// Line 1459, Address: 0x2076d8, Func Offset: 0x38
	// Line 1460, Address: 0x2076e0, Func Offset: 0x40
	// Line 1462, Address: 0x2076e8, Func Offset: 0x48
	// Line 1463, Address: 0x2076f0, Func Offset: 0x50
	// Line 1467, Address: 0x2076f8, Func Offset: 0x58
	// Line 1469, Address: 0x20770c, Func Offset: 0x6c
	// Line 1470, Address: 0x207720, Func Offset: 0x80
	// Line 1473, Address: 0x207770, Func Offset: 0xd0
	// Line 1475, Address: 0x20784c, Func Offset: 0x1ac
	// Line 1464, Address: 0x2078ac, Func Offset: 0x20c
	// Line 1475, Address: 0x2078b4, Func Offset: 0x214
	// Line 1468, Address: 0x2078b8, Func Offset: 0x218
	// Line 1475, Address: 0x2078bc, Func Offset: 0x21c
	// Line 1468, Address: 0x2078c0, Func Offset: 0x220
	// Line 1475, Address: 0x2078c4, Func Offset: 0x224
	// Line 1468, Address: 0x2078d8, Func Offset: 0x238
	// Line 1475, Address: 0x2078dc, Func Offset: 0x23c
	// Line 1468, Address: 0x2078e4, Func Offset: 0x244
	// Line 1475, Address: 0x2078e8, Func Offset: 0x248
	// Line 1468, Address: 0x2078f8, Func Offset: 0x258
	// Line 1473, Address: 0x207908, Func Offset: 0x268
	// Line 1475, Address: 0x207910, Func Offset: 0x270
	// Line 1473, Address: 0x207914, Func Offset: 0x274
	// Line 1475, Address: 0x20791c, Func Offset: 0x27c
	// Line 1473, Address: 0x207920, Func Offset: 0x280
	// Line 1475, Address: 0x20792c, Func Offset: 0x28c
	// Line 1476, Address: 0x207940, Func Offset: 0x2a0
	// Func End, Address: 0x207968, Func Offset: 0x2c8
}

// Process__17zNMEGoalZapNormalFP11en_trantypefPv
// Start address: 0x207970
int32 zNMEGoalZapNormal::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	zNMEZapper* npc;
	int32 nextgoal;
	en_vis vis;
	// Line 1423, Address: 0x207970, Func Offset: 0
	// Line 1432, Address: 0x207974, Func Offset: 0x4
	// Line 1423, Address: 0x207978, Func Offset: 0x8
	// Line 1424, Address: 0x2079a0, Func Offset: 0x30
	// Line 1432, Address: 0x2079a4, Func Offset: 0x34
	// Line 1424, Address: 0x2079a8, Func Offset: 0x38
	// Line 1425, Address: 0x2079ac, Func Offset: 0x3c
	// Line 1432, Address: 0x2079b0, Func Offset: 0x40
	// Line 1444, Address: 0x2079bc, Func Offset: 0x4c
	// Line 1446, Address: 0x2079d0, Func Offset: 0x60
	// Line 1447, Address: 0x2079e4, Func Offset: 0x74
	// Line 1449, Address: 0x207a34, Func Offset: 0xc4
	// Line 1434, Address: 0x207a98, Func Offset: 0x128
	// Line 1449, Address: 0x207a9c, Func Offset: 0x12c
	// Line 1434, Address: 0x207aa0, Func Offset: 0x130
	// Line 1449, Address: 0x207aa4, Func Offset: 0x134
	// Line 1436, Address: 0x207ac0, Func Offset: 0x150
	// Line 1438, Address: 0x207ac4, Func Offset: 0x154
	// Line 1449, Address: 0x207ac8, Func Offset: 0x158
	// Line 1438, Address: 0x207acc, Func Offset: 0x15c
	// Line 1437, Address: 0x207ad0, Func Offset: 0x160
	// Line 1438, Address: 0x207ad4, Func Offset: 0x164
	// Line 1437, Address: 0x207ad8, Func Offset: 0x168
	// Line 1449, Address: 0x207adc, Func Offset: 0x16c
	// Line 1439, Address: 0x207af0, Func Offset: 0x180
	// Line 1449, Address: 0x207af8, Func Offset: 0x188
	// Line 1445, Address: 0x207afc, Func Offset: 0x18c
	// Line 1449, Address: 0x207b00, Func Offset: 0x190
	// Line 1445, Address: 0x207b04, Func Offset: 0x194
	// Line 1449, Address: 0x207b08, Func Offset: 0x198
	// Line 1445, Address: 0x207b1c, Func Offset: 0x1ac
	// Line 1449, Address: 0x207b20, Func Offset: 0x1b0
	// Line 1445, Address: 0x207b28, Func Offset: 0x1b8
	// Line 1449, Address: 0x207b2c, Func Offset: 0x1bc
	// Line 1445, Address: 0x207b3c, Func Offset: 0x1cc
	// Line 1450, Address: 0x207b4c, Func Offset: 0x1dc
	// Func End, Address: 0x207b70, Func Offset: 0x200
}

// Exit__17zNMEGoalZapNormalFfPv
// Start address: 0x207b70
int32 zNMEGoalZapNormal::Exit()
{
	// Line 1415, Address: 0x207b70, Func Offset: 0
	// Line 1417, Address: 0x207b74, Func Offset: 0x4
	// Line 1415, Address: 0x207b78, Func Offset: 0x8
	// Line 1417, Address: 0x207b7c, Func Offset: 0xc
	// Line 1418, Address: 0x207b90, Func Offset: 0x20
	// Line 1420, Address: 0x207bb0, Func Offset: 0x40
	// Line 1419, Address: 0x207bb4, Func Offset: 0x44
	// Line 1420, Address: 0x207bb8, Func Offset: 0x48
	// Func End, Address: 0x207bc0, Func Offset: 0x50
}

// Enter__17zNMEGoalZapNormalFfPv
// Start address: 0x207bc0
int32 zNMEGoalZapNormal::Enter()
{
	zNMEZapper* npc;
	// Line 1406, Address: 0x207bc0, Func Offset: 0
	// Line 1408, Address: 0x207bc4, Func Offset: 0x4
	// Line 1406, Address: 0x207bc8, Func Offset: 0x8
	// Line 1407, Address: 0x207bdc, Func Offset: 0x1c
	// Line 1408, Address: 0x207be4, Func Offset: 0x24
	// Line 1409, Address: 0x207bf0, Func Offset: 0x30
	// Line 1410, Address: 0x207c10, Func Offset: 0x50
	// Line 1411, Address: 0x207ca8, Func Offset: 0xe8
	// Line 1412, Address: 0x207d30, Func Offset: 0x170
	// Func End, Address: 0x207d48, Func Offset: 0x188
}

// SetGunnerState__12ZapLetMeKnowCFi
// Start address: 0x207d50
en_zapmod SetGunnerState(int32 gid_main)
{
	en_zapmod gun_state;
	// Line 1333, Address: 0x207d50, Func Offset: 0
	// Line 1336, Address: 0x207df4, Func Offset: 0xa4
	// Line 1338, Address: 0x207dfc, Func Offset: 0xac
	// Line 1339, Address: 0x207e0c, Func Offset: 0xbc
	// Line 1342, Address: 0x207e14, Func Offset: 0xc4
	// Line 1346, Address: 0x207e1c, Func Offset: 0xcc
	// Line 1347, Address: 0x207e20, Func Offset: 0xd0
	// Line 1353, Address: 0x207e28, Func Offset: 0xd8
	// Line 1354, Address: 0x207e2c, Func Offset: 0xdc
	// Line 1358, Address: 0x207e34, Func Offset: 0xe4
	// Line 1365, Address: 0x207e3c, Func Offset: 0xec
	// Line 1375, Address: 0x207e40, Func Offset: 0xf0
	// Func End, Address: 0x207e48, Func Offset: 0xf8
}

// Notice__12ZapLetMeKnowF10en_psynoteP5xGoalPv
// Start address: 0x207e50
void ZapLetMeKnow::Notice(xGoal* goal)
{
	zNMEZapper* zapper;
	xPsyche* psy_move;
	int32 gid_move;
	int32 gid_want;
	en_zapmod zapmode;
	// Line 1262, Address: 0x207e50, Func Offset: 0
	// Line 1264, Address: 0x207e70, Func Offset: 0x20
	// Line 1267, Address: 0x207e74, Func Offset: 0x24
	// Line 1264, Address: 0x207e78, Func Offset: 0x28
	// Line 1265, Address: 0x207e7c, Func Offset: 0x2c
	// Line 1268, Address: 0x207e80, Func Offset: 0x30
	// Line 1274, Address: 0x207e88, Func Offset: 0x38
	// Line 1279, Address: 0x207f58, Func Offset: 0x108
	// Line 1280, Address: 0x207f60, Func Offset: 0x110
	// Line 1283, Address: 0x207f68, Func Offset: 0x118
	// Line 1284, Address: 0x207f70, Func Offset: 0x120
	// Line 1291, Address: 0x207f7c, Func Offset: 0x12c
	// Line 1292, Address: 0x207f90, Func Offset: 0x140
	// Line 1295, Address: 0x2080f0, Func Offset: 0x2a0
	// Line 1292, Address: 0x2080f8, Func Offset: 0x2a8
	// Line 1295, Address: 0x2080fc, Func Offset: 0x2ac
	// Line 1292, Address: 0x20811c, Func Offset: 0x2cc
	// Line 1295, Address: 0x208130, Func Offset: 0x2e0
	// Line 1292, Address: 0x208134, Func Offset: 0x2e4
	// Line 1295, Address: 0x208138, Func Offset: 0x2e8
	// Line 1292, Address: 0x20813c, Func Offset: 0x2ec
	// Line 1296, Address: 0x208148, Func Offset: 0x2f8
	// Func End, Address: 0x208168, Func Offset: 0x318
}

// SafeToTaunt__10zNMEZapperFv
// Start address: 0x208170
int32 zNMEZapper::SafeToTaunt()
{
	// Line 1225, Address: 0x208170, Func Offset: 0
	// Line 1227, Address: 0x2081c0, Func Offset: 0x50
	// Line 1230, Address: 0x2081c8, Func Offset: 0x58
	// Line 1231, Address: 0x2081dc, Func Offset: 0x6c
	// Line 1251, Address: 0x2081e0, Func Offset: 0x70
	// Func End, Address: 0x2081e8, Func Offset: 0x78
}

// ZapMailDamage__10zNMEZapperFP13NMEDamageInfo
// Start address: 0x2081f0
int32 zNMEZapper::ZapMailDamage(NMEDamageInfo* dmgmail)
{
	int32 rc;
	int32 handled;
	xPsyche* psy;
	xGoal* goal;
	// Line 1105, Address: 0x2081f0, Func Offset: 0
	// Line 1106, Address: 0x208208, Func Offset: 0x18
	// Line 1107, Address: 0x208214, Func Offset: 0x24
	// Line 1112, Address: 0x20821c, Func Offset: 0x2c
	// Line 1136, Address: 0x208248, Func Offset: 0x58
	// Line 1141, Address: 0x208264, Func Offset: 0x74
	// Line 1143, Address: 0x208278, Func Offset: 0x88
	// Line 1147, Address: 0x208280, Func Offset: 0x90
	// Line 1149, Address: 0x208284, Func Offset: 0x94
	// Line 1152, Address: 0x208294, Func Offset: 0xa4
	// Line 1153, Address: 0x208298, Func Offset: 0xa8
	// Line 1152, Address: 0x20829c, Func Offset: 0xac
	// Line 1153, Address: 0x2082a0, Func Offset: 0xb0
	// Line 1155, Address: 0x2082b0, Func Offset: 0xc0
	// Line 1158, Address: 0x2082b8, Func Offset: 0xc8
	// Line 1164, Address: 0x2082bc, Func Offset: 0xcc
	// Line 1108, Address: 0x2082c8, Func Offset: 0xd8
	// Line 1165, Address: 0x2082d8, Func Offset: 0xe8
	// Func End, Address: 0x2082f0, Func Offset: 0x100
}

// TypeHandleMail__10zNMEZapperFP6NMEMsg
// Start address: 0x2082f0
int32 zNMEZapper::TypeHandleMail(NMEMsg* mail)
{
	int32 handled;
	// Line 1076, Address: 0x2082f0, Func Offset: 0
	// Line 1079, Address: 0x2082f4, Func Offset: 0x4
	// Line 1076, Address: 0x2082f8, Func Offset: 0x8
	// Line 1077, Address: 0x208304, Func Offset: 0x14
	// Line 1076, Address: 0x208308, Func Offset: 0x18
	// Line 1079, Address: 0x208310, Func Offset: 0x20
	// Line 1084, Address: 0x208334, Func Offset: 0x44
	// Line 1085, Address: 0x20833c, Func Offset: 0x4c
	// Line 1089, Address: 0x208344, Func Offset: 0x54
	// Line 1090, Address: 0x20858c, Func Offset: 0x29c
	// Line 1093, Address: 0x208594, Func Offset: 0x2a4
	// Line 1101, Address: 0x20866c, Func Offset: 0x37c
	// Line 1102, Address: 0x208670, Func Offset: 0x380
	// Func End, Address: 0x208688, Func Offset: 0x398
}

// JetEngine__10zNMEZapperFf
// Start address: 0x208690
void zNMEZapper::JetEngine(float32 dt)
{
	float32 delay;
	float32 ds2_plyr;
	xMat4x3* mat_bone;
	xMat4x3* mat_root;
	xVec3 pos_emit;
	xVec3 dir_emit;
	// Line 1038, Address: 0x208690, Func Offset: 0
	// Line 1040, Address: 0x2086a8, Func Offset: 0x18
	// Line 1041, Address: 0x2086c0, Func Offset: 0x30
	// Line 1043, Address: 0x2086e8, Func Offset: 0x58
	// Line 1047, Address: 0x208714, Func Offset: 0x84
	// Line 1048, Address: 0x208724, Func Offset: 0x94
	// Line 1044, Address: 0x20872c, Func Offset: 0x9c
	// Line 1048, Address: 0x208730, Func Offset: 0xa0
	// Line 1047, Address: 0x208734, Func Offset: 0xa4
	// Line 1044, Address: 0x208738, Func Offset: 0xa8
	// Line 1047, Address: 0x20873c, Func Offset: 0xac
	// Line 1044, Address: 0x208740, Func Offset: 0xb0
	// Line 1047, Address: 0x208744, Func Offset: 0xb4
	// Line 1048, Address: 0x208780, Func Offset: 0xf0
	// Line 1047, Address: 0x208784, Func Offset: 0xf4
	// Line 1048, Address: 0x208788, Func Offset: 0xf8
	// Line 1053, Address: 0x208790, Func Offset: 0x100
	// Line 1055, Address: 0x208794, Func Offset: 0x104
	// Line 1053, Address: 0x208798, Func Offset: 0x108
	// Line 1055, Address: 0x20879c, Func Offset: 0x10c
	// Line 1054, Address: 0x2087a0, Func Offset: 0x110
	// Line 1052, Address: 0x2087a8, Func Offset: 0x118
	// Line 1055, Address: 0x2087ac, Func Offset: 0x11c
	// Line 1054, Address: 0x2087b0, Func Offset: 0x120
	// Line 1055, Address: 0x2087c8, Func Offset: 0x138
	// Line 1054, Address: 0x2087d4, Func Offset: 0x144
	// Line 1055, Address: 0x2087d8, Func Offset: 0x148
	// Line 1056, Address: 0x208824, Func Offset: 0x194
	// Line 1057, Address: 0x208854, Func Offset: 0x1c4
	// Line 1058, Address: 0x20889c, Func Offset: 0x20c
	// Line 1060, Address: 0x2088a8, Func Offset: 0x218
	// Line 1058, Address: 0x2088b4, Func Offset: 0x224
	// Line 1060, Address: 0x2088b8, Func Offset: 0x228
	// Line 1058, Address: 0x2088bc, Func Offset: 0x22c
	// Line 1060, Address: 0x2088c0, Func Offset: 0x230
	// Line 1058, Address: 0x2088c8, Func Offset: 0x238
	// Line 1060, Address: 0x2088e8, Func Offset: 0x258
	// Line 1061, Address: 0x208940, Func Offset: 0x2b0
	// Line 1063, Address: 0x208988, Func Offset: 0x2f8
	// Line 1064, Address: 0x2089b0, Func Offset: 0x320
	// Line 1067, Address: 0x2089e0, Func Offset: 0x350
	// Func End, Address: 0x2089ec, Func Offset: 0x35c
}

// HealthRatio__10zNMEZapperFv
// Start address: 0x2089f0
float32 zNMEZapper::HealthRatio()
{
	float32 rat;
	// Line 1027, Address: 0x2089f0, Func Offset: 0
	// Line 1028, Address: 0x2089f4, Func Offset: 0x4
	// Line 1031, Address: 0x2089fc, Func Offset: 0xc
	// Line 1034, Address: 0x208a00, Func Offset: 0x10
	// Line 1032, Address: 0x208a04, Func Offset: 0x14
	// Line 1034, Address: 0x208a08, Func Offset: 0x18
	// Line 1031, Address: 0x208a0c, Func Offset: 0x1c
	// Line 1032, Address: 0x208a10, Func Offset: 0x20
	// Line 1034, Address: 0x208a20, Func Offset: 0x30
	// Line 1029, Address: 0x208a78, Func Offset: 0x88
	// Line 1035, Address: 0x208a7c, Func Offset: 0x8c
	// Func End, Address: 0x208a84, Func Offset: 0x94
}

// VisionTarget__10zNMEZapperCFP4xEnt9en_defconi
// Start address: 0x208a90
en_vis zNMEZapper::VisionTarget(xEnt* ent)
{
	NMECfgZapper* cfg;
	float32 dy;
	// Line 937, Address: 0x208a90, Func Offset: 0
	// Line 941, Address: 0x208a9c, Func Offset: 0xc
	// Line 949, Address: 0x208aa8, Func Offset: 0x18
	// Line 950, Address: 0x208ab8, Func Offset: 0x28
	// Line 957, Address: 0x208ae8, Func Offset: 0x58
	// Line 960, Address: 0x208af4, Func Offset: 0x64
	// Line 957, Address: 0x208af8, Func Offset: 0x68
	// Line 960, Address: 0x208b08, Func Offset: 0x78
	// Line 963, Address: 0x208b2c, Func Offset: 0x9c
	// Line 971, Address: 0x208b38, Func Offset: 0xa8
	// Line 974, Address: 0x208b40, Func Offset: 0xb0
	// Line 977, Address: 0x208b50, Func Offset: 0xc0
	// Line 987, Address: 0x208b6c, Func Offset: 0xdc
	// Line 989, Address: 0x208b7c, Func Offset: 0xec
	// Line 988, Address: 0x208b80, Func Offset: 0xf0
	// Line 991, Address: 0x208b8c, Func Offset: 0xfc
	// Line 989, Address: 0x208b94, Func Offset: 0x104
	// Line 988, Address: 0x208b98, Func Offset: 0x108
	// Line 991, Address: 0x208ba4, Func Offset: 0x114
	// Line 979, Address: 0x208be8, Func Offset: 0x158
	// Line 981, Address: 0x208bf4, Func Offset: 0x164
	// Line 991, Address: 0x208bfc, Func Offset: 0x16c
	// Line 979, Address: 0x208c00, Func Offset: 0x170
	// Line 991, Address: 0x208c0c, Func Offset: 0x17c
	// Line 981, Address: 0x208c18, Func Offset: 0x188
	// Line 991, Address: 0x208c30, Func Offset: 0x1a0
	// Line 982, Address: 0x208c38, Func Offset: 0x1a8
	// Line 984, Address: 0x208c40, Func Offset: 0x1b0
	// Line 1000, Address: 0x208c48, Func Offset: 0x1b8
	// Line 1003, Address: 0x208c54, Func Offset: 0x1c4
	// Line 1007, Address: 0x208c64, Func Offset: 0x1d4
	// Line 938, Address: 0x208c80, Func Offset: 0x1f0
	// Line 942, Address: 0x208c88, Func Offset: 0x1f8
	// Line 1007, Address: 0x208c98, Func Offset: 0x208
	// Line 952, Address: 0x208cb8, Func Offset: 0x228
	// Line 975, Address: 0x208cd8, Func Offset: 0x248
	// Line 1011, Address: 0x208ce0, Func Offset: 0x250
	// Func End, Address: 0x208ce8, Func Offset: 0x258
}

// RenderExtra__10zNMEZapperFv
// Start address: 0x208cf0
void zNMEZapper::RenderExtra()
{
	// Line 917, Address: 0x208cf0, Func Offset: 0
	// Line 920, Address: 0x208d1c, Func Offset: 0x2c
	// Line 924, Address: 0x208d30, Func Offset: 0x40
	// Line 927, Address: 0x208d40, Func Offset: 0x50
	// Line 933, Address: 0x2090d0, Func Offset: 0x3e0
	// Func End, Address: 0x209100, Func Offset: 0x410
}

// NewTime__10zNMEZapperFf
// Start address: 0x209100
void zNMEZapper::NewTime(float32 dt)
{
	// Line 906, Address: 0x209100, Func Offset: 0
	// Func End, Address: 0x209108, Func Offset: 0x8
}

// Process__10zNMEZapperFf
// Start address: 0x209110
void zNMEZapper::Process(float32 dt)
{
	xMat4x3 oldMat;
	xEntFrame tmpFrame;
	// Line 848, Address: 0x209110, Func Offset: 0
	// Line 854, Address: 0x209138, Func Offset: 0x28
	// Line 848, Address: 0x20913c, Func Offset: 0x2c
	// Line 854, Address: 0x209148, Func Offset: 0x38
	// Line 862, Address: 0x209150, Func Offset: 0x40
	// Line 863, Address: 0x209160, Func Offset: 0x50
	// Line 865, Address: 0x209170, Func Offset: 0x60
	// Line 881, Address: 0x20918c, Func Offset: 0x7c
	// Line 882, Address: 0x209194, Func Offset: 0x84
	// Line 887, Address: 0x209240, Func Offset: 0x130
	// Line 900, Address: 0x20924c, Func Offset: 0x13c
	// Line 901, Address: 0x209258, Func Offset: 0x148
	// Line 867, Address: 0x2092e0, Func Offset: 0x1d0
	// Line 869, Address: 0x2092ec, Func Offset: 0x1dc
	// Line 867, Address: 0x2092f4, Func Offset: 0x1e4
	// Line 901, Address: 0x2092fc, Func Offset: 0x1ec
	// Line 869, Address: 0x209300, Func Offset: 0x1f0
	// Line 901, Address: 0x209308, Func Offset: 0x1f8
	// Line 869, Address: 0x209310, Func Offset: 0x200
	// Line 901, Address: 0x209314, Func Offset: 0x204
	// Line 869, Address: 0x20931c, Func Offset: 0x20c
	// Line 901, Address: 0x209320, Func Offset: 0x210
	// Line 873, Address: 0x20933c, Func Offset: 0x22c
	// Line 901, Address: 0x209340, Func Offset: 0x230
	// Line 878, Address: 0x209348, Func Offset: 0x238
	// Line 901, Address: 0x209350, Func Offset: 0x240
	// Line 890, Address: 0x20937c, Func Offset: 0x26c
	// Line 901, Address: 0x209380, Func Offset: 0x270
	// Line 896, Address: 0x20945c, Func Offset: 0x34c
	// Line 901, Address: 0x209460, Func Offset: 0x350
	// Line 896, Address: 0x209480, Func Offset: 0x370
	// Line 901, Address: 0x209484, Func Offset: 0x374
	// Line 900, Address: 0x209534, Func Offset: 0x424
	// Line 901, Address: 0x209538, Func Offset: 0x428
	// Line 900, Address: 0x20954c, Func Offset: 0x43c
	// Line 901, Address: 0x209550, Func Offset: 0x440
	// Line 900, Address: 0x209558, Func Offset: 0x448
	// Line 901, Address: 0x20955c, Func Offset: 0x44c
	// Line 900, Address: 0x209564, Func Offset: 0x454
	// Line 901, Address: 0x20956c, Func Offset: 0x45c
	// Line 900, Address: 0x209570, Func Offset: 0x460
	// Line 901, Address: 0x209574, Func Offset: 0x464
	// Line 900, Address: 0x20958c, Func Offset: 0x47c
	// Line 901, Address: 0x209598, Func Offset: 0x488
	// Line 900, Address: 0x20959c, Func Offset: 0x48c
	// Line 901, Address: 0x2095a0, Func Offset: 0x490
	// Line 900, Address: 0x2095b8, Func Offset: 0x4a8
	// Line 901, Address: 0x2095bc, Func Offset: 0x4ac
	// Line 900, Address: 0x2095c4, Func Offset: 0x4b4
	// Line 901, Address: 0x2095cc, Func Offset: 0x4bc
	// Line 900, Address: 0x2095d0, Func Offset: 0x4c0
	// Line 901, Address: 0x2095d4, Func Offset: 0x4c4
	// Line 900, Address: 0x2095e0, Func Offset: 0x4d0
	// Line 901, Address: 0x2095e4, Func Offset: 0x4d4
	// Line 900, Address: 0x2095ec, Func Offset: 0x4dc
	// Line 901, Address: 0x2095f0, Func Offset: 0x4e0
	// Line 900, Address: 0x2095f8, Func Offset: 0x4e8
	// Line 901, Address: 0x209600, Func Offset: 0x4f0
	// Line 900, Address: 0x20960c, Func Offset: 0x4fc
	// Line 901, Address: 0x209614, Func Offset: 0x504
	// Line 900, Address: 0x209618, Func Offset: 0x508
	// Line 901, Address: 0x20961c, Func Offset: 0x50c
	// Line 900, Address: 0x209638, Func Offset: 0x528
	// Line 901, Address: 0x209640, Func Offset: 0x530
	// Line 900, Address: 0x209648, Func Offset: 0x538
	// Line 901, Address: 0x20964c, Func Offset: 0x53c
	// Line 900, Address: 0x209654, Func Offset: 0x544
	// Line 901, Address: 0x209658, Func Offset: 0x548
	// Line 900, Address: 0x209660, Func Offset: 0x550
	// Line 901, Address: 0x209664, Func Offset: 0x554
	// Line 900, Address: 0x20966c, Func Offset: 0x55c
	// Line 902, Address: 0x20967c, Func Offset: 0x56c
	// Func End, Address: 0x2096a0, Func Offset: 0x590
}

// BUpdate__10zNMEZapperFP5xVec3
// Start address: 0x2096b0
void zNMEZapper::BUpdate()
{
	xMat4x3* mat_bone;
	xMat4x3* mat_root;
	xVec3 pos_bone;
	// Line 836, Address: 0x2096b0, Func Offset: 0
	// Line 841, Address: 0x2096b8, Func Offset: 0x8
	// Line 836, Address: 0x2096bc, Func Offset: 0xc
	// Line 838, Address: 0x2096cc, Func Offset: 0x1c
	// Line 841, Address: 0x2096d0, Func Offset: 0x20
	// Line 842, Address: 0x20971c, Func Offset: 0x6c
	// Line 843, Address: 0x209720, Func Offset: 0x70
	// Line 842, Address: 0x209724, Func Offset: 0x74
	// Line 843, Address: 0x209728, Func Offset: 0x78
	// Line 842, Address: 0x20972c, Func Offset: 0x7c
	// Line 843, Address: 0x209738, Func Offset: 0x88
	// Line 842, Address: 0x20973c, Func Offset: 0x8c
	// Line 843, Address: 0x209758, Func Offset: 0xa8
	// Line 845, Address: 0x209c88, Func Offset: 0x5d8
	// Func End, Address: 0x209c98, Func Offset: 0x5e8
}

// Reset__10zNMEZapperFv
// Start address: 0x209ca0
void zNMEZapper::Reset()
{
	xPsyche* psy;
	zNMEGoalAfterlife* goal;
	zNMEGoalAfterlife* goal;
	// Line 797, Address: 0x209ca0, Func Offset: 0
	// Line 798, Address: 0x209cb0, Func Offset: 0x10
	// Line 805, Address: 0x209f54, Func Offset: 0x2b4
	// Line 798, Address: 0x209f58, Func Offset: 0x2b8
	// Line 805, Address: 0x209f5c, Func Offset: 0x2bc
	// Line 798, Address: 0x209f60, Func Offset: 0x2c0
	// Line 801, Address: 0x209f64, Func Offset: 0x2c4
	// Line 805, Address: 0x209f68, Func Offset: 0x2c8
	// Line 806, Address: 0x209f70, Func Offset: 0x2d0
	// Line 809, Address: 0x209f78, Func Offset: 0x2d8
	// Line 812, Address: 0x209f8c, Func Offset: 0x2ec
	// Line 822, Address: 0x209f98, Func Offset: 0x2f8
	// Line 826, Address: 0x209fac, Func Offset: 0x30c
	// Line 828, Address: 0x209fbc, Func Offset: 0x31c
	// Line 830, Address: 0x20a030, Func Offset: 0x390
	// Line 832, Address: 0x20a0b4, Func Offset: 0x414
	// Line 810, Address: 0x20a0bc, Func Offset: 0x41c
	// Line 832, Address: 0x20a0c8, Func Offset: 0x428
	// Line 811, Address: 0x20a0d0, Func Offset: 0x430
	// Line 815, Address: 0x20a0d8, Func Offset: 0x438
	// Line 832, Address: 0x20a0e0, Func Offset: 0x440
	// Line 818, Address: 0x20a0e8, Func Offset: 0x448
	// Line 817, Address: 0x20a0ec, Func Offset: 0x44c
	// Line 818, Address: 0x20a0f0, Func Offset: 0x450
	// Line 815, Address: 0x20a0f4, Func Offset: 0x454
	// Line 818, Address: 0x20a0f8, Func Offset: 0x458
	// Line 832, Address: 0x20a0fc, Func Offset: 0x45c
	// Line 819, Address: 0x20a104, Func Offset: 0x464
	// Line 820, Address: 0x20a108, Func Offset: 0x468
	// Line 828, Address: 0x20a110, Func Offset: 0x470
	// Line 832, Address: 0x20a114, Func Offset: 0x474
	// Line 833, Address: 0x20a124, Func Offset: 0x484
	// Func End, Address: 0x20a138, Func Offset: 0x498
}

// GoalPick__10zNMEZapperFP5xGoalRiR11en_trantype
// Start address: 0x20a150
int32 GoalPick(int32& gid_would)
{
	int32 altered;
	// Line 749, Address: 0x20a150, Func Offset: 0
	// Line 752, Address: 0x20a188, Func Offset: 0x38
	// Line 754, Address: 0x20a190, Func Offset: 0x40
	// Line 757, Address: 0x20a198, Func Offset: 0x48
	// Line 759, Address: 0x20a1a0, Func Offset: 0x50
	// Line 762, Address: 0x20a1a8, Func Offset: 0x58
	// Line 766, Address: 0x20a1b0, Func Offset: 0x60
	// Line 769, Address: 0x20a1b8, Func Offset: 0x68
	// Line 771, Address: 0x20a1c0, Func Offset: 0x70
	// Line 774, Address: 0x20a1c8, Func Offset: 0x78
	// Line 776, Address: 0x20a1d0, Func Offset: 0x80
	// Line 779, Address: 0x20a1d8, Func Offset: 0x88
	// Line 781, Address: 0x20a1e0, Func Offset: 0x90
	// Line 784, Address: 0x20a1e8, Func Offset: 0x98
	// Line 786, Address: 0x20a1f0, Func Offset: 0xa0
	// Line 789, Address: 0x20a1f8, Func Offset: 0xa8
	// Line 794, Address: 0x20a1fc, Func Offset: 0xac
	// Func End, Address: 0x20a204, Func Offset: 0xb4
}

// CreateAnimTable__10zNMEZapperFP10xAnimTable
// Start address: 0x20a210
xAnimTable* zNMEZapper::CreateAnimTable(xAnimTable* table)
{
	int32 ourAnims[16];
	// Line 635, Address: 0x20a210, Func Offset: 0
	// Line 641, Address: 0x20a220, Func Offset: 0x10
	// Line 649, Address: 0x20a228, Func Offset: 0x18
	// Line 653, Address: 0x20a270, Func Offset: 0x60
	// Line 658, Address: 0x20a2b8, Func Offset: 0xa8
	// Line 662, Address: 0x20a300, Func Offset: 0xf0
	// Line 668, Address: 0x20a348, Func Offset: 0x138
	// Line 672, Address: 0x20a390, Func Offset: 0x180
	// Line 677, Address: 0x20a3d8, Func Offset: 0x1c8
	// Line 683, Address: 0x20a420, Func Offset: 0x210
	// Line 687, Address: 0x20a468, Func Offset: 0x258
	// Line 691, Address: 0x20a4b0, Func Offset: 0x2a0
	// Line 696, Address: 0x20a4f8, Func Offset: 0x2e8
	// Line 700, Address: 0x20a540, Func Offset: 0x330
	// Line 706, Address: 0x20a588, Func Offset: 0x378
	// Line 710, Address: 0x20a5d0, Func Offset: 0x3c0
	// Line 714, Address: 0x20a618, Func Offset: 0x408
	// Line 723, Address: 0x20a660, Func Offset: 0x450
	// Line 738, Address: 0x20a690, Func Offset: 0x480
	// Line 742, Address: 0x20a6b4, Func Offset: 0x4a4
	// Line 641, Address: 0x20a6bc, Func Offset: 0x4ac
	// Line 742, Address: 0x20a6c0, Func Offset: 0x4b0
	// Line 743, Address: 0x20a6d0, Func Offset: 0x4c0
	// Func End, Address: 0x20a6e0, Func Offset: 0x4d0
}

// AnimPick__10zNMEZapperFi11en_npcgspotP5xGoal
// Start address: 0x20a6e0
uint32 zNMEZapper::AnimPick(int32 gid, en_npcgspot gspot)
{
	en_stananim idx;
	// Line 539, Address: 0x20a6e0, Func Offset: 0
	// Line 544, Address: 0x20a774, Func Offset: 0x94
	// Line 545, Address: 0x20a778, Func Offset: 0x98
	// Line 547, Address: 0x20a780, Func Offset: 0xa0
	// Line 549, Address: 0x20a788, Func Offset: 0xa8
	// Line 550, Address: 0x20a794, Func Offset: 0xb4
	// Line 553, Address: 0x20a79c, Func Offset: 0xbc
	// Line 556, Address: 0x20a7a4, Func Offset: 0xc4
	// Line 561, Address: 0x20a7ac, Func Offset: 0xcc
	// Line 563, Address: 0x20a7b4, Func Offset: 0xd4
	// Line 564, Address: 0x20a7c8, Func Offset: 0xe8
	// Line 567, Address: 0x20a7d0, Func Offset: 0xf0
	// Line 569, Address: 0x20a7d8, Func Offset: 0xf8
	// Line 570, Address: 0x20a7e4, Func Offset: 0x104
	// Line 573, Address: 0x20a7ec, Func Offset: 0x10c
	// Line 577, Address: 0x20a7f4, Func Offset: 0x114
	// Line 579, Address: 0x20a7fc, Func Offset: 0x11c
	// Line 581, Address: 0x20a808, Func Offset: 0x128
	// Line 582, Address: 0x20a814, Func Offset: 0x134
	// Line 585, Address: 0x20a81c, Func Offset: 0x13c
	// Line 588, Address: 0x20a824, Func Offset: 0x144
	// Line 590, Address: 0x20a82c, Func Offset: 0x14c
	// Line 592, Address: 0x20a838, Func Offset: 0x158
	// Line 593, Address: 0x20a844, Func Offset: 0x164
	// Line 596, Address: 0x20a84c, Func Offset: 0x16c
	// Line 599, Address: 0x20a854, Func Offset: 0x174
	// Line 601, Address: 0x20a85c, Func Offset: 0x17c
	// Line 603, Address: 0x20a868, Func Offset: 0x188
	// Line 604, Address: 0x20a874, Func Offset: 0x194
	// Line 607, Address: 0x20a87c, Func Offset: 0x19c
	// Line 613, Address: 0x20a884, Func Offset: 0x1a4
	// Line 615, Address: 0x20a890, Func Offset: 0x1b0
	// Line 617, Address: 0x20a898, Func Offset: 0x1b8
	// Line 619, Address: 0x20a8a4, Func Offset: 0x1c4
	// Line 620, Address: 0x20a8ac, Func Offset: 0x1cc
	// Line 631, Address: 0x20a8b0, Func Offset: 0x1d0
	// Line 548, Address: 0x20a8c8, Func Offset: 0x1e8
	// Line 578, Address: 0x20a8d0, Func Offset: 0x1f0
	// Line 580, Address: 0x20a8d8, Func Offset: 0x1f8
	// Line 589, Address: 0x20a8e0, Func Offset: 0x200
	// Line 591, Address: 0x20a8e8, Func Offset: 0x208
	// Line 600, Address: 0x20a8f0, Func Offset: 0x210
	// Line 602, Address: 0x20a8f8, Func Offset: 0x218
	// Line 614, Address: 0x20a900, Func Offset: 0x220
	// Line 616, Address: 0x20a908, Func Offset: 0x228
	// Line 618, Address: 0x20a910, Func Offset: 0x230
	// Line 632, Address: 0x20a918, Func Offset: 0x238
	// Func End, Address: 0x20a920, Func Offset: 0x240
}

// ZapMainBrain__10zNMEZapperFv
// Start address: 0x20a920
void zNMEZapper::ZapMainBrain()
{
	xBehaveMgr* bmgr;
	xPsyche* psy;
	// Line 462, Address: 0x20a920, Func Offset: 0
	// Line 464, Address: 0x20a92c, Func Offset: 0xc
	// Line 465, Address: 0x20a934, Func Offset: 0x14
	// Line 468, Address: 0x20a948, Func Offset: 0x28
	// Line 473, Address: 0x20a94c, Func Offset: 0x2c
	// Line 476, Address: 0x20a954, Func Offset: 0x34
	// Line 477, Address: 0x20a97c, Func Offset: 0x5c
	// Line 478, Address: 0x20a9a4, Func Offset: 0x84
	// Line 481, Address: 0x20a9b8, Func Offset: 0x98
	// Line 482, Address: 0x20a9cc, Func Offset: 0xac
	// Line 483, Address: 0x20a9e0, Func Offset: 0xc0
	// Line 487, Address: 0x20a9f4, Func Offset: 0xd4
	// Line 488, Address: 0x20aa08, Func Offset: 0xe8
	// Line 491, Address: 0x20aa1c, Func Offset: 0xfc
	// Line 492, Address: 0x20aa30, Func Offset: 0x110
	// Line 494, Address: 0x20aa44, Func Offset: 0x124
	// Line 497, Address: 0x20aa4c, Func Offset: 0x12c
	// Line 500, Address: 0x20aa58, Func Offset: 0x138
	// Func End, Address: 0x20aa68, Func Offset: 0x148
}

// SelfDestroy__10zNMEZapperFv
// Start address: 0x20aa70
void zNMEZapper::SelfDestroy()
{
	xBehaveMgr* bmgr;
	// Line 450, Address: 0x20aa70, Func Offset: 0
	// Line 451, Address: 0x20aa7c, Func Offset: 0xc
	// Line 453, Address: 0x20aa84, Func Offset: 0x14
	// Line 456, Address: 0x20aa90, Func Offset: 0x20
	// Line 459, Address: 0x20aab0, Func Offset: 0x40
	// Func End, Address: 0x20aac0, Func Offset: 0x50
}

// SelfSetup__10zNMEZapperFv
// Start address: 0x20aac0
void zNMEZapper::SelfSetup()
{
	// Line 439, Address: 0x20aac0, Func Offset: 0
	// Line 441, Address: 0x20aad0, Func Offset: 0x10
	// Line 444, Address: 0x20aad8, Func Offset: 0x18
	// Line 447, Address: 0x20ab50, Func Offset: 0x90
	// Func End, Address: 0x20ab64, Func Offset: 0xa4
}

// Setup__10zNMEZapperFv
// Start address: 0x20ab70
void zNMEZapper::Setup()
{
	// Line 428, Address: 0x20ab70, Func Offset: 0
	// Line 429, Address: 0x20ab74, Func Offset: 0x4
	// Line 428, Address: 0x20ab78, Func Offset: 0x8
	// Line 429, Address: 0x20ab7c, Func Offset: 0xc
	// Line 428, Address: 0x20ab80, Func Offset: 0x10
	// Line 429, Address: 0x20ab84, Func Offset: 0x14
	// Line 431, Address: 0x20abdc, Func Offset: 0x6c
	// Line 433, Address: 0x20ac24, Func Offset: 0xb4
	// Line 435, Address: 0x20ac40, Func Offset: 0xd0
	// Line 431, Address: 0x20ac48, Func Offset: 0xd8
	// Line 435, Address: 0x20ac50, Func Offset: 0xe0
	// Line 431, Address: 0x20ac58, Func Offset: 0xe8
	// Line 435, Address: 0x20ac5c, Func Offset: 0xec
	// Line 436, Address: 0x20aca0, Func Offset: 0x130
	// Func End, Address: 0x20acac, Func Offset: 0x13c
}

// Init__10zNMEZapperFP9xEntAsset
// Start address: 0x20acb0
void zNMEZapper::Init(xEntAsset* asset)
{
	// Line 412, Address: 0x20acb0, Func Offset: 0
	// Line 413, Address: 0x20acdc, Func Offset: 0x2c
	// Line 415, Address: 0x20ad70, Func Offset: 0xc0
	// Line 413, Address: 0x20ad74, Func Offset: 0xc4
	// Line 415, Address: 0x20ad78, Func Offset: 0xc8
	// Line 413, Address: 0x20ad8c, Func Offset: 0xdc
	// Line 415, Address: 0x20ad90, Func Offset: 0xe0
	// Line 413, Address: 0x20ad94, Func Offset: 0xe4
	// Line 415, Address: 0x20ad98, Func Offset: 0xe8
	// Line 413, Address: 0x20ad9c, Func Offset: 0xec
	// Line 415, Address: 0x20ada0, Func Offset: 0xf0
	// Line 413, Address: 0x20ada4, Func Offset: 0xf4
	// Line 415, Address: 0x20ada8, Func Offset: 0xf8
	// Line 413, Address: 0x20adb0, Func Offset: 0x100
	// Line 415, Address: 0x20aec0, Func Offset: 0x210
	// Line 416, Address: 0x20af0c, Func Offset: 0x25c
	// Line 418, Address: 0x20af10, Func Offset: 0x260
	// Line 416, Address: 0x20af18, Func Offset: 0x268
	// Line 418, Address: 0x20af1c, Func Offset: 0x26c
	// Line 419, Address: 0x20af2c, Func Offset: 0x27c
	// Line 420, Address: 0x20af44, Func Offset: 0x294
	// Line 421, Address: 0x20af5c, Func Offset: 0x2ac
	// Line 422, Address: 0x20af74, Func Offset: 0x2c4
	// Line 424, Address: 0x20af8c, Func Offset: 0x2dc
	// Line 413, Address: 0x20af98, Func Offset: 0x2e8
	// Line 424, Address: 0x20af9c, Func Offset: 0x2ec
	// Line 413, Address: 0x20afa4, Func Offset: 0x2f4
	// Line 424, Address: 0x20afb0, Func Offset: 0x300
	// Line 415, Address: 0x20afc0, Func Offset: 0x310
	// Line 424, Address: 0x20afc8, Func Offset: 0x318
	// Line 415, Address: 0x20afd8, Func Offset: 0x328
	// Line 424, Address: 0x20afdc, Func Offset: 0x32c
	// Line 418, Address: 0x20afec, Func Offset: 0x33c
	// Line 424, Address: 0x20aff0, Func Offset: 0x340
	// Line 419, Address: 0x20b000, Func Offset: 0x350
	// Line 424, Address: 0x20b004, Func Offset: 0x354
	// Line 420, Address: 0x20b014, Func Offset: 0x364
	// Line 424, Address: 0x20b018, Func Offset: 0x368
	// Line 421, Address: 0x20b028, Func Offset: 0x378
	// Line 424, Address: 0x20b02c, Func Offset: 0x37c
	// Line 422, Address: 0x20b03c, Func Offset: 0x38c
	// Line 424, Address: 0x20b040, Func Offset: 0x390
	// Line 425, Address: 0x20b050, Func Offset: 0x3a0
	// Func End, Address: 0x20b078, Func Offset: 0x3c8
}

// DfltVulnFlags__10zNMEZapperFv
// Start address: 0x20b080
int32 zNMEZapper::DfltVulnFlags()
{
	// Line 408, Address: 0x20b080, Func Offset: 0
	// Line 409, Address: 0x20b084, Func Offset: 0x4
	// Func End, Address: 0x20b08c, Func Offset: 0xc
}

// CreateConfig__10zNMEZapperFPCc
// Start address: 0x20b090
void zNMEZapper::CreateConfig()
{
	en_nmevar vidx;
	// Line 314, Address: 0x20b090, Func Offset: 0
	// Line 315, Address: 0x20b094, Func Offset: 0x4
	// Line 314, Address: 0x20b098, Func Offset: 0x8
	// Line 315, Address: 0x20b09c, Func Offset: 0xc
	// Line 314, Address: 0x20b0a0, Func Offset: 0x10
	// Line 315, Address: 0x20b0a4, Func Offset: 0x14
	// Line 318, Address: 0x20b0c4, Func Offset: 0x34
	// Line 319, Address: 0x20b0cc, Func Offset: 0x3c
	// Line 330, Address: 0x20b0e4, Func Offset: 0x54
	// Func End, Address: 0x20b0f4, Func Offset: 0x64
}

