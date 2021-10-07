



void xParEmitterDestroy();
void xParEmitterUpdate(xBase* to, float32 dt);
xPar* xParEmitterEmit(xParEmitter* pe, float32 emit_dt, float32 par_dt);
xPar* xParEmitterEmitSetTexIdxs(xPar* p, xParSys* ps);
float32 xParInterpCompute(int32 interp_mode, xParInterp* r, float32 time, int32 time_has_elapsed, float32 lastVal);
xPar* xParEmitterEmitCustom(xParEmitter* p, float32 dt, xParEmitterCustomSettings* info);
void xParEmitterEventCB(xBase* to, uint32 toEvent);
void xParEmitterSetup(xParEmitter* t);
void xParEmitterInit(xBase* b, xParEmitterAsset* pea);
void xParEmitterInit(void* b, void* tasset);
int32 xParInterpConvertInterpMode(xParInterp* p);

// xParEmitterDestroy__Fv
// Start address: 0x3b4c60
void xParEmitterDestroy()
{
	// Line 1298, Address: 0x3b4c60, Func Offset: 0
	// Func End, Address: 0x3b4c68, Func Offset: 0x8
}

// xParEmitterUpdate__FP5xBaseP6xScenef
// Start address: 0x3b4c70
void xParEmitterUpdate(xBase* to, float32 dt)
{
	xParEmitter* pe;
	// Line 1281, Address: 0x3b4c70, Func Offset: 0
	// Line 1286, Address: 0x3b4c78, Func Offset: 0x8
	// Line 1289, Address: 0x3b4c84, Func Offset: 0x14
	// Line 1293, Address: 0x3b4c94, Func Offset: 0x24
	// Line 1291, Address: 0x3b4c9c, Func Offset: 0x2c
	// Line 1293, Address: 0x3b4ca0, Func Offset: 0x30
	// Func End, Address: 0x3b4cbc, Func Offset: 0x4c
}

