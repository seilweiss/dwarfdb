



void RibbonHorz(zNMESlammer* npc, xFXRibbon* rib, RibData* ribhelp);
void RibbonStep(zNMESlammer* npc);
void DoCapsuleTests(zNMESlammer* npc);
int32 WaveChecks(zNMESlammer* npc);
int32 ChkPrelimTran(zNMESlammer* npc, int32& nextgoal, en_trantype& trantype);
int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
int32 Exit();
int32 Enter();
float32 CalcLean(zNMESlammer* npc, float32 dt, xVec3* dir_dest);
int32 CanIAttackNow(zNMESlammer* npc, xVec3* pos_tgt);
void MoveEvade(zNMESlammer* npc, float32 dt);
int32 SubStateProcess(zNMESlammer* npc, float32 dt, int32& nextgoal, en_trantype& trantype);
int32 Chk_EarlyExit(zNMESlammer* npc, int32& nextgoal, en_trantype& trantype);
int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
int32 Resume();
int32 Enter();
int32 ChkTranCases(zNMESlammer* npc, int32& nextgoal, en_trantype& trantype);
int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
int32 Enter();
int32 Slam_SeePlyr(xGoal* rawgoal, en_trantype* trantype);
void StraddleClamp(xVec3* pos_pred);
float32 HealthRatio();
en_vis VisionTarget(xEnt* ent);
int32 SlamMailDamage(NMEDamageInfo* dmgmail);
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

// RibbonHorz__18zNMEGoalSlamAttackFP11zNMESlammerP9xFXRibbonPQ210NMEHelpRib7RibData
// Start address: 0x211050
void zNMEGoalSlamAttack::RibbonHorz(zNMESlammer* npc, xFXRibbon* rib, RibData* ribhelp)
{
	xVec3 pos_head;
	xVec3 pos_hand;
	xMat4x3* mat_root;
	xVec3 dir_emit;
	float32 dst;
	// Line 3017, Address: 0x211050, Func Offset: 0
	// Func End, Address: 0x211058, Func Offset: 0x8
}

// RibbonStep__18zNMEGoalSlamAttackFP11zNMESlammer
// Start address: 0x211060
void zNMEGoalSlamAttack::RibbonStep(zNMESlammer* npc)
{
	float32 tym_animCurr;
	int32 vidx;
	RibData* ribhelp;
	// Line 2956, Address: 0x211060, Func Offset: 0
	// Line 2958, Address: 0x211064, Func Offset: 0x4
	// Line 2956, Address: 0x211068, Func Offset: 0x8
	// Line 2958, Address: 0x21106c, Func Offset: 0xc
	// Line 2956, Address: 0x211070, Func Offset: 0x10
	// Line 2957, Address: 0x211084, Func Offset: 0x24
	// Line 2958, Address: 0x211094, Func Offset: 0x34
	// Line 2960, Address: 0x2110a0, Func Offset: 0x40
	// Line 2963, Address: 0x2110b4, Func Offset: 0x54
	// Line 2964, Address: 0x2110c0, Func Offset: 0x60
	// Line 2967, Address: 0x2110cc, Func Offset: 0x6c
	// Line 2968, Address: 0x2110d4, Func Offset: 0x74
	// Line 2970, Address: 0x2110e8, Func Offset: 0x88
	// Line 2974, Address: 0x2110f4, Func Offset: 0x94
	// Line 2975, Address: 0x2110fc, Func Offset: 0x9c
	// Line 2976, Address: 0x21110c, Func Offset: 0xac
	// Line 2977, Address: 0x211114, Func Offset: 0xb4
	// Line 2980, Address: 0x2113e8, Func Offset: 0x388
	// Func End, Address: 0x211404, Func Offset: 0x3a4
}

// DoCapsuleTests__18zNMEGoalSlamAttackFP11zNMESlammer
// Start address: 0x211410
void zNMEGoalSlamAttack::DoCapsuleTests(zNMESlammer* npc)
{
	float32 tym_animCurr;
	xVec3 pos_head;
	xVec3 pos_hand;
	xSweptSphere sws;
	// Line 2551, Address: 0x211410, Func Offset: 0
	// Line 2553, Address: 0x211414, Func Offset: 0x4
	// Line 2551, Address: 0x211418, Func Offset: 0x8
	// Line 2553, Address: 0x21141c, Func Offset: 0xc
	// Line 2551, Address: 0x211420, Func Offset: 0x10
	// Line 2552, Address: 0x211430, Func Offset: 0x20
	// Line 2553, Address: 0x21143c, Func Offset: 0x2c
	// Line 2555, Address: 0x211448, Func Offset: 0x38
	// Line 2564, Address: 0x211460, Func Offset: 0x50
	// Line 2563, Address: 0x211464, Func Offset: 0x54
	// Line 2564, Address: 0x211488, Func Offset: 0x78
	// Line 2565, Address: 0x2114a0, Func Offset: 0x90
	// Line 2566, Address: 0x2114f0, Func Offset: 0xe0
	// Line 2567, Address: 0x211540, Func Offset: 0x130
	// Line 2579, Address: 0x21154c, Func Offset: 0x13c
	// Line 2567, Address: 0x211550, Func Offset: 0x140
	// Line 2579, Address: 0x211554, Func Offset: 0x144
	// Line 2568, Address: 0x211558, Func Offset: 0x148
	// Line 2579, Address: 0x21155c, Func Offset: 0x14c
	// Line 2568, Address: 0x211560, Func Offset: 0x150
	// Line 2567, Address: 0x211568, Func Offset: 0x158
	// Line 2568, Address: 0x211590, Func Offset: 0x180
	// Line 2579, Address: 0x2115b8, Func Offset: 0x1a8
	// Line 2580, Address: 0x2115c0, Func Offset: 0x1b0
	// Line 2588, Address: 0x2115d8, Func Offset: 0x1c8
	// Line 2589, Address: 0x2115ec, Func Offset: 0x1dc
	// Line 2590, Address: 0x211604, Func Offset: 0x1f4
	// Line 2591, Address: 0x21160c, Func Offset: 0x1fc
	// Line 2592, Address: 0x21161c, Func Offset: 0x20c
	// Line 2633, Address: 0x211634, Func Offset: 0x224
	// Func End, Address: 0x211648, Func Offset: 0x238
}

// WaveChecks__18zNMEGoalSlamAttackFP11zNMESlammer
// Start address: 0x211650
int32 zNMEGoalSlamAttack::WaveChecks(zNMESlammer* npc)
{
	float32 tym_animCurr;
	zNMEHazard* haz;
	en_haztyp htyplist[10];
	en_nmevar vidx;
	int32 rc;
	xVec3 pos_emit;
	// Line 2508, Address: 0x211650, Func Offset: 0
	// Line 2510, Address: 0x211654, Func Offset: 0x4
	// Line 2508, Address: 0x211658, Func Offset: 0x8
	// Line 2510, Address: 0x21165c, Func Offset: 0xc
	// Line 2508, Address: 0x211660, Func Offset: 0x10
	// Line 2509, Address: 0x21166c, Func Offset: 0x1c
	// Line 2510, Address: 0x21167c, Func Offset: 0x2c
	// Line 2511, Address: 0x211688, Func Offset: 0x38
	// Line 2512, Address: 0x211690, Func Offset: 0x40
	// Line 2513, Address: 0x2116a4, Func Offset: 0x54
	// Line 2515, Address: 0x2116ac, Func Offset: 0x5c
	// Line 2518, Address: 0x2116b8, Func Offset: 0x68
	// Line 2519, Address: 0x2116c0, Func Offset: 0x70
	// Line 2522, Address: 0x2116c8, Func Offset: 0x78
	// Line 2526, Address: 0x211740, Func Offset: 0xf0
	// Line 2528, Address: 0x21174c, Func Offset: 0xfc
	// Line 2526, Address: 0x211758, Func Offset: 0x108
	// Line 2528, Address: 0x21175c, Func Offset: 0x10c
	// Line 2526, Address: 0x211760, Func Offset: 0x110
	// Line 2528, Address: 0x211764, Func Offset: 0x114
	// Line 2529, Address: 0x2117b4, Func Offset: 0x164
	// Line 2530, Address: 0x2117bc, Func Offset: 0x16c
	// Line 2531, Address: 0x211830, Func Offset: 0x1e0
	// Line 2534, Address: 0x21183c, Func Offset: 0x1ec
	// Line 2537, Address: 0x211840, Func Offset: 0x1f0
	// Line 2540, Address: 0x2118bc, Func Offset: 0x26c
	// Line 2537, Address: 0x2118c0, Func Offset: 0x270
	// Line 2540, Address: 0x2118dc, Func Offset: 0x28c
	// Line 2537, Address: 0x2118f0, Func Offset: 0x2a0
	// Line 2540, Address: 0x2118f8, Func Offset: 0x2a8
	// Line 2542, Address: 0x211920, Func Offset: 0x2d0
	// Line 2540, Address: 0x211924, Func Offset: 0x2d4
	// Line 2543, Address: 0x21192c, Func Offset: 0x2dc
	// Func End, Address: 0x211944, Func Offset: 0x2f4
}

// ChkPrelimTran__18zNMEGoalSlamAttackFP11zNMESlammerRiR11en_trantype
// Start address: 0x211950
int32 zNMEGoalSlamAttack::ChkPrelimTran(zNMESlammer* npc, int32& nextgoal, en_trantype& trantype)
{
	// Line 2478, Address: 0x211950, Func Offset: 0
	// Line 2481, Address: 0x21195c, Func Offset: 0xc
	// Line 2488, Address: 0x21197c, Func Offset: 0x2c
	// Line 2489, Address: 0x211988, Func Offset: 0x38
	// Line 2491, Address: 0x2119dc, Func Offset: 0x8c
	// Line 2492, Address: 0x2119e0, Func Offset: 0x90
	// Line 2493, Address: 0x2119ec, Func Offset: 0x9c
	// Line 2494, Address: 0x2119fc, Func Offset: 0xac
	// Line 2497, Address: 0x211a04, Func Offset: 0xb4
	// Line 2504, Address: 0x211a10, Func Offset: 0xc0
	// Line 2482, Address: 0x211a18, Func Offset: 0xc8
	// Line 2504, Address: 0x211a1c, Func Offset: 0xcc
	// Line 2483, Address: 0x211a20, Func Offset: 0xd0
	// Line 2504, Address: 0x211a28, Func Offset: 0xd8
	// Line 2485, Address: 0x211a3c, Func Offset: 0xec
	// Line 2504, Address: 0x211a44, Func Offset: 0xf4
	// Line 2488, Address: 0x211a5c, Func Offset: 0x10c
	// Line 2504, Address: 0x211a64, Func Offset: 0x114
	// Line 2499, Address: 0x211a68, Func Offset: 0x118
	// Line 2504, Address: 0x211a70, Func Offset: 0x120
	// Line 2501, Address: 0x211a84, Func Offset: 0x134
	// Line 2505, Address: 0x211a88, Func Offset: 0x138
	// Func End, Address: 0x211a94, Func Offset: 0x144
}

// Process__18zNMEGoalSlamAttackFP11en_trantypefPv
// Start address: 0x211aa0
int32 zNMEGoalSlamAttack::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	int32 nextgoal;
	zNMESlammer* npc;
	int32 doTran;
	xVec3 delta;
	int32 rc;
	// Line 2432, Address: 0x211aa0, Func Offset: 0
	// Line 2437, Address: 0x211ac8, Func Offset: 0x28
	// Line 2433, Address: 0x211acc, Func Offset: 0x2c
	// Line 2434, Address: 0x211ad4, Func Offset: 0x34
	// Line 2437, Address: 0x211ad8, Func Offset: 0x38
	// Line 2434, Address: 0x211adc, Func Offset: 0x3c
	// Line 2437, Address: 0x211ae0, Func Offset: 0x40
	// Line 2438, Address: 0x211ae8, Func Offset: 0x48
	// Line 2439, Address: 0x211af0, Func Offset: 0x50
	// Line 2445, Address: 0x211b00, Func Offset: 0x60
	// Line 2450, Address: 0x211b30, Func Offset: 0x90
	// Line 2445, Address: 0x211b34, Func Offset: 0x94
	// Line 2450, Address: 0x211b38, Func Offset: 0x98
	// Line 2451, Address: 0x211b4c, Func Offset: 0xac
	// Line 2452, Address: 0x211b54, Func Offset: 0xb4
	// Line 2451, Address: 0x211b58, Func Offset: 0xb8
	// Line 2456, Address: 0x211b68, Func Offset: 0xc8
	// Line 2451, Address: 0x211b70, Func Offset: 0xd0
	// Line 2452, Address: 0x211b78, Func Offset: 0xd8
	// Line 2451, Address: 0x211b7c, Func Offset: 0xdc
	// Line 2452, Address: 0x211b88, Func Offset: 0xe8
	// Line 2451, Address: 0x211b8c, Func Offset: 0xec
	// Line 2452, Address: 0x211bc8, Func Offset: 0x128
	// Line 2451, Address: 0x211bcc, Func Offset: 0x12c
	// Line 2452, Address: 0x211bd8, Func Offset: 0x138
	// Line 2451, Address: 0x211be8, Func Offset: 0x148
	// Line 2452, Address: 0x211bf0, Func Offset: 0x150
	// Line 2456, Address: 0x211c10, Func Offset: 0x170
	// Line 2460, Address: 0x211c18, Func Offset: 0x178
	// Line 2461, Address: 0x211c2c, Func Offset: 0x18c
	// Line 2462, Address: 0x211c38, Func Offset: 0x198
	// Line 2463, Address: 0x211c40, Func Offset: 0x1a0
	// Line 2471, Address: 0x211c5c, Func Offset: 0x1bc
	// Line 2473, Address: 0x211c68, Func Offset: 0x1c8
	// Line 2474, Address: 0x211c7c, Func Offset: 0x1dc
	// Func End, Address: 0x211c9c, Func Offset: 0x1fc
}

