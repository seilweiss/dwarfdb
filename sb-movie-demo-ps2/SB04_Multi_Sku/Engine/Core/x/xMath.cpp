



void eval_linear(float32 t, float32* value);
void reset(uint32 values, void* curve, uint32 nodes);
void xFuncPiece_ShiftPiece(xFuncPiece* shift, xFuncPiece* func, float32 newZero);
void xFuncPiece_EndPoints(xFuncPiece* func, float32 pi, float32 pf, float32 fi, float32 ff);
void xAccelStop(float32& x, float32& v, float32 a, float32 dt);
void xAccelMove(float32& x, float32& v, float32 a, float32 dt, float32 maxv);
void xAccelMove(float32& x, float32& v, float32 a, float32 dt, float32 endx, float32 maxv);
void xBinomInit();
float32 xDangleClamp(float32 a);
float32 xAngleClampFast(float32 a);
float32 xAngleClamp(float32 a);
uint32 xMathSolveCubic(float32 a, float32 b, float32 c, float32 d, float32* x1, float32* x2, float32* x3);
uint32 xMathSolveQuadratic(float32 a, float32 b, float32 c, float32* x1, float32* x2);
float32 xatof(int8* x);
void xMathInit();

// eval_linear__14xResponseCurveCFfPf
// Start address: 0x40f7e0
void xResponseCurve::eval_linear(float32 t, float32* value)
{
	float32* end;
	uint32 stride;
	inode& n1;
	inode& n2;
	float32 dt;
	float32* v1;
	float32 u;
	float32* v1;
	float32* v2;
	// Line 1154, Address: 0x40f7e0, Func Offset: 0
	// Line 1161, Address: 0x40f7e4, Func Offset: 0x4
	// Line 1160, Address: 0x40f7f0, Func Offset: 0x10
	// Line 1159, Address: 0x40f7f4, Func Offset: 0x14
	// Line 1161, Address: 0x40f7f8, Func Offset: 0x18
	// Line 1162, Address: 0x40f868, Func Offset: 0x88
	// Line 1167, Address: 0x40f870, Func Offset: 0x90
	// Line 1162, Address: 0x40f87c, Func Offset: 0x9c
	// Line 1163, Address: 0x40f884, Func Offset: 0xa4
	// Line 1164, Address: 0x40f88c, Func Offset: 0xac
	// Line 1167, Address: 0x40f894, Func Offset: 0xb4
	// Line 1170, Address: 0x40f8bc, Func Offset: 0xdc
	// Line 1171, Address: 0x40f8c4, Func Offset: 0xe4
	// Line 1176, Address: 0x40f8e8, Func Offset: 0x108
	// Line 1177, Address: 0x40f8ec, Func Offset: 0x10c
	// Line 1176, Address: 0x40f8f4, Func Offset: 0x114
	// Line 1178, Address: 0x40f900, Func Offset: 0x120
	// Line 1179, Address: 0x40f908, Func Offset: 0x128
	// Line 1178, Address: 0x40f90c, Func Offset: 0x12c
	// Line 1179, Address: 0x40f910, Func Offset: 0x130
	// Line 1180, Address: 0x40f934, Func Offset: 0x154
	// Func End, Address: 0x40f93c, Func Offset: 0x15c
}

// reset__14xResponseCurveFUiPCvUi
// Start address: 0x40f940
void xResponseCurve::reset(uint32 values, void* curve, uint32 nodes)
{
	// Line 1146, Address: 0x40f940, Func Offset: 0
	// Line 1147, Address: 0x40f944, Func Offset: 0x4
	// Line 1148, Address: 0x40f948, Func Offset: 0x8
	// Line 1151, Address: 0x40f94c, Func Offset: 0xc
	// Func End, Address: 0x40f954, Func Offset: 0x14
}