// xParEmitterEmit__FP11xParEmitterff
// Start address: 0x3b4cc0
xPar* xParEmitterEmit(xParEmitter* pe, float32 emit_dt, float32 par_dt)
{
	int32 left'8565;
	uint32* next'8564;
	xPar* last_p;
	xParEmitterAsset* pea;
	xParEmitterAsset* a;
	xParEmitterPropsAsset* prop;
	int32 rate_has_elapsed;
	float32 rate;
	xParInterp* r;
	int32 count;
	xParSys* ps;
	xParGroup* g;
	xPar* p;
	float32 life;
	float32 size_birth;
	float32 size_death;
	xVec3 emitPosition;
	xBase* attachObject;
	uint32 attachGroupIndex;
	uint32 attachGroupTotal;
	int32 emitAgain;
	int32 emitterIsAttachedToObject;
	xBase* emitObj;
	int32 marker;
	xGroup* g;
	uint32 get_rnd_group_idx;
	xEnt* attach_ent;
	xMat4x3* bone_mat;
	xVec3 bone_vel;
	xVec3 add_vel;
	float32 last_emit_time;
	int32 i;
	int32 c;
	float32 fc1;
	float32 fc2;
	xBase* obj;
	uint8 tempGroupInitialized;
	xPar* save_next;
	float32 u;
	xVec3 pos_diff;
	float32 initial_length;
	xParGroup temp_group;
	// Line 663, Address: 0x3b4cc0, Func Offset: 0
	// Line 667, Address: 0x3b4d20, Func Offset: 0x60
	// Line 668, Address: 0x3b4d30, Func Offset: 0x70
	// Line 680, Address: 0x3b4d38, Func Offset: 0x78
	// Line 675, Address: 0x3b4d3c, Func Offset: 0x7c
	// Line 673, Address: 0x3b4d40, Func Offset: 0x80
	// Line 681, Address: 0x3b4d44, Func Offset: 0x84
	// Line 670, Address: 0x3b4d48, Func Offset: 0x88
	// Line 680, Address: 0x3b4d4c, Func Offset: 0x8c
	// Line 681, Address: 0x3b4d58, Func Offset: 0x98
	// Line 683, Address: 0x3b4d6c, Func Offset: 0xac
	// Line 684, Address: 0x3b4d80, Func Offset: 0xc0
	// Line 688, Address: 0x3b4d9c, Func Offset: 0xdc
	// Line 692, Address: 0x3b4dc0, Func Offset: 0x100
	// Line 694, Address: 0x3b4dc4, Func Offset: 0x104
	// Line 698, Address: 0x3b4dd8, Func Offset: 0x118
	// Line 700, Address: 0x3b4ddc, Func Offset: 0x11c
	// Line 701, Address: 0x3b4de8, Func Offset: 0x128
	// Line 703, Address: 0x3b4df4, Func Offset: 0x134
	// Line 705, Address: 0x3b4e08, Func Offset: 0x148
	// Line 706, Address: 0x3b4e10, Func Offset: 0x150
	// Line 708, Address: 0x3b4e24, Func Offset: 0x164
	// Line 709, Address: 0x3b4e30, Func Offset: 0x170
	// Line 718, Address: 0x3b4e38, Func Offset: 0x178
	// Line 719, Address: 0x3b4e3c, Func Offset: 0x17c
	// Line 722, Address: 0x3b4e44, Func Offset: 0x184
	// Line 727, Address: 0x3b4e50, Func Offset: 0x190
	// Line 728, Address: 0x3b4e58, Func Offset: 0x198
	// Line 731, Address: 0x3b4e68, Func Offset: 0x1a8
	// Line 733, Address: 0x3b4e80, Func Offset: 0x1c0
	// Line 740, Address: 0x3b4e88, Func Offset: 0x1c8
	// Line 743, Address: 0x3b4ea0, Func Offset: 0x1e0
	// Line 752, Address: 0x3b4ea8, Func Offset: 0x1e8
	// Line 758, Address: 0x3b4ec8, Func Offset: 0x208
	// Line 761, Address: 0x3b4ef0, Func Offset: 0x230
	// Line 770, Address: 0x3b4ef4, Func Offset: 0x234
	// Line 777, Address: 0x3b4f00, Func Offset: 0x240
	// Line 770, Address: 0x3b4f10, Func Offset: 0x250
	// Line 773, Address: 0x3b4f14, Func Offset: 0x254
	// Line 774, Address: 0x3b4f1c, Func Offset: 0x25c
	// Line 842, Address: 0x3b4f84, Func Offset: 0x2c4
	// Line 788, Address: 0x3b4f88, Func Offset: 0x2c8
	// Line 781, Address: 0x3b4f8c, Func Offset: 0x2cc
	// Line 842, Address: 0x3b4f90, Func Offset: 0x2d0
	// Line 844, Address: 0x3b4f98, Func Offset: 0x2d8
	// Line 848, Address: 0x3b4fa8, Func Offset: 0x2e8
	// Line 850, Address: 0x3b4fb8, Func Offset: 0x2f8
	// Line 851, Address: 0x3b4fc4, Func Offset: 0x304
	// Line 855, Address: 0x3b4fc8, Func Offset: 0x308
	// Line 857, Address: 0x3b4fe0, Func Offset: 0x320
	// Line 859, Address: 0x3b50f4, Func Offset: 0x434
	// Line 857, Address: 0x3b50f8, Func Offset: 0x438
	// Line 859, Address: 0x3b5144, Func Offset: 0x484
	// Line 862, Address: 0x3b5150, Func Offset: 0x490
	// Line 865, Address: 0x3b5158, Func Offset: 0x498
	// Line 866, Address: 0x3b5170, Func Offset: 0x4b0
	// Line 869, Address: 0x3b5178, Func Offset: 0x4b8
	// Line 872, Address: 0x3b5180, Func Offset: 0x4c0
	// Line 873, Address: 0x3b518c, Func Offset: 0x4cc
	// Line 876, Address: 0x3b5194, Func Offset: 0x4d4
	// Line 877, Address: 0x3b51ac, Func Offset: 0x4ec
	// Line 878, Address: 0x3b51b4, Func Offset: 0x4f4
	// Line 881, Address: 0x3b51b8, Func Offset: 0x4f8
	// Line 882, Address: 0x3b51c4, Func Offset: 0x504
	// Line 886, Address: 0x3b51d0, Func Offset: 0x510
	// Line 889, Address: 0x3b51d8, Func Offset: 0x518
	// Line 894, Address: 0x3b51e0, Func Offset: 0x520
	// Line 895, Address: 0x3b51e4, Func Offset: 0x524
	// Line 897, Address: 0x3b51ec, Func Offset: 0x52c
	// Line 898, Address: 0x3b51f0, Func Offset: 0x530
	// Line 900, Address: 0x3b51f8, Func Offset: 0x538
	// Line 901, Address: 0x3b51fc, Func Offset: 0x53c
	// Line 900, Address: 0x3b5200, Func Offset: 0x540
	// Line 902, Address: 0x3b5214, Func Offset: 0x554
	// Line 905, Address: 0x3b521c, Func Offset: 0x55c
	// Line 909, Address: 0x3b523c, Func Offset: 0x57c
	// Line 905, Address: 0x3b5240, Func Offset: 0x580
	// Line 908, Address: 0x3b5244, Func Offset: 0x584
	// Line 910, Address: 0x3b5258, Func Offset: 0x598
	// Line 912, Address: 0x3b5260, Func Offset: 0x5a0
	// Line 915, Address: 0x3b5280, Func Offset: 0x5c0
	// Line 914, Address: 0x3b5284, Func Offset: 0x5c4
	// Line 915, Address: 0x3b5288, Func Offset: 0x5c8
	// Line 916, Address: 0x3b5294, Func Offset: 0x5d4
	// Line 918, Address: 0x3b529c, Func Offset: 0x5dc
	// Line 922, Address: 0x3b52b4, Func Offset: 0x5f4
	// Line 925, Address: 0x3b52bc, Func Offset: 0x5fc
	// Line 931, Address: 0x3b52d4, Func Offset: 0x614
	// Line 938, Address: 0x3b5308, Func Offset: 0x648
	// Line 940, Address: 0x3b5324, Func Offset: 0x664
	// Line 941, Address: 0x3b55bc, Func Offset: 0x8fc
	// Line 940, Address: 0x3b55c0, Func Offset: 0x900
	// Line 941, Address: 0x3b55c4, Func Offset: 0x904
	// Line 947, Address: 0x3b55f4, Func Offset: 0x934
	// Line 949, Address: 0x3b5604, Func Offset: 0x944
	// Line 950, Address: 0x3b561c, Func Offset: 0x95c
	// Line 949, Address: 0x3b5620, Func Offset: 0x960
	// Line 950, Address: 0x3b5630, Func Offset: 0x970
	// Line 949, Address: 0x3b5634, Func Offset: 0x974
	// Line 950, Address: 0x3b5654, Func Offset: 0x994
	// Line 949, Address: 0x3b565c, Func Offset: 0x99c
	// Line 950, Address: 0x3b5660, Func Offset: 0x9a0
	// Line 949, Address: 0x3b5664, Func Offset: 0x9a4
	// Line 952, Address: 0x3b56dc, Func Offset: 0xa1c
	// Line 953, Address: 0x3b56f0, Func Offset: 0xa30
	// Line 954, Address: 0x3b56fc, Func Offset: 0xa3c
	// Line 956, Address: 0x3b5704, Func Offset: 0xa44
	// Line 973, Address: 0x3b5714, Func Offset: 0xa54
	// Line 970, Address: 0x3b5718, Func Offset: 0xa58
	// Line 973, Address: 0x3b571c, Func Offset: 0xa5c
	// Line 975, Address: 0x3b5728, Func Offset: 0xa68
	// Line 976, Address: 0x3b5738, Func Offset: 0xa78
	// Line 987, Address: 0x3b5740, Func Offset: 0xa80
	// Line 979, Address: 0x3b5750, Func Offset: 0xa90
	// Line 987, Address: 0x3b5754, Func Offset: 0xa94
	// Line 991, Address: 0x3b5760, Func Offset: 0xaa0
	// Line 987, Address: 0x3b5768, Func Offset: 0xaa8
	// Line 991, Address: 0x3b576c, Func Offset: 0xaac
	// Line 992, Address: 0x3b5780, Func Offset: 0xac0
	// Line 991, Address: 0x3b5788, Func Offset: 0xac8
	// Line 992, Address: 0x3b578c, Func Offset: 0xacc
	// Line 1000, Address: 0x3b57a0, Func Offset: 0xae0
	// Line 1001, Address: 0x3b57a4, Func Offset: 0xae4
	// Line 1003, Address: 0x3b57a8, Func Offset: 0xae8
	// Line 1004, Address: 0x3b57b4, Func Offset: 0xaf4
	// Line 1006, Address: 0x3b57bc, Func Offset: 0xafc
	// Line 1008, Address: 0x3b57cc, Func Offset: 0xb0c
	// Line 1010, Address: 0x3b57d0, Func Offset: 0xb10
	// Line 1014, Address: 0x3b57d8, Func Offset: 0xb18
	// Line 1010, Address: 0x3b57e0, Func Offset: 0xb20
	// Line 1011, Address: 0x3b57e4, Func Offset: 0xb24
	// Line 1012, Address: 0x3b57ec, Func Offset: 0xb2c
	// Line 1016, Address: 0x3b57f4, Func Offset: 0xb34
	// Line 1017, Address: 0x3b580c, Func Offset: 0xb4c
	// Line 1016, Address: 0x3b5814, Func Offset: 0xb54
	// Line 1017, Address: 0x3b5818, Func Offset: 0xb58
	// Line 1019, Address: 0x3b5828, Func Offset: 0xb68
	// Line 1020, Address: 0x3b5830, Func Offset: 0xb70
	// Line 1021, Address: 0x3b5870, Func Offset: 0xbb0
	// Line 1020, Address: 0x3b5874, Func Offset: 0xbb4
	// Line 1021, Address: 0x3b5878, Func Offset: 0xbb8
	// Line 1020, Address: 0x3b5880, Func Offset: 0xbc0
	// Line 1023, Address: 0x3b5888, Func Offset: 0xbc8
	// Line 1021, Address: 0x3b5898, Func Offset: 0xbd8
	// Line 1023, Address: 0x3b58a4, Func Offset: 0xbe4
	// Line 1026, Address: 0x3b58ac, Func Offset: 0xbec
	// Line 1029, Address: 0x3b58b0, Func Offset: 0xbf0
	// Line 1026, Address: 0x3b58b4, Func Offset: 0xbf4
	// Line 1029, Address: 0x3b58c8, Func Offset: 0xc08
	// Line 1032, Address: 0x3b5bc4, Func Offset: 0xf04
	// Line 1035, Address: 0x3b5bec, Func Offset: 0xf2c
	// Line 1036, Address: 0x3b62d8, Func Offset: 0x1618
	// Line 1039, Address: 0x3b62e0, Func Offset: 0x1620
	// Line 1040, Address: 0x3b62f0, Func Offset: 0x1630
	// Line 1043, Address: 0x3b62f8, Func Offset: 0x1638
	// Line 1044, Address: 0x3b6308, Func Offset: 0x1648
	// Line 1047, Address: 0x3b6310, Func Offset: 0x1650
	// Line 1048, Address: 0x3b6320, Func Offset: 0x1660
	// Line 1051, Address: 0x3b6328, Func Offset: 0x1668
	// Line 1052, Address: 0x3b6d3c, Func Offset: 0x207c
	// Line 1055, Address: 0x3b6d44, Func Offset: 0x2084
	// Line 1056, Address: 0x3b6d54, Func Offset: 0x2094
	// Line 1059, Address: 0x3b6d5c, Func Offset: 0x209c
	// Line 1060, Address: 0x3b6d70, Func Offset: 0x20b0
	// Line 1063, Address: 0x3b6d78, Func Offset: 0x20b8
	// Line 1064, Address: 0x3b6d8c, Func Offset: 0x20cc
	// Line 1067, Address: 0x3b6d94, Func Offset: 0x20d4
	// Line 1068, Address: 0x3b6da8, Func Offset: 0x20e8
	// Line 1071, Address: 0x3b6db0, Func Offset: 0x20f0
	// Line 1072, Address: 0x3b7a5c, Func Offset: 0x2d9c
	// Line 1077, Address: 0x3b7a64, Func Offset: 0x2da4
	// Line 1078, Address: 0x3b7a68, Func Offset: 0x2da8
	// Line 1079, Address: 0x3b7a70, Func Offset: 0x2db0
	// Line 1080, Address: 0x3b7a80, Func Offset: 0x2dc0
	// Line 1084, Address: 0x3b7a98, Func Offset: 0x2dd8
	// Line 1091, Address: 0x3b7aa4, Func Offset: 0x2de4
	// Line 1094, Address: 0x3b7aac, Func Offset: 0x2dec
	// Line 1095, Address: 0x3b81f0, Func Offset: 0x3530
	// Line 1098, Address: 0x3b81f8, Func Offset: 0x3538
	// Line 1099, Address: 0x3b8c98, Func Offset: 0x3fd8
	// Line 1102, Address: 0x3b8ca0, Func Offset: 0x3fe0
	// Line 1103, Address: 0x3b973c, Func Offset: 0x4a7c
	// Line 1106, Address: 0x3b9744, Func Offset: 0x4a84
	// Line 1107, Address: 0x3ba364, Func Offset: 0x56a4
	// Line 1111, Address: 0x3ba36c, Func Offset: 0x56ac
	// Line 1113, Address: 0x3ba378, Func Offset: 0x56b8
	// Line 1114, Address: 0x3ba390, Func Offset: 0x56d0
	// Line 1116, Address: 0x3bd054, Func Offset: 0x8394
	// Line 1118, Address: 0x3bd05c, Func Offset: 0x839c
	// Line 1119, Address: 0x3bd068, Func Offset: 0x83a8
	// Line 1129, Address: 0x3c0698, Func Offset: 0xb9d8
	// Line 1137, Address: 0x3c069c, Func Offset: 0xb9dc
	// Line 1129, Address: 0x3c06a4, Func Offset: 0xb9e4
	// Line 1137, Address: 0x3c06bc, Func Offset: 0xb9fc
	// Line 1138, Address: 0x3c06c4, Func Offset: 0xba04
	// Line 1143, Address: 0x3c06c8, Func Offset: 0xba08
	// Line 1138, Address: 0x3c06cc, Func Offset: 0xba0c
	// Line 1149, Address: 0x3c06d0, Func Offset: 0xba10
	// Line 1138, Address: 0x3c06d4, Func Offset: 0xba14
	// Line 1149, Address: 0x3c06d8, Func Offset: 0xba18
	// Line 1138, Address: 0x3c06e8, Func Offset: 0xba28
	// Line 1139, Address: 0x3c06f4, Func Offset: 0xba34
	// Line 1143, Address: 0x3c070c, Func Offset: 0xba4c
	// Line 1149, Address: 0x3c0710, Func Offset: 0xba50
	// Line 1146, Address: 0x3c0714, Func Offset: 0xba54
	// Line 1149, Address: 0x3c071c, Func Offset: 0xba5c
	// Line 1156, Address: 0x3c0764, Func Offset: 0xbaa4
	// Line 1160, Address: 0x3c0774, Func Offset: 0xbab4
	// Line 1162, Address: 0x3c0780, Func Offset: 0xbac0
	// Line 1161, Address: 0x3c0784, Func Offset: 0xbac4
	// Line 1162, Address: 0x3c0790, Func Offset: 0xbad0
	// Line 1161, Address: 0x3c0794, Func Offset: 0xbad4
	// Line 1162, Address: 0x3c07ac, Func Offset: 0xbaec
	// Line 1161, Address: 0x3c07b0, Func Offset: 0xbaf0
	// Line 1162, Address: 0x3c07b4, Func Offset: 0xbaf4
	// Line 1161, Address: 0x3c07c0, Func Offset: 0xbb00
	// Line 1162, Address: 0x3c07d4, Func Offset: 0xbb14
	// Line 1161, Address: 0x3c07dc, Func Offset: 0xbb1c
	// Line 1162, Address: 0x3c07e0, Func Offset: 0xbb20
	// Line 1161, Address: 0x3c07e4, Func Offset: 0xbb24
	// Line 1162, Address: 0x3c07e8, Func Offset: 0xbb28
	// Line 1161, Address: 0x3c07ec, Func Offset: 0xbb2c
	// Line 1162, Address: 0x3c07f0, Func Offset: 0xbb30
	// Line 1161, Address: 0x3c0804, Func Offset: 0xbb44
	// Line 1162, Address: 0x3c0830, Func Offset: 0xbb70
	// Line 1161, Address: 0x3c083c, Func Offset: 0xbb7c
	// Line 1162, Address: 0x3c0840, Func Offset: 0xbb80
	// Line 1161, Address: 0x3c0854, Func Offset: 0xbb94
	// Line 1162, Address: 0x3c0858, Func Offset: 0xbb98
	// Line 1161, Address: 0x3c0860, Func Offset: 0xbba0
	// Line 1162, Address: 0x3c0868, Func Offset: 0xbba8
	// Line 1161, Address: 0x3c0874, Func Offset: 0xbbb4
	// Line 1162, Address: 0x3c087c, Func Offset: 0xbbbc
	// Line 1161, Address: 0x3c08b0, Func Offset: 0xbbf0
	// Line 1162, Address: 0x3c08b4, Func Offset: 0xbbf4
	// Line 1161, Address: 0x3c08b8, Func Offset: 0xbbf8
	// Line 1162, Address: 0x3c08bc, Func Offset: 0xbbfc
	// Line 1161, Address: 0x3c08c0, Func Offset: 0xbc00
	// Line 1162, Address: 0x3c08c4, Func Offset: 0xbc04
	// Line 1161, Address: 0x3c08d4, Func Offset: 0xbc14
	// Line 1162, Address: 0x3c08d8, Func Offset: 0xbc18
	// Line 1161, Address: 0x3c08f0, Func Offset: 0xbc30
	// Line 1162, Address: 0x3c08f8, Func Offset: 0xbc38
	// Line 1163, Address: 0x3c0a00, Func Offset: 0xbd40
	// Line 1165, Address: 0x3c0a08, Func Offset: 0xbd48
	// Line 1166, Address: 0x3c0a30, Func Offset: 0xbd70
	// Line 1165, Address: 0x3c0a34, Func Offset: 0xbd74
	// Line 1166, Address: 0x3c0a3c, Func Offset: 0xbd7c
	// Line 1165, Address: 0x3c0a40, Func Offset: 0xbd80
	// Line 1166, Address: 0x3c0a88, Func Offset: 0xbdc8
	// Line 1165, Address: 0x3c0a90, Func Offset: 0xbdd0
	// Line 1166, Address: 0x3c0a98, Func Offset: 0xbdd8
	// Line 1165, Address: 0x3c0a9c, Func Offset: 0xbddc
	// Line 1166, Address: 0x3c0aa0, Func Offset: 0xbde0
	// Line 1165, Address: 0x3c0aa4, Func Offset: 0xbde4
	// Line 1166, Address: 0x3c0aa8, Func Offset: 0xbde8
	// Line 1165, Address: 0x3c0ab0, Func Offset: 0xbdf0
	// Line 1166, Address: 0x3c0ab4, Func Offset: 0xbdf4
	// Line 1165, Address: 0x3c0ab8, Func Offset: 0xbdf8
	// Line 1166, Address: 0x3c0abc, Func Offset: 0xbdfc
	// Line 1165, Address: 0x3c0ad4, Func Offset: 0xbe14
	// Line 1166, Address: 0x3c0ad8, Func Offset: 0xbe18
	// Line 1165, Address: 0x3c0aec, Func Offset: 0xbe2c
	// Line 1166, Address: 0x3c0af4, Func Offset: 0xbe34
	// Line 1173, Address: 0x3c0c60, Func Offset: 0xbfa0
	// Line 1166, Address: 0x3c0c68, Func Offset: 0xbfa8
	// Line 1173, Address: 0x3c0c70, Func Offset: 0xbfb0
	// Line 1166, Address: 0x3c0c78, Func Offset: 0xbfb8
	// Line 1173, Address: 0x3c0c7c, Func Offset: 0xbfbc
	// Line 1170, Address: 0x3c0c94, Func Offset: 0xbfd4
	// Line 1173, Address: 0x3c0c98, Func Offset: 0xbfd8
	// Line 1176, Address: 0x3c0ca0, Func Offset: 0xbfe0
	// Line 1173, Address: 0x3c0ca4, Func Offset: 0xbfe4
	// Line 1176, Address: 0x3c0cbc, Func Offset: 0xbffc
	// Line 1173, Address: 0x3c0cc0, Func Offset: 0xc000
	// Line 1176, Address: 0x3c0ddc, Func Offset: 0xc11c
	// Line 1177, Address: 0x3c0de4, Func Offset: 0xc124
	// Line 1178, Address: 0x3c0e20, Func Offset: 0xc160
	// Line 1181, Address: 0x3c0e60, Func Offset: 0xc1a0
	// Line 1183, Address: 0x3c0e68, Func Offset: 0xc1a8
	// Line 1186, Address: 0x3c0e74, Func Offset: 0xc1b4
	// Line 1187, Address: 0x3c0e7c, Func Offset: 0xc1bc
	// Line 1189, Address: 0x3c0e8c, Func Offset: 0xc1cc
	// Line 1192, Address: 0x3c0e94, Func Offset: 0xc1d4
	// Line 1195, Address: 0x3c0f68, Func Offset: 0xc2a8
	// Line 1201, Address: 0x3c0f6c, Func Offset: 0xc2ac
	// Line 1195, Address: 0x3c0f70, Func Offset: 0xc2b0
	// Line 1201, Address: 0x3c0f74, Func Offset: 0xc2b4
	// Line 1208, Address: 0x3c0fa8, Func Offset: 0xc2e8
	// Line 1210, Address: 0x3c1070, Func Offset: 0xc3b0
	// Line 1251, Address: 0x3c1080, Func Offset: 0xc3c0
	// Line 1254, Address: 0x3c1088, Func Offset: 0xc3c8
	// Line 1257, Address: 0x3c108c, Func Offset: 0xc3cc
	// Line 1258, Address: 0x3c10ac, Func Offset: 0xc3ec
	// Line 1262, Address: 0x3c10b8, Func Offset: 0xc3f8
	// Line 1265, Address: 0x3c10bc, Func Offset: 0xc3fc
	// Line 1262, Address: 0x3c10c0, Func Offset: 0xc400
	// Line 1263, Address: 0x3c10d4, Func Offset: 0xc414
	// Line 1267, Address: 0x3c10ec, Func Offset: 0xc42c
	// Func End, Address: 0x3c114c, Func Offset: 0xc48c
}

