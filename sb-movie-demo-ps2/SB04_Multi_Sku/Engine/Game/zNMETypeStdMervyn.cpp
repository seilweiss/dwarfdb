



int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
int32 Enter();
int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
int32 Enter();
void PickTarget(zNMEMervyn* npc, xVec3* tgt, xVec3* src);
int32 BombsAway(zNMEMervyn* npc);
int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
int32 Enter();
int32 RepelBowlBall(float32 dt);
int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
int32 Enter();
int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
int32 ChkExitCases(zNMEMervyn* npc, int32& nextgoal, en_trantype& trantype);
int32 Enter();
int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
int32 Exit();
int32 Enter();
void Notice(xGoal* goal);
void UpdateGunnerStatus();
int32 SafeToTaunt();
int32 MervMailDamage(NMEDamageInfo* dmgmail);
int32 TypeHandleMail(NMEMsg* mail);
int32 ChkBowlingBall(xVec3* dir_NtoBall, float32* dst_NtoBall);
void BladesUpdate(float32 dt);
float32 HealthRatio();
en_vis VisionTarget(xEnt* ent);
void RenderExtra();
void HelioDustUpdate(float32 dt);
void NewTime(float32 dt);
void Process(float32 dt);
void DieTheGoodDeath();
void BUpdate();
void Reset();
int32 GoalPick(int32& gid_would, en_trantype& typ_tran);
xAnimTable* CreateAnimTable(xAnimTable* table);
uint32 AnimPick(int32 gid, en_npcgspot gspot, xGoal* rawgoal);
void MervMainBrain();
void SelfDestroy();
void SelfSetup();
void Setup();
void Init(xEntAsset* asset);
int32 DfltVulnFlags();
void CreateConfig();

// Process__16zNMEGoalMervMoveFP11en_trantypefPv
// Start address: 0x21b1b0
int32 zNMEGoalMervMove::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	zNMEMervyn* npc;
	// Line 2400, Address: 0x21b1b0, Func Offset: 0
	// Line 2401, Address: 0x21b1e0, Func Offset: 0x30
	// Line 2404, Address: 0x21b1e4, Func Offset: 0x34
	// Line 2401, Address: 0x21b1e8, Func Offset: 0x38
	// Line 2404, Address: 0x21b1ec, Func Offset: 0x3c
	// Line 2405, Address: 0x21b1f8, Func Offset: 0x48
	// Line 2409, Address: 0x21b1fc, Func Offset: 0x4c
	// Line 2411, Address: 0x21b20c, Func Offset: 0x5c
	// Line 2407, Address: 0x21b27c, Func Offset: 0xcc
	// Line 2411, Address: 0x21b284, Func Offset: 0xd4
	// Line 2407, Address: 0x21b294, Func Offset: 0xe4
	// Line 2411, Address: 0x21b298, Func Offset: 0xe8
	// Line 2407, Address: 0x21b2a8, Func Offset: 0xf8
	// Line 2411, Address: 0x21b2b0, Func Offset: 0x100
	// Line 2407, Address: 0x21b2b4, Func Offset: 0x104
	// Line 2411, Address: 0x21b2bc, Func Offset: 0x10c
	// Line 2407, Address: 0x21b2c0, Func Offset: 0x110
	// Line 2411, Address: 0x21b2c8, Func Offset: 0x118
	// Line 2407, Address: 0x21b2cc, Func Offset: 0x11c
	// Line 2411, Address: 0x21b2d0, Func Offset: 0x120
	// Line 2412, Address: 0x21b2e0, Func Offset: 0x130
	// Func End, Address: 0x21b308, Func Offset: 0x158
}

// Enter__16zNMEGoalMervMoveFfPv
// Start address: 0x21b310
int32 zNMEGoalMervMove::Enter()
{
	zNMEMervyn* npc;
	// Line 2392, Address: 0x21b310, Func Offset: 0
	// Line 2394, Address: 0x21b314, Func Offset: 0x4
	// Line 2392, Address: 0x21b318, Func Offset: 0x8
	// Line 2394, Address: 0x21b31c, Func Offset: 0xc
	// Line 2392, Address: 0x21b320, Func Offset: 0x10
	// Line 2394, Address: 0x21b324, Func Offset: 0x14
	// Line 2392, Address: 0x21b328, Func Offset: 0x18
	// Line 2393, Address: 0x21b330, Func Offset: 0x20
	// Line 2394, Address: 0x21b338, Func Offset: 0x28
	// Line 2396, Address: 0x21b394, Func Offset: 0x84
	// Line 2394, Address: 0x21b3a0, Func Offset: 0x90
	// Line 2395, Address: 0x21b3bc, Func Offset: 0xac
	// Line 2396, Address: 0x21b3c0, Func Offset: 0xb0
	// Line 2397, Address: 0x21b458, Func Offset: 0x148
	// Func End, Address: 0x21b470, Func Offset: 0x160
}

// Process__17zNMEGoalMervWoundFP11en_trantypefPv
// Start address: 0x21b470
int32 zNMEGoalMervWound::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	zNMEMervyn* npc;
	// Line 2341, Address: 0x21b470, Func Offset: 0
	// Line 2344, Address: 0x21b474, Func Offset: 0x4
	// Line 2341, Address: 0x21b478, Func Offset: 0x8
	// Line 2344, Address: 0x21b47c, Func Offset: 0xc
	// Line 2341, Address: 0x21b480, Func Offset: 0x10
	// Line 2342, Address: 0x21b4a4, Func Offset: 0x34
	// Line 2344, Address: 0x21b4b0, Func Offset: 0x40
	// Line 2346, Address: 0x21b4d8, Func Offset: 0x68
	// Line 2348, Address: 0x21b4e4, Func Offset: 0x74
	// Line 2349, Address: 0x21b50c, Func Offset: 0x9c
	// Line 2350, Address: 0x21b518, Func Offset: 0xa8
	// Line 2351, Address: 0x21b51c, Func Offset: 0xac
	// Line 2350, Address: 0x21b520, Func Offset: 0xb0
	// Line 2351, Address: 0x21b524, Func Offset: 0xb4
	// Line 2356, Address: 0x21b52c, Func Offset: 0xbc
	// Line 2355, Address: 0x21b530, Func Offset: 0xc0
	// Line 2356, Address: 0x21b534, Func Offset: 0xc4
	// Line 2362, Address: 0x21b540, Func Offset: 0xd0
	// Line 2365, Address: 0x21b568, Func Offset: 0xf8
	// Line 2367, Address: 0x21b57c, Func Offset: 0x10c
	// Line 2368, Address: 0x21b590, Func Offset: 0x120
	// Line 2370, Address: 0x21b5e0, Func Offset: 0x170
	// Line 2346, Address: 0x21b658, Func Offset: 0x1e8
	// Line 2370, Address: 0x21b660, Func Offset: 0x1f0
	// Line 2366, Address: 0x21b664, Func Offset: 0x1f4
	// Line 2370, Address: 0x21b668, Func Offset: 0x1f8
	// Line 2366, Address: 0x21b66c, Func Offset: 0x1fc
	// Line 2370, Address: 0x21b670, Func Offset: 0x200
	// Line 2366, Address: 0x21b684, Func Offset: 0x214
	// Line 2370, Address: 0x21b688, Func Offset: 0x218
	// Line 2366, Address: 0x21b690, Func Offset: 0x220
	// Line 2370, Address: 0x21b694, Func Offset: 0x224
	// Line 2366, Address: 0x21b6a4, Func Offset: 0x234
	// Line 2371, Address: 0x21b6b4, Func Offset: 0x244
	// Func End, Address: 0x21b6d8, Func Offset: 0x268
}

// Enter__17zNMEGoalMervWoundFfPv
// Start address: 0x21b6e0
int32 zNMEGoalMervWound::Enter()
{
	// Line 2334, Address: 0x21b6e0, Func Offset: 0
	// Line 2336, Address: 0x21b6e4, Func Offset: 0x4
	// Line 2334, Address: 0x21b6e8, Func Offset: 0x8
	// Line 2337, Address: 0x21b6ec, Func Offset: 0xc
	// Line 2334, Address: 0x21b6f0, Func Offset: 0x10
	// Line 2336, Address: 0x21b6fc, Func Offset: 0x1c
	// Line 2337, Address: 0x21b700, Func Offset: 0x20
	// Line 2338, Address: 0x21b784, Func Offset: 0xa4
	// Func End, Address: 0x21b79c, Func Offset: 0xbc
}

// PickTarget__16zNMEGoalMervBombFP10zNMEMervynP5xVec3PC5xVec3
// Start address: 0x21b7a0
void zNMEGoalMervBomb::PickTarget(zNMEMervyn* npc, xVec3* tgt, xVec3* src)
{
	xVec3 dir_tgt;
	// Line 2292, Address: 0x21b7a0, Func Offset: 0
	// Line 2296, Address: 0x21b7a4, Func Offset: 0x4
	// Line 2292, Address: 0x21b7a8, Func Offset: 0x8
	// Line 2296, Address: 0x21b7ac, Func Offset: 0xc
	// Line 2292, Address: 0x21b7b0, Func Offset: 0x10
	// Line 2296, Address: 0x21b7c8, Func Offset: 0x28
	// Line 2298, Address: 0x21b854, Func Offset: 0xb4
	// Line 2299, Address: 0x21b88c, Func Offset: 0xec
	// Line 2304, Address: 0x21b898, Func Offset: 0xf8
	// Line 2306, Address: 0x21b8a4, Func Offset: 0x104
	// Line 2304, Address: 0x21b8a8, Func Offset: 0x108
	// Line 2306, Address: 0x21b8b0, Func Offset: 0x110
	// Line 2304, Address: 0x21b8b4, Func Offset: 0x114
	// Line 2299, Address: 0x21b8bc, Func Offset: 0x11c
	// Line 2304, Address: 0x21b8c4, Func Offset: 0x124
	// Line 2306, Address: 0x21b8d0, Func Offset: 0x130
	// Line 2305, Address: 0x21b8d4, Func Offset: 0x134
	// Line 2304, Address: 0x21b8d8, Func Offset: 0x138
	// Line 2305, Address: 0x21b924, Func Offset: 0x184
	// Line 2304, Address: 0x21b928, Func Offset: 0x188
	// Line 2305, Address: 0x21b930, Func Offset: 0x190
	// Line 2306, Address: 0x21b948, Func Offset: 0x1a8
	// Line 2316, Address: 0x21b954, Func Offset: 0x1b4
	// Line 2313, Address: 0x21b958, Func Offset: 0x1b8
	// Line 2317, Address: 0x21b964, Func Offset: 0x1c4
	// Line 2316, Address: 0x21b968, Func Offset: 0x1c8
	// Line 2313, Address: 0x21b96c, Func Offset: 0x1cc
	// Line 2317, Address: 0x21b97c, Func Offset: 0x1dc
	// Line 2313, Address: 0x21b98c, Func Offset: 0x1ec
	// Line 2317, Address: 0x21b994, Func Offset: 0x1f4
	// Line 2325, Address: 0x21b9b4, Func Offset: 0x214
	// Line 2307, Address: 0x21b9c0, Func Offset: 0x220
	// Line 2325, Address: 0x21b9cc, Func Offset: 0x22c
	// Line 2307, Address: 0x21b9e8, Func Offset: 0x248
	// Line 2325, Address: 0x21b9f0, Func Offset: 0x250
	// Line 2307, Address: 0x21b9f4, Func Offset: 0x254
	// Line 2325, Address: 0x21b9f8, Func Offset: 0x258
	// Line 2307, Address: 0x21b9fc, Func Offset: 0x25c
	// Line 2325, Address: 0x21ba00, Func Offset: 0x260
	// Line 2307, Address: 0x21ba20, Func Offset: 0x280
	// Line 2325, Address: 0x21ba28, Func Offset: 0x288
	// Line 2308, Address: 0x21ba50, Func Offset: 0x2b0
	// Line 2309, Address: 0x21ba54, Func Offset: 0x2b4
	// Line 2325, Address: 0x21ba5c, Func Offset: 0x2bc
	// Line 2320, Address: 0x21ba80, Func Offset: 0x2e0
	// Line 2325, Address: 0x21ba84, Func Offset: 0x2e4
	// Line 2326, Address: 0x21ba88, Func Offset: 0x2e8
	// Func End, Address: 0x21baa0, Func Offset: 0x300
}

