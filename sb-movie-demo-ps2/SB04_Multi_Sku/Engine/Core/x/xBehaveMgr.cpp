



float32 TimerGet(en_xpsytime tymr);
int32 TranGoal(float32 dt, void* updCtxt);
int32 ParseTranRequest(en_trantype trantyp, int32 trangid);
int32 Timestep(float32 dt, void* updCtxt);
xGoal* HasGoal(int32 gid);
xGoal* FindGoal(int32 gid);
int32 GoalNone(int32 denyExplicit);
int32 GoalSwap(int32 gid);
int32 GoalPop(int32 gid_popto);
int32 GoalPopRecover(int32 overpend);
int32 GoalPopToBase(int32 overpend);
int32 GoalPush(int32 gid);
int32 GoalSet(int32 gid);
int32 GIDOfPending();
int32 GIDOfActive();
xGoal* GIDInStack(int32 gid);
xGoal* GetCurGoal();
int32 IndexInStack(int32 gid);
void FreshWipe();
xGoal* AddGoal(int32 gid, void* createData);
void BrainEnd();
void BrainBegin();
void UnSubscribe(xPsyche* psy);
xPsyche* Subscribe(xBase* owner);
xBehaveMgr* xBehaveMgr_GetSelf();
void xBehaveMgr_Shutdown();
void xBehaveMgr_Startup();

// TimerGet__7xPsycheF11en_xpsytime
// Start address: 0x43b240
float32 xPsyche::TimerGet(en_xpsytime tymr)
{
	// Line 1821, Address: 0x43b240, Func Offset: 0
	// Line 1822, Address: 0x43b244, Func Offset: 0x4
	// Line 1825, Address: 0x43b26c, Func Offset: 0x2c
	// Func End, Address: 0x43b274, Func Offset: 0x34
}

