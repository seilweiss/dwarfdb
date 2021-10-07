typedef struct skyFile;
typedef struct RwSkyFSState;
typedef struct RwModuleInfo;
typedef struct RwFileFunctions;

typedef int32(*type_0)(int8*);
typedef int32(*type_1)(void*);
typedef void*(*type_2)(int8*, int8*);
typedef int32(*type_3)(void*);
typedef int32(*type_5)(void*);
typedef uint32(*type_7)(void*, uint32, uint32, void*);
typedef int32(*type_8)(int8*);
typedef void*(*type_9)(void*, int32, int32);
typedef uint32(*type_10)(void*, uint32, uint32, void*);
typedef void*(*type_11)(void*, int32, int32);
typedef int32(*type_12)(void*);
typedef int8*(*type_13)(int8*, int32, void*);
typedef int32(*type_14)(int8*, void*);
typedef int32(*type_15)(void*);
typedef int32(*type_17)(void*, long32, int32);
typedef int32(*type_18)(int8*, void*);
typedef int32(*type_19)(void*);
typedef void*(*type_20)(int8*, int8*);
typedef int32(*type_21)(void*);
typedef int8*(*type_22)(int8*, int32, void*);
typedef int32(*type_23)(void*, long32, int32);
typedef uint32(*type_25)(void*, uint32, uint32, void*);
typedef uint32(*type_26)(void*, uint32, uint32, void*);
typedef int32(*type_27)(void*);

typedef int8 type_4[256];
typedef int8 type_6[256];
typedef uint32 type_16[4096];
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

struct RwSkyFSState
{
	int32 gdfsOpenFiles;
	int8 SubDir[256];
	RwModuleInfo gdfsModuleInfo;
};

struct RwModuleInfo
{
	int32 globalsOffset;
	int32 numInstances;
};

struct RwFileFunctions
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
	int32(*rwftell)(void*);
};

RwSkyFSState SkyFSState;
void*(*_rwSkyFSClose)(void*, int32, int32);
void*(*_rwSkyFSOpen)(void*, int32, int32);
uint32 ourGlobals[4096];
int32(*skyFtell)(void*);
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

int32 SkyInstallFileSystem(int8* subdir);
void* _rwSkyFSClose(void* instance);
void* _rwSkyFSOpen(void* instance, int32 offset);
int32 skyFflush();
int32 skyFeof(void* fptr);
int32 skyFputs(int8* buffer, void* fptr);
int8* skyFgets(int8* buffer, int32 maxLen, void* fptr);
int32 skyFtell(void* fptr);
int32 skyFseek(void* fptr, long32 offset, int32 origin);
uint32 skyFwrite(void* addr, uint32 size, uint32 count, void* fptr);
uint32 skyFread(void* addr, uint32 size, uint32 count, void* fptr);
int32 skyFexist(int8* name);
int32 skyFclose(void* fptr);
void* skyFopen(int8* name, int8* access);
void* trySkyFopen(int8* fname, int8* access);
int32 skyTransMode(int8* access);

// 
// Start address: 0x127670
int32 SkyInstallFileSystem(int8* subdir)
{
	// Line 709, Address: 0x127670, Func Offset: 0
	// Line 711, Address: 0x127680, Func Offset: 0x10
	// Line 713, Address: 0x127688, Func Offset: 0x18
	// Line 718, Address: 0x1276b4, Func Offset: 0x44
	// Line 723, Address: 0x1276bc, Func Offset: 0x4c
	// Line 725, Address: 0x1276c4, Func Offset: 0x54
	// Line 726, Address: 0x1276cc, Func Offset: 0x5c
	// Line 729, Address: 0x1276d4, Func Offset: 0x64
	// Line 733, Address: 0x1276d8, Func Offset: 0x68
	// Line 734, Address: 0x1276dc, Func Offset: 0x6c
	// Func End, Address: 0x1276f0, Func Offset: 0x80
}

// _rwSkyFSClose__FPvii
// Start address: 0x1276f0
void* _rwSkyFSClose(void* instance)
{
	RwFileFunctions* FS;
	// Line 683, Address: 0x1276f0, Func Offset: 0
	// Line 686, Address: 0x127700, Func Offset: 0x10
	// Line 690, Address: 0x127708, Func Offset: 0x18
	// Line 693, Address: 0x127778, Func Offset: 0x88
	// Line 695, Address: 0x127788, Func Offset: 0x98
	// Line 697, Address: 0x12778c, Func Offset: 0x9c
	// Line 695, Address: 0x127790, Func Offset: 0xa0
	// Line 698, Address: 0x127798, Func Offset: 0xa8
	// Func End, Address: 0x1277ac, Func Offset: 0xbc
}

