



int32 SparkySysUpdate(uint8* mem, int32 count, ptank_pool& apool, float32 dt);
void SparkySysInit_Glow(NPARMgmt* mgmt, xParticleBatchSystem* pbs);
void SparkySysInit_Hot(NPARMgmt* mgmt, xParticleBatchSystem* pbs);
void SparkySysInit_Dull(NPARMgmt* mgmt, xParticleBatchSystem* pbs);
void SparkySysTweaks(int8* prefix_root);
void DenSeaItRain(xVec3* pos_beg, xVec3* pos_end, xVec3* vel_drift, float32 rad_emitCaller, float32 fac_spdRamp, int32 num_emitCaller);
void EmitInDir(xVec3* pos, xVec3* vel, int32 num_emitCaller);
void EmitRing(xVec3* pos_center, xVec3* dir_axis, float32 rad_emitCaller, float32 fac_spdRamp, int32 num_emitCaller);
void EmitOnAxis(xVec3* pos_center, xVec3* dir_axis);

// SparkySysUpdate__6SparkyFPUciR10ptank_poolfPv
// Start address: 0x270b90
int32 SparkySysUpdate(uint8* mem, int32 count, ptank_pool& apool, float32 dt)
{
	ptank_pool__color_mat_uv2* pool;
	SparkyParticle* par;
	SparkyParticle* end;
	xVec3 pos_plyr;
	SparkyEmitter* emitter;
	float32 tym_life;
	float32 rat_rev;
	float32 rat;
	SparkyCurve node_eval;
	int32 idx;
	int32 linearize;
	float32 factor;
	xVec3 dir_trav;
	float32 spd;
	float32 recip;
	int32 systemUsesHDR;
	xColor_tag par_color;
	float32 adjAlpha;
	uint8 alftest;
	float32 sum;
	Damage_3* dmg;
	float32 ds2_plyr;
	float32 fac_scale;
	float32 w;
	float32 h;
	// Line 902, Address: 0x270b90, Func Offset: 0
	// Line 906, Address: 0x270b94, Func Offset: 0x4
	// Line 902, Address: 0x270b98, Func Offset: 0x8
	// Line 903, Address: 0x270bb8, Func Offset: 0x28
	// Line 902, Address: 0x270bbc, Func Offset: 0x2c
	// Line 905, Address: 0x270bc0, Func Offset: 0x30
	// Line 902, Address: 0x270bc4, Func Offset: 0x34
	// Line 906, Address: 0x270bc8, Func Offset: 0x38
	// Line 902, Address: 0x270bcc, Func Offset: 0x3c
	// Line 906, Address: 0x270bdc, Func Offset: 0x4c
	// Line 907, Address: 0x270be8, Func Offset: 0x58
	// Line 909, Address: 0x270bfc, Func Offset: 0x6c
	// Line 918, Address: 0x270c1c, Func Offset: 0x8c
	// Line 911, Address: 0x270c20, Func Offset: 0x90
	// Line 922, Address: 0x270c24, Func Offset: 0x94
	// Line 918, Address: 0x270c28, Func Offset: 0x98
	// Line 922, Address: 0x270c2c, Func Offset: 0x9c
	// Line 925, Address: 0x270c38, Func Offset: 0xa8
	// Line 926, Address: 0x270c3c, Func Offset: 0xac
	// Line 927, Address: 0x270cd0, Func Offset: 0x140
	// Line 932, Address: 0x270cd8, Func Offset: 0x148
	// Line 942, Address: 0x270cfc, Func Offset: 0x16c
	// Line 943, Address: 0x270d00, Func Offset: 0x170
	// Line 934, Address: 0x270d08, Func Offset: 0x178
	// Line 944, Address: 0x270d0c, Func Offset: 0x17c
	// Line 945, Address: 0x27117c, Func Offset: 0x5ec
	// Line 944, Address: 0x271180, Func Offset: 0x5f0
	// Line 953, Address: 0x271184, Func Offset: 0x5f4
	// Line 944, Address: 0x271188, Func Offset: 0x5f8
	// Line 953, Address: 0x27118c, Func Offset: 0x5fc
	// Line 944, Address: 0x271190, Func Offset: 0x600
	// Line 953, Address: 0x271194, Func Offset: 0x604
	// Line 954, Address: 0x2711a8, Func Offset: 0x618
	// Line 955, Address: 0x2711bc, Func Offset: 0x62c
	// Line 959, Address: 0x2711d4, Func Offset: 0x644
	// Line 960, Address: 0x2711e0, Func Offset: 0x650
	// Line 961, Address: 0x2711e4, Func Offset: 0x654
	// Line 962, Address: 0x2711f4, Func Offset: 0x664
	// Line 963, Address: 0x271204, Func Offset: 0x674
	// Line 966, Address: 0x271214, Func Offset: 0x684
	// Line 983, Address: 0x271218, Func Offset: 0x688
	// Line 966, Address: 0x27121c, Func Offset: 0x68c
	// Line 983, Address: 0x271220, Func Offset: 0x690
	// Line 966, Address: 0x271224, Func Offset: 0x694
	// Line 983, Address: 0x271228, Func Offset: 0x698
	// Line 966, Address: 0x27122c, Func Offset: 0x69c
	// Line 968, Address: 0x271238, Func Offset: 0x6a8
	// Line 969, Address: 0x27124c, Func Offset: 0x6bc
	// Line 970, Address: 0x271260, Func Offset: 0x6d0
	// Line 972, Address: 0x271274, Func Offset: 0x6e4
	// Line 973, Address: 0x271288, Func Offset: 0x6f8
	// Line 974, Address: 0x27129c, Func Offset: 0x70c
	// Line 981, Address: 0x2712b0, Func Offset: 0x720
	// Line 982, Address: 0x2712cc, Func Offset: 0x73c
	// Line 981, Address: 0x2712d0, Func Offset: 0x740
	// Line 982, Address: 0x2712dc, Func Offset: 0x74c
	// Line 983, Address: 0x2712e4, Func Offset: 0x754
	// Line 984, Address: 0x2712f0, Func Offset: 0x760
	// Line 986, Address: 0x271318, Func Offset: 0x788
	// Line 987, Address: 0x271324, Func Offset: 0x794
	// Line 988, Address: 0x27132c, Func Offset: 0x79c
	// Line 989, Address: 0x271330, Func Offset: 0x7a0
	// Line 988, Address: 0x271334, Func Offset: 0x7a4
	// Line 989, Address: 0x271338, Func Offset: 0x7a8
	// Line 991, Address: 0x27133c, Func Offset: 0x7ac
	// Line 992, Address: 0x271358, Func Offset: 0x7c8
	// Line 1007, Address: 0x271374, Func Offset: 0x7e4
	// Line 1008, Address: 0x271390, Func Offset: 0x800
	// Line 1014, Address: 0x2713ac, Func Offset: 0x81c
	// Line 1039, Address: 0x2713f4, Func Offset: 0x864
	// Line 1044, Address: 0x27142c, Func Offset: 0x89c
	// Line 1061, Address: 0x271438, Func Offset: 0x8a8
	// Line 1062, Address: 0x271460, Func Offset: 0x8d0
	// Line 1063, Address: 0x271494, Func Offset: 0x904
	// Line 1062, Address: 0x27149c, Func Offset: 0x90c
	// Line 1063, Address: 0x2714a0, Func Offset: 0x910
	// Line 1066, Address: 0x271538, Func Offset: 0x9a8
	// Line 1067, Address: 0x271540, Func Offset: 0x9b0
	// Line 1068, Address: 0x2715e0, Func Offset: 0xa50
	// Line 1069, Address: 0x2715e4, Func Offset: 0xa54
	// Line 1068, Address: 0x2715e8, Func Offset: 0xa58
	// Line 1069, Address: 0x2715ec, Func Offset: 0xa5c
	// Line 1068, Address: 0x2715f0, Func Offset: 0xa60
	// Line 1069, Address: 0x2715fc, Func Offset: 0xa6c
	// Line 1073, Address: 0x271690, Func Offset: 0xb00
	// Line 1080, Address: 0x2716fc, Func Offset: 0xb6c
	// Line 1081, Address: 0x271708, Func Offset: 0xb78
	// Line 1080, Address: 0x27170c, Func Offset: 0xb7c
	// Line 1081, Address: 0x271730, Func Offset: 0xba0
	// Line 1080, Address: 0x271734, Func Offset: 0xba4
	// Line 1081, Address: 0x271738, Func Offset: 0xba8
	// Line 1080, Address: 0x27173c, Func Offset: 0xbac
	// Line 1081, Address: 0x271744, Func Offset: 0xbb4
	// Line 1082, Address: 0x27174c, Func Offset: 0xbbc
	// Line 1109, Address: 0x271760, Func Offset: 0xbd0
	// Line 1110, Address: 0x271860, Func Offset: 0xcd0
	// Line 1113, Address: 0x27186c, Func Offset: 0xcdc
	// Line 1121, Address: 0x271874, Func Offset: 0xce4
	// Line 1123, Address: 0x27187c, Func Offset: 0xcec
	// Line 1124, Address: 0x271880, Func Offset: 0xcf0
	// Line 1123, Address: 0x271884, Func Offset: 0xcf4
	// Line 1124, Address: 0x271888, Func Offset: 0xcf8
	// Line 1123, Address: 0x27188c, Func Offset: 0xcfc
	// Line 1124, Address: 0x271890, Func Offset: 0xd00
	// Line 1125, Address: 0x271894, Func Offset: 0xd04
	// Line 1121, Address: 0x2718a4, Func Offset: 0xd14
	// Line 1129, Address: 0x2718a8, Func Offset: 0xd18
	// Line 1121, Address: 0x2718ac, Func Offset: 0xd1c
	// Line 1125, Address: 0x2718b0, Func Offset: 0xd20
	// Line 1129, Address: 0x2718b4, Func Offset: 0xd24
	// Line 1125, Address: 0x2718b8, Func Offset: 0xd28
	// Line 1141, Address: 0x2718bc, Func Offset: 0xd2c
	// Line 1125, Address: 0x2718c0, Func Offset: 0xd30
	// Line 1141, Address: 0x2718c4, Func Offset: 0xd34
	// Line 1148, Address: 0x2718c8, Func Offset: 0xd38
	// Line 1141, Address: 0x2718cc, Func Offset: 0xd3c
	// Line 1121, Address: 0x2718d0, Func Offset: 0xd40
	// Line 1141, Address: 0x2718d8, Func Offset: 0xd48
	// Line 1121, Address: 0x2718dc, Func Offset: 0xd4c
	// Line 1123, Address: 0x2718e0, Func Offset: 0xd50
	// Line 1124, Address: 0x2718f0, Func Offset: 0xd60
	// Line 1125, Address: 0x27190c, Func Offset: 0xd7c
	// Line 1124, Address: 0x271914, Func Offset: 0xd84
	// Line 1125, Address: 0x271918, Func Offset: 0xd88
	// Line 1129, Address: 0x271964, Func Offset: 0xdd4
	// Line 1131, Address: 0x271968, Func Offset: 0xdd8
	// Line 1129, Address: 0x27196c, Func Offset: 0xddc
	// Line 1131, Address: 0x271978, Func Offset: 0xde8
	// Line 1132, Address: 0x271984, Func Offset: 0xdf4
	// Line 1133, Address: 0x271994, Func Offset: 0xe04
	// Line 1136, Address: 0x2719a8, Func Offset: 0xe18
	// Line 1137, Address: 0x2719bc, Func Offset: 0xe2c
	// Line 1138, Address: 0x2719cc, Func Offset: 0xe3c
	// Line 1141, Address: 0x2719e0, Func Offset: 0xe50
	// Line 1148, Address: 0x2719f4, Func Offset: 0xe64
	// Line 1149, Address: 0x2719fc, Func Offset: 0xe6c
	// Line 1150, Address: 0x271a24, Func Offset: 0xe94
	// Line 1151, Address: 0x271a40, Func Offset: 0xeb0
	// Line 1152, Address: 0x271a48, Func Offset: 0xeb8
	// Line 1153, Address: 0x271a50, Func Offset: 0xec0
	// Line 1154, Address: 0x271a78, Func Offset: 0xee8
	// Line 1155, Address: 0x271a94, Func Offset: 0xf04
	// Line 1156, Address: 0x271a9c, Func Offset: 0xf0c
	// Line 1157, Address: 0x271aa8, Func Offset: 0xf18
	// Line 1158, Address: 0x271ad0, Func Offset: 0xf40
	// Line 1159, Address: 0x271aec, Func Offset: 0xf5c
	// Line 1161, Address: 0x271af4, Func Offset: 0xf64
	// Line 1162, Address: 0x271b08, Func Offset: 0xf78
	// Line 1167, Address: 0x271b18, Func Offset: 0xf88
	// Line 1168, Address: 0x271b1c, Func Offset: 0xf8c
	// Line 1171, Address: 0x271b24, Func Offset: 0xf94
	// Line 1172, Address: 0x271b38, Func Offset: 0xfa8
	// Func End, Address: 0x271b74, Func Offset: 0xfe4
}

