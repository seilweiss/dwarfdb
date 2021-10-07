typedef struct tagMATRIX;
typedef struct Vector3D;


typedef float32 type[16];

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

struct Vector3D
{
	float32 x;
	float32 y;
	float32 z;
};

float32 g_EPSILON;

int32 iMatrixVectorMatrixMultiply(Vector3D* vDest, Vector3D* vSrc, tagMATRIX* mat);
void iMatrixMatrixMultiply(tagMATRIX* q, tagMATRIX* a, tagMATRIX* b);
void iMatrixSetRotateZMatrixRIGHT(tagMATRIX* m, float32 fRads);
void iMatrixSetRotateZMatrix(tagMATRIX* m, float32 fRads);
void iMatrixSetRotateYMatrixRIGHT(tagMATRIX* m, float32 fRads);
void iMatrixSetRotateYMatrix(tagMATRIX* m, float32 fRads);
void iMatrixSetRotateXMatrixRIGHT(tagMATRIX* m, float32 fRads);
void iMatrixSetRotateXMatrix(tagMATRIX* m, float32 fRads);
void iMatrixSetScaleMatrix(tagMATRIX* m, float32 sx, float32 sy, float32 sz);
void iMatrixCalcShadowMatrix(tagMATRIX* shadowMat, float32* groundPlane, Vector3D* lightPos);

// iMatrixVectorMatrixMultiply__FP8Vector3DP8Vector3DP9tagMATRIX
// Start address: 0x381750
int32 iMatrixVectorMatrixMultiply(Vector3D* vDest, Vector3D* vSrc, tagMATRIX* mat)
{
	float32 w;
	float32 z;
	float32 y;
	float32 x;
	// Line 407, Address: 0x381750, Func Offset: 0
	// Line 408, Address: 0x381774, Func Offset: 0x24
	// Line 409, Address: 0x3817a4, Func Offset: 0x54
	// Line 410, Address: 0x3817d4, Func Offset: 0x84
	// Line 411, Address: 0x381804, Func Offset: 0xb4
	// Line 413, Address: 0x381834, Func Offset: 0xe4
	// Line 414, Address: 0x381878, Func Offset: 0x128
	// Line 416, Address: 0x381884, Func Offset: 0x134
	// Line 417, Address: 0x381894, Func Offset: 0x144
	// Line 418, Address: 0x38189c, Func Offset: 0x14c
	// Line 420, Address: 0x3818a4, Func Offset: 0x154
	// Line 421, Address: 0x3818a8, Func Offset: 0x158
	// Func End, Address: 0x3818d0, Func Offset: 0x180
}

// iMatrixMatrixMultiply__FP9tagMATRIXP9tagMATRIXP9tagMATRIX
// Start address: 0x3818d0
void iMatrixMatrixMultiply(tagMATRIX* q, tagMATRIX* a, tagMATRIX* b)
{
	float32 pM[16];
	float32* pB;
	float32* pA;
	int32 k;
	int32 j;
	int32 i;
	// Line 385, Address: 0x3818d0, Func Offset: 0
	// Line 387, Address: 0x3818e8, Func Offset: 0x18
	// Line 388, Address: 0x3818ec, Func Offset: 0x1c
	// Line 391, Address: 0x3818f0, Func Offset: 0x20
	// Line 393, Address: 0x381904, Func Offset: 0x34
	// Line 394, Address: 0x381910, Func Offset: 0x40
	// Line 395, Address: 0x38191c, Func Offset: 0x4c
	// Line 396, Address: 0x381928, Func Offset: 0x58
	// Line 399, Address: 0x3819a4, Func Offset: 0xd4
	// Line 400, Address: 0x3819b8, Func Offset: 0xe8
	// Func End, Address: 0x3819d4, Func Offset: 0x104
}

