typedef struct skyFile;
typedef struct _RwFileFunctions;
typedef struct _RwModuleInfo;

typedef int32(*type_0)(int8*, void*);
typedef int32(*type_1)(void*);
typedef int32(*type_2)(void*);
typedef void*(*type_3)(void*, int32, int32);
typedef int32(*type_4)(void*, long32, int32);
typedef void*(*type_5)(int8*, int8*);
typedef int32(*type_6)(void*, long32, int32);
typedef int32(*type_7)(void*);
typedef int32(*type_8)(int8*, void*);
typedef int32(*type_9)(int8*);
typedef void*(*type_10)(int8*, int8*);
typedef uint32(*type_11)(void*, uint32, uint32, void*);
typedef int32(*type_12)(void*);
typedef uint32(*type_13)(void*, uint32, uint32, void*);
typedef uint32(*type_14)(void*, uint32, uint32, void*);
typedef int8*(*type_15)(int8*, int32, void*);
typedef int8*(*type_16)(int8*, int32, void*);
typedef uint32(*type_17)(void*, uint32, uint32, void*);
typedef int32(*type_18)(void*);
typedef void*(*type_19)(void*, int32, int32);
typedef int32(*type_20)(int8*);
typedef int32(*type_21)(void*);

typedef int8 type_22[256];
typedef uint32 type_23[4096];
typedef uint8 type_24[10240];

struct skyFile
{
	int32 gdfs;
	int32 POS;
	int32 SOF;
	uint8 readBuffer[10240];
	uint32 bufferPos;
	int32 bufferValid;
};

struct _RwFileFunctions
{
	int32(*rwfexist)(int8*);
	void*(*rwfopen)(int8*, int8*);
	int32(*rwfclose)(void*);
	uint32(*rwfread)(void*, uint32, uint32, void*);
	uint32(*rwfwrite)(void*, uint32, uint32, void*);
	int8*(*rwfgets)(int8*, int32, void*);
	int32(*rwfputs)(int8*, void*);
	int32(*rwfeof)(void*);
	int32(*rwfseek)(void*, long32, int32);
	int32(*rwfflush)(void*);
};

struct _RwModuleInfo
{
	int32 globalsOffset;
	int32 numInstances;
};

int32 gdfsOpenFiles;
_RwModuleInfo gdfsModuleInfo;
int32 rwID_SKYDEVICEMODULE;
void*(*_rwSkyFSClose)(void*, int32, int32);
void*(*_rwSkyFSOpen)(void*, int32, int32);
uint32 ourGlobals[4096];
int32(*skyFflush)(void*);
int32(*skyFseek)(void*, long32, int32);
int32(*skyFeof)(void*);
int32(*skyFputs)(int8*, void*);
int8*(*skyFgets)(int8*, int32, void*);
uint32(*skyFwrite)(void*, uint32, uint32, void*);
uint32(*skyFread)(void*, uint32, uint32, void*);
int32(*skyFclose)(void*);
void*(*skyFopen)(int8*, int8*);
int32(*skyFexist)(int8*);

int32 SkyInstallFileSystem();
void* _rwSkyFSClose(void* instance);
void* _rwSkyFSOpen(void* instance, int32 offset);
int32 skyFflush();
int32 skyFeof(void* fptr);
int32 skyFputs(int8* buffer, void* fptr);
int8* skyFgets(int8* buffer, int32 maxLen, void* fptr);
int32 skyFseek(void* fptr, long32 offset, int32 origin);
uint32 skyFwrite(void* addr, uint32 size, uint32 count, void* fptr);
uint32 skyFread(void* addr, uint32 size, uint32 count, void* fptr);
int32 skyFexist(int8* name);
int32 skyFclose(void* fptr);
void* skyFopen(int8* name, int8* access);
void* trySkyFopen(int8* fname, int8* access);
int32 skyTransMode(int8* access);

// 
// Start address: 0x202d60
int32 SkyInstallFileSystem()
{
	// Line 681, Address: 0x202d60, Func Offset: 0
	// Line 687, Address: 0x202d68, Func Offset: 0x8
	// Line 692, Address: 0x202d90, Func Offset: 0x30
	// Func End, Address: 0x202da0, Func Offset: 0x40
}

