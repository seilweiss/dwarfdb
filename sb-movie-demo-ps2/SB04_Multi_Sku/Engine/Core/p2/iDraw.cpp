



void iDrawSetDisplayOffset(float32 x, float32 y);
void iDrawSetTEST2(int32 value);
void iDrawSetFBA1(int32 value);
void iDrawSetFBMSK(uint32 abgr, uint32 setMask, uint8 plusFrame2);

// iDrawSetDisplayOffset__Fff
// Start address: 0x4b3c90
void iDrawSetDisplayOffset(float32 x, float32 y)
{
	int32 dx;
	int32 dy;
	// Line 118, Address: 0x4b3c90, Func Offset: 0
	// Line 123, Address: 0x4b3c94, Func Offset: 0x4
	// Line 128, Address: 0x4b3c9c, Func Offset: 0xc
	// Line 131, Address: 0x4b3ca4, Func Offset: 0x14
	// Line 132, Address: 0x4b3ca8, Func Offset: 0x18
	// Line 131, Address: 0x4b3cac, Func Offset: 0x1c
	// Line 132, Address: 0x4b3cc0, Func Offset: 0x30
	// Line 139, Address: 0x4b3d04, Func Offset: 0x74
	// Line 140, Address: 0x4b3d0c, Func Offset: 0x7c
	// Line 144, Address: 0x4b3d14, Func Offset: 0x84
	// Line 143, Address: 0x4b3d18, Func Offset: 0x88
	// Line 144, Address: 0x4b3d1c, Func Offset: 0x8c
	// Line 143, Address: 0x4b3d20, Func Offset: 0x90
	// Line 142, Address: 0x4b3d24, Func Offset: 0x94
	// Line 143, Address: 0x4b3d34, Func Offset: 0xa4
	// Line 145, Address: 0x4b3d38, Func Offset: 0xa8
	// Line 149, Address: 0x4b3d3c, Func Offset: 0xac
	// Line 148, Address: 0x4b3d40, Func Offset: 0xb0
	// Line 144, Address: 0x4b3d44, Func Offset: 0xb4
	// Line 148, Address: 0x4b3d48, Func Offset: 0xb8
	// Line 143, Address: 0x4b3d4c, Func Offset: 0xbc
	// Line 142, Address: 0x4b3d50, Func Offset: 0xc0
	// Line 143, Address: 0x4b3d54, Func Offset: 0xc4
	// Line 150, Address: 0x4b3d58, Func Offset: 0xc8
	// Line 142, Address: 0x4b3d60, Func Offset: 0xd0
	// Line 143, Address: 0x4b3d64, Func Offset: 0xd4
	// Line 151, Address: 0x4b3d68, Func Offset: 0xd8
	// Line 143, Address: 0x4b3d6c, Func Offset: 0xdc
	// Line 153, Address: 0x4b3d70, Func Offset: 0xe0
	// Line 143, Address: 0x4b3d74, Func Offset: 0xe4
	// Line 144, Address: 0x4b3d78, Func Offset: 0xe8
	// Line 145, Address: 0x4b3d7c, Func Offset: 0xec
	// Line 148, Address: 0x4b3d80, Func Offset: 0xf0
	// Line 145, Address: 0x4b3d84, Func Offset: 0xf4
	// Line 148, Address: 0x4b3d88, Func Offset: 0xf8
	// Line 145, Address: 0x4b3d8c, Func Offset: 0xfc
	// Line 149, Address: 0x4b3d90, Func Offset: 0x100
	// Line 150, Address: 0x4b3d9c, Func Offset: 0x10c
	// Line 153, Address: 0x4b3da0, Func Offset: 0x110
	// Line 150, Address: 0x4b3da4, Func Offset: 0x114
	// Line 151, Address: 0x4b3da8, Func Offset: 0x118
	// Line 154, Address: 0x4b3dac, Func Offset: 0x11c
	// Line 151, Address: 0x4b3db0, Func Offset: 0x120
	// Line 153, Address: 0x4b3db4, Func Offset: 0x124
	// Line 151, Address: 0x4b3db8, Func Offset: 0x128
	// Line 153, Address: 0x4b3dbc, Func Offset: 0x12c
	// Line 155, Address: 0x4b3dc0, Func Offset: 0x130
	// Line 154, Address: 0x4b3dc4, Func Offset: 0x134
	// Line 155, Address: 0x4b3dc8, Func Offset: 0x138
	// Line 154, Address: 0x4b3dcc, Func Offset: 0x13c
	// Line 156, Address: 0x4b3dd4, Func Offset: 0x144
	// Line 160, Address: 0x4b3dd8, Func Offset: 0x148
	// Line 159, Address: 0x4b3ddc, Func Offset: 0x14c
	// Line 155, Address: 0x4b3de0, Func Offset: 0x150
	// Line 159, Address: 0x4b3de4, Func Offset: 0x154
	// Line 155, Address: 0x4b3de8, Func Offset: 0x158
	// Line 156, Address: 0x4b3dec, Func Offset: 0x15c
	// Line 161, Address: 0x4b3df0, Func Offset: 0x160
	// Line 159, Address: 0x4b3df4, Func Offset: 0x164
	// Line 161, Address: 0x4b3df8, Func Offset: 0x168
	// Line 162, Address: 0x4b3e00, Func Offset: 0x170
	// Line 156, Address: 0x4b3e04, Func Offset: 0x174
	// Line 161, Address: 0x4b3e08, Func Offset: 0x178
	// Line 156, Address: 0x4b3e0c, Func Offset: 0x17c
	// Line 159, Address: 0x4b3e10, Func Offset: 0x180
	// Line 160, Address: 0x4b3e14, Func Offset: 0x184
	// Line 162, Address: 0x4b3e18, Func Offset: 0x188
	// Line 160, Address: 0x4b3e1c, Func Offset: 0x18c
	// Line 162, Address: 0x4b3e20, Func Offset: 0x190
	// Line 160, Address: 0x4b3e24, Func Offset: 0x194
	// Line 163, Address: 0x4b3e28, Func Offset: 0x198
	// Line 125, Address: 0x4b3e30, Func Offset: 0x1a0
	// Line 163, Address: 0x4b3e34, Func Offset: 0x1a4
	// Line 125, Address: 0x4b3e38, Func Offset: 0x1a8
	// Line 163, Address: 0x4b3e44, Func Offset: 0x1b4
	// Line 125, Address: 0x4b3e48, Func Offset: 0x1b8
	// Line 163, Address: 0x4b3e4c, Func Offset: 0x1bc
	// Line 126, Address: 0x4b3e54, Func Offset: 0x1c4
	// Line 163, Address: 0x4b3e80, Func Offset: 0x1f0
	// Line 126, Address: 0x4b3e84, Func Offset: 0x1f4
	// Line 127, Address: 0x4b3e88, Func Offset: 0x1f8
	// Line 163, Address: 0x4b3ea0, Func Offset: 0x210
	// Func End, Address: 0x4b3ea8, Func Offset: 0x218
}

