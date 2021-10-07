



en_BIO_ASYNC_ERRCODES BFD_AsyncReadStatus(st_FILELOADINFO* fli);
int32 BFD_AsyncRead(st_FILELOADINFO* fli, int32 pos, void* data, int32 size, int32 n);
void BFD_cb_GCP2_readasync();
int32 BFD_read(void* data, int32 elesize, int32 elecnt, tag_xFile* bffp, void* xtradata);
tag_xFile* BFD_open(int8* filename, int8* mode, uint32 lockid, void* xtradata, int32 fileflags);
void Swap8(int8* d, int32 n);
en_BIO_ASYNC_ERRCODES AsyncReadStatus(st_FILELOADINFO* fli);
int32 AsyncIRead(st_FILELOADINFO* fli, int32 offset, int8* data, int32 size, int32 n);
int32 AsyncMRead(st_FILELOADINFO* fli, int32 offset, int8* data, int32 size, int32 n);
int32 ReadIDoubles(st_FILELOADINFO* fli, float64* data, int32 count);
int32 ReadIFloats(st_FILELOADINFO* fli, float32* data, int32 count);
int32 ReadILongs(st_FILELOADINFO* fli, int32* data, int32 count);
int32 ReadIShorts(st_FILELOADINFO* fli, int16* data, int32 count);
int32 ReadMDoubles(st_FILELOADINFO* fli, float64* data, int32 count);
int32 ReadMFloats(st_FILELOADINFO* fli, float32* data, int32 count);
int32 ReadMLongs(st_FILELOADINFO* fli, int32* data, int32 count);
int32 ReadMShorts(st_FILELOADINFO* fli, int16* data, int32 count);
int32 ReadBytes(st_FILELOADINFO* fli, int8* data, int32 count);
int32 ReadRaw(st_FILELOADINFO* fli, void* data, int32 size, int32 count);
void DiscardBuffer(st_FILELOADINFO* fli);
void SetBuffer(st_FILELOADINFO* fli, int8* dblbuffer, int32 bufsize);
int32 ReadSeek(st_FILELOADINFO* fli, int32 pos);
int32 SkipBytes(st_FILELOADINFO* fli, int32 fwd);
void LoadDestroy(st_FILELOADINFO* fli);
st_FILELOADINFO* xBinioLoadCreate(int8* filename, int32 fileflags);

// BFD_AsyncReadStatus__FP15st_FILELOADINFO
// Start address: 0x43a480
en_BIO_ASYNC_ERRCODES BFD_AsyncReadStatus(st_FILELOADINFO* fli)
{
	en_BIO_ASYNC_ERRCODES status;
	st_BINIO_XTRADATA* xtra;
	XFILE_READSECTOR_STATUS xrdstat;
	int32 amtsofar;
	// Line 2118, Address: 0x43a480, Func Offset: 0
	// Line 2120, Address: 0x43a48c, Func Offset: 0xc
	// Line 2124, Address: 0x43a490, Func Offset: 0x10
	// Line 2127, Address: 0x43a498, Func Offset: 0x18
	// Line 2129, Address: 0x43a4a0, Func Offset: 0x20
	// Line 2124, Address: 0x43a4a8, Func Offset: 0x28
	// Line 2134, Address: 0x43a4b0, Func Offset: 0x30
	// Line 2158, Address: 0x43a4c0, Func Offset: 0x40
	// Line 2159, Address: 0x43a4c4, Func Offset: 0x44
	// Line 2165, Address: 0x43a4d8, Func Offset: 0x58
	// Line 2139, Address: 0x43a4fc, Func Offset: 0x7c
	// Line 2165, Address: 0x43a500, Func Offset: 0x80
	// Line 2139, Address: 0x43a504, Func Offset: 0x84
	// Line 2143, Address: 0x43a514, Func Offset: 0x94
	// Line 2144, Address: 0x43a518, Func Offset: 0x98
	// Line 2146, Address: 0x43a520, Func Offset: 0xa0
	// Line 2147, Address: 0x43a524, Func Offset: 0xa4
	// Line 2152, Address: 0x43a52c, Func Offset: 0xac
	// Line 2165, Address: 0x43a538, Func Offset: 0xb8
	// Line 2166, Address: 0x43a544, Func Offset: 0xc4
	// Func End, Address: 0x43a554, Func Offset: 0xd4
}

