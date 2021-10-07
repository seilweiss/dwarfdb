



int32 OrientSysUpdate(uint8* mem, int32 count, ptank_pool& apool, float32 dt);
void OrientSysInit_Hot(NPARMgmt* mgmt, xParticleBatchSystem* pbs);
void OrientSysInit_Dull(NPARMgmt* mgmt, xParticleBatchSystem* pbs);
void OrientSysTweaks(int8* prefix_root);
void EmitRing(xVec3* pos_center, xVec3* dir_axis, float32 rad_emitCaller, float32 pct_spdRamp, int32 num_emitCaller);

// OrientSysUpdate__6OrientFPUciR10ptank_poolfPv
// Start address: 0x277390
int32 OrientSysUpdate(uint8* mem, int32 count, ptank_pool& apool, float32 dt)
{
	ptank_pool__color_mat_uv2* pool;
	OrientParticle* par;
	OrientParticle* end;
	xVec3 pos_plyr;
	OrientEmitter* emitter;
	float32 tym_life;
	float32 rat_rev;
	float32 rat;
	OrientCurve node_eval;
	int32 idx;
	int32 linearize;
	int32 systemUsesHDR;
	float32 fac_randSaddle;
	xColor_tag par_color;
	float32 adjAlpha;
	uint8 alftest;
	float32 sum;
	Damage_0* dmg;
	float32 ds2_plyr;
	float32 sv;
	float32 cv;
	xVec3 dir_over;
	float32 scaleSize;
	float32 wid_par;
	float32 hyt_par;
	// Line 590, Address: 0x277390, Func Offset: 0
	// Line 594, Address: 0x277394, Func Offset: 0x4
	// Line 590, Address: 0x277398, Func Offset: 0x8
	// Line 594, Address: 0x27739c, Func Offset: 0xc
	// Line 590, Address: 0x2773a0, Func Offset: 0x10
	// Line 594, Address: 0x2773a4, Func Offset: 0x14
	// Line 590, Address: 0x2773a8, Func Offset: 0x18
	// Line 591, Address: 0x2773c0, Func Offset: 0x30
	// Line 590, Address: 0x2773c4, Func Offset: 0x34
	// Line 593, Address: 0x2773c8, Func Offset: 0x38
	// Line 590, Address: 0x2773cc, Func Offset: 0x3c
	// Line 594, Address: 0x2773d0, Func Offset: 0x40
	// Line 590, Address: 0x2773d4, Func Offset: 0x44
	// Line 594, Address: 0x2773e8, Func Offset: 0x58
	// Line 595, Address: 0x2773f4, Func Offset: 0x64
	// Line 597, Address: 0x277408, Func Offset: 0x78
	// Line 606, Address: 0x277424, Func Offset: 0x94
	// Line 599, Address: 0x277428, Func Offset: 0x98
	// Line 606, Address: 0x27742c, Func Offset: 0x9c
	// Line 613, Address: 0x277430, Func Offset: 0xa0
	// Line 615, Address: 0x277450, Func Offset: 0xc0
	// Line 616, Address: 0x277454, Func Offset: 0xc4
	// Line 617, Address: 0x277528, Func Offset: 0x198
	// Line 622, Address: 0x277530, Func Offset: 0x1a0
	// Line 632, Address: 0x277554, Func Offset: 0x1c4
	// Line 633, Address: 0x277558, Func Offset: 0x1c8
	// Line 624, Address: 0x277560, Func Offset: 0x1d0
	// Line 634, Address: 0x277564, Func Offset: 0x1d4
	// Line 635, Address: 0x2779cc, Func Offset: 0x63c
	// Line 634, Address: 0x2779d0, Func Offset: 0x640
	// Line 643, Address: 0x2779d4, Func Offset: 0x644
	// Line 634, Address: 0x2779d8, Func Offset: 0x648
	// Line 643, Address: 0x2779dc, Func Offset: 0x64c
	// Line 634, Address: 0x2779e0, Func Offset: 0x650
	// Line 643, Address: 0x2779e4, Func Offset: 0x654
	// Line 634, Address: 0x2779e8, Func Offset: 0x658
	// Line 643, Address: 0x2779ec, Func Offset: 0x65c
	// Line 647, Address: 0x2779f4, Func Offset: 0x664
	// Line 643, Address: 0x2779f8, Func Offset: 0x668
	// Line 647, Address: 0x277a74, Func Offset: 0x6e4
	// Line 648, Address: 0x277a80, Func Offset: 0x6f0
	// Line 650, Address: 0x277b10, Func Offset: 0x780
	// Line 651, Address: 0x277b14, Func Offset: 0x784
	// Line 650, Address: 0x277b18, Func Offset: 0x788
	// Line 651, Address: 0x277b30, Func Offset: 0x7a0
	// Line 652, Address: 0x277ba8, Func Offset: 0x818
	// Line 651, Address: 0x277bac, Func Offset: 0x81c
	// Line 652, Address: 0x277bbc, Func Offset: 0x82c
	// Line 659, Address: 0x277c4c, Func Offset: 0x8bc
	// Line 660, Address: 0x277c68, Func Offset: 0x8d8
	// Line 666, Address: 0x277c80, Func Offset: 0x8f0
	// Line 678, Address: 0x277cc8, Func Offset: 0x938
	// Line 679, Address: 0x277cd8, Func Offset: 0x948
	// Line 687, Address: 0x277cdc, Func Offset: 0x94c
	// Line 689, Address: 0x277d04, Func Offset: 0x974
	// Line 690, Address: 0x277d1c, Func Offset: 0x98c
	// Line 692, Address: 0x277d24, Func Offset: 0x994
	// Line 693, Address: 0x277d40, Func Offset: 0x9b0
	// Line 698, Address: 0x277d54, Func Offset: 0x9c4
	// Line 699, Address: 0x277d7c, Func Offset: 0x9ec
	// Line 703, Address: 0x277d88, Func Offset: 0x9f8
	// Line 709, Address: 0x277d9c, Func Offset: 0xa0c
	// Line 710, Address: 0x277dc4, Func Offset: 0xa34
	// Line 711, Address: 0x277df8, Func Offset: 0xa68
	// Line 710, Address: 0x277e04, Func Offset: 0xa74
	// Line 711, Address: 0x277e08, Func Offset: 0xa78
	// Line 714, Address: 0x277ea0, Func Offset: 0xb10
	// Line 715, Address: 0x277ea8, Func Offset: 0xb18
	// Line 716, Address: 0x277f48, Func Offset: 0xbb8
	// Line 717, Address: 0x277f4c, Func Offset: 0xbbc
	// Line 716, Address: 0x277f50, Func Offset: 0xbc0
	// Line 717, Address: 0x277f54, Func Offset: 0xbc4
	// Line 716, Address: 0x277f5c, Func Offset: 0xbcc
	// Line 717, Address: 0x277f68, Func Offset: 0xbd8
	// Line 721, Address: 0x277ffc, Func Offset: 0xc6c
	// Line 728, Address: 0x278068, Func Offset: 0xcd8
	// Line 729, Address: 0x278074, Func Offset: 0xce4
	// Line 728, Address: 0x278078, Func Offset: 0xce8
	// Line 729, Address: 0x27809c, Func Offset: 0xd0c
	// Line 728, Address: 0x2780a0, Func Offset: 0xd10
	// Line 729, Address: 0x2780a4, Func Offset: 0xd14
	// Line 728, Address: 0x2780a8, Func Offset: 0xd18
	// Line 729, Address: 0x2780b0, Func Offset: 0xd20
	// Line 730, Address: 0x2780b8, Func Offset: 0xd28
	// Line 757, Address: 0x2780cc, Func Offset: 0xd3c
	// Line 758, Address: 0x2781cc, Func Offset: 0xe3c
	// Line 761, Address: 0x2781d8, Func Offset: 0xe48
	// Line 769, Address: 0x2781e0, Func Offset: 0xe50
	// Line 761, Address: 0x2781e4, Func Offset: 0xe54
	// Line 769, Address: 0x2781e8, Func Offset: 0xe58
	// Line 772, Address: 0x2781f0, Func Offset: 0xe60
	// Line 769, Address: 0x2781f4, Func Offset: 0xe64
	// Line 772, Address: 0x278200, Func Offset: 0xe70
	// Line 773, Address: 0x278210, Func Offset: 0xe80
	// Line 772, Address: 0x278214, Func Offset: 0xe84
	// Line 773, Address: 0x278218, Func Offset: 0xe88
	// Line 774, Address: 0x27822c, Func Offset: 0xe9c
	// Line 773, Address: 0x278230, Func Offset: 0xea0
	// Line 774, Address: 0x278234, Func Offset: 0xea4
	// Line 775, Address: 0x278248, Func Offset: 0xeb8
	// Line 777, Address: 0x2782a8, Func Offset: 0xf18
	// Line 781, Address: 0x2782b0, Func Offset: 0xf20
	// Line 782, Address: 0x2782bc, Func Offset: 0xf2c
	// Line 786, Address: 0x2782c4, Func Offset: 0xf34
	// Line 789, Address: 0x2782e4, Func Offset: 0xf54
	// Line 786, Address: 0x2782e8, Func Offset: 0xf58
	// Line 789, Address: 0x2782ec, Func Offset: 0xf5c
	// Line 786, Address: 0x2782f0, Func Offset: 0xf60
	// Line 789, Address: 0x2782f4, Func Offset: 0xf64
	// Line 786, Address: 0x2782f8, Func Offset: 0xf68
	// Line 790, Address: 0x278308, Func Offset: 0xf78
	// Line 786, Address: 0x27830c, Func Offset: 0xf7c
	// Line 789, Address: 0x278310, Func Offset: 0xf80
	// Line 786, Address: 0x278314, Func Offset: 0xf84
	// Line 789, Address: 0x278318, Func Offset: 0xf88
	// Line 790, Address: 0x278320, Func Offset: 0xf90
	// Line 786, Address: 0x278324, Func Offset: 0xf94
	// Line 790, Address: 0x278328, Func Offset: 0xf98
	// Line 786, Address: 0x27832c, Func Offset: 0xf9c
	// Line 790, Address: 0x278330, Func Offset: 0xfa0
	// Line 791, Address: 0x278460, Func Offset: 0x10d0
	// Line 796, Address: 0x2784b4, Func Offset: 0x1124
	// Line 800, Address: 0x2784b8, Func Offset: 0x1128
	// Line 796, Address: 0x2784bc, Func Offset: 0x112c
	// Line 805, Address: 0x2784c0, Func Offset: 0x1130
	// Line 798, Address: 0x2784c4, Func Offset: 0x1134
	// Line 805, Address: 0x2784c8, Func Offset: 0x1138
	// Line 797, Address: 0x2784cc, Func Offset: 0x113c
	// Line 805, Address: 0x2784d0, Func Offset: 0x1140
	// Line 808, Address: 0x2784d8, Func Offset: 0x1148
	// Line 800, Address: 0x2784dc, Func Offset: 0x114c
	// Line 796, Address: 0x2784e0, Func Offset: 0x1150
	// Line 798, Address: 0x2784e4, Func Offset: 0x1154
	// Line 800, Address: 0x2784e8, Func Offset: 0x1158
	// Line 797, Address: 0x2784f4, Func Offset: 0x1164
	// Line 800, Address: 0x2784f8, Func Offset: 0x1168
	// Line 801, Address: 0x27850c, Func Offset: 0x117c
	// Line 805, Address: 0x278538, Func Offset: 0x11a8
	// Line 808, Address: 0x27854c, Func Offset: 0x11bc
	// Line 809, Address: 0x278554, Func Offset: 0x11c4
	// Line 810, Address: 0x27857c, Func Offset: 0x11ec
	// Line 811, Address: 0x278598, Func Offset: 0x1208
	// Line 812, Address: 0x2785a0, Func Offset: 0x1210
	// Line 813, Address: 0x2785a8, Func Offset: 0x1218
	// Line 814, Address: 0x2785d0, Func Offset: 0x1240
	// Line 815, Address: 0x2785ec, Func Offset: 0x125c
	// Line 816, Address: 0x2785f4, Func Offset: 0x1264
	// Line 817, Address: 0x278600, Func Offset: 0x1270
	// Line 818, Address: 0x278628, Func Offset: 0x1298
	// Line 819, Address: 0x278644, Func Offset: 0x12b4
	// Line 820, Address: 0x27864c, Func Offset: 0x12bc
	// Line 821, Address: 0x278654, Func Offset: 0x12c4
	// Line 822, Address: 0x278668, Func Offset: 0x12d8
	// Line 823, Address: 0x278674, Func Offset: 0x12e4
	// Line 825, Address: 0x27867c, Func Offset: 0x12ec
	// Line 826, Address: 0x278690, Func Offset: 0x1300
	// Line 831, Address: 0x2786a0, Func Offset: 0x1310
	// Line 832, Address: 0x2786a4, Func Offset: 0x1314
	// Line 835, Address: 0x2786ac, Func Offset: 0x131c
	// Line 836, Address: 0x2786b8, Func Offset: 0x1328
	// Line 835, Address: 0x2786bc, Func Offset: 0x132c
	// Line 836, Address: 0x2786c0, Func Offset: 0x1330
	// Line 835, Address: 0x2786dc, Func Offset: 0x134c
	// Line 836, Address: 0x2786e0, Func Offset: 0x1350
	// Line 835, Address: 0x2786f0, Func Offset: 0x1360
	// Line 836, Address: 0x2786f8, Func Offset: 0x1368
	// Line 835, Address: 0x278700, Func Offset: 0x1370
	// Line 836, Address: 0x278704, Func Offset: 0x1374
	// Func End, Address: 0x27870c, Func Offset: 0x137c
}

