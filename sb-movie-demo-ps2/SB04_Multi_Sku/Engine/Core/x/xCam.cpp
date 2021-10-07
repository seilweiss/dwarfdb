



xCam* get_next();
void update(xScene& scene, float32 dt);
void stop();
void start();
void destroy();
void create();
void create_frustum_planes(xVec4* frust_planes, xMat4x3& ltm, xVec2& view_offset, xVec2& view_window, float32 near_plane, float32 far_plane);
void set_fov(float32 fov);
void set_world_matrix(xMat4x3& mat);
void end_render();
void begin_render(uint8 clear);
void prepare_render();
void set_scene(xScene& scene);
void destroy();
void create(int32 w, int32 h);
void set_primary(int32 index);
int32 get_blend(int32 to_index);
int32 get_next();
void remove(xCam& cam, uint8 force_cut);
void add(xCam& cam, uint8 force_cut);
void update(xScene& scene, float32 dt);
void priority_force_cut();
void reset();
void destroy();
void create();
uint8 active();
void create();
void refresh_mat();
void scene_exit();
void scene_enter();
void stop();
void start();

// get_next__9xCamBlendFv
// Start address: 0x435ba0
xCam* xCamBlend::get_next()
{
	// Line 990, Address: 0x435ba0, Func Offset: 0
	// Line 991, Address: 0x435bb8, Func Offset: 0x18
	// Func End, Address: 0x435bc0, Func Offset: 0x20
}

// update__9xCamBlendFR6xScenef
// Start address: 0x435bc0
void xCamBlend::update(xScene& scene, float32 dt)
{
	float32 t;
	// Line 956, Address: 0x435bc0, Func Offset: 0
	// Line 959, Address: 0x435bc4, Func Offset: 0x4
	// Line 956, Address: 0x435bc8, Func Offset: 0x8
	// Line 959, Address: 0x435bcc, Func Offset: 0xc
	// Line 956, Address: 0x435bd0, Func Offset: 0x10
	// Line 957, Address: 0x435bf0, Func Offset: 0x30
	// Line 958, Address: 0x435c00, Func Offset: 0x40
	// Line 959, Address: 0x435c10, Func Offset: 0x50
	// Line 960, Address: 0x435c20, Func Offset: 0x60
	// Line 972, Address: 0x435c74, Func Offset: 0xb4
	// Line 976, Address: 0x435c80, Func Offset: 0xc0
	// Line 972, Address: 0x435c84, Func Offset: 0xc4
	// Line 976, Address: 0x435ce0, Func Offset: 0x120
	// Line 977, Address: 0x435cf4, Func Offset: 0x134
	// Line 980, Address: 0x435d0c, Func Offset: 0x14c
	// Line 981, Address: 0x43647c, Func Offset: 0x8bc
	// Line 982, Address: 0x4367d0, Func Offset: 0xc10
	// Line 985, Address: 0x4367e8, Func Offset: 0xc28
	// Line 982, Address: 0x4367ec, Func Offset: 0xc2c
	// Line 985, Address: 0x436800, Func Offset: 0xc40
	// Line 986, Address: 0x43696c, Func Offset: 0xdac
	// Line 980, Address: 0x43697c, Func Offset: 0xdbc
	// Line 986, Address: 0x4369a4, Func Offset: 0xde4
	// Line 980, Address: 0x4369ac, Func Offset: 0xdec
	// Line 986, Address: 0x4369c4, Func Offset: 0xe04
	// Line 980, Address: 0x4369cc, Func Offset: 0xe0c
	// Line 986, Address: 0x4369f4, Func Offset: 0xe34
	// Line 980, Address: 0x4369fc, Func Offset: 0xe3c
	// Line 986, Address: 0x436a14, Func Offset: 0xe54
	// Line 981, Address: 0x436a1c, Func Offset: 0xe5c
	// Line 986, Address: 0x436a44, Func Offset: 0xe84
	// Line 981, Address: 0x436a4c, Func Offset: 0xe8c
	// Line 986, Address: 0x436a64, Func Offset: 0xea4
	// Line 981, Address: 0x436a6c, Func Offset: 0xeac
	// Line 986, Address: 0x436a94, Func Offset: 0xed4
	// Line 981, Address: 0x436a9c, Func Offset: 0xedc
	// Line 986, Address: 0x436ab4, Func Offset: 0xef4
	// Line 981, Address: 0x436abc, Func Offset: 0xefc
	// Line 986, Address: 0x436ae4, Func Offset: 0xf24
	// Line 981, Address: 0x436aec, Func Offset: 0xf2c
	// Line 986, Address: 0x436b04, Func Offset: 0xf44
	// Line 981, Address: 0x436b0c, Func Offset: 0xf4c
	// Line 986, Address: 0x436b34, Func Offset: 0xf74
	// Line 981, Address: 0x436b3c, Func Offset: 0xf7c
	// Line 986, Address: 0x436b54, Func Offset: 0xf94
	// Line 981, Address: 0x436b5c, Func Offset: 0xf9c
	// Line 986, Address: 0x436b84, Func Offset: 0xfc4
	// Line 981, Address: 0x436b8c, Func Offset: 0xfcc
	// Line 986, Address: 0x436ba4, Func Offset: 0xfe4
	// Line 981, Address: 0x436bac, Func Offset: 0xfec
	// Line 986, Address: 0x436bd4, Func Offset: 0x1014
	// Line 981, Address: 0x436bdc, Func Offset: 0x101c
	// Line 986, Address: 0x436bf4, Func Offset: 0x1034
	// Func End, Address: 0x436c14, Func Offset: 0x1054
}

// stop__9xCamBlendFv
// Start address: 0x436c20
void xCamBlend::stop()
{
	// Line 944, Address: 0x436c20, Func Offset: 0
	// Line 945, Address: 0x436c30, Func Offset: 0x10
	// Line 946, Address: 0x436c44, Func Offset: 0x24
	// Line 949, Address: 0x436c58, Func Offset: 0x38
	// Line 952, Address: 0x436c60, Func Offset: 0x40
	// Line 949, Address: 0x436c64, Func Offset: 0x44
	// Line 950, Address: 0x436c74, Func Offset: 0x54
	// Line 952, Address: 0x436c88, Func Offset: 0x68
	// Line 953, Address: 0x436c90, Func Offset: 0x70
	// Func End, Address: 0x436cc4, Func Offset: 0xa4
}

// start__9xCamBlendFv
// Start address: 0x436cd0
void xCamBlend::start()
{
	xCamOrientType orient_table[2][2];
	xCamCoordType coord_table[3][3];
	// Line 875, Address: 0x436cd0, Func Offset: 0
	// Line 912, Address: 0x436ce4, Func Offset: 0x14
	// Line 918, Address: 0x436cf8, Func Offset: 0x28
	// Line 924, Address: 0x436d18, Func Offset: 0x48
	// Line 934, Address: 0x436d24, Func Offset: 0x54
	// Line 935, Address: 0x436d2c, Func Offset: 0x5c
	// Line 934, Address: 0x436d30, Func Offset: 0x60
	// Line 935, Address: 0x436d38, Func Offset: 0x68
	// Line 934, Address: 0x436d3c, Func Offset: 0x6c
	// Line 935, Address: 0x436d64, Func Offset: 0x94
	// Line 938, Address: 0x436d8c, Func Offset: 0xbc
	// Line 940, Address: 0x436d90, Func Offset: 0xc0
	// Line 941, Address: 0x436d98, Func Offset: 0xc8
	// Func End, Address: 0x436f00, Func Offset: 0x230
}

// destroy__9xCamBlendFv
// Start address: 0x436f00
void xCamBlend::destroy()
{
	// Line 872, Address: 0x436f00, Func Offset: 0
	// Func End, Address: 0x436f08, Func Offset: 0x8
}

// create__9xCamBlendFv
// Start address: 0x436f10
void xCamBlend::create()
{
	// Line 863, Address: 0x436f10, Func Offset: 0
	// Line 864, Address: 0x436f24, Func Offset: 0x14
	// Line 865, Address: 0x436f30, Func Offset: 0x20
	// Line 867, Address: 0x436f34, Func Offset: 0x24
	// Func End, Address: 0x436f3c, Func Offset: 0x2c
}