// TranGoal__7xPsycheFfPv
// Start address: 0x43b280
int32 xPsyche::TranGoal(float32 dt, void* updCtxt)
{
	int32 halfway;
	int32 just_switched;
	xGoal* topgoal;
	int32 moretodo;
	int32 moretodo;
	// Line 1463, Address: 0x43b280, Func Offset: 0
	// Line 1464, Address: 0x43b284, Func Offset: 0x4
	// Line 1463, Address: 0x43b288, Func Offset: 0x8
	// Line 1465, Address: 0x43b2ac, Func Offset: 0x2c
	// Line 1495, Address: 0x43b2b0, Func Offset: 0x30
	// Line 1509, Address: 0x43b2c0, Func Offset: 0x40
	// Line 1523, Address: 0x43b2cc, Func Offset: 0x4c
	// Line 1527, Address: 0x43b2e0, Func Offset: 0x60
	// Line 1538, Address: 0x43b2ec, Func Offset: 0x6c
	// Line 1540, Address: 0x43b310, Func Offset: 0x90
	// Line 1541, Address: 0x43b328, Func Offset: 0xa8
	// Line 1542, Address: 0x43b334, Func Offset: 0xb4
	// Line 1544, Address: 0x43b33c, Func Offset: 0xbc
	// Line 1545, Address: 0x43b354, Func Offset: 0xd4
	// Line 1561, Address: 0x43b364, Func Offset: 0xe4
	// Line 1588, Address: 0x43b374, Func Offset: 0xf4
	// Line 1594, Address: 0x43b3a4, Func Offset: 0x124
	// Line 1595, Address: 0x43b3ac, Func Offset: 0x12c
	// Line 1598, Address: 0x43b3b8, Func Offset: 0x138
	// Line 1600, Address: 0x43b3c8, Func Offset: 0x148
	// Line 1602, Address: 0x43b3d0, Func Offset: 0x150
	// Line 1603, Address: 0x43b3d8, Func Offset: 0x158
	// Line 1602, Address: 0x43b3dc, Func Offset: 0x15c
	// Line 1606, Address: 0x43b3e0, Func Offset: 0x160
	// Line 1614, Address: 0x43b3e8, Func Offset: 0x168
	// Line 1621, Address: 0x43b3f4, Func Offset: 0x174
	// Line 1624, Address: 0x43b3f8, Func Offset: 0x178
	// Line 1621, Address: 0x43b3fc, Func Offset: 0x17c
	// Line 1629, Address: 0x43b400, Func Offset: 0x180
	// Line 1621, Address: 0x43b404, Func Offset: 0x184
	// Line 1623, Address: 0x43b410, Func Offset: 0x190
	// Line 1624, Address: 0x43b420, Func Offset: 0x1a0
	// Line 1628, Address: 0x43b424, Func Offset: 0x1a4
	// Line 1630, Address: 0x43b428, Func Offset: 0x1a8
	// Line 1635, Address: 0x43b430, Func Offset: 0x1b0
	// Line 1642, Address: 0x43b434, Func Offset: 0x1b4
	// Line 1646, Address: 0x43b438, Func Offset: 0x1b8
	// Line 1635, Address: 0x43b43c, Func Offset: 0x1bc
	// Line 1636, Address: 0x43b448, Func Offset: 0x1c8
	// Line 1639, Address: 0x43b454, Func Offset: 0x1d4
	// Line 1642, Address: 0x43b464, Func Offset: 0x1e4
	// Line 1647, Address: 0x43b468, Func Offset: 0x1e8
	// Line 1651, Address: 0x43b470, Func Offset: 0x1f0
	// Line 1652, Address: 0x43b480, Func Offset: 0x200
	// Line 1655, Address: 0x43b48c, Func Offset: 0x20c
	// Line 1659, Address: 0x43b490, Func Offset: 0x210
	// Line 1655, Address: 0x43b494, Func Offset: 0x214
	// Line 1659, Address: 0x43b4a0, Func Offset: 0x220
	// Line 1669, Address: 0x43b4a8, Func Offset: 0x228
	// Line 1673, Address: 0x43b4ac, Func Offset: 0x22c
	// Line 1677, Address: 0x43b4b4, Func Offset: 0x234
	// Line 1678, Address: 0x43b4c4, Func Offset: 0x244
	// Line 1680, Address: 0x43b4d4, Func Offset: 0x254
	// Line 1682, Address: 0x43b4dc, Func Offset: 0x25c
	// Line 1686, Address: 0x43b4e4, Func Offset: 0x264
	// Line 1682, Address: 0x43b4e8, Func Offset: 0x268
	// Line 1686, Address: 0x43b4ec, Func Offset: 0x26c
	// Line 1714, Address: 0x43b4f0, Func Offset: 0x270
	// Line 1729, Address: 0x43b500, Func Offset: 0x280
	// Line 1749, Address: 0x43b508, Func Offset: 0x288
	// Line 1752, Address: 0x43b514, Func Offset: 0x294
	// Line 1760, Address: 0x43b51c, Func Offset: 0x29c
	// Line 1762, Address: 0x43b540, Func Offset: 0x2c0
	// Line 1763, Address: 0x43b55c, Func Offset: 0x2dc
	// Line 1764, Address: 0x43b564, Func Offset: 0x2e4
	// Line 1765, Address: 0x43b570, Func Offset: 0x2f0
	// Line 1766, Address: 0x43b578, Func Offset: 0x2f8
	// Line 1769, Address: 0x43b590, Func Offset: 0x310
	// Line 1771, Address: 0x43b598, Func Offset: 0x318
	// Line 1772, Address: 0x43b5ac, Func Offset: 0x32c
	// Line 1773, Address: 0x43b5c8, Func Offset: 0x348
	// Line 1774, Address: 0x43b5d0, Func Offset: 0x350
	// Line 1775, Address: 0x43b5dc, Func Offset: 0x35c
	// Line 1776, Address: 0x43b5e4, Func Offset: 0x364
	// Line 1790, Address: 0x43b5f8, Func Offset: 0x378
	// Line 1801, Address: 0x43b608, Func Offset: 0x388
	// Line 1813, Address: 0x43b610, Func Offset: 0x390
	// Line 1501, Address: 0x43b628, Func Offset: 0x3a8
	// Line 1813, Address: 0x43b62c, Func Offset: 0x3ac
	// Line 1505, Address: 0x43b630, Func Offset: 0x3b0
	// Line 1813, Address: 0x43b634, Func Offset: 0x3b4
	// Line 1500, Address: 0x43b638, Func Offset: 0x3b8
	// Line 1813, Address: 0x43b640, Func Offset: 0x3c0
	// Line 1509, Address: 0x43b658, Func Offset: 0x3d8
	// Line 1813, Address: 0x43b664, Func Offset: 0x3e4
	// Line 1661, Address: 0x43b674, Func Offset: 0x3f4
	// Line 1665, Address: 0x43b678, Func Offset: 0x3f8
	// Line 1813, Address: 0x43b67c, Func Offset: 0x3fc
	// Line 1666, Address: 0x43b684, Func Offset: 0x404
	// Line 1813, Address: 0x43b68c, Func Offset: 0x40c
	// Line 1694, Address: 0x43b690, Func Offset: 0x410
	// Line 1716, Address: 0x43b69c, Func Offset: 0x41c
	// Line 1813, Address: 0x43b6a8, Func Offset: 0x428
	// Line 1814, Address: 0x43b6bc, Func Offset: 0x43c
	// Func End, Address: 0x43b6e0, Func Offset: 0x460
}

