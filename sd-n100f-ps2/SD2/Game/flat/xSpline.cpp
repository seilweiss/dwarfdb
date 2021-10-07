typedef struct xSpline3;
typedef struct _xVec3;
typedef struct xCoef;
typedef struct xCoef3;


typedef float32 type_0[4];
typedef float32 type_1[3];
typedef float32 type_2[3];
typedef _xVec3 type_3[4];
typedef _xVec3 type_4[4];
typedef _xVec3 type_5[4];
typedef float32 type_6[4];
typedef float32 type_7[4][4];
typedef float32 type_8[4];
typedef float32 type_9[2];
typedef float32 type_10[4];
typedef float32 type_11[4][4];
typedef float32 type_12[4];
typedef float32 type_13[4][7];
typedef float32 type_14[4];
typedef float32 type_15[4];
typedef float32 type_16[4];
typedef float32 type_17[4];
typedef float32 type_18[4][4];
typedef float32 type_19[4];
typedef float32 type_20[4][7];

struct xSpline3
{
	uint16 type;
	uint16 flags;
	uint32 N;
	uint32 allocN;
	_xVec3* points;
	float32* time;
	_xVec3* p12;
	_xVec3* bctrl;
	float32* knot;
	xCoef3* coef;
	uint32 arcSample;
	float32* arcLength;
};

struct _xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct xCoef
{
	float32 a[4];
};

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
};

float32 sBasisUniformBspline[4][4];
float32 sBasisBezier[4][4];
float32 sBasisHermite[4][4];

xSpline3* xSpline3_Bezier(_xVec3* points, float32* time, uint32 numpoints, uint32 numalloc, _xVec3* p1, _xVec3* p2);
xSpline3* AllocSpline3(_xVec3* points, float32* time, uint32 numpoints, uint32 numalloc, uint32 flags, uint32 type);
void xSpline3_ArcInit(xSpline3* spl, uint32 sample);
float32 xSpline3_EvalArcApprox(xSpline3* spl, float32 s, uint32 deriv, _xVec3* o);
float32 ArcEvalIterate(xSpline3* spl, float32 s, uint32 deriv, _xVec3* o, uint32 iterations);
void xSpline3_EvalSeg(xSpline3* spl, float32 u, uint32 deriv, _xVec3* o);
uint32 SegBspline(xSpline3* spl, float32 u);
void BasisBspline(float32 N[4], float32* t);
void CoefToUnity3(xCoef3* dest, xCoef3* coef, float32 t1, float32 t2);
void EvalCoef3(xCoef3* coef, float32 u, uint32 deriv, _xVec3* o);
float32 ArcLength3(xCoef3* coef, float32 ustart, float32 uend);
void Interpolate_Bspline(_xVec3* data, _xVec3* control, float32* knots, uint32 nodata);
void Tridiag_Solve(float32* a, float32* b, float32* c, _xVec3* d, _xVec3* x, int32 n);

// xSpline3_Bezier__FP6_xVec3PfUiUiP6_xVec3P6_xVec3
// Start address: 0x1a92a0
xSpline3* xSpline3_Bezier(_xVec3* points, float32* time, uint32 numpoints, uint32 numalloc, _xVec3* p1, _xVec3* p2)
{
	uint32 i;
	xSpline3* spl;
	// Line 962, Address: 0x1a92a0, Func Offset: 0
	// Line 965, Address: 0x1a92b8, Func Offset: 0x18
	// Line 968, Address: 0x1a92c8, Func Offset: 0x28
	// Line 965, Address: 0x1a92cc, Func Offset: 0x2c
	// Line 968, Address: 0x1a92d0, Func Offset: 0x30
	// Line 971, Address: 0x1a92e0, Func Offset: 0x40
	// Line 972, Address: 0x1a92f0, Func Offset: 0x50
	// Line 973, Address: 0x1a9330, Func Offset: 0x90
	// Line 975, Address: 0x1a933c, Func Offset: 0x9c
	// Line 976, Address: 0x1a9344, Func Offset: 0xa4
	// Line 977, Address: 0x1a934c, Func Offset: 0xac
	// Line 976, Address: 0x1a935c, Func Offset: 0xbc
	// Line 977, Address: 0x1a9368, Func Offset: 0xc8
	// Line 978, Address: 0x1a936c, Func Offset: 0xcc
	// Line 976, Address: 0x1a9370, Func Offset: 0xd0
	// Line 977, Address: 0x1a937c, Func Offset: 0xdc
	// Line 978, Address: 0x1a93a4, Func Offset: 0x104
	// Line 981, Address: 0x1a93b8, Func Offset: 0x118
	// Line 982, Address: 0x1a93bc, Func Offset: 0x11c
	// Func End, Address: 0x1a93d4, Func Offset: 0x134
}

