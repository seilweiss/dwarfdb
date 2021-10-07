



int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
int32 Exit();
int32 Enter();
void HoppingFXUpdate(zNMEFogger* npc);
void BoundingFXUpdate(zNMEFogger* npc);
int32 CheckSpot(zNMEFogger* npc, xVec3* pos_tgt);
int32 MoveEvadePos(zNMEFogger* npc, xVec3* pos, float32 dt);
int32 CalcEvadePos(zNMEFogger* npc, xVec3* pos);
float32 RevisePrediction(zNMEFogger* npc, xVec3* pos_tgt, xVec3* dir_tgt);
float32 PredictPlyrPos(zNMEFogger* npc, xVec3* pos_plyr, xVec3* dir_plyr);
int32 SubStateUpdate(zNMEFogger* npc, float32 dt, int32& nextgoal, en_trantype& trantype);
int32 CheckSituation(zNMEFogger* npc, int32& nextgoal, en_trantype& trantype);
int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
int32 Resume();
int32 Enter();
void FeetFXUpdate(zNMEFogger* npc);
int32 ChkTranCases(zNMEFogger* npc, int32& nextgoal, en_trantype& trantype);
int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
int32 Enter();
int32 Fog_SeePlyr(xGoal* rawgoal, en_trantype* trantype);
float32 HealthRatio();
en_vis VisionTarget(xEnt* ent);
int32 FogMailDamage(NMEDamageInfo* dmgmail);
int32 TypeHandleMail(NMEMsg* mail);
void CollideReview();
void Type_AddYourMove(float32 dt);
void Process(float32 dt);
void BUpdate(xVec3* pos);
int32 GoalPick(int32& gid_would);
void Reset();
xAnimTable* CreateAnimTable(xAnimTable* table);
uint32 AnimPick(int32 gid, en_npcgspot gspot);
void SelfSetup();
void Setup();
void Init(xEntAsset* entass);
uint8 ColPenFlags();
uint8 ColChkFlags();
int32 DfltVulnFlags();
void CreateConfig();

// Process__17zNMEGoalFogAttackFP11en_trantypefPv
// Start address: 0x221620
int32 zNMEGoalFogAttack::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	zNMEStandard* npc;
	// Line 2386, Address: 0x221620, Func Offset: 0
	// Line 2387, Address: 0x22164c, Func Offset: 0x2c
	// Line 2389, Address: 0x221658, Func Offset: 0x38
	// Line 2390, Address: 0x221670, Func Offset: 0x50
	// Line 2391, Address: 0x221694, Func Offset: 0x74
	// Line 2393, Address: 0x2216a0, Func Offset: 0x80
	// Line 2396, Address: 0x2216c8, Func Offset: 0xa8
	// Line 2397, Address: 0x2216d8, Func Offset: 0xb8
	// Line 2400, Address: 0x221894, Func Offset: 0x274
	// Line 2401, Address: 0x22191c, Func Offset: 0x2fc
	// Line 2400, Address: 0x221928, Func Offset: 0x308
	// Line 2401, Address: 0x22192c, Func Offset: 0x30c
	// Func End, Address: 0x221940, Func Offset: 0x320
}

// Exit__17zNMEGoalFogAttackFfPv
// Start address: 0x221940
int32 zNMEGoalFogAttack::Exit()
{
	// Line 2376, Address: 0x221940, Func Offset: 0
	// Line 2377, Address: 0x221950, Func Offset: 0x10
	// Line 2379, Address: 0x221960, Func Offset: 0x20
	// Line 2381, Address: 0x22198c, Func Offset: 0x4c
	// Line 2382, Address: 0x2219c8, Func Offset: 0x88
	// Func End, Address: 0x2219dc, Func Offset: 0x9c
}

// Enter__17zNMEGoalFogAttackFfPv
// Start address: 0x2219e0
int32 zNMEGoalFogAttack::Enter()
{
	zNMEStandard* npc;
	// Line 2363, Address: 0x2219e0, Func Offset: 0
	// Line 2366, Address: 0x2219e4, Func Offset: 0x4
	// Line 2363, Address: 0x2219e8, Func Offset: 0x8
	// Line 2367, Address: 0x2219ec, Func Offset: 0xc
	// Line 2363, Address: 0x2219f0, Func Offset: 0x10
	// Line 2367, Address: 0x2219f4, Func Offset: 0x14
	// Line 2363, Address: 0x2219f8, Func Offset: 0x18
	// Line 2364, Address: 0x2219fc, Func Offset: 0x1c
	// Line 2366, Address: 0x221a04, Func Offset: 0x24
	// Line 2367, Address: 0x221a08, Func Offset: 0x28
	// Line 2369, Address: 0x221a18, Func Offset: 0x38
	// Line 2371, Address: 0x221b18, Func Offset: 0x138
	// Line 2369, Address: 0x221b1c, Func Offset: 0x13c
	// Line 2371, Address: 0x221b24, Func Offset: 0x144
	// Line 2369, Address: 0x221b38, Func Offset: 0x158
	// Line 2371, Address: 0x221b3c, Func Offset: 0x15c
	// Line 2369, Address: 0x221b54, Func Offset: 0x174
	// Line 2372, Address: 0x221b64, Func Offset: 0x184
	// Func End, Address: 0x221b78, Func Offset: 0x198
}

// HoppingFXUpdate__17zNMEGoalFogBattleFP10zNMEFoggerf
// Start address: 0x221b80
void zNMEGoalFogBattle::HoppingFXUpdate(zNMEFogger* npc)
{
	xVec3 pos_emit;
	xVec3 vel_drift;
	// Line 2255, Address: 0x221b80, Func Offset: 0
	// Line 2260, Address: 0x221b84, Func Offset: 0x4
	// Line 2255, Address: 0x221b88, Func Offset: 0x8
	// Line 2260, Address: 0x221b8c, Func Offset: 0xc
	// Line 2261, Address: 0x221ba8, Func Offset: 0x28
	// Line 2260, Address: 0x221bb0, Func Offset: 0x30
	// Line 2261, Address: 0x221bcc, Func Offset: 0x4c
	// Line 2260, Address: 0x221bd4, Func Offset: 0x54
	// Line 2261, Address: 0x221bd8, Func Offset: 0x58
	// Line 2260, Address: 0x221be0, Func Offset: 0x60
	// Line 2261, Address: 0x221be4, Func Offset: 0x64
	// Line 2265, Address: 0x221bf0, Func Offset: 0x70
	// Line 2266, Address: 0x221c00, Func Offset: 0x80
	// Line 2271, Address: 0x221c28, Func Offset: 0xa8
	// Line 2277, Address: 0x221c3c, Func Offset: 0xbc
	// Line 2275, Address: 0x221c40, Func Offset: 0xc0
	// Line 2277, Address: 0x221c44, Func Offset: 0xc4
	// Line 2281, Address: 0x221c54, Func Offset: 0xd4
	// Line 2284, Address: 0x221c68, Func Offset: 0xe8
	// Line 2285, Address: 0x221c7c, Func Offset: 0xfc
	// Line 2265, Address: 0x221ca0, Func Offset: 0x120
	// Line 2285, Address: 0x221ca8, Func Offset: 0x128
	// Line 2278, Address: 0x221cac, Func Offset: 0x12c
	// Line 2279, Address: 0x221cbc, Func Offset: 0x13c
	// Line 2293, Address: 0x221cc4, Func Offset: 0x144
	// Line 2296, Address: 0x221cd0, Func Offset: 0x150
	// Line 2293, Address: 0x221cd4, Func Offset: 0x154
	// Line 2294, Address: 0x221ce4, Func Offset: 0x164
	// Line 2293, Address: 0x221cec, Func Offset: 0x16c
	// Line 2294, Address: 0x221cf0, Func Offset: 0x170
	// Line 2293, Address: 0x221cf4, Func Offset: 0x174
	// Line 2296, Address: 0x221cf8, Func Offset: 0x178
	// Line 2293, Address: 0x221cfc, Func Offset: 0x17c
	// Line 2294, Address: 0x221d18, Func Offset: 0x198
	// Line 2293, Address: 0x221d1c, Func Offset: 0x19c
	// Line 2294, Address: 0x221d38, Func Offset: 0x1b8
	// Line 2293, Address: 0x221d3c, Func Offset: 0x1bc
	// Line 2294, Address: 0x221d68, Func Offset: 0x1e8
	// Line 2293, Address: 0x221d6c, Func Offset: 0x1ec
	// Line 2294, Address: 0x221d70, Func Offset: 0x1f0
	// Line 2296, Address: 0x221d7c, Func Offset: 0x1fc
	// Line 2294, Address: 0x221d80, Func Offset: 0x200
	// Line 2296, Address: 0x221dd4, Func Offset: 0x254
	// Line 2299, Address: 0x221ddc, Func Offset: 0x25c
	// Func End, Address: 0x221de8, Func Offset: 0x268
}

// BoundingFXUpdate__17zNMEGoalFogBattleFP10zNMEFoggerf
// Start address: 0x221df0
void zNMEGoalFogBattle::BoundingFXUpdate(zNMEFogger* npc)
{
	float32 ds2_cam;
	uint32 anid;
	int32 rc;
	float32 tym_animCurr;
	int8 currFoot;
	int32 i;
	xVec3 pos_emit;
	xMat4x3* mat_bone;
	xMat4x3* mat_bone;
	// Line 2188, Address: 0x221df0, Func Offset: 0
	// Line 2193, Address: 0x221df4, Func Offset: 0x4
	// Line 2188, Address: 0x221df8, Func Offset: 0x8
	// Line 2193, Address: 0x221dfc, Func Offset: 0xc
	// Line 2194, Address: 0x221e18, Func Offset: 0x28
	// Line 2193, Address: 0x221e20, Func Offset: 0x30
	// Line 2194, Address: 0x221e4c, Func Offset: 0x5c
	// Line 2193, Address: 0x221e50, Func Offset: 0x60
	// Line 2194, Address: 0x221e54, Func Offset: 0x64
	// Line 2198, Address: 0x221e60, Func Offset: 0x70
	// Line 2199, Address: 0x221e9c, Func Offset: 0xac
	// Line 2203, Address: 0x221eb0, Func Offset: 0xc0
	// Line 2204, Address: 0x221ebc, Func Offset: 0xcc
	// Line 2211, Address: 0x221ec8, Func Offset: 0xd8
	// Line 2210, Address: 0x221ecc, Func Offset: 0xdc
	// Line 2211, Address: 0x221ed0, Func Offset: 0xe0
	// Line 2204, Address: 0x221ed8, Func Offset: 0xe8
	// Line 2213, Address: 0x221ee4, Func Offset: 0xf4
	// Line 2216, Address: 0x221ef4, Func Offset: 0x104
	// Line 2219, Address: 0x221f04, Func Offset: 0x114
	// Line 2221, Address: 0x221f0c, Func Offset: 0x11c
	// Line 2222, Address: 0x221f14, Func Offset: 0x124
	// Line 2225, Address: 0x221f30, Func Offset: 0x140
	// Line 2227, Address: 0x221f38, Func Offset: 0x148
	// Line 2229, Address: 0x221f4c, Func Offset: 0x15c
	// Line 2234, Address: 0x221f5c, Func Offset: 0x16c
	// Line 2236, Address: 0x221f68, Func Offset: 0x178
	// Line 2235, Address: 0x221f6c, Func Offset: 0x17c
	// Line 2236, Address: 0x221f70, Func Offset: 0x180
	// Line 2235, Address: 0x221f7c, Func Offset: 0x18c
	// Line 2236, Address: 0x221f80, Func Offset: 0x190
	// Line 2235, Address: 0x221f84, Func Offset: 0x194
	// Line 2236, Address: 0x221f88, Func Offset: 0x198
	// Line 2235, Address: 0x221f98, Func Offset: 0x1a8
	// Line 2237, Address: 0x221f9c, Func Offset: 0x1ac
	// Line 2236, Address: 0x221fa0, Func Offset: 0x1b0
	// Line 2237, Address: 0x221fa4, Func Offset: 0x1b4
	// Line 2238, Address: 0x221fec, Func Offset: 0x1fc
	// Line 2239, Address: 0x222018, Func Offset: 0x228
	// Line 2242, Address: 0x222020, Func Offset: 0x230
	// Line 2241, Address: 0x222024, Func Offset: 0x234
	// Line 2242, Address: 0x222028, Func Offset: 0x238
	// Line 2241, Address: 0x222034, Func Offset: 0x244
	// Line 2242, Address: 0x222038, Func Offset: 0x248
	// Line 2241, Address: 0x22203c, Func Offset: 0x24c
	// Line 2242, Address: 0x222040, Func Offset: 0x250
	// Line 2241, Address: 0x222050, Func Offset: 0x260
	// Line 2243, Address: 0x222054, Func Offset: 0x264
	// Line 2242, Address: 0x222058, Func Offset: 0x268
	// Line 2243, Address: 0x22205c, Func Offset: 0x26c
	// Line 2244, Address: 0x2220a4, Func Offset: 0x2b4
	// Line 2246, Address: 0x2220d4, Func Offset: 0x2e4
	// Line 2247, Address: 0x222128, Func Offset: 0x338
	// Line 2249, Address: 0x22212c, Func Offset: 0x33c
	// Line 2247, Address: 0x222130, Func Offset: 0x340
	// Line 2249, Address: 0x222134, Func Offset: 0x344
	// Line 2247, Address: 0x222138, Func Offset: 0x348
	// Line 2249, Address: 0x22213c, Func Offset: 0x34c
	// Line 2247, Address: 0x222140, Func Offset: 0x350
	// Line 2249, Address: 0x222148, Func Offset: 0x358
	// Line 2247, Address: 0x22214c, Func Offset: 0x35c
	// Line 2249, Address: 0x22216c, Func Offset: 0x37c
	// Line 2252, Address: 0x222174, Func Offset: 0x384
	// Func End, Address: 0x222180, Func Offset: 0x390
}

