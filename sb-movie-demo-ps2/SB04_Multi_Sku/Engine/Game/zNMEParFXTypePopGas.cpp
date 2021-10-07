



int32 PopGasSysUpdate(uint8* mem, int32 count, ptank_pool& apool, float32 dt);
void PopGasSysInit(NPARMgmt* mgmt, xParticleBatchSystem* pbs);
void PopGasSysTweaks(int8* prefix_root);
void PopRockTrail(xVec3* pos, xVec3* dir_emit);
void Fountain(xVec3* pos, xVec3* vel_drift);

// PopGasSysUpdate__6PopGasFPUciR10ptank_poolfPv
// Start address: 0x2751a0
int32 PopGasSysUpdate(uint8* mem, int32 count, ptank_pool& apool, float32 dt)
{
	ptank_pool__pos_color_size_rot* pool;
	PopGasParticle* par;
	PopGasParticle* end;
	xVec3 pos_plyr;
	PopGasEmitter* emitter;
	float32 tym_life;
	float32 rat_rev;
	float32 rat;
	float32 fac_keep;
	float32 beans;
	float32 fac_accelSide;
	float32 arch;
	float32 dim;
	float32 ds2_plyr;
	// Line 437, Address: 0x2751a0, Func Offset: 0
	// Line 442, Address: 0x2751a4, Func Offset: 0x4
	// Line 437, Address: 0x2751a8, Func Offset: 0x8
	// Line 438, Address: 0x2751cc, Func Offset: 0x2c
	// Line 437, Address: 0x2751d0, Func Offset: 0x30
	// Line 441, Address: 0x2751d4, Func Offset: 0x34
	// Line 437, Address: 0x2751d8, Func Offset: 0x38
	// Line 442, Address: 0x2751dc, Func Offset: 0x3c
	// Line 437, Address: 0x2751e0, Func Offset: 0x40
	// Line 442, Address: 0x2751f8, Func Offset: 0x58
	// Line 443, Address: 0x275204, Func Offset: 0x64
	// Line 445, Address: 0x275218, Func Offset: 0x78
	// Line 454, Address: 0x275250, Func Offset: 0xb0
	// Line 447, Address: 0x275254, Func Offset: 0xb4
	// Line 454, Address: 0x275258, Func Offset: 0xb8
	// Line 458, Address: 0x27525c, Func Offset: 0xbc
	// Line 461, Address: 0x27527c, Func Offset: 0xdc
	// Line 462, Address: 0x275280, Func Offset: 0xe0
	// Line 463, Address: 0x27532c, Func Offset: 0x18c
	// Line 468, Address: 0x275334, Func Offset: 0x194
	// Line 470, Address: 0x275350, Func Offset: 0x1b0
	// Line 478, Address: 0x275354, Func Offset: 0x1b4
	// Line 470, Address: 0x275358, Func Offset: 0x1b8
	// Line 478, Address: 0x27535c, Func Offset: 0x1bc
	// Line 470, Address: 0x275380, Func Offset: 0x1e0
	// Line 478, Address: 0x275384, Func Offset: 0x1e4
	// Line 481, Address: 0x27541c, Func Offset: 0x27c
	// Line 484, Address: 0x275478, Func Offset: 0x2d8
	// Line 482, Address: 0x27547c, Func Offset: 0x2dc
	// Line 484, Address: 0x275480, Func Offset: 0x2e0
	// Line 482, Address: 0x27548c, Func Offset: 0x2ec
	// Line 484, Address: 0x275490, Func Offset: 0x2f0
	// Line 485, Address: 0x2754a4, Func Offset: 0x304
	// Line 486, Address: 0x275524, Func Offset: 0x384
	// Line 487, Address: 0x27552c, Func Offset: 0x38c
	// Line 489, Address: 0x275570, Func Offset: 0x3d0
	// Line 490, Address: 0x27557c, Func Offset: 0x3dc
	// Line 496, Address: 0x2755a0, Func Offset: 0x400
	// Line 497, Address: 0x2755b8, Func Offset: 0x418
	// Line 498, Address: 0x2755d0, Func Offset: 0x430
	// Line 504, Address: 0x2755d4, Func Offset: 0x434
	// Line 511, Address: 0x27561c, Func Offset: 0x47c
	// Line 525, Address: 0x275694, Func Offset: 0x4f4
	// Line 526, Address: 0x2756a8, Func Offset: 0x508
	// Line 532, Address: 0x2756b4, Func Offset: 0x514
	// Line 539, Address: 0x275714, Func Offset: 0x574
	// Line 540, Address: 0x275718, Func Offset: 0x578
	// Line 539, Address: 0x27571c, Func Offset: 0x57c
	// Line 540, Address: 0x27572c, Func Offset: 0x58c
	// Line 539, Address: 0x275730, Func Offset: 0x590
	// Line 540, Address: 0x275750, Func Offset: 0x5b0
	// Line 539, Address: 0x275754, Func Offset: 0x5b4
	// Line 540, Address: 0x27575c, Func Offset: 0x5bc
	// Line 541, Address: 0x275764, Func Offset: 0x5c4
	// Line 564, Address: 0x275778, Func Offset: 0x5d8
	// Line 565, Address: 0x2758a4, Func Offset: 0x704
	// Line 568, Address: 0x2758b0, Func Offset: 0x710
	// Line 577, Address: 0x2758bc, Func Offset: 0x71c
	// Line 579, Address: 0x2758d8, Func Offset: 0x738
	// Line 581, Address: 0x2758fc, Func Offset: 0x75c
	// Line 583, Address: 0x27590c, Func Offset: 0x76c
	// Line 597, Address: 0x275914, Func Offset: 0x774
	// Line 598, Address: 0x275918, Func Offset: 0x778
	// Line 601, Address: 0x275920, Func Offset: 0x780
	// Line 602, Address: 0x275934, Func Offset: 0x794
	// Func End, Address: 0x27597c, Func Offset: 0x7dc
}

