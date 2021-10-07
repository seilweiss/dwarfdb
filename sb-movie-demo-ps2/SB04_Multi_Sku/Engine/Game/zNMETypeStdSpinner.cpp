



void RibbonLoop(zNMESpinner* npc);
int32 ColChk_NMEDyn(zNMESpinner* npc);
uint8 __cl(xEnt& ent);
int32 ColChk_BBall(zNMESpinner* npc);
int32 ColChk_Player(zNMESpinner* npc);
int32 PursueAndDestroy(zNMESpinner* npc, float32 dt);
int32 RetreatAndFinish(zNMESpinner* npc, float32 dt);
void StepAwayFromTheSponge(zNMESpinner* npc, float32 dt);
int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
int32 Resume();
int32 Suspend();
int32 Exit();
int32 Enter();
int32 ChkTranCases(zNMESpinner* npc, int32& nextgoal, en_trantype& trantype);
int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
int32 Enter();
int32 Spin_SeePlyr(xGoal* rawgoal, en_trantype* trantype);
float32 HealthRatio();
en_vis VisionTarget(xEnt* ent, en_defcon defcon);
int32 SpinMailDamage(NMEDamageInfo* dmgmail);
int32 TypeHandleMail(NMEMsg* mail);
int32 GoalPick(int32& gid_would);
void CollideReview();
void Type_AddYourMove(float32 dt);
void Process(float32 dt);
void BUpdate(xVec3* pos);
xAnimTable* CreateAnimTable(xAnimTable* table);
uint32 AnimPick(int32 gid, en_npcgspot gspot);
void SelfSetup();
void Reset();
void Setup();
void Init(xEntAsset* entass);
uint8 ColPenFlags();
uint8 ColChkFlags();
int32 DfltVulnFlags();
void CreateConfig();

// RibbonLoop__18zNMEGoalSpinBattleFP11zNMESpinner
// Start address: 0x20b100
void zNMEGoalSpinBattle::RibbonLoop(zNMESpinner* npc)
{
	RibData* ribhelp;
	xVec3 pos_hand;
	xVec3 pos_head;
	xMat4x3* mat_root;
	xVec3 dir_emit;
	float32 dst;
	// Line 2469, Address: 0x20b100, Func Offset: 0
	// Line 2470, Address: 0x20b120, Func Offset: 0x20
	// Line 2473, Address: 0x20b12c, Func Offset: 0x2c
	// Line 2474, Address: 0x20b138, Func Offset: 0x38
	// Line 2479, Address: 0x20b144, Func Offset: 0x44
	// Line 2477, Address: 0x20b148, Func Offset: 0x48
	// Line 2479, Address: 0x20b14c, Func Offset: 0x4c
	// Line 2487, Address: 0x20b150, Func Offset: 0x50
	// Line 2479, Address: 0x20b154, Func Offset: 0x54
	// Line 2487, Address: 0x20b158, Func Offset: 0x58
	// Line 2488, Address: 0x20b164, Func Offset: 0x64
	// Line 2494, Address: 0x20b238, Func Offset: 0x138
	// Line 2495, Address: 0x20b23c, Func Offset: 0x13c
	// Line 2488, Address: 0x20b240, Func Offset: 0x140
	// Line 2494, Address: 0x20b244, Func Offset: 0x144
	// Line 2495, Address: 0x20b250, Func Offset: 0x150
	// Line 2494, Address: 0x20b25c, Func Offset: 0x15c
	// Line 2495, Address: 0x20b268, Func Offset: 0x168
	// Line 2498, Address: 0x20b274, Func Offset: 0x174
	// Line 2500, Address: 0x20b27c, Func Offset: 0x17c
	// Line 2501, Address: 0x20b2c4, Func Offset: 0x1c4
	// Line 2503, Address: 0x20b2fc, Func Offset: 0x1fc
	// Line 2507, Address: 0x20b344, Func Offset: 0x244
	// Line 2504, Address: 0x20b34c, Func Offset: 0x24c
	// Line 2507, Address: 0x20b350, Func Offset: 0x250
	// Line 2504, Address: 0x20b354, Func Offset: 0x254
	// Line 2507, Address: 0x20b358, Func Offset: 0x258
	// Line 2504, Address: 0x20b364, Func Offset: 0x264
	// Line 2508, Address: 0x20b368, Func Offset: 0x268
	// Line 2504, Address: 0x20b36c, Func Offset: 0x26c
	// Line 2507, Address: 0x20b370, Func Offset: 0x270
	// Line 2504, Address: 0x20b37c, Func Offset: 0x27c
	// Line 2507, Address: 0x20b380, Func Offset: 0x280
	// Line 2504, Address: 0x20b384, Func Offset: 0x284
	// Line 2507, Address: 0x20b388, Func Offset: 0x288
	// Line 2504, Address: 0x20b394, Func Offset: 0x294
	// Line 2507, Address: 0x20b398, Func Offset: 0x298
	// Line 2504, Address: 0x20b3a4, Func Offset: 0x2a4
	// Line 2507, Address: 0x20b3a8, Func Offset: 0x2a8
	// Line 2504, Address: 0x20b3ac, Func Offset: 0x2ac
	// Line 2507, Address: 0x20b3b0, Func Offset: 0x2b0
	// Line 2504, Address: 0x20b3b8, Func Offset: 0x2b8
	// Line 2507, Address: 0x20b3bc, Func Offset: 0x2bc
	// Line 2504, Address: 0x20b3c0, Func Offset: 0x2c0
	// Line 2507, Address: 0x20b3c4, Func Offset: 0x2c4
	// Line 2504, Address: 0x20b3d0, Func Offset: 0x2d0
	// Line 2507, Address: 0x20b3d4, Func Offset: 0x2d4
	// Line 2504, Address: 0x20b3f0, Func Offset: 0x2f0
	// Line 2507, Address: 0x20b3f4, Func Offset: 0x2f4
	// Line 2508, Address: 0x20b400, Func Offset: 0x300
	// Line 2512, Address: 0x20b408, Func Offset: 0x308
	// Line 2515, Address: 0x20b428, Func Offset: 0x328
	// Func End, Address: 0x20b448, Func Offset: 0x348
}

// ColChk_NMEDyn__18zNMEGoalSpinBattleFP11zNMESpinner
// Start address: 0x20b450
int32 zNMEGoalSpinBattle::ColChk_NMEDyn(zNMESpinner* npc)
{
	xVec3 pos_head;
	BattleCollideData cbdata;
	xCollis colrec;
	// Line 2103, Address: 0x20b450, Func Offset: 0
	// Line 2105, Address: 0x20b46c, Func Offset: 0x1c
	// Line 2106, Address: 0x20b478, Func Offset: 0x28
	// Line 2107, Address: 0x20b484, Func Offset: 0x34
	// Line 2108, Address: 0x20b48c, Func Offset: 0x3c
	// Line 2112, Address: 0x20b490, Func Offset: 0x40
	// Line 2108, Address: 0x20b494, Func Offset: 0x44
	// Line 2112, Address: 0x20b4a0, Func Offset: 0x50
	// Line 2113, Address: 0x20b4b8, Func Offset: 0x68
	// Line 2114, Address: 0x20b500, Func Offset: 0xb0
	// Line 2119, Address: 0x20b50c, Func Offset: 0xbc
	// Line 2114, Address: 0x20b510, Func Offset: 0xc0
	// Line 2119, Address: 0x20b514, Func Offset: 0xc4
	// Line 2114, Address: 0x20b518, Func Offset: 0xc8
	// Line 2119, Address: 0x20b51c, Func Offset: 0xcc
	// Line 2114, Address: 0x20b520, Func Offset: 0xd0
	// Line 2119, Address: 0x20b548, Func Offset: 0xf8
	// Line 2126, Address: 0x20b550, Func Offset: 0x100
	// Line 2121, Address: 0x20b554, Func Offset: 0x104
	// Line 2126, Address: 0x20b558, Func Offset: 0x108
	// Line 2122, Address: 0x20b55c, Func Offset: 0x10c
	// Line 2126, Address: 0x20b560, Func Offset: 0x110
	// Line 2124, Address: 0x20b564, Func Offset: 0x114
	// Line 2125, Address: 0x20b568, Func Offset: 0x118
	// Line 2126, Address: 0x20b56c, Func Offset: 0x11c
	// Line 2127, Address: 0x20b574, Func Offset: 0x124
	// Line 2124, Address: 0x20b578, Func Offset: 0x128
	// Line 2127, Address: 0x20b57c, Func Offset: 0x12c
	// Line 2125, Address: 0x20b580, Func Offset: 0x130
	// Line 2126, Address: 0x20b588, Func Offset: 0x138
	// Line 2127, Address: 0x20b58c, Func Offset: 0x13c
	// Line 2126, Address: 0x20b590, Func Offset: 0x140
	// Line 2127, Address: 0x20b594, Func Offset: 0x144
	// Line 2126, Address: 0x20b598, Func Offset: 0x148
	// Line 2127, Address: 0x20b59c, Func Offset: 0x14c
	// Line 2138, Address: 0x20b5a4, Func Offset: 0x154
	// Line 2142, Address: 0x20b68c, Func Offset: 0x23c
	// Line 2144, Address: 0x20b6a4, Func Offset: 0x254
	// Line 2149, Address: 0x20b6bc, Func Offset: 0x26c
	// Line 2150, Address: 0x20b6c0, Func Offset: 0x270
	// Func End, Address: 0x20b6dc, Func Offset: 0x28c
}

// __cl__17BattleCollideDataFR4xEnt
// Start address: 0x20b6e0
uint8 BattleCollideData::__cl(xEnt& ent)
{
	xCollis colrec;
	float32 hitArgs[4];
	// Line 2061, Address: 0x20b6e0, Func Offset: 0
	// Line 2062, Address: 0x20b6f0, Func Offset: 0x10
	// Line 2064, Address: 0x20b700, Func Offset: 0x20
	// Line 2065, Address: 0x20b710, Func Offset: 0x30
	// Line 2063, Address: 0x20b718, Func Offset: 0x38
	// Line 2068, Address: 0x20b720, Func Offset: 0x40
	// Line 2069, Address: 0x20b72c, Func Offset: 0x4c
	// Line 2070, Address: 0x20b73c, Func Offset: 0x5c
	// Line 2072, Address: 0x20b764, Func Offset: 0x84
	// Line 2073, Address: 0x20b770, Func Offset: 0x90
	// Line 2077, Address: 0x20b780, Func Offset: 0xa0
	// Line 2081, Address: 0x20b7b8, Func Offset: 0xd8
	// Line 2083, Address: 0x20b7dc, Func Offset: 0xfc
	// Line 2091, Address: 0x20b7e4, Func Offset: 0x104
	// Line 2092, Address: 0x20b7f0, Func Offset: 0x110
	// Line 2091, Address: 0x20b7f4, Func Offset: 0x114
	// Line 2092, Address: 0x20b7fc, Func Offset: 0x11c
	// Line 2091, Address: 0x20b80c, Func Offset: 0x12c
	// Line 2092, Address: 0x20b82c, Func Offset: 0x14c
	// Line 2099, Address: 0x20b838, Func Offset: 0x158
	// Line 2100, Address: 0x20b83c, Func Offset: 0x15c
	// Func End, Address: 0x20b850, Func Offset: 0x170
}

