



void cb_dispatch(xBase* to, uint32 event);
void create_flames(int32 flags);
void fire_reset();
void render_all();
void update_all(float32 dt);
void setup_all();
void scene_exit();
void scene_enter();
void get_bounding_box(xBox& box);
void load(xBase& data, xDynAsset& asset);

// cb_dispatch__13zFlameEmitterFP5xBaseP5xBaseUiPCfP5xBaseUi
// Start address: 0x2dcd30
void zFlameEmitter::cb_dispatch(xBase* to, uint32 event)
{
	zFlameEmitter& e;
	// Line 422, Address: 0x2dcd30, Func Offset: 0
	// Line 427, Address: 0x2dcd34, Func Offset: 0x4
	// Line 422, Address: 0x2dcd38, Func Offset: 0x8
	// Line 427, Address: 0x2dcd48, Func Offset: 0x18
	// Line 430, Address: 0x2dcdb8, Func Offset: 0x88
	// Line 431, Address: 0x2dcdc0, Func Offset: 0x90
	// Line 433, Address: 0x2dcdc8, Func Offset: 0x98
	// Line 434, Address: 0x2dcdd0, Func Offset: 0xa0
	// Line 436, Address: 0x2dcdd8, Func Offset: 0xa8
	// Line 440, Address: 0x2dce70, Func Offset: 0x140
	// Line 444, Address: 0x2dcec8, Func Offset: 0x198
	// Line 445, Address: 0x2dceec, Func Offset: 0x1bc
	// Line 447, Address: 0x2dcef4, Func Offset: 0x1c4
	// Line 448, Address: 0x2dcf18, Func Offset: 0x1e8
	// Line 450, Address: 0x2dcf20, Func Offset: 0x1f0
	// Line 456, Address: 0x2dcf78, Func Offset: 0x248
	// Line 436, Address: 0x2dcf88, Func Offset: 0x258
	// Line 437, Address: 0x2dcf90, Func Offset: 0x260
	// Line 456, Address: 0x2dcf98, Func Offset: 0x268
	// Line 440, Address: 0x2dcfa0, Func Offset: 0x270
	// Line 441, Address: 0x2dcfa8, Func Offset: 0x278
	// Line 456, Address: 0x2dcfb0, Func Offset: 0x280
	// Line 450, Address: 0x2dcfb8, Func Offset: 0x288
	// Line 456, Address: 0x2dcfc8, Func Offset: 0x298
	// Func End, Address: 0x2dcfe0, Func Offset: 0x2b0
}

