



void KneeSpray_Upd();
void HipSpray_Upd();
void PitSpray_Upd();
void ArmSpray_Upd();
void NeckSpray_Upd();
void RainyMist_Upd(float32 dt);
void WorldFog_Upd(float32 dt);
void Timestep(float32 dt);
void ScenePostInit();
void SceneFinish();
void ScenePrepare();
int32 Exit();
int32 Enter();
int32 GoalHandleMail(NMEMsg* mail);
int32 ChkExistence(zNMEDenToo* npc, float32 dt, int32& nextgoal, en_trantype& trantype);
int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
int32 Exit();
int32 Enter();
int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
int32 Enter();
int32 GoalHandleMail(NMEMsg* mail);
void RibbonLoop(zNMEDenToo* npc);
int32 PathParabola(zNMEDenToo* npc);
int32 UpdateAnim(zNMEDenToo* npc, float32 dt);
void SplashLanding(zNMEDenToo* npc);
int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
int32 Exit();
int32 Enter();
int32 ThrowKnife_Toes(zNMEDenToo* npc, int32 idx);
void ThrowUpdate(zNMEDenToo* npc);
int32 NumKnivesToThrow(zNMEDenToo* npc);
int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
int32 Enter();
int32 ChkExitCases(zNMEDenToo* npc, int32& nextgoal, en_trantype& trantype);
int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
int32 Enter();
int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
int32 Exit();
int32 Enter();
zMovePoint* PickEvade(zMovePoint* nav_from);
int32 DenMailSys(NMESysEvent* sysmail);
int32 DenMailDamage(NMEDamageInfo* dmgmail);
int32 TypeHandleMail(NMEMsg* mail);
void BossCamRepel();
void BossCamOverride(zBossCam_Binary* cam, float32 dt, void* ctxt);
void BossCamSet(en_dtbcmode mod_desired, uint8 forceCut);
void RespondToHittingPlayer();
en_vis VisionTarget();
void RenderHud();
void BUpdate(xVec3* pos);
void PostProcess();
void Process(float32 dt);
int32 IsAlive();
void Destroy();
void Reset();
void Setup();
void Init(xEntAsset* asset);
xAnimTable* CreateAnimTable(xAnimTable* table);
int32 GoalPick(int32& gid_would);
uint32 AnimPick(int32 gid, en_npcgspot gspot);
zMovePoint* MvptFirstFollow();
void SelfSetup();
int32 DfltVulnFlags();
void update();
void setup();
void* __ct();
void CreateConfig();
void ModulePrepUse();

// KneeSpray_Upd__Q27Swimmer11zMODSwimmerFf
// Start address: 0x25e2a0
void KneeSpray_Upd()
{
	// Line 4789, Address: 0x25e2a0, Func Offset: 0
	// Func End, Address: 0x25e2a8, Func Offset: 0x8
}

// HipSpray_Upd__Q27Swimmer11zMODSwimmerFf
// Start address: 0x25e2b0
void HipSpray_Upd()
{
	// Line 4750, Address: 0x25e2b0, Func Offset: 0
	// Func End, Address: 0x25e2b8, Func Offset: 0x8
}

// PitSpray_Upd__Q27Swimmer11zMODSwimmerFf
// Start address: 0x25e2c0
void PitSpray_Upd()
{
	// Line 4711, Address: 0x25e2c0, Func Offset: 0
	// Func End, Address: 0x25e2c8, Func Offset: 0x8
}

// ArmSpray_Upd__Q27Swimmer11zMODSwimmerFf
// Start address: 0x25e2d0
void ArmSpray_Upd()
{
	// Line 4672, Address: 0x25e2d0, Func Offset: 0
	// Func End, Address: 0x25e2d8, Func Offset: 0x8
}

// NeckSpray_Upd__Q27Swimmer11zMODSwimmerFf
// Start address: 0x25e2e0
void NeckSpray_Upd()
{
	// Line 4634, Address: 0x25e2e0, Func Offset: 0
	// Func End, Address: 0x25e2e8, Func Offset: 0x8
}

// RainyMist_Upd__Q27Swimmer11zMODSwimmerFf
// Start address: 0x25e2f0
void zMODSwimmer::RainyMist_Upd(float32 dt)
{
	// Line 4555, Address: 0x25e2f0, Func Offset: 0
	// Line 4563, Address: 0x25e2f4, Func Offset: 0x4
	// Line 4555, Address: 0x25e2f8, Func Offset: 0x8
	// Line 4563, Address: 0x25e2fc, Func Offset: 0xc
	// Line 4555, Address: 0x25e300, Func Offset: 0x10
	// Line 4563, Address: 0x25e30c, Func Offset: 0x1c
	// Line 4564, Address: 0x25e324, Func Offset: 0x34
	// Line 4569, Address: 0x25e34c, Func Offset: 0x5c
	// Line 4570, Address: 0x25e374, Func Offset: 0x84
	// Line 4580, Address: 0x25e398, Func Offset: 0xa8
	// Line 4583, Address: 0x25e3d4, Func Offset: 0xe4
	// Line 4593, Address: 0x25e410, Func Offset: 0x120
	// Line 4574, Address: 0x25e420, Func Offset: 0x130
	// Line 4593, Address: 0x25e428, Func Offset: 0x138
	// Line 4574, Address: 0x25e430, Func Offset: 0x140
	// Line 4575, Address: 0x25e460, Func Offset: 0x170
	// Line 4574, Address: 0x25e464, Func Offset: 0x174
	// Line 4593, Address: 0x25e478, Func Offset: 0x188
	// Line 4594, Address: 0x25e480, Func Offset: 0x190
	// Func End, Address: 0x25e490, Func Offset: 0x1a0
}

// WorldFog_Upd__Q27Swimmer11zMODSwimmerFf
// Start address: 0x25e490
void zMODSwimmer::WorldFog_Upd(float32 dt)
{
	// Line 4515, Address: 0x25e490, Func Offset: 0
	// Line 4523, Address: 0x25e494, Func Offset: 0x4
	// Line 4515, Address: 0x25e498, Func Offset: 0x8
	// Line 4523, Address: 0x25e49c, Func Offset: 0xc
	// Line 4515, Address: 0x25e4a0, Func Offset: 0x10
	// Line 4523, Address: 0x25e4ac, Func Offset: 0x1c
	// Line 4524, Address: 0x25e4c4, Func Offset: 0x34
	// Line 4529, Address: 0x25e4ec, Func Offset: 0x5c
	// Line 4530, Address: 0x25e514, Func Offset: 0x84
	// Line 4540, Address: 0x25e538, Func Offset: 0xa8
	// Line 4542, Address: 0x25e570, Func Offset: 0xe0
	// Line 4551, Address: 0x25e5a8, Func Offset: 0x118
	// Line 4534, Address: 0x25e5b8, Func Offset: 0x128
	// Line 4551, Address: 0x25e5c0, Func Offset: 0x130
	// Line 4534, Address: 0x25e5c8, Func Offset: 0x138
	// Line 4551, Address: 0x25e618, Func Offset: 0x188
	// Line 4552, Address: 0x25e620, Func Offset: 0x190
	// Func End, Address: 0x25e630, Func Offset: 0x1a0
}

// Timestep__Q27Swimmer11zMODSwimmerFf
// Start address: 0x25e630
void zMODSwimmer::Timestep(float32 dt)
{
	// Line 4478, Address: 0x25e630, Func Offset: 0
	// Line 4479, Address: 0x25e644, Func Offset: 0x14
	// Line 4492, Address: 0x25e658, Func Offset: 0x28
	// Line 4493, Address: 0x25e660, Func Offset: 0x30
	// Line 4499, Address: 0x25e66c, Func Offset: 0x3c
	// Line 4500, Address: 0x25e678, Func Offset: 0x48
	// Line 4501, Address: 0x25e684, Func Offset: 0x54
	// Line 4502, Address: 0x25e690, Func Offset: 0x60
	// Line 4503, Address: 0x25e69c, Func Offset: 0x6c
	// Line 4508, Address: 0x25e6a8, Func Offset: 0x78
	// Func End, Address: 0x25e6bc, Func Offset: 0x8c
}

// ScenePostInit__Q27Swimmer11zMODSwimmerFv
// Start address: 0x25e6c0
void zMODSwimmer::ScenePostInit()
{
	// Line 4445, Address: 0x25e6c0, Func Offset: 0
	// Line 4446, Address: 0x25e6cc, Func Offset: 0xc
	// Line 4447, Address: 0x25e714, Func Offset: 0x54
	// Line 4448, Address: 0x25e71c, Func Offset: 0x5c
	// Line 4462, Address: 0x25e734, Func Offset: 0x74
	// Line 4463, Address: 0x25e74c, Func Offset: 0x8c
	// Line 4464, Address: 0x25e764, Func Offset: 0xa4
	// Line 4467, Address: 0x25e77c, Func Offset: 0xbc
	// Line 4468, Address: 0x25e794, Func Offset: 0xd4
	// Line 4469, Address: 0x25e7ac, Func Offset: 0xec
	// Line 4471, Address: 0x25e7c4, Func Offset: 0x104
	// Line 4472, Address: 0x25e7dc, Func Offset: 0x11c
	// Line 4474, Address: 0x25e7f4, Func Offset: 0x134
	// Line 4450, Address: 0x25e800, Func Offset: 0x140
	// Line 4451, Address: 0x25e808, Func Offset: 0x148
	// Line 4450, Address: 0x25e80c, Func Offset: 0x14c
	// Line 4474, Address: 0x25e814, Func Offset: 0x154
	// Line 4451, Address: 0x25e81c, Func Offset: 0x15c
	// Line 4452, Address: 0x25e824, Func Offset: 0x164
	// Line 4462, Address: 0x25e82c, Func Offset: 0x16c
	// Line 4474, Address: 0x25e830, Func Offset: 0x170
	// Line 4463, Address: 0x25e840, Func Offset: 0x180
	// Line 4474, Address: 0x25e844, Func Offset: 0x184
	// Line 4464, Address: 0x25e854, Func Offset: 0x194
	// Line 4474, Address: 0x25e858, Func Offset: 0x198
	// Line 4467, Address: 0x25e868, Func Offset: 0x1a8
	// Line 4474, Address: 0x25e86c, Func Offset: 0x1ac
	// Line 4468, Address: 0x25e87c, Func Offset: 0x1bc
	// Line 4474, Address: 0x25e880, Func Offset: 0x1c0
	// Line 4469, Address: 0x25e890, Func Offset: 0x1d0
	// Line 4474, Address: 0x25e894, Func Offset: 0x1d4
	// Line 4471, Address: 0x25e8a4, Func Offset: 0x1e4
	// Line 4474, Address: 0x25e8a8, Func Offset: 0x1e8
	// Line 4472, Address: 0x25e8b8, Func Offset: 0x1f8
	// Line 4474, Address: 0x25e8bc, Func Offset: 0x1fc
	// Line 4475, Address: 0x25e8cc, Func Offset: 0x20c
	// Func End, Address: 0x25e8d8, Func Offset: 0x218
}

// SceneFinish__Q27Swimmer11zMODSwimmerFv
// Start address: 0x25e8e0
void zMODSwimmer::SceneFinish()
{
	// Line 4439, Address: 0x25e8e0, Func Offset: 0
	// Line 4442, Address: 0x25e8f4, Func Offset: 0x14
	// Func End, Address: 0x25e8fc, Func Offset: 0x1c
}

// ScenePrepare__Q27Swimmer11zMODSwimmerFv
// Start address: 0x25e900
void zMODSwimmer::ScenePrepare()
{
	// Line 4431, Address: 0x25e900, Func Offset: 0
	// Line 4433, Address: 0x25e90c, Func Offset: 0xc
	// Line 4431, Address: 0x25e914, Func Offset: 0x14
	// Line 4432, Address: 0x25e920, Func Offset: 0x20
	// Line 4433, Address: 0x25e930, Func Offset: 0x30
	// Line 4435, Address: 0x25e93c, Func Offset: 0x3c
	// Func End, Address: 0x25e944, Func Offset: 0x44
}

// Exit__16zNMEGoalDentDeadFfPv
// Start address: 0x25e950
int32 zNMEGoalDentDead::Exit()
{
	// Line 3492, Address: 0x25e950, Func Offset: 0
	// Line 3494, Address: 0x25e960, Func Offset: 0x10
	// Line 3495, Address: 0x25ea50, Func Offset: 0x100
	// Func End, Address: 0x25ea64, Func Offset: 0x114
}

// Enter__16zNMEGoalDentDeadFfPv
// Start address: 0x25ea70
int32 zNMEGoalDentDead::Enter()
{
	// Line 3486, Address: 0x25ea70, Func Offset: 0
	// Line 3488, Address: 0x25ea84, Func Offset: 0x14
	// Line 3489, Address: 0x25ebd0, Func Offset: 0x160
	// Func End, Address: 0x25ebe8, Func Offset: 0x178
}

// GoalHandleMail__18zNMEGoalDentDamageFP6NMEMsg
// Start address: 0x25ebf0
int32 zNMEGoalDentDamage::GoalHandleMail(NMEMsg* mail)
{
	int32 snarfed;
	zNMEDenToo* npc;
	NMEDamageInfo* dmgmail;
	xPsyche* psy;
	en_plyrpup pup;
	int32 amt_dmg;
	xGoal* goal;
	// Line 3427, Address: 0x25ebf0, Func Offset: 0
	// Line 3430, Address: 0x25ebf4, Func Offset: 0x4
	// Line 3427, Address: 0x25ebf8, Func Offset: 0x8
	// Line 3430, Address: 0x25ec08, Func Offset: 0x18
	// Line 3437, Address: 0x25ec1c, Func Offset: 0x2c
	// Line 3442, Address: 0x25ec20, Func Offset: 0x30
	// Line 3437, Address: 0x25ec24, Func Offset: 0x34
	// Line 3442, Address: 0x25ec28, Func Offset: 0x38
	// Line 3444, Address: 0x25ec34, Func Offset: 0x44
	// Line 3445, Address: 0x25ec3c, Func Offset: 0x4c
	// Line 3452, Address: 0x25ec54, Func Offset: 0x64
	// Line 3453, Address: 0x25ec60, Func Offset: 0x70
	// Line 3455, Address: 0x25ed6c, Func Offset: 0x17c
	// Line 3458, Address: 0x25ed88, Func Offset: 0x198
	// Line 3461, Address: 0x25ed94, Func Offset: 0x1a4
	// Line 3463, Address: 0x25ed98, Func Offset: 0x1a8
	// Line 3461, Address: 0x25ed9c, Func Offset: 0x1ac
	// Line 3463, Address: 0x25eda0, Func Offset: 0x1b0
	// Line 3464, Address: 0x25edb0, Func Offset: 0x1c0
	// Line 3476, Address: 0x25ede0, Func Offset: 0x1f0
	// Line 3477, Address: 0x25edfc, Func Offset: 0x20c
	// Func End, Address: 0x25ee10, Func Offset: 0x220
}