// OrientSysInit_Hot__6OrientFP8NPARMgmtP20xParticleBatchSystem
// Start address: 0x278710
void OrientSysInit_Hot(NPARMgmt* mgmt, xParticleBatchSystem* pbs)
{
	// Line 549, Address: 0x278710, Func Offset: 0
	// Line 553, Address: 0x278714, Func Offset: 0x4
	// Line 549, Address: 0x278718, Func Offset: 0x8
	// Line 554, Address: 0x27871c, Func Offset: 0xc
	// Line 552, Address: 0x278720, Func Offset: 0x10
	// Line 560, Address: 0x278724, Func Offset: 0x14
	// Line 559, Address: 0x278728, Func Offset: 0x18
	// Line 560, Address: 0x27872c, Func Offset: 0x1c
	// Line 552, Address: 0x278730, Func Offset: 0x20
	// Line 553, Address: 0x278734, Func Offset: 0x24
	// Line 554, Address: 0x278738, Func Offset: 0x28
	// Line 555, Address: 0x27873c, Func Offset: 0x2c
	// Line 557, Address: 0x278740, Func Offset: 0x30
	// Line 558, Address: 0x278744, Func Offset: 0x34
	// Line 559, Address: 0x278748, Func Offset: 0x38
	// Line 560, Address: 0x27874c, Func Offset: 0x3c
	// Line 564, Address: 0x278750, Func Offset: 0x40
	// Func End, Address: 0x278758, Func Offset: 0x48
}