// _rwSkyFSClose__FPvii
// Start address: 0x202da0
void* _rwSkyFSClose(void* instance)
{
	_RwFileFunctions* FS;
	// Line 653, Address: 0x202da0, Func Offset: 0
	// Line 659, Address: 0x202db0, Func Offset: 0x10
	// Line 663, Address: 0x202db8, Func Offset: 0x18
	// Line 666, Address: 0x202e1c, Func Offset: 0x7c
	// Line 668, Address: 0x202e3c, Func Offset: 0x9c
	// Line 670, Address: 0x202e50, Func Offset: 0xb0
	// Line 671, Address: 0x202e54, Func Offset: 0xb4
	// Func End, Address: 0x202e68, Func Offset: 0xc8
}

// _rwSkyFSOpen__FPvii
// Start address: 0x202e70
void* _rwSkyFSOpen(void* instance, int32 offset)
{
	_RwFileFunctions* FS;
	// Line 606, Address: 0x202e70, Func Offset: 0
	// Line 612, Address: 0x202e80, Func Offset: 0x10
	// Line 615, Address: 0x202e88, Func Offset: 0x18
	// Line 616, Address: 0x202eb4, Func Offset: 0x44
	// Line 618, Address: 0x202ed4, Func Offset: 0x64
	// Line 622, Address: 0x202ee0, Func Offset: 0x70
	// Line 625, Address: 0x202ee8, Func Offset: 0x78
	// Line 628, Address: 0x202f4c, Func Offset: 0xdc
	// Line 629, Address: 0x202f58, Func Offset: 0xe8
	// Line 630, Address: 0x202f64, Func Offset: 0xf4
	// Line 631, Address: 0x202f70, Func Offset: 0x100
	// Line 632, Address: 0x202f7c, Func Offset: 0x10c
	// Line 633, Address: 0x202f88, Func Offset: 0x118
	// Line 634, Address: 0x202f94, Func Offset: 0x124
	// Line 635, Address: 0x202fa0, Func Offset: 0x130
	// Line 636, Address: 0x202fac, Func Offset: 0x13c
	// Line 637, Address: 0x202fb8, Func Offset: 0x148
	// Line 639, Address: 0x202fc4, Func Offset: 0x154
	// Line 641, Address: 0x202fd8, Func Offset: 0x168
	// Line 642, Address: 0x202fdc, Func Offset: 0x16c
	// Func End, Address: 0x202ff0, Func Offset: 0x180
}

// skyFflush__FPv
// Start address: 0x202ff0
int32 skyFflush()
{
	// Line 594, Address: 0x202ff0, Func Offset: 0
	// Line 595, Address: 0x202ff4, Func Offset: 0x4
	// Func End, Address: 0x202ffc, Func Offset: 0xc
}

// skyFeof__FPv
// Start address: 0x203000
int32 skyFeof(void* fptr)
{
	skyFile* fp;
	// Line 574, Address: 0x203000, Func Offset: 0
	// Line 575, Address: 0x20300c, Func Offset: 0xc
	// Line 577, Address: 0x203010, Func Offset: 0x10
	// Line 579, Address: 0x203034, Func Offset: 0x34
	// Line 580, Address: 0x203044, Func Offset: 0x44
	// Func End, Address: 0x203058, Func Offset: 0x58
}

// skyFputs__FPCcPv
// Start address: 0x203060
int32 skyFputs(int8* buffer, void* fptr)
{
	int32 j;
	int32 i;
	skyFile* fp;
	// Line 542, Address: 0x203060, Func Offset: 0
	// Line 546, Address: 0x20307c, Func Offset: 0x1c
	// Line 547, Address: 0x2030a0, Func Offset: 0x40
	// Line 549, Address: 0x2030c4, Func Offset: 0x64
	// Line 550, Address: 0x2030d4, Func Offset: 0x74
	// Line 552, Address: 0x2030e8, Func Offset: 0x88
	// Line 554, Address: 0x2030f4, Func Offset: 0x94
	// Line 555, Address: 0x203100, Func Offset: 0xa0
	// Line 556, Address: 0x203114, Func Offset: 0xb4
	// Line 558, Address: 0x20311c, Func Offset: 0xbc
	// Line 560, Address: 0x203130, Func Offset: 0xd0
	// Line 563, Address: 0x203134, Func Offset: 0xd4
	// Func End, Address: 0x203150, Func Offset: 0xf0
}

