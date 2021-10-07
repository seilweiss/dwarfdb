



void EvadeTrail(zNMECommon* npc, float32 dt);
void EmergeGround(zNMECommon* npc, float32 dt);
void EmergeFount(zNMECommon* npc, float32 dt);
int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
int32 Exit();
int32 Enter();
int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
void PopGunUpdate(zNMEPopper* npc);
int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
int32 Enter();
int32 ChkTranCases(zNMEPopper* npc, int32& nextgoal, en_trantype& trantype);
int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
int32 Enter();
int32 ChkAware(zNMEPopper* npc, int32& nextgoal, en_trantype& trantype);
int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
void LidUpdate(float32 dt);
xEnt* LidLocate(zMovePoint* mvpt);
zMovePoint* PickEvadePoint(zMovePoint* nav_from);
int32 PopMailDamage(NMEDamageInfo* dmgmail);
int32 TypeHandleMail(NMEMsg* mail);
float32 HealthRatio();
en_vis VisionTarget(xEnt* ent);
void ProcessInvis(float32 dt);
void Process(float32 dt);
void BUpdate(xVec3* pos);
void Reset();
void Setup();
void Init(xEntAsset* asset);
xAnimTable* CreateAnimTable(xAnimTable* table);
int32 GoalPick(int32& gid_would);
uint32 AnimPick(int32 gid, en_npcgspot gspot);
void SelfSetup();
int32 DfltVulnFlags();
void CreateConfig();

// EvadeTrail__16zNMEGoalPopEvadeFP10zNMECommonf
// Start address: 0x216640
void zNMEGoalPopEvade::EvadeTrail(zNMECommon* npc, float32 dt)
{
	ExhaustEmitter* exhaust;
	float32 delay;
	en_npctyp ntyp;
	// Line 2583, Address: 0x216640, Func Offset: 0
	// Line 2587, Address: 0x216654, Func Offset: 0x14
	// Line 2588, Address: 0x216678, Func Offset: 0x38
	// Line 2594, Address: 0x21669c, Func Offset: 0x5c
	// Line 2595, Address: 0x2166a0, Func Offset: 0x60
	// Line 2597, Address: 0x2166c8, Func Offset: 0x88
	// Line 2598, Address: 0x2166f4, Func Offset: 0xb4
	// Line 2599, Address: 0x2166f8, Func Offset: 0xb8
	// Line 2601, Address: 0x216700, Func Offset: 0xc0
	// Line 2602, Address: 0x21672c, Func Offset: 0xec
	// Line 2603, Address: 0x216730, Func Offset: 0xf0
	// Line 2605, Address: 0x216738, Func Offset: 0xf8
	// Line 2606, Address: 0x216764, Func Offset: 0x124
	// Line 2607, Address: 0x216768, Func Offset: 0x128
	// Line 2610, Address: 0x216770, Func Offset: 0x130
	// Line 2611, Address: 0x216798, Func Offset: 0x158
	// Line 2615, Address: 0x2167a0, Func Offset: 0x160
	// Line 2617, Address: 0x2167a4, Func Offset: 0x164
	// Line 2615, Address: 0x2167ac, Func Offset: 0x16c
	// Line 2617, Address: 0x2167b0, Func Offset: 0x170
	// Line 2615, Address: 0x2167c0, Func Offset: 0x180
	// Line 2617, Address: 0x2167c4, Func Offset: 0x184
	// Line 2620, Address: 0x2167d4, Func Offset: 0x194
	// Func End, Address: 0x2167e0, Func Offset: 0x1a0
}

// EmergeGround__16zNMEGoalPopEvadeFP10zNMECommonf
// Start address: 0x2167e0
void zNMEGoalPopEvade::EmergeGround(zNMECommon* npc, float32 dt)
{
	PopGasEmitter* popgas;
	float32 delay;
	en_npctyp ntyp;
	// Line 2541, Address: 0x2167e0, Func Offset: 0
	// Line 2545, Address: 0x2167e4, Func Offset: 0x4
	// Line 2541, Address: 0x2167e8, Func Offset: 0x8
	// Line 2545, Address: 0x2167ec, Func Offset: 0xc
	// Line 2541, Address: 0x2167f0, Func Offset: 0x10
	// Line 2545, Address: 0x2167f8, Func Offset: 0x18
	// Line 2546, Address: 0x216810, Func Offset: 0x30
	// Line 2553, Address: 0x216834, Func Offset: 0x54
	// Line 2554, Address: 0x216838, Func Offset: 0x58
	// Line 2556, Address: 0x216860, Func Offset: 0x80
	// Line 2557, Address: 0x21688c, Func Offset: 0xac
	// Line 2558, Address: 0x216890, Func Offset: 0xb0
	// Line 2560, Address: 0x216898, Func Offset: 0xb8
	// Line 2561, Address: 0x2168c4, Func Offset: 0xe4
	// Line 2562, Address: 0x2168c8, Func Offset: 0xe8
	// Line 2564, Address: 0x2168d0, Func Offset: 0xf0
	// Line 2565, Address: 0x2168fc, Func Offset: 0x11c
	// Line 2566, Address: 0x216900, Func Offset: 0x120
	// Line 2569, Address: 0x216908, Func Offset: 0x128
	// Line 2570, Address: 0x216930, Func Offset: 0x150
	// Line 2574, Address: 0x216938, Func Offset: 0x158
	// Line 2576, Address: 0x21693c, Func Offset: 0x15c
	// Line 2579, Address: 0x216954, Func Offset: 0x174
	// Func End, Address: 0x216960, Func Offset: 0x180
}

// EmergeFount__16zNMEGoalPopEvadeFP10zNMECommonf
// Start address: 0x216960
void zNMEGoalPopEvade::EmergeFount(zNMECommon* npc, float32 dt)
{
	PopGasEmitter* popgas;
	float32 delay;
	en_npctyp ntyp;
	// Line 2500, Address: 0x216960, Func Offset: 0
	// Line 2504, Address: 0x216964, Func Offset: 0x4
	// Line 2500, Address: 0x216968, Func Offset: 0x8
	// Line 2504, Address: 0x21696c, Func Offset: 0xc
	// Line 2500, Address: 0x216970, Func Offset: 0x10
	// Line 2504, Address: 0x216978, Func Offset: 0x18
	// Line 2505, Address: 0x216990, Func Offset: 0x30
	// Line 2512, Address: 0x2169b4, Func Offset: 0x54
	// Line 2513, Address: 0x2169b8, Func Offset: 0x58
	// Line 2515, Address: 0x2169e0, Func Offset: 0x80
	// Line 2516, Address: 0x216a0c, Func Offset: 0xac
	// Line 2517, Address: 0x216a10, Func Offset: 0xb0
	// Line 2519, Address: 0x216a18, Func Offset: 0xb8
	// Line 2520, Address: 0x216a44, Func Offset: 0xe4
	// Line 2521, Address: 0x216a48, Func Offset: 0xe8
	// Line 2523, Address: 0x216a50, Func Offset: 0xf0
	// Line 2524, Address: 0x216a7c, Func Offset: 0x11c
	// Line 2525, Address: 0x216a80, Func Offset: 0x120
	// Line 2528, Address: 0x216a88, Func Offset: 0x128
	// Line 2529, Address: 0x216ab0, Func Offset: 0x150
	// Line 2533, Address: 0x216ab8, Func Offset: 0x158
	// Line 2535, Address: 0x216abc, Func Offset: 0x15c
	// Line 2538, Address: 0x216ad4, Func Offset: 0x174
	// Func End, Address: 0x216ae0, Func Offset: 0x180
}

