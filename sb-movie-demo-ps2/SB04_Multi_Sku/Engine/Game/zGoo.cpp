



void zGooStopTide();
void zGooCollsEnd();
void zGooCollsBegin();
int32 zGooIs(xEnt* obj, float32& depth, uint32 playerCheck);
int32 zGooAdd(xEnt* obj, float32 depth, int32 freezeGroup);
void zGooExit();
void zGooInit(int32 nobj);

// zGooStopTide__Fv
// Start address: 0x2d1780
void zGooStopTide()
{
	int32 i;
	xEnt* gooey;
	// Line 179, Address: 0x2d1780, Func Offset: 0
	// Line 181, Address: 0x2d179c, Func Offset: 0x1c
	// Line 185, Address: 0x2d17ac, Func Offset: 0x2c
	// Line 183, Address: 0x2d17c8, Func Offset: 0x48
	// Line 185, Address: 0x2d17d4, Func Offset: 0x54
	// Line 183, Address: 0x2d17d8, Func Offset: 0x58
	// Line 185, Address: 0x2d17e4, Func Offset: 0x64
	// Func End, Address: 0x2d1838, Func Offset: 0xb8
}

// zGooCollsEnd__Fv
// Start address: 0x2d1840
void zGooCollsEnd()
{
	int32 i;
	xEnt* gooey;
	xVec3 change;
	// Line 163, Address: 0x2d1840, Func Offset: 0
	// Line 165, Address: 0x2d1858, Func Offset: 0x18
	// Line 166, Address: 0x2d187c, Func Offset: 0x3c
	// Line 167, Address: 0x2d1880, Func Offset: 0x40
	// Line 173, Address: 0x2d188c, Func Offset: 0x4c
	// Line 174, Address: 0x2d1890, Func Offset: 0x50
	// Line 175, Address: 0x2d18a8, Func Offset: 0x68
	// Func End, Address: 0x2d18f4, Func Offset: 0xb4
}

// zGooCollsBegin__Fv
// Start address: 0x2d1900
void zGooCollsBegin()
{
	int32 i;
	xEnt* gooey;
	float32 ignoredepth;
	xVec3 change;
	// Line 145, Address: 0x2d1900, Func Offset: 0
	// Line 147, Address: 0x2d1920, Func Offset: 0x20
	// Line 150, Address: 0x2d1940, Func Offset: 0x40
	// Line 148, Address: 0x2d1948, Func Offset: 0x48
	// Line 150, Address: 0x2d1950, Func Offset: 0x50
	// Line 151, Address: 0x2d19a8, Func Offset: 0xa8
	// Line 157, Address: 0x2d19b4, Func Offset: 0xb4
	// Line 158, Address: 0x2d19b8, Func Offset: 0xb8
	// Line 159, Address: 0x2d19d0, Func Offset: 0xd0
	// Line 150, Address: 0x2d19e4, Func Offset: 0xe4
	// Line 159, Address: 0x2d19ec, Func Offset: 0xec
	// Line 150, Address: 0x2d19f0, Func Offset: 0xf0
	// Line 159, Address: 0x2d19f4, Func Offset: 0xf4
	// Line 156, Address: 0x2d1a20, Func Offset: 0x120
	// Line 159, Address: 0x2d1a24, Func Offset: 0x124
	// Line 154, Address: 0x2d1a30, Func Offset: 0x130
	// Line 159, Address: 0x2d1a34, Func Offset: 0x134
	// Func End, Address: 0x2d1a74, Func Offset: 0x174
}

// zGooIs__FP4xEntRfUi
// Start address: 0x2d1a80
int32 zGooIs(xEnt* obj, float32& depth, uint32 playerCheck)
{
	int32 ret;
	int32 i;
	// Line 118, Address: 0x2d1a80, Func Offset: 0
	// Line 119, Address: 0x2d1a84, Func Offset: 0x4
	// Line 118, Address: 0x2d1a88, Func Offset: 0x8
	// Line 122, Address: 0x2d1a98, Func Offset: 0x18
	// Line 123, Address: 0x2d1aac, Func Offset: 0x2c
	// Line 125, Address: 0x2d1ac8, Func Offset: 0x48
	// Line 124, Address: 0x2d1acc, Func Offset: 0x4c
	// Line 126, Address: 0x2d1ad8, Func Offset: 0x58
	// Line 128, Address: 0x2d1ae0, Func Offset: 0x60
	// Line 130, Address: 0x2d1af0, Func Offset: 0x70
	// Line 140, Address: 0x2d1af8, Func Offset: 0x78
	// Line 136, Address: 0x2d1b0c, Func Offset: 0x8c
	// Line 135, Address: 0x2d1b14, Func Offset: 0x94
	// Line 140, Address: 0x2d1b18, Func Offset: 0x98
	// Line 141, Address: 0x2d1b38, Func Offset: 0xb8
	// Func End, Address: 0x2d1b48, Func Offset: 0xc8
}

// zGooAdd__FP4xEntfi
// Start address: 0x2d1b50
int32 zGooAdd(xEnt* obj, float32 depth, int32 freezeGroup)
{
	int32 i;
	zGooParams* gp;
	// Line 62, Address: 0x2d1b50, Func Offset: 0
	// Line 81, Address: 0x2d1b58, Func Offset: 0x8
	// Line 82, Address: 0x2d1b6c, Func Offset: 0x1c
	// Line 83, Address: 0x2d1b78, Func Offset: 0x28
	// Line 85, Address: 0x2d1b80, Func Offset: 0x30
	// Line 86, Address: 0x2d1b90, Func Offset: 0x40
	// Line 99, Address: 0x2d1ba0, Func Offset: 0x50
	// Line 100, Address: 0x2d1bb4, Func Offset: 0x64
	// Line 101, Address: 0x2d1bbc, Func Offset: 0x6c
	// Line 102, Address: 0x2d1bc0, Func Offset: 0x70
	// Line 104, Address: 0x2d1bd0, Func Offset: 0x80
	// Line 111, Address: 0x2d1bdc, Func Offset: 0x8c
	// Line 89, Address: 0x2d1be4, Func Offset: 0x94
	// Line 111, Address: 0x2d1bec, Func Offset: 0x9c
	// Line 112, Address: 0x2d1bfc, Func Offset: 0xac
	// Func End, Address: 0x2d1c08, Func Offset: 0xb8
}

// zGooExit__Fv
// Start address: 0x2d1c10
void zGooExit()
{
	// Line 38, Address: 0x2d1c10, Func Offset: 0
	// Line 39, Address: 0x2d1c14, Func Offset: 0x4
	// Line 41, Address: 0x2d1c18, Func Offset: 0x8
	// Func End, Address: 0x2d1c20, Func Offset: 0x10
}

// zGooInit__Fi
// Start address: 0x2d1c20
void zGooInit(int32 nobj)
{
	// Line 26, Address: 0x2d1c20, Func Offset: 0
	// Line 28, Address: 0x2d1c24, Func Offset: 0x4
	// Line 26, Address: 0x2d1c28, Func Offset: 0x8
	// Line 28, Address: 0x2d1c34, Func Offset: 0x14
	// Line 30, Address: 0x2d1c48, Func Offset: 0x28
	// Line 28, Address: 0x2d1c4c, Func Offset: 0x2c
	// Line 32, Address: 0x2d1c50, Func Offset: 0x30
	// Func End, Address: 0x2d1c60, Func Offset: 0x40
}