// ChkExistence__18zNMEGoalDentDamageFP10zNMEDenToofRiR11en_trantype
// Start address: 0x25ee10
int32 zNMEGoalDentDamage::ChkExistence(zNMEDenToo* npc, float32 dt, int32& nextgoal, en_trantype& trantype)
{
	// Line 3382, Address: 0x25ee10, Func Offset: 0
	// Line 3383, Address: 0x25ee40, Func Offset: 0x30
	// Line 3384, Address: 0x25ee44, Func Offset: 0x34
	// Line 3388, Address: 0x25ee50, Func Offset: 0x40
	// Line 3392, Address: 0x25ee78, Func Offset: 0x68
	// Line 3394, Address: 0x25ee88, Func Offset: 0x78
	// Line 3396, Address: 0x25eedc, Func Offset: 0xcc
	// Line 3398, Address: 0x25eee0, Func Offset: 0xd0
	// Line 3396, Address: 0x25eee4, Func Offset: 0xd4
	// Line 3398, Address: 0x25eee8, Func Offset: 0xd8
	// Line 3397, Address: 0x25eeec, Func Offset: 0xdc
	// Line 3398, Address: 0x25eef0, Func Offset: 0xe0
	// Line 3397, Address: 0x25eef4, Func Offset: 0xe4
	// Line 3398, Address: 0x25eefc, Func Offset: 0xec
	// Line 3399, Address: 0x25ef0c, Func Offset: 0xfc
	// Line 3384, Address: 0x25ef2c, Func Offset: 0x11c
	// Line 3394, Address: 0x25ef34, Func Offset: 0x124
	// Line 3399, Address: 0x25ef38, Func Offset: 0x128
	// Line 3394, Address: 0x25ef40, Func Offset: 0x130
	// Line 3399, Address: 0x25ef44, Func Offset: 0x134
	// Line 3394, Address: 0x25ef58, Func Offset: 0x148
	// Line 3399, Address: 0x25ef64, Func Offset: 0x154
	// Line 3394, Address: 0x25ef6c, Func Offset: 0x15c
	// Line 3399, Address: 0x25ef70, Func Offset: 0x160
	// Line 3394, Address: 0x25ef84, Func Offset: 0x174
	// Line 3408, Address: 0x25ef8c, Func Offset: 0x17c
	// Line 3409, Address: 0x25ef98, Func Offset: 0x188
	// Line 3418, Address: 0x25efa0, Func Offset: 0x190
	// Line 3417, Address: 0x25efa4, Func Offset: 0x194
	// Line 3419, Address: 0x25efa8, Func Offset: 0x198
	// Line 3411, Address: 0x25efb0, Func Offset: 0x1a0
	// Line 3413, Address: 0x25efb4, Func Offset: 0x1a4
	// Line 3419, Address: 0x25efb8, Func Offset: 0x1a8
	// Line 3413, Address: 0x25efbc, Func Offset: 0x1ac
	// Line 3412, Address: 0x25efc0, Func Offset: 0x1b0
	// Line 3413, Address: 0x25efc4, Func Offset: 0x1b4
	// Line 3412, Address: 0x25efc8, Func Offset: 0x1b8
	// Line 3419, Address: 0x25efcc, Func Offset: 0x1bc
	// Line 3414, Address: 0x25efe0, Func Offset: 0x1d0
	// Line 3424, Address: 0x25efe4, Func Offset: 0x1d4
	// Func End, Address: 0x25f000, Func Offset: 0x1f0
}

// Process__18zNMEGoalDentDamageFP11en_trantypefPv
// Start address: 0x25f000
int32 zNMEGoalDentDamage::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	zNMEDenToo* npc;
	int32 nextgoal;
	int32 doTran;
	en_vis vis;
	// Line 3352, Address: 0x25f000, Func Offset: 0
	// Line 3357, Address: 0x25f028, Func Offset: 0x28
	// Line 3353, Address: 0x25f02c, Func Offset: 0x2c
	// Line 3357, Address: 0x25f034, Func Offset: 0x34
	// Line 3353, Address: 0x25f038, Func Offset: 0x38
	// Line 3357, Address: 0x25f03c, Func Offset: 0x3c
	// Line 3358, Address: 0x25f048, Func Offset: 0x48
	// Line 3361, Address: 0x25f050, Func Offset: 0x50
	// Line 3364, Address: 0x25f05c, Func Offset: 0x5c
	// Line 3365, Address: 0x25f07c, Func Offset: 0x7c
	// Line 3366, Address: 0x25f088, Func Offset: 0x88
	// Line 3367, Address: 0x25f0bc, Func Offset: 0xbc
	// Line 3368, Address: 0x25f0c4, Func Offset: 0xc4
	// Line 3369, Address: 0x25f0cc, Func Offset: 0xcc
	// Line 3359, Address: 0x25f0d4, Func Offset: 0xd4
	// Line 3366, Address: 0x25f0dc, Func Offset: 0xdc
	// Line 3369, Address: 0x25f0e4, Func Offset: 0xe4
	// Line 3366, Address: 0x25f0f4, Func Offset: 0xf4
	// Line 3369, Address: 0x25f100, Func Offset: 0x100
	// Line 3377, Address: 0x25f110, Func Offset: 0x110
	// Line 3378, Address: 0x25f16c, Func Offset: 0x16c
	// Func End, Address: 0x25f18c, Func Offset: 0x18c
}

// Exit__18zNMEGoalDentDamageFfPv
// Start address: 0x25f190
int32 zNMEGoalDentDamage::Exit()
{
	// Line 3346, Address: 0x25f190, Func Offset: 0
	// Line 3348, Address: 0x25f194, Func Offset: 0x4
	// Line 3346, Address: 0x25f198, Func Offset: 0x8
	// Line 3349, Address: 0x25f1a0, Func Offset: 0x10
	// Func End, Address: 0x25f1a8, Func Offset: 0x18
}

// Enter__18zNMEGoalDentDamageFfPv
// Start address: 0x25f1b0
int32 zNMEGoalDentDamage::Enter()
{
	zNMEDenToo* npc;
	// Line 3332, Address: 0x25f1b0, Func Offset: 0
	// Line 3335, Address: 0x25f1b4, Func Offset: 0x4
	// Line 3332, Address: 0x25f1b8, Func Offset: 0x8
	// Line 3335, Address: 0x25f1d0, Func Offset: 0x20
	// Line 3332, Address: 0x25f1d8, Func Offset: 0x28
	// Line 3335, Address: 0x25f1dc, Func Offset: 0x2c
	// Line 3336, Address: 0x25f1f8, Func Offset: 0x48
	// Line 3338, Address: 0x25f208, Func Offset: 0x58
	// Line 3335, Address: 0x25f23c, Func Offset: 0x8c
	// Line 3338, Address: 0x25f240, Func Offset: 0x90
	// Line 3335, Address: 0x25f250, Func Offset: 0xa0
	// Line 3338, Address: 0x25f260, Func Offset: 0xb0
	// Line 3339, Address: 0x25f2c8, Func Offset: 0x118
	// Func End, Address: 0x25f2e0, Func Offset: 0x130
}

// Process__17zNMEGoalDentTauntFP11en_trantypefPv
// Start address: 0x25f2e0
int32 zNMEGoalDentTaunt::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	zNMEDenToo* npc;
	en_vis vis;
	int32 nextgoal;
	// Line 3279, Address: 0x25f2e0, Func Offset: 0
	// Line 3288, Address: 0x25f2e4, Func Offset: 0x4
	// Line 3279, Address: 0x25f2e8, Func Offset: 0x8
	// Line 3288, Address: 0x25f30c, Func Offset: 0x2c
	// Line 3280, Address: 0x25f310, Func Offset: 0x30
	// Line 3288, Address: 0x25f318, Func Offset: 0x38
	// Line 3280, Address: 0x25f31c, Func Offset: 0x3c
	// Line 3288, Address: 0x25f320, Func Offset: 0x40
	// Line 3289, Address: 0x25f334, Func Offset: 0x54
	// Line 3290, Address: 0x25f340, Func Offset: 0x60
	// Line 3291, Address: 0x25f374, Func Offset: 0x94
	// Line 3293, Address: 0x25f37c, Func Offset: 0x9c
	// Line 3296, Address: 0x25f388, Func Offset: 0xa8
	// Line 3320, Address: 0x25f3cc, Func Offset: 0xec
	// Line 3323, Address: 0x25f4a0, Func Offset: 0x1c0
	// Line 3290, Address: 0x25f500, Func Offset: 0x220
	// Line 3323, Address: 0x25f508, Func Offset: 0x228
	// Line 3290, Address: 0x25f518, Func Offset: 0x238
	// Line 3323, Address: 0x25f524, Func Offset: 0x244
	// Line 3296, Address: 0x25f538, Func Offset: 0x258
	// Line 3323, Address: 0x25f53c, Func Offset: 0x25c
	// Line 3296, Address: 0x25f544, Func Offset: 0x264
	// Line 3323, Address: 0x25f548, Func Offset: 0x268
	// Line 3296, Address: 0x25f54c, Func Offset: 0x26c
	// Line 3323, Address: 0x25f554, Func Offset: 0x274
	// Line 3296, Address: 0x25f574, Func Offset: 0x294
	// Line 3323, Address: 0x25f580, Func Offset: 0x2a0
	// Line 3296, Address: 0x25f584, Func Offset: 0x2a4
	// Line 3323, Address: 0x25f58c, Func Offset: 0x2ac
	// Line 3296, Address: 0x25f594, Func Offset: 0x2b4
	// Line 3323, Address: 0x25f5a4, Func Offset: 0x2c4
	// Line 3315, Address: 0x25f5b8, Func Offset: 0x2d8
	// Line 3307, Address: 0x25f5c4, Func Offset: 0x2e4
	// Line 3309, Address: 0x25f5c8, Func Offset: 0x2e8
	// Line 3323, Address: 0x25f5cc, Func Offset: 0x2ec
	// Line 3309, Address: 0x25f5d0, Func Offset: 0x2f0
	// Line 3308, Address: 0x25f5d4, Func Offset: 0x2f4
	// Line 3309, Address: 0x25f5d8, Func Offset: 0x2f8
	// Line 3308, Address: 0x25f5dc, Func Offset: 0x2fc
	// Line 3323, Address: 0x25f5e0, Func Offset: 0x300
	// Line 3310, Address: 0x25f5f4, Func Offset: 0x314
	// Line 3320, Address: 0x25f5fc, Func Offset: 0x31c
	// Line 3323, Address: 0x25f618, Func Offset: 0x338
	// Line 3320, Address: 0x25f61c, Func Offset: 0x33c
	// Line 3323, Address: 0x25f620, Func Offset: 0x340
	// Line 3320, Address: 0x25f628, Func Offset: 0x348
	// Line 3323, Address: 0x25f630, Func Offset: 0x350
	// Line 3324, Address: 0x25f640, Func Offset: 0x360
	// Func End, Address: 0x25f660, Func Offset: 0x380
}

// Enter__17zNMEGoalDentTauntFfPv
// Start address: 0x25f660
int32 zNMEGoalDentTaunt::Enter()
{
	zNMEDenToo* npc;
	// Line 3268, Address: 0x25f660, Func Offset: 0
	// Line 3271, Address: 0x25f664, Func Offset: 0x4
	// Line 3268, Address: 0x25f668, Func Offset: 0x8
	// Line 3271, Address: 0x25f680, Func Offset: 0x20
	// Line 3268, Address: 0x25f688, Func Offset: 0x28
	// Line 3271, Address: 0x25f68c, Func Offset: 0x2c
	// Line 3273, Address: 0x25f6cc, Func Offset: 0x6c
	// Line 3275, Address: 0x25f6dc, Func Offset: 0x7c
	// Line 3276, Address: 0x25f764, Func Offset: 0x104
	// Func End, Address: 0x25f77c, Func Offset: 0x11c
}

// GoalHandleMail__17zNMEGoalDentEvadeFP6NMEMsg
// Start address: 0x25f780
int32 zNMEGoalDentEvade::GoalHandleMail(NMEMsg* mail)
{
	int32 snarfed;
	zNMEDenToo* npc;
	xPsyche* psy;
	en_plyrpup pup;
	int32 amt_dmg;
	xGoal* goal;
	// Line 3208, Address: 0x25f780, Func Offset: 0
	// Line 3211, Address: 0x25f784, Func Offset: 0x4
	// Line 3208, Address: 0x25f788, Func Offset: 0x8
	// Line 3211, Address: 0x25f798, Func Offset: 0x18
	// Line 3254, Address: 0x25f7a4, Func Offset: 0x24
	// Line 3258, Address: 0x25f7a8, Func Offset: 0x28
	// Line 3235, Address: 0x25f7f0, Func Offset: 0x70
	// Line 3258, Address: 0x25f7f4, Func Offset: 0x74
	// Line 3235, Address: 0x25f7fc, Func Offset: 0x7c
	// Line 3258, Address: 0x25f800, Func Offset: 0x80
	// Line 3235, Address: 0x25f808, Func Offset: 0x88
	// Line 3258, Address: 0x25f80c, Func Offset: 0x8c
	// Line 3235, Address: 0x25f814, Func Offset: 0x94
	// Line 3258, Address: 0x25f834, Func Offset: 0xb4
	// Line 3235, Address: 0x25f83c, Func Offset: 0xbc
	// Line 3258, Address: 0x25f858, Func Offset: 0xd8
	// Line 3235, Address: 0x25f860, Func Offset: 0xe0
	// Line 3258, Address: 0x25f880, Func Offset: 0x100
	// Line 3235, Address: 0x25f888, Func Offset: 0x108
	// Line 3258, Address: 0x25f8a4, Func Offset: 0x124
	// Line 3235, Address: 0x25f8ac, Func Offset: 0x12c
	// Line 3258, Address: 0x25f8cc, Func Offset: 0x14c
	// Line 3235, Address: 0x25f8d4, Func Offset: 0x154
	// Line 3258, Address: 0x25f8f0, Func Offset: 0x170
	// Line 3237, Address: 0x25f908, Func Offset: 0x188
	// Line 3258, Address: 0x25f90c, Func Offset: 0x18c
	// Line 3241, Address: 0x25f914, Func Offset: 0x194
	// Line 3258, Address: 0x25f918, Func Offset: 0x198
	// Line 3244, Address: 0x25f920, Func Offset: 0x1a0
	// Line 3246, Address: 0x25f924, Func Offset: 0x1a4
	// Line 3258, Address: 0x25f928, Func Offset: 0x1a8
	// Line 3246, Address: 0x25f92c, Func Offset: 0x1ac
	// Line 3258, Address: 0x25f930, Func Offset: 0x1b0
	// Line 3247, Address: 0x25f940, Func Offset: 0x1c0
	// Line 3258, Address: 0x25f944, Func Offset: 0x1c4
	// Line 3247, Address: 0x25f948, Func Offset: 0x1c8
	// Line 3258, Address: 0x25f94c, Func Offset: 0x1cc
	// Line 3247, Address: 0x25f950, Func Offset: 0x1d0
	// Line 3258, Address: 0x25f954, Func Offset: 0x1d4
	// Line 3250, Address: 0x25f968, Func Offset: 0x1e8
	// Line 3259, Address: 0x25f978, Func Offset: 0x1f8
	// Func End, Address: 0x25f990, Func Offset: 0x210
}