// ColChk_BBall__18zNMEGoalSpinBattleFP11zNMESpinner
// Start address: 0x20b850
int32 zNMEGoalSpinBattle::ColChk_BBall(zNMESpinner* npc)
{
	xEntBoulder* bowl;
	xVec3 pos_nme;
	float32 upper;
	xVec3 pos_ball;
	xVec3 vec_NtoB;
	xVec3 dir_NtoB;
	xVec3 dir_trav;
	xVec3 dir_smack;
	xVec3 vec_smack;
	// Line 1926, Address: 0x20b850, Func Offset: 0
	// Line 1931, Address: 0x20b85c, Func Offset: 0xc
	// Line 1932, Address: 0x20b868, Func Offset: 0x18
	// Line 1933, Address: 0x20b874, Func Offset: 0x24
	// Line 1934, Address: 0x20b87c, Func Offset: 0x2c
	// Line 1956, Address: 0x20b880, Func Offset: 0x30
	// Line 1957, Address: 0x20b888, Func Offset: 0x38
	// Line 1959, Address: 0x20b890, Func Offset: 0x40
	// Line 1970, Address: 0x20b8a8, Func Offset: 0x58
	// Line 1967, Address: 0x20b8ac, Func Offset: 0x5c
	// Line 1965, Address: 0x20b8b0, Func Offset: 0x60
	// Line 1970, Address: 0x20b8b4, Func Offset: 0x64
	// Line 1971, Address: 0x20b8b8, Func Offset: 0x68
	// Line 1970, Address: 0x20b8c0, Func Offset: 0x70
	// Line 1965, Address: 0x20b8c4, Func Offset: 0x74
	// Line 1970, Address: 0x20b8c8, Func Offset: 0x78
	// Line 1965, Address: 0x20b8cc, Func Offset: 0x7c
	// Line 1970, Address: 0x20b8d0, Func Offset: 0x80
	// Line 1965, Address: 0x20b8d4, Func Offset: 0x84
	// Line 1970, Address: 0x20b8dc, Func Offset: 0x8c
	// Line 1971, Address: 0x20b8e8, Func Offset: 0x98
	// Line 1970, Address: 0x20b8ec, Func Offset: 0x9c
	// Line 1967, Address: 0x20b8f0, Func Offset: 0xa0
	// Line 1971, Address: 0x20b8f4, Func Offset: 0xa4
	// Line 1965, Address: 0x20b8f8, Func Offset: 0xa8
	// Line 1971, Address: 0x20b904, Func Offset: 0xb4
	// Line 1973, Address: 0x20b90c, Func Offset: 0xbc
	// Line 1978, Address: 0x20b918, Func Offset: 0xc8
	// Line 1973, Address: 0x20b92c, Func Offset: 0xdc
	// Line 1978, Address: 0x20b930, Func Offset: 0xe0
	// Line 1980, Address: 0x20b934, Func Offset: 0xe4
	// Line 1978, Address: 0x20b93c, Func Offset: 0xec
	// Line 1980, Address: 0x20b94c, Func Offset: 0xfc
	// Line 1978, Address: 0x20b950, Func Offset: 0x100
	// Line 1979, Address: 0x20b954, Func Offset: 0x104
	// Line 1978, Address: 0x20b958, Func Offset: 0x108
	// Line 1979, Address: 0x20b9a0, Func Offset: 0x150
	// Line 1980, Address: 0x20b9b0, Func Offset: 0x160
	// Line 1982, Address: 0x20b9bc, Func Offset: 0x16c
	// Line 1985, Address: 0x20b9d4, Func Offset: 0x184
	// Line 1989, Address: 0x20b9f8, Func Offset: 0x1a8
	// Line 1985, Address: 0x20ba00, Func Offset: 0x1b0
	// Line 1989, Address: 0x20ba10, Func Offset: 0x1c0
	// Line 1985, Address: 0x20ba14, Func Offset: 0x1c4
	// Line 1989, Address: 0x20ba20, Func Offset: 0x1d0
	// Line 1990, Address: 0x20ba28, Func Offset: 0x1d8
	// Line 1985, Address: 0x20ba2c, Func Offset: 0x1dc
	// Line 1990, Address: 0x20ba30, Func Offset: 0x1e0
	// Line 1989, Address: 0x20ba44, Func Offset: 0x1f4
	// Line 1990, Address: 0x20ba48, Func Offset: 0x1f8
	// Line 1991, Address: 0x20ba50, Func Offset: 0x200
	// Line 1992, Address: 0x20ba5c, Func Offset: 0x20c
	// Line 1994, Address: 0x20ba70, Func Offset: 0x220
	// Line 1992, Address: 0x20ba74, Func Offset: 0x224
	// Line 1994, Address: 0x20ba78, Func Offset: 0x228
	// Line 1992, Address: 0x20ba84, Func Offset: 0x234
	// Line 1994, Address: 0x20ba8c, Func Offset: 0x23c
	// Line 1995, Address: 0x20baa4, Func Offset: 0x254
	// Line 1958, Address: 0x20baac, Func Offset: 0x25c
	// Line 1960, Address: 0x20bab4, Func Offset: 0x264
	// Line 1972, Address: 0x20babc, Func Offset: 0x26c
	// Line 1974, Address: 0x20bac4, Func Offset: 0x274
	// Line 1981, Address: 0x20bacc, Func Offset: 0x27c
	// Line 1983, Address: 0x20bad4, Func Offset: 0x284
	// Line 2004, Address: 0x20badc, Func Offset: 0x28c
	// Line 2003, Address: 0x20bae0, Func Offset: 0x290
	// Line 1995, Address: 0x20bae4, Func Offset: 0x294
	// Line 2001, Address: 0x20bae8, Func Offset: 0x298
	// Line 1995, Address: 0x20baec, Func Offset: 0x29c
	// Line 2001, Address: 0x20baf0, Func Offset: 0x2a0
	// Line 2003, Address: 0x20baf4, Func Offset: 0x2a4
	// Line 1995, Address: 0x20bafc, Func Offset: 0x2ac
	// Line 2003, Address: 0x20bb00, Func Offset: 0x2b0
	// Line 1995, Address: 0x20bb04, Func Offset: 0x2b4
	// Line 2003, Address: 0x20bb08, Func Offset: 0x2b8
	// Line 2001, Address: 0x20bb0c, Func Offset: 0x2bc
	// Line 2003, Address: 0x20bb10, Func Offset: 0x2c0
	// Line 1995, Address: 0x20bb14, Func Offset: 0x2c4
	// Line 2001, Address: 0x20bb1c, Func Offset: 0x2cc
	// Line 2003, Address: 0x20bb34, Func Offset: 0x2e4
	// Line 2001, Address: 0x20bb38, Func Offset: 0x2e8
	// Line 2003, Address: 0x20bb3c, Func Offset: 0x2ec
	// Line 2001, Address: 0x20bb40, Func Offset: 0x2f0
	// Line 2003, Address: 0x20bb50, Func Offset: 0x300
	// Line 2004, Address: 0x20bbb4, Func Offset: 0x364
	// Line 2006, Address: 0x20bbbc, Func Offset: 0x36c
	// Line 2007, Address: 0x20bbc0, Func Offset: 0x370
	// Func End, Address: 0x20bbd0, Func Offset: 0x380
}

// ColChk_Player__18zNMEGoalSpinBattleFP11zNMESpinner
// Start address: 0x20bbd0
int32 zNMEGoalSpinBattle::ColChk_Player(zNMESpinner* npc)
{
	xVec3 pos_nme;
	float32 upper;
	xVec3 pos_plyr;
	xVec3 vec_NtoB;
	// Line 1872, Address: 0x20bbd0, Func Offset: 0
	// Line 1873, Address: 0x20bbd8, Func Offset: 0x8
	// Line 1874, Address: 0x20bbe4, Func Offset: 0x14
	// Line 1875, Address: 0x20bbf0, Func Offset: 0x20
	// Line 1895, Address: 0x20bbf8, Func Offset: 0x28
	// Line 1876, Address: 0x20bbfc, Func Offset: 0x2c
	// Line 1895, Address: 0x20bc00, Func Offset: 0x30
	// Line 1898, Address: 0x20bc04, Func Offset: 0x34
	// Line 1876, Address: 0x20bc0c, Func Offset: 0x3c
	// Line 1899, Address: 0x20bc10, Func Offset: 0x40
	// Line 1898, Address: 0x20bc18, Func Offset: 0x48
	// Line 1876, Address: 0x20bc1c, Func Offset: 0x4c
	// Line 1898, Address: 0x20bc20, Func Offset: 0x50
	// Line 1893, Address: 0x20bc24, Func Offset: 0x54
	// Line 1898, Address: 0x20bc34, Func Offset: 0x64
	// Line 1899, Address: 0x20bc44, Func Offset: 0x74
	// Line 1895, Address: 0x20bc48, Func Offset: 0x78
	// Line 1899, Address: 0x20bc4c, Func Offset: 0x7c
	// Line 1893, Address: 0x20bc50, Func Offset: 0x80
	// Line 1898, Address: 0x20bc5c, Func Offset: 0x8c
	// Line 1899, Address: 0x20bc60, Func Offset: 0x90
	// Line 1901, Address: 0x20bc68, Func Offset: 0x98
	// Line 1906, Address: 0x20bc74, Func Offset: 0xa4
	// Line 1901, Address: 0x20bc7c, Func Offset: 0xac
	// Line 1906, Address: 0x20bc80, Func Offset: 0xb0
	// Line 1908, Address: 0x20bc88, Func Offset: 0xb8
	// Line 1906, Address: 0x20bc8c, Func Offset: 0xbc
	// Line 1908, Address: 0x20bc90, Func Offset: 0xc0
	// Line 1906, Address: 0x20bc94, Func Offset: 0xc4
	// Line 1908, Address: 0x20bca8, Func Offset: 0xd8
	// Line 1906, Address: 0x20bcac, Func Offset: 0xdc
	// Line 1907, Address: 0x20bcf4, Func Offset: 0x124
	// Line 1906, Address: 0x20bcf8, Func Offset: 0x128
	// Line 1907, Address: 0x20bcfc, Func Offset: 0x12c
	// Line 1908, Address: 0x20bd08, Func Offset: 0x138
	// Line 1910, Address: 0x20bd14, Func Offset: 0x144
	// Line 1911, Address: 0x20bd30, Func Offset: 0x160
	// Line 1900, Address: 0x20bd38, Func Offset: 0x168
	// Line 1902, Address: 0x20bd40, Func Offset: 0x170
	// Line 1909, Address: 0x20bd48, Func Offset: 0x178
	// Line 1914, Address: 0x20bd50, Func Offset: 0x180
	// Line 1916, Address: 0x20bd5c, Func Offset: 0x18c
	// Line 1917, Address: 0x20bd60, Func Offset: 0x190
	// Func End, Address: 0x20bd6c, Func Offset: 0x19c
}

// PursueAndDestroy__18zNMEGoalSpinBattleFP11zNMESpinnerf
// Start address: 0x20bd70
int32 zNMEGoalSpinBattle::PursueAndDestroy(zNMESpinner* npc, float32 dt)
{
	uint32 anid_done;
	uint32 anid_loop;
	// Line 1665, Address: 0x20bd70, Func Offset: 0
	// Line 1666, Address: 0x20bda0, Func Offset: 0x30
	// Line 1670, Address: 0x20bdbc, Func Offset: 0x4c
	// Line 1672, Address: 0x20bdd8, Func Offset: 0x68
	// Line 1677, Address: 0x20bde8, Func Offset: 0x78
	// Line 1687, Address: 0x20be28, Func Offset: 0xb8
	// Line 1690, Address: 0x20befc, Func Offset: 0x18c
	// Line 1691, Address: 0x20bf18, Func Offset: 0x1a8
	// Line 1692, Address: 0x20bf20, Func Offset: 0x1b0
	// Line 1694, Address: 0x20bf38, Func Offset: 0x1c8
	// Line 1695, Address: 0x20bf68, Func Offset: 0x1f8
	// Line 1697, Address: 0x20bf70, Func Offset: 0x200
	// Line 1711, Address: 0x20bf88, Func Offset: 0x218
	// Line 1666, Address: 0x20bfac, Func Offset: 0x23c
	// Line 1711, Address: 0x20bfb4, Func Offset: 0x244
	// Line 1674, Address: 0x20bfb8, Func Offset: 0x248
	// Line 1711, Address: 0x20bfbc, Func Offset: 0x24c
	// Line 1674, Address: 0x20bfc0, Func Offset: 0x250
	// Line 1711, Address: 0x20bfc4, Func Offset: 0x254
	// Line 1674, Address: 0x20bfd8, Func Offset: 0x268
	// Line 1711, Address: 0x20bfdc, Func Offset: 0x26c
	// Line 1674, Address: 0x20bfe4, Func Offset: 0x274
	// Line 1711, Address: 0x20bfe8, Func Offset: 0x278
	// Line 1674, Address: 0x20bff8, Func Offset: 0x288
	// Line 1711, Address: 0x20c008, Func Offset: 0x298
	// Line 1677, Address: 0x20c020, Func Offset: 0x2b0
	// Line 1711, Address: 0x20c028, Func Offset: 0x2b8
	// Line 1677, Address: 0x20c030, Func Offset: 0x2c0
	// Line 1711, Address: 0x20c034, Func Offset: 0x2c4
	// Line 1677, Address: 0x20c03c, Func Offset: 0x2cc
	// Line 1711, Address: 0x20c040, Func Offset: 0x2d0
	// Line 1687, Address: 0x20c050, Func Offset: 0x2e0
	// Line 1711, Address: 0x20c06c, Func Offset: 0x2fc
	// Line 1687, Address: 0x20c070, Func Offset: 0x300
	// Line 1711, Address: 0x20c074, Func Offset: 0x304
	// Line 1687, Address: 0x20c07c, Func Offset: 0x30c
	// Line 1711, Address: 0x20c084, Func Offset: 0x314
	// Line 1712, Address: 0x20c094, Func Offset: 0x324
	// Func End, Address: 0x20c0b4, Func Offset: 0x344
}

// RetreatAndFinish__18zNMEGoalSpinBattleFP11zNMESpinnerf
// Start address: 0x20c0c0
int32 zNMEGoalSpinBattle::RetreatAndFinish(zNMESpinner* npc, float32 dt)
{
	int32 arrived;
	uint32 anid_loop;
	uint32 anid_done;
	xVec3 pos_dest;
	int32 doneanddone;
	uint32 anid_loop;
	// Line 1580, Address: 0x20c0c0, Func Offset: 0
	// Line 1587, Address: 0x20c0c4, Func Offset: 0x4
	// Line 1580, Address: 0x20c0c8, Func Offset: 0x8
	// Line 1587, Address: 0x20c0cc, Func Offset: 0xc
	// Line 1580, Address: 0x20c0d0, Func Offset: 0x10
	// Line 1587, Address: 0x20c0d4, Func Offset: 0x14
	// Line 1580, Address: 0x20c0d8, Func Offset: 0x18
	// Line 1587, Address: 0x20c0ec, Func Offset: 0x2c
	// Line 1580, Address: 0x20c0f0, Func Offset: 0x30
	// Line 1587, Address: 0x20c0f4, Func Offset: 0x34
	// Line 1594, Address: 0x20c1c4, Func Offset: 0x104
	// Line 1595, Address: 0x20c1e0, Func Offset: 0x120
	// Line 1596, Address: 0x20c1fc, Func Offset: 0x13c
	// Line 1595, Address: 0x20c200, Func Offset: 0x140
	// Line 1596, Address: 0x20c204, Func Offset: 0x144
	// Line 1597, Address: 0x20c21c, Func Offset: 0x15c
	// Line 1601, Address: 0x20c224, Func Offset: 0x164
	// Line 1610, Address: 0x20c234, Func Offset: 0x174
	// Line 1611, Address: 0x20c23c, Func Offset: 0x17c
	// Line 1615, Address: 0x20c258, Func Offset: 0x198
	// Line 1617, Address: 0x20c274, Func Offset: 0x1b4
	// Line 1621, Address: 0x20c294, Func Offset: 0x1d4
	// Line 1624, Address: 0x20c29c, Func Offset: 0x1dc
	// Line 1626, Address: 0x20c2b8, Func Offset: 0x1f8
	// Line 1634, Address: 0x20c2cc, Func Offset: 0x20c
	// Line 1636, Address: 0x20c2d8, Func Offset: 0x218
	// Line 1637, Address: 0x20c300, Func Offset: 0x240
	// Line 1661, Address: 0x20c304, Func Offset: 0x244
	// Line 1587, Address: 0x20c310, Func Offset: 0x250
	// Line 1661, Address: 0x20c32c, Func Offset: 0x26c
	// Line 1587, Address: 0x20c330, Func Offset: 0x270
	// Line 1661, Address: 0x20c334, Func Offset: 0x274
	// Line 1587, Address: 0x20c33c, Func Offset: 0x27c
	// Line 1661, Address: 0x20c340, Func Offset: 0x280
	// Line 1594, Address: 0x20c368, Func Offset: 0x2a8
	// Line 1598, Address: 0x20c370, Func Offset: 0x2b0
	// Line 1661, Address: 0x20c380, Func Offset: 0x2c0
	// Line 1600, Address: 0x20c388, Func Offset: 0x2c8
	// Line 1602, Address: 0x20c390, Func Offset: 0x2d0
	// Line 1661, Address: 0x20c39c, Func Offset: 0x2dc
	// Line 1604, Address: 0x20c3a4, Func Offset: 0x2e4
	// Line 1661, Address: 0x20c3ac, Func Offset: 0x2ec
	// Line 1628, Address: 0x20c3cc, Func Offset: 0x30c
	// Line 1661, Address: 0x20c3d0, Func Offset: 0x310
	// Line 1628, Address: 0x20c3d4, Func Offset: 0x314
	// Line 1661, Address: 0x20c3d8, Func Offset: 0x318
	// Line 1628, Address: 0x20c3ec, Func Offset: 0x32c
	// Line 1661, Address: 0x20c3f0, Func Offset: 0x330
	// Line 1628, Address: 0x20c3f8, Func Offset: 0x338
	// Line 1661, Address: 0x20c3fc, Func Offset: 0x33c
	// Line 1628, Address: 0x20c40c, Func Offset: 0x34c
	// Line 1629, Address: 0x20c414, Func Offset: 0x354
	// Line 1661, Address: 0x20c41c, Func Offset: 0x35c
	// Line 1634, Address: 0x20c434, Func Offset: 0x374
	// Line 1662, Address: 0x20c43c, Func Offset: 0x37c
	// Func End, Address: 0x20c458, Func Offset: 0x398
}

