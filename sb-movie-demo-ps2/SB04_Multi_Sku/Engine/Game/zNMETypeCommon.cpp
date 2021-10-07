



void PoofOfBubbles();
int32 DmgAmtForPlayerAttack(en_plyratak plyratak, en_plyrpup pup);
int32 NMEC_DmgAmtForAttack(en_npcdmg dmgtyp, en_plyrpup* pup_level);
en_nmevar NMEVariantIdx(en_npctyp ntyp);
int32 LaunchProjectile(en_haztyp haztyp, float32 spd_proj, float32 dst_minRange, xVec3* pos_launch, float32 tym_predictMax, float32 hyt_offset, float32 rad_min, float32 rad_max);
void GiveReward();
void DeathFXKick();
void zNMEFragCB(zFrag* frag, zFragAsset* asset);
void DieTheGoodDeath();
float32 ThrottleAdjust(float32 dt, float32 spd_want, float32 accel);
xAnimTable* CreateAnimTable(xAnimTable* table);
void NMEC_BuildStandardAnimTran();
xAnimTransition* AnimMakeSmackTran(uint32 animID);
int32 AnimStart(uint32 animID, int32 forceRestart);
int32 MatMoveToPos(xVec3* pos_tobe, float32 dt, float32 spd, int32 doTurn, float32 spd_turnrate);
float32 MatQRotTowards(float32 dt, xVec3* dir_face, float32 spd_turnrate);
xModelInstance* ModelAtomicFind(int32 index, int32 idx_prev, xModelInstance* mdl_prev);
int32 HaveLOSToPos(xVec3* pos, float32 dist, xScene* xscn, xBase* tgt, xCollis* colCallers);
int32 ReviewCollBounce(xEntCollis* npccol, xVec3* vel, float32 fac_elastic);
int32 ReviewCollSurfs(xEntCollis* npccol, zNMECommon* npc);
void RunCollision(float32 dt);
en_nmesimp Common_SimpStat();
void ApplyGlowDamp();
void ShadStufUpdate();
void FullShadAcquire();
void ShadowPrep();
void TellMeVisOnOff(xEnt* ent);
int32 Respawn(xVec3* pos, zMovePoint* mvptFirst, zMovePoint* mvptSpawnRef);
void Damage(en_npcdmg dmgtype, xBase* who, xVec3* vec_hit, int32 amt_dmgCaller, en_plyrpup pup_fromCaller);
void ConvertHitEvent(NMESysEvent* sysmail);
int32 DfltSysEventMail(NMESysEvent* sysmail);
int32 SysEvent(xBase* from, xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget, uint32 toParamWidgetID, int32* handled);
int32 NMEMessage(NMEMsg* mail);
void CreateConfig();
void Setup();
void Common_Init();
int32 zNMECommon_MaxShadowNeededLater();
uint8 zNMECommon_IsConversation();
void SomethingWonderfulUpdate();
void HudRender();
void PostRender();
void RenderToBuckets();
void PostTimestep(float32 dt);
void Timestep(float32 dt);
void SceneReset();
void ScenePostSetup();
void SceneSetup();
void ScenePostInit();
int32 NME_OrdComp_byType(void* vkey, void* vitem);
void SceneFinish();
void ScenePrepare();
void ModulePrepUse();
void AddTweaks(int8* prefix_root);

// PoofOfBubbles__10zNMECommonCFv
// Start address: 0x23a7f0
void zNMECommon::PoofOfBubbles()
{
	xSphere emitSphere;
	int32 i;
	xVec3 pos_emit;
	int32 num_vert;
	int32 i;
	xVec3 pos_emit;
	// Line 5568, Address: 0x23a7f0, Func Offset: 0
	// Line 5569, Address: 0x23a80c, Func Offset: 0x1c
	// Line 5591, Address: 0x23a81c, Func Offset: 0x2c
	// Line 5593, Address: 0x23a82c, Func Offset: 0x3c
	// Line 5601, Address: 0x23a85c, Func Offset: 0x6c
	// Line 5604, Address: 0x23a868, Func Offset: 0x78
	// Line 5609, Address: 0x23a878, Func Offset: 0x88
	// Line 5613, Address: 0x23a894, Func Offset: 0xa4
	// Line 5616, Address: 0x23a8a0, Func Offset: 0xb0
	// Line 5619, Address: 0x23a8b0, Func Offset: 0xc0
	// Line 5574, Address: 0x23a8c0, Func Offset: 0xd0
	// Line 5619, Address: 0x23a8c4, Func Offset: 0xd4
	// Line 5584, Address: 0x23a8ec, Func Offset: 0xfc
	// Line 5620, Address: 0x23a8f4, Func Offset: 0x104
	// Func End, Address: 0x23a910, Func Offset: 0x120
}

// DmgAmtForPlayerAttack__F11en_plyratak10en_plyrpup
// Start address: 0x23a910
int32 DmgAmtForPlayerAttack(en_plyratak plyratak, en_plyrpup pup)
{
	// Line 5548, Address: 0x23a910, Func Offset: 0
	// Line 5549, Address: 0x23a928, Func Offset: 0x18
	// Func End, Address: 0x23a930, Func Offset: 0x20
}

// NMEC_DmgAmtForAttack__F9en_npcdmgP10en_plyrpup
// Start address: 0x23a930
int32 NMEC_DmgAmtForAttack(en_npcdmg dmgtyp, en_plyrpup* pup_level)
{
	en_plyratak plyratak;
	int32 notPlayerAttack;
	en_plyrpup pup;
	// Line 5398, Address: 0x23a930, Func Offset: 0
	// Line 5414, Address: 0x23a934, Func Offset: 0x4
	// Line 5398, Address: 0x23a938, Func Offset: 0x8
	// Line 5402, Address: 0x23a948, Func Offset: 0x18
	// Line 5414, Address: 0x23a94c, Func Offset: 0x1c
	// Line 5416, Address: 0x23a970, Func Offset: 0x40
	// Line 5417, Address: 0x23a97c, Func Offset: 0x4c
	// Line 5419, Address: 0x23a984, Func Offset: 0x54
	// Line 5420, Address: 0x23a988, Func Offset: 0x58
	// Line 5425, Address: 0x23a990, Func Offset: 0x60
	// Line 5429, Address: 0x23a998, Func Offset: 0x68
	// Line 5433, Address: 0x23a9a0, Func Offset: 0x70
	// Line 5440, Address: 0x23a9ac, Func Offset: 0x7c
	// Line 5444, Address: 0x23a9b4, Func Offset: 0x84
	// Line 5449, Address: 0x23a9c0, Func Offset: 0x90
	// Line 5454, Address: 0x23a9c8, Func Offset: 0x98
	// Line 5458, Address: 0x23a9d0, Func Offset: 0xa0
	// Line 5463, Address: 0x23a9d8, Func Offset: 0xa8
	// Line 5466, Address: 0x23a9e4, Func Offset: 0xb4
	// Line 5468, Address: 0x23a9ec, Func Offset: 0xbc
	// Line 5469, Address: 0x23a9f8, Func Offset: 0xc8
	// Line 5476, Address: 0x23aa00, Func Offset: 0xd0
	// Line 5480, Address: 0x23aa08, Func Offset: 0xd8
	// Line 5484, Address: 0x23aa10, Func Offset: 0xe0
	// Line 5488, Address: 0x23aa18, Func Offset: 0xe8
	// Line 5494, Address: 0x23aa20, Func Offset: 0xf0
	// Line 5499, Address: 0x23aa2c, Func Offset: 0xfc
	// Line 5503, Address: 0x23aa34, Func Offset: 0x104
	// Line 5506, Address: 0x23aa3c, Func Offset: 0x10c
	// Line 5509, Address: 0x23aa44, Func Offset: 0x114
	// Line 5514, Address: 0x23aa48, Func Offset: 0x118
	// Line 5515, Address: 0x23aa50, Func Offset: 0x120
	// Line 5467, Address: 0x23aa58, Func Offset: 0x128
	// Line 5520, Address: 0x23aa64, Func Offset: 0x134
	// Line 5526, Address: 0x23aa70, Func Offset: 0x140
	// Line 5527, Address: 0x23aa78, Func Offset: 0x148
	// Line 5532, Address: 0x23aa7c, Func Offset: 0x14c
	// Line 5533, Address: 0x23aa98, Func Offset: 0x168
	// Func End, Address: 0x23aaac, Func Offset: 0x17c
}

// NMEVariantIdx__F9en_npctyp
// Start address: 0x23aab0
en_nmevar NMEVariantIdx(en_npctyp ntyp)
{
	en_nmevar nvar;
	// Line 5272, Address: 0x23aab0, Func Offset: 0
	// Line 5284, Address: 0x23aad8, Func Offset: 0x28
	// Line 5297, Address: 0x23aae0, Func Offset: 0x30
	// Line 5309, Address: 0x23aae8, Func Offset: 0x38
	// Line 5313, Address: 0x23aaf0, Func Offset: 0x40
	// Line 5317, Address: 0x23aaf8, Func Offset: 0x48
	// Line 5321, Address: 0x23ab00, Func Offset: 0x50
	// Line 5325, Address: 0x23ab08, Func Offset: 0x58
	// Line 5336, Address: 0x23ab10, Func Offset: 0x60
	// Line 5341, Address: 0x23ab14, Func Offset: 0x64
	// Func End, Address: 0x23ab1c, Func Offset: 0x6c
}

// LaunchProjectile__10zNMECommonF9en_haztypffPC5xVec3ffff
// Start address: 0x23ab20
int32 zNMECommon::LaunchProjectile(en_haztyp haztyp, float32 spd_proj, float32 dst_minRange, xVec3* pos_launch, float32 tym_predictMax, float32 hyt_offset, float32 rad_min, float32 rad_max)
{
	zNMEHazard* haz;
	xVec3 dir;
	xVec3 pos_tgt;
	float32 tym_predict;
	float32 dst_tgt;
	// Line 5202, Address: 0x23ab20, Func Offset: 0
	// Line 5203, Address: 0x23ab70, Func Offset: 0x50
	// Line 5204, Address: 0x23ab7c, Func Offset: 0x5c
	// Line 5208, Address: 0x23ab84, Func Offset: 0x64
	// Line 5209, Address: 0x23abbc, Func Offset: 0x9c
	// Line 5212, Address: 0x23abc4, Func Offset: 0xa4
	// Line 5213, Address: 0x23ac38, Func Offset: 0x118
	// Line 5205, Address: 0x23ac44, Func Offset: 0x124
	// Line 5213, Address: 0x23ac4c, Func Offset: 0x12c
	// Line 5208, Address: 0x23ac50, Func Offset: 0x130
	// Line 5213, Address: 0x23ac60, Func Offset: 0x140
	// Line 5208, Address: 0x23ac68, Func Offset: 0x148
	// Line 5216, Address: 0x23ac74, Func Offset: 0x154
	// Line 5217, Address: 0x23ac88, Func Offset: 0x168
	// Line 5225, Address: 0x23acb0, Func Offset: 0x190
	// Line 5226, Address: 0x23acb4, Func Offset: 0x194
	// Line 5225, Address: 0x23acb8, Func Offset: 0x198
	// Line 5226, Address: 0x23acbc, Func Offset: 0x19c
	// Line 5225, Address: 0x23acc0, Func Offset: 0x1a0
	// Line 5226, Address: 0x23acc4, Func Offset: 0x1a4
	// Line 5225, Address: 0x23acc8, Func Offset: 0x1a8
	// Line 5226, Address: 0x23ad20, Func Offset: 0x200
	// Line 5228, Address: 0x23ad40, Func Offset: 0x220
	// Line 5231, Address: 0x23ad6c, Func Offset: 0x24c
	// Line 5240, Address: 0x23ae04, Func Offset: 0x2e4
	// Line 5236, Address: 0x23ae08, Func Offset: 0x2e8
	// Line 5240, Address: 0x23ae0c, Func Offset: 0x2ec
	// Line 5238, Address: 0x23ae10, Func Offset: 0x2f0
	// Line 5240, Address: 0x23ae18, Func Offset: 0x2f8
	// Line 5238, Address: 0x23ae1c, Func Offset: 0x2fc
	// Line 5236, Address: 0x23ae2c, Func Offset: 0x30c
	// Line 5238, Address: 0x23ae34, Func Offset: 0x314
	// Line 5239, Address: 0x23ae58, Func Offset: 0x338
	// Line 5238, Address: 0x23ae5c, Func Offset: 0x33c
	// Line 5239, Address: 0x23ae60, Func Offset: 0x340
	// Line 5240, Address: 0x23ae68, Func Offset: 0x348
	// Line 5248, Address: 0x23ae7c, Func Offset: 0x35c
	// Line 5249, Address: 0x23ae98, Func Offset: 0x378
	// Line 5248, Address: 0x23ae9c, Func Offset: 0x37c
	// Line 5249, Address: 0x23aea4, Func Offset: 0x384
	// Line 5262, Address: 0x23aef8, Func Offset: 0x3d8
	// Line 5261, Address: 0x23aefc, Func Offset: 0x3dc
	// Line 5262, Address: 0x23af08, Func Offset: 0x3e8
	// Line 5261, Address: 0x23af14, Func Offset: 0x3f4
	// Line 5262, Address: 0x23af1c, Func Offset: 0x3fc
	// Line 5263, Address: 0x23af30, Func Offset: 0x410
	// Line 5265, Address: 0x23af9c, Func Offset: 0x47c
	// Line 5263, Address: 0x23afa0, Func Offset: 0x480
	// Line 5265, Address: 0x23afa4, Func Offset: 0x484
	// Line 5243, Address: 0x23afdc, Func Offset: 0x4bc
	// Line 5244, Address: 0x23afe0, Func Offset: 0x4c0
	// Line 5265, Address: 0x23afe4, Func Offset: 0x4c4
	// Line 5244, Address: 0x23aff0, Func Offset: 0x4d0
	// Line 5265, Address: 0x23aff4, Func Offset: 0x4d4
	// Line 5244, Address: 0x23b000, Func Offset: 0x4e0
	// Line 5265, Address: 0x23b004, Func Offset: 0x4e4
	// Line 5245, Address: 0x23b018, Func Offset: 0x4f8
	// Line 5265, Address: 0x23b01c, Func Offset: 0x4fc
	// Line 5245, Address: 0x23b024, Func Offset: 0x504
	// Line 5265, Address: 0x23b028, Func Offset: 0x508
	// Line 5245, Address: 0x23b030, Func Offset: 0x510
	// Line 5246, Address: 0x23b034, Func Offset: 0x514
	// Line 5265, Address: 0x23b03c, Func Offset: 0x51c
	// Line 5254, Address: 0x23b04c, Func Offset: 0x52c
	// Line 5255, Address: 0x23b050, Func Offset: 0x530
	// Line 5265, Address: 0x23b05c, Func Offset: 0x53c
	// Line 5256, Address: 0x23b07c, Func Offset: 0x55c
	// Line 5265, Address: 0x23b080, Func Offset: 0x560
	// Line 5256, Address: 0x23b088, Func Offset: 0x568
	// Line 5265, Address: 0x23b08c, Func Offset: 0x56c
	// Line 5256, Address: 0x23b094, Func Offset: 0x574
	// Line 5266, Address: 0x23b0a8, Func Offset: 0x588
	// Func End, Address: 0x23b0dc, Func Offset: 0x5bc
}

