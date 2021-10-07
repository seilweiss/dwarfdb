



int32 Exit();
int32 Enter();
int32 GoalHandleMail(NMEMsg* mail);
int32 ChkExistence(zNMEDennis* npc, float32 dt, int32& nextgoal, en_trantype& trantype);
int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
int32 Exit();
int32 Enter();
int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
int32 Enter();
int32 GoalHandleMail(NMEMsg* mail);
void RibbonLoop(zNMEDennis* npc);
int32 PathParabola(zNMEDennis* npc);
int32 UpdateAnim(zNMEDennis* npc, float32 dt);
int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
int32 Exit();
int32 Enter();
int32 GolfBomb(zNMEDennis* npc);
int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
int32 Enter();
int32 ChkExitCases(zNMEDennis* npc, int32& nextgoal, en_trantype& trantype);
int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
int32 Enter();
int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
int32 Exit();
int32 Enter();
void Notice();
zMovePoint* PickEvade(zMovePoint* nav_from);
int32 DenMailSys(NMESysEvent* sysmail);
int32 DenMailDamage(NMEDamageInfo* dmgmail);
int32 TypeHandleMail(NMEMsg* mail);
void BossCamSet(en_dbcmode mod_desired, uint8 forceCut);
en_vis VisionTarget();
void RenderHud();
void PostProcess();
void NewTime(float32 dt);
void BUpdate(xVec3* pos);
void Process(float32 dt);
int32 IsAlive();
void Destroy();
void Reset();
void Setup();
void Init(xEntAsset* asset);
void CreateDennisAndSBBatAnimTable(xAnimTable* table);
xAnimTable* CreateAnimTable(xAnimTable* table);
int32 GoalPick(int32& gid_would);
uint32 AnimPick(int32 gid, en_npcgspot gspot);
zMovePoint* MvptFirstFollow();
void SelfSetup();
int32 DfltVulnFlags();
void CreateConfig();

// Exit__15zNMEGoalDenDeadFfPv
// Start address: 0x265040
int32 zNMEGoalDenDead::Exit()
{
	// Line 2891, Address: 0x265040, Func Offset: 0
	// Line 2893, Address: 0x265050, Func Offset: 0x10
	// Line 2894, Address: 0x265078, Func Offset: 0x38
	// Line 2895, Address: 0x265168, Func Offset: 0x128
	// Func End, Address: 0x26517c, Func Offset: 0x13c
}

// Enter__15zNMEGoalDenDeadFfPv
// Start address: 0x265180
int32 zNMEGoalDenDead::Enter()
{
	// Line 2884, Address: 0x265180, Func Offset: 0
	// Line 2886, Address: 0x265194, Func Offset: 0x14
	// Line 2887, Address: 0x2651bc, Func Offset: 0x3c
	// Line 2888, Address: 0x265308, Func Offset: 0x188
	// Func End, Address: 0x265320, Func Offset: 0x1a0
}

// GoalHandleMail__17zNMEGoalDenDamageFP6NMEMsg
// Start address: 0x265320
int32 zNMEGoalDenDamage::GoalHandleMail(NMEMsg* mail)
{
	int32 snarfed;
	zNMEDennis* npc;
	NMEDamageInfo* dmgmail;
	xPsyche* psy;
	en_plyrpup pup;
	int32 amt_dmg;
	xGoal* goal;
	// Line 2825, Address: 0x265320, Func Offset: 0
	// Line 2828, Address: 0x265324, Func Offset: 0x4
	// Line 2825, Address: 0x265328, Func Offset: 0x8
	// Line 2828, Address: 0x265338, Func Offset: 0x18
	// Line 2835, Address: 0x26534c, Func Offset: 0x2c
	// Line 2839, Address: 0x265350, Func Offset: 0x30
	// Line 2835, Address: 0x265354, Func Offset: 0x34
	// Line 2839, Address: 0x265358, Func Offset: 0x38
	// Line 2841, Address: 0x265364, Func Offset: 0x44
	// Line 2842, Address: 0x26536c, Func Offset: 0x4c
	// Line 2850, Address: 0x265384, Func Offset: 0x64
	// Line 2851, Address: 0x265390, Func Offset: 0x70
	// Line 2853, Address: 0x26549c, Func Offset: 0x17c
	// Line 2857, Address: 0x2654b8, Func Offset: 0x198
	// Line 2860, Address: 0x2654c4, Func Offset: 0x1a4
	// Line 2862, Address: 0x2654c8, Func Offset: 0x1a8
	// Line 2860, Address: 0x2654cc, Func Offset: 0x1ac
	// Line 2862, Address: 0x2654d0, Func Offset: 0x1b0
	// Line 2863, Address: 0x2654e0, Func Offset: 0x1c0
	// Line 2875, Address: 0x265510, Func Offset: 0x1f0
	// Line 2876, Address: 0x26552c, Func Offset: 0x20c
	// Func End, Address: 0x265540, Func Offset: 0x220
}

// ChkExistence__17zNMEGoalDenDamageFP10zNMEDennisfRiR11en_trantype
// Start address: 0x265540
int32 zNMEGoalDenDamage::ChkExistence(zNMEDennis* npc, float32 dt, int32& nextgoal, en_trantype& trantype)
{
	// Line 2780, Address: 0x265540, Func Offset: 0
	// Line 2781, Address: 0x265570, Func Offset: 0x30
	// Line 2782, Address: 0x265574, Func Offset: 0x34
	// Line 2786, Address: 0x265580, Func Offset: 0x40
	// Line 2790, Address: 0x2655a8, Func Offset: 0x68
	// Line 2792, Address: 0x2655b8, Func Offset: 0x78
	// Line 2794, Address: 0x26560c, Func Offset: 0xcc
	// Line 2796, Address: 0x265610, Func Offset: 0xd0
	// Line 2794, Address: 0x265614, Func Offset: 0xd4
	// Line 2796, Address: 0x265618, Func Offset: 0xd8
	// Line 2795, Address: 0x26561c, Func Offset: 0xdc
	// Line 2796, Address: 0x265620, Func Offset: 0xe0
	// Line 2795, Address: 0x265624, Func Offset: 0xe4
	// Line 2796, Address: 0x26562c, Func Offset: 0xec
	// Line 2797, Address: 0x26563c, Func Offset: 0xfc
	// Line 2782, Address: 0x26565c, Func Offset: 0x11c
	// Line 2792, Address: 0x265664, Func Offset: 0x124
	// Line 2797, Address: 0x265668, Func Offset: 0x128
	// Line 2792, Address: 0x265670, Func Offset: 0x130
	// Line 2797, Address: 0x265674, Func Offset: 0x134
	// Line 2792, Address: 0x265688, Func Offset: 0x148
	// Line 2797, Address: 0x265694, Func Offset: 0x154
	// Line 2792, Address: 0x26569c, Func Offset: 0x15c
	// Line 2797, Address: 0x2656a0, Func Offset: 0x160
	// Line 2792, Address: 0x2656b4, Func Offset: 0x174
	// Line 2806, Address: 0x2656bc, Func Offset: 0x17c
	// Line 2807, Address: 0x2656c8, Func Offset: 0x188
	// Line 2816, Address: 0x2656d0, Func Offset: 0x190
	// Line 2815, Address: 0x2656d4, Func Offset: 0x194
	// Line 2817, Address: 0x2656d8, Func Offset: 0x198
	// Line 2809, Address: 0x2656e0, Func Offset: 0x1a0
	// Line 2811, Address: 0x2656e4, Func Offset: 0x1a4
	// Line 2817, Address: 0x2656e8, Func Offset: 0x1a8
	// Line 2811, Address: 0x2656ec, Func Offset: 0x1ac
	// Line 2810, Address: 0x2656f0, Func Offset: 0x1b0
	// Line 2811, Address: 0x2656f4, Func Offset: 0x1b4
	// Line 2810, Address: 0x2656f8, Func Offset: 0x1b8
	// Line 2817, Address: 0x2656fc, Func Offset: 0x1bc
	// Line 2812, Address: 0x265710, Func Offset: 0x1d0
	// Line 2822, Address: 0x265714, Func Offset: 0x1d4
	// Func End, Address: 0x265730, Func Offset: 0x1f0
}

// Process__17zNMEGoalDenDamageFP11en_trantypefPv
// Start address: 0x265730
int32 zNMEGoalDenDamage::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	zNMEDennis* npc;
	int32 nextgoal;
	int32 doTran;
	// Line 2762, Address: 0x265730, Func Offset: 0
	// Line 2767, Address: 0x265758, Func Offset: 0x28
	// Line 2763, Address: 0x26575c, Func Offset: 0x2c
	// Line 2767, Address: 0x265764, Func Offset: 0x34
	// Line 2763, Address: 0x265768, Func Offset: 0x38
	// Line 2767, Address: 0x26576c, Func Offset: 0x3c
	// Line 2768, Address: 0x265778, Func Offset: 0x48
	// Line 2772, Address: 0x265780, Func Offset: 0x50
	// Line 2775, Address: 0x265854, Func Offset: 0x124
	// Line 2769, Address: 0x2658b4, Func Offset: 0x184
	// Line 2772, Address: 0x2658bc, Func Offset: 0x18c
	// Line 2775, Address: 0x2658d8, Func Offset: 0x1a8
	// Line 2772, Address: 0x2658dc, Func Offset: 0x1ac
	// Line 2775, Address: 0x2658e0, Func Offset: 0x1b0
	// Line 2772, Address: 0x2658e8, Func Offset: 0x1b8
	// Line 2775, Address: 0x2658f0, Func Offset: 0x1c0
	// Line 2776, Address: 0x265900, Func Offset: 0x1d0
	// Func End, Address: 0x265920, Func Offset: 0x1f0
}

// Exit__17zNMEGoalDenDamageFfPv
// Start address: 0x265920
int32 zNMEGoalDenDamage::Exit()
{
	// Line 2756, Address: 0x265920, Func Offset: 0
	// Line 2758, Address: 0x265924, Func Offset: 0x4
	// Line 2756, Address: 0x265928, Func Offset: 0x8
	// Line 2759, Address: 0x265930, Func Offset: 0x10
	// Func End, Address: 0x265938, Func Offset: 0x18
}

// Enter__17zNMEGoalDenDamageFfPv
// Start address: 0x265940
int32 zNMEGoalDenDamage::Enter()
{
	zNMEDennis* npc;
	// Line 2742, Address: 0x265940, Func Offset: 0
	// Line 2745, Address: 0x265944, Func Offset: 0x4
	// Line 2742, Address: 0x265948, Func Offset: 0x8
	// Line 2745, Address: 0x265960, Func Offset: 0x20
	// Line 2742, Address: 0x265968, Func Offset: 0x28
	// Line 2745, Address: 0x26596c, Func Offset: 0x2c
	// Line 2746, Address: 0x265988, Func Offset: 0x48
	// Line 2747, Address: 0x2659c0, Func Offset: 0x80
	// Line 2748, Address: 0x2659d0, Func Offset: 0x90
	// Line 2745, Address: 0x265a04, Func Offset: 0xc4
	// Line 2748, Address: 0x265a08, Func Offset: 0xc8
	// Line 2745, Address: 0x265a18, Func Offset: 0xd8
	// Line 2748, Address: 0x265a28, Func Offset: 0xe8
	// Line 2749, Address: 0x265a90, Func Offset: 0x150
	// Func End, Address: 0x265aa8, Func Offset: 0x168
}