// _rwSkyFSOpen__FPvii
// Start address: 0x1277b0
void* _rwSkyFSOpen(void* instance, int32 offset)
{
	RwFileFunctions* FS;
	// Line 636, Address: 0x1277b0, Func Offset: 0
	// Line 640, Address: 0x1277c4, Func Offset: 0x14
	// Line 643, Address: 0x1277d4, Func Offset: 0x24
	// Line 644, Address: 0x1277f8, Func Offset: 0x48
	// Line 646, Address: 0x12780c, Func Offset: 0x5c
	// Line 650, Address: 0x127814, Func Offset: 0x64
	// Line 653, Address: 0x12781c, Func Offset: 0x6c
	// Line 657, Address: 0x127824, Func Offset: 0x74
	// Line 656, Address: 0x12782c, Func Offset: 0x7c
	// Line 653, Address: 0x127834, Func Offset: 0x84
	// Line 658, Address: 0x127840, Func Offset: 0x90
	// Line 659, Address: 0x127848, Func Offset: 0x98
	// Line 660, Address: 0x127850, Func Offset: 0xa0
	// Line 653, Address: 0x127854, Func Offset: 0xa4
	// Line 660, Address: 0x12785c, Func Offset: 0xac
	// Line 661, Address: 0x127860, Func Offset: 0xb0
	// Line 662, Address: 0x127868, Func Offset: 0xb8
	// Line 653, Address: 0x127870, Func Offset: 0xc0
	// Line 663, Address: 0x127878, Func Offset: 0xc8
	// Line 664, Address: 0x127880, Func Offset: 0xd0
	// Line 665, Address: 0x127888, Func Offset: 0xd8
	// Line 653, Address: 0x12788c, Func Offset: 0xdc
	// Line 665, Address: 0x127894, Func Offset: 0xe4
	// Line 666, Address: 0x127898, Func Offset: 0xe8
	// Line 653, Address: 0x1278a0, Func Offset: 0xf0
	// Line 656, Address: 0x1278d4, Func Offset: 0x124
	// Line 657, Address: 0x1278d8, Func Offset: 0x128
	// Line 658, Address: 0x1278dc, Func Offset: 0x12c
	// Line 659, Address: 0x1278e0, Func Offset: 0x130
	// Line 660, Address: 0x1278e4, Func Offset: 0x134
	// Line 661, Address: 0x1278e8, Func Offset: 0x138
	// Line 662, Address: 0x1278ec, Func Offset: 0x13c
	// Line 663, Address: 0x1278f0, Func Offset: 0x140
	// Line 664, Address: 0x1278f4, Func Offset: 0x144
	// Line 665, Address: 0x1278f8, Func Offset: 0x148
	// Line 666, Address: 0x1278fc, Func Offset: 0x14c
	// Line 668, Address: 0x127900, Func Offset: 0x150
	// Line 670, Address: 0x127904, Func Offset: 0x154
	// Line 668, Address: 0x127908, Func Offset: 0x158
	// Line 671, Address: 0x127910, Func Offset: 0x160
	// Func End, Address: 0x127928, Func Offset: 0x178
}

// skyFflush__FPv
// Start address: 0x127930
int32 skyFflush()
{
	// Line 625, Address: 0x127930, Func Offset: 0
	// Func End, Address: 0x127938, Func Offset: 0x8
}

// skyFeof__FPv
// Start address: 0x127940
int32 skyFeof(void* fptr)
{
	skyFile* fp;
	// Line 606, Address: 0x127940, Func Offset: 0
	// Line 609, Address: 0x12794c, Func Offset: 0xc
	// Line 611, Address: 0x12796c, Func Offset: 0x2c
	// Line 612, Address: 0x127974, Func Offset: 0x34
	// Line 611, Address: 0x12797c, Func Offset: 0x3c
	// Line 612, Address: 0x127984, Func Offset: 0x44
	// Func End, Address: 0x12798c, Func Offset: 0x4c
}