// StepAwayFromTheSponge__18zNMEGoalSpinBattleFP11zNMESpinnerf
// Start address: 0x20c460
void zNMEGoalSpinBattle::StepAwayFromTheSponge(zNMESpinner* npc, float32 dt)
{
	xVec3 dir_back;
	float32 len;
	uint32 anid_loop;
	xVec3 pos_want;
	// Line 1522, Address: 0x20c460, Func Offset: 0
	// Line 1529, Address: 0x20c488, Func Offset: 0x28
	// Line 1522, Address: 0x20c490, Func Offset: 0x30
	// Line 1529, Address: 0x20c494, Func Offset: 0x34
	// Line 1522, Address: 0x20c498, Func Offset: 0x38
	// Line 1529, Address: 0x20c4a4, Func Offset: 0x44
	// Line 1530, Address: 0x20c4bc, Func Offset: 0x5c
	// Line 1531, Address: 0x20c4c4, Func Offset: 0x64
	// Line 1534, Address: 0x20c500, Func Offset: 0xa0
	// Line 1536, Address: 0x20c514, Func Offset: 0xb4
	// Line 1534, Address: 0x20c518, Func Offset: 0xb8
	// Line 1536, Address: 0x20c51c, Func Offset: 0xbc
	// Line 1534, Address: 0x20c524, Func Offset: 0xc4
	// Line 1535, Address: 0x20c528, Func Offset: 0xc8
	// Line 1536, Address: 0x20c540, Func Offset: 0xe0
	// Line 1545, Address: 0x20c54c, Func Offset: 0xec
	// Line 1560, Address: 0x20c550, Func Offset: 0xf0
	// Line 1545, Address: 0x20c554, Func Offset: 0xf4
	// Line 1560, Address: 0x20c558, Func Offset: 0xf8
	// Line 1545, Address: 0x20c55c, Func Offset: 0xfc
	// Line 1560, Address: 0x20c560, Func Offset: 0x100
	// Line 1545, Address: 0x20c564, Func Offset: 0x104
	// Line 1560, Address: 0x20c568, Func Offset: 0x108
	// Line 1545, Address: 0x20c584, Func Offset: 0x124
	// Line 1560, Address: 0x20c588, Func Offset: 0x128
	// Line 1545, Address: 0x20c590, Func Offset: 0x130
	// Line 1560, Address: 0x20c598, Func Offset: 0x138
	// Line 1545, Address: 0x20c59c, Func Offset: 0x13c
	// Line 1560, Address: 0x20c5a4, Func Offset: 0x144
	// Line 1545, Address: 0x20c5b8, Func Offset: 0x158
	// Line 1560, Address: 0x20c5bc, Func Offset: 0x15c
	// Line 1545, Address: 0x20c5dc, Func Offset: 0x17c
	// Line 1560, Address: 0x20c5e0, Func Offset: 0x180
	// Line 1545, Address: 0x20c60c, Func Offset: 0x1ac
	// Line 1560, Address: 0x20c610, Func Offset: 0x1b0
	// Line 1545, Address: 0x20c614, Func Offset: 0x1b4
	// Line 1560, Address: 0x20c618, Func Offset: 0x1b8
	// Line 1563, Address: 0x20c64c, Func Offset: 0x1ec
	// Line 1564, Address: 0x20c668, Func Offset: 0x208
	// Line 1565, Address: 0x20c684, Func Offset: 0x224
	// Line 1572, Address: 0x20c68c, Func Offset: 0x22c
	// Line 1574, Address: 0x20c6ac, Func Offset: 0x24c
	// Line 1576, Address: 0x20c6ec, Func Offset: 0x28c
	// Line 1533, Address: 0x20c710, Func Offset: 0x2b0
	// Line 1576, Address: 0x20c71c, Func Offset: 0x2bc
	// Line 1538, Address: 0x20c744, Func Offset: 0x2e4
	// Line 1576, Address: 0x20c74c, Func Offset: 0x2ec
	// Line 1537, Address: 0x20c754, Func Offset: 0x2f4
	// Line 1538, Address: 0x20c75c, Func Offset: 0x2fc
	// Line 1576, Address: 0x20c764, Func Offset: 0x304
	// Line 1538, Address: 0x20c770, Func Offset: 0x310
	// Line 1576, Address: 0x20c774, Func Offset: 0x314
	// Line 1539, Address: 0x20c780, Func Offset: 0x320
	// Line 1576, Address: 0x20c784, Func Offset: 0x324
	// Line 1542, Address: 0x20c790, Func Offset: 0x330
	// Line 1576, Address: 0x20c794, Func Offset: 0x334
	// Line 1542, Address: 0x20c79c, Func Offset: 0x33c
	// Line 1576, Address: 0x20c7a4, Func Offset: 0x344
	// Line 1560, Address: 0x20c7b4, Func Offset: 0x354
	// Line 1576, Address: 0x20c7d0, Func Offset: 0x370
	// Line 1560, Address: 0x20c7d4, Func Offset: 0x374
	// Line 1576, Address: 0x20c7d8, Func Offset: 0x378
	// Line 1560, Address: 0x20c7e0, Func Offset: 0x380
	// Line 1576, Address: 0x20c7ec, Func Offset: 0x38c
	// Line 1563, Address: 0x20c814, Func Offset: 0x3b4
	// Line 1566, Address: 0x20c81c, Func Offset: 0x3bc
	// Line 1576, Address: 0x20c82c, Func Offset: 0x3cc
	// Line 1568, Address: 0x20c838, Func Offset: 0x3d8
	// Line 1576, Address: 0x20c840, Func Offset: 0x3e0
	// Line 1569, Address: 0x20c84c, Func Offset: 0x3ec
	// Line 1576, Address: 0x20c850, Func Offset: 0x3f0
	// Line 1569, Address: 0x20c85c, Func Offset: 0x3fc
	// Line 1576, Address: 0x20c860, Func Offset: 0x400
	// Line 1568, Address: 0x20c864, Func Offset: 0x404
	// Line 1576, Address: 0x20c868, Func Offset: 0x408
	// Line 1569, Address: 0x20c87c, Func Offset: 0x41c
	// Line 1576, Address: 0x20c880, Func Offset: 0x420
	// Line 1568, Address: 0x20c884, Func Offset: 0x424
	// Line 1576, Address: 0x20c888, Func Offset: 0x428
	// Line 1569, Address: 0x20c88c, Func Offset: 0x42c
	// Line 1576, Address: 0x20c890, Func Offset: 0x430
	// Line 1569, Address: 0x20c8a0, Func Offset: 0x440
	// Line 1568, Address: 0x20c8a4, Func Offset: 0x444
	// Line 1576, Address: 0x20c8a8, Func Offset: 0x448
	// Line 1568, Address: 0x20c8dc, Func Offset: 0x47c
	// Line 1576, Address: 0x20c8e8, Func Offset: 0x488
	// Line 1570, Address: 0x20c924, Func Offset: 0x4c4
	// Line 1576, Address: 0x20c92c, Func Offset: 0x4cc
	// Line 1574, Address: 0x20c944, Func Offset: 0x4e4
	// Line 1576, Address: 0x20c94c, Func Offset: 0x4ec
	// Line 1574, Address: 0x20c954, Func Offset: 0x4f4
	// Line 1576, Address: 0x20c958, Func Offset: 0x4f8
	// Line 1574, Address: 0x20c960, Func Offset: 0x500
	// Line 1576, Address: 0x20c964, Func Offset: 0x504
	// Line 1577, Address: 0x20c974, Func Offset: 0x514
	// Func End, Address: 0x20c994, Func Offset: 0x534
}

// Process__18zNMEGoalSpinBattleFP11en_trantypefPv
// Start address: 0x20c9a0
int32 zNMEGoalSpinBattle::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	int32 nextgoal;
	zNMESpinner* npc;
	int32 chkTrans;
	en_vis vis;
	int32 amDone;
	int32 amDone;
	// Line 1414, Address: 0x20c9a0, Func Offset: 0
	// Line 1424, Address: 0x20c9a8, Func Offset: 0x8
	// Line 1414, Address: 0x20c9ac, Func Offset: 0xc
	// Line 1422, Address: 0x20c9d0, Func Offset: 0x30
	// Line 1415, Address: 0x20c9d4, Func Offset: 0x34
	// Line 1416, Address: 0x20c9dc, Func Offset: 0x3c
	// Line 1424, Address: 0x20c9e4, Func Offset: 0x44
	// Line 1432, Address: 0x20ca04, Func Offset: 0x64
	// Line 1434, Address: 0x20ca24, Func Offset: 0x84
	// Line 1450, Address: 0x20ca4c, Func Offset: 0xac
	// Line 1463, Address: 0x20ca68, Func Offset: 0xc8
	// Line 1467, Address: 0x20ca70, Func Offset: 0xd0
	// Line 1470, Address: 0x20caac, Func Offset: 0x10c
	// Line 1471, Address: 0x20cac0, Func Offset: 0x120
	// Line 1472, Address: 0x20cac8, Func Offset: 0x128
	// Line 1474, Address: 0x20cacc, Func Offset: 0x12c
	// Line 1472, Address: 0x20cad0, Func Offset: 0x130
	// Line 1474, Address: 0x20cad4, Func Offset: 0x134
	// Line 1473, Address: 0x20cad8, Func Offset: 0x138
	// Line 1474, Address: 0x20cadc, Func Offset: 0x13c
	// Line 1473, Address: 0x20cae0, Func Offset: 0x140
	// Line 1474, Address: 0x20cae8, Func Offset: 0x148
	// Line 1475, Address: 0x20caf8, Func Offset: 0x158
	// Line 1481, Address: 0x20cb00, Func Offset: 0x160
	// Line 1482, Address: 0x20cb10, Func Offset: 0x170
	// Line 1483, Address: 0x20cb18, Func Offset: 0x178
	// Line 1485, Address: 0x20cb1c, Func Offset: 0x17c
	// Line 1483, Address: 0x20cb20, Func Offset: 0x180
	// Line 1485, Address: 0x20cb24, Func Offset: 0x184
	// Line 1484, Address: 0x20cb28, Func Offset: 0x188
	// Line 1485, Address: 0x20cb2c, Func Offset: 0x18c
	// Line 1484, Address: 0x20cb30, Func Offset: 0x190
	// Line 1485, Address: 0x20cb38, Func Offset: 0x198
	// Line 1486, Address: 0x20cb48, Func Offset: 0x1a8
	// Line 1493, Address: 0x20cb50, Func Offset: 0x1b0
	// Line 1494, Address: 0x20cb58, Func Offset: 0x1b8
	// Line 1500, Address: 0x20cb68, Func Offset: 0x1c8
	// Line 1503, Address: 0x20cb74, Func Offset: 0x1d4
	// Line 1501, Address: 0x20cb78, Func Offset: 0x1d8
	// Line 1503, Address: 0x20cb7c, Func Offset: 0x1dc
	// Line 1502, Address: 0x20cb80, Func Offset: 0x1e0
	// Line 1503, Address: 0x20cb84, Func Offset: 0x1e4
	// Line 1502, Address: 0x20cb88, Func Offset: 0x1e8
	// Line 1503, Address: 0x20cb90, Func Offset: 0x1f0
	// Line 1504, Address: 0x20cba0, Func Offset: 0x200
	// Line 1510, Address: 0x20cba8, Func Offset: 0x208
	// Line 1511, Address: 0x20cbbc, Func Offset: 0x21c
	// Line 1512, Address: 0x20cc9c, Func Offset: 0x2fc
	// Line 1514, Address: 0x20ccac, Func Offset: 0x30c
	// Line 1517, Address: 0x20ccd8, Func Offset: 0x338
	// Line 1426, Address: 0x20cd38, Func Offset: 0x398
	// Line 1428, Address: 0x20cd3c, Func Offset: 0x39c
	// Line 1517, Address: 0x20cd40, Func Offset: 0x3a0
	// Line 1428, Address: 0x20cd44, Func Offset: 0x3a4
	// Line 1427, Address: 0x20cd48, Func Offset: 0x3a8
	// Line 1428, Address: 0x20cd4c, Func Offset: 0x3ac
	// Line 1427, Address: 0x20cd50, Func Offset: 0x3b0
	// Line 1517, Address: 0x20cd54, Func Offset: 0x3b4
	// Line 1429, Address: 0x20cd68, Func Offset: 0x3c8
	// Line 1440, Address: 0x20cd70, Func Offset: 0x3d0
	// Line 1517, Address: 0x20cd78, Func Offset: 0x3d8
	// Line 1449, Address: 0x20cd80, Func Offset: 0x3e0
	// Line 1517, Address: 0x20cd88, Func Offset: 0x3e8
	// Line 1453, Address: 0x20cd8c, Func Offset: 0x3ec
	// Line 1517, Address: 0x20cd90, Func Offset: 0x3f0
	// Line 1454, Address: 0x20cd94, Func Offset: 0x3f4
	// Line 1517, Address: 0x20cd98, Func Offset: 0x3f8
	// Line 1454, Address: 0x20cd9c, Func Offset: 0x3fc
	// Line 1517, Address: 0x20cda4, Func Offset: 0x404
	// Line 1454, Address: 0x20cda8, Func Offset: 0x408
	// Line 1517, Address: 0x20cdac, Func Offset: 0x40c
	// Line 1453, Address: 0x20cdcc, Func Offset: 0x42c
	// Line 1454, Address: 0x20cdd4, Func Offset: 0x434
	// Line 1517, Address: 0x20cdd8, Func Offset: 0x438
	// Line 1454, Address: 0x20cddc, Func Offset: 0x43c
	// Line 1517, Address: 0x20cde4, Func Offset: 0x444
	// Line 1461, Address: 0x20cdec, Func Offset: 0x44c
	// Line 1517, Address: 0x20cdf4, Func Offset: 0x454
	// Line 1462, Address: 0x20cdfc, Func Offset: 0x45c
	// Line 1455, Address: 0x20ce04, Func Offset: 0x464
	// Line 1457, Address: 0x20ce08, Func Offset: 0x468
	// Line 1517, Address: 0x20ce0c, Func Offset: 0x46c
	// Line 1457, Address: 0x20ce10, Func Offset: 0x470
	// Line 1456, Address: 0x20ce14, Func Offset: 0x474
	// Line 1457, Address: 0x20ce18, Func Offset: 0x478
	// Line 1456, Address: 0x20ce1c, Func Offset: 0x47c
	// Line 1517, Address: 0x20ce20, Func Offset: 0x480
	// Line 1458, Address: 0x20ce34, Func Offset: 0x494
	// Line 1465, Address: 0x20ce3c, Func Offset: 0x49c
	// Line 1517, Address: 0x20ce40, Func Offset: 0x4a0
	// Line 1466, Address: 0x20ce48, Func Offset: 0x4a8
	// Line 1517, Address: 0x20ce50, Func Offset: 0x4b0
	// Line 1467, Address: 0x20ce58, Func Offset: 0x4b8
	// Line 1517, Address: 0x20ce5c, Func Offset: 0x4bc
	// Line 1467, Address: 0x20ce6c, Func Offset: 0x4cc
	// Line 1517, Address: 0x20ce70, Func Offset: 0x4d0
	// Line 1467, Address: 0x20ce74, Func Offset: 0x4d4
	// Line 1517, Address: 0x20ce78, Func Offset: 0x4d8
	// Line 1467, Address: 0x20ce7c, Func Offset: 0x4dc
	// Line 1517, Address: 0x20ce80, Func Offset: 0x4e0
	// Line 1467, Address: 0x20ce84, Func Offset: 0x4e4
	// Line 1517, Address: 0x20ce88, Func Offset: 0x4e8
	// Line 1467, Address: 0x20cea4, Func Offset: 0x504
	// Line 1517, Address: 0x20cea8, Func Offset: 0x508
	// Line 1467, Address: 0x20ceac, Func Offset: 0x50c
	// Line 1517, Address: 0x20ceb4, Func Offset: 0x514
	// Line 1467, Address: 0x20cedc, Func Offset: 0x53c
	// Line 1495, Address: 0x20cefc, Func Offset: 0x55c
	// Line 1497, Address: 0x20cf00, Func Offset: 0x560
	// Line 1517, Address: 0x20cf04, Func Offset: 0x564
	// Line 1497, Address: 0x20cf08, Func Offset: 0x568
	// Line 1496, Address: 0x20cf0c, Func Offset: 0x56c
	// Line 1497, Address: 0x20cf10, Func Offset: 0x570
	// Line 1496, Address: 0x20cf14, Func Offset: 0x574
	// Line 1517, Address: 0x20cf18, Func Offset: 0x578
	// Line 1498, Address: 0x20cf2c, Func Offset: 0x58c
	// Line 1517, Address: 0x20cf34, Func Offset: 0x594
	// Line 1510, Address: 0x20cf94, Func Offset: 0x5f4
	// Line 1517, Address: 0x20cf98, Func Offset: 0x5f8
	// Line 1510, Address: 0x20cfa0, Func Offset: 0x600
	// Line 1517, Address: 0x20cfa4, Func Offset: 0x604
	// Line 1510, Address: 0x20cfac, Func Offset: 0x60c
	// Line 1517, Address: 0x20cfb0, Func Offset: 0x610
	// Line 1511, Address: 0x20cfd8, Func Offset: 0x638
	// Line 1518, Address: 0x20cfe0, Func Offset: 0x640
	// Func End, Address: 0x20d004, Func Offset: 0x664
}