// Process__16zNMEGoalPopEvadeFP11en_trantypefPv
// Start address: 0x216ae0
int32 zNMEGoalPopEvade::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	zNMEPopper* npc;
	int32 nextgoal;
	NMECfgPopper* cfg;
	float32 tym_animPlusTime;
	xVec3 pos_goto;
	int32 arrived;
	// Line 2432, Address: 0x216ae0, Func Offset: 0
	// Line 2433, Address: 0x216b1c, Func Offset: 0x3c
	// Line 2434, Address: 0x216b24, Func Offset: 0x44
	// Line 2436, Address: 0x216b28, Func Offset: 0x48
	// Line 2439, Address: 0x216b34, Func Offset: 0x54
	// Line 2441, Address: 0x216b54, Func Offset: 0x74
	// Line 2444, Address: 0x216b78, Func Offset: 0x98
	// Line 2455, Address: 0x216b88, Func Offset: 0xa8
	// Line 2457, Address: 0x216b98, Func Offset: 0xb8
	// Line 2461, Address: 0x216bbc, Func Offset: 0xdc
	// Line 2462, Address: 0x216bc0, Func Offset: 0xe0
	// Line 2461, Address: 0x216bc8, Func Offset: 0xe8
	// Line 2462, Address: 0x216bcc, Func Offset: 0xec
	// Line 2461, Address: 0x216bd4, Func Offset: 0xf4
	// Line 2462, Address: 0x216bf0, Func Offset: 0x110
	// Line 2464, Address: 0x216bfc, Func Offset: 0x11c
	// Line 2465, Address: 0x216c04, Func Offset: 0x124
	// Line 2466, Address: 0x216c2c, Func Offset: 0x14c
	// Line 2467, Address: 0x216c38, Func Offset: 0x158
	// Line 2468, Address: 0x216c5c, Func Offset: 0x17c
	// Line 2472, Address: 0x216c74, Func Offset: 0x194
	// Line 2475, Address: 0x216c84, Func Offset: 0x1a4
	// Line 2494, Address: 0x216c98, Func Offset: 0x1b8
	// Line 2496, Address: 0x216c9c, Func Offset: 0x1bc
	// Line 2494, Address: 0x216cac, Func Offset: 0x1cc
	// Line 2496, Address: 0x216cc4, Func Offset: 0x1e4
	// Line 2439, Address: 0x216d30, Func Offset: 0x250
	// Line 2496, Address: 0x216d38, Func Offset: 0x258
	// Line 2441, Address: 0x216d50, Func Offset: 0x270
	// Line 2446, Address: 0x216d58, Func Offset: 0x278
	// Line 2496, Address: 0x216d60, Func Offset: 0x280
	// Line 2448, Address: 0x216d6c, Func Offset: 0x28c
	// Line 2496, Address: 0x216d74, Func Offset: 0x294
	// Line 2448, Address: 0x216d78, Func Offset: 0x298
	// Line 2496, Address: 0x216d7c, Func Offset: 0x29c
	// Line 2448, Address: 0x216dbc, Func Offset: 0x2dc
	// Line 2496, Address: 0x216dc0, Func Offset: 0x2e0
	// Line 2448, Address: 0x216ddc, Func Offset: 0x2fc
	// Line 2496, Address: 0x216de4, Func Offset: 0x304
	// Line 2448, Address: 0x216e18, Func Offset: 0x338
	// Line 2496, Address: 0x216e24, Func Offset: 0x344
	// Line 2448, Address: 0x216e30, Func Offset: 0x350
	// Line 2496, Address: 0x216e34, Func Offset: 0x354
	// Line 2450, Address: 0x216e3c, Func Offset: 0x35c
	// Line 2496, Address: 0x216e40, Func Offset: 0x360
	// Line 2451, Address: 0x216e54, Func Offset: 0x374
	// Line 2496, Address: 0x216e58, Func Offset: 0x378
	// Line 2451, Address: 0x216e6c, Func Offset: 0x38c
	// Line 2454, Address: 0x216e74, Func Offset: 0x394
	// Line 2448, Address: 0x216e7c, Func Offset: 0x39c
	// Line 2496, Address: 0x216e98, Func Offset: 0x3b8
	// Line 2448, Address: 0x216e9c, Func Offset: 0x3bc
	// Line 2496, Address: 0x216ea0, Func Offset: 0x3c0
	// Line 2448, Address: 0x216ea8, Func Offset: 0x3c8
	// Line 2496, Address: 0x216eb0, Func Offset: 0x3d0
	// Line 2466, Address: 0x216ecc, Func Offset: 0x3ec
	// Line 2496, Address: 0x216ed0, Func Offset: 0x3f0
	// Line 2480, Address: 0x216eec, Func Offset: 0x40c
	// Line 2496, Address: 0x216ef4, Func Offset: 0x414
	// Line 2481, Address: 0x216efc, Func Offset: 0x41c
	// Line 2496, Address: 0x216f04, Func Offset: 0x424
	// Line 2483, Address: 0x216f10, Func Offset: 0x430
	// Line 2496, Address: 0x216f18, Func Offset: 0x438
	// Line 2483, Address: 0x216f1c, Func Offset: 0x43c
	// Line 2496, Address: 0x216f20, Func Offset: 0x440
	// Line 2483, Address: 0x216f60, Func Offset: 0x480
	// Line 2496, Address: 0x216f64, Func Offset: 0x484
	// Line 2483, Address: 0x216f80, Func Offset: 0x4a0
	// Line 2496, Address: 0x216f88, Func Offset: 0x4a8
	// Line 2483, Address: 0x216fbc, Func Offset: 0x4dc
	// Line 2496, Address: 0x216fc8, Func Offset: 0x4e8
	// Line 2483, Address: 0x216fd4, Func Offset: 0x4f4
	// Line 2496, Address: 0x216fd8, Func Offset: 0x4f8
	// Line 2484, Address: 0x216fe0, Func Offset: 0x500
	// Line 2496, Address: 0x216fe4, Func Offset: 0x504
	// Line 2487, Address: 0x216fec, Func Offset: 0x50c
	// Line 2496, Address: 0x216ff0, Func Offset: 0x510
	// Line 2487, Address: 0x216ff4, Func Offset: 0x514
	// Line 2486, Address: 0x216ff8, Func Offset: 0x518
	// Line 2487, Address: 0x216ffc, Func Offset: 0x51c
	// Line 2486, Address: 0x217000, Func Offset: 0x520
	// Line 2496, Address: 0x217004, Func Offset: 0x524
	// Line 2488, Address: 0x217018, Func Offset: 0x538
	// Line 2483, Address: 0x217020, Func Offset: 0x540
	// Line 2496, Address: 0x21703c, Func Offset: 0x55c
	// Line 2483, Address: 0x217040, Func Offset: 0x560
	// Line 2496, Address: 0x217044, Func Offset: 0x564
	// Line 2483, Address: 0x21704c, Func Offset: 0x56c
	// Line 2496, Address: 0x217054, Func Offset: 0x574
	// Line 2497, Address: 0x217064, Func Offset: 0x584
	// Func End, Address: 0x217098, Func Offset: 0x5b8
}

// Exit__16zNMEGoalPopEvadeFfPv
// Start address: 0x2170a0
int32 zNMEGoalPopEvade::Exit()
{
	zNMEPopper* npc;
	// Line 2423, Address: 0x2170a0, Func Offset: 0
	// Line 2424, Address: 0x2170ac, Func Offset: 0xc
	// Line 2425, Address: 0x2170b4, Func Offset: 0x14
	// Line 2426, Address: 0x2170c8, Func Offset: 0x28
	// Line 2427, Address: 0x2170e8, Func Offset: 0x48
	// Line 2429, Address: 0x217154, Func Offset: 0xb4
	// Line 2428, Address: 0x217158, Func Offset: 0xb8
	// Line 2429, Address: 0x21715c, Func Offset: 0xbc
	// Func End, Address: 0x217168, Func Offset: 0xc8
}

// Enter__16zNMEGoalPopEvadeFfPv
// Start address: 0x217180
int32 zNMEGoalPopEvade::Enter()
{
	zNMEPopper* npc;
	zMovePoint* mvpt;
	// Line 2389, Address: 0x217180, Func Offset: 0
	// Line 2390, Address: 0x217194, Func Offset: 0x14
	// Line 2392, Address: 0x21719c, Func Offset: 0x1c
	// Line 2404, Address: 0x2171a8, Func Offset: 0x28
	// Line 2412, Address: 0x2171b8, Func Offset: 0x38
	// Line 2404, Address: 0x2171bc, Func Offset: 0x3c
	// Line 2417, Address: 0x2171c0, Func Offset: 0x40
	// Line 2404, Address: 0x2171c4, Func Offset: 0x44
	// Line 2406, Address: 0x2171c8, Func Offset: 0x48
	// Line 2417, Address: 0x2171cc, Func Offset: 0x4c
	// Line 2406, Address: 0x2171d0, Func Offset: 0x50
	// Line 2407, Address: 0x2171d8, Func Offset: 0x58
	// Line 2408, Address: 0x2171dc, Func Offset: 0x5c
	// Line 2409, Address: 0x2171e0, Func Offset: 0x60
	// Line 2410, Address: 0x2171e4, Func Offset: 0x64
	// Line 2412, Address: 0x2171e8, Func Offset: 0x68
	// Line 2413, Address: 0x2171ec, Func Offset: 0x6c
	// Line 2414, Address: 0x2171f0, Func Offset: 0x70
	// Line 2415, Address: 0x2171f4, Func Offset: 0x74
	// Line 2417, Address: 0x217214, Func Offset: 0x94
	// Line 2419, Address: 0x21723c, Func Offset: 0xbc
	// Line 2394, Address: 0x217270, Func Offset: 0xf0
	// Line 2419, Address: 0x217274, Func Offset: 0xf4
	// Line 2420, Address: 0x2172f4, Func Offset: 0x174
	// Func End, Address: 0x21730c, Func Offset: 0x18c
}

// Process__16zNMEGoalPopWoundFP11en_trantypefPv
// Start address: 0x217310
int32 zNMEGoalPopWound::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	zNMEPopper* npc;
	zMovePoint* mvpt;
	// Line 2359, Address: 0x217310, Func Offset: 0
	// Line 2360, Address: 0x217328, Func Offset: 0x18
	// Line 2362, Address: 0x21733c, Func Offset: 0x2c
	// Line 2363, Address: 0x217340, Func Offset: 0x30
	// Line 2365, Address: 0x21734c, Func Offset: 0x3c
	// Line 2366, Address: 0x217374, Func Offset: 0x64
	// Line 2373, Address: 0x217380, Func Offset: 0x70
	// Line 2374, Address: 0x21738c, Func Offset: 0x7c
	// Line 2375, Address: 0x2173a8, Func Offset: 0x98
	// Line 2376, Address: 0x2173ac, Func Offset: 0x9c
	// Line 2375, Address: 0x2173b0, Func Offset: 0xa0
	// Line 2376, Address: 0x2173b4, Func Offset: 0xa4
	// Line 2363, Address: 0x2173d4, Func Offset: 0xc4
	// Line 2376, Address: 0x2173dc, Func Offset: 0xcc
	// Line 2367, Address: 0x2173ec, Func Offset: 0xdc
	// Line 2376, Address: 0x2173f0, Func Offset: 0xe0
	// Line 2368, Address: 0x2173f4, Func Offset: 0xe4
	// Line 2376, Address: 0x2173f8, Func Offset: 0xe8
	// Line 2369, Address: 0x2173fc, Func Offset: 0xec
	// Line 2380, Address: 0x217410, Func Offset: 0x100
	// Line 2381, Address: 0x217460, Func Offset: 0x150
	// Func End, Address: 0x217478, Func Offset: 0x168
}

