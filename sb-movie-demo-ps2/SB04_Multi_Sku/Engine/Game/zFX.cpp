



void zFX_SpawnBubblesOnSphere(int32 numBubbles, xSphere* genSphere, float32 velocity);
void setup_entrails(zScene& s);
void zFXPopOnOffAtomic(xModelInstance* model, float32 rate);
void zFXBubbleSpawnStop(xEnt& ent);
void zFXBubbleSpawnStart(xEnt& ent, float32 rate);
void zFXPopOff(xEnt& ent, float32 rate, float32 time);
void zFXPopOn(xEnt& ent, float32 rate, float32 time);
void update_popper(popper_data& popper, float32 dt);
void emit_popper_bubbles(popper_data& popper, int32 emit, float32 scale, float32 vel_add);
void random_surface_point(xVec3& loc, xVec3& norm, popper_data& popper);
void eval_tri(xVec3* vert, xVec3* norm, xMat4x3* mat, RpGeometry* geom, RpTriangle* tri);
uint8 setup_popper_emitter(popper_data& popper);
void zFX_SpawnBubbleBlast(xVec3* pos, uint32 num, float32 radius, float32 blast_vel, float32 rand_vel);
void zFX_SpawnBubbleRing(xVec3* pos, uint32 num, float32 rang, float32 bvel, float32 rvel, xVec3* norm);
void zFX_SpawnBubbleSlam(xVec3* pos, uint32 num, float32 rang, float32 bvel, float32 rvel);
void zFX_SpawnBubbleWall();
void zFX_SpawnBubbleMenuTrail(xVec3* pos, uint32 num, xVec3* pos_rnd, xVec3* vel_rnd);
void zFX_SpawnBubbleTrail(xVec3* p1, xVec3* p2, xVec3* vel1, xVec3* vel2, uint32 num, xVec3* pos_rnd, xVec3* vel_rnd, float32 scale);
void zFX_SpawnBubbleTrail(xVec3* p1, xVec3* p2, uint32 num, xVec3* pos_rnd, xVec3* vel_rnd);
void zFX_SpawnBubbleTrail(xVec3* pos, uint32 num, xVec3* pos_rnd, xVec3* vel_rnd);
void zFX_SpawnBubbleTrail(xVec3* pos, uint32 num);
void zFX_SpawnBubbleHit(xVec3* pos, uint32 num, xVec3* pos_rnd, xVec3* vel_rnd, float32 vel_scale);
void zFX_SpawnBubbleHit(xVec3* pos, uint32 num);
void zFXGooEventMelt(xEnt* ent);
void zFXGooEventSetFreezeDuration(xEnt* ent, float32 duration);
void zFXGooEventSetWarb(xEnt* ent, float32* warb);
int32 zFXGooIs(xEnt* obj, float32& depth, uint32 playerCheck);
void zFXGooFreeze(RpAtomic* atomic, xVec3* center, xVec3* ref_parPosVec);
void zFXUpdate(float32 dt);
RpAtomic* zFXGooRenderAtomic(RpAtomic* atomic);
void zFXGooUpdateInstance(zFXGooInstance* goo, float32 dt);
void zFXGooEnable(xModelInstance* gooModel, int32 freezeGroup);
float32 zFXGooGetIceAlpha(xSurface* surf);
void zFXGooAssocWithEnt(xEnt* ent);
zFXGooInstance* FindGooForSurface(xSurface* surf);
void zFXPatrickStun(xVec3* pos);
void zFX_SceneReset();
void zFX_SceneExit(RpWorld* world);
void zFX_GameInit();
void on_spawn_bubble_wall();

// zFX_SpawnBubblesOnSphere__FiP7xSpheref
// Start address: 0x2d64e0
void zFX_SpawnBubblesOnSphere(int32 numBubbles, xSphere* genSphere, float32 velocity)
{
	xVec3* posbuf;
	xVec3* velbuf;
	xVec3* pp;
	xVec3* vp;
	float32 velocityScale;
	int32 j;
	// Line 3226, Address: 0x2d64e0, Func Offset: 0
	// Line 3227, Address: 0x2d64fc, Func Offset: 0x1c
	// Line 3226, Address: 0x2d6500, Func Offset: 0x20
	// Line 3227, Address: 0x2d6504, Func Offset: 0x24
	// Line 3226, Address: 0x2d6508, Func Offset: 0x28
	// Line 3227, Address: 0x2d650c, Func Offset: 0x2c
	// Line 3226, Address: 0x2d6510, Func Offset: 0x30
	// Line 3227, Address: 0x2d651c, Func Offset: 0x3c
	// Line 3228, Address: 0x2d652c, Func Offset: 0x4c
	// Line 3234, Address: 0x2d6534, Func Offset: 0x54
	// Line 3230, Address: 0x2d6538, Func Offset: 0x58
	// Line 3232, Address: 0x2d6540, Func Offset: 0x60
	// Line 3230, Address: 0x2d6544, Func Offset: 0x64
	// Line 3235, Address: 0x2d6548, Func Offset: 0x68
	// Line 3230, Address: 0x2d654c, Func Offset: 0x6c
	// Line 3233, Address: 0x2d6550, Func Offset: 0x70
	// Line 3234, Address: 0x2d6554, Func Offset: 0x74
	// Line 3235, Address: 0x2d6560, Func Offset: 0x80
	// Line 3237, Address: 0x2d656c, Func Offset: 0x8c
	// Line 3238, Address: 0x2d6578, Func Offset: 0x98
	// Line 3241, Address: 0x2d657c, Func Offset: 0x9c
	// Line 3238, Address: 0x2d6580, Func Offset: 0xa0
	// Line 3241, Address: 0x2d6584, Func Offset: 0xa4
	// Line 3238, Address: 0x2d6588, Func Offset: 0xa8
	// Line 3239, Address: 0x2d6598, Func Offset: 0xb8
	// Line 3241, Address: 0x2d659c, Func Offset: 0xbc
	// Line 3239, Address: 0x2d65a0, Func Offset: 0xc0
	// Line 3240, Address: 0x2d65cc, Func Offset: 0xec
	// Line 3241, Address: 0x2d65f0, Func Offset: 0x110
	// Line 3243, Address: 0x2d65f8, Func Offset: 0x118
	// Line 3245, Address: 0x2d6610, Func Offset: 0x130
	// Line 3248, Address: 0x2d6618, Func Offset: 0x138
	// Func End, Address: 0x2d6644, Func Offset: 0x164
}

// setup_entrails__FR6zScene
// Start address: 0x2d6650
void setup_entrails(zScene& s)
{
	uint32 entrails_size'137;
	uint32 hash[7];
	uint32 hash_dff[7];
	uint32 hash_minf[7];
	uint32 i;
	xBase** it;
	xBase** end;
	xEnt* ent;
	uint32 model;
	uint32 i;
	uint32 index;
	xBase** it;
	xBase** end;
	xEnt* ent;
	uint32 model;
	uint32 i;
	// Line 3097, Address: 0x2d6650, Func Offset: 0
	// Line 3100, Address: 0x2d6668, Func Offset: 0x18
	// Line 3097, Address: 0x2d666c, Func Offset: 0x1c
	// Line 3100, Address: 0x2d6670, Func Offset: 0x20
	// Line 3097, Address: 0x2d6674, Func Offset: 0x24
	// Line 3100, Address: 0x2d6678, Func Offset: 0x28
	// Line 3097, Address: 0x2d667c, Func Offset: 0x2c
	// Line 3100, Address: 0x2d6680, Func Offset: 0x30
	// Line 3097, Address: 0x2d6684, Func Offset: 0x34
	// Line 3100, Address: 0x2d6688, Func Offset: 0x38
	// Line 3097, Address: 0x2d668c, Func Offset: 0x3c
	// Line 3100, Address: 0x2d6690, Func Offset: 0x40
	// Line 3097, Address: 0x2d6694, Func Offset: 0x44
	// Line 3102, Address: 0x2d66a4, Func Offset: 0x54
	// Line 3103, Address: 0x2d66b0, Func Offset: 0x60
	// Line 3104, Address: 0x2d66c0, Func Offset: 0x70
	// Line 3103, Address: 0x2d66c8, Func Offset: 0x78
	// Line 3104, Address: 0x2d66cc, Func Offset: 0x7c
	// Line 3105, Address: 0x2d66d4, Func Offset: 0x84
	// Line 3104, Address: 0x2d66d8, Func Offset: 0x88
	// Line 3105, Address: 0x2d66dc, Func Offset: 0x8c
	// Line 3104, Address: 0x2d66e0, Func Offset: 0x90
	// Line 3105, Address: 0x2d66ec, Func Offset: 0x9c
	// Line 3119, Address: 0x2d66f4, Func Offset: 0xa4
	// Line 3120, Address: 0x2d66f8, Func Offset: 0xa8
	// Line 3122, Address: 0x2d6710, Func Offset: 0xc0
	// Line 3123, Address: 0x2d6714, Func Offset: 0xc4
	// Line 3125, Address: 0x2d672c, Func Offset: 0xdc
	// Line 3126, Address: 0x2d6730, Func Offset: 0xe0
	// Line 3125, Address: 0x2d6740, Func Offset: 0xf0
	// Line 3126, Address: 0x2d6744, Func Offset: 0xf4
	// Line 3128, Address: 0x2d6748, Func Offset: 0xf8
	// Line 3133, Address: 0x2d676c, Func Offset: 0x11c
	// Line 3128, Address: 0x2d6778, Func Offset: 0x128
	// Line 3133, Address: 0x2d6780, Func Offset: 0x130
	// Line 3134, Address: 0x2d6788, Func Offset: 0x138
	// Line 3136, Address: 0x2d67a0, Func Offset: 0x150
	// Line 3137, Address: 0x2d67a8, Func Offset: 0x158
	// Line 3141, Address: 0x2d67c8, Func Offset: 0x178
	// Line 3140, Address: 0x2d67d8, Func Offset: 0x188
	// Line 3141, Address: 0x2d67dc, Func Offset: 0x18c
	// Line 3142, Address: 0x2d67e8, Func Offset: 0x198
	// Line 3144, Address: 0x2d6800, Func Offset: 0x1b0
	// Line 3145, Address: 0x2d6804, Func Offset: 0x1b4
	// Line 3147, Address: 0x2d6814, Func Offset: 0x1c4
	// Line 3148, Address: 0x2d6818, Func Offset: 0x1c8
	// Line 3147, Address: 0x2d6828, Func Offset: 0x1d8
	// Line 3148, Address: 0x2d682c, Func Offset: 0x1dc
	// Line 3150, Address: 0x2d6830, Func Offset: 0x1e0
	// Line 3158, Address: 0x2d6854, Func Offset: 0x204
	// Line 3150, Address: 0x2d6860, Func Offset: 0x210
	// Line 3158, Address: 0x2d6868, Func Offset: 0x218
	// Line 3159, Address: 0x2d6870, Func Offset: 0x220
	// Line 3160, Address: 0x2d6880, Func Offset: 0x230
	// Func End, Address: 0x2d68f0, Func Offset: 0x2a0
}

// zFXPopOnOffAtomic__FP14xModelInstancef
// Start address: 0x2d68f0
void zFXPopOnOffAtomic(xModelInstance* model, float32 rate)
{
	xModelInstance* nextModel;
	xEnt dummyEnt;
	// Line 2813, Address: 0x2d68f0, Func Offset: 0
	// Line 2816, Address: 0x2d6908, Func Offset: 0x18
	// Line 2819, Address: 0x2d6910, Func Offset: 0x20
	// Line 2825, Address: 0x2d6914, Func Offset: 0x24
	// Line 2823, Address: 0x2d6918, Func Offset: 0x28
	// Line 2825, Address: 0x2d6920, Func Offset: 0x30
	// Line 2820, Address: 0x2d6924, Func Offset: 0x34
	// Line 2823, Address: 0x2d6928, Func Offset: 0x38
	// Line 2825, Address: 0x2d692c, Func Offset: 0x3c
	// Line 2826, Address: 0x2d6934, Func Offset: 0x44
	// Line 2827, Address: 0x2d6940, Func Offset: 0x50
	// Line 2828, Address: 0x2d6948, Func Offset: 0x58
	// Line 2831, Address: 0x2d6974, Func Offset: 0x84
	// Line 2828, Address: 0x2d697c, Func Offset: 0x8c
	// Line 2831, Address: 0x2d6980, Func Offset: 0x90
	// Line 2828, Address: 0x2d6984, Func Offset: 0x94
	// Line 2831, Address: 0x2d698c, Func Offset: 0x9c
	// Func End, Address: 0x2d69b4, Func Offset: 0xc4
}

// zFXBubbleSpawnStop__FR4xEnt
// Start address: 0x2d69c0
void zFXBubbleSpawnStop(xEnt& ent)
{
	popper_data* pPopper;
	// Line 2803, Address: 0x2d69c0, Func Offset: 0
	// Line 2804, Address: 0x2d69c4, Func Offset: 0x4
	// Line 2803, Address: 0x2d69c8, Func Offset: 0x8
	// Line 2804, Address: 0x2d69cc, Func Offset: 0xc
	// Line 2803, Address: 0x2d69d0, Func Offset: 0x10
	// Line 2804, Address: 0x2d69d4, Func Offset: 0x14
	// Line 2805, Address: 0x2d6a0c, Func Offset: 0x4c
	// Line 2806, Address: 0x2d6a14, Func Offset: 0x54
	// Line 2807, Address: 0x2d6adc, Func Offset: 0x11c
	// Func End, Address: 0x2d6aec, Func Offset: 0x12c
}

