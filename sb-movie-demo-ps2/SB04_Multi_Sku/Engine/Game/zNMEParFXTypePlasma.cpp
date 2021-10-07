



int32 PlasmaSysUpdate(uint8* mem, int32 count, ptank_pool& apool, float32 dt);
void PlasmaSysInit(NPARMgmt* mgmt, xParticleBatchSystem* pbs);
void PlasmaSysTweaks(int8* prefix_root);
void ArcWelder(xVec3* pos, xVec3* dir_axis, float32 pct_spdRamp, int32 num_emitOverride);

// PlasmaSysUpdate__6PlasmaFPUciR10ptank_poolfPv
// Start address: 0x276180
int32 PlasmaSysUpdate(uint8* mem, int32 count, ptank_pool& apool, float32 dt)
{
	ptank_pool__pos_color_size_rot_uv2* pool;
	PlasmaParticle* par;
	PlasmaParticle* end;
	xVec3 pos_plyr;
	PlasmaEmitter* emitter;
	float32 tym_life;
	float32 rat_rev;
	float32 rat;
	float32 fac_keep;
	float32 beans;
	float32 fac_accelSide;
	float32 arch;
	float32 dim;
	float32 cfac;
	float32 ds2_plyr;
	// Line 413, Address: 0x276180, Func Offset: 0
	// Line 418, Address: 0x276184, Func Offset: 0x4
	// Line 413, Address: 0x276188, Func Offset: 0x8
	// Line 414, Address: 0x2761ac, Func Offset: 0x2c
	// Line 413, Address: 0x2761b0, Func Offset: 0x30
	// Line 417, Address: 0x2761b4, Func Offset: 0x34
	// Line 413, Address: 0x2761b8, Func Offset: 0x38
	// Line 418, Address: 0x2761bc, Func Offset: 0x3c
	// Line 413, Address: 0x2761c0, Func Offset: 0x40
	// Line 418, Address: 0x2761d8, Func Offset: 0x58
	// Line 419, Address: 0x2761e4, Func Offset: 0x64
	// Line 421, Address: 0x2761f8, Func Offset: 0x78
	// Line 430, Address: 0x276230, Func Offset: 0xb0
	// Line 423, Address: 0x276234, Func Offset: 0xb4
	// Line 430, Address: 0x276238, Func Offset: 0xb8
	// Line 434, Address: 0x27623c, Func Offset: 0xbc
	// Line 437, Address: 0x27625c, Func Offset: 0xdc
	// Line 438, Address: 0x276260, Func Offset: 0xe0
	// Line 439, Address: 0x27630c, Func Offset: 0x18c
	// Line 444, Address: 0x276314, Func Offset: 0x194
	// Line 446, Address: 0x276330, Func Offset: 0x1b0
	// Line 454, Address: 0x276334, Func Offset: 0x1b4
	// Line 446, Address: 0x276338, Func Offset: 0x1b8
	// Line 454, Address: 0x27633c, Func Offset: 0x1bc
	// Line 446, Address: 0x276360, Func Offset: 0x1e0
	// Line 454, Address: 0x276364, Func Offset: 0x1e4
	// Line 457, Address: 0x2763fc, Func Offset: 0x27c
	// Line 460, Address: 0x276458, Func Offset: 0x2d8
	// Line 458, Address: 0x27645c, Func Offset: 0x2dc
	// Line 460, Address: 0x276460, Func Offset: 0x2e0
	// Line 458, Address: 0x27646c, Func Offset: 0x2ec
	// Line 460, Address: 0x276470, Func Offset: 0x2f0
	// Line 461, Address: 0x276484, Func Offset: 0x304
	// Line 462, Address: 0x276504, Func Offset: 0x384
	// Line 463, Address: 0x27650c, Func Offset: 0x38c
	// Line 465, Address: 0x276550, Func Offset: 0x3d0
	// Line 466, Address: 0x27655c, Func Offset: 0x3dc
	// Line 472, Address: 0x27657c, Func Offset: 0x3fc
	// Line 473, Address: 0x276590, Func Offset: 0x410
	// Line 472, Address: 0x276594, Func Offset: 0x414
	// Line 473, Address: 0x276598, Func Offset: 0x418
	// Line 474, Address: 0x2765ac, Func Offset: 0x42c
	// Line 480, Address: 0x2765b0, Func Offset: 0x430
	// Line 488, Address: 0x2765f8, Func Offset: 0x478
	// Line 489, Address: 0x276604, Func Offset: 0x484
	// Line 488, Address: 0x276608, Func Offset: 0x488
	// Line 489, Address: 0x276628, Func Offset: 0x4a8
	// Line 490, Address: 0x2766a0, Func Offset: 0x520
	// Line 491, Address: 0x27671c, Func Offset: 0x59c
	// Line 492, Address: 0x276798, Func Offset: 0x618
	// Line 506, Address: 0x276814, Func Offset: 0x694
	// Line 507, Address: 0x276828, Func Offset: 0x6a8
	// Line 513, Address: 0x276834, Func Offset: 0x6b4
	// Line 520, Address: 0x276894, Func Offset: 0x714
	// Line 521, Address: 0x276898, Func Offset: 0x718
	// Line 520, Address: 0x27689c, Func Offset: 0x71c
	// Line 521, Address: 0x2768ac, Func Offset: 0x72c
	// Line 520, Address: 0x2768b0, Func Offset: 0x730
	// Line 521, Address: 0x2768d0, Func Offset: 0x750
	// Line 520, Address: 0x2768d4, Func Offset: 0x754
	// Line 521, Address: 0x2768dc, Func Offset: 0x75c
	// Line 522, Address: 0x2768e4, Func Offset: 0x764
	// Line 545, Address: 0x2768f8, Func Offset: 0x778
	// Line 546, Address: 0x276a4c, Func Offset: 0x8cc
	// Line 549, Address: 0x276a58, Func Offset: 0x8d8
	// Line 558, Address: 0x276a64, Func Offset: 0x8e4
	// Line 567, Address: 0x276a6c, Func Offset: 0x8ec
	// Line 558, Address: 0x276a70, Func Offset: 0x8f0
	// Line 560, Address: 0x276a84, Func Offset: 0x904
	// Line 562, Address: 0x276aa8, Func Offset: 0x928
	// Line 564, Address: 0x276ab8, Func Offset: 0x938
	// Line 567, Address: 0x276ac4, Func Offset: 0x944
	// Line 568, Address: 0x276acc, Func Offset: 0x94c
	// Line 569, Address: 0x276af4, Func Offset: 0x974
	// Line 570, Address: 0x276b10, Func Offset: 0x990
	// Line 571, Address: 0x276b18, Func Offset: 0x998
	// Line 572, Address: 0x276b20, Func Offset: 0x9a0
	// Line 573, Address: 0x276b48, Func Offset: 0x9c8
	// Line 574, Address: 0x276b64, Func Offset: 0x9e4
	// Line 575, Address: 0x276b6c, Func Offset: 0x9ec
	// Line 576, Address: 0x276b78, Func Offset: 0x9f8
	// Line 577, Address: 0x276ba0, Func Offset: 0xa20
	// Line 582, Address: 0x276bc0, Func Offset: 0xa40
	// Line 583, Address: 0x276bc4, Func Offset: 0xa44
	// Line 586, Address: 0x276bcc, Func Offset: 0xa4c
	// Line 587, Address: 0x276be0, Func Offset: 0xa60
	// Func End, Address: 0x276c28, Func Offset: 0xaa8
}

