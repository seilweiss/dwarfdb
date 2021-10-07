



void iLoadModule(int8* moduleName, int8* arguments);
uint32 iGetCurrFormattedTime(int8* str);
uint32 iGetCurrFormattedDate(int8* str);
uint8 iGetMonth();
uint8 iGetDay();
uint8 iGetHour();
uint8 iGetMinute();
void iVSync();
RwTexture* TextureRead(int8* name, int8* maskName);
int32 vsyncCounterHandler();
uint32 RWAttachPlugins();
void iSystemExit();
void iSystemInitGraphics();
void iSystemInit(uint32 options);
void iSystemGetWidthHeight(uint32& uWidth, uint32& uHeight, uint8 bPALMode);
void iSystemDemoDiskExit();
void iSystemDemoDiskInit(int32 argc, int8** argv);
uint32 psSelectDevice();
void hack_16bit_frontbuffer();
void setup_flip_blit(RwSkyVideoMode& mode, rwDMA_flipData* fd);
void setup_mixed_display(mixed_display_env& db, int32 tv_type, int32 width, int32 height);

// iLoadModule__FPCcPCc
// Start address: 0x49e5f0
void iLoadModule(int8* moduleName, int8* arguments)
{
	int8 workingName[256];
	int8* demo;
	int32 j;
	int32 errorCode;
	int8* PATHS_CDROM[4];
	int8* PATHS_HOST[3];
	// Line 1929, Address: 0x49e5f0, Func Offset: 0
	// Line 1943, Address: 0x49e5f4, Func Offset: 0x4
	// Line 1929, Address: 0x49e5f8, Func Offset: 0x8
	// Line 1943, Address: 0x49e610, Func Offset: 0x20
	// Line 1946, Address: 0x49e630, Func Offset: 0x40
	// Line 1948, Address: 0x49e63c, Func Offset: 0x4c
	// Line 1949, Address: 0x49e648, Func Offset: 0x58
	// Line 1950, Address: 0x49e664, Func Offset: 0x74
	// Line 1951, Address: 0x49e678, Func Offset: 0x88
	// Line 1952, Address: 0x49e67c, Func Offset: 0x8c
	// Line 1951, Address: 0x49e680, Func Offset: 0x90
	// Line 1952, Address: 0x49e68c, Func Offset: 0x9c
	// Line 1953, Address: 0x49e698, Func Offset: 0xa8
	// Line 1955, Address: 0x49e6b0, Func Offset: 0xc0
	// Line 1956, Address: 0x49e6bc, Func Offset: 0xcc
	// Line 1957, Address: 0x49e6d8, Func Offset: 0xe8
	// Line 1958, Address: 0x49e6e4, Func Offset: 0xf4
	// Line 1960, Address: 0x49e6f4, Func Offset: 0x104
	// Line 1959, Address: 0x49e6f8, Func Offset: 0x108
	// Line 1958, Address: 0x49e6fc, Func Offset: 0x10c
	// Line 1959, Address: 0x49e700, Func Offset: 0x110
	// Line 1961, Address: 0x49e708, Func Offset: 0x118
	// Line 1962, Address: 0x49e724, Func Offset: 0x134
	// Line 1963, Address: 0x49e734, Func Offset: 0x144
	// Line 1967, Address: 0x49e740, Func Offset: 0x150
	// Line 1968, Address: 0x49e760, Func Offset: 0x170
	// Line 1969, Address: 0x49e768, Func Offset: 0x178
	// Line 1995, Address: 0x49e770, Func Offset: 0x180
	// Line 1997, Address: 0x49e780, Func Offset: 0x190
	// Line 1960, Address: 0x49e788, Func Offset: 0x198
	// Line 1997, Address: 0x49e790, Func Offset: 0x1a0
	// Func End, Address: 0x49e7c4, Func Offset: 0x1d4
}

// iGetCurrFormattedTime__FPc
// Start address: 0x49e7d0
uint32 iGetCurrFormattedTime(int8* str)
{
	sceCdCLOCK clock;
	// Line 1827, Address: 0x49e7d0, Func Offset: 0
	// Line 1829, Address: 0x49e7e0, Func Offset: 0x10
	// Line 1835, Address: 0x49e7f0, Func Offset: 0x20
	// Line 1836, Address: 0x49e7f8, Func Offset: 0x28
	// Line 1837, Address: 0x49e874, Func Offset: 0xa4
	// Line 1832, Address: 0x49e888, Func Offset: 0xb8
	// Line 1837, Address: 0x49e88c, Func Offset: 0xbc
	// Line 1833, Address: 0x49e89c, Func Offset: 0xcc
	// Line 1837, Address: 0x49e8a4, Func Offset: 0xd4
	// Line 1836, Address: 0x49e8b0, Func Offset: 0xe0
	// Line 1837, Address: 0x49e8b4, Func Offset: 0xe4
	// Line 1836, Address: 0x49e8bc, Func Offset: 0xec
	// Line 1837, Address: 0x49e8c4, Func Offset: 0xf4
	// Line 1836, Address: 0x49e8c8, Func Offset: 0xf8
	// Line 1837, Address: 0x49e8cc, Func Offset: 0xfc
	// Line 1836, Address: 0x49e8f8, Func Offset: 0x128
	// Line 1837, Address: 0x49e8fc, Func Offset: 0x12c
	// Line 1839, Address: 0x49e90c, Func Offset: 0x13c
	// Func End, Address: 0x49e91c, Func Offset: 0x14c
}

// iGetCurrFormattedDate__FPc
// Start address: 0x49e920
uint32 iGetCurrFormattedDate(int8* str)
{
	sceCdCLOCK clock;
	// Line 1813, Address: 0x49e920, Func Offset: 0
	// Line 1815, Address: 0x49e930, Func Offset: 0x10
	// Line 1821, Address: 0x49e940, Func Offset: 0x20
	// Line 1822, Address: 0x49e948, Func Offset: 0x28
	// Line 1823, Address: 0x49e9d8, Func Offset: 0xb8
	// Line 1818, Address: 0x49e9ec, Func Offset: 0xcc
	// Line 1823, Address: 0x49e9f0, Func Offset: 0xd0
	// Line 1824, Address: 0x49ea00, Func Offset: 0xe0
	// Func End, Address: 0x49ea10, Func Offset: 0xf0
}

// iGetMonth__Fv
// Start address: 0x49ea10
uint8 iGetMonth()
{
	sceCdCLOCK clock;
	// Line 1760, Address: 0x49ea10, Func Offset: 0
	// Line 1762, Address: 0x49ea18, Func Offset: 0x8
	// Line 1763, Address: 0x49ea20, Func Offset: 0x10
	// Line 1764, Address: 0x49ea28, Func Offset: 0x18
	// Line 1765, Address: 0x49ea30, Func Offset: 0x20
	// Func End, Address: 0x49ea3c, Func Offset: 0x2c
}