// Process__16zNMEGoalDenTauntFP11en_trantypefPv
// Start address: 0x265ab0
int32 zNMEGoalDenTaunt::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	zNMEDennis* npc;
	int32 nextgoal;
	// Line 2699, Address: 0x265ab0, Func Offset: 0
	// Line 2706, Address: 0x265ab4, Func Offset: 0x4
	// Line 2699, Address: 0x265ab8, Func Offset: 0x8
	// Line 2706, Address: 0x265adc, Func Offset: 0x2c
	// Line 2700, Address: 0x265ae0, Func Offset: 0x30
	// Line 2706, Address: 0x265ae4, Func Offset: 0x34
	// Line 2700, Address: 0x265ae8, Func Offset: 0x38
	// Line 2706, Address: 0x265aec, Func Offset: 0x3c
	// Line 2730, Address: 0x265b24, Func Offset: 0x74
	// Line 2733, Address: 0x265bf8, Func Offset: 0x148
	// Line 2706, Address: 0x265c5c, Func Offset: 0x1ac
	// Line 2733, Address: 0x265c60, Func Offset: 0x1b0
	// Line 2706, Address: 0x265c68, Func Offset: 0x1b8
	// Line 2733, Address: 0x265c6c, Func Offset: 0x1bc
	// Line 2706, Address: 0x265c70, Func Offset: 0x1c0
	// Line 2733, Address: 0x265c78, Func Offset: 0x1c8
	// Line 2706, Address: 0x265c98, Func Offset: 0x1e8
	// Line 2733, Address: 0x265ca4, Func Offset: 0x1f4
	// Line 2706, Address: 0x265ca8, Func Offset: 0x1f8
	// Line 2733, Address: 0x265cb0, Func Offset: 0x200
	// Line 2706, Address: 0x265cb8, Func Offset: 0x208
	// Line 2733, Address: 0x265cc8, Func Offset: 0x218
	// Line 2725, Address: 0x265cdc, Func Offset: 0x22c
	// Line 2717, Address: 0x265ce8, Func Offset: 0x238
	// Line 2719, Address: 0x265cec, Func Offset: 0x23c
	// Line 2733, Address: 0x265cf0, Func Offset: 0x240
	// Line 2719, Address: 0x265cf4, Func Offset: 0x244
	// Line 2718, Address: 0x265cf8, Func Offset: 0x248
	// Line 2719, Address: 0x265cfc, Func Offset: 0x24c
	// Line 2718, Address: 0x265d00, Func Offset: 0x250
	// Line 2733, Address: 0x265d04, Func Offset: 0x254
	// Line 2720, Address: 0x265d18, Func Offset: 0x268
	// Line 2730, Address: 0x265d20, Func Offset: 0x270
	// Line 2733, Address: 0x265d3c, Func Offset: 0x28c
	// Line 2730, Address: 0x265d40, Func Offset: 0x290
	// Line 2733, Address: 0x265d44, Func Offset: 0x294
	// Line 2730, Address: 0x265d4c, Func Offset: 0x29c
	// Line 2733, Address: 0x265d54, Func Offset: 0x2a4
	// Line 2734, Address: 0x265d64, Func Offset: 0x2b4
	// Func End, Address: 0x265d84, Func Offset: 0x2d4
}

// Enter__16zNMEGoalDenTauntFfPv
// Start address: 0x265d90
int32 zNMEGoalDenTaunt::Enter()
{
	zNMEDennis* npc;
	// Line 2680, Address: 0x265d90, Func Offset: 0
	// Line 2683, Address: 0x265d94, Func Offset: 0x4
	// Line 2680, Address: 0x265d98, Func Offset: 0x8
	// Line 2683, Address: 0x265db0, Func Offset: 0x20
	// Line 2680, Address: 0x265db8, Func Offset: 0x28
	// Line 2683, Address: 0x265dbc, Func Offset: 0x2c
	// Line 2684, Address: 0x265dd8, Func Offset: 0x48
	// Line 2691, Address: 0x265e18, Func Offset: 0x88
	// Line 2693, Address: 0x265e34, Func Offset: 0xa4
	// Line 2695, Address: 0x265e50, Func Offset: 0xc0
	// Line 2683, Address: 0x265e84, Func Offset: 0xf4
	// Line 2695, Address: 0x265e88, Func Offset: 0xf8
	// Line 2683, Address: 0x265e98, Func Offset: 0x108
	// Line 2686, Address: 0x265ea8, Func Offset: 0x118
	// Line 2695, Address: 0x265eb0, Func Offset: 0x120
	// Line 2690, Address: 0x265ebc, Func Offset: 0x12c
	// Line 2695, Address: 0x265ec0, Func Offset: 0x130
	// Line 2696, Address: 0x265f24, Func Offset: 0x194
	// Func End, Address: 0x265f3c, Func Offset: 0x1ac
}

// GoalHandleMail__16zNMEGoalDenEvadeFP6NMEMsg
// Start address: 0x265f40
int32 zNMEGoalDenEvade::GoalHandleMail(NMEMsg* mail)
{
	int32 snarfed;
	zNMEDennis* npc;
	xPsyche* psy;
	en_plyrpup pup;
	int32 amt_dmg;
	xGoal* goal;
	// Line 2619, Address: 0x265f40, Func Offset: 0
	// Line 2622, Address: 0x265f44, Func Offset: 0x4
	// Line 2619, Address: 0x265f48, Func Offset: 0x8
	// Line 2622, Address: 0x265f58, Func Offset: 0x18
	// Line 2666, Address: 0x265f64, Func Offset: 0x24
	// Line 2670, Address: 0x265f68, Func Offset: 0x28
	// Line 2648, Address: 0x265fb0, Func Offset: 0x70
	// Line 2670, Address: 0x265fb4, Func Offset: 0x74
	// Line 2648, Address: 0x265fbc, Func Offset: 0x7c
	// Line 2670, Address: 0x265fc0, Func Offset: 0x80
	// Line 2648, Address: 0x265fc8, Func Offset: 0x88
	// Line 2670, Address: 0x265fcc, Func Offset: 0x8c
	// Line 2648, Address: 0x265fd4, Func Offset: 0x94
	// Line 2670, Address: 0x265ff4, Func Offset: 0xb4
	// Line 2648, Address: 0x265ffc, Func Offset: 0xbc
	// Line 2670, Address: 0x266018, Func Offset: 0xd8
	// Line 2648, Address: 0x266020, Func Offset: 0xe0
	// Line 2670, Address: 0x266040, Func Offset: 0x100
	// Line 2648, Address: 0x266048, Func Offset: 0x108
	// Line 2670, Address: 0x266064, Func Offset: 0x124
	// Line 2648, Address: 0x26606c, Func Offset: 0x12c
	// Line 2670, Address: 0x26608c, Func Offset: 0x14c
	// Line 2648, Address: 0x266094, Func Offset: 0x154
	// Line 2670, Address: 0x2660b0, Func Offset: 0x170
	// Line 2650, Address: 0x2660c8, Func Offset: 0x188
	// Line 2670, Address: 0x2660cc, Func Offset: 0x18c
	// Line 2653, Address: 0x2660d4, Func Offset: 0x194
	// Line 2670, Address: 0x2660d8, Func Offset: 0x198
	// Line 2656, Address: 0x2660e0, Func Offset: 0x1a0
	// Line 2658, Address: 0x2660e4, Func Offset: 0x1a4
	// Line 2670, Address: 0x2660e8, Func Offset: 0x1a8
	// Line 2658, Address: 0x2660ec, Func Offset: 0x1ac
	// Line 2670, Address: 0x2660f4, Func Offset: 0x1b4
	// Line 2659, Address: 0x266100, Func Offset: 0x1c0
	// Line 2670, Address: 0x266104, Func Offset: 0x1c4
	// Line 2659, Address: 0x266108, Func Offset: 0x1c8
	// Line 2670, Address: 0x26610c, Func Offset: 0x1cc
	// Line 2659, Address: 0x266110, Func Offset: 0x1d0
	// Line 2670, Address: 0x266114, Func Offset: 0x1d4
	// Line 2662, Address: 0x266128, Func Offset: 0x1e8
	// Line 2671, Address: 0x266138, Func Offset: 0x1f8
	// Func End, Address: 0x266150, Func Offset: 0x210
}

// RibbonLoop__16zNMEGoalDenEvadeFP10zNMEDennisf
// Start address: 0x266150
void zNMEGoalDenEvade::RibbonLoop(zNMEDennis* npc)
{
	xFXRibbon* rib;
	RibData* ribhelp;
	float32 scale;
	float32 alpha;
	xVec3 pos_emit;
	xVec3 dir_up;
	// Line 2579, Address: 0x266150, Func Offset: 0
	// Line 2580, Address: 0x266170, Func Offset: 0x20
	// Line 2583, Address: 0x26617c, Func Offset: 0x2c
	// Line 2584, Address: 0x266188, Func Offset: 0x38
	// Line 2585, Address: 0x266194, Func Offset: 0x44
	// Line 2595, Address: 0x26619c, Func Offset: 0x4c
	// Line 2589, Address: 0x2661a0, Func Offset: 0x50
	// Line 2595, Address: 0x2661a4, Func Offset: 0x54
	// Line 2587, Address: 0x2661a8, Func Offset: 0x58
	// Line 2595, Address: 0x2661ac, Func Offset: 0x5c
	// Line 2596, Address: 0x2661b4, Func Offset: 0x64
	// Line 2599, Address: 0x266244, Func Offset: 0xf4
	// Line 2600, Address: 0x26624c, Func Offset: 0xfc
	// Line 2604, Address: 0x266250, Func Offset: 0x100
	// Line 2605, Address: 0x266264, Func Offset: 0x114
	// Line 2606, Address: 0x266298, Func Offset: 0x148
	// Line 2608, Address: 0x26629c, Func Offset: 0x14c
	// Line 2605, Address: 0x2662ac, Func Offset: 0x15c
	// Line 2606, Address: 0x2662b0, Func Offset: 0x160
	// Line 2608, Address: 0x2662b4, Func Offset: 0x164
	// Line 2609, Address: 0x266318, Func Offset: 0x1c8
	// Line 2610, Address: 0x26635c, Func Offset: 0x20c
	// Line 2613, Address: 0x266380, Func Offset: 0x230
	// Line 2615, Address: 0x26639c, Func Offset: 0x24c
	// Line 2596, Address: 0x2663b4, Func Offset: 0x264
	// Line 2615, Address: 0x2663c8, Func Offset: 0x278
	// Line 2596, Address: 0x2663cc, Func Offset: 0x27c
	// Line 2615, Address: 0x2663d0, Func Offset: 0x280
	// Line 2596, Address: 0x2663d4, Func Offset: 0x284
	// Line 2615, Address: 0x2663e0, Func Offset: 0x290
	// Line 2616, Address: 0x2663fc, Func Offset: 0x2ac
	// Func End, Address: 0x266420, Func Offset: 0x2d0
}

// PathParabola__16zNMEGoalDenEvadeFP10zNMEDennisf
// Start address: 0x266420
int32 zNMEGoalDenEvade::PathParabola(zNMEDennis* npc)
{
	int32 arrived;
	float32 tym_inLeap;
	xVec3 pos;
	xVec3 vel;
	xMat3x3 mat_rot;
	float32 mag;
	xVec3 dir;
	// Line 2491, Address: 0x266420, Func Offset: 0
	// Line 2501, Address: 0x266424, Func Offset: 0x4
	// Line 2491, Address: 0x266428, Func Offset: 0x8
	// Line 2501, Address: 0x26642c, Func Offset: 0xc
	// Line 2491, Address: 0x266430, Func Offset: 0x10
	// Line 2492, Address: 0x26643c, Func Offset: 0x1c
	// Line 2501, Address: 0x266440, Func Offset: 0x20
	// Line 2502, Address: 0x26645c, Func Offset: 0x3c
	// Line 2506, Address: 0x266460, Func Offset: 0x40
	// Line 2507, Address: 0x266490, Func Offset: 0x70
	// Line 2514, Address: 0x2664e4, Func Offset: 0xc4
	// Line 2518, Address: 0x2664e8, Func Offset: 0xc8
	// Line 2514, Address: 0x2664ec, Func Offset: 0xcc
	// Line 2515, Address: 0x2664fc, Func Offset: 0xdc
	// Line 2521, Address: 0x266500, Func Offset: 0xe0
	// Line 2514, Address: 0x266504, Func Offset: 0xe4
	// Line 2518, Address: 0x26650c, Func Offset: 0xec
	// Line 2514, Address: 0x266510, Func Offset: 0xf0
	// Line 2515, Address: 0x266530, Func Offset: 0x110
	// Line 2514, Address: 0x266534, Func Offset: 0x114
	// Line 2518, Address: 0x266548, Func Offset: 0x128
	// Line 2514, Address: 0x266550, Func Offset: 0x130
	// Line 2518, Address: 0x26655c, Func Offset: 0x13c
	// Line 2514, Address: 0x266560, Func Offset: 0x140
	// Line 2518, Address: 0x266564, Func Offset: 0x144
	// Line 2514, Address: 0x26656c, Func Offset: 0x14c
	// Line 2518, Address: 0x266570, Func Offset: 0x150
	// Line 2521, Address: 0x266580, Func Offset: 0x160
	// Line 2525, Address: 0x266590, Func Offset: 0x170
	// Line 2521, Address: 0x266598, Func Offset: 0x178
	// Line 2524, Address: 0x2665a8, Func Offset: 0x188
	// Line 2525, Address: 0x2665ac, Func Offset: 0x18c
	// Line 2523, Address: 0x2665b0, Func Offset: 0x190
	// Line 2524, Address: 0x2665b4, Func Offset: 0x194
	// Line 2525, Address: 0x2665bc, Func Offset: 0x19c
	// Line 2527, Address: 0x2665c8, Func Offset: 0x1a8
	// Line 2528, Address: 0x2665f8, Func Offset: 0x1d8
	// Line 2527, Address: 0x2665fc, Func Offset: 0x1dc
	// Line 2528, Address: 0x266654, Func Offset: 0x234
	// Line 2529, Address: 0x26665c, Func Offset: 0x23c
	// Line 2533, Address: 0x266680, Func Offset: 0x260
	// Line 2534, Address: 0x266684, Func Offset: 0x264
	// Func End, Address: 0x266698, Func Offset: 0x278
}