// BombsAway__16zNMEGoalMervBombFP10zNMEMervyn
// Start address: 0x21baa0
int32 zNMEGoalMervBomb::BombsAway(zNMEMervyn* npc)
{
	zNMEHazard* haz;
	int32 rc;
	xVec3 pos_src;
	xVec3 pos_tgt;
	xVec3 delta;
	// Line 2239, Address: 0x21baa0, Func Offset: 0
	// Line 2240, Address: 0x21babc, Func Offset: 0x1c
	// Line 2243, Address: 0x21bac8, Func Offset: 0x28
	// Line 2246, Address: 0x21badc, Func Offset: 0x3c
	// Line 2243, Address: 0x21bae8, Func Offset: 0x48
	// Line 2246, Address: 0x21baec, Func Offset: 0x4c
	// Line 2247, Address: 0x21bb3c, Func Offset: 0x9c
	// Line 2248, Address: 0x21bb44, Func Offset: 0xa4
	// Line 2249, Address: 0x21bbb8, Func Offset: 0x118
	// Line 2252, Address: 0x21bbc4, Func Offset: 0x124
	// Line 2256, Address: 0x21bbd4, Func Offset: 0x134
	// Line 2259, Address: 0x21bcdc, Func Offset: 0x23c
	// Line 2256, Address: 0x21bce0, Func Offset: 0x240
	// Line 2259, Address: 0x21bce4, Func Offset: 0x244
	// Line 2256, Address: 0x21bcf0, Func Offset: 0x250
	// Line 2259, Address: 0x21bd24, Func Offset: 0x284
	// Line 2260, Address: 0x21bd2c, Func Offset: 0x28c
	// Line 2266, Address: 0x21bd30, Func Offset: 0x290
	// Line 2260, Address: 0x21bd34, Func Offset: 0x294
	// Line 2264, Address: 0x21bd38, Func Offset: 0x298
	// Line 2260, Address: 0x21bd3c, Func Offset: 0x29c
	// Line 2264, Address: 0x21bd40, Func Offset: 0x2a0
	// Line 2266, Address: 0x21bd44, Func Offset: 0x2a4
	// Line 2264, Address: 0x21bd48, Func Offset: 0x2a8
	// Line 2260, Address: 0x21bd50, Func Offset: 0x2b0
	// Line 2264, Address: 0x21bd60, Func Offset: 0x2c0
	// Line 2265, Address: 0x21bd88, Func Offset: 0x2e8
	// Line 2264, Address: 0x21bd8c, Func Offset: 0x2ec
	// Line 2265, Address: 0x21bdd0, Func Offset: 0x330
	// Line 2264, Address: 0x21bdd4, Func Offset: 0x334
	// Line 2265, Address: 0x21bde0, Func Offset: 0x340
	// Line 2264, Address: 0x21bde4, Func Offset: 0x344
	// Line 2265, Address: 0x21bdec, Func Offset: 0x34c
	// Line 2266, Address: 0x21be0c, Func Offset: 0x36c
	// Line 2269, Address: 0x21be24, Func Offset: 0x384
	// Line 2270, Address: 0x21be88, Func Offset: 0x3e8
	// Line 2269, Address: 0x21be94, Func Offset: 0x3f4
	// Line 2270, Address: 0x21be98, Func Offset: 0x3f8
	// Line 2271, Address: 0x21bea0, Func Offset: 0x400
	// Line 2272, Address: 0x21bea4, Func Offset: 0x404
	// Func End, Address: 0x21bec0, Func Offset: 0x420
}

// Process__16zNMEGoalMervBombFP11en_trantypefPv
// Start address: 0x21bec0
int32 zNMEGoalMervBomb::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	zNMEMervyn* npc;
	uint32 anid_prep;
	uint32 anid_done;
	int32 rc;
	float32 tym_shoot[1];
	// Line 2145, Address: 0x21bec0, Func Offset: 0
	// Line 2147, Address: 0x21bee4, Func Offset: 0x24
	// Line 2156, Address: 0x21bee8, Func Offset: 0x28
	// Line 2147, Address: 0x21beec, Func Offset: 0x2c
	// Line 2156, Address: 0x21bef0, Func Offset: 0x30
	// Line 2158, Address: 0x21bf2c, Func Offset: 0x6c
	// Line 2160, Address: 0x21bf50, Func Offset: 0x90
	// Line 2161, Address: 0x21bf58, Func Offset: 0x98
	// Line 2163, Address: 0x21bf64, Func Offset: 0xa4
	// Line 2165, Address: 0x21bf70, Func Offset: 0xb0
	// Line 2167, Address: 0x21bf98, Func Offset: 0xd8
	// Line 2168, Address: 0x21bf9c, Func Offset: 0xdc
	// Line 2177, Address: 0x21bfa8, Func Offset: 0xe8
	// Line 2179, Address: 0x21bfb0, Func Offset: 0xf0
	// Line 2180, Address: 0x21bfb8, Func Offset: 0xf8
	// Line 2181, Address: 0x21bfd8, Func Offset: 0x118
	// Line 2182, Address: 0x21bfe0, Func Offset: 0x120
	// Line 2183, Address: 0x21bfe8, Func Offset: 0x128
	// Line 2188, Address: 0x21bff4, Func Offset: 0x134
	// Line 2158, Address: 0x21c06c, Func Offset: 0x1ac
	// Line 2188, Address: 0x21c074, Func Offset: 0x1b4
	// Line 2163, Address: 0x21c08c, Func Offset: 0x1cc
	// Line 2189, Address: 0x21c094, Func Offset: 0x1d4
	// Func End, Address: 0x21c0b0, Func Offset: 0x1f0
}

// Enter__16zNMEGoalMervBombFfPv
// Start address: 0x21c0b0
int32 zNMEGoalMervBomb::Enter()
{
	// Line 2137, Address: 0x21c0b0, Func Offset: 0
	// Line 2139, Address: 0x21c0b4, Func Offset: 0x4
	// Line 2137, Address: 0x21c0b8, Func Offset: 0x8
	// Line 2140, Address: 0x21c0bc, Func Offset: 0xc
	// Line 2137, Address: 0x21c0c0, Func Offset: 0x10
	// Line 2138, Address: 0x21c0cc, Func Offset: 0x1c
	// Line 2139, Address: 0x21c0d4, Func Offset: 0x24
	// Line 2140, Address: 0x21c0d8, Func Offset: 0x28
	// Line 2139, Address: 0x21c0dc, Func Offset: 0x2c
	// Line 2140, Address: 0x21c0fc, Func Offset: 0x4c
	// Line 2141, Address: 0x21c124, Func Offset: 0x74
	// Line 2140, Address: 0x21c158, Func Offset: 0xa8
	// Line 2141, Address: 0x21c15c, Func Offset: 0xac
	// Line 2140, Address: 0x21c16c, Func Offset: 0xbc
	// Line 2141, Address: 0x21c17c, Func Offset: 0xcc
	// Line 2142, Address: 0x21c1d0, Func Offset: 0x120
	// Func End, Address: 0x21c1e8, Func Offset: 0x138
}

// RepelBowlBall__16zNMEGoalMervBowlFf
// Start address: 0x21c1f0
int32 zNMEGoalMervBowl::RepelBowlBall(float32 dt)
{
	xEntBoulder* bowl;
	zNMEMervyn* npc;
	xVec3 vec_NtoB;
	xVec3 dir_NtoB;
	xVec3 vec_tmp;
	xVec3 dir_side;
	float32 rat;
	// Line 2057, Address: 0x21c1f0, Func Offset: 0
	// Line 2058, Address: 0x21c218, Func Offset: 0x28
	// Line 2059, Address: 0x21c220, Func Offset: 0x30
	// Line 2058, Address: 0x21c224, Func Offset: 0x34
	// Line 2063, Address: 0x21c228, Func Offset: 0x38
	// Line 2059, Address: 0x21c240, Func Offset: 0x50
	// Line 2063, Address: 0x21c244, Func Offset: 0x54
	// Line 2065, Address: 0x21c248, Func Offset: 0x58
	// Line 2064, Address: 0x21c258, Func Offset: 0x68
	// Line 2063, Address: 0x21c25c, Func Offset: 0x6c
	// Line 2064, Address: 0x21c284, Func Offset: 0x94
	// Line 2063, Address: 0x21c290, Func Offset: 0xa0
	// Line 2064, Address: 0x21c294, Func Offset: 0xa4
	// Line 2065, Address: 0x21c29c, Func Offset: 0xac
	// Line 2066, Address: 0x21c2a8, Func Offset: 0xb8
	// Line 2069, Address: 0x21c2b0, Func Offset: 0xc0
	// Line 2070, Address: 0x21c2c8, Func Offset: 0xd8
	// Line 2069, Address: 0x21c2cc, Func Offset: 0xdc
	// Line 2070, Address: 0x21c2e0, Func Offset: 0xf0
	// Line 2069, Address: 0x21c2e4, Func Offset: 0xf4
	// Line 2070, Address: 0x21c2f8, Func Offset: 0x108
	// Line 2069, Address: 0x21c2fc, Func Offset: 0x10c
	// Line 2070, Address: 0x21c30c, Func Offset: 0x11c
	// Line 2069, Address: 0x21c310, Func Offset: 0x120
	// Line 2070, Address: 0x21c350, Func Offset: 0x160
	// Line 2085, Address: 0x21c358, Func Offset: 0x168
	// Line 2086, Address: 0x21c35c, Func Offset: 0x16c
	// Line 2103, Address: 0x21c360, Func Offset: 0x170
	// Line 2085, Address: 0x21c364, Func Offset: 0x174
	// Line 2103, Address: 0x21c368, Func Offset: 0x178
	// Line 2085, Address: 0x21c36c, Func Offset: 0x17c
	// Line 2086, Address: 0x21c370, Func Offset: 0x180
	// Line 2103, Address: 0x21c374, Func Offset: 0x184
	// Line 2085, Address: 0x21c378, Func Offset: 0x188
	// Line 2104, Address: 0x21c37c, Func Offset: 0x18c
	// Line 2085, Address: 0x21c380, Func Offset: 0x190
	// Line 2092, Address: 0x21c384, Func Offset: 0x194
	// Line 2085, Address: 0x21c388, Func Offset: 0x198
	// Line 2087, Address: 0x21c38c, Func Offset: 0x19c
	// Line 2103, Address: 0x21c390, Func Offset: 0x1a0
	// Line 2086, Address: 0x21c394, Func Offset: 0x1a4
	// Line 2092, Address: 0x21c398, Func Offset: 0x1a8
	// Line 2085, Address: 0x21c39c, Func Offset: 0x1ac
	// Line 2103, Address: 0x21c3ac, Func Offset: 0x1bc
	// Line 2085, Address: 0x21c3b0, Func Offset: 0x1c0
	// Line 2103, Address: 0x21c3b4, Func Offset: 0x1c4
	// Line 2088, Address: 0x21c3b8, Func Offset: 0x1c8
	// Line 2092, Address: 0x21c3bc, Func Offset: 0x1cc
	// Line 2086, Address: 0x21c3c0, Func Offset: 0x1d0
	// Line 2088, Address: 0x21c3cc, Func Offset: 0x1dc
	// Line 2086, Address: 0x21c3d0, Func Offset: 0x1e0
	// Line 2087, Address: 0x21c3d8, Func Offset: 0x1e8
	// Line 2104, Address: 0x21c3dc, Func Offset: 0x1ec
	// Line 2086, Address: 0x21c3e0, Func Offset: 0x1f0
	// Line 2092, Address: 0x21c3e8, Func Offset: 0x1f8
	// Line 2087, Address: 0x21c3ec, Func Offset: 0x1fc
	// Line 2086, Address: 0x21c3f0, Func Offset: 0x200
	// Line 2087, Address: 0x21c3f4, Func Offset: 0x204
	// Line 2088, Address: 0x21c40c, Func Offset: 0x21c
	// Line 2087, Address: 0x21c410, Func Offset: 0x220
	// Line 2086, Address: 0x21c414, Func Offset: 0x224
	// Line 2087, Address: 0x21c418, Func Offset: 0x228
	// Line 2088, Address: 0x21c41c, Func Offset: 0x22c
	// Line 2087, Address: 0x21c424, Func Offset: 0x234
	// Line 2092, Address: 0x21c428, Func Offset: 0x238
	// Line 2088, Address: 0x21c430, Func Offset: 0x240
	// Line 2092, Address: 0x21c438, Func Offset: 0x248
	// Line 2088, Address: 0x21c43c, Func Offset: 0x24c
	// Line 2092, Address: 0x21c440, Func Offset: 0x250
	// Line 2093, Address: 0x21c458, Func Offset: 0x268
	// Line 2092, Address: 0x21c45c, Func Offset: 0x26c
	// Line 2093, Address: 0x21c460, Func Offset: 0x270
	// Line 2104, Address: 0x21c46c, Func Offset: 0x27c
	// Line 2093, Address: 0x21c470, Func Offset: 0x280
	// Line 2087, Address: 0x21c484, Func Offset: 0x294
	// Line 2093, Address: 0x21c48c, Func Offset: 0x29c
	// Line 2104, Address: 0x21c494, Func Offset: 0x2a4
	// Line 2106, Address: 0x21c4ac, Func Offset: 0x2bc
	// Line 2107, Address: 0x21c4b4, Func Offset: 0x2c4
	// Line 2106, Address: 0x21c4b8, Func Offset: 0x2c8
	// Line 2107, Address: 0x21c4bc, Func Offset: 0x2cc
	// Line 2106, Address: 0x21c4c4, Func Offset: 0x2d4
	// Line 2107, Address: 0x21c504, Func Offset: 0x314
	// Line 2110, Address: 0x21c510, Func Offset: 0x320
	// Line 2109, Address: 0x21c51c, Func Offset: 0x32c
	// Line 2110, Address: 0x21c578, Func Offset: 0x388
	// Line 2128, Address: 0x21c580, Func Offset: 0x390
	// Line 2129, Address: 0x21c584, Func Offset: 0x394
	// Func End, Address: 0x21c5ac, Func Offset: 0x3bc
}

