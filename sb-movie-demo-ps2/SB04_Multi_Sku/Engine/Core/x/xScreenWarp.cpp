



void render_uvmap();
void warp_animate_static_lens(xVec2* uvmap, xVec2& loc, float32 radius, float32 base_intensity);
void warp_animate_heat_shimmer(xVec2* uvmap, warper& warp, xVec2& loc, float32 radius, float32 base_intensity, float32 s);
void warp_animate_shockwave(xVec2* uvmap, xVec2& loc, float32 radius, float32 base_intensity, float32 s);
void warp_animate_ripple(xVec2* uvmap, warper& warp, xVec2& loc, float32 radius, float32 base_intensity, float32 s);
void warp_animate_lens(xVec2* uvmap, xVec2& loc, float32 radius, float32 base_intensity, float32 s);
void warp_animate_warble(xVec2* uvmap, warper& warp, xVec2& loc, float32 radius, float32 base_intensity, float32 s);
void remove(warper* warp);
void modify(warper* warp, xVec3& loc, float32 radius, float32 duration, type_enum type, float32 intensity, float32 freq, int32 flags);
warper* emit(xVec3& loc, float32 radius, float32 duration, type_enum type, float32 intensity, float32 freq, int32 flags);
type_enum find_type(uint32 id);
void render(RwCamera* cam);
void pre_render();
void update(float32 dt);
void reset();
void scene_exit();
void scene_enter();
uint8 animate_uvmap(xVec2* uvmap, RwCamera* cam);

// render_uvmap__19@unnamed@xWad5_cpp@FP8RwCamera
// Start address: 0x466340
void render_uvmap()
{
	xFXFastRaster fr;
	int32 mesh_width;
	int32 mesh_height;
	int32 qwords_max;
	<unknown fundamental type (0xa510)>* pkt;
	int32 qwords_used;
	int32 qwords_remain;
	uint32 msb;
	uint32 lsb;
	int32 dx;
	int32 dy;
	int32 x;
	xVec2* uv0;
	xVec2* uv1;
	int32 i;
	int32 y;
	int32 j;
	<unknown fundamental type (0xa510)>* start_strip_pkt;
	float32 one;
	// Line 1124, Address: 0x466340, Func Offset: 0
	// Line 1138, Address: 0x466344, Func Offset: 0x4
	// Line 1124, Address: 0x466348, Func Offset: 0x8
	// Line 1138, Address: 0x46634c, Func Offset: 0xc
	// Line 1124, Address: 0x466350, Func Offset: 0x10
	// Line 1138, Address: 0x466374, Func Offset: 0x34
	// Line 1141, Address: 0x466380, Func Offset: 0x40
	// Line 1142, Address: 0x466388, Func Offset: 0x48
	// Line 1143, Address: 0x466398, Func Offset: 0x58
	// Line 1145, Address: 0x4663a8, Func Offset: 0x68
	// Line 1146, Address: 0x4663c8, Func Offset: 0x88
	// Line 1147, Address: 0x4663dc, Func Offset: 0x9c
	// Line 1148, Address: 0x4663fc, Func Offset: 0xbc
	// Line 1149, Address: 0x466404, Func Offset: 0xc4
	// Line 1150, Address: 0x466420, Func Offset: 0xe0
	// Line 1153, Address: 0x466438, Func Offset: 0xf8
	// Line 1163, Address: 0x46643c, Func Offset: 0xfc
	// Line 1153, Address: 0x466440, Func Offset: 0x100
	// Line 1165, Address: 0x466444, Func Offset: 0x104
	// Line 1153, Address: 0x46644c, Func Offset: 0x10c
	// Line 1165, Address: 0x466450, Func Offset: 0x110
	// Line 1174, Address: 0x466464, Func Offset: 0x124
	// Line 1177, Address: 0x466478, Func Offset: 0x138
	// Line 1181, Address: 0x466484, Func Offset: 0x144
	// Line 1174, Address: 0x466488, Func Offset: 0x148
	// Line 1181, Address: 0x46648c, Func Offset: 0x14c
	// Line 1185, Address: 0x466490, Func Offset: 0x150
	// Line 1177, Address: 0x466494, Func Offset: 0x154
	// Line 1185, Address: 0x466498, Func Offset: 0x158
	// Line 1181, Address: 0x46649c, Func Offset: 0x15c
	// Line 1190, Address: 0x4664a0, Func Offset: 0x160
	// Line 1191, Address: 0x4664a4, Func Offset: 0x164
	// Line 1181, Address: 0x4664a8, Func Offset: 0x168
	// Line 1194, Address: 0x4664b4, Func Offset: 0x174
	// Line 1181, Address: 0x4664b8, Func Offset: 0x178
	// Line 1185, Address: 0x4664bc, Func Offset: 0x17c
	// Line 1181, Address: 0x4664c4, Func Offset: 0x184
	// Line 1194, Address: 0x4664cc, Func Offset: 0x18c
	// Line 1185, Address: 0x4664d0, Func Offset: 0x190
	// Line 1194, Address: 0x4664d4, Func Offset: 0x194
	// Line 1203, Address: 0x4664e0, Func Offset: 0x1a0
	// Line 1204, Address: 0x466508, Func Offset: 0x1c8
	// Line 1206, Address: 0x466510, Func Offset: 0x1d0
	// Line 1205, Address: 0x466514, Func Offset: 0x1d4
	// Line 1208, Address: 0x466518, Func Offset: 0x1d8
	// Line 1225, Address: 0x466524, Func Offset: 0x1e4
	// Line 1237, Address: 0x466528, Func Offset: 0x1e8
	// Line 1227, Address: 0x466534, Func Offset: 0x1f4
	// Line 1228, Address: 0x466538, Func Offset: 0x1f8
	// Line 1231, Address: 0x46653c, Func Offset: 0x1fc
	// Line 1232, Address: 0x466540, Func Offset: 0x200
	// Line 1231, Address: 0x46654c, Func Offset: 0x20c
	// Line 1237, Address: 0x466550, Func Offset: 0x210
	// Line 1242, Address: 0x466558, Func Offset: 0x218
	// Line 1241, Address: 0x466560, Func Offset: 0x220
	// Line 1237, Address: 0x466568, Func Offset: 0x228
	// Line 1242, Address: 0x46658c, Func Offset: 0x24c
	// Line 1237, Address: 0x466590, Func Offset: 0x250
	// Line 1242, Address: 0x466594, Func Offset: 0x254
	// Line 1237, Address: 0x466598, Func Offset: 0x258
	// Line 1242, Address: 0x4665a0, Func Offset: 0x260
	// Line 1238, Address: 0x4665a4, Func Offset: 0x264
	// Line 1242, Address: 0x4665a8, Func Offset: 0x268
	// Line 1250, Address: 0x4665b0, Func Offset: 0x270
	// Line 1252, Address: 0x4665b4, Func Offset: 0x274
	// Line 1250, Address: 0x4665b8, Func Offset: 0x278
	// Line 1251, Address: 0x4665bc, Func Offset: 0x27c
	// Line 1252, Address: 0x4665c0, Func Offset: 0x280
	// Line 1257, Address: 0x4665cc, Func Offset: 0x28c
	// Line 1258, Address: 0x4665d8, Func Offset: 0x298
	// Line 1261, Address: 0x4665e8, Func Offset: 0x2a8
	// Line 1262, Address: 0x4665f0, Func Offset: 0x2b0
	// Line 1214, Address: 0x466608, Func Offset: 0x2c8
	// Line 1262, Address: 0x466610, Func Offset: 0x2d0
	// Line 1218, Address: 0x466618, Func Offset: 0x2d8
	// Line 1262, Address: 0x466620, Func Offset: 0x2e0
	// Line 1224, Address: 0x466634, Func Offset: 0x2f4
	// Line 1262, Address: 0x46664c, Func Offset: 0x30c
	// Func End, Address: 0x466698, Func Offset: 0x358
}

