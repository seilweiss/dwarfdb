



int32 Exit();
int32 Enter();
void ZapperUpdate();
void ZapperStart();
int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
int32 Exit();
int32 Enter();
void DangerSigns();
int32 JellyMailDamage(NMEDamageInfo* dmgmail);
int32 TypeHandleMail(NMEMsg* mail);
void Process(float32 dt);
void BUpdate();
int32 IsAlive();
void Reset();
xAnimTable* CreateAnimTable(xAnimTable* table);
uint32 AnimPick(int32 gid, en_npcgspot gspot);
void SelfSetup();
void Setup();
int32 DfltVulnFlags();
void CreateConfig();

// Exit__18zNMEGoalJellyDyingFfPv
// Start address: 0x237bc0
int32 zNMEGoalJellyDying::Exit()
{
	zNMECritJelly* npc;
	xVec3 vel;
	// Line 792, Address: 0x237bc0, Func Offset: 0
	// Line 793, Address: 0x237bd4, Func Offset: 0x14
	// Line 796, Address: 0x237bdc, Func Offset: 0x1c
	// Line 799, Address: 0x237be4, Func Offset: 0x24
	// Line 800, Address: 0x237c44, Func Offset: 0x84
	// Line 801, Address: 0x237c4c, Func Offset: 0x8c
	// Line 802, Address: 0x237c70, Func Offset: 0xb0
	// Line 806, Address: 0x237c84, Func Offset: 0xc4
	// Line 807, Address: 0x237cbc, Func Offset: 0xfc
	// Func End, Address: 0x237cd0, Func Offset: 0x110
}

// Enter__18zNMEGoalJellyDyingFfPv
// Start address: 0x237cd0
int32 zNMEGoalJellyDying::Enter()
{
	zNMECritJelly* npc;
	// Line 780, Address: 0x237cd0, Func Offset: 0
	// Line 781, Address: 0x237cec, Func Offset: 0x1c
	// Line 784, Address: 0x237cf4, Func Offset: 0x24
	// Line 785, Address: 0x237cfc, Func Offset: 0x2c
	// Line 786, Address: 0x237d00, Func Offset: 0x30
	// Line 788, Address: 0x237d04, Func Offset: 0x34
	// Line 789, Address: 0x238060, Func Offset: 0x390
	// Func End, Address: 0x23807c, Func Offset: 0x3ac
}

