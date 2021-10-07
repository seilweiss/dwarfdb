



void render_flares();
void cb_dispatch(xBase* to, uint32 event);
void add_flare();
void update_position();
void update(float32 dt);
void load(xBase& data, xDynAsset& asset);
void render_all();
void refresh_light_volume();
void setup_all();
RpMeshHeader* cone_stripper(RpBuildMesh* build_mesh);
void set_cone_atomic_color_faded(RpAtomic* atomic, xColor_tag color);
RpAtomic* create_cone_atomic();
void set_cone_verts(RpAtomic* atomic, float32 radius, float32 slope, float32 max_dist);
void set_cone_tris(RpAtomic* atomic);
int32 compare_cones(void* e1, void* e2);
void render();

// render_flares__10zSpotlightFv
// Start address: 0x2e7010
void zSpotlight::render_flares()
{
	RxObjSpace3DVertex* vert_buffer;
	RxObjSpace3DVertex* vert;
	RxObjSpace3DVertex* end_vert;
	RwRaster* raster;
	flare_element* flare;
	flare_element* end_flare;
	xMat4x3& mat;
	xColor_tag color;
	float32 size;
	float32 rx;
	float32 ry;
	float32 rz;
	float32 ux;
	float32 uy;
	float32 uz;
	float32 x;
	float32 y;
	float32 z;
	// Line 1396, Address: 0x2e7010, Func Offset: 0
	// Line 1397, Address: 0x2e7040, Func Offset: 0x30
	// Line 1403, Address: 0x2e7048, Func Offset: 0x38
	// Line 1400, Address: 0x2e704c, Func Offset: 0x3c
	// Line 1404, Address: 0x2e7050, Func Offset: 0x40
	// Line 1400, Address: 0x2e7054, Func Offset: 0x44
	// Line 1401, Address: 0x2e7058, Func Offset: 0x48
	// Line 1404, Address: 0x2e7064, Func Offset: 0x54
	// Line 1405, Address: 0x2e7068, Func Offset: 0x58
	// Line 1407, Address: 0x2e7088, Func Offset: 0x78
	// Line 1409, Address: 0x2e7094, Func Offset: 0x84
	// Line 1411, Address: 0x2e70c0, Func Offset: 0xb0
	// Line 1412, Address: 0x2e70c8, Func Offset: 0xb8
	// Line 1413, Address: 0x2e70cc, Func Offset: 0xbc
	// Line 1415, Address: 0x2e70d0, Func Offset: 0xc0
	// Line 1414, Address: 0x2e70d4, Func Offset: 0xc4
	// Line 1415, Address: 0x2e70d8, Func Offset: 0xc8
	// Line 1418, Address: 0x2e70e8, Func Offset: 0xd8
	// Line 1425, Address: 0x2e70ec, Func Offset: 0xdc
	// Line 1419, Address: 0x2e70f0, Func Offset: 0xe0
	// Line 1425, Address: 0x2e70f4, Func Offset: 0xe4
	// Line 1419, Address: 0x2e70f8, Func Offset: 0xe8
	// Line 1420, Address: 0x2e7100, Func Offset: 0xf0
	// Line 1419, Address: 0x2e7104, Func Offset: 0xf4
	// Line 1425, Address: 0x2e7108, Func Offset: 0xf8
	// Line 1423, Address: 0x2e710c, Func Offset: 0xfc
	// Line 1419, Address: 0x2e7114, Func Offset: 0x104
	// Line 1423, Address: 0x2e7118, Func Offset: 0x108
	// Line 1419, Address: 0x2e711c, Func Offset: 0x10c
	// Line 1424, Address: 0x2e7120, Func Offset: 0x110
	// Line 1419, Address: 0x2e7124, Func Offset: 0x114
	// Line 1424, Address: 0x2e7128, Func Offset: 0x118
	// Line 1419, Address: 0x2e712c, Func Offset: 0x11c
	// Line 1424, Address: 0x2e7130, Func Offset: 0x120
	// Line 1423, Address: 0x2e7134, Func Offset: 0x124
	// Line 1424, Address: 0x2e7138, Func Offset: 0x128
	// Line 1423, Address: 0x2e713c, Func Offset: 0x12c
	// Line 1424, Address: 0x2e7140, Func Offset: 0x130
	// Line 1423, Address: 0x2e7144, Func Offset: 0x134
	// Line 1424, Address: 0x2e7148, Func Offset: 0x138
	// Line 1425, Address: 0x2e714c, Func Offset: 0x13c
	// Line 1426, Address: 0x2e7154, Func Offset: 0x144
	// Line 1425, Address: 0x2e7158, Func Offset: 0x148
	// Line 1427, Address: 0x2e7160, Func Offset: 0x150
	// Line 1426, Address: 0x2e7164, Func Offset: 0x154
	// Line 1427, Address: 0x2e7170, Func Offset: 0x160
	// Line 1428, Address: 0x2e7178, Func Offset: 0x168
	// Line 1430, Address: 0x2e7180, Func Offset: 0x170
	// Line 1431, Address: 0x2e7184, Func Offset: 0x174
	// Line 1430, Address: 0x2e7188, Func Offset: 0x178
	// Line 1431, Address: 0x2e718c, Func Offset: 0x17c
	// Line 1430, Address: 0x2e7190, Func Offset: 0x180
	// Line 1431, Address: 0x2e7194, Func Offset: 0x184
	// Line 1430, Address: 0x2e719c, Func Offset: 0x18c
	// Line 1431, Address: 0x2e71f0, Func Offset: 0x1e0
	// Line 1432, Address: 0x2e7214, Func Offset: 0x204
	// Line 1438, Address: 0x2e7278, Func Offset: 0x268
	// Line 1440, Address: 0x2e7290, Func Offset: 0x280
	// Line 1442, Address: 0x2e7294, Func Offset: 0x284
	// Line 1438, Address: 0x2e7298, Func Offset: 0x288
	// Line 1439, Address: 0x2e72b0, Func Offset: 0x2a0
	// Line 1438, Address: 0x2e72b4, Func Offset: 0x2a4
	// Line 1439, Address: 0x2e72c0, Func Offset: 0x2b0
	// Line 1438, Address: 0x2e72c4, Func Offset: 0x2b4
	// Line 1439, Address: 0x2e72cc, Func Offset: 0x2bc
	// Line 1440, Address: 0x2e72e0, Func Offset: 0x2d0
	// Line 1439, Address: 0x2e72e4, Func Offset: 0x2d4
	// Line 1440, Address: 0x2e72f4, Func Offset: 0x2e4
	// Line 1439, Address: 0x2e72f8, Func Offset: 0x2e8
	// Line 1440, Address: 0x2e72fc, Func Offset: 0x2ec
	// Line 1442, Address: 0x2e7308, Func Offset: 0x2f8
	// Line 1440, Address: 0x2e730c, Func Offset: 0x2fc
	// Line 1442, Address: 0x2e7328, Func Offset: 0x318
	// Line 1444, Address: 0x2e7350, Func Offset: 0x340
	// Line 1445, Address: 0x2e7358, Func Offset: 0x348
	// Line 1447, Address: 0x2e735c, Func Offset: 0x34c
	// Line 1449, Address: 0x2e7370, Func Offset: 0x360
	// Line 1451, Address: 0x2e739c, Func Offset: 0x38c
	// Line 1411, Address: 0x2e7470, Func Offset: 0x460
	// Line 1451, Address: 0x2e7478, Func Offset: 0x468
	// Line 1411, Address: 0x2e74a4, Func Offset: 0x494
	// Line 1451, Address: 0x2e74a8, Func Offset: 0x498
	// Line 1433, Address: 0x2e753c, Func Offset: 0x52c
	// Line 1451, Address: 0x2e7540, Func Offset: 0x530
	// Line 1436, Address: 0x2e7544, Func Offset: 0x534
	// Line 1451, Address: 0x2e7548, Func Offset: 0x538
	// Line 1444, Address: 0x2e758c, Func Offset: 0x57c
	// Line 1451, Address: 0x2e7594, Func Offset: 0x584
	// Line 1453, Address: 0x2e7664, Func Offset: 0x654
	// Func End, Address: 0x2e7694, Func Offset: 0x684
}

