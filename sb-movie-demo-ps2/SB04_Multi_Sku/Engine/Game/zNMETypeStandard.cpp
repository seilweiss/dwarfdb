



int32 Enter(float32 dt);
int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
float32 CalcPlayerLean(zNMEStandard* npc, float32 dt);
void TowerOfPisa(zNMEStandard* npc, float32 dt);
int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
int32 Enter();
int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
int32 Enter();
void GlyphStart();
int32 GoalHandleMail(NMEMsg* msg);
int32 Process(en_trantype* trantype);
int32 Exit();
int32 Enter();
int32 PathParabola();
int32 UpdateAnim(float32 dt);
int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
int32 Exit();
int32 Enter();
void AbortAbort();
int32 GoalHandleMail(NMEMsg* msg);
int32 Enter();
void KickFromTheNest(zNMECommon* npc);
void RibbonUpdate(xVec3* pos_home, float32 ratio);
void CowCatcher(zNMECommon* npc);
float32 LaunchSpawnBall(zNMECommon* npc, xVec3* pos_launch);
int32 EmergeYeBeastie(zNMECommon* npc, float32 dt);
void CalcLaunchPoint(zNMECommon* npc, xVec3* pos_launch, int32 useDefault);
en_dupspit ExamineDuperAnim(zNMECommon* npc);
int32 PatienceMonitor(zNMECommon* npc, float32 dt);
int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
int32 Exit();
int32 Enter();
int32 GoalHandleMail(NMEMsg* mail);
int32 Enter();
void RibbonUpdate(zNMEStandard* npc);
void RibbonPrep();
void TakeItLikeAMan(zNMEStandard* npc);
int32 GoalHandleMail(NMEMsg* mail);
int32 InputInfo(NMEDamageInfo* dmgmail);
int32 InputInfoDflt();
int32 CollReview();
int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
int32 Exit();
int32 Enter();
void DazedFXUpdate();
void WoundedInput(en_npcgol gid, NMEDamageInfo* dmgmail);
int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
int32 Enter();
int32 Process(en_trantype* trantype, float32 dt);
int32 Enter();
int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
int32 Enter();
void SentryMoveSpline(zNMECommon* npc, float32 dt);
void SentryMoveNormal(zNMECommon* npc, float32 dt);
void DoOnArriveStuff(zNMECommon* npc);
void Sentry_Update(zNMEStandard* npc, float32 dt);
int32 SetCarryState(en_carystat stat);
void DuploOwner(zNMECommon* duper);
void Boo();
int32 IsVulnerable(en_npcdmg dmgtype);
void StdTyp_Process(float32 dt);
void DieTheGoodDeath();
void StdNME_SuicideIsPainless();
xAnimTable* CreateAnimTable(xAnimTable* table);
uint32 AnimPick();
zMovePoint* MvptFirstFollow();
void ScenePostInit();
void ScenePrepare();
int32 FormOfPain(int32 pup, int32 hitpoints);

// Enter__16zNMEGoalPatThrowFfPv
// Start address: 0x22b3f0
int32 zNMEGoalPatThrow::Enter(float32 dt)
{
	zNMEStandard* npc;
	// Line 5114, Address: 0x22b3f0, Func Offset: 0
	// Line 5124, Address: 0x22b3f4, Func Offset: 0x4
	// Line 5114, Address: 0x22b3f8, Func Offset: 0x8
	// Line 5124, Address: 0x22b3fc, Func Offset: 0xc
	// Line 5114, Address: 0x22b400, Func Offset: 0x10
	// Line 5124, Address: 0x22b404, Func Offset: 0x14
	// Line 5114, Address: 0x22b408, Func Offset: 0x18
	// Line 5124, Address: 0x22b40c, Func Offset: 0x1c
	// Line 5114, Address: 0x22b410, Func Offset: 0x20
	// Line 5124, Address: 0x22b414, Func Offset: 0x24
	// Line 5115, Address: 0x22b420, Func Offset: 0x30
	// Line 5124, Address: 0x22b424, Func Offset: 0x34
	// Line 5115, Address: 0x22b438, Func Offset: 0x48
	// Line 5124, Address: 0x22b43c, Func Offset: 0x4c
	// Line 5126, Address: 0x22b4e4, Func Offset: 0xf4
	// Line 5124, Address: 0x22b518, Func Offset: 0x128
	// Line 5126, Address: 0x22b530, Func Offset: 0x140
	// Line 5124, Address: 0x22b534, Func Offset: 0x144
	// Line 5126, Address: 0x22b538, Func Offset: 0x148
	// Line 5124, Address: 0x22b540, Func Offset: 0x150
	// Line 5126, Address: 0x22b544, Func Offset: 0x154
	// Line 5127, Address: 0x22b5a8, Func Offset: 0x1b8
	// Func End, Address: 0x22b5c0, Func Offset: 0x1d0
}

// Process__16zNMEGoalPatTwirlFP11en_trantypefPv
// Start address: 0x22b5c0
int32 zNMEGoalPatTwirl::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	// Line 5092, Address: 0x22b5c0, Func Offset: 0
	// Line 5105, Address: 0x22b5cc, Func Offset: 0xc
	// Line 5106, Address: 0x22b61c, Func Offset: 0x5c
	// Func End, Address: 0x22b62c, Func Offset: 0x6c
}

// CalcPlayerLean__16zNMEGoalPatCarryFP12zNMEStandardf
// Start address: 0x22b630
float32 zNMEGoalPatCarry::CalcPlayerLean(zNMEStandard* npc, float32 dt)
{
	float32 diffAngle;
	float32 desiredLean;
	float32 rat_oldLean;
	// Line 4979, Address: 0x22b630, Func Offset: 0
	// Line 4984, Address: 0x22b644, Func Offset: 0x14
	// Line 4987, Address: 0x22b670, Func Offset: 0x40
	// Line 4984, Address: 0x22b674, Func Offset: 0x44
	// Line 4988, Address: 0x22b678, Func Offset: 0x48
	// Line 4993, Address: 0x22b680, Func Offset: 0x50
	// Line 4992, Address: 0x22b68c, Func Offset: 0x5c
	// Line 4993, Address: 0x22b690, Func Offset: 0x60
	// Line 4995, Address: 0x22b69c, Func Offset: 0x6c
	// Line 4998, Address: 0x22b6b4, Func Offset: 0x84
	// Line 5003, Address: 0x22b6cc, Func Offset: 0x9c
	// Line 5004, Address: 0x22b6e0, Func Offset: 0xb0
	// Line 5007, Address: 0x22b6e4, Func Offset: 0xb4
	// Line 5010, Address: 0x22b6e8, Func Offset: 0xb8
	// Line 5007, Address: 0x22b6ec, Func Offset: 0xbc
	// Line 5017, Address: 0x22b6f0, Func Offset: 0xc0
	// Line 5007, Address: 0x22b6fc, Func Offset: 0xcc
	// Line 5010, Address: 0x22b700, Func Offset: 0xd0
	// Line 5017, Address: 0x22b704, Func Offset: 0xd4
	// Line 5010, Address: 0x22b708, Func Offset: 0xd8
	// Line 5017, Address: 0x22b710, Func Offset: 0xe0
	// Line 5015, Address: 0x22b71c, Func Offset: 0xec
	// Line 5017, Address: 0x22b720, Func Offset: 0xf0
	// Line 4994, Address: 0x22b728, Func Offset: 0xf8
	// Line 4996, Address: 0x22b734, Func Offset: 0x104
	// Line 5018, Address: 0x22b744, Func Offset: 0x114
	// Func End, Address: 0x22b75c, Func Offset: 0x12c
}

// TowerOfPisa__16zNMEGoalPatCarryFP12zNMEStandardf
// Start address: 0x22b760
void zNMEGoalPatCarry::TowerOfPisa(zNMEStandard* npc, float32 dt)
{
	float32 rat_lean;
	// Line 4889, Address: 0x22b760, Func Offset: 0
	// Line 4942, Address: 0x22b76c, Func Offset: 0xc
	// Line 4969, Address: 0x22b774, Func Offset: 0x14
	// Line 4972, Address: 0x22b784, Func Offset: 0x24
	// Func End, Address: 0x22b794, Func Offset: 0x34
}

// Process__16zNMEGoalPatCarryFP11en_trantypefPv
// Start address: 0x22b7a0
int32 zNMEGoalPatCarry::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	// Line 4854, Address: 0x22b7a0, Func Offset: 0
	// Line 4880, Address: 0x22b7c4, Func Offset: 0x24
	// Line 4883, Address: 0x22b7d4, Func Offset: 0x34
	// Line 4884, Address: 0x22b830, Func Offset: 0x90
	// Func End, Address: 0x22b84c, Func Offset: 0xac
}

// Enter__16zNMEGoalPatCarryFfPv
// Start address: 0x22b850
int32 zNMEGoalPatCarry::Enter()
{
	// Line 4836, Address: 0x22b850, Func Offset: 0
	// Line 4848, Address: 0x22b864, Func Offset: 0x14
	// Line 4850, Address: 0x22b890, Func Offset: 0x40
	// Line 4851, Address: 0x22b918, Func Offset: 0xc8
	// Func End, Address: 0x22b930, Func Offset: 0xe0
}

// Process__15zNMEGoalStunnedFP11en_trantypefPv
// Start address: 0x22b930
int32 zNMEGoalStunned::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	int32 nextgoal;
	zNMEStandard* npc;
	// Line 4786, Address: 0x22b930, Func Offset: 0
	// Line 4790, Address: 0x22b93c, Func Offset: 0xc
	// Line 4786, Address: 0x22b940, Func Offset: 0x10
	// Line 4790, Address: 0x22b944, Func Offset: 0x14
	// Line 4786, Address: 0x22b948, Func Offset: 0x18
	// Line 4787, Address: 0x22b94c, Func Offset: 0x1c
	// Line 4788, Address: 0x22b950, Func Offset: 0x20
	// Line 4790, Address: 0x22b95c, Func Offset: 0x2c
	// Line 4799, Address: 0x22b97c, Func Offset: 0x4c
	// Line 4806, Address: 0x22b9a4, Func Offset: 0x74
	// Line 4791, Address: 0x22b9fc, Func Offset: 0xcc
	// Line 4793, Address: 0x22ba00, Func Offset: 0xd0
	// Line 4791, Address: 0x22ba04, Func Offset: 0xd4
	// Line 4793, Address: 0x22ba08, Func Offset: 0xd8
	// Line 4792, Address: 0x22ba0c, Func Offset: 0xdc
	// Line 4806, Address: 0x22ba10, Func Offset: 0xe0
	// Line 4794, Address: 0x22ba28, Func Offset: 0xf8
	// Line 4806, Address: 0x22ba30, Func Offset: 0x100
	// Line 4807, Address: 0x22ba3c, Func Offset: 0x10c
	// Func End, Address: 0x22ba50, Func Offset: 0x120
}

// Enter__15zNMEGoalStunnedFfPv
// Start address: 0x22ba50
int32 zNMEGoalStunned::Enter()
{
	zNMEStandard* npc;
	// Line 4764, Address: 0x22ba50, Func Offset: 0
	// Line 4765, Address: 0x22ba64, Func Offset: 0x14
	// Line 4769, Address: 0x22ba68, Func Offset: 0x18
	// Line 4765, Address: 0x22ba6c, Func Offset: 0x1c
	// Line 4769, Address: 0x22ba70, Func Offset: 0x20
	// Line 4777, Address: 0x22ba7c, Func Offset: 0x2c
	// Line 4782, Address: 0x22ba84, Func Offset: 0x34
	// Line 4777, Address: 0x22ba88, Func Offset: 0x38
	// Line 4782, Address: 0x22ba8c, Func Offset: 0x3c
	// Line 4777, Address: 0x22ba94, Func Offset: 0x44
	// Line 4780, Address: 0x22baa0, Func Offset: 0x50
	// Line 4782, Address: 0x22baa4, Func Offset: 0x54
	// Line 4774, Address: 0x22bad4, Func Offset: 0x84
	// Line 4782, Address: 0x22badc, Func Offset: 0x8c
	// Line 4774, Address: 0x22bae4, Func Offset: 0x94
	// Line 4782, Address: 0x22bb48, Func Offset: 0xf8
	// Line 4783, Address: 0x22bb9c, Func Offset: 0x14c
	// Func End, Address: 0x22bbb4, Func Offset: 0x164
}

// GlyphStart__15zNMEGoalEvilPatFv
// Start address: 0x22bbc0
void zNMEGoalEvilPat::GlyphStart()
{
	zNMEStandard* npc;
	zNMEHazard* haz;
	xVec3 ang_delta;
	// Line 4682, Address: 0x22bbc0, Func Offset: 0
	// Line 4683, Address: 0x22bbd4, Func Offset: 0x14
	// Line 4686, Address: 0x22bbd8, Func Offset: 0x18
	// Line 4687, Address: 0x22bbe4, Func Offset: 0x24
	// Line 4690, Address: 0x22bbec, Func Offset: 0x2c
	// Line 4691, Address: 0x22bc28, Func Offset: 0x68
	// Line 4696, Address: 0x22bc30, Func Offset: 0x70
	// Line 4697, Address: 0x22bc7c, Func Offset: 0xbc
	// Line 4696, Address: 0x22bc80, Func Offset: 0xc0
	// Line 4697, Address: 0x22bcfc, Func Offset: 0x13c
	// Line 4699, Address: 0x22bd08, Func Offset: 0x148
	// Line 4710, Address: 0x22bd0c, Func Offset: 0x14c
	// Line 4697, Address: 0x22bd14, Func Offset: 0x154
	// Line 4699, Address: 0x22bd1c, Func Offset: 0x15c
	// Line 4700, Address: 0x22bd20, Func Offset: 0x160
	// Line 4701, Address: 0x22bd24, Func Offset: 0x164
	// Line 4704, Address: 0x22bd28, Func Offset: 0x168
	// Line 4710, Address: 0x22bd2c, Func Offset: 0x16c
	// Line 4712, Address: 0x22bd88, Func Offset: 0x1c8
	// Line 4690, Address: 0x22bd94, Func Offset: 0x1d4
	// Line 4712, Address: 0x22bda4, Func Offset: 0x1e4
	// Line 4690, Address: 0x22bdac, Func Offset: 0x1ec
	// Line 4712, Address: 0x22bdb8, Func Offset: 0x1f8
	// Line 4692, Address: 0x22bdbc, Func Offset: 0x1fc
	// Line 4712, Address: 0x22bdc0, Func Offset: 0x200
	// Line 4713, Address: 0x22bdc4, Func Offset: 0x204
	// Func End, Address: 0x22bddc, Func Offset: 0x21c
}

// GoalHandleMail__15zNMEGoalEvilPatFP6NMEMsg
// Start address: 0x22bde0
int32 zNMEGoalEvilPat::GoalHandleMail(NMEMsg* msg)
{
	int32 handled;
	zNMEStandard* npc;
	// Line 4627, Address: 0x22bde0, Func Offset: 0
	// Line 4631, Address: 0x22bde4, Func Offset: 0x4
	// Line 4627, Address: 0x22bde8, Func Offset: 0x8
	// Line 4629, Address: 0x22bdf4, Func Offset: 0x14
	// Line 4631, Address: 0x22bdf8, Func Offset: 0x18
	// Line 4629, Address: 0x22bdfc, Func Offset: 0x1c
	// Line 4631, Address: 0x22be00, Func Offset: 0x20
	// Line 4639, Address: 0x22be08, Func Offset: 0x28
	// Line 4643, Address: 0x22be0c, Func Offset: 0x2c
	// Line 4635, Address: 0x22be1c, Func Offset: 0x3c
	// Line 4643, Address: 0x22be24, Func Offset: 0x44
	// Line 4635, Address: 0x22be2c, Func Offset: 0x4c
	// Line 4636, Address: 0x22be60, Func Offset: 0x80
	// Line 4635, Address: 0x22be64, Func Offset: 0x84
	// Line 4637, Address: 0x22be88, Func Offset: 0xa8
	// Line 4644, Address: 0x22be90, Func Offset: 0xb0
	// Func End, Address: 0x22bea0, Func Offset: 0xc0
}

