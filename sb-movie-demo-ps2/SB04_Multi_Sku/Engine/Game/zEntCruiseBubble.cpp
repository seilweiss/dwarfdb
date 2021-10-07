



void render();
void zEntCruiseBubbleRenderFX();
void Flight_Start();
void Speak_Update();
void Speak_Start();
void Bang_Right();
void Bang_Left();
void RockStar_Action(en_tunefx tunefx, en_tunetran tran);
int32 Notify(en_haznote note, zNMEHazard* haz);
uint8 CheckAbilityToLaunch();
xMat4x3* GetMissileMat();
void reset_life();
xVec3& location();
float32 flying();
uint8 active();
xAnimTable* anim_table();
void insert_player_animations(xAnimTable& table);
void render_screen();
uint8 update(xScene* sc, float32 dt);
void launch();
void stop();
void init();
void deinit();
void xCamReturn();
void xCamLaunch();
void render_rings();
void RenderOneRing(float32 radius, xColor_tag color, RxObjSpace3DVertex** vertList, int32 first);
void load_cheat_tweak();
uint32 check_anim_aim();
void check_lock_target(xEnt* ent);
void lock_target(int32 index, xVec3* target, float32 opacity);
void render_hud();
void update_hud(float32 dt);
void render_timer(float32 alpha, float32 glow);
void render_glow(xModelInstance* model, basic_rect& r, float32 glow, float32 alpha);
void update_trail(float32 dt);
void add_trail_sample(xVec3& loc0, xVec3& dir0, xVec3& loc1, xVec3& dir1, float32 dt);
void reset_wake_ribbons();
void init_states();
RpAtomic* custom_bubble_render(RpAtomic* atomic);
void update_state(float32 dt);
void kill(uint8 reset_camera, uint8 abortive);
void abort();
void exit_triggers(xScene& s);
void notify_triggers(xScene& s, xSphere& o, xVec3& dir);
void damage_entity(xEnt& ent, xVec3& loc, xVec3& dir, xVec3& hit_norm, float32 radius, uint8 explosive);
void start();
void stop();
state_enum_0 update(float32 dt);
void start();
void stop();
state_enum_0 update(float32 dt);
void start();
void stop();
state_enum_0 update();
void start();
void stop();
state_enum_0 update(float32 dt);
void start();
void stop();
state_enum_0 update(float32 dt);
void start();
uint8 hazard_check(zNMEHazard& haz, void* context);
void stop();
state_enum_0 update(float32 dt);
void start();
void stop();
void abort();
state_enum_0 update(float32 dt);
uint8 hazard_check(zNMEHazard& haz, void* context);
void start();
void stop();
state_enum_0 update(float32 dt);
void start();
state_enum_0 update();
void start();
void stop();
state_enum_0 update(float32 dt);
void start();
void stop();
state_enum_0 update(float32 dt);
void start();
void stop();
state_enum_0 update(float32 dt);

// render__Q313cruise_bubble12CruiseBubble10state_typeFv
// Start address: 0x32d300
void render()
{
	// Line 747, Address: 0x32d300, Func Offset: 0
	// Func End, Address: 0x32d308, Func Offset: 0x8
}

// zEntCruiseBubbleRenderFX__Fv
// Start address: 0x3577c0
void zEntCruiseBubbleRenderFX()
{
	// Line 5674, Address: 0x3577c0, Func Offset: 0
	// Func End, Address: 0x3577c8, Func Offset: 0x8
}

// Flight_Start__Q313cruise_bubble12CruiseBubble7CBFXtraFv
// Start address: 0x3577d0
void Flight_Start()
{
	zNMEHazard* haz;
	int32 rc;
	xMat4x3 mat_missile;
	xVec3 pos_launch;
	int8 @13495;
	HazGone byeByeNotice;
	// Line 5584, Address: 0x3577d0, Func Offset: 0
	// Line 5585, Address: 0x3577d8, Func Offset: 0x8
	// Line 5586, Address: 0x3577e4, Func Offset: 0x14
	// Line 5589, Address: 0x3577ec, Func Offset: 0x1c
	// Line 5590, Address: 0x3577f8, Func Offset: 0x28
	// Line 5591, Address: 0x357800, Func Offset: 0x30
	// Line 5592, Address: 0x357808, Func Offset: 0x38
	// Line 5594, Address: 0x35780c, Func Offset: 0x3c
	// Line 5597, Address: 0x357818, Func Offset: 0x48
	// Line 5594, Address: 0x35781c, Func Offset: 0x4c
	// Line 5600, Address: 0x357820, Func Offset: 0x50
	// Line 5594, Address: 0x357824, Func Offset: 0x54
	// Line 5597, Address: 0x357828, Func Offset: 0x58
	// Line 5594, Address: 0x35782c, Func Offset: 0x5c
	// Line 5597, Address: 0x357840, Func Offset: 0x70
	// Line 5594, Address: 0x357844, Func Offset: 0x74
	// Line 5597, Address: 0x357848, Func Offset: 0x78
	// Line 5594, Address: 0x35784c, Func Offset: 0x7c
	// Line 5597, Address: 0x357850, Func Offset: 0x80
	// Line 5594, Address: 0x357854, Func Offset: 0x84
	// Line 5597, Address: 0x357858, Func Offset: 0x88
	// Line 5600, Address: 0x357870, Func Offset: 0xa0
	// Line 5605, Address: 0x357878, Func Offset: 0xa8
	// Line 5609, Address: 0x357884, Func Offset: 0xb4
	// Line 5606, Address: 0x357888, Func Offset: 0xb8
	// Line 5609, Address: 0x35788c, Func Offset: 0xbc
	// Line 5606, Address: 0x357890, Func Offset: 0xc0
	// Line 5609, Address: 0x357894, Func Offset: 0xc4
	// Line 5611, Address: 0x3578a0, Func Offset: 0xd0
	// Line 5605, Address: 0x3578ac, Func Offset: 0xdc
	// Line 5611, Address: 0x3578b0, Func Offset: 0xe0
	// Line 5612, Address: 0x3578c0, Func Offset: 0xf0
	// Func End, Address: 0x3578d0, Func Offset: 0x100
}

// Speak_Update__Q313cruise_bubble12CruiseBubble7CBFXtraFf
// Start address: 0x3578d0
void Speak_Update()
{
	xMat4x3 mat_speak;
	xVec3 pos_launch;
	xVec3 vec_orient;
	// Line 5552, Address: 0x3578d0, Func Offset: 0
	// Line 5554, Address: 0x3578dc, Func Offset: 0xc
	// Line 5557, Address: 0x3578e8, Func Offset: 0x18
	// Line 5564, Address: 0x3578f0, Func Offset: 0x20
	// Line 5560, Address: 0x3578f4, Func Offset: 0x24
	// Line 5564, Address: 0x3578f8, Func Offset: 0x28
	// Line 5569, Address: 0x357900, Func Offset: 0x30
	// Line 5564, Address: 0x357908, Func Offset: 0x38
	// Line 5560, Address: 0x35790c, Func Offset: 0x3c
	// Line 5566, Address: 0x357910, Func Offset: 0x40
	// Line 5565, Address: 0x357914, Func Offset: 0x44
	// Line 5560, Address: 0x35791c, Func Offset: 0x4c
	// Line 5566, Address: 0x357924, Func Offset: 0x54
	// Line 5560, Address: 0x357928, Func Offset: 0x58
	// Line 5566, Address: 0x35792c, Func Offset: 0x5c
	// Line 5560, Address: 0x357930, Func Offset: 0x60
	// Line 5563, Address: 0x357934, Func Offset: 0x64
	// Line 5560, Address: 0x357938, Func Offset: 0x68
	// Line 5569, Address: 0x357940, Func Offset: 0x70
	// Line 5563, Address: 0x357944, Func Offset: 0x74
	// Line 5569, Address: 0x357948, Func Offset: 0x78
	// Line 5566, Address: 0x35794c, Func Offset: 0x7c
	// Line 5564, Address: 0x357954, Func Offset: 0x84
	// Line 5569, Address: 0x35795c, Func Offset: 0x8c
	// Line 5563, Address: 0x357960, Func Offset: 0x90
	// Line 5569, Address: 0x357964, Func Offset: 0x94
	// Line 5566, Address: 0x357968, Func Offset: 0x98
	// Line 5564, Address: 0x357978, Func Offset: 0xa8
	// Line 5569, Address: 0x35797c, Func Offset: 0xac
	// Line 5566, Address: 0x357984, Func Offset: 0xb4
	// Line 5570, Address: 0x35798c, Func Offset: 0xbc
	// Line 5566, Address: 0x35799c, Func Offset: 0xcc
	// Line 5560, Address: 0x3579a4, Func Offset: 0xd4
	// Line 5569, Address: 0x3579a8, Func Offset: 0xd8
	// Line 5564, Address: 0x3579b0, Func Offset: 0xe0
	// Line 5563, Address: 0x3579b8, Func Offset: 0xe8
	// Line 5566, Address: 0x3579bc, Func Offset: 0xec
	// Line 5560, Address: 0x3579c0, Func Offset: 0xf0
	// Line 5569, Address: 0x3579c4, Func Offset: 0xf4
	// Line 5563, Address: 0x3579c8, Func Offset: 0xf8
	// Line 5564, Address: 0x3579d0, Func Offset: 0x100
	// Line 5569, Address: 0x3579d4, Func Offset: 0x104
	// Line 5563, Address: 0x3579dc, Func Offset: 0x10c
	// Line 5569, Address: 0x3579e0, Func Offset: 0x110
	// Line 5563, Address: 0x3579e4, Func Offset: 0x114
	// Line 5565, Address: 0x3579e8, Func Offset: 0x118
	// Line 5563, Address: 0x3579ec, Func Offset: 0x11c
	// Line 5564, Address: 0x3579f0, Func Offset: 0x120
	// Line 5565, Address: 0x3579f4, Func Offset: 0x124
	// Line 5564, Address: 0x3579fc, Func Offset: 0x12c
	// Line 5565, Address: 0x357a00, Func Offset: 0x130
	// Line 5566, Address: 0x357a04, Func Offset: 0x134
	// Line 5565, Address: 0x357a08, Func Offset: 0x138
	// Line 5564, Address: 0x357a0c, Func Offset: 0x13c
	// Line 5565, Address: 0x357a1c, Func Offset: 0x14c
	// Line 5564, Address: 0x357a20, Func Offset: 0x150
	// Line 5566, Address: 0x357a24, Func Offset: 0x154
	// Line 5565, Address: 0x357a28, Func Offset: 0x158
	// Line 5564, Address: 0x357a2c, Func Offset: 0x15c
	// Line 5566, Address: 0x357a38, Func Offset: 0x168
	// Line 5565, Address: 0x357a40, Func Offset: 0x170
	// Line 5564, Address: 0x357a48, Func Offset: 0x178
	// Line 5566, Address: 0x357a4c, Func Offset: 0x17c
	// Line 5565, Address: 0x357a54, Func Offset: 0x184
	// Line 5566, Address: 0x357a58, Func Offset: 0x188
	// Line 5565, Address: 0x357a5c, Func Offset: 0x18c
	// Line 5566, Address: 0x357a64, Func Offset: 0x194
	// Line 5570, Address: 0x357a68, Func Offset: 0x198
	// Line 5565, Address: 0x357a6c, Func Offset: 0x19c
	// Line 5570, Address: 0x357a70, Func Offset: 0x1a0
	// Line 5565, Address: 0x357a7c, Func Offset: 0x1ac
	// Line 5564, Address: 0x357a88, Func Offset: 0x1b8
	// Line 5566, Address: 0x357a8c, Func Offset: 0x1bc
	// Line 5570, Address: 0x357a90, Func Offset: 0x1c0
	// Line 5565, Address: 0x357a94, Func Offset: 0x1c4
	// Line 5564, Address: 0x357aa0, Func Offset: 0x1d0
	// Line 5566, Address: 0x357aa4, Func Offset: 0x1d4
	// Line 5565, Address: 0x357aa8, Func Offset: 0x1d8
	// Line 5569, Address: 0x357ab0, Func Offset: 0x1e0
	// Line 5565, Address: 0x357ab4, Func Offset: 0x1e4
	// Line 5566, Address: 0x357ac4, Func Offset: 0x1f4
	// Line 5570, Address: 0x357ad0, Func Offset: 0x200
	// Line 5575, Address: 0x357ad8, Func Offset: 0x208
	// Line 5578, Address: 0x357ae8, Func Offset: 0x218
	// Line 5580, Address: 0x357b68, Func Offset: 0x298
	// Line 5571, Address: 0x357b74, Func Offset: 0x2a4
	// Line 5580, Address: 0x357b78, Func Offset: 0x2a8
	// Line 5572, Address: 0x357b80, Func Offset: 0x2b0
	// Line 5580, Address: 0x357b84, Func Offset: 0x2b4
	// Line 5571, Address: 0x357b9c, Func Offset: 0x2cc
	// Line 5572, Address: 0x357ba0, Func Offset: 0x2d0
	// Line 5573, Address: 0x357ba8, Func Offset: 0x2d8
	// Line 5580, Address: 0x357bac, Func Offset: 0x2dc
	// Line 5572, Address: 0x357bb0, Func Offset: 0x2e0
	// Line 5571, Address: 0x357bb4, Func Offset: 0x2e4
	// Line 5580, Address: 0x357bb8, Func Offset: 0x2e8
	// Line 5573, Address: 0x357bec, Func Offset: 0x31c
	// Line 5580, Address: 0x357bf0, Func Offset: 0x320
	// Line 5573, Address: 0x357bfc, Func Offset: 0x32c
	// Line 5580, Address: 0x357c00, Func Offset: 0x330
	// Line 5573, Address: 0x357c08, Func Offset: 0x338
	// Line 5580, Address: 0x357c0c, Func Offset: 0x33c
	// Line 5572, Address: 0x357c24, Func Offset: 0x354
	// Line 5580, Address: 0x357c2c, Func Offset: 0x35c
	// Line 5573, Address: 0x357c34, Func Offset: 0x364
	// Line 5580, Address: 0x357c3c, Func Offset: 0x36c
	// Line 5581, Address: 0x357c48, Func Offset: 0x378
	// Func End, Address: 0x357c54, Func Offset: 0x384
}

// Speak_Start__Q313cruise_bubble12CruiseBubble7CBFXtraFv
// Start address: 0x357c60
void Speak_Start()
{
	zNMEHazard* haz;
	int32 rc;
	xMat4x3 mat_speak;
	xVec3 pos_launch;
	int8 @13449;
	HazGone byeByeNotice;
	// Line 5509, Address: 0x357c60, Func Offset: 0
	// Line 5512, Address: 0x357c6c, Func Offset: 0xc
	// Line 5515, Address: 0x357c78, Func Offset: 0x18
	// Line 5516, Address: 0x357c84, Func Offset: 0x24
	// Line 5518, Address: 0x357c8c, Func Offset: 0x2c
	// Line 5519, Address: 0x357c98, Func Offset: 0x38
	// Line 5520, Address: 0x357ca0, Func Offset: 0x40
	// Line 5521, Address: 0x357ca8, Func Offset: 0x48
	// Line 5523, Address: 0x357cac, Func Offset: 0x4c
	// Line 5526, Address: 0x357cb4, Func Offset: 0x54
	// Line 5523, Address: 0x357cbc, Func Offset: 0x5c
	// Line 5528, Address: 0x357cc0, Func Offset: 0x60
	// Line 5523, Address: 0x357cc4, Func Offset: 0x64
	// Line 5526, Address: 0x357ce0, Func Offset: 0x80
	// Line 5523, Address: 0x357ce4, Func Offset: 0x84
	// Line 5526, Address: 0x357ce8, Func Offset: 0x88
	// Line 5523, Address: 0x357cec, Func Offset: 0x8c
	// Line 5526, Address: 0x357cf0, Func Offset: 0x90
	// Line 5523, Address: 0x357cf4, Func Offset: 0x94
	// Line 5526, Address: 0x357cf8, Func Offset: 0x98
	// Line 5528, Address: 0x357d10, Func Offset: 0xb0
	// Line 5532, Address: 0x357d18, Func Offset: 0xb8
	// Line 5536, Address: 0x357d24, Func Offset: 0xc4
	// Line 5533, Address: 0x357d28, Func Offset: 0xc8
	// Line 5536, Address: 0x357d2c, Func Offset: 0xcc
	// Line 5533, Address: 0x357d30, Func Offset: 0xd0
	// Line 5536, Address: 0x357d34, Func Offset: 0xd4
	// Line 5538, Address: 0x357d40, Func Offset: 0xe0
	// Line 5532, Address: 0x357d4c, Func Offset: 0xec
	// Line 5538, Address: 0x357d50, Func Offset: 0xf0
	// Line 5539, Address: 0x357d60, Func Offset: 0x100
	// Func End, Address: 0x357d70, Func Offset: 0x110
}

// Bang_Right__Q313cruise_bubble12CruiseBubble7CBFXtraFv
// Start address: 0x357d70
void Bang_Right()
{
	zNMEHazard* haz;
	int32 rc;
	xMat4x3 mat_plyr;
	xVec3 pos_launch;
	xVec3 vec_orient;
	// Line 5475, Address: 0x357d70, Func Offset: 0
	// Line 5476, Address: 0x357d78, Func Offset: 0x8
	// Line 5477, Address: 0x357d84, Func Offset: 0x14
	// Line 5479, Address: 0x357d8c, Func Offset: 0x1c
	// Line 5480, Address: 0x357d98, Func Offset: 0x28
	// Line 5488, Address: 0x357da0, Func Offset: 0x30
	// Line 5489, Address: 0x357da4, Func Offset: 0x34
	// Line 5488, Address: 0x357da8, Func Offset: 0x38
	// Line 5482, Address: 0x357dac, Func Offset: 0x3c
	// Line 5489, Address: 0x357db0, Func Offset: 0x40
	// Line 5482, Address: 0x357db4, Func Offset: 0x44
	// Line 5488, Address: 0x357db8, Func Offset: 0x48
	// Line 5493, Address: 0x357dbc, Func Offset: 0x4c
	// Line 5488, Address: 0x357dc0, Func Offset: 0x50
	// Line 5490, Address: 0x357dc4, Func Offset: 0x54
	// Line 5493, Address: 0x357dd4, Func Offset: 0x64
	// Line 5482, Address: 0x357ddc, Func Offset: 0x6c
	// Line 5493, Address: 0x357de0, Func Offset: 0x70
	// Line 5484, Address: 0x357de4, Func Offset: 0x74
	// Line 5493, Address: 0x357de8, Func Offset: 0x78
	// Line 5484, Address: 0x357df0, Func Offset: 0x80
	// Line 5493, Address: 0x357df4, Func Offset: 0x84
	// Line 5487, Address: 0x357df8, Func Offset: 0x88
	// Line 5493, Address: 0x357dfc, Func Offset: 0x8c
	// Line 5484, Address: 0x357e00, Func Offset: 0x90
	// Line 5493, Address: 0x357e08, Func Offset: 0x98
	// Line 5484, Address: 0x357e0c, Func Offset: 0x9c
	// Line 5493, Address: 0x357e10, Func Offset: 0xa0
	// Line 5484, Address: 0x357e14, Func Offset: 0xa4
	// Line 5488, Address: 0x357e1c, Func Offset: 0xac
	// Line 5493, Address: 0x357e20, Func Offset: 0xb0
	// Line 5484, Address: 0x357e24, Func Offset: 0xb4
	// Line 5493, Address: 0x357e28, Func Offset: 0xb8
	// Line 5488, Address: 0x357e2c, Func Offset: 0xbc
	// Line 5494, Address: 0x357e34, Func Offset: 0xc4
	// Line 5487, Address: 0x357e40, Func Offset: 0xd0
	// Line 5484, Address: 0x357e44, Func Offset: 0xd4
	// Line 5487, Address: 0x357e48, Func Offset: 0xd8
	// Line 5484, Address: 0x357e54, Func Offset: 0xe4
	// Line 5493, Address: 0x357e58, Func Offset: 0xe8
	// Line 5488, Address: 0x357e5c, Func Offset: 0xec
	// Line 5487, Address: 0x357e60, Func Offset: 0xf0
	// Line 5488, Address: 0x357e68, Func Offset: 0xf8
	// Line 5489, Address: 0x357e6c, Func Offset: 0xfc
	// Line 5488, Address: 0x357e74, Func Offset: 0x104
	// Line 5489, Address: 0x357e7c, Func Offset: 0x10c
	// Line 5493, Address: 0x357e84, Func Offset: 0x114
	// Line 5489, Address: 0x357e88, Func Offset: 0x118
	// Line 5488, Address: 0x357e8c, Func Offset: 0x11c
	// Line 5490, Address: 0x357e90, Func Offset: 0x120
	// Line 5489, Address: 0x357e94, Func Offset: 0x124
	// Line 5488, Address: 0x357e98, Func Offset: 0x128
	// Line 5489, Address: 0x357e9c, Func Offset: 0x12c
	// Line 5488, Address: 0x357ea0, Func Offset: 0x130
	// Line 5490, Address: 0x357eac, Func Offset: 0x13c
	// Line 5488, Address: 0x357eb0, Func Offset: 0x140
	// Line 5489, Address: 0x357eb4, Func Offset: 0x144
	// Line 5493, Address: 0x357eb8, Func Offset: 0x148
	// Line 5488, Address: 0x357ebc, Func Offset: 0x14c
	// Line 5490, Address: 0x357ec0, Func Offset: 0x150
	// Line 5489, Address: 0x357ec4, Func Offset: 0x154
	// Line 5490, Address: 0x357ed8, Func Offset: 0x168
	// Line 5488, Address: 0x357ee0, Func Offset: 0x170
	// Line 5489, Address: 0x357ee4, Func Offset: 0x174
	// Line 5488, Address: 0x357ee8, Func Offset: 0x178
	// Line 5490, Address: 0x357eec, Func Offset: 0x17c
	// Line 5489, Address: 0x357ef0, Func Offset: 0x180
	// Line 5488, Address: 0x357ef4, Func Offset: 0x184
	// Line 5489, Address: 0x357ef8, Func Offset: 0x188
	// Line 5490, Address: 0x357f04, Func Offset: 0x194
	// Line 5488, Address: 0x357f10, Func Offset: 0x1a0
	// Line 5489, Address: 0x357f14, Func Offset: 0x1a4
	// Line 5490, Address: 0x357f18, Func Offset: 0x1a8
	// Line 5494, Address: 0x357f30, Func Offset: 0x1c0
	// Line 5488, Address: 0x357f34, Func Offset: 0x1c4
	// Line 5489, Address: 0x357f3c, Func Offset: 0x1cc
	// Line 5490, Address: 0x357f44, Func Offset: 0x1d4
	// Line 5494, Address: 0x357f50, Func Offset: 0x1e0
	// Line 5488, Address: 0x357f54, Func Offset: 0x1e4
	// Line 5489, Address: 0x357f58, Func Offset: 0x1e8
	// Line 5490, Address: 0x357f60, Func Offset: 0x1f0
	// Line 5494, Address: 0x357f74, Func Offset: 0x204
	// Line 5489, Address: 0x357f7c, Func Offset: 0x20c
	// Line 5490, Address: 0x357f80, Func Offset: 0x210
	// Line 5494, Address: 0x357f8c, Func Offset: 0x21c
	// Line 5499, Address: 0x357f94, Func Offset: 0x224
	// Line 5502, Address: 0x357fa4, Func Offset: 0x234
	// Line 5504, Address: 0x357fb8, Func Offset: 0x248
	// Line 5495, Address: 0x357fc4, Func Offset: 0x254
	// Line 5504, Address: 0x357fc8, Func Offset: 0x258
	// Line 5496, Address: 0x357fe4, Func Offset: 0x274
	// Line 5504, Address: 0x357fe8, Func Offset: 0x278
	// Line 5495, Address: 0x357fec, Func Offset: 0x27c
	// Line 5504, Address: 0x357ff0, Func Offset: 0x280
	// Line 5495, Address: 0x357ff8, Func Offset: 0x288
	// Line 5504, Address: 0x357ffc, Func Offset: 0x28c
	// Line 5496, Address: 0x358018, Func Offset: 0x2a8
	// Line 5504, Address: 0x358020, Func Offset: 0x2b0
	// Line 5496, Address: 0x358028, Func Offset: 0x2b8
	// Line 5504, Address: 0x35802c, Func Offset: 0x2bc
	// Line 5497, Address: 0x35804c, Func Offset: 0x2dc
	// Line 5504, Address: 0x358050, Func Offset: 0x2e0
	// Line 5497, Address: 0x358054, Func Offset: 0x2e4
	// Line 5504, Address: 0x358058, Func Offset: 0x2e8
	// Line 5497, Address: 0x358060, Func Offset: 0x2f0
	// Line 5504, Address: 0x358064, Func Offset: 0x2f4
	// Line 5497, Address: 0x358068, Func Offset: 0x2f8
	// Line 5504, Address: 0x35806c, Func Offset: 0x2fc
	// Line 5496, Address: 0x35808c, Func Offset: 0x31c
	// Line 5504, Address: 0x358090, Func Offset: 0x320
	// Line 5496, Address: 0x358094, Func Offset: 0x324
	// Line 5504, Address: 0x358098, Func Offset: 0x328
	// Line 5497, Address: 0x35809c, Func Offset: 0x32c
	// Line 5504, Address: 0x3580a4, Func Offset: 0x334
	// Line 5505, Address: 0x3580b0, Func Offset: 0x340
	// Func End, Address: 0x3580c0, Func Offset: 0x350
}