// CheckSpot__17zNMEGoalFogBattleFP10zNMEFoggerfPC5xVec3
// Start address: 0x222180
int32 zNMEGoalFogBattle::CheckSpot(zNMEFogger* npc, xVec3* pos_tgt)
{
	xVec3 dir_plyr;
	float32 dy;
	// Line 2149, Address: 0x222180, Func Offset: 0
	// Line 2162, Address: 0x222184, Func Offset: 0x4
	// Line 2165, Address: 0x2221c8, Func Offset: 0x48
	// Line 2162, Address: 0x2221d0, Func Offset: 0x50
	// Line 2165, Address: 0x2221d8, Func Offset: 0x58
	// Line 2168, Address: 0x2221e4, Func Offset: 0x64
	// Line 2171, Address: 0x222200, Func Offset: 0x80
	// Line 2172, Address: 0x222218, Func Offset: 0x98
	// Line 2166, Address: 0x222228, Func Offset: 0xa8
	// Line 2169, Address: 0x222230, Func Offset: 0xb0
	// Line 2177, Address: 0x222238, Func Offset: 0xb8
	// Line 2178, Address: 0x222244, Func Offset: 0xc4
	// Line 2182, Address: 0x222248, Func Offset: 0xc8
	// Line 2178, Address: 0x222254, Func Offset: 0xd4
	// Line 2182, Address: 0x22226c, Func Offset: 0xec
	// Line 2178, Address: 0x222274, Func Offset: 0xf4
	// Line 2182, Address: 0x222280, Func Offset: 0x100
	// Line 2178, Address: 0x222288, Func Offset: 0x108
	// Line 2182, Address: 0x22228c, Func Offset: 0x10c
	// Line 2185, Address: 0x2222b8, Func Offset: 0x138
	// Func End, Address: 0x2222c4, Func Offset: 0x144
}

// MoveEvadePos__17zNMEGoalFogBattleFP10zNMEFoggerPC5xVec3f
// Start address: 0x2222d0
int32 zNMEGoalFogBattle::MoveEvadePos(zNMEFogger* npc, xVec3* pos, float32 dt)
{
	int32 arrived;
	xVec3 dir_evade;
	xVec3 delta;
	// Line 2059, Address: 0x2222d0, Func Offset: 0
	// Line 2073, Address: 0x2222d4, Func Offset: 0x4
	// Line 2059, Address: 0x2222d8, Func Offset: 0x8
	// Line 2072, Address: 0x2222dc, Func Offset: 0xc
	// Line 2059, Address: 0x2222e0, Func Offset: 0x10
	// Line 2073, Address: 0x2222e4, Func Offset: 0x14
	// Line 2059, Address: 0x2222e8, Func Offset: 0x18
	// Line 2072, Address: 0x2222ec, Func Offset: 0x1c
	// Line 2059, Address: 0x2222f0, Func Offset: 0x20
	// Line 2072, Address: 0x2222f4, Func Offset: 0x24
	// Line 2059, Address: 0x2222f8, Func Offset: 0x28
	// Line 2072, Address: 0x2222fc, Func Offset: 0x2c
	// Line 2059, Address: 0x222300, Func Offset: 0x30
	// Line 2072, Address: 0x222308, Func Offset: 0x38
	// Line 2060, Address: 0x222310, Func Offset: 0x40
	// Line 2072, Address: 0x222314, Func Offset: 0x44
	// Line 2073, Address: 0x222354, Func Offset: 0x84
	// Line 2075, Address: 0x222360, Func Offset: 0x90
	// Line 2074, Address: 0x222364, Func Offset: 0x94
	// Line 2087, Address: 0x222368, Func Offset: 0x98
	// Line 2081, Address: 0x22237c, Func Offset: 0xac
	// Line 2087, Address: 0x222380, Func Offset: 0xb0
	// Line 2078, Address: 0x222388, Func Offset: 0xb8
	// Line 2087, Address: 0x22238c, Func Offset: 0xbc
	// Line 2081, Address: 0x222394, Func Offset: 0xc4
	// Line 2078, Address: 0x222398, Func Offset: 0xc8
	// Line 2087, Address: 0x22239c, Func Offset: 0xcc
	// Line 2078, Address: 0x2223a4, Func Offset: 0xd4
	// Line 2087, Address: 0x2223ac, Func Offset: 0xdc
	// Line 2082, Address: 0x2223c4, Func Offset: 0xf4
	// Line 2087, Address: 0x2223d0, Func Offset: 0x100
	// Line 2083, Address: 0x222420, Func Offset: 0x150
	// Line 2087, Address: 0x222424, Func Offset: 0x154
	// Line 2083, Address: 0x222428, Func Offset: 0x158
	// Line 2087, Address: 0x222430, Func Offset: 0x160
	// Line 2083, Address: 0x222460, Func Offset: 0x190
	// Line 2084, Address: 0x222464, Func Offset: 0x194
	// Line 2087, Address: 0x222468, Func Offset: 0x198
	// Line 2084, Address: 0x222490, Func Offset: 0x1c0
	// Line 2087, Address: 0x222494, Func Offset: 0x1c4
	// Line 2084, Address: 0x2224a4, Func Offset: 0x1d4
	// Line 2088, Address: 0x2224b0, Func Offset: 0x1e0
	// Func End, Address: 0x2224d0, Func Offset: 0x200
}

// CalcEvadePos__17zNMEGoalFogBattleFP10zNMEFoggerP5xVec3
// Start address: 0x2224d0
int32 zNMEGoalFogBattle::CalcEvadePos(zNMEFogger* npc, xVec3* pos)
{
	int32 canEvade;
	xVec3 pos_home;
	float32 ang;
	float32 rad_ca;
	float32 rad_sa;
	xVec3 pos_loca[4];
	float32 ds2_best;
	int32 idx_best;
	int32 i;
	// Line 1946, Address: 0x2224d0, Func Offset: 0
	// Line 1949, Address: 0x2224d4, Func Offset: 0x4
	// Line 1946, Address: 0x2224d8, Func Offset: 0x8
	// Line 1949, Address: 0x2224dc, Func Offset: 0xc
	// Line 1946, Address: 0x2224e0, Func Offset: 0x10
	// Line 1963, Address: 0x2224e8, Func Offset: 0x18
	// Line 1946, Address: 0x2224ec, Func Offset: 0x1c
	// Line 1949, Address: 0x2224fc, Func Offset: 0x2c
	// Line 1950, Address: 0x222500, Func Offset: 0x30
	// Line 1963, Address: 0x22250c, Func Offset: 0x3c
	// Line 1949, Address: 0x222510, Func Offset: 0x40
	// Line 1950, Address: 0x222514, Func Offset: 0x44
	// Line 1963, Address: 0x222518, Func Offset: 0x48
	// Line 1950, Address: 0x222520, Func Offset: 0x50
	// Line 1963, Address: 0x222524, Func Offset: 0x54
	// Line 1965, Address: 0x222538, Func Offset: 0x68
	// Line 1966, Address: 0x222550, Func Offset: 0x80
	// Line 1969, Address: 0x222558, Func Offset: 0x88
	// Line 1970, Address: 0x2225ac, Func Offset: 0xdc
	// Line 1971, Address: 0x2225b4, Func Offset: 0xe4
	// Line 1978, Address: 0x2225c0, Func Offset: 0xf0
	// Line 2019, Address: 0x2225cc, Func Offset: 0xfc
	// Line 1973, Address: 0x2225d0, Func Offset: 0x100
	// Line 2015, Address: 0x2225d4, Func Offset: 0x104
	// Line 2054, Address: 0x2225d8, Func Offset: 0x108
	// Line 1973, Address: 0x2225dc, Func Offset: 0x10c
	// Line 2016, Address: 0x2225e0, Func Offset: 0x110
	// Line 2018, Address: 0x2225e4, Func Offset: 0x114
	// Line 2019, Address: 0x2225e8, Func Offset: 0x118
	// Line 1978, Address: 0x2225ec, Func Offset: 0x11c
	// Line 1986, Address: 0x2225f0, Func Offset: 0x120
	// Line 2020, Address: 0x2225f4, Func Offset: 0x124
	// Line 1987, Address: 0x2225f8, Func Offset: 0x128
	// Line 1972, Address: 0x2225fc, Func Offset: 0x12c
	// Line 1987, Address: 0x222600, Func Offset: 0x130
	// Line 1986, Address: 0x222604, Func Offset: 0x134
	// Line 1978, Address: 0x222608, Func Offset: 0x138
	// Line 1986, Address: 0x22260c, Func Offset: 0x13c
	// Line 1993, Address: 0x222610, Func Offset: 0x140
	// Line 1989, Address: 0x222614, Func Offset: 0x144
	// Line 1990, Address: 0x22261c, Func Offset: 0x14c
	// Line 1992, Address: 0x222624, Func Offset: 0x154
	// Line 1995, Address: 0x22262c, Func Offset: 0x15c
	// Line 1996, Address: 0x222634, Func Offset: 0x164
	// Line 2020, Address: 0x222638, Func Offset: 0x168
	// Line 2015, Address: 0x22263c, Func Offset: 0x16c
	// Line 2019, Address: 0x222640, Func Offset: 0x170
	// Line 1978, Address: 0x222648, Func Offset: 0x178
	// Line 2054, Address: 0x22264c, Func Offset: 0x17c
	// Line 1978, Address: 0x222650, Func Offset: 0x180
	// Line 1993, Address: 0x222658, Func Offset: 0x188
	// Line 1996, Address: 0x22265c, Func Offset: 0x18c
	// Line 2019, Address: 0x222660, Func Offset: 0x190
	// Line 2020, Address: 0x222670, Func Offset: 0x1a0
	// Line 2019, Address: 0x222674, Func Offset: 0x1a4
	// Line 2020, Address: 0x222680, Func Offset: 0x1b0
	// Line 2019, Address: 0x222684, Func Offset: 0x1b4
	// Line 2020, Address: 0x22268c, Func Offset: 0x1bc
	// Line 2027, Address: 0x22269c, Func Offset: 0x1cc
	// Line 2033, Address: 0x2226b0, Func Offset: 0x1e0
	// Line 2046, Address: 0x2226cc, Func Offset: 0x1fc
	// Line 2045, Address: 0x2226d0, Func Offset: 0x200
	// Line 2054, Address: 0x2226f8, Func Offset: 0x228
	// Line 2022, Address: 0x222718, Func Offset: 0x248
	// Line 2023, Address: 0x222738, Func Offset: 0x268
	// Line 2054, Address: 0x22273c, Func Offset: 0x26c
	// Line 2024, Address: 0x22274c, Func Offset: 0x27c
	// Line 2054, Address: 0x222758, Func Offset: 0x288
	// Line 2041, Address: 0x22275c, Func Offset: 0x28c
	// Line 2054, Address: 0x222760, Func Offset: 0x290
	// Line 2042, Address: 0x222778, Func Offset: 0x2a8
	// Line 2055, Address: 0x222780, Func Offset: 0x2b0
	// Func End, Address: 0x22279c, Func Offset: 0x2cc
}

