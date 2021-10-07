typedef struct _xBox;
typedef struct _xTri3;
typedef struct _xVec3;
typedef struct _xSphere;
typedef struct _xIsect;
typedef struct _xCylinder;
typedef struct _xMat4x3;
typedef struct _xRay3;
typedef struct _xPlane;



struct _xBox
{
	_xVec3 upper;
	_xVec3 lower;
};

struct _xTri3
{
	_xVec3 p1;
	_xVec3 p2;
	_xVec3 p3;
};

struct _xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct _xSphere
{
	_xVec3 center;
	float32 r;
};

struct _xIsect
{
	uint32 flags;
	float32 penned;
	float32 contained;
	float32 lapped;
	_xVec3 point;
	_xVec3 norm;
	float32 dist;
};

struct _xCylinder
{
	_xVec3 center;
	float32 r;
	float32 h;
};

struct _xMat4x3
{
	_xVec3 right;
	int32 flags;
	_xVec3 up;
	uint32 pad1;
	_xVec3 at;
	uint32 pad2;
	_xVec3 pos;
	uint32 pad3;
};

struct _xRay3
{
	_xVec3 origin;
	_xVec3 dir;
	float32 min_t;
	float32 max_t;
	int32 flags;
};

struct _xPlane
{
	_xVec3 norm;
	float32 d;
};


void iBoxBoundVec(_xBox* o, _xBox* b, _xVec3* v);
void iBoxInitBoundVec(_xBox* b, _xVec3* v);
void iBoxIsectSphere(_xBox* box, _xSphere* p, _xIsect* isx);
void iBoxIsectRay(_xBox* b, _xRay3* r, _xIsect* isx);
uint32 ClipPlane(float32 denom, float32 numer, float32* t_in, float32* t_out);
void iBoxIsectVec(_xBox* b, _xVec3* v, _xIsect* isx);
void iBoxVecDist(_xBox* box, _xVec3* v, _xIsect* isx);
void iCylinderIsectRay(_xCylinder* c, _xRay3* r, _xIsect* isx);
void iCylinderIsectVec(_xCylinder* c, _xVec3* v, _xIsect* isx);
void iSphereInitBoundOBB(_xSphere* s, _xBox* b, _xMat4x3* m);
void iSphereIsectSphere(_xSphere* s, _xSphere* p, _xIsect* isx);
void iSphereIsectRay(_xSphere* s, _xRay3* r, _xIsect* isx);
void iSphereIsectVec(_xSphere* s, _xVec3* v, _xIsect* isx);
void iMath3Exit();
void iMath3Init();

// iBoxBoundVec__FP5_xBoxPC5_xBoxPC6_xVec3
// Start address: 0x123ce0
void iBoxBoundVec(_xBox* o, _xBox* b, _xVec3* v)
{
	// Line 1194, Address: 0x123ce0, Func Offset: 0
	// Line 1197, Address: 0x123d34, Func Offset: 0x54
	// Line 1200, Address: 0x123d84, Func Offset: 0xa4
	// Func End, Address: 0x123d8c, Func Offset: 0xac
}

// iBoxInitBoundVec__FP5_xBoxPC6_xVec3
// Start address: 0x123d90
void iBoxInitBoundVec(_xBox* b, _xVec3* v)
{
	// Line 1176, Address: 0x123d90, Func Offset: 0
	// Line 1177, Address: 0x123da8, Func Offset: 0x18
	// Line 1178, Address: 0x123dbc, Func Offset: 0x2c
	// Func End, Address: 0x123dc4, Func Offset: 0x34
}