// UpdateAnim__16zNMEGoalDenEvadeFP10zNMEDennisf
// Start address: 0x2666a0
int32 zNMEGoalDenEvade::UpdateAnim(zNMEDennis* npc, float32 dt)
{
	float32 tym_animPlusTime;
	int32 arrived;
	// Line 2446, Address: 0x2666a0, Func Offset: 0
	// Line 2447, Address: 0x2666cc, Func Offset: 0x2c
	// Line 2448, Address: 0x2666d0, Func Offset: 0x30
	// Line 2453, Address: 0x2666f4, Func Offset: 0x54
	// Line 2449, Address: 0x2666f8, Func Offset: 0x58
	// Line 2453, Address: 0x2666fc, Func Offset: 0x5c
	// Line 2455, Address: 0x266724, Func Offset: 0x84
	// Line 2456, Address: 0x266730, Func Offset: 0x90
	// Line 2457, Address: 0x266760, Func Offset: 0xc0
	// Line 2458, Address: 0x266798, Func Offset: 0xf8
	// Line 2460, Address: 0x26679c, Func Offset: 0xfc
	// Line 2463, Address: 0x2667a4, Func Offset: 0x104
	// Line 2465, Address: 0x2667c0, Func Offset: 0x120
	// Line 2466, Address: 0x2667f0, Func Offset: 0x150
	// Line 2467, Address: 0x266828, Func Offset: 0x188
	// Line 2469, Address: 0x26682c, Func Offset: 0x18c
	// Line 2471, Address: 0x266834, Func Offset: 0x194
	// Line 2472, Address: 0x266840, Func Offset: 0x1a0
	// Line 2476, Address: 0x266844, Func Offset: 0x1a4
	// Line 2448, Address: 0x266868, Func Offset: 0x1c8
	// Line 2456, Address: 0x266870, Func Offset: 0x1d0
	// Line 2476, Address: 0x266874, Func Offset: 0x1d4
	// Line 2456, Address: 0x266884, Func Offset: 0x1e4
	// Line 2465, Address: 0x266894, Func Offset: 0x1f4
	// Line 2476, Address: 0x266898, Func Offset: 0x1f8
	// Line 2465, Address: 0x2668a8, Func Offset: 0x208
	// Line 2477, Address: 0x2668b8, Func Offset: 0x218
	// Func End, Address: 0x2668d4, Func Offset: 0x234
}

// Process__16zNMEGoalDenEvadeFP11en_trantypefPv
// Start address: 0x2668e0
int32 zNMEGoalDenEvade::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	zNMEDennis* npc;
	int32 animsComplete;
	int32 arrivedAtDest;
	int32 itHasBegun;
	xVec3 pos;
	int32 nextgoal;
	// Line 2343, Address: 0x2668e0, Func Offset: 0
	// Line 2344, Address: 0x266914, Func Offset: 0x34
	// Line 2351, Address: 0x266920, Func Offset: 0x40
	// Line 2354, Address: 0x266928, Func Offset: 0x48
	// Line 2351, Address: 0x26692c, Func Offset: 0x4c
	// Line 2353, Address: 0x266930, Func Offset: 0x50
	// Line 2356, Address: 0x266934, Func Offset: 0x54
	// Line 2361, Address: 0x266940, Func Offset: 0x60
	// Line 2374, Address: 0x266948, Func Offset: 0x68
	// Line 2376, Address: 0x266950, Func Offset: 0x70
	// Line 2377, Address: 0x266958, Func Offset: 0x78
	// Line 2378, Address: 0x266970, Func Offset: 0x90
	// Line 2377, Address: 0x266974, Func Offset: 0x94
	// Line 2378, Address: 0x266978, Func Offset: 0x98
	// Line 2382, Address: 0x266a84, Func Offset: 0x1a4
	// Line 2383, Address: 0x266a94, Func Offset: 0x1b4
	// Line 2385, Address: 0x266ac0, Func Offset: 0x1e0
	// Line 2386, Address: 0x266ad0, Func Offset: 0x1f0
	// Line 2387, Address: 0x266adc, Func Offset: 0x1fc
	// Line 2388, Address: 0x266ae4, Func Offset: 0x204
	// Line 2390, Address: 0x266aec, Func Offset: 0x20c
	// Line 2391, Address: 0x266af8, Func Offset: 0x218
	// Line 2392, Address: 0x266b00, Func Offset: 0x220
	// Line 2393, Address: 0x266b0c, Func Offset: 0x22c
	// Line 2397, Address: 0x266b14, Func Offset: 0x234
	// Line 2401, Address: 0x266b24, Func Offset: 0x244
	// Line 2399, Address: 0x266b28, Func Offset: 0x248
	// Line 2401, Address: 0x266b2c, Func Offset: 0x24c
	// Line 2400, Address: 0x266b30, Func Offset: 0x250
	// Line 2399, Address: 0x266b34, Func Offset: 0x254
	// Line 2400, Address: 0x266b38, Func Offset: 0x258
	// Line 2401, Address: 0x266b3c, Func Offset: 0x25c
	// Line 2402, Address: 0x266b50, Func Offset: 0x270
	// Line 2409, Address: 0x266b58, Func Offset: 0x278
	// Line 2411, Address: 0x266b68, Func Offset: 0x288
	// Line 2418, Address: 0x266b78, Func Offset: 0x298
	// Line 2358, Address: 0x266be0, Func Offset: 0x300
	// Line 2418, Address: 0x266be8, Func Offset: 0x308
	// Line 2359, Address: 0x266bf4, Func Offset: 0x314
	// Line 2418, Address: 0x266c08, Func Offset: 0x328
	// Line 2359, Address: 0x266c10, Func Offset: 0x330
	// Line 2418, Address: 0x266c1c, Func Offset: 0x33c
	// Line 2360, Address: 0x266c20, Func Offset: 0x340
	// Line 2418, Address: 0x266c28, Func Offset: 0x348
	// Line 2358, Address: 0x266c2c, Func Offset: 0x34c
	// Line 2418, Address: 0x266c44, Func Offset: 0x364
	// Line 2364, Address: 0x266c5c, Func Offset: 0x37c
	// Line 2418, Address: 0x266c64, Func Offset: 0x384
	// Line 2364, Address: 0x266c68, Func Offset: 0x388
	// Line 2418, Address: 0x266c6c, Func Offset: 0x38c
	// Line 2364, Address: 0x266c70, Func Offset: 0x390
	// Line 2418, Address: 0x266c74, Func Offset: 0x394
	// Line 2364, Address: 0x266c78, Func Offset: 0x398
	// Line 2418, Address: 0x266c7c, Func Offset: 0x39c
	// Line 2364, Address: 0x266cac, Func Offset: 0x3cc
	// Line 2418, Address: 0x266cb0, Func Offset: 0x3d0
	// Line 2364, Address: 0x266cb4, Func Offset: 0x3d4
	// Line 2418, Address: 0x266cbc, Func Offset: 0x3dc
	// Line 2364, Address: 0x266cc0, Func Offset: 0x3e0
	// Line 2365, Address: 0x266ccc, Func Offset: 0x3ec
	// Line 2418, Address: 0x266cd0, Func Offset: 0x3f0
	// Line 2365, Address: 0x266cd4, Func Offset: 0x3f4
	// Line 2418, Address: 0x266cd8, Func Offset: 0x3f8
	// Line 2364, Address: 0x266cdc, Func Offset: 0x3fc
	// Line 2418, Address: 0x266ce0, Func Offset: 0x400
	// Line 2365, Address: 0x266ce8, Func Offset: 0x408
	// Line 2364, Address: 0x266cec, Func Offset: 0x40c
	// Line 2418, Address: 0x266cf0, Func Offset: 0x410
	// Line 2364, Address: 0x266cfc, Func Offset: 0x41c
	// Line 2418, Address: 0x266d00, Func Offset: 0x420
	// Line 2364, Address: 0x266d04, Func Offset: 0x424
	// Line 2418, Address: 0x266d08, Func Offset: 0x428
	// Line 2365, Address: 0x266d2c, Func Offset: 0x44c
	// Line 2418, Address: 0x266d30, Func Offset: 0x450
	// Line 2365, Address: 0x266d44, Func Offset: 0x464
	// Line 2418, Address: 0x266d4c, Func Offset: 0x46c
	// Line 2365, Address: 0x266d80, Func Offset: 0x4a0
	// Line 2418, Address: 0x266d8c, Func Offset: 0x4ac
	// Line 2365, Address: 0x266d98, Func Offset: 0x4b8
	// Line 2418, Address: 0x266d9c, Func Offset: 0x4bc
	// Line 2369, Address: 0x266da8, Func Offset: 0x4c8
	// Line 2418, Address: 0x266db4, Func Offset: 0x4d4
	// Line 2369, Address: 0x266dc0, Func Offset: 0x4e0
	// Line 2418, Address: 0x266dc4, Func Offset: 0x4e4
	// Line 2370, Address: 0x266dd8, Func Offset: 0x4f8
	// Line 2418, Address: 0x266ddc, Func Offset: 0x4fc
	// Line 2370, Address: 0x266de4, Func Offset: 0x504
	// Line 2373, Address: 0x266de8, Func Offset: 0x508
	// Line 2365, Address: 0x266df0, Func Offset: 0x510
	// Line 2418, Address: 0x266e0c, Func Offset: 0x52c
	// Line 2365, Address: 0x266e10, Func Offset: 0x530
	// Line 2418, Address: 0x266e14, Func Offset: 0x534
	// Line 2365, Address: 0x266e1c, Func Offset: 0x53c
	// Line 2418, Address: 0x266e28, Func Offset: 0x548
	// Line 2370, Address: 0x266e3c, Func Offset: 0x55c
	// Line 2418, Address: 0x266e54, Func Offset: 0x574
	// Line 2375, Address: 0x266e70, Func Offset: 0x590
	// Line 2418, Address: 0x266e78, Func Offset: 0x598
	// Line 2375, Address: 0x266e80, Func Offset: 0x5a0
	// Line 2418, Address: 0x266e88, Func Offset: 0x5a8
	// Line 2375, Address: 0x266e8c, Func Offset: 0x5ac
	// Line 2418, Address: 0x266ea0, Func Offset: 0x5c0
	// Line 2377, Address: 0x266eb8, Func Offset: 0x5d8
	// Line 2418, Address: 0x266ecc, Func Offset: 0x5ec
	// Line 2419, Address: 0x266ef0, Func Offset: 0x610
	// Func End, Address: 0x266f1c, Func Offset: 0x63c
}

// Exit__16zNMEGoalDenEvadeFfPv
// Start address: 0x266f20
int32 zNMEGoalDenEvade::Exit()
{
	zNMEDennis* npc;
	NMECfgDennis* cfg;
	// Line 2320, Address: 0x266f20, Func Offset: 0
	// Line 2321, Address: 0x266f30, Func Offset: 0x10
	// Line 2323, Address: 0x266f34, Func Offset: 0x14
	// Line 2321, Address: 0x266f38, Func Offset: 0x18
	// Line 2323, Address: 0x266f3c, Func Offset: 0x1c
	// Line 2325, Address: 0x266f48, Func Offset: 0x28
	// Line 2326, Address: 0x266f50, Func Offset: 0x30
	// Line 2327, Address: 0x266f80, Func Offset: 0x60
	// Line 2329, Address: 0x266f84, Func Offset: 0x64
	// Line 2330, Address: 0x266ff0, Func Offset: 0xd0
	// Line 2331, Address: 0x266ff4, Func Offset: 0xd4
	// Line 2332, Address: 0x266ffc, Func Offset: 0xdc
	// Line 2334, Address: 0x267004, Func Offset: 0xe4
	// Line 2336, Address: 0x267010, Func Offset: 0xf0
	// Line 2339, Address: 0x267024, Func Offset: 0x104
	// Line 2340, Address: 0x267048, Func Offset: 0x128
	// Func End, Address: 0x26705c, Func Offset: 0x13c
}

