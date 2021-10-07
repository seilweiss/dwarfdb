



uint8 update_camera(xMat4x3* matrix, float32 dt);
uint8 enabled();
void fx_render();
uint8 render();
uint8 IsPlayerInControl();
void reset();
void init();
substate_enum_0 supdate_fade_in(drop_state_type& gst, float32& dt);
substate_enum_0 supdate_start_fade_in(drop_state_type& gst, float32& dt);
substate_enum_0 supdate_moving_out(float32& dt);
substate_enum_0 supdate_starting(float32& dt);
substate_enum_0 supdate_stopped(drop_state_type& gst, float32& dt);
substate_enum_0 supdate_stopping(drop_state_type& gst, float32& dt);
substate_enum_0 supdate_moving_in(float32& dt);
substate_enum_1 supdate_fade_out(grab_state_type& gst, float32& dt);
substate_enum_1 supdate_start_fade_out(grab_state_type& gst, float32& dt);
substate_enum_1 supdate_moving_out(float32& dt);
substate_enum_1 supdate_starting(float32& dt);
substate_enum_1 supdate_stopped(grab_state_type& gst, float32& dt);
substate_enum_1 supdate_stopping(grab_state_type& gst, float32& dt);
substate_enum_1 supdate_moving_in(float32& dt);
substate_enum_1 supdate_begin_wait(grab_state_type& gst, float32& dt);
substate_enum_1 supdate_reorient();
void load_settings(xIniFile& ini);
void render_ghost();
void oob_before_anim_mat(xAnimPlay* play, xQuat* quat, xVec3* tran, int32 boneCount);
void start();
void stop();
state_enum_2 update(xScene& s, float32& dt);
void start();
void stop();
state_enum_2 update(xScene& s, float32& dt);
void start();
void stop();
state_enum_2 update(float32& dt);
void start();
void stop();
state_enum_2 update();

// update_camera__9oob_stateFP7xMat4x3f
// Start address: 0x3178e0
uint8 update_camera(xMat4x3* matrix, float32 dt)
{
	float32 lerp;
	xVec3 fromTarget;
	xVec3 currEuler;
	xVec3 idealEuler;
	xMat3x3 tmpMat;
	xMat4x3 resultMat;
	int32 i;
	float32* currf;
	float32* idealf;
	float32 mag;
	// Line 1465, Address: 0x3178e0, Func Offset: 0
	// Line 1468, Address: 0x3178e4, Func Offset: 0x4
	// Line 1465, Address: 0x3178e8, Func Offset: 0x8
	// Line 1468, Address: 0x3178f8, Func Offset: 0x18
	// Line 1469, Address: 0x317904, Func Offset: 0x24
	// Line 1470, Address: 0x317924, Func Offset: 0x44
	// Line 1471, Address: 0x31792c, Func Offset: 0x4c
	// Line 1473, Address: 0x317958, Func Offset: 0x78
	// Line 1477, Address: 0x31796c, Func Offset: 0x8c
	// Line 1484, Address: 0x317988, Func Offset: 0xa8
	// Line 1477, Address: 0x31798c, Func Offset: 0xac
	// Line 1496, Address: 0x317990, Func Offset: 0xb0
	// Line 1484, Address: 0x317994, Func Offset: 0xb4
	// Line 1497, Address: 0x317998, Func Offset: 0xb8
	// Line 1496, Address: 0x31799c, Func Offset: 0xbc
	// Line 1484, Address: 0x3179c4, Func Offset: 0xe4
	// Line 1496, Address: 0x3179d0, Func Offset: 0xf0
	// Line 1497, Address: 0x3179f0, Func Offset: 0x110
	// Line 1498, Address: 0x3179f8, Func Offset: 0x118
	// Line 1499, Address: 0x317a04, Func Offset: 0x124
	// Line 1501, Address: 0x317a08, Func Offset: 0x128
	// Line 1499, Address: 0x317a0c, Func Offset: 0x12c
	// Line 1501, Address: 0x317a10, Func Offset: 0x130
	// Line 1500, Address: 0x317a14, Func Offset: 0x134
	// Line 1501, Address: 0x317a18, Func Offset: 0x138
	// Line 1508, Address: 0x317a20, Func Offset: 0x140
	// Line 1507, Address: 0x317a24, Func Offset: 0x144
	// Line 1508, Address: 0x317a28, Func Offset: 0x148
	// Line 1507, Address: 0x317a2c, Func Offset: 0x14c
	// Line 1508, Address: 0x317a30, Func Offset: 0x150
	// Line 1505, Address: 0x317a34, Func Offset: 0x154
	// Line 1507, Address: 0x317a38, Func Offset: 0x158
	// Line 1505, Address: 0x317a3c, Func Offset: 0x15c
	// Line 1506, Address: 0x317a40, Func Offset: 0x160
	// Line 1507, Address: 0x317a4c, Func Offset: 0x16c
	// Line 1508, Address: 0x317a5c, Func Offset: 0x17c
	// Line 1509, Address: 0x317a70, Func Offset: 0x190
	// Line 1508, Address: 0x317a78, Func Offset: 0x198
	// Line 1509, Address: 0x317a7c, Func Offset: 0x19c
	// Line 1511, Address: 0x317a88, Func Offset: 0x1a8
	// Line 1510, Address: 0x317a94, Func Offset: 0x1b4
	// Line 1511, Address: 0x317ad0, Func Offset: 0x1f0
	// Line 1515, Address: 0x317adc, Func Offset: 0x1fc
	// Line 1511, Address: 0x317ae0, Func Offset: 0x200
	// Line 1514, Address: 0x317ae4, Func Offset: 0x204
	// Line 1515, Address: 0x317ae8, Func Offset: 0x208
	// Line 1514, Address: 0x317aec, Func Offset: 0x20c
	// Line 1516, Address: 0x317b00, Func Offset: 0x220
	// Line 1517, Address: 0x317b0c, Func Offset: 0x22c
	// Line 1521, Address: 0x317b18, Func Offset: 0x238
	// Line 1517, Address: 0x317b1c, Func Offset: 0x23c
	// Line 1521, Address: 0x317b20, Func Offset: 0x240
	// Line 1525, Address: 0x317b28, Func Offset: 0x248
	// Line 1521, Address: 0x317b30, Func Offset: 0x250
	// Line 1525, Address: 0x317b54, Func Offset: 0x274
	// Line 1521, Address: 0x317b58, Func Offset: 0x278
	// Line 1526, Address: 0x317b5c, Func Offset: 0x27c
	// Line 1521, Address: 0x317b60, Func Offset: 0x280
	// Line 1525, Address: 0x317b98, Func Offset: 0x2b8
	// Line 1526, Address: 0x317c0c, Func Offset: 0x32c
	// Line 1528, Address: 0x317c18, Func Offset: 0x338
	// Line 1475, Address: 0x317c20, Func Offset: 0x340
	// Line 1507, Address: 0x317c34, Func Offset: 0x354
	// Line 1529, Address: 0x317c40, Func Offset: 0x360
	// Func End, Address: 0x317c58, Func Offset: 0x378
}

// enabled__9oob_stateFv
// Start address: 0x317c60
uint8 enabled()
{
	// Line 1459, Address: 0x317c60, Func Offset: 0
	// Line 1462, Address: 0x317c84, Func Offset: 0x24
	// Func End, Address: 0x317c8c, Func Offset: 0x2c
}

// fx_render__9oob_stateFv
// Start address: 0x317c90
void fx_render()
{
	// Line 1397, Address: 0x317c90, Func Offset: 0
	// Line 1398, Address: 0x317c94, Func Offset: 0x4
	// Line 1397, Address: 0x317c98, Func Offset: 0x8
	// Line 1398, Address: 0x317ca0, Func Offset: 0x10
	// Line 1399, Address: 0x317cb4, Func Offset: 0x24
	// Line 1401, Address: 0x317ce0, Func Offset: 0x50
	// Line 1404, Address: 0x318268, Func Offset: 0x5d8
	// Line 1406, Address: 0x3182b0, Func Offset: 0x620
	// Line 1411, Address: 0x3182b8, Func Offset: 0x628
	// Line 1412, Address: 0x3184e0, Func Offset: 0x850
	// Func End, Address: 0x3184f0, Func Offset: 0x860
}

