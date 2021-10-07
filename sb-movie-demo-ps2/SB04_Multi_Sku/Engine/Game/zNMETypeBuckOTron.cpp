



int32 GoalHandleMail();
int32 Enter();
int32 GoalHandleMail();
int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
int32 Exit();
int32 Enter();
void BubsieSudsie(zNMEBuckotron* npc);
int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
int32 Enter();
int32 GoalHandleMail(NMEMsg* msg);
int32 Exit();
int32 Enter();
int32 Buck_SysMail(NMESysEvent* sysmail);
int32 TypeHandleMail(NMEMsg* mail);
void DuploNotice(en_smnote note, void* data);
void Reset();
void ParseSpawnItem(xBase* baseitem);
void SetupSpawning();
void Process(float32 dt);
void BUpdate(xVec3* pos);
void Setup();
void Init(xEntAsset* asset);
int32 DfltVulnFlags();
void SelfSetup();
xAnimTable* CreateAnimTable(xAnimTable* table);
uint32 AnimPick(int32 gid);

// GoalHandleMail__16zNMEGoalBuckDeadFP6NMEMsg
// Start address: 0x2403c0
int32 zNMEGoalBuckDead::GoalHandleMail()
{
	// Line 1062, Address: 0x2403c0, Func Offset: 0
	// Func End, Address: 0x2403c8, Func Offset: 0x8
}

// Enter__16zNMEGoalBuckDeadFfPv
// Start address: 0x2403d0
int32 zNMEGoalBuckDead::Enter()
{
	// Line 1038, Address: 0x2403d0, Func Offset: 0
	// Line 1040, Address: 0x2403e8, Func Offset: 0x18
	// Line 1044, Address: 0x240408, Func Offset: 0x38
	// Line 1045, Address: 0x24055c, Func Offset: 0x18c
	// Func End, Address: 0x240574, Func Offset: 0x1a4
}

// GoalHandleMail__17zNMEGoalBuckDyingFP6NMEMsg
// Start address: 0x240580
int32 zNMEGoalBuckDying::GoalHandleMail()
{
	// Line 952, Address: 0x240580, Func Offset: 0
	// Func End, Address: 0x240588, Func Offset: 0x8
}

// Process__17zNMEGoalBuckDyingFP11en_trantypefPv
// Start address: 0x240590
int32 zNMEGoalBuckDying::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	zNMEBuckotron* npc;
	// Line 918, Address: 0x240590, Func Offset: 0
	// Line 919, Address: 0x2405d4, Func Offset: 0x44
	// Line 922, Address: 0x2405e8, Func Offset: 0x58
	// Line 923, Address: 0x2405ec, Func Offset: 0x5c
	// Line 925, Address: 0x2405f8, Func Offset: 0x68
	// Line 933, Address: 0x24062c, Func Offset: 0x9c
	// Line 935, Address: 0x2409ac, Func Offset: 0x41c
	// Line 923, Address: 0x240a24, Func Offset: 0x494
	// Line 928, Address: 0x240a2c, Func Offset: 0x49c
	// Line 935, Address: 0x240a30, Func Offset: 0x4a0
	// Line 928, Address: 0x240a34, Func Offset: 0x4a4
	// Line 935, Address: 0x240a3c, Func Offset: 0x4ac
	// Line 933, Address: 0x240a54, Func Offset: 0x4c4
	// Line 936, Address: 0x240a5c, Func Offset: 0x4cc
	// Func End, Address: 0x240a98, Func Offset: 0x508
}

// Exit__17zNMEGoalBuckDyingFfPv
// Start address: 0x240aa0
int32 zNMEGoalBuckDying::Exit()
{
	zNMEBuckotron* npc;
	// Line 911, Address: 0x240aa0, Func Offset: 0
	// Line 912, Address: 0x240ab4, Func Offset: 0x14
	// Line 913, Address: 0x240abc, Func Offset: 0x1c
	// Line 914, Address: 0x240bac, Func Offset: 0x10c
	// Line 913, Address: 0x240bbc, Func Offset: 0x11c
	// Line 914, Address: 0x240bcc, Func Offset: 0x12c
	// Line 913, Address: 0x240bd4, Func Offset: 0x134
	// Line 914, Address: 0x240be0, Func Offset: 0x140
	// Line 913, Address: 0x240c44, Func Offset: 0x1a4
	// Line 914, Address: 0x240c48, Func Offset: 0x1a8
	// Line 913, Address: 0x240c54, Func Offset: 0x1b4
	// Line 914, Address: 0x240c58, Func Offset: 0x1b8
	// Line 913, Address: 0x240c5c, Func Offset: 0x1bc
	// Line 914, Address: 0x240c60, Func Offset: 0x1c0
	// Line 913, Address: 0x240cc8, Func Offset: 0x228
	// Line 914, Address: 0x240cd4, Func Offset: 0x234
	// Line 915, Address: 0x240cec, Func Offset: 0x24c
	// Func End, Address: 0x240d00, Func Offset: 0x260
}

