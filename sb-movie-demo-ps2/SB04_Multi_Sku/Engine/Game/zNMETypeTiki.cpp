



int32 Exit();
int32 Enter();
int32 Exit();
int32 Enter();
int32 Enter();
int32 Exit();
int32 Enter();
int32 Enter();
int32 Enter();
void loveyTikiRender(xEnt* ent);
void genericTikiRender(xEnt* ent);
int32 tikiDeadCB(xGoal* rawgoal);
int32 tikiDyingCB(xGoal* rawgoal, en_trantype* trantype, float32 dt);
int32 thunderCountCB(xGoal* rawgoal, en_trantype* trantype, float32 dt);
int32 thunderIdleCB(xGoal* rawgoal, en_trantype* trantype, float32 dt);
int32 quietHideCB(xGoal* rawgoal, en_trantype* trantype, float32 dt);
int32 quietIdleCB(xGoal* rawgoal, en_trantype* trantype, float32 dt);
int32 loveyPatrolCB(xGoal* rawgoal, en_trantype* trantype, float32 dt);
int32 loveyIdleCB(xGoal* rawgoal, en_trantype* trantype, float32 dt);
void HoverBubCone(xVec3* pos_emitBase, xVec3* dir_emit, int32 num_bub, float32 rad_cone, float32 rad_emitJitter, float32 spd_emitBase, float32 spd_emitRand, float32 scl_bub);
void HoverBubStream();
void HoverBubbles(float32 dt);
void RemoveFromFamily();
void FindParents(zScene* zsc);
void BUpdate();
void RenderExtra();
void Render();
int32 SysEvent(xBase* from, xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget, uint32 toParamWidgetID, int32* handled);
void ProcSubContract(float32 dt);
void UpdateAnimBound();
void Process(float32 dt);
void SelfSetup();
int32 SetCarryState(en_carystat cs);
int32 TypeHandleMail(NMEMsg* mail);
void Damage(en_npcdmg damtype);
zMovePoint* MvptFirstFollow();
zNMENavNet* Gimme_NavNet();
void InitTikiBoundInfo();
void Init(xEntAsset* entass);
void Setup();
void Reset();
xAnimTable* CreateAnimTable(xAnimTable* table);
void zNMETiki_ReparentOrphans();
void zNMETiki_PickTikisToAnimate();
void TikiFX_Setup_Lovey();
void TikiFX_Setup_Thunder();
void zNMETiki_InitStacking(zScene* zsc);
void ZNME_Tiki_Startup();

// Exit__16zNMEGoalTikiDeadFfPv
// Start address: 0x1ff820
int32 zNMEGoalTikiDead::Exit()
{
	zNMETiki* tiki;
	// Line 3641, Address: 0x1ff820, Func Offset: 0
	// Line 3642, Address: 0x1ff828, Func Offset: 0x8
	// Line 3644, Address: 0x1ff830, Func Offset: 0x10
	// Line 3642, Address: 0x1ff834, Func Offset: 0x14
	// Line 3644, Address: 0x1ff838, Func Offset: 0x18
	// Line 3646, Address: 0x1ff854, Func Offset: 0x34
	// Line 3648, Address: 0x1ff8c0, Func Offset: 0xa0
	// Line 3651, Address: 0x1ff8d4, Func Offset: 0xb4
	// Line 3650, Address: 0x1ff8d8, Func Offset: 0xb8
	// Line 3651, Address: 0x1ff8dc, Func Offset: 0xbc
	// Func End, Address: 0x1ff8e8, Func Offset: 0xc8
}

// Enter__16zNMEGoalTikiDeadFfPv
// Start address: 0x1ff920
int32 zNMEGoalTikiDead::Enter()
{
	zNMETiki* tiki;
	// Line 3624, Address: 0x1ff920, Func Offset: 0
	// Line 3625, Address: 0x1ff928, Func Offset: 0x8
	// Line 3627, Address: 0x1ff930, Func Offset: 0x10
	// Line 3625, Address: 0x1ff938, Func Offset: 0x18
	// Line 3627, Address: 0x1ff93c, Func Offset: 0x1c
	// Line 3628, Address: 0x1ff944, Func Offset: 0x24
	// Line 3629, Address: 0x1ff950, Func Offset: 0x30
	// Line 3632, Address: 0x1ff970, Func Offset: 0x50
	// Line 3633, Address: 0x1ff974, Func Offset: 0x54
	// Line 3634, Address: 0x1ff978, Func Offset: 0x58
	// Line 3635, Address: 0x1ff988, Func Offset: 0x68
	// Line 3638, Address: 0x1ff994, Func Offset: 0x74
	// Line 3637, Address: 0x1ff998, Func Offset: 0x78
	// Line 3638, Address: 0x1ff99c, Func Offset: 0x7c
	// Func End, Address: 0x1ff9a8, Func Offset: 0x88
}

// Exit__17zNMEGoalTikiDyingFfPv
// Start address: 0x1ff9b0
int32 zNMEGoalTikiDying::Exit()
{
	zNMETiki* tiki;
	xVec3 vel;
	// Line 3600, Address: 0x1ff9b0, Func Offset: 0
	// Line 3601, Address: 0x1ff9c0, Func Offset: 0x10
	// Line 3604, Address: 0x1ff9cc, Func Offset: 0x1c
	// Line 3606, Address: 0x1ffad8, Func Offset: 0x128
	// Line 3607, Address: 0x1ffb34, Func Offset: 0x184
	// Line 3608, Address: 0x1ffb3c, Func Offset: 0x18c
	// Line 3609, Address: 0x1ffb60, Func Offset: 0x1b0
	// Line 3613, Address: 0x1ffb74, Func Offset: 0x1c4
	// Line 3615, Address: 0x1ffc64, Func Offset: 0x2b4
	// Line 3604, Address: 0x1ffc74, Func Offset: 0x2c4
	// Line 3615, Address: 0x1ffc84, Func Offset: 0x2d4
	// Line 3604, Address: 0x1ffc8c, Func Offset: 0x2dc
	// Line 3615, Address: 0x1ffc98, Func Offset: 0x2e8
	// Line 3604, Address: 0x1ffd00, Func Offset: 0x350
	// Line 3615, Address: 0x1ffd0c, Func Offset: 0x35c
	// Line 3604, Address: 0x1ffd78, Func Offset: 0x3c8
	// Line 3615, Address: 0x1ffd84, Func Offset: 0x3d4
	// Line 3616, Address: 0x1ffda4, Func Offset: 0x3f4
	// Func End, Address: 0x1ffdb8, Func Offset: 0x408
}

// Enter__17zNMEGoalTikiDyingFfPv
// Start address: 0x1ffdc0
int32 zNMEGoalTikiDying::Enter()
{
	zNMETiki* tiki;
	// Line 3581, Address: 0x1ffdc0, Func Offset: 0
	// Line 3582, Address: 0x1ffdd0, Func Offset: 0x10
	// Line 3584, Address: 0x1ffdd8, Func Offset: 0x18
	// Line 3582, Address: 0x1ffddc, Func Offset: 0x1c
	// Line 3588, Address: 0x1ffde0, Func Offset: 0x20
	// Line 3584, Address: 0x1ffde4, Func Offset: 0x24
	// Line 3585, Address: 0x1ffde8, Func Offset: 0x28
	// Line 3588, Address: 0x1ffdec, Func Offset: 0x2c
	// Line 3591, Address: 0x1ffdf8, Func Offset: 0x38
	// Line 3592, Address: 0x1ffe0c, Func Offset: 0x4c
	// Line 3593, Address: 0x1ffe20, Func Offset: 0x60
	// Line 3595, Address: 0x1ffe34, Func Offset: 0x74
	// Line 3591, Address: 0x1ffe50, Func Offset: 0x90
	// Line 3595, Address: 0x1ffe5c, Func Offset: 0x9c
	// Line 3592, Address: 0x1ffe64, Func Offset: 0xa4
	// Line 3595, Address: 0x1ffe70, Func Offset: 0xb0
	// Line 3593, Address: 0x1ffe78, Func Offset: 0xb8
	// Line 3596, Address: 0x1ffe84, Func Offset: 0xc4
	// Func End, Address: 0x1ffe98, Func Offset: 0xd8
}

// Enter__17zNMEGoalTikiCountFfPv
// Start address: 0x1ffea0
int32 zNMEGoalTikiCount::Enter()
{
	zNMETiki* tiki;
	// Line 3565, Address: 0x1ffea0, Func Offset: 0
	// Line 3566, Address: 0x1ffeac, Func Offset: 0xc
	// Line 3568, Address: 0x1ffeb4, Func Offset: 0x14
	// Line 3569, Address: 0x1ffebc, Func Offset: 0x1c
	// Line 3570, Address: 0x1ffec0, Func Offset: 0x20
	// Line 3573, Address: 0x1ffec4, Func Offset: 0x24
	// Line 3572, Address: 0x1ffec8, Func Offset: 0x28
	// Line 3573, Address: 0x1ffecc, Func Offset: 0x2c
	// Func End, Address: 0x1ffed8, Func Offset: 0x38
}

// Exit__16zNMEGoalTikiHideFfPv
// Start address: 0x1ffee0
int32 zNMEGoalTikiHide::Exit()
{
	zNMETiki* tiki;
	// Line 3551, Address: 0x1ffee0, Func Offset: 0
	// Line 3552, Address: 0x1ffee8, Func Offset: 0x8
	// Line 3554, Address: 0x1ffef0, Func Offset: 0x10
	// Line 3552, Address: 0x1ffef4, Func Offset: 0x14
	// Line 3554, Address: 0x1ffef8, Func Offset: 0x18
	// Line 3557, Address: 0x1fff08, Func Offset: 0x28
	// Line 3556, Address: 0x1fff0c, Func Offset: 0x2c
	// Line 3557, Address: 0x1fff10, Func Offset: 0x30
	// Func End, Address: 0x1fff1c, Func Offset: 0x3c
}

// Enter__16zNMEGoalTikiHideFfPv
// Start address: 0x1fff20
int32 zNMEGoalTikiHide::Enter()
{
	zNMETiki* tiki;
	// Line 3542, Address: 0x1fff20, Func Offset: 0
	// Line 3543, Address: 0x1fff28, Func Offset: 0x8
	// Line 3545, Address: 0x1fff30, Func Offset: 0x10
	// Line 3548, Address: 0x1fff34, Func Offset: 0x14
	// Line 3547, Address: 0x1fff38, Func Offset: 0x18
	// Line 3548, Address: 0x1fff3c, Func Offset: 0x1c
	// Func End, Address: 0x1fff44, Func Offset: 0x24
}

// Enter__18zNMEGoalTikiPatrolFfPv
// Start address: 0x1fff50
int32 zNMEGoalTikiPatrol::Enter()
{
	zNMETiki* tiki;
	// Line 3505, Address: 0x1fff50, Func Offset: 0
	// Line 3506, Address: 0x1fff60, Func Offset: 0x10
	// Line 3514, Address: 0x1fff6c, Func Offset: 0x1c
	// Line 3516, Address: 0x1fff7c, Func Offset: 0x2c
	// Line 3514, Address: 0x1fff84, Func Offset: 0x34
	// Line 3515, Address: 0x1fff98, Func Offset: 0x48
	// Line 3516, Address: 0x1fffc4, Func Offset: 0x74
	// Line 3522, Address: 0x1fffcc, Func Offset: 0x7c
	// Line 3525, Address: 0x1fffd8, Func Offset: 0x88
	// Line 3522, Address: 0x1fffdc, Func Offset: 0x8c
	// Line 3526, Address: 0x1ffffc, Func Offset: 0xac
	// Func End, Address: 0x200010, Func Offset: 0xc0
}

// Enter__16zNMEGoalTikiIdleFfPv
// Start address: 0x200010
int32 zNMEGoalTikiIdle::Enter()
{
	zNMETiki* tiki;
	// Line 3485, Address: 0x200010, Func Offset: 0
	// Line 3486, Address: 0x20001c, Func Offset: 0xc
	// Line 3487, Address: 0x200024, Func Offset: 0x14
	// Line 3490, Address: 0x20003c, Func Offset: 0x2c
	// Line 3492, Address: 0x200044, Func Offset: 0x34
	// Line 3493, Address: 0x200050, Func Offset: 0x40
	// Line 3498, Address: 0x200058, Func Offset: 0x48
	// Line 3488, Address: 0x200060, Func Offset: 0x50
	// Line 3489, Address: 0x200068, Func Offset: 0x58
	// Line 3491, Address: 0x200070, Func Offset: 0x60
	// Line 3498, Address: 0x20007c, Func Offset: 0x6c
	// Line 3499, Address: 0x20008c, Func Offset: 0x7c
	// Func End, Address: 0x20009c, Func Offset: 0x8c
}

// loveyTikiRender__FP4xEnt
// Start address: 0x2000a0
void loveyTikiRender(xEnt* ent)
{
	xModelInstance* model;
	float32 factor;
	xShadowCache cache;
	int32 shadowResult;
	int32 alphaTooLow;
	xVec3 shadVec;
	float32 dot;
	xMat4x3 camMat;
	xModelInstance* curr;
	int32 doSimpleShadow;
	int32 doFancyShadow;
	// Line 3377, Address: 0x2000a0, Func Offset: 0
	// Line 3380, Address: 0x2000c0, Func Offset: 0x20
	// Line 3381, Address: 0x2000c4, Func Offset: 0x24
	// Line 3386, Address: 0x2000f4, Func Offset: 0x54
	// Line 3390, Address: 0x2000f8, Func Offset: 0x58
	// Line 3386, Address: 0x2000fc, Func Offset: 0x5c
	// Line 3390, Address: 0x200100, Func Offset: 0x60
	// Line 3391, Address: 0x200114, Func Offset: 0x74
	// Line 3386, Address: 0x200118, Func Offset: 0x78
	// Line 3390, Address: 0x20013c, Func Offset: 0x9c
	// Line 3391, Address: 0x200150, Func Offset: 0xb0
	// Line 3392, Address: 0x200158, Func Offset: 0xb8
	// Line 3396, Address: 0x200160, Func Offset: 0xc0
	// Line 3392, Address: 0x200164, Func Offset: 0xc4
	// Line 3396, Address: 0x200168, Func Offset: 0xc8
	// Line 3399, Address: 0x200174, Func Offset: 0xd4
	// Line 3401, Address: 0x200190, Func Offset: 0xf0
	// Line 3405, Address: 0x200198, Func Offset: 0xf8
	// Line 3401, Address: 0x20019c, Func Offset: 0xfc
	// Line 3405, Address: 0x2001ac, Func Offset: 0x10c
	// Line 3406, Address: 0x2001b4, Func Offset: 0x114
	// Line 3413, Address: 0x200288, Func Offset: 0x1e8
	// Line 3420, Address: 0x20028c, Func Offset: 0x1ec
	// Line 3413, Address: 0x200294, Func Offset: 0x1f4
	// Line 3422, Address: 0x20029c, Func Offset: 0x1fc
	// Line 3413, Address: 0x2002a0, Func Offset: 0x200
	// Line 3416, Address: 0x2002ac, Func Offset: 0x20c
	// Line 3419, Address: 0x2002b0, Func Offset: 0x210
	// Line 3420, Address: 0x2002bc, Func Offset: 0x21c
	// Line 3421, Address: 0x2002cc, Func Offset: 0x22c
	// Line 3422, Address: 0x2002d8, Func Offset: 0x238
	// Line 3426, Address: 0x200300, Func Offset: 0x260
	// Line 3425, Address: 0x200304, Func Offset: 0x264
	// Line 3426, Address: 0x200308, Func Offset: 0x268
	// Line 3425, Address: 0x20030c, Func Offset: 0x26c
	// Line 3426, Address: 0x200310, Func Offset: 0x270
	// Line 3437, Address: 0x20031c, Func Offset: 0x27c
	// Line 3438, Address: 0x200334, Func Offset: 0x294
	// Line 3439, Address: 0x200354, Func Offset: 0x2b4
	// Line 3440, Address: 0x200360, Func Offset: 0x2c0
	// Line 3443, Address: 0x200364, Func Offset: 0x2c4
	// Line 3444, Address: 0x20036c, Func Offset: 0x2cc
	// Line 3445, Address: 0x200384, Func Offset: 0x2e4
	// Line 3444, Address: 0x200390, Func Offset: 0x2f0
	// Line 3445, Address: 0x200398, Func Offset: 0x2f8
	// Line 3447, Address: 0x2003a8, Func Offset: 0x308
	// Line 3448, Address: 0x2003ac, Func Offset: 0x30c
	// Line 3449, Address: 0x2003b4, Func Offset: 0x314
	// Line 3450, Address: 0x2003bc, Func Offset: 0x31c
	// Line 3451, Address: 0x2003c0, Func Offset: 0x320
	// Line 3406, Address: 0x2003dc, Func Offset: 0x33c
	// Line 3451, Address: 0x2003e0, Func Offset: 0x340
	// Line 3406, Address: 0x2003e4, Func Offset: 0x344
	// Line 3451, Address: 0x2003e8, Func Offset: 0x348
	// Line 3406, Address: 0x2003f0, Func Offset: 0x350
	// Line 3451, Address: 0x200404, Func Offset: 0x364
	// Line 3406, Address: 0x200410, Func Offset: 0x370
	// Line 3451, Address: 0x200414, Func Offset: 0x374
	// Line 3406, Address: 0x20041c, Func Offset: 0x37c
	// Line 3451, Address: 0x200424, Func Offset: 0x384
	// Line 3406, Address: 0x200428, Func Offset: 0x388
	// Line 3451, Address: 0x200430, Func Offset: 0x390
	// Line 3406, Address: 0x20043c, Func Offset: 0x39c
	// Line 3451, Address: 0x200444, Func Offset: 0x3a4
	// Line 3406, Address: 0x200450, Func Offset: 0x3b0
	// Line 3451, Address: 0x200454, Func Offset: 0x3b4
	// Line 3406, Address: 0x20045c, Func Offset: 0x3bc
	// Line 3451, Address: 0x200464, Func Offset: 0x3c4
	// Line 3435, Address: 0x2004c0, Func Offset: 0x420
	// Line 3451, Address: 0x2004d4, Func Offset: 0x434
	// Line 3453, Address: 0x2004f4, Func Offset: 0x454
	// Line 3456, Address: 0x2004fc, Func Offset: 0x45c
	// Line 3461, Address: 0x200504, Func Offset: 0x464
	// Line 3463, Address: 0x200538, Func Offset: 0x498
	// Line 3466, Address: 0x200540, Func Offset: 0x4a0
	// Line 3467, Address: 0x20054c, Func Offset: 0x4ac
	// Line 3471, Address: 0x200568, Func Offset: 0x4c8
	// Line 3459, Address: 0x200574, Func Offset: 0x4d4
	// Line 3471, Address: 0x20058c, Func Offset: 0x4ec
	// Func End, Address: 0x2005b0, Func Offset: 0x510
}