// render__9oob_stateFv
// Start address: 0x3184f0
uint8 render()
{
	// Line 1342, Address: 0x3184f0, Func Offset: 0
	// Line 1343, Address: 0x3184f4, Func Offset: 0x4
	// Line 1342, Address: 0x3184f8, Func Offset: 0x8
	// Line 1343, Address: 0x3184fc, Func Offset: 0xc
	// Line 1347, Address: 0x318510, Func Offset: 0x20
	// Line 1353, Address: 0x318520, Func Offset: 0x30
	// Line 1358, Address: 0x31856c, Func Offset: 0x7c
	// Line 1359, Address: 0x31859c, Func Offset: 0xac
	// Line 1360, Address: 0x3185bc, Func Offset: 0xcc
	// Line 1393, Address: 0x3185cc, Func Offset: 0xdc
	// Line 1345, Address: 0x3185d4, Func Offset: 0xe4
	// Line 1349, Address: 0x3185dc, Func Offset: 0xec
	// Line 1356, Address: 0x3185e4, Func Offset: 0xf4
	// Line 1394, Address: 0x3185e8, Func Offset: 0xf8
	// Func End, Address: 0x3185f4, Func Offset: 0x104
}

// IsPlayerInControl__9oob_stateFv
// Start address: 0x318600
uint8 IsPlayerInControl()
{
	// Line 1305, Address: 0x318600, Func Offset: 0
	// Line 1306, Address: 0x31860c, Func Offset: 0xc
	// Func End, Address: 0x318614, Func Offset: 0x14
}

// reset__9oob_stateFv
// Start address: 0x318620
void reset()
{
	// Line 1262, Address: 0x318620, Func Offset: 0
	// Line 1263, Address: 0x318624, Func Offset: 0x4
	// Line 1262, Address: 0x318628, Func Offset: 0x8
	// Line 1264, Address: 0x31862c, Func Offset: 0xc
	// Line 1262, Address: 0x318630, Func Offset: 0x10
	// Line 1263, Address: 0x318634, Func Offset: 0x14
	// Line 1264, Address: 0x318638, Func Offset: 0x18
	// Line 1266, Address: 0x318710, Func Offset: 0xf0
	// Line 1268, Address: 0x318728, Func Offset: 0x108
	// Line 1269, Address: 0x318740, Func Offset: 0x120
	// Line 1270, Address: 0x318750, Func Offset: 0x130
	// Line 1271, Address: 0x318760, Func Offset: 0x140
	// Func End, Address: 0x318770, Func Offset: 0x150
}

// init__9oob_stateFv
// Start address: 0x318770
void init()
{
	int8 @27585;
	drop_state_type drop_state;
	int8 @27582;
	grab_state_type grab_state;
	int8 @27579;
	out_state_type out_state;
	int8 @27576;
	in_state_type in_state;
	// Line 1227, Address: 0x318770, Func Offset: 0
	// Line 1228, Address: 0x318774, Func Offset: 0x4
	// Line 1227, Address: 0x318778, Func Offset: 0x8
	// Line 1228, Address: 0x31877c, Func Offset: 0xc
	// Line 1229, Address: 0x31878c, Func Offset: 0x1c
	// Line 1231, Address: 0x318798, Func Offset: 0x28
	// Line 1232, Address: 0x3187a4, Func Offset: 0x34
	// Line 1234, Address: 0x3187b0, Func Offset: 0x40
	// Line 1235, Address: 0x3187bc, Func Offset: 0x4c
	// Line 1236, Address: 0x3187c8, Func Offset: 0x58
	// Line 1237, Address: 0x3187d4, Func Offset: 0x64
	// Line 1238, Address: 0x3187e0, Func Offset: 0x70
	// Line 1239, Address: 0x3187ec, Func Offset: 0x7c
	// Line 1240, Address: 0x3187fc, Func Offset: 0x8c
	// Line 1241, Address: 0x318808, Func Offset: 0x98
	// Line 1243, Address: 0x318814, Func Offset: 0xa4
	// Line 1241, Address: 0x318818, Func Offset: 0xa8
	// Line 1245, Address: 0x31881c, Func Offset: 0xac
	// Line 1243, Address: 0x318820, Func Offset: 0xb0
	// Line 1247, Address: 0x318824, Func Offset: 0xb4
	// Line 1243, Address: 0x318828, Func Offset: 0xb8
	// Line 1247, Address: 0x31882c, Func Offset: 0xbc
	// Line 1245, Address: 0x318834, Func Offset: 0xc4
	// Line 1243, Address: 0x318838, Func Offset: 0xc8
	// Line 1245, Address: 0x31883c, Func Offset: 0xcc
	// Line 1248, Address: 0x318840, Func Offset: 0xd0
	// Line 1259, Address: 0x318848, Func Offset: 0xd8
	// Line 1236, Address: 0x31886c, Func Offset: 0xfc
	// Line 1259, Address: 0x318870, Func Offset: 0x100
	// Line 1238, Address: 0x318884, Func Offset: 0x114
	// Line 1259, Address: 0x318888, Func Offset: 0x118
	// Line 1238, Address: 0x318930, Func Offset: 0x1c0
	// Line 1240, Address: 0x31893c, Func Offset: 0x1cc
	// Line 1259, Address: 0x318940, Func Offset: 0x1d0
	// Line 1240, Address: 0x3189c8, Func Offset: 0x258
	// Line 1259, Address: 0x3189d4, Func Offset: 0x264
	// Func End, Address: 0x3189e0, Func Offset: 0x270
}

// supdate_fade_in__Q39oob_state8OOBState15drop_state_typeFRQ39oob_state8OOBState15drop_state_typeR6xSceneRf
// Start address: 0x3189e0
substate_enum_0 supdate_fade_in(drop_state_type& gst, float32& dt)
{
	// Line 1070, Address: 0x3189e0, Func Offset: 0
	// Func End, Address: 0x318a60, Func Offset: 0x80
}

// supdate_start_fade_in__Q39oob_state8OOBState15drop_state_typeFRQ39oob_state8OOBState15drop_state_typeR6xSceneRf
// Start address: 0x318a60
substate_enum_0 supdate_start_fade_in(drop_state_type& gst, float32& dt)
{
	// Line 1068, Address: 0x318a60, Func Offset: 0
	// Func End, Address: 0x318aa8, Func Offset: 0x48
}

// supdate_moving_out__Q39oob_state8OOBState15drop_state_typeFRQ39oob_state8OOBState15drop_state_typeR6xSceneRf
// Start address: 0x318ab0
substate_enum_0 supdate_moving_out(float32& dt)
{
	// Line 1066, Address: 0x318ab0, Func Offset: 0
	// Func End, Address: 0x318bb4, Func Offset: 0x104
}

// supdate_starting__Q39oob_state8OOBState15drop_state_typeFRQ39oob_state8OOBState15drop_state_typeR6xSceneRf
// Start address: 0x318bc0
substate_enum_0 supdate_starting(float32& dt)
{
	// Line 1064, Address: 0x318bc0, Func Offset: 0
	// Func End, Address: 0x318c80, Func Offset: 0xc0
}

// supdate_stopped__Q39oob_state8OOBState15drop_state_typeFRQ39oob_state8OOBState15drop_state_typeR6xSceneRf
// Start address: 0x318c80
substate_enum_0 supdate_stopped(drop_state_type& gst, float32& dt)
{
	// Line 1062, Address: 0x318c80, Func Offset: 0
	// Func End, Address: 0x318d00, Func Offset: 0x80
}

// supdate_stopping__Q39oob_state8OOBState15drop_state_typeFRQ39oob_state8OOBState15drop_state_typeR6xSceneRf
// Start address: 0x318d00
substate_enum_0 supdate_stopping(drop_state_type& gst, float32& dt)
{
	// Line 1060, Address: 0x318d00, Func Offset: 0
	// Func End, Address: 0x318de0, Func Offset: 0xe0
}

