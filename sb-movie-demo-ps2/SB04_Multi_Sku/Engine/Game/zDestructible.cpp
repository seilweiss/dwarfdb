



zDestructible* zDestructibleGetFromEntity(xEnt* ent);
void zDestructibleAsset_Update(xEnt* ent, zDestructible* dest, xScene* sc, float32 dt);
void zDestructibleAsset_EventCB(xBase* from, xBase* root_base, zDestructible* to, uint32 toEvent, float32* toParam);
void zDestructible_StateProcess(xEnt* ent, zDestructible* dest, uint32 damage, uint32 idx, float32* toParam, xVec3& initial_velocity, uint8 state_change);
void zDestructibleAsset_CopyLODDistances(xEnt* ent, zDestructible* destructible);
void zDestructibleAsset_Init(uint32 assetID, zDestructible&* dest, xEnt* ent);
void zDestructibleAsset_ReReset(zDestructible&* dest);
void zDestructibleAsset_Reset(zDestructible&* dest, xEnt* ent);
uint32 BurnSinRateCallback(float32 time);
void zDestructible_AffectAll(xEnt* ent, zDestructible* dest, xScene* sc, float32 dt);
void DOBJ_alwaysUseSphere(xEnt* ent);
void SwapModelThroughState(xEnt* ent, zDestructibleState* state, zDestructible* dest);

// zDestructibleGetFromEntity__FP4xEnt
// Start address: 0x382fe0
zDestructible* zDestructibleGetFromEntity(xEnt* ent)
{
	// Line 1051, Address: 0x382fe0, Func Offset: 0
	// Line 1054, Address: 0x383000, Func Offset: 0x20
	// Line 1056, Address: 0x383008, Func Offset: 0x28
	// Line 1059, Address: 0x38300c, Func Offset: 0x2c
	// Func End, Address: 0x383014, Func Offset: 0x34
}

// zDestructibleAsset_Update__FP4xEntP13zDestructibleP6xScenef
// Start address: 0x383020
void zDestructibleAsset_Update(xEnt* ent, zDestructible* dest, xScene* sc, float32 dt)
{
	// Line 992, Address: 0x383020, Func Offset: 0
	// Line 993, Address: 0x383040, Func Offset: 0x20
	// Line 1034, Address: 0x383058, Func Offset: 0x38
	// Line 1036, Address: 0x383080, Func Offset: 0x60
	// Line 1037, Address: 0x383088, Func Offset: 0x68
	// Line 1039, Address: 0x383098, Func Offset: 0x78
	// Line 1040, Address: 0x38309c, Func Offset: 0x7c
	// Line 1041, Address: 0x3830c0, Func Offset: 0xa0
	// Line 1042, Address: 0x3830e4, Func Offset: 0xc4
	// Line 1047, Address: 0x383108, Func Offset: 0xe8
	// Line 993, Address: 0x383114, Func Offset: 0xf4
	// Line 1047, Address: 0x383120, Func Offset: 0x100
	// Line 998, Address: 0x383128, Func Offset: 0x108
	// Line 1047, Address: 0x38312c, Func Offset: 0x10c
	// Line 998, Address: 0x383134, Func Offset: 0x114
	// Line 1047, Address: 0x383148, Func Offset: 0x128
	// Line 999, Address: 0x383150, Func Offset: 0x130
	// Line 1047, Address: 0x383158, Func Offset: 0x138
	// Line 1001, Address: 0x383160, Func Offset: 0x140
	// Line 1047, Address: 0x383164, Func Offset: 0x144
	// Line 1003, Address: 0x38316c, Func Offset: 0x14c
	// Line 1047, Address: 0x383170, Func Offset: 0x150
	// Line 1009, Address: 0x383180, Func Offset: 0x160
	// Line 1047, Address: 0x383184, Func Offset: 0x164
	// Line 1013, Address: 0x383190, Func Offset: 0x170
	// Line 1047, Address: 0x383194, Func Offset: 0x174
	// Line 1013, Address: 0x383198, Func Offset: 0x178
	// Line 1047, Address: 0x38319c, Func Offset: 0x17c
	// Line 1013, Address: 0x3831a0, Func Offset: 0x180
	// Line 1047, Address: 0x3831ac, Func Offset: 0x18c
	// Line 1005, Address: 0x3831bc, Func Offset: 0x19c
	// Line 1047, Address: 0x3831c4, Func Offset: 0x1a4
	// Line 1006, Address: 0x3831cc, Func Offset: 0x1ac
	// Line 1047, Address: 0x3831d4, Func Offset: 0x1b4
	// Func End, Address: 0x3831ec, Func Offset: 0x1cc
}