// OrientSysInit_Dull__6OrientFP8NPARMgmtP20xParticleBatchSystem
// Start address: 0x278760
void OrientSysInit_Dull(NPARMgmt* mgmt, xParticleBatchSystem* pbs)
{
	// Line 530, Address: 0x278760, Func Offset: 0
	// Line 534, Address: 0x278764, Func Offset: 0x4
	// Line 530, Address: 0x278768, Func Offset: 0x8
	// Line 535, Address: 0x27876c, Func Offset: 0xc
	// Line 533, Address: 0x278770, Func Offset: 0x10
	// Line 541, Address: 0x278774, Func Offset: 0x14
	// Line 540, Address: 0x278778, Func Offset: 0x18
	// Line 541, Address: 0x27877c, Func Offset: 0x1c
	// Line 533, Address: 0x278780, Func Offset: 0x20
	// Line 534, Address: 0x278784, Func Offset: 0x24
	// Line 535, Address: 0x278788, Func Offset: 0x28
	// Line 536, Address: 0x27878c, Func Offset: 0x2c
	// Line 538, Address: 0x278790, Func Offset: 0x30
	// Line 539, Address: 0x278794, Func Offset: 0x34
	// Line 540, Address: 0x278798, Func Offset: 0x38
	// Line 541, Address: 0x27879c, Func Offset: 0x3c
	// Line 545, Address: 0x2787a0, Func Offset: 0x40
	// Func End, Address: 0x2787a8, Func Offset: 0x48
}

