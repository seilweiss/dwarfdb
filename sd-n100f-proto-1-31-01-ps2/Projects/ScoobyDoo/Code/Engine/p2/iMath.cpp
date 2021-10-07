typedef struct Vector3D;
typedef struct xLine2D;
typedef struct _RwV2d;
typedef struct _RwV3d;
typedef struct tagMATRIX;


typedef Vector3D type_0[4];
typedef Vector3D type_1[4];
typedef Vector3D type_2[4];
typedef Vector3D type_3[4];
typedef _RwV2d type_4[2];
typedef _RwV2d type_5[2];
typedef Vector3D type_6[3];
typedef Vector3D type_7[3];

struct Vector3D
{
	float32 x;
	float32 y;
	float32 z;
};

struct xLine2D
{
	_RwV2d m_p[2];
	_RwV2d m_i[2];
	int32 m_iCount;
};

struct _RwV2d
{
	float32 x;
	float32 y;
};

struct _RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct tagMATRIX
{
	float32 _11;
	float32 _12;
	float32 _13;
	float32 _14;
	float32 _21;
	float32 _22;
	float32 _23;
	float32 _24;
	float32 _31;
	float32 _32;
	float32 _33;
	float32 _34;
	float32 _41;
	float32 _42;
	float32 _43;
	float32 _44;
};

float32 g_PI;
float32 g_2_PI;
float32 g_PI_DIV_2;
float32 g_PI_DIV_4;
float32 g_INV_PI;
float32 g_DEGTORAD;
float32 g_RADTODEG;
float32 g_HUGE;
float32 g_EPSILON;

void iMathFindPlane(float32* plane, Vector3D* p0, Vector3D* p1, Vector3D* p2);
int32 iMathPointInArc(Vector3D* p, Vector3D* arcpos, float32 arclength, float32 arcrad1, float32 arcrad2);
float32 iMathAngleOfVectorXZ(Vector3D* v);
void iMathRotateXYZVectorRIGHT(Vector3D* rot, Vector3D* v, Vector3D* result);
void iMathRotateXYZVector(Vector3D* rot, Vector3D* v, Vector3D* result);
int32 iMathIntersectLine2DLine2D(xLine2D* a, xLine2D* b, _RwV2d* i);
float32 iMathIntersectVector2DCircle(_RwV2d ray, _RwV2d ray_dir, _RwV2d center, float32 r, float32* rt1, float32* rt2);
int32 iMathPointIn2DPoly4(Vector3D* point, Vector3D* v1, Vector3D* v2, Vector3D* v3, Vector3D* v4);
int32 iMathPointIn2DRect(Vector3D* point, Vector3D* v1, Vector3D* v2);
int32 iMathPointIn2DTri(Vector3D* point, Vector3D* v1, Vector3D* v2, Vector3D* v3);
_RwV2d* iMathVector2DSub(_RwV2d* a, _RwV2d* b, _RwV2d* result);
float32 iMathVector2DMagnitude(_RwV2d* v);
Vector3D* iMathVectorMul(Vector3D* a, Vector3D* b, Vector3D* result);
Vector3D* iMathVectorSubXZ(Vector3D* a, Vector3D* b, Vector3D* r);
Vector3D* iMathVectorSub(Vector3D* a, Vector3D* b, Vector3D* result);
float32 iMathVectorMagnitude(Vector3D* v);
Vector3D* iMathVectorNormalize(Vector3D* v, Vector3D* retVal);
Vector3D* iMathVectorInv(Vector3D* a);
Vector3D* iMathCrossProduct(Vector3D* a, Vector3D* b, Vector3D* c);
float32 iMathDotProduct(Vector3D* a, Vector3D* b);
float32 iMathVectorSquareMagnitude(Vector3D* v);
float32 iMathSquareRoot(float32 val);
float32 iMathAngleAdd(float32 a, float32 b);
float32 iMathAngleClamp(float32 a);
void iMathInit();

