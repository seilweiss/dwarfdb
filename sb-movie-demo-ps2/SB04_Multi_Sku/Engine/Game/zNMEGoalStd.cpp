



int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
int32 Exit();
int32 Enter();
int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
int32 Exit();
int32 Enter();
int32 GoalHandleMail(NMEMsg* mail);
int32 Enter();
void SendDeathNotice(zNMECommon* npc);
int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
int32 Exit();
int32 Resume();
int32 Enter();
void CalcNewDir(zNMECommon* npc);
void VerticalWander(zNMECommon* npc, float32 spd_dt, xVec3* vec_dest);
int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
int32 Enter();
int32 Exit();
int32 Enter();
void MoveAutoSmooth(zNMECommon* npc, float32 dt);
void CalcSmoothPoints(zNMECommon* npc);
void Chk_AutoSmooth(zNMECommon* npc);
void MoveSpline(zNMECommon* npc, float32 dt);
void MoveNormal(zNMECommon* npc, float32 dt);
void DoOnArriveStuff(zNMECommon* npc);
int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
int32 Resume();
int32 Exit();
int32 Enter();
int32 GoalHandleMail(NMEMsg* msg);
int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
int32 Resume();
int32 Suspend();
int32 Exit();
int32 Enter();
void ValidateStages();
void UseDefaultAnims(zNMECommon* npc);
en_loopstat GoalLoop_Process(zNMECommon* npc, float32 dt);
int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
int32 Resume();
int32 Exit();
int32 Enter();

// Process__15zNMEGoalDEVHeroFP11en_trantypefPv
// Start address: 0x29e680
int32 zNMEGoalDEVHero::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	zNMECommon* npc;
	// Line 2421, Address: 0x29e680, Func Offset: 0
	// Line 2426, Address: 0x29e684, Func Offset: 0x4
	// Line 2421, Address: 0x29e688, Func Offset: 0x8
	// Line 2426, Address: 0x29e68c, Func Offset: 0xc
	// Line 2421, Address: 0x29e690, Func Offset: 0x10
	// Line 2426, Address: 0x29e6a0, Func Offset: 0x20
	// Line 2421, Address: 0x29e6a4, Func Offset: 0x24
	// Line 2422, Address: 0x29e6ac, Func Offset: 0x2c
	// Line 2426, Address: 0x29e6b8, Func Offset: 0x38
	// Line 2422, Address: 0x29e6bc, Func Offset: 0x3c
	// Line 2426, Address: 0x29e6c0, Func Offset: 0x40
	// Line 2428, Address: 0x29e6c8, Func Offset: 0x48
	// Line 2429, Address: 0x29e724, Func Offset: 0xa4
	// Func End, Address: 0x29e740, Func Offset: 0xc0
}

// Exit__15zNMEGoalDEVHeroFfPv
// Start address: 0x29e740
int32 zNMEGoalDEVHero::Exit()
{
	// Line 2418, Address: 0x29e740, Func Offset: 0
	// Func End, Address: 0x29e748, Func Offset: 0x8
}

// Enter__15zNMEGoalDEVHeroFfPv
// Start address: 0x29e750
int32 zNMEGoalDEVHero::Enter()
{
	// Line 2411, Address: 0x29e750, Func Offset: 0
	// Line 2412, Address: 0x29e754, Func Offset: 0x4
	// Line 2411, Address: 0x29e758, Func Offset: 0x8
	// Line 2412, Address: 0x29e75c, Func Offset: 0xc
	// Line 2411, Address: 0x29e760, Func Offset: 0x10
	// Line 2412, Address: 0x29e764, Func Offset: 0x14
	// Line 2411, Address: 0x29e768, Func Offset: 0x18
	// Line 2412, Address: 0x29e770, Func Offset: 0x20
	// Line 2413, Address: 0x29e7ec, Func Offset: 0x9c
	// Func End, Address: 0x29e804, Func Offset: 0xb4
}

// Process__19zNMEGoalDEVAnimViewFP11en_trantypefPv
// Start address: 0x29e810
int32 zNMEGoalDEVAnimView::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	// Line 2259, Address: 0x29e810, Func Offset: 0
	// Line 2263, Address: 0x29e81c, Func Offset: 0xc
	// Line 2267, Address: 0x29e828, Func Offset: 0x18
	// Line 2268, Address: 0x29e878, Func Offset: 0x68
	// Func End, Address: 0x29e888, Func Offset: 0x78
}

// Exit__19zNMEGoalDEVAnimViewFfPv
// Start address: 0x29e890
int32 zNMEGoalDEVAnimView::Exit()
{
	zNMECommon* npc;
	// Line 2251, Address: 0x29e890, Func Offset: 0
	// Line 2253, Address: 0x29e89c, Func Offset: 0xc
	// Line 2254, Address: 0x29e8a8, Func Offset: 0x18
	// Line 2255, Address: 0x29e8b0, Func Offset: 0x20
	// Line 2256, Address: 0x29e8dc, Func Offset: 0x4c
	// Func End, Address: 0x29e8ec, Func Offset: 0x5c
}

// Enter__19zNMEGoalDEVAnimViewFfPv
// Start address: 0x29e8f0
int32 zNMEGoalDEVAnimView::Enter()
{
	zNMECommon* npc;
	// Line 2234, Address: 0x29e8f0, Func Offset: 0
	// Line 2235, Address: 0x29e908, Func Offset: 0x18
	// Line 2240, Address: 0x29e918, Func Offset: 0x28
	// Line 2241, Address: 0x29e92c, Func Offset: 0x3c
	// Line 2242, Address: 0x29e958, Func Offset: 0x68
	// Line 2245, Address: 0x29e964, Func Offset: 0x74
	// Line 2247, Address: 0x29e984, Func Offset: 0x94
	// Line 2240, Address: 0x29e9d0, Func Offset: 0xe0
	// Line 2247, Address: 0x29e9d8, Func Offset: 0xe8
	// Line 2241, Address: 0x29e9dc, Func Offset: 0xec
	// Line 2242, Address: 0x29e9e0, Func Offset: 0xf0
	// Line 2247, Address: 0x29e9e4, Func Offset: 0xf4
	// Line 2241, Address: 0x29e9f4, Func Offset: 0x104
	// Line 2247, Address: 0x29e9f8, Func Offset: 0x108
	// Line 2241, Address: 0x29ea00, Func Offset: 0x110
	// Line 2247, Address: 0x29ea04, Func Offset: 0x114
	// Line 2248, Address: 0x29ea80, Func Offset: 0x190
	// Func End, Address: 0x29ea98, Func Offset: 0x1a8
}

// GoalHandleMail__13zNMEGoalLimboFP6NMEMsg
// Start address: 0x29eaa0
int32 zNMEGoalLimbo::GoalHandleMail(NMEMsg* mail)
{
	int32 handled;
	// Line 1971, Address: 0x29eaa0, Func Offset: 0
	// Line 1975, Address: 0x29eaa4, Func Offset: 0x4
	// Line 1971, Address: 0x29eaa8, Func Offset: 0x8
	// Line 1975, Address: 0x29eab0, Func Offset: 0x10
	// Line 1986, Address: 0x29eadc, Func Offset: 0x3c
	// Line 1988, Address: 0x29eae8, Func Offset: 0x48
	// Line 1999, Address: 0x29eaf4, Func Offset: 0x54
	// Line 2006, Address: 0x29eafc, Func Offset: 0x5c
	// Line 2028, Address: 0x29eb00, Func Offset: 0x60
	// Line 1998, Address: 0x29eb18, Func Offset: 0x78
	// Line 2029, Address: 0x29eb20, Func Offset: 0x80
	// Func End, Address: 0x29eb2c, Func Offset: 0x8c
}

// Enter__13zNMEGoalLimboFfPv
// Start address: 0x29eb30
int32 zNMEGoalLimbo::Enter()
{
	// Line 1963, Address: 0x29eb30, Func Offset: 0
	// Line 1965, Address: 0x29eb44, Func Offset: 0x14
	// Line 1967, Address: 0x29eb48, Func Offset: 0x18
	// Line 1968, Address: 0x29ec94, Func Offset: 0x164
	// Func End, Address: 0x29ecac, Func Offset: 0x17c
}

// SendDeathNotice__12zNMEGoalDeadFP10zNMECommon
// Start address: 0x29ecb0
void zNMEGoalDead::SendDeathNotice(zNMECommon* npc)
{
	zNMECommon* duper;
	// Line 1886, Address: 0x29ecb0, Func Offset: 0
	// Line 1891, Address: 0x29ecb4, Func Offset: 0x4
	// Line 1886, Address: 0x29ecb8, Func Offset: 0x8
	// Line 1891, Address: 0x29eccc, Func Offset: 0x1c
	// Line 1890, Address: 0x29ecd0, Func Offset: 0x20
	// Line 1891, Address: 0x29ecd4, Func Offset: 0x24
	// Line 1897, Address: 0x29ed08, Func Offset: 0x58
	// Line 1898, Address: 0x29ed10, Func Offset: 0x60
	// Line 1899, Address: 0x29ed24, Func Offset: 0x74
	// Line 1904, Address: 0x29ed2c, Func Offset: 0x7c
	// Line 1906, Address: 0x29ed34, Func Offset: 0x84
	// Line 1908, Address: 0x29ed4c, Func Offset: 0x9c
	// Line 1911, Address: 0x29ed64, Func Offset: 0xb4
	// Line 1912, Address: 0x29ed88, Func Offset: 0xd8
	// Line 1918, Address: 0x29ed90, Func Offset: 0xe0
	// Line 1920, Address: 0x29ed98, Func Offset: 0xe8
	// Line 1922, Address: 0x29edb0, Func Offset: 0x100
	// Line 1924, Address: 0x29edc8, Func Offset: 0x118
	// Line 1925, Address: 0x29edec, Func Offset: 0x13c
	// Line 1935, Address: 0x29edfc, Func Offset: 0x14c
	// Line 1938, Address: 0x29ee04, Func Offset: 0x154
	// Func End, Address: 0x29ee1c, Func Offset: 0x16c
}

