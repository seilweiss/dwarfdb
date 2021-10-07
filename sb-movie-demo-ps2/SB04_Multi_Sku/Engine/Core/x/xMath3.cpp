



void xSphereRandomPointOnSphere(xSphere* sphere, xVec3& pt);
uint8 xMat4x3Eq(xMat4x3& a, xMat4x3& b, float32 tol);
uint8 xVec3Rotate(xMat3x3* o, xVec3* a, xVec3* b, float32 l);
void xQuatDiff(xQuat* o, xQuat* a, xQuat* b);
void xQuatMul(xQuat* o, xQuat* a, xQuat* b);
void xQuatSlerp(xQuat* o, xQuat* a, xQuat* b, float32 t);
float32 xQuatNormalize(xQuat* o, xQuat* q);
void xQuatToAxisAngle(xQuat* q, xVec3* a, float32* t);
void xQuatToMat(xQuat* q, xMat3x3* m);
void xQuatFromAxisAngle(xQuat* q, xVec3* a, float32 t);
void xQuatFromMat(xQuat* q, xMat3x3* m);
void xMat4x3RMul3x3(xMat4x3* o, xMat3x3* m3x3, xMat4x3* m);
void xMat4x3Mul(xMat4x3* o, xMat4x3* a, xMat4x3* b);
void xMat4x3RotY(xMat4x3* m, float32 t, xVec3* p);
void xMat4x3Rot(xMat4x3* m, xVec3* a, float32 t, xVec3* p);
void xMat3x3Tolocal(xVec3* o, xMat3x3* m, xVec3* v);
void xMat3x3LMulVec(xVec3* o, xMat3x3* m, xVec3* v);
void xMat3x3Mul(xMat3x3* o, xMat3x3* a, xMat3x3* b);
void xMat3x3Transpose(xMat3x3* o, xMat3x3* m);
void xMat3x3RMulRotY(xMat3x3* o, xMat3x3* m, float32 t);
void xMat3x3ScaleC(xMat3x3* m, float32 x, float32 y, float32 z);
void xMat3x3RotZ(xMat3x3* m, float32 t);
void xMat3x3RotY(xMat3x3* m, float32 t);
void xMat3x3RotX(xMat3x3* m, float32 t);
void xMat3x3RotC(xMat3x3* m, float32 _x, float32 _y, float32 _z, float32 t);
void xMat3x3Euler(xMat3x3* m, float32 yaw, float32 pitch, float32 roll);
void xMat3x3Euler(xMat3x3* m, xVec3* ypr);
float32 xMat3x3LookVec4(xMat3x3& mat, float32 at_x, float32 at_y, float32 at_z, xVec3& hint_right);
float32 xMat3x3LookVec(xMat3x3* m, xVec3* at);
void xMat4x3MoveLocalAt(xMat4x3* m, float32 mag);
void xMat4x3MoveLocalUp(xMat4x3* m, float32 mag);
void xMat4x3MoveLocalRight(xMat4x3* m, float32 mag);
void xMat3x3GetEuler(xMat3x3* m, xVec3* a);
void xMat3x3Normalize(xMat3x3* o, xMat3x3* m);
void xBoxFromCone(xBox& box, xVec3& center, xVec3& dir, float32 dist, float32 r1, float32 r2);
void xBoxInitBoundCapsule(xBox* b, xCapsule* c);
void xBoxInitBoundOBB(xBox* o, xBox* b, xMat4x3* m);
int32 xPointInBox(xBox* b, xVec3* p);
void xTri3VecMinDist(xVec3* V0, xVec3* V1, xVec3* V2, xVec3* p, float32& s, float32& t);
void xLine3VecDist2(xVec3* p1, xVec3* p2, xVec3* v, xIsect* isx);
void xMath3Init();

// xSphereRandomPointOnSphere__FPC7xSphereR5xVec3
// Start address: 0x40c8c0
void xSphereRandomPointOnSphere(xSphere* sphere, xVec3& pt)
{
	// Line 4079, Address: 0x40c8c0, Func Offset: 0
	// Line 4080, Address: 0x40c8e4, Func Offset: 0x24
	// Line 4081, Address: 0x40caa8, Func Offset: 0x1e8
	// Line 4082, Address: 0x40cab0, Func Offset: 0x1f0
	// Line 4081, Address: 0x40cabc, Func Offset: 0x1fc
	// Line 4082, Address: 0x40cadc, Func Offset: 0x21c
	// Line 4083, Address: 0x40cb00, Func Offset: 0x240
	// Func End, Address: 0x40cb20, Func Offset: 0x260
}

// xMat4x3Eq__FRC7xMat4x3RC7xMat4x3f
// Start address: 0x40cb20
uint8 xMat4x3Eq(xMat4x3& a, xMat4x3& b, float32 tol)
{
	xVec4* va;
	xVec4* vb;
	int32 i;
	// Line 4069, Address: 0x40cb20, Func Offset: 0
	// Line 4071, Address: 0x40cb24, Func Offset: 0x4
	// Line 4073, Address: 0x40cb80, Func Offset: 0x60
	// Line 4071, Address: 0x40cb84, Func Offset: 0x64
	// Line 4073, Address: 0x40cb88, Func Offset: 0x68
	// Line 4074, Address: 0x40cb94, Func Offset: 0x74
	// Line 4072, Address: 0x40cb9c, Func Offset: 0x7c
	// Line 4075, Address: 0x40cba0, Func Offset: 0x80
	// Func End, Address: 0x40cba8, Func Offset: 0x88
}

// xVec3Rotate__FP7xMat3x3PC5xVec3PC5xVec3f
// Start address: 0x40cbb0
uint8 xVec3Rotate(xMat3x3* o, xVec3* a, xVec3* b, float32 l)
{
	xVec3 axis;
	float32 angle;
	// Line 3843, Address: 0x40cbb0, Func Offset: 0
	// Line 3845, Address: 0x40cbb4, Func Offset: 0x4
	// Line 3843, Address: 0x40cbb8, Func Offset: 0x8
	// Line 3844, Address: 0x40cbc8, Func Offset: 0x18
	// Line 3845, Address: 0x40cbcc, Func Offset: 0x1c
	// Line 3844, Address: 0x40cbd0, Func Offset: 0x20
	// Line 3843, Address: 0x40cbd8, Func Offset: 0x28
	// Line 3844, Address: 0x40cbe4, Func Offset: 0x34
	// Line 3843, Address: 0x40cbe8, Func Offset: 0x38
	// Line 3844, Address: 0x40cbec, Func Offset: 0x3c
	// Line 3845, Address: 0x40cbf0, Func Offset: 0x40
	// Line 3844, Address: 0x40cbf4, Func Offset: 0x44
	// Line 3845, Address: 0x40cbfc, Func Offset: 0x4c
	// Line 3846, Address: 0x40cc08, Func Offset: 0x58
	// Line 3850, Address: 0x40cc10, Func Offset: 0x60
	// Line 3851, Address: 0x40cc14, Func Offset: 0x64
	// Line 3850, Address: 0x40cc1c, Func Offset: 0x6c
	// Line 3851, Address: 0x40cc44, Func Offset: 0x94
	// Line 3854, Address: 0x40cc4c, Func Offset: 0x9c
	// Line 3855, Address: 0x40cc8c, Func Offset: 0xdc
	// Line 3856, Address: 0x40cc98, Func Offset: 0xe8
	// Line 3859, Address: 0x40cc9c, Func Offset: 0xec
	// Line 3862, Address: 0x40ccb4, Func Offset: 0x104
	// Line 3863, Address: 0x40ccb8, Func Offset: 0x108
	// Func End, Address: 0x40ccd0, Func Offset: 0x120
}

// xQuatDiff__FP5xQuatPC5xQuatPC5xQuat
// Start address: 0x40ccd0
void xQuatDiff(xQuat* o, xQuat* a, xQuat* b)
{
	// Line 3757, Address: 0x40ccd0, Func Offset: 0
	// Line 3758, Address: 0x40ccd4, Func Offset: 0x4
	// Line 3757, Address: 0x40ccd8, Func Offset: 0x8
	// Line 3758, Address: 0x40cd20, Func Offset: 0x50
	// Line 3761, Address: 0x40cdec, Func Offset: 0x11c
	// Line 3827, Address: 0x40ce04, Func Offset: 0x134
	// Line 3762, Address: 0x40ce10, Func Offset: 0x140
	// Line 3827, Address: 0x40ce14, Func Offset: 0x144
	// Line 3762, Address: 0x40ce1c, Func Offset: 0x14c
	// Line 3827, Address: 0x40ce20, Func Offset: 0x150
	// Line 3762, Address: 0x40ce28, Func Offset: 0x158
	// Line 3827, Address: 0x40ce2c, Func Offset: 0x15c
	// Line 3762, Address: 0x40ce34, Func Offset: 0x164
	// Line 3827, Address: 0x40ce40, Func Offset: 0x170
	// Func End, Address: 0x40ce48, Func Offset: 0x178
}

// xQuatMul__FP5xQuatPC5xQuatPC5xQuat
// Start address: 0x40ce50
void xQuatMul(xQuat* o, xQuat* a, xQuat* b)
{
	// Line 3677, Address: 0x40ce50, Func Offset: 0
	// Line 3705, Address: 0x40ce54, Func Offset: 0x4
	// Line 3677, Address: 0x40ce58, Func Offset: 0x8
	// Line 3701, Address: 0x40ce70, Func Offset: 0x20
	// Line 3677, Address: 0x40ce74, Func Offset: 0x24
	// Line 3701, Address: 0x40ce78, Func Offset: 0x28
	// Line 3705, Address: 0x40ce7c, Func Offset: 0x2c
	// Line 3701, Address: 0x40ce80, Func Offset: 0x30
	// Line 3702, Address: 0x40ce8c, Func Offset: 0x3c
	// Line 3701, Address: 0x40ce94, Func Offset: 0x44
	// Line 3702, Address: 0x40ce98, Func Offset: 0x48
	// Line 3703, Address: 0x40cea0, Func Offset: 0x50
	// Line 3704, Address: 0x40ceb0, Func Offset: 0x60
	// Line 3702, Address: 0x40ceb8, Func Offset: 0x68
	// Line 3704, Address: 0x40cebc, Func Offset: 0x6c
	// Line 3703, Address: 0x40cec4, Func Offset: 0x74
	// Line 3704, Address: 0x40cec8, Func Offset: 0x78
	// Line 3705, Address: 0x40cedc, Func Offset: 0x8c
	// Line 3716, Address: 0x40cf40, Func Offset: 0xf0
	// Line 3705, Address: 0x40cf68, Func Offset: 0x118
	// Line 3716, Address: 0x40cf70, Func Offset: 0x120
	// Line 3705, Address: 0x40cfa4, Func Offset: 0x154
	// Line 3716, Address: 0x40cfac, Func Offset: 0x15c
	// Func End, Address: 0x40cfb4, Func Offset: 0x164
}