// Resume__18zNMEGoalSpinBattleFfPv
// Start address: 0x20d010
int32 zNMEGoalSpinBattle::Resume()
{
	zNMESpinner* npc;
	// Line 1395, Address: 0x20d010, Func Offset: 0
	// Line 1401, Address: 0x20d014, Func Offset: 0x4
	// Line 1395, Address: 0x20d018, Func Offset: 0x8
	// Line 1398, Address: 0x20d01c, Func Offset: 0xc
	// Line 1395, Address: 0x20d020, Func Offset: 0x10
	// Line 1401, Address: 0x20d024, Func Offset: 0x14
	// Line 1395, Address: 0x20d028, Func Offset: 0x18
	// Line 1402, Address: 0x20d02c, Func Offset: 0x1c
	// Line 1395, Address: 0x20d030, Func Offset: 0x20
	// Line 1402, Address: 0x20d034, Func Offset: 0x24
	// Line 1395, Address: 0x20d038, Func Offset: 0x28
	// Line 1403, Address: 0x20d03c, Func Offset: 0x2c
	// Line 1396, Address: 0x20d040, Func Offset: 0x30
	// Line 1403, Address: 0x20d044, Func Offset: 0x34
	// Line 1406, Address: 0x20d04c, Func Offset: 0x3c
	// Line 1396, Address: 0x20d054, Func Offset: 0x44
	// Line 1398, Address: 0x20d058, Func Offset: 0x48
	// Line 1401, Address: 0x20d05c, Func Offset: 0x4c
	// Line 1406, Address: 0x20d060, Func Offset: 0x50
	// Line 1401, Address: 0x20d064, Func Offset: 0x54
	// Line 1402, Address: 0x20d06c, Func Offset: 0x5c
	// Line 1403, Address: 0x20d078, Func Offset: 0x68
	// Line 1406, Address: 0x20d080, Func Offset: 0x70
	// Line 1408, Address: 0x20d088, Func Offset: 0x78
	// Line 1410, Address: 0x20d158, Func Offset: 0x148
	// Line 1408, Address: 0x20d19c, Func Offset: 0x18c
	// Line 1410, Address: 0x20d1b0, Func Offset: 0x1a0
	// Line 1408, Address: 0x20d1b4, Func Offset: 0x1a4
	// Line 1410, Address: 0x20d1b8, Func Offset: 0x1a8
	// Line 1408, Address: 0x20d1bc, Func Offset: 0x1ac
	// Line 1410, Address: 0x20d1c8, Func Offset: 0x1b8
	// Line 1411, Address: 0x20d21c, Func Offset: 0x20c
	// Func End, Address: 0x20d238, Func Offset: 0x228
}

// Suspend__18zNMEGoalSpinBattleFfPv
// Start address: 0x20d240
int32 zNMEGoalSpinBattle::Suspend()
{
	zNMESpinner* npc;
	// Line 1381, Address: 0x20d240, Func Offset: 0
	// Line 1382, Address: 0x20d254, Func Offset: 0x14
	// Line 1384, Address: 0x20d25c, Func Offset: 0x1c
	// Line 1386, Address: 0x20d270, Func Offset: 0x30
	// Line 1389, Address: 0x20d27c, Func Offset: 0x3c
	// Line 1391, Address: 0x20d290, Func Offset: 0x50
	// Line 1389, Address: 0x20d2b0, Func Offset: 0x70
	// Line 1392, Address: 0x20d2bc, Func Offset: 0x7c
	// Func End, Address: 0x20d2d0, Func Offset: 0x90
}

// Exit__18zNMEGoalSpinBattleFfPv
// Start address: 0x20d2d0
int32 zNMEGoalSpinBattle::Exit()
{
	zNMESpinner* npc;
	// Line 1367, Address: 0x20d2d0, Func Offset: 0
	// Line 1368, Address: 0x20d2e4, Func Offset: 0x14
	// Line 1370, Address: 0x20d2ec, Func Offset: 0x1c
	// Line 1372, Address: 0x20d300, Func Offset: 0x30
	// Line 1375, Address: 0x20d30c, Func Offset: 0x3c
	// Line 1377, Address: 0x20d320, Func Offset: 0x50
	// Line 1375, Address: 0x20d340, Func Offset: 0x70
	// Line 1378, Address: 0x20d34c, Func Offset: 0x7c
	// Func End, Address: 0x20d360, Func Offset: 0x90
}

// Enter__18zNMEGoalSpinBattleFfPv
// Start address: 0x20d360
int32 zNMEGoalSpinBattle::Enter()
{
	zNMESpinner* npc;
	// Line 1342, Address: 0x20d360, Func Offset: 0
	// Line 1352, Address: 0x20d364, Func Offset: 0x4
	// Line 1342, Address: 0x20d368, Func Offset: 0x8
	// Line 1352, Address: 0x20d36c, Func Offset: 0xc
	// Line 1342, Address: 0x20d370, Func Offset: 0x10
	// Line 1353, Address: 0x20d374, Func Offset: 0x14
	// Line 1342, Address: 0x20d378, Func Offset: 0x18
	// Line 1353, Address: 0x20d37c, Func Offset: 0x1c
	// Line 1342, Address: 0x20d380, Func Offset: 0x20
	// Line 1354, Address: 0x20d384, Func Offset: 0x24
	// Line 1342, Address: 0x20d388, Func Offset: 0x28
	// Line 1354, Address: 0x20d38c, Func Offset: 0x2c
	// Line 1343, Address: 0x20d390, Func Offset: 0x30
	// Line 1356, Address: 0x20d394, Func Offset: 0x34
	// Line 1359, Address: 0x20d39c, Func Offset: 0x3c
	// Line 1343, Address: 0x20d3a4, Func Offset: 0x44
	// Line 1352, Address: 0x20d3a8, Func Offset: 0x48
	// Line 1353, Address: 0x20d3b4, Func Offset: 0x54
	// Line 1354, Address: 0x20d3c0, Func Offset: 0x60
	// Line 1356, Address: 0x20d3cc, Func Offset: 0x6c
	// Line 1359, Address: 0x20d3d0, Func Offset: 0x70
	// Line 1361, Address: 0x20d3d8, Func Offset: 0x78
	// Line 1363, Address: 0x20d4a8, Func Offset: 0x148
	// Line 1361, Address: 0x20d4ec, Func Offset: 0x18c
	// Line 1363, Address: 0x20d500, Func Offset: 0x1a0
	// Line 1361, Address: 0x20d504, Func Offset: 0x1a4
	// Line 1363, Address: 0x20d508, Func Offset: 0x1a8
	// Line 1361, Address: 0x20d50c, Func Offset: 0x1ac
	// Line 1363, Address: 0x20d518, Func Offset: 0x1b8
	// Line 1364, Address: 0x20d56c, Func Offset: 0x20c
	// Func End, Address: 0x20d588, Func Offset: 0x228
}