// Process__15zNMEGoalWaitingFP11en_trantypefPv
// Start address: 0x29ee20
int32 zNMEGoalWaiting::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	// Line 1817, Address: 0x29ee20, Func Offset: 0
	// Line 1824, Address: 0x29ee24, Func Offset: 0x4
	// Line 1817, Address: 0x29ee28, Func Offset: 0x8
	// Line 1821, Address: 0x29ee2c, Func Offset: 0xc
	// Line 1817, Address: 0x29ee30, Func Offset: 0x10
	// Line 1821, Address: 0x29ee34, Func Offset: 0x14
	// Line 1824, Address: 0x29ee40, Func Offset: 0x20
	// Line 1825, Address: 0x29ee60, Func Offset: 0x40
	// Line 1826, Address: 0x29ee64, Func Offset: 0x44
	// Line 1828, Address: 0x29ee6c, Func Offset: 0x4c
	// Line 1832, Address: 0x29ee98, Func Offset: 0x78
	// Line 1834, Address: 0x29eec4, Func Offset: 0xa4
	// Line 1835, Address: 0x29ef14, Func Offset: 0xf4
	// Func End, Address: 0x29ef24, Func Offset: 0x104
}

// Exit__15zNMEGoalWaitingFfPv
// Start address: 0x29ef30
int32 zNMEGoalWaiting::Exit()
{
	zNMECommon* npc;
	// Line 1807, Address: 0x29ef30, Func Offset: 0
	// Line 1808, Address: 0x29ef3c, Func Offset: 0xc
	// Line 1811, Address: 0x29ef44, Func Offset: 0x14
	// Line 1814, Address: 0x29efb0, Func Offset: 0x80
	// Line 1813, Address: 0x29efb4, Func Offset: 0x84
	// Line 1814, Address: 0x29efb8, Func Offset: 0x88
	// Func End, Address: 0x29efc4, Func Offset: 0x94
}

// Resume__15zNMEGoalWaitingFfPv
// Start address: 0x29efd0
int32 zNMEGoalWaiting::Resume()
{
	zNMECommon* npc;
	// Line 1790, Address: 0x29efd0, Func Offset: 0
	// Line 1794, Address: 0x29efd4, Func Offset: 0x4
	// Line 1790, Address: 0x29efd8, Func Offset: 0x8
	// Line 1794, Address: 0x29efdc, Func Offset: 0xc
	// Line 1790, Address: 0x29efe0, Func Offset: 0x10
	// Line 1794, Address: 0x29efe4, Func Offset: 0x14
	// Line 1790, Address: 0x29efe8, Func Offset: 0x18
	// Line 1791, Address: 0x29eff0, Func Offset: 0x20
	// Line 1794, Address: 0x29eff4, Func Offset: 0x24
	// Line 1791, Address: 0x29eff8, Func Offset: 0x28
	// Line 1794, Address: 0x29effc, Func Offset: 0x2c
	// Line 1799, Address: 0x29f008, Func Offset: 0x38
	// Line 1803, Address: 0x29f00c, Func Offset: 0x3c
	// Line 1800, Address: 0x29f010, Func Offset: 0x40
	// Line 1803, Address: 0x29f014, Func Offset: 0x44
	// Line 1801, Address: 0x29f018, Func Offset: 0x48
	// Line 1803, Address: 0x29f01c, Func Offset: 0x4c
	// Line 1801, Address: 0x29f020, Func Offset: 0x50
	// Line 1803, Address: 0x29f028, Func Offset: 0x58
	// Line 1794, Address: 0x29f050, Func Offset: 0x80
	// Line 1803, Address: 0x29f05c, Func Offset: 0x8c
	// Line 1804, Address: 0x29f0b0, Func Offset: 0xe0
	// Func End, Address: 0x29f0c8, Func Offset: 0xf8
}

// Enter__15zNMEGoalWaitingFfPv
// Start address: 0x29f0d0
int32 zNMEGoalWaiting::Enter()
{
	zNMECommon* npc;
	zMovePoint* nav;
	// Line 1757, Address: 0x29f0d0, Func Offset: 0
	// Line 1758, Address: 0x29f0e4, Func Offset: 0x14
	// Line 1763, Address: 0x29f0e8, Func Offset: 0x18
	// Line 1758, Address: 0x29f0ec, Func Offset: 0x1c
	// Line 1763, Address: 0x29f0f0, Func Offset: 0x20
	// Line 1768, Address: 0x29f0fc, Func Offset: 0x2c
	// Line 1769, Address: 0x29f104, Func Offset: 0x34
	// Line 1770, Address: 0x29f128, Func Offset: 0x58
	// Line 1774, Address: 0x29f1a0, Func Offset: 0xd0
	// Line 1777, Address: 0x29f1a4, Func Offset: 0xd4
	// Line 1774, Address: 0x29f1ac, Func Offset: 0xdc
	// Line 1777, Address: 0x29f1c4, Func Offset: 0xf4
	// Line 1786, Address: 0x29f1e0, Func Offset: 0x110
	// Line 1782, Address: 0x29f1e4, Func Offset: 0x114
	// Line 1786, Address: 0x29f1e8, Func Offset: 0x118
	// Line 1783, Address: 0x29f1ec, Func Offset: 0x11c
	// Line 1786, Address: 0x29f1f0, Func Offset: 0x120
	// Line 1784, Address: 0x29f1f4, Func Offset: 0x124
	// Line 1786, Address: 0x29f200, Func Offset: 0x130
	// Line 1772, Address: 0x29f230, Func Offset: 0x160
	// Line 1786, Address: 0x29f238, Func Offset: 0x168
	// Line 1772, Address: 0x29f240, Func Offset: 0x170
	// Line 1786, Address: 0x29f2a4, Func Offset: 0x1d4
	// Line 1787, Address: 0x29f2f8, Func Offset: 0x228
	// Func End, Address: 0x29f310, Func Offset: 0x240
}

// CalcNewDir__14zNMEGoalWanderFP10zNMECommon
// Start address: 0x29f310
void zNMEGoalWander::CalcNewDir(zNMECommon* npc)
{
	xVec3 vec_plyr;
	float32 rad_half;
	// Line 1569, Address: 0x29f310, Func Offset: 0
	// Line 1575, Address: 0x29f314, Func Offset: 0x4
	// Line 1569, Address: 0x29f318, Func Offset: 0x8
	// Line 1575, Address: 0x29f31c, Func Offset: 0xc
	// Line 1569, Address: 0x29f320, Func Offset: 0x10
	// Line 1575, Address: 0x29f33c, Func Offset: 0x2c
	// Line 1569, Address: 0x29f340, Func Offset: 0x30
	// Line 1575, Address: 0x29f344, Func Offset: 0x34
	// Line 1585, Address: 0x29f360, Func Offset: 0x50
	// Line 1584, Address: 0x29f368, Func Offset: 0x58
	// Line 1585, Address: 0x29f370, Func Offset: 0x60
	// Line 1575, Address: 0x29f378, Func Offset: 0x68
	// Line 1584, Address: 0x29f37c, Func Offset: 0x6c
	// Line 1585, Address: 0x29f390, Func Offset: 0x80
	// Line 1587, Address: 0x29f3a4, Func Offset: 0x94
	// Line 1592, Address: 0x29f3b0, Func Offset: 0xa0
	// Line 1593, Address: 0x29f3b4, Func Offset: 0xa4
	// Line 1592, Address: 0x29f3bc, Func Offset: 0xac
	// Line 1593, Address: 0x29f3e4, Func Offset: 0xd4
	// Line 1592, Address: 0x29f3f4, Func Offset: 0xe4
	// Line 1593, Address: 0x29f3fc, Func Offset: 0xec
	// Line 1594, Address: 0x29f404, Func Offset: 0xf4
	// Line 1595, Address: 0x29f410, Func Offset: 0x100
	// Line 1596, Address: 0x29f46c, Func Offset: 0x15c
	// Line 1597, Address: 0x29f4a4, Func Offset: 0x194
	// Line 1599, Address: 0x29f4ac, Func Offset: 0x19c
	// Line 1604, Address: 0x29f4c4, Func Offset: 0x1b4
	// Line 1605, Address: 0x29f4d0, Func Offset: 0x1c0
	// Line 1610, Address: 0x29f4d8, Func Offset: 0x1c8
	// Line 1699, Address: 0x29f528, Func Offset: 0x218
	// Line 1618, Address: 0x29f534, Func Offset: 0x224
	// Line 1699, Address: 0x29f540, Func Offset: 0x230
	// Line 1620, Address: 0x29f54c, Func Offset: 0x23c
	// Line 1699, Address: 0x29f550, Func Offset: 0x240
	// Line 1694, Address: 0x29f560, Func Offset: 0x250
	// Line 1699, Address: 0x29f578, Func Offset: 0x268
	// Line 1696, Address: 0x29f58c, Func Offset: 0x27c
	// Line 1699, Address: 0x29f5a4, Func Offset: 0x294
	// Line 1696, Address: 0x29f5ac, Func Offset: 0x29c
	// Line 1700, Address: 0x29f5fc, Func Offset: 0x2ec
	// Func End, Address: 0x29f618, Func Offset: 0x308
}