// ParseTranRequest__7xPsycheF11en_trantypei
// Start address: 0x43b6e0
int32 xPsyche::ParseTranRequest(en_trantype trantyp, int32 trangid)
{
	int32 rc;
	// Line 1362, Address: 0x43b6e0, Func Offset: 0
	// Line 1363, Address: 0x43b6e4, Func Offset: 0x4
	// Line 1366, Address: 0x43b6e8, Func Offset: 0x8
	// Line 1370, Address: 0x43b6f0, Func Offset: 0x10
	// Line 1372, Address: 0x43b6fc, Func Offset: 0x1c
	// Line 1374, Address: 0x43b708, Func Offset: 0x28
	// Line 1376, Address: 0x43b714, Func Offset: 0x34
	// Line 1378, Address: 0x43b720, Func Offset: 0x40
	// Line 1380, Address: 0x43b728, Func Offset: 0x48
	// Line 1382, Address: 0x43b734, Func Offset: 0x54
	// Line 1384, Address: 0x43b740, Func Offset: 0x60
	// Line 1386, Address: 0x43b74c, Func Offset: 0x6c
	// Line 1387, Address: 0x43b758, Func Offset: 0x78
	// Line 1412, Address: 0x43b764, Func Offset: 0x84
	// Line 1369, Address: 0x43b774, Func Offset: 0x94
	// Line 1371, Address: 0x43b77c, Func Offset: 0x9c
	// Line 1412, Address: 0x43b780, Func Offset: 0xa0
	// Line 1371, Address: 0x43b788, Func Offset: 0xa8
	// Line 1373, Address: 0x43b790, Func Offset: 0xb0
	// Line 1412, Address: 0x43b794, Func Offset: 0xb4
	// Line 1373, Address: 0x43b79c, Func Offset: 0xbc
	// Line 1412, Address: 0x43b7a4, Func Offset: 0xc4
	// Line 1375, Address: 0x43b7ac, Func Offset: 0xcc
	// Line 1412, Address: 0x43b7b4, Func Offset: 0xd4
	// Line 1377, Address: 0x43b7bc, Func Offset: 0xdc
	// Line 1381, Address: 0x43b7c4, Func Offset: 0xe4
	// Line 1412, Address: 0x43b7c8, Func Offset: 0xe8
	// Line 1381, Address: 0x43b7d0, Func Offset: 0xf0
	// Line 1383, Address: 0x43b7d8, Func Offset: 0xf8
	// Line 1412, Address: 0x43b7dc, Func Offset: 0xfc
	// Line 1383, Address: 0x43b7e4, Func Offset: 0x104
	// Line 1385, Address: 0x43b7ec, Func Offset: 0x10c
	// Line 1412, Address: 0x43b7f0, Func Offset: 0x110
	// Line 1385, Address: 0x43b7f8, Func Offset: 0x118
	// Line 1413, Address: 0x43b800, Func Offset: 0x120
	// Func End, Address: 0x43b80c, Func Offset: 0x12c
}

// Timestep__7xPsycheFfPv
// Start address: 0x43b810
int32 xPsyche::Timestep(float32 dt, void* updCtxt)
{
	int32 old_psyflags;
	int32 sanity;
	int32 moretodo;
	int32 trangid;
	en_trantype trantyp;
	// Line 1206, Address: 0x43b810, Func Offset: 0
	// Line 1215, Address: 0x43b814, Func Offset: 0x4
	// Line 1206, Address: 0x43b818, Func Offset: 0x8
	// Line 1214, Address: 0x43b838, Func Offset: 0x28
	// Line 1215, Address: 0x43b83c, Func Offset: 0x2c
	// Line 1218, Address: 0x43b844, Func Offset: 0x34
	// Line 1219, Address: 0x43b854, Func Offset: 0x44
	// Line 1229, Address: 0x43b864, Func Offset: 0x54
	// Line 1233, Address: 0x43b86c, Func Offset: 0x5c
	// Line 1247, Address: 0x43b888, Func Offset: 0x78
	// Line 1249, Address: 0x43b88c, Func Offset: 0x7c
	// Line 1261, Address: 0x43b890, Func Offset: 0x80
	// Line 1266, Address: 0x43b89c, Func Offset: 0x8c
	// Line 1273, Address: 0x43b8a0, Func Offset: 0x90
	// Line 1281, Address: 0x43b8ac, Func Offset: 0x9c
	// Line 1282, Address: 0x43b8b0, Func Offset: 0xa0
	// Line 1287, Address: 0x43b8b8, Func Offset: 0xa8
	// Line 1290, Address: 0x43b8c0, Func Offset: 0xb0
	// Line 1298, Address: 0x43b8d0, Func Offset: 0xc0
	// Line 1342, Address: 0x43b8d8, Func Offset: 0xc8
	// Line 1343, Address: 0x43b8fc, Func Offset: 0xec
	// Line 1349, Address: 0x43b910, Func Offset: 0x100
	// Line 1274, Address: 0x43b924, Func Offset: 0x114
	// Line 1349, Address: 0x43b92c, Func Offset: 0x11c
	// Line 1282, Address: 0x43b944, Func Offset: 0x134
	// Line 1349, Address: 0x43b948, Func Offset: 0x138
	// Line 1346, Address: 0x43b95c, Func Offset: 0x14c
	// Line 1349, Address: 0x43b960, Func Offset: 0x150
	// Line 1355, Address: 0x43b970, Func Offset: 0x160
	// Line 1357, Address: 0x43b978, Func Offset: 0x168
	// Line 1355, Address: 0x43b97c, Func Offset: 0x16c
	// Line 1358, Address: 0x43b984, Func Offset: 0x174
	// Func End, Address: 0x43b9a4, Func Offset: 0x194
}