// BFD_AsyncRead__FP15st_FILELOADINFOiPviii
// Start address: 0x43a560
int32 BFD_AsyncRead(st_FILELOADINFO* fli, int32 pos, void* data, int32 size, int32 n)
{
	tag_xFile* file;
	st_BINIO_XTRADATA* xtra;
	int32 result;
	int32 rc;
	// Line 1982, Address: 0x43a560, Func Offset: 0
	// Line 1998, Address: 0x43a58c, Func Offset: 0x2c
	// Line 1983, Address: 0x43a590, Func Offset: 0x30
	// Line 1984, Address: 0x43a594, Func Offset: 0x34
	// Line 1998, Address: 0x43a598, Func Offset: 0x38
	// Line 2000, Address: 0x43a5a0, Func Offset: 0x40
	// Line 1998, Address: 0x43a5b4, Func Offset: 0x54
	// Line 2003, Address: 0x43a5bc, Func Offset: 0x5c
	// Line 2005, Address: 0x43a5c0, Func Offset: 0x60
	// Line 2069, Address: 0x43a5c8, Func Offset: 0x68
	// Line 2006, Address: 0x43a5cc, Func Offset: 0x6c
	// Line 2069, Address: 0x43a5d0, Func Offset: 0x70
	// Line 2007, Address: 0x43a5d4, Func Offset: 0x74
	// Line 2008, Address: 0x43a5d8, Func Offset: 0x78
	// Line 2069, Address: 0x43a5dc, Func Offset: 0x7c
	// Line 2075, Address: 0x43a5e4, Func Offset: 0x84
	// Line 2077, Address: 0x43a604, Func Offset: 0xa4
	// Line 2081, Address: 0x43a60c, Func Offset: 0xac
	// Line 2082, Address: 0x43a610, Func Offset: 0xb0
	// Line 2086, Address: 0x43a614, Func Offset: 0xb4
	// Line 2113, Address: 0x43a61c, Func Offset: 0xbc
	// Line 2077, Address: 0x43a624, Func Offset: 0xc4
	// Line 2113, Address: 0x43a62c, Func Offset: 0xcc
	// Line 2114, Address: 0x43a638, Func Offset: 0xd8
	// Func End, Address: 0x43a65c, Func Offset: 0xfc
}

// BFD_cb_GCP2_readasync__FP9tag_xFile
// Start address: 0x43a660
void BFD_cb_GCP2_readasync()
{
	// Line 1976, Address: 0x43a660, Func Offset: 0
	// Func End, Address: 0x43a668, Func Offset: 0x8
}

