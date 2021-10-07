



void xEntDriveUpdate(xEntDrive* drv, float32 dt);
void xEntDriveDismount(xEntDrive* drv, float32 dmt);
void xEntDriveMount(xEntDrive* drv, xEnt* driver, float32 mt, xCollis* coll);
void xEntDriveInit(xEntDrive* drv, xEnt* driven);

// xEntDriveUpdate__FP9xEntDriveP6xScenefPC7xCollis
// Start address: 0x3effd0
void xEntDriveUpdate(xEntDrive* drv, float32 dt)
{
	xVec3 euler;
	xMat3x3 rot;
	xMat3x3 a_descaled;
	float32 dummy;
	float32 len2;
	float32 len_inv;
	float32 len2;
	float32 len_inv;
	float32 len2;
	float32 len_inv;
	xVec3 newq;
	xModelInstance& m;
	xVec3 world_loc;
	xVec3 new_loc;
	xMat4x3 oldmat;
	// Line 144, Address: 0x3effd0, Func Offset: 0
	// Line 147, Address: 0x3effe0, Func Offset: 0x10
	// Line 154, Address: 0x3efff8, Func Offset: 0x28
	// Line 155, Address: 0x3f0010, Func Offset: 0x40
	// Line 156, Address: 0x3f0018, Func Offset: 0x48
	// Line 158, Address: 0x3f0024, Func Offset: 0x54
	// Line 160, Address: 0x3f0028, Func Offset: 0x58
	// Line 165, Address: 0x3f0034, Func Offset: 0x64
	// Line 166, Address: 0x3f0068, Func Offset: 0x98
	// Line 168, Address: 0x3f0070, Func Offset: 0xa0
	// Line 170, Address: 0x3f0084, Func Offset: 0xb4
	// Line 176, Address: 0x3f008c, Func Offset: 0xbc
	// Line 179, Address: 0x3f0090, Func Offset: 0xc0
	// Line 181, Address: 0x3f00a8, Func Offset: 0xd8
	// Line 183, Address: 0x3f00b4, Func Offset: 0xe4
	// Line 185, Address: 0x3f00bc, Func Offset: 0xec
	// Line 186, Address: 0x3f00c4, Func Offset: 0xf4
	// Line 190, Address: 0x3f00e0, Func Offset: 0x110
	// Line 194, Address: 0x3f0108, Func Offset: 0x138
	// Line 202, Address: 0x3f015c, Func Offset: 0x18c
	// Line 203, Address: 0x3f021c, Func Offset: 0x24c
	// Line 202, Address: 0x3f0234, Func Offset: 0x264
	// Line 203, Address: 0x3f0248, Func Offset: 0x278
	// Line 204, Address: 0x3f0300, Func Offset: 0x330
	// Line 203, Address: 0x3f0318, Func Offset: 0x348
	// Line 204, Address: 0x3f032c, Func Offset: 0x35c
	// Line 205, Address: 0x3f03e0, Func Offset: 0x410
	// Line 206, Address: 0x3f03ec, Func Offset: 0x41c
	// Line 207, Address: 0x3f040c, Func Offset: 0x43c
	// Line 206, Address: 0x3f0410, Func Offset: 0x440
	// Line 207, Address: 0x3f0414, Func Offset: 0x444
	// Line 208, Address: 0x3f041c, Func Offset: 0x44c
	// Line 211, Address: 0x3f0424, Func Offset: 0x454
	// Line 214, Address: 0x3f0434, Func Offset: 0x464
	// Line 215, Address: 0x3f0450, Func Offset: 0x480
	// Line 216, Address: 0x3f04b4, Func Offset: 0x4e4
	// Line 215, Address: 0x3f04c4, Func Offset: 0x4f4
	// Line 216, Address: 0x3f04c8, Func Offset: 0x4f8
	// Line 217, Address: 0x3f04e8, Func Offset: 0x518
	// Line 218, Address: 0x3f0520, Func Offset: 0x550
	// Line 219, Address: 0x3f0554, Func Offset: 0x584
	// Line 218, Address: 0x3f0558, Func Offset: 0x588
	// Line 219, Address: 0x3f055c, Func Offset: 0x58c
	// Line 221, Address: 0x3f0588, Func Offset: 0x5b8
	// Line 222, Address: 0x3f05a0, Func Offset: 0x5d0
	// Line 224, Address: 0x3f05b0, Func Offset: 0x5e0
	// Line 225, Address: 0x3f05b4, Func Offset: 0x5e4
	// Line 224, Address: 0x3f05b8, Func Offset: 0x5e8
	// Line 225, Address: 0x3f05bc, Func Offset: 0x5ec
	// Line 232, Address: 0x3f05d4, Func Offset: 0x604
	// Line 234, Address: 0x3f0630, Func Offset: 0x660
	// Line 235, Address: 0x3f0648, Func Offset: 0x678
	// Line 234, Address: 0x3f0658, Func Offset: 0x688
	// Line 235, Address: 0x3f065c, Func Offset: 0x68c
	// Line 234, Address: 0x3f0664, Func Offset: 0x694
	// Line 235, Address: 0x3f0668, Func Offset: 0x698
	// Line 238, Address: 0x3f06ac, Func Offset: 0x6dc
	// Line 241, Address: 0x3f0700, Func Offset: 0x730
	// Line 245, Address: 0x3f071c, Func Offset: 0x74c
	// Line 244, Address: 0x3f0720, Func Offset: 0x750
	// Line 245, Address: 0x3f0724, Func Offset: 0x754
	// Line 243, Address: 0x3f072c, Func Offset: 0x75c
	// Line 244, Address: 0x3f0730, Func Offset: 0x760
	// Line 243, Address: 0x3f0734, Func Offset: 0x764
	// Line 244, Address: 0x3f0744, Func Offset: 0x774
	// Line 243, Address: 0x3f0748, Func Offset: 0x778
	// Line 244, Address: 0x3f0754, Func Offset: 0x784
	// Line 245, Address: 0x3f07d0, Func Offset: 0x800
	// Line 246, Address: 0x3f07e4, Func Offset: 0x814
	// Line 245, Address: 0x3f07e8, Func Offset: 0x818
	// Line 246, Address: 0x3f07f8, Func Offset: 0x828
	// Line 247, Address: 0x3f0838, Func Offset: 0x868
	// Line 248, Address: 0x3f08b8, Func Offset: 0x8e8
	// Line 251, Address: 0x3f08c0, Func Offset: 0x8f0
	// Line 252, Address: 0x3f0924, Func Offset: 0x954
	// Line 255, Address: 0x3f095c, Func Offset: 0x98c
	// Line 256, Address: 0x3f098c, Func Offset: 0x9bc
	// Line 257, Address: 0x3f09cc, Func Offset: 0x9fc
	// Line 262, Address: 0x3f0a04, Func Offset: 0xa34
	// Line 263, Address: 0x3f0a0c, Func Offset: 0xa3c
	// Line 267, Address: 0x3f0a2c, Func Offset: 0xa5c
	// Line 268, Address: 0x3f0a30, Func Offset: 0xa60
	// Line 267, Address: 0x3f0a34, Func Offset: 0xa64
	// Line 268, Address: 0x3f0a50, Func Offset: 0xa80
	// Line 269, Address: 0x3f0a60, Func Offset: 0xa90
	// Line 271, Address: 0x3f0aa8, Func Offset: 0xad8
	// Line 272, Address: 0x3f0ac0, Func Offset: 0xaf0
	// Line 279, Address: 0x3f0b08, Func Offset: 0xb38
	// Line 282, Address: 0x3f0b94, Func Offset: 0xbc4
	// Func End, Address: 0x3f0ba8, Func Offset: 0xbd8
}

