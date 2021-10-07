



int32 GoalHandleMail();
int32 GoalHandleMail();
float32 CalcEndPoint(zNMECritter* npc, xVec3* pos_end, xVec3* dir_aim);
void RibbonUpdate(zNMECritter* npc);
int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
int32 Exit();
int32 Enter();
void CritMoveSpline(float32 dt);
void CritMoveNormal(float32 dt);
int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
int32 Enter();
int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
void Init(xEntAsset* entass);
zMovePoint* MvptFirstFollow();
void ScenePostInit();
void ScenePrepare();

// GoalHandleMail__16zNMEGoalCritDeadFP6NMEMsg
// Start address: 0x235ea0
int32 zNMEGoalCritDead::GoalHandleMail()
{
	// Line 855, Address: 0x235ea0, Func Offset: 0
	// Func End, Address: 0x235ea8, Func Offset: 0x8
}

// GoalHandleMail__17zNMEGoalCritDyingFP6NMEMsg
// Start address: 0x235eb0
int32 zNMEGoalCritDying::GoalHandleMail()
{
	// Line 816, Address: 0x235eb0, Func Offset: 0
	// Func End, Address: 0x235eb8, Func Offset: 0x8
}

// CalcEndPoint__17zNMEGoalCritDyingFP11zNMECritterP5xVec3PC5xVec3
// Start address: 0x235ec0
float32 zNMEGoalCritDying::CalcEndPoint(zNMECritter* npc, xVec3* pos_end, xVec3* dir_aim)
{
	float32 dst_toEndPnt;
	xVec3 vec;
	xVec3 pos;
	xCollis colrec;
	int32 rc;
	// Line 768, Address: 0x235ec0, Func Offset: 0
	// Line 772, Address: 0x235ec4, Func Offset: 0x4
	// Line 768, Address: 0x235ecc, Func Offset: 0xc
	// Line 772, Address: 0x235ed0, Func Offset: 0x10
	// Line 768, Address: 0x235ed4, Func Offset: 0x14
	// Line 772, Address: 0x235edc, Func Offset: 0x1c
	// Line 768, Address: 0x235ee4, Func Offset: 0x24
	// Line 772, Address: 0x235ef0, Func Offset: 0x30
	// Line 773, Address: 0x235efc, Func Offset: 0x3c
	// Line 772, Address: 0x235f04, Func Offset: 0x44
	// Line 773, Address: 0x235f0c, Func Offset: 0x4c
	// Line 776, Address: 0x235f1c, Func Offset: 0x5c
	// Line 772, Address: 0x235f20, Func Offset: 0x60
	// Line 776, Address: 0x235f24, Func Offset: 0x64
	// Line 772, Address: 0x235f28, Func Offset: 0x68
	// Line 773, Address: 0x235f2c, Func Offset: 0x6c
	// Line 772, Address: 0x235f30, Func Offset: 0x70
	// Line 773, Address: 0x235f40, Func Offset: 0x80
	// Line 776, Address: 0x235f44, Func Offset: 0x84
	// Line 772, Address: 0x235f48, Func Offset: 0x88
	// Line 773, Address: 0x235f60, Func Offset: 0xa0
	// Line 772, Address: 0x235f64, Func Offset: 0xa4
	// Line 773, Address: 0x235f70, Func Offset: 0xb0
	// Line 772, Address: 0x235f74, Func Offset: 0xb4
	// Line 773, Address: 0x235f78, Func Offset: 0xb8
	// Line 772, Address: 0x235f80, Func Offset: 0xc0
	// Line 773, Address: 0x235f88, Func Offset: 0xc8
	// Line 772, Address: 0x235f90, Func Offset: 0xd0
	// Line 773, Address: 0x235f94, Func Offset: 0xd4
	// Line 776, Address: 0x235fd8, Func Offset: 0x118
	// Line 778, Address: 0x235fe0, Func Offset: 0x120
	// Line 777, Address: 0x235fe4, Func Offset: 0x124
	// Line 778, Address: 0x235fe8, Func Offset: 0x128
	// Line 777, Address: 0x235fec, Func Offset: 0x12c
	// Line 778, Address: 0x235ff0, Func Offset: 0x130
	// Line 779, Address: 0x23600c, Func Offset: 0x14c
	// Line 781, Address: 0x236014, Func Offset: 0x154
	// Line 782, Address: 0x236018, Func Offset: 0x158
	// Line 781, Address: 0x23601c, Func Offset: 0x15c
	// Line 782, Address: 0x236024, Func Offset: 0x164
	// Line 781, Address: 0x236028, Func Offset: 0x168
	// Line 783, Address: 0x236030, Func Offset: 0x170
	// Line 788, Address: 0x236038, Func Offset: 0x178
	// Line 787, Address: 0x236040, Func Offset: 0x180
	// Line 788, Address: 0x236044, Func Offset: 0x184
	// Line 800, Address: 0x2360c0, Func Offset: 0x200
	// Func End, Address: 0x2360d8, Func Offset: 0x218
}

