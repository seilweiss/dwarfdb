



void iFuncProfileFuncs();
void iFuncProfileDump();
void iFuncMasterLoad(int8* filename);
uint32 HexConvert(int8* s, uint32* dest, int32 len);
void iProfileClear(uint32 sceneID);
void iTimeSetGame(float32 time);
void iTimeGameAdvance(float32 elapsed);
float32 iTimeGetGame();
float32 iTimeDiffSec(long32 t0, long32 t1);
float32 iTimeDiffSec(long32 time);
long32 iTimeGet();
int32 TimerHandler(int32 ca);

// iFuncProfileFuncs__Fiif
// Start address: 0x49dea0
void iFuncProfileFuncs()
{
	// Line 1165, Address: 0x49dea0, Func Offset: 0
	// Func End, Address: 0x49dea8, Func Offset: 0x8
}

// iFuncProfileDump__Fv
// Start address: 0x49deb0
void iFuncProfileDump()
{
	// Line 849, Address: 0x49deb0, Func Offset: 0
	// Func End, Address: 0x49deb8, Func Offset: 0x8
}

// iFuncMasterLoad__FPCc
// Start address: 0x49dec0
void iFuncMasterLoad(int8* filename)
{
	int8* c;
	int8* buf;
	int8* currstr;
	uint32 size;
	uint32 tablen;
	uint32 sizestr;
	uint32* bincurr;
	// Line 472, Address: 0x49dec0, Func Offset: 0
	// Line 477, Address: 0x49dec4, Func Offset: 0x4
	// Line 472, Address: 0x49dec8, Func Offset: 0x8
	// Line 477, Address: 0x49decc, Func Offset: 0xc
	// Line 472, Address: 0x49ded0, Func Offset: 0x10
	// Line 477, Address: 0x49dee8, Func Offset: 0x28
	// Line 478, Address: 0x49def4, Func Offset: 0x34
	// Line 480, Address: 0x49defc, Func Offset: 0x3c
	// Line 489, Address: 0x49df00, Func Offset: 0x40
	// Line 480, Address: 0x49df04, Func Offset: 0x44
	// Line 490, Address: 0x49df0c, Func Offset: 0x4c
	// Line 495, Address: 0x49df18, Func Offset: 0x58
	// Line 496, Address: 0x49df58, Func Offset: 0x98
	// Line 503, Address: 0x49df74, Func Offset: 0xb4
	// Line 505, Address: 0x49df78, Func Offset: 0xb8
	// Line 509, Address: 0x49df84, Func Offset: 0xc4
	// Line 510, Address: 0x49dfb0, Func Offset: 0xf0
	// Line 509, Address: 0x49dfb4, Func Offset: 0xf4
	// Line 510, Address: 0x49dfb8, Func Offset: 0xf8
	// Line 511, Address: 0x49dfdc, Func Offset: 0x11c
	// Line 512, Address: 0x49dffc, Func Offset: 0x13c
	// Line 516, Address: 0x49e010, Func Offset: 0x150
	// Line 518, Address: 0x49e014, Func Offset: 0x154
	// Line 517, Address: 0x49e018, Func Offset: 0x158
	// Line 519, Address: 0x49e01c, Func Offset: 0x15c
	// Line 524, Address: 0x49e028, Func Offset: 0x168
	// Line 525, Address: 0x49e068, Func Offset: 0x1a8
	// Line 545, Address: 0x49e084, Func Offset: 0x1c4
	// Line 547, Address: 0x49e088, Func Offset: 0x1c8
	// Line 550, Address: 0x49e094, Func Offset: 0x1d4
	// Line 553, Address: 0x49e0a4, Func Offset: 0x1e4
	// Line 554, Address: 0x49e0a8, Func Offset: 0x1e8
	// Line 553, Address: 0x49e0ac, Func Offset: 0x1ec
	// Line 554, Address: 0x49e0b0, Func Offset: 0x1f0
	// Line 555, Address: 0x49e0b4, Func Offset: 0x1f4
	// Line 556, Address: 0x49e0cc, Func Offset: 0x20c
	// Line 557, Address: 0x49e0d8, Func Offset: 0x218
	// Line 559, Address: 0x49e0e0, Func Offset: 0x220
	// Line 497, Address: 0x49e0ec, Func Offset: 0x22c
	// Line 559, Address: 0x49e0f0, Func Offset: 0x230
	// Line 497, Address: 0x49e108, Func Offset: 0x248
	// Line 559, Address: 0x49e10c, Func Offset: 0x24c
	// Line 497, Address: 0x49e114, Func Offset: 0x254
	// Line 559, Address: 0x49e118, Func Offset: 0x258
	// Line 499, Address: 0x49e124, Func Offset: 0x264
	// Line 559, Address: 0x49e134, Func Offset: 0x274
	// Line 499, Address: 0x49e13c, Func Offset: 0x27c
	// Line 559, Address: 0x49e140, Func Offset: 0x280
	// Line 499, Address: 0x49e180, Func Offset: 0x2c0
	// Line 559, Address: 0x49e184, Func Offset: 0x2c4
	// Line 500, Address: 0x49e18c, Func Offset: 0x2cc
	// Line 502, Address: 0x49e190, Func Offset: 0x2d0
	// Line 559, Address: 0x49e198, Func Offset: 0x2d8
	// Line 510, Address: 0x49e1b4, Func Offset: 0x2f4
	// Line 559, Address: 0x49e1b8, Func Offset: 0x2f8
	// Line 511, Address: 0x49e1cc, Func Offset: 0x30c
	// Line 559, Address: 0x49e1d0, Func Offset: 0x310
	// Line 526, Address: 0x49e1e8, Func Offset: 0x328
	// Line 559, Address: 0x49e1ec, Func Offset: 0x32c
	// Line 526, Address: 0x49e204, Func Offset: 0x344
	// Line 559, Address: 0x49e208, Func Offset: 0x348
	// Line 526, Address: 0x49e210, Func Offset: 0x350
	// Line 559, Address: 0x49e214, Func Offset: 0x354
	// Line 529, Address: 0x49e21c, Func Offset: 0x35c
	// Line 559, Address: 0x49e230, Func Offset: 0x370
	// Line 530, Address: 0x49e270, Func Offset: 0x3b0
	// Line 559, Address: 0x49e274, Func Offset: 0x3b4
	// Line 531, Address: 0x49e278, Func Offset: 0x3b8
	// Line 559, Address: 0x49e27c, Func Offset: 0x3bc
	// Line 538, Address: 0x49e290, Func Offset: 0x3d0
	// Line 559, Address: 0x49e294, Func Offset: 0x3d4
	// Line 538, Address: 0x49e298, Func Offset: 0x3d8
	// Line 559, Address: 0x49e2a0, Func Offset: 0x3e0
	// Line 539, Address: 0x49e2b4, Func Offset: 0x3f4
	// Line 559, Address: 0x49e2bc, Func Offset: 0x3fc
	// Line 542, Address: 0x49e2cc, Func Offset: 0x40c
	// Line 544, Address: 0x49e2d0, Func Offset: 0x410
	// Line 559, Address: 0x49e2d8, Func Offset: 0x418
	// Func End, Address: 0x49e2fc, Func Offset: 0x43c
}

