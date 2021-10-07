



void insert_animations(xAnimTable& table);
uint8 update(xScene* sc, float32 dt);
void deinit();
void load_settings(xIniFile& ini);
void load(xBase& data, xDynAsset& asset);
void init_cache();
void start();
int32 find_nearest_hook(xVec3& loc);
uint32 check_anim_hit_to_death();
uint32 check_anim_hit_to_cycle();
uint32 check_anim_hit_to_bottom();
uint32 check_anim_hit_to_top();
uint32 check_anim_hit_to_dive();
uint32 check_anim_mount_to_cycle_start();
uint32 check_anim_start();
uint8 find_drop_off();
void move_wedgie(xVec3& stretch_loc);
xVec2 stick_position(uint32 controller);
void start();
void stop();
state_enum_1 update(xScene& s, float32& dt);
uint8 repath(xScene& s);
void trigger_collision(env_info& ei, float32 mag, xCollis& coll);
float32 trigger_collision(ent_info& ei, float32 mag);
uint8 collide(xCollis& coll, xSphere& o, xEnt& ent);
xSphere player_bound();
void collide_start(xScene& s);
void render();
void start();
void stop();
state_enum_1 update(float32& dt);
void render();

// insert_animations__12bungee_stateFR10xAnimTable
// Start address: 0x31a690
void insert_animations(xAnimTable& table)
{
	int8* start_to;
	int8* start_from;
	// Line 2902, Address: 0x31a690, Func Offset: 0
	// Line 2910, Address: 0x31a694, Func Offset: 0x4
	// Line 2902, Address: 0x31a698, Func Offset: 0x8
	// Line 2910, Address: 0x31a69c, Func Offset: 0xc
	// Line 2902, Address: 0x31a6a0, Func Offset: 0x10
	// Line 2910, Address: 0x31a6a4, Func Offset: 0x14
	// Line 2911, Address: 0x31a6e4, Func Offset: 0x54
	// Line 2912, Address: 0x31a72c, Func Offset: 0x9c
	// Line 2913, Address: 0x31a774, Func Offset: 0xe4
	// Line 2914, Address: 0x31a7bc, Func Offset: 0x12c
	// Line 2915, Address: 0x31a804, Func Offset: 0x174
	// Line 2916, Address: 0x31a84c, Func Offset: 0x1bc
	// Line 2925, Address: 0x31a894, Func Offset: 0x204
	// Line 2935, Address: 0x31a8d4, Func Offset: 0x244
	// Line 2925, Address: 0x31a8d8, Func Offset: 0x248
	// Line 2935, Address: 0x31a8dc, Func Offset: 0x24c
	// Line 2925, Address: 0x31a8e0, Func Offset: 0x250
	// Line 2935, Address: 0x31a8e4, Func Offset: 0x254
	// Line 2937, Address: 0x31a924, Func Offset: 0x294
	// Line 2938, Address: 0x31a96c, Func Offset: 0x2dc
	// Line 2937, Address: 0x31a970, Func Offset: 0x2e0
	// Line 2938, Address: 0x31a974, Func Offset: 0x2e4
	// Line 2940, Address: 0x31a9b8, Func Offset: 0x328
	// Line 2938, Address: 0x31a9bc, Func Offset: 0x32c
	// Line 2940, Address: 0x31a9c0, Func Offset: 0x330
	// Line 2941, Address: 0x31aa04, Func Offset: 0x374
	// Line 2940, Address: 0x31aa08, Func Offset: 0x378
	// Line 2941, Address: 0x31aa0c, Func Offset: 0x37c
	// Line 2942, Address: 0x31aa50, Func Offset: 0x3c0
	// Line 2941, Address: 0x31aa54, Func Offset: 0x3c4
	// Line 2942, Address: 0x31aa58, Func Offset: 0x3c8
	// Line 2943, Address: 0x31aa9c, Func Offset: 0x40c
	// Line 2942, Address: 0x31aaa0, Func Offset: 0x410
	// Line 2943, Address: 0x31aaa4, Func Offset: 0x414
	// Line 2946, Address: 0x31aae8, Func Offset: 0x458
	// Line 2943, Address: 0x31aaec, Func Offset: 0x45c
	// Line 2946, Address: 0x31aaf0, Func Offset: 0x460
	// Line 2948, Address: 0x31ab34, Func Offset: 0x4a4
	// Line 2946, Address: 0x31ab38, Func Offset: 0x4a8
	// Line 2948, Address: 0x31ab3c, Func Offset: 0x4ac
	// Line 2949, Address: 0x31ab80, Func Offset: 0x4f0
	// Line 2950, Address: 0x31abc8, Func Offset: 0x538
	// Line 2951, Address: 0x31ac10, Func Offset: 0x580
	// Line 2952, Address: 0x31ac58, Func Offset: 0x5c8
	// Line 2955, Address: 0x31aca0, Func Offset: 0x610
	// Line 2959, Address: 0x31acec, Func Offset: 0x65c
	// Func End, Address: 0x31acfc, Func Offset: 0x66c
}

// update__12bungee_stateFP6xScenef
// Start address: 0x31ad00
uint8 update(xScene* sc, float32 dt)
{
	state_enum_1 newtype;
	// Line 2840, Address: 0x31ad00, Func Offset: 0
	// Line 2841, Address: 0x31ad04, Func Offset: 0x4
	// Line 2840, Address: 0x31ad08, Func Offset: 0x8
	// Line 2841, Address: 0x31ad14, Func Offset: 0x14
	// Line 2842, Address: 0x31ad2c, Func Offset: 0x2c
	// Line 2843, Address: 0x31ad38, Func Offset: 0x38
	// Line 2842, Address: 0x31ad40, Func Offset: 0x40
	// Line 2843, Address: 0x31ad44, Func Offset: 0x44
	// Line 2841, Address: 0x31ad58, Func Offset: 0x58
	// Line 2844, Address: 0x31ad60, Func Offset: 0x60
	// Line 2845, Address: 0x31ad68, Func Offset: 0x68
	// Line 2848, Address: 0x31ad78, Func Offset: 0x78
	// Line 2849, Address: 0x31ada0, Func Offset: 0xa0
	// Line 2851, Address: 0x31adac, Func Offset: 0xac
	// Line 2856, Address: 0x31adb8, Func Offset: 0xb8
	// Line 2857, Address: 0x31adc8, Func Offset: 0xc8
	// Line 2858, Address: 0x31ade4, Func Offset: 0xe4
	// Line 2859, Address: 0x31adf4, Func Offset: 0xf4
	// Line 2845, Address: 0x31ae00, Func Offset: 0x100
	// Line 2853, Address: 0x31ae08, Func Offset: 0x108
	// Line 2859, Address: 0x31ae0c, Func Offset: 0x10c
	// Line 2853, Address: 0x31ae10, Func Offset: 0x110
	// Line 2859, Address: 0x31ae14, Func Offset: 0x114
	// Line 2853, Address: 0x31ae40, Func Offset: 0x140
	// Line 2859, Address: 0x31ae44, Func Offset: 0x144
	// Line 2853, Address: 0x31ae54, Func Offset: 0x154
	// Line 2859, Address: 0x31ae58, Func Offset: 0x158
	// Line 2860, Address: 0x31ae5c, Func Offset: 0x15c
	// Line 2861, Address: 0x31ae6c, Func Offset: 0x16c
	// Line 2862, Address: 0x31ae78, Func Offset: 0x178
	// Func End, Address: 0x31ae8c, Func Offset: 0x18c
}

// deinit__12bungee_stateFv
// Start address: 0x31ae90
void deinit()
{
	// Line 2823, Address: 0x31ae90, Func Offset: 0
	// Line 2824, Address: 0x31aea4, Func Offset: 0x14
	// Func End, Address: 0x31aeac, Func Offset: 0x1c
}