// ChkTranCases__17zNMEGoalSpinAwareFP11zNMESpinnerRiR11en_trantype
// Start address: 0x20d590
int32 zNMEGoalSpinAware::ChkTranCases(zNMESpinner* npc, int32& nextgoal, en_trantype& trantype)
{
	en_vis vis;
	int32 vidx;
	float32* wtlist;
	// Line 1270, Address: 0x20d590, Func Offset: 0
	// Line 1272, Address: 0x20d5bc, Func Offset: 0x2c
	// Line 1273, Address: 0x20d5dc, Func Offset: 0x4c
	// Line 1275, Address: 0x20d5e4, Func Offset: 0x54
	// Line 1278, Address: 0x20d5fc, Func Offset: 0x6c
	// Line 1285, Address: 0x20d610, Func Offset: 0x80
	// Line 1295, Address: 0x20d62c, Func Offset: 0x9c
	// Line 1296, Address: 0x20d64c, Func Offset: 0xbc
	// Line 1305, Address: 0x20d658, Func Offset: 0xc8
	// Line 1334, Address: 0x20d660, Func Offset: 0xd0
	// Line 1276, Address: 0x20d668, Func Offset: 0xd8
	// Line 1281, Address: 0x20d670, Func Offset: 0xe0
	// Line 1334, Address: 0x20d674, Func Offset: 0xe4
	// Line 1281, Address: 0x20d678, Func Offset: 0xe8
	// Line 1280, Address: 0x20d67c, Func Offset: 0xec
	// Line 1281, Address: 0x20d680, Func Offset: 0xf0
	// Line 1280, Address: 0x20d684, Func Offset: 0xf4
	// Line 1334, Address: 0x20d688, Func Offset: 0xf8
	// Line 1282, Address: 0x20d69c, Func Offset: 0x10c
	// Line 1288, Address: 0x20d6a4, Func Offset: 0x114
	// Line 1334, Address: 0x20d6a8, Func Offset: 0x118
	// Line 1288, Address: 0x20d6ac, Func Offset: 0x11c
	// Line 1287, Address: 0x20d6b0, Func Offset: 0x120
	// Line 1288, Address: 0x20d6b4, Func Offset: 0x124
	// Line 1287, Address: 0x20d6b8, Func Offset: 0x128
	// Line 1334, Address: 0x20d6bc, Func Offset: 0x12c
	// Line 1289, Address: 0x20d6d0, Func Offset: 0x140
	// Line 1299, Address: 0x20d6d8, Func Offset: 0x148
	// Line 1301, Address: 0x20d6dc, Func Offset: 0x14c
	// Line 1334, Address: 0x20d6e0, Func Offset: 0x150
	// Line 1301, Address: 0x20d6e4, Func Offset: 0x154
	// Line 1300, Address: 0x20d6e8, Func Offset: 0x158
	// Line 1301, Address: 0x20d6ec, Func Offset: 0x15c
	// Line 1300, Address: 0x20d6f0, Func Offset: 0x160
	// Line 1334, Address: 0x20d6f4, Func Offset: 0x164
	// Line 1302, Address: 0x20d708, Func Offset: 0x178
	// Line 1334, Address: 0x20d710, Func Offset: 0x180
	// Line 1309, Address: 0x20d718, Func Offset: 0x188
	// Line 1334, Address: 0x20d71c, Func Offset: 0x18c
	// Line 1310, Address: 0x20d738, Func Offset: 0x1a8
	// Line 1313, Address: 0x20d73c, Func Offset: 0x1ac
	// Line 1334, Address: 0x20d740, Func Offset: 0x1b0
	// Line 1325, Address: 0x20d750, Func Offset: 0x1c0
	// Line 1334, Address: 0x20d754, Func Offset: 0x1c4
	// Line 1327, Address: 0x20d760, Func Offset: 0x1d0
	// Line 1328, Address: 0x20d764, Func Offset: 0x1d4
	// Line 1334, Address: 0x20d768, Func Offset: 0x1d8
	// Line 1328, Address: 0x20d76c, Func Offset: 0x1dc
	// Line 1334, Address: 0x20d770, Func Offset: 0x1e0
	// Line 1328, Address: 0x20d774, Func Offset: 0x1e4
	// Line 1334, Address: 0x20d778, Func Offset: 0x1e8
	// Line 1329, Address: 0x20d784, Func Offset: 0x1f4
	// Line 1334, Address: 0x20d78c, Func Offset: 0x1fc
	// Line 1310, Address: 0x20d794, Func Offset: 0x204
	// Line 1334, Address: 0x20d79c, Func Offset: 0x20c
	// Line 1310, Address: 0x20d7a4, Func Offset: 0x214
	// Line 1334, Address: 0x20d7c8, Func Offset: 0x238
	// Line 1310, Address: 0x20d7d0, Func Offset: 0x240
	// Line 1334, Address: 0x20d7d8, Func Offset: 0x248
	// Line 1310, Address: 0x20d7dc, Func Offset: 0x24c
	// Line 1334, Address: 0x20d7e0, Func Offset: 0x250
	// Line 1310, Address: 0x20d7e8, Func Offset: 0x258
	// Line 1334, Address: 0x20d7ec, Func Offset: 0x25c
	// Line 1310, Address: 0x20d7f4, Func Offset: 0x264
	// Line 1334, Address: 0x20d7f8, Func Offset: 0x268
	// Line 1310, Address: 0x20d804, Func Offset: 0x274
	// Line 1334, Address: 0x20d808, Func Offset: 0x278
	// Line 1310, Address: 0x20d814, Func Offset: 0x284
	// Line 1334, Address: 0x20d818, Func Offset: 0x288
	// Line 1310, Address: 0x20d828, Func Offset: 0x298
	// Line 1334, Address: 0x20d838, Func Offset: 0x2a8
	// Line 1310, Address: 0x20d83c, Func Offset: 0x2ac
	// Line 1334, Address: 0x20d848, Func Offset: 0x2b8
	// Line 1315, Address: 0x20d86c, Func Offset: 0x2dc
	// Line 1316, Address: 0x20d870, Func Offset: 0x2e0
	// Line 1334, Address: 0x20d874, Func Offset: 0x2e4
	// Line 1316, Address: 0x20d878, Func Offset: 0x2e8
	// Line 1334, Address: 0x20d87c, Func Offset: 0x2ec
	// Line 1316, Address: 0x20d880, Func Offset: 0x2f0
	// Line 1334, Address: 0x20d884, Func Offset: 0x2f4
	// Line 1317, Address: 0x20d890, Func Offset: 0x300
	// Line 1334, Address: 0x20d898, Func Offset: 0x308
	// Line 1321, Address: 0x20d89c, Func Offset: 0x30c
	// Line 1322, Address: 0x20d8a0, Func Offset: 0x310
	// Line 1334, Address: 0x20d8a4, Func Offset: 0x314
	// Line 1322, Address: 0x20d8a8, Func Offset: 0x318
	// Line 1334, Address: 0x20d8ac, Func Offset: 0x31c
	// Line 1322, Address: 0x20d8b0, Func Offset: 0x320
	// Line 1334, Address: 0x20d8b4, Func Offset: 0x324
	// Line 1323, Address: 0x20d8c0, Func Offset: 0x330
	// Line 1335, Address: 0x20d8c4, Func Offset: 0x334
	// Func End, Address: 0x20d8e8, Func Offset: 0x358
}

// Process__17zNMEGoalSpinAwareFP11en_trantypefPv
// Start address: 0x20d8f0
int32 zNMEGoalSpinAware::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	int32 nextgoal;
	zNMESpinner* npc;
	int32 doTran;
	// Line 1242, Address: 0x20d8f0, Func Offset: 0
	// Line 1247, Address: 0x20d908, Func Offset: 0x18
	// Line 1242, Address: 0x20d90c, Func Offset: 0x1c
	// Line 1247, Address: 0x20d924, Func Offset: 0x34
	// Line 1243, Address: 0x20d928, Func Offset: 0x38
	// Line 1244, Address: 0x20d930, Func Offset: 0x40
	// Line 1247, Address: 0x20d938, Func Offset: 0x48
	// Line 1248, Address: 0x20d940, Func Offset: 0x50
	// Line 1255, Address: 0x20d948, Func Offset: 0x58
	// Line 1257, Address: 0x20d95c, Func Offset: 0x6c
	// Line 1258, Address: 0x20d970, Func Offset: 0x80
	// Line 1263, Address: 0x20d9c0, Func Offset: 0xd0
	// Line 1265, Address: 0x20da94, Func Offset: 0x1a4
	// Line 1249, Address: 0x20daf4, Func Offset: 0x204
	// Line 1265, Address: 0x20dafc, Func Offset: 0x20c
	// Line 1256, Address: 0x20db00, Func Offset: 0x210
	// Line 1265, Address: 0x20db04, Func Offset: 0x214
	// Line 1256, Address: 0x20db08, Func Offset: 0x218
	// Line 1265, Address: 0x20db0c, Func Offset: 0x21c
	// Line 1256, Address: 0x20db20, Func Offset: 0x230
	// Line 1265, Address: 0x20db24, Func Offset: 0x234
	// Line 1256, Address: 0x20db2c, Func Offset: 0x23c
	// Line 1265, Address: 0x20db30, Func Offset: 0x240
	// Line 1256, Address: 0x20db40, Func Offset: 0x250
	// Line 1263, Address: 0x20db50, Func Offset: 0x260
	// Line 1265, Address: 0x20db6c, Func Offset: 0x27c
	// Line 1263, Address: 0x20db70, Func Offset: 0x280
	// Line 1265, Address: 0x20db74, Func Offset: 0x284
	// Line 1263, Address: 0x20db7c, Func Offset: 0x28c
	// Line 1265, Address: 0x20db84, Func Offset: 0x294
	// Line 1266, Address: 0x20db94, Func Offset: 0x2a4
	// Func End, Address: 0x20dbbc, Func Offset: 0x2cc
}

// Enter__17zNMEGoalSpinAwareFfPv
// Start address: 0x20dbc0
int32 zNMEGoalSpinAware::Enter()
{
	zNMESpinner* npc;
	// Line 1226, Address: 0x20dbc0, Func Offset: 0
	// Line 1230, Address: 0x20dbc4, Func Offset: 0x4
	// Line 1226, Address: 0x20dbc8, Func Offset: 0x8
	// Line 1227, Address: 0x20dbd8, Func Offset: 0x18
	// Line 1230, Address: 0x20dbe4, Func Offset: 0x24
	// Line 1238, Address: 0x20dbec, Func Offset: 0x2c
	// Line 1239, Address: 0x20dc74, Func Offset: 0xb4
	// Func End, Address: 0x20dc8c, Func Offset: 0xcc
}

// Spin_SeePlyr__11zNMESpinnerFP5xGoalPvP11en_trantypefPv
// Start address: 0x20dc90
int32 Spin_SeePlyr(xGoal* rawgoal, en_trantype* trantype)
{
	int32 nextgoal;
	zNMESpinner* npc;
	zNMEArena* arena;
	en_vis vis;
	// Line 1181, Address: 0x20dc90, Func Offset: 0
	// Line 1184, Address: 0x20dc94, Func Offset: 0x4
	// Line 1181, Address: 0x20dc98, Func Offset: 0x8
	// Line 1184, Address: 0x20dc9c, Func Offset: 0xc
	// Line 1181, Address: 0x20dca0, Func Offset: 0x10
	// Line 1184, Address: 0x20dcb4, Func Offset: 0x24
	// Line 1187, Address: 0x20dcc4, Func Offset: 0x34
	// Line 1190, Address: 0x20dcd8, Func Offset: 0x48
	// Line 1197, Address: 0x20dcdc, Func Offset: 0x4c
	// Line 1190, Address: 0x20dce4, Func Offset: 0x54
	// Line 1196, Address: 0x20dce8, Func Offset: 0x58
	// Line 1197, Address: 0x20dcec, Func Offset: 0x5c
	// Line 1198, Address: 0x20dd50, Func Offset: 0xc0
	// Line 1200, Address: 0x20dd5c, Func Offset: 0xcc
	// Line 1201, Address: 0x20dd64, Func Offset: 0xd4
	// Line 1203, Address: 0x20dd6c, Func Offset: 0xdc
	// Line 1204, Address: 0x20dd8c, Func Offset: 0xfc
	// Line 1210, Address: 0x20dd98, Func Offset: 0x108
	// Line 1214, Address: 0x20dda0, Func Offset: 0x110
	// Line 1215, Address: 0x20ddbc, Func Offset: 0x12c
	// Line 1214, Address: 0x20ddc0, Func Offset: 0x130
	// Line 1215, Address: 0x20ddc4, Func Offset: 0x134
	// Line 1214, Address: 0x20ddc8, Func Offset: 0x138
	// Line 1215, Address: 0x20ddcc, Func Offset: 0x13c
	// Line 1214, Address: 0x20ddd0, Func Offset: 0x140
	// Line 1215, Address: 0x20dddc, Func Offset: 0x14c
	// Line 1217, Address: 0x20ddec, Func Offset: 0x15c
	// Line 1185, Address: 0x20ddf4, Func Offset: 0x164
	// Line 1188, Address: 0x20ddfc, Func Offset: 0x16c
	// Line 1217, Address: 0x20de04, Func Offset: 0x174
	// Line 1197, Address: 0x20de20, Func Offset: 0x190
	// Line 1217, Address: 0x20de28, Func Offset: 0x198
	// Line 1197, Address: 0x20de3c, Func Offset: 0x1ac
	// Line 1217, Address: 0x20de40, Func Offset: 0x1b0
	// Line 1197, Address: 0x20de44, Func Offset: 0x1b4
	// Line 1217, Address: 0x20de48, Func Offset: 0x1b8
	// Line 1197, Address: 0x20de64, Func Offset: 0x1d4
	// Line 1217, Address: 0x20de70, Func Offset: 0x1e0
	// Line 1197, Address: 0x20de88, Func Offset: 0x1f8
	// Line 1217, Address: 0x20de98, Func Offset: 0x208
	// Line 1197, Address: 0x20de9c, Func Offset: 0x20c
	// Line 1217, Address: 0x20deb0, Func Offset: 0x220
	// Line 1197, Address: 0x20dec4, Func Offset: 0x234
	// Line 1217, Address: 0x20decc, Func Offset: 0x23c
	// Line 1197, Address: 0x20dedc, Func Offset: 0x24c
	// Line 1217, Address: 0x20def8, Func Offset: 0x268
	// Line 1197, Address: 0x20df04, Func Offset: 0x274
	// Line 1217, Address: 0x20df08, Func Offset: 0x278
	// Line 1197, Address: 0x20df10, Func Offset: 0x280
	// Line 1217, Address: 0x20df20, Func Offset: 0x290
	// Line 1199, Address: 0x20df28, Func Offset: 0x298
	// Line 1217, Address: 0x20df30, Func Offset: 0x2a0
	// Line 1218, Address: 0x20df34, Func Offset: 0x2a4
	// Func End, Address: 0x20df4c, Func Offset: 0x2bc
}

// HealthRatio__11zNMESpinnerFv
// Start address: 0x20df50
float32 zNMESpinner::HealthRatio()
{
	float32 rat;
	// Line 1157, Address: 0x20df50, Func Offset: 0
	// Line 1158, Address: 0x20df54, Func Offset: 0x4
	// Line 1161, Address: 0x20df5c, Func Offset: 0xc
	// Line 1164, Address: 0x20df60, Func Offset: 0x10
	// Line 1162, Address: 0x20df64, Func Offset: 0x14
	// Line 1164, Address: 0x20df68, Func Offset: 0x18
	// Line 1161, Address: 0x20df6c, Func Offset: 0x1c
	// Line 1162, Address: 0x20df70, Func Offset: 0x20
	// Line 1164, Address: 0x20df80, Func Offset: 0x30
	// Line 1159, Address: 0x20dfd8, Func Offset: 0x88
	// Line 1165, Address: 0x20dfdc, Func Offset: 0x8c
	// Func End, Address: 0x20dfe4, Func Offset: 0x94
}