// Enter__16zNMEGoalDenEvadeFfPv
// Start address: 0x267060
int32 zNMEGoalDenEvade::Enter()
{
	zNMEDennis* npc;
	// Line 2289, Address: 0x267060, Func Offset: 0
	// Line 2290, Address: 0x26707c, Func Offset: 0x1c
	// Line 2292, Address: 0x267084, Func Offset: 0x24
	// Line 2293, Address: 0x267090, Func Offset: 0x30
	// Line 2296, Address: 0x2670c0, Func Offset: 0x60
	// Line 2300, Address: 0x2670c4, Func Offset: 0x64
	// Line 2297, Address: 0x2670c8, Func Offset: 0x68
	// Line 2300, Address: 0x2670cc, Func Offset: 0x6c
	// Line 2299, Address: 0x2670d0, Func Offset: 0x70
	// Line 2300, Address: 0x2670d4, Func Offset: 0x74
	// Line 2305, Address: 0x2670fc, Func Offset: 0x9c
	// Line 2306, Address: 0x267174, Func Offset: 0x114
	// Line 2307, Address: 0x26717c, Func Offset: 0x11c
	// Line 2309, Address: 0x267280, Func Offset: 0x220
	// Line 2313, Address: 0x267350, Func Offset: 0x2f0
	// Line 2316, Address: 0x267374, Func Offset: 0x314
	// Line 2300, Address: 0x2673a8, Func Offset: 0x348
	// Line 2316, Address: 0x2673ac, Func Offset: 0x34c
	// Line 2300, Address: 0x2673bc, Func Offset: 0x35c
	// Line 2316, Address: 0x2673cc, Func Offset: 0x36c
	// Line 2309, Address: 0x2673dc, Func Offset: 0x37c
	// Line 2316, Address: 0x2673f0, Func Offset: 0x390
	// Line 2309, Address: 0x2673f4, Func Offset: 0x394
	// Line 2316, Address: 0x2673f8, Func Offset: 0x398
	// Line 2309, Address: 0x2673fc, Func Offset: 0x39c
	// Line 2316, Address: 0x267408, Func Offset: 0x3a8
	// Line 2317, Address: 0x26745c, Func Offset: 0x3fc
	// Func End, Address: 0x26747c, Func Offset: 0x41c
}

// GolfBomb__17zNMEGoalDenAttackFP10zNMEDennisi
// Start address: 0x267480
int32 zNMEGoalDenAttack::GolfBomb(zNMEDennis* npc)
{
	NMECfgDennis* cfg;
	zNMEHazard* haz;
	int32 rc;
	xVec3 pos_tgt;
	xVec3 pos_launch;
	// Line 2245, Address: 0x267480, Func Offset: 0
	// Line 2246, Address: 0x267498, Func Offset: 0x18
	// Line 2249, Address: 0x26749c, Func Offset: 0x1c
	// Line 2250, Address: 0x2674a8, Func Offset: 0x28
	// Line 2251, Address: 0x2674b0, Func Offset: 0x30
	// Line 2253, Address: 0x2674b8, Func Offset: 0x38
	// Line 2254, Address: 0x267514, Func Offset: 0x94
	// Line 2255, Address: 0x26751c, Func Offset: 0x9c
	// Line 2257, Address: 0x267524, Func Offset: 0xa4
	// Line 2258, Address: 0x267598, Func Offset: 0x118
	// Line 2268, Address: 0x2675a4, Func Offset: 0x124
	// Line 2258, Address: 0x2675a8, Func Offset: 0x128
	// Line 2268, Address: 0x2675ac, Func Offset: 0x12c
	// Line 2267, Address: 0x2675b8, Func Offset: 0x138
	// Line 2268, Address: 0x2675bc, Func Offset: 0x13c
	// Line 2258, Address: 0x2675cc, Func Offset: 0x14c
	// Line 2263, Address: 0x2675d0, Func Offset: 0x150
	// Line 2264, Address: 0x2675e4, Func Offset: 0x164
	// Line 2263, Address: 0x2675f4, Func Offset: 0x174
	// Line 2264, Address: 0x2675f8, Func Offset: 0x178
	// Line 2267, Address: 0x2675fc, Func Offset: 0x17c
	// Line 2268, Address: 0x267608, Func Offset: 0x188
	// Line 2267, Address: 0x26760c, Func Offset: 0x18c
	// Line 2268, Address: 0x267614, Func Offset: 0x194
	// Line 2269, Address: 0x267630, Func Offset: 0x1b0
	// Line 2270, Address: 0x267678, Func Offset: 0x1f8
	// Line 2273, Address: 0x26767c, Func Offset: 0x1fc
	// Line 2275, Address: 0x267684, Func Offset: 0x204
	// Line 2273, Address: 0x267688, Func Offset: 0x208
	// Line 2270, Address: 0x267690, Func Offset: 0x210
	// Line 2273, Address: 0x267698, Func Offset: 0x218
	// Line 2270, Address: 0x26769c, Func Offset: 0x21c
	// Line 2273, Address: 0x2676a0, Func Offset: 0x220
	// Line 2270, Address: 0x2676a4, Func Offset: 0x224
	// Line 2274, Address: 0x2676a8, Func Offset: 0x228
	// Line 2275, Address: 0x2676ac, Func Offset: 0x22c
	// Line 2270, Address: 0x2676b0, Func Offset: 0x230
	// Line 2273, Address: 0x2676c4, Func Offset: 0x244
	// Line 2274, Address: 0x2676d8, Func Offset: 0x258
	// Line 2270, Address: 0x2676dc, Func Offset: 0x25c
	// Line 2273, Address: 0x2676ec, Func Offset: 0x26c
	// Line 2274, Address: 0x2676f0, Func Offset: 0x270
	// Line 2275, Address: 0x267700, Func Offset: 0x280
	// Line 2278, Address: 0x267718, Func Offset: 0x298
	// Line 2280, Address: 0x26777c, Func Offset: 0x2fc
	// Line 2278, Address: 0x267780, Func Offset: 0x300
	// Line 2281, Address: 0x267788, Func Offset: 0x308
	// Func End, Address: 0x2677a4, Func Offset: 0x324
}

// Process__17zNMEGoalDenAttackFP11en_trantypefPv
// Start address: 0x2677b0
int32 zNMEGoalDenAttack::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	zNMEDennis* npc;
	zNMEDennis* npc;
	xVec3 pos_launch;
	// Line 2192, Address: 0x2677b0, Func Offset: 0
	// Line 2193, Address: 0x2677d4, Func Offset: 0x24
	// Line 2195, Address: 0x2677e8, Func Offset: 0x38
	// Line 2196, Address: 0x2677ec, Func Offset: 0x3c
	// Line 2199, Address: 0x267818, Func Offset: 0x68
	// Line 2202, Address: 0x267840, Func Offset: 0x90
	// Line 2216, Address: 0x267850, Func Offset: 0xa0
	// Line 2221, Address: 0x2678a0, Func Offset: 0xf0
	// Line 2222, Address: 0x2678fc, Func Offset: 0x14c
	// Func End, Address: 0x267918, Func Offset: 0x168
}

// Enter__17zNMEGoalDenAttackFfPv
// Start address: 0x267920
int32 zNMEGoalDenAttack::Enter()
{
	zNMEDennis* npc;
	NMECfgDennis* cfg;
	// Line 2170, Address: 0x267920, Func Offset: 0
	// Line 2171, Address: 0x267938, Func Offset: 0x18
	// Line 2176, Address: 0x267940, Func Offset: 0x20
	// Line 2173, Address: 0x267944, Func Offset: 0x24
	// Line 2176, Address: 0x267948, Func Offset: 0x28
	// Line 2177, Address: 0x267950, Func Offset: 0x30
	// Line 2181, Address: 0x26795c, Func Offset: 0x3c
	// Line 2185, Address: 0x267960, Func Offset: 0x40
	// Line 2181, Address: 0x267968, Func Offset: 0x48
	// Line 2183, Address: 0x26796c, Func Offset: 0x4c
	// Line 2185, Address: 0x26798c, Func Offset: 0x6c
	// Line 2186, Address: 0x2679b4, Func Offset: 0x94
	// Line 2188, Address: 0x2679ec, Func Offset: 0xcc
	// Line 2178, Address: 0x267a20, Func Offset: 0x100
	// Line 2185, Address: 0x267a2c, Func Offset: 0x10c
	// Line 2188, Address: 0x267a30, Func Offset: 0x110
	// Line 2185, Address: 0x267a40, Func Offset: 0x120
	// Line 2188, Address: 0x267a50, Func Offset: 0x130
	// Line 2189, Address: 0x267aa4, Func Offset: 0x184
	// Func End, Address: 0x267ac0, Func Offset: 0x1a0
}

// ChkExitCases__17zNMEGoalDenBattleFP10zNMEDennisRiR11en_trantype
// Start address: 0x267ac0
int32 zNMEGoalDenBattle::ChkExitCases(zNMEDennis* npc, int32& nextgoal, en_trantype& trantype)
{
	en_vis vis;
	// Line 2117, Address: 0x267ac0, Func Offset: 0
	// Line 2118, Address: 0x267ac4, Func Offset: 0x4
	// Line 2117, Address: 0x267ac8, Func Offset: 0x8
	// Line 2118, Address: 0x267ae8, Func Offset: 0x28
	// Line 2119, Address: 0x267b28, Func Offset: 0x68
	// Line 2120, Address: 0x267b3c, Func Offset: 0x7c
	// Line 2122, Address: 0x267b48, Func Offset: 0x88
	// Line 2123, Address: 0x267b4c, Func Offset: 0x8c
	// Line 2124, Address: 0x267b50, Func Offset: 0x90
	// Line 2123, Address: 0x267b54, Func Offset: 0x94
	// Line 2124, Address: 0x267b58, Func Offset: 0x98
	// Line 2123, Address: 0x267b5c, Func Offset: 0x9c
	// Line 2124, Address: 0x267b60, Func Offset: 0xa0
	// Line 2125, Address: 0x267b74, Func Offset: 0xb4
	// Line 2118, Address: 0x267b80, Func Offset: 0xc0
	// Line 2125, Address: 0x267b84, Func Offset: 0xc4
	// Line 2118, Address: 0x267b8c, Func Offset: 0xcc
	// Line 2125, Address: 0x267b90, Func Offset: 0xd0
	// Line 2118, Address: 0x267b94, Func Offset: 0xd4
	// Line 2125, Address: 0x267b9c, Func Offset: 0xdc
	// Line 2118, Address: 0x267bbc, Func Offset: 0xfc
	// Line 2125, Address: 0x267bc8, Func Offset: 0x108
	// Line 2118, Address: 0x267bcc, Func Offset: 0x10c
	// Line 2125, Address: 0x267bd4, Func Offset: 0x114
	// Line 2118, Address: 0x267bdc, Func Offset: 0x11c
	// Line 2129, Address: 0x267bec, Func Offset: 0x12c
	// Line 2130, Address: 0x267c0c, Func Offset: 0x14c
	// Line 2148, Address: 0x267c18, Func Offset: 0x158
	// Line 2152, Address: 0x267c20, Func Offset: 0x160
	// Line 2154, Address: 0x267c48, Func Offset: 0x188
	// Line 2156, Address: 0x267c4c, Func Offset: 0x18c
	// Line 2155, Address: 0x267c50, Func Offset: 0x190
	// Line 2156, Address: 0x267c54, Func Offset: 0x194
	// Line 2157, Address: 0x267c58, Func Offset: 0x198
	// Line 2154, Address: 0x267c64, Func Offset: 0x1a4
	// Line 2155, Address: 0x267c6c, Func Offset: 0x1ac
	// Line 2156, Address: 0x267c70, Func Offset: 0x1b0
	// Line 2157, Address: 0x267c74, Func Offset: 0x1b4
	// Line 2158, Address: 0x267c84, Func Offset: 0x1c4
	// Line 2162, Address: 0x267c8c, Func Offset: 0x1cc
	// Line 2131, Address: 0x267cac, Func Offset: 0x1ec
	// Line 2162, Address: 0x267cb0, Func Offset: 0x1f0
	// Line 2133, Address: 0x267ccc, Func Offset: 0x20c
	// Line 2132, Address: 0x267cd4, Func Offset: 0x214
	// Line 2162, Address: 0x267cd8, Func Offset: 0x218
	// Line 2134, Address: 0x267cdc, Func Offset: 0x21c
	// Line 2131, Address: 0x267ce4, Func Offset: 0x224
	// Line 2162, Address: 0x267cec, Func Offset: 0x22c
	// Line 2131, Address: 0x267cfc, Func Offset: 0x23c
	// Line 2162, Address: 0x267d08, Func Offset: 0x248
	// Line 2163, Address: 0x267d18, Func Offset: 0x258
	// Func End, Address: 0x267d34, Func Offset: 0x274
}