// skyFputs__FPCcPv
// Start address: 0x127990
int32 skyFputs(int8* buffer, void* fptr)
{
	int32 j;
	int32 i;
	skyFile* fp;
	// Line 574, Address: 0x127990, Func Offset: 0
	// Line 578, Address: 0x1279a4, Func Offset: 0x14
	// Line 579, Address: 0x1279c4, Func Offset: 0x34
	// Line 581, Address: 0x1279e4, Func Offset: 0x54
	// Line 582, Address: 0x1279f0, Func Offset: 0x60
	// Line 581, Address: 0x1279f8, Func Offset: 0x68
	// Line 582, Address: 0x1279fc, Func Offset: 0x6c
	// Line 584, Address: 0x127a04, Func Offset: 0x74
	// Line 586, Address: 0x127a10, Func Offset: 0x80
	// Line 587, Address: 0x127a1c, Func Offset: 0x8c
	// Line 588, Address: 0x127a30, Func Offset: 0xa0
	// Line 590, Address: 0x127a34, Func Offset: 0xa4
	// Line 592, Address: 0x127a48, Func Offset: 0xb8
	// Line 595, Address: 0x127a4c, Func Offset: 0xbc
	// Func End, Address: 0x127a60, Func Offset: 0xd0
}

// skyFgets__FPciPv
// Start address: 0x127a60
int8* skyFgets(int8* buffer, int32 maxLen, void* fptr)
{
	int32 numBytesRead;
	int32 i;
	skyFile* fp;
	// Line 508, Address: 0x127a60, Func Offset: 0
	// Line 513, Address: 0x127a80, Func Offset: 0x20
	// Line 514, Address: 0x127aa0, Func Offset: 0x40
	// Line 518, Address: 0x127ac0, Func Offset: 0x60
	// Line 520, Address: 0x127adc, Func Offset: 0x7c
	// Line 522, Address: 0x127ae4, Func Offset: 0x84
	// Line 525, Address: 0x127aec, Func Offset: 0x8c
	// Line 527, Address: 0x127af4, Func Offset: 0x94
	// Line 529, Address: 0x127b08, Func Offset: 0xa8
	// Line 531, Address: 0x127b0c, Func Offset: 0xac
	// Line 538, Address: 0x127b10, Func Offset: 0xb0
	// Line 539, Address: 0x127b14, Func Offset: 0xb4
	// Line 531, Address: 0x127b1c, Func Offset: 0xbc
	// Line 539, Address: 0x127b20, Func Offset: 0xc0
	// Line 541, Address: 0x127b2c, Func Offset: 0xcc
	// Line 543, Address: 0x127b34, Func Offset: 0xd4
	// Line 545, Address: 0x127b3c, Func Offset: 0xdc
	// Line 547, Address: 0x127b58, Func Offset: 0xf8
	// Line 550, Address: 0x127b68, Func Offset: 0x108
	// Line 552, Address: 0x127b70, Func Offset: 0x110
	// Line 553, Address: 0x127b74, Func Offset: 0x114
	// Line 555, Address: 0x127b7c, Func Offset: 0x11c
	// Line 556, Address: 0x127b80, Func Offset: 0x120
	// Line 562, Address: 0x127b90, Func Offset: 0x130
	// Line 563, Address: 0x127b94, Func Offset: 0x134
	// Func End, Address: 0x127bb0, Func Offset: 0x150
}

// skyFtell__FPv
// Start address: 0x127bb0
int32 skyFtell(void* fptr)
{
	skyFile* fp;
	// Line 491, Address: 0x127bb0, Func Offset: 0
	// Line 494, Address: 0x127bbc, Func Offset: 0xc
	// Line 496, Address: 0x127bdc, Func Offset: 0x2c
	// Line 497, Address: 0x127bec, Func Offset: 0x3c
	// Func End, Address: 0x127bfc, Func Offset: 0x4c
}