// VisionTarget__11zNMESpinnerCFP4xEnt9en_defconi
// Start address: 0x20dff0
en_vis zNMESpinner::VisionTarget(xEnt* ent, en_defcon defcon)
{
	zNMEArena* arena;
	// Line 1060, Address: 0x20dff0, Func Offset: 0
	// Line 1062, Address: 0x20dff4, Func Offset: 0x4
	// Line 1066, Address: 0x20e004, Func Offset: 0x14
	// Line 1070, Address: 0x20e00c, Func Offset: 0x1c
	// Line 1071, Address: 0x20e014, Func Offset: 0x24
	// Line 1082, Address: 0x20e038, Func Offset: 0x48
	// Line 1097, Address: 0x20e040, Func Offset: 0x50
	// Line 1117, Address: 0x20e04c, Func Offset: 0x5c
	// Line 1119, Address: 0x20e058, Func Offset: 0x68
	// Line 1117, Address: 0x20e064, Func Offset: 0x74
	// Line 1119, Address: 0x20e068, Func Offset: 0x78
	// Line 1120, Address: 0x20e080, Func Offset: 0x90
	// Line 1123, Address: 0x20e088, Func Offset: 0x98
	// Line 1125, Address: 0x20e0b0, Func Offset: 0xc0
	// Line 1126, Address: 0x20e0b8, Func Offset: 0xc8
	// Line 1128, Address: 0x20e0c0, Func Offset: 0xd0
	// Line 1063, Address: 0x20e0c8, Func Offset: 0xd8
	// Line 1067, Address: 0x20e0d0, Func Offset: 0xe0
	// Line 1072, Address: 0x20e0d8, Func Offset: 0xe8
	// Line 1128, Address: 0x20e0e0, Func Offset: 0xf0
	// Line 1086, Address: 0x20e0ec, Func Offset: 0xfc
	// Line 1128, Address: 0x20e0f8, Func Offset: 0x108
	// Line 1086, Address: 0x20e0fc, Func Offset: 0x10c
	// Line 1128, Address: 0x20e10c, Func Offset: 0x11c
	// Line 1086, Address: 0x20e114, Func Offset: 0x124
	// Line 1128, Address: 0x20e118, Func Offset: 0x128
	// Line 1089, Address: 0x20e120, Func Offset: 0x130
	// Line 1091, Address: 0x20e128, Func Offset: 0x138
	// Line 1084, Address: 0x20e130, Func Offset: 0x140
	// Line 1128, Address: 0x20e138, Func Offset: 0x148
	// Line 1086, Address: 0x20e13c, Func Offset: 0x14c
	// Line 1128, Address: 0x20e144, Func Offset: 0x154
	// Line 1086, Address: 0x20e15c, Func Offset: 0x16c
	// Line 1128, Address: 0x20e160, Func Offset: 0x170
	// Line 1086, Address: 0x20e168, Func Offset: 0x178
	// Line 1128, Address: 0x20e16c, Func Offset: 0x17c
	// Line 1086, Address: 0x20e170, Func Offset: 0x180
	// Line 1128, Address: 0x20e178, Func Offset: 0x188
	// Line 1086, Address: 0x20e190, Func Offset: 0x1a0
	// Line 1128, Address: 0x20e194, Func Offset: 0x1a4
	// Line 1086, Address: 0x20e198, Func Offset: 0x1a8
	// Line 1128, Address: 0x20e1a4, Func Offset: 0x1b4
	// Line 1086, Address: 0x20e1cc, Func Offset: 0x1dc
	// Line 1128, Address: 0x20e1ec, Func Offset: 0x1fc
	// Line 1099, Address: 0x20e1f0, Func Offset: 0x200
	// Line 1128, Address: 0x20e1fc, Func Offset: 0x20c
	// Line 1099, Address: 0x20e200, Func Offset: 0x210
	// Line 1128, Address: 0x20e210, Func Offset: 0x220
	// Line 1103, Address: 0x20e220, Func Offset: 0x230
	// Line 1128, Address: 0x20e224, Func Offset: 0x234
	// Line 1106, Address: 0x20e22c, Func Offset: 0x23c
	// Line 1128, Address: 0x20e248, Func Offset: 0x258
	// Line 1106, Address: 0x20e250, Func Offset: 0x260
	// Line 1128, Address: 0x20e254, Func Offset: 0x264
	// Line 1109, Address: 0x20e25c, Func Offset: 0x26c
	// Line 1111, Address: 0x20e264, Func Offset: 0x274
	// Line 1128, Address: 0x20e26c, Func Offset: 0x27c
	// Line 1099, Address: 0x20e27c, Func Offset: 0x28c
	// Line 1128, Address: 0x20e280, Func Offset: 0x290
	// Line 1099, Address: 0x20e290, Func Offset: 0x2a0
	// Line 1128, Address: 0x20e298, Func Offset: 0x2a8
	// Line 1099, Address: 0x20e2a8, Func Offset: 0x2b8
	// Line 1128, Address: 0x20e2ac, Func Offset: 0x2bc
	// Line 1099, Address: 0x20e2b0, Func Offset: 0x2c0
	// Line 1128, Address: 0x20e2b4, Func Offset: 0x2c4
	// Line 1099, Address: 0x20e2d0, Func Offset: 0x2e0
	// Line 1128, Address: 0x20e2d8, Func Offset: 0x2e8
	// Line 1099, Address: 0x20e2f0, Func Offset: 0x300
	// Line 1128, Address: 0x20e300, Func Offset: 0x310
	// Line 1099, Address: 0x20e304, Func Offset: 0x314
	// Line 1101, Address: 0x20e318, Func Offset: 0x328
	// Line 1104, Address: 0x20e320, Func Offset: 0x330
	// Line 1128, Address: 0x20e328, Func Offset: 0x338
	// Line 1106, Address: 0x20e32c, Func Offset: 0x33c
	// Line 1128, Address: 0x20e334, Func Offset: 0x344
	// Line 1106, Address: 0x20e340, Func Offset: 0x350
	// Line 1128, Address: 0x20e344, Func Offset: 0x354
	// Line 1106, Address: 0x20e350, Func Offset: 0x360
	// Line 1128, Address: 0x20e354, Func Offset: 0x364
	// Line 1106, Address: 0x20e35c, Func Offset: 0x36c
	// Line 1128, Address: 0x20e360, Func Offset: 0x370
	// Line 1106, Address: 0x20e370, Func Offset: 0x380
	// Line 1128, Address: 0x20e374, Func Offset: 0x384
	// Line 1106, Address: 0x20e378, Func Offset: 0x388
	// Line 1128, Address: 0x20e380, Func Offset: 0x390
	// Line 1106, Address: 0x20e398, Func Offset: 0x3a8
	// Line 1128, Address: 0x20e3a0, Func Offset: 0x3b0
	// Line 1106, Address: 0x20e3bc, Func Offset: 0x3cc
	// Line 1128, Address: 0x20e3dc, Func Offset: 0x3ec
	// Line 1119, Address: 0x20e3ec, Func Offset: 0x3fc
	// Line 1128, Address: 0x20e3f0, Func Offset: 0x400
	// Line 1119, Address: 0x20e400, Func Offset: 0x410
	// Line 1128, Address: 0x20e408, Func Offset: 0x418
	// Line 1119, Address: 0x20e418, Func Offset: 0x428
	// Line 1128, Address: 0x20e41c, Func Offset: 0x42c
	// Line 1119, Address: 0x20e420, Func Offset: 0x430
	// Line 1128, Address: 0x20e424, Func Offset: 0x434
	// Line 1119, Address: 0x20e440, Func Offset: 0x450
	// Line 1128, Address: 0x20e448, Func Offset: 0x458
	// Line 1119, Address: 0x20e460, Func Offset: 0x470
	// Line 1128, Address: 0x20e470, Func Offset: 0x480
	// Line 1119, Address: 0x20e474, Func Offset: 0x484
	// Line 1121, Address: 0x20e488, Func Offset: 0x498
	// Line 1128, Address: 0x20e490, Func Offset: 0x4a0
	// Line 1123, Address: 0x20e494, Func Offset: 0x4a4
	// Line 1128, Address: 0x20e49c, Func Offset: 0x4ac
	// Line 1123, Address: 0x20e4a8, Func Offset: 0x4b8
	// Line 1128, Address: 0x20e4ac, Func Offset: 0x4bc
	// Line 1123, Address: 0x20e4b8, Func Offset: 0x4c8
	// Line 1128, Address: 0x20e4bc, Func Offset: 0x4cc
	// Line 1123, Address: 0x20e4c4, Func Offset: 0x4d4
	// Line 1128, Address: 0x20e4c8, Func Offset: 0x4d8
	// Line 1123, Address: 0x20e4d8, Func Offset: 0x4e8
	// Line 1128, Address: 0x20e4dc, Func Offset: 0x4ec
	// Line 1123, Address: 0x20e4e0, Func Offset: 0x4f0
	// Line 1128, Address: 0x20e4e8, Func Offset: 0x4f8
	// Line 1123, Address: 0x20e500, Func Offset: 0x510
	// Line 1128, Address: 0x20e508, Func Offset: 0x518
	// Line 1123, Address: 0x20e524, Func Offset: 0x534
	// Line 1153, Address: 0x20e544, Func Offset: 0x554
	// Line 1154, Address: 0x20e548, Func Offset: 0x558
	// Func End, Address: 0x20e554, Func Offset: 0x564
}

// SpinMailDamage__11zNMESpinnerFP13NMEDamageInfo
// Start address: 0x20e560
int32 zNMESpinner::SpinMailDamage(NMEDamageInfo* dmgmail)
{
	int32 rc;
	int32 handled;
	xPsyche* psy;
	xGoal* goal;
	// Line 981, Address: 0x20e560, Func Offset: 0
	// Line 982, Address: 0x20e578, Func Offset: 0x18
	// Line 983, Address: 0x20e584, Func Offset: 0x24
	// Line 988, Address: 0x20e58c, Func Offset: 0x2c
	// Line 1012, Address: 0x20e5b8, Func Offset: 0x58
	// Line 1014, Address: 0x20e5d4, Func Offset: 0x74
	// Line 1015, Address: 0x20e5f0, Func Offset: 0x90
	// Line 1017, Address: 0x20e604, Func Offset: 0xa4
	// Line 1021, Address: 0x20e60c, Func Offset: 0xac
	// Line 1023, Address: 0x20e610, Func Offset: 0xb0
	// Line 1026, Address: 0x20e620, Func Offset: 0xc0
	// Line 1027, Address: 0x20e624, Func Offset: 0xc4
	// Line 1026, Address: 0x20e628, Func Offset: 0xc8
	// Line 1027, Address: 0x20e62c, Func Offset: 0xcc
	// Line 1029, Address: 0x20e63c, Func Offset: 0xdc
	// Line 1032, Address: 0x20e644, Func Offset: 0xe4
	// Line 1038, Address: 0x20e648, Func Offset: 0xe8
	// Line 984, Address: 0x20e654, Func Offset: 0xf4
	// Line 1039, Address: 0x20e664, Func Offset: 0x104
	// Func End, Address: 0x20e67c, Func Offset: 0x11c
}

// TypeHandleMail__11zNMESpinnerFP6NMEMsg
// Start address: 0x20e680
int32 zNMESpinner::TypeHandleMail(NMEMsg* mail)
{
	int32 handled;
	xPsyche* psy;
	int32 gid;
	// Line 928, Address: 0x20e680, Func Offset: 0
	// Line 931, Address: 0x20e684, Func Offset: 0x4
	// Line 928, Address: 0x20e688, Func Offset: 0x8
	// Line 931, Address: 0x20e6a8, Func Offset: 0x28
	// Line 934, Address: 0x20e6dc, Func Offset: 0x5c
	// Line 935, Address: 0x20e6e0, Func Offset: 0x60
	// Line 936, Address: 0x20e6ec, Func Offset: 0x6c
	// Line 937, Address: 0x20e728, Func Offset: 0xa8
	// Line 939, Address: 0x20e734, Func Offset: 0xb4
	// Line 960, Address: 0x20e73c, Func Offset: 0xbc
	// Line 961, Address: 0x20e744, Func Offset: 0xc4
	// Line 965, Address: 0x20e74c, Func Offset: 0xcc
	// Line 966, Address: 0x20e754, Func Offset: 0xd4
	// Line 969, Address: 0x20e75c, Func Offset: 0xdc
	// Line 977, Address: 0x20e838, Func Offset: 0x1b8
	// Line 944, Address: 0x20e84c, Func Offset: 0x1cc
	// Line 977, Address: 0x20e854, Func Offset: 0x1d4
	// Line 944, Address: 0x20e85c, Func Offset: 0x1dc
	// Line 977, Address: 0x20e890, Func Offset: 0x210
	// Line 945, Address: 0x20e898, Func Offset: 0x218
	// Line 944, Address: 0x20e89c, Func Offset: 0x21c
	// Line 977, Address: 0x20e8c0, Func Offset: 0x240
	// Line 945, Address: 0x20e8dc, Func Offset: 0x25c
	// Line 977, Address: 0x20e8e4, Func Offset: 0x264
	// Line 945, Address: 0x20e8f4, Func Offset: 0x274
	// Line 977, Address: 0x20e8f8, Func Offset: 0x278
	// Line 952, Address: 0x20e904, Func Offset: 0x284
	// Line 977, Address: 0x20e90c, Func Offset: 0x28c
	// Line 954, Address: 0x20e914, Func Offset: 0x294
	// Line 978, Address: 0x20e91c, Func Offset: 0x29c
	// Func End, Address: 0x20e938, Func Offset: 0x2b8
}

// GoalPick__11zNMESpinnerFP5xGoalRiR11en_trantype
// Start address: 0x20e940
int32 GoalPick(int32& gid_would)
{
	int32 altered;
	// Line 874, Address: 0x20e940, Func Offset: 0
	// Line 877, Address: 0x20e978, Func Offset: 0x38
	// Line 879, Address: 0x20e980, Func Offset: 0x40
	// Line 882, Address: 0x20e988, Func Offset: 0x48
	// Line 884, Address: 0x20e990, Func Offset: 0x50
	// Line 887, Address: 0x20e998, Func Offset: 0x58
	// Line 891, Address: 0x20e9a0, Func Offset: 0x60
	// Line 894, Address: 0x20e9a8, Func Offset: 0x68
	// Line 896, Address: 0x20e9b0, Func Offset: 0x70
	// Line 899, Address: 0x20e9b8, Func Offset: 0x78
	// Line 901, Address: 0x20e9c0, Func Offset: 0x80
	// Line 904, Address: 0x20e9c8, Func Offset: 0x88
	// Line 906, Address: 0x20e9d0, Func Offset: 0x90
	// Line 910, Address: 0x20e9d8, Func Offset: 0x98
	// Line 912, Address: 0x20e9e0, Func Offset: 0xa0
	// Line 915, Address: 0x20e9e8, Func Offset: 0xa8
	// Line 920, Address: 0x20e9ec, Func Offset: 0xac
	// Func End, Address: 0x20e9f4, Func Offset: 0xb4
}