// Process__17zNMEGoalDenBattleFP11en_trantypefPv
// Start address: 0x267d40
int32 zNMEGoalDenBattle::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	zNMEDennis* npc;
	int32 nextgoal;
	int32 doTran;
	// Line 2095, Address: 0x267d40, Func Offset: 0
	// Line 2099, Address: 0x267d70, Func Offset: 0x30
	// Line 2096, Address: 0x267d74, Func Offset: 0x34
	// Line 2099, Address: 0x267d7c, Func Offset: 0x3c
	// Line 2096, Address: 0x267d80, Func Offset: 0x40
	// Line 2099, Address: 0x267d84, Func Offset: 0x44
	// Line 2100, Address: 0x267d90, Func Offset: 0x50
	// Line 2103, Address: 0x267d9c, Func Offset: 0x5c
	// Line 2105, Address: 0x267dc8, Func Offset: 0x88
	// Line 2107, Address: 0x267e9c, Func Offset: 0x15c
	// Line 2112, Address: 0x267ebc, Func Offset: 0x17c
	// Line 2101, Address: 0x267f1c, Func Offset: 0x1dc
	// Line 2105, Address: 0x267f24, Func Offset: 0x1e4
	// Line 2112, Address: 0x267f40, Func Offset: 0x200
	// Line 2105, Address: 0x267f44, Func Offset: 0x204
	// Line 2112, Address: 0x267f48, Func Offset: 0x208
	// Line 2105, Address: 0x267f50, Func Offset: 0x210
	// Line 2112, Address: 0x267f58, Func Offset: 0x218
	// Line 2108, Address: 0x267f6c, Func Offset: 0x22c
	// Line 2112, Address: 0x267f70, Func Offset: 0x230
	// Line 2108, Address: 0x267f74, Func Offset: 0x234
	// Line 2112, Address: 0x267f78, Func Offset: 0x238
	// Line 2108, Address: 0x267f8c, Func Offset: 0x24c
	// Line 2112, Address: 0x267f90, Func Offset: 0x250
	// Line 2109, Address: 0x267fa8, Func Offset: 0x268
	// Line 2112, Address: 0x267fac, Func Offset: 0x26c
	// Line 2109, Address: 0x267fb0, Func Offset: 0x270
	// Line 2112, Address: 0x267fb4, Func Offset: 0x274
	// Line 2109, Address: 0x267fc0, Func Offset: 0x280
	// Line 2112, Address: 0x267fc8, Func Offset: 0x288
	// Line 2108, Address: 0x267fd8, Func Offset: 0x298
	// Line 2112, Address: 0x267fdc, Func Offset: 0x29c
	// Line 2108, Address: 0x267fec, Func Offset: 0x2ac
	// Line 2113, Address: 0x267ffc, Func Offset: 0x2bc
	// Func End, Address: 0x268024, Func Offset: 0x2e4
}

// Enter__17zNMEGoalDenBattleFfPv
// Start address: 0x268030
int32 zNMEGoalDenBattle::Enter()
{
	// Line 2088, Address: 0x268030, Func Offset: 0
	// Line 2089, Address: 0x268034, Func Offset: 0x4
	// Line 2088, Address: 0x268038, Func Offset: 0x8
	// Line 2091, Address: 0x26803c, Func Offset: 0xc
	// Line 2088, Address: 0x268040, Func Offset: 0x10
	// Line 2089, Address: 0x26804c, Func Offset: 0x1c
	// Line 2091, Address: 0x268050, Func Offset: 0x20
	// Line 2092, Address: 0x2680d4, Func Offset: 0xa4
	// Func End, Address: 0x2680ec, Func Offset: 0xbc
}

// Process__17zNMEGoalDenNormalFP11en_trantypefPv
// Start address: 0x2680f0
int32 zNMEGoalDenNormal::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	zNMEDennis* npc;
	int32 nextgoal;
	en_vis vis;
	// Line 2058, Address: 0x2680f0, Func Offset: 0
	// Line 2067, Address: 0x2680f4, Func Offset: 0x4
	// Line 2058, Address: 0x2680f8, Func Offset: 0x8
	// Line 2067, Address: 0x268124, Func Offset: 0x34
	// Line 2059, Address: 0x268128, Func Offset: 0x38
	// Line 2067, Address: 0x268130, Func Offset: 0x40
	// Line 2059, Address: 0x268134, Func Offset: 0x44
	// Line 2060, Address: 0x268138, Func Offset: 0x48
	// Line 2067, Address: 0x26813c, Func Offset: 0x4c
	// Line 2068, Address: 0x268150, Func Offset: 0x60
	// Line 2075, Address: 0x26815c, Func Offset: 0x6c
	// Line 2079, Address: 0x26817c, Func Offset: 0x8c
	// Line 2069, Address: 0x2681dc, Func Offset: 0xec
	// Line 2071, Address: 0x2681e0, Func Offset: 0xf0
	// Line 2079, Address: 0x2681e4, Func Offset: 0xf4
	// Line 2071, Address: 0x2681e8, Func Offset: 0xf8
	// Line 2070, Address: 0x2681ec, Func Offset: 0xfc
	// Line 2071, Address: 0x2681f0, Func Offset: 0x100
	// Line 2070, Address: 0x2681f4, Func Offset: 0x104
	// Line 2079, Address: 0x2681f8, Func Offset: 0x108
	// Line 2072, Address: 0x26820c, Func Offset: 0x11c
	// Line 2079, Address: 0x268214, Func Offset: 0x124
	// Line 2076, Address: 0x268218, Func Offset: 0x128
	// Line 2079, Address: 0x26821c, Func Offset: 0x12c
	// Line 2076, Address: 0x268220, Func Offset: 0x130
	// Line 2079, Address: 0x268224, Func Offset: 0x134
	// Line 2076, Address: 0x268238, Func Offset: 0x148
	// Line 2079, Address: 0x26823c, Func Offset: 0x14c
	// Line 2077, Address: 0x268254, Func Offset: 0x164
	// Line 2079, Address: 0x268258, Func Offset: 0x168
	// Line 2077, Address: 0x26825c, Func Offset: 0x16c
	// Line 2079, Address: 0x268260, Func Offset: 0x170
	// Line 2077, Address: 0x26826c, Func Offset: 0x17c
	// Line 2079, Address: 0x268274, Func Offset: 0x184
	// Line 2076, Address: 0x268284, Func Offset: 0x194
	// Line 2079, Address: 0x268288, Func Offset: 0x198
	// Line 2076, Address: 0x268298, Func Offset: 0x1a8
	// Line 2080, Address: 0x2682a8, Func Offset: 0x1b8
	// Func End, Address: 0x2682d0, Func Offset: 0x1e0
}

// Exit__17zNMEGoalDenNormalFfPv
// Start address: 0x2682d0
int32 zNMEGoalDenNormal::Exit()
{
	zNMEDennis* npc;
	// Line 2048, Address: 0x2682d0, Func Offset: 0
	// Line 2052, Address: 0x2682d4, Func Offset: 0x4
	// Line 2048, Address: 0x2682d8, Func Offset: 0x8
	// Line 2049, Address: 0x2682e0, Func Offset: 0x10
	// Line 2052, Address: 0x2682e8, Func Offset: 0x18
	// Line 2055, Address: 0x2683f0, Func Offset: 0x120
	// Line 2054, Address: 0x2683f4, Func Offset: 0x124
	// Line 2055, Address: 0x2683f8, Func Offset: 0x128
	// Func End, Address: 0x268404, Func Offset: 0x134
}

// Enter__17zNMEGoalDenNormalFfPv
// Start address: 0x268410
int32 zNMEGoalDenNormal::Enter()
{
	// Line 2038, Address: 0x268410, Func Offset: 0
	// Line 2044, Address: 0x268414, Func Offset: 0x4
	// Line 2038, Address: 0x268418, Func Offset: 0x8
	// Line 2044, Address: 0x26841c, Func Offset: 0xc
	// Line 2038, Address: 0x268420, Func Offset: 0x10
	// Line 2044, Address: 0x268424, Func Offset: 0x14
	// Line 2038, Address: 0x268428, Func Offset: 0x18
	// Line 2044, Address: 0x268430, Func Offset: 0x20
	// Line 2045, Address: 0x2684ac, Func Offset: 0x9c
	// Func End, Address: 0x2684c4, Func Offset: 0xb4
}

// Notice__15DennisLetMeKnowF10en_psynoteP5xGoalPv
// Start address: 0x2684d0
void Notice()
{
	// Line 2017, Address: 0x2684d0, Func Offset: 0
	// Func End, Address: 0x2684d8, Func Offset: 0x8
}

// PickEvade__10zNMEDennisFP10zMovePoint
// Start address: 0x2684e0
zMovePoint* zNMEDennis::PickEvade(zMovePoint* nav_from)
{
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
	// Line 1880, Address: 0x2684e0, Func Offset: 0
	// Line 1881, Address: 0x268514, Func Offset: 0x34
	// Line 1882, Address: 0x268524, Func Offset: 0x44
	// Line 1887, Address: 0x26852c, Func Offset: 0x4c
	// Line 1888, Address: 0x268534, Func Offset: 0x54
	// Line 1887, Address: 0x268538, Func Offset: 0x58
	// Line 1888, Address: 0x268540, Func Offset: 0x60
	// Line 1887, Address: 0x268548, Func Offset: 0x68
	// Line 1888, Address: 0x268554, Func Offset: 0x74
	// Line 1887, Address: 0x268558, Func Offset: 0x78
	// Line 1888, Address: 0x268584, Func Offset: 0xa4
	// Line 1887, Address: 0x268588, Func Offset: 0xa8
	// Line 1888, Address: 0x26858c, Func Offset: 0xac
	// Line 1889, Address: 0x268594, Func Offset: 0xb4
	// Line 1890, Address: 0x2685a8, Func Offset: 0xc8
	// Line 1892, Address: 0x2685b0, Func Offset: 0xd0
	// Line 1896, Address: 0x2685ec, Func Offset: 0x10c
	// Line 1898, Address: 0x2685f0, Func Offset: 0x110
	// Line 1896, Address: 0x2685f4, Func Offset: 0x114
	// Line 1899, Address: 0x2685f8, Func Offset: 0x118
	// Line 1901, Address: 0x2685fc, Func Offset: 0x11c
	// Line 1942, Address: 0x26860c, Func Offset: 0x12c
	// Line 1944, Address: 0x268620, Func Offset: 0x140
	// Line 1945, Address: 0x26862c, Func Offset: 0x14c
	// Line 1947, Address: 0x268634, Func Offset: 0x154
	// Line 1949, Address: 0x268638, Func Offset: 0x158
	// Line 1883, Address: 0x268644, Func Offset: 0x164
	// Line 1949, Address: 0x26864c, Func Offset: 0x16c
	// Line 1905, Address: 0x268664, Func Offset: 0x184
	// Line 1949, Address: 0x268668, Func Offset: 0x188
	// Line 1916, Address: 0x26867c, Func Offset: 0x19c
	// Line 1949, Address: 0x268680, Func Offset: 0x1a0
	// Line 1916, Address: 0x268684, Func Offset: 0x1a4
	// Line 1914, Address: 0x268688, Func Offset: 0x1a8
	// Line 1915, Address: 0x268690, Func Offset: 0x1b0
	// Line 1949, Address: 0x268694, Func Offset: 0x1b4
	// Line 1914, Address: 0x2686a8, Func Offset: 0x1c8
	// Line 1915, Address: 0x2686b0, Func Offset: 0x1d0
	// Line 1949, Address: 0x2686b8, Func Offset: 0x1d8
	// Line 1916, Address: 0x2686c4, Func Offset: 0x1e4
	// Line 1949, Address: 0x2686c8, Func Offset: 0x1e8
	// Line 1918, Address: 0x2686d0, Func Offset: 0x1f0
	// Line 1922, Address: 0x2686dc, Func Offset: 0x1fc
	// Line 1918, Address: 0x2686e0, Func Offset: 0x200
	// Line 1949, Address: 0x2686ec, Func Offset: 0x20c
	// Line 1922, Address: 0x2686f8, Func Offset: 0x218
	// Line 1949, Address: 0x268718, Func Offset: 0x238
	// Line 1924, Address: 0x268720, Func Offset: 0x240
	// Line 1949, Address: 0x268724, Func Offset: 0x244
	// Line 1924, Address: 0x26872c, Func Offset: 0x24c
	// Line 1949, Address: 0x268730, Func Offset: 0x250
	// Line 1931, Address: 0x268740, Func Offset: 0x260
	// Line 1949, Address: 0x268744, Func Offset: 0x264
	// Line 1931, Address: 0x26874c, Func Offset: 0x26c
	// Line 1949, Address: 0x268750, Func Offset: 0x270
	// Line 1926, Address: 0x268760, Func Offset: 0x280
	// Line 1928, Address: 0x268764, Func Offset: 0x284
	// Line 1931, Address: 0x26876c, Func Offset: 0x28c
	// Line 1933, Address: 0x268770, Func Offset: 0x290
	// Line 1932, Address: 0x268774, Func Offset: 0x294
	// Line 1949, Address: 0x268778, Func Offset: 0x298
	// Line 1943, Address: 0x268790, Func Offset: 0x2b0
	// Line 1950, Address: 0x268798, Func Offset: 0x2b8
	// Func End, Address: 0x2687cc, Func Offset: 0x2ec
}