// iDrawSetTEST2__Fi
// Start address: 0x4b3eb0
void iDrawSetTEST2(int32 value)
{
	ulong32 tmp;
	// Line 100, Address: 0x4b3eb0, Func Offset: 0
	// Line 103, Address: 0x4b3eb4, Func Offset: 0x4
	// Line 100, Address: 0x4b3eb8, Func Offset: 0x8
	// Line 103, Address: 0x4b3ec4, Func Offset: 0x14
	// Line 104, Address: 0x4b3ecc, Func Offset: 0x1c
	// Line 111, Address: 0x4b3ed0, Func Offset: 0x20
	// Line 104, Address: 0x4b3ed4, Func Offset: 0x24
	// Line 111, Address: 0x4b3ed8, Func Offset: 0x28
	// Line 104, Address: 0x4b3edc, Func Offset: 0x2c
	// Line 109, Address: 0x4b3ee4, Func Offset: 0x34
	// Line 111, Address: 0x4b3ef0, Func Offset: 0x40
	// Line 110, Address: 0x4b3ef8, Func Offset: 0x48
	// Line 112, Address: 0x4b3efc, Func Offset: 0x4c
	// Line 113, Address: 0x4b3f0c, Func Offset: 0x5c
	// Func End, Address: 0x4b3f1c, Func Offset: 0x6c
}