// create_frustum_planes__10xCamScreenFP5xVec4RC7xMat4x3RC5xVec2RC5xVec2ff
// Start address: 0x436f40
void xCamScreen::create_frustum_planes(xVec4* frust_planes, xMat4x3& ltm, xVec2& view_offset, xVec2& view_window, float32 near_plane, float32 far_plane)
{
	plane_type* planes;
	xVec3 temp;
	xVec3 cop;
	float32 scale;
	xVec3 corners[8];
	int32 i;
	xVec3* target;
	// Line 753, Address: 0x436f40, Func Offset: 0
	// Line 778, Address: 0x436f44, Func Offset: 0x4
	// Line 766, Address: 0x436f48, Func Offset: 0x8
	// Line 753, Address: 0x436f4c, Func Offset: 0xc
	// Line 767, Address: 0x436f50, Func Offset: 0x10
	// Line 753, Address: 0x436f54, Func Offset: 0x14
	// Line 767, Address: 0x436f58, Func Offset: 0x18
	// Line 753, Address: 0x436f5c, Func Offset: 0x1c
	// Line 767, Address: 0x436f64, Func Offset: 0x24
	// Line 753, Address: 0x436f68, Func Offset: 0x28
	// Line 768, Address: 0x436f6c, Func Offset: 0x2c
	// Line 753, Address: 0x436f70, Func Offset: 0x30
	// Line 767, Address: 0x436f74, Func Offset: 0x34
	// Line 766, Address: 0x436f78, Func Offset: 0x38
	// Line 753, Address: 0x436f7c, Func Offset: 0x3c
	// Line 767, Address: 0x436f80, Func Offset: 0x40
	// Line 753, Address: 0x436f84, Func Offset: 0x44
	// Line 767, Address: 0x436f8c, Func Offset: 0x4c
	// Line 768, Address: 0x436f90, Func Offset: 0x50
	// Line 767, Address: 0x436f94, Func Offset: 0x54
	// Line 768, Address: 0x436f98, Func Offset: 0x58
	// Line 767, Address: 0x436f9c, Func Offset: 0x5c
	// Line 768, Address: 0x436fa0, Func Offset: 0x60
	// Line 771, Address: 0x436fa4, Func Offset: 0x64
	// Line 767, Address: 0x436fa8, Func Offset: 0x68
	// Line 772, Address: 0x436fac, Func Offset: 0x6c
	// Line 768, Address: 0x436fb0, Func Offset: 0x70
	// Line 767, Address: 0x436fb4, Func Offset: 0x74
	// Line 789, Address: 0x436fbc, Func Offset: 0x7c
	// Line 771, Address: 0x436fc0, Func Offset: 0x80
	// Line 789, Address: 0x436fc4, Func Offset: 0x84
	// Line 767, Address: 0x436fc8, Func Offset: 0x88
	// Line 768, Address: 0x436fd0, Func Offset: 0x90
	// Line 789, Address: 0x436fd4, Func Offset: 0x94
	// Line 753, Address: 0x436fd8, Func Offset: 0x98
	// Line 789, Address: 0x436fdc, Func Offset: 0x9c
	// Line 768, Address: 0x436fe0, Func Offset: 0xa0
	// Line 767, Address: 0x436fe4, Func Offset: 0xa4
	// Line 774, Address: 0x436fe8, Func Offset: 0xa8
	// Line 789, Address: 0x436ff4, Func Offset: 0xb4
	// Line 767, Address: 0x436ff8, Func Offset: 0xb8
	// Line 783, Address: 0x437000, Func Offset: 0xc0
	// Line 789, Address: 0x437004, Func Offset: 0xc4
	// Line 767, Address: 0x43700c, Func Offset: 0xcc
	// Line 789, Address: 0x437014, Func Offset: 0xd4
	// Line 768, Address: 0x437018, Func Offset: 0xd8
	// Line 774, Address: 0x437028, Func Offset: 0xe8
	// Line 767, Address: 0x43702c, Func Offset: 0xec
	// Line 771, Address: 0x437030, Func Offset: 0xf0
	// Line 767, Address: 0x437034, Func Offset: 0xf4
	// Line 768, Address: 0x437038, Func Offset: 0xf8
	// Line 767, Address: 0x43703c, Func Offset: 0xfc
	// Line 768, Address: 0x437040, Func Offset: 0x100
	// Line 767, Address: 0x437050, Func Offset: 0x110
	// Line 768, Address: 0x437060, Func Offset: 0x120
	// Line 771, Address: 0x437064, Func Offset: 0x124
	// Line 768, Address: 0x437068, Func Offset: 0x128
	// Line 774, Address: 0x437070, Func Offset: 0x130
	// Line 767, Address: 0x437074, Func Offset: 0x134
	// Line 768, Address: 0x437078, Func Offset: 0x138
	// Line 767, Address: 0x43707c, Func Offset: 0x13c
	// Line 789, Address: 0x437080, Func Offset: 0x140
	// Line 767, Address: 0x437084, Func Offset: 0x144
	// Line 789, Address: 0x437088, Func Offset: 0x148
	// Line 771, Address: 0x43708c, Func Offset: 0x14c
	// Line 768, Address: 0x437090, Func Offset: 0x150
	// Line 767, Address: 0x437094, Func Offset: 0x154
	// Line 771, Address: 0x437098, Func Offset: 0x158
	// Line 768, Address: 0x43709c, Func Offset: 0x15c
	// Line 774, Address: 0x4370a0, Func Offset: 0x160
	// Line 771, Address: 0x4370a4, Func Offset: 0x164
	// Line 768, Address: 0x4370a8, Func Offset: 0x168
	// Line 767, Address: 0x4370ac, Func Offset: 0x16c
	// Line 789, Address: 0x4370b0, Func Offset: 0x170
	// Line 768, Address: 0x4370b4, Func Offset: 0x174
	// Line 774, Address: 0x4370b8, Func Offset: 0x178
	// Line 771, Address: 0x4370bc, Func Offset: 0x17c
	// Line 767, Address: 0x4370c0, Func Offset: 0x180
	// Line 774, Address: 0x4370c4, Func Offset: 0x184
	// Line 768, Address: 0x4370c8, Func Offset: 0x188
	// Line 771, Address: 0x4370cc, Func Offset: 0x18c
	// Line 768, Address: 0x4370d0, Func Offset: 0x190
	// Line 774, Address: 0x4370d8, Func Offset: 0x198
	// Line 789, Address: 0x4370dc, Func Offset: 0x19c
	// Line 768, Address: 0x4370e0, Func Offset: 0x1a0
	// Line 771, Address: 0x4370f4, Func Offset: 0x1b4
	// Line 772, Address: 0x4370fc, Func Offset: 0x1bc
	// Line 771, Address: 0x437100, Func Offset: 0x1c0
	// Line 774, Address: 0x437104, Func Offset: 0x1c4
	// Line 772, Address: 0x437108, Func Offset: 0x1c8
	// Line 774, Address: 0x43710c, Func Offset: 0x1cc
	// Line 771, Address: 0x437110, Func Offset: 0x1d0
	// Line 768, Address: 0x437114, Func Offset: 0x1d4
	// Line 771, Address: 0x437118, Func Offset: 0x1d8
	// Line 768, Address: 0x437128, Func Offset: 0x1e8
	// Line 771, Address: 0x43712c, Func Offset: 0x1ec
	// Line 772, Address: 0x437144, Func Offset: 0x204
	// Line 774, Address: 0x437148, Func Offset: 0x208
	// Line 771, Address: 0x437154, Func Offset: 0x214
	// Line 774, Address: 0x437158, Func Offset: 0x218
	// Line 771, Address: 0x43715c, Func Offset: 0x21c
	// Line 778, Address: 0x437160, Func Offset: 0x220
	// Line 772, Address: 0x437164, Func Offset: 0x224
	// Line 771, Address: 0x437168, Func Offset: 0x228
	// Line 772, Address: 0x437178, Func Offset: 0x238
	// Line 771, Address: 0x437180, Func Offset: 0x240
	// Line 789, Address: 0x437184, Func Offset: 0x244
	// Line 771, Address: 0x437188, Func Offset: 0x248
	// Line 772, Address: 0x43718c, Func Offset: 0x24c
	// Line 778, Address: 0x437190, Func Offset: 0x250
	// Line 774, Address: 0x437194, Func Offset: 0x254
	// Line 772, Address: 0x4371a0, Func Offset: 0x260
	// Line 774, Address: 0x4371a8, Func Offset: 0x268
	// Line 772, Address: 0x4371ac, Func Offset: 0x26c
	// Line 778, Address: 0x4371b0, Func Offset: 0x270
	// Line 772, Address: 0x4371b4, Func Offset: 0x274
	// Line 775, Address: 0x4371c0, Func Offset: 0x280
	// Line 774, Address: 0x4371c4, Func Offset: 0x284
	// Line 753, Address: 0x4371c8, Func Offset: 0x288
	// Line 772, Address: 0x4371d4, Func Offset: 0x294
	// Line 778, Address: 0x4371e8, Func Offset: 0x2a8
	// Line 779, Address: 0x4371ec, Func Offset: 0x2ac
	// Line 772, Address: 0x4371f0, Func Offset: 0x2b0
	// Line 753, Address: 0x437200, Func Offset: 0x2c0
	// Line 768, Address: 0x437204, Func Offset: 0x2c4
	// Line 772, Address: 0x437208, Func Offset: 0x2c8
	// Line 775, Address: 0x437218, Func Offset: 0x2d8
	// Line 774, Address: 0x43721c, Func Offset: 0x2dc
	// Line 775, Address: 0x437224, Func Offset: 0x2e4
	// Line 772, Address: 0x437228, Func Offset: 0x2e8
	// Line 774, Address: 0x437230, Func Offset: 0x2f0
	// Line 772, Address: 0x43723c, Func Offset: 0x2fc
	// Line 774, Address: 0x437248, Func Offset: 0x308
	// Line 772, Address: 0x437254, Func Offset: 0x314
	// Line 780, Address: 0x437258, Func Offset: 0x318
	// Line 781, Address: 0x43725c, Func Offset: 0x31c
	// Line 772, Address: 0x437260, Func Offset: 0x320
	// Line 774, Address: 0x437268, Func Offset: 0x328
	// Line 775, Address: 0x43726c, Func Offset: 0x32c
	// Line 774, Address: 0x437270, Func Offset: 0x330
	// Line 780, Address: 0x437278, Func Offset: 0x338
	// Line 783, Address: 0x43727c, Func Offset: 0x33c
	// Line 775, Address: 0x437280, Func Offset: 0x340
	// Line 782, Address: 0x437284, Func Offset: 0x344
	// Line 781, Address: 0x437288, Func Offset: 0x348
	// Line 779, Address: 0x43728c, Func Offset: 0x34c
	// Line 782, Address: 0x437294, Func Offset: 0x354
	// Line 781, Address: 0x437298, Func Offset: 0x358
	// Line 783, Address: 0x43729c, Func Offset: 0x35c
	// Line 782, Address: 0x4372a0, Func Offset: 0x360
	// Line 783, Address: 0x4372a4, Func Offset: 0x364
	// Line 782, Address: 0x4372a8, Func Offset: 0x368
	// Line 785, Address: 0x4372ac, Func Offset: 0x36c
	// Line 786, Address: 0x4372b0, Func Offset: 0x370
	// Line 784, Address: 0x4372b4, Func Offset: 0x374
	// Line 785, Address: 0x4372b8, Func Offset: 0x378
	// Line 786, Address: 0x4372c0, Func Offset: 0x380
	// Line 785, Address: 0x4372c4, Func Offset: 0x384
	// Line 784, Address: 0x4372c8, Func Offset: 0x388
	// Line 785, Address: 0x4372d0, Func Offset: 0x390
	// Line 786, Address: 0x4372d8, Func Offset: 0x398
	// Line 780, Address: 0x4372dc, Func Offset: 0x39c
	// Line 786, Address: 0x4372e0, Func Offset: 0x3a0
	// Line 785, Address: 0x4372e4, Func Offset: 0x3a4
	// Line 786, Address: 0x4372e8, Func Offset: 0x3a8
	// Line 796, Address: 0x4372ec, Func Offset: 0x3ac
	// Line 800, Address: 0x437310, Func Offset: 0x3d0
	// Line 796, Address: 0x437314, Func Offset: 0x3d4
	// Line 800, Address: 0x437318, Func Offset: 0x3d8
	// Line 796, Address: 0x43731c, Func Offset: 0x3dc
	// Line 801, Address: 0x437320, Func Offset: 0x3e0
	// Line 795, Address: 0x437324, Func Offset: 0x3e4
	// Line 796, Address: 0x437328, Func Offset: 0x3e8
	// Line 800, Address: 0x437330, Func Offset: 0x3f0
	// Line 796, Address: 0x437334, Func Offset: 0x3f4
	// Line 803, Address: 0x437338, Func Offset: 0x3f8
	// Line 801, Address: 0x43733c, Func Offset: 0x3fc
	// Line 803, Address: 0x437340, Func Offset: 0x400
	// Line 796, Address: 0x437344, Func Offset: 0x404
	// Line 801, Address: 0x437348, Func Offset: 0x408
	// Line 802, Address: 0x43734c, Func Offset: 0x40c
	// Line 796, Address: 0x437350, Func Offset: 0x410
	// Line 801, Address: 0x437358, Func Offset: 0x418
	// Line 796, Address: 0x43735c, Func Offset: 0x41c
	// Line 795, Address: 0x437360, Func Offset: 0x420
	// Line 796, Address: 0x437364, Func Offset: 0x424
	// Line 795, Address: 0x437374, Func Offset: 0x434
	// Line 801, Address: 0x437380, Func Offset: 0x440
	// Line 796, Address: 0x437384, Func Offset: 0x444
	// Line 795, Address: 0x437388, Func Offset: 0x448
	// Line 801, Address: 0x437390, Func Offset: 0x450
	// Line 795, Address: 0x437394, Func Offset: 0x454
	// Line 796, Address: 0x437398, Func Offset: 0x458
	// Line 795, Address: 0x43739c, Func Offset: 0x45c
	// Line 796, Address: 0x4373a0, Func Offset: 0x460
	// Line 795, Address: 0x4373a8, Func Offset: 0x468
	// Line 801, Address: 0x4373ac, Func Offset: 0x46c
	// Line 796, Address: 0x4373b8, Func Offset: 0x478
	// Line 801, Address: 0x4373bc, Func Offset: 0x47c
	// Line 796, Address: 0x4373c0, Func Offset: 0x480
	// Line 795, Address: 0x4373c8, Func Offset: 0x488
	// Line 801, Address: 0x4373d0, Func Offset: 0x490
	// Line 795, Address: 0x4373d4, Func Offset: 0x494
	// Line 801, Address: 0x4373f0, Func Offset: 0x4b0
	// Line 795, Address: 0x4373f4, Func Offset: 0x4b4
	// Line 801, Address: 0x437400, Func Offset: 0x4c0
	// Line 795, Address: 0x437408, Func Offset: 0x4c8
	// Line 796, Address: 0x437410, Func Offset: 0x4d0
	// Line 795, Address: 0x437414, Func Offset: 0x4d4
	// Line 796, Address: 0x437418, Func Offset: 0x4d8
	// Line 801, Address: 0x43741c, Func Offset: 0x4dc
	// Line 795, Address: 0x437420, Func Offset: 0x4e0
	// Line 801, Address: 0x437428, Func Offset: 0x4e8
	// Line 796, Address: 0x437430, Func Offset: 0x4f0
	// Line 795, Address: 0x437438, Func Offset: 0x4f8
	// Line 801, Address: 0x43743c, Func Offset: 0x4fc
	// Line 795, Address: 0x437440, Func Offset: 0x500
	// Line 801, Address: 0x43744c, Func Offset: 0x50c
	// Line 797, Address: 0x437458, Func Offset: 0x518
	// Line 802, Address: 0x43745c, Func Offset: 0x51c
	// Line 796, Address: 0x437460, Func Offset: 0x520
	// Line 795, Address: 0x437464, Func Offset: 0x524
	// Line 797, Address: 0x43746c, Func Offset: 0x52c
	// Line 801, Address: 0x437474, Func Offset: 0x534
	// Line 802, Address: 0x437478, Func Offset: 0x538
	// Line 795, Address: 0x43747c, Func Offset: 0x53c
	// Line 796, Address: 0x437488, Func Offset: 0x548
	// Line 797, Address: 0x43748c, Func Offset: 0x54c
	// Line 801, Address: 0x437490, Func Offset: 0x550
	// Line 797, Address: 0x437494, Func Offset: 0x554
	// Line 802, Address: 0x43749c, Func Offset: 0x55c
	// Line 797, Address: 0x4374a4, Func Offset: 0x564
	// Line 802, Address: 0x4374a8, Func Offset: 0x568
	// Line 801, Address: 0x4374b0, Func Offset: 0x570
	// Line 797, Address: 0x4374b4, Func Offset: 0x574
	// Line 802, Address: 0x4374c0, Func Offset: 0x580
	// Line 797, Address: 0x4374c8, Func Offset: 0x588
	// Line 802, Address: 0x4374d0, Func Offset: 0x590
	// Line 797, Address: 0x4374d4, Func Offset: 0x594
	// Line 802, Address: 0x4374d8, Func Offset: 0x598
	// Line 797, Address: 0x4374dc, Func Offset: 0x59c
	// Line 802, Address: 0x4374e4, Func Offset: 0x5a4
	// Line 797, Address: 0x4374e8, Func Offset: 0x5a8
	// Line 802, Address: 0x4374ec, Func Offset: 0x5ac
	// Line 797, Address: 0x4374f0, Func Offset: 0x5b0
	// Line 802, Address: 0x4374f4, Func Offset: 0x5b4
	// Line 797, Address: 0x437500, Func Offset: 0x5c0
	// Line 802, Address: 0x437504, Func Offset: 0x5c4
	// Line 797, Address: 0x437508, Func Offset: 0x5c8
	// Line 802, Address: 0x43750c, Func Offset: 0x5cc
	// Line 797, Address: 0x437510, Func Offset: 0x5d0
	// Line 802, Address: 0x437518, Func Offset: 0x5d8
	// Line 797, Address: 0x437524, Func Offset: 0x5e4
	// Line 802, Address: 0x437530, Func Offset: 0x5f0
	// Line 801, Address: 0x43753c, Func Offset: 0x5fc
	// Line 797, Address: 0x437540, Func Offset: 0x600
	// Line 801, Address: 0x437548, Func Offset: 0x608
	// Line 802, Address: 0x43754c, Func Offset: 0x60c
	// Line 797, Address: 0x437554, Func Offset: 0x614
	// Line 802, Address: 0x437558, Func Offset: 0x618
	// Line 797, Address: 0x437564, Func Offset: 0x624
	// Line 802, Address: 0x437568, Func Offset: 0x628
	// Line 797, Address: 0x43756c, Func Offset: 0x62c
	// Line 802, Address: 0x437570, Func Offset: 0x630
	// Line 797, Address: 0x437574, Func Offset: 0x634
	// Line 802, Address: 0x43757c, Func Offset: 0x63c
	// Line 797, Address: 0x437580, Func Offset: 0x640
	// Line 802, Address: 0x437594, Func Offset: 0x654
	// Line 803, Address: 0x4375a0, Func Offset: 0x660
	// Line 814, Address: 0x4375a8, Func Offset: 0x668
	// Line 806, Address: 0x4375ac, Func Offset: 0x66c
	// Line 814, Address: 0x4375bc, Func Offset: 0x67c
	// Line 807, Address: 0x4375c0, Func Offset: 0x680
	// Line 810, Address: 0x4375c4, Func Offset: 0x684
	// Line 807, Address: 0x4375c8, Func Offset: 0x688
	// Line 814, Address: 0x4375cc, Func Offset: 0x68c
	// Line 807, Address: 0x4375d0, Func Offset: 0x690
	// Line 814, Address: 0x4375d4, Func Offset: 0x694
	// Line 810, Address: 0x4375dc, Func Offset: 0x69c
	// Line 806, Address: 0x4375e0, Func Offset: 0x6a0
	// Line 810, Address: 0x4375e4, Func Offset: 0x6a4
	// Line 806, Address: 0x4375e8, Func Offset: 0x6a8
	// Line 810, Address: 0x4375ec, Func Offset: 0x6ac
	// Line 807, Address: 0x4375f0, Func Offset: 0x6b0
	// Line 815, Address: 0x4375f4, Func Offset: 0x6b4
	// Line 806, Address: 0x4375f8, Func Offset: 0x6b8
	// Line 815, Address: 0x4375fc, Func Offset: 0x6bc
	// Line 807, Address: 0x437600, Func Offset: 0x6c0
	// Line 814, Address: 0x437604, Func Offset: 0x6c4
	// Line 825, Address: 0x437608, Func Offset: 0x6c8
	// Line 807, Address: 0x43760c, Func Offset: 0x6cc
	// Line 814, Address: 0x437610, Func Offset: 0x6d0
	// Line 815, Address: 0x437614, Func Offset: 0x6d4
	// Line 811, Address: 0x437618, Func Offset: 0x6d8
	// Line 815, Address: 0x43761c, Func Offset: 0x6dc
	// Line 807, Address: 0x437620, Func Offset: 0x6e0
	// Line 820, Address: 0x437624, Func Offset: 0x6e4
	// Line 807, Address: 0x437628, Func Offset: 0x6e8
	// Line 820, Address: 0x43762c, Func Offset: 0x6ec
	// Line 806, Address: 0x437630, Func Offset: 0x6f0
	// Line 814, Address: 0x437634, Func Offset: 0x6f4
	// Line 825, Address: 0x437638, Func Offset: 0x6f8
	// Line 820, Address: 0x43763c, Func Offset: 0x6fc
	// Line 807, Address: 0x437640, Func Offset: 0x700
	// Line 825, Address: 0x437644, Func Offset: 0x704
	// Line 807, Address: 0x437648, Func Offset: 0x708
	// Line 820, Address: 0x43764c, Func Offset: 0x70c
	// Line 810, Address: 0x437654, Func Offset: 0x714
	// Line 816, Address: 0x437658, Func Offset: 0x718
	// Line 814, Address: 0x43765c, Func Offset: 0x71c
	// Line 817, Address: 0x437664, Func Offset: 0x724
	// Line 810, Address: 0x437668, Func Offset: 0x728
	// Line 817, Address: 0x437674, Func Offset: 0x734
	// Line 814, Address: 0x437678, Func Offset: 0x738
	// Line 816, Address: 0x437680, Func Offset: 0x740
	// Line 810, Address: 0x437684, Func Offset: 0x744
	// Line 817, Address: 0x437688, Func Offset: 0x748
	// Line 810, Address: 0x43768c, Func Offset: 0x74c
	// Line 814, Address: 0x437694, Func Offset: 0x754
	// Line 810, Address: 0x4376a4, Func Offset: 0x764
	// Line 811, Address: 0x4376a8, Func Offset: 0x768
	// Line 814, Address: 0x4376b0, Func Offset: 0x770
	// Line 810, Address: 0x4376bc, Func Offset: 0x77c
	// Line 825, Address: 0x4376d0, Func Offset: 0x790
	// Line 814, Address: 0x4376d8, Func Offset: 0x798
	// Line 810, Address: 0x4376e8, Func Offset: 0x7a8
	// Line 814, Address: 0x4376ec, Func Offset: 0x7ac
	// Line 815, Address: 0x4376f0, Func Offset: 0x7b0
	// Line 810, Address: 0x4376f8, Func Offset: 0x7b8
	// Line 814, Address: 0x4376fc, Func Offset: 0x7bc
	// Line 810, Address: 0x437700, Func Offset: 0x7c0
	// Line 814, Address: 0x437704, Func Offset: 0x7c4
	// Line 810, Address: 0x437708, Func Offset: 0x7c8
	// Line 825, Address: 0x437710, Func Offset: 0x7d0
	// Line 814, Address: 0x437714, Func Offset: 0x7d4
	// Line 825, Address: 0x437718, Func Offset: 0x7d8
	// Line 814, Address: 0x43771c, Func Offset: 0x7dc
	// Line 810, Address: 0x437724, Func Offset: 0x7e4
	// Line 814, Address: 0x437728, Func Offset: 0x7e8
	// Line 810, Address: 0x43772c, Func Offset: 0x7ec
	// Line 826, Address: 0x437730, Func Offset: 0x7f0
	// Line 810, Address: 0x437734, Func Offset: 0x7f4
	// Line 814, Address: 0x437738, Func Offset: 0x7f8
	// Line 810, Address: 0x43773c, Func Offset: 0x7fc
	// Line 826, Address: 0x437740, Func Offset: 0x800
	// Line 814, Address: 0x437744, Func Offset: 0x804
	// Line 810, Address: 0x43774c, Func Offset: 0x80c
	// Line 814, Address: 0x437750, Func Offset: 0x810
	// Line 825, Address: 0x437754, Func Offset: 0x814
	// Line 826, Address: 0x43775c, Func Offset: 0x81c
	// Line 825, Address: 0x437760, Func Offset: 0x820
	// Line 810, Address: 0x437764, Func Offset: 0x824
	// Line 814, Address: 0x437768, Func Offset: 0x828
	// Line 831, Address: 0x43776c, Func Offset: 0x82c
	// Line 814, Address: 0x437770, Func Offset: 0x830
	// Line 827, Address: 0x437774, Func Offset: 0x834
	// Line 828, Address: 0x437778, Func Offset: 0x838
	// Line 810, Address: 0x43777c, Func Offset: 0x83c
	// Line 815, Address: 0x437780, Func Offset: 0x840
	// Line 825, Address: 0x43778c, Func Offset: 0x84c
	// Line 827, Address: 0x437790, Func Offset: 0x850
	// Line 828, Address: 0x437794, Func Offset: 0x854
	// Line 831, Address: 0x437798, Func Offset: 0x858
	// Line 815, Address: 0x43779c, Func Offset: 0x85c
	// Line 810, Address: 0x4377a0, Func Offset: 0x860
	// Line 831, Address: 0x4377a4, Func Offset: 0x864
	// Line 825, Address: 0x4377a8, Func Offset: 0x868
	// Line 831, Address: 0x4377b0, Func Offset: 0x870
	// Line 815, Address: 0x4377b4, Func Offset: 0x874
	// Line 814, Address: 0x4377b8, Func Offset: 0x878
	// Line 831, Address: 0x4377bc, Func Offset: 0x87c
	// Line 826, Address: 0x4377c0, Func Offset: 0x880
	// Line 810, Address: 0x4377c4, Func Offset: 0x884
	// Line 814, Address: 0x4377c8, Func Offset: 0x888
	// Line 815, Address: 0x4377cc, Func Offset: 0x88c
	// Line 831, Address: 0x4377d0, Func Offset: 0x890
	// Line 811, Address: 0x4377d4, Func Offset: 0x894
	// Line 815, Address: 0x4377dc, Func Offset: 0x89c
	// Line 831, Address: 0x4377e0, Func Offset: 0x8a0
	// Line 815, Address: 0x4377e4, Func Offset: 0x8a4
	// Line 814, Address: 0x4377e8, Func Offset: 0x8a8
	// Line 811, Address: 0x4377f0, Func Offset: 0x8b0
	// Line 814, Address: 0x4377f8, Func Offset: 0x8b8
	// Line 815, Address: 0x4377fc, Func Offset: 0x8bc
	// Line 811, Address: 0x437804, Func Offset: 0x8c4
	// Line 831, Address: 0x43780c, Func Offset: 0x8cc
	// Line 815, Address: 0x437810, Func Offset: 0x8d0
	// Line 831, Address: 0x437818, Func Offset: 0x8d8
	// Line 820, Address: 0x43781c, Func Offset: 0x8dc
	// Line 831, Address: 0x437820, Func Offset: 0x8e0
	// Line 815, Address: 0x437824, Func Offset: 0x8e4
	// Line 820, Address: 0x437828, Func Offset: 0x8e8
	// Line 815, Address: 0x437830, Func Offset: 0x8f0
	// Line 831, Address: 0x437834, Func Offset: 0x8f4
	// Line 815, Address: 0x437838, Func Offset: 0x8f8
	// Line 820, Address: 0x437840, Func Offset: 0x900
	// Line 815, Address: 0x437844, Func Offset: 0x904
	// Line 820, Address: 0x43784c, Func Offset: 0x90c
	// Line 815, Address: 0x437850, Func Offset: 0x910
	// Line 826, Address: 0x437854, Func Offset: 0x914
	// Line 825, Address: 0x437858, Func Offset: 0x918
	// Line 814, Address: 0x43785c, Func Offset: 0x91c
	// Line 810, Address: 0x437864, Func Offset: 0x924
	// Line 815, Address: 0x437868, Func Offset: 0x928
	// Line 814, Address: 0x437874, Func Offset: 0x934
	// Line 816, Address: 0x43787c, Func Offset: 0x93c
	// Line 820, Address: 0x437884, Func Offset: 0x944
	// Line 815, Address: 0x437888, Func Offset: 0x948
	// Line 826, Address: 0x43788c, Func Offset: 0x94c
	// Line 820, Address: 0x437890, Func Offset: 0x950
	// Line 816, Address: 0x437894, Func Offset: 0x954
	// Line 814, Address: 0x437898, Func Offset: 0x958
	// Line 816, Address: 0x43789c, Func Offset: 0x95c
	// Line 825, Address: 0x4378a0, Func Offset: 0x960
	// Line 815, Address: 0x4378a4, Func Offset: 0x964
	// Line 820, Address: 0x4378ac, Func Offset: 0x96c
	// Line 826, Address: 0x4378b4, Func Offset: 0x974
	// Line 816, Address: 0x4378b8, Func Offset: 0x978
	// Line 825, Address: 0x4378c0, Func Offset: 0x980
	// Line 826, Address: 0x4378c4, Func Offset: 0x984
	// Line 816, Address: 0x4378c8, Func Offset: 0x988
	// Line 820, Address: 0x4378ec, Func Offset: 0x9ac
	// Line 826, Address: 0x4378f0, Func Offset: 0x9b0
	// Line 820, Address: 0x4378f4, Func Offset: 0x9b4
	// Line 826, Address: 0x4378f8, Func Offset: 0x9b8
	// Line 816, Address: 0x4378fc, Func Offset: 0x9bc
	// Line 825, Address: 0x437908, Func Offset: 0x9c8
	// Line 820, Address: 0x437910, Func Offset: 0x9d0
	// Line 825, Address: 0x437914, Func Offset: 0x9d4
	// Line 816, Address: 0x437918, Func Offset: 0x9d8
	// Line 825, Address: 0x437924, Func Offset: 0x9e4
	// Line 820, Address: 0x437928, Func Offset: 0x9e8
	// Line 816, Address: 0x43792c, Func Offset: 0x9ec
	// Line 825, Address: 0x437930, Func Offset: 0x9f0
	// Line 820, Address: 0x437934, Func Offset: 0x9f4
	// Line 826, Address: 0x437938, Func Offset: 0x9f8
	// Line 820, Address: 0x437940, Func Offset: 0xa00
	// Line 816, Address: 0x437954, Func Offset: 0xa14
	// Line 826, Address: 0x437958, Func Offset: 0xa18
	// Line 820, Address: 0x43795c, Func Offset: 0xa1c
	// Line 825, Address: 0x437964, Func Offset: 0xa24
	// Line 816, Address: 0x437968, Func Offset: 0xa28
	// Line 825, Address: 0x437974, Func Offset: 0xa34
	// Line 820, Address: 0x437978, Func Offset: 0xa38
	// Line 816, Address: 0x437988, Func Offset: 0xa48
	// Line 820, Address: 0x43798c, Func Offset: 0xa4c
	// Line 816, Address: 0x437990, Func Offset: 0xa50
	// Line 825, Address: 0x437998, Func Offset: 0xa58
	// Line 820, Address: 0x4379a0, Func Offset: 0xa60
	// Line 821, Address: 0x4379a4, Func Offset: 0xa64
	// Line 826, Address: 0x4379a8, Func Offset: 0xa68
	// Line 816, Address: 0x4379ac, Func Offset: 0xa6c
	// Line 825, Address: 0x4379b4, Func Offset: 0xa74
	// Line 817, Address: 0x4379b8, Func Offset: 0xa78
	// Line 825, Address: 0x4379c4, Func Offset: 0xa84
	// Line 826, Address: 0x4379c8, Func Offset: 0xa88
	// Line 828, Address: 0x4379cc, Func Offset: 0xa8c
	// Line 817, Address: 0x4379d0, Func Offset: 0xa90
	// Line 821, Address: 0x4379e0, Func Offset: 0xaa0
	// Line 826, Address: 0x4379f8, Func Offset: 0xab8
	// Line 831, Address: 0x437a08, Func Offset: 0xac8
	// Line 826, Address: 0x437a0c, Func Offset: 0xacc
	// Line 825, Address: 0x437a10, Func Offset: 0xad0
	// Line 826, Address: 0x437a14, Func Offset: 0xad4
	// Line 831, Address: 0x437a18, Func Offset: 0xad8
	// Line 826, Address: 0x437a1c, Func Offset: 0xadc
	// Line 821, Address: 0x437a20, Func Offset: 0xae0
	// Line 831, Address: 0x437a2c, Func Offset: 0xaec
	// Line 821, Address: 0x437a30, Func Offset: 0xaf0
	// Line 826, Address: 0x437a34, Func Offset: 0xaf4
	// Line 821, Address: 0x437a38, Func Offset: 0xaf8
	// Line 825, Address: 0x437a44, Func Offset: 0xb04
	// Line 821, Address: 0x437a48, Func Offset: 0xb08
	// Line 831, Address: 0x437a4c, Func Offset: 0xb0c
	// Line 821, Address: 0x437a50, Func Offset: 0xb10
	// Line 831, Address: 0x437a68, Func Offset: 0xb28
	// Line 825, Address: 0x437a70, Func Offset: 0xb30
	// Line 831, Address: 0x437a74, Func Offset: 0xb34
	// Line 826, Address: 0x437a84, Func Offset: 0xb44
	// Line 821, Address: 0x437a88, Func Offset: 0xb48
	// Line 825, Address: 0x437a94, Func Offset: 0xb54
	// Line 831, Address: 0x437a98, Func Offset: 0xb58
	// Line 826, Address: 0x437a9c, Func Offset: 0xb5c
	// Line 825, Address: 0x437aa0, Func Offset: 0xb60
	// Line 821, Address: 0x437aa8, Func Offset: 0xb68
	// Line 825, Address: 0x437aac, Func Offset: 0xb6c
	// Line 821, Address: 0x437ab4, Func Offset: 0xb74
	// Line 822, Address: 0x437ab8, Func Offset: 0xb78
	// Line 825, Address: 0x437abc, Func Offset: 0xb7c
	// Line 831, Address: 0x437ac8, Func Offset: 0xb88
	// Line 825, Address: 0x437acc, Func Offset: 0xb8c
	// Line 831, Address: 0x437ad4, Func Offset: 0xb94
	// Line 825, Address: 0x437adc, Func Offset: 0xb9c
	// Line 822, Address: 0x437ae4, Func Offset: 0xba4
	// Line 825, Address: 0x437ae8, Func Offset: 0xba8
	// Line 822, Address: 0x437af0, Func Offset: 0xbb0
	// Line 827, Address: 0x437af4, Func Offset: 0xbb4
	// Line 831, Address: 0x437af8, Func Offset: 0xbb8
	// Line 827, Address: 0x437afc, Func Offset: 0xbbc
	// Line 825, Address: 0x437b00, Func Offset: 0xbc0
	// Line 822, Address: 0x437b04, Func Offset: 0xbc4
	// Line 826, Address: 0x437b0c, Func Offset: 0xbcc
	// Line 827, Address: 0x437b10, Func Offset: 0xbd0
	// Line 822, Address: 0x437b1c, Func Offset: 0xbdc
	// Line 831, Address: 0x437b20, Func Offset: 0xbe0
	// Line 827, Address: 0x437b24, Func Offset: 0xbe4
	// Line 832, Address: 0x437b58, Func Offset: 0xc18
	// Line 827, Address: 0x437b5c, Func Offset: 0xc1c
	// Line 828, Address: 0x437b8c, Func Offset: 0xc4c
	// Line 832, Address: 0x437ba4, Func Offset: 0xc64
	// Line 833, Address: 0x437c08, Func Offset: 0xcc8
	// Line 834, Address: 0x437c20, Func Offset: 0xce0
	// Func End, Address: 0x437c60, Func Offset: 0xd20
}

