typedef struct XStreamHeader;
typedef struct tagFile;
typedef struct tagXStreamDirectoryEntry;
typedef struct tagXStreamMDSDirectory;


typedef int8 type_0[128];
typedef tagXStreamDirectoryEntry type_1[1000];
typedef uint32 type_2[512];
typedef int8 type_3[2048];
typedef int8 type_4[256];
typedef int8 type_5[128];
typedef int8 type_6[51];
typedef uint32 type_7[512];

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

struct tagFile
{
	int8 m_name[256];
	int32 m_state;
	int32 m_desc;
	uint32 m_fpos;
};

struct tagXStreamDirectoryEntry
{
	uint32 id;
	uint32 type;
	uint32 offset;
	uint32 length;
};

struct tagXStreamMDSDirectory
{
	uint32 count;
	tagXStreamDirectoryEntry directory[1000];
};

int8 dbfont_chars[51];
int32 sFileSystemInit;
int8 vAssertBuf2[128];
XStreamHeader currentHeader;

int32 iFileRead(tagFile* f, uint32 numBytes, uint8* buf, uint32* numRead);
int32 iFileClose(tagFile* f);
int32 iFileOpen(tagFile* f);
uint32 iFileGetSize(tagFile* f);
int32 iFileInit(tagFile* f, int8* theName);
int32 iFileSystemShutdown();
int32 iFileSystemInit();

// iFileRead__FP7tagFileUiPUcPUi
// Start address: 0x389fb0
int32 iFileRead(tagFile* f, uint32 numBytes, uint8* buf, uint32* numRead)
{
	uint8* dst_buffer;
	uint32 skip_start_bytes;
	uint32 skip_end_bytes;
	uint32 skip_bytes;
	uint32 seek_loc;
	uint32 count;
	int8 init;
	uint8* sectorBufferU8;
	uint32 sectorBuffer[512];
	// Line 280, Address: 0x389fb0, Func Offset: 0
	// Line 282, Address: 0x389fe0, Func Offset: 0x30
	// Line 283, Address: 0x389fe8, Func Offset: 0x38
	// Line 285, Address: 0x389fec, Func Offset: 0x3c
	// Line 286, Address: 0x38a08c, Func Offset: 0xdc
	// Line 289, Address: 0x38a12c, Func Offset: 0x17c
	// Line 290, Address: 0x38a134, Func Offset: 0x184
	// Line 294, Address: 0x38a144, Func Offset: 0x194
	// Line 297, Address: 0x38a14c, Func Offset: 0x19c
	// Line 309, Address: 0x38a16c, Func Offset: 0x1bc
	// Line 418, Address: 0x38a1b0, Func Offset: 0x200
	// Line 420, Address: 0x38a1c8, Func Offset: 0x218
	// Line 421, Address: 0x38a1d4, Func Offset: 0x224
	// Line 424, Address: 0x38a1e0, Func Offset: 0x230
	// Line 430, Address: 0x38a228, Func Offset: 0x278
	// Line 431, Address: 0x38a230, Func Offset: 0x280
	// Line 433, Address: 0x38a234, Func Offset: 0x284
	// Line 434, Address: 0x38a238, Func Offset: 0x288
	// Func End, Address: 0x38a260, Func Offset: 0x2b0
}

// iFileClose__FP7tagFile
// Start address: 0x38a260
int32 iFileClose(tagFile* f)
{
	// Line 198, Address: 0x38a260, Func Offset: 0
	// Line 199, Address: 0x38a270, Func Offset: 0x10
	// Line 200, Address: 0x38a278, Func Offset: 0x18
	// Line 202, Address: 0x38a284, Func Offset: 0x24
	// Line 205, Address: 0x38a290, Func Offset: 0x30
	// Line 206, Address: 0x38a334, Func Offset: 0xd4
	// Line 208, Address: 0x38a340, Func Offset: 0xe0
	// Line 210, Address: 0x38a344, Func Offset: 0xe4
	// Line 211, Address: 0x38a348, Func Offset: 0xe8
	// Func End, Address: 0x38a35c, Func Offset: 0xfc
}

