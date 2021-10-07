



uint32 iFileGetSectorSize(xFileDriveType drive);
void iFileAsyncService();
IFILE_READSECTOR_STATUS iFileReadAsyncStatus(int32 key, int32* amtToFar);
int32 iFileReadAsync(tag_xFile* file, void* buf, uint32 aSize, void(*callback)(tag_xFile*), int32 priority);
void iFileSetPath(int8* path);
void iFileFullPath(int8* relname, int8* fullname);
uint8 iFileExists(int8* name);
uint32 iFileGetSize(tag_xFile* file);
uint32 iFileClose(tag_xFile* file);
uint32 iFileRead(tag_xFile* file, void* buf, uint32 size);
int32 iFileSeek(tag_xFile* file, int32 offset, int32 whence);
uint32 iFileOpen(int8* name, int32 flags, tag_xFile* file);
uint32* iFileLoad(int8* name, uint32* buffer, uint32* size);

// iFileGetSectorSize__F14xFileDriveType
// Start address: 0x4b1ff0
uint32 iFileGetSectorSize(xFileDriveType drive)
{
	// Line 1013, Address: 0x4b1ff0, Func Offset: 0
	// Line 1028, Address: 0x4b2000, Func Offset: 0x10
	// Func End, Address: 0x4b2008, Func Offset: 0x18
}

// iFileAsyncService__Fv
// Start address: 0x4b2010
void iFileAsyncService()
{
	int32 i;
	HISStatus status;
	// Line 899, Address: 0x4b2010, Func Offset: 0
	// Line 903, Address: 0x4b2020, Func Offset: 0x10
	// Line 904, Address: 0x4b202c, Func Offset: 0x1c
	// Line 906, Address: 0x4b2038, Func Offset: 0x28
	// Line 907, Address: 0x4b2044, Func Offset: 0x34
	// Line 909, Address: 0x4b2054, Func Offset: 0x44
	// Line 912, Address: 0x4b2060, Func Offset: 0x50
	// Line 914, Address: 0x4b2068, Func Offset: 0x58
	// Line 915, Address: 0x4b208c, Func Offset: 0x7c
	// Line 916, Address: 0x4b2090, Func Offset: 0x80
	// Line 917, Address: 0x4b209c, Func Offset: 0x8c
	// Line 918, Address: 0x4b20a4, Func Offset: 0x94
	// Line 919, Address: 0x4b20b0, Func Offset: 0xa0
	// Line 921, Address: 0x4b20bc, Func Offset: 0xac
	// Line 922, Address: 0x4b20c4, Func Offset: 0xb4
	// Line 923, Address: 0x4b20c8, Func Offset: 0xb8
	// Line 922, Address: 0x4b20cc, Func Offset: 0xbc
	// Line 925, Address: 0x4b20d0, Func Offset: 0xc0
	// Line 929, Address: 0x4b20d8, Func Offset: 0xc8
	// Line 930, Address: 0x4b20e0, Func Offset: 0xd0
	// Line 931, Address: 0x4b20e8, Func Offset: 0xd8
	// Line 932, Address: 0x4b20ec, Func Offset: 0xdc
	// Line 931, Address: 0x4b20f0, Func Offset: 0xe0
	// Line 933, Address: 0x4b20f4, Func Offset: 0xe4
	// Line 937, Address: 0x4b20fc, Func Offset: 0xec
	// Line 938, Address: 0x4b2100, Func Offset: 0xf0
	// Line 939, Address: 0x4b2104, Func Offset: 0xf4
	// Line 941, Address: 0x4b210c, Func Offset: 0xfc
	// Line 942, Address: 0x4b2110, Func Offset: 0x100
	// Line 950, Address: 0x4b2118, Func Offset: 0x108
	// Line 951, Address: 0x4b2128, Func Offset: 0x118
	// Func End, Address: 0x4b213c, Func Offset: 0x12c
}