// Bang_Left__Q313cruise_bubble12CruiseBubble7CBFXtraFv
// Start address: 0x3580c0
void Bang_Left()
{
	zNMEHazard* haz;
	int32 rc;
	xMat4x3 mat_plyr;
	xVec3 pos_launch;
	xVec3 vec_orient;
	// Line 5442, Address: 0x3580c0, Func Offset: 0
	// Line 5443, Address: 0x3580c8, Func Offset: 0x8
	// Line 5444, Address: 0x3580d4, Func Offset: 0x14
	// Line 5446, Address: 0x3580dc, Func Offset: 0x1c
	// Line 5447, Address: 0x3580e8, Func Offset: 0x28
	// Line 5455, Address: 0x3580f0, Func Offset: 0x30
	// Line 5456, Address: 0x3580f4, Func Offset: 0x34
	// Line 5455, Address: 0x3580f8, Func Offset: 0x38
	// Line 5449, Address: 0x3580fc, Func Offset: 0x3c
	// Line 5456, Address: 0x358100, Func Offset: 0x40
	// Line 5449, Address: 0x358104, Func Offset: 0x44
	// Line 5455, Address: 0x358108, Func Offset: 0x48
	// Line 5460, Address: 0x35810c, Func Offset: 0x4c
	// Line 5455, Address: 0x358110, Func Offset: 0x50
	// Line 5457, Address: 0x358114, Func Offset: 0x54
	// Line 5460, Address: 0x358124, Func Offset: 0x64
	// Line 5449, Address: 0x35812c, Func Offset: 0x6c
	// Line 5460, Address: 0x358130, Func Offset: 0x70
	// Line 5451, Address: 0x358134, Func Offset: 0x74
	// Line 5460, Address: 0x358138, Func Offset: 0x78
	// Line 5451, Address: 0x358140, Func Offset: 0x80
	// Line 5460, Address: 0x358144, Func Offset: 0x84
	// Line 5454, Address: 0x358148, Func Offset: 0x88
	// Line 5460, Address: 0x35814c, Func Offset: 0x8c
	// Line 5451, Address: 0x358150, Func Offset: 0x90
	// Line 5460, Address: 0x358158, Func Offset: 0x98
	// Line 5451, Address: 0x35815c, Func Offset: 0x9c
	// Line 5460, Address: 0x358160, Func Offset: 0xa0
	// Line 5451, Address: 0x358164, Func Offset: 0xa4
	// Line 5455, Address: 0x35816c, Func Offset: 0xac
	// Line 5460, Address: 0x358170, Func Offset: 0xb0
	// Line 5451, Address: 0x358174, Func Offset: 0xb4
	// Line 5460, Address: 0x358178, Func Offset: 0xb8
	// Line 5455, Address: 0x35817c, Func Offset: 0xbc
	// Line 5461, Address: 0x358184, Func Offset: 0xc4
	// Line 5454, Address: 0x358190, Func Offset: 0xd0
	// Line 5451, Address: 0x358194, Func Offset: 0xd4
	// Line 5454, Address: 0x358198, Func Offset: 0xd8
	// Line 5451, Address: 0x3581a4, Func Offset: 0xe4
	// Line 5460, Address: 0x3581a8, Func Offset: 0xe8
	// Line 5455, Address: 0x3581ac, Func Offset: 0xec
	// Line 5454, Address: 0x3581b0, Func Offset: 0xf0
	// Line 5455, Address: 0x3581b8, Func Offset: 0xf8
	// Line 5456, Address: 0x3581bc, Func Offset: 0xfc
	// Line 5455, Address: 0x3581c4, Func Offset: 0x104
	// Line 5456, Address: 0x3581cc, Func Offset: 0x10c
	// Line 5460, Address: 0x3581d4, Func Offset: 0x114
	// Line 5456, Address: 0x3581d8, Func Offset: 0x118
	// Line 5455, Address: 0x3581dc, Func Offset: 0x11c
	// Line 5457, Address: 0x3581e0, Func Offset: 0x120
	// Line 5456, Address: 0x3581e4, Func Offset: 0x124
	// Line 5455, Address: 0x3581e8, Func Offset: 0x128
	// Line 5456, Address: 0x3581ec, Func Offset: 0x12c
	// Line 5455, Address: 0x3581f0, Func Offset: 0x130
	// Line 5457, Address: 0x3581fc, Func Offset: 0x13c
	// Line 5455, Address: 0x358200, Func Offset: 0x140
	// Line 5456, Address: 0x358204, Func Offset: 0x144
	// Line 5460, Address: 0x358208, Func Offset: 0x148
	// Line 5455, Address: 0x35820c, Func Offset: 0x14c
	// Line 5457, Address: 0x358210, Func Offset: 0x150
	// Line 5456, Address: 0x358214, Func Offset: 0x154
	// Line 5457, Address: 0x358228, Func Offset: 0x168
	// Line 5455, Address: 0x358230, Func Offset: 0x170
	// Line 5456, Address: 0x358234, Func Offset: 0x174
	// Line 5455, Address: 0x358238, Func Offset: 0x178
	// Line 5457, Address: 0x35823c, Func Offset: 0x17c
	// Line 5456, Address: 0x358240, Func Offset: 0x180
	// Line 5455, Address: 0x358244, Func Offset: 0x184
	// Line 5456, Address: 0x358248, Func Offset: 0x188
	// Line 5457, Address: 0x358254, Func Offset: 0x194
	// Line 5455, Address: 0x358260, Func Offset: 0x1a0
	// Line 5456, Address: 0x358264, Func Offset: 0x1a4
	// Line 5457, Address: 0x358268, Func Offset: 0x1a8
	// Line 5461, Address: 0x358280, Func Offset: 0x1c0
	// Line 5455, Address: 0x358284, Func Offset: 0x1c4
	// Line 5456, Address: 0x35828c, Func Offset: 0x1cc
	// Line 5457, Address: 0x358294, Func Offset: 0x1d4
	// Line 5461, Address: 0x3582a0, Func Offset: 0x1e0
	// Line 5455, Address: 0x3582a4, Func Offset: 0x1e4
	// Line 5456, Address: 0x3582a8, Func Offset: 0x1e8
	// Line 5457, Address: 0x3582b0, Func Offset: 0x1f0
	// Line 5461, Address: 0x3582c4, Func Offset: 0x204
	// Line 5456, Address: 0x3582cc, Func Offset: 0x20c
	// Line 5457, Address: 0x3582d0, Func Offset: 0x210
	// Line 5461, Address: 0x3582dc, Func Offset: 0x21c
	// Line 5466, Address: 0x3582e4, Func Offset: 0x224
	// Line 5469, Address: 0x3582f4, Func Offset: 0x234
	// Line 5471, Address: 0x358308, Func Offset: 0x248
	// Line 5462, Address: 0x358314, Func Offset: 0x254
	// Line 5471, Address: 0x358318, Func Offset: 0x258
	// Line 5463, Address: 0x358334, Func Offset: 0x274
	// Line 5471, Address: 0x358338, Func Offset: 0x278
	// Line 5462, Address: 0x35833c, Func Offset: 0x27c
	// Line 5471, Address: 0x358340, Func Offset: 0x280
	// Line 5462, Address: 0x358348, Func Offset: 0x288
	// Line 5471, Address: 0x35834c, Func Offset: 0x28c
	// Line 5463, Address: 0x358368, Func Offset: 0x2a8
	// Line 5471, Address: 0x358370, Func Offset: 0x2b0
	// Line 5463, Address: 0x358378, Func Offset: 0x2b8
	// Line 5471, Address: 0x35837c, Func Offset: 0x2bc
	// Line 5464, Address: 0x35839c, Func Offset: 0x2dc
	// Line 5471, Address: 0x3583a0, Func Offset: 0x2e0
	// Line 5464, Address: 0x3583a4, Func Offset: 0x2e4
	// Line 5471, Address: 0x3583a8, Func Offset: 0x2e8
	// Line 5464, Address: 0x3583b0, Func Offset: 0x2f0
	// Line 5471, Address: 0x3583b4, Func Offset: 0x2f4
	// Line 5464, Address: 0x3583b8, Func Offset: 0x2f8
	// Line 5471, Address: 0x3583bc, Func Offset: 0x2fc
	// Line 5463, Address: 0x3583dc, Func Offset: 0x31c
	// Line 5471, Address: 0x3583e0, Func Offset: 0x320
	// Line 5463, Address: 0x3583e4, Func Offset: 0x324
	// Line 5471, Address: 0x3583e8, Func Offset: 0x328
	// Line 5464, Address: 0x3583ec, Func Offset: 0x32c
	// Line 5471, Address: 0x3583f4, Func Offset: 0x334
	// Line 5472, Address: 0x358400, Func Offset: 0x340
	// Func End, Address: 0x358410, Func Offset: 0x350
}

// RockStar_Action__Q313cruise_bubble12CruiseBubble7CBFXtraFQ413cruise_bubble12CruiseBubble7CBFXtra9en_tunefxQ413cruise_bubble12CruiseBubble7CBFXtra11en_tunetran
// Start address: 0x358410
void RockStar_Action(en_tunefx tunefx, en_tunetran tran)
{
	// Line 5399, Address: 0x358410, Func Offset: 0
	// Line 5403, Address: 0x358414, Func Offset: 0x4
	// Line 5399, Address: 0x358418, Func Offset: 0x8
	// Line 5403, Address: 0x35841c, Func Offset: 0xc
	// Line 5405, Address: 0x358458, Func Offset: 0x48
	// Line 5406, Address: 0x358460, Func Offset: 0x50
	// Line 5408, Address: 0x358468, Func Offset: 0x58
	// Line 5409, Address: 0x358470, Func Offset: 0x60
	// Line 5411, Address: 0x358478, Func Offset: 0x68
	// Line 5413, Address: 0x358480, Func Offset: 0x70
	// Line 5414, Address: 0x358490, Func Offset: 0x80
	// Line 5415, Address: 0x3584a4, Func Offset: 0x94
	// Line 5417, Address: 0x3584ac, Func Offset: 0x9c
	// Line 5418, Address: 0x3584b4, Func Offset: 0xa4
	// Line 5420, Address: 0x3584c0, Func Offset: 0xb0
	// Line 5421, Address: 0x3584d8, Func Offset: 0xc8
	// Line 5427, Address: 0x358584, Func Offset: 0x174
	// Line 5412, Address: 0x358594, Func Offset: 0x184
	// Line 5428, Address: 0x35859c, Func Offset: 0x18c
	// Func End, Address: 0x3585ac, Func Offset: 0x19c
}

// Notify__Q413cruise_bubble12CruiseBubble7CBFXtra7HazGoneF10en_haznoteP10zNMEHazard
// Start address: 0x3585b0
int32 Notify(en_haznote note, zNMEHazard* haz)
{
	// Line 5286, Address: 0x3585b0, Func Offset: 0
	// Line 5287, Address: 0x3585b8, Func Offset: 0x8
	// Line 5289, Address: 0x3585c4, Func Offset: 0x14
	// Line 5290, Address: 0x3585d0, Func Offset: 0x20
	// Line 5292, Address: 0x3585d4, Func Offset: 0x24
	// Line 5293, Address: 0x3585e8, Func Offset: 0x38
	// Func End, Address: 0x3585f0, Func Offset: 0x40
}

// CheckAbilityToLaunch__13cruise_bubbleFv
// Start address: 0x3585f0
uint8 CheckAbilityToLaunch()
{
	// Line 5243, Address: 0x3585f0, Func Offset: 0
	// Line 5249, Address: 0x358668, Func Offset: 0x78
	// Func End, Address: 0x358670, Func Offset: 0x80
}

// GetMissileMat__13cruise_bubbleFv
// Start address: 0x358670
xMat4x3* GetMissileMat()
{
	// Line 5238, Address: 0x358670, Func Offset: 0
	// Line 5239, Address: 0x358678, Func Offset: 0x8
	// Func End, Address: 0x358680, Func Offset: 0x10
}

// reset_life__13cruise_bubbleFv
// Start address: 0x358680
void reset_life()
{
	state_missle_fly* state;
	// Line 5208, Address: 0x358680, Func Offset: 0
	// Line 5209, Address: 0x358688, Func Offset: 0x8
	// Line 5211, Address: 0x3586a0, Func Offset: 0x20
	// Line 5212, Address: 0x3586ac, Func Offset: 0x2c
	// Func End, Address: 0x3586b4, Func Offset: 0x34
}

// location__13cruise_bubbleFv
// Start address: 0x3586c0
xVec3& location()
{
	// Line 5177, Address: 0x3586c0, Func Offset: 0
	// Line 5178, Address: 0x3586cc, Func Offset: 0xc
	// Func End, Address: 0x3586d4, Func Offset: 0x14
}

// flying__13cruise_bubbleFv
// Start address: 0x3586e0
float32 flying()
{
	state_missle_fly* state;
	// Line 5168, Address: 0x3586e0, Func Offset: 0
	// Line 5169, Address: 0x3586e8, Func Offset: 0x8
	// Line 5171, Address: 0x358700, Func Offset: 0x20
	// Line 5170, Address: 0x358708, Func Offset: 0x28
	// Line 5172, Address: 0x35870c, Func Offset: 0x2c
	// Func End, Address: 0x358714, Func Offset: 0x34
}

// active__13cruise_bubbleFv
// Start address: 0x358720
uint8 active()
{
	// Line 5133, Address: 0x358720, Func Offset: 0
	// Line 5134, Address: 0x35872c, Func Offset: 0xc
	// Func End, Address: 0x358734, Func Offset: 0x14
}

// anim_table__13cruise_bubbleFv
// Start address: 0x358740
xAnimTable* anim_table()
{
	xAnimTable& table;
	// Line 5113, Address: 0x358740, Func Offset: 0
	// Line 5116, Address: 0x358744, Func Offset: 0x4
	// Line 5113, Address: 0x358748, Func Offset: 0x8
	// Line 5116, Address: 0x35874c, Func Offset: 0xc
	// Line 5119, Address: 0x358760, Func Offset: 0x20
	// Line 5120, Address: 0x3587ac, Func Offset: 0x6c
	// Line 5119, Address: 0x3587b0, Func Offset: 0x70
	// Line 5120, Address: 0x3587b4, Func Offset: 0x74
	// Line 5123, Address: 0x3587fc, Func Offset: 0xbc
	// Line 5120, Address: 0x358800, Func Offset: 0xc0
	// Line 5123, Address: 0x358804, Func Offset: 0xc4
	// Line 5125, Address: 0x358850, Func Offset: 0x110
	// Line 5126, Address: 0x358854, Func Offset: 0x114
	// Func End, Address: 0x358864, Func Offset: 0x124
}

// insert_player_animations__13cruise_bubbleFR10xAnimTable
// Start address: 0x358870
void insert_player_animations(xAnimTable& table)
{
	int8* start_from;
	int8* s;
	uint32 i;
	// Line 5069, Address: 0x358870, Func Offset: 0
	// Line 5078, Address: 0x358874, Func Offset: 0x4
	// Line 5069, Address: 0x358878, Func Offset: 0x8
	// Line 5078, Address: 0x35887c, Func Offset: 0xc
	// Line 5069, Address: 0x358880, Func Offset: 0x10
	// Line 5078, Address: 0x358884, Func Offset: 0x14
	// Line 5069, Address: 0x358888, Func Offset: 0x18
	// Line 5078, Address: 0x35888c, Func Offset: 0x1c
	// Line 5069, Address: 0x358890, Func Offset: 0x20
	// Line 5078, Address: 0x358894, Func Offset: 0x24
	// Line 5069, Address: 0x358898, Func Offset: 0x28
	// Line 5078, Address: 0x35889c, Func Offset: 0x2c
	// Line 5069, Address: 0x3588a0, Func Offset: 0x30
	// Line 5078, Address: 0x3588a8, Func Offset: 0x38
	// Line 5079, Address: 0x3588d8, Func Offset: 0x68
	// Line 5078, Address: 0x3588dc, Func Offset: 0x6c
	// Line 5079, Address: 0x3588e0, Func Offset: 0x70
	// Line 5080, Address: 0x358928, Func Offset: 0xb8
	// Line 5079, Address: 0x35892c, Func Offset: 0xbc
	// Line 5080, Address: 0x358930, Func Offset: 0xc0
	// Line 5081, Address: 0x358978, Func Offset: 0x108
	// Line 5080, Address: 0x35897c, Func Offset: 0x10c
	// Line 5081, Address: 0x358980, Func Offset: 0x110
	// Line 5083, Address: 0x3589c8, Func Offset: 0x158
	// Line 5081, Address: 0x3589cc, Func Offset: 0x15c
	// Line 5083, Address: 0x3589d0, Func Offset: 0x160
	// Line 5084, Address: 0x3589e4, Func Offset: 0x174
	// Line 5088, Address: 0x3589f4, Func Offset: 0x184
	// Line 5087, Address: 0x3589f8, Func Offset: 0x188
	// Line 5086, Address: 0x3589fc, Func Offset: 0x18c
	// Line 5088, Address: 0x358a00, Func Offset: 0x190
	// Line 5090, Address: 0x358a08, Func Offset: 0x198
	// Line 5092, Address: 0x358a20, Func Offset: 0x1b0
	// Line 5091, Address: 0x358a24, Func Offset: 0x1b4
	// Line 5092, Address: 0x358a34, Func Offset: 0x1c4
	// Line 5096, Address: 0x358a40, Func Offset: 0x1d0
	// Line 5097, Address: 0x358a8c, Func Offset: 0x21c
	// Line 5096, Address: 0x358a90, Func Offset: 0x220
	// Line 5097, Address: 0x358a94, Func Offset: 0x224
	// Line 5098, Address: 0x358adc, Func Offset: 0x26c
	// Line 5097, Address: 0x358ae0, Func Offset: 0x270
	// Line 5098, Address: 0x358ae4, Func Offset: 0x274
	// Line 5099, Address: 0x358b2c, Func Offset: 0x2bc
	// Line 5098, Address: 0x358b30, Func Offset: 0x2c0
	// Line 5099, Address: 0x358b34, Func Offset: 0x2c4
	// Line 5100, Address: 0x358b7c, Func Offset: 0x30c
	// Line 5099, Address: 0x358b80, Func Offset: 0x310
	// Line 5100, Address: 0x358b84, Func Offset: 0x314
	// Line 5104, Address: 0x358bcc, Func Offset: 0x35c
	// Line 5100, Address: 0x358bd0, Func Offset: 0x360
	// Line 5104, Address: 0x358bd4, Func Offset: 0x364
	// Line 5106, Address: 0x358c20, Func Offset: 0x3b0
	// Line 5108, Address: 0x358c30, Func Offset: 0x3c0
	// Func End, Address: 0x358c50, Func Offset: 0x3e0
}

// render_screen__13cruise_bubbleFv
// Start address: 0x358c50
void render_screen()
{
	// Line 5028, Address: 0x358c50, Func Offset: 0
	// Line 5029, Address: 0x358c54, Func Offset: 0x4
	// Line 5028, Address: 0x358c58, Func Offset: 0x8
	// Line 5029, Address: 0x358c5c, Func Offset: 0xc
	// Line 5036, Address: 0x358c70, Func Offset: 0x20
	// Line 5038, Address: 0x358c8c, Func Offset: 0x3c
	// Line 5039, Address: 0x358c94, Func Offset: 0x44
	// Func End, Address: 0x358ca0, Func Offset: 0x50
}

// update__13cruise_bubbleFP6xScenef
// Start address: 0x358ca0
uint8 update(xScene* sc, float32 dt)
{
	// Line 4983, Address: 0x358ca0, Func Offset: 0
	// Line 4984, Address: 0x358cc8, Func Offset: 0x28
	// Line 4985, Address: 0x358cd8, Func Offset: 0x38
	// Line 4987, Address: 0x358ce4, Func Offset: 0x44
	// Line 4988, Address: 0x358d8c, Func Offset: 0xec
	// Line 4991, Address: 0x358d94, Func Offset: 0xf4
	// Line 4998, Address: 0x358da4, Func Offset: 0x104
	// Line 5005, Address: 0x358db8, Func Offset: 0x118
	// Line 5008, Address: 0x358dc4, Func Offset: 0x124
	// Line 4984, Address: 0x358de0, Func Offset: 0x140
	// Line 5008, Address: 0x358de8, Func Offset: 0x148
	// Line 4987, Address: 0x358df0, Func Offset: 0x150
	// Line 5008, Address: 0x358df4, Func Offset: 0x154
	// Line 4987, Address: 0x358e20, Func Offset: 0x180
	// Line 5008, Address: 0x358e28, Func Offset: 0x188
	// Line 4987, Address: 0x358e48, Func Offset: 0x1a8
	// Line 5008, Address: 0x358e50, Func Offset: 0x1b0
	// Line 4994, Address: 0x358e58, Func Offset: 0x1b8
	// Line 5008, Address: 0x358e60, Func Offset: 0x1c0
	// Line 5010, Address: 0x358ea4, Func Offset: 0x204
	// Line 5008, Address: 0x358eb0, Func Offset: 0x210
	// Line 5010, Address: 0x358eb4, Func Offset: 0x214
	// Line 5011, Address: 0x358f10, Func Offset: 0x270
	// Line 5012, Address: 0x358f44, Func Offset: 0x2a4
	// Line 5013, Address: 0x358f50, Func Offset: 0x2b0
	// Line 5014, Address: 0x359034, Func Offset: 0x394
	// Line 5010, Address: 0x359094, Func Offset: 0x3f4
	// Line 5014, Address: 0x35909c, Func Offset: 0x3fc
	// Line 5010, Address: 0x3590b0, Func Offset: 0x410
	// Line 5014, Address: 0x3590b4, Func Offset: 0x414
	// Line 5010, Address: 0x3590d0, Func Offset: 0x430
	// Line 5014, Address: 0x3590d8, Func Offset: 0x438
	// Line 5010, Address: 0x3590fc, Func Offset: 0x45c
	// Line 5014, Address: 0x359100, Func Offset: 0x460
	// Line 5010, Address: 0x359104, Func Offset: 0x464
	// Line 5014, Address: 0x35910c, Func Offset: 0x46c
	// Line 5010, Address: 0x359120, Func Offset: 0x480
	// Line 5014, Address: 0x359124, Func Offset: 0x484
	// Line 5010, Address: 0x359138, Func Offset: 0x498
	// Line 5014, Address: 0x359150, Func Offset: 0x4b0
	// Line 5015, Address: 0x359174, Func Offset: 0x4d4
	// Func End, Address: 0x359194, Func Offset: 0x4f4
}

// launch__13cruise_bubbleFv
// Start address: 0x3591a0
void launch()
{
	// Line 4941, Address: 0x3591a0, Func Offset: 0
	// Line 4942, Address: 0x3591a4, Func Offset: 0x4
	// Line 4941, Address: 0x3591a8, Func Offset: 0x8
	// Line 4942, Address: 0x3591b0, Func Offset: 0x10
	// Line 4945, Address: 0x3591c8, Func Offset: 0x28
	// Line 4949, Address: 0x3591e0, Func Offset: 0x40
	// Line 4950, Address: 0x3591ec, Func Offset: 0x4c
	// Line 4949, Address: 0x3591f8, Func Offset: 0x58
	// Line 4951, Address: 0x3591fc, Func Offset: 0x5c
	// Line 4952, Address: 0x359204, Func Offset: 0x64
	// Line 4954, Address: 0x359210, Func Offset: 0x70
	// Line 4955, Address: 0x359218, Func Offset: 0x78
	// Line 4957, Address: 0x3592d8, Func Offset: 0x138
	// Line 4958, Address: 0x3592dc, Func Offset: 0x13c
	// Line 4957, Address: 0x3592e0, Func Offset: 0x140
	// Line 4958, Address: 0x3592e8, Func Offset: 0x148
	// Line 4959, Address: 0x3592fc, Func Offset: 0x15c
	// Line 4960, Address: 0x359300, Func Offset: 0x160
	// Line 4962, Address: 0x359308, Func Offset: 0x168
	// Line 4958, Address: 0x35930c, Func Offset: 0x16c
	// Line 4959, Address: 0x359314, Func Offset: 0x174
	// Line 4957, Address: 0x35931c, Func Offset: 0x17c
	// Line 4962, Address: 0x359324, Func Offset: 0x184
	// Line 4958, Address: 0x359328, Func Offset: 0x188
	// Line 4961, Address: 0x35932c, Func Offset: 0x18c
	// Line 4960, Address: 0x359334, Func Offset: 0x194
	// Line 4958, Address: 0x359338, Func Offset: 0x198
	// Line 4961, Address: 0x359340, Func Offset: 0x1a0
	// Line 4958, Address: 0x359344, Func Offset: 0x1a4
	// Line 4959, Address: 0x359358, Func Offset: 0x1b8
	// Line 4961, Address: 0x359360, Func Offset: 0x1c0
	// Line 4960, Address: 0x359364, Func Offset: 0x1c4
	// Line 4962, Address: 0x35936c, Func Offset: 0x1cc
	// Line 4963, Address: 0x359374, Func Offset: 0x1d4
	// Line 4966, Address: 0x3593a4, Func Offset: 0x204
	// Line 4970, Address: 0x3593ec, Func Offset: 0x24c
	// Line 4972, Address: 0x3594a8, Func Offset: 0x308
	// Line 4947, Address: 0x3594b8, Func Offset: 0x318
	// Line 4972, Address: 0x3594c0, Func Offset: 0x320
	// Line 4965, Address: 0x3594f0, Func Offset: 0x350
	// Line 4972, Address: 0x3594f4, Func Offset: 0x354
	// Func End, Address: 0x359518, Func Offset: 0x378
}

// stop__Q313cruise_bubble12CruiseBubble10state_typeFv
// Start address: 0x359520
void stop()
{
	// Line 745, Address: 0x359520, Func Offset: 0
	// Func End, Address: 0x359528, Func Offset: 0x8
}

// init__13cruise_bubbleFv
// Start address: 0x359530
void init()
{
	// Line 4906, Address: 0x359530, Func Offset: 0
	// Line 4907, Address: 0x359534, Func Offset: 0x4
	// Line 4906, Address: 0x359538, Func Offset: 0x8
	// Line 4908, Address: 0x35953c, Func Offset: 0xc
	// Line 4906, Address: 0x359540, Func Offset: 0x10
	// Line 4908, Address: 0x359544, Func Offset: 0x14
	// Line 4906, Address: 0x359548, Func Offset: 0x18
	// Line 4907, Address: 0x35955c, Func Offset: 0x2c
	// Line 4909, Address: 0x359560, Func Offset: 0x30
	// Line 4908, Address: 0x359564, Func Offset: 0x34
	// Line 4909, Address: 0x359568, Func Offset: 0x38
	// Line 4910, Address: 0x35956c, Func Offset: 0x3c
	// Line 4911, Address: 0x359570, Func Offset: 0x40
	// Line 4910, Address: 0x359574, Func Offset: 0x44
	// Line 4911, Address: 0x359578, Func Offset: 0x48
	// Line 4912, Address: 0x35957c, Func Offset: 0x4c
	// Line 4914, Address: 0x359580, Func Offset: 0x50
	// Line 4912, Address: 0x359584, Func Offset: 0x54
	// Line 4914, Address: 0x359588, Func Offset: 0x58
	// Line 4915, Address: 0x35959c, Func Offset: 0x6c
	// Line 4916, Address: 0x359608, Func Offset: 0xd8
	// Line 4917, Address: 0x35960c, Func Offset: 0xdc
	// Line 4916, Address: 0x359610, Func Offset: 0xe0
	// Line 4917, Address: 0x359618, Func Offset: 0xe8
	// Line 4916, Address: 0x35961c, Func Offset: 0xec
	// Line 4917, Address: 0x359620, Func Offset: 0xf0
	// Line 4914, Address: 0x359e30, Func Offset: 0x900
	// Line 4917, Address: 0x359e50, Func Offset: 0x920
	// Line 4918, Address: 0x35fa58, Func Offset: 0x6528
	// Line 4919, Address: 0x35fa60, Func Offset: 0x6530
	// Line 4920, Address: 0x35faac, Func Offset: 0x657c
	// Line 4919, Address: 0x35fab4, Func Offset: 0x6584
	// Line 4920, Address: 0x35fab8, Func Offset: 0x6588
	// Line 4921, Address: 0x35fad8, Func Offset: 0x65a8
	// Line 4922, Address: 0x35fb60, Func Offset: 0x6630
	// Line 4923, Address: 0x35fb7c, Func Offset: 0x664c
	// Line 4922, Address: 0x35fb80, Func Offset: 0x6650
	// Line 4923, Address: 0x35fb84, Func Offset: 0x6654
	// Line 4925, Address: 0x35fcf4, Func Offset: 0x67c4
	// Line 4923, Address: 0x35fcfc, Func Offset: 0x67cc
	// Line 4925, Address: 0x35fd04, Func Offset: 0x67d4
	// Line 4928, Address: 0x35fd08, Func Offset: 0x67d8
	// Line 4923, Address: 0x35fd14, Func Offset: 0x67e4
	// Line 4926, Address: 0x35fd1c, Func Offset: 0x67ec
	// Line 4923, Address: 0x35fd20, Func Offset: 0x67f0
	// Line 4925, Address: 0x35fd28, Func Offset: 0x67f8
	// Line 4926, Address: 0x35fd2c, Func Offset: 0x67fc
	// Line 4928, Address: 0x35fd30, Func Offset: 0x6800
	// Line 4929, Address: 0x35fdb8, Func Offset: 0x6888
	// Line 4917, Address: 0x35fdc8, Func Offset: 0x6898
	// Line 4929, Address: 0x35fdcc, Func Offset: 0x689c
	// Line 4917, Address: 0x35fddc, Func Offset: 0x68ac
	// Line 4929, Address: 0x35fde8, Func Offset: 0x68b8
	// Line 4917, Address: 0x35fdf8, Func Offset: 0x68c8
	// Line 4929, Address: 0x35fe04, Func Offset: 0x68d4
	// Line 4917, Address: 0x35fe10, Func Offset: 0x68e0
	// Line 4929, Address: 0x35fe1c, Func Offset: 0x68ec
	// Line 4917, Address: 0x35fe20, Func Offset: 0x68f0
	// Line 4929, Address: 0x35fe2c, Func Offset: 0x68fc
	// Line 4917, Address: 0x35fe3c, Func Offset: 0x690c
	// Line 4929, Address: 0x35fe48, Func Offset: 0x6918
	// Line 4917, Address: 0x35fe54, Func Offset: 0x6924
	// Line 4929, Address: 0x35fe60, Func Offset: 0x6930
	// Line 4917, Address: 0x35fe64, Func Offset: 0x6934
	// Line 4929, Address: 0x35fe70, Func Offset: 0x6940
	// Line 4917, Address: 0x35fe80, Func Offset: 0x6950
	// Line 4929, Address: 0x35fe8c, Func Offset: 0x695c
	// Line 4917, Address: 0x35fe98, Func Offset: 0x6968
	// Line 4929, Address: 0x35fea4, Func Offset: 0x6974
	// Line 4917, Address: 0x35fea8, Func Offset: 0x6978
	// Line 4929, Address: 0x35feb4, Func Offset: 0x6984
	// Line 4917, Address: 0x35fec4, Func Offset: 0x6994
	// Line 4929, Address: 0x35fed0, Func Offset: 0x69a0
	// Line 4917, Address: 0x35fedc, Func Offset: 0x69ac
	// Line 4929, Address: 0x35fee8, Func Offset: 0x69b8
	// Line 4917, Address: 0x35feec, Func Offset: 0x69bc
	// Line 4929, Address: 0x35fef8, Func Offset: 0x69c8
	// Line 4917, Address: 0x35ff08, Func Offset: 0x69d8
	// Line 4929, Address: 0x35ff14, Func Offset: 0x69e4
	// Line 4917, Address: 0x35ff20, Func Offset: 0x69f0
	// Line 4929, Address: 0x35ff2c, Func Offset: 0x69fc
	// Line 4917, Address: 0x35ff30, Func Offset: 0x6a00
	// Line 4929, Address: 0x35ff3c, Func Offset: 0x6a0c
	// Line 4917, Address: 0x35ff4c, Func Offset: 0x6a1c
	// Line 4929, Address: 0x35ff58, Func Offset: 0x6a28
	// Line 4917, Address: 0x35ff64, Func Offset: 0x6a34
	// Line 4929, Address: 0x35ff70, Func Offset: 0x6a40
	// Line 4917, Address: 0x35ff74, Func Offset: 0x6a44
	// Line 4929, Address: 0x35ff80, Func Offset: 0x6a50
	// Line 4917, Address: 0x35ff90, Func Offset: 0x6a60
	// Line 4929, Address: 0x35ff9c, Func Offset: 0x6a6c
	// Line 4917, Address: 0x35ffa8, Func Offset: 0x6a78
	// Line 4929, Address: 0x35ffb4, Func Offset: 0x6a84
	// Line 4917, Address: 0x35ffb8, Func Offset: 0x6a88
	// Line 4929, Address: 0x35ffc4, Func Offset: 0x6a94
	// Line 4917, Address: 0x35ffd4, Func Offset: 0x6aa4
	// Line 4929, Address: 0x35ffe0, Func Offset: 0x6ab0
	// Line 4917, Address: 0x35ffec, Func Offset: 0x6abc
	// Line 4929, Address: 0x35fff8, Func Offset: 0x6ac8
	// Line 4917, Address: 0x35fffc, Func Offset: 0x6acc
	// Line 4929, Address: 0x360004, Func Offset: 0x6ad4
	// Line 4923, Address: 0x360014, Func Offset: 0x6ae4
	// Line 4929, Address: 0x360018, Func Offset: 0x6ae8
	// Line 4923, Address: 0x360030, Func Offset: 0x6b00
	// Line 4929, Address: 0x360044, Func Offset: 0x6b14
	// Line 4923, Address: 0x360058, Func Offset: 0x6b28
	// Line 4929, Address: 0x36005c, Func Offset: 0x6b2c
	// Line 4923, Address: 0x360064, Func Offset: 0x6b34
	// Line 4929, Address: 0x360068, Func Offset: 0x6b38
	// Line 4923, Address: 0x360078, Func Offset: 0x6b48
	// Line 4929, Address: 0x360084, Func Offset: 0x6b54
	// Line 4923, Address: 0x36009c, Func Offset: 0x6b6c
	// Line 4929, Address: 0x3600b0, Func Offset: 0x6b80
	// Line 4923, Address: 0x3600c4, Func Offset: 0x6b94
	// Line 4929, Address: 0x3600c8, Func Offset: 0x6b98
	// Line 4923, Address: 0x3600d0, Func Offset: 0x6ba0
	// Line 4929, Address: 0x3600d4, Func Offset: 0x6ba4
	// Line 4923, Address: 0x3600e4, Func Offset: 0x6bb4
	// Line 4929, Address: 0x3600f0, Func Offset: 0x6bc0
	// Line 4923, Address: 0x360108, Func Offset: 0x6bd8
	// Line 4929, Address: 0x36011c, Func Offset: 0x6bec
	// Line 4923, Address: 0x360130, Func Offset: 0x6c00
	// Line 4929, Address: 0x360134, Func Offset: 0x6c04
	// Line 4923, Address: 0x36013c, Func Offset: 0x6c0c
	// Line 4929, Address: 0x360140, Func Offset: 0x6c10
	// Line 4923, Address: 0x360150, Func Offset: 0x6c20
	// Line 4929, Address: 0x360168, Func Offset: 0x6c38
	// Line 4923, Address: 0x360174, Func Offset: 0x6c44
	// Line 4929, Address: 0x360178, Func Offset: 0x6c48
	// Line 4923, Address: 0x36018c, Func Offset: 0x6c5c
	// Line 4929, Address: 0x360194, Func Offset: 0x6c64
	// Line 4923, Address: 0x3601ac, Func Offset: 0x6c7c
	// Line 4929, Address: 0x3601b4, Func Offset: 0x6c84
	// Func End, Address: 0x3601d8, Func Offset: 0x6ca8
}

