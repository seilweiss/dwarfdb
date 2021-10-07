



float32 xDangleClamp(float32 a);
float32 xAngleClamp(float32 a);
uint32 xMathSolveCubic(float32 a, float32 b, float32 c, float32 d, float32* x1, float32* x2, float32* x3);
uint32 xMathSolveQuadratic(float32 a, float32 b, float32 c, float32* x1, float32* x2);
void xMathExit();
void xMathInit();

// xDangleClamp__Ff
// Start address: 0x115390
float32 xDangleClamp(float32 a)
{
	float32 b;
	// Line 209, Address: 0x115390, Func Offset: 0
	// Line 208, Address: 0x115398, Func Offset: 0x8
	// Line 209, Address: 0x11539c, Func Offset: 0xc
	// Line 208, Address: 0x1153a0, Func Offset: 0x10
	// Line 209, Address: 0x1153a4, Func Offset: 0x14
	// Line 210, Address: 0x1153ac, Func Offset: 0x1c
	// Line 211, Address: 0x1153cc, Func Offset: 0x3c
	// Line 212, Address: 0x1153d8, Func Offset: 0x48
	// Line 213, Address: 0x1153fc, Func Offset: 0x6c
	// Line 216, Address: 0x11540c, Func Offset: 0x7c
	// Func End, Address: 0x115418, Func Offset: 0x88
}

// xAngleClamp__Ff
// Start address: 0x115420
float32 xAngleClamp(float32 a)
{
	float32 b;
	// Line 191, Address: 0x115420, Func Offset: 0
	// Line 190, Address: 0x115428, Func Offset: 0x8
	// Line 191, Address: 0x11542c, Func Offset: 0xc
	// Line 190, Address: 0x115430, Func Offset: 0x10
	// Line 191, Address: 0x115434, Func Offset: 0x14
	// Line 192, Address: 0x11543c, Func Offset: 0x1c
	// Line 193, Address: 0x115454, Func Offset: 0x34
	// Line 196, Address: 0x115464, Func Offset: 0x44
	// Func End, Address: 0x115470, Func Offset: 0x50
}

// xMathSolveCubic__FffffPfPfPf
// Start address: 0x115470
uint32 xMathSolveCubic(float32 a, float32 b, float32 c, float32 d, float32* x1, float32* x2, float32* x3)
{
	float32 fSin;
	float32 fCos;
	float32 fAngle;
	float32 fDist;
	float32 fTemp;
	float32 fHalfB;
	float32 fDiscr;
	float32 fOffset;
	float32 fB;
	float32 fA;
	float32 arecip;
	// Line 118, Address: 0x115470, Func Offset: 0
	// Line 120, Address: 0x115484, Func Offset: 0x14
	// Line 118, Address: 0x115488, Func Offset: 0x18
	// Line 120, Address: 0x115494, Func Offset: 0x24
	// Line 118, Address: 0x115498, Func Offset: 0x28
	// Line 120, Address: 0x1154a4, Func Offset: 0x34
	// Line 121, Address: 0x1154ac, Func Offset: 0x3c
	// Line 125, Address: 0x1154c4, Func Offset: 0x54
	// Line 126, Address: 0x1154e0, Func Offset: 0x70
	// Line 127, Address: 0x1154ec, Func Offset: 0x7c
	// Line 128, Address: 0x1154f0, Func Offset: 0x80
	// Line 129, Address: 0x1154f4, Func Offset: 0x84
	// Line 134, Address: 0x1154f8, Func Offset: 0x88
	// Line 135, Address: 0x115500, Func Offset: 0x90
	// Line 134, Address: 0x115508, Func Offset: 0x98
	// Line 135, Address: 0x11551c, Func Offset: 0xac
	// Line 138, Address: 0x115530, Func Offset: 0xc0
	// Line 135, Address: 0x115534, Func Offset: 0xc4
	// Line 134, Address: 0x11553c, Func Offset: 0xcc
	// Line 135, Address: 0x115540, Func Offset: 0xd0
	// Line 137, Address: 0x115544, Func Offset: 0xd4
	// Line 135, Address: 0x115548, Func Offset: 0xd8
	// Line 134, Address: 0x11554c, Func Offset: 0xdc
	// Line 135, Address: 0x115550, Func Offset: 0xe0
	// Line 138, Address: 0x115568, Func Offset: 0xf8
	// Line 134, Address: 0x11556c, Func Offset: 0xfc
	// Line 138, Address: 0x115570, Func Offset: 0x100
	// Line 137, Address: 0x115574, Func Offset: 0x104
	// Line 136, Address: 0x11557c, Func Offset: 0x10c
	// Line 137, Address: 0x115580, Func Offset: 0x110
	// Line 140, Address: 0x115590, Func Offset: 0x120
	// Line 142, Address: 0x1155bc, Func Offset: 0x14c
	// Line 144, Address: 0x1155d4, Func Offset: 0x164
	// Line 145, Address: 0x1155dc, Func Offset: 0x16c
	// Line 144, Address: 0x1155e4, Func Offset: 0x174
	// Line 146, Address: 0x1155e8, Func Offset: 0x178
	// Line 147, Address: 0x115600, Func Offset: 0x190
	// Line 149, Address: 0x11561c, Func Offset: 0x1ac
	// Line 150, Address: 0x115634, Func Offset: 0x1c4
	// Line 151, Address: 0x115638, Func Offset: 0x1c8
	// Line 152, Address: 0x115650, Func Offset: 0x1e0
	// Line 154, Address: 0x115674, Func Offset: 0x204
	// Line 155, Address: 0x115690, Func Offset: 0x220
	// Line 156, Address: 0x115694, Func Offset: 0x224
	// Line 155, Address: 0x115698, Func Offset: 0x228
	// Line 156, Address: 0x11569c, Func Offset: 0x22c
	// Line 158, Address: 0x1156a4, Func Offset: 0x234
	// Line 160, Address: 0x1156b4, Func Offset: 0x244
	// Line 161, Address: 0x1156c4, Func Offset: 0x254
	// Line 162, Address: 0x115730, Func Offset: 0x2c0
	// Line 163, Address: 0x115738, Func Offset: 0x2c8
	// Line 164, Address: 0x115744, Func Offset: 0x2d4
	// Line 165, Address: 0x11574c, Func Offset: 0x2dc
	// Line 164, Address: 0x115750, Func Offset: 0x2e0
	// Line 165, Address: 0x115754, Func Offset: 0x2e4
	// Line 167, Address: 0x11575c, Func Offset: 0x2ec
	// Line 164, Address: 0x115760, Func Offset: 0x2f0
	// Line 165, Address: 0x11576c, Func Offset: 0x2fc
	// Line 166, Address: 0x11577c, Func Offset: 0x30c
	// Line 165, Address: 0x115780, Func Offset: 0x310
	// Line 166, Address: 0x115784, Func Offset: 0x314
	// Line 165, Address: 0x115788, Func Offset: 0x318
	// Line 166, Address: 0x11578c, Func Offset: 0x31c
	// Line 165, Address: 0x115790, Func Offset: 0x320
	// Line 167, Address: 0x115794, Func Offset: 0x324
	// Line 173, Address: 0x11579c, Func Offset: 0x32c
	// Line 174, Address: 0x1157d8, Func Offset: 0x368
	// Line 175, Address: 0x1157e0, Func Offset: 0x370
	// Line 174, Address: 0x1157e4, Func Offset: 0x374
	// Line 176, Address: 0x1157e8, Func Offset: 0x378
	// Line 174, Address: 0x1157ec, Func Offset: 0x37c
	// Line 175, Address: 0x1157f4, Func Offset: 0x384
	// Line 178, Address: 0x1157fc, Func Offset: 0x38c
	// Func End, Address: 0x115824, Func Offset: 0x3b4
}