// ZapperUpdate__19zNMEGoalJellyAttackFv
// Start address: 0x238080
void zNMEGoalJellyAttack::ZapperUpdate()
{
	int32 idx_fromBone'265;
	zNMECritJelly* npc;
	float32 tym_ancur;
	float32 rat;
	xVec3 pos_bone;
	int32 i;
	int32 idx_tgtBone;
	xVec3 pos_tgt;
	xVec3 pos_plyr;
	int32 i;
	xVec3 pos_tgt;
	xVec3 wt_tgt;
	float32 tym_attackOn[2];
	int32 idx_fromBone;
	// Line 681, Address: 0x238080, Func Offset: 0
	// Line 689, Address: 0x2380c0, Func Offset: 0x40
	// Line 694, Address: 0x2380d4, Func Offset: 0x54
	// Line 695, Address: 0x2380d8, Func Offset: 0x58
	// Line 697, Address: 0x238134, Func Offset: 0xb4
	// Line 704, Address: 0x23817c, Func Offset: 0xfc
	// Line 703, Address: 0x238180, Func Offset: 0x100
	// Line 704, Address: 0x238184, Func Offset: 0x104
	// Line 703, Address: 0x238188, Func Offset: 0x108
	// Line 704, Address: 0x23818c, Func Offset: 0x10c
	// Line 705, Address: 0x2381a0, Func Offset: 0x120
	// Line 708, Address: 0x2381bc, Func Offset: 0x13c
	// Line 705, Address: 0x2381c0, Func Offset: 0x140
	// Line 708, Address: 0x2381c8, Func Offset: 0x148
	// Line 709, Address: 0x2381f0, Func Offset: 0x170
	// Line 713, Address: 0x238240, Func Offset: 0x1c0
	// Line 710, Address: 0x238244, Func Offset: 0x1c4
	// Line 713, Address: 0x238248, Func Offset: 0x1c8
	// Line 710, Address: 0x23824c, Func Offset: 0x1cc
	// Line 713, Address: 0x23825c, Func Offset: 0x1dc
	// Line 710, Address: 0x238260, Func Offset: 0x1e0
	// Line 713, Address: 0x238280, Func Offset: 0x200
	// Line 716, Address: 0x23828c, Func Offset: 0x20c
	// Line 717, Address: 0x23829c, Func Offset: 0x21c
	// Line 719, Address: 0x2382b0, Func Offset: 0x230
	// Line 720, Address: 0x23832c, Func Offset: 0x2ac
	// Line 722, Address: 0x238340, Func Offset: 0x2c0
	// Line 723, Address: 0x238368, Func Offset: 0x2e8
	// Line 724, Address: 0x2383b8, Func Offset: 0x338
	// Line 726, Address: 0x2383bc, Func Offset: 0x33c
	// Line 724, Address: 0x2383c0, Func Offset: 0x340
	// Line 726, Address: 0x2383c4, Func Offset: 0x344
	// Line 724, Address: 0x2383c8, Func Offset: 0x348
	// Line 726, Address: 0x2383f8, Func Offset: 0x378
	// Line 728, Address: 0x238404, Func Offset: 0x384
	// Line 730, Address: 0x238418, Func Offset: 0x398
	// Line 739, Address: 0x238420, Func Offset: 0x3a0
	// Line 742, Address: 0x238424, Func Offset: 0x3a4
	// Line 739, Address: 0x238430, Func Offset: 0x3b0
	// Line 742, Address: 0x238448, Func Offset: 0x3c8
	// Line 744, Address: 0x238450, Func Offset: 0x3d0
	// Line 745, Address: 0x238490, Func Offset: 0x410
	// Line 747, Address: 0x23849c, Func Offset: 0x41c
	// Line 749, Address: 0x2384b8, Func Offset: 0x438
	// Line 750, Address: 0x238584, Func Offset: 0x504
	// Line 751, Address: 0x238650, Func Offset: 0x5d0
	// Line 753, Address: 0x238694, Func Offset: 0x614
	// Line 751, Address: 0x238698, Func Offset: 0x618
	// Line 753, Address: 0x238728, Func Offset: 0x6a8
	// Line 755, Address: 0x238734, Func Offset: 0x6b4
	// Line 773, Address: 0x238748, Func Offset: 0x6c8
	// Func End, Address: 0x23878c, Func Offset: 0x70c
}

// ZapperStart__19zNMEGoalJellyAttackFv
// Start address: 0x238790
void zNMEGoalJellyAttack::ZapperStart()
{
	zNMECritJelly* npc;
	_tagLightningAdd info;
	xVec3 pos_bone;
	int32 i;
	// Line 627, Address: 0x238790, Func Offset: 0
	// Line 636, Address: 0x238794, Func Offset: 0x4
	// Line 627, Address: 0x238798, Func Offset: 0x8
	// Line 636, Address: 0x23879c, Func Offset: 0xc
	// Line 627, Address: 0x2387a0, Func Offset: 0x10
	// Line 632, Address: 0x2387ac, Func Offset: 0x1c
	// Line 636, Address: 0x2387b4, Func Offset: 0x24
	// Line 637, Address: 0x2387bc, Func Offset: 0x2c
	// Line 639, Address: 0x2387cc, Func Offset: 0x3c
	// Line 637, Address: 0x2387d0, Func Offset: 0x40
	// Line 639, Address: 0x2387d4, Func Offset: 0x44
	// Line 640, Address: 0x2387ec, Func Offset: 0x5c
	// Line 641, Address: 0x23883c, Func Offset: 0xac
	// Line 647, Address: 0x238848, Func Offset: 0xb8
	// Line 641, Address: 0x23884c, Func Offset: 0xbc
	// Line 645, Address: 0x238850, Func Offset: 0xc0
	// Line 648, Address: 0x238854, Func Offset: 0xc4
	// Line 641, Address: 0x238858, Func Offset: 0xc8
	// Line 650, Address: 0x23885c, Func Offset: 0xcc
	// Line 641, Address: 0x238860, Func Offset: 0xd0
	// Line 645, Address: 0x238880, Func Offset: 0xf0
	// Line 646, Address: 0x238884, Func Offset: 0xf4
	// Line 641, Address: 0x238888, Func Offset: 0xf8
	// Line 647, Address: 0x23888c, Func Offset: 0xfc
	// Line 648, Address: 0x238898, Func Offset: 0x108
	// Line 647, Address: 0x23889c, Func Offset: 0x10c
	// Line 651, Address: 0x2388a4, Func Offset: 0x114
	// Line 653, Address: 0x2388b0, Func Offset: 0x120
	// Line 655, Address: 0x2388c0, Func Offset: 0x130
	// Line 658, Address: 0x2388c8, Func Offset: 0x138
	// Func End, Address: 0x2388dc, Func Offset: 0x14c
}

