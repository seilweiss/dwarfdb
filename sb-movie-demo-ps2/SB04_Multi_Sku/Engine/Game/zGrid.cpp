



void zGridUpdateEnt(xEnt* ent);
void zGridExit();
void zGridInit(zScene* s);
void zGridReset(zScene* s);

// zGridUpdateEnt__FP4xEnt
// Start address: 0x2d0ba0
void zGridUpdateEnt(xEnt* ent)
{
	xGrid* grid;
	// Line 178, Address: 0x2d0ba0, Func Offset: 0
	// Line 180, Address: 0x2d0bac, Func Offset: 0xc
	// Line 189, Address: 0x2d0bb8, Func Offset: 0x18
	// Line 223, Address: 0x2d0c00, Func Offset: 0x60
	// Line 197, Address: 0x2d0c50, Func Offset: 0xb0
	// Line 223, Address: 0x2d0c58, Func Offset: 0xb8
	// Line 226, Address: 0x2d0c68, Func Offset: 0xc8
	// Line 228, Address: 0x2d0c80, Func Offset: 0xe0
	// Line 229, Address: 0x2d0c88, Func Offset: 0xe8
	// Line 240, Address: 0x2d0c90, Func Offset: 0xf0
	// Line 242, Address: 0x2d0c98, Func Offset: 0xf8
	// Line 246, Address: 0x2d0ca0, Func Offset: 0x100
	// Line 199, Address: 0x2d0cac, Func Offset: 0x10c
	// Line 246, Address: 0x2d0cb0, Func Offset: 0x110
	// Line 200, Address: 0x2d0cbc, Func Offset: 0x11c
	// Line 246, Address: 0x2d0cc0, Func Offset: 0x120
	// Line 201, Address: 0x2d0cd0, Func Offset: 0x130
	// Line 202, Address: 0x2d0cd4, Func Offset: 0x134
	// Line 246, Address: 0x2d0cdc, Func Offset: 0x13c
	// Line 205, Address: 0x2d0ce4, Func Offset: 0x144
	// Line 246, Address: 0x2d0ce8, Func Offset: 0x148
	// Line 206, Address: 0x2d0cf0, Func Offset: 0x150
	// Line 246, Address: 0x2d0cf8, Func Offset: 0x158
	// Line 207, Address: 0x2d0cfc, Func Offset: 0x15c
	// Line 246, Address: 0x2d0d00, Func Offset: 0x160
	// Line 208, Address: 0x2d0d14, Func Offset: 0x174
	// Line 246, Address: 0x2d0d18, Func Offset: 0x178
	// Line 209, Address: 0x2d0d28, Func Offset: 0x188
	// Line 210, Address: 0x2d0d2c, Func Offset: 0x18c
	// Line 211, Address: 0x2d0d34, Func Offset: 0x194
	// Line 246, Address: 0x2d0d38, Func Offset: 0x198
	// Line 213, Address: 0x2d0d40, Func Offset: 0x1a0
	// Line 246, Address: 0x2d0d44, Func Offset: 0x1a4
	// Line 214, Address: 0x2d0d4c, Func Offset: 0x1ac
	// Line 246, Address: 0x2d0d54, Func Offset: 0x1b4
	// Line 215, Address: 0x2d0d58, Func Offset: 0x1b8
	// Line 246, Address: 0x2d0d5c, Func Offset: 0x1bc
	// Line 220, Address: 0x2d0d64, Func Offset: 0x1c4
	// Line 223, Address: 0x2d0d6c, Func Offset: 0x1cc
	// Line 246, Address: 0x2d0d78, Func Offset: 0x1d8
	// Line 233, Address: 0x2d0d84, Func Offset: 0x1e4
	// Line 246, Address: 0x2d0d88, Func Offset: 0x1e8
	// Line 237, Address: 0x2d0d90, Func Offset: 0x1f0
	// Line 246, Address: 0x2d0d98, Func Offset: 0x1f8
	// Func End, Address: 0x2d0da8, Func Offset: 0x208
}

// zGridExit__FP6zScene
// Start address: 0x2d0db0
void zGridExit()
{
	// Line 154, Address: 0x2d0db0, Func Offset: 0
	// Line 155, Address: 0x2d0db4, Func Offset: 0x4
	// Line 154, Address: 0x2d0db8, Func Offset: 0x8
	// Line 155, Address: 0x2d0dbc, Func Offset: 0xc
	// Line 156, Address: 0x2d0dc4, Func Offset: 0x14
	// Line 157, Address: 0x2d0dd0, Func Offset: 0x20
	// Line 158, Address: 0x2d0ddc, Func Offset: 0x2c
	// Line 159, Address: 0x2d0de8, Func Offset: 0x38
	// Line 160, Address: 0x2d0dec, Func Offset: 0x3c
	// Func End, Address: 0x2d0df8, Func Offset: 0x48
}

