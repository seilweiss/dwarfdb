typedef struct iActionRuntime;
typedef struct tagXStreamMDSDirectory;
typedef struct xAction;
typedef struct iActionResource;
typedef struct XStreamHeader;
typedef struct tagXStreamDirectoryEntry;


typedef tagXStreamDirectoryEntry type_0[1000];
typedef int8 type_1[2048];
typedef int8 type_2[128];

struct iActionRuntime
{
	xAction* m_and;
};

struct tagXStreamMDSDirectory
{
	uint32 count;
	tagXStreamDirectoryEntry directory[1000];
};

struct xAction
{
	iActionResource* m_resource;
	iActionRuntime* m_runtime;
};

struct iActionResource
{
	uint8 m_cmdType;
	uint8 m_cmd;
	uint16 pad;
	uint32 m_cmdParameter;
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

int32 scriptSoundLoadIndex;
int32 gGameState;
int8 vAssertBuf2[128];
XStreamHeader currentHeader;

void xActionExecute(xAction* a);
void xActionReInitializeInterpreter();

// xActionExecute__FP7xAction
// Start address: 0x36aed0
void xActionExecute(xAction* a)
{
	iActionResource* r;
	// Line 50, Address: 0x36aed0, Func Offset: 0
	// Line 53, Address: 0x36aee0, Func Offset: 0x10
	// Line 54, Address: 0x36af80, Func Offset: 0xb0
	// Line 55, Address: 0x36af84, Func Offset: 0xb4
	// Line 57, Address: 0x36b024, Func Offset: 0x154
	// Line 60, Address: 0x36b050, Func Offset: 0x180
	// Line 82, Address: 0x36b070, Func Offset: 0x1a0
	// Line 84, Address: 0x36b080, Func Offset: 0x1b0
	// Line 95, Address: 0x36b090, Func Offset: 0x1c0
	// Line 98, Address: 0x36b098, Func Offset: 0x1c8
	// Line 102, Address: 0x36b0b8, Func Offset: 0x1e8
	// Line 103, Address: 0x36b0cc, Func Offset: 0x1fc
	// Line 105, Address: 0x36b0dc, Func Offset: 0x20c
	// Line 109, Address: 0x36b0e4, Func Offset: 0x214
	// Line 110, Address: 0x36b0f8, Func Offset: 0x228
	// Line 114, Address: 0x36b108, Func Offset: 0x238
	// Line 117, Address: 0x36b110, Func Offset: 0x240
	// Line 127, Address: 0x36b148, Func Offset: 0x278
	// Line 131, Address: 0x36b160, Func Offset: 0x290
	// Line 133, Address: 0x36b16c, Func Offset: 0x29c
	// Line 136, Address: 0x36b18c, Func Offset: 0x2bc
	// Line 143, Address: 0x36b1a8, Func Offset: 0x2d8
	// Line 146, Address: 0x36b1b0, Func Offset: 0x2e0
	// Line 150, Address: 0x36b1c4, Func Offset: 0x2f4
	// Line 152, Address: 0x36b1d0, Func Offset: 0x300
	// Line 155, Address: 0x36b1f0, Func Offset: 0x320
	// Line 164, Address: 0x36b20c, Func Offset: 0x33c
	// Line 183, Address: 0x36b214, Func Offset: 0x344
	// Line 186, Address: 0x36b234, Func Offset: 0x364
	// Line 187, Address: 0x36b244, Func Offset: 0x374
	// Line 190, Address: 0x36b24c, Func Offset: 0x37c
	// Line 207, Address: 0x36b25c, Func Offset: 0x38c
	// Func End, Address: 0x36b270, Func Offset: 0x3a0
}

// xActionReInitializeInterpreter__Fv
// Start address: 0x36b270
void xActionReInitializeInterpreter()
{
	// Line 34, Address: 0x36b270, Func Offset: 0
	// Line 35, Address: 0x36b274, Func Offset: 0x4
	// Func End, Address: 0x36b27c, Func Offset: 0xc
}

