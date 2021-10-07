



int32 ExhaustSysUpdate_noRot(uint8* mem, int32 count, ptank_pool& apool, float32 dt);
int32 ExhaustSysUpdate(uint8* mem, int32 count, ptank_pool& apool, float32 dt);
void ExhaustSysInit_Glow(NPARMgmt* mgmt, xParticleBatchSystem* pbs);
void ExhaustSysInit_Hot(NPARMgmt* mgmt, xParticleBatchSystem* pbs);
void ExhaustSysInit_noRot_Dull(NPARMgmt* mgmt, xParticleBatchSystem* pbs);
void ExhaustSysInit_Dull(NPARMgmt* mgmt, xParticleBatchSystem* pbs);
void ExhaustSysTweaks(int8* prefix_root);
void EmitLineUp(xVec3* pos_beg, xVec3* pos_end, xVec3* vel_drift, float32 pct_spdRamp, int32 num_emitCaller, float32 rad_emitCaller);
void EmitRing(xVec3* pos_center, xVec3* dir_axis, float32 rad_emitCaller, float32 pct_spdRamp, int32 num_emitCaller, xVec3* vel_drift);
void EmitOnAxis(xVec3* pos_center, xVec3* dir_axis);

// ExhaustSysUpdate_noRot__7ExhaustFPUciR10ptank_poolfPv
// Start address: 0x279e10
int32 ExhaustSysUpdate_noRot(uint8* mem, int32 count, ptank_pool& apool, float32 dt)
{
	ptank_pool__pos_color_size_uv2* pool;
	ExhaustParticle* par;
	ExhaustParticle* end;
	xVec3 pos_plyr;
	ExhaustEmitter* emitter;
	float32 tym_life;
	float32 rat_rev;
	float32 rat;
	ExhaustCurve node_eval;
	int32 idx;
	int32 linearize;
	int32 systemUsesHDR;
	xColor_tag par_color;
	float32 adjAlpha;
	uint8 alftest;
	float32 sum;
	Damage_2* dmg;
	float32 ds2_plyr;
	float32 scaleSize;
	// Line 1051, Address: 0x279e10, Func Offset: 0
	// Line 1056, Address: 0x279e14, Func Offset: 0x4
	// Line 1051, Address: 0x279e18, Func Offset: 0x8
	// Line 1052, Address: 0x279e38, Func Offset: 0x28
	// Line 1051, Address: 0x279e3c, Func Offset: 0x2c
	// Line 1055, Address: 0x279e40, Func Offset: 0x30
	// Line 1051, Address: 0x279e44, Func Offset: 0x34
	// Line 1056, Address: 0x279e48, Func Offset: 0x38
	// Line 1051, Address: 0x279e4c, Func Offset: 0x3c
	// Line 1056, Address: 0x279e5c, Func Offset: 0x4c
	// Line 1057, Address: 0x279e68, Func Offset: 0x58
	// Line 1059, Address: 0x279e7c, Func Offset: 0x6c
	// Line 1068, Address: 0x279e9c, Func Offset: 0x8c
	// Line 1061, Address: 0x279ea0, Func Offset: 0x90
	// Line 1068, Address: 0x279ea4, Func Offset: 0x94
	// Line 1075, Address: 0x279ea8, Func Offset: 0x98
	// Line 1077, Address: 0x279ec8, Func Offset: 0xb8
	// Line 1078, Address: 0x279ecc, Func Offset: 0xbc
	// Line 1079, Address: 0x279f60, Func Offset: 0x150
	// Line 1084, Address: 0x279f68, Func Offset: 0x158
	// Line 1101, Address: 0x279f8c, Func Offset: 0x17c
	// Line 1102, Address: 0x279f90, Func Offset: 0x180
	// Line 1086, Address: 0x279f98, Func Offset: 0x188
	// Line 1103, Address: 0x279f9c, Func Offset: 0x18c
	// Line 1104, Address: 0x27a400, Func Offset: 0x5f0
	// Line 1103, Address: 0x27a404, Func Offset: 0x5f4
	// Line 1112, Address: 0x27a408, Func Offset: 0x5f8
	// Line 1103, Address: 0x27a40c, Func Offset: 0x5fc
	// Line 1112, Address: 0x27a410, Func Offset: 0x600
	// Line 1103, Address: 0x27a414, Func Offset: 0x604
	// Line 1112, Address: 0x27a418, Func Offset: 0x608
	// Line 1103, Address: 0x27a41c, Func Offset: 0x60c
	// Line 1112, Address: 0x27a420, Func Offset: 0x610
	// Line 1116, Address: 0x27a428, Func Offset: 0x618
	// Line 1112, Address: 0x27a42c, Func Offset: 0x61c
	// Line 1116, Address: 0x27a4a8, Func Offset: 0x698
	// Line 1117, Address: 0x27a4b4, Func Offset: 0x6a4
	// Line 1119, Address: 0x27a544, Func Offset: 0x734
	// Line 1120, Address: 0x27a548, Func Offset: 0x738
	// Line 1119, Address: 0x27a54c, Func Offset: 0x73c
	// Line 1120, Address: 0x27a564, Func Offset: 0x754
	// Line 1121, Address: 0x27a5dc, Func Offset: 0x7cc
	// Line 1120, Address: 0x27a5e0, Func Offset: 0x7d0
	// Line 1121, Address: 0x27a5f0, Func Offset: 0x7e0
	// Line 1128, Address: 0x27a680, Func Offset: 0x870
	// Line 1129, Address: 0x27a69c, Func Offset: 0x88c
	// Line 1135, Address: 0x27a6b4, Func Offset: 0x8a4
	// Line 1147, Address: 0x27a6fc, Func Offset: 0x8ec
	// Line 1150, Address: 0x27a720, Func Offset: 0x910
	// Line 1184, Address: 0x27a724, Func Offset: 0x914
	// Line 1150, Address: 0x27a728, Func Offset: 0x918
	// Line 1184, Address: 0x27a72c, Func Offset: 0x91c
	// Line 1185, Address: 0x27a750, Func Offset: 0x940
	// Line 1186, Address: 0x27a784, Func Offset: 0x974
	// Line 1185, Address: 0x27a78c, Func Offset: 0x97c
	// Line 1186, Address: 0x27a790, Func Offset: 0x980
	// Line 1189, Address: 0x27a828, Func Offset: 0xa18
	// Line 1190, Address: 0x27a830, Func Offset: 0xa20
	// Line 1191, Address: 0x27a8d0, Func Offset: 0xac0
	// Line 1192, Address: 0x27a8d4, Func Offset: 0xac4
	// Line 1191, Address: 0x27a8d8, Func Offset: 0xac8
	// Line 1192, Address: 0x27a8dc, Func Offset: 0xacc
	// Line 1191, Address: 0x27a8e0, Func Offset: 0xad0
	// Line 1192, Address: 0x27a8ec, Func Offset: 0xadc
	// Line 1196, Address: 0x27a980, Func Offset: 0xb70
	// Line 1203, Address: 0x27a9ec, Func Offset: 0xbdc
	// Line 1204, Address: 0x27a9f8, Func Offset: 0xbe8
	// Line 1203, Address: 0x27a9fc, Func Offset: 0xbec
	// Line 1204, Address: 0x27aa20, Func Offset: 0xc10
	// Line 1203, Address: 0x27aa24, Func Offset: 0xc14
	// Line 1204, Address: 0x27aa28, Func Offset: 0xc18
	// Line 1203, Address: 0x27aa2c, Func Offset: 0xc1c
	// Line 1204, Address: 0x27aa34, Func Offset: 0xc24
	// Line 1205, Address: 0x27aa3c, Func Offset: 0xc2c
	// Line 1232, Address: 0x27aa50, Func Offset: 0xc40
	// Line 1233, Address: 0x27ab7c, Func Offset: 0xd6c
	// Line 1236, Address: 0x27ab88, Func Offset: 0xd78
	// Line 1244, Address: 0x27ab90, Func Offset: 0xd80
	// Line 1236, Address: 0x27ab94, Func Offset: 0xd84
	// Line 1244, Address: 0x27ab98, Func Offset: 0xd88
	// Line 1245, Address: 0x27ab9c, Func Offset: 0xd8c
	// Line 1244, Address: 0x27aba0, Func Offset: 0xd90
	// Line 1245, Address: 0x27aba4, Func Offset: 0xd94
	// Line 1252, Address: 0x27abac, Func Offset: 0xd9c
	// Line 1245, Address: 0x27abb0, Func Offset: 0xda0
	// Line 1257, Address: 0x27abb4, Func Offset: 0xda4
	// Line 1244, Address: 0x27abb8, Func Offset: 0xda8
	// Line 1245, Address: 0x27abc8, Func Offset: 0xdb8
	// Line 1252, Address: 0x27abd8, Func Offset: 0xdc8
	// Line 1253, Address: 0x27abdc, Func Offset: 0xdcc
	// Line 1252, Address: 0x27abe4, Func Offset: 0xdd4
	// Line 1253, Address: 0x27abe8, Func Offset: 0xdd8
	// Line 1254, Address: 0x27abf0, Func Offset: 0xde0
	// Line 1257, Address: 0x27ac04, Func Offset: 0xdf4
	// Line 1258, Address: 0x27ac0c, Func Offset: 0xdfc
	// Line 1259, Address: 0x27ac34, Func Offset: 0xe24
	// Line 1260, Address: 0x27ac50, Func Offset: 0xe40
	// Line 1261, Address: 0x27ac58, Func Offset: 0xe48
	// Line 1262, Address: 0x27ac60, Func Offset: 0xe50
	// Line 1263, Address: 0x27ac88, Func Offset: 0xe78
	// Line 1264, Address: 0x27aca4, Func Offset: 0xe94
	// Line 1265, Address: 0x27acac, Func Offset: 0xe9c
	// Line 1266, Address: 0x27acb8, Func Offset: 0xea8
	// Line 1267, Address: 0x27ace0, Func Offset: 0xed0
	// Line 1268, Address: 0x27acfc, Func Offset: 0xeec
	// Line 1269, Address: 0x27ad04, Func Offset: 0xef4
	// Line 1270, Address: 0x27ad0c, Func Offset: 0xefc
	// Line 1271, Address: 0x27ad20, Func Offset: 0xf10
	// Line 1272, Address: 0x27ad2c, Func Offset: 0xf1c
	// Line 1274, Address: 0x27ad34, Func Offset: 0xf24
	// Line 1275, Address: 0x27ad48, Func Offset: 0xf38
	// Line 1280, Address: 0x27ad58, Func Offset: 0xf48
	// Line 1281, Address: 0x27ad5c, Func Offset: 0xf4c
	// Line 1284, Address: 0x27ad64, Func Offset: 0xf54
	// Line 1285, Address: 0x27ad78, Func Offset: 0xf68
	// Func End, Address: 0x27adb4, Func Offset: 0xfa4
}