// VerticalWander__14zNMEGoalWanderFP10zNMECommonfPC5xVec3
// Start address: 0x29f620
void zNMEGoalWander::VerticalWander(zNMECommon* npc, float32 spd_dt, xVec3* vec_dest)
{
	float32 rat_hyt;
	// Line 1503, Address: 0x29f620, Func Offset: 0
	// Line 1505, Address: 0x29f638, Func Offset: 0x18
	// Line 1511, Address: 0x29f650, Func Offset: 0x30
	// Line 1517, Address: 0x29f664, Func Offset: 0x44
	// Line 1526, Address: 0x29f680, Func Offset: 0x60
	// Line 1529, Address: 0x29f694, Func Offset: 0x74
	// Line 1537, Address: 0x29f6a0, Func Offset: 0x80
	// Line 1539, Address: 0x29f6d0, Func Offset: 0xb0
	// Line 1542, Address: 0x29f708, Func Offset: 0xe8
	// Line 1543, Address: 0x29f718, Func Offset: 0xf8
	// Line 1542, Address: 0x29f724, Func Offset: 0x104
	// Line 1543, Address: 0x29f728, Func Offset: 0x108
	// Line 1542, Address: 0x29f72c, Func Offset: 0x10c
	// Line 1543, Address: 0x29f744, Func Offset: 0x124
	// Line 1547, Address: 0x29f768, Func Offset: 0x148
	// Line 1506, Address: 0x29f770, Func Offset: 0x150
	// Line 1547, Address: 0x29f77c, Func Offset: 0x15c
	// Line 1515, Address: 0x29f780, Func Offset: 0x160
	// Line 1547, Address: 0x29f784, Func Offset: 0x164
	// Line 1513, Address: 0x29f78c, Func Offset: 0x16c
	// Line 1547, Address: 0x29f794, Func Offset: 0x174
	// Line 1515, Address: 0x29f79c, Func Offset: 0x17c
	// Line 1547, Address: 0x29f7a0, Func Offset: 0x180
	// Line 1515, Address: 0x29f7a8, Func Offset: 0x188
	// Line 1516, Address: 0x29f7ac, Func Offset: 0x18c
	// Line 1547, Address: 0x29f7b4, Func Offset: 0x194
	// Line 1521, Address: 0x29f7b8, Func Offset: 0x198
	// Line 1547, Address: 0x29f7bc, Func Offset: 0x19c
	// Line 1519, Address: 0x29f7c4, Func Offset: 0x1a4
	// Line 1547, Address: 0x29f7cc, Func Offset: 0x1ac
	// Line 1521, Address: 0x29f7d4, Func Offset: 0x1b4
	// Line 1547, Address: 0x29f7d8, Func Offset: 0x1b8
	// Line 1521, Address: 0x29f7e0, Func Offset: 0x1c0
	// Line 1522, Address: 0x29f7e4, Func Offset: 0x1c4
	// Line 1547, Address: 0x29f80c, Func Offset: 0x1ec
	// Line 1531, Address: 0x29f814, Func Offset: 0x1f4
	// Line 1547, Address: 0x29f820, Func Offset: 0x200
	// Line 1531, Address: 0x29f824, Func Offset: 0x204
	// Line 1547, Address: 0x29f828, Func Offset: 0x208
	// Line 1531, Address: 0x29f830, Func Offset: 0x210
	// Line 1547, Address: 0x29f83c, Func Offset: 0x21c
	// Line 1534, Address: 0x29f844, Func Offset: 0x224
	// Line 1547, Address: 0x29f848, Func Offset: 0x228
	// Line 1534, Address: 0x29f84c, Func Offset: 0x22c
	// Line 1547, Address: 0x29f850, Func Offset: 0x230
	// Line 1535, Address: 0x29f854, Func Offset: 0x234
	// Line 1547, Address: 0x29f860, Func Offset: 0x240
	// Line 1535, Address: 0x29f864, Func Offset: 0x244
	// Line 1534, Address: 0x29f868, Func Offset: 0x248
	// Line 1547, Address: 0x29f878, Func Offset: 0x258
	// Line 1534, Address: 0x29f87c, Func Offset: 0x25c
	// Line 1547, Address: 0x29f880, Func Offset: 0x260
	// Line 1535, Address: 0x29f88c, Func Offset: 0x26c
	// Line 1547, Address: 0x29f894, Func Offset: 0x274
	// Line 1535, Address: 0x29f89c, Func Offset: 0x27c
	// Line 1536, Address: 0x29f8a0, Func Offset: 0x280
	// Line 1531, Address: 0x29f8a8, Func Offset: 0x288
	// Line 1547, Address: 0x29f8ac, Func Offset: 0x28c
	// Line 1531, Address: 0x29f8b4, Func Offset: 0x294
	// Line 1547, Address: 0x29f8c0, Func Offset: 0x2a0
	// Line 1531, Address: 0x29f8c8, Func Offset: 0x2a8
	// Line 1547, Address: 0x29f8d0, Func Offset: 0x2b0
	// Line 1531, Address: 0x29f8d4, Func Offset: 0x2b4
	// Line 1547, Address: 0x29f8d8, Func Offset: 0x2b8
	// Line 1531, Address: 0x29f8e8, Func Offset: 0x2c8
	// Line 1547, Address: 0x29f8ec, Func Offset: 0x2cc
	// Line 1531, Address: 0x29f8f4, Func Offset: 0x2d4
	// Line 1539, Address: 0x29f8fc, Func Offset: 0x2dc
	// Line 1547, Address: 0x29f900, Func Offset: 0x2e0
	// Line 1539, Address: 0x29f908, Func Offset: 0x2e8
	// Line 1547, Address: 0x29f914, Func Offset: 0x2f4
	// Line 1539, Address: 0x29f91c, Func Offset: 0x2fc
	// Line 1547, Address: 0x29f924, Func Offset: 0x304
	// Line 1539, Address: 0x29f928, Func Offset: 0x308
	// Line 1547, Address: 0x29f92c, Func Offset: 0x30c
	// Line 1539, Address: 0x29f93c, Func Offset: 0x31c
	// Line 1547, Address: 0x29f940, Func Offset: 0x320
	// Line 1539, Address: 0x29f948, Func Offset: 0x328
	// Line 1548, Address: 0x29f950, Func Offset: 0x330
	// Func End, Address: 0x29f968, Func Offset: 0x348
}

// Process__14zNMEGoalWanderFP11en_trantypefPv
// Start address: 0x29f970
int32 zNMEGoalWander::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	zNMECommon* npc;
	zMovePoint* nav;
	zMovePoint* mvpt;
	float32 rate;
	xVec3 delta;
	xVec3 vec_dest;
	float32 rate;
	// Line 1380, Address: 0x29f970, Func Offset: 0
	// Line 1388, Address: 0x29f974, Func Offset: 0x4
	// Line 1380, Address: 0x29f978, Func Offset: 0x8
	// Line 1388, Address: 0x29f97c, Func Offset: 0xc
	// Line 1380, Address: 0x29f980, Func Offset: 0x10
	// Line 1381, Address: 0x29f9a0, Func Offset: 0x30
	// Line 1388, Address: 0x29f9b4, Func Offset: 0x44
	// Line 1389, Address: 0x29f9d0, Func Offset: 0x60
	// Line 1388, Address: 0x29f9d4, Func Offset: 0x64
	// Line 1389, Address: 0x29f9d8, Func Offset: 0x68
	// Line 1392, Address: 0x29f9fc, Func Offset: 0x8c
	// Line 1404, Address: 0x29fa20, Func Offset: 0xb0
	// Line 1406, Address: 0x29fa4c, Func Offset: 0xdc
	// Line 1407, Address: 0x29fa50, Func Offset: 0xe0
	// Line 1409, Address: 0x29fa58, Func Offset: 0xe8
	// Line 1416, Address: 0x29fa64, Func Offset: 0xf4
	// Line 1417, Address: 0x29fa74, Func Offset: 0x104
	// Line 1418, Address: 0x29fa80, Func Offset: 0x110
	// Line 1427, Address: 0x29fa8c, Func Offset: 0x11c
	// Line 1431, Address: 0x29fab4, Func Offset: 0x144
	// Line 1408, Address: 0x29fad0, Func Offset: 0x160
	// Line 1444, Address: 0x29fadc, Func Offset: 0x16c
	// Line 1445, Address: 0x29faf4, Func Offset: 0x184
	// Line 1448, Address: 0x29fb70, Func Offset: 0x200
	// Line 1449, Address: 0x29fb78, Func Offset: 0x208
	// Line 1448, Address: 0x29fb7c, Func Offset: 0x20c
	// Line 1447, Address: 0x29fb84, Func Offset: 0x214
	// Line 1448, Address: 0x29fb88, Func Offset: 0x218
	// Line 1470, Address: 0x29fb90, Func Offset: 0x220
	// Line 1449, Address: 0x29fb94, Func Offset: 0x224
	// Line 1448, Address: 0x29fb98, Func Offset: 0x228
	// Line 1449, Address: 0x29fba8, Func Offset: 0x238
	// Line 1448, Address: 0x29fbac, Func Offset: 0x23c
	// Line 1449, Address: 0x29fbdc, Func Offset: 0x26c
	// Line 1448, Address: 0x29fbe0, Func Offset: 0x270
	// Line 1449, Address: 0x29fbec, Func Offset: 0x27c
	// Line 1448, Address: 0x29fbfc, Func Offset: 0x28c
	// Line 1449, Address: 0x29fc00, Func Offset: 0x290
	// Line 1470, Address: 0x29fc24, Func Offset: 0x2b4
	// Line 1472, Address: 0x29fc30, Func Offset: 0x2c0
	// Line 1474, Address: 0x29fc40, Func Offset: 0x2d0
	// Line 1475, Address: 0x29fc90, Func Offset: 0x320
	// Line 1477, Address: 0x29fc94, Func Offset: 0x324
	// Line 1474, Address: 0x29fc98, Func Offset: 0x328
	// Line 1477, Address: 0x29fc9c, Func Offset: 0x32c
	// Line 1480, Address: 0x29fcac, Func Offset: 0x33c
	// Line 1482, Address: 0x29fcc8, Func Offset: 0x358
	// Line 1478, Address: 0x29fcf0, Func Offset: 0x380
	// Line 1482, Address: 0x29fcf4, Func Offset: 0x384
	// Line 1490, Address: 0x29fcfc, Func Offset: 0x38c
	// Line 1491, Address: 0x29fd58, Func Offset: 0x3e8
	// Func End, Address: 0x29fd7c, Func Offset: 0x40c
}