// cb_dispatch__10zSpotlightFP5xBaseP5xBaseUiPCfP5xBaseUi
// Start address: 0x2e76a0
void zSpotlight::cb_dispatch(xBase* to, uint32 event)
{
	zSpotlight& e;
	// Line 1387, Address: 0x2e76a0, Func Offset: 0
	// Line 1391, Address: 0x2e76a4, Func Offset: 0x4
	// Line 1387, Address: 0x2e76a8, Func Offset: 0x8
	// Line 1391, Address: 0x2e76b0, Func Offset: 0x10
	// Line 1392, Address: 0x2e7968, Func Offset: 0x2c8
	// Line 1391, Address: 0x2e7970, Func Offset: 0x2d0
	// Line 1392, Address: 0x2e7984, Func Offset: 0x2e4
	// Line 1391, Address: 0x2e7988, Func Offset: 0x2e8
	// Line 1392, Address: 0x2e79a8, Func Offset: 0x308
	// Line 1391, Address: 0x2e79ac, Func Offset: 0x30c
	// Line 1392, Address: 0x2e79bc, Func Offset: 0x31c
	// Line 1391, Address: 0x2e79cc, Func Offset: 0x32c
	// Line 1392, Address: 0x2e79d0, Func Offset: 0x330
	// Func End, Address: 0x2e79f0, Func Offset: 0x350
}

// add_flare__10zSpotlightFv
// Start address: 0x2e79f0
void zSpotlight::add_flare()
{
	flare_element* flare;
	float32 mag;
	float32 size0;
	float32 glow0;
	// Line 1290, Address: 0x2e79f0, Func Offset: 0
	// Line 1292, Address: 0x2e7a04, Func Offset: 0x14
	// Line 1295, Address: 0x2e7a08, Func Offset: 0x18
	// Line 1292, Address: 0x2e7a0c, Func Offset: 0x1c
	// Line 1293, Address: 0x2e7a14, Func Offset: 0x24
	// Line 1292, Address: 0x2e7a18, Func Offset: 0x28
	// Line 1293, Address: 0x2e7a1c, Func Offset: 0x2c
	// Line 1294, Address: 0x2e7a20, Func Offset: 0x30
	// Line 1295, Address: 0x2e7a28, Func Offset: 0x38
	// Line 1296, Address: 0x2e7a2c, Func Offset: 0x3c
	// Line 1298, Address: 0x2e7a4c, Func Offset: 0x5c
	// Line 1299, Address: 0x2e7a7c, Func Offset: 0x8c
	// Line 1301, Address: 0x2e7a88, Func Offset: 0x98
	// Line 1302, Address: 0x2e7a8c, Func Offset: 0x9c
	// Line 1304, Address: 0x2e7a94, Func Offset: 0xa4
	// Line 1306, Address: 0x2e7a98, Func Offset: 0xa8
	// Line 1307, Address: 0x2e7ab0, Func Offset: 0xc0
	// Line 1309, Address: 0x2e7ae0, Func Offset: 0xf0
	// Line 1316, Address: 0x2e7b70, Func Offset: 0x180
	// Func End, Address: 0x2e7ba4, Func Offset: 0x1b4
}