// zDestructibleAsset_EventCB__FP5xBaseP5xBaseP13zDestructibleUiPCfP5xBaseUi
// Start address: 0x3831f0
void zDestructibleAsset_EventCB(xBase* from, xBase* root_base, zDestructible* to, uint32 toEvent, float32* toParam)
{
	xEnt* ent;
	xEnt* root_ent;
	zDestructible* dest;
	zDestructibleState* dstates;
	zDestructibleState* cstate;
	int32 up;
	int32 idx;
	int32 idx;
	xVec3 dir;
	xSurface* surf;
	uint32 hit_source_flag;
	uint32 damage;
	xVec3 kickback;
	// Line 798, Address: 0x3831f0, Func Offset: 0
	// Line 810, Address: 0x3831f4, Func Offset: 0x4
	// Line 798, Address: 0x3831f8, Func Offset: 0x8
	// Line 802, Address: 0x383218, Func Offset: 0x28
	// Line 807, Address: 0x383220, Func Offset: 0x30
	// Line 810, Address: 0x383230, Func Offset: 0x40
	// Line 814, Address: 0x3832cc, Func Offset: 0xdc
	// Line 815, Address: 0x3832f0, Func Offset: 0x100
	// Line 820, Address: 0x3832fc, Func Offset: 0x10c
	// Line 826, Address: 0x383304, Func Offset: 0x114
	// Line 828, Address: 0x383310, Func Offset: 0x120
	// Line 826, Address: 0x383318, Func Offset: 0x128
	// Line 828, Address: 0x38331c, Func Offset: 0x12c
	// Line 829, Address: 0x38334c, Func Offset: 0x15c
	// Line 835, Address: 0x383358, Func Offset: 0x168
	// Line 838, Address: 0x383360, Func Offset: 0x170
	// Line 840, Address: 0x383364, Func Offset: 0x174
	// Line 838, Address: 0x383368, Func Offset: 0x178
	// Line 840, Address: 0x383370, Func Offset: 0x180
	// Line 841, Address: 0x38339c, Func Offset: 0x1ac
	// Line 846, Address: 0x3833a4, Func Offset: 0x1b4
	// Line 847, Address: 0x3833a8, Func Offset: 0x1b8
	// Line 852, Address: 0x3833b0, Func Offset: 0x1c0
	// Line 856, Address: 0x3833b4, Func Offset: 0x1c4
	// Line 852, Address: 0x3833b8, Func Offset: 0x1c8
	// Line 859, Address: 0x3833bc, Func Offset: 0x1cc
	// Line 852, Address: 0x3833c0, Func Offset: 0x1d0
	// Line 855, Address: 0x3833c4, Func Offset: 0x1d4
	// Line 859, Address: 0x3833c8, Func Offset: 0x1d8
	// Line 856, Address: 0x3833cc, Func Offset: 0x1dc
	// Line 857, Address: 0x3833d0, Func Offset: 0x1e0
	// Line 859, Address: 0x3833d4, Func Offset: 0x1e4
	// Line 855, Address: 0x3833e0, Func Offset: 0x1f0
	// Line 859, Address: 0x3833e4, Func Offset: 0x1f4
	// Line 857, Address: 0x3833ec, Func Offset: 0x1fc
	// Line 859, Address: 0x3833f0, Func Offset: 0x200
	// Line 856, Address: 0x3833f4, Func Offset: 0x204
	// Line 859, Address: 0x3833f8, Func Offset: 0x208
	// Line 861, Address: 0x3834b4, Func Offset: 0x2c4
	// Line 859, Address: 0x3834b8, Func Offset: 0x2c8
	// Line 861, Address: 0x3834bc, Func Offset: 0x2cc
	// Line 859, Address: 0x3834d8, Func Offset: 0x2e8
	// Line 861, Address: 0x38350c, Func Offset: 0x31c
	// Line 862, Address: 0x383514, Func Offset: 0x324
	// Line 864, Address: 0x383538, Func Offset: 0x348
	// Line 869, Address: 0x383544, Func Offset: 0x354
	// Line 870, Address: 0x38354c, Func Offset: 0x35c
	// Line 872, Address: 0x383558, Func Offset: 0x368
	// Line 873, Address: 0x3835e0, Func Offset: 0x3f0
	// Line 884, Address: 0x383720, Func Offset: 0x530
	// Line 873, Address: 0x383724, Func Offset: 0x534
	// Line 884, Address: 0x383734, Func Offset: 0x544
	// Line 886, Address: 0x383744, Func Offset: 0x554
	// Line 887, Address: 0x383748, Func Offset: 0x558
	// Line 886, Address: 0x383750, Func Offset: 0x560
	// Line 887, Address: 0x383754, Func Offset: 0x564
	// Line 888, Address: 0x3837f8, Func Offset: 0x608
	// Line 889, Address: 0x3837fc, Func Offset: 0x60c
	// Line 890, Address: 0x383824, Func Offset: 0x634
	// Line 891, Address: 0x383848, Func Offset: 0x658
	// Line 894, Address: 0x383850, Func Offset: 0x660
	// Line 897, Address: 0x383930, Func Offset: 0x740
	// Line 899, Address: 0x383934, Func Offset: 0x744
	// Line 900, Address: 0x38395c, Func Offset: 0x76c
	// Line 909, Address: 0x383960, Func Offset: 0x770
	// Line 900, Address: 0x383964, Func Offset: 0x774
	// Line 909, Address: 0x383968, Func Offset: 0x778
	// Line 914, Address: 0x38398c, Func Offset: 0x79c
	// Line 916, Address: 0x3839ac, Func Offset: 0x7bc
	// Line 928, Address: 0x3839b4, Func Offset: 0x7c4
	// Line 938, Address: 0x3839c0, Func Offset: 0x7d0
	// Line 941, Address: 0x3839c8, Func Offset: 0x7d8
	// Line 943, Address: 0x3839cc, Func Offset: 0x7dc
	// Line 946, Address: 0x3839d4, Func Offset: 0x7e4
	// Line 947, Address: 0x3839d8, Func Offset: 0x7e8
	// Line 946, Address: 0x3839e0, Func Offset: 0x7f0
	// Line 947, Address: 0x3839e4, Func Offset: 0x7f4
	// Line 946, Address: 0x3839e8, Func Offset: 0x7f8
	// Line 947, Address: 0x3839f0, Func Offset: 0x800
	// Line 961, Address: 0x383a28, Func Offset: 0x838
	// Line 967, Address: 0x383a3c, Func Offset: 0x84c
	// Line 961, Address: 0x383a40, Func Offset: 0x850
	// Line 967, Address: 0x383a44, Func Offset: 0x854
	// Line 961, Address: 0x383a4c, Func Offset: 0x85c
	// Line 967, Address: 0x383a50, Func Offset: 0x860
	// Line 968, Address: 0x383a64, Func Offset: 0x874
	// Line 969, Address: 0x383a7c, Func Offset: 0x88c
	// Line 968, Address: 0x383a84, Func Offset: 0x894
	// Line 969, Address: 0x383a88, Func Offset: 0x898
	// Line 968, Address: 0x383a8c, Func Offset: 0x89c
	// Line 969, Address: 0x383a90, Func Offset: 0x8a0
	// Line 975, Address: 0x383a9c, Func Offset: 0x8ac
	// Line 976, Address: 0x383aa4, Func Offset: 0x8b4
	// Line 978, Address: 0x383ac4, Func Offset: 0x8d4
	// Line 988, Address: 0x383ae8, Func Offset: 0x8f8
	// Func End, Address: 0x383b08, Func Offset: 0x918
}

