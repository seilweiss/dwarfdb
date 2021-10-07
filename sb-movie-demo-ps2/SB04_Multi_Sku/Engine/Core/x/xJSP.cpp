



xJSPNodeTree* xJSPNodeTreeBuild(xJSPHeader* jsp);
void RecurseSplitJSPNode(xJSPNodeTreeLeaf* tleaf, int32 count, TempSplitChild* childptr);
int32 ChooseSplit_MeanMinSum(xJSPNodeTreeLeaf* tleaf, int32 count, int32& bestaxis, float32& bestcoord);
float32 GetSplitVolumeSum(xJSPNodeTreeLeaf* tleaf, int32 count, int32 axis, float32 coord);
void xJSPNodeLightBuild(xJSPHeader* jsp);
void xJSP_Destroy(xJSPHeader* jsp);
void xJSP_MultiStreamRead(void* data, uint32 size, xJSPHeader** jsp);
uint32 get_matid(xJSPHeader* jsp, uint32 old_mat_id, uint32 jspAssetID);
RpAtomic* ListAtomicCB(RpAtomic* atomic, void* data);
RpAtomic* AddAtomicPrecalcedVertCB(RpAtomic* atomic, void* data);
RpAtomic* AddAtomicCB(RpAtomic* atomic, void* data);
RpMesh* AddMeshCB(RpMesh* mesh, void* pData);
RpAtomic* CountAtomicCB(RpAtomic* atomic, void* data);

// xJSPNodeTreeBuild__FP10xJSPHeader
// Start address: 0x411b80
xJSPNodeTree* xJSPNodeTreeBuild(xJSPHeader* jsp)
{
	RpAtomic** atomCurr'182;
	RpClump* clump;
	int32 i;
	int32 j;
	int32 atomCount;
	RpAtomic** atomList;
	RpAtomic** atomCurr;
	xJSPNodeTreeLeaf* tleaf;
	RpGeometry* geom;
	int32 numVert;
	RwV3d* vert;
	xJSPNodeTree* jntree;
	// Line 870, Address: 0x411b80, Func Offset: 0
	// Line 872, Address: 0x411b98, Func Offset: 0x18
	// Line 873, Address: 0x411b9c, Func Offset: 0x1c
	// Line 874, Address: 0x411ba8, Func Offset: 0x28
	// Line 875, Address: 0x411bb0, Func Offset: 0x30
	// Line 877, Address: 0x411bb8, Func Offset: 0x38
	// Line 875, Address: 0x411bbc, Func Offset: 0x3c
	// Line 877, Address: 0x411bc0, Func Offset: 0x40
	// Line 880, Address: 0x411bcc, Func Offset: 0x4c
	// Line 877, Address: 0x411bd0, Func Offset: 0x50
	// Line 880, Address: 0x411bd4, Func Offset: 0x54
	// Line 883, Address: 0x411be8, Func Offset: 0x68
	// Line 885, Address: 0x411bfc, Func Offset: 0x7c
	// Line 884, Address: 0x411c00, Func Offset: 0x80
	// Line 885, Address: 0x411c08, Func Offset: 0x88
	// Line 890, Address: 0x411c10, Func Offset: 0x90
	// Line 893, Address: 0x411c14, Func Offset: 0x94
	// Line 890, Address: 0x411c18, Func Offset: 0x98
	// Line 893, Address: 0x411c20, Func Offset: 0xa0
	// Line 886, Address: 0x411c24, Func Offset: 0xa4
	// Line 896, Address: 0x411c28, Func Offset: 0xa8
	// Line 886, Address: 0x411c2c, Func Offset: 0xac
	// Line 887, Address: 0x411c38, Func Offset: 0xb8
	// Line 888, Address: 0x411c3c, Func Offset: 0xbc
	// Line 896, Address: 0x411c40, Func Offset: 0xc0
	// Line 888, Address: 0x411c44, Func Offset: 0xc4
	// Line 889, Address: 0x411c48, Func Offset: 0xc8
	// Line 890, Address: 0x411c4c, Func Offset: 0xcc
	// Line 891, Address: 0x411c50, Func Offset: 0xd0
	// Line 892, Address: 0x411c54, Func Offset: 0xd4
	// Line 893, Address: 0x411c58, Func Offset: 0xd8
	// Line 894, Address: 0x411c5c, Func Offset: 0xdc
	// Line 896, Address: 0x411c60, Func Offset: 0xe0
	// Line 897, Address: 0x411c70, Func Offset: 0xf0
	// Line 898, Address: 0x411c94, Func Offset: 0x114
	// Line 899, Address: 0x411cb8, Func Offset: 0x138
	// Line 900, Address: 0x411cdc, Func Offset: 0x15c
	// Line 901, Address: 0x411d00, Func Offset: 0x180
	// Line 902, Address: 0x411d24, Func Offset: 0x1a4
	// Line 903, Address: 0x411d3c, Func Offset: 0x1bc
	// Line 902, Address: 0x411d40, Func Offset: 0x1c0
	// Line 903, Address: 0x411d44, Func Offset: 0x1c4
	// Line 904, Address: 0x411d50, Func Offset: 0x1d0
	// Line 905, Address: 0x411d54, Func Offset: 0x1d4
	// Line 904, Address: 0x411d5c, Func Offset: 0x1dc
	// Line 905, Address: 0x411d64, Func Offset: 0x1e4
	// Line 909, Address: 0x411d6c, Func Offset: 0x1ec
	// Line 915, Address: 0x411d88, Func Offset: 0x208
	// Line 910, Address: 0x411d8c, Func Offset: 0x20c
	// Line 915, Address: 0x411d90, Func Offset: 0x210
	// Line 919, Address: 0x411da0, Func Offset: 0x220
	// Line 924, Address: 0x411de4, Func Offset: 0x264
	// Line 930, Address: 0x411df0, Func Offset: 0x270
	// Line 924, Address: 0x411df4, Func Offset: 0x274
	// Line 919, Address: 0x411df8, Func Offset: 0x278
	// Line 925, Address: 0x411dfc, Func Offset: 0x27c
	// Line 924, Address: 0x411e00, Func Offset: 0x280
	// Line 925, Address: 0x411e1c, Func Offset: 0x29c
	// Line 926, Address: 0x411e20, Func Offset: 0x2a0
	// Line 927, Address: 0x411e24, Func Offset: 0x2a4
	// Line 930, Address: 0x411e38, Func Offset: 0x2b8
	// Line 933, Address: 0x411e44, Func Offset: 0x2c4
	// Line 934, Address: 0x411e5c, Func Offset: 0x2dc
	// Line 941, Address: 0x411e60, Func Offset: 0x2e0
	// Line 934, Address: 0x411e64, Func Offset: 0x2e4
	// Line 935, Address: 0x411e78, Func Offset: 0x2f8
	// Line 936, Address: 0x411e90, Func Offset: 0x310
	// Line 937, Address: 0x411ea8, Func Offset: 0x328
	// Line 938, Address: 0x411ec0, Func Offset: 0x340
	// Line 939, Address: 0x411ed8, Func Offset: 0x358
	// Line 940, Address: 0x411ef0, Func Offset: 0x370
	// Line 941, Address: 0x411f0c, Func Offset: 0x38c
	// Line 944, Address: 0x411f20, Func Offset: 0x3a0
	// Line 941, Address: 0x411f24, Func Offset: 0x3a4
	// Line 944, Address: 0x411f2c, Func Offset: 0x3ac
	// Line 945, Address: 0x411f38, Func Offset: 0x3b8
	// Line 946, Address: 0x411f44, Func Offset: 0x3c4
	// Line 952, Address: 0x411f50, Func Offset: 0x3d0
	// Line 947, Address: 0x411f54, Func Offset: 0x3d4
	// Line 953, Address: 0x411f58, Func Offset: 0x3d8
	// Func End, Address: 0x411f74, Func Offset: 0x3f4
}