// update_position__10zSpotlightFf
// Start address: 0x2e7bb0
void zSpotlight::update_position()
{
	int32 attach_bone;
	int32 target_bone;
	// Line 1259, Address: 0x2e7bb0, Func Offset: 0
	// Line 1260, Address: 0x2e7bc0, Func Offset: 0x10
	// Line 1263, Address: 0x2e7bc8, Func Offset: 0x18
	// Line 1264, Address: 0x2e7bd0, Func Offset: 0x20
	// Line 1266, Address: 0x2e7bec, Func Offset: 0x3c
	// Line 1268, Address: 0x2e7bfc, Func Offset: 0x4c
	// Line 1277, Address: 0x2e7c04, Func Offset: 0x54
	// Line 1278, Address: 0x2e7c0c, Func Offset: 0x5c
	// Line 1280, Address: 0x2e7c28, Func Offset: 0x78
	// Line 1281, Address: 0x2e7c34, Func Offset: 0x84
	// Line 1284, Address: 0x2e7c68, Func Offset: 0xb8
	// Line 1285, Address: 0x2e7c88, Func Offset: 0xd8
	// Line 1286, Address: 0x2e7ca4, Func Offset: 0xf4
	// Line 1287, Address: 0x2e7cbc, Func Offset: 0x10c
	// Line 1271, Address: 0x2e7cd0, Func Offset: 0x120
	// Line 1287, Address: 0x2e7cd4, Func Offset: 0x124
	// Line 1271, Address: 0x2e7ce8, Func Offset: 0x138
	// Line 1287, Address: 0x2e7cf0, Func Offset: 0x140
	// Line 1272, Address: 0x2e7d00, Func Offset: 0x150
	// Line 1287, Address: 0x2e7d08, Func Offset: 0x158
	// Line 1273, Address: 0x2e7d18, Func Offset: 0x168
	// Line 1274, Address: 0x2e7d20, Func Offset: 0x170
	// Line 1287, Address: 0x2e7d30, Func Offset: 0x180
	// Func End, Address: 0x2e7d40, Func Offset: 0x190
}

// update__10zSpotlightFf
// Start address: 0x2e7d40
void zSpotlight::update(float32 dt)
{
	uint8 hit;
	xMat4x3& model_mat;
	// Line 1135, Address: 0x2e7d40, Func Offset: 0
	// Line 1136, Address: 0x2e7d4c, Func Offset: 0xc
	// Line 1138, Address: 0x2e7d58, Func Offset: 0x18
	// Line 1156, Address: 0x2e7d68, Func Offset: 0x28
	// Line 1168, Address: 0x2e7d78, Func Offset: 0x38
	// Line 1141, Address: 0x2e7d84, Func Offset: 0x44
	// Line 1168, Address: 0x2e7d98, Func Offset: 0x58
	// Line 1141, Address: 0x2e7dac, Func Offset: 0x6c
	// Line 1168, Address: 0x2e7db0, Func Offset: 0x70
	// Line 1149, Address: 0x2e7dc4, Func Offset: 0x84
	// Line 1168, Address: 0x2e7dc8, Func Offset: 0x88
	// Line 1151, Address: 0x2e7dd0, Func Offset: 0x90
	// Line 1152, Address: 0x2e7dd4, Func Offset: 0x94
	// Line 1151, Address: 0x2e7dd8, Func Offset: 0x98
	// Line 1152, Address: 0x2e7ddc, Func Offset: 0x9c
	// Line 1168, Address: 0x2e7de4, Func Offset: 0xa4
	// Line 1152, Address: 0x2e7de8, Func Offset: 0xa8
	// Line 1168, Address: 0x2e7df8, Func Offset: 0xb8
	// Line 1144, Address: 0x2e7e0c, Func Offset: 0xcc
	// Line 1168, Address: 0x2e7e10, Func Offset: 0xd0
	// Line 1146, Address: 0x2e7e18, Func Offset: 0xd8
	// Line 1147, Address: 0x2e7e1c, Func Offset: 0xdc
	// Line 1168, Address: 0x2e7e24, Func Offset: 0xe4
	// Line 1147, Address: 0x2e7e28, Func Offset: 0xe8
	// Line 1168, Address: 0x2e7e3c, Func Offset: 0xfc
	// Line 1148, Address: 0x2e7e44, Func Offset: 0x104
	// Line 1168, Address: 0x2e7e4c, Func Offset: 0x10c
	// Func End, Address: 0x2e7ec8, Func Offset: 0x188
}

// load__10zSpotlightFR5xBaseR9xDynAssetUi
// Start address: 0x2e7ed0
void zSpotlight::load(xBase& data, xDynAsset& asset)
{
	// Line 1094, Address: 0x2e7ed0, Func Offset: 0
	// Line 1096, Address: 0x2e7ee0, Func Offset: 0x10
	// Line 1097, Address: 0x2e7f20, Func Offset: 0x50
	// Func End, Address: 0x2e7f34, Func Offset: 0x64
}

