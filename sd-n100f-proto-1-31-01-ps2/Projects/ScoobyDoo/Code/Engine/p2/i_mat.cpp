typedef struct XStreamHeader;
typedef struct Vector3D;
typedef struct tagXStreamDirectoryEntry;
typedef struct tagXStreamMDSDirectory;


typedef float32 type_0[16];
typedef tagXStreamDirectoryEntry type_1[1000];
typedef int8 type_2[2048];
typedef int8 type_3[128];

struct XStreamHeader
{
	uint32 id;
	uint32 versionID;
	uint8 month;
	uint8 day;
	uint8 hour;
	uint8 minute;
	uint32 mdsOffset;
	uint32 mdsLength;
	tagXStreamMDSDirectory directory;
	int8 safety[2048];
};

struct Vector3D
{
	float32 x;
	float32 y;
	float32 z;
};

struct tagXStreamDirectoryEntry
{
	uint32 id;
	uint32 type;
	uint32 offset;
	uint32 length;
};

struct tagXStreamMDSDirectory
{
	uint32 count;
	tagXStreamDirectoryEntry directory[1000];
};

float32 matrix_stack[16];
float32 matrix_sp[16];
int16 matrix_stack_depth;
int16 matrix_stack_maxdepth;
float32 SCALE;
float32 CX;
float32 CY;
int8 vAssertBuf2[128];
XStreamHeader currentHeader;

void RotMatrixZ(float32 a[16], float32 ang);
void RotMatrixY(float32 a[16], float32 ang);
void RotMatrixX(float32 a[16], float32 ang);
void ScaleMatrix(float32 a[16], float32 sx, float32 sy, float32 sz);
void MultMatrix(float32 R[16], float32 A[16], float32 B[16]);
void IdMatrix(float32 a[16]);
void SetCurrentMatrix(float32 m[16]);
void GetCurrentMatrix(float32 m[16]);
void PopMatrixStack(uint32 num);
void PushMatrixStack(float32 m[16]);
void InitMatrixStack(uint32 maxdepth);

// RotMatrixZ__FPA16_ff
// Start address: 0x38ee40
void RotMatrixZ(float32 a[16], float32 ang)
{
	float32 rot[16];
	float32 m[16];
	float32 c;
	float32 s;
	// Line 264, Address: 0x38ee40, Func Offset: 0
	// Line 268, Address: 0x38ee5c, Func Offset: 0x1c
	// Line 269, Address: 0x38ee74, Func Offset: 0x34
	// Line 270, Address: 0x38ee9c, Func Offset: 0x5c
	// Line 271, Address: 0x38eec4, Func Offset: 0x84
	// Line 272, Address: 0x38ef08, Func Offset: 0xc8
	// Line 273, Address: 0x38ef0c, Func Offset: 0xcc
	// Line 274, Address: 0x38ef10, Func Offset: 0xd0
	// Line 275, Address: 0x38ef18, Func Offset: 0xd8
	// Line 278, Address: 0x38ef1c, Func Offset: 0xdc
	// Line 279, Address: 0x38ef30, Func Offset: 0xf0
	// Func End, Address: 0x38ef50, Func Offset: 0x110
}

// RotMatrixY__FPA16_ff
// Start address: 0x38ef50
void RotMatrixY(float32 a[16], float32 ang)
{
	float32 rot[16];
	float32 m[16];
	float32 c;
	float32 s;
	// Line 246, Address: 0x38ef50, Func Offset: 0
	// Line 250, Address: 0x38ef6c, Func Offset: 0x1c
	// Line 251, Address: 0x38ef84, Func Offset: 0x34
	// Line 252, Address: 0x38efac, Func Offset: 0x5c
	// Line 253, Address: 0x38efd4, Func Offset: 0x84
	// Line 254, Address: 0x38f018, Func Offset: 0xc8
	// Line 255, Address: 0x38f01c, Func Offset: 0xcc
	// Line 256, Address: 0x38f024, Func Offset: 0xd4
	// Line 257, Address: 0x38f028, Func Offset: 0xd8
	// Line 260, Address: 0x38f02c, Func Offset: 0xdc
	// Line 261, Address: 0x38f040, Func Offset: 0xf0
	// Func End, Address: 0x38f060, Func Offset: 0x110
}