// xQuatSlerp__FP5xQuatPC5xQuatPC5xQuatf
// Start address: 0x40cfc0
void xQuatSlerp(xQuat* o, xQuat* a, xQuat* b, float32 t)
{
	float32 asph;
	float32 bsph;
	float32 one_sintheta;
	float32 abdot;
	xQuat b2;
	// Line 3602, Address: 0x40cfc0, Func Offset: 0
	// Line 3622, Address: 0x40cfc8, Func Offset: 0x8
	// Line 3602, Address: 0x40cfcc, Func Offset: 0xc
	// Line 3622, Address: 0x40cfd0, Func Offset: 0x10
	// Line 3602, Address: 0x40cfd4, Func Offset: 0x14
	// Line 3622, Address: 0x40cfd8, Func Offset: 0x18
	// Line 3602, Address: 0x40cfdc, Func Offset: 0x1c
	// Line 3622, Address: 0x40cfe0, Func Offset: 0x20
	// Line 3602, Address: 0x40cfe4, Func Offset: 0x24
	// Line 3622, Address: 0x40cffc, Func Offset: 0x3c
	// Line 3602, Address: 0x40d000, Func Offset: 0x40
	// Line 3622, Address: 0x40d004, Func Offset: 0x44
	// Line 3639, Address: 0x40d028, Func Offset: 0x68
	// Line 3649, Address: 0x40d034, Func Offset: 0x74
	// Line 3653, Address: 0x40d05c, Func Offset: 0x9c
	// Line 3654, Address: 0x40d094, Func Offset: 0xd4
	// Line 3655, Address: 0x40d0b0, Func Offset: 0xf0
	// Line 3656, Address: 0x40d0bc, Func Offset: 0xfc
	// Line 3659, Address: 0x40d0cc, Func Offset: 0x10c
	// Line 3660, Address: 0x40d0d4, Func Offset: 0x114
	// Line 3659, Address: 0x40d0d8, Func Offset: 0x118
	// Line 3660, Address: 0x40d0dc, Func Offset: 0x11c
	// Line 3661, Address: 0x40d0e0, Func Offset: 0x120
	// Line 3659, Address: 0x40d0e4, Func Offset: 0x124
	// Line 3660, Address: 0x40d0ec, Func Offset: 0x12c
	// Line 3661, Address: 0x40d0f0, Func Offset: 0x130
	// Line 3659, Address: 0x40d0f4, Func Offset: 0x134
	// Line 3660, Address: 0x40d0f8, Func Offset: 0x138
	// Line 3661, Address: 0x40d0fc, Func Offset: 0x13c
	// Line 3660, Address: 0x40d10c, Func Offset: 0x14c
	// Line 3661, Address: 0x40d110, Func Offset: 0x150
	// Line 3665, Address: 0x40d13c, Func Offset: 0x17c
	// Line 3674, Address: 0x40d1a0, Func Offset: 0x1e0
	// Line 3641, Address: 0x40d1a8, Func Offset: 0x1e8
	// Line 3674, Address: 0x40d1ac, Func Offset: 0x1ec
	// Line 3641, Address: 0x40d1b4, Func Offset: 0x1f4
	// Line 3674, Address: 0x40d1b8, Func Offset: 0x1f8
	// Line 3641, Address: 0x40d1bc, Func Offset: 0x1fc
	// Line 3674, Address: 0x40d1c0, Func Offset: 0x200
	// Line 3641, Address: 0x40d1c4, Func Offset: 0x204
	// Line 3674, Address: 0x40d1c8, Func Offset: 0x208
	// Line 3652, Address: 0x40d1dc, Func Offset: 0x21c
	// Line 3674, Address: 0x40d1e4, Func Offset: 0x224
	// Line 3665, Address: 0x40d204, Func Offset: 0x244
	// Line 3674, Address: 0x40d20c, Func Offset: 0x24c
	// Line 3665, Address: 0x40d240, Func Offset: 0x280
	// Line 3674, Address: 0x40d248, Func Offset: 0x288
	// Func End, Address: 0x40d270, Func Offset: 0x2b0
}

// xQuatNormalize__FP5xQuatPC5xQuat
// Start address: 0x40d270
float32 xQuatNormalize(xQuat* o, xQuat* q)
{
	float32 one_len;
	// Line 3567, Address: 0x40d270, Func Offset: 0
	// Line 3569, Address: 0x40d274, Func Offset: 0x4
	// Line 3567, Address: 0x40d278, Func Offset: 0x8
	// Line 3569, Address: 0x40d284, Func Offset: 0x14
	// Line 3568, Address: 0x40d288, Func Offset: 0x18
	// Line 3569, Address: 0x40d29c, Func Offset: 0x2c
	// Line 3575, Address: 0x40d2a8, Func Offset: 0x38
	// Line 3581, Address: 0x40d2b4, Func Offset: 0x44
	// Line 3582, Address: 0x40d2c0, Func Offset: 0x50
	// Line 3583, Address: 0x40d2c4, Func Offset: 0x54
	// Line 3584, Address: 0x40d2e0, Func Offset: 0x70
	// Line 3573, Address: 0x40d300, Func Offset: 0x90
	// Line 3584, Address: 0x40d30c, Func Offset: 0x9c
	// Line 3579, Address: 0x40d340, Func Offset: 0xd0
	// Line 3585, Address: 0x40d344, Func Offset: 0xd4
	// Func End, Address: 0x40d34c, Func Offset: 0xdc
}

// xQuatToAxisAngle__FPC5xQuatP5xVec3Pf
// Start address: 0x40d350
void xQuatToAxisAngle(xQuat* q, xVec3* a, float32* t)
{
	// Line 3552, Address: 0x40d350, Func Offset: 0
	// Line 3563, Address: 0x40d354, Func Offset: 0x4
	// Line 3552, Address: 0x40d35c, Func Offset: 0xc
	// Line 3563, Address: 0x40d364, Func Offset: 0x14
	// Line 3552, Address: 0x40d368, Func Offset: 0x18
	// Line 3563, Address: 0x40d378, Func Offset: 0x28
	// Line 3564, Address: 0x40d3b0, Func Offset: 0x60
	// Line 3563, Address: 0x40d3b4, Func Offset: 0x64
	// Line 3564, Address: 0x40d3b8, Func Offset: 0x68
	// Line 3563, Address: 0x40d3bc, Func Offset: 0x6c
	// Line 3564, Address: 0x40d3c0, Func Offset: 0x70
	// Line 3565, Address: 0x40d3c8, Func Offset: 0x78
	// Func End, Address: 0x40d3e0, Func Offset: 0x90
}

// xQuatToMat__FPC5xQuatP7xMat3x3
// Start address: 0x40d3e0
void xQuatToMat(xQuat* q, xMat3x3* m)
{
	float32 tx;
	float32 ty;
	float32 tz;
	float32 tsx;
	float32 tsy;
	float32 tsz;
	float32 txx;
	float32 txy;
	float32 txz;
	float32 tyy;
	float32 tyz;
	float32 tzz;
	// Line 3509, Address: 0x40d3e0, Func Offset: 0
	// Line 3520, Address: 0x40d3e4, Func Offset: 0x4
	// Line 3532, Address: 0x40d3f0, Func Offset: 0x10
	// Line 3522, Address: 0x40d3f4, Func Offset: 0x14
	// Line 3521, Address: 0x40d3f8, Func Offset: 0x18
	// Line 3520, Address: 0x40d3fc, Func Offset: 0x1c
	// Line 3521, Address: 0x40d400, Func Offset: 0x20
	// Line 3522, Address: 0x40d404, Func Offset: 0x24
	// Line 3523, Address: 0x40d408, Func Offset: 0x28
	// Line 3526, Address: 0x40d40c, Func Offset: 0x2c
	// Line 3527, Address: 0x40d410, Func Offset: 0x30
	// Line 3524, Address: 0x40d414, Func Offset: 0x34
	// Line 3525, Address: 0x40d418, Func Offset: 0x38
	// Line 3529, Address: 0x40d41c, Func Offset: 0x3c
	// Line 3532, Address: 0x40d420, Func Offset: 0x40
	// Line 3531, Address: 0x40d424, Func Offset: 0x44
	// Line 3532, Address: 0x40d428, Func Offset: 0x48
	// Line 3536, Address: 0x40d434, Func Offset: 0x54
	// Line 3540, Address: 0x40d43c, Func Offset: 0x5c
	// Line 3528, Address: 0x40d444, Func Offset: 0x64
	// Line 3533, Address: 0x40d448, Func Offset: 0x68
	// Line 3535, Address: 0x40d44c, Func Offset: 0x6c
	// Line 3533, Address: 0x40d450, Func Offset: 0x70
	// Line 3534, Address: 0x40d454, Func Offset: 0x74
	// Line 3535, Address: 0x40d45c, Func Offset: 0x7c
	// Line 3530, Address: 0x40d460, Func Offset: 0x80
	// Line 3536, Address: 0x40d464, Func Offset: 0x84
	// Line 3537, Address: 0x40d468, Func Offset: 0x88
	// Line 3538, Address: 0x40d46c, Func Offset: 0x8c
	// Line 3537, Address: 0x40d470, Func Offset: 0x90
	// Line 3539, Address: 0x40d474, Func Offset: 0x94
	// Line 3538, Address: 0x40d478, Func Offset: 0x98
	// Line 3539, Address: 0x40d47c, Func Offset: 0x9c
	// Line 3540, Address: 0x40d480, Func Offset: 0xa0
	// Line 3550, Address: 0x40d484, Func Offset: 0xa4
	// Func End, Address: 0x40d48c, Func Offset: 0xac
}

// xQuatFromAxisAngle__FP5xQuatPC5xVec3f
// Start address: 0x40d490
void xQuatFromAxisAngle(xQuat* q, xVec3* a, float32 t)
{
	float32 t_2;
	// Line 3487, Address: 0x40d490, Func Offset: 0
	// Line 3489, Address: 0x40d494, Func Offset: 0x4
	// Line 3487, Address: 0x40d498, Func Offset: 0x8
	// Line 3489, Address: 0x40d4a4, Func Offset: 0x14
	// Line 3490, Address: 0x40d4b8, Func Offset: 0x28
	// Line 3491, Address: 0x40d4e4, Func Offset: 0x54
	// Line 3493, Address: 0x40d4ec, Func Offset: 0x5c
	// Line 3494, Address: 0x40d4fc, Func Offset: 0x6c
	// Line 3495, Address: 0x40d504, Func Offset: 0x74
	// Line 3496, Address: 0x40d510, Func Offset: 0x80
	// Line 3495, Address: 0x40d514, Func Offset: 0x84
	// Line 3496, Address: 0x40d518, Func Offset: 0x88
	// Line 3507, Address: 0x40d538, Func Offset: 0xa8
	// Func End, Address: 0x40d550, Func Offset: 0xc0
}

