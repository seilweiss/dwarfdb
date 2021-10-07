typedef struct xIniFile;
typedef struct xIniValue;
typedef struct xIniSection;


typedef int8 type_0[256];
typedef int8 type_1[256];

struct xIniFile
{
	int32 NumValues;
	int32 NumSections;
	xIniValue* Values;
	xIniSection* Sections;
	void* mem;
	int8 name[256];
	int8 pathname[256];
};

struct xIniValue
{
	int8* tok;
	int8* val;
};

struct xIniSection
{
	int8* sec;
	int32 first;
	int32 count;
};


int8* xIniGetString(xIniFile* ini, int8* tok, int8* def);
float32 xIniGetFloat(xIniFile* ini, int8* tok, float32 def);
int32 xIniGetInt(xIniFile* ini, int8* tok, int32 def);
void xIniDestroy(xIniFile* ini);
xIniFile* xIniParse(int8* buf, int32 len);

// xIniGetString__FP8xIniFilePcPc
// Start address: 0x187a40
int8* xIniGetString(xIniFile* ini, int8* tok, int8* def)
{
	// Line 185, Address: 0x187a40, Func Offset: 0
	// Line 186, Address: 0x187a68, Func Offset: 0x28
	// Line 187, Address: 0x187ab4, Func Offset: 0x74
	// Line 188, Address: 0x187ac0, Func Offset: 0x80
	// Line 190, Address: 0x187ac8, Func Offset: 0x88
	// Line 191, Address: 0x187adc, Func Offset: 0x9c
	// Func End, Address: 0x187afc, Func Offset: 0xbc
}

// xIniGetFloat__FP8xIniFilePcf
// Start address: 0x187b00
float32 xIniGetFloat(xIniFile* ini, int8* tok, float32 def)
{
	// Line 169, Address: 0x187b00, Func Offset: 0
	// Line 170, Address: 0x187b28, Func Offset: 0x28
	// Line 171, Address: 0x187b74, Func Offset: 0x74
	// Line 172, Address: 0x187b80, Func Offset: 0x80
	// Line 178, Address: 0x187b88, Func Offset: 0x88
	// Line 181, Address: 0x187ba4, Func Offset: 0xa4
	// Func End, Address: 0x187bc4, Func Offset: 0xc4
}

// xIniGetInt__FP8xIniFilePci
// Start address: 0x187bd0
int32 xIniGetInt(xIniFile* ini, int8* tok, int32 def)
{
	// Line 159, Address: 0x187bd0, Func Offset: 0
	// Line 160, Address: 0x187bf8, Func Offset: 0x28
	// Line 161, Address: 0x187c44, Func Offset: 0x74
	// Line 162, Address: 0x187c50, Func Offset: 0x80
	// Line 164, Address: 0x187c58, Func Offset: 0x88
	// Line 165, Address: 0x187c6c, Func Offset: 0x9c
	// Func End, Address: 0x187c8c, Func Offset: 0xbc
}

// xIniDestroy__FP8xIniFile
// Start address: 0x187c90
void xIniDestroy(xIniFile* ini)
{
	// Line 141, Address: 0x187c90, Func Offset: 0
	// Line 142, Address: 0x187ca0, Func Offset: 0x10
	// Line 143, Address: 0x187ca8, Func Offset: 0x18
	// Line 144, Address: 0x187cb0, Func Offset: 0x20
	// Func End, Address: 0x187cc0, Func Offset: 0x30
}