// genericTikiRender__FP4xEnt
// Start address: 0x2005b0
void genericTikiRender(xEnt* ent)
{
	float32 dot;
	xMat4x3 camMat;
	// Line 3324, Address: 0x2005b0, Func Offset: 0
	// Line 3329, Address: 0x2005b4, Func Offset: 0x4
	// Line 3324, Address: 0x2005b8, Func Offset: 0x8
	// Line 3329, Address: 0x2005bc, Func Offset: 0xc
	// Line 3324, Address: 0x2005c0, Func Offset: 0x10
	// Line 3329, Address: 0x2005c4, Func Offset: 0x14
	// Line 3331, Address: 0x2005d4, Func Offset: 0x24
	// Line 3336, Address: 0x2005f8, Func Offset: 0x48
	// Line 3337, Address: 0x2005fc, Func Offset: 0x4c
	// Line 3336, Address: 0x200600, Func Offset: 0x50
	// Line 3337, Address: 0x200604, Func Offset: 0x54
	// Line 3348, Address: 0x200610, Func Offset: 0x60
	// Line 3351, Address: 0x200624, Func Offset: 0x74
	// Line 3352, Address: 0x20063c, Func Offset: 0x8c
	// Line 3353, Address: 0x200660, Func Offset: 0xb0
	// Line 3354, Address: 0x200668, Func Offset: 0xb8
	// Line 3355, Address: 0x20067c, Func Offset: 0xcc
	// Line 3354, Address: 0x200680, Func Offset: 0xd0
	// Line 3355, Address: 0x200684, Func Offset: 0xd4
	// Line 3354, Address: 0x20068c, Func Offset: 0xdc
	// Line 3355, Address: 0x20069c, Func Offset: 0xec
	// Line 3356, Address: 0x2006ac, Func Offset: 0xfc
	// Line 3358, Address: 0x2006b4, Func Offset: 0x104
	// Line 3367, Address: 0x2006c8, Func Offset: 0x118
	// Line 3373, Address: 0x2006d4, Func Offset: 0x124
	// Line 3374, Address: 0x2006dc, Func Offset: 0x12c
	// Line 3332, Address: 0x2006e8, Func Offset: 0x138
	// Line 3333, Address: 0x2006f8, Func Offset: 0x148
	// Line 3374, Address: 0x200700, Func Offset: 0x150
	// Line 3346, Address: 0x20075c, Func Offset: 0x1ac
	// Line 3374, Address: 0x200770, Func Offset: 0x1c0
	// Line 3349, Address: 0x200794, Func Offset: 0x1e4
	// Line 3360, Address: 0x2007ac, Func Offset: 0x1fc
	// Line 3374, Address: 0x2007b4, Func Offset: 0x204
	// Line 3368, Address: 0x2007b8, Func Offset: 0x208
	// Line 3374, Address: 0x2007cc, Func Offset: 0x21c
	// Func End, Address: 0x200888, Func Offset: 0x2d8
}

// tikiDeadCB__FP5xGoalPvP11en_trantypefPv
// Start address: 0x200890
int32 tikiDeadCB(xGoal* rawgoal)
{
	// Line 3293, Address: 0x200890, Func Offset: 0
	// Line 3295, Address: 0x200898, Func Offset: 0x8
	// Line 3310, Address: 0x2008a0, Func Offset: 0x10
	// Line 3309, Address: 0x2008a4, Func Offset: 0x14
	// Line 3310, Address: 0x2008a8, Func Offset: 0x18
	// Func End, Address: 0x2008b0, Func Offset: 0x20
}

// tikiDyingCB__FP5xGoalPvP11en_trantypefPv
// Start address: 0x2008b0
int32 tikiDyingCB(xGoal* rawgoal, en_trantype* trantype, float32 dt)
{
	zNMEGoalTikiDying* goal;
	int32 nextgoal;
	// Line 3269, Address: 0x2008b0, Func Offset: 0
	// Line 3270, Address: 0x2008c0, Func Offset: 0x10
	// Line 3269, Address: 0x2008c4, Func Offset: 0x14
	// Line 3271, Address: 0x2008cc, Func Offset: 0x1c
	// Line 3272, Address: 0x2008d4, Func Offset: 0x24
	// Line 3277, Address: 0x2008d8, Func Offset: 0x28
	// Line 3278, Address: 0x200900, Func Offset: 0x50
	// Line 3285, Address: 0x200924, Func Offset: 0x74
	// Line 3280, Address: 0x20092c, Func Offset: 0x7c
	// Line 3279, Address: 0x200930, Func Offset: 0x80
	// Line 3285, Address: 0x200934, Func Offset: 0x84
	// Line 3286, Address: 0x200940, Func Offset: 0x90
	// Func End, Address: 0x200954, Func Offset: 0xa4
}

// thunderCountCB__FP5xGoalPvP11en_trantypefPv
// Start address: 0x200960
int32 thunderCountCB(xGoal* rawgoal, en_trantype* trantype, float32 dt)
{
	zNMEGoalTikiCount* goal;
	zNMETiki* tiki;
	int32 nextgoal;
	float32 tym_total;
	float32 rat;
	float32 cycle;
	float32 bounce;
	// Line 3148, Address: 0x200960, Func Offset: 0
	// Line 3150, Address: 0x200990, Func Offset: 0x30
	// Line 3151, Address: 0x200998, Func Offset: 0x38
	// Line 3150, Address: 0x20099c, Func Offset: 0x3c
	// Line 3156, Address: 0x2009b0, Func Offset: 0x50
	// Line 3157, Address: 0x2009c8, Func Offset: 0x68
	// Line 3159, Address: 0x2009ec, Func Offset: 0x8c
	// Line 3158, Address: 0x2009f4, Func Offset: 0x94
	// Line 3162, Address: 0x2009f8, Func Offset: 0x98
	// Line 3166, Address: 0x200a10, Func Offset: 0xb0
	// Line 3165, Address: 0x200a14, Func Offset: 0xb4
	// Line 3166, Address: 0x200a18, Func Offset: 0xb8
	// Line 3167, Address: 0x200a30, Func Offset: 0xd0
	// Line 3187, Address: 0x200a84, Func Offset: 0x124
	// Line 3249, Address: 0x200a94, Func Offset: 0x134
	// Line 3250, Address: 0x200acc, Func Offset: 0x16c
	// Line 3251, Address: 0x200b1c, Func Offset: 0x1bc
	// Line 3252, Address: 0x200b38, Func Offset: 0x1d8
	// Line 3253, Address: 0x200b40, Func Offset: 0x1e0
	// Line 3254, Address: 0x200b4c, Func Offset: 0x1ec
	// Line 3253, Address: 0x200b50, Func Offset: 0x1f0
	// Line 3254, Address: 0x200b54, Func Offset: 0x1f4
	// Line 3259, Address: 0x200b64, Func Offset: 0x204
	// Line 3253, Address: 0x200b68, Func Offset: 0x208
	// Line 3254, Address: 0x200b74, Func Offset: 0x214
	// Line 3259, Address: 0x200bb0, Func Offset: 0x250
	// Line 3254, Address: 0x200bbc, Func Offset: 0x25c
	// Line 3259, Address: 0x200be8, Func Offset: 0x288
	// Line 3261, Address: 0x2013dc, Func Offset: 0xa7c
	// Line 3262, Address: 0x2013e0, Func Offset: 0xa80
	// Func End, Address: 0x20140c, Func Offset: 0xaac
}

// thunderIdleCB__FP5xGoalPvP11en_trantypefPv
// Start address: 0x201410
int32 thunderIdleCB(xGoal* rawgoal, en_trantype* trantype, float32 dt)
{
	zNMEGoalTikiIdle* goal;
	zNMETiki* tiki;
	float32 factor;
	// Line 2994, Address: 0x201410, Func Offset: 0
	// Line 2997, Address: 0x20142c, Func Offset: 0x1c
	// Line 3001, Address: 0x201434, Func Offset: 0x24
	// Line 2997, Address: 0x201440, Func Offset: 0x30
	// Line 3001, Address: 0x201444, Func Offset: 0x34
	// Line 3002, Address: 0x201450, Func Offset: 0x40
	// Line 3003, Address: 0x20145c, Func Offset: 0x4c
	// Line 3004, Address: 0x201460, Func Offset: 0x50
	// Line 3003, Address: 0x201464, Func Offset: 0x54
	// Line 3002, Address: 0x201474, Func Offset: 0x64
	// Line 3003, Address: 0x201480, Func Offset: 0x70
	// Line 3004, Address: 0x201494, Func Offset: 0x84
	// Line 3011, Address: 0x2014f0, Func Offset: 0xe0
	// Line 3012, Address: 0x2014f8, Func Offset: 0xe8
	// Line 3028, Address: 0x201504, Func Offset: 0xf4
	// Line 3029, Address: 0x201508, Func Offset: 0xf8
	// Line 3028, Address: 0x201510, Func Offset: 0x100
	// Line 3029, Address: 0x201514, Func Offset: 0x104
	// Line 3028, Address: 0x201518, Func Offset: 0x108
	// Line 3029, Address: 0x20153c, Func Offset: 0x12c
	// Line 3028, Address: 0x201540, Func Offset: 0x130
	// Line 3029, Address: 0x201544, Func Offset: 0x134
	// Line 3028, Address: 0x201558, Func Offset: 0x148
	// Line 3029, Address: 0x201560, Func Offset: 0x150
	// Line 3030, Address: 0x201568, Func Offset: 0x158
	// Line 3031, Address: 0x20157c, Func Offset: 0x16c
	// Line 3032, Address: 0x20159c, Func Offset: 0x18c
	// Line 3002, Address: 0x2015a4, Func Offset: 0x194
	// Line 3035, Address: 0x2015bc, Func Offset: 0x1ac
	// Line 3036, Address: 0x2015c0, Func Offset: 0x1b0
	// Line 3037, Address: 0x2015cc, Func Offset: 0x1bc
	// Line 3038, Address: 0x2015d0, Func Offset: 0x1c0
	// Line 3037, Address: 0x2015d4, Func Offset: 0x1c4
	// Line 3038, Address: 0x2015d8, Func Offset: 0x1c8
	// Line 3066, Address: 0x2015e0, Func Offset: 0x1d0
	// Line 3067, Address: 0x2015e4, Func Offset: 0x1d4
	// Func End, Address: 0x2015fc, Func Offset: 0x1ec
}

// quietHideCB__FP5xGoalPvP11en_trantypefPv
// Start address: 0x201600
int32 quietHideCB(xGoal* rawgoal, en_trantype* trantype, float32 dt)
{
	zNMETiki* tiki;
	int32 nextgoal;
	float32 scale;
	// Line 2947, Address: 0x201600, Func Offset: 0
	// Line 2949, Address: 0x20161c, Func Offset: 0x1c
	// Line 2958, Address: 0x201624, Func Offset: 0x24
	// Line 2949, Address: 0x201628, Func Offset: 0x28
	// Line 2958, Address: 0x20162c, Func Offset: 0x2c
	// Line 2962, Address: 0x201630, Func Offset: 0x30
	// Line 2958, Address: 0x201638, Func Offset: 0x38
	// Line 2962, Address: 0x201668, Func Offset: 0x68
	// Line 2958, Address: 0x20166c, Func Offset: 0x6c
	// Line 2962, Address: 0x201670, Func Offset: 0x70
	// Line 2969, Address: 0x201684, Func Offset: 0x84
	// Line 2974, Address: 0x201694, Func Offset: 0x94
	// Line 2976, Address: 0x2016ac, Func Offset: 0xac
	// Line 2974, Address: 0x2016b4, Func Offset: 0xb4
	// Line 2976, Address: 0x2016bc, Func Offset: 0xbc
	// Line 2974, Address: 0x2016c4, Func Offset: 0xc4
	// Line 2976, Address: 0x2016cc, Func Offset: 0xcc
	// Line 2982, Address: 0x2016d8, Func Offset: 0xd8
	// Line 2985, Address: 0x201700, Func Offset: 0x100
	// Line 2963, Address: 0x201708, Func Offset: 0x108
	// Line 2964, Address: 0x20170c, Func Offset: 0x10c
	// Line 2985, Address: 0x201710, Func Offset: 0x110
	// Line 2963, Address: 0x201714, Func Offset: 0x114
	// Line 2965, Address: 0x201718, Func Offset: 0x118
	// Line 2985, Address: 0x201720, Func Offset: 0x120
	// Line 2966, Address: 0x20172c, Func Offset: 0x12c
	// Line 2985, Address: 0x201730, Func Offset: 0x130
	// Line 2966, Address: 0x201744, Func Offset: 0x144
	// Line 2967, Address: 0x201748, Func Offset: 0x148
	// Line 2985, Address: 0x201750, Func Offset: 0x150
	// Line 2971, Address: 0x201760, Func Offset: 0x160
	// Line 2985, Address: 0x201764, Func Offset: 0x164
	// Line 2972, Address: 0x201780, Func Offset: 0x180
	// Line 2985, Address: 0x201788, Func Offset: 0x188
	// Line 2972, Address: 0x20178c, Func Offset: 0x18c
	// Line 2985, Address: 0x2017a8, Func Offset: 0x1a8
	// Line 2978, Address: 0x2017c0, Func Offset: 0x1c0
	// Line 2985, Address: 0x2017c4, Func Offset: 0x1c4
	// Line 2979, Address: 0x201840, Func Offset: 0x240
	// Line 2985, Address: 0x201844, Func Offset: 0x244
	// Line 2980, Address: 0x201860, Func Offset: 0x260
	// Line 2986, Address: 0x20186c, Func Offset: 0x26c
	// Func End, Address: 0x201888, Func Offset: 0x288
}