// xFuncPiece_ShiftPiece__FP10xFuncPieceP10xFuncPiecef
// Start address: 0x40f960
void xFuncPiece_ShiftPiece(xFuncPiece* shift, xFuncPiece* func, float32 newZero)
{
	int32 i;
	int32 j;
	xFuncPiece temp;
	// Line 1092, Address: 0x40f960, Func Offset: 0
	// Line 1099, Address: 0x40f964, Func Offset: 0x4
	// Line 1101, Address: 0x40fa1c, Func Offset: 0xbc
	// Line 1102, Address: 0x40fa2c, Func Offset: 0xcc
	// Line 1105, Address: 0x40fa48, Func Offset: 0xe8
	// Line 1102, Address: 0x40fa4c, Func Offset: 0xec
	// Line 1104, Address: 0x40fa50, Func Offset: 0xf0
	// Line 1106, Address: 0x40fa54, Func Offset: 0xf4
	// Line 1105, Address: 0x40fad8, Func Offset: 0x178
	// Line 1106, Address: 0x40fae0, Func Offset: 0x180
	// Line 1105, Address: 0x40faec, Func Offset: 0x18c
	// Line 1106, Address: 0x40faf4, Func Offset: 0x194
	// Line 1105, Address: 0x40fb00, Func Offset: 0x1a0
	// Line 1106, Address: 0x40fb08, Func Offset: 0x1a8
	// Line 1105, Address: 0x40fb14, Func Offset: 0x1b4
	// Line 1106, Address: 0x40fb1c, Func Offset: 0x1bc
	// Line 1105, Address: 0x40fb28, Func Offset: 0x1c8
	// Line 1106, Address: 0x40fb30, Func Offset: 0x1d0
	// Line 1105, Address: 0x40fb3c, Func Offset: 0x1dc
	// Line 1106, Address: 0x40fb44, Func Offset: 0x1e4
	// Line 1105, Address: 0x40fb50, Func Offset: 0x1f0
	// Line 1106, Address: 0x40fb58, Func Offset: 0x1f8
	// Line 1105, Address: 0x40fb64, Func Offset: 0x204
	// Line 1106, Address: 0x40fb6c, Func Offset: 0x20c
	// Line 1105, Address: 0x40fb9c, Func Offset: 0x23c
	// Line 1106, Address: 0x40fba4, Func Offset: 0x244
	// Line 1109, Address: 0x40fbb8, Func Offset: 0x258
	// Line 1108, Address: 0x40fbbc, Func Offset: 0x25c
	// Line 1109, Address: 0x40fbd0, Func Offset: 0x270
	// Line 1111, Address: 0x40fbd8, Func Offset: 0x278
	// Line 1112, Address: 0x40fbe0, Func Offset: 0x280
	// Line 1113, Address: 0x40fbf8, Func Offset: 0x298
	// Line 1114, Address: 0x40fbfc, Func Offset: 0x29c
	// Line 1113, Address: 0x40fc00, Func Offset: 0x2a0
	// Line 1114, Address: 0x40fc08, Func Offset: 0x2a8
	// Line 1115, Address: 0x40fc30, Func Offset: 0x2d0
	// Line 1116, Address: 0x40fc3c, Func Offset: 0x2dc
	// Func End, Address: 0x40fc44, Func Offset: 0x2e4
}

// xFuncPiece_EndPoints__FP10xFuncPieceffff
// Start address: 0x40fc50
void xFuncPiece_EndPoints(xFuncPiece* func, float32 pi, float32 pf, float32 fi, float32 ff)
{
	float32 xfinv;
	// Line 1001, Address: 0x40fc50, Func Offset: 0
	// Line 1002, Address: 0x40fc54, Func Offset: 0x4
	// Line 1004, Address: 0x40fc58, Func Offset: 0x8
	// Line 1008, Address: 0x40fc5c, Func Offset: 0xc
	// Line 1001, Address: 0x40fc60, Func Offset: 0x10
	// Line 1002, Address: 0x40fc64, Func Offset: 0x14
	// Line 1006, Address: 0x40fc6c, Func Offset: 0x1c
	// Line 1002, Address: 0x40fc70, Func Offset: 0x20
	// Line 1004, Address: 0x40fc74, Func Offset: 0x24
	// Line 1006, Address: 0x40fc78, Func Offset: 0x28
	// Line 1005, Address: 0x40fc7c, Func Offset: 0x2c
	// Line 1008, Address: 0x40fc80, Func Offset: 0x30
	// Func End, Address: 0x40fc8c, Func Offset: 0x3c
}