// set_fov__10xCamScreenFf
// Start address: 0x437c60
void xCamScreen::set_fov(float32 fov)
{
	// Line 734, Address: 0x437c60, Func Offset: 0
	// Line 736, Address: 0x437c64, Func Offset: 0x4
	// Line 734, Address: 0x437c6c, Func Offset: 0xc
	// Line 736, Address: 0x437c74, Func Offset: 0x14
	// Line 735, Address: 0x437c90, Func Offset: 0x30
	// Line 736, Address: 0x437c94, Func Offset: 0x34
	// Line 737, Address: 0x437cc4, Func Offset: 0x64
	// Func End, Address: 0x437cd4, Func Offset: 0x74
}

// set_world_matrix__10xCamScreenFRC7xMat4x3
// Start address: 0x437ce0
void xCamScreen::set_world_matrix(xMat4x3& mat)
{
	// Line 722, Address: 0x437ce0, Func Offset: 0
	// Line 723, Address: 0x437cf8, Func Offset: 0x18
	// Line 724, Address: 0x437d58, Func Offset: 0x78
	// Func End, Address: 0x437d6c, Func Offset: 0x8c
}

// end_render__10xCamScreenFv
// Start address: 0x437d70
void xCamScreen::end_render()
{
	// Line 717, Address: 0x437d70, Func Offset: 0
	// Line 718, Address: 0x437d7c, Func Offset: 0xc
	// Line 719, Address: 0x437d90, Func Offset: 0x20
	// Func End, Address: 0x437da0, Func Offset: 0x30
}

