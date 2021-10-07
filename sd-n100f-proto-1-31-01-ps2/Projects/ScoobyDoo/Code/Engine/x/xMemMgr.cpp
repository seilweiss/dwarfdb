typedef struct tagXStreamMDSDirectory;
typedef struct XStreamHeader;
typedef struct tagXStreamDirectoryEntry;


typedef uint32 type_0[1396334];
typedef tagXStreamDirectoryEntry type_1[1000];
typedef uint32* type_2[20000];
typedef uint32 type_3[20256];
typedef int8 type_4[2048];
typedef uint32* type_5[20000];
typedef int8 type_6[128];
typedef uint32 type_7[20256];
typedef uint32* type_8[20000];

struct tagXStreamMDSDirectory
{
	uint32 count;
	tagXStreamDirectoryEntry directory[1000];
};

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

struct tagXStreamDirectoryEntry
{
	uint32 id;
	uint32 type;
	uint32 offset;
	uint32 length;
};

uint32 l_staticPoolBuffer[1396334];
uint32 l_levelPoolBuffer[20256];
uint32 l_preloadPoolBuffer[20256];
uint8* l_staticPool;
uint8* l_levelPool;
uint8* l_preloadPool;
int32 l_amInitialized;
int32 l_tempIsLocked;
uint32 l_staticPoolSize;
uint32 l_levelPoolSize;
uint32 l_preloadPoolSize;
uint32 l_currentStaticUsed;
uint32 l_currentLevelUsed;
uint32 l_currentPreloadUsed;
uint32 l_currentTempUsed;
uint8* xMemCurrentStaticPointer;
uint32 xMemCurrentStaticPointerLocked;
uint8* xMemCurrentLevelPointer;
uint32 xMemCurrentLevelPointerLocked;
uint8* xMemCurrentPreloadPointer;
uint32 xMemCurrentPreloadPointerLocked;
uint32 l_levelResetStaticUsed;
uint8* l_levelResetStaticPointer;
uint32* l_debugStaticBlockMap[20000];
uint32 l_debugStaticBlockMapUsed;
uint32* l_debugLevelBlockMap[20000];
uint32 l_debugLevelBlockMapUsed;
uint32* l_debugPreloadBlockMap[20000];
uint32 l_debugPreloadBlockMapUsed;
uint32 l_debugStaticLevelResetBlockUsed;
int32 lastId;
int32 currentIdSize;
int8 vAssertBuf2[128];
XStreamHeader currentHeader;

void MEMCheckIntegrity();
void memRecordRequest(uint32 id, uint32 count, uint32 size, int8* file, uint32 line);
void MEMUnlockTempMemory();
void* MEMLockTempMemory(uint32 count, uint32 size);
uint8* MEMStaticMemoryLevelReset();
void MEMStaticMemorySetLevelReset();
void* MEMGetStaticMemory(uint32 count, uint32 size, int8* file, uint32 line);
int16 MEMReset();
int16 MEMInit();

// MEMCheckIntegrity__Fv
// Start address: 0x357ad0
void MEMCheckIntegrity()
{
	uint32 i;
	// Line 991, Address: 0x357ad0, Func Offset: 0
	// Line 994, Address: 0x357adc, Func Offset: 0xc
	// Line 995, Address: 0x357ae8, Func Offset: 0x18
	// Line 996, Address: 0x357ba8, Func Offset: 0xd8
	// Line 997, Address: 0x357bc0, Func Offset: 0xf0
	// Line 998, Address: 0x357bcc, Func Offset: 0xfc
	// Line 999, Address: 0x357c90, Func Offset: 0x1c0
	// Line 1000, Address: 0x357ca8, Func Offset: 0x1d8
	// Line 1001, Address: 0x357cb4, Func Offset: 0x1e4
	// Line 1002, Address: 0x357d78, Func Offset: 0x2a8
	// Line 1003, Address: 0x357d90, Func Offset: 0x2c0
	// Func End, Address: 0x357da4, Func Offset: 0x2d4
}