// warp_animate_static_lens__19@unnamed@xWad5_cpp@FP5xVec2RQ211xScreenWarp6warperRC5xVec2ffff
// Start address: 0x4666a0
void warp_animate_static_lens(xVec2* uvmap, xVec2& loc, float32 radius, float32 base_intensity)
{
	float32 mag;
	float32 r2;
	float32 ir2;
	float32 umag;
	float32 vmag;
	int32 istart;
	int32 iend;
	int32 jstart;
	int32 jend;
	float32 dx;
	float32 dy;
	float32 x;
	int32 i;
	float32 y;
	int32 j;
	float32 xoff;
	float32 yoff;
	float32 dist2;
	float32 scale;
	// Line 1022, Address: 0x4666a0, Func Offset: 0
	// Line 1023, Address: 0x4666a4, Func Offset: 0x4
	// Line 1020, Address: 0x4666a8, Func Offset: 0x8
	// Line 1023, Address: 0x4666b0, Func Offset: 0x10
	// Line 1020, Address: 0x4666b4, Func Offset: 0x14
	// Line 1023, Address: 0x4666bc, Func Offset: 0x1c
	// Line 1029, Address: 0x4666c0, Func Offset: 0x20
	// Line 1020, Address: 0x4666c4, Func Offset: 0x24
	// Line 1025, Address: 0x4666c8, Func Offset: 0x28
	// Line 1026, Address: 0x4666cc, Func Offset: 0x2c
	// Line 1029, Address: 0x4666d0, Func Offset: 0x30
	// Line 1025, Address: 0x4666dc, Func Offset: 0x3c
	// Line 1026, Address: 0x4666e0, Func Offset: 0x40
	// Line 1029, Address: 0x4666e4, Func Offset: 0x44
	// Line 1032, Address: 0x46678c, Func Offset: 0xec
	// Line 1035, Address: 0x466798, Func Offset: 0xf8
	// Line 1031, Address: 0x46679c, Func Offset: 0xfc
	// Line 1032, Address: 0x4667a4, Func Offset: 0x104
	// Line 1031, Address: 0x4667ac, Func Offset: 0x10c
	// Line 1035, Address: 0x4667b0, Func Offset: 0x110
	// Line 1044, Address: 0x4667bc, Func Offset: 0x11c
	// Line 1040, Address: 0x4667c0, Func Offset: 0x120
	// Line 1035, Address: 0x4667c8, Func Offset: 0x128
	// Line 1040, Address: 0x4667cc, Func Offset: 0x12c
	// Line 1044, Address: 0x4667d4, Func Offset: 0x134
	// Line 1041, Address: 0x4667d8, Func Offset: 0x138
	// Line 1038, Address: 0x4667dc, Func Offset: 0x13c
	// Line 1040, Address: 0x4667ec, Func Offset: 0x14c
	// Line 1038, Address: 0x4667f0, Func Offset: 0x150
	// Line 1040, Address: 0x4667f8, Func Offset: 0x158
	// Line 1041, Address: 0x4667fc, Func Offset: 0x15c
	// Line 1042, Address: 0x466804, Func Offset: 0x164
	// Line 1049, Address: 0x466810, Func Offset: 0x170
	// Line 1050, Address: 0x466828, Func Offset: 0x188
	// Line 1051, Address: 0x466840, Func Offset: 0x1a0
	// Line 1044, Address: 0x466858, Func Offset: 0x1b8
	// Line 1048, Address: 0x466860, Func Offset: 0x1c0
	// Line 1047, Address: 0x466864, Func Offset: 0x1c4
	// Line 1051, Address: 0x466868, Func Offset: 0x1c8
	// Line 1047, Address: 0x46686c, Func Offset: 0x1cc
	// Line 1051, Address: 0x466874, Func Offset: 0x1d4
	// Line 1048, Address: 0x46687c, Func Offset: 0x1dc
	// Line 1051, Address: 0x466890, Func Offset: 0x1f0
	// Func End, Address: 0x466898, Func Offset: 0x1f8
}