// create_flames__13zFlameEmitterFi
// Start address: 0x2dcfe0
void zFlameEmitter::create_flames(int32 flags)
{
	float32 radius;
	float32 width;
	int32 ux;
	int32 uz;
	spawn_data sd;
	xVec3& center;
	xVec3 dx;
	xVec3 dz;
	float32 hx;
	float32 hz;
	xVec3 corner;
	handle* flame;
	handle* end_flame;
	uint32 ix;
	xVec3 v;
	uint32 iz;
	// Line 276, Address: 0x2dcfe0, Func Offset: 0
	// Line 277, Address: 0x2dd028, Func Offset: 0x48
	// Line 283, Address: 0x2dd040, Func Offset: 0x60
	// Line 285, Address: 0x2dd04c, Func Offset: 0x6c
	// Line 286, Address: 0x2dd064, Func Offset: 0x84
	// Line 285, Address: 0x2dd070, Func Offset: 0x90
	// Line 287, Address: 0x2dd074, Func Offset: 0x94
	// Line 286, Address: 0x2dd07c, Func Offset: 0x9c
	// Line 288, Address: 0x2dd080, Func Offset: 0xa0
	// Line 289, Address: 0x2dd09c, Func Offset: 0xbc
	// Line 290, Address: 0x2dd0a4, Func Offset: 0xc4
	// Line 293, Address: 0x2dd0ac, Func Offset: 0xcc
	// Line 294, Address: 0x2dd0c4, Func Offset: 0xe4
	// Line 296, Address: 0x2dd0c8, Func Offset: 0xe8
	// Line 294, Address: 0x2dd0cc, Func Offset: 0xec
	// Line 293, Address: 0x2dd0d4, Func Offset: 0xf4
	// Line 295, Address: 0x2dd0d8, Func Offset: 0xf8
	// Line 294, Address: 0x2dd0dc, Func Offset: 0xfc
	// Line 295, Address: 0x2dd0e0, Func Offset: 0x100
	// Line 297, Address: 0x2dd0f4, Func Offset: 0x114
	// Line 300, Address: 0x2dd100, Func Offset: 0x120
	// Line 309, Address: 0x2dd110, Func Offset: 0x130
	// Line 311, Address: 0x2dd118, Func Offset: 0x138
	// Line 312, Address: 0x2dd128, Func Offset: 0x148
	// Line 320, Address: 0x2dd12c, Func Offset: 0x14c
	// Line 321, Address: 0x2dd138, Func Offset: 0x158
	// Line 317, Address: 0x2dd144, Func Offset: 0x164
	// Line 321, Address: 0x2dd148, Func Offset: 0x168
	// Line 324, Address: 0x2dd164, Func Offset: 0x184
	// Line 338, Address: 0x2dd198, Func Offset: 0x1b8
	// Line 324, Address: 0x2dd19c, Func Offset: 0x1bc
	// Line 338, Address: 0x2dd1a8, Func Offset: 0x1c8
	// Line 324, Address: 0x2dd1ac, Func Offset: 0x1cc
	// Line 338, Address: 0x2dd1b8, Func Offset: 0x1d8
	// Line 324, Address: 0x2dd1bc, Func Offset: 0x1dc
	// Line 340, Address: 0x2dd1c4, Func Offset: 0x1e4
	// Line 343, Address: 0x2dd1d8, Func Offset: 0x1f8
	// Line 344, Address: 0x2dd1dc, Func Offset: 0x1fc
	// Line 345, Address: 0x2dd21c, Func Offset: 0x23c
	// Line 344, Address: 0x2dd224, Func Offset: 0x244
	// Line 345, Address: 0x2dd238, Func Offset: 0x258
	// Line 346, Address: 0x2dd25c, Func Offset: 0x27c
	// Line 345, Address: 0x2dd260, Func Offset: 0x280
	// Line 346, Address: 0x2dd268, Func Offset: 0x288
	// Line 345, Address: 0x2dd26c, Func Offset: 0x28c
	// Line 348, Address: 0x2dd278, Func Offset: 0x298
	// Line 346, Address: 0x2dd27c, Func Offset: 0x29c
	// Line 345, Address: 0x2dd284, Func Offset: 0x2a4
	// Line 346, Address: 0x2dd288, Func Offset: 0x2a8
	// Line 348, Address: 0x2dd298, Func Offset: 0x2b8
	// Line 346, Address: 0x2dd29c, Func Offset: 0x2bc
	// Line 345, Address: 0x2dd2a4, Func Offset: 0x2c4
	// Line 346, Address: 0x2dd2a8, Func Offset: 0x2c8
	// Line 345, Address: 0x2dd2ac, Func Offset: 0x2cc
	// Line 346, Address: 0x2dd2b0, Func Offset: 0x2d0
	// Line 345, Address: 0x2dd2b4, Func Offset: 0x2d4
	// Line 348, Address: 0x2dd2bc, Func Offset: 0x2dc
	// Line 356, Address: 0x2dd2e4, Func Offset: 0x304
	// Line 348, Address: 0x2dd2e8, Func Offset: 0x308
	// Line 357, Address: 0x2dd2f4, Func Offset: 0x314
	// Line 348, Address: 0x2dd2f8, Func Offset: 0x318
	// Line 356, Address: 0x2dd308, Func Offset: 0x328
	// Line 348, Address: 0x2dd30c, Func Offset: 0x32c
	// Line 356, Address: 0x2dd310, Func Offset: 0x330
	// Line 348, Address: 0x2dd314, Func Offset: 0x334
	// Line 356, Address: 0x2dd318, Func Offset: 0x338
	// Line 348, Address: 0x2dd31c, Func Offset: 0x33c
	// Line 357, Address: 0x2dd358, Func Offset: 0x378
	// Line 348, Address: 0x2dd35c, Func Offset: 0x37c
	// Line 357, Address: 0x2dd360, Func Offset: 0x380
	// Line 359, Address: 0x2dd390, Func Offset: 0x3b0
	// Line 360, Address: 0x2dd398, Func Offset: 0x3b8
	// Line 359, Address: 0x2dd3a0, Func Offset: 0x3c0
	// Line 360, Address: 0x2dd3a4, Func Offset: 0x3c4
	// Line 374, Address: 0x2dd3b0, Func Offset: 0x3d0
	// Line 375, Address: 0x2dd3bc, Func Offset: 0x3dc
	// Line 374, Address: 0x2dd3c0, Func Offset: 0x3e0
	// Line 375, Address: 0x2dd3c8, Func Offset: 0x3e8
	// Line 374, Address: 0x2dd3d0, Func Offset: 0x3f0
	// Line 375, Address: 0x2dd3d4, Func Offset: 0x3f4
	// Line 374, Address: 0x2dd3d8, Func Offset: 0x3f8
	// Line 375, Address: 0x2dd3e0, Func Offset: 0x400
	// Line 374, Address: 0x2dd3e4, Func Offset: 0x404
	// Line 375, Address: 0x2dd3e8, Func Offset: 0x408
	// Line 374, Address: 0x2dd3ec, Func Offset: 0x40c
	// Line 375, Address: 0x2dd3f8, Func Offset: 0x418
	// Line 341, Address: 0x2dd40c, Func Offset: 0x42c
	// Line 375, Address: 0x2dd418, Func Offset: 0x438
	// Line 363, Address: 0x2dd444, Func Offset: 0x464
	// Line 375, Address: 0x2dd448, Func Offset: 0x468
	// Line 363, Address: 0x2dd458, Func Offset: 0x478
	// Line 375, Address: 0x2dd45c, Func Offset: 0x47c
	// Line 363, Address: 0x2dd46c, Func Offset: 0x48c
	// Line 375, Address: 0x2dd474, Func Offset: 0x494
	// Line 363, Address: 0x2dd4a4, Func Offset: 0x4c4
	// Line 375, Address: 0x2dd4a8, Func Offset: 0x4c8
	// Line 363, Address: 0x2dd4b0, Func Offset: 0x4d0
	// Line 375, Address: 0x2dd4b4, Func Offset: 0x4d4
	// Line 363, Address: 0x2dd4b8, Func Offset: 0x4d8
	// Line 375, Address: 0x2dd4bc, Func Offset: 0x4dc
	// Line 364, Address: 0x2dd4e0, Func Offset: 0x500
	// Line 365, Address: 0x2dd4e4, Func Offset: 0x504
	// Line 375, Address: 0x2dd4e8, Func Offset: 0x508
	// Line 364, Address: 0x2dd4f8, Func Offset: 0x518
	// Line 375, Address: 0x2dd4fc, Func Offset: 0x51c
	// Line 364, Address: 0x2dd50c, Func Offset: 0x52c
	// Line 375, Address: 0x2dd514, Func Offset: 0x534
	// Line 364, Address: 0x2dd544, Func Offset: 0x564
	// Line 375, Address: 0x2dd548, Func Offset: 0x568
	// Line 364, Address: 0x2dd550, Func Offset: 0x570
	// Line 375, Address: 0x2dd554, Func Offset: 0x574
	// Line 364, Address: 0x2dd558, Func Offset: 0x578
	// Line 375, Address: 0x2dd55c, Func Offset: 0x57c
	// Line 371, Address: 0x2dd58c, Func Offset: 0x5ac
	// Line 375, Address: 0x2dd590, Func Offset: 0x5b0
	// Line 372, Address: 0x2dd5a4, Func Offset: 0x5c4
	// Line 375, Address: 0x2dd5b0, Func Offset: 0x5d0
	// Line 377, Address: 0x2dd5c8, Func Offset: 0x5e8
	// Line 378, Address: 0x2dd5e4, Func Offset: 0x604
	// Func End, Address: 0x2dd62c, Func Offset: 0x64c
}