// xMathSolveQuadratic__FfffPfPf
// Start address: 0x115830
uint32 xMathSolveQuadratic(float32 a, float32 b, float32 c, float32* x1, float32* x2)
{
	float32 p;
	float32 dx;
	float32 d;
	// Line 64, Address: 0x115830, Func Offset: 0
	// Line 69, Address: 0x115848, Func Offset: 0x18
	// Line 70, Address: 0x115860, Func Offset: 0x30
	// Line 71, Address: 0x115870, Func Offset: 0x40
	// Line 74, Address: 0x115878, Func Offset: 0x48
	// Line 75, Address: 0x115884, Func Offset: 0x54
	// Line 77, Address: 0x115890, Func Offset: 0x60
	// Line 78, Address: 0x1158a4, Func Offset: 0x74
	// Line 79, Address: 0x1158b4, Func Offset: 0x84
	// Line 81, Address: 0x1158bc, Func Offset: 0x8c
	// Line 83, Address: 0x1158c0, Func Offset: 0x90
	// Line 81, Address: 0x1158c4, Func Offset: 0x94
	// Line 82, Address: 0x1158cc, Func Offset: 0x9c
	// Line 81, Address: 0x1158d0, Func Offset: 0xa0
	// Line 82, Address: 0x1158dc, Func Offset: 0xac
	// Line 83, Address: 0x1158e0, Func Offset: 0xb0
	// Line 84, Address: 0x1158e8, Func Offset: 0xb8
	// Line 86, Address: 0x1158f0, Func Offset: 0xc0
	// Line 87, Address: 0x1158f4, Func Offset: 0xc4
	// Line 88, Address: 0x115900, Func Offset: 0xd0
	// Line 89, Address: 0x115918, Func Offset: 0xe8
	// Line 90, Address: 0x115924, Func Offset: 0xf4
	// Line 91, Address: 0x11592c, Func Offset: 0xfc
	// Line 92, Address: 0x115934, Func Offset: 0x104
	// Line 93, Address: 0x115940, Func Offset: 0x110
	// Line 95, Address: 0x11594c, Func Offset: 0x11c
	// Line 96, Address: 0x115950, Func Offset: 0x120
	// Func End, Address: 0x11596c, Func Offset: 0x13c
}

// xMathExit__Fv
// Start address: 0x115970
void xMathExit()
{
	// Line 43, Address: 0x115970, Func Offset: 0
	// Line 44, Address: 0x115978, Func Offset: 0x8
	// Line 46, Address: 0x115980, Func Offset: 0x10
	// Line 47, Address: 0x115988, Func Offset: 0x18
	// Func End, Address: 0x115994, Func Offset: 0x24
}

// xMathInit__Fv
// Start address: 0x1159a0
void xMathInit()
{
	// Line 29, Address: 0x1159a0, Func Offset: 0
	// Line 30, Address: 0x1159a8, Func Offset: 0x8
	// Line 32, Address: 0x1159b0, Func Offset: 0x10
	// Line 33, Address: 0x1159b8, Func Offset: 0x18
	// Func End, Address: 0x1159c4, Func Offset: 0x24
}