// HasGoal__7xPsycheFi
// Start address: 0x43b9b0
xGoal* xPsyche::HasGoal(int32 gid)
{
	xGoal* goal;
	// Line 1183, Address: 0x43b9b0, Func Offset: 0
	// Line 1184, Address: 0x43b9b4, Func Offset: 0x4
	// Line 1185, Address: 0x43b9bc, Func Offset: 0xc
	// Line 1187, Address: 0x43b9d0, Func Offset: 0x20
	// Line 1188, Address: 0x43b9d4, Func Offset: 0x24
	// Line 1190, Address: 0x43b9e0, Func Offset: 0x30
	// Func End, Address: 0x43b9e8, Func Offset: 0x38
}

// FindGoal__7xPsycheFi
// Start address: 0x43b9f0
xGoal* xPsyche::FindGoal(int32 gid)
{
	xGoal* goal;
	// Line 1166, Address: 0x43b9f0, Func Offset: 0
	// Line 1167, Address: 0x43b9f4, Func Offset: 0x4
	// Line 1168, Address: 0x43b9fc, Func Offset: 0xc
	// Line 1170, Address: 0x43ba10, Func Offset: 0x20
	// Line 1171, Address: 0x43ba14, Func Offset: 0x24
	// Line 1178, Address: 0x43ba20, Func Offset: 0x30
	// Func End, Address: 0x43ba28, Func Offset: 0x38
}

// GoalNone__7xPsycheFii
// Start address: 0x43ba30
int32 xPsyche::GoalNone(int32 denyExplicit)
{
	// Line 1088, Address: 0x43ba30, Func Offset: 0
	// Line 1091, Address: 0x43ba40, Func Offset: 0x10
	// Line 1111, Address: 0x43ba50, Func Offset: 0x20
	// Line 1114, Address: 0x43ba54, Func Offset: 0x24
	// Line 1116, Address: 0x43ba60, Func Offset: 0x30
	// Line 1118, Address: 0x43ba68, Func Offset: 0x38
	// Line 1135, Address: 0x43ba84, Func Offset: 0x54
	// Line 1137, Address: 0x43baa0, Func Offset: 0x70
	// Line 1139, Address: 0x43baa8, Func Offset: 0x78
	// Line 1138, Address: 0x43baac, Func Offset: 0x7c
	// Line 1140, Address: 0x43bab0, Func Offset: 0x80
	// Line 1138, Address: 0x43bab4, Func Offset: 0x84
	// Line 1140, Address: 0x43bab8, Func Offset: 0x88
	// Line 1138, Address: 0x43babc, Func Offset: 0x8c
	// Line 1140, Address: 0x43bac0, Func Offset: 0x90
	// Line 1139, Address: 0x43bac4, Func Offset: 0x94
	// Line 1140, Address: 0x43bacc, Func Offset: 0x9c
	// Line 1141, Address: 0x43baf0, Func Offset: 0xc0
	// Line 1142, Address: 0x43bb04, Func Offset: 0xd4
	// Line 1096, Address: 0x43bb0c, Func Offset: 0xdc
	// Line 1114, Address: 0x43bb14, Func Offset: 0xe4
	// Line 1143, Address: 0x43bb1c, Func Offset: 0xec
	// Line 1146, Address: 0x43bb4c, Func Offset: 0x11c
	// Line 1147, Address: 0x43bb50, Func Offset: 0x120
	// Func End, Address: 0x43bb64, Func Offset: 0x134
}

// GoalSwap__7xPsycheFii
// Start address: 0x43bb70
int32 xPsyche::GoalSwap(int32 gid)
{
	int32 result;
	en_trantype trantype;
	// Line 1012, Address: 0x43bb70, Func Offset: 0
	// Line 1017, Address: 0x43bb88, Func Offset: 0x18
	// Line 1027, Address: 0x43bb98, Func Offset: 0x28
	// Line 1055, Address: 0x43bba4, Func Offset: 0x34
	// Line 1056, Address: 0x43bbc8, Func Offset: 0x58
	// Line 1060, Address: 0x43bbd0, Func Offset: 0x60
	// Line 1061, Address: 0x43bbd4, Func Offset: 0x64
	// Line 1063, Address: 0x43bbe0, Func Offset: 0x70
	// Line 1079, Address: 0x43bbfc, Func Offset: 0x8c
	// Line 1081, Address: 0x43bc20, Func Offset: 0xb0
	// Line 1084, Address: 0x43bc50, Func Offset: 0xe0
	// Line 1022, Address: 0x43bc5c, Func Offset: 0xec
	// Line 1084, Address: 0x43bc64, Func Offset: 0xf4
	// Line 1031, Address: 0x43bc7c, Func Offset: 0x10c
	// Line 1084, Address: 0x43bc80, Func Offset: 0x110
	// Line 1085, Address: 0x43bc88, Func Offset: 0x118
	// Func End, Address: 0x43bc9c, Func Offset: 0x12c
}