// deinit__13cruise_bubbleFv
// Start address: 0x3601e0
void deinit()
{
	// Line 4891, Address: 0x3601e0, Func Offset: 0
	// Line 4896, Address: 0x3601e4, Func Offset: 0x4
	// Line 4891, Address: 0x3601e8, Func Offset: 0x8
	// Line 4892, Address: 0x3601ec, Func Offset: 0xc
	// Line 4895, Address: 0x3601f0, Func Offset: 0x10
	// Line 4892, Address: 0x3601f4, Func Offset: 0x14
	// Line 4893, Address: 0x3601f8, Func Offset: 0x18
	// Line 4898, Address: 0x3601fc, Func Offset: 0x1c
	// Line 4893, Address: 0x360200, Func Offset: 0x20
	// Line 4894, Address: 0x360204, Func Offset: 0x24
	// Line 4902, Address: 0x360208, Func Offset: 0x28
	// Line 4894, Address: 0x36020c, Func Offset: 0x2c
	// Line 4896, Address: 0x360210, Func Offset: 0x30
	// Line 4902, Address: 0x360214, Func Offset: 0x34
	// Line 4896, Address: 0x360218, Func Offset: 0x38
	// Line 4903, Address: 0x360224, Func Offset: 0x44
	// Func End, Address: 0x36022c, Func Offset: 0x4c
}

// xCamReturn__13cruise_bubbleFv
// Start address: 0x360230
void xCamReturn()
{
	// Line 4883, Address: 0x360230, Func Offset: 0
	// Func End, Address: 0x360238, Func Offset: 0x8
}

// xCamLaunch__13cruise_bubbleFv
// Start address: 0x360240
void xCamLaunch()
{
	xCam* defaultCam;
	// Line 4852, Address: 0x360240, Func Offset: 0
	// Line 4855, Address: 0x360244, Func Offset: 0x4
	// Line 4852, Address: 0x360248, Func Offset: 0x8
	// Line 4855, Address: 0x36024c, Func Offset: 0xc
	// Line 4852, Address: 0x360250, Func Offset: 0x10
	// Line 4856, Address: 0x360254, Func Offset: 0x14
	// Line 4855, Address: 0x360258, Func Offset: 0x18
	// Line 4856, Address: 0x360260, Func Offset: 0x20
	// Line 4855, Address: 0x360264, Func Offset: 0x24
	// Line 4856, Address: 0x36026c, Func Offset: 0x2c
	// Line 4857, Address: 0x360278, Func Offset: 0x38
	// Line 4858, Address: 0x360294, Func Offset: 0x54
	// Line 4867, Address: 0x36029c, Func Offset: 0x5c
	// Line 4868, Address: 0x3602a4, Func Offset: 0x64
	// Line 4869, Address: 0x3602ac, Func Offset: 0x6c
	// Line 4873, Address: 0x3602b8, Func Offset: 0x78
	// Func End, Address: 0x3602c4, Func Offset: 0x84
}

// render_rings__Q213cruise_bubble12CruiseBubbleFv
// Start address: 0x3602d0
void render_rings()
{
	RxObjSpace3DVertex stripVert[24];
	RxObjSpace3DVertex* currVert;
	xVec3 pos;
	float32 radius;
	xColor_tag color;
	// Line 4722, Address: 0x3602d0, Func Offset: 0
	// Line 4723, Address: 0x3602ec, Func Offset: 0x1c
	// Line 4727, Address: 0x3602f8, Func Offset: 0x28
	// Line 4730, Address: 0x360308, Func Offset: 0x38
	// Line 4729, Address: 0x36030c, Func Offset: 0x3c
	// Line 4730, Address: 0x360314, Func Offset: 0x44
	// Line 4729, Address: 0x360318, Func Offset: 0x48
	// Line 4730, Address: 0x360324, Func Offset: 0x54
	// Line 4729, Address: 0x360328, Func Offset: 0x58
	// Line 4737, Address: 0x360334, Func Offset: 0x64
	// Line 4730, Address: 0x360338, Func Offset: 0x68
	// Line 4729, Address: 0x360340, Func Offset: 0x70
	// Line 4730, Address: 0x360344, Func Offset: 0x74
	// Line 4737, Address: 0x360348, Func Offset: 0x78
	// Line 4730, Address: 0x36034c, Func Offset: 0x7c
	// Line 4737, Address: 0x360360, Func Offset: 0x90
	// Line 4740, Address: 0x360370, Func Offset: 0xa0
	// Line 4741, Address: 0x360380, Func Offset: 0xb0
	// Line 4742, Address: 0x360390, Func Offset: 0xc0
	// Line 4743, Address: 0x3603a0, Func Offset: 0xd0
	// Line 4747, Address: 0x3603b0, Func Offset: 0xe0
	// Line 4748, Address: 0x3603b4, Func Offset: 0xe4
	// Line 4747, Address: 0x3603b8, Func Offset: 0xe8
	// Line 4749, Address: 0x3603c0, Func Offset: 0xf0
	// Line 4750, Address: 0x3603c8, Func Offset: 0xf8
	// Line 4751, Address: 0x3603cc, Func Offset: 0xfc
	// Line 4748, Address: 0x3603d0, Func Offset: 0x100
	// Line 4751, Address: 0x3603d4, Func Offset: 0x104
	// Line 4750, Address: 0x3603dc, Func Offset: 0x10c
	// Line 4751, Address: 0x3603e0, Func Offset: 0x110
	// Line 4754, Address: 0x3603ec, Func Offset: 0x11c
	// Line 4752, Address: 0x3603f0, Func Offset: 0x120
	// Line 4754, Address: 0x3603f4, Func Offset: 0x124
	// Line 4756, Address: 0x3603f8, Func Offset: 0x128
	// Line 4753, Address: 0x360400, Func Offset: 0x130
	// Line 4756, Address: 0x360404, Func Offset: 0x134
	// Line 4755, Address: 0x360410, Func Offset: 0x140
	// Line 4756, Address: 0x360418, Func Offset: 0x148
	// Line 4761, Address: 0x360424, Func Offset: 0x154
	// Line 4757, Address: 0x360428, Func Offset: 0x158
	// Line 4761, Address: 0x36042c, Func Offset: 0x15c
	// Line 4759, Address: 0x360430, Func Offset: 0x160
	// Line 4757, Address: 0x360434, Func Offset: 0x164
	// Line 4761, Address: 0x360438, Func Offset: 0x168
	// Line 4760, Address: 0x360440, Func Offset: 0x170
	// Line 4758, Address: 0x360444, Func Offset: 0x174
	// Line 4761, Address: 0x360448, Func Offset: 0x178
	// Line 4760, Address: 0x36044c, Func Offset: 0x17c
	// Line 4761, Address: 0x360450, Func Offset: 0x180
	// Line 4766, Address: 0x36045c, Func Offset: 0x18c
	// Line 4762, Address: 0x360460, Func Offset: 0x190
	// Line 4766, Address: 0x360464, Func Offset: 0x194
	// Line 4765, Address: 0x360468, Func Offset: 0x198
	// Line 4763, Address: 0x36046c, Func Offset: 0x19c
	// Line 4766, Address: 0x360470, Func Offset: 0x1a0
	// Line 4764, Address: 0x360478, Func Offset: 0x1a8
	// Line 4762, Address: 0x36047c, Func Offset: 0x1ac
	// Line 4766, Address: 0x360480, Func Offset: 0x1b0
	// Line 4765, Address: 0x360484, Func Offset: 0x1b4
	// Line 4766, Address: 0x360488, Func Offset: 0x1b8
	// Line 4769, Address: 0x360494, Func Offset: 0x1c4
	// Line 4772, Address: 0x360864, Func Offset: 0x594
	// Line 4773, Address: 0x360874, Func Offset: 0x5a4
	// Line 4774, Address: 0x360884, Func Offset: 0x5b4
	// Line 4775, Address: 0x360894, Func Offset: 0x5c4
	// Line 4776, Address: 0x3608a4, Func Offset: 0x5d4
	// Func End, Address: 0x3608c4, Func Offset: 0x5f4
}

// RenderOneRing__Q213cruise_bubble12CruiseBubbleF5xVec3f10xColor_tagPP18RxObjSpace3DVertexi
// Start address: 0x3608d0
void RenderOneRing(float32 radius, xColor_tag color, RxObjSpace3DVertex** vertList, int32 first)
{
	xVec3 pos;
	xVec3 h;
	xVec3 w;
	RxObjSpace3DVertex* vert;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RxObjSpace3DVertex* copyVert;
	// Line 4670, Address: 0x3608d0, Func Offset: 0
	// Line 4674, Address: 0x3608e4, Func Offset: 0x14
	// Line 4670, Address: 0x3608e8, Func Offset: 0x18
	// Line 4674, Address: 0x3608ec, Func Offset: 0x1c
	// Line 4675, Address: 0x3608f0, Func Offset: 0x20
	// Line 4670, Address: 0x3608f4, Func Offset: 0x24
	// Line 4678, Address: 0x36090c, Func Offset: 0x3c
	// Line 4670, Address: 0x360910, Func Offset: 0x40
	// Line 4675, Address: 0x360914, Func Offset: 0x44
	// Line 4672, Address: 0x360918, Func Offset: 0x48
	// Line 4671, Address: 0x36091c, Func Offset: 0x4c
	// Line 4672, Address: 0x360920, Func Offset: 0x50
	// Line 4671, Address: 0x360924, Func Offset: 0x54
	// Line 4672, Address: 0x36092c, Func Offset: 0x5c
	// Line 4674, Address: 0x360934, Func Offset: 0x64
	// Line 4675, Address: 0x360938, Func Offset: 0x68
	// Line 4671, Address: 0x36093c, Func Offset: 0x6c
	// Line 4675, Address: 0x360940, Func Offset: 0x70
	// Line 4674, Address: 0x360944, Func Offset: 0x74
	// Line 4675, Address: 0x360948, Func Offset: 0x78
	// Line 4671, Address: 0x36094c, Func Offset: 0x7c
	// Line 4672, Address: 0x360950, Func Offset: 0x80
	// Line 4674, Address: 0x360954, Func Offset: 0x84
	// Line 4675, Address: 0x36095c, Func Offset: 0x8c
	// Line 4674, Address: 0x360960, Func Offset: 0x90
	// Line 4675, Address: 0x360968, Func Offset: 0x98
	// Line 4674, Address: 0x360970, Func Offset: 0xa0
	// Line 4675, Address: 0x360978, Func Offset: 0xa8
	// Line 4679, Address: 0x36097c, Func Offset: 0xac
	// Line 4680, Address: 0x360984, Func Offset: 0xb4
	// Line 4684, Address: 0x360990, Func Offset: 0xc0
	// Line 4687, Address: 0x3609a8, Func Offset: 0xd8
	// Line 4692, Address: 0x3609ac, Func Offset: 0xdc
	// Line 4684, Address: 0x3609b4, Func Offset: 0xe4
	// Line 4690, Address: 0x3609d4, Func Offset: 0x104
	// Line 4684, Address: 0x3609e0, Func Offset: 0x110
	// Line 4685, Address: 0x3609e8, Func Offset: 0x118
	// Line 4690, Address: 0x3609ec, Func Offset: 0x11c
	// Line 4686, Address: 0x3609f0, Func Offset: 0x120
	// Line 4687, Address: 0x3609f4, Func Offset: 0x124
	// Line 4697, Address: 0x360a00, Func Offset: 0x130
	// Line 4687, Address: 0x360a04, Func Offset: 0x134
	// Line 4690, Address: 0x360a08, Func Offset: 0x138
	// Line 4691, Address: 0x360a18, Func Offset: 0x148
	// Line 4697, Address: 0x360a1c, Func Offset: 0x14c
	// Line 4692, Address: 0x360a20, Func Offset: 0x150
	// Line 4693, Address: 0x360a24, Func Offset: 0x154
	// Line 4703, Address: 0x360a30, Func Offset: 0x160
	// Line 4693, Address: 0x360a34, Func Offset: 0x164
	// Line 4697, Address: 0x360a38, Func Offset: 0x168
	// Line 4698, Address: 0x360a48, Func Offset: 0x178
	// Line 4703, Address: 0x360a4c, Func Offset: 0x17c
	// Line 4699, Address: 0x360a50, Func Offset: 0x180
	// Line 4700, Address: 0x360a54, Func Offset: 0x184
	// Line 4703, Address: 0x360a60, Func Offset: 0x190
	// Line 4700, Address: 0x360a64, Func Offset: 0x194
	// Line 4703, Address: 0x360a68, Func Offset: 0x198
	// Line 4704, Address: 0x360a74, Func Offset: 0x1a4
	// Line 4705, Address: 0x360a78, Func Offset: 0x1a8
	// Line 4706, Address: 0x360a7c, Func Offset: 0x1ac
	// Line 4710, Address: 0x360a88, Func Offset: 0x1b8
	// Line 4717, Address: 0x360a90, Func Offset: 0x1c0
	// Line 4718, Address: 0x360a94, Func Offset: 0x1c4
	// Func End, Address: 0x360b6c, Func Offset: 0x29c
}

// load_cheat_tweak__Q213cruise_bubble12CruiseBubbleFv
// Start address: 0x360b70
void load_cheat_tweak()
{
	// Line 4604, Address: 0x360b70, Func Offset: 0
	// Line 4605, Address: 0x360b74, Func Offset: 0x4
	// Line 4604, Address: 0x360b78, Func Offset: 0x8
	// Line 4605, Address: 0x360b7c, Func Offset: 0xc
	// Line 4608, Address: 0x360b84, Func Offset: 0x14
	// Line 4605, Address: 0x360b88, Func Offset: 0x18
	// Line 4606, Address: 0x360b8c, Func Offset: 0x1c
	// Line 4607, Address: 0x360b9c, Func Offset: 0x2c
	// Line 4609, Address: 0x360ba0, Func Offset: 0x30
	// Line 4607, Address: 0x360ba4, Func Offset: 0x34
	// Line 4608, Address: 0x360ba8, Func Offset: 0x38
	// Line 4609, Address: 0x360bb0, Func Offset: 0x40
	// Line 4610, Address: 0x360bb4, Func Offset: 0x44
	// Line 4609, Address: 0x360bb8, Func Offset: 0x48
	// Line 4610, Address: 0x360bbc, Func Offset: 0x4c
	// Line 4611, Address: 0x360bc0, Func Offset: 0x50
	// Line 4610, Address: 0x360bc4, Func Offset: 0x54
	// Line 4611, Address: 0x360bc8, Func Offset: 0x58
	// Line 4612, Address: 0x360bcc, Func Offset: 0x5c
	// Line 4611, Address: 0x360bd0, Func Offset: 0x60
	// Line 4612, Address: 0x360bd4, Func Offset: 0x64
	// Line 4611, Address: 0x360bd8, Func Offset: 0x68
	// Line 4613, Address: 0x360bdc, Func Offset: 0x6c
	// Line 4614, Address: 0x360bec, Func Offset: 0x7c
	// Line 4615, Address: 0x360bfc, Func Offset: 0x8c
	// Line 4616, Address: 0x360c04, Func Offset: 0x94
	// Line 4615, Address: 0x360c08, Func Offset: 0x98
	// Line 4616, Address: 0x360c0c, Func Offset: 0x9c
	// Line 4618, Address: 0x360c10, Func Offset: 0xa0
	// Line 4616, Address: 0x360c18, Func Offset: 0xa8
	// Line 4619, Address: 0x360c1c, Func Offset: 0xac
	// Line 4623, Address: 0x360c24, Func Offset: 0xb4
	// Line 4619, Address: 0x360c28, Func Offset: 0xb8
	// Line 4623, Address: 0x360c2c, Func Offset: 0xbc
	// Line 4620, Address: 0x360c30, Func Offset: 0xc0
	// Line 4621, Address: 0x360c34, Func Offset: 0xc4
	// Line 4620, Address: 0x360c38, Func Offset: 0xc8
	// Line 4621, Address: 0x360c3c, Func Offset: 0xcc
	// Line 4623, Address: 0x360c44, Func Offset: 0xd4
	// Line 4624, Address: 0x360c48, Func Offset: 0xd8
	// Line 4625, Address: 0x360c5c, Func Offset: 0xec
	// Line 4624, Address: 0x360c60, Func Offset: 0xf0
	// Line 4625, Address: 0x360c64, Func Offset: 0xf4
	// Line 4626, Address: 0x360c6c, Func Offset: 0xfc
	// Line 4625, Address: 0x360c70, Func Offset: 0x100
	// Line 4626, Address: 0x360c74, Func Offset: 0x104
	// Line 4627, Address: 0x360c78, Func Offset: 0x108
	// Line 4626, Address: 0x360c7c, Func Offset: 0x10c
	// Line 4627, Address: 0x360c80, Func Offset: 0x110
	// Line 4629, Address: 0x360c8c, Func Offset: 0x11c
	// Line 4627, Address: 0x360c90, Func Offset: 0x120
	// Line 4630, Address: 0x360c94, Func Offset: 0x124
	// Line 4629, Address: 0x360c98, Func Offset: 0x128
	// Line 4630, Address: 0x360ca0, Func Offset: 0x130
	// Line 4631, Address: 0x360ca4, Func Offset: 0x134
	// Line 4630, Address: 0x360ca8, Func Offset: 0x138
	// Line 4631, Address: 0x360cac, Func Offset: 0x13c
	// Line 4633, Address: 0x360cb8, Func Offset: 0x148
	// Line 4634, Address: 0x360cc0, Func Offset: 0x150
	// Line 4633, Address: 0x360cc4, Func Offset: 0x154
	// Line 4634, Address: 0x360cc8, Func Offset: 0x158
	// Line 4636, Address: 0x360ccc, Func Offset: 0x15c
	// Line 4634, Address: 0x360cd0, Func Offset: 0x160
	// Line 4636, Address: 0x360cd4, Func Offset: 0x164
	// Line 4637, Address: 0x360cd8, Func Offset: 0x168
	// Line 4636, Address: 0x360cdc, Func Offset: 0x16c
	// Line 4637, Address: 0x360ce0, Func Offset: 0x170
	// Line 4638, Address: 0x360ce4, Func Offset: 0x174
	// Line 4637, Address: 0x360ce8, Func Offset: 0x178
	// Line 4638, Address: 0x360cec, Func Offset: 0x17c
	// Line 4639, Address: 0x360cf4, Func Offset: 0x184
	// Func End, Address: 0x360d00, Func Offset: 0x190
}

// check_anim_aim__Q213cruise_bubble12CruiseBubbleFP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x360d00
uint32 check_anim_aim()
{
	// Line 4588, Address: 0x360d00, Func Offset: 0
	// Func End, Address: 0x360d08, Func Offset: 0x8
}

// check_lock_target__Q213cruise_bubble12CruiseBubbleFPC4xEnt
// Start address: 0x360d10
void check_lock_target(xEnt* ent)
{
	xVec3* target;
	xMat4x3& mat;
	xVec3 offset;
	float32 ang;
	float32 min_ang;
	float32 max_ang;
	state_camera_attach& attach;
	// Line 4526, Address: 0x360d10, Func Offset: 0
	// Line 4528, Address: 0x360d14, Func Offset: 0x4
	// Line 4526, Address: 0x360d18, Func Offset: 0x8
	// Line 4529, Address: 0x360d1c, Func Offset: 0xc
	// Line 4526, Address: 0x360d20, Func Offset: 0x10
	// Line 4529, Address: 0x360d24, Func Offset: 0x14
	// Line 4526, Address: 0x360d28, Func Offset: 0x18
	// Line 4528, Address: 0x360d34, Func Offset: 0x24
	// Line 4526, Address: 0x360d38, Func Offset: 0x28
	// Line 4529, Address: 0x360d3c, Func Offset: 0x2c
	// Line 4527, Address: 0x360d6c, Func Offset: 0x5c
	// Line 4529, Address: 0x360d70, Func Offset: 0x60
	// Line 4533, Address: 0x360db4, Func Offset: 0xa4
	// Line 4529, Address: 0x360db8, Func Offset: 0xa8
	// Line 4533, Address: 0x360de4, Func Offset: 0xd4
	// Line 4537, Address: 0x360e00, Func Offset: 0xf0
	// Line 4539, Address: 0x360e04, Func Offset: 0xf4
	// Line 4537, Address: 0x360e0c, Func Offset: 0xfc
	// Line 4539, Address: 0x360e24, Func Offset: 0x114
	// Line 4540, Address: 0x360e5c, Func Offset: 0x14c
	// Line 4543, Address: 0x360eac, Func Offset: 0x19c
	// Line 4540, Address: 0x360eb0, Func Offset: 0x1a0
	// Line 4543, Address: 0x360eb4, Func Offset: 0x1a4
	// Line 4548, Address: 0x360ebc, Func Offset: 0x1ac
	// Line 4550, Address: 0x360ecc, Func Offset: 0x1bc
	// Line 4551, Address: 0x360ed0, Func Offset: 0x1c0
	// Line 4554, Address: 0x360ed4, Func Offset: 0x1c4
	// Line 4556, Address: 0x360ee0, Func Offset: 0x1d0
	// Line 4557, Address: 0x360ee8, Func Offset: 0x1d8
	// Line 4559, Address: 0x360ef8, Func Offset: 0x1e8
	// Line 4560, Address: 0x360f3c, Func Offset: 0x22c
	// Line 4563, Address: 0x360f44, Func Offset: 0x234
	// Line 4564, Address: 0x360f48, Func Offset: 0x238
	// Line 4568, Address: 0x360f4c, Func Offset: 0x23c
	// Line 4570, Address: 0x360f58, Func Offset: 0x248
	// Line 4571, Address: 0x360f9c, Func Offset: 0x28c
	// Line 4574, Address: 0x360fa4, Func Offset: 0x294
	// Line 4576, Address: 0x360fc4, Func Offset: 0x2b4
	// Line 4579, Address: 0x360fcc, Func Offset: 0x2bc
	// Line 4580, Address: 0x361014, Func Offset: 0x304
	// Line 4582, Address: 0x361024, Func Offset: 0x314
	// Line 4547, Address: 0x361034, Func Offset: 0x324
	// Line 4582, Address: 0x36103c, Func Offset: 0x32c
	// Func End, Address: 0x361058, Func Offset: 0x348
}

