



int8* find_char(substr& s, substr& cs);
uint32 atox(substr& s, uint32& read_size);
int32 icompare(substr& s1, substr& s2);
int32 imemcmp(void* d1, void* d2, uint32 size);
int32 xStrParseFloatList(float32* dest, int8* strbuf, int32 max);
int8* xStrupr(int8* string);
int32 xMemicmp(void* string1, void* string2, uint32 chars);
int32 xStricmp(int8* string1, int8* string2);
int8* xStristr(int8* str1, int8* str2);
int8* xStrTokBuffer(int8* string, int8* control, void* buffer);
uint32 xStrTokCount(int8* string, int8* control, uint32* maxsize);
int8* xStrTok(int8* string, int8* control, int8** nextoken);
uint32 xStrHashCat(uint32 prefix, int8* str);
uint32 xStrHash(int8* s, uint32 size);
uint32 xStrHash(int8* str);

// find_char__FRC6substrRC6substr
// Start address: 0x44d340
int8* find_char(substr& s, substr& cs)
{
	int8* p;
	int8* d;
	int32 i;
	int32 i;
	int32 i;
	int32 i;
	int32 i;
	int32 i;
	int32 i;
	int32 i;
	int32 i;
	int32 i;
	int32 i;
	int32 i;
	int8* s;
	// Line 610, Address: 0x44d340, Func Offset: 0
	// Line 611, Address: 0x44d344, Func Offset: 0x4
	// Line 615, Address: 0x44d358, Func Offset: 0x18
	// Line 629, Address: 0x44d384, Func Offset: 0x44
	// Line 630, Address: 0x44d3b4, Func Offset: 0x74
	// Line 631, Address: 0x44d3f4, Func Offset: 0xb4
	// Line 632, Address: 0x44d440, Func Offset: 0x100
	// Line 633, Address: 0x44d494, Func Offset: 0x154
	// Line 634, Address: 0x44d4f8, Func Offset: 0x1b8
	// Line 635, Address: 0x44d564, Func Offset: 0x224
	// Line 636, Address: 0x44d5e0, Func Offset: 0x2a0
	// Line 637, Address: 0x44d664, Func Offset: 0x324
	// Line 638, Address: 0x44d6f8, Func Offset: 0x3b8
	// Line 639, Address: 0x44d794, Func Offset: 0x454
	// Line 643, Address: 0x44d840, Func Offset: 0x500
	// Line 647, Address: 0x44d844, Func Offset: 0x504
	// Line 645, Address: 0x44d864, Func Offset: 0x524
	// Line 647, Address: 0x44d868, Func Offset: 0x528
	// Line 646, Address: 0x44d870, Func Offset: 0x530
	// Line 647, Address: 0x44d878, Func Offset: 0x538
	// Line 648, Address: 0x44d894, Func Offset: 0x554
	// Line 649, Address: 0x44d898, Func Offset: 0x558
	// Line 611, Address: 0x44d8a0, Func Offset: 0x560
	// Line 650, Address: 0x44d8a4, Func Offset: 0x564
	// Func End, Address: 0x44d8ac, Func Offset: 0x56c
}

// atox__FRC6substrRUi
// Start address: 0x44d8b0
uint32 atox(substr& s, uint32& read_size)
{
	int8* p;
	uint32 size;
	uint32 total;
	uint32 v;
	// Line 591, Address: 0x44d8b0, Func Offset: 0
	// Line 593, Address: 0x44d8b4, Func Offset: 0x4
	// Line 595, Address: 0x44d8bc, Func Offset: 0xc
	// Line 596, Address: 0x44d8cc, Func Offset: 0x1c
	// Line 600, Address: 0x44d8e4, Func Offset: 0x34
	// Line 601, Address: 0x44d900, Func Offset: 0x50
	// Line 602, Address: 0x44d920, Func Offset: 0x70
	// Line 604, Address: 0x44d938, Func Offset: 0x88
	// Line 605, Address: 0x44d940, Func Offset: 0x90
	// Line 606, Address: 0x44d960, Func Offset: 0xb0
	// Line 593, Address: 0x44d968, Func Offset: 0xb8
	// Line 607, Address: 0x44d96c, Func Offset: 0xbc
	// Func End, Address: 0x44d974, Func Offset: 0xc4
}