// zFXBubbleSpawnStart__FR4xEntf
// Start address: 0x2d6af0
void zFXBubbleSpawnStart(xEnt& ent, float32 rate)
{
	xSphere o;
	// Line 2777, Address: 0x2d6af0, Func Offset: 0
	// Line 2778, Address: 0x2d6b0c, Func Offset: 0x1c
	// Line 2780, Address: 0x2d6bec, Func Offset: 0xfc
	// Line 2778, Address: 0x2d6c64, Func Offset: 0x174
	// Line 2780, Address: 0x2d6c80, Func Offset: 0x190
	// Line 2781, Address: 0x2d6ca4, Func Offset: 0x1b4
	// Line 2784, Address: 0x2d6cac, Func Offset: 0x1bc
	// Line 2788, Address: 0x2d6cc0, Func Offset: 0x1d0
	// Line 2789, Address: 0x2d6ccc, Func Offset: 0x1dc
	// Line 2791, Address: 0x2d6cd0, Func Offset: 0x1e0
	// Line 2796, Address: 0x2d6cd4, Func Offset: 0x1e4
	// Line 2797, Address: 0x2d6cd8, Func Offset: 0x1e8
	// Line 2789, Address: 0x2d6cdc, Func Offset: 0x1ec
	// Line 2791, Address: 0x2d6ce0, Func Offset: 0x1f0
	// Line 2792, Address: 0x2d6ce4, Func Offset: 0x1f4
	// Line 2793, Address: 0x2d6ce8, Func Offset: 0x1f8
	// Line 2794, Address: 0x2d6cec, Func Offset: 0x1fc
	// Line 2795, Address: 0x2d6cf0, Func Offset: 0x200
	// Line 2796, Address: 0x2d6cf4, Func Offset: 0x204
	// Line 2797, Address: 0x2d6cf8, Func Offset: 0x208
	// Line 2798, Address: 0x2d6cfc, Func Offset: 0x20c
	// Line 2799, Address: 0x2d6d00, Func Offset: 0x210
	// Line 2800, Address: 0x2d6d08, Func Offset: 0x218
	// Line 2780, Address: 0x2d6d78, Func Offset: 0x288
	// Line 2800, Address: 0x2d6d80, Func Offset: 0x290
	// Line 2780, Address: 0x2d6da0, Func Offset: 0x2b0
	// Line 2800, Address: 0x2d6db4, Func Offset: 0x2c4
	// Line 2780, Address: 0x2d6db8, Func Offset: 0x2c8
	// Line 2785, Address: 0x2d6dc0, Func Offset: 0x2d0
	// Line 2800, Address: 0x2d6dd0, Func Offset: 0x2e0
	// Func End, Address: 0x2d6de8, Func Offset: 0x2f8
}

// zFXPopOff__FR4xEntff
// Start address: 0x2d6df0
void zFXPopOff(xEnt& ent, float32 rate, float32 time)
{
	xSphere o;
	// Line 2739, Address: 0x2d6df0, Func Offset: 0
	// Line 2740, Address: 0x2d6e14, Func Offset: 0x24
	// Line 2742, Address: 0x2d6ef4, Func Offset: 0x104
	// Line 2740, Address: 0x2d6f6c, Func Offset: 0x17c
	// Line 2742, Address: 0x2d6f88, Func Offset: 0x198
	// Line 2743, Address: 0x2d6fac, Func Offset: 0x1bc
	// Line 2746, Address: 0x2d6fb4, Func Offset: 0x1c4
	// Line 2747, Address: 0x2d6fc8, Func Offset: 0x1d8
	// Line 2748, Address: 0x2d6fdc, Func Offset: 0x1ec
	// Line 2750, Address: 0x2d6fec, Func Offset: 0x1fc
	// Line 2752, Address: 0x2d7000, Func Offset: 0x210
	// Line 2753, Address: 0x2d7004, Func Offset: 0x214
	// Line 2752, Address: 0x2d7008, Func Offset: 0x218
	// Line 2753, Address: 0x2d700c, Func Offset: 0x21c
	// Line 2754, Address: 0x2d7034, Func Offset: 0x244
	// Line 2755, Address: 0x2d7038, Func Offset: 0x248
	// Line 2756, Address: 0x2d7058, Func Offset: 0x268
	// Line 2742, Address: 0x2d70c8, Func Offset: 0x2d8
	// Line 2756, Address: 0x2d70d0, Func Offset: 0x2e0
	// Line 2742, Address: 0x2d70f0, Func Offset: 0x300
	// Line 2756, Address: 0x2d7104, Func Offset: 0x314
	// Line 2742, Address: 0x2d7108, Func Offset: 0x318
	// Line 2746, Address: 0x2d7110, Func Offset: 0x320
	// Line 2747, Address: 0x2d7120, Func Offset: 0x330
	// Line 2753, Address: 0x2d7130, Func Offset: 0x340
	// Line 2756, Address: 0x2d7138, Func Offset: 0x348
	// Line 2760, Address: 0x2d7148, Func Offset: 0x358
	// Line 2761, Address: 0x2d7154, Func Offset: 0x364
	// Line 2763, Address: 0x2d7158, Func Offset: 0x368
	// Line 2769, Address: 0x2d715c, Func Offset: 0x36c
	// Line 2772, Address: 0x2d7160, Func Offset: 0x370
	// Line 2761, Address: 0x2d7164, Func Offset: 0x374
	// Line 2763, Address: 0x2d7168, Func Offset: 0x378
	// Line 2764, Address: 0x2d716c, Func Offset: 0x37c
	// Line 2765, Address: 0x2d7170, Func Offset: 0x380
	// Line 2766, Address: 0x2d7174, Func Offset: 0x384
	// Line 2767, Address: 0x2d7178, Func Offset: 0x388
	// Line 2768, Address: 0x2d717c, Func Offset: 0x38c
	// Line 2769, Address: 0x2d7180, Func Offset: 0x390
	// Line 2770, Address: 0x2d7184, Func Offset: 0x394
	// Line 2772, Address: 0x2d7188, Func Offset: 0x398
	// Line 2773, Address: 0x2d7198, Func Offset: 0x3a8
	// Line 2774, Address: 0x2d71f0, Func Offset: 0x400
	// Func End, Address: 0x2d720c, Func Offset: 0x41c
}

// zFXPopOn__FR4xEntff
// Start address: 0x2d7210
void zFXPopOn(xEnt& ent, float32 rate, float32 time)
{
	xSphere o;
	xVec3 tiny;
	// Line 2699, Address: 0x2d7210, Func Offset: 0
	// Line 2700, Address: 0x2d7234, Func Offset: 0x24
	// Line 2702, Address: 0x2d7314, Func Offset: 0x104
	// Line 2700, Address: 0x2d738c, Func Offset: 0x17c
	// Line 2702, Address: 0x2d73a8, Func Offset: 0x198
	// Line 2703, Address: 0x2d73cc, Func Offset: 0x1bc
	// Line 2706, Address: 0x2d73d4, Func Offset: 0x1c4
	// Line 2707, Address: 0x2d73e8, Func Offset: 0x1d8
	// Line 2708, Address: 0x2d73fc, Func Offset: 0x1ec
	// Line 2710, Address: 0x2d740c, Func Offset: 0x1fc
	// Line 2712, Address: 0x2d7420, Func Offset: 0x210
	// Line 2714, Address: 0x2d7424, Func Offset: 0x214
	// Line 2712, Address: 0x2d7428, Func Offset: 0x218
	// Line 2714, Address: 0x2d742c, Func Offset: 0x21c
	// Line 2713, Address: 0x2d7430, Func Offset: 0x220
	// Line 2714, Address: 0x2d7434, Func Offset: 0x224
	// Line 2715, Address: 0x2d7454, Func Offset: 0x244
	// Line 2716, Address: 0x2d7458, Func Offset: 0x248
	// Line 2717, Address: 0x2d7478, Func Offset: 0x268
	// Line 2702, Address: 0x2d74e8, Func Offset: 0x2d8
	// Line 2717, Address: 0x2d74f0, Func Offset: 0x2e0
	// Line 2702, Address: 0x2d7510, Func Offset: 0x300
	// Line 2717, Address: 0x2d7524, Func Offset: 0x314
	// Line 2702, Address: 0x2d7528, Func Offset: 0x318
	// Line 2706, Address: 0x2d7530, Func Offset: 0x320
	// Line 2707, Address: 0x2d7540, Func Offset: 0x330
	// Line 2714, Address: 0x2d7550, Func Offset: 0x340
	// Line 2717, Address: 0x2d7558, Func Offset: 0x348
	// Line 2721, Address: 0x2d7568, Func Offset: 0x358
	// Line 2722, Address: 0x2d7574, Func Offset: 0x364
	// Line 2724, Address: 0x2d7578, Func Offset: 0x368
	// Line 2729, Address: 0x2d757c, Func Offset: 0x36c
	// Line 2730, Address: 0x2d7580, Func Offset: 0x370
	// Line 2734, Address: 0x2d7584, Func Offset: 0x374
	// Line 2722, Address: 0x2d758c, Func Offset: 0x37c
	// Line 2724, Address: 0x2d7590, Func Offset: 0x380
	// Line 2725, Address: 0x2d7594, Func Offset: 0x384
	// Line 2726, Address: 0x2d7598, Func Offset: 0x388
	// Line 2727, Address: 0x2d759c, Func Offset: 0x38c
	// Line 2728, Address: 0x2d75a0, Func Offset: 0x390
	// Line 2729, Address: 0x2d75a4, Func Offset: 0x394
	// Line 2730, Address: 0x2d75a8, Func Offset: 0x398
	// Line 2731, Address: 0x2d75ac, Func Offset: 0x39c
	// Line 2732, Address: 0x2d75b0, Func Offset: 0x3a0
	// Line 2734, Address: 0x2d75cc, Func Offset: 0x3bc
	// Line 2735, Address: 0x2d75d4, Func Offset: 0x3c4
	// Line 2734, Address: 0x2d75d8, Func Offset: 0x3c8
	// Line 2735, Address: 0x2d75dc, Func Offset: 0x3cc
	// Line 2736, Address: 0x2d7610, Func Offset: 0x400
	// Func End, Address: 0x2d762c, Func Offset: 0x41c
}

// update_popper__19@unnamed@zWad2_cpp@FRQ219@unnamed@zWad2_cpp@11popper_dataf
// Start address: 0x2d7630
void update_popper(popper_data& popper, float32 dt)
{
	float32 rate;
	float32 scale;
	float32 vel_add;
	float32 area;
	float32 s;
	float32 ss;
	xVec3 model_scale;
	int32 emit;
	// Line 2489, Address: 0x2d7630, Func Offset: 0
	// Line 2494, Address: 0x2d7634, Func Offset: 0x4
	// Line 2489, Address: 0x2d7638, Func Offset: 0x8
	// Line 2494, Address: 0x2d7658, Func Offset: 0x28
	// Line 2490, Address: 0x2d765c, Func Offset: 0x2c
	// Line 2492, Address: 0x2d7660, Func Offset: 0x30
	// Line 2494, Address: 0x2d7664, Func Offset: 0x34
	// Line 2496, Address: 0x2d766c, Func Offset: 0x3c
	// Line 2549, Address: 0x2d7674, Func Offset: 0x44
	// Line 2550, Address: 0x2d7678, Func Offset: 0x48
	// Line 2549, Address: 0x2d767c, Func Offset: 0x4c
	// Line 2550, Address: 0x2d7680, Func Offset: 0x50
	// Line 2549, Address: 0x2d7688, Func Offset: 0x58
	// Line 2550, Address: 0x2d7690, Func Offset: 0x60
	// Line 2558, Address: 0x2d769c, Func Offset: 0x6c
	// Line 2501, Address: 0x2d76a8, Func Offset: 0x78
	// Line 2558, Address: 0x2d76ac, Func Offset: 0x7c
	// Line 2502, Address: 0x2d76b4, Func Offset: 0x84
	// Line 2558, Address: 0x2d76b8, Func Offset: 0x88
	// Line 2511, Address: 0x2d76cc, Func Offset: 0x9c
	// Line 2558, Address: 0x2d76d0, Func Offset: 0xa0
	// Line 2509, Address: 0x2d76d4, Func Offset: 0xa4
	// Line 2558, Address: 0x2d76e0, Func Offset: 0xb0
	// Line 2511, Address: 0x2d76e8, Func Offset: 0xb8
	// Line 2558, Address: 0x2d76ec, Func Offset: 0xbc
	// Line 2511, Address: 0x2d76f4, Func Offset: 0xc4
	// Line 2518, Address: 0x2d76fc, Func Offset: 0xcc
	// Line 2558, Address: 0x2d7708, Func Offset: 0xd8
	// Line 2518, Address: 0x2d7710, Func Offset: 0xe0
	// Line 2558, Address: 0x2d7754, Func Offset: 0x124
	// Line 2519, Address: 0x2d775c, Func Offset: 0x12c
	// Line 2522, Address: 0x2d7760, Func Offset: 0x130
	// Line 2558, Address: 0x2d776c, Func Offset: 0x13c
	// Line 2525, Address: 0x2d7780, Func Offset: 0x150
	// Line 2558, Address: 0x2d7788, Func Offset: 0x158
	// Line 2525, Address: 0x2d778c, Func Offset: 0x15c
	// Line 2558, Address: 0x2d7790, Func Offset: 0x160
	// Line 2528, Address: 0x2d77f0, Func Offset: 0x1c0
	// Line 2531, Address: 0x2d77f8, Func Offset: 0x1c8
	// Line 2558, Address: 0x2d7810, Func Offset: 0x1e0
	// Line 2531, Address: 0x2d7818, Func Offset: 0x1e8
	// Line 2558, Address: 0x2d784c, Func Offset: 0x21c
	// Line 2531, Address: 0x2d7854, Func Offset: 0x224
	// Line 2558, Address: 0x2d7858, Func Offset: 0x228
	// Line 2531, Address: 0x2d7874, Func Offset: 0x244
	// Line 2558, Address: 0x2d7880, Func Offset: 0x250
	// Line 2531, Address: 0x2d788c, Func Offset: 0x25c
	// Line 2558, Address: 0x2d7890, Func Offset: 0x260
	// Line 2531, Address: 0x2d7898, Func Offset: 0x268
	// Line 2558, Address: 0x2d78a0, Func Offset: 0x270
	// Line 2536, Address: 0x2d78a4, Func Offset: 0x274
	// Line 2558, Address: 0x2d78b4, Func Offset: 0x284
	// Line 2539, Address: 0x2d78bc, Func Offset: 0x28c
	// Line 2540, Address: 0x2d78c4, Func Offset: 0x294
	// Line 2504, Address: 0x2d78cc, Func Offset: 0x29c
	// Line 2558, Address: 0x2d78d8, Func Offset: 0x2a8
	// Line 2523, Address: 0x2d78e0, Func Offset: 0x2b0
	// Line 2558, Address: 0x2d78e8, Func Offset: 0x2b8
	// Line 2544, Address: 0x2d78ec, Func Offset: 0x2bc
	// Line 2543, Address: 0x2d78f0, Func Offset: 0x2c0
	// Line 2558, Address: 0x2d78f4, Func Offset: 0x2c4
	// Line 2544, Address: 0x2d78f8, Func Offset: 0x2c8
	// Line 2558, Address: 0x2d7904, Func Offset: 0x2d4
	// Line 2554, Address: 0x2d7908, Func Offset: 0x2d8
	// Line 2552, Address: 0x2d790c, Func Offset: 0x2dc
	// Line 2554, Address: 0x2d7910, Func Offset: 0x2e0
	// Line 2558, Address: 0x2d7914, Func Offset: 0x2e4
	// Line 2553, Address: 0x2d7918, Func Offset: 0x2e8
	// Line 2558, Address: 0x2d791c, Func Offset: 0x2ec
	// Func End, Address: 0x2d794c, Func Offset: 0x31c
}