// DenMailSys__10zNMEDennisFP11NMESysEvent
// Start address: 0x2687d0
int32 zNMEDennis::DenMailSys(NMESysEvent* sysmail)
{
	int32 handled;
	int32 gotoStage;
	// Line 1760, Address: 0x2687d0, Func Offset: 0
	// Line 1763, Address: 0x2687d4, Func Offset: 0x4
	// Line 1760, Address: 0x2687d8, Func Offset: 0x8
	// Line 1763, Address: 0x2687e0, Func Offset: 0x10
	// Line 1765, Address: 0x268850, Func Offset: 0x80
	// Line 1766, Address: 0x268874, Func Offset: 0xa4
	// Line 1770, Address: 0x26887c, Func Offset: 0xac
	// Line 1771, Address: 0x2688a0, Func Offset: 0xd0
	// Line 1773, Address: 0x2688a8, Func Offset: 0xd8
	// Line 1775, Address: 0x2688b0, Func Offset: 0xe0
	// Line 1777, Address: 0x2688bc, Func Offset: 0xec
	// Line 1779, Address: 0x2688c8, Func Offset: 0xf8
	// Line 1780, Address: 0x2688d4, Func Offset: 0x104
	// Line 1782, Address: 0x268904, Func Offset: 0x134
	// Line 1784, Address: 0x268924, Func Offset: 0x154
	// Line 1797, Address: 0x26892c, Func Offset: 0x15c
	// Line 1801, Address: 0x268938, Func Offset: 0x168
	// Line 1772, Address: 0x268944, Func Offset: 0x174
	// Line 1801, Address: 0x268948, Func Offset: 0x178
	// Line 1772, Address: 0x268964, Func Offset: 0x194
	// Line 1774, Address: 0x26896c, Func Offset: 0x19c
	// Line 1801, Address: 0x268970, Func Offset: 0x1a0
	// Line 1774, Address: 0x268978, Func Offset: 0x1a8
	// Line 1801, Address: 0x26897c, Func Offset: 0x1ac
	// Line 1774, Address: 0x268990, Func Offset: 0x1c0
	// Line 1776, Address: 0x268998, Func Offset: 0x1c8
	// Line 1801, Address: 0x26899c, Func Offset: 0x1cc
	// Line 1776, Address: 0x2689a4, Func Offset: 0x1d4
	// Line 1801, Address: 0x2689a8, Func Offset: 0x1d8
	// Line 1776, Address: 0x2689bc, Func Offset: 0x1ec
	// Line 1778, Address: 0x2689c4, Func Offset: 0x1f4
	// Line 1801, Address: 0x2689c8, Func Offset: 0x1f8
	// Line 1778, Address: 0x2689d0, Func Offset: 0x200
	// Line 1801, Address: 0x2689d4, Func Offset: 0x204
	// Line 1778, Address: 0x2689e8, Func Offset: 0x218
	// Line 1802, Address: 0x2689f0, Func Offset: 0x220
	// Func End, Address: 0x2689fc, Func Offset: 0x22c
}

// DenMailDamage__10zNMEDennisFP13NMEDamageInfo
// Start address: 0x268a00
int32 zNMEDennis::DenMailDamage(NMEDamageInfo* dmgmail)
{
	int32 handled;
	xPsyche* psy;
	xGoal* goal;
	en_plyrpup pup;
	int32 amt_dmg;
	xGoal* goal;
	// Line 1673, Address: 0x268a00, Func Offset: 0
	// Line 1681, Address: 0x268a18, Func Offset: 0x18
	// Line 1684, Address: 0x268a44, Func Offset: 0x44
	// Line 1686, Address: 0x268a48, Func Offset: 0x48
	// Line 1689, Address: 0x268a58, Func Offset: 0x58
	// Line 1690, Address: 0x268a5c, Func Offset: 0x5c
	// Line 1689, Address: 0x268a60, Func Offset: 0x60
	// Line 1690, Address: 0x268a64, Func Offset: 0x64
	// Line 1691, Address: 0x268a74, Func Offset: 0x74
	// Line 1693, Address: 0x268aa0, Func Offset: 0xa0
	// Line 1717, Address: 0x268aa8, Func Offset: 0xa8
	// Line 1718, Address: 0x268ab0, Func Offset: 0xb0
	// Line 1727, Address: 0x268ac8, Func Offset: 0xc8
	// Line 1728, Address: 0x268ad4, Func Offset: 0xd4
	// Line 1730, Address: 0x268be0, Func Offset: 0x1e0
	// Line 1735, Address: 0x268bfc, Func Offset: 0x1fc
	// Line 1738, Address: 0x268c0c, Func Offset: 0x20c
	// Line 1740, Address: 0x268c10, Func Offset: 0x210
	// Line 1738, Address: 0x268c14, Func Offset: 0x214
	// Line 1740, Address: 0x268c18, Func Offset: 0x218
	// Line 1741, Address: 0x268c28, Func Offset: 0x228
	// Line 1742, Address: 0x268c54, Func Offset: 0x254
	// Line 1750, Address: 0x268c5c, Func Offset: 0x25c
	// Line 1756, Address: 0x268c60, Func Offset: 0x260
	// Line 1744, Address: 0x268c74, Func Offset: 0x274
	// Line 1756, Address: 0x268c7c, Func Offset: 0x27c
	// Line 1746, Address: 0x268c84, Func Offset: 0x284
	// Line 1757, Address: 0x268c8c, Func Offset: 0x28c
	// Func End, Address: 0x268ca4, Func Offset: 0x2a4
}

// TypeHandleMail__10zNMEDennisFP6NMEMsg
// Start address: 0x268cb0
int32 zNMEDennis::TypeHandleMail(NMEMsg* mail)
{
	int32 handled;
	// Line 1648, Address: 0x268cb0, Func Offset: 0
	// Line 1651, Address: 0x268cb4, Func Offset: 0x4
	// Line 1648, Address: 0x268cb8, Func Offset: 0x8
	// Line 1651, Address: 0x268cbc, Func Offset: 0xc
	// Line 1656, Address: 0x268cd8, Func Offset: 0x28
	// Line 1657, Address: 0x268ce0, Func Offset: 0x30
	// Line 1660, Address: 0x268ce8, Func Offset: 0x38
	// Line 1670, Address: 0x268cf0, Func Offset: 0x40
	// Func End, Address: 0x268cfc, Func Offset: 0x4c
}

// BossCamSet__10zNMEDennisF10en_dbcmodeb
// Start address: 0x268d00
void zNMEDennis::BossCamSet(en_dbcmode mod_desired, uint8 forceCut)
{
	en_dbcmode currCamMode;
	// Line 1379, Address: 0x268d00, Func Offset: 0
	// Line 1380, Address: 0x268d1c, Func Offset: 0x1c
	// Line 1381, Address: 0x268d20, Func Offset: 0x20
	// Line 1388, Address: 0x268d28, Func Offset: 0x28
	// Line 1404, Address: 0x268d40, Func Offset: 0x40
	// Line 1418, Address: 0x268d58, Func Offset: 0x58
	// Line 1396, Address: 0x268d60, Func Offset: 0x60
	// Line 1418, Address: 0x268d68, Func Offset: 0x68
	// Line 1412, Address: 0x268d80, Func Offset: 0x80
	// Line 1418, Address: 0x268d84, Func Offset: 0x84
	// Line 1412, Address: 0x268d88, Func Offset: 0x88
	// Line 1418, Address: 0x268d8c, Func Offset: 0x8c
	// Line 1419, Address: 0x268da8, Func Offset: 0xa8
	// Func End, Address: 0x268dc0, Func Offset: 0xc0
}

// VisionTarget__10zNMEDennisCFP4xEnt9en_defconi
// Start address: 0x268dc0
en_vis zNMEDennis::VisionTarget()
{
	NMECfgDennis* cfg;
	float32 dy;
	float32 rad_nearenuf;
	en_plyrpup pup;
	// Line 1238, Address: 0x268dc0, Func Offset: 0
	// Line 1241, Address: 0x268dc4, Func Offset: 0x4
	// Line 1238, Address: 0x268dc8, Func Offset: 0x8
	// Line 1241, Address: 0x268dcc, Func Offset: 0xc
	// Line 1238, Address: 0x268dd0, Func Offset: 0x10
	// Line 1241, Address: 0x268dec, Func Offset: 0x2c
	// Line 1251, Address: 0x268e14, Func Offset: 0x54
	// Line 1253, Address: 0x268e44, Func Offset: 0x84
	// Line 1258, Address: 0x268e4c, Func Offset: 0x8c
	// Line 1266, Address: 0x268e58, Func Offset: 0x98
	// Line 1261, Address: 0x268e60, Func Offset: 0xa0
	// Line 1266, Address: 0x268e64, Func Offset: 0xa4
	// Line 1270, Address: 0x268e94, Func Offset: 0xd4
	// Line 1267, Address: 0x268e98, Func Offset: 0xd8
	// Line 1270, Address: 0x268eb0, Func Offset: 0xf0
	// Line 1280, Address: 0x268ebc, Func Offset: 0xfc
	// Line 1282, Address: 0x268ed0, Func Offset: 0x110
	// Line 1284, Address: 0x268ed4, Func Offset: 0x114
	// Line 1285, Address: 0x268edc, Func Offset: 0x11c
	// Line 1286, Address: 0x268ee8, Func Offset: 0x128
	// Line 1288, Address: 0x268eec, Func Offset: 0x12c
	// Line 1289, Address: 0x268ef8, Func Offset: 0x138
	// Line 1293, Address: 0x268f00, Func Offset: 0x140
	// Line 1294, Address: 0x268f0c, Func Offset: 0x14c
	// Line 1296, Address: 0x268f1c, Func Offset: 0x15c
	// Line 1295, Address: 0x268f20, Func Offset: 0x160
	// Line 1298, Address: 0x268f2c, Func Offset: 0x16c
	// Line 1296, Address: 0x268f34, Func Offset: 0x174
	// Line 1298, Address: 0x268f38, Func Offset: 0x178
	// Line 1295, Address: 0x268f3c, Func Offset: 0x17c
	// Line 1298, Address: 0x268f40, Func Offset: 0x180
	// Line 1295, Address: 0x268f44, Func Offset: 0x184
	// Line 1298, Address: 0x268f4c, Func Offset: 0x18c
	// Line 1303, Address: 0x268f80, Func Offset: 0x1c0
	// Line 1305, Address: 0x268f90, Func Offset: 0x1d0
	// Line 1304, Address: 0x268f94, Func Offset: 0x1d4
	// Line 1307, Address: 0x268fa0, Func Offset: 0x1e0
	// Line 1305, Address: 0x268fa8, Func Offset: 0x1e8
	// Line 1307, Address: 0x268fac, Func Offset: 0x1ec
	// Line 1304, Address: 0x268fb0, Func Offset: 0x1f0
	// Line 1307, Address: 0x268fb4, Func Offset: 0x1f4
	// Line 1304, Address: 0x268fb8, Func Offset: 0x1f8
	// Line 1307, Address: 0x268fc0, Func Offset: 0x200
	// Line 1313, Address: 0x268ff4, Func Offset: 0x234
	// Line 1317, Address: 0x269004, Func Offset: 0x244
	// Line 1247, Address: 0x269020, Func Offset: 0x260
	// Line 1259, Address: 0x269028, Func Offset: 0x268
	// Line 1320, Address: 0x269038, Func Offset: 0x278
	// Func End, Address: 0x269060, Func Offset: 0x2a0
}

// RenderHud__10zNMEDennisFv
// Start address: 0x269060
void zNMEDennis::RenderHud()
{
	// Line 1233, Address: 0x269060, Func Offset: 0
	// Func End, Address: 0x26906c, Func Offset: 0xc
}