// PopGunUpdate__17zNMEGoalPopAttackFP10zNMEPopperf
// Start address: 0x217480
void zNMEGoalPopAttack::PopGunUpdate(zNMEPopper* npc)
{
	float32 tym_animCurr;
	xVec3 pos_launch;
	NMECfgPopper* cfg;
	xVec3 dir_aim;
	xVec3 dir_side;
	xVec3 dir_plyr;
	float32 dst_farout;
	float32 rad_lr;
	float32 rad_ud;
	float32 f_salvoSeg;
	float32 inc_side;
	float32 spd_bonus;
	float32 spd_proj;
	int32 num;
	int32 idx_ofSoundMaker;
	int32 i;
	zNMEHazard* haz;
	float32 dst_side;
	xVec3 pos_tgt;
	// Line 2232, Address: 0x217480, Func Offset: 0
	// Line 2233, Address: 0x2174dc, Func Offset: 0x5c
	// Line 2235, Address: 0x2174e8, Func Offset: 0x68
	// Line 2240, Address: 0x2174fc, Func Offset: 0x7c
	// Line 2239, Address: 0x217508, Func Offset: 0x88
	// Line 2240, Address: 0x217514, Func Offset: 0x94
	// Line 2245, Address: 0x217520, Func Offset: 0xa0
	// Line 2240, Address: 0x217524, Func Offset: 0xa4
	// Line 2245, Address: 0x217528, Func Offset: 0xa8
	// Line 2244, Address: 0x217530, Func Offset: 0xb0
	// Line 2245, Address: 0x217538, Func Offset: 0xb8
	// Line 2244, Address: 0x217540, Func Offset: 0xc0
	// Line 2245, Address: 0x217548, Func Offset: 0xc8
	// Line 2244, Address: 0x217554, Func Offset: 0xd4
	// Line 2245, Address: 0x21755c, Func Offset: 0xdc
	// Line 2246, Address: 0x21757c, Func Offset: 0xfc
	// Line 2247, Address: 0x2175c4, Func Offset: 0x144
	// Line 2255, Address: 0x2175d0, Func Offset: 0x150
	// Line 2247, Address: 0x2175d4, Func Offset: 0x154
	// Line 2255, Address: 0x2175d8, Func Offset: 0x158
	// Line 2247, Address: 0x2175dc, Func Offset: 0x15c
	// Line 2255, Address: 0x2175e0, Func Offset: 0x160
	// Line 2250, Address: 0x2175ec, Func Offset: 0x16c
	// Line 2256, Address: 0x2175f0, Func Offset: 0x170
	// Line 2247, Address: 0x2175f4, Func Offset: 0x174
	// Line 2257, Address: 0x2175f8, Func Offset: 0x178
	// Line 2255, Address: 0x217604, Func Offset: 0x184
	// Line 2247, Address: 0x217608, Func Offset: 0x188
	// Line 2255, Address: 0x217614, Func Offset: 0x194
	// Line 2247, Address: 0x217620, Func Offset: 0x1a0
	// Line 2255, Address: 0x21762c, Func Offset: 0x1ac
	// Line 2247, Address: 0x217630, Func Offset: 0x1b0
	// Line 2255, Address: 0x217634, Func Offset: 0x1b4
	// Line 2247, Address: 0x21763c, Func Offset: 0x1bc
	// Line 2255, Address: 0x217644, Func Offset: 0x1c4
	// Line 2247, Address: 0x21765c, Func Offset: 0x1dc
	// Line 2255, Address: 0x217660, Func Offset: 0x1e0
	// Line 2256, Address: 0x217690, Func Offset: 0x210
	// Line 2255, Address: 0x217694, Func Offset: 0x214
	// Line 2256, Address: 0x21769c, Func Offset: 0x21c
	// Line 2257, Address: 0x2176b4, Func Offset: 0x234
	// Line 2258, Address: 0x2176c0, Func Offset: 0x240
	// Line 2260, Address: 0x2176dc, Func Offset: 0x25c
	// Line 2262, Address: 0x2176e8, Func Offset: 0x268
	// Line 2260, Address: 0x2176ec, Func Offset: 0x26c
	// Line 2262, Address: 0x2176f0, Func Offset: 0x270
	// Line 2260, Address: 0x2176f4, Func Offset: 0x274
	// Line 2262, Address: 0x217718, Func Offset: 0x298
	// Line 2260, Address: 0x217724, Func Offset: 0x2a4
	// Line 2262, Address: 0x21772c, Func Offset: 0x2ac
	// Line 2263, Address: 0x217754, Func Offset: 0x2d4
	// Line 2269, Address: 0x217778, Func Offset: 0x2f8
	// Line 2263, Address: 0x21777c, Func Offset: 0x2fc
	// Line 2265, Address: 0x217788, Func Offset: 0x308
	// Line 2268, Address: 0x2177a4, Func Offset: 0x324
	// Line 2265, Address: 0x2177a8, Func Offset: 0x328
	// Line 2272, Address: 0x2177ac, Func Offset: 0x32c
	// Line 2265, Address: 0x2177b4, Func Offset: 0x334
	// Line 2269, Address: 0x2177bc, Func Offset: 0x33c
	// Line 2265, Address: 0x2177c0, Func Offset: 0x340
	// Line 2272, Address: 0x2177c8, Func Offset: 0x348
	// Line 2269, Address: 0x2177cc, Func Offset: 0x34c
	// Line 2272, Address: 0x2177d0, Func Offset: 0x350
	// Line 2273, Address: 0x2177ec, Func Offset: 0x36c
	// Line 2276, Address: 0x217814, Func Offset: 0x394
	// Line 2273, Address: 0x217818, Func Offset: 0x398
	// Line 2276, Address: 0x21781c, Func Offset: 0x39c
	// Line 2281, Address: 0x217824, Func Offset: 0x3a4
	// Line 2273, Address: 0x217828, Func Offset: 0x3a8
	// Line 2276, Address: 0x217834, Func Offset: 0x3b4
	// Line 2281, Address: 0x217838, Func Offset: 0x3b8
	// Line 2282, Address: 0x217848, Func Offset: 0x3c8
	// Line 2283, Address: 0x217884, Func Offset: 0x404
	// Line 2284, Address: 0x217890, Func Offset: 0x410
	// Line 2286, Address: 0x217898, Func Offset: 0x418
	// Line 2287, Address: 0x2178f8, Func Offset: 0x478
	// Line 2291, Address: 0x217900, Func Offset: 0x480
	// Line 2292, Address: 0x217908, Func Offset: 0x488
	// Line 2294, Address: 0x217914, Func Offset: 0x494
	// Line 2296, Address: 0x217928, Func Offset: 0x4a8
	// Line 2308, Address: 0x217964, Func Offset: 0x4e4
	// Line 2296, Address: 0x217970, Func Offset: 0x4f0
	// Line 2297, Address: 0x2179a8, Func Offset: 0x528
	// Line 2296, Address: 0x2179ac, Func Offset: 0x52c
	// Line 2297, Address: 0x2179bc, Func Offset: 0x53c
	// Line 2296, Address: 0x2179c8, Func Offset: 0x548
	// Line 2298, Address: 0x2179d0, Func Offset: 0x550
	// Line 2297, Address: 0x2179d4, Func Offset: 0x554
	// Line 2298, Address: 0x2179d8, Func Offset: 0x558
	// Line 2297, Address: 0x2179dc, Func Offset: 0x55c
	// Line 2298, Address: 0x2179e4, Func Offset: 0x564
	// Line 2297, Address: 0x2179e8, Func Offset: 0x568
	// Line 2296, Address: 0x2179f0, Func Offset: 0x570
	// Line 2297, Address: 0x2179f4, Func Offset: 0x574
	// Line 2296, Address: 0x2179fc, Func Offset: 0x57c
	// Line 2297, Address: 0x217a00, Func Offset: 0x580
	// Line 2296, Address: 0x217a04, Func Offset: 0x584
	// Line 2297, Address: 0x217a08, Func Offset: 0x588
	// Line 2296, Address: 0x217a0c, Func Offset: 0x58c
	// Line 2297, Address: 0x217a14, Func Offset: 0x594
	// Line 2296, Address: 0x217a28, Func Offset: 0x5a8
	// Line 2297, Address: 0x217a30, Func Offset: 0x5b0
	// Line 2296, Address: 0x217a34, Func Offset: 0x5b4
	// Line 2297, Address: 0x217a3c, Func Offset: 0x5bc
	// Line 2298, Address: 0x217a40, Func Offset: 0x5c0
	// Line 2296, Address: 0x217a48, Func Offset: 0x5c8
	// Line 2298, Address: 0x217a68, Func Offset: 0x5e8
	// Line 2297, Address: 0x217a6c, Func Offset: 0x5ec
	// Line 2298, Address: 0x217a78, Func Offset: 0x5f8
	// Line 2296, Address: 0x217a7c, Func Offset: 0x5fc
	// Line 2297, Address: 0x217a80, Func Offset: 0x600
	// Line 2299, Address: 0x217a88, Func Offset: 0x608
	// Line 2297, Address: 0x217a8c, Func Offset: 0x60c
	// Line 2296, Address: 0x217a94, Func Offset: 0x614
	// Line 2297, Address: 0x217a9c, Func Offset: 0x61c
	// Line 2298, Address: 0x217aa0, Func Offset: 0x620
	// Line 2299, Address: 0x217aac, Func Offset: 0x62c
	// Line 2298, Address: 0x217ab0, Func Offset: 0x630
	// Line 2297, Address: 0x217abc, Func Offset: 0x63c
	// Line 2298, Address: 0x217ac4, Func Offset: 0x644
	// Line 2299, Address: 0x217ac8, Func Offset: 0x648
	// Line 2297, Address: 0x217ad0, Func Offset: 0x650
	// Line 2298, Address: 0x217adc, Func Offset: 0x65c
	// Line 2297, Address: 0x217af8, Func Offset: 0x678
	// Line 2298, Address: 0x217afc, Func Offset: 0x67c
	// Line 2301, Address: 0x217b04, Func Offset: 0x684
	// Line 2298, Address: 0x217b08, Func Offset: 0x688
	// Line 2299, Address: 0x217b20, Func Offset: 0x6a0
	// Line 2298, Address: 0x217b28, Func Offset: 0x6a8
	// Line 2299, Address: 0x217b48, Func Offset: 0x6c8
	// Line 2298, Address: 0x217b4c, Func Offset: 0x6cc
	// Line 2299, Address: 0x217b54, Func Offset: 0x6d4
	// Line 2301, Address: 0x217b58, Func Offset: 0x6d8
	// Line 2299, Address: 0x217b5c, Func Offset: 0x6dc
	// Line 2301, Address: 0x217b68, Func Offset: 0x6e8
	// Line 2308, Address: 0x217b6c, Func Offset: 0x6ec
	// Line 2299, Address: 0x217b70, Func Offset: 0x6f0
	// Line 2308, Address: 0x217b78, Func Offset: 0x6f8
	// Line 2309, Address: 0x217b8c, Func Offset: 0x70c
	// Line 2318, Address: 0x217bfc, Func Offset: 0x77c
	// Line 2319, Address: 0x217c00, Func Offset: 0x780
	// Line 2320, Address: 0x217c10, Func Offset: 0x790
	// Line 2323, Address: 0x217c20, Func Offset: 0x7a0
	// Func End, Address: 0x217c7c, Func Offset: 0x7fc
}

// Process__17zNMEGoalPopAttackFP11en_trantypefPv
// Start address: 0x217c80
int32 zNMEGoalPopAttack::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	// Line 2043, Address: 0x217c80, Func Offset: 0
	// Line 2056, Address: 0x217ca4, Func Offset: 0x24
	// Line 2064, Address: 0x217cb4, Func Offset: 0x34
	// Line 2065, Address: 0x217d44, Func Offset: 0xc4
	// Func End, Address: 0x217d60, Func Offset: 0xe0
}

// Enter__17zNMEGoalPopAttackFfPv
// Start address: 0x217d60
int32 zNMEGoalPopAttack::Enter()
{
	// Line 2033, Address: 0x217d60, Func Offset: 0
	// Line 2037, Address: 0x217d74, Func Offset: 0x14
	// Line 2039, Address: 0x217d88, Func Offset: 0x28
	// Line 2040, Address: 0x217f5c, Func Offset: 0x1fc
	// Func End, Address: 0x217f74, Func Offset: 0x214
}