// PlasmaSysInit__6PlasmaFP8NPARMgmtP20xParticleBatchSystem
// Start address: 0x276c30
void PlasmaSysInit(NPARMgmt* mgmt, xParticleBatchSystem* pbs)
{
	// Line 392, Address: 0x276c30, Func Offset: 0
	// Line 399, Address: 0x276c34, Func Offset: 0x4
	// Line 392, Address: 0x276c38, Func Offset: 0x8
	// Line 401, Address: 0x276c3c, Func Offset: 0xc
	// Line 398, Address: 0x276c40, Func Offset: 0x10
	// Line 406, Address: 0x276c44, Func Offset: 0x14
	// Line 405, Address: 0x276c48, Func Offset: 0x18
	// Line 406, Address: 0x276c4c, Func Offset: 0x1c
	// Line 398, Address: 0x276c50, Func Offset: 0x20
	// Line 399, Address: 0x276c54, Func Offset: 0x24
	// Line 400, Address: 0x276c58, Func Offset: 0x28
	// Line 401, Address: 0x276c5c, Func Offset: 0x2c
	// Line 403, Address: 0x276c60, Func Offset: 0x30
	// Line 404, Address: 0x276c64, Func Offset: 0x34
	// Line 405, Address: 0x276c68, Func Offset: 0x38
	// Line 406, Address: 0x276c6c, Func Offset: 0x3c
	// Line 410, Address: 0x276c70, Func Offset: 0x40
	// Func End, Address: 0x276c78, Func Offset: 0x48
}

