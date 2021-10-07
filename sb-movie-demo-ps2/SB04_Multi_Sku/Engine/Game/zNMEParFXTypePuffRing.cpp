



int32 PuffSysUpdate(uint8* mem, int32 count, ptank_pool& apool, float32 dt);
void PuffSysInit_Glow(NPARMgmt* mgmt, xParticleBatchSystem* pbs);
void PuffSysInit_Hot(NPARMgmt* mgmt, xParticleBatchSystem* pbs);
void PuffSysInit_Dull(NPARMgmt* mgmt, xParticleBatchSystem* pbs);
void PuffSysTweaks(int8* prefix_root);
void Footstroke(xVec3* pos, xVec3* dir_emit);
void RoundRing(xVec3* pos, float32 radius, xVec3* vel_drift);
void ImpactRing(xVec3* pos, xVec3* vel_drift);
void PropWash(xVec3* pos, xVec3* vel_drift);

// PuffSysUpdate__8PuffRingFPUciR10ptank_poolfPv
// Start address: 0x273470
int32 PuffSysUpdate(uint8* mem, int32 count, ptank_pool& apool, float32 dt)
{
	ptank_pool__pos_color_size_rot_uv2* pool;
	PuffParticle* par;
	PuffParticle* end;
	xVec3 pos_plyr;
	PuffEmitter* emitter;
	float32 tym_life;
	float32 rat_rev;
	float32 rat;
	float32 fac_keep;
	float32 beans;
	float32 arch;
	float32 dim;
	float32 ds2_plyr;
	// Line 629, Address: 0x273470, Func Offset: 0
	// Line 634, Address: 0x273474, Func Offset: 0x4
	// Line 629, Address: 0x273478, Func Offset: 0x8
	// Line 630, Address: 0x27349c, Func Offset: 0x2c
	// Line 629, Address: 0x2734a0, Func Offset: 0x30
	// Line 633, Address: 0x2734a4, Func Offset: 0x34
	// Line 629, Address: 0x2734a8, Func Offset: 0x38
	// Line 634, Address: 0x2734ac, Func Offset: 0x3c
	// Line 629, Address: 0x2734b0, Func Offset: 0x40
	// Line 634, Address: 0x2734c8, Func Offset: 0x58
	// Line 635, Address: 0x2734d4, Func Offset: 0x64
	// Line 637, Address: 0x2734e8, Func Offset: 0x78
	// Line 646, Address: 0x273520, Func Offset: 0xb0
	// Line 639, Address: 0x273524, Func Offset: 0xb4
	// Line 646, Address: 0x273528, Func Offset: 0xb8
	// Line 650, Address: 0x27352c, Func Offset: 0xbc
	// Line 653, Address: 0x27354c, Func Offset: 0xdc
	// Line 654, Address: 0x273550, Func Offset: 0xe0
	// Line 655, Address: 0x2735fc, Func Offset: 0x18c
	// Line 660, Address: 0x273604, Func Offset: 0x194
	// Line 662, Address: 0x273620, Func Offset: 0x1b0
	// Line 670, Address: 0x273624, Func Offset: 0x1b4
	// Line 662, Address: 0x273628, Func Offset: 0x1b8
	// Line 670, Address: 0x27362c, Func Offset: 0x1bc
	// Line 662, Address: 0x273650, Func Offset: 0x1e0
	// Line 670, Address: 0x273654, Func Offset: 0x1e4
	// Line 673, Address: 0x2736ec, Func Offset: 0x27c
	// Line 674, Address: 0x273748, Func Offset: 0x2d8
	// Line 682, Address: 0x273764, Func Offset: 0x2f4
	// Line 674, Address: 0x273768, Func Offset: 0x2f8
	// Line 676, Address: 0x27376c, Func Offset: 0x2fc
	// Line 682, Address: 0x273790, Func Offset: 0x320
	// Line 676, Address: 0x27379c, Func Offset: 0x32c
	// Line 677, Address: 0x2737a4, Func Offset: 0x334
	// Line 683, Address: 0x2737b4, Func Offset: 0x344
	// Line 677, Address: 0x2737b8, Func Offset: 0x348
	// Line 683, Address: 0x273824, Func Offset: 0x3b4
	// Line 682, Address: 0x273828, Func Offset: 0x3b8
	// Line 683, Address: 0x27382c, Func Offset: 0x3bc
	// Line 684, Address: 0x273838, Func Offset: 0x3c8
	// Line 690, Address: 0x27383c, Func Offset: 0x3cc
	// Line 697, Address: 0x273884, Func Offset: 0x414
	// Line 711, Address: 0x2738fc, Func Offset: 0x48c
	// Line 712, Address: 0x273910, Func Offset: 0x4a0
	// Line 718, Address: 0x27391c, Func Offset: 0x4ac
	// Line 725, Address: 0x27397c, Func Offset: 0x50c
	// Line 726, Address: 0x273980, Func Offset: 0x510
	// Line 725, Address: 0x273984, Func Offset: 0x514
	// Line 726, Address: 0x273994, Func Offset: 0x524
	// Line 725, Address: 0x273998, Func Offset: 0x528
	// Line 726, Address: 0x2739b8, Func Offset: 0x548
	// Line 725, Address: 0x2739bc, Func Offset: 0x54c
	// Line 726, Address: 0x2739c4, Func Offset: 0x554
	// Line 727, Address: 0x2739cc, Func Offset: 0x55c
	// Line 750, Address: 0x2739e0, Func Offset: 0x570
	// Line 751, Address: 0x273b34, Func Offset: 0x6c4
	// Line 754, Address: 0x273b40, Func Offset: 0x6d0
	// Line 763, Address: 0x273b4c, Func Offset: 0x6dc
	// Line 772, Address: 0x273b54, Func Offset: 0x6e4
	// Line 763, Address: 0x273b58, Func Offset: 0x6e8
	// Line 765, Address: 0x273b6c, Func Offset: 0x6fc
	// Line 767, Address: 0x273b90, Func Offset: 0x720
	// Line 769, Address: 0x273ba0, Func Offset: 0x730
	// Line 772, Address: 0x273bac, Func Offset: 0x73c
	// Line 773, Address: 0x273bb4, Func Offset: 0x744
	// Line 774, Address: 0x273bdc, Func Offset: 0x76c
	// Line 775, Address: 0x273bf8, Func Offset: 0x788
	// Line 776, Address: 0x273c00, Func Offset: 0x790
	// Line 777, Address: 0x273c08, Func Offset: 0x798
	// Line 778, Address: 0x273c30, Func Offset: 0x7c0
	// Line 779, Address: 0x273c4c, Func Offset: 0x7dc
	// Line 780, Address: 0x273c54, Func Offset: 0x7e4
	// Line 781, Address: 0x273c60, Func Offset: 0x7f0
	// Line 782, Address: 0x273c88, Func Offset: 0x818
	// Line 783, Address: 0x273ca4, Func Offset: 0x834
	// Line 784, Address: 0x273cac, Func Offset: 0x83c
	// Line 785, Address: 0x273cb4, Func Offset: 0x844
	// Line 786, Address: 0x273cc8, Func Offset: 0x858
	// Line 787, Address: 0x273cd4, Func Offset: 0x864
	// Line 789, Address: 0x273cdc, Func Offset: 0x86c
	// Line 790, Address: 0x273cf0, Func Offset: 0x880
	// Line 796, Address: 0x273d00, Func Offset: 0x890
	// Line 797, Address: 0x273d04, Func Offset: 0x894
	// Line 800, Address: 0x273d0c, Func Offset: 0x89c
	// Line 801, Address: 0x273d20, Func Offset: 0x8b0
	// Func End, Address: 0x273d68, Func Offset: 0x8f8
}