// PostProcess__10zNMEDennisFf
// Start address: 0x269070
void zNMEDennis::PostProcess()
{
	// Line 1226, Address: 0x269070, Func Offset: 0
	// Line 1229, Address: 0x26909c, Func Offset: 0x2c
	// Func End, Address: 0x2690a4, Func Offset: 0x34
}

// NewTime__10zNMEDennisFf
// Start address: 0x2690b0
void zNMEDennis::NewTime(float32 dt)
{
	// Line 1215, Address: 0x2690b0, Func Offset: 0
	// Line 1217, Address: 0x2690bc, Func Offset: 0xc
	// Line 1218, Address: 0x2690c4, Func Offset: 0x14
	// Line 1221, Address: 0x2690cc, Func Offset: 0x1c
	// Func End, Address: 0x2690d8, Func Offset: 0x28
}

// BUpdate__10zNMEDennisFP5xVec3
// Start address: 0x2690e0
void zNMEDennis::BUpdate(xVec3* pos)
{
	// Line 1209, Address: 0x2690e0, Func Offset: 0
	// Line 1210, Address: 0x2690e4, Func Offset: 0x4
	// Line 1209, Address: 0x2690e8, Func Offset: 0x8
	// Line 1210, Address: 0x2690f0, Func Offset: 0x10
	// Line 1211, Address: 0x2692c8, Func Offset: 0x1e8
	// Line 1210, Address: 0x2692d8, Func Offset: 0x1f8
	// Line 1211, Address: 0x2692e0, Func Offset: 0x200
	// Line 1210, Address: 0x269320, Func Offset: 0x240
	// Line 1211, Address: 0x269324, Func Offset: 0x244
	// Line 1210, Address: 0x269328, Func Offset: 0x248
	// Line 1211, Address: 0x26932c, Func Offset: 0x24c
	// Line 1210, Address: 0x269348, Func Offset: 0x268
	// Line 1211, Address: 0x26934c, Func Offset: 0x26c
	// Line 1210, Address: 0x269354, Func Offset: 0x274
	// Line 1211, Address: 0x269358, Func Offset: 0x278
	// Line 1210, Address: 0x269384, Func Offset: 0x2a4
	// Line 1211, Address: 0x269388, Func Offset: 0x2a8
	// Line 1210, Address: 0x2693b8, Func Offset: 0x2d8
	// Line 1211, Address: 0x2693c0, Func Offset: 0x2e0
	// Line 1210, Address: 0x2693ec, Func Offset: 0x30c
	// Line 1211, Address: 0x2693f0, Func Offset: 0x310
	// Line 1210, Address: 0x269420, Func Offset: 0x340
	// Line 1211, Address: 0x269428, Func Offset: 0x348
	// Line 1210, Address: 0x269450, Func Offset: 0x370
	// Line 1211, Address: 0x269454, Func Offset: 0x374
	// Line 1210, Address: 0x269458, Func Offset: 0x378
	// Line 1211, Address: 0x26945c, Func Offset: 0x37c
	// Line 1210, Address: 0x269464, Func Offset: 0x384
	// Line 1211, Address: 0x26946c, Func Offset: 0x38c
	// Line 1210, Address: 0x2694bc, Func Offset: 0x3dc
	// Line 1211, Address: 0x2694c4, Func Offset: 0x3e4
	// Line 1210, Address: 0x2694e8, Func Offset: 0x408
	// Line 1211, Address: 0x2694ec, Func Offset: 0x40c
	// Line 1210, Address: 0x2694f0, Func Offset: 0x410
	// Line 1211, Address: 0x2694f4, Func Offset: 0x414
	// Line 1210, Address: 0x269514, Func Offset: 0x434
	// Line 1211, Address: 0x269518, Func Offset: 0x438
	// Line 1210, Address: 0x269554, Func Offset: 0x474
	// Line 1211, Address: 0x269558, Func Offset: 0x478
	// Line 1210, Address: 0x269560, Func Offset: 0x480
	// Line 1211, Address: 0x269564, Func Offset: 0x484
	// Line 1210, Address: 0x26959c, Func Offset: 0x4bc
	// Line 1211, Address: 0x2695a0, Func Offset: 0x4c0
	// Line 1210, Address: 0x2695a4, Func Offset: 0x4c4
	// Line 1211, Address: 0x2695a8, Func Offset: 0x4c8
	// Line 1210, Address: 0x2695b0, Func Offset: 0x4d0
	// Line 1211, Address: 0x2695bc, Func Offset: 0x4dc
	// Line 1210, Address: 0x2695d4, Func Offset: 0x4f4
	// Line 1211, Address: 0x2695d8, Func Offset: 0x4f8
	// Line 1210, Address: 0x26961c, Func Offset: 0x53c
	// Line 1211, Address: 0x269624, Func Offset: 0x544
	// Line 1212, Address: 0x269634, Func Offset: 0x554
	// Func End, Address: 0x269640, Func Offset: 0x560
}

// Process__10zNMEDennisFf
// Start address: 0x269640
void zNMEDennis::Process(float32 dt)
{
	// Line 1152, Address: 0x269640, Func Offset: 0
	// Line 1153, Address: 0x269654, Func Offset: 0x14
	// Line 1163, Address: 0x269660, Func Offset: 0x20
	// Line 1165, Address: 0x269670, Func Offset: 0x30
	// Line 1167, Address: 0x26968c, Func Offset: 0x4c
	// Line 1168, Address: 0x269694, Func Offset: 0x54
	// Line 1175, Address: 0x269738, Func Offset: 0xf8
	// Line 1177, Address: 0x269750, Func Offset: 0x110
	// Line 1180, Address: 0x269780, Func Offset: 0x140
	// Line 1181, Address: 0x269790, Func Offset: 0x150
	// Line 1183, Address: 0x26979c, Func Offset: 0x15c
	// Line 1182, Address: 0x2697a0, Func Offset: 0x160
	// Line 1180, Address: 0x2697a8, Func Offset: 0x168
	// Line 1182, Address: 0x2697ac, Func Offset: 0x16c
	// Line 1180, Address: 0x2697b0, Func Offset: 0x170
	// Line 1182, Address: 0x2697b4, Func Offset: 0x174
	// Line 1180, Address: 0x2697b8, Func Offset: 0x178
	// Line 1183, Address: 0x2697bc, Func Offset: 0x17c
	// Line 1181, Address: 0x2697c0, Func Offset: 0x180
	// Line 1183, Address: 0x2697c4, Func Offset: 0x184
	// Line 1181, Address: 0x2697c8, Func Offset: 0x188
	// Line 1182, Address: 0x2697d4, Func Offset: 0x194
	// Line 1183, Address: 0x2697e4, Func Offset: 0x1a4
	// Line 1185, Address: 0x2697f4, Func Offset: 0x1b4
	// Line 1187, Address: 0x269804, Func Offset: 0x1c4
	// Line 1199, Address: 0x269830, Func Offset: 0x1f0
	// Line 1203, Address: 0x269840, Func Offset: 0x200
	// Line 1205, Address: 0x269878, Func Offset: 0x238
	// Line 1158, Address: 0x26988c, Func Offset: 0x24c
	// Line 1205, Address: 0x269890, Func Offset: 0x250
	// Line 1158, Address: 0x269894, Func Offset: 0x254
	// Line 1205, Address: 0x269898, Func Offset: 0x258
	// Line 1166, Address: 0x2698bc, Func Offset: 0x27c
	// Line 1205, Address: 0x2698c4, Func Offset: 0x284
	// Line 1177, Address: 0x2698ec, Func Offset: 0x2ac
	// Line 1205, Address: 0x2698f4, Func Offset: 0x2b4
	// Line 1177, Address: 0x2698f8, Func Offset: 0x2b8
	// Line 1206, Address: 0x269908, Func Offset: 0x2c8
	// Func End, Address: 0x269918, Func Offset: 0x2d8
}

// IsAlive__10zNMEDennisFv
// Start address: 0x269920
int32 zNMEDennis::IsAlive()
{
	// Line 1141, Address: 0x269920, Func Offset: 0
	// Line 1142, Address: 0x269924, Func Offset: 0x4
	// Line 1144, Address: 0x269930, Func Offset: 0x10
	// Line 1147, Address: 0x26993c, Func Offset: 0x1c
	// Line 1149, Address: 0x269948, Func Offset: 0x28
	// Func End, Address: 0x269950, Func Offset: 0x30
}

// Destroy__10zNMEDennisFv
// Start address: 0x269950
void zNMEDennis::Destroy()
{
	// Line 1132, Address: 0x269950, Func Offset: 0
	// Line 1133, Address: 0x269960, Func Offset: 0x10
	// Line 1135, Address: 0x269980, Func Offset: 0x30
	// Line 1138, Address: 0x269990, Func Offset: 0x40
	// Func End, Address: 0x2699a0, Func Offset: 0x50
}

// Reset__10zNMEDennisFv
// Start address: 0x2699a0
void zNMEDennis::Reset()
{
	xPsyche* psy;
	// Line 1095, Address: 0x2699a0, Func Offset: 0
	// Line 1096, Address: 0x2699b0, Func Offset: 0x10
	// Line 1101, Address: 0x269c2c, Func Offset: 0x28c
	// Line 1102, Address: 0x269c4c, Func Offset: 0x2ac
	// Line 1111, Address: 0x269c7c, Func Offset: 0x2dc
	// Line 1106, Address: 0x269c80, Func Offset: 0x2e0
	// Line 1111, Address: 0x269c84, Func Offset: 0x2e4
	// Line 1112, Address: 0x269c8c, Func Offset: 0x2ec
	// Line 1115, Address: 0x269ca0, Func Offset: 0x300
	// Line 1116, Address: 0x269cb8, Func Offset: 0x318
	// Line 1115, Address: 0x269cbc, Func Offset: 0x31c
	// Line 1116, Address: 0x269cc0, Func Offset: 0x320
	// Line 1115, Address: 0x269cc4, Func Offset: 0x324
	// Line 1116, Address: 0x269cc8, Func Offset: 0x328
	// Line 1115, Address: 0x269ccc, Func Offset: 0x32c
	// Line 1119, Address: 0x269cd0, Func Offset: 0x330
	// Line 1116, Address: 0x269cd4, Func Offset: 0x334
	// Line 1115, Address: 0x269cd8, Func Offset: 0x338
	// Line 1116, Address: 0x269cdc, Func Offset: 0x33c
	// Line 1120, Address: 0x269ce0, Func Offset: 0x340
	// Line 1115, Address: 0x269ce4, Func Offset: 0x344
	// Line 1123, Address: 0x269ce8, Func Offset: 0x348
	// Line 1116, Address: 0x269cf0, Func Offset: 0x350
	// Line 1123, Address: 0x269d00, Func Offset: 0x360
	// Line 1116, Address: 0x269d04, Func Offset: 0x364
	// Line 1123, Address: 0x269d10, Func Offset: 0x370
	// Line 1116, Address: 0x269d14, Func Offset: 0x374
	// Line 1120, Address: 0x269d1c, Func Offset: 0x37c
	// Line 1116, Address: 0x269d20, Func Offset: 0x380
	// Line 1119, Address: 0x269d24, Func Offset: 0x384
	// Line 1120, Address: 0x269d28, Func Offset: 0x388
	// Line 1123, Address: 0x269d44, Func Offset: 0x3a4
	// Line 1125, Address: 0x269d4c, Func Offset: 0x3ac
	// Line 1126, Address: 0x269d50, Func Offset: 0x3b0
	// Line 1125, Address: 0x269d54, Func Offset: 0x3b4
	// Line 1128, Address: 0x269d58, Func Offset: 0x3b8
	// Line 1129, Address: 0x269d88, Func Offset: 0x3e8
	// Func End, Address: 0x269d9c, Func Offset: 0x3fc
}