// xAccelStop__FRfRfff
// Start address: 0x40fc90
void xAccelStop(float32& x, float32& v, float32 a, float32 dt)
{
	float32 oldv;
	// Line 887, Address: 0x40fc90, Func Offset: 0
	// Line 888, Address: 0x40fc94, Func Offset: 0x4
	// Line 887, Address: 0x40fc98, Func Offset: 0x8
	// Line 888, Address: 0x40fc9c, Func Offset: 0xc
	// Line 890, Address: 0x40fcd0, Func Offset: 0x40
	// Line 891, Address: 0x40fcd4, Func Offset: 0x44
	// Line 890, Address: 0x40fcd8, Func Offset: 0x48
	// Line 892, Address: 0x40fce0, Func Offset: 0x50
	// Line 890, Address: 0x40fce8, Func Offset: 0x58
	// Line 891, Address: 0x40fd00, Func Offset: 0x70
	// Line 892, Address: 0x40fd04, Func Offset: 0x74
	// Line 893, Address: 0x40fd08, Func Offset: 0x78
	// Line 892, Address: 0x40fd0c, Func Offset: 0x7c
	// Line 893, Address: 0x40fd14, Func Offset: 0x84
	// Line 892, Address: 0x40fd18, Func Offset: 0x88
	// Line 893, Address: 0x40fd1c, Func Offset: 0x8c
	// Line 898, Address: 0x40fd2c, Func Offset: 0x9c
	// Line 899, Address: 0x40fd60, Func Offset: 0xd0
	// Line 901, Address: 0x40fd64, Func Offset: 0xd4
	// Line 893, Address: 0x40fd70, Func Offset: 0xe0
	// Line 901, Address: 0x40fd74, Func Offset: 0xe4
	// Line 893, Address: 0x40fd78, Func Offset: 0xe8
	// Line 901, Address: 0x40fd98, Func Offset: 0x108
	// Line 898, Address: 0x40fd9c, Func Offset: 0x10c
	// Line 901, Address: 0x40fda4, Func Offset: 0x114
	// Line 898, Address: 0x40fda8, Func Offset: 0x118
	// Line 901, Address: 0x40fdc4, Func Offset: 0x134
	// Func End, Address: 0x40fdd0, Func Offset: 0x140
}

// xAccelMove__FRfRffff
// Start address: 0x40fdd0
void xAccelMove(float32& x, float32& v, float32 a, float32 dt, float32 maxv)
{
	float32 diff;
	float32 dv;
	// Line 781, Address: 0x40fdd0, Func Offset: 0
	// Line 782, Address: 0x40fdd4, Func Offset: 0x4
	// Line 781, Address: 0x40fdd8, Func Offset: 0x8
	// Line 782, Address: 0x40fddc, Func Offset: 0xc
	// Line 783, Address: 0x40fdf0, Func Offset: 0x20
	// Line 785, Address: 0x40fdf4, Func Offset: 0x24
	// Line 783, Address: 0x40fdf8, Func Offset: 0x28
	// Line 786, Address: 0x40fe18, Func Offset: 0x48
	// Line 785, Address: 0x40fe1c, Func Offset: 0x4c
	// Line 787, Address: 0x40fe20, Func Offset: 0x50
	// Line 785, Address: 0x40fe24, Func Offset: 0x54
	// Line 787, Address: 0x40fe28, Func Offset: 0x58
	// Line 789, Address: 0x40fe38, Func Offset: 0x68
	// Line 791, Address: 0x40fe68, Func Offset: 0x98
	// Line 794, Address: 0x40fe70, Func Offset: 0xa0
	// Line 795, Address: 0x40fe90, Func Offset: 0xc0
	// Line 827, Address: 0x40fe9c, Func Offset: 0xcc
	// Line 782, Address: 0x40fea8, Func Offset: 0xd8
	// Line 827, Address: 0x40feac, Func Offset: 0xdc
	// Line 782, Address: 0x40feb0, Func Offset: 0xe0
	// Line 827, Address: 0x40febc, Func Offset: 0xec
	// Line 782, Address: 0x40fec0, Func Offset: 0xf0
	// Line 827, Address: 0x40fecc, Func Offset: 0xfc
	// Func End, Address: 0x40fed4, Func Offset: 0x104
}