// RibbonUpdate__17zNMEGoalCritDyingFP11zNMECritterf
// Start address: 0x2360e0
void zNMEGoalCritDying::RibbonUpdate(zNMECritter* npc)
{
	RibData* ribhelp;
	xVec3 a;
	xVec3 b;
	xVec3 dir_emit;
	float32 dst;
	// Line 702, Address: 0x2360e0, Func Offset: 0
	// Line 703, Address: 0x236100, Func Offset: 0x20
	// Line 706, Address: 0x23610c, Func Offset: 0x2c
	// Line 707, Address: 0x236130, Func Offset: 0x50
	// Line 710, Address: 0x236144, Func Offset: 0x64
	// Line 712, Address: 0x236148, Func Offset: 0x68
	// Line 720, Address: 0x236150, Func Offset: 0x70
	// Line 712, Address: 0x236154, Func Offset: 0x74
	// Line 720, Address: 0x23615c, Func Offset: 0x7c
	// Line 721, Address: 0x236168, Func Offset: 0x88
	// Line 728, Address: 0x23623c, Func Offset: 0x15c
	// Line 729, Address: 0x236318, Func Offset: 0x238
	// Line 730, Address: 0x2363b8, Func Offset: 0x2d8
	// Line 729, Address: 0x2363bc, Func Offset: 0x2dc
	// Line 730, Address: 0x2363d0, Func Offset: 0x2f0
	// Line 729, Address: 0x2363dc, Func Offset: 0x2fc
	// Line 730, Address: 0x2363e0, Func Offset: 0x300
	// Line 731, Address: 0x2363e8, Func Offset: 0x308
	// Line 730, Address: 0x2363ec, Func Offset: 0x30c
	// Line 729, Address: 0x2363f0, Func Offset: 0x310
	// Line 730, Address: 0x2363f4, Func Offset: 0x314
	// Line 729, Address: 0x2363f8, Func Offset: 0x318
	// Line 730, Address: 0x236418, Func Offset: 0x338
	// Line 729, Address: 0x23641c, Func Offset: 0x33c
	// Line 730, Address: 0x236424, Func Offset: 0x344
	// Line 729, Address: 0x236434, Func Offset: 0x354
	// Line 730, Address: 0x23643c, Func Offset: 0x35c
	// Line 731, Address: 0x23648c, Func Offset: 0x3ac
	// Line 735, Address: 0x236494, Func Offset: 0x3b4
	// Line 738, Address: 0x2364b4, Func Offset: 0x3d4
	// Func End, Address: 0x2364d4, Func Offset: 0x3f4
}