// fire_reset__13zFlameEmitterFv
// Start address: 0x2dd630
void zFlameEmitter::fire_reset()
{
	zScene& scene;
	zFlameEmitter* it;
	zFlameEmitter* end;
	// Line 234, Address: 0x2dd630, Func Offset: 0
	// Line 235, Address: 0x2dd638, Func Offset: 0x8
	// Line 237, Address: 0x2dd648, Func Offset: 0x18
	// Line 238, Address: 0x2dd650, Func Offset: 0x20
	// Line 239, Address: 0x2dd670, Func Offset: 0x40
	// Func End, Address: 0x2dd690, Func Offset: 0x60
}

// render_all__13zFlameEmitterFv
// Start address: 0x2dd690
void zFlameEmitter::render_all()
{
	zScene& scene;
	zFlameEmitter* it;
	zFlameEmitter* end;
	// Line 225, Address: 0x2dd690, Func Offset: 0
	// Line 226, Address: 0x2dd698, Func Offset: 0x8
	// Line 228, Address: 0x2dd6a8, Func Offset: 0x18
	// Line 229, Address: 0x2dd6b0, Func Offset: 0x20
	// Line 230, Address: 0x2dd6d0, Func Offset: 0x40
	// Func End, Address: 0x2dd6d8, Func Offset: 0x48
}