// iBoxIsectSphere__FPC5_xBoxPC8_xSphereP7_xIsect
// Start address: 0x123dd0
void iBoxIsectSphere(_xBox* box, _xSphere* p, _xIsect* isx)
{
	uint32 zcode;
	uint32 ycode;
	uint32 xcode;
	// Line 1064, Address: 0x123dd0, Func Offset: 0
	// Line 1077, Address: 0x123de0, Func Offset: 0x10
	// Line 1079, Address: 0x123de8, Func Offset: 0x18
	// Line 1077, Address: 0x123df4, Func Offset: 0x24
	// Line 1079, Address: 0x123df8, Func Offset: 0x28
	// Line 1081, Address: 0x123e78, Func Offset: 0xa8
	// Line 1083, Address: 0x123e94, Func Offset: 0xc4
	// Line 1085, Address: 0x123e9c, Func Offset: 0xcc
	// Line 1087, Address: 0x123ea0, Func Offset: 0xd0
	// Line 1085, Address: 0x123ea4, Func Offset: 0xd4
	// Line 1087, Address: 0x123ea8, Func Offset: 0xd8
	// Line 1089, Address: 0x123f28, Func Offset: 0x158
	// Line 1091, Address: 0x123f44, Func Offset: 0x174
	// Line 1093, Address: 0x123f4c, Func Offset: 0x17c
	// Line 1095, Address: 0x123f50, Func Offset: 0x180
	// Line 1093, Address: 0x123f54, Func Offset: 0x184
	// Line 1095, Address: 0x123f58, Func Offset: 0x188
	// Line 1097, Address: 0x123fd8, Func Offset: 0x208
	// Line 1099, Address: 0x123ff8, Func Offset: 0x228
	// Line 1105, Address: 0x124000, Func Offset: 0x230
	// Line 1106, Address: 0x12407c, Func Offset: 0x2ac
	// Line 1108, Address: 0x124098, Func Offset: 0x2c8
	// Line 1109, Address: 0x1240a8, Func Offset: 0x2d8
	// Line 1108, Address: 0x1240ac, Func Offset: 0x2dc
	// Line 1109, Address: 0x1240bc, Func Offset: 0x2ec
	// Line 1110, Address: 0x1240c0, Func Offset: 0x2f0
	// Line 1109, Address: 0x1240c4, Func Offset: 0x2f4
	// Line 1110, Address: 0x1240c8, Func Offset: 0x2f8
	// Line 1108, Address: 0x1240cc, Func Offset: 0x2fc
	// Line 1110, Address: 0x1240d0, Func Offset: 0x300
	// Line 1109, Address: 0x1240d8, Func Offset: 0x308
	// Line 1110, Address: 0x1240dc, Func Offset: 0x30c
	// Line 1109, Address: 0x1240e8, Func Offset: 0x318
	// Line 1110, Address: 0x1240ec, Func Offset: 0x31c
	// Line 1111, Address: 0x1240f4, Func Offset: 0x324
	// Line 1112, Address: 0x124118, Func Offset: 0x348
	// Line 1113, Address: 0x12411c, Func Offset: 0x34c
	// Line 1116, Address: 0x124124, Func Offset: 0x354
	// Line 1118, Address: 0x124134, Func Offset: 0x364
	// Line 1120, Address: 0x124140, Func Offset: 0x370
	// Line 1121, Address: 0x124148, Func Offset: 0x378
	// Line 1120, Address: 0x12414c, Func Offset: 0x37c
	// Line 1121, Address: 0x124154, Func Offset: 0x384
	// Line 1122, Address: 0x124158, Func Offset: 0x388
	// Func End, Address: 0x12416c, Func Offset: 0x39c
}

// iBoxIsectRay__FPC5_xBoxPC6_xRay3P7_xIsect
// Start address: 0x124170
void iBoxIsectRay(_xBox* b, _xRay3* r, _xIsect* isx)
{
	float32 t_out;
	float32 t_in;
	// Line 910, Address: 0x124170, Func Offset: 0
	// Line 924, Address: 0x1241a8, Func Offset: 0x38
	// Line 925, Address: 0x1241bc, Func Offset: 0x4c
	// Line 927, Address: 0x1241c0, Func Offset: 0x50
	// Line 928, Address: 0x1241d0, Func Offset: 0x60
	// Line 931, Address: 0x1241d8, Func Offset: 0x68
	// Line 932, Address: 0x1241e4, Func Offset: 0x74
	// Line 934, Address: 0x1241f0, Func Offset: 0x80
	// Line 935, Address: 0x124200, Func Offset: 0x90
	// Line 934, Address: 0x124208, Func Offset: 0x98
	// Line 937, Address: 0x124214, Func Offset: 0xa4
	// Line 938, Address: 0x124218, Func Offset: 0xa8
	// Line 936, Address: 0x124220, Func Offset: 0xb0
	// Line 940, Address: 0x124224, Func Offset: 0xb4
	// Line 937, Address: 0x124230, Func Offset: 0xc0
	// Line 936, Address: 0x124234, Func Offset: 0xc4
	// Line 938, Address: 0x124238, Func Offset: 0xc8
	// Line 940, Address: 0x12423c, Func Offset: 0xcc
	// Line 937, Address: 0x124244, Func Offset: 0xd4
	// Line 940, Address: 0x124248, Func Offset: 0xd8
	// Line 937, Address: 0x124250, Func Offset: 0xe0
	// Line 936, Address: 0x124254, Func Offset: 0xe4
	// Line 934, Address: 0x124258, Func Offset: 0xe8
	// Line 937, Address: 0x124260, Func Offset: 0xf0
	// Line 935, Address: 0x124264, Func Offset: 0xf4
	// Line 938, Address: 0x124268, Func Offset: 0xf8
	// Line 940, Address: 0x124270, Func Offset: 0x100
	// Line 935, Address: 0x124274, Func Offset: 0x104
	// Line 938, Address: 0x12427c, Func Offset: 0x10c
	// Line 940, Address: 0x124280, Func Offset: 0x110
	// Line 941, Address: 0x12436c, Func Offset: 0x1fc
	// Line 942, Address: 0x124384, Func Offset: 0x214
	// Line 943, Address: 0x124398, Func Offset: 0x228
	// Line 944, Address: 0x12439c, Func Offset: 0x22c
	// Line 946, Address: 0x1243a4, Func Offset: 0x234
	// Line 949, Address: 0x1243ac, Func Offset: 0x23c
	// Line 950, Address: 0x1243b0, Func Offset: 0x240
	// Line 953, Address: 0x1243b8, Func Offset: 0x248
	// Line 954, Address: 0x1243c0, Func Offset: 0x250
	// Line 955, Address: 0x1243d4, Func Offset: 0x264
	// Line 956, Address: 0x1243d8, Func Offset: 0x268
	// Line 957, Address: 0x1243e0, Func Offset: 0x270
	// Line 958, Address: 0x1243e4, Func Offset: 0x274
	// Line 959, Address: 0x1243ec, Func Offset: 0x27c
	// Line 960, Address: 0x1243f0, Func Offset: 0x280
	// Line 964, Address: 0x1243f8, Func Offset: 0x288
	// Line 965, Address: 0x124400, Func Offset: 0x290
	// Line 966, Address: 0x124404, Func Offset: 0x294
	// Line 968, Address: 0x124408, Func Offset: 0x298
	// Func End, Address: 0x124444, Func Offset: 0x2d4
}

