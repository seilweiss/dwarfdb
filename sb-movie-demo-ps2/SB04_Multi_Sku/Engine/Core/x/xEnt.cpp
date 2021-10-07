



void xEntStoreCheckPoint();
void xEntInitShadow(xEnt& ent, xEntShadow& shadow);
void xEntOpacityUpdate(xEntOpacity* opacity, xEnt* ent, float32 dt);
void xEntOpacityInit(xEntOpacity* opacity);
uint8 xEntValidType(uint8 type);
xBox* xEntGetAllEntsBox();
void xEntSetNostepNormAngle(float32 angle);
void xEntCollideWalls(xEnt* p, xScene* sc, float32 dt);
void xEntCollideCeiling(xEnt* p, xScene* sc, float32 dt);
void xEntCollideFloor(xEnt* p, xScene* sc, float32 dt);
xEnt* xEntCollCheckOneEntNoDepen(xEnt* ent, void* data);
void xEntCollCheckNPCs(xEnt* p, xScene* sc, xEnt*(*hitIt)(xEnt*, xScene*, void*));
void xEntCollCheckDyns(xEnt* p, xScene* sc, xEnt*(*hitIt)(xEnt*, xScene*, void*));
void xEntCollCheckStats(xEnt* p, xScene* sc, xEnt*(*hitIt)(xEnt*, xScene*, void*));
void xEntCollCheckNPCsByGrid(xEnt* p, xScene* sc, xEnt*(*hitIt)(xEnt*, xScene*, void*));
void xEntCollCheckByGrid(xEnt* p, xScene* sc, xEnt*(*hitIt)(xEnt*, xScene*, void*));
void xEntCollCheckOneGrid(xEnt* p, xScene* sc, xEnt*(*hitIt)(xEnt*, xScene*, void*), xGrid* grid);
void xEntCollCheckEnv(xEnt* p, xScene* sc);
void xEntEndCollide(xEnt* ent, xScene* sc, float32 dt);
void xEntBeginCollide(xEnt* ent);
void xEntCollide(xEnt* ent, xScene* sc, float32 dt);
void xEntApplyPhysics(xEnt* ent, xScene* sc, float32 dt);
void xEntMove(xEnt* ent, xScene* sc, float32 dt);
void xEntMotionToMatrix(xEnt* ent, xEntFrame* frame);
void xEntDefaultTranslate(xEnt* ent, xVec3* dpos, xMat4x3* dmat);
void xEntDefaultBoundUpdate(xEnt* ent, xVec3* pos);
void xEntEndUpdate(xEnt* ent, xScene* sc, float32 dt);
void xEntBeginUpdate(xEnt* ent, float32 dt);
void xEntUpdate(xEnt* ent, xScene* sc, float32 dt);
void xEntRender(xEnt* ent);
void xEntRestorePipeline(RpAtomic* model);
void xEntRestorePipeline(xModelInstance* model);
void xEntSetupPipeline(xSurface* surf, RpAtomic* model);
void xEntSetupPipeline(xModelInstance* model);
xModelInstance* xEntLoadModel(xEnt* ent, RpAtomic* imodel, xModelInstance* reuse_instance);
void xEntReset(xEnt* ent);
void xEntLoad(xEnt* ent, xSerial* s);
void xEntSave(xEnt* ent, xSerial* s);
void xEntSetup(xEnt* ent);
void drop_stacked_entity(xEnt& ent);
void dismount_stacked_entity(xEnt& ent);
void drop_driven_stacked_entity(xEnt& ent);
void stacked_owner_destroyed(void* context);
uint8 collide_downward(xVec3& loc, xEnt&* hit, xScene& s, xEnt& ent, float32 max_dist);
void xEntInitForType(xEnt* ent);
void xEntGrowGlobalBoundingBox(xVec3* pos);
void xEntInit(xEnt* ent, xEntAsset* asset);
void xEntAddHittableFlag(xEnt* ent);
void xEntSceneExit();
void xEntSceneInit();
void reset(xEnt& ent);

// xEntStoreCheckPoint__Fv
// Start address: 0x3f6630
void xEntStoreCheckPoint()
{
	// Line 4474, Address: 0x3f6630, Func Offset: 0
	// Func End, Address: 0x3f6638, Func Offset: 0x8
}

// xEntInitShadow__FR4xEntR10xEntShadow
// Start address: 0x3f6640
void xEntInitShadow(xEnt& ent, xEntShadow& shadow)
{
	// Line 4382, Address: 0x3f6640, Func Offset: 0
	// Line 4383, Address: 0x3f6644, Func Offset: 0x4
	// Line 4386, Address: 0x3f6654, Func Offset: 0x14
	// Line 4384, Address: 0x3f6658, Func Offset: 0x18
	// Line 4385, Address: 0x3f6674, Func Offset: 0x34
	// Line 4386, Address: 0x3f6678, Func Offset: 0x38
	// Line 4388, Address: 0x3f667c, Func Offset: 0x3c
	// Line 4389, Address: 0x3f6680, Func Offset: 0x40
	// Func End, Address: 0x3f6688, Func Offset: 0x48
}

// xEntOpacityUpdate__FP11xEntOpacityP4xEntf
// Start address: 0x3f6690
void xEntOpacityUpdate(xEntOpacity* opacity, xEnt* ent, float32 dt)
{
	// Line 4361, Address: 0x3f6690, Func Offset: 0
	// Line 4362, Address: 0x3f66b0, Func Offset: 0x20
	// Line 4363, Address: 0x3f66b8, Func Offset: 0x28
	// Line 4364, Address: 0x3f66bc, Func Offset: 0x2c
	// Line 4363, Address: 0x3f66c0, Func Offset: 0x30
	// Line 4364, Address: 0x3f66c4, Func Offset: 0x34
	// Line 4363, Address: 0x3f66cc, Func Offset: 0x3c
	// Line 4364, Address: 0x3f66e0, Func Offset: 0x50
	// Line 4367, Address: 0x3f6738, Func Offset: 0xa8
	// Line 4364, Address: 0x3f673c, Func Offset: 0xac
	// Line 4367, Address: 0x3f6740, Func Offset: 0xb0
	// Line 4368, Address: 0x3f6758, Func Offset: 0xc8
	// Line 4369, Address: 0x3f6784, Func Offset: 0xf4
	// Line 4375, Address: 0x3f6790, Func Offset: 0x100
	// Line 4371, Address: 0x3f679c, Func Offset: 0x10c
	// Line 4375, Address: 0x3f67b0, Func Offset: 0x120
	// Func End, Address: 0x3f67b8, Func Offset: 0x128
}

// xEntOpacityInit__FP11xEntOpacityP4xEnt
// Start address: 0x3f67c0
void xEntOpacityInit(xEntOpacity* opacity)
{
	// Line 4355, Address: 0x3f67c0, Func Offset: 0
	// Line 4357, Address: 0x3f67c4, Func Offset: 0x4
	// Func End, Address: 0x3f67cc, Func Offset: 0xc
}

// xEntValidType__FUc
// Start address: 0x3f67d0
uint8 xEntValidType(uint8 type)
{
	// Line 4259, Address: 0x3f67d4, Func Offset: 0x4
	// Line 4285, Address: 0x3f6834, Func Offset: 0x64
	// Func End, Address: 0x3f683c, Func Offset: 0x6c
}

// xEntGetAllEntsBox__Fv
// Start address: 0x3f6840
xBox* xEntGetAllEntsBox()
{
	// Line 3635, Address: 0x3f6840, Func Offset: 0
	// Line 3636, Address: 0x3f6844, Func Offset: 0x4
	// Func End, Address: 0x3f684c, Func Offset: 0xc
}

// xEntSetNostepNormAngle__Ff
// Start address: 0x3f6850
void xEntSetNostepNormAngle(float32 angle)
{
	// Line 3626, Address: 0x3f6850, Func Offset: 0
	// Func End, Address: 0x3f6858, Func Offset: 0x8
}

// xEntCollideWalls__FP4xEntP6xScenef
// Start address: 0x3f6860
void xEntCollideWalls(xEnt* p, xScene* sc, float32 dt)
{
	xCollis* coll;
	xEnt* cent;
	uint8 sidx;
	uint8 eidx;
	uint8 idx;
	float32 sbr;
	// Line 3457, Address: 0x3f6860, Func Offset: 0
	// Line 3466, Address: 0x3f6864, Func Offset: 0x4
	// Line 3457, Address: 0x3f6868, Func Offset: 0x8
	// Line 3466, Address: 0x3f6894, Func Offset: 0x34
	// Line 3469, Address: 0x3f68b8, Func Offset: 0x58
	// Line 3470, Address: 0x3f68c8, Func Offset: 0x68
	// Line 3471, Address: 0x3f68cc, Func Offset: 0x6c
	// Line 3472, Address: 0x3f68d0, Func Offset: 0x70
	// Line 3473, Address: 0x3f68f0, Func Offset: 0x90
	// Line 3474, Address: 0x3f68f4, Func Offset: 0x94
	// Line 3473, Address: 0x3f68f8, Func Offset: 0x98
	// Line 3476, Address: 0x3f68fc, Func Offset: 0x9c
	// Line 3503, Address: 0x3f6958, Func Offset: 0xf8
	// Line 3505, Address: 0x3f6970, Func Offset: 0x110
	// Line 3507, Address: 0x3f6974, Func Offset: 0x114
	// Line 3510, Address: 0x3f69a8, Func Offset: 0x148
	// Line 3512, Address: 0x3f69c0, Func Offset: 0x160
	// Line 3513, Address: 0x3f69d0, Func Offset: 0x170
	// Line 3514, Address: 0x3f69d4, Func Offset: 0x174
	// Line 3515, Address: 0x3f69d8, Func Offset: 0x178
	// Line 3516, Address: 0x3f69f8, Func Offset: 0x198
	// Line 3517, Address: 0x3f69fc, Func Offset: 0x19c
	// Line 3516, Address: 0x3f6a00, Func Offset: 0x1a0
	// Line 3519, Address: 0x3f6a04, Func Offset: 0x1a4
	// Line 3541, Address: 0x3f6a60, Func Offset: 0x200
	// Line 3543, Address: 0x3f6a64, Func Offset: 0x204
	// Line 3546, Address: 0x3f6a98, Func Offset: 0x238
	// Line 3548, Address: 0x3f6ab0, Func Offset: 0x250
	// Line 3549, Address: 0x3f6ac0, Func Offset: 0x260
	// Line 3550, Address: 0x3f6ac4, Func Offset: 0x264
	// Line 3551, Address: 0x3f6ac8, Func Offset: 0x268
	// Line 3552, Address: 0x3f6ae8, Func Offset: 0x288
	// Line 3553, Address: 0x3f6aec, Func Offset: 0x28c
	// Line 3552, Address: 0x3f6af0, Func Offset: 0x290
	// Line 3555, Address: 0x3f6af4, Func Offset: 0x294
	// Line 3577, Address: 0x3f6b50, Func Offset: 0x2f0
	// Line 3579, Address: 0x3f6b54, Func Offset: 0x2f4
	// Line 3582, Address: 0x3f6b88, Func Offset: 0x328
	// Line 3584, Address: 0x3f6ba0, Func Offset: 0x340
	// Line 3585, Address: 0x3f6bb0, Func Offset: 0x350
	// Line 3586, Address: 0x3f6bb4, Func Offset: 0x354
	// Line 3587, Address: 0x3f6bb8, Func Offset: 0x358
	// Line 3588, Address: 0x3f6bd4, Func Offset: 0x374
	// Line 3589, Address: 0x3f6be0, Func Offset: 0x380
	// Line 3604, Address: 0x3f6c00, Func Offset: 0x3a0
	// Line 3606, Address: 0x3f6c04, Func Offset: 0x3a4
	// Line 3609, Address: 0x3f6c38, Func Offset: 0x3d8
	// Line 3610, Address: 0x3f6c4c, Func Offset: 0x3ec
	// Line 3611, Address: 0x3f6c50, Func Offset: 0x3f0
	// Line 3503, Address: 0x3f6c5c, Func Offset: 0x3fc
	// Line 3611, Address: 0x3f6c60, Func Offset: 0x400
	// Func End, Address: 0x3f6c98, Func Offset: 0x438
}