// emit_popper_bubbles__19@unnamed@zWad2_cpp@FRQ219@unnamed@zWad2_cpp@11popper_dataiff
// Start address: 0x2d7950
void emit_popper_bubbles(popper_data& popper, int32 emit, float32 scale, float32 vel_add)
{
	int32 max_emit;
	xVec3* buffer;
	xVec3* loc;
	xVec3* end_loc;
	xVec3* vel;
	xModelInstance* model;
	xMat3x3 oldmat;
	xMat3x3& mat;
	float32 svel;
	float32 rloc;
	float32 rvel;
	// Line 2396, Address: 0x2d7950, Func Offset: 0
	// Line 2400, Address: 0x2d7994, Func Offset: 0x44
	// Line 2403, Address: 0x2d799c, Func Offset: 0x4c
	// Line 2404, Address: 0x2d79a4, Func Offset: 0x54
	// Line 2406, Address: 0x2d79ac, Func Offset: 0x5c
	// Line 2408, Address: 0x2d79bc, Func Offset: 0x6c
	// Line 2409, Address: 0x2d79d0, Func Offset: 0x80
	// Line 2414, Address: 0x2d79d8, Func Offset: 0x88
	// Line 2411, Address: 0x2d79e0, Func Offset: 0x90
	// Line 2415, Address: 0x2d79e4, Func Offset: 0x94
	// Line 2411, Address: 0x2d79ec, Func Offset: 0x9c
	// Line 2415, Address: 0x2d79f4, Func Offset: 0xa4
	// Line 2414, Address: 0x2d79f8, Func Offset: 0xa8
	// Line 2415, Address: 0x2d79fc, Func Offset: 0xac
	// Line 2416, Address: 0x2d7a20, Func Offset: 0xd0
	// Line 2418, Address: 0x2d7a38, Func Offset: 0xe8
	// Line 2419, Address: 0x2d7a3c, Func Offset: 0xec
	// Line 2420, Address: 0x2d7a68, Func Offset: 0x118
	// Line 2419, Address: 0x2d7a6c, Func Offset: 0x11c
	// Line 2420, Address: 0x2d7a88, Func Offset: 0x138
	// Line 2419, Address: 0x2d7a94, Func Offset: 0x144
	// Line 2420, Address: 0x2d7aa8, Func Offset: 0x158
	// Line 2419, Address: 0x2d7ab4, Func Offset: 0x164
	// Line 2420, Address: 0x2d7ab8, Func Offset: 0x168
	// Line 2421, Address: 0x2d7ac0, Func Offset: 0x170
	// Line 2422, Address: 0x2d7ae8, Func Offset: 0x198
	// Line 2425, Address: 0x2d7b10, Func Offset: 0x1c0
	// Line 2426, Address: 0x2d7b14, Func Offset: 0x1c4
	// Line 2425, Address: 0x2d7b18, Func Offset: 0x1c8
	// Line 2427, Address: 0x2d7b1c, Func Offset: 0x1cc
	// Line 2425, Address: 0x2d7b20, Func Offset: 0x1d0
	// Line 2426, Address: 0x2d7b24, Func Offset: 0x1d4
	// Line 2427, Address: 0x2d7b28, Func Offset: 0x1d8
	// Line 2430, Address: 0x2d7b2c, Func Offset: 0x1dc
	// Line 2432, Address: 0x2d7b34, Func Offset: 0x1e4
	// Line 2433, Address: 0x2d7b44, Func Offset: 0x1f4
	// Line 2435, Address: 0x2d7b48, Func Offset: 0x1f8
	// Line 2433, Address: 0x2d7b50, Func Offset: 0x200
	// Line 2435, Address: 0x2d7b70, Func Offset: 0x220
	// Line 2441, Address: 0x2d7b80, Func Offset: 0x230
	// Line 2447, Address: 0x2d7b98, Func Offset: 0x248
	// Line 2450, Address: 0x2d7ba8, Func Offset: 0x258
	// Line 2451, Address: 0x2d7bc0, Func Offset: 0x270
	// Line 2453, Address: 0x2d7c24, Func Offset: 0x2d4
	// Line 2454, Address: 0x2d7c38, Func Offset: 0x2e8
	// Line 2466, Address: 0x2d7c40, Func Offset: 0x2f0
	// Line 2401, Address: 0x2d7c54, Func Offset: 0x304
	// Line 2466, Address: 0x2d7c5c, Func Offset: 0x30c
	// Line 2437, Address: 0x2d7c64, Func Offset: 0x314
	// Line 2466, Address: 0x2d7c6c, Func Offset: 0x31c
	// Line 2437, Address: 0x2d7c74, Func Offset: 0x324
	// Line 2466, Address: 0x2d7ca8, Func Offset: 0x358
	// Line 2437, Address: 0x2d7cac, Func Offset: 0x35c
	// Line 2466, Address: 0x2d7cc0, Func Offset: 0x370
	// Line 2438, Address: 0x2d7cc8, Func Offset: 0x378
	// Line 2466, Address: 0x2d7cd0, Func Offset: 0x380
	// Line 2438, Address: 0x2d7cd8, Func Offset: 0x388
	// Line 2466, Address: 0x2d7d0c, Func Offset: 0x3bc
	// Line 2438, Address: 0x2d7d10, Func Offset: 0x3c0
	// Line 2466, Address: 0x2d7d24, Func Offset: 0x3d4
	// Line 2439, Address: 0x2d7d2c, Func Offset: 0x3dc
	// Line 2466, Address: 0x2d7d34, Func Offset: 0x3e4
	// Line 2439, Address: 0x2d7d3c, Func Offset: 0x3ec
	// Line 2466, Address: 0x2d7d70, Func Offset: 0x420
	// Line 2439, Address: 0x2d7d74, Func Offset: 0x424
	// Line 2466, Address: 0x2d7d90, Func Offset: 0x440
	// Line 2443, Address: 0x2d7d98, Func Offset: 0x448
	// Line 2466, Address: 0x2d7da0, Func Offset: 0x450
	// Line 2443, Address: 0x2d7da8, Func Offset: 0x458
	// Line 2466, Address: 0x2d7ddc, Func Offset: 0x48c
	// Line 2443, Address: 0x2d7de0, Func Offset: 0x490
	// Line 2466, Address: 0x2d7df4, Func Offset: 0x4a4
	// Line 2444, Address: 0x2d7dfc, Func Offset: 0x4ac
	// Line 2466, Address: 0x2d7e04, Func Offset: 0x4b4
	// Line 2444, Address: 0x2d7e0c, Func Offset: 0x4bc
	// Line 2466, Address: 0x2d7e40, Func Offset: 0x4f0
	// Line 2444, Address: 0x2d7e44, Func Offset: 0x4f4
	// Line 2466, Address: 0x2d7e58, Func Offset: 0x508
	// Line 2445, Address: 0x2d7e60, Func Offset: 0x510
	// Line 2466, Address: 0x2d7e68, Func Offset: 0x518
	// Line 2445, Address: 0x2d7e70, Func Offset: 0x520
	// Line 2466, Address: 0x2d7ea4, Func Offset: 0x554
	// Line 2445, Address: 0x2d7ea8, Func Offset: 0x558
	// Line 2466, Address: 0x2d7ec8, Func Offset: 0x578
	// Func End, Address: 0x2d7f00, Func Offset: 0x5b0
}

// random_surface_point__19@unnamed@zWad2_cpp@FR5xVec3R5xVec3RCQ219@unnamed@zWad2_cpp@11popper_data
// Start address: 0x2d7f00
void random_surface_point(xVec3& loc, xVec3& norm, popper_data& popper)
{
	xMat4x3* mat;
	int32 which;
	RpGeometry* geom;
	RpAtomic** atomic;
	RpAtomic** end;
	int32 size;
	xVec3 v[3];
	xVec3 n[3];
	// Line 2312, Address: 0x2d7f00, Func Offset: 0
	// Line 2315, Address: 0x2d7f04, Func Offset: 0x4
	// Line 2312, Address: 0x2d7f08, Func Offset: 0x8
	// Line 2315, Address: 0x2d7f28, Func Offset: 0x28
	// Line 2318, Address: 0x2d7f30, Func Offset: 0x30
	// Line 2326, Address: 0x2d7fcc, Func Offset: 0xcc
	// Line 2328, Address: 0x2d7fdc, Func Offset: 0xdc
	// Line 2330, Address: 0x2d7fe4, Func Offset: 0xe4
	// Line 2331, Address: 0x2d7fec, Func Offset: 0xec
	// Line 2332, Address: 0x2d7ff0, Func Offset: 0xf0
	// Line 2334, Address: 0x2d7ffc, Func Offset: 0xfc
	// Line 2339, Address: 0x2d8008, Func Offset: 0x108
	// Line 2340, Address: 0x2d8024, Func Offset: 0x124
	// Line 2346, Address: 0x2d820c, Func Offset: 0x30c
	// Line 2340, Address: 0x2d8230, Func Offset: 0x330
	// Line 2346, Address: 0x2d8238, Func Offset: 0x338
	// Func End, Address: 0x2d8254, Func Offset: 0x354
}

// eval_tri__19@unnamed@zWad2_cpp@FP5xVec3P5xVec3PC7xMat4x3PC10RpGeometryPC10RpTriangle
// Start address: 0x2d8260
void eval_tri(xVec3* vert, xVec3* norm, xMat4x3* mat, RpGeometry* geom, RpTriangle* tri)
{
	RpSkin* skin;
	RpMorphTarget* mt;
	xVec3* in_vert;
	xVec3* in_norm;
	xMat4x3* skinmat;
	float32* vert_bone_weight;
	uint32* vert_bone_index;
	// Line 2256, Address: 0x2d8260, Func Offset: 0
	// Line 2257, Address: 0x2d8298, Func Offset: 0x38
	// Line 2256, Address: 0x2d82a0, Func Offset: 0x40
	// Line 2257, Address: 0x2d82a4, Func Offset: 0x44
	// Line 2258, Address: 0x2d82ac, Func Offset: 0x4c
	// Line 2259, Address: 0x2d82b0, Func Offset: 0x50
	// Line 2257, Address: 0x2d82b4, Func Offset: 0x54
	// Line 2259, Address: 0x2d82b8, Func Offset: 0x58
	// Line 2260, Address: 0x2d82bc, Func Offset: 0x5c
	// Line 2262, Address: 0x2d82c0, Func Offset: 0x60
	// Line 2264, Address: 0x2d82c8, Func Offset: 0x68
	// Line 2265, Address: 0x2d82d4, Func Offset: 0x74
	// Line 2266, Address: 0x2d82dc, Func Offset: 0x7c
	// Line 2267, Address: 0x2d82ec, Func Offset: 0x8c
	// Line 2269, Address: 0x2d8768, Func Offset: 0x508
	// Line 2274, Address: 0x2d878c, Func Offset: 0x52c
	// Line 2275, Address: 0x2d8800, Func Offset: 0x5a0
	// Line 2274, Address: 0x2d880c, Func Offset: 0x5ac
	// Line 2275, Address: 0x2d881c, Func Offset: 0x5bc
	// Line 2276, Address: 0x2d887c, Func Offset: 0x61c
	// Line 2275, Address: 0x2d8884, Func Offset: 0x624
	// Line 2276, Address: 0x2d88a0, Func Offset: 0x640
	// Line 2280, Address: 0x2d891c, Func Offset: 0x6bc
	// Line 2281, Address: 0x2d89ac, Func Offset: 0x74c
	// Line 2282, Address: 0x2d8a2c, Func Offset: 0x7cc
	// Line 2281, Address: 0x2d8a38, Func Offset: 0x7d8
	// Line 2282, Address: 0x2d8a48, Func Offset: 0x7e8
	// Line 2283, Address: 0x2d8abc, Func Offset: 0x85c
	// Line 2284, Address: 0x2d8b38, Func Offset: 0x8d8
	// Line 2283, Address: 0x2d8b44, Func Offset: 0x8e4
	// Line 2284, Address: 0x2d8b54, Func Offset: 0x8f4
	// Line 2285, Address: 0x2d8bb8, Func Offset: 0x958
	// Line 2287, Address: 0x2d8c38, Func Offset: 0x9d8
	// Func End, Address: 0x2d8c6c, Func Offset: 0xa0c
}