// Enter__14zNMEGoalWanderFfPv
// Start address: 0x29fd80
int32 zNMEGoalWander::Enter()
{
	zNMECommon* npc;
	xVec3 vec;
	zMovePoint* nav;
	// Line 1286, Address: 0x29fd80, Func Offset: 0
	// Line 1289, Address: 0x29fd88, Func Offset: 0x8
	// Line 1286, Address: 0x29fd8c, Func Offset: 0xc
	// Line 1287, Address: 0x29fd9c, Func Offset: 0x1c
	// Line 1289, Address: 0x29fda4, Func Offset: 0x24
	// Line 1305, Address: 0x29fdc8, Func Offset: 0x48
	// Line 1308, Address: 0x29fdd0, Func Offset: 0x50
	// Line 1312, Address: 0x29fdd4, Func Offset: 0x54
	// Line 1313, Address: 0x29fddc, Func Offset: 0x5c
	// Line 1314, Address: 0x29fdf8, Func Offset: 0x78
	// Line 1315, Address: 0x29fe04, Func Offset: 0x84
	// Line 1327, Address: 0x29fe14, Func Offset: 0x94
	// Line 1328, Address: 0x29fe3c, Func Offset: 0xbc
	// Line 1327, Address: 0x29fe40, Func Offset: 0xc0
	// Line 1328, Address: 0x29fe44, Func Offset: 0xc4
	// Line 1339, Address: 0x29fe68, Func Offset: 0xe8
	// Line 1375, Address: 0x29fe70, Func Offset: 0xf0
	// Line 1376, Address: 0x29ff1c, Func Offset: 0x19c
	// Func End, Address: 0x29ff34, Func Offset: 0x1b4
}

// Exit__14zNMEGoalFidgetFfPv
// Start address: 0x29ff40
int32 zNMEGoalFidget::Exit()
{
	zNMECommon* npc;
	// Line 1271, Address: 0x29ff40, Func Offset: 0
	// Line 1272, Address: 0x29ff54, Func Offset: 0x14
	// Line 1275, Address: 0x29ff5c, Func Offset: 0x1c
	// Line 1277, Address: 0x29ffc8, Func Offset: 0x88
	// Line 1278, Address: 0x29ffd0, Func Offset: 0x90
	// Func End, Address: 0x29ffe4, Func Offset: 0xa4
}

// Enter__14zNMEGoalFidgetFfPv
// Start address: 0x29fff0
int32 zNMEGoalFidget::Enter()
{
	// Line 1250, Address: 0x29fff0, Func Offset: 0
	// Line 1267, Address: 0x29fff4, Func Offset: 0x4
	// Line 1250, Address: 0x29fff8, Func Offset: 0x8
	// Line 1267, Address: 0x29fffc, Func Offset: 0xc
	// Line 1250, Address: 0x2a0000, Func Offset: 0x10
	// Line 1267, Address: 0x2a0004, Func Offset: 0x14
	// Line 1250, Address: 0x2a0008, Func Offset: 0x18
	// Line 1267, Address: 0x2a000c, Func Offset: 0x1c
	// Line 1250, Address: 0x2a0010, Func Offset: 0x20
	// Line 1267, Address: 0x2a0014, Func Offset: 0x24
	// Line 1253, Address: 0x2a0018, Func Offset: 0x28
	// Line 1267, Address: 0x2a0024, Func Offset: 0x34
	// Line 1268, Address: 0x2a00ac, Func Offset: 0xbc
	// Func End, Address: 0x2a00c4, Func Offset: 0xd4
}

// MoveAutoSmooth__14zNMEGoalPatrolFP10zNMECommonf
// Start address: 0x2a00d0
void zNMEGoalPatrol::MoveAutoSmooth(zNMECommon* npc, float32 dt)
{
	zNMENavNet* navnet;
	xVec3 vec_dest;
	xVec3 dir_dest;
	xVec3 delta;
	// Line 1086, Address: 0x2a00d0, Func Offset: 0
	// Line 1087, Address: 0x2a00f0, Func Offset: 0x20
	// Line 1090, Address: 0x2a00f4, Func Offset: 0x24
	// Line 1109, Address: 0x2a0118, Func Offset: 0x48
	// Line 1121, Address: 0x2a0128, Func Offset: 0x58
	// Line 1123, Address: 0x2a012c, Func Offset: 0x5c
	// Line 1121, Address: 0x2a013c, Func Offset: 0x6c
	// Line 1123, Address: 0x2a0144, Func Offset: 0x74
	// Line 1121, Address: 0x2a0148, Func Offset: 0x78
	// Line 1123, Address: 0x2a0158, Func Offset: 0x88
	// Line 1121, Address: 0x2a015c, Func Offset: 0x8c
	// Line 1123, Address: 0x2a0160, Func Offset: 0x90
	// Line 1121, Address: 0x2a0164, Func Offset: 0x94
	// Line 1123, Address: 0x2a0168, Func Offset: 0x98
	// Line 1124, Address: 0x2a0180, Func Offset: 0xb0
	// Line 1130, Address: 0x2a018c, Func Offset: 0xbc
	// Line 1131, Address: 0x2a01c4, Func Offset: 0xf4
	// Line 1133, Address: 0x2a01e0, Func Offset: 0x110
	// Line 1137, Address: 0x2a01ec, Func Offset: 0x11c
	// Line 1138, Address: 0x2a01f4, Func Offset: 0x124
	// Line 1140, Address: 0x2a0200, Func Offset: 0x130
	// Line 1143, Address: 0x2a0204, Func Offset: 0x134
	// Line 1140, Address: 0x2a0208, Func Offset: 0x138
	// Line 1143, Address: 0x2a0228, Func Offset: 0x158
	// Line 1148, Address: 0x2a0234, Func Offset: 0x164
	// Line 1181, Address: 0x2a0240, Func Offset: 0x170
	// Line 1092, Address: 0x2a024c, Func Offset: 0x17c
	// Line 1093, Address: 0x2a0250, Func Offset: 0x180
	// Line 1092, Address: 0x2a025c, Func Offset: 0x18c
	// Line 1181, Address: 0x2a0260, Func Offset: 0x190
	// Line 1094, Address: 0x2a0268, Func Offset: 0x198
	// Line 1181, Address: 0x2a0270, Func Offset: 0x1a0
	// Line 1145, Address: 0x2a0294, Func Offset: 0x1c4
	// Line 1146, Address: 0x2a0298, Func Offset: 0x1c8
	// Line 1156, Address: 0x2a02a0, Func Offset: 0x1d0
	// Line 1181, Address: 0x2a02a4, Func Offset: 0x1d4
	// Line 1156, Address: 0x2a02a8, Func Offset: 0x1d8
	// Line 1181, Address: 0x2a02ac, Func Offset: 0x1dc
	// Line 1156, Address: 0x2a02b8, Func Offset: 0x1e8
	// Line 1169, Address: 0x2a02bc, Func Offset: 0x1ec
	// Line 1181, Address: 0x2a02c4, Func Offset: 0x1f4
	// Line 1169, Address: 0x2a02ec, Func Offset: 0x21c
	// Line 1181, Address: 0x2a02f0, Func Offset: 0x220
	// Line 1156, Address: 0x2a02fc, Func Offset: 0x22c
	// Line 1181, Address: 0x2a0308, Func Offset: 0x238
	// Line 1169, Address: 0x2a035c, Func Offset: 0x28c
	// Line 1181, Address: 0x2a0374, Func Offset: 0x2a4
	// Line 1171, Address: 0x2a037c, Func Offset: 0x2ac
	// Line 1181, Address: 0x2a038c, Func Offset: 0x2bc
	// Line 1172, Address: 0x2a0394, Func Offset: 0x2c4
	// Line 1174, Address: 0x2a039c, Func Offset: 0x2cc
	// Line 1181, Address: 0x2a03a8, Func Offset: 0x2d8
	// Line 1177, Address: 0x2a03fc, Func Offset: 0x32c
	// Line 1181, Address: 0x2a0400, Func Offset: 0x330
	// Line 1177, Address: 0x2a0408, Func Offset: 0x338
	// Line 1181, Address: 0x2a040c, Func Offset: 0x33c
	// Line 1177, Address: 0x2a0414, Func Offset: 0x344
	// Line 1181, Address: 0x2a0418, Func Offset: 0x348
	// Line 1178, Address: 0x2a0440, Func Offset: 0x370
	// Line 1181, Address: 0x2a0444, Func Offset: 0x374
	// Line 1178, Address: 0x2a045c, Func Offset: 0x38c
	// Line 1181, Address: 0x2a0460, Func Offset: 0x390
	// Line 1178, Address: 0x2a0470, Func Offset: 0x3a0
	// Line 1182, Address: 0x2a047c, Func Offset: 0x3ac
	// Func End, Address: 0x2a0498, Func Offset: 0x3c8
}