// xAccelMove__FRfRfffff
// Start address: 0x40fee0
void xAccelMove(float32& x, float32& v, float32 a, float32 dt, float32 endx, float32 maxv)
{
	float32 offset;
	float32 oldv;
	float32 dv;
	float32 newv;
	float32 adx;
	float32 diff;
	float32 dx;
	// Line 651, Address: 0x40fee0, Func Offset: 0
	// Line 655, Address: 0x40fee4, Func Offset: 0x4
	// Line 651, Address: 0x40fee8, Func Offset: 0x8
	// Line 655, Address: 0x40feec, Func Offset: 0xc
	// Line 651, Address: 0x40fef0, Func Offset: 0x10
	// Line 655, Address: 0x40fef4, Func Offset: 0x14
	// Line 651, Address: 0x40fef8, Func Offset: 0x18
	// Line 652, Address: 0x40ff1c, Func Offset: 0x3c
	// Line 655, Address: 0x40ff34, Func Offset: 0x54
	// Line 657, Address: 0x40ffa0, Func Offset: 0xc0
	// Line 659, Address: 0x40ffb4, Func Offset: 0xd4
	// Line 660, Address: 0x40ffcc, Func Offset: 0xec
	// Line 665, Address: 0x40fff4, Func Offset: 0x114
	// Line 664, Address: 0x40fff8, Func Offset: 0x118
	// Line 665, Address: 0x40fffc, Func Offset: 0x11c
	// Line 667, Address: 0x410000, Func Offset: 0x120
	// Line 663, Address: 0x410004, Func Offset: 0x124
	// Line 667, Address: 0x410008, Func Offset: 0x128
	// Line 664, Address: 0x41000c, Func Offset: 0x12c
	// Line 667, Address: 0x410010, Func Offset: 0x130
	// Line 668, Address: 0x410018, Func Offset: 0x138
	// Line 681, Address: 0x41002c, Func Offset: 0x14c
	// Line 682, Address: 0x410048, Func Offset: 0x168
	// Line 685, Address: 0x41004c, Func Offset: 0x16c
	// Line 686, Address: 0x410050, Func Offset: 0x170
	// Line 685, Address: 0x410054, Func Offset: 0x174
	// Line 686, Address: 0x41005c, Func Offset: 0x17c
	// Line 688, Address: 0x410064, Func Offset: 0x184
	// Line 689, Address: 0x410098, Func Offset: 0x1b8
	// Line 690, Address: 0x41009c, Func Offset: 0x1bc
	// Line 693, Address: 0x4100a4, Func Offset: 0x1c4
	// Line 694, Address: 0x4100c0, Func Offset: 0x1e0
	// Line 697, Address: 0x4100c8, Func Offset: 0x1e8
	// Line 698, Address: 0x4100d4, Func Offset: 0x1f4
	// Line 667, Address: 0x4100dc, Func Offset: 0x1fc
	// Line 698, Address: 0x4100e4, Func Offset: 0x204
	// Line 667, Address: 0x4100e8, Func Offset: 0x208
	// Line 698, Address: 0x4100f4, Func Offset: 0x214
	// Line 671, Address: 0x4100fc, Func Offset: 0x21c
	// Line 698, Address: 0x410100, Func Offset: 0x220
	// Line 673, Address: 0x410108, Func Offset: 0x228
	// Line 674, Address: 0x41010c, Func Offset: 0x22c
	// Line 675, Address: 0x41012c, Func Offset: 0x24c
	// Line 678, Address: 0x410134, Func Offset: 0x254
	// Line 680, Address: 0x410138, Func Offset: 0x258
	// Line 681, Address: 0x410140, Func Offset: 0x260
	// Line 698, Address: 0x410144, Func Offset: 0x264
	// Line 681, Address: 0x410148, Func Offset: 0x268
	// Line 698, Address: 0x410154, Func Offset: 0x274
	// Func End, Address: 0x410180, Func Offset: 0x2a0
}