// GiveReward__10zNMECommonCFv
// Start address: 0x23b0e0
void zNMECommon::GiveReward()
{
	// Line 5171, Address: 0x23b0e0, Func Offset: 0
	// Func End, Address: 0x23b0f4, Func Offset: 0x14
}

// DeathFXKick__10zNMECommonFv
// Start address: 0x23b100
void zNMECommon::DeathFXKick()
{
	zShrapnelAsset* shrp;
	xVec3 vel;
	// Line 5129, Address: 0x23b100, Func Offset: 0
	// Line 5130, Address: 0x23b110, Func Offset: 0x10
	// Line 5131, Address: 0x23b114, Func Offset: 0x14
	// Line 5133, Address: 0x23b11c, Func Offset: 0x1c
	// Line 5134, Address: 0x23b124, Func Offset: 0x24
	// Line 5135, Address: 0x23b14c, Func Offset: 0x4c
	// Line 5132, Address: 0x23b1b4, Func Offset: 0xb4
	// Line 5135, Address: 0x23b1b8, Func Offset: 0xb8
	// Line 5132, Address: 0x23b1c4, Func Offset: 0xc4
	// Line 5135, Address: 0x23b1c8, Func Offset: 0xc8
	// Line 5132, Address: 0x23b1cc, Func Offset: 0xcc
	// Line 5135, Address: 0x23b1d4, Func Offset: 0xd4
	// Line 5132, Address: 0x23b1e8, Func Offset: 0xe8
	// Line 5138, Address: 0x23b1f4, Func Offset: 0xf4
	// Line 5140, Address: 0x23b218, Func Offset: 0x118
	// Line 5143, Address: 0x23b230, Func Offset: 0x130
	// Line 5144, Address: 0x23b240, Func Offset: 0x140
	// Line 5145, Address: 0x23b248, Func Offset: 0x148
	// Line 5146, Address: 0x23b340, Func Offset: 0x240
	// Func End, Address: 0x23b368, Func Offset: 0x268
}

// zNMEFragCB__FP5zFragP10zFragAsset
// Start address: 0x23b370
void zNMEFragCB(zFrag* frag, zFragAsset* asset)
{
	// Line 5120, Address: 0x23b370, Func Offset: 0
	// Line 5125, Address: 0x23b380, Func Offset: 0x10
	// Func End, Address: 0x23b39c, Func Offset: 0x2c
}

// DieTheGoodDeath__10zNMECommonFv
// Start address: 0x23b3a0
void zNMECommon::DieTheGoodDeath()
{
	// Line 5113, Address: 0x23b3a0, Func Offset: 0
	// Func End, Address: 0x23b3b0, Func Offset: 0x10
}

// ThrottleAdjust__10zNMECommonFfff
// Start address: 0x23b3b0
float32 zNMECommon::ThrottleAdjust(float32 dt, float32 spd_want, float32 accel)
{
	float32 acc;
	// Line 4652, Address: 0x23b3b0, Func Offset: 0
	// Line 4657, Address: 0x23b3c4, Func Offset: 0x14
	// Line 4660, Address: 0x23b3c8, Func Offset: 0x18
	// Line 4668, Address: 0x23b3dc, Func Offset: 0x2c
	// Line 4670, Address: 0x23b3f8, Func Offset: 0x48
	// Line 4672, Address: 0x23b400, Func Offset: 0x50
	// Line 4673, Address: 0x23b454, Func Offset: 0xa4
	// Line 4676, Address: 0x23b45c, Func Offset: 0xac
	// Line 4678, Address: 0x23b464, Func Offset: 0xb4
	// Line 4681, Address: 0x23b480, Func Offset: 0xd0
	// Line 4655, Address: 0x23b494, Func Offset: 0xe4
	// Line 4681, Address: 0x23b49c, Func Offset: 0xec
	// Line 4663, Address: 0x23b4a0, Func Offset: 0xf0
	// Line 4682, Address: 0x23b4a4, Func Offset: 0xf4
	// Func End, Address: 0x23b4ac, Func Offset: 0xfc
}

// CreateAnimTable__10zNMECommonFP10xAnimTable
// Start address: 0x23b4b0
xAnimTable* zNMECommon::CreateAnimTable(xAnimTable* table)
{
	// Line 4564, Address: 0x23b4b0, Func Offset: 0
	// Line 4571, Address: 0x23b4c0, Func Offset: 0x10
	// Line 4576, Address: 0x23b4c8, Func Offset: 0x18
	// Line 4585, Address: 0x23b510, Func Offset: 0x60
	// Line 4571, Address: 0x23b518, Func Offset: 0x68
	// Line 4585, Address: 0x23b51c, Func Offset: 0x6c
	// Line 4586, Address: 0x23b52c, Func Offset: 0x7c
	// Func End, Address: 0x23b53c, Func Offset: 0x8c
}

// NMEC_BuildStandardAnimTran__FP10xAnimTablePPcPiif
// Start address: 0x23b540
void NMEC_BuildStandardAnimTran()
{
	// Line 4557, Address: 0x23b540, Func Offset: 0
	// Func End, Address: 0x23b548, Func Offset: 0x8
}

// AnimMakeSmackTran__10zNMECommonCFUi
// Start address: 0x23b550
xAnimTransition* zNMECommon::AnimMakeSmackTran(uint32 animID)
{
	xAnimTransition* atran;
	// Line 4377, Address: 0x23b550, Func Offset: 0
	// Line 4380, Address: 0x23b554, Func Offset: 0x4
	// Line 4377, Address: 0x23b558, Func Offset: 0x8
	// Line 4380, Address: 0x23b560, Func Offset: 0x10
	// Line 4382, Address: 0x23b570, Func Offset: 0x20
	// Line 4388, Address: 0x23b578, Func Offset: 0x28
	// Line 4389, Address: 0x23b580, Func Offset: 0x30
	// Line 4392, Address: 0x23b588, Func Offset: 0x38
	// Line 4396, Address: 0x23b58c, Func Offset: 0x3c
	// Line 4393, Address: 0x23b590, Func Offset: 0x40
	// Line 4394, Address: 0x23b594, Func Offset: 0x44
	// Line 4395, Address: 0x23b59c, Func Offset: 0x4c
	// Line 4396, Address: 0x23b5a0, Func Offset: 0x50
	// Line 4397, Address: 0x23b5b0, Func Offset: 0x60
	// Line 4399, Address: 0x23b5b8, Func Offset: 0x68
	// Line 4402, Address: 0x23b5bc, Func Offset: 0x6c
	// Line 4383, Address: 0x23b5c4, Func Offset: 0x74
	// Line 4390, Address: 0x23b5cc, Func Offset: 0x7c
	// Line 4403, Address: 0x23b5d0, Func Offset: 0x80
	// Func End, Address: 0x23b5e0, Func Offset: 0x90
}

// AnimStart__10zNMECommonFUii
// Start address: 0x23b5e0
int32 zNMECommon::AnimStart(uint32 animID, int32 forceRestart)
{
	xAnimTransition* da_tran;
	int32 dumptable;
	// Line 4320, Address: 0x23b5e0, Func Offset: 0
	// Line 4328, Address: 0x23b5e4, Func Offset: 0x4
	// Line 4320, Address: 0x23b5e8, Func Offset: 0x8
	// Line 4328, Address: 0x23b5f8, Func Offset: 0x18
	// Line 4337, Address: 0x23b608, Func Offset: 0x28
	// Line 4338, Address: 0x23b618, Func Offset: 0x38
	// Line 4339, Address: 0x23b634, Func Offset: 0x54
	// Line 4337, Address: 0x23b65c, Func Offset: 0x7c
	// Line 4343, Address: 0x23b664, Func Offset: 0x84
	// Line 4344, Address: 0x23b66c, Func Offset: 0x8c
	// Line 4346, Address: 0x23b674, Func Offset: 0x94
	// Line 4347, Address: 0x23b684, Func Offset: 0xa4
	// Line 4348, Address: 0x23b688, Func Offset: 0xa8
	// Line 4350, Address: 0x23b690, Func Offset: 0xb0
	// Line 4351, Address: 0x23b698, Func Offset: 0xb8
	// Line 4367, Address: 0x23b6b0, Func Offset: 0xd0
	// Line 4368, Address: 0x23b6c0, Func Offset: 0xe0
	// Line 4369, Address: 0x23b6d4, Func Offset: 0xf4
	// Line 4370, Address: 0x23b6e0, Func Offset: 0x100
	// Line 4373, Address: 0x23b754, Func Offset: 0x174
	// Line 4355, Address: 0x23b774, Func Offset: 0x194
	// Line 4373, Address: 0x23b778, Func Offset: 0x198
	// Line 4367, Address: 0x23b7b0, Func Offset: 0x1d0
	// Line 4373, Address: 0x23b7b8, Func Offset: 0x1d8
	// Line 4369, Address: 0x23b7d0, Func Offset: 0x1f0
	// Line 4374, Address: 0x23b7d8, Func Offset: 0x1f8
	// Func End, Address: 0x23b7f0, Func Offset: 0x210
}

// MatMoveToPos__10zNMECommonFPC5xVec3ffif
// Start address: 0x23b7f0
int32 zNMECommon::MatMoveToPos(xVec3* pos_tobe, float32 dt, float32 spd, int32 doTurn, float32 spd_turnrate)
{
	xVec3 pos_dest;
	xVec3 dir_dest;
	xVec3 delta;
	// Line 4221, Address: 0x23b7f0, Func Offset: 0
	// Line 4226, Address: 0x23b7f8, Func Offset: 0x8
	// Line 4221, Address: 0x23b7fc, Func Offset: 0xc
	// Line 4226, Address: 0x23b800, Func Offset: 0x10
	// Line 4221, Address: 0x23b804, Func Offset: 0x14
	// Line 4226, Address: 0x23b808, Func Offset: 0x18
	// Line 4221, Address: 0x23b80c, Func Offset: 0x1c
	// Line 4227, Address: 0x23b810, Func Offset: 0x20
	// Line 4221, Address: 0x23b814, Func Offset: 0x24
	// Line 4227, Address: 0x23b818, Func Offset: 0x28
	// Line 4226, Address: 0x23b824, Func Offset: 0x34
	// Line 4227, Address: 0x23b828, Func Offset: 0x38
	// Line 4226, Address: 0x23b834, Func Offset: 0x44
	// Line 4227, Address: 0x23b83c, Func Offset: 0x4c
	// Line 4226, Address: 0x23b844, Func Offset: 0x54
	// Line 4227, Address: 0x23b848, Func Offset: 0x58
	// Line 4228, Address: 0x23b8b4, Func Offset: 0xc4
	// Line 4233, Address: 0x23b8c8, Func Offset: 0xd8
	// Line 4228, Address: 0x23b8cc, Func Offset: 0xdc
	// Line 4233, Address: 0x23b8d0, Func Offset: 0xe0
	// Line 4228, Address: 0x23b8d4, Func Offset: 0xe4
	// Line 4232, Address: 0x23b8dc, Func Offset: 0xec
	// Line 4233, Address: 0x23b8ec, Func Offset: 0xfc
	// Line 4232, Address: 0x23b8f8, Func Offset: 0x108
	// Line 4233, Address: 0x23b900, Func Offset: 0x110
	// Line 4234, Address: 0x23b914, Func Offset: 0x124
	// Line 4236, Address: 0x23b920, Func Offset: 0x130
	// Line 4239, Address: 0x23b930, Func Offset: 0x140
	// Line 4241, Address: 0x23b93c, Func Offset: 0x14c
	// Line 4239, Address: 0x23b940, Func Offset: 0x150
	// Line 4241, Address: 0x23b960, Func Offset: 0x170
	// Line 4246, Address: 0x23b984, Func Offset: 0x194
	// Line 4247, Address: 0x23b9b4, Func Offset: 0x1c4
	// Line 4250, Address: 0x23b9bc, Func Offset: 0x1cc
	// Line 4251, Address: 0x23b9c4, Func Offset: 0x1d4
	// Line 4250, Address: 0x23b9c8, Func Offset: 0x1d8
	// Line 4252, Address: 0x23b9dc, Func Offset: 0x1ec
	// Line 4250, Address: 0x23b9e0, Func Offset: 0x1f0
	// Line 4251, Address: 0x23b9e8, Func Offset: 0x1f8
	// Line 4250, Address: 0x23b9ec, Func Offset: 0x1fc
	// Line 4251, Address: 0x23ba10, Func Offset: 0x220
	// Line 4250, Address: 0x23ba14, Func Offset: 0x224
	// Line 4251, Address: 0x23ba24, Func Offset: 0x234
	// Line 4250, Address: 0x23ba28, Func Offset: 0x238
	// Line 4251, Address: 0x23ba2c, Func Offset: 0x23c
	// Line 4250, Address: 0x23ba30, Func Offset: 0x240
	// Line 4251, Address: 0x23ba38, Func Offset: 0x248
	// Line 4252, Address: 0x23ba64, Func Offset: 0x274
	// Line 4248, Address: 0x23ba6c, Func Offset: 0x27c
	// Line 4252, Address: 0x23ba74, Func Offset: 0x284
	// Line 4254, Address: 0x23ba84, Func Offset: 0x294
	// Func End, Address: 0x23baa0, Func Offset: 0x2b0
}