// render_all__10zSpotlightFv
// Start address: 0x2e7f40
void zSpotlight::render_all()
{
	zScene& s;
	zSpotlight* it;
	zSpotlight* end;
	// Line 1046, Address: 0x2e7f40, Func Offset: 0
	// Line 1047, Address: 0x2e7f44, Func Offset: 0x4
	// Line 1046, Address: 0x2e7f48, Func Offset: 0x8
	// Line 1047, Address: 0x2e7f70, Func Offset: 0x30
	// Line 1048, Address: 0x2e7f74, Func Offset: 0x34
	// Line 1051, Address: 0x2e7f80, Func Offset: 0x40
	// Line 1053, Address: 0x2e7f88, Func Offset: 0x48
	// Line 1056, Address: 0x2e7f90, Func Offset: 0x50
	// Line 1055, Address: 0x2e7f94, Func Offset: 0x54
	// Line 1056, Address: 0x2e7f98, Func Offset: 0x58
	// Line 1057, Address: 0x2e7fa8, Func Offset: 0x68
	// Line 1059, Address: 0x2e7fb4, Func Offset: 0x74
	// Line 1061, Address: 0x2e7fcc, Func Offset: 0x8c
	// Line 1062, Address: 0x2e7ff0, Func Offset: 0xb0
	// Line 1064, Address: 0x2e8004, Func Offset: 0xc4
	// Line 1091, Address: 0x2e8018, Func Offset: 0xd8
	// Line 1066, Address: 0x2e8024, Func Offset: 0xe4
	// Line 1091, Address: 0x2e8028, Func Offset: 0xe8
	// Line 1070, Address: 0x2e8034, Func Offset: 0xf4
	// Line 1091, Address: 0x2e8038, Func Offset: 0xf8
	// Line 1071, Address: 0x2e8048, Func Offset: 0x108
	// Line 1091, Address: 0x2e804c, Func Offset: 0x10c
	// Line 1075, Address: 0x2e8054, Func Offset: 0x114
	// Line 1091, Address: 0x2e8058, Func Offset: 0x118
	// Line 1075, Address: 0x2e8064, Func Offset: 0x124
	// Line 1091, Address: 0x2e8068, Func Offset: 0x128
	// Line 1075, Address: 0x2e808c, Func Offset: 0x14c
	// Line 1091, Address: 0x2e8090, Func Offset: 0x150
	// Line 1075, Address: 0x2e80c4, Func Offset: 0x184
	// Line 1091, Address: 0x2e80c8, Func Offset: 0x188
	// Line 1075, Address: 0x2e80d4, Func Offset: 0x194
	// Line 1091, Address: 0x2e80e0, Func Offset: 0x1a0
	// Line 1075, Address: 0x2e80ec, Func Offset: 0x1ac
	// Line 1091, Address: 0x2e80f4, Func Offset: 0x1b4
	// Line 1075, Address: 0x2e82cc, Func Offset: 0x38c
	// Line 1091, Address: 0x2e82d0, Func Offset: 0x390
	// Line 1075, Address: 0x2e82d4, Func Offset: 0x394
	// Line 1091, Address: 0x2e82dc, Func Offset: 0x39c
	// Line 1075, Address: 0x2e82fc, Func Offset: 0x3bc
	// Line 1091, Address: 0x2e8300, Func Offset: 0x3c0
	// Line 1086, Address: 0x2e8338, Func Offset: 0x3f8
	// Line 1091, Address: 0x2e8344, Func Offset: 0x404
	// Line 1070, Address: 0x2e8358, Func Offset: 0x418
	// Line 1091, Address: 0x2e835c, Func Offset: 0x41c
	// Func End, Address: 0x2e839c, Func Offset: 0x45c
}

// refresh_light_volume__10zSpotlightFv
// Start address: 0x2e83a0
void zSpotlight::refresh_light_volume()
{
	float32 radius;
	float32 max_dist;
	float32 view_angle;
	xVec3& cam_loc;
	xMat4x3 scale_mat;
	xMat4x3 expand_mat;
	float32 scale;
	float32 cam_dist;
	float32 radius_at_camera;
	xMat4x3 trans_mat;
	xMat4x3 itrans_mat;
	xMat4x3 temp_mat1;
	xMat4x3 temp_mat2;
	// Line 964, Address: 0x2e83a0, Func Offset: 0
	// Line 965, Address: 0x2e83bc, Func Offset: 0x1c
	// Line 968, Address: 0x2e83cc, Func Offset: 0x2c
	// Line 969, Address: 0x2e8458, Func Offset: 0xb8
	// Line 970, Address: 0x2e845c, Func Offset: 0xbc
	// Line 971, Address: 0x2e8490, Func Offset: 0xf0
	// Line 974, Address: 0x2e84a8, Func Offset: 0x108
	// Line 975, Address: 0x2e84bc, Func Offset: 0x11c
	// Line 977, Address: 0x2e84c8, Func Offset: 0x128
	// Line 981, Address: 0x2e84dc, Func Offset: 0x13c
	// Line 985, Address: 0x2e8504, Func Offset: 0x164
	// Line 987, Address: 0x2e8508, Func Offset: 0x168
	// Line 988, Address: 0x2e8510, Func Offset: 0x170
	// Line 987, Address: 0x2e8514, Func Offset: 0x174
	// Line 988, Address: 0x2e8518, Func Offset: 0x178
	// Line 995, Address: 0x2e854c, Func Offset: 0x1ac
	// Line 998, Address: 0x2e855c, Func Offset: 0x1bc
	// Line 997, Address: 0x2e8560, Func Offset: 0x1c0
	// Line 998, Address: 0x2e8574, Func Offset: 0x1d4
	// Line 999, Address: 0x2e8590, Func Offset: 0x1f0
	// Line 998, Address: 0x2e8594, Func Offset: 0x1f4
	// Line 999, Address: 0x2e8598, Func Offset: 0x1f8
	// Line 998, Address: 0x2e85a0, Func Offset: 0x200
	// Line 999, Address: 0x2e85b0, Func Offset: 0x210
	// Line 1000, Address: 0x2e85b8, Func Offset: 0x218
	// Line 1003, Address: 0x2e85c0, Func Offset: 0x220
	// Line 1004, Address: 0x2e8640, Func Offset: 0x2a0
	// Line 1003, Address: 0x2e8644, Func Offset: 0x2a4
	// Line 1004, Address: 0x2e8650, Func Offset: 0x2b0
	// Line 1005, Address: 0x2e8658, Func Offset: 0x2b8
	// Line 1008, Address: 0x2e8664, Func Offset: 0x2c4
	// Line 1009, Address: 0x2e8678, Func Offset: 0x2d8
	// Line 1008, Address: 0x2e867c, Func Offset: 0x2dc
	// Line 1009, Address: 0x2e8680, Func Offset: 0x2e0
	// Line 1008, Address: 0x2e8684, Func Offset: 0x2e4
	// Line 1009, Address: 0x2e868c, Func Offset: 0x2ec
	// Line 1008, Address: 0x2e8690, Func Offset: 0x2f0
	// Line 1009, Address: 0x2e8698, Func Offset: 0x2f8
	// Line 1010, Address: 0x2e86c4, Func Offset: 0x324
	// Line 1011, Address: 0x2e86e0, Func Offset: 0x340
	// Line 1010, Address: 0x2e86e4, Func Offset: 0x344
	// Line 1011, Address: 0x2e86e8, Func Offset: 0x348
	// Line 1010, Address: 0x2e86ec, Func Offset: 0x34c
	// Line 1011, Address: 0x2e86f0, Func Offset: 0x350
	// Line 1012, Address: 0x2e870c, Func Offset: 0x36c
	// Line 1011, Address: 0x2e8710, Func Offset: 0x370
	// Line 1012, Address: 0x2e8714, Func Offset: 0x374
	// Line 1011, Address: 0x2e871c, Func Offset: 0x37c
	// Line 1012, Address: 0x2e872c, Func Offset: 0x38c
	// Line 1013, Address: 0x2e8734, Func Offset: 0x394
	// Line 1014, Address: 0x2e8744, Func Offset: 0x3a4
	// Line 1015, Address: 0x2e8754, Func Offset: 0x3b4
	// Line 1019, Address: 0x2e875c, Func Offset: 0x3bc
	// Line 1018, Address: 0x2e8760, Func Offset: 0x3c0
	// Line 1019, Address: 0x2e8764, Func Offset: 0x3c4
	// Line 1018, Address: 0x2e876c, Func Offset: 0x3cc
	// Line 1019, Address: 0x2e8770, Func Offset: 0x3d0
	// Line 1022, Address: 0x2e87e4, Func Offset: 0x444
	// Line 1023, Address: 0x2e8868, Func Offset: 0x4c8
	// Line 1024, Address: 0x2e886c, Func Offset: 0x4cc
	// Line 1025, Address: 0x2e8898, Func Offset: 0x4f8
	// Line 1024, Address: 0x2e889c, Func Offset: 0x4fc
	// Line 1025, Address: 0x2e88a4, Func Offset: 0x504
	// Line 1026, Address: 0x2e88a8, Func Offset: 0x508
	// Line 1030, Address: 0x2e88b0, Func Offset: 0x510
	// Line 1031, Address: 0x2e88b4, Func Offset: 0x514
	// Line 1030, Address: 0x2e88b8, Func Offset: 0x518
	// Line 1031, Address: 0x2e88c4, Func Offset: 0x524
	// Line 1030, Address: 0x2e88c8, Func Offset: 0x528
	// Line 1031, Address: 0x2e893c, Func Offset: 0x59c
	// Line 1032, Address: 0x2e8940, Func Offset: 0x5a0
	// Line 1033, Address: 0x2e8974, Func Offset: 0x5d4
	// Line 1036, Address: 0x2e897c, Func Offset: 0x5dc
	// Line 1039, Address: 0x2e8984, Func Offset: 0x5e4
	// Line 1040, Address: 0x2e8994, Func Offset: 0x5f4
	// Line 1041, Address: 0x2e89a0, Func Offset: 0x600
	// Line 1042, Address: 0x2e89a8, Func Offset: 0x608
	// Func End, Address: 0x2e89c8, Func Offset: 0x628
}