// xQuatFromMat__FP5xQuatPC7xMat3x3
// Start address: 0x40d550
void xQuatFromMat(xQuat* q, xMat3x3* m)
{
	float32* mp;
	float32* qvp;
	float32 tr;
	float32 root;
	int32 i;
	int32 j;
	int32 k;
	int32 nxt[3];
	// Line 3402, Address: 0x40d550, Func Offset: 0
	// Line 3412, Address: 0x40d55c, Func Offset: 0xc
	// Line 3402, Address: 0x40d560, Func Offset: 0x10
	// Line 3412, Address: 0x40d568, Func Offset: 0x18
	// Line 3426, Address: 0x40d574, Func Offset: 0x24
	// Line 3427, Address: 0x40d588, Func Offset: 0x38
	// Line 3429, Address: 0x40d58c, Func Offset: 0x3c
	// Line 3430, Address: 0x40d5b0, Func Offset: 0x60
	// Line 3432, Address: 0x40d5b8, Func Offset: 0x68
	// Line 3434, Address: 0x40d5bc, Func Offset: 0x6c
	// Line 3432, Address: 0x40d5c0, Func Offset: 0x70
	// Line 3434, Address: 0x40d5c4, Func Offset: 0x74
	// Line 3432, Address: 0x40d5c8, Func Offset: 0x78
	// Line 3434, Address: 0x40d5cc, Func Offset: 0x7c
	// Line 3432, Address: 0x40d5d0, Func Offset: 0x80
	// Line 3434, Address: 0x40d5d4, Func Offset: 0x84
	// Line 3435, Address: 0x40d5e0, Func Offset: 0x90
	// Line 3434, Address: 0x40d5ec, Func Offset: 0x9c
	// Line 3433, Address: 0x40d5f8, Func Offset: 0xa8
	// Line 3434, Address: 0x40d5fc, Func Offset: 0xac
	// Line 3433, Address: 0x40d600, Func Offset: 0xb0
	// Line 3434, Address: 0x40d604, Func Offset: 0xb4
	// Line 3435, Address: 0x40d630, Func Offset: 0xe0
	// Line 3440, Address: 0x40d640, Func Offset: 0xf0
	// Line 3442, Address: 0x40d64c, Func Offset: 0xfc
	// Line 3443, Address: 0x40d650, Func Offset: 0x100
	// Line 3442, Address: 0x40d654, Func Offset: 0x104
	// Line 3443, Address: 0x40d658, Func Offset: 0x108
	// Line 3442, Address: 0x40d65c, Func Offset: 0x10c
	// Line 3443, Address: 0x40d660, Func Offset: 0x110
	// Line 3442, Address: 0x40d668, Func Offset: 0x118
	// Line 3444, Address: 0x40d66c, Func Offset: 0x11c
	// Line 3442, Address: 0x40d670, Func Offset: 0x120
	// Line 3444, Address: 0x40d674, Func Offset: 0x124
	// Line 3442, Address: 0x40d678, Func Offset: 0x128
	// Line 3444, Address: 0x40d67c, Func Offset: 0x12c
	// Line 3442, Address: 0x40d680, Func Offset: 0x130
	// Line 3443, Address: 0x40d688, Func Offset: 0x138
	// Line 3442, Address: 0x40d690, Func Offset: 0x140
	// Line 3443, Address: 0x40d694, Func Offset: 0x144
	// Line 3444, Address: 0x40d69c, Func Offset: 0x14c
	// Line 3440, Address: 0x40d6a8, Func Offset: 0x158
	// Line 3444, Address: 0x40d6ac, Func Offset: 0x15c
	// Line 3440, Address: 0x40d6b0, Func Offset: 0x160
	// Line 3441, Address: 0x40d6b4, Func Offset: 0x164
	// Line 3443, Address: 0x40d6b8, Func Offset: 0x168
	// Line 3444, Address: 0x40d6bc, Func Offset: 0x16c
	// Line 3443, Address: 0x40d6c0, Func Offset: 0x170
	// Line 3444, Address: 0x40d6c4, Func Offset: 0x174
	// Line 3442, Address: 0x40d6cc, Func Offset: 0x17c
	// Line 3443, Address: 0x40d6d4, Func Offset: 0x184
	// Line 3444, Address: 0x40d6d8, Func Offset: 0x188
	// Line 3443, Address: 0x40d6dc, Func Offset: 0x18c
	// Line 3444, Address: 0x40d6e0, Func Offset: 0x190
	// Line 3448, Address: 0x40d6e4, Func Offset: 0x194
	// Line 3449, Address: 0x40d6fc, Func Offset: 0x1ac
	// Line 3462, Address: 0x40d72c, Func Offset: 0x1dc
	// Line 3413, Address: 0x40d734, Func Offset: 0x1e4
	// Line 3414, Address: 0x40d738, Func Offset: 0x1e8
	// Line 3413, Address: 0x40d73c, Func Offset: 0x1ec
	// Line 3414, Address: 0x40d740, Func Offset: 0x1f0
	// Line 3413, Address: 0x40d748, Func Offset: 0x1f8
	// Line 3462, Address: 0x40d74c, Func Offset: 0x1fc
	// Line 3415, Address: 0x40d750, Func Offset: 0x200
	// Line 3414, Address: 0x40d754, Func Offset: 0x204
	// Line 3462, Address: 0x40d758, Func Offset: 0x208
	// Line 3416, Address: 0x40d774, Func Offset: 0x224
	// Line 3418, Address: 0x40d778, Func Offset: 0x228
	// Line 3416, Address: 0x40d77c, Func Offset: 0x22c
	// Line 3417, Address: 0x40d780, Func Offset: 0x230
	// Line 3462, Address: 0x40d784, Func Offset: 0x234
	// Line 3417, Address: 0x40d788, Func Offset: 0x238
	// Line 3418, Address: 0x40d78c, Func Offset: 0x23c
	// Line 3462, Address: 0x40d790, Func Offset: 0x240
	// Line 3422, Address: 0x40d794, Func Offset: 0x244
	// Line 3462, Address: 0x40d79c, Func Offset: 0x24c
	// Func End, Address: 0x40d7d4, Func Offset: 0x284
}

// xMat4x3RMul3x3__FP7xMat4x3PC7xMat3x3PC7xMat4x3
// Start address: 0x40d7e0
void xMat4x3RMul3x3(xMat4x3* o, xMat3x3* m3x3, xMat4x3* m)
{
	// Line 3374, Address: 0x40d7e0, Func Offset: 0
	// Line 3375, Address: 0x40d7f4, Func Offset: 0x14
	// Line 3376, Address: 0x40d7fc, Func Offset: 0x1c
	// Line 3377, Address: 0x40d804, Func Offset: 0x24
	// Line 3379, Address: 0x40d81c, Func Offset: 0x3c
	// Func End, Address: 0x40d830, Func Offset: 0x50
}

// xMat4x3Mul__FP7xMat4x3PC7xMat4x3PC7xMat4x3
// Start address: 0x40d830
void xMat4x3Mul(xMat4x3* o, xMat4x3* a, xMat4x3* b)
{
	// Line 3331, Address: 0x40d830, Func Offset: 0
	// Line 3335, Address: 0x40d834, Func Offset: 0x4
	// Line 3332, Address: 0x40d838, Func Offset: 0x8
	// Line 3333, Address: 0x40d83c, Func Offset: 0xc
	// Line 3334, Address: 0x40d840, Func Offset: 0x10
	// Line 3336, Address: 0x40d844, Func Offset: 0x14
	// Line 3337, Address: 0x40d848, Func Offset: 0x18
	// Line 3338, Address: 0x40d84c, Func Offset: 0x1c
	// Line 3339, Address: 0x40d850, Func Offset: 0x20
	// Line 3340, Address: 0x40d854, Func Offset: 0x24
	// Line 3341, Address: 0x40d858, Func Offset: 0x28
	// Line 3342, Address: 0x40d85c, Func Offset: 0x2c
	// Line 3343, Address: 0x40d860, Func Offset: 0x30
	// Line 3344, Address: 0x40d864, Func Offset: 0x34
	// Line 3345, Address: 0x40d868, Func Offset: 0x38
	// Line 3346, Address: 0x40d86c, Func Offset: 0x3c
	// Line 3347, Address: 0x40d870, Func Offset: 0x40
	// Line 3348, Address: 0x40d874, Func Offset: 0x44
	// Line 3349, Address: 0x40d878, Func Offset: 0x48
	// Line 3350, Address: 0x40d87c, Func Offset: 0x4c
	// Line 3351, Address: 0x40d880, Func Offset: 0x50
	// Line 3353, Address: 0x40d884, Func Offset: 0x54
	// Line 3354, Address: 0x40d888, Func Offset: 0x58
	// Line 3352, Address: 0x40d88c, Func Offset: 0x5c
	// Line 3355, Address: 0x40d890, Func Offset: 0x60
	// Line 3365, Address: 0x40d894, Func Offset: 0x64
	// Func End, Address: 0x40d89c, Func Offset: 0x6c
}

// xMat4x3RotY__FP7xMat4x3fPC5xVec3
// Start address: 0x40d8a0
void xMat4x3RotY(xMat4x3* m, float32 t, xVec3* p)
{
	xMat4x3 temp;
	// Line 3310, Address: 0x40d8a0, Func Offset: 0
	// Line 3312, Address: 0x40d8bc, Func Offset: 0x1c
	// Line 3314, Address: 0x40d8dc, Func Offset: 0x3c
	// Line 3312, Address: 0x40d8e0, Func Offset: 0x40
	// Line 3313, Address: 0x40d8f4, Func Offset: 0x54
	// Line 3312, Address: 0x40d8f8, Func Offset: 0x58
	// Line 3314, Address: 0x40d900, Func Offset: 0x60
	// Line 3312, Address: 0x40d904, Func Offset: 0x64
	// Line 3314, Address: 0x40d908, Func Offset: 0x68
	// Line 3312, Address: 0x40d90c, Func Offset: 0x6c
	// Line 3313, Address: 0x40d910, Func Offset: 0x70
	// Line 3312, Address: 0x40d918, Func Offset: 0x78
	// Line 3313, Address: 0x40d92c, Func Offset: 0x8c
	// Line 3314, Address: 0x40d938, Func Offset: 0x98
	// Line 3315, Address: 0x40d950, Func Offset: 0xb0
	// Line 3316, Address: 0x40d954, Func Offset: 0xb4
	// Line 3315, Address: 0x40d958, Func Offset: 0xb8
	// Line 3316, Address: 0x40d95c, Func Offset: 0xbc
	// Line 3315, Address: 0x40d960, Func Offset: 0xc0
	// Line 3316, Address: 0x40d978, Func Offset: 0xd8
	// Line 3317, Address: 0x40d980, Func Offset: 0xe0
	// Func End, Address: 0x40d998, Func Offset: 0xf8
}

// xMat4x3Rot__FP7xMat4x3PC5xVec3fPC5xVec3
// Start address: 0x40d9a0
void xMat4x3Rot(xMat4x3* m, xVec3* a, float32 t, xVec3* p)
{
	xMat4x3 temp;
	// Line 3292, Address: 0x40d9a0, Func Offset: 0
	// Line 3294, Address: 0x40d9ac, Func Offset: 0xc
	// Line 3292, Address: 0x40d9b0, Func Offset: 0x10
	// Line 3294, Address: 0x40d9b4, Func Offset: 0x14
	// Line 3292, Address: 0x40d9b8, Func Offset: 0x18
	// Line 3294, Address: 0x40d9bc, Func Offset: 0x1c
	// Line 3295, Address: 0x40d9cc, Func Offset: 0x2c
	// Line 3296, Address: 0x40d9d0, Func Offset: 0x30
	// Line 3295, Address: 0x40d9d4, Func Offset: 0x34
	// Line 3296, Address: 0x40d9d8, Func Offset: 0x38
	// Line 3295, Address: 0x40d9dc, Func Offset: 0x3c
	// Line 3296, Address: 0x40d9e0, Func Offset: 0x40
	// Line 3295, Address: 0x40d9e4, Func Offset: 0x44
	// Line 3296, Address: 0x40d9f0, Func Offset: 0x50
	// Line 3297, Address: 0x40da08, Func Offset: 0x68
	// Line 3298, Address: 0x40da0c, Func Offset: 0x6c
	// Line 3297, Address: 0x40da10, Func Offset: 0x70
	// Line 3298, Address: 0x40da14, Func Offset: 0x74
	// Line 3297, Address: 0x40da18, Func Offset: 0x78
	// Line 3298, Address: 0x40da30, Func Offset: 0x90
	// Line 3299, Address: 0x40da38, Func Offset: 0x98
	// Func End, Address: 0x40da4c, Func Offset: 0xac
}

