



xSpline3* xSpline3_Bezier(xVec3* points, float32* time, uint32 numpoints, uint32 numalloc, xVec3* p1, xVec3* p2);
xSpline3* AllocSpline3(xVec3* points, float32* time, uint32 numpoints, uint32 numalloc, uint32 flags, uint32 type);
void xSpline3_ArcInit(xSpline3* spl, uint32 sample);
float32 xSpline3_EvalArcApprox(xSpline3* spl, float32 s, uint32 deriv, xVec3* o);
float32 ArcEvalIterate(xSpline3* spl, float32 s, uint32 deriv, xVec3* o, uint32 iterations);
void xSpline3_EvalSeg(xSpline3* spl, float32 u, uint32 deriv, xVec3* o);
void BasisBspline(float32 N[4], float32* t);
void EvalCoef3(xCoef3* coef, float32 u, uint32 deriv, xVec3* o);
float32 ArcLength3(xCoef3* coef, float32 ustart, float32 uend);
void Interpolate_Bspline(xVec3* data, xVec3* control, float32* knots, uint32 nodata);
void Tridiag_Solve(float32* a, float32* b, float32* c, xVec3* d, xVec3* x, int32 n);

// xSpline3_Bezier__FP5xVec3PfUiUiP5xVec3P5xVec3
// Start address: 0x451520
xSpline3* xSpline3_Bezier(xVec3* points, float32* time, uint32 numpoints, uint32 numalloc, xVec3* p1, xVec3* p2)
{
	xSpline3* spl;
	uint32 i;
	// Line 1007, Address: 0x451520, Func Offset: 0
	// Line 1010, Address: 0x451538, Func Offset: 0x18
	// Line 1013, Address: 0x451548, Func Offset: 0x28
	// Line 1010, Address: 0x45154c, Func Offset: 0x2c
	// Line 1013, Address: 0x451550, Func Offset: 0x30
	// Line 1016, Address: 0x451568, Func Offset: 0x48
	// Line 1020, Address: 0x451578, Func Offset: 0x58
	// Line 1021, Address: 0x451590, Func Offset: 0x70
	// Line 1022, Address: 0x451594, Func Offset: 0x74
	// Line 1021, Address: 0x451598, Func Offset: 0x78
	// Line 1022, Address: 0x45159c, Func Offset: 0x7c
	// Line 1021, Address: 0x4515a0, Func Offset: 0x80
	// Line 1022, Address: 0x4515a4, Func Offset: 0x84
	// Line 1021, Address: 0x4515a8, Func Offset: 0x88
	// Line 1023, Address: 0x4515ac, Func Offset: 0x8c
	// Line 1022, Address: 0x4515b0, Func Offset: 0x90
	// Line 1021, Address: 0x4515b4, Func Offset: 0x94
	// Line 1022, Address: 0x4515b8, Func Offset: 0x98
	// Line 1021, Address: 0x4515bc, Func Offset: 0x9c
	// Line 1022, Address: 0x4515c0, Func Offset: 0xa0
	// Line 1021, Address: 0x4515c4, Func Offset: 0xa4
	// Line 1022, Address: 0x4515cc, Func Offset: 0xac
	// Line 1023, Address: 0x4515ec, Func Offset: 0xcc
	// Line 1024, Address: 0x4515fc, Func Offset: 0xdc
	// Line 1026, Address: 0x451600, Func Offset: 0xe0
	// Line 1017, Address: 0x45160c, Func Offset: 0xec
	// Line 1026, Address: 0x451610, Func Offset: 0xf0
	// Line 1018, Address: 0x451630, Func Offset: 0x110
	// Line 1026, Address: 0x451638, Func Offset: 0x118
	// Line 1027, Address: 0x451658, Func Offset: 0x138
	// Func End, Address: 0x451670, Func Offset: 0x150
}