// icompare__FRC6substrRC6substr
// Start address: 0x44d980
int32 icompare(substr& s1, substr& s2)
{
	uint32 len;
	// Line 580, Address: 0x44d980, Func Offset: 0
	// Line 581, Address: 0x44d988, Func Offset: 0x8
	// Line 582, Address: 0x44d9a0, Func Offset: 0x20
	// Line 583, Address: 0x44d9fc, Func Offset: 0x7c
	// Line 584, Address: 0x44da04, Func Offset: 0x84
	// Line 585, Address: 0x44da0c, Func Offset: 0x8c
	// Line 584, Address: 0x44da2c, Func Offset: 0xac
	// Line 587, Address: 0x44da30, Func Offset: 0xb0
	// Func End, Address: 0x44da38, Func Offset: 0xb8
}

// imemcmp__FPCvPCvUi
// Start address: 0x44da40
int32 imemcmp(void* d1, void* d2, uint32 size)
{
	int8* s1;
	int8* s2;
	uint32 i;
	// Line 571, Address: 0x44da40, Func Offset: 0
	// Line 573, Address: 0x44da50, Func Offset: 0x10
	// Line 574, Address: 0x44da6c, Func Offset: 0x2c
	// Line 575, Address: 0x44da7c, Func Offset: 0x3c
	// Line 576, Address: 0x44da90, Func Offset: 0x50
	// Line 577, Address: 0x44da94, Func Offset: 0x54
	// Func End, Address: 0x44da9c, Func Offset: 0x5c
}

// xStrParseFloatList__FPfPCci
// Start address: 0x44daa0
int32 xStrParseFloatList(float32* dest, int8* strbuf, int32 max)
{
	int8* str;
	int32 index;
	int32 digits;
	int32 negate;
	int8* numstart;
	// Line 360, Address: 0x44daa0, Func Offset: 0
	// Line 361, Address: 0x44dab8, Func Offset: 0x18
	// Line 360, Address: 0x44dabc, Func Offset: 0x1c
	// Line 363, Address: 0x44dac4, Func Offset: 0x24
	// Line 365, Address: 0x44dad0, Func Offset: 0x30
	// Line 420, Address: 0x44dad4, Func Offset: 0x34
	// Line 379, Address: 0x44dafc, Func Offset: 0x5c
	// Line 420, Address: 0x44db00, Func Offset: 0x60
	// Line 379, Address: 0x44db04, Func Offset: 0x64
	// Line 420, Address: 0x44db08, Func Offset: 0x68
	// Line 379, Address: 0x44db20, Func Offset: 0x80
	// Line 420, Address: 0x44db24, Func Offset: 0x84
	// Line 379, Address: 0x44db34, Func Offset: 0x94
	// Line 420, Address: 0x44db38, Func Offset: 0x98
	// Line 379, Address: 0x44db48, Func Offset: 0xa8
	// Line 420, Address: 0x44db4c, Func Offset: 0xac
	// Line 379, Address: 0x44db5c, Func Offset: 0xbc
	// Line 420, Address: 0x44db60, Func Offset: 0xc0
	// Line 379, Address: 0x44db70, Func Offset: 0xd0
	// Line 420, Address: 0x44db74, Func Offset: 0xd4
	// Line 385, Address: 0x44db84, Func Offset: 0xe4
	// Line 420, Address: 0x44db88, Func Offset: 0xe8
	// Line 386, Address: 0x44db90, Func Offset: 0xf0
	// Line 388, Address: 0x44db94, Func Offset: 0xf4
	// Line 420, Address: 0x44dba0, Func Offset: 0x100
	// Line 389, Address: 0x44dba4, Func Offset: 0x104
	// Line 420, Address: 0x44dba8, Func Offset: 0x108
	// Line 392, Address: 0x44dbc4, Func Offset: 0x124
	// Line 395, Address: 0x44dbc8, Func Offset: 0x128
	// Line 396, Address: 0x44dbcc, Func Offset: 0x12c
	// Line 406, Address: 0x44dbd0, Func Offset: 0x130
	// Line 420, Address: 0x44dbe0, Func Offset: 0x140
	// Line 363, Address: 0x44dc18, Func Offset: 0x178
	// Line 381, Address: 0x44dc20, Func Offset: 0x180
	// Line 420, Address: 0x44dc30, Func Offset: 0x190
	// Line 410, Address: 0x44dc78, Func Offset: 0x1d8
	// Line 420, Address: 0x44dc80, Func Offset: 0x1e0
	// Line 417, Address: 0x44dc84, Func Offset: 0x1e4
	// Line 422, Address: 0x44dc90, Func Offset: 0x1f0
	// Line 423, Address: 0x44dc94, Func Offset: 0x1f4
	// Func End, Address: 0x44dcb8, Func Offset: 0x218
}