// quietIdleCB__FP5xGoalPvP11en_trantypefPv
// Start address: 0x201890
int32 quietIdleCB(xGoal* rawgoal, en_trantype* trantype, float32 dt)
{
	zNMETiki* tiki;
	int32 nextgoal;
	float32 scale;
	// Line 2890, Address: 0x201890, Func Offset: 0
	// Line 2892, Address: 0x2018ac, Func Offset: 0x1c
	// Line 2901, Address: 0x2018b4, Func Offset: 0x24
	// Line 2892, Address: 0x2018b8, Func Offset: 0x28
	// Line 2901, Address: 0x2018bc, Func Offset: 0x2c
	// Line 2906, Address: 0x2018c0, Func Offset: 0x30
	// Line 2901, Address: 0x2018c8, Func Offset: 0x38
	// Line 2903, Address: 0x2018f8, Func Offset: 0x68
	// Line 2901, Address: 0x2018fc, Func Offset: 0x6c
	// Line 2903, Address: 0x201900, Func Offset: 0x70
	// Line 2906, Address: 0x201908, Func Offset: 0x78
	// Line 2912, Address: 0x201914, Func Offset: 0x84
	// Line 2917, Address: 0x20192c, Func Offset: 0x9c
	// Line 2919, Address: 0x20193c, Func Offset: 0xac
	// Line 2921, Address: 0x201950, Func Offset: 0xc0
	// Line 2919, Address: 0x201954, Func Offset: 0xc4
	// Line 2921, Address: 0x20195c, Func Offset: 0xcc
	// Line 2919, Address: 0x201960, Func Offset: 0xd0
	// Line 2921, Address: 0x201964, Func Offset: 0xd4
	// Line 2919, Address: 0x20196c, Func Offset: 0xdc
	// Line 2921, Address: 0x201970, Func Offset: 0xe0
	// Line 2927, Address: 0x201978, Func Offset: 0xe8
	// Line 2929, Address: 0x2019e4, Func Offset: 0x154
	// Line 2934, Address: 0x2019fc, Func Offset: 0x16c
	// Line 2937, Address: 0x201a24, Func Offset: 0x194
	// Line 2939, Address: 0x201a28, Func Offset: 0x198
	// Line 2907, Address: 0x201a30, Func Offset: 0x1a0
	// Line 2908, Address: 0x201a34, Func Offset: 0x1a4
	// Line 2939, Address: 0x201a38, Func Offset: 0x1a8
	// Line 2907, Address: 0x201a3c, Func Offset: 0x1ac
	// Line 2909, Address: 0x201a40, Func Offset: 0x1b0
	// Line 2939, Address: 0x201a48, Func Offset: 0x1b8
	// Line 2910, Address: 0x201a54, Func Offset: 0x1c4
	// Line 2939, Address: 0x201a58, Func Offset: 0x1c8
	// Line 2910, Address: 0x201a6c, Func Offset: 0x1dc
	// Line 2911, Address: 0x201a70, Func Offset: 0x1e0
	// Line 2939, Address: 0x201a78, Func Offset: 0x1e8
	// Line 2914, Address: 0x201a7c, Func Offset: 0x1ec
	// Line 2923, Address: 0x201a8c, Func Offset: 0x1fc
	// Line 2939, Address: 0x201a90, Func Offset: 0x200
	// Line 2923, Address: 0x201a94, Func Offset: 0x204
	// Line 2939, Address: 0x201aac, Func Offset: 0x21c
	// Line 2924, Address: 0x201abc, Func Offset: 0x22c
	// Line 2939, Address: 0x201ac0, Func Offset: 0x230
	// Line 2930, Address: 0x201ae4, Func Offset: 0x254
	// Line 2939, Address: 0x201aec, Func Offset: 0x25c
	// Line 2932, Address: 0x201b1c, Func Offset: 0x28c
	// Line 2939, Address: 0x201b20, Func Offset: 0x290
	// Line 2932, Address: 0x201b34, Func Offset: 0x2a4
	// Line 2933, Address: 0x201b38, Func Offset: 0x2a8
	// Line 2940, Address: 0x201b40, Func Offset: 0x2b0
	// Func End, Address: 0x201b5c, Func Offset: 0x2cc
}

// loveyPatrolCB__FP5xGoalPvP11en_trantypefPv
// Start address: 0x201b60
int32 loveyPatrolCB(xGoal* rawgoal, en_trantype* trantype, float32 dt)
{
	zNMEGoalTikiPatrol* goal;
	zNMETiki* tiki;
	int32 nextgoal;
	// Line 2850, Address: 0x201b60, Func Offset: 0
	// Line 2851, Address: 0x201b78, Func Offset: 0x18
	// Line 2850, Address: 0x201b7c, Func Offset: 0x1c
	// Line 2852, Address: 0x201b84, Func Offset: 0x24
	// Line 2867, Address: 0x201b8c, Func Offset: 0x2c
	// Line 2852, Address: 0x201b90, Func Offset: 0x30
	// Line 2867, Address: 0x201b94, Func Offset: 0x34
	// Line 2871, Address: 0x201bd4, Func Offset: 0x74
	// Line 2867, Address: 0x201bdc, Func Offset: 0x7c
	// Line 2871, Address: 0x201be0, Func Offset: 0x80
	// Line 2880, Address: 0x201c1c, Func Offset: 0xbc
	// Line 2882, Address: 0x201d10, Func Offset: 0x1b0
	// Line 2875, Address: 0x201d1c, Func Offset: 0x1bc
	// Line 2882, Address: 0x201d20, Func Offset: 0x1c0
	// Line 2875, Address: 0x201d24, Func Offset: 0x1c4
	// Line 2876, Address: 0x201d28, Func Offset: 0x1c8
	// Line 2882, Address: 0x201d2c, Func Offset: 0x1cc
	// Line 2880, Address: 0x201d40, Func Offset: 0x1e0
	// Line 2883, Address: 0x201d4c, Func Offset: 0x1ec
	// Func End, Address: 0x201d6c, Func Offset: 0x20c
}

// loveyIdleCB__FP5xGoalPvP11en_trantypefPv
// Start address: 0x201d70
int32 loveyIdleCB(xGoal* rawgoal, en_trantype* trantype, float32 dt)
{
	zNMEGoalTikiIdle* goal;
	zNMETiki* tiki;
	int32 nextgoal;
	zNMENavNet* navnet;
	// Line 2807, Address: 0x201d70, Func Offset: 0
	// Line 2808, Address: 0x201d88, Func Offset: 0x18
	// Line 2807, Address: 0x201d8c, Func Offset: 0x1c
	// Line 2809, Address: 0x201d98, Func Offset: 0x28
	// Line 2812, Address: 0x201da0, Func Offset: 0x30
	// Line 2809, Address: 0x201da4, Func Offset: 0x34
	// Line 2820, Address: 0x201da8, Func Offset: 0x38
	// Line 2821, Address: 0x201db8, Func Offset: 0x48
	// Line 2822, Address: 0x201de0, Func Offset: 0x70
	// Line 2840, Address: 0x201e14, Func Offset: 0xa4
	// Line 2842, Address: 0x201f08, Func Offset: 0x198
	// Line 2831, Address: 0x201f24, Func Offset: 0x1b4
	// Line 2842, Address: 0x201f28, Func Offset: 0x1b8
	// Line 2832, Address: 0x201f2c, Func Offset: 0x1bc
	// Line 2842, Address: 0x201f34, Func Offset: 0x1c4
	// Line 2840, Address: 0x201f44, Func Offset: 0x1d4
	// Line 2843, Address: 0x201f50, Func Offset: 0x1e0
	// Func End, Address: 0x201f74, Func Offset: 0x204
}

// HoverBubCone__8zNMETikiFP5xVec3P5xVec3ifffff
// Start address: 0x201f80
void zNMETiki::HoverBubCone(xVec3* pos_emitBase, xVec3* dir_emit, int32 num_bub, float32 rad_cone, float32 rad_emitJitter, float32 spd_emitBase, float32 spd_emitRand, float32 scl_bub)
{
	xVec3* buffer;
	xVec3 dir_axis;
	xVec3 dir_perp;
	xVec3 dir_orth;
	float32 darc;
	xVec3* buf_vel;
	xVec3 pos_base;
	int32 i;
	float32 ang_curr;
	float32 rad_jitr;
	float32 rad_curr;
	xVec3 dir_dest;
	float32 spd_emit;
	// Line 2679, Address: 0x201f80, Func Offset: 0
	// Line 2680, Address: 0x201fec, Func Offset: 0x6c
	// Line 2684, Address: 0x201ff4, Func Offset: 0x74
	// Line 2685, Address: 0x202004, Func Offset: 0x84
	// Line 2692, Address: 0x202010, Func Offset: 0x90
	// Line 2689, Address: 0x202020, Func Offset: 0xa0
	// Line 2692, Address: 0x20202c, Func Offset: 0xac
	// Line 2689, Address: 0x20203c, Func Offset: 0xbc
	// Line 2692, Address: 0x202048, Func Offset: 0xc8
	// Line 2698, Address: 0x202068, Func Offset: 0xe8
	// Line 2692, Address: 0x20206c, Func Offset: 0xec
	// Line 2698, Address: 0x202070, Func Offset: 0xf0
	// Line 2692, Address: 0x202074, Func Offset: 0xf4
	// Line 2703, Address: 0x202078, Func Offset: 0xf8
	// Line 2692, Address: 0x20207c, Func Offset: 0xfc
	// Line 2703, Address: 0x202080, Func Offset: 0x100
	// Line 2692, Address: 0x202084, Func Offset: 0x104
	// Line 2740, Address: 0x202088, Func Offset: 0x108
	// Line 2692, Address: 0x20208c, Func Offset: 0x10c
	// Line 2709, Address: 0x202090, Func Offset: 0x110
	// Line 2698, Address: 0x202094, Func Offset: 0x114
	// Line 2692, Address: 0x202098, Func Offset: 0x118
	// Line 2703, Address: 0x20209c, Func Offset: 0x11c
	// Line 2692, Address: 0x2020a0, Func Offset: 0x120
	// Line 2703, Address: 0x2020a4, Func Offset: 0x124
	// Line 2692, Address: 0x2020a8, Func Offset: 0x128
	// Line 2698, Address: 0x2020b8, Func Offset: 0x138
	// Line 2692, Address: 0x2020c0, Func Offset: 0x140
	// Line 2703, Address: 0x2020c4, Func Offset: 0x144
	// Line 2698, Address: 0x2020c8, Func Offset: 0x148
	// Line 2703, Address: 0x2020cc, Func Offset: 0x14c
	// Line 2698, Address: 0x2020d0, Func Offset: 0x150
	// Line 2692, Address: 0x2020d4, Func Offset: 0x154
	// Line 2706, Address: 0x2020dc, Func Offset: 0x15c
	// Line 2740, Address: 0x2020f0, Func Offset: 0x170
	// Line 2736, Address: 0x2020f8, Func Offset: 0x178
	// Line 2740, Address: 0x2020fc, Func Offset: 0x17c
	// Line 2736, Address: 0x202100, Func Offset: 0x180
	// Line 2740, Address: 0x202104, Func Offset: 0x184
	// Line 2714, Address: 0x202130, Func Offset: 0x1b0
	// Line 2740, Address: 0x202138, Func Offset: 0x1b8
	// Line 2714, Address: 0x202140, Func Offset: 0x1c0
	// Line 2740, Address: 0x202170, Func Offset: 0x1f0
	// Line 2714, Address: 0x202174, Func Offset: 0x1f4
	// Line 2740, Address: 0x202190, Func Offset: 0x210
	// Line 2716, Address: 0x202198, Func Offset: 0x218
	// Line 2740, Address: 0x20219c, Func Offset: 0x21c
	// Line 2723, Address: 0x2021ac, Func Offset: 0x22c
	// Line 2740, Address: 0x2021b4, Func Offset: 0x234
	// Line 2723, Address: 0x2021bc, Func Offset: 0x23c
	// Line 2740, Address: 0x2021e4, Func Offset: 0x264
	// Line 2723, Address: 0x2021fc, Func Offset: 0x27c
	// Line 2740, Address: 0x202200, Func Offset: 0x280
	// Line 2726, Address: 0x202228, Func Offset: 0x2a8
	// Line 2740, Address: 0x202230, Func Offset: 0x2b0
	// Line 2725, Address: 0x202244, Func Offset: 0x2c4
	// Line 2740, Address: 0x20224c, Func Offset: 0x2cc
	// Line 2725, Address: 0x202260, Func Offset: 0x2e0
	// Line 2726, Address: 0x202264, Func Offset: 0x2e4
	// Line 2740, Address: 0x202268, Func Offset: 0x2e8
	// Line 2726, Address: 0x202270, Func Offset: 0x2f0
	// Line 2740, Address: 0x202274, Func Offset: 0x2f4
	// Line 2725, Address: 0x202298, Func Offset: 0x318
	// Line 2740, Address: 0x20229c, Func Offset: 0x31c
	// Line 2725, Address: 0x2022b8, Func Offset: 0x338
	// Line 2740, Address: 0x2022bc, Func Offset: 0x33c
	// Line 2725, Address: 0x2022cc, Func Offset: 0x34c
	// Line 2740, Address: 0x2022d0, Func Offset: 0x350
	// Line 2726, Address: 0x2022e0, Func Offset: 0x360
	// Line 2740, Address: 0x2022e4, Func Offset: 0x364
	// Line 2726, Address: 0x2022ec, Func Offset: 0x36c
	// Line 2740, Address: 0x2022f0, Func Offset: 0x370
	// Line 2726, Address: 0x2022f8, Func Offset: 0x378
	// Line 2740, Address: 0x2022fc, Func Offset: 0x37c
	// Line 2731, Address: 0x202304, Func Offset: 0x384
	// Line 2740, Address: 0x20230c, Func Offset: 0x38c
	// Line 2731, Address: 0x202314, Func Offset: 0x394
	// Line 2740, Address: 0x20233c, Func Offset: 0x3bc
	// Line 2731, Address: 0x202354, Func Offset: 0x3d4
	// Line 2740, Address: 0x202358, Func Offset: 0x3d8
	// Line 2734, Address: 0x202394, Func Offset: 0x414
	// Line 2740, Address: 0x202398, Func Offset: 0x418
	// Line 2734, Address: 0x2023ac, Func Offset: 0x42c
	// Line 2740, Address: 0x2023b0, Func Offset: 0x430
	// Line 2735, Address: 0x2023b4, Func Offset: 0x434
	// Line 2740, Address: 0x2023b8, Func Offset: 0x438
	// Line 2734, Address: 0x2023c0, Func Offset: 0x440
	// Line 2740, Address: 0x2023c4, Func Offset: 0x444
	// Line 2735, Address: 0x2023d4, Func Offset: 0x454
	// Line 2740, Address: 0x2023d8, Func Offset: 0x458
	// Line 2735, Address: 0x2023e0, Func Offset: 0x460
	// Line 2740, Address: 0x2023e4, Func Offset: 0x464
	// Line 2734, Address: 0x202414, Func Offset: 0x494
	// Line 2740, Address: 0x202418, Func Offset: 0x498
	// Line 2734, Address: 0x20241c, Func Offset: 0x49c
	// Line 2740, Address: 0x202420, Func Offset: 0x4a0
	// Line 2734, Address: 0x20242c, Func Offset: 0x4ac
	// Line 2740, Address: 0x202430, Func Offset: 0x4b0
	// Line 2735, Address: 0x202438, Func Offset: 0x4b8
	// Line 2740, Address: 0x202440, Func Offset: 0x4c0
	// Line 2736, Address: 0x202448, Func Offset: 0x4c8
	// Line 2735, Address: 0x202450, Func Offset: 0x4d0
	// Line 2740, Address: 0x202454, Func Offset: 0x4d4
	// Line 2736, Address: 0x202458, Func Offset: 0x4d8
	// Line 2740, Address: 0x20245c, Func Offset: 0x4dc
	// Line 2736, Address: 0x202460, Func Offset: 0x4e0
	// Line 2740, Address: 0x202468, Func Offset: 0x4e8
	// Line 2736, Address: 0x202470, Func Offset: 0x4f0
	// Line 2740, Address: 0x202474, Func Offset: 0x4f4
	// Line 2737, Address: 0x202480, Func Offset: 0x500
	// Line 2740, Address: 0x202488, Func Offset: 0x508
	// Line 2737, Address: 0x202490, Func Offset: 0x510
	// Line 2740, Address: 0x2024b8, Func Offset: 0x538
	// Line 2737, Address: 0x2024c8, Func Offset: 0x548
	// Line 2740, Address: 0x2024cc, Func Offset: 0x54c
	// Line 2737, Address: 0x2024d4, Func Offset: 0x554
	// Line 2740, Address: 0x2024d8, Func Offset: 0x558
	// Line 2737, Address: 0x2024e0, Func Offset: 0x560
	// Line 2740, Address: 0x2024e4, Func Offset: 0x564
	// Line 2738, Address: 0x2024f4, Func Offset: 0x574
	// Line 2740, Address: 0x2024fc, Func Offset: 0x57c
	// Line 2738, Address: 0x202504, Func Offset: 0x584
	// Line 2740, Address: 0x202508, Func Offset: 0x588
	// Line 2744, Address: 0x202540, Func Offset: 0x5c0
	// Line 2747, Address: 0x202564, Func Offset: 0x5e4
	// Line 2750, Address: 0x20256c, Func Offset: 0x5ec
	// Func End, Address: 0x2025c0, Func Offset: 0x640
}