// iFileReadAsyncStatus__FiPi
// Start address: 0x4b2140
IFILE_READSECTOR_STATUS iFileReadAsyncStatus(int32 key, int32* amtToFar)
{
	// Line 880, Address: 0x4b2144, Func Offset: 0x4
	// Line 882, Address: 0x4b2148, Func Offset: 0x8
	// Line 886, Address: 0x4b2164, Func Offset: 0x24
	// Line 887, Address: 0x4b216c, Func Offset: 0x2c
	// Line 890, Address: 0x4b2170, Func Offset: 0x30
	// Line 891, Address: 0x4b217c, Func Offset: 0x3c
	// Func End, Address: 0x4b2184, Func Offset: 0x44
}

// iFileReadAsync__FP9tag_xFilePvUiPFP9tag_xFile_vi
// Start address: 0x4b2190
int32 iFileReadAsync(tag_xFile* file, void* buf, uint32 aSize, void(*callback)(tag_xFile*), int32 priority)
{
	tag_iFile* ps;
	int32 i;
	int32 id;
	// Line 797, Address: 0x4b2190, Func Offset: 0
	// Line 809, Address: 0x4b2194, Func Offset: 0x4
	// Line 797, Address: 0x4b2198, Func Offset: 0x8
	// Line 809, Address: 0x4b21a4, Func Offset: 0x14
	// Line 797, Address: 0x4b21a8, Func Offset: 0x18
	// Line 801, Address: 0x4b21c8, Func Offset: 0x38
	// Line 809, Address: 0x4b21cc, Func Offset: 0x3c
	// Line 810, Address: 0x4b21d0, Func Offset: 0x40
	// Line 811, Address: 0x4b21dc, Func Offset: 0x4c
	// Line 813, Address: 0x4b21ec, Func Offset: 0x5c
	// Line 814, Address: 0x4b2218, Func Offset: 0x88
	// Line 815, Address: 0x4b2224, Func Offset: 0x94
	// Line 845, Address: 0x4b222c, Func Offset: 0x9c
	// Line 848, Address: 0x4b223c, Func Offset: 0xac
	// Line 818, Address: 0x4b2258, Func Offset: 0xc8
	// Line 848, Address: 0x4b225c, Func Offset: 0xcc
	// Line 823, Address: 0x4b22a4, Func Offset: 0x114
	// Line 848, Address: 0x4b22a8, Func Offset: 0x118
	// Line 844, Address: 0x4b22c4, Func Offset: 0x134
	// Line 829, Address: 0x4b22cc, Func Offset: 0x13c
	// Line 848, Address: 0x4b22d0, Func Offset: 0x140
	// Line 832, Address: 0x4b22dc, Func Offset: 0x14c
	// Line 848, Address: 0x4b22e0, Func Offset: 0x150
	// Line 833, Address: 0x4b22f0, Func Offset: 0x160
	// Line 848, Address: 0x4b22f4, Func Offset: 0x164
	// Line 835, Address: 0x4b2304, Func Offset: 0x174
	// Line 848, Address: 0x4b2308, Func Offset: 0x178
	// Line 837, Address: 0x4b2338, Func Offset: 0x1a8
	// Line 848, Address: 0x4b233c, Func Offset: 0x1ac
	// Line 840, Address: 0x4b2340, Func Offset: 0x1b0
	// Line 848, Address: 0x4b2344, Func Offset: 0x1b4
	// Line 849, Address: 0x4b2364, Func Offset: 0x1d4
	// Func End, Address: 0x4b2384, Func Offset: 0x1f4
}