// RevisePrediction__17zNMEGoalFogBattleFP10zNMEFoggerP5xVec3P5xVec3
// Start address: 0x2227a0
float32 zNMEGoalFogBattle::RevisePrediction(zNMEFogger* npc, xVec3* pos_tgt, xVec3* dir_tgt)
{
	xVec3 dir_PtoP;
	xVec3 dir_NtoP;
	xVec3 dir_plyr;
	xVec3 pos_repred;
	xVec3 dir_revised;
	// Line 1827, Address: 0x2227a0, Func Offset: 0
	// Line 1833, Address: 0x2227a4, Func Offset: 0x4
	// Line 1834, Address: 0x2227a8, Func Offset: 0x8
	// Line 1833, Address: 0x2227ac, Func Offset: 0xc
	// Line 1834, Address: 0x2227b0, Func Offset: 0x10
	// Line 1833, Address: 0x2227b8, Func Offset: 0x18
	// Line 1834, Address: 0x222814, Func Offset: 0x74
	// Line 1836, Address: 0x222820, Func Offset: 0x80
	// Line 1839, Address: 0x22282c, Func Offset: 0x8c
	// Line 1836, Address: 0x222834, Func Offset: 0x94
	// Line 1839, Address: 0x222838, Func Offset: 0x98
	// Line 1836, Address: 0x22283c, Func Offset: 0x9c
	// Line 1839, Address: 0x222840, Func Offset: 0xa0
	// Line 1836, Address: 0x222844, Func Offset: 0xa4
	// Line 1839, Address: 0x22284c, Func Offset: 0xac
	// Line 1836, Address: 0x22285c, Func Offset: 0xbc
	// Line 1839, Address: 0x222874, Func Offset: 0xd4
	// Line 1836, Address: 0x222878, Func Offset: 0xd8
	// Line 1839, Address: 0x22287c, Func Offset: 0xdc
	// Line 1840, Address: 0x2228a0, Func Offset: 0x100
	// Line 1845, Address: 0x2228ac, Func Offset: 0x10c
	// Line 1842, Address: 0x2228d4, Func Offset: 0x134
	// Line 1846, Address: 0x2228e0, Func Offset: 0x140
	// Line 1842, Address: 0x2228e4, Func Offset: 0x144
	// Line 1845, Address: 0x2228e8, Func Offset: 0x148
	// Line 1842, Address: 0x2228ec, Func Offset: 0x14c
	// Line 1846, Address: 0x222900, Func Offset: 0x160
	// Line 1848, Address: 0x222908, Func Offset: 0x168
	// Line 1862, Address: 0x222920, Func Offset: 0x180
	// Line 1848, Address: 0x222924, Func Offset: 0x184
	// Line 1862, Address: 0x222938, Func Offset: 0x198
	// Line 1883, Address: 0x222940, Func Offset: 0x1a0
	// Line 1893, Address: 0x222980, Func Offset: 0x1e0
	// Line 1902, Address: 0x222984, Func Offset: 0x1e4
	// Line 1893, Address: 0x222988, Func Offset: 0x1e8
	// Line 1897, Address: 0x22298c, Func Offset: 0x1ec
	// Line 1893, Address: 0x222990, Func Offset: 0x1f0
	// Line 1897, Address: 0x222994, Func Offset: 0x1f4
	// Line 1893, Address: 0x2229a0, Func Offset: 0x200
	// Line 1897, Address: 0x2229a4, Func Offset: 0x204
	// Line 1893, Address: 0x2229a8, Func Offset: 0x208
	// Line 1898, Address: 0x2229b0, Func Offset: 0x210
	// Line 1902, Address: 0x2229b4, Func Offset: 0x214
	// Line 1897, Address: 0x2229b8, Func Offset: 0x218
	// Line 1893, Address: 0x2229bc, Func Offset: 0x21c
	// Line 1898, Address: 0x2229c4, Func Offset: 0x224
	// Line 1897, Address: 0x2229c8, Func Offset: 0x228
	// Line 1893, Address: 0x2229d4, Func Offset: 0x234
	// Line 1897, Address: 0x2229d8, Func Offset: 0x238
	// Line 1893, Address: 0x2229dc, Func Offset: 0x23c
	// Line 1898, Address: 0x2229e4, Func Offset: 0x244
	// Line 1893, Address: 0x2229e8, Func Offset: 0x248
	// Line 1902, Address: 0x2229ec, Func Offset: 0x24c
	// Line 1903, Address: 0x2229f8, Func Offset: 0x258
	// Line 1897, Address: 0x222a04, Func Offset: 0x264
	// Line 1903, Address: 0x222a1c, Func Offset: 0x27c
	// Line 1897, Address: 0x222a20, Func Offset: 0x280
	// Line 1898, Address: 0x222a24, Func Offset: 0x284
	// Line 1897, Address: 0x222a2c, Func Offset: 0x28c
	// Line 1898, Address: 0x222a4c, Func Offset: 0x2ac
	// Line 1897, Address: 0x222a50, Func Offset: 0x2b0
	// Line 1898, Address: 0x222a5c, Func Offset: 0x2bc
	// Line 1897, Address: 0x222a60, Func Offset: 0x2c0
	// Line 1898, Address: 0x222a68, Func Offset: 0x2c8
	// Line 1897, Address: 0x222a70, Func Offset: 0x2d0
	// Line 1898, Address: 0x222a74, Func Offset: 0x2d4
	// Line 1902, Address: 0x222a78, Func Offset: 0x2d8
	// Line 1897, Address: 0x222a84, Func Offset: 0x2e4
	// Line 1898, Address: 0x222a88, Func Offset: 0x2e8
	// Line 1902, Address: 0x222a94, Func Offset: 0x2f4
	// Line 1903, Address: 0x222aa8, Func Offset: 0x308
	// Line 1898, Address: 0x222aac, Func Offset: 0x30c
	// Line 1902, Address: 0x222ab8, Func Offset: 0x318
	// Line 1903, Address: 0x222abc, Func Offset: 0x31c
	// Line 1904, Address: 0x222ac4, Func Offset: 0x324
	// Line 1835, Address: 0x222ad4, Func Offset: 0x334
	// Line 1841, Address: 0x222ae0, Func Offset: 0x340
	// Line 1847, Address: 0x222aec, Func Offset: 0x34c
	// Line 1904, Address: 0x222afc, Func Offset: 0x35c
	// Line 1884, Address: 0x222b24, Func Offset: 0x384
	// Line 1911, Address: 0x222b30, Func Offset: 0x390
	// Line 1913, Address: 0x222b34, Func Offset: 0x394
	// Line 1912, Address: 0x222b44, Func Offset: 0x3a4
	// Line 1913, Address: 0x222b48, Func Offset: 0x3a8
	// Line 1912, Address: 0x222b54, Func Offset: 0x3b4
	// Line 1913, Address: 0x222b58, Func Offset: 0x3b8
	// Line 1912, Address: 0x222b5c, Func Offset: 0x3bc
	// Line 1913, Address: 0x222b60, Func Offset: 0x3c0
	// Line 1916, Address: 0x222b98, Func Offset: 0x3f8
	// Func End, Address: 0x222ba4, Func Offset: 0x404
}

// PredictPlyrPos__17zNMEGoalFogBattleFP10zNMEFoggerP5xVec3P5xVec3
// Start address: 0x222bb0
float32 zNMEGoalFogBattle::PredictPlyrPos(zNMEFogger* npc, xVec3* pos_plyr, xVec3* dir_plyr)
{
	NMECfgFogger* cfg;
	int32 allowRevision;
	float32 dst_plyr;
	float32 dst_revised;
	// Line 1774, Address: 0x222bb0, Func Offset: 0
	// Line 1778, Address: 0x222bb4, Func Offset: 0x4
	// Line 1774, Address: 0x222bb8, Func Offset: 0x8
	// Line 1778, Address: 0x222bbc, Func Offset: 0xc
	// Line 1774, Address: 0x222bc0, Func Offset: 0x10
	// Line 1775, Address: 0x222be4, Func Offset: 0x34
	// Line 1778, Address: 0x222be8, Func Offset: 0x38
	// Line 1779, Address: 0x222c80, Func Offset: 0xd0
	// Line 1784, Address: 0x222ca8, Func Offset: 0xf8
	// Line 1790, Address: 0x222cac, Func Offset: 0xfc
	// Line 1792, Address: 0x222cbc, Func Offset: 0x10c
	// Line 1790, Address: 0x222cc4, Func Offset: 0x114
	// Line 1792, Address: 0x222cc8, Func Offset: 0x118
	// Line 1790, Address: 0x222ccc, Func Offset: 0x11c
	// Line 1791, Address: 0x222d14, Func Offset: 0x164
	// Line 1792, Address: 0x222d20, Func Offset: 0x170
	// Line 1793, Address: 0x222d2c, Func Offset: 0x17c
	// Line 1806, Address: 0x222d58, Func Offset: 0x1a8
	// Line 1822, Address: 0x222d60, Func Offset: 0x1b0
	// Line 1797, Address: 0x222d74, Func Offset: 0x1c4
	// Line 1798, Address: 0x222d7c, Func Offset: 0x1cc
	// Line 1822, Address: 0x222d80, Func Offset: 0x1d0
	// Line 1807, Address: 0x222da0, Func Offset: 0x1f0
	// Line 1822, Address: 0x222da8, Func Offset: 0x1f8
	// Line 1808, Address: 0x222db0, Func Offset: 0x200
	// Line 1822, Address: 0x222dbc, Func Offset: 0x20c
	// Line 1823, Address: 0x222dcc, Func Offset: 0x21c
	// Func End, Address: 0x222dec, Func Offset: 0x23c
}

// SubStateUpdate__17zNMEGoalFogBattleFP10zNMEFoggerfRiR11en_trantype
// Start address: 0x222df0
int32 zNMEGoalFogBattle::SubStateUpdate(zNMEFogger* npc, float32 dt, int32& nextgoal, en_trantype& trantype)
{
	int32 doGoalTransition;
	en_battlefog old_battlefog;
	int32 subenter;
	xVec3 pos_goingHere;
	int32 inSpot;
	int32 canEvade;
	NMECfgFogger* cfg;
	float32 tym_ideal;
	int32 arrived;
	// Line 1605, Address: 0x222df0, Func Offset: 0
	// Line 1616, Address: 0x222df4, Func Offset: 0x4
	// Line 1605, Address: 0x222df8, Func Offset: 0x8
	// Line 1619, Address: 0x222dfc, Func Offset: 0xc
	// Line 1605, Address: 0x222e00, Func Offset: 0x10
	// Line 1619, Address: 0x222e04, Func Offset: 0x14
	// Line 1605, Address: 0x222e08, Func Offset: 0x18
	// Line 1606, Address: 0x222e10, Func Offset: 0x20
	// Line 1605, Address: 0x222e14, Func Offset: 0x24
	// Line 1616, Address: 0x222e3c, Func Offset: 0x4c
	// Line 1605, Address: 0x222e40, Func Offset: 0x50
	// Line 1614, Address: 0x222e48, Func Offset: 0x58
	// Line 1613, Address: 0x222e50, Func Offset: 0x60
	// Line 1616, Address: 0x222e54, Func Offset: 0x64
	// Line 1614, Address: 0x222e58, Func Offset: 0x68
	// Line 1616, Address: 0x222e60, Func Offset: 0x70
	// Line 1614, Address: 0x222e64, Func Offset: 0x74
	// Line 1616, Address: 0x222e68, Func Offset: 0x78
	// Line 1619, Address: 0x222e74, Func Offset: 0x84
	// Line 1620, Address: 0x222ea4, Func Offset: 0xb4
	// Line 1625, Address: 0x222ebc, Func Offset: 0xcc
	// Line 1627, Address: 0x222edc, Func Offset: 0xec
	// Line 1632, Address: 0x222ee4, Func Offset: 0xf4
	// Line 1634, Address: 0x222f0c, Func Offset: 0x11c
	// Line 1635, Address: 0x2230c8, Func Offset: 0x2d8
	// Line 1639, Address: 0x2230d0, Func Offset: 0x2e0
	// Line 1640, Address: 0x2230d8, Func Offset: 0x2e8
	// Line 1644, Address: 0x223128, Func Offset: 0x338
	// Line 1647, Address: 0x22319c, Func Offset: 0x3ac
	// Line 1651, Address: 0x2231ac, Func Offset: 0x3bc
	// Line 1655, Address: 0x2231cc, Func Offset: 0x3dc
	// Line 1656, Address: 0x2231dc, Func Offset: 0x3ec
	// Line 1663, Address: 0x2231e4, Func Offset: 0x3f4
	// Line 1661, Address: 0x2231e8, Func Offset: 0x3f8
	// Line 1663, Address: 0x2231ec, Func Offset: 0x3fc
	// Line 1662, Address: 0x2231f0, Func Offset: 0x400
	// Line 1664, Address: 0x2231f4, Func Offset: 0x404
	// Line 1663, Address: 0x2231f8, Func Offset: 0x408
	// Line 1664, Address: 0x2231fc, Func Offset: 0x40c
	// Line 1667, Address: 0x223214, Func Offset: 0x424
	// Line 1671, Address: 0x22321c, Func Offset: 0x42c
	// Line 1700, Address: 0x223224, Func Offset: 0x434
	// Line 1701, Address: 0x223228, Func Offset: 0x438
	// Line 1700, Address: 0x223238, Func Offset: 0x448
	// Line 1701, Address: 0x223248, Func Offset: 0x458
	// Line 1702, Address: 0x223250, Func Offset: 0x460
	// Line 1704, Address: 0x223288, Func Offset: 0x498
	// Line 1707, Address: 0x223294, Func Offset: 0x4a4
	// Line 1710, Address: 0x2232c0, Func Offset: 0x4d0
	// Line 1720, Address: 0x2232d0, Func Offset: 0x4e0
	// Line 1726, Address: 0x2232dc, Func Offset: 0x4ec
	// Line 1619, Address: 0x2232f8, Func Offset: 0x508
	// Line 1726, Address: 0x2232fc, Func Offset: 0x50c
	// Line 1619, Address: 0x223304, Func Offset: 0x514
	// Line 1726, Address: 0x223308, Func Offset: 0x518
	// Line 1619, Address: 0x223318, Func Offset: 0x528
	// Line 1726, Address: 0x22331c, Func Offset: 0x52c
	// Line 1619, Address: 0x223330, Func Offset: 0x540
	// Line 1726, Address: 0x223334, Func Offset: 0x544
	// Line 1619, Address: 0x223338, Func Offset: 0x548
	// Line 1726, Address: 0x22333c, Func Offset: 0x54c
	// Line 1619, Address: 0x223368, Func Offset: 0x578
	// Line 1726, Address: 0x223384, Func Offset: 0x594
	// Line 1623, Address: 0x223388, Func Offset: 0x598
	// Line 1726, Address: 0x22338c, Func Offset: 0x59c
	// Line 1623, Address: 0x223390, Func Offset: 0x5a0
	// Line 1726, Address: 0x223394, Func Offset: 0x5a4
	// Line 1623, Address: 0x2233ac, Func Offset: 0x5bc
	// Line 1726, Address: 0x2233b0, Func Offset: 0x5c0
	// Line 1623, Address: 0x2233b8, Func Offset: 0x5c8
	// Line 1726, Address: 0x2233bc, Func Offset: 0x5cc
	// Line 1623, Address: 0x2233cc, Func Offset: 0x5dc
	// Line 1624, Address: 0x2233d4, Func Offset: 0x5e4
	// Line 1726, Address: 0x2233dc, Func Offset: 0x5ec
	// Line 1634, Address: 0x2233f0, Func Offset: 0x600
	// Line 1726, Address: 0x2233f8, Func Offset: 0x608
	// Line 1644, Address: 0x2233fc, Func Offset: 0x60c
	// Line 1726, Address: 0x223400, Func Offset: 0x610
	// Line 1644, Address: 0x223450, Func Offset: 0x660
	// Line 1726, Address: 0x223458, Func Offset: 0x668
	// Line 1644, Address: 0x223470, Func Offset: 0x680
	// Line 1726, Address: 0x223474, Func Offset: 0x684
	// Line 1644, Address: 0x22347c, Func Offset: 0x68c
	// Line 1726, Address: 0x223480, Func Offset: 0x690
	// Line 1644, Address: 0x2234a4, Func Offset: 0x6b4
	// Line 1726, Address: 0x2234a8, Func Offset: 0x6b8
	// Line 1644, Address: 0x2234c0, Func Offset: 0x6d0
	// Line 1726, Address: 0x2234c4, Func Offset: 0x6d4
	// Line 1644, Address: 0x2234d4, Func Offset: 0x6e4
	// Line 1672, Address: 0x2234e0, Func Offset: 0x6f0
	// Line 1726, Address: 0x2234e4, Func Offset: 0x6f4
	// Line 1675, Address: 0x2234f4, Func Offset: 0x704
	// Line 1676, Address: 0x2234f8, Func Offset: 0x708
	// Line 1726, Address: 0x2234fc, Func Offset: 0x70c
	// Line 1676, Address: 0x223500, Func Offset: 0x710
	// Line 1726, Address: 0x223504, Func Offset: 0x714
	// Line 1676, Address: 0x223520, Func Offset: 0x730
	// Line 1726, Address: 0x223524, Func Offset: 0x734
	// Line 1676, Address: 0x22352c, Func Offset: 0x73c
	// Line 1726, Address: 0x223530, Func Offset: 0x740
	// Line 1676, Address: 0x223540, Func Offset: 0x750
	// Line 1677, Address: 0x223548, Func Offset: 0x758
	// Line 1726, Address: 0x223550, Func Offset: 0x760
	// Line 1682, Address: 0x223554, Func Offset: 0x764
	// Line 1726, Address: 0x223558, Func Offset: 0x768
	// Line 1683, Address: 0x223560, Func Offset: 0x770
	// Line 1726, Address: 0x223564, Func Offset: 0x774
	// Line 1682, Address: 0x223580, Func Offset: 0x790
	// Line 1683, Address: 0x223588, Func Offset: 0x798
	// Line 1726, Address: 0x22358c, Func Offset: 0x79c
	// Line 1683, Address: 0x223590, Func Offset: 0x7a0
	// Line 1726, Address: 0x223594, Func Offset: 0x7a4
	// Line 1684, Address: 0x2235a4, Func Offset: 0x7b4
	// Line 1726, Address: 0x2235b0, Func Offset: 0x7c0
	// Line 1685, Address: 0x2235b8, Func Offset: 0x7c8
	// Line 1726, Address: 0x2235c0, Func Offset: 0x7d0
	// Line 1685, Address: 0x2235c8, Func Offset: 0x7d8
	// Line 1726, Address: 0x223624, Func Offset: 0x834
	// Line 1685, Address: 0x223630, Func Offset: 0x840
	// Line 1726, Address: 0x223634, Func Offset: 0x844
	// Line 1689, Address: 0x223640, Func Offset: 0x850
	// Line 1726, Address: 0x223644, Func Offset: 0x854
	// Line 1689, Address: 0x223648, Func Offset: 0x858
	// Line 1726, Address: 0x22364c, Func Offset: 0x85c
	// Line 1689, Address: 0x223664, Func Offset: 0x874
	// Line 1726, Address: 0x223668, Func Offset: 0x878
	// Line 1689, Address: 0x223670, Func Offset: 0x880
	// Line 1726, Address: 0x223674, Func Offset: 0x884
	// Line 1689, Address: 0x223684, Func Offset: 0x894
	// Line 1726, Address: 0x223694, Func Offset: 0x8a4
	// Line 1685, Address: 0x22369c, Func Offset: 0x8ac
	// Line 1726, Address: 0x2236a4, Func Offset: 0x8b4
	// Line 1685, Address: 0x2236ac, Func Offset: 0x8bc
	// Line 1726, Address: 0x223704, Func Offset: 0x914
	// Line 1685, Address: 0x22370c, Func Offset: 0x91c
	// Line 1726, Address: 0x223714, Func Offset: 0x924
	// Line 1685, Address: 0x22371c, Func Offset: 0x92c
	// Line 1726, Address: 0x223778, Func Offset: 0x988
	// Line 1685, Address: 0x223790, Func Offset: 0x9a0
	// Line 1726, Address: 0x223798, Func Offset: 0x9a8
	// Line 1685, Address: 0x2237a0, Func Offset: 0x9b0
	// Line 1726, Address: 0x2237f8, Func Offset: 0xa08
	// Line 1721, Address: 0x2237fc, Func Offset: 0xa0c
	// Line 1727, Address: 0x223820, Func Offset: 0xa30
	// Func End, Address: 0x223858, Func Offset: 0xa68
}