// xBinomInit__Fv
// Start address: 0x410180
void xBinomInit()
{
	int32* row0;
	int32* row1;
	int32 i;
	int32* col00;
	int32* col01;
	int32* col1;
	// Line 633, Address: 0x410180, Func Offset: 0
	// Line 632, Address: 0x410188, Func Offset: 0x8
	// Line 633, Address: 0x410190, Func Offset: 0x10
	// Line 632, Address: 0x410194, Func Offset: 0x14
	// Line 633, Address: 0x410198, Func Offset: 0x18
	// Line 636, Address: 0x4101a0, Func Offset: 0x20
	// Line 634, Address: 0x4101a4, Func Offset: 0x24
	// Line 638, Address: 0x4101a8, Func Offset: 0x28
	// Line 636, Address: 0x4101ac, Func Offset: 0x2c
	// Line 640, Address: 0x4101b0, Func Offset: 0x30
	// Line 637, Address: 0x4101b4, Func Offset: 0x34
	// Line 640, Address: 0x4101b8, Func Offset: 0x38
	// Line 639, Address: 0x41029c, Func Offset: 0x11c
	// Line 640, Address: 0x4102a0, Func Offset: 0x120
	// Line 642, Address: 0x4102c8, Func Offset: 0x148
	// Line 641, Address: 0x4102cc, Func Offset: 0x14c
	// Line 642, Address: 0x4102d0, Func Offset: 0x150
	// Line 643, Address: 0x4102d4, Func Offset: 0x154
	// Line 642, Address: 0x4102d8, Func Offset: 0x158
	// Line 643, Address: 0x4102dc, Func Offset: 0x15c
	// Line 644, Address: 0x4102e4, Func Offset: 0x164
	// Func End, Address: 0x4102ec, Func Offset: 0x16c
}

// xDangleClamp__Ff
// Start address: 0x4102f0
float32 xDangleClamp(float32 a)
{
	float32 b;
	// Line 606, Address: 0x4102f0, Func Offset: 0
	// Line 607, Address: 0x4102f4, Func Offset: 0x4
	// Line 606, Address: 0x4102fc, Func Offset: 0xc
	// Line 607, Address: 0x410300, Func Offset: 0x10
	// Line 608, Address: 0x41030c, Func Offset: 0x1c
	// Line 610, Address: 0x410328, Func Offset: 0x38
	// Line 611, Address: 0x410344, Func Offset: 0x54
	// Line 613, Address: 0x410358, Func Offset: 0x68
	// Line 609, Address: 0x410360, Func Offset: 0x70
	// Line 610, Address: 0x41036c, Func Offset: 0x7c
	// Line 614, Address: 0x410374, Func Offset: 0x84
	// Func End, Address: 0x410380, Func Offset: 0x90
}