// load_settings__12bungee_stateFR8xIniFile
// Start address: 0x31aeb0
void load_settings(xIniFile& ini)
{
	// Line 2771, Address: 0x31aeb0, Func Offset: 0
	// Line 2778, Address: 0x31aeb4, Func Offset: 0x4
	// Line 2771, Address: 0x31aeb8, Func Offset: 0x8
	// Line 2778, Address: 0x31aebc, Func Offset: 0xc
	// Line 2771, Address: 0x31aec0, Func Offset: 0x10
	// Line 2778, Address: 0x31aec4, Func Offset: 0x14
	// Line 2779, Address: 0x31af0c, Func Offset: 0x5c
	// Line 2780, Address: 0x31af5c, Func Offset: 0xac
	// Line 2781, Address: 0x31afac, Func Offset: 0xfc
	// Line 2782, Address: 0x31affc, Func Offset: 0x14c
	// Line 2783, Address: 0x31b04c, Func Offset: 0x19c
	// Line 2784, Address: 0x31b09c, Func Offset: 0x1ec
	// Line 2785, Address: 0x31b0e8, Func Offset: 0x238
	// Line 2786, Address: 0x31b138, Func Offset: 0x288
	// Line 2787, Address: 0x31b190, Func Offset: 0x2e0
	// Line 2788, Address: 0x31b1e0, Func Offset: 0x330
	// Line 2789, Address: 0x31b230, Func Offset: 0x380
	// Line 2790, Address: 0x31b280, Func Offset: 0x3d0
	// Line 2791, Address: 0x31b2dc, Func Offset: 0x42c
	// Line 2792, Address: 0x31b328, Func Offset: 0x478
	// Line 2793, Address: 0x31b370, Func Offset: 0x4c0
	// Line 2796, Address: 0x31b3d0, Func Offset: 0x520
	// Func End, Address: 0x31b51c, Func Offset: 0x66c
}

// load__12bungee_stateFR5xBaseR9xDynAssetUi
// Start address: 0x31b520
void load(xBase& data, xDynAsset& asset)
{
	hook_type& hook;
	// Line 2753, Address: 0x31b520, Func Offset: 0
	// Line 2755, Address: 0x31b534, Func Offset: 0x14
	// Line 2757, Address: 0x31b53c, Func Offset: 0x1c
	// Line 2758, Address: 0x31b540, Func Offset: 0x20
	// Line 2760, Address: 0x31b558, Func Offset: 0x38
	// Line 2768, Address: 0x31b568, Func Offset: 0x48
	// Func End, Address: 0x31b57c, Func Offset: 0x5c
}

// init_cache__Q212bungee_state21@unnamed@zWadEnt_cpp@Fv
// Start address: 0x31b580
void init_cache()
{
	zScene& s;
	hook_type* it;
	hook_type* end;
	int32 imax;
	uint32 drop_type_id;
	int32 i;
	uint32 size;
	xDynAsset* a;
	// Line 2714, Address: 0x31b580, Func Offset: 0
	// Line 2716, Address: 0x31b584, Func Offset: 0x4
	// Line 2714, Address: 0x31b588, Func Offset: 0x8
	// Line 2716, Address: 0x31b59c, Func Offset: 0x1c
	// Line 2717, Address: 0x31b5a0, Func Offset: 0x20
	// Line 2718, Address: 0x31b5a8, Func Offset: 0x28
	// Line 2719, Address: 0x31b5ac, Func Offset: 0x2c
	// Line 2720, Address: 0x31b5c0, Func Offset: 0x40
	// Line 2724, Address: 0x31b600, Func Offset: 0x80
	// Line 2725, Address: 0x31b608, Func Offset: 0x88
	// Line 2726, Address: 0x31b614, Func Offset: 0x94
	// Line 2725, Address: 0x31b618, Func Offset: 0x98
	// Line 2726, Address: 0x31b61c, Func Offset: 0x9c
	// Line 2727, Address: 0x31b624, Func Offset: 0xa4
	// Line 2726, Address: 0x31b628, Func Offset: 0xa8
	// Line 2727, Address: 0x31b62c, Func Offset: 0xac
	// Line 2735, Address: 0x31b634, Func Offset: 0xb4
	// Line 2730, Address: 0x31b63c, Func Offset: 0xbc
	// Line 2735, Address: 0x31b648, Func Offset: 0xc8
	// Line 2730, Address: 0x31b654, Func Offset: 0xd4
	// Line 2735, Address: 0x31b658, Func Offset: 0xd8
	// Line 2732, Address: 0x31b68c, Func Offset: 0x10c
	// Line 2735, Address: 0x31b690, Func Offset: 0x110
	// Line 2732, Address: 0x31b6ac, Func Offset: 0x12c
	// Line 2735, Address: 0x31b6b0, Func Offset: 0x130
	// Line 2732, Address: 0x31b6c0, Func Offset: 0x140
	// Line 2735, Address: 0x31b6c4, Func Offset: 0x144
	// Func End, Address: 0x31b708, Func Offset: 0x188
}

// start__Q212bungee_state21@unnamed@zWadEnt_cpp@Fv
// Start address: 0x31b710
void start()
{
	xEnt& player;
	int8* anim_name;
	int32 found;
	// Line 2629, Address: 0x31b710, Func Offset: 0
	// Line 2630, Address: 0x31b714, Func Offset: 0x4
	// Line 2629, Address: 0x31b718, Func Offset: 0x8
	// Line 2630, Address: 0x31b724, Func Offset: 0x14
	// Line 2648, Address: 0x31b738, Func Offset: 0x28
	// Line 2650, Address: 0x31b73c, Func Offset: 0x2c
	// Line 2648, Address: 0x31b744, Func Offset: 0x34
	// Line 2650, Address: 0x31b748, Func Offset: 0x38
	// Line 2649, Address: 0x31b750, Func Offset: 0x40
	// Line 2650, Address: 0x31b760, Func Offset: 0x50
	// Line 2663, Address: 0x31b880, Func Offset: 0x170
	// Line 2664, Address: 0x31b884, Func Offset: 0x174
	// Line 2674, Address: 0x31b88c, Func Offset: 0x17c
	// Line 2675, Address: 0x31b89c, Func Offset: 0x18c
	// Line 2676, Address: 0x31b8a8, Func Offset: 0x198
	// Line 2675, Address: 0x31b8ac, Func Offset: 0x19c
	// Line 2676, Address: 0x31b8b0, Func Offset: 0x1a0
	// Line 2675, Address: 0x31b8b4, Func Offset: 0x1a4
	// Line 2676, Address: 0x31b8b8, Func Offset: 0x1a8
	// Line 2677, Address: 0x31b8c0, Func Offset: 0x1b0
	// Line 2678, Address: 0x31b8d0, Func Offset: 0x1c0
	// Func End, Address: 0x31b934, Func Offset: 0x224
}

// find_nearest_hook__Q212bungee_state21@unnamed@zWadEnt_cpp@FRC5xVec3
// Start address: 0x31b940
int32 find_nearest_hook(xVec3& loc)
{
	int32 found;
	float32 closest;
	int32 i;
	float32 attach_dist;
	xVec3 dloc;
	// Line 2613, Address: 0x31b940, Func Offset: 0
	// Line 2615, Address: 0x31b944, Func Offset: 0x4
	// Line 2614, Address: 0x31b94c, Func Offset: 0xc
	// Line 2616, Address: 0x31b950, Func Offset: 0x10
	// Line 2615, Address: 0x31b958, Func Offset: 0x18
	// Line 2616, Address: 0x31b95c, Func Offset: 0x1c
	// Line 2620, Address: 0x31b9ac, Func Offset: 0x6c
	// Line 2618, Address: 0x31b9b0, Func Offset: 0x70
	// Line 2620, Address: 0x31b9b4, Func Offset: 0x74
	// Line 2622, Address: 0x31b9c4, Func Offset: 0x84
	// Line 2620, Address: 0x31b9c8, Func Offset: 0x88
	// Line 2621, Address: 0x31ba7c, Func Offset: 0x13c
	// Line 2622, Address: 0x31ba88, Func Offset: 0x148
	// Line 2623, Address: 0x31baa0, Func Offset: 0x160
	// Line 2624, Address: 0x31baa8, Func Offset: 0x168
	// Line 2626, Address: 0x31bab8, Func Offset: 0x178
	// Func End, Address: 0x31bac0, Func Offset: 0x180
}