// xMat3x3Tolocal__FP5xVec3PC7xMat3x3PC5xVec3
// Start address: 0x40da50
void xMat3x3Tolocal(xVec3* o, xMat3x3* m, xVec3* v)
{
	// Line 3254, Address: 0x40da50, Func Offset: 0
	// Line 3263, Address: 0x40da6c, Func Offset: 0x1c
	// Line 3254, Address: 0x40da70, Func Offset: 0x20
	// Line 3263, Address: 0x40da74, Func Offset: 0x24
	// Line 3254, Address: 0x40da78, Func Offset: 0x28
	// Line 3263, Address: 0x40da7c, Func Offset: 0x2c
	// Line 3254, Address: 0x40da84, Func Offset: 0x34
	// Line 3263, Address: 0x40da90, Func Offset: 0x40
	// Line 3266, Address: 0x40dab0, Func Offset: 0x60
	// Line 3267, Address: 0x40dac0, Func Offset: 0x70
	// Line 3268, Address: 0x40dacc, Func Offset: 0x7c
	// Line 3266, Address: 0x40dad4, Func Offset: 0x84
	// Line 3267, Address: 0x40dadc, Func Offset: 0x8c
	// Line 3268, Address: 0x40dae0, Func Offset: 0x90
	// Line 3267, Address: 0x40dae4, Func Offset: 0x94
	// Line 3268, Address: 0x40daec, Func Offset: 0x9c
	// Line 3269, Address: 0x40dafc, Func Offset: 0xac
	// Func End, Address: 0x40db04, Func Offset: 0xb4
}

// xMat3x3LMulVec__FP5xVec3PC7xMat3x3PC5xVec3
// Start address: 0x40db10
void xMat3x3LMulVec(xVec3* o, xMat3x3* m, xVec3* v)
{
	float32 y;
	float32 z;
	// Line 3243, Address: 0x40db10, Func Offset: 0
	// Line 3249, Address: 0x40db14, Func Offset: 0x4
	// Line 3243, Address: 0x40db18, Func Offset: 0x8
	// Line 3249, Address: 0x40db1c, Func Offset: 0xc
	// Line 3243, Address: 0x40db20, Func Offset: 0x10
	// Line 3249, Address: 0x40db24, Func Offset: 0x14
	// Line 3250, Address: 0x40db28, Func Offset: 0x18
	// Line 3249, Address: 0x40db2c, Func Offset: 0x1c
	// Line 3250, Address: 0x40db30, Func Offset: 0x20
	// Line 3249, Address: 0x40db34, Func Offset: 0x24
	// Line 3250, Address: 0x40db38, Func Offset: 0x28
	// Line 3249, Address: 0x40db3c, Func Offset: 0x2c
	// Line 3250, Address: 0x40db40, Func Offset: 0x30
	// Line 3251, Address: 0x40db44, Func Offset: 0x34
	// Line 3250, Address: 0x40db48, Func Offset: 0x38
	// Line 3251, Address: 0x40db4c, Func Offset: 0x3c
	// Line 3250, Address: 0x40db50, Func Offset: 0x40
	// Line 3251, Address: 0x40db54, Func Offset: 0x44
	// Line 3252, Address: 0x40db6c, Func Offset: 0x5c
	// Func End, Address: 0x40db74, Func Offset: 0x64
}

// xMat3x3Mul__FP7xMat3x3PC7xMat3x3PC7xMat3x3
// Start address: 0x40db80
void xMat3x3Mul(xMat3x3* o, xMat3x3* a, xMat3x3* b)
{
	xMat3x3 temp;
	xMat3x3* tp;
	uint32 usetemp;
	// Line 3201, Address: 0x40db80, Func Offset: 0
	// Line 3204, Address: 0x40db84, Func Offset: 0x4
	// Line 3205, Address: 0x40dba0, Func Offset: 0x20
	// Line 3206, Address: 0x40dba8, Func Offset: 0x28
	// Line 3210, Address: 0x40dbac, Func Offset: 0x2c
	// Line 3213, Address: 0x40dbc4, Func Offset: 0x44
	// Line 3210, Address: 0x40dbc8, Func Offset: 0x48
	// Line 3213, Address: 0x40dbcc, Func Offset: 0x4c
	// Line 3210, Address: 0x40dbd0, Func Offset: 0x50
	// Line 3213, Address: 0x40dbd4, Func Offset: 0x54
	// Line 3210, Address: 0x40dbd8, Func Offset: 0x58
	// Line 3213, Address: 0x40dbdc, Func Offset: 0x5c
	// Line 3216, Address: 0x40dbe0, Func Offset: 0x60
	// Line 3210, Address: 0x40dbe4, Func Offset: 0x64
	// Line 3213, Address: 0x40dbe8, Func Offset: 0x68
	// Line 3216, Address: 0x40dbf0, Func Offset: 0x70
	// Line 3219, Address: 0x40dbfc, Func Offset: 0x7c
	// Line 3216, Address: 0x40dc08, Func Offset: 0x88
	// Line 3213, Address: 0x40dc0c, Func Offset: 0x8c
	// Line 3216, Address: 0x40dc10, Func Offset: 0x90
	// Line 3219, Address: 0x40dc14, Func Offset: 0x94
	// Line 3216, Address: 0x40dc18, Func Offset: 0x98
	// Line 3219, Address: 0x40dc1c, Func Offset: 0x9c
	// Line 3222, Address: 0x40dc24, Func Offset: 0xa4
	// Line 3228, Address: 0x40dc28, Func Offset: 0xa8
	// Line 3219, Address: 0x40dc30, Func Offset: 0xb0
	// Line 3222, Address: 0x40dc34, Func Offset: 0xb4
	// Line 3225, Address: 0x40dc3c, Func Offset: 0xbc
	// Line 3228, Address: 0x40dc40, Func Offset: 0xc0
	// Line 3222, Address: 0x40dc44, Func Offset: 0xc4
	// Line 3225, Address: 0x40dc48, Func Offset: 0xc8
	// Line 3228, Address: 0x40dc50, Func Offset: 0xd0
	// Line 3225, Address: 0x40dc54, Func Offset: 0xd4
	// Line 3228, Address: 0x40dc58, Func Offset: 0xd8
	// Line 3231, Address: 0x40dc60, Func Offset: 0xe0
	// Line 3234, Address: 0x40dc6c, Func Offset: 0xec
	// Line 3228, Address: 0x40dc70, Func Offset: 0xf0
	// Line 3234, Address: 0x40dc74, Func Offset: 0xf4
	// Line 3231, Address: 0x40dc7c, Func Offset: 0xfc
	// Line 3234, Address: 0x40dc80, Func Offset: 0x100
	// Line 3238, Address: 0x40dc84, Func Offset: 0x104
	// Line 3239, Address: 0x40dc8c, Func Offset: 0x10c
	// Line 3241, Address: 0x40dca4, Func Offset: 0x124
	// Func End, Address: 0x40dcac, Func Offset: 0x12c
}

// xMat3x3Transpose__FP7xMat3x3PC7xMat3x3
// Start address: 0x40dcb0
void xMat3x3Transpose(xMat3x3* o, xMat3x3* m)
{
	float32 temp;
	float32 temp;
	float32 temp;
	// Line 3183, Address: 0x40dcb0, Func Offset: 0
	// Line 3188, Address: 0x40dcb8, Func Offset: 0x8
	// Line 3189, Address: 0x40dcbc, Func Offset: 0xc
	// Line 3190, Address: 0x40dcc0, Func Offset: 0x10
	// Line 3191, Address: 0x40dcc4, Func Offset: 0x14
	// Line 3192, Address: 0x40dcc8, Func Offset: 0x18
	// Line 3193, Address: 0x40dccc, Func Offset: 0x1c
	// Line 3188, Address: 0x40dcd0, Func Offset: 0x20
	// Line 3189, Address: 0x40dcd4, Func Offset: 0x24
	// Line 3190, Address: 0x40dcd8, Func Offset: 0x28
	// Line 3191, Address: 0x40dcdc, Func Offset: 0x2c
	// Line 3192, Address: 0x40dce0, Func Offset: 0x30
	// Line 3193, Address: 0x40dce4, Func Offset: 0x34
	// Line 3194, Address: 0x40dce8, Func Offset: 0x38
	// Line 3195, Address: 0x40dcec, Func Offset: 0x3c
	// Line 3196, Address: 0x40dcf0, Func Offset: 0x40
	// Line 3194, Address: 0x40dcf4, Func Offset: 0x44
	// Line 3195, Address: 0x40dcf8, Func Offset: 0x48
	// Line 3196, Address: 0x40dcfc, Func Offset: 0x4c
	// Line 3197, Address: 0x40dd00, Func Offset: 0x50
	// Line 3199, Address: 0x40dd04, Func Offset: 0x54
	// Line 3187, Address: 0x40dd38, Func Offset: 0x88
	// Line 3199, Address: 0x40dd40, Func Offset: 0x90
	// Func End, Address: 0x40dd48, Func Offset: 0x98
}