// iFileSetPath__FPCc
// Start address: 0x4b2390
void iFileSetPath(int8* path)
{
	uint32 len;
	// Line 769, Address: 0x4b2390, Func Offset: 0
	// Line 771, Address: 0x4b239c, Func Offset: 0xc
	// Line 777, Address: 0x4b23a4, Func Offset: 0x14
	// Line 771, Address: 0x4b23ac, Func Offset: 0x1c
	// Line 777, Address: 0x4b23b0, Func Offset: 0x20
	// Line 778, Address: 0x4b23b8, Func Offset: 0x28
	// Line 779, Address: 0x4b23e4, Func Offset: 0x54
	// Line 780, Address: 0x4b23e8, Func Offset: 0x58
	// Line 779, Address: 0x4b23ec, Func Offset: 0x5c
	// Line 780, Address: 0x4b23f0, Func Offset: 0x60
	// Line 779, Address: 0x4b23f4, Func Offset: 0x64
	// Line 780, Address: 0x4b23f8, Func Offset: 0x68
	// Line 779, Address: 0x4b23fc, Func Offset: 0x6c
	// Line 780, Address: 0x4b2400, Func Offset: 0x70
	// Line 782, Address: 0x4b2404, Func Offset: 0x74
	// Func End, Address: 0x4b2414, Func Offset: 0x84
}

// iFileFullPath__FPCcPc
// Start address: 0x4b2420
void iFileFullPath(int8* relname, int8* fullname)
{
	int8 temp[128];
	uint8 in_subdir;
	int8* pSlashConvert;
	// Line 723, Address: 0x4b2420, Func Offset: 0
	// Line 728, Address: 0x4b2434, Func Offset: 0x14
	// Line 730, Address: 0x4b243c, Func Offset: 0x1c
	// Line 734, Address: 0x4b244c, Func Offset: 0x2c
	// Line 736, Address: 0x4b2454, Func Offset: 0x34
	// Line 739, Address: 0x4b246c, Func Offset: 0x4c
	// Line 740, Address: 0x4b2480, Func Offset: 0x60
	// Line 741, Address: 0x4b24a8, Func Offset: 0x88
	// Line 742, Address: 0x4b24b0, Func Offset: 0x90
	// Line 743, Address: 0x4b24c0, Func Offset: 0xa0
	// Line 747, Address: 0x4b24d4, Func Offset: 0xb4
	// Line 748, Address: 0x4b24e4, Func Offset: 0xc4
	// Line 749, Address: 0x4b24f0, Func Offset: 0xd0
	// Line 751, Address: 0x4b2500, Func Offset: 0xe0
	// Line 753, Address: 0x4b250c, Func Offset: 0xec
	// Line 754, Address: 0x4b251c, Func Offset: 0xfc
	// Line 755, Address: 0x4b2520, Func Offset: 0x100
	// Line 756, Address: 0x4b2524, Func Offset: 0x104
	// Line 762, Address: 0x4b2534, Func Offset: 0x114
	// Line 763, Address: 0x4b2538, Func Offset: 0x118
	// Line 759, Address: 0x4b254c, Func Offset: 0x12c
	// Line 763, Address: 0x4b2550, Func Offset: 0x130
	// Line 760, Address: 0x4b255c, Func Offset: 0x13c
	// Line 763, Address: 0x4b2560, Func Offset: 0x140
	// Line 761, Address: 0x4b2568, Func Offset: 0x148
	// Line 763, Address: 0x4b256c, Func Offset: 0x14c
	// Func End, Address: 0x4b258c, Func Offset: 0x16c
}

// iFileExists__FPCci
// Start address: 0x4b2590
uint8 iFileExists(int8* name)
{
	int32 index;
	// Line 701, Address: 0x4b2590, Func Offset: 0
	// Line 702, Address: 0x4b2598, Func Offset: 0x8
	// Line 704, Address: 0x4b25a0, Func Offset: 0x10
	// Line 703, Address: 0x4b25a4, Func Offset: 0x14
	// Line 704, Address: 0x4b25ac, Func Offset: 0x1c
	// Func End, Address: 0x4b25b4, Func Offset: 0x24
}