// AllocSpline3__FP6_xVec3PfUiUiUiUi
// Start address: 0x1a93e0
xSpline3* AllocSpline3(_xVec3* points, float32* time, uint32 numpoints, uint32 numalloc, uint32 flags, uint32 type)
{
	xSpline3* spl;
	// Line 899, Address: 0x1a93e0, Func Offset: 0
	// Line 900, Address: 0x1a9418, Func Offset: 0x38
	// Line 901, Address: 0x1a9424, Func Offset: 0x44
	// Line 902, Address: 0x1a9430, Func Offset: 0x50
	// Line 904, Address: 0x1a9434, Func Offset: 0x54
	// Line 906, Address: 0x1a9438, Func Offset: 0x58
	// Line 905, Address: 0x1a943c, Func Offset: 0x5c
	// Line 906, Address: 0x1a9440, Func Offset: 0x60
	// Line 907, Address: 0x1a9444, Func Offset: 0x64
	// Line 906, Address: 0x1a9448, Func Offset: 0x68
	// Line 907, Address: 0x1a944c, Func Offset: 0x6c
	// Line 908, Address: 0x1a9450, Func Offset: 0x70
	// Line 909, Address: 0x1a9454, Func Offset: 0x74
	// Line 910, Address: 0x1a9458, Func Offset: 0x78
	// Line 911, Address: 0x1a945c, Func Offset: 0x7c
	// Line 912, Address: 0x1a9460, Func Offset: 0x80
	// Line 913, Address: 0x1a9464, Func Offset: 0x84
	// Line 916, Address: 0x1a9468, Func Offset: 0x88
	// Line 917, Address: 0x1a9484, Func Offset: 0xa4
	// Line 920, Address: 0x1a94a4, Func Offset: 0xc4
	// Line 921, Address: 0x1a94ac, Func Offset: 0xcc
	// Line 922, Address: 0x1a94c0, Func Offset: 0xe0
	// Line 923, Address: 0x1a94d8, Func Offset: 0xf8
	// Line 924, Address: 0x1a94e0, Func Offset: 0x100
	// Line 927, Address: 0x1a94e4, Func Offset: 0x104
	// Line 928, Address: 0x1a94e8, Func Offset: 0x108
	// Func End, Address: 0x1a9510, Func Offset: 0x130
}

// xSpline3_ArcInit__FP8xSpline3Ui
// Start address: 0x1a9510
void xSpline3_ArcInit(xSpline3* spl, uint32 sample)
{
	xCoef3 tempCoef;
	float32 arcsum;
	float32 len;
	uint32 seg;
	uint32 i;
	// Line 761, Address: 0x1a9510, Func Offset: 0
	// Line 763, Address: 0x1a9544, Func Offset: 0x34
	// Line 761, Address: 0x1a954c, Func Offset: 0x3c
	// Line 765, Address: 0x1a9550, Func Offset: 0x40
	// Line 768, Address: 0x1a955c, Func Offset: 0x4c
	// Line 769, Address: 0x1a9560, Func Offset: 0x50
	// Line 770, Address: 0x1a9578, Func Offset: 0x68
	// Line 771, Address: 0x1a958c, Func Offset: 0x7c
	// Line 775, Address: 0x1a95b8, Func Offset: 0xa8
	// Line 776, Address: 0x1a95bc, Func Offset: 0xac
	// Line 779, Address: 0x1a95dc, Func Offset: 0xcc
	// Line 782, Address: 0x1a9900, Func Offset: 0x3f0
	// Line 783, Address: 0x1a9910, Func Offset: 0x400
	// Line 784, Address: 0x1a9988, Func Offset: 0x478
	// Line 783, Address: 0x1a9990, Func Offset: 0x480
	// Line 784, Address: 0x1a9994, Func Offset: 0x484
	// Line 785, Address: 0x1a9998, Func Offset: 0x488
	// Line 784, Address: 0x1a99a0, Func Offset: 0x490
	// Line 785, Address: 0x1a99a8, Func Offset: 0x498
	// Line 788, Address: 0x1a99b0, Func Offset: 0x4a0
	// Line 789, Address: 0x1a99d0, Func Offset: 0x4c0
	// Line 790, Address: 0x1a99f4, Func Offset: 0x4e4
	// Func End, Address: 0x1a9a2c, Func Offset: 0x51c
}