// BFD_read__FPviiP9tag_xFilePv
// Start address: 0x43a670
int32 BFD_read(void* data, int32 elesize, int32 elecnt, tag_xFile* bffp, void* xtradata)
{
	st_BINIO_XTRADATA* xtra;
	int8* dest;
	int32 readbeg;
	int32 refill;
	int32 remain;
	int32 actual;
	uint32 holdpos;
	uint32 safety;
	uint32 numBytes;
	// Line 1700, Address: 0x43a670, Func Offset: 0
	// Line 1717, Address: 0x43a688, Func Offset: 0x18
	// Line 1700, Address: 0x43a68c, Func Offset: 0x1c
	// Line 1706, Address: 0x43a690, Func Offset: 0x20
	// Line 1700, Address: 0x43a694, Func Offset: 0x24
	// Line 1702, Address: 0x43a6a0, Func Offset: 0x30
	// Line 1700, Address: 0x43a6a4, Func Offset: 0x34
	// Line 1708, Address: 0x43a6ac, Func Offset: 0x3c
	// Line 1700, Address: 0x43a6b0, Func Offset: 0x40
	// Line 1715, Address: 0x43a6b4, Func Offset: 0x44
	// Line 1722, Address: 0x43a6b8, Func Offset: 0x48
	// Line 1724, Address: 0x43a6c0, Func Offset: 0x50
	// Line 1752, Address: 0x43a6e0, Func Offset: 0x70
	// Line 1761, Address: 0x43a6e4, Func Offset: 0x74
	// Line 1772, Address: 0x43a6f4, Func Offset: 0x84
	// Line 1775, Address: 0x43a704, Func Offset: 0x94
	// Line 1779, Address: 0x43a708, Func Offset: 0x98
	// Line 1775, Address: 0x43a70c, Func Offset: 0x9c
	// Line 1777, Address: 0x43a71c, Func Offset: 0xac
	// Line 1778, Address: 0x43a72c, Func Offset: 0xbc
	// Line 1786, Address: 0x43a730, Func Offset: 0xc0
	// Line 1810, Address: 0x43a738, Func Offset: 0xc8
	// Line 1817, Address: 0x43a748, Func Offset: 0xd8
	// Line 1818, Address: 0x43a754, Func Offset: 0xe4
	// Line 1823, Address: 0x43a768, Func Offset: 0xf8
	// Line 1826, Address: 0x43a780, Func Offset: 0x110
	// Line 1825, Address: 0x43a784, Func Offset: 0x114
	// Line 1827, Address: 0x43a788, Func Offset: 0x118
	// Line 1826, Address: 0x43a78c, Func Offset: 0x11c
	// Line 1828, Address: 0x43a794, Func Offset: 0x124
	// Line 1832, Address: 0x43a798, Func Offset: 0x128
	// Line 1833, Address: 0x43a7a0, Func Offset: 0x130
	// Line 1836, Address: 0x43a7ac, Func Offset: 0x13c
	// Line 1840, Address: 0x43a7bc, Func Offset: 0x14c
	// Line 1842, Address: 0x43a7c0, Func Offset: 0x150
	// Line 1722, Address: 0x43a7d0, Func Offset: 0x160
	// Line 1842, Address: 0x43a7d8, Func Offset: 0x168
	// Line 1738, Address: 0x43a7dc, Func Offset: 0x16c
	// Line 1842, Address: 0x43a7e0, Func Offset: 0x170
	// Line 1739, Address: 0x43a7e8, Func Offset: 0x178
	// Line 1842, Address: 0x43a7f0, Func Offset: 0x180
	// Line 1739, Address: 0x43a7f8, Func Offset: 0x188
	// Line 1842, Address: 0x43a7fc, Func Offset: 0x18c
	// Line 1746, Address: 0x43a804, Func Offset: 0x194
	// Line 1842, Address: 0x43a80c, Func Offset: 0x19c
	// Line 1770, Address: 0x43a810, Func Offset: 0x1a0
	// Line 1766, Address: 0x43a814, Func Offset: 0x1a4
	// Line 1842, Address: 0x43a81c, Func Offset: 0x1ac
	// Line 1771, Address: 0x43a834, Func Offset: 0x1c4
	// Line 1842, Address: 0x43a840, Func Offset: 0x1d0
	// Line 1789, Address: 0x43a848, Func Offset: 0x1d8
	// Line 1842, Address: 0x43a84c, Func Offset: 0x1dc
	// Line 1843, Address: 0x43a870, Func Offset: 0x200
	// Func End, Address: 0x43a8a0, Func Offset: 0x230
}

// BFD_open__FPCcPCcUiiPvi
// Start address: 0x43a8a0
tag_xFile* BFD_open(int8* filename, int8* mode, uint32 lockid, void* xtradata, int32 fileflags)
{
	tag_xFile* bffp;
	uint32 orc;
	st_BINIO_XTRADATA* xtra;
	int32 xfflg;
	// Line 1580, Address: 0x43a8a0, Func Offset: 0
	// Line 1592, Address: 0x43a8c0, Func Offset: 0x20
	// Line 1580, Address: 0x43a8c4, Func Offset: 0x24
	// Line 1592, Address: 0x43a8d8, Func Offset: 0x38
	// Line 1593, Address: 0x43a8f0, Func Offset: 0x50
	// Line 1614, Address: 0x43a910, Func Offset: 0x70
	// Line 1615, Address: 0x43a918, Func Offset: 0x78
	// Line 1618, Address: 0x43a928, Func Offset: 0x88
	// Line 1621, Address: 0x43a930, Func Offset: 0x90
	// Line 1624, Address: 0x43a934, Func Offset: 0x94
	// Line 1626, Address: 0x43a944, Func Offset: 0xa4
	// Line 1630, Address: 0x43a94c, Func Offset: 0xac
	// Line 1596, Address: 0x43a954, Func Offset: 0xb4
	// Line 1630, Address: 0x43a958, Func Offset: 0xb8
	// Line 1599, Address: 0x43a968, Func Offset: 0xc8
	// Line 1601, Address: 0x43a96c, Func Offset: 0xcc
	// Line 1633, Address: 0x43a97c, Func Offset: 0xdc
	// Line 1634, Address: 0x43a980, Func Offset: 0xe0
	// Line 1635, Address: 0x43a984, Func Offset: 0xe4
	// Line 1636, Address: 0x43a988, Func Offset: 0xe8
	// Line 1637, Address: 0x43a98c, Func Offset: 0xec
	// Line 1638, Address: 0x43a990, Func Offset: 0xf0
	// Line 1643, Address: 0x43a994, Func Offset: 0xf4
	// Line 1644, Address: 0x43a998, Func Offset: 0xf8
	// Func End, Address: 0x43a9bc, Func Offset: 0x11c
}