// SparkySysInit_Glow__6SparkyFP8NPARMgmtP20xParticleBatchSystem
// Start address: 0x271b80
void SparkySysInit_Glow(NPARMgmt* mgmt, xParticleBatchSystem* pbs)
{
	// Line 884, Address: 0x271b80, Func Offset: 0
	// Line 888, Address: 0x271b84, Func Offset: 0x4
	// Line 884, Address: 0x271b88, Func Offset: 0x8
	// Line 890, Address: 0x271b8c, Func Offset: 0xc
	// Line 887, Address: 0x271b90, Func Offset: 0x10
	// Line 895, Address: 0x271b94, Func Offset: 0x14
	// Line 894, Address: 0x271b98, Func Offset: 0x18
	// Line 895, Address: 0x271b9c, Func Offset: 0x1c
	// Line 887, Address: 0x271ba0, Func Offset: 0x20
	// Line 888, Address: 0x271ba4, Func Offset: 0x24
	// Line 889, Address: 0x271ba8, Func Offset: 0x28
	// Line 890, Address: 0x271bac, Func Offset: 0x2c
	// Line 892, Address: 0x271bb0, Func Offset: 0x30
	// Line 893, Address: 0x271bb4, Func Offset: 0x34
	// Line 894, Address: 0x271bb8, Func Offset: 0x38
	// Line 895, Address: 0x271bbc, Func Offset: 0x3c
	// Line 899, Address: 0x271bc0, Func Offset: 0x40
	// Func End, Address: 0x271bc8, Func Offset: 0x48
}