// ChkTranCases__17zNMEGoalPopBattleFP10zNMEPopperRiR11en_trantype
// Start address: 0x217f80
int32 zNMEGoalPopBattle::ChkTranCases(zNMEPopper* npc, int32& nextgoal, en_trantype& trantype)
{
	en_vis iseeplyr;
	zMovePoint* mvpt;
	// Line 1943, Address: 0x217f80, Func Offset: 0
	// Line 1944, Address: 0x217f84, Func Offset: 0x4
	// Line 1943, Address: 0x217f88, Func Offset: 0x8
	// Line 1944, Address: 0x217fa8, Func Offset: 0x28
	// Line 1954, Address: 0x217fb8, Func Offset: 0x38
	// Line 1956, Address: 0x217fd4, Func Offset: 0x54
	// Line 1957, Address: 0x217fe0, Func Offset: 0x60
	// Line 1956, Address: 0x217fe4, Func Offset: 0x64
	// Line 1957, Address: 0x217fe8, Func Offset: 0x68
	// Line 1956, Address: 0x217ff0, Func Offset: 0x70
	// Line 1957, Address: 0x217ff4, Func Offset: 0x74
	// Line 1956, Address: 0x217ff8, Func Offset: 0x78
	// Line 1957, Address: 0x218020, Func Offset: 0xa0
	// Line 1956, Address: 0x218024, Func Offset: 0xa4
	// Line 1957, Address: 0x218028, Func Offset: 0xa8
	// Line 1960, Address: 0x218050, Func Offset: 0xd0
	// Line 1958, Address: 0x218054, Func Offset: 0xd4
	// Line 1959, Address: 0x218058, Func Offset: 0xd8
	// Line 1960, Address: 0x218064, Func Offset: 0xe4
	// Line 1961, Address: 0x218074, Func Offset: 0xf4
	// Line 1945, Address: 0x21807c, Func Offset: 0xfc
	// Line 1947, Address: 0x218080, Func Offset: 0x100
	// Line 1961, Address: 0x218084, Func Offset: 0x104
	// Line 1946, Address: 0x218088, Func Offset: 0x108
	// Line 1961, Address: 0x218090, Func Offset: 0x110
	// Line 1948, Address: 0x2180a4, Func Offset: 0x124
	// Line 1965, Address: 0x2180ac, Func Offset: 0x12c
	// Line 1968, Address: 0x2180cc, Func Offset: 0x14c
	// Line 1978, Address: 0x2180d8, Func Offset: 0x158
	// Line 1986, Address: 0x2180e0, Func Offset: 0x160
	// Line 1989, Address: 0x2180e8, Func Offset: 0x168
	// Line 2002, Address: 0x2180f8, Func Offset: 0x178
	// Line 1972, Address: 0x218128, Func Offset: 0x1a8
	// Line 1973, Address: 0x21812c, Func Offset: 0x1ac
	// Line 2002, Address: 0x218130, Func Offset: 0x1b0
	// Line 1973, Address: 0x218134, Func Offset: 0x1b4
	// Line 1974, Address: 0x218138, Func Offset: 0x1b8
	// Line 1980, Address: 0x218148, Func Offset: 0x1c8
	// Line 1982, Address: 0x21814c, Func Offset: 0x1cc
	// Line 2002, Address: 0x218150, Func Offset: 0x1d0
	// Line 1982, Address: 0x218154, Func Offset: 0x1d4
	// Line 1981, Address: 0x218158, Func Offset: 0x1d8
	// Line 1982, Address: 0x21815c, Func Offset: 0x1dc
	// Line 1981, Address: 0x218160, Func Offset: 0x1e0
	// Line 2002, Address: 0x218164, Func Offset: 0x1e4
	// Line 1983, Address: 0x218178, Func Offset: 0x1f8
	// Line 1987, Address: 0x218180, Func Offset: 0x200
	// Line 2002, Address: 0x218188, Func Offset: 0x208
	// Line 1992, Address: 0x21818c, Func Offset: 0x20c
	// Line 2002, Address: 0x2181a8, Func Offset: 0x228
	// Line 1996, Address: 0x2181b4, Func Offset: 0x234
	// Line 1995, Address: 0x2181b8, Func Offset: 0x238
	// Line 1996, Address: 0x2181bc, Func Offset: 0x23c
	// Line 1997, Address: 0x2181c0, Func Offset: 0x240
	// Line 2002, Address: 0x2181cc, Func Offset: 0x24c
	// Line 1998, Address: 0x2181ec, Func Offset: 0x26c
	// Line 2003, Address: 0x2181f0, Func Offset: 0x270
	// Func End, Address: 0x21820c, Func Offset: 0x28c
}

// Process__17zNMEGoalPopBattleFP11en_trantypefPv
// Start address: 0x218210
int32 zNMEGoalPopBattle::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	zNMEPopper* npc;
	int32 nextgoal;
	int32 doTran;
	// Line 1922, Address: 0x218210, Func Offset: 0
	// Line 1926, Address: 0x218238, Func Offset: 0x28
	// Line 1923, Address: 0x21823c, Func Offset: 0x2c
	// Line 1926, Address: 0x218244, Func Offset: 0x34
	// Line 1923, Address: 0x218248, Func Offset: 0x38
	// Line 1926, Address: 0x21824c, Func Offset: 0x3c
	// Line 1927, Address: 0x218258, Func Offset: 0x48
	// Line 1933, Address: 0x218264, Func Offset: 0x54
	// Line 1936, Address: 0x218290, Func Offset: 0x80
	// Line 1938, Address: 0x218364, Func Offset: 0x154
	// Line 1928, Address: 0x2183c4, Func Offset: 0x1b4
	// Line 1936, Address: 0x2183cc, Func Offset: 0x1bc
	// Line 1938, Address: 0x2183e8, Func Offset: 0x1d8
	// Line 1936, Address: 0x2183ec, Func Offset: 0x1dc
	// Line 1938, Address: 0x2183f0, Func Offset: 0x1e0
	// Line 1936, Address: 0x2183f8, Func Offset: 0x1e8
	// Line 1938, Address: 0x218400, Func Offset: 0x1f0
	// Line 1939, Address: 0x218410, Func Offset: 0x200
	// Func End, Address: 0x218430, Func Offset: 0x220
}

// Enter__17zNMEGoalPopBattleFfPv
// Start address: 0x218430
int32 zNMEGoalPopBattle::Enter()
{
	// Line 1916, Address: 0x218430, Func Offset: 0
	// Line 1917, Address: 0x218434, Func Offset: 0x4
	// Line 1916, Address: 0x218438, Func Offset: 0x8
	// Line 1918, Address: 0x21843c, Func Offset: 0xc
	// Line 1916, Address: 0x218440, Func Offset: 0x10
	// Line 1917, Address: 0x21844c, Func Offset: 0x1c
	// Line 1918, Address: 0x218450, Func Offset: 0x20
	// Line 1919, Address: 0x2184d4, Func Offset: 0xa4
	// Func End, Address: 0x2184ec, Func Offset: 0xbc
}

// ChkAware__16zNMEGoalPopAwareFP10zNMEPopperRiR11en_trantype
// Start address: 0x2184f0
int32 zNMEGoalPopAware::ChkAware(zNMEPopper* npc, int32& nextgoal, en_trantype& trantype)
{
	en_vis iseeplyr;
	// Line 1876, Address: 0x2184f0, Func Offset: 0
	// Line 1877, Address: 0x2184f4, Func Offset: 0x4
	// Line 1876, Address: 0x2184f8, Func Offset: 0x8
	// Line 1877, Address: 0x2184fc, Func Offset: 0xc
	// Line 1876, Address: 0x218500, Func Offset: 0x10
	// Line 1877, Address: 0x218504, Func Offset: 0x14
	// Line 1876, Address: 0x218508, Func Offset: 0x18
	// Line 1877, Address: 0x218520, Func Offset: 0x30
	// Line 1885, Address: 0x218530, Func Offset: 0x40
	// Line 1892, Address: 0x218544, Func Offset: 0x54
	// Line 1893, Address: 0x218564, Func Offset: 0x74
	// Line 1900, Address: 0x218570, Func Offset: 0x80
	// Line 1907, Address: 0x21857c, Func Offset: 0x8c
	// Line 1878, Address: 0x218584, Func Offset: 0x94
	// Line 1888, Address: 0x21858c, Func Offset: 0x9c
	// Line 1907, Address: 0x218590, Func Offset: 0xa0
	// Line 1888, Address: 0x218594, Func Offset: 0xa4
	// Line 1887, Address: 0x218598, Func Offset: 0xa8
	// Line 1888, Address: 0x21859c, Func Offset: 0xac
	// Line 1887, Address: 0x2185a0, Func Offset: 0xb0
	// Line 1907, Address: 0x2185a4, Func Offset: 0xb4
	// Line 1889, Address: 0x2185b8, Func Offset: 0xc8
	// Line 1894, Address: 0x2185c0, Func Offset: 0xd0
	// Line 1896, Address: 0x2185c4, Func Offset: 0xd4
	// Line 1907, Address: 0x2185c8, Func Offset: 0xd8
	// Line 1896, Address: 0x2185cc, Func Offset: 0xdc
	// Line 1895, Address: 0x2185d0, Func Offset: 0xe0
	// Line 1896, Address: 0x2185d4, Func Offset: 0xe4
	// Line 1895, Address: 0x2185d8, Func Offset: 0xe8
	// Line 1907, Address: 0x2185dc, Func Offset: 0xec
	// Line 1897, Address: 0x2185f0, Func Offset: 0x100
	// Line 1901, Address: 0x2185f8, Func Offset: 0x108
	// Line 1903, Address: 0x2185fc, Func Offset: 0x10c
	// Line 1907, Address: 0x218600, Func Offset: 0x110
	// Line 1903, Address: 0x218604, Func Offset: 0x114
	// Line 1902, Address: 0x218608, Func Offset: 0x118
	// Line 1903, Address: 0x21860c, Func Offset: 0x11c
	// Line 1902, Address: 0x218610, Func Offset: 0x120
	// Line 1907, Address: 0x218614, Func Offset: 0x124
	// Line 1904, Address: 0x218628, Func Offset: 0x138
	// Line 1908, Address: 0x21862c, Func Offset: 0x13c
	// Func End, Address: 0x218648, Func Offset: 0x158
}