// xAngleClampFast__Ff
// Start address: 0x410380
float32 xAngleClampFast(float32 a)
{
	// Line 589, Address: 0x410380, Func Offset: 0
	// Line 591, Address: 0x410394, Func Offset: 0x14
	// Line 592, Address: 0x4103b0, Func Offset: 0x30
	// Line 594, Address: 0x4103b4, Func Offset: 0x34
	// Line 590, Address: 0x4103bc, Func Offset: 0x3c
	// Line 591, Address: 0x4103c4, Func Offset: 0x44
	// Line 595, Address: 0x4103cc, Func Offset: 0x4c
	// Func End, Address: 0x4103d4, Func Offset: 0x54
}

// xAngleClamp__Ff
// Start address: 0x4103e0
float32 xAngleClamp(float32 a)
{
	float32 b;
	// Line 577, Address: 0x4103e0, Func Offset: 0
	// Line 578, Address: 0x4103e4, Func Offset: 0x4
	// Line 577, Address: 0x4103ec, Func Offset: 0xc
	// Line 578, Address: 0x4103f0, Func Offset: 0x10
	// Line 579, Address: 0x4103fc, Func Offset: 0x1c
	// Line 580, Address: 0x410410, Func Offset: 0x30
	// Line 583, Address: 0x410420, Func Offset: 0x40
	// Func End, Address: 0x41042c, Func Offset: 0x4c
}