// xParEmitterEmitSetTexIdxs__FP4xParPC7xParSys
// Start address: 0x3c1150
xPar* xParEmitterEmitSetTexIdxs(xPar* p, xParSys* ps)
{
	xParCmdTex* tex;
	// Line 631, Address: 0x3c1150, Func Offset: 0
	// Line 632, Address: 0x3c1158, Func Offset: 0x8
	// Line 635, Address: 0x3c1160, Func Offset: 0x10
	// Line 642, Address: 0x3c1188, Func Offset: 0x38
	// Line 643, Address: 0x3c1304, Func Offset: 0x1b4
	// Line 644, Address: 0x3c147c, Func Offset: 0x32c
	// Line 653, Address: 0x3c1484, Func Offset: 0x334
	// Line 654, Address: 0x3c1488, Func Offset: 0x338
	// Line 658, Address: 0x3c148c, Func Offset: 0x33c
	// Line 633, Address: 0x3c1494, Func Offset: 0x344
	// Line 659, Address: 0x3c1498, Func Offset: 0x348
	// Func End, Address: 0x3c14a0, Func Offset: 0x350
}

// xParInterpCompute__FiP10xParInterpfif
// Start address: 0x3c14a0
float32 xParInterpCompute(int32 interp_mode, xParInterp* r, float32 time, int32 time_has_elapsed, float32 lastVal)
{
	float32 val;
	// Line 569, Address: 0x3c14a0, Func Offset: 0
	// Line 572, Address: 0x3c14a4, Func Offset: 0x4
	// Line 569, Address: 0x3c14a8, Func Offset: 0x8
	// Line 570, Address: 0x3c14ac, Func Offset: 0xc
	// Line 569, Address: 0x3c14b0, Func Offset: 0x10
	// Line 572, Address: 0x3c14b4, Func Offset: 0x14
	// Line 576, Address: 0x3c14d8, Func Offset: 0x38
	// Line 580, Address: 0x3c14e0, Func Offset: 0x40
	// Line 583, Address: 0x3c14e8, Func Offset: 0x48
	// Line 585, Address: 0x3c14f0, Func Offset: 0x50
	// Line 586, Address: 0x3c16a8, Func Offset: 0x208
	// Line 598, Address: 0x3c16b4, Func Offset: 0x214
	// Line 599, Address: 0x3c16d0, Func Offset: 0x230
	// Line 598, Address: 0x3c16dc, Func Offset: 0x23c
	// Line 599, Address: 0x3c16e0, Func Offset: 0x240
	// Line 600, Address: 0x3c16ec, Func Offset: 0x24c
	// Line 603, Address: 0x3c16f4, Func Offset: 0x254
	// Line 604, Address: 0x3c173c, Func Offset: 0x29c
	// Line 607, Address: 0x3c1744, Func Offset: 0x2a4
	// Line 608, Address: 0x3c178c, Func Offset: 0x2ec
	// Line 612, Address: 0x3c1794, Func Offset: 0x2f4
	// Line 613, Address: 0x3c17b4, Func Offset: 0x314
	// Line 615, Address: 0x3c17bc, Func Offset: 0x31c
	// Line 620, Address: 0x3c17c0, Func Offset: 0x320
	// Line 589, Address: 0x3c17c8, Func Offset: 0x328
	// Line 591, Address: 0x3c17cc, Func Offset: 0x32c
	// Line 598, Address: 0x3c17d4, Func Offset: 0x334
	// Line 621, Address: 0x3c17dc, Func Offset: 0x33c
	// Func End, Address: 0x3c17ec, Func Offset: 0x34c
}