// PuffSysInit_Glow__8PuffRingFP8NPARMgmtP20xParticleBatchSystem
// Start address: 0x273d70
void PuffSysInit_Glow(NPARMgmt* mgmt, xParticleBatchSystem* pbs)
{
	// Line 611, Address: 0x273d70, Func Offset: 0
	// Line 622, Address: 0x273d74, Func Offset: 0x4
	// Line 611, Address: 0x273d78, Func Offset: 0x8
	// Line 616, Address: 0x273d7c, Func Offset: 0xc
	// Line 614, Address: 0x273d80, Func Offset: 0x10
	// Line 617, Address: 0x273d84, Func Offset: 0x14
	// Line 621, Address: 0x273d88, Func Offset: 0x18
	// Line 622, Address: 0x273d8c, Func Offset: 0x1c
	// Line 614, Address: 0x273d90, Func Offset: 0x20
	// Line 615, Address: 0x273d94, Func Offset: 0x24
	// Line 616, Address: 0x273d98, Func Offset: 0x28
	// Line 617, Address: 0x273d9c, Func Offset: 0x2c
	// Line 619, Address: 0x273da0, Func Offset: 0x30
	// Line 620, Address: 0x273da4, Func Offset: 0x34
	// Line 621, Address: 0x273da8, Func Offset: 0x38
	// Line 622, Address: 0x273dac, Func Offset: 0x3c
	// Line 626, Address: 0x273db0, Func Offset: 0x40
	// Func End, Address: 0x273db8, Func Offset: 0x48
}

// PuffSysInit_Hot__8PuffRingFP8NPARMgmtP20xParticleBatchSystem
// Start address: 0x273dc0
void PuffSysInit_Hot(NPARMgmt* mgmt, xParticleBatchSystem* pbs)
{
	// Line 592, Address: 0x273dc0, Func Offset: 0
	// Line 603, Address: 0x273dc4, Func Offset: 0x4
	// Line 592, Address: 0x273dc8, Func Offset: 0x8
	// Line 597, Address: 0x273dcc, Func Offset: 0xc
	// Line 595, Address: 0x273dd0, Func Offset: 0x10
	// Line 602, Address: 0x273dd4, Func Offset: 0x14
	// Line 603, Address: 0x273dd8, Func Offset: 0x18
	// Line 595, Address: 0x273ddc, Func Offset: 0x1c
	// Line 596, Address: 0x273de0, Func Offset: 0x20
	// Line 597, Address: 0x273de4, Func Offset: 0x24
	// Line 598, Address: 0x273de8, Func Offset: 0x28
	// Line 600, Address: 0x273dec, Func Offset: 0x2c
	// Line 601, Address: 0x273df0, Func Offset: 0x30
	// Line 602, Address: 0x273df4, Func Offset: 0x34
	// Line 603, Address: 0x273df8, Func Offset: 0x38
	// Line 607, Address: 0x273dfc, Func Offset: 0x3c
	// Func End, Address: 0x273e04, Func Offset: 0x44
}