// Process__15zNMEGoalEvilPatFP11en_trantypefPv
// Start address: 0x22bea0
int32 zNMEGoalEvilPat::Process(en_trantype* trantype)
{
	int32 nextgoal;
	zNMEStandard* npc;
	// Line 4587, Address: 0x22bea0, Func Offset: 0
	// Line 4591, Address: 0x22beac, Func Offset: 0xc
	// Line 4587, Address: 0x22beb0, Func Offset: 0x10
	// Line 4588, Address: 0x22beb4, Func Offset: 0x14
	// Line 4589, Address: 0x22beb8, Func Offset: 0x18
	// Line 4591, Address: 0x22bec0, Func Offset: 0x20
	// Line 4592, Address: 0x22bee0, Func Offset: 0x40
	// Line 4594, Address: 0x22bee4, Func Offset: 0x44
	// Line 4592, Address: 0x22bee8, Func Offset: 0x48
	// Line 4594, Address: 0x22beec, Func Offset: 0x4c
	// Line 4593, Address: 0x22bef0, Func Offset: 0x50
	// Line 4592, Address: 0x22bef4, Func Offset: 0x54
	// Line 4593, Address: 0x22bef8, Func Offset: 0x58
	// Line 4594, Address: 0x22befc, Func Offset: 0x5c
	// Line 4595, Address: 0x22bf0c, Func Offset: 0x6c
	// Line 4596, Address: 0x22bf1c, Func Offset: 0x7c
	// Line 4599, Address: 0x22bf24, Func Offset: 0x84
	// Line 4601, Address: 0x22bf28, Func Offset: 0x88
	// Line 4599, Address: 0x22bf2c, Func Offset: 0x8c
	// Line 4601, Address: 0x22bf30, Func Offset: 0x90
	// Line 4600, Address: 0x22bf34, Func Offset: 0x94
	// Line 4599, Address: 0x22bf38, Func Offset: 0x98
	// Line 4600, Address: 0x22bf3c, Func Offset: 0x9c
	// Line 4601, Address: 0x22bf40, Func Offset: 0xa0
	// Line 4602, Address: 0x22bf50, Func Offset: 0xb0
	// Line 4608, Address: 0x22bf54, Func Offset: 0xb4
	// Func End, Address: 0x22bf64, Func Offset: 0xc4
}

// Exit__15zNMEGoalEvilPatFfPv
// Start address: 0x22bf70
int32 zNMEGoalEvilPat::Exit()
{
	// Line 4580, Address: 0x22bf70, Func Offset: 0
	// Line 4581, Address: 0x22bf80, Func Offset: 0x10
	// Line 4583, Address: 0x22bfa4, Func Offset: 0x34
	// Line 4584, Address: 0x22bfa8, Func Offset: 0x38
	// Func End, Address: 0x22bfb0, Func Offset: 0x40
}

// Enter__15zNMEGoalEvilPatFfPv
// Start address: 0x22bfb0
int32 zNMEGoalEvilPat::Enter()
{
	// Line 4570, Address: 0x22bfb0, Func Offset: 0
	// Line 4572, Address: 0x22bfc4, Func Offset: 0x14
	// Line 4573, Address: 0x22bfcc, Func Offset: 0x1c
	// Line 4574, Address: 0x22c054, Func Offset: 0xa4
	// Func End, Address: 0x22c06c, Func Offset: 0xbc
}

// PathParabola__13zNMEGoalScareFf
// Start address: 0x22c070
int32 zNMEGoalScare::PathParabola()
{
	zNMEStandard* npc;
	int32 arrived;
	float32 tym_ingoal;
	xVec3 pos;
	xVec3 vel;
	xMat3x3 mat_rot;
	float32 mag;
	xVec3 dir;
	// Line 4474, Address: 0x22c070, Func Offset: 0
	// Line 4485, Address: 0x22c074, Func Offset: 0x4
	// Line 4474, Address: 0x22c078, Func Offset: 0x8
	// Line 4475, Address: 0x22c090, Func Offset: 0x20
	// Line 4485, Address: 0x22c094, Func Offset: 0x24
	// Line 4486, Address: 0x22c0a8, Func Offset: 0x38
	// Line 4487, Address: 0x22c0b4, Func Offset: 0x44
	// Line 4491, Address: 0x22c0b8, Func Offset: 0x48
	// Line 4498, Address: 0x22c114, Func Offset: 0xa4
	// Line 4502, Address: 0x22c11c, Func Offset: 0xac
	// Line 4498, Address: 0x22c120, Func Offset: 0xb0
	// Line 4502, Address: 0x22c124, Func Offset: 0xb4
	// Line 4498, Address: 0x22c12c, Func Offset: 0xbc
	// Line 4508, Address: 0x22c130, Func Offset: 0xc0
	// Line 4498, Address: 0x22c134, Func Offset: 0xc4
	// Line 4508, Address: 0x22c138, Func Offset: 0xc8
	// Line 4499, Address: 0x22c13c, Func Offset: 0xcc
	// Line 4506, Address: 0x22c140, Func Offset: 0xd0
	// Line 4498, Address: 0x22c144, Func Offset: 0xd4
	// Line 4508, Address: 0x22c14c, Func Offset: 0xdc
	// Line 4498, Address: 0x22c150, Func Offset: 0xe0
	// Line 4502, Address: 0x22c158, Func Offset: 0xe8
	// Line 4498, Address: 0x22c15c, Func Offset: 0xec
	// Line 4499, Address: 0x22c16c, Func Offset: 0xfc
	// Line 4498, Address: 0x22c174, Func Offset: 0x104
	// Line 4502, Address: 0x22c188, Func Offset: 0x118
	// Line 4498, Address: 0x22c194, Func Offset: 0x124
	// Line 4502, Address: 0x22c19c, Func Offset: 0x12c
	// Line 4498, Address: 0x22c1a0, Func Offset: 0x130
	// Line 4507, Address: 0x22c1b4, Func Offset: 0x144
	// Line 4498, Address: 0x22c1b8, Func Offset: 0x148
	// Line 4502, Address: 0x22c1bc, Func Offset: 0x14c
	// Line 4498, Address: 0x22c1c0, Func Offset: 0x150
	// Line 4502, Address: 0x22c1c4, Func Offset: 0x154
	// Line 4508, Address: 0x22c1c8, Func Offset: 0x158
	// Line 4502, Address: 0x22c1cc, Func Offset: 0x15c
	// Line 4508, Address: 0x22c1d8, Func Offset: 0x168
	// Line 4510, Address: 0x22c1e0, Func Offset: 0x170
	// Line 4511, Address: 0x22c210, Func Offset: 0x1a0
	// Line 4510, Address: 0x22c214, Func Offset: 0x1a4
	// Line 4511, Address: 0x22c26c, Func Offset: 0x1fc
	// Line 4512, Address: 0x22c274, Func Offset: 0x204
	// Line 4515, Address: 0x22c298, Func Offset: 0x228
	// Line 4516, Address: 0x22c29c, Func Offset: 0x22c
	// Func End, Address: 0x22c2b4, Func Offset: 0x244
}

// UpdateAnim__13zNMEGoalScareFf
// Start address: 0x22c2c0
int32 zNMEGoalScare::UpdateAnim(float32 dt)
{
	zNMEStandard* npc;
	float32 tym_ingoal;
	uint32 anid_loop;
	uint32 anid_done;
	// Line 4425, Address: 0x22c2c0, Func Offset: 0
	// Line 4428, Address: 0x22c2c4, Func Offset: 0x4
	// Line 4425, Address: 0x22c2c8, Func Offset: 0x8
	// Line 4426, Address: 0x22c2e4, Func Offset: 0x24
	// Line 4428, Address: 0x22c2e8, Func Offset: 0x28
	// Line 4432, Address: 0x22c2f0, Func Offset: 0x30
	// Line 4428, Address: 0x22c2f4, Func Offset: 0x34
	// Line 4432, Address: 0x22c2f8, Func Offset: 0x38
	// Line 4433, Address: 0x22c310, Func Offset: 0x50
	// Line 4435, Address: 0x22c318, Func Offset: 0x58
	// Line 4436, Address: 0x22c334, Func Offset: 0x74
	// Line 4438, Address: 0x22c340, Func Offset: 0x80
	// Line 4440, Address: 0x22c358, Func Offset: 0x98
	// Line 4441, Address: 0x22c378, Func Offset: 0xb8
	// Line 4444, Address: 0x22c39c, Func Offset: 0xdc
	// Line 4452, Address: 0x22c3b0, Func Offset: 0xf0
	// Line 4454, Address: 0x22c3bc, Func Offset: 0xfc
	// Line 4455, Address: 0x22c3e4, Func Offset: 0x124
	// Line 4459, Address: 0x22c3ec, Func Offset: 0x12c
	// Line 4452, Address: 0x22c410, Func Offset: 0x150
	// Line 4460, Address: 0x22c418, Func Offset: 0x158
	// Func End, Address: 0x22c434, Func Offset: 0x174
}

// Process__13zNMEGoalScareFP11en_trantypefPv
// Start address: 0x22c440
int32 zNMEGoalScare::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	int32 animsComplete;
	int32 nextgoal;
	// Line 4366, Address: 0x22c440, Func Offset: 0
	// Line 4367, Address: 0x22c444, Func Offset: 0x4
	// Line 4366, Address: 0x22c448, Func Offset: 0x8
	// Line 4367, Address: 0x22c46c, Func Offset: 0x2c
	// Line 4369, Address: 0x22c494, Func Offset: 0x54
	// Line 4370, Address: 0x22c4a0, Func Offset: 0x60
	// Line 4372, Address: 0x22c4ec, Func Offset: 0xac
	// Line 4375, Address: 0x22c4fc, Func Offset: 0xbc
	// Line 4374, Address: 0x22c500, Func Offset: 0xc0
	// Line 4377, Address: 0x22c504, Func Offset: 0xc4
	// Line 4374, Address: 0x22c508, Func Offset: 0xc8
	// Line 4377, Address: 0x22c50c, Func Offset: 0xcc
	// Line 4375, Address: 0x22c510, Func Offset: 0xd0
	// Line 4377, Address: 0x22c514, Func Offset: 0xd4
	// Line 4378, Address: 0x22c52c, Func Offset: 0xec
	// Line 4381, Address: 0x22c534, Func Offset: 0xf4
	// Line 4382, Address: 0x22c5c4, Func Offset: 0x184
	// Func End, Address: 0x22c5e4, Func Offset: 0x1a4
}

// Exit__13zNMEGoalScareFfPv
// Start address: 0x22c5f0
int32 zNMEGoalScare::Exit()
{
	zNMEStandard* npc;
	// Line 4351, Address: 0x22c5f0, Func Offset: 0
	// Line 4352, Address: 0x22c600, Func Offset: 0x10
	// Line 4354, Address: 0x22c60c, Func Offset: 0x1c
	// Line 4355, Address: 0x22c614, Func Offset: 0x24
	// Line 4356, Address: 0x22c648, Func Offset: 0x58
	// Line 4360, Address: 0x22c64c, Func Offset: 0x5c
	// Line 4362, Address: 0x22c6b8, Func Offset: 0xc8
	// Line 4363, Address: 0x22c6fc, Func Offset: 0x10c
	// Func End, Address: 0x22c710, Func Offset: 0x120
}

// Enter__13zNMEGoalScareFfPv
// Start address: 0x22c710
int32 zNMEGoalScare::Enter()
{
	zNMEStandard* npc;
	// Line 4325, Address: 0x22c710, Func Offset: 0
	// Line 4326, Address: 0x22c724, Func Offset: 0x14
	// Line 4329, Address: 0x22c72c, Func Offset: 0x1c
	// Line 4330, Address: 0x22c730, Func Offset: 0x20
	// Line 4333, Address: 0x22c738, Func Offset: 0x28
	// Line 4343, Address: 0x22c744, Func Offset: 0x34
	// Line 4344, Address: 0x22c7bc, Func Offset: 0xac
	// Line 4345, Address: 0x22c7c4, Func Offset: 0xb4
	// Line 4347, Address: 0x22c8d0, Func Offset: 0x1c0
	// Line 4348, Address: 0x22cae0, Func Offset: 0x3d0
	// Func End, Address: 0x22caf8, Func Offset: 0x3e8
}

// AbortAbort__17zNMEGoalScareWaitFv
// Start address: 0x22cb00
void zNMEGoalScareWait::AbortAbort()
{
	zNMECommon* npc;
	xVec3 pos_dest;
	int32 nextgoal;
	en_trantype trantype;
	// Line 4277, Address: 0x22cb00, Func Offset: 0
	// Line 4278, Address: 0x22cb14, Func Offset: 0x14
	// Line 4282, Address: 0x22cb20, Func Offset: 0x20
	// Line 4288, Address: 0x22cb34, Func Offset: 0x34
	// Line 4290, Address: 0x22cb70, Func Offset: 0x70
	// Line 4293, Address: 0x22cb74, Func Offset: 0x74
	// Line 4295, Address: 0x22cb7c, Func Offset: 0x7c
	// Line 4290, Address: 0x22cb80, Func Offset: 0x80
	// Line 4294, Address: 0x22cb84, Func Offset: 0x84
	// Line 4290, Address: 0x22cb88, Func Offset: 0x88
	// Line 4295, Address: 0x22cb8c, Func Offset: 0x8c
	// Line 4290, Address: 0x22cb90, Func Offset: 0x90
	// Line 4295, Address: 0x22cb94, Func Offset: 0x94
	// Line 4290, Address: 0x22cb98, Func Offset: 0x98
	// Line 4293, Address: 0x22cbb8, Func Offset: 0xb8
	// Line 4294, Address: 0x22cbbc, Func Offset: 0xbc
	// Line 4295, Address: 0x22cbc0, Func Offset: 0xc0
	// Line 4300, Address: 0x22cbd0, Func Offset: 0xd0
	// Line 4306, Address: 0x22cbe4, Func Offset: 0xe4
	// Line 4307, Address: 0x22cbec, Func Offset: 0xec
	// Line 4310, Address: 0x22cc00, Func Offset: 0x100
	// Line 4285, Address: 0x22cc24, Func Offset: 0x124
	// Line 4311, Address: 0x22cc2c, Func Offset: 0x12c
	// Func End, Address: 0x22cc44, Func Offset: 0x144
}

// GoalHandleMail__17zNMEGoalScareWaitFP6NMEMsg
// Start address: 0x22cc50
int32 zNMEGoalScareWait::GoalHandleMail(NMEMsg* msg)
{
	int32 handled;
	// Line 4233, Address: 0x22cc50, Func Offset: 0
	// Line 4237, Address: 0x22cc54, Func Offset: 0x4
	// Line 4233, Address: 0x22cc58, Func Offset: 0x8
	// Line 4234, Address: 0x22cc5c, Func Offset: 0xc
	// Line 4233, Address: 0x22cc60, Func Offset: 0x10
	// Line 4237, Address: 0x22cc64, Func Offset: 0x14
	// Line 4242, Address: 0x22cc7c, Func Offset: 0x2c
	// Line 4246, Address: 0x22cc88, Func Offset: 0x38
	// Line 4247, Address: 0x22cc94, Func Offset: 0x44
	// Line 4248, Address: 0x22cccc, Func Offset: 0x7c
	// Line 4257, Address: 0x22ccd0, Func Offset: 0x80
	// Line 4245, Address: 0x22cce0, Func Offset: 0x90
	// Line 4258, Address: 0x22ccf0, Func Offset: 0xa0
	// Func End, Address: 0x22cd00, Func Offset: 0xb0
}

// Enter__17zNMEGoalScareWaitFfPv
// Start address: 0x22cd00
int32 zNMEGoalScareWait::Enter()
{
	zNMEStandard* npc;
	// Line 4213, Address: 0x22cd00, Func Offset: 0
	// Line 4218, Address: 0x22cd04, Func Offset: 0x4
	// Line 4213, Address: 0x22cd08, Func Offset: 0x8
	// Line 4214, Address: 0x22cd18, Func Offset: 0x18
	// Line 4215, Address: 0x22cd20, Func Offset: 0x20
	// Line 4218, Address: 0x22cd54, Func Offset: 0x54
	// Line 4221, Address: 0x22cd5c, Func Offset: 0x5c
	// Line 4222, Address: 0x22cd64, Func Offset: 0x64
	// Line 4225, Address: 0x22cda0, Func Offset: 0xa0
	// Line 4227, Address: 0x22ce90, Func Offset: 0x190
	// Line 4229, Address: 0x22ce94, Func Offset: 0x194
	// Line 4225, Address: 0x22cea4, Func Offset: 0x1a4
	// Line 4229, Address: 0x22cea8, Func Offset: 0x1a8
	// Line 4225, Address: 0x22ceac, Func Offset: 0x1ac
	// Line 4229, Address: 0x22ceb0, Func Offset: 0x1b0
	// Line 4225, Address: 0x22cec4, Func Offset: 0x1c4
	// Line 4229, Address: 0x22cec8, Func Offset: 0x1c8
	// Line 4225, Address: 0x22ced0, Func Offset: 0x1d0
	// Line 4229, Address: 0x22ced8, Func Offset: 0x1d8
	// Line 4225, Address: 0x22cee8, Func Offset: 0x1e8
	// Line 4230, Address: 0x22cef8, Func Offset: 0x1f8
	// Func End, Address: 0x22cf10, Func Offset: 0x210
}