// RibbonLoop__17zNMEGoalDentEvadeFP10zNMEDenToof
// Start address: 0x25f990
void zNMEGoalDentEvade::RibbonLoop(zNMEDenToo* npc)
{
	xFXRibbon* rib;
	RibData* ribhelp;
	float32 scale;
	float32 alpha;
	xVec3 pos_emit;
	xVec3 dir_up;
	// Line 3168, Address: 0x25f990, Func Offset: 0
	// Line 3169, Address: 0x25f9b0, Func Offset: 0x20
	// Line 3172, Address: 0x25f9bc, Func Offset: 0x2c
	// Line 3173, Address: 0x25f9c8, Func Offset: 0x38
	// Line 3174, Address: 0x25f9d4, Func Offset: 0x44
	// Line 3184, Address: 0x25f9dc, Func Offset: 0x4c
	// Line 3178, Address: 0x25f9e0, Func Offset: 0x50
	// Line 3184, Address: 0x25f9e4, Func Offset: 0x54
	// Line 3176, Address: 0x25f9e8, Func Offset: 0x58
	// Line 3184, Address: 0x25f9ec, Func Offset: 0x5c
	// Line 3185, Address: 0x25f9f4, Func Offset: 0x64
	// Line 3188, Address: 0x25fa84, Func Offset: 0xf4
	// Line 3189, Address: 0x25fa8c, Func Offset: 0xfc
	// Line 3193, Address: 0x25fa90, Func Offset: 0x100
	// Line 3194, Address: 0x25faa4, Func Offset: 0x114
	// Line 3195, Address: 0x25fad8, Func Offset: 0x148
	// Line 3197, Address: 0x25fadc, Func Offset: 0x14c
	// Line 3194, Address: 0x25faec, Func Offset: 0x15c
	// Line 3195, Address: 0x25faf0, Func Offset: 0x160
	// Line 3197, Address: 0x25faf4, Func Offset: 0x164
	// Line 3198, Address: 0x25fb58, Func Offset: 0x1c8
	// Line 3199, Address: 0x25fb9c, Func Offset: 0x20c
	// Line 3202, Address: 0x25fbc0, Func Offset: 0x230
	// Line 3204, Address: 0x25fbdc, Func Offset: 0x24c
	// Line 3185, Address: 0x25fbf4, Func Offset: 0x264
	// Line 3204, Address: 0x25fc08, Func Offset: 0x278
	// Line 3185, Address: 0x25fc0c, Func Offset: 0x27c
	// Line 3204, Address: 0x25fc10, Func Offset: 0x280
	// Line 3185, Address: 0x25fc14, Func Offset: 0x284
	// Line 3204, Address: 0x25fc20, Func Offset: 0x290
	// Line 3205, Address: 0x25fc3c, Func Offset: 0x2ac
	// Func End, Address: 0x25fc60, Func Offset: 0x2d0
}

// PathParabola__17zNMEGoalDentEvadeFP10zNMEDenToof
// Start address: 0x25fc60
int32 zNMEGoalDentEvade::PathParabola(zNMEDenToo* npc)
{
	int32 arrived;
	float32 tym_inLeap;
	xVec3 pos;
	xVec3 vel;
	xMat3x3 mat_rot;
	float32 mag;
	xVec3 dir;
	// Line 3080, Address: 0x25fc60, Func Offset: 0
	// Line 3090, Address: 0x25fc64, Func Offset: 0x4
	// Line 3080, Address: 0x25fc68, Func Offset: 0x8
	// Line 3090, Address: 0x25fc6c, Func Offset: 0xc
	// Line 3080, Address: 0x25fc70, Func Offset: 0x10
	// Line 3081, Address: 0x25fc7c, Func Offset: 0x1c
	// Line 3090, Address: 0x25fc80, Func Offset: 0x20
	// Line 3091, Address: 0x25fc9c, Func Offset: 0x3c
	// Line 3095, Address: 0x25fca0, Func Offset: 0x40
	// Line 3096, Address: 0x25fcd4, Func Offset: 0x74
	// Line 3103, Address: 0x25fd2c, Func Offset: 0xcc
	// Line 3107, Address: 0x25fd30, Func Offset: 0xd0
	// Line 3103, Address: 0x25fd34, Func Offset: 0xd4
	// Line 3104, Address: 0x25fd44, Func Offset: 0xe4
	// Line 3110, Address: 0x25fd48, Func Offset: 0xe8
	// Line 3103, Address: 0x25fd4c, Func Offset: 0xec
	// Line 3107, Address: 0x25fd54, Func Offset: 0xf4
	// Line 3103, Address: 0x25fd58, Func Offset: 0xf8
	// Line 3104, Address: 0x25fd78, Func Offset: 0x118
	// Line 3103, Address: 0x25fd7c, Func Offset: 0x11c
	// Line 3107, Address: 0x25fd90, Func Offset: 0x130
	// Line 3103, Address: 0x25fd98, Func Offset: 0x138
	// Line 3107, Address: 0x25fda4, Func Offset: 0x144
	// Line 3103, Address: 0x25fda8, Func Offset: 0x148
	// Line 3107, Address: 0x25fdac, Func Offset: 0x14c
	// Line 3103, Address: 0x25fdb4, Func Offset: 0x154
	// Line 3107, Address: 0x25fdb8, Func Offset: 0x158
	// Line 3110, Address: 0x25fdc8, Func Offset: 0x168
	// Line 3114, Address: 0x25fdd8, Func Offset: 0x178
	// Line 3110, Address: 0x25fde0, Func Offset: 0x180
	// Line 3113, Address: 0x25fdf0, Func Offset: 0x190
	// Line 3114, Address: 0x25fdf4, Func Offset: 0x194
	// Line 3112, Address: 0x25fdf8, Func Offset: 0x198
	// Line 3113, Address: 0x25fdfc, Func Offset: 0x19c
	// Line 3114, Address: 0x25fe04, Func Offset: 0x1a4
	// Line 3116, Address: 0x25fe10, Func Offset: 0x1b0
	// Line 3117, Address: 0x25fe40, Func Offset: 0x1e0
	// Line 3116, Address: 0x25fe44, Func Offset: 0x1e4
	// Line 3117, Address: 0x25fe9c, Func Offset: 0x23c
	// Line 3118, Address: 0x25fea4, Func Offset: 0x244
	// Line 3122, Address: 0x25fec8, Func Offset: 0x268
	// Line 3123, Address: 0x25fecc, Func Offset: 0x26c
	// Func End, Address: 0x25fee0, Func Offset: 0x280
}

// UpdateAnim__17zNMEGoalDentEvadeFP10zNMEDenToof
// Start address: 0x25fee0
int32 zNMEGoalDentEvade::UpdateAnim(zNMEDenToo* npc, float32 dt)
{
	float32 tym_animPlusTime;
	int32 arrived;
	// Line 3037, Address: 0x25fee0, Func Offset: 0
	// Line 3039, Address: 0x25ff08, Func Offset: 0x28
	// Line 3044, Address: 0x25ff2c, Func Offset: 0x4c
	// Line 3040, Address: 0x25ff30, Func Offset: 0x50
	// Line 3044, Address: 0x25ff34, Func Offset: 0x54
	// Line 3046, Address: 0x25ff5c, Func Offset: 0x7c
	// Line 3047, Address: 0x25ff68, Func Offset: 0x88
	// Line 3048, Address: 0x25ff98, Func Offset: 0xb8
	// Line 3050, Address: 0x25ff9c, Func Offset: 0xbc
	// Line 3053, Address: 0x25ffa4, Func Offset: 0xc4
	// Line 3055, Address: 0x25ffc4, Func Offset: 0xe4
	// Line 3056, Address: 0x25fff4, Func Offset: 0x114
	// Line 3058, Address: 0x25fff8, Func Offset: 0x118
	// Line 3060, Address: 0x260000, Func Offset: 0x120
	// Line 3061, Address: 0x26000c, Func Offset: 0x12c
	// Line 3065, Address: 0x260010, Func Offset: 0x130
	// Line 3039, Address: 0x260034, Func Offset: 0x154
	// Line 3047, Address: 0x26003c, Func Offset: 0x15c
	// Line 3065, Address: 0x260040, Func Offset: 0x160
	// Line 3047, Address: 0x260050, Func Offset: 0x170
	// Line 3055, Address: 0x260060, Func Offset: 0x180
	// Line 3065, Address: 0x260064, Func Offset: 0x184
	// Line 3055, Address: 0x260074, Func Offset: 0x194
	// Line 3066, Address: 0x260084, Func Offset: 0x1a4
	// Func End, Address: 0x26009c, Func Offset: 0x1bc
}

// SplashLanding__17zNMEGoalDentEvadeFP10zNMEDenToo
// Start address: 0x2600a0
void zNMEGoalDentEvade::SplashLanding(zNMEDenToo* npc)
{
	xVec3 pos;
	xVec3 dir_drift;
	float32 spd_drift;
	xVec3 vel_drift;
	// Line 2984, Address: 0x2600a0, Func Offset: 0
	// Line 2985, Address: 0x2600ac, Func Offset: 0xc
	// Line 2993, Address: 0x2600b4, Func Offset: 0x14
	// Line 2994, Address: 0x2600d0, Func Offset: 0x30
	// Line 2993, Address: 0x2600d4, Func Offset: 0x34
	// Line 2994, Address: 0x2600d8, Func Offset: 0x38
	// Line 2993, Address: 0x2600dc, Func Offset: 0x3c
	// Line 2994, Address: 0x2600e0, Func Offset: 0x40
	// Line 2993, Address: 0x2600e4, Func Offset: 0x44
	// Line 2994, Address: 0x2600e8, Func Offset: 0x48
	// Line 2993, Address: 0x2600ec, Func Offset: 0x4c
	// Line 2996, Address: 0x2600fc, Func Offset: 0x5c
	// Line 2993, Address: 0x260100, Func Offset: 0x60
	// Line 2996, Address: 0x260104, Func Offset: 0x64
	// Line 2993, Address: 0x260108, Func Offset: 0x68
	// Line 2996, Address: 0x260114, Func Offset: 0x74
	// Line 2993, Address: 0x260118, Func Offset: 0x78
	// Line 2994, Address: 0x26011c, Func Offset: 0x7c
	// Line 2993, Address: 0x260120, Func Offset: 0x80
	// Line 2994, Address: 0x260124, Func Offset: 0x84
	// Line 2993, Address: 0x260128, Func Offset: 0x88
	// Line 2994, Address: 0x260144, Func Offset: 0xa4
	// Line 2995, Address: 0x2601ac, Func Offset: 0x10c
	// Line 2996, Address: 0x2601c8, Func Offset: 0x128
	// Line 2997, Address: 0x2601d4, Func Offset: 0x134
	// Line 3001, Address: 0x260218, Func Offset: 0x178
	// Line 3002, Address: 0x26023c, Func Offset: 0x19c
	// Line 3004, Address: 0x260264, Func Offset: 0x1c4
	// Line 3005, Address: 0x26039c, Func Offset: 0x2fc
	// Line 3007, Address: 0x2603b0, Func Offset: 0x310
	// Line 3005, Address: 0x2603b4, Func Offset: 0x314
	// Line 3007, Address: 0x2603bc, Func Offset: 0x31c
	// Line 3004, Address: 0x2603c0, Func Offset: 0x320
	// Line 3005, Address: 0x2603c4, Func Offset: 0x324
	// Line 3004, Address: 0x2603c8, Func Offset: 0x328
	// Line 3005, Address: 0x2603cc, Func Offset: 0x32c
	// Line 3004, Address: 0x2603d4, Func Offset: 0x334
	// Line 3005, Address: 0x2603d8, Func Offset: 0x338
	// Line 3007, Address: 0x26042c, Func Offset: 0x38c
	// Line 3005, Address: 0x260430, Func Offset: 0x390
	// Line 3007, Address: 0x260434, Func Offset: 0x394
	// Line 3009, Address: 0x260440, Func Offset: 0x3a0
	// Line 3001, Address: 0x260494, Func Offset: 0x3f4
	// Line 3009, Address: 0x26049c, Func Offset: 0x3fc
	// Line 3002, Address: 0x2604b8, Func Offset: 0x418
	// Line 3010, Address: 0x2604c0, Func Offset: 0x420
	// Func End, Address: 0x2604cc, Func Offset: 0x42c
}