// xEntCollideCeiling__FP4xEntP6xScenef
// Start address: 0x3f6ca0
void xEntCollideCeiling(xEnt* p, xScene* sc, float32 dt)
{
	xCollis* coll;
	uint8 idx;
	xCollis* ml;
	xCollis* mf;
	xEnt* fent;
	float32 ceil_dist;
	// Line 3365, Address: 0x3f6ca0, Func Offset: 0
	// Line 3379, Address: 0x3f6ca4, Func Offset: 0x4
	// Line 3365, Address: 0x3f6ca8, Func Offset: 0x8
	// Line 3379, Address: 0x3f6ce0, Func Offset: 0x40
	// Line 3372, Address: 0x3f6ce4, Func Offset: 0x44
	// Line 3379, Address: 0x3f6ce8, Func Offset: 0x48
	// Line 3387, Address: 0x3f6d04, Func Offset: 0x64
	// Line 3388, Address: 0x3f6d18, Func Offset: 0x78
	// Line 3390, Address: 0x3f6d20, Func Offset: 0x80
	// Line 3391, Address: 0x3f6d28, Func Offset: 0x88
	// Line 3393, Address: 0x3f6d2c, Func Offset: 0x8c
	// Line 3423, Address: 0x3f6d84, Func Offset: 0xe4
	// Line 3425, Address: 0x3f6dbc, Func Offset: 0x11c
	// Line 3429, Address: 0x3f6dc0, Func Offset: 0x120
	// Line 3435, Address: 0x3f6ddc, Func Offset: 0x13c
	// Line 3436, Address: 0x3f6de4, Func Offset: 0x144
	// Line 3440, Address: 0x3f6de8, Func Offset: 0x148
	// Line 3436, Address: 0x3f6dec, Func Offset: 0x14c
	// Line 3440, Address: 0x3f6df4, Func Offset: 0x154
	// Line 3436, Address: 0x3f6df8, Func Offset: 0x158
	// Line 3440, Address: 0x3f6dfc, Func Offset: 0x15c
	// Line 3445, Address: 0x3f6e00, Func Offset: 0x160
	// Line 3440, Address: 0x3f6e04, Func Offset: 0x164
	// Line 3441, Address: 0x3f6ea0, Func Offset: 0x200
	// Line 3445, Address: 0x3f6ea8, Func Offset: 0x208
	// Line 3446, Address: 0x3f6eb0, Func Offset: 0x210
	// Line 3449, Address: 0x3f6ec4, Func Offset: 0x224
	// Line 3453, Address: 0x3f6ecc, Func Offset: 0x22c
	// Line 3412, Address: 0x3f6ed8, Func Offset: 0x238
	// Line 3453, Address: 0x3f6edc, Func Offset: 0x23c
	// Func End, Address: 0x3f6f1c, Func Offset: 0x27c
}

// xEntCollideFloor__FP4xEntP6xScenef
// Start address: 0x3f6f20
void xEntCollideFloor(xEnt* p, xScene* sc, float32 dt)
{
	xCollis* coll;
	uint8 idx;
	xCollis* ml;
	int32 stepping;
	xCollis* mf;
	xEnt* fent;
	float32 flr_dist;
	// Line 3237, Address: 0x3f6f20, Func Offset: 0
	// Line 3253, Address: 0x3f6f30, Func Offset: 0x10
	// Line 3237, Address: 0x3f6f34, Func Offset: 0x14
	// Line 3255, Address: 0x3f6f68, Func Offset: 0x48
	// Line 3244, Address: 0x3f6f6c, Func Offset: 0x4c
	// Line 3255, Address: 0x3f6f70, Func Offset: 0x50
	// Line 3262, Address: 0x3f6f94, Func Offset: 0x74
	// Line 3266, Address: 0x3f6f98, Func Offset: 0x78
	// Line 3262, Address: 0x3f6fa0, Func Offset: 0x80
	// Line 3258, Address: 0x3f6fa4, Func Offset: 0x84
	// Line 3259, Address: 0x3f6fa8, Func Offset: 0x88
	// Line 3258, Address: 0x3f6fac, Func Offset: 0x8c
	// Line 3259, Address: 0x3f6fb0, Func Offset: 0x90
	// Line 3262, Address: 0x3f6fbc, Func Offset: 0x9c
	// Line 3266, Address: 0x3f6fd0, Func Offset: 0xb0
	// Line 3267, Address: 0x3f6fe0, Func Offset: 0xc0
	// Line 3269, Address: 0x3f6fe8, Func Offset: 0xc8
	// Line 3272, Address: 0x3f6ff8, Func Offset: 0xd8
	// Line 3274, Address: 0x3f6ffc, Func Offset: 0xdc
	// Line 3275, Address: 0x3f7008, Func Offset: 0xe8
	// Line 3286, Address: 0x3f705c, Func Offset: 0x13c
	// Line 3311, Address: 0x3f70b0, Func Offset: 0x190
	// Line 3314, Address: 0x3f70c4, Func Offset: 0x1a4
	// Line 3321, Address: 0x3f70ec, Func Offset: 0x1cc
	// Line 3323, Address: 0x3f7150, Func Offset: 0x230
	// Line 3322, Address: 0x3f7154, Func Offset: 0x234
	// Line 3326, Address: 0x3f7158, Func Offset: 0x238
	// Line 3330, Address: 0x3f7174, Func Offset: 0x254
	// Line 3331, Address: 0x3f717c, Func Offset: 0x25c
	// Line 3333, Address: 0x3f7180, Func Offset: 0x260
	// Line 3331, Address: 0x3f7184, Func Offset: 0x264
	// Line 3333, Address: 0x3f718c, Func Offset: 0x26c
	// Line 3331, Address: 0x3f7190, Func Offset: 0x270
	// Line 3333, Address: 0x3f7194, Func Offset: 0x274
	// Line 3337, Address: 0x3f7198, Func Offset: 0x278
	// Line 3333, Address: 0x3f719c, Func Offset: 0x27c
	// Line 3337, Address: 0x3f7234, Func Offset: 0x314
	// Line 3338, Address: 0x3f723c, Func Offset: 0x31c
	// Line 3342, Address: 0x3f7244, Func Offset: 0x324
	// Line 3343, Address: 0x3f724c, Func Offset: 0x32c
	// Line 3346, Address: 0x3f726c, Func Offset: 0x34c
	// Line 3347, Address: 0x3f7280, Func Offset: 0x360
	// Line 3348, Address: 0x3f7290, Func Offset: 0x370
	// Line 3350, Address: 0x3f7298, Func Offset: 0x378
	// Line 3356, Address: 0x3f72ac, Func Offset: 0x38c
	// Line 3360, Address: 0x3f72b4, Func Offset: 0x394
	// Line 3304, Address: 0x3f72c0, Func Offset: 0x3a0
	// Line 3360, Address: 0x3f72c4, Func Offset: 0x3a4
	// Line 3314, Address: 0x3f72e0, Func Offset: 0x3c0
	// Line 3360, Address: 0x3f72e4, Func Offset: 0x3c4
	// Line 3318, Address: 0x3f72ec, Func Offset: 0x3cc
	// Line 3321, Address: 0x3f72f0, Func Offset: 0x3d0
	// Line 3360, Address: 0x3f72f8, Func Offset: 0x3d8
	// Line 3314, Address: 0x3f7300, Func Offset: 0x3e0
	// Line 3360, Address: 0x3f730c, Func Offset: 0x3ec
	// Line 3314, Address: 0x3f7314, Func Offset: 0x3f4
	// Line 3360, Address: 0x3f7320, Func Offset: 0x400
	// Func End, Address: 0x3f7368, Func Offset: 0x448
}

// xEntCollCheckOneEntNoDepen__FP4xEntP6xScenePv
// Start address: 0x3f7370
xEnt* xEntCollCheckOneEntNoDepen(xEnt* ent, void* data)
{
	xEnt* p;
	xCollis* coll;
	uint32 modl_coll;
	xBound tmp;
	xBound* bptr;
	uint8 ncolls;
	xVec3* upper;
	xVec3* lower;
	uint8 idx;
	float32 rsum;
	float32 dx;
	float32 dy;
	float32 dz;
	// Line 3056, Address: 0x3f7370, Func Offset: 0
	// Line 3060, Address: 0x3f7374, Func Offset: 0x4
	// Line 3056, Address: 0x3f7378, Func Offset: 0x8
	// Line 3064, Address: 0x3f7384, Func Offset: 0x14
	// Line 3056, Address: 0x3f7388, Func Offset: 0x18
	// Line 3060, Address: 0x3f7394, Func Offset: 0x24
	// Line 3064, Address: 0x3f7398, Func Offset: 0x28
	// Line 3066, Address: 0x3f73a0, Func Offset: 0x30
	// Line 3073, Address: 0x3f73b0, Func Offset: 0x40
	// Line 3080, Address: 0x3f73c0, Func Offset: 0x50
	// Line 3086, Address: 0x3f73c8, Func Offset: 0x58
	// Line 3093, Address: 0x3f73dc, Func Offset: 0x6c
	// Line 3096, Address: 0x3f73f0, Func Offset: 0x80
	// Line 3100, Address: 0x3f73fc, Func Offset: 0x8c
	// Line 3102, Address: 0x3f7400, Func Offset: 0x90
	// Line 3100, Address: 0x3f7404, Func Offset: 0x94
	// Line 3102, Address: 0x3f7408, Func Offset: 0x98
	// Line 3100, Address: 0x3f740c, Func Offset: 0x9c
	// Line 3102, Address: 0x3f7420, Func Offset: 0xb0
	// Line 3105, Address: 0x3f7428, Func Offset: 0xb8
	// Line 3106, Address: 0x3f7434, Func Offset: 0xc4
	// Line 3112, Address: 0x3f7438, Func Offset: 0xc8
	// Line 3116, Address: 0x3f7440, Func Offset: 0xd0
	// Line 3117, Address: 0x3f7448, Func Offset: 0xd8
	// Line 3120, Address: 0x3f744c, Func Offset: 0xdc
	// Line 3122, Address: 0x3f745c, Func Offset: 0xec
	// Line 3125, Address: 0x3f746c, Func Offset: 0xfc
	// Line 3129, Address: 0x3f7474, Func Offset: 0x104
	// Line 3135, Address: 0x3f747c, Func Offset: 0x10c
	// Line 3136, Address: 0x3f7480, Func Offset: 0x110
	// Line 3145, Address: 0x3f748c, Func Offset: 0x11c
	// Line 3178, Address: 0x3f74a4, Func Offset: 0x134
	// Line 3183, Address: 0x3f7610, Func Offset: 0x2a0
	// Line 3186, Address: 0x3f761c, Func Offset: 0x2ac
	// Line 3187, Address: 0x3f7624, Func Offset: 0x2b4
	// Line 3188, Address: 0x3f7628, Func Offset: 0x2b8
	// Line 3190, Address: 0x3f7630, Func Offset: 0x2c0
	// Line 3202, Address: 0x3f7640, Func Offset: 0x2d0
	// Line 3209, Address: 0x3f768c, Func Offset: 0x31c
	// Line 3216, Address: 0x3f76cc, Func Offset: 0x35c
	// Line 3218, Address: 0x3f76e0, Func Offset: 0x370
	// Line 3221, Address: 0x3f76ec, Func Offset: 0x37c
	// Line 3223, Address: 0x3f76f4, Func Offset: 0x384
	// Line 3218, Address: 0x3f76f8, Func Offset: 0x388
	// Line 3217, Address: 0x3f76fc, Func Offset: 0x38c
	// Line 3218, Address: 0x3f7700, Func Offset: 0x390
	// Line 3219, Address: 0x3f7704, Func Offset: 0x394
	// Line 3221, Address: 0x3f7708, Func Offset: 0x398
	// Line 3222, Address: 0x3f771c, Func Offset: 0x3ac
	// Line 3223, Address: 0x3f7720, Func Offset: 0x3b0
	// Line 3224, Address: 0x3f7724, Func Offset: 0x3b4
	// Line 3232, Address: 0x3f7728, Func Offset: 0x3b8
	// Line 3071, Address: 0x3f7738, Func Offset: 0x3c8
	// Line 3077, Address: 0x3f7740, Func Offset: 0x3d0
	// Line 3084, Address: 0x3f7748, Func Offset: 0x3d8
	// Line 3232, Address: 0x3f7750, Func Offset: 0x3e0
	// Line 3138, Address: 0x3f775c, Func Offset: 0x3ec
	// Line 3232, Address: 0x3f7764, Func Offset: 0x3f4
	// Line 3138, Address: 0x3f776c, Func Offset: 0x3fc
	// Line 3232, Address: 0x3f7784, Func Offset: 0x414
	// Line 3145, Address: 0x3f7794, Func Offset: 0x424
	// Line 3232, Address: 0x3f779c, Func Offset: 0x42c
	// Line 3149, Address: 0x3f77a0, Func Offset: 0x430
	// Line 3232, Address: 0x3f77a4, Func Offset: 0x434
	// Line 3151, Address: 0x3f77b0, Func Offset: 0x440
	// Line 3232, Address: 0x3f77b4, Func Offset: 0x444
	// Line 3151, Address: 0x3f77bc, Func Offset: 0x44c
	// Line 3232, Address: 0x3f77c0, Func Offset: 0x450
	// Line 3152, Address: 0x3f77cc, Func Offset: 0x45c
	// Line 3232, Address: 0x3f77d0, Func Offset: 0x460
	// Line 3150, Address: 0x3f77d4, Func Offset: 0x464
	// Line 3152, Address: 0x3f77d8, Func Offset: 0x468
	// Line 3150, Address: 0x3f77dc, Func Offset: 0x46c
	// Line 3151, Address: 0x3f77e0, Func Offset: 0x470
	// Line 3232, Address: 0x3f77e4, Func Offset: 0x474
	// Line 3151, Address: 0x3f77ec, Func Offset: 0x47c
	// Line 3232, Address: 0x3f77f0, Func Offset: 0x480
	// Line 3152, Address: 0x3f77f8, Func Offset: 0x488
	// Line 3232, Address: 0x3f77fc, Func Offset: 0x48c
	// Line 3152, Address: 0x3f7800, Func Offset: 0x490
	// Line 3232, Address: 0x3f7804, Func Offset: 0x494
	// Line 3152, Address: 0x3f7808, Func Offset: 0x498
	// Line 3232, Address: 0x3f780c, Func Offset: 0x49c
	// Line 3152, Address: 0x3f7810, Func Offset: 0x4a0
	// Line 3232, Address: 0x3f7814, Func Offset: 0x4a4
	// Line 3152, Address: 0x3f781c, Func Offset: 0x4ac
	// Line 3150, Address: 0x3f7820, Func Offset: 0x4b0
	// Line 3152, Address: 0x3f7824, Func Offset: 0x4b4
	// Line 3151, Address: 0x3f7828, Func Offset: 0x4b8
	// Line 3152, Address: 0x3f782c, Func Offset: 0x4bc
	// Line 3232, Address: 0x3f7830, Func Offset: 0x4c0
	// Line 3155, Address: 0x3f783c, Func Offset: 0x4cc
	// Line 3232, Address: 0x3f7844, Func Offset: 0x4d4
	// Line 3155, Address: 0x3f784c, Func Offset: 0x4dc
	// Line 3232, Address: 0x3f7864, Func Offset: 0x4f4
	// Line 3233, Address: 0x3f787c, Func Offset: 0x50c
	// Func End, Address: 0x3f7898, Func Offset: 0x528
}