// check_anim_hit_to_death__Q212bungee_state21@unnamed@zWadEnt_cpp@FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x31bac0
uint32 check_anim_hit_to_death()
{
	// Line 2608, Address: 0x31bac0, Func Offset: 0
	// Line 2610, Address: 0x31bad8, Func Offset: 0x18
	// Func End, Address: 0x31bae0, Func Offset: 0x20
}

// check_anim_hit_to_cycle__Q212bungee_state21@unnamed@zWadEnt_cpp@FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x31bae0
uint32 check_anim_hit_to_cycle()
{
	// Line 2602, Address: 0x31bae0, Func Offset: 0
	// Line 2603, Address: 0x31baf8, Func Offset: 0x18
	// Line 2604, Address: 0x31bb2c, Func Offset: 0x4c
	// Func End, Address: 0x31bb34, Func Offset: 0x54
}

// check_anim_hit_to_bottom__Q212bungee_state21@unnamed@zWadEnt_cpp@FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x31bb40
uint32 check_anim_hit_to_bottom()
{
	// Line 2597, Address: 0x31bb40, Func Offset: 0
	// Line 2598, Address: 0x31bb58, Func Offset: 0x18
	// Line 2599, Address: 0x31bb80, Func Offset: 0x40
	// Func End, Address: 0x31bb88, Func Offset: 0x48
}

// check_anim_hit_to_top__Q212bungee_state21@unnamed@zWadEnt_cpp@FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x31bb90
uint32 check_anim_hit_to_top()
{
	// Line 2592, Address: 0x31bb90, Func Offset: 0
	// Line 2593, Address: 0x31bba8, Func Offset: 0x18
	// Line 2594, Address: 0x31bbd0, Func Offset: 0x40
	// Func End, Address: 0x31bbd8, Func Offset: 0x48
}

// check_anim_hit_to_dive__Q212bungee_state21@unnamed@zWadEnt_cpp@FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x31bbe0
uint32 check_anim_hit_to_dive()
{
	// Line 2587, Address: 0x31bbe0, Func Offset: 0
	// Line 2588, Address: 0x31bbf8, Func Offset: 0x18
	// Line 2589, Address: 0x31bc20, Func Offset: 0x40
	// Func End, Address: 0x31bc28, Func Offset: 0x48
}

// check_anim_mount_to_cycle_start__Q212bungee_state21@unnamed@zWadEnt_cpp@FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x31bc30
uint32 check_anim_mount_to_cycle_start()
{
	// Line 2583, Address: 0x31bc30, Func Offset: 0
	// Func End, Address: 0x31bc38, Func Offset: 0x8
}

// check_anim_start__Q212bungee_state21@unnamed@zWadEnt_cpp@FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x31bc40
uint32 check_anim_start()
{
	// Line 2578, Address: 0x31bc40, Func Offset: 0
	// Func End, Address: 0x31bc48, Func Offset: 0x8
}

// find_drop_off__Q212bungee_state21@unnamed@zWadEnt_cpp@Fv
// Start address: 0x31bc50
uint8 find_drop_off()
{
	int32 near_index;
	float32 near_dist2;
	int32 i;
	xVec3 dloc;
	// Line 706, Address: 0x31bc50, Func Offset: 0
	// Line 708, Address: 0x31bc54, Func Offset: 0x4
	// Line 707, Address: 0x31bc5c, Func Offset: 0xc
	// Line 709, Address: 0x31bc60, Func Offset: 0x10
	// Line 708, Address: 0x31bc6c, Func Offset: 0x1c
	// Line 709, Address: 0x31bc70, Func Offset: 0x20
	// Line 708, Address: 0x31bc74, Func Offset: 0x24
	// Line 709, Address: 0x31bc78, Func Offset: 0x28
	// Line 712, Address: 0x31bcb8, Func Offset: 0x68
	// Line 713, Address: 0x31bd20, Func Offset: 0xd0
	// Line 714, Address: 0x31bd2c, Func Offset: 0xdc
	// Line 716, Address: 0x31bd38, Func Offset: 0xe8
	// Line 715, Address: 0x31bd3c, Func Offset: 0xec
	// Line 717, Address: 0x31bd40, Func Offset: 0xf0
	// Line 719, Address: 0x31bd50, Func Offset: 0x100
	// Line 737, Address: 0x31bd5c, Func Offset: 0x10c
	// Line 724, Address: 0x31bda0, Func Offset: 0x150
	// Line 737, Address: 0x31bda4, Func Offset: 0x154
	// Line 738, Address: 0x31bdcc, Func Offset: 0x17c
	// Func End, Address: 0x31bdd4, Func Offset: 0x184
}

// move_wedgie__Q212bungee_state21@unnamed@zWadEnt_cpp@FRC5xVec3
// Start address: 0x31bde0
void move_wedgie(xVec3& stretch_loc)
{
	xMat4x3 tm;
	xMat4x3 mworld;
	xMat4x3 mlocal;
	xVec3 tweak_cord_off;
	uint8 registered;
	// Line 648, Address: 0x31bde0, Func Offset: 0
	// Line 653, Address: 0x31bde4, Func Offset: 0x4
	// Line 648, Address: 0x31bde8, Func Offset: 0x8
	// Line 653, Address: 0x31bdf4, Func Offset: 0x14
	// Line 671, Address: 0x31be18, Func Offset: 0x38
	// Line 673, Address: 0x31be20, Func Offset: 0x40
	// Line 671, Address: 0x31be24, Func Offset: 0x44
	// Line 673, Address: 0x31be2c, Func Offset: 0x4c
	// Line 671, Address: 0x31be30, Func Offset: 0x50
	// Line 673, Address: 0x31beb0, Func Offset: 0xd0
	// Line 674, Address: 0x31bf18, Func Offset: 0x138
	// Line 673, Address: 0x31bf1c, Func Offset: 0x13c
	// Line 674, Address: 0x31bf20, Func Offset: 0x140
	// Line 673, Address: 0x31bf24, Func Offset: 0x144
	// Line 674, Address: 0x31bf28, Func Offset: 0x148
	// Line 673, Address: 0x31bf2c, Func Offset: 0x14c
	// Line 674, Address: 0x31bf44, Func Offset: 0x164
	// Line 679, Address: 0x31bf5c, Func Offset: 0x17c
	// Line 675, Address: 0x31bf60, Func Offset: 0x180
	// Line 674, Address: 0x31bf68, Func Offset: 0x188
	// Line 675, Address: 0x31bf6c, Func Offset: 0x18c
	// Line 679, Address: 0x31bf78, Func Offset: 0x198
	// Line 681, Address: 0x31bf80, Func Offset: 0x1a0
	// Line 686, Address: 0x31bf88, Func Offset: 0x1a8
	// Line 688, Address: 0x31bf8c, Func Offset: 0x1ac
	// Line 686, Address: 0x31bf90, Func Offset: 0x1b0
	// Line 688, Address: 0x31bf94, Func Offset: 0x1b4
	// Line 686, Address: 0x31bf98, Func Offset: 0x1b8
	// Line 688, Address: 0x31bf9c, Func Offset: 0x1bc
	// Line 686, Address: 0x31bfa0, Func Offset: 0x1c0
	// Line 688, Address: 0x31bfcc, Func Offset: 0x1ec
	// Line 689, Address: 0x31bfd4, Func Offset: 0x1f4
	// Line 696, Address: 0x31c060, Func Offset: 0x280
	// Func End, Address: 0x31c074, Func Offset: 0x294
}