// CalcSmoothPoints__14zNMEGoalPatrolFP10zNMECommon
// Start address: 0x2a04a0
void zNMEGoalPatrol::CalcSmoothPoints(zNMECommon* npc)
{
	zNMENavNet* navnet;
	xVec3* refbase[4];
	xVec3* refmid[4];
	// Line 1040, Address: 0x2a04a0, Func Offset: 0
	// Line 1061, Address: 0x2a04a8, Func Offset: 0x8
	// Line 1040, Address: 0x2a04ac, Func Offset: 0xc
	// Line 1061, Address: 0x2a04b0, Func Offset: 0x10
	// Line 1041, Address: 0x2a04b4, Func Offset: 0x14
	// Line 1049, Address: 0x2a04b8, Func Offset: 0x18
	// Line 1062, Address: 0x2a04c0, Func Offset: 0x20
	// Line 1061, Address: 0x2a04c4, Func Offset: 0x24
	// Line 1049, Address: 0x2a04cc, Func Offset: 0x2c
	// Line 1050, Address: 0x2a04d8, Func Offset: 0x38
	// Line 1051, Address: 0x2a04e4, Func Offset: 0x44
	// Line 1052, Address: 0x2a04f0, Func Offset: 0x50
	// Line 1061, Address: 0x2a04fc, Func Offset: 0x5c
	// Line 1062, Address: 0x2a0504, Func Offset: 0x64
	// Line 1061, Address: 0x2a0508, Func Offset: 0x68
	// Line 1062, Address: 0x2a0510, Func Offset: 0x70
	// Line 1061, Address: 0x2a0514, Func Offset: 0x74
	// Line 1062, Address: 0x2a0520, Func Offset: 0x80
	// Line 1061, Address: 0x2a0524, Func Offset: 0x84
	// Line 1062, Address: 0x2a0528, Func Offset: 0x88
	// Line 1061, Address: 0x2a052c, Func Offset: 0x8c
	// Line 1062, Address: 0x2a0538, Func Offset: 0x98
	// Line 1061, Address: 0x2a0544, Func Offset: 0xa4
	// Line 1062, Address: 0x2a054c, Func Offset: 0xac
	// Line 1061, Address: 0x2a0550, Func Offset: 0xb0
	// Line 1064, Address: 0x2a0558, Func Offset: 0xb8
	// Line 1062, Address: 0x2a0560, Func Offset: 0xc0
	// Line 1064, Address: 0x2a0564, Func Offset: 0xc4
	// Line 1061, Address: 0x2a056c, Func Offset: 0xcc
	// Line 1062, Address: 0x2a0570, Func Offset: 0xd0
	// Line 1064, Address: 0x2a0574, Func Offset: 0xd4
	// Line 1069, Address: 0x2a057c, Func Offset: 0xdc
	// Line 1076, Address: 0x2a0588, Func Offset: 0xe8
	// Line 1069, Address: 0x2a058c, Func Offset: 0xec
	// Line 1076, Address: 0x2a05a0, Func Offset: 0x100
	// Line 1079, Address: 0x2a05a8, Func Offset: 0x108
	// Line 1082, Address: 0x2a05b8, Func Offset: 0x118
	// Line 1083, Address: 0x2a05c8, Func Offset: 0x128
	// Func End, Address: 0x2a05d8, Func Offset: 0x138
}

// Chk_AutoSmooth__14zNMEGoalPatrolFP10zNMECommon
// Start address: 0x2a05e0
void zNMEGoalPatrol::Chk_AutoSmooth(zNMECommon* npc)
{
	zNMENavNet* navnet;
	int8 @13022;
	float32 ds2_min;
	// Line 1018, Address: 0x2a05e0, Func Offset: 0
	// Line 1019, Address: 0x2a05e4, Func Offset: 0x4
	// Line 1021, Address: 0x2a05e8, Func Offset: 0x8
	// Line 1024, Address: 0x2a060c, Func Offset: 0x2c
	// Line 1028, Address: 0x2a0638, Func Offset: 0x58
	// Line 1029, Address: 0x2a0644, Func Offset: 0x64
	// Line 1030, Address: 0x2a0650, Func Offset: 0x70
	// Line 1029, Address: 0x2a0658, Func Offset: 0x78
	// Line 1030, Address: 0x2a065c, Func Offset: 0x7c
	// Line 1029, Address: 0x2a0660, Func Offset: 0x80
	// Line 1030, Address: 0x2a0684, Func Offset: 0xa4
	// Line 1029, Address: 0x2a0688, Func Offset: 0xa8
	// Line 1030, Address: 0x2a068c, Func Offset: 0xac
	// Line 1031, Address: 0x2a069c, Func Offset: 0xbc
	// Line 1036, Address: 0x2a06a8, Func Offset: 0xc8
	// Line 1028, Address: 0x2a06b0, Func Offset: 0xd0
	// Line 1036, Address: 0x2a06b4, Func Offset: 0xd4
	// Line 1028, Address: 0x2a06bc, Func Offset: 0xdc
	// Line 1037, Address: 0x2a06c8, Func Offset: 0xe8
	// Func End, Address: 0x2a06d4, Func Offset: 0xf4
}

// MoveSpline__14zNMEGoalPatrolFP10zNMECommonf
// Start address: 0x2a06e0
void zNMEGoalPatrol::MoveSpline(zNMECommon* npc, float32 dt)
{
	zNMENavNet* navnet;
	xSpline3* spl;
	float32 newdist;
	xVec3 tgt;
	float32 u;
	xVec3 dir;
	float32 qdot;
	// Line 920, Address: 0x2a06e0, Func Offset: 0
	// Line 921, Address: 0x2a0704, Func Offset: 0x24
	// Line 922, Address: 0x2a0708, Func Offset: 0x28
	// Line 925, Address: 0x2a070c, Func Offset: 0x2c
	// Line 935, Address: 0x2a0714, Func Offset: 0x34
	// Line 937, Address: 0x2a07f8, Func Offset: 0x118
	// Line 938, Address: 0x2a081c, Func Offset: 0x13c
	// Line 948, Address: 0x2a0824, Func Offset: 0x144
	// Line 958, Address: 0x2a082c, Func Offset: 0x14c
	// Line 948, Address: 0x2a0830, Func Offset: 0x150
	// Line 958, Address: 0x2a0840, Func Offset: 0x160
	// Line 961, Address: 0x2a084c, Func Offset: 0x16c
	// Line 962, Address: 0x2a0850, Func Offset: 0x170
	// Line 961, Address: 0x2a0854, Func Offset: 0x174
	// Line 962, Address: 0x2a0858, Func Offset: 0x178
	// Line 961, Address: 0x2a085c, Func Offset: 0x17c
	// Line 962, Address: 0x2a0864, Func Offset: 0x184
	// Line 963, Address: 0x2a086c, Func Offset: 0x18c
	// Line 965, Address: 0x2a0878, Func Offset: 0x198
	// Line 968, Address: 0x2a087c, Func Offset: 0x19c
	// Line 965, Address: 0x2a0880, Func Offset: 0x1a0
	// Line 968, Address: 0x2a089c, Func Offset: 0x1bc
	// Line 970, Address: 0x2a08a4, Func Offset: 0x1c4
	// Line 928, Address: 0x2a08b4, Func Offset: 0x1d4
	// Line 976, Address: 0x2a08bc, Func Offset: 0x1dc
	// Line 980, Address: 0x2a08d4, Func Offset: 0x1f4
	// Line 984, Address: 0x2a08ec, Func Offset: 0x20c
	// Line 980, Address: 0x2a08f0, Func Offset: 0x210
	// Line 984, Address: 0x2a08f4, Func Offset: 0x214
	// Line 980, Address: 0x2a08f8, Func Offset: 0x218
	// Line 984, Address: 0x2a08fc, Func Offset: 0x21c
	// Line 985, Address: 0x2a0918, Func Offset: 0x238
	// Line 986, Address: 0x2a0948, Func Offset: 0x268
	// Line 987, Address: 0x2a0958, Func Offset: 0x278
	// Line 991, Address: 0x2a0968, Func Offset: 0x288
	// Line 996, Address: 0x2a0980, Func Offset: 0x2a0
	// Line 997, Address: 0x2a09a0, Func Offset: 0x2c0
	// Line 996, Address: 0x2a09a4, Func Offset: 0x2c4
	// Line 997, Address: 0x2a09a8, Func Offset: 0x2c8
	// Line 998, Address: 0x2a09bc, Func Offset: 0x2dc
	// Line 997, Address: 0x2a09c0, Func Offset: 0x2e0
	// Line 998, Address: 0x2a09c4, Func Offset: 0x2e4
	// Line 999, Address: 0x2a09d4, Func Offset: 0x2f4
	// Line 1000, Address: 0x2a09e8, Func Offset: 0x308
	// Line 999, Address: 0x2a09ec, Func Offset: 0x30c
	// Line 1000, Address: 0x2a09f0, Func Offset: 0x310
	// Line 1003, Address: 0x2a0a00, Func Offset: 0x320
	// Line 1007, Address: 0x2a0a04, Func Offset: 0x324
	// Func End, Address: 0x2a0a28, Func Offset: 0x348
}