// Process__17zNMEGoalCritDyingFP11en_trantypefPv
// Start address: 0x2364e0
int32 zNMEGoalCritDying::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	int32 nextgoal;
	zNMECritter* npc;
	float32 rat_life;
	xVec3 pos;
	int32 doalpha;
	// Line 523, Address: 0x2364e0, Func Offset: 0
	// Line 527, Address: 0x2364e8, Func Offset: 0x8
	// Line 523, Address: 0x2364ec, Func Offset: 0xc
	// Line 524, Address: 0x236514, Func Offset: 0x34
	// Line 525, Address: 0x236518, Func Offset: 0x38
	// Line 527, Address: 0x236524, Func Offset: 0x44
	// Line 529, Address: 0x2365b4, Func Offset: 0xd4
	// Line 532, Address: 0x236614, Func Offset: 0x134
	// Line 529, Address: 0x236618, Func Offset: 0x138
	// Line 532, Address: 0x23661c, Func Offset: 0x13c
	// Line 536, Address: 0x236680, Func Offset: 0x1a0
	// Line 537, Address: 0x236798, Func Offset: 0x2b8
	// Line 536, Address: 0x23679c, Func Offset: 0x2bc
	// Line 537, Address: 0x2367a0, Func Offset: 0x2c0
	// Line 536, Address: 0x2367a4, Func Offset: 0x2c4
	// Line 537, Address: 0x2367e0, Func Offset: 0x300
	// Line 542, Address: 0x2367e8, Func Offset: 0x308
	// Line 546, Address: 0x2367f8, Func Offset: 0x318
	// Line 547, Address: 0x236808, Func Offset: 0x328
	// Line 548, Address: 0x23680c, Func Offset: 0x32c
	// Line 549, Address: 0x236814, Func Offset: 0x334
	// Line 552, Address: 0x236844, Func Offset: 0x364
	// Line 553, Address: 0x236868, Func Offset: 0x388
	// Line 556, Address: 0x23686c, Func Offset: 0x38c
	// Line 553, Address: 0x236870, Func Offset: 0x390
	// Line 556, Address: 0x236874, Func Offset: 0x394
	// Line 554, Address: 0x236878, Func Offset: 0x398
	// Line 553, Address: 0x23687c, Func Offset: 0x39c
	// Line 554, Address: 0x236880, Func Offset: 0x3a0
	// Line 556, Address: 0x236884, Func Offset: 0x3a4
	// Line 557, Address: 0x236898, Func Offset: 0x3b8
	// Line 560, Address: 0x2368a4, Func Offset: 0x3c4
	// Line 563, Address: 0x2368cc, Func Offset: 0x3ec
	// Line 564, Address: 0x236928, Func Offset: 0x448
	// Func End, Address: 0x236950, Func Offset: 0x470
}

// Exit__17zNMEGoalCritDyingFfPv
// Start address: 0x236950
int32 zNMEGoalCritDying::Exit()
{
	// Line 513, Address: 0x236950, Func Offset: 0
	// Line 515, Address: 0x236954, Func Offset: 0x4
	// Line 513, Address: 0x236958, Func Offset: 0x8
	// Line 515, Address: 0x236960, Func Offset: 0x10
	// Line 517, Address: 0x236974, Func Offset: 0x24
	// Line 519, Address: 0x236980, Func Offset: 0x30
	// Line 520, Address: 0x236998, Func Offset: 0x48
	// Func End, Address: 0x2369a8, Func Offset: 0x58
}