// Process__16zNMEGoalPopAwareFP11en_trantypefPv
// Start address: 0x218650
int32 zNMEGoalPopAware::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	zNMEPopper* npc;
	int32 nextgoal;
	int32 doTran;
	// Line 1854, Address: 0x218650, Func Offset: 0
	// Line 1858, Address: 0x21867c, Func Offset: 0x2c
	// Line 1855, Address: 0x218680, Func Offset: 0x30
	// Line 1858, Address: 0x218688, Func Offset: 0x38
	// Line 1855, Address: 0x21868c, Func Offset: 0x3c
	// Line 1858, Address: 0x218690, Func Offset: 0x40
	// Line 1859, Address: 0x21869c, Func Offset: 0x4c
	// Line 1863, Address: 0x2186a4, Func Offset: 0x54
	// Line 1866, Address: 0x218778, Func Offset: 0x128
	// Line 1868, Address: 0x21878c, Func Offset: 0x13c
	// Line 1869, Address: 0x2187a0, Func Offset: 0x150
	// Line 1871, Address: 0x2187e8, Func Offset: 0x198
	// Line 1860, Address: 0x218848, Func Offset: 0x1f8
	// Line 1863, Address: 0x218850, Func Offset: 0x200
	// Line 1871, Address: 0x21886c, Func Offset: 0x21c
	// Line 1863, Address: 0x218870, Func Offset: 0x220
	// Line 1871, Address: 0x218874, Func Offset: 0x224
	// Line 1863, Address: 0x21887c, Func Offset: 0x22c
	// Line 1871, Address: 0x218884, Func Offset: 0x234
	// Line 1867, Address: 0x218898, Func Offset: 0x248
	// Line 1871, Address: 0x21889c, Func Offset: 0x24c
	// Line 1867, Address: 0x2188a0, Func Offset: 0x250
	// Line 1871, Address: 0x2188a4, Func Offset: 0x254
	// Line 1867, Address: 0x2188b0, Func Offset: 0x260
	// Line 1871, Address: 0x2188b4, Func Offset: 0x264
	// Line 1867, Address: 0x2188bc, Func Offset: 0x26c
	// Line 1871, Address: 0x2188c0, Func Offset: 0x270
	// Line 1867, Address: 0x2188d0, Func Offset: 0x280
	// Line 1872, Address: 0x2188e0, Func Offset: 0x290
	// Func End, Address: 0x218904, Func Offset: 0x2b4
}

// Process__17zNMEGoalPopNormalFP11en_trantypefPv
// Start address: 0x218910
int32 zNMEGoalPopNormal::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	zNMEPopper* npc;
	int32 nextgoal;
	en_vis iseeplyr;
	// Line 1818, Address: 0x218910, Func Offset: 0
	// Line 1827, Address: 0x218914, Func Offset: 0x4
	// Line 1818, Address: 0x218918, Func Offset: 0x8
	// Line 1819, Address: 0x218940, Func Offset: 0x30
	// Line 1827, Address: 0x218944, Func Offset: 0x34
	// Line 1819, Address: 0x218948, Func Offset: 0x38
	// Line 1820, Address: 0x21894c, Func Offset: 0x3c
	// Line 1827, Address: 0x218950, Func Offset: 0x40
	// Line 1840, Address: 0x21895c, Func Offset: 0x4c
	// Line 1842, Address: 0x218970, Func Offset: 0x60
	// Line 1843, Address: 0x218984, Func Offset: 0x74
	// Line 1845, Address: 0x2189cc, Func Offset: 0xbc
	// Line 1828, Address: 0x218a2c, Func Offset: 0x11c
	// Line 1845, Address: 0x218a38, Func Offset: 0x128
	// Line 1830, Address: 0x218a4c, Func Offset: 0x13c
	// Line 1845, Address: 0x218a50, Func Offset: 0x140
	// Line 1830, Address: 0x218a54, Func Offset: 0x144
	// Line 1845, Address: 0x218a58, Func Offset: 0x148
	// Line 1832, Address: 0x218a74, Func Offset: 0x164
	// Line 1834, Address: 0x218a78, Func Offset: 0x168
	// Line 1845, Address: 0x218a7c, Func Offset: 0x16c
	// Line 1834, Address: 0x218a80, Func Offset: 0x170
	// Line 1833, Address: 0x218a84, Func Offset: 0x174
	// Line 1834, Address: 0x218a88, Func Offset: 0x178
	// Line 1833, Address: 0x218a8c, Func Offset: 0x17c
	// Line 1845, Address: 0x218a90, Func Offset: 0x180
	// Line 1835, Address: 0x218aa4, Func Offset: 0x194
	// Line 1845, Address: 0x218aac, Func Offset: 0x19c
	// Line 1841, Address: 0x218ab0, Func Offset: 0x1a0
	// Line 1845, Address: 0x218ab4, Func Offset: 0x1a4
	// Line 1841, Address: 0x218ab8, Func Offset: 0x1a8
	// Line 1845, Address: 0x218abc, Func Offset: 0x1ac
	// Line 1841, Address: 0x218ac8, Func Offset: 0x1b8
	// Line 1845, Address: 0x218acc, Func Offset: 0x1bc
	// Line 1841, Address: 0x218ad4, Func Offset: 0x1c4
	// Line 1845, Address: 0x218ad8, Func Offset: 0x1c8
	// Line 1841, Address: 0x218ae8, Func Offset: 0x1d8
	// Line 1846, Address: 0x218af8, Func Offset: 0x1e8
	// Func End, Address: 0x218b1c, Func Offset: 0x20c
}

// LidUpdate__6PopTopFf
// Start address: 0x218b20
void PopTop::LidUpdate(float32 dt)
{
	int32 i;
	float32 rat;
	// Line 1757, Address: 0x218b20, Func Offset: 0
	// Line 1759, Address: 0x218b24, Func Offset: 0x4
	// Line 1768, Address: 0x218b60, Func Offset: 0x40
	// Line 1774, Address: 0x218b64, Func Offset: 0x44
	// Line 1768, Address: 0x218b68, Func Offset: 0x48
	// Line 1774, Address: 0x218b6c, Func Offset: 0x4c
	// Line 1780, Address: 0x218b70, Func Offset: 0x50
	// Line 1774, Address: 0x218b80, Func Offset: 0x60
	// Line 1783, Address: 0x218b84, Func Offset: 0x64
	// Line 1760, Address: 0x218b88, Func Offset: 0x68
	// Line 1768, Address: 0x218b9c, Func Offset: 0x7c
	// Line 1774, Address: 0x218bac, Func Offset: 0x8c
	// Line 1775, Address: 0x218bf0, Func Offset: 0xd0
	// Line 1776, Address: 0x218bf8, Func Offset: 0xd8
	// Line 1780, Address: 0x218bfc, Func Offset: 0xdc
	// Line 1783, Address: 0x218c04, Func Offset: 0xe4
	// Line 1780, Address: 0x218c08, Func Offset: 0xe8
	// Line 1783, Address: 0x218cf0, Func Offset: 0x1d0
	// Line 1784, Address: 0x218d10, Func Offset: 0x1f0
	// Line 1786, Address: 0x218d14, Func Offset: 0x1f4
	// Line 1789, Address: 0x218d24, Func Offset: 0x204
	// Func End, Address: 0x218d2c, Func Offset: 0x20c
}

// LidLocate__6PopTopFPC10zMovePoint
// Start address: 0x218d30
xEnt* PopTop::LidLocate(zMovePoint* mvpt)
{
	xEnt* da_lid;
	int32 i;
	xLinkAsset* link;
	xBase* mychild;
	// Line 1722, Address: 0x218d30, Func Offset: 0
	// Line 1723, Address: 0x218d48, Func Offset: 0x18
	// Line 1727, Address: 0x218d50, Func Offset: 0x20
	// Line 1726, Address: 0x218d54, Func Offset: 0x24
	// Line 1727, Address: 0x218d58, Func Offset: 0x28
	// Line 1728, Address: 0x218d68, Func Offset: 0x38
	// Line 1731, Address: 0x218d6c, Func Offset: 0x3c
	// Line 1728, Address: 0x218d70, Func Offset: 0x40
	// Line 1731, Address: 0x218d74, Func Offset: 0x44
	// Line 1746, Address: 0x218d80, Func Offset: 0x50
	// Line 1724, Address: 0x218d9c, Func Offset: 0x6c
	// Line 1746, Address: 0x218da4, Func Offset: 0x74
	// Line 1740, Address: 0x218db8, Func Offset: 0x88
	// Line 1746, Address: 0x218dbc, Func Offset: 0x8c
	// Line 1744, Address: 0x218dc4, Func Offset: 0x94
	// Line 1753, Address: 0x218dc8, Func Offset: 0x98
	// Line 1754, Address: 0x218dcc, Func Offset: 0x9c
	// Func End, Address: 0x218de8, Func Offset: 0xb8
}