// AllocSpline3__FP5xVec3PfUiUiUiUi
// Start address: 0x451670
xSpline3* AllocSpline3(xVec3* points, float32* time, uint32 numpoints, uint32 numalloc, uint32 flags, uint32 type)
{
	xSpline3* spl;
	// Line 903, Address: 0x451670, Func Offset: 0
	// Line 904, Address: 0x4516ac, Func Offset: 0x3c
	// Line 905, Address: 0x4516bc, Func Offset: 0x4c
	// Line 906, Address: 0x4516c8, Func Offset: 0x58
	// Line 908, Address: 0x4516cc, Func Offset: 0x5c
	// Line 910, Address: 0x4516d0, Func Offset: 0x60
	// Line 909, Address: 0x4516d4, Func Offset: 0x64
	// Line 911, Address: 0x4516d8, Func Offset: 0x68
	// Line 910, Address: 0x4516dc, Func Offset: 0x6c
	// Line 920, Address: 0x4516e0, Func Offset: 0x70
	// Line 911, Address: 0x4516e4, Func Offset: 0x74
	// Line 912, Address: 0x4516e8, Func Offset: 0x78
	// Line 913, Address: 0x4516ec, Func Offset: 0x7c
	// Line 914, Address: 0x4516f0, Func Offset: 0x80
	// Line 915, Address: 0x4516f4, Func Offset: 0x84
	// Line 916, Address: 0x4516f8, Func Offset: 0x88
	// Line 917, Address: 0x4516fc, Func Offset: 0x8c
	// Line 920, Address: 0x451700, Func Offset: 0x90
	// Line 921, Address: 0x451720, Func Offset: 0xb0
	// Line 924, Address: 0x451740, Func Offset: 0xd0
	// Line 925, Address: 0x451748, Func Offset: 0xd8
	// Line 926, Address: 0x451764, Func Offset: 0xf4
	// Line 931, Address: 0x45177c, Func Offset: 0x10c
	// Line 932, Address: 0x45178c, Func Offset: 0x11c
	// Func End, Address: 0x4517b4, Func Offset: 0x144
}

// xSpline3_ArcInit__FP8xSpline3Ui
// Start address: 0x4517c0
void xSpline3_ArcInit(xSpline3* spl, uint32 sample)
{
	uint32 i;
	uint32 seg;
	float32 len;
	float32 arcsum;
	xCoef3 tempCoef;
	// Line 764, Address: 0x4517c0, Func Offset: 0
	// Line 766, Address: 0x4517f8, Func Offset: 0x38
	// Line 768, Address: 0x4517fc, Func Offset: 0x3c
	// Line 771, Address: 0x451808, Func Offset: 0x48
	// Line 773, Address: 0x45180c, Func Offset: 0x4c
	// Line 780, Address: 0x451838, Func Offset: 0x78
	// Line 779, Address: 0x45183c, Func Offset: 0x7c
	// Line 780, Address: 0x451840, Func Offset: 0x80
	// Line 783, Address: 0x451860, Func Offset: 0xa0
	// Line 786, Address: 0x451bb0, Func Offset: 0x3f0
	// Line 792, Address: 0x451bc0, Func Offset: 0x400
	// Line 793, Address: 0x451bc4, Func Offset: 0x404
	// Line 792, Address: 0x451bc8, Func Offset: 0x408
	// Line 793, Address: 0x451be8, Func Offset: 0x428
	// Line 794, Address: 0x451c00, Func Offset: 0x440
	// Line 775, Address: 0x451c0c, Func Offset: 0x44c
	// Line 794, Address: 0x451c10, Func Offset: 0x450
	// Line 775, Address: 0x451c18, Func Offset: 0x458
	// Line 794, Address: 0x451c1c, Func Offset: 0x45c
	// Line 787, Address: 0x451c44, Func Offset: 0x484
	// Line 794, Address: 0x451c68, Func Offset: 0x4a8
	// Line 787, Address: 0x451c70, Func Offset: 0x4b0
	// Line 794, Address: 0x451ca8, Func Offset: 0x4e8
	// Line 787, Address: 0x451cb4, Func Offset: 0x4f4
	// Line 794, Address: 0x451cb8, Func Offset: 0x4f8
	// Line 788, Address: 0x451cbc, Func Offset: 0x4fc
	// Line 794, Address: 0x451cc0, Func Offset: 0x500
	// Func End, Address: 0x451d18, Func Offset: 0x558
}