// iMathFindPlane__FPfP8Vector3DP8Vector3DP8Vector3D
// Start address: 0x382030
void iMathFindPlane(float32* plane, Vector3D* p0, Vector3D* p1, Vector3D* p2)
{
	// Line 982, Address: 0x382030, Func Offset: 0
	// Line 983, Address: 0x38203c, Func Offset: 0xc
	// Line 984, Address: 0x382048, Func Offset: 0x18
	// Line 986, Address: 0x382054, Func Offset: 0x24
	// Line 987, Address: 0x382060, Func Offset: 0x30
	// Line 988, Address: 0x38206c, Func Offset: 0x3c
	// Line 991, Address: 0x382078, Func Offset: 0x48
	// Line 992, Address: 0x382084, Func Offset: 0x54
	// Line 993, Address: 0x382094, Func Offset: 0x64
	// Line 995, Address: 0x3820a0, Func Offset: 0x70
	// Line 996, Address: 0x3820d0, Func Offset: 0xa0
	// Func End, Address: 0x3820d8, Func Offset: 0xa8
}

// iMathPointInArc__FP8Vector3DP8Vector3Dfff
// Start address: 0x3820e0
int32 iMathPointInArc(Vector3D* p, Vector3D* arcpos, float32 arclength, float32 arcrad1, float32 arcrad2)
{
	float32 distance;
	int32 thetaGood;
	float32 theta;
	// Line 889, Address: 0x3820e0, Func Offset: 0
	// Line 892, Address: 0x382114, Func Offset: 0x34
	// Line 895, Address: 0x382118, Func Offset: 0x38
	// Line 899, Address: 0x38213c, Func Offset: 0x5c
	// Line 901, Address: 0x3821a0, Func Offset: 0xc0
	// Line 902, Address: 0x382290, Func Offset: 0x1b0
	// Line 903, Address: 0x382380, Func Offset: 0x2a0
	// Line 906, Address: 0x382470, Func Offset: 0x390
	// Line 908, Address: 0x382480, Func Offset: 0x3a0
	// Line 911, Address: 0x3824a0, Func Offset: 0x3c0
	// Line 914, Address: 0x3824a4, Func Offset: 0x3c4
	// Line 917, Address: 0x3824ac, Func Offset: 0x3cc
	// Line 918, Address: 0x3824bc, Func Offset: 0x3dc
	// Line 919, Address: 0x3824c8, Func Offset: 0x3e8
	// Line 920, Address: 0x3824d8, Func Offset: 0x3f8
	// Line 923, Address: 0x3824dc, Func Offset: 0x3fc
	// Line 928, Address: 0x3824e4, Func Offset: 0x404
	// Line 929, Address: 0x3824fc, Func Offset: 0x41c
	// Line 932, Address: 0x382508, Func Offset: 0x428
	// Line 933, Address: 0x382564, Func Offset: 0x484
	// Line 934, Address: 0x382574, Func Offset: 0x494
	// Line 937, Address: 0x382580, Func Offset: 0x4a0
	// Line 938, Address: 0x382584, Func Offset: 0x4a4
	// Func End, Address: 0x3825b4, Func Offset: 0x4d4
}

// iMathAngleOfVectorXZ__FP8Vector3D
// Start address: 0x3825c0
float32 iMathAngleOfVectorXZ(Vector3D* v)
{
	float32 angle;
	float32 ydiff;
	float32 xdiff;
	// Line 839, Address: 0x3825c0, Func Offset: 0
	// Line 841, Address: 0x3825d0, Func Offset: 0x10
	// Line 842, Address: 0x3825d4, Func Offset: 0x14
	// Line 845, Address: 0x3825d8, Func Offset: 0x18
	// Line 846, Address: 0x38260c, Func Offset: 0x4c
	// Line 847, Address: 0x382624, Func Offset: 0x64
	// Line 850, Address: 0x382638, Func Offset: 0x78
	// Func End, Address: 0x382650, Func Offset: 0x90
}

// iMathRotateXYZVectorRIGHT__FP8Vector3DP8Vector3DP8Vector3D
// Start address: 0x382650
void iMathRotateXYZVectorRIGHT(Vector3D* rot, Vector3D* v, Vector3D* result)
{
	tagMATRIX m2;
	tagMATRIX m1;
	tagMATRIX mz;
	tagMATRIX my;
	tagMATRIX mx;
	// Line 795, Address: 0x382650, Func Offset: 0
	// Line 799, Address: 0x382670, Func Offset: 0x20
	// Line 800, Address: 0x382680, Func Offset: 0x30
	// Line 801, Address: 0x382690, Func Offset: 0x40
	// Line 803, Address: 0x3826a0, Func Offset: 0x50
	// Line 804, Address: 0x3826b4, Func Offset: 0x64
	// Line 807, Address: 0x3826c8, Func Offset: 0x78
	// Line 808, Address: 0x3826dc, Func Offset: 0x8c
	// Func End, Address: 0x3826f8, Func Offset: 0xa8
}