// Process__16zNMEGoalMervBowlFP11en_trantypefPv
// Start address: 0x21c5b0
int32 zNMEGoalMervBowl::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	zNMEMervyn* npc;
	int32 rc;
	// Line 1997, Address: 0x21c5b0, Func Offset: 0
	// Line 2001, Address: 0x21c5b4, Func Offset: 0x4
	// Line 1997, Address: 0x21c5b8, Func Offset: 0x8
	// Line 2001, Address: 0x21c5bc, Func Offset: 0xc
	// Line 1997, Address: 0x21c5c0, Func Offset: 0x10
	// Line 1999, Address: 0x21c5e0, Func Offset: 0x30
	// Line 2001, Address: 0x21c5e4, Func Offset: 0x34
	// Line 1999, Address: 0x21c5e8, Func Offset: 0x38
	// Line 2001, Address: 0x21c5ec, Func Offset: 0x3c
	// Line 2007, Address: 0x21c608, Func Offset: 0x58
	// Line 2017, Address: 0x21c634, Func Offset: 0x84
	// Line 2018, Address: 0x21c660, Func Offset: 0xb0
	// Line 2017, Address: 0x21c664, Func Offset: 0xb4
	// Line 2018, Address: 0x21c668, Func Offset: 0xb8
	// Line 2023, Address: 0x21c690, Func Offset: 0xe0
	// Line 2028, Address: 0x21c69c, Func Offset: 0xec
	// Line 2029, Address: 0x21c6a8, Func Offset: 0xf8
	// Line 2028, Address: 0x21c6b0, Func Offset: 0x100
	// Line 2029, Address: 0x21c6b4, Func Offset: 0x104
	// Line 2028, Address: 0x21c6b8, Func Offset: 0x108
	// Line 2029, Address: 0x21c6e4, Func Offset: 0x134
	// Line 2028, Address: 0x21c6e8, Func Offset: 0x138
	// Line 2029, Address: 0x21c6ec, Func Offset: 0x13c
	// Line 2030, Address: 0x21c6fc, Func Offset: 0x14c
	// Line 2032, Address: 0x21c700, Func Offset: 0x150
	// Line 2004, Address: 0x21c70c, Func Offset: 0x15c
	// Line 2009, Address: 0x21c718, Func Offset: 0x168
	// Line 2032, Address: 0x21c71c, Func Offset: 0x16c
	// Line 2013, Address: 0x21c72c, Func Offset: 0x17c
	// Line 2035, Address: 0x21c738, Func Offset: 0x188
	// Line 2036, Address: 0x21c794, Func Offset: 0x1e4
	// Func End, Address: 0x21c7b4, Func Offset: 0x204
}

// Enter__16zNMEGoalMervBowlFfPv
// Start address: 0x21c7c0
int32 zNMEGoalMervBowl::Enter()
{
	// Line 1989, Address: 0x21c7c0, Func Offset: 0
	// Line 1991, Address: 0x21c7c4, Func Offset: 0x4
	// Line 1989, Address: 0x21c7c8, Func Offset: 0x8
	// Line 1992, Address: 0x21c7cc, Func Offset: 0xc
	// Line 1989, Address: 0x21c7d0, Func Offset: 0x10
	// Line 1991, Address: 0x21c7dc, Func Offset: 0x1c
	// Line 1992, Address: 0x21c7e0, Func Offset: 0x20
	// Line 1993, Address: 0x21c7e4, Func Offset: 0x24
	// Line 1994, Address: 0x21c86c, Func Offset: 0xac
	// Func End, Address: 0x21c884, Func Offset: 0xc4
}

// Process__15zNMEGoalMervZapFP11en_trantypefPv
// Start address: 0x21c890
int32 zNMEGoalMervZap::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	zNMEMervyn* npc;
	int32 nextgoal;
	float32 tym_inGoal;
	en_vis vis;
	float32 spd_turn;
	// Line 1945, Address: 0x21c890, Func Offset: 0
	// Line 1950, Address: 0x21c8b8, Func Offset: 0x28
	// Line 1946, Address: 0x21c8bc, Func Offset: 0x2c
	// Line 1947, Address: 0x21c8c4, Func Offset: 0x34
	// Line 1950, Address: 0x21c8c8, Func Offset: 0x38
	// Line 1951, Address: 0x21c8d4, Func Offset: 0x44
	// Line 1952, Address: 0x21c8ec, Func Offset: 0x5c
	// Line 1961, Address: 0x21c8fc, Func Offset: 0x6c
	// Line 1964, Address: 0x21c908, Func Offset: 0x78
	// Line 1962, Address: 0x21c90c, Func Offset: 0x7c
	// Line 1964, Address: 0x21c910, Func Offset: 0x80
	// Line 1963, Address: 0x21c914, Func Offset: 0x84
	// Line 1964, Address: 0x21c918, Func Offset: 0x88
	// Line 1963, Address: 0x21c91c, Func Offset: 0x8c
	// Line 1964, Address: 0x21c924, Func Offset: 0x94
	// Line 1965, Address: 0x21c934, Func Offset: 0xa4
	// Line 1969, Address: 0x21c93c, Func Offset: 0xac
	// Line 1970, Address: 0x21c95c, Func Offset: 0xcc
	// Line 1979, Address: 0x21c968, Func Offset: 0xd8
	// Line 1973, Address: 0x21c97c, Func Offset: 0xec
	// Line 1979, Address: 0x21c980, Func Offset: 0xf0
	// Line 1973, Address: 0x21c9a0, Func Offset: 0x110
	// Line 1979, Address: 0x21c9a4, Func Offset: 0x114
	// Line 1981, Address: 0x21ca44, Func Offset: 0x1b4
	// Line 1953, Address: 0x21ca78, Func Offset: 0x1e8
	// Line 1981, Address: 0x21ca7c, Func Offset: 0x1ec
	// Line 1953, Address: 0x21ca80, Func Offset: 0x1f0
	// Line 1981, Address: 0x21ca84, Func Offset: 0x1f4
	// Line 1955, Address: 0x21ca94, Func Offset: 0x204
	// Line 1981, Address: 0x21caa0, Func Offset: 0x210
	// Line 1958, Address: 0x21caa8, Func Offset: 0x218
	// Line 1981, Address: 0x21cab4, Func Offset: 0x224
	// Line 1959, Address: 0x21cac0, Func Offset: 0x230
	// Line 1971, Address: 0x21cac8, Func Offset: 0x238
	// Line 1981, Address: 0x21cacc, Func Offset: 0x23c
	// Line 1971, Address: 0x21cad4, Func Offset: 0x244
	// Line 1979, Address: 0x21caf4, Func Offset: 0x264
	// Line 1981, Address: 0x21cafc, Func Offset: 0x26c
	// Line 1979, Address: 0x21cb00, Func Offset: 0x270
	// Line 1981, Address: 0x21cb08, Func Offset: 0x278
	// Line 1979, Address: 0x21cb0c, Func Offset: 0x27c
	// Line 1981, Address: 0x21cb18, Func Offset: 0x288
	// Line 1982, Address: 0x21cb8c, Func Offset: 0x2fc
	// Func End, Address: 0x21cbac, Func Offset: 0x31c
}

// Process__18zNMEGoalMervBattleFP11en_trantypefPv
// Start address: 0x21cbb0
int32 zNMEGoalMervBattle::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	int32 nextgoal;
	zNMEMervyn* npc;
	int32 doTran;
	// Line 1922, Address: 0x21cbb0, Func Offset: 0
	// Line 1926, Address: 0x21cbd8, Func Offset: 0x28
	// Line 1923, Address: 0x21cbdc, Func Offset: 0x2c
	// Line 1924, Address: 0x21cbe4, Func Offset: 0x34
	// Line 1926, Address: 0x21cbe8, Func Offset: 0x38
	// Line 1924, Address: 0x21cbec, Func Offset: 0x3c
	// Line 1926, Address: 0x21cbf0, Func Offset: 0x40
	// Line 1927, Address: 0x21cbf8, Func Offset: 0x48
	// Line 1931, Address: 0x21cc04, Func Offset: 0x54
	// Line 1934, Address: 0x21cc30, Func Offset: 0x80
	// Line 1936, Address: 0x21cd04, Func Offset: 0x154
	// Line 1928, Address: 0x21cd64, Func Offset: 0x1b4
	// Line 1934, Address: 0x21cd6c, Func Offset: 0x1bc
	// Line 1936, Address: 0x21cd88, Func Offset: 0x1d8
	// Line 1934, Address: 0x21cd8c, Func Offset: 0x1dc
	// Line 1936, Address: 0x21cd90, Func Offset: 0x1e0
	// Line 1934, Address: 0x21cd98, Func Offset: 0x1e8
	// Line 1936, Address: 0x21cda0, Func Offset: 0x1f0
	// Line 1937, Address: 0x21cdb0, Func Offset: 0x200
	// Func End, Address: 0x21cdd0, Func Offset: 0x220
}