// HexConvert__FPcPUii
// Start address: 0x49e300
uint32 HexConvert(int8* s, uint32* dest, int32 len)
{
	int32 foundlen;
	// Line 428, Address: 0x49e300, Func Offset: 0
	// Line 429, Address: 0x49e304, Func Offset: 0x4
	// Line 431, Address: 0x49e320, Func Offset: 0x20
	// Line 433, Address: 0x49e328, Func Offset: 0x28
	// Line 434, Address: 0x49e334, Func Offset: 0x34
	// Line 435, Address: 0x49e338, Func Offset: 0x38
	// Line 436, Address: 0x49e350, Func Offset: 0x50
	// Line 438, Address: 0x49e35c, Func Offset: 0x5c
	// Line 439, Address: 0x49e37c, Func Offset: 0x7c
	// Line 441, Address: 0x49e388, Func Offset: 0x88
	// Line 442, Address: 0x49e3a8, Func Offset: 0xa8
	// Line 447, Address: 0x49e3b8, Func Offset: 0xb8
	// Line 448, Address: 0x49e3bc, Func Offset: 0xbc
	// Line 449, Address: 0x49e3c8, Func Offset: 0xc8
	// Line 450, Address: 0x49e3d8, Func Offset: 0xd8
	// Line 429, Address: 0x49e3e0, Func Offset: 0xe0
	// Line 453, Address: 0x49e3e8, Func Offset: 0xe8
	// Func End, Address: 0x49e3f0, Func Offset: 0xf0
}