// warp_animate_heat_shimmer__19@unnamed@xWad5_cpp@FP5xVec2RQ211xScreenWarp6warperRC5xVec2ffff
// Start address: 0x4668a0
void warp_animate_heat_shimmer(xVec2* uvmap, warper& warp, xVec2& loc, float32 radius, float32 base_intensity, float32 s)
{
	float32 mag;
	float32 start_theta;
	int32 istart;
	int32 iend;
	int32 jstart;
	int32 jend;
	float32 phase;
	float32 startcos0;
	float32 startsin0;
	float32 ir;
	float32 dx;
	float32 dy;
	float32 ystart;
	int32 ysize;
	xVec2* uv;
	xVec2* uv_xend;
	int32 uvstride;
	float32 x;
	float32 tempcos;
	float32 cos0;
	float32 sin0;
	float32 y;
	float32 x2;
	xVec2* uv_yend;
	float32 dist2;
	// Line 964, Address: 0x4668a0, Func Offset: 0
	// Line 965, Address: 0x4668a4, Func Offset: 0x4
	// Line 964, Address: 0x4668a8, Func Offset: 0x8
	// Line 965, Address: 0x4668ac, Func Offset: 0xc
	// Line 964, Address: 0x4668b0, Func Offset: 0x10
	// Line 965, Address: 0x4668b4, Func Offset: 0x14
	// Line 964, Address: 0x4668b8, Func Offset: 0x18
	// Line 965, Address: 0x4668c4, Func Offset: 0x24
	// Line 964, Address: 0x4668c8, Func Offset: 0x28
	// Line 965, Address: 0x4668e8, Func Offset: 0x48
	// Line 966, Address: 0x4668ec, Func Offset: 0x4c
	// Line 967, Address: 0x466900, Func Offset: 0x60
	// Line 968, Address: 0x466904, Func Offset: 0x64
	// Line 971, Address: 0x466910, Func Offset: 0x70
	// Line 968, Address: 0x466914, Func Offset: 0x74
	// Line 971, Address: 0x466918, Func Offset: 0x78
	// Line 968, Address: 0x466920, Func Offset: 0x80
	// Line 971, Address: 0x466928, Func Offset: 0x88
	// Line 978, Address: 0x4669d4, Func Offset: 0x134
	// Line 979, Address: 0x466a6c, Func Offset: 0x1cc
	// Line 980, Address: 0x466a74, Func Offset: 0x1d4
	// Line 986, Address: 0x466a80, Func Offset: 0x1e0
	// Line 989, Address: 0x466a84, Func Offset: 0x1e4
	// Line 990, Address: 0x466a8c, Func Offset: 0x1ec
	// Line 982, Address: 0x466a90, Func Offset: 0x1f0
	// Line 989, Address: 0x466a94, Func Offset: 0x1f4
	// Line 990, Address: 0x466a98, Func Offset: 0x1f8
	// Line 989, Address: 0x466a9c, Func Offset: 0x1fc
	// Line 990, Address: 0x466aa4, Func Offset: 0x204
	// Line 989, Address: 0x466aa8, Func Offset: 0x208
	// Line 990, Address: 0x466aac, Func Offset: 0x20c
	// Line 988, Address: 0x466ab4, Func Offset: 0x214
	// Line 991, Address: 0x466ab8, Func Offset: 0x218
	// Line 993, Address: 0x466abc, Func Offset: 0x21c
	// Line 991, Address: 0x466ac0, Func Offset: 0x220
	// Line 982, Address: 0x466ac4, Func Offset: 0x224
	// Line 983, Address: 0x466ac8, Func Offset: 0x228
	// Line 986, Address: 0x466acc, Func Offset: 0x22c
	// Line 992, Address: 0x466ad0, Func Offset: 0x230
	// Line 986, Address: 0x466ad4, Func Offset: 0x234
	// Line 992, Address: 0x466ad8, Func Offset: 0x238
	// Line 986, Address: 0x466ae8, Func Offset: 0x248
	// Line 980, Address: 0x466af0, Func Offset: 0x250
	// Line 983, Address: 0x466af4, Func Offset: 0x254
	// Line 984, Address: 0x466af8, Func Offset: 0x258
	// Line 986, Address: 0x466afc, Func Offset: 0x25c
	// Line 993, Address: 0x466b00, Func Offset: 0x260
	// Line 1006, Address: 0x466b0c, Func Offset: 0x26c
	// Line 1001, Address: 0x466b28, Func Offset: 0x288
	// Line 997, Address: 0x466b2c, Func Offset: 0x28c
	// Line 998, Address: 0x466b30, Func Offset: 0x290
	// Line 999, Address: 0x466b34, Func Offset: 0x294
	// Line 995, Address: 0x466b38, Func Offset: 0x298
	// Line 999, Address: 0x466b40, Func Offset: 0x2a0
	// Line 1001, Address: 0x466b48, Func Offset: 0x2a8
	// Line 1002, Address: 0x466b50, Func Offset: 0x2b0
	// Line 1003, Address: 0x466b5c, Func Offset: 0x2bc
	// Line 1008, Address: 0x466b60, Func Offset: 0x2c0
	// Line 1005, Address: 0x466b64, Func Offset: 0x2c4
	// Line 1008, Address: 0x466b68, Func Offset: 0x2c8
	// Line 1006, Address: 0x466b6c, Func Offset: 0x2cc
	// Line 1007, Address: 0x466b74, Func Offset: 0x2d4
	// Line 1008, Address: 0x466b78, Func Offset: 0x2d8
	// Line 1013, Address: 0x466b88, Func Offset: 0x2e8
	// Line 1010, Address: 0x466b8c, Func Offset: 0x2ec
	// Line 1013, Address: 0x466b90, Func Offset: 0x2f0
	// Line 1011, Address: 0x466b94, Func Offset: 0x2f4
	// Line 1013, Address: 0x466b98, Func Offset: 0x2f8
	// Line 1014, Address: 0x466ba8, Func Offset: 0x308
	// Line 978, Address: 0x466bc8, Func Offset: 0x328
	// Line 1014, Address: 0x466bf0, Func Offset: 0x350
	// Line 978, Address: 0x466bf8, Func Offset: 0x358
	// Line 1014, Address: 0x466c10, Func Offset: 0x370
	// Line 1003, Address: 0x466c14, Func Offset: 0x374
	// Line 1014, Address: 0x466c28, Func Offset: 0x388
	// Func End, Address: 0x466c5c, Func Offset: 0x3bc
}