// Enter__17zNMEGoalCritDyingFfPv
// Start address: 0x2369b0
int32 zNMEGoalCritDying::Enter()
{
	zNMECritter* npc;
	xVec3 dir_aim;
	// Line 492, Address: 0x2369b0, Func Offset: 0
	// Line 493, Address: 0x2369c8, Func Offset: 0x18
	// Line 497, Address: 0x2369cc, Func Offset: 0x1c
	// Line 493, Address: 0x2369d0, Func Offset: 0x20
	// Line 497, Address: 0x2369d4, Func Offset: 0x24
	// Line 498, Address: 0x236ac4, Func Offset: 0x114
	// Line 499, Address: 0x236ad8, Func Offset: 0x128
	// Line 502, Address: 0x236adc, Func Offset: 0x12c
	// Line 505, Address: 0x236ae0, Func Offset: 0x130
	// Line 499, Address: 0x236ae4, Func Offset: 0x134
	// Line 505, Address: 0x236ae8, Func Offset: 0x138
	// Line 499, Address: 0x236aec, Func Offset: 0x13c
	// Line 502, Address: 0x236b04, Func Offset: 0x154
	// Line 505, Address: 0x236b08, Func Offset: 0x158
	// Line 509, Address: 0x236be0, Func Offset: 0x230
	// Line 497, Address: 0x236c3c, Func Offset: 0x28c
	// Line 509, Address: 0x236c40, Func Offset: 0x290
	// Line 497, Address: 0x236c4c, Func Offset: 0x29c
	// Line 509, Address: 0x236c50, Func Offset: 0x2a0
	// Line 497, Address: 0x236c5c, Func Offset: 0x2ac
	// Line 509, Address: 0x236c60, Func Offset: 0x2b0
	// Line 497, Address: 0x236c90, Func Offset: 0x2e0
	// Line 509, Address: 0x236c98, Func Offset: 0x2e8
	// Line 505, Address: 0x236ca8, Func Offset: 0x2f8
	// Line 509, Address: 0x236cbc, Func Offset: 0x30c
	// Line 505, Address: 0x236cc0, Func Offset: 0x310
	// Line 509, Address: 0x236cc4, Func Offset: 0x314
	// Line 505, Address: 0x236cc8, Func Offset: 0x318
	// Line 509, Address: 0x236cd4, Func Offset: 0x324
	// Line 510, Address: 0x236d28, Func Offset: 0x378
	// Func End, Address: 0x236d44, Func Offset: 0x394
}

// CritMoveSpline__18zNMEGoalCritPatrolFf
// Start address: 0x236d50
void zNMEGoalCritPatrol::CritMoveSpline(float32 dt)
{
	zNMECommon* npc;
	zNMENavNet* navnet;
	xSpline3* spl;
	float32 newdist;
	xVec3 vec;
	xVec3 tgt;
	float32 u;
	xVec3 dir;
	float32 qdot;
	// Line 393, Address: 0x236d50, Func Offset: 0
	// Line 394, Address: 0x236d78, Func Offset: 0x28
	// Line 395, Address: 0x236d80, Func Offset: 0x30
	// Line 396, Address: 0x236d84, Func Offset: 0x34
	// Line 399, Address: 0x236d88, Func Offset: 0x38
	// Line 409, Address: 0x236d90, Func Offset: 0x40
	// Line 411, Address: 0x236e74, Func Offset: 0x124
	// Line 412, Address: 0x236e98, Func Offset: 0x148
	// Line 420, Address: 0x236ea0, Func Offset: 0x150
	// Line 430, Address: 0x236ea8, Func Offset: 0x158
	// Line 420, Address: 0x236eac, Func Offset: 0x15c
	// Line 430, Address: 0x236ebc, Func Offset: 0x16c
	// Line 432, Address: 0x236ec8, Func Offset: 0x178
	// Line 433, Address: 0x236ecc, Func Offset: 0x17c
	// Line 432, Address: 0x236ed0, Func Offset: 0x180
	// Line 433, Address: 0x236ed4, Func Offset: 0x184
	// Line 432, Address: 0x236ed8, Func Offset: 0x188
	// Line 433, Address: 0x236eec, Func Offset: 0x19c
	// Line 434, Address: 0x236ef0, Func Offset: 0x1a0
	// Line 435, Address: 0x236efc, Func Offset: 0x1ac
	// Line 440, Address: 0x236f0c, Func Offset: 0x1bc
	// Line 442, Address: 0x236fac, Func Offset: 0x25c
	// Line 401, Address: 0x236fbc, Func Offset: 0x26c
	// Line 442, Address: 0x236fc4, Func Offset: 0x274
	// Line 440, Address: 0x236fd8, Func Offset: 0x288
	// Line 442, Address: 0x236fdc, Func Offset: 0x28c
	// Line 440, Address: 0x236fe0, Func Offset: 0x290
	// Line 442, Address: 0x236fe8, Func Offset: 0x298
	// Line 440, Address: 0x237008, Func Offset: 0x2b8
	// Line 442, Address: 0x23700c, Func Offset: 0x2bc
	// Line 440, Address: 0x237014, Func Offset: 0x2c4
	// Line 442, Address: 0x23701c, Func Offset: 0x2cc
	// Line 440, Address: 0x23702c, Func Offset: 0x2dc
	// Line 449, Address: 0x23703c, Func Offset: 0x2ec
	// Line 453, Address: 0x237054, Func Offset: 0x304
	// Line 457, Address: 0x23706c, Func Offset: 0x31c
	// Line 453, Address: 0x237070, Func Offset: 0x320
	// Line 457, Address: 0x237074, Func Offset: 0x324
	// Line 453, Address: 0x237078, Func Offset: 0x328
	// Line 457, Address: 0x23707c, Func Offset: 0x32c
	// Line 458, Address: 0x237098, Func Offset: 0x348
	// Line 459, Address: 0x2370c8, Func Offset: 0x378
	// Line 460, Address: 0x2370dc, Func Offset: 0x38c
	// Line 464, Address: 0x2370ec, Func Offset: 0x39c
	// Line 469, Address: 0x237104, Func Offset: 0x3b4
	// Line 470, Address: 0x237124, Func Offset: 0x3d4
	// Line 469, Address: 0x237128, Func Offset: 0x3d8
	// Line 470, Address: 0x23712c, Func Offset: 0x3dc
	// Line 471, Address: 0x237140, Func Offset: 0x3f0
	// Line 470, Address: 0x237144, Func Offset: 0x3f4
	// Line 471, Address: 0x237148, Func Offset: 0x3f8
	// Line 472, Address: 0x237158, Func Offset: 0x408
	// Line 473, Address: 0x23716c, Func Offset: 0x41c
	// Line 472, Address: 0x237170, Func Offset: 0x420
	// Line 473, Address: 0x237174, Func Offset: 0x424
	// Line 476, Address: 0x237184, Func Offset: 0x434
	// Line 480, Address: 0x237188, Func Offset: 0x438
	// Func End, Address: 0x2371b0, Func Offset: 0x460
}