// skyFgets__FPciPv
// Start address: 0x203150
int8* skyFgets(int8* buffer, int32 maxLen, void* fptr)
{
	int32 numBytesRead;
	int32 i;
	skyFile* fp;
	// Line 476, Address: 0x203150, Func Offset: 0
	// Line 481, Address: 0x203174, Func Offset: 0x24
	// Line 482, Address: 0x203198, Func Offset: 0x48
	// Line 484, Address: 0x2031bc, Func Offset: 0x6c
	// Line 486, Address: 0x2031c0, Func Offset: 0x70
	// Line 488, Address: 0x2031dc, Func Offset: 0x8c
	// Line 490, Address: 0x2031e4, Func Offset: 0x94
	// Line 495, Address: 0x2031f0, Func Offset: 0xa0
	// Line 497, Address: 0x203204, Func Offset: 0xb4
	// Line 499, Address: 0x203208, Func Offset: 0xb8
	// Line 506, Address: 0x203210, Func Offset: 0xc0
	// Line 507, Address: 0x203214, Func Offset: 0xc4
	// Line 509, Address: 0x20322c, Func Offset: 0xdc
	// Line 511, Address: 0x203238, Func Offset: 0xe8
	// Line 513, Address: 0x20324c, Func Offset: 0xfc
	// Line 515, Address: 0x203270, Func Offset: 0x120
	// Line 517, Address: 0x20328c, Func Offset: 0x13c
	// Line 518, Address: 0x203290, Func Offset: 0x140
	// Line 520, Address: 0x203298, Func Offset: 0x148
	// Line 521, Address: 0x20329c, Func Offset: 0x14c
	// Line 523, Address: 0x2032a4, Func Offset: 0x154
	// Line 524, Address: 0x2032a8, Func Offset: 0x158
	// Line 530, Address: 0x2032b4, Func Offset: 0x164
	// Line 531, Address: 0x2032b8, Func Offset: 0x168
	// Func End, Address: 0x2032d8, Func Offset: 0x188
}

// skyFseek__FPvli
// Start address: 0x2032e0
int32 skyFseek(void* fptr, long32 offset, int32 origin)
{
	int32 noBuffer;
	int32 bufStart;
	int32 oldFPos;
	skyFile* fp;
	// Line 405, Address: 0x2032e0, Func Offset: 0
	// Line 406, Address: 0x203304, Func Offset: 0x24
	// Line 408, Address: 0x203308, Func Offset: 0x28
	// Line 410, Address: 0x20330c, Func Offset: 0x2c
	// Line 412, Address: 0x203330, Func Offset: 0x50
	// Line 413, Address: 0x203334, Func Offset: 0x54
	// Line 414, Address: 0x20333c, Func Offset: 0x5c
	// Line 415, Address: 0x20334c, Func Offset: 0x6c
	// Line 416, Address: 0x203350, Func Offset: 0x70
	// Line 418, Address: 0x203358, Func Offset: 0x78
	// Line 423, Address: 0x203380, Func Offset: 0xa0
	// Line 426, Address: 0x2033c4, Func Offset: 0xe4
	// Line 427, Address: 0x2033d0, Func Offset: 0xf0
	// Line 428, Address: 0x2033dc, Func Offset: 0xfc
	// Line 431, Address: 0x2033e4, Func Offset: 0x104
	// Line 435, Address: 0x20340c, Func Offset: 0x12c
	// Line 439, Address: 0x203414, Func Offset: 0x134
	// Line 440, Address: 0x203430, Func Offset: 0x150
	// Line 444, Address: 0x203438, Func Offset: 0x158
	// Line 445, Address: 0x203454, Func Offset: 0x174
	// Line 449, Address: 0x20345c, Func Offset: 0x17c
	// Line 453, Address: 0x203468, Func Offset: 0x188
	// Line 454, Address: 0x203470, Func Offset: 0x190
	// Line 456, Address: 0x203478, Func Offset: 0x198
	// Line 459, Address: 0x203488, Func Offset: 0x1a8
	// Line 460, Address: 0x20348c, Func Offset: 0x1ac
	// Line 461, Address: 0x203494, Func Offset: 0x1b4
	// Line 464, Address: 0x2034a0, Func Offset: 0x1c0
	// Line 465, Address: 0x2034a4, Func Offset: 0x1c4
	// Func End, Address: 0x2034c8, Func Offset: 0x1e8
}

