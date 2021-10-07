typedef struct xFontInfo_t;
typedef struct XStreamHeader;
typedef struct tagXStreamDirectoryEntry;
typedef struct tagFile;
typedef struct tagXStreamMDSDirectory;


typedef tagXStreamDirectoryEntry type_0[1000];
typedef xFontInfo_t type_1[3];
typedef uint8 type_2[128];
typedef int8 type_3[2048];
typedef int8 type_4[256];
typedef int8 type_5[128];
typedef int8 type_6[51];

struct xFontInfo_t
{
	uint8 type;
	uint8 id;
	uint16 flags;
	uint16 char_width;
	uint16 char_height;
	uint16 draw_width;
	uint16 draw_height;
	uint16 tex_width;
	uint16 tex_height;
	uint16 layout;
	uint16 pad;
	uint8 lookup[128];
	int8* characters;
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

struct tagFile
{
	int8 m_name[256];
	int32 m_state;
	int32 m_desc;
	uint32 m_fpos;
};

struct tagXStreamMDSDirectory
{
	uint32 count;
	tagXStreamDirectoryEntry directory[1000];
};

int8 dbfont_chars[51];
xFontInfo_t FontList[3];
int8 vAssertBuf2[128];
XStreamHeader currentHeader;

void iFontDrawChar();
void iFontDrawBackdrop();
void xFontFreeTexture(uint32 id);

// iFontDrawChar__FcfUiP11xFontInfo_t
// Start address: 0x387f70
void iFontDrawChar()
{
	// Line 154, Address: 0x387f70, Func Offset: 0
	// Func End, Address: 0x387f78, Func Offset: 0x8
}

// iFontDrawBackdrop__FP10xFontBox_t
// Start address: 0x387f80
void iFontDrawBackdrop()
{
	// Line 113, Address: 0x387f80, Func Offset: 0
	// Func End, Address: 0x387f88, Func Offset: 0x8
}

// xFontFreeTexture__FUi
// Start address: 0x387f90
void xFontFreeTexture(uint32 id)
{
	xFontInfo_t* font;
	// Line 76, Address: 0x387f90, Func Offset: 0
	// Line 79, Address: 0x387fa0, Func Offset: 0x10
	// Line 80, Address: 0x388044, Func Offset: 0xb4
	// Line 87, Address: 0x388064, Func Offset: 0xd4
	// Line 88, Address: 0x388068, Func Offset: 0xd8
	// Func End, Address: 0x38807c, Func Offset: 0xec
}

