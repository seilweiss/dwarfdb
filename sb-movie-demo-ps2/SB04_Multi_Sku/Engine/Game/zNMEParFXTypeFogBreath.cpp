



int32 FogSysUpdate(uint8* mem, int32 count, ptank_pool& apool, float32 dt);
void FogSysInit(NPARMgmt* mgmt, xParticleBatchSystem* pbs);
void FogSysTweaks(int8* prefix_root);
void SpewVolume(xVec3* pos, xMat3x3* axis);

// FogSysUpdate__9FogBreathFPUciR10ptank_poolfPv
// Start address: 0x2790e0
int32 FogSysUpdate(uint8* mem, int32 count, ptank_pool& apool, float32 dt)
{
	ptank_pool__pos_color_size_rot* pool;
	FogParticle* par;
	FogParticle* end;
	xVec3 pos_plyr;
	FogBreathEmitter* emitter;
	float32 tym_life;
	float32 rat_rev;
	float32 rat;
	float32 fac_keep;
	float32 beans;
	float32 arch;
	float32 dim;
	float32 ds2_plyr;
	// Line 340, Address: 0x2790e0, Func Offset: 0
	// Line 345, Address: 0x2790e4, Func Offset: 0x4
	// Line 340, Address: 0x2790e8, Func Offset: 0x8
	// Line 341, Address: 0x27910c, Func Offset: 0x2c
	// Line 340, Address: 0x279110, Func Offset: 0x30
	// Line 344, Address: 0x279114, Func Offset: 0x34
	// Line 340, Address: 0x279118, Func Offset: 0x38
	// Line 345, Address: 0x27911c, Func Offset: 0x3c
	// Line 340, Address: 0x279120, Func Offset: 0x40
	// Line 345, Address: 0x279138, Func Offset: 0x58
	// Line 346, Address: 0x279144, Func Offset: 0x64
	// Line 348, Address: 0x279158, Func Offset: 0x78
	// Line 357, Address: 0x279190, Func Offset: 0xb0
	// Line 350, Address: 0x279194, Func Offset: 0xb4
	// Line 357, Address: 0x279198, Func Offset: 0xb8
	// Line 361, Address: 0x27919c, Func Offset: 0xbc
	// Line 364, Address: 0x2791bc, Func Offset: 0xdc
	// Line 365, Address: 0x2791c0, Func Offset: 0xe0
	// Line 366, Address: 0x27926c, Func Offset: 0x18c
	// Line 371, Address: 0x279274, Func Offset: 0x194
	// Line 373, Address: 0x279290, Func Offset: 0x1b0
	// Line 381, Address: 0x279294, Func Offset: 0x1b4
	// Line 373, Address: 0x279298, Func Offset: 0x1b8
	// Line 381, Address: 0x27929c, Func Offset: 0x1bc
	// Line 373, Address: 0x2792c0, Func Offset: 0x1e0
	// Line 381, Address: 0x2792c4, Func Offset: 0x1e4
	// Line 384, Address: 0x27935c, Func Offset: 0x27c
	// Line 385, Address: 0x2793b8, Func Offset: 0x2d8
	// Line 393, Address: 0x2793d4, Func Offset: 0x2f4
	// Line 385, Address: 0x2793d8, Func Offset: 0x2f8
	// Line 387, Address: 0x2793dc, Func Offset: 0x2fc
	// Line 393, Address: 0x279400, Func Offset: 0x320
	// Line 387, Address: 0x27940c, Func Offset: 0x32c
	// Line 388, Address: 0x279414, Func Offset: 0x334
	// Line 394, Address: 0x279424, Func Offset: 0x344
	// Line 388, Address: 0x279428, Func Offset: 0x348
	// Line 394, Address: 0x279494, Func Offset: 0x3b4
	// Line 393, Address: 0x279498, Func Offset: 0x3b8
	// Line 394, Address: 0x27949c, Func Offset: 0x3bc
	// Line 395, Address: 0x2794a8, Func Offset: 0x3c8
	// Line 401, Address: 0x2794ac, Func Offset: 0x3cc
	// Line 408, Address: 0x2794f4, Func Offset: 0x414
	// Line 422, Address: 0x27956c, Func Offset: 0x48c
	// Line 423, Address: 0x279580, Func Offset: 0x4a0
	// Line 429, Address: 0x27958c, Func Offset: 0x4ac
	// Line 436, Address: 0x2795ec, Func Offset: 0x50c
	// Line 437, Address: 0x2795f0, Func Offset: 0x510
	// Line 436, Address: 0x2795f4, Func Offset: 0x514
	// Line 437, Address: 0x279604, Func Offset: 0x524
	// Line 436, Address: 0x279608, Func Offset: 0x528
	// Line 437, Address: 0x279628, Func Offset: 0x548
	// Line 436, Address: 0x27962c, Func Offset: 0x54c
	// Line 437, Address: 0x279634, Func Offset: 0x554
	// Line 438, Address: 0x27963c, Func Offset: 0x55c
	// Line 461, Address: 0x279650, Func Offset: 0x570
	// Line 462, Address: 0x27977c, Func Offset: 0x69c
	// Line 465, Address: 0x279788, Func Offset: 0x6a8
	// Line 474, Address: 0x279794, Func Offset: 0x6b4
	// Line 476, Address: 0x2797b0, Func Offset: 0x6d0
	// Line 478, Address: 0x2797d4, Func Offset: 0x6f4
	// Line 480, Address: 0x2797e4, Func Offset: 0x704
	// Line 491, Address: 0x2797ec, Func Offset: 0x70c
	// Line 492, Address: 0x2797f0, Func Offset: 0x710
	// Line 495, Address: 0x2797f8, Func Offset: 0x718
	// Line 496, Address: 0x27980c, Func Offset: 0x72c
	// Func End, Address: 0x279854, Func Offset: 0x774
}