// Enter__17zNMEGoalBuckDyingFfPv
// Start address: 0x240d00
int32 zNMEGoalBuckDying::Enter()
{
	zNMEBuckotron* npc;
	// Line 901, Address: 0x240d00, Func Offset: 0
	// Line 903, Address: 0x240d04, Func Offset: 0x4
	// Line 901, Address: 0x240d08, Func Offset: 0x8
	// Line 902, Address: 0x240d18, Func Offset: 0x18
	// Line 903, Address: 0x240d20, Func Offset: 0x20
	// Line 902, Address: 0x240d24, Func Offset: 0x24
	// Line 903, Address: 0x240d28, Func Offset: 0x28
	// Line 904, Address: 0x240d38, Func Offset: 0x38
	// Line 905, Address: 0x240d4c, Func Offset: 0x4c
	// Line 907, Address: 0x240d64, Func Offset: 0x64
	// Line 904, Address: 0x240da0, Func Offset: 0xa0
	// Line 906, Address: 0x240dac, Func Offset: 0xac
	// Line 907, Address: 0x240db0, Func Offset: 0xb0
	// Line 908, Address: 0x240e14, Func Offset: 0x114
	// Func End, Address: 0x240e2c, Func Offset: 0x12c
}

// BubsieSudsie__20zNMEGoalBuckBirthingFP13zNMEBuckotron
// Start address: 0x240e30
void zNMEGoalBuckBirthing::BubsieSudsie(zNMEBuckotron* npc)
{
	uint32 anid_animCurr;
	xVec3 vec_offsetLeft;
	xVec3 vec_offsetRhyt;
	xMat4x3* mat_bone;
	xVec3 pos_emit;
	xMat4x3* mat_root;
	// Line 861, Address: 0x240e30, Func Offset: 0
	// Line 862, Address: 0x240e40, Func Offset: 0x10
	// Line 866, Address: 0x240e7c, Func Offset: 0x4c
	// Line 867, Address: 0x240ea4, Func Offset: 0x74
	// Line 872, Address: 0x240ecc, Func Offset: 0x9c
	// Line 874, Address: 0x240ee0, Func Offset: 0xb0
	// Line 873, Address: 0x240eec, Func Offset: 0xbc
	// Line 874, Address: 0x240ef0, Func Offset: 0xc0
	// Line 872, Address: 0x240ef4, Func Offset: 0xc4
	// Line 874, Address: 0x240ef8, Func Offset: 0xc8
	// Line 875, Address: 0x240f04, Func Offset: 0xd4
	// Line 879, Address: 0x240f10, Func Offset: 0xe0
	// Line 878, Address: 0x240f1c, Func Offset: 0xec
	// Line 879, Address: 0x240f20, Func Offset: 0xf0
	// Line 875, Address: 0x240f24, Func Offset: 0xf4
	// Line 879, Address: 0x240f28, Func Offset: 0xf8
	// Line 882, Address: 0x240f38, Func Offset: 0x108
	// Line 883, Address: 0x240f84, Func Offset: 0x154
	// Line 885, Address: 0x240fb4, Func Offset: 0x184
	// Line 886, Address: 0x240fbc, Func Offset: 0x18c
	// Line 887, Address: 0x241004, Func Offset: 0x1d4
	// Line 889, Address: 0x241008, Func Offset: 0x1d8
	// Line 887, Address: 0x24100c, Func Offset: 0x1dc
	// Line 889, Address: 0x241034, Func Offset: 0x204
	// Line 892, Address: 0x24103c, Func Offset: 0x20c
	// Func End, Address: 0x241048, Func Offset: 0x218
}