// Exit__18zNMEGoalSlamAttackFfPv
// Start address: 0x211ca0
int32 zNMEGoalSlamAttack::Exit()
{
	// Line 2422, Address: 0x211ca0, Func Offset: 0
	// Line 2426, Address: 0x211cac, Func Offset: 0xc
	// Line 2428, Address: 0x211ccc, Func Offset: 0x2c
	// Line 2429, Address: 0x211cf8, Func Offset: 0x58
	// Func End, Address: 0x211d08, Func Offset: 0x68
}

// Enter__18zNMEGoalSlamAttackFfPv
// Start address: 0x211d10
int32 zNMEGoalSlamAttack::Enter()
{
	zNMESlammer* npc;
	// Line 2404, Address: 0x211d10, Func Offset: 0
	// Line 2407, Address: 0x211d14, Func Offset: 0x4
	// Line 2404, Address: 0x211d18, Func Offset: 0x8
	// Line 2407, Address: 0x211d1c, Func Offset: 0xc
	// Line 2404, Address: 0x211d20, Func Offset: 0x10
	// Line 2408, Address: 0x211d24, Func Offset: 0x14
	// Line 2404, Address: 0x211d28, Func Offset: 0x18
	// Line 2408, Address: 0x211d2c, Func Offset: 0x1c
	// Line 2404, Address: 0x211d30, Func Offset: 0x20
	// Line 2409, Address: 0x211d34, Func Offset: 0x24
	// Line 2404, Address: 0x211d38, Func Offset: 0x28
	// Line 2409, Address: 0x211d3c, Func Offset: 0x2c
	// Line 2404, Address: 0x211d40, Func Offset: 0x30
	// Line 2410, Address: 0x211d44, Func Offset: 0x34
	// Line 2405, Address: 0x211d48, Func Offset: 0x38
	// Line 2410, Address: 0x211d4c, Func Offset: 0x3c
	// Line 2407, Address: 0x211d50, Func Offset: 0x40
	// Line 2405, Address: 0x211d58, Func Offset: 0x48
	// Line 2407, Address: 0x211d5c, Func Offset: 0x4c
	// Line 2408, Address: 0x211d68, Func Offset: 0x58
	// Line 2409, Address: 0x211d78, Func Offset: 0x68
	// Line 2410, Address: 0x211d88, Func Offset: 0x78
	// Line 2413, Address: 0x211d98, Func Offset: 0x88
	// Line 2415, Address: 0x211fa0, Func Offset: 0x290
	// Line 2418, Address: 0x212018, Func Offset: 0x308
	// Line 2415, Address: 0x212028, Func Offset: 0x318
	// Line 2418, Address: 0x21202c, Func Offset: 0x31c
	// Line 2415, Address: 0x212030, Func Offset: 0x320
	// Line 2416, Address: 0x212060, Func Offset: 0x350
	// Line 2418, Address: 0x212078, Func Offset: 0x368
	// Line 2419, Address: 0x2120f4, Func Offset: 0x3e4
	// Line 2418, Address: 0x2120f8, Func Offset: 0x3e8
	// Line 2419, Address: 0x2120fc, Func Offset: 0x3ec
	// Func End, Address: 0x212118, Func Offset: 0x408
}

// CalcLean__18zNMEGoalSlamBattleFP11zNMESlammerfPC5xVec3
// Start address: 0x212120
float32 zNMEGoalSlamBattle::CalcLean(zNMESlammer* npc, float32 dt, xVec3* dir_dest)
{
	float32 rat_oldLean;
	xVec3 dir_plyr;
	float32 rat_oldLean;
	float32 rat_oldLean;
	// Line 2292, Address: 0x212120, Func Offset: 0
	// Line 2386, Address: 0x212124, Func Offset: 0x4
	// Line 2292, Address: 0x212128, Func Offset: 0x8
	// Line 2384, Address: 0x21212c, Func Offset: 0xc
	// Line 2292, Address: 0x212130, Func Offset: 0x10
	// Line 2386, Address: 0x212134, Func Offset: 0x14
	// Line 2292, Address: 0x212138, Func Offset: 0x18
	// Line 2383, Address: 0x212148, Func Offset: 0x28
	// Line 2384, Address: 0x21214c, Func Offset: 0x2c
	// Line 2386, Address: 0x212150, Func Offset: 0x30
	// Line 2381, Address: 0x212154, Func Offset: 0x34
	// Line 2383, Address: 0x212158, Func Offset: 0x38
	// Line 2381, Address: 0x212164, Func Offset: 0x44
	// Line 2383, Address: 0x212168, Func Offset: 0x48
	// Line 2381, Address: 0x212178, Func Offset: 0x58
	// Line 2383, Address: 0x21217c, Func Offset: 0x5c
	// Line 2381, Address: 0x212180, Func Offset: 0x60
	// Line 2383, Address: 0x212184, Func Offset: 0x64
	// Line 2384, Address: 0x212194, Func Offset: 0x74
	// Line 2386, Address: 0x2121a8, Func Offset: 0x88
	// Line 2387, Address: 0x2121b4, Func Offset: 0x94
	// Line 2389, Address: 0x212238, Func Offset: 0x118
	// Line 2390, Address: 0x21224c, Func Offset: 0x12c
	// Line 2396, Address: 0x21232c, Func Offset: 0x20c
	// Func End, Address: 0x212348, Func Offset: 0x228
}

// CanIAttackNow__18zNMEGoalSlamBattleFP11zNMESlammerPC5xVec3
// Start address: 0x212350
int32 zNMEGoalSlamBattle::CanIAttackNow(zNMESlammer* npc, xVec3* pos_tgt)
{
	NMECfgSlammer* cfg;
	xVec3 vec_tgt;
	float32 dy;
	xVec3 dir_tgt;
	// Line 1908, Address: 0x212350, Func Offset: 0
	// Line 1914, Address: 0x212354, Func Offset: 0x4
	// Line 1909, Address: 0x21235c, Func Offset: 0xc
	// Line 1914, Address: 0x212360, Func Offset: 0x10
	// Line 1915, Address: 0x2123a0, Func Offset: 0x50
	// Line 1914, Address: 0x2123a4, Func Offset: 0x54
	// Line 1915, Address: 0x2123a8, Func Offset: 0x58
	// Line 1916, Address: 0x2123c0, Func Offset: 0x70
	// Line 1918, Address: 0x2123cc, Func Offset: 0x7c
	// Line 1921, Address: 0x2123dc, Func Offset: 0x8c
	// Line 1923, Address: 0x2123f4, Func Offset: 0xa4
	// Line 1924, Address: 0x212404, Func Offset: 0xb4
	// Line 1917, Address: 0x212414, Func Offset: 0xc4
	// Line 1919, Address: 0x21241c, Func Offset: 0xcc
	// Line 1922, Address: 0x212424, Func Offset: 0xd4
	// Line 1926, Address: 0x21242c, Func Offset: 0xdc
	// Line 1929, Address: 0x212448, Func Offset: 0xf8
	// Line 1926, Address: 0x21244c, Func Offset: 0xfc
	// Line 1929, Address: 0x212468, Func Offset: 0x118
	// Line 1926, Address: 0x212470, Func Offset: 0x120
	// Line 1929, Address: 0x212484, Func Offset: 0x134
	// Line 1926, Address: 0x21248c, Func Offset: 0x13c
	// Line 1929, Address: 0x2124bc, Func Offset: 0x16c
	// Line 1926, Address: 0x2124c0, Func Offset: 0x170
	// Line 1929, Address: 0x2124c4, Func Offset: 0x174
	// Line 1926, Address: 0x2124c8, Func Offset: 0x178
	// Line 1929, Address: 0x2124d0, Func Offset: 0x180
	// Line 1932, Address: 0x2124fc, Func Offset: 0x1ac
	// Func End, Address: 0x212508, Func Offset: 0x1b8
}

// MoveEvade__18zNMEGoalSlamBattleFP11zNMESlammerf
// Start address: 0x212510
void zNMEGoalSlamBattle::MoveEvade(zNMESlammer* npc, float32 dt)
{
	xVec3 dir_dest;
	NMECfgSlammer* cfg;
	xVec3 delta;
	// Line 1844, Address: 0x212510, Func Offset: 0
	// Line 1857, Address: 0x212514, Func Offset: 0x4
	// Line 1844, Address: 0x212518, Func Offset: 0x8
	// Line 1857, Address: 0x21251c, Func Offset: 0xc
	// Line 1844, Address: 0x212520, Func Offset: 0x10
	// Line 1854, Address: 0x212530, Func Offset: 0x20
	// Line 1844, Address: 0x212534, Func Offset: 0x24
	// Line 1854, Address: 0x212538, Func Offset: 0x28
	// Line 1844, Address: 0x212544, Func Offset: 0x34
	// Line 1854, Address: 0x212548, Func Offset: 0x38
	// Line 1844, Address: 0x21254c, Func Offset: 0x3c
	// Line 1854, Address: 0x212550, Func Offset: 0x40
	// Line 1847, Address: 0x212554, Func Offset: 0x44
	// Line 1854, Address: 0x212560, Func Offset: 0x50
	// Line 1855, Address: 0x212588, Func Offset: 0x78
	// Line 1854, Address: 0x21258c, Func Offset: 0x7c
	// Line 1855, Address: 0x212590, Func Offset: 0x80
	// Line 1854, Address: 0x212594, Func Offset: 0x84
	// Line 1855, Address: 0x212598, Func Offset: 0x88
	// Line 1857, Address: 0x2125a8, Func Offset: 0x98
	// Line 1860, Address: 0x2125b4, Func Offset: 0xa4
	// Line 1862, Address: 0x2125e0, Func Offset: 0xd0
	// Line 1865, Address: 0x2125e4, Func Offset: 0xd4
	// Line 1866, Address: 0x2125f4, Func Offset: 0xe4
	// Line 1865, Address: 0x2125f8, Func Offset: 0xe8
	// Line 1866, Address: 0x2125fc, Func Offset: 0xec
	// Line 1865, Address: 0x212600, Func Offset: 0xf0
	// Line 1866, Address: 0x21260c, Func Offset: 0xfc
	// Line 1865, Address: 0x212614, Func Offset: 0x104
	// Line 1866, Address: 0x21261c, Func Offset: 0x10c
	// Line 1867, Address: 0x212624, Func Offset: 0x114
	// Line 1868, Address: 0x21262c, Func Offset: 0x11c
	// Line 1867, Address: 0x212630, Func Offset: 0x120
	// Line 1868, Address: 0x212650, Func Offset: 0x140
	// Line 1867, Address: 0x212654, Func Offset: 0x144
	// Line 1868, Address: 0x21267c, Func Offset: 0x16c
	// Line 1867, Address: 0x212680, Func Offset: 0x170
	// Line 1868, Address: 0x212690, Func Offset: 0x180
	// Line 1867, Address: 0x212694, Func Offset: 0x184
	// Line 1868, Address: 0x212698, Func Offset: 0x188
	// Line 1867, Address: 0x21269c, Func Offset: 0x18c
	// Line 1868, Address: 0x2126a4, Func Offset: 0x194
	// Line 1870, Address: 0x2126d0, Func Offset: 0x1c0
	// Line 1858, Address: 0x2126f4, Func Offset: 0x1e4
	// Line 1871, Address: 0x2126fc, Func Offset: 0x1ec
	// Func End, Address: 0x212718, Func Offset: 0x208
}