// CollideReview__11zNMESpinnerFv
// Start address: 0x20ea00
void zNMESpinner::CollideReview()
{
	// Line 852, Address: 0x20ea00, Func Offset: 0
	// Line 860, Address: 0x20ea10, Func Offset: 0x10
	// Line 865, Address: 0x20ea44, Func Offset: 0x44
	// Line 867, Address: 0x20ea78, Func Offset: 0x78
	// Line 865, Address: 0x20ea88, Func Offset: 0x88
	// Line 867, Address: 0x20ea8c, Func Offset: 0x8c
	// Line 868, Address: 0x20ea9c, Func Offset: 0x9c
	// Func End, Address: 0x20eaac, Func Offset: 0xac
}

// Type_AddYourMove__11zNMESpinnerFf
// Start address: 0x20eab0
void zNMESpinner::Type_AddYourMove(float32 dt)
{
	xVec3 delta;
	// Line 825, Address: 0x20eab0, Func Offset: 0
	// Line 835, Address: 0x20eab4, Func Offset: 0x4
	// Line 845, Address: 0x20eac0, Func Offset: 0x10
	// Line 848, Address: 0x20eadc, Func Offset: 0x2c
	// Line 837, Address: 0x20eaf0, Func Offset: 0x40
	// Line 848, Address: 0x20eaf8, Func Offset: 0x48
	// Line 838, Address: 0x20eb08, Func Offset: 0x58
	// Line 848, Address: 0x20eb0c, Func Offset: 0x5c
	// Line 839, Address: 0x20eb48, Func Offset: 0x98
	// Line 848, Address: 0x20eb50, Func Offset: 0xa0
	// Line 839, Address: 0x20eb74, Func Offset: 0xc4
	// Line 848, Address: 0x20eb78, Func Offset: 0xc8
	// Line 840, Address: 0x20eb90, Func Offset: 0xe0
	// Line 848, Address: 0x20eb94, Func Offset: 0xe4
	// Line 840, Address: 0x20ebac, Func Offset: 0xfc
	// Line 848, Address: 0x20ebb0, Func Offset: 0x100
	// Line 840, Address: 0x20ebc0, Func Offset: 0x110
	// Line 843, Address: 0x20ebc4, Func Offset: 0x114
	// Line 849, Address: 0x20ebcc, Func Offset: 0x11c
	// Func End, Address: 0x20ebd8, Func Offset: 0x128
}

// Process__11zNMESpinnerFf
// Start address: 0x20ebe0
void zNMESpinner::Process(float32 dt)
{
	int32 gid;
	// Line 799, Address: 0x20ebe0, Func Offset: 0
	// Line 800, Address: 0x20ebf4, Func Offset: 0x14
	// Line 801, Address: 0x20ec00, Func Offset: 0x20
	// Line 804, Address: 0x20ec10, Func Offset: 0x30
	// Line 805, Address: 0x20ec20, Func Offset: 0x40
	// Line 818, Address: 0x20ec34, Func Offset: 0x54
	// Line 821, Address: 0x20ec4c, Func Offset: 0x6c
	// Line 809, Address: 0x20ec54, Func Offset: 0x74
	// Line 811, Address: 0x20ec58, Func Offset: 0x78
	// Line 821, Address: 0x20ec60, Func Offset: 0x80
	// Line 815, Address: 0x20ec6c, Func Offset: 0x8c
	// Line 821, Address: 0x20ec70, Func Offset: 0x90
	// Line 822, Address: 0x20eca0, Func Offset: 0xc0
	// Func End, Address: 0x20ecb0, Func Offset: 0xd0
}

// BUpdate__11zNMESpinnerFP5xVec3
// Start address: 0x20ecb0
void zNMESpinner::BUpdate(xVec3* pos)
{
	// Line 781, Address: 0x20ecb0, Func Offset: 0
	// Line 782, Address: 0x20ecbc, Func Offset: 0xc
	// Line 783, Address: 0x20ecc8, Func Offset: 0x18
	// Line 785, Address: 0x20ef34, Func Offset: 0x284
	// Line 786, Address: 0x20f198, Func Offset: 0x4e8
	// Line 783, Address: 0x20f1a8, Func Offset: 0x4f8
	// Line 786, Address: 0x20f1b0, Func Offset: 0x500
	// Line 783, Address: 0x20f1fc, Func Offset: 0x54c
	// Line 786, Address: 0x20f200, Func Offset: 0x550
	// Line 783, Address: 0x20f208, Func Offset: 0x558
	// Line 786, Address: 0x20f20c, Func Offset: 0x55c
	// Line 783, Address: 0x20f214, Func Offset: 0x564
	// Line 786, Address: 0x20f218, Func Offset: 0x568
	// Line 783, Address: 0x20f25c, Func Offset: 0x5ac
	// Line 786, Address: 0x20f260, Func Offset: 0x5b0
	// Line 783, Address: 0x20f26c, Func Offset: 0x5bc
	// Line 786, Address: 0x20f274, Func Offset: 0x5c4
	// Line 783, Address: 0x20f2c4, Func Offset: 0x614
	// Line 786, Address: 0x20f2c8, Func Offset: 0x618
	// Line 783, Address: 0x20f2cc, Func Offset: 0x61c
	// Line 786, Address: 0x20f2d0, Func Offset: 0x620
	// Line 783, Address: 0x20f320, Func Offset: 0x670
	// Line 786, Address: 0x20f328, Func Offset: 0x678
	// Line 783, Address: 0x20f364, Func Offset: 0x6b4
	// Line 786, Address: 0x20f36c, Func Offset: 0x6bc
	// Line 783, Address: 0x20f384, Func Offset: 0x6d4
	// Line 786, Address: 0x20f38c, Func Offset: 0x6dc
	// Line 783, Address: 0x20f3e4, Func Offset: 0x734
	// Line 786, Address: 0x20f3ec, Func Offset: 0x73c
	// Line 783, Address: 0x20f438, Func Offset: 0x788
	// Line 786, Address: 0x20f43c, Func Offset: 0x78c
	// Line 783, Address: 0x20f444, Func Offset: 0x794
	// Line 786, Address: 0x20f448, Func Offset: 0x798
	// Line 783, Address: 0x20f44c, Func Offset: 0x79c
	// Line 786, Address: 0x20f450, Func Offset: 0x7a0
	// Line 783, Address: 0x20f4ac, Func Offset: 0x7fc
	// Line 786, Address: 0x20f4b0, Func Offset: 0x800
	// Line 783, Address: 0x20f4b8, Func Offset: 0x808
	// Line 786, Address: 0x20f4bc, Func Offset: 0x80c
	// Line 783, Address: 0x20f51c, Func Offset: 0x86c
	// Line 786, Address: 0x20f520, Func Offset: 0x870
	// Line 783, Address: 0x20f538, Func Offset: 0x888
	// Line 786, Address: 0x20f544, Func Offset: 0x894
	// Line 783, Address: 0x20f55c, Func Offset: 0x8ac
	// Line 786, Address: 0x20f560, Func Offset: 0x8b0
	// Line 783, Address: 0x20f564, Func Offset: 0x8b4
	// Line 786, Address: 0x20f568, Func Offset: 0x8b8
	// Line 783, Address: 0x20f5cc, Func Offset: 0x91c
	// Line 786, Address: 0x20f5d4, Func Offset: 0x924
	// Line 785, Address: 0x20f5dc, Func Offset: 0x92c
	// Line 786, Address: 0x20f5e4, Func Offset: 0x934
	// Line 785, Address: 0x20f630, Func Offset: 0x980
	// Line 786, Address: 0x20f634, Func Offset: 0x984
	// Line 785, Address: 0x20f63c, Func Offset: 0x98c
	// Line 786, Address: 0x20f640, Func Offset: 0x990
	// Line 785, Address: 0x20f648, Func Offset: 0x998
	// Line 786, Address: 0x20f64c, Func Offset: 0x99c
	// Line 785, Address: 0x20f690, Func Offset: 0x9e0
	// Line 786, Address: 0x20f694, Func Offset: 0x9e4
	// Line 785, Address: 0x20f6a0, Func Offset: 0x9f0
	// Line 786, Address: 0x20f6a8, Func Offset: 0x9f8
	// Line 785, Address: 0x20f6f8, Func Offset: 0xa48
	// Line 786, Address: 0x20f6fc, Func Offset: 0xa4c
	// Line 785, Address: 0x20f700, Func Offset: 0xa50
	// Line 786, Address: 0x20f704, Func Offset: 0xa54
	// Line 785, Address: 0x20f754, Func Offset: 0xaa4
	// Line 786, Address: 0x20f75c, Func Offset: 0xaac
	// Line 785, Address: 0x20f798, Func Offset: 0xae8
	// Line 786, Address: 0x20f7a0, Func Offset: 0xaf0
	// Line 785, Address: 0x20f7b8, Func Offset: 0xb08
	// Line 786, Address: 0x20f7c0, Func Offset: 0xb10
	// Line 785, Address: 0x20f818, Func Offset: 0xb68
	// Line 786, Address: 0x20f820, Func Offset: 0xb70
	// Line 785, Address: 0x20f86c, Func Offset: 0xbbc
	// Line 786, Address: 0x20f870, Func Offset: 0xbc0
	// Line 785, Address: 0x20f878, Func Offset: 0xbc8
	// Line 786, Address: 0x20f87c, Func Offset: 0xbcc
	// Line 785, Address: 0x20f880, Func Offset: 0xbd0
	// Line 786, Address: 0x20f884, Func Offset: 0xbd4
	// Line 785, Address: 0x20f8e0, Func Offset: 0xc30
	// Line 786, Address: 0x20f8e4, Func Offset: 0xc34
	// Line 785, Address: 0x20f8ec, Func Offset: 0xc3c
	// Line 786, Address: 0x20f8f0, Func Offset: 0xc40
	// Line 785, Address: 0x20f950, Func Offset: 0xca0
	// Line 786, Address: 0x20f954, Func Offset: 0xca4
	// Line 785, Address: 0x20f96c, Func Offset: 0xcbc
	// Line 786, Address: 0x20f978, Func Offset: 0xcc8
	// Line 785, Address: 0x20f990, Func Offset: 0xce0
	// Line 786, Address: 0x20f994, Func Offset: 0xce4
	// Line 785, Address: 0x20f998, Func Offset: 0xce8
	// Line 786, Address: 0x20f99c, Func Offset: 0xcec
	// Line 785, Address: 0x20fa00, Func Offset: 0xd50
	// Line 787, Address: 0x20fa08, Func Offset: 0xd58
	// Func End, Address: 0x20fa18, Func Offset: 0xd68
}

// CreateAnimTable__11zNMESpinnerFP10xAnimTable
// Start address: 0x20fa20
xAnimTable* zNMESpinner::CreateAnimTable(xAnimTable* table)
{
	int32 ourAnims[24];
	// Line 602, Address: 0x20fa20, Func Offset: 0
	// Line 608, Address: 0x20fa30, Func Offset: 0x10
	// Line 616, Address: 0x20fa38, Func Offset: 0x18
	// Line 620, Address: 0x20fa80, Func Offset: 0x60
	// Line 625, Address: 0x20fac8, Func Offset: 0xa8
	// Line 629, Address: 0x20fb10, Func Offset: 0xf0
	// Line 635, Address: 0x20fb58, Func Offset: 0x138
	// Line 639, Address: 0x20fba0, Func Offset: 0x180
	// Line 644, Address: 0x20fbe8, Func Offset: 0x1c8
	// Line 650, Address: 0x20fc30, Func Offset: 0x210
	// Line 654, Address: 0x20fc78, Func Offset: 0x258
	// Line 658, Address: 0x20fcc0, Func Offset: 0x2a0
	// Line 663, Address: 0x20fd08, Func Offset: 0x2e8
	// Line 667, Address: 0x20fd50, Func Offset: 0x330
	// Line 673, Address: 0x20fd98, Func Offset: 0x378
	// Line 677, Address: 0x20fde0, Func Offset: 0x3c0
	// Line 681, Address: 0x20fe28, Func Offset: 0x408
	// Line 687, Address: 0x20fe70, Func Offset: 0x450
	// Line 691, Address: 0x20feb8, Func Offset: 0x498
	// Line 696, Address: 0x20ff00, Func Offset: 0x4e0
	// Line 700, Address: 0x20ff48, Func Offset: 0x528
	// Line 706, Address: 0x20ff90, Func Offset: 0x570
	// Line 710, Address: 0x20ffd8, Func Offset: 0x5b8
	// Line 715, Address: 0x210020, Func Offset: 0x600
	// Line 719, Address: 0x210068, Func Offset: 0x648
	// Line 723, Address: 0x2100b0, Func Offset: 0x690
	// Line 731, Address: 0x2100f8, Func Offset: 0x6d8
	// Line 750, Address: 0x210128, Func Offset: 0x708
	// Line 756, Address: 0x21014c, Func Offset: 0x72c
	// Line 761, Address: 0x210194, Func Offset: 0x774
	// Line 764, Address: 0x2101dc, Func Offset: 0x7bc
	// Line 768, Address: 0x210224, Func Offset: 0x804
	// Line 772, Address: 0x21026c, Func Offset: 0x84c
	// Line 775, Address: 0x2102b4, Func Offset: 0x894
	// Line 777, Address: 0x2102fc, Func Offset: 0x8dc
	// Line 608, Address: 0x210304, Func Offset: 0x8e4
	// Line 777, Address: 0x210308, Func Offset: 0x8e8
	// Line 778, Address: 0x210318, Func Offset: 0x8f8
	// Func End, Address: 0x210328, Func Offset: 0x908
}

