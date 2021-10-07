typedef struct VoBuf;
typedef struct VoTag;
typedef struct VoData;


typedef uint8 type_0[1382400];
typedef int32 type_1[15];
typedef uint32 type_2[32896];
typedef uint32 type_3[32896][2];

struct VoBuf
{
	VoData* data;
	VoTag* tag;
	int32 write;
	int32 count;
	int32 size;
};

struct VoTag
{
	int32 status;
	int32 dummy[15];
	uint32 v[32896][2];
};

struct VoData
{
	uint8 v[1382400];
};


void voBufDecCount(VoBuf* f);
VoTag* voBufGetTag(VoBuf* f);
VoData* voBufGetData(VoBuf* f);
void voBufIncCount(VoBuf* f);
int32 voBufIsFull(VoBuf* f);
void voBufReset(VoBuf* f);
void voBufDelete();
void voBufCreate(VoBuf* f, VoData* data, VoTag* tag, int32 size);

// voBufDecCount__FP5VoBuf
// Start address: 0x260040
void voBufDecCount(VoBuf* f)
{
	// Line 100, Address: 0x260040, Func Offset: 0
	// Line 101, Address: 0x26004c, Func Offset: 0xc
	// Line 103, Address: 0x260058, Func Offset: 0x18
	// Func End, Address: 0x260060, Func Offset: 0x20
}

// voBufGetTag__FP5VoBuf
// Start address: 0x260060
VoTag* voBufGetTag(VoBuf* f)
{
	// Line 94, Address: 0x260060, Func Offset: 0
	// Line 96, Address: 0x2600bc, Func Offset: 0x5c
	// Func End, Address: 0x2600c4, Func Offset: 0x64
}

// voBufGetData__FP5VoBuf
// Start address: 0x2600d0
VoData* voBufGetData(VoBuf* f)
{
	// Line 80, Address: 0x2600d0, Func Offset: 0
	// Line 81, Address: 0x260118, Func Offset: 0x48
	// Func End, Address: 0x260120, Func Offset: 0x50
}

// voBufIncCount__FP5VoBuf
// Start address: 0x260120
void voBufIncCount(VoBuf* f)
{
	// Line 66, Address: 0x260120, Func Offset: 0
	// Line 68, Address: 0x26012c, Func Offset: 0xc
	// Line 70, Address: 0x260134, Func Offset: 0x14
	// Line 71, Address: 0x26015c, Func Offset: 0x3c
	// Line 72, Address: 0x260168, Func Offset: 0x48
	// Line 75, Address: 0x260184, Func Offset: 0x64
	// Line 76, Address: 0x26018c, Func Offset: 0x6c
	// Func End, Address: 0x26019c, Func Offset: 0x7c
}

// voBufIsFull__FP5VoBuf
// Start address: 0x2601a0
int32 voBufIsFull(VoBuf* f)
{
	// Line 62, Address: 0x2601a0, Func Offset: 0
	// Line 63, Address: 0x2601ac, Func Offset: 0xc
	// Func End, Address: 0x2601b4, Func Offset: 0x14
}

// voBufReset__FP5VoBuf
// Start address: 0x2601c0
void voBufReset(VoBuf* f)
{
	// Line 56, Address: 0x2601c0, Func Offset: 0
	// Line 58, Address: 0x2601c4, Func Offset: 0x4
	// Func End, Address: 0x2601cc, Func Offset: 0xc
}

// voBufDelete__FP5VoBuf
// Start address: 0x2601d0
void voBufDelete()
{
	// Line 52, Address: 0x2601d0, Func Offset: 0
	// Func End, Address: 0x2601d8, Func Offset: 0x8
}

// voBufCreate__FP5VoBufP6VoDataP5VoTagi
// Start address: 0x2601e0
void voBufCreate(VoBuf* f, VoData* data, VoTag* tag, int32 size)
{
	int32 i;
	// Line 39, Address: 0x2601e0, Func Offset: 0
	// Line 40, Address: 0x2601e4, Func Offset: 0x4
	// Line 41, Address: 0x2601e8, Func Offset: 0x8
	// Line 42, Address: 0x2601ec, Func Offset: 0xc
	// Line 45, Address: 0x2601f0, Func Offset: 0x10
	// Line 43, Address: 0x2601f4, Func Offset: 0x14
	// Line 45, Address: 0x2601f8, Func Offset: 0x18
	// Line 46, Address: 0x260218, Func Offset: 0x38
	// Line 47, Address: 0x2602d8, Func Offset: 0xf8
	// Line 46, Address: 0x2602e0, Func Offset: 0x100
	// Line 47, Address: 0x2602e8, Func Offset: 0x108
	// Line 48, Address: 0x2602f0, Func Offset: 0x110
	// Func End, Address: 0x2602f8, Func Offset: 0x118
}