// update_all__13zFlameEmitterFf
// Start address: 0x2dd6e0
void zFlameEmitter::update_all(float32 dt)
{
	zScene& scene;
	zFlameEmitter* it;
	zFlameEmitter* end;
	// Line 213, Address: 0x2dd6e0, Func Offset: 0
	// Line 215, Address: 0x2dd6e4, Func Offset: 0x4
	// Line 213, Address: 0x2dd6e8, Func Offset: 0x8
	// Line 215, Address: 0x2dd6fc, Func Offset: 0x1c
	// Line 216, Address: 0x2dd700, Func Offset: 0x20
	// Line 219, Address: 0x2dd710, Func Offset: 0x30
	// Line 220, Address: 0x2dd780, Func Offset: 0xa0
	// Line 219, Address: 0x2dd790, Func Offset: 0xb0
	// Line 220, Address: 0x2dd7b8, Func Offset: 0xd8
	// Line 219, Address: 0x2dd7c0, Func Offset: 0xe0
	// Line 220, Address: 0x2dd7d8, Func Offset: 0xf8
	// Func End, Address: 0x2dd7f4, Func Offset: 0x114
}

// setup_all__13zFlameEmitterFv
// Start address: 0x2dd800
void zFlameEmitter::setup_all()
{
	zScene& scene;
	zFlameEmitter* it;
	zFlameEmitter* end;
	// Line 203, Address: 0x2dd800, Func Offset: 0
	// Line 205, Address: 0x2dd804, Func Offset: 0x4
	// Line 203, Address: 0x2dd808, Func Offset: 0x8
	// Line 205, Address: 0x2dd81c, Func Offset: 0x1c
	// Line 206, Address: 0x2dd820, Func Offset: 0x20
	// Line 208, Address: 0x2dd830, Func Offset: 0x30
	// Line 209, Address: 0x2dd838, Func Offset: 0x38
	// Line 210, Address: 0x2dd908, Func Offset: 0x108
	// Func End, Address: 0x2dd93c, Func Offset: 0x13c
}