// OrientSysTweaks__6OrientFP8NPARMgmtPCc
// Start address: 0x2787b0
void OrientSysTweaks(int8* prefix_root)
{
	int8 prefix_base[128];
	int8 prefix[128];
	// Line 508, Address: 0x2787b0, Func Offset: 0
	// Line 511, Address: 0x2787b8, Func Offset: 0x8
	// Line 508, Address: 0x2787c0, Func Offset: 0x10
	// Line 511, Address: 0x2787c4, Func Offset: 0x14
	// Line 513, Address: 0x2787d4, Func Offset: 0x24
	// Line 519, Address: 0x2787f0, Func Offset: 0x40
	// Func End, Address: 0x2787fc, Func Offset: 0x4c
}

// EmitRing__13OrientEmitterCFPC5xVec3PC5xVec3ffi
// Start address: 0x278800
void OrientEmitter::EmitRing(xVec3* pos_center, xVec3* dir_axis, float32 rad_emitCaller, float32 pct_spdRamp, int32 num_emitCaller)
{
	int32 pbs_id;
	int32 num_desire;
	int32 cnt_remain;
	int32 num_emitted;
	xVec3 dir_perp;
	xVec3 dir_orth;
	float32 darc;
	uint8* mem;
	int32 num_par;
	OrientParticle* par;
	int32 i;
	float32 samecalc;
	float32 ang_curr;
	xVec3 dir_outward;
	float32 rad_emit;
	// Line 190, Address: 0x278800, Func Offset: 0
	// Line 207, Address: 0x278804, Func Offset: 0x4
	// Line 190, Address: 0x278808, Func Offset: 0x8
	// Line 207, Address: 0x27880c, Func Offset: 0xc
	// Line 190, Address: 0x278810, Func Offset: 0x10
	// Line 207, Address: 0x278838, Func Offset: 0x38
	// Line 190, Address: 0x27883c, Func Offset: 0x3c
	// Line 207, Address: 0x278854, Func Offset: 0x54
	// Line 190, Address: 0x278858, Func Offset: 0x58
	// Line 207, Address: 0x27885c, Func Offset: 0x5c
	// Line 190, Address: 0x278860, Func Offset: 0x60
	// Line 207, Address: 0x278864, Func Offset: 0x64
	// Line 190, Address: 0x278868, Func Offset: 0x68
	// Line 207, Address: 0x27886c, Func Offset: 0x6c
	// Line 208, Address: 0x278870, Func Offset: 0x70
	// Line 214, Address: 0x278888, Func Offset: 0x88
	// Line 215, Address: 0x278890, Func Offset: 0x90
	// Line 230, Address: 0x278894, Func Offset: 0x94
	// Line 221, Address: 0x2788ac, Func Offset: 0xac
	// Line 230, Address: 0x2788b0, Func Offset: 0xb0
	// Line 235, Address: 0x2788d4, Func Offset: 0xd4
	// Line 230, Address: 0x2788d8, Func Offset: 0xd8
	// Line 235, Address: 0x2788dc, Func Offset: 0xdc
	// Line 230, Address: 0x2788e0, Func Offset: 0xe0
	// Line 235, Address: 0x2788f0, Func Offset: 0xf0
	// Line 230, Address: 0x2788f4, Func Offset: 0xf4
	// Line 235, Address: 0x2788fc, Func Offset: 0xfc
	// Line 230, Address: 0x278900, Func Offset: 0x100
	// Line 235, Address: 0x278924, Func Offset: 0x124
	// Line 230, Address: 0x278928, Func Offset: 0x128
	// Line 235, Address: 0x27892c, Func Offset: 0x12c
	// Line 241, Address: 0x27893c, Func Offset: 0x13c
	// Line 360, Address: 0x278944, Func Offset: 0x144
	// Line 217, Address: 0x278958, Func Offset: 0x158
	// Line 360, Address: 0x278960, Func Offset: 0x160
	// Line 217, Address: 0x278968, Func Offset: 0x168
	// Line 360, Address: 0x278994, Func Offset: 0x194
	// Line 217, Address: 0x278998, Func Offset: 0x198
	// Line 360, Address: 0x27899c, Func Offset: 0x19c
	// Line 217, Address: 0x2789a0, Func Offset: 0x1a0
	// Line 360, Address: 0x2789a8, Func Offset: 0x1a8
	// Line 245, Address: 0x2789c0, Func Offset: 0x1c0
	// Line 360, Address: 0x2789c8, Func Offset: 0x1c8
	// Line 260, Address: 0x278a18, Func Offset: 0x218
	// Line 360, Address: 0x278a20, Func Offset: 0x220
	// Line 260, Address: 0x278a28, Func Offset: 0x228
	// Line 267, Address: 0x278a54, Func Offset: 0x254
	// Line 360, Address: 0x278a58, Func Offset: 0x258
	// Line 261, Address: 0x278a60, Func Offset: 0x260
	// Line 360, Address: 0x278a64, Func Offset: 0x264
	// Line 261, Address: 0x278a68, Func Offset: 0x268
	// Line 360, Address: 0x278a70, Func Offset: 0x270
	// Line 272, Address: 0x278a80, Func Offset: 0x280
	// Line 360, Address: 0x278a88, Func Offset: 0x288
	// Line 272, Address: 0x278a90, Func Offset: 0x290
	// Line 360, Address: 0x278ac4, Func Offset: 0x2c4
	// Line 272, Address: 0x278ac8, Func Offset: 0x2c8
	// Line 360, Address: 0x278ae4, Func Offset: 0x2e4
	// Line 274, Address: 0x278aec, Func Offset: 0x2ec
	// Line 360, Address: 0x278af0, Func Offset: 0x2f0
	// Line 279, Address: 0x278b48, Func Offset: 0x348
	// Line 275, Address: 0x278b54, Func Offset: 0x354
	// Line 360, Address: 0x278b58, Func Offset: 0x358
	// Line 275, Address: 0x278b68, Func Offset: 0x368
	// Line 360, Address: 0x278b70, Func Offset: 0x370
	// Line 279, Address: 0x278b80, Func Offset: 0x380
	// Line 360, Address: 0x278b84, Func Offset: 0x384
	// Line 275, Address: 0x278ba0, Func Offset: 0x3a0
	// Line 360, Address: 0x278ba4, Func Offset: 0x3a4
	// Line 275, Address: 0x278bb0, Func Offset: 0x3b0
	// Line 360, Address: 0x278bb4, Func Offset: 0x3b4
	// Line 275, Address: 0x278bc4, Func Offset: 0x3c4
	// Line 360, Address: 0x278bc8, Func Offset: 0x3c8
	// Line 275, Address: 0x278c08, Func Offset: 0x408
	// Line 360, Address: 0x278c0c, Func Offset: 0x40c
	// Line 275, Address: 0x278c18, Func Offset: 0x418
	// Line 360, Address: 0x278c1c, Func Offset: 0x41c
	// Line 275, Address: 0x278c38, Func Offset: 0x438
	// Line 360, Address: 0x278c3c, Func Offset: 0x43c
	// Line 280, Address: 0x278c68, Func Offset: 0x468
	// Line 282, Address: 0x278c6c, Func Offset: 0x46c
	// Line 360, Address: 0x278c70, Func Offset: 0x470
	// Line 329, Address: 0x278c88, Func Offset: 0x488
	// Line 360, Address: 0x278c8c, Func Offset: 0x48c
	// Line 295, Address: 0x278ce4, Func Offset: 0x4e4
	// Line 360, Address: 0x278ce8, Func Offset: 0x4e8
	// Line 295, Address: 0x278cf8, Func Offset: 0x4f8
	// Line 360, Address: 0x278cfc, Func Offset: 0x4fc
	// Line 295, Address: 0x278d20, Func Offset: 0x520
	// Line 360, Address: 0x278d24, Func Offset: 0x524
	// Line 305, Address: 0x278d2c, Func Offset: 0x52c
	// Line 360, Address: 0x278d30, Func Offset: 0x530
	// Line 305, Address: 0x278d34, Func Offset: 0x534
	// Line 360, Address: 0x278d38, Func Offset: 0x538
	// Line 305, Address: 0x278d4c, Func Offset: 0x54c
	// Line 360, Address: 0x278d50, Func Offset: 0x550
	// Line 305, Address: 0x278d54, Func Offset: 0x554
	// Line 360, Address: 0x278d5c, Func Offset: 0x55c
	// Line 295, Address: 0x278d80, Func Offset: 0x580
	// Line 360, Address: 0x278d84, Func Offset: 0x584
	// Line 295, Address: 0x278d98, Func Offset: 0x598
	// Line 360, Address: 0x278d9c, Func Offset: 0x59c
	// Line 307, Address: 0x278da4, Func Offset: 0x5a4
	// Line 360, Address: 0x278db0, Func Offset: 0x5b0
	// Line 295, Address: 0x278db8, Func Offset: 0x5b8
	// Line 360, Address: 0x278dbc, Func Offset: 0x5bc
	// Line 305, Address: 0x278dc8, Func Offset: 0x5c8
	// Line 360, Address: 0x278dcc, Func Offset: 0x5cc
	// Line 307, Address: 0x278df0, Func Offset: 0x5f0
	// Line 360, Address: 0x278df4, Func Offset: 0x5f4
	// Line 307, Address: 0x278e1c, Func Offset: 0x61c
	// Line 360, Address: 0x278e20, Func Offset: 0x620
	// Line 313, Address: 0x278e48, Func Offset: 0x648
	// Line 360, Address: 0x278e4c, Func Offset: 0x64c
	// Line 307, Address: 0x278e8c, Func Offset: 0x68c
	// Line 360, Address: 0x278e90, Func Offset: 0x690
	// Line 313, Address: 0x278e9c, Func Offset: 0x69c
	// Line 360, Address: 0x278ea0, Func Offset: 0x6a0
	// Line 307, Address: 0x278ea4, Func Offset: 0x6a4
	// Line 360, Address: 0x278ea8, Func Offset: 0x6a8
	// Line 313, Address: 0x278eac, Func Offset: 0x6ac
	// Line 360, Address: 0x278eb0, Func Offset: 0x6b0
	// Line 314, Address: 0x278eb8, Func Offset: 0x6b8
	// Line 360, Address: 0x278ebc, Func Offset: 0x6bc
	// Line 314, Address: 0x278ee4, Func Offset: 0x6e4
	// Line 360, Address: 0x278ee8, Func Offset: 0x6e8
	// Line 314, Address: 0x278ef8, Func Offset: 0x6f8
	// Line 360, Address: 0x278efc, Func Offset: 0x6fc
	// Line 307, Address: 0x278f00, Func Offset: 0x700
	// Line 360, Address: 0x278f04, Func Offset: 0x704
	// Line 309, Address: 0x278f28, Func Offset: 0x728
	// Line 360, Address: 0x278f2c, Func Offset: 0x72c
	// Line 309, Address: 0x278f40, Func Offset: 0x740
	// Line 360, Address: 0x278f44, Func Offset: 0x744
	// Line 309, Address: 0x278f4c, Func Offset: 0x74c
	// Line 360, Address: 0x278f50, Func Offset: 0x750
	// Line 314, Address: 0x278f64, Func Offset: 0x764
	// Line 360, Address: 0x278f68, Func Offset: 0x768
	// Line 314, Address: 0x278f70, Func Offset: 0x770
	// Line 360, Address: 0x278f74, Func Offset: 0x774
	// Line 314, Address: 0x278f7c, Func Offset: 0x77c
	// Line 360, Address: 0x278f80, Func Offset: 0x780
	// Line 329, Address: 0x278f88, Func Offset: 0x788
	// Line 360, Address: 0x278f8c, Func Offset: 0x78c
	// Line 329, Address: 0x278f94, Func Offset: 0x794
	// Line 360, Address: 0x278f98, Func Offset: 0x798
	// Line 329, Address: 0x278fa0, Func Offset: 0x7a0
	// Line 360, Address: 0x278fa4, Func Offset: 0x7a4
	// Line 329, Address: 0x278fac, Func Offset: 0x7ac
	// Line 360, Address: 0x278fb0, Func Offset: 0x7b0
	// Line 329, Address: 0x278fb8, Func Offset: 0x7b8
	// Line 360, Address: 0x278fbc, Func Offset: 0x7bc
	// Line 329, Address: 0x278fc4, Func Offset: 0x7c4
	// Line 334, Address: 0x278fcc, Func Offset: 0x7cc
	// Line 335, Address: 0x278fd0, Func Offset: 0x7d0
	// Line 360, Address: 0x278fd4, Func Offset: 0x7d4
	// Line 336, Address: 0x278fd8, Func Offset: 0x7d8
	// Line 360, Address: 0x279028, Func Offset: 0x828
	// Line 337, Address: 0x27902c, Func Offset: 0x82c
	// Line 343, Address: 0x279034, Func Offset: 0x834
	// Line 344, Address: 0x279038, Func Offset: 0x838
	// Line 360, Address: 0x27903c, Func Offset: 0x83c
	// Line 347, Address: 0x279044, Func Offset: 0x844
	// Line 360, Address: 0x279048, Func Offset: 0x848
	// Line 282, Address: 0x279070, Func Offset: 0x870
	// Line 361, Address: 0x279088, Func Offset: 0x888
	// Func End, Address: 0x2790d4, Func Offset: 0x8d4
}