// RecurseSplitJSPNode__FP16xJSPNodeTreeLeafiP14TempSplitChild
// Start address: 0x411f80
void RecurseSplitJSPNode(xJSPNodeTreeLeaf* tleaf, int32 count, TempSplitChild* childptr)
{
	int32 i;
	int32 bestaxis;
	int32 lastright;
	float32 bestcoord;
	xJSPNodeTreeLeaf templeaf;
	TempSplit* thisSplit;
	// Line 775, Address: 0x411f80, Func Offset: 0
	// Line 778, Address: 0x411fa0, Func Offset: 0x20
	// Line 775, Address: 0x411fa4, Func Offset: 0x24
	// Line 778, Address: 0x411fa8, Func Offset: 0x28
	// Line 839, Address: 0x411fb0, Func Offset: 0x30
	// Line 840, Address: 0x411fb8, Func Offset: 0x38
	// Line 841, Address: 0x411fd4, Func Offset: 0x54
	// Line 844, Address: 0x411fdc, Func Offset: 0x5c
	// Line 783, Address: 0x41200c, Func Offset: 0x8c
	// Line 844, Address: 0x412014, Func Offset: 0x94
	// Line 783, Address: 0x412024, Func Offset: 0xa4
	// Line 844, Address: 0x412028, Func Offset: 0xa8
	// Line 783, Address: 0x412030, Func Offset: 0xb0
	// Line 844, Address: 0x41203c, Func Offset: 0xbc
	// Line 795, Address: 0x412044, Func Offset: 0xc4
	// Line 844, Address: 0x412048, Func Offset: 0xc8
	// Line 817, Address: 0x41206c, Func Offset: 0xec
	// Line 844, Address: 0x412070, Func Offset: 0xf0
	// Line 817, Address: 0x412074, Func Offset: 0xf4
	// Line 818, Address: 0x412078, Func Offset: 0xf8
	// Line 844, Address: 0x41207c, Func Offset: 0xfc
	// Line 818, Address: 0x412080, Func Offset: 0x100
	// Line 844, Address: 0x412084, Func Offset: 0x104
	// Line 819, Address: 0x412088, Func Offset: 0x108
	// Line 844, Address: 0x41208c, Func Offset: 0x10c
	// Line 820, Address: 0x4120cc, Func Offset: 0x14c
	// Line 844, Address: 0x4120d0, Func Offset: 0x150
	// Line 820, Address: 0x4120d8, Func Offset: 0x158
	// Line 844, Address: 0x4120e4, Func Offset: 0x164
	// Line 823, Address: 0x41211c, Func Offset: 0x19c
	// Line 844, Address: 0x412120, Func Offset: 0x1a0
	// Line 823, Address: 0x412128, Func Offset: 0x1a8
	// Line 844, Address: 0x412134, Func Offset: 0x1b4
	// Line 828, Address: 0x412154, Func Offset: 0x1d4
	// Line 844, Address: 0x412158, Func Offset: 0x1d8
	// Line 828, Address: 0x41215c, Func Offset: 0x1dc
	// Line 829, Address: 0x412160, Func Offset: 0x1e0
	// Line 844, Address: 0x412164, Func Offset: 0x1e4
	// Line 828, Address: 0x412168, Func Offset: 0x1e8
	// Line 844, Address: 0x412178, Func Offset: 0x1f8
	// Line 833, Address: 0x412188, Func Offset: 0x208
	// Line 844, Address: 0x412190, Func Offset: 0x210
	// Line 833, Address: 0x412194, Func Offset: 0x214
	// Line 844, Address: 0x412198, Func Offset: 0x218
	// Line 834, Address: 0x4121a0, Func Offset: 0x220
	// Line 844, Address: 0x4121a8, Func Offset: 0x228
	// Line 846, Address: 0x4121b4, Func Offset: 0x234
	// Line 798, Address: 0x412264, Func Offset: 0x2e4
	// Line 846, Address: 0x412268, Func Offset: 0x2e8
	// Line 803, Address: 0x412284, Func Offset: 0x304
	// Line 846, Address: 0x412288, Func Offset: 0x308
	// Line 804, Address: 0x41228c, Func Offset: 0x30c
	// Line 846, Address: 0x412290, Func Offset: 0x310
	// Func End, Address: 0x4122b8, Func Offset: 0x338
}