// warp_animate_shockwave__19@unnamed@xWad5_cpp@FP5xVec2RQ211xScreenWarp6warperRC5xVec2ffff
// Start address: 0x466c60
void warp_animate_shockwave(xVec2* uvmap, xVec2& loc, float32 radius, float32 base_intensity, float32 s)
{
	float32 mag;
	float32 umag;
	float32 vmag;
	float32 r2;
	float32 ir;
	int32 istart;
	int32 iend;
	int32 jstart;
	int32 jend;
	float32 dx;
	float32 dy;
	float32 x;
	int32 i;
	float32 y;
	int32 j;
	float32 xoff;
	float32 yoff;
	float32 dist2;
	float32 theta;
	float32 stheta;
	float32 scale;
	// Line 919, Address: 0x466c60, Func Offset: 0
	// Line 923, Address: 0x466c64, Func Offset: 0x4
	// Line 928, Address: 0x466c70, Func Offset: 0x10
	// Line 923, Address: 0x466c74, Func Offset: 0x14
	// Line 919, Address: 0x466c78, Func Offset: 0x18
	// Line 923, Address: 0x466c7c, Func Offset: 0x1c
	// Line 932, Address: 0x466c80, Func Offset: 0x20
	// Line 928, Address: 0x466c84, Func Offset: 0x24
	// Line 919, Address: 0x466c88, Func Offset: 0x28
	// Line 928, Address: 0x466c8c, Func Offset: 0x2c
	// Line 919, Address: 0x466c90, Func Offset: 0x30
	// Line 924, Address: 0x466ca0, Func Offset: 0x40
	// Line 925, Address: 0x466ca4, Func Offset: 0x44
	// Line 932, Address: 0x466ca8, Func Offset: 0x48
	// Line 924, Address: 0x466cac, Func Offset: 0x4c
	// Line 925, Address: 0x466cb0, Func Offset: 0x50
	// Line 932, Address: 0x466cb4, Func Offset: 0x54
	// Line 935, Address: 0x466d68, Func Offset: 0x108
	// Line 938, Address: 0x466d74, Func Offset: 0x114
	// Line 934, Address: 0x466d78, Func Offset: 0x118
	// Line 935, Address: 0x466d80, Func Offset: 0x120
	// Line 934, Address: 0x466d88, Func Offset: 0x128
	// Line 938, Address: 0x466d8c, Func Offset: 0x12c
	// Line 950, Address: 0x466db8, Func Offset: 0x158
	// Line 949, Address: 0x466dbc, Func Offset: 0x15c
	// Line 950, Address: 0x466dc4, Func Offset: 0x164
	// Line 952, Address: 0x466dd8, Func Offset: 0x178
	// Line 950, Address: 0x466ddc, Func Offset: 0x17c
	// Line 943, Address: 0x466de0, Func Offset: 0x180
	// Line 952, Address: 0x466de4, Func Offset: 0x184
	// Line 945, Address: 0x466df8, Func Offset: 0x198
	// Line 943, Address: 0x466e04, Func Offset: 0x1a4
	// Line 949, Address: 0x466e08, Func Offset: 0x1a8
	// Line 945, Address: 0x466e0c, Func Offset: 0x1ac
	// Line 956, Address: 0x466e10, Func Offset: 0x1b0
	// Line 941, Address: 0x466e14, Func Offset: 0x1b4
	// Line 943, Address: 0x466e24, Func Offset: 0x1c4
	// Line 941, Address: 0x466e28, Func Offset: 0x1c8
	// Line 943, Address: 0x466e2c, Func Offset: 0x1cc
	// Line 944, Address: 0x466e30, Func Offset: 0x1d0
	// Line 945, Address: 0x466e38, Func Offset: 0x1d8
	// Line 947, Address: 0x466e50, Func Offset: 0x1f0
	// Line 949, Address: 0x466e5c, Func Offset: 0x1fc
	// Line 950, Address: 0x466e68, Func Offset: 0x208
	// Line 952, Address: 0x466ea4, Func Offset: 0x244
	// Line 953, Address: 0x466ebc, Func Offset: 0x25c
	// Line 957, Address: 0x466ec0, Func Offset: 0x260
	// Line 956, Address: 0x466ec4, Func Offset: 0x264
	// Line 957, Address: 0x466ed8, Func Offset: 0x278
	// Line 958, Address: 0x466ee8, Func Offset: 0x288
	// Line 959, Address: 0x466efc, Func Offset: 0x29c
	// Line 960, Address: 0x466f10, Func Offset: 0x2b0
	// Line 950, Address: 0x466f28, Func Offset: 0x2c8
	// Line 960, Address: 0x466f30, Func Offset: 0x2d0
	// Func End, Address: 0x466f50, Func Offset: 0x2f0
}

