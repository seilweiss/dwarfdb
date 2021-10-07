



int32 HIPLReadString(st_HIPLOADDATA* lddata, int8* buf);
int32 HIPLReadFloats(st_HIPLOADDATA* lddata, float32* data, int32 cnt);
int32 HIPLReadLongs(st_HIPLOADDATA* lddata, int32* data, int32 cnt);
int32 HIPLReadShorts(st_HIPLOADDATA* lddata, int16* data, int32 cnt);
int32 HIPLReadBytes(st_HIPLOADDATA* lddata, int8* data, int32 cnt);
en_READ_ASYNC_STATUS HIPLPollRead(st_HIPLOADDATA* lddata);
int32 HIPLBypassRead(st_HIPLOADDATA* lddata, void* data, int32 cnt, int32 size);
int32 HIPLBlockRead(st_HIPLOADDATA* lddata, void* data, int32 cnt, int32 size);
void HIPLBlockExit(st_HIPLOADDATA* lddata);
uint32 HIPLBlockEnter(st_HIPLOADDATA* lddata);
void HIPLSetSpot(st_HIPLOADDATA* lddata, int32 spot);
int32 HIPLSetBypass(st_HIPLOADDATA* lddata, int32 enable, int32 use_async);
uint32 HIPLBaseSector(st_HIPLOADDATA* lddata);
void HIPLDestroy(st_HIPLOADDATA* lddata);
st_HIPLOADDATA* HIPLCreate(int8* filename, int8* dblbuf, int32 bufsize, int32 fileflags);
st_HIPLOADFUNCS* get_HIPLFuncs();

// HIPLReadString__FP14st_HIPLOADDATAPc
// Start address: 0x3d0b00
int32 HIPLReadString(st_HIPLOADDATA* lddata, int8* buf)
{
	int32 n;
	int8 pad;
	// Line 764, Address: 0x3d0b00, Func Offset: 0
	// Line 767, Address: 0x3d0b1c, Func Offset: 0x1c
	// Line 772, Address: 0x3d0b20, Func Offset: 0x20
	// Line 774, Address: 0x3d0b2c, Func Offset: 0x2c
	// Line 775, Address: 0x3d0b40, Func Offset: 0x40
	// Line 778, Address: 0x3d0b50, Func Offset: 0x50
	// Line 779, Address: 0x3d0b68, Func Offset: 0x68
	// Line 781, Address: 0x3d0b70, Func Offset: 0x70
	// Line 782, Address: 0x3d0b74, Func Offset: 0x74
	// Line 783, Address: 0x3d0b90, Func Offset: 0x90
	// Line 787, Address: 0x3d0bac, Func Offset: 0xac
	// Line 790, Address: 0x3d0bbc, Func Offset: 0xbc
	// Line 791, Address: 0x3d0bd4, Func Offset: 0xd4
	// Line 793, Address: 0x3d0bdc, Func Offset: 0xdc
	// Line 794, Address: 0x3d0be0, Func Offset: 0xe0
	// Line 795, Address: 0x3d0bfc, Func Offset: 0xfc
	// Line 797, Address: 0x3d0c00, Func Offset: 0x100
	// Line 798, Address: 0x3d0c04, Func Offset: 0x104
	// Func End, Address: 0x3d0c1c, Func Offset: 0x11c
}

// HIPLReadFloats__FP14st_HIPLOADDATAPfi
// Start address: 0x3d0c20
int32 HIPLReadFloats(st_HIPLOADDATA* lddata, float32* data, int32 cnt)
{
	int32 got;
	// Line 749, Address: 0x3d0c20, Func Offset: 0
	// Line 754, Address: 0x3d0c28, Func Offset: 0x8
	// Line 755, Address: 0x3d0c4c, Func Offset: 0x2c
	// Line 756, Address: 0x3d0c60, Func Offset: 0x40
	// Line 755, Address: 0x3d0c64, Func Offset: 0x44
	// Line 756, Address: 0x3d0c68, Func Offset: 0x48
	// Func End, Address: 0x3d0c70, Func Offset: 0x50
}