// MatQRotTowards__10zNMECommonFfPC5xVec3f
// Start address: 0x23baa0
float32 zNMECommon::MatQRotTowards(float32 dt, xVec3* dir_face, float32 spd_turnrate)
{
	xMat3x3 tmpmat;
	xVec3 dir;
	xQuat quat;
	xQuat qold;
	float32 qdot;
	float32 rotang;
	// Line 4119, Address: 0x23baa0, Func Offset: 0
	// Line 4121, Address: 0x23baa4, Func Offset: 0x4
	// Line 4119, Address: 0x23baac, Func Offset: 0xc
	// Line 4121, Address: 0x23bab0, Func Offset: 0x10
	// Line 4119, Address: 0x23bab4, Func Offset: 0x14
	// Line 4121, Address: 0x23bab8, Func Offset: 0x18
	// Line 4119, Address: 0x23bac0, Func Offset: 0x20
	// Line 4122, Address: 0x23bac4, Func Offset: 0x24
	// Line 4119, Address: 0x23bac8, Func Offset: 0x28
	// Line 4121, Address: 0x23bad0, Func Offset: 0x30
	// Line 4122, Address: 0x23bb18, Func Offset: 0x78
	// Line 4126, Address: 0x23bb20, Func Offset: 0x80
	// Line 4132, Address: 0x23bb44, Func Offset: 0xa4
	// Line 4133, Address: 0x23bb50, Func Offset: 0xb0
	// Line 4135, Address: 0x23bb60, Func Offset: 0xc0
	// Line 4136, Address: 0x23bb6c, Func Offset: 0xcc
	// Line 4138, Address: 0x23bb80, Func Offset: 0xe0
	// Line 4136, Address: 0x23bb98, Func Offset: 0xf8
	// Line 4138, Address: 0x23bb9c, Func Offset: 0xfc
	// Line 4139, Address: 0x23bbb4, Func Offset: 0x114
	// Line 4144, Address: 0x23bbc0, Func Offset: 0x120
	// Line 4145, Address: 0x23bbd8, Func Offset: 0x138
	// Line 4148, Address: 0x23bbdc, Func Offset: 0x13c
	// Line 4149, Address: 0x23bc28, Func Offset: 0x188
	// Line 4150, Address: 0x23bc34, Func Offset: 0x194
	// Line 4160, Address: 0x23bc9c, Func Offset: 0x1fc
	// Line 4140, Address: 0x23bca8, Func Offset: 0x208
	// Line 4160, Address: 0x23bcac, Func Offset: 0x20c
	// Line 4140, Address: 0x23bcb0, Func Offset: 0x210
	// Line 4160, Address: 0x23bcb4, Func Offset: 0x214
	// Line 4140, Address: 0x23bcb8, Func Offset: 0x218
	// Line 4160, Address: 0x23bcbc, Func Offset: 0x21c
	// Line 4153, Address: 0x23bcc8, Func Offset: 0x228
	// Line 4160, Address: 0x23bcd4, Func Offset: 0x234
	// Line 4161, Address: 0x23bcfc, Func Offset: 0x25c
	// Func End, Address: 0x23bd18, Func Offset: 0x278
}

// ModelAtomicFind__10zNMECommonFiiP14xModelInstance
// Start address: 0x23bd20
xModelInstance* zNMECommon::ModelAtomicFind(int32 index, int32 idx_prev, xModelInstance* mdl_prev)
{
	xModelInstance* da_atomic;
	xModelInstance* minst;
	int32 midx;
	// Line 4023, Address: 0x23bd20, Func Offset: 0
	// Line 4028, Address: 0x23bd24, Func Offset: 0x4
	// Line 4029, Address: 0x23bd34, Func Offset: 0x14
	// Line 4030, Address: 0x23bd38, Func Offset: 0x18
	// Line 4037, Address: 0x23bd40, Func Offset: 0x20
	// Line 4039, Address: 0x23bd48, Func Offset: 0x28
	// Line 4042, Address: 0x23bd50, Func Offset: 0x30
	// Line 4043, Address: 0x23bd54, Func Offset: 0x34
	// Line 4045, Address: 0x23bd60, Func Offset: 0x40
	// Line 4046, Address: 0x23bd70, Func Offset: 0x50
	// Func End, Address: 0x23bd78, Func Offset: 0x58
}

// HaveLOSToPos__10zNMECommonFP5xVec3fP6xSceneP5xBaseP7xCollis
// Start address: 0x23bd80
int32 zNMECommon::HaveLOSToPos(xVec3* pos, float32 dist, xScene* xscn, xBase* tgt, xCollis* colCallers)
{
	int32 result;
	xRay3 ray;
	xVec3 mypos;
	xCollis* colrec;
	xCollis localCollis;
	// Line 3887, Address: 0x23bd80, Func Offset: 0
	// Line 3889, Address: 0x23bd84, Func Offset: 0x4
	// Line 3887, Address: 0x23bd88, Func Offset: 0x8
	// Line 3889, Address: 0x23bd8c, Func Offset: 0xc
	// Line 3887, Address: 0x23bd90, Func Offset: 0x10
	// Line 3889, Address: 0x23bdc0, Func Offset: 0x40
	// Line 3890, Address: 0x23bde4, Func Offset: 0x64
	// Line 3894, Address: 0x23be0c, Func Offset: 0x8c
	// Line 3895, Address: 0x23be14, Func Offset: 0x94
	// Line 3909, Address: 0x23be18, Func Offset: 0x98
	// Line 3913, Address: 0x23be24, Func Offset: 0xa4
	// Line 3909, Address: 0x23be28, Func Offset: 0xa8
	// Line 3913, Address: 0x23be34, Func Offset: 0xb4
	// Line 3916, Address: 0x23be64, Func Offset: 0xe4
	// Line 3917, Address: 0x23be68, Func Offset: 0xe8
	// Line 3918, Address: 0x23be6c, Func Offset: 0xec
	// Line 3917, Address: 0x23be70, Func Offset: 0xf0
	// Line 3918, Address: 0x23be74, Func Offset: 0xf4
	// Line 3919, Address: 0x23be80, Func Offset: 0x100
	// Line 3918, Address: 0x23be84, Func Offset: 0x104
	// Line 3919, Address: 0x23bea8, Func Offset: 0x128
	// Line 3920, Address: 0x23beb0, Func Offset: 0x130
	// Line 3921, Address: 0x23beb4, Func Offset: 0x134
	// Line 3920, Address: 0x23beb8, Func Offset: 0x138
	// Line 3924, Address: 0x23bebc, Func Offset: 0x13c
	// Line 3920, Address: 0x23bec0, Func Offset: 0x140
	// Line 3924, Address: 0x23bec4, Func Offset: 0x144
	// Line 3921, Address: 0x23bec8, Func Offset: 0x148
	// Line 3924, Address: 0x23becc, Func Offset: 0x14c
	// Line 3920, Address: 0x23bed0, Func Offset: 0x150
	// Line 3924, Address: 0x23bed8, Func Offset: 0x158
	// Line 3927, Address: 0x23bee4, Func Offset: 0x164
	// Line 3945, Address: 0x23bf14, Func Offset: 0x194
	// Line 3947, Address: 0x23bf24, Func Offset: 0x1a4
	// Line 3953, Address: 0x23bf34, Func Offset: 0x1b4
	// Line 3954, Address: 0x23bf48, Func Offset: 0x1c8
	// Line 3955, Address: 0x23bf54, Func Offset: 0x1d4
	// Line 3976, Address: 0x23bf58, Func Offset: 0x1d8
	// Line 3897, Address: 0x23bf60, Func Offset: 0x1e0
	// Line 3976, Address: 0x23bf64, Func Offset: 0x1e4
	// Line 3898, Address: 0x23bf74, Func Offset: 0x1f4
	// Line 3976, Address: 0x23bf78, Func Offset: 0x1f8
	// Line 3913, Address: 0x23bf8c, Func Offset: 0x20c
	// Line 3976, Address: 0x23bfa8, Func Offset: 0x228
	// Line 3927, Address: 0x23bfac, Func Offset: 0x22c
	// Line 3946, Address: 0x23bfc8, Func Offset: 0x248
	// Line 3952, Address: 0x23bfd0, Func Offset: 0x250
	// Line 3977, Address: 0x23bfe0, Func Offset: 0x260
	// Func End, Address: 0x23c008, Func Offset: 0x288
}

// ReviewCollBounce__10zNMECommonFPC10xEntCollisP5xVec3f
// Start address: 0x23c010
int32 zNMECommon::ReviewCollBounce(xEntCollis* npccol, xVec3* vel, float32 fac_elastic)
{
	xVec3 vec_depen;
	int32 i;
	xCollis* colrec;
	xVec3 dir_effnorm;
	xVec3 vel_perp;
	// Line 3722, Address: 0x23c010, Func Offset: 0
	// Line 3723, Address: 0x23c014, Func Offset: 0x4
	// Line 3722, Address: 0x23c018, Func Offset: 0x8
	// Line 3723, Address: 0x23c030, Func Offset: 0x20
	// Line 3724, Address: 0x23c03c, Func Offset: 0x2c
	// Line 3730, Address: 0x23c044, Func Offset: 0x34
	// Line 3731, Address: 0x23c054, Func Offset: 0x44
	// Line 3733, Address: 0x23c080, Func Offset: 0x70
	// Line 3735, Address: 0x23c084, Func Offset: 0x74
	// Line 3733, Address: 0x23c088, Func Offset: 0x78
	// Line 3735, Address: 0x23c08c, Func Offset: 0x7c
	// Line 3734, Address: 0x23c090, Func Offset: 0x80
	// Line 3733, Address: 0x23c094, Func Offset: 0x84
	// Line 3734, Address: 0x23c098, Func Offset: 0x88
	// Line 3733, Address: 0x23c09c, Func Offset: 0x8c
	// Line 3734, Address: 0x23c0ac, Func Offset: 0x9c
	// Line 3733, Address: 0x23c0b4, Func Offset: 0xa4
	// Line 3734, Address: 0x23c0b8, Func Offset: 0xa8
	// Line 3733, Address: 0x23c0c0, Func Offset: 0xb0
	// Line 3734, Address: 0x23c0c4, Func Offset: 0xb4
	// Line 3735, Address: 0x23c120, Func Offset: 0x110
	// Line 3751, Address: 0x23c128, Func Offset: 0x118
	// Line 3735, Address: 0x23c12c, Func Offset: 0x11c
	// Line 3751, Address: 0x23c130, Func Offset: 0x120
	// Line 3735, Address: 0x23c134, Func Offset: 0x124
	// Line 3751, Address: 0x23c13c, Func Offset: 0x12c
	// Line 3750, Address: 0x23c140, Func Offset: 0x130
	// Line 3751, Address: 0x23c15c, Func Offset: 0x14c
	// Line 3752, Address: 0x23c168, Func Offset: 0x158
	// Line 3754, Address: 0x23c170, Func Offset: 0x160
	// Line 3762, Address: 0x23c190, Func Offset: 0x180
	// Line 3761, Address: 0x23c194, Func Offset: 0x184
	// Line 3762, Address: 0x23c198, Func Offset: 0x188
	// Line 3754, Address: 0x23c19c, Func Offset: 0x18c
	// Line 3762, Address: 0x23c1a0, Func Offset: 0x190
	// Line 3765, Address: 0x23c1a4, Func Offset: 0x194
	// Line 3754, Address: 0x23c1a8, Func Offset: 0x198
	// Line 3761, Address: 0x23c1c8, Func Offset: 0x1b8
	// Line 3754, Address: 0x23c1cc, Func Offset: 0x1bc
	// Line 3761, Address: 0x23c1d8, Func Offset: 0x1c8
	// Line 3763, Address: 0x23c1e0, Func Offset: 0x1d0
	// Line 3754, Address: 0x23c1e4, Func Offset: 0x1d4
	// Line 3762, Address: 0x23c208, Func Offset: 0x1f8
	// Line 3754, Address: 0x23c214, Func Offset: 0x204
	// Line 3761, Address: 0x23c220, Func Offset: 0x210
	// Line 3754, Address: 0x23c224, Func Offset: 0x214
	// Line 3761, Address: 0x23c228, Func Offset: 0x218
	// Line 3762, Address: 0x23c22c, Func Offset: 0x21c
	// Line 3761, Address: 0x23c230, Func Offset: 0x220
	// Line 3762, Address: 0x23c234, Func Offset: 0x224
	// Line 3761, Address: 0x23c238, Func Offset: 0x228
	// Line 3762, Address: 0x23c23c, Func Offset: 0x22c
	// Line 3761, Address: 0x23c240, Func Offset: 0x230
	// Line 3762, Address: 0x23c248, Func Offset: 0x238
	// Line 3761, Address: 0x23c24c, Func Offset: 0x23c
	// Line 3762, Address: 0x23c250, Func Offset: 0x240
	// Line 3761, Address: 0x23c254, Func Offset: 0x244
	// Line 3762, Address: 0x23c258, Func Offset: 0x248
	// Line 3763, Address: 0x23c274, Func Offset: 0x264
	// Line 3762, Address: 0x23c278, Func Offset: 0x268
	// Line 3763, Address: 0x23c28c, Func Offset: 0x27c
	// Line 3762, Address: 0x23c294, Func Offset: 0x284
	// Line 3763, Address: 0x23c2a4, Func Offset: 0x294
	// Line 3762, Address: 0x23c2ac, Func Offset: 0x29c
	// Line 3763, Address: 0x23c2b0, Func Offset: 0x2a0
	// Line 3762, Address: 0x23c2b4, Func Offset: 0x2a4
	// Line 3763, Address: 0x23c2b8, Func Offset: 0x2a8
	// Line 3769, Address: 0x23c2f8, Func Offset: 0x2e8
	// Func End, Address: 0x23c310, Func Offset: 0x300
}

// ReviewCollSurfs__10zNMECommonFPC10xEntCollisP10zNMECommon
// Start address: 0x23c310
int32 zNMECommon::ReviewCollSurfs(xEntCollis* npccol, zNMECommon* npc)
{
	int32 badsurf;
	int32 i;
	xCollis* colrec;
	float32 goodep;
	xSurface* surf;
	// Line 3654, Address: 0x23c310, Func Offset: 0
	// Line 3658, Address: 0x23c314, Func Offset: 0x4
	// Line 3654, Address: 0x23c318, Func Offset: 0x8
	// Line 3655, Address: 0x23c334, Func Offset: 0x24
	// Line 3654, Address: 0x23c338, Func Offset: 0x28
	// Line 3658, Address: 0x23c33c, Func Offset: 0x2c
	// Line 3654, Address: 0x23c340, Func Offset: 0x30
	// Line 3658, Address: 0x23c344, Func Offset: 0x34
	// Line 3680, Address: 0x23c34c, Func Offset: 0x3c
	// Line 3659, Address: 0x23c358, Func Offset: 0x48
	// Line 3680, Address: 0x23c35c, Func Offset: 0x4c
	// Line 3670, Address: 0x23c38c, Func Offset: 0x7c
	// Line 3680, Address: 0x23c390, Func Offset: 0x80
	// Line 3674, Address: 0x23c3e4, Func Offset: 0xd4
	// Line 3680, Address: 0x23c3f8, Func Offset: 0xe8
	// Line 3676, Address: 0x23c404, Func Offset: 0xf4
	// Line 3681, Address: 0x23c40c, Func Offset: 0xfc
	// Func End, Address: 0x23c430, Func Offset: 0x120
}