// ChooseSplit_MeanMinSum__FP16xJSPNodeTreeLeafiRiRf
// Start address: 0x4122c0
int32 ChooseSplit_MeanMinSum(xJSPNodeTreeLeaf* tleaf, int32 count, int32& bestaxis, float32& bestcoord)
{
	float32 bestvolume;
	int32 i;
	int32 axis;
	RwV3d mean;
	float32 testarray[3];
	float32 meancoord;
	float32 coord;
	float32 testvol;
	// Line 719, Address: 0x4122c0, Func Offset: 0
	// Line 721, Address: 0x4122c4, Func Offset: 0x4
	// Line 719, Address: 0x4122c8, Func Offset: 0x8
	// Line 721, Address: 0x4122cc, Func Offset: 0xc
	// Line 719, Address: 0x4122d0, Func Offset: 0x10
	// Line 725, Address: 0x4122d4, Func Offset: 0x14
	// Line 719, Address: 0x4122d8, Func Offset: 0x18
	// Line 721, Address: 0x41230c, Func Offset: 0x4c
	// Line 725, Address: 0x412310, Func Offset: 0x50
	// Line 730, Address: 0x412334, Func Offset: 0x74
	// Line 727, Address: 0x4123a4, Func Offset: 0xe4
	// Line 728, Address: 0x4123a8, Func Offset: 0xe8
	// Line 727, Address: 0x4123b0, Func Offset: 0xf0
	// Line 730, Address: 0x4123b4, Func Offset: 0xf4
	// Line 729, Address: 0x4123c8, Func Offset: 0x108
	// Line 727, Address: 0x4123cc, Func Offset: 0x10c
	// Line 730, Address: 0x4123d4, Func Offset: 0x114
	// Line 729, Address: 0x4123dc, Func Offset: 0x11c
	// Line 730, Address: 0x4123e0, Func Offset: 0x120
	// Line 728, Address: 0x4123e4, Func Offset: 0x124
	// Line 729, Address: 0x4123ec, Func Offset: 0x12c
	// Line 730, Address: 0x4123f4, Func Offset: 0x134
	// Line 727, Address: 0x412410, Func Offset: 0x150
	// Line 728, Address: 0x412414, Func Offset: 0x154
	// Line 729, Address: 0x412418, Func Offset: 0x158
	// Line 727, Address: 0x41241c, Func Offset: 0x15c
	// Line 728, Address: 0x412420, Func Offset: 0x160
	// Line 729, Address: 0x412424, Func Offset: 0x164
	// Line 730, Address: 0x412428, Func Offset: 0x168
	// Line 729, Address: 0x412440, Func Offset: 0x180
	// Line 727, Address: 0x412444, Func Offset: 0x184
	// Line 728, Address: 0x412448, Func Offset: 0x188
	// Line 727, Address: 0x41244c, Func Offset: 0x18c
	// Line 728, Address: 0x412450, Func Offset: 0x190
	// Line 729, Address: 0x412454, Func Offset: 0x194
	// Line 730, Address: 0x412458, Func Offset: 0x198
	// Line 729, Address: 0x412470, Func Offset: 0x1b0
	// Line 727, Address: 0x412474, Func Offset: 0x1b4
	// Line 728, Address: 0x412478, Func Offset: 0x1b8
	// Line 727, Address: 0x41247c, Func Offset: 0x1bc
	// Line 728, Address: 0x412480, Func Offset: 0x1c0
	// Line 729, Address: 0x412484, Func Offset: 0x1c4
	// Line 730, Address: 0x412488, Func Offset: 0x1c8
	// Line 729, Address: 0x4124a0, Func Offset: 0x1e0
	// Line 727, Address: 0x4124a4, Func Offset: 0x1e4
	// Line 728, Address: 0x4124a8, Func Offset: 0x1e8
	// Line 727, Address: 0x4124ac, Func Offset: 0x1ec
	// Line 728, Address: 0x4124b0, Func Offset: 0x1f0
	// Line 729, Address: 0x4124b4, Func Offset: 0x1f4
	// Line 730, Address: 0x4124b8, Func Offset: 0x1f8
	// Line 729, Address: 0x4124d0, Func Offset: 0x210
	// Line 727, Address: 0x4124d4, Func Offset: 0x214
	// Line 728, Address: 0x4124d8, Func Offset: 0x218
	// Line 727, Address: 0x4124dc, Func Offset: 0x21c
	// Line 728, Address: 0x4124e0, Func Offset: 0x220
	// Line 730, Address: 0x4124e4, Func Offset: 0x224
	// Line 729, Address: 0x4124f4, Func Offset: 0x234
	// Line 728, Address: 0x4124f8, Func Offset: 0x238
	// Line 730, Address: 0x412500, Func Offset: 0x240
	// Line 727, Address: 0x412508, Func Offset: 0x248
	// Line 730, Address: 0x412510, Func Offset: 0x250
	// Line 729, Address: 0x412514, Func Offset: 0x254
	// Line 730, Address: 0x41251c, Func Offset: 0x25c
	// Line 729, Address: 0x412564, Func Offset: 0x2a4
	// Line 730, Address: 0x412568, Func Offset: 0x2a8
	// Line 727, Address: 0x412570, Func Offset: 0x2b0
	// Line 729, Address: 0x412578, Func Offset: 0x2b8
	// Line 730, Address: 0x41257c, Func Offset: 0x2bc
	// Line 728, Address: 0x412580, Func Offset: 0x2c0
	// Line 730, Address: 0x412584, Func Offset: 0x2c4
	// Line 728, Address: 0x412588, Func Offset: 0x2c8
	// Line 730, Address: 0x41258c, Func Offset: 0x2cc
	// Line 731, Address: 0x41259c, Func Offset: 0x2dc
	// Line 736, Address: 0x4125a0, Func Offset: 0x2e0
	// Line 731, Address: 0x4125a4, Func Offset: 0x2e4
	// Line 736, Address: 0x4125a8, Func Offset: 0x2e8
	// Line 731, Address: 0x4125ac, Func Offset: 0x2ec
	// Line 736, Address: 0x4125b0, Func Offset: 0x2f0
	// Line 732, Address: 0x4125b4, Func Offset: 0x2f4
	// Line 733, Address: 0x4125b8, Func Offset: 0x2f8
	// Line 731, Address: 0x4125bc, Func Offset: 0x2fc
	// Line 732, Address: 0x4125c0, Func Offset: 0x300
	// Line 733, Address: 0x4125c4, Func Offset: 0x304
	// Line 731, Address: 0x4125c8, Func Offset: 0x308
	// Line 732, Address: 0x4125cc, Func Offset: 0x30c
	// Line 733, Address: 0x4125d0, Func Offset: 0x310
	// Line 742, Address: 0x4125d4, Func Offset: 0x314
	// Line 744, Address: 0x4125d8, Func Offset: 0x318
	// Line 742, Address: 0x4125dc, Func Offset: 0x31c
	// Line 743, Address: 0x4125e0, Func Offset: 0x320
	// Line 742, Address: 0x4125e4, Func Offset: 0x324
	// Line 743, Address: 0x4125e8, Func Offset: 0x328
	// Line 744, Address: 0x4125ec, Func Offset: 0x32c
	// Line 743, Address: 0x4125f0, Func Offset: 0x330
	// Line 740, Address: 0x4125f4, Func Offset: 0x334
	// Line 741, Address: 0x4125f8, Func Offset: 0x338
	// Line 744, Address: 0x4125fc, Func Offset: 0x33c
	// Line 745, Address: 0x412608, Func Offset: 0x348
	// Line 746, Address: 0x412610, Func Offset: 0x350
	// Line 748, Address: 0x41262c, Func Offset: 0x36c
	// Line 750, Address: 0x412630, Func Offset: 0x370
	// Line 752, Address: 0x41264c, Func Offset: 0x38c
	// Line 754, Address: 0x412650, Func Offset: 0x390
	// Line 759, Address: 0x412660, Func Offset: 0x3a0
	// Line 760, Address: 0x412668, Func Offset: 0x3a8
	// Line 761, Address: 0x41267c, Func Offset: 0x3bc
	// Line 766, Address: 0x412688, Func Offset: 0x3c8
	// Line 767, Address: 0x412698, Func Offset: 0x3d8
	// Line 770, Address: 0x4126a8, Func Offset: 0x3e8
	// Line 762, Address: 0x4126d0, Func Offset: 0x410
	// Line 770, Address: 0x4126d4, Func Offset: 0x414
	// Line 771, Address: 0x4126e8, Func Offset: 0x428
	// Func End, Address: 0x41271c, Func Offset: 0x45c
}