// ExhaustSysUpdate__7ExhaustFPUciR10ptank_poolfPv
// Start address: 0x27adc0
int32 ExhaustSysUpdate(uint8* mem, int32 count, ptank_pool& apool, float32 dt)
{
	ptank_pool__pos_color_size_rot_uv2* pool;
	ExhaustParticle* par;
	ExhaustParticle* end;
	xVec3 pos_plyr;
	ExhaustEmitter* emitter;
	float32 tym_life;
	float32 rat_rev;
	float32 rat;
	ExhaustCurve node_eval;
	int32 idx;
	int32 linearize;
	int32 systemUsesHDR;
	float32 fac_randSaddle;
	xColor_tag par_color;
	float32 adjAlpha;
	uint8 alftest;
	float32 sum;
	Damage_2* dmg;
	float32 ds2_plyr;
	float32 scaleSize;
	// Line 827, Address: 0x27adc0, Func Offset: 0
	// Line 832, Address: 0x27adc4, Func Offset: 0x4
	// Line 827, Address: 0x27adc8, Func Offset: 0x8
	// Line 828, Address: 0x27ade8, Func Offset: 0x28
	// Line 827, Address: 0x27adec, Func Offset: 0x2c
	// Line 831, Address: 0x27adf0, Func Offset: 0x30
	// Line 827, Address: 0x27adf4, Func Offset: 0x34
	// Line 832, Address: 0x27adf8, Func Offset: 0x38
	// Line 827, Address: 0x27adfc, Func Offset: 0x3c
	// Line 832, Address: 0x27ae10, Func Offset: 0x50
	// Line 833, Address: 0x27ae1c, Func Offset: 0x5c
	// Line 835, Address: 0x27ae30, Func Offset: 0x70
	// Line 844, Address: 0x27ae4c, Func Offset: 0x8c
	// Line 837, Address: 0x27ae50, Func Offset: 0x90
	// Line 844, Address: 0x27ae54, Func Offset: 0x94
	// Line 851, Address: 0x27ae58, Func Offset: 0x98
	// Line 853, Address: 0x27ae78, Func Offset: 0xb8
	// Line 854, Address: 0x27ae7c, Func Offset: 0xbc
	// Line 855, Address: 0x27af10, Func Offset: 0x150
	// Line 860, Address: 0x27af18, Func Offset: 0x158
	// Line 875, Address: 0x27af3c, Func Offset: 0x17c
	// Line 876, Address: 0x27af40, Func Offset: 0x180
	// Line 862, Address: 0x27af48, Func Offset: 0x188
	// Line 877, Address: 0x27af4c, Func Offset: 0x18c
	// Line 878, Address: 0x27b3b4, Func Offset: 0x5f4
	// Line 877, Address: 0x27b3b8, Func Offset: 0x5f8
	// Line 886, Address: 0x27b3bc, Func Offset: 0x5fc
	// Line 877, Address: 0x27b3c0, Func Offset: 0x600
	// Line 886, Address: 0x27b3c4, Func Offset: 0x604
	// Line 877, Address: 0x27b3c8, Func Offset: 0x608
	// Line 886, Address: 0x27b3cc, Func Offset: 0x60c
	// Line 877, Address: 0x27b3d0, Func Offset: 0x610
	// Line 886, Address: 0x27b3d4, Func Offset: 0x614
	// Line 890, Address: 0x27b3dc, Func Offset: 0x61c
	// Line 886, Address: 0x27b3e0, Func Offset: 0x620
	// Line 890, Address: 0x27b45c, Func Offset: 0x69c
	// Line 891, Address: 0x27b468, Func Offset: 0x6a8
	// Line 893, Address: 0x27b4f8, Func Offset: 0x738
	// Line 894, Address: 0x27b4fc, Func Offset: 0x73c
	// Line 893, Address: 0x27b500, Func Offset: 0x740
	// Line 894, Address: 0x27b518, Func Offset: 0x758
	// Line 895, Address: 0x27b590, Func Offset: 0x7d0
	// Line 894, Address: 0x27b594, Func Offset: 0x7d4
	// Line 895, Address: 0x27b5a4, Func Offset: 0x7e4
	// Line 902, Address: 0x27b634, Func Offset: 0x874
	// Line 903, Address: 0x27b650, Func Offset: 0x890
	// Line 909, Address: 0x27b668, Func Offset: 0x8a8
	// Line 921, Address: 0x27b6b0, Func Offset: 0x8f0
	// Line 924, Address: 0x27b6d4, Func Offset: 0x914
	// Line 939, Address: 0x27b6e4, Func Offset: 0x924
	// Line 944, Address: 0x27b70c, Func Offset: 0x94c
	// Line 950, Address: 0x27b720, Func Offset: 0x960
	// Line 951, Address: 0x27b748, Func Offset: 0x988
	// Line 952, Address: 0x27b77c, Func Offset: 0x9bc
	// Line 951, Address: 0x27b788, Func Offset: 0x9c8
	// Line 952, Address: 0x27b78c, Func Offset: 0x9cc
	// Line 955, Address: 0x27b824, Func Offset: 0xa64
	// Line 956, Address: 0x27b82c, Func Offset: 0xa6c
	// Line 957, Address: 0x27b8cc, Func Offset: 0xb0c
	// Line 958, Address: 0x27b8d0, Func Offset: 0xb10
	// Line 957, Address: 0x27b8d4, Func Offset: 0xb14
	// Line 958, Address: 0x27b8d8, Func Offset: 0xb18
	// Line 957, Address: 0x27b8e0, Func Offset: 0xb20
	// Line 958, Address: 0x27b8ec, Func Offset: 0xb2c
	// Line 962, Address: 0x27b980, Func Offset: 0xbc0
	// Line 969, Address: 0x27b9ec, Func Offset: 0xc2c
	// Line 970, Address: 0x27b9f8, Func Offset: 0xc38
	// Line 969, Address: 0x27b9fc, Func Offset: 0xc3c
	// Line 970, Address: 0x27ba20, Func Offset: 0xc60
	// Line 969, Address: 0x27ba24, Func Offset: 0xc64
	// Line 970, Address: 0x27ba28, Func Offset: 0xc68
	// Line 969, Address: 0x27ba2c, Func Offset: 0xc6c
	// Line 970, Address: 0x27ba34, Func Offset: 0xc74
	// Line 971, Address: 0x27ba3c, Func Offset: 0xc7c
	// Line 998, Address: 0x27ba50, Func Offset: 0xc90
	// Line 999, Address: 0x27bba4, Func Offset: 0xde4
	// Line 1002, Address: 0x27bbb0, Func Offset: 0xdf0
	// Line 1010, Address: 0x27bbb8, Func Offset: 0xdf8
	// Line 1002, Address: 0x27bbbc, Func Offset: 0xdfc
	// Line 1010, Address: 0x27bbc0, Func Offset: 0xe00
	// Line 1011, Address: 0x27bbc4, Func Offset: 0xe04
	// Line 1010, Address: 0x27bbc8, Func Offset: 0xe08
	// Line 1011, Address: 0x27bbcc, Func Offset: 0xe0c
	// Line 1013, Address: 0x27bbd4, Func Offset: 0xe14
	// Line 1011, Address: 0x27bbd8, Func Offset: 0xe18
	// Line 1018, Address: 0x27bbdc, Func Offset: 0xe1c
	// Line 1010, Address: 0x27bbe0, Func Offset: 0xe20
	// Line 1011, Address: 0x27bbf0, Func Offset: 0xe30
	// Line 1012, Address: 0x27bc04, Func Offset: 0xe44
	// Line 1013, Address: 0x27bc0c, Func Offset: 0xe4c
	// Line 1014, Address: 0x27bc10, Func Offset: 0xe50
	// Line 1013, Address: 0x27bc18, Func Offset: 0xe58
	// Line 1014, Address: 0x27bc1c, Func Offset: 0xe5c
	// Line 1015, Address: 0x27bc24, Func Offset: 0xe64
	// Line 1018, Address: 0x27bc38, Func Offset: 0xe78
	// Line 1019, Address: 0x27bc40, Func Offset: 0xe80
	// Line 1020, Address: 0x27bc68, Func Offset: 0xea8
	// Line 1021, Address: 0x27bc84, Func Offset: 0xec4
	// Line 1022, Address: 0x27bc8c, Func Offset: 0xecc
	// Line 1023, Address: 0x27bc94, Func Offset: 0xed4
	// Line 1024, Address: 0x27bcbc, Func Offset: 0xefc
	// Line 1025, Address: 0x27bcd8, Func Offset: 0xf18
	// Line 1026, Address: 0x27bce0, Func Offset: 0xf20
	// Line 1027, Address: 0x27bcec, Func Offset: 0xf2c
	// Line 1028, Address: 0x27bd14, Func Offset: 0xf54
	// Line 1029, Address: 0x27bd30, Func Offset: 0xf70
	// Line 1030, Address: 0x27bd38, Func Offset: 0xf78
	// Line 1031, Address: 0x27bd40, Func Offset: 0xf80
	// Line 1032, Address: 0x27bd54, Func Offset: 0xf94
	// Line 1033, Address: 0x27bd60, Func Offset: 0xfa0
	// Line 1035, Address: 0x27bd68, Func Offset: 0xfa8
	// Line 1036, Address: 0x27bd7c, Func Offset: 0xfbc
	// Line 1041, Address: 0x27bd8c, Func Offset: 0xfcc
	// Line 1042, Address: 0x27bd90, Func Offset: 0xfd0
	// Line 1045, Address: 0x27bd98, Func Offset: 0xfd8
	// Line 1046, Address: 0x27bdac, Func Offset: 0xfec
	// Func End, Address: 0x27bdec, Func Offset: 0x102c
}