// ClipPlane__FffPfPf
// Start address: 0x124450
uint32 ClipPlane(float32 denom, float32 numer, float32* t_in, float32* t_out)
{
	// Line 875, Address: 0x124450, Func Offset: 0
	// Line 876, Address: 0x124468, Func Offset: 0x18
	// Line 877, Address: 0x124480, Func Offset: 0x30
	// Line 879, Address: 0x124488, Func Offset: 0x38
	// Line 880, Address: 0x1244a0, Func Offset: 0x50
	// Line 882, Address: 0x1244b0, Func Offset: 0x60
	// Line 884, Address: 0x1244bc, Func Offset: 0x6c
	// Line 885, Address: 0x1244cc, Func Offset: 0x7c
	// Line 886, Address: 0x1244e4, Func Offset: 0x94
	// Line 888, Address: 0x1244ec, Func Offset: 0x9c
	// Line 889, Address: 0x124504, Func Offset: 0xb4
	// Line 891, Address: 0x124514, Func Offset: 0xc4
	// Line 894, Address: 0x124520, Func Offset: 0xd0
	// Line 896, Address: 0x124538, Func Offset: 0xe8
	// Func End, Address: 0x124540, Func Offset: 0xf0
}

// iBoxIsectVec__FPC5_xBoxPC6_xVec3P7_xIsect
// Start address: 0x124540
void iBoxIsectVec(_xBox* b, _xVec3* v, _xIsect* isx)
{
	// Line 862, Address: 0x124540, Func Offset: 0
	// Line 867, Address: 0x1245c4, Func Offset: 0x84
	// Line 868, Address: 0x1245cc, Func Offset: 0x8c
	// Line 870, Address: 0x1245d4, Func Offset: 0x94
	// Func End, Address: 0x1245dc, Func Offset: 0x9c
}