// lock_target__Q213cruise_bubble12CruiseBubbleFiPC5xVec3f
// Start address: 0x361060
void lock_target(int32 index, xVec3* target, float32 opacity)
{
	hud_gizmo& gizmo;
	xVec3 screen_loc;
	// Line 4501, Address: 0x361060, Func Offset: 0
	// Line 4502, Address: 0x361064, Func Offset: 0x4
	// Line 4501, Address: 0x361068, Func Offset: 0x8
	// Line 4502, Address: 0x36107c, Func Offset: 0x1c
	// Line 4504, Address: 0x361098, Func Offset: 0x38
	// Line 4506, Address: 0x3610a4, Func Offset: 0x44
	// Line 4508, Address: 0x3610a8, Func Offset: 0x48
	// Line 4506, Address: 0x3610ac, Func Offset: 0x4c
	// Line 4508, Address: 0x3610b0, Func Offset: 0x50
	// Line 4507, Address: 0x3610c8, Func Offset: 0x68
	// Line 4508, Address: 0x3610cc, Func Offset: 0x6c
	// Line 4507, Address: 0x3610e0, Func Offset: 0x80
	// Line 4508, Address: 0x3610e4, Func Offset: 0x84
	// Line 4507, Address: 0x3610ec, Func Offset: 0x8c
	// Line 4508, Address: 0x3610f0, Func Offset: 0x90
	// Line 4511, Address: 0x3611c4, Func Offset: 0x164
	// Line 4514, Address: 0x3611d4, Func Offset: 0x174
	// Line 4511, Address: 0x3611d8, Func Offset: 0x178
	// Line 4514, Address: 0x3611dc, Func Offset: 0x17c
	// Line 4511, Address: 0x3611e0, Func Offset: 0x180
	// Line 4514, Address: 0x3611e4, Func Offset: 0x184
	// Line 4511, Address: 0x3611e8, Func Offset: 0x188
	// Line 4514, Address: 0x3611ec, Func Offset: 0x18c
	// Line 4515, Address: 0x361268, Func Offset: 0x208
	// Line 4516, Address: 0x36126c, Func Offset: 0x20c
	// Line 4518, Address: 0x361270, Func Offset: 0x210
	// Line 4516, Address: 0x361274, Func Offset: 0x214
	// Line 4514, Address: 0x361278, Func Offset: 0x218
	// Line 4520, Address: 0x361280, Func Offset: 0x220
	// Line 4514, Address: 0x361284, Func Offset: 0x224
	// Line 4515, Address: 0x361298, Func Offset: 0x238
	// Line 4516, Address: 0x36129c, Func Offset: 0x23c
	// Line 4514, Address: 0x3612a0, Func Offset: 0x240
	// Line 4515, Address: 0x3612a4, Func Offset: 0x244
	// Line 4516, Address: 0x3612a8, Func Offset: 0x248
	// Line 4515, Address: 0x3612b0, Func Offset: 0x250
	// Line 4516, Address: 0x3612b4, Func Offset: 0x254
	// Line 4518, Address: 0x3612d0, Func Offset: 0x270
	// Line 4519, Address: 0x3612d4, Func Offset: 0x274
	// Line 4520, Address: 0x3612e0, Func Offset: 0x280
	// Line 4521, Address: 0x3612e8, Func Offset: 0x288
	// Line 4522, Address: 0x3612ec, Func Offset: 0x28c
	// Line 4523, Address: 0x3612f0, Func Offset: 0x290
	// Func End, Address: 0x361308, Func Offset: 0x2a8
}

// render_hud__Q213cruise_bubble12CruiseBubbleFv
// Start address: 0x361310
void render_hud()
{
	basic_rect bound;
	uint32 i;
	hud_gizmo& gizmo;
	float32 alpha;
	uint32 i;
	hud_gizmo& gizmo;
	float32 glow;
	float32 alpha;
	// Line 4394, Address: 0x361310, Func Offset: 0
	// Line 4395, Address: 0x361314, Func Offset: 0x4
	// Line 4394, Address: 0x361318, Func Offset: 0x8
	// Line 4395, Address: 0x361354, Func Offset: 0x44
	// Line 4398, Address: 0x361360, Func Offset: 0x50
	// Line 4401, Address: 0x361368, Func Offset: 0x58
	// Line 4403, Address: 0x361384, Func Offset: 0x74
	// Line 4401, Address: 0x361388, Func Offset: 0x78
	// Line 4403, Address: 0x36138c, Func Offset: 0x7c
	// Line 4404, Address: 0x361398, Func Offset: 0x88
	// Line 4417, Address: 0x3613b4, Func Offset: 0xa4
	// Line 4416, Address: 0x3613bc, Func Offset: 0xac
	// Line 4415, Address: 0x3613c4, Func Offset: 0xb4
	// Line 4416, Address: 0x3613c8, Func Offset: 0xb8
	// Line 4415, Address: 0x3613d0, Func Offset: 0xc0
	// Line 4417, Address: 0x3613d4, Func Offset: 0xc4
	// Line 4404, Address: 0x3613d8, Func Offset: 0xc8
	// Line 4417, Address: 0x3613dc, Func Offset: 0xcc
	// Line 4416, Address: 0x361408, Func Offset: 0xf8
	// Line 4417, Address: 0x36140c, Func Offset: 0xfc
	// Line 4416, Address: 0x361410, Func Offset: 0x100
	// Line 4417, Address: 0x361414, Func Offset: 0x104
	// Line 4416, Address: 0x361418, Func Offset: 0x108
	// Line 4417, Address: 0x36141c, Func Offset: 0x10c
	// Line 4416, Address: 0x361420, Func Offset: 0x110
	// Line 4417, Address: 0x361424, Func Offset: 0x114
	// Line 4415, Address: 0x361428, Func Offset: 0x118
	// Line 4417, Address: 0x36142c, Func Offset: 0x11c
	// Line 4415, Address: 0x361438, Func Offset: 0x128
	// Line 4417, Address: 0x36143c, Func Offset: 0x12c
	// Line 4416, Address: 0x361440, Func Offset: 0x130
	// Line 4417, Address: 0x361444, Func Offset: 0x134
	// Line 4418, Address: 0x361564, Func Offset: 0x254
	// Line 4417, Address: 0x361568, Func Offset: 0x258
	// Line 4421, Address: 0x361570, Func Offset: 0x260
	// Line 4422, Address: 0x361580, Func Offset: 0x270
	// Line 4423, Address: 0x361590, Func Offset: 0x280
	// Line 4425, Address: 0x3615e0, Func Offset: 0x2d0
	// Line 4427, Address: 0x3615f4, Func Offset: 0x2e4
	// Line 4425, Address: 0x3615f8, Func Offset: 0x2e8
	// Line 4427, Address: 0x3615fc, Func Offset: 0x2ec
	// Line 4428, Address: 0x361610, Func Offset: 0x300
	// Line 4429, Address: 0x36161c, Func Offset: 0x30c
	// Line 4430, Address: 0x3617a4, Func Offset: 0x494
	// Line 4433, Address: 0x3617c0, Func Offset: 0x4b0
	// Line 4434, Address: 0x3617d0, Func Offset: 0x4c0
	// Line 4435, Address: 0x3617e0, Func Offset: 0x4d0
	// Line 4438, Address: 0x3617fc, Func Offset: 0x4ec
	// Line 4439, Address: 0x361808, Func Offset: 0x4f8
	// Line 4438, Address: 0x36180c, Func Offset: 0x4fc
	// Line 4439, Address: 0x361810, Func Offset: 0x500
	// Line 4440, Address: 0x361830, Func Offset: 0x520
	// Line 4441, Address: 0x361848, Func Offset: 0x538
	// Line 4442, Address: 0x361858, Func Offset: 0x548
	// Line 4441, Address: 0x36185c, Func Offset: 0x54c
	// Line 4442, Address: 0x361864, Func Offset: 0x554
	// Line 4445, Address: 0x361870, Func Offset: 0x560
	// Line 4446, Address: 0x36187c, Func Offset: 0x56c
	// Line 4449, Address: 0x361898, Func Offset: 0x588
	// Line 4450, Address: 0x3618ac, Func Offset: 0x59c
	// Func End, Address: 0x3618f0, Func Offset: 0x5e0
}

// update_hud__Q213cruise_bubble12CruiseBubbleFf
// Start address: 0x3618f0
void update_hud(float32 dt)
{
	float32 vel_frac;
	uint32 i;
	uint32 i;
	uint32 i;
	// Line 4347, Address: 0x3618f0, Func Offset: 0
	// Line 4348, Address: 0x3618f4, Func Offset: 0x4
	// Line 4347, Address: 0x3618f8, Func Offset: 0x8
	// Line 4348, Address: 0x361918, Func Offset: 0x28
	// Line 4350, Address: 0x361924, Func Offset: 0x34
	// Line 4351, Address: 0x361950, Func Offset: 0x60
	// Line 4350, Address: 0x361954, Func Offset: 0x64
	// Line 4351, Address: 0x361958, Func Offset: 0x68
	// Line 4366, Address: 0x361988, Func Offset: 0x98
	// Line 4354, Address: 0x36198c, Func Offset: 0x9c
	// Line 4366, Address: 0x361990, Func Offset: 0xa0
	// Line 4354, Address: 0x361994, Func Offset: 0xa4
	// Line 4368, Address: 0x361998, Func Offset: 0xa8
	// Line 4354, Address: 0x36199c, Func Offset: 0xac
	// Line 4365, Address: 0x3619a0, Func Offset: 0xb0
	// Line 4354, Address: 0x3619a8, Func Offset: 0xb8
	// Line 4367, Address: 0x3619ac, Func Offset: 0xbc
	// Line 4354, Address: 0x3619b4, Func Offset: 0xc4
	// Line 4367, Address: 0x3619b8, Func Offset: 0xc8
	// Line 4366, Address: 0x3619bc, Func Offset: 0xcc
	// Line 4367, Address: 0x3619cc, Func Offset: 0xdc
	// Line 4368, Address: 0x3619d4, Func Offset: 0xe4
	// Line 4370, Address: 0x361c68, Func Offset: 0x378
	// Line 4373, Address: 0x361c80, Func Offset: 0x390
	// Line 4370, Address: 0x361c84, Func Offset: 0x394
	// Line 4373, Address: 0x361c88, Func Offset: 0x398
	// Line 4370, Address: 0x361c8c, Func Offset: 0x39c
	// Line 4374, Address: 0x361c94, Func Offset: 0x3a4
	// Line 4372, Address: 0x361c98, Func Offset: 0x3a8
	// Line 4374, Address: 0x361ca8, Func Offset: 0x3b8
	// Line 4376, Address: 0x361cc0, Func Offset: 0x3d0
	// Line 4388, Address: 0x361ccc, Func Offset: 0x3dc
	// Line 4389, Address: 0x361cdc, Func Offset: 0x3ec
	// Line 4388, Address: 0x361ce0, Func Offset: 0x3f0
	// Line 4389, Address: 0x361ce4, Func Offset: 0x3f4
	// Line 4373, Address: 0x361d14, Func Offset: 0x424
	// Line 4389, Address: 0x361d30, Func Offset: 0x440
	// Line 4378, Address: 0x361d3c, Func Offset: 0x44c
	// Line 4389, Address: 0x361d40, Func Offset: 0x450
	// Line 4378, Address: 0x361d44, Func Offset: 0x454
	// Line 4389, Address: 0x361d50, Func Offset: 0x460
	// Line 4378, Address: 0x361d5c, Func Offset: 0x46c
	// Line 4389, Address: 0x361d60, Func Offset: 0x470
	// Line 4378, Address: 0x361d68, Func Offset: 0x478
	// Line 4389, Address: 0x361d74, Func Offset: 0x484
	// Line 4379, Address: 0x361d84, Func Offset: 0x494
	// Line 4389, Address: 0x361d90, Func Offset: 0x4a0
	// Line 4382, Address: 0x361dd4, Func Offset: 0x4e4
	// Line 4389, Address: 0x361dd8, Func Offset: 0x4e8
	// Line 4382, Address: 0x361ddc, Func Offset: 0x4ec
	// Line 4389, Address: 0x361de0, Func Offset: 0x4f0
	// Line 4383, Address: 0x361e40, Func Offset: 0x550
	// Line 4390, Address: 0x361e48, Func Offset: 0x558
	// Func End, Address: 0x361e70, Func Offset: 0x580
}

// render_timer__Q213cruise_bubble12CruiseBubbleFff
// Start address: 0x361e70
void render_timer(float32 alpha, float32 glow)
{
	state_missle_fly* state;
	float32 life;
	int8 buffer[16];
	float32 dsize;
	xfont font;
	basic_rect bound;
	float32 x;
	float32 y;
	// Line 4309, Address: 0x361e70, Func Offset: 0
	// Line 4310, Address: 0x361e74, Func Offset: 0x4
	// Line 4309, Address: 0x361e78, Func Offset: 0x8
	// Line 4310, Address: 0x361e94, Func Offset: 0x24
	// Line 4311, Address: 0x361e9c, Func Offset: 0x2c
	// Line 4313, Address: 0x361eb4, Func Offset: 0x44
	// Line 4317, Address: 0x361eb8, Func Offset: 0x48
	// Line 4313, Address: 0x361ed0, Func Offset: 0x60
	// Line 4317, Address: 0x361ed8, Func Offset: 0x68
	// Line 4321, Address: 0x361efc, Func Offset: 0x8c
	// Line 4317, Address: 0x361f00, Func Offset: 0x90
	// Line 4321, Address: 0x361f04, Func Offset: 0x94
	// Line 4320, Address: 0x361f30, Func Offset: 0xc0
	// Line 4321, Address: 0x361f34, Func Offset: 0xc4
	// Line 4320, Address: 0x361f5c, Func Offset: 0xec
	// Line 4321, Address: 0x361f60, Func Offset: 0xf0
	// Line 4325, Address: 0x362098, Func Offset: 0x228
	// Line 4321, Address: 0x36209c, Func Offset: 0x22c
	// Line 4325, Address: 0x3620a8, Func Offset: 0x238
	// Line 4321, Address: 0x3620b4, Func Offset: 0x244
	// Line 4326, Address: 0x3620b8, Func Offset: 0x248
	// Line 4327, Address: 0x36247c, Func Offset: 0x60c
	// Line 4330, Address: 0x3624d8, Func Offset: 0x668
	// Line 4331, Address: 0x3624e8, Func Offset: 0x678
	// Line 4330, Address: 0x3624ec, Func Offset: 0x67c
	// Line 4331, Address: 0x3624f0, Func Offset: 0x680
	// Line 4330, Address: 0x3624f4, Func Offset: 0x684
	// Line 4336, Address: 0x3624f8, Func Offset: 0x688
	// Line 4331, Address: 0x362504, Func Offset: 0x694
	// Line 4336, Address: 0x362508, Func Offset: 0x698
	// Line 4330, Address: 0x36250c, Func Offset: 0x69c
	// Line 4332, Address: 0x362510, Func Offset: 0x6a0
	// Line 4330, Address: 0x362514, Func Offset: 0x6a4
	// Line 4331, Address: 0x36251c, Func Offset: 0x6ac
	// Line 4332, Address: 0x362528, Func Offset: 0x6b8
	// Line 4331, Address: 0x36252c, Func Offset: 0x6bc
	// Line 4332, Address: 0x362534, Func Offset: 0x6c4
	// Line 4330, Address: 0x362538, Func Offset: 0x6c8
	// Line 4336, Address: 0x362548, Func Offset: 0x6d8
	// Line 4337, Address: 0x362550, Func Offset: 0x6e0
	// Line 4339, Address: 0x362570, Func Offset: 0x700
	// Line 4342, Address: 0x362598, Func Offset: 0x728
	// Line 4343, Address: 0x3625a4, Func Offset: 0x734
	// Line 4342, Address: 0x3625ac, Func Offset: 0x73c
	// Line 4343, Address: 0x3625b8, Func Offset: 0x748
	// Func End, Address: 0x3625ec, Func Offset: 0x77c
}

// render_glow__Q213cruise_bubble12CruiseBubbleFP14xModelInstanceRC13basic_rect<f>ff
// Start address: 0x3625f0
void render_glow(xModelInstance* model, basic_rect& r, float32 glow, float32 alpha)
{
	float32 dsize;
	float32 dloc;
	float32 dalpha;
	basic_rect bound;
	int32 i;
	// Line 4208, Address: 0x3625f0, Func Offset: 0
	// Line 4209, Address: 0x3625f4, Func Offset: 0x4
	// Line 4208, Address: 0x3625f8, Func Offset: 0x8
	// Line 4209, Address: 0x3625fc, Func Offset: 0xc
	// Line 4208, Address: 0x362600, Func Offset: 0x10
	// Line 4212, Address: 0x362604, Func Offset: 0x14
	// Line 4208, Address: 0x362608, Func Offset: 0x18
	// Line 4212, Address: 0x36260c, Func Offset: 0x1c
	// Line 4208, Address: 0x362610, Func Offset: 0x20
	// Line 4209, Address: 0x362614, Func Offset: 0x24
	// Line 4208, Address: 0x362618, Func Offset: 0x28
	// Line 4215, Address: 0x36262c, Func Offset: 0x3c
	// Line 4208, Address: 0x362630, Func Offset: 0x40
	// Line 4216, Address: 0x36263c, Func Offset: 0x4c
	// Line 4208, Address: 0x362640, Func Offset: 0x50
	// Line 4216, Address: 0x362644, Func Offset: 0x54
	// Line 4208, Address: 0x362648, Func Offset: 0x58
	// Line 4216, Address: 0x36265c, Func Offset: 0x6c
	// Line 4208, Address: 0x362660, Func Offset: 0x70
	// Line 4216, Address: 0x362664, Func Offset: 0x74
	// Line 4208, Address: 0x362668, Func Offset: 0x78
	// Line 4216, Address: 0x36266c, Func Offset: 0x7c
	// Line 4208, Address: 0x362670, Func Offset: 0x80
	// Line 4216, Address: 0x362674, Func Offset: 0x84
	// Line 4208, Address: 0x362678, Func Offset: 0x88
	// Line 4209, Address: 0x362684, Func Offset: 0x94
	// Line 4211, Address: 0x362698, Func Offset: 0xa8
	// Line 4209, Address: 0x36269c, Func Offset: 0xac
	// Line 4210, Address: 0x3626b8, Func Offset: 0xc8
	// Line 4212, Address: 0x3626c0, Func Offset: 0xd0
	// Line 4215, Address: 0x3626c8, Func Offset: 0xd8
	// Line 4218, Address: 0x3626e4, Func Offset: 0xf4
	// Line 4222, Address: 0x362870, Func Offset: 0x280
	// Line 4220, Address: 0x362874, Func Offset: 0x284
	// Line 4222, Address: 0x362878, Func Offset: 0x288
	// Line 4220, Address: 0x36287c, Func Offset: 0x28c
	// Line 4219, Address: 0x362880, Func Offset: 0x290
	// Line 4220, Address: 0x362884, Func Offset: 0x294
	// Line 4221, Address: 0x36288c, Func Offset: 0x29c
	// Line 4220, Address: 0x362890, Func Offset: 0x2a0
	// Line 4221, Address: 0x362898, Func Offset: 0x2a8
	// Line 4222, Address: 0x3628a8, Func Offset: 0x2b8
	// Line 4223, Address: 0x3628b0, Func Offset: 0x2c0
	// Func End, Address: 0x362904, Func Offset: 0x314
}

// update_trail__Q213cruise_bubble12CruiseBubbleFf
// Start address: 0x362910
void update_trail(float32 dt)
{
	int32 samples;
	xMat4x3 end_mat;
	xQuat end_dir;
	float32 ds;
	float32 ddt;
	xVec3 dloc;
	xMat4x3 mat[2];
	int32 flip;
	float32 s;
	int32 i;
	xMat4x3& mat0;
	xMat4x3& mat1;
	xQuat subdir;
	// Line 3993, Address: 0x362910, Func Offset: 0
	// Line 3994, Address: 0x362914, Func Offset: 0x4
	// Line 3993, Address: 0x362918, Func Offset: 0x8
	// Line 3994, Address: 0x362954, Func Offset: 0x44
	// Line 3996, Address: 0x362964, Func Offset: 0x54
	// Line 3998, Address: 0x362988, Func Offset: 0x78
	// Line 4001, Address: 0x362994, Func Offset: 0x84
	// Line 4002, Address: 0x36299c, Func Offset: 0x8c
	// Line 4007, Address: 0x3629b8, Func Offset: 0xa8
	// Line 4010, Address: 0x3629d8, Func Offset: 0xc8
	// Line 4019, Address: 0x3629e4, Func Offset: 0xd4
	// Line 4010, Address: 0x3629e8, Func Offset: 0xd8
	// Line 4019, Address: 0x3629ec, Func Offset: 0xdc
	// Line 4012, Address: 0x3629fc, Func Offset: 0xec
	// Line 4019, Address: 0x362a00, Func Offset: 0xf0
	// Line 4012, Address: 0x362a04, Func Offset: 0xf4
	// Line 4019, Address: 0x362a0c, Func Offset: 0xfc
	// Line 4012, Address: 0x362a14, Func Offset: 0x104
	// Line 4010, Address: 0x362a18, Func Offset: 0x108
	// Line 4019, Address: 0x362a1c, Func Offset: 0x10c
	// Line 4012, Address: 0x362a2c, Func Offset: 0x11c
	// Line 4019, Address: 0x362a30, Func Offset: 0x120
	// Line 4011, Address: 0x362a4c, Func Offset: 0x13c
	// Line 4019, Address: 0x362a50, Func Offset: 0x140
	// Line 4020, Address: 0x362a5c, Func Offset: 0x14c
	// Line 4017, Address: 0x362a60, Func Offset: 0x150
	// Line 4020, Address: 0x362a64, Func Offset: 0x154
	// Line 4019, Address: 0x362a68, Func Offset: 0x158
	// Line 4012, Address: 0x362a70, Func Offset: 0x160
	// Line 4019, Address: 0x362a74, Func Offset: 0x164
	// Line 4012, Address: 0x362a78, Func Offset: 0x168
	// Line 4019, Address: 0x362a7c, Func Offset: 0x16c
	// Line 4012, Address: 0x362a88, Func Offset: 0x178
	// Line 4019, Address: 0x362a8c, Func Offset: 0x17c
	// Line 4012, Address: 0x362a90, Func Offset: 0x180
	// Line 4019, Address: 0x362a94, Func Offset: 0x184
	// Line 4012, Address: 0x362ac0, Func Offset: 0x1b0
	// Line 4019, Address: 0x362ac4, Func Offset: 0x1b4
	// Line 4012, Address: 0x362ad0, Func Offset: 0x1c0
	// Line 4019, Address: 0x362adc, Func Offset: 0x1cc
	// Line 4012, Address: 0x362ae4, Func Offset: 0x1d4
	// Line 4019, Address: 0x362b0c, Func Offset: 0x1fc
	// Line 4012, Address: 0x362b10, Func Offset: 0x200
	// Line 4019, Address: 0x362b14, Func Offset: 0x204
	// Line 4012, Address: 0x362b18, Func Offset: 0x208
	// Line 4011, Address: 0x362b30, Func Offset: 0x220
	// Line 4012, Address: 0x362b34, Func Offset: 0x224
	// Line 4019, Address: 0x362b50, Func Offset: 0x240
	// Line 4012, Address: 0x362b54, Func Offset: 0x244
	// Line 4018, Address: 0x362b58, Func Offset: 0x248
	// Line 4012, Address: 0x362b5c, Func Offset: 0x24c
	// Line 4020, Address: 0x362bb8, Func Offset: 0x2a8
	// Line 4036, Address: 0x362bc0, Func Offset: 0x2b0
	// Line 4037, Address: 0x362c7c, Func Offset: 0x36c
	// Line 4036, Address: 0x362c88, Func Offset: 0x378
	// Line 4037, Address: 0x362c8c, Func Offset: 0x37c
	// Line 4036, Address: 0x362c90, Func Offset: 0x380
	// Line 4039, Address: 0x362c94, Func Offset: 0x384
	// Line 4037, Address: 0x362c98, Func Offset: 0x388
	// Line 4039, Address: 0x362ca4, Func Offset: 0x394
	// Line 4036, Address: 0x362ca8, Func Offset: 0x398
	// Line 4037, Address: 0x362cac, Func Offset: 0x39c
	// Line 4039, Address: 0x362cb8, Func Offset: 0x3a8
	// Line 4036, Address: 0x362cbc, Func Offset: 0x3ac
	// Line 4037, Address: 0x362cc0, Func Offset: 0x3b0
	// Line 4039, Address: 0x362cc4, Func Offset: 0x3b4
	// Line 4037, Address: 0x362cc8, Func Offset: 0x3b8
	// Line 4039, Address: 0x362ccc, Func Offset: 0x3bc
	// Line 4040, Address: 0x362cd0, Func Offset: 0x3c0
	// Line 4001, Address: 0x362cdc, Func Offset: 0x3cc
	// Line 4040, Address: 0x362ce8, Func Offset: 0x3d8
	// Line 4023, Address: 0x362cf4, Func Offset: 0x3e4
	// Line 4040, Address: 0x362cf8, Func Offset: 0x3e8
	// Line 4023, Address: 0x362cfc, Func Offset: 0x3ec
	// Line 4024, Address: 0x362d00, Func Offset: 0x3f0
	// Line 4040, Address: 0x362d04, Func Offset: 0x3f4
	// Line 4025, Address: 0x362d0c, Func Offset: 0x3fc
	// Line 4040, Address: 0x362d10, Func Offset: 0x400
	// Line 4025, Address: 0x362d14, Func Offset: 0x404
	// Line 4040, Address: 0x362d18, Func Offset: 0x408
	// Line 4031, Address: 0x362d38, Func Offset: 0x428
	// Line 4040, Address: 0x362d3c, Func Offset: 0x42c
	// Line 4031, Address: 0x362d40, Func Offset: 0x430
	// Line 4040, Address: 0x362d44, Func Offset: 0x434
	// Line 4033, Address: 0x362d48, Func Offset: 0x438
	// Line 4040, Address: 0x362d4c, Func Offset: 0x43c
	// Line 4033, Address: 0x362d50, Func Offset: 0x440
	// Line 4040, Address: 0x362d58, Func Offset: 0x448
	// Line 4031, Address: 0x362d64, Func Offset: 0x454
	// Line 4040, Address: 0x362d68, Func Offset: 0x458
	// Line 4031, Address: 0x362d6c, Func Offset: 0x45c
	// Line 4040, Address: 0x362d70, Func Offset: 0x460
	// Line 4031, Address: 0x362d7c, Func Offset: 0x46c
	// Line 4040, Address: 0x362d80, Func Offset: 0x470
	// Func End, Address: 0x362e04, Func Offset: 0x4f4
}