// KickFromTheNest__16zNMEGoalSpawningFP10zNMECommon
// Start address: 0x22cf10
void zNMEGoalSpawning::KickFromTheNest(zNMECommon* npc)
{
	en_allow allowDetect;
	en_allow allowAttack;
	zNMEGoalAfterlife* wanna;
	int32 nextgoal;
	en_trantype trantype;
	// Line 4066, Address: 0x22cf10, Func Offset: 0
	// Line 4071, Address: 0x22cf30, Func Offset: 0x20
	// Line 4067, Address: 0x22cf34, Func Offset: 0x24
	// Line 4068, Address: 0x22cf38, Func Offset: 0x28
	// Line 4071, Address: 0x22cf3c, Func Offset: 0x2c
	// Line 4074, Address: 0x22cf48, Func Offset: 0x38
	// Line 4078, Address: 0x22cf70, Func Offset: 0x60
	// Line 4079, Address: 0x22cf80, Func Offset: 0x70
	// Line 4080, Address: 0x22cf88, Func Offset: 0x78
	// Line 4084, Address: 0x22cf8c, Func Offset: 0x7c
	// Line 4089, Address: 0x22cfc0, Func Offset: 0xb0
	// Line 4090, Address: 0x22cfc8, Func Offset: 0xb8
	// Line 4091, Address: 0x22cfd0, Func Offset: 0xc0
	// Line 4092, Address: 0x22cfdc, Func Offset: 0xcc
	// Line 4093, Address: 0x22cfe8, Func Offset: 0xd8
	// Line 4095, Address: 0x22cff4, Func Offset: 0xe4
	// Line 4096, Address: 0x22cff8, Func Offset: 0xe8
	// Line 4100, Address: 0x22cffc, Func Offset: 0xec
	// Line 4133, Address: 0x22d008, Func Offset: 0xf8
	// Line 4101, Address: 0x22d010, Func Offset: 0x100
	// Line 4103, Address: 0x22d014, Func Offset: 0x104
	// Line 4101, Address: 0x22d018, Func Offset: 0x108
	// Line 4103, Address: 0x22d01c, Func Offset: 0x10c
	// Line 4102, Address: 0x22d020, Func Offset: 0x110
	// Line 4133, Address: 0x22d024, Func Offset: 0x114
	// Line 4134, Address: 0x22d058, Func Offset: 0x148
	// Func End, Address: 0x22d070, Func Offset: 0x160
}

// RibbonUpdate__16zNMEGoalSpawningFP5xVec3f
// Start address: 0x22d310
void zNMEGoalSpawning::RibbonUpdate(xVec3* pos_home, float32 ratio)
{
	RibData* ribhelp;
	float32 rad;
	float32 rat;
	float32 rat;
	float32 ang;
	xVec3 orient;
	xVec3 pos_emit;
	// Line 3926, Address: 0x22d310, Func Offset: 0
	// Line 3927, Address: 0x22d348, Func Offset: 0x38
	// Line 3930, Address: 0x22d354, Func Offset: 0x44
	// Line 3931, Address: 0x22d38c, Func Offset: 0x7c
	// Line 3932, Address: 0x22d3a0, Func Offset: 0x90
	// Line 3935, Address: 0x22d3a8, Func Offset: 0x98
	// Line 3934, Address: 0x22d3ac, Func Offset: 0x9c
	// Line 3935, Address: 0x22d3b0, Func Offset: 0xa0
	// Line 3938, Address: 0x22d3b8, Func Offset: 0xa8
	// Line 3935, Address: 0x22d3bc, Func Offset: 0xac
	// Line 3938, Address: 0x22d3c8, Func Offset: 0xb8
	// Line 3940, Address: 0x22d3d4, Func Offset: 0xc4
	// Line 3947, Address: 0x22d468, Func Offset: 0x158
	// Line 3948, Address: 0x22d480, Func Offset: 0x170
	// Line 3949, Address: 0x22d494, Func Offset: 0x184
	// Line 3950, Address: 0x22d4bc, Func Offset: 0x1ac
	// Line 3952, Address: 0x22d4c4, Func Offset: 0x1b4
	// Line 3953, Address: 0x22d4d0, Func Offset: 0x1c0
	// Line 3952, Address: 0x22d4d4, Func Offset: 0x1c4
	// Line 3953, Address: 0x22d4e0, Func Offset: 0x1d0
	// Line 3958, Address: 0x22d504, Func Offset: 0x1f4
	// Line 3959, Address: 0x22d514, Func Offset: 0x204
	// Line 3960, Address: 0x22d538, Func Offset: 0x228
	// Line 3961, Address: 0x22d540, Func Offset: 0x230
	// Line 3962, Address: 0x22d54c, Func Offset: 0x23c
	// Line 3961, Address: 0x22d550, Func Offset: 0x240
	// Line 3962, Address: 0x22d554, Func Offset: 0x244
	// Line 3961, Address: 0x22d55c, Func Offset: 0x24c
	// Line 3969, Address: 0x22d560, Func Offset: 0x250
	// Line 3962, Address: 0x22d564, Func Offset: 0x254
	// Line 3969, Address: 0x22d574, Func Offset: 0x264
	// Line 3962, Address: 0x22d578, Func Offset: 0x268
	// Line 3964, Address: 0x22d5a8, Func Offset: 0x298
	// Line 3969, Address: 0x22d5b4, Func Offset: 0x2a4
	// Line 3962, Address: 0x22d5bc, Func Offset: 0x2ac
	// Line 3969, Address: 0x22d5c0, Func Offset: 0x2b0
	// Line 3962, Address: 0x22d5c4, Func Offset: 0x2b4
	// Line 3964, Address: 0x22d5d0, Func Offset: 0x2c0
	// Line 3962, Address: 0x22d5d4, Func Offset: 0x2c4
	// Line 3964, Address: 0x22d5ec, Func Offset: 0x2dc
	// Line 3962, Address: 0x22d5f0, Func Offset: 0x2e0
	// Line 3964, Address: 0x22d61c, Func Offset: 0x30c
	// Line 3962, Address: 0x22d620, Func Offset: 0x310
	// Line 3964, Address: 0x22d628, Func Offset: 0x318
	// Line 3962, Address: 0x22d62c, Func Offset: 0x31c
	// Line 3964, Address: 0x22d648, Func Offset: 0x338
	// Line 3962, Address: 0x22d650, Func Offset: 0x340
	// Line 3969, Address: 0x22d66c, Func Offset: 0x35c
	// Line 3962, Address: 0x22d670, Func Offset: 0x360
	// Line 3969, Address: 0x22d674, Func Offset: 0x364
	// Line 3962, Address: 0x22d678, Func Offset: 0x368
	// Line 3969, Address: 0x22d68c, Func Offset: 0x37c
	// Line 3962, Address: 0x22d690, Func Offset: 0x380
	// Line 3964, Address: 0x22d698, Func Offset: 0x388
	// Line 3962, Address: 0x22d69c, Func Offset: 0x38c
	// Line 3964, Address: 0x22d6a4, Func Offset: 0x394
	// Line 3962, Address: 0x22d6a8, Func Offset: 0x398
	// Line 3964, Address: 0x22d6f4, Func Offset: 0x3e4
	// Line 3962, Address: 0x22d6f8, Func Offset: 0x3e8
	// Line 3964, Address: 0x22d6fc, Func Offset: 0x3ec
	// Line 3962, Address: 0x22d704, Func Offset: 0x3f4
	// Line 3964, Address: 0x22d710, Func Offset: 0x400
	// Line 3962, Address: 0x22d720, Func Offset: 0x410
	// Line 3964, Address: 0x22d728, Func Offset: 0x418
	// Line 3969, Address: 0x22d7b0, Func Offset: 0x4a0
	// Line 3971, Address: 0x22d7bc, Func Offset: 0x4ac
	// Line 3940, Address: 0x22d7d4, Func Offset: 0x4c4
	// Line 3971, Address: 0x22d7e8, Func Offset: 0x4d8
	// Line 3940, Address: 0x22d7ec, Func Offset: 0x4dc
	// Line 3971, Address: 0x22d7f0, Func Offset: 0x4e0
	// Line 3940, Address: 0x22d7f4, Func Offset: 0x4e4
	// Line 3972, Address: 0x22d800, Func Offset: 0x4f0
	// Func End, Address: 0x22d834, Func Offset: 0x524
}

// CowCatcher__16zNMEGoalSpawningFP10zNMECommonf
// Start address: 0x22d840
void zNMEGoalSpawning::CowCatcher(zNMECommon* npc)
{
	float32 fac;
	xBound bnd;
	xCollis* colrec;
	// Line 3825, Address: 0x22d840, Func Offset: 0
	// Line 3827, Address: 0x22d844, Func Offset: 0x4
	// Line 3825, Address: 0x22d848, Func Offset: 0x8
	// Line 3827, Address: 0x22d84c, Func Offset: 0xc
	// Line 3825, Address: 0x22d850, Func Offset: 0x10
	// Line 3828, Address: 0x22d854, Func Offset: 0x14
	// Line 3825, Address: 0x22d858, Func Offset: 0x18
	// Line 3827, Address: 0x22d85c, Func Offset: 0x1c
	// Line 3825, Address: 0x22d860, Func Offset: 0x20
	// Line 3828, Address: 0x22d864, Func Offset: 0x24
	// Line 3825, Address: 0x22d868, Func Offset: 0x28
	// Line 3827, Address: 0x22d878, Func Offset: 0x38
	// Line 3828, Address: 0x22d888, Func Offset: 0x48
	// Line 3835, Address: 0x22d8d8, Func Offset: 0x98
	// Line 3836, Address: 0x22d8e8, Func Offset: 0xa8
	// Line 3838, Address: 0x22d8ec, Func Offset: 0xac
	// Line 3836, Address: 0x22d8f4, Func Offset: 0xb4
	// Line 3838, Address: 0x22d8f8, Func Offset: 0xb8
	// Line 3841, Address: 0x22d904, Func Offset: 0xc4
	// Line 3838, Address: 0x22d908, Func Offset: 0xc8
	// Line 3841, Address: 0x22d90c, Func Offset: 0xcc
	// Line 3838, Address: 0x22d910, Func Offset: 0xd0
	// Line 3841, Address: 0x22d91c, Func Offset: 0xdc
	// Line 3838, Address: 0x22d920, Func Offset: 0xe0
	// Line 3841, Address: 0x22d924, Func Offset: 0xe4
	// Line 3846, Address: 0x22d928, Func Offset: 0xe8
	// Line 3841, Address: 0x22d92c, Func Offset: 0xec
	// Line 3843, Address: 0x22d938, Func Offset: 0xf8
	// Line 3846, Address: 0x22d950, Func Offset: 0x110
	// Line 3847, Address: 0x22d988, Func Offset: 0x148
	// Line 3873, Address: 0x22d99c, Func Offset: 0x15c
	// Line 3846, Address: 0x22d9a8, Func Offset: 0x168
	// Line 3873, Address: 0x22d9b0, Func Offset: 0x170
	// Line 3851, Address: 0x22d9c4, Func Offset: 0x184
	// Line 3873, Address: 0x22d9d0, Func Offset: 0x190
	// Line 3860, Address: 0x22d9dc, Func Offset: 0x19c
	// Line 3873, Address: 0x22d9e0, Func Offset: 0x1a0
	// Line 3857, Address: 0x22d9e4, Func Offset: 0x1a4
	// Line 3873, Address: 0x22d9e8, Func Offset: 0x1a8
	// Line 3860, Address: 0x22d9ec, Func Offset: 0x1ac
	// Line 3873, Address: 0x22d9f0, Func Offset: 0x1b0
	// Line 3860, Address: 0x22d9f4, Func Offset: 0x1b4
	// Line 3873, Address: 0x22d9f8, Func Offset: 0x1b8
	// Line 3860, Address: 0x22d9fc, Func Offset: 0x1bc
	// Line 3873, Address: 0x22da00, Func Offset: 0x1c0
	// Line 3861, Address: 0x22da0c, Func Offset: 0x1cc
	// Line 3873, Address: 0x22da10, Func Offset: 0x1d0
	// Line 3861, Address: 0x22da14, Func Offset: 0x1d4
	// Line 3873, Address: 0x22da18, Func Offset: 0x1d8
	// Line 3861, Address: 0x22da20, Func Offset: 0x1e0
	// Line 3873, Address: 0x22da24, Func Offset: 0x1e4
	// Line 3861, Address: 0x22da2c, Func Offset: 0x1ec
	// Line 3874, Address: 0x22da38, Func Offset: 0x1f8
	// Func End, Address: 0x22da54, Func Offset: 0x214
}

// LaunchSpawnBall__16zNMEGoalSpawningFP10zNMECommonP5xVec3
// Start address: 0x22da60
float32 zNMEGoalSpawning::LaunchSpawnBall(zNMECommon* npc, xVec3* pos_launch)
{
	zNMEHazard* haz;
	xVec3 pos_tgt;
	xVec3 vec_diff;
	float32 spd_flight;
	float32 tym_flight;
	// Line 3760, Address: 0x22da60, Func Offset: 0
	// Line 3764, Address: 0x22da88, Func Offset: 0x28
	// Line 3765, Address: 0x22da94, Func Offset: 0x34
	// Line 3768, Address: 0x22da9c, Func Offset: 0x3c
	// Line 3770, Address: 0x22daf0, Func Offset: 0x90
	// Line 3771, Address: 0x22db28, Func Offset: 0xc8
	// Line 3772, Address: 0x22db30, Func Offset: 0xd0
	// Line 3773, Address: 0x22dba4, Func Offset: 0x144
	// Line 3766, Address: 0x22dbb4, Func Offset: 0x154
	// Line 3768, Address: 0x22dbc4, Func Offset: 0x164
	// Line 3773, Address: 0x22dbcc, Func Offset: 0x16c
	// Line 3770, Address: 0x22dbd0, Func Offset: 0x170
	// Line 3773, Address: 0x22dbe0, Func Offset: 0x180
	// Line 3770, Address: 0x22dbe8, Func Offset: 0x188
	// Line 3777, Address: 0x22dbf4, Func Offset: 0x194
	// Line 3784, Address: 0x22dbf8, Func Offset: 0x198
	// Line 3780, Address: 0x22dbfc, Func Offset: 0x19c
	// Line 3781, Address: 0x22dc00, Func Offset: 0x1a0
	// Line 3780, Address: 0x22dc04, Func Offset: 0x1a4
	// Line 3781, Address: 0x22dc10, Func Offset: 0x1b0
	// Line 3784, Address: 0x22dc14, Func Offset: 0x1b4
	// Line 3781, Address: 0x22dc18, Func Offset: 0x1b8
	// Line 3787, Address: 0x22dc20, Func Offset: 0x1c0
	// Line 3781, Address: 0x22dc24, Func Offset: 0x1c4
	// Line 3780, Address: 0x22dc28, Func Offset: 0x1c8
	// Line 3781, Address: 0x22dc2c, Func Offset: 0x1cc
	// Line 3780, Address: 0x22dc34, Func Offset: 0x1d4
	// Line 3781, Address: 0x22dc38, Func Offset: 0x1d8
	// Line 3787, Address: 0x22dc40, Func Offset: 0x1e0
	// Line 3781, Address: 0x22dc44, Func Offset: 0x1e4
	// Line 3780, Address: 0x22dc50, Func Offset: 0x1f0
	// Line 3783, Address: 0x22dc54, Func Offset: 0x1f4
	// Line 3781, Address: 0x22dc5c, Func Offset: 0x1fc
	// Line 3783, Address: 0x22dcb0, Func Offset: 0x250
	// Line 3784, Address: 0x22dcc8, Func Offset: 0x268
	// Line 3787, Address: 0x22dcd4, Func Offset: 0x274
	// Line 3794, Address: 0x22dcec, Func Offset: 0x28c
	// Line 3797, Address: 0x22dcf8, Func Offset: 0x298
	// Line 3798, Address: 0x22dd00, Func Offset: 0x2a0
	// Line 3797, Address: 0x22dd04, Func Offset: 0x2a4
	// Line 3798, Address: 0x22dd0c, Func Offset: 0x2ac
	// Line 3802, Address: 0x22dd74, Func Offset: 0x314
	// Line 3789, Address: 0x22dd80, Func Offset: 0x320
	// Line 3802, Address: 0x22dd84, Func Offset: 0x324
	// Line 3789, Address: 0x22dd9c, Func Offset: 0x33c
	// Line 3802, Address: 0x22dda0, Func Offset: 0x340
	// Line 3789, Address: 0x22ddb8, Func Offset: 0x358
	// Line 3802, Address: 0x22ddbc, Func Offset: 0x35c
	// Line 3789, Address: 0x22dde8, Func Offset: 0x388
	// Line 3802, Address: 0x22ddec, Func Offset: 0x38c
	// Line 3790, Address: 0x22ddf0, Func Offset: 0x390
	// Line 3803, Address: 0x22de08, Func Offset: 0x3a8
	// Func End, Address: 0x22de28, Func Offset: 0x3c8
}