// Process__17zNMEGoalDentEvadeFP11en_trantypefPv
// Start address: 0x2604d0
int32 zNMEGoalDentEvade::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	zNMEDenToo* npc;
	int32 animsComplete;
	int32 arrivedAtDest;
	int32 itHasBegun;
	xVec3 pos;
	int32 nextgoal;
	// Line 2906, Address: 0x2604d0, Func Offset: 0
	// Line 2907, Address: 0x260504, Func Offset: 0x34
	// Line 2914, Address: 0x260510, Func Offset: 0x40
	// Line 2917, Address: 0x260518, Func Offset: 0x48
	// Line 2914, Address: 0x26051c, Func Offset: 0x4c
	// Line 2916, Address: 0x260520, Func Offset: 0x50
	// Line 2919, Address: 0x260524, Func Offset: 0x54
	// Line 2924, Address: 0x260530, Func Offset: 0x60
	// Line 2937, Address: 0x260538, Func Offset: 0x68
	// Line 2939, Address: 0x260540, Func Offset: 0x70
	// Line 2940, Address: 0x260548, Func Offset: 0x78
	// Line 2941, Address: 0x260560, Func Offset: 0x90
	// Line 2940, Address: 0x260564, Func Offset: 0x94
	// Line 2941, Address: 0x260568, Func Offset: 0x98
	// Line 2945, Address: 0x260674, Func Offset: 0x1a4
	// Line 2946, Address: 0x260684, Func Offset: 0x1b4
	// Line 2949, Address: 0x2606b0, Func Offset: 0x1e0
	// Line 2950, Address: 0x2606bc, Func Offset: 0x1ec
	// Line 2952, Address: 0x2606c4, Func Offset: 0x1f4
	// Line 2953, Address: 0x2606d0, Func Offset: 0x200
	// Line 2956, Address: 0x2606d8, Func Offset: 0x208
	// Line 2960, Address: 0x2606e8, Func Offset: 0x218
	// Line 2958, Address: 0x2606ec, Func Offset: 0x21c
	// Line 2960, Address: 0x2606f0, Func Offset: 0x220
	// Line 2959, Address: 0x2606f4, Func Offset: 0x224
	// Line 2958, Address: 0x2606f8, Func Offset: 0x228
	// Line 2959, Address: 0x2606fc, Func Offset: 0x22c
	// Line 2960, Address: 0x260700, Func Offset: 0x230
	// Line 2961, Address: 0x260714, Func Offset: 0x244
	// Line 2968, Address: 0x26071c, Func Offset: 0x24c
	// Line 2977, Address: 0x26072c, Func Offset: 0x25c
	// Line 2978, Address: 0x260740, Func Offset: 0x270
	// Line 2980, Address: 0x260748, Func Offset: 0x278
	// Line 2921, Address: 0x2607b0, Func Offset: 0x2e0
	// Line 2980, Address: 0x2607b8, Func Offset: 0x2e8
	// Line 2922, Address: 0x2607c4, Func Offset: 0x2f4
	// Line 2980, Address: 0x2607d8, Func Offset: 0x308
	// Line 2922, Address: 0x2607e0, Func Offset: 0x310
	// Line 2980, Address: 0x2607ec, Func Offset: 0x31c
	// Line 2923, Address: 0x2607f0, Func Offset: 0x320
	// Line 2980, Address: 0x2607f8, Func Offset: 0x328
	// Line 2921, Address: 0x2607fc, Func Offset: 0x32c
	// Line 2980, Address: 0x260814, Func Offset: 0x344
	// Line 2927, Address: 0x26082c, Func Offset: 0x35c
	// Line 2980, Address: 0x260834, Func Offset: 0x364
	// Line 2927, Address: 0x260838, Func Offset: 0x368
	// Line 2980, Address: 0x26083c, Func Offset: 0x36c
	// Line 2927, Address: 0x260840, Func Offset: 0x370
	// Line 2980, Address: 0x260844, Func Offset: 0x374
	// Line 2927, Address: 0x260848, Func Offset: 0x378
	// Line 2980, Address: 0x26084c, Func Offset: 0x37c
	// Line 2927, Address: 0x26087c, Func Offset: 0x3ac
	// Line 2980, Address: 0x260880, Func Offset: 0x3b0
	// Line 2927, Address: 0x260884, Func Offset: 0x3b4
	// Line 2980, Address: 0x26088c, Func Offset: 0x3bc
	// Line 2927, Address: 0x260890, Func Offset: 0x3c0
	// Line 2928, Address: 0x26089c, Func Offset: 0x3cc
	// Line 2980, Address: 0x2608a0, Func Offset: 0x3d0
	// Line 2928, Address: 0x2608a4, Func Offset: 0x3d4
	// Line 2980, Address: 0x2608a8, Func Offset: 0x3d8
	// Line 2927, Address: 0x2608ac, Func Offset: 0x3dc
	// Line 2980, Address: 0x2608b0, Func Offset: 0x3e0
	// Line 2928, Address: 0x2608b8, Func Offset: 0x3e8
	// Line 2927, Address: 0x2608bc, Func Offset: 0x3ec
	// Line 2980, Address: 0x2608c0, Func Offset: 0x3f0
	// Line 2927, Address: 0x2608cc, Func Offset: 0x3fc
	// Line 2980, Address: 0x2608d0, Func Offset: 0x400
	// Line 2927, Address: 0x2608d4, Func Offset: 0x404
	// Line 2980, Address: 0x2608d8, Func Offset: 0x408
	// Line 2928, Address: 0x2608fc, Func Offset: 0x42c
	// Line 2980, Address: 0x260900, Func Offset: 0x430
	// Line 2928, Address: 0x260914, Func Offset: 0x444
	// Line 2980, Address: 0x26091c, Func Offset: 0x44c
	// Line 2928, Address: 0x260950, Func Offset: 0x480
	// Line 2980, Address: 0x26095c, Func Offset: 0x48c
	// Line 2928, Address: 0x260968, Func Offset: 0x498
	// Line 2980, Address: 0x26096c, Func Offset: 0x49c
	// Line 2932, Address: 0x260978, Func Offset: 0x4a8
	// Line 2980, Address: 0x260984, Func Offset: 0x4b4
	// Line 2932, Address: 0x260990, Func Offset: 0x4c0
	// Line 2980, Address: 0x260994, Func Offset: 0x4c4
	// Line 2933, Address: 0x2609a8, Func Offset: 0x4d8
	// Line 2980, Address: 0x2609ac, Func Offset: 0x4dc
	// Line 2933, Address: 0x2609b4, Func Offset: 0x4e4
	// Line 2936, Address: 0x2609b8, Func Offset: 0x4e8
	// Line 2928, Address: 0x2609c0, Func Offset: 0x4f0
	// Line 2980, Address: 0x2609dc, Func Offset: 0x50c
	// Line 2928, Address: 0x2609e0, Func Offset: 0x510
	// Line 2980, Address: 0x2609e4, Func Offset: 0x514
	// Line 2928, Address: 0x2609ec, Func Offset: 0x51c
	// Line 2980, Address: 0x2609f8, Func Offset: 0x528
	// Line 2933, Address: 0x260a0c, Func Offset: 0x53c
	// Line 2980, Address: 0x260a24, Func Offset: 0x554
	// Line 2938, Address: 0x260a40, Func Offset: 0x570
	// Line 2980, Address: 0x260a48, Func Offset: 0x578
	// Line 2938, Address: 0x260a50, Func Offset: 0x580
	// Line 2980, Address: 0x260a58, Func Offset: 0x588
	// Line 2938, Address: 0x260a5c, Func Offset: 0x58c
	// Line 2980, Address: 0x260a70, Func Offset: 0x5a0
	// Line 2940, Address: 0x260a88, Func Offset: 0x5b8
	// Line 2980, Address: 0x260a9c, Func Offset: 0x5cc
	// Line 2970, Address: 0x260ac0, Func Offset: 0x5f0
	// Line 2980, Address: 0x260ac4, Func Offset: 0x5f4
	// Line 2981, Address: 0x260ad4, Func Offset: 0x604
	// Func End, Address: 0x260b00, Func Offset: 0x630
}

// Exit__17zNMEGoalDentEvadeFfPv
// Start address: 0x260b00
int32 zNMEGoalDentEvade::Exit()
{
	zNMEDenToo* npc;
	NMECfgDenToo* cfg;
	// Line 2877, Address: 0x260b00, Func Offset: 0
	// Line 2878, Address: 0x260b10, Func Offset: 0x10
	// Line 2880, Address: 0x260b14, Func Offset: 0x14
	// Line 2878, Address: 0x260b18, Func Offset: 0x18
	// Line 2880, Address: 0x260b1c, Func Offset: 0x1c
	// Line 2882, Address: 0x260b28, Func Offset: 0x28
	// Line 2883, Address: 0x260b30, Func Offset: 0x30
	// Line 2884, Address: 0x260b60, Func Offset: 0x60
	// Line 2886, Address: 0x260b64, Func Offset: 0x64
	// Line 2887, Address: 0x260bd0, Func Offset: 0xd0
	// Line 2888, Address: 0x260bd4, Func Offset: 0xd4
	// Line 2889, Address: 0x260bdc, Func Offset: 0xdc
	// Line 2892, Address: 0x260be4, Func Offset: 0xe4
	// Line 2894, Address: 0x260bf0, Func Offset: 0xf0
	// Line 2897, Address: 0x260c04, Func Offset: 0x104
	// Line 2899, Address: 0x260c10, Func Offset: 0x110
	// Line 2902, Address: 0x260c24, Func Offset: 0x124
	// Line 2903, Address: 0x260c48, Func Offset: 0x148
	// Func End, Address: 0x260c5c, Func Offset: 0x15c
}

// Enter__17zNMEGoalDentEvadeFfPv
// Start address: 0x260c60
int32 zNMEGoalDentEvade::Enter()
{
	zNMEDenToo* npc;
	// Line 2837, Address: 0x260c60, Func Offset: 0
	// Line 2838, Address: 0x260c7c, Func Offset: 0x1c
	// Line 2840, Address: 0x260c84, Func Offset: 0x24
	// Line 2841, Address: 0x260c90, Func Offset: 0x30
	// Line 2844, Address: 0x260cc0, Func Offset: 0x60
	// Line 2848, Address: 0x260cc4, Func Offset: 0x64
	// Line 2845, Address: 0x260cc8, Func Offset: 0x68
	// Line 2848, Address: 0x260ccc, Func Offset: 0x6c
	// Line 2847, Address: 0x260cd0, Func Offset: 0x70
	// Line 2848, Address: 0x260cd4, Func Offset: 0x74
	// Line 2853, Address: 0x260cfc, Func Offset: 0x9c
	// Line 2854, Address: 0x260d74, Func Offset: 0x114
	// Line 2855, Address: 0x260d7c, Func Offset: 0x11c
	// Line 2857, Address: 0x260e88, Func Offset: 0x228
	// Line 2860, Address: 0x260f5c, Func Offset: 0x2fc
	// Line 2862, Address: 0x260fc4, Func Offset: 0x364
	// Line 2865, Address: 0x260fe8, Func Offset: 0x388
	// Line 2868, Address: 0x260ff0, Func Offset: 0x390
	// Line 2873, Address: 0x261010, Func Offset: 0x3b0
	// Line 2848, Address: 0x261044, Func Offset: 0x3e4
	// Line 2873, Address: 0x261048, Func Offset: 0x3e8
	// Line 2848, Address: 0x261058, Func Offset: 0x3f8
	// Line 2873, Address: 0x261068, Func Offset: 0x408
	// Line 2857, Address: 0x261078, Func Offset: 0x418
	// Line 2873, Address: 0x26108c, Func Offset: 0x42c
	// Line 2857, Address: 0x261090, Func Offset: 0x430
	// Line 2873, Address: 0x261094, Func Offset: 0x434
	// Line 2857, Address: 0x261098, Func Offset: 0x438
	// Line 2860, Address: 0x2610a4, Func Offset: 0x444
	// Line 2873, Address: 0x2610ac, Func Offset: 0x44c
	// Line 2874, Address: 0x261100, Func Offset: 0x4a0
	// Func End, Address: 0x261120, Func Offset: 0x4c0
}

// ThrowKnife_Toes__18zNMEGoalDentAttackFP10zNMEDenTooi
// Start address: 0x261120
int32 zNMEGoalDentAttack::ThrowKnife_Toes(zNMEDenToo* npc, int32 idx)
{
	NMECfgDenToo* cfg;
	zNMEHazard* haz;
	int32 rc;
	xVec3 pos_launch;
	xVec3 dir_aim;
	float32 dst_aim;
	float32 dst_near;
	float32 hyt_elevate;
	float32 dst_thisThrow;
	xVec3 pos_tgt;
	// Line 2662, Address: 0x261120, Func Offset: 0
	// Line 2663, Address: 0x261148, Func Offset: 0x28
	// Line 2667, Address: 0x26114c, Func Offset: 0x2c
	// Line 2668, Address: 0x261158, Func Offset: 0x38
	// Line 2669, Address: 0x261160, Func Offset: 0x40
	// Line 2671, Address: 0x261168, Func Offset: 0x48
	// Line 2672, Address: 0x2611c4, Func Offset: 0xa4
	// Line 2673, Address: 0x2611cc, Func Offset: 0xac
	// Line 2675, Address: 0x2611d4, Func Offset: 0xb4
	// Line 2676, Address: 0x261248, Func Offset: 0x128
	// Line 2686, Address: 0x261254, Func Offset: 0x134
	// Line 2676, Address: 0x261258, Func Offset: 0x138
	// Line 2686, Address: 0x26125c, Func Offset: 0x13c
	// Line 2685, Address: 0x261268, Func Offset: 0x148
	// Line 2686, Address: 0x26126c, Func Offset: 0x14c
	// Line 2676, Address: 0x26127c, Func Offset: 0x15c
	// Line 2685, Address: 0x261280, Func Offset: 0x160
	// Line 2686, Address: 0x26128c, Func Offset: 0x16c
	// Line 2685, Address: 0x261290, Func Offset: 0x170
	// Line 2686, Address: 0x261298, Func Offset: 0x178
	// Line 2687, Address: 0x2612b4, Func Offset: 0x194
	// Line 2688, Address: 0x2612fc, Func Offset: 0x1dc
	// Line 2698, Address: 0x261300, Func Offset: 0x1e0
	// Line 2701, Address: 0x261308, Func Offset: 0x1e8
	// Line 2688, Address: 0x26130c, Func Offset: 0x1ec
	// Line 2698, Address: 0x261310, Func Offset: 0x1f0
	// Line 2688, Address: 0x261314, Func Offset: 0x1f4
	// Line 2698, Address: 0x261318, Func Offset: 0x1f8
	// Line 2688, Address: 0x26131c, Func Offset: 0x1fc
	// Line 2698, Address: 0x261320, Func Offset: 0x200
	// Line 2688, Address: 0x26132c, Func Offset: 0x20c
	// Line 2698, Address: 0x261330, Func Offset: 0x210
	// Line 2701, Address: 0x26133c, Func Offset: 0x21c
	// Line 2698, Address: 0x261340, Func Offset: 0x220
	// Line 2688, Address: 0x261344, Func Offset: 0x224
	// Line 2698, Address: 0x261360, Func Offset: 0x240
	// Line 2688, Address: 0x261370, Func Offset: 0x250
	// Line 2698, Address: 0x261374, Func Offset: 0x254
	// Line 2688, Address: 0x261378, Func Offset: 0x258
	// Line 2698, Address: 0x26137c, Func Offset: 0x25c
	// Line 2700, Address: 0x2613ac, Func Offset: 0x28c
	// Line 2698, Address: 0x2613b0, Func Offset: 0x290
	// Line 2700, Address: 0x2613b8, Func Offset: 0x298
	// Line 2701, Address: 0x2613d0, Func Offset: 0x2b0
	// Line 2702, Address: 0x2613dc, Func Offset: 0x2bc
	// Line 2703, Address: 0x2613e0, Func Offset: 0x2c0
	// Line 2702, Address: 0x2613e4, Func Offset: 0x2c4
	// Line 2703, Address: 0x2613ec, Func Offset: 0x2cc
	// Line 2702, Address: 0x2613f0, Func Offset: 0x2d0
	// Line 2704, Address: 0x2613f8, Func Offset: 0x2d8
	// Line 2706, Address: 0x261400, Func Offset: 0x2e0
	// Line 2715, Address: 0x261428, Func Offset: 0x308
	// Line 2722, Address: 0x261434, Func Offset: 0x314
	// Line 2728, Address: 0x261448, Func Offset: 0x328
	// Line 2722, Address: 0x26144c, Func Offset: 0x32c
	// Line 2728, Address: 0x261464, Func Offset: 0x344
	// Line 2722, Address: 0x261468, Func Offset: 0x348
	// Line 2728, Address: 0x26147c, Func Offset: 0x35c
	// Line 2737, Address: 0x261494, Func Offset: 0x374
	// Line 2738, Address: 0x2614ac, Func Offset: 0x38c
	// Line 2737, Address: 0x2614b0, Func Offset: 0x390
	// Line 2745, Address: 0x2614b4, Func Offset: 0x394
	// Line 2737, Address: 0x2614c0, Func Offset: 0x3a0
	// Line 2738, Address: 0x2614d4, Func Offset: 0x3b4
	// Line 2737, Address: 0x2614e0, Func Offset: 0x3c0
	// Line 2738, Address: 0x2614e4, Func Offset: 0x3c4
	// Line 2737, Address: 0x2614e8, Func Offset: 0x3c8
	// Line 2738, Address: 0x2614f0, Func Offset: 0x3d0
	// Line 2737, Address: 0x2614f8, Func Offset: 0x3d8
	// Line 2738, Address: 0x2614fc, Func Offset: 0x3dc
	// Line 2737, Address: 0x261500, Func Offset: 0x3e0
	// Line 2738, Address: 0x261508, Func Offset: 0x3e8
	// Line 2737, Address: 0x26150c, Func Offset: 0x3ec
	// Line 2738, Address: 0x261518, Func Offset: 0x3f8
	// Line 2737, Address: 0x26151c, Func Offset: 0x3fc
	// Line 2738, Address: 0x261524, Func Offset: 0x404
	// Line 2737, Address: 0x261528, Func Offset: 0x408
	// Line 2738, Address: 0x26152c, Func Offset: 0x40c
	// Line 2737, Address: 0x261538, Func Offset: 0x418
	// Line 2738, Address: 0x261540, Func Offset: 0x420
	// Line 2743, Address: 0x261544, Func Offset: 0x424
	// Line 2737, Address: 0x261548, Func Offset: 0x428
	// Line 2738, Address: 0x26154c, Func Offset: 0x42c
	// Line 2737, Address: 0x261550, Func Offset: 0x430
	// Line 2738, Address: 0x261558, Func Offset: 0x438
	// Line 2737, Address: 0x261560, Func Offset: 0x440
	// Line 2738, Address: 0x261564, Func Offset: 0x444
	// Line 2743, Address: 0x261570, Func Offset: 0x450
	// Line 2738, Address: 0x261578, Func Offset: 0x458
	// Line 2743, Address: 0x26157c, Func Offset: 0x45c
	// Line 2745, Address: 0x261580, Func Offset: 0x460
	// Line 2747, Address: 0x2615d8, Func Offset: 0x4b8
	// Line 2745, Address: 0x2615dc, Func Offset: 0x4bc
	// Line 2748, Address: 0x2615e4, Func Offset: 0x4c4
	// Func End, Address: 0x261608, Func Offset: 0x4e8
}