// SparkySysInit_Hot__6SparkyFP8NPARMgmtP20xParticleBatchSystem
// Start address: 0x271bd0
void SparkySysInit_Hot(NPARMgmt* mgmt, xParticleBatchSystem* pbs)
{
	// Line 865, Address: 0x271bd0, Func Offset: 0
	// Line 869, Address: 0x271bd4, Func Offset: 0x4
	// Line 865, Address: 0x271bd8, Func Offset: 0x8
	// Line 870, Address: 0x271bdc, Func Offset: 0xc
	// Line 868, Address: 0x271be0, Func Offset: 0x10
	// Line 876, Address: 0x271be4, Func Offset: 0x14
	// Line 875, Address: 0x271be8, Func Offset: 0x18
	// Line 876, Address: 0x271bec, Func Offset: 0x1c
	// Line 868, Address: 0x271bf0, Func Offset: 0x20
	// Line 869, Address: 0x271bf4, Func Offset: 0x24
	// Line 870, Address: 0x271bf8, Func Offset: 0x28
	// Line 871, Address: 0x271bfc, Func Offset: 0x2c
	// Line 873, Address: 0x271c00, Func Offset: 0x30
	// Line 874, Address: 0x271c04, Func Offset: 0x34
	// Line 875, Address: 0x271c08, Func Offset: 0x38
	// Line 876, Address: 0x271c0c, Func Offset: 0x3c
	// Line 880, Address: 0x271c10, Func Offset: 0x40
	// Func End, Address: 0x271c18, Func Offset: 0x48
}

// SparkySysInit_Dull__6SparkyFP8NPARMgmtP20xParticleBatchSystem
// Start address: 0x271c20
void SparkySysInit_Dull(NPARMgmt* mgmt, xParticleBatchSystem* pbs)
{
	// Line 846, Address: 0x271c20, Func Offset: 0
	// Line 850, Address: 0x271c24, Func Offset: 0x4
	// Line 846, Address: 0x271c28, Func Offset: 0x8
	// Line 851, Address: 0x271c2c, Func Offset: 0xc
	// Line 849, Address: 0x271c30, Func Offset: 0x10
	// Line 857, Address: 0x271c34, Func Offset: 0x14
	// Line 856, Address: 0x271c38, Func Offset: 0x18
	// Line 857, Address: 0x271c3c, Func Offset: 0x1c
	// Line 849, Address: 0x271c40, Func Offset: 0x20
	// Line 850, Address: 0x271c44, Func Offset: 0x24
	// Line 851, Address: 0x271c48, Func Offset: 0x28
	// Line 852, Address: 0x271c4c, Func Offset: 0x2c
	// Line 854, Address: 0x271c50, Func Offset: 0x30
	// Line 855, Address: 0x271c54, Func Offset: 0x34
	// Line 856, Address: 0x271c58, Func Offset: 0x38
	// Line 857, Address: 0x271c5c, Func Offset: 0x3c
	// Line 861, Address: 0x271c60, Func Offset: 0x40
	// Func End, Address: 0x271c68, Func Offset: 0x48
}

// SparkySysTweaks__6SparkyFP8NPARMgmtPCc
// Start address: 0x271c70
void SparkySysTweaks(int8* prefix_root)
{
	int8 prefix_base[128];
	int8 prefix[128];
	// Line 816, Address: 0x271c70, Func Offset: 0
	// Line 819, Address: 0x271c78, Func Offset: 0x8
	// Line 816, Address: 0x271c80, Func Offset: 0x10
	// Line 819, Address: 0x271c84, Func Offset: 0x14
	// Line 821, Address: 0x271c94, Func Offset: 0x24
	// Line 826, Address: 0x271cb0, Func Offset: 0x40
	// Line 839, Address: 0x271ccc, Func Offset: 0x5c
	// Func End, Address: 0x271cd8, Func Offset: 0x68
}