// xEntCollCheckNPCs__FP4xEntP6xScenePFP4xEntP6xScenePv_P4xEnt
// Start address: 0x3f78a0
void xEntCollCheckNPCs(xEnt* p, xScene* sc, xEnt*(*hitIt)(xEnt*, xScene*, void*))
{
	// Line 3043, Address: 0x3f78a0, Func Offset: 0
	// Line 3048, Address: 0x3f78b4, Func Offset: 0x14
	// Line 3049, Address: 0x3f78b8, Func Offset: 0x18
	// Line 3050, Address: 0x3f78d0, Func Offset: 0x30
	// Line 3051, Address: 0x3f78d8, Func Offset: 0x38
	// Func End, Address: 0x3f78e8, Func Offset: 0x48
}

// xEntCollCheckDyns__FP4xEntP6xScenePFP4xEntP6xScenePv_P4xEnt
// Start address: 0x3f78f0
void xEntCollCheckDyns(xEnt* p, xScene* sc, xEnt*(*hitIt)(xEnt*, xScene*, void*))
{
	// Line 3031, Address: 0x3f78f0, Func Offset: 0
	// Line 3036, Address: 0x3f7904, Func Offset: 0x14
	// Line 3037, Address: 0x3f7908, Func Offset: 0x18
	// Line 3038, Address: 0x3f7920, Func Offset: 0x30
	// Line 3039, Address: 0x3f7928, Func Offset: 0x38
	// Func End, Address: 0x3f7938, Func Offset: 0x48
}

// xEntCollCheckStats__FP4xEntP6xScenePFP4xEntP6xScenePv_P4xEnt
// Start address: 0x3f7940
void xEntCollCheckStats(xEnt* p, xScene* sc, xEnt*(*hitIt)(xEnt*, xScene*, void*))
{
	// Line 3020, Address: 0x3f7940, Func Offset: 0
	// Line 3025, Address: 0x3f7954, Func Offset: 0x14
	// Line 3026, Address: 0x3f7958, Func Offset: 0x18
	// Line 3027, Address: 0x3f7970, Func Offset: 0x30
	// Line 3028, Address: 0x3f7978, Func Offset: 0x38
	// Func End, Address: 0x3f7988, Func Offset: 0x48
}

// xEntCollCheckNPCsByGrid__FP4xEntP6xScenePFP4xEntP6xScenePv_P4xEnt
// Start address: 0x3f7990
void xEntCollCheckNPCsByGrid(xEnt* p, xScene* sc, xEnt*(*hitIt)(xEnt*, xScene*, void*))
{
	// Line 3010, Address: 0x3f7990, Func Offset: 0
	// Line 3014, Address: 0x3f7994, Func Offset: 0x4
	// Line 3010, Address: 0x3f7998, Func Offset: 0x8
	// Line 3014, Address: 0x3f799c, Func Offset: 0xc
	// Line 3010, Address: 0x3f79a0, Func Offset: 0x10
	// Line 3013, Address: 0x3f79ac, Func Offset: 0x1c
	// Line 3014, Address: 0x3f79b0, Func Offset: 0x20
	// Line 3015, Address: 0x3f79bc, Func Offset: 0x2c
	// Line 3016, Address: 0x3f79c4, Func Offset: 0x34
	// Func End, Address: 0x3f79d4, Func Offset: 0x44
}

// xEntCollCheckByGrid__FP4xEntP6xScenePFP4xEntP6xScenePv_P4xEnt
// Start address: 0x3f79e0
void xEntCollCheckByGrid(xEnt* p, xScene* sc, xEnt*(*hitIt)(xEnt*, xScene*, void*))
{
	// Line 2998, Address: 0x3f79e0, Func Offset: 0
	// Line 3003, Address: 0x3f79e4, Func Offset: 0x4
	// Line 2998, Address: 0x3f79e8, Func Offset: 0x8
	// Line 3003, Address: 0x3f79ec, Func Offset: 0xc
	// Line 2998, Address: 0x3f79f0, Func Offset: 0x10
	// Line 3001, Address: 0x3f7a0c, Func Offset: 0x2c
	// Line 3002, Address: 0x3f7a18, Func Offset: 0x38
	// Line 3003, Address: 0x3f7a1c, Func Offset: 0x3c
	// Line 3004, Address: 0x3f7a24, Func Offset: 0x44
	// Line 3005, Address: 0x3f7a40, Func Offset: 0x60
	// Line 3006, Address: 0x3f7a4c, Func Offset: 0x6c
	// Line 3007, Address: 0x3f7a54, Func Offset: 0x74
	// Func End, Address: 0x3f7a6c, Func Offset: 0x8c
}

// xEntCollCheckOneGrid__FP4xEntP6xScenePFP4xEntP6xScenePv_P4xEntP5xGrid
// Start address: 0x3f7a70
void xEntCollCheckOneGrid(xEnt* p, xScene* sc, xEnt*(*hitIt)(xEnt*, xScene*, void*), xGrid* grid)
{
	xGridIterator it;
	xEnt* ent;
	int32 px;
	int32 pz;
	xGridBound* cell;
	float32 clcenterx;
	float32 clcenterz;
	int32 i;
	int32 _x;
	int32 _z;
	int32 offs[2][3][4];
	int32 k;
	// Line 2925, Address: 0x3f7a70, Func Offset: 0
	// Line 2930, Address: 0x3f7a78, Func Offset: 0x8
	// Line 2925, Address: 0x3f7a7c, Func Offset: 0xc
	// Line 2928, Address: 0x3f7aac, Func Offset: 0x3c
	// Line 2925, Address: 0x3f7ab0, Func Offset: 0x40
	// Line 2930, Address: 0x3f7ab4, Func Offset: 0x44
	// Line 2931, Address: 0x3f7c2c, Func Offset: 0x1bc
	// Line 2933, Address: 0x3f7c38, Func Offset: 0x1c8
	// Line 2937, Address: 0x3f7c4c, Func Offset: 0x1dc
	// Line 2933, Address: 0x3f7c50, Func Offset: 0x1e0
	// Line 2938, Address: 0x3f7c54, Func Offset: 0x1e4
	// Line 2939, Address: 0x3f7cb8, Func Offset: 0x248
	// Line 2954, Address: 0x3f7cc8, Func Offset: 0x258
	// Line 2956, Address: 0x3f7cd4, Func Offset: 0x264
	// Line 2959, Address: 0x3f7cdc, Func Offset: 0x26c
	// Line 2960, Address: 0x3f7ce4, Func Offset: 0x274
	// Line 2961, Address: 0x3f7cf4, Func Offset: 0x284
	// Line 2962, Address: 0x3f7cf8, Func Offset: 0x288
	// Line 2963, Address: 0x3f7d00, Func Offset: 0x290
	// Line 2968, Address: 0x3f7d04, Func Offset: 0x294
	// Line 2969, Address: 0x3f7d34, Func Offset: 0x2c4
	// Line 2970, Address: 0x3f7d38, Func Offset: 0x2c8
	// Line 2969, Address: 0x3f7d3c, Func Offset: 0x2cc
	// Line 2970, Address: 0x3f7d44, Func Offset: 0x2d4
	// Line 2971, Address: 0x3f7d48, Func Offset: 0x2d8
	// Line 2972, Address: 0x3f7db8, Func Offset: 0x348
	// Line 2974, Address: 0x3f7dc0, Func Offset: 0x350
	// Line 2978, Address: 0x3f7dd4, Func Offset: 0x364
	// Line 2974, Address: 0x3f7dd8, Func Offset: 0x368
	// Line 2979, Address: 0x3f7ddc, Func Offset: 0x36c
	// Line 2980, Address: 0x3f7e40, Func Offset: 0x3d0
	// Line 2981, Address: 0x3f7e48, Func Offset: 0x3d8
	// Line 2983, Address: 0x3f7e58, Func Offset: 0x3e8
	// Line 2984, Address: 0x3f7e80, Func Offset: 0x410
	// Line 2986, Address: 0x3f7e88, Func Offset: 0x418
	// Line 2990, Address: 0x3f7e9c, Func Offset: 0x42c
	// Line 2986, Address: 0x3f7ea0, Func Offset: 0x430
	// Line 2991, Address: 0x3f7ea4, Func Offset: 0x434
	// Line 2992, Address: 0x3f7f08, Func Offset: 0x498
	// Line 2994, Address: 0x3f7f10, Func Offset: 0x4a0
	// Line 2930, Address: 0x3f7f18, Func Offset: 0x4a8
	// Line 2994, Address: 0x3f7f30, Func Offset: 0x4c0
	// Line 2936, Address: 0x3f7f34, Func Offset: 0x4c4
	// Line 2994, Address: 0x3f7f38, Func Offset: 0x4c8
	// Line 2951, Address: 0x3f7f48, Func Offset: 0x4d8
	// Line 2994, Address: 0x3f7f50, Func Offset: 0x4e0
	// Line 2949, Address: 0x3f7f54, Func Offset: 0x4e4
	// Line 2994, Address: 0x3f7f58, Func Offset: 0x4e8
	// Line 2949, Address: 0x3f7f5c, Func Offset: 0x4ec
	// Line 2994, Address: 0x3f7f64, Func Offset: 0x4f4
	// Line 2949, Address: 0x3f7f68, Func Offset: 0x4f8
	// Line 2951, Address: 0x3f7f70, Func Offset: 0x500
	// Line 2994, Address: 0x3f7f74, Func Offset: 0x504
	// Line 2949, Address: 0x3f7f78, Func Offset: 0x508
	// Line 2994, Address: 0x3f7f80, Func Offset: 0x510
	// Line 2950, Address: 0x3f7f84, Func Offset: 0x514
	// Line 2952, Address: 0x3f7f88, Func Offset: 0x518
	// Line 2949, Address: 0x3f7f8c, Func Offset: 0x51c
	// Line 2994, Address: 0x3f7f90, Func Offset: 0x520
	// Line 2953, Address: 0x3f7f98, Func Offset: 0x528
	// Line 2950, Address: 0x3f7f9c, Func Offset: 0x52c
	// Line 2994, Address: 0x3f7fa0, Func Offset: 0x530
	// Line 2971, Address: 0x3f7fb0, Func Offset: 0x540
	// Line 2994, Address: 0x3f7fd0, Func Offset: 0x560
	// Line 2977, Address: 0x3f7fd4, Func Offset: 0x564
	// Line 2994, Address: 0x3f7fd8, Func Offset: 0x568
	// Line 2983, Address: 0x3f7fe8, Func Offset: 0x578
	// Line 2994, Address: 0x3f7ff0, Func Offset: 0x580
	// Line 2989, Address: 0x3f7ff4, Func Offset: 0x584
	// Line 2994, Address: 0x3f7ff8, Func Offset: 0x588
	// Func End, Address: 0x3f8038, Func Offset: 0x5c8
}