// PuffSysInit_Dull__8PuffRingFP8NPARMgmtP20xParticleBatchSystem
// Start address: 0x273e10
void PuffSysInit_Dull(NPARMgmt* mgmt, xParticleBatchSystem* pbs)
{
	// Line 573, Address: 0x273e10, Func Offset: 0
	// Line 584, Address: 0x273e14, Func Offset: 0x4
	// Line 573, Address: 0x273e18, Func Offset: 0x8
	// Line 578, Address: 0x273e1c, Func Offset: 0xc
	// Line 576, Address: 0x273e20, Func Offset: 0x10
	// Line 583, Address: 0x273e24, Func Offset: 0x14
	// Line 584, Address: 0x273e28, Func Offset: 0x18
	// Line 576, Address: 0x273e2c, Func Offset: 0x1c
	// Line 577, Address: 0x273e30, Func Offset: 0x20
	// Line 578, Address: 0x273e34, Func Offset: 0x24
	// Line 579, Address: 0x273e38, Func Offset: 0x28
	// Line 581, Address: 0x273e3c, Func Offset: 0x2c
	// Line 582, Address: 0x273e40, Func Offset: 0x30
	// Line 583, Address: 0x273e44, Func Offset: 0x34
	// Line 584, Address: 0x273e48, Func Offset: 0x38
	// Line 588, Address: 0x273e4c, Func Offset: 0x3c
	// Func End, Address: 0x273e54, Func Offset: 0x44
}

// PuffSysTweaks__8PuffRingFP8NPARMgmtPCc
// Start address: 0x273e60
void PuffSysTweaks(int8* prefix_root)
{
	int8 prefix_base[128];
	int8 prefix[128];
	// Line 547, Address: 0x273e60, Func Offset: 0
	// Line 550, Address: 0x273e68, Func Offset: 0x8
	// Line 547, Address: 0x273e70, Func Offset: 0x10
	// Line 550, Address: 0x273e74, Func Offset: 0x14
	// Line 552, Address: 0x273e84, Func Offset: 0x24
	// Line 563, Address: 0x273ea0, Func Offset: 0x40
	// Func End, Address: 0x273eac, Func Offset: 0x4c
}

// Footstroke__11PuffEmitterCFPC5xVec3PC5xVec3
// Start address: 0x273eb0
void PuffEmitter::Footstroke(xVec3* pos, xVec3* dir_emit)
{
	int32 pbs_id;
	int32 cnt_remain;
	uint8* mem;
	int32 num_par;
	PuffParticle* par;
	int32 i;
	float32 spd;
	float32 fac_randSaddle;
	float32 samecalc;
	// Line 396, Address: 0x273eb0, Func Offset: 0
	// Line 410, Address: 0x273eb4, Func Offset: 0x4
	// Line 396, Address: 0x273eb8, Func Offset: 0x8
	// Line 410, Address: 0x273ebc, Func Offset: 0xc
	// Line 396, Address: 0x273ec0, Func Offset: 0x10
	// Line 410, Address: 0x273ee0, Func Offset: 0x30
	// Line 396, Address: 0x273ee8, Func Offset: 0x38
	// Line 410, Address: 0x273ef4, Func Offset: 0x44
	// Line 411, Address: 0x273f04, Func Offset: 0x54
	// Line 413, Address: 0x273f14, Func Offset: 0x64
	// Line 416, Address: 0x273f18, Func Offset: 0x68
	// Line 482, Address: 0x273f20, Func Offset: 0x70
	// Line 420, Address: 0x273f30, Func Offset: 0x80
	// Line 482, Address: 0x273f38, Func Offset: 0x88
	// Line 420, Address: 0x273f40, Func Offset: 0x90
	// Line 482, Address: 0x273f44, Func Offset: 0x94
	// Line 429, Address: 0x273f7c, Func Offset: 0xcc
	// Line 482, Address: 0x273f84, Func Offset: 0xd4
	// Line 429, Address: 0x273f8c, Func Offset: 0xdc
	// Line 441, Address: 0x273fb8, Func Offset: 0x108
	// Line 482, Address: 0x273fc0, Func Offset: 0x110
	// Line 448, Address: 0x273fc8, Func Offset: 0x118
	// Line 482, Address: 0x273fcc, Func Offset: 0x11c
	// Line 441, Address: 0x273fe0, Func Offset: 0x130
	// Line 482, Address: 0x273fe4, Func Offset: 0x134
	// Line 433, Address: 0x273fe8, Func Offset: 0x138
	// Line 482, Address: 0x273fec, Func Offset: 0x13c
	// Line 433, Address: 0x274004, Func Offset: 0x154
	// Line 441, Address: 0x274008, Func Offset: 0x158
	// Line 482, Address: 0x27400c, Func Offset: 0x15c
	// Line 433, Address: 0x274010, Func Offset: 0x160
	// Line 435, Address: 0x274014, Func Offset: 0x164
	// Line 442, Address: 0x274018, Func Offset: 0x168
	// Line 482, Address: 0x27401c, Func Offset: 0x16c
	// Line 441, Address: 0x274024, Func Offset: 0x174
	// Line 482, Address: 0x274028, Func Offset: 0x178
	// Line 441, Address: 0x274034, Func Offset: 0x184
	// Line 482, Address: 0x274038, Func Offset: 0x188
	// Line 435, Address: 0x27403c, Func Offset: 0x18c
	// Line 482, Address: 0x274040, Func Offset: 0x190
	// Line 435, Address: 0x274044, Func Offset: 0x194
	// Line 482, Address: 0x274048, Func Offset: 0x198
	// Line 442, Address: 0x274058, Func Offset: 0x1a8
	// Line 482, Address: 0x27405c, Func Offset: 0x1ac
	// Line 442, Address: 0x274068, Func Offset: 0x1b8
	// Line 482, Address: 0x27406c, Func Offset: 0x1bc
	// Line 448, Address: 0x2740a8, Func Offset: 0x1f8
	// Line 482, Address: 0x2740ac, Func Offset: 0x1fc
	// Line 448, Address: 0x2740b4, Func Offset: 0x204
	// Line 482, Address: 0x2740b8, Func Offset: 0x208
	// Line 448, Address: 0x2740c0, Func Offset: 0x210
	// Line 482, Address: 0x2740c4, Func Offset: 0x214
	// Line 448, Address: 0x2740cc, Func Offset: 0x21c
	// Line 482, Address: 0x2740d0, Func Offset: 0x220
	// Line 448, Address: 0x2740d8, Func Offset: 0x228
	// Line 482, Address: 0x2740dc, Func Offset: 0x22c
	// Line 448, Address: 0x2740e4, Func Offset: 0x234
	// Line 482, Address: 0x2740ec, Func Offset: 0x23c
	// Line 448, Address: 0x2740f4, Func Offset: 0x244
	// Line 449, Address: 0x2740fc, Func Offset: 0x24c
	// Line 450, Address: 0x274100, Func Offset: 0x250
	// Line 482, Address: 0x274104, Func Offset: 0x254
	// Line 451, Address: 0x274108, Func Offset: 0x258
	// Line 482, Address: 0x274158, Func Offset: 0x2a8
	// Line 452, Address: 0x27415c, Func Offset: 0x2ac
	// Line 455, Address: 0x274164, Func Offset: 0x2b4
	// Line 456, Address: 0x274168, Func Offset: 0x2b8
	// Line 482, Address: 0x27416c, Func Offset: 0x2bc
	// Line 457, Address: 0x274170, Func Offset: 0x2c0
	// Line 482, Address: 0x2741c0, Func Offset: 0x310
	// Line 458, Address: 0x2741c4, Func Offset: 0x314
	// Line 462, Address: 0x2741cc, Func Offset: 0x31c
	// Line 463, Address: 0x2741d0, Func Offset: 0x320
	// Line 482, Address: 0x2741d4, Func Offset: 0x324
	// Line 466, Address: 0x2741dc, Func Offset: 0x32c
	// Line 482, Address: 0x2741e0, Func Offset: 0x330
	// Line 470, Address: 0x2741f4, Func Offset: 0x344
	// Line 482, Address: 0x2741f8, Func Offset: 0x348
	// Line 483, Address: 0x274210, Func Offset: 0x360
	// Func End, Address: 0x274240, Func Offset: 0x390
}