// stick_position__Q212bungee_state11BungeeStateFUi
// Start address: 0x31c080
xVec2 stick_position(uint32 controller)
{
	xVec2 v;
	_tagPadAnalog& a;
	// Line 189, Address: 0x31c080, Func Offset: 0
	// Line 192, Address: 0x31c090, Func Offset: 0x10
	// Line 198, Address: 0x31c09c, Func Offset: 0x1c
	// Line 201, Address: 0x31c0bc, Func Offset: 0x3c
	// Line 207, Address: 0x31c0c8, Func Offset: 0x48
	// Line 210, Address: 0x31c0ec, Func Offset: 0x6c
	// Line 216, Address: 0x31c0f8, Func Offset: 0x78
	// Line 217, Address: 0x31c104, Func Offset: 0x84
	// Line 218, Address: 0x31c13c, Func Offset: 0xbc
	// Line 219, Address: 0x31c178, Func Offset: 0xf8
	// Line 195, Address: 0x31c18c, Func Offset: 0x10c
	// Line 203, Address: 0x31c194, Func Offset: 0x114
	// Line 204, Address: 0x31c198, Func Offset: 0x118
	// Line 219, Address: 0x31c1a0, Func Offset: 0x120
	// Line 212, Address: 0x31c1ac, Func Offset: 0x12c
	// Line 219, Address: 0x31c1b4, Func Offset: 0x134
	// Line 217, Address: 0x31c1c8, Func Offset: 0x148
	// Line 219, Address: 0x31c1d8, Func Offset: 0x158
	// Line 217, Address: 0x31c1dc, Func Offset: 0x15c
	// Line 219, Address: 0x31c228, Func Offset: 0x1a8
	// Line 218, Address: 0x31c23c, Func Offset: 0x1bc
	// Line 219, Address: 0x31c24c, Func Offset: 0x1cc
	// Line 218, Address: 0x31c250, Func Offset: 0x1d0
	// Line 220, Address: 0x31c29c, Func Offset: 0x21c
	// Func End, Address: 0x31c2a4, Func Offset: 0x224
}

// start__Q312bungee_state21@unnamed@zWadEnt_cpp@18hanging_state_typeFv
// Start address: 0x36ddb0
void hanging_state_type::start()
{
	xVec3 eu;
	// Line 947, Address: 0x36ddb0, Func Offset: 0
	// Line 949, Address: 0x36ddcc, Func Offset: 0x1c
	// Line 950, Address: 0x36de48, Func Offset: 0x98
	// Line 951, Address: 0x36de4c, Func Offset: 0x9c
	// Line 956, Address: 0x36debc, Func Offset: 0x10c
	// Line 965, Address: 0x36dec0, Func Offset: 0x110
	// Line 956, Address: 0x36dec4, Func Offset: 0x114
	// Line 969, Address: 0x36dec8, Func Offset: 0x118
	// Line 956, Address: 0x36ded4, Func Offset: 0x124
	// Line 969, Address: 0x36ded8, Func Offset: 0x128
	// Line 956, Address: 0x36dedc, Func Offset: 0x12c
	// Line 962, Address: 0x36dee0, Func Offset: 0x130
	// Line 963, Address: 0x36dee4, Func Offset: 0x134
	// Line 964, Address: 0x36dee8, Func Offset: 0x138
	// Line 965, Address: 0x36deec, Func Offset: 0x13c
	// Line 967, Address: 0x36def0, Func Offset: 0x140
	// Line 969, Address: 0x36def4, Func Offset: 0x144
	// Line 971, Address: 0x36df80, Func Offset: 0x1d0
	// Line 973, Address: 0x36dffc, Func Offset: 0x24c
	// Line 975, Address: 0x36e008, Func Offset: 0x258
	// Line 973, Address: 0x36e00c, Func Offset: 0x25c
	// Line 975, Address: 0x36e018, Func Offset: 0x268
	// Line 976, Address: 0x36e020, Func Offset: 0x270
	// Line 981, Address: 0x36e02c, Func Offset: 0x27c
	// Line 978, Address: 0x36e030, Func Offset: 0x280
	// Line 981, Address: 0x36e034, Func Offset: 0x284
	// Line 978, Address: 0x36e038, Func Offset: 0x288
	// Line 981, Address: 0x36e03c, Func Offset: 0x28c
	// Line 983, Address: 0x36e178, Func Offset: 0x3c8
	// Line 984, Address: 0x36e1f4, Func Offset: 0x444
	// Line 986, Address: 0x36e220, Func Offset: 0x470
	// Line 987, Address: 0x36e244, Func Offset: 0x494
	// Line 989, Address: 0x36e440, Func Offset: 0x690
	// Line 1000, Address: 0x36e45c, Func Offset: 0x6ac
	// Line 1003, Address: 0x36e518, Func Offset: 0x768
	// Line 1009, Address: 0x36e520, Func Offset: 0x770
	// Line 1003, Address: 0x36e534, Func Offset: 0x784
	// Line 1009, Address: 0x36e558, Func Offset: 0x7a8
	// Line 1003, Address: 0x36e55c, Func Offset: 0x7ac
	// Line 1004, Address: 0x36e594, Func Offset: 0x7e4
	// Line 1005, Address: 0x36e5ac, Func Offset: 0x7fc
	// Line 1007, Address: 0x36e5cc, Func Offset: 0x81c
	// Line 1009, Address: 0x36e5d0, Func Offset: 0x820
	// Line 1012, Address: 0x36e6e0, Func Offset: 0x930
	// Line 1009, Address: 0x36e6e4, Func Offset: 0x934
	// Line 1012, Address: 0x36e704, Func Offset: 0x954
	// Line 1013, Address: 0x36e714, Func Offset: 0x964
	// Line 1014, Address: 0x36e718, Func Offset: 0x968
	// Line 1013, Address: 0x36e724, Func Offset: 0x974
	// Line 1014, Address: 0x36e728, Func Offset: 0x978
	// Line 1016, Address: 0x36e730, Func Offset: 0x980
	// Line 987, Address: 0x36e7a0, Func Offset: 0x9f0
	// Line 1016, Address: 0x36e7a4, Func Offset: 0x9f4
	// Line 987, Address: 0x36e7ac, Func Offset: 0x9fc
	// Line 1016, Address: 0x36e7b4, Func Offset: 0xa04
	// Line 987, Address: 0x36e7c0, Func Offset: 0xa10
	// Line 1016, Address: 0x36e7c8, Func Offset: 0xa18
	// Line 1009, Address: 0x36e7e0, Func Offset: 0xa30
	// Line 1016, Address: 0x36e80c, Func Offset: 0xa5c
	// Line 1009, Address: 0x36e814, Func Offset: 0xa64
	// Line 1016, Address: 0x36e848, Func Offset: 0xa98
	// Line 1020, Address: 0x36e868, Func Offset: 0xab8
	// Line 1021, Address: 0x36ea08, Func Offset: 0xc58
	// Line 1107, Address: 0x36ebbc, Func Offset: 0xe0c
	// Func End, Address: 0x36ec18, Func Offset: 0xe68
}