// zGridInit__FP6zScene
// Start address: 0x2d0e00
void zGridInit(zScene* s)
{
	xBox* ebox;
	float32 min_csize;
	xBox osobox;
	// Line 106, Address: 0x2d0e00, Func Offset: 0
	// Line 109, Address: 0x2d0e24, Func Offset: 0x24
	// Line 111, Address: 0x2d0e30, Func Offset: 0x30
	// Line 109, Address: 0x2d0e34, Func Offset: 0x34
	// Line 111, Address: 0x2d0e38, Func Offset: 0x38
	// Line 112, Address: 0x2d0e60, Func Offset: 0x60
	// Line 111, Address: 0x2d0e64, Func Offset: 0x64
	// Line 112, Address: 0x2d0e68, Func Offset: 0x68
	// Line 114, Address: 0x2d0e90, Func Offset: 0x90
	// Line 115, Address: 0x2d0ea8, Func Offset: 0xa8
	// Line 121, Address: 0x2d0fc4, Func Offset: 0x1c4
	// Line 122, Address: 0x2d0fc8, Func Offset: 0x1c8
	// Line 121, Address: 0x2d0fcc, Func Offset: 0x1cc
	// Line 124, Address: 0x2d0fd0, Func Offset: 0x1d0
	// Line 121, Address: 0x2d0fd4, Func Offset: 0x1d4
	// Line 122, Address: 0x2d0fe0, Func Offset: 0x1e0
	// Line 124, Address: 0x2d0fe8, Func Offset: 0x1e8
	// Line 121, Address: 0x2d0ff4, Func Offset: 0x1f4
	// Line 126, Address: 0x2d0ffc, Func Offset: 0x1fc
	// Line 125, Address: 0x2d1000, Func Offset: 0x200
	// Line 126, Address: 0x2d1004, Func Offset: 0x204
	// Line 121, Address: 0x2d1008, Func Offset: 0x208
	// Line 122, Address: 0x2d1018, Func Offset: 0x218
	// Line 125, Address: 0x2d101c, Func Offset: 0x21c
	// Line 124, Address: 0x2d1020, Func Offset: 0x220
	// Line 125, Address: 0x2d1024, Func Offset: 0x224
	// Line 122, Address: 0x2d1028, Func Offset: 0x228
	// Line 124, Address: 0x2d102c, Func Offset: 0x22c
	// Line 122, Address: 0x2d1030, Func Offset: 0x230
	// Line 126, Address: 0x2d1038, Func Offset: 0x238
	// Line 121, Address: 0x2d103c, Func Offset: 0x23c
	// Line 124, Address: 0x2d1040, Func Offset: 0x240
	// Line 123, Address: 0x2d1044, Func Offset: 0x244
	// Line 126, Address: 0x2d1048, Func Offset: 0x248
	// Line 121, Address: 0x2d104c, Func Offset: 0x24c
	// Line 123, Address: 0x2d1050, Func Offset: 0x250
	// Line 126, Address: 0x2d1054, Func Offset: 0x254
	// Line 127, Address: 0x2d106c, Func Offset: 0x26c
	// Line 126, Address: 0x2d1070, Func Offset: 0x270
	// Line 127, Address: 0x2d1074, Func Offset: 0x274
	// Line 129, Address: 0x2d1098, Func Offset: 0x298
	// Line 130, Address: 0x2d10b4, Func Offset: 0x2b4
	// Line 135, Address: 0x2d11cc, Func Offset: 0x3cc
	// Line 141, Address: 0x2d12e8, Func Offset: 0x4e8
	// Line 146, Address: 0x2d1404, Func Offset: 0x604
	// Line 149, Address: 0x2d1408, Func Offset: 0x608
	// Line 150, Address: 0x2d1414, Func Offset: 0x614
	// Line 115, Address: 0x2d1434, Func Offset: 0x634
	// Line 150, Address: 0x2d1444, Func Offset: 0x644
	// Line 115, Address: 0x2d147c, Func Offset: 0x67c
	// Line 150, Address: 0x2d148c, Func Offset: 0x68c
	// Line 130, Address: 0x2d14c4, Func Offset: 0x6c4
	// Line 150, Address: 0x2d14d4, Func Offset: 0x6d4
	// Line 130, Address: 0x2d150c, Func Offset: 0x70c
	// Line 150, Address: 0x2d151c, Func Offset: 0x71c
	// Line 135, Address: 0x2d1554, Func Offset: 0x754
	// Line 150, Address: 0x2d1564, Func Offset: 0x764
	// Line 135, Address: 0x2d159c, Func Offset: 0x79c
	// Line 150, Address: 0x2d15ac, Func Offset: 0x7ac
	// Line 141, Address: 0x2d15e4, Func Offset: 0x7e4
	// Line 150, Address: 0x2d15f4, Func Offset: 0x7f4
	// Line 141, Address: 0x2d162c, Func Offset: 0x82c
	// Line 150, Address: 0x2d163c, Func Offset: 0x83c
	// Func End, Address: 0x2d1680, Func Offset: 0x880
}

// zGridReset__FP6zScene
// Start address: 0x2d1680
void zGridReset(zScene* s)
{
	int32 i;
	xBase* base;
	xEnt* ent;
	// Line 81, Address: 0x2d1680, Func Offset: 0
	// Line 86, Address: 0x2d169c, Func Offset: 0x1c
	// Line 87, Address: 0x2d16b0, Func Offset: 0x30
	// Line 89, Address: 0x2d16bc, Func Offset: 0x3c
	// Line 93, Address: 0x2d16f8, Func Offset: 0x78
	// Line 94, Address: 0x2d16fc, Func Offset: 0x7c
	// Line 95, Address: 0x2d1704, Func Offset: 0x84
	// Line 100, Address: 0x2d1718, Func Offset: 0x98
	// Line 102, Address: 0x2d1720, Func Offset: 0xa0
	// Line 103, Address: 0x2d1738, Func Offset: 0xb8
	// Line 97, Address: 0x2d1744, Func Offset: 0xc4
	// Line 103, Address: 0x2d1748, Func Offset: 0xc8
	// Func End, Address: 0x2d1774, Func Offset: 0xf4
}