// memRecordRequest__FUiUiUiPCcUi
// Start address: 0x357db0
void memRecordRequest(uint32 id, uint32 count, uint32 size, int8* file, uint32 line)
{
	// Line 901, Address: 0x357db0, Func Offset: 0
	// Line 926, Address: 0x357dd0, Func Offset: 0x20
	// Line 928, Address: 0x357dec, Func Offset: 0x3c
	// Line 930, Address: 0x357e08, Func Offset: 0x58
	// Line 931, Address: 0x357e0c, Func Offset: 0x5c
	// Line 932, Address: 0x357e14, Func Offset: 0x64
	// Line 934, Address: 0x357e1c, Func Offset: 0x6c
	// Line 935, Address: 0x357e20, Func Offset: 0x70
	// Line 937, Address: 0x357e30, Func Offset: 0x80
	// Func End, Address: 0x357e4c, Func Offset: 0x9c
}

// MEMUnlockTempMemory__Fv
// Start address: 0x357e50
void MEMUnlockTempMemory()
{
	// Line 866, Address: 0x357e50, Func Offset: 0
	// Line 869, Address: 0x357e58, Func Offset: 0x8
	// Line 870, Address: 0x357efc, Func Offset: 0xac
	// Line 874, Address: 0x357fa0, Func Offset: 0x150
	// Line 875, Address: 0x357fa4, Func Offset: 0x154
	// Line 876, Address: 0x357fb4, Func Offset: 0x164
	// Line 877, Address: 0x357fb8, Func Offset: 0x168
	// Func End, Address: 0x357fc8, Func Offset: 0x178
}

// MEMLockTempMemory__FUiUiPCcUi
// Start address: 0x357fd0
void* MEMLockTempMemory(uint32 count, uint32 size)
{
	int32 over;
	int32 offset;
	uint8* base;
	uint32 sizeToAlloc;
	void* retVal;
	// Line 790, Address: 0x357fd0, Func Offset: 0
	// Line 799, Address: 0x357fdc, Func Offset: 0xc
	// Line 800, Address: 0x357fe0, Func Offset: 0x10
	// Line 801, Address: 0x357ff4, Func Offset: 0x24
	// Line 806, Address: 0x358004, Func Offset: 0x34
	// Line 807, Address: 0x3580a8, Func Offset: 0xd8
	// Line 815, Address: 0x35814c, Func Offset: 0x17c
	// Line 816, Address: 0x358164, Func Offset: 0x194
	// Line 817, Address: 0x358174, Func Offset: 0x1a4
	// Line 823, Address: 0x358198, Func Offset: 0x1c8
	// Line 827, Address: 0x358248, Func Offset: 0x278
	// Line 835, Address: 0x358250, Func Offset: 0x280
	// Line 836, Address: 0x358258, Func Offset: 0x288
	// Line 838, Address: 0x358260, Func Offset: 0x290
	// Line 840, Address: 0x358264, Func Offset: 0x294
	// Line 841, Address: 0x358270, Func Offset: 0x2a0
	// Line 846, Address: 0x358274, Func Offset: 0x2a4
	// Func End, Address: 0x358288, Func Offset: 0x2b8
}

// MEMStaticMemoryLevelReset__Fv
// Start address: 0x358290
uint8* MEMStaticMemoryLevelReset()
{
	uint32* end;
	uint32* clear;
	// Line 519, Address: 0x358290, Func Offset: 0
	// Line 521, Address: 0x358294, Func Offset: 0x4
	// Line 522, Address: 0x35829c, Func Offset: 0xc
	// Line 524, Address: 0x3582a4, Func Offset: 0x14
	// Line 526, Address: 0x3582b0, Func Offset: 0x20
	// Line 527, Address: 0x3582bc, Func Offset: 0x2c
	// Line 529, Address: 0x3582cc, Func Offset: 0x3c
	// Line 531, Address: 0x3582d4, Func Offset: 0x44
	// Line 532, Address: 0x3582d8, Func Offset: 0x48
	// Func End, Address: 0x3582e0, Func Offset: 0x50
}