// xEntDriveDismount__FP9xEntDrivef
// Start address: 0x3f0bb0
void xEntDriveDismount(xEntDrive* drv, float32 dmt)
{
	xEnt* pDriver;
	// Line 117, Address: 0x3f0bb0, Func Offset: 0
	// Line 120, Address: 0x3f0bb8, Func Offset: 0x8
	// Line 121, Address: 0x3f0bbc, Func Offset: 0xc
	// Line 125, Address: 0x3f0bc4, Func Offset: 0x14
	// Line 135, Address: 0x3f0bc8, Func Offset: 0x18
	// Line 125, Address: 0x3f0bcc, Func Offset: 0x1c
	// Line 127, Address: 0x3f0bd4, Func Offset: 0x24
	// Line 128, Address: 0x3f0bd8, Func Offset: 0x28
	// Line 129, Address: 0x3f0be0, Func Offset: 0x30
	// Line 130, Address: 0x3f0be4, Func Offset: 0x34
	// Line 131, Address: 0x3f0bf0, Func Offset: 0x40
	// Line 132, Address: 0x3f0bf4, Func Offset: 0x44
	// Line 133, Address: 0x3f0bf8, Func Offset: 0x48
	// Line 134, Address: 0x3f0bfc, Func Offset: 0x4c
	// Line 135, Address: 0x3f0c00, Func Offset: 0x50
	// Line 137, Address: 0x3f0c0c, Func Offset: 0x5c
	// Line 140, Address: 0x3f0c2c, Func Offset: 0x7c
	// Line 141, Address: 0x3f0c74, Func Offset: 0xc4
	// Func End, Address: 0x3f0c80, Func Offset: 0xd0
}