// skyFwrite__FPCvUiUiPv
// Start address: 0x2034d0
uint32 skyFwrite(void* addr, uint32 size, uint32 count, void* fptr)
{
	int32 numBytesToWrite;
	skyFile* fp;
	int32 bytesWritten;
	// Line 377, Address: 0x2034d0, Func Offset: 0
	// Line 380, Address: 0x2034f4, Func Offset: 0x24
	// Line 382, Address: 0x2034f8, Func Offset: 0x28
	// Line 383, Address: 0x20351c, Func Offset: 0x4c
	// Line 385, Address: 0x203540, Func Offset: 0x70
	// Line 386, Address: 0x203554, Func Offset: 0x84
	// Line 388, Address: 0x203560, Func Offset: 0x90
	// Line 389, Address: 0x20356c, Func Offset: 0x9c
	// Line 390, Address: 0x203580, Func Offset: 0xb0
	// Line 391, Address: 0x203588, Func Offset: 0xb8
	// Line 393, Address: 0x2035b8, Func Offset: 0xe8
	// Line 394, Address: 0x2035bc, Func Offset: 0xec
	// Func End, Address: 0x2035dc, Func Offset: 0x10c
}

// skyFread__FPvUiUiPv
// Start address: 0x2035e0
uint32 skyFread(void* addr, uint32 size, uint32 count, void* fptr)
{
	int32 bytesRead2;
	int32 bytesRead;
	uint32 numBytesToRead;
	skyFile* fp;
	// Line 301, Address: 0x2035e0, Func Offset: 0
	// Line 302, Address: 0x203604, Func Offset: 0x24
	// Line 303, Address: 0x203608, Func Offset: 0x28
	// Line 306, Address: 0x20360c, Func Offset: 0x2c
	// Line 309, Address: 0x203610, Func Offset: 0x30
	// Line 311, Address: 0x203628, Func Offset: 0x48
	// Line 315, Address: 0x203634, Func Offset: 0x54
	// Line 319, Address: 0x203650, Func Offset: 0x70
	// Line 322, Address: 0x203668, Func Offset: 0x88
	// Line 323, Address: 0x20366c, Func Offset: 0x8c
	// Line 327, Address: 0x203674, Func Offset: 0x94
	// Line 331, Address: 0x203680, Func Offset: 0xa0
	// Line 334, Address: 0x20369c, Func Offset: 0xbc
	// Line 335, Address: 0x2036a0, Func Offset: 0xc0
	// Line 336, Address: 0x2036ac, Func Offset: 0xcc
	// Line 342, Address: 0x2036b8, Func Offset: 0xd8
	// Line 344, Address: 0x2036c4, Func Offset: 0xe4
	// Line 346, Address: 0x2036d4, Func Offset: 0xf4
	// Line 347, Address: 0x2036d8, Func Offset: 0xf8
	// Line 348, Address: 0x2036f0, Func Offset: 0x110
	// Line 350, Address: 0x2036f8, Func Offset: 0x118
	// Line 352, Address: 0x2036fc, Func Offset: 0x11c
	// Line 356, Address: 0x203704, Func Offset: 0x124
	// Line 357, Address: 0x203718, Func Offset: 0x138
	// Line 358, Address: 0x20371c, Func Offset: 0x13c
	// Line 359, Address: 0x203730, Func Offset: 0x150
	// Line 361, Address: 0x203734, Func Offset: 0x154
	// Line 362, Address: 0x203740, Func Offset: 0x160
	// Line 365, Address: 0x203744, Func Offset: 0x164
	// Line 366, Address: 0x203758, Func Offset: 0x178
	// Func End, Address: 0x20377c, Func Offset: 0x19c
}