// setup_popper_emitter__19@unnamed@zWad2_cpp@FRQ219@unnamed@zWad2_cpp@11popper_data
// Start address: 0x2d8c70
uint8 setup_popper_emitter(popper_data& popper)
{
	float32* weight;
	xModelInstance* model;
	RpGeometry* geom;
	xVec3* vert;
	RpTriangle* tri;
	float32* end;
	xVec3& a;
	xVec3& b;
	xVec3& c;
	// Line 2126, Address: 0x2d8c70, Func Offset: 0
	// Line 2127, Address: 0x2d8c7c, Func Offset: 0xc
	// Line 2129, Address: 0x2d8cb0, Func Offset: 0x40
	// Line 2138, Address: 0x2d8cb8, Func Offset: 0x48
	// Line 2142, Address: 0x2d8cc8, Func Offset: 0x58
	// Line 2143, Address: 0x2d8ccc, Func Offset: 0x5c
	// Line 2144, Address: 0x2d8cd0, Func Offset: 0x60
	// Line 2145, Address: 0x2d8cd4, Func Offset: 0x64
	// Line 2164, Address: 0x2d8ce8, Func Offset: 0x78
	// Line 2145, Address: 0x2d8cec, Func Offset: 0x7c
	// Line 2164, Address: 0x2d8cf0, Func Offset: 0x80
	// Line 2145, Address: 0x2d8cf4, Func Offset: 0x84
	// Line 2148, Address: 0x2d8d08, Func Offset: 0x98
	// Line 2149, Address: 0x2d8d14, Func Offset: 0xa4
	// Line 2152, Address: 0x2d8d24, Func Offset: 0xb4
	// Line 2155, Address: 0x2d8d2c, Func Offset: 0xbc
	// Line 2156, Address: 0x2d8d30, Func Offset: 0xc0
	// Line 2155, Address: 0x2d8d34, Func Offset: 0xc4
	// Line 2159, Address: 0x2d8d38, Func Offset: 0xc8
	// Line 2161, Address: 0x2d8d50, Func Offset: 0xe0
	// Line 2162, Address: 0x2d8d54, Func Offset: 0xe4
	// Line 2164, Address: 0x2d8d58, Func Offset: 0xe8
	// Line 2163, Address: 0x2d8d5c, Func Offset: 0xec
	// Line 2164, Address: 0x2d8d60, Func Offset: 0xf0
	// Line 2161, Address: 0x2d8d64, Func Offset: 0xf4
	// Line 2162, Address: 0x2d8d6c, Func Offset: 0xfc
	// Line 2161, Address: 0x2d8d74, Func Offset: 0x104
	// Line 2162, Address: 0x2d8d78, Func Offset: 0x108
	// Line 2163, Address: 0x2d8d7c, Func Offset: 0x10c
	// Line 2161, Address: 0x2d8d80, Func Offset: 0x110
	// Line 2163, Address: 0x2d8d84, Func Offset: 0x114
	// Line 2162, Address: 0x2d8d88, Func Offset: 0x118
	// Line 2163, Address: 0x2d8d8c, Func Offset: 0x11c
	// Line 2164, Address: 0x2d8d90, Func Offset: 0x120
	// Line 2166, Address: 0x2d8e68, Func Offset: 0x1f8
	// Line 2164, Address: 0x2d8e6c, Func Offset: 0x1fc
	// Line 2165, Address: 0x2d8ebc, Func Offset: 0x24c
	// Line 2166, Address: 0x2d8ec0, Func Offset: 0x250
	// Line 2164, Address: 0x2d8ec4, Func Offset: 0x254
	// Line 2166, Address: 0x2d8ec8, Func Offset: 0x258
	// Line 2130, Address: 0x2d8ed8, Func Offset: 0x268
	// Line 2139, Address: 0x2d8ee0, Func Offset: 0x270
	// Line 2168, Address: 0x2d8ee8, Func Offset: 0x278
	// Line 2169, Address: 0x2d8ef4, Func Offset: 0x284
	// Line 2171, Address: 0x2d8f00, Func Offset: 0x290
	// Line 2178, Address: 0x2d8f08, Func Offset: 0x298
	// Func End, Address: 0x2d8f18, Func Offset: 0x2a8
}

// zFX_SpawnBubbleBlast__FPC5xVec3Uifff
// Start address: 0x2d8f20
void zFX_SpawnBubbleBlast(xVec3* pos, uint32 num, float32 radius, float32 blast_vel, float32 rand_vel)
{
	xVec3* buffer;
	xVec3* itl;
	xVec3* itv;
	xVec3* end;
	float32 ang;
	float32 uz;
	xVec3 rvel;
	// Line 1973, Address: 0x2d8f20, Func Offset: 0
	// Line 1974, Address: 0x2d8f24, Func Offset: 0x4
	// Line 1973, Address: 0x2d8f28, Func Offset: 0x8
	// Line 1974, Address: 0x2d8f2c, Func Offset: 0xc
	// Line 1973, Address: 0x2d8f30, Func Offset: 0x10
	// Line 1974, Address: 0x2d8f34, Func Offset: 0x14
	// Line 1973, Address: 0x2d8f38, Func Offset: 0x18
	// Line 1974, Address: 0x2d8f50, Func Offset: 0x30
	// Line 1973, Address: 0x2d8f54, Func Offset: 0x34
	// Line 1974, Address: 0x2d8f84, Func Offset: 0x64
	// Line 1975, Address: 0x2d8f8c, Func Offset: 0x6c
	// Line 1978, Address: 0x2d8f98, Func Offset: 0x78
	// Line 1979, Address: 0x2d8fb4, Func Offset: 0x94
	// Line 1982, Address: 0x2d8fd0, Func Offset: 0xb0
	// Line 1983, Address: 0x2d9020, Func Offset: 0x100
	// Line 1984, Address: 0x2d9080, Func Offset: 0x160
	// Line 1985, Address: 0x2d9084, Func Offset: 0x164
	// Line 1984, Address: 0x2d9088, Func Offset: 0x168
	// Line 1985, Address: 0x2d909c, Func Offset: 0x17c
	// Line 1988, Address: 0x2d90b4, Func Offset: 0x194
	// Line 1985, Address: 0x2d90bc, Func Offset: 0x19c
	// Line 1986, Address: 0x2d90cc, Func Offset: 0x1ac
	// Line 1987, Address: 0x2d917c, Func Offset: 0x25c
	// Line 1988, Address: 0x2d919c, Func Offset: 0x27c
	// Line 1989, Address: 0x2d92b0, Func Offset: 0x390
	// Line 1988, Address: 0x2d92b4, Func Offset: 0x394
	// Line 1990, Address: 0x2d92b8, Func Offset: 0x398
	// Line 1988, Address: 0x2d92bc, Func Offset: 0x39c
	// Line 1989, Address: 0x2d92c0, Func Offset: 0x3a0
	// Line 1988, Address: 0x2d92c8, Func Offset: 0x3a8
	// Line 1989, Address: 0x2d92d4, Func Offset: 0x3b4
	// Line 1990, Address: 0x2d934c, Func Offset: 0x42c
	// Line 1992, Address: 0x2d9354, Func Offset: 0x434
	// Line 1993, Address: 0x2d936c, Func Offset: 0x44c
	// Line 1994, Address: 0x2d9374, Func Offset: 0x454
	// Func End, Address: 0x2d93bc, Func Offset: 0x49c
}

// zFX_SpawnBubbleRing__FPC5xVec3UifffP5xVec3
// Start address: 0x2d93c0
void zFX_SpawnBubbleRing(xVec3* pos, uint32 num, float32 rang, float32 bvel, float32 rvel, xVec3* norm)
{
	xVec3* posbuf;
	xVec3* velbuf;
	xVec3* pp;
	xVec3* vp;
	uint32 j;
	float32 ang;
	xMat3x3 upMat;
	xMat3x3 normMat;
	// Line 1932, Address: 0x2d93c0, Func Offset: 0
	// Line 1933, Address: 0x2d93ec, Func Offset: 0x2c
	// Line 1932, Address: 0x2d93f0, Func Offset: 0x30
	// Line 1933, Address: 0x2d93f4, Func Offset: 0x34
	// Line 1932, Address: 0x2d93f8, Func Offset: 0x38
	// Line 1933, Address: 0x2d93fc, Func Offset: 0x3c
	// Line 1932, Address: 0x2d9400, Func Offset: 0x40
	// Line 1933, Address: 0x2d942c, Func Offset: 0x6c
	// Line 1934, Address: 0x2d9438, Func Offset: 0x78
	// Line 1937, Address: 0x2d9440, Func Offset: 0x80
	// Line 1941, Address: 0x2d9444, Func Offset: 0x84
	// Line 1937, Address: 0x2d9448, Func Offset: 0x88
	// Line 1939, Address: 0x2d944c, Func Offset: 0x8c
	// Line 1937, Address: 0x2d9450, Func Offset: 0x90
	// Line 1941, Address: 0x2d9454, Func Offset: 0x94
	// Line 1937, Address: 0x2d9458, Func Offset: 0x98
	// Line 1941, Address: 0x2d945c, Func Offset: 0x9c
	// Line 1942, Address: 0x2d948c, Func Offset: 0xcc
	// Line 1944, Address: 0x2d94a0, Func Offset: 0xe0
	// Line 1945, Address: 0x2d9514, Func Offset: 0x154
	// Line 1946, Address: 0x2d9560, Func Offset: 0x1a0
	// Line 1948, Address: 0x2d9570, Func Offset: 0x1b0
	// Line 1950, Address: 0x2d9580, Func Offset: 0x1c0
	// Line 1951, Address: 0x2d95d0, Func Offset: 0x210
	// Line 1952, Address: 0x2d9620, Func Offset: 0x260
	// Line 1956, Address: 0x2d9658, Func Offset: 0x298
	// Line 1952, Address: 0x2d9664, Func Offset: 0x2a4
	// Line 1956, Address: 0x2d967c, Func Offset: 0x2bc
	// Line 1957, Address: 0x2d9684, Func Offset: 0x2c4
	// Line 1960, Address: 0x2d9694, Func Offset: 0x2d4
	// Line 1961, Address: 0x2d96a0, Func Offset: 0x2e0
	// Line 1963, Address: 0x2d96ec, Func Offset: 0x32c
	// Line 1965, Address: 0x2d9700, Func Offset: 0x340
	// Line 1967, Address: 0x2d9718, Func Offset: 0x358
	// Line 1970, Address: 0x2d9720, Func Offset: 0x360
	// Func End, Address: 0x2d9770, Func Offset: 0x3b0
}

