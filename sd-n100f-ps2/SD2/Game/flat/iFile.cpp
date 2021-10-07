typedef struct tag_xFile;
typedef enum xFileDriveType;
typedef struct tag_iFile;
typedef enum xFileDriveStatus;
typedef struct sceCdlFILE;
typedef enum IFILE_READSECTOR_STATUS;
typedef struct sceCdRMode;

typedef void(*type_0)(int32);
typedef void(*type_5)(int32);
typedef void(*type_9)(int32);

typedef int8 type_1[128];
typedef int8 type_2[128];
typedef int8 type_3[16];
typedef uint8 type_4[8];
typedef int8 type_6[256];
typedef int8 type_7[128];
typedef int8 type_8[16];
typedef int8 type_10[128];

struct tag_xFile
{
	int8 relname[16];
	tag_iFile ps;
};

enum xFileDriveType
{
	XFILE_DRIVE_CDVD,
	XFILE_DRIVE_CONSOLE_HD
};

struct tag_iFile
{
	uint32 flags;
	int8 path[128];
	int32 fd;
	sceCdlFILE file;
	void(*cb)(int32);
};

enum xFileDriveStatus
{
	XFILE_TRAY_OPEN,
	XFILE_STOPPED,
	XFILE_SPINNING,
	XFILE_READING,
	XFILE_PAUSED,
	XFILE_SEEKING,
	XFILE_ERROR
};

struct sceCdlFILE
{
	uint32 lsn;
	uint32 size;
	int8 name[16];
	uint8 date[8];
	uint32 flag;
};

enum IFILE_READSECTOR_STATUS
{
	IFILE_RDSTAT_NOOP,
	IFILE_RDSTAT_INPROG,
	IFILE_RDSTAT_DONE,
	IFILE_RDSTAT_FAIL
};

struct sceCdRMode
{
	uint8 trycount;
	uint8 spindlctrl;
	uint8 datapattern;
	uint8 pad;
};

sceCdRMode sCDReadMode;
void(*sCallback)(int32);
int32 num_open_files;
void(*iFileCallbackHandler)(int32);

uint32 iFileGetSectorSize(xFileDriveType drive);
uint32 iFileReadStop();
IFILE_READSECTOR_STATUS iFileReadSectorStatus();
uint32 iFileReadSectors(uint32 start, uint32 nsectors, void* buf, void(*callback)(int32));
void iFileGetInfo(tag_xFile* file, uint32* starting_sector, uint32* size_in_bytes);
uint32 iFileFind(int8* name, tag_xFile* file);
uint32 iFileGetSize(tag_xFile* file);
uint32 iFileClose(tag_xFile* file);
uint32 iFileWrite(tag_xFile* file, void* buf, uint32 size);
uint32 iFileRead(tag_xFile* file, void* buf, uint32 size);
int32 iFileSeek(tag_xFile* file, int32 offset, int32 whence);
uint32 iFileOpen(int8* name, int32 flags, tag_xFile* file);
uint32* iFileLoad(int8* name, uint32* buffer, uint32* size);
void iFileCallbackHandler(int32 cause);
void iFileExit();
void iFileInit();

// iFileGetSectorSize__F14xFileDriveType
// Start address: 0x110b60
uint32 iFileGetSectorSize(xFileDriveType drive)
{
	// Line 1295, Address: 0x110b60, Func Offset: 0
	// Line 1310, Address: 0x110b70, Func Offset: 0x10
	// Func End, Address: 0x110b78, Func Offset: 0x18
}

// iFileReadStop__Fv
// Start address: 0x110b80
uint32 iFileReadStop()
{
	int32 ret;
	// Line 1149, Address: 0x110b80, Func Offset: 0
	// Line 1151, Address: 0x110b8c, Func Offset: 0xc
	// Line 1154, Address: 0x110bb4, Func Offset: 0x34
	// Line 1155, Address: 0x110bc4, Func Offset: 0x44
	// Line 1156, Address: 0x110bcc, Func Offset: 0x4c
	// Line 1158, Address: 0x110bd8, Func Offset: 0x58
	// Line 1160, Address: 0x110be0, Func Offset: 0x60
	// Line 1161, Address: 0x110bf0, Func Offset: 0x70
	// Line 1164, Address: 0x110bf4, Func Offset: 0x74
	// Func End, Address: 0x110c04, Func Offset: 0x84
}