// SubStateProcess__18zNMEGoalSlamBattleFP11zNMESlammerfRiR11en_trantype
// Start address: 0x212720
int32 zNMEGoalSlamBattle::SubStateProcess(zNMESlammer* npc, float32 dt, int32& nextgoal, en_trantype& trantype)
{
	int32 doGoalTransition;
	en_alertslam old_alertslam;
	int32 subenter;
	xVec3 pos_tgt;
	int32 rc;
	// Line 1735, Address: 0x212720, Func Offset: 0
	// Line 1746, Address: 0x212724, Func Offset: 0x4
	// Line 1735, Address: 0x212728, Func Offset: 0x8
	// Line 1748, Address: 0x21272c, Func Offset: 0xc
	// Line 1735, Address: 0x212730, Func Offset: 0x10
	// Line 1736, Address: 0x21273c, Func Offset: 0x1c
	// Line 1735, Address: 0x212740, Func Offset: 0x20
	// Line 1744, Address: 0x21275c, Func Offset: 0x3c
	// Line 1746, Address: 0x212760, Func Offset: 0x40
	// Line 1743, Address: 0x212764, Func Offset: 0x44
	// Line 1746, Address: 0x21276c, Func Offset: 0x4c
	// Line 1744, Address: 0x212770, Func Offset: 0x50
	// Line 1746, Address: 0x212778, Func Offset: 0x58
	// Line 1748, Address: 0x212788, Func Offset: 0x68
	// Line 1750, Address: 0x2127c4, Func Offset: 0xa4
	// Line 1755, Address: 0x2127cc, Func Offset: 0xac
	// Line 1756, Address: 0x2127d0, Func Offset: 0xb0
	// Line 1759, Address: 0x2127d8, Func Offset: 0xb8
	// Line 1763, Address: 0x2127e0, Func Offset: 0xc0
	// Line 1764, Address: 0x2127e4, Func Offset: 0xc4
	// Line 1769, Address: 0x2127ec, Func Offset: 0xcc
	// Line 1764, Address: 0x2127f8, Func Offset: 0xd8
	// Line 1769, Address: 0x2127fc, Func Offset: 0xdc
	// Line 1770, Address: 0x21288c, Func Offset: 0x16c
	// Line 1778, Address: 0x212898, Func Offset: 0x178
	// Line 1779, Address: 0x2128a8, Func Offset: 0x188
	// Line 1782, Address: 0x2128e8, Func Offset: 0x1c8
	// Line 1783, Address: 0x2128ec, Func Offset: 0x1cc
	// Line 1787, Address: 0x2128f4, Func Offset: 0x1d4
	// Line 1793, Address: 0x2128fc, Func Offset: 0x1dc
	// Line 1794, Address: 0x212a30, Func Offset: 0x310
	// Line 1796, Address: 0x212a6c, Func Offset: 0x34c
	// Line 1800, Address: 0x212a74, Func Offset: 0x354
	// Line 1801, Address: 0x212a78, Func Offset: 0x358
	// Line 1803, Address: 0x212a80, Func Offset: 0x360
	// Line 1802, Address: 0x212a84, Func Offset: 0x364
	// Line 1804, Address: 0x212a8c, Func Offset: 0x36c
	// Line 1808, Address: 0x212a94, Func Offset: 0x374
	// Line 1813, Address: 0x212a9c, Func Offset: 0x37c
	// Line 1815, Address: 0x212ac4, Func Offset: 0x3a4
	// Line 1835, Address: 0x212acc, Func Offset: 0x3ac
	// Line 1839, Address: 0x212ad8, Func Offset: 0x3b8
	// Line 1751, Address: 0x212ae4, Func Offset: 0x3c4
	// Line 1839, Address: 0x212ae8, Func Offset: 0x3c8
	// Line 1751, Address: 0x212aec, Func Offset: 0x3cc
	// Line 1839, Address: 0x212af0, Func Offset: 0x3d0
	// Line 1751, Address: 0x212b04, Func Offset: 0x3e4
	// Line 1839, Address: 0x212b08, Func Offset: 0x3e8
	// Line 1752, Address: 0x212b14, Func Offset: 0x3f4
	// Line 1839, Address: 0x212b18, Func Offset: 0x3f8
	// Line 1751, Address: 0x212b28, Func Offset: 0x408
	// Line 1839, Address: 0x212b2c, Func Offset: 0x40c
	// Line 1751, Address: 0x212b3c, Func Offset: 0x41c
	// Line 1839, Address: 0x212b4c, Func Offset: 0x42c
	// Line 1760, Address: 0x212b50, Func Offset: 0x430
	// Line 1839, Address: 0x212b54, Func Offset: 0x434
	// Line 1760, Address: 0x212b58, Func Offset: 0x438
	// Line 1839, Address: 0x212b5c, Func Offset: 0x43c
	// Line 1760, Address: 0x212b70, Func Offset: 0x450
	// Line 1839, Address: 0x212b74, Func Offset: 0x454
	// Line 1761, Address: 0x212b80, Func Offset: 0x460
	// Line 1839, Address: 0x212b84, Func Offset: 0x464
	// Line 1760, Address: 0x212b94, Func Offset: 0x474
	// Line 1839, Address: 0x212b98, Func Offset: 0x478
	// Line 1760, Address: 0x212ba8, Func Offset: 0x488
	// Line 1839, Address: 0x212bb8, Func Offset: 0x498
	// Line 1788, Address: 0x212bbc, Func Offset: 0x49c
	// Line 1839, Address: 0x212bc0, Func Offset: 0x4a0
	// Line 1788, Address: 0x212bc4, Func Offset: 0x4a4
	// Line 1839, Address: 0x212bc8, Func Offset: 0x4a8
	// Line 1788, Address: 0x212bdc, Func Offset: 0x4bc
	// Line 1839, Address: 0x212be0, Func Offset: 0x4c0
	// Line 1789, Address: 0x212bec, Func Offset: 0x4cc
	// Line 1839, Address: 0x212bf0, Func Offset: 0x4d0
	// Line 1788, Address: 0x212c04, Func Offset: 0x4e4
	// Line 1839, Address: 0x212c08, Func Offset: 0x4e8
	// Line 1788, Address: 0x212c18, Func Offset: 0x4f8
	// Line 1793, Address: 0x212c28, Func Offset: 0x508
	// Line 1839, Address: 0x212c34, Func Offset: 0x514
	// Line 1793, Address: 0x212c3c, Func Offset: 0x51c
	// Line 1839, Address: 0x212c44, Func Offset: 0x524
	// Line 1793, Address: 0x212c4c, Func Offset: 0x52c
	// Line 1839, Address: 0x212c58, Func Offset: 0x538
	// Line 1820, Address: 0x212c88, Func Offset: 0x568
	// Line 1839, Address: 0x212c8c, Func Offset: 0x56c
	// Line 1821, Address: 0x212c98, Func Offset: 0x578
	// Line 1839, Address: 0x212ca0, Func Offset: 0x580
	// Line 1821, Address: 0x212ca4, Func Offset: 0x584
	// Line 1839, Address: 0x212ca8, Func Offset: 0x588
	// Line 1821, Address: 0x212ce8, Func Offset: 0x5c8
	// Line 1839, Address: 0x212cec, Func Offset: 0x5cc
	// Line 1821, Address: 0x212d08, Func Offset: 0x5e8
	// Line 1839, Address: 0x212d10, Func Offset: 0x5f0
	// Line 1821, Address: 0x212d44, Func Offset: 0x624
	// Line 1839, Address: 0x212d50, Func Offset: 0x630
	// Line 1821, Address: 0x212d5c, Func Offset: 0x63c
	// Line 1839, Address: 0x212d60, Func Offset: 0x640
	// Line 1822, Address: 0x212d6c, Func Offset: 0x64c
	// Line 1839, Address: 0x212d80, Func Offset: 0x660
	// Line 1822, Address: 0x212d88, Func Offset: 0x668
	// Line 1839, Address: 0x212d94, Func Offset: 0x674
	// Line 1827, Address: 0x212da4, Func Offset: 0x684
	// Line 1839, Address: 0x212da8, Func Offset: 0x688
	// Line 1827, Address: 0x212dac, Func Offset: 0x68c
	// Line 1839, Address: 0x212db0, Func Offset: 0x690
	// Line 1827, Address: 0x212dc4, Func Offset: 0x6a4
	// Line 1839, Address: 0x212dc8, Func Offset: 0x6a8
	// Line 1828, Address: 0x212dd4, Func Offset: 0x6b4
	// Line 1839, Address: 0x212dd8, Func Offset: 0x6b8
	// Line 1821, Address: 0x212de8, Func Offset: 0x6c8
	// Line 1839, Address: 0x212e04, Func Offset: 0x6e4
	// Line 1821, Address: 0x212e08, Func Offset: 0x6e8
	// Line 1839, Address: 0x212e0c, Func Offset: 0x6ec
	// Line 1821, Address: 0x212e14, Func Offset: 0x6f4
	// Line 1839, Address: 0x212e1c, Func Offset: 0x6fc
	// Line 1827, Address: 0x212e2c, Func Offset: 0x70c
	// Line 1839, Address: 0x212e30, Func Offset: 0x710
	// Line 1827, Address: 0x212e40, Func Offset: 0x720
	// Line 1839, Address: 0x212e50, Func Offset: 0x730
	// Line 1836, Address: 0x212e54, Func Offset: 0x734
	// Line 1840, Address: 0x212e78, Func Offset: 0x758
	// Func End, Address: 0x212ea4, Func Offset: 0x784
}

// Chk_EarlyExit__18zNMEGoalSlamBattleFP11zNMESlammerRiR11en_trantype
// Start address: 0x212eb0
int32 zNMEGoalSlamBattle::Chk_EarlyExit(zNMESlammer* npc, int32& nextgoal, en_trantype& trantype)
{
	en_vis vis;
	// Line 1690, Address: 0x212eb0, Func Offset: 0
	// Line 1691, Address: 0x212ed4, Func Offset: 0x24
	// Line 1694, Address: 0x212ef4, Func Offset: 0x44
	// Line 1701, Address: 0x212f08, Func Offset: 0x58
	// Line 1709, Address: 0x212f24, Func Offset: 0x74
	// Line 1715, Address: 0x212f34, Func Offset: 0x84
	// Line 1709, Address: 0x212f40, Func Offset: 0x90
	// Line 1715, Address: 0x212f44, Func Offset: 0x94
	// Line 1722, Address: 0x212f74, Func Offset: 0xc4
	// Line 1723, Address: 0x212f8c, Func Offset: 0xdc
	// Line 1730, Address: 0x212f98, Func Offset: 0xe8
	// Line 1692, Address: 0x212fa0, Func Offset: 0xf0
	// Line 1697, Address: 0x212fa8, Func Offset: 0xf8
	// Line 1730, Address: 0x212fac, Func Offset: 0xfc
	// Line 1696, Address: 0x212fb0, Func Offset: 0x100
	// Line 1730, Address: 0x212fb8, Func Offset: 0x108
	// Line 1698, Address: 0x212fcc, Func Offset: 0x11c
	// Line 1703, Address: 0x212fd4, Func Offset: 0x124
	// Line 1730, Address: 0x212fd8, Func Offset: 0x128
	// Line 1703, Address: 0x212fdc, Func Offset: 0x12c
	// Line 1730, Address: 0x212fe0, Func Offset: 0x130
	// Line 1704, Address: 0x212fe4, Func Offset: 0x134
	// Line 1730, Address: 0x212fe8, Func Offset: 0x138
	// Line 1705, Address: 0x212ffc, Func Offset: 0x14c
	// Line 1706, Address: 0x213000, Func Offset: 0x150
	// Line 1705, Address: 0x213004, Func Offset: 0x154
	// Line 1706, Address: 0x21301c, Func Offset: 0x16c
	// Line 1711, Address: 0x213024, Func Offset: 0x174
	// Line 1730, Address: 0x213028, Func Offset: 0x178
	// Line 1711, Address: 0x21302c, Func Offset: 0x17c
	// Line 1712, Address: 0x213030, Func Offset: 0x180
	// Line 1730, Address: 0x213038, Func Offset: 0x188
	// Line 1715, Address: 0x213040, Func Offset: 0x190
	// Line 1730, Address: 0x213044, Func Offset: 0x194
	// Line 1715, Address: 0x213054, Func Offset: 0x1a4
	// Line 1730, Address: 0x213058, Func Offset: 0x1a8
	// Line 1715, Address: 0x21305c, Func Offset: 0x1ac
	// Line 1730, Address: 0x213060, Func Offset: 0x1b0
	// Line 1715, Address: 0x213064, Func Offset: 0x1b4
	// Line 1730, Address: 0x213068, Func Offset: 0x1b8
	// Line 1715, Address: 0x21306c, Func Offset: 0x1bc
	// Line 1730, Address: 0x213070, Func Offset: 0x1c0
	// Line 1715, Address: 0x21308c, Func Offset: 0x1dc
	// Line 1730, Address: 0x213090, Func Offset: 0x1e0
	// Line 1715, Address: 0x213094, Func Offset: 0x1e4
	// Line 1730, Address: 0x21309c, Func Offset: 0x1ec
	// Line 1715, Address: 0x2130c4, Func Offset: 0x214
	// Line 1716, Address: 0x2130e4, Func Offset: 0x234
	// Line 1718, Address: 0x2130e8, Func Offset: 0x238
	// Line 1730, Address: 0x2130ec, Func Offset: 0x23c
	// Line 1718, Address: 0x2130f0, Func Offset: 0x240
	// Line 1717, Address: 0x2130f4, Func Offset: 0x244
	// Line 1718, Address: 0x2130f8, Func Offset: 0x248
	// Line 1717, Address: 0x2130fc, Func Offset: 0x24c
	// Line 1730, Address: 0x213100, Func Offset: 0x250
	// Line 1719, Address: 0x213114, Func Offset: 0x264
	// Line 1724, Address: 0x21311c, Func Offset: 0x26c
	// Line 1726, Address: 0x213120, Func Offset: 0x270
	// Line 1730, Address: 0x213124, Func Offset: 0x274
	// Line 1726, Address: 0x213128, Func Offset: 0x278
	// Line 1725, Address: 0x21312c, Func Offset: 0x27c
	// Line 1726, Address: 0x213130, Func Offset: 0x280
	// Line 1725, Address: 0x213134, Func Offset: 0x284
	// Line 1730, Address: 0x213138, Func Offset: 0x288
	// Line 1727, Address: 0x21314c, Func Offset: 0x29c
	// Line 1731, Address: 0x213150, Func Offset: 0x2a0
	// Func End, Address: 0x21316c, Func Offset: 0x2bc
}