// iProfileClear__FUi
// Start address: 0x49e3f0
void iProfileClear(uint32 sceneID)
{
	int32 i;
	// Line 398, Address: 0x49e3f0, Func Offset: 0
	// Line 399, Address: 0x49e400, Func Offset: 0x10
	// Line 400, Address: 0x49e408, Func Offset: 0x18
	// Line 401, Address: 0x49e410, Func Offset: 0x20
	// Line 403, Address: 0x49e41c, Func Offset: 0x2c
	// Line 404, Address: 0x49e430, Func Offset: 0x40
	// Line 405, Address: 0x49e434, Func Offset: 0x44
	// Line 404, Address: 0x49e438, Func Offset: 0x48
	// Line 405, Address: 0x49e440, Func Offset: 0x50
	// Line 406, Address: 0x49e450, Func Offset: 0x60
	// Line 407, Address: 0x49e460, Func Offset: 0x70
	// Line 412, Address: 0x49e464, Func Offset: 0x74
	// Line 409, Address: 0x49e468, Func Offset: 0x78
	// Line 412, Address: 0x49e46c, Func Offset: 0x7c
	// Line 410, Address: 0x49e474, Func Offset: 0x84
	// Line 411, Address: 0x49e478, Func Offset: 0x88
	// Line 412, Address: 0x49e47c, Func Offset: 0x8c
	// Line 413, Address: 0x49e480, Func Offset: 0x90
	// Func End, Address: 0x49e490, Func Offset: 0xa0
}

// iTimeSetGame__Ff
// Start address: 0x49e490
void iTimeSetGame(float32 time)
{
	// Line 379, Address: 0x49e490, Func Offset: 0
	// Func End, Address: 0x49e498, Func Offset: 0x8
}

// iTimeGameAdvance__Ff
// Start address: 0x49e4a0
void iTimeGameAdvance(float32 elapsed)
{
	// Line 372, Address: 0x49e4a0, Func Offset: 0
	// Line 373, Address: 0x49e4a8, Func Offset: 0x8
	// Func End, Address: 0x49e4b0, Func Offset: 0x10
}

// iTimeGetGame__Fv
// Start address: 0x49e4b0
float32 iTimeGetGame()
{
	// Line 368, Address: 0x49e4b0, Func Offset: 0
	// Func End, Address: 0x49e4b8, Func Offset: 0x8
}

// iTimeDiffSec__Fll
// Start address: 0x49e4c0
float32 iTimeDiffSec(long32 t0, long32 t1)
{
	// Line 355, Address: 0x49e4c0, Func Offset: 0
	// Line 356, Address: 0x49e504, Func Offset: 0x44
	// Func End, Address: 0x49e50c, Func Offset: 0x4c
}

// iTimeDiffSec__Fl
// Start address: 0x49e510
float32 iTimeDiffSec(long32 time)
{
	// Line 351, Address: 0x49e510, Func Offset: 0
	// Line 352, Address: 0x49e550, Func Offset: 0x40
	// Func End, Address: 0x49e558, Func Offset: 0x48
}

// iTimeGet__Fv
// Start address: 0x49e560
long32 iTimeGet()
{
	long32 high0;
	long32 low0;
	long32 high1;
	long32 low1;
	// Line 327, Address: 0x49e560, Func Offset: 0
	// Line 326, Address: 0x49e564, Func Offset: 0x4
	// Line 327, Address: 0x49e568, Func Offset: 0x8
	// Line 328, Address: 0x49e56c, Func Offset: 0xc
	// Line 332, Address: 0x49e570, Func Offset: 0x10
	// Line 336, Address: 0x49e58c, Func Offset: 0x2c
	// Func End, Address: 0x49e594, Func Offset: 0x34
}

// TimerHandler__FiPvPv
// Start address: 0x49e5a0
int32 TimerHandler(int32 ca)
{
	// Line 167, Address: 0x49e5a0, Func Offset: 0
	// Line 170, Address: 0x49e5bc, Func Offset: 0x1c
	// Line 173, Address: 0x49e5c0, Func Offset: 0x20
	// Line 170, Address: 0x49e5c4, Func Offset: 0x24
	// Line 173, Address: 0x49e5cc, Func Offset: 0x2c
	// Line 182, Address: 0x49e5d8, Func Offset: 0x38
	// Line 185, Address: 0x49e5e0, Func Offset: 0x40
	// Func End, Address: 0x49e5e8, Func Offset: 0x48
}