// zDestructible_StateProcess__FP4xEntP13zDestructibleUiUiPCfR5xVec3b
// Start address: 0x383b10
void zDestructible_StateProcess(xEnt* ent, zDestructible* dest, uint32 damage, uint32 idx, float32* toParam, xVec3& initial_velocity, uint8 state_change)
{
	uint32 _percent;
	// Line 749, Address: 0x383b10, Func Offset: 0
	// Line 752, Address: 0x383b44, Func Offset: 0x34
	// Line 754, Address: 0x383b54, Func Offset: 0x44
	// Line 755, Address: 0x383b60, Func Offset: 0x50
	// Line 756, Address: 0x383b6c, Func Offset: 0x5c
	// Line 758, Address: 0x383b8c, Func Offset: 0x7c
	// Line 759, Address: 0x383ba4, Func Offset: 0x94
	// Line 762, Address: 0x383bac, Func Offset: 0x9c
	// Line 763, Address: 0x383bb8, Func Offset: 0xa8
	// Line 765, Address: 0x383c8c, Func Offset: 0x17c
	// Line 779, Address: 0x383c98, Func Offset: 0x188
	// Line 780, Address: 0x383d18, Func Offset: 0x208
	// Line 782, Address: 0x383e10, Func Offset: 0x300
	// Line 785, Address: 0x383f44, Func Offset: 0x434
	// Line 767, Address: 0x383f50, Func Offset: 0x440
	// Line 785, Address: 0x383f54, Func Offset: 0x444
	// Line 767, Address: 0x383f5c, Func Offset: 0x44c
	// Line 785, Address: 0x383f90, Func Offset: 0x480
	// Line 767, Address: 0x383fa8, Func Offset: 0x498
	// Line 785, Address: 0x383fac, Func Offset: 0x49c
	// Line 773, Address: 0x383fc0, Func Offset: 0x4b0
	// Line 785, Address: 0x383fc4, Func Offset: 0x4b4
	// Line 773, Address: 0x383fc8, Func Offset: 0x4b8
	// Line 785, Address: 0x383fcc, Func Offset: 0x4bc
	// Line 773, Address: 0x383fd0, Func Offset: 0x4c0
	// Line 785, Address: 0x383fe0, Func Offset: 0x4d0
	// Line 773, Address: 0x384000, Func Offset: 0x4f0
	// Line 785, Address: 0x384004, Func Offset: 0x4f4
	// Line 773, Address: 0x384008, Func Offset: 0x4f8
	// Line 785, Address: 0x384010, Func Offset: 0x500
	// Line 773, Address: 0x38407c, Func Offset: 0x56c
	// Line 785, Address: 0x3840a4, Func Offset: 0x594
	// Line 773, Address: 0x3840a8, Func Offset: 0x598
	// Line 785, Address: 0x3840b4, Func Offset: 0x5a4
	// Line 773, Address: 0x3840b8, Func Offset: 0x5a8
	// Line 785, Address: 0x3840c4, Func Offset: 0x5b4
	// Line 773, Address: 0x3840f0, Func Offset: 0x5e0
	// Line 785, Address: 0x3840f4, Func Offset: 0x5e4
	// Line 775, Address: 0x384198, Func Offset: 0x688
	// Line 785, Address: 0x3841b0, Func Offset: 0x6a0
	// Line 776, Address: 0x3841bc, Func Offset: 0x6ac
	// Line 785, Address: 0x3841c4, Func Offset: 0x6b4
	// Line 773, Address: 0x3841cc, Func Offset: 0x6bc
	// Line 785, Address: 0x3841e0, Func Offset: 0x6d0
	// Func End, Address: 0x38421c, Func Offset: 0x70c
}