// iGetDay__Fv
// Start address: 0x49ea40
uint8 iGetDay()
{
	sceCdCLOCK clock;
	// Line 1753, Address: 0x49ea40, Func Offset: 0
	// Line 1755, Address: 0x49ea48, Func Offset: 0x8
	// Line 1756, Address: 0x49ea50, Func Offset: 0x10
	// Line 1757, Address: 0x49ea58, Func Offset: 0x18
	// Line 1758, Address: 0x49ea60, Func Offset: 0x20
	// Func End, Address: 0x49ea6c, Func Offset: 0x2c
}

// iGetHour__Fv
// Start address: 0x49ea70
uint8 iGetHour()
{
	sceCdCLOCK clock;
	// Line 1746, Address: 0x49ea70, Func Offset: 0
	// Line 1748, Address: 0x49ea78, Func Offset: 0x8
	// Line 1749, Address: 0x49ea80, Func Offset: 0x10
	// Line 1750, Address: 0x49ea88, Func Offset: 0x18
	// Line 1751, Address: 0x49ea90, Func Offset: 0x20
	// Func End, Address: 0x49ea9c, Func Offset: 0x2c
}

// iGetMinute__Fv
// Start address: 0x49eaa0
uint8 iGetMinute()
{
	sceCdCLOCK clock;
	// Line 1739, Address: 0x49eaa0, Func Offset: 0
	// Line 1741, Address: 0x49eaa8, Func Offset: 0x8
	// Line 1742, Address: 0x49eab0, Func Offset: 0x10
	// Line 1743, Address: 0x49eab8, Func Offset: 0x18
	// Line 1744, Address: 0x49eac0, Func Offset: 0x20
	// Func End, Address: 0x49eacc, Func Offset: 0x2c
}

// iVSync__Fv
// Start address: 0x49ead0
void iVSync()
{
	// Line 1728, Address: 0x49ead0, Func Offset: 0
	// Func End, Address: 0x49ead8, Func Offset: 0x8
}

// TextureRead__FPCcPCc
// Start address: 0x49eae0
RwTexture* TextureRead(int8* name, int8* maskName)
{
	int8 tmpname[256];
	RwTexture* result;
	uint32 assetid;
	uint32 tmpsize;
	// Line 1558, Address: 0x49eae0, Func Offset: 0
	// Line 1567, Address: 0x49eaf8, Func Offset: 0x18
	// Line 1568, Address: 0x49eb10, Func Offset: 0x30
	// Line 1569, Address: 0x49eb18, Func Offset: 0x38
	// Line 1644, Address: 0x49eb28, Func Offset: 0x48
	// Line 1648, Address: 0x49eb30, Func Offset: 0x50
	// Line 1653, Address: 0x49eb44, Func Offset: 0x64
	// Line 1657, Address: 0x49eb4c, Func Offset: 0x6c
	// Line 1653, Address: 0x49eb54, Func Offset: 0x74
	// Line 1657, Address: 0x49eb60, Func Offset: 0x80
	// Line 1658, Address: 0x49eb80, Func Offset: 0xa0
	// Line 1671, Address: 0x49eb94, Func Offset: 0xb4
	// Line 1672, Address: 0x49eba0, Func Offset: 0xc0
	// Line 1673, Address: 0x49ebac, Func Offset: 0xcc
	// Line 1721, Address: 0x49ebb4, Func Offset: 0xd4
	// Line 1722, Address: 0x49ebb8, Func Offset: 0xd8
	// Func End, Address: 0x49ebd0, Func Offset: 0xf0
}

// vsyncCounterHandler__Fi
// Start address: 0x49ebd0
int32 vsyncCounterHandler()
{
	// Line 1422, Address: 0x49ebd0, Func Offset: 0
	// Line 1423, Address: 0x49ebdc, Func Offset: 0xc
	// Line 1425, Address: 0x49ebe4, Func Offset: 0x14
	// Func End, Address: 0x49ebec, Func Offset: 0x1c
}

// RWAttachPlugins__Fv
// Start address: 0x49ebf0
uint32 RWAttachPlugins()
{
	RpPDSRegister _objPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _objPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _objPipe;
	RpPDSRegister _objPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _objPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _objPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _objPipe;
	RpPDSRegister _objPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _objPipe;
	RpPDSRegister _objPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _objPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _objPipe;
	RpPDSRegister _objPipe;
	// Line 1099, Address: 0x49ebf0, Func Offset: 0
	// Line 1107, Address: 0x49ebf8, Func Offset: 0x8
	// Line 1109, Address: 0x49ec08, Func Offset: 0x18
	// Line 1113, Address: 0x49ec10, Func Offset: 0x20
	// Line 1114, Address: 0x49ec40, Func Offset: 0x50
	// Line 1115, Address: 0x49ec70, Func Offset: 0x80
	// Line 1116, Address: 0x49ec98, Func Offset: 0xa8
	// Line 1119, Address: 0x49ecc0, Func Offset: 0xd0
	// Line 1120, Address: 0x49ecf0, Func Offset: 0x100
	// Line 1129, Address: 0x49ed20, Func Offset: 0x130
	// Line 1130, Address: 0x49ed50, Func Offset: 0x160
	// Line 1131, Address: 0x49ed80, Func Offset: 0x190
	// Line 1132, Address: 0x49edb0, Func Offset: 0x1c0
	// Line 1135, Address: 0x49ede0, Func Offset: 0x1f0
	// Line 1136, Address: 0x49ee10, Func Offset: 0x220
	// Line 1137, Address: 0x49ee40, Func Offset: 0x250
	// Line 1138, Address: 0x49ee70, Func Offset: 0x280
	// Line 1145, Address: 0x49eea0, Func Offset: 0x2b0
	// Line 1146, Address: 0x49eed0, Func Offset: 0x2e0
	// Line 1147, Address: 0x49ef00, Func Offset: 0x310
	// Line 1148, Address: 0x49ef30, Func Offset: 0x340
	// Line 1151, Address: 0x49ef60, Func Offset: 0x370
	// Line 1152, Address: 0x49ef90, Func Offset: 0x3a0
	// Line 1155, Address: 0x49efc0, Func Offset: 0x3d0
	// Line 1156, Address: 0x49eff0, Func Offset: 0x400
	// Line 1166, Address: 0x49f020, Func Offset: 0x430
	// Line 1167, Address: 0x49f04c, Func Offset: 0x45c
	// Line 1168, Address: 0x49f07c, Func Offset: 0x48c
	// Line 1169, Address: 0x49f0a8, Func Offset: 0x4b8
	// Line 1170, Address: 0x49f0d4, Func Offset: 0x4e4
	// Line 1171, Address: 0x49f104, Func Offset: 0x514
	// Line 1172, Address: 0x49f134, Func Offset: 0x544
	// Line 1173, Address: 0x49f164, Func Offset: 0x574
	// Line 1174, Address: 0x49f194, Func Offset: 0x5a4
	// Line 1175, Address: 0x49f1c8, Func Offset: 0x5d8
	// Line 1176, Address: 0x49f1fc, Func Offset: 0x60c
	// Line 1180, Address: 0x49f328, Func Offset: 0x738
	// Line 1182, Address: 0x49f338, Func Offset: 0x748
	// Line 1194, Address: 0x49f340, Func Offset: 0x750
	// Line 1196, Address: 0x49f350, Func Offset: 0x760
	// Line 1208, Address: 0x49f358, Func Offset: 0x768
	// Line 1210, Address: 0x49f368, Func Offset: 0x778
	// Line 1214, Address: 0x49f370, Func Offset: 0x780
	// Line 1216, Address: 0x49f380, Func Offset: 0x790
	// Line 1220, Address: 0x49f388, Func Offset: 0x798
	// Line 1222, Address: 0x49f398, Func Offset: 0x7a8
	// Line 1226, Address: 0x49f3a0, Func Offset: 0x7b0
	// Line 1228, Address: 0x49f3b0, Func Offset: 0x7c0
	// Line 1238, Address: 0x49f3b8, Func Offset: 0x7c8
	// Line 1240, Address: 0x49f3c8, Func Offset: 0x7d8
	// Line 1244, Address: 0x49f3d0, Func Offset: 0x7e0
	// Line 1248, Address: 0x49f3e4, Func Offset: 0x7f4
	// Func End, Address: 0x49f3f0, Func Offset: 0x800
}