// supdate_moving_in__Q39oob_state8OOBState15drop_state_typeFRQ39oob_state8OOBState15drop_state_typeR6xSceneRf
// Start address: 0x318de0
substate_enum_0 supdate_moving_in(float32& dt)
{
	// Line 1058, Address: 0x318de0, Func Offset: 0
	// Func End, Address: 0x318f08, Func Offset: 0x128
}

// supdate_fade_out__Q39oob_state8OOBState15grab_state_typeFRQ39oob_state8OOBState15grab_state_typeR6xSceneRf
// Start address: 0x318f10
substate_enum_1 supdate_fade_out(grab_state_type& gst, float32& dt)
{
	// Line 794, Address: 0x318f10, Func Offset: 0
	// Func End, Address: 0x318f90, Func Offset: 0x80
}

// supdate_start_fade_out__Q39oob_state8OOBState15grab_state_typeFRQ39oob_state8OOBState15grab_state_typeR6xSceneRf
// Start address: 0x318f90
substate_enum_1 supdate_start_fade_out(grab_state_type& gst, float32& dt)
{
	// Line 792, Address: 0x318f90, Func Offset: 0
	// Func End, Address: 0x318fd8, Func Offset: 0x48
}

// supdate_moving_out__Q39oob_state8OOBState15grab_state_typeFRQ39oob_state8OOBState15grab_state_typeR6xSceneRf
// Start address: 0x318fe0
substate_enum_1 supdate_moving_out(float32& dt)
{
	// Line 790, Address: 0x318fe0, Func Offset: 0
	// Func End, Address: 0x3190e4, Func Offset: 0x104
}

// supdate_starting__Q39oob_state8OOBState15grab_state_typeFRQ39oob_state8OOBState15grab_state_typeR6xSceneRf
// Start address: 0x3190f0
substate_enum_1 supdate_starting(float32& dt)
{
	// Line 788, Address: 0x3190f0, Func Offset: 0
	// Func End, Address: 0x3191b0, Func Offset: 0xc0
}

// supdate_stopped__Q39oob_state8OOBState15grab_state_typeFRQ39oob_state8OOBState15grab_state_typeR6xSceneRf
// Start address: 0x3191b0
substate_enum_1 supdate_stopped(grab_state_type& gst, float32& dt)
{
	// Line 786, Address: 0x3191b0, Func Offset: 0
	// Func End, Address: 0x319230, Func Offset: 0x80
}

// supdate_stopping__Q39oob_state8OOBState15grab_state_typeFRQ39oob_state8OOBState15grab_state_typeR6xSceneRf
// Start address: 0x319230
substate_enum_1 supdate_stopping(grab_state_type& gst, float32& dt)
{
	// Line 784, Address: 0x319230, Func Offset: 0
	// Func End, Address: 0x319310, Func Offset: 0xe0
}

// supdate_moving_in__Q39oob_state8OOBState15grab_state_typeFRQ39oob_state8OOBState15grab_state_typeR6xSceneRf
// Start address: 0x319310
substate_enum_1 supdate_moving_in(float32& dt)
{
	// Line 782, Address: 0x319310, Func Offset: 0
	// Func End, Address: 0x319438, Func Offset: 0x128
}

// supdate_begin_wait__Q39oob_state8OOBState15grab_state_typeFRQ39oob_state8OOBState15grab_state_typeR6xSceneRf
// Start address: 0x319440
substate_enum_1 supdate_begin_wait(grab_state_type& gst, float32& dt)
{
	// Line 780, Address: 0x319440, Func Offset: 0
	// Func End, Address: 0x319488, Func Offset: 0x48
}

// supdate_reorient__Q39oob_state8OOBState15grab_state_typeFRQ39oob_state8OOBState15grab_state_typeR6xSceneRf
// Start address: 0x319490
substate_enum_1 supdate_reorient()
{
	// Line 778, Address: 0x319490, Func Offset: 0
	// Func End, Address: 0x319498, Func Offset: 0x8
}

// load_settings__9oob_stateFR8xIniFile
// Start address: 0x3194a0
void load_settings(xIniFile& ini)
{
	// Line 1177, Address: 0x3194a0, Func Offset: 0
	// Line 1188, Address: 0x3194a4, Func Offset: 0x4
	// Line 1177, Address: 0x3194a8, Func Offset: 0x8
	// Line 1188, Address: 0x3194ac, Func Offset: 0xc
	// Line 1177, Address: 0x3194b0, Func Offset: 0x10
	// Line 1188, Address: 0x3194b4, Func Offset: 0x14
	// Line 1190, Address: 0x3194c4, Func Offset: 0x24
	// Line 1188, Address: 0x3194c8, Func Offset: 0x28
	// Line 1190, Address: 0x3194cc, Func Offset: 0x2c
	// Line 1188, Address: 0x3194d4, Func Offset: 0x34
	// Line 1190, Address: 0x3194d8, Func Offset: 0x38
	// Line 1191, Address: 0x3194e4, Func Offset: 0x44
	// Line 1190, Address: 0x3194e8, Func Offset: 0x48
	// Line 1191, Address: 0x3194ec, Func Offset: 0x4c
	// Line 1192, Address: 0x319504, Func Offset: 0x64
	// Line 1191, Address: 0x319508, Func Offset: 0x68
	// Line 1192, Address: 0x31950c, Func Offset: 0x6c
	// Line 1193, Address: 0x319524, Func Offset: 0x84
	// Line 1192, Address: 0x319528, Func Offset: 0x88
	// Line 1193, Address: 0x31952c, Func Offset: 0x8c
	// Line 1194, Address: 0x319544, Func Offset: 0xa4
	// Line 1193, Address: 0x319548, Func Offset: 0xa8
	// Line 1194, Address: 0x31954c, Func Offset: 0xac
	// Line 1195, Address: 0x319568, Func Offset: 0xc8
	// Line 1194, Address: 0x31956c, Func Offset: 0xcc
	// Line 1195, Address: 0x319578, Func Offset: 0xd8
	// Line 1194, Address: 0x319584, Func Offset: 0xe4
	// Line 1195, Address: 0x319588, Func Offset: 0xe8
	// Line 1196, Address: 0x319598, Func Offset: 0xf8
	// Line 1195, Address: 0x3195a4, Func Offset: 0x104
	// Line 1196, Address: 0x3195a8, Func Offset: 0x108
	// Line 1197, Address: 0x3195bc, Func Offset: 0x11c
	// Line 1196, Address: 0x3195c8, Func Offset: 0x128
	// Line 1197, Address: 0x3195cc, Func Offset: 0x12c
	// Line 1198, Address: 0x3195d4, Func Offset: 0x134
	// Line 1197, Address: 0x3195d8, Func Offset: 0x138
	// Line 1198, Address: 0x3195dc, Func Offset: 0x13c
	// Line 1199, Address: 0x3195f8, Func Offset: 0x158
	// Line 1198, Address: 0x319604, Func Offset: 0x164
	// Line 1199, Address: 0x319608, Func Offset: 0x168
	// Line 1200, Address: 0x319614, Func Offset: 0x174
	// Line 1199, Address: 0x319620, Func Offset: 0x180
	// Line 1200, Address: 0x319624, Func Offset: 0x184
	// Line 1201, Address: 0x31962c, Func Offset: 0x18c
	// Line 1200, Address: 0x319630, Func Offset: 0x190
	// Line 1201, Address: 0x319634, Func Offset: 0x194
	// Line 1202, Address: 0x319650, Func Offset: 0x1b0
	// Line 1201, Address: 0x31965c, Func Offset: 0x1bc
	// Line 1202, Address: 0x319660, Func Offset: 0x1c0
	// Line 1203, Address: 0x319670, Func Offset: 0x1d0
	// Line 1202, Address: 0x319674, Func Offset: 0x1d4
	// Line 1203, Address: 0x319678, Func Offset: 0x1d8
	// Line 1204, Address: 0x319690, Func Offset: 0x1f0
	// Line 1203, Address: 0x319694, Func Offset: 0x1f4
	// Line 1204, Address: 0x319698, Func Offset: 0x1f8
	// Line 1205, Address: 0x3196b4, Func Offset: 0x214
	// Line 1204, Address: 0x3196c0, Func Offset: 0x220
	// Line 1205, Address: 0x3196c4, Func Offset: 0x224
	// Line 1206, Address: 0x3196d8, Func Offset: 0x238
	// Line 1205, Address: 0x3196e4, Func Offset: 0x244
	// Line 1206, Address: 0x3196e8, Func Offset: 0x248
	// Line 1207, Address: 0x3196f0, Func Offset: 0x250
	// Line 1206, Address: 0x3196f4, Func Offset: 0x254
	// Line 1207, Address: 0x3196f8, Func Offset: 0x258
	// Line 1208, Address: 0x319710, Func Offset: 0x270
	// Line 1207, Address: 0x319714, Func Offset: 0x274
	// Line 1208, Address: 0x319718, Func Offset: 0x278
	// Line 1209, Address: 0x319734, Func Offset: 0x294
	// Line 1208, Address: 0x319740, Func Offset: 0x2a0
	// Line 1209, Address: 0x319744, Func Offset: 0x2a4
	// Line 1210, Address: 0x319754, Func Offset: 0x2b4
	// Line 1209, Address: 0x319758, Func Offset: 0x2b8
	// Line 1210, Address: 0x31975c, Func Offset: 0x2bc
	// Line 1211, Address: 0x319774, Func Offset: 0x2d4
	// Line 1210, Address: 0x319778, Func Offset: 0x2d8
	// Line 1211, Address: 0x31977c, Func Offset: 0x2dc
	// Line 1212, Address: 0x319798, Func Offset: 0x2f8
	// Line 1211, Address: 0x3197a4, Func Offset: 0x304
	// Line 1212, Address: 0x3197a8, Func Offset: 0x308
	// Line 1213, Address: 0x3197bc, Func Offset: 0x31c
	// Line 1212, Address: 0x3197c8, Func Offset: 0x328
	// Line 1213, Address: 0x3197cc, Func Offset: 0x32c
	// Line 1214, Address: 0x3197d4, Func Offset: 0x334
	// Line 1213, Address: 0x3197d8, Func Offset: 0x338
	// Line 1214, Address: 0x3197dc, Func Offset: 0x33c
	// Line 1215, Address: 0x3197f8, Func Offset: 0x358
	// Line 1214, Address: 0x319804, Func Offset: 0x364
	// Line 1215, Address: 0x319808, Func Offset: 0x368
	// Line 1216, Address: 0x31981c, Func Offset: 0x37c
	// Line 1215, Address: 0x319828, Func Offset: 0x388
	// Line 1216, Address: 0x31982c, Func Offset: 0x38c
	// Line 1217, Address: 0x319840, Func Offset: 0x3a0
	// Line 1216, Address: 0x31984c, Func Offset: 0x3ac
	// Line 1217, Address: 0x319850, Func Offset: 0x3b0
	// Line 1218, Address: 0x31985c, Func Offset: 0x3bc
	// Line 1217, Address: 0x319860, Func Offset: 0x3c0
	// Line 1218, Address: 0x31986c, Func Offset: 0x3cc
	// Line 1217, Address: 0x319878, Func Offset: 0x3d8
	// Line 1218, Address: 0x31987c, Func Offset: 0x3dc
	// Line 1219, Address: 0x319888, Func Offset: 0x3e8
	// Line 1218, Address: 0x31988c, Func Offset: 0x3ec
	// Line 1219, Address: 0x319890, Func Offset: 0x3f0
	// Line 1218, Address: 0x319894, Func Offset: 0x3f4
	// Line 1219, Address: 0x31989c, Func Offset: 0x3fc
	// Line 1218, Address: 0x3198a0, Func Offset: 0x400
	// Line 1219, Address: 0x3198a4, Func Offset: 0x404
	// Line 1223, Address: 0x3198d0, Func Offset: 0x430
	// Func End, Address: 0x3198e0, Func Offset: 0x440
}