// zDestructibleAsset_CopyLODDistances__FP4xEntP13zDestructible
// Start address: 0x384220
void zDestructibleAsset_CopyLODDistances(xEnt* ent, zDestructible* destructible)
{
	uint32 state;
	xModelInstance* model;
	// Line 564, Address: 0x384220, Func Offset: 0
	// Line 566, Address: 0x384238, Func Offset: 0x18
	// Line 569, Address: 0x38423c, Func Offset: 0x1c
	// Line 567, Address: 0x384240, Func Offset: 0x20
	// Line 566, Address: 0x384244, Func Offset: 0x24
	// Line 567, Address: 0x38424c, Func Offset: 0x2c
	// Line 568, Address: 0x384254, Func Offset: 0x34
	// Line 569, Address: 0x384260, Func Offset: 0x40
	// Line 570, Address: 0x384278, Func Offset: 0x58
	// Func End, Address: 0x384280, Func Offset: 0x60
}

// zDestructibleAsset_Init__FUiRP13zDestructibleP4xEntUi
// Start address: 0x384280
void zDestructibleAsset_Init(uint32 assetID, zDestructible&* dest, xEnt* ent)
{
	xDestructibleAssetState* d_states;
	uint32 i;
	uint32 fx_count;
	xDestructibleAssetAttachedAnimList* ds_state_anim_list;
	uint32 modelID;
	RpAtomic* imodel;
	void* tmp_ptr;
	// Line 488, Address: 0x384280, Func Offset: 0
	// Line 489, Address: 0x3842ac, Func Offset: 0x2c
	// Line 495, Address: 0x3842b4, Func Offset: 0x34
	// Line 496, Address: 0x3842c4, Func Offset: 0x44
	// Line 495, Address: 0x3842c8, Func Offset: 0x48
	// Line 496, Address: 0x3842cc, Func Offset: 0x4c
	// Line 501, Address: 0x3842d8, Func Offset: 0x58
	// Line 496, Address: 0x3842dc, Func Offset: 0x5c
	// Line 501, Address: 0x3842e4, Func Offset: 0x64
	// Line 496, Address: 0x3842e8, Func Offset: 0x68
	// Line 501, Address: 0x3842ec, Func Offset: 0x6c
	// Line 498, Address: 0x3842f0, Func Offset: 0x70
	// Line 501, Address: 0x3842f4, Func Offset: 0x74
	// Line 504, Address: 0x38430c, Func Offset: 0x8c
	// Line 510, Address: 0x384328, Func Offset: 0xa8
	// Line 511, Address: 0x38432c, Func Offset: 0xac
	// Line 512, Address: 0x384338, Func Offset: 0xb8
	// Line 513, Address: 0x384340, Func Offset: 0xc0
	// Line 514, Address: 0x38434c, Func Offset: 0xcc
	// Line 515, Address: 0x384350, Func Offset: 0xd0
	// Line 516, Address: 0x38435c, Func Offset: 0xdc
	// Line 517, Address: 0x384360, Func Offset: 0xe0
	// Line 518, Address: 0x38436c, Func Offset: 0xec
	// Line 520, Address: 0x384370, Func Offset: 0xf0
	// Line 528, Address: 0x384378, Func Offset: 0xf8
	// Line 529, Address: 0x384384, Func Offset: 0x104
	// Line 532, Address: 0x384388, Func Offset: 0x108
	// Line 533, Address: 0x38438c, Func Offset: 0x10c
	// Line 535, Address: 0x3843a0, Func Offset: 0x120
	// Line 537, Address: 0x3843b4, Func Offset: 0x134
	// Line 535, Address: 0x3843b8, Func Offset: 0x138
	// Line 537, Address: 0x3843c4, Func Offset: 0x144
	// Line 541, Address: 0x3843e8, Func Offset: 0x168
	// Line 542, Address: 0x3843ec, Func Offset: 0x16c
	// Line 543, Address: 0x3843f8, Func Offset: 0x178
	// Line 549, Address: 0x384400, Func Offset: 0x180
	// Line 553, Address: 0x384414, Func Offset: 0x194
	// Line 556, Address: 0x384418, Func Offset: 0x198
	// Line 549, Address: 0x38441c, Func Offset: 0x19c
	// Line 550, Address: 0x384428, Func Offset: 0x1a8
	// Line 554, Address: 0x38443c, Func Offset: 0x1bc
	// Line 556, Address: 0x384440, Func Offset: 0x1c0
	// Line 554, Address: 0x384444, Func Offset: 0x1c4
	// Line 556, Address: 0x38444c, Func Offset: 0x1cc
	// Line 559, Address: 0x384460, Func Offset: 0x1e0
	// Line 560, Address: 0x38446c, Func Offset: 0x1ec
	// Line 523, Address: 0x384478, Func Offset: 0x1f8
	// Line 560, Address: 0x38447c, Func Offset: 0x1fc
	// Line 524, Address: 0x38449c, Func Offset: 0x21c
	// Line 560, Address: 0x3844a8, Func Offset: 0x228
	// Line 546, Address: 0x3844b8, Func Offset: 0x238
	// Line 547, Address: 0x3844bc, Func Offset: 0x23c
	// Line 560, Address: 0x3844c0, Func Offset: 0x240
	// Func End, Address: 0x3844f8, Func Offset: 0x278
}