// begin_render__10xCamScreenFb
// Start address: 0x437da0
void xCamScreen::begin_render(uint8 clear)
{
	// Line 697, Address: 0x437da0, Func Offset: 0
	// Line 708, Address: 0x437da4, Func Offset: 0x4
	// Line 697, Address: 0x437da8, Func Offset: 0x8
	// Line 708, Address: 0x437db4, Func Offset: 0x14
	// Line 713, Address: 0x437f94, Func Offset: 0x1f4
	// Line 714, Address: 0x437fa0, Func Offset: 0x200
	// Func End, Address: 0x437fb4, Func Offset: 0x214
}

// prepare_render__10xCamScreenFv
// Start address: 0x437fc0
void xCamScreen::prepare_render()
{
	// Line 691, Address: 0x437fc0, Func Offset: 0
	// Line 693, Address: 0x437fcc, Func Offset: 0xc
	// Line 694, Address: 0x438168, Func Offset: 0x1a8
	// Func End, Address: 0x438178, Func Offset: 0x1b8
}

// set_scene__10xCamScreenFR6xScene
// Start address: 0x438180
void xCamScreen::set_scene(xScene& scene)
{
	// Line 686, Address: 0x438180, Func Offset: 0
	// Line 687, Address: 0x43818c, Func Offset: 0xc
	// Line 688, Address: 0x4381ac, Func Offset: 0x2c
	// Func End, Address: 0x4381bc, Func Offset: 0x3c
}