// ChkExitCases__18zNMEGoalMervBattleFP10zNMEMervynRiR11en_trantype
// Start address: 0x21cdd0
int32 zNMEGoalMervBattle::ChkExitCases(zNMEMervyn* npc, int32& nextgoal, en_trantype& trantype)
{
	int32 rc;
	en_vis iseeplyr;
	// Line 1851, Address: 0x21cdd0, Func Offset: 0
	// Line 1852, Address: 0x21cdd4, Func Offset: 0x4
	// Line 1851, Address: 0x21cdd8, Func Offset: 0x8
	// Line 1852, Address: 0x21cddc, Func Offset: 0xc
	// Line 1851, Address: 0x21cde0, Func Offset: 0x10
	// Line 1852, Address: 0x21cdfc, Func Offset: 0x2c
	// Line 1853, Address: 0x21ce0c, Func Offset: 0x3c
	// Line 1857, Address: 0x21ce14, Func Offset: 0x44
	// Line 1858, Address: 0x21ce20, Func Offset: 0x50
	// Line 1866, Address: 0x21ce28, Func Offset: 0x58
	// Line 1876, Address: 0x21ce38, Func Offset: 0x68
	// Line 1883, Address: 0x21ce44, Func Offset: 0x74
	// Line 1886, Address: 0x21ce64, Func Offset: 0x94
	// Line 1896, Address: 0x21ce70, Func Offset: 0xa0
	// Line 1899, Address: 0x21ce78, Func Offset: 0xa8
	// Line 1908, Address: 0x21ce80, Func Offset: 0xb0
	// Line 1918, Address: 0x21ce90, Func Offset: 0xc0
	// Line 1860, Address: 0x21ce98, Func Offset: 0xc8
	// Line 1918, Address: 0x21ce9c, Func Offset: 0xcc
	// Line 1862, Address: 0x21cea0, Func Offset: 0xd0
	// Line 1918, Address: 0x21cea4, Func Offset: 0xd4
	// Line 1862, Address: 0x21cea8, Func Offset: 0xd8
	// Line 1861, Address: 0x21ceac, Func Offset: 0xdc
	// Line 1862, Address: 0x21ceb0, Func Offset: 0xe0
	// Line 1861, Address: 0x21ceb4, Func Offset: 0xe4
	// Line 1918, Address: 0x21ceb8, Func Offset: 0xe8
	// Line 1863, Address: 0x21cecc, Func Offset: 0xfc
	// Line 1918, Address: 0x21ced4, Func Offset: 0x104
	// Line 1867, Address: 0x21ced8, Func Offset: 0x108
	// Line 1918, Address: 0x21cedc, Func Offset: 0x10c
	// Line 1869, Address: 0x21cef0, Func Offset: 0x120
	// Line 1918, Address: 0x21cefc, Func Offset: 0x12c
	// Line 1872, Address: 0x21cf04, Func Offset: 0x134
	// Line 1918, Address: 0x21cf10, Func Offset: 0x140
	// Line 1873, Address: 0x21cf1c, Func Offset: 0x14c
	// Line 1879, Address: 0x21cf24, Func Offset: 0x154
	// Line 1918, Address: 0x21cf28, Func Offset: 0x158
	// Line 1879, Address: 0x21cf2c, Func Offset: 0x15c
	// Line 1878, Address: 0x21cf30, Func Offset: 0x160
	// Line 1879, Address: 0x21cf34, Func Offset: 0x164
	// Line 1878, Address: 0x21cf38, Func Offset: 0x168
	// Line 1918, Address: 0x21cf3c, Func Offset: 0x16c
	// Line 1880, Address: 0x21cf50, Func Offset: 0x180
	// Line 1888, Address: 0x21cf58, Func Offset: 0x188
	// Line 1890, Address: 0x21cf5c, Func Offset: 0x18c
	// Line 1918, Address: 0x21cf60, Func Offset: 0x190
	// Line 1890, Address: 0x21cf64, Func Offset: 0x194
	// Line 1889, Address: 0x21cf68, Func Offset: 0x198
	// Line 1890, Address: 0x21cf6c, Func Offset: 0x19c
	// Line 1889, Address: 0x21cf70, Func Offset: 0x1a0
	// Line 1918, Address: 0x21cf74, Func Offset: 0x1a4
	// Line 1891, Address: 0x21cf88, Func Offset: 0x1b8
	// Line 1897, Address: 0x21cf90, Func Offset: 0x1c0
	// Line 1903, Address: 0x21cf98, Func Offset: 0x1c8
	// Line 1918, Address: 0x21cf9c, Func Offset: 0x1cc
	// Line 1903, Address: 0x21cfa0, Func Offset: 0x1d0
	// Line 1918, Address: 0x21cfa4, Func Offset: 0x1d4
	// Line 1904, Address: 0x21cfa8, Func Offset: 0x1d8
	// Line 1918, Address: 0x21cfac, Func Offset: 0x1dc
	// Line 1904, Address: 0x21cfb0, Func Offset: 0x1e0
	// Line 1918, Address: 0x21cfb4, Func Offset: 0x1e4
	// Line 1904, Address: 0x21cfb8, Func Offset: 0x1e8
	// Line 1918, Address: 0x21cfbc, Func Offset: 0x1ec
	// Line 1905, Address: 0x21cfc8, Func Offset: 0x1f8
	// Line 1918, Address: 0x21cfd0, Func Offset: 0x200
	// Line 1909, Address: 0x21cfd4, Func Offset: 0x204
	// Line 1918, Address: 0x21cff0, Func Offset: 0x220
	// Line 1911, Address: 0x21cff8, Func Offset: 0x228
	// Line 1918, Address: 0x21cffc, Func Offset: 0x22c
	// Line 1913, Address: 0x21d000, Func Offset: 0x230
	// Line 1918, Address: 0x21d004, Func Offset: 0x234
	// Line 1913, Address: 0x21d008, Func Offset: 0x238
	// Line 1912, Address: 0x21d00c, Func Offset: 0x23c
	// Line 1913, Address: 0x21d010, Func Offset: 0x240
	// Line 1912, Address: 0x21d014, Func Offset: 0x244
	// Line 1918, Address: 0x21d018, Func Offset: 0x248
	// Line 1914, Address: 0x21d02c, Func Offset: 0x25c
	// Line 1919, Address: 0x21d030, Func Offset: 0x260
	// Func End, Address: 0x21d04c, Func Offset: 0x27c
}

// Enter__18zNMEGoalMervBattleFfPv
// Start address: 0x21d050
int32 zNMEGoalMervBattle::Enter()
{
	zNMEMervyn* npc;
	// Line 1842, Address: 0x21d050, Func Offset: 0
	// Line 1844, Address: 0x21d054, Func Offset: 0x4
	// Line 1842, Address: 0x21d058, Func Offset: 0x8
	// Line 1843, Address: 0x21d068, Func Offset: 0x18
	// Line 1844, Address: 0x21d070, Func Offset: 0x20
	// Line 1845, Address: 0x21d108, Func Offset: 0xb8
	// Line 1846, Address: 0x21d10c, Func Offset: 0xbc
	// Line 1845, Address: 0x21d110, Func Offset: 0xc0
	// Line 1846, Address: 0x21d114, Func Offset: 0xc4
	// Line 1847, Address: 0x21d198, Func Offset: 0x148
	// Func End, Address: 0x21d1b0, Func Offset: 0x160
}

// Process__17zNMEGoalMervAwareFP11en_trantypefPv
// Start address: 0x21d1b0
int32 zNMEGoalMervAware::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	zNMEMervyn* npc;
	int32 rc;
	int32 nextgoal;
	en_vis iseeplyr;
	int32 nextgoal;
	int32 nextgoal;
	// Line 1789, Address: 0x21d1b0, Func Offset: 0
	// Line 1794, Address: 0x21d1c8, Func Offset: 0x18
	// Line 1789, Address: 0x21d1cc, Func Offset: 0x1c
	// Line 1794, Address: 0x21d1e4, Func Offset: 0x34
	// Line 1790, Address: 0x21d1e8, Func Offset: 0x38
	// Line 1794, Address: 0x21d1f4, Func Offset: 0x44
	// Line 1795, Address: 0x21d1fc, Func Offset: 0x4c
	// Line 1807, Address: 0x21d204, Func Offset: 0x54
	// Line 1808, Address: 0x21d224, Func Offset: 0x74
	// Line 1813, Address: 0x21d230, Func Offset: 0x80
	// Line 1823, Address: 0x21d23c, Func Offset: 0x8c
	// Line 1825, Address: 0x21d250, Func Offset: 0xa0
	// Line 1826, Address: 0x21d264, Func Offset: 0xb4
	// Line 1831, Address: 0x21d2b4, Func Offset: 0x104
	// Line 1833, Address: 0x21d388, Func Offset: 0x1d8
	// Line 1796, Address: 0x21d3e8, Func Offset: 0x238
	// Line 1798, Address: 0x21d3ec, Func Offset: 0x23c
	// Line 1833, Address: 0x21d3f0, Func Offset: 0x240
	// Line 1798, Address: 0x21d3f4, Func Offset: 0x244
	// Line 1797, Address: 0x21d3f8, Func Offset: 0x248
	// Line 1798, Address: 0x21d3fc, Func Offset: 0x24c
	// Line 1797, Address: 0x21d400, Func Offset: 0x250
	// Line 1833, Address: 0x21d404, Func Offset: 0x254
	// Line 1799, Address: 0x21d418, Func Offset: 0x268
	// Line 1809, Address: 0x21d420, Func Offset: 0x270
	// Line 1810, Address: 0x21d424, Func Offset: 0x274
	// Line 1809, Address: 0x21d428, Func Offset: 0x278
	// Line 1810, Address: 0x21d42c, Func Offset: 0x27c
	// Line 1833, Address: 0x21d430, Func Offset: 0x280
	// Line 1810, Address: 0x21d434, Func Offset: 0x284
	// Line 1833, Address: 0x21d438, Func Offset: 0x288
	// Line 1811, Address: 0x21d448, Func Offset: 0x298
	// Line 1814, Address: 0x21d450, Func Offset: 0x2a0
	// Line 1815, Address: 0x21d454, Func Offset: 0x2a4
	// Line 1814, Address: 0x21d458, Func Offset: 0x2a8
	// Line 1815, Address: 0x21d45c, Func Offset: 0x2ac
	// Line 1833, Address: 0x21d460, Func Offset: 0x2b0
	// Line 1815, Address: 0x21d464, Func Offset: 0x2b4
	// Line 1833, Address: 0x21d468, Func Offset: 0x2b8
	// Line 1816, Address: 0x21d478, Func Offset: 0x2c8
	// Line 1833, Address: 0x21d480, Func Offset: 0x2d0
	// Line 1824, Address: 0x21d484, Func Offset: 0x2d4
	// Line 1833, Address: 0x21d488, Func Offset: 0x2d8
	// Line 1824, Address: 0x21d48c, Func Offset: 0x2dc
	// Line 1833, Address: 0x21d490, Func Offset: 0x2e0
	// Line 1824, Address: 0x21d4a4, Func Offset: 0x2f4
	// Line 1833, Address: 0x21d4a8, Func Offset: 0x2f8
	// Line 1824, Address: 0x21d4b0, Func Offset: 0x300
	// Line 1833, Address: 0x21d4b4, Func Offset: 0x304
	// Line 1824, Address: 0x21d4c4, Func Offset: 0x314
	// Line 1831, Address: 0x21d4d4, Func Offset: 0x324
	// Line 1833, Address: 0x21d4f0, Func Offset: 0x340
	// Line 1831, Address: 0x21d4f4, Func Offset: 0x344
	// Line 1833, Address: 0x21d4f8, Func Offset: 0x348
	// Line 1831, Address: 0x21d500, Func Offset: 0x350
	// Line 1833, Address: 0x21d508, Func Offset: 0x358
	// Line 1834, Address: 0x21d518, Func Offset: 0x368
	// Func End, Address: 0x21d540, Func Offset: 0x390
}

// Process__18zNMEGoalMervNormalFP11en_trantypefPv
// Start address: 0x21d540
int32 zNMEGoalMervNormal::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	zNMEMervyn* npc;
	int32 rc;
	int32 nextgoal;
	en_vis iseeplyr;
	int32 nextgoal;
	// Line 1750, Address: 0x21d540, Func Offset: 0
	// Line 1758, Address: 0x21d544, Func Offset: 0x4
	// Line 1750, Address: 0x21d548, Func Offset: 0x8
	// Line 1758, Address: 0x21d56c, Func Offset: 0x2c
	// Line 1751, Address: 0x21d570, Func Offset: 0x30
	// Line 1758, Address: 0x21d574, Func Offset: 0x34
	// Line 1751, Address: 0x21d578, Func Offset: 0x38
	// Line 1758, Address: 0x21d57c, Func Offset: 0x3c
	// Line 1759, Address: 0x21d584, Func Offset: 0x44
	// Line 1763, Address: 0x21d59c, Func Offset: 0x5c
	// Line 1764, Address: 0x21d5ac, Func Offset: 0x6c
	// Line 1771, Address: 0x21d5b4, Func Offset: 0x74
	// Line 1772, Address: 0x21d5d4, Func Offset: 0x94
	// Line 1773, Address: 0x21d5e0, Func Offset: 0xa0
	// Line 1775, Address: 0x21d5e4, Func Offset: 0xa4
	// Line 1773, Address: 0x21d5e8, Func Offset: 0xa8
	// Line 1775, Address: 0x21d5ec, Func Offset: 0xac
	// Line 1774, Address: 0x21d5f0, Func Offset: 0xb0
	// Line 1775, Address: 0x21d5f4, Func Offset: 0xb4
	// Line 1774, Address: 0x21d5f8, Func Offset: 0xb8
	// Line 1775, Address: 0x21d600, Func Offset: 0xc0
	// Line 1776, Address: 0x21d610, Func Offset: 0xd0
	// Line 1765, Address: 0x21d618, Func Offset: 0xd8
	// Line 1767, Address: 0x21d61c, Func Offset: 0xdc
	// Line 1776, Address: 0x21d620, Func Offset: 0xe0
	// Line 1767, Address: 0x21d624, Func Offset: 0xe4
	// Line 1766, Address: 0x21d628, Func Offset: 0xe8
	// Line 1767, Address: 0x21d62c, Func Offset: 0xec
	// Line 1766, Address: 0x21d630, Func Offset: 0xf0
	// Line 1776, Address: 0x21d634, Func Offset: 0xf4
	// Line 1768, Address: 0x21d648, Func Offset: 0x108
	// Line 1780, Address: 0x21d650, Func Offset: 0x110
	// Line 1781, Address: 0x21d6ac, Func Offset: 0x16c
	// Func End, Address: 0x21d6cc, Func Offset: 0x18c
}