// render_ghost__Q29oob_state8OOBStateFv
// Start address: 0x3198e0
void render_ghost()
{
	xEnt& ent;
	xModelInstance* xm;
	RpAtomic& model;
	uint8 alpha;
	xModelInstance* xm;
	RpAtomic& model;
	// Line 1109, Address: 0x3198e0, Func Offset: 0
	// Line 1112, Address: 0x3198e4, Func Offset: 0x4
	// Line 1109, Address: 0x3198e8, Func Offset: 0x8
	// Line 1112, Address: 0x3198fc, Func Offset: 0x1c
	// Line 1117, Address: 0x31990c, Func Offset: 0x2c
	// Line 1119, Address: 0x319924, Func Offset: 0x44
	// Line 1120, Address: 0x319938, Func Offset: 0x58
	// Line 1121, Address: 0x319940, Func Offset: 0x60
	// Line 1124, Address: 0x31994c, Func Offset: 0x6c
	// Line 1125, Address: 0x319960, Func Offset: 0x80
	// Line 1126, Address: 0x319968, Func Offset: 0x88
	// Line 1127, Address: 0x31997c, Func Offset: 0x9c
	// Line 1128, Address: 0x319980, Func Offset: 0xa0
	// Line 1129, Address: 0x31998c, Func Offset: 0xac
	// Line 1130, Address: 0x319998, Func Offset: 0xb8
	// Line 1131, Address: 0x3199a8, Func Offset: 0xc8
	// Line 1134, Address: 0x3199bc, Func Offset: 0xdc
	// Line 1138, Address: 0x3199c4, Func Offset: 0xe4
	// Line 1139, Address: 0x3199d8, Func Offset: 0xf8
	// Line 1140, Address: 0x319a4c, Func Offset: 0x16c
	// Line 1143, Address: 0x319a5c, Func Offset: 0x17c
	// Line 1144, Address: 0x319a70, Func Offset: 0x190
	// Line 1145, Address: 0x319a78, Func Offset: 0x198
	// Line 1146, Address: 0x319a8c, Func Offset: 0x1ac
	// Line 1147, Address: 0x319a90, Func Offset: 0x1b0
	// Line 1148, Address: 0x319a9c, Func Offset: 0x1bc
	// Line 1149, Address: 0x319aa8, Func Offset: 0x1c8
	// Line 1150, Address: 0x319ab0, Func Offset: 0x1d0
	// Line 1154, Address: 0x319ac0, Func Offset: 0x1e0
	// Line 1155, Address: 0x319ad0, Func Offset: 0x1f0
	// Func End, Address: 0x319af8, Func Offset: 0x218
}

// oob_before_anim_mat__Q29oob_state8OOBStateFP9xAnimPlayP5xQuatP5xVec3i
// Start address: 0x319b00
void oob_before_anim_mat(xAnimPlay* play, xQuat* quat, xVec3* tran, int32 boneCount)
{
	xVec3 adjustTran;
	// Line 353, Address: 0x319b00, Func Offset: 0
	// Line 355, Address: 0x319b18, Func Offset: 0x18
	// Line 356, Address: 0x319b20, Func Offset: 0x20
	// Line 359, Address: 0x319b28, Func Offset: 0x28
	// Line 360, Address: 0x319b40, Func Offset: 0x40
	// Line 361, Address: 0x319b70, Func Offset: 0x70
	// Func End, Address: 0x319b84, Func Offset: 0x84
}