// Swap8__FPci
// Start address: 0x43a9c0
void Swap8(int8* d, int32 n)
{
	int8 t;
	// Line 1278, Address: 0x43a9c0, Func Offset: 0
	// Line 1279, Address: 0x43a9cc, Func Offset: 0xc
	// Line 1296, Address: 0x43a9d0, Func Offset: 0x10
	// Line 1280, Address: 0x43a9d4, Func Offset: 0x14
	// Line 1296, Address: 0x43a9d8, Func Offset: 0x18
	// Line 1280, Address: 0x43a9dc, Func Offset: 0x1c
	// Line 1281, Address: 0x43a9e0, Func Offset: 0x20
	// Line 1283, Address: 0x43a9e4, Func Offset: 0x24
	// Line 1284, Address: 0x43a9e8, Func Offset: 0x28
	// Line 1285, Address: 0x43a9f0, Func Offset: 0x30
	// Line 1287, Address: 0x43a9f4, Func Offset: 0x34
	// Line 1288, Address: 0x43a9f8, Func Offset: 0x38
	// Line 1289, Address: 0x43aa00, Func Offset: 0x40
	// Line 1291, Address: 0x43aa04, Func Offset: 0x44
	// Line 1292, Address: 0x43aa08, Func Offset: 0x48
	// Line 1293, Address: 0x43aa10, Func Offset: 0x50
	// Line 1296, Address: 0x43aa14, Func Offset: 0x54
	// Line 1298, Address: 0x43aa20, Func Offset: 0x60
	// Func End, Address: 0x43aa28, Func Offset: 0x68
}

// AsyncReadStatus__FP15st_FILELOADINFO
// Start address: 0x43aa30
en_BIO_ASYNC_ERRCODES AsyncReadStatus(st_FILELOADINFO* fli)
{
	// Line 848, Address: 0x43aa30, Func Offset: 0
	// Func End, Address: 0x43aa38, Func Offset: 0x8
}

// AsyncIRead__FP15st_FILELOADINFOiPcii
// Start address: 0x43aa40
int32 AsyncIRead(st_FILELOADINFO* fli, int32 offset, int8* data, int32 size, int32 n)
{
	// Line 842, Address: 0x43aa40, Func Offset: 0
	// Func End, Address: 0x43aa48, Func Offset: 0x8
}

// AsyncMRead__FP15st_FILELOADINFOiPcii
// Start address: 0x43aa50
int32 AsyncMRead(st_FILELOADINFO* fli, int32 offset, int8* data, int32 size, int32 n)
{
	// Line 836, Address: 0x43aa50, Func Offset: 0
	// Func End, Address: 0x43aa58, Func Offset: 0x8
}

// ReadIDoubles__FP15st_FILELOADINFOPdi
// Start address: 0x43aa60
int32 ReadIDoubles(st_FILELOADINFO* fli, float64* data, int32 count)
{
	int32 act;
	// Line 826, Address: 0x43aa64, Func Offset: 0x4
	// Func End, Address: 0x43aa6c, Func Offset: 0xc
}

// ReadIFloats__FP15st_FILELOADINFOPfi
// Start address: 0x43aa70
int32 ReadIFloats(st_FILELOADINFO* fli, float32* data, int32 count)
{
	int32 act;
	// Line 813, Address: 0x43aa74, Func Offset: 0x4
	// Func End, Address: 0x43aa7c, Func Offset: 0xc
}