// GetSplitVolumeSum__FP16xJSPNodeTreeLeafiif
// Start address: 0x412720
float32 GetSplitVolumeSum(xJSPNodeTreeLeaf* tleaf, int32 count, int32 axis, float32 coord)
{
	int32 i;
	int32 numleft;
	int32 numright;
	RwBBox leftbox;
	RwBBox rightbox;
	// Line 665, Address: 0x412720, Func Offset: 0
	// Line 668, Address: 0x412724, Func Offset: 0x4
	// Line 665, Address: 0x412728, Func Offset: 0x8
	// Line 666, Address: 0x41272c, Func Offset: 0xc
	// Line 665, Address: 0x412730, Func Offset: 0x10
	// Line 668, Address: 0x412734, Func Offset: 0x14
	// Line 669, Address: 0x41276c, Func Offset: 0x4c
	// Line 672, Address: 0x41277c, Func Offset: 0x5c
	// Line 675, Address: 0x41278c, Func Offset: 0x6c
	// Line 676, Address: 0x4127b0, Func Offset: 0x90
	// Line 677, Address: 0x4127d4, Func Offset: 0xb4
	// Line 678, Address: 0x4127f8, Func Offset: 0xd8
	// Line 679, Address: 0x41281c, Func Offset: 0xfc
	// Line 680, Address: 0x412840, Func Offset: 0x120
	// Line 682, Address: 0x41285c, Func Offset: 0x13c
	// Line 684, Address: 0x412860, Func Offset: 0x140
	// Line 700, Address: 0x412884, Func Offset: 0x164
	// Line 703, Address: 0x412894, Func Offset: 0x174
	// Line 707, Address: 0x4128a4, Func Offset: 0x184
	// Line 674, Address: 0x41292c, Func Offset: 0x20c
	// Line 707, Address: 0x412934, Func Offset: 0x214
	// Line 691, Address: 0x412944, Func Offset: 0x224
	// Line 707, Address: 0x412948, Func Offset: 0x228
	// Line 691, Address: 0x412950, Func Offset: 0x230
	// Line 707, Address: 0x41295c, Func Offset: 0x23c
	// Line 692, Address: 0x412968, Func Offset: 0x248
	// Line 707, Address: 0x41296c, Func Offset: 0x24c
	// Line 692, Address: 0x412974, Func Offset: 0x254
	// Line 707, Address: 0x412980, Func Offset: 0x260
	// Line 693, Address: 0x41298c, Func Offset: 0x26c
	// Line 707, Address: 0x412990, Func Offset: 0x270
	// Line 693, Address: 0x412998, Func Offset: 0x278
	// Line 707, Address: 0x4129a4, Func Offset: 0x284
	// Line 694, Address: 0x4129b0, Func Offset: 0x290
	// Line 707, Address: 0x4129b4, Func Offset: 0x294
	// Line 694, Address: 0x4129bc, Func Offset: 0x29c
	// Line 707, Address: 0x4129c8, Func Offset: 0x2a8
	// Line 695, Address: 0x4129d4, Func Offset: 0x2b4
	// Line 707, Address: 0x4129d8, Func Offset: 0x2b8
	// Line 695, Address: 0x4129e0, Func Offset: 0x2c0
	// Line 707, Address: 0x4129ec, Func Offset: 0x2cc
	// Line 696, Address: 0x4129f8, Func Offset: 0x2d8
	// Line 707, Address: 0x4129fc, Func Offset: 0x2dc
	// Line 696, Address: 0x412a04, Func Offset: 0x2e4
	// Line 707, Address: 0x412a10, Func Offset: 0x2f0
	// Line 690, Address: 0x412a48, Func Offset: 0x328
	// Line 705, Address: 0x412a50, Func Offset: 0x330
	// Line 713, Address: 0x412a58, Func Offset: 0x338
	// Func End, Address: 0x412a68, Func Offset: 0x348
}