// iMathRotateXYZVector__FP8Vector3DP8Vector3DP8Vector3D
// Start address: 0x382700
void iMathRotateXYZVector(Vector3D* rot, Vector3D* v, Vector3D* result)
{
	tagMATRIX m2;
	tagMATRIX m1;
	tagMATRIX mz;
	tagMATRIX my;
	tagMATRIX mx;
	// Line 773, Address: 0x382700, Func Offset: 0
	// Line 777, Address: 0x382720, Func Offset: 0x20
	// Line 778, Address: 0x382730, Func Offset: 0x30
	// Line 779, Address: 0x382740, Func Offset: 0x40
	// Line 781, Address: 0x382750, Func Offset: 0x50
	// Line 782, Address: 0x382764, Func Offset: 0x64
	// Line 785, Address: 0x382778, Func Offset: 0x78
	// Line 786, Address: 0x38278c, Func Offset: 0x8c
	// Func End, Address: 0x3827a8, Func Offset: 0xa8
}

// iMathIntersectLine2DLine2D__FP7xLine2DP7xLine2DP6_RwV2d
// Start address: 0x3827b0
int32 iMathIntersectLine2DLine2D(xLine2D* a, xLine2D* b, _RwV2d* i)
{
	float32 denom;
	float32 s;
	float32 num2;
	float32 r;
	float32 num;
	float32 YD;
	float32 XD;
	float32 YC;
	float32 XC;
	float32 YB;
	float32 XB;
	float32 YA;
	float32 XA;
	float32 ib;
	float32 ia;
	// Line 697, Address: 0x3827b0, Func Offset: 0
	// Line 717, Address: 0x3827ec, Func Offset: 0x3c
	// Line 718, Address: 0x3827f0, Func Offset: 0x40
	// Line 719, Address: 0x3827f4, Func Offset: 0x44
	// Line 720, Address: 0x3827f8, Func Offset: 0x48
	// Line 721, Address: 0x3827fc, Func Offset: 0x4c
	// Line 722, Address: 0x382800, Func Offset: 0x50
	// Line 723, Address: 0x382804, Func Offset: 0x54
	// Line 724, Address: 0x382808, Func Offset: 0x58
	// Line 726, Address: 0x38280c, Func Offset: 0x5c
	// Line 728, Address: 0x382824, Func Offset: 0x74
	// Line 729, Address: 0x382848, Func Offset: 0x98
	// Line 731, Address: 0x382854, Func Offset: 0xa4
	// Line 733, Address: 0x38286c, Func Offset: 0xbc
	// Line 735, Address: 0x382878, Func Offset: 0xc8
	// Line 736, Address: 0x3828c4, Func Offset: 0x114
	// Line 738, Address: 0x3828d0, Func Offset: 0x120
	// Line 740, Address: 0x3828e8, Func Offset: 0x138
	// Line 742, Address: 0x3828f4, Func Offset: 0x144
	// Line 743, Address: 0x382940, Func Offset: 0x190
	// Line 748, Address: 0x38294c, Func Offset: 0x19c
	// Line 749, Address: 0x382958, Func Offset: 0x1a8
	// Line 751, Address: 0x382964, Func Offset: 0x1b4
	// Line 753, Address: 0x38296c, Func Offset: 0x1bc
	// Line 754, Address: 0x382970, Func Offset: 0x1c0
	// Line 756, Address: 0x382974, Func Offset: 0x1c4
	// Line 758, Address: 0x382984, Func Offset: 0x1d4
	// Line 759, Address: 0x382994, Func Offset: 0x1e4
	// Line 760, Address: 0x3829a4, Func Offset: 0x1f4
	// Line 763, Address: 0x3829b0, Func Offset: 0x200
	// Line 764, Address: 0x3829b4, Func Offset: 0x204
	// Func End, Address: 0x3829f0, Func Offset: 0x240
}