// MoveNormal__14zNMEGoalPatrolFP10zNMECommonf
// Start address: 0x2a0a30
void zNMEGoalPatrol::MoveNormal(zNMECommon* npc, float32 dt)
{
	xVec3 dir_dest;
	xVec3 delta;
	// Line 862, Address: 0x2a0a30, Func Offset: 0
	// Line 876, Address: 0x2a0a44, Func Offset: 0x14
	// Line 862, Address: 0x2a0a48, Func Offset: 0x18
	// Line 876, Address: 0x2a0a4c, Func Offset: 0x1c
	// Line 875, Address: 0x2a0a50, Func Offset: 0x20
	// Line 876, Address: 0x2a0a54, Func Offset: 0x24
	// Line 875, Address: 0x2a0a58, Func Offset: 0x28
	// Line 876, Address: 0x2a0a5c, Func Offset: 0x2c
	// Line 875, Address: 0x2a0a60, Func Offset: 0x30
	// Line 876, Address: 0x2a0a64, Func Offset: 0x34
	// Line 875, Address: 0x2a0a68, Func Offset: 0x38
	// Line 876, Address: 0x2a0a74, Func Offset: 0x44
	// Line 877, Address: 0x2a0a94, Func Offset: 0x64
	// Line 881, Address: 0x2a0aa8, Func Offset: 0x78
	// Line 883, Address: 0x2a0adc, Func Offset: 0xac
	// Line 884, Address: 0x2a0af4, Func Offset: 0xc4
	// Line 889, Address: 0x2a0b00, Func Offset: 0xd0
	// Line 890, Address: 0x2a0b10, Func Offset: 0xe0
	// Line 892, Address: 0x2a0b1c, Func Offset: 0xec
	// Line 896, Address: 0x2a0b20, Func Offset: 0xf0
	// Line 892, Address: 0x2a0b24, Func Offset: 0xf4
	// Line 896, Address: 0x2a0b40, Func Offset: 0x110
	// Line 914, Address: 0x2a0b48, Func Offset: 0x118
	// Line 909, Address: 0x2a0b58, Func Offset: 0x128
	// Line 902, Address: 0x2a0b5c, Func Offset: 0x12c
	// Line 909, Address: 0x2a0b60, Func Offset: 0x130
	// Line 914, Address: 0x2a0b68, Func Offset: 0x138
	// Line 902, Address: 0x2a0b6c, Func Offset: 0x13c
	// Line 914, Address: 0x2a0b74, Func Offset: 0x144
	// Line 902, Address: 0x2a0b80, Func Offset: 0x150
	// Line 914, Address: 0x2a0b88, Func Offset: 0x158
	// Line 910, Address: 0x2a0be0, Func Offset: 0x1b0
	// Line 914, Address: 0x2a0be4, Func Offset: 0x1b4
	// Line 910, Address: 0x2a0bec, Func Offset: 0x1bc
	// Line 914, Address: 0x2a0bf0, Func Offset: 0x1c0
	// Line 910, Address: 0x2a0bf8, Func Offset: 0x1c8
	// Line 914, Address: 0x2a0bfc, Func Offset: 0x1cc
	// Line 911, Address: 0x2a0c24, Func Offset: 0x1f4
	// Line 914, Address: 0x2a0c28, Func Offset: 0x1f8
	// Line 911, Address: 0x2a0c40, Func Offset: 0x210
	// Line 914, Address: 0x2a0c44, Func Offset: 0x214
	// Line 911, Address: 0x2a0c54, Func Offset: 0x224
	// Line 915, Address: 0x2a0c60, Func Offset: 0x230
	// Func End, Address: 0x2a0c78, Func Offset: 0x248
}

// DoOnArriveStuff__14zNMEGoalPatrolFP10zNMECommon
// Start address: 0x2a0c80
void zNMEGoalPatrol::DoOnArriveStuff(zNMECommon* npc)
{
	zNMENavNet* navnet;
	// Line 786, Address: 0x2a0c80, Func Offset: 0
	// Line 787, Address: 0x2a0c98, Func Offset: 0x18
	// Line 791, Address: 0x2a0ca0, Func Offset: 0x20
	// Line 792, Address: 0x2a0ca8, Func Offset: 0x28
	// Line 796, Address: 0x2a0cc8, Func Offset: 0x48
	// Line 797, Address: 0x2a0ccc, Func Offset: 0x4c
	// Line 798, Address: 0x2a0cd0, Func Offset: 0x50
	// Line 796, Address: 0x2a0cd4, Func Offset: 0x54
	// Line 797, Address: 0x2a0cdc, Func Offset: 0x5c
	// Line 798, Address: 0x2a0ce4, Func Offset: 0x64
	// Line 801, Address: 0x2a0cf0, Func Offset: 0x70
	// Line 803, Address: 0x2a0d2c, Func Offset: 0xac
	// Line 805, Address: 0x2a0d30, Func Offset: 0xb0
	// Line 804, Address: 0x2a0d34, Func Offset: 0xb4
	// Line 805, Address: 0x2a0d38, Func Offset: 0xb8
	// Line 804, Address: 0x2a0d3c, Func Offset: 0xbc
	// Line 805, Address: 0x2a0d44, Func Offset: 0xc4
	// Line 810, Address: 0x2a0d90, Func Offset: 0x110
	// Line 808, Address: 0x2a0d98, Func Offset: 0x118
	// Line 810, Address: 0x2a0d9c, Func Offset: 0x11c
	// Line 811, Address: 0x2a0dac, Func Offset: 0x12c
	// Func End, Address: 0x2a0dc4, Func Offset: 0x144
}

// Process__14zNMEGoalPatrolFP11en_trantypefPv
// Start address: 0x2a0dd0
int32 zNMEGoalPatrol::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	zNMECommon* npc;
	zNMENavNet* navnet;
	int32 nextgoal;
	// Line 715, Address: 0x2a0dd0, Func Offset: 0
	// Line 716, Address: 0x2a0e00, Func Offset: 0x30
	// Line 718, Address: 0x2a0e0c, Func Offset: 0x3c
	// Line 721, Address: 0x2a0e18, Func Offset: 0x48
	// Line 722, Address: 0x2a0e24, Func Offset: 0x54
	// Line 725, Address: 0x2a0e28, Func Offset: 0x58
	// Line 722, Address: 0x2a0e2c, Func Offset: 0x5c
	// Line 725, Address: 0x2a0e30, Func Offset: 0x60
	// Line 726, Address: 0x2a0e54, Func Offset: 0x84
	// Line 731, Address: 0x2a0e78, Func Offset: 0xa8
	// Line 732, Address: 0x2a0e7c, Func Offset: 0xac
	// Line 736, Address: 0x2a0e9c, Func Offset: 0xcc
	// Line 739, Address: 0x2a0ea4, Func Offset: 0xd4
	// Line 740, Address: 0x2a0eb4, Func Offset: 0xe4
	// Line 750, Address: 0x2a0edc, Func Offset: 0x10c
	// Line 751, Address: 0x2a0eec, Func Offset: 0x11c
	// Line 752, Address: 0x2a0ef4, Func Offset: 0x124
	// Line 753, Address: 0x2a0f50, Func Offset: 0x180
	// Line 757, Address: 0x2a0f5c, Func Offset: 0x18c
	// Line 766, Address: 0x2a0f6c, Func Offset: 0x19c
	// Line 767, Address: 0x2a0f7c, Func Offset: 0x1ac
	// Line 769, Address: 0x2a0f84, Func Offset: 0x1b4
	// Line 772, Address: 0x2a1004, Func Offset: 0x234
	// Line 773, Address: 0x2a1014, Func Offset: 0x244
	// Line 775, Address: 0x2a1024, Func Offset: 0x254
	// Line 777, Address: 0x2a1030, Func Offset: 0x260
	// Line 778, Address: 0x2a103c, Func Offset: 0x26c
	// Line 737, Address: 0x2a1054, Func Offset: 0x284
	// Line 778, Address: 0x2a1060, Func Offset: 0x290
	// Line 743, Address: 0x2a1064, Func Offset: 0x294
	// Line 744, Address: 0x2a1068, Func Offset: 0x298
	// Line 743, Address: 0x2a1070, Func Offset: 0x2a0
	// Line 778, Address: 0x2a1074, Func Offset: 0x2a4
	// Line 744, Address: 0x2a1094, Func Offset: 0x2c4
	// Line 778, Address: 0x2a1098, Func Offset: 0x2c8
	// Line 744, Address: 0x2a10a0, Func Offset: 0x2d0
	// Line 778, Address: 0x2a10a8, Func Offset: 0x2d8
	// Line 744, Address: 0x2a10b8, Func Offset: 0x2e8
	// Line 778, Address: 0x2a10c8, Func Offset: 0x2f8
	// Line 752, Address: 0x2a10d4, Func Offset: 0x304
	// Line 778, Address: 0x2a10dc, Func Offset: 0x30c
	// Line 774, Address: 0x2a10e8, Func Offset: 0x318
	// Line 778, Address: 0x2a10f0, Func Offset: 0x320
	// Line 774, Address: 0x2a10f8, Func Offset: 0x328
	// Line 776, Address: 0x2a1100, Func Offset: 0x330
	// Line 778, Address: 0x2a1108, Func Offset: 0x338
	// Line 780, Address: 0x2a1110, Func Offset: 0x340
	// Line 781, Address: 0x2a116c, Func Offset: 0x39c
	// Func End, Address: 0x2a1194, Func Offset: 0x3c4
}

// Resume__14zNMEGoalPatrolFfPv
// Start address: 0x2a11a0
int32 zNMEGoalPatrol::Resume()
{
	zNMECommon* npc;
	// Line 660, Address: 0x2a11a0, Func Offset: 0
	// Line 661, Address: 0x2a11b4, Func Offset: 0x14
	// Line 675, Address: 0x2a11b8, Func Offset: 0x18
	// Line 661, Address: 0x2a11bc, Func Offset: 0x1c
	// Line 675, Address: 0x2a11c0, Func Offset: 0x20
	// Line 677, Address: 0x2a11cc, Func Offset: 0x2c
	// Line 679, Address: 0x2a11dc, Func Offset: 0x3c
	// Line 682, Address: 0x2a11ec, Func Offset: 0x4c
	// Line 683, Address: 0x2a1284, Func Offset: 0xe4
	// Func End, Address: 0x2a129c, Func Offset: 0xfc
}

// Exit__14zNMEGoalPatrolFfPv
// Start address: 0x2a12a0
int32 zNMEGoalPatrol::Exit()
{
	zNMECommon* npc;
	zNMENavNet* navnet;
	// Line 634, Address: 0x2a12a0, Func Offset: 0
	// Line 635, Address: 0x2a12ac, Func Offset: 0xc
	// Line 636, Address: 0x2a12b4, Func Offset: 0x14
	// Line 641, Address: 0x2a12b8, Func Offset: 0x18
	// Line 649, Address: 0x2a12c4, Func Offset: 0x24
	// Line 651, Address: 0x2a12d4, Func Offset: 0x34
	// Line 653, Address: 0x2a12e0, Func Offset: 0x40
	// Line 656, Address: 0x2a12f0, Func Offset: 0x50
	// Line 657, Address: 0x2a132c, Func Offset: 0x8c
	// Func End, Address: 0x2a1338, Func Offset: 0x98
}