// PlasmaSysTweaks__6PlasmaFP8NPARMgmtPCc
// Start address: 0x276c80
void PlasmaSysTweaks(int8* prefix_root)
{
	int8 prefix_base[128];
	int8 prefix[128];
	// Line 372, Address: 0x276c80, Func Offset: 0
	// Line 375, Address: 0x276c88, Func Offset: 0x8
	// Line 372, Address: 0x276c90, Func Offset: 0x10
	// Line 375, Address: 0x276c94, Func Offset: 0x14
	// Line 377, Address: 0x276ca4, Func Offset: 0x24
	// Line 388, Address: 0x276cc0, Func Offset: 0x40
	// Func End, Address: 0x276ccc, Func Offset: 0x4c
}

// ArcWelder__13PlasmaEmitterCFPC5xVec3PC5xVec3fi
// Start address: 0x276cd0
void PlasmaEmitter::ArcWelder(xVec3* pos, xVec3* dir_axis, float32 pct_spdRamp, int32 num_emitOverride)
{
	int32 pbs_id;
	int32 num_emitted;
	int32 cnt_remain;
	xVec3 dir_perp;
	xVec3 dir_orth;
	uint8* mem;
	int32 num_par;
	float32 darc;
	PlasmaParticle* par;
	int32 i;
	float32 ang_curr;
	xVec3 dir_outward;
	float32 samecalc;
	// Line 241, Address: 0x276cd0, Func Offset: 0
	// Line 252, Address: 0x276cd4, Func Offset: 0x4
	// Line 241, Address: 0x276cd8, Func Offset: 0x8
	// Line 252, Address: 0x276cdc, Func Offset: 0xc
	// Line 241, Address: 0x276ce0, Func Offset: 0x10
	// Line 252, Address: 0x276d00, Func Offset: 0x30
	// Line 241, Address: 0x276d08, Func Offset: 0x38
	// Line 252, Address: 0x276d20, Func Offset: 0x50
	// Line 241, Address: 0x276d24, Func Offset: 0x54
	// Line 252, Address: 0x276d28, Func Offset: 0x58
	// Line 241, Address: 0x276d2c, Func Offset: 0x5c
	// Line 252, Address: 0x276d30, Func Offset: 0x60
	// Line 241, Address: 0x276d34, Func Offset: 0x64
	// Line 252, Address: 0x276d38, Func Offset: 0x68
	// Line 253, Address: 0x276d3c, Func Offset: 0x6c
	// Line 255, Address: 0x276d50, Func Offset: 0x80
	// Line 257, Address: 0x276d54, Func Offset: 0x84
	// Line 260, Address: 0x276d5c, Func Offset: 0x8c
	// Line 267, Address: 0x276d60, Func Offset: 0x90
	// Line 269, Address: 0x276dd8, Func Offset: 0x108
	// Line 267, Address: 0x276ddc, Func Offset: 0x10c
	// Line 269, Address: 0x276de0, Func Offset: 0x110
	// Line 346, Address: 0x276de8, Func Offset: 0x118
	// Line 258, Address: 0x276df4, Func Offset: 0x124
	// Line 346, Address: 0x276dfc, Func Offset: 0x12c
	// Line 273, Address: 0x276e04, Func Offset: 0x134
	// Line 346, Address: 0x276e0c, Func Offset: 0x13c
	// Line 273, Address: 0x276e14, Func Offset: 0x144
	// Line 346, Address: 0x276e18, Func Offset: 0x148
	// Line 277, Address: 0x276e20, Func Offset: 0x150
	// Line 346, Address: 0x276e2c, Func Offset: 0x15c
	// Line 282, Address: 0x276e34, Func Offset: 0x164
	// Line 277, Address: 0x276e38, Func Offset: 0x168
	// Line 346, Address: 0x276e44, Func Offset: 0x174
	// Line 277, Address: 0x276e48, Func Offset: 0x178
	// Line 346, Address: 0x276e50, Func Offset: 0x180
	// Line 285, Address: 0x276e78, Func Offset: 0x1a8
	// Line 346, Address: 0x276e80, Func Offset: 0x1b0
	// Line 285, Address: 0x276e88, Func Offset: 0x1b8
	// Line 288, Address: 0x276eb4, Func Offset: 0x1e4
	// Line 346, Address: 0x276ec8, Func Offset: 0x1f8
	// Line 288, Address: 0x276ecc, Func Offset: 0x1fc
	// Line 346, Address: 0x276ed8, Func Offset: 0x208
	// Line 291, Address: 0x276ee0, Func Offset: 0x210
	// Line 346, Address: 0x276ee4, Func Offset: 0x214
	// Line 303, Address: 0x276f18, Func Offset: 0x248
	// Line 346, Address: 0x276f1c, Func Offset: 0x24c
	// Line 316, Address: 0x276f48, Func Offset: 0x278
	// Line 292, Address: 0x276f50, Func Offset: 0x280
	// Line 346, Address: 0x276f54, Func Offset: 0x284
	// Line 292, Address: 0x276f60, Func Offset: 0x290
	// Line 346, Address: 0x276f64, Func Offset: 0x294
	// Line 331, Address: 0x276f68, Func Offset: 0x298
	// Line 346, Address: 0x276f74, Func Offset: 0x2a4
	// Line 292, Address: 0x276f90, Func Offset: 0x2c0
	// Line 330, Address: 0x276f94, Func Offset: 0x2c4
	// Line 292, Address: 0x276f98, Func Offset: 0x2c8
	// Line 346, Address: 0x276f9c, Func Offset: 0x2cc
	// Line 292, Address: 0x276fb4, Func Offset: 0x2e4
	// Line 346, Address: 0x276fb8, Func Offset: 0x2e8
	// Line 331, Address: 0x276fe0, Func Offset: 0x310
	// Line 346, Address: 0x276fe4, Func Offset: 0x314
	// Line 331, Address: 0x276ff0, Func Offset: 0x320
	// Line 346, Address: 0x276ff4, Func Offset: 0x324
	// Line 331, Address: 0x277000, Func Offset: 0x330
	// Line 292, Address: 0x277004, Func Offset: 0x334
	// Line 346, Address: 0x277008, Func Offset: 0x338
	// Line 292, Address: 0x277030, Func Offset: 0x360
	// Line 346, Address: 0x277034, Func Offset: 0x364
	// Line 331, Address: 0x27704c, Func Offset: 0x37c
	// Line 346, Address: 0x277050, Func Offset: 0x380
	// Line 292, Address: 0x277054, Func Offset: 0x384
	// Line 346, Address: 0x277058, Func Offset: 0x388
	// Line 303, Address: 0x2770b4, Func Offset: 0x3e4
	// Line 346, Address: 0x2770bc, Func Offset: 0x3ec
	// Line 303, Address: 0x2770c0, Func Offset: 0x3f0
	// Line 292, Address: 0x2770c4, Func Offset: 0x3f4
	// Line 346, Address: 0x2770c8, Func Offset: 0x3f8
	// Line 295, Address: 0x2770f8, Func Offset: 0x428
	// Line 346, Address: 0x2770fc, Func Offset: 0x42c
	// Line 305, Address: 0x277104, Func Offset: 0x434
	// Line 346, Address: 0x277108, Func Offset: 0x438
	// Line 295, Address: 0x27710c, Func Offset: 0x43c
	// Line 346, Address: 0x277110, Func Offset: 0x440
	// Line 303, Address: 0x27711c, Func Offset: 0x44c
	// Line 346, Address: 0x277120, Func Offset: 0x450
	// Line 305, Address: 0x27712c, Func Offset: 0x45c
	// Line 346, Address: 0x277130, Func Offset: 0x460
	// Line 303, Address: 0x277134, Func Offset: 0x464
	// Line 346, Address: 0x277138, Func Offset: 0x468
	// Line 316, Address: 0x277158, Func Offset: 0x488
	// Line 295, Address: 0x27715c, Func Offset: 0x48c
	// Line 346, Address: 0x277160, Func Offset: 0x490
	// Line 305, Address: 0x277168, Func Offset: 0x498
	// Line 346, Address: 0x27716c, Func Offset: 0x49c
	// Line 305, Address: 0x277174, Func Offset: 0x4a4
	// Line 346, Address: 0x277178, Func Offset: 0x4a8
	// Line 316, Address: 0x277190, Func Offset: 0x4c0
	// Line 346, Address: 0x277194, Func Offset: 0x4c4
	// Line 295, Address: 0x2771a8, Func Offset: 0x4d8
	// Line 346, Address: 0x2771ac, Func Offset: 0x4dc
	// Line 295, Address: 0x2771b4, Func Offset: 0x4e4
	// Line 316, Address: 0x2771b8, Func Offset: 0x4e8
	// Line 346, Address: 0x2771bc, Func Offset: 0x4ec
	// Line 305, Address: 0x2771d4, Func Offset: 0x504
	// Line 346, Address: 0x2771d8, Func Offset: 0x508
	// Line 295, Address: 0x277224, Func Offset: 0x554
	// Line 346, Address: 0x277228, Func Offset: 0x558
	// Line 305, Address: 0x277258, Func Offset: 0x588
	// Line 346, Address: 0x27725c, Func Offset: 0x58c
	// Line 305, Address: 0x277264, Func Offset: 0x594
	// Line 346, Address: 0x277268, Func Offset: 0x598
	// Line 305, Address: 0x277270, Func Offset: 0x5a0
	// Line 346, Address: 0x277274, Func Offset: 0x5a4
	// Line 307, Address: 0x27727c, Func Offset: 0x5ac
	// Line 346, Address: 0x277280, Func Offset: 0x5b0
	// Line 307, Address: 0x277288, Func Offset: 0x5b8
	// Line 346, Address: 0x27728c, Func Offset: 0x5bc
	// Line 307, Address: 0x277294, Func Offset: 0x5c4
	// Line 346, Address: 0x277298, Func Offset: 0x5c8
	// Line 331, Address: 0x2772c0, Func Offset: 0x5f0
	// Line 335, Address: 0x2772f0, Func Offset: 0x620
	// Line 346, Address: 0x2772f4, Func Offset: 0x624
	// Line 335, Address: 0x2772f8, Func Offset: 0x628
	// Line 346, Address: 0x2772fc, Func Offset: 0x62c
	// Line 335, Address: 0x277308, Func Offset: 0x638
	// Line 346, Address: 0x27730c, Func Offset: 0x63c
	// Line 335, Address: 0x277310, Func Offset: 0x640
	// Line 346, Address: 0x27731c, Func Offset: 0x64c
	// Line 335, Address: 0x277328, Func Offset: 0x658
	// Line 346, Address: 0x277330, Func Offset: 0x660
	// Line 347, Address: 0x277348, Func Offset: 0x678
	// Func End, Address: 0x277390, Func Offset: 0x6c0
}