// iMathIntersectVector2DCircle__F6_RwV2d6_RwV2d6_RwV2dfPfPf
// Start address: 0x3829f0
float32 iMathIntersectVector2DCircle(_RwV2d ray, _RwV2d ray_dir, _RwV2d center, float32 r, float32* rt1, float32* rt2)
{
	float32 t2;
	float32 t1;
	float32 oo_2a;
	float32 sd;
	float32 discriminant;
	float32 c;
	float32 b;
	float32 a;
	float32 m;
	float32 l;
	float32 j;
	float32 i;
	// Line 567, Address: 0x3829f0, Func Offset: 0
	// Line 574, Address: 0x382a34, Func Offset: 0x44
	// Line 575, Address: 0x382a3c, Func Offset: 0x4c
	// Line 576, Address: 0x382a5c, Func Offset: 0x6c
	// Line 578, Address: 0x382a7c, Func Offset: 0x8c
	// Line 580, Address: 0x382a94, Func Offset: 0xa4
	// Line 581, Address: 0x382aac, Func Offset: 0xbc
	// Line 583, Address: 0x382abc, Func Offset: 0xcc
	// Line 585, Address: 0x382ad4, Func Offset: 0xe4
	// Line 586, Address: 0x382af0, Func Offset: 0x100
	// Line 587, Address: 0x382af8, Func Offset: 0x108
	// Line 591, Address: 0x382b04, Func Offset: 0x114
	// Line 592, Address: 0x382b0c, Func Offset: 0x11c
	// Line 593, Address: 0x382b28, Func Offset: 0x138
	// Line 594, Address: 0x382b34, Func Offset: 0x144
	// Line 596, Address: 0x382b40, Func Offset: 0x150
	// Line 598, Address: 0x382b58, Func Offset: 0x168
	// Line 600, Address: 0x382b80, Func Offset: 0x190
	// Line 601, Address: 0x382b84, Func Offset: 0x194
	// Line 602, Address: 0x382b88, Func Offset: 0x198
	// Line 606, Address: 0x382b94, Func Offset: 0x1a4
	// Line 607, Address: 0x382b98, Func Offset: 0x1a8
	// Line 608, Address: 0x382b9c, Func Offset: 0x1ac
	// Line 613, Address: 0x382ba4, Func Offset: 0x1b4
	// Line 614, Address: 0x382ba8, Func Offset: 0x1b8
	// Line 618, Address: 0x382bac, Func Offset: 0x1bc
	// Func End, Address: 0x382bcc, Func Offset: 0x1dc
}

// iMathPointIn2DPoly4__FP8Vector3DP8Vector3DP8Vector3DP8Vector3DP8Vector3D
// Start address: 0x382bd0
int32 iMathPointIn2DPoly4(Vector3D* point, Vector3D* v1, Vector3D* v2, Vector3D* v3, Vector3D* v4)
{
	Vector3D tmpVec;
	float32 d;
	Vector3D up;
	Vector3D p[4];
	Vector3D n[4];
	Vector3D u[4];
	Vector3D vec[4];
	float32 tmpY;
	int32 i;
	// Line 391, Address: 0x382bd0, Func Offset: 0
	// Line 396, Address: 0x382bd4, Func Offset: 0x4
	// Line 397, Address: 0x382bf0, Func Offset: 0x20
	// Line 400, Address: 0x382bf4, Func Offset: 0x24
	// Line 401, Address: 0x382bf8, Func Offset: 0x28
	// Line 403, Address: 0x382c00, Func Offset: 0x30
	// Line 404, Address: 0x382c30, Func Offset: 0x60
	// Line 405, Address: 0x382c60, Func Offset: 0x90
	// Line 406, Address: 0x382c90, Func Offset: 0xc0
	// Line 408, Address: 0x382cc0, Func Offset: 0xf0
	// Line 409, Address: 0x382d24, Func Offset: 0x154
	// Line 410, Address: 0x382d88, Func Offset: 0x1b8
	// Line 411, Address: 0x382dec, Func Offset: 0x21c
	// Line 413, Address: 0x382e50, Func Offset: 0x280
	// Line 415, Address: 0x382e5c, Func Offset: 0x28c
	// Line 416, Address: 0x382fa0, Func Offset: 0x3d0
	// Line 417, Address: 0x382fb4, Func Offset: 0x3e4
	// Line 418, Address: 0x382fe4, Func Offset: 0x414
	// Line 419, Address: 0x383014, Func Offset: 0x444
	// Line 420, Address: 0x383044, Func Offset: 0x474
	// Line 422, Address: 0x383074, Func Offset: 0x4a4
	// Line 425, Address: 0x383078, Func Offset: 0x4a8
	// Line 427, Address: 0x383084, Func Offset: 0x4b4
	// Line 428, Address: 0x38311c, Func Offset: 0x54c
	// Line 429, Address: 0x383128, Func Offset: 0x558
	// Line 432, Address: 0x38313c, Func Offset: 0x56c
	// Line 433, Address: 0x383140, Func Offset: 0x570
	// Func End, Address: 0x38314c, Func Offset: 0x57c
}