// setup_all__10zSpotlightFv
// Start address: 0x2e89d0
void zSpotlight::setup_all()
{
	zScene& s;
	zSpotlight* spots;
	int32 spots_size;
	zSpotlight* spot;
	zSpotlight* end_spot;
	cone_attrib* cone_buffer;
	cone_attrib* cone;
	cone_attrib* end_cone;
	RpAtomic** lights;
	RpAtomic** auras;
	int32 lights_size;
	int32 auras_size;
	cone_attrib* last_light_cone;
	cone_attrib* last_aura_cone;
	// Line 851, Address: 0x2e89d0, Func Offset: 0
	// Line 858, Address: 0x2e89d4, Func Offset: 0x4
	// Line 851, Address: 0x2e89d8, Func Offset: 0x8
	// Line 858, Address: 0x2e8a08, Func Offset: 0x38
	// Line 852, Address: 0x2e8a0c, Func Offset: 0x3c
	// Line 853, Address: 0x2e8a10, Func Offset: 0x40
	// Line 855, Address: 0x2e8a14, Func Offset: 0x44
	// Line 856, Address: 0x2e8a18, Func Offset: 0x48
	// Line 859, Address: 0x2e8a1c, Func Offset: 0x4c
	// Line 860, Address: 0x2e8a20, Func Offset: 0x50
	// Line 861, Address: 0x2e8a24, Func Offset: 0x54
	// Line 862, Address: 0x2e8a30, Func Offset: 0x60
	// Line 866, Address: 0x2e8a38, Func Offset: 0x68
	// Line 867, Address: 0x2e8a4c, Func Offset: 0x7c
	// Line 866, Address: 0x2e8a54, Func Offset: 0x84
	// Line 867, Address: 0x2e8a58, Func Offset: 0x88
	// Line 870, Address: 0x2e8a64, Func Offset: 0x94
	// Line 871, Address: 0x2e8a6c, Func Offset: 0x9c
	// Line 875, Address: 0x2e8dc0, Func Offset: 0x3f0
	// Line 876, Address: 0x2e8dd8, Func Offset: 0x408
	// Line 877, Address: 0x2e8ddc, Func Offset: 0x40c
	// Line 879, Address: 0x2e8de8, Func Offset: 0x418
	// Line 880, Address: 0x2e8df4, Func Offset: 0x424
	// Line 881, Address: 0x2e8e00, Func Offset: 0x430
	// Line 882, Address: 0x2e8e08, Func Offset: 0x438
	// Line 883, Address: 0x2e8e0c, Func Offset: 0x43c
	// Line 871, Address: 0x2e8e20, Func Offset: 0x450
	// Line 883, Address: 0x2e8e28, Func Offset: 0x458
	// Line 871, Address: 0x2e8ef0, Func Offset: 0x520
	// Line 883, Address: 0x2e8f00, Func Offset: 0x530
	// Line 871, Address: 0x2e8f08, Func Offset: 0x538
	// Line 883, Address: 0x2e8f0c, Func Offset: 0x53c
	// Line 871, Address: 0x2e8f1c, Func Offset: 0x54c
	// Line 883, Address: 0x2e8f2c, Func Offset: 0x55c
	// Line 871, Address: 0x2e8f30, Func Offset: 0x560
	// Line 883, Address: 0x2e8f40, Func Offset: 0x570
	// Line 884, Address: 0x2e8f50, Func Offset: 0x580
	// Line 889, Address: 0x2e8f68, Func Offset: 0x598
	// Line 890, Address: 0x2e8f7c, Func Offset: 0x5ac
	// Line 889, Address: 0x2e8f84, Func Offset: 0x5b4
	// Line 890, Address: 0x2e8f88, Func Offset: 0x5b8
	// Line 891, Address: 0x2e8f94, Func Offset: 0x5c4
	// Line 892, Address: 0x2e8f9c, Func Offset: 0x5cc
	// Line 893, Address: 0x2e8fa0, Func Offset: 0x5d0
	// Line 895, Address: 0x2e8fbc, Func Offset: 0x5ec
	// Line 918, Address: 0x2e9018, Func Offset: 0x648
	// Line 920, Address: 0x2e9020, Func Offset: 0x650
	// Line 918, Address: 0x2e9024, Func Offset: 0x654
	// Line 920, Address: 0x2e9030, Func Offset: 0x660
	// Line 921, Address: 0x2e907c, Func Offset: 0x6ac
	// Line 927, Address: 0x2e9088, Func Offset: 0x6b8
	// Line 922, Address: 0x2e9094, Func Offset: 0x6c4
	// Line 923, Address: 0x2e9098, Func Offset: 0x6c8
	// Line 924, Address: 0x2e909c, Func Offset: 0x6cc
	// Line 927, Address: 0x2e90a0, Func Offset: 0x6d0
	// Line 928, Address: 0x2e90a8, Func Offset: 0x6d8
	// Line 904, Address: 0x2e90f0, Func Offset: 0x720
	// Line 928, Address: 0x2e90f4, Func Offset: 0x724
	// Line 904, Address: 0x2e913c, Func Offset: 0x76c
	// Line 928, Address: 0x2e9140, Func Offset: 0x770
	// Line 904, Address: 0x2e915c, Func Offset: 0x78c
	// Line 928, Address: 0x2e9160, Func Offset: 0x790
	// Line 905, Address: 0x2e9164, Func Offset: 0x794
	// Line 928, Address: 0x2e9168, Func Offset: 0x798
	// Line 905, Address: 0x2e9180, Func Offset: 0x7b0
	// Line 928, Address: 0x2e9184, Func Offset: 0x7b4
	// Line 913, Address: 0x2e920c, Func Offset: 0x83c
	// Line 928, Address: 0x2e9210, Func Offset: 0x840
	// Func End, Address: 0x2e9270, Func Offset: 0x8a0
}

