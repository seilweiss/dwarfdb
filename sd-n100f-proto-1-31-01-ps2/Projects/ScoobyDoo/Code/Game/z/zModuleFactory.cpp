typedef struct xModule;
typedef struct tagXStreamMDSDirectory;
typedef struct _anon0;
typedef struct XStreamHeader;
typedef struct tagXStreamDirectoryEntry;
typedef struct _anon1;


typedef tagXStreamDirectoryEntry type_0[1000];
typedef int8 type_1[32];
typedef int8 type_2[2048];
typedef int8 type_3[128];

struct xModule
{
	int32 m_type;
	int8 m_name[32];
	int32 m_init;
	int32 m_state;
};

struct tagXStreamMDSDirectory
{
	uint32 count;
	tagXStreamDirectoryEntry directory[1000];
};

struct _anon0
{
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

struct _anon1
{
};

int8 vAssertBuf2[128];
XStreamHeader currentHeader;
_anon1 __vt__5zMain;
_anon0 __vt__7xModule;

xModule* create(int32 type);

// create__14zModuleFactoryFi
// Start address: 0x3ed3a0
xModule* create(int32 type)
{
	xModule* m;
	// Line 20, Address: 0x3ed3a0, Func Offset: 0
	// Line 23, Address: 0x3ed3ac, Func Offset: 0xc
	// Line 26, Address: 0x3ed3d8, Func Offset: 0x38
	// Line 27, Address: 0x3ed3fc, Func Offset: 0x5c
	// Line 28, Address: 0x3ed49c, Func Offset: 0xfc
	// Line 29, Address: 0x3ed4b0, Func Offset: 0x110
	// Line 32, Address: 0x3ed4b8, Func Offset: 0x118
	// Line 33, Address: 0x3ed4e8, Func Offset: 0x148
	// Line 34, Address: 0x3ed588, Func Offset: 0x1e8
	// Line 35, Address: 0x3ed59c, Func Offset: 0x1fc
	// Line 38, Address: 0x3ed5a4, Func Offset: 0x204
	// Line 39, Address: 0x3ed5c8, Func Offset: 0x228
	// Line 40, Address: 0x3ed668, Func Offset: 0x2c8
	// Line 41, Address: 0x3ed67c, Func Offset: 0x2dc
	// Line 46, Address: 0x3ed684, Func Offset: 0x2e4
	// Line 47, Address: 0x3ed690, Func Offset: 0x2f0
	// Line 51, Address: 0x3ed730, Func Offset: 0x390
	// Line 52, Address: 0x3ed734, Func Offset: 0x394
	// Func End, Address: 0x3ed748, Func Offset: 0x3a8
}