// skyFseek__FPvli
// Start address: 0x127c00
int32 skyFseek(void* fptr, long32 offset, int32 origin)
{
	int32 noBuffer;
	int32 bufStart;
	int32 oldFPos;
	skyFile* fp;
	// Line 422, Address: 0x127c00, Func Offset: 0
	// Line 423, Address: 0x127c24, Func Offset: 0x24
	// Line 427, Address: 0x127c28, Func Offset: 0x28
	// Line 429, Address: 0x127c48, Func Offset: 0x48
	// Line 430, Address: 0x127c4c, Func Offset: 0x4c
	// Line 431, Address: 0x127c50, Func Offset: 0x50
	// Line 432, Address: 0x127c5c, Func Offset: 0x5c
	// Line 433, Address: 0x127c60, Func Offset: 0x60
	// Line 435, Address: 0x127c64, Func Offset: 0x64
	// Line 440, Address: 0x127c88, Func Offset: 0x88
	// Line 443, Address: 0x127cbc, Func Offset: 0xbc
	// Line 444, Address: 0x127cc0, Func Offset: 0xc0
	// Line 445, Address: 0x127cc8, Func Offset: 0xc8
	// Line 448, Address: 0x127cd0, Func Offset: 0xd0
	// Line 450, Address: 0x127ce4, Func Offset: 0xe4
	// Line 454, Address: 0x127cec, Func Offset: 0xec
	// Line 455, Address: 0x127cfc, Func Offset: 0xfc
	// Line 459, Address: 0x127d04, Func Offset: 0x104
	// Line 460, Address: 0x127d18, Func Offset: 0x118
	// Line 464, Address: 0x127d20, Func Offset: 0x120
	// Line 468, Address: 0x127d28, Func Offset: 0x128
	// Line 469, Address: 0x127d30, Func Offset: 0x130
	// Line 471, Address: 0x127d34, Func Offset: 0x134
	// Line 474, Address: 0x127d44, Func Offset: 0x144
	// Line 475, Address: 0x127d48, Func Offset: 0x148
	// Line 480, Address: 0x127d50, Func Offset: 0x150
	// Func End, Address: 0x127d70, Func Offset: 0x170
}

// skyFwrite__FPCvUiUiPv
// Start address: 0x127d70
uint32 skyFwrite(void* addr, uint32 size, uint32 count, void* fptr)
{
	int32 numBytesToWrite;
	skyFile* fp;
	int32 bytesWritten;
	// Line 393, Address: 0x127d70, Func Offset: 0
	// Line 396, Address: 0x127d8c, Func Offset: 0x1c
	// Line 398, Address: 0x127d94, Func Offset: 0x24
	// Line 399, Address: 0x127db4, Func Offset: 0x44
	// Line 401, Address: 0x127dd0, Func Offset: 0x60
	// Line 403, Address: 0x127de0, Func Offset: 0x70
	// Line 405, Address: 0x127dec, Func Offset: 0x7c
	// Line 406, Address: 0x127df8, Func Offset: 0x88
	// Line 407, Address: 0x127e0c, Func Offset: 0x9c
	// Line 408, Address: 0x127e10, Func Offset: 0xa0
	// Line 411, Address: 0x127e28, Func Offset: 0xb8
	// Func End, Address: 0x127e44, Func Offset: 0xd4
}

// skyFread__FPvUiUiPv
// Start address: 0x127e50
uint32 skyFread(void* addr, uint32 size, uint32 count, void* fptr)
{
	int32 bytesRead2;
	int32 bytesRead;
	uint32 numBytesToRead;
	skyFile* fp;
	// Line 317, Address: 0x127e50, Func Offset: 0
	// Line 325, Address: 0x127e74, Func Offset: 0x24
	// Line 319, Address: 0x127e78, Func Offset: 0x28
	// Line 325, Address: 0x127e7c, Func Offset: 0x2c
	// Line 318, Address: 0x127e80, Func Offset: 0x30
	// Line 325, Address: 0x127e84, Func Offset: 0x34
	// Line 327, Address: 0x127e94, Func Offset: 0x44
	// Line 331, Address: 0x127e98, Func Offset: 0x48
	// Line 335, Address: 0x127eb4, Func Offset: 0x64
	// Line 338, Address: 0x127ec4, Func Offset: 0x74
	// Line 347, Address: 0x127ec8, Func Offset: 0x78
	// Line 351, Address: 0x127edc, Func Offset: 0x8c
	// Line 350, Address: 0x127ee0, Func Offset: 0x90
	// Line 351, Address: 0x127ee4, Func Offset: 0x94
	// Line 352, Address: 0x127eec, Func Offset: 0x9c
	// Line 358, Address: 0x127ef8, Func Offset: 0xa8
	// Line 360, Address: 0x127f04, Func Offset: 0xb4
	// Line 363, Address: 0x127f10, Func Offset: 0xc0
	// Line 364, Address: 0x127f20, Func Offset: 0xd0
	// Line 368, Address: 0x127f28, Func Offset: 0xd8
	// Line 372, Address: 0x127f30, Func Offset: 0xe0
	// Line 373, Address: 0x127f40, Func Offset: 0xf0
	// Line 374, Address: 0x127f44, Func Offset: 0xf4
	// Line 375, Address: 0x127f54, Func Offset: 0x104
	// Line 377, Address: 0x127f58, Func Offset: 0x108
	// Line 378, Address: 0x127f5c, Func Offset: 0x10c
	// Line 377, Address: 0x127f60, Func Offset: 0x110
	// Line 381, Address: 0x127f68, Func Offset: 0x118
	// Line 382, Address: 0x127f6c, Func Offset: 0x11c
	// Line 381, Address: 0x127f84, Func Offset: 0x134
	// Line 382, Address: 0x127f88, Func Offset: 0x138
	// Func End, Address: 0x127f90, Func Offset: 0x140
}