// EmergeYeBeastie__16zNMEGoalSpawningFP10zNMECommonf
// Start address: 0x22de30
int32 zNMEGoalSpawning::EmergeYeBeastie(zNMECommon* npc, float32 dt)
{
	float32 fac;
	// Line 3652, Address: 0x22de30, Func Offset: 0
	// Line 3659, Address: 0x22de34, Func Offset: 0x4
	// Line 3652, Address: 0x22de38, Func Offset: 0x8
	// Line 3659, Address: 0x22de3c, Func Offset: 0xc
	// Line 3652, Address: 0x22de40, Func Offset: 0x10
	// Line 3659, Address: 0x22de58, Func Offset: 0x28
	// Line 3660, Address: 0x22de78, Func Offset: 0x48
	// Line 3666, Address: 0x22deac, Func Offset: 0x7c
	// Line 3676, Address: 0x22dec4, Func Offset: 0x94
	// Line 3677, Address: 0x22ded0, Func Offset: 0xa0
	// Line 3676, Address: 0x22ded4, Func Offset: 0xa4
	// Line 3677, Address: 0x22ded8, Func Offset: 0xa8
	// Line 3676, Address: 0x22dee0, Func Offset: 0xb0
	// Line 3677, Address: 0x22deec, Func Offset: 0xbc
	// Line 3679, Address: 0x22df3c, Func Offset: 0x10c
	// Line 3680, Address: 0x22df50, Func Offset: 0x120
	// Line 3661, Address: 0x22dfd0, Func Offset: 0x1a0
	// Line 3680, Address: 0x22dfdc, Func Offset: 0x1ac
	// Line 3667, Address: 0x22dfe0, Func Offset: 0x1b0
	// Line 3680, Address: 0x22dfe4, Func Offset: 0x1b4
	// Line 3668, Address: 0x22e004, Func Offset: 0x1d4
	// Line 3680, Address: 0x22e008, Func Offset: 0x1d8
	// Line 3669, Address: 0x22e014, Func Offset: 0x1e4
	// Line 3680, Address: 0x22e018, Func Offset: 0x1e8
	// Line 3670, Address: 0x22e028, Func Offset: 0x1f8
	// Line 3680, Address: 0x22e02c, Func Offset: 0x1fc
	// Line 3681, Address: 0x22e078, Func Offset: 0x248
	// Line 3684, Address: 0x22e17c, Func Offset: 0x34c
	// Line 3686, Address: 0x22e1a8, Func Offset: 0x378
	// Line 3687, Address: 0x22e1ac, Func Offset: 0x37c
	// Func End, Address: 0x22e1c8, Func Offset: 0x398
}

// CalcLaunchPoint__16zNMEGoalSpawningFP10zNMECommonP5xVec3i
// Start address: 0x22e1d0
void zNMEGoalSpawning::CalcLaunchPoint(zNMECommon* npc, xVec3* pos_launch, int32 useDefault)
{
	xVec3 pos;
	zNMECommon* npc_duper;
	uint32 anid_animCurr;
	xMat4x3* mat_bone;
	xVec3 pos_emit;
	xMat4x3* mat_root;
	// Line 3604, Address: 0x22e1d0, Func Offset: 0
	// Line 3608, Address: 0x22e1d8, Func Offset: 0x8
	// Line 3609, Address: 0x22e1f0, Func Offset: 0x20
	// Line 3608, Address: 0x22e1f8, Func Offset: 0x28
	// Line 3609, Address: 0x22e1fc, Func Offset: 0x2c
	// Line 3610, Address: 0x22e200, Func Offset: 0x30
	// Line 3608, Address: 0x22e208, Func Offset: 0x38
	// Line 3609, Address: 0x22e20c, Func Offset: 0x3c
	// Line 3611, Address: 0x22e210, Func Offset: 0x40
	// Line 3620, Address: 0x22e218, Func Offset: 0x48
	// Line 3624, Address: 0x22e224, Func Offset: 0x54
	// Line 3628, Address: 0x22e260, Func Offset: 0x90
	// Line 3630, Address: 0x22e270, Func Offset: 0xa0
	// Line 3629, Address: 0x22e280, Func Offset: 0xb0
	// Line 3628, Address: 0x22e284, Func Offset: 0xb4
	// Line 3630, Address: 0x22e288, Func Offset: 0xb8
	// Line 3628, Address: 0x22e29c, Func Offset: 0xcc
	// Line 3630, Address: 0x22e2a0, Func Offset: 0xd0
	// Line 3631, Address: 0x22e2a4, Func Offset: 0xd4
	// Line 3635, Address: 0x22e2ac, Func Offset: 0xdc
	// Line 3634, Address: 0x22e2b8, Func Offset: 0xe8
	// Line 3631, Address: 0x22e2bc, Func Offset: 0xec
	// Line 3635, Address: 0x22e2c0, Func Offset: 0xf0
	// Line 3631, Address: 0x22e2d4, Func Offset: 0x104
	// Line 3635, Address: 0x22e2d8, Func Offset: 0x108
	// Line 3638, Address: 0x22e2e0, Func Offset: 0x110
	// Line 3641, Address: 0x22e32c, Func Offset: 0x15c
	// Line 3639, Address: 0x22e330, Func Offset: 0x160
	// Line 3641, Address: 0x22e348, Func Offset: 0x178
	// Line 3639, Address: 0x22e34c, Func Offset: 0x17c
	// Line 3642, Address: 0x22e364, Func Offset: 0x194
	// Line 3643, Address: 0x22e3ac, Func Offset: 0x1dc
	// Line 3646, Address: 0x22e3d8, Func Offset: 0x208
	// Line 3643, Address: 0x22e3e4, Func Offset: 0x214
	// Line 3646, Address: 0x22e3e8, Func Offset: 0x218
	// Line 3649, Address: 0x22e3f0, Func Offset: 0x220
	// Func End, Address: 0x22e3f8, Func Offset: 0x228
}

// ExamineDuperAnim__16zNMEGoalSpawningFP10zNMECommon
// Start address: 0x22e400
en_dupspit zNMEGoalSpawning::ExamineDuperAnim(zNMECommon* npc)
{
	zNMECommon* npc_duper;
	// Line 3551, Address: 0x22e400, Func Offset: 0
	// Line 3553, Address: 0x22e404, Func Offset: 0x4
	// Line 3562, Address: 0x22e410, Func Offset: 0x10
	// Line 3573, Address: 0x22e428, Func Offset: 0x28
	// Line 3577, Address: 0x22e458, Func Offset: 0x58
	// Line 3578, Address: 0x22e474, Func Offset: 0x74
	// Line 3598, Address: 0x22e490, Func Offset: 0x90
	// Line 3554, Address: 0x22e498, Func Offset: 0x98
	// Line 3563, Address: 0x22e4a0, Func Offset: 0xa0
	// Line 3574, Address: 0x22e4a8, Func Offset: 0xa8
	// Line 3598, Address: 0x22e4b0, Func Offset: 0xb0
	// Line 3577, Address: 0x22e4c0, Func Offset: 0xc0
	// Line 3598, Address: 0x22e4c8, Func Offset: 0xc8
	// Line 3582, Address: 0x22e4d8, Func Offset: 0xd8
	// Line 3598, Address: 0x22e4dc, Func Offset: 0xdc
	// Line 3585, Address: 0x22e4ec, Func Offset: 0xec
	// Line 3598, Address: 0x22e4f0, Func Offset: 0xf0
	// Line 3585, Address: 0x22e4f8, Func Offset: 0xf8
	// Line 3599, Address: 0x22e4fc, Func Offset: 0xfc
	// Func End, Address: 0x22e504, Func Offset: 0x104
}

// PatienceMonitor__16zNMEGoalSpawningFP10zNMECommonf
// Start address: 0x22e510
int32 zNMEGoalSpawning::PatienceMonitor(zNMECommon* npc, float32 dt)
{
	en_dupspit dupspit;
	xVec3 pos_launch;
	float32 tym;
	xVec3 pos_launch;
	float32 tym;
	float32 tym_waitForBucky;
	int8 @37741;
	// Line 3473, Address: 0x22e510, Func Offset: 0
	// Line 3474, Address: 0x22e514, Func Offset: 0x4
	// Line 3473, Address: 0x22e518, Func Offset: 0x8
	// Line 3474, Address: 0x22e51c, Func Offset: 0xc
	// Line 3473, Address: 0x22e520, Func Offset: 0x10
	// Line 3474, Address: 0x22e534, Func Offset: 0x24
	// Line 3475, Address: 0x22e550, Func Offset: 0x40
	// Line 3474, Address: 0x22e554, Func Offset: 0x44
	// Line 3475, Address: 0x22e558, Func Offset: 0x48
	// Line 3477, Address: 0x22e580, Func Offset: 0x70
	// Line 3478, Address: 0x22e594, Func Offset: 0x84
	// Line 3484, Address: 0x22e5bc, Func Offset: 0xac
	// Line 3481, Address: 0x22e5c4, Func Offset: 0xb4
	// Line 3480, Address: 0x22e5c8, Func Offset: 0xb8
	// Line 3481, Address: 0x22e5cc, Func Offset: 0xbc
	// Line 3498, Address: 0x22e5d4, Func Offset: 0xc4
	// Line 3500, Address: 0x22e62c, Func Offset: 0x11c
	// Line 3501, Address: 0x22e654, Func Offset: 0x144
	// Line 3512, Address: 0x22e65c, Func Offset: 0x14c
	// Line 3513, Address: 0x22e664, Func Offset: 0x154
	// Line 3526, Address: 0x22e670, Func Offset: 0x160
	// Line 3529, Address: 0x22e67c, Func Offset: 0x16c
	// Line 3530, Address: 0x22e688, Func Offset: 0x178
	// Line 3531, Address: 0x22e698, Func Offset: 0x188
	// Line 3532, Address: 0x22e69c, Func Offset: 0x18c
	// Line 3538, Address: 0x22e6b4, Func Offset: 0x1a4
	// Line 3517, Address: 0x22e6bc, Func Offset: 0x1ac
	// Line 3538, Address: 0x22e6c0, Func Offset: 0x1b0
	// Line 3520, Address: 0x22e6cc, Func Offset: 0x1bc
	// Line 3538, Address: 0x22e6d8, Func Offset: 0x1c8
	// Line 3522, Address: 0x22e6e4, Func Offset: 0x1d4
	// Line 3538, Address: 0x22e6ec, Func Offset: 0x1dc
	// Line 3524, Address: 0x22e6f8, Func Offset: 0x1e8
	// Line 3538, Address: 0x22e6fc, Func Offset: 0x1ec
	// Line 3524, Address: 0x22e700, Func Offset: 0x1f0
	// Line 3525, Address: 0x22e70c, Func Offset: 0x1fc
	// Line 3539, Address: 0x22e714, Func Offset: 0x204
	// Func End, Address: 0x22e728, Func Offset: 0x218
}

// Process__16zNMEGoalSpawningFP11en_trantypefPv
// Start address: 0x22e730
int32 zNMEGoalSpawning::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	zNMECommon* npc;
	int32 patienceDone;
	int32 emergeDone;
	int32 nextgoal;
	// Line 3380, Address: 0x22e730, Func Offset: 0
	// Line 3395, Address: 0x22e734, Func Offset: 0x4
	// Line 3380, Address: 0x22e738, Func Offset: 0x8
	// Line 3382, Address: 0x22e75c, Func Offset: 0x2c
	// Line 3395, Address: 0x22e760, Func Offset: 0x30
	// Line 3382, Address: 0x22e764, Func Offset: 0x34
	// Line 3395, Address: 0x22e768, Func Offset: 0x38
	// Line 3398, Address: 0x22e78c, Func Offset: 0x5c
	// Line 3399, Address: 0x22e794, Func Offset: 0x64
	// Line 3404, Address: 0x22e7a0, Func Offset: 0x70
	// Line 3406, Address: 0x22e7e8, Func Offset: 0xb8
	// Line 3409, Address: 0x22e7f0, Func Offset: 0xc0
	// Line 3410, Address: 0x22e7f8, Func Offset: 0xc8
	// Line 3411, Address: 0x22e800, Func Offset: 0xd0
	// Line 3413, Address: 0x22e804, Func Offset: 0xd4
	// Line 3416, Address: 0x22e80c, Func Offset: 0xdc
	// Line 3417, Address: 0x22e854, Func Offset: 0x124
	// Line 3421, Address: 0x22e858, Func Offset: 0x128
	// Line 3417, Address: 0x22e85c, Func Offset: 0x12c
	// Line 3421, Address: 0x22e860, Func Offset: 0x130
	// Line 3423, Address: 0x22e868, Func Offset: 0x138
	// Line 3422, Address: 0x22e86c, Func Offset: 0x13c
	// Line 3423, Address: 0x22e870, Func Offset: 0x140
	// Line 3422, Address: 0x22e874, Func Offset: 0x144
	// Line 3423, Address: 0x22e878, Func Offset: 0x148
	// Line 3424, Address: 0x22e88c, Func Offset: 0x15c
	// Line 3431, Address: 0x22e894, Func Offset: 0x164
	// Line 3400, Address: 0x22e8f4, Func Offset: 0x1c4
	// Line 3431, Address: 0x22e8f8, Func Offset: 0x1c8
	// Line 3402, Address: 0x22e8fc, Func Offset: 0x1cc
	// Line 3432, Address: 0x22e904, Func Offset: 0x1d4
	// Func End, Address: 0x22e924, Func Offset: 0x1f4
}

// Exit__16zNMEGoalSpawningFfPv
// Start address: 0x22e930
int32 zNMEGoalSpawning::Exit()
{
	// Line 3368, Address: 0x22e930, Func Offset: 0
	// Line 3371, Address: 0x22e93c, Func Offset: 0xc
	// Line 3373, Address: 0x22e948, Func Offset: 0x18
	// Line 3376, Address: 0x22e94c, Func Offset: 0x1c
	// Line 3377, Address: 0x22e968, Func Offset: 0x38
	// Func End, Address: 0x22e978, Func Offset: 0x48
}

// Enter__16zNMEGoalSpawningFfPv
// Start address: 0x22e980
int32 zNMEGoalSpawning::Enter()
{
	zNMECommon* npc;
	// Line 3335, Address: 0x22e980, Func Offset: 0
	// Line 3336, Address: 0x22e994, Func Offset: 0x14
	// Line 3338, Address: 0x22e998, Func Offset: 0x18
	// Line 3336, Address: 0x22e99c, Func Offset: 0x1c
	// Line 3338, Address: 0x22e9a0, Func Offset: 0x20
	// Line 3346, Address: 0x22e9ac, Func Offset: 0x2c
	// Line 3351, Address: 0x22e9b4, Func Offset: 0x34
	// Line 3346, Address: 0x22e9b8, Func Offset: 0x38
	// Line 3351, Address: 0x22e9bc, Func Offset: 0x3c
	// Line 3352, Address: 0x22e9c0, Func Offset: 0x40
	// Line 3346, Address: 0x22e9c4, Func Offset: 0x44
	// Line 3349, Address: 0x22e9d0, Func Offset: 0x50
	// Line 3351, Address: 0x22ea00, Func Offset: 0x80
	// Line 3352, Address: 0x22ea04, Func Offset: 0x84
	// Line 3356, Address: 0x22ea08, Func Offset: 0x88
	// Line 3357, Address: 0x22ea0c, Func Offset: 0x8c
	// Line 3361, Address: 0x22ea9c, Func Offset: 0x11c
	// Line 3362, Address: 0x22eb64, Func Offset: 0x1e4
	// Line 3364, Address: 0x22eb6c, Func Offset: 0x1ec
	// Line 3362, Address: 0x22eb70, Func Offset: 0x1f0
	// Line 3364, Address: 0x22eb74, Func Offset: 0x1f4
	// Line 3362, Address: 0x22eb7c, Func Offset: 0x1fc
	// Line 3364, Address: 0x22eb88, Func Offset: 0x208
	// Line 3361, Address: 0x22ec08, Func Offset: 0x288
	// Line 3364, Address: 0x22ec1c, Func Offset: 0x29c
	// Line 3361, Address: 0x22ec20, Func Offset: 0x2a0
	// Line 3364, Address: 0x22ec24, Func Offset: 0x2a4
	// Line 3361, Address: 0x22ec28, Func Offset: 0x2a8
	// Line 3364, Address: 0x22ec34, Func Offset: 0x2b4
	// Line 3365, Address: 0x22ec88, Func Offset: 0x308
	// Func End, Address: 0x22eca0, Func Offset: 0x320
}