// RotMatrixX__FPA16_ff
// Start address: 0x38f060
void RotMatrixX(float32 a[16], float32 ang)
{
	float32 rot[16];
	float32 m[16];
	float32 c;
	float32 s;
	// Line 228, Address: 0x38f060, Func Offset: 0
	// Line 232, Address: 0x38f07c, Func Offset: 0x1c
	// Line 233, Address: 0x38f094, Func Offset: 0x34
	// Line 234, Address: 0x38f0bc, Func Offset: 0x5c
	// Line 235, Address: 0x38f0e4, Func Offset: 0x84
	// Line 236, Address: 0x38f128, Func Offset: 0xc8
	// Line 237, Address: 0x38f12c, Func Offset: 0xcc
	// Line 238, Address: 0x38f130, Func Offset: 0xd0
	// Line 239, Address: 0x38f138, Func Offset: 0xd8
	// Line 242, Address: 0x38f13c, Func Offset: 0xdc
	// Line 243, Address: 0x38f150, Func Offset: 0xf0
	// Func End, Address: 0x38f170, Func Offset: 0x110
}

// ScaleMatrix__FPA16_ffff
// Start address: 0x38f170
void ScaleMatrix(float32 a[16], float32 sx, float32 sy, float32 sz)
{
	float32 S[16];
	float32 m[16];
	float32* s;
	// Line 172, Address: 0x38f170, Func Offset: 0
	// Line 176, Address: 0x38f198, Func Offset: 0x28
	// Line 177, Address: 0x38f1ac, Func Offset: 0x3c
	// Line 178, Address: 0x38f1f0, Func Offset: 0x80
	// Line 179, Address: 0x38f1f4, Func Offset: 0x84
	// Line 180, Address: 0x38f1f8, Func Offset: 0x88
	// Line 181, Address: 0x38f1fc, Func Offset: 0x8c
	// Line 182, Address: 0x38f200, Func Offset: 0x90
	// Line 183, Address: 0x38f214, Func Offset: 0xa4
	// Func End, Address: 0x38f238, Func Offset: 0xc8
}

// MultMatrix__FPA16_fPA16_fPA16_f
// Start address: 0x38f240
void MultMatrix(float32 R[16], float32 A[16], float32 B[16])
{
	float32* r;
	float32* b;
	float32* a;
	float32 temp[16];
	int32 usetemp;
	// Line 121, Address: 0x38f240, Func Offset: 0
	// Line 126, Address: 0x38f260, Func Offset: 0x20
	// Line 127, Address: 0x38f300, Func Offset: 0xc0
	// Line 128, Address: 0x38f3a0, Func Offset: 0x160
	// Line 130, Address: 0x38f440, Func Offset: 0x200
	// Line 136, Address: 0x38f45c, Func Offset: 0x21c
	// Line 147, Address: 0x38f464, Func Offset: 0x224
	// Line 148, Address: 0x38f490, Func Offset: 0x250
	// Line 149, Address: 0x38f4bc, Func Offset: 0x27c
	// Line 150, Address: 0x38f4e8, Func Offset: 0x2a8
	// Line 152, Address: 0x38f4ec, Func Offset: 0x2ac
	// Line 153, Address: 0x38f518, Func Offset: 0x2d8
	// Line 154, Address: 0x38f544, Func Offset: 0x304
	// Line 155, Address: 0x38f570, Func Offset: 0x330
	// Line 157, Address: 0x38f574, Func Offset: 0x334
	// Line 158, Address: 0x38f5a0, Func Offset: 0x360
	// Line 159, Address: 0x38f5cc, Func Offset: 0x38c
	// Line 160, Address: 0x38f5f8, Func Offset: 0x3b8
	// Line 162, Address: 0x38f5fc, Func Offset: 0x3bc
	// Line 163, Address: 0x38f630, Func Offset: 0x3f0
	// Line 164, Address: 0x38f664, Func Offset: 0x424
	// Line 165, Address: 0x38f698, Func Offset: 0x458
	// Line 167, Address: 0x38f6a0, Func Offset: 0x460
	// Line 168, Address: 0x38f6a8, Func Offset: 0x468
	// Line 169, Address: 0x38f6bc, Func Offset: 0x47c
	// Func End, Address: 0x38f6d8, Func Offset: 0x498
}