// cone_stripper__19@unnamed@zWad3_cpp@FP11RpBuildMeshPv
// Start address: 0x2e9270
RpMeshHeader* cone_stripper(RpBuildMesh* build_mesh)
{
	RpMeshHeader* mesh_header;
	RpMesh* mesh;
	uint16* indices;
	int32 left_index_value;
	int32 right_index_value;
	uint16* end_column;
	int32 il;
	int32 ir;
	// Line 545, Address: 0x2e9270, Func Offset: 0
	// Line 576, Address: 0x2e9280, Func Offset: 0x10
	// Line 577, Address: 0x2e9288, Func Offset: 0x18
	// Line 583, Address: 0x2e928c, Func Offset: 0x1c
	// Line 577, Address: 0x2e9290, Func Offset: 0x20
	// Line 580, Address: 0x2e9294, Func Offset: 0x24
	// Line 578, Address: 0x2e9298, Func Offset: 0x28
	// Line 584, Address: 0x2e929c, Func Offset: 0x2c
	// Line 579, Address: 0x2e92a0, Func Offset: 0x30
	// Line 590, Address: 0x2e92a4, Func Offset: 0x34
	// Line 580, Address: 0x2e92a8, Func Offset: 0x38
	// Line 590, Address: 0x2e92ac, Func Offset: 0x3c
	// Line 581, Address: 0x2e92b0, Func Offset: 0x40
	// Line 606, Address: 0x2e92b4, Func Offset: 0x44
	// Line 585, Address: 0x2e92b8, Func Offset: 0x48
	// Line 586, Address: 0x2e92bc, Func Offset: 0x4c
	// Line 587, Address: 0x2e92c0, Func Offset: 0x50
	// Line 595, Address: 0x2e92cc, Func Offset: 0x5c
	// Line 597, Address: 0x2e92d0, Func Offset: 0x60
	// Line 599, Address: 0x2e92d8, Func Offset: 0x68
	// Line 600, Address: 0x2e92dc, Func Offset: 0x6c
	// Line 601, Address: 0x2e92e0, Func Offset: 0x70
	// Line 600, Address: 0x2e92e4, Func Offset: 0x74
	// Line 601, Address: 0x2e92e8, Func Offset: 0x78
	// Line 604, Address: 0x2e92f8, Func Offset: 0x88
	// Line 605, Address: 0x2e92fc, Func Offset: 0x8c
	// Line 606, Address: 0x2e9300, Func Offset: 0x90
	// Line 610, Address: 0x2e9308, Func Offset: 0x98
	// Line 612, Address: 0x2e930c, Func Offset: 0x9c
	// Line 610, Address: 0x2e9310, Func Offset: 0xa0
	// Line 611, Address: 0x2e9314, Func Offset: 0xa4
	// Line 612, Address: 0x2e9318, Func Offset: 0xa8
	// Line 692, Address: 0x2e9320, Func Offset: 0xb0
	// Func End, Address: 0x2e9330, Func Offset: 0xc0
}