// skyFexist__FPCc
// Start address: 0x203780
int32 skyFexist(int8* name)
{
	void* res;
	// Line 279, Address: 0x203780, Func Offset: 0
	// Line 282, Address: 0x203790, Func Offset: 0x10
	// Line 283, Address: 0x2037b4, Func Offset: 0x34
	// Line 285, Address: 0x2037bc, Func Offset: 0x3c
	// Line 286, Address: 0x2037d4, Func Offset: 0x54
	// Line 289, Address: 0x2037e0, Func Offset: 0x60
	// Line 290, Address: 0x2037e4, Func Offset: 0x64
	// Func End, Address: 0x2037f8, Func Offset: 0x78
}

// skyFclose__FPv
// Start address: 0x203800
int32 skyFclose(void* fptr)
{
	skyFile* fp;
	// Line 251, Address: 0x203800, Func Offset: 0
	// Line 252, Address: 0x20380c, Func Offset: 0xc
	// Line 254, Address: 0x203810, Func Offset: 0x10
	// Line 256, Address: 0x203834, Func Offset: 0x34
	// Line 258, Address: 0x203848, Func Offset: 0x48
	// Line 260, Address: 0x203854, Func Offset: 0x54
	// Line 262, Address: 0x203884, Func Offset: 0x84
	// Line 264, Address: 0x203890, Func Offset: 0x90
	// Line 267, Address: 0x20389c, Func Offset: 0x9c
	// Line 268, Address: 0x2038a0, Func Offset: 0xa0
	// Func End, Address: 0x2038b4, Func Offset: 0xb4
}

// skyFopen__FPCcPCc
// Start address: 0x2038c0
void* skyFopen(int8* name, int8* access)
{
	void* res;
	// Line 229, Address: 0x2038c0, Func Offset: 0
	// Line 232, Address: 0x2038c8, Func Offset: 0x8
	// Line 236, Address: 0x2038d0, Func Offset: 0x10
	// Line 240, Address: 0x2038e4, Func Offset: 0x24
	// Func End, Address: 0x2038f4, Func Offset: 0x34
}