// zFX_SpawnBubbleSlam__FPC5xVec3Uifff
// Start address: 0x2d9770
void zFX_SpawnBubbleSlam(xVec3* pos, uint32 num, float32 rang, float32 bvel, float32 rvel)
{
	xVec3* posbuf;
	xVec3* velbuf;
	xVec3* pp;
	xVec3* vp;
	uint32 j;
	float32 ang;
	// Line 1899, Address: 0x2d9770, Func Offset: 0
	// Line 1900, Address: 0x2d9794, Func Offset: 0x24
	// Line 1899, Address: 0x2d9798, Func Offset: 0x28
	// Line 1900, Address: 0x2d979c, Func Offset: 0x2c
	// Line 1899, Address: 0x2d97a0, Func Offset: 0x30
	// Line 1900, Address: 0x2d97a4, Func Offset: 0x34
	// Line 1899, Address: 0x2d97a8, Func Offset: 0x38
	// Line 1900, Address: 0x2d97c4, Func Offset: 0x54
	// Line 1901, Address: 0x2d97d0, Func Offset: 0x60
	// Line 1904, Address: 0x2d97d8, Func Offset: 0x68
	// Line 1908, Address: 0x2d97dc, Func Offset: 0x6c
	// Line 1904, Address: 0x2d97e0, Func Offset: 0x70
	// Line 1906, Address: 0x2d97e4, Func Offset: 0x74
	// Line 1904, Address: 0x2d97e8, Func Offset: 0x78
	// Line 1908, Address: 0x2d97ec, Func Offset: 0x7c
	// Line 1904, Address: 0x2d97f0, Func Offset: 0x80
	// Line 1908, Address: 0x2d97f4, Func Offset: 0x84
	// Line 1909, Address: 0x2d980c, Func Offset: 0x9c
	// Line 1910, Address: 0x2d9810, Func Offset: 0xa0
	// Line 1909, Address: 0x2d9814, Func Offset: 0xa4
	// Line 1910, Address: 0x2d9818, Func Offset: 0xa8
	// Line 1909, Address: 0x2d981c, Func Offset: 0xac
	// Line 1912, Address: 0x2d9820, Func Offset: 0xb0
	// Line 1910, Address: 0x2d9828, Func Offset: 0xb8
	// Line 1912, Address: 0x2d982c, Func Offset: 0xbc
	// Line 1909, Address: 0x2d9830, Func Offset: 0xc0
	// Line 1910, Address: 0x2d983c, Func Offset: 0xcc
	// Line 1912, Address: 0x2d9844, Func Offset: 0xd4
	// Line 1913, Address: 0x2d98b8, Func Offset: 0x148
	// Line 1914, Address: 0x2d9918, Func Offset: 0x1a8
	// Line 1916, Address: 0x2d9928, Func Offset: 0x1b8
	// Line 1918, Address: 0x2d9938, Func Offset: 0x1c8
	// Line 1919, Address: 0x2d999c, Func Offset: 0x22c
	// Line 1920, Address: 0x2d9a00, Func Offset: 0x290
	// Line 1921, Address: 0x2d9a48, Func Offset: 0x2d8
	// Line 1920, Address: 0x2d9a54, Func Offset: 0x2e4
	// Line 1921, Address: 0x2d9a74, Func Offset: 0x304
	// Line 1923, Address: 0x2d9a7c, Func Offset: 0x30c
	// Line 1925, Address: 0x2d9a94, Func Offset: 0x324
	// Line 1928, Address: 0x2d9a9c, Func Offset: 0x32c
	// Func End, Address: 0x2d9ad8, Func Offset: 0x368
}

// zFX_SpawnBubbleWall__Fv
// Start address: 0x2d9ae0
void zFX_SpawnBubbleWall()
{
	RwCamera* camera;
	RwMatrixTag* mat;
	xVec3* posbuf;
	xVec3* velbuf;
	xVec3* pp;
	xVec3* vp;
	uint32 i;
	// Line 1836, Address: 0x2d9ae0, Func Offset: 0
	// Line 1837, Address: 0x2d9ae4, Func Offset: 0x4
	// Line 1836, Address: 0x2d9ae8, Func Offset: 0x8
	// Line 1837, Address: 0x2d9b28, Func Offset: 0x48
	// Line 1838, Address: 0x2d9b2c, Func Offset: 0x4c
	// Line 1841, Address: 0x2d9b34, Func Offset: 0x54
	// Line 1845, Address: 0x2d9b38, Func Offset: 0x58
	// Line 1846, Address: 0x2d9b48, Func Offset: 0x68
	// Line 1870, Address: 0x2d9b50, Func Offset: 0x70
	// Line 1849, Address: 0x2d9b5c, Func Offset: 0x7c
	// Line 1870, Address: 0x2d9b60, Func Offset: 0x80
	// Line 1868, Address: 0x2d9b64, Func Offset: 0x84
	// Line 1869, Address: 0x2d9b68, Func Offset: 0x88
	// Line 1870, Address: 0x2d9b6c, Func Offset: 0x8c
	// Line 1871, Address: 0x2d9b98, Func Offset: 0xb8
	// Line 1872, Address: 0x2d9c48, Func Offset: 0x168
	// Line 1873, Address: 0x2d9cf8, Func Offset: 0x218
	// Line 1876, Address: 0x2d9d90, Func Offset: 0x2b0
	// Line 1873, Address: 0x2d9d98, Func Offset: 0x2b8
	// Line 1877, Address: 0x2d9db4, Func Offset: 0x2d4
	// Line 1876, Address: 0x2d9dbc, Func Offset: 0x2dc
	// Line 1877, Address: 0x2d9dcc, Func Offset: 0x2ec
	// Line 1876, Address: 0x2d9dd4, Func Offset: 0x2f4
	// Line 1877, Address: 0x2d9dd8, Func Offset: 0x2f8
	// Line 1876, Address: 0x2d9de0, Func Offset: 0x300
	// Line 1877, Address: 0x2d9de4, Func Offset: 0x304
	// Line 1879, Address: 0x2d9df4, Func Offset: 0x314
	// Line 1880, Address: 0x2d9e48, Func Offset: 0x368
	// Line 1881, Address: 0x2d9e9c, Func Offset: 0x3bc
	// Line 1882, Address: 0x2d9ee0, Func Offset: 0x400
	// Line 1881, Address: 0x2d9eec, Func Offset: 0x40c
	// Line 1882, Address: 0x2d9f00, Func Offset: 0x420
	// Line 1884, Address: 0x2d9f08, Func Offset: 0x428
	// Line 1886, Address: 0x2d9f20, Func Offset: 0x440
	// Line 1889, Address: 0x2d9f28, Func Offset: 0x448
	// Func End, Address: 0x2d9f70, Func Offset: 0x490
}

// zFX_SpawnBubbleMenuTrail__FPC5xVec3UiPC5xVec3PC5xVec3
// Start address: 0x2d9f70
void zFX_SpawnBubbleMenuTrail(xVec3* pos, uint32 num, xVec3* pos_rnd, xVec3* vel_rnd)
{
	xVec3* posbuf;
	xVec3* velbuf;
	xVec3* pp;
	xVec3* vp;
	int32 j;
	// Line 1795, Address: 0x2d9f70, Func Offset: 0
	// Line 1797, Address: 0x2d9fa8, Func Offset: 0x38
	// Line 1799, Address: 0x2d9fb0, Func Offset: 0x40
	// Line 1802, Address: 0x2d9fb8, Func Offset: 0x48
	// Line 1803, Address: 0x2d9fcc, Func Offset: 0x5c
	// Line 1806, Address: 0x2d9fd4, Func Offset: 0x64
	// Line 1810, Address: 0x2d9fd8, Func Offset: 0x68
	// Line 1806, Address: 0x2d9fdc, Func Offset: 0x6c
	// Line 1808, Address: 0x2d9fe0, Func Offset: 0x70
	// Line 1806, Address: 0x2d9fe4, Func Offset: 0x74
	// Line 1810, Address: 0x2d9fe8, Func Offset: 0x78
	// Line 1806, Address: 0x2d9fec, Func Offset: 0x7c
	// Line 1810, Address: 0x2d9ff0, Func Offset: 0x80
	// Line 1811, Address: 0x2d9ff8, Func Offset: 0x88
	// Line 1812, Address: 0x2da00c, Func Offset: 0x9c
	// Line 1813, Address: 0x2da074, Func Offset: 0x104
	// Line 1814, Address: 0x2da0d8, Func Offset: 0x168
	// Line 1816, Address: 0x2da13c, Func Offset: 0x1cc
	// Line 1817, Address: 0x2da194, Func Offset: 0x224
	// Line 1818, Address: 0x2da1ec, Func Offset: 0x27c
	// Line 1819, Address: 0x2da234, Func Offset: 0x2c4
	// Line 1818, Address: 0x2da240, Func Offset: 0x2d0
	// Line 1819, Address: 0x2da254, Func Offset: 0x2e4
	// Line 1821, Address: 0x2da27c, Func Offset: 0x30c
	// Line 1823, Address: 0x2da28c, Func Offset: 0x31c
	// Line 1826, Address: 0x2da294, Func Offset: 0x324
	// Func End, Address: 0x2da2c4, Func Offset: 0x354
}

// zFX_SpawnBubbleTrail__FPC5xVec3PC5xVec3PC5xVec3PC5xVec3UiPC5xVec3PC5xVec3f
// Start address: 0x2da2d0
void zFX_SpawnBubbleTrail(xVec3* p1, xVec3* p2, xVec3* vel1, xVec3* vel2, uint32 num, xVec3* pos_rnd, xVec3* vel_rnd, float32 scale)
{
	xVec3* posbuf;
	xVec3* velbuf;
	xVec3 offset;
	xVec3 vel_offset;
	xVec3* pp;
	xVec3* vp;
	int32 j;
	// Line 1757, Address: 0x2da2d0, Func Offset: 0
	// Line 1758, Address: 0x2da31c, Func Offset: 0x4c
	// Line 1760, Address: 0x2da324, Func Offset: 0x54
	// Line 1763, Address: 0x2da32c, Func Offset: 0x5c
	// Line 1764, Address: 0x2da33c, Func Offset: 0x6c
	// Line 1769, Address: 0x2da348, Func Offset: 0x78
	// Line 1767, Address: 0x2da34c, Func Offset: 0x7c
	// Line 1769, Address: 0x2da350, Func Offset: 0x80
	// Line 1767, Address: 0x2da354, Func Offset: 0x84
	// Line 1770, Address: 0x2da35c, Func Offset: 0x8c
	// Line 1769, Address: 0x2da360, Func Offset: 0x90
	// Line 1767, Address: 0x2da364, Func Offset: 0x94
	// Line 1769, Address: 0x2da368, Func Offset: 0x98
	// Line 1770, Address: 0x2da374, Func Offset: 0xa4
	// Line 1769, Address: 0x2da378, Func Offset: 0xa8
	// Line 1771, Address: 0x2da384, Func Offset: 0xb4
	// Line 1770, Address: 0x2da388, Func Offset: 0xb8
	// Line 1769, Address: 0x2da38c, Func Offset: 0xbc
	// Line 1770, Address: 0x2da390, Func Offset: 0xc0
	// Line 1767, Address: 0x2da394, Func Offset: 0xc4
	// Line 1769, Address: 0x2da398, Func Offset: 0xc8
	// Line 1767, Address: 0x2da39c, Func Offset: 0xcc
	// Line 1770, Address: 0x2da3a0, Func Offset: 0xd0
	// Line 1772, Address: 0x2da3a8, Func Offset: 0xd8
	// Line 1773, Address: 0x2da3ac, Func Offset: 0xdc
	// Line 1769, Address: 0x2da3b4, Func Offset: 0xe4
	// Line 1770, Address: 0x2da3b8, Func Offset: 0xe8
	// Line 1769, Address: 0x2da3bc, Func Offset: 0xec
	// Line 1770, Address: 0x2da3c0, Func Offset: 0xf0
	// Line 1769, Address: 0x2da3d4, Func Offset: 0x104
	// Line 1770, Address: 0x2da3e4, Func Offset: 0x114
	// Line 1769, Address: 0x2da3e8, Func Offset: 0x118
	// Line 1770, Address: 0x2da3ec, Func Offset: 0x11c
	// Line 1769, Address: 0x2da3f4, Func Offset: 0x124
	// Line 1770, Address: 0x2da3fc, Func Offset: 0x12c
	// Line 1769, Address: 0x2da408, Func Offset: 0x138
	// Line 1770, Address: 0x2da410, Func Offset: 0x140
	// Line 1769, Address: 0x2da414, Func Offset: 0x144
	// Line 1770, Address: 0x2da418, Func Offset: 0x148
	// Line 1769, Address: 0x2da420, Func Offset: 0x150
	// Line 1770, Address: 0x2da428, Func Offset: 0x158
	// Line 1769, Address: 0x2da42c, Func Offset: 0x15c
	// Line 1770, Address: 0x2da438, Func Offset: 0x168
	// Line 1769, Address: 0x2da444, Func Offset: 0x174
	// Line 1770, Address: 0x2da448, Func Offset: 0x178
	// Line 1769, Address: 0x2da44c, Func Offset: 0x17c
	// Line 1770, Address: 0x2da450, Func Offset: 0x180
	// Line 1773, Address: 0x2da45c, Func Offset: 0x18c
	// Line 1774, Address: 0x2da468, Func Offset: 0x198
	// Line 1776, Address: 0x2da4ac, Func Offset: 0x1dc
	// Line 1775, Address: 0x2da4b0, Func Offset: 0x1e0
	// Line 1776, Address: 0x2da4b8, Func Offset: 0x1e8
	// Line 1775, Address: 0x2da4bc, Func Offset: 0x1ec
	// Line 1776, Address: 0x2da4c4, Func Offset: 0x1f4
	// Line 1775, Address: 0x2da4c8, Func Offset: 0x1f8
	// Line 1776, Address: 0x2da4d4, Func Offset: 0x204
	// Line 1775, Address: 0x2da4d8, Func Offset: 0x208
	// Line 1776, Address: 0x2da4ec, Func Offset: 0x21c
	// Line 1775, Address: 0x2da4f4, Func Offset: 0x224
	// Line 1776, Address: 0x2da4f8, Func Offset: 0x228
	// Line 1775, Address: 0x2da504, Func Offset: 0x234
	// Line 1776, Address: 0x2da514, Func Offset: 0x244
	// Line 1775, Address: 0x2da520, Func Offset: 0x250
	// Line 1776, Address: 0x2da524, Func Offset: 0x254
	// Line 1775, Address: 0x2da530, Func Offset: 0x260
	// Line 1776, Address: 0x2da544, Func Offset: 0x274
	// Line 1775, Address: 0x2da548, Func Offset: 0x278
	// Line 1776, Address: 0x2da554, Func Offset: 0x284
	// Line 1775, Address: 0x2da558, Func Offset: 0x288
	// Line 1776, Address: 0x2da55c, Func Offset: 0x28c
	// Line 1775, Address: 0x2da560, Func Offset: 0x290
	// Line 1776, Address: 0x2da568, Func Offset: 0x298
	// Line 1775, Address: 0x2da56c, Func Offset: 0x29c
	// Line 1776, Address: 0x2da574, Func Offset: 0x2a4
	// Line 1775, Address: 0x2da57c, Func Offset: 0x2ac
	// Line 1776, Address: 0x2da588, Func Offset: 0x2b8
	// Line 1775, Address: 0x2da58c, Func Offset: 0x2bc
	// Line 1776, Address: 0x2da594, Func Offset: 0x2c4
	// Line 1775, Address: 0x2da5a0, Func Offset: 0x2d0
	// Line 1776, Address: 0x2da5b8, Func Offset: 0x2e8
	// Line 1775, Address: 0x2da5cc, Func Offset: 0x2fc
	// Line 1776, Address: 0x2da5d0, Func Offset: 0x300
	// Line 1775, Address: 0x2da5d4, Func Offset: 0x304
	// Line 1776, Address: 0x2da5d8, Func Offset: 0x308
	// Line 1775, Address: 0x2da5f4, Func Offset: 0x324
	// Line 1776, Address: 0x2da600, Func Offset: 0x330
	// Line 1775, Address: 0x2da608, Func Offset: 0x338
	// Line 1776, Address: 0x2da60c, Func Offset: 0x33c
	// Line 1775, Address: 0x2da620, Func Offset: 0x350
	// Line 1776, Address: 0x2da628, Func Offset: 0x358
	// Line 1777, Address: 0x2da640, Func Offset: 0x370
	// Line 1778, Address: 0x2da6a8, Func Offset: 0x3d8
	// Line 1779, Address: 0x2da70c, Func Offset: 0x43c
	// Line 1781, Address: 0x2da770, Func Offset: 0x4a0
	// Line 1782, Address: 0x2da7d8, Func Offset: 0x508
	// Line 1783, Address: 0x2da83c, Func Offset: 0x56c
	// Line 1784, Address: 0x2da884, Func Offset: 0x5b4
	// Line 1783, Address: 0x2da890, Func Offset: 0x5c0
	// Line 1784, Address: 0x2da8b0, Func Offset: 0x5e0
	// Line 1786, Address: 0x2da8d8, Func Offset: 0x608
	// Line 1788, Address: 0x2da8ec, Func Offset: 0x61c
	// Line 1791, Address: 0x2da8f4, Func Offset: 0x624
	// Func End, Address: 0x2da928, Func Offset: 0x658
}