// xJSPNodeLightBuild__FP10xJSPHeader
// Start address: 0x412a70
void xJSPNodeLightBuild(xJSPHeader* jsp)
{
	xJSPNodeLight* nlight;
	RwLLLink* cur;
	RwLLLink* end;
	RpClump* clump;
	RpAtomic* apAtom;
	// Line 614, Address: 0x412a70, Func Offset: 0
	// Line 616, Address: 0x412a74, Func Offset: 0x4
	// Line 614, Address: 0x412a78, Func Offset: 0x8
	// Line 616, Address: 0x412a7c, Func Offset: 0xc
	// Line 614, Address: 0x412a80, Func Offset: 0x10
	// Line 616, Address: 0x412a88, Func Offset: 0x18
	// Line 617, Address: 0x412aac, Func Offset: 0x3c
	// Line 622, Address: 0x412ad0, Func Offset: 0x60
	// Line 623, Address: 0x412ad4, Func Offset: 0x64
	// Line 624, Address: 0x412ad8, Func Offset: 0x68
	// Line 626, Address: 0x412adc, Func Offset: 0x6c
	// Line 628, Address: 0x412ae4, Func Offset: 0x74
	// Line 632, Address: 0x412ae8, Func Offset: 0x78
	// Line 629, Address: 0x412aec, Func Offset: 0x7c
	// Line 634, Address: 0x412af0, Func Offset: 0x80
	// Line 632, Address: 0x412af4, Func Offset: 0x84
	// Line 634, Address: 0x412af8, Func Offset: 0x88
	// Line 633, Address: 0x412afc, Func Offset: 0x8c
	// Line 637, Address: 0x412b00, Func Offset: 0x90
	// Line 633, Address: 0x412b04, Func Offset: 0x94
	// Line 634, Address: 0x412b08, Func Offset: 0x98
	// Line 637, Address: 0x412b20, Func Offset: 0xb0
	// Line 639, Address: 0x412b28, Func Offset: 0xb8
	// Line 641, Address: 0x412b2c, Func Offset: 0xbc
	// Line 642, Address: 0x412b38, Func Offset: 0xc8
	// Func End, Address: 0x412b48, Func Offset: 0xd8
}