// xSpline3_EvalArcApprox__FP8xSpline3fUiP5xVec3
// Start address: 0x451d20
float32 xSpline3_EvalArcApprox(xSpline3* spl, float32 s, uint32 deriv, xVec3* o)
{
	// Line 731, Address: 0x451d20, Func Offset: 0
	// Line 732, Address: 0x451d2c, Func Offset: 0xc
	// Line 735, Address: 0x451d38, Func Offset: 0x18
	// Line 740, Address: 0x451d48, Func Offset: 0x28
	// Line 741, Address: 0x451d50, Func Offset: 0x30
	// Line 743, Address: 0x451d54, Func Offset: 0x34
	// Func End, Address: 0x451d64, Func Offset: 0x44
}

// ArcEvalIterate__FP8xSpline3fUiP5xVec3Ui
// Start address: 0x451d70
float32 ArcEvalIterate(xSpline3* spl, float32 s, uint32 deriv, xVec3* o, uint32 iterations)
{
	xCoef3 tempCoef;
	float32 umin;
	float32 umax;
	float32 smin;
	float32 smax;
	float32 utest;
	float32 arctest;
	int32 min;
	int32 max;
	int32 test;
	int32 seg;
	int32 segmul;
	// Line 637, Address: 0x451d70, Func Offset: 0
	// Line 643, Address: 0x451d98, Func Offset: 0x28
	// Line 637, Address: 0x451d9c, Func Offset: 0x2c
	// Line 643, Address: 0x451db8, Func Offset: 0x48
	// Line 644, Address: 0x451dbc, Func Offset: 0x4c
	// Line 645, Address: 0x451dc8, Func Offset: 0x58
	// Line 646, Address: 0x451dd4, Func Offset: 0x64
	// Line 647, Address: 0x451ddc, Func Offset: 0x6c
	// Line 648, Address: 0x451df4, Func Offset: 0x84
	// Line 650, Address: 0x451e00, Func Offset: 0x90
	// Line 651, Address: 0x451e04, Func Offset: 0x94
	// Line 654, Address: 0x451e18, Func Offset: 0xa8
	// Line 655, Address: 0x451e20, Func Offset: 0xb0
	// Line 656, Address: 0x451e24, Func Offset: 0xb4
	// Line 657, Address: 0x451e68, Func Offset: 0xf8
	// Line 658, Address: 0x451eb8, Func Offset: 0x148
	// Line 659, Address: 0x451ee0, Func Offset: 0x170
	// Line 660, Address: 0x451ee4, Func Offset: 0x174
	// Line 659, Address: 0x451ee8, Func Offset: 0x178
	// Line 660, Address: 0x451eec, Func Offset: 0x17c
	// Line 663, Address: 0x451f00, Func Offset: 0x190
	// Line 666, Address: 0x45228c, Func Offset: 0x51c
	// Line 669, Address: 0x452298, Func Offset: 0x528
	// Line 675, Address: 0x4522a4, Func Offset: 0x534
	// Line 676, Address: 0x4522a8, Func Offset: 0x538
	// Line 678, Address: 0x4522ac, Func Offset: 0x53c
	// Line 692, Address: 0x4522b8, Func Offset: 0x548
	// Line 695, Address: 0x4522cc, Func Offset: 0x55c
	// Line 696, Address: 0x4522e4, Func Offset: 0x574
	// Line 697, Address: 0x4522f0, Func Offset: 0x580
	// Line 701, Address: 0x45230c, Func Offset: 0x59c
	// Line 702, Address: 0x452320, Func Offset: 0x5b0
	// Line 660, Address: 0x452334, Func Offset: 0x5c4
	// Line 667, Address: 0x452340, Func Offset: 0x5d0
	// Line 702, Address: 0x45234c, Func Offset: 0x5dc
	// Line 668, Address: 0x452354, Func Offset: 0x5e4
	// Line 702, Address: 0x45235c, Func Offset: 0x5ec
	// Line 668, Address: 0x452360, Func Offset: 0x5f0
	// Line 670, Address: 0x452368, Func Offset: 0x5f8
	// Line 702, Address: 0x452374, Func Offset: 0x604
	// Line 671, Address: 0x45237c, Func Offset: 0x60c
	// Line 702, Address: 0x452384, Func Offset: 0x614
	// Line 671, Address: 0x452388, Func Offset: 0x618
	// Line 679, Address: 0x452390, Func Offset: 0x620
	// Line 680, Address: 0x452398, Func Offset: 0x628
	// Line 679, Address: 0x45239c, Func Offset: 0x62c
	// Line 702, Address: 0x4523ac, Func Offset: 0x63c
	// Line 681, Address: 0x4523b4, Func Offset: 0x644
	// Line 702, Address: 0x4523b8, Func Offset: 0x648
	// Line 682, Address: 0x4523c0, Func Offset: 0x650
	// Line 684, Address: 0x4523c4, Func Offset: 0x654
	// Line 685, Address: 0x4523d0, Func Offset: 0x660
	// Line 686, Address: 0x4523d4, Func Offset: 0x664
	// Line 702, Address: 0x4523d8, Func Offset: 0x668
	// Line 696, Address: 0x4523ec, Func Offset: 0x67c
	// Line 703, Address: 0x4523f4, Func Offset: 0x684
	// Func End, Address: 0x45242c, Func Offset: 0x6bc
}