// GoalPop__7xPsycheFii
// Start address: 0x43bca0
int32 xPsyche::GoalPop(int32 gid_popto)
{
	int32 gid_popto'93;
	int32 result;
	xGoal* destgoal;
	xGoal* tmpgoal;
	int32 i;
	en_trantype trantype;
	// Line 868, Address: 0x43bca0, Func Offset: 0
	// Line 869, Address: 0x43bcb8, Func Offset: 0x18
	// Line 868, Address: 0x43bcbc, Func Offset: 0x1c
	// Line 874, Address: 0x43bcc0, Func Offset: 0x20
	// Line 901, Address: 0x43bcd0, Func Offset: 0x30
	// Line 903, Address: 0x43bcec, Func Offset: 0x4c
	// Line 902, Address: 0x43bcf0, Func Offset: 0x50
	// Line 903, Address: 0x43bcf4, Func Offset: 0x54
	// Line 905, Address: 0x43bd00, Func Offset: 0x60
	// Line 906, Address: 0x43bd10, Func Offset: 0x70
	// Line 911, Address: 0x43bd1c, Func Offset: 0x7c
	// Line 920, Address: 0x43bd24, Func Offset: 0x84
	// Line 931, Address: 0x43bd2c, Func Offset: 0x8c
	// Line 932, Address: 0x43bd38, Func Offset: 0x98
	// Line 942, Address: 0x43bd40, Func Offset: 0xa0
	// Line 946, Address: 0x43bd48, Func Offset: 0xa8
	// Line 949, Address: 0x43bd54, Func Offset: 0xb4
	// Line 953, Address: 0x43bd5c, Func Offset: 0xbc
	// Line 954, Address: 0x43bd68, Func Offset: 0xc8
	// Line 955, Address: 0x43bd6c, Func Offset: 0xcc
	// Line 959, Address: 0x43bd78, Func Offset: 0xd8
	// Line 960, Address: 0x43bd80, Func Offset: 0xe0
	// Line 970, Address: 0x43bd90, Func Offset: 0xf0
	// Line 973, Address: 0x43bd98, Func Offset: 0xf8
	// Line 974, Address: 0x43bd9c, Func Offset: 0xfc
	// Line 975, Address: 0x43bda8, Func Offset: 0x108
	// Line 1002, Address: 0x43bdc4, Func Offset: 0x124
	// Line 1004, Address: 0x43bde8, Func Offset: 0x148
	// Line 1007, Address: 0x43be18, Func Offset: 0x178
	// Line 879, Address: 0x43be24, Func Offset: 0x184
	// Line 913, Address: 0x43be2c, Func Offset: 0x18c
	// Line 1007, Address: 0x43be34, Func Offset: 0x194
	// Line 935, Address: 0x43be38, Func Offset: 0x198
	// Line 1007, Address: 0x43be3c, Func Offset: 0x19c
	// Line 936, Address: 0x43be4c, Func Offset: 0x1ac
	// Line 1007, Address: 0x43be54, Func Offset: 0x1b4
	// Line 938, Address: 0x43be5c, Func Offset: 0x1bc
	// Line 1008, Address: 0x43be64, Func Offset: 0x1c4
	// Func End, Address: 0x43be7c, Func Offset: 0x1dc
}

// GoalPopRecover__7xPsycheFi
// Start address: 0x43be80
int32 xPsyche::GoalPopRecover(int32 overpend)
{
	int32 result;
	int32 i;
	xGoal* tmpgoal;
	xGoal* destgoal;
	// Line 806, Address: 0x43be80, Func Offset: 0
	// Line 810, Address: 0x43be8c, Func Offset: 0xc
	// Line 806, Address: 0x43be90, Func Offset: 0x10
	// Line 812, Address: 0x43be9c, Func Offset: 0x1c
	// Line 823, Address: 0x43beb0, Func Offset: 0x30
	// Line 827, Address: 0x43beb8, Func Offset: 0x38
	// Line 828, Address: 0x43bec4, Func Offset: 0x44
	// Line 829, Address: 0x43bec8, Func Offset: 0x48
	// Line 832, Address: 0x43bee0, Func Offset: 0x60
	// Line 833, Address: 0x43bee8, Func Offset: 0x68
	// Line 835, Address: 0x43bef8, Func Offset: 0x78
	// Line 836, Address: 0x43bf00, Func Offset: 0x80
	// Line 837, Address: 0x43bf0c, Func Offset: 0x8c
	// Line 844, Address: 0x43bf10, Func Offset: 0x90
	// Line 846, Address: 0x43bf34, Func Offset: 0xb4
	// Line 849, Address: 0x43bf64, Func Offset: 0xe4
	// Line 817, Address: 0x43bf70, Func Offset: 0xf0
	// Line 824, Address: 0x43bf78, Func Offset: 0xf8
	// Line 850, Address: 0x43bf7c, Func Offset: 0xfc
	// Func End, Address: 0x43bf90, Func Offset: 0x110
}