// FogSysInit__9FogBreathFP8NPARMgmtP20xParticleBatchSystem
// Start address: 0x279860
void FogSysInit(NPARMgmt* mgmt, xParticleBatchSystem* pbs)
{
	// Line 322, Address: 0x279860, Func Offset: 0
	// Line 326, Address: 0x279864, Func Offset: 0x4
	// Line 322, Address: 0x279868, Func Offset: 0x8
	// Line 327, Address: 0x27986c, Func Offset: 0xc
	// Line 325, Address: 0x279870, Func Offset: 0x10
	// Line 333, Address: 0x279874, Func Offset: 0x14
	// Line 332, Address: 0x279878, Func Offset: 0x18
	// Line 333, Address: 0x27987c, Func Offset: 0x1c
	// Line 325, Address: 0x279880, Func Offset: 0x20
	// Line 326, Address: 0x279884, Func Offset: 0x24
	// Line 327, Address: 0x279888, Func Offset: 0x28
	// Line 328, Address: 0x27988c, Func Offset: 0x2c
	// Line 330, Address: 0x279890, Func Offset: 0x30
	// Line 331, Address: 0x279894, Func Offset: 0x34
	// Line 332, Address: 0x279898, Func Offset: 0x38
	// Line 333, Address: 0x27989c, Func Offset: 0x3c
	// Line 337, Address: 0x2798a0, Func Offset: 0x40
	// Func End, Address: 0x2798a8, Func Offset: 0x48
}

// FogSysTweaks__9FogBreathFP8NPARMgmtPCc
// Start address: 0x2798b0
void FogSysTweaks(int8* prefix_root)
{
	int8 prefix_base[128];
	int8 prefix[128];
	// Line 302, Address: 0x2798b0, Func Offset: 0
	// Line 305, Address: 0x2798b8, Func Offset: 0x8
	// Line 302, Address: 0x2798c0, Func Offset: 0x10
	// Line 305, Address: 0x2798c4, Func Offset: 0x14
	// Line 307, Address: 0x2798d4, Func Offset: 0x24
	// Line 318, Address: 0x2798f0, Func Offset: 0x40
	// Func End, Address: 0x2798fc, Func Offset: 0x4c
}