// Process__19zNMEGoalJellyAttackFP11en_trantypefPv
// Start address: 0x2388e0
int32 zNMEGoalJellyAttack::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	// Line 614, Address: 0x2388e0, Func Offset: 0
	// Line 615, Address: 0x238904, Func Offset: 0x24
	// Line 616, Address: 0x23890c, Func Offset: 0x2c
	// Line 617, Address: 0x238920, Func Offset: 0x40
	// Func End, Address: 0x23893c, Func Offset: 0x5c
}

// Exit__19zNMEGoalJellyAttackFfPv
// Start address: 0x238940
int32 zNMEGoalJellyAttack::Exit()
{
	// Line 608, Address: 0x238940, Func Offset: 0
	// Line 609, Address: 0x238944, Func Offset: 0x4
	// Line 608, Address: 0x238948, Func Offset: 0x8
	// Line 609, Address: 0x238958, Func Offset: 0x18
	// Line 610, Address: 0x2389a0, Func Offset: 0x60
	// Line 609, Address: 0x2389b4, Func Offset: 0x74
	// Line 611, Address: 0x2389c0, Func Offset: 0x80
	// Func End, Address: 0x2389d8, Func Offset: 0x98
}

// Enter__19zNMEGoalJellyAttackFfPv
// Start address: 0x2389e0
int32 zNMEGoalJellyAttack::Enter()
{
	// Line 598, Address: 0x2389e0, Func Offset: 0
	// Line 601, Address: 0x2389e4, Func Offset: 0x4
	// Line 598, Address: 0x2389e8, Func Offset: 0x8
	// Line 601, Address: 0x2389f8, Func Offset: 0x18
	// Line 603, Address: 0x238a0c, Func Offset: 0x2c
	// Line 604, Address: 0x238a14, Func Offset: 0x34
	// Line 605, Address: 0x238ab0, Func Offset: 0xd0
	// Func End, Address: 0x238ac8, Func Offset: 0xe8
}