// GoalPopToBase__7xPsycheFi
// Start address: 0x43bf90
int32 xPsyche::GoalPopToBase(int32 overpend)
{
	// Line 771, Address: 0x43bf90, Func Offset: 0
	// Line 775, Address: 0x43bfa0, Func Offset: 0x10
	// Line 787, Address: 0x43bfb0, Func Offset: 0x20
	// Line 788, Address: 0x43bfbc, Func Offset: 0x2c
	// Line 780, Address: 0x43bfc4, Func Offset: 0x34
	// Line 792, Address: 0x43bfcc, Func Offset: 0x3c
	// Line 796, Address: 0x43bfd8, Func Offset: 0x48
	// Line 798, Address: 0x43bff4, Func Offset: 0x64
	// Line 801, Address: 0x43c024, Func Offset: 0x94
	// Line 802, Address: 0x43c028, Func Offset: 0x98
	// Func End, Address: 0x43c038, Func Offset: 0xa8
}

// GoalPush__7xPsycheFii
// Start address: 0x43c040
int32 xPsyche::GoalPush(int32 gid)
{
	int32 result;
	xGoal* goal;
	en_trantype trantype;
	// Line 672, Address: 0x43c040, Func Offset: 0
	// Line 676, Address: 0x43c058, Func Offset: 0x18
	// Line 686, Address: 0x43c068, Func Offset: 0x28
	// Line 711, Address: 0x43c078, Func Offset: 0x38
	// Line 715, Address: 0x43c084, Func Offset: 0x44
	// Line 725, Address: 0x43c08c, Func Offset: 0x4c
	// Line 726, Address: 0x43c0a8, Func Offset: 0x68
	// Line 681, Address: 0x43c0b0, Func Offset: 0x70
	// Line 726, Address: 0x43c0b8, Func Offset: 0x78
	// Line 690, Address: 0x43c0d0, Func Offset: 0x90
	// Line 726, Address: 0x43c0d4, Func Offset: 0x94
	// Line 691, Address: 0x43c0dc, Func Offset: 0x9c
	// Line 712, Address: 0x43c0e4, Func Offset: 0xa4
	// Line 730, Address: 0x43c0ec, Func Offset: 0xac
	// Line 731, Address: 0x43c118, Func Offset: 0xd8
	// Line 733, Address: 0x43c120, Func Offset: 0xe0
	// Line 740, Address: 0x43c128, Func Offset: 0xe8
	// Line 742, Address: 0x43c138, Func Offset: 0xf8
	// Line 743, Address: 0x43c13c, Func Offset: 0xfc
	// Line 744, Address: 0x43c148, Func Offset: 0x108
	// Line 761, Address: 0x43c164, Func Offset: 0x124
	// Line 763, Address: 0x43c188, Func Offset: 0x148
	// Line 766, Address: 0x43c1b8, Func Offset: 0x178
	// Line 732, Address: 0x43c1e4, Func Offset: 0x1a4
	// Line 767, Address: 0x43c1f0, Func Offset: 0x1b0
	// Func End, Address: 0x43c204, Func Offset: 0x1c4
}

// GoalSet__7xPsycheFii
// Start address: 0x43c210
int32 xPsyche::GoalSet(int32 gid)
{
	int32 result;
	xGoal* goal;
	en_trantype trantype;
	// Line 595, Address: 0x43c210, Func Offset: 0
	// Line 599, Address: 0x43c228, Func Offset: 0x18
	// Line 609, Address: 0x43c238, Func Offset: 0x28
	// Line 619, Address: 0x43c244, Func Offset: 0x34
	// Line 638, Address: 0x43c250, Func Offset: 0x40
	// Line 639, Address: 0x43c278, Func Offset: 0x68
	// Line 641, Address: 0x43c280, Func Offset: 0x70
	// Line 643, Address: 0x43c288, Func Offset: 0x78
	// Line 642, Address: 0x43c28c, Func Offset: 0x7c
	// Line 644, Address: 0x43c290, Func Offset: 0x80
	// Line 645, Address: 0x43c298, Func Offset: 0x88
	// Line 662, Address: 0x43c2b4, Func Offset: 0xa4
	// Line 664, Address: 0x43c2d8, Func Offset: 0xc8
	// Line 667, Address: 0x43c308, Func Offset: 0xf8
	// Line 604, Address: 0x43c314, Func Offset: 0x104
	// Line 667, Address: 0x43c31c, Func Offset: 0x10c
	// Line 613, Address: 0x43c334, Func Offset: 0x124
	// Line 667, Address: 0x43c338, Func Offset: 0x128
	// Line 613, Address: 0x43c340, Func Offset: 0x130
	// Line 667, Address: 0x43c348, Func Offset: 0x138
	// Line 640, Address: 0x43c374, Func Offset: 0x164
	// Line 668, Address: 0x43c380, Func Offset: 0x170
	// Func End, Address: 0x43c394, Func Offset: 0x184
}