// ReadILongs__FP15st_FILELOADINFOPii
// Start address: 0x43aa80
int32 ReadILongs(st_FILELOADINFO* fli, int32* data, int32 count)
{
	int32 act;
	// Line 799, Address: 0x43aa84, Func Offset: 0x4
	// Func End, Address: 0x43aa8c, Func Offset: 0xc
}

// ReadIShorts__FP15st_FILELOADINFOPsi
// Start address: 0x43aa90
int32 ReadIShorts(st_FILELOADINFO* fli, int16* data, int32 count)
{
	int32 act;
	// Line 786, Address: 0x43aa94, Func Offset: 0x4
	// Func End, Address: 0x43aa9c, Func Offset: 0xc
}

// ReadMDoubles__FP15st_FILELOADINFOPdi
// Start address: 0x43aaa0
int32 ReadMDoubles(st_FILELOADINFO* fli, float64* data, int32 count)
{
	int32 act;
	// Line 769, Address: 0x43aaa0, Func Offset: 0
	// Line 771, Address: 0x43aaac, Func Offset: 0xc
	// Line 769, Address: 0x43aab0, Func Offset: 0x10
	// Line 771, Address: 0x43aab4, Func Offset: 0x14
	// Line 772, Address: 0x43aabc, Func Offset: 0x1c
	// Line 774, Address: 0x43aac8, Func Offset: 0x28
	// Func End, Address: 0x43aad8, Func Offset: 0x38
}

// ReadMFloats__FP15st_FILELOADINFOPfi
// Start address: 0x43aae0
int32 ReadMFloats(st_FILELOADINFO* fli, float32* data, int32 count)
{
	int32 act;
	// Line 756, Address: 0x43aae0, Func Offset: 0
	// Line 758, Address: 0x43aaec, Func Offset: 0xc
	// Line 756, Address: 0x43aaf0, Func Offset: 0x10
	// Line 758, Address: 0x43aaf4, Func Offset: 0x14
	// Line 759, Address: 0x43aafc, Func Offset: 0x1c
	// Line 761, Address: 0x43ab40, Func Offset: 0x60
	// Func End, Address: 0x43ab50, Func Offset: 0x70
}

// ReadMLongs__FP15st_FILELOADINFOPii
// Start address: 0x43ab50
int32 ReadMLongs(st_FILELOADINFO* fli, int32* data, int32 count)
{
	int32 act;
	// Line 741, Address: 0x43ab50, Func Offset: 0
	// Line 743, Address: 0x43ab5c, Func Offset: 0xc
	// Line 741, Address: 0x43ab60, Func Offset: 0x10
	// Line 743, Address: 0x43ab64, Func Offset: 0x14
	// Line 744, Address: 0x43ab6c, Func Offset: 0x1c
	// Line 746, Address: 0x43abb0, Func Offset: 0x60
	// Func End, Address: 0x43abc0, Func Offset: 0x70
}

// ReadMShorts__FP15st_FILELOADINFOPsi
// Start address: 0x43abc0
int32 ReadMShorts(st_FILELOADINFO* fli, int16* data, int32 count)
{
	int32 act;
	// Line 727, Address: 0x43abc0, Func Offset: 0
	// Line 729, Address: 0x43abcc, Func Offset: 0xc
	// Line 727, Address: 0x43abd0, Func Offset: 0x10
	// Line 729, Address: 0x43abd4, Func Offset: 0x14
	// Line 730, Address: 0x43abdc, Func Offset: 0x1c
	// Line 732, Address: 0x43ac10, Func Offset: 0x50
	// Func End, Address: 0x43ac20, Func Offset: 0x60
}

// ReadBytes__FP15st_FILELOADINFOPci
// Start address: 0x43ac20
int32 ReadBytes(st_FILELOADINFO* fli, int8* data, int32 count)
{
	int32 act;
	// Line 714, Address: 0x43ac24, Func Offset: 0x4
	// Func End, Address: 0x43ac2c, Func Offset: 0xc
}