// ThrowUpdate__18zNMEGoalDentAttackFP10zNMEDenToo
// Start address: 0x261610
void zNMEGoalDentAttack::ThrowUpdate(zNMEDenToo* npc)
{
	int32 num_knives;
	int32 didThrow;
	// Line 2515, Address: 0x261610, Func Offset: 0
	// Line 2517, Address: 0x261624, Func Offset: 0x14
	// Line 2521, Address: 0x261630, Func Offset: 0x20
	// Line 2522, Address: 0x261634, Func Offset: 0x24
	// Line 2521, Address: 0x261640, Func Offset: 0x30
	// Line 2522, Address: 0x26164c, Func Offset: 0x3c
	// Line 2524, Address: 0x261658, Func Offset: 0x48
	// Line 2525, Address: 0x261670, Func Offset: 0x60
	// Line 2528, Address: 0x261678, Func Offset: 0x68
	// Line 2546, Address: 0x261680, Func Offset: 0x70
	// Line 2553, Address: 0x261694, Func Offset: 0x84
	// Line 2556, Address: 0x26169c, Func Offset: 0x8c
	// Line 2557, Address: 0x2616b4, Func Offset: 0xa4
	// Func End, Address: 0x2616c8, Func Offset: 0xb8
}

// NumKnivesToThrow__18zNMEGoalDentAttackFP10zNMEDenToo
// Start address: 0x2616d0
int32 zNMEGoalDentAttack::NumKnivesToThrow(zNMEDenToo* npc)
{
	NMECfgDenToo* cfg;
	// Line 2485, Address: 0x2616d0, Func Offset: 0
	// Line 2487, Address: 0x2616d4, Func Offset: 0x4
	// Line 2512, Address: 0x2616e8, Func Offset: 0x18
	// Func End, Address: 0x2616f0, Func Offset: 0x20
}

// Process__18zNMEGoalDentAttackFP11en_trantypefPv
// Start address: 0x2616f0
int32 zNMEGoalDentAttack::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	zNMEDenToo* npc;
	en_vis vis;
	zNMEDenToo* npc;
	xVec3 pos_launch;
	int32 i;
	// Line 2413, Address: 0x2616f0, Func Offset: 0
	// Line 2428, Address: 0x26171c, Func Offset: 0x2c
	// Line 2430, Address: 0x261730, Func Offset: 0x40
	// Line 2431, Address: 0x261734, Func Offset: 0x44
	// Line 2434, Address: 0x261760, Func Offset: 0x70
	// Line 2437, Address: 0x261788, Func Offset: 0x98
	// Line 2442, Address: 0x261794, Func Offset: 0xa4
	// Line 2443, Address: 0x2617b4, Func Offset: 0xc4
	// Line 2444, Address: 0x2617c0, Func Offset: 0xd0
	// Line 2445, Address: 0x26181c, Func Offset: 0x12c
	// Line 2447, Address: 0x261824, Func Offset: 0x134
	// Line 2472, Address: 0x261830, Func Offset: 0x140
	// Line 2473, Address: 0x26183c, Func Offset: 0x14c
	// Line 2478, Address: 0x26184c, Func Offset: 0x15c
	// Line 2479, Address: 0x2618a8, Func Offset: 0x1b8
	// Func End, Address: 0x2618cc, Func Offset: 0x1dc
}

// Enter__18zNMEGoalDentAttackFfPv
// Start address: 0x2618d0
int32 zNMEGoalDentAttack::Enter()
{
	zNMEDenToo* npc;
	// Line 2391, Address: 0x2618d0, Func Offset: 0
	// Line 2392, Address: 0x2618e4, Func Offset: 0x14
	// Line 2395, Address: 0x2618ec, Func Offset: 0x1c
	// Line 2396, Address: 0x2618f8, Func Offset: 0x28
	// Line 2401, Address: 0x261904, Func Offset: 0x34
	// Line 2402, Address: 0x261908, Func Offset: 0x38
	// Line 2401, Address: 0x26190c, Func Offset: 0x3c
	// Line 2402, Address: 0x261918, Func Offset: 0x48
	// Line 2407, Address: 0x261924, Func Offset: 0x54
	// Line 2405, Address: 0x261928, Func Offset: 0x58
	// Line 2407, Address: 0x26192c, Func Offset: 0x5c
	// Line 2405, Address: 0x261930, Func Offset: 0x60
	// Line 2407, Address: 0x26194c, Func Offset: 0x7c
	// Line 2409, Address: 0x261974, Func Offset: 0xa4
	// Line 2397, Address: 0x2619a8, Func Offset: 0xd8
	// Line 2407, Address: 0x2619b4, Func Offset: 0xe4
	// Line 2409, Address: 0x2619b8, Func Offset: 0xe8
	// Line 2407, Address: 0x2619c8, Func Offset: 0xf8
	// Line 2409, Address: 0x2619d8, Func Offset: 0x108
	// Line 2410, Address: 0x261a2c, Func Offset: 0x15c
	// Func End, Address: 0x261a44, Func Offset: 0x174
}

// ChkExitCases__18zNMEGoalDentBattleFP10zNMEDenTooRiR11en_trantype
// Start address: 0x261a50
int32 zNMEGoalDentBattle::ChkExitCases(zNMEDenToo* npc, int32& nextgoal, en_trantype& trantype)
{
	en_vis vis;
	// Line 2337, Address: 0x261a50, Func Offset: 0
	// Line 2338, Address: 0x261a54, Func Offset: 0x4
	// Line 2337, Address: 0x261a58, Func Offset: 0x8
	// Line 2338, Address: 0x261a78, Func Offset: 0x28
	// Line 2339, Address: 0x261ab8, Func Offset: 0x68
	// Line 2340, Address: 0x261acc, Func Offset: 0x7c
	// Line 2342, Address: 0x261ad8, Func Offset: 0x88
	// Line 2343, Address: 0x261adc, Func Offset: 0x8c
	// Line 2344, Address: 0x261ae0, Func Offset: 0x90
	// Line 2343, Address: 0x261ae4, Func Offset: 0x94
	// Line 2344, Address: 0x261ae8, Func Offset: 0x98
	// Line 2343, Address: 0x261aec, Func Offset: 0x9c
	// Line 2344, Address: 0x261af0, Func Offset: 0xa0
	// Line 2345, Address: 0x261b04, Func Offset: 0xb4
	// Line 2338, Address: 0x261b10, Func Offset: 0xc0
	// Line 2345, Address: 0x261b14, Func Offset: 0xc4
	// Line 2338, Address: 0x261b1c, Func Offset: 0xcc
	// Line 2345, Address: 0x261b20, Func Offset: 0xd0
	// Line 2338, Address: 0x261b24, Func Offset: 0xd4
	// Line 2345, Address: 0x261b2c, Func Offset: 0xdc
	// Line 2338, Address: 0x261b4c, Func Offset: 0xfc
	// Line 2345, Address: 0x261b58, Func Offset: 0x108
	// Line 2338, Address: 0x261b5c, Func Offset: 0x10c
	// Line 2345, Address: 0x261b64, Func Offset: 0x114
	// Line 2338, Address: 0x261b6c, Func Offset: 0x11c
	// Line 2349, Address: 0x261b7c, Func Offset: 0x12c
	// Line 2350, Address: 0x261b9c, Func Offset: 0x14c
	// Line 2368, Address: 0x261ba8, Func Offset: 0x158
	// Line 2369, Address: 0x261bb0, Func Offset: 0x160
	// Line 2373, Address: 0x261bb8, Func Offset: 0x168
	// Line 2375, Address: 0x261be0, Func Offset: 0x190
	// Line 2377, Address: 0x261be4, Func Offset: 0x194
	// Line 2376, Address: 0x261be8, Func Offset: 0x198
	// Line 2377, Address: 0x261bec, Func Offset: 0x19c
	// Line 2378, Address: 0x261bf0, Func Offset: 0x1a0
	// Line 2375, Address: 0x261bfc, Func Offset: 0x1ac
	// Line 2376, Address: 0x261c04, Func Offset: 0x1b4
	// Line 2377, Address: 0x261c08, Func Offset: 0x1b8
	// Line 2378, Address: 0x261c0c, Func Offset: 0x1bc
	// Line 2379, Address: 0x261c1c, Func Offset: 0x1cc
	// Line 2383, Address: 0x261c24, Func Offset: 0x1d4
	// Line 2351, Address: 0x261c44, Func Offset: 0x1f4
	// Line 2383, Address: 0x261c48, Func Offset: 0x1f8
	// Line 2353, Address: 0x261c64, Func Offset: 0x214
	// Line 2352, Address: 0x261c6c, Func Offset: 0x21c
	// Line 2383, Address: 0x261c70, Func Offset: 0x220
	// Line 2354, Address: 0x261c74, Func Offset: 0x224
	// Line 2351, Address: 0x261c7c, Func Offset: 0x22c
	// Line 2383, Address: 0x261c84, Func Offset: 0x234
	// Line 2351, Address: 0x261c94, Func Offset: 0x244
	// Line 2383, Address: 0x261ca0, Func Offset: 0x250
	// Line 2384, Address: 0x261cb0, Func Offset: 0x260
	// Func End, Address: 0x261ccc, Func Offset: 0x27c
}

// Process__18zNMEGoalDentBattleFP11en_trantypefPv
// Start address: 0x261cd0
int32 zNMEGoalDentBattle::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	zNMEDenToo* npc;
	int32 nextgoal;
	int32 doTran;
	// Line 2316, Address: 0x261cd0, Func Offset: 0
	// Line 2320, Address: 0x261cfc, Func Offset: 0x2c
	// Line 2317, Address: 0x261d00, Func Offset: 0x30
	// Line 2320, Address: 0x261d08, Func Offset: 0x38
	// Line 2317, Address: 0x261d0c, Func Offset: 0x3c
	// Line 2320, Address: 0x261d10, Func Offset: 0x40
	// Line 2321, Address: 0x261d1c, Func Offset: 0x4c
	// Line 2324, Address: 0x261d28, Func Offset: 0x58
	// Line 2326, Address: 0x261d54, Func Offset: 0x84
	// Line 2328, Address: 0x261e28, Func Offset: 0x158
	// Line 2332, Address: 0x261e48, Func Offset: 0x178
	// Line 2322, Address: 0x261ea8, Func Offset: 0x1d8
	// Line 2326, Address: 0x261eb0, Func Offset: 0x1e0
	// Line 2332, Address: 0x261ecc, Func Offset: 0x1fc
	// Line 2326, Address: 0x261ed0, Func Offset: 0x200
	// Line 2332, Address: 0x261ed4, Func Offset: 0x204
	// Line 2326, Address: 0x261edc, Func Offset: 0x20c
	// Line 2332, Address: 0x261ee4, Func Offset: 0x214
	// Line 2329, Address: 0x261ef8, Func Offset: 0x228
	// Line 2332, Address: 0x261efc, Func Offset: 0x22c
	// Line 2329, Address: 0x261f00, Func Offset: 0x230
	// Line 2332, Address: 0x261f04, Func Offset: 0x234
	// Line 2329, Address: 0x261f18, Func Offset: 0x248
	// Line 2332, Address: 0x261f1c, Func Offset: 0x24c
	// Line 2329, Address: 0x261f24, Func Offset: 0x254
	// Line 2332, Address: 0x261f2c, Func Offset: 0x25c
	// Line 2329, Address: 0x261f3c, Func Offset: 0x26c
	// Line 2333, Address: 0x261f4c, Func Offset: 0x27c
	// Func End, Address: 0x261f70, Func Offset: 0x2a0
}

// Enter__18zNMEGoalDentBattleFfPv
// Start address: 0x261f70
int32 zNMEGoalDentBattle::Enter()
{
	// Line 2310, Address: 0x261f70, Func Offset: 0
	// Line 2311, Address: 0x261f74, Func Offset: 0x4
	// Line 2310, Address: 0x261f78, Func Offset: 0x8
	// Line 2312, Address: 0x261f7c, Func Offset: 0xc
	// Line 2310, Address: 0x261f80, Func Offset: 0x10
	// Line 2311, Address: 0x261f8c, Func Offset: 0x1c
	// Line 2312, Address: 0x261f90, Func Offset: 0x20
	// Line 2313, Address: 0x262014, Func Offset: 0xa4
	// Func End, Address: 0x26202c, Func Offset: 0xbc
}

// Process__18zNMEGoalDentNormalFP11en_trantypefPv
// Start address: 0x262030
int32 zNMEGoalDentNormal::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	zNMEDenToo* npc;
	int32 nextgoal;
	en_vis vis;
	// Line 2281, Address: 0x262030, Func Offset: 0
	// Line 2290, Address: 0x262034, Func Offset: 0x4
	// Line 2281, Address: 0x262038, Func Offset: 0x8
	// Line 2290, Address: 0x262060, Func Offset: 0x30
	// Line 2282, Address: 0x262064, Func Offset: 0x34
	// Line 2290, Address: 0x26206c, Func Offset: 0x3c
	// Line 2282, Address: 0x262070, Func Offset: 0x40
	// Line 2283, Address: 0x262074, Func Offset: 0x44
	// Line 2290, Address: 0x262078, Func Offset: 0x48
	// Line 2291, Address: 0x26208c, Func Offset: 0x5c
	// Line 2298, Address: 0x262098, Func Offset: 0x68
	// Line 2301, Address: 0x2620b8, Func Offset: 0x88
	// Line 2292, Address: 0x262118, Func Offset: 0xe8
	// Line 2294, Address: 0x26211c, Func Offset: 0xec
	// Line 2301, Address: 0x262120, Func Offset: 0xf0
	// Line 2294, Address: 0x262124, Func Offset: 0xf4
	// Line 2293, Address: 0x262128, Func Offset: 0xf8
	// Line 2294, Address: 0x26212c, Func Offset: 0xfc
	// Line 2293, Address: 0x262130, Func Offset: 0x100
	// Line 2301, Address: 0x262134, Func Offset: 0x104
	// Line 2295, Address: 0x262148, Func Offset: 0x118
	// Line 2301, Address: 0x262150, Func Offset: 0x120
	// Line 2299, Address: 0x262154, Func Offset: 0x124
	// Line 2301, Address: 0x262158, Func Offset: 0x128
	// Line 2299, Address: 0x26215c, Func Offset: 0x12c
	// Line 2301, Address: 0x262160, Func Offset: 0x130
	// Line 2299, Address: 0x262174, Func Offset: 0x144
	// Line 2301, Address: 0x262178, Func Offset: 0x148
	// Line 2299, Address: 0x262180, Func Offset: 0x150
	// Line 2301, Address: 0x262188, Func Offset: 0x158
	// Line 2299, Address: 0x262198, Func Offset: 0x168
	// Line 2302, Address: 0x2621a8, Func Offset: 0x178
	// Func End, Address: 0x2621cc, Func Offset: 0x19c
}