// GoalHandleMail__17zNMEGoalAfterlifeFP6NMEMsg
// Start address: 0x22eca0
int32 zNMEGoalAfterlife::GoalHandleMail(NMEMsg* mail)
{
	int32 snarfed;
	zNMEGoalSpawning* spgoal;
	// Line 3150, Address: 0x22eca0, Func Offset: 0
	// Line 3151, Address: 0x22ecb4, Func Offset: 0x14
	// Line 3153, Address: 0x22ecb8, Func Offset: 0x18
	// Line 3157, Address: 0x22ecd8, Func Offset: 0x38
	// Line 3164, Address: 0x22ecdc, Func Offset: 0x3c
	// Line 3166, Address: 0x22ecf4, Func Offset: 0x54
	// Line 3172, Address: 0x22ed0c, Func Offset: 0x6c
	// Line 3174, Address: 0x22ed14, Func Offset: 0x74
	// Line 3177, Address: 0x22ed1c, Func Offset: 0x7c
	// Line 3179, Address: 0x22ed70, Func Offset: 0xd0
	// Line 3181, Address: 0x22ed84, Func Offset: 0xe4
	// Line 3183, Address: 0x22ed88, Func Offset: 0xe8
	// Line 3187, Address: 0x22ed90, Func Offset: 0xf0
	// Line 3190, Address: 0x22edd0, Func Offset: 0x130
	// Line 3193, Address: 0x22edd8, Func Offset: 0x138
	// Line 3198, Address: 0x22ede0, Func Offset: 0x140
	// Line 3201, Address: 0x22ee20, Func Offset: 0x180
	// Line 3202, Address: 0x22ee28, Func Offset: 0x188
	// Line 3207, Address: 0x22ee2c, Func Offset: 0x18c
	// Line 3208, Address: 0x22ee30, Func Offset: 0x190
	// Func End, Address: 0x22ee48, Func Offset: 0x1a8
}

// Enter__17zNMEGoalAfterlifeFfPv
// Start address: 0x22ee50
int32 zNMEGoalAfterlife::Enter()
{
	zNMECommon* npc;
	// Line 2978, Address: 0x22ee50, Func Offset: 0
	// Line 2979, Address: 0x22ee64, Func Offset: 0x14
	// Line 2982, Address: 0x22ee70, Func Offset: 0x20
	// Line 2990, Address: 0x22ee80, Func Offset: 0x30
	// Line 2992, Address: 0x22eeb4, Func Offset: 0x64
	// Line 2993, Address: 0x22f018, Func Offset: 0x1c8
	// Func End, Address: 0x22f030, Func Offset: 0x1e0
}

// RibbonUpdate__13zNMEGoalWoundFP12zNMEStandardf
// Start address: 0x22f030
void zNMEGoalWound::RibbonUpdate(zNMEStandard* npc)
{
	RibData* ribhelp;
	float32 scale;
	float32 alpha;
	xVec3 pos_emit;
	xVec3 dir_up;
	// Line 2791, Address: 0x22f030, Func Offset: 0
	// Line 2792, Address: 0x22f058, Func Offset: 0x28
	// Line 2794, Address: 0x22f064, Func Offset: 0x34
	// Line 2795, Address: 0x22f070, Func Offset: 0x40
	// Line 2796, Address: 0x22f07c, Func Offset: 0x4c
	// Line 2802, Address: 0x22f084, Func Offset: 0x54
	// Line 2804, Address: 0x22f0a8, Func Offset: 0x78
	// Line 2807, Address: 0x22f0b0, Func Offset: 0x80
	// Line 2809, Address: 0x22f0bc, Func Offset: 0x8c
	// Line 2813, Address: 0x22f154, Func Offset: 0x124
	// Line 2814, Address: 0x22f15c, Func Offset: 0x12c
	// Line 2818, Address: 0x22f160, Func Offset: 0x130
	// Line 2819, Address: 0x22f174, Func Offset: 0x144
	// Line 2820, Address: 0x22f1a8, Func Offset: 0x178
	// Line 2822, Address: 0x22f1ac, Func Offset: 0x17c
	// Line 2819, Address: 0x22f1bc, Func Offset: 0x18c
	// Line 2820, Address: 0x22f1c0, Func Offset: 0x190
	// Line 2822, Address: 0x22f1c4, Func Offset: 0x194
	// Line 2823, Address: 0x22f228, Func Offset: 0x1f8
	// Line 2825, Address: 0x22f264, Func Offset: 0x234
	// Line 2823, Address: 0x22f268, Func Offset: 0x238
	// Line 2825, Address: 0x22f26c, Func Offset: 0x23c
	// Line 2823, Address: 0x22f274, Func Offset: 0x244
	// Line 2825, Address: 0x22f280, Func Offset: 0x250
	// Line 2827, Address: 0x22f28c, Func Offset: 0x25c
	// Line 2809, Address: 0x22f2a4, Func Offset: 0x274
	// Line 2827, Address: 0x22f2b8, Func Offset: 0x288
	// Line 2809, Address: 0x22f2bc, Func Offset: 0x28c
	// Line 2827, Address: 0x22f2c4, Func Offset: 0x294
	// Line 2809, Address: 0x22f2cc, Func Offset: 0x29c
	// Line 2828, Address: 0x22f2d4, Func Offset: 0x2a4
	// Func End, Address: 0x22f2fc, Func Offset: 0x2cc
}

// RibbonPrep__13zNMEGoalWoundFP12zNMEStandard
// Start address: 0x22f300
void zNMEGoalWound::RibbonPrep()
{
	// Line 2779, Address: 0x22f300, Func Offset: 0
	// Func End, Address: 0x22f308, Func Offset: 0x8
}

// TakeItLikeAMan__13zNMEGoalWoundFP12zNMEStandard
// Start address: 0x22f310
void zNMEGoalWound::TakeItLikeAMan(zNMEStandard* npc)
{
	float32 tym_anim;
	// Line 2674, Address: 0x22f310, Func Offset: 0
	// Line 2677, Address: 0x22f328, Func Offset: 0x18
	// Line 2686, Address: 0x22f348, Func Offset: 0x38
	// Line 2677, Address: 0x22f34c, Func Offset: 0x3c
	// Line 2680, Address: 0x22f350, Func Offset: 0x40
	// Line 2686, Address: 0x22f394, Func Offset: 0x84
	// Line 2687, Address: 0x22f40c, Func Offset: 0xfc
	// Line 2717, Address: 0x22f428, Func Offset: 0x118
	// Line 2686, Address: 0x22f448, Func Offset: 0x138
	// Line 2718, Address: 0x22f450, Func Offset: 0x140
	// Func End, Address: 0x22f464, Func Offset: 0x154
}

// GoalHandleMail__13zNMEGoalWoundFP6NMEMsg
// Start address: 0x22f470
int32 zNMEGoalWound::GoalHandleMail(NMEMsg* mail)
{
	int32 snarfed;
	// Line 2659, Address: 0x22f470, Func Offset: 0
	// Line 2671, Address: 0x22f488, Func Offset: 0x18
	// Func End, Address: 0x22f490, Func Offset: 0x20
}

// InputInfo__13zNMEGoalWoundFP13NMEDamageInfo
// Start address: 0x22f490
int32 zNMEGoalWound::InputInfo(NMEDamageInfo* dmgmail)
{
	zNMEStandard* npc;
	xVec3 dir_plyr;
	// Line 2616, Address: 0x22f490, Func Offset: 0
	// Line 2617, Address: 0x22f494, Func Offset: 0x4
	// Line 2624, Address: 0x22f498, Func Offset: 0x8
	// Line 2621, Address: 0x22f49c, Func Offset: 0xc
	// Line 2624, Address: 0x22f4a0, Func Offset: 0x10
	// Line 2623, Address: 0x22f4a8, Func Offset: 0x18
	// Line 2617, Address: 0x22f4ac, Func Offset: 0x1c
	// Line 2621, Address: 0x22f4b0, Func Offset: 0x20
	// Line 2623, Address: 0x22f4c0, Func Offset: 0x30
	// Line 2624, Address: 0x22f4d8, Func Offset: 0x48
	// Line 2629, Address: 0x22f4e4, Func Offset: 0x54
	// Line 2633, Address: 0x22f4f0, Func Offset: 0x60
	// Line 2634, Address: 0x22f4f4, Func Offset: 0x64
	// Line 2633, Address: 0x22f4f8, Func Offset: 0x68
	// Line 2635, Address: 0x22f4fc, Func Offset: 0x6c
	// Line 2633, Address: 0x22f508, Func Offset: 0x78
	// Line 2634, Address: 0x22f50c, Func Offset: 0x7c
	// Line 2633, Address: 0x22f510, Func Offset: 0x80
	// Line 2634, Address: 0x22f538, Func Offset: 0xa8
	// Line 2633, Address: 0x22f548, Func Offset: 0xb8
	// Line 2634, Address: 0x22f550, Func Offset: 0xc0
	// Line 2635, Address: 0x22f558, Func Offset: 0xc8
	// Line 2639, Address: 0x22f564, Func Offset: 0xd4
	// Line 2641, Address: 0x22f574, Func Offset: 0xe4
	// Line 2639, Address: 0x22f578, Func Offset: 0xe8
	// Line 2640, Address: 0x22f590, Func Offset: 0x100
	// Line 2641, Address: 0x22f59c, Func Offset: 0x10c
	// Line 2642, Address: 0x22f5b4, Func Offset: 0x124
	// Line 2643, Address: 0x22f5c0, Func Offset: 0x130
	// Line 2649, Address: 0x22f5f0, Func Offset: 0x160
	// Line 2651, Address: 0x22f614, Func Offset: 0x184
	// Line 2626, Address: 0x22f61c, Func Offset: 0x18c
	// Line 2651, Address: 0x22f624, Func Offset: 0x194
	// Line 2626, Address: 0x22f628, Func Offset: 0x198
	// Line 2651, Address: 0x22f62c, Func Offset: 0x19c
	// Line 2626, Address: 0x22f630, Func Offset: 0x1a0
	// Line 2651, Address: 0x22f634, Func Offset: 0x1a4
	// Line 2626, Address: 0x22f640, Func Offset: 0x1b0
	// Line 2651, Address: 0x22f648, Func Offset: 0x1b8
	// Line 2627, Address: 0x22f66c, Func Offset: 0x1dc
	// Line 2651, Address: 0x22f674, Func Offset: 0x1e4
	// Line 2636, Address: 0x22f678, Func Offset: 0x1e8
	// Line 2651, Address: 0x22f684, Func Offset: 0x1f4
	// Line 2636, Address: 0x22f688, Func Offset: 0x1f8
	// Line 2651, Address: 0x22f68c, Func Offset: 0x1fc
	// Line 2636, Address: 0x22f694, Func Offset: 0x204
	// Line 2651, Address: 0x22f69c, Func Offset: 0x20c
	// Line 2636, Address: 0x22f6a8, Func Offset: 0x218
	// Line 2651, Address: 0x22f6ac, Func Offset: 0x21c
	// Line 2636, Address: 0x22f6c8, Func Offset: 0x238
	// Line 2651, Address: 0x22f6d0, Func Offset: 0x240
	// Line 2645, Address: 0x22f6d4, Func Offset: 0x244
	// Line 2651, Address: 0x22f6dc, Func Offset: 0x24c
	// Line 2645, Address: 0x22f6ec, Func Offset: 0x25c
	// Line 2651, Address: 0x22f6f0, Func Offset: 0x260
	// Line 2645, Address: 0x22f6f4, Func Offset: 0x264
	// Line 2651, Address: 0x22f6f8, Func Offset: 0x268
	// Line 2645, Address: 0x22f700, Func Offset: 0x270
	// Line 2651, Address: 0x22f704, Func Offset: 0x274
	// Line 2652, Address: 0x22f728, Func Offset: 0x298
	// Func End, Address: 0x22f730, Func Offset: 0x2a0
}

// InputInfoDflt__13zNMEGoalWoundFv
// Start address: 0x22f730
int32 zNMEGoalWound::InputInfoDflt()
{
	zNMEStandard* npc;
	xVec3 dir_plyr;
	// Line 2587, Address: 0x22f730, Func Offset: 0
	// Line 2588, Address: 0x22f734, Func Offset: 0x4
	// Line 2597, Address: 0x22f738, Func Offset: 0x8
	// Line 2591, Address: 0x22f73c, Func Offset: 0xc
	// Line 2597, Address: 0x22f740, Func Offset: 0x10
	// Line 2590, Address: 0x22f744, Func Offset: 0x14
	// Line 2595, Address: 0x22f748, Func Offset: 0x18
	// Line 2597, Address: 0x22f750, Func Offset: 0x20
	// Line 2591, Address: 0x22f754, Func Offset: 0x24
	// Line 2588, Address: 0x22f758, Func Offset: 0x28
	// Line 2596, Address: 0x22f75c, Func Offset: 0x2c
	// Line 2590, Address: 0x22f760, Func Offset: 0x30
	// Line 2591, Address: 0x22f764, Func Offset: 0x34
	// Line 2595, Address: 0x22f768, Func Offset: 0x38
	// Line 2596, Address: 0x22f798, Func Offset: 0x68
	// Line 2595, Address: 0x22f7a4, Func Offset: 0x74
	// Line 2596, Address: 0x22f7ac, Func Offset: 0x7c
	// Line 2597, Address: 0x22f7b4, Func Offset: 0x84
	// Line 2601, Address: 0x22f7c0, Func Offset: 0x90
	// Line 2603, Address: 0x22f7cc, Func Offset: 0x9c
	// Line 2601, Address: 0x22f7d0, Func Offset: 0xa0
	// Line 2603, Address: 0x22f7d8, Func Offset: 0xa8
	// Line 2601, Address: 0x22f7dc, Func Offset: 0xac
	// Line 2602, Address: 0x22f7f0, Func Offset: 0xc0
	// Line 2603, Address: 0x22f7fc, Func Offset: 0xcc
	// Line 2604, Address: 0x22f814, Func Offset: 0xe4
	// Line 2605, Address: 0x22f820, Func Offset: 0xf0
	// Line 2610, Address: 0x22f850, Func Offset: 0x120
	// Line 2612, Address: 0x22f874, Func Offset: 0x144
	// Line 2598, Address: 0x22f880, Func Offset: 0x150
	// Line 2612, Address: 0x22f88c, Func Offset: 0x15c
	// Line 2598, Address: 0x22f890, Func Offset: 0x160
	// Line 2612, Address: 0x22f894, Func Offset: 0x164
	// Line 2598, Address: 0x22f89c, Func Offset: 0x16c
	// Line 2612, Address: 0x22f8a4, Func Offset: 0x174
	// Line 2598, Address: 0x22f8b0, Func Offset: 0x180
	// Line 2612, Address: 0x22f8b4, Func Offset: 0x184
	// Line 2598, Address: 0x22f8d0, Func Offset: 0x1a0
	// Line 2612, Address: 0x22f8d8, Func Offset: 0x1a8
	// Line 2607, Address: 0x22f8dc, Func Offset: 0x1ac
	// Line 2612, Address: 0x22f8e4, Func Offset: 0x1b4
	// Line 2607, Address: 0x22f8f4, Func Offset: 0x1c4
	// Line 2612, Address: 0x22f8f8, Func Offset: 0x1c8
	// Line 2607, Address: 0x22f8fc, Func Offset: 0x1cc
	// Line 2612, Address: 0x22f900, Func Offset: 0x1d0
	// Line 2607, Address: 0x22f908, Func Offset: 0x1d8
	// Line 2612, Address: 0x22f90c, Func Offset: 0x1dc
	// Line 2613, Address: 0x22f930, Func Offset: 0x200
	// Func End, Address: 0x22f938, Func Offset: 0x208
}