// start__Q39oob_state8OOBState15drop_state_typeFv
// Start address: 0x376390
void drop_state_type::start()
{
	xModelInstance& m;
	xEntFrame& f;
	xAnimState* idle_anim_state;
	// Line 832, Address: 0x376390, Func Offset: 0
	// Line 833, Address: 0x376394, Func Offset: 0x4
	// Line 832, Address: 0x376398, Func Offset: 0x8
	// Line 836, Address: 0x37639c, Func Offset: 0xc
	// Line 832, Address: 0x3763a0, Func Offset: 0x10
	// Line 836, Address: 0x3763a4, Func Offset: 0x14
	// Line 832, Address: 0x3763a8, Func Offset: 0x18
	// Line 837, Address: 0x3763ac, Func Offset: 0x1c
	// Line 832, Address: 0x3763b0, Func Offset: 0x20
	// Line 839, Address: 0x3763b4, Func Offset: 0x24
	// Line 832, Address: 0x3763b8, Func Offset: 0x28
	// Line 840, Address: 0x3763bc, Func Offset: 0x2c
	// Line 832, Address: 0x3763c0, Func Offset: 0x30
	// Line 837, Address: 0x3763c4, Func Offset: 0x34
	// Line 832, Address: 0x3763c8, Func Offset: 0x38
	// Line 838, Address: 0x3763cc, Func Offset: 0x3c
	// Line 832, Address: 0x3763d0, Func Offset: 0x40
	// Line 839, Address: 0x3763d4, Func Offset: 0x44
	// Line 832, Address: 0x3763d8, Func Offset: 0x48
	// Line 840, Address: 0x3763dc, Func Offset: 0x4c
	// Line 833, Address: 0x3763e0, Func Offset: 0x50
	// Line 834, Address: 0x3763e4, Func Offset: 0x54
	// Line 842, Address: 0x3763e8, Func Offset: 0x58
	// Line 843, Address: 0x3763ec, Func Offset: 0x5c
	// Line 844, Address: 0x3763f0, Func Offset: 0x60
	// Line 833, Address: 0x3763f4, Func Offset: 0x64
	// Line 834, Address: 0x376408, Func Offset: 0x78
	// Line 833, Address: 0x37640c, Func Offset: 0x7c
	// Line 836, Address: 0x376414, Func Offset: 0x84
	// Line 834, Address: 0x376418, Func Offset: 0x88
	// Line 846, Address: 0x37641c, Func Offset: 0x8c
	// Line 836, Address: 0x376420, Func Offset: 0x90
	// Line 837, Address: 0x376428, Func Offset: 0x98
	// Line 838, Address: 0x37642c, Func Offset: 0x9c
	// Line 839, Address: 0x376430, Func Offset: 0xa0
	// Line 840, Address: 0x376434, Func Offset: 0xa4
	// Line 837, Address: 0x376438, Func Offset: 0xa8
	// Line 839, Address: 0x37643c, Func Offset: 0xac
	// Line 840, Address: 0x376440, Func Offset: 0xb0
	// Line 842, Address: 0x376444, Func Offset: 0xb4
	// Line 843, Address: 0x376448, Func Offset: 0xb8
	// Line 844, Address: 0x376450, Func Offset: 0xc0
	// Line 846, Address: 0x376458, Func Offset: 0xc8
	// Line 849, Address: 0x3764a0, Func Offset: 0x110
	// Line 850, Address: 0x3764f0, Func Offset: 0x160
	// Line 852, Address: 0x3764f8, Func Offset: 0x168
	// Line 853, Address: 0x376504, Func Offset: 0x174
	// Line 856, Address: 0x376510, Func Offset: 0x180
	// Line 859, Address: 0x376528, Func Offset: 0x198
	// Line 858, Address: 0x37652c, Func Offset: 0x19c
	// Line 859, Address: 0x376530, Func Offset: 0x1a0
	// Line 857, Address: 0x376534, Func Offset: 0x1a4
	// Line 862, Address: 0x376538, Func Offset: 0x1a8
	// Line 859, Address: 0x376544, Func Offset: 0x1b4
	// Line 861, Address: 0x376558, Func Offset: 0x1c8
	// Line 860, Address: 0x376560, Func Offset: 0x1d0
	// Line 859, Address: 0x376564, Func Offset: 0x1d4
	// Line 860, Address: 0x37656c, Func Offset: 0x1dc
	// Line 861, Address: 0x376570, Func Offset: 0x1e0
	// Line 860, Address: 0x376578, Func Offset: 0x1e8
	// Line 861, Address: 0x37657c, Func Offset: 0x1ec
	// Line 862, Address: 0x376590, Func Offset: 0x200
	// Line 863, Address: 0x37659c, Func Offset: 0x20c
	// Line 866, Address: 0x3765a8, Func Offset: 0x218
	// Line 863, Address: 0x3765ac, Func Offset: 0x21c
	// Line 883, Address: 0x3765b0, Func Offset: 0x220
	// Line 866, Address: 0x3765b4, Func Offset: 0x224
	// Line 863, Address: 0x3765d4, Func Offset: 0x244
	// Line 866, Address: 0x3765d8, Func Offset: 0x248
	// Line 863, Address: 0x3765dc, Func Offset: 0x24c
	// Line 866, Address: 0x3765e0, Func Offset: 0x250
	// Line 877, Address: 0x376600, Func Offset: 0x270
	// Line 883, Address: 0x376608, Func Offset: 0x278
	// Line 863, Address: 0x37660c, Func Offset: 0x27c
	// Line 865, Address: 0x376618, Func Offset: 0x288
	// Line 866, Address: 0x37669c, Func Offset: 0x30c
	// Line 877, Address: 0x37671c, Func Offset: 0x38c
	// Line 883, Address: 0x376720, Func Offset: 0x390
	// Line 891, Address: 0x376728, Func Offset: 0x398
	// Line 892, Address: 0x37673c, Func Offset: 0x3ac
	// Line 902, Address: 0x376750, Func Offset: 0x3c0
	// Line 846, Address: 0x37676c, Func Offset: 0x3dc
	// Line 902, Address: 0x376778, Func Offset: 0x3e8
	// Func End, Address: 0x3767a4, Func Offset: 0x414
}

// stop__Q39oob_state8OOBState15drop_state_typeFv
// Start address: 0x3767b0
void stop()
{
	// Line 904, Address: 0x3767b0, Func Offset: 0
	// Line 905, Address: 0x3767b4, Func Offset: 0x4
	// Line 904, Address: 0x3767b8, Func Offset: 0x8
	// Line 905, Address: 0x3767bc, Func Offset: 0xc
	// Line 904, Address: 0x3767c0, Func Offset: 0x10
	// Line 905, Address: 0x3767c4, Func Offset: 0x14
	// Line 906, Address: 0x376898, Func Offset: 0xe8
	// Line 907, Address: 0x3768a4, Func Offset: 0xf4
	// Line 908, Address: 0x3768d0, Func Offset: 0x120
	// Line 909, Address: 0x3768dc, Func Offset: 0x12c
	// Line 910, Address: 0x3768e4, Func Offset: 0x134
	// Line 911, Address: 0x3768e8, Func Offset: 0x138
	// Line 910, Address: 0x3768ec, Func Offset: 0x13c
	// Line 912, Address: 0x3768f0, Func Offset: 0x140
	// Line 911, Address: 0x3768f4, Func Offset: 0x144
	// Line 912, Address: 0x3768f8, Func Offset: 0x148
	// Line 911, Address: 0x3768fc, Func Offset: 0x14c
	// Line 912, Address: 0x376900, Func Offset: 0x150
	// Line 913, Address: 0x376914, Func Offset: 0x164
	// Line 915, Address: 0x37691c, Func Offset: 0x16c
	// Line 916, Address: 0x376924, Func Offset: 0x174
	// Line 918, Address: 0x37692c, Func Offset: 0x17c
	// Func End, Address: 0x37693c, Func Offset: 0x18c
}