// HoverBubStream__8zNMETikiFf
// Start address: 0x2025c0
void zNMETiki::HoverBubStream()
{
	xMat4x3* mat_bone;
	xVec3 pos_emit;
	xMat4x3* mat_root;
	xVec3 dir_temp;
	float32 len;
	xVec3 dir_emit;
	xMat4x3* mat_root;
	// Line 2605, Address: 0x2025c0, Func Offset: 0
	// Line 2609, Address: 0x2025c4, Func Offset: 0x4
	// Line 2605, Address: 0x2025cc, Func Offset: 0xc
	// Line 2606, Address: 0x2025d0, Func Offset: 0x10
	// Line 2609, Address: 0x2025dc, Func Offset: 0x1c
	// Line 2610, Address: 0x2025e4, Func Offset: 0x24
	// Line 2609, Address: 0x2025e8, Func Offset: 0x28
	// Line 2606, Address: 0x2025f0, Func Offset: 0x30
	// Line 2609, Address: 0x2025f4, Func Offset: 0x34
	// Line 2610, Address: 0x202600, Func Offset: 0x40
	// Line 2611, Address: 0x202660, Func Offset: 0xa0
	// Line 2619, Address: 0x202664, Func Offset: 0xa4
	// Line 2611, Address: 0x202668, Func Offset: 0xa8
	// Line 2619, Address: 0x20266c, Func Offset: 0xac
	// Line 2611, Address: 0x202678, Func Offset: 0xb8
	// Line 2619, Address: 0x202684, Func Offset: 0xc4
	// Line 2611, Address: 0x202698, Func Offset: 0xd8
	// Line 2619, Address: 0x2026a0, Func Offset: 0xe0
	// Line 2622, Address: 0x2026a4, Func Offset: 0xe4
	// Line 2619, Address: 0x2026a8, Func Offset: 0xe8
	// Line 2622, Address: 0x2026ac, Func Offset: 0xec
	// Line 2621, Address: 0x2026c0, Func Offset: 0x100
	// Line 2611, Address: 0x2026c4, Func Offset: 0x104
	// Line 2622, Address: 0x2026c8, Func Offset: 0x108
	// Line 2611, Address: 0x2026cc, Func Offset: 0x10c
	// Line 2622, Address: 0x2026d0, Func Offset: 0x110
	// Line 2611, Address: 0x2026d4, Func Offset: 0x114
	// Line 2622, Address: 0x2026dc, Func Offset: 0x11c
	// Line 2623, Address: 0x2026e4, Func Offset: 0x124
	// Line 2625, Address: 0x202718, Func Offset: 0x158
	// Line 2627, Address: 0x20273c, Func Offset: 0x17c
	// Line 2628, Address: 0x202750, Func Offset: 0x190
	// Line 2627, Address: 0x202754, Func Offset: 0x194
	// Line 2628, Address: 0x202764, Func Offset: 0x1a4
	// Line 2627, Address: 0x202768, Func Offset: 0x1a8
	// Line 2628, Address: 0x20276c, Func Offset: 0x1ac
	// Line 2636, Address: 0x2027c0, Func Offset: 0x200
	// Line 2674, Address: 0x202800, Func Offset: 0x240
	// Func End, Address: 0x20280c, Func Offset: 0x24c
}

// HoverBubbles__8zNMETikiFf
// Start address: 0x202810
void zNMETiki::HoverBubbles(float32 dt)
{
	// Line 2567, Address: 0x202810, Func Offset: 0
	// Line 2572, Address: 0x202814, Func Offset: 0x4
	// Line 2567, Address: 0x202818, Func Offset: 0x8
	// Line 2572, Address: 0x202828, Func Offset: 0x18
	// Line 2576, Address: 0x202834, Func Offset: 0x24
	// Line 2580, Address: 0x202848, Func Offset: 0x38
	// Line 2581, Address: 0x20284c, Func Offset: 0x3c
	// Line 2580, Address: 0x202850, Func Offset: 0x40
	// Line 2581, Address: 0x202854, Func Offset: 0x44
	// Line 2580, Address: 0x202858, Func Offset: 0x48
	// Line 2581, Address: 0x202890, Func Offset: 0x80
	// Line 2580, Address: 0x202898, Func Offset: 0x88
	// Line 2581, Address: 0x20289c, Func Offset: 0x8c
	// Line 2580, Address: 0x2028a4, Func Offset: 0x94
	// Line 2581, Address: 0x2028a8, Func Offset: 0x98
	// Line 2585, Address: 0x2028b4, Func Offset: 0xa4
	// Line 2586, Address: 0x2028dc, Func Offset: 0xcc
	// Line 2587, Address: 0x202900, Func Offset: 0xf0
	// Line 2590, Address: 0x202908, Func Offset: 0xf8
	// Line 2593, Address: 0x202918, Func Offset: 0x108
	// Line 2594, Address: 0x202940, Func Offset: 0x130
	// Line 2598, Address: 0x202964, Func Offset: 0x154
	// Line 2599, Address: 0x2029e0, Func Offset: 0x1d0
	// Line 2602, Address: 0x2029e4, Func Offset: 0x1d4
	// Func End, Address: 0x2029f8, Func Offset: 0x1e8
}

// RemoveFromFamily__8zNMETikiFv
// Start address: 0x202a00
void zNMETiki::RemoveFromFamily()
{
	uint8 i;
	// Line 2465, Address: 0x202a00, Func Offset: 0
	// Line 2466, Address: 0x202a0c, Func Offset: 0xc
	// Line 2467, Address: 0x202a14, Func Offset: 0x14
	// Line 2468, Address: 0x202a80, Func Offset: 0x80
	// Line 2470, Address: 0x202a84, Func Offset: 0x84
	// Line 2471, Address: 0x202a9c, Func Offset: 0x9c
	// Line 2472, Address: 0x202aa0, Func Offset: 0xa0
	// Line 2475, Address: 0x202aa8, Func Offset: 0xa8
	// Line 2476, Address: 0x202ab4, Func Offset: 0xb4
	// Line 2477, Address: 0x202abc, Func Offset: 0xbc
	// Line 2478, Address: 0x202b38, Func Offset: 0x138
	// Line 2480, Address: 0x202b3c, Func Offset: 0x13c
	// Line 2481, Address: 0x202b54, Func Offset: 0x154
	// Line 2483, Address: 0x202b58, Func Offset: 0x158
	// Line 2484, Address: 0x202b5c, Func Offset: 0x15c
	// Line 2485, Address: 0x202b64, Func Offset: 0x164
	// Line 2477, Address: 0x202b88, Func Offset: 0x188
	// Line 2485, Address: 0x202b98, Func Offset: 0x198
	// Func End, Address: 0x202ba0, Func Offset: 0x1a0
}

// FindParents__8zNMETikiFP6zScene
// Start address: 0x202ba0
void zNMETiki::FindParents(zScene* zsc)
{
	xRay3 ray;
	xCollis c;
	xSurface* surf;
	zSurfaceProps* prop;
	float32 oldLower;
	float32 oldUpper;
	int32 i;
	zNMECommon* npc;
	en_npctyp type;
	zNMETiki* tiki;
	uint8 couldBe;
	uint8 i;
	// Line 2291, Address: 0x202ba0, Func Offset: 0
	// Line 2295, Address: 0x202ba4, Func Offset: 0x4
	// Line 2291, Address: 0x202ba8, Func Offset: 0x8
	// Line 2295, Address: 0x202bac, Func Offset: 0xc
	// Line 2291, Address: 0x202bb0, Func Offset: 0x10
	// Line 2295, Address: 0x202bb4, Func Offset: 0x14
	// Line 2291, Address: 0x202bb8, Func Offset: 0x18
	// Line 2295, Address: 0x202bbc, Func Offset: 0x1c
	// Line 2291, Address: 0x202bc0, Func Offset: 0x20
	// Line 2295, Address: 0x202bc4, Func Offset: 0x24
	// Line 2291, Address: 0x202bc8, Func Offset: 0x28
	// Line 2295, Address: 0x202bd4, Func Offset: 0x34
	// Line 2291, Address: 0x202bd8, Func Offset: 0x38
	// Line 2295, Address: 0x202bdc, Func Offset: 0x3c
	// Line 2291, Address: 0x202be0, Func Offset: 0x40
	// Line 2295, Address: 0x202bec, Func Offset: 0x4c
	// Line 2291, Address: 0x202bf0, Func Offset: 0x50
	// Line 2295, Address: 0x202bf4, Func Offset: 0x54
	// Line 2291, Address: 0x202bf8, Func Offset: 0x58
	// Line 2296, Address: 0x202bfc, Func Offset: 0x5c
	// Line 2295, Address: 0x202c00, Func Offset: 0x60
	// Line 2298, Address: 0x202d4c, Func Offset: 0x1ac
	// Line 2295, Address: 0x202d50, Func Offset: 0x1b0
	// Line 2299, Address: 0x202d64, Func Offset: 0x1c4
	// Line 2295, Address: 0x202d68, Func Offset: 0x1c8
	// Line 2304, Address: 0x202d6c, Func Offset: 0x1cc
	// Line 2295, Address: 0x202d70, Func Offset: 0x1d0
	// Line 2301, Address: 0x202d74, Func Offset: 0x1d4
	// Line 2304, Address: 0x202d78, Func Offset: 0x1d8
	// Line 2295, Address: 0x202d7c, Func Offset: 0x1dc
	// Line 2303, Address: 0x202d80, Func Offset: 0x1e0
	// Line 2295, Address: 0x202d84, Func Offset: 0x1e4
	// Line 2296, Address: 0x202d88, Func Offset: 0x1e8
	// Line 2297, Address: 0x202da8, Func Offset: 0x208
	// Line 2298, Address: 0x202db0, Func Offset: 0x210
	// Line 2299, Address: 0x202db4, Func Offset: 0x214
	// Line 2301, Address: 0x202db8, Func Offset: 0x218
	// Line 2298, Address: 0x202dbc, Func Offset: 0x21c
	// Line 2300, Address: 0x202dc4, Func Offset: 0x224
	// Line 2303, Address: 0x202dc8, Func Offset: 0x228
	// Line 2304, Address: 0x202dd4, Func Offset: 0x234
	// Line 2305, Address: 0x202de0, Func Offset: 0x240
	// Line 2306, Address: 0x202df4, Func Offset: 0x254
	// Line 2310, Address: 0x202dfc, Func Offset: 0x25c
	// Line 2315, Address: 0x202e00, Func Offset: 0x260
	// Line 2311, Address: 0x202e04, Func Offset: 0x264
	// Line 2314, Address: 0x202e0c, Func Offset: 0x26c
	// Line 2315, Address: 0x202e10, Func Offset: 0x270
	// Line 2311, Address: 0x202e14, Func Offset: 0x274
	// Line 2315, Address: 0x202e18, Func Offset: 0x278
	// Line 2311, Address: 0x202e1c, Func Offset: 0x27c
	// Line 2315, Address: 0x202e40, Func Offset: 0x2a0
	// Line 2319, Address: 0x202e50, Func Offset: 0x2b0
	// Line 2322, Address: 0x202e64, Func Offset: 0x2c4
	// Line 2323, Address: 0x202e6c, Func Offset: 0x2cc
	// Line 2325, Address: 0x202e80, Func Offset: 0x2e0
	// Line 2326, Address: 0x202e84, Func Offset: 0x2e4
	// Line 2329, Address: 0x202e98, Func Offset: 0x2f8
	// Line 2331, Address: 0x202ea4, Func Offset: 0x304
	// Line 2337, Address: 0x202eb0, Func Offset: 0x310
	// Line 2344, Address: 0x202eb4, Func Offset: 0x314
	// Line 2337, Address: 0x202ec0, Func Offset: 0x320
	// Line 2339, Address: 0x202ee4, Func Offset: 0x344
	// Line 2341, Address: 0x202f0c, Func Offset: 0x36c
	// Line 2343, Address: 0x202f34, Func Offset: 0x394
	// Line 2344, Address: 0x202f58, Func Offset: 0x3b8
	// Line 2345, Address: 0x202f68, Func Offset: 0x3c8
	// Line 2351, Address: 0x202f90, Func Offset: 0x3f0
	// Line 2352, Address: 0x202f98, Func Offset: 0x3f8
	// Line 2358, Address: 0x202fa4, Func Offset: 0x404
	// Line 2367, Address: 0x202fb4, Func Offset: 0x414
	// Line 2406, Address: 0x202fc4, Func Offset: 0x424
	// Line 2400, Address: 0x202fe0, Func Offset: 0x440
	// Line 2406, Address: 0x202fe8, Func Offset: 0x448
	// Line 2390, Address: 0x202fec, Func Offset: 0x44c
	// Line 2406, Address: 0x202ff0, Func Offset: 0x450
	// Line 2400, Address: 0x202ff4, Func Offset: 0x454
	// Line 2413, Address: 0x202ff8, Func Offset: 0x458
	// Line 2368, Address: 0x202ffc, Func Offset: 0x45c
	// Line 2370, Address: 0x203008, Func Offset: 0x468
	// Line 2372, Address: 0x203010, Func Offset: 0x470
	// Line 2373, Address: 0x203014, Func Offset: 0x474
	// Line 2375, Address: 0x203028, Func Offset: 0x488
	// Line 2376, Address: 0x20302c, Func Offset: 0x48c
	// Line 2378, Address: 0x203038, Func Offset: 0x498
	// Line 2380, Address: 0x203044, Func Offset: 0x4a4
	// Line 2383, Address: 0x203054, Func Offset: 0x4b4
	// Line 2393, Address: 0x2030f4, Func Offset: 0x554
	// Line 2394, Address: 0x203104, Func Offset: 0x564
	// Line 2396, Address: 0x20310c, Func Offset: 0x56c
	// Line 2397, Address: 0x203114, Func Offset: 0x574
	// Line 2400, Address: 0x203118, Func Offset: 0x578
	// Line 2406, Address: 0x20318c, Func Offset: 0x5ec
	// Line 2409, Address: 0x2031c4, Func Offset: 0x624
	// Line 2416, Address: 0x203200, Func Offset: 0x660
	// Line 2409, Address: 0x203204, Func Offset: 0x664
	// Line 2416, Address: 0x203208, Func Offset: 0x668
	// Line 2422, Address: 0x20323c, Func Offset: 0x69c
	// Line 2425, Address: 0x203240, Func Offset: 0x6a0
	// Line 2428, Address: 0x203268, Func Offset: 0x6c8
	// Line 2316, Address: 0x2032a4, Func Offset: 0x704
	// Line 2428, Address: 0x2032b0, Func Offset: 0x710
	// Line 2320, Address: 0x2032b4, Func Offset: 0x714
	// Line 2428, Address: 0x2032c0, Func Offset: 0x720
	// Line 2354, Address: 0x2032d4, Func Offset: 0x734
	// Line 2428, Address: 0x2032e0, Func Offset: 0x740
	// Line 2361, Address: 0x2032e4, Func Offset: 0x744
	// Line 2428, Address: 0x2032ec, Func Offset: 0x74c
	// Line 2362, Address: 0x2032f0, Func Offset: 0x750
	// Line 2361, Address: 0x2032f4, Func Offset: 0x754
	// Line 2428, Address: 0x2032f8, Func Offset: 0x758
	// Line 2362, Address: 0x203304, Func Offset: 0x764
	// Line 2428, Address: 0x20330c, Func Offset: 0x76c
	// Line 2363, Address: 0x203310, Func Offset: 0x770
	// Line 2428, Address: 0x203328, Func Offset: 0x788
	// Line 2409, Address: 0x20334c, Func Offset: 0x7ac
	// Line 2428, Address: 0x203350, Func Offset: 0x7b0
	// Line 2412, Address: 0x203358, Func Offset: 0x7b8
	// Line 2428, Address: 0x20335c, Func Offset: 0x7bc
	// Line 2414, Address: 0x203378, Func Offset: 0x7d8
	// Line 2428, Address: 0x20337c, Func Offset: 0x7dc
	// Line 2422, Address: 0x203384, Func Offset: 0x7e4
	// Line 2428, Address: 0x203388, Func Offset: 0x7e8
	// Line 2430, Address: 0x2033a0, Func Offset: 0x800
	// Line 2431, Address: 0x2033b0, Func Offset: 0x810
	// Line 2432, Address: 0x2033fc, Func Offset: 0x85c
	// Line 2435, Address: 0x203408, Func Offset: 0x868
	// Line 2437, Address: 0x203420, Func Offset: 0x880
	// Line 2443, Address: 0x203430, Func Offset: 0x890
	// Line 2444, Address: 0x20343c, Func Offset: 0x89c
	// Line 2445, Address: 0x203444, Func Offset: 0x8a4
	// Line 2446, Address: 0x20344c, Func Offset: 0x8ac
	// Line 2447, Address: 0x20345c, Func Offset: 0x8bc
	// Line 2449, Address: 0x203460, Func Offset: 0x8c0
	// Line 2440, Address: 0x20346c, Func Offset: 0x8cc
	// Line 2449, Address: 0x203470, Func Offset: 0x8d0
	// Line 2440, Address: 0x203478, Func Offset: 0x8d8
	// Line 2449, Address: 0x203484, Func Offset: 0x8e4
	// Func End, Address: 0x2034b4, Func Offset: 0x914
}