// xSpline3_EvalSeg__FP8xSpline3fUiP5xVec3
// Start address: 0x452430
void xSpline3_EvalSeg(xSpline3* spl, float32 u, uint32 deriv, xVec3* o)
{
	xCoef3 tempCoef;
	uint32 seg;
	// Line 572, Address: 0x452430, Func Offset: 0
	// Line 577, Address: 0x452434, Func Offset: 0x4
	// Line 572, Address: 0x452438, Func Offset: 0x8
	// Line 577, Address: 0x45245c, Func Offset: 0x2c
	// Line 578, Address: 0x452468, Func Offset: 0x38
	// Line 579, Address: 0x4525d4, Func Offset: 0x1a4
	// Line 585, Address: 0x4525dc, Func Offset: 0x1ac
	// Line 586, Address: 0x4525f4, Func Offset: 0x1c4
	// Line 587, Address: 0x452600, Func Offset: 0x1d0
	// Line 588, Address: 0x452644, Func Offset: 0x214
	// Line 589, Address: 0x452650, Func Offset: 0x220
	// Line 590, Address: 0x452654, Func Offset: 0x224
	// Line 595, Address: 0x452658, Func Offset: 0x228
	// Line 597, Address: 0x452684, Func Offset: 0x254
	// Line 598, Address: 0x4526a8, Func Offset: 0x278
	// Line 600, Address: 0x4526b4, Func Offset: 0x284
	// Line 598, Address: 0x4526b8, Func Offset: 0x288
	// Line 600, Address: 0x4526c0, Func Offset: 0x290
	// Line 598, Address: 0x4526d8, Func Offset: 0x2a8
	// Line 600, Address: 0x4526dc, Func Offset: 0x2ac
	// Line 605, Address: 0x452778, Func Offset: 0x348
	// Line 606, Address: 0x45278c, Func Offset: 0x35c
	// Line 608, Address: 0x452798, Func Offset: 0x368
	// Line 606, Address: 0x45279c, Func Offset: 0x36c
	// Line 608, Address: 0x4527a4, Func Offset: 0x374
	// Line 606, Address: 0x4527bc, Func Offset: 0x38c
	// Line 608, Address: 0x4527c0, Func Offset: 0x390
	// Line 613, Address: 0x45285c, Func Offset: 0x42c
	// Line 616, Address: 0x452870, Func Offset: 0x440
	// Func End, Address: 0x4528a0, Func Offset: 0x470
}