// Enter__14zNMEGoalPatrolFfPv
// Start address: 0x2a1340
int32 zNMEGoalPatrol::Enter()
{
	zNMECommon* npc;
	// Line 612, Address: 0x2a1340, Func Offset: 0
	// Line 613, Address: 0x2a1354, Func Offset: 0x14
	// Line 621, Address: 0x2a135c, Func Offset: 0x1c
	// Line 625, Address: 0x2a1360, Func Offset: 0x20
	// Line 626, Address: 0x2a1370, Func Offset: 0x30
	// Line 628, Address: 0x2a1380, Func Offset: 0x40
	// Line 630, Address: 0x2a1388, Func Offset: 0x48
	// Line 631, Address: 0x2a1410, Func Offset: 0xd0
	// Func End, Address: 0x2a1428, Func Offset: 0xe8
}

// GoalHandleMail__12zNMEGoalIdleFP6NMEMsg
// Start address: 0x2a1430
int32 zNMEGoalIdle::GoalHandleMail(NMEMsg* msg)
{
	int32 handled;
	zNMEGoalCommon* goal;
	// Line 571, Address: 0x2a1430, Func Offset: 0
	// Line 577, Address: 0x2a1434, Func Offset: 0x4
	// Line 571, Address: 0x2a1438, Func Offset: 0x8
	// Line 577, Address: 0x2a1448, Func Offset: 0x18
	// Line 595, Address: 0x2a1460, Func Offset: 0x30
	// Line 585, Address: 0x2a1470, Func Offset: 0x40
	// Line 595, Address: 0x2a1474, Func Offset: 0x44
	// Line 587, Address: 0x2a1480, Func Offset: 0x50
	// Line 595, Address: 0x2a1484, Func Offset: 0x54
	// Line 587, Address: 0x2a1488, Func Offset: 0x58
	// Line 595, Address: 0x2a148c, Func Offset: 0x5c
	// Line 587, Address: 0x2a14a0, Func Offset: 0x70
	// Line 595, Address: 0x2a14a4, Func Offset: 0x74
	// Line 587, Address: 0x2a14ac, Func Offset: 0x7c
	// Line 595, Address: 0x2a14b0, Func Offset: 0x80
	// Line 587, Address: 0x2a14c0, Func Offset: 0x90
	// Line 595, Address: 0x2a14c8, Func Offset: 0x98
	// Line 596, Address: 0x2a14d4, Func Offset: 0xa4
	// Func End, Address: 0x2a14e8, Func Offset: 0xb8
}

// Process__12zNMEGoalIdleFP11en_trantypefPv
// Start address: 0x2a14f0
int32 zNMEGoalIdle::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	zMovePoint* nav;
	// Line 512, Address: 0x2a14f0, Func Offset: 0
	// Line 523, Address: 0x2a1528, Func Offset: 0x38
	// Line 529, Address: 0x2a153c, Func Offset: 0x4c
	// Line 530, Address: 0x2a1540, Func Offset: 0x50
	// Line 529, Address: 0x2a1544, Func Offset: 0x54
	// Line 530, Address: 0x2a1548, Func Offset: 0x58
	// Line 532, Address: 0x2a1550, Func Offset: 0x60
	// Line 541, Address: 0x2a1558, Func Offset: 0x68
	// Line 542, Address: 0x2a155c, Func Offset: 0x6c
	// Line 551, Address: 0x2a158c, Func Offset: 0x9c
	// Line 550, Address: 0x2a1590, Func Offset: 0xa0
	// Line 551, Address: 0x2a1594, Func Offset: 0xa4
	// Line 558, Address: 0x2a159c, Func Offset: 0xac
	// Line 561, Address: 0x2a15b0, Func Offset: 0xc0
	// Line 562, Address: 0x2a15c4, Func Offset: 0xd4
	// Line 565, Address: 0x2a160c, Func Offset: 0x11c
	// Line 559, Address: 0x2a1670, Func Offset: 0x180
	// Line 565, Address: 0x2a1674, Func Offset: 0x184
	// Line 559, Address: 0x2a1678, Func Offset: 0x188
	// Line 565, Address: 0x2a167c, Func Offset: 0x18c
	// Line 559, Address: 0x2a1688, Func Offset: 0x198
	// Line 565, Address: 0x2a168c, Func Offset: 0x19c
	// Line 559, Address: 0x2a1694, Func Offset: 0x1a4
	// Line 565, Address: 0x2a1698, Func Offset: 0x1a8
	// Line 559, Address: 0x2a16a8, Func Offset: 0x1b8
	// Line 560, Address: 0x2a16b0, Func Offset: 0x1c0
	// Line 566, Address: 0x2a16b8, Func Offset: 0x1c8
	// Func End, Address: 0x2a16dc, Func Offset: 0x1ec
}

// Resume__12zNMEGoalIdleFfPv
// Start address: 0x2a16e0
int32 zNMEGoalIdle::Resume()
{
	// Line 484, Address: 0x2a16e0, Func Offset: 0
	// Line 492, Address: 0x2a1704, Func Offset: 0x24
	// Line 493, Address: 0x2a1718, Func Offset: 0x38
	// Line 508, Address: 0x2a1720, Func Offset: 0x40
	// Line 509, Address: 0x2a17a8, Func Offset: 0xc8
	// Func End, Address: 0x2a17c0, Func Offset: 0xe0
}

// Suspend__12zNMEGoalIdleFfPv
// Start address: 0x2a17c0
int32 zNMEGoalIdle::Suspend()
{
	zNMECommon* npc;
	// Line 474, Address: 0x2a17c0, Func Offset: 0
	// Line 475, Address: 0x2a17cc, Func Offset: 0xc
	// Line 478, Address: 0x2a17d4, Func Offset: 0x14
	// Line 481, Address: 0x2a1840, Func Offset: 0x80
	// Line 480, Address: 0x2a1844, Func Offset: 0x84
	// Line 481, Address: 0x2a1848, Func Offset: 0x88
	// Func End, Address: 0x2a1854, Func Offset: 0x94
}

// Exit__12zNMEGoalIdleFfPv
// Start address: 0x2a1860
int32 zNMEGoalIdle::Exit()
{
	zNMECommon* npc;
	// Line 464, Address: 0x2a1860, Func Offset: 0
	// Line 465, Address: 0x2a186c, Func Offset: 0xc
	// Line 468, Address: 0x2a1874, Func Offset: 0x14
	// Line 471, Address: 0x2a18e0, Func Offset: 0x80
	// Line 470, Address: 0x2a18e4, Func Offset: 0x84
	// Line 471, Address: 0x2a18e8, Func Offset: 0x88
	// Func End, Address: 0x2a18f4, Func Offset: 0x94
}

// Enter__12zNMEGoalIdleFfPv
// Start address: 0x2a1900
int32 zNMEGoalIdle::Enter()
{
	zNMECommon* npc;
	// Line 437, Address: 0x2a1900, Func Offset: 0
	// Line 438, Address: 0x2a1914, Func Offset: 0x14
	// Line 440, Address: 0x2a1924, Func Offset: 0x24
	// Line 441, Address: 0x2a1938, Func Offset: 0x38
	// Line 446, Address: 0x2a1940, Func Offset: 0x40
	// Line 460, Address: 0x2a1944, Func Offset: 0x44
	// Line 461, Address: 0x2a19cc, Func Offset: 0xcc
	// Func End, Address: 0x2a19e4, Func Offset: 0xe4
}

// ValidateStages__16zNMEGoalLoopAnimFv
// Start address: 0x2a19f0
void zNMEGoalLoopAnim::ValidateStages()
{
	// Line 373, Address: 0x2a19f0, Func Offset: 0
	// Line 379, Address: 0x2a1a00, Func Offset: 0x10
	// Line 386, Address: 0x2a1a10, Func Offset: 0x20
	// Line 388, Address: 0x2a1a20, Func Offset: 0x30
	// Line 389, Address: 0x2a1a2c, Func Offset: 0x3c
	// Line 393, Address: 0x2a1a38, Func Offset: 0x48
	// Line 395, Address: 0x2a1a48, Func Offset: 0x58
	// Line 396, Address: 0x2a1a54, Func Offset: 0x64
	// Line 400, Address: 0x2a1a60, Func Offset: 0x70
	// Line 376, Address: 0x2a1a6c, Func Offset: 0x7c
	// Line 400, Address: 0x2a1a70, Func Offset: 0x80
	// Line 376, Address: 0x2a1a74, Func Offset: 0x84
	// Line 400, Address: 0x2a1a80, Func Offset: 0x90
	// Line 382, Address: 0x2a1a84, Func Offset: 0x94
	// Line 400, Address: 0x2a1a88, Func Offset: 0x98
	// Line 382, Address: 0x2a1a8c, Func Offset: 0x9c
	// Line 401, Address: 0x2a1a98, Func Offset: 0xa8
	// Func End, Address: 0x2a1aa0, Func Offset: 0xb0
}