// DangerSigns__13zNMECritJellyFv
// Start address: 0x238ad0
void zNMECritJelly::DangerSigns()
{
	_tagLightningAdd info;
	int32 idx_frombone;
	int32 idx_destbone;
	xMat4x3 matroot;
	xVec3 pos_from;
	xVec3 pos_dest;
	// Line 525, Address: 0x238ad0, Func Offset: 0
	// Line 528, Address: 0x238ad4, Func Offset: 0x4
	// Line 525, Address: 0x238ad8, Func Offset: 0x8
	// Line 528, Address: 0x238adc, Func Offset: 0xc
	// Line 525, Address: 0x238ae0, Func Offset: 0x10
	// Line 528, Address: 0x238ae8, Func Offset: 0x18
	// Line 529, Address: 0x238af0, Func Offset: 0x20
	// Line 532, Address: 0x238b00, Func Offset: 0x30
	// Line 534, Address: 0x238b10, Func Offset: 0x40
	// Line 540, Address: 0x238b1c, Func Offset: 0x4c
	// Line 541, Address: 0x238b28, Func Offset: 0x58
	// Line 542, Address: 0x238b38, Func Offset: 0x68
	// Line 545, Address: 0x238b44, Func Offset: 0x74
	// Line 546, Address: 0x238b48, Func Offset: 0x78
	// Line 542, Address: 0x238b4c, Func Offset: 0x7c
	// Line 545, Address: 0x238b50, Func Offset: 0x80
	// Line 546, Address: 0x238b5c, Func Offset: 0x8c
	// Line 545, Address: 0x238b60, Func Offset: 0x90
	// Line 546, Address: 0x238b64, Func Offset: 0x94
	// Line 545, Address: 0x238b6c, Func Offset: 0x9c
	// Line 546, Address: 0x238b80, Func Offset: 0xb0
	// Line 547, Address: 0x238b8c, Func Offset: 0xbc
	// Line 548, Address: 0x238bd4, Func Offset: 0x104
	// Line 556, Address: 0x238bd8, Func Offset: 0x108
	// Line 548, Address: 0x238bdc, Func Offset: 0x10c
	// Line 556, Address: 0x238bf0, Func Offset: 0x120
	// Line 548, Address: 0x238bf4, Func Offset: 0x124
	// Line 555, Address: 0x238c0c, Func Offset: 0x13c
	// Line 556, Address: 0x238c20, Func Offset: 0x150
	// Line 555, Address: 0x238c24, Func Offset: 0x154
	// Line 557, Address: 0x238c2c, Func Offset: 0x15c
	// Line 558, Address: 0x238c84, Func Offset: 0x1b4
	// Line 571, Address: 0x238cc4, Func Offset: 0x1f4
	// Line 558, Address: 0x238ccc, Func Offset: 0x1fc
	// Line 572, Address: 0x238cd0, Func Offset: 0x200
	// Line 571, Address: 0x238cd4, Func Offset: 0x204
	// Line 572, Address: 0x238cd8, Func Offset: 0x208
	// Line 573, Address: 0x238cdc, Func Offset: 0x20c
	// Line 574, Address: 0x238ce0, Func Offset: 0x210
	// Line 573, Address: 0x238ce4, Func Offset: 0x214
	// Line 558, Address: 0x238ce8, Func Offset: 0x218
	// Line 574, Address: 0x238cec, Func Offset: 0x21c
	// Line 558, Address: 0x238cf0, Func Offset: 0x220
	// Line 576, Address: 0x238cf8, Func Offset: 0x228
	// Line 558, Address: 0x238cfc, Func Offset: 0x22c
	// Line 576, Address: 0x238d04, Func Offset: 0x234
	// Line 581, Address: 0x238d0c, Func Offset: 0x23c
	// Func End, Address: 0x238d1c, Func Offset: 0x24c
}

// JellyMailDamage__13zNMECritJellyFP13NMEDamageInfo
// Start address: 0x238d20
int32 zNMECritJelly::JellyMailDamage(NMEDamageInfo* dmgmail)
{
	int32 handled;
	xPsyche* psy;
	xGoal* goal;
	// Line 386, Address: 0x238d20, Func Offset: 0
	// Line 393, Address: 0x238d30, Func Offset: 0x10
	// Line 396, Address: 0x238d5c, Func Offset: 0x3c
	// Line 399, Address: 0x238d60, Func Offset: 0x40
	// Line 401, Address: 0x238d70, Func Offset: 0x50
	// Line 402, Address: 0x238d74, Func Offset: 0x54
	// Line 401, Address: 0x238d78, Func Offset: 0x58
	// Line 402, Address: 0x238d7c, Func Offset: 0x5c
	// Line 404, Address: 0x238d8c, Func Offset: 0x6c
	// Line 432, Address: 0x238d94, Func Offset: 0x74
	// Line 434, Address: 0x238da8, Func Offset: 0x88
	// Line 436, Address: 0x238db0, Func Offset: 0x90
	// Line 442, Address: 0x238db4, Func Offset: 0x94
	// Line 443, Address: 0x238db8, Func Offset: 0x98
	// Func End, Address: 0x238dcc, Func Offset: 0xac
}