// xMat3x3RMulRotY__FP7xMat3x3PC7xMat3x3f
// Start address: 0x40dd50
void xMat3x3RMulRotY(xMat3x3* o, xMat3x3* m, float32 t)
{
	float32 temp;
	// Line 3100, Address: 0x40dd50, Func Offset: 0
	// Line 3101, Address: 0x40dd6c, Func Offset: 0x1c
	// Line 3102, Address: 0x40dd74, Func Offset: 0x24
	// Line 3103, Address: 0x40dd80, Func Offset: 0x30
	// Line 3115, Address: 0x40dd88, Func Offset: 0x38
	// Line 3116, Address: 0x40dd90, Func Offset: 0x40
	// Line 3118, Address: 0x40dd94, Func Offset: 0x44
	// Line 3119, Address: 0x40dd9c, Func Offset: 0x4c
	// Line 3115, Address: 0x40dda0, Func Offset: 0x50
	// Line 3116, Address: 0x40ddac, Func Offset: 0x5c
	// Line 3117, Address: 0x40ddb0, Func Offset: 0x60
	// Line 3118, Address: 0x40ddbc, Func Offset: 0x6c
	// Line 3120, Address: 0x40ddc8, Func Offset: 0x78
	// Line 3119, Address: 0x40ddcc, Func Offset: 0x7c
	// Line 3120, Address: 0x40ddd0, Func Offset: 0x80
	// Line 3121, Address: 0x40ddd4, Func Offset: 0x84
	// Line 3120, Address: 0x40ddd8, Func Offset: 0x88
	// Line 3121, Address: 0x40dddc, Func Offset: 0x8c
	// Line 3122, Address: 0x40dde0, Func Offset: 0x90
	// Line 3121, Address: 0x40dde4, Func Offset: 0x94
	// Line 3123, Address: 0x40ddec, Func Offset: 0x9c
	// Line 3121, Address: 0x40ddf0, Func Offset: 0xa0
	// Line 3123, Address: 0x40ddf4, Func Offset: 0xa4
	// Line 3122, Address: 0x40ddf8, Func Offset: 0xa8
	// Line 3123, Address: 0x40ddfc, Func Offset: 0xac
	// Line 3124, Address: 0x40de00, Func Offset: 0xb0
	// Line 3126, Address: 0x40de04, Func Offset: 0xb4
	// Line 3105, Address: 0x40de14, Func Offset: 0xc4
	// Line 3106, Address: 0x40de1c, Func Offset: 0xcc
	// Line 3126, Address: 0x40de24, Func Offset: 0xd4
	// Line 3108, Address: 0x40de34, Func Offset: 0xe4
	// Line 3109, Address: 0x40de3c, Func Offset: 0xec
	// Line 3126, Address: 0x40de44, Func Offset: 0xf4
	// Line 3112, Address: 0x40de54, Func Offset: 0x104
	// Line 3113, Address: 0x40de5c, Func Offset: 0x10c
	// Line 3126, Address: 0x40de64, Func Offset: 0x114
	// Line 3114, Address: 0x40de68, Func Offset: 0x118
	// Line 3126, Address: 0x40de70, Func Offset: 0x120
	// Func End, Address: 0x40de84, Func Offset: 0x134
}

// xMat3x3ScaleC__FP7xMat3x3fff
// Start address: 0x40de90
void xMat3x3ScaleC(xMat3x3* m, float32 x, float32 y, float32 z)
{
	// Line 3014, Address: 0x40de90, Func Offset: 0
	// Line 3015, Address: 0x40de9c, Func Offset: 0xc
	// Line 3016, Address: 0x40dea8, Func Offset: 0x18
	// Line 3018, Address: 0x40deb4, Func Offset: 0x24
	// Func End, Address: 0x40debc, Func Offset: 0x2c
}

// xMat3x3RotZ__FP7xMat3x3f
// Start address: 0x40dec0
void xMat3x3RotZ(xMat3x3* m, float32 t)
{
	// Line 3004, Address: 0x40dec0, Func Offset: 0
	// Line 3005, Address: 0x40ded4, Func Offset: 0x14
	// Line 3006, Address: 0x40dedc, Func Offset: 0x1c
	// Line 3009, Address: 0x40dee8, Func Offset: 0x28
	// Line 3007, Address: 0x40def0, Func Offset: 0x30
	// Line 3008, Address: 0x40def8, Func Offset: 0x38
	// Line 3007, Address: 0x40defc, Func Offset: 0x3c
	// Line 3008, Address: 0x40df00, Func Offset: 0x40
	// Line 3009, Address: 0x40df08, Func Offset: 0x48
	// Line 3008, Address: 0x40df0c, Func Offset: 0x4c
	// Line 3009, Address: 0x40df10, Func Offset: 0x50
	// Line 3010, Address: 0x40df28, Func Offset: 0x68
	// Line 3011, Address: 0x40df2c, Func Offset: 0x6c
	// Func End, Address: 0x40df40, Func Offset: 0x80
}

// xMat3x3RotY__FP7xMat3x3f
// Start address: 0x40df40
void xMat3x3RotY(xMat3x3* m, float32 t)
{
	// Line 2995, Address: 0x40df40, Func Offset: 0
	// Line 2996, Address: 0x40df54, Func Offset: 0x14
	// Line 2997, Address: 0x40df5c, Func Offset: 0x1c
	// Line 2999, Address: 0x40df68, Func Offset: 0x28
	// Line 2998, Address: 0x40df74, Func Offset: 0x34
	// Line 2999, Address: 0x40df84, Func Offset: 0x44
	// Line 3000, Address: 0x40df9c, Func Offset: 0x5c
	// Line 3001, Address: 0x40dfa8, Func Offset: 0x68
	// Line 3002, Address: 0x40dfac, Func Offset: 0x6c
	// Func End, Address: 0x40dfc0, Func Offset: 0x80
}

// xMat3x3RotX__FP7xMat3x3f
// Start address: 0x40dfc0
void xMat3x3RotX(xMat3x3* m, float32 t)
{
	// Line 2986, Address: 0x40dfc0, Func Offset: 0
	// Line 2987, Address: 0x40dfd4, Func Offset: 0x14
	// Line 2988, Address: 0x40dfdc, Func Offset: 0x1c
	// Line 2989, Address: 0x40dfe8, Func Offset: 0x28
	// Line 2991, Address: 0x40dff8, Func Offset: 0x38
	// Line 2989, Address: 0x40dffc, Func Offset: 0x3c
	// Line 2990, Address: 0x40e010, Func Offset: 0x50
	// Line 2991, Address: 0x40e01c, Func Offset: 0x5c
	// Line 2992, Address: 0x40e028, Func Offset: 0x68
	// Line 2993, Address: 0x40e02c, Func Offset: 0x6c
	// Func End, Address: 0x40e040, Func Offset: 0x80
}

// xMat3x3RotC__FP7xMat3x3ffff
// Start address: 0x40e040
void xMat3x3RotC(xMat3x3* m, float32 _x, float32 _y, float32 _z, float32 t)
{
	float32 c;
	// Line 2964, Address: 0x40e040, Func Offset: 0
	// Line 2967, Address: 0x40e048, Func Offset: 0x8
	// Line 2964, Address: 0x40e04c, Func Offset: 0xc
	// Line 2967, Address: 0x40e068, Func Offset: 0x28
	// Line 2968, Address: 0x40e07c, Func Offset: 0x3c
	// Line 2969, Address: 0x40e09c, Func Offset: 0x5c
	// Line 2971, Address: 0x40e0a4, Func Offset: 0x64
	// Line 2972, Address: 0x40e0ac, Func Offset: 0x6c
	// Line 2973, Address: 0x40e0b8, Func Offset: 0x78
	// Line 2974, Address: 0x40e0c0, Func Offset: 0x80
	// Line 2973, Address: 0x40e0c4, Func Offset: 0x84
	// Line 2974, Address: 0x40e0d0, Func Offset: 0x90
	// Line 2975, Address: 0x40e0e8, Func Offset: 0xa8
	// Line 2976, Address: 0x40e0f4, Func Offset: 0xb4
	// Line 2977, Address: 0x40e104, Func Offset: 0xc4
	// Line 2978, Address: 0x40e110, Func Offset: 0xd0
	// Line 2979, Address: 0x40e120, Func Offset: 0xe0
	// Line 2980, Address: 0x40e128, Func Offset: 0xe8
	// Line 2979, Address: 0x40e130, Func Offset: 0xf0
	// Line 2981, Address: 0x40e134, Func Offset: 0xf4
	// Line 2980, Address: 0x40e13c, Func Offset: 0xfc
	// Line 2982, Address: 0x40e140, Func Offset: 0x100
	// Line 2981, Address: 0x40e148, Func Offset: 0x108
	// Line 2982, Address: 0x40e14c, Func Offset: 0x10c
	// Line 2983, Address: 0x40e150, Func Offset: 0x110
	// Line 2984, Address: 0x40e154, Func Offset: 0x114
	// Func End, Address: 0x40e174, Func Offset: 0x134
}

// xMat3x3Euler__FP7xMat3x3fff
// Start address: 0x40e180
void xMat3x3Euler(xMat3x3* m, float32 yaw, float32 pitch, float32 roll)
{
	// Line 2945, Address: 0x40e180, Func Offset: 0
	// Line 2946, Address: 0x40e1ac, Func Offset: 0x2c
	// Line 2947, Address: 0x40e1b4, Func Offset: 0x34
	// Line 2948, Address: 0x40e1c4, Func Offset: 0x44
	// Line 2949, Address: 0x40e1cc, Func Offset: 0x4c
	// Line 2950, Address: 0x40e1dc, Func Offset: 0x5c
	// Line 2951, Address: 0x40e1e4, Func Offset: 0x64
	// Line 2952, Address: 0x40e1f4, Func Offset: 0x74
	// Line 2953, Address: 0x40e204, Func Offset: 0x84
	// Line 2954, Address: 0x40e20c, Func Offset: 0x8c
	// Line 2955, Address: 0x40e21c, Func Offset: 0x9c
	// Line 2957, Address: 0x40e228, Func Offset: 0xa8
	// Line 2955, Address: 0x40e22c, Func Offset: 0xac
	// Line 2956, Address: 0x40e230, Func Offset: 0xb0
	// Line 2957, Address: 0x40e238, Func Offset: 0xb8
	// Line 2958, Address: 0x40e240, Func Offset: 0xc0
	// Line 2960, Address: 0x40e244, Func Offset: 0xc4
	// Line 2959, Address: 0x40e248, Func Offset: 0xc8
	// Line 2958, Address: 0x40e24c, Func Offset: 0xcc
	// Line 2959, Address: 0x40e250, Func Offset: 0xd0
	// Line 2960, Address: 0x40e254, Func Offset: 0xd4
	// Line 2961, Address: 0x40e258, Func Offset: 0xd8
	// Line 2962, Address: 0x40e25c, Func Offset: 0xdc
	// Func End, Address: 0x40e280, Func Offset: 0x100
}

// xMat3x3Euler__FP7xMat3x3PC5xVec3
// Start address: 0x40e280
void xMat3x3Euler(xMat3x3* m, xVec3* ypr)
{
	// Line 2942, Address: 0x40e280, Func Offset: 0
	// Func End, Address: 0x40e290, Func Offset: 0x10
}