// zDestructibleAsset_ReReset__FRP13zDestructibleP4xEnt
// Start address: 0x384500
void zDestructibleAsset_ReReset(zDestructible&* dest)
{
	xDestructibleAssetState* d_states;
	uint32 i;
	xDestructibleAssetAttachedAnimList* ds_state_anim_list;
	void* tmp_ptr;
	// Line 458, Address: 0x384500, Func Offset: 0
	// Line 459, Address: 0x384520, Func Offset: 0x20
	// Line 461, Address: 0x384528, Func Offset: 0x28
	// Line 464, Address: 0x384534, Func Offset: 0x34
	// Line 467, Address: 0x384538, Func Offset: 0x38
	// Line 469, Address: 0x38454c, Func Offset: 0x4c
	// Line 471, Address: 0x384550, Func Offset: 0x50
	// Line 473, Address: 0x38455c, Func Offset: 0x5c
	// Line 474, Address: 0x384564, Func Offset: 0x64
	// Line 480, Address: 0x384568, Func Offset: 0x68
	// Line 478, Address: 0x38456c, Func Offset: 0x6c
	// Line 480, Address: 0x384570, Func Offset: 0x70
	// Line 477, Address: 0x384574, Func Offset: 0x74
	// Line 479, Address: 0x384578, Func Offset: 0x78
	// Line 480, Address: 0x38457c, Func Offset: 0x7c
	// Line 478, Address: 0x384580, Func Offset: 0x80
	// Line 480, Address: 0x384584, Func Offset: 0x84
	// Line 481, Address: 0x384598, Func Offset: 0x98
	// Func End, Address: 0x384600, Func Offset: 0x100
}