// xParEmitterEmitCustom__FP11xParEmitterfP25xParEmitterCustomSettings
// Start address: 0x3c17f0
xPar* xParEmitterEmitCustom(xParEmitter* p, float32 dt, xParEmitterCustomSettings* info)
{
	uint32 flags;
	xParEmitterAsset* pe;
	// Line 413, Address: 0x3c17f0, Func Offset: 0
	// Line 419, Address: 0x3c1818, Func Offset: 0x28
	// Line 417, Address: 0x3c181c, Func Offset: 0x2c
	// Line 420, Address: 0x3c1820, Func Offset: 0x30
	// Line 426, Address: 0x3c182c, Func Offset: 0x3c
	// Line 436, Address: 0x3c1834, Func Offset: 0x44
	// Line 441, Address: 0x3c1840, Func Offset: 0x50
	// Line 445, Address: 0x3c184c, Func Offset: 0x5c
	// Line 449, Address: 0x3c1858, Func Offset: 0x68
	// Line 453, Address: 0x3c1864, Func Offset: 0x74
	// Line 457, Address: 0x3c1870, Func Offset: 0x80
	// Line 462, Address: 0x3c187c, Func Offset: 0x8c
	// Line 468, Address: 0x3c1888, Func Offset: 0x98
	// Line 473, Address: 0x3c1894, Func Offset: 0xa4
	// Line 480, Address: 0x3c18a0, Func Offset: 0xb0
	// Line 488, Address: 0x3c18ac, Func Offset: 0xbc
	// Line 490, Address: 0x3c18bc, Func Offset: 0xcc
	// Line 495, Address: 0x3c1918, Func Offset: 0x128
	// Line 496, Address: 0x3c191c, Func Offset: 0x12c
	// Line 501, Address: 0x3c1924, Func Offset: 0x134
	// Line 513, Address: 0x3c192c, Func Offset: 0x13c
	// Line 516, Address: 0x3c193c, Func Offset: 0x14c
	// Line 522, Address: 0x3c1944, Func Offset: 0x154
	// Line 421, Address: 0x3c194c, Func Offset: 0x15c
	// Line 428, Address: 0x3c1954, Func Offset: 0x164
	// Line 522, Address: 0x3c1958, Func Offset: 0x168
	// Line 518, Address: 0x3c1c48, Func Offset: 0x458
	// Line 522, Address: 0x3c1c4c, Func Offset: 0x45c
	// Line 523, Address: 0x3c1c74, Func Offset: 0x484
	// Func End, Address: 0x3c1c98, Func Offset: 0x4a8
}