// Exit__18zNMEGoalMervNormalFfPv
// Start address: 0x21d6d0
int32 zNMEGoalMervNormal::Exit()
{
	// Line 1742, Address: 0x21d6d0, Func Offset: 0
	// Line 1744, Address: 0x21d6d4, Func Offset: 0x4
	// Line 1742, Address: 0x21d6d8, Func Offset: 0x8
	// Line 1744, Address: 0x21d6dc, Func Offset: 0xc
	// Line 1745, Address: 0x21d6f0, Func Offset: 0x20
	// Line 1747, Address: 0x21d710, Func Offset: 0x40
	// Line 1746, Address: 0x21d714, Func Offset: 0x44
	// Line 1747, Address: 0x21d718, Func Offset: 0x48
	// Func End, Address: 0x21d720, Func Offset: 0x50
}

// Enter__18zNMEGoalMervNormalFfPv
// Start address: 0x21d720
int32 zNMEGoalMervNormal::Enter()
{
	zNMEMervyn* npc;
	// Line 1733, Address: 0x21d720, Func Offset: 0
	// Line 1735, Address: 0x21d724, Func Offset: 0x4
	// Line 1733, Address: 0x21d728, Func Offset: 0x8
	// Line 1734, Address: 0x21d73c, Func Offset: 0x1c
	// Line 1735, Address: 0x21d744, Func Offset: 0x24
	// Line 1736, Address: 0x21d750, Func Offset: 0x30
	// Line 1737, Address: 0x21d770, Func Offset: 0x50
	// Line 1738, Address: 0x21d808, Func Offset: 0xe8
	// Line 1739, Address: 0x21d890, Func Offset: 0x170
	// Func End, Address: 0x21d8a8, Func Offset: 0x188
}

// Notice__13MervLetMeKnowF10en_psynoteP5xGoalPv
// Start address: 0x21d8b0
void Notice(xGoal* goal)
{
	xPsyche* psy_move;
	int32 gid_move;
	int32 gid_want;
	// Line 1642, Address: 0x21d8b0, Func Offset: 0
	// Line 1645, Address: 0x21d8c0, Func Offset: 0x10
	// Line 1647, Address: 0x21d8c4, Func Offset: 0x14
	// Line 1645, Address: 0x21d8c8, Func Offset: 0x18
	// Line 1648, Address: 0x21d8d0, Func Offset: 0x20
	// Line 1654, Address: 0x21d8d8, Func Offset: 0x28
	// Line 1659, Address: 0x21d99c, Func Offset: 0xec
	// Line 1660, Address: 0x21d9a4, Func Offset: 0xf4
	// Line 1663, Address: 0x21d9a8, Func Offset: 0xf8
	// Line 1667, Address: 0x21d9b0, Func Offset: 0x100
	// Line 1668, Address: 0x21d9c8, Func Offset: 0x118
	// Func End, Address: 0x21d9d8, Func Offset: 0x128
}

// UpdateGunnerStatus__10zNMEMervynFv
// Start address: 0x21d9e0
void zNMEMervyn::UpdateGunnerStatus()
{
	int32 gid_main;
	en_zapmod gun_state;
	NMECfgMervyn* cfg;
	// Line 1547, Address: 0x21d9e0, Func Offset: 0
	// Line 1564, Address: 0x21da00, Func Offset: 0x20
	// Line 1576, Address: 0x21da08, Func Offset: 0x28
	// Line 1578, Address: 0x21dad4, Func Offset: 0xf4
	// Line 1579, Address: 0x21dad8, Func Offset: 0xf8
	// Line 1582, Address: 0x21dae0, Func Offset: 0x100
	// Line 1583, Address: 0x21daf4, Func Offset: 0x114
	// Line 1585, Address: 0x21dafc, Func Offset: 0x11c
	// Line 1586, Address: 0x21db00, Func Offset: 0x120
	// Line 1592, Address: 0x21db08, Func Offset: 0x128
	// Line 1593, Address: 0x21db0c, Func Offset: 0x12c
	// Line 1604, Address: 0x21db14, Func Offset: 0x134
	// Line 1600, Address: 0x21db24, Func Offset: 0x144
	// Line 1605, Address: 0x21db28, Func Offset: 0x148
	// Line 1604, Address: 0x21db2c, Func Offset: 0x14c
	// Line 1605, Address: 0x21db38, Func Offset: 0x158
	// Line 1604, Address: 0x21db3c, Func Offset: 0x15c
	// Line 1605, Address: 0x21db48, Func Offset: 0x168
	// Line 1604, Address: 0x21db4c, Func Offset: 0x16c
	// Line 1605, Address: 0x21db60, Func Offset: 0x180
	// Line 1604, Address: 0x21db64, Func Offset: 0x184
	// Line 1605, Address: 0x21db68, Func Offset: 0x188
	// Line 1606, Address: 0x21db78, Func Offset: 0x198
	// Line 1610, Address: 0x21db80, Func Offset: 0x1a0
	// Line 1613, Address: 0x21db88, Func Offset: 0x1a8
	// Line 1614, Address: 0x21db8c, Func Offset: 0x1ac
	// Line 1621, Address: 0x21db94, Func Offset: 0x1b4
	// Line 1622, Address: 0x21db98, Func Offset: 0x1b8
	// Line 1625, Address: 0x21dba0, Func Offset: 0x1c0
	// Line 1629, Address: 0x21dba8, Func Offset: 0x1c8
	// Line 1631, Address: 0x21dd08, Func Offset: 0x328
	// Line 1629, Address: 0x21dd10, Func Offset: 0x330
	// Line 1631, Address: 0x21dd14, Func Offset: 0x334
	// Line 1629, Address: 0x21dd34, Func Offset: 0x354
	// Line 1631, Address: 0x21dd48, Func Offset: 0x368
	// Line 1629, Address: 0x21dd4c, Func Offset: 0x36c
	// Line 1631, Address: 0x21dd50, Func Offset: 0x370
	// Line 1629, Address: 0x21dd54, Func Offset: 0x374
	// Line 1632, Address: 0x21dd60, Func Offset: 0x380
	// Func End, Address: 0x21dd80, Func Offset: 0x3a0
}

// SafeToTaunt__10zNMEMervynFv
// Start address: 0x21dd80
int32 zNMEMervyn::SafeToTaunt()
{
	// Line 1518, Address: 0x21dd80, Func Offset: 0
	// Line 1520, Address: 0x21ddd0, Func Offset: 0x50
	// Line 1523, Address: 0x21ddd8, Func Offset: 0x58
	// Line 1524, Address: 0x21ddec, Func Offset: 0x6c
	// Line 1544, Address: 0x21ddf0, Func Offset: 0x70
	// Func End, Address: 0x21ddf8, Func Offset: 0x78
}

// MervMailDamage__10zNMEMervynFP13NMEDamageInfo
// Start address: 0x21de00
int32 zNMEMervyn::MervMailDamage(NMEDamageInfo* dmgmail)
{
	int32 rc;
	int32 handled;
	xPsyche* psy;
	xGoal* goal;
	// Line 1397, Address: 0x21de00, Func Offset: 0
	// Line 1398, Address: 0x21de18, Func Offset: 0x18
	// Line 1399, Address: 0x21de24, Func Offset: 0x24
	// Line 1404, Address: 0x21de2c, Func Offset: 0x2c
	// Line 1428, Address: 0x21de58, Func Offset: 0x58
	// Line 1433, Address: 0x21de74, Func Offset: 0x74
	// Line 1435, Address: 0x21de88, Func Offset: 0x88
	// Line 1439, Address: 0x21de90, Func Offset: 0x90
	// Line 1441, Address: 0x21de94, Func Offset: 0x94
	// Line 1444, Address: 0x21dea4, Func Offset: 0xa4
	// Line 1445, Address: 0x21dea8, Func Offset: 0xa8
	// Line 1444, Address: 0x21deac, Func Offset: 0xac
	// Line 1445, Address: 0x21deb0, Func Offset: 0xb0
	// Line 1447, Address: 0x21dec0, Func Offset: 0xc0
	// Line 1450, Address: 0x21dec8, Func Offset: 0xc8
	// Line 1456, Address: 0x21decc, Func Offset: 0xcc
	// Line 1400, Address: 0x21ded8, Func Offset: 0xd8
	// Line 1457, Address: 0x21dee8, Func Offset: 0xe8
	// Func End, Address: 0x21df00, Func Offset: 0x100
}

// TypeHandleMail__10zNMEMervynFP6NMEMsg
// Start address: 0x21df00
int32 zNMEMervyn::TypeHandleMail(NMEMsg* mail)
{
	int32 handled;
	// Line 1368, Address: 0x21df00, Func Offset: 0
	// Line 1371, Address: 0x21df04, Func Offset: 0x4
	// Line 1368, Address: 0x21df08, Func Offset: 0x8
	// Line 1369, Address: 0x21df14, Func Offset: 0x14
	// Line 1368, Address: 0x21df18, Func Offset: 0x18
	// Line 1371, Address: 0x21df20, Func Offset: 0x20
	// Line 1376, Address: 0x21df44, Func Offset: 0x44
	// Line 1377, Address: 0x21df4c, Func Offset: 0x4c
	// Line 1381, Address: 0x21df54, Func Offset: 0x54
	// Line 1382, Address: 0x21e19c, Func Offset: 0x29c
	// Line 1385, Address: 0x21e1a4, Func Offset: 0x2a4
	// Line 1393, Address: 0x21e27c, Func Offset: 0x37c
	// Line 1394, Address: 0x21e280, Func Offset: 0x380
	// Func End, Address: 0x21e298, Func Offset: 0x398
}