// xStrupr__FPc
// Start address: 0x44dcc0
int8* xStrupr(int8* string)
{
	int8* p;
	// Line 348, Address: 0x44dcc0, Func Offset: 0
	// Line 349, Address: 0x44dccc, Func Offset: 0xc
	// Line 350, Address: 0x44dd00, Func Offset: 0x40
	// Line 351, Address: 0x44dd04, Func Offset: 0x44
	// Line 353, Address: 0x44dd10, Func Offset: 0x50
	// Func End, Address: 0x44dd18, Func Offset: 0x58
}

// xMemicmp__FPCvPCvUi
// Start address: 0x44dd20
int32 xMemicmp(void* string1, void* string2, uint32 chars)
{
	int8* str1;
	int8* str2;
	int32 ret;
	// Line 335, Address: 0x44dd20, Func Offset: 0
	// Line 337, Address: 0x44dd2c, Func Offset: 0xc
	// Line 338, Address: 0x44dd8c, Func Offset: 0x6c
	// Line 342, Address: 0x44dd94, Func Offset: 0x74
	// Line 340, Address: 0x44dd98, Func Offset: 0x78
	// Line 341, Address: 0x44dd9c, Func Offset: 0x7c
	// Line 342, Address: 0x44dda0, Func Offset: 0x80
	// Line 343, Address: 0x44dda8, Func Offset: 0x88
	// Line 344, Address: 0x44ddac, Func Offset: 0x8c
	// Func End, Address: 0x44ddb4, Func Offset: 0x94
}

// xStricmp__FPCcPCc
// Start address: 0x44ddc0
int32 xStricmp(int8* string1, int8* string2)
{
	int32 result;
	// Line 307, Address: 0x44ddc0, Func Offset: 0
	// Line 316, Address: 0x44ddc4, Func Offset: 0x4
	// Line 311, Address: 0x44ddc8, Func Offset: 0x8
	// Line 316, Address: 0x44ddcc, Func Offset: 0xc
	// Line 312, Address: 0x44de58, Func Offset: 0x98
	// Line 316, Address: 0x44de60, Func Offset: 0xa0
	// Line 320, Address: 0x44de68, Func Offset: 0xa8
	// Line 323, Address: 0x44de70, Func Offset: 0xb0
	// Line 324, Address: 0x44dec0, Func Offset: 0x100
	// Line 329, Address: 0x44dec4, Func Offset: 0x104
	// Func End, Address: 0x44decc, Func Offset: 0x10c
}

// xStristr__FPCcPCc
// Start address: 0x44ded0
int8* xStristr(int8* str1, int8* str2)
{
	int8* cp;
	int8* s1;
	int8* s2;
	// Line 279, Address: 0x44ded0, Func Offset: 0
	// Line 288, Address: 0x44dee8, Func Offset: 0x18
	// Line 284, Address: 0x44deec, Func Offset: 0x1c
	// Line 285, Address: 0x44def0, Func Offset: 0x20
	// Line 288, Address: 0x44def8, Func Offset: 0x28
	// Line 290, Address: 0x44df84, Func Offset: 0xb4
	// Line 293, Address: 0x44df90, Func Offset: 0xc0
	// Line 294, Address: 0x44df94, Func Offset: 0xc4
	// Line 296, Address: 0x44dfa0, Func Offset: 0xd0
	// Line 297, Address: 0x44dfac, Func Offset: 0xdc
	// Func End, Address: 0x44dfb4, Func Offset: 0xe4
}