// TypeHandleMail__13zNMECritJellyFP6NMEMsg
// Start address: 0x238dd0
int32 zNMECritJelly::TypeHandleMail(NMEMsg* mail)
{
	int32 handled;
	xPsyche* psy;
	xGoal* goal;
	// Line 351, Address: 0x238dd0, Func Offset: 0
	// Line 352, Address: 0x238de0, Func Offset: 0x10
	// Line 354, Address: 0x238de4, Func Offset: 0x14
	// Line 356, Address: 0x238e0c, Func Offset: 0x3c
	// Line 357, Address: 0x238e14, Func Offset: 0x44
	// Line 361, Address: 0x238e1c, Func Offset: 0x4c
	// Line 364, Address: 0x238e20, Func Offset: 0x50
	// Line 367, Address: 0x238e30, Func Offset: 0x60
	// Line 368, Address: 0x238e38, Func Offset: 0x68
	// Line 370, Address: 0x238e4c, Func Offset: 0x7c
	// Line 373, Address: 0x238e54, Func Offset: 0x84
	// Line 382, Address: 0x238e60, Func Offset: 0x90
	// Line 383, Address: 0x238e64, Func Offset: 0x94
	// Func End, Address: 0x238e78, Func Offset: 0xa8
}

// Process__13zNMECritJellyFf
// Start address: 0x238e80
void zNMECritJelly::Process(float32 dt)
{
	xMat4x3 oldMat;
	xEntFrame tmpFrame;
	// Line 309, Address: 0x238e80, Func Offset: 0
	// Line 315, Address: 0x238ea8, Func Offset: 0x28
	// Line 309, Address: 0x238eac, Func Offset: 0x2c
	// Line 315, Address: 0x238eb8, Func Offset: 0x38
	// Line 322, Address: 0x238ec0, Func Offset: 0x40
	// Line 324, Address: 0x238ed0, Func Offset: 0x50
	// Line 325, Address: 0x238eec, Func Offset: 0x6c
	// Line 326, Address: 0x238f3c, Func Offset: 0xbc
	// Line 327, Address: 0x238f44, Func Offset: 0xc4
	// Line 328, Address: 0x238f50, Func Offset: 0xd0
	// Line 329, Address: 0x238f58, Func Offset: 0xd8
	// Line 331, Address: 0x238ff8, Func Offset: 0x178
	// Line 334, Address: 0x239034, Func Offset: 0x1b4
	// Line 346, Address: 0x239040, Func Offset: 0x1c0
	// Line 325, Address: 0x2390c8, Func Offset: 0x248
	// Line 346, Address: 0x2390d0, Func Offset: 0x250
	// Line 325, Address: 0x2390e0, Func Offset: 0x260
	// Line 346, Address: 0x2390e4, Func Offset: 0x264
	// Line 325, Address: 0x2390e8, Func Offset: 0x268
	// Line 346, Address: 0x2390ec, Func Offset: 0x26c
	// Line 325, Address: 0x239118, Func Offset: 0x298
	// Line 346, Address: 0x23912c, Func Offset: 0x2ac
	// Line 325, Address: 0x239130, Func Offset: 0x2b0
	// Line 346, Address: 0x239138, Func Offset: 0x2b8
	// Line 325, Address: 0x23914c, Func Offset: 0x2cc
	// Line 346, Address: 0x239158, Func Offset: 0x2d8
	// Line 336, Address: 0x239184, Func Offset: 0x304
	// Line 346, Address: 0x239188, Func Offset: 0x308
	// Line 342, Address: 0x239264, Func Offset: 0x3e4
	// Line 346, Address: 0x239268, Func Offset: 0x3e8
	// Line 342, Address: 0x239288, Func Offset: 0x408
	// Line 346, Address: 0x23928c, Func Offset: 0x40c
	// Line 347, Address: 0x239320, Func Offset: 0x4a0
	// Func End, Address: 0x239340, Func Offset: 0x4c0
}

