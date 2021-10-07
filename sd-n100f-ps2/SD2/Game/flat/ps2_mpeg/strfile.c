typedef struct StrFile;
typedef struct sceCdlFILE;
typedef struct sceCdRMode;


typedef int8 type_0[16];
typedef uint8 type_1[8];
typedef int8 type_2[256];
typedef int8 type_3[64];

struct StrFile
{
	int32 isOnCD;
	int32 size;
	sceCdlFILE fp;
	uint8* iopBuf;
	int32 fd;
};

struct sceCdlFILE
{
	uint32 lsn;
	uint32 size;
	int8 name[16];
	uint8 date[8];
	uint32 flag;
};

struct sceCdRMode
{
	uint8 trycount;
	uint8 spindlctrl;
	uint8 datapattern;
	uint8 pad;
};


int32 strFileRead(StrFile* file, void* buff, int32 size);
int32 strFileClose(StrFile* file);
int32 strFileOpen(StrFile* file, int8* filename);

// strFileRead__FP7StrFilePvi
// Start address: 0x261b10
int32 strFileRead(StrFile* file, void* buff, int32 size)
{
	uint32 err;
	int32 count;
	// Line 185, Address: 0x261b10, Func Offset: 0
	// Line 187, Address: 0x261b24, Func Offset: 0x14
	// Line 192, Address: 0x261b30, Func Offset: 0x20
	// Line 193, Address: 0x261b44, Func Offset: 0x34
	// Line 195, Address: 0x261b4c, Func Offset: 0x3c
	// Line 197, Address: 0x261b64, Func Offset: 0x54
	// Line 200, Address: 0x261b74, Func Offset: 0x64
	// Line 203, Address: 0x261b7c, Func Offset: 0x6c
	// Line 205, Address: 0x261b88, Func Offset: 0x78
	// Line 206, Address: 0x261b8c, Func Offset: 0x7c
	// Func End, Address: 0x261ba4, Func Offset: 0x94
}

// strFileClose__FP7StrFile
// Start address: 0x261bb0
int32 strFileClose(StrFile* file)
{
	// Line 167, Address: 0x261bb0, Func Offset: 0
	// Line 168, Address: 0x261bbc, Func Offset: 0xc
	// Line 170, Address: 0x261bc8, Func Offset: 0x18
	// Line 171, Address: 0x261bd0, Func Offset: 0x20
	// Line 172, Address: 0x261bd8, Func Offset: 0x28
	// Line 175, Address: 0x261be0, Func Offset: 0x30
	// Line 178, Address: 0x261be8, Func Offset: 0x38
	// Line 177, Address: 0x261bf0, Func Offset: 0x40
	// Line 178, Address: 0x261bf4, Func Offset: 0x44
	// Func End, Address: 0x261bfc, Func Offset: 0x4c
}

// strFileOpen__FP7StrFilePc
// Start address: 0x261c00
int32 strFileOpen(StrFile* file, int8* filename)
{
	sceCdRMode mode;
	int32 len;
	int32 i;
	int32 dlen;
	int8 devname[64];
	int8 fn[256];
	int8* body;
	int32 ret;
	// Line 47, Address: 0x261c00, Func Offset: 0
	// Line 53, Address: 0x261c24, Func Offset: 0x24
	// Line 55, Address: 0x261c38, Func Offset: 0x38
	// Line 60, Address: 0x261c40, Func Offset: 0x40
	// Line 61, Address: 0x261c44, Func Offset: 0x44
	// Line 62, Address: 0x261c54, Func Offset: 0x54
	// Line 66, Address: 0x261c5c, Func Offset: 0x5c
	// Line 69, Address: 0x261c74, Func Offset: 0x74
	// Line 72, Address: 0x261c80, Func Offset: 0x80
	// Line 74, Address: 0x261c84, Func Offset: 0x84
	// Line 72, Address: 0x261c88, Func Offset: 0x88
	// Line 74, Address: 0x261c8c, Func Offset: 0x8c
	// Line 76, Address: 0x261c94, Func Offset: 0x94
	// Line 78, Address: 0x261cac, Func Offset: 0xac
	// Line 80, Address: 0x261cb0, Func Offset: 0xb0
	// Line 81, Address: 0x261cbc, Func Offset: 0xbc
	// Line 83, Address: 0x261cd0, Func Offset: 0xd0
	// Line 84, Address: 0x261cf4, Func Offset: 0xf4
	// Line 86, Address: 0x261d08, Func Offset: 0x108
	// Line 90, Address: 0x261d10, Func Offset: 0x110
	// Line 92, Address: 0x261d28, Func Offset: 0x128
	// Line 96, Address: 0x261d30, Func Offset: 0x130
	// Line 98, Address: 0x261d3c, Func Offset: 0x13c
	// Line 101, Address: 0x261d58, Func Offset: 0x158
	// Line 103, Address: 0x261d68, Func Offset: 0x168
	// Line 115, Address: 0x261d74, Func Offset: 0x174
	// Line 116, Address: 0x261d8c, Func Offset: 0x18c
	// Line 118, Address: 0x261da8, Func Offset: 0x1a8
	// Line 119, Address: 0x261dc4, Func Offset: 0x1c4
	// Line 122, Address: 0x261dd8, Func Offset: 0x1d8
	// Line 123, Address: 0x261de4, Func Offset: 0x1e4
	// Line 126, Address: 0x261dec, Func Offset: 0x1ec
	// Line 127, Address: 0x261df4, Func Offset: 0x1f4
	// Line 128, Address: 0x261df8, Func Offset: 0x1f8
	// Line 129, Address: 0x261dfc, Func Offset: 0x1fc
	// Line 130, Address: 0x261e00, Func Offset: 0x200
	// Line 131, Address: 0x261e1c, Func Offset: 0x21c
	// Line 133, Address: 0x261e28, Func Offset: 0x228
	// Line 136, Address: 0x261e30, Func Offset: 0x230
	// Line 137, Address: 0x261e3c, Func Offset: 0x23c
	// Line 139, Address: 0x261e48, Func Offset: 0x248
	// Line 140, Address: 0x261e58, Func Offset: 0x258
	// Line 142, Address: 0x261e60, Func Offset: 0x260
	// Line 143, Address: 0x261e6c, Func Offset: 0x26c
	// Line 145, Address: 0x261e78, Func Offset: 0x278
	// Line 146, Address: 0x261e84, Func Offset: 0x284
	// Line 147, Address: 0x261e8c, Func Offset: 0x28c
	// Line 150, Address: 0x261e94, Func Offset: 0x294
	// Line 151, Address: 0x261ea4, Func Offset: 0x2a4
	// Line 153, Address: 0x261eac, Func Offset: 0x2ac
	// Line 154, Address: 0x261eb8, Func Offset: 0x2b8
	// Line 155, Address: 0x261ec0, Func Offset: 0x2c0
	// Line 159, Address: 0x261ec8, Func Offset: 0x2c8
	// Line 160, Address: 0x261ecc, Func Offset: 0x2cc
	// Func End, Address: 0x261ef0, Func Offset: 0x2f0
}