// xSpline3_EvalArcApprox__FP8xSpline3fUiP6_xVec3
// Start address: 0x1a9a30
float32 xSpline3_EvalArcApprox(xSpline3* spl, float32 s, uint32 deriv, _xVec3* o)
{
	// Line 728, Address: 0x1a9a30, Func Offset: 0
	// Line 729, Address: 0x1a9a3c, Func Offset: 0xc
	// Line 732, Address: 0x1a9a48, Func Offset: 0x18
	// Line 737, Address: 0x1a9a58, Func Offset: 0x28
	// Line 738, Address: 0x1a9a60, Func Offset: 0x30
	// Line 740, Address: 0x1a9a64, Func Offset: 0x34
	// Func End, Address: 0x1a9a74, Func Offset: 0x44
}

// ArcEvalIterate__FP8xSpline3fUiP6_xVec3Ui
// Start address: 0x1a9a80
float32 ArcEvalIterate(xSpline3* spl, float32 s, uint32 deriv, _xVec3* o, uint32 iterations)
{
	int32 segmul;
	int32 seg;
	int32 test;
	int32 max;
	int32 min;
	float32 arctest;
	float32 utest;
	float32 smax;
	float32 smin;
	float32 umax;
	float32 umin;
	xCoef3 tempCoef;
	// Line 634, Address: 0x1a9a80, Func Offset: 0
	// Line 641, Address: 0x1a9ab8, Func Offset: 0x38
	// Line 642, Address: 0x1a9adc, Func Offset: 0x5c
	// Line 643, Address: 0x1a9ae4, Func Offset: 0x64
	// Line 644, Address: 0x1a9aec, Func Offset: 0x6c
	// Line 645, Address: 0x1a9b0c, Func Offset: 0x8c
	// Line 647, Address: 0x1a9b14, Func Offset: 0x94
	// Line 648, Address: 0x1a9b18, Func Offset: 0x98
	// Line 651, Address: 0x1a9b28, Func Offset: 0xa8
	// Line 652, Address: 0x1a9b38, Func Offset: 0xb8
	// Line 653, Address: 0x1a9b3c, Func Offset: 0xbc
	// Line 654, Address: 0x1a9b80, Func Offset: 0x100
	// Line 655, Address: 0x1a9bd0, Func Offset: 0x150
	// Line 656, Address: 0x1a9bf4, Func Offset: 0x174
	// Line 657, Address: 0x1a9bfc, Func Offset: 0x17c
	// Line 656, Address: 0x1a9c00, Func Offset: 0x180
	// Line 657, Address: 0x1a9c04, Func Offset: 0x184
	// Line 660, Address: 0x1a9c20, Func Offset: 0x1a0
	// Line 663, Address: 0x1a9f7c, Func Offset: 0x4fc
	// Line 664, Address: 0x1a9f8c, Func Offset: 0x50c
	// Line 665, Address: 0x1a9f9c, Func Offset: 0x51c
	// Line 666, Address: 0x1a9fb0, Func Offset: 0x530
	// Line 667, Address: 0x1a9fc0, Func Offset: 0x540
	// Line 668, Address: 0x1a9fd4, Func Offset: 0x554
	// Line 673, Address: 0x1a9fe8, Func Offset: 0x568
	// Line 675, Address: 0x1a9fec, Func Offset: 0x56c
	// Line 676, Address: 0x1a9ff4, Func Offset: 0x574
	// Line 677, Address: 0x1a9ffc, Func Offset: 0x57c
	// Line 676, Address: 0x1aa000, Func Offset: 0x580
	// Line 677, Address: 0x1aa004, Func Offset: 0x584
	// Line 676, Address: 0x1aa008, Func Offset: 0x588
	// Line 677, Address: 0x1aa010, Func Offset: 0x590
	// Line 678, Address: 0x1aa018, Func Offset: 0x598
	// Line 679, Address: 0x1aa028, Func Offset: 0x5a8
	// Line 681, Address: 0x1aa02c, Func Offset: 0x5ac
	// Line 682, Address: 0x1aa034, Func Offset: 0x5b4
	// Line 683, Address: 0x1aa038, Func Offset: 0x5b8
	// Line 684, Address: 0x1aa03c, Func Offset: 0x5bc
	// Line 685, Address: 0x1aa040, Func Offset: 0x5c0
	// Line 686, Address: 0x1aa044, Func Offset: 0x5c4
	// Line 689, Address: 0x1aa050, Func Offset: 0x5d0
	// Line 691, Address: 0x1aa06c, Func Offset: 0x5ec
	// Line 692, Address: 0x1aa074, Func Offset: 0x5f4
	// Line 693, Address: 0x1aa088, Func Offset: 0x608
	// Line 694, Address: 0x1aa0a0, Func Offset: 0x620
	// Line 698, Address: 0x1aa0bc, Func Offset: 0x63c
	// Line 699, Address: 0x1aa0d0, Func Offset: 0x650
	// Line 700, Address: 0x1aa0e0, Func Offset: 0x660
	// Func End, Address: 0x1aa11c, Func Offset: 0x69c
}