// xParEmitterEventCB__FP5xBaseP5xBaseUiPCfP5xBaseUi
// Start address: 0x3c1ca0
void xParEmitterEventCB(xBase* to, uint32 toEvent)
{
	xParEmitter* t;
	xParEmitterCustomSettings fake_settings;
	// Line 364, Address: 0x3c1ca0, Func Offset: 0
	// Line 370, Address: 0x3c1ca4, Func Offset: 0x4
	// Line 364, Address: 0x3c1ca8, Func Offset: 0x8
	// Line 370, Address: 0x3c1cb0, Func Offset: 0x10
	// Line 374, Address: 0x3c1ce0, Func Offset: 0x40
	// Line 375, Address: 0x3c1cf4, Func Offset: 0x54
	// Line 378, Address: 0x3c1cfc, Func Offset: 0x5c
	// Line 379, Address: 0x3c1d04, Func Offset: 0x64
	// Line 382, Address: 0x3c1d0c, Func Offset: 0x6c
	// Line 383, Address: 0x3c1d14, Func Offset: 0x74
	// Line 388, Address: 0x3c1d1c, Func Offset: 0x7c
	// Line 389, Address: 0x3c1d2c, Func Offset: 0x8c
	// Line 395, Address: 0x3c1d44, Func Offset: 0xa4
	// Func End, Address: 0x3c1d54, Func Offset: 0xb4
}