// CheckSituation__17zNMEGoalFogBattleFP10zNMEFoggerRiR11en_trantype
// Start address: 0x223860
int32 zNMEGoalFogBattle::CheckSituation(zNMEFogger* npc, int32& nextgoal, en_trantype& trantype)
{
	en_vis vis;
	// Line 1568, Address: 0x223860, Func Offset: 0
	// Line 1570, Address: 0x223884, Func Offset: 0x24
	// Line 1573, Address: 0x2238a4, Func Offset: 0x44
	// Line 1580, Address: 0x2238b8, Func Offset: 0x58
	// Line 1588, Address: 0x2238d4, Func Offset: 0x74
	// Line 1589, Address: 0x2238e4, Func Offset: 0x84
	// Line 1571, Address: 0x2238ec, Func Offset: 0x8c
	// Line 1576, Address: 0x2238f4, Func Offset: 0x94
	// Line 1589, Address: 0x2238f8, Func Offset: 0x98
	// Line 1575, Address: 0x2238fc, Func Offset: 0x9c
	// Line 1589, Address: 0x223904, Func Offset: 0xa4
	// Line 1577, Address: 0x223918, Func Offset: 0xb8
	// Line 1583, Address: 0x223920, Func Offset: 0xc0
	// Line 1589, Address: 0x223924, Func Offset: 0xc4
	// Line 1582, Address: 0x223928, Func Offset: 0xc8
	// Line 1589, Address: 0x223930, Func Offset: 0xd0
	// Line 1584, Address: 0x223944, Func Offset: 0xe4
	// Line 1591, Address: 0x22394c, Func Offset: 0xec
	// Line 1592, Address: 0x22396c, Func Offset: 0x10c
	// Line 1600, Address: 0x223978, Func Offset: 0x118
	// Line 1594, Address: 0x223980, Func Offset: 0x120
	// Line 1596, Address: 0x223984, Func Offset: 0x124
	// Line 1600, Address: 0x223988, Func Offset: 0x128
	// Line 1596, Address: 0x22398c, Func Offset: 0x12c
	// Line 1595, Address: 0x223990, Func Offset: 0x130
	// Line 1596, Address: 0x223994, Func Offset: 0x134
	// Line 1595, Address: 0x223998, Func Offset: 0x138
	// Line 1600, Address: 0x22399c, Func Offset: 0x13c
	// Line 1597, Address: 0x2239b0, Func Offset: 0x150
	// Line 1601, Address: 0x2239b4, Func Offset: 0x154
	// Func End, Address: 0x2239d0, Func Offset: 0x170
}

// Process__17zNMEGoalFogBattleFP11en_trantypefPv
// Start address: 0x2239d0
int32 zNMEGoalFogBattle::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	zNMEFogger* npc;
	int32 nextgoal;
	int32 doTran;
	// Line 1549, Address: 0x2239d0, Func Offset: 0
	// Line 1554, Address: 0x2239f0, Func Offset: 0x20
	// Line 1549, Address: 0x2239f4, Func Offset: 0x24
	// Line 1550, Address: 0x2239fc, Func Offset: 0x2c
	// Line 1554, Address: 0x223a04, Func Offset: 0x34
	// Line 1550, Address: 0x223a08, Func Offset: 0x38
	// Line 1554, Address: 0x223a0c, Func Offset: 0x3c
	// Line 1555, Address: 0x223a18, Func Offset: 0x48
	// Line 1556, Address: 0x223a20, Func Offset: 0x50
	// Line 1559, Address: 0x223a28, Func Offset: 0x58
	// Line 1560, Address: 0x223a3c, Func Offset: 0x6c
	// Line 1561, Address: 0x223a44, Func Offset: 0x74
	// Line 1563, Address: 0x223a4c, Func Offset: 0x7c
	// Line 1564, Address: 0x223aa4, Func Offset: 0xd4
	// Func End, Address: 0x223ac4, Func Offset: 0xf4
}

// Resume__17zNMEGoalFogBattleFfPv
// Start address: 0x223ad0
int32 zNMEGoalFogBattle::Resume()
{
	// Line 1541, Address: 0x223ad0, Func Offset: 0
	// Line 1545, Address: 0x223ad4, Func Offset: 0x4
	// Line 1541, Address: 0x223ad8, Func Offset: 0x8
	// Line 1544, Address: 0x223adc, Func Offset: 0xc
	// Line 1541, Address: 0x223ae0, Func Offset: 0x10
	// Line 1545, Address: 0x223ae4, Func Offset: 0x14
	// Line 1541, Address: 0x223ae8, Func Offset: 0x18
	// Line 1545, Address: 0x223aec, Func Offset: 0x1c
	// Line 1541, Address: 0x223af0, Func Offset: 0x20
	// Line 1543, Address: 0x223af4, Func Offset: 0x24
	// Line 1544, Address: 0x223b00, Func Offset: 0x30
	// Line 1545, Address: 0x223b20, Func Offset: 0x50
	// Line 1546, Address: 0x223b9c, Func Offset: 0xcc
	// Func End, Address: 0x223bb4, Func Offset: 0xe4
}

// Enter__17zNMEGoalFogBattleFfPv
// Start address: 0x223bc0
int32 zNMEGoalFogBattle::Enter()
{
	// Line 1527, Address: 0x223bc0, Func Offset: 0
	// Line 1533, Address: 0x223bc4, Func Offset: 0x4
	// Line 1527, Address: 0x223bc8, Func Offset: 0x8
	// Line 1533, Address: 0x223bcc, Func Offset: 0xc
	// Line 1527, Address: 0x223bd0, Func Offset: 0x10
	// Line 1533, Address: 0x223bd4, Func Offset: 0x14
	// Line 1527, Address: 0x223bd8, Func Offset: 0x18
	// Line 1533, Address: 0x223bdc, Func Offset: 0x1c
	// Line 1527, Address: 0x223be0, Func Offset: 0x20
	// Line 1532, Address: 0x223be4, Func Offset: 0x24
	// Line 1530, Address: 0x223be8, Func Offset: 0x28
	// Line 1534, Address: 0x223bec, Func Offset: 0x2c
	// Line 1535, Address: 0x223bf0, Func Offset: 0x30
	// Line 1533, Address: 0x223bf4, Func Offset: 0x34
	// Line 1537, Address: 0x223bfc, Func Offset: 0x3c
	// Line 1530, Address: 0x223c00, Func Offset: 0x40
	// Line 1537, Address: 0x223c04, Func Offset: 0x44
	// Line 1530, Address: 0x223c0c, Func Offset: 0x4c
	// Line 1532, Address: 0x223c10, Func Offset: 0x50
	// Line 1533, Address: 0x223c14, Func Offset: 0x54
	// Line 1534, Address: 0x223c20, Func Offset: 0x60
	// Line 1535, Address: 0x223c24, Func Offset: 0x64
	// Line 1537, Address: 0x223c44, Func Offset: 0x84
	// Line 1538, Address: 0x223cc0, Func Offset: 0x100
	// Func End, Address: 0x223cd8, Func Offset: 0x118
}