// stop__Q312bungee_state21@unnamed@zWadEnt_cpp@18hanging_state_typeFv
// Start address: 0x36ec20
void hanging_state_type::stop()
{
	xMat4x3& mm;
	xEnt* ent;
	// Line 1110, Address: 0x36ec20, Func Offset: 0
	// Line 1112, Address: 0x36ec34, Func Offset: 0x14
	// Line 1113, Address: 0x36ec3c, Func Offset: 0x1c
	// Line 1115, Address: 0x36ec44, Func Offset: 0x24
	// Line 1113, Address: 0x36ec48, Func Offset: 0x28
	// Line 1115, Address: 0x36ec50, Func Offset: 0x30
	// Line 1117, Address: 0x36ec5c, Func Offset: 0x3c
	// Line 1119, Address: 0x36ec7c, Func Offset: 0x5c
	// Line 1121, Address: 0x36ec88, Func Offset: 0x68
	// Line 1119, Address: 0x36ec90, Func Offset: 0x70
	// Line 1121, Address: 0x36ec98, Func Offset: 0x78
	// Line 1123, Address: 0x36eca0, Func Offset: 0x80
	// Line 1124, Address: 0x36ecac, Func Offset: 0x8c
	// Line 1123, Address: 0x36ecb4, Func Offset: 0x94
	// Line 1124, Address: 0x36ecb8, Func Offset: 0x98
	// Line 1123, Address: 0x36ecc0, Func Offset: 0xa0
	// Line 1124, Address: 0x36ecc4, Func Offset: 0xa4
	// Line 1123, Address: 0x36ecc8, Func Offset: 0xa8
	// Line 1124, Address: 0x36eccc, Func Offset: 0xac
	// Line 1126, Address: 0x36ed08, Func Offset: 0xe8
	// Line 1133, Address: 0x36ed14, Func Offset: 0xf4
	// Line 1135, Address: 0x36ed30, Func Offset: 0x110
	// Line 1138, Address: 0x36ee1c, Func Offset: 0x1fc
	// Line 1142, Address: 0x36ee28, Func Offset: 0x208
	// Line 1138, Address: 0x36ee2c, Func Offset: 0x20c
	// Line 1142, Address: 0x36ee30, Func Offset: 0x210
	// Line 1146, Address: 0x36ee4c, Func Offset: 0x22c
	// Line 1147, Address: 0x36ee58, Func Offset: 0x238
	// Line 1149, Address: 0x36ee60, Func Offset: 0x240
	// Line 1150, Address: 0x36ee6c, Func Offset: 0x24c
	// Line 1154, Address: 0x36ee78, Func Offset: 0x258
	// Func End, Address: 0x36ef20, Func Offset: 0x300
}

// update__Q312bungee_state21@unnamed@zWadEnt_cpp@18hanging_state_typeFR6xSceneRf
// Start address: 0x36ef20
state_enum_1 hanging_state_type::update(xScene& s, float32& dt)
{
	// Line 1156, Address: 0x36ef20, Func Offset: 0
	// Line 1161, Address: 0x36ef24, Func Offset: 0x4
	// Line 1156, Address: 0x36ef28, Func Offset: 0x8
	// Line 1161, Address: 0x36ef2c, Func Offset: 0xc
	// Line 1156, Address: 0x36ef30, Func Offset: 0x10
	// Line 1161, Address: 0x36ef84, Func Offset: 0x64
	// Line 1162, Address: 0x36efc0, Func Offset: 0xa0
	// Line 1165, Address: 0x36f118, Func Offset: 0x1f8
	// Line 1166, Address: 0x36f124, Func Offset: 0x204
	// Line 1168, Address: 0x3711e8, Func Offset: 0x22c8
	// Line 1171, Address: 0x3711f0, Func Offset: 0x22d0
	// Line 1168, Address: 0x3711f4, Func Offset: 0x22d4
	// Line 1171, Address: 0x3711f8, Func Offset: 0x22d8
	// Line 1168, Address: 0x371204, Func Offset: 0x22e4
	// Line 1169, Address: 0x37120c, Func Offset: 0x22ec
	// Line 1171, Address: 0x37121c, Func Offset: 0x22fc
	// Line 1172, Address: 0x371238, Func Offset: 0x2318
	// Line 1174, Address: 0x3712ec, Func Offset: 0x23cc
	// Line 1175, Address: 0x3712f0, Func Offset: 0x23d0
	// Line 1174, Address: 0x3712f4, Func Offset: 0x23d4
	// Line 1175, Address: 0x3712fc, Func Offset: 0x23dc
	// Line 1177, Address: 0x37130c, Func Offset: 0x23ec
	// Line 1178, Address: 0x371324, Func Offset: 0x2404
	// Line 1181, Address: 0x371334, Func Offset: 0x2414
	// Line 1182, Address: 0x371358, Func Offset: 0x2438
	// Line 1183, Address: 0x37136c, Func Offset: 0x244c
	// Line 1184, Address: 0x371388, Func Offset: 0x2468
	// Line 1185, Address: 0x37139c, Func Offset: 0x247c
	// Line 1189, Address: 0x3713b0, Func Offset: 0x2490
	// Line 1185, Address: 0x3713c4, Func Offset: 0x24a4
	// Line 1187, Address: 0x3713cc, Func Offset: 0x24ac
	// Line 1189, Address: 0x3713d8, Func Offset: 0x24b8
	// Line 1187, Address: 0x3713dc, Func Offset: 0x24bc
	// Line 1189, Address: 0x3713e8, Func Offset: 0x24c8
	// Line 1190, Address: 0x371af0, Func Offset: 0x2bd0
	// Line 1189, Address: 0x371af4, Func Offset: 0x2bd4
	// Line 1190, Address: 0x371b40, Func Offset: 0x2c20
	// Line 1191, Address: 0x372504, Func Offset: 0x35e4
	// Line 1192, Address: 0x37338c, Func Offset: 0x446c
	// Line 1194, Address: 0x3733d8, Func Offset: 0x44b8
	// Line 1196, Address: 0x3737cc, Func Offset: 0x48ac
	// Line 1194, Address: 0x3737d0, Func Offset: 0x48b0
	// Line 1196, Address: 0x3737d4, Func Offset: 0x48b4
	// Line 1194, Address: 0x3737fc, Func Offset: 0x48dc
	// Line 1196, Address: 0x373804, Func Offset: 0x48e4
	// Line 1198, Address: 0x3738b8, Func Offset: 0x4998
	// Line 1199, Address: 0x37394c, Func Offset: 0x4a2c
	// Line 1202, Address: 0x373988, Func Offset: 0x4a68
	// Line 1199, Address: 0x373990, Func Offset: 0x4a70
	// Line 1202, Address: 0x373994, Func Offset: 0x4a74
	// Line 1203, Address: 0x3739a0, Func Offset: 0x4a80
	// Line 1205, Address: 0x373a7c, Func Offset: 0x4b5c
	// Line 1208, Address: 0x373a88, Func Offset: 0x4b68
	// Line 1213, Address: 0x373a94, Func Offset: 0x4b74
	// Line 1215, Address: 0x373b10, Func Offset: 0x4bf0
	// Line 1216, Address: 0x373b14, Func Offset: 0x4bf4
	// Func End, Address: 0x373b6c, Func Offset: 0x4c4c
}