// RoundRing__11PuffEmitterCFPC5xVec3fPC5xVec3
// Start address: 0x274240
void PuffEmitter::RoundRing(xVec3* pos, float32 radius, xVec3* vel_drift)
{
	int32 pbs_id;
	int32 cnt_remain;
	int32 num_emitted;
	uint8* mem;
	int32 num_par;
	float32 darc;
	PuffParticle* par;
	int32 i;
	float32 ang_curr;
	xVec3 dir;
	float32 fac_randSaddle;
	float32 samecalc;
	// Line 298, Address: 0x274240, Func Offset: 0
	// Line 312, Address: 0x274244, Func Offset: 0x4
	// Line 298, Address: 0x274248, Func Offset: 0x8
	// Line 312, Address: 0x27424c, Func Offset: 0xc
	// Line 298, Address: 0x274250, Func Offset: 0x10
	// Line 312, Address: 0x274270, Func Offset: 0x30
	// Line 298, Address: 0x274278, Func Offset: 0x38
	// Line 312, Address: 0x27428c, Func Offset: 0x4c
	// Line 298, Address: 0x274294, Func Offset: 0x54
	// Line 312, Address: 0x274298, Func Offset: 0x58
	// Line 298, Address: 0x27429c, Func Offset: 0x5c
	// Line 312, Address: 0x2742a0, Func Offset: 0x60
	// Line 313, Address: 0x2742a4, Func Offset: 0x64
	// Line 315, Address: 0x2742b4, Func Offset: 0x74
	// Line 313, Address: 0x2742b8, Func Offset: 0x78
	// Line 318, Address: 0x2742bc, Func Offset: 0x7c
	// Line 392, Address: 0x2742c4, Func Offset: 0x84
	// Line 322, Address: 0x2742cc, Func Offset: 0x8c
	// Line 392, Address: 0x2742d4, Func Offset: 0x94
	// Line 322, Address: 0x2742dc, Func Offset: 0x9c
	// Line 392, Address: 0x2742e0, Func Offset: 0xa0
	// Line 326, Address: 0x2742e8, Func Offset: 0xa8
	// Line 392, Address: 0x2742f4, Func Offset: 0xb4
	// Line 330, Address: 0x2742fc, Func Offset: 0xbc
	// Line 326, Address: 0x274300, Func Offset: 0xc0
	// Line 392, Address: 0x27430c, Func Offset: 0xcc
	// Line 326, Address: 0x274310, Func Offset: 0xd0
	// Line 392, Address: 0x274318, Func Offset: 0xd8
	// Line 333, Address: 0x27433c, Func Offset: 0xfc
	// Line 392, Address: 0x274344, Func Offset: 0x104
	// Line 333, Address: 0x27434c, Func Offset: 0x10c
	// Line 336, Address: 0x274378, Func Offset: 0x138
	// Line 392, Address: 0x27438c, Func Offset: 0x14c
	// Line 336, Address: 0x274390, Func Offset: 0x150
	// Line 392, Address: 0x27439c, Func Offset: 0x15c
	// Line 340, Address: 0x2743a4, Func Offset: 0x164
	// Line 392, Address: 0x2743a8, Func Offset: 0x168
	// Line 341, Address: 0x2743c0, Func Offset: 0x180
	// Line 392, Address: 0x2743c8, Func Offset: 0x188
	// Line 344, Address: 0x274414, Func Offset: 0x1d4
	// Line 392, Address: 0x274418, Func Offset: 0x1d8
	// Line 343, Address: 0x274420, Func Offset: 0x1e0
	// Line 392, Address: 0x274424, Func Offset: 0x1e4
	// Line 343, Address: 0x274448, Func Offset: 0x208
	// Line 392, Address: 0x274450, Func Offset: 0x210
	// Line 344, Address: 0x27445c, Func Offset: 0x21c
	// Line 392, Address: 0x274460, Func Offset: 0x220
	// Line 343, Address: 0x27447c, Func Offset: 0x23c
	// Line 392, Address: 0x274480, Func Offset: 0x240
	// Line 343, Address: 0x27448c, Func Offset: 0x24c
	// Line 344, Address: 0x274490, Func Offset: 0x250
	// Line 392, Address: 0x274494, Func Offset: 0x254
	// Line 344, Address: 0x2744ac, Func Offset: 0x26c
	// Line 392, Address: 0x2744b0, Func Offset: 0x270
	// Line 343, Address: 0x2744f8, Func Offset: 0x2b8
	// Line 392, Address: 0x2744fc, Func Offset: 0x2bc
	// Line 346, Address: 0x274530, Func Offset: 0x2f0
	// Line 392, Address: 0x274534, Func Offset: 0x2f4
	// Line 346, Address: 0x27453c, Func Offset: 0x2fc
	// Line 392, Address: 0x274540, Func Offset: 0x300
	// Line 346, Address: 0x274548, Func Offset: 0x308
	// Line 362, Address: 0x274554, Func Offset: 0x314
	// Line 361, Address: 0x274558, Func Offset: 0x318
	// Line 362, Address: 0x27455c, Func Offset: 0x31c
	// Line 392, Address: 0x2745ac, Func Offset: 0x36c
	// Line 363, Address: 0x2745b0, Func Offset: 0x370
	// Line 368, Address: 0x2745b8, Func Offset: 0x378
	// Line 367, Address: 0x2745bc, Func Offset: 0x37c
	// Line 368, Address: 0x2745c0, Func Offset: 0x380
	// Line 392, Address: 0x274610, Func Offset: 0x3d0
	// Line 369, Address: 0x274614, Func Offset: 0x3d4
	// Line 374, Address: 0x27461c, Func Offset: 0x3dc
	// Line 392, Address: 0x274620, Func Offset: 0x3e0
	// Line 381, Address: 0x27463c, Func Offset: 0x3fc
	// Line 392, Address: 0x274640, Func Offset: 0x400
	// Line 352, Address: 0x27465c, Func Offset: 0x41c
	// Line 392, Address: 0x274660, Func Offset: 0x420
	// Line 352, Address: 0x274664, Func Offset: 0x424
	// Line 392, Address: 0x274668, Func Offset: 0x428
	// Line 352, Address: 0x274674, Func Offset: 0x434
	// Line 392, Address: 0x274678, Func Offset: 0x438
	// Line 352, Address: 0x27467c, Func Offset: 0x43c
	// Line 392, Address: 0x274680, Func Offset: 0x440
	// Line 353, Address: 0x274684, Func Offset: 0x444
	// Line 352, Address: 0x274688, Func Offset: 0x448
	// Line 359, Address: 0x27468c, Func Offset: 0x44c
	// Line 353, Address: 0x274690, Func Offset: 0x450
	// Line 352, Address: 0x274694, Func Offset: 0x454
	// Line 392, Address: 0x274698, Func Offset: 0x458
	// Line 353, Address: 0x27469c, Func Offset: 0x45c
	// Line 392, Address: 0x2746a0, Func Offset: 0x460
	// Line 353, Address: 0x2746a8, Func Offset: 0x468
	// Line 392, Address: 0x2746ac, Func Offset: 0x46c
	// Line 359, Address: 0x2746cc, Func Offset: 0x48c
	// Line 392, Address: 0x2746d0, Func Offset: 0x490
	// Line 359, Address: 0x2746d8, Func Offset: 0x498
	// Line 392, Address: 0x2746dc, Func Offset: 0x49c
	// Line 359, Address: 0x2746e4, Func Offset: 0x4a4
	// Line 392, Address: 0x2746e8, Func Offset: 0x4a8
	// Line 359, Address: 0x2746f0, Func Offset: 0x4b0
	// Line 392, Address: 0x2746f4, Func Offset: 0x4b4
	// Line 359, Address: 0x2746fc, Func Offset: 0x4bc
	// Line 392, Address: 0x274700, Func Offset: 0x4c0
	// Line 359, Address: 0x274708, Func Offset: 0x4c8
	// Line 392, Address: 0x274710, Func Offset: 0x4d0
	// Line 359, Address: 0x274718, Func Offset: 0x4d8
	// Line 393, Address: 0x274720, Func Offset: 0x4e0
	// Func End, Address: 0x274760, Func Offset: 0x520
}