// HIPLReadLongs__FP14st_HIPLOADDATAPii
// Start address: 0x3d0c70
int32 HIPLReadLongs(st_HIPLOADDATA* lddata, int32* data, int32 cnt)
{
	int32 got;
	// Line 740, Address: 0x3d0c70, Func Offset: 0
	// Line 745, Address: 0x3d0c78, Func Offset: 0x8
	// Line 746, Address: 0x3d0c9c, Func Offset: 0x2c
	// Line 747, Address: 0x3d0cb0, Func Offset: 0x40
	// Line 746, Address: 0x3d0cb4, Func Offset: 0x44
	// Line 747, Address: 0x3d0cb8, Func Offset: 0x48
	// Func End, Address: 0x3d0cc0, Func Offset: 0x50
}

// HIPLReadShorts__FP14st_HIPLOADDATAPsi
// Start address: 0x3d0cc0
int32 HIPLReadShorts(st_HIPLOADDATA* lddata, int16* data, int32 cnt)
{
	int32 got;
	// Line 731, Address: 0x3d0cc0, Func Offset: 0
	// Line 736, Address: 0x3d0cc8, Func Offset: 0x8
	// Line 737, Address: 0x3d0cec, Func Offset: 0x2c
	// Line 738, Address: 0x3d0d00, Func Offset: 0x40
	// Line 737, Address: 0x3d0d04, Func Offset: 0x44
	// Line 738, Address: 0x3d0d08, Func Offset: 0x48
	// Func End, Address: 0x3d0d10, Func Offset: 0x50
}

// HIPLReadBytes__FP14st_HIPLOADDATAPci
// Start address: 0x3d0d10
int32 HIPLReadBytes(st_HIPLOADDATA* lddata, int8* data, int32 cnt)
{
	// Line 724, Address: 0x3d0d10, Func Offset: 0
	// Line 727, Address: 0x3d0d18, Func Offset: 0x8
	// Line 729, Address: 0x3d0d3c, Func Offset: 0x2c
	// Func End, Address: 0x3d0d48, Func Offset: 0x38
}

// HIPLPollRead__FP14st_HIPLOADDATA
// Start address: 0x3d0d50
en_READ_ASYNC_STATUS HIPLPollRead(st_HIPLOADDATA* lddata)
{
	en_READ_ASYNC_STATUS rdstat;
	en_BIO_ASYNC_ERRCODES pollstat;
	// Line 662, Address: 0x3d0d50, Func Offset: 0
	// Line 669, Address: 0x3d0d64, Func Offset: 0x14
	// Line 674, Address: 0x3d0d70, Func Offset: 0x20
	// Line 676, Address: 0x3d0d7c, Func Offset: 0x2c
	// Line 671, Address: 0x3d0d84, Func Offset: 0x34
	// Line 676, Address: 0x3d0d8c, Func Offset: 0x3c
	// Line 682, Address: 0x3d0d90, Func Offset: 0x40
	// Line 686, Address: 0x3d0d9c, Func Offset: 0x4c
	// Line 692, Address: 0x3d0dc8, Func Offset: 0x78
	// Line 693, Address: 0x3d0dcc, Func Offset: 0x7c
	// Line 696, Address: 0x3d0dd4, Func Offset: 0x84
	// Line 697, Address: 0x3d0dd8, Func Offset: 0x88
	// Line 702, Address: 0x3d0de0, Func Offset: 0x90
	// Line 706, Address: 0x3d0de4, Func Offset: 0x94
	// Line 707, Address: 0x3d0de8, Func Offset: 0x98
	// Func End, Address: 0x3d0dfc, Func Offset: 0xac
}

// HIPLBypassRead__FP14st_HIPLOADDATAPvii
// Start address: 0x3d0e00
int32 HIPLBypassRead(st_HIPLOADDATA* lddata, void* data, int32 cnt, int32 size)
{
	int32 got;
	// Line 595, Address: 0x3d0e00, Func Offset: 0
	// Line 597, Address: 0x3d0e04, Func Offset: 0x4
	// Line 595, Address: 0x3d0e08, Func Offset: 0x8
	// Line 606, Address: 0x3d0e18, Func Offset: 0x18
	// Line 608, Address: 0x3d0e28, Func Offset: 0x28
	// Line 614, Address: 0x3d0e34, Func Offset: 0x34
	// Line 620, Address: 0x3d0e3c, Func Offset: 0x3c
	// Line 621, Address: 0x3d0e44, Func Offset: 0x44
	// Line 624, Address: 0x3d0e50, Func Offset: 0x50
	// Line 627, Address: 0x3d0e5c, Func Offset: 0x5c
	// Line 628, Address: 0x3d0e6c, Func Offset: 0x6c
	// Line 633, Address: 0x3d0e78, Func Offset: 0x78
	// Line 610, Address: 0x3d0e80, Func Offset: 0x80
	// Line 633, Address: 0x3d0e88, Func Offset: 0x88
	// Line 611, Address: 0x3d0ea0, Func Offset: 0xa0
	// Line 633, Address: 0x3d0ea8, Func Offset: 0xa8
	// Line 623, Address: 0x3d0eb8, Func Offset: 0xb8
	// Line 633, Address: 0x3d0ec0, Func Offset: 0xc0
	// Line 626, Address: 0x3d0ed0, Func Offset: 0xd0
	// Line 634, Address: 0x3d0ed8, Func Offset: 0xd8
	// Func End, Address: 0x3d0eec, Func Offset: 0xec
}