// skyFexist__FPCc
// Start address: 0x127f90
int32 skyFexist(int8* name)
{
	void* res;
	// Line 295, Address: 0x127f90, Func Offset: 0
	// Line 298, Address: 0x127f9c, Func Offset: 0xc
	// Line 299, Address: 0x127fbc, Func Offset: 0x2c
	// Line 301, Address: 0x127fc4, Func Offset: 0x34
	// Line 302, Address: 0x127fd8, Func Offset: 0x48
	// Line 306, Address: 0x127fdc, Func Offset: 0x4c
	// Func End, Address: 0x127fec, Func Offset: 0x5c
}

// skyFclose__FPv
// Start address: 0x127ff0
int32 skyFclose(void* fptr)
{
	skyFile* fp;
	// Line 267, Address: 0x127ff0, Func Offset: 0
	// Line 270, Address: 0x128000, Func Offset: 0x10
	// Line 272, Address: 0x128020, Func Offset: 0x30
	// Line 274, Address: 0x12803c, Func Offset: 0x4c
	// Line 276, Address: 0x128044, Func Offset: 0x54
	// Line 278, Address: 0x128064, Func Offset: 0x74
	// Line 280, Address: 0x128068, Func Offset: 0x78
	// Line 278, Address: 0x12806c, Func Offset: 0x7c
	// Line 280, Address: 0x128070, Func Offset: 0x80
	// Line 283, Address: 0x128078, Func Offset: 0x88
	// Line 284, Address: 0x12807c, Func Offset: 0x8c
	// Func End, Address: 0x128090, Func Offset: 0xa0
}

// skyFopen__FPCcPCc
// Start address: 0x128090
void* skyFopen(int8* name, int8* access)
{
	void* res;
	// Line 245, Address: 0x128090, Func Offset: 0
	// Line 248, Address: 0x128098, Func Offset: 0x8
	// Line 252, Address: 0x1280a0, Func Offset: 0x10
	// Line 256, Address: 0x1280a8, Func Offset: 0x18
	// Func End, Address: 0x1280b4, Func Offset: 0x24
}