// set_cone_atomic_color_faded__19@unnamed@zWad3_cpp@FP8RpAtomicfff10xColor_tag
// Start address: 0x2e9330
void set_cone_atomic_color_faded(RpAtomic* atomic, xColor_tag color)
{
	xColor_tag* lum;
	xColor_tag* end_lum;
	float32 rstart;
	float32 gstart;
	float32 bstart;
	float32 astart;
	float32 dr;
	float32 dg;
	float32 db;
	float32 da;
	float32 r;
	float32 g;
	float32 b;
	float32 a;
	xColor_tag* end_column_lum;
	// Line 508, Address: 0x2e9330, Func Offset: 0
	// Line 513, Address: 0x2e9334, Func Offset: 0x4
	// Line 508, Address: 0x2e9338, Func Offset: 0x8
	// Line 519, Address: 0x2e933c, Func Offset: 0xc
	// Line 513, Address: 0x2e9340, Func Offset: 0x10
	// Line 519, Address: 0x2e9344, Func Offset: 0x14
	// Line 521, Address: 0x2e9404, Func Offset: 0xd4
	// Line 524, Address: 0x2e942c, Func Offset: 0xfc
	// Line 535, Address: 0x2e9434, Func Offset: 0x104
	// Line 534, Address: 0x2e9438, Func Offset: 0x108
	// Line 535, Address: 0x2e943c, Func Offset: 0x10c
	// Line 529, Address: 0x2e9448, Func Offset: 0x118
	// Line 526, Address: 0x2e944c, Func Offset: 0x11c
	// Line 530, Address: 0x2e9458, Func Offset: 0x128
	// Line 534, Address: 0x2e9460, Func Offset: 0x130
	// Line 535, Address: 0x2e9494, Func Offset: 0x164
	// Line 536, Address: 0x2e94c8, Func Offset: 0x198
	// Line 537, Address: 0x2e94fc, Func Offset: 0x1cc
	// Line 538, Address: 0x2e9530, Func Offset: 0x200
	// Line 537, Address: 0x2e9534, Func Offset: 0x204
	// Line 539, Address: 0x2e9538, Func Offset: 0x208
	// Line 538, Address: 0x2e953c, Func Offset: 0x20c
	// Line 539, Address: 0x2e9544, Func Offset: 0x214
	// Line 540, Address: 0x2e9550, Func Offset: 0x220
	// Line 542, Address: 0x2e9558, Func Offset: 0x228
	// Func End, Address: 0x2e9560, Func Offset: 0x230
}

// create_cone_atomic__19@unnamed@zWad3_cpp@Ffff
// Start address: 0x2e9560
RpAtomic* create_cone_atomic()
{
	RpMaterial* material;
	RpGeometry* geom;
	RpAtomic* atomic;
	RwFrame* frame;
	RpTriangle* tri;
	RpTriangle* end_tri;
	// Line 437, Address: 0x2e9560, Func Offset: 0
	// Line 462, Address: 0x2e957c, Func Offset: 0x1c
	// Line 463, Address: 0x2e9588, Func Offset: 0x28
	// Line 464, Address: 0x2e9598, Func Offset: 0x38
	// Line 465, Address: 0x2e95a0, Func Offset: 0x40
	// Line 466, Address: 0x2e95a8, Func Offset: 0x48
	// Line 475, Address: 0x2e95c0, Func Offset: 0x60
	// Line 476, Address: 0x2e95c8, Func Offset: 0x68
	// Line 478, Address: 0x2e95d8, Func Offset: 0x78
	// Line 481, Address: 0x2e9608, Func Offset: 0xa8
	// Line 482, Address: 0x2e9610, Func Offset: 0xb0
	// Line 483, Address: 0x2e9618, Func Offset: 0xb8
	// Line 471, Address: 0x2e9674, Func Offset: 0x114
	// Line 485, Address: 0x2e9680, Func Offset: 0x120
	// Line 486, Address: 0x2e9740, Func Offset: 0x1e0
	// Line 491, Address: 0x2e9748, Func Offset: 0x1e8
	// Line 492, Address: 0x2e9750, Func Offset: 0x1f0
	// Line 494, Address: 0x2e9758, Func Offset: 0x1f8
	// Line 496, Address: 0x2e9760, Func Offset: 0x200
	// Line 497, Address: 0x2e9764, Func Offset: 0x204
	// Func End, Address: 0x2e9788, Func Offset: 0x228
}

// set_cone_verts__19@unnamed@zWad3_cpp@FP8RpAtomicfff
// Start address: 0x2e9790
void set_cone_verts(RpAtomic* atomic, float32 radius, float32 slope, float32 max_dist)
{
	RpMorphTarget* mt;
	xVec3* vert;
	xVec3* end_vert;
	float32 dz;
	float32 dradius;
	float32 dcos;
	float32 dsin;
	float32 xdir;
	float32 ydir;
	float32 x;
	float32 y;
	float32 z;
	float32 dx;
	float32 dy;
	xVec3* end_column_vert;
	float32 end_radius;
	float32 hdist;
	float32 hdist2;
	xSphere o;
	// Line 389, Address: 0x2e9790, Func Offset: 0
	// Line 401, Address: 0x2e9794, Func Offset: 0x4
	// Line 389, Address: 0x2e9798, Func Offset: 0x8
	// Line 401, Address: 0x2e979c, Func Offset: 0xc
	// Line 389, Address: 0x2e97a0, Func Offset: 0x10
	// Line 403, Address: 0x2e97a8, Func Offset: 0x18
	// Line 389, Address: 0x2e97ac, Func Offset: 0x1c
	// Line 403, Address: 0x2e97b0, Func Offset: 0x20
	// Line 389, Address: 0x2e97b4, Func Offset: 0x24
	// Line 401, Address: 0x2e97c8, Func Offset: 0x38
	// Line 389, Address: 0x2e97cc, Func Offset: 0x3c
	// Line 393, Address: 0x2e97d4, Func Offset: 0x44
	// Line 402, Address: 0x2e97e0, Func Offset: 0x50
	// Line 393, Address: 0x2e97e4, Func Offset: 0x54
	// Line 403, Address: 0x2e97e8, Func Offset: 0x58
	// Line 394, Address: 0x2e97ec, Func Offset: 0x5c
	// Line 403, Address: 0x2e97f0, Func Offset: 0x60
	// Line 405, Address: 0x2e980c, Func Offset: 0x7c
	// Line 407, Address: 0x2e9818, Func Offset: 0x88
	// Line 410, Address: 0x2e9820, Func Offset: 0x90
	// Line 418, Address: 0x2e9828, Func Offset: 0x98
	// Line 410, Address: 0x2e982c, Func Offset: 0x9c
	// Line 413, Address: 0x2e9830, Func Offset: 0xa0
	// Line 411, Address: 0x2e9834, Func Offset: 0xa4
	// Line 415, Address: 0x2e983c, Func Offset: 0xac
	// Line 412, Address: 0x2e9840, Func Offset: 0xb0
	// Line 413, Address: 0x2e9844, Func Offset: 0xb4
	// Line 415, Address: 0x2e9848, Func Offset: 0xb8
	// Line 419, Address: 0x2e984c, Func Offset: 0xbc
	// Line 421, Address: 0x2e9858, Func Offset: 0xc8
	// Line 422, Address: 0x2e9864, Func Offset: 0xd4
	// Line 423, Address: 0x2e9868, Func Offset: 0xd8
	// Line 422, Address: 0x2e986c, Func Offset: 0xdc
	// Line 423, Address: 0x2e9870, Func Offset: 0xe0
	// Line 424, Address: 0x2e9878, Func Offset: 0xe8
	// Line 431, Address: 0x2e9888, Func Offset: 0xf8
	// Line 433, Address: 0x2e98b4, Func Offset: 0x124
	// Line 431, Address: 0x2e98c0, Func Offset: 0x130
	// Line 433, Address: 0x2e98c4, Func Offset: 0x134
	// Line 434, Address: 0x2e98d0, Func Offset: 0x140
	// Line 428, Address: 0x2e98d8, Func Offset: 0x148
	// Line 434, Address: 0x2e98dc, Func Offset: 0x14c
	// Line 428, Address: 0x2e98e0, Func Offset: 0x150
	// Line 434, Address: 0x2e98e4, Func Offset: 0x154
	// Line 427, Address: 0x2e98e8, Func Offset: 0x158
	// Line 428, Address: 0x2e98f0, Func Offset: 0x160
	// Line 427, Address: 0x2e98f4, Func Offset: 0x164
	// Line 428, Address: 0x2e98fc, Func Offset: 0x16c
	// Line 431, Address: 0x2e9900, Func Offset: 0x170
	// Line 434, Address: 0x2e9904, Func Offset: 0x174
	// Func End, Address: 0x2e9944, Func Offset: 0x1b4
}