// xParEmitterSetup__FP11xParEmitter
// Start address: 0x3c1d60
void xParEmitterSetup(xParEmitter* t)
{
	xEnt* ent;
	// Line 244, Address: 0x3c1d60, Func Offset: 0
	// Line 247, Address: 0x3c1d70, Func Offset: 0x10
	// Line 249, Address: 0x3c1d78, Func Offset: 0x18
	// Line 264, Address: 0x3c1d84, Func Offset: 0x24
	// Line 267, Address: 0x3c1d94, Func Offset: 0x34
	// Line 270, Address: 0x3c1da0, Func Offset: 0x40
	// Line 277, Address: 0x3c1dc4, Func Offset: 0x64
	// Line 279, Address: 0x3c1de8, Func Offset: 0x88
	// Line 300, Address: 0x3c1e10, Func Offset: 0xb0
	// Func End, Address: 0x3c1e50, Func Offset: 0xf0
}

// xParEmitterInit__FP5xBaseP16xParEmitterAsset
// Start address: 0x3c1e50
void xParEmitterInit(xBase* b, xParEmitterAsset* pea)
{
	xParEmitterPropsAsset* prop;
	xParEmitter* t;
	int32 i;
	// Line 129, Address: 0x3c1e50, Func Offset: 0
	// Line 133, Address: 0x3c1e70, Func Offset: 0x20
	// Line 139, Address: 0x3c1e78, Func Offset: 0x28
	// Line 140, Address: 0x3c1e84, Func Offset: 0x34
	// Line 145, Address: 0x3c1e88, Func Offset: 0x38
	// Line 146, Address: 0x3c1e98, Func Offset: 0x48
	// Line 150, Address: 0x3c1ea4, Func Offset: 0x54
	// Line 151, Address: 0x3c1eb0, Func Offset: 0x60
	// Line 153, Address: 0x3c1ec0, Func Offset: 0x70
	// Line 156, Address: 0x3c1ec4, Func Offset: 0x74
	// Line 160, Address: 0x3c1ec8, Func Offset: 0x78
	// Line 182, Address: 0x3c1ed8, Func Offset: 0x88
	// Line 191, Address: 0x3c1ef0, Func Offset: 0xa0
	// Line 186, Address: 0x3c1ef4, Func Offset: 0xa4
	// Line 189, Address: 0x3c1efc, Func Offset: 0xac
	// Line 193, Address: 0x3c1f00, Func Offset: 0xb0
	// Line 194, Address: 0x3c1f14, Func Offset: 0xc4
	// Line 197, Address: 0x3c1f18, Func Offset: 0xc8
	// Line 199, Address: 0x3c1f28, Func Offset: 0xd8
	// Line 203, Address: 0x3c1f2c, Func Offset: 0xdc
	// Line 199, Address: 0x3c1f30, Func Offset: 0xe0
	// Line 203, Address: 0x3c1f34, Func Offset: 0xe4
	// Line 205, Address: 0x3c1f40, Func Offset: 0xf0
	// Line 206, Address: 0x3c1f54, Func Offset: 0x104
	// Line 210, Address: 0x3c1f58, Func Offset: 0x108
	// Line 212, Address: 0x3c1f70, Func Offset: 0x120
	// Line 218, Address: 0x3c1f84, Func Offset: 0x134
	// Line 219, Address: 0x3c1f9c, Func Offset: 0x14c
	// Line 220, Address: 0x3c1fa4, Func Offset: 0x154
	// Line 221, Address: 0x3c1fa8, Func Offset: 0x158
	// Line 222, Address: 0x3c1fac, Func Offset: 0x15c
	// Line 224, Address: 0x3c1fe0, Func Offset: 0x190
	// Line 226, Address: 0x3c1fe8, Func Offset: 0x198
	// Line 230, Address: 0x3c1ffc, Func Offset: 0x1ac
	// Line 226, Address: 0x3c2000, Func Offset: 0x1b0
	// Line 230, Address: 0x3c2004, Func Offset: 0x1b4
	// Line 226, Address: 0x3c2008, Func Offset: 0x1b8
	// Line 230, Address: 0x3c200c, Func Offset: 0x1bc
	// Line 229, Address: 0x3c2010, Func Offset: 0x1c0
	// Line 230, Address: 0x3c2020, Func Offset: 0x1d0
	// Line 231, Address: 0x3c202c, Func Offset: 0x1dc
	// Line 218, Address: 0x3c2098, Func Offset: 0x248
	// Line 231, Address: 0x3c209c, Func Offset: 0x24c
	// Line 218, Address: 0x3c20a8, Func Offset: 0x258
	// Line 231, Address: 0x3c20ac, Func Offset: 0x25c
	// Line 218, Address: 0x3c20b8, Func Offset: 0x268
	// Line 231, Address: 0x3c20c4, Func Offset: 0x274
	// Line 218, Address: 0x3c20c8, Func Offset: 0x278
	// Line 231, Address: 0x3c20cc, Func Offset: 0x27c
	// Line 218, Address: 0x3c20d8, Func Offset: 0x288
	// Line 231, Address: 0x3c20ec, Func Offset: 0x29c
	// Line 218, Address: 0x3c20f0, Func Offset: 0x2a0
	// Line 231, Address: 0x3c20f4, Func Offset: 0x2a4
	// Line 218, Address: 0x3c2108, Func Offset: 0x2b8
	// Line 231, Address: 0x3c210c, Func Offset: 0x2bc
	// Line 218, Address: 0x3c2118, Func Offset: 0x2c8
	// Line 231, Address: 0x3c2124, Func Offset: 0x2d4
	// Line 218, Address: 0x3c2128, Func Offset: 0x2d8
	// Line 231, Address: 0x3c212c, Func Offset: 0x2dc
	// Line 218, Address: 0x3c2138, Func Offset: 0x2e8
	// Line 231, Address: 0x3c214c, Func Offset: 0x2fc
	// Line 218, Address: 0x3c2150, Func Offset: 0x300
	// Line 231, Address: 0x3c2154, Func Offset: 0x304
	// Line 218, Address: 0x3c216c, Func Offset: 0x31c
	// Line 231, Address: 0x3c2170, Func Offset: 0x320
	// Line 218, Address: 0x3c2174, Func Offset: 0x324
	// Line 231, Address: 0x3c2178, Func Offset: 0x328
	// Line 218, Address: 0x3c217c, Func Offset: 0x32c
	// Line 231, Address: 0x3c2180, Func Offset: 0x330
	// Line 218, Address: 0x3c2184, Func Offset: 0x334
	// Line 231, Address: 0x3c2198, Func Offset: 0x348
	// Line 218, Address: 0x3c219c, Func Offset: 0x34c
	// Line 231, Address: 0x3c21a0, Func Offset: 0x350
	// Line 218, Address: 0x3c21b0, Func Offset: 0x360
	// Line 231, Address: 0x3c21c4, Func Offset: 0x374
	// Line 218, Address: 0x3c21d0, Func Offset: 0x380
	// Line 231, Address: 0x3c21d4, Func Offset: 0x384
	// Line 218, Address: 0x3c21d8, Func Offset: 0x388
	// Line 231, Address: 0x3c21e0, Func Offset: 0x390
	// Line 218, Address: 0x3c21e4, Func Offset: 0x394
	// Line 231, Address: 0x3c21ec, Func Offset: 0x39c
	// Line 218, Address: 0x3c21f0, Func Offset: 0x3a0
	// Line 231, Address: 0x3c21f4, Func Offset: 0x3a4
	// Line 218, Address: 0x3c2208, Func Offset: 0x3b8
	// Line 231, Address: 0x3c2248, Func Offset: 0x3f8
	// Line 230, Address: 0x3c224c, Func Offset: 0x3fc
	// Line 231, Address: 0x3c2250, Func Offset: 0x400
	// Line 234, Address: 0x3c2258, Func Offset: 0x408
	// Line 241, Address: 0x3c226c, Func Offset: 0x41c
	// Func End, Address: 0x3c228c, Func Offset: 0x43c
}