// BasisBspline__FPA4_fPf
// Start address: 0x4528a0
void BasisBspline(float32 N[4], float32* t)
{
	uint32 i;
	uint32 k;
	uint32 c;
	float32 d1;
	float32 d2;
	float32 Ntemp[4];
	// Line 462, Address: 0x4528a0, Func Offset: 0
	// Line 466, Address: 0x4528a4, Func Offset: 0x4
	// Line 462, Address: 0x4528a8, Func Offset: 0x8
	// Line 475, Address: 0x4528ac, Func Offset: 0xc
	// Line 462, Address: 0x4528b0, Func Offset: 0x10
	// Line 475, Address: 0x4528b4, Func Offset: 0x14
	// Line 462, Address: 0x4528b8, Func Offset: 0x18
	// Line 475, Address: 0x4528bc, Func Offset: 0x1c
	// Line 462, Address: 0x4528c0, Func Offset: 0x20
	// Line 475, Address: 0x4528c4, Func Offset: 0x24
	// Line 462, Address: 0x4528c8, Func Offset: 0x28
	// Line 466, Address: 0x4528d8, Func Offset: 0x38
	// Line 478, Address: 0x4528f4, Func Offset: 0x54
	// Line 490, Address: 0x452900, Func Offset: 0x60
	// Line 476, Address: 0x452908, Func Offset: 0x68
	// Line 489, Address: 0x452918, Func Offset: 0x78
	// Line 490, Address: 0x452928, Func Offset: 0x88
	// Line 477, Address: 0x452968, Func Offset: 0xc8
	// Line 490, Address: 0x452970, Func Offset: 0xd0
	// Line 478, Address: 0x452988, Func Offset: 0xe8
	// Line 490, Address: 0x452990, Func Offset: 0xf0
	// Line 478, Address: 0x452998, Func Offset: 0xf8
	// Line 490, Address: 0x4529a8, Func Offset: 0x108
	// Line 479, Address: 0x4529b0, Func Offset: 0x110
	// Line 490, Address: 0x4529b8, Func Offset: 0x118
	// Line 479, Address: 0x4529c0, Func Offset: 0x120
	// Line 490, Address: 0x4529d0, Func Offset: 0x130
	// Line 483, Address: 0x4529f0, Func Offset: 0x150
	// Line 481, Address: 0x4529f4, Func Offset: 0x154
	// Line 490, Address: 0x4529f8, Func Offset: 0x158
	// Line 483, Address: 0x452a0c, Func Offset: 0x16c
	// Line 490, Address: 0x452a10, Func Offset: 0x170
	// Line 482, Address: 0x452a14, Func Offset: 0x174
	// Line 483, Address: 0x452a1c, Func Offset: 0x17c
	// Line 482, Address: 0x452a20, Func Offset: 0x180
	// Line 490, Address: 0x452a24, Func Offset: 0x184
	// Line 483, Address: 0x452a28, Func Offset: 0x188
	// Line 490, Address: 0x452a2c, Func Offset: 0x18c
	// Line 483, Address: 0x452a30, Func Offset: 0x190
	// Line 490, Address: 0x452a34, Func Offset: 0x194
	// Line 483, Address: 0x452a38, Func Offset: 0x198
	// Line 490, Address: 0x452a3c, Func Offset: 0x19c
	// Func End, Address: 0x452ab8, Func Offset: 0x218
}