// HIPLBlockRead__FP14st_HIPLOADDATAPvii
// Start address: 0x3d0ef0
int32 HIPLBlockRead(st_HIPLOADDATA* lddata, void* data, int32 cnt, int32 size)
{
	st_HIPLOADBLOCK* top;
	int32 got;
	int32 left;
	int32 head;
	// Line 521, Address: 0x3d0ef0, Func Offset: 0
	// Line 524, Address: 0x3d0ef4, Func Offset: 0x4
	// Line 521, Address: 0x3d0ef8, Func Offset: 0x8
	// Line 533, Address: 0x3d0f10, Func Offset: 0x20
	// Line 525, Address: 0x3d0f14, Func Offset: 0x24
	// Line 533, Address: 0x3d0f18, Func Offset: 0x28
	// Line 535, Address: 0x3d0f20, Func Offset: 0x30
	// Line 537, Address: 0x3d0f2c, Func Offset: 0x3c
	// Line 539, Address: 0x3d0f34, Func Offset: 0x44
	// Line 540, Address: 0x3d0f40, Func Offset: 0x50
	// Line 543, Address: 0x3d0f4c, Func Offset: 0x5c
	// Line 554, Address: 0x3d0f54, Func Offset: 0x64
	// Line 558, Address: 0x3d0f6c, Func Offset: 0x7c
	// Line 559, Address: 0x3d0f7c, Func Offset: 0x8c
	// Line 562, Address: 0x3d0f88, Func Offset: 0x98
	// Line 565, Address: 0x3d0f94, Func Offset: 0xa4
	// Line 566, Address: 0x3d0fa4, Func Offset: 0xb4
	// Line 571, Address: 0x3d0fb0, Func Offset: 0xc0
	// Line 572, Address: 0x3d0fbc, Func Offset: 0xcc
	// Line 574, Address: 0x3d0fd0, Func Offset: 0xe0
	// Line 537, Address: 0x3d0fd8, Func Offset: 0xe8
	// Line 544, Address: 0x3d0fe4, Func Offset: 0xf4
	// Line 574, Address: 0x3d0fe8, Func Offset: 0xf8
	// Line 561, Address: 0x3d1014, Func Offset: 0x124
	// Line 574, Address: 0x3d101c, Func Offset: 0x12c
	// Line 564, Address: 0x3d102c, Func Offset: 0x13c
	// Line 575, Address: 0x3d1034, Func Offset: 0x144
	// Func End, Address: 0x3d104c, Func Offset: 0x15c
}

// HIPLBlockExit__FP14st_HIPLOADDATA
// Start address: 0x3d1050
void HIPLBlockExit(st_HIPLOADDATA* lddata)
{
	st_HIPLOADBLOCK* top;
	// Line 484, Address: 0x3d1050, Func Offset: 0
	// Line 491, Address: 0x3d1060, Func Offset: 0x10
	// Line 498, Address: 0x3d106c, Func Offset: 0x1c
	// Line 501, Address: 0x3d1084, Func Offset: 0x34
	// Line 498, Address: 0x3d1088, Func Offset: 0x38
	// Line 501, Address: 0x3d108c, Func Offset: 0x3c
	// Line 504, Address: 0x3d109c, Func Offset: 0x4c
	// Line 507, Address: 0x3d10a4, Func Offset: 0x54
	// Func End, Address: 0x3d10b8, Func Offset: 0x68
}