// trySkyFopen__FPCcPCc
// Start address: 0x203900
void* trySkyFopen(int8* fname, int8* access)
{
	int8* nameptr;
	int8 name[256];
	int32 mode;
	skyFile* fp;
	// Line 120, Address: 0x203900, Func Offset: 0
	// Line 127, Address: 0x203918, Func Offset: 0x18
	// Line 129, Address: 0x203930, Func Offset: 0x30
	// Line 130, Address: 0x203944, Func Offset: 0x44
	// Line 141, Address: 0x20394c, Func Offset: 0x4c
	// Line 142, Address: 0x203960, Func Offset: 0x60
	// Line 144, Address: 0x203974, Func Offset: 0x74
	// Line 146, Address: 0x203978, Func Offset: 0x78
	// Line 148, Address: 0x203990, Func Offset: 0x90
	// Line 150, Address: 0x2039a4, Func Offset: 0xa4
	// Line 155, Address: 0x2039b0, Func Offset: 0xb0
	// Line 157, Address: 0x2039b4, Func Offset: 0xb4
	// Line 158, Address: 0x2039b8, Func Offset: 0xb8
	// Line 164, Address: 0x2039c0, Func Offset: 0xc0
	// Line 165, Address: 0x2039d0, Func Offset: 0xd0
	// Line 167, Address: 0x2039d8, Func Offset: 0xd8
	// Line 168, Address: 0x2039dc, Func Offset: 0xdc
	// Line 171, Address: 0x2039ec, Func Offset: 0xec
	// Line 172, Address: 0x203a1c, Func Offset: 0x11c
	// Line 174, Address: 0x203a24, Func Offset: 0x124
	// Line 177, Address: 0x203a30, Func Offset: 0x130
	// Line 178, Address: 0x203a40, Func Offset: 0x140
	// Line 180, Address: 0x203a48, Func Offset: 0x148
	// Line 183, Address: 0x203a54, Func Offset: 0x154
	// Line 185, Address: 0x203a68, Func Offset: 0x168
	// Line 187, Address: 0x203a74, Func Offset: 0x174
	// Line 188, Address: 0x203aa4, Func Offset: 0x1a4
	// Line 192, Address: 0x203ab0, Func Offset: 0x1b0
	// Line 193, Address: 0x203acc, Func Offset: 0x1cc
	// Line 195, Address: 0x203ad8, Func Offset: 0x1d8
	// Line 196, Address: 0x203ae4, Func Offset: 0x1e4
	// Line 197, Address: 0x203b14, Func Offset: 0x214
	// Line 200, Address: 0x203b20, Func Offset: 0x220
	// Line 202, Address: 0x203b38, Func Offset: 0x238
	// Line 204, Address: 0x203b50, Func Offset: 0x250
	// Line 206, Address: 0x203b5c, Func Offset: 0x25c
	// Line 207, Address: 0x203b68, Func Offset: 0x268
	// Line 208, Address: 0x203b98, Func Offset: 0x298
	// Line 213, Address: 0x203ba4, Func Offset: 0x2a4
	// Line 215, Address: 0x203bac, Func Offset: 0x2ac
	// Line 217, Address: 0x203bb8, Func Offset: 0x2b8
	// Line 218, Address: 0x203bbc, Func Offset: 0x2bc
	// Func End, Address: 0x203bd4, Func Offset: 0x2d4
}

// skyTransMode__FPCc
// Start address: 0x203be0
int32 skyTransMode(int8* access)
{
	int8* d;
	int8* n;
	int8* plus;
	int8* a;
	int8* w;
	int8* r;
	int32 mode;
	// Line 62, Address: 0x203be0, Func Offset: 0
	// Line 75, Address: 0x203c04, Func Offset: 0x24
	// Line 76, Address: 0x203c18, Func Offset: 0x38
	// Line 77, Address: 0x203c2c, Func Offset: 0x4c
	// Line 78, Address: 0x203c40, Func Offset: 0x60
	// Line 79, Address: 0x203c54, Func Offset: 0x74
	// Line 80, Address: 0x203c68, Func Offset: 0x88
	// Line 82, Address: 0x203c78, Func Offset: 0x98
	// Line 83, Address: 0x203c80, Func Offset: 0xa0
	// Line 84, Address: 0x203c8c, Func Offset: 0xac
	// Line 85, Address: 0x203c94, Func Offset: 0xb4
	// Line 86, Address: 0x203ca0, Func Offset: 0xc0
	// Line 87, Address: 0x203ca8, Func Offset: 0xc8
	// Line 88, Address: 0x203cb4, Func Offset: 0xd4
	// Line 89, Address: 0x203cbc, Func Offset: 0xdc
	// Line 91, Address: 0x203cc8, Func Offset: 0xe8
	// Line 94, Address: 0x203cd4, Func Offset: 0xf4
	// Line 95, Address: 0x203cdc, Func Offset: 0xfc
	// Line 97, Address: 0x203ce0, Func Offset: 0x100
	// Line 98, Address: 0x203ce8, Func Offset: 0x108
	// Line 100, Address: 0x203cec, Func Offset: 0x10c
	// Line 101, Address: 0x203cf4, Func Offset: 0x114
	// Line 103, Address: 0x203cf8, Func Offset: 0x118
	// Line 104, Address: 0x203d00, Func Offset: 0x120
	// Line 106, Address: 0x203d08, Func Offset: 0x128
	// Line 107, Address: 0x203d0c, Func Offset: 0x12c
	// Func End, Address: 0x203d34, Func Offset: 0x154
}