// add_trail_sample__Q213cruise_bubble12CruiseBubbleFRC5xVec3RC5xVec3RC5xVec3RC5xVec3f
// Start address: 0x362e10
void add_trail_sample(xVec3& loc0, xVec3& dir0, xVec3& loc1, xVec3& dir1, float32 dt)
{
	uint32 bubbles;
	xVec3 emit_range;
	xVec3 offset0;
	xVec3 offset1;
	xVec3 prop_loc0[2];
	xVec3 prop_loc1[2];
	xVec3 offset;
	// Line 3962, Address: 0x362e10, Func Offset: 0
	// Line 3963, Address: 0x362e14, Func Offset: 0x4
	// Line 3962, Address: 0x362e18, Func Offset: 0x8
	// Line 3963, Address: 0x362e1c, Func Offset: 0xc
	// Line 3962, Address: 0x362e20, Func Offset: 0x10
	// Line 3963, Address: 0x362e24, Func Offset: 0x14
	// Line 3962, Address: 0x362e28, Func Offset: 0x18
	// Line 3963, Address: 0x362e50, Func Offset: 0x40
	// Line 3964, Address: 0x362e5c, Func Offset: 0x4c
	// Line 3963, Address: 0x362e60, Func Offset: 0x50
	// Line 3964, Address: 0x362e64, Func Offset: 0x54
	// Line 3963, Address: 0x362e68, Func Offset: 0x58
	// Line 3964, Address: 0x362e6c, Func Offset: 0x5c
	// Line 3967, Address: 0x362ea0, Func Offset: 0x90
	// Line 3984, Address: 0x362ea8, Func Offset: 0x98
	// Line 3982, Address: 0x362eb4, Func Offset: 0xa4
	// Line 3985, Address: 0x362ebc, Func Offset: 0xac
	// Line 3984, Address: 0x362ec0, Func Offset: 0xb0
	// Line 3985, Address: 0x362ed4, Func Offset: 0xc4
	// Line 3984, Address: 0x362ed8, Func Offset: 0xc8
	// Line 3985, Address: 0x362edc, Func Offset: 0xcc
	// Line 3984, Address: 0x362ee0, Func Offset: 0xd0
	// Line 3985, Address: 0x362ee4, Func Offset: 0xd4
	// Line 3984, Address: 0x362ee8, Func Offset: 0xd8
	// Line 3982, Address: 0x362eec, Func Offset: 0xdc
	// Line 3984, Address: 0x362ef0, Func Offset: 0xe0
	// Line 3982, Address: 0x362ef4, Func Offset: 0xe4
	// Line 3984, Address: 0x362ef8, Func Offset: 0xe8
	// Line 3985, Address: 0x362efc, Func Offset: 0xec
	// Line 3984, Address: 0x362f10, Func Offset: 0x100
	// Line 3985, Address: 0x362f14, Func Offset: 0x104
	// Line 3984, Address: 0x362f20, Func Offset: 0x110
	// Line 3985, Address: 0x362f3c, Func Offset: 0x12c
	// Line 3984, Address: 0x362f40, Func Offset: 0x130
	// Line 3985, Address: 0x362f4c, Func Offset: 0x13c
	// Line 3984, Address: 0x362f50, Func Offset: 0x140
	// Line 3985, Address: 0x362f54, Func Offset: 0x144
	// Line 3984, Address: 0x362f58, Func Offset: 0x148
	// Line 3985, Address: 0x362f5c, Func Offset: 0x14c
	// Line 3984, Address: 0x362f64, Func Offset: 0x154
	// Line 3985, Address: 0x362f6c, Func Offset: 0x15c
	// Line 3984, Address: 0x362f74, Func Offset: 0x164
	// Line 3985, Address: 0x362f78, Func Offset: 0x168
	// Line 3986, Address: 0x362fbc, Func Offset: 0x1ac
	// Line 3988, Address: 0x3630c0, Func Offset: 0x2b0
	// Line 3969, Address: 0x3630d0, Func Offset: 0x2c0
	// Line 3988, Address: 0x3630fc, Func Offset: 0x2ec
	// Line 3970, Address: 0x363104, Func Offset: 0x2f4
	// Line 3988, Address: 0x363108, Func Offset: 0x2f8
	// Line 3970, Address: 0x363114, Func Offset: 0x304
	// Line 3988, Address: 0x36311c, Func Offset: 0x30c
	// Line 3971, Address: 0x36312c, Func Offset: 0x31c
	// Line 3988, Address: 0x363138, Func Offset: 0x328
	// Line 3973, Address: 0x3631a0, Func Offset: 0x390
	// Line 3975, Address: 0x3631a4, Func Offset: 0x394
	// Line 3973, Address: 0x3631a8, Func Offset: 0x398
	// Line 3988, Address: 0x3631ac, Func Offset: 0x39c
	// Line 3973, Address: 0x3631b4, Func Offset: 0x3a4
	// Line 3988, Address: 0x3631b8, Func Offset: 0x3a8
	// Line 3974, Address: 0x3631d0, Func Offset: 0x3c0
	// Line 3988, Address: 0x3631d4, Func Offset: 0x3c4
	// Line 3974, Address: 0x3631dc, Func Offset: 0x3cc
	// Line 3988, Address: 0x3631e0, Func Offset: 0x3d0
	// Line 3974, Address: 0x363208, Func Offset: 0x3f8
	// Line 3988, Address: 0x36320c, Func Offset: 0x3fc
	// Line 3975, Address: 0x363234, Func Offset: 0x424
	// Line 3988, Address: 0x36323c, Func Offset: 0x42c
	// Line 3975, Address: 0x363284, Func Offset: 0x474
	// Line 3988, Address: 0x363288, Func Offset: 0x478
	// Line 3976, Address: 0x36328c, Func Offset: 0x47c
	// Line 3975, Address: 0x363290, Func Offset: 0x480
	// Line 3988, Address: 0x363294, Func Offset: 0x484
	// Line 3975, Address: 0x3632dc, Func Offset: 0x4cc
	// Line 3988, Address: 0x3632e8, Func Offset: 0x4d8
	// Line 3975, Address: 0x3632f8, Func Offset: 0x4e8
	// Line 3988, Address: 0x3632fc, Func Offset: 0x4ec
	// Line 3976, Address: 0x36334c, Func Offset: 0x53c
	// Line 3988, Address: 0x363354, Func Offset: 0x544
	// Line 3976, Address: 0x36339c, Func Offset: 0x58c
	// Line 3988, Address: 0x3633a0, Func Offset: 0x590
	// Line 3977, Address: 0x3633a8, Func Offset: 0x598
	// Line 3988, Address: 0x3633ac, Func Offset: 0x59c
	// Line 3977, Address: 0x3633b0, Func Offset: 0x5a0
	// Line 3976, Address: 0x3633b4, Func Offset: 0x5a4
	// Line 3988, Address: 0x3633b8, Func Offset: 0x5a8
	// Line 3976, Address: 0x363400, Func Offset: 0x5f0
	// Line 3988, Address: 0x36340c, Func Offset: 0x5fc
	// Line 3976, Address: 0x36341c, Func Offset: 0x60c
	// Line 3988, Address: 0x363420, Func Offset: 0x610
	// Line 3978, Address: 0x36346c, Func Offset: 0x65c
	// Line 3988, Address: 0x363470, Func Offset: 0x660
	// Func End, Address: 0x3634b0, Func Offset: 0x6a0
}

// reset_wake_ribbons__Q213cruise_bubble12CruiseBubbleFv
// Start address: 0x3634b0
void reset_wake_ribbons()
{
	int8* nam_wakeRibbonTexture;
	config_type_1 ribcfg;
	// Line 3867, Address: 0x3634b0, Func Offset: 0
	// Line 3872, Address: 0x3634b4, Func Offset: 0x4
	// Line 3867, Address: 0x3634b8, Func Offset: 0x8
	// Line 3872, Address: 0x3634bc, Func Offset: 0xc
	// Line 3877, Address: 0x3634c4, Func Offset: 0x14
	// Line 3875, Address: 0x3634d0, Func Offset: 0x20
	// Line 3878, Address: 0x3634d4, Func Offset: 0x24
	// Line 3875, Address: 0x3634dc, Func Offset: 0x2c
	// Line 3879, Address: 0x3634e0, Func Offset: 0x30
	// Line 3881, Address: 0x3634ec, Func Offset: 0x3c
	// Line 3879, Address: 0x3634f0, Func Offset: 0x40
	// Line 3881, Address: 0x3634f4, Func Offset: 0x44
	// Line 3882, Address: 0x3634f8, Func Offset: 0x48
	// Line 3881, Address: 0x3634fc, Func Offset: 0x4c
	// Line 3884, Address: 0x363500, Func Offset: 0x50
	// Line 3882, Address: 0x363504, Func Offset: 0x54
	// Line 3884, Address: 0x363508, Func Offset: 0x58
	// Line 3886, Address: 0x363518, Func Offset: 0x68
	// Line 3887, Address: 0x363528, Func Offset: 0x78
	// Line 3888, Address: 0x363530, Func Offset: 0x80
	// Line 3891, Address: 0x363538, Func Offset: 0x88
	// Line 3892, Address: 0x363548, Func Offset: 0x98
	// Line 3895, Address: 0x363554, Func Offset: 0xa4
	// Line 3896, Address: 0x363568, Func Offset: 0xb8
	// Line 3898, Address: 0x36357c, Func Offset: 0xcc
	// Func End, Address: 0x363588, Func Offset: 0xd8
}

// init_states__Q213cruise_bubble12CruiseBubbleFv
// Start address: 0x363590
void init_states()
{
	int8 @12529;
	state_camera_restore camera_return;
	int8 @12526;
	state_camera_survey camera_survey;
	int8 @12523;
	state_camera_attach camera_attach;
	int8 @12520;
	state_camera_seize camera_seize;
	int8 @12517;
	state_camera_aim camera_aim;
	int8 @12514;
	state_missle_explode missle_explode;
	int8 @12511;
	state_missle_fly missle_fly;
	int8 @12508;
	state_missle_appear missle_appear;
	int8 @12505;
	state_player_wait player_wait;
	int8 @12502;
	state_player_fire player_fire;
	int8 @12499;
	state_player_aim player_aim;
	int8 @12496;
	state_player_halt player_halt;
	// Line 3810, Address: 0x363590, Func Offset: 0
	// Line 3811, Address: 0x36359c, Func Offset: 0xc
	// Line 3812, Address: 0x3635ac, Func Offset: 0x1c
	// Line 3813, Address: 0x3635b8, Func Offset: 0x28
	// Line 3814, Address: 0x3635c8, Func Offset: 0x38
	// Line 3815, Address: 0x3635d4, Func Offset: 0x44
	// Line 3816, Address: 0x3635e4, Func Offset: 0x54
	// Line 3817, Address: 0x3635f0, Func Offset: 0x60
	// Line 3820, Address: 0x3635fc, Func Offset: 0x6c
	// Line 3821, Address: 0x363608, Func Offset: 0x78
	// Line 3822, Address: 0x363614, Func Offset: 0x84
	// Line 3823, Address: 0x363620, Func Offset: 0x90
	// Line 3824, Address: 0x363630, Func Offset: 0xa0
	// Line 3825, Address: 0x36363c, Func Offset: 0xac
	// Line 3828, Address: 0x36364c, Func Offset: 0xbc
	// Line 3829, Address: 0x363658, Func Offset: 0xc8
	// Line 3830, Address: 0x363668, Func Offset: 0xd8
	// Line 3831, Address: 0x363674, Func Offset: 0xe4
	// Line 3832, Address: 0x363684, Func Offset: 0xf4
	// Line 3833, Address: 0x363690, Func Offset: 0x100
	// Line 3834, Address: 0x3636a0, Func Offset: 0x110
	// Line 3835, Address: 0x3636ac, Func Offset: 0x11c
	// Line 3836, Address: 0x3636bc, Func Offset: 0x12c
	// Line 3837, Address: 0x3636c8, Func Offset: 0x138
	// Line 3838, Address: 0x3636d4, Func Offset: 0x144
	// Line 3810, Address: 0x3636f0, Func Offset: 0x160
	// Line 3838, Address: 0x3636fc, Func Offset: 0x16c
	// Line 3814, Address: 0x363728, Func Offset: 0x198
	// Line 3838, Address: 0x36372c, Func Offset: 0x19c
	// Line 3816, Address: 0x36374c, Func Offset: 0x1bc
	// Line 3838, Address: 0x363750, Func Offset: 0x1c0
	// Line 3820, Address: 0x363768, Func Offset: 0x1d8
	// Line 3838, Address: 0x36376c, Func Offset: 0x1dc
	// Line 3822, Address: 0x363784, Func Offset: 0x1f4
	// Line 3838, Address: 0x363788, Func Offset: 0x1f8
	// Line 3824, Address: 0x3637a8, Func Offset: 0x218
	// Line 3838, Address: 0x3637ac, Func Offset: 0x21c
	// Line 3828, Address: 0x3637cc, Func Offset: 0x23c
	// Line 3838, Address: 0x3637d0, Func Offset: 0x240
	// Line 3830, Address: 0x3637f0, Func Offset: 0x260
	// Line 3838, Address: 0x3637f4, Func Offset: 0x264
	// Line 3832, Address: 0x363814, Func Offset: 0x284
	// Line 3838, Address: 0x363818, Func Offset: 0x288
	// Line 3834, Address: 0x363838, Func Offset: 0x2a8
	// Line 3838, Address: 0x36383c, Func Offset: 0x2ac
	// Line 3836, Address: 0x36385c, Func Offset: 0x2cc
	// Line 3838, Address: 0x363860, Func Offset: 0x2d0
	// Func End, Address: 0x36387c, Func Offset: 0x2ec
}

// custom_bubble_render__Q213cruise_bubble12CruiseBubbleFP8RpAtomic
// Start address: 0x363880
RpAtomic* custom_bubble_render(RpAtomic* atomic)
{
	float32 fade;
	RwCullMode old_cull_mode;
	float32 fresnel_coeff;
	float32 env_coeff;
	// Line 3758, Address: 0x363880, Func Offset: 0
	// Line 3759, Address: 0x363884, Func Offset: 0x4
	// Line 3758, Address: 0x363888, Func Offset: 0x8
	// Line 3762, Address: 0x36388c, Func Offset: 0xc
	// Line 3758, Address: 0x363890, Func Offset: 0x10
	// Line 3759, Address: 0x3638a4, Func Offset: 0x24
	// Line 3762, Address: 0x3638a8, Func Offset: 0x28
	// Line 3759, Address: 0x3638b0, Func Offset: 0x30
	// Line 3762, Address: 0x3638b4, Func Offset: 0x34
	// Line 3763, Address: 0x3638c0, Func Offset: 0x40
	// Line 3762, Address: 0x3638c4, Func Offset: 0x44
	// Line 3763, Address: 0x3638c8, Func Offset: 0x48
	// Line 3766, Address: 0x3638d4, Func Offset: 0x54
	// Line 3770, Address: 0x3638e8, Func Offset: 0x68
	// Line 3772, Address: 0x3638f0, Func Offset: 0x70
	// Line 3773, Address: 0x3638fc, Func Offset: 0x7c
	// Line 3774, Address: 0x363908, Func Offset: 0x88
	// Line 3777, Address: 0x363920, Func Offset: 0xa0
	// Line 3789, Address: 0x363930, Func Offset: 0xb0
	// Line 3801, Address: 0x36393c, Func Offset: 0xbc
	// Line 3803, Address: 0x36394c, Func Offset: 0xcc
	// Line 3781, Address: 0x363958, Func Offset: 0xd8
	// Line 3803, Address: 0x363960, Func Offset: 0xe0
	// Line 3781, Address: 0x363964, Func Offset: 0xe4
	// Line 3803, Address: 0x3639c0, Func Offset: 0x140
	// Line 3782, Address: 0x3639c8, Func Offset: 0x148
	// Line 3783, Address: 0x3639cc, Func Offset: 0x14c
	// Line 3803, Address: 0x3639d0, Func Offset: 0x150
	// Line 3785, Address: 0x3639e8, Func Offset: 0x168
	// Line 3803, Address: 0x3639ec, Func Offset: 0x16c
	// Line 3793, Address: 0x363a00, Func Offset: 0x180
	// Line 3803, Address: 0x363a08, Func Offset: 0x188
	// Line 3793, Address: 0x363a0c, Func Offset: 0x18c
	// Line 3803, Address: 0x363a68, Func Offset: 0x1e8
	// Line 3795, Address: 0x363a78, Func Offset: 0x1f8
	// Line 3796, Address: 0x363a7c, Func Offset: 0x1fc
	// Line 3803, Address: 0x363a80, Func Offset: 0x200
	// Line 3798, Address: 0x363a98, Func Offset: 0x218
	// Line 3803, Address: 0x363a9c, Func Offset: 0x21c
	// Line 3804, Address: 0x363aac, Func Offset: 0x22c
	// Func End, Address: 0x363ac8, Func Offset: 0x248
}

// update_state__Q213cruise_bubble12CruiseBubbleFP6xScenef
// Start address: 0x363ad0
void update_state(float32 dt)
{
	int32 i;
	state_type_2&* state;
	state_enum_0 newtype;
	// Line 3724, Address: 0x363ad0, Func Offset: 0
	// Line 3729, Address: 0x363ae4, Func Offset: 0x14
	// Line 3724, Address: 0x363ae8, Func Offset: 0x18
	// Line 3729, Address: 0x363aec, Func Offset: 0x1c
	// Line 3724, Address: 0x363af0, Func Offset: 0x20
	// Line 3729, Address: 0x363af4, Func Offset: 0x24
	// Line 3731, Address: 0x363afc, Func Offset: 0x2c
	// Line 3732, Address: 0x363b00, Func Offset: 0x30
	// Line 3733, Address: 0x363b08, Func Offset: 0x38
	// Line 3734, Address: 0x363b20, Func Offset: 0x50
	// Line 3735, Address: 0x363b2c, Func Offset: 0x5c
	// Line 3737, Address: 0x363b3c, Func Offset: 0x6c
	// Line 3738, Address: 0x363b48, Func Offset: 0x78
	// Line 3739, Address: 0x363b60, Func Offset: 0x90
	// Line 3740, Address: 0x363b74, Func Offset: 0xa4
	// Line 3742, Address: 0x363b88, Func Offset: 0xb8
	// Line 3744, Address: 0x363b98, Func Offset: 0xc8
	// Func End, Address: 0x363bcc, Func Offset: 0xfc
}

// kill__Q213cruise_bubble12CruiseBubbleFbb
// Start address: 0x363bd0
void kill(uint8 reset_camera, uint8 abortive)
{
	int32 i;
	int32 i;
	xAnimPlay* aplay;
	xAnimState* astate;
	xCam* defaultCam;
	// Line 3602, Address: 0x363bd0, Func Offset: 0
	// Line 3603, Address: 0x363be8, Func Offset: 0x18
	// Line 3605, Address: 0x363bf0, Func Offset: 0x20
	// Line 3607, Address: 0x363c00, Func Offset: 0x30
	// Line 3609, Address: 0x363c08, Func Offset: 0x38
	// Line 3610, Address: 0x363c18, Func Offset: 0x48
	// Line 3612, Address: 0x363c1c, Func Offset: 0x4c
	// Line 3613, Address: 0x363c30, Func Offset: 0x60
	// Line 3616, Address: 0x363c38, Func Offset: 0x68
	// Line 3617, Address: 0x363c44, Func Offset: 0x74
	// Line 3620, Address: 0x363c78, Func Offset: 0xa8
	// Line 3619, Address: 0x363c7c, Func Offset: 0xac
	// Line 3620, Address: 0x363c88, Func Offset: 0xb8
	// Line 3622, Address: 0x363c90, Func Offset: 0xc0
	// Line 3623, Address: 0x363c98, Func Offset: 0xc8
	// Line 3625, Address: 0x363ca4, Func Offset: 0xd4
	// Line 3631, Address: 0x363cac, Func Offset: 0xdc
	// Line 3632, Address: 0x363cf8, Func Offset: 0x128
	// Line 3633, Address: 0x363cfc, Func Offset: 0x12c
	// Line 3632, Address: 0x363d00, Func Offset: 0x130
	// Line 3633, Address: 0x363d08, Func Offset: 0x138
	// Line 3632, Address: 0x363d0c, Func Offset: 0x13c
	// Line 3633, Address: 0x363d14, Func Offset: 0x144
	// Line 3634, Address: 0x363d24, Func Offset: 0x154
	// Line 3636, Address: 0x363d30, Func Offset: 0x160
	// Line 3634, Address: 0x363d34, Func Offset: 0x164
	// Line 3636, Address: 0x363d3c, Func Offset: 0x16c
	// Line 3639, Address: 0x363d44, Func Offset: 0x174
	// Line 3642, Address: 0x363d48, Func Offset: 0x178
	// Line 3639, Address: 0x363d50, Func Offset: 0x180
	// Line 3641, Address: 0x363d5c, Func Offset: 0x18c
	// Line 3642, Address: 0x363d64, Func Offset: 0x194
	// Line 3648, Address: 0x363d9c, Func Offset: 0x1cc
	// Line 3653, Address: 0x363da8, Func Offset: 0x1d8
	// Line 3654, Address: 0x363db0, Func Offset: 0x1e0
	// Line 3658, Address: 0x363dc0, Func Offset: 0x1f0
	// Line 3665, Address: 0x363dcc, Func Offset: 0x1fc
	// Line 3668, Address: 0x363dd4, Func Offset: 0x204
	// Line 3671, Address: 0x363df0, Func Offset: 0x220
	// Line 3674, Address: 0x363df4, Func Offset: 0x224
	// Line 3676, Address: 0x363e08, Func Offset: 0x238
	// Func End, Address: 0x363e74, Func Offset: 0x2a4
}

// abort__Q313cruise_bubble12CruiseBubble10state_typeFv
// Start address: 0x363e80
void abort()
{
	// Line 749, Address: 0x363e80, Func Offset: 0
	// Func End, Address: 0x363e88, Func Offset: 0x8
}

// exit_triggers__Q213cruise_bubble12CruiseBubbleFR6xScene
// Start address: 0x363e90
void exit_triggers(xScene& s)
{
	zEntTrigger** it;
	zEntTrigger** end;
	zEntTrigger& trig;
	xLinkAsset* link;
	xLinkAsset* end_link;
	// Line 1318, Address: 0x363e90, Func Offset: 0
	// Line 1319, Address: 0x363ea0, Func Offset: 0x10
	// Line 1320, Address: 0x363eb0, Func Offset: 0x20
	// Line 1322, Address: 0x363eb8, Func Offset: 0x28
	// Line 1323, Address: 0x363ebc, Func Offset: 0x2c
	// Line 1325, Address: 0x363ecc, Func Offset: 0x3c
	// Line 1327, Address: 0x363edc, Func Offset: 0x4c
	// Line 1330, Address: 0x363ee4, Func Offset: 0x54
	// Line 1331, Address: 0x363ef4, Func Offset: 0x64
	// Line 1333, Address: 0x363f00, Func Offset: 0x70
	// Line 1335, Address: 0x363f0c, Func Offset: 0x7c
	// Line 1336, Address: 0x363f28, Func Offset: 0x98
	// Line 1338, Address: 0x363f30, Func Offset: 0xa0
	// Line 1339, Address: 0x363f3c, Func Offset: 0xac
	// Line 1340, Address: 0x363f50, Func Offset: 0xc0
	// Func End, Address: 0x363f64, Func Offset: 0xd4
}

// notify_triggers__Q213cruise_bubble12CruiseBubbleFR6xSceneRC7xSphereRC5xVec3
// Start address: 0x363f70
void notify_triggers(xScene& s, xSphere& o, xVec3& dir)
{
	zEntTrigger** it;
	zEntTrigger** end;
	zEntTrigger& trig;
	uint8 want_enter;
	uint8 want_exit;
	xLinkAsset* link;
	xLinkAsset* end_link;
	// Line 1276, Address: 0x363f70, Func Offset: 0
	// Line 1277, Address: 0x363fa4, Func Offset: 0x34
	// Line 1278, Address: 0x363fb4, Func Offset: 0x44
	// Line 1280, Address: 0x363fc4, Func Offset: 0x54
	// Line 1281, Address: 0x363fd0, Func Offset: 0x60
	// Line 1287, Address: 0x363fd8, Func Offset: 0x68
	// Line 1286, Address: 0x363fdc, Func Offset: 0x6c
	// Line 1287, Address: 0x363fe0, Func Offset: 0x70
	// Line 1288, Address: 0x363fec, Func Offset: 0x7c
	// Line 1293, Address: 0x363ff4, Func Offset: 0x84
	// Line 1292, Address: 0x363ff8, Func Offset: 0x88
	// Line 1290, Address: 0x363ffc, Func Offset: 0x8c
	// Line 1288, Address: 0x364000, Func Offset: 0x90
	// Line 1290, Address: 0x364004, Func Offset: 0x94
	// Line 1292, Address: 0x36400c, Func Offset: 0x9c
	// Line 1293, Address: 0x364014, Func Offset: 0xa4
	// Line 1294, Address: 0x364018, Func Offset: 0xa8
	// Line 1297, Address: 0x364030, Func Offset: 0xc0
	// Line 1298, Address: 0x364050, Func Offset: 0xe0
	// Line 1299, Address: 0x364070, Func Offset: 0x100
	// Line 1302, Address: 0x364080, Func Offset: 0x110
	// Line 1303, Address: 0x3640e8, Func Offset: 0x178
	// Line 1304, Address: 0x3640f0, Func Offset: 0x180
	// Line 1306, Address: 0x364100, Func Offset: 0x190
	// Line 1309, Address: 0x364110, Func Offset: 0x1a0
	// Line 1310, Address: 0x364120, Func Offset: 0x1b0
	// Line 1311, Address: 0x364148, Func Offset: 0x1d8
	// Line 1312, Address: 0x364158, Func Offset: 0x1e8
	// Line 1313, Address: 0x364178, Func Offset: 0x208
	// Line 1314, Address: 0x364188, Func Offset: 0x218
	// Line 1291, Address: 0x364190, Func Offset: 0x220
	// Line 1314, Address: 0x364198, Func Offset: 0x228
	// Line 1302, Address: 0x3641ac, Func Offset: 0x23c
	// Line 1314, Address: 0x3641b0, Func Offset: 0x240
	// Line 1302, Address: 0x3641d0, Func Offset: 0x260
	// Line 1314, Address: 0x3641d8, Func Offset: 0x268
	// Line 1302, Address: 0x3641e8, Func Offset: 0x278
	// Line 1314, Address: 0x3641ec, Func Offset: 0x27c
	// Line 1302, Address: 0x3641fc, Func Offset: 0x28c
	// Line 1314, Address: 0x364200, Func Offset: 0x290
	// Line 1302, Address: 0x364208, Func Offset: 0x298
	// Line 1314, Address: 0x36420c, Func Offset: 0x29c
	// Line 1302, Address: 0x364218, Func Offset: 0x2a8
	// Line 1314, Address: 0x36421c, Func Offset: 0x2ac
	// Line 1302, Address: 0x364224, Func Offset: 0x2b4
	// Line 1314, Address: 0x364228, Func Offset: 0x2b8
	// Line 1302, Address: 0x364234, Func Offset: 0x2c4
	// Line 1314, Address: 0x364240, Func Offset: 0x2d0
	// Line 1302, Address: 0x364260, Func Offset: 0x2f0
	// Line 1314, Address: 0x364264, Func Offset: 0x2f4
	// Line 1302, Address: 0x364270, Func Offset: 0x300
	// Line 1314, Address: 0x364274, Func Offset: 0x304
	// Line 1302, Address: 0x36429c, Func Offset: 0x32c
	// Line 1314, Address: 0x3642a0, Func Offset: 0x330
	// Line 1302, Address: 0x3642b4, Func Offset: 0x344
	// Line 1314, Address: 0x3642b8, Func Offset: 0x348
	// Line 1302, Address: 0x3642c4, Func Offset: 0x354
	// Line 1314, Address: 0x3642c8, Func Offset: 0x358
	// Line 1302, Address: 0x3642cc, Func Offset: 0x35c
	// Line 1314, Address: 0x3642f0, Func Offset: 0x380
	// Line 1302, Address: 0x364304, Func Offset: 0x394
	// Line 1314, Address: 0x364310, Func Offset: 0x3a0
	// Line 1302, Address: 0x364320, Func Offset: 0x3b0
	// Line 1314, Address: 0x364330, Func Offset: 0x3c0
	// Func End, Address: 0x364364, Func Offset: 0x3f4
}

