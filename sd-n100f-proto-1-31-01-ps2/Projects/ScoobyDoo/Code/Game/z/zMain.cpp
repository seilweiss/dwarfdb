typedef struct zCharacter;
typedef struct _anon0;
typedef struct tagXStreamMDSDirectory;
typedef struct zMain;
typedef struct XStreamHeader;
typedef struct xModule;
typedef struct tagXStreamDirectoryEntry;
typedef struct zDemo;


typedef zCharacter* type_0[41];
typedef tagXStreamDirectoryEntry type_1[1000];
typedef int8 type_2[32];
typedef int8 type_3[2048];
typedef int8 type_4[128];
typedef zCharacter* type_5[40];

struct zCharacter
{

	void render();
	void kill();
	void init();
};

struct _anon0
{
};

struct tagXStreamMDSDirectory
{
	uint32 count;
	tagXStreamDirectoryEntry directory[1000];
};

struct zMain : xModule
{
	zDemo* m_modDemo;
	xModule* m_gameObjMgr;
	xModule* m_gameAnimMgr;

	void render();
	void nextFrame();
	void restart();
	void kill();
	void init();
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

struct xModule
{
	int32 m_type;
	int8 m_name[32];
	int32 m_init;
	int32 m_state;
};

struct tagXStreamDirectoryEntry
{
	uint32 id;
	uint32 type;
	uint32 offset;
	uint32 length;
};

struct zDemo : xModule
{
	zCharacter* m_chars;
	zCharacter* m_snacks[40];
	zCharacter* m_grass[41];
	int32 m_lastCamera;

	void kill();
};

_anon0 __vt__5zMain;
int32 gQuit;
ulong32 m_currentTime;
ulong32 gTimerValue;
int8 vAssertBuf2[128];
XStreamHeader currentHeader;

int32 main();
void render();
void nextFrame();
void restart();
void kill();
void init();

// 
// Start address: 0x3a5e50
int32 main()
{
	zMain* sd2Main;
	// Line 120, Address: 0x3a5e50, Func Offset: 0
	// Line 121, Address: 0x3a5e5c, Func Offset: 0xc
	// Line 124, Address: 0x3a5e6c, Func Offset: 0x1c
	// Line 126, Address: 0x3a5e78, Func Offset: 0x28
	// Line 127, Address: 0x3a5e84, Func Offset: 0x34
	// Line 129, Address: 0x3a5e90, Func Offset: 0x40
	// Line 130, Address: 0x3a5eb0, Func Offset: 0x60
	// Line 132, Address: 0x3a5ed0, Func Offset: 0x80
	// Line 133, Address: 0x3a5edc, Func Offset: 0x8c
	// Line 134, Address: 0x3a5ee8, Func Offset: 0x98
	// Line 135, Address: 0x3a5ef4, Func Offset: 0xa4
	// Line 144, Address: 0x3a5efc, Func Offset: 0xac
	// Line 145, Address: 0x3a5f0c, Func Offset: 0xbc
	// Line 150, Address: 0x3a5fac, Func Offset: 0x15c
	// Line 151, Address: 0x3a5fb4, Func Offset: 0x164
	// Line 154, Address: 0x3a5fc4, Func Offset: 0x174
	// Line 157, Address: 0x3a5fd8, Func Offset: 0x188
	// Line 160, Address: 0x3a5fec, Func Offset: 0x19c
	// Line 163, Address: 0x3a5ff8, Func Offset: 0x1a8
	// Line 164, Address: 0x3a600c, Func Offset: 0x1bc
	// Line 167, Address: 0x3a6018, Func Offset: 0x1c8
	// Func End, Address: 0x3a6030, Func Offset: 0x1e0
}

// render__5zMainFv
// Start address: 0x3a6030
void zMain::render()
{
	// Line 94, Address: 0x3a6030, Func Offset: 0
	// Line 95, Address: 0x3a6040, Func Offset: 0x10
	// Line 99, Address: 0x3a6050, Func Offset: 0x20
	// Line 107, Address: 0x3a6064, Func Offset: 0x34
	// Line 109, Address: 0x3a6078, Func Offset: 0x48
	// Line 112, Address: 0x3a6080, Func Offset: 0x50
	// Line 114, Address: 0x3a6088, Func Offset: 0x58
	// Func End, Address: 0x3a609c, Func Offset: 0x6c
}

// nextFrame__5zMainFv
// Start address: 0x3a60a0
void zMain::nextFrame()
{
	// Line 78, Address: 0x3a60a0, Func Offset: 0
	// Line 80, Address: 0x3a60b0, Func Offset: 0x10
	// Line 82, Address: 0x3a60c0, Func Offset: 0x20
	// Line 83, Address: 0x3a60d4, Func Offset: 0x34
	// Line 86, Address: 0x3a60e8, Func Offset: 0x48
	// Line 88, Address: 0x3a60fc, Func Offset: 0x5c
	// Func End, Address: 0x3a6110, Func Offset: 0x70
}

// restart__5zMainFv
// Start address: 0x3a6110
void zMain::restart()
{
	// Line 64, Address: 0x3a6110, Func Offset: 0
	// Line 66, Address: 0x3a6120, Func Offset: 0x10
	// Line 69, Address: 0x3a6134, Func Offset: 0x24
	// Line 70, Address: 0x3a6148, Func Offset: 0x38
	// Line 72, Address: 0x3a615c, Func Offset: 0x4c
	// Func End, Address: 0x3a6170, Func Offset: 0x60
}

// kill__5zMainFv
// Start address: 0x3a6170
void zMain::kill()
{
	// Line 50, Address: 0x3a6170, Func Offset: 0
	// Line 52, Address: 0x3a6180, Func Offset: 0x10
	// Line 55, Address: 0x3a6194, Func Offset: 0x24
	// Line 56, Address: 0x3a61a8, Func Offset: 0x38
	// Line 57, Address: 0x3a61bc, Func Offset: 0x4c
	// Line 58, Address: 0x3a61c4, Func Offset: 0x54
	// Func End, Address: 0x3a61d8, Func Offset: 0x68
}

// init__5zMainFv
// Start address: 0x3a61e0
void zMain::init()
{
	// Line 30, Address: 0x3a61e0, Func Offset: 0
	// Line 32, Address: 0x3a61f0, Func Offset: 0x10
	// Line 34, Address: 0x3a61f8, Func Offset: 0x18
	// Line 35, Address: 0x3a6208, Func Offset: 0x28
	// Line 38, Address: 0x3a6218, Func Offset: 0x38
	// Line 41, Address: 0x3a6220, Func Offset: 0x40
	// Line 42, Address: 0x3a6230, Func Offset: 0x50
	// Line 44, Address: 0x3a62d4, Func Offset: 0xf4
	// Func End, Address: 0x3a62e8, Func Offset: 0x108
}