// trySkyFopen__FPCcPCc
// Start address: 0x1280c0
void* trySkyFopen(int8* fname, int8* access)
{
	int8* nameptr;
	int8 name[256];
	int32 mode;
	skyFile* fp;
	// Line 141, Address: 0x1280c0, Func Offset: 0
	// Line 148, Address: 0x1280e0, Func Offset: 0x20
	// Line 150, Address: 0x1280f0, Func Offset: 0x30
	// Line 151, Address: 0x128100, Func Offset: 0x40
	// Line 155, Address: 0x128108, Func Offset: 0x48
	// Line 160, Address: 0x128120, Func Offset: 0x60
	// Line 162, Address: 0x128138, Func Offset: 0x78
	// Line 164, Address: 0x128148, Func Offset: 0x88
	// Line 171, Address: 0x128154, Func Offset: 0x94
	// Line 173, Address: 0x128158, Func Offset: 0x98
	// Line 174, Address: 0x12815c, Func Offset: 0x9c
	// Line 177, Address: 0x128168, Func Offset: 0xa8
	// Line 178, Address: 0x128170, Func Offset: 0xb0
	// Line 183, Address: 0x128178, Func Offset: 0xb8
	// Line 184, Address: 0x12817c, Func Offset: 0xbc
	// Line 187, Address: 0x12818c, Func Offset: 0xcc
	// Line 188, Address: 0x1281b4, Func Offset: 0xf4
	// Line 190, Address: 0x1281bc, Func Offset: 0xfc
	// Line 193, Address: 0x1281c4, Func Offset: 0x104
	// Line 194, Address: 0x1281d0, Func Offset: 0x110
	// Line 196, Address: 0x1281d8, Func Offset: 0x118
	// Line 199, Address: 0x1281e0, Func Offset: 0x120
	// Line 201, Address: 0x1281ec, Func Offset: 0x12c
	// Line 203, Address: 0x1281f8, Func Offset: 0x138
	// Line 204, Address: 0x128210, Func Offset: 0x150
	// Line 208, Address: 0x128218, Func Offset: 0x158
	// Line 209, Address: 0x128228, Func Offset: 0x168
	// Line 211, Address: 0x128234, Func Offset: 0x174
	// Line 212, Address: 0x12823c, Func Offset: 0x17c
	// Line 213, Address: 0x128254, Func Offset: 0x194
	// Line 216, Address: 0x12825c, Func Offset: 0x19c
	// Line 218, Address: 0x12826c, Func Offset: 0x1ac
	// Line 220, Address: 0x128280, Func Offset: 0x1c0
	// Line 222, Address: 0x12828c, Func Offset: 0x1cc
	// Line 223, Address: 0x128294, Func Offset: 0x1d4
	// Line 224, Address: 0x1282ac, Func Offset: 0x1ec
	// Line 229, Address: 0x1282b4, Func Offset: 0x1f4
	// Line 231, Address: 0x1282bc, Func Offset: 0x1fc
	// Line 233, Address: 0x1282c0, Func Offset: 0x200
	// Line 231, Address: 0x1282c4, Func Offset: 0x204
	// Line 234, Address: 0x1282cc, Func Offset: 0x20c
	// Func End, Address: 0x1282e8, Func Offset: 0x228
}

// skyTransMode__FPCc
// Start address: 0x1282f0
int32 skyTransMode(int8* access)
{
	int8* d;
	int8* n;
	int8* plus;
	int8* a;
	int8* w;
	int8* r;
	int32 mode;
	// Line 83, Address: 0x1282f0, Func Offset: 0
	// Line 96, Address: 0x12830c, Func Offset: 0x1c
	// Line 97, Address: 0x12831c, Func Offset: 0x2c
	// Line 98, Address: 0x12832c, Func Offset: 0x3c
	// Line 99, Address: 0x12833c, Func Offset: 0x4c
	// Line 100, Address: 0x12834c, Func Offset: 0x5c
	// Line 101, Address: 0x128358, Func Offset: 0x68
	// Line 100, Address: 0x12835c, Func Offset: 0x6c
	// Line 101, Address: 0x128360, Func Offset: 0x70
	// Line 103, Address: 0x128368, Func Offset: 0x78
	// Line 104, Address: 0x128370, Func Offset: 0x80
	// Line 105, Address: 0x128378, Func Offset: 0x88
	// Line 106, Address: 0x128380, Func Offset: 0x90
	// Line 107, Address: 0x128388, Func Offset: 0x98
	// Line 108, Address: 0x128390, Func Offset: 0xa0
	// Line 109, Address: 0x128398, Func Offset: 0xa8
	// Line 110, Address: 0x1283a0, Func Offset: 0xb0
	// Line 112, Address: 0x1283a8, Func Offset: 0xb8
	// Line 115, Address: 0x1283b0, Func Offset: 0xc0
	// Line 116, Address: 0x1283b8, Func Offset: 0xc8
	// Line 118, Address: 0x1283bc, Func Offset: 0xcc
	// Line 119, Address: 0x1283c4, Func Offset: 0xd4
	// Line 121, Address: 0x1283c8, Func Offset: 0xd8
	// Line 122, Address: 0x1283d0, Func Offset: 0xe0
	// Line 124, Address: 0x1283d4, Func Offset: 0xe4
	// Line 125, Address: 0x1283dc, Func Offset: 0xec
	// Line 127, Address: 0x1283e4, Func Offset: 0xf4
	// Line 128, Address: 0x1283e8, Func Offset: 0xf8
	// Func End, Address: 0x128408, Func Offset: 0x118
}