// damage_entity__Q213cruise_bubble12CruiseBubbleFR4xEntRC5xVec3RC5xVec3RC5xVec3fb
// Start address: 0x364370
void damage_entity(xEnt& ent, xVec3& loc, xVec3& dir, xVec3& hit_norm, float32 radius, uint8 explosive)
{
	xCollis coll;
	xSphere o;
	xVec3 hit_dir;
	xVec3 edir;
	// Line 1183, Address: 0x364370, Func Offset: 0
	// Line 1185, Address: 0x364390, Func Offset: 0x20
	// Line 1186, Address: 0x36439c, Func Offset: 0x2c
	// Line 1187, Address: 0x3643b0, Func Offset: 0x40
	// Line 1189, Address: 0x3643c0, Func Offset: 0x50
	// Line 1187, Address: 0x3643c4, Func Offset: 0x54
	// Line 1189, Address: 0x3643c8, Func Offset: 0x58
	// Line 1192, Address: 0x3643f4, Func Offset: 0x84
	// Line 1193, Address: 0x3644c8, Func Offset: 0x158
	// Line 1198, Address: 0x3644d0, Func Offset: 0x160
	// Line 1201, Address: 0x3644e8, Func Offset: 0x178
	// Line 1204, Address: 0x3644fc, Func Offset: 0x18c
	// Line 1205, Address: 0x364504, Func Offset: 0x194
	// Line 1206, Address: 0x36451c, Func Offset: 0x1ac
	// Line 1211, Address: 0x364524, Func Offset: 0x1b4
	// Line 1209, Address: 0x364528, Func Offset: 0x1b8
	// Line 1211, Address: 0x36452c, Func Offset: 0x1bc
	// Line 1209, Address: 0x364530, Func Offset: 0x1c0
	// Line 1211, Address: 0x364534, Func Offset: 0x1c4
	// Line 1212, Address: 0x36453c, Func Offset: 0x1cc
	// Line 1213, Address: 0x364540, Func Offset: 0x1d0
	// Line 1211, Address: 0x364548, Func Offset: 0x1d8
	// Line 1213, Address: 0x364550, Func Offset: 0x1e0
	// Line 1214, Address: 0x364558, Func Offset: 0x1e8
	// Line 1215, Address: 0x364568, Func Offset: 0x1f8
	// Line 1220, Address: 0x364578, Func Offset: 0x208
	// Line 1221, Address: 0x364600, Func Offset: 0x290
	// Line 1220, Address: 0x364604, Func Offset: 0x294
	// Line 1221, Address: 0x364608, Func Offset: 0x298
	// Line 1220, Address: 0x364610, Func Offset: 0x2a0
	// Line 1221, Address: 0x364630, Func Offset: 0x2c0
	// Line 1230, Address: 0x364638, Func Offset: 0x2c8
	// Line 1234, Address: 0x364640, Func Offset: 0x2d0
	// Line 1236, Address: 0x364648, Func Offset: 0x2d8
	// Line 1237, Address: 0x364734, Func Offset: 0x3c4
	// Line 1236, Address: 0x364738, Func Offset: 0x3c8
	// Line 1237, Address: 0x364740, Func Offset: 0x3d0
	// Line 1236, Address: 0x364750, Func Offset: 0x3e0
	// Line 1237, Address: 0x364774, Func Offset: 0x404
	// Line 1241, Address: 0x364784, Func Offset: 0x414
	// Line 1246, Address: 0x36478c, Func Offset: 0x41c
	// Line 1247, Address: 0x3647d0, Func Offset: 0x460
	// Line 1218, Address: 0x3647ec, Func Offset: 0x47c
	// Line 1247, Address: 0x3647f0, Func Offset: 0x480
	// Line 1218, Address: 0x3647f8, Func Offset: 0x488
	// Line 1247, Address: 0x364800, Func Offset: 0x490
	// Line 1220, Address: 0x364820, Func Offset: 0x4b0
	// Line 1247, Address: 0x364828, Func Offset: 0x4b8
	// Line 1225, Address: 0x36482c, Func Offset: 0x4bc
	// Line 1247, Address: 0x364830, Func Offset: 0x4c0
	// Line 1227, Address: 0x364834, Func Offset: 0x4c4
	// Line 1247, Address: 0x364838, Func Offset: 0x4c8
	// Line 1236, Address: 0x364880, Func Offset: 0x510
	// Line 1247, Address: 0x364888, Func Offset: 0x518
	// Line 1240, Address: 0x36488c, Func Offset: 0x51c
	// Line 1247, Address: 0x364890, Func Offset: 0x520
	// Line 1240, Address: 0x364894, Func Offset: 0x524
	// Line 1247, Address: 0x364898, Func Offset: 0x528
	// Line 1240, Address: 0x36489c, Func Offset: 0x52c
	// Line 1247, Address: 0x3648a0, Func Offset: 0x530
	// Func End, Address: 0x3648cc, Func Offset: 0x55c
}

// start__Q313cruise_bubble12CruiseBubble20state_camera_restoreFv
// Start address: 0x367740
void state_camera_restore::start()
{
	xCam* defaultCam;
	xVec3 loc;
	// Line 3529, Address: 0x367740, Func Offset: 0
	// Line 3533, Address: 0x36774c, Func Offset: 0xc
	// Line 3534, Address: 0x367754, Func Offset: 0x14
	// Line 3538, Address: 0x367764, Func Offset: 0x24
	// Line 3541, Address: 0x36776c, Func Offset: 0x2c
	// Line 3542, Address: 0x367770, Func Offset: 0x30
	// Line 3541, Address: 0x36777c, Func Offset: 0x3c
	// Line 3542, Address: 0x367780, Func Offset: 0x40
	// Line 3544, Address: 0x36778c, Func Offset: 0x4c
	// Line 3551, Address: 0x36779c, Func Offset: 0x5c
	// Line 3552, Address: 0x3677f0, Func Offset: 0xb0
	// Line 3554, Address: 0x36780c, Func Offset: 0xcc
	// Line 3555, Address: 0x367818, Func Offset: 0xd8
	// Line 3546, Address: 0x367888, Func Offset: 0x148
	// Line 3555, Address: 0x36788c, Func Offset: 0x14c
	// Line 3546, Address: 0x3678a8, Func Offset: 0x168
	// Line 3555, Address: 0x3678b0, Func Offset: 0x170
	// Line 3548, Address: 0x3678dc, Func Offset: 0x19c
	// Line 3555, Address: 0x3678e0, Func Offset: 0x1a0
	// Line 3548, Address: 0x3678f0, Func Offset: 0x1b0
	// Line 3555, Address: 0x3678f4, Func Offset: 0x1b4
	// Func End, Address: 0x367910, Func Offset: 0x1d0
}

// stop__Q313cruise_bubble12CruiseBubble20state_camera_restoreFv
// Start address: 0x367910
void stop()
{
	// Line 3558, Address: 0x367910, Func Offset: 0
	// Line 3559, Address: 0x36791c, Func Offset: 0xc
	// Line 3560, Address: 0x367944, Func Offset: 0x34
	// Line 3561, Address: 0x367960, Func Offset: 0x50
	// Func End, Address: 0x367970, Func Offset: 0x60
}

// update__Q313cruise_bubble12CruiseBubble20state_camera_restoreFf
// Start address: 0x367970
state_enum_0 state_camera_restore::update(float32 dt)
{
	// Line 3565, Address: 0x367970, Func Offset: 0
	// Line 3569, Address: 0x36797c, Func Offset: 0xc
	// Line 3573, Address: 0x367994, Func Offset: 0x24
	// Func End, Address: 0x36799c, Func Offset: 0x2c
}

// start__Q313cruise_bubble12CruiseBubble19state_camera_surveyFv
// Start address: 0x3679a0
void state_camera_survey::start()
{
	// Line 3359, Address: 0x3679a0, Func Offset: 0
	// Line 3360, Address: 0x3679b4, Func Offset: 0x14
	// Line 3378, Address: 0x3679e4, Func Offset: 0x44
	// Line 3379, Address: 0x367a00, Func Offset: 0x60
	// Line 3380, Address: 0x367a04, Func Offset: 0x64
	// Line 3379, Address: 0x367a18, Func Offset: 0x78
	// Line 3380, Address: 0x367a1c, Func Offset: 0x7c
	// Line 3362, Address: 0x367b6c, Func Offset: 0x1cc
	// Line 3380, Address: 0x367b70, Func Offset: 0x1d0
	// Line 3364, Address: 0x367b80, Func Offset: 0x1e0
	// Line 3380, Address: 0x367b88, Func Offset: 0x1e8
	// Line 3381, Address: 0x367b8c, Func Offset: 0x1ec
	// Line 3382, Address: 0x367f28, Func Offset: 0x588
	// Line 3383, Address: 0x367f3c, Func Offset: 0x59c
	// Line 3381, Address: 0x367f44, Func Offset: 0x5a4
	// Line 3383, Address: 0x367f58, Func Offset: 0x5b8
	// Line 3381, Address: 0x367f74, Func Offset: 0x5d4
	// Line 3383, Address: 0x367f7c, Func Offset: 0x5dc
	// Func End, Address: 0x367f94, Func Offset: 0x5f4
}

// stop__Q313cruise_bubble12CruiseBubble19state_camera_surveyFv
// Start address: 0x367fa0
void stop()
{
	// Line 3386, Address: 0x367fa0, Func Offset: 0
	// Line 3387, Address: 0x367fa8, Func Offset: 0x8
	// Line 3388, Address: 0x367fc4, Func Offset: 0x24
	// Func End, Address: 0x367fd0, Func Offset: 0x30
}

// update__Q313cruise_bubble12CruiseBubble19state_camera_surveyFf
// Start address: 0x367fd0
state_enum_0 state_camera_survey::update(float32 dt)
{
	// Line 3391, Address: 0x367fd0, Func Offset: 0
	// Line 3392, Address: 0x367fe8, Func Offset: 0x18
	// Line 3395, Address: 0x367ff0, Func Offset: 0x20
	// Line 3397, Address: 0x36802c, Func Offset: 0x5c
	// Line 3399, Address: 0x368038, Func Offset: 0x68
	// Line 3405, Address: 0x368048, Func Offset: 0x78
	// Line 3399, Address: 0x368054, Func Offset: 0x84
	// Line 3405, Address: 0x368058, Func Offset: 0x88
	// Line 3408, Address: 0x3683e0, Func Offset: 0x410
	// Line 3396, Address: 0x3683e8, Func Offset: 0x418
	// Line 3398, Address: 0x3683f0, Func Offset: 0x420
	// Line 3401, Address: 0x3683f8, Func Offset: 0x428
	// Line 3408, Address: 0x3683fc, Func Offset: 0x42c
	// Line 3401, Address: 0x368400, Func Offset: 0x430
	// Line 3408, Address: 0x368404, Func Offset: 0x434
	// Line 3401, Address: 0x368408, Func Offset: 0x438
	// Line 3408, Address: 0x36840c, Func Offset: 0x43c
	// Line 3401, Address: 0x368438, Func Offset: 0x468
	// Line 3408, Address: 0x36843c, Func Offset: 0x46c
	// Line 3401, Address: 0x368444, Func Offset: 0x474
	// Line 3408, Address: 0x368448, Func Offset: 0x478
	// Line 3401, Address: 0x368454, Func Offset: 0x484
	// Line 3408, Address: 0x368458, Func Offset: 0x488
	// Line 3401, Address: 0x36845c, Func Offset: 0x48c
	// Line 3408, Address: 0x368460, Func Offset: 0x490
	// Line 3401, Address: 0x36846c, Func Offset: 0x49c
	// Line 3408, Address: 0x368478, Func Offset: 0x4a8
	// Line 3401, Address: 0x368490, Func Offset: 0x4c0
	// Line 3408, Address: 0x3684a4, Func Offset: 0x4d4
	// Line 3401, Address: 0x3684ac, Func Offset: 0x4dc
	// Line 3408, Address: 0x3684b0, Func Offset: 0x4e0
	// Line 3402, Address: 0x3684b8, Func Offset: 0x4e8
	// Line 3405, Address: 0x3684c0, Func Offset: 0x4f0
	// Line 3408, Address: 0x3684d0, Func Offset: 0x500
	// Line 3405, Address: 0x3684ec, Func Offset: 0x51c
	// Line 3409, Address: 0x3684f4, Func Offset: 0x524
	// Func End, Address: 0x36850c, Func Offset: 0x53c
}

// start__Q313cruise_bubble12CruiseBubble19state_camera_attachFv
// Start address: 0x368510
void start()
{
	// Line 3147, Address: 0x368510, Func Offset: 0
	// Line 3148, Address: 0x368518, Func Offset: 0x8
	// Line 3149, Address: 0x368534, Func Offset: 0x24
	// Line 3150, Address: 0x368538, Func Offset: 0x28
	// Line 3149, Address: 0x36853c, Func Offset: 0x2c
	// Line 3150, Address: 0x368540, Func Offset: 0x30
	// Line 3149, Address: 0x368544, Func Offset: 0x34
	// Line 3150, Address: 0x368548, Func Offset: 0x38
	// Line 3151, Address: 0x368550, Func Offset: 0x40
	// Line 3156, Address: 0x36856c, Func Offset: 0x5c
	// Line 3158, Address: 0x368578, Func Offset: 0x68
	// Line 3169, Address: 0x36859c, Func Offset: 0x8c
	// Line 3172, Address: 0x3685ac, Func Offset: 0x9c
	// Func End, Address: 0x3685bc, Func Offset: 0xac
}

// stop__Q313cruise_bubble12CruiseBubble19state_camera_attachFv
// Start address: 0x3685c0
void stop()
{
	// Line 3175, Address: 0x3685c0, Func Offset: 0
	// Line 3176, Address: 0x3685c4, Func Offset: 0x4
	// Line 3175, Address: 0x3685c8, Func Offset: 0x8
	// Line 3176, Address: 0x3685cc, Func Offset: 0xc
	// Line 3177, Address: 0x3685d4, Func Offset: 0x14
	// Line 3179, Address: 0x3685f0, Func Offset: 0x30
	// Line 3181, Address: 0x368608, Func Offset: 0x48
	// Func End, Address: 0x368614, Func Offset: 0x54
}

// update__Q313cruise_bubble12CruiseBubble19state_camera_attachFf
// Start address: 0x368620
state_enum_0 state_camera_attach::update()
{
	// Line 3184, Address: 0x368620, Func Offset: 0
	// Line 3188, Address: 0x368624, Func Offset: 0x4
	// Line 3184, Address: 0x368628, Func Offset: 0x8
	// Line 3185, Address: 0x36862c, Func Offset: 0xc
	// Line 3184, Address: 0x368630, Func Offset: 0x10
	// Line 3188, Address: 0x368640, Func Offset: 0x20
	// Line 3185, Address: 0x368644, Func Offset: 0x24
	// Line 3188, Address: 0x368648, Func Offset: 0x28
	// Line 3185, Address: 0x36864c, Func Offset: 0x2c
	// Line 3188, Address: 0x368650, Func Offset: 0x30
	// Line 3190, Address: 0x368658, Func Offset: 0x38
	// Line 3191, Address: 0x368668, Func Offset: 0x48
	// Line 3194, Address: 0x368684, Func Offset: 0x64
	// Line 3206, Address: 0x368694, Func Offset: 0x74
	// Line 3195, Address: 0x36869c, Func Offset: 0x7c
	// Line 3206, Address: 0x3686a0, Func Offset: 0x80
	// Line 3195, Address: 0x3686f8, Func Offset: 0xd8
	// Line 3206, Address: 0x3686fc, Func Offset: 0xdc
	// Line 3195, Address: 0x368710, Func Offset: 0xf0
	// Line 3206, Address: 0x368720, Func Offset: 0x100
	// Line 3195, Address: 0x36872c, Func Offset: 0x10c
	// Line 3206, Address: 0x368734, Func Offset: 0x114
	// Line 3195, Address: 0x368738, Func Offset: 0x118
	// Line 3206, Address: 0x36873c, Func Offset: 0x11c
	// Line 3195, Address: 0x368750, Func Offset: 0x130
	// Line 3206, Address: 0x36875c, Func Offset: 0x13c
	// Line 3195, Address: 0x3687b0, Func Offset: 0x190
	// Line 3206, Address: 0x3687b4, Func Offset: 0x194
	// Line 3195, Address: 0x3687cc, Func Offset: 0x1ac
	// Line 3206, Address: 0x3687d0, Func Offset: 0x1b0
	// Line 3195, Address: 0x3687f0, Func Offset: 0x1d0
	// Line 3206, Address: 0x3687f4, Func Offset: 0x1d4
	// Line 3195, Address: 0x368800, Func Offset: 0x1e0
	// Line 3206, Address: 0x368804, Func Offset: 0x1e4
	// Line 3195, Address: 0x368808, Func Offset: 0x1e8
	// Line 3206, Address: 0x36880c, Func Offset: 0x1ec
	// Line 3195, Address: 0x368838, Func Offset: 0x218
	// Line 3206, Address: 0x368840, Func Offset: 0x220
	// Line 3195, Address: 0x36884c, Func Offset: 0x22c
	// Line 3206, Address: 0x368850, Func Offset: 0x230
	// Line 3195, Address: 0x368874, Func Offset: 0x254
	// Line 3206, Address: 0x368878, Func Offset: 0x258
	// Line 3195, Address: 0x368888, Func Offset: 0x268
	// Line 3206, Address: 0x36888c, Func Offset: 0x26c
	// Line 3195, Address: 0x3688a4, Func Offset: 0x284
	// Line 3206, Address: 0x3688a8, Func Offset: 0x288
	// Line 3195, Address: 0x3688bc, Func Offset: 0x29c
	// Line 3206, Address: 0x3688c0, Func Offset: 0x2a0
	// Line 3207, Address: 0x3688fc, Func Offset: 0x2dc
	// Func End, Address: 0x368918, Func Offset: 0x2f8
}

// start__Q313cruise_bubble12CruiseBubble18state_camera_seizeFv
// Start address: 0x368920
void state_camera_seize::start()
{
	// Line 2990, Address: 0x368920, Func Offset: 0
	// Line 2991, Address: 0x368934, Func Offset: 0x14
	// Line 2992, Address: 0x368950, Func Offset: 0x30
	// Line 2993, Address: 0x368954, Func Offset: 0x34
	// Line 2994, Address: 0x36895c, Func Offset: 0x3c
	// Line 2993, Address: 0x368968, Func Offset: 0x48
	// Line 2994, Address: 0x368980, Func Offset: 0x60
	// Line 2995, Address: 0x368988, Func Offset: 0x68
	// Line 2998, Address: 0x36898c, Func Offset: 0x6c
	// Line 2996, Address: 0x368990, Func Offset: 0x70
	// Line 2998, Address: 0x368994, Func Offset: 0x74
	// Line 2997, Address: 0x368998, Func Offset: 0x78
	// Line 2998, Address: 0x36899c, Func Offset: 0x7c
	// Line 2995, Address: 0x3689b4, Func Offset: 0x94
	// Line 2998, Address: 0x3689b8, Func Offset: 0x98
	// Line 3000, Address: 0x368aac, Func Offset: 0x18c
	// Func End, Address: 0x368ac4, Func Offset: 0x1a4
}

// stop__Q313cruise_bubble12CruiseBubble18state_camera_seizeFv
// Start address: 0x368ad0
void stop()
{
	// Line 3003, Address: 0x368ad0, Func Offset: 0
	// Line 3004, Address: 0x368ad8, Func Offset: 0x8
	// Line 3005, Address: 0x368af4, Func Offset: 0x24
	// Line 3006, Address: 0x368b04, Func Offset: 0x34
	// Func End, Address: 0x368b10, Func Offset: 0x40
}

// update__Q313cruise_bubble12CruiseBubble18state_camera_seizeFf
// Start address: 0x368b10
state_enum_0 state_camera_seize::update(float32 dt)
{
	xVec3 offset;
	// Line 3009, Address: 0x368b10, Func Offset: 0
	// Line 3010, Address: 0x368b20, Func Offset: 0x10
	// Line 3011, Address: 0x368b34, Func Offset: 0x24
	// Line 3016, Address: 0x368b40, Func Offset: 0x30
	// Line 3018, Address: 0x368ba4, Func Offset: 0x94
	// Line 3019, Address: 0x368d08, Func Offset: 0x1f8
	// Line 3021, Address: 0x368d58, Func Offset: 0x248
	// Line 3019, Address: 0x368d5c, Func Offset: 0x24c
	// Line 3021, Address: 0x368d60, Func Offset: 0x250
	// Line 3019, Address: 0x368d64, Func Offset: 0x254
	// Line 3021, Address: 0x368d68, Func Offset: 0x258
	// Line 3022, Address: 0x368d9c, Func Offset: 0x28c
	// Line 3021, Address: 0x368da0, Func Offset: 0x290
	// Line 3023, Address: 0x368db0, Func Offset: 0x2a0
	// Line 3021, Address: 0x368db8, Func Offset: 0x2a8
	// Line 3022, Address: 0x368df0, Func Offset: 0x2e0
	// Line 3021, Address: 0x368df4, Func Offset: 0x2e4
	// Line 3022, Address: 0x368dfc, Func Offset: 0x2ec
	// Line 3023, Address: 0x368e14, Func Offset: 0x304
	// Line 3035, Address: 0x368e3c, Func Offset: 0x32c
	// Line 3023, Address: 0x368e40, Func Offset: 0x330
	// Line 3035, Address: 0x368e48, Func Offset: 0x338
	// Line 3040, Address: 0x368e58, Func Offset: 0x348
	// Line 3035, Address: 0x368e5c, Func Offset: 0x34c
	// Line 3040, Address: 0x368e64, Func Offset: 0x354
	// Line 3012, Address: 0x368e6c, Func Offset: 0x35c
	// Line 3040, Address: 0x368e74, Func Offset: 0x364
	// Line 3019, Address: 0x368e88, Func Offset: 0x378
	// Line 3040, Address: 0x368eb0, Func Offset: 0x3a0
	// Line 3019, Address: 0x368ebc, Func Offset: 0x3ac
	// Line 3040, Address: 0x368ec0, Func Offset: 0x3b0
	// Line 3019, Address: 0x368ee8, Func Offset: 0x3d8
	// Line 3040, Address: 0x368eec, Func Offset: 0x3dc
	// Line 3019, Address: 0x368ef8, Func Offset: 0x3e8
	// Line 3040, Address: 0x368efc, Func Offset: 0x3ec
	// Line 3023, Address: 0x368f14, Func Offset: 0x404
	// Line 3040, Address: 0x368f1c, Func Offset: 0x40c
	// Line 3023, Address: 0x368f24, Func Offset: 0x414
	// Line 3040, Address: 0x368f2c, Func Offset: 0x41c
	// Line 3023, Address: 0x368f34, Func Offset: 0x424
	// Line 3040, Address: 0x368f38, Func Offset: 0x428
	// Line 3023, Address: 0x368f44, Func Offset: 0x434
	// Line 3041, Address: 0x368f50, Func Offset: 0x440
	// Func End, Address: 0x368f64, Func Offset: 0x454
}

// start__Q313cruise_bubble12CruiseBubble16state_camera_aimFv
// Start address: 0x368f70
void state_camera_aim::start()
{
	xMat4x3& mat;
	xVec2 offset;
	// Line 2798, Address: 0x368f70, Func Offset: 0
	// Line 2799, Address: 0x368f8c, Func Offset: 0x1c
	// Line 2800, Address: 0x368fa8, Func Offset: 0x38
	// Line 2802, Address: 0x368fb0, Func Offset: 0x40
	// Line 2807, Address: 0x368fc8, Func Offset: 0x58
	// Line 2803, Address: 0x368fcc, Func Offset: 0x5c
	// Line 2807, Address: 0x368fd0, Func Offset: 0x60
	// Line 2810, Address: 0x368fd4, Func Offset: 0x64
	// Line 2807, Address: 0x368fd8, Func Offset: 0x68
	// Line 2803, Address: 0x368fdc, Func Offset: 0x6c
	// Line 2809, Address: 0x368fe0, Func Offset: 0x70
	// Line 2810, Address: 0x368fe4, Func Offset: 0x74
	// Line 2809, Address: 0x368fe8, Func Offset: 0x78
	// Line 2810, Address: 0x368ff4, Func Offset: 0x84
	// Line 2811, Address: 0x369034, Func Offset: 0xc4
	// Line 2810, Address: 0x369038, Func Offset: 0xc8
	// Line 2811, Address: 0x36903c, Func Offset: 0xcc
	// Line 2813, Address: 0x369050, Func Offset: 0xe0
	// Line 2817, Address: 0x369054, Func Offset: 0xe4
	// Line 2813, Address: 0x369058, Func Offset: 0xe8
	// Line 2817, Address: 0x36905c, Func Offset: 0xec
	// Line 2813, Address: 0x369060, Func Offset: 0xf0
	// Line 2811, Address: 0x369064, Func Offset: 0xf4
	// Line 2812, Address: 0x369068, Func Offset: 0xf8
	// Line 2813, Address: 0x369078, Func Offset: 0x108
	// Line 2815, Address: 0x36907c, Func Offset: 0x10c
	// Line 2817, Address: 0x369080, Func Offset: 0x110
	// Line 2819, Address: 0x369088, Func Offset: 0x118
	// Line 2820, Address: 0x369120, Func Offset: 0x1b0
	// Line 2819, Address: 0x369124, Func Offset: 0x1b4
	// Line 2820, Address: 0x369138, Func Offset: 0x1c8
	// Line 2819, Address: 0x36913c, Func Offset: 0x1cc
	// Line 2820, Address: 0x369148, Func Offset: 0x1d8
	// Line 2819, Address: 0x36914c, Func Offset: 0x1dc
	// Line 2820, Address: 0x369150, Func Offset: 0x1e0
	// Line 2819, Address: 0x369154, Func Offset: 0x1e4
	// Line 2820, Address: 0x369158, Func Offset: 0x1e8
	// Line 2821, Address: 0x369188, Func Offset: 0x218
	// Func End, Address: 0x3691a8, Func Offset: 0x238
}

// stop__Q313cruise_bubble12CruiseBubble16state_camera_aimFv
// Start address: 0x3691b0
void stop()
{
	// Line 2824, Address: 0x3691b0, Func Offset: 0
	// Line 2825, Address: 0x3691b8, Func Offset: 0x8
	// Line 2826, Address: 0x3691d4, Func Offset: 0x24
	// Func End, Address: 0x3691e0, Func Offset: 0x30
}

// update__Q313cruise_bubble12CruiseBubble16state_camera_aimFf
// Start address: 0x3691e0
state_enum_0 state_camera_aim::update(float32 dt)
{
	en_plyrpup pup;
	// Line 2829, Address: 0x3691e0, Func Offset: 0
	// Line 2831, Address: 0x3691e4, Func Offset: 0x4
	// Line 2829, Address: 0x3691e8, Func Offset: 0x8
	// Line 2830, Address: 0x36921c, Func Offset: 0x3c
	// Line 2831, Address: 0x36922c, Func Offset: 0x4c
	// Line 2834, Address: 0x369260, Func Offset: 0x80
	// Line 2835, Address: 0x369268, Func Offset: 0x88
	// Line 2837, Address: 0x3692f4, Func Offset: 0x114
	// Line 2838, Address: 0x36937c, Func Offset: 0x19c
	// Line 2842, Address: 0x369550, Func Offset: 0x370
	// Line 2846, Address: 0x369564, Func Offset: 0x384
	// Line 2849, Address: 0x36958c, Func Offset: 0x3ac
	// Line 2852, Address: 0x3695a0, Func Offset: 0x3c0
	// Line 2854, Address: 0x3695a4, Func Offset: 0x3c4
	// Line 2852, Address: 0x3695a8, Func Offset: 0x3c8
	// Line 2854, Address: 0x3695b0, Func Offset: 0x3d0
	// Line 2855, Address: 0x3695b4, Func Offset: 0x3d4
	// Line 2856, Address: 0x3695c0, Func Offset: 0x3e0
	// Line 2857, Address: 0x3695d8, Func Offset: 0x3f8
	// Line 2860, Address: 0x3695e0, Func Offset: 0x400
	// Line 2861, Address: 0x3695f8, Func Offset: 0x418
	// Line 2834, Address: 0x369604, Func Offset: 0x424
	// Line 2861, Address: 0x36960c, Func Offset: 0x42c
	// Line 2834, Address: 0x369624, Func Offset: 0x444
	// Line 2861, Address: 0x36962c, Func Offset: 0x44c
	// Line 2834, Address: 0x369654, Func Offset: 0x474
	// Line 2861, Address: 0x369660, Func Offset: 0x480
	// Line 2834, Address: 0x369664, Func Offset: 0x484
	// Line 2861, Address: 0x36966c, Func Offset: 0x48c
	// Line 2834, Address: 0x369678, Func Offset: 0x498
	// Line 2861, Address: 0x36967c, Func Offset: 0x49c
	// Line 2834, Address: 0x369680, Func Offset: 0x4a0
	// Line 2861, Address: 0x369688, Func Offset: 0x4a8
	// Line 2834, Address: 0x36968c, Func Offset: 0x4ac
	// Line 2861, Address: 0x369690, Func Offset: 0x4b0
	// Line 2834, Address: 0x369698, Func Offset: 0x4b8
	// Line 2861, Address: 0x3696a0, Func Offset: 0x4c0
	// Line 2834, Address: 0x3696b8, Func Offset: 0x4d8
	// Line 2861, Address: 0x3696d4, Func Offset: 0x4f4
	// Line 2834, Address: 0x3696dc, Func Offset: 0x4fc
	// Line 2861, Address: 0x3696ec, Func Offset: 0x50c
	// Line 2834, Address: 0x3696f4, Func Offset: 0x514
	// Line 2861, Address: 0x3696fc, Func Offset: 0x51c
	// Line 2834, Address: 0x369704, Func Offset: 0x524
	// Line 2861, Address: 0x36972c, Func Offset: 0x54c
	// Line 2834, Address: 0x369734, Func Offset: 0x554
	// Line 2861, Address: 0x36974c, Func Offset: 0x56c
	// Line 2835, Address: 0x369754, Func Offset: 0x574
	// Line 2861, Address: 0x36977c, Func Offset: 0x59c
	// Line 2835, Address: 0x369784, Func Offset: 0x5a4
	// Line 2838, Address: 0x36979c, Func Offset: 0x5bc
	// Line 2861, Address: 0x3697a0, Func Offset: 0x5c0
	// Line 2843, Address: 0x369810, Func Offset: 0x630
	// Line 2861, Address: 0x369820, Func Offset: 0x640
	// Line 2843, Address: 0x369864, Func Offset: 0x684
	// Line 2861, Address: 0x369868, Func Offset: 0x688
	// Line 2843, Address: 0x369880, Func Offset: 0x6a0
	// Line 2861, Address: 0x369888, Func Offset: 0x6a8
	// Line 2843, Address: 0x3698ac, Func Offset: 0x6cc
	// Line 2861, Address: 0x3698b8, Func Offset: 0x6d8
	// Line 2865, Address: 0x3698c8, Func Offset: 0x6e8
	// Line 2866, Address: 0x3698cc, Func Offset: 0x6ec
	// Func End, Address: 0x369908, Func Offset: 0x728
}