// RunCollision__10zNMECommonFf
// Start address: 0x23c440
void zNMECommon::RunCollision(float32 dt)
{
	xEntCollis collisData;
	// Line 3562, Address: 0x23c440, Func Offset: 0
	// Line 3568, Address: 0x23c444, Func Offset: 0x4
	// Line 3562, Address: 0x23c448, Func Offset: 0x8
	// Line 3568, Address: 0x23c44c, Func Offset: 0xc
	// Line 3562, Address: 0x23c450, Func Offset: 0x10
	// Line 3568, Address: 0x23c460, Func Offset: 0x20
	// Line 3570, Address: 0x23c468, Func Offset: 0x28
	// Line 3575, Address: 0x23c46c, Func Offset: 0x2c
	// Line 3570, Address: 0x23c470, Func Offset: 0x30
	// Line 3571, Address: 0x23c474, Func Offset: 0x34
	// Line 3572, Address: 0x23c480, Func Offset: 0x40
	// Line 3575, Address: 0x23c48c, Func Offset: 0x4c
	// Line 3578, Address: 0x23c49c, Func Offset: 0x5c
	// Line 3579, Address: 0x23c4b0, Func Offset: 0x70
	// Line 3580, Address: 0x23c4e4, Func Offset: 0xa4
	// Line 3581, Address: 0x23c4ec, Func Offset: 0xac
	// Line 3587, Address: 0x23c4fc, Func Offset: 0xbc
	// Line 3579, Address: 0x23c504, Func Offset: 0xc4
	// Line 3587, Address: 0x23c514, Func Offset: 0xd4
	// Line 3588, Address: 0x23c52c, Func Offset: 0xec
	// Func End, Address: 0x23c540, Func Offset: 0x100
}

// Common_SimpStat__10zNMECommonFv
// Start address: 0x23c540
en_nmesimp zNMECommon::Common_SimpStat()
{
	int32 gid_curr;
	// Line 3289, Address: 0x23c540, Func Offset: 0
	// Line 3290, Address: 0x23c54c, Func Offset: 0xc
	// Line 3294, Address: 0x23c554, Func Offset: 0x14
	// Line 3295, Address: 0x23c55c, Func Offset: 0x1c
	// Line 3299, Address: 0x23c9e8, Func Offset: 0x4a8
	// Line 3302, Address: 0x23c9f0, Func Offset: 0x4b0
	// Line 3306, Address: 0x23c9f8, Func Offset: 0x4b8
	// Line 3309, Address: 0x23ca00, Func Offset: 0x4c0
	// Line 3316, Address: 0x23ca08, Func Offset: 0x4c8
	// Line 3320, Address: 0x23ca10, Func Offset: 0x4d0
	// Line 3323, Address: 0x23ca18, Func Offset: 0x4d8
	// Line 3327, Address: 0x23ca20, Func Offset: 0x4e0
	// Line 3329, Address: 0x23ca28, Func Offset: 0x4e8
	// Line 3331, Address: 0x23ca30, Func Offset: 0x4f0
	// Line 3338, Address: 0x23ca38, Func Offset: 0x4f8
	// Line 3342, Address: 0x23ca40, Func Offset: 0x500
	// Line 3350, Address: 0x23ca48, Func Offset: 0x508
	// Line 3355, Address: 0x23ca50, Func Offset: 0x510
	// Line 3360, Address: 0x23ca58, Func Offset: 0x518
	// Line 3369, Address: 0x23ca60, Func Offset: 0x520
	// Line 3374, Address: 0x23ca68, Func Offset: 0x528
	// Line 3377, Address: 0x23ca70, Func Offset: 0x530
	// Line 3380, Address: 0x23ca78, Func Offset: 0x538
	// Line 3388, Address: 0x23ca80, Func Offset: 0x540
	// Line 3397, Address: 0x23ca88, Func Offset: 0x548
	// Line 3402, Address: 0x23ca90, Func Offset: 0x550
	// Line 3410, Address: 0x23ca98, Func Offset: 0x558
	// Line 3422, Address: 0x23caa0, Func Offset: 0x560
	// Line 3426, Address: 0x23caa8, Func Offset: 0x568
	// Line 3429, Address: 0x23cab0, Func Offset: 0x570
	// Line 3433, Address: 0x23cab8, Func Offset: 0x578
	// Line 3436, Address: 0x23cac0, Func Offset: 0x580
	// Line 3440, Address: 0x23cac8, Func Offset: 0x588
	// Line 3442, Address: 0x23cad0, Func Offset: 0x590
	// Line 3446, Address: 0x23cad8, Func Offset: 0x598
	// Line 3448, Address: 0x23cae0, Func Offset: 0x5a0
	// Line 3454, Address: 0x23cae8, Func Offset: 0x5a8
	// Line 3459, Address: 0x23caf0, Func Offset: 0x5b0
	// Line 3464, Address: 0x23caf8, Func Offset: 0x5b8
	// Line 3466, Address: 0x23cb00, Func Offset: 0x5c0
	// Line 3471, Address: 0x23cb08, Func Offset: 0x5c8
	// Line 3475, Address: 0x23cb10, Func Offset: 0x5d0
	// Line 3477, Address: 0x23cb18, Func Offset: 0x5d8
	// Line 3481, Address: 0x23cb20, Func Offset: 0x5e0
	// Line 3486, Address: 0x23cb28, Func Offset: 0x5e8
	// Line 3490, Address: 0x23cb30, Func Offset: 0x5f0
	// Line 3492, Address: 0x23cb38, Func Offset: 0x5f8
	// Line 3498, Address: 0x23cb40, Func Offset: 0x600
	// Line 3503, Address: 0x23cb48, Func Offset: 0x608
	// Line 3510, Address: 0x23cb50, Func Offset: 0x610
	// Line 3533, Address: 0x23cb58, Func Offset: 0x618
	// Line 3543, Address: 0x23cb60, Func Offset: 0x620
	// Func End, Address: 0x23cb6c, Func Offset: 0x62c
}

// ApplyGlowDamp__10zNMECommonFv
// Start address: 0x23cb70
void zNMECommon::ApplyGlowDamp()
{
	// Line 3286, Address: 0x23cb70, Func Offset: 0
	// Func End, Address: 0x23cb78, Func Offset: 0x8
}

// ShadStufUpdate__10zNMECommonFv
// Start address: 0x23cb80
void zNMECommon::ShadStufUpdate()
{
	xVec3 vec_toCam;
	// Line 3073, Address: 0x23cb80, Func Offset: 0
	// Line 3078, Address: 0x23cb90, Func Offset: 0x10
	// Line 3082, Address: 0x23cba0, Func Offset: 0x20
	// Line 3083, Address: 0x23cbb8, Func Offset: 0x38
	// Line 3079, Address: 0x23cbc8, Func Offset: 0x48
	// Line 3083, Address: 0x23cbcc, Func Offset: 0x4c
	// Line 3079, Address: 0x23cbdc, Func Offset: 0x5c
	// Line 3083, Address: 0x23cbe4, Func Offset: 0x64
	// Line 3079, Address: 0x23cc14, Func Offset: 0x94
	// Line 3083, Address: 0x23cc28, Func Offset: 0xa8
	// Line 3079, Address: 0x23cc44, Func Offset: 0xc4
	// Line 3083, Address: 0x23cc4c, Func Offset: 0xcc
	// Line 3079, Address: 0x23cc58, Func Offset: 0xd8
	// Line 3083, Address: 0x23cc60, Func Offset: 0xe0
	// Line 3079, Address: 0x23cc78, Func Offset: 0xf8
	// Line 3083, Address: 0x23cc7c, Func Offset: 0xfc
	// Line 3079, Address: 0x23cc8c, Func Offset: 0x10c
	// Line 3083, Address: 0x23cc90, Func Offset: 0x110
	// Line 3079, Address: 0x23ccd0, Func Offset: 0x150
	// Line 3083, Address: 0x23ccd4, Func Offset: 0x154
	// Line 3079, Address: 0x23cce0, Func Offset: 0x160
	// Line 3083, Address: 0x23cce8, Func Offset: 0x168
	// Line 3079, Address: 0x23ccfc, Func Offset: 0x17c
	// Line 3083, Address: 0x23cd00, Func Offset: 0x180
	// Line 3079, Address: 0x23cd08, Func Offset: 0x188
	// Line 3083, Address: 0x23cd0c, Func Offset: 0x18c
	// Line 3079, Address: 0x23cd14, Func Offset: 0x194
	// Line 3083, Address: 0x23cd18, Func Offset: 0x198
	// Line 3079, Address: 0x23cd24, Func Offset: 0x1a4
	// Line 3083, Address: 0x23cd30, Func Offset: 0x1b0
	// Line 3079, Address: 0x23cd48, Func Offset: 0x1c8
	// Line 3083, Address: 0x23cd50, Func Offset: 0x1d0
	// Line 3079, Address: 0x23cd58, Func Offset: 0x1d8
	// Line 3083, Address: 0x23cd5c, Func Offset: 0x1dc
	// Line 3079, Address: 0x23cd84, Func Offset: 0x204
	// Line 3083, Address: 0x23cd88, Func Offset: 0x208
	// Line 3079, Address: 0x23cd98, Func Offset: 0x218
	// Line 3083, Address: 0x23cda0, Func Offset: 0x220
	// Line 3079, Address: 0x23cdb0, Func Offset: 0x230
	// Line 3083, Address: 0x23cdb4, Func Offset: 0x234
	// Line 3079, Address: 0x23cdc0, Func Offset: 0x240
	// Line 3083, Address: 0x23cdc8, Func Offset: 0x248
	// Line 3079, Address: 0x23cddc, Func Offset: 0x25c
	// Line 3083, Address: 0x23cde0, Func Offset: 0x260
	// Line 3079, Address: 0x23cde8, Func Offset: 0x268
	// Line 3083, Address: 0x23cdec, Func Offset: 0x26c
	// Line 3079, Address: 0x23cdf4, Func Offset: 0x274
	// Line 3083, Address: 0x23cdf8, Func Offset: 0x278
	// Line 3079, Address: 0x23ce04, Func Offset: 0x284
	// Line 3083, Address: 0x23ce10, Func Offset: 0x290
	// Line 3079, Address: 0x23ce28, Func Offset: 0x2a8
	// Line 3083, Address: 0x23ce30, Func Offset: 0x2b0
	// Line 3079, Address: 0x23ce38, Func Offset: 0x2b8
	// Line 3083, Address: 0x23ce3c, Func Offset: 0x2bc
	// Line 3079, Address: 0x23ce64, Func Offset: 0x2e4
	// Line 3083, Address: 0x23ce68, Func Offset: 0x2e8
	// Line 3079, Address: 0x23ce7c, Func Offset: 0x2fc
	// Line 3083, Address: 0x23ce80, Func Offset: 0x300
	// Line 3079, Address: 0x23ceb0, Func Offset: 0x330
	// Line 3083, Address: 0x23ceb4, Func Offset: 0x334
	// Line 3079, Address: 0x23cec4, Func Offset: 0x344
	// Line 3083, Address: 0x23cec8, Func Offset: 0x348
	// Line 3079, Address: 0x23cf04, Func Offset: 0x384
	// Line 3083, Address: 0x23cf08, Func Offset: 0x388
	// Line 3079, Address: 0x23cf18, Func Offset: 0x398
	// Line 3083, Address: 0x23cf1c, Func Offset: 0x39c
	// Line 3079, Address: 0x23cf2c, Func Offset: 0x3ac
	// Line 3083, Address: 0x23cf30, Func Offset: 0x3b0
	// Line 3079, Address: 0x23cf4c, Func Offset: 0x3cc
	// Line 3090, Address: 0x23cf70, Func Offset: 0x3f0
	// Line 3095, Address: 0x23cff0, Func Offset: 0x470
	// Line 3103, Address: 0x23d088, Func Offset: 0x508
	// Line 3109, Address: 0x23d090, Func Offset: 0x510
	// Line 3110, Address: 0x23d0a8, Func Offset: 0x528
	// Line 3112, Address: 0x23d140, Func Offset: 0x5c0
	// Line 3113, Address: 0x23d16c, Func Offset: 0x5ec
	// Line 3122, Address: 0x23d198, Func Offset: 0x618
	// Line 3124, Address: 0x23d1a0, Func Offset: 0x620
	// Line 3150, Address: 0x23d204, Func Offset: 0x684
	// Line 3151, Address: 0x23d21c, Func Offset: 0x69c
	// Func End, Address: 0x23d230, Func Offset: 0x6b0
}