// CritMoveNormal__18zNMEGoalCritPatrolFf
// Start address: 0x2371b0
void zNMEGoalCritPatrol::CritMoveNormal(float32 dt)
{
	zNMECritter* npc;
	xVec3 dir_dest;
	xVec3 delta;
	// Line 333, Address: 0x2371b0, Func Offset: 0
	// Line 349, Address: 0x2371c8, Func Offset: 0x18
	// Line 333, Address: 0x2371cc, Func Offset: 0x1c
	// Line 349, Address: 0x2371d0, Func Offset: 0x20
	// Line 334, Address: 0x2371d4, Func Offset: 0x24
	// Line 348, Address: 0x2371dc, Func Offset: 0x2c
	// Line 349, Address: 0x2371e0, Func Offset: 0x30
	// Line 348, Address: 0x2371e4, Func Offset: 0x34
	// Line 349, Address: 0x2371e8, Func Offset: 0x38
	// Line 348, Address: 0x2371ec, Func Offset: 0x3c
	// Line 349, Address: 0x2371f0, Func Offset: 0x40
	// Line 348, Address: 0x2371f4, Func Offset: 0x44
	// Line 349, Address: 0x237200, Func Offset: 0x50
	// Line 350, Address: 0x237220, Func Offset: 0x70
	// Line 354, Address: 0x237234, Func Offset: 0x84
	// Line 356, Address: 0x237268, Func Offset: 0xb8
	// Line 357, Address: 0x237280, Func Offset: 0xd0
	// Line 362, Address: 0x23728c, Func Offset: 0xdc
	// Line 363, Address: 0x237298, Func Offset: 0xe8
	// Line 364, Address: 0x2372a4, Func Offset: 0xf4
	// Line 370, Address: 0x2372b4, Func Offset: 0x104
	// Line 388, Address: 0x2373b8, Func Offset: 0x208
	// Line 376, Address: 0x2373d8, Func Offset: 0x228
	// Line 383, Address: 0x2373dc, Func Offset: 0x22c
	// Line 376, Address: 0x2373e0, Func Offset: 0x230
	// Line 383, Address: 0x2373e4, Func Offset: 0x234
	// Line 388, Address: 0x2373ec, Func Offset: 0x23c
	// Line 376, Address: 0x2373f0, Func Offset: 0x240
	// Line 388, Address: 0x2373f8, Func Offset: 0x248
	// Line 376, Address: 0x237404, Func Offset: 0x254
	// Line 388, Address: 0x23740c, Func Offset: 0x25c
	// Line 384, Address: 0x237464, Func Offset: 0x2b4
	// Line 388, Address: 0x237468, Func Offset: 0x2b8
	// Line 384, Address: 0x237470, Func Offset: 0x2c0
	// Line 388, Address: 0x237474, Func Offset: 0x2c4
	// Line 384, Address: 0x23747c, Func Offset: 0x2cc
	// Line 388, Address: 0x237480, Func Offset: 0x2d0
	// Line 385, Address: 0x2374a8, Func Offset: 0x2f8
	// Line 388, Address: 0x2374ac, Func Offset: 0x2fc
	// Line 385, Address: 0x2374c4, Func Offset: 0x314
	// Line 388, Address: 0x2374c8, Func Offset: 0x318
	// Line 385, Address: 0x2374d8, Func Offset: 0x328
	// Line 389, Address: 0x2374e4, Func Offset: 0x334
	// Func End, Address: 0x237504, Func Offset: 0x354
}