// PopGasSysInit__6PopGasFP8NPARMgmtP20xParticleBatchSystem
// Start address: 0x275980
void PopGasSysInit(NPARMgmt* mgmt, xParticleBatchSystem* pbs)
{
	// Line 419, Address: 0x275980, Func Offset: 0
	// Line 423, Address: 0x275984, Func Offset: 0x4
	// Line 419, Address: 0x275988, Func Offset: 0x8
	// Line 424, Address: 0x27598c, Func Offset: 0xc
	// Line 422, Address: 0x275990, Func Offset: 0x10
	// Line 430, Address: 0x275994, Func Offset: 0x14
	// Line 429, Address: 0x275998, Func Offset: 0x18
	// Line 430, Address: 0x27599c, Func Offset: 0x1c
	// Line 422, Address: 0x2759a0, Func Offset: 0x20
	// Line 423, Address: 0x2759a4, Func Offset: 0x24
	// Line 424, Address: 0x2759a8, Func Offset: 0x28
	// Line 425, Address: 0x2759ac, Func Offset: 0x2c
	// Line 427, Address: 0x2759b0, Func Offset: 0x30
	// Line 428, Address: 0x2759b4, Func Offset: 0x34
	// Line 429, Address: 0x2759b8, Func Offset: 0x38
	// Line 430, Address: 0x2759bc, Func Offset: 0x3c
	// Line 434, Address: 0x2759c0, Func Offset: 0x40
	// Func End, Address: 0x2759c8, Func Offset: 0x48
}

// PopGasSysTweaks__6PopGasFP8NPARMgmtPCc
// Start address: 0x2759d0
void PopGasSysTweaks(int8* prefix_root)
{
	int8 prefix_base[128];
	int8 prefix[128];
	// Line 398, Address: 0x2759d0, Func Offset: 0
	// Line 401, Address: 0x2759d8, Func Offset: 0x8
	// Line 398, Address: 0x2759e0, Func Offset: 0x10
	// Line 401, Address: 0x2759e4, Func Offset: 0x14
	// Line 403, Address: 0x2759f4, Func Offset: 0x24
	// Line 414, Address: 0x275a10, Func Offset: 0x40
	// Func End, Address: 0x275a1c, Func Offset: 0x4c
}