// iSystemExit__Fv
// Start address: 0x49f3f0
void iSystemExit()
{
	// Line 1034, Address: 0x49f3f0, Func Offset: 0
	// Func End, Address: 0x49f3f8, Func Offset: 0x8
}

// iSystemInitGraphics__Fv
// Start address: 0x49f400
void iSystemInitGraphics()
{
	// Line 958, Address: 0x49f400, Func Offset: 0
	// Line 960, Address: 0x49f408, Func Offset: 0x8
	// Line 967, Address: 0x49f468, Func Offset: 0x68
	// Line 970, Address: 0x49f470, Func Offset: 0x70
	// Line 976, Address: 0x49f478, Func Offset: 0x78
	// Func End, Address: 0x49f484, Func Offset: 0x84
}

// iSystemInit__FUi
// Start address: 0x49f490
void iSystemInit(uint32 options)
{
	int8 CDROM_IMAGE_FILE[128];
	int8* HOSTIO_IMAGE_FILE;
	int8* iopImageFile;
	int32 disk_type;
	// Line 831, Address: 0x49f490, Func Offset: 0
	// Line 832, Address: 0x49f4a0, Func Offset: 0x10
	// Line 845, Address: 0x49f4b0, Func Offset: 0x20
	// Line 846, Address: 0x49f4b8, Func Offset: 0x28
	// Line 848, Address: 0x49f4cc, Func Offset: 0x3c
	// Line 853, Address: 0x49f4d4, Func Offset: 0x44
	// Line 861, Address: 0x49f4e0, Func Offset: 0x50
	// Line 863, Address: 0x49f4ec, Func Offset: 0x5c
	// Line 864, Address: 0x49f500, Func Offset: 0x70
	// Line 865, Address: 0x49f514, Func Offset: 0x84
	// Line 866, Address: 0x49f524, Func Offset: 0x94
	// Line 867, Address: 0x49f538, Func Offset: 0xa8
	// Line 871, Address: 0x49f548, Func Offset: 0xb8
	// Line 873, Address: 0x49f54c, Func Offset: 0xbc
	// Line 876, Address: 0x49f560, Func Offset: 0xd0
	// Line 880, Address: 0x49f570, Func Offset: 0xe0
	// Line 885, Address: 0x49f58c, Func Offset: 0xfc
	// Line 888, Address: 0x49f5b0, Func Offset: 0x120
	// Line 900, Address: 0x49f5c8, Func Offset: 0x138
	// Line 901, Address: 0x49f5d0, Func Offset: 0x140
	// Line 912, Address: 0x49f5d8, Func Offset: 0x148
	// Line 916, Address: 0x49f62c, Func Offset: 0x19c
	// Line 925, Address: 0x49f634, Func Offset: 0x1a4
	// Line 928, Address: 0x49f63c, Func Offset: 0x1ac
	// Line 931, Address: 0x49f6fc, Func Offset: 0x26c
	// Line 934, Address: 0x49f73c, Func Offset: 0x2ac
	// Line 937, Address: 0x49f744, Func Offset: 0x2b4
	// Line 941, Address: 0x49f74c, Func Offset: 0x2bc
	// Line 947, Address: 0x49f770, Func Offset: 0x2e0
	// Line 950, Address: 0x49f7e0, Func Offset: 0x350
	// Line 953, Address: 0x49f7e8, Func Offset: 0x358
	// Line 954, Address: 0x49f7f0, Func Offset: 0x360
	// Line 955, Address: 0x49f7f8, Func Offset: 0x368
	// Line 905, Address: 0x49f85c, Func Offset: 0x3cc
	// Line 955, Address: 0x49f860, Func Offset: 0x3d0
	// Line 906, Address: 0x49f870, Func Offset: 0x3e0
	// Line 955, Address: 0x49f878, Func Offset: 0x3e8
	// Line 906, Address: 0x49f884, Func Offset: 0x3f4
	// Line 955, Address: 0x49f888, Func Offset: 0x3f8
	// Line 907, Address: 0x49f894, Func Offset: 0x404
	// Line 955, Address: 0x49f89c, Func Offset: 0x40c
	// Line 928, Address: 0x49f8c4, Func Offset: 0x434
	// Line 955, Address: 0x49f8cc, Func Offset: 0x43c
	// Func End, Address: 0x49f8dc, Func Offset: 0x44c
}

// iSystemGetWidthHeight__FRUiRUib
// Start address: 0x49f8e0
void iSystemGetWidthHeight(uint32& uWidth, uint32& uHeight, uint8 bPALMode)
{
	// Line 804, Address: 0x49f8e0, Func Offset: 0
	// Line 806, Address: 0x49f8e8, Func Offset: 0x8
	// Line 808, Address: 0x49f8ec, Func Offset: 0xc
	// Line 811, Address: 0x49f8f4, Func Offset: 0x14
	// Line 812, Address: 0x49f8f8, Func Offset: 0x18
	// Line 811, Address: 0x49f8fc, Func Offset: 0x1c
	// Line 812, Address: 0x49f900, Func Offset: 0x20
	// Line 814, Address: 0x49f904, Func Offset: 0x24
	// Func End, Address: 0x49f90c, Func Offset: 0x2c
}