// Exit__18zNMEGoalDentNormalFfPv
// Start address: 0x2621d0
int32 zNMEGoalDentNormal::Exit()
{
	zNMEDenToo* npc;
	// Line 2271, Address: 0x2621d0, Func Offset: 0
	// Line 2275, Address: 0x2621d4, Func Offset: 0x4
	// Line 2271, Address: 0x2621d8, Func Offset: 0x8
	// Line 2272, Address: 0x2621e0, Func Offset: 0x10
	// Line 2275, Address: 0x2621e8, Func Offset: 0x18
	// Line 2278, Address: 0x2622f0, Func Offset: 0x120
	// Line 2277, Address: 0x2622f4, Func Offset: 0x124
	// Line 2278, Address: 0x2622f8, Func Offset: 0x128
	// Func End, Address: 0x262304, Func Offset: 0x134
}

// Enter__18zNMEGoalDentNormalFfPv
// Start address: 0x262310
int32 zNMEGoalDentNormal::Enter()
{
	// Line 2261, Address: 0x262310, Func Offset: 0
	// Line 2267, Address: 0x262314, Func Offset: 0x4
	// Line 2261, Address: 0x262318, Func Offset: 0x8
	// Line 2267, Address: 0x26231c, Func Offset: 0xc
	// Line 2261, Address: 0x262320, Func Offset: 0x10
	// Line 2267, Address: 0x262324, Func Offset: 0x14
	// Line 2261, Address: 0x262328, Func Offset: 0x18
	// Line 2267, Address: 0x262330, Func Offset: 0x20
	// Line 2268, Address: 0x2623ac, Func Offset: 0x9c
	// Func End, Address: 0x2623c4, Func Offset: 0xb4
}

// PickEvade__10zNMEDenTooFP10zMovePoint
// Start address: 0x2623d0
zMovePoint* zNMEDenToo::PickEvade(zMovePoint* nav_from)
{
	uint32 num;
	xVec3 pos_plyr;
	float32 dst_best;
	zMovePoint* nav_best;
	uint32 i;
	xBase* baseitem;
	zMovePoint* mvpt;
	xVec3 pos_mvpt;
	// Line 2189, Address: 0x2623d0, Func Offset: 0
	// Line 2190, Address: 0x2623fc, Func Offset: 0x2c
	// Line 2191, Address: 0x26240c, Func Offset: 0x3c
	// Line 2195, Address: 0x262414, Func Offset: 0x44
	// Line 2198, Address: 0x262418, Func Offset: 0x48
	// Line 2199, Address: 0x262420, Func Offset: 0x50
	// Line 2201, Address: 0x262424, Func Offset: 0x54
	// Line 2195, Address: 0x26242c, Func Offset: 0x5c
	// Line 2201, Address: 0x26244c, Func Offset: 0x7c
	// Line 2227, Address: 0x262454, Func Offset: 0x84
	// Line 2192, Address: 0x26245c, Func Offset: 0x8c
	// Line 2227, Address: 0x262464, Func Offset: 0x94
	// Line 2205, Address: 0x262478, Func Offset: 0xa8
	// Line 2227, Address: 0x26247c, Func Offset: 0xac
	// Line 2216, Address: 0x262490, Func Offset: 0xc0
	// Line 2227, Address: 0x262494, Func Offset: 0xc4
	// Line 2216, Address: 0x262498, Func Offset: 0xc8
	// Line 2215, Address: 0x26249c, Func Offset: 0xcc
	// Line 2227, Address: 0x2624a0, Func Offset: 0xd0
	// Line 2216, Address: 0x2624a8, Func Offset: 0xd8
	// Line 2227, Address: 0x2624ac, Func Offset: 0xdc
	// Line 2216, Address: 0x2624bc, Func Offset: 0xec
	// Line 2227, Address: 0x2624c0, Func Offset: 0xf0
	// Line 2215, Address: 0x2624d8, Func Offset: 0x108
	// Line 2216, Address: 0x2624e0, Func Offset: 0x110
	// Line 2227, Address: 0x2624e4, Func Offset: 0x114
	// Line 2216, Address: 0x2624e8, Func Offset: 0x118
	// Line 2227, Address: 0x2624f0, Func Offset: 0x120
	// Line 2219, Address: 0x2624f8, Func Offset: 0x128
	// Line 2227, Address: 0x2624fc, Func Offset: 0x12c
	// Line 2220, Address: 0x26250c, Func Offset: 0x13c
	// Line 2227, Address: 0x262510, Func Offset: 0x140
	// Line 2219, Address: 0x262514, Func Offset: 0x144
	// Line 2227, Address: 0x262524, Func Offset: 0x154
	// Line 2220, Address: 0x262534, Func Offset: 0x164
	// Line 2227, Address: 0x262538, Func Offset: 0x168
	// Line 2222, Address: 0x262540, Func Offset: 0x170
	// Line 2221, Address: 0x262544, Func Offset: 0x174
	// Line 2227, Address: 0x262548, Func Offset: 0x178
	// Line 2228, Address: 0x262560, Func Offset: 0x190
	// Func End, Address: 0x26258c, Func Offset: 0x1bc
}

// DenMailSys__10zNMEDenTooFP11NMESysEvent
// Start address: 0x262590
int32 zNMEDenToo::DenMailSys(NMESysEvent* sysmail)
{
	int32 handled;
	int32 gotoStage;
	// Line 2052, Address: 0x262590, Func Offset: 0
	// Line 2055, Address: 0x262594, Func Offset: 0x4
	// Line 2052, Address: 0x262598, Func Offset: 0x8
	// Line 2055, Address: 0x2625a0, Func Offset: 0x10
	// Line 2057, Address: 0x262610, Func Offset: 0x80
	// Line 2058, Address: 0x262634, Func Offset: 0xa4
	// Line 2062, Address: 0x26263c, Func Offset: 0xac
	// Line 2063, Address: 0x262660, Func Offset: 0xd0
	// Line 2065, Address: 0x262668, Func Offset: 0xd8
	// Line 2067, Address: 0x262670, Func Offset: 0xe0
	// Line 2069, Address: 0x26267c, Func Offset: 0xec
	// Line 2071, Address: 0x262688, Func Offset: 0xf8
	// Line 2072, Address: 0x262694, Func Offset: 0x104
	// Line 2074, Address: 0x2626c4, Func Offset: 0x134
	// Line 2076, Address: 0x2626e4, Func Offset: 0x154
	// Line 2089, Address: 0x2626ec, Func Offset: 0x15c
	// Line 2093, Address: 0x2626f8, Func Offset: 0x168
	// Line 2064, Address: 0x262704, Func Offset: 0x174
	// Line 2093, Address: 0x262708, Func Offset: 0x178
	// Line 2064, Address: 0x262724, Func Offset: 0x194
	// Line 2066, Address: 0x26272c, Func Offset: 0x19c
	// Line 2093, Address: 0x262730, Func Offset: 0x1a0
	// Line 2066, Address: 0x262738, Func Offset: 0x1a8
	// Line 2093, Address: 0x26273c, Func Offset: 0x1ac
	// Line 2066, Address: 0x262750, Func Offset: 0x1c0
	// Line 2068, Address: 0x262758, Func Offset: 0x1c8
	// Line 2093, Address: 0x26275c, Func Offset: 0x1cc
	// Line 2068, Address: 0x262764, Func Offset: 0x1d4
	// Line 2093, Address: 0x262768, Func Offset: 0x1d8
	// Line 2068, Address: 0x26277c, Func Offset: 0x1ec
	// Line 2070, Address: 0x262784, Func Offset: 0x1f4
	// Line 2093, Address: 0x262788, Func Offset: 0x1f8
	// Line 2070, Address: 0x262790, Func Offset: 0x200
	// Line 2093, Address: 0x262794, Func Offset: 0x204
	// Line 2070, Address: 0x2627a8, Func Offset: 0x218
	// Line 2094, Address: 0x2627b0, Func Offset: 0x220
	// Func End, Address: 0x2627bc, Func Offset: 0x22c
}

// DenMailDamage__10zNMEDenTooFP13NMEDamageInfo
// Start address: 0x2627c0
int32 zNMEDenToo::DenMailDamage(NMEDamageInfo* dmgmail)
{
	int32 handled;
	xPsyche* psy;
	xGoal* goal;
	en_plyrpup pup;
	int32 amt_dmg;
	xGoal* goal;
	// Line 1966, Address: 0x2627c0, Func Offset: 0
	// Line 1973, Address: 0x2627d8, Func Offset: 0x18
	// Line 1976, Address: 0x262804, Func Offset: 0x44
	// Line 1978, Address: 0x262808, Func Offset: 0x48
	// Line 1981, Address: 0x262818, Func Offset: 0x58
	// Line 1982, Address: 0x26281c, Func Offset: 0x5c
	// Line 1981, Address: 0x262820, Func Offset: 0x60
	// Line 1982, Address: 0x262824, Func Offset: 0x64
	// Line 1983, Address: 0x262834, Func Offset: 0x74
	// Line 1985, Address: 0x262860, Func Offset: 0xa0
	// Line 2009, Address: 0x262868, Func Offset: 0xa8
	// Line 2010, Address: 0x262870, Func Offset: 0xb0
	// Line 2019, Address: 0x262888, Func Offset: 0xc8
	// Line 2020, Address: 0x262894, Func Offset: 0xd4
	// Line 2022, Address: 0x2629a0, Func Offset: 0x1e0
	// Line 2027, Address: 0x2629bc, Func Offset: 0x1fc
	// Line 2030, Address: 0x2629cc, Func Offset: 0x20c
	// Line 2032, Address: 0x2629d0, Func Offset: 0x210
	// Line 2030, Address: 0x2629d4, Func Offset: 0x214
	// Line 2032, Address: 0x2629d8, Func Offset: 0x218
	// Line 2033, Address: 0x2629e8, Func Offset: 0x228
	// Line 2034, Address: 0x262a14, Func Offset: 0x254
	// Line 2042, Address: 0x262a1c, Func Offset: 0x25c
	// Line 2048, Address: 0x262a20, Func Offset: 0x260
	// Line 2036, Address: 0x262a34, Func Offset: 0x274
	// Line 2048, Address: 0x262a3c, Func Offset: 0x27c
	// Line 2038, Address: 0x262a44, Func Offset: 0x284
	// Line 2049, Address: 0x262a4c, Func Offset: 0x28c
	// Func End, Address: 0x262a64, Func Offset: 0x2a4
}

// TypeHandleMail__10zNMEDenTooFP6NMEMsg
// Start address: 0x262a70
int32 zNMEDenToo::TypeHandleMail(NMEMsg* mail)
{
	int32 handled;
	// Line 1941, Address: 0x262a70, Func Offset: 0
	// Line 1944, Address: 0x262a74, Func Offset: 0x4
	// Line 1941, Address: 0x262a78, Func Offset: 0x8
	// Line 1944, Address: 0x262a7c, Func Offset: 0xc
	// Line 1949, Address: 0x262a98, Func Offset: 0x28
	// Line 1950, Address: 0x262aa0, Func Offset: 0x30
	// Line 1953, Address: 0x262aa8, Func Offset: 0x38
	// Line 1963, Address: 0x262ab0, Func Offset: 0x40
	// Func End, Address: 0x262abc, Func Offset: 0x4c
}

// BossCamRepel__10zNMEDenTooFf
// Start address: 0x262ac0
void zNMEDenToo::BossCamRepel()
{
	xVec3 vec_cam;
	xVec3 dir_cam;
	xVec3 pos_tobe;
	// Line 1666, Address: 0x262ac0, Func Offset: 0
	// Line 1669, Address: 0x262ac4, Func Offset: 0x4
	// Line 1680, Address: 0x262ad4, Func Offset: 0x14
	// Line 1683, Address: 0x262b00, Func Offset: 0x40
	// Line 1680, Address: 0x262b04, Func Offset: 0x44
	// Line 1683, Address: 0x262b18, Func Offset: 0x58
	// Line 1680, Address: 0x262b1c, Func Offset: 0x5c
	// Line 1682, Address: 0x262b60, Func Offset: 0xa0
	// Line 1680, Address: 0x262b64, Func Offset: 0xa4
	// Line 1682, Address: 0x262b68, Func Offset: 0xa8
	// Line 1680, Address: 0x262b78, Func Offset: 0xb8
	// Line 1682, Address: 0x262b7c, Func Offset: 0xbc
	// Line 1683, Address: 0x262b84, Func Offset: 0xc4
	// Line 1685, Address: 0x262b90, Func Offset: 0xd0
	// Line 1686, Address: 0x262bac, Func Offset: 0xec
	// Line 1688, Address: 0x262bb4, Func Offset: 0xf4
	// Line 1691, Address: 0x262bc8, Func Offset: 0x108
	// Line 1688, Address: 0x262bcc, Func Offset: 0x10c
	// Line 1691, Address: 0x262bd0, Func Offset: 0x110
	// Line 1688, Address: 0x262bd4, Func Offset: 0x114
	// Line 1686, Address: 0x262bd8, Func Offset: 0x118
	// Line 1691, Address: 0x262bdc, Func Offset: 0x11c
	// Line 1688, Address: 0x262be0, Func Offset: 0x120
	// Line 1691, Address: 0x262bec, Func Offset: 0x12c
	// Line 1686, Address: 0x262bf0, Func Offset: 0x130
	// Line 1688, Address: 0x262bf4, Func Offset: 0x134
	// Line 1691, Address: 0x262bfc, Func Offset: 0x13c
	// Line 1688, Address: 0x262c04, Func Offset: 0x144
	// Line 1691, Address: 0x262c1c, Func Offset: 0x15c
	// Line 1688, Address: 0x262c20, Func Offset: 0x160
	// Line 1691, Address: 0x262c44, Func Offset: 0x184
	// Line 1688, Address: 0x262c48, Func Offset: 0x188
	// Line 1691, Address: 0x262c54, Func Offset: 0x194
	// Line 1688, Address: 0x262c68, Func Offset: 0x1a8
	// Line 1691, Address: 0x262c6c, Func Offset: 0x1ac
	// Line 1688, Address: 0x262c70, Func Offset: 0x1b0
	// Line 1691, Address: 0x262c74, Func Offset: 0x1b4
	// Line 1693, Address: 0x262ca0, Func Offset: 0x1e0
	// Line 1691, Address: 0x262ca8, Func Offset: 0x1e8
	// Line 1693, Address: 0x262cb0, Func Offset: 0x1f0
	// Line 1708, Address: 0x262cb4, Func Offset: 0x1f4
	// Func End, Address: 0x262cc0, Func Offset: 0x200
}