// iFileGetSize__FP9tag_xFile
// Start address: 0x4b25c0
uint32 iFileGetSize(tag_xFile* file)
{
	int32 size;
	int32 pos;
	tag_iFile* ps;
	int32 rc;
	// Line 628, Address: 0x4b25c0, Func Offset: 0
	// Line 638, Address: 0x4b25d4, Func Offset: 0x14
	// Line 642, Address: 0x4b25e8, Func Offset: 0x28
	// Line 643, Address: 0x4b25f0, Func Offset: 0x30
	// Line 639, Address: 0x4b2600, Func Offset: 0x40
	// Line 646, Address: 0x4b2608, Func Offset: 0x48
	// Line 647, Address: 0x4b2614, Func Offset: 0x54
	// Line 652, Address: 0x4b261c, Func Offset: 0x5c
	// Line 653, Address: 0x4b2630, Func Offset: 0x70
	// Line 658, Address: 0x4b2638, Func Offset: 0x78
	// Line 659, Address: 0x4b2648, Func Offset: 0x88
	// Line 664, Address: 0x4b2650, Func Offset: 0x90
	// Line 648, Address: 0x4b2658, Func Offset: 0x98
	// Line 664, Address: 0x4b265c, Func Offset: 0x9c
	// Line 649, Address: 0x4b2664, Func Offset: 0xa4
	// Line 654, Address: 0x4b266c, Func Offset: 0xac
	// Line 664, Address: 0x4b2670, Func Offset: 0xb0
	// Line 655, Address: 0x4b2678, Func Offset: 0xb8
	// Line 660, Address: 0x4b2680, Func Offset: 0xc0
	// Line 664, Address: 0x4b2684, Func Offset: 0xc4
	// Line 661, Address: 0x4b268c, Func Offset: 0xcc
	// Line 666, Address: 0x4b2690, Func Offset: 0xd0
	// Func End, Address: 0x4b26a8, Func Offset: 0xe8
}

// iFileClose__FP9tag_xFile
// Start address: 0x4b26b0
uint32 iFileClose(tag_xFile* file)
{
	tag_iFile* ps;
	int32 ret;
	int32 i;
	// Line 574, Address: 0x4b26b0, Func Offset: 0
	// Line 584, Address: 0x4b26c8, Func Offset: 0x18
	// Line 574, Address: 0x4b26cc, Func Offset: 0x1c
	// Line 584, Address: 0x4b26d0, Func Offset: 0x20
	// Line 574, Address: 0x4b26d4, Func Offset: 0x24
	// Line 584, Address: 0x4b26d8, Func Offset: 0x28
	// Line 579, Address: 0x4b26dc, Func Offset: 0x2c
	// Line 585, Address: 0x4b26e0, Func Offset: 0x30
	// Line 587, Address: 0x4b270c, Func Offset: 0x5c
	// Line 589, Address: 0x4b2714, Func Offset: 0x64
	// Line 590, Address: 0x4b2760, Func Offset: 0xb0
	// Line 591, Address: 0x4b2768, Func Offset: 0xb8
	// Line 593, Address: 0x4b276c, Func Offset: 0xbc
	// Line 595, Address: 0x4b2780, Func Offset: 0xd0
	// Line 609, Address: 0x4b2790, Func Offset: 0xe0
	// Line 614, Address: 0x4b2794, Func Offset: 0xe4
	// Line 611, Address: 0x4b2798, Func Offset: 0xe8
	// Line 614, Address: 0x4b27a0, Func Offset: 0xf0
	// Line 603, Address: 0x4b27c0, Func Offset: 0x110
	// Line 614, Address: 0x4b27c4, Func Offset: 0x114
	// Line 604, Address: 0x4b27cc, Func Offset: 0x11c
	// Line 615, Address: 0x4b27d0, Func Offset: 0x120
	// Func End, Address: 0x4b27f0, Func Offset: 0x140
}