// DenSeaItRain__13SparkyEmitterCFPC5xVec3PC5xVec3PC5xVec3ffi
// Start address: 0x271ce0
void SparkyEmitter::DenSeaItRain(xVec3* pos_beg, xVec3* pos_end, xVec3* vel_drift, float32 rad_emitCaller, float32 fac_spdRamp, int32 num_emitCaller)
{
	int32 pbs_id;
	int32 num_desire;
	int32 cnt_remain;
	int32 num_emitted;
	xVec3 dir_axis;
	xVec3 dir_perp;
	xVec3 dir_orth;
	xVec3 dir_seg;
	float32 dseg;
	float32 darc;
	uint8* mem;
	int32 num_par;
	SparkyParticle* par;
	int32 i;
	float32 samecalc;
	float32 ang_curr;
	xVec3 dir_outward;
	float32 rad_emit;
	// Line 483, Address: 0x271ce0, Func Offset: 0
	// Line 500, Address: 0x271ce4, Func Offset: 0x4
	// Line 483, Address: 0x271ce8, Func Offset: 0x8
	// Line 500, Address: 0x271cec, Func Offset: 0xc
	// Line 483, Address: 0x271cf0, Func Offset: 0x10
	// Line 500, Address: 0x271d24, Func Offset: 0x44
	// Line 483, Address: 0x271d28, Func Offset: 0x48
	// Line 500, Address: 0x271d44, Func Offset: 0x64
	// Line 483, Address: 0x271d48, Func Offset: 0x68
	// Line 500, Address: 0x271d4c, Func Offset: 0x6c
	// Line 483, Address: 0x271d50, Func Offset: 0x70
	// Line 500, Address: 0x271d54, Func Offset: 0x74
	// Line 483, Address: 0x271d58, Func Offset: 0x78
	// Line 500, Address: 0x271d5c, Func Offset: 0x7c
	// Line 501, Address: 0x271d60, Func Offset: 0x80
	// Line 507, Address: 0x271d74, Func Offset: 0x94
	// Line 519, Address: 0x271d7c, Func Offset: 0x9c
	// Line 525, Address: 0x271d8c, Func Offset: 0xac
	// Line 513, Address: 0x271da0, Func Offset: 0xc0
	// Line 514, Address: 0x271da4, Func Offset: 0xc4
	// Line 520, Address: 0x271da8, Func Offset: 0xc8
	// Line 519, Address: 0x271db8, Func Offset: 0xd8
	// Line 525, Address: 0x271dc0, Func Offset: 0xe0
	// Line 520, Address: 0x271dd0, Func Offset: 0xf0
	// Line 521, Address: 0x271dd4, Func Offset: 0xf4
	// Line 525, Address: 0x271dd8, Func Offset: 0xf8
	// Line 520, Address: 0x271ddc, Func Offset: 0xfc
	// Line 521, Address: 0x271de0, Func Offset: 0x100
	// Line 525, Address: 0x271de8, Func Offset: 0x108
	// Line 521, Address: 0x271dec, Func Offset: 0x10c
	// Line 525, Address: 0x271df0, Func Offset: 0x110
	// Line 527, Address: 0x271df8, Func Offset: 0x118
	// Line 521, Address: 0x271dfc, Func Offset: 0x11c
	// Line 527, Address: 0x271e00, Func Offset: 0x120
	// Line 525, Address: 0x271e04, Func Offset: 0x124
	// Line 521, Address: 0x271e08, Func Offset: 0x128
	// Line 525, Address: 0x271e0c, Func Offset: 0x12c
	// Line 527, Address: 0x271e1c, Func Offset: 0x13c
	// Line 525, Address: 0x271e20, Func Offset: 0x140
	// Line 526, Address: 0x271e40, Func Offset: 0x160
	// Line 525, Address: 0x271e44, Func Offset: 0x164
	// Line 526, Address: 0x271e50, Func Offset: 0x170
	// Line 525, Address: 0x271e60, Func Offset: 0x180
	// Line 526, Address: 0x271e68, Func Offset: 0x188
	// Line 527, Address: 0x271e70, Func Offset: 0x190
	// Line 528, Address: 0x271e7c, Func Offset: 0x19c
	// Line 534, Address: 0x271eac, Func Offset: 0x1cc
	// Line 535, Address: 0x271eb0, Func Offset: 0x1d0
	// Line 534, Address: 0x271eb8, Func Offset: 0x1d8
	// Line 535, Address: 0x271ec4, Func Offset: 0x1e4
	// Line 541, Address: 0x271ed8, Func Offset: 0x1f8
	// Line 663, Address: 0x271ee0, Func Offset: 0x200
	// Line 510, Address: 0x271ef4, Func Offset: 0x214
	// Line 663, Address: 0x271efc, Func Offset: 0x21c
	// Line 510, Address: 0x271f04, Func Offset: 0x224
	// Line 663, Address: 0x271f30, Func Offset: 0x250
	// Line 510, Address: 0x271f34, Func Offset: 0x254
	// Line 663, Address: 0x271f38, Func Offset: 0x258
	// Line 510, Address: 0x271f3c, Func Offset: 0x25c
	// Line 663, Address: 0x271f48, Func Offset: 0x268
	// Line 545, Address: 0x271f80, Func Offset: 0x2a0
	// Line 663, Address: 0x271f88, Func Offset: 0x2a8
	// Line 545, Address: 0x271f90, Func Offset: 0x2b0
	// Line 663, Address: 0x271f94, Func Offset: 0x2b4
	// Line 560, Address: 0x271fc8, Func Offset: 0x2e8
	// Line 663, Address: 0x271fd0, Func Offset: 0x2f0
	// Line 560, Address: 0x271fd8, Func Offset: 0x2f8
	// Line 567, Address: 0x272004, Func Offset: 0x324
	// Line 663, Address: 0x272008, Func Offset: 0x328
	// Line 561, Address: 0x272010, Func Offset: 0x330
	// Line 663, Address: 0x272014, Func Offset: 0x334
	// Line 561, Address: 0x272018, Func Offset: 0x338
	// Line 663, Address: 0x272020, Func Offset: 0x340
	// Line 572, Address: 0x272030, Func Offset: 0x350
	// Line 663, Address: 0x272038, Func Offset: 0x358
	// Line 572, Address: 0x272040, Func Offset: 0x360
	// Line 663, Address: 0x272074, Func Offset: 0x394
	// Line 572, Address: 0x272078, Func Offset: 0x398
	// Line 663, Address: 0x272094, Func Offset: 0x3b4
	// Line 574, Address: 0x27209c, Func Offset: 0x3bc
	// Line 663, Address: 0x2720a0, Func Offset: 0x3c0
	// Line 579, Address: 0x2720e0, Func Offset: 0x400
	// Line 663, Address: 0x2720e4, Func Offset: 0x404
	// Line 579, Address: 0x2720e8, Func Offset: 0x408
	// Line 663, Address: 0x2720ec, Func Offset: 0x40c
	// Line 579, Address: 0x2720f0, Func Offset: 0x410
	// Line 663, Address: 0x2720f4, Func Offset: 0x414
	// Line 579, Address: 0x27210c, Func Offset: 0x42c
	// Line 663, Address: 0x272110, Func Offset: 0x430
	// Line 575, Address: 0x27211c, Func Offset: 0x43c
	// Line 663, Address: 0x272120, Func Offset: 0x440
	// Line 575, Address: 0x272128, Func Offset: 0x448
	// Line 663, Address: 0x27212c, Func Offset: 0x44c
	// Line 575, Address: 0x272138, Func Offset: 0x458
	// Line 663, Address: 0x27213c, Func Offset: 0x45c
	// Line 575, Address: 0x272154, Func Offset: 0x474
	// Line 663, Address: 0x272158, Func Offset: 0x478
	// Line 575, Address: 0x272160, Func Offset: 0x480
	// Line 663, Address: 0x272164, Func Offset: 0x484
	// Line 575, Address: 0x27216c, Func Offset: 0x48c
	// Line 663, Address: 0x272170, Func Offset: 0x490
	// Line 575, Address: 0x2721d8, Func Offset: 0x4f8
	// Line 663, Address: 0x2721e0, Func Offset: 0x500
	// Line 575, Address: 0x2721fc, Func Offset: 0x51c
	// Line 663, Address: 0x272200, Func Offset: 0x520
	// Line 580, Address: 0x27222c, Func Offset: 0x54c
	// Line 663, Address: 0x272230, Func Offset: 0x550
	// Line 590, Address: 0x27224c, Func Offset: 0x56c
	// Line 663, Address: 0x272254, Func Offset: 0x574
	// Line 590, Address: 0x27225c, Func Offset: 0x57c
	// Line 663, Address: 0x272284, Func Offset: 0x5a4
	// Line 590, Address: 0x272290, Func Offset: 0x5b0
	// Line 663, Address: 0x272294, Func Offset: 0x5b4
	// Line 590, Address: 0x2722c0, Func Offset: 0x5e0
	// Line 663, Address: 0x2722c4, Func Offset: 0x5e4
	// Line 590, Address: 0x2722c8, Func Offset: 0x5e8
	// Line 663, Address: 0x2722cc, Func Offset: 0x5ec
	// Line 590, Address: 0x2722d8, Func Offset: 0x5f8
	// Line 663, Address: 0x2722e0, Func Offset: 0x600
	// Line 591, Address: 0x2722f4, Func Offset: 0x614
	// Line 663, Address: 0x2722f8, Func Offset: 0x618
	// Line 590, Address: 0x272300, Func Offset: 0x620
	// Line 663, Address: 0x272308, Func Offset: 0x628
	// Line 590, Address: 0x272310, Func Offset: 0x630
	// Line 663, Address: 0x272314, Func Offset: 0x634
	// Line 591, Address: 0x272328, Func Offset: 0x648
	// Line 663, Address: 0x27232c, Func Offset: 0x64c
	// Line 591, Address: 0x272344, Func Offset: 0x664
	// Line 663, Address: 0x272348, Func Offset: 0x668
	// Line 590, Address: 0x27237c, Func Offset: 0x69c
	// Line 663, Address: 0x272380, Func Offset: 0x6a0
	// Line 601, Address: 0x27239c, Func Offset: 0x6bc
	// Line 590, Address: 0x2723a4, Func Offset: 0x6c4
	// Line 663, Address: 0x2723a8, Func Offset: 0x6c8
	// Line 601, Address: 0x2723ac, Func Offset: 0x6cc
	// Line 663, Address: 0x2723b0, Func Offset: 0x6d0
	// Line 601, Address: 0x2723b8, Func Offset: 0x6d8
	// Line 663, Address: 0x2723bc, Func Offset: 0x6dc
	// Line 590, Address: 0x2723ec, Func Offset: 0x70c
	// Line 603, Address: 0x2723f0, Func Offset: 0x710
	// Line 663, Address: 0x2723f4, Func Offset: 0x714
	// Line 601, Address: 0x2723fc, Func Offset: 0x71c
	// Line 663, Address: 0x272400, Func Offset: 0x720
	// Line 603, Address: 0x272408, Func Offset: 0x728
	// Line 663, Address: 0x27240c, Func Offset: 0x72c
	// Line 603, Address: 0x272410, Func Offset: 0x730
	// Line 663, Address: 0x272414, Func Offset: 0x734
	// Line 603, Address: 0x272418, Func Offset: 0x738
	// Line 663, Address: 0x27241c, Func Offset: 0x73c
	// Line 591, Address: 0x272440, Func Offset: 0x760
	// Line 663, Address: 0x272444, Func Offset: 0x764
	// Line 603, Address: 0x272448, Func Offset: 0x768
	// Line 663, Address: 0x27244c, Func Offset: 0x76c
	// Line 591, Address: 0x27246c, Func Offset: 0x78c
	// Line 663, Address: 0x272470, Func Offset: 0x790
	// Line 591, Address: 0x272484, Func Offset: 0x7a4
	// Line 663, Address: 0x272488, Func Offset: 0x7a8
	// Line 603, Address: 0x27249c, Func Offset: 0x7bc
	// Line 663, Address: 0x2724a0, Func Offset: 0x7c0
	// Line 603, Address: 0x2724a8, Func Offset: 0x7c8
	// Line 663, Address: 0x2724ac, Func Offset: 0x7cc
	// Line 603, Address: 0x2724b4, Func Offset: 0x7d4
	// Line 663, Address: 0x2724b8, Func Offset: 0x7d8
	// Line 605, Address: 0x2724c0, Func Offset: 0x7e0
	// Line 663, Address: 0x2724c4, Func Offset: 0x7e4
	// Line 605, Address: 0x2724cc, Func Offset: 0x7ec
	// Line 663, Address: 0x2724d0, Func Offset: 0x7f0
	// Line 605, Address: 0x2724d8, Func Offset: 0x7f8
	// Line 663, Address: 0x2724dc, Func Offset: 0x7fc
	// Line 607, Address: 0x2724f4, Func Offset: 0x814
	// Line 663, Address: 0x2724f8, Func Offset: 0x818
	// Line 607, Address: 0x272500, Func Offset: 0x820
	// Line 663, Address: 0x272504, Func Offset: 0x824
	// Line 607, Address: 0x27250c, Func Offset: 0x82c
	// Line 628, Address: 0x272518, Func Offset: 0x838
	// Line 663, Address: 0x27251c, Func Offset: 0x83c
	// Line 630, Address: 0x272520, Func Offset: 0x840
	// Line 637, Address: 0x272528, Func Offset: 0x848
	// Line 636, Address: 0x27252c, Func Offset: 0x84c
	// Line 637, Address: 0x272530, Func Offset: 0x850
	// Line 663, Address: 0x272580, Func Offset: 0x8a0
	// Line 638, Address: 0x272584, Func Offset: 0x8a4
	// Line 643, Address: 0x27258c, Func Offset: 0x8ac
	// Line 642, Address: 0x272590, Func Offset: 0x8b0
	// Line 643, Address: 0x272594, Func Offset: 0x8b4
	// Line 663, Address: 0x2725e4, Func Offset: 0x904
	// Line 644, Address: 0x2725e8, Func Offset: 0x908
	// Line 647, Address: 0x2725f0, Func Offset: 0x910
	// Line 663, Address: 0x2725f4, Func Offset: 0x914
	// Line 582, Address: 0x272620, Func Offset: 0x940
	// Line 663, Address: 0x272634, Func Offset: 0x954
	// Line 625, Address: 0x272650, Func Offset: 0x970
	// Line 663, Address: 0x272654, Func Offset: 0x974
	// Line 611, Address: 0x27267c, Func Offset: 0x99c
	// Line 663, Address: 0x272680, Func Offset: 0x9a0
	// Line 612, Address: 0x272688, Func Offset: 0x9a8
	// Line 663, Address: 0x27268c, Func Offset: 0x9ac
	// Line 611, Address: 0x272694, Func Offset: 0x9b4
	// Line 663, Address: 0x272698, Func Offset: 0x9b8
	// Line 611, Address: 0x2726a0, Func Offset: 0x9c0
	// Line 663, Address: 0x2726a4, Func Offset: 0x9c4
	// Line 612, Address: 0x2726b8, Func Offset: 0x9d8
	// Line 663, Address: 0x2726bc, Func Offset: 0x9dc
	// Line 612, Address: 0x2726c0, Func Offset: 0x9e0
	// Line 663, Address: 0x2726c4, Func Offset: 0x9e4
	// Line 612, Address: 0x272710, Func Offset: 0xa30
	// Line 663, Address: 0x272714, Func Offset: 0xa34
	// Line 612, Address: 0x272724, Func Offset: 0xa44
	// Line 663, Address: 0x272728, Func Offset: 0xa48
	// Line 612, Address: 0x272730, Func Offset: 0xa50
	// Line 663, Address: 0x272734, Func Offset: 0xa54
	// Line 625, Address: 0x27273c, Func Offset: 0xa5c
	// Line 663, Address: 0x272740, Func Offset: 0xa60
	// Line 625, Address: 0x272748, Func Offset: 0xa68
	// Line 663, Address: 0x27274c, Func Offset: 0xa6c
	// Line 625, Address: 0x272754, Func Offset: 0xa74
	// Line 663, Address: 0x272758, Func Offset: 0xa78
	// Line 625, Address: 0x272760, Func Offset: 0xa80
	// Line 663, Address: 0x272764, Func Offset: 0xa84
	// Line 625, Address: 0x27276c, Func Offset: 0xa8c
	// Line 663, Address: 0x272770, Func Offset: 0xa90
	// Line 625, Address: 0x272778, Func Offset: 0xa98
	// Line 664, Address: 0x272780, Func Offset: 0xaa0
	// Func End, Address: 0x2727d8, Func Offset: 0xaf8
}