// BossCamOverride__10zNMEDenTooFP15zBossCam_BinaryfPv
// Start address: 0x262cc0
void BossCamOverride(zBossCam_Binary* cam, float32 dt, void* ctxt)
{
	zNMEDenToo* boss;
	// Line 1620, Address: 0x262cc0, Func Offset: 0
	// Line 1623, Address: 0x262cc4, Func Offset: 0x4
	// Line 1628, Address: 0x262ccc, Func Offset: 0xc
	// Line 1630, Address: 0x262cd8, Func Offset: 0x18
	// Line 1631, Address: 0x262cf0, Func Offset: 0x30
	// Func End, Address: 0x262cfc, Func Offset: 0x3c
}

// BossCamSet__10zNMEDenTooF11en_dtbcmodeb
// Start address: 0x262d00
void zNMEDenToo::BossCamSet(en_dtbcmode mod_desired, uint8 forceCut)
{
	en_dtbcmode currCamMode;
	// Line 1553, Address: 0x262d00, Func Offset: 0
	// Line 1554, Address: 0x262d1c, Func Offset: 0x1c
	// Line 1555, Address: 0x262d20, Func Offset: 0x20
	// Line 1562, Address: 0x262d28, Func Offset: 0x28
	// Line 1578, Address: 0x262d40, Func Offset: 0x40
	// Line 1592, Address: 0x262d58, Func Offset: 0x58
	// Line 1570, Address: 0x262d60, Func Offset: 0x60
	// Line 1592, Address: 0x262d68, Func Offset: 0x68
	// Line 1586, Address: 0x262d80, Func Offset: 0x80
	// Line 1592, Address: 0x262d84, Func Offset: 0x84
	// Line 1586, Address: 0x262d88, Func Offset: 0x88
	// Line 1592, Address: 0x262d8c, Func Offset: 0x8c
	// Line 1593, Address: 0x262da8, Func Offset: 0xa8
	// Func End, Address: 0x262dc0, Func Offset: 0xc0
}

// RespondToHittingPlayer__10zNMEDenTooFv
// Start address: 0x262dc0
void zNMEDenToo::RespondToHittingPlayer()
{
	// Line 1513, Address: 0x262dc0, Func Offset: 0
	// Line 1515, Address: 0x262dc4, Func Offset: 0x4
	// Line 1513, Address: 0x262dc8, Func Offset: 0x8
	// Line 1515, Address: 0x262dcc, Func Offset: 0xc
	// Line 1513, Address: 0x262dd0, Func Offset: 0x10
	// Line 1515, Address: 0x262dd4, Func Offset: 0x14
	// Line 1516, Address: 0x262dfc, Func Offset: 0x3c
	// Line 1517, Address: 0x262e0c, Func Offset: 0x4c
	// Func End, Address: 0x262e30, Func Offset: 0x70
}

// VisionTarget__10zNMEDenTooCFP4xEnt9en_defconi
// Start address: 0x262e30
en_vis zNMEDenToo::VisionTarget()
{
	NMECfgDenToo* cfg;
	float32 dy;
	// Line 1437, Address: 0x262e30, Func Offset: 0
	// Line 1448, Address: 0x262e60, Func Offset: 0x30
	// Line 1450, Address: 0x262e90, Func Offset: 0x60
	// Line 1455, Address: 0x262e98, Func Offset: 0x68
	// Line 1463, Address: 0x262ea4, Func Offset: 0x74
	// Line 1458, Address: 0x262eac, Func Offset: 0x7c
	// Line 1463, Address: 0x262eb0, Func Offset: 0x80
	// Line 1464, Address: 0x262ee0, Func Offset: 0xb0
	// Line 1467, Address: 0x262efc, Func Offset: 0xcc
	// Line 1477, Address: 0x262f08, Func Offset: 0xd8
	// Line 1479, Address: 0x262f20, Func Offset: 0xf0
	// Line 1482, Address: 0x262f28, Func Offset: 0xf8
	// Line 1483, Address: 0x262f34, Func Offset: 0x104
	// Line 1485, Address: 0x262f44, Func Offset: 0x114
	// Line 1484, Address: 0x262f48, Func Offset: 0x118
	// Line 1487, Address: 0x262f54, Func Offset: 0x124
	// Line 1485, Address: 0x262f5c, Func Offset: 0x12c
	// Line 1484, Address: 0x262f60, Func Offset: 0x130
	// Line 1487, Address: 0x262f68, Func Offset: 0x138
	// Line 1484, Address: 0x262f6c, Func Offset: 0x13c
	// Line 1487, Address: 0x262f70, Func Offset: 0x140
	// Line 1492, Address: 0x262fa8, Func Offset: 0x178
	// Line 1494, Address: 0x262fb8, Func Offset: 0x188
	// Line 1493, Address: 0x262fbc, Func Offset: 0x18c
	// Line 1496, Address: 0x262fc8, Func Offset: 0x198
	// Line 1494, Address: 0x262fd0, Func Offset: 0x1a0
	// Line 1493, Address: 0x262fd4, Func Offset: 0x1a4
	// Line 1496, Address: 0x262fdc, Func Offset: 0x1ac
	// Line 1493, Address: 0x262fe0, Func Offset: 0x1b0
	// Line 1496, Address: 0x262fe4, Func Offset: 0x1b4
	// Line 1502, Address: 0x26301c, Func Offset: 0x1ec
	// Line 1506, Address: 0x26302c, Func Offset: 0x1fc
	// Line 1443, Address: 0x263044, Func Offset: 0x214
	// Line 1456, Address: 0x26304c, Func Offset: 0x21c
	// Line 1509, Address: 0x26305c, Func Offset: 0x22c
	// Func End, Address: 0x263064, Func Offset: 0x234
}

// RenderHud__10zNMEDenTooFv
// Start address: 0x263070
void zNMEDenToo::RenderHud()
{
	// Line 1429, Address: 0x263070, Func Offset: 0
	// Func End, Address: 0x26307c, Func Offset: 0xc
}

// BUpdate__10zNMEDenTooFP5xVec3
// Start address: 0x263080
void zNMEDenToo::BUpdate(xVec3* pos)
{
	// Line 1422, Address: 0x263080, Func Offset: 0
	// Line 1423, Address: 0x263084, Func Offset: 0x4
	// Line 1422, Address: 0x263088, Func Offset: 0x8
	// Line 1423, Address: 0x263090, Func Offset: 0x10
	// Line 1424, Address: 0x263268, Func Offset: 0x1e8
	// Line 1423, Address: 0x263278, Func Offset: 0x1f8
	// Line 1424, Address: 0x263280, Func Offset: 0x200
	// Line 1423, Address: 0x2632c0, Func Offset: 0x240
	// Line 1424, Address: 0x2632c4, Func Offset: 0x244
	// Line 1423, Address: 0x2632c8, Func Offset: 0x248
	// Line 1424, Address: 0x2632cc, Func Offset: 0x24c
	// Line 1423, Address: 0x2632e8, Func Offset: 0x268
	// Line 1424, Address: 0x2632ec, Func Offset: 0x26c
	// Line 1423, Address: 0x2632f4, Func Offset: 0x274
	// Line 1424, Address: 0x2632f8, Func Offset: 0x278
	// Line 1423, Address: 0x263324, Func Offset: 0x2a4
	// Line 1424, Address: 0x263328, Func Offset: 0x2a8
	// Line 1423, Address: 0x263358, Func Offset: 0x2d8
	// Line 1424, Address: 0x263360, Func Offset: 0x2e0
	// Line 1423, Address: 0x26338c, Func Offset: 0x30c
	// Line 1424, Address: 0x263390, Func Offset: 0x310
	// Line 1423, Address: 0x2633c0, Func Offset: 0x340
	// Line 1424, Address: 0x2633c8, Func Offset: 0x348
	// Line 1423, Address: 0x2633f0, Func Offset: 0x370
	// Line 1424, Address: 0x2633f4, Func Offset: 0x374
	// Line 1423, Address: 0x2633f8, Func Offset: 0x378
	// Line 1424, Address: 0x2633fc, Func Offset: 0x37c
	// Line 1423, Address: 0x263404, Func Offset: 0x384
	// Line 1424, Address: 0x26340c, Func Offset: 0x38c
	// Line 1423, Address: 0x26345c, Func Offset: 0x3dc
	// Line 1424, Address: 0x263464, Func Offset: 0x3e4
	// Line 1423, Address: 0x263488, Func Offset: 0x408
	// Line 1424, Address: 0x26348c, Func Offset: 0x40c
	// Line 1423, Address: 0x263490, Func Offset: 0x410
	// Line 1424, Address: 0x263494, Func Offset: 0x414
	// Line 1423, Address: 0x2634b4, Func Offset: 0x434
	// Line 1424, Address: 0x2634b8, Func Offset: 0x438
	// Line 1423, Address: 0x2634f4, Func Offset: 0x474
	// Line 1424, Address: 0x2634f8, Func Offset: 0x478
	// Line 1423, Address: 0x263500, Func Offset: 0x480
	// Line 1424, Address: 0x263504, Func Offset: 0x484
	// Line 1423, Address: 0x26353c, Func Offset: 0x4bc
	// Line 1424, Address: 0x263540, Func Offset: 0x4c0
	// Line 1423, Address: 0x263544, Func Offset: 0x4c4
	// Line 1424, Address: 0x263548, Func Offset: 0x4c8
	// Line 1423, Address: 0x263550, Func Offset: 0x4d0
	// Line 1424, Address: 0x26355c, Func Offset: 0x4dc
	// Line 1423, Address: 0x263574, Func Offset: 0x4f4
	// Line 1424, Address: 0x263578, Func Offset: 0x4f8
	// Line 1423, Address: 0x2635bc, Func Offset: 0x53c
	// Line 1424, Address: 0x2635c4, Func Offset: 0x544
	// Line 1425, Address: 0x2635d4, Func Offset: 0x554
	// Func End, Address: 0x2635e0, Func Offset: 0x560
}

// PostProcess__10zNMEDenTooFf
// Start address: 0x2635e0
void zNMEDenToo::PostProcess()
{
	// Line 1416, Address: 0x2635e0, Func Offset: 0
	// Line 1419, Address: 0x26360c, Func Offset: 0x2c
	// Func End, Address: 0x263614, Func Offset: 0x34
}

// Process__10zNMEDenTooFf
// Start address: 0x263620
void zNMEDenToo::Process(float32 dt)
{
	// Line 1352, Address: 0x263620, Func Offset: 0
	// Line 1353, Address: 0x263634, Func Offset: 0x14
	// Line 1363, Address: 0x263640, Func Offset: 0x20
	// Line 1365, Address: 0x263650, Func Offset: 0x30
	// Line 1367, Address: 0x26366c, Func Offset: 0x4c
	// Line 1368, Address: 0x263674, Func Offset: 0x54
	// Line 1382, Address: 0x263718, Func Offset: 0xf8
	// Line 1384, Address: 0x263730, Func Offset: 0x110
	// Line 1387, Address: 0x263760, Func Offset: 0x140
	// Line 1388, Address: 0x26376c, Func Offset: 0x14c
	// Line 1387, Address: 0x263774, Func Offset: 0x154
	// Line 1388, Address: 0x263778, Func Offset: 0x158
	// Line 1389, Address: 0x26377c, Func Offset: 0x15c
	// Line 1388, Address: 0x263780, Func Offset: 0x160
	// Line 1389, Address: 0x263784, Func Offset: 0x164
	// Line 1387, Address: 0x263788, Func Offset: 0x168
	// Line 1389, Address: 0x26378c, Func Offset: 0x16c
	// Line 1387, Address: 0x263790, Func Offset: 0x170
	// Line 1388, Address: 0x263798, Func Offset: 0x178
	// Line 1389, Address: 0x2637a8, Func Offset: 0x188
	// Line 1391, Address: 0x2637b8, Func Offset: 0x198
	// Line 1393, Address: 0x2637c8, Func Offset: 0x1a8
	// Line 1405, Address: 0x2637f4, Func Offset: 0x1d4
	// Line 1408, Address: 0x263804, Func Offset: 0x1e4
	// Line 1410, Address: 0x26383c, Func Offset: 0x21c
	// Line 1358, Address: 0x263850, Func Offset: 0x230
	// Line 1410, Address: 0x263854, Func Offset: 0x234
	// Line 1358, Address: 0x263858, Func Offset: 0x238
	// Line 1410, Address: 0x26385c, Func Offset: 0x23c
	// Line 1366, Address: 0x263880, Func Offset: 0x260
	// Line 1410, Address: 0x263888, Func Offset: 0x268
	// Line 1384, Address: 0x2638b4, Func Offset: 0x294
	// Line 1410, Address: 0x2638bc, Func Offset: 0x29c
	// Line 1384, Address: 0x2638c0, Func Offset: 0x2a0
	// Line 1411, Address: 0x2638d0, Func Offset: 0x2b0
	// Func End, Address: 0x2638e0, Func Offset: 0x2c0
}

// IsAlive__10zNMEDenTooFv
// Start address: 0x2638e0
int32 zNMEDenToo::IsAlive()
{
	// Line 1341, Address: 0x2638e0, Func Offset: 0
	// Line 1342, Address: 0x2638e4, Func Offset: 0x4
	// Line 1344, Address: 0x2638f0, Func Offset: 0x10
	// Line 1347, Address: 0x2638fc, Func Offset: 0x1c
	// Line 1349, Address: 0x263908, Func Offset: 0x28
	// Func End, Address: 0x263910, Func Offset: 0x30
}

// Destroy__10zNMEDenTooFv
// Start address: 0x263910
void zNMEDenToo::Destroy()
{
	// Line 1332, Address: 0x263910, Func Offset: 0
	// Line 1333, Address: 0x263920, Func Offset: 0x10
	// Line 1335, Address: 0x263940, Func Offset: 0x30
	// Line 1338, Address: 0x263950, Func Offset: 0x40
	// Func End, Address: 0x263960, Func Offset: 0x50
}

// Reset__10zNMEDenTooFv
// Start address: 0x263960
void zNMEDenToo::Reset()
{
	xPsyche* psy;
	// Line 1297, Address: 0x263960, Func Offset: 0
	// Line 1298, Address: 0x263970, Func Offset: 0x10
	// Line 1303, Address: 0x263bec, Func Offset: 0x28c
	// Line 1304, Address: 0x263c0c, Func Offset: 0x2ac
	// Line 1311, Address: 0x263c3c, Func Offset: 0x2dc
	// Line 1308, Address: 0x263c40, Func Offset: 0x2e0
	// Line 1311, Address: 0x263c44, Func Offset: 0x2e4
	// Line 1312, Address: 0x263c4c, Func Offset: 0x2ec
	// Line 1315, Address: 0x263c60, Func Offset: 0x300
	// Line 1316, Address: 0x263c78, Func Offset: 0x318
	// Line 1315, Address: 0x263c7c, Func Offset: 0x31c
	// Line 1316, Address: 0x263c80, Func Offset: 0x320
	// Line 1315, Address: 0x263c84, Func Offset: 0x324
	// Line 1316, Address: 0x263c88, Func Offset: 0x328
	// Line 1315, Address: 0x263c8c, Func Offset: 0x32c
	// Line 1319, Address: 0x263c90, Func Offset: 0x330
	// Line 1316, Address: 0x263c94, Func Offset: 0x334
	// Line 1315, Address: 0x263c98, Func Offset: 0x338
	// Line 1316, Address: 0x263c9c, Func Offset: 0x33c
	// Line 1320, Address: 0x263ca0, Func Offset: 0x340
	// Line 1315, Address: 0x263ca4, Func Offset: 0x344
	// Line 1323, Address: 0x263ca8, Func Offset: 0x348
	// Line 1316, Address: 0x263cb0, Func Offset: 0x350
	// Line 1323, Address: 0x263cc0, Func Offset: 0x360
	// Line 1316, Address: 0x263cc4, Func Offset: 0x364
	// Line 1323, Address: 0x263cd0, Func Offset: 0x370
	// Line 1316, Address: 0x263cd4, Func Offset: 0x374
	// Line 1320, Address: 0x263cdc, Func Offset: 0x37c
	// Line 1316, Address: 0x263ce0, Func Offset: 0x380
	// Line 1319, Address: 0x263ce4, Func Offset: 0x384
	// Line 1320, Address: 0x263ce8, Func Offset: 0x388
	// Line 1323, Address: 0x263d04, Func Offset: 0x3a4
	// Line 1325, Address: 0x263d0c, Func Offset: 0x3ac
	// Line 1326, Address: 0x263d10, Func Offset: 0x3b0
	// Line 1325, Address: 0x263d14, Func Offset: 0x3b4
	// Line 1328, Address: 0x263d18, Func Offset: 0x3b8
	// Line 1329, Address: 0x263d48, Func Offset: 0x3e8
	// Func End, Address: 0x263d5c, Func Offset: 0x3fc
}