// BUpdate__8zNMETikiFP5xVec3
// Start address: 0x2034c0
void zNMETiki::BUpdate()
{
	// Line 2248, Address: 0x2034c0, Func Offset: 0
	// Line 2251, Address: 0x2034d0, Func Offset: 0x10
	// Line 2252, Address: 0x2034d8, Func Offset: 0x18
	// Line 2253, Address: 0x2034e0, Func Offset: 0x20
	// Func End, Address: 0x2034f0, Func Offset: 0x30
}

// RenderExtra__8zNMETikiFv
// Start address: 0x2034f0
void zNMETiki::RenderExtra()
{
	// Line 2241, Address: 0x2034f0, Func Offset: 0
	// Line 2242, Address: 0x2034f4, Func Offset: 0x4
	// Line 2243, Address: 0x2034fc, Func Offset: 0xc
	// Line 2245, Address: 0x203584, Func Offset: 0x94
	// Func End, Address: 0x20358c, Func Offset: 0x9c
}

// Render__8zNMETikiFv
// Start address: 0x203590
void zNMETiki::Render()
{
	// Line 2237, Address: 0x203590, Func Offset: 0
	// Func End, Address: 0x20359c, Func Offset: 0xc
}

// SysEvent__8zNMETikiFP5xBaseP5xBaseUiPCfP5xBaseUiPi
// Start address: 0x2035a0
int32 zNMETiki::SysEvent(xBase* from, xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget, uint32 toParamWidgetID, int32* handled)
{
	NMEMsg msg;
	// Line 2123, Address: 0x2035a0, Func Offset: 0
	// Line 2125, Address: 0x2035a4, Func Offset: 0x4
	// Line 2123, Address: 0x2035a8, Func Offset: 0x8
	// Line 2125, Address: 0x2035e8, Func Offset: 0x48
	// Line 2128, Address: 0x203654, Func Offset: 0xb4
	// Line 2129, Address: 0x20366c, Func Offset: 0xcc
	// Line 2130, Address: 0x203680, Func Offset: 0xe0
	// Line 2135, Address: 0x203690, Func Offset: 0xf0
	// Line 2136, Address: 0x20369c, Func Offset: 0xfc
	// Line 2139, Address: 0x2036ac, Func Offset: 0x10c
	// Line 2146, Address: 0x2036bc, Func Offset: 0x11c
	// Line 2147, Address: 0x2036c0, Func Offset: 0x120
	// Line 2152, Address: 0x2036c8, Func Offset: 0x128
	// Line 2157, Address: 0x2036dc, Func Offset: 0x13c
	// Line 2158, Address: 0x2036e0, Func Offset: 0x140
	// Line 2163, Address: 0x2036e8, Func Offset: 0x148
	// Line 2165, Address: 0x203700, Func Offset: 0x160
	// Line 2166, Address: 0x203730, Func Offset: 0x190
	// Line 2168, Address: 0x203740, Func Offset: 0x1a0
	// Line 2169, Address: 0x203760, Func Offset: 0x1c0
	// Line 2170, Address: 0x203764, Func Offset: 0x1c4
	// Line 2174, Address: 0x20376c, Func Offset: 0x1cc
	// Line 2177, Address: 0x203780, Func Offset: 0x1e0
	// Line 2178, Address: 0x203784, Func Offset: 0x1e4
	// Line 2182, Address: 0x20378c, Func Offset: 0x1ec
	// Line 2183, Address: 0x203790, Func Offset: 0x1f0
	// Line 2184, Address: 0x203794, Func Offset: 0x1f4
	// Line 2188, Address: 0x20379c, Func Offset: 0x1fc
	// Line 2194, Address: 0x2037b0, Func Offset: 0x210
	// Line 2195, Address: 0x2037b4, Func Offset: 0x214
	// Line 2199, Address: 0x2037bc, Func Offset: 0x21c
	// Line 2200, Address: 0x2037c0, Func Offset: 0x220
	// Line 2202, Address: 0x2037d8, Func Offset: 0x238
	// Line 2203, Address: 0x203808, Func Offset: 0x268
	// Line 2205, Address: 0x203814, Func Offset: 0x274
	// Line 2206, Address: 0x203834, Func Offset: 0x294
	// Line 2207, Address: 0x203838, Func Offset: 0x298
	// Line 2211, Address: 0x203840, Func Offset: 0x2a0
	// Line 2212, Address: 0x203860, Func Offset: 0x2c0
	// Line 2218, Address: 0x203868, Func Offset: 0x2c8
	// Line 2222, Address: 0x203874, Func Offset: 0x2d4
	// Line 2143, Address: 0x203880, Func Offset: 0x2e0
	// Line 2141, Address: 0x203884, Func Offset: 0x2e4
	// Line 2143, Address: 0x203888, Func Offset: 0x2e8
	// Line 2140, Address: 0x20388c, Func Offset: 0x2ec
	// Line 2222, Address: 0x203890, Func Offset: 0x2f0
	// Line 2141, Address: 0x203898, Func Offset: 0x2f8
	// Line 2222, Address: 0x20389c, Func Offset: 0x2fc
	// Line 2153, Address: 0x2038b0, Func Offset: 0x310
	// Line 2222, Address: 0x2038b4, Func Offset: 0x314
	// Line 2154, Address: 0x2038d8, Func Offset: 0x338
	// Line 2222, Address: 0x2038e8, Func Offset: 0x348
	// Line 2154, Address: 0x2038ec, Func Offset: 0x34c
	// Line 2222, Address: 0x2038f4, Func Offset: 0x354
	// Line 2175, Address: 0x203978, Func Offset: 0x3d8
	// Line 2222, Address: 0x203984, Func Offset: 0x3e4
	// Line 2189, Address: 0x2039e8, Func Offset: 0x448
	// Line 2222, Address: 0x2039ec, Func Offset: 0x44c
	// Line 2190, Address: 0x2039f4, Func Offset: 0x454
	// Line 2222, Address: 0x2039f8, Func Offset: 0x458
	// Line 2191, Address: 0x203a1c, Func Offset: 0x47c
	// Line 2222, Address: 0x203a2c, Func Offset: 0x48c
	// Line 2191, Address: 0x203a30, Func Offset: 0x490
	// Line 2222, Address: 0x203a38, Func Offset: 0x498
	// Line 2219, Address: 0x203a58, Func Offset: 0x4b8
	// Line 2222, Address: 0x203a5c, Func Offset: 0x4bc
	// Line 2219, Address: 0x203a68, Func Offset: 0x4c8
	// Line 2222, Address: 0x203a6c, Func Offset: 0x4cc
	// Line 2219, Address: 0x203ae0, Func Offset: 0x540
	// Line 2222, Address: 0x203ae4, Func Offset: 0x544
	// Line 2219, Address: 0x203afc, Func Offset: 0x55c
	// Line 2222, Address: 0x203b04, Func Offset: 0x564
	// Line 2219, Address: 0x203b10, Func Offset: 0x570
	// Line 2224, Address: 0x203b18, Func Offset: 0x578
	// Func End, Address: 0x203b44, Func Offset: 0x5a4
}