// Setup__10zNMEDennisFv
// Start address: 0x269da0
void zNMEDennis::Setup()
{
	zNPCMgr* mgr;
	int8* nam_sbbat;
	uint32 aid_sbbat;
	// Line 1067, Address: 0x269da0, Func Offset: 0
	// Line 1068, Address: 0x269da4, Func Offset: 0x4
	// Line 1067, Address: 0x269da8, Func Offset: 0x8
	// Line 1068, Address: 0x269dac, Func Offset: 0xc
	// Line 1067, Address: 0x269db0, Func Offset: 0x10
	// Line 1068, Address: 0x269db4, Func Offset: 0x14
	// Line 1067, Address: 0x269db8, Func Offset: 0x18
	// Line 1068, Address: 0x269dbc, Func Offset: 0x1c
	// Line 1071, Address: 0x269df8, Func Offset: 0x58
	// Line 1074, Address: 0x269e10, Func Offset: 0x70
	// Line 1083, Address: 0x269e20, Func Offset: 0x80
	// Line 1088, Address: 0x269e24, Func Offset: 0x84
	// Line 1083, Address: 0x269e28, Func Offset: 0x88
	// Line 1088, Address: 0x269e2c, Func Offset: 0x8c
	// Line 1083, Address: 0x269e30, Func Offset: 0x90
	// Line 1084, Address: 0x269e3c, Func Offset: 0x9c
	// Line 1083, Address: 0x269e40, Func Offset: 0xa0
	// Line 1084, Address: 0x269e58, Func Offset: 0xb8
	// Line 1088, Address: 0x269e78, Func Offset: 0xd8
	// Line 1089, Address: 0x269e84, Func Offset: 0xe4
	// Line 1091, Address: 0x26a05c, Func Offset: 0x2bc
	// Line 1071, Address: 0x26a064, Func Offset: 0x2c4
	// Line 1091, Address: 0x26a06c, Func Offset: 0x2cc
	// Line 1071, Address: 0x26a074, Func Offset: 0x2d4
	// Line 1091, Address: 0x26a078, Func Offset: 0x2d8
	// Line 1075, Address: 0x26a098, Func Offset: 0x2f8
	// Line 1091, Address: 0x26a09c, Func Offset: 0x2fc
	// Line 1078, Address: 0x26a0a4, Func Offset: 0x304
	// Line 1091, Address: 0x26a0a8, Func Offset: 0x308
	// Line 1092, Address: 0x26a0b8, Func Offset: 0x318
	// Func End, Address: 0x26a0cc, Func Offset: 0x32c
}

// Init__10zNMEDennisFP9xEntAsset
// Start address: 0x26a0d0
void zNMEDennis::Init(xEntAsset* asset)
{
	// Line 1051, Address: 0x26a0d0, Func Offset: 0
	// Line 1052, Address: 0x26a0e4, Func Offset: 0x14
	// Line 1054, Address: 0x26a0f8, Func Offset: 0x28
	// Line 1058, Address: 0x26a1c8, Func Offset: 0xf8
	// Line 1054, Address: 0x26a1cc, Func Offset: 0xfc
	// Line 1058, Address: 0x26a1d4, Func Offset: 0x104
	// Line 1061, Address: 0x26a1dc, Func Offset: 0x10c
	// Line 1062, Address: 0x26a204, Func Offset: 0x134
	// Line 1064, Address: 0x26a218, Func Offset: 0x148
	// Func End, Address: 0x26a22c, Func Offset: 0x15c
}

// CreateDennisAndSBBatAnimTable__FP10xAnimTable
// Start address: 0x26a230
void CreateDennisAndSBBatAnimTable(xAnimTable* table)
{
	// Line 897, Address: 0x26a230, Func Offset: 0
	// Line 907, Address: 0x26a234, Func Offset: 0x4
	// Line 897, Address: 0x26a238, Func Offset: 0x8
	// Line 907, Address: 0x26a23c, Func Offset: 0xc
	// Line 897, Address: 0x26a240, Func Offset: 0x10
	// Line 907, Address: 0x26a244, Func Offset: 0x14
	// Line 911, Address: 0x26a284, Func Offset: 0x54
	// Line 915, Address: 0x26a2cc, Func Offset: 0x9c
	// Line 919, Address: 0x26a314, Func Offset: 0xe4
	// Line 924, Address: 0x26a35c, Func Offset: 0x12c
	// Line 931, Address: 0x26a3a4, Func Offset: 0x174
	// Line 935, Address: 0x26a3ec, Func Offset: 0x1bc
	// Line 939, Address: 0x26a434, Func Offset: 0x204
	// Line 943, Address: 0x26a47c, Func Offset: 0x24c
	// Line 948, Address: 0x26a4c4, Func Offset: 0x294
	// Line 952, Address: 0x26a50c, Func Offset: 0x2dc
	// Line 956, Address: 0x26a554, Func Offset: 0x324
	// Line 960, Address: 0x26a59c, Func Offset: 0x36c
	// Line 965, Address: 0x26a5e4, Func Offset: 0x3b4
	// Line 969, Address: 0x26a62c, Func Offset: 0x3fc
	// Line 973, Address: 0x26a674, Func Offset: 0x444
	// Line 977, Address: 0x26a6bc, Func Offset: 0x48c
	// Line 982, Address: 0x26a704, Func Offset: 0x4d4
	// Line 986, Address: 0x26a74c, Func Offset: 0x51c
	// Line 990, Address: 0x26a794, Func Offset: 0x564
	// Line 996, Address: 0x26a7dc, Func Offset: 0x5ac
	// Line 1000, Address: 0x26a824, Func Offset: 0x5f4
	// Line 1004, Address: 0x26a86c, Func Offset: 0x63c
	// Line 1008, Address: 0x26a8b4, Func Offset: 0x684
	// Line 1015, Address: 0x26a8fc, Func Offset: 0x6cc
	// Line 1019, Address: 0x26a944, Func Offset: 0x714
	// Line 1024, Address: 0x26a98c, Func Offset: 0x75c
	// Line 1028, Address: 0x26a9d4, Func Offset: 0x7a4
	// Line 1032, Address: 0x26aa1c, Func Offset: 0x7ec
	// Line 1036, Address: 0x26aa64, Func Offset: 0x834
	// Line 1048, Address: 0x26aaac, Func Offset: 0x87c
	// Func End, Address: 0x26aabc, Func Offset: 0x88c
}

// CreateAnimTable__10zNMEDennisFP10xAnimTable
// Start address: 0x26aac0
xAnimTable* zNMEDennis::CreateAnimTable(xAnimTable* table)
{
	// Line 886, Address: 0x26aac0, Func Offset: 0
	// Line 887, Address: 0x26aad0, Func Offset: 0x10
	// Line 891, Address: 0x26aad8, Func Offset: 0x18
	// Line 893, Address: 0x26aae0, Func Offset: 0x20
	// Line 888, Address: 0x26aae8, Func Offset: 0x28
	// Line 893, Address: 0x26aaec, Func Offset: 0x2c
	// Line 894, Address: 0x26aafc, Func Offset: 0x3c
	// Func End, Address: 0x26ab0c, Func Offset: 0x4c
}

// GoalPick__10zNMEDennisFP5xGoalRiR11en_trantype
// Start address: 0x26ab10
int32 GoalPick(int32& gid_would)
{
	int32 altered;
	// Line 847, Address: 0x26ab10, Func Offset: 0
	// Line 850, Address: 0x26ab48, Func Offset: 0x38
	// Line 852, Address: 0x26ab50, Func Offset: 0x40
	// Line 856, Address: 0x26ab58, Func Offset: 0x48
	// Line 858, Address: 0x26ab60, Func Offset: 0x50
	// Line 861, Address: 0x26ab68, Func Offset: 0x58
	// Line 863, Address: 0x26ab70, Func Offset: 0x60
	// Line 866, Address: 0x26ab78, Func Offset: 0x68
	// Line 870, Address: 0x26ab80, Func Offset: 0x70
	// Line 873, Address: 0x26ab88, Func Offset: 0x78
	// Line 875, Address: 0x26ab90, Func Offset: 0x80
	// Line 878, Address: 0x26ab98, Func Offset: 0x88
	// Line 883, Address: 0x26ab9c, Func Offset: 0x8c
	// Func End, Address: 0x26aba4, Func Offset: 0x94
}

// AnimPick__10zNMEDennisFi11en_npcgspotP5xGoal
// Start address: 0x26abb0
uint32 zNMEDennis::AnimPick(int32 gid, en_npcgspot gspot)
{
	int32 idx;
	// Line 786, Address: 0x26abb0, Func Offset: 0
	// Line 789, Address: 0x26abd4, Func Offset: 0x24
	// Line 791, Address: 0x26ac1c, Func Offset: 0x6c
	// Line 789, Address: 0x26ac24, Func Offset: 0x74
	// Line 791, Address: 0x26ac38, Func Offset: 0x88
	// Line 795, Address: 0x26ac90, Func Offset: 0xe0
	// Line 800, Address: 0x26ac98, Func Offset: 0xe8
	// Line 803, Address: 0x26aca0, Func Offset: 0xf0
	// Line 805, Address: 0x26acac, Func Offset: 0xfc
	// Line 807, Address: 0x26acb4, Func Offset: 0x104
	// Line 809, Address: 0x26acc0, Func Offset: 0x110
	// Line 813, Address: 0x26acc8, Func Offset: 0x118
	// Line 816, Address: 0x26acd0, Func Offset: 0x120
	// Line 817, Address: 0x26ace4, Func Offset: 0x134
	// Line 820, Address: 0x26acec, Func Offset: 0x13c
	// Line 823, Address: 0x26acf4, Func Offset: 0x144
	// Line 840, Address: 0x26ad00, Func Offset: 0x150
	// Line 804, Address: 0x26ad18, Func Offset: 0x168
	// Line 806, Address: 0x26ad20, Func Offset: 0x170
	// Line 840, Address: 0x26ad28, Func Offset: 0x178
	// Line 824, Address: 0x26ad30, Func Offset: 0x180
	// Line 840, Address: 0x26ad38, Func Offset: 0x188
	// Line 824, Address: 0x26ad40, Func Offset: 0x190
	// Line 840, Address: 0x26ad7c, Func Offset: 0x1cc
	// Line 824, Address: 0x26ad80, Func Offset: 0x1d0
	// Line 841, Address: 0x26ad8c, Func Offset: 0x1dc
	// Func End, Address: 0x26ada8, Func Offset: 0x1f8
}

// MvptFirstFollow__10zNMEDennisFv
// Start address: 0x26adb0
zMovePoint* zNMEDennis::MvptFirstFollow()
{
	zMovePoint* nav;
	// Line 773, Address: 0x26adb0, Func Offset: 0
	// Line 776, Address: 0x26adc0, Func Offset: 0x10
	// Line 779, Address: 0x26add0, Func Offset: 0x20
	// Line 783, Address: 0x26add8, Func Offset: 0x28
	// Func End, Address: 0x26ade4, Func Offset: 0x34
}

// SelfSetup__10zNMEDennisFv
// Start address: 0x26adf0
void zNMEDennis::SelfSetup()
{
	xBehaveMgr* bmgr;
	xPsyche* psy;
	// Line 738, Address: 0x26adf0, Func Offset: 0
	// Line 740, Address: 0x26ae00, Func Offset: 0x10
	// Line 741, Address: 0x26ae08, Func Offset: 0x18
	// Line 744, Address: 0x26ae1c, Func Offset: 0x2c
	// Line 749, Address: 0x26ae20, Func Offset: 0x30
	// Line 752, Address: 0x26ae28, Func Offset: 0x38
	// Line 753, Address: 0x26ae3c, Func Offset: 0x4c
	// Line 754, Address: 0x26ae50, Func Offset: 0x60
	// Line 755, Address: 0x26ae64, Func Offset: 0x74
	// Line 756, Address: 0x26ae78, Func Offset: 0x88
	// Line 757, Address: 0x26ae8c, Func Offset: 0x9c
	// Line 758, Address: 0x26aea0, Func Offset: 0xb0
	// Line 762, Address: 0x26aeb4, Func Offset: 0xc4
	// Line 765, Address: 0x26aebc, Func Offset: 0xcc
	// Line 767, Address: 0x26aec0, Func Offset: 0xd0
	// Line 765, Address: 0x26aec4, Func Offset: 0xd4
	// Line 767, Address: 0x26aecc, Func Offset: 0xdc
	// Line 770, Address: 0x26aed4, Func Offset: 0xe4
	// Func End, Address: 0x26aee8, Func Offset: 0xf8
}

// DfltVulnFlags__10zNMEDennisFv
// Start address: 0x26aef0
int32 zNMEDennis::DfltVulnFlags()
{
	// Line 691, Address: 0x26aef0, Func Offset: 0
	// Line 692, Address: 0x26aef4, Func Offset: 0x4
	// Func End, Address: 0x26aefc, Func Offset: 0xc
}

// CreateConfig__10zNMEDennisFPCc
// Start address: 0x26af00
void zNMEDennis::CreateConfig()
{
	// Line 488, Address: 0x26af00, Func Offset: 0
	// Line 491, Address: 0x26af18, Func Offset: 0x18
	// Line 500, Address: 0x26af24, Func Offset: 0x24
	// Line 515, Address: 0x26af2c, Func Offset: 0x2c
	// Func End, Address: 0x26af34, Func Offset: 0x34
}