// ChkBowlingBall__10zNMEMervynFP5xVec3Pf
// Start address: 0x21e2a0
int32 zNMEMervyn::ChkBowlingBall(xVec3* dir_NtoBall, float32* dst_NtoBall)
{
	xEntBoulder* bowl;
	xVec3 vec_NtoB;
	xVec3 dir_tgt;
	xVec3 dir_travel;
	float32 spd_ball;
	// Line 1286, Address: 0x21e2a0, Func Offset: 0
	// Line 1290, Address: 0x21e2bc, Func Offset: 0x1c
	// Line 1292, Address: 0x21e2c4, Func Offset: 0x24
	// Line 1294, Address: 0x21e2cc, Func Offset: 0x2c
	// Line 1299, Address: 0x21e2e4, Func Offset: 0x44
	// Line 1303, Address: 0x21e2e8, Func Offset: 0x48
	// Line 1299, Address: 0x21e2f0, Func Offset: 0x50
	// Line 1303, Address: 0x21e328, Func Offset: 0x88
	// Line 1299, Address: 0x21e32c, Func Offset: 0x8c
	// Line 1303, Address: 0x21e334, Func Offset: 0x94
	// Line 1305, Address: 0x21e33c, Func Offset: 0x9c
	// Line 1310, Address: 0x21e354, Func Offset: 0xb4
	// Line 1311, Address: 0x21e370, Func Offset: 0xd0
	// Line 1293, Address: 0x21e378, Func Offset: 0xd8
	// Line 1295, Address: 0x21e380, Func Offset: 0xe0
	// Line 1304, Address: 0x21e388, Func Offset: 0xe8
	// Line 1306, Address: 0x21e390, Func Offset: 0xf0
	// Line 1311, Address: 0x21e398, Func Offset: 0xf8
	// Line 1314, Address: 0x21e39c, Func Offset: 0xfc
	// Line 1322, Address: 0x21e3a8, Func Offset: 0x108
	// Line 1314, Address: 0x21e3ac, Func Offset: 0x10c
	// Line 1311, Address: 0x21e3c0, Func Offset: 0x120
	// Line 1322, Address: 0x21e3c4, Func Offset: 0x124
	// Line 1313, Address: 0x21e3c8, Func Offset: 0x128
	// Line 1314, Address: 0x21e3cc, Func Offset: 0x12c
	// Line 1313, Address: 0x21e3d8, Func Offset: 0x138
	// Line 1314, Address: 0x21e3e4, Func Offset: 0x144
	// Line 1313, Address: 0x21e3ec, Func Offset: 0x14c
	// Line 1314, Address: 0x21e3f0, Func Offset: 0x150
	// Line 1313, Address: 0x21e3f8, Func Offset: 0x158
	// Line 1314, Address: 0x21e3fc, Func Offset: 0x15c
	// Line 1322, Address: 0x21e444, Func Offset: 0x1a4
	// Line 1324, Address: 0x21e44c, Func Offset: 0x1ac
	// Line 1325, Address: 0x21e498, Func Offset: 0x1f8
	// Line 1327, Address: 0x21e4ac, Func Offset: 0x20c
	// Line 1328, Address: 0x21e4c4, Func Offset: 0x224
	// Line 1329, Address: 0x21e4d4, Func Offset: 0x234
	// Line 1335, Address: 0x21e4f0, Func Offset: 0x250
	// Line 1336, Address: 0x21e550, Func Offset: 0x2b0
	// Line 1332, Address: 0x21e564, Func Offset: 0x2c4
	// Line 1336, Address: 0x21e568, Func Offset: 0x2c8
	// Line 1358, Address: 0x21e578, Func Offset: 0x2d8
	// Line 1359, Address: 0x21e57c, Func Offset: 0x2dc
	// Func End, Address: 0x21e594, Func Offset: 0x2f4
}

// BladesUpdate__10zNMEMervynFf
// Start address: 0x21e5a0
void zNMEMervyn::BladesUpdate(float32 dt)
{
	float32 rat;
	float32 spd_turn;
	float32 ang_perstep;
	xMat3x3 mat_rot;
	xMat4x3* mat_blades;
	// Line 1241, Address: 0x21e5a0, Func Offset: 0
	// Line 1242, Address: 0x21e5b4, Func Offset: 0x14
	// Line 1243, Address: 0x21e5d0, Func Offset: 0x30
	// Line 1244, Address: 0x21e638, Func Offset: 0x98
	// Line 1250, Address: 0x21e660, Func Offset: 0xc0
	// Line 1244, Address: 0x21e664, Func Offset: 0xc4
	// Line 1250, Address: 0x21e670, Func Offset: 0xd0
	// Line 1251, Address: 0x21e67c, Func Offset: 0xdc
	// Line 1252, Address: 0x21e688, Func Offset: 0xe8
	// Line 1257, Address: 0x21e690, Func Offset: 0xf0
	// Line 1260, Address: 0x21e69c, Func Offset: 0xfc
	// Line 1265, Address: 0x21e6a0, Func Offset: 0x100
	// Line 1260, Address: 0x21e6a4, Func Offset: 0x104
	// Line 1265, Address: 0x21e6ac, Func Offset: 0x10c
	// Line 1280, Address: 0x21e6c4, Func Offset: 0x124
	// Func End, Address: 0x21e6d4, Func Offset: 0x134
}

// HealthRatio__10zNMEMervynFv
// Start address: 0x21e6e0
float32 zNMEMervyn::HealthRatio()
{
	float32 rat;
	// Line 1188, Address: 0x21e6e0, Func Offset: 0
	// Line 1189, Address: 0x21e6e4, Func Offset: 0x4
	// Line 1192, Address: 0x21e6ec, Func Offset: 0xc
	// Line 1195, Address: 0x21e6f0, Func Offset: 0x10
	// Line 1193, Address: 0x21e6f4, Func Offset: 0x14
	// Line 1195, Address: 0x21e6f8, Func Offset: 0x18
	// Line 1192, Address: 0x21e6fc, Func Offset: 0x1c
	// Line 1193, Address: 0x21e700, Func Offset: 0x20
	// Line 1195, Address: 0x21e710, Func Offset: 0x30
	// Line 1190, Address: 0x21e768, Func Offset: 0x88
	// Line 1196, Address: 0x21e76c, Func Offset: 0x8c
	// Func End, Address: 0x21e774, Func Offset: 0x94
}

// VisionTarget__10zNMEMervynCFP4xEnt9en_defconi
// Start address: 0x21e780
en_vis zNMEMervyn::VisionTarget(xEnt* ent)
{
	NMECfgMervyn* cfg;
	float32 dy;
	// Line 1068, Address: 0x21e780, Func Offset: 0
	// Line 1071, Address: 0x21e78c, Func Offset: 0xc
	// Line 1079, Address: 0x21e798, Func Offset: 0x18
	// Line 1074, Address: 0x21e7a8, Func Offset: 0x28
	// Line 1079, Address: 0x21e7ac, Func Offset: 0x2c
	// Line 1083, Address: 0x21e7cc, Func Offset: 0x4c
	// Line 1080, Address: 0x21e7d0, Func Offset: 0x50
	// Line 1083, Address: 0x21e7e8, Func Offset: 0x68
	// Line 1086, Address: 0x21e80c, Func Offset: 0x8c
	// Line 1125, Address: 0x21e818, Func Offset: 0x98
	// Line 1132, Address: 0x21e820, Func Offset: 0xa0
	// Line 1145, Address: 0x21e83c, Func Offset: 0xbc
	// Line 1147, Address: 0x21e84c, Func Offset: 0xcc
	// Line 1146, Address: 0x21e850, Func Offset: 0xd0
	// Line 1150, Address: 0x21e85c, Func Offset: 0xdc
	// Line 1147, Address: 0x21e864, Func Offset: 0xe4
	// Line 1146, Address: 0x21e868, Func Offset: 0xe8
	// Line 1150, Address: 0x21e874, Func Offset: 0xf4
	// Line 1134, Address: 0x21e8b8, Func Offset: 0x138
	// Line 1139, Address: 0x21e8c4, Func Offset: 0x144
	// Line 1150, Address: 0x21e8cc, Func Offset: 0x14c
	// Line 1134, Address: 0x21e8d0, Func Offset: 0x150
	// Line 1150, Address: 0x21e8dc, Func Offset: 0x15c
	// Line 1139, Address: 0x21e8e8, Func Offset: 0x168
	// Line 1150, Address: 0x21e900, Func Offset: 0x180
	// Line 1140, Address: 0x21e908, Func Offset: 0x188
	// Line 1142, Address: 0x21e910, Func Offset: 0x190
	// Line 1160, Address: 0x21e918, Func Offset: 0x198
	// Line 1163, Address: 0x21e924, Func Offset: 0x1a4
	// Line 1167, Address: 0x21e934, Func Offset: 0x1b4
	// Line 1069, Address: 0x21e950, Func Offset: 0x1d0
	// Line 1072, Address: 0x21e958, Func Offset: 0x1d8
	// Line 1170, Address: 0x21e968, Func Offset: 0x1e8
	// Func End, Address: 0x21e970, Func Offset: 0x1f0
}

// RenderExtra__10zNMEMervynFv
// Start address: 0x21e970
void zNMEMervyn::RenderExtra()
{
	// Line 1047, Address: 0x21e970, Func Offset: 0
	// Line 1049, Address: 0x21e99c, Func Offset: 0x2c
	// Line 1054, Address: 0x21e9ac, Func Offset: 0x3c
	// Line 1057, Address: 0x21e9c0, Func Offset: 0x50
	// Line 1063, Address: 0x21ed50, Func Offset: 0x3e0
	// Func End, Address: 0x21ed80, Func Offset: 0x410
}

// HelioDustUpdate__10zNMEMervynFf
// Start address: 0x21ed80
void zNMEMervyn::HelioDustUpdate(float32 dt)
{
	DustData* dusthelp;
	xVec3 pos;
	// Line 977, Address: 0x21ed80, Func Offset: 0
	// Line 979, Address: 0x21ed84, Func Offset: 0x4
	// Line 977, Address: 0x21ed88, Func Offset: 0x8
	// Line 978, Address: 0x21ed9c, Func Offset: 0x1c
	// Line 977, Address: 0x21eda0, Func Offset: 0x20
	// Line 978, Address: 0x21eda4, Func Offset: 0x24
	// Line 979, Address: 0x21eda8, Func Offset: 0x28
	// Line 989, Address: 0x21edb4, Func Offset: 0x34
	// Line 992, Address: 0x21edb8, Func Offset: 0x38
	// Line 989, Address: 0x21edbc, Func Offset: 0x3c
	// Line 992, Address: 0x21edc0, Func Offset: 0x40
	// Line 989, Address: 0x21edc4, Func Offset: 0x44
	// Line 992, Address: 0x21edfc, Func Offset: 0x7c
	// Line 989, Address: 0x21ee04, Func Offset: 0x84
	// Line 992, Address: 0x21ee08, Func Offset: 0x88
	// Line 989, Address: 0x21ee10, Func Offset: 0x90
	// Line 992, Address: 0x21ee14, Func Offset: 0x94
	// Line 993, Address: 0x21ee20, Func Offset: 0xa0
	// Line 996, Address: 0x21ee28, Func Offset: 0xa8
	// Line 997, Address: 0x21ee34, Func Offset: 0xb4
	// Line 998, Address: 0x21ee3c, Func Offset: 0xbc
	// Line 1000, Address: 0x21ee78, Func Offset: 0xf8
	// Line 1007, Address: 0x21ee80, Func Offset: 0x100
	// Line 1008, Address: 0x21ee8c, Func Offset: 0x10c
	// Line 1009, Address: 0x21ef00, Func Offset: 0x180
	// Line 1010, Address: 0x21ef08, Func Offset: 0x188
	// Line 1011, Address: 0x21ef10, Func Offset: 0x190
	// Line 1012, Address: 0x21ef18, Func Offset: 0x198
	// Line 1016, Address: 0x21ef20, Func Offset: 0x1a0
	// Line 1023, Address: 0x21ef2c, Func Offset: 0x1ac
	// Line 1024, Address: 0x21ef38, Func Offset: 0x1b8
	// Line 1025, Address: 0x21ef44, Func Offset: 0x1c4
	// Line 1017, Address: 0x21ef58, Func Offset: 0x1d8
	// Line 1035, Address: 0x21ef60, Func Offset: 0x1e0
	// Line 1026, Address: 0x21ef64, Func Offset: 0x1e4
	// Line 1035, Address: 0x21ef68, Func Offset: 0x1e8
	// Line 1036, Address: 0x21ef7c, Func Offset: 0x1fc
	// Line 1026, Address: 0x21ef80, Func Offset: 0x200
	// Line 1035, Address: 0x21ef84, Func Offset: 0x204
	// Line 1036, Address: 0x21ef90, Func Offset: 0x210
	// Line 1035, Address: 0x21ef94, Func Offset: 0x214
	// Line 1036, Address: 0x21effc, Func Offset: 0x27c
	// Line 1039, Address: 0x21f008, Func Offset: 0x288
	// Func End, Address: 0x21f024, Func Offset: 0x2a4
}

// NewTime__10zNMEMervynFf
// Start address: 0x21f030
void zNMEMervyn::NewTime(float32 dt)
{
	// Line 962, Address: 0x21f030, Func Offset: 0
	// Line 963, Address: 0x21f044, Func Offset: 0x14
	// Line 964, Address: 0x21f04c, Func Offset: 0x1c
	// Line 967, Address: 0x21f058, Func Offset: 0x28
	// Func End, Address: 0x21f06c, Func Offset: 0x3c
}