// repath__Q312bungee_state21@unnamed@zWadEnt_cpp@18hanging_state_typeFRC6xScene
// Start address: 0x373b70
uint8 hanging_state_type::repath(xScene& s)
{
	// Line 1961, Address: 0x373b70, Func Offset: 0
	// Line 1963, Address: 0x373ba4, Func Offset: 0x34
	// Line 1964, Address: 0x373c58, Func Offset: 0xe8
	// Line 1965, Address: 0x373c74, Func Offset: 0x104
	// Line 1966, Address: 0x373dec, Func Offset: 0x27c
	// Line 1963, Address: 0x373df4, Func Offset: 0x284
	// Line 1966, Address: 0x373dfc, Func Offset: 0x28c
	// Line 1963, Address: 0x373e08, Func Offset: 0x298
	// Line 1966, Address: 0x373e10, Func Offset: 0x2a0
	// Line 1963, Address: 0x373e14, Func Offset: 0x2a4
	// Line 1966, Address: 0x373e18, Func Offset: 0x2a8
	// Line 1963, Address: 0x373e20, Func Offset: 0x2b0
	// Line 1966, Address: 0x373e2c, Func Offset: 0x2bc
	// Line 1963, Address: 0x373e38, Func Offset: 0x2c8
	// Line 1966, Address: 0x373e3c, Func Offset: 0x2cc
	// Line 1963, Address: 0x373e40, Func Offset: 0x2d0
	// Line 1966, Address: 0x373e50, Func Offset: 0x2e0
	// Line 1963, Address: 0x373e5c, Func Offset: 0x2ec
	// Line 1966, Address: 0x373e64, Func Offset: 0x2f4
	// Line 1963, Address: 0x373e70, Func Offset: 0x300
	// Line 1966, Address: 0x373e78, Func Offset: 0x308
	// Line 1963, Address: 0x373e80, Func Offset: 0x310
	// Line 1966, Address: 0x373e84, Func Offset: 0x314
	// Line 1963, Address: 0x373e90, Func Offset: 0x320
	// Line 1966, Address: 0x373ea0, Func Offset: 0x330
	// Line 1963, Address: 0x373eac, Func Offset: 0x33c
	// Line 1966, Address: 0x373eb4, Func Offset: 0x344
	// Line 1963, Address: 0x373ec0, Func Offset: 0x350
	// Line 1966, Address: 0x373ed0, Func Offset: 0x360
	// Line 1964, Address: 0x373ed4, Func Offset: 0x364
	// Line 1966, Address: 0x373ed8, Func Offset: 0x368
	// Line 1964, Address: 0x373ee0, Func Offset: 0x370
	// Line 1966, Address: 0x373ee4, Func Offset: 0x374
	// Line 1964, Address: 0x373f30, Func Offset: 0x3c0
	// Line 1966, Address: 0x373f38, Func Offset: 0x3c8
	// Line 1964, Address: 0x373f44, Func Offset: 0x3d4
	// Line 1966, Address: 0x373f50, Func Offset: 0x3e0
	// Line 1964, Address: 0x373f5c, Func Offset: 0x3ec
	// Line 1966, Address: 0x373f60, Func Offset: 0x3f0
	// Line 1964, Address: 0x373f6c, Func Offset: 0x3fc
	// Line 1966, Address: 0x373f70, Func Offset: 0x400
	// Line 1964, Address: 0x373f78, Func Offset: 0x408
	// Line 1966, Address: 0x373f80, Func Offset: 0x410
	// Line 1964, Address: 0x373f84, Func Offset: 0x414
	// Line 1966, Address: 0x373f88, Func Offset: 0x418
	// Line 1964, Address: 0x373f90, Func Offset: 0x420
	// Line 1966, Address: 0x373fa0, Func Offset: 0x430
	// Line 1964, Address: 0x373fac, Func Offset: 0x43c
	// Line 1966, Address: 0x373fb4, Func Offset: 0x444
	// Line 1964, Address: 0x373fc0, Func Offset: 0x450
	// Line 1966, Address: 0x373fc8, Func Offset: 0x458
	// Line 1965, Address: 0x373fd8, Func Offset: 0x468
	// Line 1966, Address: 0x373ffc, Func Offset: 0x48c
	// Line 1965, Address: 0x374000, Func Offset: 0x490
	// Line 1966, Address: 0x37400c, Func Offset: 0x49c
	// Line 1965, Address: 0x374014, Func Offset: 0x4a4
	// Line 1966, Address: 0x374018, Func Offset: 0x4a8
	// Line 1965, Address: 0x374020, Func Offset: 0x4b0
	// Line 1966, Address: 0x374024, Func Offset: 0x4b4
	// Line 1965, Address: 0x374038, Func Offset: 0x4c8
	// Line 1966, Address: 0x37404c, Func Offset: 0x4dc
	// Line 1965, Address: 0x374054, Func Offset: 0x4e4
	// Line 1966, Address: 0x37405c, Func Offset: 0x4ec
	// Line 1965, Address: 0x374064, Func Offset: 0x4f4
	// Line 1967, Address: 0x374074, Func Offset: 0x504
	// Func End, Address: 0x3740a8, Func Offset: 0x538
}

// trigger_collision__Q312bungee_state21@unnamed@zWadEnt_cpp@18hanging_state_typeFRQ412bungee_state21@unnamed@zWadEnt_cpp@18hanging_state_type8env_infofRC7xCollis
// Start address: 0x3740b0
void hanging_state_type::trigger_collision(env_info& ei, float32 mag, xCollis& coll)
{
	xSurface* surf;
	// Line 2319, Address: 0x3740b0, Func Offset: 0
	// Line 2320, Address: 0x3740d0, Func Offset: 0x20
	// Line 2321, Address: 0x3740dc, Func Offset: 0x2c
	// Line 2323, Address: 0x3740e8, Func Offset: 0x38
	// Line 2324, Address: 0x3740f4, Func Offset: 0x44
	// Line 2326, Address: 0x374118, Func Offset: 0x68
	// Line 2328, Address: 0x374584, Func Offset: 0x4d4
	// Line 2329, Address: 0x374594, Func Offset: 0x4e4
	// Line 2330, Address: 0x374a08, Func Offset: 0x958
	// Func End, Address: 0x374a50, Func Offset: 0x9a0
}

// trigger_collision__Q312bungee_state21@unnamed@zWadEnt_cpp@18hanging_state_typeFRQ412bungee_state21@unnamed@zWadEnt_cpp@18hanging_state_type8ent_infofRC7xCollis
// Start address: 0x374a80
float32 hanging_state_type::trigger_collision(ent_info& ei, float32 mag)
{
	xSurface* surf;
	float32 hitParams[4];
	// Line 2266, Address: 0x374a80, Func Offset: 0
	// Line 2267, Address: 0x374aa8, Func Offset: 0x28
	// Line 2268, Address: 0x374ab4, Func Offset: 0x34
	// Line 2271, Address: 0x374ac0, Func Offset: 0x40
	// Line 2272, Address: 0x374acc, Func Offset: 0x4c
	// Line 2274, Address: 0x374af0, Func Offset: 0x70
	// Line 2276, Address: 0x374f3c, Func Offset: 0x4bc
	// Line 2309, Address: 0x374f4c, Func Offset: 0x4cc
	// Line 2311, Address: 0x374f84, Func Offset: 0x504
	// Line 2314, Address: 0x3753d0, Func Offset: 0x950
	// Line 2268, Address: 0x3753e0, Func Offset: 0x960
	// Line 2314, Address: 0x3753f0, Func Offset: 0x970
	// Line 2295, Address: 0x375414, Func Offset: 0x994
	// Line 2314, Address: 0x375418, Func Offset: 0x998
	// Line 2295, Address: 0x375424, Func Offset: 0x9a4
	// Line 2314, Address: 0x375428, Func Offset: 0x9a8
	// Line 2295, Address: 0x375430, Func Offset: 0x9b0
	// Line 2314, Address: 0x375438, Func Offset: 0x9b8
	// Line 2298, Address: 0x375440, Func Offset: 0x9c0
	// Line 2314, Address: 0x375444, Func Offset: 0x9c4
	// Line 2298, Address: 0x375458, Func Offset: 0x9d8
	// Line 2314, Address: 0x375470, Func Offset: 0x9f0
	// Line 2298, Address: 0x375490, Func Offset: 0xa10
	// Line 2314, Address: 0x3754a8, Func Offset: 0xa28
	// Line 2298, Address: 0x3754bc, Func Offset: 0xa3c
	// Line 2314, Address: 0x3754c4, Func Offset: 0xa44
	// Line 2298, Address: 0x3754d8, Func Offset: 0xa58
	// Line 2314, Address: 0x3754dc, Func Offset: 0xa5c
	// Line 2298, Address: 0x3754f4, Func Offset: 0xa74
	// Line 2314, Address: 0x375500, Func Offset: 0xa80
	// Line 2299, Address: 0x375508, Func Offset: 0xa88
	// Line 2314, Address: 0x375510, Func Offset: 0xa90
	// Line 2302, Address: 0x375518, Func Offset: 0xa98
	// Line 2314, Address: 0x37552c, Func Offset: 0xaac
	// Line 2291, Address: 0x375568, Func Offset: 0xae8
	// Line 2314, Address: 0x375574, Func Offset: 0xaf4
	// Line 2315, Address: 0x375580, Func Offset: 0xb00
	// Func End, Address: 0x3755a4, Func Offset: 0xb24
}