// iSystemDemoDiskExit__Fv
// Start address: 0x49f910
void iSystemDemoDiskExit()
{
	// Line 771, Address: 0x49f910, Func Offset: 0
	// Line 772, Address: 0x49f914, Func Offset: 0x4
	// Line 771, Address: 0x49f918, Func Offset: 0x8
	// Line 772, Address: 0x49f91c, Func Offset: 0xc
	// Line 779, Address: 0x49f930, Func Offset: 0x20
	// Line 782, Address: 0x49f944, Func Offset: 0x34
	// Line 783, Address: 0x49f954, Func Offset: 0x44
	// Func End, Address: 0x49f960, Func Offset: 0x50
}

// iSystemDemoDiskInit__FUiiPPc
// Start address: 0x49f960
void iSystemDemoDiskInit(int32 argc, int8** argv)
{
	int32 i;
	int8* first;
	int8* second;
	uint32 force_demo;
	// Line 651, Address: 0x49f960, Func Offset: 0
	// Line 654, Address: 0x49f970, Func Offset: 0x10
	// Line 651, Address: 0x49f974, Func Offset: 0x14
	// Line 666, Address: 0x49f980, Func Offset: 0x20
	// Line 651, Address: 0x49f984, Func Offset: 0x24
	// Line 653, Address: 0x49f990, Func Offset: 0x30
	// Line 651, Address: 0x49f994, Func Offset: 0x34
	// Line 663, Address: 0x49f998, Func Offset: 0x38
	// Line 666, Address: 0x49f99c, Func Offset: 0x3c
	// Line 674, Address: 0x49f9a4, Func Offset: 0x44
	// Line 677, Address: 0x49f9ac, Func Offset: 0x4c
	// Line 690, Address: 0x49f9d0, Func Offset: 0x70
	// Line 692, Address: 0x49f9e0, Func Offset: 0x80
	// Line 693, Address: 0x49f9f0, Func Offset: 0x90
	// Line 694, Address: 0x49f9f8, Func Offset: 0x98
	// Line 695, Address: 0x49fa00, Func Offset: 0xa0
	// Line 668, Address: 0x49fa24, Func Offset: 0xc4
	// Line 695, Address: 0x49fa28, Func Offset: 0xc8
	// Line 671, Address: 0x49fa40, Func Offset: 0xe0
	// Line 673, Address: 0x49fa44, Func Offset: 0xe4
	// Line 695, Address: 0x49fa48, Func Offset: 0xe8
	// Line 679, Address: 0x49fa6c, Func Offset: 0x10c
	// Line 706, Address: 0x49fa74, Func Offset: 0x114
	// Line 709, Address: 0x49fa78, Func Offset: 0x118
	// Line 706, Address: 0x49fa7c, Func Offset: 0x11c
	// Line 709, Address: 0x49fa80, Func Offset: 0x120
	// Line 706, Address: 0x49fa84, Func Offset: 0x124
	// Line 710, Address: 0x49fa88, Func Offset: 0x128
	// Line 709, Address: 0x49fa8c, Func Offset: 0x12c
	// Line 710, Address: 0x49fa90, Func Offset: 0x130
	// Line 711, Address: 0x49fbc0, Func Offset: 0x260
	// Line 713, Address: 0x49fbc4, Func Offset: 0x264
	// Line 711, Address: 0x49fbc8, Func Offset: 0x268
	// Line 713, Address: 0x49fbd4, Func Offset: 0x274
	// Line 715, Address: 0x49fbf4, Func Offset: 0x294
	// Line 720, Address: 0x49fc00, Func Offset: 0x2a0
	// Line 715, Address: 0x49fc04, Func Offset: 0x2a4
	// Line 720, Address: 0x49fc08, Func Offset: 0x2a8
	// Line 724, Address: 0x49fc38, Func Offset: 0x2d8
	// Line 720, Address: 0x49fc44, Func Offset: 0x2e4
	// Line 724, Address: 0x49fc48, Func Offset: 0x2e8
	// Line 734, Address: 0x49fc64, Func Offset: 0x304
	// Line 735, Address: 0x49fc7c, Func Offset: 0x31c
	// Line 736, Address: 0x49fc94, Func Offset: 0x334
	// Line 737, Address: 0x49fcac, Func Offset: 0x34c
	// Line 738, Address: 0x49fcc4, Func Offset: 0x364
	// Line 740, Address: 0x49fcdc, Func Offset: 0x37c
	// Line 747, Address: 0x49fce8, Func Offset: 0x388
	// Line 756, Address: 0x49fcfc, Func Offset: 0x39c
	// Line 759, Address: 0x49fd0c, Func Offset: 0x3ac
	// Line 760, Address: 0x49fd20, Func Offset: 0x3c0
	// Line 761, Address: 0x49fd5c, Func Offset: 0x3fc
	// Line 767, Address: 0x49fd8c, Func Offset: 0x42c
	// Line 717, Address: 0x49fdb0, Func Offset: 0x450
	// Line 767, Address: 0x49fdb4, Func Offset: 0x454
	// Line 741, Address: 0x49fdc4, Func Offset: 0x464
	// Line 767, Address: 0x49fdc8, Func Offset: 0x468
	// Line 749, Address: 0x49fde4, Func Offset: 0x484
	// Line 750, Address: 0x49fde8, Func Offset: 0x488
	// Line 767, Address: 0x49fdec, Func Offset: 0x48c
	// Func End, Address: 0x49fe5c, Func Offset: 0x4fc
}

// psSelectDevice__Fv
// Start address: 0x49fe60
uint32 psSelectDevice()
{
	RwVideoMode videoMode;
	int32 i;
	int32 num;
	// Line 530, Address: 0x49fe60, Func Offset: 0
	// Line 536, Address: 0x49fe64, Func Offset: 0x4
	// Line 530, Address: 0x49fe68, Func Offset: 0x8
	// Line 536, Address: 0x49fe7c, Func Offset: 0x1c
	// Line 539, Address: 0x49fe84, Func Offset: 0x24
	// Line 540, Address: 0x49fe90, Func Offset: 0x30
	// Line 562, Address: 0x49fe9c, Func Offset: 0x3c
	// Line 564, Address: 0x49fea4, Func Offset: 0x44
	// Line 560, Address: 0x49ff10, Func Offset: 0xb0
	// Line 564, Address: 0x49ff18, Func Offset: 0xb8
	// Line 567, Address: 0x49ff30, Func Offset: 0xd0
	// Line 570, Address: 0x49ff40, Func Offset: 0xe0
	// Line 571, Address: 0x49ff44, Func Offset: 0xe4
	// Func End, Address: 0x49ff64, Func Offset: 0x104
}