// warp_animate_ripple__19@unnamed@xWad5_cpp@FP5xVec2RQ211xScreenWarp6warperRC5xVec2ffff
// Start address: 0x466f50
void warp_animate_ripple(xVec2* uvmap, warper& warp, xVec2& loc, float32 radius, float32 base_intensity, float32 s)
{
	float32 mag;
	float32 umag;
	float32 vmag;
	float32 freq;
	float32 r2;
	float32 ir2;
	int32 istart;
	int32 iend;
	int32 jstart;
	int32 jend;
	float32 dx;
	float32 dy;
	float32 x;
	int32 i;
	float32 y;
	int32 j;
	float32 xoff;
	float32 yoff;
	float32 dist2;
	float32 t;
	float32 scale;
	// Line 872, Address: 0x466f50, Func Offset: 0
	// Line 881, Address: 0x466fa8, Func Offset: 0x58
	// Line 886, Address: 0x467014, Func Offset: 0xc4
	// Line 883, Address: 0x467024, Func Offset: 0xd4
	// Line 892, Address: 0x467028, Func Offset: 0xd8
	// Line 886, Address: 0x467034, Func Offset: 0xe4
	// Line 889, Address: 0x467038, Func Offset: 0xe8
	// Line 888, Address: 0x46703c, Func Offset: 0xec
	// Line 889, Address: 0x467040, Func Offset: 0xf0
	// Line 884, Address: 0x467044, Func Offset: 0xf4
	// Line 889, Address: 0x467048, Func Offset: 0xf8
	// Line 884, Address: 0x46704c, Func Offset: 0xfc
	// Line 892, Address: 0x467050, Func Offset: 0x100
	// Line 888, Address: 0x467054, Func Offset: 0x104
	// Line 892, Address: 0x467058, Func Offset: 0x108
	// Line 895, Address: 0x467108, Func Offset: 0x1b8
	// Line 898, Address: 0x467114, Func Offset: 0x1c4
	// Line 894, Address: 0x467118, Func Offset: 0x1c8
	// Line 895, Address: 0x467120, Func Offset: 0x1d0
	// Line 894, Address: 0x467128, Func Offset: 0x1d8
	// Line 898, Address: 0x46712c, Func Offset: 0x1dc
	// Line 900, Address: 0x467154, Func Offset: 0x204
	// Line 901, Address: 0x467158, Func Offset: 0x208
	// Line 903, Address: 0x467170, Func Offset: 0x220
	// Line 904, Address: 0x467178, Func Offset: 0x228
	// Line 903, Address: 0x467180, Func Offset: 0x230
	// Line 905, Address: 0x467184, Func Offset: 0x234
	// Line 903, Address: 0x467188, Func Offset: 0x238
	// Line 904, Address: 0x46718c, Func Offset: 0x23c
	// Line 905, Address: 0x467194, Func Offset: 0x244
	// Line 913, Address: 0x4671a0, Func Offset: 0x250
	// Line 914, Address: 0x4671b8, Func Offset: 0x268
	// Line 915, Address: 0x4671d0, Func Offset: 0x280
	// Line 907, Address: 0x4671e8, Func Offset: 0x298
	// Line 908, Address: 0x4671fc, Func Offset: 0x2ac
	// Line 915, Address: 0x467200, Func Offset: 0x2b0
	// Line 908, Address: 0x467208, Func Offset: 0x2b8
	// Line 911, Address: 0x46720c, Func Offset: 0x2bc
	// Line 912, Address: 0x467210, Func Offset: 0x2c0
	// Line 915, Address: 0x467214, Func Offset: 0x2c4
	// Line 911, Address: 0x467218, Func Offset: 0x2c8
	// Line 915, Address: 0x467228, Func Offset: 0x2d8
	// Line 912, Address: 0x467230, Func Offset: 0x2e0
	// Line 915, Address: 0x467240, Func Offset: 0x2f0
	// Func End, Address: 0x46729c, Func Offset: 0x34c
}

// warp_animate_lens__19@unnamed@xWad5_cpp@FP5xVec2RQ211xScreenWarp6warperRC5xVec2ffff
// Start address: 0x4672a0
void warp_animate_lens(xVec2* uvmap, xVec2& loc, float32 radius, float32 base_intensity, float32 s)
{
	float32 mag;
	float32 r2;
	float32 ir2;
	float32 umag;
	float32 vmag;
	int32 istart;
	int32 iend;
	int32 jstart;
	int32 jend;
	float32 dx;
	float32 dy;
	float32 x;
	int32 i;
	float32 y;
	int32 j;
	float32 xoff;
	float32 yoff;
	float32 dist2;
	float32 scale;
	// Line 835, Address: 0x4672a0, Func Offset: 0
	// Line 837, Address: 0x4672a4, Func Offset: 0x4
	// Line 835, Address: 0x4672a8, Func Offset: 0x8
	// Line 837, Address: 0x4672ac, Func Offset: 0xc
	// Line 835, Address: 0x4672b0, Func Offset: 0x10
	// Line 837, Address: 0x4672b4, Func Offset: 0x14
	// Line 835, Address: 0x4672b8, Func Offset: 0x18
	// Line 837, Address: 0x4672bc, Func Offset: 0x1c
	// Line 835, Address: 0x4672c0, Func Offset: 0x20
	// Line 837, Address: 0x4672d4, Func Offset: 0x34
	// Line 835, Address: 0x4672d8, Func Offset: 0x38
	// Line 837, Address: 0x4672dc, Func Offset: 0x3c
	// Line 840, Address: 0x4672fc, Func Offset: 0x5c
	// Line 846, Address: 0x467300, Func Offset: 0x60
	// Line 837, Address: 0x467304, Func Offset: 0x64
	// Line 839, Address: 0x46730c, Func Offset: 0x6c
	// Line 837, Address: 0x467310, Func Offset: 0x70
	// Line 840, Address: 0x467314, Func Offset: 0x74
	// Line 842, Address: 0x467318, Func Offset: 0x78
	// Line 840, Address: 0x46731c, Func Offset: 0x7c
	// Line 843, Address: 0x467320, Func Offset: 0x80
	// Line 846, Address: 0x467324, Func Offset: 0x84
	// Line 842, Address: 0x467328, Func Offset: 0x88
	// Line 843, Address: 0x46732c, Func Offset: 0x8c
	// Line 846, Address: 0x467330, Func Offset: 0x90
	// Line 849, Address: 0x4673e0, Func Offset: 0x140
	// Line 852, Address: 0x4673ec, Func Offset: 0x14c
	// Line 848, Address: 0x4673f0, Func Offset: 0x150
	// Line 849, Address: 0x4673f8, Func Offset: 0x158
	// Line 848, Address: 0x467400, Func Offset: 0x160
	// Line 852, Address: 0x467404, Func Offset: 0x164
	// Line 861, Address: 0x467410, Func Offset: 0x170
	// Line 857, Address: 0x467414, Func Offset: 0x174
	// Line 852, Address: 0x46741c, Func Offset: 0x17c
	// Line 857, Address: 0x467420, Func Offset: 0x180
	// Line 861, Address: 0x467428, Func Offset: 0x188
	// Line 858, Address: 0x46742c, Func Offset: 0x18c
	// Line 855, Address: 0x467430, Func Offset: 0x190
	// Line 857, Address: 0x467440, Func Offset: 0x1a0
	// Line 855, Address: 0x467444, Func Offset: 0x1a4
	// Line 857, Address: 0x467448, Func Offset: 0x1a8
	// Line 858, Address: 0x46744c, Func Offset: 0x1ac
	// Line 859, Address: 0x467454, Func Offset: 0x1b4
	// Line 866, Address: 0x467460, Func Offset: 0x1c0
	// Line 867, Address: 0x467478, Func Offset: 0x1d8
	// Line 868, Address: 0x467490, Func Offset: 0x1f0
	// Line 861, Address: 0x4674a8, Func Offset: 0x208
	// Line 865, Address: 0x4674b0, Func Offset: 0x210
	// Line 864, Address: 0x4674b4, Func Offset: 0x214
	// Line 868, Address: 0x4674b8, Func Offset: 0x218
	// Line 864, Address: 0x4674bc, Func Offset: 0x21c
	// Line 868, Address: 0x4674c4, Func Offset: 0x224
	// Line 865, Address: 0x4674cc, Func Offset: 0x22c
	// Line 868, Address: 0x4674e0, Func Offset: 0x240
	// Func End, Address: 0x467500, Func Offset: 0x260
}