// xMathSolveCubic__FffffPfPfPf
// Start address: 0x410430
uint32 xMathSolveCubic(float32 a, float32 b, float32 c, float32 d, float32* x1, float32* x2, float32* x3)
{
	float32 arecip;
	float32 fA;
	float32 fB;
	float32 fOffset;
	float32 fDiscr;
	float32 fHalfB;
	float32 fTemp;
	float32 fAngle;
	// Line 433, Address: 0x410430, Func Offset: 0
	// Line 435, Address: 0x410438, Func Offset: 0x8
	// Line 433, Address: 0x41043c, Func Offset: 0xc
	// Line 435, Address: 0x410444, Func Offset: 0x14
	// Line 433, Address: 0x410448, Func Offset: 0x18
	// Line 435, Address: 0x410460, Func Offset: 0x30
	// Line 440, Address: 0x410468, Func Offset: 0x38
	// Line 441, Address: 0x410480, Func Offset: 0x50
	// Line 442, Address: 0x41048c, Func Offset: 0x5c
	// Line 443, Address: 0x410490, Func Offset: 0x60
	// Line 457, Address: 0x41049c, Func Offset: 0x6c
	// Line 473, Address: 0x4104b0, Func Offset: 0x80
	// Line 485, Address: 0x4104bc, Func Offset: 0x8c
	// Line 486, Address: 0x4104c8, Func Offset: 0x98
	// Line 488, Address: 0x4104e4, Func Offset: 0xb4
	// Line 489, Address: 0x4104f4, Func Offset: 0xc4
	// Line 491, Address: 0x4104f8, Func Offset: 0xc8
	// Line 489, Address: 0x4104fc, Func Offset: 0xcc
	// Line 490, Address: 0x410500, Func Offset: 0xd0
	// Line 489, Address: 0x410504, Func Offset: 0xd4
	// Line 490, Address: 0x410510, Func Offset: 0xe0
	// Line 491, Address: 0x410514, Func Offset: 0xe4
	// Line 436, Address: 0x41051c, Func Offset: 0xec
	// Line 491, Address: 0x410524, Func Offset: 0xf4
	// Line 436, Address: 0x41052c, Func Offset: 0xfc
	// Line 449, Address: 0x410534, Func Offset: 0x104
	// Line 450, Address: 0x410544, Func Offset: 0x114
	// Line 455, Address: 0x410558, Func Offset: 0x128
	// Line 450, Address: 0x41055c, Func Offset: 0x12c
	// Line 453, Address: 0x410560, Func Offset: 0x130
	// Line 452, Address: 0x410564, Func Offset: 0x134
	// Line 455, Address: 0x410568, Func Offset: 0x138
	// Line 449, Address: 0x41056c, Func Offset: 0x13c
	// Line 450, Address: 0x410578, Func Offset: 0x148
	// Line 451, Address: 0x41057c, Func Offset: 0x14c
	// Line 450, Address: 0x410580, Func Offset: 0x150
	// Line 453, Address: 0x4105a4, Func Offset: 0x174
	// Line 452, Address: 0x4105a8, Func Offset: 0x178
	// Line 453, Address: 0x4105b0, Func Offset: 0x180
	// Line 452, Address: 0x4105b4, Func Offset: 0x184
	// Line 455, Address: 0x4105c8, Func Offset: 0x198
	// Line 491, Address: 0x4105cc, Func Offset: 0x19c
	// Line 455, Address: 0x4105d0, Func Offset: 0x1a0
	// Line 450, Address: 0x4105d4, Func Offset: 0x1a4
	// Line 491, Address: 0x4105d8, Func Offset: 0x1a8
	// Line 460, Address: 0x4105f8, Func Offset: 0x1c8
	// Line 461, Address: 0x4105fc, Func Offset: 0x1cc
	// Line 491, Address: 0x410600, Func Offset: 0x1d0
	// Line 462, Address: 0x410608, Func Offset: 0x1d8
	// Line 491, Address: 0x410614, Func Offset: 0x1e4
	// Line 462, Address: 0x41061c, Func Offset: 0x1ec
	// Line 464, Address: 0x410624, Func Offset: 0x1f4
	// Line 491, Address: 0x41062c, Func Offset: 0x1fc
	// Line 464, Address: 0x410634, Func Offset: 0x204
	// Line 491, Address: 0x410638, Func Offset: 0x208
	// Line 465, Address: 0x41063c, Func Offset: 0x20c
	// Line 466, Address: 0x410640, Func Offset: 0x210
	// Line 491, Address: 0x41064c, Func Offset: 0x21c
	// Line 467, Address: 0x410654, Func Offset: 0x224
	// Line 491, Address: 0x410660, Func Offset: 0x230
	// Line 467, Address: 0x41066c, Func Offset: 0x23c
	// Line 469, Address: 0x410678, Func Offset: 0x248
	// Line 491, Address: 0x410680, Func Offset: 0x250
	// Line 469, Address: 0x41068c, Func Offset: 0x25c
	// Line 491, Address: 0x410690, Func Offset: 0x260
	// Line 471, Address: 0x410698, Func Offset: 0x268
	// Line 470, Address: 0x41069c, Func Offset: 0x26c
	// Line 471, Address: 0x4106a0, Func Offset: 0x270
	// Line 476, Address: 0x4106a8, Func Offset: 0x278
	// Line 475, Address: 0x4106ac, Func Offset: 0x27c
	// Line 491, Address: 0x4106b0, Func Offset: 0x280
	// Line 475, Address: 0x4106b4, Func Offset: 0x284
	// Line 491, Address: 0x4106c4, Func Offset: 0x294
	// Line 476, Address: 0x4106cc, Func Offset: 0x29c
	// Line 491, Address: 0x4106d0, Func Offset: 0x2a0
	// Line 476, Address: 0x4106d8, Func Offset: 0x2a8
	// Line 491, Address: 0x4106e4, Func Offset: 0x2b4
	// Line 476, Address: 0x4106ec, Func Offset: 0x2bc
	// Line 491, Address: 0x410700, Func Offset: 0x2d0
	// Line 476, Address: 0x410708, Func Offset: 0x2d8
	// Line 491, Address: 0x410720, Func Offset: 0x2f0
	// Line 478, Address: 0x410728, Func Offset: 0x2f8
	// Line 491, Address: 0x41072c, Func Offset: 0x2fc
	// Line 479, Address: 0x410738, Func Offset: 0x308
	// Line 482, Address: 0x41074c, Func Offset: 0x31c
	// Line 479, Address: 0x410750, Func Offset: 0x320
	// Line 491, Address: 0x41075c, Func Offset: 0x32c
	// Line 480, Address: 0x410760, Func Offset: 0x330
	// Line 481, Address: 0x410768, Func Offset: 0x338
	// Line 480, Address: 0x41076c, Func Offset: 0x33c
	// Line 481, Address: 0x410770, Func Offset: 0x340
	// Line 480, Address: 0x410774, Func Offset: 0x344
	// Line 481, Address: 0x410778, Func Offset: 0x348
	// Line 491, Address: 0x41077c, Func Offset: 0x34c
	// Line 482, Address: 0x410780, Func Offset: 0x350
	// Line 476, Address: 0x410788, Func Offset: 0x358
	// Line 493, Address: 0x410798, Func Offset: 0x368
	// Func End, Address: 0x4107bc, Func Offset: 0x38c
}