// xStrTokBuffer__FPCcPCcPv
// Start address: 0x44dfc0
int8* xStrTokBuffer(int8* string, int8* control, void* buffer)
{
	int8** nextoken;
	int8* dest;
	uint8* str;
	uint8* ctrl;
	uint8 map[32];
	int32 count;
	// Line 209, Address: 0x44dfc0, Func Offset: 0
	// Line 211, Address: 0x44dfc4, Func Offset: 0x4
	// Line 220, Address: 0x44dfc8, Func Offset: 0x8
	// Line 221, Address: 0x44dfd0, Func Offset: 0x10
	// Line 225, Address: 0x44e000, Func Offset: 0x40
	// Line 224, Address: 0x44e004, Func Offset: 0x44
	// Line 221, Address: 0x44e008, Func Offset: 0x48
	// Line 225, Address: 0x44e00c, Func Offset: 0x4c
	// Line 226, Address: 0x44e018, Func Offset: 0x58
	// Line 225, Address: 0x44e01c, Func Offset: 0x5c
	// Line 226, Address: 0x44e02c, Func Offset: 0x6c
	// Line 231, Address: 0x44e034, Func Offset: 0x74
	// Line 232, Address: 0x44e03c, Func Offset: 0x7c
	// Line 240, Address: 0x44e040, Func Offset: 0x80
	// Line 232, Address: 0x44e07c, Func Offset: 0xbc
	// Line 246, Address: 0x44e088, Func Offset: 0xc8
	// Line 247, Address: 0x44e094, Func Offset: 0xd4
	// Line 249, Address: 0x44e0bc, Func Offset: 0xfc
	// Line 251, Address: 0x44e0c4, Func Offset: 0x104
	// Line 253, Address: 0x44e0c8, Func Offset: 0x108
	// Line 256, Address: 0x44e0d8, Func Offset: 0x118
	// Line 263, Address: 0x44e0dc, Func Offset: 0x11c
	// Line 266, Address: 0x44e0f0, Func Offset: 0x130
	// Func End, Address: 0x44e0f8, Func Offset: 0x138
}

// xStrTokCount__FPCcPCcPUi
// Start address: 0x44e100
uint32 xStrTokCount(int8* string, int8* control, uint32* maxsize)
{
	uint32 num;
	uint32 max;
	uint32 test;
	uint8* str;
	uint8* ctrl;
	uint8 map[32];
	int32 count;
	// Line 146, Address: 0x44e100, Func Offset: 0
	// Line 147, Address: 0x44e104, Func Offset: 0x4
	// Line 155, Address: 0x44e10c, Func Offset: 0xc
	// Line 156, Address: 0x44e114, Func Offset: 0x14
	// Line 160, Address: 0x44e144, Func Offset: 0x44
	// Line 156, Address: 0x44e148, Func Offset: 0x48
	// Line 160, Address: 0x44e14c, Func Offset: 0x4c
	// Line 161, Address: 0x44e158, Func Offset: 0x58
	// Line 160, Address: 0x44e15c, Func Offset: 0x5c
	// Line 161, Address: 0x44e16c, Func Offset: 0x6c
	// Line 163, Address: 0x44e174, Func Offset: 0x74
	// Line 179, Address: 0x44e178, Func Offset: 0x78
	// Line 163, Address: 0x44e17c, Func Offset: 0x7c
	// Line 171, Address: 0x44e180, Func Offset: 0x80
	// Line 173, Address: 0x44e1c0, Func Offset: 0xc0
	// Line 178, Address: 0x44e1c4, Func Offset: 0xc4
	// Line 179, Address: 0x44e1d4, Func Offset: 0xd4
	// Line 181, Address: 0x44e1fc, Func Offset: 0xfc
	// Line 182, Address: 0x44e204, Func Offset: 0x104
	// Line 184, Address: 0x44e208, Func Offset: 0x108
	// Line 187, Address: 0x44e218, Func Offset: 0x118
	// Line 196, Address: 0x44e220, Func Offset: 0x120
	// Line 199, Address: 0x44e230, Func Offset: 0x130
	// Line 200, Address: 0x44e244, Func Offset: 0x144
	// Func End, Address: 0x44e24c, Func Offset: 0x14c
}