// collide__Q312bungee_state21@unnamed@zWadEnt_cpp@18hanging_state_typeCFR7xCollisRC7xSphereRC4xEnt
// Start address: 0x3755c0
uint8 collide(xCollis& coll, xSphere& o, xEnt& ent)
{
	// Line 1843, Address: 0x3755c0, Func Offset: 0
	// Line 1844, Address: 0x3755c4, Func Offset: 0x4
	// Line 1843, Address: 0x3755c8, Func Offset: 0x8
	// Line 1844, Address: 0x3755e0, Func Offset: 0x20
	// Line 1846, Address: 0x3755fc, Func Offset: 0x3c
	// Line 1847, Address: 0x37560c, Func Offset: 0x4c
	// Line 1848, Address: 0x37561c, Func Offset: 0x5c
	// Line 1853, Address: 0x37562c, Func Offset: 0x6c
	// Line 1845, Address: 0x375634, Func Offset: 0x74
	// Line 1847, Address: 0x375640, Func Offset: 0x80
	// Line 1853, Address: 0x375648, Func Offset: 0x88
	// Line 1850, Address: 0x37564c, Func Offset: 0x8c
	// Line 1853, Address: 0x375650, Func Offset: 0x90
	// Line 1851, Address: 0x37565c, Func Offset: 0x9c
	// Line 1853, Address: 0x375660, Func Offset: 0xa0
	// Line 1854, Address: 0x375668, Func Offset: 0xa8
	// Func End, Address: 0x375680, Func Offset: 0xc0
}

// player_bound__Q312bungee_state21@unnamed@zWadEnt_cpp@18hanging_state_typeCFv
// Start address: 0x375680
xSphere hanging_state_type::player_bound()
{
	xSphere o;
	// Line 1894, Address: 0x375680, Func Offset: 0
	// Line 1899, Address: 0x375684, Func Offset: 0x4
	// Line 1898, Address: 0x37568c, Func Offset: 0xc
	// Line 1899, Address: 0x375690, Func Offset: 0x10
	// Line 1898, Address: 0x3756a0, Func Offset: 0x20
	// Line 1899, Address: 0x3756a4, Func Offset: 0x24
	// Line 1898, Address: 0x3756c8, Func Offset: 0x48
	// Line 1899, Address: 0x3756cc, Func Offset: 0x4c
	// Line 1898, Address: 0x3756e4, Func Offset: 0x64
	// Line 1900, Address: 0x3756e8, Func Offset: 0x68
	// Line 1899, Address: 0x3756f4, Func Offset: 0x74
	// Line 1900, Address: 0x3756fc, Func Offset: 0x7c
	// Line 1901, Address: 0x375700, Func Offset: 0x80
	// Func End, Address: 0x375708, Func Offset: 0x88
}

// collide_start__Q312bungee_state21@unnamed@zWadEnt_cpp@18hanging_state_typeFR6xScene
// Start address: 0x375710
void hanging_state_type::collide_start(xScene& s)
{
	xEnt& ent;
	xSphere o;
	xCollis coll;
	// Line 1938, Address: 0x375710, Func Offset: 0
	// Line 1942, Address: 0x375714, Func Offset: 0x4
	// Line 1938, Address: 0x375718, Func Offset: 0x8
	// Line 1942, Address: 0x37571c, Func Offset: 0xc
	// Line 1938, Address: 0x375720, Func Offset: 0x10
	// Line 1942, Address: 0x375724, Func Offset: 0x14
	// Line 1938, Address: 0x375728, Func Offset: 0x18
	// Line 1942, Address: 0x37572c, Func Offset: 0x1c
	// Line 1938, Address: 0x375730, Func Offset: 0x20
	// Line 1942, Address: 0x375734, Func Offset: 0x24
	// Line 1938, Address: 0x375738, Func Offset: 0x28
	// Line 1942, Address: 0x37573c, Func Offset: 0x2c
	// Line 1938, Address: 0x375740, Func Offset: 0x30
	// Line 1942, Address: 0x375744, Func Offset: 0x34
	// Line 1939, Address: 0x375748, Func Offset: 0x38
	// Line 1942, Address: 0x37574c, Func Offset: 0x3c
	// Line 1943, Address: 0x375754, Func Offset: 0x44
	// Line 1942, Address: 0x375758, Func Offset: 0x48
	// Line 1943, Address: 0x37575c, Func Offset: 0x4c
	// Line 1942, Address: 0x375760, Func Offset: 0x50
	// Line 1944, Address: 0x375764, Func Offset: 0x54
	// Line 1942, Address: 0x375768, Func Offset: 0x58
	// Line 1943, Address: 0x37576c, Func Offset: 0x5c
	// Line 1942, Address: 0x375770, Func Offset: 0x60
	// Line 1943, Address: 0x375774, Func Offset: 0x64
	// Line 1939, Address: 0x375778, Func Offset: 0x68
	// Line 1942, Address: 0x37577c, Func Offset: 0x6c
	// Line 1943, Address: 0x375784, Func Offset: 0x74
	// Line 1942, Address: 0x375788, Func Offset: 0x78
	// Line 1943, Address: 0x37578c, Func Offset: 0x7c
	// Line 1942, Address: 0x375790, Func Offset: 0x80
	// Line 1944, Address: 0x375794, Func Offset: 0x84
	// Line 1942, Address: 0x3757a4, Func Offset: 0x94
	// Line 1944, Address: 0x3757c4, Func Offset: 0xb4
	// Line 1942, Address: 0x3757d0, Func Offset: 0xc0
	// Line 1943, Address: 0x375810, Func Offset: 0x100
	// Line 1944, Address: 0x375894, Func Offset: 0x184
	// Line 1943, Address: 0x375898, Func Offset: 0x188
	// Line 1944, Address: 0x3758a4, Func Offset: 0x194
	// Line 1943, Address: 0x3758a8, Func Offset: 0x198
	// Line 1944, Address: 0x3758b4, Func Offset: 0x1a4
	// Line 1943, Address: 0x3758c0, Func Offset: 0x1b0
	// Line 1944, Address: 0x3758c8, Func Offset: 0x1b8
	// Line 1946, Address: 0x375900, Func Offset: 0x1f0
	// Line 1947, Address: 0x375904, Func Offset: 0x1f4
	// Line 1946, Address: 0x375908, Func Offset: 0x1f8
	// Line 1947, Address: 0x37590c, Func Offset: 0x1fc
	// Line 1948, Address: 0x375a00, Func Offset: 0x2f0
	// Line 1947, Address: 0x375a04, Func Offset: 0x2f4
	// Line 1948, Address: 0x375a08, Func Offset: 0x2f8
	// Line 1949, Address: 0x375b08, Func Offset: 0x3f8
	// Line 1948, Address: 0x375b0c, Func Offset: 0x3fc
	// Line 1949, Address: 0x375b10, Func Offset: 0x400
	// Line 1951, Address: 0x375c10, Func Offset: 0x500
	// Line 1952, Address: 0x375c14, Func Offset: 0x504
	// Line 1953, Address: 0x375c18, Func Offset: 0x508
	// Line 1952, Address: 0x375c1c, Func Offset: 0x50c
	// Line 1953, Address: 0x375c20, Func Offset: 0x510
	// Line 1954, Address: 0x375c34, Func Offset: 0x524
	// Line 1956, Address: 0x375c38, Func Offset: 0x528
	// Func End, Address: 0x375c58, Func Offset: 0x548
}

