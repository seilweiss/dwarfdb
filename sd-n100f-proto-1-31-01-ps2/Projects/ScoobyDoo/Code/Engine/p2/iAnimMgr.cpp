typedef struct tagXStreamMDSDirectory;
typedef struct XStreamHeader;
typedef struct tagXStreamDirectoryEntry;


typedef tagXStreamDirectoryEntry type_0[1000];
typedef int8 type_1[2048];
typedef int8 type_2[128];

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

uint8 SkinPipeInitialized;
int8 vAssertBuf2[128];
XStreamHeader currentHeader;

void iAnimMgrInit();

// iAnimMgrInit__Fv
// Start address: 0x4041b0
void iAnimMgrInit()
{
	uint8 stat;
	// Line 17, Address: 0x4041b0, Func Offset: 0
	// Line 18, Address: 0x4041b8, Func Offset: 0x8
	// Line 20, Address: 0x4041c4, Func Offset: 0x14
	// Line 21, Address: 0x4041d0, Func Offset: 0x20
	// Line 23, Address: 0x404270, Func Offset: 0xc0
	// Func End, Address: 0x404280, Func Offset: 0xd0
}