// xSpline3_EvalSeg__FP8xSpline3fUiP6_xVec3
// Start address: 0x1aa120
void xSpline3_EvalSeg(xSpline3* spl, float32 u, uint32 deriv, _xVec3* o)
{
	uint32 seg;
	float32 flr;
	xCoef3 tempCoef;
	// Line 569, Address: 0x1aa120, Func Offset: 0
	// Line 574, Address: 0x1aa140, Func Offset: 0x20
	// Line 575, Address: 0x1aa15c, Func Offset: 0x3c
	// Line 576, Address: 0x1aa2bc, Func Offset: 0x19c
	// Line 582, Address: 0x1aa2c4, Func Offset: 0x1a4
	// Line 583, Address: 0x1aa2e0, Func Offset: 0x1c0
	// Line 584, Address: 0x1aa2f0, Func Offset: 0x1d0
	// Line 585, Address: 0x1aa2f8, Func Offset: 0x1d8
	// Line 584, Address: 0x1aa2fc, Func Offset: 0x1dc
	// Line 585, Address: 0x1aa300, Func Offset: 0x1e0
	// Line 587, Address: 0x1aa30c, Func Offset: 0x1ec
	// Line 586, Address: 0x1aa314, Func Offset: 0x1f4
	// Line 592, Address: 0x1aa318, Func Offset: 0x1f8
	// Line 594, Address: 0x1aa340, Func Offset: 0x220
	// Line 595, Address: 0x1aa364, Func Offset: 0x244
	// Line 597, Address: 0x1aa36c, Func Offset: 0x24c
	// Line 602, Address: 0x1aa460, Func Offset: 0x340
	// Line 603, Address: 0x1aa474, Func Offset: 0x354
	// Line 605, Address: 0x1aa47c, Func Offset: 0x35c
	// Line 610, Address: 0x1aa570, Func Offset: 0x450
	// Line 613, Address: 0x1aa584, Func Offset: 0x464
	// Func End, Address: 0x1aa5a8, Func Offset: 0x488
}

// SegBspline__FP8xSpline3f
// Start address: 0x1aa5b0
uint32 SegBspline(xSpline3* spl, float32 u)
{
	uint32 mid;
	uint32 max;
	uint32 min;
	// Line 501, Address: 0x1aa5b0, Func Offset: 0
	// Line 502, Address: 0x1aa5b4, Func Offset: 0x4
	// Line 501, Address: 0x1aa5b8, Func Offset: 0x8
	// Line 502, Address: 0x1aa5bc, Func Offset: 0xc
	// Line 503, Address: 0x1aa5c4, Func Offset: 0x14
	// Line 504, Address: 0x1aa5cc, Func Offset: 0x1c
	// Line 505, Address: 0x1aa5f4, Func Offset: 0x44
	// Line 506, Address: 0x1aa5f8, Func Offset: 0x48
	// Line 508, Address: 0x1aa608, Func Offset: 0x58
	// Func End, Address: 0x1aa610, Func Offset: 0x60
}