// start__Q313cruise_bubble12CruiseBubble20state_missle_explodeFv
// Start address: 0x369910
void state_missle_explode::start()
{
	float32 min_dist;
	// Line 2402, Address: 0x369910, Func Offset: 0
	// Line 2403, Address: 0x369914, Func Offset: 0x4
	// Line 2402, Address: 0x369918, Func Offset: 0x8
	// Line 2406, Address: 0x36991c, Func Offset: 0xc
	// Line 2402, Address: 0x369920, Func Offset: 0x10
	// Line 2403, Address: 0x369934, Func Offset: 0x24
	// Line 2406, Address: 0x369944, Func Offset: 0x34
	// Line 2407, Address: 0x36994c, Func Offset: 0x3c
	// Line 2409, Address: 0x369960, Func Offset: 0x50
	// Line 2407, Address: 0x369964, Func Offset: 0x54
	// Line 2409, Address: 0x369968, Func Offset: 0x58
	// Line 2411, Address: 0x369970, Func Offset: 0x60
	// Line 2413, Address: 0x369978, Func Offset: 0x68
	// Line 2414, Address: 0x369a24, Func Offset: 0x114
	// Line 2419, Address: 0x369a78, Func Offset: 0x168
	// Line 2421, Address: 0x369a88, Func Offset: 0x178
	// Line 2419, Address: 0x369a8c, Func Offset: 0x17c
	// Line 2421, Address: 0x369a90, Func Offset: 0x180
	// Line 2419, Address: 0x369a94, Func Offset: 0x184
	// Line 2421, Address: 0x369a98, Func Offset: 0x188
	// Line 2419, Address: 0x369a9c, Func Offset: 0x18c
	// Line 2420, Address: 0x369ad8, Func Offset: 0x1c8
	// Line 2419, Address: 0x369adc, Func Offset: 0x1cc
	// Line 2420, Address: 0x369ae4, Func Offset: 0x1d4
	// Line 2419, Address: 0x369ae8, Func Offset: 0x1d8
	// Line 2421, Address: 0x369b40, Func Offset: 0x230
	// Line 2424, Address: 0x369bb4, Func Offset: 0x2a4
	// Line 2425, Address: 0x369cd4, Func Offset: 0x3c4
	// Line 2426, Address: 0x369dc4, Func Offset: 0x4b4
	// Line 2428, Address: 0x369eb0, Func Offset: 0x5a0
	// Line 2429, Address: 0x369ec8, Func Offset: 0x5b8
	// Line 2431, Address: 0x369f68, Func Offset: 0x658
	// Line 2429, Address: 0x369f6c, Func Offset: 0x65c
	// Line 2431, Address: 0x369f70, Func Offset: 0x660
	// Line 2433, Address: 0x369f9c, Func Offset: 0x68c
	// Line 2435, Address: 0x369fac, Func Offset: 0x69c
	// Line 2433, Address: 0x369fb0, Func Offset: 0x6a0
	// Line 2435, Address: 0x369fb4, Func Offset: 0x6a4
	// Line 2434, Address: 0x369fb8, Func Offset: 0x6a8
	// Line 2433, Address: 0x369fbc, Func Offset: 0x6ac
	// Line 2435, Address: 0x369fc0, Func Offset: 0x6b0
	// Line 2437, Address: 0x369fe0, Func Offset: 0x6d0
	// Line 2440, Address: 0x36a034, Func Offset: 0x724
	// Line 2410, Address: 0x36a090, Func Offset: 0x780
	// Line 2440, Address: 0x36a094, Func Offset: 0x784
	// Line 2410, Address: 0x36a0a8, Func Offset: 0x798
	// Line 2440, Address: 0x36a0ac, Func Offset: 0x79c
	// Line 2410, Address: 0x36a0c0, Func Offset: 0x7b0
	// Line 2440, Address: 0x36a0c4, Func Offset: 0x7b4
	// Line 2410, Address: 0x36a0d8, Func Offset: 0x7c8
	// Line 2440, Address: 0x36a0dc, Func Offset: 0x7cc
	// Line 2410, Address: 0x36a0e8, Func Offset: 0x7d8
	// Line 2440, Address: 0x36a0f0, Func Offset: 0x7e0
	// Line 2424, Address: 0x36a0f8, Func Offset: 0x7e8
	// Line 2440, Address: 0x36a100, Func Offset: 0x7f0
	// Line 2425, Address: 0x36a124, Func Offset: 0x814
	// Line 2440, Address: 0x36a12c, Func Offset: 0x81c
	// Line 2425, Address: 0x36a138, Func Offset: 0x828
	// Line 2440, Address: 0x36a13c, Func Offset: 0x82c
	// Line 2425, Address: 0x36a148, Func Offset: 0x838
	// Line 2440, Address: 0x36a154, Func Offset: 0x844
	// Line 2426, Address: 0x36a178, Func Offset: 0x868
	// Line 2440, Address: 0x36a180, Func Offset: 0x870
	// Line 2426, Address: 0x36a18c, Func Offset: 0x87c
	// Line 2440, Address: 0x36a190, Func Offset: 0x880
	// Line 2426, Address: 0x36a19c, Func Offset: 0x88c
	// Line 2440, Address: 0x36a1a8, Func Offset: 0x898
	// Line 2429, Address: 0x36a1c8, Func Offset: 0x8b8
	// Line 2440, Address: 0x36a1d8, Func Offset: 0x8c8
	// Line 2429, Address: 0x36a1e0, Func Offset: 0x8d0
	// Line 2440, Address: 0x36a1f4, Func Offset: 0x8e4
	// Line 2437, Address: 0x36a20c, Func Offset: 0x8fc
	// Line 2440, Address: 0x36a214, Func Offset: 0x904
	// Func End, Address: 0x36a230, Func Offset: 0x920
}

// hazard_check__Q313cruise_bubble12CruiseBubble20state_missle_explodeFR10zNMEHazardPv
// Start address: 0x36a230
uint8 hazard_check(zNMEHazard& haz, void* context)
{
	float32 radius;
	xVec3 offset;
	float32 max_dist;
	// Line 2574, Address: 0x36a230, Func Offset: 0
	// Line 2576, Address: 0x36a234, Func Offset: 0x4
	// Line 2574, Address: 0x36a23c, Func Offset: 0xc
	// Line 2576, Address: 0x36a240, Func Offset: 0x10
	// Line 2575, Address: 0x36a258, Func Offset: 0x28
	// Line 2576, Address: 0x36a25c, Func Offset: 0x2c
	// Line 2577, Address: 0x36a280, Func Offset: 0x50
	// Line 2576, Address: 0x36a284, Func Offset: 0x54
	// Line 2577, Address: 0x36a2a0, Func Offset: 0x70
	// Line 2576, Address: 0x36a2a4, Func Offset: 0x74
	// Line 2578, Address: 0x36a2a8, Func Offset: 0x78
	// Line 2576, Address: 0x36a2ac, Func Offset: 0x7c
	// Line 2577, Address: 0x36a2b8, Func Offset: 0x88
	// Line 2578, Address: 0x36a2bc, Func Offset: 0x8c
	// Line 2576, Address: 0x36a2c0, Func Offset: 0x90
	// Line 2578, Address: 0x36a2cc, Func Offset: 0x9c
	// Line 2576, Address: 0x36a2dc, Func Offset: 0xac
	// Line 2578, Address: 0x36a2e0, Func Offset: 0xb0
	// Line 2580, Address: 0x36a2ec, Func Offset: 0xbc
	// Line 2581, Address: 0x36a304, Func Offset: 0xd4
	// Line 2583, Address: 0x36a310, Func Offset: 0xe0
	// Line 2584, Address: 0x36a314, Func Offset: 0xe4
	// Func End, Address: 0x36a31c, Func Offset: 0xec
}

// stop__Q313cruise_bubble12CruiseBubble20state_missle_explodeFv
// Start address: 0x36a320
void stop()
{
	// Line 2444, Address: 0x36a320, Func Offset: 0
	// Line 2445, Address: 0x36a32c, Func Offset: 0xc
	// Line 2444, Address: 0x36a330, Func Offset: 0x10
	// Line 2446, Address: 0x36a338, Func Offset: 0x18
	// Func End, Address: 0x36a340, Func Offset: 0x20
}

// update__Q313cruise_bubble12CruiseBubble20state_missle_explodeFf
// Start address: 0x36a340
state_enum_0 state_missle_explode::update(float32 dt)
{
	// Line 2451, Address: 0x36a340, Func Offset: 0
	// Line 2452, Address: 0x36a358, Func Offset: 0x18
	// Line 2453, Address: 0x36a36c, Func Offset: 0x2c
	// Line 2456, Address: 0x36a378, Func Offset: 0x38
	// Line 2465, Address: 0x36a45c, Func Offset: 0x11c
	// Line 2466, Address: 0x36a474, Func Offset: 0x134
	// Line 2465, Address: 0x36a478, Func Offset: 0x138
	// Line 2466, Address: 0x36a494, Func Offset: 0x154
	// Line 2467, Address: 0x36a4d0, Func Offset: 0x190
	// Line 2468, Address: 0x36a4d4, Func Offset: 0x194
	// Line 2467, Address: 0x36a4d8, Func Offset: 0x198
	// Line 2468, Address: 0x36a4dc, Func Offset: 0x19c
	// Line 2466, Address: 0x36a4e0, Func Offset: 0x1a0
	// Line 2469, Address: 0x36a4ec, Func Offset: 0x1ac
	// Line 2470, Address: 0x36a4f4, Func Offset: 0x1b4
	// Line 2473, Address: 0x36a510, Func Offset: 0x1d0
	// Line 2482, Address: 0x36a528, Func Offset: 0x1e8
	// Line 2483, Address: 0x36a594, Func Offset: 0x254
	// Line 2490, Address: 0x36a5b0, Func Offset: 0x270
	// Line 2456, Address: 0x36a5b8, Func Offset: 0x278
	// Line 2466, Address: 0x36a5c0, Func Offset: 0x280
	// Line 2490, Address: 0x36a5c8, Func Offset: 0x288
	// Line 2476, Address: 0x36a5cc, Func Offset: 0x28c
	// Line 2490, Address: 0x36a5d0, Func Offset: 0x290
	// Line 2477, Address: 0x36a5d8, Func Offset: 0x298
	// Line 2490, Address: 0x36a5dc, Func Offset: 0x29c
	// Line 2477, Address: 0x36a5f4, Func Offset: 0x2b4
	// Line 2490, Address: 0x36a5f8, Func Offset: 0x2b8
	// Line 2477, Address: 0x36a5fc, Func Offset: 0x2bc
	// Line 2478, Address: 0x36a618, Func Offset: 0x2d8
	// Line 2477, Address: 0x36a620, Func Offset: 0x2e0
	// Line 2483, Address: 0x36a628, Func Offset: 0x2e8
	// Line 2491, Address: 0x36a638, Func Offset: 0x2f8
	// Func End, Address: 0x36a650, Func Offset: 0x310
}

// start__Q313cruise_bubble12CruiseBubble16state_missle_flyFv
// Start address: 0x36a650
void state_missle_fly::start()
{
	// Line 1875, Address: 0x36a650, Func Offset: 0
	// Line 1876, Address: 0x36a654, Func Offset: 0x4
	// Line 1875, Address: 0x36a658, Func Offset: 0x8
	// Line 1876, Address: 0x36a65c, Func Offset: 0xc
	// Line 1875, Address: 0x36a660, Func Offset: 0x10
	// Line 1879, Address: 0x36a664, Func Offset: 0x14
	// Line 1875, Address: 0x36a668, Func Offset: 0x18
	// Line 1876, Address: 0x36a66c, Func Offset: 0x1c
	// Line 1877, Address: 0x36a674, Func Offset: 0x24
	// Line 1876, Address: 0x36a678, Func Offset: 0x28
	// Line 1880, Address: 0x36a67c, Func Offset: 0x2c
	// Line 1876, Address: 0x36a680, Func Offset: 0x30
	// Line 1877, Address: 0x36a684, Func Offset: 0x34
	// Line 1879, Address: 0x36a68c, Func Offset: 0x3c
	// Line 1880, Address: 0x36a69c, Func Offset: 0x4c
	// Line 1881, Address: 0x36a6ac, Func Offset: 0x5c
	// Line 1884, Address: 0x36a6b0, Func Offset: 0x60
	// Line 1881, Address: 0x36a6b4, Func Offset: 0x64
	// Line 1883, Address: 0x36a6b8, Func Offset: 0x68
	// Line 1884, Address: 0x36a6bc, Func Offset: 0x6c
	// Line 1885, Address: 0x36a6cc, Func Offset: 0x7c
	// Line 1895, Address: 0x36a6d0, Func Offset: 0x80
	// Line 1885, Address: 0x36a6d4, Func Offset: 0x84
	// Line 1894, Address: 0x36a6d8, Func Offset: 0x88
	// Line 1885, Address: 0x36a6dc, Func Offset: 0x8c
	// Line 1895, Address: 0x36a6e0, Func Offset: 0x90
	// Line 1886, Address: 0x36a6e4, Func Offset: 0x94
	// Line 1894, Address: 0x36a6e8, Func Offset: 0x98
	// Line 1887, Address: 0x36a6ec, Func Offset: 0x9c
	// Line 1895, Address: 0x36a6f0, Func Offset: 0xa0
	// Line 1888, Address: 0x36a6f4, Func Offset: 0xa4
	// Line 1896, Address: 0x36a6f8, Func Offset: 0xa8
	// Line 1892, Address: 0x36a6fc, Func Offset: 0xac
	// Line 1895, Address: 0x36a700, Func Offset: 0xb0
	// Line 1896, Address: 0x36a704, Func Offset: 0xb4
	// Line 1898, Address: 0x36a708, Func Offset: 0xb8
	// Line 1896, Address: 0x36a70c, Func Offset: 0xbc
	// Line 1892, Address: 0x36a710, Func Offset: 0xc0
	// Line 1894, Address: 0x36a72c, Func Offset: 0xdc
	// Line 1895, Address: 0x36a734, Func Offset: 0xe4
	// Line 1898, Address: 0x36a740, Func Offset: 0xf0
	// Line 1895, Address: 0x36a744, Func Offset: 0xf4
	// Line 1896, Address: 0x36a748, Func Offset: 0xf8
	// Line 1895, Address: 0x36a74c, Func Offset: 0xfc
	// Line 1898, Address: 0x36a758, Func Offset: 0x108
	// Line 1895, Address: 0x36a75c, Func Offset: 0x10c
	// Line 1896, Address: 0x36a77c, Func Offset: 0x12c
	// Line 1895, Address: 0x36a780, Func Offset: 0x130
	// Line 1896, Address: 0x36a784, Func Offset: 0x134
	// Line 1895, Address: 0x36a788, Func Offset: 0x138
	// Line 1896, Address: 0x36a78c, Func Offset: 0x13c
	// Line 1898, Address: 0x36a7c8, Func Offset: 0x178
	// Line 1899, Address: 0x36a7dc, Func Offset: 0x18c
	// Line 1900, Address: 0x36a878, Func Offset: 0x228
	// Line 1901, Address: 0x36a8a0, Func Offset: 0x250
	// Line 1880, Address: 0x36a8a8, Func Offset: 0x258
	// Line 1901, Address: 0x36a8ac, Func Offset: 0x25c
	// Line 1899, Address: 0x36a8fc, Func Offset: 0x2ac
	// Line 1901, Address: 0x36a90c, Func Offset: 0x2bc
	// Line 1899, Address: 0x36a914, Func Offset: 0x2c4
	// Line 1901, Address: 0x36a928, Func Offset: 0x2d8
	// Func End, Address: 0x36a94c, Func Offset: 0x2fc
}

// stop__Q313cruise_bubble12CruiseBubble16state_missle_flyFv
// Start address: 0x36a950
void stop()
{
	xSphere o;
	// Line 1904, Address: 0x36a950, Func Offset: 0
	// Line 1905, Address: 0x36a954, Func Offset: 0x4
	// Line 1904, Address: 0x36a958, Func Offset: 0x8
	// Line 1905, Address: 0x36a95c, Func Offset: 0xc
	// Line 1904, Address: 0x36a960, Func Offset: 0x10
	// Line 1905, Address: 0x36a964, Func Offset: 0x14
	// Line 1908, Address: 0x36a96c, Func Offset: 0x1c
	// Line 1907, Address: 0x36a970, Func Offset: 0x20
	// Line 1908, Address: 0x36a974, Func Offset: 0x24
	// Line 1907, Address: 0x36a978, Func Offset: 0x28
	// Line 1906, Address: 0x36a980, Func Offset: 0x30
	// Line 1905, Address: 0x36a984, Func Offset: 0x34
	// Line 1906, Address: 0x36a988, Func Offset: 0x38
	// Line 1905, Address: 0x36a98c, Func Offset: 0x3c
	// Line 1906, Address: 0x36a990, Func Offset: 0x40
	// Line 1908, Address: 0x36a994, Func Offset: 0x44
	// Line 1906, Address: 0x36a998, Func Offset: 0x48
	// Line 1907, Address: 0x36a9a0, Func Offset: 0x50
	// Line 1908, Address: 0x36a9a4, Func Offset: 0x54
	// Line 1907, Address: 0x36a9ac, Func Offset: 0x5c
	// Line 1908, Address: 0x36a9b0, Func Offset: 0x60
	// Line 1909, Address: 0x36aa90, Func Offset: 0x140
	// Line 1911, Address: 0x36ab78, Func Offset: 0x228
	// Line 1914, Address: 0x36aba0, Func Offset: 0x250
	// Line 1915, Address: 0x36aba4, Func Offset: 0x254
	// Line 1914, Address: 0x36aba8, Func Offset: 0x258
	// Line 1915, Address: 0x36abac, Func Offset: 0x25c
	// Line 1914, Address: 0x36abb4, Func Offset: 0x264
	// Line 1915, Address: 0x36abb8, Func Offset: 0x268
	// Line 1914, Address: 0x36abc0, Func Offset: 0x270
	// Line 1915, Address: 0x36abc8, Func Offset: 0x278
	// Line 1916, Address: 0x36abd0, Func Offset: 0x280
	// Line 1908, Address: 0x36abe0, Func Offset: 0x290
	// Line 1916, Address: 0x36abe8, Func Offset: 0x298
	// Line 1908, Address: 0x36abf8, Func Offset: 0x2a8
	// Line 1916, Address: 0x36abfc, Func Offset: 0x2ac
	// Line 1908, Address: 0x36ac04, Func Offset: 0x2b4
	// Line 1916, Address: 0x36ac10, Func Offset: 0x2c0
	// Line 1909, Address: 0x36ac34, Func Offset: 0x2e4
	// Line 1916, Address: 0x36ac3c, Func Offset: 0x2ec
	// Line 1909, Address: 0x36ac48, Func Offset: 0x2f8
	// Line 1916, Address: 0x36ac4c, Func Offset: 0x2fc
	// Line 1909, Address: 0x36ac58, Func Offset: 0x308
	// Line 1916, Address: 0x36ac64, Func Offset: 0x314
	// Func End, Address: 0x36ac8c, Func Offset: 0x33c
}

// abort__Q313cruise_bubble12CruiseBubble16state_missle_flyFv
// Start address: 0x36ac90
void abort()
{
	xSphere o;
	xVec3 vec;
	// Line 1919, Address: 0x36ac90, Func Offset: 0
	// Line 1920, Address: 0x36ac94, Func Offset: 0x4
	// Line 1919, Address: 0x36ac98, Func Offset: 0x8
	// Line 1920, Address: 0x36aca0, Func Offset: 0x10
	// Line 1921, Address: 0x36ad84, Func Offset: 0xf4
	// Line 1923, Address: 0x36adac, Func Offset: 0x11c
	// Line 1924, Address: 0x36adb0, Func Offset: 0x120
	// Line 1923, Address: 0x36adb4, Func Offset: 0x124
	// Line 1924, Address: 0x36adc0, Func Offset: 0x130
	// Line 1923, Address: 0x36adc4, Func Offset: 0x134
	// Line 1924, Address: 0x36adc8, Func Offset: 0x138
	// Line 1925, Address: 0x36adec, Func Offset: 0x15c
	// Line 1926, Address: 0x36ae00, Func Offset: 0x170
	// Line 1920, Address: 0x36ae10, Func Offset: 0x180
	// Line 1926, Address: 0x36ae18, Func Offset: 0x188
	// Line 1920, Address: 0x36ae24, Func Offset: 0x194
	// Line 1926, Address: 0x36ae28, Func Offset: 0x198
	// Line 1920, Address: 0x36ae34, Func Offset: 0x1a4
	// Line 1926, Address: 0x36ae40, Func Offset: 0x1b0
	// Func End, Address: 0x36ae68, Func Offset: 0x1d8
}