// iFileReadSectorStatus__Fv
// Start address: 0x110c10
IFILE_READSECTOR_STATUS iFileReadSectorStatus()
{
	IFILE_READSECTOR_STATUS status;
	int32 err;
	int32 inprog;
	// Line 1020, Address: 0x110c10, Func Offset: 0
	// Line 1026, Address: 0x110c18, Func Offset: 0x8
	// Line 1029, Address: 0x110c2c, Func Offset: 0x1c
	// Line 1030, Address: 0x110c34, Func Offset: 0x24
	// Line 1034, Address: 0x110c44, Func Offset: 0x34
	// Line 1073, Address: 0x110c4c, Func Offset: 0x3c
	// Line 1076, Address: 0x110c9c, Func Offset: 0x8c
	// Line 1080, Address: 0x110ca4, Func Offset: 0x94
	// Line 1089, Address: 0x110cac, Func Offset: 0x9c
	// Line 1096, Address: 0x110cb0, Func Offset: 0xa0
	// Func End, Address: 0x110cbc, Func Offset: 0xac
}

// iFileReadSectors__FUiUiPvPFi_v
// Start address: 0x110cc0
uint32 iFileReadSectors(uint32 start, uint32 nsectors, void* buf, void(*callback)(int32))
{
	uint32 num;
	// Line 953, Address: 0x110cc0, Func Offset: 0
	// Line 959, Address: 0x110cec, Func Offset: 0x2c
	// Line 961, Address: 0x110cf4, Func Offset: 0x34
	// Line 980, Address: 0x110cf8, Func Offset: 0x38
	// Line 981, Address: 0x110d20, Func Offset: 0x60
	// Line 982, Address: 0x110d2c, Func Offset: 0x6c
	// Line 984, Address: 0x110d34, Func Offset: 0x74
	// Line 985, Address: 0x110d4c, Func Offset: 0x8c
	// Line 986, Address: 0x110d50, Func Offset: 0x90
	// Line 989, Address: 0x110d58, Func Offset: 0x98
	// Line 991, Address: 0x110d60, Func Offset: 0xa0
	// Line 992, Address: 0x110d6c, Func Offset: 0xac
	// Line 1006, Address: 0x110d74, Func Offset: 0xb4
	// Line 1007, Address: 0x110d78, Func Offset: 0xb8
	// Func End, Address: 0x110d98, Func Offset: 0xd8
}

// iFileGetInfo__FP9tag_xFilePUiPUi
// Start address: 0x110da0
void iFileGetInfo(tag_xFile* file, uint32* starting_sector, uint32* size_in_bytes)
{
	tag_iFile* ps;
	// Line 931, Address: 0x110da0, Func Offset: 0
	// Line 932, Address: 0x110da8, Func Offset: 0x8
	// Line 934, Address: 0x110db0, Func Offset: 0x10
	// Line 935, Address: 0x110db8, Func Offset: 0x18
	// Line 936, Address: 0x110dc0, Func Offset: 0x20
	// Func End, Address: 0x110dc8, Func Offset: 0x28
}

// iFileFind__FPCcP9tag_xFile
// Start address: 0x110dd0
uint32 iFileFind(int8* name, tag_xFile* file)
{
	tag_iFile* ps;
	int32 ret;
	int8 fullname[128];
	// Line 888, Address: 0x110dd0, Func Offset: 0
	// Line 896, Address: 0x110de4, Func Offset: 0x14
	// Line 898, Address: 0x110e80, Func Offset: 0xb0
	// Line 901, Address: 0x110e84, Func Offset: 0xb4
	// Line 904, Address: 0x110e90, Func Offset: 0xc0
	// Line 905, Address: 0x110e98, Func Offset: 0xc8
	// Line 906, Address: 0x110ea4, Func Offset: 0xd4
	// Line 910, Address: 0x110eac, Func Offset: 0xdc
	// Line 912, Address: 0x110eb0, Func Offset: 0xe0
	// Line 910, Address: 0x110eb4, Func Offset: 0xe4
	// Line 913, Address: 0x110ebc, Func Offset: 0xec
	// Func End, Address: 0x110ed0, Func Offset: 0x100
}

// iFileGetSize__FP9tag_xFile
// Start address: 0x110ed0
uint32 iFileGetSize(tag_xFile* file)
{
	int32 rc;
	tag_iFile* ps;
	int32 pos;
	int32 size;
	// Line 794, Address: 0x110ed0, Func Offset: 0
	// Line 800, Address: 0x110ee4, Func Offset: 0x14
	// Line 802, Address: 0x110ee8, Func Offset: 0x18
	// Line 803, Address: 0x110ef4, Func Offset: 0x24
	// Line 808, Address: 0x110efc, Func Offset: 0x2c
	// Line 809, Address: 0x110f08, Func Offset: 0x38
	// Line 810, Address: 0x110f10, Func Offset: 0x40
	// Line 811, Address: 0x110f1c, Func Offset: 0x4c
	// Line 814, Address: 0x110f24, Func Offset: 0x54
	// Line 815, Address: 0x110f38, Func Offset: 0x68
	// Line 816, Address: 0x110f40, Func Offset: 0x70
	// Line 817, Address: 0x110f4c, Func Offset: 0x7c
	// Line 820, Address: 0x110f54, Func Offset: 0x84
	// Line 821, Address: 0x110f64, Func Offset: 0x94
	// Line 822, Address: 0x110f6c, Func Offset: 0x9c
	// Line 823, Address: 0x110f7c, Func Offset: 0xac
	// Line 827, Address: 0x110f80, Func Offset: 0xb0
	// Func End, Address: 0x110f98, Func Offset: 0xc8
}