// xEntCollCheckEnv__FP4xEntP6xScene
// Start address: 0x3f8040
void xEntCollCheckEnv(xEnt* p, xScene* sc)
{
	xCollis* coll;
	uint8 ncolls;
	// Line 2900, Address: 0x3f8040, Func Offset: 0
	// Line 2914, Address: 0x3f8044, Func Offset: 0x4
	// Line 2900, Address: 0x3f8048, Func Offset: 0x8
	// Line 2914, Address: 0x3f804c, Func Offset: 0xc
	// Line 2900, Address: 0x3f8050, Func Offset: 0x10
	// Line 2914, Address: 0x3f8054, Func Offset: 0x14
	// Line 2900, Address: 0x3f8058, Func Offset: 0x18
	// Line 2911, Address: 0x3f805c, Func Offset: 0x1c
	// Line 2914, Address: 0x3f8060, Func Offset: 0x20
	// Line 2909, Address: 0x3f8068, Func Offset: 0x28
	// Line 2910, Address: 0x3f8074, Func Offset: 0x34
	// Line 2911, Address: 0x3f8090, Func Offset: 0x50
	// Line 2910, Address: 0x3f8094, Func Offset: 0x54
	// Line 2914, Address: 0x3f8098, Func Offset: 0x58
	// Line 2919, Address: 0x3f80bc, Func Offset: 0x7c
	// Line 2920, Address: 0x3f80cc, Func Offset: 0x8c
	// Line 2921, Address: 0x3f80d4, Func Offset: 0x94
	// Func End, Address: 0x3f80e4, Func Offset: 0xa4
}

// xEntEndCollide__FP4xEntP6xScenef
// Start address: 0x3f80f0
void xEntEndCollide(xEnt* ent, xScene* sc, float32 dt)
{
	// Line 2851, Address: 0x3f80f0, Func Offset: 0
	// Line 2855, Address: 0x3f8100, Func Offset: 0x10
	// Line 2857, Address: 0x3f8108, Func Offset: 0x18
	// Line 2895, Address: 0x3f8110, Func Offset: 0x20
	// Func End, Address: 0x3f811c, Func Offset: 0x2c
}

// xEntBeginCollide__FP4xEntP6xScenef
// Start address: 0x3f8120
void xEntBeginCollide(xEnt* ent)
{
	uint8 idx;
	xCollis* coll;
	// Line 2819, Address: 0x3f8120, Func Offset: 0
	// Line 2822, Address: 0x3f8130, Func Offset: 0x10
	// Line 2823, Address: 0x3f8138, Func Offset: 0x18
	// Line 2832, Address: 0x3f8144, Func Offset: 0x24
	// Line 2827, Address: 0x3f8148, Func Offset: 0x28
	// Line 2829, Address: 0x3f8150, Func Offset: 0x30
	// Line 2832, Address: 0x3f8154, Func Offset: 0x34
	// Line 2828, Address: 0x3f8158, Func Offset: 0x38
	// Line 2832, Address: 0x3f815c, Func Offset: 0x3c
	// Line 2828, Address: 0x3f8168, Func Offset: 0x48
	// Line 2829, Address: 0x3f816c, Func Offset: 0x4c
	// Line 2830, Address: 0x3f8170, Func Offset: 0x50
	// Line 2831, Address: 0x3f8174, Func Offset: 0x54
	// Line 2832, Address: 0x3f8178, Func Offset: 0x58
	// Line 2837, Address: 0x3f81fc, Func Offset: 0xdc
	// Line 2840, Address: 0x3f8208, Func Offset: 0xe8
	// Line 2841, Address: 0x3f8210, Func Offset: 0xf0
	// Line 2842, Address: 0x3f8218, Func Offset: 0xf8
	// Line 2843, Address: 0x3f8220, Func Offset: 0x100
	// Line 2844, Address: 0x3f8228, Func Offset: 0x108
	// Line 2845, Address: 0x3f8230, Func Offset: 0x110
	// Line 2846, Address: 0x3f8238, Func Offset: 0x118
	// Line 2847, Address: 0x3f8240, Func Offset: 0x120
	// Line 2848, Address: 0x3f8248, Func Offset: 0x128
	// Func End, Address: 0x3f8258, Func Offset: 0x138
}

// xEntCollide__FP4xEntP6xScenef
// Start address: 0x3f8260
void xEntCollide(xEnt* ent, xScene* sc, float32 dt)
{
	xCollis* coll;
	float32 h_dot_n;
	float32 depen_len;
	// Line 2702, Address: 0x3f8260, Func Offset: 0
	// Line 2709, Address: 0x3f827c, Func Offset: 0x1c
	// Line 2719, Address: 0x3f8288, Func Offset: 0x28
	// Line 2732, Address: 0x3f82a0, Func Offset: 0x40
	// Line 2735, Address: 0x3f82b4, Func Offset: 0x54
	// Line 2757, Address: 0x3f82c8, Func Offset: 0x68
	// Line 2761, Address: 0x3f82dc, Func Offset: 0x7c
	// Line 2776, Address: 0x3f82ec, Func Offset: 0x8c
	// Line 2779, Address: 0x3f8310, Func Offset: 0xb0
	// Line 2782, Address: 0x3f8320, Func Offset: 0xc0
	// Line 2783, Address: 0x3f8330, Func Offset: 0xd0
	// Line 2782, Address: 0x3f8338, Func Offset: 0xd8
	// Line 2783, Address: 0x3f833c, Func Offset: 0xdc
	// Line 2784, Address: 0x3f835c, Func Offset: 0xfc
	// Line 2790, Address: 0x3f8368, Func Offset: 0x108
	// Line 2791, Address: 0x3f837c, Func Offset: 0x11c
	// Line 2793, Address: 0x3f8394, Func Offset: 0x134
	// Line 2795, Address: 0x3f83e8, Func Offset: 0x188
	// Line 2801, Address: 0x3f840c, Func Offset: 0x1ac
	// Line 2802, Address: 0x3f8424, Func Offset: 0x1c4
	// Line 2803, Address: 0x3f8434, Func Offset: 0x1d4
	// Line 2804, Address: 0x3f843c, Func Offset: 0x1dc
	// Line 2811, Address: 0x3f844c, Func Offset: 0x1ec
	// Line 2813, Address: 0x3f8464, Func Offset: 0x204
	// Line 2817, Address: 0x3f847c, Func Offset: 0x21c
	// Line 2733, Address: 0x3f84a0, Func Offset: 0x240
	// Line 2817, Address: 0x3f84a8, Func Offset: 0x248
	// Line 2736, Address: 0x3f84d4, Func Offset: 0x274
	// Line 2817, Address: 0x3f84dc, Func Offset: 0x27c
	// Line 2736, Address: 0x3f8500, Func Offset: 0x2a0
	// Line 2817, Address: 0x3f8508, Func Offset: 0x2a8
	// Line 2758, Address: 0x3f8534, Func Offset: 0x2d4
	// Line 2817, Address: 0x3f854c, Func Offset: 0x2ec
	// Line 2758, Address: 0x3f8558, Func Offset: 0x2f8
	// Line 2817, Address: 0x3f855c, Func Offset: 0x2fc
	// Line 2758, Address: 0x3f8560, Func Offset: 0x300
	// Line 2817, Address: 0x3f8564, Func Offset: 0x304
	// Line 2758, Address: 0x3f8568, Func Offset: 0x308
	// Line 2817, Address: 0x3f856c, Func Offset: 0x30c
	// Line 2758, Address: 0x3f8574, Func Offset: 0x314
	// Line 2817, Address: 0x3f8578, Func Offset: 0x318
	// Line 2758, Address: 0x3f8594, Func Offset: 0x334
	// Line 2817, Address: 0x3f8598, Func Offset: 0x338
	// Line 2786, Address: 0x3f85b4, Func Offset: 0x354
	// Line 2817, Address: 0x3f85b8, Func Offset: 0x358
	// Line 2787, Address: 0x3f85c0, Func Offset: 0x360
	// Line 2786, Address: 0x3f85c4, Func Offset: 0x364
	// Line 2817, Address: 0x3f85c8, Func Offset: 0x368
	// Line 2786, Address: 0x3f85d0, Func Offset: 0x370
	// Line 2817, Address: 0x3f85dc, Func Offset: 0x37c
	// Func End, Address: 0x3f85f4, Func Offset: 0x394
}

// xEntApplyPhysics__FP4xEntP6xScenef
// Start address: 0x3f8600
void xEntApplyPhysics(xEnt* ent, xScene* sc, float32 dt)
{
	xVec3 dposvel;
	float32 tfric;
	float32 tdrag;
	float32 scaleY;
	// Line 2577, Address: 0x3f8600, Func Offset: 0
	// Line 2578, Address: 0x3f8604, Func Offset: 0x4
	// Line 2592, Address: 0x3f862c, Func Offset: 0x2c
	// Line 2598, Address: 0x3f863c, Func Offset: 0x3c
	// Line 2599, Address: 0x3f864c, Func Offset: 0x4c
	// Line 2605, Address: 0x3f8668, Func Offset: 0x68
	// Line 2606, Address: 0x3f8678, Func Offset: 0x78
	// Line 2607, Address: 0x3f8688, Func Offset: 0x88
	// Line 2608, Address: 0x3f8694, Func Offset: 0x94
	// Line 2607, Address: 0x3f8698, Func Offset: 0x98
	// Line 2608, Address: 0x3f86a0, Func Offset: 0xa0
	// Line 2607, Address: 0x3f86a4, Func Offset: 0xa4
	// Line 2608, Address: 0x3f86a8, Func Offset: 0xa8
	// Line 2614, Address: 0x3f86c8, Func Offset: 0xc8
	// Line 2615, Address: 0x3f86d8, Func Offset: 0xd8
	// Line 2616, Address: 0x3f86e8, Func Offset: 0xe8
	// Line 2617, Address: 0x3f86f4, Func Offset: 0xf4
	// Line 2616, Address: 0x3f86f8, Func Offset: 0xf8
	// Line 2617, Address: 0x3f8700, Func Offset: 0x100
	// Line 2616, Address: 0x3f8704, Func Offset: 0x104
	// Line 2617, Address: 0x3f8708, Func Offset: 0x108
	// Line 2629, Address: 0x3f8734, Func Offset: 0x134
	// Line 2634, Address: 0x3f8738, Func Offset: 0x138
	// Line 2629, Address: 0x3f873c, Func Offset: 0x13c
	// Line 2630, Address: 0x3f8764, Func Offset: 0x164
	// Line 2629, Address: 0x3f8768, Func Offset: 0x168
	// Line 2630, Address: 0x3f876c, Func Offset: 0x16c
	// Line 2634, Address: 0x3f8774, Func Offset: 0x174
	// Line 2630, Address: 0x3f8778, Func Offset: 0x178
	// Line 2634, Address: 0x3f8780, Func Offset: 0x180
	// Line 2636, Address: 0x3f8788, Func Offset: 0x188
	// Line 2637, Address: 0x3f878c, Func Offset: 0x18c
	// Line 2636, Address: 0x3f8794, Func Offset: 0x194
	// Line 2637, Address: 0x3f87a4, Func Offset: 0x1a4
	// Line 2638, Address: 0x3f87dc, Func Offset: 0x1dc
	// Line 2639, Address: 0x3f87f4, Func Offset: 0x1f4
	// Line 2638, Address: 0x3f87f8, Func Offset: 0x1f8
	// Line 2639, Address: 0x3f8804, Func Offset: 0x204
	// Line 2638, Address: 0x3f8808, Func Offset: 0x208
	// Line 2639, Address: 0x3f8810, Func Offset: 0x210
	// Line 2644, Address: 0x3f881c, Func Offset: 0x21c
	// Line 2645, Address: 0x3f8834, Func Offset: 0x234
	// Line 2657, Address: 0x3f8840, Func Offset: 0x240
	// Line 2659, Address: 0x3f8870, Func Offset: 0x270
	// Line 2640, Address: 0x3f8880, Func Offset: 0x280
	// Line 2641, Address: 0x3f8884, Func Offset: 0x284
	// Line 2659, Address: 0x3f8888, Func Offset: 0x288
	// Func End, Address: 0x3f889c, Func Offset: 0x29c
}