// ImpactRing__11PuffEmitterCFPC5xVec3PC5xVec3
// Start address: 0x274760
void PuffEmitter::ImpactRing(xVec3* pos, xVec3* vel_drift)
{
	int32 pbs_id;
	int32 cnt_remain;
	int32 num_emitted;
	uint8* mem;
	int32 num_par;
	float32 darc;
	PuffParticle* par;
	int32 i;
	float32 ang_curr;
	xVec3 dir;
	float32 fac_randSaddle;
	float32 samecalc;
	// Line 199, Address: 0x274760, Func Offset: 0
	// Line 213, Address: 0x274764, Func Offset: 0x4
	// Line 199, Address: 0x274768, Func Offset: 0x8
	// Line 213, Address: 0x27476c, Func Offset: 0xc
	// Line 199, Address: 0x274770, Func Offset: 0x10
	// Line 213, Address: 0x274790, Func Offset: 0x30
	// Line 199, Address: 0x274798, Func Offset: 0x38
	// Line 213, Address: 0x2747ac, Func Offset: 0x4c
	// Line 199, Address: 0x2747b8, Func Offset: 0x58
	// Line 213, Address: 0x2747bc, Func Offset: 0x5c
	// Line 214, Address: 0x2747c0, Func Offset: 0x60
	// Line 216, Address: 0x2747cc, Func Offset: 0x6c
	// Line 214, Address: 0x2747d0, Func Offset: 0x70
	// Line 219, Address: 0x2747d4, Func Offset: 0x74
	// Line 293, Address: 0x2747dc, Func Offset: 0x7c
	// Line 223, Address: 0x2747e4, Func Offset: 0x84
	// Line 293, Address: 0x2747ec, Func Offset: 0x8c
	// Line 223, Address: 0x2747f4, Func Offset: 0x94
	// Line 293, Address: 0x2747f8, Func Offset: 0x98
	// Line 227, Address: 0x274800, Func Offset: 0xa0
	// Line 293, Address: 0x27480c, Func Offset: 0xac
	// Line 231, Address: 0x274814, Func Offset: 0xb4
	// Line 227, Address: 0x274818, Func Offset: 0xb8
	// Line 293, Address: 0x274824, Func Offset: 0xc4
	// Line 227, Address: 0x274828, Func Offset: 0xc8
	// Line 293, Address: 0x274830, Func Offset: 0xd0
	// Line 234, Address: 0x274854, Func Offset: 0xf4
	// Line 293, Address: 0x27485c, Func Offset: 0xfc
	// Line 234, Address: 0x274864, Func Offset: 0x104
	// Line 237, Address: 0x274890, Func Offset: 0x130
	// Line 293, Address: 0x2748a4, Func Offset: 0x144
	// Line 237, Address: 0x2748a8, Func Offset: 0x148
	// Line 293, Address: 0x2748b4, Func Offset: 0x154
	// Line 241, Address: 0x2748bc, Func Offset: 0x15c
	// Line 293, Address: 0x2748c0, Func Offset: 0x160
	// Line 242, Address: 0x2748d8, Func Offset: 0x178
	// Line 293, Address: 0x2748e0, Func Offset: 0x180
	// Line 245, Address: 0x274934, Func Offset: 0x1d4
	// Line 293, Address: 0x274938, Func Offset: 0x1d8
	// Line 244, Address: 0x27494c, Func Offset: 0x1ec
	// Line 293, Address: 0x274950, Func Offset: 0x1f0
	// Line 245, Address: 0x274958, Func Offset: 0x1f8
	// Line 293, Address: 0x27495c, Func Offset: 0x1fc
	// Line 244, Address: 0x274964, Func Offset: 0x204
	// Line 293, Address: 0x274968, Func Offset: 0x208
	// Line 245, Address: 0x274970, Func Offset: 0x210
	// Line 293, Address: 0x274974, Func Offset: 0x214
	// Line 244, Address: 0x2749a0, Func Offset: 0x240
	// Line 293, Address: 0x2749a8, Func Offset: 0x248
	// Line 244, Address: 0x2749b0, Func Offset: 0x250
	// Line 293, Address: 0x2749b4, Func Offset: 0x254
	// Line 245, Address: 0x2749e4, Func Offset: 0x284
	// Line 293, Address: 0x2749e8, Func Offset: 0x288
	// Line 244, Address: 0x274a10, Func Offset: 0x2b0
	// Line 293, Address: 0x274a14, Func Offset: 0x2b4
	// Line 247, Address: 0x274a48, Func Offset: 0x2e8
	// Line 293, Address: 0x274a4c, Func Offset: 0x2ec
	// Line 247, Address: 0x274a54, Func Offset: 0x2f4
	// Line 293, Address: 0x274a58, Func Offset: 0x2f8
	// Line 247, Address: 0x274a60, Func Offset: 0x300
	// Line 263, Address: 0x274a6c, Func Offset: 0x30c
	// Line 262, Address: 0x274a70, Func Offset: 0x310
	// Line 263, Address: 0x274a74, Func Offset: 0x314
	// Line 293, Address: 0x274ac4, Func Offset: 0x364
	// Line 264, Address: 0x274ac8, Func Offset: 0x368
	// Line 269, Address: 0x274ad0, Func Offset: 0x370
	// Line 268, Address: 0x274ad4, Func Offset: 0x374
	// Line 269, Address: 0x274ad8, Func Offset: 0x378
	// Line 293, Address: 0x274b28, Func Offset: 0x3c8
	// Line 270, Address: 0x274b2c, Func Offset: 0x3cc
	// Line 275, Address: 0x274b34, Func Offset: 0x3d4
	// Line 293, Address: 0x274b38, Func Offset: 0x3d8
	// Line 282, Address: 0x274b54, Func Offset: 0x3f4
	// Line 293, Address: 0x274b58, Func Offset: 0x3f8
	// Line 253, Address: 0x274b74, Func Offset: 0x414
	// Line 293, Address: 0x274b78, Func Offset: 0x418
	// Line 253, Address: 0x274b7c, Func Offset: 0x41c
	// Line 293, Address: 0x274b80, Func Offset: 0x420
	// Line 253, Address: 0x274b8c, Func Offset: 0x42c
	// Line 293, Address: 0x274b90, Func Offset: 0x430
	// Line 253, Address: 0x274b94, Func Offset: 0x434
	// Line 293, Address: 0x274b98, Func Offset: 0x438
	// Line 254, Address: 0x274b9c, Func Offset: 0x43c
	// Line 253, Address: 0x274ba0, Func Offset: 0x440
	// Line 260, Address: 0x274ba4, Func Offset: 0x444
	// Line 254, Address: 0x274ba8, Func Offset: 0x448
	// Line 253, Address: 0x274bac, Func Offset: 0x44c
	// Line 293, Address: 0x274bb0, Func Offset: 0x450
	// Line 254, Address: 0x274bb4, Func Offset: 0x454
	// Line 293, Address: 0x274bb8, Func Offset: 0x458
	// Line 254, Address: 0x274bc0, Func Offset: 0x460
	// Line 293, Address: 0x274bc4, Func Offset: 0x464
	// Line 260, Address: 0x274be4, Func Offset: 0x484
	// Line 293, Address: 0x274be8, Func Offset: 0x488
	// Line 260, Address: 0x274bf0, Func Offset: 0x490
	// Line 293, Address: 0x274bf4, Func Offset: 0x494
	// Line 260, Address: 0x274bfc, Func Offset: 0x49c
	// Line 293, Address: 0x274c00, Func Offset: 0x4a0
	// Line 260, Address: 0x274c08, Func Offset: 0x4a8
	// Line 293, Address: 0x274c0c, Func Offset: 0x4ac
	// Line 260, Address: 0x274c14, Func Offset: 0x4b4
	// Line 293, Address: 0x274c18, Func Offset: 0x4b8
	// Line 260, Address: 0x274c20, Func Offset: 0x4c0
	// Line 293, Address: 0x274c28, Func Offset: 0x4c8
	// Line 260, Address: 0x274c30, Func Offset: 0x4d0
	// Line 294, Address: 0x274c38, Func Offset: 0x4d8
	// Func End, Address: 0x274c74, Func Offset: 0x514
}