// zFX_SpawnBubbleTrail__FPC5xVec3PC5xVec3UiPC5xVec3PC5xVec3
// Start address: 0x2da930
void zFX_SpawnBubbleTrail(xVec3* p1, xVec3* p2, uint32 num, xVec3* pos_rnd, xVec3* vel_rnd)
{
	xVec3* posbuf;
	xVec3* velbuf;
	xVec3 offset;
	xVec3* pp;
	xVec3* vp;
	int32 j;
	// Line 1720, Address: 0x2da930, Func Offset: 0
	// Line 1721, Address: 0x2da96c, Func Offset: 0x3c
	// Line 1723, Address: 0x2da974, Func Offset: 0x44
	// Line 1726, Address: 0x2da97c, Func Offset: 0x4c
	// Line 1727, Address: 0x2da98c, Func Offset: 0x5c
	// Line 1732, Address: 0x2da998, Func Offset: 0x68
	// Line 1730, Address: 0x2da99c, Func Offset: 0x6c
	// Line 1732, Address: 0x2da9a0, Func Offset: 0x70
	// Line 1730, Address: 0x2da9a4, Func Offset: 0x74
	// Line 1732, Address: 0x2da9a8, Func Offset: 0x78
	// Line 1730, Address: 0x2da9ac, Func Offset: 0x7c
	// Line 1732, Address: 0x2da9b0, Func Offset: 0x80
	// Line 1730, Address: 0x2da9b4, Func Offset: 0x84
	// Line 1732, Address: 0x2da9b8, Func Offset: 0x88
	// Line 1733, Address: 0x2da9c4, Func Offset: 0x94
	// Line 1732, Address: 0x2da9c8, Func Offset: 0x98
	// Line 1735, Address: 0x2da9d4, Func Offset: 0xa4
	// Line 1730, Address: 0x2da9d8, Func Offset: 0xa8
	// Line 1735, Address: 0x2da9dc, Func Offset: 0xac
	// Line 1732, Address: 0x2da9e0, Func Offset: 0xb0
	// Line 1730, Address: 0x2da9e4, Func Offset: 0xb4
	// Line 1732, Address: 0x2da9e8, Func Offset: 0xb8
	// Line 1734, Address: 0x2da9ec, Func Offset: 0xbc
	// Line 1732, Address: 0x2da9f0, Func Offset: 0xc0
	// Line 1735, Address: 0x2daa34, Func Offset: 0x104
	// Line 1736, Address: 0x2daa44, Func Offset: 0x114
	// Line 1737, Address: 0x2dab44, Func Offset: 0x214
	// Line 1738, Address: 0x2dabac, Func Offset: 0x27c
	// Line 1739, Address: 0x2dac10, Func Offset: 0x2e0
	// Line 1741, Address: 0x2dac74, Func Offset: 0x344
	// Line 1742, Address: 0x2daccc, Func Offset: 0x39c
	// Line 1743, Address: 0x2dad24, Func Offset: 0x3f4
	// Line 1744, Address: 0x2dad6c, Func Offset: 0x43c
	// Line 1743, Address: 0x2dad78, Func Offset: 0x448
	// Line 1744, Address: 0x2dad8c, Func Offset: 0x45c
	// Line 1746, Address: 0x2dadb4, Func Offset: 0x484
	// Line 1748, Address: 0x2dadcc, Func Offset: 0x49c
	// Line 1751, Address: 0x2dadd4, Func Offset: 0x4a4
	// Func End, Address: 0x2dae04, Func Offset: 0x4d4
}

// zFX_SpawnBubbleTrail__FPC5xVec3UiPC5xVec3PC5xVec3
// Start address: 0x2dae10
void zFX_SpawnBubbleTrail(xVec3* pos, uint32 num, xVec3* pos_rnd, xVec3* vel_rnd)
{
	xVec3* posbuf;
	xVec3* velbuf;
	xVec3* pp;
	xVec3* vp;
	int32 j;
	// Line 1645, Address: 0x2dae10, Func Offset: 0
	// Line 1647, Address: 0x2dae48, Func Offset: 0x38
	// Line 1651, Address: 0x2dae50, Func Offset: 0x40
	// Line 1653, Address: 0x2dae58, Func Offset: 0x48
	// Line 1656, Address: 0x2dae60, Func Offset: 0x50
	// Line 1657, Address: 0x2dae74, Func Offset: 0x64
	// Line 1660, Address: 0x2dae7c, Func Offset: 0x6c
	// Line 1664, Address: 0x2dae80, Func Offset: 0x70
	// Line 1660, Address: 0x2dae84, Func Offset: 0x74
	// Line 1662, Address: 0x2dae88, Func Offset: 0x78
	// Line 1660, Address: 0x2dae8c, Func Offset: 0x7c
	// Line 1664, Address: 0x2dae90, Func Offset: 0x80
	// Line 1660, Address: 0x2dae94, Func Offset: 0x84
	// Line 1664, Address: 0x2dae98, Func Offset: 0x88
	// Line 1665, Address: 0x2daea0, Func Offset: 0x90
	// Line 1666, Address: 0x2daeb4, Func Offset: 0xa4
	// Line 1667, Address: 0x2daf1c, Func Offset: 0x10c
	// Line 1668, Address: 0x2daf80, Func Offset: 0x170
	// Line 1670, Address: 0x2dafe4, Func Offset: 0x1d4
	// Line 1671, Address: 0x2db03c, Func Offset: 0x22c
	// Line 1672, Address: 0x2db094, Func Offset: 0x284
	// Line 1673, Address: 0x2db0dc, Func Offset: 0x2cc
	// Line 1672, Address: 0x2db0e8, Func Offset: 0x2d8
	// Line 1673, Address: 0x2db0fc, Func Offset: 0x2ec
	// Line 1675, Address: 0x2db124, Func Offset: 0x314
	// Line 1677, Address: 0x2db13c, Func Offset: 0x32c
	// Line 1680, Address: 0x2db144, Func Offset: 0x334
	// Func End, Address: 0x2db174, Func Offset: 0x364
}

// zFX_SpawnBubbleTrail__FPC5xVec3Ui
// Start address: 0x2db180
void zFX_SpawnBubbleTrail(xVec3* pos, uint32 num)
{
	// Line 1641, Address: 0x2db180, Func Offset: 0
	// Func End, Address: 0x2db194, Func Offset: 0x14
}

// zFX_SpawnBubbleHit__FPC5xVec3UiPC5xVec3PC5xVec3f
// Start address: 0x2db1a0
void zFX_SpawnBubbleHit(xVec3* pos, uint32 num, xVec3* pos_rnd, xVec3* vel_rnd, float32 vel_scale)
{
	xVec3* posbuf;
	xVec3* velbuf;
	xVec3* pp;
	xVec3* vp;
	int32 j;
	// Line 1586, Address: 0x2db1a0, Func Offset: 0
	// Line 1587, Address: 0x2db1e0, Func Offset: 0x40
	// Line 1591, Address: 0x2db1e8, Func Offset: 0x48
	// Line 1593, Address: 0x2db1f0, Func Offset: 0x50
	// Line 1596, Address: 0x2db1f8, Func Offset: 0x58
	// Line 1597, Address: 0x2db20c, Func Offset: 0x6c
	// Line 1600, Address: 0x2db214, Func Offset: 0x74
	// Line 1605, Address: 0x2db218, Func Offset: 0x78
	// Line 1600, Address: 0x2db21c, Func Offset: 0x7c
	// Line 1602, Address: 0x2db220, Func Offset: 0x80
	// Line 1600, Address: 0x2db224, Func Offset: 0x84
	// Line 1605, Address: 0x2db228, Func Offset: 0x88
	// Line 1600, Address: 0x2db22c, Func Offset: 0x8c
	// Line 1605, Address: 0x2db230, Func Offset: 0x90
	// Line 1606, Address: 0x2db238, Func Offset: 0x98
	// Line 1607, Address: 0x2db24c, Func Offset: 0xac
	// Line 1608, Address: 0x2db2b4, Func Offset: 0x114
	// Line 1609, Address: 0x2db318, Func Offset: 0x178
	// Line 1617, Address: 0x2db37c, Func Offset: 0x1dc
	// Line 1618, Address: 0x2db3d0, Func Offset: 0x230
	// Line 1619, Address: 0x2db424, Func Offset: 0x284
	// Line 1620, Address: 0x2db46c, Func Offset: 0x2cc
	// Line 1619, Address: 0x2db474, Func Offset: 0x2d4
	// Line 1620, Address: 0x2db480, Func Offset: 0x2e0
	// Line 1621, Address: 0x2db488, Func Offset: 0x2e8
	// Line 1624, Address: 0x2db4a8, Func Offset: 0x308
	// Line 1625, Address: 0x2db510, Func Offset: 0x370
	// Line 1626, Address: 0x2db574, Func Offset: 0x3d4
	// Line 1627, Address: 0x2db5bc, Func Offset: 0x41c
	// Line 1626, Address: 0x2db5c8, Func Offset: 0x428
	// Line 1627, Address: 0x2db5e8, Func Offset: 0x448
	// Line 1628, Address: 0x2db610, Func Offset: 0x470
	// Line 1629, Address: 0x2db628, Func Offset: 0x488
	// Line 1632, Address: 0x2db630, Func Offset: 0x490
	// Func End, Address: 0x2db664, Func Offset: 0x4c4
}

// zFX_SpawnBubbleHit__FPC5xVec3Ui
// Start address: 0x2db670
void zFX_SpawnBubbleHit(xVec3* pos, uint32 num)
{
	// Line 1578, Address: 0x2db670, Func Offset: 0
	// Func End, Address: 0x2db688, Func Offset: 0x18
}

// zFXGooEventMelt__FP4xEnt
// Start address: 0x2db690
void zFXGooEventMelt(xEnt* ent)
{
	int32 i;
	zFXGooInstance* goo;
	int32 freezeGroup;
	// Line 1520, Address: 0x2db690, Func Offset: 0
	// Line 1521, Address: 0x2db694, Func Offset: 0x4
	// Line 1520, Address: 0x2db698, Func Offset: 0x8
	// Line 1526, Address: 0x2db69c, Func Offset: 0xc
	// Line 1527, Address: 0x2db6a0, Func Offset: 0x10
	// Line 1529, Address: 0x2db6c4, Func Offset: 0x34
	// Line 1531, Address: 0x2db6cc, Func Offset: 0x3c
	// Line 1532, Address: 0x2db6e0, Func Offset: 0x50
	// Line 1535, Address: 0x2db6ec, Func Offset: 0x5c
	// Line 1536, Address: 0x2db6f0, Func Offset: 0x60
	// Line 1535, Address: 0x2db6f4, Func Offset: 0x64
	// Line 1537, Address: 0x2db6f8, Func Offset: 0x68
	// Line 1541, Address: 0x2db704, Func Offset: 0x74
	// Line 1542, Address: 0x2db71c, Func Offset: 0x8c
	// Func End, Address: 0x2db738, Func Offset: 0xa8
}