// Process__18zNMEGoalSlamBattleFP11en_trantypefPv
// Start address: 0x213170
int32 zNMEGoalSlamBattle::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	zNMESlammer* npc;
	int32 nextgoal;
	int32 doTran;
	// Line 1664, Address: 0x213170, Func Offset: 0
	// Line 1674, Address: 0x213190, Func Offset: 0x20
	// Line 1664, Address: 0x213194, Func Offset: 0x24
	// Line 1665, Address: 0x21319c, Func Offset: 0x2c
	// Line 1674, Address: 0x2131a4, Func Offset: 0x34
	// Line 1665, Address: 0x2131a8, Func Offset: 0x38
	// Line 1674, Address: 0x2131ac, Func Offset: 0x3c
	// Line 1675, Address: 0x2131b8, Func Offset: 0x48
	// Line 1676, Address: 0x2131c0, Func Offset: 0x50
	// Line 1681, Address: 0x2131c8, Func Offset: 0x58
	// Line 1682, Address: 0x2131dc, Func Offset: 0x6c
	// Line 1683, Address: 0x2131e4, Func Offset: 0x74
	// Line 1685, Address: 0x2131ec, Func Offset: 0x7c
	// Line 1686, Address: 0x213244, Func Offset: 0xd4
	// Func End, Address: 0x213264, Func Offset: 0xf4
}

// Resume__18zNMEGoalSlamBattleFfPv
// Start address: 0x213270
int32 zNMEGoalSlamBattle::Resume()
{
	// Line 1646, Address: 0x213270, Func Offset: 0
	// Line 1647, Address: 0x213274, Func Offset: 0x4
	// Line 1646, Address: 0x213278, Func Offset: 0x8
	// Line 1647, Address: 0x21327c, Func Offset: 0xc
	// Line 1646, Address: 0x213280, Func Offset: 0x10
	// Line 1647, Address: 0x213284, Func Offset: 0x14
	// Line 1646, Address: 0x213288, Func Offset: 0x18
	// Line 1647, Address: 0x213290, Func Offset: 0x20
	// Line 1650, Address: 0x2132b0, Func Offset: 0x40
	// Line 1652, Address: 0x2132b8, Func Offset: 0x48
	// Line 1650, Address: 0x2132bc, Func Offset: 0x4c
	// Line 1652, Address: 0x2132cc, Func Offset: 0x5c
	// Line 1647, Address: 0x2132d8, Func Offset: 0x68
	// Line 1652, Address: 0x2132dc, Func Offset: 0x6c
	// Line 1647, Address: 0x2132e0, Func Offset: 0x70
	// Line 1652, Address: 0x2132e4, Func Offset: 0x74
	// Line 1647, Address: 0x2132f8, Func Offset: 0x88
	// Line 1652, Address: 0x2132fc, Func Offset: 0x8c
	// Line 1647, Address: 0x213304, Func Offset: 0x94
	// Line 1652, Address: 0x213308, Func Offset: 0x98
	// Line 1647, Address: 0x213318, Func Offset: 0xa8
	// Line 1653, Address: 0x213328, Func Offset: 0xb8
	// Func End, Address: 0x213340, Func Offset: 0xd0
}

// Enter__18zNMEGoalSlamBattleFfPv
// Start address: 0x213340
int32 zNMEGoalSlamBattle::Enter()
{
	// Line 1634, Address: 0x213340, Func Offset: 0
	// Line 1635, Address: 0x213344, Func Offset: 0x4
	// Line 1634, Address: 0x213348, Func Offset: 0x8
	// Line 1637, Address: 0x21334c, Func Offset: 0xc
	// Line 1634, Address: 0x213350, Func Offset: 0x10
	// Line 1635, Address: 0x21335c, Func Offset: 0x1c
	// Line 1637, Address: 0x213360, Func Offset: 0x20
	// Line 1640, Address: 0x213388, Func Offset: 0x48
	// Line 1642, Address: 0x213390, Func Offset: 0x50
	// Line 1640, Address: 0x213394, Func Offset: 0x54
	// Line 1642, Address: 0x2133a4, Func Offset: 0x64
	// Line 1637, Address: 0x2133b0, Func Offset: 0x70
	// Line 1642, Address: 0x2133b4, Func Offset: 0x74
	// Line 1637, Address: 0x2133b8, Func Offset: 0x78
	// Line 1642, Address: 0x2133bc, Func Offset: 0x7c
	// Line 1637, Address: 0x2133d0, Func Offset: 0x90
	// Line 1642, Address: 0x2133d4, Func Offset: 0x94
	// Line 1637, Address: 0x2133dc, Func Offset: 0x9c
	// Line 1642, Address: 0x2133e0, Func Offset: 0xa0
	// Line 1637, Address: 0x2133f0, Func Offset: 0xb0
	// Line 1643, Address: 0x213400, Func Offset: 0xc0
	// Func End, Address: 0x213418, Func Offset: 0xd8
}

// ChkTranCases__17zNMEGoalSlamAwareFP11zNMESlammerRiR11en_trantype
// Start address: 0x213420
int32 zNMEGoalSlamAware::ChkTranCases(zNMESlammer* npc, int32& nextgoal, en_trantype& trantype)
{
	en_vis vis;
	int32 vidx;
	float32* wtlist;
	// Line 1553, Address: 0x213420, Func Offset: 0
	// Line 1555, Address: 0x21344c, Func Offset: 0x2c
	// Line 1556, Address: 0x21346c, Func Offset: 0x4c
	// Line 1558, Address: 0x213474, Func Offset: 0x54
	// Line 1561, Address: 0x21348c, Func Offset: 0x6c
	// Line 1569, Address: 0x2134a0, Func Offset: 0x80
	// Line 1576, Address: 0x2134c8, Func Offset: 0xa8
	// Line 1586, Address: 0x2134d4, Func Offset: 0xb4
	// Line 1588, Address: 0x2134f4, Func Offset: 0xd4
	// Line 1597, Address: 0x213500, Func Offset: 0xe0
	// Line 1625, Address: 0x213508, Func Offset: 0xe8
	// Line 1559, Address: 0x213510, Func Offset: 0xf0
	// Line 1564, Address: 0x213518, Func Offset: 0xf8
	// Line 1625, Address: 0x21351c, Func Offset: 0xfc
	// Line 1564, Address: 0x213520, Func Offset: 0x100
	// Line 1563, Address: 0x213524, Func Offset: 0x104
	// Line 1564, Address: 0x213528, Func Offset: 0x108
	// Line 1563, Address: 0x21352c, Func Offset: 0x10c
	// Line 1625, Address: 0x213530, Func Offset: 0x110
	// Line 1565, Address: 0x213544, Func Offset: 0x124
	// Line 1570, Address: 0x21354c, Func Offset: 0x12c
	// Line 1572, Address: 0x213550, Func Offset: 0x130
	// Line 1625, Address: 0x213554, Func Offset: 0x134
	// Line 1572, Address: 0x213558, Func Offset: 0x138
	// Line 1571, Address: 0x21355c, Func Offset: 0x13c
	// Line 1572, Address: 0x213560, Func Offset: 0x140
	// Line 1571, Address: 0x213564, Func Offset: 0x144
	// Line 1625, Address: 0x213568, Func Offset: 0x148
	// Line 1573, Address: 0x21357c, Func Offset: 0x15c
	// Line 1579, Address: 0x213584, Func Offset: 0x164
	// Line 1625, Address: 0x213588, Func Offset: 0x168
	// Line 1579, Address: 0x21358c, Func Offset: 0x16c
	// Line 1578, Address: 0x213590, Func Offset: 0x170
	// Line 1579, Address: 0x213594, Func Offset: 0x174
	// Line 1578, Address: 0x213598, Func Offset: 0x178
	// Line 1625, Address: 0x21359c, Func Offset: 0x17c
	// Line 1580, Address: 0x2135b0, Func Offset: 0x190
	// Line 1591, Address: 0x2135b8, Func Offset: 0x198
	// Line 1593, Address: 0x2135bc, Func Offset: 0x19c
	// Line 1625, Address: 0x2135c0, Func Offset: 0x1a0
	// Line 1593, Address: 0x2135c4, Func Offset: 0x1a4
	// Line 1592, Address: 0x2135c8, Func Offset: 0x1a8
	// Line 1593, Address: 0x2135cc, Func Offset: 0x1ac
	// Line 1592, Address: 0x2135d0, Func Offset: 0x1b0
	// Line 1625, Address: 0x2135d4, Func Offset: 0x1b4
	// Line 1594, Address: 0x2135e8, Func Offset: 0x1c8
	// Line 1625, Address: 0x2135f0, Func Offset: 0x1d0
	// Line 1601, Address: 0x2135f8, Func Offset: 0x1d8
	// Line 1625, Address: 0x2135fc, Func Offset: 0x1dc
	// Line 1602, Address: 0x213618, Func Offset: 0x1f8
	// Line 1605, Address: 0x21361c, Func Offset: 0x1fc
	// Line 1625, Address: 0x213620, Func Offset: 0x200
	// Line 1617, Address: 0x213630, Func Offset: 0x210
	// Line 1625, Address: 0x213634, Func Offset: 0x214
	// Line 1619, Address: 0x213640, Func Offset: 0x220
	// Line 1620, Address: 0x213644, Func Offset: 0x224
	// Line 1625, Address: 0x213648, Func Offset: 0x228
	// Line 1620, Address: 0x21364c, Func Offset: 0x22c
	// Line 1625, Address: 0x213650, Func Offset: 0x230
	// Line 1620, Address: 0x213654, Func Offset: 0x234
	// Line 1625, Address: 0x213658, Func Offset: 0x238
	// Line 1621, Address: 0x213664, Func Offset: 0x244
	// Line 1625, Address: 0x21366c, Func Offset: 0x24c
	// Line 1602, Address: 0x213674, Func Offset: 0x254
	// Line 1625, Address: 0x21367c, Func Offset: 0x25c
	// Line 1602, Address: 0x213684, Func Offset: 0x264
	// Line 1625, Address: 0x2136a8, Func Offset: 0x288
	// Line 1602, Address: 0x2136b0, Func Offset: 0x290
	// Line 1625, Address: 0x2136b8, Func Offset: 0x298
	// Line 1602, Address: 0x2136bc, Func Offset: 0x29c
	// Line 1625, Address: 0x2136c0, Func Offset: 0x2a0
	// Line 1602, Address: 0x2136c8, Func Offset: 0x2a8
	// Line 1625, Address: 0x2136cc, Func Offset: 0x2ac
	// Line 1602, Address: 0x2136d4, Func Offset: 0x2b4
	// Line 1625, Address: 0x2136d8, Func Offset: 0x2b8
	// Line 1602, Address: 0x2136e4, Func Offset: 0x2c4
	// Line 1625, Address: 0x2136e8, Func Offset: 0x2c8
	// Line 1602, Address: 0x2136f4, Func Offset: 0x2d4
	// Line 1625, Address: 0x2136f8, Func Offset: 0x2d8
	// Line 1602, Address: 0x213708, Func Offset: 0x2e8
	// Line 1625, Address: 0x213718, Func Offset: 0x2f8
	// Line 1602, Address: 0x21371c, Func Offset: 0x2fc
	// Line 1625, Address: 0x213728, Func Offset: 0x308
	// Line 1607, Address: 0x21374c, Func Offset: 0x32c
	// Line 1608, Address: 0x213750, Func Offset: 0x330
	// Line 1625, Address: 0x213754, Func Offset: 0x334
	// Line 1608, Address: 0x213758, Func Offset: 0x338
	// Line 1625, Address: 0x21375c, Func Offset: 0x33c
	// Line 1608, Address: 0x213760, Func Offset: 0x340
	// Line 1625, Address: 0x213764, Func Offset: 0x344
	// Line 1609, Address: 0x213770, Func Offset: 0x350
	// Line 1625, Address: 0x213778, Func Offset: 0x358
	// Line 1613, Address: 0x21377c, Func Offset: 0x35c
	// Line 1614, Address: 0x213780, Func Offset: 0x360
	// Line 1625, Address: 0x213784, Func Offset: 0x364
	// Line 1614, Address: 0x213788, Func Offset: 0x368
	// Line 1625, Address: 0x21378c, Func Offset: 0x36c
	// Line 1614, Address: 0x213790, Func Offset: 0x370
	// Line 1625, Address: 0x213794, Func Offset: 0x374
	// Line 1615, Address: 0x2137a0, Func Offset: 0x380
	// Line 1626, Address: 0x2137a4, Func Offset: 0x384
	// Func End, Address: 0x2137c8, Func Offset: 0x3a8
}