// xEntMove__FP4xEntP6xScenef
// Start address: 0x3f88a0
void xEntMove(xEnt* ent, xScene* sc, float32 dt)
{
	xVec3 dpos;
	xMat4x3 invOldmat;
	xMat4x3 deltaMat;
	// Line 2526, Address: 0x3f88a0, Func Offset: 0
	// Line 2529, Address: 0x3f88b0, Func Offset: 0x10
	// Line 2535, Address: 0x3f88c4, Func Offset: 0x24
	// Line 2536, Address: 0x3f88cc, Func Offset: 0x2c
	// Line 2540, Address: 0x3f88d8, Func Offset: 0x38
	// Line 2546, Address: 0x3f88e8, Func Offset: 0x48
	// Line 2548, Address: 0x3f8900, Func Offset: 0x60
	// Line 2555, Address: 0x3f8908, Func Offset: 0x68
	// Line 2565, Address: 0x3f8910, Func Offset: 0x70
	// Line 2566, Address: 0x3f8918, Func Offset: 0x78
	// Line 2567, Address: 0x3f8924, Func Offset: 0x84
	// Line 2568, Address: 0x3f8934, Func Offset: 0x94
	// Line 2553, Address: 0x3f8a68, Func Offset: 0x1c8
	// Line 2568, Address: 0x3f8a6c, Func Offset: 0x1cc
	// Line 2552, Address: 0x3f8a74, Func Offset: 0x1d4
	// Line 2568, Address: 0x3f8a78, Func Offset: 0x1d8
	// Line 2552, Address: 0x3f8a84, Func Offset: 0x1e4
	// Line 2568, Address: 0x3f8a88, Func Offset: 0x1e8
	// Line 2552, Address: 0x3f8a94, Func Offset: 0x1f4
	// Line 2568, Address: 0x3f8a98, Func Offset: 0x1f8
	// Line 2572, Address: 0x3f8aa8, Func Offset: 0x208
	// Line 2574, Address: 0x3f8ab8, Func Offset: 0x218
	// Line 2573, Address: 0x3f8adc, Func Offset: 0x23c
	// Line 2574, Address: 0x3f8ae8, Func Offset: 0x248
	// Func End, Address: 0x3f8bf8, Func Offset: 0x358
}

// xEntMotionToMatrix__FP4xEntP9xEntFrame
// Start address: 0x3f8c00
void xEntMotionToMatrix(xEnt* ent, xEntFrame* frame)
{
	// Line 2476, Address: 0x3f8c00, Func Offset: 0
	// Line 2481, Address: 0x3f8c18, Func Offset: 0x18
	// Line 2482, Address: 0x3f8c24, Func Offset: 0x24
	// Line 2485, Address: 0x3f8cbc, Func Offset: 0xbc
	// Line 2486, Address: 0x3f8cc8, Func Offset: 0xc8
	// Line 2487, Address: 0x3f8cd0, Func Offset: 0xd0
	// Line 2489, Address: 0x3f8d1c, Func Offset: 0x11c
	// Line 2490, Address: 0x3f8d54, Func Offset: 0x154
	// Line 2497, Address: 0x3f8d64, Func Offset: 0x164
	// Line 2498, Address: 0x3f8d70, Func Offset: 0x170
	// Line 2499, Address: 0x3f8d78, Func Offset: 0x178
	// Line 2501, Address: 0x3f8dc4, Func Offset: 0x1c4
	// Line 2502, Address: 0x3f8df4, Func Offset: 0x1f4
	// Line 2509, Address: 0x3f8e08, Func Offset: 0x208
	// Line 2510, Address: 0x3f8e14, Func Offset: 0x214
	// Line 2514, Address: 0x3f8ea4, Func Offset: 0x2a4
	// Func End, Address: 0x3f8eb8, Func Offset: 0x2b8
}

// xEntDefaultTranslate__FP4xEntP5xVec3P7xMat4x3
// Start address: 0x3f8ec0
void xEntDefaultTranslate(xEnt* ent, xVec3* dpos, xMat4x3* dmat)
{
	// Line 2421, Address: 0x3f8ec0, Func Offset: 0
	// Line 2423, Address: 0x3f8ed4, Func Offset: 0x14
	// Line 2424, Address: 0x3f8ee0, Func Offset: 0x20
	// Line 2425, Address: 0x3f8eec, Func Offset: 0x2c
	// Line 2427, Address: 0x3f8ef8, Func Offset: 0x38
	// Line 2428, Address: 0x3f8f00, Func Offset: 0x40
	// Line 2430, Address: 0x3f8f0c, Func Offset: 0x4c
	// Line 2432, Address: 0x3f8f60, Func Offset: 0xa0
	// Line 2435, Address: 0x3f8f68, Func Offset: 0xa8
	// Line 2436, Address: 0x3f8f74, Func Offset: 0xb4
	// Line 2438, Address: 0x3f8fb0, Func Offset: 0xf0
	// Line 2439, Address: 0x3f8fb8, Func Offset: 0xf8
	// Line 2441, Address: 0x3f8fe8, Func Offset: 0x128
	// Line 2443, Address: 0x3f9018, Func Offset: 0x158
	// Func End, Address: 0x3f902c, Func Offset: 0x16c
}

// xEntDefaultBoundUpdate__FP4xEntP5xVec3
// Start address: 0x3f9030
void xEntDefaultBoundUpdate(xEnt* ent, xVec3* pos)
{
	xBound* bound;
	// Line 2378, Address: 0x3f9030, Func Offset: 0
	// Line 2381, Address: 0x3f9034, Func Offset: 0x4
	// Line 2378, Address: 0x3f9038, Func Offset: 0x8
	// Line 2381, Address: 0x3f9040, Func Offset: 0x10
	// Line 2403, Address: 0x3f9050, Func Offset: 0x20
	// Line 2404, Address: 0x3f9058, Func Offset: 0x28
	// Line 2405, Address: 0x3f9060, Func Offset: 0x30
	// Line 2383, Address: 0x3f906c, Func Offset: 0x3c
	// Line 2405, Address: 0x3f907c, Func Offset: 0x4c
	// Line 2383, Address: 0x3f9094, Func Offset: 0x64
	// Line 2405, Address: 0x3f9098, Func Offset: 0x68
	// Func End, Address: 0x3f90b0, Func Offset: 0x80
}

// xEntEndUpdate__FP4xEntP6xScenef
// Start address: 0x3f90b0
void xEntEndUpdate(xEnt* ent, xScene* sc, float32 dt)
{
	xVec3* mpos;
	xVec3* upos;
	// Line 2275, Address: 0x3f90b0, Func Offset: 0
	// Line 2280, Address: 0x3f90e0, Func Offset: 0x30
	// Line 2282, Address: 0x3f90ec, Func Offset: 0x3c
	// Line 2284, Address: 0x3f90f4, Func Offset: 0x44
	// Line 2285, Address: 0x3f9108, Func Offset: 0x58
	// Line 2287, Address: 0x3f9128, Func Offset: 0x78
	// Line 2288, Address: 0x3f913c, Func Offset: 0x8c
	// Line 2305, Address: 0x3f9140, Func Offset: 0x90
	// Line 2288, Address: 0x3f9144, Func Offset: 0x94
	// Line 2305, Address: 0x3f9148, Func Offset: 0x98
	// Line 2311, Address: 0x3f9160, Func Offset: 0xb0
	// Line 2312, Address: 0x3f9174, Func Offset: 0xc4
	// Line 2313, Address: 0x3f9200, Func Offset: 0x150
	// Line 2314, Address: 0x3f9214, Func Offset: 0x164
	// Line 2343, Address: 0x3f929c, Func Offset: 0x1ec
	// Line 2347, Address: 0x3f92a8, Func Offset: 0x1f8
	// Line 2348, Address: 0x3f92b0, Func Offset: 0x200
	// Line 2367, Address: 0x3f92c4, Func Offset: 0x214
	// Line 2368, Address: 0x3f92d4, Func Offset: 0x224
	// Line 2373, Address: 0x3f9434, Func Offset: 0x384
	// Line 2374, Address: 0x3f943c, Func Offset: 0x38c
	// Line 2375, Address: 0x3f9448, Func Offset: 0x398
	// Func End, Address: 0x3f9470, Func Offset: 0x3c0
}

// xEntBeginUpdate__FP4xEntP6xScenef
// Start address: 0x3f9470
void xEntBeginUpdate(xEnt* ent, float32 dt)
{
	// Line 2259, Address: 0x3f9470, Func Offset: 0
	// Line 2260, Address: 0x3f9484, Func Offset: 0x14
	// Line 2262, Address: 0x3f948c, Func Offset: 0x1c
	// Line 2265, Address: 0x3f9498, Func Offset: 0x28
	// Line 2267, Address: 0x3f94a0, Func Offset: 0x30
	// Line 2268, Address: 0x3f94bc, Func Offset: 0x4c
	// Line 2269, Address: 0x3f9540, Func Offset: 0xd0
	// Line 2270, Address: 0x3f9564, Func Offset: 0xf4
	// Line 2271, Address: 0x3f958c, Func Offset: 0x11c
	// Line 2272, Address: 0x3f9594, Func Offset: 0x124
	// Func End, Address: 0x3f95a4, Func Offset: 0x134
}

// xEntUpdate__FP4xEntP6xScenef
// Start address: 0x3f95b0
void xEntUpdate(xEnt* ent, xScene* sc, float32 dt)
{
	// Line 2180, Address: 0x3f95b0, Func Offset: 0
	// Line 2204, Address: 0x3f95d0, Func Offset: 0x20
	// Line 2212, Address: 0x3f96e0, Func Offset: 0x130
	// Line 2213, Address: 0x3f96f0, Func Offset: 0x140
	// Line 2218, Address: 0x3f96fc, Func Offset: 0x14c
	// Line 2219, Address: 0x3f970c, Func Offset: 0x15c
	// Line 2224, Address: 0x3f971c, Func Offset: 0x16c
	// Line 2235, Address: 0x3f972c, Func Offset: 0x17c
	// Line 2237, Address: 0x3f9738, Func Offset: 0x188
	// Line 2244, Address: 0x3f9744, Func Offset: 0x194
	// Line 2245, Address: 0x3f9768, Func Offset: 0x1b8
	// Line 2247, Address: 0x3f985c, Func Offset: 0x2ac
	// Line 2256, Address: 0x3f986c, Func Offset: 0x2bc
	// Func End, Address: 0x3f9884, Func Offset: 0x2d4
}

// xEntRender__FP4xEnt
// Start address: 0x3f9890
void xEntRender(xEnt* ent)
{
	int32 shadowOutside;
	// Line 1939, Address: 0x3f9890, Func Offset: 0
	// Line 1944, Address: 0x3f98a4, Func Offset: 0x14
	// Line 1946, Address: 0x3f98ac, Func Offset: 0x1c
	// Line 1948, Address: 0x3f98c4, Func Offset: 0x34
	// Line 1951, Address: 0x3f98d4, Func Offset: 0x44
	// Line 1954, Address: 0x3f98e0, Func Offset: 0x50
	// Line 1951, Address: 0x3f98e4, Func Offset: 0x54
	// Line 1954, Address: 0x3f98f4, Func Offset: 0x64
	// Line 1965, Address: 0x3f9918, Func Offset: 0x88
	// Line 1966, Address: 0x3f9934, Func Offset: 0xa4
	// Line 1968, Address: 0x3f9940, Func Offset: 0xb0
	// Line 1969, Address: 0x3f9954, Func Offset: 0xc4
	// Line 1999, Address: 0x3f995c, Func Offset: 0xcc
	// Line 2026, Address: 0x3f9968, Func Offset: 0xd8
	// Line 2032, Address: 0x3f9980, Func Offset: 0xf0
	// Line 2035, Address: 0x3f9988, Func Offset: 0xf8
	// Line 2037, Address: 0x3f9990, Func Offset: 0x100
	// Line 1976, Address: 0x3f99ac, Func Offset: 0x11c
	// Line 1977, Address: 0x3f99bc, Func Offset: 0x12c
	// Line 2037, Address: 0x3f99c4, Func Offset: 0x134
	// Line 2026, Address: 0x3f99d4, Func Offset: 0x144
	// Line 2037, Address: 0x3f99d8, Func Offset: 0x148
	// Func End, Address: 0x3f99f8, Func Offset: 0x168
}

// xEntRestorePipeline__FP8xSurfaceP8RpAtomic
// Start address: 0x3f9a00
void xEntRestorePipeline(RpAtomic* model)
{
	// Line 1902, Address: 0x3f9a00, Func Offset: 0
	// Line 1904, Address: 0x3f9a08, Func Offset: 0x8
	// Line 1920, Address: 0x3f9a14, Func Offset: 0x14
	// Func End, Address: 0x3f9a34, Func Offset: 0x34
}