// xJSP_Destroy__FP10xJSPHeader
// Start address: 0x412b50
void xJSP_Destroy(xJSPHeader* jsp)
{
	int32 i;
	RwLLLink* cur;
	RwLLLink* end;
	RpAtomic* apAtom;
	// Line 554, Address: 0x412b50, Func Offset: 0
	// Line 563, Address: 0x412b64, Func Offset: 0x14
	// Line 564, Address: 0x412b8c, Func Offset: 0x3c
	// Line 571, Address: 0x412b98, Func Offset: 0x48
	// Line 581, Address: 0x412bf8, Func Offset: 0xa8
	// Line 583, Address: 0x412c00, Func Offset: 0xb0
	// Line 585, Address: 0x412c08, Func Offset: 0xb8
	// Line 586, Address: 0x412c0c, Func Offset: 0xbc
	// Line 587, Address: 0x412c18, Func Offset: 0xc8
	// Line 588, Address: 0x412c1c, Func Offset: 0xcc
	// Line 590, Address: 0x412c28, Func Offset: 0xd8
	// Line 591, Address: 0x412c38, Func Offset: 0xe8
	// Line 592, Address: 0x412c44, Func Offset: 0xf4
	// Line 593, Address: 0x412c50, Func Offset: 0x100
	// Line 594, Address: 0x412c5c, Func Offset: 0x10c
	// Line 603, Address: 0x412c70, Func Offset: 0x120
	// Line 604, Address: 0x412c84, Func Offset: 0x134
	// Line 608, Address: 0x412c90, Func Offset: 0x140
	// Line 609, Address: 0x412c9c, Func Offset: 0x14c
	// Func End, Address: 0x412cb0, Func Offset: 0x160
}