// iFileRead__FP9tag_xFilePvUi
// Start address: 0x4b27f0
uint32 iFileRead(tag_xFile* file, void* buf, uint32 size)
{
	tag_iFile* ps;
	int32 num;
	// Line 483, Address: 0x4b27f0, Func Offset: 0
	// Line 496, Address: 0x4b2804, Func Offset: 0x14
	// Line 484, Address: 0x4b2808, Func Offset: 0x18
	// Line 499, Address: 0x4b280c, Func Offset: 0x1c
	// Line 496, Address: 0x4b2810, Func Offset: 0x20
	// Line 499, Address: 0x4b2820, Func Offset: 0x30
	// Line 508, Address: 0x4b282c, Func Offset: 0x3c
	// Line 516, Address: 0x4b2834, Func Offset: 0x44
	// Line 522, Address: 0x4b283c, Func Offset: 0x4c
	// Line 504, Address: 0x4b2854, Func Offset: 0x64
	// Line 522, Address: 0x4b2858, Func Offset: 0x68
	// Line 504, Address: 0x4b285c, Func Offset: 0x6c
	// Line 522, Address: 0x4b2868, Func Offset: 0x78
	// Line 506, Address: 0x4b2874, Func Offset: 0x84
	// Line 522, Address: 0x4b2878, Func Offset: 0x88
	// Line 507, Address: 0x4b287c, Func Offset: 0x8c
	// Line 517, Address: 0x4b2884, Func Offset: 0x94
	// Line 522, Address: 0x4b2888, Func Offset: 0x98
	// Line 518, Address: 0x4b2890, Func Offset: 0xa0
	// Line 523, Address: 0x4b2894, Func Offset: 0xa4
	// Func End, Address: 0x4b28a8, Func Offset: 0xb8
}

// iFileSeek__FP9tag_xFileii
// Start address: 0x4b28b0
int32 iFileSeek(tag_xFile* file, int32 offset, int32 whence)
{
	tag_iFile* ps;
	int32 position;
	int32 new_pos;
	// Line 399, Address: 0x4b28b0, Func Offset: 0
	// Line 408, Address: 0x4b28b8, Func Offset: 0x8
	// Line 411, Address: 0x4b28c8, Func Offset: 0x18
	// Line 418, Address: 0x4b28e8, Func Offset: 0x38
	// Line 421, Address: 0x4b28f0, Func Offset: 0x40
	// Line 426, Address: 0x4b28fc, Func Offset: 0x4c
	// Line 427, Address: 0x4b2908, Func Offset: 0x58
	// Line 433, Address: 0x4b290c, Func Offset: 0x5c
	// Line 441, Address: 0x4b2914, Func Offset: 0x64
	// Line 444, Address: 0x4b293c, Func Offset: 0x8c
	// Line 447, Address: 0x4b2944, Func Offset: 0x94
	// Line 449, Address: 0x4b294c, Func Offset: 0x9c
	// Line 457, Address: 0x4b2950, Func Offset: 0xa0
	// Line 460, Address: 0x4b2960, Func Offset: 0xb0
	// Line 465, Address: 0x4b2968, Func Offset: 0xb8
	// Line 462, Address: 0x4b2978, Func Offset: 0xc8
	// Line 468, Address: 0x4b297c, Func Offset: 0xcc
	// Func End, Address: 0x4b2988, Func Offset: 0xd8
}