// EmitInDir__13SparkyEmitterCFPC5xVec3PC5xVec3i
// Start address: 0x2727e0
void SparkyEmitter::EmitInDir(xVec3* pos, xVec3* vel, int32 num_emitCaller)
{
	int32 pbs_id;
	int32 num_desire;
	int32 cnt_remain;
	uint8* mem;
	int32 num_par;
	SparkyParticle* par;
	int32 i;
	float32 samecalc;
	// Line 351, Address: 0x2727e0, Func Offset: 0
	// Line 368, Address: 0x2727e4, Func Offset: 0x4
	// Line 351, Address: 0x2727e8, Func Offset: 0x8
	// Line 368, Address: 0x2727ec, Func Offset: 0xc
	// Line 351, Address: 0x2727f0, Func Offset: 0x10
	// Line 368, Address: 0x27280c, Func Offset: 0x2c
	// Line 351, Address: 0x272814, Func Offset: 0x34
	// Line 368, Address: 0x272820, Func Offset: 0x40
	// Line 369, Address: 0x272830, Func Offset: 0x50
	// Line 375, Address: 0x27283c, Func Offset: 0x5c
	// Line 388, Address: 0x272844, Func Offset: 0x64
	// Line 474, Address: 0x27284c, Func Offset: 0x6c
	// Line 378, Address: 0x272860, Func Offset: 0x80
	// Line 474, Address: 0x272868, Func Offset: 0x88
	// Line 378, Address: 0x272870, Func Offset: 0x90
	// Line 474, Address: 0x27289c, Func Offset: 0xbc
	// Line 378, Address: 0x2728a0, Func Offset: 0xc0
	// Line 474, Address: 0x2728a4, Func Offset: 0xc4
	// Line 378, Address: 0x2728a8, Func Offset: 0xc8
	// Line 392, Address: 0x2728b4, Func Offset: 0xd4
	// Line 474, Address: 0x2728bc, Func Offset: 0xdc
	// Line 392, Address: 0x2728c4, Func Offset: 0xe4
	// Line 474, Address: 0x2728c8, Func Offset: 0xe8
	// Line 407, Address: 0x2728fc, Func Offset: 0x11c
	// Line 474, Address: 0x272904, Func Offset: 0x124
	// Line 407, Address: 0x27290c, Func Offset: 0x12c
	// Line 414, Address: 0x272938, Func Offset: 0x158
	// Line 474, Address: 0x27293c, Func Offset: 0x15c
	// Line 436, Address: 0x272940, Func Offset: 0x160
	// Line 474, Address: 0x272944, Func Offset: 0x164
	// Line 408, Address: 0x272948, Func Offset: 0x168
	// Line 474, Address: 0x27294c, Func Offset: 0x16c
	// Line 408, Address: 0x27295c, Func Offset: 0x17c
	// Line 474, Address: 0x272960, Func Offset: 0x180
	// Line 408, Address: 0x272964, Func Offset: 0x184
	// Line 474, Address: 0x272968, Func Offset: 0x188
	// Line 436, Address: 0x27299c, Func Offset: 0x1bc
	// Line 474, Address: 0x2729a0, Func Offset: 0x1c0
	// Line 436, Address: 0x2729a8, Func Offset: 0x1c8
	// Line 474, Address: 0x2729ac, Func Offset: 0x1cc
	// Line 436, Address: 0x2729b4, Func Offset: 0x1d4
	// Line 474, Address: 0x2729b8, Func Offset: 0x1d8
	// Line 436, Address: 0x2729c0, Func Offset: 0x1e0
	// Line 474, Address: 0x2729c4, Func Offset: 0x1e4
	// Line 436, Address: 0x2729cc, Func Offset: 0x1ec
	// Line 474, Address: 0x2729d0, Func Offset: 0x1f0
	// Line 436, Address: 0x2729d8, Func Offset: 0x1f8
	// Line 438, Address: 0x2729e0, Func Offset: 0x200
	// Line 474, Address: 0x2729e4, Func Offset: 0x204
	// Line 440, Address: 0x2729e8, Func Offset: 0x208
	// Line 447, Address: 0x2729f0, Func Offset: 0x210
	// Line 474, Address: 0x2729f4, Func Offset: 0x214
	// Line 448, Address: 0x2729f8, Func Offset: 0x218
	// Line 474, Address: 0x272a48, Func Offset: 0x268
	// Line 449, Address: 0x272a4c, Func Offset: 0x26c
	// Line 451, Address: 0x272a54, Func Offset: 0x274
	// Line 453, Address: 0x272a58, Func Offset: 0x278
	// Line 474, Address: 0x272a5c, Func Offset: 0x27c
	// Line 454, Address: 0x272a60, Func Offset: 0x280
	// Line 474, Address: 0x272ab0, Func Offset: 0x2d0
	// Line 455, Address: 0x272ab4, Func Offset: 0x2d4
	// Line 457, Address: 0x272abc, Func Offset: 0x2dc
	// Line 458, Address: 0x272ac0, Func Offset: 0x2e0
	// Line 474, Address: 0x272ac4, Func Offset: 0x2e4
	// Line 461, Address: 0x272acc, Func Offset: 0x2ec
	// Line 474, Address: 0x272ad0, Func Offset: 0x2f0
	// Line 475, Address: 0x272ae8, Func Offset: 0x308
	// Func End, Address: 0x272b14, Func Offset: 0x334
}