// ExhaustSysInit_Glow__7ExhaustFP8NPARMgmtP20xParticleBatchSystem
// Start address: 0x27bdf0
void ExhaustSysInit_Glow(NPARMgmt* mgmt, xParticleBatchSystem* pbs)
{
	// Line 809, Address: 0x27bdf0, Func Offset: 0
	// Line 813, Address: 0x27bdf4, Func Offset: 0x4
	// Line 809, Address: 0x27bdf8, Func Offset: 0x8
	// Line 815, Address: 0x27bdfc, Func Offset: 0xc
	// Line 812, Address: 0x27be00, Func Offset: 0x10
	// Line 820, Address: 0x27be04, Func Offset: 0x14
	// Line 819, Address: 0x27be08, Func Offset: 0x18
	// Line 820, Address: 0x27be0c, Func Offset: 0x1c
	// Line 812, Address: 0x27be10, Func Offset: 0x20
	// Line 813, Address: 0x27be14, Func Offset: 0x24
	// Line 814, Address: 0x27be18, Func Offset: 0x28
	// Line 815, Address: 0x27be1c, Func Offset: 0x2c
	// Line 817, Address: 0x27be20, Func Offset: 0x30
	// Line 818, Address: 0x27be24, Func Offset: 0x34
	// Line 819, Address: 0x27be28, Func Offset: 0x38
	// Line 820, Address: 0x27be2c, Func Offset: 0x3c
	// Line 824, Address: 0x27be30, Func Offset: 0x40
	// Func End, Address: 0x27be38, Func Offset: 0x48
}

