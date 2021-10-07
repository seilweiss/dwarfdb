

typedef uint8 type_0[32];
typedef uint8 type_1[32];
typedef uint8 type_2[32];


int32 xStrParseFloatList(float32* dest, int8* strbuf, int32 max);
int8* xStrupr(int8* string);
int32 xStricmp(int8* string1, int8* string2);
int8* xStrTokBuffer(int8* string, int8* control, void* buffer);
int8* xStrTok(int8* string, int8* control, int8** nextoken);
uint32 xStrHash(int8* str);

// xStrParseFloatList__FPfPCci
// Start address: 0x13cd80
int32 xStrParseFloatList(float32* dest, int8* strbuf, int32 max)
{
	int8* numstart;
	int32 negate;
	int32 digits;
	int32 index;
	int8* str;
	// Line 316, Address: 0x13cd80, Func Offset: 0
	// Line 319, Address: 0x13cda4, Func Offset: 0x24
	// Line 324, Address: 0x13cdb8, Func Offset: 0x38
	// Line 335, Address: 0x13cdc0, Func Offset: 0x40
	// Line 337, Address: 0x13ce28, Func Offset: 0xa8
	// Line 341, Address: 0x13ce38, Func Offset: 0xb8
	// Line 342, Address: 0x13ce40, Func Offset: 0xc0
	// Line 344, Address: 0x13ce44, Func Offset: 0xc4
	// Line 345, Address: 0x13ce4c, Func Offset: 0xcc
	// Line 346, Address: 0x13ce6c, Func Offset: 0xec
	// Line 347, Address: 0x13ce74, Func Offset: 0xf4
	// Line 351, Address: 0x13ce78, Func Offset: 0xf8
	// Line 353, Address: 0x13ce7c, Func Offset: 0xfc
	// Line 359, Address: 0x13ce84, Func Offset: 0x104
	// Line 360, Address: 0x13ce9c, Func Offset: 0x11c
	// Line 361, Address: 0x13cea0, Func Offset: 0x120
	// Line 362, Address: 0x13cea4, Func Offset: 0x124
	// Line 365, Address: 0x13cee8, Func Offset: 0x168
	// Line 366, Address: 0x13cef0, Func Offset: 0x170
	// Line 372, Address: 0x13cef8, Func Offset: 0x178
	// Line 373, Address: 0x13cf00, Func Offset: 0x180
	// Line 375, Address: 0x13cf18, Func Offset: 0x198
	// Line 373, Address: 0x13cf1c, Func Offset: 0x19c
	// Line 374, Address: 0x13cf20, Func Offset: 0x1a0
	// Line 376, Address: 0x13cf24, Func Offset: 0x1a4
	// Line 378, Address: 0x13cf40, Func Offset: 0x1c0
	// Line 379, Address: 0x13cf44, Func Offset: 0x1c4
	// Func End, Address: 0x13cf68, Func Offset: 0x1e8
}

// xStrupr__FPc
// Start address: 0x13cf70
int8* xStrupr(int8* string)
{
	int8* p;
	// Line 303, Address: 0x13cf70, Func Offset: 0
	// Line 304, Address: 0x13cf78, Func Offset: 0x8
	// Line 305, Address: 0x13cf98, Func Offset: 0x28
	// Line 306, Address: 0x13cf9c, Func Offset: 0x2c
	// Line 308, Address: 0x13cfac, Func Offset: 0x3c
	// Func End, Address: 0x13cfb4, Func Offset: 0x44
}

// xStricmp__FPCcPCc
// Start address: 0x13cfc0
int32 xStricmp(int8* string1, int8* string2)
{
	int32 result;
	// Line 278, Address: 0x13cfc0, Func Offset: 0
	// Line 279, Address: 0x13cfc8, Func Offset: 0x8
	// Line 280, Address: 0x13cfd8, Func Offset: 0x18
	// Line 281, Address: 0x13cfdc, Func Offset: 0x1c
	// Line 282, Address: 0x13cfe4, Func Offset: 0x24
	// Line 283, Address: 0x13cfe8, Func Offset: 0x28
	// Line 285, Address: 0x13cfec, Func Offset: 0x2c
	// Line 287, Address: 0x13d060, Func Offset: 0xa0
	// Line 289, Address: 0x13d064, Func Offset: 0xa4
	// Line 292, Address: 0x13d06c, Func Offset: 0xac
	// Line 293, Address: 0x13d0b0, Func Offset: 0xf0
	// Line 298, Address: 0x13d0b4, Func Offset: 0xf4
	// Func End, Address: 0x13d0bc, Func Offset: 0xfc
}