// Process__20zNMEGoalBuckBirthingFP11en_trantypefPv
// Start address: 0x241050
int32 zNMEGoalBuckBirthing::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	// Line 854, Address: 0x241050, Func Offset: 0
	// Line 856, Address: 0x241074, Func Offset: 0x24
	// Line 857, Address: 0x241084, Func Offset: 0x34
	// Line 858, Address: 0x241098, Func Offset: 0x48
	// Func End, Address: 0x2410b4, Func Offset: 0x64
}

// Enter__20zNMEGoalBuckBirthingFfPv
// Start address: 0x2410c0
int32 zNMEGoalBuckBirthing::Enter()
{
	// Line 847, Address: 0x2410c0, Func Offset: 0
	// Line 848, Address: 0x2410c4, Func Offset: 0x4
	// Line 847, Address: 0x2410c8, Func Offset: 0x8
	// Line 848, Address: 0x2410d8, Func Offset: 0x18
	// Line 849, Address: 0x2410ec, Func Offset: 0x2c
	// Line 850, Address: 0x241174, Func Offset: 0xb4
	// Func End, Address: 0x24118c, Func Offset: 0xcc
}

// GoalHandleMail__19zNMEGoalBuckRunningFP6NMEMsg
// Start address: 0x241190
int32 zNMEGoalBuckRunning::GoalHandleMail(NMEMsg* msg)
{
	int32 handled;
	// Line 813, Address: 0x241190, Func Offset: 0
	// Line 819, Address: 0x241194, Func Offset: 0x4
	// Line 813, Address: 0x241198, Func Offset: 0x8
	// Line 819, Address: 0x24119c, Func Offset: 0xc
	// Line 823, Address: 0x2411b0, Func Offset: 0x20
	// Line 829, Address: 0x2411c8, Func Offset: 0x38
	// Line 825, Address: 0x2411cc, Func Offset: 0x3c
	// Line 829, Address: 0x2411d4, Func Offset: 0x44
	// Line 826, Address: 0x2411dc, Func Offset: 0x4c
	// Line 839, Address: 0x2411e0, Func Offset: 0x50
	// Func End, Address: 0x2411ec, Func Offset: 0x5c
}

// Exit__19zNMEGoalBuckRunningFfPv
// Start address: 0x2411f0
int32 zNMEGoalBuckRunning::Exit()
{
	zNMEBuckotron* npc;
	// Line 806, Address: 0x2411f0, Func Offset: 0
	// Line 808, Address: 0x2411f4, Func Offset: 0x4
	// Line 806, Address: 0x2411f8, Func Offset: 0x8
	// Line 807, Address: 0x241200, Func Offset: 0x10
	// Line 808, Address: 0x241208, Func Offset: 0x18
	// Line 809, Address: 0x241218, Func Offset: 0x28
	// Line 808, Address: 0x241228, Func Offset: 0x38
	// Line 810, Address: 0x241234, Func Offset: 0x44
	// Func End, Address: 0x241244, Func Offset: 0x54
}

// Enter__19zNMEGoalBuckRunningFfPv
// Start address: 0x241250
int32 zNMEGoalBuckRunning::Enter()
{
	zNMEBuckotron* npc;
	// Line 799, Address: 0x241250, Func Offset: 0
	// Line 800, Address: 0x241264, Func Offset: 0x14
	// Line 801, Address: 0x241270, Func Offset: 0x20
	// Line 802, Address: 0x241288, Func Offset: 0x38
	// Line 801, Address: 0x2412c4, Func Offset: 0x74
	// Line 802, Address: 0x2412cc, Func Offset: 0x7c
	// Line 801, Address: 0x2412d4, Func Offset: 0x84
	// Line 802, Address: 0x2412d8, Func Offset: 0x88
	// Line 803, Address: 0x24133c, Func Offset: 0xec
	// Func End, Address: 0x241354, Func Offset: 0x104
}