// FeetFXUpdate__16zNMEGoalFogAwareFP10zNMEFoggerf
// Start address: 0x223ce0
void zNMEGoalFogAware::FeetFXUpdate(zNMEFogger* npc)
{
	float32 ds2_cam;
	uint32 anid;
	int32 rc;
	float32 tym_animCurr;
	int8 currFoot;
	int32 i;
	xVec3 pos_emit;
	xMat4x3* mat_bone;
	xMat4x3* mat_bone;
	xVec3 dir_emit;
	// Line 1412, Address: 0x223ce0, Func Offset: 0
	// Line 1417, Address: 0x223ce4, Func Offset: 0x4
	// Line 1412, Address: 0x223ce8, Func Offset: 0x8
	// Line 1417, Address: 0x223cec, Func Offset: 0xc
	// Line 1418, Address: 0x223d08, Func Offset: 0x28
	// Line 1417, Address: 0x223d10, Func Offset: 0x30
	// Line 1418, Address: 0x223d3c, Func Offset: 0x5c
	// Line 1417, Address: 0x223d40, Func Offset: 0x60
	// Line 1418, Address: 0x223d44, Func Offset: 0x64
	// Line 1422, Address: 0x223d50, Func Offset: 0x70
	// Line 1423, Address: 0x223d8c, Func Offset: 0xac
	// Line 1427, Address: 0x223da0, Func Offset: 0xc0
	// Line 1428, Address: 0x223dac, Func Offset: 0xcc
	// Line 1435, Address: 0x223db8, Func Offset: 0xd8
	// Line 1434, Address: 0x223dbc, Func Offset: 0xdc
	// Line 1435, Address: 0x223dc0, Func Offset: 0xe0
	// Line 1428, Address: 0x223dc8, Func Offset: 0xe8
	// Line 1437, Address: 0x223dd4, Func Offset: 0xf4
	// Line 1440, Address: 0x223de4, Func Offset: 0x104
	// Line 1443, Address: 0x223df4, Func Offset: 0x114
	// Line 1445, Address: 0x223dfc, Func Offset: 0x11c
	// Line 1446, Address: 0x223e04, Func Offset: 0x124
	// Line 1449, Address: 0x223e20, Func Offset: 0x140
	// Line 1451, Address: 0x223e28, Func Offset: 0x148
	// Line 1458, Address: 0x223e34, Func Offset: 0x154
	// Line 1460, Address: 0x223e40, Func Offset: 0x160
	// Line 1459, Address: 0x223e44, Func Offset: 0x164
	// Line 1460, Address: 0x223e48, Func Offset: 0x168
	// Line 1459, Address: 0x223e54, Func Offset: 0x174
	// Line 1460, Address: 0x223e5c, Func Offset: 0x17c
	// Line 1459, Address: 0x223e70, Func Offset: 0x190
	// Line 1461, Address: 0x223e74, Func Offset: 0x194
	// Line 1460, Address: 0x223e78, Func Offset: 0x198
	// Line 1461, Address: 0x223e7c, Func Offset: 0x19c
	// Line 1462, Address: 0x223ec4, Func Offset: 0x1e4
	// Line 1463, Address: 0x223ef0, Func Offset: 0x210
	// Line 1466, Address: 0x223ef8, Func Offset: 0x218
	// Line 1465, Address: 0x223efc, Func Offset: 0x21c
	// Line 1466, Address: 0x223f00, Func Offset: 0x220
	// Line 1465, Address: 0x223f0c, Func Offset: 0x22c
	// Line 1466, Address: 0x223f14, Func Offset: 0x234
	// Line 1465, Address: 0x223f28, Func Offset: 0x248
	// Line 1467, Address: 0x223f2c, Func Offset: 0x24c
	// Line 1466, Address: 0x223f30, Func Offset: 0x250
	// Line 1467, Address: 0x223f34, Func Offset: 0x254
	// Line 1468, Address: 0x223f7c, Func Offset: 0x29c
	// Line 1470, Address: 0x223fac, Func Offset: 0x2cc
	// Line 1471, Address: 0x224000, Func Offset: 0x320
	// Line 1473, Address: 0x224004, Func Offset: 0x324
	// Line 1475, Address: 0x22400c, Func Offset: 0x32c
	// Line 1471, Address: 0x224010, Func Offset: 0x330
	// Line 1473, Address: 0x224014, Func Offset: 0x334
	// Line 1474, Address: 0x224018, Func Offset: 0x338
	// Line 1473, Address: 0x22401c, Func Offset: 0x33c
	// Line 1474, Address: 0x224020, Func Offset: 0x340
	// Line 1473, Address: 0x224024, Func Offset: 0x344
	// Line 1474, Address: 0x224028, Func Offset: 0x348
	// Line 1473, Address: 0x22402c, Func Offset: 0x34c
	// Line 1471, Address: 0x224030, Func Offset: 0x350
	// Line 1474, Address: 0x22403c, Func Offset: 0x35c
	// Line 1475, Address: 0x224040, Func Offset: 0x360
	// Line 1471, Address: 0x224048, Func Offset: 0x368
	// Line 1474, Address: 0x22404c, Func Offset: 0x36c
	// Line 1471, Address: 0x224050, Func Offset: 0x370
	// Line 1473, Address: 0x224070, Func Offset: 0x390
	// Line 1474, Address: 0x2240cc, Func Offset: 0x3ec
	// Line 1473, Address: 0x2240d4, Func Offset: 0x3f4
	// Line 1474, Address: 0x2240d8, Func Offset: 0x3f8
	// Line 1473, Address: 0x2240dc, Func Offset: 0x3fc
	// Line 1474, Address: 0x2240e0, Func Offset: 0x400
	// Line 1475, Address: 0x224134, Func Offset: 0x454
	// Line 1476, Address: 0x22413c, Func Offset: 0x45c
	// Line 1478, Address: 0x2241ac, Func Offset: 0x4cc
	// Line 1480, Address: 0x22421c, Func Offset: 0x53c
	// Line 1478, Address: 0x224220, Func Offset: 0x540
	// Line 1481, Address: 0x224224, Func Offset: 0x544
	// Line 1478, Address: 0x224228, Func Offset: 0x548
	// Line 1481, Address: 0x22422c, Func Offset: 0x54c
	// Line 1480, Address: 0x224230, Func Offset: 0x550
	// Line 1481, Address: 0x224234, Func Offset: 0x554
	// Line 1480, Address: 0x224238, Func Offset: 0x558
	// Line 1481, Address: 0x22423c, Func Offset: 0x55c
	// Line 1480, Address: 0x224240, Func Offset: 0x560
	// Line 1481, Address: 0x224268, Func Offset: 0x588
	// Line 1484, Address: 0x224270, Func Offset: 0x590
	// Func End, Address: 0x22427c, Func Offset: 0x59c
}

// ChkTranCases__16zNMEGoalFogAwareFP10zNMEFoggerRiR11en_trantype
// Start address: 0x224280
int32 zNMEGoalFogAware::ChkTranCases(zNMEFogger* npc, int32& nextgoal, en_trantype& trantype)
{
	en_vis vis;
	int32 vidx;
	float32* wtlist;
	// Line 1345, Address: 0x224280, Func Offset: 0
	// Line 1347, Address: 0x2242ac, Func Offset: 0x2c
	// Line 1348, Address: 0x2242cc, Func Offset: 0x4c
	// Line 1350, Address: 0x2242d4, Func Offset: 0x54
	// Line 1353, Address: 0x2242ec, Func Offset: 0x6c
	// Line 1360, Address: 0x224300, Func Offset: 0x80
	// Line 1370, Address: 0x22431c, Func Offset: 0x9c
	// Line 1372, Address: 0x22433c, Func Offset: 0xbc
	// Line 1381, Address: 0x224348, Func Offset: 0xc8
	// Line 1408, Address: 0x224350, Func Offset: 0xd0
	// Line 1351, Address: 0x224358, Func Offset: 0xd8
	// Line 1356, Address: 0x224360, Func Offset: 0xe0
	// Line 1408, Address: 0x224364, Func Offset: 0xe4
	// Line 1356, Address: 0x224368, Func Offset: 0xe8
	// Line 1355, Address: 0x22436c, Func Offset: 0xec
	// Line 1356, Address: 0x224370, Func Offset: 0xf0
	// Line 1355, Address: 0x224374, Func Offset: 0xf4
	// Line 1408, Address: 0x224378, Func Offset: 0xf8
	// Line 1357, Address: 0x22438c, Func Offset: 0x10c
	// Line 1363, Address: 0x224394, Func Offset: 0x114
	// Line 1408, Address: 0x224398, Func Offset: 0x118
	// Line 1363, Address: 0x22439c, Func Offset: 0x11c
	// Line 1362, Address: 0x2243a0, Func Offset: 0x120
	// Line 1363, Address: 0x2243a4, Func Offset: 0x124
	// Line 1362, Address: 0x2243a8, Func Offset: 0x128
	// Line 1408, Address: 0x2243ac, Func Offset: 0x12c
	// Line 1364, Address: 0x2243c0, Func Offset: 0x140
	// Line 1375, Address: 0x2243c8, Func Offset: 0x148
	// Line 1377, Address: 0x2243cc, Func Offset: 0x14c
	// Line 1408, Address: 0x2243d0, Func Offset: 0x150
	// Line 1377, Address: 0x2243d4, Func Offset: 0x154
	// Line 1376, Address: 0x2243d8, Func Offset: 0x158
	// Line 1377, Address: 0x2243dc, Func Offset: 0x15c
	// Line 1376, Address: 0x2243e0, Func Offset: 0x160
	// Line 1408, Address: 0x2243e4, Func Offset: 0x164
	// Line 1378, Address: 0x2243f8, Func Offset: 0x178
	// Line 1408, Address: 0x224400, Func Offset: 0x180
	// Line 1385, Address: 0x224408, Func Offset: 0x188
	// Line 1408, Address: 0x22440c, Func Offset: 0x18c
	// Line 1386, Address: 0x224428, Func Offset: 0x1a8
	// Line 1388, Address: 0x22442c, Func Offset: 0x1ac
	// Line 1408, Address: 0x224430, Func Offset: 0x1b0
	// Line 1400, Address: 0x224440, Func Offset: 0x1c0
	// Line 1408, Address: 0x224444, Func Offset: 0x1c4
	// Line 1402, Address: 0x224450, Func Offset: 0x1d0
	// Line 1403, Address: 0x224454, Func Offset: 0x1d4
	// Line 1408, Address: 0x224458, Func Offset: 0x1d8
	// Line 1403, Address: 0x22445c, Func Offset: 0x1dc
	// Line 1408, Address: 0x224460, Func Offset: 0x1e0
	// Line 1403, Address: 0x224464, Func Offset: 0x1e4
	// Line 1408, Address: 0x224468, Func Offset: 0x1e8
	// Line 1404, Address: 0x224474, Func Offset: 0x1f4
	// Line 1408, Address: 0x22447c, Func Offset: 0x1fc
	// Line 1386, Address: 0x224484, Func Offset: 0x204
	// Line 1408, Address: 0x22448c, Func Offset: 0x20c
	// Line 1386, Address: 0x224494, Func Offset: 0x214
	// Line 1408, Address: 0x2244b8, Func Offset: 0x238
	// Line 1386, Address: 0x2244c0, Func Offset: 0x240
	// Line 1408, Address: 0x2244c8, Func Offset: 0x248
	// Line 1386, Address: 0x2244cc, Func Offset: 0x24c
	// Line 1408, Address: 0x2244d0, Func Offset: 0x250
	// Line 1386, Address: 0x2244d8, Func Offset: 0x258
	// Line 1408, Address: 0x2244dc, Func Offset: 0x25c
	// Line 1386, Address: 0x2244e4, Func Offset: 0x264
	// Line 1408, Address: 0x2244e8, Func Offset: 0x268
	// Line 1386, Address: 0x2244f4, Func Offset: 0x274
	// Line 1408, Address: 0x2244f8, Func Offset: 0x278
	// Line 1386, Address: 0x224504, Func Offset: 0x284
	// Line 1408, Address: 0x224508, Func Offset: 0x288
	// Line 1386, Address: 0x224518, Func Offset: 0x298
	// Line 1408, Address: 0x224528, Func Offset: 0x2a8
	// Line 1386, Address: 0x22452c, Func Offset: 0x2ac
	// Line 1408, Address: 0x224538, Func Offset: 0x2b8
	// Line 1390, Address: 0x22455c, Func Offset: 0x2dc
	// Line 1391, Address: 0x224560, Func Offset: 0x2e0
	// Line 1408, Address: 0x224564, Func Offset: 0x2e4
	// Line 1391, Address: 0x224568, Func Offset: 0x2e8
	// Line 1408, Address: 0x22456c, Func Offset: 0x2ec
	// Line 1391, Address: 0x224570, Func Offset: 0x2f0
	// Line 1408, Address: 0x224574, Func Offset: 0x2f4
	// Line 1392, Address: 0x224580, Func Offset: 0x300
	// Line 1408, Address: 0x224588, Func Offset: 0x308
	// Line 1396, Address: 0x22458c, Func Offset: 0x30c
	// Line 1397, Address: 0x224590, Func Offset: 0x310
	// Line 1408, Address: 0x224594, Func Offset: 0x314
	// Line 1397, Address: 0x224598, Func Offset: 0x318
	// Line 1408, Address: 0x22459c, Func Offset: 0x31c
	// Line 1397, Address: 0x2245a0, Func Offset: 0x320
	// Line 1408, Address: 0x2245a4, Func Offset: 0x324
	// Line 1398, Address: 0x2245b0, Func Offset: 0x330
	// Line 1409, Address: 0x2245b4, Func Offset: 0x334
	// Func End, Address: 0x2245d8, Func Offset: 0x358
}

// Process__16zNMEGoalFogAwareFP11en_trantypefPv
// Start address: 0x2245e0
int32 zNMEGoalFogAware::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	zNMEFogger* npc;
	int32 nextgoal;
	int32 doTran;
	// Line 1313, Address: 0x2245e0, Func Offset: 0
	// Line 1318, Address: 0x2245f8, Func Offset: 0x18
	// Line 1313, Address: 0x2245fc, Func Offset: 0x1c
	// Line 1318, Address: 0x224614, Func Offset: 0x34
	// Line 1314, Address: 0x224618, Func Offset: 0x38
	// Line 1318, Address: 0x224624, Func Offset: 0x44
	// Line 1319, Address: 0x224630, Func Offset: 0x50
	// Line 1324, Address: 0x224638, Func Offset: 0x58
	// Line 1326, Address: 0x22464c, Func Offset: 0x6c
	// Line 1327, Address: 0x224660, Func Offset: 0x80
	// Line 1331, Address: 0x2246b0, Func Offset: 0xd0
	// Line 1336, Address: 0x2246c0, Func Offset: 0xe0
	// Line 1338, Address: 0x224794, Func Offset: 0x1b4
	// Line 1320, Address: 0x2247f4, Func Offset: 0x214
	// Line 1338, Address: 0x2247fc, Func Offset: 0x21c
	// Line 1325, Address: 0x224800, Func Offset: 0x220
	// Line 1338, Address: 0x224804, Func Offset: 0x224
	// Line 1325, Address: 0x224808, Func Offset: 0x228
	// Line 1338, Address: 0x22480c, Func Offset: 0x22c
	// Line 1325, Address: 0x224820, Func Offset: 0x240
	// Line 1338, Address: 0x224824, Func Offset: 0x244
	// Line 1325, Address: 0x22482c, Func Offset: 0x24c
	// Line 1338, Address: 0x224830, Func Offset: 0x250
	// Line 1325, Address: 0x224840, Func Offset: 0x260
	// Line 1336, Address: 0x224850, Func Offset: 0x270
	// Line 1338, Address: 0x22486c, Func Offset: 0x28c
	// Line 1336, Address: 0x224870, Func Offset: 0x290
	// Line 1338, Address: 0x224874, Func Offset: 0x294
	// Line 1336, Address: 0x22487c, Func Offset: 0x29c
	// Line 1338, Address: 0x224884, Func Offset: 0x2a4
	// Line 1339, Address: 0x224894, Func Offset: 0x2b4
	// Func End, Address: 0x2248bc, Func Offset: 0x2dc
}