// EvalCoef3__FP6xCoef3fUiP5xVec3
// Start address: 0x452ac0
void EvalCoef3(xCoef3* coef, float32 u, uint32 deriv, xVec3* o)
{
	// Line 318, Address: 0x452ac0, Func Offset: 0
	// Line 320, Address: 0x452af0, Func Offset: 0x30
	// Line 321, Address: 0x452b20, Func Offset: 0x60
	// Line 322, Address: 0x452b4c, Func Offset: 0x8c
	// Line 323, Address: 0x452b74, Func Offset: 0xb4
	// Line 325, Address: 0x452b7c, Func Offset: 0xbc
	// Line 326, Address: 0x452bb0, Func Offset: 0xf0
	// Line 327, Address: 0x452bd4, Func Offset: 0x114
	// Line 328, Address: 0x452bf4, Func Offset: 0x134
	// Line 330, Address: 0x452bfc, Func Offset: 0x13c
	// Line 331, Address: 0x452c24, Func Offset: 0x164
	// Line 332, Address: 0x452c3c, Func Offset: 0x17c
	// Line 333, Address: 0x452c50, Func Offset: 0x190
	// Line 335, Address: 0x452c58, Func Offset: 0x198
	// Line 336, Address: 0x452c70, Func Offset: 0x1b0
	// Line 337, Address: 0x452c7c, Func Offset: 0x1bc
	// Line 338, Address: 0x452c84, Func Offset: 0x1c4
	// Line 341, Address: 0x452c8c, Func Offset: 0x1cc
	// Line 342, Address: 0x452c90, Func Offset: 0x1d0
	// Line 345, Address: 0x452c94, Func Offset: 0x1d4
	// Func End, Address: 0x452c9c, Func Offset: 0x1dc
}

// ArcLength3__FP6xCoef3ff
// Start address: 0x452ca0
float32 ArcLength3(xCoef3* coef, float32 ustart, float32 uend)
{
	uint32 i;
	float32 A;
	float32 B;
	float32 C;
	float32 D;
	float32 E;
	float32 h;
	float32 sum;
	float32 u;
	// Line 254, Address: 0x452ca0, Func Offset: 0
	// Line 271, Address: 0x452ca4, Func Offset: 0x4
	// Line 254, Address: 0x452ca8, Func Offset: 0x8
	// Line 301, Address: 0x452cac, Func Offset: 0xc
	// Line 254, Address: 0x452cb0, Func Offset: 0x10
	// Line 271, Address: 0x452cb4, Func Offset: 0x14
	// Line 275, Address: 0x452cbc, Func Offset: 0x1c
	// Line 271, Address: 0x452cc0, Func Offset: 0x20
	// Line 275, Address: 0x452cc4, Func Offset: 0x24
	// Line 271, Address: 0x452cc8, Func Offset: 0x28
	// Line 279, Address: 0x452cd0, Func Offset: 0x30
	// Line 271, Address: 0x452cd4, Func Offset: 0x34
	// Line 279, Address: 0x452cd8, Func Offset: 0x38
	// Line 297, Address: 0x452cdc, Func Offset: 0x3c
	// Line 279, Address: 0x452ce0, Func Offset: 0x40
	// Line 271, Address: 0x452ce8, Func Offset: 0x48
	// Line 297, Address: 0x452cec, Func Offset: 0x4c
	// Line 275, Address: 0x452cf4, Func Offset: 0x54
	// Line 297, Address: 0x452cf8, Func Offset: 0x58
	// Line 271, Address: 0x452cfc, Func Offset: 0x5c
	// Line 275, Address: 0x452d00, Func Offset: 0x60
	// Line 271, Address: 0x452d10, Func Offset: 0x70
	// Line 275, Address: 0x452d14, Func Offset: 0x74
	// Line 279, Address: 0x452d1c, Func Offset: 0x7c
	// Line 286, Address: 0x452d3c, Func Offset: 0x9c
	// Line 290, Address: 0x452d48, Func Offset: 0xa8
	// Line 286, Address: 0x452d50, Func Offset: 0xb0
	// Line 299, Address: 0x452d54, Func Offset: 0xb4
	// Line 290, Address: 0x452d58, Func Offset: 0xb8
	// Line 303, Address: 0x452d5c, Func Offset: 0xbc
	// Line 302, Address: 0x452d68, Func Offset: 0xc8
	// Line 303, Address: 0x452db0, Func Offset: 0x110
	// Line 305, Address: 0x452de0, Func Offset: 0x140
	// Line 306, Address: 0x452df0, Func Offset: 0x150
	// Line 307, Address: 0x452e64, Func Offset: 0x1c4
	// Func End, Address: 0x452e6c, Func Offset: 0x1cc
}