// iBoxVecDist__FPC5_xBoxPC6_xVec3P7_xIsect
// Start address: 0x1245e0
void iBoxVecDist(_xBox* box, _xVec3* v, _xIsect* isx)
{
	// Line 637, Address: 0x1245e0, Func Offset: 0
	// Line 638, Address: 0x1245ec, Func Offset: 0xc
	// Line 639, Address: 0x124604, Func Offset: 0x24
	// Line 640, Address: 0x12461c, Func Offset: 0x3c
	// Line 644, Address: 0x124634, Func Offset: 0x54
	// Line 645, Address: 0x12463c, Func Offset: 0x5c
	// Line 641, Address: 0x124640, Func Offset: 0x60
	// Line 642, Address: 0x124644, Func Offset: 0x64
	// Line 643, Address: 0x124654, Func Offset: 0x74
	// Line 644, Address: 0x124664, Func Offset: 0x84
	// Line 645, Address: 0x124670, Func Offset: 0x90
	// Line 647, Address: 0x124678, Func Offset: 0x98
	// Line 648, Address: 0x124694, Func Offset: 0xb4
	// Line 651, Address: 0x124698, Func Offset: 0xb8
	// Line 648, Address: 0x1246a4, Func Offset: 0xc4
	// Line 649, Address: 0x1246a8, Func Offset: 0xc8
	// Line 652, Address: 0x1246b0, Func Offset: 0xd0
	// Line 649, Address: 0x1246b4, Func Offset: 0xd4
	// Line 650, Address: 0x1246bc, Func Offset: 0xdc
	// Line 651, Address: 0x1246c0, Func Offset: 0xe0
	// Line 652, Address: 0x1246d0, Func Offset: 0xf0
	// Line 654, Address: 0x1246d8, Func Offset: 0xf8
	// Line 658, Address: 0x1246e0, Func Offset: 0x100
	// Line 655, Address: 0x1246ec, Func Offset: 0x10c
	// Line 656, Address: 0x1246f0, Func Offset: 0x110
	// Line 659, Address: 0x1246f8, Func Offset: 0x118
	// Line 656, Address: 0x1246fc, Func Offset: 0x11c
	// Line 657, Address: 0x124704, Func Offset: 0x124
	// Line 658, Address: 0x124714, Func Offset: 0x134
	// Line 659, Address: 0x124724, Func Offset: 0x144
	// Line 662, Address: 0x12472c, Func Offset: 0x14c
	// Line 663, Address: 0x124748, Func Offset: 0x168
	// Line 667, Address: 0x124760, Func Offset: 0x180
	// Line 664, Address: 0x12476c, Func Offset: 0x18c
	// Line 665, Address: 0x124770, Func Offset: 0x190
	// Line 666, Address: 0x124774, Func Offset: 0x194
	// Line 668, Address: 0x12477c, Func Offset: 0x19c
	// Line 666, Address: 0x124780, Func Offset: 0x1a0
	// Line 667, Address: 0x124788, Func Offset: 0x1a8
	// Line 668, Address: 0x124798, Func Offset: 0x1b8
	// Line 670, Address: 0x1247a0, Func Offset: 0x1c0
	// Line 671, Address: 0x1247bc, Func Offset: 0x1dc
	// Line 674, Address: 0x1247c0, Func Offset: 0x1e0
	// Line 671, Address: 0x1247cc, Func Offset: 0x1ec
	// Line 672, Address: 0x1247d0, Func Offset: 0x1f0
	// Line 673, Address: 0x1247d4, Func Offset: 0x1f4
	// Line 674, Address: 0x1247d8, Func Offset: 0x1f8
	// Line 675, Address: 0x1247dc, Func Offset: 0x1fc
	// Line 674, Address: 0x1247e0, Func Offset: 0x200
	// Line 675, Address: 0x1247ec, Func Offset: 0x20c
	// Line 677, Address: 0x1247f4, Func Offset: 0x214
	// Line 681, Address: 0x1247fc, Func Offset: 0x21c
	// Line 678, Address: 0x124808, Func Offset: 0x228
	// Line 679, Address: 0x12480c, Func Offset: 0x22c
	// Line 680, Address: 0x124810, Func Offset: 0x230
	// Line 682, Address: 0x124818, Func Offset: 0x238
	// Line 680, Address: 0x12481c, Func Offset: 0x23c
	// Line 681, Address: 0x124824, Func Offset: 0x244
	// Line 682, Address: 0x124834, Func Offset: 0x254
	// Line 685, Address: 0x12483c, Func Offset: 0x25c
	// Line 686, Address: 0x124844, Func Offset: 0x264
	// Line 690, Address: 0x12485c, Func Offset: 0x27c
	// Line 687, Address: 0x124868, Func Offset: 0x288
	// Line 688, Address: 0x12486c, Func Offset: 0x28c
	// Line 691, Address: 0x124874, Func Offset: 0x294
	// Line 688, Address: 0x124878, Func Offset: 0x298
	// Line 689, Address: 0x124880, Func Offset: 0x2a0
	// Line 690, Address: 0x124890, Func Offset: 0x2b0
	// Line 691, Address: 0x1248a0, Func Offset: 0x2c0
	// Line 693, Address: 0x1248a8, Func Offset: 0x2c8
	// Line 694, Address: 0x1248c4, Func Offset: 0x2e4
	// Line 697, Address: 0x1248c8, Func Offset: 0x2e8
	// Line 694, Address: 0x1248d4, Func Offset: 0x2f4
	// Line 695, Address: 0x1248d8, Func Offset: 0x2f8
	// Line 698, Address: 0x1248e0, Func Offset: 0x300
	// Line 695, Address: 0x1248e4, Func Offset: 0x304
	// Line 696, Address: 0x1248ec, Func Offset: 0x30c
	// Line 697, Address: 0x1248f0, Func Offset: 0x310
	// Line 698, Address: 0x124900, Func Offset: 0x320
	// Line 700, Address: 0x124908, Func Offset: 0x328
	// Line 704, Address: 0x124910, Func Offset: 0x330
	// Line 701, Address: 0x12491c, Func Offset: 0x33c
	// Line 702, Address: 0x124920, Func Offset: 0x340
	// Line 705, Address: 0x124928, Func Offset: 0x348
	// Line 702, Address: 0x12492c, Func Offset: 0x34c
	// Line 703, Address: 0x124934, Func Offset: 0x354
	// Line 704, Address: 0x124944, Func Offset: 0x364
	// Line 705, Address: 0x124954, Func Offset: 0x374
	// Line 709, Address: 0x12495c, Func Offset: 0x37c
	// Line 710, Address: 0x124978, Func Offset: 0x398
	// Line 711, Address: 0x124990, Func Offset: 0x3b0
	// Line 712, Address: 0x1249a8, Func Offset: 0x3c8
	// Line 713, Address: 0x1249ac, Func Offset: 0x3cc
	// Line 715, Address: 0x1249b4, Func Offset: 0x3d4
	// Line 716, Address: 0x1249c0, Func Offset: 0x3e0
	// Line 713, Address: 0x1249c4, Func Offset: 0x3e4
	// Line 714, Address: 0x1249cc, Func Offset: 0x3ec
	// Line 715, Address: 0x1249dc, Func Offset: 0x3fc
	// Line 716, Address: 0x1249ec, Func Offset: 0x40c
	// Line 718, Address: 0x1249f4, Func Offset: 0x414
	// Line 719, Address: 0x124a10, Func Offset: 0x430
	// Line 720, Address: 0x124a14, Func Offset: 0x434
	// Line 722, Address: 0x124a1c, Func Offset: 0x43c
	// Line 720, Address: 0x124a28, Func Offset: 0x448
	// Line 723, Address: 0x124a2c, Func Offset: 0x44c
	// Line 720, Address: 0x124a30, Func Offset: 0x450
	// Line 721, Address: 0x124a34, Func Offset: 0x454
	// Line 722, Address: 0x124a38, Func Offset: 0x458
	// Line 723, Address: 0x124a48, Func Offset: 0x468
	// Line 725, Address: 0x124a50, Func Offset: 0x470
	// Line 726, Address: 0x124a58, Func Offset: 0x478
	// Line 727, Address: 0x124a5c, Func Offset: 0x47c
	// Line 729, Address: 0x124a64, Func Offset: 0x484
	// Line 730, Address: 0x124a70, Func Offset: 0x490
	// Line 727, Address: 0x124a74, Func Offset: 0x494
	// Line 728, Address: 0x124a7c, Func Offset: 0x49c
	// Line 729, Address: 0x124a8c, Func Offset: 0x4ac
	// Line 730, Address: 0x124a9c, Func Offset: 0x4bc
	// Line 733, Address: 0x124aa4, Func Offset: 0x4c4
	// Line 734, Address: 0x124ac0, Func Offset: 0x4e0
	// Line 735, Address: 0x124ad8, Func Offset: 0x4f8
	// Line 736, Address: 0x124adc, Func Offset: 0x4fc
	// Line 737, Address: 0x124ae0, Func Offset: 0x500
	// Line 738, Address: 0x124ae8, Func Offset: 0x508
	// Line 737, Address: 0x124af4, Func Offset: 0x514
	// Line 739, Address: 0x124af8, Func Offset: 0x518
	// Line 737, Address: 0x124afc, Func Offset: 0x51c
	// Line 738, Address: 0x124b00, Func Offset: 0x520
	// Line 739, Address: 0x124b10, Func Offset: 0x530
	// Line 741, Address: 0x124b18, Func Offset: 0x538
	// Line 750, Address: 0x124b34, Func Offset: 0x554
	// Line 751, Address: 0x124b38, Func Offset: 0x558
	// Line 752, Address: 0x124b3c, Func Offset: 0x55c
	// Line 753, Address: 0x124b44, Func Offset: 0x564
	// Line 752, Address: 0x124b50, Func Offset: 0x570
	// Line 754, Address: 0x124b54, Func Offset: 0x574
	// Line 752, Address: 0x124b58, Func Offset: 0x578
	// Line 753, Address: 0x124b5c, Func Offset: 0x57c
	// Line 754, Address: 0x124b6c, Func Offset: 0x58c
	// Line 757, Address: 0x124b74, Func Offset: 0x594
	// Line 758, Address: 0x124b7c, Func Offset: 0x59c
	// Line 759, Address: 0x124b94, Func Offset: 0x5b4
	// Line 760, Address: 0x124b98, Func Offset: 0x5b8
	// Line 762, Address: 0x124ba0, Func Offset: 0x5c0
	// Line 763, Address: 0x124bac, Func Offset: 0x5cc
	// Line 760, Address: 0x124bb0, Func Offset: 0x5d0
	// Line 761, Address: 0x124bb8, Func Offset: 0x5d8
	// Line 762, Address: 0x124bc8, Func Offset: 0x5e8
	// Line 763, Address: 0x124bd8, Func Offset: 0x5f8
	// Line 765, Address: 0x124be0, Func Offset: 0x600
	// Line 766, Address: 0x124bfc, Func Offset: 0x61c
	// Line 767, Address: 0x124c00, Func Offset: 0x620
	// Line 769, Address: 0x124c08, Func Offset: 0x628
	// Line 767, Address: 0x124c14, Func Offset: 0x634
	// Line 770, Address: 0x124c18, Func Offset: 0x638
	// Line 767, Address: 0x124c1c, Func Offset: 0x63c
	// Line 768, Address: 0x124c20, Func Offset: 0x640
	// Line 769, Address: 0x124c24, Func Offset: 0x644
	// Line 770, Address: 0x124c34, Func Offset: 0x654
	// Line 772, Address: 0x124c3c, Func Offset: 0x65c
	// Line 773, Address: 0x124c44, Func Offset: 0x664
	// Line 774, Address: 0x124c48, Func Offset: 0x668
	// Line 776, Address: 0x124c50, Func Offset: 0x670
	// Line 777, Address: 0x124c5c, Func Offset: 0x67c
	// Line 774, Address: 0x124c60, Func Offset: 0x680
	// Line 775, Address: 0x124c68, Func Offset: 0x688
	// Line 776, Address: 0x124c78, Func Offset: 0x698
	// Line 777, Address: 0x124c88, Func Offset: 0x6a8
	// Line 781, Address: 0x124c90, Func Offset: 0x6b0
	// Line 782, Address: 0x124c98, Func Offset: 0x6b8
	// Line 783, Address: 0x124cb0, Func Offset: 0x6d0
	// Line 787, Address: 0x124cc8, Func Offset: 0x6e8
	// Line 784, Address: 0x124cd4, Func Offset: 0x6f4
	// Line 785, Address: 0x124cd8, Func Offset: 0x6f8
	// Line 788, Address: 0x124ce0, Func Offset: 0x700
	// Line 785, Address: 0x124ce4, Func Offset: 0x704
	// Line 786, Address: 0x124cec, Func Offset: 0x70c
	// Line 787, Address: 0x124cfc, Func Offset: 0x71c
	// Line 788, Address: 0x124d0c, Func Offset: 0x72c
	// Line 790, Address: 0x124d14, Func Offset: 0x734
	// Line 791, Address: 0x124d30, Func Offset: 0x750
	// Line 794, Address: 0x124d34, Func Offset: 0x754
	// Line 791, Address: 0x124d40, Func Offset: 0x760
	// Line 792, Address: 0x124d44, Func Offset: 0x764
	// Line 795, Address: 0x124d4c, Func Offset: 0x76c
	// Line 792, Address: 0x124d50, Func Offset: 0x770
	// Line 793, Address: 0x124d58, Func Offset: 0x778
	// Line 794, Address: 0x124d5c, Func Offset: 0x77c
	// Line 795, Address: 0x124d6c, Func Offset: 0x78c
	// Line 797, Address: 0x124d74, Func Offset: 0x794
	// Line 801, Address: 0x124d7c, Func Offset: 0x79c
	// Line 798, Address: 0x124d88, Func Offset: 0x7a8
	// Line 799, Address: 0x124d8c, Func Offset: 0x7ac
	// Line 802, Address: 0x124d94, Func Offset: 0x7b4
	// Line 799, Address: 0x124d98, Func Offset: 0x7b8
	// Line 800, Address: 0x124da0, Func Offset: 0x7c0
	// Line 801, Address: 0x124db0, Func Offset: 0x7d0
	// Line 802, Address: 0x124dc0, Func Offset: 0x7e0
	// Line 805, Address: 0x124dc8, Func Offset: 0x7e8
	// Line 806, Address: 0x124de4, Func Offset: 0x804
	// Line 810, Address: 0x124dfc, Func Offset: 0x81c
	// Line 807, Address: 0x124e08, Func Offset: 0x828
	// Line 808, Address: 0x124e0c, Func Offset: 0x82c
	// Line 809, Address: 0x124e10, Func Offset: 0x830
	// Line 811, Address: 0x124e18, Func Offset: 0x838
	// Line 809, Address: 0x124e1c, Func Offset: 0x83c
	// Line 810, Address: 0x124e24, Func Offset: 0x844
	// Line 811, Address: 0x124e34, Func Offset: 0x854
	// Line 813, Address: 0x124e3c, Func Offset: 0x85c
	// Line 814, Address: 0x124e58, Func Offset: 0x878
	// Line 817, Address: 0x124e5c, Func Offset: 0x87c
	// Line 814, Address: 0x124e68, Func Offset: 0x888
	// Line 815, Address: 0x124e6c, Func Offset: 0x88c
	// Line 816, Address: 0x124e70, Func Offset: 0x890
	// Line 817, Address: 0x124e74, Func Offset: 0x894
	// Line 818, Address: 0x124e78, Func Offset: 0x898
	// Line 817, Address: 0x124e7c, Func Offset: 0x89c
	// Line 818, Address: 0x124e88, Func Offset: 0x8a8
	// Line 820, Address: 0x124e90, Func Offset: 0x8b0
	// Line 824, Address: 0x124e98, Func Offset: 0x8b8
	// Line 821, Address: 0x124ea4, Func Offset: 0x8c4
	// Line 822, Address: 0x124ea8, Func Offset: 0x8c8
	// Line 823, Address: 0x124eac, Func Offset: 0x8cc
	// Line 825, Address: 0x124eb4, Func Offset: 0x8d4
	// Line 823, Address: 0x124eb8, Func Offset: 0x8d8
	// Line 824, Address: 0x124ec0, Func Offset: 0x8e0
	// Line 825, Address: 0x124ed0, Func Offset: 0x8f0
	// Line 828, Address: 0x124ed8, Func Offset: 0x8f8
	// Line 829, Address: 0x124ee0, Func Offset: 0x900
	// Line 833, Address: 0x124ef8, Func Offset: 0x918
	// Line 830, Address: 0x124f04, Func Offset: 0x924
	// Line 831, Address: 0x124f08, Func Offset: 0x928
	// Line 834, Address: 0x124f10, Func Offset: 0x930
	// Line 831, Address: 0x124f14, Func Offset: 0x934
	// Line 832, Address: 0x124f1c, Func Offset: 0x93c
	// Line 833, Address: 0x124f2c, Func Offset: 0x94c
	// Line 834, Address: 0x124f3c, Func Offset: 0x95c
	// Line 836, Address: 0x124f44, Func Offset: 0x964
	// Line 837, Address: 0x124f60, Func Offset: 0x980
	// Line 840, Address: 0x124f64, Func Offset: 0x984
	// Line 837, Address: 0x124f70, Func Offset: 0x990
	// Line 838, Address: 0x124f74, Func Offset: 0x994
	// Line 841, Address: 0x124f7c, Func Offset: 0x99c
	// Line 838, Address: 0x124f80, Func Offset: 0x9a0
	// Line 839, Address: 0x124f88, Func Offset: 0x9a8
	// Line 840, Address: 0x124f8c, Func Offset: 0x9ac
	// Line 841, Address: 0x124f9c, Func Offset: 0x9bc
	// Line 843, Address: 0x124fa4, Func Offset: 0x9c4
	// Line 847, Address: 0x124fac, Func Offset: 0x9cc
	// Line 844, Address: 0x124fb8, Func Offset: 0x9d8
	// Line 845, Address: 0x124fbc, Func Offset: 0x9dc
	// Line 848, Address: 0x124fc4, Func Offset: 0x9e4
	// Line 845, Address: 0x124fc8, Func Offset: 0x9e8
	// Line 846, Address: 0x124fd0, Func Offset: 0x9f0
	// Line 847, Address: 0x124fe0, Func Offset: 0xa00
	// Line 848, Address: 0x124ff0, Func Offset: 0xa10
	// Line 853, Address: 0x124ffc, Func Offset: 0xa1c
	// Line 854, Address: 0x125020, Func Offset: 0xa40
	// Func End, Address: 0x125030, Func Offset: 0xa50
}