// iMathPointIn2DRect__FP8Vector3DP8Vector3DP8Vector3D
// Start address: 0x383150
int32 iMathPointIn2DRect(Vector3D* point, Vector3D* v1, Vector3D* v2)
{
	// Line 348, Address: 0x383150, Func Offset: 0
	// Line 349, Address: 0x383168, Func Offset: 0x18
	// Line 350, Address: 0x383180, Func Offset: 0x30
	// Line 355, Address: 0x3831e0, Func Offset: 0x90
	// Line 358, Address: 0x3831ec, Func Offset: 0x9c
	// Line 363, Address: 0x38324c, Func Offset: 0xfc
	// Line 367, Address: 0x383258, Func Offset: 0x108
	// Line 368, Address: 0x383270, Func Offset: 0x120
	// Line 373, Address: 0x3832d0, Func Offset: 0x180
	// Line 376, Address: 0x3832dc, Func Offset: 0x18c
	// Line 381, Address: 0x38333c, Func Offset: 0x1ec
	// Line 387, Address: 0x383348, Func Offset: 0x1f8
	// Line 388, Address: 0x38334c, Func Offset: 0x1fc
	// Func End, Address: 0x383354, Func Offset: 0x204
}

// iMathPointIn2DTri__FP8Vector3DP8Vector3DP8Vector3DP8Vector3D
// Start address: 0x383360
int32 iMathPointIn2DTri(Vector3D* point, Vector3D* v1, Vector3D* v2, Vector3D* v3)
{
	float32 tmpY;
	Vector3D tmpVec;
	int32 i;
	float32 d;
	Vector3D up;
	Vector3D p[3];
	Vector3D n[3];
	// Line 283, Address: 0x383360, Func Offset: 0
	// Line 285, Address: 0x383368, Func Offset: 0x8
	// Line 286, Address: 0x383384, Func Offset: 0x24
	// Line 291, Address: 0x383388, Func Offset: 0x28
	// Line 292, Address: 0x3833a0, Func Offset: 0x40
	// Line 293, Address: 0x3833b8, Func Offset: 0x58
	// Line 294, Address: 0x3833d0, Func Offset: 0x70
	// Line 296, Address: 0x3833dc, Func Offset: 0x7c
	// Line 297, Address: 0x3833f4, Func Offset: 0x94
	// Line 298, Address: 0x38340c, Func Offset: 0xac
	// Line 299, Address: 0x383424, Func Offset: 0xc4
	// Line 301, Address: 0x383430, Func Offset: 0xd0
	// Line 302, Address: 0x383448, Func Offset: 0xe8
	// Line 303, Address: 0x383460, Func Offset: 0x100
	// Line 304, Address: 0x383478, Func Offset: 0x118
	// Line 306, Address: 0x383484, Func Offset: 0x124
	// Line 307, Address: 0x38349c, Func Offset: 0x13c
	// Line 308, Address: 0x3834b4, Func Offset: 0x154
	// Line 309, Address: 0x3834cc, Func Offset: 0x16c
	// Line 311, Address: 0x3834d8, Func Offset: 0x178
	// Line 312, Address: 0x3834dc, Func Offset: 0x17c
	// Line 314, Address: 0x3834e4, Func Offset: 0x184
	// Line 315, Address: 0x383508, Func Offset: 0x1a8
	// Line 316, Address: 0x38352c, Func Offset: 0x1cc
	// Line 318, Address: 0x383550, Func Offset: 0x1f0
	// Line 319, Address: 0x3835a8, Func Offset: 0x248
	// Line 320, Address: 0x383600, Func Offset: 0x2a0
	// Line 322, Address: 0x383658, Func Offset: 0x2f8
	// Line 323, Address: 0x38367c, Func Offset: 0x31c
	// Line 324, Address: 0x3836ac, Func Offset: 0x34c
	// Line 325, Address: 0x3836d0, Func Offset: 0x370
	// Line 326, Address: 0x383700, Func Offset: 0x3a0
	// Line 327, Address: 0x383724, Func Offset: 0x3c4
	// Line 329, Address: 0x383754, Func Offset: 0x3f4
	// Line 332, Address: 0x383758, Func Offset: 0x3f8
	// Line 334, Address: 0x383764, Func Offset: 0x404
	// Line 335, Address: 0x3837fc, Func Offset: 0x49c
	// Line 336, Address: 0x383808, Func Offset: 0x4a8
	// Line 339, Address: 0x38381c, Func Offset: 0x4bc
	// Line 340, Address: 0x383820, Func Offset: 0x4c0
	// Func End, Address: 0x383830, Func Offset: 0x4d0
}