// Process__17zNMEGoalSlamAwareFP11en_trantypefPv
// Start address: 0x2137d0
int32 zNMEGoalSlamAware::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	zNMESlammer* npc;
	int32 nextgoal;
	int32 doTran;
	// Line 1523, Address: 0x2137d0, Func Offset: 0
	// Line 1528, Address: 0x2137e8, Func Offset: 0x18
	// Line 1523, Address: 0x2137ec, Func Offset: 0x1c
	// Line 1528, Address: 0x213804, Func Offset: 0x34
	// Line 1524, Address: 0x213808, Func Offset: 0x38
	// Line 1528, Address: 0x213814, Func Offset: 0x44
	// Line 1529, Address: 0x213820, Func Offset: 0x50
	// Line 1536, Address: 0x213828, Func Offset: 0x58
	// Line 1538, Address: 0x21383c, Func Offset: 0x6c
	// Line 1539, Address: 0x213850, Func Offset: 0x80
	// Line 1544, Address: 0x2138a0, Func Offset: 0xd0
	// Line 1546, Address: 0x213974, Func Offset: 0x1a4
	// Line 1530, Address: 0x2139d4, Func Offset: 0x204
	// Line 1546, Address: 0x2139dc, Func Offset: 0x20c
	// Line 1537, Address: 0x2139e0, Func Offset: 0x210
	// Line 1546, Address: 0x2139e4, Func Offset: 0x214
	// Line 1537, Address: 0x2139e8, Func Offset: 0x218
	// Line 1546, Address: 0x2139ec, Func Offset: 0x21c
	// Line 1537, Address: 0x213a00, Func Offset: 0x230
	// Line 1546, Address: 0x213a04, Func Offset: 0x234
	// Line 1537, Address: 0x213a0c, Func Offset: 0x23c
	// Line 1546, Address: 0x213a10, Func Offset: 0x240
	// Line 1537, Address: 0x213a20, Func Offset: 0x250
	// Line 1544, Address: 0x213a30, Func Offset: 0x260
	// Line 1546, Address: 0x213a4c, Func Offset: 0x27c
	// Line 1544, Address: 0x213a50, Func Offset: 0x280
	// Line 1546, Address: 0x213a54, Func Offset: 0x284
	// Line 1544, Address: 0x213a5c, Func Offset: 0x28c
	// Line 1546, Address: 0x213a64, Func Offset: 0x294
	// Line 1547, Address: 0x213a74, Func Offset: 0x2a4
	// Func End, Address: 0x213a9c, Func Offset: 0x2cc
}

// Enter__17zNMEGoalSlamAwareFfPv
// Start address: 0x213aa0
int32 zNMEGoalSlamAware::Enter()
{
	zNMESlammer* npc;
	// Line 1506, Address: 0x213aa0, Func Offset: 0
	// Line 1510, Address: 0x213aa4, Func Offset: 0x4
	// Line 1506, Address: 0x213aa8, Func Offset: 0x8
	// Line 1507, Address: 0x213ab8, Func Offset: 0x18
	// Line 1510, Address: 0x213ac4, Func Offset: 0x24
	// Line 1519, Address: 0x213acc, Func Offset: 0x2c
	// Line 1520, Address: 0x213b54, Func Offset: 0xb4
	// Func End, Address: 0x213b6c, Func Offset: 0xcc
}

// Slam_SeePlyr__11zNMESlammerFP5xGoalPvP11en_trantypefPv
// Start address: 0x213b70
int32 Slam_SeePlyr(xGoal* rawgoal, en_trantype* trantype)
{
	int32 nextgoal;
	zNMESlammer* npc;
	zNMEArena* arena;
	en_vis vis;
	// Line 1461, Address: 0x213b70, Func Offset: 0
	// Line 1464, Address: 0x213b74, Func Offset: 0x4
	// Line 1461, Address: 0x213b78, Func Offset: 0x8
	// Line 1464, Address: 0x213b7c, Func Offset: 0xc
	// Line 1461, Address: 0x213b80, Func Offset: 0x10
	// Line 1464, Address: 0x213b94, Func Offset: 0x24
	// Line 1467, Address: 0x213ba4, Func Offset: 0x34
	// Line 1470, Address: 0x213bb8, Func Offset: 0x48
	// Line 1477, Address: 0x213bbc, Func Offset: 0x4c
	// Line 1470, Address: 0x213bc4, Func Offset: 0x54
	// Line 1476, Address: 0x213bc8, Func Offset: 0x58
	// Line 1477, Address: 0x213bcc, Func Offset: 0x5c
	// Line 1478, Address: 0x213c30, Func Offset: 0xc0
	// Line 1480, Address: 0x213c3c, Func Offset: 0xcc
	// Line 1481, Address: 0x213c44, Func Offset: 0xd4
	// Line 1483, Address: 0x213c4c, Func Offset: 0xdc
	// Line 1484, Address: 0x213c6c, Func Offset: 0xfc
	// Line 1490, Address: 0x213c78, Func Offset: 0x108
	// Line 1494, Address: 0x213c80, Func Offset: 0x110
	// Line 1495, Address: 0x213c9c, Func Offset: 0x12c
	// Line 1494, Address: 0x213ca0, Func Offset: 0x130
	// Line 1495, Address: 0x213ca4, Func Offset: 0x134
	// Line 1494, Address: 0x213ca8, Func Offset: 0x138
	// Line 1495, Address: 0x213cac, Func Offset: 0x13c
	// Line 1494, Address: 0x213cb0, Func Offset: 0x140
	// Line 1495, Address: 0x213cbc, Func Offset: 0x14c
	// Line 1497, Address: 0x213ccc, Func Offset: 0x15c
	// Line 1465, Address: 0x213cd4, Func Offset: 0x164
	// Line 1468, Address: 0x213cdc, Func Offset: 0x16c
	// Line 1497, Address: 0x213ce4, Func Offset: 0x174
	// Line 1477, Address: 0x213d00, Func Offset: 0x190
	// Line 1497, Address: 0x213d08, Func Offset: 0x198
	// Line 1477, Address: 0x213d1c, Func Offset: 0x1ac
	// Line 1497, Address: 0x213d20, Func Offset: 0x1b0
	// Line 1477, Address: 0x213d24, Func Offset: 0x1b4
	// Line 1497, Address: 0x213d28, Func Offset: 0x1b8
	// Line 1477, Address: 0x213d44, Func Offset: 0x1d4
	// Line 1497, Address: 0x213d50, Func Offset: 0x1e0
	// Line 1477, Address: 0x213d68, Func Offset: 0x1f8
	// Line 1497, Address: 0x213d78, Func Offset: 0x208
	// Line 1477, Address: 0x213d7c, Func Offset: 0x20c
	// Line 1497, Address: 0x213d90, Func Offset: 0x220
	// Line 1477, Address: 0x213da4, Func Offset: 0x234
	// Line 1497, Address: 0x213dac, Func Offset: 0x23c
	// Line 1477, Address: 0x213dbc, Func Offset: 0x24c
	// Line 1497, Address: 0x213dd8, Func Offset: 0x268
	// Line 1477, Address: 0x213de4, Func Offset: 0x274
	// Line 1497, Address: 0x213de8, Func Offset: 0x278
	// Line 1477, Address: 0x213df0, Func Offset: 0x280
	// Line 1497, Address: 0x213e00, Func Offset: 0x290
	// Line 1479, Address: 0x213e08, Func Offset: 0x298
	// Line 1497, Address: 0x213e10, Func Offset: 0x2a0
	// Line 1498, Address: 0x213e14, Func Offset: 0x2a4
	// Func End, Address: 0x213e2c, Func Offset: 0x2bc
}