// hack_16bit_frontbuffer__Fv
// Start address: 0x49ff70
void hack_16bit_frontbuffer()
{
	RwSkyVideoMode& mode;
	mixed_display_env db;
	_SkyRasterExt* rasExt;
	ulong32 smode2;
	ulong32 pmode;
	// Line 408, Address: 0x49ff70, Func Offset: 0
	// Line 413, Address: 0x49ff74, Func Offset: 0x4
	// Line 408, Address: 0x49ff78, Func Offset: 0x8
	// Line 413, Address: 0x49ffa0, Func Offset: 0x30
	// Line 417, Address: 0x49ffac, Func Offset: 0x3c
	// Line 418, Address: 0x49ffb0, Func Offset: 0x40
	// Line 421, Address: 0x49ffb4, Func Offset: 0x44
	// Line 422, Address: 0x49ffb8, Func Offset: 0x48
	// Line 433, Address: 0x49ffbc, Func Offset: 0x4c
	// Line 418, Address: 0x49ffc0, Func Offset: 0x50
	// Line 419, Address: 0x49ffc4, Func Offset: 0x54
	// Line 420, Address: 0x49ffc8, Func Offset: 0x58
	// Line 421, Address: 0x49ffcc, Func Offset: 0x5c
	// Line 422, Address: 0x49ffd0, Func Offset: 0x60
	// Line 423, Address: 0x49ffd4, Func Offset: 0x64
	// Line 427, Address: 0x49ffdc, Func Offset: 0x6c
	// Line 429, Address: 0x49ffec, Func Offset: 0x7c
	// Line 433, Address: 0x49fff4, Func Offset: 0x84
	// Line 435, Address: 0x4a001c, Func Offset: 0xac
	// Line 438, Address: 0x4a003c, Func Offset: 0xcc
	// Line 441, Address: 0x4a005c, Func Offset: 0xec
	// Line 445, Address: 0x4a0080, Func Offset: 0x110
	// Line 450, Address: 0x4a0084, Func Offset: 0x114
	// Line 441, Address: 0x4a0088, Func Offset: 0x118
	// Line 445, Address: 0x4a008c, Func Offset: 0x11c
	// Line 450, Address: 0x4a0090, Func Offset: 0x120
	// Line 445, Address: 0x4a0098, Func Offset: 0x128
	// Line 450, Address: 0x4a009c, Func Offset: 0x12c
	// Line 461, Address: 0x4a00a0, Func Offset: 0x130
	// Line 441, Address: 0x4a00a4, Func Offset: 0x134
	// Line 442, Address: 0x4a011c, Func Offset: 0x1ac
	// Line 441, Address: 0x4a0120, Func Offset: 0x1b0
	// Line 442, Address: 0x4a0124, Func Offset: 0x1b4
	// Line 445, Address: 0x4a016c, Func Offset: 0x1fc
	// Line 442, Address: 0x4a0170, Func Offset: 0x200
	// Line 445, Address: 0x4a0178, Func Offset: 0x208
	// Line 442, Address: 0x4a017c, Func Offset: 0x20c
	// Line 445, Address: 0x4a0180, Func Offset: 0x210
	// Line 442, Address: 0x4a0184, Func Offset: 0x214
	// Line 445, Address: 0x4a0194, Func Offset: 0x224
	// Line 442, Address: 0x4a0198, Func Offset: 0x228
	// Line 445, Address: 0x4a019c, Func Offset: 0x22c
	// Line 442, Address: 0x4a01a0, Func Offset: 0x230
	// Line 450, Address: 0x4a01a4, Func Offset: 0x234
	// Line 442, Address: 0x4a01a8, Func Offset: 0x238
	// Line 445, Address: 0x4a01ac, Func Offset: 0x23c
	// Line 442, Address: 0x4a01b4, Func Offset: 0x244
	// Line 445, Address: 0x4a01b8, Func Offset: 0x248
	// Line 442, Address: 0x4a01c4, Func Offset: 0x254
	// Line 445, Address: 0x4a01c8, Func Offset: 0x258
	// Line 450, Address: 0x4a01e0, Func Offset: 0x270
	// Line 445, Address: 0x4a01e8, Func Offset: 0x278
	// Line 450, Address: 0x4a01f0, Func Offset: 0x280
	// Line 445, Address: 0x4a01f4, Func Offset: 0x284
	// Line 450, Address: 0x4a01f8, Func Offset: 0x288
	// Line 445, Address: 0x4a020c, Func Offset: 0x29c
	// Line 450, Address: 0x4a0210, Func Offset: 0x2a0
	// Line 445, Address: 0x4a0238, Func Offset: 0x2c8
	// Line 456, Address: 0x4a023c, Func Offset: 0x2cc
	// Line 445, Address: 0x4a0240, Func Offset: 0x2d0
	// Line 455, Address: 0x4a0248, Func Offset: 0x2d8
	// Line 450, Address: 0x4a024c, Func Offset: 0x2dc
	// Line 457, Address: 0x4a0250, Func Offset: 0x2e0
	// Line 450, Address: 0x4a0254, Func Offset: 0x2e4
	// Line 445, Address: 0x4a0258, Func Offset: 0x2e8
	// Line 463, Address: 0x4a025c, Func Offset: 0x2ec
	// Line 457, Address: 0x4a0260, Func Offset: 0x2f0
	// Line 455, Address: 0x4a0264, Func Offset: 0x2f4
	// Line 456, Address: 0x4a026c, Func Offset: 0x2fc
	// Line 469, Address: 0x4a0270, Func Offset: 0x300
	// Line 445, Address: 0x4a0274, Func Offset: 0x304
	// Line 464, Address: 0x4a0280, Func Offset: 0x310
	// Line 456, Address: 0x4a0284, Func Offset: 0x314
	// Line 450, Address: 0x4a0288, Func Offset: 0x318
	// Line 457, Address: 0x4a028c, Func Offset: 0x31c
	// Line 455, Address: 0x4a0290, Func Offset: 0x320
	// Line 445, Address: 0x4a0294, Func Offset: 0x324
	// Line 462, Address: 0x4a0298, Func Offset: 0x328
	// Line 450, Address: 0x4a029c, Func Offset: 0x32c
	// Line 457, Address: 0x4a02a0, Func Offset: 0x330
	// Line 467, Address: 0x4a02a4, Func Offset: 0x334
	// Line 458, Address: 0x4a02a8, Func Offset: 0x338
	// Line 455, Address: 0x4a02ac, Func Offset: 0x33c
	// Line 458, Address: 0x4a02b0, Func Offset: 0x340
	// Line 445, Address: 0x4a02b8, Func Offset: 0x348
	// Line 458, Address: 0x4a02bc, Func Offset: 0x34c
	// Line 464, Address: 0x4a02c0, Func Offset: 0x350
	// Line 461, Address: 0x4a02c4, Func Offset: 0x354
	// Line 450, Address: 0x4a02c8, Func Offset: 0x358
	// Line 468, Address: 0x4a02d0, Func Offset: 0x360
	// Line 461, Address: 0x4a02d4, Func Offset: 0x364
	// Line 463, Address: 0x4a02d8, Func Offset: 0x368
	// Line 462, Address: 0x4a02dc, Func Offset: 0x36c
	// Line 456, Address: 0x4a02e0, Func Offset: 0x370
	// Line 462, Address: 0x4a02e4, Func Offset: 0x374
	// Line 469, Address: 0x4a02e8, Func Offset: 0x378
	// Line 470, Address: 0x4a02f8, Func Offset: 0x388
	// Line 450, Address: 0x4a02fc, Func Offset: 0x38c
	// Line 470, Address: 0x4a0300, Func Offset: 0x390
	// Line 450, Address: 0x4a030c, Func Offset: 0x39c
	// Line 473, Address: 0x4a0310, Func Offset: 0x3a0
	// Line 456, Address: 0x4a0314, Func Offset: 0x3a4
	// Line 473, Address: 0x4a0318, Func Offset: 0x3a8
	// Line 462, Address: 0x4a031c, Func Offset: 0x3ac
	// Line 458, Address: 0x4a0320, Func Offset: 0x3b0
	// Line 474, Address: 0x4a0328, Func Offset: 0x3b8
	// Line 450, Address: 0x4a032c, Func Offset: 0x3bc
	// Line 468, Address: 0x4a0330, Func Offset: 0x3c0
	// Line 476, Address: 0x4a0334, Func Offset: 0x3c4
	// Line 470, Address: 0x4a0338, Func Offset: 0x3c8
	// Line 476, Address: 0x4a033c, Func Offset: 0x3cc
	// Line 457, Address: 0x4a0340, Func Offset: 0x3d0
	// Line 478, Address: 0x4a0350, Func Offset: 0x3e0
	// Line 457, Address: 0x4a0354, Func Offset: 0x3e4
	// Line 478, Address: 0x4a0358, Func Offset: 0x3e8
	// Line 450, Address: 0x4a035c, Func Offset: 0x3ec
	// Line 475, Address: 0x4a0360, Func Offset: 0x3f0
	// Line 455, Address: 0x4a0364, Func Offset: 0x3f4
	// Line 475, Address: 0x4a0368, Func Offset: 0x3f8
	// Line 474, Address: 0x4a036c, Func Offset: 0x3fc
	// Line 476, Address: 0x4a0370, Func Offset: 0x400
	// Line 464, Address: 0x4a0374, Func Offset: 0x404
	// Line 457, Address: 0x4a0378, Func Offset: 0x408
	// Line 478, Address: 0x4a0380, Func Offset: 0x410
	// Line 467, Address: 0x4a0384, Func Offset: 0x414
	// Line 455, Address: 0x4a0388, Func Offset: 0x418
	// Line 468, Address: 0x4a038c, Func Offset: 0x41c
	// Line 467, Address: 0x4a0390, Func Offset: 0x420
	// Line 474, Address: 0x4a0394, Func Offset: 0x424
	// Line 457, Address: 0x4a0398, Func Offset: 0x428
	// Line 458, Address: 0x4a039c, Func Offset: 0x42c
	// Line 478, Address: 0x4a03a0, Func Offset: 0x430
	// Line 458, Address: 0x4a03a8, Func Offset: 0x438
	// Line 461, Address: 0x4a03b0, Func Offset: 0x440
	// Line 458, Address: 0x4a03b4, Func Offset: 0x444
	// Line 461, Address: 0x4a03b8, Func Offset: 0x448
	// Line 464, Address: 0x4a03c0, Func Offset: 0x450
	// Line 461, Address: 0x4a03c4, Func Offset: 0x454
	// Line 475, Address: 0x4a03c8, Func Offset: 0x458
	// Line 463, Address: 0x4a03d0, Func Offset: 0x460
	// Line 475, Address: 0x4a03d4, Func Offset: 0x464
	// Line 463, Address: 0x4a03d8, Func Offset: 0x468
	// Line 468, Address: 0x4a03e0, Func Offset: 0x470
	// Line 470, Address: 0x4a03e4, Func Offset: 0x474
	// Line 467, Address: 0x4a03e8, Func Offset: 0x478
	// Line 473, Address: 0x4a03ec, Func Offset: 0x47c
	// Line 458, Address: 0x4a03f0, Func Offset: 0x480
	// Line 463, Address: 0x4a03f4, Func Offset: 0x484
	// Line 468, Address: 0x4a03f8, Func Offset: 0x488
	// Line 467, Address: 0x4a03fc, Func Offset: 0x48c
	// Line 474, Address: 0x4a0400, Func Offset: 0x490
	// Line 470, Address: 0x4a0404, Func Offset: 0x494
	// Line 458, Address: 0x4a0408, Func Offset: 0x498
	// Line 461, Address: 0x4a040c, Func Offset: 0x49c
	// Line 476, Address: 0x4a0410, Func Offset: 0x4a0
	// Line 463, Address: 0x4a0414, Func Offset: 0x4a4
	// Line 461, Address: 0x4a0418, Func Offset: 0x4a8
	// Line 473, Address: 0x4a041c, Func Offset: 0x4ac
	// Line 478, Address: 0x4a0420, Func Offset: 0x4b0
	// Line 482, Address: 0x4a0428, Func Offset: 0x4b8
	// Line 485, Address: 0x4a043c, Func Offset: 0x4cc
	// Line 489, Address: 0x4a044c, Func Offset: 0x4dc
	// Line 490, Address: 0x4a047c, Func Offset: 0x50c
	// Line 491, Address: 0x4a0480, Func Offset: 0x510
	// Line 492, Address: 0x4a0484, Func Offset: 0x514
	// Line 497, Address: 0x4a0488, Func Offset: 0x518
	// Line 498, Address: 0x4a048c, Func Offset: 0x51c
	// Line 499, Address: 0x4a0490, Func Offset: 0x520
	// Line 489, Address: 0x4a0494, Func Offset: 0x524
	// Line 490, Address: 0x4a0498, Func Offset: 0x528
	// Line 491, Address: 0x4a04a4, Func Offset: 0x534
	// Line 492, Address: 0x4a04b4, Func Offset: 0x544
	// Line 493, Address: 0x4a04bc, Func Offset: 0x54c
	// Line 494, Address: 0x4a04cc, Func Offset: 0x55c
	// Line 495, Address: 0x4a04d4, Func Offset: 0x564
	// Line 496, Address: 0x4a04e0, Func Offset: 0x570
	// Line 497, Address: 0x4a04e4, Func Offset: 0x574
	// Line 498, Address: 0x4a0508, Func Offset: 0x598
	// Line 499, Address: 0x4a052c, Func Offset: 0x5bc
	// Line 500, Address: 0x4a057c, Func Offset: 0x60c
	// Line 499, Address: 0x4a0580, Func Offset: 0x610
	// Line 500, Address: 0x4a0590, Func Offset: 0x620
	// Line 501, Address: 0x4a05e4, Func Offset: 0x674
	// Line 500, Address: 0x4a05e8, Func Offset: 0x678
	// Line 501, Address: 0x4a05f0, Func Offset: 0x680
	// Line 502, Address: 0x4a064c, Func Offset: 0x6dc
	// Func End, Address: 0x4a067c, Func Offset: 0x70c
}