// CollReview__13zNMEGoalWoundFPv
// Start address: 0x22f940
int32 zNMEGoalWound::CollReview()
{
	zNMEStandard* npc;
	xEntCollis* npccol;
	int32 badsurf;
	xVec3 vel_temp;
	int32 rc;
	// Line 2499, Address: 0x22f940, Func Offset: 0
	// Line 2500, Address: 0x22f970, Func Offset: 0x30
	// Line 2501, Address: 0x22f978, Func Offset: 0x38
	// Line 2507, Address: 0x22f97c, Func Offset: 0x3c
	// Line 2515, Address: 0x22f98c, Func Offset: 0x4c
	// Line 2516, Address: 0x22f9a0, Func Offset: 0x60
	// Line 2518, Address: 0x22faa8, Func Offset: 0x168
	// Line 2519, Address: 0x22fabc, Func Offset: 0x17c
	// Line 2522, Address: 0x22fb50, Func Offset: 0x210
	// Line 2530, Address: 0x22fb60, Func Offset: 0x220
	// Line 2546, Address: 0x22fb70, Func Offset: 0x230
	// Line 2508, Address: 0x22fb7c, Func Offset: 0x23c
	// Line 2546, Address: 0x22fb88, Func Offset: 0x248
	// Line 2519, Address: 0x22fb90, Func Offset: 0x250
	// Line 2546, Address: 0x22fba8, Func Offset: 0x268
	// Line 2523, Address: 0x22fbe4, Func Offset: 0x2a4
	// Line 2546, Address: 0x22fbe8, Func Offset: 0x2a8
	// Line 2525, Address: 0x22fbfc, Func Offset: 0x2bc
	// Line 2546, Address: 0x22fc08, Func Offset: 0x2c8
	// Line 2533, Address: 0x22fc2c, Func Offset: 0x2ec
	// Line 2546, Address: 0x22fc30, Func Offset: 0x2f0
	// Line 2533, Address: 0x22fc3c, Func Offset: 0x2fc
	// Line 2546, Address: 0x22fc40, Func Offset: 0x300
	// Line 2536, Address: 0x22fc48, Func Offset: 0x308
	// Line 2546, Address: 0x22fc50, Func Offset: 0x310
	// Line 2536, Address: 0x22fc58, Func Offset: 0x318
	// Line 2546, Address: 0x22fc8c, Func Offset: 0x34c
	// Line 2536, Address: 0x22fc90, Func Offset: 0x350
	// Line 2546, Address: 0x22fc94, Func Offset: 0x354
	// Line 2536, Address: 0x22fc98, Func Offset: 0x358
	// Line 2546, Address: 0x22fcb8, Func Offset: 0x378
	// Line 2539, Address: 0x22fccc, Func Offset: 0x38c
	// Line 2546, Address: 0x22fcd0, Func Offset: 0x390
	// Line 2547, Address: 0x22fcf0, Func Offset: 0x3b0
	// Func End, Address: 0x22fd24, Func Offset: 0x3e4
}

// Process__13zNMEGoalWoundFP11en_trantypefPv
// Start address: 0x22fd30
int32 zNMEGoalWound::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	zNMEStandard* npc;
	int32 nextgoal;
	xVec3 vec;
	// Line 2378, Address: 0x22fd30, Func Offset: 0
	// Line 2379, Address: 0x22fd58, Func Offset: 0x28
	// Line 2386, Address: 0x22fd60, Func Offset: 0x30
	// Line 2387, Address: 0x22fd64, Func Offset: 0x34
	// Line 2388, Address: 0x22fdbc, Func Offset: 0x8c
	// Line 2391, Address: 0x22fdc8, Func Offset: 0x98
	// Line 2396, Address: 0x22fdf4, Func Offset: 0xc4
	// Line 2401, Address: 0x22fe34, Func Offset: 0x104
	// Line 2396, Address: 0x22fe38, Func Offset: 0x108
	// Line 2400, Address: 0x22fe3c, Func Offset: 0x10c
	// Line 2396, Address: 0x22fe40, Func Offset: 0x110
	// Line 2400, Address: 0x22fe44, Func Offset: 0x114
	// Line 2396, Address: 0x22fe48, Func Offset: 0x118
	// Line 2403, Address: 0x22fe54, Func Offset: 0x124
	// Line 2396, Address: 0x22fe5c, Func Offset: 0x12c
	// Line 2403, Address: 0x22fe7c, Func Offset: 0x14c
	// Line 2396, Address: 0x22fe80, Func Offset: 0x150
	// Line 2400, Address: 0x22ff60, Func Offset: 0x230
	// Line 2401, Address: 0x22ff74, Func Offset: 0x244
	// Line 2402, Address: 0x22ff78, Func Offset: 0x248
	// Line 2403, Address: 0x22ff84, Func Offset: 0x254
	// Line 2411, Address: 0x22ff90, Func Offset: 0x260
	// Line 2412, Address: 0x22ffa0, Func Offset: 0x270
	// Line 2414, Address: 0x22ffb8, Func Offset: 0x288
	// Line 2387, Address: 0x230018, Func Offset: 0x2e8
	// Line 2414, Address: 0x230024, Func Offset: 0x2f4
	// Line 2387, Address: 0x230028, Func Offset: 0x2f8
	// Line 2414, Address: 0x230034, Func Offset: 0x304
	// Line 2387, Address: 0x230038, Func Offset: 0x308
	// Line 2414, Address: 0x23003c, Func Offset: 0x30c
	// Line 2387, Address: 0x230040, Func Offset: 0x310
	// Line 2414, Address: 0x230044, Func Offset: 0x314
	// Line 2387, Address: 0x230048, Func Offset: 0x318
	// Line 2414, Address: 0x23004c, Func Offset: 0x31c
	// Line 2387, Address: 0x23005c, Func Offset: 0x32c
	// Line 2389, Address: 0x230064, Func Offset: 0x334
	// Line 2404, Address: 0x23006c, Func Offset: 0x33c
	// Line 2406, Address: 0x230078, Func Offset: 0x348
	// Line 2404, Address: 0x230080, Func Offset: 0x350
	// Line 2406, Address: 0x230084, Func Offset: 0x354
	// Line 2404, Address: 0x23008c, Func Offset: 0x35c
	// Line 2414, Address: 0x230090, Func Offset: 0x360
	// Line 2404, Address: 0x230094, Func Offset: 0x364
	// Line 2414, Address: 0x230098, Func Offset: 0x368
	// Line 2404, Address: 0x23009c, Func Offset: 0x36c
	// Line 2406, Address: 0x2300a0, Func Offset: 0x370
	// Line 2414, Address: 0x2300a4, Func Offset: 0x374
	// Line 2415, Address: 0x2300b4, Func Offset: 0x384
	// Func End, Address: 0x2300d4, Func Offset: 0x3a4
}

// Exit__13zNMEGoalWoundFfPv
// Start address: 0x2300e0
int32 zNMEGoalWound::Exit()
{
	zNMEStandard* npc;
	// Line 2363, Address: 0x2300e0, Func Offset: 0
	// Line 2364, Address: 0x2300f0, Func Offset: 0x10
	// Line 2366, Address: 0x2300f4, Func Offset: 0x14
	// Line 2364, Address: 0x2300f8, Func Offset: 0x18
	// Line 2366, Address: 0x2300fc, Func Offset: 0x1c
	// Line 2367, Address: 0x230104, Func Offset: 0x24
	// Line 2369, Address: 0x230120, Func Offset: 0x40
	// Line 2370, Address: 0x230124, Func Offset: 0x44
	// Line 2372, Address: 0x23014c, Func Offset: 0x6c
	// Line 2374, Address: 0x2301b8, Func Offset: 0xd8
	// Line 2375, Address: 0x2301d0, Func Offset: 0xf0
	// Func End, Address: 0x2301e4, Func Offset: 0x104
}

// Enter__13zNMEGoalWoundFfPv
// Start address: 0x2301f0
int32 zNMEGoalWound::Enter()
{
	zNMEStandard* npc;
	// Line 2322, Address: 0x2301f0, Func Offset: 0
	// Line 2323, Address: 0x230204, Func Offset: 0x14
	// Line 2325, Address: 0x23020c, Func Offset: 0x1c
	// Line 2328, Address: 0x230210, Func Offset: 0x20
	// Line 2329, Address: 0x230220, Func Offset: 0x30
	// Line 2337, Address: 0x230228, Func Offset: 0x38
	// Line 2344, Address: 0x230278, Func Offset: 0x88
	// Line 2348, Address: 0x2302b0, Func Offset: 0xc0
	// Line 2349, Address: 0x2302c0, Func Offset: 0xd0
	// Line 2350, Address: 0x2302c4, Func Offset: 0xd4
	// Line 2349, Address: 0x2302c8, Func Offset: 0xd8
	// Line 2351, Address: 0x2302cc, Func Offset: 0xdc
	// Line 2353, Address: 0x2302d4, Func Offset: 0xe4
	// Line 2354, Address: 0x2302d8, Func Offset: 0xe8
	// Line 2359, Address: 0x2302dc, Func Offset: 0xec
	// Line 2338, Address: 0x230310, Func Offset: 0x120
	// Line 2359, Address: 0x230314, Func Offset: 0x124
	// Line 2341, Address: 0x23031c, Func Offset: 0x12c
	// Line 2359, Address: 0x230328, Func Offset: 0x138
	// Line 2343, Address: 0x230330, Func Offset: 0x140
	// Line 2359, Address: 0x230334, Func Offset: 0x144
	// Line 2344, Address: 0x230364, Func Offset: 0x174
	// Line 2359, Address: 0x230368, Func Offset: 0x178
	// Line 2360, Address: 0x2303cc, Func Offset: 0x1dc
	// Func End, Address: 0x2303e4, Func Offset: 0x1f4
}

// DazedFXUpdate__12zNMEStandardFf
// Start address: 0x2303f0
void zNMEStandard::DazedFXUpdate()
{
	int32 gid;
	xVec3 pos;
	xVec3 pos;
	int32 turnOn;
	int32 i;
	int32 gid_carried[4];
	// Line 2242, Address: 0x2303f0, Func Offset: 0
	// Line 2243, Address: 0x230404, Func Offset: 0x14
	// Line 2249, Address: 0x23040c, Func Offset: 0x1c
	// Line 2250, Address: 0x230414, Func Offset: 0x24
	// Line 2260, Address: 0x23041c, Func Offset: 0x2c
	// Line 2261, Address: 0x230424, Func Offset: 0x34
	// Line 2264, Address: 0x23046c, Func Offset: 0x7c
	// Line 2265, Address: 0x230480, Func Offset: 0x90
	// Line 2264, Address: 0x230484, Func Offset: 0x94
	// Line 2265, Address: 0x230500, Func Offset: 0x110
	// Line 2267, Address: 0x230528, Func Offset: 0x138
	// Line 2268, Address: 0x230538, Func Offset: 0x148
	// Line 2269, Address: 0x230540, Func Offset: 0x150
	// Line 2270, Address: 0x230544, Func Offset: 0x154
	// Line 2272, Address: 0x23054c, Func Offset: 0x15c
	// Line 2273, Address: 0x230560, Func Offset: 0x170
	// Line 2272, Address: 0x230564, Func Offset: 0x174
	// Line 2273, Address: 0x2305e0, Func Offset: 0x1f0
	// Line 2283, Address: 0x230608, Func Offset: 0x218
	// Line 2282, Address: 0x230610, Func Offset: 0x220
	// Line 2283, Address: 0x230614, Func Offset: 0x224
	// Line 2285, Address: 0x23061c, Func Offset: 0x22c
	// Line 2289, Address: 0x23062c, Func Offset: 0x23c
	// Line 2293, Address: 0x23063c, Func Offset: 0x24c
	// Line 2294, Address: 0x230644, Func Offset: 0x254
	// Line 2296, Address: 0x230654, Func Offset: 0x264
	// Line 2297, Address: 0x230658, Func Offset: 0x268
	// Line 2298, Address: 0x230660, Func Offset: 0x270
	// Line 2300, Address: 0x23068c, Func Offset: 0x29c
	// Line 2310, Address: 0x2306b4, Func Offset: 0x2c4
	// Line 2311, Address: 0x2306fc, Func Offset: 0x30c
	// Func End, Address: 0x23070c, Func Offset: 0x31c
}

// WoundedInput__12zNMEStandardF9en_npcgolP13NMEDamageInfo
// Start address: 0x230710
void zNMEStandard::WoundedInput(en_npcgol gid, NMEDamageInfo* dmgmail)
{
	xGoal* goal;
	// Line 2176, Address: 0x230710, Func Offset: 0
	// Line 2181, Address: 0x230714, Func Offset: 0x4
	// Line 2176, Address: 0x230718, Func Offset: 0x8
	// Line 2181, Address: 0x23071c, Func Offset: 0xc
	// Line 2176, Address: 0x230720, Func Offset: 0x10
	// Line 2181, Address: 0x230724, Func Offset: 0x14
	// Line 2184, Address: 0x23072c, Func Offset: 0x1c
	// Line 2186, Address: 0x230738, Func Offset: 0x28
	// Line 2190, Address: 0x230740, Func Offset: 0x30
	// Line 2193, Address: 0x230748, Func Offset: 0x38
	// Func End, Address: 0x230758, Func Offset: 0x48
}

// Process__13zNMEGoalTauntFP11en_trantypefPv
// Start address: 0x230760
int32 zNMEGoalTaunt::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	zNMEStandard* npc;
	en_loopstat lpstat;
	int32 nextgoal;
	// Line 2110, Address: 0x230760, Func Offset: 0
	// Line 2113, Address: 0x230764, Func Offset: 0x4
	// Line 2110, Address: 0x230768, Func Offset: 0x8
	// Line 2113, Address: 0x23078c, Func Offset: 0x2c
	// Line 2111, Address: 0x230790, Func Offset: 0x30
	// Line 2113, Address: 0x230794, Func Offset: 0x34
	// Line 2111, Address: 0x230798, Func Offset: 0x38
	// Line 2113, Address: 0x23079c, Func Offset: 0x3c
	// Line 2115, Address: 0x2307c4, Func Offset: 0x64
	// Line 2118, Address: 0x2307e0, Func Offset: 0x80
	// Line 2119, Address: 0x2307f0, Func Offset: 0x90
	// Line 2141, Address: 0x2307fc, Func Offset: 0x9c
	// Line 2144, Address: 0x2308d0, Func Offset: 0x170
	// Line 2136, Address: 0x230944, Func Offset: 0x1e4
	// Line 2128, Address: 0x230950, Func Offset: 0x1f0
	// Line 2130, Address: 0x230954, Func Offset: 0x1f4
	// Line 2144, Address: 0x230958, Func Offset: 0x1f8
	// Line 2130, Address: 0x23095c, Func Offset: 0x1fc
	// Line 2129, Address: 0x230960, Func Offset: 0x200
	// Line 2130, Address: 0x230964, Func Offset: 0x204
	// Line 2129, Address: 0x230968, Func Offset: 0x208
	// Line 2144, Address: 0x23096c, Func Offset: 0x20c
	// Line 2131, Address: 0x230980, Func Offset: 0x220
	// Line 2141, Address: 0x230988, Func Offset: 0x228
	// Line 2144, Address: 0x2309a4, Func Offset: 0x244
	// Line 2141, Address: 0x2309a8, Func Offset: 0x248
	// Line 2144, Address: 0x2309ac, Func Offset: 0x24c
	// Line 2141, Address: 0x2309b4, Func Offset: 0x254
	// Line 2144, Address: 0x2309bc, Func Offset: 0x25c
	// Line 2145, Address: 0x2309cc, Func Offset: 0x26c
	// Func End, Address: 0x2309ec, Func Offset: 0x28c
}

// Enter__13zNMEGoalTauntFfPv
// Start address: 0x2309f0
int32 zNMEGoalTaunt::Enter()
{
	// Line 2101, Address: 0x2309f0, Func Offset: 0
	// Line 2104, Address: 0x2309f4, Func Offset: 0x4
	// Line 2101, Address: 0x2309f8, Func Offset: 0x8
	// Line 2104, Address: 0x230a0c, Func Offset: 0x1c
	// Line 2106, Address: 0x230a1c, Func Offset: 0x2c
	// Line 2107, Address: 0x230bec, Func Offset: 0x1fc
	// Func End, Address: 0x230c04, Func Offset: 0x214
}