// StraddleClamp__11zNMESlammerFP5xVec3
// Start address: 0x213e30
void zNMESlammer::StraddleClamp(xVec3* pos_pred)
{
	xVec3 dir_NtoP;
	xVec3 dir_plyr;
	xVec3 dir_PtoP;
	xVec3 pos_repred;
	xVec3 dir_revised;
	// Line 1384, Address: 0x213e30, Func Offset: 0
	// Line 1392, Address: 0x213e34, Func Offset: 0x4
	// Line 1393, Address: 0x213e40, Func Offset: 0x10
	// Line 1392, Address: 0x213e48, Func Offset: 0x18
	// Line 1393, Address: 0x213e50, Func Offset: 0x20
	// Line 1392, Address: 0x213e54, Func Offset: 0x24
	// Line 1394, Address: 0x213e58, Func Offset: 0x28
	// Line 1392, Address: 0x213e5c, Func Offset: 0x2c
	// Line 1397, Address: 0x213e70, Func Offset: 0x40
	// Line 1392, Address: 0x213e7c, Func Offset: 0x4c
	// Line 1393, Address: 0x213e80, Func Offset: 0x50
	// Line 1392, Address: 0x213e84, Func Offset: 0x54
	// Line 1393, Address: 0x213e8c, Func Offset: 0x5c
	// Line 1392, Address: 0x213e90, Func Offset: 0x60
	// Line 1393, Address: 0x213e9c, Func Offset: 0x6c
	// Line 1392, Address: 0x213ea0, Func Offset: 0x70
	// Line 1393, Address: 0x213ea8, Func Offset: 0x78
	// Line 1394, Address: 0x213eb8, Func Offset: 0x88
	// Line 1393, Address: 0x213ebc, Func Offset: 0x8c
	// Line 1394, Address: 0x213ec0, Func Offset: 0x90
	// Line 1393, Address: 0x213ec4, Func Offset: 0x94
	// Line 1394, Address: 0x213ed8, Func Offset: 0xa8
	// Line 1393, Address: 0x213ee0, Func Offset: 0xb0
	// Line 1394, Address: 0x213ee4, Func Offset: 0xb4
	// Line 1393, Address: 0x213ef8, Func Offset: 0xc8
	// Line 1394, Address: 0x213efc, Func Offset: 0xcc
	// Line 1397, Address: 0x213f08, Func Offset: 0xd8
	// Line 1399, Address: 0x213f18, Func Offset: 0xe8
	// Line 1401, Address: 0x213f3c, Func Offset: 0x10c
	// Line 1399, Address: 0x213f40, Func Offset: 0x110
	// Line 1401, Address: 0x213f4c, Func Offset: 0x11c
	// Line 1405, Address: 0x213f58, Func Offset: 0x128
	// Line 1403, Address: 0x213f5c, Func Offset: 0x12c
	// Line 1405, Address: 0x213f7c, Func Offset: 0x14c
	// Line 1407, Address: 0x213f90, Func Offset: 0x160
	// Line 1420, Address: 0x213fa8, Func Offset: 0x178
	// Line 1407, Address: 0x213fc0, Func Offset: 0x190
	// Line 1420, Address: 0x213fc8, Func Offset: 0x198
	// Line 1428, Address: 0x213fd0, Func Offset: 0x1a0
	// Line 1432, Address: 0x213fd4, Func Offset: 0x1a4
	// Line 1428, Address: 0x213fd8, Func Offset: 0x1a8
	// Line 1432, Address: 0x213fdc, Func Offset: 0x1ac
	// Line 1428, Address: 0x213fe0, Func Offset: 0x1b0
	// Line 1432, Address: 0x213fe4, Func Offset: 0x1b4
	// Line 1428, Address: 0x213ff8, Func Offset: 0x1c8
	// Line 1437, Address: 0x214000, Func Offset: 0x1d0
	// Line 1432, Address: 0x214008, Func Offset: 0x1d8
	// Line 1428, Address: 0x21400c, Func Offset: 0x1dc
	// Line 1432, Address: 0x214020, Func Offset: 0x1f0
	// Line 1438, Address: 0x214030, Func Offset: 0x200
	// Line 1432, Address: 0x21403c, Func Offset: 0x20c
	// Line 1438, Address: 0x214048, Func Offset: 0x218
	// Line 1437, Address: 0x214050, Func Offset: 0x220
	// Line 1432, Address: 0x214054, Func Offset: 0x224
	// Line 1433, Address: 0x214090, Func Offset: 0x260
	// Line 1432, Address: 0x214094, Func Offset: 0x264
	// Line 1437, Address: 0x21409c, Func Offset: 0x26c
	// Line 1432, Address: 0x2140a0, Func Offset: 0x270
	// Line 1433, Address: 0x2140a4, Func Offset: 0x274
	// Line 1437, Address: 0x2140b0, Func Offset: 0x280
	// Line 1433, Address: 0x2140b4, Func Offset: 0x284
	// Line 1437, Address: 0x2140bc, Func Offset: 0x28c
	// Line 1438, Address: 0x2140c4, Func Offset: 0x294
	// Line 1433, Address: 0x2140d4, Func Offset: 0x2a4
	// Line 1438, Address: 0x2140d8, Func Offset: 0x2a8
	// Line 1439, Address: 0x2140e0, Func Offset: 0x2b0
	// Line 1446, Address: 0x2140e8, Func Offset: 0x2b8
	// Line 1449, Address: 0x2140f4, Func Offset: 0x2c4
	// Func End, Address: 0x214100, Func Offset: 0x2d0
}

// HealthRatio__11zNMESlammerFv
// Start address: 0x214100
float32 zNMESlammer::HealthRatio()
{
	float32 rat;
	// Line 1293, Address: 0x214100, Func Offset: 0
	// Line 1294, Address: 0x214104, Func Offset: 0x4
	// Line 1297, Address: 0x21410c, Func Offset: 0xc
	// Line 1300, Address: 0x214110, Func Offset: 0x10
	// Line 1298, Address: 0x214114, Func Offset: 0x14
	// Line 1300, Address: 0x214118, Func Offset: 0x18
	// Line 1297, Address: 0x21411c, Func Offset: 0x1c
	// Line 1298, Address: 0x214120, Func Offset: 0x20
	// Line 1300, Address: 0x214130, Func Offset: 0x30
	// Line 1295, Address: 0x214188, Func Offset: 0x88
	// Line 1301, Address: 0x21418c, Func Offset: 0x8c
	// Func End, Address: 0x214194, Func Offset: 0x94
}

// VisionTarget__11zNMESlammerCFP4xEnt9en_defconi
// Start address: 0x2141a0
en_vis zNMESlammer::VisionTarget(xEnt* ent)
{
	zNMEArena* arena;
	// Line 1248, Address: 0x2141a0, Func Offset: 0
	// Line 1250, Address: 0x2141a4, Func Offset: 0x4
	// Line 1254, Address: 0x2141b4, Func Offset: 0x14
	// Line 1258, Address: 0x2141bc, Func Offset: 0x1c
	// Line 1259, Address: 0x2141c4, Func Offset: 0x24
	// Line 1267, Address: 0x2141ec, Func Offset: 0x4c
	// Line 1270, Address: 0x2141f8, Func Offset: 0x58
	// Line 1276, Address: 0x214204, Func Offset: 0x64
	// Line 1270, Address: 0x214210, Func Offset: 0x70
	// Line 1276, Address: 0x214214, Func Offset: 0x74
	// Line 1277, Address: 0x214230, Func Offset: 0x90
	// Line 1279, Address: 0x214238, Func Offset: 0x98
	// Line 1284, Address: 0x214248, Func Offset: 0xa8
	// Line 1286, Address: 0x214274, Func Offset: 0xd4
	// Line 1287, Address: 0x21427c, Func Offset: 0xdc
	// Line 1289, Address: 0x214284, Func Offset: 0xe4
	// Line 1251, Address: 0x21428c, Func Offset: 0xec
	// Line 1255, Address: 0x214294, Func Offset: 0xf4
	// Line 1260, Address: 0x21429c, Func Offset: 0xfc
	// Line 1268, Address: 0x2142a4, Func Offset: 0x104
	// Line 1271, Address: 0x2142ac, Func Offset: 0x10c
	// Line 1289, Address: 0x2142b4, Func Offset: 0x114
	// Line 1276, Address: 0x2142c4, Func Offset: 0x124
	// Line 1289, Address: 0x2142c8, Func Offset: 0x128
	// Line 1276, Address: 0x2142d8, Func Offset: 0x138
	// Line 1289, Address: 0x2142e0, Func Offset: 0x140
	// Line 1276, Address: 0x2142f0, Func Offset: 0x150
	// Line 1289, Address: 0x2142f4, Func Offset: 0x154
	// Line 1276, Address: 0x2142f8, Func Offset: 0x158
	// Line 1289, Address: 0x2142fc, Func Offset: 0x15c
	// Line 1276, Address: 0x214318, Func Offset: 0x178
	// Line 1289, Address: 0x214320, Func Offset: 0x180
	// Line 1276, Address: 0x214338, Func Offset: 0x198
	// Line 1289, Address: 0x214348, Func Offset: 0x1a8
	// Line 1276, Address: 0x21434c, Func Offset: 0x1ac
	// Line 1289, Address: 0x214360, Func Offset: 0x1c0
	// Line 1284, Address: 0x214370, Func Offset: 0x1d0
	// Line 1289, Address: 0x214374, Func Offset: 0x1d4
	// Line 1284, Address: 0x214380, Func Offset: 0x1e0
	// Line 1289, Address: 0x214384, Func Offset: 0x1e4
	// Line 1284, Address: 0x214388, Func Offset: 0x1e8
	// Line 1289, Address: 0x21438c, Func Offset: 0x1ec
	// Line 1284, Address: 0x214390, Func Offset: 0x1f0
	// Line 1289, Address: 0x214394, Func Offset: 0x1f4
	// Line 1284, Address: 0x2143ac, Func Offset: 0x20c
	// Line 1289, Address: 0x2143b0, Func Offset: 0x210
	// Line 1284, Address: 0x2143b4, Func Offset: 0x214
	// Line 1289, Address: 0x2143b8, Func Offset: 0x218
	// Line 1284, Address: 0x2143bc, Func Offset: 0x21c
	// Line 1289, Address: 0x2143c0, Func Offset: 0x220
	// Line 1284, Address: 0x2143e8, Func Offset: 0x248
	// Line 1290, Address: 0x214408, Func Offset: 0x268
	// Func End, Address: 0x214414, Func Offset: 0x274
}

// SlamMailDamage__11zNMESlammerFP13NMEDamageInfo
// Start address: 0x214420
int32 zNMESlammer::SlamMailDamage(NMEDamageInfo* dmgmail)
{
	int32 rc;
	int32 handled;
	xPsyche* psy;
	xGoal* goal;
	// Line 1169, Address: 0x214420, Func Offset: 0
	// Line 1170, Address: 0x214438, Func Offset: 0x18
	// Line 1171, Address: 0x214444, Func Offset: 0x24
	// Line 1176, Address: 0x21444c, Func Offset: 0x2c
	// Line 1200, Address: 0x214478, Func Offset: 0x58
	// Line 1202, Address: 0x214494, Func Offset: 0x74
	// Line 1203, Address: 0x2144b0, Func Offset: 0x90
	// Line 1205, Address: 0x2144c4, Func Offset: 0xa4
	// Line 1209, Address: 0x2144cc, Func Offset: 0xac
	// Line 1211, Address: 0x2144d0, Func Offset: 0xb0
	// Line 1214, Address: 0x2144e0, Func Offset: 0xc0
	// Line 1215, Address: 0x2144e4, Func Offset: 0xc4
	// Line 1214, Address: 0x2144e8, Func Offset: 0xc8
	// Line 1215, Address: 0x2144ec, Func Offset: 0xcc
	// Line 1217, Address: 0x2144fc, Func Offset: 0xdc
	// Line 1220, Address: 0x214504, Func Offset: 0xe4
	// Line 1226, Address: 0x214508, Func Offset: 0xe8
	// Line 1172, Address: 0x214514, Func Offset: 0xf4
	// Line 1227, Address: 0x214524, Func Offset: 0x104
	// Func End, Address: 0x21453c, Func Offset: 0x11c
}

// TypeHandleMail__11zNMESlammerFP6NMEMsg
// Start address: 0x214540
int32 zNMESlammer::TypeHandleMail(NMEMsg* mail)
{
	int32 handled;
	xPsyche* psy;
	int32 gid;
	// Line 1116, Address: 0x214540, Func Offset: 0
	// Line 1119, Address: 0x214544, Func Offset: 0x4
	// Line 1116, Address: 0x214548, Func Offset: 0x8
	// Line 1119, Address: 0x214568, Func Offset: 0x28
	// Line 1122, Address: 0x21459c, Func Offset: 0x5c
	// Line 1123, Address: 0x2145a0, Func Offset: 0x60
	// Line 1124, Address: 0x2145ac, Func Offset: 0x6c
	// Line 1125, Address: 0x2145e8, Func Offset: 0xa8
	// Line 1127, Address: 0x2145f4, Func Offset: 0xb4
	// Line 1148, Address: 0x2145fc, Func Offset: 0xbc
	// Line 1149, Address: 0x214604, Func Offset: 0xc4
	// Line 1153, Address: 0x21460c, Func Offset: 0xcc
	// Line 1154, Address: 0x214614, Func Offset: 0xd4
	// Line 1157, Address: 0x21461c, Func Offset: 0xdc
	// Line 1165, Address: 0x2146f8, Func Offset: 0x1b8
	// Line 1132, Address: 0x21470c, Func Offset: 0x1cc
	// Line 1165, Address: 0x214714, Func Offset: 0x1d4
	// Line 1132, Address: 0x21471c, Func Offset: 0x1dc
	// Line 1165, Address: 0x214750, Func Offset: 0x210
	// Line 1133, Address: 0x214758, Func Offset: 0x218
	// Line 1132, Address: 0x21475c, Func Offset: 0x21c
	// Line 1165, Address: 0x214780, Func Offset: 0x240
	// Line 1133, Address: 0x21479c, Func Offset: 0x25c
	// Line 1165, Address: 0x2147a4, Func Offset: 0x264
	// Line 1133, Address: 0x2147b4, Func Offset: 0x274
	// Line 1165, Address: 0x2147b8, Func Offset: 0x278
	// Line 1140, Address: 0x2147c4, Func Offset: 0x284
	// Line 1165, Address: 0x2147cc, Func Offset: 0x28c
	// Line 1142, Address: 0x2147d4, Func Offset: 0x294
	// Line 1166, Address: 0x2147dc, Func Offset: 0x29c
	// Func End, Address: 0x2147f8, Func Offset: 0x2b8
}