// Setup__10zNMEDenTooFv
// Start address: 0x263d60
void zNMEDenToo::Setup()
{
	// Line 1274, Address: 0x263d60, Func Offset: 0
	// Line 1275, Address: 0x263d64, Func Offset: 0x4
	// Line 1274, Address: 0x263d68, Func Offset: 0x8
	// Line 1275, Address: 0x263d6c, Func Offset: 0xc
	// Line 1274, Address: 0x263d70, Func Offset: 0x10
	// Line 1275, Address: 0x263d74, Func Offset: 0x14
	// Line 1278, Address: 0x263db4, Func Offset: 0x54
	// Line 1285, Address: 0x263dcc, Func Offset: 0x6c
	// Line 1290, Address: 0x263dd0, Func Offset: 0x70
	// Line 1285, Address: 0x263dd4, Func Offset: 0x74
	// Line 1290, Address: 0x263dd8, Func Offset: 0x78
	// Line 1285, Address: 0x263ddc, Func Offset: 0x7c
	// Line 1286, Address: 0x263de8, Func Offset: 0x88
	// Line 1285, Address: 0x263dec, Func Offset: 0x8c
	// Line 1286, Address: 0x263e04, Func Offset: 0xa4
	// Line 1290, Address: 0x263e24, Func Offset: 0xc4
	// Line 1291, Address: 0x263e30, Func Offset: 0xd0
	// Line 1293, Address: 0x264008, Func Offset: 0x2a8
	// Line 1278, Address: 0x264010, Func Offset: 0x2b0
	// Line 1293, Address: 0x264018, Func Offset: 0x2b8
	// Line 1278, Address: 0x264020, Func Offset: 0x2c0
	// Line 1293, Address: 0x264024, Func Offset: 0x2c4
	// Line 1294, Address: 0x264038, Func Offset: 0x2d8
	// Func End, Address: 0x264048, Func Offset: 0x2e8
}

// Init__10zNMEDenTooFP9xEntAsset
// Start address: 0x264050
void zNMEDenToo::Init(xEntAsset* asset)
{
	// Line 1254, Address: 0x264050, Func Offset: 0
	// Line 1255, Address: 0x264064, Func Offset: 0x14
	// Line 1257, Address: 0x264078, Func Offset: 0x28
	// Line 1259, Address: 0x264140, Func Offset: 0xf0
	// Line 1257, Address: 0x264144, Func Offset: 0xf4
	// Line 1259, Address: 0x264160, Func Offset: 0x110
	// Line 1257, Address: 0x264164, Func Offset: 0x114
	// Line 1259, Address: 0x264168, Func Offset: 0x118
	// Line 1257, Address: 0x26416c, Func Offset: 0x11c
	// Line 1259, Address: 0x264170, Func Offset: 0x120
	// Line 1262, Address: 0x264178, Func Offset: 0x128
	// Line 1265, Address: 0x264180, Func Offset: 0x130
	// Line 1268, Address: 0x264188, Func Offset: 0x138
	// Line 1270, Address: 0x2641a0, Func Offset: 0x150
	// Line 1268, Address: 0x2641a8, Func Offset: 0x158
	// Line 1270, Address: 0x2641ac, Func Offset: 0x15c
	// Line 1271, Address: 0x2641bc, Func Offset: 0x16c
	// Func End, Address: 0x2641cc, Func Offset: 0x17c
}

// CreateAnimTable__10zNMEDenTooFP10xAnimTable
// Start address: 0x2641d0
xAnimTable* zNMEDenToo::CreateAnimTable(xAnimTable* table)
{
	// Line 1096, Address: 0x2641d0, Func Offset: 0
	// Line 1097, Address: 0x2641e0, Func Offset: 0x10
	// Line 1110, Address: 0x2641e8, Func Offset: 0x18
	// Line 1114, Address: 0x264230, Func Offset: 0x60
	// Line 1118, Address: 0x264278, Func Offset: 0xa8
	// Line 1122, Address: 0x2642c0, Func Offset: 0xf0
	// Line 1127, Address: 0x264308, Func Offset: 0x138
	// Line 1134, Address: 0x264350, Func Offset: 0x180
	// Line 1138, Address: 0x264398, Func Offset: 0x1c8
	// Line 1142, Address: 0x2643e0, Func Offset: 0x210
	// Line 1146, Address: 0x264428, Func Offset: 0x258
	// Line 1151, Address: 0x264470, Func Offset: 0x2a0
	// Line 1155, Address: 0x2644b8, Func Offset: 0x2e8
	// Line 1159, Address: 0x264500, Func Offset: 0x330
	// Line 1163, Address: 0x264548, Func Offset: 0x378
	// Line 1168, Address: 0x264590, Func Offset: 0x3c0
	// Line 1172, Address: 0x2645d8, Func Offset: 0x408
	// Line 1176, Address: 0x264620, Func Offset: 0x450
	// Line 1180, Address: 0x264668, Func Offset: 0x498
	// Line 1185, Address: 0x2646b0, Func Offset: 0x4e0
	// Line 1189, Address: 0x2646f8, Func Offset: 0x528
	// Line 1193, Address: 0x264740, Func Offset: 0x570
	// Line 1199, Address: 0x264788, Func Offset: 0x5b8
	// Line 1203, Address: 0x2647d0, Func Offset: 0x600
	// Line 1207, Address: 0x264818, Func Offset: 0x648
	// Line 1211, Address: 0x264860, Func Offset: 0x690
	// Line 1218, Address: 0x2648a8, Func Offset: 0x6d8
	// Line 1222, Address: 0x2648f0, Func Offset: 0x720
	// Line 1227, Address: 0x264938, Func Offset: 0x768
	// Line 1231, Address: 0x264980, Func Offset: 0x7b0
	// Line 1235, Address: 0x2649c8, Func Offset: 0x7f8
	// Line 1239, Address: 0x264a10, Func Offset: 0x840
	// Line 1250, Address: 0x264a58, Func Offset: 0x888
	// Line 1098, Address: 0x264a60, Func Offset: 0x890
	// Line 1250, Address: 0x264a64, Func Offset: 0x894
	// Line 1251, Address: 0x264a74, Func Offset: 0x8a4
	// Func End, Address: 0x264a84, Func Offset: 0x8b4
}

// GoalPick__10zNMEDenTooFP5xGoalRiR11en_trantype
// Start address: 0x264a90
int32 GoalPick(int32& gid_would)
{
	int32 altered;
	// Line 1057, Address: 0x264a90, Func Offset: 0
	// Line 1060, Address: 0x264ac8, Func Offset: 0x38
	// Line 1062, Address: 0x264ad0, Func Offset: 0x40
	// Line 1066, Address: 0x264ad8, Func Offset: 0x48
	// Line 1068, Address: 0x264ae0, Func Offset: 0x50
	// Line 1071, Address: 0x264ae8, Func Offset: 0x58
	// Line 1073, Address: 0x264af0, Func Offset: 0x60
	// Line 1076, Address: 0x264af8, Func Offset: 0x68
	// Line 1080, Address: 0x264b00, Func Offset: 0x70
	// Line 1083, Address: 0x264b08, Func Offset: 0x78
	// Line 1085, Address: 0x264b10, Func Offset: 0x80
	// Line 1088, Address: 0x264b18, Func Offset: 0x88
	// Line 1093, Address: 0x264b1c, Func Offset: 0x8c
	// Func End, Address: 0x264b24, Func Offset: 0x94
}

// AnimPick__10zNMEDenTooFi11en_npcgspotP5xGoal
// Start address: 0x264b30
uint32 zNMEDenToo::AnimPick(int32 gid, en_npcgspot gspot)
{
	int32 idx;
	// Line 986, Address: 0x264b30, Func Offset: 0
	// Line 989, Address: 0x264b54, Func Offset: 0x24
	// Line 991, Address: 0x264b9c, Func Offset: 0x6c
	// Line 989, Address: 0x264ba4, Func Offset: 0x74
	// Line 991, Address: 0x264bb8, Func Offset: 0x88
	// Line 995, Address: 0x264c10, Func Offset: 0xe0
	// Line 1000, Address: 0x264c18, Func Offset: 0xe8
	// Line 1003, Address: 0x264c20, Func Offset: 0xf0
	// Line 1005, Address: 0x264c2c, Func Offset: 0xfc
	// Line 1007, Address: 0x264c34, Func Offset: 0x104
	// Line 1008, Address: 0x264c44, Func Offset: 0x114
	// Line 1011, Address: 0x264c4c, Func Offset: 0x11c
	// Line 1012, Address: 0x264cac, Func Offset: 0x17c
	// Line 1013, Address: 0x264d08, Func Offset: 0x1d8
	// Line 1014, Address: 0x264d10, Func Offset: 0x1e0
	// Line 1019, Address: 0x264d18, Func Offset: 0x1e8
	// Line 1023, Address: 0x264d20, Func Offset: 0x1f0
	// Line 1026, Address: 0x264d28, Func Offset: 0x1f8
	// Line 1027, Address: 0x264d3c, Func Offset: 0x20c
	// Line 1030, Address: 0x264d44, Func Offset: 0x214
	// Line 1033, Address: 0x264d4c, Func Offset: 0x21c
	// Line 1050, Address: 0x264d58, Func Offset: 0x228
	// Line 1004, Address: 0x264d70, Func Offset: 0x240
	// Line 1006, Address: 0x264d78, Func Offset: 0x248
	// Line 1009, Address: 0x264d80, Func Offset: 0x250
	// Line 1011, Address: 0x264d88, Func Offset: 0x258
	// Line 1050, Address: 0x264d90, Func Offset: 0x260
	// Line 1034, Address: 0x264d98, Func Offset: 0x268
	// Line 1050, Address: 0x264da0, Func Offset: 0x270
	// Line 1034, Address: 0x264da8, Func Offset: 0x278
	// Line 1050, Address: 0x264de4, Func Offset: 0x2b4
	// Line 1034, Address: 0x264de8, Func Offset: 0x2b8
	// Line 1051, Address: 0x264df4, Func Offset: 0x2c4
	// Func End, Address: 0x264e10, Func Offset: 0x2e0
}

// MvptFirstFollow__10zNMEDenTooFv
// Start address: 0x264e10
zMovePoint* zNMEDenToo::MvptFirstFollow()
{
	zMovePoint* nav;
	// Line 973, Address: 0x264e10, Func Offset: 0
	// Line 976, Address: 0x264e20, Func Offset: 0x10
	// Line 979, Address: 0x264e30, Func Offset: 0x20
	// Line 983, Address: 0x264e38, Func Offset: 0x28
	// Func End, Address: 0x264e44, Func Offset: 0x34
}

// SelfSetup__10zNMEDenTooFv
// Start address: 0x264e50
void zNMEDenToo::SelfSetup()
{
	xBehaveMgr* bmgr;
	xPsyche* psy;
	// Line 940, Address: 0x264e50, Func Offset: 0
	// Line 942, Address: 0x264e5c, Func Offset: 0xc
	// Line 943, Address: 0x264e64, Func Offset: 0x14
	// Line 946, Address: 0x264e78, Func Offset: 0x28
	// Line 951, Address: 0x264e7c, Func Offset: 0x2c
	// Line 954, Address: 0x264e84, Func Offset: 0x34
	// Line 955, Address: 0x264e98, Func Offset: 0x48
	// Line 956, Address: 0x264eac, Func Offset: 0x5c
	// Line 957, Address: 0x264ec0, Func Offset: 0x70
	// Line 958, Address: 0x264ed4, Func Offset: 0x84
	// Line 959, Address: 0x264ee8, Func Offset: 0x98
	// Line 960, Address: 0x264efc, Func Offset: 0xac
	// Line 964, Address: 0x264f10, Func Offset: 0xc0
	// Line 967, Address: 0x264f18, Func Offset: 0xc8
	// Line 970, Address: 0x264f24, Func Offset: 0xd4
	// Func End, Address: 0x264f34, Func Offset: 0xe4
}

// DfltVulnFlags__10zNMEDenTooFv
// Start address: 0x264f40
int32 zNMEDenToo::DfltVulnFlags()
{
	// Line 893, Address: 0x264f40, Func Offset: 0
	// Line 894, Address: 0x264f44, Func Offset: 0x4
	// Func End, Address: 0x264f4c, Func Offset: 0xc
}

// update__11DenTooMeterFf
// Start address: 0x264f50
void DenTooMeter::update()
{
	// Line 875, Address: 0x264f50, Func Offset: 0
	// Func End, Address: 0x264f58, Func Offset: 0x8
}

// setup__11DenTooMeterFv
// Start address: 0x264f60
void DenTooMeter::setup()
{
	// Line 854, Address: 0x264f60, Func Offset: 0
	// Func End, Address: 0x264f68, Func Offset: 0x8
}

// __ct__11DenTooMeterFv
// Start address: 0x264f70
void* DenTooMeter::__ct()
{
	// Line 825, Address: 0x264f70, Func Offset: 0
	// Line 827, Address: 0x264fec, Func Offset: 0x7c
	// Line 829, Address: 0x264ff0, Func Offset: 0x80
	// Func End, Address: 0x265000, Func Offset: 0x90
}

// CreateConfig__10zNMEDenTooFPCc
// Start address: 0x265000
void zNMEDenToo::CreateConfig()
{
	// Line 614, Address: 0x265000, Func Offset: 0
	// Line 617, Address: 0x265018, Func Offset: 0x18
	// Line 626, Address: 0x265024, Func Offset: 0x24
	// Line 641, Address: 0x26502c, Func Offset: 0x2c
	// Func End, Address: 0x265034, Func Offset: 0x34
}

// ModulePrepUse__Q27Swimmer11zMODSwimmerFv
// Start address: 0x2a6c50
void ModulePrepUse()
{
	// Line 4356, Address: 0x2a6c50, Func Offset: 0
	// Func End, Address: 0x2a6c58, Func Offset: 0x8
}