// Process__14zNMEGoalNoticeFP11en_trantypefPv
// Start address: 0x230c10
int32 zNMEGoalNotice::Process(en_trantype* trantype, float32 dt)
{
	zNMECommon* npc;
	en_vis cansee;
	int32 nextgoal;
	int32 nextgoal;
	// Line 2044, Address: 0x230c10, Func Offset: 0
	// Line 2045, Address: 0x230c28, Func Offset: 0x18
	// Line 2047, Address: 0x230c3c, Func Offset: 0x2c
	// Line 2048, Address: 0x230c40, Func Offset: 0x30
	// Line 2051, Address: 0x230c4c, Func Offset: 0x3c
	// Line 2071, Address: 0x230c74, Func Offset: 0x64
	// Line 2072, Address: 0x230c78, Func Offset: 0x68
	// Line 2077, Address: 0x230d4c, Func Offset: 0x13c
	// Line 2048, Address: 0x230d6c, Func Offset: 0x15c
	// Line 2077, Address: 0x230d74, Func Offset: 0x164
	// Line 2053, Address: 0x230d78, Func Offset: 0x168
	// Line 2077, Address: 0x230d7c, Func Offset: 0x16c
	// Line 2053, Address: 0x230d80, Func Offset: 0x170
	// Line 2077, Address: 0x230d84, Func Offset: 0x174
	// Line 2056, Address: 0x230da0, Func Offset: 0x190
	// Line 2058, Address: 0x230da4, Func Offset: 0x194
	// Line 2056, Address: 0x230da8, Func Offset: 0x198
	// Line 2058, Address: 0x230dac, Func Offset: 0x19c
	// Line 2057, Address: 0x230db0, Func Offset: 0x1a0
	// Line 2077, Address: 0x230db4, Func Offset: 0x1a4
	// Line 2058, Address: 0x230dbc, Func Offset: 0x1ac
	// Line 2077, Address: 0x230dc0, Func Offset: 0x1b0
	// Line 2059, Address: 0x230dd0, Func Offset: 0x1c0
	// Line 2063, Address: 0x230dd8, Func Offset: 0x1c8
	// Line 2065, Address: 0x230ddc, Func Offset: 0x1cc
	// Line 2063, Address: 0x230de0, Func Offset: 0x1d0
	// Line 2065, Address: 0x230de4, Func Offset: 0x1d4
	// Line 2064, Address: 0x230de8, Func Offset: 0x1d8
	// Line 2077, Address: 0x230dec, Func Offset: 0x1dc
	// Line 2065, Address: 0x230df4, Func Offset: 0x1e4
	// Line 2077, Address: 0x230df8, Func Offset: 0x1e8
	// Line 2066, Address: 0x230e08, Func Offset: 0x1f8
	// Line 2072, Address: 0x230e10, Func Offset: 0x200
	// Line 2077, Address: 0x230e2c, Func Offset: 0x21c
	// Line 2072, Address: 0x230e30, Func Offset: 0x220
	// Line 2077, Address: 0x230e34, Func Offset: 0x224
	// Line 2072, Address: 0x230e3c, Func Offset: 0x22c
	// Line 2077, Address: 0x230e44, Func Offset: 0x234
	// Line 2078, Address: 0x230e54, Func Offset: 0x244
	// Func End, Address: 0x230e6c, Func Offset: 0x25c
}

// Enter__14zNMEGoalNoticeFfPv
// Start address: 0x230e70
int32 zNMEGoalNotice::Enter()
{
	// Line 2027, Address: 0x230e70, Func Offset: 0
	// Line 2029, Address: 0x230e84, Func Offset: 0x14
	// Line 2030, Address: 0x230e94, Func Offset: 0x24
	// Line 2031, Address: 0x230f1c, Func Offset: 0xac
	// Func End, Address: 0x230f34, Func Offset: 0xc4
}

// Process__15zNMEGoalSpookedFP11en_trantypefPv
// Start address: 0x230f40
int32 zNMEGoalSpooked::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	zNMEStandard* npc;
	int32 nextgoal;
	// Line 1950, Address: 0x230f40, Func Offset: 0
	// Line 1953, Address: 0x230f44, Func Offset: 0x4
	// Line 1950, Address: 0x230f48, Func Offset: 0x8
	// Line 1953, Address: 0x230f4c, Func Offset: 0xc
	// Line 1950, Address: 0x230f50, Func Offset: 0x10
	// Line 1951, Address: 0x230f74, Func Offset: 0x34
	// Line 1953, Address: 0x230f78, Func Offset: 0x38
	// Line 1951, Address: 0x230f7c, Func Offset: 0x3c
	// Line 1953, Address: 0x230f80, Func Offset: 0x40
	// Line 1961, Address: 0x230fa0, Func Offset: 0x60
	// Line 1965, Address: 0x231024, Func Offset: 0xe4
	// Line 1967, Address: 0x23103c, Func Offset: 0xfc
	// Line 1954, Address: 0x23109c, Func Offset: 0x15c
	// Line 1956, Address: 0x2310a0, Func Offset: 0x160
	// Line 1954, Address: 0x2310a4, Func Offset: 0x164
	// Line 1956, Address: 0x2310a8, Func Offset: 0x168
	// Line 1955, Address: 0x2310ac, Func Offset: 0x16c
	// Line 1967, Address: 0x2310b0, Func Offset: 0x170
	// Line 1956, Address: 0x2310b8, Func Offset: 0x178
	// Line 1967, Address: 0x2310bc, Func Offset: 0x17c
	// Line 1957, Address: 0x2310cc, Func Offset: 0x18c
	// Line 1967, Address: 0x2310d4, Func Offset: 0x194
	// Line 1961, Address: 0x2310dc, Func Offset: 0x19c
	// Line 1967, Address: 0x2310e4, Func Offset: 0x1a4
	// Line 1961, Address: 0x2310ec, Func Offset: 0x1ac
	// Line 1967, Address: 0x231148, Func Offset: 0x208
	// Line 1961, Address: 0x231150, Func Offset: 0x210
	// Line 1967, Address: 0x231158, Func Offset: 0x218
	// Line 1961, Address: 0x231160, Func Offset: 0x220
	// Line 1967, Address: 0x2311ac, Func Offset: 0x26c
	// Line 1961, Address: 0x2311b8, Func Offset: 0x278
	// Line 1967, Address: 0x2311bc, Func Offset: 0x27c
	// Line 1968, Address: 0x2311cc, Func Offset: 0x28c
	// Func End, Address: 0x2311f0, Func Offset: 0x2b0
}

// Enter__15zNMEGoalSpookedFfPv
// Start address: 0x2311f0
int32 zNMEGoalSpooked::Enter()
{
	// Line 1944, Address: 0x2311f0, Func Offset: 0
	// Line 1945, Address: 0x231208, Func Offset: 0x18
	// Line 1946, Address: 0x231370, Func Offset: 0x180
	// Line 1947, Address: 0x2313f8, Func Offset: 0x208
	// Func End, Address: 0x231414, Func Offset: 0x224
}

// SentryMoveSpline__14zNMEGoalSentryFP10zNMECommonf
// Start address: 0x231420
void zNMEGoalSentry::SentryMoveSpline(zNMECommon* npc, float32 dt)
{
	zNMENavNet* navnet;
	xSpline3* spl;
	float32 newdist;
	xVec3 vec;
	xVec3 tgt;
	float32 u;
	xVec3 dir;
	xVec3 delta;
	// Line 1811, Address: 0x231420, Func Offset: 0
	// Line 1812, Address: 0x23144c, Func Offset: 0x2c
	// Line 1813, Address: 0x231450, Func Offset: 0x30
	// Line 1816, Address: 0x231454, Func Offset: 0x34
	// Line 1826, Address: 0x23145c, Func Offset: 0x3c
	// Line 1828, Address: 0x231540, Func Offset: 0x120
	// Line 1829, Address: 0x231564, Func Offset: 0x144
	// Line 1837, Address: 0x23156c, Func Offset: 0x14c
	// Line 1847, Address: 0x231574, Func Offset: 0x154
	// Line 1837, Address: 0x231578, Func Offset: 0x158
	// Line 1847, Address: 0x231588, Func Offset: 0x168
	// Line 1849, Address: 0x231594, Func Offset: 0x174
	// Line 1850, Address: 0x231598, Func Offset: 0x178
	// Line 1849, Address: 0x23159c, Func Offset: 0x17c
	// Line 1850, Address: 0x2315a0, Func Offset: 0x180
	// Line 1849, Address: 0x2315a4, Func Offset: 0x184
	// Line 1850, Address: 0x2315b8, Func Offset: 0x198
	// Line 1851, Address: 0x2315bc, Func Offset: 0x19c
	// Line 1852, Address: 0x2315c8, Func Offset: 0x1a8
	// Line 1857, Address: 0x2315d8, Func Offset: 0x1b8
	// Line 1859, Address: 0x2315e4, Func Offset: 0x1c4
	// Line 1818, Address: 0x2315f4, Func Offset: 0x1d4
	// Line 1859, Address: 0x2315fc, Func Offset: 0x1dc
	// Line 1866, Address: 0x23160c, Func Offset: 0x1ec
	// Line 1870, Address: 0x231620, Func Offset: 0x200
	// Line 1874, Address: 0x231638, Func Offset: 0x218
	// Line 1870, Address: 0x23163c, Func Offset: 0x21c
	// Line 1874, Address: 0x231640, Func Offset: 0x220
	// Line 1870, Address: 0x231644, Func Offset: 0x224
	// Line 1874, Address: 0x231648, Func Offset: 0x228
	// Line 1875, Address: 0x231664, Func Offset: 0x244
	// Line 1876, Address: 0x231694, Func Offset: 0x274
	// Line 1877, Address: 0x2316a4, Func Offset: 0x284
	// Line 1881, Address: 0x2316b4, Func Offset: 0x294
	// Line 1887, Address: 0x2316c8, Func Offset: 0x2a8
	// Line 1888, Address: 0x231714, Func Offset: 0x2f4
	// Line 1887, Address: 0x231718, Func Offset: 0x2f8
	// Line 1888, Address: 0x231728, Func Offset: 0x308
	// Line 1887, Address: 0x23172c, Func Offset: 0x30c
	// Line 1888, Address: 0x231764, Func Offset: 0x344
	// Line 1889, Address: 0x23176c, Func Offset: 0x34c
	// Line 1894, Address: 0x2317b4, Func Offset: 0x394
	// Line 1882, Address: 0x2317bc, Func Offset: 0x39c
	// Line 1894, Address: 0x2317c8, Func Offset: 0x3a8
	// Line 1895, Address: 0x2317e4, Func Offset: 0x3c4
	// Func End, Address: 0x23180c, Func Offset: 0x3ec
}

// SentryMoveNormal__14zNMEGoalSentryFP10zNMECommonf
// Start address: 0x231810
void zNMEGoalSentry::SentryMoveNormal(zNMECommon* npc, float32 dt)
{
	xVec3 dir_dest;
	xVec3 delta;
	// Line 1763, Address: 0x231810, Func Offset: 0
	// Line 1771, Address: 0x231824, Func Offset: 0x14
	// Line 1763, Address: 0x231828, Func Offset: 0x18
	// Line 1771, Address: 0x23182c, Func Offset: 0x1c
	// Line 1770, Address: 0x231830, Func Offset: 0x20
	// Line 1771, Address: 0x231834, Func Offset: 0x24
	// Line 1770, Address: 0x231838, Func Offset: 0x28
	// Line 1771, Address: 0x23183c, Func Offset: 0x2c
	// Line 1770, Address: 0x231840, Func Offset: 0x30
	// Line 1771, Address: 0x231844, Func Offset: 0x34
	// Line 1770, Address: 0x231848, Func Offset: 0x38
	// Line 1771, Address: 0x231854, Func Offset: 0x44
	// Line 1772, Address: 0x231874, Func Offset: 0x64
	// Line 1775, Address: 0x231888, Func Offset: 0x78
	// Line 1777, Address: 0x2318bc, Func Offset: 0xac
	// Line 1778, Address: 0x2318d4, Func Offset: 0xc4
	// Line 1797, Address: 0x2318e0, Func Offset: 0xd0
	// Line 1799, Address: 0x23190c, Func Offset: 0xfc
	// Line 1803, Address: 0x231924, Func Offset: 0x114
	// Line 1802, Address: 0x231928, Func Offset: 0x118
	// Line 1803, Address: 0x23194c, Func Offset: 0x13c
	// Line 1802, Address: 0x231950, Func Offset: 0x140
	// Line 1803, Address: 0x23198c, Func Offset: 0x17c
	// Line 1802, Address: 0x231990, Func Offset: 0x180
	// Line 1803, Address: 0x231998, Func Offset: 0x188
	// Line 1802, Address: 0x23199c, Func Offset: 0x18c
	// Line 1803, Address: 0x2319ac, Func Offset: 0x19c
	// Line 1802, Address: 0x2319bc, Func Offset: 0x1ac
	// Line 1803, Address: 0x2319c4, Func Offset: 0x1b4
	// Line 1806, Address: 0x2319e8, Func Offset: 0x1d8
	// Line 1785, Address: 0x231a14, Func Offset: 0x204
	// Line 1806, Address: 0x231a18, Func Offset: 0x208
	// Line 1792, Address: 0x231a34, Func Offset: 0x224
	// Line 1800, Address: 0x231a3c, Func Offset: 0x22c
	// Line 1806, Address: 0x231a48, Func Offset: 0x238
	// Line 1807, Address: 0x231a58, Func Offset: 0x248
	// Func End, Address: 0x231a70, Func Offset: 0x260
}

// DoOnArriveStuff__14zNMEGoalSentryFP10zNMECommon
// Start address: 0x231a70
void zNMEGoalSentry::DoOnArriveStuff(zNMECommon* npc)
{
	zNMENavNet* navnet;
	zMovePoint* navcur;
	// Line 1722, Address: 0x231a70, Func Offset: 0
	// Line 1723, Address: 0x231a8c, Func Offset: 0x1c
	// Line 1727, Address: 0x231a94, Func Offset: 0x24
	// Line 1728, Address: 0x231a9c, Func Offset: 0x2c
	// Line 1732, Address: 0x231abc, Func Offset: 0x4c
	// Line 1738, Address: 0x231ac4, Func Offset: 0x54
	// Line 1740, Address: 0x231ae0, Func Offset: 0x70
	// Line 1742, Address: 0x231b0c, Func Offset: 0x9c
	// Line 1741, Address: 0x231b10, Func Offset: 0xa0
	// Line 1742, Address: 0x231b14, Func Offset: 0xa4
	// Line 1741, Address: 0x231b20, Func Offset: 0xb0
	// Line 1742, Address: 0x231b24, Func Offset: 0xb4
	// Line 1744, Address: 0x231b30, Func Offset: 0xc0
	// Line 1745, Address: 0x231b34, Func Offset: 0xc4
	// Line 1748, Address: 0x231b58, Func Offset: 0xe8
	// Line 1749, Address: 0x231b68, Func Offset: 0xf8
	// Line 1753, Address: 0x231bb8, Func Offset: 0x148
	// Line 1759, Address: 0x231bd0, Func Offset: 0x160
	// Func End, Address: 0x231bec, Func Offset: 0x17c
}

// Sentry_Update__14zNMEGoalSentryFP12zNMEStandardf
// Start address: 0x231c00
void zNMEGoalSentry::Sentry_Update(zNMEStandard* npc, float32 dt)
{
	zNMENavNet* navnet;
	// Line 1684, Address: 0x231c00, Func Offset: 0
	// Line 1686, Address: 0x231c24, Func Offset: 0x24
	// Line 1687, Address: 0x231c38, Func Offset: 0x38
	// Line 1688, Address: 0x231c60, Func Offset: 0x60
	// Line 1690, Address: 0x231c84, Func Offset: 0x84
	// Line 1691, Address: 0x231c94, Func Offset: 0x94
	// Line 1693, Address: 0x231ce4, Func Offset: 0xe4
	// Line 1694, Address: 0x231cf0, Func Offset: 0xf0
	// Line 1693, Address: 0x231cf8, Func Offset: 0xf8
	// Line 1694, Address: 0x231d14, Func Offset: 0x114
	// Line 1699, Address: 0x231d24, Func Offset: 0x124
	// Line 1701, Address: 0x231d34, Func Offset: 0x134
	// Line 1702, Address: 0x231d48, Func Offset: 0x148
	// Line 1706, Address: 0x231dc4, Func Offset: 0x1c4
	// Line 1707, Address: 0x231dd4, Func Offset: 0x1d4
	// Line 1710, Address: 0x231de4, Func Offset: 0x1e4
	// Line 1711, Address: 0x231df0, Func Offset: 0x1f0
	// Line 1700, Address: 0x231e08, Func Offset: 0x208
	// Line 1708, Address: 0x231e10, Func Offset: 0x210
	// Line 1711, Address: 0x231e18, Func Offset: 0x218
	// Line 1719, Address: 0x231e20, Func Offset: 0x220
	// Func End, Address: 0x231e40, Func Offset: 0x240
}

// SetCarryState__12zNMEStandardF11en_carystat
// Start address: 0x231e40
int32 zNMEStandard::SetCarryState(en_carystat stat)
{
	int32 result;
	xGoal* goal;
	// Line 1498, Address: 0x231e40, Func Offset: 0
	// Line 1504, Address: 0x231e5c, Func Offset: 0x1c
	// Line 1505, Address: 0x231e68, Func Offset: 0x28
	// Line 1506, Address: 0x231e70, Func Offset: 0x30
	// Line 1508, Address: 0x231e74, Func Offset: 0x34
	// Line 1512, Address: 0x231eb0, Func Offset: 0x70
	// Line 1513, Address: 0x231ec4, Func Offset: 0x84
	// Line 1517, Address: 0x231ecc, Func Offset: 0x8c
	// Line 1520, Address: 0x231ee0, Func Offset: 0xa0
	// Line 1524, Address: 0x231ee8, Func Offset: 0xa8
	// Line 1526, Address: 0x231efc, Func Offset: 0xbc
	// Line 1531, Address: 0x231f04, Func Offset: 0xc4
	// Line 1533, Address: 0x231f18, Func Offset: 0xd8
	// Line 1536, Address: 0x231f20, Func Offset: 0xe0
	// Line 1538, Address: 0x231f40, Func Offset: 0x100
	// Line 1543, Address: 0x231f44, Func Offset: 0x104
	// Line 1505, Address: 0x231f50, Func Offset: 0x110
	// Line 1544, Address: 0x231f54, Func Offset: 0x114
	// Func End, Address: 0x231f6c, Func Offset: 0x12c
}