// EmitRing__13SparkyEmitterCFPC5xVec3PC5xVec3ffi
// Start address: 0x272b20
void SparkyEmitter::EmitRing(xVec3* pos_center, xVec3* dir_axis, float32 rad_emitCaller, float32 fac_spdRamp, int32 num_emitCaller)
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
	SparkyParticle* par;
	int32 i;
	float32 samecalc;
	float32 ang_curr;
	xVec3 dir_outward;
	float32 rad_emit;
	// Line 178, Address: 0x272b20, Func Offset: 0
	// Line 195, Address: 0x272b24, Func Offset: 0x4
	// Line 178, Address: 0x272b28, Func Offset: 0x8
	// Line 195, Address: 0x272b2c, Func Offset: 0xc
	// Line 178, Address: 0x272b30, Func Offset: 0x10
	// Line 195, Address: 0x272b58, Func Offset: 0x38
	// Line 178, Address: 0x272b5c, Func Offset: 0x3c
	// Line 195, Address: 0x272b74, Func Offset: 0x54
	// Line 178, Address: 0x272b78, Func Offset: 0x58
	// Line 195, Address: 0x272b7c, Func Offset: 0x5c
	// Line 178, Address: 0x272b80, Func Offset: 0x60
	// Line 195, Address: 0x272b84, Func Offset: 0x64
	// Line 178, Address: 0x272b88, Func Offset: 0x68
	// Line 195, Address: 0x272b8c, Func Offset: 0x6c
	// Line 196, Address: 0x272b90, Func Offset: 0x70
	// Line 202, Address: 0x272ba8, Func Offset: 0x88
	// Line 203, Address: 0x272bb0, Func Offset: 0x90
	// Line 218, Address: 0x272bb4, Func Offset: 0x94
	// Line 209, Address: 0x272bcc, Func Offset: 0xac
	// Line 218, Address: 0x272bd0, Func Offset: 0xb0
	// Line 223, Address: 0x272bf4, Func Offset: 0xd4
	// Line 218, Address: 0x272bf8, Func Offset: 0xd8
	// Line 223, Address: 0x272bfc, Func Offset: 0xdc
	// Line 218, Address: 0x272c00, Func Offset: 0xe0
	// Line 223, Address: 0x272c10, Func Offset: 0xf0
	// Line 218, Address: 0x272c14, Func Offset: 0xf4
	// Line 223, Address: 0x272c1c, Func Offset: 0xfc
	// Line 218, Address: 0x272c20, Func Offset: 0x100
	// Line 223, Address: 0x272c44, Func Offset: 0x124
	// Line 218, Address: 0x272c48, Func Offset: 0x128
	// Line 223, Address: 0x272c4c, Func Offset: 0x12c
	// Line 229, Address: 0x272c5c, Func Offset: 0x13c
	// Line 346, Address: 0x272c64, Func Offset: 0x144
	// Line 205, Address: 0x272c78, Func Offset: 0x158
	// Line 346, Address: 0x272c80, Func Offset: 0x160
	// Line 205, Address: 0x272c88, Func Offset: 0x168
	// Line 346, Address: 0x272cb4, Func Offset: 0x194
	// Line 205, Address: 0x272cb8, Func Offset: 0x198
	// Line 346, Address: 0x272cbc, Func Offset: 0x19c
	// Line 205, Address: 0x272cc0, Func Offset: 0x1a0
	// Line 346, Address: 0x272cc8, Func Offset: 0x1a8
	// Line 233, Address: 0x272ce0, Func Offset: 0x1c0
	// Line 346, Address: 0x272ce8, Func Offset: 0x1c8
	// Line 248, Address: 0x272d38, Func Offset: 0x218
	// Line 346, Address: 0x272d40, Func Offset: 0x220
	// Line 248, Address: 0x272d48, Func Offset: 0x228
	// Line 255, Address: 0x272d74, Func Offset: 0x254
	// Line 346, Address: 0x272d78, Func Offset: 0x258
	// Line 249, Address: 0x272d80, Func Offset: 0x260
	// Line 346, Address: 0x272d84, Func Offset: 0x264
	// Line 249, Address: 0x272d88, Func Offset: 0x268
	// Line 346, Address: 0x272d90, Func Offset: 0x270
	// Line 260, Address: 0x272da0, Func Offset: 0x280
	// Line 346, Address: 0x272da8, Func Offset: 0x288
	// Line 260, Address: 0x272db0, Func Offset: 0x290
	// Line 346, Address: 0x272de4, Func Offset: 0x2c4
	// Line 260, Address: 0x272de8, Func Offset: 0x2c8
	// Line 346, Address: 0x272e04, Func Offset: 0x2e4
	// Line 262, Address: 0x272e0c, Func Offset: 0x2ec
	// Line 346, Address: 0x272e10, Func Offset: 0x2f0
	// Line 267, Address: 0x272e68, Func Offset: 0x348
	// Line 263, Address: 0x272e74, Func Offset: 0x354
	// Line 346, Address: 0x272e78, Func Offset: 0x358
	// Line 263, Address: 0x272e88, Func Offset: 0x368
	// Line 346, Address: 0x272e90, Func Offset: 0x370
	// Line 267, Address: 0x272ea0, Func Offset: 0x380
	// Line 346, Address: 0x272ea4, Func Offset: 0x384
	// Line 263, Address: 0x272ec0, Func Offset: 0x3a0
	// Line 346, Address: 0x272ec4, Func Offset: 0x3a4
	// Line 263, Address: 0x272ed0, Func Offset: 0x3b0
	// Line 346, Address: 0x272ed4, Func Offset: 0x3b4
	// Line 263, Address: 0x272ee4, Func Offset: 0x3c4
	// Line 346, Address: 0x272ee8, Func Offset: 0x3c8
	// Line 263, Address: 0x272f28, Func Offset: 0x408
	// Line 346, Address: 0x272f2c, Func Offset: 0x40c
	// Line 263, Address: 0x272f38, Func Offset: 0x418
	// Line 346, Address: 0x272f3c, Func Offset: 0x41c
	// Line 263, Address: 0x272f58, Func Offset: 0x438
	// Line 346, Address: 0x272f5c, Func Offset: 0x43c
	// Line 268, Address: 0x272f88, Func Offset: 0x468
	// Line 270, Address: 0x272f8c, Func Offset: 0x46c
	// Line 346, Address: 0x272f90, Func Offset: 0x470
	// Line 308, Address: 0x272fa8, Func Offset: 0x488
	// Line 346, Address: 0x272fac, Func Offset: 0x48c
	// Line 286, Address: 0x272fb0, Func Offset: 0x490
	// Line 346, Address: 0x272fb4, Func Offset: 0x494
	// Line 286, Address: 0x272fd0, Func Offset: 0x4b0
	// Line 346, Address: 0x272fd4, Func Offset: 0x4b4
	// Line 286, Address: 0x272fd8, Func Offset: 0x4b8
	// Line 346, Address: 0x272fdc, Func Offset: 0x4bc
	// Line 276, Address: 0x272fe8, Func Offset: 0x4c8
	// Line 346, Address: 0x272fec, Func Offset: 0x4cc
	// Line 276, Address: 0x272ff8, Func Offset: 0x4d8
	// Line 346, Address: 0x272ffc, Func Offset: 0x4dc
	// Line 276, Address: 0x273004, Func Offset: 0x4e4
	// Line 346, Address: 0x273008, Func Offset: 0x4e8
	// Line 276, Address: 0x273050, Func Offset: 0x530
	// Line 288, Address: 0x273054, Func Offset: 0x534
	// Line 346, Address: 0x273058, Func Offset: 0x538
	// Line 288, Address: 0x273060, Func Offset: 0x540
	// Line 346, Address: 0x273064, Func Offset: 0x544
	// Line 288, Address: 0x273070, Func Offset: 0x550
	// Line 346, Address: 0x273074, Func Offset: 0x554
	// Line 276, Address: 0x273078, Func Offset: 0x558
	// Line 346, Address: 0x27307c, Func Offset: 0x55c
	// Line 276, Address: 0x273098, Func Offset: 0x578
	// Line 346, Address: 0x27309c, Func Offset: 0x57c
	// Line 286, Address: 0x2730b0, Func Offset: 0x590
	// Line 346, Address: 0x2730b4, Func Offset: 0x594
	// Line 286, Address: 0x2730c8, Func Offset: 0x5a8
	// Line 346, Address: 0x2730cc, Func Offset: 0x5ac
	// Line 286, Address: 0x2730d4, Func Offset: 0x5b4
	// Line 346, Address: 0x2730d8, Func Offset: 0x5b8
	// Line 288, Address: 0x2730e0, Func Offset: 0x5c0
	// Line 346, Address: 0x2730e4, Func Offset: 0x5c4
	// Line 288, Address: 0x2730f0, Func Offset: 0x5d0
	// Line 346, Address: 0x2730f4, Func Offset: 0x5d4
	// Line 294, Address: 0x27310c, Func Offset: 0x5ec
	// Line 346, Address: 0x273110, Func Offset: 0x5f0
	// Line 294, Address: 0x27312c, Func Offset: 0x60c
	// Line 346, Address: 0x273130, Func Offset: 0x610
	// Line 295, Address: 0x2731a0, Func Offset: 0x680
	// Line 346, Address: 0x2731a4, Func Offset: 0x684
	// Line 294, Address: 0x2731ac, Func Offset: 0x68c
	// Line 288, Address: 0x2731b0, Func Offset: 0x690
	// Line 346, Address: 0x2731b4, Func Offset: 0x694
	// Line 295, Address: 0x2731bc, Func Offset: 0x69c
	// Line 346, Address: 0x2731c0, Func Offset: 0x6a0
	// Line 288, Address: 0x2731f0, Func Offset: 0x6d0
	// Line 295, Address: 0x2731f4, Func Offset: 0x6d4
	// Line 346, Address: 0x2731f8, Func Offset: 0x6d8
	// Line 288, Address: 0x273214, Func Offset: 0x6f4
	// Line 346, Address: 0x273218, Func Offset: 0x6f8
	// Line 290, Address: 0x273230, Func Offset: 0x710
	// Line 346, Address: 0x273234, Func Offset: 0x714
	// Line 290, Address: 0x27323c, Func Offset: 0x71c
	// Line 346, Address: 0x273240, Func Offset: 0x720
	// Line 290, Address: 0x273248, Func Offset: 0x728
	// Line 346, Address: 0x27324c, Func Offset: 0x72c
	// Line 295, Address: 0x273260, Func Offset: 0x740
	// Line 346, Address: 0x273264, Func Offset: 0x744
	// Line 295, Address: 0x27326c, Func Offset: 0x74c
	// Line 346, Address: 0x273270, Func Offset: 0x750
	// Line 295, Address: 0x273278, Func Offset: 0x758
	// Line 346, Address: 0x27327c, Func Offset: 0x75c
	// Line 308, Address: 0x273284, Func Offset: 0x764
	// Line 346, Address: 0x273288, Func Offset: 0x768
	// Line 308, Address: 0x273290, Func Offset: 0x770
	// Line 346, Address: 0x273294, Func Offset: 0x774
	// Line 308, Address: 0x27329c, Func Offset: 0x77c
	// Line 346, Address: 0x2732a0, Func Offset: 0x780
	// Line 308, Address: 0x2732a8, Func Offset: 0x788
	// Line 346, Address: 0x2732ac, Func Offset: 0x78c
	// Line 308, Address: 0x2732b4, Func Offset: 0x794
	// Line 346, Address: 0x2732b8, Func Offset: 0x798
	// Line 308, Address: 0x2732c0, Func Offset: 0x7a0
	// Line 310, Address: 0x2732c8, Func Offset: 0x7a8
	// Line 346, Address: 0x2732cc, Func Offset: 0x7ac
	// Line 312, Address: 0x2732d0, Func Offset: 0x7b0
	// Line 319, Address: 0x2732d8, Func Offset: 0x7b8
	// Line 346, Address: 0x2732dc, Func Offset: 0x7bc
	// Line 320, Address: 0x2732e0, Func Offset: 0x7c0
	// Line 346, Address: 0x273330, Func Offset: 0x810
	// Line 321, Address: 0x273334, Func Offset: 0x814
	// Line 323, Address: 0x27333c, Func Offset: 0x81c
	// Line 325, Address: 0x273340, Func Offset: 0x820
	// Line 346, Address: 0x273344, Func Offset: 0x824
	// Line 326, Address: 0x273348, Func Offset: 0x828
	// Line 346, Address: 0x273398, Func Offset: 0x878
	// Line 327, Address: 0x27339c, Func Offset: 0x87c
	// Line 329, Address: 0x2733a4, Func Offset: 0x884
	// Line 330, Address: 0x2733a8, Func Offset: 0x888
	// Line 346, Address: 0x2733ac, Func Offset: 0x88c
	// Line 333, Address: 0x2733b4, Func Offset: 0x894
	// Line 346, Address: 0x2733b8, Func Offset: 0x898
	// Line 270, Address: 0x2733e0, Func Offset: 0x8c0
	// Line 347, Address: 0x2733f8, Func Offset: 0x8d8
	// Func End, Address: 0x273444, Func Offset: 0x924
}

// EmitOnAxis__13SparkyEmitterCFPC5xVec3PC5xVec3f
// Start address: 0x273450
void SparkyEmitter::EmitOnAxis(xVec3* pos_center, xVec3* dir_axis)
{
	// Line 168, Address: 0x273450, Func Offset: 0
	// Func End, Address: 0x273470, Func Offset: 0x20
}