// HIPLBlockEnter__FP14st_HIPLOADDATA
// Start address: 0x3d10c0
uint32 HIPLBlockEnter(st_HIPLOADDATA* lddata)
{
	st_HIPLOADBLOCK* top;
	uint32 cid;
	int32 size;
	// Line 421, Address: 0x3d10c0, Func Offset: 0
	// Line 424, Address: 0x3d10cc, Func Offset: 0xc
	// Line 425, Address: 0x3d10d0, Func Offset: 0x10
	// Line 431, Address: 0x3d10d8, Func Offset: 0x18
	// Line 440, Address: 0x3d10e4, Func Offset: 0x24
	// Line 442, Address: 0x3d10ec, Func Offset: 0x2c
	// Line 443, Address: 0x3d1100, Func Offset: 0x40
	// Line 433, Address: 0x3d1108, Func Offset: 0x48
	// Line 447, Address: 0x3d1110, Func Offset: 0x50
	// Line 448, Address: 0x3d1144, Func Offset: 0x84
	// Line 452, Address: 0x3d1160, Func Offset: 0xa0
	// Line 461, Address: 0x3d119c, Func Offset: 0xdc
	// Line 462, Address: 0x3d11a4, Func Offset: 0xe4
	// Line 466, Address: 0x3d11b8, Func Offset: 0xf8
	// Line 469, Address: 0x3d11cc, Func Offset: 0x10c
	// Line 470, Address: 0x3d11d4, Func Offset: 0x114
	// Line 474, Address: 0x3d11dc, Func Offset: 0x11c
	// Line 470, Address: 0x3d11e0, Func Offset: 0x120
	// Line 474, Address: 0x3d11e4, Func Offset: 0x124
	// Line 475, Address: 0x3d11f4, Func Offset: 0x134
	// Line 478, Address: 0x3d11f8, Func Offset: 0x138
	// Line 448, Address: 0x3d1200, Func Offset: 0x140
	// Line 479, Address: 0x3d1208, Func Offset: 0x148
	// Func End, Address: 0x3d1218, Func Offset: 0x158
}

// HIPLSetSpot__FP14st_HIPLOADDATAi
// Start address: 0x3d1220
void HIPLSetSpot(st_HIPLOADDATA* lddata, int32 spot)
{
	// Line 376, Address: 0x3d1220, Func Offset: 0
	// Line 381, Address: 0x3d1228, Func Offset: 0x8
	// Line 399, Address: 0x3d1234, Func Offset: 0x14
	// Line 401, Address: 0x3d123c, Func Offset: 0x1c
	// Line 405, Address: 0x3d1248, Func Offset: 0x28
	// Func End, Address: 0x3d1254, Func Offset: 0x34
}

// HIPLSetBypass__FP14st_HIPLOADDATAii
// Start address: 0x3d1260
int32 HIPLSetBypass(st_HIPLOADDATA* lddata, int32 enable, int32 use_async)
{
	// Line 336, Address: 0x3d1260, Func Offset: 0
	// Line 341, Address: 0x3d1280, Func Offset: 0x20
	// Line 344, Address: 0x3d128c, Func Offset: 0x2c
	// Line 348, Address: 0x3d1294, Func Offset: 0x34
	// Line 354, Address: 0x3d129c, Func Offset: 0x3c
	// Line 356, Address: 0x3d12a4, Func Offset: 0x44
	// Line 357, Address: 0x3d12a8, Func Offset: 0x48
	// Line 358, Address: 0x3d12ac, Func Offset: 0x4c
	// Line 367, Address: 0x3d12b8, Func Offset: 0x58
	// Line 346, Address: 0x3d12cc, Func Offset: 0x6c
	// Line 367, Address: 0x3d12d4, Func Offset: 0x74
	// Line 350, Address: 0x3d12e0, Func Offset: 0x80
	// Line 367, Address: 0x3d12e8, Func Offset: 0x88
	// Line 364, Address: 0x3d12fc, Func Offset: 0x9c
	// Line 367, Address: 0x3d1300, Func Offset: 0xa0
	// Line 368, Address: 0x3d130c, Func Offset: 0xac
	// Func End, Address: 0x3d1324, Func Offset: 0xc4
}

// HIPLBaseSector__FP14st_HIPLOADDATA
// Start address: 0x3d1330
uint32 HIPLBaseSector(st_HIPLOADDATA* lddata)
{
	// Line 321, Address: 0x3d1330, Func Offset: 0
	// Func End, Address: 0x3d1338, Func Offset: 0x8
}