// DuploOwner__12zNMEStandardFP10zNMECommon
// Start address: 0x231f70
void zNMEStandard::DuploOwner(zNMECommon* duper)
{
	xVec3 vec_near;
	// Line 1393, Address: 0x231f70, Func Offset: 0
	// Line 1442, Address: 0x231f74, Func Offset: 0x4
	// Line 1393, Address: 0x231f78, Func Offset: 0x8
	// Line 1442, Address: 0x231f7c, Func Offset: 0xc
	// Line 1393, Address: 0x231f80, Func Offset: 0x10
	// Line 1409, Address: 0x231f84, Func Offset: 0x14
	// Line 1393, Address: 0x231f88, Func Offset: 0x18
	// Line 1396, Address: 0x231f98, Func Offset: 0x28
	// Line 1409, Address: 0x231f9c, Func Offset: 0x2c
	// Line 1442, Address: 0x231fc8, Func Offset: 0x58
	// Line 1409, Address: 0x231fd0, Func Offset: 0x60
	// Line 1442, Address: 0x231fd4, Func Offset: 0x64
	// Line 1409, Address: 0x231fdc, Func Offset: 0x6c
	// Line 1442, Address: 0x231fe0, Func Offset: 0x70
	// Line 1475, Address: 0x231fe8, Func Offset: 0x78
	// Line 1445, Address: 0x23200c, Func Offset: 0x9c
	// Line 1475, Address: 0x232014, Func Offset: 0xa4
	// Line 1445, Address: 0x23201c, Func Offset: 0xac
	// Line 1475, Address: 0x232058, Func Offset: 0xe8
	// Line 1445, Address: 0x23205c, Func Offset: 0xec
	// Line 1475, Address: 0x232064, Func Offset: 0xf4
	// Line 1445, Address: 0x23206c, Func Offset: 0xfc
	// Line 1475, Address: 0x232074, Func Offset: 0x104
	// Line 1445, Address: 0x23207c, Func Offset: 0x10c
	// Line 1475, Address: 0x2320c4, Func Offset: 0x154
	// Line 1445, Address: 0x2320c8, Func Offset: 0x158
	// Line 1475, Address: 0x2320cc, Func Offset: 0x15c
	// Line 1445, Address: 0x2320d4, Func Offset: 0x164
	// Line 1475, Address: 0x2320dc, Func Offset: 0x16c
	// Line 1445, Address: 0x2320e4, Func Offset: 0x174
	// Line 1446, Address: 0x232118, Func Offset: 0x1a8
	// Line 1475, Address: 0x23211c, Func Offset: 0x1ac
	// Line 1445, Address: 0x232124, Func Offset: 0x1b4
	// Line 1475, Address: 0x232134, Func Offset: 0x1c4
	// Line 1446, Address: 0x23213c, Func Offset: 0x1cc
	// Line 1445, Address: 0x232140, Func Offset: 0x1d0
	// Line 1446, Address: 0x232144, Func Offset: 0x1d4
	// Line 1475, Address: 0x232148, Func Offset: 0x1d8
	// Line 1446, Address: 0x23214c, Func Offset: 0x1dc
	// Line 1475, Address: 0x232150, Func Offset: 0x1e0
	// Line 1446, Address: 0x232154, Func Offset: 0x1e4
	// Line 1475, Address: 0x232158, Func Offset: 0x1e8
	// Line 1447, Address: 0x232160, Func Offset: 0x1f0
	// Line 1475, Address: 0x23216c, Func Offset: 0x1fc
	// Line 1476, Address: 0x232190, Func Offset: 0x220
	// Func End, Address: 0x2321a4, Func Offset: 0x234
}

// Boo__12zNMEStandardFPC10zNMECommon
// Start address: 0x2321b0
void zNMEStandard::Boo()
{
	int32 gid;
	int32 gid_allowSpook[8];
	// Line 1357, Address: 0x2321b0, Func Offset: 0
	// Line 1373, Address: 0x2321c0, Func Offset: 0x10
	// Line 1374, Address: 0x2321c8, Func Offset: 0x18
	// Line 1382, Address: 0x232210, Func Offset: 0x60
	// Line 1377, Address: 0x23221c, Func Offset: 0x6c
	// Line 1382, Address: 0x232220, Func Offset: 0x70
	// Line 1378, Address: 0x232234, Func Offset: 0x84
	// Line 1382, Address: 0x23223c, Func Offset: 0x8c
	// Line 1383, Address: 0x23224c, Func Offset: 0x9c
	// Func End, Address: 0x23225c, Func Offset: 0xac
}

// IsVulnerable__12zNMEStandardF9en_npcdmg
// Start address: 0x232260
int32 zNMEStandard::IsVulnerable(en_npcdmg dmgtype)
{
	// Line 1216, Address: 0x232260, Func Offset: 0
	// Line 1224, Address: 0x232264, Func Offset: 0x4
	// Line 1231, Address: 0x232270, Func Offset: 0x10
	// Line 1233, Address: 0x232298, Func Offset: 0x38
	// Line 1234, Address: 0x2322a4, Func Offset: 0x44
	// Line 1235, Address: 0x2322b0, Func Offset: 0x50
	// Line 1242, Address: 0x2322b8, Func Offset: 0x58
	// Line 1243, Address: 0x2322c8, Func Offset: 0x68
	// Line 1274, Address: 0x2322d0, Func Offset: 0x70
	// Line 1275, Address: 0x2322dc, Func Offset: 0x7c
	// Line 1279, Address: 0x2322e4, Func Offset: 0x84
	// Line 1280, Address: 0x2322f0, Func Offset: 0x90
	// Line 1283, Address: 0x2322f8, Func Offset: 0x98
	// Line 1284, Address: 0x232308, Func Offset: 0xa8
	// Line 1287, Address: 0x232310, Func Offset: 0xb0
	// Line 1288, Address: 0x232320, Func Offset: 0xc0
	// Line 1295, Address: 0x232328, Func Offset: 0xc8
	// Line 1296, Address: 0x232338, Func Offset: 0xd8
	// Line 1302, Address: 0x232340, Func Offset: 0xe0
	// Line 1320, Address: 0x232348, Func Offset: 0xe8
	// Line 1321, Address: 0x232358, Func Offset: 0xf8
	// Line 1325, Address: 0x232360, Func Offset: 0x100
	// Line 1326, Address: 0x23236c, Func Offset: 0x10c
	// Line 1330, Address: 0x232374, Func Offset: 0x114
	// Line 1331, Address: 0x232380, Func Offset: 0x120
	// Line 1334, Address: 0x232388, Func Offset: 0x128
	// Line 1335, Address: 0x232398, Func Offset: 0x138
	// Line 1338, Address: 0x2323a0, Func Offset: 0x140
	// Line 1339, Address: 0x2323b0, Func Offset: 0x150
	// Line 1348, Address: 0x2323b8, Func Offset: 0x158
	// Line 1349, Address: 0x2323bc, Func Offset: 0x15c
	// Func End, Address: 0x2323c4, Func Offset: 0x164
}

// StdTyp_Process__12zNMEStandardFf
// Start address: 0x2323d0
void zNMEStandard::StdTyp_Process(float32 dt)
{
	xMat4x3 oldMat;
	xEntFrame tmpframe;
	// Line 1023, Address: 0x2323d0, Func Offset: 0
	// Line 1025, Address: 0x2323d8, Func Offset: 0x8
	// Line 1023, Address: 0x2323dc, Func Offset: 0xc
	// Line 1025, Address: 0x2323f4, Func Offset: 0x24
	// Line 1029, Address: 0x232414, Func Offset: 0x44
	// Line 1032, Address: 0x232420, Func Offset: 0x50
	// Line 1034, Address: 0x232438, Func Offset: 0x68
	// Line 1035, Address: 0x232440, Func Offset: 0x70
	// Line 1039, Address: 0x2324e8, Func Offset: 0x118
	// Line 1042, Address: 0x232500, Func Offset: 0x130
	// Line 1043, Address: 0x23250c, Func Offset: 0x13c
	// Line 1044, Address: 0x232510, Func Offset: 0x140
	// Line 1043, Address: 0x232514, Func Offset: 0x144
	// Line 1044, Address: 0x232518, Func Offset: 0x148
	// Line 1045, Address: 0x23259c, Func Offset: 0x1cc
	// Line 1044, Address: 0x2325a0, Func Offset: 0x1d0
	// Line 1045, Address: 0x2325a4, Func Offset: 0x1d4
	// Line 1047, Address: 0x2325c4, Func Offset: 0x1f4
	// Line 1048, Address: 0x2325d0, Func Offset: 0x200
	// Line 1053, Address: 0x2325e4, Func Offset: 0x214
	// Line 1055, Address: 0x232618, Func Offset: 0x248
	// Line 1057, Address: 0x232620, Func Offset: 0x250
	// Line 1059, Address: 0x23262c, Func Offset: 0x25c
	// Line 1060, Address: 0x232644, Func Offset: 0x274
	// Line 1061, Address: 0x23264c, Func Offset: 0x27c
	// Line 1062, Address: 0x232688, Func Offset: 0x2b8
	// Line 1063, Address: 0x232694, Func Offset: 0x2c4
	// Line 1064, Address: 0x2326a8, Func Offset: 0x2d8
	// Line 1068, Address: 0x23274c, Func Offset: 0x37c
	// Line 1069, Address: 0x232758, Func Offset: 0x388
	// Line 1072, Address: 0x232760, Func Offset: 0x390
	// Func End, Address: 0x232774, Func Offset: 0x3a4
}

// DieTheGoodDeath__12zNMEStandardFv
// Start address: 0x232790
void zNMEStandard::DieTheGoodDeath()
{
	// Line 970, Address: 0x232790, Func Offset: 0
	// Line 976, Address: 0x23279c, Func Offset: 0xc
	// Line 980, Address: 0x23284c, Func Offset: 0xbc
	// Line 990, Address: 0x23285c, Func Offset: 0xcc
	// Line 993, Address: 0x23286c, Func Offset: 0xdc
	// Func End, Address: 0x23287c, Func Offset: 0xec
}

// StdNME_SuicideIsPainless__12zNMEStandardFv
// Start address: 0x232880
void zNMEStandard::StdNME_SuicideIsPainless()
{
	int32 gid_curr;
	int32 gid_carried[5];
	zNMEArena* arena;
	NMECfgStandard* cfg;
	xVec3 pos_home;
	float32 hyt_test;
	// Line 911, Address: 0x232880, Func Offset: 0
	// Line 915, Address: 0x232894, Func Offset: 0x14
	// Line 931, Address: 0x2328a0, Func Offset: 0x20
	// Line 932, Address: 0x2328b0, Func Offset: 0x30
	// Line 934, Address: 0x2328b8, Func Offset: 0x38
	// Line 940, Address: 0x2328e0, Func Offset: 0x60
	// Line 941, Address: 0x2328e4, Func Offset: 0x64
	// Line 943, Address: 0x2328f0, Func Offset: 0x70
	// Line 948, Address: 0x232904, Func Offset: 0x84
	// Line 946, Address: 0x232908, Func Offset: 0x88
	// Line 953, Address: 0x232910, Func Offset: 0x90
	// Line 946, Address: 0x232914, Func Offset: 0x94
	// Line 953, Address: 0x232918, Func Offset: 0x98
	// Line 948, Address: 0x23291c, Func Offset: 0x9c
	// Line 946, Address: 0x232920, Func Offset: 0xa0
	// Line 948, Address: 0x23292c, Func Offset: 0xac
	// Line 953, Address: 0x232930, Func Offset: 0xb0
	// Line 954, Address: 0x232938, Func Offset: 0xb8
	// Line 956, Address: 0x232948, Func Offset: 0xc8
	// Line 957, Address: 0x232954, Func Offset: 0xd4
	// Line 925, Address: 0x2329a0, Func Offset: 0x120
	// Line 957, Address: 0x2329a4, Func Offset: 0x124
	// Line 926, Address: 0x2329bc, Func Offset: 0x13c
	// Line 957, Address: 0x2329c4, Func Offset: 0x144
	// Line 926, Address: 0x2329d4, Func Offset: 0x154
	// Line 957, Address: 0x2329d8, Func Offset: 0x158
	// Line 928, Address: 0x2329e0, Func Offset: 0x160
	// Line 959, Address: 0x2329e8, Func Offset: 0x168
	// Line 962, Address: 0x232a14, Func Offset: 0x194
	// Func End, Address: 0x232a28, Func Offset: 0x1a8
}

// CreateAnimTable__12zNMEStandardFP10xAnimTable
// Start address: 0x232a30
xAnimTable* zNMEStandard::CreateAnimTable(xAnimTable* table)
{
	int32 ourAnims[3];
	// Line 865, Address: 0x232a30, Func Offset: 0
	// Line 871, Address: 0x232a40, Func Offset: 0x10
	// Line 878, Address: 0x232a48, Func Offset: 0x18
	// Line 882, Address: 0x232a90, Func Offset: 0x60
	// Line 890, Address: 0x232ad8, Func Offset: 0xa8
	// Line 895, Address: 0x232adc, Func Offset: 0xac
	// Line 890, Address: 0x232ae0, Func Offset: 0xb0
	// Line 895, Address: 0x232ae8, Func Offset: 0xb8
	// Line 890, Address: 0x232af4, Func Offset: 0xc4
	// Line 895, Address: 0x232b0c, Func Offset: 0xdc
	// Line 903, Address: 0x232b20, Func Offset: 0xf0
	// Line 871, Address: 0x232b28, Func Offset: 0xf8
	// Line 903, Address: 0x232b2c, Func Offset: 0xfc
	// Line 904, Address: 0x232b3c, Func Offset: 0x10c
	// Func End, Address: 0x232b4c, Func Offset: 0x11c
}

// AnimPick__12zNMEStandardFi11en_npcgspotP5xGoal
// Start address: 0x232b50
uint32 AnimPick()
{
	uint32 da_anim;
	// Line 858, Address: 0x232b50, Func Offset: 0
	// Line 862, Address: 0x232b54, Func Offset: 0x4
	// Func End, Address: 0x232b5c, Func Offset: 0xc
}

// MvptFirstFollow__12zNMEStandardFv
// Start address: 0x232b60
zMovePoint* zNMEStandard::MvptFirstFollow()
{
	zMovePoint* nav;
	// Line 827, Address: 0x232b60, Func Offset: 0
	// Line 830, Address: 0x232b70, Func Offset: 0x10
	// Line 831, Address: 0x232b78, Func Offset: 0x18
	// Line 834, Address: 0x232b80, Func Offset: 0x20
	// Line 838, Address: 0x232b88, Func Offset: 0x28
	// Func End, Address: 0x232b94, Func Offset: 0x34
}

// ScenePostInit__13zMODStanEnemyFv
// Start address: 0x232c10
void zMODStanEnemy::ScenePostInit()
{
	// Line 636, Address: 0x232c10, Func Offset: 0
	// Line 637, Address: 0x232c18, Func Offset: 0x8
	// Line 639, Address: 0x232cfc, Func Offset: 0xec
	// Func End, Address: 0x232d08, Func Offset: 0xf8
}

// ScenePrepare__13zMODStanEnemyFv
// Start address: 0x232d10
void zMODStanEnemy::ScenePrepare()
{
	// Line 633, Address: 0x232d10, Func Offset: 0
	// Func End, Address: 0x232d18, Func Offset: 0x8
}

// FormOfPain__5WoundFii
// Start address: 0x232d20
int32 FormOfPain(int32 pup, int32 hitpoints)
{
	// Line 493, Address: 0x232d20, Func Offset: 0
	// Line 494, Address: 0x232d30, Func Offset: 0x10
	// Line 495, Address: 0x232d38, Func Offset: 0x18
	// Line 497, Address: 0x232d40, Func Offset: 0x20
	// Line 498, Address: 0x232d48, Func Offset: 0x28
	// Line 500, Address: 0x232d58, Func Offset: 0x38
	// Func End, Address: 0x232d60, Func Offset: 0x40
}