// BasisBspline__FPA4_fPf
// Start address: 0x1aa610
void BasisBspline(float32 N[4], float32* t)
{
	float32 Ntemp[4];
	float32 d2;
	float32 d1;
	uint32 c;
	uint32 k;
	uint32 i;
	// Line 463, Address: 0x1aa610, Func Offset: 0
	// Line 459, Address: 0x1aa630, Func Offset: 0x20
	// Line 463, Address: 0x1aa634, Func Offset: 0x24
	// Line 472, Address: 0x1aa638, Func Offset: 0x28
	// Line 473, Address: 0x1aa644, Func Offset: 0x34
	// Line 474, Address: 0x1aa660, Func Offset: 0x50
	// Line 475, Address: 0x1aa674, Func Offset: 0x64
	// Line 474, Address: 0x1aa684, Func Offset: 0x74
	// Line 475, Address: 0x1aa694, Func Offset: 0x84
	// Line 476, Address: 0x1aa6c8, Func Offset: 0xb8
	// Line 478, Address: 0x1aa700, Func Offset: 0xf0
	// Line 479, Address: 0x1aa718, Func Offset: 0x108
	// Line 481, Address: 0x1aa724, Func Offset: 0x114
	// Line 479, Address: 0x1aa72c, Func Offset: 0x11c
	// Line 480, Address: 0x1aa73c, Func Offset: 0x12c
	// Line 481, Address: 0x1aa770, Func Offset: 0x160
	// Line 482, Address: 0x1aa778, Func Offset: 0x168
	// Line 485, Address: 0x1aa77c, Func Offset: 0x16c
	// Line 486, Address: 0x1aa780, Func Offset: 0x170
	// Line 482, Address: 0x1aa784, Func Offset: 0x174
	// Line 483, Address: 0x1aa788, Func Offset: 0x178
	// Line 484, Address: 0x1aa790, Func Offset: 0x180
	// Line 485, Address: 0x1aa798, Func Offset: 0x188
	// Line 486, Address: 0x1aa7a4, Func Offset: 0x194
	// Line 487, Address: 0x1aa7c4, Func Offset: 0x1b4
	// Func End, Address: 0x1aa7cc, Func Offset: 0x1bc
}

// CoefToUnity3__FP6xCoef3P6xCoef3ff
// Start address: 0x1aa7d0
void CoefToUnity3(xCoef3* dest, xCoef3* coef, float32 t1, float32 t2)
{
	float32 dt;
	float32* o;
	float32* p;
	float32 d;
	float32 c;
	float32 b;
	uint32 i;
	// Line 425, Address: 0x1aa7d0, Func Offset: 0
	// Line 432, Address: 0x1aa7d4, Func Offset: 0x4
	// Line 433, Address: 0x1aa7d8, Func Offset: 0x8
	// Line 445, Address: 0x1aa7ec, Func Offset: 0x1c
	// Line 433, Address: 0x1aa7f0, Func Offset: 0x20
	// Line 445, Address: 0x1aa7fc, Func Offset: 0x2c
	// Line 433, Address: 0x1aa800, Func Offset: 0x30
	// Line 443, Address: 0x1aa804, Func Offset: 0x34
	// Line 433, Address: 0x1aa808, Func Offset: 0x38
	// Line 438, Address: 0x1aa858, Func Offset: 0x88
	// Line 439, Address: 0x1aa868, Func Offset: 0x98
	// Line 440, Address: 0x1aa86c, Func Offset: 0x9c
	// Line 441, Address: 0x1aa870, Func Offset: 0xa0
	// Line 445, Address: 0x1aa874, Func Offset: 0xa4
	// Line 446, Address: 0x1aa87c, Func Offset: 0xac
	// Func End, Address: 0x1aa884, Func Offset: 0xb4
}