// PropWash__11PuffEmitterCFPC5xVec3PC5xVec3
// Start address: 0x274c80
void PuffEmitter::PropWash(xVec3* pos, xVec3* vel_drift)
{
	int32 pbs_id;
	int32 cnt_remain;
	int32 num_emitted;
	uint8* mem;
	int32 num_par;
	float32 darc;
	PuffParticle* par;
	int32 i;
	float32 ang_curr;
	xVec3 dir;
	float32 fac_randSaddle;
	float32 samecalc;
	// Line 101, Address: 0x274c80, Func Offset: 0
	// Line 115, Address: 0x274c84, Func Offset: 0x4
	// Line 101, Address: 0x274c88, Func Offset: 0x8
	// Line 115, Address: 0x274c8c, Func Offset: 0xc
	// Line 101, Address: 0x274c90, Func Offset: 0x10
	// Line 115, Address: 0x274cb0, Func Offset: 0x30
	// Line 101, Address: 0x274cb8, Func Offset: 0x38
	// Line 115, Address: 0x274ccc, Func Offset: 0x4c
	// Line 101, Address: 0x274cd8, Func Offset: 0x58
	// Line 115, Address: 0x274cdc, Func Offset: 0x5c
	// Line 116, Address: 0x274ce0, Func Offset: 0x60
	// Line 118, Address: 0x274cec, Func Offset: 0x6c
	// Line 116, Address: 0x274cf0, Func Offset: 0x70
	// Line 121, Address: 0x274cf4, Func Offset: 0x74
	// Line 195, Address: 0x274cfc, Func Offset: 0x7c
	// Line 125, Address: 0x274d04, Func Offset: 0x84
	// Line 195, Address: 0x274d0c, Func Offset: 0x8c
	// Line 125, Address: 0x274d14, Func Offset: 0x94
	// Line 195, Address: 0x274d18, Func Offset: 0x98
	// Line 129, Address: 0x274d20, Func Offset: 0xa0
	// Line 195, Address: 0x274d2c, Func Offset: 0xac
	// Line 133, Address: 0x274d34, Func Offset: 0xb4
	// Line 129, Address: 0x274d38, Func Offset: 0xb8
	// Line 195, Address: 0x274d44, Func Offset: 0xc4
	// Line 129, Address: 0x274d48, Func Offset: 0xc8
	// Line 195, Address: 0x274d50, Func Offset: 0xd0
	// Line 136, Address: 0x274d74, Func Offset: 0xf4
	// Line 195, Address: 0x274d7c, Func Offset: 0xfc
	// Line 136, Address: 0x274d84, Func Offset: 0x104
	// Line 139, Address: 0x274db0, Func Offset: 0x130
	// Line 195, Address: 0x274dc4, Func Offset: 0x144
	// Line 139, Address: 0x274dc8, Func Offset: 0x148
	// Line 195, Address: 0x274dd4, Func Offset: 0x154
	// Line 143, Address: 0x274ddc, Func Offset: 0x15c
	// Line 195, Address: 0x274de0, Func Offset: 0x160
	// Line 144, Address: 0x274df8, Func Offset: 0x178
	// Line 195, Address: 0x274e00, Func Offset: 0x180
	// Line 147, Address: 0x274e54, Func Offset: 0x1d4
	// Line 195, Address: 0x274e58, Func Offset: 0x1d8
	// Line 146, Address: 0x274e6c, Func Offset: 0x1ec
	// Line 195, Address: 0x274e70, Func Offset: 0x1f0
	// Line 147, Address: 0x274e78, Func Offset: 0x1f8
	// Line 195, Address: 0x274e7c, Func Offset: 0x1fc
	// Line 146, Address: 0x274e84, Func Offset: 0x204
	// Line 195, Address: 0x274e88, Func Offset: 0x208
	// Line 147, Address: 0x274e90, Func Offset: 0x210
	// Line 195, Address: 0x274e94, Func Offset: 0x214
	// Line 146, Address: 0x274ec0, Func Offset: 0x240
	// Line 195, Address: 0x274ec8, Func Offset: 0x248
	// Line 146, Address: 0x274ed0, Func Offset: 0x250
	// Line 195, Address: 0x274ed4, Func Offset: 0x254
	// Line 147, Address: 0x274f04, Func Offset: 0x284
	// Line 195, Address: 0x274f08, Func Offset: 0x288
	// Line 146, Address: 0x274f30, Func Offset: 0x2b0
	// Line 195, Address: 0x274f34, Func Offset: 0x2b4
	// Line 149, Address: 0x274f68, Func Offset: 0x2e8
	// Line 195, Address: 0x274f6c, Func Offset: 0x2ec
	// Line 149, Address: 0x274f74, Func Offset: 0x2f4
	// Line 195, Address: 0x274f78, Func Offset: 0x2f8
	// Line 149, Address: 0x274f80, Func Offset: 0x300
	// Line 165, Address: 0x274f8c, Func Offset: 0x30c
	// Line 164, Address: 0x274f90, Func Offset: 0x310
	// Line 165, Address: 0x274f94, Func Offset: 0x314
	// Line 195, Address: 0x274fe4, Func Offset: 0x364
	// Line 166, Address: 0x274fe8, Func Offset: 0x368
	// Line 171, Address: 0x274ff0, Func Offset: 0x370
	// Line 170, Address: 0x274ff4, Func Offset: 0x374
	// Line 171, Address: 0x274ff8, Func Offset: 0x378
	// Line 195, Address: 0x275048, Func Offset: 0x3c8
	// Line 172, Address: 0x27504c, Func Offset: 0x3cc
	// Line 177, Address: 0x275054, Func Offset: 0x3d4
	// Line 195, Address: 0x275058, Func Offset: 0x3d8
	// Line 184, Address: 0x275074, Func Offset: 0x3f4
	// Line 195, Address: 0x275078, Func Offset: 0x3f8
	// Line 155, Address: 0x275094, Func Offset: 0x414
	// Line 195, Address: 0x275098, Func Offset: 0x418
	// Line 155, Address: 0x27509c, Func Offset: 0x41c
	// Line 195, Address: 0x2750a0, Func Offset: 0x420
	// Line 155, Address: 0x2750ac, Func Offset: 0x42c
	// Line 195, Address: 0x2750b0, Func Offset: 0x430
	// Line 155, Address: 0x2750b4, Func Offset: 0x434
	// Line 195, Address: 0x2750b8, Func Offset: 0x438
	// Line 156, Address: 0x2750bc, Func Offset: 0x43c
	// Line 155, Address: 0x2750c0, Func Offset: 0x440
	// Line 162, Address: 0x2750c4, Func Offset: 0x444
	// Line 156, Address: 0x2750c8, Func Offset: 0x448
	// Line 155, Address: 0x2750cc, Func Offset: 0x44c
	// Line 195, Address: 0x2750d0, Func Offset: 0x450
	// Line 156, Address: 0x2750d4, Func Offset: 0x454
	// Line 195, Address: 0x2750d8, Func Offset: 0x458
	// Line 156, Address: 0x2750e0, Func Offset: 0x460
	// Line 195, Address: 0x2750e4, Func Offset: 0x464
	// Line 162, Address: 0x275104, Func Offset: 0x484
	// Line 195, Address: 0x275108, Func Offset: 0x488
	// Line 162, Address: 0x275110, Func Offset: 0x490
	// Line 195, Address: 0x275114, Func Offset: 0x494
	// Line 162, Address: 0x27511c, Func Offset: 0x49c
	// Line 195, Address: 0x275120, Func Offset: 0x4a0
	// Line 162, Address: 0x275128, Func Offset: 0x4a8
	// Line 195, Address: 0x27512c, Func Offset: 0x4ac
	// Line 162, Address: 0x275134, Func Offset: 0x4b4
	// Line 195, Address: 0x275138, Func Offset: 0x4b8
	// Line 162, Address: 0x275140, Func Offset: 0x4c0
	// Line 195, Address: 0x275148, Func Offset: 0x4c8
	// Line 162, Address: 0x275150, Func Offset: 0x4d0
	// Line 196, Address: 0x275158, Func Offset: 0x4d8
	// Func End, Address: 0x275194, Func Offset: 0x514
}