// update__Q39oob_state8OOBState15drop_state_typeFR6xSceneRf
// Start address: 0x376940
state_enum_2 drop_state_type::update(xScene& s, float32& dt)
{
	float32 movedt;
	substate_enum_0 newstate;
	float32 fadedt;
	substate_enum_0 newstate;
	xMat4x3& pm;
	xAnimSingle* asingle;
	// Line 920, Address: 0x376940, Func Offset: 0
	// Line 921, Address: 0x376944, Func Offset: 0x4
	// Line 920, Address: 0x376948, Func Offset: 0x8
	// Line 921, Address: 0x376968, Func Offset: 0x28
	// Line 923, Address: 0x376974, Func Offset: 0x34
	// Line 924, Address: 0x376978, Func Offset: 0x38
	// Line 923, Address: 0x37697c, Func Offset: 0x3c
	// Line 924, Address: 0x376984, Func Offset: 0x44
	// Line 930, Address: 0x37698c, Func Offset: 0x4c
	// Line 931, Address: 0x376990, Func Offset: 0x50
	// Line 930, Address: 0x376994, Func Offset: 0x54
	// Line 931, Address: 0x37699c, Func Offset: 0x5c
	// Line 938, Address: 0x3769a8, Func Offset: 0x68
	// Line 941, Address: 0x3769b4, Func Offset: 0x74
	// Line 943, Address: 0x3769c4, Func Offset: 0x84
	// Line 944, Address: 0x3769e0, Func Offset: 0xa0
	// Line 948, Address: 0x3769e8, Func Offset: 0xa8
	// Line 944, Address: 0x3769ec, Func Offset: 0xac
	// Line 948, Address: 0x3769f0, Func Offset: 0xb0
	// Line 947, Address: 0x3769f4, Func Offset: 0xb4
	// Line 948, Address: 0x376a00, Func Offset: 0xc0
	// Line 943, Address: 0x376a0c, Func Offset: 0xcc
	// Line 944, Address: 0x376a10, Func Offset: 0xd0
	// Line 948, Address: 0x376a14, Func Offset: 0xd4
	// Line 944, Address: 0x376a18, Func Offset: 0xd8
	// Line 948, Address: 0x376a20, Func Offset: 0xe0
	// Line 947, Address: 0x376a2c, Func Offset: 0xec
	// Line 948, Address: 0x376a38, Func Offset: 0xf8
	// Line 949, Address: 0x376a80, Func Offset: 0x140
	// Line 948, Address: 0x376a84, Func Offset: 0x144
	// Line 949, Address: 0x376a88, Func Offset: 0x148
	// Line 948, Address: 0x376a8c, Func Offset: 0x14c
	// Line 949, Address: 0x376abc, Func Offset: 0x17c
	// Line 948, Address: 0x376ac0, Func Offset: 0x180
	// Line 949, Address: 0x376acc, Func Offset: 0x18c
	// Line 948, Address: 0x376ad4, Func Offset: 0x194
	// Line 949, Address: 0x376adc, Func Offset: 0x19c
	// Line 948, Address: 0x376ae4, Func Offset: 0x1a4
	// Line 949, Address: 0x376aec, Func Offset: 0x1ac
	// Line 948, Address: 0x376af8, Func Offset: 0x1b8
	// Line 949, Address: 0x376b00, Func Offset: 0x1c0
	// Line 948, Address: 0x376b04, Func Offset: 0x1c4
	// Line 949, Address: 0x376b7c, Func Offset: 0x23c
	// Line 954, Address: 0x376d54, Func Offset: 0x414
	// Line 959, Address: 0x376d68, Func Offset: 0x428
	// Line 960, Address: 0x376d88, Func Offset: 0x448
	// Line 959, Address: 0x376d8c, Func Offset: 0x44c
	// Line 960, Address: 0x376d90, Func Offset: 0x450
	// Line 964, Address: 0x376da8, Func Offset: 0x468
	// Line 965, Address: 0x376dd4, Func Offset: 0x494
	// Line 966, Address: 0x376e00, Func Offset: 0x4c0
	// Line 968, Address: 0x376e2c, Func Offset: 0x4ec
	// Line 969, Address: 0x376e48, Func Offset: 0x508
	// Line 968, Address: 0x376e50, Func Offset: 0x510
	// Line 969, Address: 0x376e58, Func Offset: 0x518
	// Line 970, Address: 0x376e80, Func Offset: 0x540
	// Line 971, Address: 0x376ea8, Func Offset: 0x568
	// Line 974, Address: 0x376ecc, Func Offset: 0x58c
	// Line 921, Address: 0x376ed8, Func Offset: 0x598
	// Line 926, Address: 0x376ee0, Func Offset: 0x5a0
	// Line 974, Address: 0x376ee8, Func Offset: 0x5a8
	// Line 926, Address: 0x376eec, Func Offset: 0x5ac
	// Line 974, Address: 0x376ef0, Func Offset: 0x5b0
	// Line 929, Address: 0x376f10, Func Offset: 0x5d0
	// Line 974, Address: 0x376f14, Func Offset: 0x5d4
	// Line 933, Address: 0x376f24, Func Offset: 0x5e4
	// Line 974, Address: 0x376f2c, Func Offset: 0x5ec
	// Line 933, Address: 0x376f30, Func Offset: 0x5f0
	// Line 974, Address: 0x376f34, Func Offset: 0x5f4
	// Line 936, Address: 0x376f54, Func Offset: 0x614
	// Line 974, Address: 0x376f58, Func Offset: 0x618
	// Line 939, Address: 0x376f70, Func Offset: 0x630
	// Line 961, Address: 0x376f78, Func Offset: 0x638
	// Line 975, Address: 0x376f84, Func Offset: 0x644
	// Func End, Address: 0x376fa4, Func Offset: 0x664
}