// destroy__10xCamScreenFv
// Start address: 0x4381c0
void xCamScreen::destroy()
{
	// Line 682, Address: 0x4381c0, Func Offset: 0
	// Func End, Address: 0x4381c8, Func Offset: 0x8
}

// create__10xCamScreenFii
// Start address: 0x4381d0
void xCamScreen::create(int32 w, int32 h)
{
	// Line 674, Address: 0x4381d0, Func Offset: 0
	// Line 676, Address: 0x4381e0, Func Offset: 0x10
	// Line 678, Address: 0x4381f4, Func Offset: 0x24
	// Func End, Address: 0x438204, Func Offset: 0x34
}

// set_primary__9xCamGroupFi
// Start address: 0x438210
void xCamGroup::set_primary(int32 index)
{
	// Line 556, Address: 0x438210, Func Offset: 0
	// Line 557, Address: 0x438228, Func Offset: 0x18
	// Line 561, Address: 0x43823c, Func Offset: 0x2c
	// Line 564, Address: 0x438264, Func Offset: 0x54
	// Line 565, Address: 0x438274, Func Offset: 0x64
	// Line 568, Address: 0x4382f8, Func Offset: 0xe8
	// Line 571, Address: 0x438304, Func Offset: 0xf4
	// Line 574, Address: 0x43830c, Func Offset: 0xfc
	// Line 576, Address: 0x43831c, Func Offset: 0x10c
	// Line 577, Address: 0x438324, Func Offset: 0x114
	// Line 578, Address: 0x4383a8, Func Offset: 0x198
	// Line 579, Address: 0x4383b4, Func Offset: 0x1a4
	// Line 580, Address: 0x4383c8, Func Offset: 0x1b8
	// Func End, Address: 0x4383dc, Func Offset: 0x1cc
}