// xParEmitterInit__FPvPv
// Start address: 0x3c2290
void xParEmitterInit(void* b, void* tasset)
{
	// Line 126, Address: 0x3c2290, Func Offset: 0
	// Func End, Address: 0x3c2298, Func Offset: 0x8
}

// xParInterpConvertInterpMode__FP10xParInterp
// Start address: 0x3c22a0
int32 xParInterpConvertInterpMode(xParInterp* p)
{
	// Line 93, Address: 0x3c22a0, Func Offset: 0
	// Line 95, Address: 0x3c22a4, Func Offset: 0x4
	// Line 98, Address: 0x3c22b0, Func Offset: 0x10
	// Line 100, Address: 0x3c22c0, Func Offset: 0x20
	// Line 102, Address: 0x3c22cc, Func Offset: 0x2c
	// Line 104, Address: 0x3c22dc, Func Offset: 0x3c
	// Line 106, Address: 0x3c22ec, Func Offset: 0x4c
	// Line 108, Address: 0x3c22fc, Func Offset: 0x5c
	// Line 111, Address: 0x3c230c, Func Offset: 0x6c
	// Line 99, Address: 0x3c2330, Func Offset: 0x90
	// Line 101, Address: 0x3c2338, Func Offset: 0x98
	// Line 103, Address: 0x3c2340, Func Offset: 0xa0
	// Line 105, Address: 0x3c2348, Func Offset: 0xa8
	// Line 107, Address: 0x3c2350, Func Offset: 0xb0
	// Line 109, Address: 0x3c2358, Func Offset: 0xb8
	// Line 114, Address: 0x3c235c, Func Offset: 0xbc
	// Func End, Address: 0x3c2364, Func Offset: 0xc4
}