// iMathVector2DSub__FP6_RwV2dP6_RwV2dP6_RwV2d
// Start address: 0x383830
_RwV2d* iMathVector2DSub(_RwV2d* a, _RwV2d* b, _RwV2d* result)
{
	// Line 246, Address: 0x383830, Func Offset: 0
	// Line 247, Address: 0x383840, Func Offset: 0x10
	// Line 249, Address: 0x383850, Func Offset: 0x20
	// Line 250, Address: 0x383854, Func Offset: 0x24
	// Func End, Address: 0x38385c, Func Offset: 0x2c
}

// iMathVector2DMagnitude__FP6_RwV2d
// Start address: 0x383860
float32 iMathVector2DMagnitude(_RwV2d* v)
{
	// Line 232, Address: 0x383860, Func Offset: 0
	// Line 233, Address: 0x383868, Func Offset: 0x8
	// Line 234, Address: 0x3838cc, Func Offset: 0x6c
	// Func End, Address: 0x3838dc, Func Offset: 0x7c
}

// iMathVectorMul__FP8Vector3DP8Vector3DP8Vector3D
// Start address: 0x3838e0
Vector3D* iMathVectorMul(Vector3D* a, Vector3D* b, Vector3D* result)
{
	// Line 215, Address: 0x3838e0, Func Offset: 0
	// Line 216, Address: 0x3838f0, Func Offset: 0x10
	// Line 217, Address: 0x383900, Func Offset: 0x20
	// Line 219, Address: 0x383910, Func Offset: 0x30
	// Line 220, Address: 0x383914, Func Offset: 0x34
	// Func End, Address: 0x38391c, Func Offset: 0x3c
}

// iMathVectorSubXZ__FP8Vector3DP8Vector3DP8Vector3D
// Start address: 0x383920
Vector3D* iMathVectorSubXZ(Vector3D* a, Vector3D* b, Vector3D* r)
{
	// Line 207, Address: 0x383920, Func Offset: 0
	// Line 208, Address: 0x383930, Func Offset: 0x10
	// Line 209, Address: 0x383940, Func Offset: 0x20
	// Line 210, Address: 0x383944, Func Offset: 0x24
	// Func End, Address: 0x38394c, Func Offset: 0x2c
}

// iMathVectorSub__FP8Vector3DP8Vector3DP8Vector3D
// Start address: 0x383950
Vector3D* iMathVectorSub(Vector3D* a, Vector3D* b, Vector3D* result)
{
	// Line 198, Address: 0x383950, Func Offset: 0
	// Line 199, Address: 0x383960, Func Offset: 0x10
	// Line 200, Address: 0x383970, Func Offset: 0x20
	// Line 202, Address: 0x383980, Func Offset: 0x30
	// Line 203, Address: 0x383984, Func Offset: 0x34
	// Func End, Address: 0x38398c, Func Offset: 0x3c
}

// iMathVectorMagnitude__FP8Vector3D
// Start address: 0x383990
float32 iMathVectorMagnitude(Vector3D* v)
{
	// Line 174, Address: 0x383990, Func Offset: 0
	// Line 175, Address: 0x383998, Func Offset: 0x8
	// Line 176, Address: 0x383a0c, Func Offset: 0x7c
	// Func End, Address: 0x383a1c, Func Offset: 0x8c
}

// iMathVectorNormalize__FP8Vector3DP8Vector3D
// Start address: 0x383a20
Vector3D* iMathVectorNormalize(Vector3D* v, Vector3D* retVal)
{
	float32 oodiv;
	// Line 161, Address: 0x383a20, Func Offset: 0
	// Line 164, Address: 0x383a38, Func Offset: 0x18
	// Line 166, Address: 0x383abc, Func Offset: 0x9c
	// Line 167, Address: 0x383ac8, Func Offset: 0xa8
	// Line 168, Address: 0x383ad4, Func Offset: 0xb4
	// Line 170, Address: 0x383ae0, Func Offset: 0xc0
	// Line 171, Address: 0x383ae4, Func Offset: 0xc4
	// Func End, Address: 0x383afc, Func Offset: 0xdc
}