// start__Q39oob_state8OOBState15grab_state_typeFv
// Start address: 0x376fb0
void grab_state_type::start()
{
	uint32 bufsize;
	uint32 cheatAlternateHand;
	void* info;
	xVec3 dir;
	// Line 487, Address: 0x376fb0, Func Offset: 0
	// Line 488, Address: 0x376fc8, Func Offset: 0x18
	// Line 489, Address: 0x376fe0, Func Offset: 0x30
	// Line 490, Address: 0x377030, Func Offset: 0x80
	// Line 500, Address: 0x377040, Func Offset: 0x90
	// Line 490, Address: 0x377044, Func Offset: 0x94
	// Line 500, Address: 0x377048, Func Offset: 0x98
	// Line 490, Address: 0x37704c, Func Offset: 0x9c
	// Line 500, Address: 0x377054, Func Offset: 0xa4
	// Line 510, Address: 0x377060, Func Offset: 0xb0
	// Line 516, Address: 0x377078, Func Offset: 0xc8
	// Line 517, Address: 0x377088, Func Offset: 0xd8
	// Line 518, Address: 0x377094, Func Offset: 0xe4
	// Line 520, Address: 0x37709c, Func Offset: 0xec
	// Line 526, Address: 0x3770a4, Func Offset: 0xf4
	// Line 527, Address: 0x3770ac, Func Offset: 0xfc
	// Line 526, Address: 0x3770b0, Func Offset: 0x100
	// Line 527, Address: 0x3770b4, Func Offset: 0x104
	// Line 528, Address: 0x3770b8, Func Offset: 0x108
	// Line 532, Address: 0x3770c4, Func Offset: 0x114
	// Line 533, Address: 0x3770dc, Func Offset: 0x12c
	// Line 536, Address: 0x3770e0, Func Offset: 0x130
	// Line 533, Address: 0x3770e4, Func Offset: 0x134
	// Line 536, Address: 0x3770e8, Func Offset: 0x138
	// Line 539, Address: 0x3770fc, Func Offset: 0x14c
	// Line 540, Address: 0x377108, Func Offset: 0x158
	// Line 539, Address: 0x377134, Func Offset: 0x184
	// Line 540, Address: 0x377138, Func Offset: 0x188
	// Line 543, Address: 0x37714c, Func Offset: 0x19c
	// Line 540, Address: 0x377150, Func Offset: 0x1a0
	// Line 543, Address: 0x377154, Func Offset: 0x1a4
	// Line 546, Address: 0x377158, Func Offset: 0x1a8
	// Line 543, Address: 0x37715c, Func Offset: 0x1ac
	// Line 544, Address: 0x377160, Func Offset: 0x1b0
	// Line 546, Address: 0x377164, Func Offset: 0x1b4
	// Line 547, Address: 0x37716c, Func Offset: 0x1bc
	// Line 548, Address: 0x377190, Func Offset: 0x1e0
	// Line 549, Address: 0x37719c, Func Offset: 0x1ec
	// Line 551, Address: 0x3771b4, Func Offset: 0x204
	// Line 549, Address: 0x3771b8, Func Offset: 0x208
	// Line 551, Address: 0x3771bc, Func Offset: 0x20c
	// Line 553, Address: 0x3771c4, Func Offset: 0x214
	// Line 555, Address: 0x3771cc, Func Offset: 0x21c
	// Line 553, Address: 0x3771f8, Func Offset: 0x248
	// Line 555, Address: 0x3771fc, Func Offset: 0x24c
	// Line 557, Address: 0x377320, Func Offset: 0x370
	// Line 558, Address: 0x37732c, Func Offset: 0x37c
	// Line 569, Address: 0x377340, Func Offset: 0x390
	// Line 570, Address: 0x377344, Func Offset: 0x394
	// Line 572, Address: 0x377348, Func Offset: 0x398
	// Line 569, Address: 0x37734c, Func Offset: 0x39c
	// Line 572, Address: 0x377350, Func Offset: 0x3a0
	// Line 570, Address: 0x377358, Func Offset: 0x3a8
	// Line 575, Address: 0x377364, Func Offset: 0x3b4
	// Line 569, Address: 0x377368, Func Offset: 0x3b8
	// Line 576, Address: 0x377374, Func Offset: 0x3c4
	// Line 570, Address: 0x377378, Func Offset: 0x3c8
	// Line 569, Address: 0x377380, Func Offset: 0x3d0
	// Line 577, Address: 0x377384, Func Offset: 0x3d4
	// Line 570, Address: 0x377388, Func Offset: 0x3d8
	// Line 573, Address: 0x3773a0, Func Offset: 0x3f0
	// Line 578, Address: 0x3773a8, Func Offset: 0x3f8
	// Line 570, Address: 0x3773ac, Func Offset: 0x3fc
	// Line 572, Address: 0x3773b4, Func Offset: 0x404
	// Line 570, Address: 0x3773b8, Func Offset: 0x408
	// Line 572, Address: 0x3773c0, Func Offset: 0x410
	// Line 570, Address: 0x3773c4, Func Offset: 0x414
	// Line 575, Address: 0x3773f8, Func Offset: 0x448
	// Line 576, Address: 0x3773fc, Func Offset: 0x44c
	// Line 570, Address: 0x377400, Func Offset: 0x450
	// Line 576, Address: 0x377404, Func Offset: 0x454
	// Line 577, Address: 0x377408, Func Offset: 0x458
	// Line 578, Address: 0x377410, Func Offset: 0x460
	// Line 580, Address: 0x377414, Func Offset: 0x464
	// Line 583, Address: 0x377430, Func Offset: 0x480
	// Line 584, Address: 0x377440, Func Offset: 0x490
	// Line 586, Address: 0x377480, Func Offset: 0x4d0
	// Line 584, Address: 0x3774a0, Func Offset: 0x4f0
	// Line 586, Address: 0x3774a4, Func Offset: 0x4f4
	// Line 588, Address: 0x3774f4, Func Offset: 0x544
	// Line 590, Address: 0x3774fc, Func Offset: 0x54c
	// Line 593, Address: 0x37752c, Func Offset: 0x57c
	// Line 506, Address: 0x377538, Func Offset: 0x588
	// Line 593, Address: 0x37753c, Func Offset: 0x58c
	// Line 507, Address: 0x377540, Func Offset: 0x590
	// Line 593, Address: 0x377544, Func Offset: 0x594
	// Line 508, Address: 0x37754c, Func Offset: 0x59c
	// Line 593, Address: 0x377550, Func Offset: 0x5a0
	// Line 510, Address: 0x377554, Func Offset: 0x5a4
	// Line 593, Address: 0x37755c, Func Offset: 0x5ac
	// Line 549, Address: 0x377570, Func Offset: 0x5c0
	// Line 593, Address: 0x377578, Func Offset: 0x5c8
	// Line 584, Address: 0x3775cc, Func Offset: 0x61c
	// Line 593, Address: 0x3775f4, Func Offset: 0x644
	// Line 584, Address: 0x3775fc, Func Offset: 0x64c
	// Line 593, Address: 0x377614, Func Offset: 0x664
	// Line 586, Address: 0x37761c, Func Offset: 0x66c
	// Line 593, Address: 0x377644, Func Offset: 0x694
	// Line 586, Address: 0x37764c, Func Offset: 0x69c
	// Line 593, Address: 0x377664, Func Offset: 0x6b4
	// Func End, Address: 0x37767c, Func Offset: 0x6cc
}

// stop__Q39oob_state8OOBState15grab_state_typeFv
// Start address: 0x377680
void stop()
{
	// Line 596, Address: 0x377680, Func Offset: 0
	// Func End, Address: 0x377688, Func Offset: 0x8
}