// SpewVolume__16FogBreathEmitterCFPC5xVec3PC7xMat3x3
// Start address: 0x279900
void FogBreathEmitter::SpewVolume(xVec3* pos, xMat3x3* axis)
{
	int32 pbs_id;
	int32 cnt_remain;
	uint8* mem;
	int32 num_par;
	FogParticle* par;
	int32 i;
	float32 samecalc;
	// Line 172, Address: 0x279900, Func Offset: 0
	// Line 181, Address: 0x279904, Func Offset: 0x4
	// Line 172, Address: 0x279908, Func Offset: 0x8
	// Line 181, Address: 0x27990c, Func Offset: 0xc
	// Line 172, Address: 0x279910, Func Offset: 0x10
	// Line 181, Address: 0x279930, Func Offset: 0x30
	// Line 172, Address: 0x279938, Func Offset: 0x38
	// Line 181, Address: 0x27994c, Func Offset: 0x4c
	// Line 182, Address: 0x27995c, Func Offset: 0x5c
	// Line 184, Address: 0x27996c, Func Offset: 0x6c
	// Line 187, Address: 0x279970, Func Offset: 0x70
	// Line 232, Address: 0x279978, Func Offset: 0x78
	// Line 191, Address: 0x279990, Func Offset: 0x90
	// Line 232, Address: 0x279998, Func Offset: 0x98
	// Line 191, Address: 0x2799a0, Func Offset: 0xa0
	// Line 232, Address: 0x2799a4, Func Offset: 0xa4
	// Line 200, Address: 0x2799d0, Func Offset: 0xd0
	// Line 232, Address: 0x2799d8, Func Offset: 0xd8
	// Line 200, Address: 0x2799e0, Func Offset: 0xe0
	// Line 232, Address: 0x279a0c, Func Offset: 0x10c
	// Line 204, Address: 0x279a3c, Func Offset: 0x13c
	// Line 232, Address: 0x279a40, Func Offset: 0x140
	// Line 204, Address: 0x279a54, Func Offset: 0x154
	// Line 232, Address: 0x279a58, Func Offset: 0x158
	// Line 204, Address: 0x279a60, Func Offset: 0x160
	// Line 232, Address: 0x279a64, Func Offset: 0x164
	// Line 204, Address: 0x279aa0, Func Offset: 0x1a0
	// Line 232, Address: 0x279aa8, Func Offset: 0x1a8
	// Line 204, Address: 0x279ab0, Func Offset: 0x1b0
	// Line 232, Address: 0x279af4, Func Offset: 0x1f4
	// Line 204, Address: 0x279af8, Func Offset: 0x1f8
	// Line 232, Address: 0x279afc, Func Offset: 0x1fc
	// Line 204, Address: 0x279b14, Func Offset: 0x214
	// Line 232, Address: 0x279b18, Func Offset: 0x218
	// Line 204, Address: 0x279b24, Func Offset: 0x224
	// Line 232, Address: 0x279b28, Func Offset: 0x228
	// Line 204, Address: 0x279b34, Func Offset: 0x234
	// Line 232, Address: 0x279b38, Func Offset: 0x238
	// Line 204, Address: 0x279b40, Func Offset: 0x240
	// Line 232, Address: 0x279b44, Func Offset: 0x244
	// Line 204, Address: 0x279b6c, Func Offset: 0x26c
	// Line 232, Address: 0x279b70, Func Offset: 0x270
	// Line 204, Address: 0x279b78, Func Offset: 0x278
	// Line 232, Address: 0x279b7c, Func Offset: 0x27c
	// Line 204, Address: 0x279b80, Func Offset: 0x280
	// Line 232, Address: 0x279b84, Func Offset: 0x284
	// Line 204, Address: 0x279b90, Func Offset: 0x290
	// Line 232, Address: 0x279b98, Func Offset: 0x298
	// Line 204, Address: 0x279ba0, Func Offset: 0x2a0
	// Line 232, Address: 0x279be4, Func Offset: 0x2e4
	// Line 204, Address: 0x279be8, Func Offset: 0x2e8
	// Line 232, Address: 0x279bec, Func Offset: 0x2ec
	// Line 204, Address: 0x279c04, Func Offset: 0x304
	// Line 232, Address: 0x279c08, Func Offset: 0x308
	// Line 204, Address: 0x279c14, Func Offset: 0x314
	// Line 232, Address: 0x279c18, Func Offset: 0x318
	// Line 204, Address: 0x279c24, Func Offset: 0x324
	// Line 232, Address: 0x279c28, Func Offset: 0x328
	// Line 204, Address: 0x279c30, Func Offset: 0x330
	// Line 232, Address: 0x279c34, Func Offset: 0x334
	// Line 204, Address: 0x279c60, Func Offset: 0x360
	// Line 232, Address: 0x279c64, Func Offset: 0x364
	// Line 204, Address: 0x279c68, Func Offset: 0x368
	// Line 232, Address: 0x279c7c, Func Offset: 0x37c
	// Line 204, Address: 0x279c80, Func Offset: 0x380
	// Line 232, Address: 0x279c84, Func Offset: 0x384
	// Line 204, Address: 0x279c88, Func Offset: 0x388
	// Line 232, Address: 0x279c90, Func Offset: 0x390
	// Line 204, Address: 0x279c9c, Func Offset: 0x39c
	// Line 232, Address: 0x279ca4, Func Offset: 0x3a4
	// Line 204, Address: 0x279cac, Func Offset: 0x3ac
	// Line 232, Address: 0x279cd4, Func Offset: 0x3d4
	// Line 211, Address: 0x279cd8, Func Offset: 0x3d8
	// Line 204, Address: 0x279cdc, Func Offset: 0x3dc
	// Line 221, Address: 0x279ce0, Func Offset: 0x3e0
	// Line 232, Address: 0x279ce4, Func Offset: 0x3e4
	// Line 217, Address: 0x279ce8, Func Offset: 0x3e8
	// Line 232, Address: 0x279cec, Func Offset: 0x3ec
	// Line 204, Address: 0x279cfc, Func Offset: 0x3fc
	// Line 232, Address: 0x279d00, Func Offset: 0x400
	// Line 204, Address: 0x279d04, Func Offset: 0x404
	// Line 211, Address: 0x279d0c, Func Offset: 0x40c
	// Line 232, Address: 0x279d10, Func Offset: 0x410
	// Line 204, Address: 0x279d1c, Func Offset: 0x41c
	// Line 211, Address: 0x279d20, Func Offset: 0x420
	// Line 204, Address: 0x279d24, Func Offset: 0x424
	// Line 232, Address: 0x279d2c, Func Offset: 0x42c
	// Line 221, Address: 0x279d34, Func Offset: 0x434
	// Line 232, Address: 0x279d38, Func Offset: 0x438
	// Line 211, Address: 0x279d3c, Func Offset: 0x43c
	// Line 232, Address: 0x279d40, Func Offset: 0x440
	// Line 211, Address: 0x279d54, Func Offset: 0x454
	// Line 221, Address: 0x279d58, Func Offset: 0x458
	// Line 232, Address: 0x279d5c, Func Offset: 0x45c
	// Line 221, Address: 0x279d60, Func Offset: 0x460
	// Line 232, Address: 0x279d64, Func Offset: 0x464
	// Line 221, Address: 0x279d8c, Func Offset: 0x48c
	// Line 232, Address: 0x279d90, Func Offset: 0x490
	// Line 233, Address: 0x279dcc, Func Offset: 0x4cc
	// Func End, Address: 0x279e04, Func Offset: 0x504
}