// GIDOfPending__7xPsycheCFv
// Start address: 0x43c3a0
int32 xPsyche::GIDOfPending()
{
	// Line 528, Address: 0x43c3a0, Func Offset: 0
	// Line 529, Address: 0x43c3a4, Func Offset: 0x4
	// Line 531, Address: 0x43c3b8, Func Offset: 0x18
	// Func End, Address: 0x43c3c0, Func Offset: 0x20
}

// GIDOfActive__7xPsycheCFv
// Start address: 0x43c3c0
int32 xPsyche::GIDOfActive()
{
	// Line 522, Address: 0x43c3c0, Func Offset: 0
	// Line 523, Address: 0x43c3c4, Func Offset: 0x4
	// Line 525, Address: 0x43c3e4, Func Offset: 0x24
	// Func End, Address: 0x43c3ec, Func Offset: 0x2c
}

// GIDInStack__7xPsycheCFi
// Start address: 0x43c3f0
xGoal* xPsyche::GIDInStack(int32 gid)
{
	xGoal* da_goal;
	xGoal* tmpgoal;
	int32 i;
	// Line 510, Address: 0x43c3f0, Func Offset: 0
	// Line 505, Address: 0x43c3f4, Func Offset: 0x4
	// Line 510, Address: 0x43c3f8, Func Offset: 0x8
	// Line 511, Address: 0x43c404, Func Offset: 0x14
	// Line 513, Address: 0x43c408, Func Offset: 0x18
	// Line 515, Address: 0x43c414, Func Offset: 0x24
	// Line 516, Address: 0x43c41c, Func Offset: 0x2c
	// Line 519, Address: 0x43c430, Func Offset: 0x40
	// Func End, Address: 0x43c438, Func Offset: 0x48
}

// GetCurGoal__7xPsycheCFv
// Start address: 0x43c440
xGoal* xPsyche::GetCurGoal()
{
	// Line 499, Address: 0x43c440, Func Offset: 0
	// Line 500, Address: 0x43c444, Func Offset: 0x4
	// Line 501, Address: 0x43c460, Func Offset: 0x20
	// Func End, Address: 0x43c468, Func Offset: 0x28
}

// IndexInStack__7xPsycheCFi
// Start address: 0x43c470
int32 xPsyche::IndexInStack(int32 gid)
{
	int32 da_idx;
	int32 i;
	// Line 487, Address: 0x43c470, Func Offset: 0
	// Line 484, Address: 0x43c474, Func Offset: 0x4
	// Line 487, Address: 0x43c478, Func Offset: 0x8
	// Line 490, Address: 0x43c484, Func Offset: 0x14
	// Line 492, Address: 0x43c494, Func Offset: 0x24
	// Line 493, Address: 0x43c49c, Func Offset: 0x2c
	// Line 496, Address: 0x43c4b0, Func Offset: 0x40
	// Func End, Address: 0x43c4b8, Func Offset: 0x48
}

// FreshWipe__7xPsycheFv
// Start address: 0x43c4c0
void xPsyche::FreshWipe()
{
	int32 i;
	// Line 396, Address: 0x43c4c0, Func Offset: 0
	// Line 397, Address: 0x43c4c4, Func Offset: 0x4
	// Line 396, Address: 0x43c4c8, Func Offset: 0x8
	// Line 403, Address: 0x43c4cc, Func Offset: 0xc
	// Line 396, Address: 0x43c4d0, Func Offset: 0x10
	// Line 397, Address: 0x43c4e0, Func Offset: 0x20
	// Line 399, Address: 0x43c4e4, Func Offset: 0x24
	// Line 400, Address: 0x43c4e8, Func Offset: 0x28
	// Line 401, Address: 0x43c4ec, Func Offset: 0x2c
	// Line 405, Address: 0x43c4f0, Func Offset: 0x30
	// Line 404, Address: 0x43c4f4, Func Offset: 0x34
	// Line 405, Address: 0x43c4f8, Func Offset: 0x38
	// Line 404, Address: 0x43c4fc, Func Offset: 0x3c
	// Line 405, Address: 0x43c500, Func Offset: 0x40
	// Line 407, Address: 0x43c50c, Func Offset: 0x4c
	// Line 408, Address: 0x43c510, Func Offset: 0x50
	// Line 409, Address: 0x43c514, Func Offset: 0x54
	// Line 410, Address: 0x43c518, Func Offset: 0x58
	// Line 411, Address: 0x43c51c, Func Offset: 0x5c
	// Line 412, Address: 0x43c520, Func Offset: 0x60
	// Line 415, Address: 0x43c528, Func Offset: 0x68
	// Func End, Address: 0x43c530, Func Offset: 0x70
}