// AnimPick__11zNMESpinnerFi11en_npcgspotP5xGoal
// Start address: 0x210330
uint32 zNMESpinner::AnimPick(int32 gid, en_npcgspot gspot)
{
	int32 idx;
	uint32 da_anim;
	// Line 497, Address: 0x210330, Func Offset: 0
	// Line 500, Address: 0x2103fc, Func Offset: 0xcc
	// Line 501, Address: 0x210400, Func Offset: 0xd0
	// Line 504, Address: 0x210408, Func Offset: 0xd8
	// Line 505, Address: 0x21041c, Func Offset: 0xec
	// Line 506, Address: 0x210420, Func Offset: 0xf0
	// Line 510, Address: 0x210428, Func Offset: 0xf8
	// Line 511, Address: 0x21042c, Func Offset: 0xfc
	// Line 513, Address: 0x210434, Func Offset: 0x104
	// Line 514, Address: 0x210448, Func Offset: 0x118
	// Line 516, Address: 0x210450, Func Offset: 0x120
	// Line 517, Address: 0x210454, Func Offset: 0x124
	// Line 519, Address: 0x21045c, Func Offset: 0x12c
	// Line 520, Address: 0x210470, Func Offset: 0x140
	// Line 521, Address: 0x210474, Func Offset: 0x144
	// Line 526, Address: 0x21047c, Func Offset: 0x14c
	// Line 527, Address: 0x210480, Func Offset: 0x150
	// Line 529, Address: 0x210488, Func Offset: 0x158
	// Line 531, Address: 0x210494, Func Offset: 0x164
	// Line 532, Address: 0x2104a0, Func Offset: 0x170
	// Line 534, Address: 0x2104a8, Func Offset: 0x178
	// Line 535, Address: 0x2104ac, Func Offset: 0x17c
	// Line 537, Address: 0x2104b4, Func Offset: 0x184
	// Line 538, Address: 0x2104b8, Func Offset: 0x188
	// Line 543, Address: 0x2104c0, Func Offset: 0x190
	// Line 544, Address: 0x2104c4, Func Offset: 0x194
	// Line 546, Address: 0x2104cc, Func Offset: 0x19c
	// Line 547, Address: 0x2104d0, Func Offset: 0x1a0
	// Line 549, Address: 0x2104d8, Func Offset: 0x1a8
	// Line 550, Address: 0x2104dc, Func Offset: 0x1ac
	// Line 552, Address: 0x2104e4, Func Offset: 0x1b4
	// Line 553, Address: 0x2104f8, Func Offset: 0x1c8
	// Line 554, Address: 0x210508, Func Offset: 0x1d8
	// Line 558, Address: 0x21052c, Func Offset: 0x1fc
	// Line 562, Address: 0x210534, Func Offset: 0x204
	// Line 564, Address: 0x21053c, Func Offset: 0x20c
	// Line 566, Address: 0x210540, Func Offset: 0x210
	// Line 570, Address: 0x210548, Func Offset: 0x218
	// Line 571, Address: 0x21054c, Func Offset: 0x21c
	// Line 574, Address: 0x210554, Func Offset: 0x224
	// Line 576, Address: 0x210560, Func Offset: 0x230
	// Line 578, Address: 0x21056c, Func Offset: 0x23c
	// Line 580, Address: 0x210578, Func Offset: 0x248
	// Line 581, Address: 0x210584, Func Offset: 0x254
	// Line 583, Address: 0x21058c, Func Offset: 0x25c
	// Line 584, Address: 0x210590, Func Offset: 0x260
	// Line 589, Address: 0x210598, Func Offset: 0x268
	// Line 594, Address: 0x21059c, Func Offset: 0x26c
	// Line 595, Address: 0x2105a4, Func Offset: 0x274
	// Line 598, Address: 0x2105b8, Func Offset: 0x288
	// Line 530, Address: 0x2105c0, Func Offset: 0x290
	// Line 598, Address: 0x2105cc, Func Offset: 0x29c
	// Line 553, Address: 0x2105e8, Func Offset: 0x2b8
	// Line 575, Address: 0x2105f0, Func Offset: 0x2c0
	// Line 577, Address: 0x2105fc, Func Offset: 0x2cc
	// Line 579, Address: 0x210608, Func Offset: 0x2d8
	// Line 599, Address: 0x210614, Func Offset: 0x2e4
	// Func End, Address: 0x21061c, Func Offset: 0x2ec
}

// SelfSetup__11zNMESpinnerFv
// Start address: 0x210620
void zNMESpinner::SelfSetup()
{
	xBehaveMgr* bmgr;
	xPsyche* psy;
	xGoal* goal;
	xGoal* g;
	en_trantype trantype;
	int32 nextgoal;
	// Line 449, Address: 0x210620, Func Offset: 0
	// Line 451, Address: 0x210630, Func Offset: 0x10
	// Line 452, Address: 0x210638, Func Offset: 0x18
	// Line 455, Address: 0x21064c, Func Offset: 0x2c
	// Line 460, Address: 0x210650, Func Offset: 0x30
	// Line 463, Address: 0x210658, Func Offset: 0x38
	// Line 464, Address: 0x2106a8, Func Offset: 0x88
	// Line 463, Address: 0x2106ac, Func Offset: 0x8c
	// Line 464, Address: 0x2106b0, Func Offset: 0x90
	// Line 467, Address: 0x210700, Func Offset: 0xe0
	// Line 464, Address: 0x210704, Func Offset: 0xe4
	// Line 467, Address: 0x210708, Func Offset: 0xe8
	// Line 464, Address: 0x21070c, Func Offset: 0xec
	// Line 467, Address: 0x210710, Func Offset: 0xf0
	// Line 464, Address: 0x210714, Func Offset: 0xf4
	// Line 467, Address: 0x210718, Func Offset: 0xf8
	// Line 468, Address: 0x210770, Func Offset: 0x150
	// Line 469, Address: 0x210784, Func Offset: 0x164
	// Line 470, Address: 0x2107ac, Func Offset: 0x18c
	// Line 471, Address: 0x2107d4, Func Offset: 0x1b4
	// Line 473, Address: 0x2107e8, Func Offset: 0x1c8
	// Line 474, Address: 0x2107fc, Func Offset: 0x1dc
	// Line 475, Address: 0x210810, Func Offset: 0x1f0
	// Line 478, Address: 0x210814, Func Offset: 0x1f4
	// Line 475, Address: 0x210818, Func Offset: 0x1f8
	// Line 478, Address: 0x21081c, Func Offset: 0x1fc
	// Line 475, Address: 0x210820, Func Offset: 0x200
	// Line 478, Address: 0x210824, Func Offset: 0x204
	// Line 475, Address: 0x210828, Func Offset: 0x208
	// Line 478, Address: 0x21082c, Func Offset: 0x20c
	// Line 479, Address: 0x210834, Func Offset: 0x214
	// Line 481, Address: 0x210848, Func Offset: 0x228
	// Line 485, Address: 0x210850, Func Offset: 0x230
	// Line 484, Address: 0x210854, Func Offset: 0x234
	// Line 485, Address: 0x210858, Func Offset: 0x238
	// Line 484, Address: 0x21085c, Func Offset: 0x23c
	// Line 485, Address: 0x210860, Func Offset: 0x240
	// Line 486, Address: 0x210864, Func Offset: 0x244
	// Line 487, Address: 0x210880, Func Offset: 0x260
	// Line 490, Address: 0x210888, Func Offset: 0x268
	// Func End, Address: 0x21089c, Func Offset: 0x27c
}

// Reset__11zNMESpinnerFv
// Start address: 0x2108a0
void zNMESpinner::Reset()
{
	xPsyche* psy;
	zNMEGoalAfterlife* goal;
	en_trantype trantype;
	int32 nextgoal;
	// Line 414, Address: 0x2108a0, Func Offset: 0
	// Line 415, Address: 0x2108b0, Func Offset: 0x10
	// Line 416, Address: 0x210b44, Func Offset: 0x2a4
	// Line 415, Address: 0x210b48, Func Offset: 0x2a8
	// Line 416, Address: 0x210b4c, Func Offset: 0x2ac
	// Line 415, Address: 0x210b50, Func Offset: 0x2b0
	// Line 416, Address: 0x210b58, Func Offset: 0x2b8
	// Line 423, Address: 0x210b74, Func Offset: 0x2d4
	// Line 426, Address: 0x210b88, Func Offset: 0x2e8
	// Line 437, Address: 0x210b94, Func Offset: 0x2f4
	// Line 436, Address: 0x210b98, Func Offset: 0x2f8
	// Line 437, Address: 0x210b9c, Func Offset: 0x2fc
	// Line 438, Address: 0x210ba0, Func Offset: 0x300
	// Line 437, Address: 0x210ba4, Func Offset: 0x304
	// Line 438, Address: 0x210ba8, Func Offset: 0x308
	// Line 439, Address: 0x210bc0, Func Offset: 0x320
	// Line 443, Address: 0x210bd0, Func Offset: 0x330
	// Line 445, Address: 0x210bd8, Func Offset: 0x338
	// Line 424, Address: 0x210be0, Func Offset: 0x340
	// Line 445, Address: 0x210be8, Func Offset: 0x348
	// Line 425, Address: 0x210bf0, Func Offset: 0x350
	// Line 429, Address: 0x210bf8, Func Offset: 0x358
	// Line 445, Address: 0x210bfc, Func Offset: 0x35c
	// Line 432, Address: 0x210c04, Func Offset: 0x364
	// Line 431, Address: 0x210c08, Func Offset: 0x368
	// Line 432, Address: 0x210c0c, Func Offset: 0x36c
	// Line 429, Address: 0x210c10, Func Offset: 0x370
	// Line 432, Address: 0x210c14, Func Offset: 0x374
	// Line 445, Address: 0x210c18, Func Offset: 0x378
	// Line 433, Address: 0x210c20, Func Offset: 0x380
	// Line 434, Address: 0x210c24, Func Offset: 0x384
	// Line 446, Address: 0x210c2c, Func Offset: 0x38c
	// Func End, Address: 0x210c40, Func Offset: 0x3a0
}

// Setup__11zNMESpinnerFv
// Start address: 0x210c40
void zNMESpinner::Setup()
{
	// Line 407, Address: 0x210c40, Func Offset: 0
	// Line 408, Address: 0x210c44, Func Offset: 0x4
	// Line 407, Address: 0x210c48, Func Offset: 0x8
	// Line 408, Address: 0x210c4c, Func Offset: 0xc
	// Line 407, Address: 0x210c50, Func Offset: 0x10
	// Line 408, Address: 0x210c54, Func Offset: 0x14
	// Line 409, Address: 0x210cac, Func Offset: 0x6c
	// Line 410, Address: 0x210cc4, Func Offset: 0x84
	// Line 409, Address: 0x210ccc, Func Offset: 0x8c
	// Line 410, Address: 0x210cd4, Func Offset: 0x94
	// Line 409, Address: 0x210cdc, Func Offset: 0x9c
	// Line 410, Address: 0x210ce0, Func Offset: 0xa0
	// Line 411, Address: 0x210cf4, Func Offset: 0xb4
	// Func End, Address: 0x210d00, Func Offset: 0xc0
}

// Init__11zNMESpinnerFP9xEntAsset
// Start address: 0x210d00
void zNMESpinner::Init(xEntAsset* entass)
{
	// Line 399, Address: 0x210d00, Func Offset: 0
	// Line 400, Address: 0x210d18, Func Offset: 0x18
	// Line 402, Address: 0x210db0, Func Offset: 0xb0
	// Line 400, Address: 0x210db8, Func Offset: 0xb8
	// Line 401, Address: 0x210ed8, Func Offset: 0x1d8
	// Line 402, Address: 0x210ee4, Func Offset: 0x1e4
	// Line 403, Address: 0x210ef4, Func Offset: 0x1f4
	// Line 400, Address: 0x210f00, Func Offset: 0x200
	// Line 403, Address: 0x210f04, Func Offset: 0x204
	// Line 400, Address: 0x210f0c, Func Offset: 0x20c
	// Line 403, Address: 0x210f18, Func Offset: 0x218
	// Line 402, Address: 0x210f28, Func Offset: 0x228
	// Line 403, Address: 0x210f2c, Func Offset: 0x22c
	// Line 404, Address: 0x210f3c, Func Offset: 0x23c
	// Func End, Address: 0x210f50, Func Offset: 0x250
}

// ColPenFlags__11zNMESpinnerCFv
// Start address: 0x210f50
uint8 zNMESpinner::ColPenFlags()
{
	uint8 flags;
	// Line 389, Address: 0x210f50, Func Offset: 0
	// Line 391, Address: 0x210f58, Func Offset: 0x8
	// Line 392, Address: 0x210f64, Func Offset: 0x14
	// Line 393, Address: 0x210f6c, Func Offset: 0x1c
	// Line 394, Address: 0x210f78, Func Offset: 0x28
	// Line 396, Address: 0x210f80, Func Offset: 0x30
	// Func End, Address: 0x210f88, Func Offset: 0x38
}

// ColChkFlags__11zNMESpinnerCFv
// Start address: 0x210f90
uint8 zNMESpinner::ColChkFlags()
{
	uint8 flags;
	// Line 378, Address: 0x210f90, Func Offset: 0
	// Line 380, Address: 0x210f98, Func Offset: 0x8
	// Line 381, Address: 0x210fa4, Func Offset: 0x14
	// Line 382, Address: 0x210fac, Func Offset: 0x1c
	// Line 383, Address: 0x210fb8, Func Offset: 0x28
	// Line 385, Address: 0x210fc0, Func Offset: 0x30
	// Func End, Address: 0x210fc8, Func Offset: 0x38
}

// DfltVulnFlags__11zNMESpinnerFv
// Start address: 0x210fd0
int32 zNMESpinner::DfltVulnFlags()
{
	// Line 374, Address: 0x210fd0, Func Offset: 0
	// Func End, Address: 0x210fd8, Func Offset: 0x8
}

// CreateConfig__11zNMESpinnerFPCc
// Start address: 0x210fe0
void zNMESpinner::CreateConfig()
{
	en_nmevar vidx;
	// Line 257, Address: 0x210fe0, Func Offset: 0
	// Line 258, Address: 0x210fe4, Func Offset: 0x4
	// Line 257, Address: 0x210fe8, Func Offset: 0x8
	// Line 258, Address: 0x210fec, Func Offset: 0xc
	// Line 257, Address: 0x210ff0, Func Offset: 0x10
	// Line 258, Address: 0x210ff4, Func Offset: 0x14
	// Line 260, Address: 0x211014, Func Offset: 0x34
	// Line 261, Address: 0x21101c, Func Offset: 0x3c
	// Line 272, Address: 0x211034, Func Offset: 0x54
	// Func End, Address: 0x211044, Func Offset: 0x64
}