// setup_flip_blit__FR14RwSkyVideoModeP14rwDMA_flipData
// Start address: 0x4a0680
void setup_flip_blit(RwSkyVideoMode& mode, rwDMA_flipData* fd)
{
	int32 width;
	int32 height;
	int32 gsregs;
	<unknown fundamental type (0xa510)>* pkt;
	int32 endx;
	int32 y1;
	float32 t1;
	int32 x;
	float32 s;
	<unknown fundamental type (0xa510)> packet_buffer[76];
	float32 t0;
	float32 one;
	// Line 324, Address: 0x4a0680, Func Offset: 0
	// Line 334, Address: 0x4a0690, Func Offset: 0x10
	// Line 335, Address: 0x4a0694, Func Offset: 0x14
	// Line 337, Address: 0x4a0698, Func Offset: 0x18
	// Line 347, Address: 0x4a06ac, Func Offset: 0x2c
	// Line 337, Address: 0x4a06b0, Func Offset: 0x30
	// Line 350, Address: 0x4a06b4, Func Offset: 0x34
	// Line 347, Address: 0x4a06c4, Func Offset: 0x44
	// Line 350, Address: 0x4a06c8, Func Offset: 0x48
	// Line 353, Address: 0x4a06d8, Func Offset: 0x58
	// Line 350, Address: 0x4a06dc, Func Offset: 0x5c
	// Line 353, Address: 0x4a06e0, Func Offset: 0x60
	// Line 356, Address: 0x4a0704, Func Offset: 0x84
	// Line 353, Address: 0x4a0708, Func Offset: 0x88
	// Line 356, Address: 0x4a070c, Func Offset: 0x8c
	// Line 357, Address: 0x4a0740, Func Offset: 0xc0
	// Line 356, Address: 0x4a0744, Func Offset: 0xc4
	// Line 357, Address: 0x4a0748, Func Offset: 0xc8
	// Line 358, Address: 0x4a0754, Func Offset: 0xd4
	// Line 357, Address: 0x4a0758, Func Offset: 0xd8
	// Line 358, Address: 0x4a075c, Func Offset: 0xdc
	// Line 359, Address: 0x4a077c, Func Offset: 0xfc
	// Line 358, Address: 0x4a0780, Func Offset: 0x100
	// Line 359, Address: 0x4a0784, Func Offset: 0x104
	// Line 360, Address: 0x4a0790, Func Offset: 0x110
	// Line 359, Address: 0x4a0794, Func Offset: 0x114
	// Line 360, Address: 0x4a0798, Func Offset: 0x118
	// Line 361, Address: 0x4a07ac, Func Offset: 0x12c
	// Line 360, Address: 0x4a07b0, Func Offset: 0x130
	// Line 361, Address: 0x4a07b4, Func Offset: 0x134
	// Line 362, Address: 0x4a07c0, Func Offset: 0x140
	// Line 361, Address: 0x4a07c4, Func Offset: 0x144
	// Line 362, Address: 0x4a07c8, Func Offset: 0x148
	// Line 363, Address: 0x4a07f0, Func Offset: 0x170
	// Line 362, Address: 0x4a07f4, Func Offset: 0x174
	// Line 363, Address: 0x4a07f8, Func Offset: 0x178
	// Line 364, Address: 0x4a0824, Func Offset: 0x1a4
	// Line 363, Address: 0x4a082c, Func Offset: 0x1ac
	// Line 364, Address: 0x4a0834, Func Offset: 0x1b4
	// Line 365, Address: 0x4a0874, Func Offset: 0x1f4
	// Line 364, Address: 0x4a0878, Func Offset: 0x1f8
	// Line 365, Address: 0x4a087c, Func Offset: 0x1fc
	// Line 366, Address: 0x4a0884, Func Offset: 0x204
	// Line 365, Address: 0x4a0888, Func Offset: 0x208
	// Line 366, Address: 0x4a088c, Func Offset: 0x20c
	// Line 367, Address: 0x4a0894, Func Offset: 0x214
	// Line 366, Address: 0x4a0898, Func Offset: 0x218
	// Line 367, Address: 0x4a089c, Func Offset: 0x21c
	// Line 368, Address: 0x4a08a4, Func Offset: 0x224
	// Line 367, Address: 0x4a08a8, Func Offset: 0x228
	// Line 368, Address: 0x4a08ac, Func Offset: 0x22c
	// Line 367, Address: 0x4a08b0, Func Offset: 0x230
	// Line 368, Address: 0x4a08b4, Func Offset: 0x234
	// Line 376, Address: 0x4a08bc, Func Offset: 0x23c
	// Line 371, Address: 0x4a08c0, Func Offset: 0x240
	// Line 368, Address: 0x4a08c4, Func Offset: 0x244
	// Line 373, Address: 0x4a08c8, Func Offset: 0x248
	// Line 376, Address: 0x4a08cc, Func Offset: 0x24c
	// Line 368, Address: 0x4a08d4, Func Offset: 0x254
	// Line 393, Address: 0x4a08d8, Func Offset: 0x258
	// Line 376, Address: 0x4a08dc, Func Offset: 0x25c
	// Line 368, Address: 0x4a08e0, Func Offset: 0x260
	// Line 380, Address: 0x4a08e4, Func Offset: 0x264
	// Line 376, Address: 0x4a08e8, Func Offset: 0x268
	// Line 379, Address: 0x4a08f4, Func Offset: 0x274
	// Line 376, Address: 0x4a08f8, Func Offset: 0x278
	// Line 393, Address: 0x4a0900, Func Offset: 0x280
	// Line 384, Address: 0x4a090c, Func Offset: 0x28c
	// Line 393, Address: 0x4a0910, Func Offset: 0x290
	// Line 388, Address: 0x4a0920, Func Offset: 0x2a0
	// Line 393, Address: 0x4a0928, Func Offset: 0x2a8
	// Line 388, Address: 0x4a0930, Func Offset: 0x2b0
	// Line 393, Address: 0x4a0934, Func Offset: 0x2b4
	// Line 384, Address: 0x4a0938, Func Offset: 0x2b8
	// Line 391, Address: 0x4a093c, Func Offset: 0x2bc
	// Line 393, Address: 0x4a0940, Func Offset: 0x2c0
	// Line 385, Address: 0x4a0950, Func Offset: 0x2d0
	// Line 393, Address: 0x4a0958, Func Offset: 0x2d8
	// Line 388, Address: 0x4a0968, Func Offset: 0x2e8
	// Line 393, Address: 0x4a096c, Func Offset: 0x2ec
	// Line 392, Address: 0x4a0980, Func Offset: 0x300
	// Line 393, Address: 0x4a0988, Func Offset: 0x308
	// Line 396, Address: 0x4a09a0, Func Offset: 0x320
	// Line 397, Address: 0x4a09b0, Func Offset: 0x330
	// Line 398, Address: 0x4a09c0, Func Offset: 0x340
	// Line 399, Address: 0x4a09d0, Func Offset: 0x350
	// Line 402, Address: 0x4a09e0, Func Offset: 0x360
	// Line 404, Address: 0x4a09f4, Func Offset: 0x374
	// Line 405, Address: 0x4a0a0c, Func Offset: 0x38c
	// Func End, Address: 0x4a0a1c, Func Offset: 0x39c
}