// BUpdate__13zNMECritJellyFP5xVec3
// Start address: 0x239340
void zNMECritJelly::BUpdate()
{
	xMat4x3* mat_bone;
	xMat4x3* mat_root;
	xVec3 pos_bone;
	// Line 296, Address: 0x239340, Func Offset: 0
	// Line 301, Address: 0x239348, Func Offset: 0x8
	// Line 296, Address: 0x23934c, Func Offset: 0xc
	// Line 298, Address: 0x23935c, Func Offset: 0x1c
	// Line 301, Address: 0x239360, Func Offset: 0x20
	// Line 302, Address: 0x2393ac, Func Offset: 0x6c
	// Line 303, Address: 0x2393b0, Func Offset: 0x70
	// Line 302, Address: 0x2393b4, Func Offset: 0x74
	// Line 303, Address: 0x2393b8, Func Offset: 0x78
	// Line 302, Address: 0x2393bc, Func Offset: 0x7c
	// Line 303, Address: 0x2393c8, Func Offset: 0x88
	// Line 302, Address: 0x2393cc, Func Offset: 0x8c
	// Line 303, Address: 0x2393e8, Func Offset: 0xa8
	// Line 305, Address: 0x239918, Func Offset: 0x5d8
	// Func End, Address: 0x239928, Func Offset: 0x5e8
}

// IsAlive__13zNMECritJellyFv
// Start address: 0x239930
int32 zNMECritJelly::IsAlive()
{
	int32 gid_nolife[3];
	int32 gid;
	// Line 283, Address: 0x239930, Func Offset: 0
	// Line 284, Address: 0x239934, Func Offset: 0x4
	// Line 283, Address: 0x239938, Func Offset: 0x8
	// Line 284, Address: 0x23993c, Func Offset: 0xc
	// Line 289, Address: 0x239940, Func Offset: 0x10
	// Line 284, Address: 0x239944, Func Offset: 0x14
	// Line 289, Address: 0x23995c, Func Offset: 0x2c
	// Line 290, Address: 0x239964, Func Offset: 0x34
	// Line 293, Address: 0x239998, Func Offset: 0x68
	// Line 291, Address: 0x23999c, Func Offset: 0x6c
	// Line 293, Address: 0x2399a8, Func Offset: 0x78
	// Func End, Address: 0x2399b0, Func Offset: 0x80
}

// Reset__13zNMECritJellyFv
// Start address: 0x2399b0
void zNMECritJelly::Reset()
{
	zNMEGoalCritDead* goal;
	// Line 263, Address: 0x2399b0, Func Offset: 0
	// Line 264, Address: 0x2399c0, Func Offset: 0x10
	// Line 266, Address: 0x239c3c, Func Offset: 0x28c
	// Line 270, Address: 0x239c50, Func Offset: 0x2a0
	// Line 274, Address: 0x239c64, Func Offset: 0x2b4
	// Line 276, Address: 0x239c74, Func Offset: 0x2c4
	// Line 278, Address: 0x239c7c, Func Offset: 0x2cc
	// Line 281, Address: 0x239cbc, Func Offset: 0x30c
	// Func End, Address: 0x239cd0, Func Offset: 0x320
}

// CreateAnimTable__13zNMECritJellyFP10xAnimTable
// Start address: 0x239cd0
xAnimTable* zNMECritJelly::CreateAnimTable(xAnimTable* table)
{
	// Line 251, Address: 0x239cd0, Func Offset: 0
	// Line 252, Address: 0x239ce0, Func Offset: 0x10
	// Line 257, Address: 0x239ce8, Func Offset: 0x18
	// Line 259, Address: 0x239e68, Func Offset: 0x198
	// Line 253, Address: 0x239e70, Func Offset: 0x1a0
	// Line 259, Address: 0x239e74, Func Offset: 0x1a4
	// Line 260, Address: 0x239e84, Func Offset: 0x1b4
	// Func End, Address: 0x239e94, Func Offset: 0x1c4
}

