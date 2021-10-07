



void zTaxi_Update(xBase* to, float32 dt);
void zTaxi_Setup(zTaxi* taxi);

// zTaxi_Update__FP5xBaseP6xScenef
// Start address: 0x2e57e0
void zTaxi_Update(xBase* to, float32 dt)
{
	zTaxi* taxi;
	xCylinder c;
	xIsect check;
	ztalkbox* tb;
	// Line 115, Address: 0x2e57e0, Func Offset: 0
	// Line 133, Address: 0x2e57e4, Func Offset: 0x4
	// Line 115, Address: 0x2e57e8, Func Offset: 0x8
	// Line 133, Address: 0x2e57ec, Func Offset: 0xc
	// Line 115, Address: 0x2e57f0, Func Offset: 0x10
	// Line 134, Address: 0x2e57f4, Func Offset: 0x14
	// Line 115, Address: 0x2e57f8, Func Offset: 0x18
	// Line 142, Address: 0x2e5804, Func Offset: 0x24
	// Line 132, Address: 0x2e5808, Func Offset: 0x28
	// Line 142, Address: 0x2e580c, Func Offset: 0x2c
	// Line 132, Address: 0x2e5814, Func Offset: 0x34
	// Line 133, Address: 0x2e5828, Func Offset: 0x48
	// Line 134, Address: 0x2e582c, Func Offset: 0x4c
	// Line 142, Address: 0x2e5830, Func Offset: 0x50
	// Line 143, Address: 0x2e5848, Func Offset: 0x68
	// Line 150, Address: 0x2e5864, Func Offset: 0x84
	// Line 153, Address: 0x2e5868, Func Offset: 0x88
	// Line 159, Address: 0x2e58ac, Func Offset: 0xcc
	// Line 161, Address: 0x2e58b8, Func Offset: 0xd8
	// Line 163, Address: 0x2e58c8, Func Offset: 0xe8
	// Line 170, Address: 0x2e58e4, Func Offset: 0x104
	// Line 172, Address: 0x2e5900, Func Offset: 0x120
	// Line 176, Address: 0x2e5904, Func Offset: 0x124
	// Line 179, Address: 0x2e590c, Func Offset: 0x12c
	// Line 181, Address: 0x2e5928, Func Offset: 0x148
	// Line 197, Address: 0x2e5934, Func Offset: 0x154
	// Line 200, Address: 0x2e5940, Func Offset: 0x160
	// Line 204, Address: 0x2e5968, Func Offset: 0x188
	// Line 206, Address: 0x2e5978, Func Offset: 0x198
	// Line 210, Address: 0x2e5984, Func Offset: 0x1a4
	// Line 212, Address: 0x2e59ec, Func Offset: 0x20c
	// Line 214, Address: 0x2e5a00, Func Offset: 0x220
	// Line 217, Address: 0x2e5a0c, Func Offset: 0x22c
	// Line 219, Address: 0x2e5a14, Func Offset: 0x234
	// Line 221, Address: 0x2e5a24, Func Offset: 0x244
	// Line 223, Address: 0x2e5a34, Func Offset: 0x254
	// Line 224, Address: 0x2e5a44, Func Offset: 0x264
	// Line 226, Address: 0x2e5a4c, Func Offset: 0x26c
	// Line 230, Address: 0x2e5a64, Func Offset: 0x284
	// Line 234, Address: 0x2e5a6c, Func Offset: 0x28c
	// Line 236, Address: 0x2e5a7c, Func Offset: 0x29c
	// Line 240, Address: 0x2e5a84, Func Offset: 0x2a4
	// Line 242, Address: 0x2e5a94, Func Offset: 0x2b4
	// Line 245, Address: 0x2e5aa4, Func Offset: 0x2c4
	// Line 249, Address: 0x2e5ab4, Func Offset: 0x2d4
	// Line 250, Address: 0x2e5ac0, Func Offset: 0x2e0
	// Line 252, Address: 0x2e5ac8, Func Offset: 0x2e8
	// Line 255, Address: 0x2e5ad0, Func Offset: 0x2f0
	// Line 256, Address: 0x2e5af8, Func Offset: 0x318
	// Line 261, Address: 0x2e5b00, Func Offset: 0x320
	// Line 270, Address: 0x2e5b10, Func Offset: 0x330
	// Line 273, Address: 0x2e5b14, Func Offset: 0x334
	// Line 270, Address: 0x2e5b18, Func Offset: 0x338
	// Line 273, Address: 0x2e5b1c, Func Offset: 0x33c
	// Line 277, Address: 0x2e5b2c, Func Offset: 0x34c
	// Line 283, Address: 0x2e5b44, Func Offset: 0x364
	// Line 288, Address: 0x2e5b5c, Func Offset: 0x37c
	// Line 289, Address: 0x2e5b74, Func Offset: 0x394
	// Line 290, Address: 0x2e5b78, Func Offset: 0x398
	// Line 291, Address: 0x2e5b84, Func Offset: 0x3a4
	// Line 295, Address: 0x2e5b88, Func Offset: 0x3a8
	// Line 143, Address: 0x2e5b94, Func Offset: 0x3b4
	// Line 295, Address: 0x2e5b98, Func Offset: 0x3b8
	// Line 147, Address: 0x2e5bac, Func Offset: 0x3cc
	// Line 148, Address: 0x2e5bb0, Func Offset: 0x3d0
	// Line 295, Address: 0x2e5bb8, Func Offset: 0x3d8
	// Line 210, Address: 0x2e5bcc, Func Offset: 0x3ec
	// Line 295, Address: 0x2e5bd8, Func Offset: 0x3f8
	// Line 273, Address: 0x2e5bdc, Func Offset: 0x3fc
	// Line 295, Address: 0x2e5be0, Func Offset: 0x400
	// Line 275, Address: 0x2e5be8, Func Offset: 0x408
	// Line 279, Address: 0x2e5bf4, Func Offset: 0x414
	// Line 284, Address: 0x2e5c00, Func Offset: 0x420
	// Line 285, Address: 0x2e5c04, Func Offset: 0x424
	// Line 295, Address: 0x2e5c08, Func Offset: 0x428
	// Func End, Address: 0x2e5c30, Func Offset: 0x450
}

// zTaxi_Setup__FP5zTaxi
// Start address: 0x2e5c30
void zTaxi_Setup(zTaxi* taxi)
{
	// Line 94, Address: 0x2e5c30, Func Offset: 0
	// Line 95, Address: 0x2e5c34, Func Offset: 0x4
	// Line 94, Address: 0x2e5c38, Func Offset: 0x8
	// Line 95, Address: 0x2e5c48, Func Offset: 0x18
	// Line 97, Address: 0x2e5ca0, Func Offset: 0x70
	// Line 99, Address: 0x2e5cf8, Func Offset: 0xc8
	// Line 101, Address: 0x2e5d50, Func Offset: 0x120
	// Line 103, Address: 0x2e5d5c, Func Offset: 0x12c
	// Line 108, Address: 0x2e5dcc, Func Offset: 0x19c
	// Line 109, Address: 0x2e5dd0, Func Offset: 0x1a0
	// Line 111, Address: 0x2e5dd8, Func Offset: 0x1a8
	// Line 112, Address: 0x2e5de0, Func Offset: 0x1b0
	// Line 103, Address: 0x2e5de8, Func Offset: 0x1b8
	// Line 112, Address: 0x2e5df0, Func Offset: 0x1c0
	// Func End, Address: 0x2e5e00, Func Offset: 0x1d0
}