// GoalPick__11zNMESlammerFP5xGoalRiR11en_trantype
// Start address: 0x214800
int32 GoalPick(int32& gid_would)
{
	int32 altered;
	// Line 1062, Address: 0x214800, Func Offset: 0
	// Line 1066, Address: 0x214838, Func Offset: 0x38
	// Line 1068, Address: 0x214840, Func Offset: 0x40
	// Line 1071, Address: 0x214848, Func Offset: 0x48
	// Line 1073, Address: 0x214850, Func Offset: 0x50
	// Line 1076, Address: 0x214858, Func Offset: 0x58
	// Line 1078, Address: 0x214860, Func Offset: 0x60
	// Line 1081, Address: 0x214868, Func Offset: 0x68
	// Line 1085, Address: 0x214870, Func Offset: 0x70
	// Line 1088, Address: 0x214878, Func Offset: 0x78
	// Line 1090, Address: 0x214880, Func Offset: 0x80
	// Line 1093, Address: 0x214888, Func Offset: 0x88
	// Line 1095, Address: 0x214890, Func Offset: 0x90
	// Line 1098, Address: 0x214898, Func Offset: 0x98
	// Line 1100, Address: 0x2148a0, Func Offset: 0xa0
	// Line 1103, Address: 0x2148a8, Func Offset: 0xa8
	// Line 1108, Address: 0x2148ac, Func Offset: 0xac
	// Func End, Address: 0x2148b4, Func Offset: 0xb4
}

// CollideReview__11zNMESlammerFv
// Start address: 0x2148c0
void zNMESlammer::CollideReview()
{
	// Line 1040, Address: 0x2148c0, Func Offset: 0
	// Line 1048, Address: 0x2148d0, Func Offset: 0x10
	// Line 1053, Address: 0x214904, Func Offset: 0x44
	// Line 1055, Address: 0x214938, Func Offset: 0x78
	// Line 1053, Address: 0x214948, Func Offset: 0x88
	// Line 1055, Address: 0x21494c, Func Offset: 0x8c
	// Line 1056, Address: 0x21495c, Func Offset: 0x9c
	// Func End, Address: 0x21496c, Func Offset: 0xac
}

// Type_AddYourMove__11zNMESlammerFf
// Start address: 0x214970
void zNMESlammer::Type_AddYourMove(float32 dt)
{
	xVec3 delta;
	// Line 1010, Address: 0x214970, Func Offset: 0
	// Line 1020, Address: 0x214984, Func Offset: 0x14
	// Line 1032, Address: 0x214990, Func Offset: 0x20
	// Line 1033, Address: 0x2149a8, Func Offset: 0x38
	// Line 1036, Address: 0x2149ac, Func Offset: 0x3c
	// Line 1022, Address: 0x2149bc, Func Offset: 0x4c
	// Line 1036, Address: 0x2149c4, Func Offset: 0x54
	// Line 1023, Address: 0x2149d8, Func Offset: 0x68
	// Line 1036, Address: 0x2149e0, Func Offset: 0x70
	// Line 1024, Address: 0x2149f0, Func Offset: 0x80
	// Line 1036, Address: 0x2149f4, Func Offset: 0x84
	// Line 1025, Address: 0x214a30, Func Offset: 0xc0
	// Line 1036, Address: 0x214a38, Func Offset: 0xc8
	// Line 1025, Address: 0x214a5c, Func Offset: 0xec
	// Line 1036, Address: 0x214a60, Func Offset: 0xf0
	// Line 1026, Address: 0x214a78, Func Offset: 0x108
	// Line 1036, Address: 0x214a7c, Func Offset: 0x10c
	// Line 1026, Address: 0x214a94, Func Offset: 0x124
	// Line 1036, Address: 0x214a98, Func Offset: 0x128
	// Line 1026, Address: 0x214aa8, Func Offset: 0x138
	// Line 1030, Address: 0x214aac, Func Offset: 0x13c
	// Line 1037, Address: 0x214ab4, Func Offset: 0x144
	// Func End, Address: 0x214ac8, Func Offset: 0x158
}

// Process__11zNMESlammerFf
// Start address: 0x214ad0
void zNMESlammer::Process(float32 dt)
{
	int32 gid;
	// Line 990, Address: 0x214ad0, Func Offset: 0
	// Line 992, Address: 0x214ae4, Func Offset: 0x14
	// Line 993, Address: 0x214af0, Func Offset: 0x20
	// Line 996, Address: 0x214b00, Func Offset: 0x30
	// Line 997, Address: 0x214b10, Func Offset: 0x40
	// Line 998, Address: 0x214b24, Func Offset: 0x54
	// Line 1000, Address: 0x214b2c, Func Offset: 0x5c
	// Line 1003, Address: 0x214b34, Func Offset: 0x64
	// Line 1006, Address: 0x214b4c, Func Offset: 0x7c
	// Line 1007, Address: 0x214b64, Func Offset: 0x94
	// Func End, Address: 0x214b74, Func Offset: 0xa4
}

// BUpdate__11zNMESlammerFP5xVec3
// Start address: 0x214b80
void zNMESlammer::BUpdate(xVec3* pos)
{
	// Line 984, Address: 0x214b80, Func Offset: 0
	// Line 985, Address: 0x214b84, Func Offset: 0x4
	// Line 984, Address: 0x214b88, Func Offset: 0x8
	// Line 985, Address: 0x214b90, Func Offset: 0x10
	// Line 986, Address: 0x214d68, Func Offset: 0x1e8
	// Line 985, Address: 0x214d78, Func Offset: 0x1f8
	// Line 986, Address: 0x214d80, Func Offset: 0x200
	// Line 985, Address: 0x214dc0, Func Offset: 0x240
	// Line 986, Address: 0x214dc4, Func Offset: 0x244
	// Line 985, Address: 0x214dc8, Func Offset: 0x248
	// Line 986, Address: 0x214dcc, Func Offset: 0x24c
	// Line 985, Address: 0x214de8, Func Offset: 0x268
	// Line 986, Address: 0x214dec, Func Offset: 0x26c
	// Line 985, Address: 0x214df4, Func Offset: 0x274
	// Line 986, Address: 0x214df8, Func Offset: 0x278
	// Line 985, Address: 0x214e24, Func Offset: 0x2a4
	// Line 986, Address: 0x214e28, Func Offset: 0x2a8
	// Line 985, Address: 0x214e58, Func Offset: 0x2d8
	// Line 986, Address: 0x214e60, Func Offset: 0x2e0
	// Line 985, Address: 0x214e8c, Func Offset: 0x30c
	// Line 986, Address: 0x214e90, Func Offset: 0x310
	// Line 985, Address: 0x214ec0, Func Offset: 0x340
	// Line 986, Address: 0x214ec8, Func Offset: 0x348
	// Line 985, Address: 0x214ef0, Func Offset: 0x370
	// Line 986, Address: 0x214ef4, Func Offset: 0x374
	// Line 985, Address: 0x214ef8, Func Offset: 0x378
	// Line 986, Address: 0x214efc, Func Offset: 0x37c
	// Line 985, Address: 0x214f04, Func Offset: 0x384
	// Line 986, Address: 0x214f0c, Func Offset: 0x38c
	// Line 985, Address: 0x214f5c, Func Offset: 0x3dc
	// Line 986, Address: 0x214f64, Func Offset: 0x3e4
	// Line 985, Address: 0x214f88, Func Offset: 0x408
	// Line 986, Address: 0x214f8c, Func Offset: 0x40c
	// Line 985, Address: 0x214f90, Func Offset: 0x410
	// Line 986, Address: 0x214f94, Func Offset: 0x414
	// Line 985, Address: 0x214fb4, Func Offset: 0x434
	// Line 986, Address: 0x214fb8, Func Offset: 0x438
	// Line 985, Address: 0x214ff4, Func Offset: 0x474
	// Line 986, Address: 0x214ff8, Func Offset: 0x478
	// Line 985, Address: 0x215000, Func Offset: 0x480
	// Line 986, Address: 0x215004, Func Offset: 0x484
	// Line 985, Address: 0x21503c, Func Offset: 0x4bc
	// Line 986, Address: 0x215040, Func Offset: 0x4c0
	// Line 985, Address: 0x215044, Func Offset: 0x4c4
	// Line 986, Address: 0x215048, Func Offset: 0x4c8
	// Line 985, Address: 0x215050, Func Offset: 0x4d0
	// Line 986, Address: 0x21505c, Func Offset: 0x4dc
	// Line 985, Address: 0x215074, Func Offset: 0x4f4
	// Line 986, Address: 0x215078, Func Offset: 0x4f8
	// Line 985, Address: 0x2150bc, Func Offset: 0x53c
	// Line 986, Address: 0x2150c4, Func Offset: 0x544
	// Line 987, Address: 0x2150d4, Func Offset: 0x554
	// Func End, Address: 0x2150e0, Func Offset: 0x560
}

// CreateAnimTable__11zNMESlammerFP10xAnimTable
// Start address: 0x2150e0
xAnimTable* zNMESlammer::CreateAnimTable(xAnimTable* table)
{
	int32 ourAnims[23];
	// Line 812, Address: 0x2150e0, Func Offset: 0
	// Line 818, Address: 0x2150f0, Func Offset: 0x10
	// Line 826, Address: 0x2150f8, Func Offset: 0x18
	// Line 830, Address: 0x215140, Func Offset: 0x60
	// Line 835, Address: 0x215188, Func Offset: 0xa8
	// Line 839, Address: 0x2151d4, Func Offset: 0xf4
	// Line 845, Address: 0x215220, Func Offset: 0x140
	// Line 849, Address: 0x215268, Func Offset: 0x188
	// Line 854, Address: 0x2152b0, Func Offset: 0x1d0
	// Line 860, Address: 0x2152f8, Func Offset: 0x218
	// Line 864, Address: 0x215340, Func Offset: 0x260
	// Line 868, Address: 0x21538c, Func Offset: 0x2ac
	// Line 874, Address: 0x2153d8, Func Offset: 0x2f8
	// Line 878, Address: 0x215420, Func Offset: 0x340
	// Line 885, Address: 0x215468, Func Offset: 0x388
	// Line 891, Address: 0x2154b0, Func Offset: 0x3d0
	// Line 895, Address: 0x2154f8, Func Offset: 0x418
	// Line 900, Address: 0x215540, Func Offset: 0x460
	// Line 904, Address: 0x215588, Func Offset: 0x4a8
	// Line 910, Address: 0x2155d0, Func Offset: 0x4f0
	// Line 914, Address: 0x215618, Func Offset: 0x538
	// Line 919, Address: 0x215660, Func Offset: 0x580
	// Line 923, Address: 0x2156a8, Func Offset: 0x5c8
	// Line 927, Address: 0x2156f0, Func Offset: 0x610
	// Line 935, Address: 0x215738, Func Offset: 0x658
	// Line 957, Address: 0x215764, Func Offset: 0x684
	// Line 964, Address: 0x215788, Func Offset: 0x6a8
	// Line 967, Address: 0x2157d0, Func Offset: 0x6f0
	// Line 971, Address: 0x215818, Func Offset: 0x738
	// Line 975, Address: 0x215860, Func Offset: 0x780
	// Line 978, Address: 0x2158a8, Func Offset: 0x7c8
	// Line 980, Address: 0x2158f0, Func Offset: 0x810
	// Line 818, Address: 0x2158f8, Func Offset: 0x818
	// Line 980, Address: 0x2158fc, Func Offset: 0x81c
	// Line 981, Address: 0x21590c, Func Offset: 0x82c
	// Func End, Address: 0x21591c, Func Offset: 0x83c
}