// AddGoal__7xPsycheFiPv
// Start address: 0x43c530
xGoal* xPsyche::AddGoal(int32 gid, void* createData)
{
	xGoal* goal;
	// Line 333, Address: 0x43c530, Func Offset: 0
	// Line 359, Address: 0x43c534, Func Offset: 0x4
	// Line 333, Address: 0x43c538, Func Offset: 0x8
	// Line 359, Address: 0x43c54c, Func Offset: 0x1c
	// Line 369, Address: 0x43c56c, Func Offset: 0x3c
	// Line 370, Address: 0x43c578, Func Offset: 0x48
	// Line 374, Address: 0x43c588, Func Offset: 0x58
	// Line 386, Address: 0x43c58c, Func Offset: 0x5c
	// Line 387, Address: 0x43c5ac, Func Offset: 0x7c
	// Func End, Address: 0x43c5c4, Func Offset: 0x94
}

// BrainEnd__7xPsycheFv
// Start address: 0x43c5d0
void xPsyche::BrainEnd()
{
	// Line 301, Address: 0x43c5d0, Func Offset: 0
	// Line 308, Address: 0x43c5dc, Func Offset: 0xc
	// Line 309, Address: 0x43c5ec, Func Offset: 0x1c
	// Line 317, Address: 0x43c5f4, Func Offset: 0x24
	// Func End, Address: 0x43c604, Func Offset: 0x34
}

// BrainBegin__7xPsycheFv
// Start address: 0x43c610
void xPsyche::BrainBegin()
{
	// Line 257, Address: 0x43c610, Func Offset: 0
	// Line 261, Address: 0x43c614, Func Offset: 0x4
	// Line 270, Address: 0x43c618, Func Offset: 0x8
	// Line 257, Address: 0x43c620, Func Offset: 0x10
	// Line 261, Address: 0x43c624, Func Offset: 0x14
	// Line 270, Address: 0x43c628, Func Offset: 0x18
	// Func End, Address: 0x43c630, Func Offset: 0x20
}

// UnSubscribe__10xBehaveMgrFP7xPsyche
// Start address: 0x43c630
void xBehaveMgr::UnSubscribe(xPsyche* psy)
{
	// Line 197, Address: 0x43c630, Func Offset: 0
	// Line 203, Address: 0x43c648, Func Offset: 0x18
	// Line 204, Address: 0x43c688, Func Offset: 0x58
	// Line 207, Address: 0x43c69c, Func Offset: 0x6c
	// Func End, Address: 0x43c6b4, Func Offset: 0x84
}

// Subscribe__10xBehaveMgrFP5xBasei
// Start address: 0x43c6c0
xPsyche* xBehaveMgr::Subscribe(xBase* owner)
{
	xPsyche* psy;
	// Line 178, Address: 0x43c6c0, Func Offset: 0
	// Line 185, Address: 0x43c6d4, Func Offset: 0x14
	// Line 187, Address: 0x43c6e0, Func Offset: 0x20
	// Line 185, Address: 0x43c6e4, Func Offset: 0x24
	// Line 187, Address: 0x43c6f8, Func Offset: 0x38
	// Line 190, Address: 0x43c700, Func Offset: 0x40
	// Line 191, Address: 0x43c708, Func Offset: 0x48
	// Line 193, Address: 0x43c738, Func Offset: 0x78
	// Line 194, Address: 0x43c73c, Func Offset: 0x7c
	// Func End, Address: 0x43c750, Func Offset: 0x90
}

// xBehaveMgr_GetSelf__Fv
// Start address: 0x43c750
xBehaveMgr* xBehaveMgr_GetSelf()
{
	// Line 101, Address: 0x43c750, Func Offset: 0
	// Func End, Address: 0x43c758, Func Offset: 0x8
}

// xBehaveMgr_Shutdown__Fv
// Start address: 0x43c760
void xBehaveMgr_Shutdown()
{
	// Line 88, Address: 0x43c760, Func Offset: 0
	// Line 90, Address: 0x43c768, Func Offset: 0x8
	// Line 92, Address: 0x43c77c, Func Offset: 0x1c
	// Line 93, Address: 0x43c794, Func Offset: 0x34
	// Line 96, Address: 0x43c798, Func Offset: 0x38
	// Func End, Address: 0x43c7a4, Func Offset: 0x44
}

// xBehaveMgr_Startup__Fv
// Start address: 0x43c7b0
void xBehaveMgr_Startup()
{
	// Line 76, Address: 0x43c7b0, Func Offset: 0
	// Line 77, Address: 0x43c7c0, Func Offset: 0x10
	// Line 79, Address: 0x43c7d0, Func Offset: 0x20
	// Line 82, Address: 0x43c7e8, Func Offset: 0x38
	// Line 85, Address: 0x43c890, Func Offset: 0xe0
	// Func End, Address: 0x43c8a4, Func Offset: 0xf4
}