// xStrTok__FPcPCcPPc
// Start address: 0x44e250
int8* xStrTok(int8* string, int8* control, int8** nextoken)
{
	uint8* str;
	uint8* ctrl;
	uint8 map[32];
	int32 count;
	// Line 90, Address: 0x44e250, Func Offset: 0
	// Line 98, Address: 0x44e254, Func Offset: 0x4
	// Line 99, Address: 0x44e25c, Func Offset: 0xc
	// Line 103, Address: 0x44e28c, Func Offset: 0x3c
	// Line 99, Address: 0x44e290, Func Offset: 0x40
	// Line 103, Address: 0x44e294, Func Offset: 0x44
	// Line 104, Address: 0x44e2a0, Func Offset: 0x50
	// Line 103, Address: 0x44e2a4, Func Offset: 0x54
	// Line 104, Address: 0x44e2b4, Func Offset: 0x64
	// Line 109, Address: 0x44e2bc, Func Offset: 0x6c
	// Line 110, Address: 0x44e2c4, Func Offset: 0x74
	// Line 118, Address: 0x44e2c8, Func Offset: 0x78
	// Line 110, Address: 0x44e304, Func Offset: 0xb4
	// Line 124, Address: 0x44e310, Func Offset: 0xc0
	// Line 125, Address: 0x44e31c, Func Offset: 0xcc
	// Line 126, Address: 0x44e344, Func Offset: 0xf4
	// Line 127, Address: 0x44e348, Func Offset: 0xf8
	// Line 128, Address: 0x44e350, Func Offset: 0x100
	// Line 135, Address: 0x44e360, Func Offset: 0x110
	// Line 138, Address: 0x44e370, Func Offset: 0x120
	// Func End, Address: 0x44e378, Func Offset: 0x128
}

// xStrHashCat__FUiPCc
// Start address: 0x44e380
uint32 xStrHashCat(uint32 prefix, int8* str)
{
	uint32 i;
	int8 c;
	// Line 73, Address: 0x44e380, Func Offset: 0
	// Line 76, Address: 0x44e38c, Func Offset: 0xc
	// Line 79, Address: 0x44e390, Func Offset: 0x10
	// Line 80, Address: 0x44e3a8, Func Offset: 0x28
	// Line 79, Address: 0x44e3ac, Func Offset: 0x2c
	// Line 80, Address: 0x44e3b4, Func Offset: 0x34
	// Line 79, Address: 0x44e3b8, Func Offset: 0x38
	// Line 80, Address: 0x44e3bc, Func Offset: 0x3c
	// Line 82, Address: 0x44e3c8, Func Offset: 0x48
	// Func End, Address: 0x44e3d0, Func Offset: 0x50
}

// xStrHash__FPCcUi
// Start address: 0x44e3d0
uint32 xStrHash(int8* s, uint32 size)
{
	uint32 value;
	uint32 i;
	int8 c;
	// Line 58, Address: 0x44e3d0, Func Offset: 0
	// Line 59, Address: 0x44e3d4, Func Offset: 0x4
	// Line 65, Address: 0x44e3d8, Func Offset: 0x8
	// Line 64, Address: 0x44e3fc, Func Offset: 0x2c
	// Line 65, Address: 0x44e404, Func Offset: 0x34
	// Line 64, Address: 0x44e40c, Func Offset: 0x3c
	// Line 65, Address: 0x44e414, Func Offset: 0x44
	// Line 64, Address: 0x44e420, Func Offset: 0x50
	// Line 65, Address: 0x44e42c, Func Offset: 0x5c
	// Line 67, Address: 0x44e430, Func Offset: 0x60
	// Func End, Address: 0x44e438, Func Offset: 0x68
}

// xStrHash__FPCc
// Start address: 0x44e440
uint32 xStrHash(int8* str)
{
	uint32 i;
	int8 c;
	// Line 44, Address: 0x44e440, Func Offset: 0
	// Line 47, Address: 0x44e44c, Func Offset: 0xc
	// Line 50, Address: 0x44e450, Func Offset: 0x10
	// Line 51, Address: 0x44e470, Func Offset: 0x30
	// Line 50, Address: 0x44e478, Func Offset: 0x38
	// Line 51, Address: 0x44e47c, Func Offset: 0x3c
	// Line 53, Address: 0x44e488, Func Offset: 0x48
	// Func End, Address: 0x44e490, Func Offset: 0x50
}