// Process__18zNMEGoalCritPatrolFP11en_trantypefPv
// Start address: 0x237510
int32 zNMEGoalCritPatrol::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	zNMECritter* npc;
	zNMENavNet* navnet;
	int32 nextgoal;
	// Line 261, Address: 0x237510, Func Offset: 0
	// Line 262, Address: 0x237544, Func Offset: 0x34
	// Line 263, Address: 0x23754c, Func Offset: 0x3c
	// Line 264, Address: 0x237550, Func Offset: 0x40
	// Line 267, Address: 0x237554, Func Offset: 0x44
	// Line 268, Address: 0x237568, Func Offset: 0x58
	// Line 269, Address: 0x237590, Func Offset: 0x80
	// Line 270, Address: 0x2375b4, Func Offset: 0xa4
	// Line 271, Address: 0x2375e4, Func Offset: 0xd4
	// Line 276, Address: 0x2375f4, Func Offset: 0xe4
	// Line 277, Address: 0x237604, Func Offset: 0xf4
	// Line 278, Address: 0x237680, Func Offset: 0x170
	// Line 280, Address: 0x237688, Func Offset: 0x178
	// Line 284, Address: 0x237704, Func Offset: 0x1f4
	// Line 285, Address: 0x237714, Func Offset: 0x204
	// Line 288, Address: 0x237724, Func Offset: 0x214
	// Line 289, Address: 0x237730, Func Offset: 0x220
	// Line 290, Address: 0x23773c, Func Offset: 0x22c
	// Line 270, Address: 0x237744, Func Offset: 0x234
	// Line 290, Address: 0x237748, Func Offset: 0x238
	// Line 270, Address: 0x237758, Func Offset: 0x248
	// Line 290, Address: 0x237768, Func Offset: 0x258
	// Line 301, Address: 0x237770, Func Offset: 0x260
	// Line 297, Address: 0x2377d0, Func Offset: 0x2c0
	// Line 294, Address: 0x2377d4, Func Offset: 0x2c4
	// Line 297, Address: 0x2377d8, Func Offset: 0x2c8
	// Line 295, Address: 0x2377dc, Func Offset: 0x2cc
	// Line 301, Address: 0x2377e0, Func Offset: 0x2d0
	// Line 297, Address: 0x2377e8, Func Offset: 0x2d8
	// Line 301, Address: 0x2377ec, Func Offset: 0x2dc
	// Line 302, Address: 0x237800, Func Offset: 0x2f0
	// Func End, Address: 0x23782c, Func Offset: 0x31c
}