// set_cone_tris__19@unnamed@zWad3_cpp@FP8RpAtomic
// Start address: 0x2e9950
void set_cone_tris(RpAtomic* atomic)
{
	RpTriangle* tri;
	RpTriangle* end_tri;
	int32 index0;
	int32 index1;
	int32 end_index1;
	// Line 242, Address: 0x2e9950, Func Offset: 0
	// Line 243, Address: 0x2e9954, Func Offset: 0x4
	// Line 244, Address: 0x2e9958, Func Offset: 0x8
	// Line 242, Address: 0x2e995c, Func Offset: 0xc
	// Line 250, Address: 0x2e9964, Func Offset: 0x14
	// Line 262, Address: 0x2e996c, Func Offset: 0x1c
	// Line 263, Address: 0x2e9970, Func Offset: 0x20
	// Line 264, Address: 0x2e9974, Func Offset: 0x24
	// Line 266, Address: 0x2e997c, Func Offset: 0x2c
	// Line 267, Address: 0x2e9980, Func Offset: 0x30
	// Line 268, Address: 0x2e9984, Func Offset: 0x34
	// Line 273, Address: 0x2e998c, Func Offset: 0x3c
	// Line 283, Address: 0x2e9994, Func Offset: 0x44
	// Line 284, Address: 0x2e9998, Func Offset: 0x48
	// Line 285, Address: 0x2e999c, Func Offset: 0x4c
	// Line 287, Address: 0x2e99a0, Func Offset: 0x50
	// Line 386, Address: 0x2e99a8, Func Offset: 0x58
	// Func End, Address: 0x2e99b0, Func Offset: 0x60
}

// compare_cones__19@unnamed@zWad3_cpp@FPCvPCv
// Start address: 0x2e99b0
int32 compare_cones(void* e1, void* e2)
{
	cone_attrib& a1;
	cone_attrib& a2;
	// Line 170, Address: 0x2e99b0, Func Offset: 0
	// Line 171, Address: 0x2e99b4, Func Offset: 0x4
	// Line 170, Address: 0x2e99b8, Func Offset: 0x8
	// Line 171, Address: 0x2e99bc, Func Offset: 0xc
	// Line 173, Address: 0x2e99dc, Func Offset: 0x2c
	// Line 171, Address: 0x2e99e0, Func Offset: 0x30
	// Line 173, Address: 0x2e99e4, Func Offset: 0x34
	// Line 175, Address: 0x2e9a08, Func Offset: 0x58
	// Line 176, Address: 0x2e9a1c, Func Offset: 0x6c
	// Line 177, Address: 0x2e9a34, Func Offset: 0x84
	// Line 172, Address: 0x2e9a3c, Func Offset: 0x8c
	// Line 177, Address: 0x2e9a40, Func Offset: 0x90
	// Line 172, Address: 0x2e9a48, Func Offset: 0x98
	// Line 174, Address: 0x2e9a54, Func Offset: 0xa4
	// Line 177, Address: 0x2e9a58, Func Offset: 0xa8
	// Line 174, Address: 0x2e9a60, Func Offset: 0xb0
	// Line 178, Address: 0x2e9a68, Func Offset: 0xb8
	// Func End, Address: 0x2e9a70, Func Offset: 0xc0
}

// render__Q210zSpotlight17light_volume_typeFv
// Start address: 0x311ac0
void light_volume_type::render()
{
	// Line 821, Address: 0x311ac0, Func Offset: 0
	// Line 822, Address: 0x311ac4, Func Offset: 0x4
	// Line 821, Address: 0x311ac8, Func Offset: 0x8
	// Line 822, Address: 0x311adc, Func Offset: 0x1c
	// Line 826, Address: 0x311b10, Func Offset: 0x50
	// Line 822, Address: 0x311b14, Func Offset: 0x54
	// Line 826, Address: 0x311b1c, Func Offset: 0x5c
	// Line 828, Address: 0x311b34, Func Offset: 0x74
	// Func End, Address: 0x311b4c, Func Offset: 0x8c
}