// MEMStaticMemorySetLevelReset__Fv
// Start address: 0x3582e0
void MEMStaticMemorySetLevelReset()
{
	// Line 492, Address: 0x3582e0, Func Offset: 0
	// Line 493, Address: 0x3582e8, Func Offset: 0x8
	// Line 494, Address: 0x3582f0, Func Offset: 0x10
	// Line 495, Address: 0x3582f8, Func Offset: 0x18
	// Func End, Address: 0x358300, Func Offset: 0x20
}

// MEMGetStaticMemory__FUiUiUiPCcUi
// Start address: 0x358300
void* MEMGetStaticMemory(uint32 count, uint32 size, int8* file, uint32 line)
{
	uint32 i;
	uint8* p;
	int32 total;
	void* retValue;
	// Line 371, Address: 0x358300, Func Offset: 0
	// Line 379, Address: 0x358320, Func Offset: 0x20
	// Line 380, Address: 0x358324, Func Offset: 0x24
	// Line 381, Address: 0x358344, Func Offset: 0x44
	// Line 396, Address: 0x358368, Func Offset: 0x68
	// Line 398, Address: 0x358380, Func Offset: 0x80
	// Line 400, Address: 0x358398, Func Offset: 0x98
	// Line 403, Address: 0x3583b0, Func Offset: 0xb0
	// Line 405, Address: 0x35840c, Func Offset: 0x10c
	// Line 411, Address: 0x3584bc, Func Offset: 0x1bc
	// Line 412, Address: 0x3584c0, Func Offset: 0x1c0
	// Line 413, Address: 0x3584cc, Func Offset: 0x1cc
	// Line 417, Address: 0x3584d8, Func Offset: 0x1d8
	// Line 422, Address: 0x3585c4, Func Offset: 0x2c4
	// Line 423, Address: 0x3585c8, Func Offset: 0x2c8
	// Line 425, Address: 0x3585d4, Func Offset: 0x2d4
	// Line 426, Address: 0x3585dc, Func Offset: 0x2dc
	// Line 427, Address: 0x3585f0, Func Offset: 0x2f0
	// Line 428, Address: 0x3585f4, Func Offset: 0x2f4
	// Func End, Address: 0x358614, Func Offset: 0x314
}

// MEMReset__Fv
// Start address: 0x358620
int16 MEMReset()
{
	// Line 233, Address: 0x358620, Func Offset: 0
	// Line 234, Address: 0x358634, Func Offset: 0x14
	// Line 235, Address: 0x358648, Func Offset: 0x28
	// Line 249, Address: 0x35865c, Func Offset: 0x3c
	// Line 250, Address: 0x358660, Func Offset: 0x40
	// Func End, Address: 0x358668, Func Offset: 0x48
}

// MEMInit__Fv
// Start address: 0x358670
int16 MEMInit()
{
	// Line 189, Address: 0x358670, Func Offset: 0
	// Line 190, Address: 0x35867c, Func Offset: 0xc
	// Line 191, Address: 0x358688, Func Offset: 0x18
	// Line 196, Address: 0x358694, Func Offset: 0x24
	// Line 197, Address: 0x3586a0, Func Offset: 0x30
	// Line 198, Address: 0x3586a8, Func Offset: 0x38
	// Line 200, Address: 0x3586b0, Func Offset: 0x40
	// Line 201, Address: 0x3586b4, Func Offset: 0x44
	// Line 205, Address: 0x3586bc, Func Offset: 0x4c
	// Line 209, Address: 0x3586f8, Func Offset: 0x88
	// Line 210, Address: 0x3586fc, Func Offset: 0x8c
	// Func End, Address: 0x358704, Func Offset: 0x94
}