// EvalCoef3__FP6xCoef3fUiP6_xVec3
// Start address: 0x1aa890
void EvalCoef3(xCoef3* coef, float32 u, uint32 deriv, _xVec3* o)
{
	// Line 315, Address: 0x1aa890, Func Offset: 0
	// Line 317, Address: 0x1aa8c0, Func Offset: 0x30
	// Line 318, Address: 0x1aa8ec, Func Offset: 0x5c
	// Line 319, Address: 0x1aa918, Func Offset: 0x88
	// Line 320, Address: 0x1aa940, Func Offset: 0xb0
	// Line 322, Address: 0x1aa948, Func Offset: 0xb8
	// Line 323, Address: 0x1aa978, Func Offset: 0xe8
	// Line 324, Address: 0x1aa99c, Func Offset: 0x10c
	// Line 325, Address: 0x1aa9bc, Func Offset: 0x12c
	// Line 327, Address: 0x1aa9c4, Func Offset: 0x134
	// Line 328, Address: 0x1aa9ec, Func Offset: 0x15c
	// Line 329, Address: 0x1aaa04, Func Offset: 0x174
	// Line 330, Address: 0x1aaa18, Func Offset: 0x188
	// Line 332, Address: 0x1aaa20, Func Offset: 0x190
	// Line 333, Address: 0x1aaa38, Func Offset: 0x1a8
	// Line 334, Address: 0x1aaa44, Func Offset: 0x1b4
	// Line 335, Address: 0x1aaa4c, Func Offset: 0x1bc
	// Line 338, Address: 0x1aaa54, Func Offset: 0x1c4
	// Line 339, Address: 0x1aaa58, Func Offset: 0x1c8
	// Line 342, Address: 0x1aaa5c, Func Offset: 0x1cc
	// Func End, Address: 0x1aaa64, Func Offset: 0x1d4
}

// ArcLength3__FP6xCoef3ff
// Start address: 0x1aaa70
float32 ArcLength3(xCoef3* coef, float32 ustart, float32 uend)
{
	float32 u;
	float32 sum;
	float32 h;
	float32 E;
	float32 D;
	float32 C;
	float32 B;
	float32 A;
	uint32 i;
	// Line 251, Address: 0x1aaa70, Func Offset: 0
	// Line 294, Address: 0x1aaaa4, Func Offset: 0x34
	// Line 268, Address: 0x1aaaa8, Func Offset: 0x38
	// Line 272, Address: 0x1aaac4, Func Offset: 0x54
	// Line 276, Address: 0x1aaad0, Func Offset: 0x60
	// Line 268, Address: 0x1aaad4, Func Offset: 0x64
	// Line 276, Address: 0x1aaad8, Func Offset: 0x68
	// Line 272, Address: 0x1aaadc, Func Offset: 0x6c
	// Line 276, Address: 0x1aaae0, Func Offset: 0x70
	// Line 268, Address: 0x1aaae8, Func Offset: 0x78
	// Line 272, Address: 0x1aaaec, Func Offset: 0x7c
	// Line 268, Address: 0x1aaaf0, Func Offset: 0x80
	// Line 276, Address: 0x1aaaf8, Func Offset: 0x88
	// Line 298, Address: 0x1aaafc, Func Offset: 0x8c
	// Line 276, Address: 0x1aab00, Func Offset: 0x90
	// Line 272, Address: 0x1aab04, Func Offset: 0x94
	// Line 294, Address: 0x1aab08, Func Offset: 0x98
	// Line 276, Address: 0x1aab10, Func Offset: 0xa0
	// Line 294, Address: 0x1aab14, Func Offset: 0xa4
	// Line 272, Address: 0x1aab18, Func Offset: 0xa8
	// Line 276, Address: 0x1aab24, Func Offset: 0xb4
	// Line 283, Address: 0x1aab44, Func Offset: 0xd4
	// Line 287, Address: 0x1aab48, Func Offset: 0xd8
	// Line 276, Address: 0x1aab4c, Func Offset: 0xdc
	// Line 283, Address: 0x1aab50, Func Offset: 0xe0
	// Line 276, Address: 0x1aab54, Func Offset: 0xe4
	// Line 283, Address: 0x1aab5c, Func Offset: 0xec
	// Line 287, Address: 0x1aab64, Func Offset: 0xf4
	// Line 272, Address: 0x1aab6c, Func Offset: 0xfc
	// Line 283, Address: 0x1aab70, Func Offset: 0x100
	// Line 296, Address: 0x1aab74, Func Offset: 0x104
	// Line 295, Address: 0x1aab78, Func Offset: 0x108
	// Line 287, Address: 0x1aab80, Func Offset: 0x110
	// Line 299, Address: 0x1aab84, Func Offset: 0x114
	// Line 300, Address: 0x1aabcc, Func Offset: 0x15c
	// Line 302, Address: 0x1aac08, Func Offset: 0x198
	// Line 303, Address: 0x1aac18, Func Offset: 0x1a8
	// Line 304, Address: 0x1aac6c, Func Offset: 0x1fc
	// Line 303, Address: 0x1aac74, Func Offset: 0x204
	// Line 304, Address: 0x1aac78, Func Offset: 0x208
	// Line 303, Address: 0x1aac88, Func Offset: 0x218
	// Line 304, Address: 0x1aac8c, Func Offset: 0x21c
	// Line 303, Address: 0x1aac90, Func Offset: 0x220
	// Line 304, Address: 0x1aac94, Func Offset: 0x224
	// Func End, Address: 0x1aacb0, Func Offset: 0x240
}