// xEntRestorePipeline__FP14xModelInstance
// Start address: 0x3f9a40
void xEntRestorePipeline(xModelInstance* model)
{
	// Line 1897, Address: 0x3f9a40, Func Offset: 0
	// Line 1898, Address: 0x3f9a48, Func Offset: 0x8
	// Line 1899, Address: 0x3f9a54, Func Offset: 0x14
	// Func End, Address: 0x3f9a74, Func Offset: 0x34
}

// xEntSetupPipeline__FP8xSurfaceP8RpAtomic
// Start address: 0x3f9a80
void xEntSetupPipeline(xSurface* surf, RpAtomic* model)
{
	int32 setPipeline;
	zSurfaceProps* pp;
	RwTexture* texptr;
	// Line 1617, Address: 0x3f9a80, Func Offset: 0
	// Line 1622, Address: 0x3f9a98, Func Offset: 0x18
	// Line 1617, Address: 0x3f9a9c, Func Offset: 0x1c
	// Line 1625, Address: 0x3f9aa0, Func Offset: 0x20
	// Line 1627, Address: 0x3f9aac, Func Offset: 0x2c
	// Line 1639, Address: 0x3f9ab4, Func Offset: 0x34
	// Line 1643, Address: 0x3f9ac4, Func Offset: 0x44
	// Line 1644, Address: 0x3f9ae0, Func Offset: 0x60
	// Line 1646, Address: 0x3f9ae8, Func Offset: 0x68
	// Line 1647, Address: 0x3f9af0, Func Offset: 0x70
	// Line 1664, Address: 0x3f9afc, Func Offset: 0x7c
	// Line 1665, Address: 0x3f9b14, Func Offset: 0x94
	// Line 1666, Address: 0x3f9b1c, Func Offset: 0x9c
	// Line 1667, Address: 0x3f9b2c, Func Offset: 0xac
	// Line 1670, Address: 0x3f9b30, Func Offset: 0xb0
	// Line 1671, Address: 0x3f9b34, Func Offset: 0xb4
	// Line 1672, Address: 0x3f9b3c, Func Offset: 0xbc
	// Line 1679, Address: 0x3f9b40, Func Offset: 0xc0
	// Line 1712, Address: 0x3f9b50, Func Offset: 0xd0
	// Line 1718, Address: 0x3f9b58, Func Offset: 0xd8
	// Line 1756, Address: 0x3f9b6c, Func Offset: 0xec
	// Line 1662, Address: 0x3f9b78, Func Offset: 0xf8
	// Line 1756, Address: 0x3f9b7c, Func Offset: 0xfc
	// Line 1689, Address: 0x3f9b90, Func Offset: 0x110
	// Line 1681, Address: 0x3f9b98, Func Offset: 0x118
	// Line 1689, Address: 0x3f9b9c, Func Offset: 0x11c
	// Line 1756, Address: 0x3f9ba4, Func Offset: 0x124
	// Line 1689, Address: 0x3f9be4, Func Offset: 0x164
	// Line 1756, Address: 0x3f9be8, Func Offset: 0x168
	// Line 1689, Address: 0x3f9bf0, Func Offset: 0x170
	// Line 1756, Address: 0x3f9bf4, Func Offset: 0x174
	// Line 1689, Address: 0x3f9bfc, Func Offset: 0x17c
	// Line 1690, Address: 0x3f9c00, Func Offset: 0x180
	// Line 1756, Address: 0x3f9c04, Func Offset: 0x184
	// Line 1690, Address: 0x3f9c08, Func Offset: 0x188
	// Line 1756, Address: 0x3f9c0c, Func Offset: 0x18c
	// Line 1690, Address: 0x3f9c1c, Func Offset: 0x19c
	// Line 1756, Address: 0x3f9c28, Func Offset: 0x1a8
	// Line 1690, Address: 0x3f9c30, Func Offset: 0x1b0
	// Line 1756, Address: 0x3f9c34, Func Offset: 0x1b4
	// Line 1690, Address: 0x3f9c44, Func Offset: 0x1c4
	// Line 1756, Address: 0x3f9c48, Func Offset: 0x1c8
	// Line 1757, Address: 0x3f9c54, Func Offset: 0x1d4
	// Func End, Address: 0x3f9c70, Func Offset: 0x1f0
}

// xEntSetupPipeline__FP14xModelInstance
// Start address: 0x3f9c70
void xEntSetupPipeline(xModelInstance* model)
{
	// Line 1612, Address: 0x3f9c70, Func Offset: 0
	// Func End, Address: 0x3f9c7c, Func Offset: 0xc
}

// xEntLoadModel__FP4xEntP8RpAtomicP14xModelInstance
// Start address: 0x3f9c80
xModelInstance* xEntLoadModel(xEnt* ent, RpAtomic* imodel, xModelInstance* reuse_instance)
{
	xModelInstance* model;
	// Line 1487, Address: 0x3f9c80, Func Offset: 0
	// Line 1491, Address: 0x3f9c8c, Func Offset: 0xc
	// Line 1487, Address: 0x3f9c90, Func Offset: 0x10
	// Line 1491, Address: 0x3f9c94, Func Offset: 0x14
	// Line 1487, Address: 0x3f9c98, Func Offset: 0x18
	// Line 1491, Address: 0x3f9ca4, Func Offset: 0x24
	// Line 1494, Address: 0x3f9cb8, Func Offset: 0x38
	// Line 1495, Address: 0x3f9ccc, Func Offset: 0x4c
	// Line 1497, Address: 0x3f9cf4, Func Offset: 0x74
	// Line 1499, Address: 0x3f9d08, Func Offset: 0x88
	// Line 1500, Address: 0x3f9d10, Func Offset: 0x90
	// Line 1504, Address: 0x3f9d14, Func Offset: 0x94
	// Func End, Address: 0x3f9d2c, Func Offset: 0xac
}

// xEntReset__FP4xEnt
// Start address: 0x3f9d30
void xEntReset(xEnt* ent)
{
	xMat4x3 frame;
	xModelInstance* minst;
	xBox* combinedAnimBound;
	uint16 old_flags;
	uint32 receive_models[15];
	// Line 1260, Address: 0x3f9d30, Func Offset: 0
	// Line 1267, Address: 0x3f9d48, Func Offset: 0x18
	// Line 1270, Address: 0x3f9d54, Func Offset: 0x24
	// Line 1278, Address: 0x3f9d58, Func Offset: 0x28
	// Line 1270, Address: 0x3f9d5c, Func Offset: 0x2c
	// Line 1273, Address: 0x3f9d64, Func Offset: 0x34
	// Line 1274, Address: 0x3f9d70, Func Offset: 0x40
	// Line 1275, Address: 0x3f9d74, Func Offset: 0x44
	// Line 1278, Address: 0x3f9d7c, Func Offset: 0x4c
	// Line 1279, Address: 0x3f9d84, Func Offset: 0x54
	// Line 1286, Address: 0x3f9e5c, Func Offset: 0x12c
	// Line 1296, Address: 0x3f9e70, Func Offset: 0x140
	// Line 1297, Address: 0x3f9e80, Func Offset: 0x150
	// Line 1296, Address: 0x3f9e8c, Func Offset: 0x15c
	// Line 1298, Address: 0x3f9e90, Func Offset: 0x160
	// Line 1296, Address: 0x3f9e9c, Func Offset: 0x16c
	// Line 1297, Address: 0x3f9eb4, Func Offset: 0x184
	// Line 1298, Address: 0x3f9ed4, Func Offset: 0x1a4
	// Line 1304, Address: 0x3f9ef4, Func Offset: 0x1c4
	// Line 1306, Address: 0x3f9f10, Func Offset: 0x1e0
	// Line 1309, Address: 0x3f9f18, Func Offset: 0x1e8
	// Line 1310, Address: 0x3f9f20, Func Offset: 0x1f0
	// Line 1312, Address: 0x3f9f4c, Func Offset: 0x21c
	// Line 1313, Address: 0x3f9f54, Func Offset: 0x224
	// Line 1323, Address: 0x3f9f7c, Func Offset: 0x24c
	// Line 1324, Address: 0x3f9f8c, Func Offset: 0x25c
	// Line 1325, Address: 0x3f9fac, Func Offset: 0x27c
	// Line 1326, Address: 0x3f9fc0, Func Offset: 0x290
	// Line 1331, Address: 0x3f9fe0, Func Offset: 0x2b0
	// Line 1332, Address: 0x3f9ff0, Func Offset: 0x2c0
	// Line 1334, Address: 0x3f9ff8, Func Offset: 0x2c8
	// Line 1335, Address: 0x3f9ffc, Func Offset: 0x2cc
	// Line 1341, Address: 0x3fa004, Func Offset: 0x2d4
	// Line 1338, Address: 0x3fa00c, Func Offset: 0x2dc
	// Line 1339, Address: 0x3fa018, Func Offset: 0x2e8
	// Line 1340, Address: 0x3fa024, Func Offset: 0x2f4
	// Line 1341, Address: 0x3fa030, Func Offset: 0x300
	// Line 1344, Address: 0x3fa080, Func Offset: 0x350
	// Line 1345, Address: 0x3fa084, Func Offset: 0x354
	// Line 1346, Address: 0x3fa088, Func Offset: 0x358
	// Line 1347, Address: 0x3fa08c, Func Offset: 0x35c
	// Line 1348, Address: 0x3fa090, Func Offset: 0x360
	// Line 1356, Address: 0x3fa098, Func Offset: 0x368
	// Line 1358, Address: 0x3fa09c, Func Offset: 0x36c
	// Line 1359, Address: 0x3fa0a8, Func Offset: 0x378
	// Line 1362, Address: 0x3fa0b0, Func Offset: 0x380
	// Line 1366, Address: 0x3fa0b4, Func Offset: 0x384
	// Line 1363, Address: 0x3fa0bc, Func Offset: 0x38c
	// Line 1366, Address: 0x3fa0c0, Func Offset: 0x390
	// Line 1369, Address: 0x3fa0c8, Func Offset: 0x398
	// Line 1370, Address: 0x3fa0cc, Func Offset: 0x39c
	// Line 1371, Address: 0x3fa0d0, Func Offset: 0x3a0
	// Line 1375, Address: 0x3fa0dc, Func Offset: 0x3ac
	// Line 1377, Address: 0x3fa0e4, Func Offset: 0x3b4
	// Line 1381, Address: 0x3fa104, Func Offset: 0x3d4
	// Line 1377, Address: 0x3fa108, Func Offset: 0x3d8
	// Line 1381, Address: 0x3fa10c, Func Offset: 0x3dc
	// Line 1378, Address: 0x3fa110, Func Offset: 0x3e0
	// Line 1381, Address: 0x3fa114, Func Offset: 0x3e4
	// Line 1378, Address: 0x3fa11c, Func Offset: 0x3ec
	// Line 1381, Address: 0x3fa124, Func Offset: 0x3f4
	// Line 1378, Address: 0x3fa12c, Func Offset: 0x3fc
	// Line 1381, Address: 0x3fa1a0, Func Offset: 0x470
	// Line 1382, Address: 0x3fa1b0, Func Offset: 0x480
	// Line 1383, Address: 0x3fa1c0, Func Offset: 0x490
	// Line 1384, Address: 0x3fa1d0, Func Offset: 0x4a0
	// Line 1387, Address: 0x3fa1e0, Func Offset: 0x4b0
	// Line 1388, Address: 0x3fa200, Func Offset: 0x4d0
	// Line 1389, Address: 0x3fa20c, Func Offset: 0x4dc
	// Line 1411, Address: 0x3fa230, Func Offset: 0x500
	// Line 1412, Address: 0x3fa244, Func Offset: 0x514
	// Line 1428, Address: 0x3fa254, Func Offset: 0x524
	// Line 1429, Address: 0x3fa264, Func Offset: 0x534
	// Line 1434, Address: 0x3fa268, Func Offset: 0x538
	// Line 1436, Address: 0x3fa284, Func Offset: 0x554
	// Line 1438, Address: 0x3fa28c, Func Offset: 0x55c
	// Func End, Address: 0x3fa2a8, Func Offset: 0x578
}

// xEntLoad__FP4xEntP7xSerial
// Start address: 0x3fa2b0
void xEntLoad(xEnt* ent, xSerial* s)
{
	int32 b;
	// Line 1243, Address: 0x3fa2b0, Func Offset: 0
	// Line 1244, Address: 0x3fa2c4, Func Offset: 0x14
	// Line 1251, Address: 0x3fa2cc, Func Offset: 0x1c
	// Line 1252, Address: 0x3fa2dc, Func Offset: 0x2c
	// Line 1253, Address: 0x3fa2e8, Func Offset: 0x38
	// Line 1255, Address: 0x3fa310, Func Offset: 0x60
	// Line 1257, Address: 0x3fa330, Func Offset: 0x80
	// Func End, Address: 0x3fa344, Func Offset: 0x94
}