// xEntDriveMount__FP9xEntDriveP4xEntfPC7xCollis
// Start address: 0x3f0c80
void xEntDriveMount(xEntDrive* drv, xEnt* driver, float32 mt, xCollis* coll)
{
	xVec3 euler;
	xMat3x3 a_descaled;
	float32 len2;
	float32 len_inv;
	float32 len2;
	float32 len_inv;
	float32 len2;
	float32 len_inv;
	// Line 45, Address: 0x3f0c80, Func Offset: 0
	// Line 51, Address: 0x3f0c88, Func Offset: 0x8
	// Line 45, Address: 0x3f0c8c, Func Offset: 0xc
	// Line 51, Address: 0x3f0ca0, Func Offset: 0x20
	// Line 53, Address: 0x3f0cac, Func Offset: 0x2c
	// Line 72, Address: 0x3f0cb8, Func Offset: 0x38
	// Line 76, Address: 0x3f0cbc, Func Offset: 0x3c
	// Line 73, Address: 0x3f0cc0, Func Offset: 0x40
	// Line 76, Address: 0x3f0cc4, Func Offset: 0x44
	// Line 73, Address: 0x3f0cc8, Func Offset: 0x48
	// Line 76, Address: 0x3f0ccc, Func Offset: 0x4c
	// Line 80, Address: 0x3f0cd4, Func Offset: 0x54
	// Line 81, Address: 0x3f0cd8, Func Offset: 0x58
	// Line 84, Address: 0x3f0cdc, Func Offset: 0x5c
	// Line 87, Address: 0x3f0ce0, Func Offset: 0x60
	// Line 93, Address: 0x3f0cf4, Func Offset: 0x74
	// Line 87, Address: 0x3f0d0c, Func Offset: 0x8c
	// Line 93, Address: 0x3f0d20, Func Offset: 0xa0
	// Line 94, Address: 0x3f0da8, Func Offset: 0x128
	// Line 93, Address: 0x3f0dc0, Func Offset: 0x140
	// Line 94, Address: 0x3f0dd4, Func Offset: 0x154
	// Line 95, Address: 0x3f0e5c, Func Offset: 0x1dc
	// Line 94, Address: 0x3f0e74, Func Offset: 0x1f4
	// Line 95, Address: 0x3f0e88, Func Offset: 0x208
	// Line 96, Address: 0x3f0f0c, Func Offset: 0x28c
	// Line 97, Address: 0x3f0f18, Func Offset: 0x298
	// Line 100, Address: 0x3f0f20, Func Offset: 0x2a0
	// Line 102, Address: 0x3f0f38, Func Offset: 0x2b8
	// Line 103, Address: 0x3f0f3c, Func Offset: 0x2bc
	// Line 104, Address: 0x3f0f48, Func Offset: 0x2c8
	// Line 102, Address: 0x3f0f4c, Func Offset: 0x2cc
	// Line 103, Address: 0x3f0f54, Func Offset: 0x2d4
	// Line 104, Address: 0x3f0f60, Func Offset: 0x2e0
	// Line 105, Address: 0x3f0f78, Func Offset: 0x2f8
	// Line 104, Address: 0x3f0f7c, Func Offset: 0x2fc
	// Line 105, Address: 0x3f0f8c, Func Offset: 0x30c
	// Line 106, Address: 0x3f0fcc, Func Offset: 0x34c
	// Line 107, Address: 0x3f0fd0, Func Offset: 0x350
	// Line 110, Address: 0x3f105c, Func Offset: 0x3dc
	// Line 112, Address: 0x3f1060, Func Offset: 0x3e0
	// Line 110, Address: 0x3f1068, Func Offset: 0x3e8
	// Line 112, Address: 0x3f1084, Func Offset: 0x404
	// Line 113, Address: 0x3f10c4, Func Offset: 0x444
	// Line 53, Address: 0x3f10d0, Func Offset: 0x450
	// Line 113, Address: 0x3f10d4, Func Offset: 0x454
	// Line 59, Address: 0x3f10e0, Func Offset: 0x460
	// Line 113, Address: 0x3f10e4, Func Offset: 0x464
	// Line 64, Address: 0x3f10f8, Func Offset: 0x478
	// Line 113, Address: 0x3f110c, Func Offset: 0x48c
	// Line 71, Address: 0x3f1124, Func Offset: 0x4a4
	// Line 60, Address: 0x3f112c, Func Offset: 0x4ac
	// Line 113, Address: 0x3f1130, Func Offset: 0x4b0
	// Line 62, Address: 0x3f1134, Func Offset: 0x4b4
	// Line 77, Address: 0x3f113c, Func Offset: 0x4bc
	// Line 113, Address: 0x3f1140, Func Offset: 0x4c0
	// Line 79, Address: 0x3f1144, Func Offset: 0x4c4
	// Line 113, Address: 0x3f114c, Func Offset: 0x4cc
	// Line 93, Address: 0x3f1174, Func Offset: 0x4f4
	// Line 113, Address: 0x3f117c, Func Offset: 0x4fc
	// Line 94, Address: 0x3f11a4, Func Offset: 0x524
	// Line 113, Address: 0x3f11ac, Func Offset: 0x52c
	// Line 95, Address: 0x3f11d4, Func Offset: 0x554
	// Line 113, Address: 0x3f11dc, Func Offset: 0x55c
	// Func End, Address: 0x3f11f0, Func Offset: 0x570
}

// xEntDriveInit__FP9xEntDriveP4xEnt
// Start address: 0x3f11f0
void xEntDriveInit(xEntDrive* drv, xEnt* driven)
{
	// Line 32, Address: 0x3f11f0, Func Offset: 0
	// Line 33, Address: 0x3f11f4, Func Offset: 0x4
	// Line 34, Address: 0x3f11f8, Func Offset: 0x8
	// Line 35, Address: 0x3f11fc, Func Offset: 0xc
	// Line 36, Address: 0x3f1200, Func Offset: 0x10
	// Line 37, Address: 0x3f1204, Func Offset: 0x14
	// Line 38, Address: 0x3f1208, Func Offset: 0x18
	// Line 39, Address: 0x3f120c, Func Offset: 0x1c
	// Line 40, Address: 0x3f1210, Func Offset: 0x20
	// Line 42, Address: 0x3f1214, Func Offset: 0x24
	// Func End, Address: 0x3f121c, Func Offset: 0x2c
}