// Process__10zNMEMervynFf
// Start address: 0x21f070
void zNMEMervyn::Process(float32 dt)
{
	xMat4x3 oldMat;
	xEntFrame tmpFrame;
	// Line 894, Address: 0x21f070, Func Offset: 0
	// Line 900, Address: 0x21f09c, Func Offset: 0x2c
	// Line 894, Address: 0x21f0a0, Func Offset: 0x30
	// Line 900, Address: 0x21f0ac, Func Offset: 0x3c
	// Line 906, Address: 0x21f0b4, Func Offset: 0x44
	// Line 907, Address: 0x21f0c4, Func Offset: 0x54
	// Line 910, Address: 0x21f0d4, Func Offset: 0x64
	// Line 912, Address: 0x21f0ec, Func Offset: 0x7c
	// Line 913, Address: 0x21f0fc, Func Offset: 0x8c
	// Line 912, Address: 0x21f104, Func Offset: 0x94
	// Line 913, Address: 0x21f110, Func Offset: 0xa0
	// Line 920, Address: 0x21f144, Func Offset: 0xd4
	// Line 921, Address: 0x21f258, Func Offset: 0x1e8
	// Line 924, Address: 0x21f264, Func Offset: 0x1f4
	// Line 930, Address: 0x21f280, Func Offset: 0x210
	// Line 931, Address: 0x21f288, Func Offset: 0x218
	// Line 933, Address: 0x21f32c, Func Offset: 0x2bc
	// Line 934, Address: 0x21f334, Func Offset: 0x2c4
	// Line 935, Address: 0x21f340, Func Offset: 0x2d0
	// Line 936, Address: 0x21f348, Func Offset: 0x2d8
	// Line 937, Address: 0x21f380, Func Offset: 0x310
	// Line 942, Address: 0x21f384, Func Offset: 0x314
	// Line 956, Address: 0x21f390, Func Offset: 0x320
	// Line 920, Address: 0x21f420, Func Offset: 0x3b0
	// Line 956, Address: 0x21f428, Func Offset: 0x3b8
	// Line 920, Address: 0x21f438, Func Offset: 0x3c8
	// Line 956, Address: 0x21f43c, Func Offset: 0x3cc
	// Line 920, Address: 0x21f44c, Func Offset: 0x3dc
	// Line 956, Address: 0x21f45c, Func Offset: 0x3ec
	// Line 926, Address: 0x21f464, Func Offset: 0x3f4
	// Line 956, Address: 0x21f468, Func Offset: 0x3f8
	// Line 928, Address: 0x21f470, Func Offset: 0x400
	// Line 956, Address: 0x21f478, Func Offset: 0x408
	// Line 945, Address: 0x21f4ac, Func Offset: 0x43c
	// Line 956, Address: 0x21f4b0, Func Offset: 0x440
	// Line 951, Address: 0x21f58c, Func Offset: 0x51c
	// Line 956, Address: 0x21f590, Func Offset: 0x520
	// Line 951, Address: 0x21f5b0, Func Offset: 0x540
	// Line 956, Address: 0x21f5b4, Func Offset: 0x544
	// Line 957, Address: 0x21f648, Func Offset: 0x5d8
	// Func End, Address: 0x21f66c, Func Offset: 0x5fc
}

// DieTheGoodDeath__10zNMEMervynFv
// Start address: 0x21f670
void zNMEMervyn::DieTheGoodDeath()
{
	// Line 887, Address: 0x21f670, Func Offset: 0
	// Line 888, Address: 0x21f680, Func Offset: 0x10
	// Line 889, Address: 0x21f700, Func Offset: 0x90
	// Line 890, Address: 0x21f7d0, Func Offset: 0x160
	// Func End, Address: 0x21f7e4, Func Offset: 0x174
}

// BUpdate__10zNMEMervynFP5xVec3
// Start address: 0x21f7f0
void zNMEMervyn::BUpdate()
{
	xMat4x3* mat_bone;
	xMat4x3* mat_root;
	xVec3 pos_bone;
	// Line 874, Address: 0x21f7f0, Func Offset: 0
	// Line 879, Address: 0x21f7f8, Func Offset: 0x8
	// Line 874, Address: 0x21f7fc, Func Offset: 0xc
	// Line 876, Address: 0x21f80c, Func Offset: 0x1c
	// Line 879, Address: 0x21f810, Func Offset: 0x20
	// Line 880, Address: 0x21f85c, Func Offset: 0x6c
	// Line 881, Address: 0x21f860, Func Offset: 0x70
	// Line 880, Address: 0x21f864, Func Offset: 0x74
	// Line 881, Address: 0x21f868, Func Offset: 0x78
	// Line 880, Address: 0x21f86c, Func Offset: 0x7c
	// Line 881, Address: 0x21f878, Func Offset: 0x88
	// Line 880, Address: 0x21f87c, Func Offset: 0x8c
	// Line 881, Address: 0x21f898, Func Offset: 0xa8
	// Line 883, Address: 0x21fdc8, Func Offset: 0x5d8
	// Func End, Address: 0x21fdd8, Func Offset: 0x5e8
}

// Reset__10zNMEMervynFv
// Start address: 0x21fde0
void zNMEMervyn::Reset()
{
	xPsyche* psy;
	zNMEGoalAfterlife* goal;
	// Line 837, Address: 0x21fde0, Func Offset: 0
	// Line 838, Address: 0x21fdf0, Func Offset: 0x10
	// Line 844, Address: 0x22009c, Func Offset: 0x2bc
	// Line 847, Address: 0x2200b0, Func Offset: 0x2d0
	// Line 857, Address: 0x2200bc, Func Offset: 0x2dc
	// Line 861, Address: 0x2200cc, Func Offset: 0x2ec
	// Line 862, Address: 0x2200d8, Func Offset: 0x2f8
	// Line 864, Address: 0x2200dc, Func Offset: 0x2fc
	// Line 866, Address: 0x2200e4, Func Offset: 0x304
	// Line 867, Address: 0x220158, Func Offset: 0x378
	// Line 869, Address: 0x2201dc, Func Offset: 0x3fc
	// Line 845, Address: 0x2201e4, Func Offset: 0x404
	// Line 869, Address: 0x2201ec, Func Offset: 0x40c
	// Line 846, Address: 0x2201f4, Func Offset: 0x414
	// Line 850, Address: 0x2201fc, Func Offset: 0x41c
	// Line 869, Address: 0x220204, Func Offset: 0x424
	// Line 853, Address: 0x22020c, Func Offset: 0x42c
	// Line 852, Address: 0x220210, Func Offset: 0x430
	// Line 853, Address: 0x220214, Func Offset: 0x434
	// Line 850, Address: 0x220218, Func Offset: 0x438
	// Line 853, Address: 0x22021c, Func Offset: 0x43c
	// Line 869, Address: 0x220220, Func Offset: 0x440
	// Line 854, Address: 0x220228, Func Offset: 0x448
	// Line 855, Address: 0x22022c, Func Offset: 0x44c
	// Line 866, Address: 0x220234, Func Offset: 0x454
	// Line 869, Address: 0x220238, Func Offset: 0x458
	// Line 870, Address: 0x220248, Func Offset: 0x468
	// Func End, Address: 0x22025c, Func Offset: 0x47c
}

// GoalPick__10zNMEMervynFP5xGoalRiR11en_trantype
// Start address: 0x220260
int32 GoalPick(int32& gid_would, en_trantype& typ_tran)
{
	int32 altered;
	// Line 785, Address: 0x220260, Func Offset: 0
	// Line 789, Address: 0x220298, Func Offset: 0x38
	// Line 791, Address: 0x2202a4, Func Offset: 0x44
	// Line 794, Address: 0x2202ac, Func Offset: 0x4c
	// Line 796, Address: 0x2202b4, Func Offset: 0x54
	// Line 799, Address: 0x2202bc, Func Offset: 0x5c
	// Line 801, Address: 0x2202c4, Func Offset: 0x64
	// Line 804, Address: 0x2202cc, Func Offset: 0x6c
	// Line 808, Address: 0x2202d4, Func Offset: 0x74
	// Line 812, Address: 0x2202dc, Func Offset: 0x7c
	// Line 814, Address: 0x2202e8, Func Offset: 0x88
	// Line 818, Address: 0x2202f0, Func Offset: 0x90
	// Line 820, Address: 0x2202fc, Func Offset: 0x9c
	// Line 824, Address: 0x220304, Func Offset: 0xa4
	// Line 825, Address: 0x220308, Func Offset: 0xa8
	// Line 824, Address: 0x22030c, Func Offset: 0xac
	// Line 826, Address: 0x220314, Func Offset: 0xb4
	// Line 829, Address: 0x22031c, Func Offset: 0xbc
	// Line 834, Address: 0x220320, Func Offset: 0xc0
	// Func End, Address: 0x220328, Func Offset: 0xc8
}

// CreateAnimTable__10zNMEMervynFP10xAnimTable
// Start address: 0x220330
xAnimTable* zNMEMervyn::CreateAnimTable(xAnimTable* table)
{
	int32 ourAnims[23];
	// Line 623, Address: 0x220330, Func Offset: 0
	// Line 629, Address: 0x220340, Func Offset: 0x10
	// Line 637, Address: 0x220348, Func Offset: 0x18
	// Line 641, Address: 0x220390, Func Offset: 0x60
	// Line 646, Address: 0x2203d8, Func Offset: 0xa8
	// Line 650, Address: 0x220420, Func Offset: 0xf0
	// Line 656, Address: 0x220468, Func Offset: 0x138
	// Line 660, Address: 0x2204b0, Func Offset: 0x180
	// Line 665, Address: 0x2204f8, Func Offset: 0x1c8
	// Line 671, Address: 0x220540, Func Offset: 0x210
	// Line 675, Address: 0x220588, Func Offset: 0x258
	// Line 679, Address: 0x2205d0, Func Offset: 0x2a0
	// Line 683, Address: 0x220618, Func Offset: 0x2e8
	// Line 688, Address: 0x220660, Func Offset: 0x330
	// Line 692, Address: 0x2206a8, Func Offset: 0x378
	// Line 698, Address: 0x2206f0, Func Offset: 0x3c0
	// Line 702, Address: 0x220738, Func Offset: 0x408
	// Line 706, Address: 0x220780, Func Offset: 0x450
	// Line 711, Address: 0x2207c8, Func Offset: 0x498
	// Line 715, Address: 0x220810, Func Offset: 0x4e0
	// Line 719, Address: 0x220858, Func Offset: 0x528
	// Line 724, Address: 0x2208a0, Func Offset: 0x570
	// Line 728, Address: 0x2208e8, Func Offset: 0x5b8
	// Line 732, Address: 0x220930, Func Offset: 0x600
	// Line 741, Address: 0x220978, Func Offset: 0x648
	// Line 761, Address: 0x2209a4, Func Offset: 0x674
	// Line 766, Address: 0x2209c8, Func Offset: 0x698
	// Line 769, Address: 0x220a10, Func Offset: 0x6e0
	// Line 773, Address: 0x220a58, Func Offset: 0x728
	// Line 776, Address: 0x220aa0, Func Offset: 0x770
	// Line 778, Address: 0x220ae8, Func Offset: 0x7b8
	// Line 629, Address: 0x220af0, Func Offset: 0x7c0
	// Line 778, Address: 0x220af4, Func Offset: 0x7c4
	// Line 779, Address: 0x220b04, Func Offset: 0x7d4
	// Func End, Address: 0x220b14, Func Offset: 0x7e4
}