// ExhaustSysInit_Hot__7ExhaustFP8NPARMgmtP20xParticleBatchSystem
// Start address: 0x27be40
void ExhaustSysInit_Hot(NPARMgmt* mgmt, xParticleBatchSystem* pbs)
{
	// Line 790, Address: 0x27be40, Func Offset: 0
	// Line 801, Address: 0x27be44, Func Offset: 0x4
	// Line 790, Address: 0x27be48, Func Offset: 0x8
	// Line 795, Address: 0x27be4c, Func Offset: 0xc
	// Line 793, Address: 0x27be50, Func Offset: 0x10
	// Line 800, Address: 0x27be54, Func Offset: 0x14
	// Line 801, Address: 0x27be58, Func Offset: 0x18
	// Line 793, Address: 0x27be5c, Func Offset: 0x1c
	// Line 794, Address: 0x27be60, Func Offset: 0x20
	// Line 795, Address: 0x27be64, Func Offset: 0x24
	// Line 796, Address: 0x27be68, Func Offset: 0x28
	// Line 798, Address: 0x27be6c, Func Offset: 0x2c
	// Line 799, Address: 0x27be70, Func Offset: 0x30
	// Line 800, Address: 0x27be74, Func Offset: 0x34
	// Line 801, Address: 0x27be78, Func Offset: 0x38
	// Line 805, Address: 0x27be7c, Func Offset: 0x3c
	// Func End, Address: 0x27be84, Func Offset: 0x44
}

// ExhaustSysInit_noRot_Dull__7ExhaustFP8NPARMgmtP20xParticleBatchSystem
// Start address: 0x27be90
void ExhaustSysInit_noRot_Dull(NPARMgmt* mgmt, xParticleBatchSystem* pbs)
{
	// Line 771, Address: 0x27be90, Func Offset: 0
	// Line 775, Address: 0x27be94, Func Offset: 0x4
	// Line 771, Address: 0x27be98, Func Offset: 0x8
	// Line 776, Address: 0x27be9c, Func Offset: 0xc
	// Line 774, Address: 0x27bea0, Func Offset: 0x10
	// Line 782, Address: 0x27bea4, Func Offset: 0x14
	// Line 781, Address: 0x27bea8, Func Offset: 0x18
	// Line 782, Address: 0x27beac, Func Offset: 0x1c
	// Line 774, Address: 0x27beb0, Func Offset: 0x20
	// Line 775, Address: 0x27beb4, Func Offset: 0x24
	// Line 776, Address: 0x27beb8, Func Offset: 0x28
	// Line 777, Address: 0x27bebc, Func Offset: 0x2c
	// Line 779, Address: 0x27bec0, Func Offset: 0x30
	// Line 780, Address: 0x27bec4, Func Offset: 0x34
	// Line 781, Address: 0x27bec8, Func Offset: 0x38
	// Line 782, Address: 0x27becc, Func Offset: 0x3c
	// Line 786, Address: 0x27bed0, Func Offset: 0x40
	// Func End, Address: 0x27bed8, Func Offset: 0x48
}

// ExhaustSysInit_Dull__7ExhaustFP8NPARMgmtP20xParticleBatchSystem
// Start address: 0x27bee0
void ExhaustSysInit_Dull(NPARMgmt* mgmt, xParticleBatchSystem* pbs)
{
	// Line 752, Address: 0x27bee0, Func Offset: 0
	// Line 763, Address: 0x27bee4, Func Offset: 0x4
	// Line 752, Address: 0x27bee8, Func Offset: 0x8
	// Line 757, Address: 0x27beec, Func Offset: 0xc
	// Line 755, Address: 0x27bef0, Func Offset: 0x10
	// Line 762, Address: 0x27bef4, Func Offset: 0x14
	// Line 763, Address: 0x27bef8, Func Offset: 0x18
	// Line 755, Address: 0x27befc, Func Offset: 0x1c
	// Line 756, Address: 0x27bf00, Func Offset: 0x20
	// Line 757, Address: 0x27bf04, Func Offset: 0x24
	// Line 758, Address: 0x27bf08, Func Offset: 0x28
	// Line 760, Address: 0x27bf0c, Func Offset: 0x2c
	// Line 761, Address: 0x27bf10, Func Offset: 0x30
	// Line 762, Address: 0x27bf14, Func Offset: 0x34
	// Line 763, Address: 0x27bf18, Func Offset: 0x38
	// Line 767, Address: 0x27bf1c, Func Offset: 0x3c
	// Func End, Address: 0x27bf24, Func Offset: 0x44
}

// ExhaustSysTweaks__7ExhaustFP8NPARMgmtPCc
// Start address: 0x27bf30
void ExhaustSysTweaks(int8* prefix_root)
{
	int8 prefix_base[128];
	int8 prefix[128];
	// Line 730, Address: 0x27bf30, Func Offset: 0
	// Line 733, Address: 0x27bf38, Func Offset: 0x8
	// Line 730, Address: 0x27bf40, Func Offset: 0x10
	// Line 733, Address: 0x27bf44, Func Offset: 0x14
	// Line 735, Address: 0x27bf54, Func Offset: 0x24
	// Line 741, Address: 0x27bf70, Func Offset: 0x40
	// Func End, Address: 0x27bf7c, Func Offset: 0x4c
}