// PickEvadePoint__10zNMEPopperFP10zMovePoint
// Start address: 0x218df0
zMovePoint* zNMEPopper::PickEvadePoint(zMovePoint* nav_from)
{
	zMovePoint* nav_there;
	uint32 num;
	xVec3 dir_plyr;
	float32 dst_retreat;
	float32 dst_charge;
	zMovePoint* nav_retreat;
	zMovePoint* nav_charge;
	uint32 i;
	xBase* baseitem;
	zMovePoint* mvpt;
	zMovePoint* nav_goto;
	// Line 1489, Address: 0x218df0, Func Offset: 0
	// Line 1490, Address: 0x218e28, Func Offset: 0x38
	// Line 1516, Address: 0x218e30, Func Offset: 0x40
	// Line 1517, Address: 0x218e3c, Func Offset: 0x4c
	// Line 1536, Address: 0x218e44, Func Offset: 0x54
	// Line 1537, Address: 0x218e4c, Func Offset: 0x5c
	// Line 1536, Address: 0x218e50, Func Offset: 0x60
	// Line 1537, Address: 0x218e58, Func Offset: 0x68
	// Line 1536, Address: 0x218e60, Func Offset: 0x70
	// Line 1537, Address: 0x218e6c, Func Offset: 0x7c
	// Line 1536, Address: 0x218e70, Func Offset: 0x80
	// Line 1537, Address: 0x218e9c, Func Offset: 0xac
	// Line 1536, Address: 0x218ea0, Func Offset: 0xb0
	// Line 1537, Address: 0x218ea4, Func Offset: 0xb4
	// Line 1538, Address: 0x218eac, Func Offset: 0xbc
	// Line 1540, Address: 0x218ec8, Func Offset: 0xd8
	// Line 1543, Address: 0x218f04, Func Offset: 0x114
	// Line 1545, Address: 0x218f08, Func Offset: 0x118
	// Line 1543, Address: 0x218f0c, Func Offset: 0x11c
	// Line 1546, Address: 0x218f10, Func Offset: 0x120
	// Line 1548, Address: 0x218f14, Func Offset: 0x124
	// Line 1591, Address: 0x218f24, Func Offset: 0x134
	// Line 1593, Address: 0x218f38, Func Offset: 0x148
	// Line 1594, Address: 0x218f44, Func Offset: 0x154
	// Line 1596, Address: 0x218f4c, Func Offset: 0x15c
	// Line 1598, Address: 0x218f50, Func Offset: 0x160
	// Line 1496, Address: 0x218f64, Func Offset: 0x174
	// Line 1598, Address: 0x218f6c, Func Offset: 0x17c
	// Line 1501, Address: 0x218f84, Func Offset: 0x194
	// Line 1598, Address: 0x218f98, Func Offset: 0x1a8
	// Line 1508, Address: 0x218fa8, Func Offset: 0x1b8
	// Line 1518, Address: 0x218fb0, Func Offset: 0x1c0
	// Line 1598, Address: 0x218fb8, Func Offset: 0x1c8
	// Line 1556, Address: 0x218fe0, Func Offset: 0x1f0
	// Line 1598, Address: 0x218fe4, Func Offset: 0x1f4
	// Line 1565, Address: 0x218ff0, Func Offset: 0x200
	// Line 1598, Address: 0x218ff4, Func Offset: 0x204
	// Line 1565, Address: 0x218ff8, Func Offset: 0x208
	// Line 1563, Address: 0x218ffc, Func Offset: 0x20c
	// Line 1564, Address: 0x219004, Func Offset: 0x214
	// Line 1598, Address: 0x219008, Func Offset: 0x218
	// Line 1563, Address: 0x21901c, Func Offset: 0x22c
	// Line 1564, Address: 0x219024, Func Offset: 0x234
	// Line 1598, Address: 0x21902c, Func Offset: 0x23c
	// Line 1565, Address: 0x219038, Func Offset: 0x248
	// Line 1598, Address: 0x21903c, Func Offset: 0x24c
	// Line 1567, Address: 0x219044, Func Offset: 0x254
	// Line 1571, Address: 0x219050, Func Offset: 0x260
	// Line 1567, Address: 0x219054, Func Offset: 0x264
	// Line 1598, Address: 0x219060, Func Offset: 0x270
	// Line 1571, Address: 0x21906c, Func Offset: 0x27c
	// Line 1598, Address: 0x21908c, Func Offset: 0x29c
	// Line 1573, Address: 0x219094, Func Offset: 0x2a4
	// Line 1598, Address: 0x219098, Func Offset: 0x2a8
	// Line 1573, Address: 0x2190a0, Func Offset: 0x2b0
	// Line 1598, Address: 0x2190a4, Func Offset: 0x2b4
	// Line 1577, Address: 0x2190b4, Func Offset: 0x2c4
	// Line 1580, Address: 0x2190b8, Func Offset: 0x2c8
	// Line 1598, Address: 0x2190bc, Func Offset: 0x2cc
	// Line 1580, Address: 0x2190c4, Func Offset: 0x2d4
	// Line 1598, Address: 0x2190c8, Func Offset: 0x2d8
	// Line 1575, Address: 0x2190d8, Func Offset: 0x2e8
	// Line 1577, Address: 0x2190dc, Func Offset: 0x2ec
	// Line 1580, Address: 0x2190e4, Func Offset: 0x2f4
	// Line 1582, Address: 0x2190e8, Func Offset: 0x2f8
	// Line 1581, Address: 0x2190ec, Func Offset: 0x2fc
	// Line 1598, Address: 0x2190f0, Func Offset: 0x300
	// Line 1592, Address: 0x219108, Func Offset: 0x318
	// Line 1602, Address: 0x219110, Func Offset: 0x320
	// Func End, Address: 0x219144, Func Offset: 0x354
}

// PopMailDamage__10zNMEPopperFP13NMEDamageInfo
// Start address: 0x219150
int32 zNMEPopper::PopMailDamage(NMEDamageInfo* dmgmail)
{
	int32 rc;
	int32 handled;
	xPsyche* psy;
	xGoal* goal;
	// Line 1401, Address: 0x219150, Func Offset: 0
	// Line 1402, Address: 0x219168, Func Offset: 0x18
	// Line 1403, Address: 0x219174, Func Offset: 0x24
	// Line 1408, Address: 0x21917c, Func Offset: 0x2c
	// Line 1432, Address: 0x2191a8, Func Offset: 0x58
	// Line 1437, Address: 0x2191c4, Func Offset: 0x74
	// Line 1439, Address: 0x2191d8, Func Offset: 0x88
	// Line 1443, Address: 0x2191e0, Func Offset: 0x90
	// Line 1445, Address: 0x2191e4, Func Offset: 0x94
	// Line 1448, Address: 0x2191f4, Func Offset: 0xa4
	// Line 1449, Address: 0x2191f8, Func Offset: 0xa8
	// Line 1448, Address: 0x2191fc, Func Offset: 0xac
	// Line 1449, Address: 0x219200, Func Offset: 0xb0
	// Line 1451, Address: 0x219210, Func Offset: 0xc0
	// Line 1454, Address: 0x219218, Func Offset: 0xc8
	// Line 1460, Address: 0x21921c, Func Offset: 0xcc
	// Line 1404, Address: 0x219228, Func Offset: 0xd8
	// Line 1461, Address: 0x219238, Func Offset: 0xe8
	// Func End, Address: 0x219250, Func Offset: 0x100
}

// TypeHandleMail__10zNMEPopperFP6NMEMsg
// Start address: 0x219250
int32 zNMEPopper::TypeHandleMail(NMEMsg* mail)
{
	int32 handled;
	// Line 1372, Address: 0x219250, Func Offset: 0
	// Line 1375, Address: 0x219254, Func Offset: 0x4
	// Line 1372, Address: 0x219258, Func Offset: 0x8
	// Line 1375, Address: 0x219268, Func Offset: 0x18
	// Line 1380, Address: 0x219290, Func Offset: 0x40
	// Line 1381, Address: 0x219298, Func Offset: 0x48
	// Line 1385, Address: 0x2192a0, Func Offset: 0x50
	// Line 1386, Address: 0x2192dc, Func Offset: 0x8c
	// Line 1389, Address: 0x2192e4, Func Offset: 0x94
	// Line 1390, Address: 0x2193c0, Func Offset: 0x170
	// Line 1393, Address: 0x2193c8, Func Offset: 0x178
	// Line 1397, Address: 0x2193cc, Func Offset: 0x17c
	// Line 1385, Address: 0x2193d8, Func Offset: 0x188
	// Line 1397, Address: 0x2193dc, Func Offset: 0x18c
	// Line 1398, Address: 0x2193ec, Func Offset: 0x19c
	// Func End, Address: 0x219400, Func Offset: 0x1b0
}

// HealthRatio__10zNMEPopperFv
// Start address: 0x219400
float32 zNMEPopper::HealthRatio()
{
	float32 rat;
	// Line 1355, Address: 0x219400, Func Offset: 0
	// Line 1356, Address: 0x219404, Func Offset: 0x4
	// Line 1359, Address: 0x21940c, Func Offset: 0xc
	// Line 1362, Address: 0x219410, Func Offset: 0x10
	// Line 1360, Address: 0x219414, Func Offset: 0x14
	// Line 1362, Address: 0x219418, Func Offset: 0x18
	// Line 1359, Address: 0x21941c, Func Offset: 0x1c
	// Line 1360, Address: 0x219420, Func Offset: 0x20
	// Line 1362, Address: 0x219430, Func Offset: 0x30
	// Line 1357, Address: 0x219488, Func Offset: 0x88
	// Line 1363, Address: 0x21948c, Func Offset: 0x8c
	// Func End, Address: 0x219494, Func Offset: 0x94
}

// VisionTarget__10zNMEPopperCFP4xEnt9en_defconi
// Start address: 0x2194a0
en_vis zNMEPopper::VisionTarget(xEnt* ent)
{
	NMECfgPopper* cfg;
	float32 dy;
	// Line 1263, Address: 0x2194a0, Func Offset: 0
	// Line 1266, Address: 0x2194ac, Func Offset: 0xc
	// Line 1274, Address: 0x2194b8, Func Offset: 0x18
	// Line 1269, Address: 0x2194c8, Func Offset: 0x28
	// Line 1274, Address: 0x2194cc, Func Offset: 0x2c
	// Line 1278, Address: 0x2194ec, Func Offset: 0x4c
	// Line 1275, Address: 0x2194f0, Func Offset: 0x50
	// Line 1278, Address: 0x219508, Func Offset: 0x68
	// Line 1281, Address: 0x21952c, Func Offset: 0x8c
	// Line 1295, Address: 0x219534, Func Offset: 0x94
	// Line 1301, Address: 0x219548, Func Offset: 0xa8
	// Line 1306, Address: 0x219550, Func Offset: 0xb0
	// Line 1316, Address: 0x21956c, Func Offset: 0xcc
	// Line 1318, Address: 0x21957c, Func Offset: 0xdc
	// Line 1317, Address: 0x219580, Func Offset: 0xe0
	// Line 1320, Address: 0x21958c, Func Offset: 0xec
	// Line 1318, Address: 0x219594, Func Offset: 0xf4
	// Line 1317, Address: 0x219598, Func Offset: 0xf8
	// Line 1320, Address: 0x2195a4, Func Offset: 0x104
	// Line 1308, Address: 0x2195e8, Func Offset: 0x148
	// Line 1310, Address: 0x2195f4, Func Offset: 0x154
	// Line 1320, Address: 0x2195fc, Func Offset: 0x15c
	// Line 1308, Address: 0x219600, Func Offset: 0x160
	// Line 1320, Address: 0x21960c, Func Offset: 0x16c
	// Line 1310, Address: 0x219618, Func Offset: 0x178
	// Line 1320, Address: 0x219630, Func Offset: 0x190
	// Line 1311, Address: 0x219638, Func Offset: 0x198
	// Line 1313, Address: 0x219640, Func Offset: 0x1a0
	// Line 1329, Address: 0x219648, Func Offset: 0x1a8
	// Line 1332, Address: 0x219654, Func Offset: 0x1b4
	// Line 1336, Address: 0x219664, Func Offset: 0x1c4
	// Line 1264, Address: 0x219680, Func Offset: 0x1e0
	// Line 1267, Address: 0x219688, Func Offset: 0x1e8
	// Line 1296, Address: 0x219698, Func Offset: 0x1f8
	// Line 1339, Address: 0x2196a0, Func Offset: 0x200
	// Func End, Address: 0x2196a8, Func Offset: 0x208
}