// FullShadAcquire__10zNMECommonFv
// Start address: 0x23d230
void zNMECommon::FullShadAcquire()
{
	xEntShadow* es;
	// Line 2990, Address: 0x23d230, Func Offset: 0
	// Line 2991, Address: 0x23d240, Func Offset: 0x10
	// Line 2993, Address: 0x23d24c, Func Offset: 0x1c
	// Line 2996, Address: 0x23d25c, Func Offset: 0x2c
	// Line 2999, Address: 0x23d2e0, Func Offset: 0xb0
	// Line 3002, Address: 0x23d2e8, Func Offset: 0xb8
	// Line 3005, Address: 0x23d2ec, Func Offset: 0xbc
	// Line 3002, Address: 0x23d2f0, Func Offset: 0xc0
	// Line 3005, Address: 0x23d2f4, Func Offset: 0xc4
	// Line 3010, Address: 0x23d30c, Func Offset: 0xdc
	// Line 3011, Address: 0x23d314, Func Offset: 0xe4
	// Line 3013, Address: 0x23d318, Func Offset: 0xe8
	// Line 3004, Address: 0x23d31c, Func Offset: 0xec
	// Line 3005, Address: 0x23d320, Func Offset: 0xf0
	// Line 3006, Address: 0x23d328, Func Offset: 0xf8
	// Line 3005, Address: 0x23d338, Func Offset: 0x108
	// Line 3006, Address: 0x23d340, Func Offset: 0x110
	// Line 3014, Address: 0x23d344, Func Offset: 0x114
	// Line 3005, Address: 0x23d348, Func Offset: 0x118
	// Line 3006, Address: 0x23d35c, Func Offset: 0x12c
	// Line 3005, Address: 0x23d360, Func Offset: 0x130
	// Line 3011, Address: 0x23d36c, Func Offset: 0x13c
	// Line 3005, Address: 0x23d370, Func Offset: 0x140
	// Line 3011, Address: 0x23d374, Func Offset: 0x144
	// Line 3005, Address: 0x23d378, Func Offset: 0x148
	// Line 3016, Address: 0x23d37c, Func Offset: 0x14c
	// Line 3005, Address: 0x23d380, Func Offset: 0x150
	// Line 3006, Address: 0x23d38c, Func Offset: 0x15c
	// Line 3008, Address: 0x23d398, Func Offset: 0x168
	// Line 3010, Address: 0x23d39c, Func Offset: 0x16c
	// Line 3011, Address: 0x23d3ac, Func Offset: 0x17c
	// Line 3013, Address: 0x23d3bc, Func Offset: 0x18c
	// Line 3014, Address: 0x23d3c0, Func Offset: 0x190
	// Line 3019, Address: 0x23d3c4, Func Offset: 0x194
	// Line 3020, Address: 0x23d3e4, Func Offset: 0x1b4
	// Func End, Address: 0x23d3f8, Func Offset: 0x1c8
}

// ShadowPrep__10zNMECommonFv
// Start address: 0x23d400
void zNMECommon::ShadowPrep()
{
	int32 useCachePools;
	xEntShadow* es;
	// Line 2893, Address: 0x23d400, Func Offset: 0
	// Line 2894, Address: 0x23d404, Func Offset: 0x4
	// Line 2893, Address: 0x23d408, Func Offset: 0x8
	// Line 2894, Address: 0x23d410, Func Offset: 0x10
	// Line 2897, Address: 0x23d414, Func Offset: 0x14
	// Line 2898, Address: 0x23d424, Func Offset: 0x24
	// Line 2900, Address: 0x23d42c, Func Offset: 0x2c
	// Line 2901, Address: 0x23d438, Func Offset: 0x38
	// Line 2907, Address: 0x23d43c, Func Offset: 0x3c
	// Line 2918, Address: 0x23d444, Func Offset: 0x44
	// Line 2919, Address: 0x23d45c, Func Offset: 0x5c
	// Line 2921, Address: 0x23d464, Func Offset: 0x64
	// Line 2922, Address: 0x23d46c, Func Offset: 0x6c
	// Line 2931, Address: 0x23d47c, Func Offset: 0x7c
	// Line 2928, Address: 0x23d480, Func Offset: 0x80
	// Line 2931, Address: 0x23d484, Func Offset: 0x84
	// Line 2936, Address: 0x23d49c, Func Offset: 0x9c
	// Line 2937, Address: 0x23d4a4, Func Offset: 0xa4
	// Line 2938, Address: 0x23d4a8, Func Offset: 0xa8
	// Line 2930, Address: 0x23d4ac, Func Offset: 0xac
	// Line 2931, Address: 0x23d4b0, Func Offset: 0xb0
	// Line 2932, Address: 0x23d4b8, Func Offset: 0xb8
	// Line 2931, Address: 0x23d4bc, Func Offset: 0xbc
	// Line 2932, Address: 0x23d4c0, Func Offset: 0xc0
	// Line 2931, Address: 0x23d4cc, Func Offset: 0xcc
	// Line 2940, Address: 0x23d4d0, Func Offset: 0xd0
	// Line 2932, Address: 0x23d4d4, Func Offset: 0xd4
	// Line 2931, Address: 0x23d4d8, Func Offset: 0xd8
	// Line 2941, Address: 0x23d4dc, Func Offset: 0xdc
	// Line 2931, Address: 0x23d4e0, Func Offset: 0xe0
	// Line 2932, Address: 0x23d4f0, Func Offset: 0xf0
	// Line 2931, Address: 0x23d4f4, Func Offset: 0xf4
	// Line 2937, Address: 0x23d500, Func Offset: 0x100
	// Line 2931, Address: 0x23d504, Func Offset: 0x104
	// Line 2937, Address: 0x23d508, Func Offset: 0x108
	// Line 2931, Address: 0x23d50c, Func Offset: 0x10c
	// Line 2938, Address: 0x23d510, Func Offset: 0x110
	// Line 2943, Address: 0x23d514, Func Offset: 0x114
	// Line 2931, Address: 0x23d518, Func Offset: 0x118
	// Line 2932, Address: 0x23d524, Func Offset: 0x124
	// Line 2934, Address: 0x23d530, Func Offset: 0x130
	// Line 2936, Address: 0x23d534, Func Offset: 0x134
	// Line 2937, Address: 0x23d544, Func Offset: 0x144
	// Line 2938, Address: 0x23d554, Func Offset: 0x154
	// Line 2940, Address: 0x23d564, Func Offset: 0x164
	// Line 2941, Address: 0x23d568, Func Offset: 0x168
	// Line 2946, Address: 0x23d56c, Func Offset: 0x16c
	// Line 2948, Address: 0x23d574, Func Offset: 0x174
	// Line 2951, Address: 0x23d578, Func Offset: 0x178
	// Line 2952, Address: 0x23d5a8, Func Offset: 0x1a8
	// Func End, Address: 0x23d5b8, Func Offset: 0x1b8
}

// TellMeVisOnOff__10zNMECommonFP4xEnt
// Start address: 0x23d5d0
void zNMECommon::TellMeVisOnOff(xEnt* ent)
{
	zNMECommon* npc;
	// Line 2874, Address: 0x23d5d0, Func Offset: 0
	// Line 2875, Address: 0x23d5dc, Func Offset: 0xc
	// Line 2882, Address: 0x23d5f4, Func Offset: 0x24
	// Line 2884, Address: 0x23d5f8, Func Offset: 0x28
	// Line 2879, Address: 0x23d610, Func Offset: 0x40
	// Line 2885, Address: 0x23d618, Func Offset: 0x48
	// Func End, Address: 0x23d624, Func Offset: 0x54
}

// Respawn__10zNMECommonFPC5xVec3P10zMovePointP10zMovePoint
// Start address: 0x23d630
int32 zNMECommon::Respawn(xVec3* pos, zMovePoint* mvptFirst, zMovePoint* mvptSpawnRef)
{
	NMEMsg msg;
	// Line 2809, Address: 0x23d630, Func Offset: 0
	// Line 2813, Address: 0x23d658, Func Offset: 0x28
	// Line 2815, Address: 0x23d668, Func Offset: 0x38
	// Line 2820, Address: 0x23d66c, Func Offset: 0x3c
	// Line 2815, Address: 0x23d670, Func Offset: 0x40
	// Line 2816, Address: 0x23d674, Func Offset: 0x44
	// Line 2817, Address: 0x23d67c, Func Offset: 0x4c
	// Line 2822, Address: 0x23d684, Func Offset: 0x54
	// Line 2823, Address: 0x23d68c, Func Offset: 0x5c
	// Line 2829, Address: 0x23d6a4, Func Offset: 0x74
	// Line 2830, Address: 0x23d6ac, Func Offset: 0x7c
	// Line 2831, Address: 0x23d6b0, Func Offset: 0x80
	// Line 2841, Address: 0x23d6b4, Func Offset: 0x84
	// Line 2831, Address: 0x23d6b8, Func Offset: 0x88
	// Line 2841, Address: 0x23d6bc, Func Offset: 0x8c
	// Line 2846, Address: 0x23d6d0, Func Offset: 0xa0
	// Line 2834, Address: 0x23d6fc, Func Offset: 0xcc
	// Line 2846, Address: 0x23d700, Func Offset: 0xd0
	// Line 2847, Address: 0x23d718, Func Offset: 0xe8
	// Func End, Address: 0x23d734, Func Offset: 0x104
}

// Damage__10zNMECommonF9en_npcdmgPC5xBasePC5xVec3i10en_plyrpup
// Start address: 0x23d740
void zNMECommon::Damage(en_npcdmg dmgtype, xBase* who, xVec3* vec_hit, int32 amt_dmgCaller, en_plyrpup pup_fromCaller)
{
	int32 doAlways;
	NMEDamageInfo* dmg;
	NMEMsg msg;
	// Line 2731, Address: 0x23d740, Func Offset: 0
	// Line 2734, Address: 0x23d744, Func Offset: 0x4
	// Line 2731, Address: 0x23d748, Func Offset: 0x8
	// Line 2734, Address: 0x23d780, Func Offset: 0x40
	// Line 2739, Address: 0x23d7b4, Func Offset: 0x74
	// Line 2743, Address: 0x23d7b8, Func Offset: 0x78
	// Line 2744, Address: 0x23d7c0, Func Offset: 0x80
	// Line 2746, Address: 0x23d7d4, Func Offset: 0x94
	// Line 2747, Address: 0x23d7fc, Func Offset: 0xbc
	// Line 2753, Address: 0x23d804, Func Offset: 0xc4
	// Line 2762, Address: 0x23d808, Func Offset: 0xc8
	// Line 2753, Address: 0x23d818, Func Offset: 0xd8
	// Line 2762, Address: 0x23d81c, Func Offset: 0xdc
	// Line 2765, Address: 0x23d824, Func Offset: 0xe4
	// Line 2763, Address: 0x23d82c, Func Offset: 0xec
	// Line 2766, Address: 0x23d830, Func Offset: 0xf0
	// Line 2763, Address: 0x23d834, Func Offset: 0xf4
	// Line 2767, Address: 0x23d838, Func Offset: 0xf8
	// Line 2770, Address: 0x23d840, Func Offset: 0x100
	// Line 2765, Address: 0x23d848, Func Offset: 0x108
	// Line 2766, Address: 0x23d84c, Func Offset: 0x10c
	// Line 2767, Address: 0x23d854, Func Offset: 0x114
	// Line 2770, Address: 0x23d858, Func Offset: 0x118
	// Line 2772, Address: 0x23d85c, Func Offset: 0x11c
	// Line 2776, Address: 0x23d860, Func Offset: 0x120
	// Line 2779, Address: 0x23d868, Func Offset: 0x128
	// Line 2780, Address: 0x23d86c, Func Offset: 0x12c
	// Line 2783, Address: 0x23d870, Func Offset: 0x130
	// Line 2784, Address: 0x23d878, Func Offset: 0x138
	// Line 2788, Address: 0x23d890, Func Offset: 0x150
	// Line 2798, Address: 0x23d8ec, Func Offset: 0x1ac
	// Line 2802, Address: 0x23d8fc, Func Offset: 0x1bc
	// Line 2804, Address: 0x23d914, Func Offset: 0x1d4
	// Line 2749, Address: 0x23d934, Func Offset: 0x1f4
	// Line 2777, Address: 0x23d93c, Func Offset: 0x1fc
	// Line 2804, Address: 0x23d940, Func Offset: 0x200
	// Line 2777, Address: 0x23d948, Func Offset: 0x208
	// Line 2804, Address: 0x23d950, Func Offset: 0x210
	// Line 2805, Address: 0x23d978, Func Offset: 0x238
	// Func End, Address: 0x23d9a0, Func Offset: 0x260
}