// xStrTokBuffer__FPCcPCcPv
// Start address: 0x13d0c0
int8* xStrTokBuffer(int8* string, int8* control, void* buffer)
{
	int32 count;
	uint8 map[32];
	uint8* ctrl;
	uint8* str;
	int8* dest;
	int8** nextoken;
	// Line 178, Address: 0x13d0c0, Func Offset: 0
	// Line 180, Address: 0x13d0c4, Func Offset: 0x4
	// Line 189, Address: 0x13d0c8, Func Offset: 0x8
	// Line 190, Address: 0x13d0d0, Func Offset: 0x10
	// Line 194, Address: 0x13d100, Func Offset: 0x40
	// Line 195, Address: 0x13d108, Func Offset: 0x48
	// Line 194, Address: 0x13d10c, Func Offset: 0x4c
	// Line 195, Address: 0x13d124, Func Offset: 0x64
	// Line 194, Address: 0x13d128, Func Offset: 0x68
	// Line 195, Address: 0x13d130, Func Offset: 0x70
	// Line 200, Address: 0x13d13c, Func Offset: 0x7c
	// Line 201, Address: 0x13d144, Func Offset: 0x84
	// Line 208, Address: 0x13d14c, Func Offset: 0x8c
	// Line 209, Address: 0x13d154, Func Offset: 0x94
	// Line 211, Address: 0x13d188, Func Offset: 0xc8
	// Line 215, Address: 0x13d18c, Func Offset: 0xcc
	// Line 216, Address: 0x13d194, Func Offset: 0xd4
	// Line 218, Address: 0x13d1b4, Func Offset: 0xf4
	// Line 220, Address: 0x13d1bc, Func Offset: 0xfc
	// Line 221, Address: 0x13d1c0, Func Offset: 0x100
	// Line 222, Address: 0x13d1c4, Func Offset: 0x104
	// Line 225, Address: 0x13d1d8, Func Offset: 0x118
	// Line 231, Address: 0x13d1dc, Func Offset: 0x11c
	// Line 232, Address: 0x13d1e4, Func Offset: 0x124
	// Line 234, Address: 0x13d1ec, Func Offset: 0x12c
	// Line 235, Address: 0x13d1f0, Func Offset: 0x130
	// Func End, Address: 0x13d1f8, Func Offset: 0x138
}

// xStrTok__FPcPCcPPc
// Start address: 0x13d200
int8* xStrTok(int8* string, int8* control, int8** nextoken)
{
	int32 count;
	uint8 map[32];
	uint8* ctrl;
	uint8* str;
	// Line 59, Address: 0x13d200, Func Offset: 0
	// Line 67, Address: 0x13d204, Func Offset: 0x4
	// Line 68, Address: 0x13d20c, Func Offset: 0xc
	// Line 71, Address: 0x13d23c, Func Offset: 0x3c
	// Line 72, Address: 0x13d240, Func Offset: 0x40
	// Line 73, Address: 0x13d248, Func Offset: 0x48
	// Line 72, Address: 0x13d24c, Func Offset: 0x4c
	// Line 73, Address: 0x13d264, Func Offset: 0x64
	// Line 72, Address: 0x13d268, Func Offset: 0x68
	// Line 73, Address: 0x13d270, Func Offset: 0x70
	// Line 78, Address: 0x13d27c, Func Offset: 0x7c
	// Line 79, Address: 0x13d284, Func Offset: 0x84
	// Line 86, Address: 0x13d28c, Func Offset: 0x8c
	// Line 87, Address: 0x13d294, Func Offset: 0x94
	// Line 89, Address: 0x13d2c8, Func Offset: 0xc8
	// Line 93, Address: 0x13d2cc, Func Offset: 0xcc
	// Line 94, Address: 0x13d2d4, Func Offset: 0xd4
	// Line 95, Address: 0x13d2f4, Func Offset: 0xf4
	// Line 96, Address: 0x13d2f8, Func Offset: 0xf8
	// Line 97, Address: 0x13d300, Func Offset: 0x100
	// Line 103, Address: 0x13d310, Func Offset: 0x110
	// Line 104, Address: 0x13d318, Func Offset: 0x118
	// Line 106, Address: 0x13d320, Func Offset: 0x120
	// Line 107, Address: 0x13d324, Func Offset: 0x124
	// Func End, Address: 0x13d32c, Func Offset: 0x12c
}

// xStrHash__FPc
// Start address: 0x13d330
uint32 xStrHash(int8* str)
{
	int8 c;
	uint32 i;
	// Line 42, Address: 0x13d330, Func Offset: 0
	// Line 46, Address: 0x13d338, Func Offset: 0x8
	// Line 48, Address: 0x13d34c, Func Offset: 0x1c
	// Line 49, Address: 0x13d360, Func Offset: 0x30
	// Line 51, Address: 0x13d374, Func Offset: 0x44
	// Func End, Address: 0x13d37c, Func Offset: 0x4c
}