// PopRockTrail__13PopGasEmitterCFPC5xVec3PC5xVec3
// Start address: 0x275a20
void PopGasEmitter::PopRockTrail(xVec3* pos, xVec3* dir_emit)
{
	int32 pbs_id;
	int32 cnt_remain;
	uint8* mem;
	int32 num_par;
	PopGasParticle* par;
	int32 i;
	float32 spd;
	float32 samecalc;
	// Line 266, Address: 0x275a20, Func Offset: 0
	// Line 275, Address: 0x275a24, Func Offset: 0x4
	// Line 266, Address: 0x275a28, Func Offset: 0x8
	// Line 275, Address: 0x275a2c, Func Offset: 0xc
	// Line 266, Address: 0x275a30, Func Offset: 0x10
	// Line 275, Address: 0x275a50, Func Offset: 0x30
	// Line 266, Address: 0x275a58, Func Offset: 0x38
	// Line 275, Address: 0x275a64, Func Offset: 0x44
	// Line 276, Address: 0x275a74, Func Offset: 0x54
	// Line 278, Address: 0x275a84, Func Offset: 0x64
	// Line 281, Address: 0x275a88, Func Offset: 0x68
	// Line 330, Address: 0x275a90, Func Offset: 0x70
	// Line 285, Address: 0x275aa0, Func Offset: 0x80
	// Line 330, Address: 0x275aa8, Func Offset: 0x88
	// Line 285, Address: 0x275ab0, Func Offset: 0x90
	// Line 330, Address: 0x275ab4, Func Offset: 0x94
	// Line 294, Address: 0x275aec, Func Offset: 0xcc
	// Line 330, Address: 0x275af4, Func Offset: 0xd4
	// Line 294, Address: 0x275afc, Func Offset: 0xdc
	// Line 330, Address: 0x275b24, Func Offset: 0x104
	// Line 307, Address: 0x275b30, Func Offset: 0x110
	// Line 294, Address: 0x275b34, Func Offset: 0x114
	// Line 318, Address: 0x275b38, Func Offset: 0x118
	// Line 330, Address: 0x275b3c, Func Offset: 0x11c
	// Line 313, Address: 0x275b40, Func Offset: 0x120
	// Line 330, Address: 0x275b44, Func Offset: 0x124
	// Line 307, Address: 0x275b58, Func Offset: 0x138
	// Line 330, Address: 0x275b5c, Func Offset: 0x13c
	// Line 298, Address: 0x275b60, Func Offset: 0x140
	// Line 330, Address: 0x275b64, Func Offset: 0x144
	// Line 318, Address: 0x275b74, Func Offset: 0x154
	// Line 298, Address: 0x275b78, Func Offset: 0x158
	// Line 330, Address: 0x275b7c, Func Offset: 0x15c
	// Line 298, Address: 0x275b88, Func Offset: 0x168
	// Line 307, Address: 0x275b8c, Func Offset: 0x16c
	// Line 330, Address: 0x275b90, Func Offset: 0x170
	// Line 300, Address: 0x275b9c, Func Offset: 0x17c
	// Line 330, Address: 0x275ba0, Func Offset: 0x180
	// Line 307, Address: 0x275ba4, Func Offset: 0x184
	// Line 318, Address: 0x275ba8, Func Offset: 0x188
	// Line 330, Address: 0x275bac, Func Offset: 0x18c
	// Line 300, Address: 0x275bb0, Func Offset: 0x190
	// Line 330, Address: 0x275bb4, Func Offset: 0x194
	// Line 318, Address: 0x275bc0, Func Offset: 0x1a0
	// Line 300, Address: 0x275bc4, Func Offset: 0x1a4
	// Line 330, Address: 0x275bc8, Func Offset: 0x1a8
	// Line 307, Address: 0x275be4, Func Offset: 0x1c4
	// Line 330, Address: 0x275be8, Func Offset: 0x1c8
	// Line 318, Address: 0x275bf0, Func Offset: 0x1d0
	// Line 330, Address: 0x275bf4, Func Offset: 0x1d4
	// Line 331, Address: 0x275c48, Func Offset: 0x228
	// Func End, Address: 0x275c78, Func Offset: 0x258
}