// iFileOpen__FP7tagFilei
// Start address: 0x38a360
int32 iFileOpen(tagFile* f)
{
	int32 index;
	int8 path[128];
	// Line 165, Address: 0x38a360, Func Offset: 0
	// Line 168, Address: 0x38a374, Func Offset: 0x14
	// Line 169, Address: 0x38a37c, Func Offset: 0x1c
	// Line 172, Address: 0x38a388, Func Offset: 0x28
	// Line 174, Address: 0x38a3a0, Func Offset: 0x40
	// Line 175, Address: 0x38a3ac, Func Offset: 0x4c
	// Line 176, Address: 0x38a3c4, Func Offset: 0x64
	// Line 180, Address: 0x38a3d8, Func Offset: 0x78
	// Line 182, Address: 0x38a3ec, Func Offset: 0x8c
	// Line 183, Address: 0x38a3f8, Func Offset: 0x98
	// Line 187, Address: 0x38a404, Func Offset: 0xa4
	// Line 189, Address: 0x38a40c, Func Offset: 0xac
	// Line 190, Address: 0x38a410, Func Offset: 0xb0
	// Func End, Address: 0x38a428, Func Offset: 0xc8
}

// iFileGetSize__FP7tagFile
// Start address: 0x38a430
uint32 iFileGetSize(tagFile* f)
{
	int32 err;
	int32 file_size;
	int32 wasOpen;
	// Line 113, Address: 0x38a430, Func Offset: 0
	// Line 118, Address: 0x38a448, Func Offset: 0x18
	// Line 119, Address: 0x38a450, Func Offset: 0x20
	// Line 124, Address: 0x38a45c, Func Offset: 0x2c
	// Line 126, Address: 0x38a468, Func Offset: 0x38
	// Line 127, Address: 0x38a46c, Func Offset: 0x3c
	// Line 129, Address: 0x38a500, Func Offset: 0xd0
	// Line 132, Address: 0x38a508, Func Offset: 0xd8
	// Line 136, Address: 0x38a50c, Func Offset: 0xdc
	// Line 137, Address: 0x38a524, Func Offset: 0xf4
	// Line 139, Address: 0x38a52c, Func Offset: 0xfc
	// Line 140, Address: 0x38a53c, Func Offset: 0x10c
	// Line 144, Address: 0x38a548, Func Offset: 0x118
	// Line 146, Address: 0x38a564, Func Offset: 0x134
	// Line 147, Address: 0x38a574, Func Offset: 0x144
	// Line 151, Address: 0x38a580, Func Offset: 0x150
	// Line 152, Address: 0x38a588, Func Offset: 0x158
	// Line 155, Address: 0x38a650, Func Offset: 0x220
	// Line 156, Address: 0x38a654, Func Offset: 0x224
	// Func End, Address: 0x38a670, Func Offset: 0x240
}

// iFileInit__FP7tagFilePc
// Start address: 0x38a670
int32 iFileInit(tagFile* f, int8* theName)
{
	// Line 90, Address: 0x38a670, Func Offset: 0
	// Line 91, Address: 0x38a680, Func Offset: 0x10
	// Line 92, Address: 0x38a688, Func Offset: 0x18
	// Line 94, Address: 0x38a694, Func Offset: 0x24
	// Line 95, Address: 0x38a69c, Func Offset: 0x2c
	// Line 97, Address: 0x38a6b4, Func Offset: 0x44
	// Line 99, Address: 0x38a6b8, Func Offset: 0x48
	// Line 100, Address: 0x38a6bc, Func Offset: 0x4c
	// Line 101, Address: 0x38a6c0, Func Offset: 0x50
	// Line 103, Address: 0x38a6c4, Func Offset: 0x54
	// Line 105, Address: 0x38a78c, Func Offset: 0x11c
	// Line 106, Address: 0x38a790, Func Offset: 0x120
	// Func End, Address: 0x38a7a4, Func Offset: 0x134
}

// iFileSystemShutdown__Fv
// Start address: 0x38a7b0
int32 iFileSystemShutdown()
{
	// Line 43, Address: 0x38a7b0, Func Offset: 0
	// Line 47, Address: 0x38a7c0, Func Offset: 0x10
	// Line 50, Address: 0x38a7c4, Func Offset: 0x14
	// Line 51, Address: 0x38a7c8, Func Offset: 0x18
	// Func End, Address: 0x38a7d0, Func Offset: 0x20
}

// iFileSystemInit__Fv
// Start address: 0x38a7d0
int32 iFileSystemInit()
{
	// Line 26, Address: 0x38a7d0, Func Offset: 0
	// Line 27, Address: 0x38a7d8, Func Offset: 0x8
	// Line 31, Address: 0x38a7e0, Func Offset: 0x10
	// Line 32, Address: 0x38a7e8, Func Offset: 0x18
	// Line 33, Address: 0x38a7ec, Func Offset: 0x1c
	// Func End, Address: 0x38a7fc, Func Offset: 0x2c
}

