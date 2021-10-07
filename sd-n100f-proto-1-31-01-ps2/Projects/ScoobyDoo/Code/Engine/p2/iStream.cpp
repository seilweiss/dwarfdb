typedef struct _RwStreamFile;
typedef struct tagXStreamMDSDirectory;
typedef struct XStreamHeader;
typedef struct XStream;
typedef struct _RwStreamCustom;
typedef struct tagXStreamDirectoryEntry;
typedef enum _RwStreamType;
typedef struct _RwStreamUnion;
typedef enum _RwStreamAccessType;
typedef struct _RwStream;
typedef struct _RwStreamMemory;

typedef int32(*type_1)(void*);
typedef uint32(*type_2)(void*, void*, uint32);
typedef int32(*type_4)(void*, void*, uint32);
typedef void(*type_5)(XStream*);
typedef int32(*type_6)(void*, uint32);

typedef tagXStreamDirectoryEntry type_0[1000];
typedef int8 type_3[32];
typedef int8 type_7[2048];
typedef int8 type_8[32];
typedef int8 type_9[128];

struct _RwStreamFile
{
	void* fpFile;
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

struct _RwStreamCustom
{
	int32(*sfnclose)(void*);
	uint32(*sfnread)(void*, void*, uint32);
	int32(*sfnwrite)(void*, void*, uint32);
	int32(*sfnskip)(void*, uint32);
	void* data;
};

struct tagXStreamDirectoryEntry
{
	uint32 id;
	uint32 type;
	uint32 offset;
	uint32 length;
};

enum _RwStreamType
{
	rwNASTREAM,
	rwSTREAMFILE,
	rwSTREAMFILENAME,
	rwSTREAMMEMORY,
	rwSTREAMCUSTOM,
	rwSTREAMTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct _RwStreamUnion
{
	union
	{
		_RwStreamMemory memory;
		_RwStreamFile file;
		_RwStreamCustom custom;
	};
};

enum _RwStreamAccessType
{
	rwNASTREAMACCESS,
	rwSTREAMREAD,
	rwSTREAMWRITE,
	rwSTREAMAPPEND,
	rwSTREAMACCESSTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct _RwStream
{
	_RwStreamType type;
	_RwStreamAccessType accessType;
	int32 position;
	_RwStreamUnion Type;
	int32 rwOwned;
};

struct _RwStreamMemory
{
	uint32 position;
	uint32 nSize;
	uint8* memBlock;
};

_RwStream* currentFileID;
int8 currentFileName[32];
uint32 currentID;
int8 vAssertBuf2[128];
XStreamHeader currentHeader;
int32 assetBufferRemain;

void iStreamAbort(uint32 id);
void iStreamDoRead(XStream* stream, void(*callback)(XStream*), int32 reloadSound);
void iStreamRead(XStream* stream, void(*callback)(XStream*));
void iStreamWait(uint32 id);
void iStreamSeek(uint32 id);

// iStreamAbort__FUi
// Start address: 0x36bb40
void iStreamAbort(uint32 id)
{
	// Line 352, Address: 0x36bb40, Func Offset: 0
	// Line 353, Address: 0x36bb48, Func Offset: 0x8
	// Line 355, Address: 0x36bbec, Func Offset: 0xac
	// Line 357, Address: 0x36bbfc, Func Offset: 0xbc
	// Line 358, Address: 0x36bc04, Func Offset: 0xc4
	// Func End, Address: 0x36bc14, Func Offset: 0xd4
}

// iStreamDoRead__FP7XStreamPFP7XStream_vi
// Start address: 0x36bc20
void iStreamDoRead(XStream* stream, void(*callback)(XStream*), int32 reloadSound)
{
	int32 stat;
	int32 stat;
	uint8* dataStart;
	int32 assetID;
	int32 lastSound;
	int32 si;
	int32 padSize;
	int32 type;
	int32 xfrSize;
	uint32 dramSize;
	uint32 sectors;
	uint32 bytes;
	int32 h;
	// Line 113, Address: 0x36bc20, Func Offset: 0
	// Line 132, Address: 0x36bc50, Func Offset: 0x30
	// Line 137, Address: 0x36bcf8, Func Offset: 0xd8
	// Line 138, Address: 0x36bd14, Func Offset: 0xf4
	// Line 144, Address: 0x36bdb8, Func Offset: 0x198
	// Line 145, Address: 0x36bdbc, Func Offset: 0x19c
	// Line 147, Address: 0x36bdc4, Func Offset: 0x1a4
	// Line 148, Address: 0x36bde0, Func Offset: 0x1c0
	// Line 152, Address: 0x36be84, Func Offset: 0x264
	// Line 154, Address: 0x36be94, Func Offset: 0x274
	// Line 156, Address: 0x36beac, Func Offset: 0x28c
	// Line 159, Address: 0x36becc, Func Offset: 0x2ac
	// Line 161, Address: 0x36bed8, Func Offset: 0x2b8
	// Line 164, Address: 0x36bee0, Func Offset: 0x2c0
	// Line 166, Address: 0x36bef8, Func Offset: 0x2d8
	// Line 169, Address: 0x36bf18, Func Offset: 0x2f8
	// Line 176, Address: 0x36bf24, Func Offset: 0x304
	// Line 177, Address: 0x36bf28, Func Offset: 0x308
	// Line 178, Address: 0x36bf2c, Func Offset: 0x30c
	// Line 180, Address: 0x36bf38, Func Offset: 0x318
	// Line 182, Address: 0x36bf54, Func Offset: 0x334
	// Line 183, Address: 0x36bf6c, Func Offset: 0x34c
	// Line 184, Address: 0x36bf74, Func Offset: 0x354
	// Line 186, Address: 0x36bf94, Func Offset: 0x374
	// Line 188, Address: 0x36bfb4, Func Offset: 0x394
	// Line 190, Address: 0x36bfcc, Func Offset: 0x3ac
	// Line 191, Address: 0x36bfd0, Func Offset: 0x3b0
	// Line 193, Address: 0x36bfec, Func Offset: 0x3cc
	// Line 194, Address: 0x36bff8, Func Offset: 0x3d8
	// Line 203, Address: 0x36c004, Func Offset: 0x3e4
	// Line 204, Address: 0x36c024, Func Offset: 0x404
	// Line 206, Address: 0x36c030, Func Offset: 0x410
	// Line 207, Address: 0x36c034, Func Offset: 0x414
	// Line 208, Address: 0x36c038, Func Offset: 0x418
	// Line 209, Address: 0x36c054, Func Offset: 0x434
	// Line 210, Address: 0x36c070, Func Offset: 0x450
	// Line 211, Address: 0x36c074, Func Offset: 0x454
	// Line 219, Address: 0x36c078, Func Offset: 0x458
	// Line 221, Address: 0x36c080, Func Offset: 0x460
	// Line 222, Address: 0x36c084, Func Offset: 0x464
	// Line 224, Address: 0x36c08c, Func Offset: 0x46c
	// Line 225, Address: 0x36c0a0, Func Offset: 0x480
	// Line 227, Address: 0x36c0a8, Func Offset: 0x488
	// Line 230, Address: 0x36c0c0, Func Offset: 0x4a0
	// Line 231, Address: 0x36c0c4, Func Offset: 0x4a4
	// Line 234, Address: 0x36c0e4, Func Offset: 0x4c4
	// Line 240, Address: 0x36c0ec, Func Offset: 0x4cc
	// Line 242, Address: 0x36c0f8, Func Offset: 0x4d8
	// Line 243, Address: 0x36c110, Func Offset: 0x4f0
	// Line 246, Address: 0x36c1b8, Func Offset: 0x598
	// Line 247, Address: 0x36c1bc, Func Offset: 0x59c
	// Line 255, Address: 0x36c1c4, Func Offset: 0x5a4
	// Line 283, Address: 0x36c1cc, Func Offset: 0x5ac
	// Line 284, Address: 0x36c1d4, Func Offset: 0x5b4
	// Line 287, Address: 0x36c1e0, Func Offset: 0x5c0
	// Line 288, Address: 0x36c1e4, Func Offset: 0x5c4
	// Line 293, Address: 0x36c208, Func Offset: 0x5e8
	// Line 295, Address: 0x36c210, Func Offset: 0x5f0
	// Line 297, Address: 0x36c218, Func Offset: 0x5f8
	// Line 298, Address: 0x36c228, Func Offset: 0x608
	// Line 299, Address: 0x36c2c8, Func Offset: 0x6a8
	// Line 305, Address: 0x36c2d0, Func Offset: 0x6b0
	// Line 306, Address: 0x36c2dc, Func Offset: 0x6bc
	// Line 308, Address: 0x36c2e0, Func Offset: 0x6c0
	// Line 309, Address: 0x36c304, Func Offset: 0x6e4
	// Line 315, Address: 0x36c310, Func Offset: 0x6f0
	// Line 316, Address: 0x36c328, Func Offset: 0x708
	// Line 318, Address: 0x36c3cc, Func Offset: 0x7ac
	// Line 320, Address: 0x36c3e0, Func Offset: 0x7c0
	// Line 322, Address: 0x36c3e4, Func Offset: 0x7c4
	// Line 329, Address: 0x36c3ec, Func Offset: 0x7cc
	// Line 331, Address: 0x36c3f4, Func Offset: 0x7d4
	// Line 338, Address: 0x36c3fc, Func Offset: 0x7dc
	// Line 339, Address: 0x36c404, Func Offset: 0x7e4
	// Line 341, Address: 0x36c410, Func Offset: 0x7f0
	// Line 342, Address: 0x36c414, Func Offset: 0x7f4
	// Line 347, Address: 0x36c450, Func Offset: 0x830
	// Line 348, Address: 0x36c460, Func Offset: 0x840
	// Line 349, Address: 0x36c500, Func Offset: 0x8e0
	// Func End, Address: 0x36c52c, Func Offset: 0x90c
}

// iStreamRead__FP7XStreamPFP7XStream_v
// Start address: 0x36c530
void iStreamRead(XStream* stream, void(*callback)(XStream*))
{
	// Line 95, Address: 0x36c530, Func Offset: 0
	// Line 96, Address: 0x36c538, Func Offset: 0x8
	// Line 97, Address: 0x36c544, Func Offset: 0x14
	// Func End, Address: 0x36c554, Func Offset: 0x24
}

// iStreamWait__FUi
// Start address: 0x36c560
void iStreamWait(uint32 id)
{
	// Line 83, Address: 0x36c560, Func Offset: 0
	// Line 84, Address: 0x36c568, Func Offset: 0x8
	// Line 85, Address: 0x36c60c, Func Offset: 0xac
	// Func End, Address: 0x36c61c, Func Offset: 0xbc
}

// iStreamSeek__FUiUi
// Start address: 0x36c620
void iStreamSeek(uint32 id)
{
	int8 name[32];
	int32 tens;
	int32 scn;
	int32 seq;
	int32 act;
	// Line 33, Address: 0x36c620, Func Offset: 0
	// Line 41, Address: 0x36c630, Func Offset: 0x10
	// Line 42, Address: 0x36c63c, Func Offset: 0x1c
	// Line 43, Address: 0x36c648, Func Offset: 0x28
	// Line 45, Address: 0x36c650, Func Offset: 0x30
	// Line 46, Address: 0x36c654, Func Offset: 0x34
	// Line 48, Address: 0x36c658, Func Offset: 0x38
	// Line 50, Address: 0x36c678, Func Offset: 0x58
	// Line 51, Address: 0x36c680, Func Offset: 0x60
	// Line 53, Address: 0x36c698, Func Offset: 0x78
	// Line 56, Address: 0x36c69c, Func Offset: 0x7c
	// Line 57, Address: 0x36c6ac, Func Offset: 0x8c
	// Line 58, Address: 0x36c6c8, Func Offset: 0xa8
	// Line 60, Address: 0x36c6d0, Func Offset: 0xb0
	// Line 70, Address: 0x36c6ec, Func Offset: 0xcc
	// Line 71, Address: 0x36c6f0, Func Offset: 0xd0
	// Func End, Address: 0x36c704, Func Offset: 0xe4
}