// Fountain__13PopGasEmitterCFPC5xVec3PC5xVec3
// Start address: 0x275c80
void PopGasEmitter::Fountain(xVec3* pos, xVec3* vel_drift)
{
	int32 pbs_id;
	int32 cnt_remain;
	int32 num_emitted;
	uint8* mem;
	int32 num_par;
	float32 darc;
	float32 ang_curr;
	PopGasParticle* par;
	int32 i;
	xVec3 dir;
	float32 samecalc;
	// Line 178, Address: 0x275c80, Func Offset: 0
	// Line 187, Address: 0x275c84, Func Offset: 0x4
	// Line 178, Address: 0x275c88, Func Offset: 0x8
	// Line 187, Address: 0x275c8c, Func Offset: 0xc
	// Line 178, Address: 0x275c90, Func Offset: 0x10
	// Line 187, Address: 0x275cb0, Func Offset: 0x30
	// Line 178, Address: 0x275cb8, Func Offset: 0x38
	// Line 187, Address: 0x275ccc, Func Offset: 0x4c
	// Line 178, Address: 0x275cd8, Func Offset: 0x58
	// Line 187, Address: 0x275cdc, Func Offset: 0x5c
	// Line 188, Address: 0x275ce0, Func Offset: 0x60
	// Line 191, Address: 0x275cf0, Func Offset: 0x70
	// Line 188, Address: 0x275cf4, Func Offset: 0x74
	// Line 190, Address: 0x275cf8, Func Offset: 0x78
	// Line 193, Address: 0x275cfc, Func Offset: 0x7c
	// Line 262, Address: 0x275d04, Func Offset: 0x84
	// Line 197, Address: 0x275d2c, Func Offset: 0xac
	// Line 262, Address: 0x275d34, Func Offset: 0xb4
	// Line 197, Address: 0x275d3c, Func Offset: 0xbc
	// Line 262, Address: 0x275d40, Func Offset: 0xc0
	// Line 201, Address: 0x275d48, Func Offset: 0xc8
	// Line 262, Address: 0x275d54, Func Offset: 0xd4
	// Line 206, Address: 0x275d5c, Func Offset: 0xdc
	// Line 201, Address: 0x275d60, Func Offset: 0xe0
	// Line 262, Address: 0x275d6c, Func Offset: 0xec
	// Line 201, Address: 0x275d70, Func Offset: 0xf0
	// Line 262, Address: 0x275d78, Func Offset: 0xf8
	// Line 209, Address: 0x275da0, Func Offset: 0x120
	// Line 262, Address: 0x275da8, Func Offset: 0x128
	// Line 209, Address: 0x275db0, Func Offset: 0x130
	// Line 262, Address: 0x275dd8, Func Offset: 0x158
	// Line 211, Address: 0x275de0, Func Offset: 0x160
	// Line 262, Address: 0x275de8, Func Offset: 0x168
	// Line 211, Address: 0x275df0, Func Offset: 0x170
	// Line 262, Address: 0x275e30, Func Offset: 0x1b0
	// Line 211, Address: 0x275e34, Func Offset: 0x1b4
	// Line 262, Address: 0x275e40, Func Offset: 0x1c0
	// Line 213, Address: 0x275e48, Func Offset: 0x1c8
	// Line 262, Address: 0x275e4c, Func Offset: 0x1cc
	// Line 214, Address: 0x275e64, Func Offset: 0x1e4
	// Line 262, Address: 0x275e6c, Func Offset: 0x1ec
	// Line 225, Address: 0x275ea8, Func Offset: 0x228
	// Line 262, Address: 0x275eac, Func Offset: 0x22c
	// Line 225, Address: 0x275ec8, Func Offset: 0x248
	// Line 262, Address: 0x275ecc, Func Offset: 0x24c
	// Line 217, Address: 0x275ed4, Func Offset: 0x254
	// Line 262, Address: 0x275ed8, Func Offset: 0x258
	// Line 225, Address: 0x275ee4, Func Offset: 0x264
	// Line 262, Address: 0x275ee8, Func Offset: 0x268
	// Line 217, Address: 0x275ef4, Func Offset: 0x274
	// Line 262, Address: 0x275ef8, Func Offset: 0x278
	// Line 225, Address: 0x275f08, Func Offset: 0x288
	// Line 262, Address: 0x275f0c, Func Offset: 0x28c
	// Line 217, Address: 0x275f18, Func Offset: 0x298
	// Line 262, Address: 0x275f1c, Func Offset: 0x29c
	// Line 217, Address: 0x275f3c, Func Offset: 0x2bc
	// Line 262, Address: 0x275f40, Func Offset: 0x2c0
	// Line 217, Address: 0x275f4c, Func Offset: 0x2cc
	// Line 262, Address: 0x275f50, Func Offset: 0x2d0
	// Line 217, Address: 0x275f54, Func Offset: 0x2d4
	// Line 262, Address: 0x275f58, Func Offset: 0x2d8
	// Line 225, Address: 0x275f6c, Func Offset: 0x2ec
	// Line 262, Address: 0x275f70, Func Offset: 0x2f0
	// Line 227, Address: 0x275f98, Func Offset: 0x318
	// Line 262, Address: 0x275f9c, Func Offset: 0x31c
	// Line 225, Address: 0x275fa8, Func Offset: 0x328
	// Line 262, Address: 0x275fac, Func Offset: 0x32c
	// Line 227, Address: 0x275fdc, Func Offset: 0x35c
	// Line 262, Address: 0x275fe0, Func Offset: 0x360
	// Line 227, Address: 0x275ff0, Func Offset: 0x370
	// Line 262, Address: 0x275ff8, Func Offset: 0x378
	// Line 227, Address: 0x275ffc, Func Offset: 0x37c
	// Line 262, Address: 0x276000, Func Offset: 0x380
	// Line 227, Address: 0x276034, Func Offset: 0x3b4
	// Line 262, Address: 0x276038, Func Offset: 0x3b8
	// Line 227, Address: 0x276048, Func Offset: 0x3c8
	// Line 262, Address: 0x27604c, Func Offset: 0x3cc
	// Line 227, Address: 0x276054, Func Offset: 0x3d4
	// Line 262, Address: 0x276058, Func Offset: 0x3d8
	// Line 230, Address: 0x276070, Func Offset: 0x3f0
	// Line 262, Address: 0x276074, Func Offset: 0x3f4
	// Line 230, Address: 0x27607c, Func Offset: 0x3fc
	// Line 262, Address: 0x276080, Func Offset: 0x400
	// Line 230, Address: 0x276088, Func Offset: 0x408
	// Line 262, Address: 0x27608c, Func Offset: 0x40c
	// Line 236, Address: 0x276090, Func Offset: 0x410
	// Line 262, Address: 0x276098, Func Offset: 0x418
	// Line 236, Address: 0x27609c, Func Offset: 0x41c
	// Line 262, Address: 0x2760a0, Func Offset: 0x420
	// Line 247, Address: 0x2760a8, Func Offset: 0x428
	// Line 236, Address: 0x2760ac, Func Offset: 0x42c
	// Line 262, Address: 0x2760b0, Func Offset: 0x430
	// Line 247, Address: 0x2760bc, Func Offset: 0x43c
	// Line 262, Address: 0x2760c0, Func Offset: 0x440
	// Line 243, Address: 0x2760c4, Func Offset: 0x444
	// Line 236, Address: 0x2760c8, Func Offset: 0x448
	// Line 247, Address: 0x2760cc, Func Offset: 0x44c
	// Line 236, Address: 0x2760d0, Func Offset: 0x450
	// Line 247, Address: 0x2760d4, Func Offset: 0x454
	// Line 262, Address: 0x2760d8, Func Offset: 0x458
	// Line 247, Address: 0x2760fc, Func Offset: 0x47c
	// Line 262, Address: 0x276100, Func Offset: 0x480
	// Line 263, Address: 0x276138, Func Offset: 0x4b8
	// Func End, Address: 0x276174, Func Offset: 0x4f4
}