// warp_animate_warble__19@unnamed@xWad5_cpp@FP5xVec2RQ211xScreenWarp6warperRC5xVec2ffff
// Start address: 0x467500
void warp_animate_warble(xVec2* uvmap, warper& warp, xVec2& loc, float32 radius, float32 base_intensity, float32 s)
{
	float32 random_u;
	float32 random_v;
	float32 r2;
	float32 ir2;
	int32 istart;
	int32 iend;
	int32 jstart;
	int32 jend;
	float32 dx;
	float32 dy;
	float32 x;
	int32 i;
	float32 y;
	int32 j;
	float32 xoff;
	float32 yoff;
	float32 dist2;
	float32 intensity;
	// Line 787, Address: 0x467500, Func Offset: 0
	// Line 791, Address: 0x467550, Func Offset: 0x50
	// Line 795, Address: 0x467574, Func Offset: 0x74
	// Line 798, Address: 0x46757c, Func Offset: 0x7c
	// Line 800, Address: 0x467594, Func Offset: 0x94
	// Line 805, Address: 0x467598, Func Offset: 0x98
	// Line 806, Address: 0x46759c, Func Offset: 0x9c
	// Line 802, Address: 0x4675a4, Func Offset: 0xa4
	// Line 806, Address: 0x4675a8, Func Offset: 0xa8
	// Line 809, Address: 0x4675ac, Func Offset: 0xac
	// Line 802, Address: 0x4675b0, Func Offset: 0xb0
	// Line 809, Address: 0x4675b4, Func Offset: 0xb4
	// Line 803, Address: 0x4675b8, Func Offset: 0xb8
	// Line 809, Address: 0x4675bc, Func Offset: 0xbc
	// Line 803, Address: 0x4675c8, Func Offset: 0xc8
	// Line 809, Address: 0x4675cc, Func Offset: 0xcc
	// Line 812, Address: 0x467670, Func Offset: 0x170
	// Line 815, Address: 0x46767c, Func Offset: 0x17c
	// Line 811, Address: 0x467680, Func Offset: 0x180
	// Line 812, Address: 0x467688, Func Offset: 0x188
	// Line 811, Address: 0x467690, Func Offset: 0x190
	// Line 815, Address: 0x467694, Func Offset: 0x194
	// Line 818, Address: 0x4676ac, Func Offset: 0x1ac
	// Line 820, Address: 0x4676c8, Func Offset: 0x1c8
	// Line 821, Address: 0x4676d0, Func Offset: 0x1d0
	// Line 820, Address: 0x4676d8, Func Offset: 0x1d8
	// Line 821, Address: 0x4676e0, Func Offset: 0x1e0
	// Line 822, Address: 0x4676e8, Func Offset: 0x1e8
	// Line 829, Address: 0x4676f4, Func Offset: 0x1f4
	// Line 830, Address: 0x467710, Func Offset: 0x210
	// Line 831, Address: 0x467728, Func Offset: 0x228
	// Line 824, Address: 0x467740, Func Offset: 0x240
	// Line 831, Address: 0x467750, Func Offset: 0x250
	// Line 827, Address: 0x467758, Func Offset: 0x258
	// Line 831, Address: 0x467760, Func Offset: 0x260
	// Line 827, Address: 0x467768, Func Offset: 0x268
	// Line 831, Address: 0x4677b0, Func Offset: 0x2b0
	// Line 827, Address: 0x4677b4, Func Offset: 0x2b4
	// Line 831, Address: 0x4677c4, Func Offset: 0x2c4
	// Line 828, Address: 0x4677cc, Func Offset: 0x2cc
	// Line 831, Address: 0x4677d4, Func Offset: 0x2d4
	// Line 828, Address: 0x4677dc, Func Offset: 0x2dc
	// Line 831, Address: 0x467824, Func Offset: 0x324
	// Line 828, Address: 0x467828, Func Offset: 0x328
	// Line 831, Address: 0x467840, Func Offset: 0x340
	// Func End, Address: 0x467894, Func Offset: 0x394
}

// remove__11xScreenWarpFPQ211xScreenWarp6warper
// Start address: 0x4678a0
void remove(warper* warp)
{
	// Line 760, Address: 0x4678a0, Func Offset: 0
	// Line 763, Address: 0x4678a4, Func Offset: 0x4
	// Line 764, Address: 0x4678c8, Func Offset: 0x28
	// Func End, Address: 0x4678d0, Func Offset: 0x30
}

// modify__11xScreenWarpFPQ211xScreenWarp6warperRC5xVec3ffQ211xScreenWarp9type_enumffi
// Start address: 0x4678d0
void modify(warper* warp, xVec3& loc, float32 radius, float32 duration, type_enum type, float32 intensity, float32 freq, int32 flags)
{
	// Line 744, Address: 0x4678d0, Func Offset: 0
	// Line 749, Address: 0x4678e4, Func Offset: 0x14
	// Line 750, Address: 0x46794c, Func Offset: 0x7c
	// Line 751, Address: 0x467978, Func Offset: 0xa8
	// Line 753, Address: 0x467984, Func Offset: 0xb4
	// Line 754, Address: 0x467994, Func Offset: 0xc4
	// Line 756, Address: 0x46799c, Func Offset: 0xcc
	// Line 757, Address: 0x4679b4, Func Offset: 0xe4
	// Func End, Address: 0x4679dc, Func Offset: 0x10c
}