// UseDefaultAnims__16zNMEGoalLoopAnimFP10zNMECommon
// Start address: 0x2a1aa0
void zNMEGoalLoopAnim::UseDefaultAnims(zNMECommon* npc)
{
	uint32 ae;
	// Line 338, Address: 0x2a1aa0, Func Offset: 0
	// Line 342, Address: 0x2a1aa4, Func Offset: 0x4
	// Line 338, Address: 0x2a1aa8, Func Offset: 0x8
	// Line 342, Address: 0x2a1ab8, Func Offset: 0x18
	// Line 344, Address: 0x2a1ad4, Func Offset: 0x34
	// Line 347, Address: 0x2a1ad8, Func Offset: 0x38
	// Line 348, Address: 0x2a1af4, Func Offset: 0x54
	// Line 349, Address: 0x2a1b00, Func Offset: 0x60
	// Line 352, Address: 0x2a1b04, Func Offset: 0x64
	// Line 356, Address: 0x2a1b0c, Func Offset: 0x6c
	// Line 357, Address: 0x2a1b28, Func Offset: 0x88
	// Line 356, Address: 0x2a1b2c, Func Offset: 0x8c
	// Line 357, Address: 0x2a1b30, Func Offset: 0x90
	// Line 358, Address: 0x2a1b38, Func Offset: 0x98
	// Line 360, Address: 0x2a1b3c, Func Offset: 0x9c
	// Line 363, Address: 0x2a1b44, Func Offset: 0xa4
	// Line 353, Address: 0x2a1b50, Func Offset: 0xb0
	// Line 363, Address: 0x2a1b5c, Func Offset: 0xbc
	// Line 361, Address: 0x2a1b60, Func Offset: 0xc0
	// Line 364, Address: 0x2a1b6c, Func Offset: 0xcc
	// Func End, Address: 0x2a1b7c, Func Offset: 0xdc
}

// GoalLoop_Process__16zNMEGoalLoopAnimFP10zNMECommonf
// Start address: 0x2a1b80
en_loopstat zNMEGoalLoopAnim::GoalLoop_Process(zNMECommon* npc, float32 dt)
{
	float32 tym_animPlusTime;
	// Line 217, Address: 0x2a1b80, Func Offset: 0
	// Line 218, Address: 0x2a1b98, Func Offset: 0x18
	// Line 220, Address: 0x2a1bb8, Func Offset: 0x38
	// Line 221, Address: 0x2a1bdc, Func Offset: 0x5c
	// Line 228, Address: 0x2a1be0, Func Offset: 0x60
	// Line 230, Address: 0x2a1bf0, Func Offset: 0x70
	// Line 239, Address: 0x2a1bf8, Func Offset: 0x78
	// Line 242, Address: 0x2a1c10, Func Offset: 0x90
	// Line 243, Address: 0x2a1c3c, Func Offset: 0xbc
	// Line 249, Address: 0x2a1c48, Func Offset: 0xc8
	// Line 250, Address: 0x2a1c50, Func Offset: 0xd0
	// Line 252, Address: 0x2a1c5c, Func Offset: 0xdc
	// Line 256, Address: 0x2a1c68, Func Offset: 0xe8
	// Line 257, Address: 0x2a1c74, Func Offset: 0xf4
	// Line 289, Address: 0x2a1c80, Func Offset: 0x100
	// Line 218, Address: 0x2a1ca4, Func Offset: 0x124
	// Line 289, Address: 0x2a1cac, Func Offset: 0x12c
	// Line 220, Address: 0x2a1cc4, Func Offset: 0x144
	// Line 289, Address: 0x2a1ccc, Func Offset: 0x14c
	// Line 235, Address: 0x2a1cd0, Func Offset: 0x150
	// Line 289, Address: 0x2a1cd8, Func Offset: 0x158
	// Line 238, Address: 0x2a1cdc, Func Offset: 0x15c
	// Line 260, Address: 0x2a1ce4, Func Offset: 0x164
	// Line 289, Address: 0x2a1ce8, Func Offset: 0x168
	// Line 268, Address: 0x2a1cf8, Func Offset: 0x178
	// Line 289, Address: 0x2a1d00, Func Offset: 0x180
	// Line 265, Address: 0x2a1d04, Func Offset: 0x184
	// Line 289, Address: 0x2a1d08, Func Offset: 0x188
	// Line 265, Address: 0x2a1d20, Func Offset: 0x1a0
	// Line 266, Address: 0x2a1d28, Func Offset: 0x1a8
	// Line 289, Address: 0x2a1d30, Func Offset: 0x1b0
	// Line 273, Address: 0x2a1d44, Func Offset: 0x1c4
	// Line 289, Address: 0x2a1d48, Func Offset: 0x1c8
	// Line 276, Address: 0x2a1d50, Func Offset: 0x1d0
	// Line 281, Address: 0x2a1d58, Func Offset: 0x1d8
	// Line 290, Address: 0x2a1d5c, Func Offset: 0x1dc
	// Func End, Address: 0x2a1d70, Func Offset: 0x1f0
}

// Process__16zNMEGoalPushAnimFP11en_trantypefPv
// Start address: 0x2a1d70
int32 zNMEGoalPushAnim::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	zNMECommon* npc;
	float32 tym_animPlusTime;
	// Line 116, Address: 0x2a1d70, Func Offset: 0
	// Line 117, Address: 0x2a1d7c, Func Offset: 0xc
	// Line 120, Address: 0x2a1d90, Func Offset: 0x20
	// Line 121, Address: 0x2a1d94, Func Offset: 0x24
	// Line 122, Address: 0x2a1db8, Func Offset: 0x48
	// Line 126, Address: 0x2a1dbc, Func Offset: 0x4c
	// Line 131, Address: 0x2a1dcc, Func Offset: 0x5c
	// Line 133, Address: 0x2a1dd4, Func Offset: 0x64
	// Line 134, Address: 0x2a1e00, Func Offset: 0x90
	// Line 140, Address: 0x2a1e0c, Func Offset: 0x9c
	// Line 144, Address: 0x2a1e14, Func Offset: 0xa4
	// Line 145, Address: 0x2a1e2c, Func Offset: 0xbc
	// Line 148, Address: 0x2a1e50, Func Offset: 0xe0
	// Line 149, Address: 0x2a1e58, Func Offset: 0xe8
	// Line 153, Address: 0x2a1e64, Func Offset: 0xf4
	// Line 155, Address: 0x2a1e6c, Func Offset: 0xfc
	// Line 156, Address: 0x2a1e70, Func Offset: 0x100
	// Line 160, Address: 0x2a1e7c, Func Offset: 0x10c
	// Line 121, Address: 0x2a1eec, Func Offset: 0x17c
	// Line 128, Address: 0x2a1ef4, Func Offset: 0x184
	// Line 129, Address: 0x2a1ef8, Func Offset: 0x188
	// Line 160, Address: 0x2a1f04, Func Offset: 0x194
	// Line 133, Address: 0x2a1f1c, Func Offset: 0x1ac
	// Line 160, Address: 0x2a1f24, Func Offset: 0x1b4
	// Line 137, Address: 0x2a1f28, Func Offset: 0x1b8
	// Line 160, Address: 0x2a1f30, Func Offset: 0x1c0
	// Line 138, Address: 0x2a1f54, Func Offset: 0x1e4
	// Line 139, Address: 0x2a1f60, Func Offset: 0x1f0
	// Line 160, Address: 0x2a1f68, Func Offset: 0x1f8
	// Line 138, Address: 0x2a1f80, Func Offset: 0x210
	// Line 160, Address: 0x2a1f88, Func Offset: 0x218
	// Line 145, Address: 0x2a1fa0, Func Offset: 0x230
	// Line 161, Address: 0x2a1fa8, Func Offset: 0x238
	// Func End, Address: 0x2a1fb8, Func Offset: 0x248
}

// Resume__16zNMEGoalPushAnimFfPv
// Start address: 0x2a1fc0
int32 zNMEGoalPushAnim::Resume()
{
	// Line 109, Address: 0x2a1fc0, Func Offset: 0
	// Line 112, Address: 0x2a1fc4, Func Offset: 0x4
	// Line 109, Address: 0x2a1fc8, Func Offset: 0x8
	// Line 112, Address: 0x2a1fcc, Func Offset: 0xc
	// Line 109, Address: 0x2a1fd0, Func Offset: 0x10
	// Line 112, Address: 0x2a1fd4, Func Offset: 0x14
	// Line 109, Address: 0x2a1fd8, Func Offset: 0x18
	// Line 111, Address: 0x2a1fe0, Func Offset: 0x20
	// Line 112, Address: 0x2a1fec, Func Offset: 0x2c
	// Line 113, Address: 0x2a2068, Func Offset: 0xa8
	// Func End, Address: 0x2a2080, Func Offset: 0xc0
}

// Exit__16zNMEGoalPushAnimFfPv
// Start address: 0x2a2080
int32 zNMEGoalPushAnim::Exit()
{
	// Line 103, Address: 0x2a2080, Func Offset: 0
	// Line 106, Address: 0x2a2084, Func Offset: 0x4
	// Func End, Address: 0x2a208c, Func Offset: 0xc
}

// Enter__16zNMEGoalPushAnimFfPv
// Start address: 0x2a2090
int32 zNMEGoalPushAnim::Enter()
{
	// Line 85, Address: 0x2a2090, Func Offset: 0
	// Line 96, Address: 0x2a2094, Func Offset: 0x4
	// Line 85, Address: 0x2a2098, Func Offset: 0x8
	// Line 96, Address: 0x2a209c, Func Offset: 0xc
	// Line 85, Address: 0x2a20a0, Func Offset: 0x10
	// Line 98, Address: 0x2a20a4, Func Offset: 0x14
	// Line 85, Address: 0x2a20a8, Func Offset: 0x18
	// Line 98, Address: 0x2a20ac, Func Offset: 0x1c
	// Line 85, Address: 0x2a20b0, Func Offset: 0x20
	// Line 98, Address: 0x2a20b4, Func Offset: 0x24
	// Line 96, Address: 0x2a20b8, Func Offset: 0x28
	// Line 98, Address: 0x2a20c4, Func Offset: 0x34
	// Line 99, Address: 0x2a2140, Func Offset: 0xb0
	// Func End, Address: 0x2a2158, Func Offset: 0xc8
}