// AnimPick__13zNMECritJellyFi11en_npcgspotP5xGoal
// Start address: 0x239ea0
uint32 AnimPick(int32 gid, en_npcgspot gspot)
{
	int32 idx;
	uint32 da_anim;
	// Line 218, Address: 0x239ea0, Func Offset: 0
	// Line 215, Address: 0x239ea4, Func Offset: 0x4
	// Line 218, Address: 0x239ea8, Func Offset: 0x8
	// Line 221, Address: 0x239ee8, Func Offset: 0x48
	// Line 224, Address: 0x239ef0, Func Offset: 0x50
	// Line 226, Address: 0x239f00, Func Offset: 0x60
	// Line 229, Address: 0x239f08, Func Offset: 0x68
	// Line 232, Address: 0x239f10, Func Offset: 0x70
	// Line 234, Address: 0x239f18, Func Offset: 0x78
	// Line 243, Address: 0x239f1c, Func Offset: 0x7c
	// Line 244, Address: 0x239f24, Func Offset: 0x84
	// Line 248, Address: 0x239f38, Func Offset: 0x98
	// Func End, Address: 0x239f40, Func Offset: 0xa0
}

// SelfSetup__13zNMECritJellyFv
// Start address: 0x239f40
void zNMECritJelly::SelfSetup()
{
	xBehaveMgr* bmgr;
	xPsyche* psy;
	// Line 185, Address: 0x239f40, Func Offset: 0
	// Line 187, Address: 0x239f4c, Func Offset: 0xc
	// Line 188, Address: 0x239f54, Func Offset: 0x14
	// Line 191, Address: 0x239f68, Func Offset: 0x28
	// Line 194, Address: 0x239f6c, Func Offset: 0x2c
	// Line 198, Address: 0x239f74, Func Offset: 0x34
	// Line 199, Address: 0x239f88, Func Offset: 0x48
	// Line 201, Address: 0x239f9c, Func Offset: 0x5c
	// Line 202, Address: 0x239fb0, Func Offset: 0x70
	// Line 203, Address: 0x239fc4, Func Offset: 0x84
	// Line 205, Address: 0x239fd8, Func Offset: 0x98
	// Line 208, Address: 0x239fe0, Func Offset: 0xa0
	// Line 211, Address: 0x239fec, Func Offset: 0xac
	// Func End, Address: 0x239ffc, Func Offset: 0xbc
}

// Setup__13zNMECritJellyFv
// Start address: 0x23a000
void zNMECritJelly::Setup()
{
	// Line 178, Address: 0x23a000, Func Offset: 0
	// Line 179, Address: 0x23a004, Func Offset: 0x4
	// Line 178, Address: 0x23a008, Func Offset: 0x8
	// Line 179, Address: 0x23a00c, Func Offset: 0xc
	// Line 181, Address: 0x23a018, Func Offset: 0x18
	// Line 180, Address: 0x23a020, Func Offset: 0x20
	// Line 181, Address: 0x23a030, Func Offset: 0x30
	// Func End, Address: 0x23a048, Func Offset: 0x48
}

// DfltVulnFlags__13zNMECritJellyFv
// Start address: 0x23a050
int32 zNMECritJelly::DfltVulnFlags()
{
	// Line 155, Address: 0x23a050, Func Offset: 0
	// Line 156, Address: 0x23a054, Func Offset: 0x4
	// Func End, Address: 0x23a05c, Func Offset: 0xc
}

// CreateConfig__13zNMECritJellyFPCc
// Start address: 0x23a060
void zNMECritJelly::CreateConfig()
{
	// Line 118, Address: 0x23a060, Func Offset: 0
	// Line 119, Address: 0x23a064, Func Offset: 0x4
	// Line 118, Address: 0x23a068, Func Offset: 0x8
	// Line 119, Address: 0x23a06c, Func Offset: 0xc
	// Line 118, Address: 0x23a070, Func Offset: 0x10
	// Line 119, Address: 0x23a074, Func Offset: 0x14
	// Line 122, Address: 0x23a078, Func Offset: 0x18
	// Line 123, Address: 0x23a084, Func Offset: 0x24
	// Line 134, Address: 0x23a0b8, Func Offset: 0x58
	// Line 123, Address: 0x23a0c0, Func Offset: 0x60
	// Line 135, Address: 0x23a0c8, Func Offset: 0x68
	// Func End, Address: 0x23a0d4, Func Offset: 0x74
}