// xMat3x3LookVec4__FR7xMat3x3fffRC5xVec3
// Start address: 0x40e290
float32 xMat3x3LookVec4(xMat3x3& mat, float32 at_x, float32 at_y, float32 at_z, xVec3& hint_right)
{
	float32 mag2;
	float32 imag;
	// Line 2887, Address: 0x40e290, Func Offset: 0
	// Line 2889, Address: 0x40e294, Func Offset: 0x4
	// Line 2888, Address: 0x40e29c, Func Offset: 0xc
	// Line 2889, Address: 0x40e2a4, Func Offset: 0x14
	// Line 2888, Address: 0x40e2a8, Func Offset: 0x18
	// Line 2889, Address: 0x40e2ac, Func Offset: 0x1c
	// Line 2888, Address: 0x40e2b0, Func Offset: 0x20
	// Line 2889, Address: 0x40e2b4, Func Offset: 0x24
	// Line 2891, Address: 0x40e2bc, Func Offset: 0x2c
	// Line 2894, Address: 0x40e2cc, Func Offset: 0x3c
	// Line 2892, Address: 0x40e2d8, Func Offset: 0x48
	// Line 2891, Address: 0x40e2dc, Func Offset: 0x4c
	// Line 2892, Address: 0x40e2e0, Func Offset: 0x50
	// Line 2894, Address: 0x40e2fc, Func Offset: 0x6c
	// Line 2892, Address: 0x40e304, Func Offset: 0x74
	// Line 2894, Address: 0x40e30c, Func Offset: 0x7c
	// Line 2896, Address: 0x40e338, Func Offset: 0xa8
	// Line 2897, Address: 0x40e348, Func Offset: 0xb8
	// Line 2899, Address: 0x40e360, Func Offset: 0xd0
	// Line 2901, Address: 0x40e37c, Func Offset: 0xec
	// Line 2899, Address: 0x40e380, Func Offset: 0xf0
	// Line 2901, Address: 0x40e384, Func Offset: 0xf4
	// Line 2899, Address: 0x40e388, Func Offset: 0xf8
	// Line 2900, Address: 0x40e38c, Func Offset: 0xfc
	// Line 2901, Address: 0x40e3bc, Func Offset: 0x12c
	// Line 2910, Address: 0x40e43c, Func Offset: 0x1ac
	// Line 2890, Address: 0x40e450, Func Offset: 0x1c0
	// Line 2910, Address: 0x40e454, Func Offset: 0x1c4
	// Line 2890, Address: 0x40e4d0, Func Offset: 0x240
	// Line 2905, Address: 0x40e4d8, Func Offset: 0x248
	// Line 2910, Address: 0x40e4e0, Func Offset: 0x250
	// Line 2905, Address: 0x40e4ec, Func Offset: 0x25c
	// Line 2910, Address: 0x40e4f8, Func Offset: 0x268
	// Line 2905, Address: 0x40e504, Func Offset: 0x274
	// Line 2910, Address: 0x40e510, Func Offset: 0x280
	// Line 2906, Address: 0x40e524, Func Offset: 0x294
	// Line 2910, Address: 0x40e538, Func Offset: 0x2a8
	// Line 2906, Address: 0x40e53c, Func Offset: 0x2ac
	// Line 2910, Address: 0x40e540, Func Offset: 0x2b0
	// Line 2906, Address: 0x40e548, Func Offset: 0x2b8
	// Line 2910, Address: 0x40e54c, Func Offset: 0x2bc
	// Line 2906, Address: 0x40e554, Func Offset: 0x2c4
	// Line 2910, Address: 0x40e558, Func Offset: 0x2c8
	// Line 2907, Address: 0x40e56c, Func Offset: 0x2dc
	// Line 2910, Address: 0x40e578, Func Offset: 0x2e8
	// Line 2907, Address: 0x40e58c, Func Offset: 0x2fc
	// Line 2910, Address: 0x40e598, Func Offset: 0x308
	// Line 2907, Address: 0x40e5ac, Func Offset: 0x31c
	// Line 2911, Address: 0x40e5c0, Func Offset: 0x330
	// Func End, Address: 0x40e5cc, Func Offset: 0x33c
}

// xMat3x3LookVec__FP7xMat3x3PC5xVec3
// Start address: 0x40e5d0
float32 xMat3x3LookVec(xMat3x3* m, xVec3* at)
{
	float32 vec_len;
	// Line 2763, Address: 0x40e5d0, Func Offset: 0
	// Line 2768, Address: 0x40e5e8, Func Offset: 0x18
	// Line 2772, Address: 0x40e5f4, Func Offset: 0x24
	// Line 2776, Address: 0x40e5f8, Func Offset: 0x28
	// Line 2772, Address: 0x40e60c, Func Offset: 0x3c
	// Line 2776, Address: 0x40e630, Func Offset: 0x60
	// Line 2788, Address: 0x40e644, Func Offset: 0x74
	// Line 2801, Address: 0x40e658, Func Offset: 0x88
	// Line 2802, Address: 0x40e680, Func Offset: 0xb0
	// Line 2803, Address: 0x40e684, Func Offset: 0xb4
	// Line 2804, Address: 0x40e68c, Func Offset: 0xbc
	// Line 2805, Address: 0x40e690, Func Offset: 0xc0
	// Line 2806, Address: 0x40e694, Func Offset: 0xc4
	// Line 2807, Address: 0x40e698, Func Offset: 0xc8
	// Line 2808, Address: 0x40e69c, Func Offset: 0xcc
	// Line 2809, Address: 0x40e6a0, Func Offset: 0xd0
	// Line 2811, Address: 0x40e6a4, Func Offset: 0xd4
	// Line 2784, Address: 0x40e6b0, Func Offset: 0xe0
	// Line 2811, Address: 0x40e6b4, Func Offset: 0xe4
	// Line 2786, Address: 0x40e6d0, Func Offset: 0x100
	// Line 2811, Address: 0x40e6d8, Func Offset: 0x108
	// Line 2798, Address: 0x40e6f8, Func Offset: 0x128
	// Line 2816, Address: 0x40e700, Func Offset: 0x130
	// Line 2820, Address: 0x40e704, Func Offset: 0x134
	// Line 2816, Address: 0x40e70c, Func Offset: 0x13c
	// Line 2817, Address: 0x40e710, Func Offset: 0x140
	// Line 2818, Address: 0x40e714, Func Offset: 0x144
	// Line 2820, Address: 0x40e71c, Func Offset: 0x14c
	// Line 2823, Address: 0x40e724, Func Offset: 0x154
	// Line 2831, Address: 0x40e734, Func Offset: 0x164
	// Line 2823, Address: 0x40e738, Func Offset: 0x168
	// Line 2826, Address: 0x40e77c, Func Offset: 0x1ac
	// Line 2828, Address: 0x40e7d0, Func Offset: 0x200
	// Line 2832, Address: 0x40e7d4, Func Offset: 0x204
	// Func End, Address: 0x40e7ec, Func Offset: 0x21c
}

// xMat4x3MoveLocalAt__FP7xMat4x3f
// Start address: 0x40e7f0
void xMat4x3MoveLocalAt(xMat4x3* m, float32 mag)
{
	// Line 2743, Address: 0x40e7f0, Func Offset: 0
	// Line 2744, Address: 0x40e80c, Func Offset: 0x1c
	// Line 2745, Address: 0x40e820, Func Offset: 0x30
	// Line 2746, Address: 0x40e830, Func Offset: 0x40
	// Func End, Address: 0x40e838, Func Offset: 0x48
}

// xMat4x3MoveLocalUp__FP7xMat4x3f
// Start address: 0x40e840
void xMat4x3MoveLocalUp(xMat4x3* m, float32 mag)
{
	// Line 2736, Address: 0x40e840, Func Offset: 0
	// Line 2737, Address: 0x40e85c, Func Offset: 0x1c
	// Line 2738, Address: 0x40e870, Func Offset: 0x30
	// Line 2739, Address: 0x40e880, Func Offset: 0x40
	// Func End, Address: 0x40e888, Func Offset: 0x48
}

// xMat4x3MoveLocalRight__FP7xMat4x3f
// Start address: 0x40e890
void xMat4x3MoveLocalRight(xMat4x3* m, float32 mag)
{
	// Line 2729, Address: 0x40e890, Func Offset: 0
	// Line 2730, Address: 0x40e8ac, Func Offset: 0x1c
	// Line 2731, Address: 0x40e8c0, Func Offset: 0x30
	// Line 2732, Address: 0x40e8d0, Func Offset: 0x40
	// Func End, Address: 0x40e8d8, Func Offset: 0x48
}

// xMat3x3GetEuler__FPC7xMat3x3P5xVec3
// Start address: 0x40e8e0
void xMat3x3GetEuler(xMat3x3* m, xVec3* a)
{
	float32 pitch;
	float32 yaw;
	float32 roll;
	// Line 2693, Address: 0x40e8e0, Func Offset: 0
	// Line 2696, Address: 0x40e8e4, Func Offset: 0x4
	// Line 2693, Address: 0x40e8ec, Func Offset: 0xc
	// Line 2696, Address: 0x40e8f4, Func Offset: 0x14
	// Line 2693, Address: 0x40e8f8, Func Offset: 0x18
	// Line 2696, Address: 0x40e90c, Func Offset: 0x2c
	// Line 2700, Address: 0x40e940, Func Offset: 0x60
	// Line 2696, Address: 0x40e944, Func Offset: 0x64
	// Line 2700, Address: 0x40e948, Func Offset: 0x68
	// Line 2701, Address: 0x40e960, Func Offset: 0x80
	// Line 2702, Address: 0x40e97c, Func Offset: 0x9c
	// Line 2703, Address: 0x40e9d0, Func Offset: 0xf0
	// Line 2704, Address: 0x40ea0c, Func Offset: 0x12c
	// Line 2706, Address: 0x40ea14, Func Offset: 0x134
	// Line 2707, Address: 0x40ea70, Func Offset: 0x190
	// Line 2714, Address: 0x40ea74, Func Offset: 0x194
	// Line 2715, Address: 0x40ea78, Func Offset: 0x198
	// Line 2717, Address: 0x40ea7c, Func Offset: 0x19c
	// Line 2711, Address: 0x40ea94, Func Offset: 0x1b4
	// Line 2717, Address: 0x40eaa0, Func Offset: 0x1c0
	// Line 2711, Address: 0x40eaa8, Func Offset: 0x1c8
	// Line 2717, Address: 0x40ead0, Func Offset: 0x1f0
	// Line 2711, Address: 0x40ead8, Func Offset: 0x1f8
	// Line 2712, Address: 0x40eae0, Func Offset: 0x200
	// Line 2717, Address: 0x40eaec, Func Offset: 0x20c
	// Func End, Address: 0x40eb0c, Func Offset: 0x22c
}

// xMat3x3Normalize__FP7xMat3x3PC7xMat3x3
// Start address: 0x40eb10
void xMat3x3Normalize(xMat3x3* o, xMat3x3* m)
{
	// Line 2681, Address: 0x40eb10, Func Offset: 0
	// Line 2682, Address: 0x40eb24, Func Offset: 0x14
	// Line 2683, Address: 0x40eb2c, Func Offset: 0x1c
	// Line 2684, Address: 0x40eb38, Func Offset: 0x28
	// Line 2685, Address: 0x40eb44, Func Offset: 0x34
	// Func End, Address: 0x40eb58, Func Offset: 0x48
}