// iMathVectorInv__FP8Vector3D
// Start address: 0x383b00
Vector3D* iMathVectorInv(Vector3D* a)
{
	// Line 154, Address: 0x383b00, Func Offset: 0
	// Line 155, Address: 0x383b14, Func Offset: 0x14
	// Line 156, Address: 0x383b28, Func Offset: 0x28
	// Line 157, Address: 0x383b3c, Func Offset: 0x3c
	// Line 158, Address: 0x383b40, Func Offset: 0x40
	// Func End, Address: 0x383b48, Func Offset: 0x48
}

// iMathCrossProduct__FP8Vector3DP8Vector3DP8Vector3D
// Start address: 0x383b50
Vector3D* iMathCrossProduct(Vector3D* a, Vector3D* b, Vector3D* c)
{
	// Line 128, Address: 0x383b50, Func Offset: 0
	// Line 129, Address: 0x383b6c, Func Offset: 0x1c
	// Line 130, Address: 0x383b88, Func Offset: 0x38
	// Line 132, Address: 0x383ba4, Func Offset: 0x54
	// Line 133, Address: 0x383ba8, Func Offset: 0x58
	// Func End, Address: 0x383bb0, Func Offset: 0x60
}

// iMathDotProduct__FP8Vector3DP8Vector3D
// Start address: 0x383bb0
float32 iMathDotProduct(Vector3D* a, Vector3D* b)
{
	// Line 122, Address: 0x383bb0, Func Offset: 0
	// Line 123, Address: 0x383bd8, Func Offset: 0x28
	// Func End, Address: 0x383be0, Func Offset: 0x30
}

// iMathVectorSquareMagnitude__FP8Vector3D
// Start address: 0x383be0
float32 iMathVectorSquareMagnitude(Vector3D* v)
{
	// Line 112, Address: 0x383be0, Func Offset: 0
	// Line 113, Address: 0x383c08, Func Offset: 0x28
	// Func End, Address: 0x383c10, Func Offset: 0x30
}

// iMathSquareRoot__Ff
// Start address: 0x383c10
float32 iMathSquareRoot(float32 val)
{
	// Line 100, Address: 0x383c10, Func Offset: 0
	// Line 101, Address: 0x383c18, Func Offset: 0x8
	// Line 102, Address: 0x383c30, Func Offset: 0x20
	// Line 104, Address: 0x383c40, Func Offset: 0x30
	// Line 105, Address: 0x383c58, Func Offset: 0x48
	// Line 107, Address: 0x383c5c, Func Offset: 0x4c
	// Line 108, Address: 0x383c64, Func Offset: 0x54
	// Func End, Address: 0x383c74, Func Offset: 0x64
}

// iMathAngleAdd__Fff
// Start address: 0x383c80
float32 iMathAngleAdd(float32 a, float32 b)
{
	// Line 96, Address: 0x383c80, Func Offset: 0
	// Line 97, Address: 0x383d78, Func Offset: 0xf8
	// Func End, Address: 0x383d80, Func Offset: 0x100
}

// iMathAngleClamp__Ff
// Start address: 0x383d80
float32 iMathAngleClamp(float32 a)
{
	// Line 68, Address: 0x383d80, Func Offset: 0
	// Line 69, Address: 0x383dc0, Func Offset: 0x40
	// Line 72, Address: 0x383dcc, Func Offset: 0x4c
	// Line 74, Address: 0x383e00, Func Offset: 0x80
	// Line 75, Address: 0x383e38, Func Offset: 0xb8
	// Line 78, Address: 0x383e44, Func Offset: 0xc4
	// Line 80, Address: 0x383e70, Func Offset: 0xf0
	// Line 81, Address: 0x383e74, Func Offset: 0xf4
	// Func End, Address: 0x383e7c, Func Offset: 0xfc
}

// iMathInit__Fv
// Start address: 0x383e80
void iMathInit()
{
	// Line 40, Address: 0x383e80, Func Offset: 0
	// Func End, Address: 0x383e88, Func Offset: 0x8
}