// ReadRaw__FP15st_FILELOADINFOPvii
// Start address: 0x43ac30
int32 ReadRaw(st_FILELOADINFO* fli, void* data, int32 size, int32 count)
{
	tag_xFile* file;
	int32 amt;
	int32 n;
	// Line 674, Address: 0x43ac30, Func Offset: 0
	// Line 681, Address: 0x43ac48, Func Offset: 0x18
	// Line 676, Address: 0x43ac4c, Func Offset: 0x1c
	// Line 681, Address: 0x43ac50, Func Offset: 0x20
	// Line 685, Address: 0x43ac5c, Func Offset: 0x2c
	// Line 687, Address: 0x43ac74, Func Offset: 0x44
	// Line 702, Address: 0x43ac7c, Func Offset: 0x4c
	// Line 681, Address: 0x43ac84, Func Offset: 0x54
	// Line 702, Address: 0x43ac8c, Func Offset: 0x5c
	// Line 689, Address: 0x43ac90, Func Offset: 0x60
	// Line 702, Address: 0x43ac9c, Func Offset: 0x6c
	// Line 692, Address: 0x43acac, Func Offset: 0x7c
	// Line 702, Address: 0x43acb0, Func Offset: 0x80
	// Line 703, Address: 0x43acd4, Func Offset: 0xa4
	// Func End, Address: 0x43acec, Func Offset: 0xbc
}

// DiscardBuffer__FP15st_FILELOADINFO
// Start address: 0x43acf0
void DiscardBuffer(st_FILELOADINFO* fli)
{
	// Line 654, Address: 0x43acf0, Func Offset: 0
	// Line 656, Address: 0x43ad10, Func Offset: 0x20
	// Func End, Address: 0x43ad18, Func Offset: 0x28
}

// SetBuffer__FP15st_FILELOADINFOPci
// Start address: 0x43ad20
void SetBuffer(st_FILELOADINFO* fli, int8* dblbuffer, int32 bufsize)
{
	st_BINIO_XTRADATA* xtra;
	// Line 645, Address: 0x43ad20, Func Offset: 0
	// Line 646, Address: 0x43ad24, Func Offset: 0x4
	// Line 647, Address: 0x43ad2c, Func Offset: 0xc
	// Line 650, Address: 0x43ad40, Func Offset: 0x20
	// Func End, Address: 0x43ad48, Func Offset: 0x28
}

// ReadSeek__FP15st_FILELOADINFOi
// Start address: 0x43ad50
int32 ReadSeek(st_FILELOADINFO* fli, int32 pos)
{
	tag_xFile* file;
	// Line 613, Address: 0x43ad50, Func Offset: 0
	// Line 618, Address: 0x43ad64, Func Offset: 0x14
	// Line 615, Address: 0x43ad68, Func Offset: 0x18
	// Line 618, Address: 0x43ad6c, Func Offset: 0x1c
	// Line 621, Address: 0x43ad78, Func Offset: 0x28
	// Line 623, Address: 0x43ad88, Func Offset: 0x38
	// Line 625, Address: 0x43ada4, Func Offset: 0x54
	// Line 627, Address: 0x43adb8, Func Offset: 0x68
	// Line 628, Address: 0x43adbc, Func Offset: 0x6c
	// Line 633, Address: 0x43adc8, Func Offset: 0x78
	// Line 634, Address: 0x43addc, Func Offset: 0x8c
	// Line 618, Address: 0x43ade4, Func Offset: 0x94
	// Line 635, Address: 0x43ade8, Func Offset: 0x98
	// Func End, Address: 0x43ae00, Func Offset: 0xb0
}

// SkipBytes__FP15st_FILELOADINFOi
// Start address: 0x43ae00
int32 SkipBytes(st_FILELOADINFO* fli, int32 fwd)
{
	tag_xFile* file;
	// Line 580, Address: 0x43ae00, Func Offset: 0
	// Line 586, Address: 0x43ae1c, Func Offset: 0x1c
	// Line 582, Address: 0x43ae20, Func Offset: 0x20
	// Line 586, Address: 0x43ae24, Func Offset: 0x24
	// Line 588, Address: 0x43ae2c, Func Offset: 0x2c
	// Line 589, Address: 0x43ae34, Func Offset: 0x34
	// Line 591, Address: 0x43ae3c, Func Offset: 0x3c
	// Line 593, Address: 0x43ae60, Func Offset: 0x60
	// Line 595, Address: 0x43ae74, Func Offset: 0x74
	// Line 596, Address: 0x43ae80, Func Offset: 0x80
	// Line 602, Address: 0x43ae8c, Func Offset: 0x8c
	// Line 603, Address: 0x43aea0, Func Offset: 0xa0
	// Line 586, Address: 0x43aea8, Func Offset: 0xa8
	// Line 588, Address: 0x43aeb0, Func Offset: 0xb0
	// Line 604, Address: 0x43aec0, Func Offset: 0xc0
	// Func End, Address: 0x43aedc, Func Offset: 0xdc
}