// update__Q313cruise_bubble12CruiseBubble16state_missle_flyFf
// Start address: 0x36ae70
state_enum_0 state_missle_fly::update(float32 dt)
{
	float32 dist;
	xVec3 target_screen_pos;
	xSphere o;
	// Line 1929, Address: 0x36ae70, Func Offset: 0
	// Line 1930, Address: 0x36ae7c, Func Offset: 0xc
	// Line 1929, Address: 0x36ae80, Func Offset: 0x10
	// Line 1930, Address: 0x36aedc, Func Offset: 0x6c
	// Line 1935, Address: 0x36aee4, Func Offset: 0x74
	// Line 1937, Address: 0x36aef0, Func Offset: 0x80
	// Line 1939, Address: 0x36aefc, Func Offset: 0x8c
	// Line 1941, Address: 0x36af20, Func Offset: 0xb0
	// Line 1943, Address: 0x36af2c, Func Offset: 0xbc
	// Line 1946, Address: 0x36af30, Func Offset: 0xc0
	// Line 1944, Address: 0x36af34, Func Offset: 0xc4
	// Line 1945, Address: 0x36af38, Func Offset: 0xc8
	// Line 1946, Address: 0x36af3c, Func Offset: 0xcc
	// Line 1945, Address: 0x36af40, Func Offset: 0xd0
	// Line 1944, Address: 0x36af44, Func Offset: 0xd4
	// Line 1945, Address: 0x36af5c, Func Offset: 0xec
	// Line 1946, Address: 0x36af68, Func Offset: 0xf8
	// Line 1945, Address: 0x36af6c, Func Offset: 0xfc
	// Line 1946, Address: 0x36afa4, Func Offset: 0x134
	// Line 1948, Address: 0x36b1b8, Func Offset: 0x348
	// Line 1977, Address: 0x36b1fc, Func Offset: 0x38c
	// Line 1980, Address: 0x36b208, Func Offset: 0x398
	// Line 1987, Address: 0x36b220, Func Offset: 0x3b0
	// Line 1988, Address: 0x36b3d8, Func Offset: 0x568
	// Line 1991, Address: 0x36b43c, Func Offset: 0x5cc
	// Line 1988, Address: 0x36b444, Func Offset: 0x5d4
	// Line 1991, Address: 0x36b448, Func Offset: 0x5d8
	// Line 1988, Address: 0x36b44c, Func Offset: 0x5dc
	// Line 1991, Address: 0x36b4c4, Func Offset: 0x654
	// Line 1992, Address: 0x36b4e0, Func Offset: 0x670
	// Line 1994, Address: 0x36b960, Func Offset: 0xaf0
	// Line 1995, Address: 0x36b9c4, Func Offset: 0xb54
	// Line 1994, Address: 0x36b9c8, Func Offset: 0xb58
	// Line 1995, Address: 0x36b9e4, Func Offset: 0xb74
	// Line 1932, Address: 0x36ba04, Func Offset: 0xb94
	// Line 1995, Address: 0x36ba08, Func Offset: 0xb98
	// Line 1934, Address: 0x36ba10, Func Offset: 0xba0
	// Line 1995, Address: 0x36ba18, Func Offset: 0xba8
	// Line 1946, Address: 0x36ba1c, Func Offset: 0xbac
	// Line 1995, Address: 0x36ba2c, Func Offset: 0xbbc
	// Line 1946, Address: 0x36ba34, Func Offset: 0xbc4
	// Line 1995, Address: 0x36ba48, Func Offset: 0xbd8
	// Line 1955, Address: 0x36ba5c, Func Offset: 0xbec
	// Line 1995, Address: 0x36ba64, Func Offset: 0xbf4
	// Line 1963, Address: 0x36ba80, Func Offset: 0xc10
	// Line 1995, Address: 0x36ba84, Func Offset: 0xc14
	// Line 1960, Address: 0x36ba8c, Func Offset: 0xc1c
	// Line 1995, Address: 0x36ba90, Func Offset: 0xc20
	// Line 1960, Address: 0x36ba94, Func Offset: 0xc24
	// Line 1995, Address: 0x36baa4, Func Offset: 0xc34
	// Line 1959, Address: 0x36bab0, Func Offset: 0xc40
	// Line 1995, Address: 0x36bac8, Func Offset: 0xc58
	// Line 1963, Address: 0x36bad8, Func Offset: 0xc68
	// Line 1995, Address: 0x36badc, Func Offset: 0xc6c
	// Line 1963, Address: 0x36bae8, Func Offset: 0xc78
	// Line 1995, Address: 0x36baec, Func Offset: 0xc7c
	// Line 1967, Address: 0x36baf4, Func Offset: 0xc84
	// Line 1995, Address: 0x36baf8, Func Offset: 0xc88
	// Line 1967, Address: 0x36bb04, Func Offset: 0xc94
	// Line 1995, Address: 0x36bb0c, Func Offset: 0xc9c
	// Line 1969, Address: 0x36bb18, Func Offset: 0xca8
	// Line 1995, Address: 0x36bb1c, Func Offset: 0xcac
	// Line 1969, Address: 0x36bb24, Func Offset: 0xcb4
	// Line 1995, Address: 0x36bb34, Func Offset: 0xcc4
	// Line 1978, Address: 0x36bb54, Func Offset: 0xce4
	// Line 1995, Address: 0x36bb60, Func Offset: 0xcf0
	// Line 1984, Address: 0x36bb80, Func Offset: 0xd10
	// Line 1995, Address: 0x36bb84, Func Offset: 0xd14
	// Line 1984, Address: 0x36bbb4, Func Offset: 0xd44
	// Line 1995, Address: 0x36bbbc, Func Offset: 0xd4c
	// Line 1987, Address: 0x36bbd0, Func Offset: 0xd60
	// Line 1995, Address: 0x36bbd4, Func Offset: 0xd64
	// Line 1987, Address: 0x36bbdc, Func Offset: 0xd6c
	// Line 1995, Address: 0x36bbe0, Func Offset: 0xd70
	// Line 1987, Address: 0x36bbec, Func Offset: 0xd7c
	// Line 1995, Address: 0x36bbf0, Func Offset: 0xd80
	// Line 1987, Address: 0x36bbfc, Func Offset: 0xd8c
	// Line 1995, Address: 0x36bc00, Func Offset: 0xd90
	// Line 1987, Address: 0x36bc14, Func Offset: 0xda4
	// Line 1995, Address: 0x36bc18, Func Offset: 0xda8
	// Line 1987, Address: 0x36bc24, Func Offset: 0xdb4
	// Line 1995, Address: 0x36bc28, Func Offset: 0xdb8
	// Line 1987, Address: 0x36bc2c, Func Offset: 0xdbc
	// Line 1995, Address: 0x36bc50, Func Offset: 0xde0
	// Line 1987, Address: 0x36bc58, Func Offset: 0xde8
	// Line 1995, Address: 0x36bc60, Func Offset: 0xdf0
	// Line 1987, Address: 0x36bc68, Func Offset: 0xdf8
	// Line 1995, Address: 0x36bc70, Func Offset: 0xe00
	// Line 1987, Address: 0x36bc78, Func Offset: 0xe08
	// Line 1995, Address: 0x36bc88, Func Offset: 0xe18
	// Line 1987, Address: 0x36bc90, Func Offset: 0xe20
	// Line 1995, Address: 0x36bc9c, Func Offset: 0xe2c
	// Line 1987, Address: 0x36bca8, Func Offset: 0xe38
	// Line 1995, Address: 0x36bcbc, Func Offset: 0xe4c
	// Line 1987, Address: 0x36bcc0, Func Offset: 0xe50
	// Line 1995, Address: 0x36bcd0, Func Offset: 0xe60
	// Line 1987, Address: 0x36bcd8, Func Offset: 0xe68
	// Line 1995, Address: 0x36bce0, Func Offset: 0xe70
	// Line 1987, Address: 0x36bcec, Func Offset: 0xe7c
	// Line 1995, Address: 0x36bd04, Func Offset: 0xe94
	// Line 1991, Address: 0x36bd14, Func Offset: 0xea4
	// Line 1995, Address: 0x36bd20, Func Offset: 0xeb0
	// Line 1992, Address: 0x36bd38, Func Offset: 0xec8
	// Line 1995, Address: 0x36bd40, Func Offset: 0xed0
	// Line 1992, Address: 0x36bd98, Func Offset: 0xf28
	// Line 1995, Address: 0x36bd9c, Func Offset: 0xf2c
	// Line 1992, Address: 0x36bda4, Func Offset: 0xf34
	// Line 1995, Address: 0x36bda8, Func Offset: 0xf38
	// Line 1992, Address: 0x36bdac, Func Offset: 0xf3c
	// Line 1995, Address: 0x36bdb0, Func Offset: 0xf40
	// Line 1992, Address: 0x36bdb8, Func Offset: 0xf48
	// Line 1995, Address: 0x36bdbc, Func Offset: 0xf4c
	// Line 1992, Address: 0x36bde4, Func Offset: 0xf74
	// Line 1995, Address: 0x36bde8, Func Offset: 0xf78
	// Line 1992, Address: 0x36bdf0, Func Offset: 0xf80
	// Line 1995, Address: 0x36bdf8, Func Offset: 0xf88
	// Line 1992, Address: 0x36be1c, Func Offset: 0xfac
	// Line 1995, Address: 0x36be20, Func Offset: 0xfb0
	// Line 1992, Address: 0x36be34, Func Offset: 0xfc4
	// Line 1995, Address: 0x36be38, Func Offset: 0xfc8
	// Line 1992, Address: 0x36be4c, Func Offset: 0xfdc
	// Line 1995, Address: 0x36be50, Func Offset: 0xfe0
	// Line 1992, Address: 0x36be94, Func Offset: 0x1024
	// Line 1995, Address: 0x36be98, Func Offset: 0x1028
	// Line 1992, Address: 0x36bec0, Func Offset: 0x1050
	// Line 1995, Address: 0x36bec4, Func Offset: 0x1054
	// Line 1992, Address: 0x36bec8, Func Offset: 0x1058
	// Line 1995, Address: 0x36becc, Func Offset: 0x105c
	// Line 1992, Address: 0x36bf44, Func Offset: 0x10d4
	// Line 1995, Address: 0x36bf48, Func Offset: 0x10d8
	// Line 1992, Address: 0x36bf68, Func Offset: 0x10f8
	// Line 1995, Address: 0x36bf6c, Func Offset: 0x10fc
	// Line 1992, Address: 0x36bf80, Func Offset: 0x1110
	// Line 1995, Address: 0x36bf84, Func Offset: 0x1114
	// Line 1992, Address: 0x36bfc0, Func Offset: 0x1150
	// Line 1995, Address: 0x36bfd8, Func Offset: 0x1168
	// Line 1992, Address: 0x36bff0, Func Offset: 0x1180
	// Line 1995, Address: 0x36bff8, Func Offset: 0x1188
	// Line 1992, Address: 0x36c008, Func Offset: 0x1198
	// Line 1995, Address: 0x36c010, Func Offset: 0x11a0
	// Line 1992, Address: 0x36c018, Func Offset: 0x11a8
	// Line 1995, Address: 0x36c01c, Func Offset: 0x11ac
	// Line 1992, Address: 0x36c028, Func Offset: 0x11b8
	// Line 1995, Address: 0x36c048, Func Offset: 0x11d8
	// Line 1992, Address: 0x36c050, Func Offset: 0x11e0
	// Line 1995, Address: 0x36c078, Func Offset: 0x1208
	// Line 1992, Address: 0x36c080, Func Offset: 0x1210
	// Line 1995, Address: 0x36c0a0, Func Offset: 0x1230
	// Line 1992, Address: 0x36c0b0, Func Offset: 0x1240
	// Line 1995, Address: 0x36c0b8, Func Offset: 0x1248
	// Line 1992, Address: 0x36c0cc, Func Offset: 0x125c
	// Line 1995, Address: 0x36c0d0, Func Offset: 0x1260
	// Line 1992, Address: 0x36c0dc, Func Offset: 0x126c
	// Line 1995, Address: 0x36c0e0, Func Offset: 0x1270
	// Line 1992, Address: 0x36c0e4, Func Offset: 0x1274
	// Line 1995, Address: 0x36c0f0, Func Offset: 0x1280
	// Line 1992, Address: 0x36c100, Func Offset: 0x1290
	// Line 1995, Address: 0x36c10c, Func Offset: 0x129c
	// Line 1992, Address: 0x36c124, Func Offset: 0x12b4
	// Line 1995, Address: 0x36c12c, Func Offset: 0x12bc
	// Line 1992, Address: 0x36c17c, Func Offset: 0x130c
	// Line 1995, Address: 0x36c180, Func Offset: 0x1310
	// Line 1992, Address: 0x36c19c, Func Offset: 0x132c
	// Line 1995, Address: 0x36c1a0, Func Offset: 0x1330
	// Line 1992, Address: 0x36c1b8, Func Offset: 0x1348
	// Line 1995, Address: 0x36c1c0, Func Offset: 0x1350
	// Line 1992, Address: 0x36c1c8, Func Offset: 0x1358
	// Line 1995, Address: 0x36c1cc, Func Offset: 0x135c
	// Line 1992, Address: 0x36c1e0, Func Offset: 0x1370
	// Line 1995, Address: 0x36c1e4, Func Offset: 0x1374
	// Line 1992, Address: 0x36c1f0, Func Offset: 0x1380
	// Line 1995, Address: 0x36c1f4, Func Offset: 0x1384
	// Line 1992, Address: 0x36c20c, Func Offset: 0x139c
	// Line 1995, Address: 0x36c210, Func Offset: 0x13a0
	// Line 1992, Address: 0x36c218, Func Offset: 0x13a8
	// Line 1995, Address: 0x36c220, Func Offset: 0x13b0
	// Line 1992, Address: 0x36c250, Func Offset: 0x13e0
	// Line 1995, Address: 0x36c254, Func Offset: 0x13e4
	// Line 1992, Address: 0x36c284, Func Offset: 0x1414
	// Line 1995, Address: 0x36c28c, Func Offset: 0x141c
	// Line 1992, Address: 0x36c2e4, Func Offset: 0x1474
	// Line 1995, Address: 0x36c2e8, Func Offset: 0x1478
	// Line 1992, Address: 0x36c2f4, Func Offset: 0x1484
	// Line 1995, Address: 0x36c2f8, Func Offset: 0x1488
	// Line 1992, Address: 0x36c2fc, Func Offset: 0x148c
	// Line 1995, Address: 0x36c300, Func Offset: 0x1490
	// Line 1992, Address: 0x36c330, Func Offset: 0x14c0
	// Line 1995, Address: 0x36c334, Func Offset: 0x14c4
	// Line 1992, Address: 0x36c350, Func Offset: 0x14e0
	// Line 1995, Address: 0x36c358, Func Offset: 0x14e8
	// Line 1992, Address: 0x36c370, Func Offset: 0x1500
	// Line 1995, Address: 0x36c374, Func Offset: 0x1504
	// Line 1997, Address: 0x36c39c, Func Offset: 0x152c
	// Line 2015, Address: 0x36c3b0, Func Offset: 0x1540
	// Line 1997, Address: 0x36c3b4, Func Offset: 0x1544
	// Line 2015, Address: 0x36c3c0, Func Offset: 0x1550
	// Line 1997, Address: 0x36c3cc, Func Offset: 0x155c
	// Line 2015, Address: 0x36c3d0, Func Offset: 0x1560
	// Line 1997, Address: 0x36c3d4, Func Offset: 0x1564
	// Line 2015, Address: 0x36c3d8, Func Offset: 0x1568
	// Line 1997, Address: 0x36c3dc, Func Offset: 0x156c
	// Line 1999, Address: 0x36c410, Func Offset: 0x15a0
	// Line 2015, Address: 0x36c42c, Func Offset: 0x15bc
	// Line 2016, Address: 0x36c4cc, Func Offset: 0x165c
	// Line 2018, Address: 0x36c504, Func Offset: 0x1694
	// Line 2019, Address: 0x36c508, Func Offset: 0x1698
	// Line 2018, Address: 0x36c50c, Func Offset: 0x169c
	// Line 2020, Address: 0x36c514, Func Offset: 0x16a4
	// Line 2019, Address: 0x36c51c, Func Offset: 0x16ac
	// Line 2020, Address: 0x36c520, Func Offset: 0x16b0
	// Line 2019, Address: 0x36c524, Func Offset: 0x16b4
	// Line 2020, Address: 0x36c540, Func Offset: 0x16d0
	// Line 2022, Address: 0x36c548, Func Offset: 0x16d8
	// Line 1992, Address: 0x36c550, Func Offset: 0x16e0
	// Line 2022, Address: 0x36c564, Func Offset: 0x16f4
	// Line 2016, Address: 0x36c594, Func Offset: 0x1724
	// Line 2022, Address: 0x36c59c, Func Offset: 0x172c
	// Line 2016, Address: 0x36c5a0, Func Offset: 0x1730
	// Line 2022, Address: 0x36c5a4, Func Offset: 0x1734
	// Line 2016, Address: 0x36c5ac, Func Offset: 0x173c
	// Line 2022, Address: 0x36c5b8, Func Offset: 0x1748
	// Line 2016, Address: 0x36c5c4, Func Offset: 0x1754
	// Line 2023, Address: 0x36c5dc, Func Offset: 0x176c
	// Func End, Address: 0x36c63c, Func Offset: 0x17cc
}

// hazard_check__Q313cruise_bubble12CruiseBubble16state_missle_flyFR10zNMEHazardPv
// Start address: 0x36c640
uint8 hazard_check(zNMEHazard& haz, void* context)
{
	xVec3& loc;
	xVec3 offset;
	float32 max_dist;
	// Line 2371, Address: 0x36c640, Func Offset: 0
	// Line 2372, Address: 0x36c644, Func Offset: 0x4
	// Line 2373, Address: 0x36c64c, Func Offset: 0xc
	// Line 2374, Address: 0x36c658, Func Offset: 0x18
	// Line 2373, Address: 0x36c65c, Func Offset: 0x1c
	// Line 2374, Address: 0x36c66c, Func Offset: 0x2c
	// Line 2373, Address: 0x36c670, Func Offset: 0x30
	// Line 2372, Address: 0x36c674, Func Offset: 0x34
	// Line 2373, Address: 0x36c678, Func Offset: 0x38
	// Line 2374, Address: 0x36c684, Func Offset: 0x44
	// Line 2373, Address: 0x36c688, Func Offset: 0x48
	// Line 2374, Address: 0x36c694, Func Offset: 0x54
	// Line 2373, Address: 0x36c698, Func Offset: 0x58
	// Line 2375, Address: 0x36c6c8, Func Offset: 0x88
	// Line 2373, Address: 0x36c6cc, Func Offset: 0x8c
	// Line 2374, Address: 0x36c6d4, Func Offset: 0x94
	// Line 2375, Address: 0x36c6d8, Func Offset: 0x98
	// Line 2373, Address: 0x36c6dc, Func Offset: 0x9c
	// Line 2375, Address: 0x36c6e0, Func Offset: 0xa0
	// Line 2380, Address: 0x36c6f8, Func Offset: 0xb8
	// Line 2378, Address: 0x36c704, Func Offset: 0xc4
	// Line 2381, Address: 0x36c708, Func Offset: 0xc8
	// Func End, Address: 0x36c710, Func Offset: 0xd0
}

// start__Q313cruise_bubble12CruiseBubble19state_missle_appearFv
// Start address: 0x36c710
void start()
{
	xAnimPlay* aplay;
	xAnimSingle* asingle;
	// Line 1781, Address: 0x36c710, Func Offset: 0
	// Line 1783, Address: 0x36c714, Func Offset: 0x4
	// Line 1781, Address: 0x36c718, Func Offset: 0x8
	// Line 1784, Address: 0x36c71c, Func Offset: 0xc
	// Line 1781, Address: 0x36c720, Func Offset: 0x10
	// Line 1785, Address: 0x36c724, Func Offset: 0x14
	// Line 1783, Address: 0x36c728, Func Offset: 0x18
	// Line 1785, Address: 0x36c72c, Func Offset: 0x1c
	// Line 1789, Address: 0x36c734, Func Offset: 0x24
	// Line 1783, Address: 0x36c738, Func Offset: 0x28
	// Line 1789, Address: 0x36c73c, Func Offset: 0x2c
	// Line 1783, Address: 0x36c740, Func Offset: 0x30
	// Line 1784, Address: 0x36c748, Func Offset: 0x38
	// Line 1785, Address: 0x36c758, Func Offset: 0x48
	// Line 1789, Address: 0x36c764, Func Offset: 0x54
	// Line 1785, Address: 0x36c768, Func Offset: 0x58
	// Line 1789, Address: 0x36c76c, Func Offset: 0x5c
	// Line 1792, Address: 0x36c774, Func Offset: 0x64
	// Line 1793, Address: 0x36c8ac, Func Offset: 0x19c
	// Func End, Address: 0x36c8bc, Func Offset: 0x1ac
}

// stop__Q313cruise_bubble12CruiseBubble19state_missle_appearFv
// Start address: 0x36c8c0
void stop()
{
	// Line 1797, Address: 0x36c8c0, Func Offset: 0
	// Line 1798, Address: 0x36c8d0, Func Offset: 0x10
	// Func End, Address: 0x36c8d8, Func Offset: 0x18
}

// update__Q313cruise_bubble12CruiseBubble19state_missle_appearFf
// Start address: 0x36c8e0
state_enum_0 update(float32 dt)
{
	xAnimPlay* aplay;
	xAnimSingle* asingle;
	xAnimState* astate;
	float32 time;
	en_plyrpup pup;
	// Line 1801, Address: 0x36c8e0, Func Offset: 0
	// Line 1809, Address: 0x36c8f8, Func Offset: 0x18
	// Line 1801, Address: 0x36c8fc, Func Offset: 0x1c
	// Line 1809, Address: 0x36c900, Func Offset: 0x20
	// Line 1803, Address: 0x36c904, Func Offset: 0x24
	// Line 1806, Address: 0x36c908, Func Offset: 0x28
	// Line 1809, Address: 0x36c910, Func Offset: 0x30
	// Line 1811, Address: 0x36c91c, Func Offset: 0x3c
	// Line 1812, Address: 0x36c920, Func Offset: 0x40
	// Line 1811, Address: 0x36c924, Func Offset: 0x44
	// Line 1812, Address: 0x36c92c, Func Offset: 0x4c
	// Line 1815, Address: 0x36c984, Func Offset: 0xa4
	// Line 1818, Address: 0x36ca90, Func Offset: 0x1b0
	// Line 1815, Address: 0x36ca94, Func Offset: 0x1b4
	// Line 1818, Address: 0x36cac0, Func Offset: 0x1e0
	// Line 1819, Address: 0x36cac4, Func Offset: 0x1e4
	// Line 1820, Address: 0x36cad0, Func Offset: 0x1f0
	// Line 1821, Address: 0x36cae4, Func Offset: 0x204
	// Line 1822, Address: 0x36caf0, Func Offset: 0x210
	// Line 1826, Address: 0x36caf8, Func Offset: 0x218
	// Line 1827, Address: 0x36cb0c, Func Offset: 0x22c
	// Line 1832, Address: 0x36cb14, Func Offset: 0x234
	// Line 1833, Address: 0x36cb18, Func Offset: 0x238
	// Func End, Address: 0x36cb2c, Func Offset: 0x24c
}

// start__Q313cruise_bubble12CruiseBubble17state_player_waitFv
// Start address: 0x36cb30
void start()
{
	// Line 1763, Address: 0x36cb30, Func Offset: 0
	// Line 1764, Address: 0x36cb34, Func Offset: 0x4
	// Line 1763, Address: 0x36cb38, Func Offset: 0x8
	// Line 1764, Address: 0x36cb40, Func Offset: 0x10
	// Line 1765, Address: 0x36cb88, Func Offset: 0x58
	// Func End, Address: 0x36cb98, Func Offset: 0x68
}

// update__Q313cruise_bubble12CruiseBubble17state_player_waitFf
// Start address: 0x36cba0
state_enum_0 update()
{
	// Line 1771, Address: 0x36cba0, Func Offset: 0
	// Func End, Address: 0x36cba8, Func Offset: 0x8
}

// start__Q313cruise_bubble12CruiseBubble17state_player_fireFv
// Start address: 0x36cbb0
void state_player_fire::start()
{
	en_plyrpup pup;
	// Line 1574, Address: 0x36cbb0, Func Offset: 0
	// Line 1577, Address: 0x36cbb4, Func Offset: 0x4
	// Line 1574, Address: 0x36cbb8, Func Offset: 0x8
	// Line 1575, Address: 0x36cbc8, Func Offset: 0x18
	// Line 1577, Address: 0x36cbcc, Func Offset: 0x1c
	// Line 1578, Address: 0x36cbd0, Func Offset: 0x20
	// Line 1579, Address: 0x36cbdc, Func Offset: 0x2c
	// Line 1580, Address: 0x36cc74, Func Offset: 0xc4
	// Line 1582, Address: 0x36cc90, Func Offset: 0xe0
	// Line 1585, Address: 0x36cc98, Func Offset: 0xe8
	// Line 1586, Address: 0x36cd2c, Func Offset: 0x17c
	// Line 1590, Address: 0x36cd48, Func Offset: 0x198
	// Line 1592, Address: 0x36cd8c, Func Offset: 0x1dc
	// Line 1599, Address: 0x36ceec, Func Offset: 0x33c
	// Line 1601, Address: 0x36cf44, Func Offset: 0x394
	// Line 1602, Address: 0x36d180, Func Offset: 0x5d0
	// Line 1603, Address: 0x36d190, Func Offset: 0x5e0
	// Line 1602, Address: 0x36d194, Func Offset: 0x5e4
	// Line 1603, Address: 0x36d1a0, Func Offset: 0x5f0
	// Line 1604, Address: 0x36d1b0, Func Offset: 0x600
	// Line 1606, Address: 0x36d1b8, Func Offset: 0x608
	// Line 1579, Address: 0x36d1c4, Func Offset: 0x614
	// Line 1606, Address: 0x36d1cc, Func Offset: 0x61c
	// Line 1579, Address: 0x36d1d0, Func Offset: 0x620
	// Line 1606, Address: 0x36d1d4, Func Offset: 0x624
	// Line 1579, Address: 0x36d1dc, Func Offset: 0x62c
	// Line 1606, Address: 0x36d1f0, Func Offset: 0x640
	// Line 1585, Address: 0x36d208, Func Offset: 0x658
	// Line 1606, Address: 0x36d218, Func Offset: 0x668
	// Line 1585, Address: 0x36d220, Func Offset: 0x670
	// Line 1606, Address: 0x36d234, Func Offset: 0x684
	// Line 1592, Address: 0x36d258, Func Offset: 0x6a8
	// Line 1606, Address: 0x36d264, Func Offset: 0x6b4
	// Line 1592, Address: 0x36d274, Func Offset: 0x6c4
	// Line 1606, Address: 0x36d280, Func Offset: 0x6d0
	// Line 1601, Address: 0x36d284, Func Offset: 0x6d4
	// Line 1606, Address: 0x36d294, Func Offset: 0x6e4
	// Line 1601, Address: 0x36d29c, Func Offset: 0x6ec
	// Line 1606, Address: 0x36d2b0, Func Offset: 0x700
	// Func End, Address: 0x36d2dc, Func Offset: 0x72c
}

// stop__Q313cruise_bubble12CruiseBubble17state_player_fireFv
// Start address: 0x36d2e0
void stop()
{
	// Line 1609, Address: 0x36d2e0, Func Offset: 0
	// Line 1610, Address: 0x36d2e4, Func Offset: 0x4
	// Line 1609, Address: 0x36d2e8, Func Offset: 0x8
	// Line 1610, Address: 0x36d2f0, Func Offset: 0x10
	// Line 1611, Address: 0x36d338, Func Offset: 0x58
	// Func End, Address: 0x36d348, Func Offset: 0x68
}

// update__Q313cruise_bubble12CruiseBubble17state_player_fireFf
// Start address: 0x36d350
state_enum_0 state_player_fire::update(float32 dt)
{
	xAnimSingle* asingle;
	xAnimState* astate;
	float32 max_time;
	float32 time;
	// Line 1614, Address: 0x36d350, Func Offset: 0
	// Line 1616, Address: 0x36d368, Func Offset: 0x18
	// Line 1623, Address: 0x36d77c, Func Offset: 0x42c
	// Line 1620, Address: 0x36d780, Func Offset: 0x430
	// Line 1623, Address: 0x36d784, Func Offset: 0x434
	// Line 1620, Address: 0x36d788, Func Offset: 0x438
	// Line 1621, Address: 0x36d798, Func Offset: 0x448
	// Line 1623, Address: 0x36d79c, Func Offset: 0x44c
	// Line 1626, Address: 0x36d7b0, Func Offset: 0x460
	// Line 1627, Address: 0x36d7b4, Func Offset: 0x464
	// Line 1629, Address: 0x36d7b8, Func Offset: 0x468
	// Line 1626, Address: 0x36d7bc, Func Offset: 0x46c
	// Line 1629, Address: 0x36d7c0, Func Offset: 0x470
	// Line 1632, Address: 0x36d7dc, Func Offset: 0x48c
	// Line 1635, Address: 0x36d824, Func Offset: 0x4d4
	// Line 1636, Address: 0x36d830, Func Offset: 0x4e0
	// Line 1642, Address: 0x36d838, Func Offset: 0x4e8
	// Line 1643, Address: 0x36d83c, Func Offset: 0x4ec
	// Func End, Address: 0x36d854, Func Offset: 0x504
}

// start__Q313cruise_bubble12CruiseBubble16state_player_aimFv
// Start address: 0x36d860
void state_player_aim::start()
{
	xVec3& player_dir;
	// Line 1474, Address: 0x36d860, Func Offset: 0
	// Line 1475, Address: 0x36d864, Func Offset: 0x4
	// Line 1474, Address: 0x36d868, Func Offset: 0x8
	// Line 1475, Address: 0x36d86c, Func Offset: 0xc
	// Line 1474, Address: 0x36d870, Func Offset: 0x10
	// Line 1475, Address: 0x36d878, Func Offset: 0x18
	// Line 1477, Address: 0x36d87c, Func Offset: 0x1c
	// Line 1475, Address: 0x36d880, Func Offset: 0x20
	// Line 1477, Address: 0x36d888, Func Offset: 0x28
	// Line 1478, Address: 0x36d894, Func Offset: 0x34
	// Line 1482, Address: 0x36d8ac, Func Offset: 0x4c
	// Line 1479, Address: 0x36d8b0, Func Offset: 0x50
	// Line 1480, Address: 0x36d8b4, Func Offset: 0x54
	// Line 1482, Address: 0x36d8b8, Func Offset: 0x58
	// Line 1484, Address: 0x36d8d0, Func Offset: 0x70
	// Line 1485, Address: 0x36d914, Func Offset: 0xb4
	// Func End, Address: 0x36d924, Func Offset: 0xc4
}

// stop__Q313cruise_bubble12CruiseBubble16state_player_aimFv
// Start address: 0x36d930
void stop()
{
	// Line 1488, Address: 0x36d930, Func Offset: 0
	// Line 1489, Address: 0x36d944, Func Offset: 0x14
	// Func End, Address: 0x36d94c, Func Offset: 0x1c
}

// update__Q313cruise_bubble12CruiseBubble16state_player_aimFf
// Start address: 0x36d950
state_enum_0 state_player_aim::update(float32 dt)
{
	// Line 1491, Address: 0x36d950, Func Offset: 0
	// Line 1492, Address: 0x36d968, Func Offset: 0x18
	// Line 1493, Address: 0x36d978, Func Offset: 0x28
	// Line 1494, Address: 0x36d98c, Func Offset: 0x3c
	// Line 1496, Address: 0x36dad0, Func Offset: 0x180
	// Line 1497, Address: 0x36db00, Func Offset: 0x1b0
	// Line 1496, Address: 0x36db04, Func Offset: 0x1b4
	// Line 1497, Address: 0x36db10, Func Offset: 0x1c0
	// Line 1496, Address: 0x36db14, Func Offset: 0x1c4
	// Line 1497, Address: 0x36db34, Func Offset: 0x1e4
	// Line 1499, Address: 0x36db60, Func Offset: 0x210
	// Line 1497, Address: 0x36db64, Func Offset: 0x214
	// Line 1499, Address: 0x36db84, Func Offset: 0x234
	// Line 1500, Address: 0x36db98, Func Offset: 0x248
	// Line 1502, Address: 0x36dba0, Func Offset: 0x250
	// Line 1494, Address: 0x36dbc8, Func Offset: 0x278
	// Line 1502, Address: 0x36dbf0, Func Offset: 0x2a0
	// Line 1494, Address: 0x36dbf8, Func Offset: 0x2a8
	// Line 1503, Address: 0x36dc10, Func Offset: 0x2c0
	// Func End, Address: 0x36dc2c, Func Offset: 0x2dc
}

// start__Q313cruise_bubble12CruiseBubble17state_player_haltFv
// Start address: 0x36dc30
void state_player_halt::start()
{
	// Line 1432, Address: 0x36dc30, Func Offset: 0
	// Line 1433, Address: 0x36dc34, Func Offset: 0x4
	// Func End, Address: 0x36dc3c, Func Offset: 0xc
}

// stop__Q313cruise_bubble12CruiseBubble17state_player_haltFv
// Start address: 0x36dc40
void stop()
{
	// Line 1436, Address: 0x36dc40, Func Offset: 0
	// Line 1437, Address: 0x36dc54, Func Offset: 0x14
	// Func End, Address: 0x36dc5c, Func Offset: 0x1c
}

// update__Q313cruise_bubble12CruiseBubble17state_player_haltFf
// Start address: 0x36dc60
state_enum_0 state_player_halt::update(float32 dt)
{
	xVec3 dmotion;
	// Line 1439, Address: 0x36dc60, Func Offset: 0
	// Line 1440, Address: 0x36dc64, Func Offset: 0x4
	// Line 1443, Address: 0x36dc70, Func Offset: 0x10
	// Line 1451, Address: 0x36dc7c, Func Offset: 0x1c
	// Line 1452, Address: 0x36dcd8, Func Offset: 0x78
	// Line 1451, Address: 0x36dce8, Func Offset: 0x88
	// Line 1452, Address: 0x36dd20, Func Offset: 0xc0
	// Line 1451, Address: 0x36dd24, Func Offset: 0xc4
	// Line 1452, Address: 0x36dd28, Func Offset: 0xc8
	// Line 1453, Address: 0x36dd40, Func Offset: 0xe0
	// Line 1457, Address: 0x36dd48, Func Offset: 0xe8
	// Line 1447, Address: 0x36dd8c, Func Offset: 0x12c
	// Line 1457, Address: 0x36dd90, Func Offset: 0x130
	// Line 1460, Address: 0x36dd98, Func Offset: 0x138
	// Func End, Address: 0x36dda4, Func Offset: 0x144
}

