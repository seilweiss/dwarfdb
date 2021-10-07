



int8* xIniGetString(xIniFile* ini, int8* tok, int8* def, int32& idx);
int8* xIniGetString(xIniFile* ini, int8* tok, int8* def);
float32 xIniGetFloat(xIniFile* ini, int8* tok, float32 def);
int32 xIniGetInt(xIniFile* ini, int8* tok, int32 def);
void xIniDestroy(xIniFile* ini);
xIniFile* xIniParse(int8* buf, int32 len);

// xIniGetString__FP8xIniFilePCcPCcRi
// Start address: 0x3c7860
int8* xIniGetString(xIniFile* ini, int8* tok, int8* def, int32& idx)
{
	// Line 221, Address: 0x3c7860, Func Offset: 0
	// Line 222, Address: 0x3c788c, Func Offset: 0x2c
	// Line 224, Address: 0x3c78a8, Func Offset: 0x48
	// Line 225, Address: 0x3c78b8, Func Offset: 0x58
	// Line 222, Address: 0x3c78e0, Func Offset: 0x80
	// Line 225, Address: 0x3c78e8, Func Offset: 0x88
	// Line 227, Address: 0x3c7904, Func Offset: 0xa4
	// Line 228, Address: 0x3c791c, Func Offset: 0xbc
	// Func End, Address: 0x3c7940, Func Offset: 0xe0
}

// xIniGetString__FP8xIniFilePCcPCc
// Start address: 0x3c7940
int8* xIniGetString(xIniFile* ini, int8* tok, int8* def)
{
	// Line 187, Address: 0x3c7940, Func Offset: 0
	// Line 188, Address: 0x3c7968, Func Offset: 0x28
	// Line 189, Address: 0x3c797c, Func Offset: 0x3c
	// Line 192, Address: 0x3c7988, Func Offset: 0x48
	// Line 188, Address: 0x3c79bc, Func Offset: 0x7c
	// Line 192, Address: 0x3c79c4, Func Offset: 0x84
	// Line 193, Address: 0x3c79e0, Func Offset: 0xa0
	// Func End, Address: 0x3c7a00, Func Offset: 0xc0
}

// xIniGetFloat__FP8xIniFilePCcf
// Start address: 0x3c7a00
float32 xIniGetFloat(xIniFile* ini, int8* tok, float32 def)
{
	// Line 171, Address: 0x3c7a00, Func Offset: 0
	// Line 172, Address: 0x3c7a20, Func Offset: 0x20
	// Line 171, Address: 0x3c7a24, Func Offset: 0x24
	// Line 172, Address: 0x3c7a28, Func Offset: 0x28
	// Line 173, Address: 0x3c7a3c, Func Offset: 0x3c
	// Line 174, Address: 0x3c7a48, Func Offset: 0x48
	// Line 172, Address: 0x3c7a70, Func Offset: 0x70
	// Line 174, Address: 0x3c7a78, Func Offset: 0x78
	// Line 180, Address: 0x3c7a94, Func Offset: 0x94
	// Line 183, Address: 0x3c7ab0, Func Offset: 0xb0
	// Func End, Address: 0x3c7ad0, Func Offset: 0xd0
}

// xIniGetInt__FP8xIniFilePCci
// Start address: 0x3c7ad0
int32 xIniGetInt(xIniFile* ini, int8* tok, int32 def)
{
	// Line 160, Address: 0x3c7ad0, Func Offset: 0
	// Line 161, Address: 0x3c7af8, Func Offset: 0x28
	// Line 162, Address: 0x3c7b0c, Func Offset: 0x3c
	// Line 163, Address: 0x3c7b18, Func Offset: 0x48
	// Line 161, Address: 0x3c7b40, Func Offset: 0x70
	// Line 163, Address: 0x3c7b48, Func Offset: 0x78
	// Line 165, Address: 0x3c7b64, Func Offset: 0x94
	// Line 166, Address: 0x3c7b78, Func Offset: 0xa8
	// Func End, Address: 0x3c7b98, Func Offset: 0xc8
}

