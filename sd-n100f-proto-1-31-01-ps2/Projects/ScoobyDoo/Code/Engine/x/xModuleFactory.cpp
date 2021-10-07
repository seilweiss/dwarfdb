typedef struct __vector_pod;
typedef struct compressed_pair;
typedef struct tagXStreamMDSDirectory;
typedef struct xModule;
typedef struct compressed_pair_imp;
typedef struct allocator;
typedef struct XStreamHeader;
typedef struct _anon0;
typedef struct _anon1;
typedef struct tagXStreamDirectoryEntry;


typedef tagXStreamDirectoryEntry type_0[1000];
typedef int8 type_1[32];
typedef int8 type_2[2048];
typedef int8 type_3[128];

struct __vector_pod
{
	compressed_pair capacity_;
	uint32 size_;
	uint32* data_;

	void* __ct();
};

struct compressed_pair : compressed_pair_imp
{
};

struct tagXStreamMDSDirectory
{
	uint32 count;
	tagXStreamDirectoryEntry directory[1000];
};

struct xModule
{
	int32 m_type;
	int8 m_name[32];
	int32 m_init;
	int32 m_state;

	void scriptRegister();
	xModule* instance();
	void render();
};

struct compressed_pair_imp : allocator
{
	uint32 second_;
};

struct allocator
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

struct _anon0
{
};

struct _anon1
{
};

struct tagXStreamDirectoryEntry
{
	uint32 id;
	uint32 type;
	uint32 offset;
	uint32 length;
};

int8 vAssertBuf2[128];
XStreamHeader currentHeader;
_anon1 __vt__8xAnimMgr;
_anon0 __vt__7xModule;

xModule* create(int32 type);

// create__14xModuleFactoryFi
// Start address: 0x3a5b00
xModule* create(int32 type)
{
	xModule* m;
	// Line 19, Address: 0x3a5b00, Func Offset: 0
	// Line 21, Address: 0x3a5b0c, Func Offset: 0xc
	// Line 23, Address: 0x3a5b10, Func Offset: 0x10
	// Line 26, Address: 0x3a5b30, Func Offset: 0x30
	// Line 27, Address: 0x3a5b54, Func Offset: 0x54
	// Line 28, Address: 0x3a5bf4, Func Offset: 0xf4
	// Line 29, Address: 0x3a5c08, Func Offset: 0x108
	// Line 32, Address: 0x3a5c10, Func Offset: 0x110
	// Line 33, Address: 0x3a5c88, Func Offset: 0x188
	// Line 34, Address: 0x3a5d28, Func Offset: 0x228
	// Line 35, Address: 0x3a5d3c, Func Offset: 0x23c
	// Line 38, Address: 0x3a5d44, Func Offset: 0x244
	// Line 43, Address: 0x3a5ddc, Func Offset: 0x2dc
	// Line 44, Address: 0x3a5de0, Func Offset: 0x2e0
	// Func End, Address: 0x3a5df4, Func Offset: 0x2f4
}