// Interpolate_Bspline__FP6_xVec3P6_xVec3PfUi
// Start address: 0x1aacb0
void Interpolate_Bspline(_xVec3* data, _xVec3* control, float32* knots, uint32 nodata)
{
	float32 t5;
	float32 t4;
	float32 t3;
	float32 t2;
	float32 t1;
	float32* gamma;
	float32* beta;
	float32* alpha;
	uint32 i;
	// Line 206, Address: 0x1aacb0, Func Offset: 0
	// Line 211, Address: 0x1aacd8, Func Offset: 0x28
	// Line 212, Address: 0x1aacf8, Func Offset: 0x48
	// Line 213, Address: 0x1aad04, Func Offset: 0x54
	// Line 215, Address: 0x1aad0c, Func Offset: 0x5c
	// Line 216, Address: 0x1aad1c, Func Offset: 0x6c
	// Line 215, Address: 0x1aad24, Func Offset: 0x74
	// Line 216, Address: 0x1aad28, Func Offset: 0x78
	// Line 217, Address: 0x1aad30, Func Offset: 0x80
	// Line 216, Address: 0x1aad34, Func Offset: 0x84
	// Line 217, Address: 0x1aad38, Func Offset: 0x88
	// Line 213, Address: 0x1aad3c, Func Offset: 0x8c
	// Line 217, Address: 0x1aad40, Func Offset: 0x90
	// Line 219, Address: 0x1aad44, Func Offset: 0x94
	// Line 233, Address: 0x1aad68, Func Offset: 0xb8
	// Line 223, Address: 0x1aad6c, Func Offset: 0xbc
	// Line 224, Address: 0x1aad70, Func Offset: 0xc0
	// Line 221, Address: 0x1aad74, Func Offset: 0xc4
	// Line 222, Address: 0x1aad78, Func Offset: 0xc8
	// Line 225, Address: 0x1aad7c, Func Offset: 0xcc
	// Line 233, Address: 0x1aad80, Func Offset: 0xd0
	// Line 227, Address: 0x1aad88, Func Offset: 0xd8
	// Line 232, Address: 0x1aad8c, Func Offset: 0xdc
	// Line 227, Address: 0x1aad90, Func Offset: 0xe0
	// Line 228, Address: 0x1aada0, Func Offset: 0xf0
	// Line 229, Address: 0x1aadbc, Func Offset: 0x10c
	// Line 228, Address: 0x1aadc0, Func Offset: 0x110
	// Line 229, Address: 0x1aadc8, Func Offset: 0x118
	// Line 228, Address: 0x1aadcc, Func Offset: 0x11c
	// Line 229, Address: 0x1aadd0, Func Offset: 0x120
	// Line 230, Address: 0x1aadd4, Func Offset: 0x124
	// Line 231, Address: 0x1aade4, Func Offset: 0x134
	// Line 232, Address: 0x1aade8, Func Offset: 0x138
	// Line 231, Address: 0x1aadec, Func Offset: 0x13c
	// Line 232, Address: 0x1aadf4, Func Offset: 0x144
	// Line 233, Address: 0x1aae08, Func Offset: 0x158
	// Line 236, Address: 0x1aae10, Func Offset: 0x160
	// Line 238, Address: 0x1aae2c, Func Offset: 0x17c
	// Line 239, Address: 0x1aae30, Func Offset: 0x180
	// Line 241, Address: 0x1aae40, Func Offset: 0x190
	// Line 238, Address: 0x1aae44, Func Offset: 0x194
	// Line 239, Address: 0x1aae58, Func Offset: 0x1a8
	// Line 241, Address: 0x1aae6c, Func Offset: 0x1bc
	// Line 242, Address: 0x1aae74, Func Offset: 0x1c4
	// Line 243, Address: 0x1aae7c, Func Offset: 0x1cc
	// Line 244, Address: 0x1aae84, Func Offset: 0x1d4
	// Func End, Address: 0x1aaeb0, Func Offset: 0x200
}