// scene_exit__13zFlameEmitterFv
// Start address: 0x2dd940
void zFlameEmitter::scene_exit()
{
	zScene& scene;
	zFlameEmitter* it;
	zFlameEmitter* end;
	// Line 192, Address: 0x2dd940, Func Offset: 0
	// Line 193, Address: 0x2dd944, Func Offset: 0x4
	// Line 192, Address: 0x2dd948, Func Offset: 0x8
	// Line 193, Address: 0x2dd95c, Func Offset: 0x1c
	// Line 194, Address: 0x2dd960, Func Offset: 0x20
	// Line 196, Address: 0x2dd970, Func Offset: 0x30
	// Line 197, Address: 0x2dd978, Func Offset: 0x38
	// Line 200, Address: 0x2dd9f8, Func Offset: 0xb8
	// Func End, Address: 0x2dda2c, Func Offset: 0xec
}

// scene_enter__13zFlameEmitterFv
// Start address: 0x2dda30
void zFlameEmitter::scene_enter()
{
	// Line 189, Address: 0x2dda30, Func Offset: 0
	// Func End, Address: 0x2dda38, Func Offset: 0x8
}

// get_bounding_box__13zFlameEmitterCFR4xBox
// Start address: 0x2dda40
void zFlameEmitter::get_bounding_box(xBox& box)
{
	xBox obb;
	// Line 175, Address: 0x2dda40, Func Offset: 0
	// Line 177, Address: 0x2dda44, Func Offset: 0x4
	// Line 175, Address: 0x2dda48, Func Offset: 0x8
	// Line 178, Address: 0x2dda4c, Func Offset: 0xc
	// Line 179, Address: 0x2dda50, Func Offset: 0x10
	// Line 180, Address: 0x2dda54, Func Offset: 0x14
	// Line 178, Address: 0x2dda58, Func Offset: 0x18
	// Line 177, Address: 0x2dda5c, Func Offset: 0x1c
	// Line 179, Address: 0x2dda60, Func Offset: 0x20
	// Line 177, Address: 0x2dda64, Func Offset: 0x24
	// Line 180, Address: 0x2dda6c, Func Offset: 0x2c
	// Line 177, Address: 0x2dda70, Func Offset: 0x30
	// Line 180, Address: 0x2dda74, Func Offset: 0x34
	// Line 177, Address: 0x2dda78, Func Offset: 0x38
	// Line 178, Address: 0x2dda7c, Func Offset: 0x3c
	// Line 179, Address: 0x2dda84, Func Offset: 0x44
	// Line 177, Address: 0x2dda88, Func Offset: 0x48
	// Line 179, Address: 0x2dda8c, Func Offset: 0x4c
	// Line 177, Address: 0x2dda90, Func Offset: 0x50
	// Line 179, Address: 0x2dda94, Func Offset: 0x54
	// Line 178, Address: 0x2dda9c, Func Offset: 0x5c
	// Line 179, Address: 0x2ddaa0, Func Offset: 0x60
	// Line 178, Address: 0x2ddaa4, Func Offset: 0x64
	// Line 179, Address: 0x2ddaa8, Func Offset: 0x68
	// Line 178, Address: 0x2ddaac, Func Offset: 0x6c
	// Line 180, Address: 0x2ddab8, Func Offset: 0x78
	// Line 181, Address: 0x2ddac0, Func Offset: 0x80
	// Func End, Address: 0x2ddacc, Func Offset: 0x8c
}

// load__13zFlameEmitterFR5xBaseR9xDynAssetUi
// Start address: 0x2ddad0
void zFlameEmitter::load(xBase& data, xDynAsset& asset)
{
	// Line 159, Address: 0x2ddad0, Func Offset: 0
	// Line 161, Address: 0x2ddad4, Func Offset: 0x4
	// Line 159, Address: 0x2ddad8, Func Offset: 0x8
	// Line 161, Address: 0x2ddaec, Func Offset: 0x1c
	// Line 162, Address: 0x2ddbec, Func Offset: 0x11c
	// Func End, Address: 0x2ddc04, Func Offset: 0x134
}