// xEntSave__FP4xEntP7xSerial
// Start address: 0x3fa350
void xEntSave(xEnt* ent, xSerial* s)
{
	// Line 1224, Address: 0x3fa350, Func Offset: 0
	// Line 1225, Address: 0x3fa364, Func Offset: 0x14
	// Line 1230, Address: 0x3fa36c, Func Offset: 0x1c
	// Line 1231, Address: 0x3fa37c, Func Offset: 0x2c
	// Line 1233, Address: 0x3fa390, Func Offset: 0x40
	// Line 1235, Address: 0x3fa398, Func Offset: 0x48
	// Func End, Address: 0x3fa3ac, Func Offset: 0x5c
}

// xEntSetup__FP4xEnt
// Start address: 0x3fa3b0
void xEntSetup(xEnt* ent)
{
	xSurface* surf;
	xModelInstance* minst;
	int32 i;
	xLinkAsset* la;
	xEnt* dent;
	// Line 1082, Address: 0x3fa3b0, Func Offset: 0
	// Line 1088, Address: 0x3fa3cc, Func Offset: 0x1c
	// Line 1091, Address: 0x3fa3d4, Func Offset: 0x24
	// Line 1094, Address: 0x3fa3e8, Func Offset: 0x38
	// Line 1114, Address: 0x3fa3f0, Func Offset: 0x40
	// Line 1115, Address: 0x3fa404, Func Offset: 0x54
	// Line 1116, Address: 0x3fa408, Func Offset: 0x58
	// Line 1115, Address: 0x3fa40c, Func Offset: 0x5c
	// Line 1116, Address: 0x3fa410, Func Offset: 0x60
	// Line 1134, Address: 0x3fa41c, Func Offset: 0x6c
	// Line 1137, Address: 0x3fa438, Func Offset: 0x88
	// Line 1143, Address: 0x3fa440, Func Offset: 0x90
	// Line 1137, Address: 0x3fa444, Func Offset: 0x94
	// Line 1138, Address: 0x3fa44c, Func Offset: 0x9c
	// Line 1139, Address: 0x3fa45c, Func Offset: 0xac
	// Line 1140, Address: 0x3fa46c, Func Offset: 0xbc
	// Line 1143, Address: 0x3fa478, Func Offset: 0xc8
	// Line 1144, Address: 0x3fa480, Func Offset: 0xd0
	// Line 1147, Address: 0x3fa548, Func Offset: 0x198
	// Line 1197, Address: 0x3fa554, Func Offset: 0x1a4
	// Line 1199, Address: 0x3fa560, Func Offset: 0x1b0
	// Line 1201, Address: 0x3fa56c, Func Offset: 0x1bc
	// Line 1202, Address: 0x3fa578, Func Offset: 0x1c8
	// Line 1207, Address: 0x3fa598, Func Offset: 0x1e8
	// Line 1210, Address: 0x3fa5a8, Func Offset: 0x1f8
	// Line 1213, Address: 0x3fa5b8, Func Offset: 0x208
	// Line 1117, Address: 0x3fa614, Func Offset: 0x264
	// Line 1213, Address: 0x3fa618, Func Offset: 0x268
	// Line 1124, Address: 0x3fa62c, Func Offset: 0x27c
	// Line 1213, Address: 0x3fa630, Func Offset: 0x280
	// Line 1130, Address: 0x3fa63c, Func Offset: 0x28c
	// Line 1213, Address: 0x3fa644, Func Offset: 0x294
	// Line 1122, Address: 0x3fa658, Func Offset: 0x2a8
	// Line 1213, Address: 0x3fa65c, Func Offset: 0x2ac
	// Line 1144, Address: 0x3fa674, Func Offset: 0x2c4
	// Line 1213, Address: 0x3fa680, Func Offset: 0x2d0
	// Line 1200, Address: 0x3fa68c, Func Offset: 0x2dc
	// Line 1213, Address: 0x3fa69c, Func Offset: 0x2ec
	// Line 1201, Address: 0x3fa6a4, Func Offset: 0x2f4
	// Line 1213, Address: 0x3fa6ac, Func Offset: 0x2fc
	// Func End, Address: 0x3fa6e0, Func Offset: 0x330
}

// drop_stacked_entity__19@unnamed@xWad2_cpp@FR4xEnt
// Start address: 0x3fa6e0
void drop_stacked_entity(xEnt& ent)
{
	// Line 1046, Address: 0x3fa6e0, Func Offset: 0
	// Line 1049, Address: 0x3fa6e4, Func Offset: 0x4
	// Func End, Address: 0x3fa6ec, Func Offset: 0xc
}

// dismount_stacked_entity__19@unnamed@xWad2_cpp@FR4xEnt
// Start address: 0x3fa6f0
void dismount_stacked_entity(xEnt& ent)
{
	zDestructible* durst;
	// Line 1006, Address: 0x3fa6f0, Func Offset: 0
	// Line 1007, Address: 0x3fa704, Func Offset: 0x14
	// Line 1011, Address: 0x3fa70c, Func Offset: 0x1c
	// Line 1012, Address: 0x3fa714, Func Offset: 0x24
	// Line 1014, Address: 0x3fa71c, Func Offset: 0x2c
	// Line 1015, Address: 0x3fa720, Func Offset: 0x30
	// Line 1018, Address: 0x3fa72c, Func Offset: 0x3c
	// Line 1023, Address: 0x3fa738, Func Offset: 0x48
	// Line 1024, Address: 0x3fa744, Func Offset: 0x54
	// Func End, Address: 0x3fa768, Func Offset: 0x78
}

// drop_driven_stacked_entity__19@unnamed@xWad2_cpp@FR4xEnt
// Start address: 0x3fa770
void drop_driven_stacked_entity(xEnt& ent)
{
	// Line 988, Address: 0x3fa770, Func Offset: 0
	// Line 989, Address: 0x3fa77c, Func Offset: 0xc
	// Line 992, Address: 0x3fa790, Func Offset: 0x20
	// Line 993, Address: 0x3fa79c, Func Offset: 0x2c
	// Line 997, Address: 0x3fa7a8, Func Offset: 0x38
	// Line 999, Address: 0x3fa7b0, Func Offset: 0x40
	// Line 1000, Address: 0x3fa7bc, Func Offset: 0x4c
	// Line 1001, Address: 0x3fa7c8, Func Offset: 0x58
	// Line 1003, Address: 0x3faa2c, Func Offset: 0x2bc
	// Func End, Address: 0x3faa38, Func Offset: 0x2c8
}

// stacked_owner_destroyed__19@unnamed@xWad2_cpp@FP13zDestructiblePv
// Start address: 0x3faa40
void stacked_owner_destroyed(void* context)
{
	// Line 961, Address: 0x3faa40, Func Offset: 0
	// Func End, Address: 0x3faa48, Func Offset: 0x8
}

// collide_downward__19@unnamed@xWad2_cpp@FR5xVec3RP4xEntR6xSceneR4xEntf
// Start address: 0x3faa50
uint8 collide_downward(xVec3& loc, xEnt&* hit, xScene& s, xEnt& ent, float32 max_dist)
{
	xRay3 ray;
	uint8 old_bound_type;
	float32 old_bound_radius;
	xCollis coll;
	// Line 884, Address: 0x3faa50, Func Offset: 0
	// Line 885, Address: 0x3faa54, Func Offset: 0x4
	// Line 884, Address: 0x3faa58, Func Offset: 0x8
	// Line 885, Address: 0x3faa88, Func Offset: 0x38
	// Line 888, Address: 0x3fab20, Func Offset: 0xd0
	// Line 889, Address: 0x3fab24, Func Offset: 0xd4
	// Line 888, Address: 0x3fab28, Func Offset: 0xd8
	// Line 892, Address: 0x3fab2c, Func Offset: 0xdc
	// Line 888, Address: 0x3fab30, Func Offset: 0xe0
	// Line 913, Address: 0x3fab34, Func Offset: 0xe4
	// Line 891, Address: 0x3fab38, Func Offset: 0xe8
	// Line 897, Address: 0x3fab3c, Func Offset: 0xec
	// Line 906, Address: 0x3fab40, Func Offset: 0xf0
	// Line 912, Address: 0x3fab44, Func Offset: 0xf4
	// Line 888, Address: 0x3fab48, Func Offset: 0xf8
	// Line 913, Address: 0x3fab4c, Func Offset: 0xfc
	// Line 886, Address: 0x3fab58, Func Offset: 0x108
	// Line 888, Address: 0x3fab5c, Func Offset: 0x10c
	// Line 889, Address: 0x3fab60, Func Offset: 0x110
	// Line 888, Address: 0x3fab64, Func Offset: 0x114
	// Line 892, Address: 0x3fab68, Func Offset: 0x118
	// Line 888, Address: 0x3fab6c, Func Offset: 0x11c
	// Line 889, Address: 0x3fab70, Func Offset: 0x120
	// Line 891, Address: 0x3fab74, Func Offset: 0x124
	// Line 889, Address: 0x3fab78, Func Offset: 0x128
	// Line 890, Address: 0x3fab7c, Func Offset: 0x12c
	// Line 895, Address: 0x3fab80, Func Offset: 0x130
	// Line 896, Address: 0x3fab84, Func Offset: 0x134
	// Line 897, Address: 0x3fab88, Func Offset: 0x138
	// Line 898, Address: 0x3fab8c, Func Offset: 0x13c
	// Line 906, Address: 0x3fab90, Func Offset: 0x140
	// Line 913, Address: 0x3fab94, Func Offset: 0x144
	// Line 917, Address: 0x3fab9c, Func Offset: 0x14c
	// Line 918, Address: 0x3faba0, Func Offset: 0x150
	// Line 919, Address: 0x3faba4, Func Offset: 0x154
	// Line 921, Address: 0x3fabac, Func Offset: 0x15c
	// Line 952, Address: 0x3fabbc, Func Offset: 0x16c
	// Line 885, Address: 0x3fabd8, Func Offset: 0x188
	// Line 952, Address: 0x3fabe0, Func Offset: 0x190
	// Line 926, Address: 0x3fabe4, Func Offset: 0x194
	// Line 952, Address: 0x3fabe8, Func Offset: 0x198
	// Line 924, Address: 0x3fac0c, Func Offset: 0x1bc
	// Line 952, Address: 0x3fac14, Func Offset: 0x1c4
	// Line 954, Address: 0x3fac20, Func Offset: 0x1d0
	// Func End, Address: 0x3fac48, Func Offset: 0x1f8
}