// Enter__16zNMEGoalFogAwareFfPv
// Start address: 0x2248c0
int32 zNMEGoalFogAware::Enter()
{
	zNMEFogger* npc;
	// Line 1296, Address: 0x2248c0, Func Offset: 0
	// Line 1301, Address: 0x2248c4, Func Offset: 0x4
	// Line 1296, Address: 0x2248c8, Func Offset: 0x8
	// Line 1297, Address: 0x2248d8, Func Offset: 0x18
	// Line 1301, Address: 0x2248e4, Func Offset: 0x24
	// Line 1309, Address: 0x2248ec, Func Offset: 0x2c
	// Line 1310, Address: 0x224974, Func Offset: 0xb4
	// Func End, Address: 0x22498c, Func Offset: 0xcc
}

// Fog_SeePlyr__10zNMEFoggerFP5xGoalPvP11en_trantypefPv
// Start address: 0x224990
int32 Fog_SeePlyr(xGoal* rawgoal, en_trantype* trantype)
{
	int32 nextgoal;
	zNMEFogger* npc;
	zNMEArena* arena;
	en_vis vis;
	// Line 1250, Address: 0x224990, Func Offset: 0
	// Line 1253, Address: 0x224994, Func Offset: 0x4
	// Line 1250, Address: 0x224998, Func Offset: 0x8
	// Line 1253, Address: 0x22499c, Func Offset: 0xc
	// Line 1250, Address: 0x2249a0, Func Offset: 0x10
	// Line 1253, Address: 0x2249b4, Func Offset: 0x24
	// Line 1256, Address: 0x2249c4, Func Offset: 0x34
	// Line 1259, Address: 0x2249d8, Func Offset: 0x48
	// Line 1266, Address: 0x2249dc, Func Offset: 0x4c
	// Line 1259, Address: 0x2249e4, Func Offset: 0x54
	// Line 1265, Address: 0x2249e8, Func Offset: 0x58
	// Line 1266, Address: 0x2249ec, Func Offset: 0x5c
	// Line 1267, Address: 0x224a50, Func Offset: 0xc0
	// Line 1269, Address: 0x224a5c, Func Offset: 0xcc
	// Line 1270, Address: 0x224a64, Func Offset: 0xd4
	// Line 1272, Address: 0x224a6c, Func Offset: 0xdc
	// Line 1273, Address: 0x224a8c, Func Offset: 0xfc
	// Line 1279, Address: 0x224a98, Func Offset: 0x108
	// Line 1283, Address: 0x224aa0, Func Offset: 0x110
	// Line 1284, Address: 0x224abc, Func Offset: 0x12c
	// Line 1283, Address: 0x224ac0, Func Offset: 0x130
	// Line 1284, Address: 0x224ac4, Func Offset: 0x134
	// Line 1283, Address: 0x224ac8, Func Offset: 0x138
	// Line 1284, Address: 0x224acc, Func Offset: 0x13c
	// Line 1283, Address: 0x224ad0, Func Offset: 0x140
	// Line 1284, Address: 0x224adc, Func Offset: 0x14c
	// Line 1286, Address: 0x224aec, Func Offset: 0x15c
	// Line 1254, Address: 0x224af4, Func Offset: 0x164
	// Line 1257, Address: 0x224afc, Func Offset: 0x16c
	// Line 1286, Address: 0x224b04, Func Offset: 0x174
	// Line 1266, Address: 0x224b20, Func Offset: 0x190
	// Line 1286, Address: 0x224b28, Func Offset: 0x198
	// Line 1266, Address: 0x224b3c, Func Offset: 0x1ac
	// Line 1286, Address: 0x224b40, Func Offset: 0x1b0
	// Line 1266, Address: 0x224b44, Func Offset: 0x1b4
	// Line 1286, Address: 0x224b48, Func Offset: 0x1b8
	// Line 1266, Address: 0x224b64, Func Offset: 0x1d4
	// Line 1286, Address: 0x224b70, Func Offset: 0x1e0
	// Line 1266, Address: 0x224b88, Func Offset: 0x1f8
	// Line 1286, Address: 0x224b98, Func Offset: 0x208
	// Line 1266, Address: 0x224b9c, Func Offset: 0x20c
	// Line 1286, Address: 0x224bb0, Func Offset: 0x220
	// Line 1266, Address: 0x224bc4, Func Offset: 0x234
	// Line 1286, Address: 0x224bcc, Func Offset: 0x23c
	// Line 1266, Address: 0x224bdc, Func Offset: 0x24c
	// Line 1286, Address: 0x224bf8, Func Offset: 0x268
	// Line 1266, Address: 0x224c04, Func Offset: 0x274
	// Line 1286, Address: 0x224c08, Func Offset: 0x278
	// Line 1266, Address: 0x224c10, Func Offset: 0x280
	// Line 1286, Address: 0x224c20, Func Offset: 0x290
	// Line 1268, Address: 0x224c28, Func Offset: 0x298
	// Line 1286, Address: 0x224c30, Func Offset: 0x2a0
	// Line 1287, Address: 0x224c34, Func Offset: 0x2a4
	// Func End, Address: 0x224c4c, Func Offset: 0x2bc
}

// HealthRatio__10zNMEFoggerFv
// Start address: 0x224c50
float32 zNMEFogger::HealthRatio()
{
	float32 rat;
	// Line 1229, Address: 0x224c50, Func Offset: 0
	// Line 1230, Address: 0x224c54, Func Offset: 0x4
	// Line 1233, Address: 0x224c5c, Func Offset: 0xc
	// Line 1236, Address: 0x224c60, Func Offset: 0x10
	// Line 1234, Address: 0x224c64, Func Offset: 0x14
	// Line 1236, Address: 0x224c68, Func Offset: 0x18
	// Line 1233, Address: 0x224c6c, Func Offset: 0x1c
	// Line 1234, Address: 0x224c70, Func Offset: 0x20
	// Line 1236, Address: 0x224c80, Func Offset: 0x30
	// Line 1231, Address: 0x224cd8, Func Offset: 0x88
	// Line 1237, Address: 0x224cdc, Func Offset: 0x8c
	// Func End, Address: 0x224ce4, Func Offset: 0x94
}

// VisionTarget__10zNMEFoggerCFP4xEnt9en_defconi
// Start address: 0x224cf0
en_vis zNMEFogger::VisionTarget(xEnt* ent)
{
	zNMEArena* arena;
	// Line 1183, Address: 0x224cf0, Func Offset: 0
	// Line 1185, Address: 0x224cf4, Func Offset: 0x4
	// Line 1189, Address: 0x224d04, Func Offset: 0x14
	// Line 1193, Address: 0x224d0c, Func Offset: 0x1c
	// Line 1194, Address: 0x224d14, Func Offset: 0x24
	// Line 1203, Address: 0x224d3c, Func Offset: 0x4c
	// Line 1206, Address: 0x224d48, Func Offset: 0x58
	// Line 1212, Address: 0x224d54, Func Offset: 0x64
	// Line 1206, Address: 0x224d60, Func Offset: 0x70
	// Line 1212, Address: 0x224d64, Func Offset: 0x74
	// Line 1213, Address: 0x224d80, Func Offset: 0x90
	// Line 1215, Address: 0x224d88, Func Offset: 0x98
	// Line 1220, Address: 0x224d98, Func Offset: 0xa8
	// Line 1222, Address: 0x224dc0, Func Offset: 0xd0
	// Line 1223, Address: 0x224dc8, Func Offset: 0xd8
	// Line 1225, Address: 0x224dd0, Func Offset: 0xe0
	// Line 1186, Address: 0x224dd8, Func Offset: 0xe8
	// Line 1190, Address: 0x224de0, Func Offset: 0xf0
	// Line 1195, Address: 0x224de8, Func Offset: 0xf8
	// Line 1204, Address: 0x224df0, Func Offset: 0x100
	// Line 1207, Address: 0x224df8, Func Offset: 0x108
	// Line 1225, Address: 0x224e00, Func Offset: 0x110
	// Line 1212, Address: 0x224e10, Func Offset: 0x120
	// Line 1225, Address: 0x224e14, Func Offset: 0x124
	// Line 1212, Address: 0x224e24, Func Offset: 0x134
	// Line 1225, Address: 0x224e2c, Func Offset: 0x13c
	// Line 1212, Address: 0x224e3c, Func Offset: 0x14c
	// Line 1225, Address: 0x224e40, Func Offset: 0x150
	// Line 1212, Address: 0x224e44, Func Offset: 0x154
	// Line 1225, Address: 0x224e48, Func Offset: 0x158
	// Line 1212, Address: 0x224e64, Func Offset: 0x174
	// Line 1225, Address: 0x224e6c, Func Offset: 0x17c
	// Line 1212, Address: 0x224e84, Func Offset: 0x194
	// Line 1225, Address: 0x224e94, Func Offset: 0x1a4
	// Line 1212, Address: 0x224e98, Func Offset: 0x1a8
	// Line 1225, Address: 0x224eac, Func Offset: 0x1bc
	// Line 1220, Address: 0x224eb0, Func Offset: 0x1c0
	// Line 1225, Address: 0x224eb4, Func Offset: 0x1c4
	// Line 1220, Address: 0x224ec4, Func Offset: 0x1d4
	// Line 1225, Address: 0x224ec8, Func Offset: 0x1d8
	// Line 1220, Address: 0x224ed4, Func Offset: 0x1e4
	// Line 1225, Address: 0x224edc, Func Offset: 0x1ec
	// Line 1220, Address: 0x224ee4, Func Offset: 0x1f4
	// Line 1225, Address: 0x224ee8, Func Offset: 0x1f8
	// Line 1220, Address: 0x224ef4, Func Offset: 0x204
	// Line 1225, Address: 0x224ef8, Func Offset: 0x208
	// Line 1220, Address: 0x224efc, Func Offset: 0x20c
	// Line 1225, Address: 0x224f00, Func Offset: 0x210
	// Line 1220, Address: 0x224f04, Func Offset: 0x214
	// Line 1225, Address: 0x224f0c, Func Offset: 0x21c
	// Line 1220, Address: 0x224f20, Func Offset: 0x230
	// Line 1225, Address: 0x224f24, Func Offset: 0x234
	// Line 1220, Address: 0x224f40, Func Offset: 0x250
	// Line 1226, Address: 0x224f60, Func Offset: 0x270
	// Func End, Address: 0x224f6c, Func Offset: 0x27c
}

// FogMailDamage__10zNMEFoggerFP13NMEDamageInfo
// Start address: 0x224f70
int32 zNMEFogger::FogMailDamage(NMEDamageInfo* dmgmail)
{
	int32 rc;
	int32 handled;
	xPsyche* psy;
	xGoal* goal;
	// Line 1105, Address: 0x224f70, Func Offset: 0
	// Line 1106, Address: 0x224f88, Func Offset: 0x18
	// Line 1107, Address: 0x224f94, Func Offset: 0x24
	// Line 1112, Address: 0x224f9c, Func Offset: 0x2c
	// Line 1136, Address: 0x224fc8, Func Offset: 0x58
	// Line 1138, Address: 0x224fe4, Func Offset: 0x74
	// Line 1139, Address: 0x225000, Func Offset: 0x90
	// Line 1141, Address: 0x225014, Func Offset: 0xa4
	// Line 1145, Address: 0x22501c, Func Offset: 0xac
	// Line 1147, Address: 0x225020, Func Offset: 0xb0
	// Line 1150, Address: 0x225030, Func Offset: 0xc0
	// Line 1151, Address: 0x225034, Func Offset: 0xc4
	// Line 1150, Address: 0x225038, Func Offset: 0xc8
	// Line 1151, Address: 0x22503c, Func Offset: 0xcc
	// Line 1153, Address: 0x22504c, Func Offset: 0xdc
	// Line 1156, Address: 0x225054, Func Offset: 0xe4
	// Line 1162, Address: 0x225058, Func Offset: 0xe8
	// Line 1108, Address: 0x225064, Func Offset: 0xf4
	// Line 1163, Address: 0x225074, Func Offset: 0x104
	// Func End, Address: 0x22508c, Func Offset: 0x11c
}