// zDestructibleAsset_Reset__FRP13zDestructibleP4xEnt
// Start address: 0x384600
void zDestructibleAsset_Reset(zDestructible&* dest, xEnt* ent)
{
	xDestructibleAssetState* d_states;
	uint32 i;
	RpAtomic* imodel;
	uint32 j;
	zDestructibleStateFXParams* fx_Param;
	xDestructibleAssetAttachedAnimList* ds_state_anim_list;
	uint32* animListIDs;
	uint32 j;
	void* tmp_ptr;
	// Line 302, Address: 0x384600, Func Offset: 0
	// Line 303, Address: 0x384634, Func Offset: 0x34
	// Line 306, Address: 0x38463c, Func Offset: 0x3c
	// Line 310, Address: 0x384664, Func Offset: 0x64
	// Line 313, Address: 0x384678, Func Offset: 0x78
	// Line 314, Address: 0x384684, Func Offset: 0x84
	// Line 317, Address: 0x3846d4, Func Offset: 0xd4
	// Line 318, Address: 0x3846dc, Func Offset: 0xdc
	// Line 319, Address: 0x3846e8, Func Offset: 0xe8
	// Line 320, Address: 0x3846f8, Func Offset: 0xf8
	// Line 321, Address: 0x384708, Func Offset: 0x108
	// Line 322, Address: 0x384718, Func Offset: 0x118
	// Line 323, Address: 0x384728, Func Offset: 0x128
	// Line 324, Address: 0x384738, Func Offset: 0x138
	// Line 325, Address: 0x384744, Func Offset: 0x144
	// Line 326, Address: 0x38474c, Func Offset: 0x14c
	// Line 327, Address: 0x384754, Func Offset: 0x154
	// Line 328, Address: 0x384760, Func Offset: 0x160
	// Line 329, Address: 0x38476c, Func Offset: 0x16c
	// Line 337, Address: 0x384780, Func Offset: 0x180
	// Line 329, Address: 0x384784, Func Offset: 0x184
	// Line 334, Address: 0x384788, Func Offset: 0x188
	// Line 335, Address: 0x384790, Func Offset: 0x190
	// Line 336, Address: 0x384798, Func Offset: 0x198
	// Line 337, Address: 0x3847a0, Func Offset: 0x1a0
	// Line 338, Address: 0x3847a8, Func Offset: 0x1a8
	// Line 341, Address: 0x3847b8, Func Offset: 0x1b8
	// Line 342, Address: 0x3847d0, Func Offset: 0x1d0
	// Line 344, Address: 0x3847f0, Func Offset: 0x1f0
	// Line 346, Address: 0x3847f4, Func Offset: 0x1f4
	// Line 453, Address: 0x384804, Func Offset: 0x204
	// Line 356, Address: 0x3848f0, Func Offset: 0x2f0
	// Line 453, Address: 0x3848f4, Func Offset: 0x2f4
	// Line 363, Address: 0x38492c, Func Offset: 0x32c
	// Line 453, Address: 0x384930, Func Offset: 0x330
	// Line 367, Address: 0x38494c, Func Offset: 0x34c
	// Line 453, Address: 0x384950, Func Offset: 0x350
	// Line 395, Address: 0x38498c, Func Offset: 0x38c
	// Line 453, Address: 0x384990, Func Offset: 0x390
	// Line 400, Address: 0x3849b4, Func Offset: 0x3b4
	// Line 453, Address: 0x3849b8, Func Offset: 0x3b8
	// Line 401, Address: 0x3849c0, Func Offset: 0x3c0
	// Line 453, Address: 0x3849c4, Func Offset: 0x3c4
	// Line 406, Address: 0x3849f4, Func Offset: 0x3f4
	// Line 412, Address: 0x3849f8, Func Offset: 0x3f8
	// Line 453, Address: 0x3849fc, Func Offset: 0x3fc
	// Line 415, Address: 0x384a14, Func Offset: 0x414
	// Line 453, Address: 0x384a18, Func Offset: 0x418
	// Line 416, Address: 0x384a24, Func Offset: 0x424
	// Line 453, Address: 0x384a28, Func Offset: 0x428
	// Line 425, Address: 0x384a74, Func Offset: 0x474
	// Line 453, Address: 0x384a78, Func Offset: 0x478
	// Line 430, Address: 0x384aa0, Func Offset: 0x4a0
	// Line 453, Address: 0x384aa4, Func Offset: 0x4a4
	// Line 433, Address: 0x384acc, Func Offset: 0x4cc
	// Line 453, Address: 0x384ad0, Func Offset: 0x4d0
	// Line 446, Address: 0x384b2c, Func Offset: 0x52c
	// Line 453, Address: 0x384b30, Func Offset: 0x530
	// Line 449, Address: 0x384b3c, Func Offset: 0x53c
	// Line 453, Address: 0x384b40, Func Offset: 0x540
	// Line 450, Address: 0x384b48, Func Offset: 0x548
	// Line 453, Address: 0x384b4c, Func Offset: 0x54c
	// Line 361, Address: 0x384b64, Func Offset: 0x564
	// Line 453, Address: 0x384b68, Func Offset: 0x568
	// Line 361, Address: 0x384b7c, Func Offset: 0x57c
	// Line 453, Address: 0x384b88, Func Offset: 0x588
	// Line 365, Address: 0x384b9c, Func Offset: 0x59c
	// Line 453, Address: 0x384ba8, Func Offset: 0x5a8
	// Func End, Address: 0x384c18, Func Offset: 0x618
}

// BurnSinRateCallback__19@unnamed@zWad1_cpp@Ff
// Start address: 0x384c20
uint32 BurnSinRateCallback(float32 time)
{
	// Line 295, Address: 0x384c20, Func Offset: 0
	// Line 296, Address: 0x384c24, Func Offset: 0x4
	// Line 295, Address: 0x384c2c, Func Offset: 0xc
	// Line 296, Address: 0x384c30, Func Offset: 0x10
	// Line 297, Address: 0x384cac, Func Offset: 0x8c
	// Func End, Address: 0x384cb8, Func Offset: 0x98
}