// xEntInitForType__FP4xEnt
// Start address: 0x3fac50
void xEntInitForType(xEnt* ent)
{
	// Line 682, Address: 0x3fac50, Func Offset: 0
	// Line 684, Address: 0x3fac54, Func Offset: 0x4
	// Line 682, Address: 0x3fac58, Func Offset: 0x8
	// Line 685, Address: 0x3fac5c, Func Offset: 0xc
	// Line 682, Address: 0x3fac60, Func Offset: 0x10
	// Line 684, Address: 0x3fac64, Func Offset: 0x14
	// Line 685, Address: 0x3fac6c, Func Offset: 0x1c
	// Line 688, Address: 0x3fac78, Func Offset: 0x28
	// Line 693, Address: 0x3facb8, Func Offset: 0x68
	// Line 700, Address: 0x3facbc, Func Offset: 0x6c
	// Line 693, Address: 0x3facc0, Func Offset: 0x70
	// Line 700, Address: 0x3facc8, Func Offset: 0x78
	// Line 703, Address: 0x3faccc, Func Offset: 0x7c
	// Line 707, Address: 0x3facd4, Func Offset: 0x84
	// Line 709, Address: 0x3facd8, Func Offset: 0x88
	// Line 707, Address: 0x3facdc, Func Offset: 0x8c
	// Line 709, Address: 0x3face4, Func Offset: 0x94
	// Line 712, Address: 0x3face8, Func Offset: 0x98
	// Line 716, Address: 0x3facf0, Func Offset: 0xa0
	// Line 719, Address: 0x3facf4, Func Offset: 0xa4
	// Line 716, Address: 0x3facf8, Func Offset: 0xa8
	// Line 718, Address: 0x3fad00, Func Offset: 0xb0
	// Line 719, Address: 0x3fad04, Func Offset: 0xb4
	// Line 720, Address: 0x3fad14, Func Offset: 0xc4
	// Line 722, Address: 0x3fad24, Func Offset: 0xd4
	// Line 724, Address: 0x3fad28, Func Offset: 0xd8
	// Line 722, Address: 0x3fad2c, Func Offset: 0xdc
	// Line 724, Address: 0x3fad34, Func Offset: 0xe4
	// Line 727, Address: 0x3fad38, Func Offset: 0xe8
	// Line 739, Address: 0x3fad40, Func Offset: 0xf0
	// Line 741, Address: 0x3fad4c, Func Offset: 0xfc
	// Line 749, Address: 0x3fad50, Func Offset: 0x100
	// Line 751, Address: 0x3fad5c, Func Offset: 0x10c
	// Line 769, Address: 0x3fad60, Func Offset: 0x110
	// Line 773, Address: 0x3fad68, Func Offset: 0x118
	// Line 776, Address: 0x3fad6c, Func Offset: 0x11c
	// Line 773, Address: 0x3fad70, Func Offset: 0x120
	// Line 775, Address: 0x3fad78, Func Offset: 0x128
	// Line 776, Address: 0x3fad7c, Func Offset: 0x12c
	// Line 777, Address: 0x3fad8c, Func Offset: 0x13c
	// Line 779, Address: 0x3fad9c, Func Offset: 0x14c
	// Line 784, Address: 0x3fada0, Func Offset: 0x150
	// Line 779, Address: 0x3fada4, Func Offset: 0x154
	// Line 781, Address: 0x3fadac, Func Offset: 0x15c
	// Line 782, Address: 0x3fadb0, Func Offset: 0x160
	// Line 784, Address: 0x3fadb4, Func Offset: 0x164
	// Line 786, Address: 0x3fadc4, Func Offset: 0x174
	// Line 789, Address: 0x3fadcc, Func Offset: 0x17c
	// Line 786, Address: 0x3fadd0, Func Offset: 0x180
	// Line 789, Address: 0x3fadd4, Func Offset: 0x184
	// Line 791, Address: 0x3faddc, Func Offset: 0x18c
	// Line 793, Address: 0x3fade4, Func Offset: 0x194
	// Line 803, Address: 0x3fadec, Func Offset: 0x19c
	// Line 806, Address: 0x3fae18, Func Offset: 0x1c8
	// Line 807, Address: 0x3fae2c, Func Offset: 0x1dc
	// Line 824, Address: 0x3fae3c, Func Offset: 0x1ec
	// Line 825, Address: 0x3fae48, Func Offset: 0x1f8
	// Func End, Address: 0x3fae58, Func Offset: 0x208
}

// xEntGrowGlobalBoundingBox__FPC5xVec3
// Start address: 0x3fae60
void xEntGrowGlobalBoundingBox(xVec3* pos)
{
	// Line 672, Address: 0x3fae60, Func Offset: 0
	// Line 673, Address: 0x3fae68, Func Offset: 0x8
	// Line 677, Address: 0x3fae74, Func Offset: 0x14
	// Line 679, Address: 0x3fae84, Func Offset: 0x24
	// Line 674, Address: 0x3fae90, Func Offset: 0x30
	// Line 679, Address: 0x3fae94, Func Offset: 0x34
	// Line 676, Address: 0x3fae9c, Func Offset: 0x3c
	// Line 679, Address: 0x3faea4, Func Offset: 0x44
	// Func End, Address: 0x3faeac, Func Offset: 0x4c
}

// xEntInit__FP4xEntP9xEntAsset
// Start address: 0x3faeb0
void xEntInit(xEnt* ent, xEntAsset* asset)
{
	// Line 609, Address: 0x3faeb0, Func Offset: 0
	// Line 625, Address: 0x3faec4, Func Offset: 0x14
	// Line 630, Address: 0x3faecc, Func Offset: 0x1c
	// Line 627, Address: 0x3faed0, Func Offset: 0x20
	// Line 630, Address: 0x3faed4, Func Offset: 0x24
	// Line 662, Address: 0x3faed8, Func Offset: 0x28
	// Line 630, Address: 0x3faedc, Func Offset: 0x2c
	// Line 631, Address: 0x3faee0, Func Offset: 0x30
	// Line 632, Address: 0x3faeec, Func Offset: 0x3c
	// Line 634, Address: 0x3faef8, Func Offset: 0x48
	// Line 633, Address: 0x3faefc, Func Offset: 0x4c
	// Line 634, Address: 0x3faf00, Func Offset: 0x50
	// Line 637, Address: 0x3faf08, Func Offset: 0x58
	// Line 662, Address: 0x3faf0c, Func Offset: 0x5c
	// Line 637, Address: 0x3faf10, Func Offset: 0x60
	// Line 638, Address: 0x3faf14, Func Offset: 0x64
	// Line 639, Address: 0x3faf18, Func Offset: 0x68
	// Line 640, Address: 0x3faf20, Func Offset: 0x70
	// Line 641, Address: 0x3faf28, Func Offset: 0x78
	// Line 642, Address: 0x3faf30, Func Offset: 0x80
	// Line 643, Address: 0x3faf34, Func Offset: 0x84
	// Line 644, Address: 0x3faf38, Func Offset: 0x88
	// Line 645, Address: 0x3faf3c, Func Offset: 0x8c
	// Line 647, Address: 0x3faf40, Func Offset: 0x90
	// Line 648, Address: 0x3faf44, Func Offset: 0x94
	// Line 649, Address: 0x3faf48, Func Offset: 0x98
	// Line 650, Address: 0x3faf4c, Func Offset: 0x9c
	// Line 651, Address: 0x3faf50, Func Offset: 0xa0
	// Line 655, Address: 0x3faf54, Func Offset: 0xa4
	// Line 656, Address: 0x3faf58, Func Offset: 0xa8
	// Line 659, Address: 0x3faf5c, Func Offset: 0xac
	// Line 662, Address: 0x3faf68, Func Offset: 0xb8
	// Line 665, Address: 0x3faf88, Func Offset: 0xd8
	// Line 668, Address: 0x3faf8c, Func Offset: 0xdc
	// Line 669, Address: 0x3fafac, Func Offset: 0xfc
	// Line 668, Address: 0x3fafb4, Func Offset: 0x104
	// Line 669, Address: 0x3fafb8, Func Offset: 0x108
	// Line 668, Address: 0x3fafc0, Func Offset: 0x110
	// Line 669, Address: 0x3fafc8, Func Offset: 0x118
	// Func End, Address: 0x3fafd8, Func Offset: 0x128
}

// xEntAddHittableFlag__FP4xEnt
// Start address: 0x3fafe0
void xEntAddHittableFlag(xEnt* ent)
{
	uint32 i;
	// Line 508, Address: 0x3fafe0, Func Offset: 0
	// Line 510, Address: 0x3fafe4, Func Offset: 0x4
	// Line 508, Address: 0x3fafe8, Func Offset: 0x8
	// Line 510, Address: 0x3faff8, Func Offset: 0x18
	// Line 522, Address: 0x3fb038, Func Offset: 0x58
	// Line 523, Address: 0x3fb050, Func Offset: 0x70
	// Line 538, Address: 0x3fb0e0, Func Offset: 0x100
	// Line 523, Address: 0x3fb0e4, Func Offset: 0x104
	// Line 538, Address: 0x3fb0e8, Func Offset: 0x108
	// Line 540, Address: 0x3fb0f8, Func Offset: 0x118
	// Line 516, Address: 0x3fb104, Func Offset: 0x124
	// Line 517, Address: 0x3fb108, Func Offset: 0x128
	// Line 540, Address: 0x3fb110, Func Offset: 0x130
	// Line 535, Address: 0x3fb114, Func Offset: 0x134
	// Line 540, Address: 0x3fb118, Func Offset: 0x138
	// Func End, Address: 0x3fb130, Func Offset: 0x150
}

// xEntSceneExit__Fv
// Start address: 0x3fb130
void xEntSceneExit()
{
	// Line 454, Address: 0x3fb130, Func Offset: 0
	// Func End, Address: 0x3fb138, Func Offset: 0x8
}

// xEntSceneInit__Fv
// Start address: 0x3fb140
void xEntSceneInit()
{
	// Line 446, Address: 0x3fb140, Func Offset: 0
	// Line 447, Address: 0x3fb144, Func Offset: 0x4
	// Func End, Address: 0x3fb14c, Func Offset: 0xc
}

// reset__Q219@unnamed@xWad2_cpp@9anim_collFR4xEnt
// Start address: 0x3fb150
void reset(xEnt& ent)
{
	xModelInstance& model;
	xMat4x3& mat;
	anim_coll_data& ac;
	xBox& box;
	xVec3 size;
	float32 max_size;
	// Line 235, Address: 0x3fb150, Func Offset: 0
	// Line 236, Address: 0x3fb170, Func Offset: 0x20
	// Line 242, Address: 0x3fb17c, Func Offset: 0x2c
	// Line 244, Address: 0x3fb184, Func Offset: 0x34
	// Line 246, Address: 0x3fb194, Func Offset: 0x44
	// Line 253, Address: 0x3fb1b4, Func Offset: 0x64
	// Line 255, Address: 0x3fb1b8, Func Offset: 0x68
	// Line 253, Address: 0x3fb1bc, Func Offset: 0x6c
	// Line 255, Address: 0x3fb1c0, Func Offset: 0x70
	// Line 254, Address: 0x3fb1c4, Func Offset: 0x74
	// Line 255, Address: 0x3fb1c8, Func Offset: 0x78
	// Line 254, Address: 0x3fb1cc, Func Offset: 0x7c
	// Line 255, Address: 0x3fb1d0, Func Offset: 0x80
	// Line 254, Address: 0x3fb1d4, Func Offset: 0x84
	// Line 255, Address: 0x3fb1d8, Func Offset: 0x88
	// Line 254, Address: 0x3fb204, Func Offset: 0xb4
	// Line 255, Address: 0x3fb208, Func Offset: 0xb8
	// Line 254, Address: 0x3fb20c, Func Offset: 0xbc
	// Line 255, Address: 0x3fb27c, Func Offset: 0x12c
	// Line 256, Address: 0x3fb2f8, Func Offset: 0x1a8
	// Line 258, Address: 0x3fb300, Func Offset: 0x1b0
	// Line 260, Address: 0x3fb304, Func Offset: 0x1b4
	// Line 258, Address: 0x3fb330, Func Offset: 0x1e0
	// Line 260, Address: 0x3fb334, Func Offset: 0x1e4
	// Line 258, Address: 0x3fb338, Func Offset: 0x1e8
	// Line 260, Address: 0x3fb33c, Func Offset: 0x1ec
	// Line 259, Address: 0x3fb340, Func Offset: 0x1f0
	// Line 260, Address: 0x3fb344, Func Offset: 0x1f4
	// Line 259, Address: 0x3fb348, Func Offset: 0x1f8
	// Line 260, Address: 0x3fb34c, Func Offset: 0x1fc
	// Line 259, Address: 0x3fb350, Func Offset: 0x200
	// Line 260, Address: 0x3fb354, Func Offset: 0x204
	// Line 277, Address: 0x3fb358, Func Offset: 0x208
	// Line 259, Address: 0x3fb35c, Func Offset: 0x20c
	// Line 260, Address: 0x3fb3d0, Func Offset: 0x280
	// Line 277, Address: 0x3fb44c, Func Offset: 0x2fc
	// Line 286, Address: 0x3fb454, Func Offset: 0x304
	// Line 285, Address: 0x3fb478, Func Offset: 0x328
	// Line 286, Address: 0x3fb47c, Func Offset: 0x32c
	// Line 287, Address: 0x3fb4c8, Func Offset: 0x378
	// Line 286, Address: 0x3fb4d0, Func Offset: 0x380
	// Line 288, Address: 0x3fb4d4, Func Offset: 0x384
	// Line 289, Address: 0x3fb4e8, Func Offset: 0x398
	// Line 290, Address: 0x3fb4f8, Func Offset: 0x3a8
	// Line 293, Address: 0x3fb4fc, Func Offset: 0x3ac
	// Line 290, Address: 0x3fb500, Func Offset: 0x3b0
	// Line 293, Address: 0x3fb504, Func Offset: 0x3b4
	// Line 290, Address: 0x3fb50c, Func Offset: 0x3bc
	// Line 291, Address: 0x3fb510, Func Offset: 0x3c0
	// Line 292, Address: 0x3fb534, Func Offset: 0x3e4
	// Line 293, Address: 0x3fb558, Func Offset: 0x408
	// Line 301, Address: 0x3fb568, Func Offset: 0x418
	// Line 238, Address: 0x3fb574, Func Offset: 0x424
	// Line 301, Address: 0x3fb578, Func Offset: 0x428
	// Func End, Address: 0x3fb5bc, Func Offset: 0x46c
}