// Buck_SysMail__13zNMEBuckotronFP11NMESysEvent
// Start address: 0x241360
int32 zNMEBuckotron::Buck_SysMail(NMESysEvent* sysmail)
{
	int32 handled;
	// Line 509, Address: 0x241360, Func Offset: 0
	// Line 512, Address: 0x241364, Func Offset: 0x4
	// Line 509, Address: 0x241368, Func Offset: 0x8
	// Line 512, Address: 0x241378, Func Offset: 0x18
	// Line 524, Address: 0x2413fc, Func Offset: 0x9c
	// Line 525, Address: 0x241410, Func Offset: 0xb0
	// Line 529, Address: 0x241418, Func Offset: 0xb8
	// Line 530, Address: 0x24142c, Func Offset: 0xcc
	// Line 534, Address: 0x241434, Func Offset: 0xd4
	// Line 535, Address: 0x241448, Func Offset: 0xe8
	// Line 539, Address: 0x241450, Func Offset: 0xf0
	// Line 540, Address: 0x241458, Func Offset: 0xf8
	// Line 539, Address: 0x24145c, Func Offset: 0xfc
	// Line 540, Address: 0x241460, Func Offset: 0x100
	// Line 541, Address: 0x241498, Func Offset: 0x138
	// Line 544, Address: 0x2414a0, Func Offset: 0x140
	// Line 546, Address: 0x2414b4, Func Offset: 0x154
	// Line 550, Address: 0x2414bc, Func Offset: 0x15c
	// Line 552, Address: 0x2414d0, Func Offset: 0x170
	// Line 554, Address: 0x2414e4, Func Offset: 0x184
	// Line 562, Address: 0x2414ec, Func Offset: 0x18c
	// Line 563, Address: 0x2414f4, Func Offset: 0x194
	// Line 562, Address: 0x2414f8, Func Offset: 0x198
	// Line 563, Address: 0x2414fc, Func Offset: 0x19c
	// Line 572, Address: 0x241534, Func Offset: 0x1d4
	// Line 544, Address: 0x241548, Func Offset: 0x1e8
	// Line 572, Address: 0x241554, Func Offset: 0x1f4
	// Line 552, Address: 0x24155c, Func Offset: 0x1fc
	// Line 573, Address: 0x241568, Func Offset: 0x208
	// Func End, Address: 0x241578, Func Offset: 0x218
}

// TypeHandleMail__13zNMEBuckotronFP6NMEMsg
// Start address: 0x241580
int32 zNMEBuckotron::TypeHandleMail(NMEMsg* mail)
{
	int32 handled;
	// Line 481, Address: 0x241580, Func Offset: 0
	// Line 484, Address: 0x241590, Func Offset: 0x10
	// Line 482, Address: 0x241594, Func Offset: 0x14
	// Line 484, Address: 0x241598, Func Offset: 0x18
	// Line 489, Address: 0x2415b4, Func Offset: 0x34
	// Line 490, Address: 0x2415cc, Func Offset: 0x4c
	// Line 492, Address: 0x2415e8, Func Offset: 0x68
	// Line 493, Address: 0x2415fc, Func Offset: 0x7c
	// Line 496, Address: 0x241604, Func Offset: 0x84
	// Line 505, Address: 0x241610, Func Offset: 0x90
	// Line 506, Address: 0x241614, Func Offset: 0x94
	// Func End, Address: 0x241628, Func Offset: 0xa8
}

// DuploNotice__13zNMEBuckotronF9en_smnotePv
// Start address: 0x241630
void zNMEBuckotron::DuploNotice(en_smnote note, void* data)
{
	// Line 476, Address: 0x241630, Func Offset: 0
	// Func End, Address: 0x241638, Func Offset: 0x8
}

// Reset__13zNMEBuckotronFv
// Start address: 0x241640
void zNMEBuckotron::Reset()
{
	zNMEGoalBuckDead* goal;
	// Line 425, Address: 0x241640, Func Offset: 0
	// Line 427, Address: 0x241650, Func Offset: 0x10
	// Line 431, Address: 0x2418cc, Func Offset: 0x28c
	// Line 433, Address: 0x2419d0, Func Offset: 0x390
	// Line 437, Address: 0x2419e4, Func Offset: 0x3a4
	// Line 446, Address: 0x2419f8, Func Offset: 0x3b8
	// Line 452, Address: 0x241a10, Func Offset: 0x3d0
	// Line 454, Address: 0x241a20, Func Offset: 0x3e0
	// Line 458, Address: 0x241a24, Func Offset: 0x3e4
	// Line 454, Address: 0x241a28, Func Offset: 0x3e8
	// Line 458, Address: 0x241a2c, Func Offset: 0x3ec
	// Line 463, Address: 0x241a3c, Func Offset: 0x3fc
	// Func End, Address: 0x241a50, Func Offset: 0x410
}