// iCylinderIsectRay__FPC10_xCylinderPC6_xRay3P7_xIsect
// Start address: 0x125030
void iCylinderIsectRay(_xCylinder* c, _xRay3* r, _xIsect* isx)
{
	uint32 num;
	float32 t_out;
	float32 t_in;
	float32 b;
	float32 a;
	// Line 481, Address: 0x125030, Func Offset: 0
	// Line 494, Address: 0x125044, Func Offset: 0x14
	// Line 495, Address: 0x125048, Func Offset: 0x18
	// Line 493, Address: 0x12504c, Func Offset: 0x1c
	// Line 494, Address: 0x125050, Func Offset: 0x20
	// Line 495, Address: 0x125054, Func Offset: 0x24
	// Line 493, Address: 0x125058, Func Offset: 0x28
	// Line 496, Address: 0x12505c, Func Offset: 0x2c
	// Line 495, Address: 0x125060, Func Offset: 0x30
	// Line 496, Address: 0x125068, Func Offset: 0x38
	// Line 495, Address: 0x125078, Func Offset: 0x48
	// Line 496, Address: 0x125080, Func Offset: 0x50
	// Line 502, Address: 0x1250ac, Func Offset: 0x7c
	// Line 504, Address: 0x1250b4, Func Offset: 0x84
	// Line 507, Address: 0x1250bc, Func Offset: 0x8c
	// Line 509, Address: 0x1250c4, Func Offset: 0x94
	// Line 507, Address: 0x1250cc, Func Offset: 0x9c
	// Line 509, Address: 0x1250d0, Func Offset: 0xa0
	// Line 510, Address: 0x1250e0, Func Offset: 0xb0
	// Line 511, Address: 0x125100, Func Offset: 0xd0
	// Line 512, Address: 0x125104, Func Offset: 0xd4
	// Line 514, Address: 0x12510c, Func Offset: 0xdc
	// Line 515, Address: 0x125178, Func Offset: 0x148
	// Line 516, Address: 0x12519c, Func Offset: 0x16c
	// Line 517, Address: 0x1251a0, Func Offset: 0x170
	// Line 516, Address: 0x1251a4, Func Offset: 0x174
	// Line 518, Address: 0x1251a8, Func Offset: 0x178
	// Line 519, Address: 0x1251b0, Func Offset: 0x180
	// Line 520, Address: 0x1251b4, Func Offset: 0x184
	// Line 523, Address: 0x1251bc, Func Offset: 0x18c
	// Line 524, Address: 0x125228, Func Offset: 0x1f8
	// Line 525, Address: 0x12524c, Func Offset: 0x21c
	// Line 526, Address: 0x125250, Func Offset: 0x220
	// Line 525, Address: 0x125254, Func Offset: 0x224
	// Line 527, Address: 0x125258, Func Offset: 0x228
	// Line 528, Address: 0x125260, Func Offset: 0x230
	// Line 529, Address: 0x1252d0, Func Offset: 0x2a0
	// Line 530, Address: 0x1252f4, Func Offset: 0x2c4
	// Line 531, Address: 0x1252f8, Func Offset: 0x2c8
	// Line 530, Address: 0x1252fc, Func Offset: 0x2cc
	// Line 532, Address: 0x125300, Func Offset: 0x2d0
	// Line 533, Address: 0x125308, Func Offset: 0x2d8
	// Line 534, Address: 0x12530c, Func Offset: 0x2dc
	// Line 538, Address: 0x125314, Func Offset: 0x2e4
	// Line 539, Address: 0x12531c, Func Offset: 0x2ec
	// Func End, Address: 0x125334, Func Offset: 0x304
}