// IdMatrix__FPA16_f
// Start address: 0x38f6e0
void IdMatrix(float32 a[16])
{
	float32* m;
	// Line 109, Address: 0x38f6e0, Func Offset: 0
	// Line 112, Address: 0x38f6ec, Func Offset: 0xc
	// Line 113, Address: 0x38f700, Func Offset: 0x20
	// Line 114, Address: 0x38f714, Func Offset: 0x34
	// Line 115, Address: 0x38f728, Func Offset: 0x48
	// Func End, Address: 0x38f73c, Func Offset: 0x5c
}

// SetCurrentMatrix__FPA16_f
// Start address: 0x38f740
void SetCurrentMatrix(float32 m[16])
{
	// Line 78, Address: 0x38f740, Func Offset: 0
	// Line 79, Address: 0x38f74c, Func Offset: 0xc
	// Line 80, Address: 0x38f75c, Func Offset: 0x1c
	// Func End, Address: 0x38f76c, Func Offset: 0x2c
}

// GetCurrentMatrix__FPA16_f
// Start address: 0x38f770
void GetCurrentMatrix(float32 m[16])
{
	// Line 73, Address: 0x38f770, Func Offset: 0
	// Line 74, Address: 0x38f778, Func Offset: 0x8
	// Line 75, Address: 0x38f788, Func Offset: 0x18
	// Func End, Address: 0x38f798, Func Offset: 0x28
}

// PopMatrixStack__FUi
// Start address: 0x38f7a0
void PopMatrixStack(uint32 num)
{
	// Line 60, Address: 0x38f7a0, Func Offset: 0
	// Line 61, Address: 0x38f7b0, Func Offset: 0x10
	// Line 63, Address: 0x38f860, Func Offset: 0xc0
	// Line 64, Address: 0x38f870, Func Offset: 0xd0
	// Line 65, Address: 0x38f884, Func Offset: 0xe4
	// Func End, Address: 0x38f898, Func Offset: 0xf8
}

// PushMatrixStack__FPA16_f
// Start address: 0x38f8a0
void PushMatrixStack(float32 m[16])
{
	// Line 50, Address: 0x38f8a0, Func Offset: 0
	// Line 51, Address: 0x38f8b0, Func Offset: 0x10
	// Line 53, Address: 0x38f960, Func Offset: 0xc0
	// Line 54, Address: 0x38f96c, Func Offset: 0xcc
	// Line 55, Address: 0x38f978, Func Offset: 0xd8
	// Line 56, Address: 0x38f980, Func Offset: 0xe0
	// Line 57, Address: 0x38f994, Func Offset: 0xf4
	// Func End, Address: 0x38f9a8, Func Offset: 0x108
}

// InitMatrixStack__FUi
// Start address: 0x38f9b0
void InitMatrixStack(uint32 maxdepth)
{
	uint32 num;
	// Line 27, Address: 0x38f9b0, Func Offset: 0
	// Line 28, Address: 0x38f9c4, Func Offset: 0x14
	// Line 30, Address: 0x38f9c8, Func Offset: 0x18
	// Line 31, Address: 0x38fa68, Func Offset: 0xb8
	// Line 33, Address: 0x38fb0c, Func Offset: 0x15c
	// Line 36, Address: 0x38fb10, Func Offset: 0x160
	// Line 37, Address: 0x38fb34, Func Offset: 0x184
	// Line 38, Address: 0x38fbd8, Func Offset: 0x228
	// Line 39, Address: 0x38fbe0, Func Offset: 0x230
	// Func End, Address: 0x38fbf8, Func Offset: 0x248
}