// xBoxFromCone__FR4xBoxRC5xVec3RC5xVec3fff
// Start address: 0x40eb60
void xBoxFromCone(xBox& box, xVec3& center, xVec3& dir, float32 dist, float32 r1, float32 r2)
{
	// Line 2624, Address: 0x40eb60, Func Offset: 0
	// Line 2626, Address: 0x40eb64, Func Offset: 0x4
	// Line 2627, Address: 0x40eba8, Func Offset: 0x48
	// Line 2626, Address: 0x40ebac, Func Offset: 0x4c
	// Line 2627, Address: 0x40ebb0, Func Offset: 0x50
	// Line 2626, Address: 0x40ebb4, Func Offset: 0x54
	// Line 2627, Address: 0x40ebe0, Func Offset: 0x80
	// Line 2626, Address: 0x40ebe8, Func Offset: 0x88
	// Line 2627, Address: 0x40ebf0, Func Offset: 0x90
	// Line 2626, Address: 0x40ebf8, Func Offset: 0x98
	// Line 2627, Address: 0x40ec08, Func Offset: 0xa8
	// Line 2626, Address: 0x40ec0c, Func Offset: 0xac
	// Line 2627, Address: 0x40ec14, Func Offset: 0xb4
	// Line 2626, Address: 0x40ec1c, Func Offset: 0xbc
	// Line 2627, Address: 0x40ec20, Func Offset: 0xc0
	// Line 2626, Address: 0x40ec24, Func Offset: 0xc4
	// Line 2627, Address: 0x40ec28, Func Offset: 0xc8
	// Line 2626, Address: 0x40ec34, Func Offset: 0xd4
	// Line 2627, Address: 0x40ec48, Func Offset: 0xe8
	// Line 2626, Address: 0x40ec54, Func Offset: 0xf4
	// Line 2627, Address: 0x40ec58, Func Offset: 0xf8
	// Line 2626, Address: 0x40ec5c, Func Offset: 0xfc
	// Line 2627, Address: 0x40ec64, Func Offset: 0x104
	// Line 2626, Address: 0x40ec70, Func Offset: 0x110
	// Line 2627, Address: 0x40ec80, Func Offset: 0x120
	// Line 2626, Address: 0x40ec84, Func Offset: 0x124
	// Line 2627, Address: 0x40ec8c, Func Offset: 0x12c
	// Line 2626, Address: 0x40ec90, Func Offset: 0x130
	// Line 2627, Address: 0x40ecb8, Func Offset: 0x158
	// Line 2628, Address: 0x40ed8c, Func Offset: 0x22c
	// Line 2627, Address: 0x40ed90, Func Offset: 0x230
	// Line 2628, Address: 0x40edac, Func Offset: 0x24c
	// Line 2629, Address: 0x40ee6c, Func Offset: 0x30c
	// Func End, Address: 0x40ee74, Func Offset: 0x314
}

// xBoxInitBoundCapsule__FP4xBoxPC8xCapsule
// Start address: 0x40ee80
void xBoxInitBoundCapsule(xBox* b, xCapsule* c)
{
	// Line 2594, Address: 0x40ee80, Func Offset: 0
	// Line 2599, Address: 0x40ee88, Func Offset: 0x8
	// Line 2600, Address: 0x40ee94, Func Offset: 0x14
	// Line 2601, Address: 0x40ee9c, Func Offset: 0x1c
	// Line 2600, Address: 0x40eea0, Func Offset: 0x20
	// Line 2602, Address: 0x40eea4, Func Offset: 0x24
	// Line 2603, Address: 0x40eeac, Func Offset: 0x2c
	// Line 2604, Address: 0x40eeb4, Func Offset: 0x34
	// Line 2603, Address: 0x40eeb8, Func Offset: 0x38
	// Line 2604, Address: 0x40eebc, Func Offset: 0x3c
	// Line 2606, Address: 0x40eec8, Func Offset: 0x48
	// Line 2607, Address: 0x40eed4, Func Offset: 0x54
	// Line 2608, Address: 0x40eedc, Func Offset: 0x5c
	// Line 2607, Address: 0x40eee0, Func Offset: 0x60
	// Line 2609, Address: 0x40eee4, Func Offset: 0x64
	// Line 2610, Address: 0x40eeec, Func Offset: 0x6c
	// Line 2611, Address: 0x40eef4, Func Offset: 0x74
	// Line 2610, Address: 0x40eef8, Func Offset: 0x78
	// Line 2611, Address: 0x40eefc, Func Offset: 0x7c
	// Line 2613, Address: 0x40ef08, Func Offset: 0x88
	// Line 2614, Address: 0x40ef14, Func Offset: 0x94
	// Line 2615, Address: 0x40ef1c, Func Offset: 0x9c
	// Line 2614, Address: 0x40ef20, Func Offset: 0xa0
	// Line 2616, Address: 0x40ef24, Func Offset: 0xa4
	// Line 2617, Address: 0x40ef2c, Func Offset: 0xac
	// Line 2618, Address: 0x40ef34, Func Offset: 0xb4
	// Line 2617, Address: 0x40ef38, Func Offset: 0xb8
	// Line 2618, Address: 0x40ef3c, Func Offset: 0xbc
	// Line 2620, Address: 0x40ef40, Func Offset: 0xc0
	// Func End, Address: 0x40ef48, Func Offset: 0xc8
}

// xBoxInitBoundOBB__FP4xBoxPC4xBoxPC7xMat4x3
// Start address: 0x40ef50
void xBoxInitBoundOBB(xBox* o, xBox* b, xMat4x3* m)
{
	xVec3 boxcent;
	float32 xmax;
	float32 ymax;
	float32 zmax;
	// Line 2558, Address: 0x40ef50, Func Offset: 0
	// Line 2565, Address: 0x40ef58, Func Offset: 0x8
	// Line 2566, Address: 0x40ef64, Func Offset: 0x14
	// Line 2584, Address: 0x40ef74, Func Offset: 0x24
	// Line 2567, Address: 0x40ef78, Func Offset: 0x28
	// Line 2565, Address: 0x40ef80, Func Offset: 0x30
	// Line 2566, Address: 0x40ef88, Func Offset: 0x38
	// Line 2567, Address: 0x40ef8c, Func Offset: 0x3c
	// Line 2566, Address: 0x40ef94, Func Offset: 0x44
	// Line 2565, Address: 0x40efa0, Func Offset: 0x50
	// Line 2571, Address: 0x40efa4, Func Offset: 0x54
	// Line 2575, Address: 0x40efb0, Func Offset: 0x60
	// Line 2566, Address: 0x40efb4, Func Offset: 0x64
	// Line 2575, Address: 0x40efb8, Func Offset: 0x68
	// Line 2571, Address: 0x40efbc, Func Offset: 0x6c
	// Line 2575, Address: 0x40efc0, Func Offset: 0x70
	// Line 2571, Address: 0x40efc8, Func Offset: 0x78
	// Line 2567, Address: 0x40efd0, Func Offset: 0x80
	// Line 2575, Address: 0x40efd4, Func Offset: 0x84
	// Line 2579, Address: 0x40efd8, Func Offset: 0x88
	// Line 2571, Address: 0x40efdc, Func Offset: 0x8c
	// Line 2575, Address: 0x40efe8, Func Offset: 0x98
	// Line 2579, Address: 0x40efec, Func Offset: 0x9c
	// Line 2571, Address: 0x40eff0, Func Offset: 0xa0
	// Line 2575, Address: 0x40eff4, Func Offset: 0xa4
	// Line 2579, Address: 0x40f000, Func Offset: 0xb0
	// Line 2575, Address: 0x40f00c, Func Offset: 0xbc
	// Line 2579, Address: 0x40f018, Func Offset: 0xc8
	// Line 2584, Address: 0x40f034, Func Offset: 0xe4
	// Line 2585, Address: 0x40f084, Func Offset: 0x134
	// Line 2586, Address: 0x40f088, Func Offset: 0x138
	// Line 2587, Address: 0x40f08c, Func Offset: 0x13c
	// Line 2585, Address: 0x40f090, Func Offset: 0x140
	// Line 2586, Address: 0x40f098, Func Offset: 0x148
	// Line 2587, Address: 0x40f0a0, Func Offset: 0x150
	// Line 2588, Address: 0x40f0a4, Func Offset: 0x154
	// Line 2587, Address: 0x40f0a8, Func Offset: 0x158
	// Line 2589, Address: 0x40f0ac, Func Offset: 0x15c
	// Line 2588, Address: 0x40f0b0, Func Offset: 0x160
	// Line 2590, Address: 0x40f0b4, Func Offset: 0x164
	// Line 2589, Address: 0x40f0b8, Func Offset: 0x168
	// Line 2590, Address: 0x40f0bc, Func Offset: 0x16c
	// Line 2591, Address: 0x40f0c0, Func Offset: 0x170
	// Func End, Address: 0x40f0c8, Func Offset: 0x178
}

// xPointInBox__FPC4xBoxPC5xVec3
// Start address: 0x40f0d0
int32 xPointInBox(xBox* b, xVec3* p)
{
	// Line 2552, Address: 0x40f0d0, Func Offset: 0
	// Line 2555, Address: 0x40f18c, Func Offset: 0xbc
	// Func End, Address: 0x40f194, Func Offset: 0xc4
}