// ProcSubContract__8zNMETikiFf
// Start address: 0x203b50
void zNMETiki::ProcSubContract(float32 dt)
{
	uint32 i;
	float32 duration;
	xQuat* q0;
	xVec3* t0;
	float32 dy;
	float32 dh;
	float32 dh;
	// Line 1800, Address: 0x203b50, Func Offset: 0
	// Line 1809, Address: 0x203b78, Func Offset: 0x28
	// Line 1817, Address: 0x203b88, Func Offset: 0x38
	// Line 1829, Address: 0x203ba4, Func Offset: 0x54
	// Line 1831, Address: 0x203bac, Func Offset: 0x5c
	// Line 1829, Address: 0x203bb0, Func Offset: 0x60
	// Line 1831, Address: 0x203bbc, Func Offset: 0x6c
	// Line 1832, Address: 0x203bc8, Func Offset: 0x78
	// Line 1833, Address: 0x203c00, Func Offset: 0xb0
	// Line 1837, Address: 0x203c0c, Func Offset: 0xbc
	// Line 1840, Address: 0x203c20, Func Offset: 0xd0
	// Line 1841, Address: 0x203c2c, Func Offset: 0xdc
	// Line 1842, Address: 0x203c34, Func Offset: 0xe4
	// Line 1843, Address: 0x203c40, Func Offset: 0xf0
	// Line 1844, Address: 0x203c54, Func Offset: 0x104
	// Line 1845, Address: 0x203c5c, Func Offset: 0x10c
	// Line 1846, Address: 0x203c64, Func Offset: 0x114
	// Line 1847, Address: 0x203c68, Func Offset: 0x118
	// Line 1848, Address: 0x203c78, Func Offset: 0x128
	// Line 1852, Address: 0x203c84, Func Offset: 0x134
	// Line 1854, Address: 0x203c88, Func Offset: 0x138
	// Line 1853, Address: 0x203c94, Func Offset: 0x144
	// Line 1854, Address: 0x203c98, Func Offset: 0x148
	// Line 1855, Address: 0x203ca8, Func Offset: 0x158
	// Line 1856, Address: 0x203cb4, Func Offset: 0x164
	// Line 1857, Address: 0x203ccc, Func Offset: 0x17c
	// Line 1861, Address: 0x203cd4, Func Offset: 0x184
	// Line 1865, Address: 0x203ce4, Func Offset: 0x194
	// Line 1867, Address: 0x203cf0, Func Offset: 0x1a0
	// Line 1869, Address: 0x203cf4, Func Offset: 0x1a4
	// Line 1867, Address: 0x203cf8, Func Offset: 0x1a8
	// Line 1869, Address: 0x203d04, Func Offset: 0x1b4
	// Line 1871, Address: 0x203d0c, Func Offset: 0x1bc
	// Line 1872, Address: 0x203d18, Func Offset: 0x1c8
	// Line 1875, Address: 0x203d38, Func Offset: 0x1e8
	// Line 1876, Address: 0x203d44, Func Offset: 0x1f4
	// Line 1878, Address: 0x203d58, Func Offset: 0x208
	// Line 1885, Address: 0x203d6c, Func Offset: 0x21c
	// Line 1890, Address: 0x203d7c, Func Offset: 0x22c
	// Line 1891, Address: 0x203d88, Func Offset: 0x238
	// Line 1892, Address: 0x203d94, Func Offset: 0x244
	// Line 1893, Address: 0x203d9c, Func Offset: 0x24c
	// Line 1898, Address: 0x203da0, Func Offset: 0x250
	// Line 1901, Address: 0x203db4, Func Offset: 0x264
	// Line 1902, Address: 0x203dbc, Func Offset: 0x26c
	// Line 1905, Address: 0x203dc8, Func Offset: 0x278
	// Line 1909, Address: 0x203e04, Func Offset: 0x2b4
	// Line 1910, Address: 0x203e10, Func Offset: 0x2c0
	// Line 1913, Address: 0x203e18, Func Offset: 0x2c8
	// Line 1910, Address: 0x203e1c, Func Offset: 0x2cc
	// Line 1911, Address: 0x203e20, Func Offset: 0x2d0
	// Line 1913, Address: 0x203e34, Func Offset: 0x2e4
	// Line 1917, Address: 0x203e3c, Func Offset: 0x2ec
	// Line 1919, Address: 0x203e5c, Func Offset: 0x30c
	// Line 1920, Address: 0x203e60, Func Offset: 0x310
	// Line 1923, Address: 0x203e70, Func Offset: 0x320
	// Line 1965, Address: 0x203e80, Func Offset: 0x330
	// Line 1978, Address: 0x203e90, Func Offset: 0x340
	// Line 1979, Address: 0x203e98, Func Offset: 0x348
	// Line 1989, Address: 0x203ebc, Func Offset: 0x36c
	// Line 2001, Address: 0x203ec0, Func Offset: 0x370
	// Line 1989, Address: 0x203ec4, Func Offset: 0x374
	// Line 1992, Address: 0x203ec8, Func Offset: 0x378
	// Line 1995, Address: 0x203ecc, Func Offset: 0x37c
	// Line 1979, Address: 0x203ed0, Func Offset: 0x380
	// Line 1998, Address: 0x203ed4, Func Offset: 0x384
	// Line 2001, Address: 0x203ed8, Func Offset: 0x388
	// Line 1988, Address: 0x203edc, Func Offset: 0x38c
	// Line 1989, Address: 0x203ee0, Func Offset: 0x390
	// Line 1998, Address: 0x203ee4, Func Offset: 0x394
	// Line 1988, Address: 0x203ee8, Func Offset: 0x398
	// Line 1989, Address: 0x203eec, Func Offset: 0x39c
	// Line 1988, Address: 0x203ef0, Func Offset: 0x3a0
	// Line 1989, Address: 0x203ef4, Func Offset: 0x3a4
	// Line 1992, Address: 0x203f10, Func Offset: 0x3c0
	// Line 1995, Address: 0x203f20, Func Offset: 0x3d0
	// Line 1992, Address: 0x203f24, Func Offset: 0x3d4
	// Line 1995, Address: 0x203f38, Func Offset: 0x3e8
	// Line 1998, Address: 0x203f48, Func Offset: 0x3f8
	// Line 1995, Address: 0x203f50, Func Offset: 0x400
	// Line 1998, Address: 0x203f5c, Func Offset: 0x40c
	// Line 1995, Address: 0x203f60, Func Offset: 0x410
	// Line 1998, Address: 0x203f64, Func Offset: 0x414
	// Line 2001, Address: 0x203f6c, Func Offset: 0x41c
	// Line 2002, Address: 0x203f74, Func Offset: 0x424
	// Line 2005, Address: 0x203f78, Func Offset: 0x428
	// Line 2006, Address: 0x203f9c, Func Offset: 0x44c
	// Line 2007, Address: 0x203fc0, Func Offset: 0x470
	// Line 2008, Address: 0x203fe4, Func Offset: 0x494
	// Line 2010, Address: 0x204010, Func Offset: 0x4c0
	// Line 2012, Address: 0x204024, Func Offset: 0x4d4
	// Line 2013, Address: 0x204034, Func Offset: 0x4e4
	// Line 2071, Address: 0x204040, Func Offset: 0x4f0
	// Line 2073, Address: 0x204058, Func Offset: 0x508
	// Line 2074, Address: 0x204060, Func Offset: 0x510
	// Line 2075, Address: 0x204068, Func Offset: 0x518
	// Line 2074, Address: 0x20406c, Func Offset: 0x51c
	// Line 2076, Address: 0x204070, Func Offset: 0x520
	// Line 2073, Address: 0x204074, Func Offset: 0x524
	// Line 2075, Address: 0x20407c, Func Offset: 0x52c
	// Line 2074, Address: 0x204080, Func Offset: 0x530
	// Line 2076, Address: 0x20408c, Func Offset: 0x53c
	// Line 2075, Address: 0x204090, Func Offset: 0x540
	// Line 2076, Address: 0x204098, Func Offset: 0x548
	// Line 2075, Address: 0x2040a0, Func Offset: 0x550
	// Line 2076, Address: 0x2040a4, Func Offset: 0x554
	// Line 2075, Address: 0x2040b0, Func Offset: 0x560
	// Line 2076, Address: 0x2040b4, Func Offset: 0x564
	// Line 2078, Address: 0x2040c8, Func Offset: 0x578
	// Line 2080, Address: 0x2040f4, Func Offset: 0x5a4
	// Line 2084, Address: 0x20411c, Func Offset: 0x5cc
	// Line 2085, Address: 0x204124, Func Offset: 0x5d4
	// Line 2088, Address: 0x204158, Func Offset: 0x608
	// Line 2091, Address: 0x204190, Func Offset: 0x640
	// Line 2096, Address: 0x2041c8, Func Offset: 0x678
	// Line 2099, Address: 0x2041f4, Func Offset: 0x6a4
	// Line 2100, Address: 0x204200, Func Offset: 0x6b0
	// Line 2102, Address: 0x204208, Func Offset: 0x6b8
	// Line 2100, Address: 0x20420c, Func Offset: 0x6bc
	// Line 2102, Address: 0x204210, Func Offset: 0x6c0
	// Line 2103, Address: 0x204250, Func Offset: 0x700
	// Line 2107, Address: 0x204260, Func Offset: 0x710
	// Line 2110, Address: 0x204268, Func Offset: 0x718
	// Line 2111, Address: 0x204270, Func Offset: 0x720
	// Line 2117, Address: 0x204278, Func Offset: 0x728
	// Line 1886, Address: 0x204280, Func Offset: 0x730
	// Line 2117, Address: 0x204284, Func Offset: 0x734
	// Line 1887, Address: 0x204290, Func Offset: 0x740
	// Line 2117, Address: 0x204298, Func Offset: 0x748
	// Line 1888, Address: 0x2042a0, Func Offset: 0x750
	// Line 1889, Address: 0x2042a4, Func Offset: 0x754
	// Line 2117, Address: 0x2042ac, Func Offset: 0x75c
	// Line 1915, Address: 0x2042c0, Func Offset: 0x770
	// Line 1925, Address: 0x2042c8, Func Offset: 0x778
	// Line 2117, Address: 0x2042cc, Func Offset: 0x77c
	// Line 1925, Address: 0x2042d0, Func Offset: 0x780
	// Line 2117, Address: 0x2042e0, Func Offset: 0x790
	// Line 1926, Address: 0x2042e8, Func Offset: 0x798
	// Line 2117, Address: 0x2042ec, Func Offset: 0x79c
	// Line 1927, Address: 0x2042f4, Func Offset: 0x7a4
	// Line 2117, Address: 0x2042f8, Func Offset: 0x7a8
	// Line 1928, Address: 0x204300, Func Offset: 0x7b0
	// Line 2117, Address: 0x204304, Func Offset: 0x7b4
	// Line 1929, Address: 0x20430c, Func Offset: 0x7bc
	// Line 2117, Address: 0x204310, Func Offset: 0x7c0
	// Line 1930, Address: 0x204318, Func Offset: 0x7c8
	// Line 2117, Address: 0x20431c, Func Offset: 0x7cc
	// Line 1934, Address: 0x204334, Func Offset: 0x7e4
	// Line 2117, Address: 0x20433c, Func Offset: 0x7ec
	// Line 1934, Address: 0x204344, Func Offset: 0x7f4
	// Line 2117, Address: 0x204348, Func Offset: 0x7f8
	// Line 1937, Address: 0x204354, Func Offset: 0x804
	// Line 1936, Address: 0x20435c, Func Offset: 0x80c
	// Line 1937, Address: 0x204360, Func Offset: 0x810
	// Line 1936, Address: 0x204364, Func Offset: 0x814
	// Line 2117, Address: 0x204368, Func Offset: 0x818
	// Line 1937, Address: 0x204370, Func Offset: 0x820
	// Line 2117, Address: 0x204374, Func Offset: 0x824
	// Line 1943, Address: 0x20437c, Func Offset: 0x82c
	// Line 2117, Address: 0x204384, Func Offset: 0x834
	// Line 1945, Address: 0x20438c, Func Offset: 0x83c
	// Line 2117, Address: 0x204390, Func Offset: 0x840
	// Line 1947, Address: 0x204398, Func Offset: 0x848
	// Line 1952, Address: 0x20439c, Func Offset: 0x84c
	// Line 1948, Address: 0x2043a0, Func Offset: 0x850
	// Line 2117, Address: 0x2043a4, Func Offset: 0x854
	// Line 1949, Address: 0x2043ac, Func Offset: 0x85c
	// Line 2117, Address: 0x2043b0, Func Offset: 0x860
	// Line 1950, Address: 0x2043b8, Func Offset: 0x868
	// Line 2117, Address: 0x2043bc, Func Offset: 0x86c
	// Line 1951, Address: 0x2043cc, Func Offset: 0x87c
	// Line 2117, Address: 0x2043d0, Func Offset: 0x880
	// Line 1952, Address: 0x2043d8, Func Offset: 0x888
	// Line 2117, Address: 0x2043dc, Func Offset: 0x88c
	// Line 1953, Address: 0x2043e4, Func Offset: 0x894
	// Line 2117, Address: 0x2043e8, Func Offset: 0x898
	// Line 1956, Address: 0x2043f4, Func Offset: 0x8a4
	// Line 2117, Address: 0x204408, Func Offset: 0x8b8
	// Line 1939, Address: 0x204418, Func Offset: 0x8c8
	// Line 2117, Address: 0x204420, Func Offset: 0x8d0
	// Line 1954, Address: 0x204434, Func Offset: 0x8e4
	// Line 2117, Address: 0x204448, Func Offset: 0x8f8
	// Line 1958, Address: 0x20445c, Func Offset: 0x90c
	// Line 2117, Address: 0x204464, Func Offset: 0x914
	// Line 1968, Address: 0x20447c, Func Offset: 0x92c
	// Line 2117, Address: 0x204484, Func Offset: 0x934
	// Line 1968, Address: 0x204494, Func Offset: 0x944
	// Line 2117, Address: 0x204498, Func Offset: 0x948
	// Line 1969, Address: 0x2044a4, Func Offset: 0x954
	// Line 2117, Address: 0x2044ac, Func Offset: 0x95c
	// Line 1969, Address: 0x2044bc, Func Offset: 0x96c
	// Line 2117, Address: 0x2044c0, Func Offset: 0x970
	// Line 1970, Address: 0x2044c8, Func Offset: 0x978
	// Line 2117, Address: 0x2044cc, Func Offset: 0x97c
	// Line 1971, Address: 0x2044dc, Func Offset: 0x98c
	// Line 2117, Address: 0x2044e4, Func Offset: 0x994
	// Line 1971, Address: 0x2044ec, Func Offset: 0x99c
	// Line 1973, Address: 0x2044f0, Func Offset: 0x9a0
	// Line 2117, Address: 0x2044f4, Func Offset: 0x9a4
	// Line 1974, Address: 0x2044fc, Func Offset: 0x9ac
	// Line 2117, Address: 0x204500, Func Offset: 0x9b0
	// Line 1975, Address: 0x204508, Func Offset: 0x9b8
	// Line 2117, Address: 0x20450c, Func Offset: 0x9bc
	// Line 1976, Address: 0x20451c, Func Offset: 0x9cc
	// Line 1978, Address: 0x204520, Func Offset: 0x9d0
	// Line 2117, Address: 0x204528, Func Offset: 0x9d8
	// Line 1983, Address: 0x20452c, Func Offset: 0x9dc
	// Line 2117, Address: 0x204530, Func Offset: 0x9e0
	// Line 1983, Address: 0x204534, Func Offset: 0x9e4
	// Line 1982, Address: 0x204538, Func Offset: 0x9e8
	// Line 2117, Address: 0x20453c, Func Offset: 0x9ec
	// Line 1984, Address: 0x204540, Func Offset: 0x9f0
	// Line 2118, Address: 0x204548, Func Offset: 0x9f8
	// Func End, Address: 0x204570, Func Offset: 0xa20
}

// UpdateAnimBound__8zNMETikiFv
// Start address: 0x204570
void zNMETiki::UpdateAnimBound()
{
	xModelInstance* minst_root;
	xModelInstance* minst;
	xMat3x3 mat_orig;
	xModelInstance* minst;
	// Line 1731, Address: 0x204570, Func Offset: 0
	// Line 1743, Address: 0x204574, Func Offset: 0x4
	// Line 1731, Address: 0x204578, Func Offset: 0x8
	// Line 1743, Address: 0x20457c, Func Offset: 0xc
	// Line 1731, Address: 0x204580, Func Offset: 0x10
	// Line 1745, Address: 0x204584, Func Offset: 0x14
	// Line 1731, Address: 0x204588, Func Offset: 0x18
	// Line 1741, Address: 0x20458c, Func Offset: 0x1c
	// Line 1743, Address: 0x204590, Func Offset: 0x20
	// Line 1745, Address: 0x204598, Func Offset: 0x28
	// Line 1750, Address: 0x2045a8, Func Offset: 0x38
	// Line 1753, Address: 0x2045b0, Func Offset: 0x40
	// Line 1756, Address: 0x2045d0, Func Offset: 0x60
	// Line 1769, Address: 0x2045d8, Func Offset: 0x68
	// Line 1756, Address: 0x2045e0, Func Offset: 0x70
	// Line 1757, Address: 0x2045ec, Func Offset: 0x7c
	// Line 1758, Address: 0x204600, Func Offset: 0x90
	// Line 1760, Address: 0x204614, Func Offset: 0xa4
	// Line 1761, Address: 0x204628, Func Offset: 0xb8
	// Line 1762, Address: 0x20463c, Func Offset: 0xcc
	// Line 1764, Address: 0x204650, Func Offset: 0xe0
	// Line 1765, Address: 0x204664, Func Offset: 0xf4
	// Line 1766, Address: 0x204678, Func Offset: 0x108
	// Line 1769, Address: 0x204690, Func Offset: 0x120
	// Line 1776, Address: 0x20469c, Func Offset: 0x12c
	// Line 1778, Address: 0x2046bc, Func Offset: 0x14c
	// Line 1779, Address: 0x2046c0, Func Offset: 0x150
	// Line 1780, Address: 0x2046c8, Func Offset: 0x158
	// Line 1784, Address: 0x2046d0, Func Offset: 0x160
	// Line 1785, Address: 0x2046dc, Func Offset: 0x16c
	// Line 1790, Address: 0x2046f0, Func Offset: 0x180
	// Line 1791, Address: 0x2046f4, Func Offset: 0x184
	// Line 1793, Address: 0x2046fc, Func Offset: 0x18c
	// Line 1796, Address: 0x204700, Func Offset: 0x190
	// Func End, Address: 0x204714, Func Offset: 0x1a4
}

// Process__8zNMETikiFf
// Start address: 0x204720
void zNMETiki::Process(float32 dt)
{
	// Line 1690, Address: 0x204720, Func Offset: 0
	// Line 1696, Address: 0x204734, Func Offset: 0x14
	// Line 1701, Address: 0x204750, Func Offset: 0x30
	// Line 1706, Address: 0x20475c, Func Offset: 0x3c
	// Line 1707, Address: 0x20476c, Func Offset: 0x4c
	// Line 1709, Address: 0x204774, Func Offset: 0x54
	// Line 1724, Address: 0x204790, Func Offset: 0x70
	// Func End, Address: 0x2047a4, Func Offset: 0x84
}

// SelfSetup__8zNMETikiFv
// Start address: 0x2047b0
void zNMETiki::SelfSetup()
{
	xBehaveMgr* bmgr;
	xPsyche* psy;
	xGoal* goal;
	// Line 1551, Address: 0x2047b0, Func Offset: 0
	// Line 1557, Address: 0x2047c0, Func Offset: 0x10
	// Line 1559, Address: 0x2047c8, Func Offset: 0x18
	// Line 1560, Address: 0x2047dc, Func Offset: 0x2c
	// Line 1563, Address: 0x2047e0, Func Offset: 0x30
	// Line 1564, Address: 0x2047e8, Func Offset: 0x38
	// Line 1565, Address: 0x2047fc, Func Offset: 0x4c
	// Line 1568, Address: 0x204808, Func Offset: 0x58
	// Line 1565, Address: 0x20480c, Func Offset: 0x5c
	// Line 1568, Address: 0x204818, Func Offset: 0x68
	// Line 1572, Address: 0x20484c, Func Offset: 0x9c
	// Line 1570, Address: 0x204850, Func Offset: 0xa0
	// Line 1572, Address: 0x204854, Func Offset: 0xa4
	// Line 1570, Address: 0x204858, Func Offset: 0xa8
	// Line 1572, Address: 0x20485c, Func Offset: 0xac
	// Line 1570, Address: 0x204860, Func Offset: 0xb0
	// Line 1572, Address: 0x204864, Func Offset: 0xb4
	// Line 1573, Address: 0x20486c, Func Offset: 0xbc
	// Line 1574, Address: 0x204878, Func Offset: 0xc8
	// Line 1578, Address: 0x204880, Func Offset: 0xd0
	// Line 1576, Address: 0x204884, Func Offset: 0xd4
	// Line 1578, Address: 0x204888, Func Offset: 0xd8
	// Line 1576, Address: 0x20488c, Func Offset: 0xdc
	// Line 1578, Address: 0x204890, Func Offset: 0xe0
	// Line 1576, Address: 0x204894, Func Offset: 0xe4
	// Line 1578, Address: 0x204898, Func Offset: 0xe8
	// Line 1579, Address: 0x2048a0, Func Offset: 0xf0
	// Line 1580, Address: 0x2048ac, Func Offset: 0xfc
	// Line 1582, Address: 0x2048b4, Func Offset: 0x104
	// Line 1584, Address: 0x2048b8, Func Offset: 0x108
	// Line 1582, Address: 0x2048bc, Func Offset: 0x10c
	// Line 1584, Address: 0x2048c0, Func Offset: 0x110
	// Line 1582, Address: 0x2048c4, Func Offset: 0x114
	// Line 1584, Address: 0x2048c8, Func Offset: 0x118
	// Line 1582, Address: 0x2048cc, Func Offset: 0x11c
	// Line 1584, Address: 0x2048d0, Func Offset: 0x120
	// Line 1585, Address: 0x2048d8, Func Offset: 0x128
	// Line 1592, Address: 0x2048e8, Func Offset: 0x138
	// Line 1593, Address: 0x2048fc, Func Offset: 0x14c
	// Line 1595, Address: 0x204900, Func Offset: 0x150
	// Line 1593, Address: 0x204904, Func Offset: 0x154
	// Line 1595, Address: 0x204908, Func Offset: 0x158
	// Line 1593, Address: 0x20490c, Func Offset: 0x15c
	// Line 1595, Address: 0x204910, Func Offset: 0x160
	// Line 1593, Address: 0x204914, Func Offset: 0x164
	// Line 1595, Address: 0x204918, Func Offset: 0x168
	// Line 1596, Address: 0x204920, Func Offset: 0x170
	// Line 1598, Address: 0x204924, Func Offset: 0x174
	// Line 1596, Address: 0x204928, Func Offset: 0x178
	// Line 1598, Address: 0x204930, Func Offset: 0x180
	// Line 1601, Address: 0x204938, Func Offset: 0x188
	// Line 1604, Address: 0x204944, Func Offset: 0x194
	// Func End, Address: 0x204958, Func Offset: 0x1a8
}