// zFXGooEventSetFreezeDuration__FP4xEntf
// Start address: 0x2db740
void zFXGooEventSetFreezeDuration(xEnt* ent, float32 duration)
{
	int32 i;
	zFXGooInstance* goo;
	int32 freezeGroup;
	// Line 1493, Address: 0x2db740, Func Offset: 0
	// Line 1494, Address: 0x2db744, Func Offset: 0x4
	// Line 1493, Address: 0x2db748, Func Offset: 0x8
	// Line 1499, Address: 0x2db74c, Func Offset: 0xc
	// Line 1500, Address: 0x2db750, Func Offset: 0x10
	// Line 1502, Address: 0x2db778, Func Offset: 0x38
	// Line 1504, Address: 0x2db780, Func Offset: 0x40
	// Line 1505, Address: 0x2db790, Func Offset: 0x50
	// Line 1509, Address: 0x2db79c, Func Offset: 0x5c
	// Line 1510, Address: 0x2db7a0, Func Offset: 0x60
	// Line 1509, Address: 0x2db7a4, Func Offset: 0x64
	// Line 1511, Address: 0x2db7a8, Func Offset: 0x68
	// Line 1514, Address: 0x2db7b4, Func Offset: 0x74
	// Line 1515, Address: 0x2db7cc, Func Offset: 0x8c
	// Func End, Address: 0x2db7e8, Func Offset: 0xa8
}

// zFXGooEventSetWarb__FP4xEntPCf
// Start address: 0x2db7f0
void zFXGooEventSetWarb(xEnt* ent, float32* warb)
{
	int32 i;
	zFXGooInstance* goo;
	// Line 1469, Address: 0x2db7f0, Func Offset: 0
	// Line 1476, Address: 0x2db7f4, Func Offset: 0x4
	// Line 1469, Address: 0x2db7f8, Func Offset: 0x8
	// Line 1471, Address: 0x2db800, Func Offset: 0x10
	// Line 1477, Address: 0x2db808, Func Offset: 0x18
	// Line 1479, Address: 0x2db830, Func Offset: 0x40
	// Line 1480, Address: 0x2db840, Func Offset: 0x50
	// Line 1483, Address: 0x2db84c, Func Offset: 0x5c
	// Line 1485, Address: 0x2db854, Func Offset: 0x64
	// Line 1486, Address: 0x2db85c, Func Offset: 0x6c
	// Line 1488, Address: 0x2db864, Func Offset: 0x74
	// Func End, Address: 0x2db874, Func Offset: 0x84
}

// zFXGooIs__FP4xEntRfUi
// Start address: 0x2db880
int32 zFXGooIs(xEnt* obj, float32& depth, uint32 playerCheck)
{
	int32 i;
	zFXGooInstance* goo;
	xVec3* pos;
	// Line 1423, Address: 0x2db880, Func Offset: 0
	// Line 1430, Address: 0x2db884, Func Offset: 0x4
	// Line 1423, Address: 0x2db888, Func Offset: 0x8
	// Line 1431, Address: 0x2db88c, Func Offset: 0xc
	// Line 1433, Address: 0x2db8b4, Func Offset: 0x34
	// Line 1434, Address: 0x2db8c8, Func Offset: 0x48
	// Line 1437, Address: 0x2db8d4, Func Offset: 0x54
	// Line 1441, Address: 0x2db8e0, Func Offset: 0x60
	// Line 1443, Address: 0x2db8e4, Func Offset: 0x64
	// Line 1445, Address: 0x2db8f0, Func Offset: 0x70
	// Line 1441, Address: 0x2db8f8, Func Offset: 0x78
	// Line 1443, Address: 0x2db904, Func Offset: 0x84
	// Line 1445, Address: 0x2db918, Func Offset: 0x98
	// Line 1443, Address: 0x2db91c, Func Offset: 0x9c
	// Line 1445, Address: 0x2db920, Func Offset: 0xa0
	// Line 1456, Address: 0x2db934, Func Offset: 0xb4
	// Line 1463, Address: 0x2db93c, Func Offset: 0xbc
	// Line 1435, Address: 0x2db944, Func Offset: 0xc4
	// Line 1439, Address: 0x2db94c, Func Offset: 0xcc
	// Line 1447, Address: 0x2db954, Func Offset: 0xd4
	// Line 1458, Address: 0x2db95c, Func Offset: 0xdc
	// Line 1463, Address: 0x2db960, Func Offset: 0xe0
	// Line 1458, Address: 0x2db964, Func Offset: 0xe4
	// Line 1459, Address: 0x2db968, Func Offset: 0xe8
	// Line 1463, Address: 0x2db96c, Func Offset: 0xec
	// Line 1459, Address: 0x2db970, Func Offset: 0xf0
	// Line 1463, Address: 0x2db974, Func Offset: 0xf4
	// Line 1466, Address: 0x2db980, Func Offset: 0x100
	// Func End, Address: 0x2db988, Func Offset: 0x108
}

// zFXGooFreeze__FP8RpAtomicPC5xVec3P5xVec3
// Start address: 0x2db990
void zFXGooFreeze(RpAtomic* atomic, xVec3* center, xVec3* ref_parPosVec)
{
	int32 i;
	zFXGooInstance* goo;
	int32 freezeGroup;
	// Line 1343, Address: 0x2db990, Func Offset: 0
	// Line 1346, Address: 0x2db9a0, Func Offset: 0x10
	// Line 1343, Address: 0x2db9a4, Func Offset: 0x14
	// Line 1348, Address: 0x2db9b8, Func Offset: 0x28
	// Line 1343, Address: 0x2db9bc, Func Offset: 0x2c
	// Line 1348, Address: 0x2db9c0, Func Offset: 0x30
	// Line 1349, Address: 0x2db9c4, Func Offset: 0x34
	// Line 1351, Address: 0x2db9c8, Func Offset: 0x38
	// Line 1354, Address: 0x2db9e0, Func Offset: 0x50
	// Line 1356, Address: 0x2db9e8, Func Offset: 0x58
	// Line 1358, Address: 0x2db9f8, Func Offset: 0x68
	// Line 1366, Address: 0x2dba04, Func Offset: 0x74
	// Line 1370, Address: 0x2dba14, Func Offset: 0x84
	// Line 1369, Address: 0x2dba24, Func Offset: 0x94
	// Line 1370, Address: 0x2dba28, Func Offset: 0x98
	// Line 1369, Address: 0x2dba2c, Func Offset: 0x9c
	// Line 1370, Address: 0x2dba30, Func Offset: 0xa0
	// Line 1372, Address: 0x2dba38, Func Offset: 0xa8
	// Line 1410, Address: 0x2dba44, Func Offset: 0xb4
	// Line 1411, Address: 0x2dba5c, Func Offset: 0xcc
	// Line 1378, Address: 0x2dba84, Func Offset: 0xf4
	// Line 1379, Address: 0x2dba88, Func Offset: 0xf8
	// Line 1411, Address: 0x2dba8c, Func Offset: 0xfc
	// Line 1376, Address: 0x2dba90, Func Offset: 0x100
	// Line 1411, Address: 0x2dba94, Func Offset: 0x104
	// Line 1376, Address: 0x2dba9c, Func Offset: 0x10c
	// Line 1411, Address: 0x2dbaa0, Func Offset: 0x110
	// Line 1383, Address: 0x2dbacc, Func Offset: 0x13c
	// Line 1411, Address: 0x2dbad0, Func Offset: 0x140
	// Line 1383, Address: 0x2dbae4, Func Offset: 0x154
	// Line 1411, Address: 0x2dbaf0, Func Offset: 0x160
	// Line 1383, Address: 0x2dbb00, Func Offset: 0x170
	// Line 1411, Address: 0x2dbb08, Func Offset: 0x178
	// Line 1390, Address: 0x2dbb14, Func Offset: 0x184
	// Line 1411, Address: 0x2dbb34, Func Offset: 0x1a4
	// Line 1388, Address: 0x2dbb38, Func Offset: 0x1a8
	// Line 1411, Address: 0x2dbb3c, Func Offset: 0x1ac
	// Line 1393, Address: 0x2dbb48, Func Offset: 0x1b8
	// Line 1411, Address: 0x2dbb50, Func Offset: 0x1c0
	// Line 1393, Address: 0x2dbb54, Func Offset: 0x1c4
	// Line 1411, Address: 0x2dbb58, Func Offset: 0x1c8
	// Line 1398, Address: 0x2dbb70, Func Offset: 0x1e0
	// Line 1411, Address: 0x2dbb74, Func Offset: 0x1e4
	// Line 1398, Address: 0x2dbb78, Func Offset: 0x1e8
	// Line 1411, Address: 0x2dbb88, Func Offset: 0x1f8
	// Line 1404, Address: 0x2dbbb4, Func Offset: 0x224
	// Line 1411, Address: 0x2dbbc0, Func Offset: 0x230
	// Func End, Address: 0x2dbc04, Func Offset: 0x274
}

// zFXUpdate__Ff
// Start address: 0x2dbc10
void zFXUpdate(float32 dt)
{
	// Line 1334, Address: 0x2dbc10, Func Offset: 0
	// Line 1335, Address: 0x2dbc34, Func Offset: 0x24
	// Line 1334, Address: 0x2dbc38, Func Offset: 0x28
	// Line 1335, Address: 0x2dbc3c, Func Offset: 0x2c
	// Line 1334, Address: 0x2dbc40, Func Offset: 0x30
	// Line 1335, Address: 0x2dbc44, Func Offset: 0x34
	// Line 1334, Address: 0x2dbc48, Func Offset: 0x38
	// Line 1335, Address: 0x2dbc50, Func Offset: 0x40
	// Line 1336, Address: 0x2dbc80, Func Offset: 0x70
	// Line 1337, Address: 0x2dbdb0, Func Offset: 0x1a0
	// Line 1336, Address: 0x2dbdb4, Func Offset: 0x1a4
	// Line 1337, Address: 0x2dbdb8, Func Offset: 0x1a8
	// Line 1338, Address: 0x2dc0a8, Func Offset: 0x498
	// Line 1339, Address: 0x2dc0b0, Func Offset: 0x4a0
	// Func End, Address: 0x2dc0e4, Func Offset: 0x4d4
}

// zFXGooRenderAtomic__FP8RpAtomic
// Start address: 0x2dc0f0
RpAtomic* zFXGooRenderAtomic(RpAtomic* atomic)
{
	int32 i;
	zFXGooInstance* goo;
	// Line 1030, Address: 0x2dc0f0, Func Offset: 0
	// Line 1035, Address: 0x2dc0f4, Func Offset: 0x4
	// Line 1030, Address: 0x2dc0f8, Func Offset: 0x8
	// Line 1035, Address: 0x2dc0fc, Func Offset: 0xc
	// Line 1030, Address: 0x2dc100, Func Offset: 0x10
	// Line 1036, Address: 0x2dc108, Func Offset: 0x18
	// Line 1037, Address: 0x2dc10c, Func Offset: 0x1c
	// Line 1038, Address: 0x2dc12c, Func Offset: 0x3c
	// Line 1039, Address: 0x2dc130, Func Offset: 0x40
	// Line 1042, Address: 0x2dc140, Func Offset: 0x50
	// Line 1043, Address: 0x2dc14c, Func Offset: 0x5c
	// Line 1045, Address: 0x2dc170, Func Offset: 0x80
	// Line 1047, Address: 0x2dc178, Func Offset: 0x88
	// Line 1052, Address: 0x2dc198, Func Offset: 0xa8
	// Line 1329, Address: 0x2dc1a4, Func Offset: 0xb4
	// Line 1330, Address: 0x2dc1a8, Func Offset: 0xb8
	// Func End, Address: 0x2dc1b8, Func Offset: 0xc8
}

