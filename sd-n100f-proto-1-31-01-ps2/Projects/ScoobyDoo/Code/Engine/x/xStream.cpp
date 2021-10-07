typedef struct XStream;
typedef struct tagXStreamMDSDirectory;
typedef struct XStreamHeader;
typedef struct tagXStreamDirectoryEntry;

typedef void(*type_1)(XStream*);
typedef void(*type_4)(XStream*);

typedef tagXStreamDirectoryEntry type_0[1000];
typedef int8 type_2[2048];
typedef void(*type_3)(XStream*)[36];
typedef int8 type_5[128];

struct XStream
{
	uint32 id;
	int32 currentOffset;
	uint32* data;
	uint32 length;
	uint32 offset;
	uint32 done;
	uint32 assetID;
	tagXStreamDirectoryEntry* dir;
	uint32 count;
	uint32 index;
};

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

int32 streamOpen;
int32 headerUpdated;
uint32 currentID;
XStreamHeader currentHeader;
void(*initTable)(XStream*)[36];
int8 vAssertBuf2[128];
void(*xStreamReadNextAsset)(XStream*);

void xStreamBlock(XStream* stream);
void xStreamBeginReadMDS(XStream* stream);
void xStreamReadNextAsset(XStream* stream);
void xStreamReadHeader(XStream* stream);
void xStreamSeek(XStream* stream);

// xStreamBlock__FP7XStream
// Start address: 0x32eda0
void xStreamBlock(XStream* stream)
{
	// Line 199, Address: 0x32eda0, Func Offset: 0
	// Line 200, Address: 0x32edb0, Func Offset: 0x10
	// Line 201, Address: 0x32ee54, Func Offset: 0xb4
	// Line 203, Address: 0x32eefc, Func Offset: 0x15c
	// Line 205, Address: 0x32ef08, Func Offset: 0x168
	// Line 206, Address: 0x32ef14, Func Offset: 0x174
	// Func End, Address: 0x32ef28, Func Offset: 0x188
}

// xStreamBeginReadMDS__FP7XStream
// Start address: 0x32ef30
void xStreamBeginReadMDS(XStream* stream)
{
	// Line 173, Address: 0x32ef30, Func Offset: 0
	// Line 174, Address: 0x32ef40, Func Offset: 0x10
	// Line 175, Address: 0x32efe4, Func Offset: 0xb4
	// Line 177, Address: 0x32f08c, Func Offset: 0x15c
	// Line 183, Address: 0x32f094, Func Offset: 0x164
	// Line 185, Address: 0x32f0a8, Func Offset: 0x178
	// Func End, Address: 0x32f0bc, Func Offset: 0x18c
}

// xStreamReadNextAsset__FP7XStream
// Start address: 0x32f0c0
void xStreamReadNextAsset(XStream* stream)
{
	int32 type;
	// Line 105, Address: 0x32f0c0, Func Offset: 0
	// Line 108, Address: 0x32f0d0, Func Offset: 0x10
	// Line 110, Address: 0x32f0e0, Func Offset: 0x20
	// Line 111, Address: 0x32f0ec, Func Offset: 0x2c
	// Line 117, Address: 0x32f0f8, Func Offset: 0x38
	// Line 120, Address: 0x32f100, Func Offset: 0x40
	// Line 125, Address: 0x32f10c, Func Offset: 0x4c
	// Line 129, Address: 0x32f128, Func Offset: 0x68
	// Line 133, Address: 0x32f148, Func Offset: 0x88
	// Line 139, Address: 0x32f150, Func Offset: 0x90
	// Line 144, Address: 0x32f15c, Func Offset: 0x9c
	// Line 147, Address: 0x32f170, Func Offset: 0xb0
	// Line 149, Address: 0x32f188, Func Offset: 0xc8
	// Line 156, Address: 0x32f1a0, Func Offset: 0xe0
	// Line 158, Address: 0x32f1a4, Func Offset: 0xe4
	// Func End, Address: 0x32f1b8, Func Offset: 0xf8
}

// xStreamReadHeader__FP7XStream
// Start address: 0x32f1c0
void xStreamReadHeader(XStream* stream)
{
	// Line 96, Address: 0x32f1c0, Func Offset: 0
	// Line 97, Address: 0x32f1d0, Func Offset: 0x10
	// Line 98, Address: 0x32f274, Func Offset: 0xb4
	// Line 100, Address: 0x32f31c, Func Offset: 0x15c
	// Line 101, Address: 0x32f328, Func Offset: 0x168
	// Func End, Address: 0x32f33c, Func Offset: 0x17c
}

// xStreamSeek__FP7XStream
// Start address: 0x32f340
void xStreamSeek(XStream* stream)
{
	// Line 85, Address: 0x32f340, Func Offset: 0
	// Line 86, Address: 0x32f350, Func Offset: 0x10
	// Line 88, Address: 0x32f360, Func Offset: 0x20
	// Line 89, Address: 0x32f368, Func Offset: 0x28
	// Line 90, Address: 0x32f36c, Func Offset: 0x2c
	// Line 91, Address: 0x32f374, Func Offset: 0x34
	// Func End, Address: 0x32f388, Func Offset: 0x48
}