// ParseSpawnItem__13zNMEBuckotronFP5xBase
// Start address: 0x241a50
void zNMEBuckotron::ParseSpawnItem(xBase* baseitem)
{
	zNMECommon* nme;
	zMovePoint* mvpt;
	xGroup* grp;
	int32 cnt;
	int32 i;
	xBase* grpitem;
	// Line 377, Address: 0x241a50, Func Offset: 0
	// Line 378, Address: 0x241a54, Func Offset: 0x4
	// Line 377, Address: 0x241a58, Func Offset: 0x8
	// Line 378, Address: 0x241a70, Func Offset: 0x20
	// Line 382, Address: 0x241a98, Func Offset: 0x48
	// Line 385, Address: 0x241aa0, Func Offset: 0x50
	// Line 389, Address: 0x241aa8, Func Offset: 0x58
	// Line 393, Address: 0x241ab4, Func Offset: 0x64
	// Line 394, Address: 0x241ac8, Func Offset: 0x78
	// Line 395, Address: 0x241ad0, Func Offset: 0x80
	// Line 398, Address: 0x241ad8, Func Offset: 0x88
	// Line 401, Address: 0x241ae0, Func Offset: 0x90
	// Line 402, Address: 0x241ae4, Func Offset: 0x94
	// Line 403, Address: 0x241af0, Func Offset: 0xa0
	// Line 405, Address: 0x241afc, Func Offset: 0xac
	// Line 407, Address: 0x241b0c, Func Offset: 0xbc
	// Line 410, Address: 0x241b14, Func Offset: 0xc4
	// Line 411, Address: 0x241b1c, Func Offset: 0xcc
	// Line 422, Address: 0x241b30, Func Offset: 0xe0
	// Func End, Address: 0x241b4c, Func Offset: 0xfc
}

// SetupSpawning__13zNMEBuckotronFv
// Start address: 0x241b50
void zNMEBuckotron::SetupSpawning()
{
	zNMEAssetBucketOTron* buckass;
	xBase* grp_spawn;
	en_wavemode wm;
	// Line 303, Address: 0x241b50, Func Offset: 0
	// Line 304, Address: 0x241b64, Func Offset: 0x14
	// Line 314, Address: 0x241b68, Func Offset: 0x18
	// Line 317, Address: 0x241b74, Func Offset: 0x24
	// Line 327, Address: 0x241bb0, Func Offset: 0x60
	// Line 336, Address: 0x241bb8, Func Offset: 0x68
	// Line 351, Address: 0x241bc4, Func Offset: 0x74
	// Line 353, Address: 0x241bfc, Func Offset: 0xac
	// Line 354, Address: 0x241c00, Func Offset: 0xb0
	// Line 367, Address: 0x241c08, Func Offset: 0xb8
	// Line 371, Address: 0x241c0c, Func Offset: 0xbc
	// Line 373, Address: 0x241c38, Func Offset: 0xe8
	// Line 371, Address: 0x241c40, Func Offset: 0xf0
	// Line 374, Address: 0x241c4c, Func Offset: 0xfc
	// Func End, Address: 0x241c64, Func Offset: 0x114
}

// Process__13zNMEBuckotronFf
// Start address: 0x241c70
void zNMEBuckotron::Process(float32 dt)
{
	// Line 291, Address: 0x241c70, Func Offset: 0
	// Line 292, Address: 0x241c84, Func Offset: 0x14
	// Line 293, Address: 0x241c90, Func Offset: 0x20
	// Line 297, Address: 0x241ca0, Func Offset: 0x30
	// Line 300, Address: 0x241cd8, Func Offset: 0x68
	// Func End, Address: 0x241cec, Func Offset: 0x7c
}