// SetCarryState__8zNMETikiF11en_carystat
// Start address: 0x204960
int32 zNMETiki::SetCarryState(en_carystat cs)
{
	int32 i;
	// Line 1488, Address: 0x204960, Func Offset: 0
	// Line 1489, Address: 0x204964, Func Offset: 0x4
	// Line 1488, Address: 0x204968, Func Offset: 0x8
	// Line 1489, Address: 0x20496c, Func Offset: 0xc
	// Line 1491, Address: 0x204978, Func Offset: 0x18
	// Line 1493, Address: 0x2049ac, Func Offset: 0x4c
	// Line 1495, Address: 0x2049b8, Func Offset: 0x58
	// Line 1494, Address: 0x2049bc, Func Offset: 0x5c
	// Line 1495, Address: 0x2049c0, Func Offset: 0x60
	// Line 1494, Address: 0x2049cc, Func Offset: 0x6c
	// Line 1495, Address: 0x2049d0, Func Offset: 0x70
	// Line 1497, Address: 0x2049f0, Func Offset: 0x90
	// Line 1507, Address: 0x2049f8, Func Offset: 0x98
	// Line 1508, Address: 0x2049fc, Func Offset: 0x9c
	// Line 1507, Address: 0x204a04, Func Offset: 0xa4
	// Line 1509, Address: 0x204a0c, Func Offset: 0xac
	// Line 1510, Address: 0x204a14, Func Offset: 0xb4
	// Line 1515, Address: 0x204a1c, Func Offset: 0xbc
	// Line 1516, Address: 0x204a2c, Func Offset: 0xcc
	// Line 1519, Address: 0x204a3c, Func Offset: 0xdc
	// Line 1520, Address: 0x204a44, Func Offset: 0xe4
	// Line 1521, Address: 0x204a48, Func Offset: 0xe8
	// Line 1522, Address: 0x204a54, Func Offset: 0xf4
	// Line 1528, Address: 0x204a5c, Func Offset: 0xfc
	// Line 1529, Address: 0x204a60, Func Offset: 0x100
	// Line 1532, Address: 0x204a64, Func Offset: 0x104
	// Line 1528, Address: 0x204a68, Func Offset: 0x108
	// Line 1529, Address: 0x204a70, Func Offset: 0x110
	// Line 1530, Address: 0x204a7c, Func Offset: 0x11c
	// Line 1532, Address: 0x204a88, Func Offset: 0x128
	// Line 1533, Address: 0x204a94, Func Offset: 0x134
	// Line 1536, Address: 0x204a98, Func Offset: 0x138
	// Line 1533, Address: 0x204a9c, Func Offset: 0x13c
	// Line 1536, Address: 0x204aa4, Func Offset: 0x144
	// Line 1540, Address: 0x204aa8, Func Offset: 0x148
	// Line 1546, Address: 0x204ab0, Func Offset: 0x150
	// Line 1490, Address: 0x204abc, Func Offset: 0x15c
	// Line 1546, Address: 0x204ac8, Func Offset: 0x168
	// Line 1501, Address: 0x204ad8, Func Offset: 0x178
	// Line 1546, Address: 0x204ae0, Func Offset: 0x180
	// Line 1538, Address: 0x204ae4, Func Offset: 0x184
	// Line 1546, Address: 0x204af4, Func Offset: 0x194
	// Line 1542, Address: 0x204b08, Func Offset: 0x1a8
	// Line 1547, Address: 0x204b0c, Func Offset: 0x1ac
	// Func End, Address: 0x204b18, Func Offset: 0x1b8
}

// TypeHandleMail__8zNMETikiFP6NMEMsg
// Start address: 0x204b20
int32 zNMETiki::TypeHandleMail(NMEMsg* mail)
{
	// Line 1469, Address: 0x204b20, Func Offset: 0
	// Line 1477, Address: 0x204b24, Func Offset: 0x4
	// Line 1469, Address: 0x204b28, Func Offset: 0x8
	// Line 1477, Address: 0x204b30, Func Offset: 0x10
	// Line 1479, Address: 0x204b3c, Func Offset: 0x1c
	// Line 1481, Address: 0x204bf8, Func Offset: 0xd8
	// Line 1479, Address: 0x204c1c, Func Offset: 0xfc
	// Line 1481, Address: 0x204c24, Func Offset: 0x104
	// Line 1479, Address: 0x204c34, Func Offset: 0x114
	// Line 1481, Address: 0x204c38, Func Offset: 0x118
	// Line 1485, Address: 0x204c64, Func Offset: 0x144
	// Line 1486, Address: 0x204c68, Func Offset: 0x148
	// Func End, Address: 0x204c78, Func Offset: 0x158
}

// Damage__8zNMETikiF9en_npcdmgPC5xBasePC5xVec3i10en_plyrpup
// Start address: 0x204c80
void zNMETiki::Damage(en_npcdmg damtype)
{
	en_npcdmg stoneAcceptsThese[11];
	en_plyrpup pup;
	// Line 1421, Address: 0x204c80, Func Offset: 0
	// Line 1434, Address: 0x204c84, Func Offset: 0x4
	// Line 1421, Address: 0x204c88, Func Offset: 0x8
	// Line 1434, Address: 0x204c8c, Func Offset: 0xc
	// Line 1421, Address: 0x204c90, Func Offset: 0x10
	// Line 1434, Address: 0x204c94, Func Offset: 0x14
	// Line 1450, Address: 0x204c98, Func Offset: 0x18
	// Line 1434, Address: 0x204ca0, Func Offset: 0x20
	// Line 1450, Address: 0x204d18, Func Offset: 0x98
	// Line 1461, Address: 0x204d24, Func Offset: 0xa4
	// Line 1465, Address: 0x204d30, Func Offset: 0xb0
	// Line 1451, Address: 0x204d50, Func Offset: 0xd0
	// Line 1465, Address: 0x204d58, Func Offset: 0xd8
	// Line 1454, Address: 0x204d70, Func Offset: 0xf0
	// Line 1465, Address: 0x204d74, Func Offset: 0xf4
	// Line 1457, Address: 0x204d90, Func Offset: 0x110
	// Line 1465, Address: 0x204d98, Func Offset: 0x118
	// Line 1462, Address: 0x204d9c, Func Offset: 0x11c
	// Line 1465, Address: 0x204da4, Func Offset: 0x124
	// Line 1466, Address: 0x204db4, Func Offset: 0x134
	// Func End, Address: 0x204dc4, Func Offset: 0x144
}

// MvptFirstFollow__8zNMETikiFv
// Start address: 0x204dd0
zMovePoint* zNMETiki::MvptFirstFollow()
{
	zMovePoint* nav;
	// Line 1403, Address: 0x204dd0, Func Offset: 0
	// Line 1406, Address: 0x204de0, Func Offset: 0x10
	// Line 1407, Address: 0x204de8, Func Offset: 0x18
	// Line 1410, Address: 0x204df0, Func Offset: 0x20
	// Line 1414, Address: 0x204df8, Func Offset: 0x28
	// Func End, Address: 0x204e04, Func Offset: 0x34
}

// Gimme_NavNet__8zNMETikiFv
// Start address: 0x204e10
zNMENavNet* zNMETiki::Gimme_NavNet()
{
	void* mem;
	// Line 1386, Address: 0x204e10, Func Offset: 0
	// Line 1388, Address: 0x204e14, Func Offset: 0x4
	// Line 1386, Address: 0x204e18, Func Offset: 0x8
	// Line 1388, Address: 0x204e20, Func Offset: 0x10
	// Line 1391, Address: 0x204e30, Func Offset: 0x20
	// Line 1392, Address: 0x204e38, Func Offset: 0x28
	// Line 1389, Address: 0x204e40, Func Offset: 0x30
	// Line 1395, Address: 0x204e48, Func Offset: 0x38
	// Line 1396, Address: 0x204e58, Func Offset: 0x48
	// Line 1397, Address: 0x204e5c, Func Offset: 0x4c
	// Line 1399, Address: 0x204e64, Func Offset: 0x54
	// Line 1400, Address: 0x204e68, Func Offset: 0x58
	// Func End, Address: 0x204e78, Func Offset: 0x68
}

// InitTikiBoundInfo__8zNMETikiFv
// Start address: 0x204e80
void zNMETiki::InitTikiBoundInfo()
{
	xBox* bbb;
	en_npctyp ntyp;
	xModelInstance* nextModel;
	// Line 1322, Address: 0x204e80, Func Offset: 0
	// Line 1333, Address: 0x204e84, Func Offset: 0x4
	// Line 1322, Address: 0x204e88, Func Offset: 0x8
	// Line 1332, Address: 0x204eb0, Func Offset: 0x30
	// Line 1333, Address: 0x204eb4, Func Offset: 0x34
	// Line 1337, Address: 0x204ebc, Func Offset: 0x3c
	// Line 1338, Address: 0x204ec8, Func Offset: 0x48
	// Line 1339, Address: 0x204edc, Func Offset: 0x5c
	// Line 1338, Address: 0x204ee0, Func Offset: 0x60
	// Line 1339, Address: 0x204ee4, Func Offset: 0x64
	// Line 1338, Address: 0x204ee8, Func Offset: 0x68
	// Line 1339, Address: 0x204ef0, Func Offset: 0x70
	// Line 1338, Address: 0x204f00, Func Offset: 0x80
	// Line 1339, Address: 0x204f04, Func Offset: 0x84
	// Line 1380, Address: 0x204f10, Func Offset: 0x90
	// Line 1370, Address: 0x204f14, Func Offset: 0x94
	// Line 1380, Address: 0x204f18, Func Offset: 0x98
	// Line 1370, Address: 0x204f1c, Func Offset: 0x9c
	// Line 1371, Address: 0x204f20, Func Offset: 0xa0
	// Line 1374, Address: 0x204f58, Func Offset: 0xd8
	// Line 1377, Address: 0x204f90, Func Offset: 0x110
	// Line 1380, Address: 0x204fc0, Func Offset: 0x140
	// Line 1382, Address: 0x204fe0, Func Offset: 0x160
	// Line 1336, Address: 0x20502c, Func Offset: 0x1ac
	// Line 1382, Address: 0x205034, Func Offset: 0x1b4
	// Line 1351, Address: 0x20505c, Func Offset: 0x1dc
	// Line 1382, Address: 0x205060, Func Offset: 0x1e0
	// Line 1352, Address: 0x205080, Func Offset: 0x200
	// Line 1382, Address: 0x205084, Func Offset: 0x204
	// Line 1353, Address: 0x20508c, Func Offset: 0x20c
	// Line 1382, Address: 0x205090, Func Offset: 0x210
	// Line 1354, Address: 0x205094, Func Offset: 0x214
	// Line 1382, Address: 0x205098, Func Offset: 0x218
	// Line 1356, Address: 0x2050a4, Func Offset: 0x224
	// Line 1382, Address: 0x2050a8, Func Offset: 0x228
	// Line 1358, Address: 0x2050b4, Func Offset: 0x234
	// Line 1382, Address: 0x2050b8, Func Offset: 0x238
	// Line 1360, Address: 0x2050c4, Func Offset: 0x244
	// Line 1382, Address: 0x2050c8, Func Offset: 0x248
	// Line 1362, Address: 0x2050d4, Func Offset: 0x254
	// Line 1382, Address: 0x2050d8, Func Offset: 0x258
	// Line 1383, Address: 0x205128, Func Offset: 0x2a8
	// Func End, Address: 0x205154, Func Offset: 0x2d4
}

// Init__8zNMETikiFP9xEntAsset
// Start address: 0x205160
void zNMETiki::Init(xEntAsset* entass)
{
	// Line 1272, Address: 0x205160, Func Offset: 0
	// Line 1283, Address: 0x205174, Func Offset: 0x14
	// Line 1285, Address: 0x205188, Func Offset: 0x28
	// Line 1288, Address: 0x20518c, Func Offset: 0x2c
	// Line 1285, Address: 0x205190, Func Offset: 0x30
	// Line 1286, Address: 0x205198, Func Offset: 0x38
	// Line 1288, Address: 0x2051a0, Func Offset: 0x40
	// Line 1290, Address: 0x2051a8, Func Offset: 0x48
	// Line 1296, Address: 0x2051ac, Func Offset: 0x4c
	// Line 1297, Address: 0x2051bc, Func Offset: 0x5c
	// Line 1298, Address: 0x2051c4, Func Offset: 0x64
	// Line 1299, Address: 0x2051cc, Func Offset: 0x6c
	// Line 1301, Address: 0x2051d4, Func Offset: 0x74
	// Line 1303, Address: 0x2051e0, Func Offset: 0x80
	// Line 1304, Address: 0x2051e8, Func Offset: 0x88
	// Line 1307, Address: 0x2051f0, Func Offset: 0x90
	// Line 1304, Address: 0x2051f4, Func Offset: 0x94
	// Line 1305, Address: 0x205204, Func Offset: 0xa4
	// Line 1306, Address: 0x205218, Func Offset: 0xb8
	// Line 1307, Address: 0x205220, Func Offset: 0xc0
	// Line 1316, Address: 0x20522c, Func Offset: 0xcc
	// Line 1318, Address: 0x205234, Func Offset: 0xd4
	// Line 1311, Address: 0x205268, Func Offset: 0x108
	// Line 1318, Address: 0x20526c, Func Offset: 0x10c
	// Line 1311, Address: 0x205270, Func Offset: 0x110
	// Line 1318, Address: 0x205274, Func Offset: 0x114
	// Line 1312, Address: 0x20527c, Func Offset: 0x11c
	// Line 1319, Address: 0x205288, Func Offset: 0x128
	// Func End, Address: 0x20529c, Func Offset: 0x13c
}

// Setup__8zNMETikiFv
// Start address: 0x2052a0
void zNMETiki::Setup()
{
	// Line 1254, Address: 0x2052a0, Func Offset: 0
	// Line 1256, Address: 0x2052a4, Func Offset: 0x4
	// Line 1254, Address: 0x2052a8, Func Offset: 0x8
	// Line 1256, Address: 0x2052ac, Func Offset: 0xc
	// Line 1254, Address: 0x2052b0, Func Offset: 0x10
	// Line 1256, Address: 0x2052b4, Func Offset: 0x14
	// Line 1263, Address: 0x2052ec, Func Offset: 0x4c
	// Line 1264, Address: 0x2052fc, Func Offset: 0x5c
	// Line 1265, Address: 0x205310, Func Offset: 0x70
	// Line 1266, Address: 0x20533c, Func Offset: 0x9c
	// Line 1267, Address: 0x205344, Func Offset: 0xa4
	// Line 1269, Address: 0x205348, Func Offset: 0xa8
	// Func End, Address: 0x205358, Func Offset: 0xb8
}

// Reset__8zNMETikiFv
// Start address: 0x205360
void zNMETiki::Reset()
{
	int32 i;
	int32 i;
	en_npctyp ntyp;
	// Line 1173, Address: 0x205360, Func Offset: 0
	// Line 1174, Address: 0x205370, Func Offset: 0x10
	// Line 1178, Address: 0x2055ec, Func Offset: 0x28c
	// Line 1181, Address: 0x205624, Func Offset: 0x2c4
	// Line 1184, Address: 0x20565c, Func Offset: 0x2fc
	// Line 1191, Address: 0x205694, Func Offset: 0x334
	// Line 1194, Address: 0x205700, Func Offset: 0x3a0
	// Line 1204, Address: 0x205714, Func Offset: 0x3b4
	// Line 1195, Address: 0x205718, Func Offset: 0x3b8
	// Line 1197, Address: 0x205720, Func Offset: 0x3c0
	// Line 1213, Address: 0x205724, Func Offset: 0x3c4
	// Line 1201, Address: 0x205728, Func Offset: 0x3c8
	// Line 1203, Address: 0x205738, Func Offset: 0x3d8
	// Line 1204, Address: 0x20573c, Func Offset: 0x3dc
	// Line 1206, Address: 0x205740, Func Offset: 0x3e0
	// Line 1208, Address: 0x205750, Func Offset: 0x3f0
	// Line 1209, Address: 0x205754, Func Offset: 0x3f4
	// Line 1210, Address: 0x205758, Func Offset: 0x3f8
	// Line 1213, Address: 0x205760, Func Offset: 0x400
	// Line 1215, Address: 0x20577c, Func Offset: 0x41c
	// Line 1216, Address: 0x205784, Func Offset: 0x424
	// Line 1217, Address: 0x205788, Func Offset: 0x428
	// Line 1218, Address: 0x20578c, Func Offset: 0x42c
	// Line 1219, Address: 0x2057a8, Func Offset: 0x448
	// Line 1221, Address: 0x2057b0, Func Offset: 0x450
	// Line 1222, Address: 0x2057f8, Func Offset: 0x498
	// Line 1223, Address: 0x2057fc, Func Offset: 0x49c
	// Line 1227, Address: 0x205804, Func Offset: 0x4a4
	// Line 1229, Address: 0x20588c, Func Offset: 0x52c
	// Line 1230, Address: 0x205898, Func Offset: 0x538
	// Line 1232, Address: 0x2058d0, Func Offset: 0x570
	// Line 1233, Address: 0x2058dc, Func Offset: 0x57c
	// Line 1234, Address: 0x2058e4, Func Offset: 0x584
	// Line 1237, Address: 0x2058ec, Func Offset: 0x58c
	// Line 1239, Address: 0x205900, Func Offset: 0x5a0
	// Line 1241, Address: 0x20592c, Func Offset: 0x5cc
	// Line 1242, Address: 0x205934, Func Offset: 0x5d4
	// Line 1245, Address: 0x205974, Func Offset: 0x614
	// Line 1246, Address: 0x20597c, Func Offset: 0x61c
	// Line 1250, Address: 0x2059a0, Func Offset: 0x640
	// Func End, Address: 0x2059b4, Func Offset: 0x654
}