// HIPLDestroy__FP14st_HIPLOADDATA
// Start address: 0x3d1340
void HIPLDestroy(st_HIPLOADDATA* lddata)
{
	int32 lockid;
	// Line 299, Address: 0x3d1340, Func Offset: 0
	// Line 303, Address: 0x3d1350, Func Offset: 0x10
	// Line 306, Address: 0x3d135c, Func Offset: 0x1c
	// Line 309, Address: 0x3d1370, Func Offset: 0x30
	// Line 310, Address: 0x3d1374, Func Offset: 0x34
	// Line 311, Address: 0x3d1384, Func Offset: 0x44
	// Line 314, Address: 0x3d139c, Func Offset: 0x5c
	// Func End, Address: 0x3d13b0, Func Offset: 0x70
}

// HIPLCreate__FPCcPcii
// Start address: 0x3d13b0
st_HIPLOADDATA* HIPLCreate(int8* filename, int8* dblbuf, int32 bufsize, int32 fileflags)
{
	st_HIPLOADDATA* lddata;
	st_FILELOADINFO* fli;
	st_HIPLOADBLOCK* tmp_blk;
	int32 i;
	int32 uselock;
	// Line 225, Address: 0x3d13b0, Func Offset: 0
	// Line 227, Address: 0x3d13e0, Func Offset: 0x30
	// Line 236, Address: 0x3d13e4, Func Offset: 0x34
	// Line 231, Address: 0x3d13e8, Func Offset: 0x38
	// Line 236, Address: 0x3d13ec, Func Offset: 0x3c
	// Line 237, Address: 0x3d13f8, Func Offset: 0x48
	// Line 238, Address: 0x3d1404, Func Offset: 0x54
	// Line 239, Address: 0x3d1408, Func Offset: 0x58
	// Line 240, Address: 0x3d140c, Func Offset: 0x5c
	// Line 239, Address: 0x3d1410, Func Offset: 0x60
	// Line 238, Address: 0x3d1428, Func Offset: 0x78
	// Line 241, Address: 0x3d142c, Func Offset: 0x7c
	// Line 243, Address: 0x3d1434, Func Offset: 0x84
	// Line 246, Address: 0x3d1448, Func Offset: 0x98
	// Line 247, Address: 0x3d1450, Func Offset: 0xa0
	// Line 250, Address: 0x3d1460, Func Offset: 0xb0
	// Line 252, Address: 0x3d1464, Func Offset: 0xb4
	// Line 270, Address: 0x3d146c, Func Offset: 0xbc
	// Line 254, Address: 0x3d1470, Func Offset: 0xc0
	// Line 270, Address: 0x3d1474, Func Offset: 0xc4
	// Line 255, Address: 0x3d1478, Func Offset: 0xc8
	// Line 256, Address: 0x3d147c, Func Offset: 0xcc
	// Line 257, Address: 0x3d1480, Func Offset: 0xd0
	// Line 258, Address: 0x3d1484, Func Offset: 0xd4
	// Line 260, Address: 0x3d1488, Func Offset: 0xd8
	// Line 261, Address: 0x3d148c, Func Offset: 0xdc
	// Line 264, Address: 0x3d1490, Func Offset: 0xe0
	// Line 265, Address: 0x3d1494, Func Offset: 0xe4
	// Line 266, Address: 0x3d1498, Func Offset: 0xe8
	// Line 267, Address: 0x3d149c, Func Offset: 0xec
	// Line 270, Address: 0x3d150c, Func Offset: 0x15c
	// Line 271, Address: 0x3d1514, Func Offset: 0x164
	// Line 272, Address: 0x3d151c, Func Offset: 0x16c
	// Line 273, Address: 0x3d1520, Func Offset: 0x170
	// Line 277, Address: 0x3d1524, Func Offset: 0x174
	// Line 278, Address: 0x3d1534, Func Offset: 0x184
	// Line 280, Address: 0x3d1544, Func Offset: 0x194
	// Line 283, Address: 0x3d154c, Func Offset: 0x19c
	// Line 284, Address: 0x3d1598, Func Offset: 0x1e8
	// Line 289, Address: 0x3d159c, Func Offset: 0x1ec
	// Line 290, Address: 0x3d15a0, Func Offset: 0x1f0
	// Func End, Address: 0x3d15c4, Func Offset: 0x214
}

// get_HIPLFuncs__Fv
// Start address: 0x3d15d0
st_HIPLOADFUNCS* get_HIPLFuncs()
{
	// Line 200, Address: 0x3d15d0, Func Offset: 0
	// Line 201, Address: 0x3d15d4, Func Offset: 0x4
	// Func End, Address: 0x3d15dc, Func Offset: 0xc
}