// Interpolate_Bspline__FP5xVec3P5xVec3PfUi
// Start address: 0x452e70
void Interpolate_Bspline(xVec3* data, xVec3* control, float32* knots, uint32 nodata)
{
	uint32 i;
	float32* alpha;
	float32* beta;
	float32* gamma;
	float32 t1;
	float32 t2;
	float32 t3;
	float32 t4;
	float32 t5;
	// Line 209, Address: 0x452e70, Func Offset: 0
	// Line 214, Address: 0x452eac, Func Offset: 0x3c
	// Line 209, Address: 0x452eb0, Func Offset: 0x40
	// Line 214, Address: 0x452eb8, Func Offset: 0x48
	// Line 215, Address: 0x452ec8, Func Offset: 0x58
	// Line 216, Address: 0x452ed8, Func Offset: 0x68
	// Line 215, Address: 0x452edc, Func Offset: 0x6c
	// Line 216, Address: 0x452ee0, Func Offset: 0x70
	// Line 218, Address: 0x452eec, Func Offset: 0x7c
	// Line 219, Address: 0x452ef0, Func Offset: 0x80
	// Line 218, Address: 0x452ef4, Func Offset: 0x84
	// Line 216, Address: 0x452ef8, Func Offset: 0x88
	// Line 218, Address: 0x452efc, Func Offset: 0x8c
	// Line 219, Address: 0x452f00, Func Offset: 0x90
	// Line 222, Address: 0x452f08, Func Offset: 0x98
	// Line 220, Address: 0x452f0c, Func Offset: 0x9c
	// Line 219, Address: 0x452f10, Func Offset: 0xa0
	// Line 220, Address: 0x452f14, Func Offset: 0xa4
	// Line 222, Address: 0x452f18, Func Offset: 0xa8
	// Line 224, Address: 0x452f38, Func Offset: 0xc8
	// Line 236, Address: 0x452f3c, Func Offset: 0xcc
	// Line 227, Address: 0x452f40, Func Offset: 0xd0
	// Line 236, Address: 0x452f44, Func Offset: 0xd4
	// Line 226, Address: 0x452f48, Func Offset: 0xd8
	// Line 225, Address: 0x452f4c, Func Offset: 0xdc
	// Line 228, Address: 0x452f50, Func Offset: 0xe0
	// Line 235, Address: 0x452f58, Func Offset: 0xe8
	// Line 231, Address: 0x452f60, Func Offset: 0xf0
	// Line 230, Address: 0x452f68, Func Offset: 0xf8
	// Line 231, Address: 0x452f6c, Func Offset: 0xfc
	// Line 230, Address: 0x452f70, Func Offset: 0x100
	// Line 231, Address: 0x452f74, Func Offset: 0x104
	// Line 232, Address: 0x452f84, Func Offset: 0x114
	// Line 231, Address: 0x452f88, Func Offset: 0x118
	// Line 230, Address: 0x452f8c, Func Offset: 0x11c
	// Line 231, Address: 0x452f90, Func Offset: 0x120
	// Line 232, Address: 0x452f94, Func Offset: 0x124
	// Line 231, Address: 0x452f98, Func Offset: 0x128
	// Line 232, Address: 0x452f9c, Func Offset: 0x12c
	// Line 233, Address: 0x452fa0, Func Offset: 0x130
	// Line 234, Address: 0x452fb0, Func Offset: 0x140
	// Line 235, Address: 0x452fb4, Func Offset: 0x144
	// Line 234, Address: 0x452fb8, Func Offset: 0x148
	// Line 235, Address: 0x452fc0, Func Offset: 0x150
	// Line 236, Address: 0x452fd4, Func Offset: 0x164
	// Line 239, Address: 0x452fe0, Func Offset: 0x170
	// Line 241, Address: 0x452ffc, Func Offset: 0x18c
	// Line 244, Address: 0x453014, Func Offset: 0x1a4
	// Line 242, Address: 0x453018, Func Offset: 0x1a8
	// Line 241, Address: 0x453024, Func Offset: 0x1b4
	// Line 242, Address: 0x453030, Func Offset: 0x1c0
	// Line 244, Address: 0x453048, Func Offset: 0x1d8
	// Line 245, Address: 0x453054, Func Offset: 0x1e4
	// Line 246, Address: 0x453060, Func Offset: 0x1f0
	// Line 247, Address: 0x45306c, Func Offset: 0x1fc
	// Func End, Address: 0x453098, Func Offset: 0x228
}