// Enter__18zNMEGoalCritPatrolFfPv
// Start address: 0x237830
int32 zNMEGoalCritPatrol::Enter()
{
	// Line 254, Address: 0x237830, Func Offset: 0
	// Line 255, Address: 0x237834, Func Offset: 0x4
	// Line 254, Address: 0x237838, Func Offset: 0x8
	// Line 257, Address: 0x23783c, Func Offset: 0xc
	// Line 254, Address: 0x237840, Func Offset: 0x10
	// Line 255, Address: 0x23784c, Func Offset: 0x1c
	// Line 256, Address: 0x237850, Func Offset: 0x20
	// Line 257, Address: 0x237854, Func Offset: 0x24
	// Line 258, Address: 0x2378d8, Func Offset: 0xa8
	// Func End, Address: 0x2378f0, Func Offset: 0xc0
}

// Process__16zNMEGoalCritIdleFP11en_trantypefPv
// Start address: 0x2378f0
int32 zNMEGoalCritIdle::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	zNMECritter* npc;
	zNMENavNet* navnet;
	int32 nextgoal;
	// Line 230, Address: 0x2378f0, Func Offset: 0
	// Line 231, Address: 0x237900, Func Offset: 0x10
	// Line 232, Address: 0x23790c, Func Offset: 0x1c
	// Line 237, Address: 0x237910, Func Offset: 0x20
	// Line 238, Address: 0x237924, Func Offset: 0x34
	// Line 241, Address: 0x237928, Func Offset: 0x38
	// Line 238, Address: 0x23792c, Func Offset: 0x3c
	// Line 239, Address: 0x237930, Func Offset: 0x40
	// Line 238, Address: 0x237934, Func Offset: 0x44
	// Line 239, Address: 0x237938, Func Offset: 0x48
	// Line 241, Address: 0x23793c, Func Offset: 0x4c
	// Line 242, Address: 0x23794c, Func Offset: 0x5c
	// Line 245, Address: 0x237954, Func Offset: 0x64
	// Line 246, Address: 0x2379a8, Func Offset: 0xb8
	// Func End, Address: 0x2379b8, Func Offset: 0xc8
}

// Init__11zNMECritterFP9xEntAsset
// Start address: 0x2379c0
void zNMECritter::Init(xEntAsset* entass)
{
	// Line 208, Address: 0x2379c0, Func Offset: 0
	// Line 210, Address: 0x2379d4, Func Offset: 0x14
	// Line 212, Address: 0x2379e8, Func Offset: 0x28
	// Func End, Address: 0x2379fc, Func Offset: 0x3c
}

// MvptFirstFollow__11zNMECritterFv
// Start address: 0x237a00
zMovePoint* zNMECritter::MvptFirstFollow()
{
	zMovePoint* nav;
	// Line 194, Address: 0x237a00, Func Offset: 0
	// Line 197, Address: 0x237a10, Func Offset: 0x10
	// Line 198, Address: 0x237a18, Func Offset: 0x18
	// Line 201, Address: 0x237a20, Func Offset: 0x20
	// Line 205, Address: 0x237a28, Func Offset: 0x28
	// Func End, Address: 0x237a34, Func Offset: 0x34
}

// ScenePostInit__11zMODCritterFv
// Start address: 0x237aa0
void zMODCritter::ScenePostInit()
{
	// Line 104, Address: 0x237aa0, Func Offset: 0
	// Line 105, Address: 0x237ab0, Func Offset: 0x10
	// Line 106, Address: 0x237af4, Func Offset: 0x54
	// Line 107, Address: 0x237b34, Func Offset: 0x94
	// Line 108, Address: 0x237b4c, Func Offset: 0xac
	// Line 110, Address: 0x237b68, Func Offset: 0xc8
	// Line 108, Address: 0x237b74, Func Offset: 0xd4
	// Line 110, Address: 0x237b7c, Func Offset: 0xdc
	// Line 108, Address: 0x237b84, Func Offset: 0xe4
	// Line 110, Address: 0x237b88, Func Offset: 0xe8
	// Line 111, Address: 0x237b9c, Func Offset: 0xfc
	// Func End, Address: 0x237ba8, Func Offset: 0x108
}

// ScenePrepare__11zMODCritterFv
// Start address: 0x237bb0
void zMODCritter::ScenePrepare()
{
	// Line 101, Address: 0x237bb0, Func Offset: 0
	// Func End, Address: 0x237bb8, Func Offset: 0x8
}