// emit__11xScreenWarpFRC5xVec3ffQ211xScreenWarp9type_enumffi
// Start address: 0x4679e0
warper* emit(xVec3& loc, float32 radius, float32 duration, type_enum type, float32 intensity, float32 freq, int32 flags)
{
	// Line 704, Address: 0x4679e0, Func Offset: 0
	// Line 707, Address: 0x4679e4, Func Offset: 0x4
	// Line 711, Address: 0x4679ec, Func Offset: 0xc
	// Line 714, Address: 0x467a28, Func Offset: 0x48
	// Line 716, Address: 0x467a30, Func Offset: 0x50
	// Line 718, Address: 0x467a48, Func Offset: 0x68
	// Line 719, Address: 0x467a50, Func Offset: 0x70
	// Line 708, Address: 0x467a58, Func Offset: 0x78
	// Line 711, Address: 0x467a60, Func Offset: 0x80
	// Line 719, Address: 0x467a64, Func Offset: 0x84
	// Line 711, Address: 0x467a68, Func Offset: 0x88
	// Line 719, Address: 0x467a74, Func Offset: 0x94
	// Line 713, Address: 0x467a94, Func Offset: 0xb4
	// Line 719, Address: 0x467a98, Func Offset: 0xb8
	// Line 721, Address: 0x467aa8, Func Offset: 0xc8
	// Func End, Address: 0x467ab0, Func Offset: 0xd0
}

// find_type__11xScreenWarpFUi
// Start address: 0x467ab0
type_enum find_type(uint32 id)
{
	int32 i;
	// Line 674, Address: 0x467ab0, Func Offset: 0
	// Line 675, Address: 0x467abc, Func Offset: 0xc
	// Line 676, Address: 0x467ac8, Func Offset: 0x18
	// Line 677, Address: 0x467ae0, Func Offset: 0x30
	// Line 678, Address: 0x467ae4, Func Offset: 0x34
	// Func End, Address: 0x467aec, Func Offset: 0x3c
}

// render__11xScreenWarpFP8RwCamera
// Start address: 0x467af0
void render(RwCamera* cam)
{
	// Line 633, Address: 0x467af0, Func Offset: 0
	// Line 638, Address: 0x467b00, Func Offset: 0x10
	// Line 639, Address: 0x467b0c, Func Offset: 0x1c
	// Line 641, Address: 0x467b14, Func Offset: 0x24
	// Line 648, Address: 0x467b20, Func Offset: 0x30
	// Line 654, Address: 0x467b2c, Func Offset: 0x3c
	// Line 658, Address: 0x467b34, Func Offset: 0x44
	// Line 660, Address: 0x467b3c, Func Offset: 0x4c
	// Func End, Address: 0x467b4c, Func Offset: 0x5c
}

// pre_render__11xScreenWarpFv
// Start address: 0x467b50
void pre_render()
{
	// Line 630, Address: 0x467b50, Func Offset: 0
	// Func End, Address: 0x467b58, Func Offset: 0x8
}

// update__11xScreenWarpFf
// Start address: 0x467b60
void update(float32 dt)
{
	int32 type;
	warper* warp;
	warper* next_warp;
	// Line 576, Address: 0x467b60, Func Offset: 0
	// Line 588, Address: 0x467b6c, Func Offset: 0xc
	// Line 592, Address: 0x467b70, Func Offset: 0x10
	// Line 588, Address: 0x467b74, Func Offset: 0x14
	// Line 578, Address: 0x467b78, Func Offset: 0x18
	// Line 580, Address: 0x467b88, Func Offset: 0x28
	// Line 581, Address: 0x467b8c, Func Offset: 0x2c
	// Line 582, Address: 0x467b98, Func Offset: 0x38
	// Line 585, Address: 0x467ba8, Func Offset: 0x48
	// Line 587, Address: 0x467bb8, Func Offset: 0x58
	// Line 588, Address: 0x467bc0, Func Offset: 0x60
	// Line 589, Address: 0x467bd4, Func Offset: 0x74
	// Line 591, Address: 0x467be4, Func Offset: 0x84
	// Line 592, Address: 0x467bf0, Func Offset: 0x90
	// Line 594, Address: 0x467c04, Func Offset: 0xa4
	// Line 617, Address: 0x467c30, Func Offset: 0xd0
	// Line 618, Address: 0x467c38, Func Offset: 0xd8
	// Line 619, Address: 0x467c48, Func Offset: 0xe8
	// Func End, Address: 0x467c50, Func Offset: 0xf0
}

// reset__11xScreenWarpFv
// Start address: 0x467c50
void reset()
{
	// Line 564, Address: 0x467c50, Func Offset: 0
	// Line 565, Address: 0x467c54, Func Offset: 0x4
	// Line 564, Address: 0x467c58, Func Offset: 0x8
	// Line 565, Address: 0x467c5c, Func Offset: 0xc
	// Line 566, Address: 0x467cb0, Func Offset: 0x60
	// Func End, Address: 0x467cbc, Func Offset: 0x6c
}

// scene_exit__11xScreenWarpFv
// Start address: 0x467cc0
void scene_exit()
{
	// Line 560, Address: 0x467cc0, Func Offset: 0
	// Func End, Address: 0x467ccc, Func Offset: 0xc
}