// EmitLineUp__14ExhaustEmitterCFPC5xVec3PC5xVec3P5xVec3fif
// Start address: 0x27bf80
void ExhaustEmitter::EmitLineUp(xVec3* pos_beg, xVec3* pos_end, xVec3* vel_drift, float32 pct_spdRamp, int32 num_emitCaller, float32 rad_emitCaller)
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
	ExhaustParticle* par;
	int32 i;
	float32 samecalc;
	float32 ang_curr;
	xVec3 dir_outward;
	float32 rad_emit;
	// Line 385, Address: 0x27bf80, Func Offset: 0
	// Line 409, Address: 0x27bf84, Func Offset: 0x4
	// Line 385, Address: 0x27bf88, Func Offset: 0x8
	// Line 409, Address: 0x27bf8c, Func Offset: 0xc
	// Line 385, Address: 0x27bf90, Func Offset: 0x10
	// Line 409, Address: 0x27bfc4, Func Offset: 0x44
	// Line 385, Address: 0x27bfc8, Func Offset: 0x48
	// Line 409, Address: 0x27bfe4, Func Offset: 0x64
	// Line 385, Address: 0x27bfe8, Func Offset: 0x68
	// Line 409, Address: 0x27bfec, Func Offset: 0x6c
	// Line 385, Address: 0x27bff0, Func Offset: 0x70
	// Line 409, Address: 0x27bff4, Func Offset: 0x74
	// Line 385, Address: 0x27bff8, Func Offset: 0x78
	// Line 409, Address: 0x27bffc, Func Offset: 0x7c
	// Line 410, Address: 0x27c000, Func Offset: 0x80
	// Line 416, Address: 0x27c014, Func Offset: 0x94
	// Line 432, Address: 0x27c01c, Func Offset: 0x9c
	// Line 436, Address: 0x27c02c, Func Offset: 0xac
	// Line 422, Address: 0x27c040, Func Offset: 0xc0
	// Line 423, Address: 0x27c044, Func Offset: 0xc4
	// Line 433, Address: 0x27c048, Func Offset: 0xc8
	// Line 432, Address: 0x27c058, Func Offset: 0xd8
	// Line 436, Address: 0x27c060, Func Offset: 0xe0
	// Line 433, Address: 0x27c070, Func Offset: 0xf0
	// Line 434, Address: 0x27c074, Func Offset: 0xf4
	// Line 436, Address: 0x27c078, Func Offset: 0xf8
	// Line 433, Address: 0x27c07c, Func Offset: 0xfc
	// Line 434, Address: 0x27c080, Func Offset: 0x100
	// Line 436, Address: 0x27c088, Func Offset: 0x108
	// Line 434, Address: 0x27c08c, Func Offset: 0x10c
	// Line 436, Address: 0x27c090, Func Offset: 0x110
	// Line 438, Address: 0x27c098, Func Offset: 0x118
	// Line 434, Address: 0x27c09c, Func Offset: 0x11c
	// Line 438, Address: 0x27c0a0, Func Offset: 0x120
	// Line 436, Address: 0x27c0a4, Func Offset: 0x124
	// Line 434, Address: 0x27c0a8, Func Offset: 0x128
	// Line 436, Address: 0x27c0ac, Func Offset: 0x12c
	// Line 438, Address: 0x27c0bc, Func Offset: 0x13c
	// Line 436, Address: 0x27c0c0, Func Offset: 0x140
	// Line 437, Address: 0x27c0e0, Func Offset: 0x160
	// Line 436, Address: 0x27c0e4, Func Offset: 0x164
	// Line 437, Address: 0x27c0f0, Func Offset: 0x170
	// Line 436, Address: 0x27c100, Func Offset: 0x180
	// Line 437, Address: 0x27c108, Func Offset: 0x188
	// Line 438, Address: 0x27c110, Func Offset: 0x190
	// Line 439, Address: 0x27c11c, Func Offset: 0x19c
	// Line 446, Address: 0x27c14c, Func Offset: 0x1cc
	// Line 447, Address: 0x27c150, Func Offset: 0x1d0
	// Line 446, Address: 0x27c158, Func Offset: 0x1d8
	// Line 447, Address: 0x27c164, Func Offset: 0x1e4
	// Line 453, Address: 0x27c178, Func Offset: 0x1f8
	// Line 578, Address: 0x27c180, Func Offset: 0x200
	// Line 419, Address: 0x27c194, Func Offset: 0x214
	// Line 578, Address: 0x27c19c, Func Offset: 0x21c
	// Line 419, Address: 0x27c1a4, Func Offset: 0x224
	// Line 578, Address: 0x27c1d0, Func Offset: 0x250
	// Line 419, Address: 0x27c1d4, Func Offset: 0x254
	// Line 578, Address: 0x27c1d8, Func Offset: 0x258
	// Line 419, Address: 0x27c1dc, Func Offset: 0x25c
	// Line 578, Address: 0x27c1e8, Func Offset: 0x268
	// Line 457, Address: 0x27c220, Func Offset: 0x2a0
	// Line 578, Address: 0x27c228, Func Offset: 0x2a8
	// Line 457, Address: 0x27c230, Func Offset: 0x2b0
	// Line 578, Address: 0x27c234, Func Offset: 0x2b4
	// Line 472, Address: 0x27c268, Func Offset: 0x2e8
	// Line 578, Address: 0x27c270, Func Offset: 0x2f0
	// Line 472, Address: 0x27c278, Func Offset: 0x2f8
	// Line 479, Address: 0x27c2a4, Func Offset: 0x324
	// Line 578, Address: 0x27c2a8, Func Offset: 0x328
	// Line 473, Address: 0x27c2b0, Func Offset: 0x330
	// Line 578, Address: 0x27c2b4, Func Offset: 0x334
	// Line 473, Address: 0x27c2b8, Func Offset: 0x338
	// Line 578, Address: 0x27c2c0, Func Offset: 0x340
	// Line 484, Address: 0x27c2d0, Func Offset: 0x350
	// Line 578, Address: 0x27c2d8, Func Offset: 0x358
	// Line 484, Address: 0x27c2e0, Func Offset: 0x360
	// Line 578, Address: 0x27c314, Func Offset: 0x394
	// Line 484, Address: 0x27c318, Func Offset: 0x398
	// Line 578, Address: 0x27c334, Func Offset: 0x3b4
	// Line 486, Address: 0x27c33c, Func Offset: 0x3bc
	// Line 578, Address: 0x27c340, Func Offset: 0x3c0
	// Line 491, Address: 0x27c380, Func Offset: 0x400
	// Line 578, Address: 0x27c384, Func Offset: 0x404
	// Line 491, Address: 0x27c388, Func Offset: 0x408
	// Line 578, Address: 0x27c38c, Func Offset: 0x40c
	// Line 491, Address: 0x27c390, Func Offset: 0x410
	// Line 578, Address: 0x27c394, Func Offset: 0x414
	// Line 491, Address: 0x27c3ac, Func Offset: 0x42c
	// Line 578, Address: 0x27c3b0, Func Offset: 0x430
	// Line 487, Address: 0x27c3bc, Func Offset: 0x43c
	// Line 578, Address: 0x27c3c0, Func Offset: 0x440
	// Line 487, Address: 0x27c3c8, Func Offset: 0x448
	// Line 578, Address: 0x27c3cc, Func Offset: 0x44c
	// Line 487, Address: 0x27c3d8, Func Offset: 0x458
	// Line 578, Address: 0x27c3dc, Func Offset: 0x45c
	// Line 487, Address: 0x27c3f4, Func Offset: 0x474
	// Line 578, Address: 0x27c3f8, Func Offset: 0x478
	// Line 487, Address: 0x27c400, Func Offset: 0x480
	// Line 578, Address: 0x27c404, Func Offset: 0x484
	// Line 487, Address: 0x27c40c, Func Offset: 0x48c
	// Line 578, Address: 0x27c410, Func Offset: 0x490
	// Line 487, Address: 0x27c478, Func Offset: 0x4f8
	// Line 578, Address: 0x27c480, Func Offset: 0x500
	// Line 487, Address: 0x27c49c, Func Offset: 0x51c
	// Line 578, Address: 0x27c4a0, Func Offset: 0x520
	// Line 492, Address: 0x27c4cc, Func Offset: 0x54c
	// Line 578, Address: 0x27c4d0, Func Offset: 0x550
	// Line 504, Address: 0x27c4f0, Func Offset: 0x570
	// Line 578, Address: 0x27c4f8, Func Offset: 0x578
	// Line 504, Address: 0x27c500, Func Offset: 0x580
	// Line 578, Address: 0x27c528, Func Offset: 0x5a8
	// Line 504, Address: 0x27c534, Func Offset: 0x5b4
	// Line 578, Address: 0x27c538, Func Offset: 0x5b8
	// Line 504, Address: 0x27c564, Func Offset: 0x5e4
	// Line 578, Address: 0x27c568, Func Offset: 0x5e8
	// Line 504, Address: 0x27c56c, Func Offset: 0x5ec
	// Line 578, Address: 0x27c570, Func Offset: 0x5f0
	// Line 504, Address: 0x27c57c, Func Offset: 0x5fc
	// Line 578, Address: 0x27c584, Func Offset: 0x604
	// Line 505, Address: 0x27c598, Func Offset: 0x618
	// Line 578, Address: 0x27c59c, Func Offset: 0x61c
	// Line 504, Address: 0x27c5a4, Func Offset: 0x624
	// Line 578, Address: 0x27c5ac, Func Offset: 0x62c
	// Line 504, Address: 0x27c5b4, Func Offset: 0x634
	// Line 578, Address: 0x27c5b8, Func Offset: 0x638
	// Line 505, Address: 0x27c5cc, Func Offset: 0x64c
	// Line 578, Address: 0x27c5d0, Func Offset: 0x650
	// Line 505, Address: 0x27c5e8, Func Offset: 0x668
	// Line 578, Address: 0x27c5ec, Func Offset: 0x66c
	// Line 504, Address: 0x27c620, Func Offset: 0x6a0
	// Line 578, Address: 0x27c624, Func Offset: 0x6a4
	// Line 515, Address: 0x27c640, Func Offset: 0x6c0
	// Line 504, Address: 0x27c648, Func Offset: 0x6c8
	// Line 578, Address: 0x27c64c, Func Offset: 0x6cc
	// Line 515, Address: 0x27c650, Func Offset: 0x6d0
	// Line 578, Address: 0x27c654, Func Offset: 0x6d4
	// Line 515, Address: 0x27c65c, Func Offset: 0x6dc
	// Line 578, Address: 0x27c660, Func Offset: 0x6e0
	// Line 504, Address: 0x27c690, Func Offset: 0x710
	// Line 517, Address: 0x27c694, Func Offset: 0x714
	// Line 578, Address: 0x27c698, Func Offset: 0x718
	// Line 515, Address: 0x27c6a0, Func Offset: 0x720
	// Line 578, Address: 0x27c6a4, Func Offset: 0x724
	// Line 517, Address: 0x27c6ac, Func Offset: 0x72c
	// Line 578, Address: 0x27c6b0, Func Offset: 0x730
	// Line 517, Address: 0x27c6b4, Func Offset: 0x734
	// Line 578, Address: 0x27c6b8, Func Offset: 0x738
	// Line 517, Address: 0x27c6bc, Func Offset: 0x73c
	// Line 578, Address: 0x27c6c0, Func Offset: 0x740
	// Line 505, Address: 0x27c6e4, Func Offset: 0x764
	// Line 578, Address: 0x27c6e8, Func Offset: 0x768
	// Line 517, Address: 0x27c6ec, Func Offset: 0x76c
	// Line 578, Address: 0x27c6f0, Func Offset: 0x770
	// Line 505, Address: 0x27c710, Func Offset: 0x790
	// Line 578, Address: 0x27c714, Func Offset: 0x794
	// Line 505, Address: 0x27c728, Func Offset: 0x7a8
	// Line 578, Address: 0x27c72c, Func Offset: 0x7ac
	// Line 517, Address: 0x27c740, Func Offset: 0x7c0
	// Line 578, Address: 0x27c744, Func Offset: 0x7c4
	// Line 517, Address: 0x27c74c, Func Offset: 0x7cc
	// Line 578, Address: 0x27c750, Func Offset: 0x7d0
	// Line 517, Address: 0x27c758, Func Offset: 0x7d8
	// Line 578, Address: 0x27c75c, Func Offset: 0x7dc
	// Line 519, Address: 0x27c764, Func Offset: 0x7e4
	// Line 578, Address: 0x27c768, Func Offset: 0x7e8
	// Line 519, Address: 0x27c770, Func Offset: 0x7f0
	// Line 578, Address: 0x27c774, Func Offset: 0x7f4
	// Line 519, Address: 0x27c77c, Func Offset: 0x7fc
	// Line 578, Address: 0x27c780, Func Offset: 0x800
	// Line 521, Address: 0x27c790, Func Offset: 0x810
	// Line 578, Address: 0x27c794, Func Offset: 0x814
	// Line 521, Address: 0x27c7a0, Func Offset: 0x820
	// Line 578, Address: 0x27c7a4, Func Offset: 0x824
	// Line 521, Address: 0x27c7b0, Func Offset: 0x830
	// Line 544, Address: 0x27c7bc, Func Offset: 0x83c
	// Line 543, Address: 0x27c7c0, Func Offset: 0x840
	// Line 544, Address: 0x27c7c4, Func Offset: 0x844
	// Line 578, Address: 0x27c814, Func Offset: 0x894
	// Line 545, Address: 0x27c818, Func Offset: 0x898
	// Line 553, Address: 0x27c820, Func Offset: 0x8a0
	// Line 552, Address: 0x27c824, Func Offset: 0x8a4
	// Line 553, Address: 0x27c828, Func Offset: 0x8a8
	// Line 578, Address: 0x27c878, Func Offset: 0x8f8
	// Line 554, Address: 0x27c87c, Func Offset: 0x8fc
	// Line 562, Address: 0x27c884, Func Offset: 0x904
	// Line 578, Address: 0x27c888, Func Offset: 0x908
	// Line 494, Address: 0x27c8b4, Func Offset: 0x934
	// Line 578, Address: 0x27c8c8, Func Offset: 0x948
	// Line 541, Address: 0x27c8e4, Func Offset: 0x964
	// Line 578, Address: 0x27c8e8, Func Offset: 0x968
	// Line 525, Address: 0x27c910, Func Offset: 0x990
	// Line 578, Address: 0x27c914, Func Offset: 0x994
	// Line 526, Address: 0x27c91c, Func Offset: 0x99c
	// Line 578, Address: 0x27c920, Func Offset: 0x9a0
	// Line 525, Address: 0x27c928, Func Offset: 0x9a8
	// Line 578, Address: 0x27c92c, Func Offset: 0x9ac
	// Line 525, Address: 0x27c934, Func Offset: 0x9b4
	// Line 578, Address: 0x27c938, Func Offset: 0x9b8
	// Line 526, Address: 0x27c94c, Func Offset: 0x9cc
	// Line 578, Address: 0x27c950, Func Offset: 0x9d0
	// Line 526, Address: 0x27c954, Func Offset: 0x9d4
	// Line 578, Address: 0x27c958, Func Offset: 0x9d8
	// Line 526, Address: 0x27c9a4, Func Offset: 0xa24
	// Line 578, Address: 0x27c9a8, Func Offset: 0xa28
	// Line 526, Address: 0x27c9b8, Func Offset: 0xa38
	// Line 578, Address: 0x27c9bc, Func Offset: 0xa3c
	// Line 526, Address: 0x27c9c4, Func Offset: 0xa44
	// Line 578, Address: 0x27c9c8, Func Offset: 0xa48
	// Line 541, Address: 0x27c9d0, Func Offset: 0xa50
	// Line 578, Address: 0x27c9d4, Func Offset: 0xa54
	// Line 541, Address: 0x27c9dc, Func Offset: 0xa5c
	// Line 578, Address: 0x27c9e0, Func Offset: 0xa60
	// Line 541, Address: 0x27c9e8, Func Offset: 0xa68
	// Line 578, Address: 0x27c9ec, Func Offset: 0xa6c
	// Line 541, Address: 0x27c9f4, Func Offset: 0xa74
	// Line 578, Address: 0x27c9f8, Func Offset: 0xa78
	// Line 541, Address: 0x27ca00, Func Offset: 0xa80
	// Line 578, Address: 0x27ca04, Func Offset: 0xa84
	// Line 541, Address: 0x27ca0c, Func Offset: 0xa8c
	// Line 578, Address: 0x27ca10, Func Offset: 0xa90
	// Line 541, Address: 0x27ca18, Func Offset: 0xa98
	// Line 578, Address: 0x27ca1c, Func Offset: 0xa9c
	// Line 541, Address: 0x27ca24, Func Offset: 0xaa4
	// Line 578, Address: 0x27ca28, Func Offset: 0xaa8
	// Line 541, Address: 0x27ca30, Func Offset: 0xab0
	// Line 578, Address: 0x27ca34, Func Offset: 0xab4
	// Line 541, Address: 0x27ca3c, Func Offset: 0xabc
	// Line 578, Address: 0x27ca40, Func Offset: 0xac0
	// Line 541, Address: 0x27ca48, Func Offset: 0xac8
	// Line 578, Address: 0x27ca4c, Func Offset: 0xacc
	// Line 541, Address: 0x27ca54, Func Offset: 0xad4
	// Line 578, Address: 0x27ca58, Func Offset: 0xad8
	// Line 541, Address: 0x27ca60, Func Offset: 0xae0
	// Line 579, Address: 0x27ca68, Func Offset: 0xae8
	// Func End, Address: 0x27cac0, Func Offset: 0xb40
}