// setup_mixed_display__FR17mixed_display_enviii
// Start address: 0x4a0a20
void setup_mixed_display(mixed_display_env& db, int32 tv_type, int32 width, int32 height)
{
	// Line 226, Address: 0x4a0a20, Func Offset: 0
	// Line 230, Address: 0x4a0a2c, Func Offset: 0xc
	// Line 226, Address: 0x4a0a30, Func Offset: 0x10
	// Line 234, Address: 0x4a0a34, Func Offset: 0x14
	// Line 230, Address: 0x4a0a38, Func Offset: 0x18
	// Line 232, Address: 0x4a0a44, Func Offset: 0x24
	// Line 231, Address: 0x4a0a48, Func Offset: 0x28
	// Line 234, Address: 0x4a0a4c, Func Offset: 0x2c
	// Line 231, Address: 0x4a0a50, Func Offset: 0x30
	// Line 232, Address: 0x4a0a58, Func Offset: 0x38
	// Line 234, Address: 0x4a0a5c, Func Offset: 0x3c
	// Line 236, Address: 0x4a0a60, Func Offset: 0x40
	// Line 230, Address: 0x4a0a68, Func Offset: 0x48
	// Line 231, Address: 0x4a0a6c, Func Offset: 0x4c
	// Line 230, Address: 0x4a0a70, Func Offset: 0x50
	// Line 231, Address: 0x4a0a78, Func Offset: 0x58
	// Line 242, Address: 0x4a0a7c, Func Offset: 0x5c
	// Line 231, Address: 0x4a0a80, Func Offset: 0x60
	// Line 232, Address: 0x4a0a8c, Func Offset: 0x6c
	// Line 234, Address: 0x4a0a9c, Func Offset: 0x7c
	// Line 235, Address: 0x4a0aac, Func Offset: 0x8c
	// Line 236, Address: 0x4a0abc, Func Offset: 0x9c
	// Line 237, Address: 0x4a0acc, Func Offset: 0xac
	// Line 238, Address: 0x4a0adc, Func Offset: 0xbc
	// Line 239, Address: 0x4a0aec, Func Offset: 0xcc
	// Line 240, Address: 0x4a0afc, Func Offset: 0xdc
	// Line 242, Address: 0x4a0b08, Func Offset: 0xe8
	// Line 245, Address: 0x4a0b20, Func Offset: 0x100
	// Line 246, Address: 0x4a0b28, Func Offset: 0x108
	// Line 245, Address: 0x4a0b30, Func Offset: 0x110
	// Line 246, Address: 0x4a0b34, Func Offset: 0x114
	// Line 245, Address: 0x4a0b3c, Func Offset: 0x11c
	// Line 246, Address: 0x4a0b48, Func Offset: 0x128
	// Line 247, Address: 0x4a0b54, Func Offset: 0x134
	// Line 249, Address: 0x4a0b5c, Func Offset: 0x13c
	// Line 250, Address: 0x4a0b64, Func Offset: 0x144
	// Line 249, Address: 0x4a0b6c, Func Offset: 0x14c
	// Line 250, Address: 0x4a0b70, Func Offset: 0x150
	// Line 249, Address: 0x4a0b78, Func Offset: 0x158
	// Line 250, Address: 0x4a0b84, Func Offset: 0x164
	// Line 257, Address: 0x4a0b98, Func Offset: 0x178
	// Line 255, Address: 0x4a0ba8, Func Offset: 0x188
	// Line 253, Address: 0x4a0bac, Func Offset: 0x18c
	// Line 255, Address: 0x4a0bb0, Func Offset: 0x190
	// Line 253, Address: 0x4a0bb8, Func Offset: 0x198
	// Line 255, Address: 0x4a0bbc, Func Offset: 0x19c
	// Line 256, Address: 0x4a0bc0, Func Offset: 0x1a0
	// Line 255, Address: 0x4a0bc4, Func Offset: 0x1a4
	// Line 257, Address: 0x4a0bc8, Func Offset: 0x1a8
	// Line 258, Address: 0x4a0bd0, Func Offset: 0x1b0
	// Line 264, Address: 0x4a0be4, Func Offset: 0x1c4
	// Line 253, Address: 0x4a0bf0, Func Offset: 0x1d0
	// Line 254, Address: 0x4a0bf4, Func Offset: 0x1d4
	// Line 253, Address: 0x4a0bf8, Func Offset: 0x1d8
	// Line 254, Address: 0x4a0bfc, Func Offset: 0x1dc
	// Line 256, Address: 0x4a0c00, Func Offset: 0x1e0
	// Line 254, Address: 0x4a0c04, Func Offset: 0x1e4
	// Line 255, Address: 0x4a0c0c, Func Offset: 0x1ec
	// Line 253, Address: 0x4a0c14, Func Offset: 0x1f4
	// Line 256, Address: 0x4a0c18, Func Offset: 0x1f8
	// Line 253, Address: 0x4a0c1c, Func Offset: 0x1fc
	// Line 256, Address: 0x4a0c20, Func Offset: 0x200
	// Line 253, Address: 0x4a0c24, Func Offset: 0x204
	// Line 254, Address: 0x4a0c30, Func Offset: 0x210
	// Line 255, Address: 0x4a0c40, Func Offset: 0x220
	// Line 256, Address: 0x4a0c50, Func Offset: 0x230
	// Line 257, Address: 0x4a0c60, Func Offset: 0x240
	// Line 258, Address: 0x4a0c70, Func Offset: 0x250
	// Line 260, Address: 0x4a0c80, Func Offset: 0x260
	// Line 261, Address: 0x4a0c90, Func Offset: 0x270
	// Line 262, Address: 0x4a0ca0, Func Offset: 0x280
	// Line 264, Address: 0x4a0cb0, Func Offset: 0x290
	// Line 266, Address: 0x4a0cf8, Func Offset: 0x2d8
	// Func End, Address: 0x4a0d08, Func Offset: 0x2e8
}

