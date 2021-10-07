typedef struct tagxCartControl;
typedef struct XStreamHeader;
typedef enum p2CartActions;
typedef struct tagXStreamDirectoryEntry;
typedef enum p2CartStatus;
typedef struct tagiCartControl;
typedef struct tagXStreamMDSDirectory;


typedef tagXStreamDirectoryEntry type_0[1000];
typedef uint8 type_1[12];
typedef uint8 type_2[32];
typedef int8 type_3[2048];
typedef int8* type_4[8];
typedef int8 type_5[128];
typedef int8 type_6[32];
typedef int32 type_7[8];
typedef int8 type_8[16];
typedef int8 type_9[16][24];
typedef int8 type_10[36];
typedef int8 type_11[36][24];
typedef int8 type_12[16];
typedef uint8 type_13[16384];

struct tagxCartControl
{
	uint8 state;
	uint8 cart;
	uint8 slot;
	uint8 done;
	uint8 ok;
	uint8 wrongDisk;
	uint8 formatError;
	uint8 pad;
	uint8 saveID[12];
	uint8 description[32];
	tagiCartControl platform;
	uint8* dataBuffer;
	uint8* compressionBuffer;
	uint16 dataBufferSize;
	uint16 compressionBufferSize;
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

enum p2CartActions
{
	I_CART_IDLE,
	I_CART_WRITE,
	I_CART_READ,
	I_CART_FORMAT
};

struct tagXStreamDirectoryEntry
{
	uint32 id;
	uint32 type;
	uint32 offset;
	uint32 length;
};

enum p2CartStatus
{
	I_CART_WRITE_BEGIN,
	I_CART_WRITE_WRITE,
	I_CART_WRITE_END,
	I_CART_READ_BEGIN,
	I_CART_READ_READ,
	I_CART_READ_END
};

struct tagiCartControl
{
	int32 port;
	p2CartActions action;
	p2CartStatus state;
	int32 firstOp;
	int32 retry;
	int8 name[32];
	int32 status[8];
	int32 count;
	int8 names[16][24];
	int8 descs[36][24];
};

struct tagXStreamMDSDirectory
{
	uint32 count;
	tagXStreamDirectoryEntry directory[1000];
};

uint8 p2CartDataBuffer[16384];
int32 cbDrive;
int32 cbOp;
int32 cbStatus;
uint32 cbParam;
void* gBupBuf;
uint8* sBupWork;
int32 lStatus;
int32 lOp;
int8* msg_01_01[8];
int8* msg_02_01;
tagxCartControl gCartControl;
int8 vAssertBuf2[128];
XStreamHeader currentHeader;

void iCartBeep(int32 flag);
int32 iCartIsCardPresent();
int8* iCartTextFind(int32 assetId);
int32 iCartFormat();
int32 iCartCountValidCardSlots();
int32 iCartSetSlot(int32 slot);
int32 iCartCheckValidSlot();
int32 iCartGetSlotTime(int32 slot);
int32 iCartGetCardFreeBlocks();
void iCartDelete();
void iCartSlotInfo();
uint8* iCartGetCompressionBuffer(uint16* size);
uint8* iCartGetDataBuffer(uint16* size);
void iCartWrite();
void iCartRead();
int32 iCartAppendHeader();
void iCartSetDescription(uint8* desc);
int32 iCartGetHeaderSize();
int32 iCartOpen();
int32 iCartCountValidSlots();
void iCartIdle();
void iCartRefresh();
int32 iCartAccessCard();
void iCartEnd();
void iCartBegin();

// iCartBeep__Fi
// Start address: 0x38a800
void iCartBeep(int32 flag)
{
	int32 beepActive;
	int8 init;
	// Line 1247, Address: 0x38a800, Func Offset: 0
	// Line 1255, Address: 0x38a818, Func Offset: 0x18
	// Line 1258, Address: 0x38a82c, Func Offset: 0x2c
	// Line 1265, Address: 0x38a834, Func Offset: 0x34
	// Line 1266, Address: 0x38a83c, Func Offset: 0x3c
	// Line 1274, Address: 0x38a844, Func Offset: 0x44
	// Line 1293, Address: 0x38a850, Func Offset: 0x50
	// Func End, Address: 0x38a858, Func Offset: 0x58
}

// iCartIsCardPresent__Fv
// Start address: 0x38a860
int32 iCartIsCardPresent()
{
	// Line 1235, Address: 0x38a860, Func Offset: 0
	// Line 1236, Address: 0x38a864, Func Offset: 0x4
	// Func End, Address: 0x38a86c, Func Offset: 0xc
}

// iCartTextFind__Fi
// Start address: 0x38a870
int8* iCartTextFind(int32 assetId)
{
	int32 value;
	int32 group;
	// Line 1135, Address: 0x38a870, Func Offset: 0
	// Line 1137, Address: 0x38a884, Func Offset: 0x14
	// Line 1140, Address: 0x38a890, Func Offset: 0x20
	// Line 1141, Address: 0x38a898, Func Offset: 0x28
	// Line 1161, Address: 0x38a89c, Func Offset: 0x2c
	// Line 1164, Address: 0x38a8bc, Func Offset: 0x4c
	// Line 1170, Address: 0x38a8d8, Func Offset: 0x68
	// Line 1176, Address: 0x38a920, Func Offset: 0xb0
	// Line 1177, Address: 0x38a924, Func Offset: 0xb4
	// Func End, Address: 0x38a92c, Func Offset: 0xbc
}

// iCartFormat__Fv
// Start address: 0x38a930
int32 iCartFormat()
{
	int32 cart;
	int32 cmd;
	int32 result;
	int32 retry;
	// Line 1069, Address: 0x38a930, Func Offset: 0
	// Line 1076, Address: 0x38a940, Func Offset: 0x10
	// Line 1078, Address: 0x38a944, Func Offset: 0x14
	// Line 1080, Address: 0x38a950, Func Offset: 0x20
	// Line 1081, Address: 0x38a968, Func Offset: 0x38
	// Line 1082, Address: 0x38a97c, Func Offset: 0x4c
	// Line 1084, Address: 0x38a988, Func Offset: 0x58
	// Line 1086, Address: 0x38a9a0, Func Offset: 0x70
	// Line 1088, Address: 0x38a9ac, Func Offset: 0x7c
	// Line 1089, Address: 0x38a9b8, Func Offset: 0x88
	// Line 1092, Address: 0x38a9c4, Func Offset: 0x94
	// Line 1093, Address: 0x38a9d0, Func Offset: 0xa0
	// Line 1094, Address: 0x38a9dc, Func Offset: 0xac
	// Line 1095, Address: 0x38a9e4, Func Offset: 0xb4
	// Line 1104, Address: 0x38a9ec, Func Offset: 0xbc
	// Line 1105, Address: 0x38a9f0, Func Offset: 0xc0
	// Func End, Address: 0x38aa08, Func Offset: 0xd8
}

// iCartCountValidCardSlots__Fv
// Start address: 0x38aa10
int32 iCartCountValidCardSlots()
{
	// Line 1057, Address: 0x38aa10, Func Offset: 0
	// Line 1058, Address: 0x38aa14, Func Offset: 0x4
	// Func End, Address: 0x38aa1c, Func Offset: 0xc
}

// iCartSetSlot__Fi
// Start address: 0x38aa20
int32 iCartSetSlot(int32 slot)
{
	// Line 1043, Address: 0x38aa20, Func Offset: 0
	// Line 1044, Address: 0x38aa28, Func Offset: 0x8
	// Line 1045, Address: 0x38aa2c, Func Offset: 0xc
	// Func End, Address: 0x38aa34, Func Offset: 0x14
}

// iCartCheckValidSlot__Fi
// Start address: 0x38aa40
int32 iCartCheckValidSlot()
{
	// Line 1029, Address: 0x38aa40, Func Offset: 0
	// Line 1030, Address: 0x38aa44, Func Offset: 0x4
	// Func End, Address: 0x38aa4c, Func Offset: 0xc
}

// iCartGetSlotTime__Fi
// Start address: 0x38aa50
int32 iCartGetSlotTime(int32 slot)
{
	int32 s;
	int32 m;
	int32 h;
	int32 l;
	int8* src;
	int8 timeStr[16];
	// Line 967, Address: 0x38aa50, Func Offset: 0
	// Line 973, Address: 0x38aa60, Func Offset: 0x10
	// Line 974, Address: 0x38aa7c, Func Offset: 0x2c
	// Line 976, Address: 0x38aa88, Func Offset: 0x38
	// Line 978, Address: 0x38aa9c, Func Offset: 0x4c
	// Line 979, Address: 0x38aaa0, Func Offset: 0x50
	// Line 981, Address: 0x38aaa4, Func Offset: 0x54
	// Line 982, Address: 0x38aab4, Func Offset: 0x64
	// Line 983, Address: 0x38aac4, Func Offset: 0x74
	// Line 985, Address: 0x38aad0, Func Offset: 0x80
	// Line 986, Address: 0x38aaf8, Func Offset: 0xa8
	// Func End, Address: 0x38ab10, Func Offset: 0xc0
}

// iCartGetCardFreeBlocks__Fi
// Start address: 0x38ab10
int32 iCartGetCardFreeBlocks()
{
	int32 bfree;
	// Line 937, Address: 0x38ab10, Func Offset: 0
	// Line 955, Address: 0x38ab14, Func Offset: 0x4
	// Func End, Address: 0x38ab1c, Func Offset: 0xc
}

// iCartDelete__Fi
// Start address: 0x38ab20
void iCartDelete()
{
	// Line 907, Address: 0x38ab20, Func Offset: 0
	// Func End, Address: 0x38ab28, Func Offset: 0x8
}

// iCartSlotInfo__FiiPUc
// Start address: 0x38ab30
void iCartSlotInfo()
{
	// Line 894, Address: 0x38ab30, Func Offset: 0
	// Func End, Address: 0x38ab38, Func Offset: 0x8
}

// iCartGetCompressionBuffer__FPUs
// Start address: 0x38ab40
uint8* iCartGetCompressionBuffer(uint16* size)
{
	// Line 845, Address: 0x38ab40, Func Offset: 0
	// Line 846, Address: 0x38ab48, Func Offset: 0x8
	// Line 847, Address: 0x38ab50, Func Offset: 0x10
	// Func End, Address: 0x38ab58, Func Offset: 0x18
}

// iCartGetDataBuffer__FPUs
// Start address: 0x38ab60
uint8* iCartGetDataBuffer(uint16* size)
{
	// Line 830, Address: 0x38ab60, Func Offset: 0
	// Line 831, Address: 0x38ab68, Func Offset: 0x8
	// Line 832, Address: 0x38ab70, Func Offset: 0x10
	// Func End, Address: 0x38ab78, Func Offset: 0x18
}

// iCartWrite__Fv
// Start address: 0x38ab80
void iCartWrite()
{
	// Line 663, Address: 0x38ab80, Func Offset: 0
	// Line 664, Address: 0x38ab8c, Func Offset: 0xc
	// Line 665, Address: 0x38ab94, Func Offset: 0x14
	// Line 666, Address: 0x38aba0, Func Offset: 0x20
	// Func End, Address: 0x38aba8, Func Offset: 0x28
}

// iCartRead__Fv
// Start address: 0x38abb0
void iCartRead()
{
	// Line 563, Address: 0x38abb0, Func Offset: 0
	// Line 564, Address: 0x38abbc, Func Offset: 0xc
	// Line 565, Address: 0x38abc8, Func Offset: 0x18
	// Line 566, Address: 0x38abd4, Func Offset: 0x24
	// Func End, Address: 0x38abdc, Func Offset: 0x2c
}

// iCartAppendHeader__FPUc
// Start address: 0x38abe0
int32 iCartAppendHeader()
{
	// Line 552, Address: 0x38abe0, Func Offset: 0
	// Line 553, Address: 0x38abe4, Func Offset: 0x4
	// Func End, Address: 0x38abec, Func Offset: 0xc
}

// iCartSetDescription__FPUc
// Start address: 0x38abf0
void iCartSetDescription(uint8* desc)
{
	int32 length;
	// Line 525, Address: 0x38abf0, Func Offset: 0
	// Line 531, Address: 0x38abf8, Func Offset: 0x8
	// Line 532, Address: 0x38ac00, Func Offset: 0x10
	// Line 538, Address: 0x38ac04, Func Offset: 0x14
	// Func End, Address: 0x38ac14, Func Offset: 0x24
}

// iCartGetHeaderSize__Fv
// Start address: 0x38ac20
int32 iCartGetHeaderSize()
{
	// Line 511, Address: 0x38ac20, Func Offset: 0
	// Line 512, Address: 0x38ac24, Func Offset: 0x4
	// Func End, Address: 0x38ac2c, Func Offset: 0xc
}

// iCartOpen__Fv
// Start address: 0x38ac30
int32 iCartOpen()
{
	// Line 495, Address: 0x38ac30, Func Offset: 0
	// Line 496, Address: 0x38ac34, Func Offset: 0x4
	// Line 499, Address: 0x38ac40, Func Offset: 0x10
	// Func End, Address: 0x38ac48, Func Offset: 0x18
}

// iCartCountValidSlots__Fi
// Start address: 0x38ac50
int32 iCartCountValidSlots()
{
	// Line 468, Address: 0x38ac50, Func Offset: 0
	// Line 469, Address: 0x38ac54, Func Offset: 0x4
	// Func End, Address: 0x38ac5c, Func Offset: 0xc
}

// iCartIdle__Fv
// Start address: 0x38ac60
void iCartIdle()
{
	// Line 320, Address: 0x38ac60, Func Offset: 0
	// Line 324, Address: 0x38ac80, Func Offset: 0x20
	// Line 325, Address: 0x38ac88, Func Offset: 0x28
	// Line 331, Address: 0x38ac90, Func Offset: 0x30
	// Line 333, Address: 0x38aca0, Func Offset: 0x40
	// Line 337, Address: 0x38acd4, Func Offset: 0x74
	// Line 338, Address: 0x38ace4, Func Offset: 0x84
	// Line 340, Address: 0x38acec, Func Offset: 0x8c
	// Line 344, Address: 0x38acf4, Func Offset: 0x94
	// Line 345, Address: 0x38ad08, Func Offset: 0xa8
	// Line 356, Address: 0x38ad14, Func Offset: 0xb4
	// Line 400, Address: 0x38ad1c, Func Offset: 0xbc
	// Func End, Address: 0x38ad24, Func Offset: 0xc4
}

// iCartRefresh__Fv
// Start address: 0x38ad30
void iCartRefresh()
{
	// Line 265, Address: 0x38ad30, Func Offset: 0
	// Line 266, Address: 0x38ad3c, Func Offset: 0xc
	// Line 267, Address: 0x38ad48, Func Offset: 0x18
	// Func End, Address: 0x38ad50, Func Offset: 0x20
}

// iCartAccessCard__Fi
// Start address: 0x38ad50
int32 iCartAccessCard()
{
	// Line 192, Address: 0x38ad50, Func Offset: 0
	// Line 193, Address: 0x38ad54, Func Offset: 0x4
	// Func End, Address: 0x38ad5c, Func Offset: 0xc
}

// iCartEnd__Fv
// Start address: 0x38ad60
void iCartEnd()
{
	// Line 136, Address: 0x38ad60, Func Offset: 0
	// Line 148, Address: 0x38ad68, Func Offset: 0x8
	// Line 150, Address: 0x38ad70, Func Offset: 0x10
	// Line 151, Address: 0x38ad78, Func Offset: 0x18
	// Func End, Address: 0x38ad88, Func Offset: 0x28
}

// iCartBegin__Fv
// Start address: 0x38ad90
void iCartBegin()
{
	int32 memneed;
	// Line 110, Address: 0x38ad90, Func Offset: 0
	// Line 114, Address: 0x38ad9c, Func Offset: 0xc
	// Line 119, Address: 0x38adac, Func Offset: 0x1c
	// Line 120, Address: 0x38adcc, Func Offset: 0x3c
	// Line 128, Address: 0x38ae70, Func Offset: 0xe0
	// Func End, Address: 0x38ae84, Func Offset: 0xf4
}