// ConvertHitEvent__10zNMECommonFP11NMESysEvent
// Start address: 0x23d9a0
void zNMECommon::ConvertHitEvent(NMESysEvent* sysmail)
{
	uint32 mvinf;
	en_npcdmg what;
	xVec3 vec_hit;
	xVec3 pos_cruiser;
	xVec3 vec_hit;
	xEntBoulder* bould;
	en_npcdmg what;
	xVec3 vec_hit;
	xVec3 vec_hit;
	// Line 2605, Address: 0x23d9a0, Func Offset: 0
	// Line 2606, Address: 0x23d9bc, Func Offset: 0x1c
	// Line 2623, Address: 0x23d9c4, Func Offset: 0x24
	// Line 2635, Address: 0x23d9f4, Func Offset: 0x54
	// Line 2637, Address: 0x23d9fc, Func Offset: 0x5c
	// Line 2639, Address: 0x23da08, Func Offset: 0x68
	// Line 2640, Address: 0x23da14, Func Offset: 0x74
	// Line 2642, Address: 0x23da1c, Func Offset: 0x7c
	// Line 2650, Address: 0x23da20, Func Offset: 0x80
	// Line 2652, Address: 0x23da24, Func Offset: 0x84
	// Line 2650, Address: 0x23da2c, Func Offset: 0x8c
	// Line 2652, Address: 0x23da30, Func Offset: 0x90
	// Line 2650, Address: 0x23da34, Func Offset: 0x94
	// Line 2651, Address: 0x23dac8, Func Offset: 0x128
	// Line 2652, Address: 0x23dae0, Func Offset: 0x140
	// Line 2653, Address: 0x23daec, Func Offset: 0x14c
	// Line 2666, Address: 0x23db14, Func Offset: 0x174
	// Line 2675, Address: 0x23db20, Func Offset: 0x180
	// Line 2669, Address: 0x23db24, Func Offset: 0x184
	// Line 2677, Address: 0x23db28, Func Offset: 0x188
	// Line 2669, Address: 0x23db2c, Func Offset: 0x18c
	// Line 2670, Address: 0x23db30, Func Offset: 0x190
	// Line 2675, Address: 0x23db34, Func Offset: 0x194
	// Line 2677, Address: 0x23db38, Func Offset: 0x198
	// Line 2670, Address: 0x23db3c, Func Offset: 0x19c
	// Line 2671, Address: 0x23db40, Func Offset: 0x1a0
	// Line 2675, Address: 0x23db44, Func Offset: 0x1a4
	// Line 2669, Address: 0x23db54, Func Offset: 0x1b4
	// Line 2677, Address: 0x23db58, Func Offset: 0x1b8
	// Line 2675, Address: 0x23db5c, Func Offset: 0x1bc
	// Line 2670, Address: 0x23db60, Func Offset: 0x1c0
	// Line 2675, Address: 0x23db64, Func Offset: 0x1c4
	// Line 2671, Address: 0x23db6c, Func Offset: 0x1cc
	// Line 2675, Address: 0x23db70, Func Offset: 0x1d0
	// Line 2676, Address: 0x23dbe8, Func Offset: 0x248
	// Line 2677, Address: 0x23dc00, Func Offset: 0x260
	// Line 2678, Address: 0x23dc0c, Func Offset: 0x26c
	// Line 2697, Address: 0x23dc34, Func Offset: 0x294
	// Line 2701, Address: 0x23dc44, Func Offset: 0x2a4
	// Line 2704, Address: 0x23dc48, Func Offset: 0x2a8
	// Line 2706, Address: 0x23dc4c, Func Offset: 0x2ac
	// Line 2704, Address: 0x23dc54, Func Offset: 0x2b4
	// Line 2706, Address: 0x23dc58, Func Offset: 0x2b8
	// Line 2704, Address: 0x23dc5c, Func Offset: 0x2bc
	// Line 2705, Address: 0x23dce4, Func Offset: 0x344
	// Line 2704, Address: 0x23dcf4, Func Offset: 0x354
	// Line 2705, Address: 0x23dcf8, Func Offset: 0x358
	// Line 2706, Address: 0x23dd00, Func Offset: 0x360
	// Line 2707, Address: 0x23dd0c, Func Offset: 0x36c
	// Line 2720, Address: 0x23dd34, Func Offset: 0x394
	// Line 2722, Address: 0x23dd48, Func Offset: 0x3a8
	// Line 2720, Address: 0x23dd4c, Func Offset: 0x3ac
	// Line 2722, Address: 0x23dd80, Func Offset: 0x3e0
	// Line 2726, Address: 0x23dda0, Func Offset: 0x400
	// Line 2610, Address: 0x23ddb4, Func Offset: 0x414
	// Line 2726, Address: 0x23ddbc, Func Offset: 0x41c
	// Line 2610, Address: 0x23ddc8, Func Offset: 0x428
	// Line 2726, Address: 0x23ddcc, Func Offset: 0x42c
	// Line 2611, Address: 0x23ddd4, Func Offset: 0x434
	// Line 2638, Address: 0x23dddc, Func Offset: 0x43c
	// Line 2655, Address: 0x23dde8, Func Offset: 0x448
	// Line 2656, Address: 0x23ddec, Func Offset: 0x44c
	// Line 2655, Address: 0x23ddf0, Func Offset: 0x450
	// Line 2656, Address: 0x23ddf4, Func Offset: 0x454
	// Line 2726, Address: 0x23ddf8, Func Offset: 0x458
	// Line 2655, Address: 0x23ddfc, Func Offset: 0x45c
	// Line 2726, Address: 0x23de04, Func Offset: 0x464
	// Line 2655, Address: 0x23de08, Func Offset: 0x468
	// Line 2726, Address: 0x23de10, Func Offset: 0x470
	// Line 2660, Address: 0x23de2c, Func Offset: 0x48c
	// Line 2680, Address: 0x23de34, Func Offset: 0x494
	// Line 2681, Address: 0x23de38, Func Offset: 0x498
	// Line 2680, Address: 0x23de3c, Func Offset: 0x49c
	// Line 2681, Address: 0x23de40, Func Offset: 0x4a0
	// Line 2726, Address: 0x23de44, Func Offset: 0x4a4
	// Line 2680, Address: 0x23de48, Func Offset: 0x4a8
	// Line 2726, Address: 0x23de50, Func Offset: 0x4b0
	// Line 2680, Address: 0x23de54, Func Offset: 0x4b4
	// Line 2726, Address: 0x23de5c, Func Offset: 0x4bc
	// Line 2684, Address: 0x23de78, Func Offset: 0x4d8
	// Line 2726, Address: 0x23de80, Func Offset: 0x4e0
	// Line 2699, Address: 0x23de90, Func Offset: 0x4f0
	// Line 2709, Address: 0x23de98, Func Offset: 0x4f8
	// Line 2710, Address: 0x23de9c, Func Offset: 0x4fc
	// Line 2709, Address: 0x23dea0, Func Offset: 0x500
	// Line 2710, Address: 0x23dea4, Func Offset: 0x504
	// Line 2726, Address: 0x23dea8, Func Offset: 0x508
	// Line 2709, Address: 0x23deac, Func Offset: 0x50c
	// Line 2726, Address: 0x23deb4, Func Offset: 0x514
	// Line 2709, Address: 0x23deb8, Func Offset: 0x518
	// Line 2726, Address: 0x23dec0, Func Offset: 0x520
	// Line 2713, Address: 0x23dedc, Func Offset: 0x53c
	// Line 2727, Address: 0x23dee4, Func Offset: 0x544
	// Func End, Address: 0x23defc, Func Offset: 0x55c
}

// DfltSysEventMail__10zNMECommonFP11NMESysEvent
// Start address: 0x23df00
int32 zNMECommon::DfltSysEventMail(NMESysEvent* sysmail)
{
	int32 handled;
	xPsyche* psy;
	xVec3 vec_hit;
	FloatAndVoid dist;
	en_npctyp ntyp;
	xVec3 currVel;
	NMEMsg msg;
	// Line 2245, Address: 0x23df00, Func Offset: 0
	// Line 2251, Address: 0x23df04, Func Offset: 0x4
	// Line 2245, Address: 0x23df08, Func Offset: 0x8
	// Line 2251, Address: 0x23df20, Func Offset: 0x20
	// Line 2263, Address: 0x23e1a8, Func Offset: 0x2a8
	// Line 2264, Address: 0x23e1ac, Func Offset: 0x2ac
	// Line 2270, Address: 0x23e1b4, Func Offset: 0x2b4
	// Line 2274, Address: 0x23e1c0, Func Offset: 0x2c0
	// Line 2282, Address: 0x23e1c8, Func Offset: 0x2c8
	// Line 2283, Address: 0x23e1d8, Func Offset: 0x2d8
	// Line 2285, Address: 0x23e1e0, Func Offset: 0x2e0
	// Line 2286, Address: 0x23e200, Func Offset: 0x300
	// Line 2288, Address: 0x23e208, Func Offset: 0x308
	// Line 2289, Address: 0x23e228, Func Offset: 0x328
	// Line 2298, Address: 0x23e230, Func Offset: 0x330
	// Line 2299, Address: 0x23e254, Func Offset: 0x354
	// Line 2301, Address: 0x23e25c, Func Offset: 0x35c
	// Line 2302, Address: 0x23e280, Func Offset: 0x380
	// Line 2304, Address: 0x23e288, Func Offset: 0x388
	// Line 2305, Address: 0x23e2ac, Func Offset: 0x3ac
	// Line 2307, Address: 0x23e2b4, Func Offset: 0x3b4
	// Line 2308, Address: 0x23e2d8, Func Offset: 0x3d8
	// Line 2310, Address: 0x23e2e0, Func Offset: 0x3e0
	// Line 2311, Address: 0x23e304, Func Offset: 0x404
	// Line 2313, Address: 0x23e30c, Func Offset: 0x40c
	// Line 2314, Address: 0x23e330, Func Offset: 0x430
	// Line 2316, Address: 0x23e338, Func Offset: 0x438
	// Line 2317, Address: 0x23e35c, Func Offset: 0x45c
	// Line 2322, Address: 0x23e364, Func Offset: 0x464
	// Line 2323, Address: 0x23e388, Func Offset: 0x488
	// Line 2322, Address: 0x23e390, Func Offset: 0x490
	// Line 2323, Address: 0x23e3b4, Func Offset: 0x4b4
	// Line 2322, Address: 0x23e3b8, Func Offset: 0x4b8
	// Line 2323, Address: 0x23e3c8, Func Offset: 0x4c8
	// Line 2322, Address: 0x23e3cc, Func Offset: 0x4cc
	// Line 2323, Address: 0x23e40c, Func Offset: 0x50c
	// Line 2325, Address: 0x23e420, Func Offset: 0x520
	// Line 2328, Address: 0x23e428, Func Offset: 0x528
	// Line 2329, Address: 0x23e430, Func Offset: 0x530
	// Line 2338, Address: 0x23e438, Func Offset: 0x538
	// Line 2340, Address: 0x23e444, Func Offset: 0x544
	// Line 2343, Address: 0x23e454, Func Offset: 0x554
	// Line 2344, Address: 0x23e460, Func Offset: 0x560
	// Line 2350, Address: 0x23e474, Func Offset: 0x574
	// Line 2351, Address: 0x23e478, Func Offset: 0x578
	// Line 2350, Address: 0x23e480, Func Offset: 0x580
	// Line 2351, Address: 0x23e484, Func Offset: 0x584
	// Line 2355, Address: 0x23e490, Func Offset: 0x590
	// Line 2360, Address: 0x23e498, Func Offset: 0x598
	// Line 2359, Address: 0x23e49c, Func Offset: 0x59c
	// Line 2360, Address: 0x23e4a0, Func Offset: 0x5a0
	// Line 2361, Address: 0x23e4f4, Func Offset: 0x5f4
	// Line 2363, Address: 0x23e4fc, Func Offset: 0x5fc
	// Line 2365, Address: 0x23e508, Func Offset: 0x608
	// Line 2366, Address: 0x23e52c, Func Offset: 0x62c
	// Line 2368, Address: 0x23e540, Func Offset: 0x640
	// Line 2383, Address: 0x23e548, Func Offset: 0x648
	// Line 2384, Address: 0x23e568, Func Offset: 0x668
	// Line 2389, Address: 0x23e570, Func Offset: 0x670
	// Line 2390, Address: 0x23e594, Func Offset: 0x694
	// Line 2393, Address: 0x23e59c, Func Offset: 0x69c
	// Line 2394, Address: 0x23e5ac, Func Offset: 0x6ac
	// Line 2398, Address: 0x23e5b4, Func Offset: 0x6b4
	// Line 2399, Address: 0x23e5cc, Func Offset: 0x6cc
	// Line 2401, Address: 0x23e5d4, Func Offset: 0x6d4
	// Line 2402, Address: 0x23e5ec, Func Offset: 0x6ec
	// Line 2405, Address: 0x23e5f4, Func Offset: 0x6f4
	// Line 2406, Address: 0x23e608, Func Offset: 0x708
	// Line 2408, Address: 0x23e610, Func Offset: 0x710
	// Line 2409, Address: 0x23e624, Func Offset: 0x724
	// Line 2412, Address: 0x23e62c, Func Offset: 0x72c
	// Line 2413, Address: 0x23e644, Func Offset: 0x744
	// Line 2415, Address: 0x23e64c, Func Offset: 0x74c
	// Line 2416, Address: 0x23e664, Func Offset: 0x764
	// Line 2424, Address: 0x23e66c, Func Offset: 0x76c
	// Line 2425, Address: 0x23e670, Func Offset: 0x770
	// Line 2428, Address: 0x23e678, Func Offset: 0x778
	// Line 2430, Address: 0x23e680, Func Offset: 0x780
	// Line 2432, Address: 0x23e684, Func Offset: 0x784
	// Line 2442, Address: 0x23e68c, Func Offset: 0x78c
	// Line 2443, Address: 0x23e6a4, Func Offset: 0x7a4
	// Line 2445, Address: 0x23e6ac, Func Offset: 0x7ac
	// Line 2446, Address: 0x23e6c4, Func Offset: 0x7c4
	// Line 2450, Address: 0x23e6cc, Func Offset: 0x7cc
	// Line 2451, Address: 0x23e6d0, Func Offset: 0x7d0
	// Line 2454, Address: 0x23e6d8, Func Offset: 0x7d8
	// Line 2456, Address: 0x23e6e0, Func Offset: 0x7e0
	// Line 2458, Address: 0x23e6e4, Func Offset: 0x7e4
	// Line 2470, Address: 0x23e6ec, Func Offset: 0x7ec
	// Line 2471, Address: 0x23e730, Func Offset: 0x830
	// Line 2482, Address: 0x23e738, Func Offset: 0x838
	// Line 2484, Address: 0x23e74c, Func Offset: 0x84c
	// Line 2490, Address: 0x23e760, Func Offset: 0x860
	// Line 2491, Address: 0x23e768, Func Offset: 0x868
	// Line 2492, Address: 0x23e770, Func Offset: 0x870
	// Line 2493, Address: 0x23e774, Func Offset: 0x874
	// Line 2494, Address: 0x23e77c, Func Offset: 0x87c
	// Line 2495, Address: 0x23e784, Func Offset: 0x884
	// Line 2498, Address: 0x23e78c, Func Offset: 0x88c
	// Line 2500, Address: 0x23e794, Func Offset: 0x894
	// Line 2509, Address: 0x23e7b0, Func Offset: 0x8b0
	// Line 2510, Address: 0x23e7b8, Func Offset: 0x8b8
	// Line 2511, Address: 0x23e7c0, Func Offset: 0x8c0
	// Line 2513, Address: 0x23e7c4, Func Offset: 0x8c4
	// Line 2591, Address: 0x23e7cc, Func Offset: 0x8cc
	// Line 2601, Address: 0x23e820, Func Offset: 0x920
	// Line 2345, Address: 0x23e82c, Func Offset: 0x92c
	// Line 2601, Address: 0x23e830, Func Offset: 0x930
	// Line 2347, Address: 0x23e83c, Func Offset: 0x93c
	// Line 2601, Address: 0x23e844, Func Offset: 0x944
	// Line 2602, Address: 0x23e860, Func Offset: 0x960
	// Func End, Address: 0x23e878, Func Offset: 0x978
}

// SysEvent__10zNMECommonFP5xBaseP5xBaseUiPCfP5xBaseUiPi
// Start address: 0x23e880
int32 zNMECommon::SysEvent(xBase* from, xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget, uint32 toParamWidgetID, int32* handled)
{
	zNMECommon* npc;
	// Line 2221, Address: 0x23e880, Func Offset: 0
	// Line 2230, Address: 0x23e8b8, Func Offset: 0x38
	// Line 2221, Address: 0x23e8bc, Func Offset: 0x3c
	// Line 2230, Address: 0x23e8cc, Func Offset: 0x4c
	// Line 2232, Address: 0x23e8dc, Func Offset: 0x5c
	// Line 2236, Address: 0x23e950, Func Offset: 0xd0
	// Line 2238, Address: 0x23e960, Func Offset: 0xe0
	// Line 2241, Address: 0x23e964, Func Offset: 0xe4
	// Line 2238, Address: 0x23e968, Func Offset: 0xe8
	// Line 2241, Address: 0x23e970, Func Offset: 0xf0
	// Line 2232, Address: 0x23e984, Func Offset: 0x104
	// Line 2242, Address: 0x23e98c, Func Offset: 0x10c
	// Func End, Address: 0x23e9b8, Func Offset: 0x138
}