// xMathSolveQuadratic__FfffPfPf
// Start address: 0x4107c0
uint32 xMathSolveQuadratic(float32 a, float32 b, float32 c, float32* x1, float32* x2)
{
	float32 d;
	float32 dx;
	float32 p;
	// Line 387, Address: 0x4107c0, Func Offset: 0
	// Line 395, Address: 0x4107d4, Func Offset: 0x14
	// Line 396, Address: 0x4107ec, Func Offset: 0x2c
	// Line 399, Address: 0x4107f8, Func Offset: 0x38
	// Line 400, Address: 0x410800, Func Offset: 0x40
	// Line 399, Address: 0x410804, Func Offset: 0x44
	// Line 401, Address: 0x41080c, Func Offset: 0x4c
	// Line 399, Address: 0x410810, Func Offset: 0x50
	// Line 400, Address: 0x41081c, Func Offset: 0x5c
	// Line 401, Address: 0x410820, Func Offset: 0x60
	// Line 406, Address: 0x410828, Func Offset: 0x68
	// Line 405, Address: 0x41082c, Func Offset: 0x6c
	// Line 404, Address: 0x410838, Func Offset: 0x78
	// Line 406, Address: 0x41083c, Func Offset: 0x7c
	// Line 407, Address: 0x410844, Func Offset: 0x84
	// Line 408, Address: 0x410850, Func Offset: 0x90
	// Line 409, Address: 0x410858, Func Offset: 0x98
	// Line 410, Address: 0x410860, Func Offset: 0xa0
	// Line 411, Address: 0x41086c, Func Offset: 0xac
	// Line 413, Address: 0x410878, Func Offset: 0xb8
	// Line 388, Address: 0x410880, Func Offset: 0xc0
	// Line 413, Address: 0x410884, Func Offset: 0xc4
	// Line 392, Address: 0x41088c, Func Offset: 0xcc
	// Line 393, Address: 0x410890, Func Offset: 0xd0
	// Line 392, Address: 0x410894, Func Offset: 0xd4
	// Line 393, Address: 0x4108a0, Func Offset: 0xe0
	// Line 389, Address: 0x4108a8, Func Offset: 0xe8
	// Line 397, Address: 0x4108b0, Func Offset: 0xf0
	// Line 402, Address: 0x4108b8, Func Offset: 0xf8
	// Line 414, Address: 0x4108bc, Func Offset: 0xfc
	// Func End, Address: 0x4108c4, Func Offset: 0x104
}

// xatof__FPCc
// Start address: 0x4108d0
float32 xatof(int8* x)
{
	// Line 323, Address: 0x4108d0, Func Offset: 0
	// Func End, Address: 0x4108d8, Func Offset: 0x8
}

// xMathInit__Fv
// Start address: 0x4108e0
void xMathInit()
{
	// Line 49, Address: 0x4108e0, Func Offset: 0
	// Line 50, Address: 0x4108e8, Func Offset: 0x8
	// Line 58, Address: 0x4108f4, Func Offset: 0x14
	// Line 61, Address: 0x4108f8, Func Offset: 0x18
	// Line 62, Address: 0x410900, Func Offset: 0x20
	// Func End, Address: 0x41090c, Func Offset: 0x2c
}