// get_blend__9xCamGroupFi
// Start address: 0x4383e0
int32 xCamGroup::get_blend(int32 to_index)
{
	xCam* to;
	xCamBlend* parent;
	// Line 492, Address: 0x4383e0, Func Offset: 0
	// Line 498, Address: 0x4383e4, Func Offset: 0x4
	// Line 501, Address: 0x438404, Func Offset: 0x24
	// Line 505, Address: 0x438408, Func Offset: 0x28
	// Line 501, Address: 0x43840c, Func Offset: 0x2c
	// Line 505, Address: 0x438414, Func Offset: 0x34
	// Line 509, Address: 0x43841c, Func Offset: 0x3c
	// Line 511, Address: 0x43843c, Func Offset: 0x5c
	// Line 514, Address: 0x438450, Func Offset: 0x70
	// Line 520, Address: 0x438460, Func Offset: 0x80
	// Line 521, Address: 0x438464, Func Offset: 0x84
	// Line 523, Address: 0x438470, Func Offset: 0x90
	// Line 524, Address: 0x438478, Func Offset: 0x98
	// Line 525, Address: 0x438498, Func Offset: 0xb8
	// Line 526, Address: 0x43849c, Func Offset: 0xbc
	// Line 527, Address: 0x4384a0, Func Offset: 0xc0
	// Line 529, Address: 0x4384a8, Func Offset: 0xc8
	// Line 499, Address: 0x4384b4, Func Offset: 0xd4
	// Line 512, Address: 0x4384c0, Func Offset: 0xe0
	// Line 537, Address: 0x4384c8, Func Offset: 0xe8
	// Line 538, Address: 0x4384d8, Func Offset: 0xf8
	// Line 540, Address: 0x438514, Func Offset: 0x134
	// Line 543, Address: 0x43851c, Func Offset: 0x13c
	// Line 549, Address: 0x438520, Func Offset: 0x140
	// Line 543, Address: 0x438524, Func Offset: 0x144
	// Line 544, Address: 0x43852c, Func Offset: 0x14c
	// Line 545, Address: 0x438538, Func Offset: 0x158
	// Line 546, Address: 0x43853c, Func Offset: 0x15c
	// Line 547, Address: 0x43854c, Func Offset: 0x16c
	// Line 549, Address: 0x438558, Func Offset: 0x178
	// Line 550, Address: 0x43855c, Func Offset: 0x17c
	// Line 537, Address: 0x438590, Func Offset: 0x1b0
	// Line 540, Address: 0x438598, Func Offset: 0x1b8
	// Line 552, Address: 0x43859c, Func Offset: 0x1bc
	// Func End, Address: 0x4385a4, Func Offset: 0x1c4
}