// xIniParse__FPci
// Start address: 0x187cc0
xIniFile* xIniParse(int8* buf, int32 len)
{
	xIniFile* ini;
	int8* ltoken;
	int8* line;
	int8* lastLine;
	int8* c;
	int32 lastCRLF;
	int32 copen;
	int32 clf;
	int32 ccr;
	int32 i;
	// Line 36, Address: 0x187cc0, Func Offset: 0
	// Line 37, Address: 0x187ce8, Func Offset: 0x28
	// Line 43, Address: 0x187cec, Func Offset: 0x2c
	// Line 37, Address: 0x187cf0, Func Offset: 0x30
	// Line 43, Address: 0x187cfc, Func Offset: 0x3c
	// Line 44, Address: 0x187d04, Func Offset: 0x44
	// Line 45, Address: 0x187d38, Func Offset: 0x78
	// Line 46, Address: 0x187d44, Func Offset: 0x84
	// Line 47, Address: 0x187d50, Func Offset: 0x90
	// Line 48, Address: 0x187d54, Func Offset: 0x94
	// Line 49, Address: 0x187d68, Func Offset: 0xa8
	// Line 53, Address: 0x187d78, Func Offset: 0xb8
	// Line 61, Address: 0x187d9c, Func Offset: 0xdc
	// Line 64, Address: 0x187da0, Func Offset: 0xe0
	// Line 53, Address: 0x187da4, Func Offset: 0xe4
	// Line 65, Address: 0x187da8, Func Offset: 0xe8
	// Line 66, Address: 0x187dac, Func Offset: 0xec
	// Line 67, Address: 0x187db4, Func Offset: 0xf4
	// Line 68, Address: 0x187dbc, Func Offset: 0xfc
	// Line 71, Address: 0x187dc8, Func Offset: 0x108
	// Line 67, Address: 0x187dcc, Func Offset: 0x10c
	// Line 68, Address: 0x187dd4, Func Offset: 0x114
	// Line 71, Address: 0x187dd8, Func Offset: 0x118
	// Line 68, Address: 0x187de4, Func Offset: 0x124
	// Line 71, Address: 0x187de8, Func Offset: 0x128
	// Line 72, Address: 0x187df0, Func Offset: 0x130
	// Line 73, Address: 0x187df4, Func Offset: 0x134
	// Line 74, Address: 0x187dfc, Func Offset: 0x13c
	// Line 76, Address: 0x187e08, Func Offset: 0x148
	// Line 79, Address: 0x187e0c, Func Offset: 0x14c
	// Line 80, Address: 0x187e20, Func Offset: 0x160
	// Line 81, Address: 0x187e28, Func Offset: 0x168
	// Line 82, Address: 0x187e3c, Func Offset: 0x17c
	// Line 85, Address: 0x187e40, Func Offset: 0x180
	// Line 88, Address: 0x187e48, Func Offset: 0x188
	// Line 91, Address: 0x187ec0, Func Offset: 0x200
	// Line 94, Address: 0x187ed8, Func Offset: 0x218
	// Line 95, Address: 0x187ee4, Func Offset: 0x224
	// Line 96, Address: 0x187efc, Func Offset: 0x23c
	// Line 97, Address: 0x187f00, Func Offset: 0x240
	// Line 98, Address: 0x187f78, Func Offset: 0x2b8
	// Line 99, Address: 0x187f84, Func Offset: 0x2c4
	// Line 100, Address: 0x187fa0, Func Offset: 0x2e0
	// Line 101, Address: 0x187fc0, Func Offset: 0x300
	// Line 102, Address: 0x187fdc, Func Offset: 0x31c
	// Line 103, Address: 0x187fe4, Func Offset: 0x324
	// Line 107, Address: 0x187fec, Func Offset: 0x32c
	// Line 109, Address: 0x188004, Func Offset: 0x344
	// Line 110, Address: 0x188078, Func Offset: 0x3b8
	// Line 111, Address: 0x188084, Func Offset: 0x3c4
	// Line 112, Address: 0x188088, Func Offset: 0x3c8
	// Line 113, Address: 0x1880a8, Func Offset: 0x3e8
	// Line 116, Address: 0x188120, Func Offset: 0x460
	// Line 117, Address: 0x188134, Func Offset: 0x474
	// Line 118, Address: 0x188148, Func Offset: 0x488
	// Line 119, Address: 0x188154, Func Offset: 0x494
	// Line 120, Address: 0x188160, Func Offset: 0x4a0
	// Line 125, Address: 0x188180, Func Offset: 0x4c0
	// Line 126, Address: 0x188194, Func Offset: 0x4d4
	// Line 127, Address: 0x1881a4, Func Offset: 0x4e4
	// Line 128, Address: 0x1881b8, Func Offset: 0x4f8
	// Line 129, Address: 0x1881bc, Func Offset: 0x4fc
	// Line 130, Address: 0x1881c0, Func Offset: 0x500
	// Line 136, Address: 0x1881c8, Func Offset: 0x508
	// Line 137, Address: 0x1881cc, Func Offset: 0x50c
	// Func End, Address: 0x1881f0, Func Offset: 0x530
}