// zDestructible_AffectAll__19@unnamed@zWad1_cpp@FP4xEntP13zDestructibleP6xScenef
// Start address: 0x384cc0
void zDestructible_AffectAll(xEnt* ent, zDestructible* dest, xScene* sc, float32 dt)
{
	void(*bak_bupdate)(xEnt*, xVec3*);
	xEntCollis ent_collis_rec;
	int32 i;
	int32 i;
	// Line 216, Address: 0x384cc0, Func Offset: 0
	// Line 218, Address: 0x384cfc, Func Offset: 0x3c
	// Line 229, Address: 0x384d0c, Func Offset: 0x4c
	// Line 230, Address: 0x384d10, Func Offset: 0x50
	// Line 232, Address: 0x384d18, Func Offset: 0x58
	// Line 233, Address: 0x384d44, Func Offset: 0x84
	// Line 234, Address: 0x384d58, Func Offset: 0x98
	// Line 235, Address: 0x384d5c, Func Offset: 0x9c
	// Line 237, Address: 0x384d60, Func Offset: 0xa0
	// Line 238, Address: 0x384d68, Func Offset: 0xa8
	// Line 234, Address: 0x384d6c, Func Offset: 0xac
	// Line 246, Address: 0x384d70, Func Offset: 0xb0
	// Line 235, Address: 0x384d74, Func Offset: 0xb4
	// Line 247, Address: 0x384d78, Func Offset: 0xb8
	// Line 236, Address: 0x384d7c, Func Offset: 0xbc
	// Line 247, Address: 0x384d80, Func Offset: 0xc0
	// Line 238, Address: 0x384d84, Func Offset: 0xc4
	// Line 247, Address: 0x384d88, Func Offset: 0xc8
	// Line 249, Address: 0x384d98, Func Offset: 0xd8
	// Line 281, Address: 0x384dc8, Func Offset: 0x108
	// Line 288, Address: 0x384ddc, Func Offset: 0x11c
	// Line 290, Address: 0x384de0, Func Offset: 0x120
	// Line 222, Address: 0x384df8, Func Offset: 0x138
	// Line 290, Address: 0x384dfc, Func Offset: 0x13c
	// Line 221, Address: 0x384e18, Func Offset: 0x158
	// Line 290, Address: 0x384e20, Func Offset: 0x160
	// Line 221, Address: 0x384e24, Func Offset: 0x164
	// Line 290, Address: 0x384e28, Func Offset: 0x168
	// Line 222, Address: 0x384e40, Func Offset: 0x180
	// Line 290, Address: 0x384e50, Func Offset: 0x190
	// Line 224, Address: 0x384e88, Func Offset: 0x1c8
	// Line 290, Address: 0x384e9c, Func Offset: 0x1dc
	// Line 224, Address: 0x384ea0, Func Offset: 0x1e0
	// Line 290, Address: 0x384ea8, Func Offset: 0x1e8
	// Line 256, Address: 0x384f0c, Func Offset: 0x24c
	// Line 290, Address: 0x384f10, Func Offset: 0x250
	// Line 256, Address: 0x384f14, Func Offset: 0x254
	// Line 290, Address: 0x384f18, Func Offset: 0x258
	// Line 256, Address: 0x384f1c, Func Offset: 0x25c
	// Line 290, Address: 0x384f28, Func Offset: 0x268
	// Line 258, Address: 0x384f34, Func Offset: 0x274
	// Line 290, Address: 0x384f38, Func Offset: 0x278
	// Line 260, Address: 0x384f40, Func Offset: 0x280
	// Line 290, Address: 0x384f44, Func Offset: 0x284
	// Line 266, Address: 0x384f4c, Func Offset: 0x28c
	// Line 290, Address: 0x384f50, Func Offset: 0x290
	// Line 266, Address: 0x384f5c, Func Offset: 0x29c
	// Line 290, Address: 0x384f60, Func Offset: 0x2a0
	// Line 266, Address: 0x384f64, Func Offset: 0x2a4
	// Line 290, Address: 0x384f68, Func Offset: 0x2a8
	// Line 271, Address: 0x384fe4, Func Offset: 0x324
	// Line 290, Address: 0x384ff4, Func Offset: 0x334
	// Line 271, Address: 0x384ff8, Func Offset: 0x338
	// Line 290, Address: 0x385004, Func Offset: 0x344
	// Line 276, Address: 0x3850f4, Func Offset: 0x434
	// Line 290, Address: 0x385104, Func Offset: 0x444
	// Line 276, Address: 0x385108, Func Offset: 0x448
	// Line 290, Address: 0x385114, Func Offset: 0x454
	// Line 285, Address: 0x3851a4, Func Offset: 0x4e4
	// Line 290, Address: 0x3851a8, Func Offset: 0x4e8
	// Line 285, Address: 0x3851ac, Func Offset: 0x4ec
	// Line 290, Address: 0x3851b0, Func Offset: 0x4f0
	// Line 285, Address: 0x3851b4, Func Offset: 0x4f4
	// Line 290, Address: 0x3851c0, Func Offset: 0x500
	// Func End, Address: 0x385204, Func Offset: 0x544
}