// xJSP_MultiStreamRead__FPvUiPP10xJSPHeaderUi
// Start address: 0x412cb0
void xJSP_MultiStreamRead(void* data, uint32 size, xJSPHeader** jsp)
{
	int32 i;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPHeaderEx* hdr;
	__rwMark mark;
	__rwMark* mp;
	xJSPHeader* tmphdr;
	RwV3d* currVec;
	RwV3d* currVec;
	xJSPNodeTree* tmpNodeTree;
	uint32* stripvecdata;
	__rwMark* mp2;
	__rwMark mark2;
	RwMemory rwmem;
	RwStream* stream;
	int32 i;
	int32 atomCount;
	RpAtomic** atomList;
	RpAtomic** atomCurr;
	// Line 357, Address: 0x412cb0, Func Offset: 0
	// Line 365, Address: 0x412cd8, Func Offset: 0x28
	// Line 385, Address: 0x412ce0, Func Offset: 0x30
	// Line 388, Address: 0x412cf0, Func Offset: 0x40
	// Line 392, Address: 0x412d04, Func Offset: 0x54
	// Line 393, Address: 0x412d0c, Func Offset: 0x5c
	// Line 398, Address: 0x412d1c, Func Offset: 0x6c
	// Line 393, Address: 0x412d20, Func Offset: 0x70
	// Line 398, Address: 0x412d24, Func Offset: 0x74
	// Line 397, Address: 0x412d28, Func Offset: 0x78
	// Line 394, Address: 0x412d2c, Func Offset: 0x7c
	// Line 398, Address: 0x412d30, Func Offset: 0x80
	// Line 401, Address: 0x412d3c, Func Offset: 0x8c
	// Line 407, Address: 0x412d40, Func Offset: 0x90
	// Line 408, Address: 0x412d50, Func Offset: 0xa0
	// Line 409, Address: 0x412d58, Func Offset: 0xa8
	// Line 410, Address: 0x412d60, Func Offset: 0xb0
	// Line 411, Address: 0x412d68, Func Offset: 0xb8
	// Line 463, Address: 0x412d74, Func Offset: 0xc4
	// Line 466, Address: 0x412d7c, Func Offset: 0xcc
	// Line 468, Address: 0x412d80, Func Offset: 0xd0
	// Line 472, Address: 0x412d84, Func Offset: 0xd4
	// Line 466, Address: 0x412d90, Func Offset: 0xe0
	// Line 467, Address: 0x412d94, Func Offset: 0xe4
	// Line 468, Address: 0x412d9c, Func Offset: 0xec
	// Line 471, Address: 0x412da0, Func Offset: 0xf0
	// Line 472, Address: 0x412da8, Func Offset: 0xf8
	// Line 471, Address: 0x412dac, Func Offset: 0xfc
	// Line 472, Address: 0x412db0, Func Offset: 0x100
	// Line 474, Address: 0x412dbc, Func Offset: 0x10c
	// Line 473, Address: 0x412dc0, Func Offset: 0x110
	// Line 474, Address: 0x412de4, Func Offset: 0x134
	// Line 475, Address: 0x412df0, Func Offset: 0x140
	// Line 476, Address: 0x412e08, Func Offset: 0x158
	// Line 479, Address: 0x412e18, Func Offset: 0x168
	// Line 480, Address: 0x412e1c, Func Offset: 0x16c
	// Line 479, Address: 0x412e20, Func Offset: 0x170
	// Line 480, Address: 0x412e24, Func Offset: 0x174
	// Line 483, Address: 0x412e28, Func Offset: 0x178
	// Line 485, Address: 0x412e40, Func Offset: 0x190
	// Line 484, Address: 0x412e44, Func Offset: 0x194
	// Line 483, Address: 0x412e48, Func Offset: 0x198
	// Line 484, Address: 0x412e4c, Func Offset: 0x19c
	// Line 485, Address: 0x412e64, Func Offset: 0x1b4
	// Line 486, Address: 0x412e74, Func Offset: 0x1c4
	// Line 490, Address: 0x412e78, Func Offset: 0x1c8
	// Line 492, Address: 0x412e7c, Func Offset: 0x1cc
	// Line 490, Address: 0x412e84, Func Offset: 0x1d4
	// Line 492, Address: 0x412e88, Func Offset: 0x1d8
	// Line 494, Address: 0x412e90, Func Offset: 0x1e0
	// Line 510, Address: 0x412ea4, Func Offset: 0x1f4
	// Line 513, Address: 0x412ebc, Func Offset: 0x20c
	// Line 511, Address: 0x412ec0, Func Offset: 0x210
	// Line 510, Address: 0x412ec4, Func Offset: 0x214
	// Line 511, Address: 0x412ec8, Func Offset: 0x218
	// Line 513, Address: 0x412edc, Func Offset: 0x22c
	// Line 524, Address: 0x412ef4, Func Offset: 0x244
	// Line 522, Address: 0x412efc, Func Offset: 0x24c
	// Line 524, Address: 0x412f00, Func Offset: 0x250
	// Line 525, Address: 0x412f0c, Func Offset: 0x25c
	// Line 527, Address: 0x412f20, Func Offset: 0x270
	// Line 528, Address: 0x412f28, Func Offset: 0x278
	// Line 527, Address: 0x412f2c, Func Offset: 0x27c
	// Line 528, Address: 0x412f30, Func Offset: 0x280
	// Line 531, Address: 0x412f38, Func Offset: 0x288
	// Line 532, Address: 0x412f44, Func Offset: 0x294
	// Line 550, Address: 0x412f48, Func Offset: 0x298
	// Line 366, Address: 0x412f54, Func Offset: 0x2a4
	// Line 550, Address: 0x412f58, Func Offset: 0x2a8
	// Line 366, Address: 0x412f64, Func Offset: 0x2b4
	// Line 369, Address: 0x412f68, Func Offset: 0x2b8
	// Line 550, Address: 0x412f74, Func Offset: 0x2c4
	// Line 370, Address: 0x412f7c, Func Offset: 0x2cc
	// Line 550, Address: 0x412f84, Func Offset: 0x2d4
	// Line 414, Address: 0x412f94, Func Offset: 0x2e4
	// Line 550, Address: 0x412f98, Func Offset: 0x2e8
	// Line 453, Address: 0x412fdc, Func Offset: 0x32c
	// Line 550, Address: 0x412fe0, Func Offset: 0x330
	// Line 453, Address: 0x412fe4, Func Offset: 0x334
	// Line 550, Address: 0x412fe8, Func Offset: 0x338
	// Line 453, Address: 0x412ff0, Func Offset: 0x340
	// Line 550, Address: 0x412ff4, Func Offset: 0x344
	// Line 422, Address: 0x41301c, Func Offset: 0x36c
	// Line 550, Address: 0x413020, Func Offset: 0x370
	// Line 424, Address: 0x413030, Func Offset: 0x380
	// Line 550, Address: 0x413038, Func Offset: 0x388
	// Line 425, Address: 0x413044, Func Offset: 0x394
	// Line 429, Address: 0x413048, Func Offset: 0x398
	// Line 550, Address: 0x41304c, Func Offset: 0x39c
	// Line 432, Address: 0x413060, Func Offset: 0x3b0
	// Line 550, Address: 0x413064, Func Offset: 0x3b4
	// Line 445, Address: 0x4130c4, Func Offset: 0x414
	// Line 550, Address: 0x4130c8, Func Offset: 0x418
	// Line 445, Address: 0x4130cc, Func Offset: 0x41c
	// Line 550, Address: 0x4130d0, Func Offset: 0x420
	// Line 446, Address: 0x4130e0, Func Offset: 0x430
	// Line 550, Address: 0x4130e4, Func Offset: 0x434
	// Line 463, Address: 0x413134, Func Offset: 0x484
	// Line 550, Address: 0x41313c, Func Offset: 0x48c
	// Line 499, Address: 0x413140, Func Offset: 0x490
	// Line 550, Address: 0x413144, Func Offset: 0x494
	// Line 502, Address: 0x413148, Func Offset: 0x498
	// Line 550, Address: 0x41314c, Func Offset: 0x49c
	// Line 502, Address: 0x413150, Func Offset: 0x4a0
	// Line 550, Address: 0x413154, Func Offset: 0x4a4
	// Line 516, Address: 0x413168, Func Offset: 0x4b8
	// Line 550, Address: 0x41316c, Func Offset: 0x4bc
	// Line 518, Address: 0x413174, Func Offset: 0x4c4
	// Line 550, Address: 0x41317c, Func Offset: 0x4cc
	// Line 534, Address: 0x413184, Func Offset: 0x4d4
	// Line 550, Address: 0x413188, Func Offset: 0x4d8
	// Line 536, Address: 0x413194, Func Offset: 0x4e4
	// Line 550, Address: 0x413198, Func Offset: 0x4e8
	// Line 536, Address: 0x4131a8, Func Offset: 0x4f8
	// Line 539, Address: 0x4131ac, Func Offset: 0x4fc
	// Line 550, Address: 0x4131b0, Func Offset: 0x500
	// Line 547, Address: 0x413218, Func Offset: 0x568
	// Line 550, Address: 0x41321c, Func Offset: 0x56c
	// Func End, Address: 0x413248, Func Offset: 0x598
}