// iFileClose__FP9tag_xFile
// Start address: 0x110fa0
uint32 iFileClose(tag_xFile* file)
{
	int32 ret;
	tag_iFile* ps;
	// Line 758, Address: 0x110fa0, Func Offset: 0
	// Line 763, Address: 0x110fac, Func Offset: 0xc
	// Line 766, Address: 0x110fb0, Func Offset: 0x10
	// Line 769, Address: 0x110fb8, Func Offset: 0x18
	// Line 770, Address: 0x110fc0, Func Offset: 0x20
	// Line 771, Address: 0x110fd4, Func Offset: 0x34
	// Line 775, Address: 0x110fdc, Func Offset: 0x3c
	// Line 777, Address: 0x110fe0, Func Offset: 0x40
	// Line 780, Address: 0x110fe4, Func Offset: 0x44
	// Line 777, Address: 0x110fe8, Func Offset: 0x48
	// Line 781, Address: 0x110ff0, Func Offset: 0x50
	// Func End, Address: 0x111000, Func Offset: 0x60
}

// iFileWrite__FP9tag_xFilePvUi
// Start address: 0x111000
uint32 iFileWrite(tag_xFile* file, void* buf, uint32 size)
{
	int32 num;
	// Line 728, Address: 0x111000, Func Offset: 0
	// Line 738, Address: 0x111008, Func Offset: 0x8
	// Line 742, Address: 0x111010, Func Offset: 0x10
	// Line 746, Address: 0x111020, Func Offset: 0x20
	// Func End, Address: 0x11102c, Func Offset: 0x2c
}

// iFileRead__FP9tag_xFilePvUi
// Start address: 0x111030
uint32 iFileRead(tag_xFile* file, void* buf, uint32 size)
{
	int32 num;
	tag_iFile* ps;
	// Line 675, Address: 0x111030, Func Offset: 0
	// Line 688, Address: 0x11104c, Func Offset: 0x1c
	// Line 690, Address: 0x111054, Func Offset: 0x24
	// Line 691, Address: 0x111060, Func Offset: 0x30
	// Line 693, Address: 0x111070, Func Offset: 0x40
	// Line 694, Address: 0x11107c, Func Offset: 0x4c
	// Line 698, Address: 0x111088, Func Offset: 0x58
	// Line 705, Address: 0x111098, Func Offset: 0x68
	// Line 706, Address: 0x1110a0, Func Offset: 0x70
	// Line 707, Address: 0x1110ac, Func Offset: 0x7c
	// Line 712, Address: 0x1110b0, Func Offset: 0x80
	// Func End, Address: 0x1110c8, Func Offset: 0x98
}

// iFileSeek__FP9tag_xFileii
// Start address: 0x1110d0
int32 iFileSeek(tag_xFile* file, int32 offset, int32 whence)
{
	int32 new_pos;
	tag_iFile* ps;
	// Line 621, Address: 0x1110d0, Func Offset: 0
	// Line 635, Address: 0x1110d4, Func Offset: 0x4
	// Line 621, Address: 0x1110d8, Func Offset: 0x8
	// Line 635, Address: 0x1110dc, Func Offset: 0xc
	// Line 638, Address: 0x111100, Func Offset: 0x30
	// Line 641, Address: 0x111108, Func Offset: 0x38
	// Line 643, Address: 0x111110, Func Offset: 0x40
	// Line 651, Address: 0x111114, Func Offset: 0x44
	// Line 654, Address: 0x111120, Func Offset: 0x50
	// Line 655, Address: 0x111128, Func Offset: 0x58
	// Line 656, Address: 0x111134, Func Offset: 0x64
	// Line 660, Address: 0x111138, Func Offset: 0x68
	// Func End, Address: 0x111144, Func Offset: 0x74
}