// Tridiag_Solve__FPfPfPfP6_xVec3P6_xVec3i
// Start address: 0x1aaeb0
void Tridiag_Solve(float32* a, float32* b, float32* c, _xVec3* d, _xVec3* x, int32 n)
{
	_xVec3* delta;
	float32* gamma;
	float32 beta;
	int32 j;
	// Line 98, Address: 0x1aaeb0, Func Offset: 0
	// Line 103, Address: 0x1aaeec, Func Offset: 0x3c
	// Line 104, Address: 0x1aaefc, Func Offset: 0x4c
	// Line 107, Address: 0x1aaf0c, Func Offset: 0x5c
	// Line 104, Address: 0x1aaf14, Func Offset: 0x64
	// Line 109, Address: 0x1aaf18, Func Offset: 0x68
	// Line 107, Address: 0x1aaf1c, Func Offset: 0x6c
	// Line 108, Address: 0x1aaf24, Func Offset: 0x74
	// Line 109, Address: 0x1aaf54, Func Offset: 0xa4
	// Line 111, Address: 0x1aaf78, Func Offset: 0xc8
	// Line 113, Address: 0x1aaf80, Func Offset: 0xd0
	// Line 111, Address: 0x1aaf84, Func Offset: 0xd4
	// Line 112, Address: 0x1aaf88, Func Offset: 0xd8
	// Line 113, Address: 0x1aaf8c, Func Offset: 0xdc
	// Line 111, Address: 0x1aaf94, Func Offset: 0xe4
	// Line 113, Address: 0x1aaf98, Func Offset: 0xe8
	// Line 114, Address: 0x1aafa0, Func Offset: 0xf0
	// Line 113, Address: 0x1aafa4, Func Offset: 0xf4
	// Line 111, Address: 0x1aafa8, Func Offset: 0xf8
	// Line 113, Address: 0x1aafac, Func Offset: 0xfc
	// Line 114, Address: 0x1aafb4, Func Offset: 0x104
	// Line 112, Address: 0x1aafb8, Func Offset: 0x108
	// Line 113, Address: 0x1aafc0, Func Offset: 0x110
	// Line 114, Address: 0x1ab024, Func Offset: 0x174
	// Line 117, Address: 0x1ab030, Func Offset: 0x180
	// Line 118, Address: 0x1ab050, Func Offset: 0x1a0
	// Line 117, Address: 0x1ab054, Func Offset: 0x1a4
	// Line 118, Address: 0x1ab068, Func Offset: 0x1b8
	// Line 120, Address: 0x1ab08c, Func Offset: 0x1dc
	// Line 121, Address: 0x1ab0b0, Func Offset: 0x200
	// Line 120, Address: 0x1ab0b4, Func Offset: 0x204
	// Line 121, Address: 0x1ab0f8, Func Offset: 0x248
	// Line 123, Address: 0x1ab100, Func Offset: 0x250
	// Line 124, Address: 0x1ab108, Func Offset: 0x258
	// Line 125, Address: 0x1ab110, Func Offset: 0x260
	// Func End, Address: 0x1ab13c, Func Offset: 0x28c
}