// ProcessInvis__10zNMEPopperFf
// Start address: 0x2196b0
void zNMEPopper::ProcessInvis(float32 dt)
{
	// Line 1257, Address: 0x2196b0, Func Offset: 0
	// Func End, Address: 0x2196c0, Func Offset: 0x10
}

// Process__10zNMEPopperFf
// Start address: 0x2196c0
void zNMEPopper::Process(float32 dt)
{
	xMat4x3 oldMat;
	xEntFrame tmpFrame;
	// Line 1189, Address: 0x2196c0, Func Offset: 0
	// Line 1195, Address: 0x2196e8, Func Offset: 0x28
	// Line 1189, Address: 0x2196ec, Func Offset: 0x2c
	// Line 1195, Address: 0x2196f8, Func Offset: 0x38
	// Line 1200, Address: 0x219700, Func Offset: 0x40
	// Line 1202, Address: 0x219710, Func Offset: 0x50
	// Line 1204, Address: 0x219728, Func Offset: 0x68
	// Line 1206, Address: 0x219730, Func Offset: 0x70
	// Line 1212, Address: 0x21976c, Func Offset: 0xac
	// Line 1214, Address: 0x219788, Func Offset: 0xc8
	// Line 1215, Address: 0x219790, Func Offset: 0xd0
	// Line 1219, Address: 0x219830, Func Offset: 0x170
	// Line 1251, Address: 0x21983c, Func Offset: 0x17c
	// Line 1213, Address: 0x2198c8, Func Offset: 0x208
	// Line 1251, Address: 0x2198d0, Func Offset: 0x210
	// Line 1222, Address: 0x2198fc, Func Offset: 0x23c
	// Line 1251, Address: 0x219900, Func Offset: 0x240
	// Line 1228, Address: 0x2199dc, Func Offset: 0x31c
	// Line 1251, Address: 0x2199e0, Func Offset: 0x320
	// Line 1228, Address: 0x219a00, Func Offset: 0x340
	// Line 1251, Address: 0x219a04, Func Offset: 0x344
	// Line 1252, Address: 0x219a98, Func Offset: 0x3d8
	// Func End, Address: 0x219ab8, Func Offset: 0x3f8
}

// BUpdate__10zNMEPopperFP5xVec3
// Start address: 0x219ac0
void zNMEPopper::BUpdate(xVec3* pos)
{
	// Line 1183, Address: 0x219ac0, Func Offset: 0
	// Line 1184, Address: 0x219ac4, Func Offset: 0x4
	// Line 1183, Address: 0x219ac8, Func Offset: 0x8
	// Line 1184, Address: 0x219ad0, Func Offset: 0x10
	// Line 1185, Address: 0x219ca8, Func Offset: 0x1e8
	// Line 1184, Address: 0x219cb8, Func Offset: 0x1f8
	// Line 1185, Address: 0x219cc0, Func Offset: 0x200
	// Line 1184, Address: 0x219d00, Func Offset: 0x240
	// Line 1185, Address: 0x219d04, Func Offset: 0x244
	// Line 1184, Address: 0x219d08, Func Offset: 0x248
	// Line 1185, Address: 0x219d0c, Func Offset: 0x24c
	// Line 1184, Address: 0x219d28, Func Offset: 0x268
	// Line 1185, Address: 0x219d2c, Func Offset: 0x26c
	// Line 1184, Address: 0x219d34, Func Offset: 0x274
	// Line 1185, Address: 0x219d38, Func Offset: 0x278
	// Line 1184, Address: 0x219d64, Func Offset: 0x2a4
	// Line 1185, Address: 0x219d68, Func Offset: 0x2a8
	// Line 1184, Address: 0x219d98, Func Offset: 0x2d8
	// Line 1185, Address: 0x219da0, Func Offset: 0x2e0
	// Line 1184, Address: 0x219dcc, Func Offset: 0x30c
	// Line 1185, Address: 0x219dd0, Func Offset: 0x310
	// Line 1184, Address: 0x219e00, Func Offset: 0x340
	// Line 1185, Address: 0x219e08, Func Offset: 0x348
	// Line 1184, Address: 0x219e30, Func Offset: 0x370
	// Line 1185, Address: 0x219e34, Func Offset: 0x374
	// Line 1184, Address: 0x219e38, Func Offset: 0x378
	// Line 1185, Address: 0x219e3c, Func Offset: 0x37c
	// Line 1184, Address: 0x219e44, Func Offset: 0x384
	// Line 1185, Address: 0x219e4c, Func Offset: 0x38c
	// Line 1184, Address: 0x219e9c, Func Offset: 0x3dc
	// Line 1185, Address: 0x219ea4, Func Offset: 0x3e4
	// Line 1184, Address: 0x219ec8, Func Offset: 0x408
	// Line 1185, Address: 0x219ecc, Func Offset: 0x40c
	// Line 1184, Address: 0x219ed0, Func Offset: 0x410
	// Line 1185, Address: 0x219ed4, Func Offset: 0x414
	// Line 1184, Address: 0x219ef4, Func Offset: 0x434
	// Line 1185, Address: 0x219ef8, Func Offset: 0x438
	// Line 1184, Address: 0x219f34, Func Offset: 0x474
	// Line 1185, Address: 0x219f38, Func Offset: 0x478
	// Line 1184, Address: 0x219f40, Func Offset: 0x480
	// Line 1185, Address: 0x219f44, Func Offset: 0x484
	// Line 1184, Address: 0x219f7c, Func Offset: 0x4bc
	// Line 1185, Address: 0x219f80, Func Offset: 0x4c0
	// Line 1184, Address: 0x219f84, Func Offset: 0x4c4
	// Line 1185, Address: 0x219f88, Func Offset: 0x4c8
	// Line 1184, Address: 0x219f90, Func Offset: 0x4d0
	// Line 1185, Address: 0x219f9c, Func Offset: 0x4dc
	// Line 1184, Address: 0x219fb4, Func Offset: 0x4f4
	// Line 1185, Address: 0x219fb8, Func Offset: 0x4f8
	// Line 1184, Address: 0x219ffc, Func Offset: 0x53c
	// Line 1185, Address: 0x21a004, Func Offset: 0x544
	// Line 1186, Address: 0x21a014, Func Offset: 0x554
	// Func End, Address: 0x21a020, Func Offset: 0x560
}

// Reset__10zNMEPopperFv
// Start address: 0x21a020
void zNMEPopper::Reset()
{
	xPsyche* psy;
	zNMEGoalAfterlife* goal;
	// Line 1139, Address: 0x21a020, Func Offset: 0
	// Line 1140, Address: 0x21a030, Func Offset: 0x10
	// Line 1145, Address: 0x21a2d0, Func Offset: 0x2b0
	// Line 1147, Address: 0x21a300, Func Offset: 0x2e0
	// Line 1148, Address: 0x21a310, Func Offset: 0x2f0
	// Line 1155, Address: 0x21a314, Func Offset: 0x2f4
	// Line 1163, Address: 0x21a328, Func Offset: 0x308
	// Line 1173, Address: 0x21a334, Func Offset: 0x314
	// Line 1177, Address: 0x21a348, Func Offset: 0x328
	// Line 1179, Address: 0x21a350, Func Offset: 0x330
	// Line 1156, Address: 0x21a368, Func Offset: 0x348
	// Line 1179, Address: 0x21a374, Func Offset: 0x354
	// Line 1162, Address: 0x21a38c, Func Offset: 0x36c
	// Line 1166, Address: 0x21a394, Func Offset: 0x374
	// Line 1179, Address: 0x21a398, Func Offset: 0x378
	// Line 1169, Address: 0x21a3a0, Func Offset: 0x380
	// Line 1168, Address: 0x21a3a4, Func Offset: 0x384
	// Line 1169, Address: 0x21a3a8, Func Offset: 0x388
	// Line 1166, Address: 0x21a3ac, Func Offset: 0x38c
	// Line 1169, Address: 0x21a3b0, Func Offset: 0x390
	// Line 1179, Address: 0x21a3b4, Func Offset: 0x394
	// Line 1170, Address: 0x21a3bc, Func Offset: 0x39c
	// Line 1171, Address: 0x21a3c0, Func Offset: 0x3a0
	// Line 1180, Address: 0x21a3c8, Func Offset: 0x3a8
	// Func End, Address: 0x21a3dc, Func Offset: 0x3bc
}

// Setup__10zNMEPopperFv
// Start address: 0x21a3e0
void zNMEPopper::Setup()
{
	// Line 1127, Address: 0x21a3e0, Func Offset: 0
	// Line 1128, Address: 0x21a3e4, Func Offset: 0x4
	// Line 1127, Address: 0x21a3e8, Func Offset: 0x8
	// Line 1128, Address: 0x21a3ec, Func Offset: 0xc
	// Line 1127, Address: 0x21a3f0, Func Offset: 0x10
	// Line 1128, Address: 0x21a3f4, Func Offset: 0x14
	// Line 1129, Address: 0x21a448, Func Offset: 0x68
	// Line 1132, Address: 0x21a45c, Func Offset: 0x7c
	// Line 1133, Address: 0x21a478, Func Offset: 0x98
	// Line 1134, Address: 0x21a494, Func Offset: 0xb4
	// Line 1135, Address: 0x21a4b0, Func Offset: 0xd0
	// Line 1130, Address: 0x21a4b8, Func Offset: 0xd8
	// Line 1135, Address: 0x21a4cc, Func Offset: 0xec
	// Line 1130, Address: 0x21a4d4, Func Offset: 0xf4
	// Line 1136, Address: 0x21a4dc, Func Offset: 0xfc
	// Func End, Address: 0x21a4e8, Func Offset: 0x108
}