// render__Q312bungee_state21@unnamed@zWadEnt_cpp@18hanging_state_typeFv
// Start address: 0x375c60
void render()
{
	// Line 1218, Address: 0x375c60, Func Offset: 0
	// Line 1228, Address: 0x375c68, Func Offset: 0x8
	// Line 1229, Address: 0x375c90, Func Offset: 0x30
	// Func End, Address: 0x375c9c, Func Offset: 0x3c
}

// start__Q312bungee_state21@unnamed@zWadEnt_cpp@20attaching_state_typeFv
// Start address: 0x375ca0
void attaching_state_type::start()
{
	float32 travel_time;
	// Line 761, Address: 0x375ca0, Func Offset: 0
	// Line 765, Address: 0x375ca4, Func Offset: 0x4
	// Line 761, Address: 0x375ca8, Func Offset: 0x8
	// Line 765, Address: 0x375cac, Func Offset: 0xc
	// Line 761, Address: 0x375cb0, Func Offset: 0x10
	// Line 765, Address: 0x375cb4, Func Offset: 0x14
	// Line 762, Address: 0x375cb8, Func Offset: 0x18
	// Line 765, Address: 0x375cc0, Func Offset: 0x20
	// Line 762, Address: 0x375cc8, Func Offset: 0x28
	// Line 763, Address: 0x375cd8, Func Offset: 0x38
	// Line 765, Address: 0x375cec, Func Offset: 0x4c
	// Line 768, Address: 0x375d74, Func Offset: 0xd4
	// Line 770, Address: 0x375da4, Func Offset: 0x104
	// Line 771, Address: 0x375e20, Func Offset: 0x180
	// Line 774, Address: 0x375e2c, Func Offset: 0x18c
	// Line 771, Address: 0x375e30, Func Offset: 0x190
	// Line 776, Address: 0x375e38, Func Offset: 0x198
	// Line 771, Address: 0x375e58, Func Offset: 0x1b8
	// Line 776, Address: 0x375e60, Func Offset: 0x1c0
	// Line 771, Address: 0x375e64, Func Offset: 0x1c4
	// Line 778, Address: 0x375e68, Func Offset: 0x1c8
	// Line 771, Address: 0x375e6c, Func Offset: 0x1cc
	// Line 772, Address: 0x375e74, Func Offset: 0x1d4
	// Line 774, Address: 0x375e84, Func Offset: 0x1e4
	// Line 775, Address: 0x375e94, Func Offset: 0x1f4
	// Line 776, Address: 0x375e98, Func Offset: 0x1f8
	// Line 778, Address: 0x375f50, Func Offset: 0x2b0
	// Line 782, Address: 0x375f70, Func Offset: 0x2d0
	// Line 783, Address: 0x375f78, Func Offset: 0x2d8
	// Line 781, Address: 0x375f90, Func Offset: 0x2f0
	// Line 782, Address: 0x375fa0, Func Offset: 0x300
	// Line 783, Address: 0x375fb0, Func Offset: 0x310
	// Line 784, Address: 0x375fb8, Func Offset: 0x318
	// Func End, Address: 0x375fc8, Func Offset: 0x328
}

// stop__Q312bungee_state21@unnamed@zWadEnt_cpp@20attaching_state_typeFv
// Start address: 0x375fd0
void attaching_state_type::stop()
{
	// Line 787, Address: 0x375fd0, Func Offset: 0
	// Line 788, Address: 0x375ff8, Func Offset: 0x28
	// Line 791, Address: 0x376004, Func Offset: 0x34
	// Func End, Address: 0x37600c, Func Offset: 0x3c
}

// update__Q312bungee_state21@unnamed@zWadEnt_cpp@20attaching_state_typeFR6xSceneRf
// Start address: 0x376010
state_enum_1 attaching_state_type::update(float32& dt)
{
	float32 g;
	// Line 793, Address: 0x376010, Func Offset: 0
	// Line 794, Address: 0x37602c, Func Offset: 0x1c
	// Line 796, Address: 0x3760a8, Func Offset: 0x98
	// Line 797, Address: 0x3760c0, Func Offset: 0xb0
	// Line 803, Address: 0x3760cc, Func Offset: 0xbc
	// Line 820, Address: 0x3760d8, Func Offset: 0xc8
	// Line 824, Address: 0x3760e0, Func Offset: 0xd0
	// Line 826, Address: 0x376108, Func Offset: 0xf8
	// Line 827, Address: 0x37611c, Func Offset: 0x10c
	// Line 829, Address: 0x376134, Func Offset: 0x124
	// Line 799, Address: 0x376148, Func Offset: 0x138
	// Line 800, Address: 0x37614c, Func Offset: 0x13c
	// Line 829, Address: 0x376158, Func Offset: 0x148
	// Line 808, Address: 0x376164, Func Offset: 0x154
	// Line 829, Address: 0x376168, Func Offset: 0x158
	// Line 807, Address: 0x376170, Func Offset: 0x160
	// Line 808, Address: 0x376174, Func Offset: 0x164
	// Line 807, Address: 0x376178, Func Offset: 0x168
	// Line 806, Address: 0x37617c, Func Offset: 0x16c
	// Line 807, Address: 0x376180, Func Offset: 0x170
	// Line 829, Address: 0x376184, Func Offset: 0x174
	// Line 808, Address: 0x37618c, Func Offset: 0x17c
	// Line 829, Address: 0x376194, Func Offset: 0x184
	// Line 808, Address: 0x376198, Func Offset: 0x188
	// Line 829, Address: 0x37619c, Func Offset: 0x18c
	// Line 808, Address: 0x3761a0, Func Offset: 0x190
	// Line 829, Address: 0x3761a8, Func Offset: 0x198
	// Line 809, Address: 0x3761b8, Func Offset: 0x1a8
	// Line 829, Address: 0x3761c0, Func Offset: 0x1b0
	// Line 810, Address: 0x3761cc, Func Offset: 0x1bc
	// Line 829, Address: 0x3761d4, Func Offset: 0x1c4
	// Line 814, Address: 0x3761e0, Func Offset: 0x1d0
	// Line 829, Address: 0x3761f0, Func Offset: 0x1e0
	// Line 814, Address: 0x3761f8, Func Offset: 0x1e8
	// Line 829, Address: 0x376230, Func Offset: 0x220
	// Line 815, Address: 0x376288, Func Offset: 0x278
	// Line 829, Address: 0x376290, Func Offset: 0x280
	// Line 815, Address: 0x3762b4, Func Offset: 0x2a4
	// Line 829, Address: 0x3762b8, Func Offset: 0x2a8
	// Line 815, Address: 0x3762e0, Func Offset: 0x2d0
	// Line 829, Address: 0x3762ec, Func Offset: 0x2dc
	// Line 815, Address: 0x3762f4, Func Offset: 0x2e4
	// Line 829, Address: 0x3762f8, Func Offset: 0x2e8
	// Line 815, Address: 0x376318, Func Offset: 0x308
	// Line 829, Address: 0x376320, Func Offset: 0x310
	// Line 817, Address: 0x376350, Func Offset: 0x340
	// Line 832, Address: 0x376358, Func Offset: 0x348
	// Line 833, Address: 0x37635c, Func Offset: 0x34c
	// Line 832, Address: 0x376360, Func Offset: 0x350
	// Line 866, Address: 0x376364, Func Offset: 0x354
	// Func End, Address: 0x376378, Func Offset: 0x368
}

// render__Q312bungee_state21@unnamed@zWadEnt_cpp@20attaching_state_typeFv
// Start address: 0x376380
void render()
{
	// Line 878, Address: 0x376380, Func Offset: 0
	// Func End, Address: 0x37638c, Func Offset: 0xc
}