// NMEMessage__10zNMECommonFP6NMEMsg
// Start address: 0x23e9c0
int32 zNMECommon::NMEMessage(NMEMsg* mail)
{
	int32 handled;
	xPsyche* psy;
	zNMEGoalCommon* curgoal;
	// Line 2132, Address: 0x23e9c0, Func Offset: 0
	// Line 2138, Address: 0x23e9d4, Func Offset: 0x14
	// Line 2139, Address: 0x23e9d8, Func Offset: 0x18
	// Line 2143, Address: 0x23e9e0, Func Offset: 0x20
	// Line 2144, Address: 0x23e9e8, Func Offset: 0x28
	// Line 2145, Address: 0x23e9f0, Func Offset: 0x30
	// Line 2146, Address: 0x23ea04, Func Offset: 0x44
	// Line 2147, Address: 0x23ea0c, Func Offset: 0x4c
	// Line 2174, Address: 0x23ea14, Func Offset: 0x54
	// Line 2177, Address: 0x23ea28, Func Offset: 0x68
	// Line 2178, Address: 0x23ea30, Func Offset: 0x70
	// Line 2181, Address: 0x23ea54, Func Offset: 0x94
	// Func End, Address: 0x23ea68, Func Offset: 0xa8
}

// CreateConfig__10zNMECommonFPCc
// Start address: 0x23ea90
void zNMECommon::CreateConfig()
{
	// Line 2089, Address: 0x23ea90, Func Offset: 0
	// Line 2090, Address: 0x23ea9c, Func Offset: 0xc
	// Line 2100, Address: 0x23eaa4, Func Offset: 0x14
	// Func End, Address: 0x23eaac, Func Offset: 0x1c
}

// Setup__10zNMECommonFv
// Start address: 0x23eab0
void zNMECommon::Setup()
{
	int8* shrapnelName;
	// Line 1886, Address: 0x23eab0, Func Offset: 0
	// Line 1888, Address: 0x23eab4, Func Offset: 0x4
	// Line 1886, Address: 0x23eab8, Func Offset: 0x8
	// Line 1888, Address: 0x23eabc, Func Offset: 0xc
	// Line 1886, Address: 0x23eac0, Func Offset: 0x10
	// Line 1888, Address: 0x23eac4, Func Offset: 0x14
	// Line 1889, Address: 0x23ead4, Func Offset: 0x24
	// Line 1890, Address: 0x23eadc, Func Offset: 0x2c
	// Line 1892, Address: 0x23eae4, Func Offset: 0x34
	// Line 1895, Address: 0x23eafc, Func Offset: 0x4c
	// Func End, Address: 0x23eb0c, Func Offset: 0x5c
}

// Common_Init__10zNMECommonFP9xEntAsset
// Start address: 0x23eb10
void zNMECommon::Common_Init()
{
	uint32 bufsize;
	void* info;
	int32 i;
	// Line 1832, Address: 0x23eb10, Func Offset: 0
	// Line 1834, Address: 0x23eb20, Func Offset: 0x10
	// Line 1837, Address: 0x23eb4c, Func Offset: 0x3c
	// Line 1838, Address: 0x23eb54, Func Offset: 0x44
	// Line 1841, Address: 0x23eb74, Func Offset: 0x64
	// Line 1838, Address: 0x23eb7c, Func Offset: 0x6c
	// Line 1841, Address: 0x23eb8c, Func Offset: 0x7c
	// Line 1844, Address: 0x23eb90, Func Offset: 0x80
	// Line 1850, Address: 0x23eba4, Func Offset: 0x94
	// Line 1852, Address: 0x23ebb8, Func Offset: 0xa8
	// Line 1853, Address: 0x23ebd0, Func Offset: 0xc0
	// Line 1854, Address: 0x23ebd8, Func Offset: 0xc8
	// Line 1858, Address: 0x23ebdc, Func Offset: 0xcc
	// Line 1859, Address: 0x23ebe8, Func Offset: 0xd8
	// Line 1864, Address: 0x23ed60, Func Offset: 0x250
	// Line 1865, Address: 0x23ed74, Func Offset: 0x264
	// Line 1867, Address: 0x23ed7c, Func Offset: 0x26c
	// Line 1870, Address: 0x23ed80, Func Offset: 0x270
	// Line 1867, Address: 0x23ed84, Func Offset: 0x274
	// Line 1870, Address: 0x23ed8c, Func Offset: 0x27c
	// Line 1878, Address: 0x23ed90, Func Offset: 0x280
	// Line 1879, Address: 0x23ed9c, Func Offset: 0x28c
	// Line 1878, Address: 0x23eda0, Func Offset: 0x290
	// Line 1880, Address: 0x23edb0, Func Offset: 0x2a0
	// Line 1878, Address: 0x23edb4, Func Offset: 0x2a4
	// Line 1880, Address: 0x23edb8, Func Offset: 0x2a8
	// Line 1882, Address: 0x23eddc, Func Offset: 0x2cc
	// Line 1834, Address: 0x23ede4, Func Offset: 0x2d4
	// Line 1882, Address: 0x23edec, Func Offset: 0x2dc
	// Line 1883, Address: 0x23edf8, Func Offset: 0x2e8
	// Func End, Address: 0x23ee04, Func Offset: 0x2f4
}

// zNMECommon_MaxShadowNeededLater__Fv
// Start address: 0x23ee10
int32 zNMECommon_MaxShadowNeededLater()
{
	int32 cnt_shadPool;
	int32 cnt_shadFixed;
	st_XORDEREDARRAY* reallist;
	int32 num_nme;
	int32 i;
	zNMECommon* nme;
	int32 flg_shadpool;
	int32 num_shadTotal;
	// Line 1770, Address: 0x23ee10, Func Offset: 0
	// Line 1771, Address: 0x23ee24, Func Offset: 0x14
	// Line 1770, Address: 0x23ee28, Func Offset: 0x18
	// Line 1772, Address: 0x23ee2c, Func Offset: 0x1c
	// Line 1770, Address: 0x23ee30, Func Offset: 0x20
	// Line 1775, Address: 0x23ee38, Func Offset: 0x28
	// Line 1776, Address: 0x23ee40, Func Offset: 0x30
	// Line 1775, Address: 0x23ee44, Func Offset: 0x34
	// Line 1777, Address: 0x23ee48, Func Offset: 0x38
	// Line 1796, Address: 0x23ee58, Func Offset: 0x48
	// Line 1797, Address: 0x23ee70, Func Offset: 0x60
	// Line 1799, Address: 0x23ee74, Func Offset: 0x64
	// Line 1782, Address: 0x23ee9c, Func Offset: 0x8c
	// Line 1799, Address: 0x23eea0, Func Offset: 0x90
	// Line 1784, Address: 0x23eea8, Func Offset: 0x98
	// Line 1799, Address: 0x23eeb0, Func Offset: 0xa0
	// Line 1800, Address: 0x23eed8, Func Offset: 0xc8
	// Func End, Address: 0x23eefc, Func Offset: 0xec
}

// zNMECommon_IsConversation__Fv
// Start address: 0x23ef00
uint8 zNMECommon_IsConversation()
{
	// Line 1437, Address: 0x23ef00, Func Offset: 0
	// Line 1438, Address: 0x23ef04, Func Offset: 0x4
	// Func End, Address: 0x23ef0c, Func Offset: 0xc
}

// SomethingWonderfulUpdate__9zMODEnemyCFv
// Start address: 0x23ef10
void SomethingWonderfulUpdate()
{
	int32 flg_wonder;
	// Line 1390, Address: 0x23ef10, Func Offset: 0
	// Line 1394, Address: 0x23ef14, Func Offset: 0x4
	// Line 1390, Address: 0x23ef18, Func Offset: 0x8
	// Line 1394, Address: 0x23ef20, Func Offset: 0x10
	// Line 1395, Address: 0x23ef30, Func Offset: 0x20
	// Line 1401, Address: 0x23ef34, Func Offset: 0x24
	// Line 1402, Address: 0x23ef4c, Func Offset: 0x3c
	// Line 1411, Address: 0x23ef50, Func Offset: 0x40
	// Line 1412, Address: 0x23ef60, Func Offset: 0x50
	// Line 1415, Address: 0x23ef6c, Func Offset: 0x5c
	// Line 1426, Address: 0x23ef88, Func Offset: 0x78
	// Line 1427, Address: 0x23ef98, Func Offset: 0x88
	// Line 1432, Address: 0x23ef9c, Func Offset: 0x8c
	// Line 1433, Address: 0x23efb8, Func Offset: 0xa8
	// Func End, Address: 0x23efc8, Func Offset: 0xb8
}

// HudRender__9zMODEnemyFv
// Start address: 0x23efd0
void zMODEnemy::HudRender()
{
	int32 num_nme;
	int32 i;
	zNMECommon* nme;
	// Line 1353, Address: 0x23efd0, Func Offset: 0
	// Line 1356, Address: 0x23efec, Func Offset: 0x1c
	// Line 1357, Address: 0x23eff0, Func Offset: 0x20
	// Line 1358, Address: 0x23f000, Func Offset: 0x30
	// Line 1361, Address: 0x23f00c, Func Offset: 0x3c
	// Line 1380, Address: 0x23f020, Func Offset: 0x50
	// Line 1382, Address: 0x23f030, Func Offset: 0x60
	// Line 1363, Address: 0x23f038, Func Offset: 0x68
	// Line 1382, Address: 0x23f04c, Func Offset: 0x7c
	// Line 1366, Address: 0x23f054, Func Offset: 0x84
	// Line 1382, Address: 0x23f05c, Func Offset: 0x8c
	// Line 1368, Address: 0x23f06c, Func Offset: 0x9c
	// Line 1382, Address: 0x23f070, Func Offset: 0xa0
	// Line 1372, Address: 0x23f090, Func Offset: 0xc0
	// Line 1382, Address: 0x23f094, Func Offset: 0xc4
	// Line 1373, Address: 0x23f09c, Func Offset: 0xcc
	// Line 1382, Address: 0x23f0a0, Func Offset: 0xd0
	// Line 1374, Address: 0x23f0a4, Func Offset: 0xd4
	// Line 1382, Address: 0x23f0ac, Func Offset: 0xdc
	// Line 1383, Address: 0x23f0d0, Func Offset: 0x100
	// Func End, Address: 0x23f0ec, Func Offset: 0x11c
}

// PostRender__9zMODEnemyFv
// Start address: 0x23f0f0
void zMODEnemy::PostRender()
{
	int32 num_nme;
	int32 i;
	zNMECommon* nme;
	// Line 1313, Address: 0x23f0f0, Func Offset: 0
	// Line 1322, Address: 0x23f10c, Func Offset: 0x1c
	// Line 1323, Address: 0x23f110, Func Offset: 0x20
	// Line 1324, Address: 0x23f120, Func Offset: 0x30
	// Line 1327, Address: 0x23f12c, Func Offset: 0x3c
	// Line 1346, Address: 0x23f140, Func Offset: 0x50
	// Line 1348, Address: 0x23f150, Func Offset: 0x60
	// Line 1329, Address: 0x23f158, Func Offset: 0x68
	// Line 1348, Address: 0x23f16c, Func Offset: 0x7c
	// Line 1332, Address: 0x23f174, Func Offset: 0x84
	// Line 1348, Address: 0x23f17c, Func Offset: 0x8c
	// Line 1334, Address: 0x23f18c, Func Offset: 0x9c
	// Line 1348, Address: 0x23f190, Func Offset: 0xa0
	// Line 1338, Address: 0x23f1b0, Func Offset: 0xc0
	// Line 1348, Address: 0x23f1b4, Func Offset: 0xc4
	// Line 1339, Address: 0x23f1bc, Func Offset: 0xcc
	// Line 1348, Address: 0x23f1c0, Func Offset: 0xd0
	// Line 1340, Address: 0x23f1c4, Func Offset: 0xd4
	// Line 1348, Address: 0x23f1cc, Func Offset: 0xdc
	// Line 1349, Address: 0x23f1f0, Func Offset: 0x100
	// Func End, Address: 0x23f20c, Func Offset: 0x11c
}

// RenderToBuckets__9zMODEnemyFv
// Start address: 0x23f210
void zMODEnemy::RenderToBuckets()
{
	int32 num_nme;
	int32 i;
	zNMECommon* nme;
	// Line 1279, Address: 0x23f210, Func Offset: 0
	// Line 1286, Address: 0x23f22c, Func Offset: 0x1c
	// Line 1287, Address: 0x23f230, Func Offset: 0x20
	// Line 1288, Address: 0x23f240, Func Offset: 0x30
	// Line 1291, Address: 0x23f24c, Func Offset: 0x3c
	// Line 1293, Address: 0x23f268, Func Offset: 0x58
	// Line 1295, Address: 0x23f274, Func Offset: 0x64
	// Line 1297, Address: 0x23f280, Func Offset: 0x70
	// Line 1299, Address: 0x23f298, Func Offset: 0x88
	// Line 1302, Address: 0x23f2ac, Func Offset: 0x9c
	// Line 1303, Address: 0x23f2bc, Func Offset: 0xac
	// Line 1310, Address: 0x23f2d0, Func Offset: 0xc0
	// Func End, Address: 0x23f2ec, Func Offset: 0xdc
}

// PostTimestep__9zMODEnemyFf
// Start address: 0x23f330
void zMODEnemy::PostTimestep(float32 dt)
{
	int32 num_nme;
	int32 i;
	zNMECommon* nme;
	// Line 1201, Address: 0x23f330, Func Offset: 0
	// Line 1206, Address: 0x23f334, Func Offset: 0x4
	// Line 1201, Address: 0x23f338, Func Offset: 0x8
	// Line 1206, Address: 0x23f33c, Func Offset: 0xc
	// Line 1201, Address: 0x23f340, Func Offset: 0x10
	// Line 1206, Address: 0x23f344, Func Offset: 0x14
	// Line 1201, Address: 0x23f348, Func Offset: 0x18
	// Line 1206, Address: 0x23f354, Func Offset: 0x24
	// Line 1201, Address: 0x23f358, Func Offset: 0x28
	// Line 1206, Address: 0x23f35c, Func Offset: 0x2c
	// Line 1211, Address: 0x23f378, Func Offset: 0x48
	// Line 1206, Address: 0x23f37c, Func Offset: 0x4c
	// Line 1212, Address: 0x23f380, Func Offset: 0x50
	// Line 1213, Address: 0x23f390, Func Offset: 0x60
	// Line 1215, Address: 0x23f39c, Func Offset: 0x6c
	// Line 1228, Address: 0x23f3b4, Func Offset: 0x84
	// Line 1230, Address: 0x23f3c0, Func Offset: 0x90
	// Line 1232, Address: 0x23f3cc, Func Offset: 0x9c
	// Line 1233, Address: 0x23f3e4, Func Offset: 0xb4
	// Line 1234, Address: 0x23f3e8, Func Offset: 0xb8
	// Line 1237, Address: 0x23f3fc, Func Offset: 0xcc
	// Line 1239, Address: 0x23f40c, Func Offset: 0xdc
	// Line 1243, Address: 0x23f420, Func Offset: 0xf0
	// Line 1247, Address: 0x23f638, Func Offset: 0x308
	// Func End, Address: 0x23f658, Func Offset: 0x328
}