// iMatrixSetRotateZMatrixRIGHT__FP9tagMATRIXf
// Start address: 0x3819e0
void iMatrixSetRotateZMatrixRIGHT(tagMATRIX* m, float32 fRads)
{
	float32 sinr;
	float32 cosr;
	// Line 227, Address: 0x3819e0, Func Offset: 0
	// Line 228, Address: 0x3819fc, Func Offset: 0x1c
	// Line 229, Address: 0x381a24, Func Offset: 0x44
	// Line 231, Address: 0x381a4c, Func Offset: 0x6c
	// Line 233, Address: 0x381a64, Func Offset: 0x84
	// Line 234, Address: 0x381a68, Func Offset: 0x88
	// Line 235, Address: 0x381a70, Func Offset: 0x90
	// Line 236, Address: 0x381a74, Func Offset: 0x94
	// Line 238, Address: 0x381a78, Func Offset: 0x98
	// Func End, Address: 0x381a94, Func Offset: 0xb4
}

// iMatrixSetRotateZMatrix__FP9tagMATRIXf
// Start address: 0x381aa0
void iMatrixSetRotateZMatrix(tagMATRIX* m, float32 fRads)
{
	float32 sinr;
	float32 cosr;
	// Line 200, Address: 0x381aa0, Func Offset: 0
	// Line 201, Address: 0x381abc, Func Offset: 0x1c
	// Line 202, Address: 0x381ae4, Func Offset: 0x44
	// Line 204, Address: 0x381b0c, Func Offset: 0x6c
	// Line 207, Address: 0x381b24, Func Offset: 0x84
	// Line 208, Address: 0x381b28, Func Offset: 0x88
	// Line 209, Address: 0x381b2c, Func Offset: 0x8c
	// Line 210, Address: 0x381b34, Func Offset: 0x94
	// Line 220, Address: 0x381b38, Func Offset: 0x98
	// Func End, Address: 0x381b54, Func Offset: 0xb4
}

// iMatrixSetRotateYMatrixRIGHT__FP9tagMATRIXf
// Start address: 0x381b60
void iMatrixSetRotateYMatrixRIGHT(tagMATRIX* m, float32 fRads)
{
	float32 sinr;
	float32 cosr;
	// Line 183, Address: 0x381b60, Func Offset: 0
	// Line 184, Address: 0x381b7c, Func Offset: 0x1c
	// Line 185, Address: 0x381ba4, Func Offset: 0x44
	// Line 187, Address: 0x381bcc, Func Offset: 0x6c
	// Line 189, Address: 0x381be4, Func Offset: 0x84
	// Line 190, Address: 0x381be8, Func Offset: 0x88
	// Line 191, Address: 0x381bec, Func Offset: 0x8c
	// Line 192, Address: 0x381bf4, Func Offset: 0x94
	// Line 193, Address: 0x381bf8, Func Offset: 0x98
	// Func End, Address: 0x381c14, Func Offset: 0xb4
}

// iMatrixSetRotateYMatrix__FP9tagMATRIXf
// Start address: 0x381c20
void iMatrixSetRotateYMatrix(tagMATRIX* m, float32 fRads)
{
	float32 sinr;
	float32 cosr;
	// Line 156, Address: 0x381c20, Func Offset: 0
	// Line 157, Address: 0x381c3c, Func Offset: 0x1c
	// Line 158, Address: 0x381c64, Func Offset: 0x44
	// Line 160, Address: 0x381c8c, Func Offset: 0x6c
	// Line 163, Address: 0x381ca4, Func Offset: 0x84
	// Line 164, Address: 0x381ca8, Func Offset: 0x88
	// Line 165, Address: 0x381cb0, Func Offset: 0x90
	// Line 166, Address: 0x381cb4, Func Offset: 0x94
	// Line 175, Address: 0x381cb8, Func Offset: 0x98
	// Func End, Address: 0x381cd4, Func Offset: 0xb4
}