// iFileOpen__FPCciP9tag_xFile
// Start address: 0x4b2990
uint32 iFileOpen(int8* name, int32 flags, tag_xFile* file)
{
	tag_iFile* ps;
	// Line 326, Address: 0x4b2990, Func Offset: 0
	// Line 339, Address: 0x4b29a4, Func Offset: 0x14
	// Line 351, Address: 0x4b29b0, Func Offset: 0x20
	// Line 353, Address: 0x4b29bc, Func Offset: 0x2c
	// Line 354, Address: 0x4b29c8, Func Offset: 0x38
	// Line 362, Address: 0x4b29d0, Func Offset: 0x40
	// Line 363, Address: 0x4b29e4, Func Offset: 0x54
	// Line 364, Address: 0x4b29ec, Func Offset: 0x5c
	// Line 365, Address: 0x4b29f4, Func Offset: 0x64
	// Line 368, Address: 0x4b2a04, Func Offset: 0x74
	// Line 369, Address: 0x4b2a14, Func Offset: 0x84
	// Line 343, Address: 0x4b2a30, Func Offset: 0xa0
	// Line 369, Address: 0x4b2a34, Func Offset: 0xa4
	// Line 344, Address: 0x4b2a3c, Func Offset: 0xac
	// Line 369, Address: 0x4b2a44, Func Offset: 0xb4
	// Line 348, Address: 0x4b2a54, Func Offset: 0xc4
	// Line 369, Address: 0x4b2a58, Func Offset: 0xc8
	// Line 381, Address: 0x4b2a5c, Func Offset: 0xcc
	// Line 383, Address: 0x4b2a60, Func Offset: 0xd0
	// Line 381, Address: 0x4b2a64, Func Offset: 0xd4
	// Line 383, Address: 0x4b2a68, Func Offset: 0xd8
	// Line 370, Address: 0x4b2a80, Func Offset: 0xf0
	// Line 378, Address: 0x4b2a88, Func Offset: 0xf8
	// Line 384, Address: 0x4b2a94, Func Offset: 0x104
	// Func End, Address: 0x4b2aa8, Func Offset: 0x118
}

// iFileLoad__FPCcPUiPUi
// Start address: 0x4b2ab0
uint32* iFileLoad(int8* name, uint32* buffer, uint32* size)
{
	int8 filename[128];
	int32 index;
	int32 fileSize;
	int32 alignedSize;
	// Line 264, Address: 0x4b2ab0, Func Offset: 0
	// Line 266, Address: 0x4b2adc, Func Offset: 0x2c
	// Line 267, Address: 0x4b2af0, Func Offset: 0x40
	// Line 268, Address: 0x4b2afc, Func Offset: 0x4c
	// Line 269, Address: 0x4b2b0c, Func Offset: 0x5c
	// Line 270, Address: 0x4b2b18, Func Offset: 0x68
	// Line 274, Address: 0x4b2b1c, Func Offset: 0x6c
	// Line 275, Address: 0x4b2b28, Func Offset: 0x78
	// Line 281, Address: 0x4b2b38, Func Offset: 0x88
	// Line 285, Address: 0x4b2b44, Func Offset: 0x94
	// Line 288, Address: 0x4b2b58, Func Offset: 0xa8
	// Line 297, Address: 0x4b2b60, Func Offset: 0xb0
	// Line 301, Address: 0x4b2ba4, Func Offset: 0xf4
	// Line 302, Address: 0x4b2bac, Func Offset: 0xfc
	// Line 304, Address: 0x4b2bb0, Func Offset: 0x100
	// Line 276, Address: 0x4b2bb8, Func Offset: 0x108
	// Line 304, Address: 0x4b2bbc, Func Offset: 0x10c
	// Line 277, Address: 0x4b2bc4, Func Offset: 0x114
	// Line 292, Address: 0x4b2bcc, Func Offset: 0x11c
	// Line 304, Address: 0x4b2bd0, Func Offset: 0x120
	// Line 292, Address: 0x4b2be4, Func Offset: 0x134
	// Line 304, Address: 0x4b2bf0, Func Offset: 0x140
	// Line 292, Address: 0x4b2bf4, Func Offset: 0x144
	// Line 304, Address: 0x4b2bf8, Func Offset: 0x148
	// Line 305, Address: 0x4b2c08, Func Offset: 0x158
	// Func End, Address: 0x4b2c28, Func Offset: 0x178
}