// get_next__9xCamGroupCFv
// Start address: 0x4385b0
int32 xCamGroup::get_next()
{
	int32 next;
	int32 min_priority;
	int32 i;
	int32 priority;
	// Line 412, Address: 0x4385b0, Func Offset: 0
	// Line 423, Address: 0x4385b4, Func Offset: 0x4
	// Line 430, Address: 0x4385cc, Func Offset: 0x1c
	// Line 431, Address: 0x4385d0, Func Offset: 0x20
	// Line 430, Address: 0x4385d4, Func Offset: 0x24
	// Line 434, Address: 0x4385d8, Func Offset: 0x28
	// Line 437, Address: 0x4385ec, Func Offset: 0x3c
	// Line 441, Address: 0x4385fc, Func Offset: 0x4c
	// Line 442, Address: 0x438600, Func Offset: 0x50
	// Line 445, Address: 0x43860c, Func Offset: 0x5c
	// Line 444, Address: 0x438610, Func Offset: 0x60
	// Line 446, Address: 0x438614, Func Offset: 0x64
	// Line 448, Address: 0x438628, Func Offset: 0x78
	// Line 426, Address: 0x438630, Func Offset: 0x80
	// Line 427, Address: 0x438634, Func Offset: 0x84
	// Line 449, Address: 0x43863c, Func Offset: 0x8c
	// Func End, Address: 0x438644, Func Offset: 0x94
}

// remove__9xCamGroupFR4xCamb
// Start address: 0x438650
void xCamGroup::remove(xCam& cam, uint8 force_cut)
{
	// Line 381, Address: 0x438650, Func Offset: 0
	// Line 387, Address: 0x43865c, Func Offset: 0xc
	// Line 397, Address: 0x438678, Func Offset: 0x28
	// Line 399, Address: 0x4386bc, Func Offset: 0x6c
	// Line 390, Address: 0x4386c8, Func Offset: 0x78
	// Line 399, Address: 0x4386d0, Func Offset: 0x80
	// Line 391, Address: 0x4386d8, Func Offset: 0x88
	// Line 399, Address: 0x4386dc, Func Offset: 0x8c
	// Line 392, Address: 0x4386e8, Func Offset: 0x98
	// Line 393, Address: 0x4386ec, Func Offset: 0x9c
	// Line 399, Address: 0x4386f4, Func Offset: 0xa4
	// Func End, Address: 0x4386fc, Func Offset: 0xac
}

// add__9xCamGroupFR4xCamb
// Start address: 0x438700
void xCamGroup::add(xCam& cam, uint8 force_cut)
{
	// Line 353, Address: 0x438700, Func Offset: 0
	// Line 354, Address: 0x438704, Func Offset: 0x4
	// Line 360, Address: 0x43870c, Func Offset: 0xc
	// Line 363, Address: 0x438714, Func Offset: 0x14
	// Line 356, Address: 0x438720, Func Offset: 0x20
	// Line 363, Address: 0x438728, Func Offset: 0x28
	// Line 358, Address: 0x438730, Func Offset: 0x30
	// Line 363, Address: 0x438738, Func Offset: 0x38
	// Line 357, Address: 0x43873c, Func Offset: 0x3c
	// Line 366, Address: 0x438748, Func Offset: 0x48
	// Line 375, Address: 0x438758, Func Offset: 0x58
	// Line 376, Address: 0x438760, Func Offset: 0x60
	// Line 377, Address: 0x438784, Func Offset: 0x84
	// Line 375, Address: 0x438790, Func Offset: 0x90
	// Line 377, Address: 0x43879c, Func Offset: 0x9c
	// Func End, Address: 0x4387a4, Func Offset: 0xa4
}