// update__Q39oob_state8OOBState15grab_state_typeFR6xSceneRf
// Start address: 0x377690
state_enum_2 grab_state_type::update(xScene& s, float32& dt)
{
	float32 movedt;
	substate_enum_1 newstate;
	float32 fadedt;
	substate_enum_1 newstate;
	xModelInstance* model;
	xMat4x3& pm;
	// Line 598, Address: 0x377690, Func Offset: 0
	// Line 599, Address: 0x377694, Func Offset: 0x4
	// Line 598, Address: 0x377698, Func Offset: 0x8
	// Line 599, Address: 0x3776c0, Func Offset: 0x30
	// Line 601, Address: 0x3776cc, Func Offset: 0x3c
	// Line 602, Address: 0x3776d0, Func Offset: 0x40
	// Line 601, Address: 0x3776d4, Func Offset: 0x44
	// Line 602, Address: 0x3776dc, Func Offset: 0x4c
	// Line 608, Address: 0x3776e4, Func Offset: 0x54
	// Line 609, Address: 0x3776e8, Func Offset: 0x58
	// Line 608, Address: 0x3776ec, Func Offset: 0x5c
	// Line 609, Address: 0x3776f4, Func Offset: 0x64
	// Line 616, Address: 0x3776fc, Func Offset: 0x6c
	// Line 617, Address: 0x377714, Func Offset: 0x84
	// Line 619, Address: 0x377720, Func Offset: 0x90
	// Line 629, Address: 0x37772c, Func Offset: 0x9c
	// Line 631, Address: 0x37774c, Func Offset: 0xbc
	// Line 640, Address: 0x37775c, Func Offset: 0xcc
	// Line 642, Address: 0x37776c, Func Offset: 0xdc
	// Line 646, Address: 0x3777d4, Func Offset: 0x144
	// Line 647, Address: 0x3777d8, Func Offset: 0x148
	// Line 646, Address: 0x3777e0, Func Offset: 0x150
	// Line 647, Address: 0x3777e4, Func Offset: 0x154
	// Line 648, Address: 0x3777ec, Func Offset: 0x15c
	// Line 651, Address: 0x3777f0, Func Offset: 0x160
	// Line 652, Address: 0x3777f8, Func Offset: 0x168
	// Line 648, Address: 0x3777fc, Func Offset: 0x16c
	// Line 650, Address: 0x377804, Func Offset: 0x174
	// Line 651, Address: 0x377810, Func Offset: 0x180
	// Line 652, Address: 0x377814, Func Offset: 0x184
	// Line 653, Address: 0x37781c, Func Offset: 0x18c
	// Line 659, Address: 0x377820, Func Offset: 0x190
	// Line 653, Address: 0x377824, Func Offset: 0x194
	// Line 659, Address: 0x377828, Func Offset: 0x198
	// Line 599, Address: 0x377830, Func Offset: 0x1a0
	// Line 604, Address: 0x377838, Func Offset: 0x1a8
	// Line 659, Address: 0x377840, Func Offset: 0x1b0
	// Line 604, Address: 0x377844, Func Offset: 0x1b4
	// Line 659, Address: 0x377848, Func Offset: 0x1b8
	// Line 607, Address: 0x377868, Func Offset: 0x1d8
	// Line 659, Address: 0x37786c, Func Offset: 0x1dc
	// Line 611, Address: 0x37787c, Func Offset: 0x1ec
	// Line 659, Address: 0x377884, Func Offset: 0x1f4
	// Line 611, Address: 0x377888, Func Offset: 0x1f8
	// Line 659, Address: 0x37788c, Func Offset: 0x1fc
	// Line 614, Address: 0x3778ac, Func Offset: 0x21c
	// Line 659, Address: 0x3778b0, Func Offset: 0x220
	// Line 624, Address: 0x3778c0, Func Offset: 0x230
	// Line 659, Address: 0x3778c4, Func Offset: 0x234
	// Line 636, Address: 0x377904, Func Offset: 0x274
	// Line 659, Address: 0x377908, Func Offset: 0x278
	// Line 636, Address: 0x377930, Func Offset: 0x2a0
	// Line 659, Address: 0x377938, Func Offset: 0x2a8
	// Line 636, Address: 0x37793c, Func Offset: 0x2ac
	// Line 659, Address: 0x377940, Func Offset: 0x2b0
	// Line 636, Address: 0x37794c, Func Offset: 0x2bc
	// Line 659, Address: 0x377950, Func Offset: 0x2c0
	// Line 636, Address: 0x37795c, Func Offset: 0x2cc
	// Line 659, Address: 0x377960, Func Offset: 0x2d0
	// Line 636, Address: 0x377998, Func Offset: 0x308
	// Line 659, Address: 0x37799c, Func Offset: 0x30c
	// Line 637, Address: 0x3779d8, Func Offset: 0x348
	// Line 659, Address: 0x3779dc, Func Offset: 0x34c
	// Line 636, Address: 0x3779e0, Func Offset: 0x350
	// Line 659, Address: 0x3779e4, Func Offset: 0x354
	// Line 636, Address: 0x3779ec, Func Offset: 0x35c
	// Line 659, Address: 0x3779f0, Func Offset: 0x360
	// Line 637, Address: 0x3779f8, Func Offset: 0x368
	// Line 659, Address: 0x377a00, Func Offset: 0x370
	// Line 636, Address: 0x377a28, Func Offset: 0x398
	// Line 659, Address: 0x377a2c, Func Offset: 0x39c
	// Line 636, Address: 0x377a30, Func Offset: 0x3a0
	// Line 659, Address: 0x377a34, Func Offset: 0x3a4
	// Line 636, Address: 0x377a38, Func Offset: 0x3a8
	// Line 659, Address: 0x377a3c, Func Offset: 0x3ac
	// Line 636, Address: 0x377a44, Func Offset: 0x3b4
	// Line 659, Address: 0x377a48, Func Offset: 0x3b8
	// Line 636, Address: 0x377a60, Func Offset: 0x3d0
	// Line 659, Address: 0x377a68, Func Offset: 0x3d8
	// Line 637, Address: 0x377a78, Func Offset: 0x3e8
	// Line 659, Address: 0x377a7c, Func Offset: 0x3ec
	// Line 637, Address: 0x377a88, Func Offset: 0x3f8
	// Line 659, Address: 0x377a8c, Func Offset: 0x3fc
	// Line 637, Address: 0x377a98, Func Offset: 0x408
	// Line 659, Address: 0x377a9c, Func Offset: 0x40c
	// Line 637, Address: 0x377ab0, Func Offset: 0x420
	// Line 659, Address: 0x377ad4, Func Offset: 0x444
	// Line 637, Address: 0x377ae0, Func Offset: 0x450
	// Line 659, Address: 0x377b10, Func Offset: 0x480
	// Line 637, Address: 0x377b60, Func Offset: 0x4d0
	// Line 659, Address: 0x377b64, Func Offset: 0x4d4
	// Line 637, Address: 0x377b84, Func Offset: 0x4f4
	// Line 659, Address: 0x377b8c, Func Offset: 0x4fc
	// Line 637, Address: 0x377bc0, Func Offset: 0x530
	// Line 659, Address: 0x377bc8, Func Offset: 0x538
	// Line 637, Address: 0x377bd0, Func Offset: 0x540
	// Line 659, Address: 0x377bd4, Func Offset: 0x544
	// Line 637, Address: 0x377c04, Func Offset: 0x574
	// Line 659, Address: 0x377c14, Func Offset: 0x584
	// Line 637, Address: 0x377c38, Func Offset: 0x5a8
	// Line 659, Address: 0x377c40, Func Offset: 0x5b0
	// Line 660, Address: 0x377c4c, Func Offset: 0x5bc
	// Func End, Address: 0x377c74, Func Offset: 0x5e4
}

// start__Q39oob_state8OOBState14out_state_typeFv
// Start address: 0x377c80
void start()
{
	// Line 403, Address: 0x377c80, Func Offset: 0
	// Line 404, Address: 0x377c84, Func Offset: 0x4
	// Line 403, Address: 0x377c88, Func Offset: 0x8
	// Line 404, Address: 0x377c90, Func Offset: 0x10
	// Line 403, Address: 0x377c98, Func Offset: 0x18
	// Line 405, Address: 0x377c9c, Func Offset: 0x1c
	// Func End, Address: 0x377ca4, Func Offset: 0x24
}

// stop__Q39oob_state8OOBState14out_state_typeFv
// Start address: 0x377cb0
void stop()
{
	// Line 406, Address: 0x377cb0, Func Offset: 0
	// Func End, Address: 0x377cb8, Func Offset: 0x8
}

// update__Q39oob_state8OOBState14out_state_typeFR6xSceneRf
// Start address: 0x377cc0
state_enum_2 update(float32& dt)
{
	uint8 oob;
	// Line 408, Address: 0x377cc0, Func Offset: 0
	// Line 409, Address: 0x377cc4, Func Offset: 0x4
	// Line 408, Address: 0x377cc8, Func Offset: 0x8
	// Line 409, Address: 0x377cdc, Func Offset: 0x1c
	// Line 410, Address: 0x377ce0, Func Offset: 0x20
	// Line 413, Address: 0x377ce8, Func Offset: 0x28
	// Line 414, Address: 0x377cf4, Func Offset: 0x34
	// Line 416, Address: 0x377d48, Func Offset: 0x88
	// Line 417, Address: 0x377d5c, Func Offset: 0x9c
	// Line 428, Address: 0x377d64, Func Offset: 0xa4
	// Line 431, Address: 0x377d74, Func Offset: 0xb4
	// Line 432, Address: 0x377d80, Func Offset: 0xc0
	// Line 431, Address: 0x377d84, Func Offset: 0xc4
	// Line 432, Address: 0x377d8c, Func Offset: 0xcc
	// Line 434, Address: 0x377da0, Func Offset: 0xe0
	// Line 420, Address: 0x377db4, Func Offset: 0xf4
	// Line 434, Address: 0x377dc0, Func Offset: 0x100
	// Line 420, Address: 0x377dc8, Func Offset: 0x108
	// Line 435, Address: 0x377dd8, Func Offset: 0x118
	// Func End, Address: 0x377df0, Func Offset: 0x130
}

// start__Q39oob_state8OOBState13in_state_typeFv
// Start address: 0x377df0
void start()
{
	// Line 379, Address: 0x377df0, Func Offset: 0
	// Line 380, Address: 0x377e00, Func Offset: 0x10
	// Line 381, Address: 0x377e04, Func Offset: 0x14
	// Func End, Address: 0x377e0c, Func Offset: 0x1c
}

// stop__Q39oob_state8OOBState13in_state_typeFv
// Start address: 0x377e10
void stop()
{
	// Line 382, Address: 0x377e10, Func Offset: 0
	// Func End, Address: 0x377e18, Func Offset: 0x8
}

// update__Q39oob_state8OOBState13in_state_typeFR6xSceneRf
// Start address: 0x377e20
state_enum_2 update()
{
	uint8 oob;
	// Line 384, Address: 0x377e20, Func Offset: 0
	// Line 385, Address: 0x377e24, Func Offset: 0x4
	// Line 384, Address: 0x377e28, Func Offset: 0x8
	// Line 385, Address: 0x377e34, Func Offset: 0x14
	// Line 386, Address: 0x377e38, Func Offset: 0x18
	// Line 389, Address: 0x377e40, Func Offset: 0x20
	// Line 390, Address: 0x377e4c, Func Offset: 0x2c
	// Line 393, Address: 0x377ea0, Func Offset: 0x80
	// Line 394, Address: 0x377ea4, Func Offset: 0x84
	// Line 393, Address: 0x377ea8, Func Offset: 0x88
	// Line 394, Address: 0x377eac, Func Offset: 0x8c
	// Func End, Address: 0x377ebc, Func Offset: 0x9c
}