// Init__10zNMEPopperFP9xEntAsset
// Start address: 0x21a4f0
void zNMEPopper::Init(xEntAsset* asset)
{
	// Line 1118, Address: 0x21a4f0, Func Offset: 0
	// Line 1119, Address: 0x21a508, Func Offset: 0x18
	// Line 1120, Address: 0x21a5a0, Func Offset: 0xb0
	// Line 1119, Address: 0x21a5a8, Func Offset: 0xb8
	// Line 1120, Address: 0x21a6c8, Func Offset: 0x1d8
	// Line 1121, Address: 0x21a6d8, Func Offset: 0x1e8
	// Line 1122, Address: 0x21a6f0, Func Offset: 0x200
	// Line 1123, Address: 0x21a708, Func Offset: 0x218
	// Line 1119, Address: 0x21a714, Func Offset: 0x224
	// Line 1123, Address: 0x21a718, Func Offset: 0x228
	// Line 1119, Address: 0x21a720, Func Offset: 0x230
	// Line 1123, Address: 0x21a72c, Func Offset: 0x23c
	// Line 1120, Address: 0x21a73c, Func Offset: 0x24c
	// Line 1123, Address: 0x21a740, Func Offset: 0x250
	// Line 1121, Address: 0x21a750, Func Offset: 0x260
	// Line 1123, Address: 0x21a754, Func Offset: 0x264
	// Line 1122, Address: 0x21a764, Func Offset: 0x274
	// Line 1123, Address: 0x21a768, Func Offset: 0x278
	// Line 1124, Address: 0x21a778, Func Offset: 0x288
	// Func End, Address: 0x21a78c, Func Offset: 0x29c
}

// CreateAnimTable__10zNMEPopperFP10xAnimTable
// Start address: 0x21a790
xAnimTable* zNMEPopper::CreateAnimTable(xAnimTable* table)
{
	int32 ourAnims[18];
	// Line 990, Address: 0x21a790, Func Offset: 0
	// Line 996, Address: 0x21a7a0, Func Offset: 0x10
	// Line 1003, Address: 0x21a7a8, Func Offset: 0x18
	// Line 1007, Address: 0x21a7f0, Func Offset: 0x60
	// Line 1012, Address: 0x21a838, Func Offset: 0xa8
	// Line 1016, Address: 0x21a884, Func Offset: 0xf4
	// Line 1022, Address: 0x21a8d0, Func Offset: 0x140
	// Line 1026, Address: 0x21a918, Func Offset: 0x188
	// Line 1031, Address: 0x21a960, Func Offset: 0x1d0
	// Line 1037, Address: 0x21a9ac, Func Offset: 0x21c
	// Line 1041, Address: 0x21a9f4, Func Offset: 0x264
	// Line 1045, Address: 0x21aa40, Func Offset: 0x2b0
	// Line 1050, Address: 0x21aa8c, Func Offset: 0x2fc
	// Line 1054, Address: 0x21aad4, Func Offset: 0x344
	// Line 1060, Address: 0x21ab1c, Func Offset: 0x38c
	// Line 1064, Address: 0x21ab64, Func Offset: 0x3d4
	// Line 1068, Address: 0x21abac, Func Offset: 0x41c
	// Line 1075, Address: 0x21abf4, Func Offset: 0x464
	// Line 1079, Address: 0x21ac3c, Func Offset: 0x4ac
	// Line 1088, Address: 0x21ac88, Func Offset: 0x4f8
	// Line 1106, Address: 0x21acb8, Func Offset: 0x528
	// Line 1112, Address: 0x21acdc, Func Offset: 0x54c
	// Line 1114, Address: 0x21ad24, Func Offset: 0x594
	// Line 996, Address: 0x21ad2c, Func Offset: 0x59c
	// Line 1114, Address: 0x21ad30, Func Offset: 0x5a0
	// Line 1115, Address: 0x21ad40, Func Offset: 0x5b0
	// Func End, Address: 0x21ad50, Func Offset: 0x5c0
}

// GoalPick__10zNMEPopperFP5xGoalRiR11en_trantype
// Start address: 0x21ad50
int32 GoalPick(int32& gid_would)
{
	int32 altered;
	// Line 933, Address: 0x21ad50, Func Offset: 0
	// Line 937, Address: 0x21ad88, Func Offset: 0x38
	// Line 939, Address: 0x21ad90, Func Offset: 0x40
	// Line 942, Address: 0x21ad98, Func Offset: 0x48
	// Line 944, Address: 0x21ada0, Func Offset: 0x50
	// Line 947, Address: 0x21ada8, Func Offset: 0x58
	// Line 949, Address: 0x21adb0, Func Offset: 0x60
	// Line 952, Address: 0x21adb8, Func Offset: 0x68
	// Line 956, Address: 0x21adc0, Func Offset: 0x70
	// Line 959, Address: 0x21adc8, Func Offset: 0x78
	// Line 961, Address: 0x21add0, Func Offset: 0x80
	// Line 965, Address: 0x21add8, Func Offset: 0x88
	// Line 967, Address: 0x21ade0, Func Offset: 0x90
	// Line 971, Address: 0x21ade8, Func Offset: 0x98
	// Line 973, Address: 0x21adf0, Func Offset: 0xa0
	// Line 977, Address: 0x21adf8, Func Offset: 0xa8
	// Line 979, Address: 0x21ae00, Func Offset: 0xb0
	// Line 982, Address: 0x21ae08, Func Offset: 0xb8
	// Line 987, Address: 0x21ae0c, Func Offset: 0xbc
	// Func End, Address: 0x21ae14, Func Offset: 0xc4
}

// AnimPick__10zNMEPopperFi11en_npcgspotP5xGoal
// Start address: 0x21ae20
uint32 zNMEPopper::AnimPick(int32 gid, en_npcgspot gspot)
{
	en_stananim idx;
	// Line 858, Address: 0x21ae20, Func Offset: 0
	// Line 861, Address: 0x21aeb4, Func Offset: 0x94
	// Line 862, Address: 0x21aeb8, Func Offset: 0x98
	// Line 864, Address: 0x21aec0, Func Offset: 0xa0
	// Line 866, Address: 0x21aec8, Func Offset: 0xa8
	// Line 867, Address: 0x21aed4, Func Offset: 0xb4
	// Line 870, Address: 0x21aedc, Func Offset: 0xbc
	// Line 873, Address: 0x21aee4, Func Offset: 0xc4
	// Line 877, Address: 0x21aeec, Func Offset: 0xcc
	// Line 879, Address: 0x21aef4, Func Offset: 0xd4
	// Line 880, Address: 0x21af08, Func Offset: 0xe8
	// Line 883, Address: 0x21af10, Func Offset: 0xf0
	// Line 885, Address: 0x21af18, Func Offset: 0xf8
	// Line 886, Address: 0x21af24, Func Offset: 0x104
	// Line 889, Address: 0x21af2c, Func Offset: 0x10c
	// Line 893, Address: 0x21af34, Func Offset: 0x114
	// Line 897, Address: 0x21af3c, Func Offset: 0x11c
	// Line 898, Address: 0x21af40, Func Offset: 0x120
	// Line 903, Address: 0x21af48, Func Offset: 0x128
	// Line 906, Address: 0x21af50, Func Offset: 0x130
	// Line 908, Address: 0x21af58, Func Offset: 0x138
	// Line 910, Address: 0x21af64, Func Offset: 0x144
	// Line 912, Address: 0x21af70, Func Offset: 0x150
	// Line 913, Address: 0x21af7c, Func Offset: 0x15c
	// Line 926, Address: 0x21af84, Func Offset: 0x164
	// Line 865, Address: 0x21af9c, Func Offset: 0x17c
	// Line 907, Address: 0x21afa4, Func Offset: 0x184
	// Line 909, Address: 0x21afac, Func Offset: 0x18c
	// Line 911, Address: 0x21afb4, Func Offset: 0x194
	// Line 927, Address: 0x21afbc, Func Offset: 0x19c
	// Func End, Address: 0x21afc4, Func Offset: 0x1a4
}

// SelfSetup__10zNMEPopperFv
// Start address: 0x21afd0
void zNMEPopper::SelfSetup()
{
	xBehaveMgr* bmgr;
	xPsyche* psy;
	// Line 814, Address: 0x21afd0, Func Offset: 0
	// Line 816, Address: 0x21afdc, Func Offset: 0xc
	// Line 817, Address: 0x21afe4, Func Offset: 0x14
	// Line 820, Address: 0x21aff8, Func Offset: 0x28
	// Line 825, Address: 0x21affc, Func Offset: 0x2c
	// Line 828, Address: 0x21b004, Func Offset: 0x34
	// Line 829, Address: 0x21b018, Func Offset: 0x48
	// Line 830, Address: 0x21b02c, Func Offset: 0x5c
	// Line 831, Address: 0x21b040, Func Offset: 0x70
	// Line 832, Address: 0x21b054, Func Offset: 0x84
	// Line 833, Address: 0x21b068, Func Offset: 0x98
	// Line 837, Address: 0x21b07c, Func Offset: 0xac
	// Line 838, Address: 0x21b090, Func Offset: 0xc0
	// Line 839, Address: 0x21b0b8, Func Offset: 0xe8
	// Line 842, Address: 0x21b0e0, Func Offset: 0x110
	// Line 843, Address: 0x21b0f4, Func Offset: 0x124
	// Line 846, Address: 0x21b108, Func Offset: 0x138
	// Line 849, Address: 0x21b110, Func Offset: 0x140
	// Line 852, Address: 0x21b11c, Func Offset: 0x14c
	// Func End, Address: 0x21b12c, Func Offset: 0x15c
}

// DfltVulnFlags__10zNMEPopperFv
// Start address: 0x21b130
int32 zNMEPopper::DfltVulnFlags()
{
	// Line 768, Address: 0x21b130, Func Offset: 0
	// Line 769, Address: 0x21b134, Func Offset: 0x4
	// Func End, Address: 0x21b13c, Func Offset: 0xc
}

// CreateConfig__10zNMEPopperFPCc
// Start address: 0x21b140
void zNMEPopper::CreateConfig()
{
	en_nmevar vidx;
	// Line 588, Address: 0x21b140, Func Offset: 0
	// Line 589, Address: 0x21b144, Func Offset: 0x4
	// Line 588, Address: 0x21b148, Func Offset: 0x8
	// Line 589, Address: 0x21b14c, Func Offset: 0xc
	// Line 588, Address: 0x21b150, Func Offset: 0x10
	// Line 589, Address: 0x21b154, Func Offset: 0x14
	// Line 592, Address: 0x21b174, Func Offset: 0x34
	// Line 593, Address: 0x21b17c, Func Offset: 0x3c
	// Line 607, Address: 0x21b194, Func Offset: 0x54
	// Func End, Address: 0x21b1a4, Func Offset: 0x64
}