// AnimPick__11zNMESlammerFi11en_npcgspotP5xGoal
// Start address: 0x215920
uint32 zNMESlammer::AnimPick(int32 gid, en_npcgspot gspot)
{
	en_stananim idx;
	// Line 710, Address: 0x215920, Func Offset: 0
	// Line 714, Address: 0x2159f0, Func Offset: 0xd0
	// Line 717, Address: 0x2159f8, Func Offset: 0xd8
	// Line 718, Address: 0x215a04, Func Offset: 0xe4
	// Line 721, Address: 0x215a0c, Func Offset: 0xec
	// Line 726, Address: 0x215a14, Func Offset: 0xf4
	// Line 728, Address: 0x215a1c, Func Offset: 0xfc
	// Line 729, Address: 0x215a2c, Func Offset: 0x10c
	// Line 732, Address: 0x215a34, Func Offset: 0x114
	// Line 734, Address: 0x215a3c, Func Offset: 0x11c
	// Line 735, Address: 0x215a48, Func Offset: 0x128
	// Line 738, Address: 0x215a50, Func Offset: 0x130
	// Line 743, Address: 0x215a58, Func Offset: 0x138
	// Line 744, Address: 0x215a5c, Func Offset: 0x13c
	// Line 746, Address: 0x215a64, Func Offset: 0x144
	// Line 748, Address: 0x215a6c, Func Offset: 0x14c
	// Line 749, Address: 0x215a78, Func Offset: 0x158
	// Line 752, Address: 0x215a80, Func Offset: 0x160
	// Line 755, Address: 0x215a88, Func Offset: 0x168
	// Line 760, Address: 0x215a90, Func Offset: 0x170
	// Line 763, Address: 0x215a98, Func Offset: 0x178
	// Line 764, Address: 0x215aa0, Func Offset: 0x180
	// Line 765, Address: 0x215aac, Func Offset: 0x18c
	// Line 767, Address: 0x215ac0, Func Offset: 0x1a0
	// Line 771, Address: 0x215ac8, Func Offset: 0x1a8
	// Line 777, Address: 0x215ad0, Func Offset: 0x1b0
	// Line 780, Address: 0x215ad8, Func Offset: 0x1b8
	// Line 783, Address: 0x215ae0, Func Offset: 0x1c0
	// Line 785, Address: 0x215ae8, Func Offset: 0x1c8
	// Line 786, Address: 0x215af8, Func Offset: 0x1d8
	// Line 787, Address: 0x215b08, Func Offset: 0x1e8
	// Line 791, Address: 0x215b2c, Func Offset: 0x20c
	// Line 793, Address: 0x215b34, Func Offset: 0x214
	// Line 808, Address: 0x215b38, Func Offset: 0x218
	// Line 747, Address: 0x215b50, Func Offset: 0x230
	// Line 763, Address: 0x215b58, Func Offset: 0x238
	// Line 764, Address: 0x215b60, Func Offset: 0x240
	// Line 808, Address: 0x215b68, Func Offset: 0x248
	// Line 786, Address: 0x215b80, Func Offset: 0x260
	// Line 799, Address: 0x215b88, Func Offset: 0x268
	// Line 809, Address: 0x215b90, Func Offset: 0x270
	// Func End, Address: 0x215b98, Func Offset: 0x278
}

// SelfSetup__11zNMESlammerFv
// Start address: 0x215ba0
void zNMESlammer::SelfSetup()
{
	xBehaveMgr* bmgr;
	xPsyche* psy;
	xGoal* goal;
	xGoal* g;
	// Line 665, Address: 0x215ba0, Func Offset: 0
	// Line 667, Address: 0x215bac, Func Offset: 0xc
	// Line 668, Address: 0x215bb4, Func Offset: 0x14
	// Line 671, Address: 0x215bc8, Func Offset: 0x28
	// Line 676, Address: 0x215bcc, Func Offset: 0x2c
	// Line 679, Address: 0x215bd4, Func Offset: 0x34
	// Line 680, Address: 0x215c24, Func Offset: 0x84
	// Line 679, Address: 0x215c28, Func Offset: 0x88
	// Line 680, Address: 0x215c2c, Func Offset: 0x8c
	// Line 682, Address: 0x215c7c, Func Offset: 0xdc
	// Line 680, Address: 0x215c80, Func Offset: 0xe0
	// Line 682, Address: 0x215c84, Func Offset: 0xe4
	// Line 680, Address: 0x215c88, Func Offset: 0xe8
	// Line 682, Address: 0x215c8c, Func Offset: 0xec
	// Line 680, Address: 0x215c90, Func Offset: 0xf0
	// Line 682, Address: 0x215c94, Func Offset: 0xf4
	// Line 683, Address: 0x215cec, Func Offset: 0x14c
	// Line 684, Address: 0x215d00, Func Offset: 0x160
	// Line 685, Address: 0x215d28, Func Offset: 0x188
	// Line 686, Address: 0x215d50, Func Offset: 0x1b0
	// Line 689, Address: 0x215d64, Func Offset: 0x1c4
	// Line 690, Address: 0x215d78, Func Offset: 0x1d8
	// Line 691, Address: 0x215d8c, Func Offset: 0x1ec
	// Line 694, Address: 0x215d90, Func Offset: 0x1f0
	// Line 691, Address: 0x215d94, Func Offset: 0x1f4
	// Line 694, Address: 0x215d98, Func Offset: 0x1f8
	// Line 691, Address: 0x215d9c, Func Offset: 0x1fc
	// Line 694, Address: 0x215da0, Func Offset: 0x200
	// Line 691, Address: 0x215da4, Func Offset: 0x204
	// Line 694, Address: 0x215da8, Func Offset: 0x208
	// Line 695, Address: 0x215db0, Func Offset: 0x210
	// Line 696, Address: 0x215dc4, Func Offset: 0x224
	// Line 698, Address: 0x215dd8, Func Offset: 0x238
	// Line 701, Address: 0x215de0, Func Offset: 0x240
	// Line 704, Address: 0x215dec, Func Offset: 0x24c
	// Func End, Address: 0x215dfc, Func Offset: 0x25c
}

// Reset__11zNMESlammerFv
// Start address: 0x215e00
void zNMESlammer::Reset()
{
	xPsyche* psy;
	zNMEGoalAfterlife* goal;
	// Line 633, Address: 0x215e00, Func Offset: 0
	// Line 634, Address: 0x215e10, Func Offset: 0x10
	// Line 635, Address: 0x2160a4, Func Offset: 0x2a4
	// Line 634, Address: 0x2160a8, Func Offset: 0x2a8
	// Line 635, Address: 0x2160ac, Func Offset: 0x2ac
	// Line 634, Address: 0x2160b0, Func Offset: 0x2b0
	// Line 635, Address: 0x2160b8, Func Offset: 0x2b8
	// Line 642, Address: 0x2160d4, Func Offset: 0x2d4
	// Line 645, Address: 0x2160e8, Func Offset: 0x2e8
	// Line 655, Address: 0x2160f4, Func Offset: 0x2f4
	// Line 659, Address: 0x216104, Func Offset: 0x304
	// Line 661, Address: 0x21610c, Func Offset: 0x30c
	// Line 643, Address: 0x216114, Func Offset: 0x314
	// Line 661, Address: 0x21611c, Func Offset: 0x31c
	// Line 644, Address: 0x216124, Func Offset: 0x324
	// Line 648, Address: 0x21612c, Func Offset: 0x32c
	// Line 661, Address: 0x216130, Func Offset: 0x330
	// Line 651, Address: 0x216138, Func Offset: 0x338
	// Line 650, Address: 0x21613c, Func Offset: 0x33c
	// Line 651, Address: 0x216140, Func Offset: 0x340
	// Line 648, Address: 0x216144, Func Offset: 0x344
	// Line 651, Address: 0x216148, Func Offset: 0x348
	// Line 661, Address: 0x21614c, Func Offset: 0x34c
	// Line 652, Address: 0x216154, Func Offset: 0x354
	// Line 653, Address: 0x216158, Func Offset: 0x358
	// Line 662, Address: 0x216160, Func Offset: 0x360
	// Func End, Address: 0x216174, Func Offset: 0x374
}

// Setup__11zNMESlammerFv
// Start address: 0x216180
void zNMESlammer::Setup()
{
	// Line 619, Address: 0x216180, Func Offset: 0
	// Line 620, Address: 0x216184, Func Offset: 0x4
	// Line 619, Address: 0x216188, Func Offset: 0x8
	// Line 620, Address: 0x21618c, Func Offset: 0xc
	// Line 619, Address: 0x216190, Func Offset: 0x10
	// Line 620, Address: 0x216194, Func Offset: 0x14
	// Line 622, Address: 0x2161ec, Func Offset: 0x6c
	// Line 623, Address: 0x21620c, Func Offset: 0x8c
	// Line 624, Address: 0x21622c, Func Offset: 0xac
	// Line 626, Address: 0x216244, Func Offset: 0xc4
	// Line 629, Address: 0x216254, Func Offset: 0xd4
	// Line 622, Address: 0x21625c, Func Offset: 0xdc
	// Line 629, Address: 0x216264, Func Offset: 0xe4
	// Line 622, Address: 0x21626c, Func Offset: 0xec
	// Line 629, Address: 0x216270, Func Offset: 0xf0
	// Line 623, Address: 0x216284, Func Offset: 0x104
	// Line 629, Address: 0x21628c, Func Offset: 0x10c
	// Line 623, Address: 0x216294, Func Offset: 0x114
	// Line 629, Address: 0x216298, Func Offset: 0x118
	// Line 624, Address: 0x2162ac, Func Offset: 0x12c
	// Line 629, Address: 0x2162b4, Func Offset: 0x134
	// Line 624, Address: 0x2162bc, Func Offset: 0x13c
	// Line 629, Address: 0x2162c0, Func Offset: 0x140
	// Line 627, Address: 0x2162d4, Func Offset: 0x154
	// Line 629, Address: 0x2162e8, Func Offset: 0x168
	// Line 630, Address: 0x2162f8, Func Offset: 0x178
	// Func End, Address: 0x216304, Func Offset: 0x184
}

// Init__11zNMESlammerFP9xEntAsset
// Start address: 0x216310
void zNMESlammer::Init(xEntAsset* entass)
{
	// Line 611, Address: 0x216310, Func Offset: 0
	// Line 612, Address: 0x216328, Func Offset: 0x18
	// Line 613, Address: 0x2164e0, Func Offset: 0x1d0
	// Line 615, Address: 0x2164e8, Func Offset: 0x1d8
	// Line 612, Address: 0x2164f4, Func Offset: 0x1e4
	// Line 615, Address: 0x2164f8, Func Offset: 0x1e8
	// Line 612, Address: 0x216500, Func Offset: 0x1f0
	// Line 615, Address: 0x21650c, Func Offset: 0x1fc
	// Line 616, Address: 0x21651c, Func Offset: 0x20c
	// Func End, Address: 0x216534, Func Offset: 0x224
}

// ColPenFlags__11zNMESlammerCFv
// Start address: 0x216540
uint8 zNMESlammer::ColPenFlags()
{
	uint8 flags;
	// Line 601, Address: 0x216540, Func Offset: 0
	// Line 603, Address: 0x216548, Func Offset: 0x8
	// Line 604, Address: 0x216554, Func Offset: 0x14
	// Line 605, Address: 0x21655c, Func Offset: 0x1c
	// Line 606, Address: 0x216568, Func Offset: 0x28
	// Line 608, Address: 0x216570, Func Offset: 0x30
	// Func End, Address: 0x216578, Func Offset: 0x38
}

// ColChkFlags__11zNMESlammerCFv
// Start address: 0x216580
uint8 zNMESlammer::ColChkFlags()
{
	uint8 flags;
	// Line 590, Address: 0x216580, Func Offset: 0
	// Line 592, Address: 0x216588, Func Offset: 0x8
	// Line 593, Address: 0x216594, Func Offset: 0x14
	// Line 594, Address: 0x21659c, Func Offset: 0x1c
	// Line 595, Address: 0x2165a8, Func Offset: 0x28
	// Line 597, Address: 0x2165b0, Func Offset: 0x30
	// Func End, Address: 0x2165b8, Func Offset: 0x38
}

// DfltVulnFlags__11zNMESlammerFv
// Start address: 0x2165c0
int32 zNMESlammer::DfltVulnFlags()
{
	// Line 586, Address: 0x2165c0, Func Offset: 0
	// Func End, Address: 0x2165c8, Func Offset: 0x8
}

// CreateConfig__11zNMESlammerFPCc
// Start address: 0x2165d0
void zNMESlammer::CreateConfig()
{
	en_nmevar vidx;
	// Line 463, Address: 0x2165d0, Func Offset: 0
	// Line 464, Address: 0x2165d4, Func Offset: 0x4
	// Line 463, Address: 0x2165d8, Func Offset: 0x8
	// Line 464, Address: 0x2165dc, Func Offset: 0xc
	// Line 463, Address: 0x2165e0, Func Offset: 0x10
	// Line 464, Address: 0x2165e4, Func Offset: 0x14
	// Line 466, Address: 0x216604, Func Offset: 0x34
	// Line 467, Address: 0x21660c, Func Offset: 0x3c
	// Line 478, Address: 0x216624, Func Offset: 0x54
	// Func End, Address: 0x216634, Func Offset: 0x64
}