// BUpdate__13zNMEBuckotronFP5xVec3
// Start address: 0x241cf0
void zNMEBuckotron::BUpdate(xVec3* pos)
{
	// Line 285, Address: 0x241cf0, Func Offset: 0
	// Line 286, Address: 0x241cf4, Func Offset: 0x4
	// Line 285, Address: 0x241cf8, Func Offset: 0x8
	// Line 286, Address: 0x241d00, Func Offset: 0x10
	// Line 287, Address: 0x241ed8, Func Offset: 0x1e8
	// Line 286, Address: 0x241ee8, Func Offset: 0x1f8
	// Line 287, Address: 0x241ef0, Func Offset: 0x200
	// Line 286, Address: 0x241f30, Func Offset: 0x240
	// Line 287, Address: 0x241f34, Func Offset: 0x244
	// Line 286, Address: 0x241f38, Func Offset: 0x248
	// Line 287, Address: 0x241f3c, Func Offset: 0x24c
	// Line 286, Address: 0x241f58, Func Offset: 0x268
	// Line 287, Address: 0x241f5c, Func Offset: 0x26c
	// Line 286, Address: 0x241f64, Func Offset: 0x274
	// Line 287, Address: 0x241f68, Func Offset: 0x278
	// Line 286, Address: 0x241f94, Func Offset: 0x2a4
	// Line 287, Address: 0x241f98, Func Offset: 0x2a8
	// Line 286, Address: 0x241fc8, Func Offset: 0x2d8
	// Line 287, Address: 0x241fd0, Func Offset: 0x2e0
	// Line 286, Address: 0x241ffc, Func Offset: 0x30c
	// Line 287, Address: 0x242000, Func Offset: 0x310
	// Line 286, Address: 0x242030, Func Offset: 0x340
	// Line 287, Address: 0x242038, Func Offset: 0x348
	// Line 286, Address: 0x242060, Func Offset: 0x370
	// Line 287, Address: 0x242064, Func Offset: 0x374
	// Line 286, Address: 0x242068, Func Offset: 0x378
	// Line 287, Address: 0x24206c, Func Offset: 0x37c
	// Line 286, Address: 0x242074, Func Offset: 0x384
	// Line 287, Address: 0x24207c, Func Offset: 0x38c
	// Line 286, Address: 0x2420cc, Func Offset: 0x3dc
	// Line 287, Address: 0x2420d4, Func Offset: 0x3e4
	// Line 286, Address: 0x2420f8, Func Offset: 0x408
	// Line 287, Address: 0x2420fc, Func Offset: 0x40c
	// Line 286, Address: 0x242100, Func Offset: 0x410
	// Line 287, Address: 0x242104, Func Offset: 0x414
	// Line 286, Address: 0x242124, Func Offset: 0x434
	// Line 287, Address: 0x242128, Func Offset: 0x438
	// Line 286, Address: 0x242164, Func Offset: 0x474
	// Line 287, Address: 0x242168, Func Offset: 0x478
	// Line 286, Address: 0x242170, Func Offset: 0x480
	// Line 287, Address: 0x242174, Func Offset: 0x484
	// Line 286, Address: 0x2421ac, Func Offset: 0x4bc
	// Line 287, Address: 0x2421b0, Func Offset: 0x4c0
	// Line 286, Address: 0x2421b4, Func Offset: 0x4c4
	// Line 287, Address: 0x2421b8, Func Offset: 0x4c8
	// Line 286, Address: 0x2421c0, Func Offset: 0x4d0
	// Line 287, Address: 0x2421cc, Func Offset: 0x4dc
	// Line 286, Address: 0x2421e4, Func Offset: 0x4f4
	// Line 287, Address: 0x2421e8, Func Offset: 0x4f8
	// Line 286, Address: 0x24222c, Func Offset: 0x53c
	// Line 287, Address: 0x242234, Func Offset: 0x544
	// Line 288, Address: 0x242244, Func Offset: 0x554
	// Func End, Address: 0x242250, Func Offset: 0x560
}

// Setup__13zNMEBuckotronFv
// Start address: 0x242250
void zNMEBuckotron::Setup()
{
	// Line 274, Address: 0x242250, Func Offset: 0
	// Line 275, Address: 0x242254, Func Offset: 0x4
	// Line 274, Address: 0x242258, Func Offset: 0x8
	// Line 275, Address: 0x24225c, Func Offset: 0xc
	// Line 274, Address: 0x242260, Func Offset: 0x10
	// Line 275, Address: 0x242264, Func Offset: 0x14
	// Line 277, Address: 0x24229c, Func Offset: 0x4c
	// Line 282, Address: 0x2422a4, Func Offset: 0x54
	// Func End, Address: 0x2422b4, Func Offset: 0x64
}