// zFXGooUpdateInstance__FP14zFXGooInstancef
// Start address: 0x2dc1c0
void zFXGooUpdateInstance(zFXGooInstance* goo, float32 dt)
{
	zFXGooState old_state;
	int32 s;
	int8 counter_text[6];
	// Line 796, Address: 0x2dc1c0, Func Offset: 0
	// Line 803, Address: 0x2dc1ec, Func Offset: 0x2c
	// Line 808, Address: 0x2dc1f0, Func Offset: 0x30
	// Line 819, Address: 0x2dc1fc, Func Offset: 0x3c
	// Line 822, Address: 0x2dc270, Func Offset: 0xb0
	// Line 823, Address: 0x2dc2a0, Func Offset: 0xe0
	// Line 825, Address: 0x2dc2f8, Func Offset: 0x138
	// Line 827, Address: 0x2dc330, Func Offset: 0x170
	// Line 829, Address: 0x2dc338, Func Offset: 0x178
	// Line 830, Address: 0x2dc38c, Func Offset: 0x1cc
	// Line 832, Address: 0x2dc390, Func Offset: 0x1d0
	// Line 834, Address: 0x2dc398, Func Offset: 0x1d8
	// Line 835, Address: 0x2dc3b4, Func Offset: 0x1f4
	// Line 836, Address: 0x2dc3c0, Func Offset: 0x200
	// Line 837, Address: 0x2dc3c8, Func Offset: 0x208
	// Line 839, Address: 0x2dc3d0, Func Offset: 0x210
	// Line 848, Address: 0x2dc3d4, Func Offset: 0x214
	// Line 850, Address: 0x2dc3dc, Func Offset: 0x21c
	// Line 857, Address: 0x2dc3e4, Func Offset: 0x224
	// Line 858, Address: 0x2dc42c, Func Offset: 0x26c
	// Line 860, Address: 0x2dc434, Func Offset: 0x274
	// Line 863, Address: 0x2dc458, Func Offset: 0x298
	// Line 865, Address: 0x2dc468, Func Offset: 0x2a8
	// Line 872, Address: 0x2dc494, Func Offset: 0x2d4
	// Line 873, Address: 0x2dc4a0, Func Offset: 0x2e0
	// Line 872, Address: 0x2dc4b4, Func Offset: 0x2f4
	// Line 873, Address: 0x2dc4b8, Func Offset: 0x2f8
	// Line 874, Address: 0x2dc4c4, Func Offset: 0x304
	// Line 875, Address: 0x2dc4d0, Func Offset: 0x310
	// Line 881, Address: 0x2dc4dc, Func Offset: 0x31c
	// Line 904, Address: 0x2dc4ec, Func Offset: 0x32c
	// Line 881, Address: 0x2dc4f4, Func Offset: 0x334
	// Line 882, Address: 0x2dc500, Func Offset: 0x340
	// Line 904, Address: 0x2dc514, Func Offset: 0x354
	// Line 905, Address: 0x2dc520, Func Offset: 0x360
	// Line 972, Address: 0x2dc53c, Func Offset: 0x37c
	// Line 973, Address: 0x2dc544, Func Offset: 0x384
	// Line 974, Address: 0x2dc5d0, Func Offset: 0x410
	// Line 977, Address: 0x2dc5e4, Func Offset: 0x424
	// Line 978, Address: 0x2dc5f0, Func Offset: 0x430
	// Line 980, Address: 0x2dc600, Func Offset: 0x440
	// Line 981, Address: 0x2dc610, Func Offset: 0x450
	// Line 982, Address: 0x2dc61c, Func Offset: 0x45c
	// Line 996, Address: 0x2dc628, Func Offset: 0x468
	// Line 809, Address: 0x2dc634, Func Offset: 0x474
	// Line 996, Address: 0x2dc638, Func Offset: 0x478
	// Line 812, Address: 0x2dc640, Func Offset: 0x480
	// Line 996, Address: 0x2dc644, Func Offset: 0x484
	// Line 813, Address: 0x2dc654, Func Offset: 0x494
	// Line 996, Address: 0x2dc658, Func Offset: 0x498
	// Line 814, Address: 0x2dc668, Func Offset: 0x4a8
	// Line 996, Address: 0x2dc670, Func Offset: 0x4b0
	// Line 814, Address: 0x2dc674, Func Offset: 0x4b4
	// Line 820, Address: 0x2dc688, Func Offset: 0x4c8
	// Line 829, Address: 0x2dc698, Func Offset: 0x4d8
	// Line 996, Address: 0x2dc6a0, Func Offset: 0x4e0
	// Line 829, Address: 0x2dc6a4, Func Offset: 0x4e4
	// Line 996, Address: 0x2dc6ac, Func Offset: 0x4ec
	// Line 829, Address: 0x2dc6b0, Func Offset: 0x4f0
	// Line 996, Address: 0x2dc6bc, Func Offset: 0x4fc
	// Line 972, Address: 0x2dc6d8, Func Offset: 0x518
	// Line 996, Address: 0x2dc6e0, Func Offset: 0x520
	// Line 987, Address: 0x2dc6e8, Func Offset: 0x528
	// Line 996, Address: 0x2dc6ec, Func Offset: 0x52c
	// Line 989, Address: 0x2dc720, Func Offset: 0x560
	// Line 996, Address: 0x2dc728, Func Offset: 0x568
	// Line 989, Address: 0x2dc738, Func Offset: 0x578
	// Line 996, Address: 0x2dc73c, Func Offset: 0x57c
	// Func End, Address: 0x2dc780, Func Offset: 0x5c0
}

// zFXGooEnable__FP14xModelInstancei
// Start address: 0x2dc780
void zFXGooEnable(xModelInstance* gooModel, int32 freezeGroup)
{
	int32 i;
	RpAtomic* atomic;
	zFXGooInstance* goo;
	int32 numverts;
	xVec3* orig_verts;
	RwRGBA* orig_colors;
	// Line 510, Address: 0x2dc780, Func Offset: 0
	// Line 524, Address: 0x2dc784, Func Offset: 0x4
	// Line 510, Address: 0x2dc788, Func Offset: 0x8
	// Line 517, Address: 0x2dc79c, Func Offset: 0x1c
	// Line 510, Address: 0x2dc7a0, Func Offset: 0x20
	// Line 517, Address: 0x2dc7a4, Func Offset: 0x24
	// Line 515, Address: 0x2dc7a8, Func Offset: 0x28
	// Line 525, Address: 0x2dc7ac, Func Offset: 0x2c
	// Line 527, Address: 0x2dc7c0, Func Offset: 0x40
	// Line 529, Address: 0x2dc7cc, Func Offset: 0x4c
	// Line 530, Address: 0x2dc7e0, Func Offset: 0x60
	// Line 533, Address: 0x2dc7ec, Func Offset: 0x6c
	// Line 536, Address: 0x2dc7f4, Func Offset: 0x74
	// Line 607, Address: 0x2dc7f8, Func Offset: 0x78
	// Line 541, Address: 0x2dc7fc, Func Offset: 0x7c
	// Line 607, Address: 0x2dc800, Func Offset: 0x80
	// Line 541, Address: 0x2dc804, Func Offset: 0x84
	// Line 607, Address: 0x2dc808, Func Offset: 0x88
	// Line 599, Address: 0x2dc80c, Func Offset: 0x8c
	// Line 607, Address: 0x2dc810, Func Offset: 0x90
	// Line 608, Address: 0x2dc81c, Func Offset: 0x9c
	// Line 607, Address: 0x2dc824, Func Offset: 0xa4
	// Line 608, Address: 0x2dc828, Func Offset: 0xa8
	// Line 619, Address: 0x2dc830, Func Offset: 0xb0
	// Line 623, Address: 0x2dc848, Func Offset: 0xc8
	// Line 637, Address: 0x2dc84c, Func Offset: 0xcc
	// Line 623, Address: 0x2dc85c, Func Offset: 0xdc
	// Line 626, Address: 0x2dc860, Func Offset: 0xe0
	// Line 627, Address: 0x2dc864, Func Offset: 0xe4
	// Line 628, Address: 0x2dc868, Func Offset: 0xe8
	// Line 629, Address: 0x2dc86c, Func Offset: 0xec
	// Line 637, Address: 0x2dc870, Func Offset: 0xf0
	// Line 640, Address: 0x2dc878, Func Offset: 0xf8
	// Line 643, Address: 0x2dc87c, Func Offset: 0xfc
	// Line 640, Address: 0x2dc88c, Func Offset: 0x10c
	// Line 641, Address: 0x2dc890, Func Offset: 0x110
	// Line 643, Address: 0x2dc894, Func Offset: 0x114
	// Line 646, Address: 0x2dc89c, Func Offset: 0x11c
	// Line 654, Address: 0x2dc8a0, Func Offset: 0x120
	// Line 647, Address: 0x2dc8a4, Func Offset: 0x124
	// Line 654, Address: 0x2dc8ac, Func Offset: 0x12c
	// Line 655, Address: 0x2dc8b0, Func Offset: 0x130
	// Line 657, Address: 0x2dc8b8, Func Offset: 0x138
	// Line 660, Address: 0x2dc8bc, Func Offset: 0x13c
	// Line 663, Address: 0x2dc8c4, Func Offset: 0x144
	// Line 665, Address: 0x2dc8d0, Func Offset: 0x150
	// Line 666, Address: 0x2dc8dc, Func Offset: 0x15c
	// Line 673, Address: 0x2dc8e4, Func Offset: 0x164
	// Func End, Address: 0x2dc918, Func Offset: 0x198
}

// zFXGooGetIceAlpha__FPC8xSurface
// Start address: 0x2dc920
float32 zFXGooGetIceAlpha(xSurface* surf)
{
	zFXGooInstance* goo;
	// Line 490, Address: 0x2dc920, Func Offset: 0
	// Line 492, Address: 0x2dc928, Func Offset: 0x8
	// Line 493, Address: 0x2dc930, Func Offset: 0x10
	// Line 496, Address: 0x2dc938, Func Offset: 0x18
	// Line 494, Address: 0x2dc964, Func Offset: 0x44
	// Line 498, Address: 0x2dc968, Func Offset: 0x48
	// Func End, Address: 0x2dc974, Func Offset: 0x54
}

// zFXGooAssocWithEnt__FP4xEnt
// Start address: 0x2dc980
void zFXGooAssocWithEnt(xEnt* ent)
{
	RpAtomic* atomic;
	zFXGooInstance* goo;
	int32 i;
	// Line 468, Address: 0x2dc980, Func Offset: 0
	// Line 473, Address: 0x2dc984, Func Offset: 0x4
	// Line 474, Address: 0x2dc98c, Func Offset: 0xc
	// Line 468, Address: 0x2dc990, Func Offset: 0x10
	// Line 474, Address: 0x2dc994, Func Offset: 0x14
	// Line 475, Address: 0x2dc998, Func Offset: 0x18
	// Line 477, Address: 0x2dc9a0, Func Offset: 0x20
	// Line 480, Address: 0x2dc9a8, Func Offset: 0x28
	// Line 485, Address: 0x2dc9bc, Func Offset: 0x3c
	// Line 487, Address: 0x2dc9dc, Func Offset: 0x5c
	// Func End, Address: 0x2dc9e4, Func Offset: 0x64
}

// FindGooForSurface__FPC8xSurface
// Start address: 0x2dc9f0
zFXGooInstance* FindGooForSurface(xSurface* surf)
{
	int32 i;
	xEnt* ent;
	// Line 441, Address: 0x2dc9f0, Func Offset: 0
	// Line 442, Address: 0x2dc9fc, Func Offset: 0xc
	// Line 443, Address: 0x2dca00, Func Offset: 0x10
	// Line 445, Address: 0x2dca0c, Func Offset: 0x1c
	// Line 447, Address: 0x2dca18, Func Offset: 0x28
	// Line 449, Address: 0x2dca20, Func Offset: 0x30
	// Line 452, Address: 0x2dca28, Func Offset: 0x38
	// Line 453, Address: 0x2dca44, Func Offset: 0x54
	// Line 454, Address: 0x2dca54, Func Offset: 0x64
	// Line 455, Address: 0x2dca58, Func Offset: 0x68
	// Func End, Address: 0x2dca60, Func Offset: 0x70
}

// zFXPatrickStun__FPC5xVec3
// Start address: 0x2dca60
void zFXPatrickStun(xVec3* pos)
{
	// Line 199, Address: 0x2dca60, Func Offset: 0
	// Line 200, Address: 0x2dca64, Func Offset: 0x4
	// Line 199, Address: 0x2dca68, Func Offset: 0x8
	// Line 200, Address: 0x2dca6c, Func Offset: 0xc
	// Line 199, Address: 0x2dca70, Func Offset: 0x10
	// Line 200, Address: 0x2dca74, Func Offset: 0x14
	// Line 201, Address: 0x2dca7c, Func Offset: 0x1c
	// Line 202, Address: 0x2dca8c, Func Offset: 0x2c
	// Line 206, Address: 0x2dca9c, Func Offset: 0x3c
	// Func End, Address: 0x2dcaac, Func Offset: 0x4c
}

// zFX_SceneReset__Fv
// Start address: 0x2dcab0
void zFX_SceneReset()
{
	// Line 134, Address: 0x2dcab0, Func Offset: 0
	// Line 135, Address: 0x2dcae4, Func Offset: 0x34
	// Line 136, Address: 0x2dcb28, Func Offset: 0x78
	// Line 135, Address: 0x2dcb2c, Func Offset: 0x7c
	// Line 136, Address: 0x2dcb30, Func Offset: 0x80
	// Line 137, Address: 0x2dcb68, Func Offset: 0xb8
	// Func End, Address: 0x2dcb70, Func Offset: 0xc0
}

// zFX_SceneExit__FP7RpWorld
// Start address: 0x2dcb70
void zFX_SceneExit(RpWorld* world)
{
	// Line 123, Address: 0x2dcb70, Func Offset: 0
	// Line 124, Address: 0x2dcb7c, Func Offset: 0xc
	// Line 125, Address: 0x2dcb84, Func Offset: 0x14
	// Line 126, Address: 0x2dcc20, Func Offset: 0xb0
	// Line 127, Address: 0x2dcc58, Func Offset: 0xe8
	// Line 128, Address: 0x2dcc60, Func Offset: 0xf0
	// Func End, Address: 0x2dcc74, Func Offset: 0x104
}

// zFX_GameInit__Fv
// Start address: 0x2dcc80
void zFX_GameInit()
{
	// Line 97, Address: 0x2dcc80, Func Offset: 0
	// Line 98, Address: 0x2dcc90, Func Offset: 0x10
	// Line 97, Address: 0x2dcc94, Func Offset: 0x14
	// Line 98, Address: 0x2dcc98, Func Offset: 0x18
	// Line 99, Address: 0x2dcd04, Func Offset: 0x84
	// Func End, Address: 0x2dcd1c, Func Offset: 0x9c
}

// on_spawn_bubble_wall__FRC10tweak_info
// Start address: 0x2dcd20
void on_spawn_bubble_wall()
{
	// Line 92, Address: 0x2dcd20, Func Offset: 0
	// Func End, Address: 0x2dcd28, Func Offset: 0x8
}