// xIniDestroy__FP8xIniFile
// Start address: 0x3c7ba0
void xIniDestroy(xIniFile* ini)
{
	// Line 142, Address: 0x3c7ba0, Func Offset: 0
	// Line 143, Address: 0x3c7bbc, Func Offset: 0x1c
	// Line 144, Address: 0x3c7bc8, Func Offset: 0x28
	// Line 145, Address: 0x3c7bd4, Func Offset: 0x34
	// Func End, Address: 0x3c7be8, Func Offset: 0x48
}

// xIniParse__FPci
// Start address: 0x3c7bf0
xIniFile* xIniParse(int8* buf, int32 len)
{
	int32 i;
	int32 ccr;
	int32 clf;
	int32 copen;
	int32 lastCRLF;
	int8* c;
	int8* lastLine;
	int8* line;
	int8* ltoken;
	xIniFile* ini;
	// Line 37, Address: 0x3c7bf0, Func Offset: 0
	// Line 44, Address: 0x3c7bf4, Func Offset: 0x4
	// Line 37, Address: 0x3c7bf8, Func Offset: 0x8
	// Line 38, Address: 0x3c7c0c, Func Offset: 0x1c
	// Line 37, Address: 0x3c7c10, Func Offset: 0x20
	// Line 44, Address: 0x3c7c14, Func Offset: 0x24
	// Line 37, Address: 0x3c7c18, Func Offset: 0x28
	// Line 38, Address: 0x3c7c20, Func Offset: 0x30
	// Line 44, Address: 0x3c7c28, Func Offset: 0x38
	// Line 45, Address: 0x3c7c30, Func Offset: 0x40
	// Line 46, Address: 0x3c7c64, Func Offset: 0x74
	// Line 47, Address: 0x3c7c74, Func Offset: 0x84
	// Line 48, Address: 0x3c7c84, Func Offset: 0x94
	// Line 49, Address: 0x3c7c8c, Func Offset: 0x9c
	// Line 50, Address: 0x3c7ca0, Func Offset: 0xb0
	// Line 54, Address: 0x3c7cb0, Func Offset: 0xc0
	// Line 68, Address: 0x3c7ce0, Func Offset: 0xf0
	// Line 62, Address: 0x3c7ce4, Func Offset: 0xf4
	// Line 65, Address: 0x3c7ce8, Func Offset: 0xf8
	// Line 54, Address: 0x3c7cec, Func Offset: 0xfc
	// Line 66, Address: 0x3c7cf0, Func Offset: 0x100
	// Line 67, Address: 0x3c7cf4, Func Offset: 0x104
	// Line 68, Address: 0x3c7cfc, Func Offset: 0x10c
	// Line 69, Address: 0x3c7d00, Func Offset: 0x110
	// Line 72, Address: 0x3c7d14, Func Offset: 0x124
	// Line 68, Address: 0x3c7d1c, Func Offset: 0x12c
	// Line 69, Address: 0x3c7d24, Func Offset: 0x134
	// Line 72, Address: 0x3c7d2c, Func Offset: 0x13c
	// Line 73, Address: 0x3c7d34, Func Offset: 0x144
	// Line 74, Address: 0x3c7d38, Func Offset: 0x148
	// Line 75, Address: 0x3c7d40, Func Offset: 0x150
	// Line 80, Address: 0x3c7d48, Func Offset: 0x158
	// Line 81, Address: 0x3c7d5c, Func Offset: 0x16c
	// Line 89, Address: 0x3c7d6c, Func Offset: 0x17c
	// Line 92, Address: 0x3c7db4, Func Offset: 0x1c4
	// Line 95, Address: 0x3c7dc8, Func Offset: 0x1d8
	// Line 96, Address: 0x3c7dd0, Func Offset: 0x1e0
	// Line 97, Address: 0x3c7de4, Func Offset: 0x1f4
	// Line 98, Address: 0x3c7de8, Func Offset: 0x1f8
	// Line 99, Address: 0x3c7e28, Func Offset: 0x238
	// Line 100, Address: 0x3c7e34, Func Offset: 0x244
	// Line 101, Address: 0x3c7e50, Func Offset: 0x260
	// Line 102, Address: 0x3c7e70, Func Offset: 0x280
	// Line 103, Address: 0x3c7e8c, Func Offset: 0x29c
	// Line 104, Address: 0x3c7e94, Func Offset: 0x2a4
	// Line 105, Address: 0x3c7e9c, Func Offset: 0x2ac
	// Line 108, Address: 0x3c7ea0, Func Offset: 0x2b0
	// Line 109, Address: 0x3c7ebc, Func Offset: 0x2cc
	// Line 110, Address: 0x3c7ec0, Func Offset: 0x2d0
	// Line 111, Address: 0x3c7f00, Func Offset: 0x310
	// Line 112, Address: 0x3c7f0c, Func Offset: 0x31c
	// Line 113, Address: 0x3c7f10, Func Offset: 0x320
	// Line 114, Address: 0x3c7f30, Func Offset: 0x340
	// Line 117, Address: 0x3c7f70, Func Offset: 0x380
	// Line 118, Address: 0x3c7f84, Func Offset: 0x394
	// Line 119, Address: 0x3c7f98, Func Offset: 0x3a8
	// Line 120, Address: 0x3c7fa8, Func Offset: 0x3b8
	// Line 121, Address: 0x3c7fb0, Func Offset: 0x3c0
	// Line 126, Address: 0x3c7fd0, Func Offset: 0x3e0
	// Line 127, Address: 0x3c7fe4, Func Offset: 0x3f4
	// Line 131, Address: 0x3c7fec, Func Offset: 0x3fc
	// Line 137, Address: 0x3c7ff8, Func Offset: 0x408
	// Line 82, Address: 0x3c8008, Func Offset: 0x418
	// Line 137, Address: 0x3c800c, Func Offset: 0x41c
	// Line 89, Address: 0x3c8030, Func Offset: 0x440
	// Line 137, Address: 0x3c8040, Func Offset: 0x450
	// Line 89, Address: 0x3c8044, Func Offset: 0x454
	// Line 137, Address: 0x3c8048, Func Offset: 0x458
	// Line 98, Address: 0x3c806c, Func Offset: 0x47c
	// Line 137, Address: 0x3c8070, Func Offset: 0x480
	// Line 98, Address: 0x3c8080, Func Offset: 0x490
	// Line 137, Address: 0x3c8090, Func Offset: 0x4a0
	// Line 98, Address: 0x3c8094, Func Offset: 0x4a4
	// Line 137, Address: 0x3c8098, Func Offset: 0x4a8
	// Line 110, Address: 0x3c80bc, Func Offset: 0x4cc
	// Line 137, Address: 0x3c80c0, Func Offset: 0x4d0
	// Line 110, Address: 0x3c80d0, Func Offset: 0x4e0
	// Line 137, Address: 0x3c80e0, Func Offset: 0x4f0
	// Line 110, Address: 0x3c80e4, Func Offset: 0x4f4
	// Line 137, Address: 0x3c80e8, Func Offset: 0x4f8
	// Line 114, Address: 0x3c810c, Func Offset: 0x51c
	// Line 137, Address: 0x3c8110, Func Offset: 0x520
	// Line 114, Address: 0x3c8120, Func Offset: 0x530
	// Line 137, Address: 0x3c8130, Func Offset: 0x540
	// Line 114, Address: 0x3c8134, Func Offset: 0x544
	// Line 137, Address: 0x3c8138, Func Offset: 0x548
	// Line 128, Address: 0x3c8168, Func Offset: 0x578
	// Line 137, Address: 0x3c816c, Func Offset: 0x57c
	// Line 138, Address: 0x3c8180, Func Offset: 0x590
	// Func End, Address: 0x3c81a0, Func Offset: 0x5b0
}