// Init__13zNMEBuckotronFP9xEntAsset
// Start address: 0x2422c0
void zNMEBuckotron::Init(xEntAsset* asset)
{
	// Line 267, Address: 0x2422c0, Func Offset: 0
	// Line 268, Address: 0x2422d4, Func Offset: 0x14
	// Line 269, Address: 0x2422e8, Func Offset: 0x28
	// Line 270, Address: 0x242300, Func Offset: 0x40
	// Line 269, Address: 0x242308, Func Offset: 0x48
	// Line 270, Address: 0x24230c, Func Offset: 0x4c
	// Line 271, Address: 0x24231c, Func Offset: 0x5c
	// Func End, Address: 0x24232c, Func Offset: 0x6c
}

// DfltVulnFlags__13zNMEBuckotronFv
// Start address: 0x242330
int32 zNMEBuckotron::DfltVulnFlags()
{
	// Line 263, Address: 0x242330, Func Offset: 0
	// Line 264, Address: 0x242334, Func Offset: 0x4
	// Func End, Address: 0x24233c, Func Offset: 0xc
}

// SelfSetup__13zNMEBuckotronFv
// Start address: 0x242340
void zNMEBuckotron::SelfSetup()
{
	xBehaveMgr* bmgr;
	xPsyche* psy;
	// Line 218, Address: 0x242340, Func Offset: 0
	// Line 220, Address: 0x24234c, Func Offset: 0xc
	// Line 221, Address: 0x242354, Func Offset: 0x14
	// Line 224, Address: 0x242368, Func Offset: 0x28
	// Line 227, Address: 0x24236c, Func Offset: 0x2c
	// Line 231, Address: 0x242374, Func Offset: 0x34
	// Line 232, Address: 0x242388, Func Offset: 0x48
	// Line 233, Address: 0x24239c, Func Offset: 0x5c
	// Line 234, Address: 0x2423b0, Func Offset: 0x70
	// Line 238, Address: 0x2423c4, Func Offset: 0x84
	// Line 241, Address: 0x2423cc, Func Offset: 0x8c
	// Line 244, Address: 0x2423d8, Func Offset: 0x98
	// Func End, Address: 0x2423e8, Func Offset: 0xa8
}

// CreateAnimTable__13zNMEBuckotronFP10xAnimTable
// Start address: 0x2423f0
xAnimTable* zNMEBuckotron::CreateAnimTable(xAnimTable* table)
{
	int32 ourAnims[5];
	// Line 169, Address: 0x2423f0, Func Offset: 0
	// Line 175, Address: 0x242400, Func Offset: 0x10
	// Line 182, Address: 0x242408, Func Offset: 0x18
	// Line 186, Address: 0x242450, Func Offset: 0x60
	// Line 190, Address: 0x242498, Func Offset: 0xa8
	// Line 194, Address: 0x2424e0, Func Offset: 0xf0
	// Line 202, Address: 0x242528, Func Offset: 0x138
	// Line 210, Address: 0x24252c, Func Offset: 0x13c
	// Line 202, Address: 0x242530, Func Offset: 0x140
	// Line 210, Address: 0x242538, Func Offset: 0x148
	// Line 202, Address: 0x242544, Func Offset: 0x154
	// Line 210, Address: 0x242574, Func Offset: 0x184
	// Line 213, Address: 0x242588, Func Offset: 0x198
	// Line 175, Address: 0x242590, Func Offset: 0x1a0
	// Line 213, Address: 0x242594, Func Offset: 0x1a4
	// Line 214, Address: 0x2425a4, Func Offset: 0x1b4
	// Func End, Address: 0x2425b4, Func Offset: 0x1c4
}

// AnimPick__13zNMEBuckotronFi11en_npcgspotP5xGoal
// Start address: 0x2425c0
uint32 AnimPick(int32 gid)
{
	int32 idx;
	uint32 da_anim;
	int32 toggle;
	// Line 140, Address: 0x2425c0, Func Offset: 0
	// Line 143, Address: 0x2425ec, Func Offset: 0x2c
	// Line 147, Address: 0x2425f8, Func Offset: 0x38
	// Line 149, Address: 0x242604, Func Offset: 0x44
	// Line 151, Address: 0x242610, Func Offset: 0x50
	// Line 153, Address: 0x242618, Func Offset: 0x58
	// Line 161, Address: 0x24261c, Func Offset: 0x5c
	// Line 162, Address: 0x242624, Func Offset: 0x64
	// Line 166, Address: 0x242638, Func Offset: 0x78
	// Func End, Address: 0x242640, Func Offset: 0x80
}