// iFileOpen__FPCciP9tag_xFile
// Start address: 0x111150
uint32 iFileOpen(int8* name, int32 flags, tag_xFile* file)
{
	tag_iFile* ps;
	// Line 560, Address: 0x111150, Func Offset: 0
	// Line 572, Address: 0x111164, Func Offset: 0x14
	// Line 567, Address: 0x111168, Func Offset: 0x18
	// Line 572, Address: 0x111170, Func Offset: 0x20
	// Line 574, Address: 0x111178, Func Offset: 0x28
	// Line 575, Address: 0x111184, Func Offset: 0x34
	// Line 576, Address: 0x111188, Func Offset: 0x38
	// Line 578, Address: 0x111190, Func Offset: 0x40
	// Line 583, Address: 0x11122c, Func Offset: 0xdc
	// Line 584, Address: 0x11123c, Func Offset: 0xec
	// Line 585, Address: 0x111248, Func Offset: 0xf8
	// Line 586, Address: 0x111250, Func Offset: 0x100
	// Line 589, Address: 0x111260, Func Offset: 0x110
	// Line 590, Address: 0x111270, Func Offset: 0x120
	// Line 591, Address: 0x111278, Func Offset: 0x128
	// Line 599, Address: 0x111284, Func Offset: 0x134
	// Line 600, Address: 0x111288, Func Offset: 0x138
	// Line 602, Address: 0x111290, Func Offset: 0x140
	// Line 605, Address: 0x111294, Func Offset: 0x144
	// Line 602, Address: 0x111298, Func Offset: 0x148
	// Line 606, Address: 0x1112a0, Func Offset: 0x150
	// Func End, Address: 0x1112b8, Func Offset: 0x168
}

// iFileLoad__FPcPUiPUi
// Start address: 0x1112c0
uint32* iFileLoad(int8* name, uint32* buffer, uint32* size)
{
	int32 ret;
	int32 locsize;
	int32 n;
	int32 fd;
	int8 fullpath[128];
	// Line 476, Address: 0x1112c0, Func Offset: 0
	// Line 482, Address: 0x1112e0, Func Offset: 0x20
	// Line 485, Address: 0x11137c, Func Offset: 0xbc
	// Line 486, Address: 0x11138c, Func Offset: 0xcc
	// Line 487, Address: 0x111394, Func Offset: 0xd4
	// Line 488, Address: 0x1113a4, Func Offset: 0xe4
	// Line 493, Address: 0x1113ac, Func Offset: 0xec
	// Line 494, Address: 0x1113bc, Func Offset: 0xfc
	// Line 495, Address: 0x1113c4, Func Offset: 0x104
	// Line 497, Address: 0x1113d4, Func Offset: 0x114
	// Line 498, Address: 0x1113e4, Func Offset: 0x124
	// Line 499, Address: 0x1113ec, Func Offset: 0x12c
	// Line 503, Address: 0x1113f8, Func Offset: 0x138
	// Line 506, Address: 0x111400, Func Offset: 0x140
	// Line 511, Address: 0x11140c, Func Offset: 0x14c
	// Line 512, Address: 0x11141c, Func Offset: 0x15c
	// Line 513, Address: 0x111424, Func Offset: 0x164
	// Line 514, Address: 0x111434, Func Offset: 0x174
	// Line 515, Address: 0x11143c, Func Offset: 0x17c
	// Line 520, Address: 0x111444, Func Offset: 0x184
	// Line 521, Address: 0x11144c, Func Offset: 0x18c
	// Line 522, Address: 0x111454, Func Offset: 0x194
	// Line 537, Address: 0x111460, Func Offset: 0x1a0
	// Line 539, Address: 0x11146c, Func Offset: 0x1ac
	// Func End, Address: 0x111488, Func Offset: 0x1c8
}

// iFileCallbackHandler__Fi
// Start address: 0x111490
void iFileCallbackHandler(int32 cause)
{
	// Line 134, Address: 0x111490, Func Offset: 0
	// Line 149, Address: 0x111498, Func Offset: 0x8
	// Line 152, Address: 0x1114a4, Func Offset: 0x14
	// Line 155, Address: 0x1114ac, Func Offset: 0x1c
	// Line 159, Address: 0x1114b0, Func Offset: 0x20
	// Func End, Address: 0x1114bc, Func Offset: 0x2c
}

// iFileExit__Fv
// Start address: 0x1114c0
void iFileExit()
{
	// Line 112, Address: 0x1114c0, Func Offset: 0
	// Line 116, Address: 0x1114c8, Func Offset: 0x8
	// Line 119, Address: 0x1114d0, Func Offset: 0x10
	// Line 121, Address: 0x1114d8, Func Offset: 0x18
	// Func End, Address: 0x1114e4, Func Offset: 0x24
}

// iFileInit__Fv
// Start address: 0x1114f0
void iFileInit()
{
	// Line 95, Address: 0x1114f0, Func Offset: 0
	// Func End, Address: 0x1114fc, Func Offset: 0xc
}