// TypeHandleMail__10zNMEFoggerFP6NMEMsg
// Start address: 0x225090
int32 zNMEFogger::TypeHandleMail(NMEMsg* mail)
{
	int32 handled;
	xPsyche* psy;
	int32 gid;
	// Line 1052, Address: 0x225090, Func Offset: 0
	// Line 1055, Address: 0x225094, Func Offset: 0x4
	// Line 1052, Address: 0x225098, Func Offset: 0x8
	// Line 1055, Address: 0x2250b8, Func Offset: 0x28
	// Line 1058, Address: 0x2250ec, Func Offset: 0x5c
	// Line 1059, Address: 0x2250f0, Func Offset: 0x60
	// Line 1060, Address: 0x2250fc, Func Offset: 0x6c
	// Line 1061, Address: 0x225138, Func Offset: 0xa8
	// Line 1063, Address: 0x225144, Func Offset: 0xb4
	// Line 1084, Address: 0x22514c, Func Offset: 0xbc
	// Line 1085, Address: 0x225154, Func Offset: 0xc4
	// Line 1089, Address: 0x22515c, Func Offset: 0xcc
	// Line 1090, Address: 0x225164, Func Offset: 0xd4
	// Line 1093, Address: 0x22516c, Func Offset: 0xdc
	// Line 1101, Address: 0x225248, Func Offset: 0x1b8
	// Line 1068, Address: 0x22525c, Func Offset: 0x1cc
	// Line 1101, Address: 0x225264, Func Offset: 0x1d4
	// Line 1068, Address: 0x22526c, Func Offset: 0x1dc
	// Line 1101, Address: 0x2252a0, Func Offset: 0x210
	// Line 1069, Address: 0x2252a8, Func Offset: 0x218
	// Line 1068, Address: 0x2252ac, Func Offset: 0x21c
	// Line 1101, Address: 0x2252d0, Func Offset: 0x240
	// Line 1069, Address: 0x2252ec, Func Offset: 0x25c
	// Line 1101, Address: 0x2252f4, Func Offset: 0x264
	// Line 1069, Address: 0x225304, Func Offset: 0x274
	// Line 1101, Address: 0x225308, Func Offset: 0x278
	// Line 1076, Address: 0x225314, Func Offset: 0x284
	// Line 1101, Address: 0x22531c, Func Offset: 0x28c
	// Line 1078, Address: 0x225324, Func Offset: 0x294
	// Line 1102, Address: 0x22532c, Func Offset: 0x29c
	// Func End, Address: 0x225348, Func Offset: 0x2b8
}

// CollideReview__10zNMEFoggerFv
// Start address: 0x225350
void zNMEFogger::CollideReview()
{
	// Line 1028, Address: 0x225350, Func Offset: 0
	// Line 1036, Address: 0x225360, Func Offset: 0x10
	// Line 1041, Address: 0x225394, Func Offset: 0x44
	// Line 1043, Address: 0x2253c8, Func Offset: 0x78
	// Line 1041, Address: 0x2253d8, Func Offset: 0x88
	// Line 1043, Address: 0x2253dc, Func Offset: 0x8c
	// Line 1044, Address: 0x2253ec, Func Offset: 0x9c
	// Func End, Address: 0x2253fc, Func Offset: 0xac
}

// Type_AddYourMove__10zNMEFoggerFf
// Start address: 0x225400
void zNMEFogger::Type_AddYourMove(float32 dt)
{
	xVec3 delta;
	// Line 1001, Address: 0x225400, Func Offset: 0
	// Line 1011, Address: 0x225404, Func Offset: 0x4
	// Line 1021, Address: 0x225410, Func Offset: 0x10
	// Line 1024, Address: 0x22542c, Func Offset: 0x2c
	// Line 1013, Address: 0x225440, Func Offset: 0x40
	// Line 1024, Address: 0x225448, Func Offset: 0x48
	// Line 1014, Address: 0x225458, Func Offset: 0x58
	// Line 1024, Address: 0x22545c, Func Offset: 0x5c
	// Line 1015, Address: 0x225498, Func Offset: 0x98
	// Line 1024, Address: 0x2254a0, Func Offset: 0xa0
	// Line 1015, Address: 0x2254c4, Func Offset: 0xc4
	// Line 1024, Address: 0x2254c8, Func Offset: 0xc8
	// Line 1016, Address: 0x2254e0, Func Offset: 0xe0
	// Line 1024, Address: 0x2254e4, Func Offset: 0xe4
	// Line 1016, Address: 0x2254fc, Func Offset: 0xfc
	// Line 1024, Address: 0x225500, Func Offset: 0x100
	// Line 1016, Address: 0x225510, Func Offset: 0x110
	// Line 1019, Address: 0x225514, Func Offset: 0x114
	// Line 1025, Address: 0x22551c, Func Offset: 0x11c
	// Func End, Address: 0x225528, Func Offset: 0x128
}

// Process__10zNMEFoggerFf
// Start address: 0x225530
void zNMEFogger::Process(float32 dt)
{
	int32 gid;
	// Line 958, Address: 0x225530, Func Offset: 0
	// Line 960, Address: 0x225544, Func Offset: 0x14
	// Line 961, Address: 0x225550, Func Offset: 0x20
	// Line 964, Address: 0x225560, Func Offset: 0x30
	// Line 965, Address: 0x225570, Func Offset: 0x40
	// Line 966, Address: 0x225584, Func Offset: 0x54
	// Line 968, Address: 0x22558c, Func Offset: 0x5c
	// Line 977, Address: 0x225594, Func Offset: 0x64
	// Line 979, Address: 0x225628, Func Offset: 0xf8
	// Line 982, Address: 0x225640, Func Offset: 0x110
	// Line 983, Address: 0x225658, Func Offset: 0x128
	// Func End, Address: 0x225668, Func Offset: 0x138
}

// BUpdate__10zNMEFoggerFP5xVec3
// Start address: 0x225670
void zNMEFogger::BUpdate(xVec3* pos)
{
	// Line 952, Address: 0x225670, Func Offset: 0
	// Line 953, Address: 0x225674, Func Offset: 0x4
	// Line 952, Address: 0x225678, Func Offset: 0x8
	// Line 953, Address: 0x225680, Func Offset: 0x10
	// Line 954, Address: 0x225858, Func Offset: 0x1e8
	// Line 953, Address: 0x225868, Func Offset: 0x1f8
	// Line 954, Address: 0x225870, Func Offset: 0x200
	// Line 953, Address: 0x2258b0, Func Offset: 0x240
	// Line 954, Address: 0x2258b4, Func Offset: 0x244
	// Line 953, Address: 0x2258b8, Func Offset: 0x248
	// Line 954, Address: 0x2258bc, Func Offset: 0x24c
	// Line 953, Address: 0x2258d8, Func Offset: 0x268
	// Line 954, Address: 0x2258dc, Func Offset: 0x26c
	// Line 953, Address: 0x2258e4, Func Offset: 0x274
	// Line 954, Address: 0x2258e8, Func Offset: 0x278
	// Line 953, Address: 0x225914, Func Offset: 0x2a4
	// Line 954, Address: 0x225918, Func Offset: 0x2a8
	// Line 953, Address: 0x225948, Func Offset: 0x2d8
	// Line 954, Address: 0x225950, Func Offset: 0x2e0
	// Line 953, Address: 0x22597c, Func Offset: 0x30c
	// Line 954, Address: 0x225980, Func Offset: 0x310
	// Line 953, Address: 0x2259b0, Func Offset: 0x340
	// Line 954, Address: 0x2259b8, Func Offset: 0x348
	// Line 953, Address: 0x2259e0, Func Offset: 0x370
	// Line 954, Address: 0x2259e4, Func Offset: 0x374
	// Line 953, Address: 0x2259e8, Func Offset: 0x378
	// Line 954, Address: 0x2259ec, Func Offset: 0x37c
	// Line 953, Address: 0x2259f4, Func Offset: 0x384
	// Line 954, Address: 0x2259fc, Func Offset: 0x38c
	// Line 953, Address: 0x225a4c, Func Offset: 0x3dc
	// Line 954, Address: 0x225a54, Func Offset: 0x3e4
	// Line 953, Address: 0x225a78, Func Offset: 0x408
	// Line 954, Address: 0x225a7c, Func Offset: 0x40c
	// Line 953, Address: 0x225a80, Func Offset: 0x410
	// Line 954, Address: 0x225a84, Func Offset: 0x414
	// Line 953, Address: 0x225aa4, Func Offset: 0x434
	// Line 954, Address: 0x225aa8, Func Offset: 0x438
	// Line 953, Address: 0x225ae4, Func Offset: 0x474
	// Line 954, Address: 0x225ae8, Func Offset: 0x478
	// Line 953, Address: 0x225af0, Func Offset: 0x480
	// Line 954, Address: 0x225af4, Func Offset: 0x484
	// Line 953, Address: 0x225b2c, Func Offset: 0x4bc
	// Line 954, Address: 0x225b30, Func Offset: 0x4c0
	// Line 953, Address: 0x225b34, Func Offset: 0x4c4
	// Line 954, Address: 0x225b38, Func Offset: 0x4c8
	// Line 953, Address: 0x225b40, Func Offset: 0x4d0
	// Line 954, Address: 0x225b4c, Func Offset: 0x4dc
	// Line 953, Address: 0x225b64, Func Offset: 0x4f4
	// Line 954, Address: 0x225b68, Func Offset: 0x4f8
	// Line 953, Address: 0x225bac, Func Offset: 0x53c
	// Line 954, Address: 0x225bb4, Func Offset: 0x544
	// Line 955, Address: 0x225bc4, Func Offset: 0x554
	// Func End, Address: 0x225bd0, Func Offset: 0x560
}

// GoalPick__10zNMEFoggerFP5xGoalRiR11en_trantype
// Start address: 0x225bd0
int32 GoalPick(int32& gid_would)
{
	int32 altered;
	// Line 904, Address: 0x225bd0, Func Offset: 0
	// Line 907, Address: 0x225c08, Func Offset: 0x38
	// Line 909, Address: 0x225c10, Func Offset: 0x40
	// Line 912, Address: 0x225c18, Func Offset: 0x48
	// Line 914, Address: 0x225c20, Func Offset: 0x50
	// Line 917, Address: 0x225c28, Func Offset: 0x58
	// Line 921, Address: 0x225c30, Func Offset: 0x60
	// Line 924, Address: 0x225c38, Func Offset: 0x68
	// Line 926, Address: 0x225c40, Func Offset: 0x70
	// Line 929, Address: 0x225c48, Func Offset: 0x78
	// Line 931, Address: 0x225c50, Func Offset: 0x80
	// Line 934, Address: 0x225c58, Func Offset: 0x88
	// Line 936, Address: 0x225c60, Func Offset: 0x90
	// Line 939, Address: 0x225c68, Func Offset: 0x98
	// Line 941, Address: 0x225c70, Func Offset: 0xa0
	// Line 944, Address: 0x225c78, Func Offset: 0xa8
	// Line 949, Address: 0x225c7c, Func Offset: 0xac
	// Func End, Address: 0x225c84, Func Offset: 0xb4
}

// Reset__10zNMEFoggerFv
// Start address: 0x225c90
void zNMEFogger::Reset()
{
	xPsyche* psy;
	zNMEGoalAfterlife* goal;
	// Line 868, Address: 0x225c90, Func Offset: 0
	// Line 869, Address: 0x225ca0, Func Offset: 0x10
	// Line 871, Address: 0x225f34, Func Offset: 0x2a4
	// Line 869, Address: 0x225f38, Func Offset: 0x2a8
	// Line 871, Address: 0x225f3c, Func Offset: 0x2ac
	// Line 869, Address: 0x225f40, Func Offset: 0x2b0
	// Line 871, Address: 0x225f48, Func Offset: 0x2b8
	// Line 878, Address: 0x225f64, Func Offset: 0x2d4
	// Line 881, Address: 0x225f78, Func Offset: 0x2e8
	// Line 891, Address: 0x225f84, Func Offset: 0x2f4
	// Line 895, Address: 0x225f94, Func Offset: 0x304
	// Line 897, Address: 0x225f9c, Func Offset: 0x30c
	// Line 879, Address: 0x225fa4, Func Offset: 0x314
	// Line 897, Address: 0x225fac, Func Offset: 0x31c
	// Line 880, Address: 0x225fb4, Func Offset: 0x324
	// Line 884, Address: 0x225fbc, Func Offset: 0x32c
	// Line 897, Address: 0x225fc0, Func Offset: 0x330
	// Line 887, Address: 0x225fc8, Func Offset: 0x338
	// Line 886, Address: 0x225fcc, Func Offset: 0x33c
	// Line 887, Address: 0x225fd0, Func Offset: 0x340
	// Line 884, Address: 0x225fd4, Func Offset: 0x344
	// Line 887, Address: 0x225fd8, Func Offset: 0x348
	// Line 897, Address: 0x225fdc, Func Offset: 0x34c
	// Line 888, Address: 0x225fe4, Func Offset: 0x354
	// Line 889, Address: 0x225fe8, Func Offset: 0x358
	// Line 898, Address: 0x225ff0, Func Offset: 0x360
	// Func End, Address: 0x226004, Func Offset: 0x374
}