// iDrawSetFBA1__Fi
// Start address: 0x4b3f20
void iDrawSetFBA1(int32 value)
{
	ulong32 tmp;
	// Line 82, Address: 0x4b3f20, Func Offset: 0
	// Line 85, Address: 0x4b3f24, Func Offset: 0x4
	// Line 82, Address: 0x4b3f28, Func Offset: 0x8
	// Line 85, Address: 0x4b3f34, Func Offset: 0x14
	// Line 86, Address: 0x4b3f3c, Func Offset: 0x1c
	// Line 91, Address: 0x4b3f48, Func Offset: 0x28
	// Line 86, Address: 0x4b3f4c, Func Offset: 0x2c
	// Line 91, Address: 0x4b3f58, Func Offset: 0x38
	// Line 93, Address: 0x4b3f60, Func Offset: 0x40
	// Line 95, Address: 0x4b3f64, Func Offset: 0x44
	// Line 93, Address: 0x4b3f68, Func Offset: 0x48
	// Line 92, Address: 0x4b3f6c, Func Offset: 0x4c
	// Line 95, Address: 0x4b3f70, Func Offset: 0x50
	// Line 94, Address: 0x4b3f74, Func Offset: 0x54
	// Line 96, Address: 0x4b3f78, Func Offset: 0x58
	// Line 97, Address: 0x4b3f88, Func Offset: 0x68
	// Func End, Address: 0x4b3f98, Func Offset: 0x78
}

// iDrawSetFBMSK__FUiUib
// Start address: 0x4b3fa0
void iDrawSetFBMSK(uint32 abgr, uint32 setMask, uint8 plusFrame2)
{
	int32 size;
	<unknown fundamental type (0xa510)>* _rwDMA_local_rwDMAPktPtr;
	ulong32 tmp;
	// Line 30, Address: 0x4b3fa0, Func Offset: 0
	// Line 31, Address: 0x4b3fa4, Func Offset: 0x4
	// Line 30, Address: 0x4b3fa8, Func Offset: 0x8
	// Line 36, Address: 0x4b3fac, Func Offset: 0xc
	// Line 30, Address: 0x4b3fb0, Func Offset: 0x10
	// Line 31, Address: 0x4b3fbc, Func Offset: 0x1c
	// Line 35, Address: 0x4b3fc4, Func Offset: 0x24
	// Line 31, Address: 0x4b3fc8, Func Offset: 0x28
	// Line 35, Address: 0x4b3fcc, Func Offset: 0x2c
	// Line 36, Address: 0x4b3fd0, Func Offset: 0x30
	// Line 31, Address: 0x4b3fd4, Func Offset: 0x34
	// Line 36, Address: 0x4b3fdc, Func Offset: 0x3c
	// Line 41, Address: 0x4b3fe4, Func Offset: 0x44
	// Line 60, Address: 0x4b3fe8, Func Offset: 0x48
	// Line 41, Address: 0x4b3fec, Func Offset: 0x4c
	// Line 60, Address: 0x4b4000, Func Offset: 0x60
	// Line 41, Address: 0x4b4004, Func Offset: 0x64
	// Line 60, Address: 0x4b4008, Func Offset: 0x68
	// Line 41, Address: 0x4b400c, Func Offset: 0x6c
	// Line 60, Address: 0x4b4010, Func Offset: 0x70
	// Line 65, Address: 0x4b4014, Func Offset: 0x74
	// Line 60, Address: 0x4b4018, Func Offset: 0x78
	// Line 41, Address: 0x4b401c, Func Offset: 0x7c
	// Line 60, Address: 0x4b4020, Func Offset: 0x80
	// Line 68, Address: 0x4b4028, Func Offset: 0x88
	// Line 41, Address: 0x4b402c, Func Offset: 0x8c
	// Line 65, Address: 0x4b4030, Func Offset: 0x90
	// Line 41, Address: 0x4b4034, Func Offset: 0x94
	// Line 66, Address: 0x4b4038, Func Offset: 0x98
	// Line 69, Address: 0x4b403c, Func Offset: 0x9c
	// Line 68, Address: 0x4b4040, Func Offset: 0xa0
	// Line 71, Address: 0x4b4048, Func Offset: 0xa8
	// Line 78, Address: 0x4b4050, Func Offset: 0xb0
	// Line 73, Address: 0x4b4058, Func Offset: 0xb8
	// Line 78, Address: 0x4b405c, Func Offset: 0xbc
	// Func End, Address: 0x4b4084, Func Offset: 0xe4
}