// CreateAnimTable__8zNMETikiFP10xAnimTable
// Start address: 0x2059c0
xAnimTable* zNMETiki::CreateAnimTable(xAnimTable* table)
{
	int8** names;
	// Line 1146, Address: 0x2059c0, Func Offset: 0
	// Line 1156, Address: 0x2059d4, Func Offset: 0x14
	// Line 1160, Address: 0x2059dc, Func Offset: 0x1c
	// Line 1167, Address: 0x205a20, Func Offset: 0x60
	// Line 1156, Address: 0x205a2c, Func Offset: 0x6c
	// Line 1167, Address: 0x205a30, Func Offset: 0x70
	// Line 1168, Address: 0x205a40, Func Offset: 0x80
	// Func End, Address: 0x205a54, Func Offset: 0x94
}

// zNMETiki_ReparentOrphans__Fv
// Start address: 0x205a60
void zNMETiki_ReparentOrphans()
{
	zNMETiki* holder;
	// Line 1115, Address: 0x205a60, Func Offset: 0
	// Line 1117, Address: 0x205a64, Func Offset: 0x4
	// Line 1115, Address: 0x205a68, Func Offset: 0x8
	// Line 1117, Address: 0x205a6c, Func Offset: 0xc
	// Line 1118, Address: 0x205a84, Func Offset: 0x24
	// Line 1119, Address: 0x205a90, Func Offset: 0x30
	// Line 1120, Address: 0x205aa0, Func Offset: 0x40
	// Line 1121, Address: 0x205aac, Func Offset: 0x4c
	// Line 1122, Address: 0x205ab0, Func Offset: 0x50
	// Line 1124, Address: 0x205ab4, Func Offset: 0x54
	// Line 1125, Address: 0x205abc, Func Offset: 0x5c
	// Line 1128, Address: 0x205ad0, Func Offset: 0x70
	// Line 1130, Address: 0x205ae4, Func Offset: 0x84
	// Line 1128, Address: 0x205ae8, Func Offset: 0x88
	// Line 1131, Address: 0x205aec, Func Offset: 0x8c
	// Line 1132, Address: 0x205af0, Func Offset: 0x90
	// Line 1134, Address: 0x205af4, Func Offset: 0x94
	// Line 1135, Address: 0x205afc, Func Offset: 0x9c
	// Line 1136, Address: 0x205b00, Func Offset: 0xa0
	// Func End, Address: 0x205b2c, Func Offset: 0xcc
}

// zNMETiki_PickTikisToAnimate__Fv
// Start address: 0x205b30
void zNMETiki_PickTikisToAnimate()
{
	xCollis* coll;
	xCollis* cend;
	zNMECommon* npc;
	zNMETiki* currOrphan;
	zNMECommon* npc;
	// Line 1037, Address: 0x205b30, Func Offset: 0
	// Line 1040, Address: 0x205b44, Func Offset: 0x14
	// Line 1039, Address: 0x205b48, Func Offset: 0x18
	// Line 1040, Address: 0x205b4c, Func Offset: 0x1c
	// Line 1042, Address: 0x205b64, Func Offset: 0x34
	// Line 1044, Address: 0x205b70, Func Offset: 0x40
	// Line 1043, Address: 0x205b74, Func Offset: 0x44
	// Line 1044, Address: 0x205b88, Func Offset: 0x58
	// Line 1045, Address: 0x205b9c, Func Offset: 0x6c
	// Line 1046, Address: 0x205ba0, Func Offset: 0x70
	// Line 1047, Address: 0x205bb4, Func Offset: 0x84
	// Line 1052, Address: 0x205bc0, Func Offset: 0x90
	// Line 1056, Address: 0x205bd4, Func Offset: 0xa4
	// Line 1057, Address: 0x205bdc, Func Offset: 0xac
	// Line 1060, Address: 0x205bec, Func Offset: 0xbc
	// Line 1061, Address: 0x205bf0, Func Offset: 0xc0
	// Line 1062, Address: 0x205bf4, Func Offset: 0xc4
	// Line 1066, Address: 0x205c08, Func Offset: 0xd8
	// Line 1068, Address: 0x205c0c, Func Offset: 0xdc
	// Line 1071, Address: 0x205c20, Func Offset: 0xf0
	// Line 1073, Address: 0x205c38, Func Offset: 0x108
	// Line 1074, Address: 0x205c3c, Func Offset: 0x10c
	// Line 1076, Address: 0x205c50, Func Offset: 0x120
	// Line 1083, Address: 0x205c60, Func Offset: 0x130
	// Line 1086, Address: 0x205c74, Func Offset: 0x144
	// Line 1089, Address: 0x205c78, Func Offset: 0x148
	// Line 1058, Address: 0x205c84, Func Offset: 0x154
	// Line 1089, Address: 0x205c90, Func Offset: 0x160
	// Line 1084, Address: 0x205c9c, Func Offset: 0x16c
	// Line 1089, Address: 0x205ca4, Func Offset: 0x174
	// Line 1084, Address: 0x205cac, Func Offset: 0x17c
	// Line 1089, Address: 0x205cdc, Func Offset: 0x1ac
	// Line 1084, Address: 0x205ce0, Func Offset: 0x1b0
	// Line 1089, Address: 0x205ce8, Func Offset: 0x1b8
	// Line 1085, Address: 0x205cec, Func Offset: 0x1bc
	// Line 1089, Address: 0x205cf4, Func Offset: 0x1c4
	// Func End, Address: 0x205d00, Func Offset: 0x1d0
}

// TikiFX_Setup_Lovey__Fv
// Start address: 0x205d00
void TikiFX_Setup_Lovey()
{
	int8* nam_texture;
	// Line 841, Address: 0x205d00, Func Offset: 0
	// Line 842, Address: 0x205d04, Func Offset: 0x4
	// Line 841, Address: 0x205d08, Func Offset: 0x8
	// Line 842, Address: 0x205d0c, Func Offset: 0xc
	// Line 853, Address: 0x205d14, Func Offset: 0x14
	// Line 854, Address: 0x205d1c, Func Offset: 0x1c
	// Line 858, Address: 0x205d24, Func Offset: 0x24
	// Line 854, Address: 0x205d28, Func Offset: 0x28
	// Line 858, Address: 0x205d2c, Func Offset: 0x2c
	// Line 855, Address: 0x205d30, Func Offset: 0x30
	// Line 856, Address: 0x205d38, Func Offset: 0x38
	// Line 858, Address: 0x205d48, Func Offset: 0x48
	// Line 860, Address: 0x205d60, Func Offset: 0x60
	// Line 858, Address: 0x205d64, Func Offset: 0x64
	// Line 860, Address: 0x205d68, Func Offset: 0x68
	// Line 858, Address: 0x205d6c, Func Offset: 0x6c
	// Line 860, Address: 0x205d74, Func Offset: 0x74
	// Line 858, Address: 0x205d78, Func Offset: 0x78
	// Line 860, Address: 0x205d7c, Func Offset: 0x7c
	// Line 862, Address: 0x205d8c, Func Offset: 0x8c
	// Line 860, Address: 0x205d90, Func Offset: 0x90
	// Line 867, Address: 0x205d94, Func Offset: 0x94
	// Line 860, Address: 0x205d98, Func Offset: 0x98
	// Line 862, Address: 0x205da4, Func Offset: 0xa4
	// Line 864, Address: 0x205dcc, Func Offset: 0xcc
	// Line 867, Address: 0x205de8, Func Offset: 0xe8
	// Line 864, Address: 0x205dec, Func Offset: 0xec
	// Line 867, Address: 0x205df4, Func Offset: 0xf4
	// Line 864, Address: 0x205df8, Func Offset: 0xf8
	// Line 867, Address: 0x205dfc, Func Offset: 0xfc
	// Line 864, Address: 0x205e00, Func Offset: 0x100
	// Line 867, Address: 0x205e04, Func Offset: 0x104
	// Line 864, Address: 0x205e08, Func Offset: 0x108
	// Line 867, Address: 0x205e0c, Func Offset: 0x10c
	// Line 869, Address: 0x205e1c, Func Offset: 0x11c
	// Line 867, Address: 0x205e20, Func Offset: 0x120
	// Line 869, Address: 0x205e28, Func Offset: 0x128
	// Line 871, Address: 0x205e50, Func Offset: 0x150
	// Line 873, Address: 0x205e78, Func Offset: 0x178
	// Line 876, Address: 0x205ea0, Func Offset: 0x1a0
	// Line 878, Address: 0x205ec8, Func Offset: 0x1c8
	// Line 880, Address: 0x205ef0, Func Offset: 0x1f0
	// Line 882, Address: 0x205f18, Func Offset: 0x218
	// Line 886, Address: 0x205f3c, Func Offset: 0x23c
	// Line 882, Address: 0x205f40, Func Offset: 0x240
	// Line 887, Address: 0x205f44, Func Offset: 0x244
	// Line 893, Address: 0x205f68, Func Offset: 0x268
	// Func End, Address: 0x205f74, Func Offset: 0x274
}

// TikiFX_Setup_Thunder__Fv
// Start address: 0x205f80
void TikiFX_Setup_Thunder()
{
	// Line 777, Address: 0x205f80, Func Offset: 0
	// Line 778, Address: 0x205f84, Func Offset: 0x4
	// Line 777, Address: 0x205f88, Func Offset: 0x8
	// Line 778, Address: 0x205f8c, Func Offset: 0xc
	// Line 779, Address: 0x205f94, Func Offset: 0x14
	// Line 782, Address: 0x205f9c, Func Offset: 0x1c
	// Line 798, Address: 0x205fa8, Func Offset: 0x28
	// Line 793, Address: 0x205fac, Func Offset: 0x2c
	// Line 800, Address: 0x205fb0, Func Offset: 0x30
	// Line 793, Address: 0x205fb4, Func Offset: 0x34
	// Line 794, Address: 0x205fb8, Func Offset: 0x38
	// Line 795, Address: 0x205fc8, Func Offset: 0x48
	// Line 796, Address: 0x205fd0, Func Offset: 0x50
	// Line 798, Address: 0x205fe0, Func Offset: 0x60
	// Line 800, Address: 0x205ff8, Func Offset: 0x78
	// Line 798, Address: 0x205ffc, Func Offset: 0x7c
	// Line 800, Address: 0x206004, Func Offset: 0x84
	// Line 798, Address: 0x206008, Func Offset: 0x88
	// Line 800, Address: 0x20600c, Func Offset: 0x8c
	// Line 798, Address: 0x206010, Func Offset: 0x90
	// Line 800, Address: 0x206014, Func Offset: 0x94
	// Line 798, Address: 0x206018, Func Offset: 0x98
	// Line 802, Address: 0x20601c, Func Offset: 0x9c
	// Line 800, Address: 0x206020, Func Offset: 0xa0
	// Line 802, Address: 0x20602c, Func Offset: 0xac
	// Line 800, Address: 0x206030, Func Offset: 0xb0
	// Line 802, Address: 0x206034, Func Offset: 0xb4
	// Line 800, Address: 0x206038, Func Offset: 0xb8
	// Line 802, Address: 0x20603c, Func Offset: 0xbc
	// Line 800, Address: 0x206040, Func Offset: 0xc0
	// Line 802, Address: 0x206044, Func Offset: 0xc4
	// Line 804, Address: 0x206064, Func Offset: 0xe4
	// Line 807, Address: 0x206084, Func Offset: 0x104
	// Line 804, Address: 0x206088, Func Offset: 0x108
	// Line 822, Address: 0x20608c, Func Offset: 0x10c
	// Line 804, Address: 0x206090, Func Offset: 0x110
	// Line 807, Address: 0x206094, Func Offset: 0x114
	// Line 809, Address: 0x2060bc, Func Offset: 0x13c
	// Line 811, Address: 0x2060e4, Func Offset: 0x164
	// Line 822, Address: 0x2060f8, Func Offset: 0x178
	// Line 811, Address: 0x2060fc, Func Offset: 0x17c
	// Line 822, Address: 0x206104, Func Offset: 0x184
	// Line 811, Address: 0x206108, Func Offset: 0x188
	// Line 822, Address: 0x20610c, Func Offset: 0x18c
	// Line 811, Address: 0x206110, Func Offset: 0x190
	// Line 822, Address: 0x206114, Func Offset: 0x194
	// Line 811, Address: 0x206118, Func Offset: 0x198
	// Line 822, Address: 0x20611c, Func Offset: 0x19c
	// Line 813, Address: 0x206120, Func Offset: 0x1a0
	// Line 816, Address: 0x206148, Func Offset: 0x1c8
	// Line 818, Address: 0x206170, Func Offset: 0x1f0
	// Line 820, Address: 0x206198, Func Offset: 0x218
	// Line 822, Address: 0x2061c0, Func Offset: 0x240
	// Line 834, Address: 0x2061d0, Func Offset: 0x250
	// Line 835, Address: 0x2061e8, Func Offset: 0x268
	// Line 837, Address: 0x206200, Func Offset: 0x280
	// Line 834, Address: 0x20621c, Func Offset: 0x29c
	// Line 837, Address: 0x206224, Func Offset: 0x2a4
	// Line 835, Address: 0x206234, Func Offset: 0x2b4
	// Line 837, Address: 0x206238, Func Offset: 0x2b8
	// Line 838, Address: 0x206248, Func Offset: 0x2c8
	// Func End, Address: 0x206250, Func Offset: 0x2d0
}

// zNMETiki_InitStacking__FP6zScene
// Start address: 0x206250
void zNMETiki_InitStacking(zScene* zsc)
{
	int32 i;
	zNMECommon* npc;
	en_npctyp type;
	zNMETiki* tiki;
	float32 dh;
	// Line 737, Address: 0x206250, Func Offset: 0
	// Line 739, Address: 0x20626c, Func Offset: 0x1c
	// Line 740, Address: 0x206280, Func Offset: 0x30
	// Line 742, Address: 0x20628c, Func Offset: 0x3c
	// Line 743, Address: 0x206290, Func Offset: 0x40
	// Line 746, Address: 0x2062a4, Func Offset: 0x54
	// Line 755, Address: 0x2062ac, Func Offset: 0x5c
	// Line 756, Address: 0x2062b0, Func Offset: 0x60
	// Line 758, Address: 0x2062c0, Func Offset: 0x70
	// Line 761, Address: 0x2062d8, Func Offset: 0x88
	// Line 747, Address: 0x2062e0, Func Offset: 0x90
	// Line 761, Address: 0x2062e4, Func Offset: 0x94
	// Line 749, Address: 0x206300, Func Offset: 0xb0
	// Line 750, Address: 0x206304, Func Offset: 0xb4
	// Line 761, Address: 0x206308, Func Offset: 0xb8
	// Line 751, Address: 0x206310, Func Offset: 0xc0
	// Line 761, Address: 0x206314, Func Offset: 0xc4
	// Line 752, Address: 0x20631c, Func Offset: 0xcc
	// Line 761, Address: 0x206320, Func Offset: 0xd0
	// Line 753, Address: 0x206330, Func Offset: 0xe0
	// Line 761, Address: 0x206340, Func Offset: 0xf0
	// Func End, Address: 0x20635c, Func Offset: 0x10c
}

// ZNME_Tiki_Startup__Fv
// Start address: 0x206360
void ZNME_Tiki_Startup()
{
	int32 i;
	// Line 718, Address: 0x206360, Func Offset: 0
	// Line 721, Address: 0x206370, Func Offset: 0x10
	// Line 718, Address: 0x206374, Func Offset: 0x14
	// Line 721, Address: 0x206378, Func Offset: 0x18
	// Line 722, Address: 0x206380, Func Offset: 0x20
	// Line 723, Address: 0x206388, Func Offset: 0x28
	// Line 722, Address: 0x20638c, Func Offset: 0x2c
	// Line 723, Address: 0x206390, Func Offset: 0x30
	// Line 722, Address: 0x206394, Func Offset: 0x34
	// Line 723, Address: 0x206398, Func Offset: 0x38
	// Line 730, Address: 0x2063a0, Func Offset: 0x40
	// Func End, Address: 0x2063b8, Func Offset: 0x58
}