// CreateAnimTable__10zNMEFoggerFP10xAnimTable
// Start address: 0x226010
xAnimTable* zNMEFogger::CreateAnimTable(xAnimTable* table)
{
	int32 ourAnims[26];
	// Line 684, Address: 0x226010, Func Offset: 0
	// Line 690, Address: 0x226020, Func Offset: 0x10
	// Line 698, Address: 0x226028, Func Offset: 0x18
	// Line 702, Address: 0x226070, Func Offset: 0x60
	// Line 707, Address: 0x2260b8, Func Offset: 0xa8
	// Line 711, Address: 0x226104, Func Offset: 0xf4
	// Line 715, Address: 0x226150, Func Offset: 0x140
	// Line 721, Address: 0x22619c, Func Offset: 0x18c
	// Line 725, Address: 0x2261e4, Func Offset: 0x1d4
	// Line 730, Address: 0x22622c, Func Offset: 0x21c
	// Line 735, Address: 0x226274, Func Offset: 0x264
	// Line 740, Address: 0x2262bc, Func Offset: 0x2ac
	// Line 744, Address: 0x226308, Func Offset: 0x2f8
	// Line 749, Address: 0x226354, Func Offset: 0x344
	// Line 753, Address: 0x22639c, Func Offset: 0x38c
	// Line 759, Address: 0x2263e4, Func Offset: 0x3d4
	// Line 763, Address: 0x22642c, Func Offset: 0x41c
	// Line 767, Address: 0x226474, Func Offset: 0x464
	// Line 773, Address: 0x2264bc, Func Offset: 0x4ac
	// Line 777, Address: 0x226504, Func Offset: 0x4f4
	// Line 782, Address: 0x22654c, Func Offset: 0x53c
	// Line 786, Address: 0x226594, Func Offset: 0x584
	// Line 792, Address: 0x2265dc, Func Offset: 0x5cc
	// Line 796, Address: 0x226624, Func Offset: 0x614
	// Line 801, Address: 0x22666c, Func Offset: 0x65c
	// Line 805, Address: 0x2266b4, Func Offset: 0x6a4
	// Line 809, Address: 0x2266fc, Func Offset: 0x6ec
	// Line 817, Address: 0x226744, Func Offset: 0x734
	// Line 837, Address: 0x226774, Func Offset: 0x764
	// Line 843, Address: 0x226798, Func Offset: 0x788
	// Line 848, Address: 0x2267e0, Func Offset: 0x7d0
	// Line 851, Address: 0x226828, Func Offset: 0x818
	// Line 855, Address: 0x226870, Func Offset: 0x860
	// Line 859, Address: 0x2268b8, Func Offset: 0x8a8
	// Line 862, Address: 0x226900, Func Offset: 0x8f0
	// Line 864, Address: 0x226948, Func Offset: 0x938
	// Line 690, Address: 0x226950, Func Offset: 0x940
	// Line 864, Address: 0x226954, Func Offset: 0x944
	// Line 865, Address: 0x226964, Func Offset: 0x954
	// Func End, Address: 0x226974, Func Offset: 0x964
}

// AnimPick__10zNMEFoggerFi11en_npcgspotP5xGoal
// Start address: 0x226980
uint32 zNMEFogger::AnimPick(int32 gid, en_npcgspot gspot)
{
	en_stananim idx;
	// Line 567, Address: 0x226980, Func Offset: 0
	// Line 571, Address: 0x226a50, Func Offset: 0xd0
	// Line 574, Address: 0x226a58, Func Offset: 0xd8
	// Line 575, Address: 0x226a64, Func Offset: 0xe4
	// Line 578, Address: 0x226a6c, Func Offset: 0xec
	// Line 583, Address: 0x226a74, Func Offset: 0xf4
	// Line 585, Address: 0x226a7c, Func Offset: 0xfc
	// Line 586, Address: 0x226a8c, Func Offset: 0x10c
	// Line 589, Address: 0x226a94, Func Offset: 0x114
	// Line 591, Address: 0x226a9c, Func Offset: 0x11c
	// Line 592, Address: 0x226aa8, Func Offset: 0x128
	// Line 595, Address: 0x226ab0, Func Offset: 0x130
	// Line 600, Address: 0x226ab8, Func Offset: 0x138
	// Line 601, Address: 0x226abc, Func Offset: 0x13c
	// Line 603, Address: 0x226ac4, Func Offset: 0x144
	// Line 605, Address: 0x226acc, Func Offset: 0x14c
	// Line 606, Address: 0x226ad8, Func Offset: 0x158
	// Line 609, Address: 0x226ae0, Func Offset: 0x160
	// Line 612, Address: 0x226ae8, Func Offset: 0x168
	// Line 618, Address: 0x226af0, Func Offset: 0x170
	// Line 621, Address: 0x226af8, Func Offset: 0x178
	// Line 624, Address: 0x226b00, Func Offset: 0x180
	// Line 626, Address: 0x226b08, Func Offset: 0x188
	// Line 627, Address: 0x226b18, Func Offset: 0x198
	// Line 628, Address: 0x226b28, Func Offset: 0x1a8
	// Line 632, Address: 0x226b4c, Func Offset: 0x1cc
	// Line 636, Address: 0x226b54, Func Offset: 0x1d4
	// Line 645, Address: 0x226b5c, Func Offset: 0x1dc
	// Line 648, Address: 0x226b64, Func Offset: 0x1e4
	// Line 650, Address: 0x226b6c, Func Offset: 0x1ec
	// Line 652, Address: 0x226b78, Func Offset: 0x1f8
	// Line 654, Address: 0x226b84, Func Offset: 0x204
	// Line 655, Address: 0x226b90, Func Offset: 0x210
	// Line 658, Address: 0x226b98, Func Offset: 0x218
	// Line 661, Address: 0x226ba0, Func Offset: 0x220
	// Line 663, Address: 0x226ba8, Func Offset: 0x228
	// Line 665, Address: 0x226bb4, Func Offset: 0x234
	// Line 667, Address: 0x226bc0, Func Offset: 0x240
	// Line 668, Address: 0x226bcc, Func Offset: 0x24c
	// Line 680, Address: 0x226bd4, Func Offset: 0x254
	// Line 604, Address: 0x226bec, Func Offset: 0x26c
	// Line 680, Address: 0x226bf4, Func Offset: 0x274
	// Line 627, Address: 0x226c0c, Func Offset: 0x28c
	// Line 640, Address: 0x226c14, Func Offset: 0x294
	// Line 649, Address: 0x226c1c, Func Offset: 0x29c
	// Line 651, Address: 0x226c24, Func Offset: 0x2a4
	// Line 653, Address: 0x226c2c, Func Offset: 0x2ac
	// Line 662, Address: 0x226c34, Func Offset: 0x2b4
	// Line 664, Address: 0x226c3c, Func Offset: 0x2bc
	// Line 666, Address: 0x226c44, Func Offset: 0x2c4
	// Line 681, Address: 0x226c4c, Func Offset: 0x2cc
	// Func End, Address: 0x226c54, Func Offset: 0x2d4
}

// SelfSetup__10zNMEFoggerFv
// Start address: 0x226c60
void zNMEFogger::SelfSetup()
{
	xBehaveMgr* bmgr;
	xPsyche* psy;
	xGoal* goal;
	xGoal* g;
	// Line 522, Address: 0x226c60, Func Offset: 0
	// Line 524, Address: 0x226c6c, Func Offset: 0xc
	// Line 525, Address: 0x226c74, Func Offset: 0x14
	// Line 528, Address: 0x226c88, Func Offset: 0x28
	// Line 533, Address: 0x226c8c, Func Offset: 0x2c
	// Line 536, Address: 0x226c94, Func Offset: 0x34
	// Line 537, Address: 0x226ce4, Func Offset: 0x84
	// Line 536, Address: 0x226ce8, Func Offset: 0x88
	// Line 537, Address: 0x226cec, Func Offset: 0x8c
	// Line 539, Address: 0x226d3c, Func Offset: 0xdc
	// Line 537, Address: 0x226d40, Func Offset: 0xe0
	// Line 539, Address: 0x226d44, Func Offset: 0xe4
	// Line 537, Address: 0x226d48, Func Offset: 0xe8
	// Line 539, Address: 0x226d4c, Func Offset: 0xec
	// Line 537, Address: 0x226d50, Func Offset: 0xf0
	// Line 539, Address: 0x226d54, Func Offset: 0xf4
	// Line 540, Address: 0x226dac, Func Offset: 0x14c
	// Line 541, Address: 0x226dc0, Func Offset: 0x160
	// Line 542, Address: 0x226de8, Func Offset: 0x188
	// Line 543, Address: 0x226e10, Func Offset: 0x1b0
	// Line 545, Address: 0x226e24, Func Offset: 0x1c4
	// Line 546, Address: 0x226e38, Func Offset: 0x1d8
	// Line 548, Address: 0x226e3c, Func Offset: 0x1dc
	// Line 546, Address: 0x226e40, Func Offset: 0x1e0
	// Line 548, Address: 0x226e44, Func Offset: 0x1e4
	// Line 546, Address: 0x226e48, Func Offset: 0x1e8
	// Line 548, Address: 0x226e4c, Func Offset: 0x1ec
	// Line 546, Address: 0x226e50, Func Offset: 0x1f0
	// Line 548, Address: 0x226e54, Func Offset: 0x1f4
	// Line 551, Address: 0x226e5c, Func Offset: 0x1fc
	// Line 552, Address: 0x226e70, Func Offset: 0x210
	// Line 553, Address: 0x226e84, Func Offset: 0x224
	// Line 555, Address: 0x226e98, Func Offset: 0x238
	// Line 558, Address: 0x226ea0, Func Offset: 0x240
	// Line 561, Address: 0x226eac, Func Offset: 0x24c
	// Func End, Address: 0x226ebc, Func Offset: 0x25c
}

// Setup__10zNMEFoggerFv
// Start address: 0x226ec0
void zNMEFogger::Setup()
{
	// Line 509, Address: 0x226ec0, Func Offset: 0
	// Line 510, Address: 0x226ec4, Func Offset: 0x4
	// Line 509, Address: 0x226ec8, Func Offset: 0x8
	// Line 510, Address: 0x226ecc, Func Offset: 0xc
	// Line 509, Address: 0x226ed0, Func Offset: 0x10
	// Line 510, Address: 0x226ed4, Func Offset: 0x14
	// Line 512, Address: 0x226f24, Func Offset: 0x64
	// Line 514, Address: 0x226f34, Func Offset: 0x74
	// Line 515, Address: 0x226f40, Func Offset: 0x80
	// Line 519, Address: 0x226f5c, Func Offset: 0x9c
	// Func End, Address: 0x226f6c, Func Offset: 0xac
}

// Init__10zNMEFoggerFP9xEntAsset
// Start address: 0x226f70
void zNMEFogger::Init(xEntAsset* entass)
{
	// Line 498, Address: 0x226f70, Func Offset: 0
	// Line 499, Address: 0x226f88, Func Offset: 0x18
	// Line 502, Address: 0x227020, Func Offset: 0xb0
	// Line 499, Address: 0x227028, Func Offset: 0xb8
	// Line 500, Address: 0x227148, Func Offset: 0x1d8
	// Line 502, Address: 0x227154, Func Offset: 0x1e4
	// Line 503, Address: 0x227164, Func Offset: 0x1f4
	// Line 505, Address: 0x22717c, Func Offset: 0x20c
	// Line 499, Address: 0x227188, Func Offset: 0x218
	// Line 505, Address: 0x22718c, Func Offset: 0x21c
	// Line 499, Address: 0x227194, Func Offset: 0x224
	// Line 505, Address: 0x2271a0, Func Offset: 0x230
	// Line 502, Address: 0x2271b0, Func Offset: 0x240
	// Line 505, Address: 0x2271b4, Func Offset: 0x244
	// Line 503, Address: 0x2271c4, Func Offset: 0x254
	// Line 505, Address: 0x2271c8, Func Offset: 0x258
	// Line 506, Address: 0x2271d8, Func Offset: 0x268
	// Func End, Address: 0x2271ec, Func Offset: 0x27c
}

// ColPenFlags__10zNMEFoggerCFv
// Start address: 0x2271f0
uint8 zNMEFogger::ColPenFlags()
{
	uint8 flags;
	// Line 488, Address: 0x2271f0, Func Offset: 0
	// Line 490, Address: 0x2271f8, Func Offset: 0x8
	// Line 491, Address: 0x227204, Func Offset: 0x14
	// Line 492, Address: 0x22720c, Func Offset: 0x1c
	// Line 493, Address: 0x227218, Func Offset: 0x28
	// Line 495, Address: 0x227220, Func Offset: 0x30
	// Func End, Address: 0x227228, Func Offset: 0x38
}

// ColChkFlags__10zNMEFoggerCFv
// Start address: 0x227230
uint8 zNMEFogger::ColChkFlags()
{
	uint8 flags;
	// Line 477, Address: 0x227230, Func Offset: 0
	// Line 479, Address: 0x227238, Func Offset: 0x8
	// Line 480, Address: 0x227244, Func Offset: 0x14
	// Line 481, Address: 0x22724c, Func Offset: 0x1c
	// Line 482, Address: 0x227258, Func Offset: 0x28
	// Line 484, Address: 0x227260, Func Offset: 0x30
	// Func End, Address: 0x227268, Func Offset: 0x38
}

// DfltVulnFlags__10zNMEFoggerFv
// Start address: 0x227270
int32 zNMEFogger::DfltVulnFlags()
{
	// Line 473, Address: 0x227270, Func Offset: 0
	// Func End, Address: 0x227278, Func Offset: 0x8
}

// CreateConfig__10zNMEFoggerFPCc
// Start address: 0x227280
void zNMEFogger::CreateConfig()
{
	en_nmevar vidx;
	// Line 388, Address: 0x227280, Func Offset: 0
	// Line 389, Address: 0x227284, Func Offset: 0x4
	// Line 388, Address: 0x227288, Func Offset: 0x8
	// Line 389, Address: 0x22728c, Func Offset: 0xc
	// Line 388, Address: 0x227290, Func Offset: 0x10
	// Line 389, Address: 0x227294, Func Offset: 0x14
	// Line 391, Address: 0x2272b4, Func Offset: 0x34
	// Line 392, Address: 0x2272bc, Func Offset: 0x3c
	// Line 403, Address: 0x2272d4, Func Offset: 0x54
	// Func End, Address: 0x2272e4, Func Offset: 0x64
}