// xTri3VecMinDist__FPC5xVec3PC5xVec3PC5xVec3PC5xVec3RfRf
// Start address: 0x40f1a0
void xTri3VecMinDist(xVec3* V0, xVec3* V1, xVec3* V2, xVec3* p, float32& s, float32& t)
{
	float32 kDiffx;
	float32 kDiffy;
	float32 kDiffz;
	float32 edge0x;
	float32 edge0y;
	float32 edge0z;
	float32 edge1x;
	float32 edge1y;
	float32 edge1z;
	float32 fA00;
	float32 fA01;
	float32 fA11;
	float32 fB0;
	float32 fB1;
	float32 fS;
	float32 fT;
	float32 fInvDet;
	float32 fTmp0;
	float32 fTmp1;
	float32 fNumer;
	float32 fDenom;
	// Line 2282, Address: 0x40f1a0, Func Offset: 0
	// Line 2300, Address: 0x40f1a4, Func Offset: 0x4
	// Line 2301, Address: 0x40f1b8, Func Offset: 0x18
	// Line 2300, Address: 0x40f1bc, Func Offset: 0x1c
	// Line 2301, Address: 0x40f1c4, Func Offset: 0x24
	// Line 2300, Address: 0x40f1c8, Func Offset: 0x28
	// Line 2301, Address: 0x40f1cc, Func Offset: 0x2c
	// Line 2302, Address: 0x40f1d0, Func Offset: 0x30
	// Line 2301, Address: 0x40f1dc, Func Offset: 0x3c
	// Line 2303, Address: 0x40f1e4, Func Offset: 0x44
	// Line 2302, Address: 0x40f1e8, Func Offset: 0x48
	// Line 2301, Address: 0x40f1ec, Func Offset: 0x4c
	// Line 2303, Address: 0x40f1f0, Func Offset: 0x50
	// Line 2302, Address: 0x40f1f4, Func Offset: 0x54
	// Line 2303, Address: 0x40f1f8, Func Offset: 0x58
	// Line 2304, Address: 0x40f1fc, Func Offset: 0x5c
	// Line 2302, Address: 0x40f200, Func Offset: 0x60
	// Line 2304, Address: 0x40f204, Func Offset: 0x64
	// Line 2305, Address: 0x40f20c, Func Offset: 0x6c
	// Line 2306, Address: 0x40f218, Func Offset: 0x78
	// Line 2307, Address: 0x40f224, Func Offset: 0x84
	// Line 2309, Address: 0x40f230, Func Offset: 0x90
	// Line 2310, Address: 0x40f238, Func Offset: 0x98
	// Line 2311, Address: 0x40f240, Func Offset: 0xa0
	// Line 2309, Address: 0x40f244, Func Offset: 0xa4
	// Line 2311, Address: 0x40f248, Func Offset: 0xa8
	// Line 2313, Address: 0x40f24c, Func Offset: 0xac
	// Line 2303, Address: 0x40f254, Func Offset: 0xb4
	// Line 2313, Address: 0x40f258, Func Offset: 0xb8
	// Line 2315, Address: 0x40f260, Func Offset: 0xc0
	// Line 2317, Address: 0x40f26c, Func Offset: 0xcc
	// Line 2319, Address: 0x40f278, Func Offset: 0xd8
	// Line 2322, Address: 0x40f288, Func Offset: 0xe8
	// Line 2329, Address: 0x40f294, Func Offset: 0xf4
	// Line 2332, Address: 0x40f2a8, Func Offset: 0x108
	// Line 2356, Address: 0x40f2b0, Func Offset: 0x110
	// Line 2361, Address: 0x40f2c0, Func Offset: 0x120
	// Line 2368, Address: 0x40f2cc, Func Offset: 0x12c
	// Line 2372, Address: 0x40f2e0, Func Offset: 0x140
	// Line 2373, Address: 0x40f2e8, Func Offset: 0x148
	// Line 2376, Address: 0x40f2f4, Func Offset: 0x154
	// Line 2381, Address: 0x40f304, Func Offset: 0x164
	// Line 2388, Address: 0x40f310, Func Offset: 0x170
	// Line 2391, Address: 0x40f324, Func Offset: 0x184
	// Line 2412, Address: 0x40f32c, Func Offset: 0x18c
	// Line 2414, Address: 0x40f338, Func Offset: 0x198
	// Line 2415, Address: 0x40f33c, Func Offset: 0x19c
	// Line 2416, Address: 0x40f340, Func Offset: 0x1a0
	// Line 2418, Address: 0x40f34c, Func Offset: 0x1ac
	// Line 2419, Address: 0x40f350, Func Offset: 0x1b0
	// Line 2420, Address: 0x40f368, Func Offset: 0x1c8
	// Line 2428, Address: 0x40f374, Func Offset: 0x1d4
	// Line 2429, Address: 0x40f380, Func Offset: 0x1e0
	// Line 2433, Address: 0x40f388, Func Offset: 0x1e8
	// Line 2437, Address: 0x40f390, Func Offset: 0x1f0
	// Line 2442, Address: 0x40f39c, Func Offset: 0x1fc
	// Line 2449, Address: 0x40f3a8, Func Offset: 0x208
	// Line 2453, Address: 0x40f3bc, Func Offset: 0x21c
	// Line 2454, Address: 0x40f3c4, Func Offset: 0x224
	// Line 2456, Address: 0x40f3d0, Func Offset: 0x230
	// Line 2457, Address: 0x40f3d4, Func Offset: 0x234
	// Line 2458, Address: 0x40f3d8, Func Offset: 0x238
	// Line 2460, Address: 0x40f3e4, Func Offset: 0x244
	// Line 2461, Address: 0x40f3e8, Func Offset: 0x248
	// Line 2462, Address: 0x40f400, Func Offset: 0x260
	// Line 2470, Address: 0x40f40c, Func Offset: 0x26c
	// Line 2471, Address: 0x40f418, Func Offset: 0x278
	// Line 2475, Address: 0x40f420, Func Offset: 0x280
	// Line 2479, Address: 0x40f428, Func Offset: 0x288
	// Line 2484, Address: 0x40f434, Func Offset: 0x294
	// Line 2491, Address: 0x40f440, Func Offset: 0x2a0
	// Line 2495, Address: 0x40f454, Func Offset: 0x2b4
	// Line 2498, Address: 0x40f45c, Func Offset: 0x2bc
	// Line 2499, Address: 0x40f468, Func Offset: 0x2c8
	// Line 2507, Address: 0x40f474, Func Offset: 0x2d4
	// Line 2508, Address: 0x40f48c, Func Offset: 0x2ec
	// Line 2516, Address: 0x40f498, Func Offset: 0x2f8
	// Line 2517, Address: 0x40f4a4, Func Offset: 0x304
	// Line 2535, Address: 0x40f4b4, Func Offset: 0x314
	// Line 2537, Address: 0x40f4b8, Func Offset: 0x318
	// Line 2324, Address: 0x40f4c0, Func Offset: 0x320
	// Line 2326, Address: 0x40f4c8, Func Offset: 0x328
	// Line 2336, Address: 0x40f4d0, Func Offset: 0x330
	// Line 2537, Address: 0x40f4d4, Func Offset: 0x334
	// Line 2341, Address: 0x40f4e0, Func Offset: 0x340
	// Line 2537, Address: 0x40f4e4, Func Offset: 0x344
	// Line 2348, Address: 0x40f4ec, Func Offset: 0x34c
	// Line 2352, Address: 0x40f500, Func Offset: 0x360
	// Line 2343, Address: 0x40f508, Func Offset: 0x368
	// Line 2345, Address: 0x40f510, Func Offset: 0x370
	// Line 2363, Address: 0x40f518, Func Offset: 0x378
	// Line 2365, Address: 0x40f520, Func Offset: 0x380
	// Line 2378, Address: 0x40f528, Func Offset: 0x388
	// Line 2380, Address: 0x40f52c, Func Offset: 0x38c
	// Line 2383, Address: 0x40f534, Func Offset: 0x394
	// Line 2385, Address: 0x40f53c, Func Offset: 0x39c
	// Line 2399, Address: 0x40f544, Func Offset: 0x3a4
	// Line 2402, Address: 0x40f558, Func Offset: 0x3b8
	// Line 2407, Address: 0x40f55c, Func Offset: 0x3bc
	// Line 2422, Address: 0x40f564, Func Offset: 0x3c4
	// Line 2425, Address: 0x40f56c, Func Offset: 0x3cc
	// Line 2439, Address: 0x40f574, Func Offset: 0x3d4
	// Line 2441, Address: 0x40f57c, Func Offset: 0x3dc
	// Line 2465, Address: 0x40f584, Func Offset: 0x3e4
	// Line 2464, Address: 0x40f588, Func Offset: 0x3e8
	// Line 2467, Address: 0x40f590, Func Offset: 0x3f0
	// Line 2481, Address: 0x40f598, Func Offset: 0x3f8
	// Line 2483, Address: 0x40f5a0, Func Offset: 0x400
	// Line 2486, Address: 0x40f5a8, Func Offset: 0x408
	// Line 2488, Address: 0x40f5ac, Func Offset: 0x40c
	// Line 2501, Address: 0x40f5b4, Func Offset: 0x414
	// Line 2502, Address: 0x40f5b8, Func Offset: 0x418
	// Line 2504, Address: 0x40f5c0, Func Offset: 0x420
	// Line 2510, Address: 0x40f5c8, Func Offset: 0x428
	// Line 2513, Address: 0x40f5d0, Func Offset: 0x430
	// Line 2537, Address: 0x40f5d8, Func Offset: 0x438
	// Func End, Address: 0x40f5e0, Func Offset: 0x440
}

// xLine3VecDist2__FPC5xVec3PC5xVec3PC5xVec3P6xIsect
// Start address: 0x40f5e0
void xLine3VecDist2(xVec3* p1, xVec3* p2, xVec3* v, xIsect* isx)
{
	// Line 564, Address: 0x40f5e0, Func Offset: 0
	// Line 571, Address: 0x40f5e4, Func Offset: 0x4
	// Line 573, Address: 0x40f5e8, Func Offset: 0x8
	// Line 571, Address: 0x40f5ec, Func Offset: 0xc
	// Line 573, Address: 0x40f5f4, Func Offset: 0x14
	// Line 571, Address: 0x40f5f8, Func Offset: 0x18
	// Line 573, Address: 0x40f600, Func Offset: 0x20
	// Line 571, Address: 0x40f608, Func Offset: 0x28
	// Line 573, Address: 0x40f60c, Func Offset: 0x2c
	// Line 571, Address: 0x40f618, Func Offset: 0x38
	// Line 573, Address: 0x40f61c, Func Offset: 0x3c
	// Line 571, Address: 0x40f628, Func Offset: 0x48
	// Line 573, Address: 0x40f62c, Func Offset: 0x4c
	// Line 575, Address: 0x40f630, Func Offset: 0x50
	// Line 573, Address: 0x40f634, Func Offset: 0x54
	// Line 575, Address: 0x40f638, Func Offset: 0x58
	// Line 576, Address: 0x40f644, Func Offset: 0x64
	// Line 580, Address: 0x40f650, Func Offset: 0x70
	// Line 581, Address: 0x40f664, Func Offset: 0x84
	// Line 589, Address: 0x40f670, Func Offset: 0x90
	// Line 592, Address: 0x40f690, Func Offset: 0xb0
	// Line 578, Address: 0x40f698, Func Offset: 0xb8
	// Line 579, Address: 0x40f6a8, Func Offset: 0xc8
	// Line 583, Address: 0x40f6b0, Func Offset: 0xd0
	// Line 592, Address: 0x40f6b8, Func Offset: 0xd8
	// Line 583, Address: 0x40f6bc, Func Offset: 0xdc
	// Line 592, Address: 0x40f6c0, Func Offset: 0xe0
	// Line 584, Address: 0x40f6d4, Func Offset: 0xf4
	// Line 585, Address: 0x40f6e8, Func Offset: 0x108
	// Line 592, Address: 0x40f6f0, Func Offset: 0x110
	// Func End, Address: 0x40f6f8, Func Offset: 0x118
}

// xMath3Init__Fv
// Start address: 0x40f700
void xMath3Init()
{
	// Line 68, Address: 0x40f700, Func Offset: 0
	// Line 69, Address: 0x40f708, Func Offset: 0x8
	// Line 71, Address: 0x40f710, Func Offset: 0x10
	// Line 72, Address: 0x40f714, Func Offset: 0x14
	// Line 71, Address: 0x40f718, Func Offset: 0x18
	// Line 72, Address: 0x40f720, Func Offset: 0x20
	// Line 71, Address: 0x40f724, Func Offset: 0x24
	// Line 72, Address: 0x40f728, Func Offset: 0x28
	// Line 71, Address: 0x40f72c, Func Offset: 0x2c
	// Line 72, Address: 0x40f730, Func Offset: 0x30
	// Line 73, Address: 0x40f734, Func Offset: 0x34
	// Line 71, Address: 0x40f738, Func Offset: 0x38
	// Line 74, Address: 0x40f740, Func Offset: 0x40
	// Line 71, Address: 0x40f744, Func Offset: 0x44
	// Line 72, Address: 0x40f748, Func Offset: 0x48
	// Line 74, Address: 0x40f750, Func Offset: 0x50
	// Line 71, Address: 0x40f754, Func Offset: 0x54
	// Line 73, Address: 0x40f760, Func Offset: 0x60
	// Line 72, Address: 0x40f768, Func Offset: 0x68
	// Line 71, Address: 0x40f770, Func Offset: 0x70
	// Line 73, Address: 0x40f774, Func Offset: 0x74
	// Line 72, Address: 0x40f784, Func Offset: 0x84
	// Line 73, Address: 0x40f790, Func Offset: 0x90
	// Line 74, Address: 0x40f794, Func Offset: 0x94
	// Line 73, Address: 0x40f798, Func Offset: 0x98
	// Line 72, Address: 0x40f7a4, Func Offset: 0xa4
	// Line 74, Address: 0x40f7a8, Func Offset: 0xa8
	// Line 73, Address: 0x40f7b4, Func Offset: 0xb4
	// Line 74, Address: 0x40f7b8, Func Offset: 0xb8
	// Line 79, Address: 0x40f7d0, Func Offset: 0xd0
	// Func End, Address: 0x40f7dc, Func Offset: 0xdc
}