// iCylinderIsectVec__FPC10_xCylinderPC6_xVec3P7_xIsect
// Start address: 0x125340
void iCylinderIsectVec(_xCylinder* c, _xVec3* v, _xIsect* isx)
{
	float32 b;
	// Line 463, Address: 0x125340, Func Offset: 0
	// Line 471, Address: 0x125350, Func Offset: 0x10
	// Line 472, Address: 0x125358, Func Offset: 0x18
	// Line 471, Address: 0x125360, Func Offset: 0x20
	// Line 472, Address: 0x125364, Func Offset: 0x24
	// Line 476, Address: 0x1253c0, Func Offset: 0x80
	// Line 477, Address: 0x1253c8, Func Offset: 0x88
	// Line 479, Address: 0x1253d0, Func Offset: 0x90
	// Func End, Address: 0x1253e4, Func Offset: 0xa4
}

// iSphereInitBoundOBB__FP8_xSpherePC5_xBoxPC8_xMat4x3
// Start address: 0x1253f0
void iSphereInitBoundOBB(_xSphere* s, _xBox* b, _xMat4x3* m)
{
	// Line 290, Address: 0x1253f0, Func Offset: 0
	// Line 295, Address: 0x12540c, Func Offset: 0x1c
	// Line 296, Address: 0x125414, Func Offset: 0x24
	// Line 301, Address: 0x125424, Func Offset: 0x34
	// Line 295, Address: 0x125428, Func Offset: 0x38
	// Line 296, Address: 0x125450, Func Offset: 0x60
	// Line 299, Address: 0x125474, Func Offset: 0x84
	// Line 301, Address: 0x125490, Func Offset: 0xa0
	// Line 299, Address: 0x125494, Func Offset: 0xa4
	// Line 301, Address: 0x125498, Func Offset: 0xa8
	// Line 303, Address: 0x1254d0, Func Offset: 0xe0
	// Line 310, Address: 0x1254f0, Func Offset: 0x100
	// Line 303, Address: 0x1254f4, Func Offset: 0x104
	// Line 310, Address: 0x1254f8, Func Offset: 0x108
	// Line 311, Address: 0x125510, Func Offset: 0x120
	// Func End, Address: 0x125530, Func Offset: 0x140
}