// Tridiag_Solve__FPfPfPfP5xVec3P5xVec3i
// Start address: 0x4530a0
void Tridiag_Solve(float32* a, float32* b, float32* c, xVec3* d, xVec3* x, int32 n)
{
	int32 j;
	float32 beta;
	float32* gamma;
	xVec3* delta;
	// Line 101, Address: 0x4530a0, Func Offset: 0
	// Line 106, Address: 0x4530e0, Func Offset: 0x40
	// Line 101, Address: 0x4530e4, Func Offset: 0x44
	// Line 106, Address: 0x4530ec, Func Offset: 0x4c
	// Line 107, Address: 0x4530f8, Func Offset: 0x58
	// Line 106, Address: 0x4530fc, Func Offset: 0x5c
	// Line 107, Address: 0x453100, Func Offset: 0x60
	// Line 110, Address: 0x453114, Func Offset: 0x74
	// Line 107, Address: 0x453118, Func Offset: 0x78
	// Line 110, Address: 0x45311c, Func Offset: 0x7c
	// Line 112, Address: 0x453120, Func Offset: 0x80
	// Line 110, Address: 0x453124, Func Offset: 0x84
	// Line 111, Address: 0x45312c, Func Offset: 0x8c
	// Line 112, Address: 0x45315c, Func Offset: 0xbc
	// Line 114, Address: 0x453168, Func Offset: 0xc8
	// Line 115, Address: 0x45318c, Func Offset: 0xec
	// Line 114, Address: 0x453190, Func Offset: 0xf0
	// Line 115, Address: 0x453194, Func Offset: 0xf4
	// Line 117, Address: 0x45319c, Func Offset: 0xfc
	// Line 114, Address: 0x4531a0, Func Offset: 0x100
	// Line 116, Address: 0x4531a4, Func Offset: 0x104
	// Line 117, Address: 0x4531a8, Func Offset: 0x108
	// Line 114, Address: 0x4531ac, Func Offset: 0x10c
	// Line 116, Address: 0x4531b0, Func Offset: 0x110
	// Line 114, Address: 0x4531b8, Func Offset: 0x118
	// Line 115, Address: 0x4531bc, Func Offset: 0x11c
	// Line 116, Address: 0x4531c4, Func Offset: 0x124
	// Line 117, Address: 0x453228, Func Offset: 0x188
	// Line 121, Address: 0x453238, Func Offset: 0x198
	// Line 117, Address: 0x45323c, Func Offset: 0x19c
	// Line 120, Address: 0x453248, Func Offset: 0x1a8
	// Line 117, Address: 0x45324c, Func Offset: 0x1ac
	// Line 120, Address: 0x453250, Func Offset: 0x1b0
	// Line 121, Address: 0x453260, Func Offset: 0x1c0
	// Line 123, Address: 0x45327c, Func Offset: 0x1dc
	// Line 121, Address: 0x453280, Func Offset: 0x1e0
	// Line 124, Address: 0x45328c, Func Offset: 0x1ec
	// Line 121, Address: 0x453290, Func Offset: 0x1f0
	// Line 123, Address: 0x453294, Func Offset: 0x1f4
	// Line 124, Address: 0x4532e8, Func Offset: 0x248
	// Line 126, Address: 0x4532f0, Func Offset: 0x250
	// Line 124, Address: 0x4532f4, Func Offset: 0x254
	// Line 126, Address: 0x4532fc, Func Offset: 0x25c
	// Line 127, Address: 0x453308, Func Offset: 0x268
	// Line 128, Address: 0x453314, Func Offset: 0x274
	// Func End, Address: 0x453340, Func Offset: 0x2a0
}