// Timestep__9zMODEnemyFf
// Start address: 0x23f660
void zMODEnemy::Timestep(float32 dt)
{
	int32 num_nme;
	int32 i;
	zNMECommon* nme;
	en_npctyp nt;
	float32 tmr_lifecycle;
	int8 @33486;
	float32 frank;
	// Line 1117, Address: 0x23f660, Func Offset: 0
	// Line 1123, Address: 0x23f684, Func Offset: 0x24
	// Line 1124, Address: 0x23f698, Func Offset: 0x38
	// Line 1125, Address: 0x23f724, Func Offset: 0xc4
	// Line 1127, Address: 0x23f73c, Func Offset: 0xdc
	// Line 1128, Address: 0x23f750, Func Offset: 0xf0
	// Line 1129, Address: 0x23f768, Func Offset: 0x108
	// Line 1136, Address: 0x23f784, Func Offset: 0x124
	// Line 1141, Address: 0x23f7a0, Func Offset: 0x140
	// Line 1142, Address: 0x23f7a8, Func Offset: 0x148
	// Line 1143, Address: 0x23f80c, Func Offset: 0x1ac
	// Line 1146, Address: 0x23f860, Func Offset: 0x200
	// Line 1147, Address: 0x23f864, Func Offset: 0x204
	// Line 1148, Address: 0x23f874, Func Offset: 0x214
	// Line 1160, Address: 0x23f884, Func Offset: 0x224
	// Line 1162, Address: 0x23f890, Func Offset: 0x230
	// Line 1164, Address: 0x23f89c, Func Offset: 0x23c
	// Line 1165, Address: 0x23f8b4, Func Offset: 0x254
	// Line 1166, Address: 0x23f8b8, Func Offset: 0x258
	// Line 1173, Address: 0x23f8cc, Func Offset: 0x26c
	// Line 1174, Address: 0x23f8d0, Func Offset: 0x270
	// Line 1175, Address: 0x23f8e8, Func Offset: 0x288
	// Line 1177, Address: 0x23f8fc, Func Offset: 0x29c
	// Line 1180, Address: 0x23f900, Func Offset: 0x2a0
	// Line 1181, Address: 0x23f914, Func Offset: 0x2b4
	// Line 1189, Address: 0x23f928, Func Offset: 0x2c8
	// Line 1191, Address: 0x23f938, Func Offset: 0x2d8
	// Line 1197, Address: 0x23f980, Func Offset: 0x320
	// Line 1124, Address: 0x23f98c, Func Offset: 0x32c
	// Line 1197, Address: 0x23f990, Func Offset: 0x330
	// Line 1124, Address: 0x23f998, Func Offset: 0x338
	// Line 1197, Address: 0x23f9b4, Func Offset: 0x354
	// Line 1136, Address: 0x23f9f8, Func Offset: 0x398
	// Line 1197, Address: 0x23fa08, Func Offset: 0x3a8
	// Line 1142, Address: 0x23fa10, Func Offset: 0x3b0
	// Line 1197, Address: 0x23fa18, Func Offset: 0x3b8
	// Line 1142, Address: 0x23fa20, Func Offset: 0x3c0
	// Line 1197, Address: 0x23fa90, Func Offset: 0x430
	// Line 1143, Address: 0x23faa0, Func Offset: 0x440
	// Line 1197, Address: 0x23fab4, Func Offset: 0x454
	// Line 1177, Address: 0x23fac4, Func Offset: 0x464
	// Line 1197, Address: 0x23fac8, Func Offset: 0x468
	// Line 1198, Address: 0x23fad8, Func Offset: 0x478
	// Func End, Address: 0x23fafc, Func Offset: 0x49c
}

// SceneReset__9zMODEnemyFv
// Start address: 0x23fb00
void zMODEnemy::SceneReset()
{
	int32 num_nme;
	int32 i;
	// Line 1016, Address: 0x23fb00, Func Offset: 0
	// Line 1018, Address: 0x23fb1c, Func Offset: 0x1c
	// Line 1019, Address: 0x23fb20, Func Offset: 0x20
	// Line 1021, Address: 0x23fb30, Func Offset: 0x30
	// Line 1022, Address: 0x23fb4c, Func Offset: 0x4c
	// Line 1026, Address: 0x23fb60, Func Offset: 0x60
	// Line 1024, Address: 0x23fb68, Func Offset: 0x68
	// Line 1026, Address: 0x23fb6c, Func Offset: 0x6c
	// Line 1036, Address: 0x23fb74, Func Offset: 0x74
	// Line 1037, Address: 0x23fb80, Func Offset: 0x80
	// Line 1036, Address: 0x23fb88, Func Offset: 0x88
	// Line 1037, Address: 0x23fb94, Func Offset: 0x94
	// Line 1040, Address: 0x23fba4, Func Offset: 0xa4
	// Func End, Address: 0x23fbc0, Func Offset: 0xc0
}

// ScenePostSetup__9zMODEnemyFv
// Start address: 0x23fbc0
void zMODEnemy::ScenePostSetup()
{
	int32 num_nme;
	int32 i;
	// Line 1002, Address: 0x23fbc0, Func Offset: 0
	// Line 1006, Address: 0x23fbdc, Func Offset: 0x1c
	// Line 1007, Address: 0x23fbe0, Func Offset: 0x20
	// Line 1012, Address: 0x23fbec, Func Offset: 0x2c
	// Line 1013, Address: 0x23fc2c, Func Offset: 0x6c
	// Func End, Address: 0x23fc44, Func Offset: 0x84
}

// SceneSetup__9zMODEnemyFv
// Start address: 0x23fc50
void zMODEnemy::SceneSetup()
{
	int32 num_nme;
	int32 i;
	int32 i;
	// Line 974, Address: 0x23fc50, Func Offset: 0
	// Line 979, Address: 0x23fc60, Func Offset: 0x10
	// Line 974, Address: 0x23fc64, Func Offset: 0x14
	// Line 978, Address: 0x23fc6c, Func Offset: 0x1c
	// Line 979, Address: 0x23fc70, Func Offset: 0x20
	// Line 990, Address: 0x23fc7c, Func Offset: 0x2c
	// Line 992, Address: 0x23fc8c, Func Offset: 0x3c
	// Line 993, Address: 0x23fca8, Func Offset: 0x58
	// Line 995, Address: 0x23fcf8, Func Offset: 0xa8
	// Line 996, Address: 0x23fd08, Func Offset: 0xb8
	// Line 998, Address: 0x23fda4, Func Offset: 0x154
	// Line 999, Address: 0x23fdcc, Func Offset: 0x17c
	// Func End, Address: 0x23fde4, Func Offset: 0x194
}

// ScenePostInit__9zMODEnemyFv
// Start address: 0x23fdf0
void zMODEnemy::ScenePostInit()
{
	st_XORDEREDARRAY* reallist;
	en_npctyp typeNeedsHUD[5];
	int32 num_nme;
	int32 i;
	zNMECommon* nme;
	// Line 904, Address: 0x23fdf0, Func Offset: 0
	// Line 906, Address: 0x23fe0c, Func Offset: 0x1c
	// Line 909, Address: 0x23fe18, Func Offset: 0x28
	// Line 915, Address: 0x23fe20, Func Offset: 0x30
	// Line 916, Address: 0x23fe24, Func Offset: 0x34
	// Line 921, Address: 0x23fe28, Func Offset: 0x38
	// Line 929, Address: 0x23fe2c, Func Offset: 0x3c
	// Line 921, Address: 0x23fe30, Func Offset: 0x40
	// Line 929, Address: 0x23fe34, Func Offset: 0x44
	// Line 921, Address: 0x23fe3c, Func Offset: 0x4c
	// Line 929, Address: 0x23fe70, Func Offset: 0x80
	// Line 930, Address: 0x23fe7c, Func Offset: 0x8c
	// Line 921, Address: 0x23fe80, Func Offset: 0x90
	// Line 930, Address: 0x23fe84, Func Offset: 0x94
	// Line 931, Address: 0x23fe90, Func Offset: 0xa0
	// Line 930, Address: 0x23fe94, Func Offset: 0xa4
	// Line 931, Address: 0x23fe98, Func Offset: 0xa8
	// Line 932, Address: 0x23fee0, Func Offset: 0xf0
	// Line 936, Address: 0x23feec, Func Offset: 0xfc
	// Line 910, Address: 0x23ff00, Func Offset: 0x110
	// Line 936, Address: 0x23ff04, Func Offset: 0x114
	// Line 911, Address: 0x23ff0c, Func Offset: 0x11c
	// Line 936, Address: 0x23ff10, Func Offset: 0x120
	// Line 912, Address: 0x23ff1c, Func Offset: 0x12c
	// Line 936, Address: 0x23ff20, Func Offset: 0x130
	// Line 913, Address: 0x23ff28, Func Offset: 0x138
	// Line 936, Address: 0x23ff30, Func Offset: 0x140
	// Line 934, Address: 0x23ff34, Func Offset: 0x144
	// Line 936, Address: 0x23ff44, Func Offset: 0x154
	// Line 940, Address: 0x23ff48, Func Offset: 0x158
	// Line 942, Address: 0x23ff60, Func Offset: 0x170
	// Line 946, Address: 0x23ff78, Func Offset: 0x188
	// Line 947, Address: 0x23ff7c, Func Offset: 0x18c
	// Line 970, Address: 0x23ff88, Func Offset: 0x198
	// Line 940, Address: 0x23ff98, Func Offset: 0x1a8
	// Line 970, Address: 0x23ff9c, Func Offset: 0x1ac
	// Line 956, Address: 0x23fff4, Func Offset: 0x204
	// Line 970, Address: 0x23fff8, Func Offset: 0x208
	// Line 971, Address: 0x240048, Func Offset: 0x258
	// Func End, Address: 0x240064, Func Offset: 0x274
}

// NME_OrdComp_byType__FPvPv
// Start address: 0x240070
int32 NME_OrdComp_byType(void* vkey, void* vitem)
{
	en_npctyp nt_key;
	en_npctyp nt_item;
	// Line 893, Address: 0x240070, Func Offset: 0
	// Line 894, Address: 0x240074, Func Offset: 0x4
	// Line 901, Address: 0x240078, Func Offset: 0x8
	// Func End, Address: 0x240080, Func Offset: 0x10
}

// SceneFinish__9zMODEnemyFv
// Start address: 0x240080
void zMODEnemy::SceneFinish()
{
	// Line 878, Address: 0x240080, Func Offset: 0
	// Line 879, Address: 0x24008c, Func Offset: 0xc
	// Line 882, Address: 0x24009c, Func Offset: 0x1c
	// Line 884, Address: 0x2400a8, Func Offset: 0x28
	// Func End, Address: 0x2400b8, Func Offset: 0x38
}

// ScenePrepare__9zMODEnemyFv
// Start address: 0x2400c0
void zMODEnemy::ScenePrepare()
{
	// Line 853, Address: 0x2400c0, Func Offset: 0
	// Line 854, Address: 0x2400c4, Func Offset: 0x4
	// Line 853, Address: 0x2400c8, Func Offset: 0x8
	// Line 854, Address: 0x2400cc, Func Offset: 0xc
	// Line 853, Address: 0x2400d0, Func Offset: 0x10
	// Line 854, Address: 0x2400d8, Func Offset: 0x18
	// Line 862, Address: 0x2400e0, Func Offset: 0x20
	// Line 864, Address: 0x2400ec, Func Offset: 0x2c
	// Line 865, Address: 0x2400f8, Func Offset: 0x38
	// Line 864, Address: 0x240100, Func Offset: 0x40
	// Line 865, Address: 0x24010c, Func Offset: 0x4c
	// Line 875, Address: 0x24011c, Func Offset: 0x5c
	// Func End, Address: 0x24012c, Func Offset: 0x6c
}

// ModulePrepUse__9zMODEnemyFv
// Start address: 0x240130
void zMODEnemy::ModulePrepUse()
{
	// Line 849, Address: 0x240130, Func Offset: 0
	// Func End, Address: 0x240140, Func Offset: 0x10
}

// AddTweaks__3NMEFPCc
// Start address: 0x240200
void AddTweaks(int8* prefix_root)
{
	int8 prefix[128];
	int8 prefix_base[128];
	int8 strbuf[128];
	int32 i;
	// Line 321, Address: 0x240200, Func Offset: 0
	// Line 325, Address: 0x240208, Func Offset: 0x8
	// Line 321, Address: 0x240210, Func Offset: 0x10
	// Line 325, Address: 0x240214, Func Offset: 0x14
	// Line 327, Address: 0x240228, Func Offset: 0x28
	// Line 343, Address: 0x240244, Func Offset: 0x44
	// Line 348, Address: 0x240260, Func Offset: 0x60
	// Line 352, Address: 0x24027c, Func Offset: 0x7c
	// Line 356, Address: 0x240298, Func Offset: 0x98
	// Line 360, Address: 0x2402b4, Func Offset: 0xb4
	// Line 363, Address: 0x2402d0, Func Offset: 0xd0
	// Line 368, Address: 0x2402ec, Func Offset: 0xec
	// Line 374, Address: 0x240308, Func Offset: 0x108
	// Line 378, Address: 0x240324, Func Offset: 0x124
	// Line 391, Address: 0x240340, Func Offset: 0x140
	// Line 399, Address: 0x24035c, Func Offset: 0x15c
	// Line 400, Address: 0x240378, Func Offset: 0x178
	// Line 401, Address: 0x24037c, Func Offset: 0x17c
	// Line 407, Address: 0x24039c, Func Offset: 0x19c
	// Line 411, Address: 0x2403ac, Func Offset: 0x1ac
	// Func End, Address: 0x2403bc, Func Offset: 0x1bc
}