// iSphereIsectSphere__FPC8_xSpherePC8_xSphereP7_xIsect
// Start address: 0x125530
void iSphereIsectSphere(_xSphere* s, _xSphere* p, _xIsect* isx)
{
	// Line 235, Address: 0x125530, Func Offset: 0
	// Line 240, Address: 0x125544, Func Offset: 0x14
	// Line 241, Address: 0x125580, Func Offset: 0x50
	// Line 242, Address: 0x1255a4, Func Offset: 0x74
	// Line 243, Address: 0x1255b8, Func Offset: 0x88
	// Line 244, Address: 0x1255c8, Func Offset: 0x98
	// Func End, Address: 0x1255e0, Func Offset: 0xb0
}

// iSphereIsectRay__FPC8_xSpherePC6_xRay3P7_xIsect
// Start address: 0x1255e0
void iSphereIsectRay(_xSphere* s, _xRay3* r, _xIsect* isx)
{
	uint32 num;
	float32 t_out;
	float32 t_in;
	// Line 100, Address: 0x1255e0, Func Offset: 0
	// Line 113, Address: 0x1255f0, Func Offset: 0x10
	// Line 114, Address: 0x125604, Func Offset: 0x24
	// Line 116, Address: 0x125608, Func Offset: 0x28
	// Line 117, Address: 0x125618, Func Offset: 0x38
	// Line 120, Address: 0x12561c, Func Offset: 0x3c
	// Line 121, Address: 0x125624, Func Offset: 0x44
	// Line 120, Address: 0x125630, Func Offset: 0x50
	// Line 121, Address: 0x125658, Func Offset: 0x78
	// Line 128, Address: 0x1256b4, Func Offset: 0xd4
	// Line 129, Address: 0x1256bc, Func Offset: 0xdc
	// Line 132, Address: 0x1256c4, Func Offset: 0xe4
	// Line 133, Address: 0x1256d4, Func Offset: 0xf4
	// Line 134, Address: 0x125700, Func Offset: 0x120
	// Line 135, Address: 0x125704, Func Offset: 0x124
	// Line 137, Address: 0x12570c, Func Offset: 0x12c
	// Line 138, Address: 0x125714, Func Offset: 0x134
	// Line 139, Address: 0x125718, Func Offset: 0x138
	// Line 140, Address: 0x125720, Func Offset: 0x140
	// Line 143, Address: 0x125724, Func Offset: 0x144
	// Line 144, Address: 0x12572c, Func Offset: 0x14c
	// Line 145, Address: 0x125744, Func Offset: 0x164
	// Line 146, Address: 0x125758, Func Offset: 0x178
	// Line 147, Address: 0x12575c, Func Offset: 0x17c
	// Line 149, Address: 0x125764, Func Offset: 0x184
	// Line 152, Address: 0x12576c, Func Offset: 0x18c
	// Line 153, Address: 0x125770, Func Offset: 0x190
	// Line 156, Address: 0x125778, Func Offset: 0x198
	// Line 157, Address: 0x125780, Func Offset: 0x1a0
	// Line 158, Address: 0x125794, Func Offset: 0x1b4
	// Line 159, Address: 0x125798, Func Offset: 0x1b8
	// Line 160, Address: 0x1257a0, Func Offset: 0x1c0
	// Line 161, Address: 0x1257a4, Func Offset: 0x1c4
	// Line 162, Address: 0x1257ac, Func Offset: 0x1cc
	// Line 163, Address: 0x1257b0, Func Offset: 0x1d0
	// Line 164, Address: 0x1257b8, Func Offset: 0x1d8
	// Line 182, Address: 0x1257bc, Func Offset: 0x1dc
	// Func End, Address: 0x1257d0, Func Offset: 0x1f0
}

// iSphereIsectVec__FPC8_xSpherePC6_xVec3P7_xIsect
// Start address: 0x1257d0
void iSphereIsectVec(_xSphere* s, _xVec3* v, _xIsect* isx)
{
	// Line 90, Address: 0x1257d0, Func Offset: 0
	// Line 95, Address: 0x1257e0, Func Offset: 0x10
	// Line 96, Address: 0x125818, Func Offset: 0x48
	// Line 97, Address: 0x12583c, Func Offset: 0x6c
	// Line 98, Address: 0x125848, Func Offset: 0x78
	// Func End, Address: 0x12585c, Func Offset: 0x8c
}

// iMath3Exit__Fv
// Start address: 0x125860
void iMath3Exit()
{
	// Line 33, Address: 0x125860, Func Offset: 0
	// Func End, Address: 0x125868, Func Offset: 0x8
}

// iMath3Init__Fv
// Start address: 0x125870
void iMath3Init()
{
	// Line 30, Address: 0x125870, Func Offset: 0
	// Func End, Address: 0x125878, Func Offset: 0x8
}