// scene_enter__11xScreenWarpFv
// Start address: 0x467cd0
void scene_enter()
{
	int32 i;
	// Line 534, Address: 0x467cd0, Func Offset: 0
	// Line 539, Address: 0x467cd4, Func Offset: 0x4
	// Line 534, Address: 0x467cd8, Func Offset: 0x8
	// Line 541, Address: 0x467cdc, Func Offset: 0xc
	// Line 539, Address: 0x467ce4, Func Offset: 0x14
	// Line 540, Address: 0x467ce8, Func Offset: 0x18
	// Line 542, Address: 0x467cec, Func Offset: 0x1c
	// Line 544, Address: 0x467d54, Func Offset: 0x84
	// Line 552, Address: 0x467d98, Func Offset: 0xc8
	// Line 544, Address: 0x467d9c, Func Offset: 0xcc
	// Line 546, Address: 0x467dac, Func Offset: 0xdc
	// Line 544, Address: 0x467db4, Func Offset: 0xe4
	// Line 552, Address: 0x467dbc, Func Offset: 0xec
	// Line 544, Address: 0x467dc0, Func Offset: 0xf0
	// Line 552, Address: 0x467dc4, Func Offset: 0xf4
	// Line 544, Address: 0x467dc8, Func Offset: 0xf8
	// Line 552, Address: 0x467df4, Func Offset: 0x124
	// Line 544, Address: 0x467df8, Func Offset: 0x128
	// Line 552, Address: 0x467dfc, Func Offset: 0x12c
	// Line 544, Address: 0x467e00, Func Offset: 0x130
	// Line 547, Address: 0x467e38, Func Offset: 0x168
	// Line 544, Address: 0x467e3c, Func Offset: 0x16c
	// Line 547, Address: 0x467e40, Func Offset: 0x170
	// Line 546, Address: 0x467e44, Func Offset: 0x174
	// Line 548, Address: 0x467e48, Func Offset: 0x178
	// Line 549, Address: 0x467e4c, Func Offset: 0x17c
	// Line 546, Address: 0x467e50, Func Offset: 0x180
	// Line 548, Address: 0x467e54, Func Offset: 0x184
	// Line 549, Address: 0x467e58, Func Offset: 0x188
	// Line 546, Address: 0x467e5c, Func Offset: 0x18c
	// Line 548, Address: 0x467e60, Func Offset: 0x190
	// Line 549, Address: 0x467e64, Func Offset: 0x194
	// Line 553, Address: 0x467e68, Func Offset: 0x198
	// Line 555, Address: 0x467ed0, Func Offset: 0x200
	// Line 556, Address: 0x467f28, Func Offset: 0x258
	// Func End, Address: 0x467f34, Func Offset: 0x264
}

// animate_uvmap__19@unnamed@xWad5_cpp@FP5xVec2P8RwCamera
// Start address: 0x467f40
uint8 animate_uvmap(xVec2* uvmap, RwCamera* cam)
{
	xMat4x3& view_mat;
	uint8 need_render;
	int32 type;
	void(*animate_cb)(xVec2*, warper&, xVec2&, float32, float32, float32, float32);
	warper* warp;
	xVec2 loc;
	float32 radius;
	float32 iz;
	xVec3 loc3;
	float32 intensity;
	// Line 326, Address: 0x467f40, Func Offset: 0
	// Line 331, Address: 0x467f54, Func Offset: 0x14
	// Line 326, Address: 0x467f58, Func Offset: 0x18
	// Line 331, Address: 0x467f5c, Func Offset: 0x1c
	// Line 326, Address: 0x467f60, Func Offset: 0x20
	// Line 331, Address: 0x467f68, Func Offset: 0x28
	// Line 326, Address: 0x467f6c, Func Offset: 0x2c
	// Line 329, Address: 0x467f78, Func Offset: 0x38
	// Line 326, Address: 0x467f7c, Func Offset: 0x3c
	// Line 331, Address: 0x467f80, Func Offset: 0x40
	// Line 326, Address: 0x467f84, Func Offset: 0x44
	// Line 327, Address: 0x467f8c, Func Offset: 0x4c
	// Line 326, Address: 0x467f98, Func Offset: 0x58
	// Line 333, Address: 0x467fe0, Func Offset: 0xa0
	// Line 334, Address: 0x467ff4, Func Offset: 0xb4
	// Line 339, Address: 0x46801c, Func Offset: 0xdc
	// Line 341, Address: 0x468028, Func Offset: 0xe8
	// Line 342, Address: 0x468048, Func Offset: 0x108
	// Line 344, Address: 0x46804c, Func Offset: 0x10c
	// Line 348, Address: 0x468054, Func Offset: 0x114
	// Line 349, Address: 0x46805c, Func Offset: 0x11c
	// Line 351, Address: 0x4680bc, Func Offset: 0x17c
	// Line 352, Address: 0x468114, Func Offset: 0x1d4
	// Line 354, Address: 0x468120, Func Offset: 0x1e0
	// Line 355, Address: 0x46812c, Func Offset: 0x1ec
	// Line 356, Address: 0x468138, Func Offset: 0x1f8
	// Line 357, Address: 0x468144, Func Offset: 0x204
	// Line 361, Address: 0x46814c, Func Offset: 0x20c
	// Line 365, Address: 0x46815c, Func Offset: 0x21c
	// Line 367, Address: 0x46816c, Func Offset: 0x22c
	// Line 369, Address: 0x46817c, Func Offset: 0x23c
	// Line 371, Address: 0x46818c, Func Offset: 0x24c
	// Line 375, Address: 0x468198, Func Offset: 0x258
	// Line 377, Address: 0x4681a0, Func Offset: 0x260
	// Line 378, Address: 0x4681ec, Func Offset: 0x2ac
	// Line 388, Address: 0x4681f0, Func Offset: 0x2b0
	// Line 391, Address: 0x468214, Func Offset: 0x2d4
	// Line 394, Address: 0x468218, Func Offset: 0x2d8
	// Line 391, Address: 0x46821c, Func Offset: 0x2dc
	// Line 394, Address: 0x468220, Func Offset: 0x2e0
	// Line 392, Address: 0x468224, Func Offset: 0x2e4
	// Line 394, Address: 0x468228, Func Offset: 0x2e8
	// Line 392, Address: 0x46822c, Func Offset: 0x2ec
	// Line 391, Address: 0x468230, Func Offset: 0x2f0
	// Line 392, Address: 0x468234, Func Offset: 0x2f4
	// Line 391, Address: 0x468238, Func Offset: 0x2f8
	// Line 392, Address: 0x46823c, Func Offset: 0x2fc
	// Line 394, Address: 0x468240, Func Offset: 0x300
	// Line 395, Address: 0x468250, Func Offset: 0x310
	// Line 396, Address: 0x46825c, Func Offset: 0x31c
	// Line 398, Address: 0x46826c, Func Offset: 0x32c
	// Line 399, Address: 0x468270, Func Offset: 0x330
	// Func End, Address: 0x4682b8, Func Offset: 0x378
}