// EmitRing__14ExhaustEmitterCFPC5xVec3PC5xVec3ffiP5xVec3
// Start address: 0x27cac0
void ExhaustEmitter::EmitRing(xVec3* pos_center, xVec3* dir_axis, float32 rad_emitCaller, float32 pct_spdRamp, int32 num_emitCaller, xVec3* vel_drift)
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
	ExhaustParticle* par;
	int32 i;
	float32 samecalc;
	float32 ang_curr;
	xVec3 dir_outward;
	float32 rad_emit;
	// Line 187, Address: 0x27cac0, Func Offset: 0
	// Line 211, Address: 0x27cac4, Func Offset: 0x4
	// Line 187, Address: 0x27cac8, Func Offset: 0x8
	// Line 211, Address: 0x27cacc, Func Offset: 0xc
	// Line 187, Address: 0x27cad0, Func Offset: 0x10
	// Line 211, Address: 0x27cafc, Func Offset: 0x3c
	// Line 187, Address: 0x27cb00, Func Offset: 0x40
	// Line 211, Address: 0x27cb18, Func Offset: 0x58
	// Line 187, Address: 0x27cb1c, Func Offset: 0x5c
	// Line 211, Address: 0x27cb20, Func Offset: 0x60
	// Line 187, Address: 0x27cb24, Func Offset: 0x64
	// Line 211, Address: 0x27cb28, Func Offset: 0x68
	// Line 187, Address: 0x27cb2c, Func Offset: 0x6c
	// Line 211, Address: 0x27cb30, Func Offset: 0x70
	// Line 212, Address: 0x27cb34, Func Offset: 0x74
	// Line 218, Address: 0x27cb4c, Func Offset: 0x8c
	// Line 219, Address: 0x27cb54, Func Offset: 0x94
	// Line 224, Address: 0x27cb58, Func Offset: 0x98
	// Line 225, Address: 0x27cb60, Func Offset: 0xa0
	// Line 221, Address: 0x27cb74, Func Offset: 0xb4
	// Line 225, Address: 0x27cb7c, Func Offset: 0xbc
	// Line 221, Address: 0x27cb84, Func Offset: 0xc4
	// Line 225, Address: 0x27cbb0, Func Offset: 0xf0
	// Line 221, Address: 0x27cbb4, Func Offset: 0xf4
	// Line 225, Address: 0x27cbb8, Func Offset: 0xf8
	// Line 221, Address: 0x27cbbc, Func Offset: 0xfc
	// Line 237, Address: 0x27cbc8, Func Offset: 0x108
	// Line 228, Address: 0x27cbe0, Func Offset: 0x120
	// Line 237, Address: 0x27cbe4, Func Offset: 0x124
	// Line 242, Address: 0x27cc08, Func Offset: 0x148
	// Line 237, Address: 0x27cc0c, Func Offset: 0x14c
	// Line 242, Address: 0x27cc10, Func Offset: 0x150
	// Line 237, Address: 0x27cc14, Func Offset: 0x154
	// Line 242, Address: 0x27cc34, Func Offset: 0x174
	// Line 237, Address: 0x27cc38, Func Offset: 0x178
	// Line 242, Address: 0x27cc4c, Func Offset: 0x18c
	// Line 237, Address: 0x27cc50, Func Offset: 0x190
	// Line 242, Address: 0x27cc54, Func Offset: 0x194
	// Line 237, Address: 0x27cc5c, Func Offset: 0x19c
	// Line 242, Address: 0x27cc64, Func Offset: 0x1a4
	// Line 248, Address: 0x27cc6c, Func Offset: 0x1ac
	// Line 370, Address: 0x27cc74, Func Offset: 0x1b4
	// Line 252, Address: 0x27cc7c, Func Offset: 0x1bc
	// Line 370, Address: 0x27cc84, Func Offset: 0x1c4
	// Line 252, Address: 0x27cc8c, Func Offset: 0x1cc
	// Line 370, Address: 0x27cc90, Func Offset: 0x1d0
	// Line 269, Address: 0x27ccc8, Func Offset: 0x208
	// Line 370, Address: 0x27ccd0, Func Offset: 0x210
	// Line 269, Address: 0x27ccd8, Func Offset: 0x218
	// Line 276, Address: 0x27cd04, Func Offset: 0x244
	// Line 370, Address: 0x27cd08, Func Offset: 0x248
	// Line 270, Address: 0x27cd10, Func Offset: 0x250
	// Line 370, Address: 0x27cd14, Func Offset: 0x254
	// Line 270, Address: 0x27cd18, Func Offset: 0x258
	// Line 370, Address: 0x27cd20, Func Offset: 0x260
	// Line 281, Address: 0x27cd30, Func Offset: 0x270
	// Line 370, Address: 0x27cd38, Func Offset: 0x278
	// Line 281, Address: 0x27cd40, Func Offset: 0x280
	// Line 370, Address: 0x27cd74, Func Offset: 0x2b4
	// Line 281, Address: 0x27cd78, Func Offset: 0x2b8
	// Line 370, Address: 0x27cd94, Func Offset: 0x2d4
	// Line 283, Address: 0x27cd9c, Func Offset: 0x2dc
	// Line 370, Address: 0x27cda0, Func Offset: 0x2e0
	// Line 288, Address: 0x27cdf0, Func Offset: 0x330
	// Line 370, Address: 0x27cdfc, Func Offset: 0x33c
	// Line 288, Address: 0x27ce04, Func Offset: 0x344
	// Line 370, Address: 0x27ce08, Func Offset: 0x348
	// Line 284, Address: 0x27ce30, Func Offset: 0x370
	// Line 370, Address: 0x27ce34, Func Offset: 0x374
	// Line 284, Address: 0x27ce3c, Func Offset: 0x37c
	// Line 370, Address: 0x27ce40, Func Offset: 0x380
	// Line 284, Address: 0x27ce50, Func Offset: 0x390
	// Line 370, Address: 0x27ce54, Func Offset: 0x394
	// Line 284, Address: 0x27ce68, Func Offset: 0x3a8
	// Line 370, Address: 0x27ce6c, Func Offset: 0x3ac
	// Line 284, Address: 0x27ce80, Func Offset: 0x3c0
	// Line 370, Address: 0x27ce84, Func Offset: 0x3c4
	// Line 284, Address: 0x27ce8c, Func Offset: 0x3cc
	// Line 370, Address: 0x27ce90, Func Offset: 0x3d0
	// Line 284, Address: 0x27cee8, Func Offset: 0x428
	// Line 370, Address: 0x27cef0, Func Offset: 0x430
	// Line 284, Address: 0x27cf0c, Func Offset: 0x44c
	// Line 370, Address: 0x27cf10, Func Offset: 0x450
	// Line 289, Address: 0x27cf3c, Func Offset: 0x47c
	// Line 370, Address: 0x27cf40, Func Offset: 0x480
	// Line 307, Address: 0x27cf58, Func Offset: 0x498
	// Line 370, Address: 0x27cf5c, Func Offset: 0x49c
	// Line 307, Address: 0x27cf84, Func Offset: 0x4c4
	// Line 370, Address: 0x27cf88, Func Offset: 0x4c8
	// Line 307, Address: 0x27cf90, Func Offset: 0x4d0
	// Line 370, Address: 0x27cf98, Func Offset: 0x4d8
	// Line 297, Address: 0x27cfa4, Func Offset: 0x4e4
	// Line 370, Address: 0x27cfa8, Func Offset: 0x4e8
	// Line 297, Address: 0x27cfdc, Func Offset: 0x51c
	// Line 370, Address: 0x27cfe4, Func Offset: 0x524
	// Line 309, Address: 0x27cfe8, Func Offset: 0x528
	// Line 370, Address: 0x27cfec, Func Offset: 0x52c
	// Line 297, Address: 0x27cff8, Func Offset: 0x538
	// Line 370, Address: 0x27cffc, Func Offset: 0x53c
	// Line 309, Address: 0x27d018, Func Offset: 0x558
	// Line 370, Address: 0x27d01c, Func Offset: 0x55c
	// Line 309, Address: 0x27d024, Func Offset: 0x564
	// Line 370, Address: 0x27d028, Func Offset: 0x568
	// Line 297, Address: 0x27d038, Func Offset: 0x578
	// Line 370, Address: 0x27d03c, Func Offset: 0x57c
	// Line 297, Address: 0x27d044, Func Offset: 0x584
	// Line 370, Address: 0x27d048, Func Offset: 0x588
	// Line 307, Address: 0x27d054, Func Offset: 0x594
	// Line 370, Address: 0x27d058, Func Offset: 0x598
	// Line 307, Address: 0x27d060, Func Offset: 0x5a0
	// Line 370, Address: 0x27d064, Func Offset: 0x5a4
	// Line 309, Address: 0x27d070, Func Offset: 0x5b0
	// Line 370, Address: 0x27d074, Func Offset: 0x5b4
	// Line 309, Address: 0x27d098, Func Offset: 0x5d8
	// Line 370, Address: 0x27d09c, Func Offset: 0x5dc
	// Line 309, Address: 0x27d100, Func Offset: 0x640
	// Line 370, Address: 0x27d104, Func Offset: 0x644
	// Line 309, Address: 0x27d10c, Func Offset: 0x64c
	// Line 370, Address: 0x27d110, Func Offset: 0x650
	// Line 309, Address: 0x27d118, Func Offset: 0x658
	// Line 370, Address: 0x27d11c, Func Offset: 0x65c
	// Line 311, Address: 0x27d124, Func Offset: 0x664
	// Line 370, Address: 0x27d128, Func Offset: 0x668
	// Line 311, Address: 0x27d130, Func Offset: 0x670
	// Line 370, Address: 0x27d134, Func Offset: 0x674
	// Line 311, Address: 0x27d13c, Func Offset: 0x67c
	// Line 370, Address: 0x27d140, Func Offset: 0x680
	// Line 313, Address: 0x27d150, Func Offset: 0x690
	// Line 370, Address: 0x27d154, Func Offset: 0x694
	// Line 313, Address: 0x27d160, Func Offset: 0x6a0
	// Line 370, Address: 0x27d164, Func Offset: 0x6a4
	// Line 313, Address: 0x27d170, Func Offset: 0x6b0
	// Line 336, Address: 0x27d17c, Func Offset: 0x6bc
	// Line 335, Address: 0x27d180, Func Offset: 0x6c0
	// Line 336, Address: 0x27d184, Func Offset: 0x6c4
	// Line 370, Address: 0x27d1d4, Func Offset: 0x714
	// Line 337, Address: 0x27d1d8, Func Offset: 0x718
	// Line 345, Address: 0x27d1e0, Func Offset: 0x720
	// Line 344, Address: 0x27d1e4, Func Offset: 0x724
	// Line 345, Address: 0x27d1e8, Func Offset: 0x728
	// Line 370, Address: 0x27d238, Func Offset: 0x778
	// Line 346, Address: 0x27d23c, Func Offset: 0x77c
	// Line 354, Address: 0x27d244, Func Offset: 0x784
	// Line 370, Address: 0x27d248, Func Offset: 0x788
	// Line 291, Address: 0x27d274, Func Offset: 0x7b4
	// Line 370, Address: 0x27d288, Func Offset: 0x7c8
	// Line 333, Address: 0x27d29c, Func Offset: 0x7dc
	// Line 370, Address: 0x27d2a0, Func Offset: 0x7e0
	// Line 317, Address: 0x27d2c0, Func Offset: 0x800
	// Line 370, Address: 0x27d2c4, Func Offset: 0x804
	// Line 317, Address: 0x27d2d8, Func Offset: 0x818
	// Line 370, Address: 0x27d2dc, Func Offset: 0x81c
	// Line 318, Address: 0x27d2e4, Func Offset: 0x824
	// Line 370, Address: 0x27d2e8, Func Offset: 0x828
	// Line 317, Address: 0x27d2f4, Func Offset: 0x834
	// Line 370, Address: 0x27d2f8, Func Offset: 0x838
	// Line 318, Address: 0x27d310, Func Offset: 0x850
	// Line 370, Address: 0x27d314, Func Offset: 0x854
	// Line 318, Address: 0x27d318, Func Offset: 0x858
	// Line 370, Address: 0x27d31c, Func Offset: 0x85c
	// Line 318, Address: 0x27d364, Func Offset: 0x8a4
	// Line 370, Address: 0x27d368, Func Offset: 0x8a8
	// Line 318, Address: 0x27d378, Func Offset: 0x8b8
	// Line 370, Address: 0x27d37c, Func Offset: 0x8bc
	// Line 318, Address: 0x27d384, Func Offset: 0x8c4
	// Line 370, Address: 0x27d388, Func Offset: 0x8c8
	// Line 333, Address: 0x27d390, Func Offset: 0x8d0
	// Line 370, Address: 0x27d394, Func Offset: 0x8d4
	// Line 333, Address: 0x27d39c, Func Offset: 0x8dc
	// Line 370, Address: 0x27d3a0, Func Offset: 0x8e0
	// Line 333, Address: 0x27d3a8, Func Offset: 0x8e8
	// Line 370, Address: 0x27d3ac, Func Offset: 0x8ec
	// Line 333, Address: 0x27d3b4, Func Offset: 0x8f4
	// Line 370, Address: 0x27d3b8, Func Offset: 0x8f8
	// Line 333, Address: 0x27d3c0, Func Offset: 0x900
	// Line 370, Address: 0x27d3c4, Func Offset: 0x904
	// Line 333, Address: 0x27d3cc, Func Offset: 0x90c
	// Line 370, Address: 0x27d3d0, Func Offset: 0x910
	// Line 333, Address: 0x27d3d8, Func Offset: 0x918
	// Line 370, Address: 0x27d3dc, Func Offset: 0x91c
	// Line 333, Address: 0x27d3e4, Func Offset: 0x924
	// Line 370, Address: 0x27d3e8, Func Offset: 0x928
	// Line 333, Address: 0x27d3f0, Func Offset: 0x930
	// Line 370, Address: 0x27d3f4, Func Offset: 0x934
	// Line 333, Address: 0x27d3fc, Func Offset: 0x93c
	// Line 370, Address: 0x27d400, Func Offset: 0x940
	// Line 333, Address: 0x27d408, Func Offset: 0x948
	// Line 370, Address: 0x27d40c, Func Offset: 0x94c
	// Line 333, Address: 0x27d414, Func Offset: 0x954
	// Line 370, Address: 0x27d418, Func Offset: 0x958
	// Line 333, Address: 0x27d420, Func Offset: 0x960
	// Line 371, Address: 0x27d428, Func Offset: 0x968
	// Func End, Address: 0x27d474, Func Offset: 0x9b4
}

// EmitOnAxis__14ExhaustEmitterCFPC5xVec3PC5xVec3f
// Start address: 0x27d480
void ExhaustEmitter::EmitOnAxis(xVec3* pos_center, xVec3* dir_axis)
{
	// Line 169, Address: 0x27d480, Func Offset: 0
	// Func End, Address: 0x27d4a4, Func Offset: 0x24
}