// LoadDestroy__FP15st_FILELOADINFO
// Start address: 0x43aee0
void LoadDestroy(st_FILELOADINFO* fli)
{
	tag_xFile* fp;
	uint32 lockid;
	// Line 519, Address: 0x43aee0, Func Offset: 0
	// Line 521, Address: 0x43aef4, Func Offset: 0x14
	// Line 527, Address: 0x43aef8, Func Offset: 0x18
	// Line 530, Address: 0x43af20, Func Offset: 0x40
	// Line 531, Address: 0x43af24, Func Offset: 0x44
	// Line 532, Address: 0x43af34, Func Offset: 0x54
	// Line 535, Address: 0x43af4c, Func Offset: 0x6c
	// Func End, Address: 0x43af60, Func Offset: 0x80
}

// xBinioLoadCreate__FPCci
// Start address: 0x43af60
st_FILELOADINFO* xBinioLoadCreate(int8* filename, int32 fileflags)
{
	st_FILELOADINFO* fli;
	tag_xFile* tmp_fp;
	int32 i;
	int32 uselock;
	// Line 423, Address: 0x43af60, Func Offset: 0
	// Line 432, Address: 0x43af64, Func Offset: 0x4
	// Line 423, Address: 0x43af68, Func Offset: 0x8
	// Line 425, Address: 0x43af84, Func Offset: 0x24
	// Line 432, Address: 0x43af88, Func Offset: 0x28
	// Line 428, Address: 0x43af8c, Func Offset: 0x2c
	// Line 433, Address: 0x43af98, Func Offset: 0x38
	// Line 434, Address: 0x43afa4, Func Offset: 0x44
	// Line 435, Address: 0x43afa8, Func Offset: 0x48
	// Line 436, Address: 0x43afac, Func Offset: 0x4c
	// Line 435, Address: 0x43afb0, Func Offset: 0x50
	// Line 434, Address: 0x43afc8, Func Offset: 0x68
	// Line 437, Address: 0x43afcc, Func Offset: 0x6c
	// Line 439, Address: 0x43afd4, Func Offset: 0x74
	// Line 442, Address: 0x43afe8, Func Offset: 0x88
	// Line 443, Address: 0x43aff0, Func Offset: 0x90
	// Line 446, Address: 0x43b000, Func Offset: 0xa0
	// Line 490, Address: 0x43b010, Func Offset: 0xb0
	// Line 450, Address: 0x43b014, Func Offset: 0xb4
	// Line 490, Address: 0x43b018, Func Offset: 0xb8
	// Line 450, Address: 0x43b01c, Func Offset: 0xbc
	// Line 490, Address: 0x43b020, Func Offset: 0xc0
	// Line 450, Address: 0x43b024, Func Offset: 0xc4
	// Line 490, Address: 0x43b028, Func Offset: 0xc8
	// Line 450, Address: 0x43b02c, Func Offset: 0xcc
	// Line 490, Address: 0x43b030, Func Offset: 0xd0
	// Line 450, Address: 0x43b034, Func Offset: 0xd4
	// Line 453, Address: 0x43b03c, Func Offset: 0xdc
	// Line 450, Address: 0x43b040, Func Offset: 0xe0
	// Line 453, Address: 0x43b044, Func Offset: 0xe4
	// Line 454, Address: 0x43b048, Func Offset: 0xe8
	// Line 453, Address: 0x43b04c, Func Offset: 0xec
	// Line 454, Address: 0x43b050, Func Offset: 0xf0
	// Line 456, Address: 0x43b054, Func Offset: 0xf4
	// Line 454, Address: 0x43b058, Func Offset: 0xf8
	// Line 456, Address: 0x43b05c, Func Offset: 0xfc
	// Line 457, Address: 0x43b060, Func Offset: 0x100
	// Line 456, Address: 0x43b064, Func Offset: 0x104
	// Line 457, Address: 0x43b068, Func Offset: 0x108
	// Line 458, Address: 0x43b06c, Func Offset: 0x10c
	// Line 457, Address: 0x43b070, Func Offset: 0x110
	// Line 458, Address: 0x43b074, Func Offset: 0x114
	// Line 459, Address: 0x43b078, Func Offset: 0x118
	// Line 458, Address: 0x43b07c, Func Offset: 0x11c
	// Line 459, Address: 0x43b080, Func Offset: 0x120
	// Line 461, Address: 0x43b084, Func Offset: 0x124
	// Line 459, Address: 0x43b088, Func Offset: 0x128
	// Line 461, Address: 0x43b08c, Func Offset: 0x12c
	// Line 462, Address: 0x43b090, Func Offset: 0x130
	// Line 461, Address: 0x43b094, Func Offset: 0x134
	// Line 462, Address: 0x43b098, Func Offset: 0x138
	// Line 463, Address: 0x43b09c, Func Offset: 0x13c
	// Line 462, Address: 0x43b0a0, Func Offset: 0x140
	// Line 463, Address: 0x43b0a4, Func Offset: 0x144
	// Line 464, Address: 0x43b0a8, Func Offset: 0x148
	// Line 463, Address: 0x43b0ac, Func Offset: 0x14c
	// Line 464, Address: 0x43b0b0, Func Offset: 0x150
	// Line 466, Address: 0x43b0b4, Func Offset: 0x154
	// Line 464, Address: 0x43b0b8, Func Offset: 0x158
	// Line 466, Address: 0x43b0bc, Func Offset: 0x15c
	// Line 467, Address: 0x43b0c0, Func Offset: 0x160
	// Line 466, Address: 0x43b0c4, Func Offset: 0x164
	// Line 467, Address: 0x43b0c8, Func Offset: 0x168
	// Line 468, Address: 0x43b0cc, Func Offset: 0x16c
	// Line 467, Address: 0x43b0d0, Func Offset: 0x170
	// Line 468, Address: 0x43b0d4, Func Offset: 0x174
	// Line 470, Address: 0x43b0d8, Func Offset: 0x178
	// Line 468, Address: 0x43b0dc, Func Offset: 0x17c
	// Line 470, Address: 0x43b0e0, Func Offset: 0x180
	// Line 472, Address: 0x43b0e4, Func Offset: 0x184
	// Line 470, Address: 0x43b0e8, Func Offset: 0x188
	// Line 472, Address: 0x43b0ec, Func Offset: 0x18c
	// Line 473, Address: 0x43b0f0, Func Offset: 0x190
	// Line 472, Address: 0x43b0f4, Func Offset: 0x194
	// Line 473, Address: 0x43b0f8, Func Offset: 0x198
	// Line 474, Address: 0x43b0fc, Func Offset: 0x19c
	// Line 473, Address: 0x43b100, Func Offset: 0x1a0
	// Line 474, Address: 0x43b104, Func Offset: 0x1a4
	// Line 476, Address: 0x43b10c, Func Offset: 0x1ac
	// Line 478, Address: 0x43b110, Func Offset: 0x1b0
	// Line 479, Address: 0x43b114, Func Offset: 0x1b4
	// Line 480, Address: 0x43b118, Func Offset: 0x1b8
	// Line 481, Address: 0x43b11c, Func Offset: 0x1bc
	// Line 483, Address: 0x43b120, Func Offset: 0x1c0
	// Line 490, Address: 0x43b124, Func Offset: 0x1c4
	// Line 491, Address: 0x43b130, Func Offset: 0x1d0
	// Line 493, Address: 0x43b138, Func Offset: 0x1d8
	// Line 496, Address: 0x43b13c, Func Offset: 0x1dc
	// Line 497, Address: 0x43b14c, Func Offset: 0x1ec
	// Line 509, Address: 0x43b154, Func Offset: 0x1f4
	// Line 503, Address: 0x43b190, Func Offset: 0x230
	// Line 509, Address: 0x43b198, Func Offset: 0x238
	// Line 503, Address: 0x43b1a4, Func Offset: 0x244
	// Line 504, Address: 0x43b1ac, Func Offset: 0x24c
	// Line 509, Address: 0x43b1b0, Func Offset: 0x250
	// Line 510, Address: 0x43b1c0, Func Offset: 0x260
	// Func End, Address: 0x43b1d8, Func Offset: 0x278
}