// iMatrixSetRotateXMatrixRIGHT__FP9tagMATRIXf
// Start address: 0x381ce0
void iMatrixSetRotateXMatrixRIGHT(tagMATRIX* m, float32 fRads)
{
	float32 sinr;
	float32 cosr;
	// Line 139, Address: 0x381ce0, Func Offset: 0
	// Line 140, Address: 0x381cfc, Func Offset: 0x1c
	// Line 141, Address: 0x381d24, Func Offset: 0x44
	// Line 143, Address: 0x381d4c, Func Offset: 0x6c
	// Line 144, Address: 0x381d64, Func Offset: 0x84
	// Line 145, Address: 0x381d68, Func Offset: 0x88
	// Line 146, Address: 0x381d6c, Func Offset: 0x8c
	// Line 147, Address: 0x381d74, Func Offset: 0x94
	// Line 148, Address: 0x381d78, Func Offset: 0x98
	// Func End, Address: 0x381d94, Func Offset: 0xb4
}

// iMatrixSetRotateXMatrix__FP9tagMATRIXf
// Start address: 0x381da0
void iMatrixSetRotateXMatrix(tagMATRIX* m, float32 fRads)
{
	float32 sinr;
	float32 cosr;
	// Line 111, Address: 0x381da0, Func Offset: 0
	// Line 112, Address: 0x381dbc, Func Offset: 0x1c
	// Line 113, Address: 0x381de4, Func Offset: 0x44
	// Line 115, Address: 0x381e0c, Func Offset: 0x6c
	// Line 119, Address: 0x381e24, Func Offset: 0x84
	// Line 120, Address: 0x381e28, Func Offset: 0x88
	// Line 121, Address: 0x381e2c, Func Offset: 0x8c
	// Line 122, Address: 0x381e34, Func Offset: 0x94
	// Line 132, Address: 0x381e38, Func Offset: 0x98
	// Func End, Address: 0x381e54, Func Offset: 0xb4
}

// iMatrixSetScaleMatrix__FP9tagMATRIXfff
// Start address: 0x381e60
void iMatrixSetScaleMatrix(tagMATRIX* m, float32 sx, float32 sy, float32 sz)
{
	// Line 99, Address: 0x381e60, Func Offset: 0
	// Line 100, Address: 0x381e88, Func Offset: 0x28
	// Line 101, Address: 0x381ea0, Func Offset: 0x40
	// Line 102, Address: 0x381ea4, Func Offset: 0x44
	// Line 103, Address: 0x381ea8, Func Offset: 0x48
	// Line 104, Address: 0x381eac, Func Offset: 0x4c
	// Func End, Address: 0x381ecc, Func Offset: 0x6c
}

// iMatrixCalcShadowMatrix__FP9tagMATRIXPfP8Vector3D
// Start address: 0x381ed0
void iMatrixCalcShadowMatrix(tagMATRIX* shadowMat, float32* groundPlane, Vector3D* lightPos)
{
	float32 dot;
	// Line 51, Address: 0x381ed0, Func Offset: 0
	// Line 59, Address: 0x381f00, Func Offset: 0x30
	// Line 60, Address: 0x381f14, Func Offset: 0x44
	// Line 61, Address: 0x381f28, Func Offset: 0x58
	// Line 62, Address: 0x381f3c, Func Offset: 0x6c
	// Line 64, Address: 0x381f50, Func Offset: 0x80
	// Line 65, Address: 0x381f64, Func Offset: 0x94
	// Line 66, Address: 0x381f78, Func Offset: 0xa8
	// Line 67, Address: 0x381f8c, Func Offset: 0xbc
	// Line 69, Address: 0x381fa0, Func Offset: 0xd0
	// Line 70, Address: 0x381fb4, Func Offset: 0xe4
	// Line 71, Address: 0x381fc8, Func Offset: 0xf8
	// Line 72, Address: 0x381fdc, Func Offset: 0x10c
	// Line 74, Address: 0x381ff0, Func Offset: 0x120
	// Line 75, Address: 0x381ffc, Func Offset: 0x12c
	// Line 76, Address: 0x382008, Func Offset: 0x138
	// Line 77, Address: 0x382014, Func Offset: 0x144
	// Line 78, Address: 0x382020, Func Offset: 0x150
	// Func End, Address: 0x382028, Func Offset: 0x158
}