// DOBJ_alwaysUseSphere__19@unnamed@zWad1_cpp@FP4xEntP5xVec3
// Start address: 0x385210
void DOBJ_alwaysUseSphere(xEnt* ent)
{
	xVec3 bndcent;
	// Line 165, Address: 0x385210, Func Offset: 0
	// Line 167, Address: 0x385214, Func Offset: 0x4
	// Line 165, Address: 0x385218, Func Offset: 0x8
	// Line 167, Address: 0x38521c, Func Offset: 0xc
	// Line 165, Address: 0x385220, Func Offset: 0x10
	// Line 167, Address: 0x385224, Func Offset: 0x14
	// Line 169, Address: 0x385248, Func Offset: 0x38
	// Line 172, Address: 0x38524c, Func Offset: 0x3c
	// Line 169, Address: 0x385250, Func Offset: 0x40
	// Line 172, Address: 0x385264, Func Offset: 0x54
	// Line 169, Address: 0x385268, Func Offset: 0x58
	// Line 173, Address: 0x38526c, Func Offset: 0x5c
	// Line 174, Address: 0x385278, Func Offset: 0x68
	// Line 175, Address: 0x385288, Func Offset: 0x78
	// Line 178, Address: 0x385290, Func Offset: 0x80
	// Line 179, Address: 0x38529c, Func Offset: 0x8c
	// Line 181, Address: 0x3852b0, Func Offset: 0xa0
	// Line 182, Address: 0x3852b8, Func Offset: 0xa8
	// Line 183, Address: 0x3852c0, Func Offset: 0xb0
	// Func End, Address: 0x3852d0, Func Offset: 0xc0
}

// SwapModelThroughState__19@unnamed@zWad1_cpp@FP4xEntP18zDestructibleStateP13zDestructible
// Start address: 0x3852d0
void SwapModelThroughState(xEnt* ent, zDestructibleState* state, zDestructible* dest)
{
	xModelInstance* curr;
	// Line 84, Address: 0x3852d0, Func Offset: 0
	// Line 87, Address: 0x3852ec, Func Offset: 0x1c
	// Line 90, Address: 0x3852fc, Func Offset: 0x2c
	// Line 99, Address: 0x385300, Func Offset: 0x30
	// Line 90, Address: 0x385304, Func Offset: 0x34
	// Line 91, Address: 0x385318, Func Offset: 0x48
	// Line 92, Address: 0x385328, Func Offset: 0x58
	// Line 93, Address: 0x385338, Func Offset: 0x68
	// Line 94, Address: 0x385348, Func Offset: 0x78
	// Line 95, Address: 0x385380, Func Offset: 0xb0
	// Line 97, Address: 0x385390, Func Offset: 0xc0
	// Line 98, Address: 0x385420, Func Offset: 0x150
	// Line 99, Address: 0x385434, Func Offset: 0x164
	// Line 103, Address: 0x385444, Func Offset: 0x174
	// Line 104, Address: 0x385450, Func Offset: 0x180
	// Line 105, Address: 0x385460, Func Offset: 0x190
	// Line 106, Address: 0x385464, Func Offset: 0x194
	// Line 108, Address: 0x38546c, Func Offset: 0x19c
	// Line 111, Address: 0x385478, Func Offset: 0x1a8
	// Line 112, Address: 0x38548c, Func Offset: 0x1bc
	// Line 113, Address: 0x38549c, Func Offset: 0x1cc
	// Line 116, Address: 0x385618, Func Offset: 0x348
	// Line 118, Address: 0x385624, Func Offset: 0x354
	// Line 122, Address: 0x385638, Func Offset: 0x368
	// Line 131, Address: 0x3857ac, Func Offset: 0x4dc
	// Line 101, Address: 0x3857b4, Func Offset: 0x4e4
	// Line 131, Address: 0x3857bc, Func Offset: 0x4ec
	// Line 129, Address: 0x385944, Func Offset: 0x674
	// Line 131, Address: 0x38594c, Func Offset: 0x67c
	// Line 129, Address: 0x385950, Func Offset: 0x680
	// Line 131, Address: 0x385958, Func Offset: 0x688
	// Line 129, Address: 0x385968, Func Offset: 0x698
	// Line 131, Address: 0x38596c, Func Offset: 0x69c
	// Line 129, Address: 0x385970, Func Offset: 0x6a0
	// Line 131, Address: 0x385974, Func Offset: 0x6a4
	// Func End, Address: 0x3859a0, Func Offset: 0x6d0
}