// AnimPick__10zNMEMervynFi11en_npcgspotP5xGoal
// Start address: 0x220b20
uint32 zNMEMervyn::AnimPick(int32 gid, en_npcgspot gspot, xGoal* rawgoal)
{
	en_stananim idx;
	// Line 485, Address: 0x220b20, Func Offset: 0
	// Line 490, Address: 0x220bcc, Func Offset: 0xac
	// Line 491, Address: 0x220bd0, Func Offset: 0xb0
	// Line 493, Address: 0x220bd8, Func Offset: 0xb8
	// Line 495, Address: 0x220be0, Func Offset: 0xc0
	// Line 496, Address: 0x220bec, Func Offset: 0xcc
	// Line 499, Address: 0x220bf4, Func Offset: 0xd4
	// Line 502, Address: 0x220bfc, Func Offset: 0xdc
	// Line 507, Address: 0x220c04, Func Offset: 0xe4
	// Line 509, Address: 0x220c0c, Func Offset: 0xec
	// Line 510, Address: 0x220c20, Func Offset: 0x100
	// Line 513, Address: 0x220c28, Func Offset: 0x108
	// Line 515, Address: 0x220c30, Func Offset: 0x110
	// Line 516, Address: 0x220c3c, Func Offset: 0x11c
	// Line 519, Address: 0x220c44, Func Offset: 0x124
	// Line 523, Address: 0x220c4c, Func Offset: 0x12c
	// Line 525, Address: 0x220c54, Func Offset: 0x134
	// Line 528, Address: 0x220c60, Func Offset: 0x140
	// Line 529, Address: 0x220c6c, Func Offset: 0x14c
	// Line 532, Address: 0x220c74, Func Offset: 0x154
	// Line 535, Address: 0x220c7c, Func Offset: 0x15c
	// Line 537, Address: 0x220c84, Func Offset: 0x164
	// Line 539, Address: 0x220c90, Func Offset: 0x170
	// Line 540, Address: 0x220c9c, Func Offset: 0x17c
	// Line 543, Address: 0x220ca4, Func Offset: 0x184
	// Line 546, Address: 0x220cac, Func Offset: 0x18c
	// Line 548, Address: 0x220cb4, Func Offset: 0x194
	// Line 550, Address: 0x220cc0, Func Offset: 0x1a0
	// Line 551, Address: 0x220ccc, Func Offset: 0x1ac
	// Line 554, Address: 0x220cd4, Func Offset: 0x1b4
	// Line 560, Address: 0x220cdc, Func Offset: 0x1bc
	// Line 562, Address: 0x220ce4, Func Offset: 0x1c4
	// Line 564, Address: 0x220cf0, Func Offset: 0x1d0
	// Line 566, Address: 0x220cf8, Func Offset: 0x1d8
	// Line 569, Address: 0x220d04, Func Offset: 0x1e4
	// Line 575, Address: 0x220d0c, Func Offset: 0x1ec
	// Line 577, Address: 0x220d14, Func Offset: 0x1f4
	// Line 579, Address: 0x220d20, Func Offset: 0x200
	// Line 581, Address: 0x220d28, Func Offset: 0x208
	// Line 584, Address: 0x220d34, Func Offset: 0x214
	// Line 589, Address: 0x220d3c, Func Offset: 0x21c
	// Line 590, Address: 0x220d50, Func Offset: 0x230
	// Line 592, Address: 0x220d5c, Func Offset: 0x23c
	// Line 594, Address: 0x220d64, Func Offset: 0x244
	// Line 596, Address: 0x220d70, Func Offset: 0x250
	// Line 598, Address: 0x220d78, Func Offset: 0x258
	// Line 600, Address: 0x220d80, Func Offset: 0x260
	// Line 602, Address: 0x220d88, Func Offset: 0x268
	// Line 604, Address: 0x220d94, Func Offset: 0x274
	// Line 606, Address: 0x220d9c, Func Offset: 0x27c
	// Line 607, Address: 0x220da8, Func Offset: 0x288
	// Line 619, Address: 0x220dac, Func Offset: 0x28c
	// Line 494, Address: 0x220dc4, Func Offset: 0x2a4
	// Line 524, Address: 0x220dcc, Func Offset: 0x2ac
	// Line 527, Address: 0x220dd4, Func Offset: 0x2b4
	// Line 536, Address: 0x220ddc, Func Offset: 0x2bc
	// Line 538, Address: 0x220de4, Func Offset: 0x2c4
	// Line 547, Address: 0x220dec, Func Offset: 0x2cc
	// Line 549, Address: 0x220df4, Func Offset: 0x2d4
	// Line 561, Address: 0x220dfc, Func Offset: 0x2dc
	// Line 563, Address: 0x220e04, Func Offset: 0x2e4
	// Line 565, Address: 0x220e0c, Func Offset: 0x2ec
	// Line 576, Address: 0x220e14, Func Offset: 0x2f4
	// Line 578, Address: 0x220e1c, Func Offset: 0x2fc
	// Line 580, Address: 0x220e24, Func Offset: 0x304
	// Line 591, Address: 0x220e2c, Func Offset: 0x30c
	// Line 593, Address: 0x220e34, Func Offset: 0x314
	// Line 595, Address: 0x220e3c, Func Offset: 0x31c
	// Line 601, Address: 0x220e44, Func Offset: 0x324
	// Line 603, Address: 0x220e4c, Func Offset: 0x32c
	// Line 605, Address: 0x220e54, Func Offset: 0x334
	// Line 620, Address: 0x220e5c, Func Offset: 0x33c
	// Func End, Address: 0x220e64, Func Offset: 0x344
}

// MervMainBrain__10zNMEMervynFv
// Start address: 0x220e70
void zNMEMervyn::MervMainBrain()
{
	xBehaveMgr* bmgr;
	xPsyche* psy;
	// Line 406, Address: 0x220e70, Func Offset: 0
	// Line 408, Address: 0x220e7c, Func Offset: 0xc
	// Line 409, Address: 0x220e84, Func Offset: 0x14
	// Line 412, Address: 0x220e98, Func Offset: 0x28
	// Line 417, Address: 0x220e9c, Func Offset: 0x2c
	// Line 420, Address: 0x220ea4, Func Offset: 0x34
	// Line 421, Address: 0x220ecc, Func Offset: 0x5c
	// Line 422, Address: 0x220ef4, Func Offset: 0x84
	// Line 425, Address: 0x220f08, Func Offset: 0x98
	// Line 426, Address: 0x220f1c, Func Offset: 0xac
	// Line 430, Address: 0x220f30, Func Offset: 0xc0
	// Line 431, Address: 0x220f44, Func Offset: 0xd4
	// Line 432, Address: 0x220f58, Func Offset: 0xe8
	// Line 435, Address: 0x220f6c, Func Offset: 0xfc
	// Line 436, Address: 0x220f80, Func Offset: 0x110
	// Line 437, Address: 0x220f94, Func Offset: 0x124
	// Line 438, Address: 0x220fa8, Func Offset: 0x138
	// Line 440, Address: 0x220fbc, Func Offset: 0x14c
	// Line 443, Address: 0x220fc4, Func Offset: 0x154
	// Line 446, Address: 0x220fd0, Func Offset: 0x160
	// Func End, Address: 0x220fe0, Func Offset: 0x170
}

// SelfDestroy__10zNMEMervynFv
// Start address: 0x220fe0
void zNMEMervyn::SelfDestroy()
{
	xBehaveMgr* bmgr;
	// Line 395, Address: 0x220fe0, Func Offset: 0
	// Line 396, Address: 0x220fec, Func Offset: 0xc
	// Line 398, Address: 0x220ff4, Func Offset: 0x14
	// Line 401, Address: 0x221000, Func Offset: 0x20
	// Line 403, Address: 0x221020, Func Offset: 0x40
	// Func End, Address: 0x221030, Func Offset: 0x50
}

// SelfSetup__10zNMEMervynFv
// Start address: 0x221030
void zNMEMervyn::SelfSetup()
{
	// Line 384, Address: 0x221030, Func Offset: 0
	// Line 386, Address: 0x221040, Func Offset: 0x10
	// Line 389, Address: 0x221048, Func Offset: 0x18
	// Line 392, Address: 0x2210c0, Func Offset: 0x90
	// Func End, Address: 0x2210d4, Func Offset: 0xa4
}

// Setup__10zNMEMervynFv
// Start address: 0x2210e0
void zNMEMervyn::Setup()
{
	// Line 373, Address: 0x2210e0, Func Offset: 0
	// Line 374, Address: 0x2210e4, Func Offset: 0x4
	// Line 373, Address: 0x2210e8, Func Offset: 0x8
	// Line 374, Address: 0x2210ec, Func Offset: 0xc
	// Line 373, Address: 0x2210f0, Func Offset: 0x10
	// Line 374, Address: 0x2210f4, Func Offset: 0x14
	// Line 376, Address: 0x22114c, Func Offset: 0x6c
	// Line 378, Address: 0x221194, Func Offset: 0xb4
	// Line 380, Address: 0x2211b0, Func Offset: 0xd0
	// Line 376, Address: 0x2211b8, Func Offset: 0xd8
	// Line 380, Address: 0x2211c0, Func Offset: 0xe0
	// Line 376, Address: 0x2211c8, Func Offset: 0xe8
	// Line 380, Address: 0x2211cc, Func Offset: 0xec
	// Line 381, Address: 0x221210, Func Offset: 0x130
	// Func End, Address: 0x22121c, Func Offset: 0x13c
}

// Init__10zNMEMervynFP9xEntAsset
// Start address: 0x221220
void zNMEMervyn::Init(xEntAsset* asset)
{
	// Line 357, Address: 0x221220, Func Offset: 0
	// Line 358, Address: 0x22124c, Func Offset: 0x2c
	// Line 362, Address: 0x2212e0, Func Offset: 0xc0
	// Line 358, Address: 0x2212e4, Func Offset: 0xc4
	// Line 362, Address: 0x2212e8, Func Offset: 0xc8
	// Line 358, Address: 0x2212fc, Func Offset: 0xdc
	// Line 362, Address: 0x221300, Func Offset: 0xe0
	// Line 358, Address: 0x221304, Func Offset: 0xe4
	// Line 362, Address: 0x221308, Func Offset: 0xe8
	// Line 358, Address: 0x22130c, Func Offset: 0xec
	// Line 362, Address: 0x221310, Func Offset: 0xf0
	// Line 358, Address: 0x221314, Func Offset: 0xf4
	// Line 362, Address: 0x221318, Func Offset: 0xf8
	// Line 358, Address: 0x221320, Func Offset: 0x100
	// Line 360, Address: 0x221430, Func Offset: 0x210
	// Line 362, Address: 0x221434, Func Offset: 0x214
	// Line 363, Address: 0x221480, Func Offset: 0x260
	// Line 365, Address: 0x221484, Func Offset: 0x264
	// Line 363, Address: 0x22148c, Func Offset: 0x26c
	// Line 365, Address: 0x221490, Func Offset: 0x270
	// Line 366, Address: 0x2214a0, Func Offset: 0x280
	// Line 367, Address: 0x2214b8, Func Offset: 0x298
	// Line 369, Address: 0x2214d0, Func Offset: 0x2b0
	// Line 358, Address: 0x2214dc, Func Offset: 0x2bc
	// Line 369, Address: 0x2214e0, Func Offset: 0x2c0
	// Line 358, Address: 0x2214e8, Func Offset: 0x2c8
	// Line 369, Address: 0x2214f4, Func Offset: 0x2d4
	// Line 362, Address: 0x221504, Func Offset: 0x2e4
	// Line 369, Address: 0x22150c, Func Offset: 0x2ec
	// Line 362, Address: 0x22151c, Func Offset: 0x2fc
	// Line 369, Address: 0x221520, Func Offset: 0x300
	// Line 365, Address: 0x221530, Func Offset: 0x310
	// Line 369, Address: 0x221534, Func Offset: 0x314
	// Line 366, Address: 0x221544, Func Offset: 0x324
	// Line 369, Address: 0x221548, Func Offset: 0x328
	// Line 367, Address: 0x221558, Func Offset: 0x338
	// Line 369, Address: 0x22155c, Func Offset: 0x33c
	// Line 370, Address: 0x22156c, Func Offset: 0x34c
	// Func End, Address: 0x221594, Func Offset: 0x374
}

// DfltVulnFlags__10zNMEMervynFv
// Start address: 0x2215a0
int32 zNMEMervyn::DfltVulnFlags()
{
	// Line 353, Address: 0x2215a0, Func Offset: 0
	// Line 354, Address: 0x2215a4, Func Offset: 0x4
	// Func End, Address: 0x2215ac, Func Offset: 0xc
}

// CreateConfig__10zNMEMervynFPCc
// Start address: 0x2215b0
void zNMEMervyn::CreateConfig()
{
	en_nmevar vidx;
	// Line 233, Address: 0x2215b0, Func Offset: 0
	// Line 234, Address: 0x2215b4, Func Offset: 0x4
	// Line 233, Address: 0x2215b8, Func Offset: 0x8
	// Line 234, Address: 0x2215bc, Func Offset: 0xc
	// Line 233, Address: 0x2215c0, Func Offset: 0x10
	// Line 234, Address: 0x2215c4, Func Offset: 0x14
	// Line 237, Address: 0x2215e4, Func Offset: 0x34
	// Line 238, Address: 0x2215ec, Func Offset: 0x3c
	// Line 249, Address: 0x221604, Func Offset: 0x54
	// Func End, Address: 0x221614, Func Offset: 0x64
}