// get_matid__FP10xJSPHeaderUiUi
// Start address: 0x413250
uint32 get_matid(xJSPHeader* jsp, uint32 old_mat_id, uint32 jspAssetID)
{
	int8 num[100];
	uint32 matid;
	int32 count;
	xJSPHeader** jsplist;
	int32 i;
	// Line 303, Address: 0x413250, Func Offset: 0
	// Line 305, Address: 0x413268, Func Offset: 0x18
	// Line 303, Address: 0x41326c, Func Offset: 0x1c
	// Line 305, Address: 0x413278, Func Offset: 0x28
	// Line 309, Address: 0x413288, Func Offset: 0x38
	// Line 315, Address: 0x4132a0, Func Offset: 0x50
	// Line 316, Address: 0x4132a4, Func Offset: 0x54
	// Line 318, Address: 0x4132a8, Func Offset: 0x58
	// Line 319, Address: 0x4132b8, Func Offset: 0x68
	// Line 327, Address: 0x4132c4, Func Offset: 0x74
	// Line 319, Address: 0x4132d0, Func Offset: 0x80
	// Line 327, Address: 0x4132d4, Func Offset: 0x84
	// Line 328, Address: 0x4132dc, Func Offset: 0x8c
	// Line 332, Address: 0x4132e0, Func Offset: 0x90
	// Line 310, Address: 0x4132e8, Func Offset: 0x98
	// Line 332, Address: 0x4132ec, Func Offset: 0x9c
	// Line 311, Address: 0x4132f4, Func Offset: 0xa4
	// Line 332, Address: 0x4132fc, Func Offset: 0xac
	// Line 333, Address: 0x413328, Func Offset: 0xd8
	// Func End, Address: 0x413348, Func Offset: 0xf8
}

// ListAtomicCB__FP8RpAtomicPv
// Start address: 0x413350
RpAtomic* ListAtomicCB(RpAtomic* atomic, void* data)
{
	RpAtomic*** aList;
	// Line 58, Address: 0x413350, Func Offset: 0
	// Line 60, Address: 0x413354, Func Offset: 0x4
	// Line 58, Address: 0x413358, Func Offset: 0x8
	// Line 59, Address: 0x41335c, Func Offset: 0xc
	// Line 61, Address: 0x413364, Func Offset: 0x14
	// Func End, Address: 0x41336c, Func Offset: 0x1c
}

// AddAtomicPrecalcedVertCB__FP8RpAtomicPv
// Start address: 0x413370
RpAtomic* AddAtomicPrecalcedVertCB(RpAtomic* atomic, void* data)
{
	// Line 50, Address: 0x413370, Func Offset: 0
	// Line 52, Address: 0x413374, Func Offset: 0x4
	// Line 50, Address: 0x413378, Func Offset: 0x8
	// Line 51, Address: 0x413394, Func Offset: 0x24
	// Line 53, Address: 0x4133b4, Func Offset: 0x44
	// Func End, Address: 0x4133bc, Func Offset: 0x4c
}

// AddAtomicCB__FP8RpAtomicPv
// Start address: 0x4133c0
RpAtomic* AddAtomicCB(RpAtomic* atomic, void* data)
{
	// Line 42, Address: 0x4133c0, Func Offset: 0
	// Line 43, Address: 0x4133d0, Func Offset: 0x10
	// Line 45, Address: 0x4133e8, Func Offset: 0x28
	// Line 43, Address: 0x4133ec, Func Offset: 0x2c
	// Line 44, Address: 0x4133f8, Func Offset: 0x38
	// Line 45, Address: 0x413408, Func Offset: 0x48
	// Line 46, Address: 0x413418, Func Offset: 0x58
	// Line 47, Address: 0x41341c, Func Offset: 0x5c
	// Func End, Address: 0x41342c, Func Offset: 0x6c
}

// AddMeshCB__FP6RpMeshP12RpMeshHeaderPv
// Start address: 0x413430
RpMesh* AddMeshCB(RpMesh* mesh, void* pData)
{
	RwV3d** stripVert;
	uint32 i;
	// Line 35, Address: 0x413430, Func Offset: 0
	// Line 36, Address: 0x413444, Func Offset: 0x14
	// Line 38, Address: 0x413448, Func Offset: 0x18
	// Line 36, Address: 0x41344c, Func Offset: 0x1c
	// Line 37, Address: 0x413484, Func Offset: 0x54
	// Line 38, Address: 0x413490, Func Offset: 0x60
	// Line 40, Address: 0x4134a0, Func Offset: 0x70
	// Func End, Address: 0x4134a8, Func Offset: 0x78
}

// CountAtomicCB__FP8RpAtomicPv
// Start address: 0x4134b0
RpAtomic* CountAtomicCB(RpAtomic* atomic, void* data)
{
	// Line 27, Address: 0x4134b0, Func Offset: 0
	// Line 29, Address: 0x4134b4, Func Offset: 0x4
	// Line 27, Address: 0x4134b8, Func Offset: 0x8
	// Line 28, Address: 0x4134c0, Func Offset: 0x10
	// Line 30, Address: 0x4134d4, Func Offset: 0x24
	// Func End, Address: 0x4134dc, Func Offset: 0x2c
}