// update__9xCamGroupFR6xScenef
// Start address: 0x4387b0
void xCamGroup::update(xScene& scene, float32 dt)
{
	xVec3 prev_pos;
	int32 next_index;
	xCam* next;
	// Line 294, Address: 0x4387b0, Func Offset: 0
	// Line 295, Address: 0x4387d0, Func Offset: 0x20
	// Line 297, Address: 0x4387e8, Func Offset: 0x38
	// Line 298, Address: 0x4387f0, Func Offset: 0x40
	// Line 299, Address: 0x4387fc, Func Offset: 0x4c
	// Line 302, Address: 0x43880c, Func Offset: 0x5c
	// Line 303, Address: 0x438814, Func Offset: 0x64
	// Line 317, Address: 0x438818, Func Offset: 0x68
	// Line 303, Address: 0x43881c, Func Offset: 0x6c
	// Line 304, Address: 0x438828, Func Offset: 0x78
	// Line 305, Address: 0x43883c, Func Offset: 0x8c
	// Line 317, Address: 0x438870, Func Offset: 0xc0
	// Line 321, Address: 0x438884, Func Offset: 0xd4
	// Line 322, Address: 0x438908, Func Offset: 0x158
	// Line 325, Address: 0x438918, Func Offset: 0x168
	// Line 347, Address: 0x438928, Func Offset: 0x178
	// Line 349, Address: 0x438954, Func Offset: 0x1a4
	// Line 347, Address: 0x438958, Func Offset: 0x1a8
	// Line 349, Address: 0x4389e8, Func Offset: 0x238
	// Line 350, Address: 0x438a98, Func Offset: 0x2e8
	// Line 327, Address: 0x438ab4, Func Offset: 0x304
	// Line 350, Address: 0x438ab8, Func Offset: 0x308
	// Line 331, Address: 0x438ad4, Func Offset: 0x324
	// Line 350, Address: 0x438ad8, Func Offset: 0x328
	// Line 331, Address: 0x438b00, Func Offset: 0x350
	// Line 350, Address: 0x438b08, Func Offset: 0x358
	// Line 343, Address: 0x438b2c, Func Offset: 0x37c
	// Line 350, Address: 0x438b30, Func Offset: 0x380
	// Line 343, Address: 0x438b40, Func Offset: 0x390
	// Line 333, Address: 0x438b4c, Func Offset: 0x39c
	// Line 350, Address: 0x438b54, Func Offset: 0x3a4
	// Line 339, Address: 0x438b64, Func Offset: 0x3b4
	// Line 350, Address: 0x438b6c, Func Offset: 0x3bc
	// Func End, Address: 0x438bb4, Func Offset: 0x404
}

// priority_force_cut__9xCamGroupFv
// Start address: 0x438bc0
void xCamGroup::priority_force_cut()
{
	int32 next_index;
	// Line 283, Address: 0x438bc0, Func Offset: 0
	// Line 285, Address: 0x438bcc, Func Offset: 0xc
	// Line 286, Address: 0x438bd8, Func Offset: 0x18
	// Line 290, Address: 0x438bf4, Func Offset: 0x34
	// Line 291, Address: 0x438c08, Func Offset: 0x48
	// Func End, Address: 0x438c18, Func Offset: 0x58
}

// reset__9xCamGroupFv
// Start address: 0x438c20
void xCamGroup::reset()
{
	xCam** it;
	xCam** end;
	xCam& c;
	// Line 266, Address: 0x438c20, Func Offset: 0
	// Line 267, Address: 0x438c38, Func Offset: 0x18
	// Line 269, Address: 0x438c50, Func Offset: 0x30
	// Line 270, Address: 0x438c54, Func Offset: 0x34
	// Line 271, Address: 0x438c58, Func Offset: 0x38
	// Line 272, Address: 0x438c68, Func Offset: 0x48
	// Line 273, Address: 0x438c78, Func Offset: 0x58
	// Line 274, Address: 0x438c7c, Func Offset: 0x5c
	// Line 278, Address: 0x438c80, Func Offset: 0x60
	// Line 275, Address: 0x438c84, Func Offset: 0x64
	// Line 276, Address: 0x438c88, Func Offset: 0x68
	// Line 278, Address: 0x438c90, Func Offset: 0x70
	// Line 279, Address: 0x438c94, Func Offset: 0x74
	// Func End, Address: 0x438cd0, Func Offset: 0xb0
}

// destroy__9xCamGroupFv
// Start address: 0x438cd0
void xCamGroup::destroy()
{
	xCamBlend** it;
	xCamBlend** end;
	// Line 260, Address: 0x438cd0, Func Offset: 0
	// Line 261, Address: 0x438ce0, Func Offset: 0x10
	// Line 262, Address: 0x438cf0, Func Offset: 0x20
	// Line 263, Address: 0x438d10, Func Offset: 0x40
	// Func End, Address: 0x438d24, Func Offset: 0x54
}

// create__9xCamGroupFv
// Start address: 0x438d30
void xCamGroup::create()
{
	xCamBlend** it;
	xCamBlend** end;
	// Line 253, Address: 0x438d30, Func Offset: 0
	// Line 255, Address: 0x438d40, Func Offset: 0x10
	// Line 253, Address: 0x438d44, Func Offset: 0x14
	// Line 255, Address: 0x438d48, Func Offset: 0x18
	// Line 256, Address: 0x438d54, Func Offset: 0x24
	// Line 257, Address: 0x438db8, Func Offset: 0x88
	// Line 256, Address: 0x438dc0, Func Offset: 0x90
	// Line 257, Address: 0x438dc8, Func Offset: 0x98
	// Func End, Address: 0x438de0, Func Offset: 0xb0
}

// active__4xCamFv
// Start address: 0x438de0
uint8 xCam::active()
{
	// Line 118, Address: 0x438de0, Func Offset: 0
	// Line 119, Address: 0x438de8, Func Offset: 0x8
	// Func End, Address: 0x438df0, Func Offset: 0x10
}

// create__4xCamFv
// Start address: 0x438df0
void xCam::create()
{
	// Line 108, Address: 0x438df0, Func Offset: 0
	// Line 109, Address: 0x438df4, Func Offset: 0x4
	// Line 110, Address: 0x438dfc, Func Offset: 0xc
	// Line 114, Address: 0x438e00, Func Offset: 0x10
	// Func End, Address: 0x438e08, Func Offset: 0x18
}

// refresh_mat__4xCamFv
// Start address: 0x438e10
void xCam::refresh_mat()
{
	// Line 77, Address: 0x438e10, Func Offset: 0
	// Line 78, Address: 0x438e14, Func Offset: 0x4
	// Line 77, Address: 0x438e18, Func Offset: 0x8
	// Line 78, Address: 0x438e24, Func Offset: 0x14
	// Line 81, Address: 0x438e48, Func Offset: 0x38
	// Line 82, Address: 0x438e5c, Func Offset: 0x4c
	// Line 84, Address: 0x438e64, Func Offset: 0x54
	// Line 85, Address: 0x438eb8, Func Offset: 0xa8
	// Line 87, Address: 0x438ec0, Func Offset: 0xb0
	// Line 85, Address: 0x438ec8, Func Offset: 0xb8
	// Line 87, Address: 0x438ecc, Func Offset: 0xbc
	// Line 93, Address: 0x438f50, Func Offset: 0x140
	// Line 96, Address: 0x438f70, Func Offset: 0x160
	// Line 97, Address: 0x438f7c, Func Offset: 0x16c
	// Line 99, Address: 0x438f84, Func Offset: 0x174
	// Line 104, Address: 0x438f98, Func Offset: 0x188
	// Func End, Address: 0x438fa8, Func Offset: 0x198
}

// scene_exit__4xCamFv
// Start address: 0x438fb0
void xCam::scene_exit()
{
	// Line 74, Address: 0x438fb0, Func Offset: 0
	// Func End, Address: 0x438fb8, Func Offset: 0x8
}

// scene_enter__4xCamFv
// Start address: 0x438fc0
void xCam::scene_enter()
{
	// Line 69, Address: 0x438fc0, Func Offset: 0
	// Func End, Address: 0x438fc8, Func Offset: 0x8
}

// stop__4xCamFv
// Start address: 0x438fd0
void xCam::stop()
{
	// Line 63, Address: 0x438fd0, Func Offset: 0
	// Line 64, Address: 0x438fdc, Func Offset: 0xc
	// Func End, Address: 0x438fe4, Func Offset: 0x14
}

// start__4xCamFv
// Start address: 0x438ff0
void xCam::start()
{
	// Line 58, Address: 0x438ff0, Func Offset: 0
	// Line 59, Address: 0x438ff8, Func Offset: 0x8
	// Func End, Address: 0x439000, Func Offset: 0x10
}

