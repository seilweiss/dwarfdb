typedef struct st_FILELOADINFO;
typedef struct st_BINIO_XTRADATA;
typedef struct tag_xFile;
typedef enum en_FIOERRCODES;
typedef enum XFILE_READSECTOR_STATUS;
typedef enum en_BIO_ASYNC_ERRCODES;
typedef struct tag_iFile;
typedef struct sceCdlFILE;

typedef int32(*type_0)(st_FILELOADINFO*, float64*, int32);
typedef int32(*type_1)(st_FILELOADINFO*, float32*, int32);
typedef int32(*type_2)(st_FILELOADINFO*, int16*, int32);
typedef void(*type_3)(st_FILELOADINFO*);
typedef int32(*type_4)(st_FILELOADINFO*, float64*, int32);
typedef int32(*type_5)(st_FILELOADINFO*, int32*, int32);
typedef int32(*type_7)(st_FILELOADINFO*, float32*, int32);
typedef int32(*type_8)(st_FILELOADINFO*, int32);
typedef int32(*type_9)(st_FILELOADINFO*, int32, int8*, int32, int32);
typedef int32(*type_12)(st_FILELOADINFO*, int32);
typedef int32(*type_13)(st_FILELOADINFO*, float64*, int32);
typedef int32(*type_14)(st_FILELOADINFO*, int32, int8*, int32, int32);
typedef void(*type_15)(st_FILELOADINFO*, int8*, int32);
typedef int32(*type_16)(st_FILELOADINFO*, int32);
typedef en_BIO_ASYNC_ERRCODES(*type_17)(st_FILELOADINFO*);
typedef void(*type_18)(st_FILELOADINFO*);
typedef int32(*type_19)(st_FILELOADINFO*, int32);
typedef void(*type_20)(st_FILELOADINFO*, int8*, int32);
typedef void(*type_21)(int32);
typedef void(*type_22)(st_FILELOADINFO*);
typedef int32(*type_23)(st_FILELOADINFO*, int8*, int32);
typedef int32(*type_25)(st_FILELOADINFO*, int32, int8*, int32, int32);
typedef int32(*type_26)(st_FILELOADINFO*, int16*, int32);
typedef void(*type_29)(st_FILELOADINFO*);
typedef int32(*type_31)(st_FILELOADINFO*, int32, int8*, int32, int32);
typedef int32(*type_32)(st_FILELOADINFO*, int32*, int32);
typedef int32(*type_33)(st_FILELOADINFO*, int8*, int32);
typedef int32(*type_34)(st_FILELOADINFO*, float32*, int32);
typedef en_BIO_ASYNC_ERRCODES(*type_35)(st_FILELOADINFO*);
typedef int32(*type_36)(st_FILELOADINFO*, int16*, int32);
typedef int32(*type_38)(st_FILELOADINFO*, float64*, int32);
typedef int32(*type_39)(st_FILELOADINFO*, int32*, int32);
typedef int32(*type_40)(st_FILELOADINFO*, int16*, int32);
typedef int32(*type_41)(st_FILELOADINFO*, float32*, int32);
typedef void(*type_42)(int32);
typedef int32(*type_43)(st_FILELOADINFO*, int32*, int32);

typedef st_FILELOADINFO type_6[8];
typedef st_BINIO_XTRADATA type_10[8];
typedef int8 type_11[16];
typedef int8 type_24[128];
typedef int8 type_27[16];
typedef uint8 type_28[8];
typedef uint32 type_30[3];
typedef tag_xFile type_37[8];

struct st_FILELOADINFO
{
	void(*destroy)(st_FILELOADINFO*);
	int32(*readBytes)(st_FILELOADINFO*, int8*, int32);
	int32(*readMShorts)(st_FILELOADINFO*, int16*, int32);
	int32(*readMLongs)(st_FILELOADINFO*, int32*, int32);
	int32(*readMFloats)(st_FILELOADINFO*, float32*, int32);
	int32(*readMDoubles)(st_FILELOADINFO*, float64*, int32);
	int32(*readIShorts)(st_FILELOADINFO*, int16*, int32);
	int32(*readILongs)(st_FILELOADINFO*, int32*, int32);
	int32(*readIFloats)(st_FILELOADINFO*, float32*, int32);
	int32(*readIDoubles)(st_FILELOADINFO*, float64*, int32);
	int32(*skipBytes)(st_FILELOADINFO*, int32);
	int32(*seekSpot)(st_FILELOADINFO*, int32);
	void(*setDoubleBuf)(st_FILELOADINFO*, int8*, int32);
	void(*discardDblBuf)(st_FILELOADINFO*);
	int32(*asyncIRead)(st_FILELOADINFO*, int32, int8*, int32, int32);
	int32(*asyncMRead)(st_FILELOADINFO*, int32, int8*, int32, int32);
	en_BIO_ASYNC_ERRCODES(*asyncReadStatus)(st_FILELOADINFO*);
	uint32 lockid;
	en_FIOERRCODES error;
	uint32 basesector;
	void* privdata;
	void* xtradata;
	void* asyndata;
	int32 filesize;
	int32 remain;
	int32 position;
};

struct st_BINIO_XTRADATA
{
	int8* dbl_buf;
	int32 dblbuf_size;
	int32 dbl_beg;
	int32 dbl_end;
	int32 dbl_amt;
	uint32 fpos;
	int8* asyn_data;
	int32 asyn_amt;
	int32 asyn_elesize;
	int32 asyn_ismot;
	en_BIO_ASYNC_ERRCODES asyn_status;
	uint32 pad[3];
};

struct tag_xFile
{
	int8 relname[16];
	tag_iFile ps;
};

enum en_FIOERRCODES
{
	FIOERR_NONE,
	FIOERR_READFAIL,
	FIOERR_WRITEFAIL,
	FIOERR_SEEKFAIL,
	FIOERR_USERABORT
};

enum XFILE_READSECTOR_STATUS
{
	XFILE_RDSTAT_NOOP,
	XFILE_RDSTAT_INPROG,
	XFILE_RDSTAT_DONE,
	XFILE_RDSTAT_FAIL
};

enum en_BIO_ASYNC_ERRCODES
{
	BINIO_ASYNC_FAIL = 0xffffffff,
	BINIO_ASYNC_NOOP,
	BINIO_ASYNC_INPROG,
	BINIO_ASYNC_DONE,
	BINIO_ASYNC_FORCEENUMSIZEINT = 0x7fffffff
};

struct tag_iFile
{
	uint32 flags;
	int8 path[128];
	int32 fd;
	sceCdlFILE file;
	void(*cb)(int32);
};

struct sceCdlFILE
{
	uint32 lsn;
	uint32 size;
	int8 name[16];
	uint8 date[8];
	uint32 flag;
};

uint32 g_loadlock;
st_FILELOADINFO g_loadinst[8];
tag_xFile g_xfload[8];
st_BINIO_XTRADATA g_xtraload[8];
st_BINIO_XTRADATA* g_async_context;
void(*BFD_cb_asyncread)(int32);
void(*DiscardBuffer)(st_FILELOADINFO*);
void(*SetBuffer)(st_FILELOADINFO*, int8*, int32);
int32(*ReadSeek)(st_FILELOADINFO*, int32);
int32(*SkipBytes)(st_FILELOADINFO*, int32);
en_BIO_ASYNC_ERRCODES(*AsyncReadStatus)(st_FILELOADINFO*);
int32(*AsyncMRead)(st_FILELOADINFO*, int32, int8*, int32, int32);
int32(*AsyncIRead)(st_FILELOADINFO*, int32, int8*, int32, int32);
int32(*ReadIDoubles)(st_FILELOADINFO*, float64*, int32);
int32(*ReadIFloats)(st_FILELOADINFO*, float32*, int32);
int32(*ReadILongs)(st_FILELOADINFO*, int32*, int32);
int32(*ReadIShorts)(st_FILELOADINFO*, int16*, int32);
int32(*ReadMDoubles)(st_FILELOADINFO*, float64*, int32);
int32(*ReadMFloats)(st_FILELOADINFO*, float32*, int32);
int32(*ReadMLongs)(st_FILELOADINFO*, int32*, int32);
int32(*ReadMShorts)(st_FILELOADINFO*, int16*, int32);
int32(*ReadBytes)(st_FILELOADINFO*, int8*, int32);
void(*LoadDestroy)(st_FILELOADINFO*);

en_BIO_ASYNC_ERRCODES BFD_AsyncReadStatus(st_FILELOADINFO* fli);
int32 BFD_AsyncRead(st_FILELOADINFO* fli, int32 pos, void* data, int32 size, int32 n);
void BFD_cb_asyncread();
int32 BFD_read(void* data, int32 elesize, int32 elecnt, tag_xFile* bffp, void* xtradata);
void BFD_close(tag_xFile* bffp, void* xtradata);
tag_xFile* BFD_open(int8* filename, int8* mode, uint32 lockid, void* xtradata);
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
st_FILELOADINFO* xBinioLoadCreate(int8* filename);

// BFD_AsyncReadStatus__FP15st_FILELOADINFO
// Start address: 0x186230
en_BIO_ASYNC_ERRCODES BFD_AsyncReadStatus(st_FILELOADINFO* fli)
{
	XFILE_READSECTOR_STATUS xrdstat;
	st_BINIO_XTRADATA* xtra;
	en_BIO_ASYNC_ERRCODES status;
	// Line 1986, Address: 0x186230, Func Offset: 0
	// Line 1992, Address: 0x18623c, Func Offset: 0xc
	// Line 1995, Address: 0x186250, Func Offset: 0x20
	// Line 1997, Address: 0x186258, Func Offset: 0x28
	// Line 2002, Address: 0x186260, Func Offset: 0x30
	// Line 2003, Address: 0x186270, Func Offset: 0x40
	// Line 2004, Address: 0x186278, Func Offset: 0x48
	// Line 2011, Address: 0x1862a8, Func Offset: 0x78
	// Line 2015, Address: 0x1862b0, Func Offset: 0x80
	// Line 2021, Address: 0x1862b8, Func Offset: 0x88
	// Line 2022, Address: 0x1862bc, Func Offset: 0x8c
	// Line 2024, Address: 0x1862d0, Func Offset: 0xa0
	// Line 2025, Address: 0x1862d4, Func Offset: 0xa4
	// Line 2029, Address: 0x1862d8, Func Offset: 0xa8
	// Func End, Address: 0x1862e8, Func Offset: 0xb8
}

// BFD_AsyncRead__FP15st_FILELOADINFOiPviii
// Start address: 0x1862f0
int32 BFD_AsyncRead(st_FILELOADINFO* fli, int32 pos, void* data, int32 size, int32 n)
{
	int32 xsectsize;
	uint32 rdsec;
	st_BINIO_XTRADATA* xtra;
	// Line 1894, Address: 0x1862f0, Func Offset: 0
	// Line 1907, Address: 0x18630c, Func Offset: 0x1c
	// Line 1896, Address: 0x186310, Func Offset: 0x20
	// Line 1907, Address: 0x186324, Func Offset: 0x34
	// Line 1909, Address: 0x186334, Func Offset: 0x44
	// Line 1912, Address: 0x186348, Func Offset: 0x58
	// Line 1914, Address: 0x18634c, Func Offset: 0x5c
	// Line 1915, Address: 0x186354, Func Offset: 0x64
	// Line 1916, Address: 0x186358, Func Offset: 0x68
	// Line 1917, Address: 0x18635c, Func Offset: 0x6c
	// Line 1918, Address: 0x186360, Func Offset: 0x70
	// Line 1927, Address: 0x186364, Func Offset: 0x74
	// Line 1954, Address: 0x18636c, Func Offset: 0x7c
	// Line 1956, Address: 0x186398, Func Offset: 0xa8
	// Line 1958, Address: 0x1863a0, Func Offset: 0xb0
	// Line 1981, Address: 0x1863a4, Func Offset: 0xb4
	// Line 1982, Address: 0x1863ac, Func Offset: 0xbc
	// Func End, Address: 0x1863cc, Func Offset: 0xdc
}

// BFD_cb_asyncread__Fi
// Start address: 0x1863d0
void BFD_cb_asyncread()
{
	// Line 1871, Address: 0x1863d0, Func Offset: 0
	// Line 1890, Address: 0x1863d8, Func Offset: 0x8
	// Func End, Address: 0x1863e0, Func Offset: 0x10
}

// BFD_read__FPviiP9tag_xFilePv
// Start address: 0x1863e0
int32 BFD_read(void* data, int32 elesize, int32 elecnt, tag_xFile* bffp, void* xtradata)
{
	uint32 numBytes;
	uint32 safety;
	uint32 holdpos;
	int32 actual;
	int32 remain;
	int32 refill;
	int32 readbeg;
	int8* dest;
	st_BINIO_XTRADATA* xtra;
	// Line 1647, Address: 0x1863e0, Func Offset: 0
	// Line 1664, Address: 0x186410, Func Offset: 0x30
	// Line 1649, Address: 0x186418, Func Offset: 0x38
	// Line 1650, Address: 0x18641c, Func Offset: 0x3c
	// Line 1653, Address: 0x186420, Func Offset: 0x40
	// Line 1655, Address: 0x186424, Func Offset: 0x44
	// Line 1664, Address: 0x186428, Func Offset: 0x48
	// Line 1669, Address: 0x18642c, Func Offset: 0x4c
	// Line 1671, Address: 0x18643c, Func Offset: 0x5c
	// Line 1685, Address: 0x18645c, Func Offset: 0x7c
	// Line 1686, Address: 0x18646c, Func Offset: 0x8c
	// Line 1690, Address: 0x18647c, Func Offset: 0x9c
	// Line 1686, Address: 0x186480, Func Offset: 0xa0
	// Line 1690, Address: 0x186484, Func Offset: 0xa4
	// Line 1693, Address: 0x186488, Func Offset: 0xa8
	// Line 1708, Address: 0x186490, Func Offset: 0xb0
	// Line 1713, Address: 0x1864a4, Func Offset: 0xc4
	// Line 1717, Address: 0x1864a8, Func Offset: 0xc8
	// Line 1713, Address: 0x1864ac, Func Offset: 0xcc
	// Line 1715, Address: 0x1864c4, Func Offset: 0xe4
	// Line 1718, Address: 0x1864d4, Func Offset: 0xf4
	// Line 1719, Address: 0x1864dc, Func Offset: 0xfc
	// Line 1722, Address: 0x1864ec, Func Offset: 0x10c
	// Line 1726, Address: 0x1864f0, Func Offset: 0x110
	// Line 1722, Address: 0x1864f4, Func Offset: 0x114
	// Line 1724, Address: 0x18650c, Func Offset: 0x12c
	// Line 1725, Address: 0x18651c, Func Offset: 0x13c
	// Line 1733, Address: 0x186520, Func Offset: 0x140
	// Line 1736, Address: 0x186528, Func Offset: 0x148
	// Line 1735, Address: 0x18652c, Func Offset: 0x14c
	// Line 1736, Address: 0x186530, Func Offset: 0x150
	// Line 1737, Address: 0x18653c, Func Offset: 0x15c
	// Line 1740, Address: 0x186540, Func Offset: 0x160
	// Line 1742, Address: 0x186554, Func Offset: 0x174
	// Line 1757, Address: 0x186558, Func Offset: 0x178
	// Line 1764, Address: 0x186560, Func Offset: 0x180
	// Line 1757, Address: 0x186564, Func Offset: 0x184
	// Line 1764, Address: 0x186568, Func Offset: 0x188
	// Line 1765, Address: 0x186574, Func Offset: 0x194
	// Line 1770, Address: 0x186588, Func Offset: 0x1a8
	// Line 1773, Address: 0x18659c, Func Offset: 0x1bc
	// Line 1772, Address: 0x1865a0, Func Offset: 0x1c0
	// Line 1774, Address: 0x1865a4, Func Offset: 0x1c4
	// Line 1773, Address: 0x1865a8, Func Offset: 0x1c8
	// Line 1779, Address: 0x1865b0, Func Offset: 0x1d0
	// Line 1780, Address: 0x1865b8, Func Offset: 0x1d8
	// Line 1783, Address: 0x1865c4, Func Offset: 0x1e4
	// Line 1787, Address: 0x1865d4, Func Offset: 0x1f4
	// Line 1789, Address: 0x1865d8, Func Offset: 0x1f8
	// Line 1790, Address: 0x1865ec, Func Offset: 0x20c
	// Func End, Address: 0x18661c, Func Offset: 0x23c
}

// BFD_close__FP9tag_xFilePv
// Start address: 0x186620
void BFD_close(tag_xFile* bffp, void* xtradata)
{
	st_BINIO_XTRADATA* xtra;
	// Line 1597, Address: 0x186620, Func Offset: 0
	// Line 1603, Address: 0x18662c, Func Offset: 0xc
	// Line 1606, Address: 0x186634, Func Offset: 0x14
	// Line 1607, Address: 0x186638, Func Offset: 0x18
	// Line 1608, Address: 0x18663c, Func Offset: 0x1c
	// Line 1609, Address: 0x186640, Func Offset: 0x20
	// Line 1610, Address: 0x186644, Func Offset: 0x24
	// Line 1611, Address: 0x186648, Func Offset: 0x28
	// Line 1614, Address: 0x18664c, Func Offset: 0x2c
	// Func End, Address: 0x18665c, Func Offset: 0x3c
}

// BFD_open__FPCcPCcUiiPv
// Start address: 0x186660
tag_xFile* BFD_open(int8* filename, int8* mode, uint32 lockid, void* xtradata)
{
	int32 xfflg;
	st_BINIO_XTRADATA* xtra;
	uint32 orc;
	tag_xFile* bffp;
	// Line 1540, Address: 0x186660, Func Offset: 0
	// Line 1552, Address: 0x186684, Func Offset: 0x24
	// Line 1544, Address: 0x18668c, Func Offset: 0x2c
	// Line 1552, Address: 0x186690, Func Offset: 0x30
	// Line 1553, Address: 0x1866a8, Func Offset: 0x48
	// Line 1555, Address: 0x1866bc, Func Offset: 0x5c
	// Line 1556, Address: 0x1866c4, Func Offset: 0x64
	// Line 1559, Address: 0x1866d8, Func Offset: 0x78
	// Line 1560, Address: 0x1866dc, Func Offset: 0x7c
	// Line 1568, Address: 0x1866e0, Func Offset: 0x80
	// Line 1569, Address: 0x1866e8, Func Offset: 0x88
	// Line 1572, Address: 0x1866f8, Func Offset: 0x98
	// Line 1573, Address: 0x18670c, Func Offset: 0xac
	// Line 1577, Address: 0x186714, Func Offset: 0xb4
	// Line 1580, Address: 0x18671c, Func Offset: 0xbc
	// Line 1581, Address: 0x186720, Func Offset: 0xc0
	// Line 1582, Address: 0x186724, Func Offset: 0xc4
	// Line 1583, Address: 0x186728, Func Offset: 0xc8
	// Line 1584, Address: 0x18672c, Func Offset: 0xcc
	// Line 1585, Address: 0x186730, Func Offset: 0xd0
	// Line 1590, Address: 0x186734, Func Offset: 0xd4
	// Line 1591, Address: 0x186738, Func Offset: 0xd8
	// Func End, Address: 0x186758, Func Offset: 0xf8
}

// Swap8__FPci
// Start address: 0x186760
void Swap8(int8* d, int32 n)
{
	int8 t;
	// Line 1236, Address: 0x186760, Func Offset: 0
	// Line 1237, Address: 0x18676c, Func Offset: 0xc
	// Line 1238, Address: 0x186770, Func Offset: 0x10
	// Line 1254, Address: 0x186774, Func Offset: 0x14
	// Line 1238, Address: 0x18677c, Func Offset: 0x1c
	// Line 1239, Address: 0x186780, Func Offset: 0x20
	// Line 1241, Address: 0x186784, Func Offset: 0x24
	// Line 1242, Address: 0x186788, Func Offset: 0x28
	// Line 1243, Address: 0x186790, Func Offset: 0x30
	// Line 1245, Address: 0x186794, Func Offset: 0x34
	// Line 1246, Address: 0x186798, Func Offset: 0x38
	// Line 1247, Address: 0x1867a0, Func Offset: 0x40
	// Line 1249, Address: 0x1867a4, Func Offset: 0x44
	// Line 1250, Address: 0x1867a8, Func Offset: 0x48
	// Line 1251, Address: 0x1867b0, Func Offset: 0x50
	// Line 1254, Address: 0x1867b4, Func Offset: 0x54
	// Line 1256, Address: 0x1867c0, Func Offset: 0x60
	// Func End, Address: 0x1867c8, Func Offset: 0x68
}

// AsyncReadStatus__FP15st_FILELOADINFO
// Start address: 0x1867d0
en_BIO_ASYNC_ERRCODES AsyncReadStatus(st_FILELOADINFO* fli)
{
	// Line 806, Address: 0x1867d0, Func Offset: 0
	// Func End, Address: 0x1867d8, Func Offset: 0x8
}

// AsyncIRead__FP15st_FILELOADINFOiPcii
// Start address: 0x1867e0
int32 AsyncIRead(st_FILELOADINFO* fli, int32 offset, int8* data, int32 size, int32 n)
{
	// Line 800, Address: 0x1867e0, Func Offset: 0
	// Func End, Address: 0x1867e8, Func Offset: 0x8
}

// AsyncMRead__FP15st_FILELOADINFOiPcii
// Start address: 0x1867f0
int32 AsyncMRead(st_FILELOADINFO* fli, int32 offset, int8* data, int32 size, int32 n)
{
	// Line 794, Address: 0x1867f0, Func Offset: 0
	// Func End, Address: 0x1867f8, Func Offset: 0x8
}

// ReadIDoubles__FP15st_FILELOADINFOPdi
// Start address: 0x186800
int32 ReadIDoubles(st_FILELOADINFO* fli, float64* data, int32 count)
{
	int32 act;
	// Line 784, Address: 0x186804, Func Offset: 0x4
	// Func End, Address: 0x18680c, Func Offset: 0xc
}

// ReadIFloats__FP15st_FILELOADINFOPfi
// Start address: 0x186810
int32 ReadIFloats(st_FILELOADINFO* fli, float32* data, int32 count)
{
	int32 act;
	// Line 771, Address: 0x186814, Func Offset: 0x4
	// Func End, Address: 0x18681c, Func Offset: 0xc
}

// ReadILongs__FP15st_FILELOADINFOPii
// Start address: 0x186820
int32 ReadILongs(st_FILELOADINFO* fli, int32* data, int32 count)
{
	int32 act;
	// Line 757, Address: 0x186824, Func Offset: 0x4
	// Func End, Address: 0x18682c, Func Offset: 0xc
}

// ReadIShorts__FP15st_FILELOADINFOPsi
// Start address: 0x186830
int32 ReadIShorts(st_FILELOADINFO* fli, int16* data, int32 count)
{
	int32 act;
	// Line 744, Address: 0x186834, Func Offset: 0x4
	// Func End, Address: 0x18683c, Func Offset: 0xc
}

// ReadMDoubles__FP15st_FILELOADINFOPdi
// Start address: 0x186840
int32 ReadMDoubles(st_FILELOADINFO* fli, float64* data, int32 count)
{
	int32 act;
	// Line 727, Address: 0x186840, Func Offset: 0
	// Line 729, Address: 0x186854, Func Offset: 0x14
	// Line 730, Address: 0x18685c, Func Offset: 0x1c
	// Line 732, Address: 0x186868, Func Offset: 0x28
	// Func End, Address: 0x186878, Func Offset: 0x38
}

// ReadMFloats__FP15st_FILELOADINFOPfi
// Start address: 0x186880
int32 ReadMFloats(st_FILELOADINFO* fli, float32* data, int32 count)
{
	int32 act;
	// Line 714, Address: 0x186880, Func Offset: 0
	// Line 716, Address: 0x186894, Func Offset: 0x14
	// Line 717, Address: 0x18689c, Func Offset: 0x1c
	// Line 719, Address: 0x1868e0, Func Offset: 0x60
	// Func End, Address: 0x1868f0, Func Offset: 0x70
}

// ReadMLongs__FP15st_FILELOADINFOPii
// Start address: 0x1868f0
int32 ReadMLongs(st_FILELOADINFO* fli, int32* data, int32 count)
{
	int32 act;
	// Line 699, Address: 0x1868f0, Func Offset: 0
	// Line 701, Address: 0x186904, Func Offset: 0x14
	// Line 702, Address: 0x18690c, Func Offset: 0x1c
	// Line 704, Address: 0x186950, Func Offset: 0x60
	// Func End, Address: 0x186960, Func Offset: 0x70
}

// ReadMShorts__FP15st_FILELOADINFOPsi
// Start address: 0x186960
int32 ReadMShorts(st_FILELOADINFO* fli, int16* data, int32 count)
{
	int32 act;
	// Line 685, Address: 0x186960, Func Offset: 0
	// Line 687, Address: 0x186974, Func Offset: 0x14
	// Line 688, Address: 0x18697c, Func Offset: 0x1c
	// Line 690, Address: 0x1869b0, Func Offset: 0x50
	// Func End, Address: 0x1869c0, Func Offset: 0x60
}

// ReadBytes__FP15st_FILELOADINFOPci
// Start address: 0x1869c0
int32 ReadBytes(st_FILELOADINFO* fli, int8* data, int32 count)
{
	int32 act;
	// Line 672, Address: 0x1869c4, Func Offset: 0x4
	// Func End, Address: 0x1869cc, Func Offset: 0xc
}

// ReadRaw__FP15st_FILELOADINFOPvii
// Start address: 0x1869d0
int32 ReadRaw(st_FILELOADINFO* fli, void* data, int32 size, int32 count)
{
	int32 n;
	int32 amt;
	tag_xFile* file;
	// Line 632, Address: 0x1869d0, Func Offset: 0
	// Line 639, Address: 0x1869e4, Func Offset: 0x14
	// Line 634, Address: 0x1869e8, Func Offset: 0x18
	// Line 639, Address: 0x1869f0, Func Offset: 0x20
	// Line 643, Address: 0x186a00, Func Offset: 0x30
	// Line 645, Address: 0x186a28, Func Offset: 0x58
	// Line 647, Address: 0x186a30, Func Offset: 0x60
	// Line 650, Address: 0x186a48, Func Offset: 0x78
	// Line 654, Address: 0x186a54, Func Offset: 0x84
	// Line 655, Address: 0x186a64, Func Offset: 0x94
	// Line 660, Address: 0x186a70, Func Offset: 0xa0
	// Line 661, Address: 0x186a74, Func Offset: 0xa4
	// Func End, Address: 0x186a8c, Func Offset: 0xbc
}

// DiscardBuffer__FP15st_FILELOADINFO
// Start address: 0x186a90
void DiscardBuffer(st_FILELOADINFO* fli)
{
	// Line 612, Address: 0x186a90, Func Offset: 0
	// Line 614, Address: 0x186ab0, Func Offset: 0x20
	// Func End, Address: 0x186ab8, Func Offset: 0x28
}

// SetBuffer__FP15st_FILELOADINFOPci
// Start address: 0x186ac0
void SetBuffer(st_FILELOADINFO* fli, int8* dblbuffer, int32 bufsize)
{
	st_BINIO_XTRADATA* xtra;
	// Line 603, Address: 0x186ac0, Func Offset: 0
	// Line 604, Address: 0x186ac4, Func Offset: 0x4
	// Line 605, Address: 0x186acc, Func Offset: 0xc
	// Line 608, Address: 0x186ae0, Func Offset: 0x20
	// Func End, Address: 0x186ae8, Func Offset: 0x28
}

// ReadSeek__FP15st_FILELOADINFOi
// Start address: 0x186af0
int32 ReadSeek(st_FILELOADINFO* fli, int32 pos)
{
	tag_xFile* file;
	// Line 571, Address: 0x186af0, Func Offset: 0
	// Line 576, Address: 0x186b08, Func Offset: 0x18
	// Line 579, Address: 0x186b1c, Func Offset: 0x2c
	// Line 581, Address: 0x186b28, Func Offset: 0x38
	// Line 579, Address: 0x186b2c, Func Offset: 0x3c
	// Line 581, Address: 0x186b30, Func Offset: 0x40
	// Line 583, Address: 0x186b50, Func Offset: 0x60
	// Line 585, Address: 0x186b64, Func Offset: 0x74
	// Line 586, Address: 0x186b68, Func Offset: 0x78
	// Line 591, Address: 0x186b74, Func Offset: 0x84
	// Line 592, Address: 0x186b88, Func Offset: 0x98
	// Line 593, Address: 0x186b8c, Func Offset: 0x9c
	// Func End, Address: 0x186ba4, Func Offset: 0xb4
}

// SkipBytes__FP15st_FILELOADINFOi
// Start address: 0x186bb0
int32 SkipBytes(st_FILELOADINFO* fli, int32 fwd)
{
	tag_xFile* file;
	// Line 538, Address: 0x186bb0, Func Offset: 0
	// Line 544, Address: 0x186bcc, Func Offset: 0x1c
	// Line 540, Address: 0x186bd0, Func Offset: 0x20
	// Line 544, Address: 0x186bd4, Func Offset: 0x24
	// Line 546, Address: 0x186be4, Func Offset: 0x34
	// Line 547, Address: 0x186bf4, Func Offset: 0x44
	// Line 549, Address: 0x186c00, Func Offset: 0x50
	// Line 551, Address: 0x186c28, Func Offset: 0x78
	// Line 553, Address: 0x186c3c, Func Offset: 0x8c
	// Line 554, Address: 0x186c48, Func Offset: 0x98
	// Line 560, Address: 0x186c54, Func Offset: 0xa4
	// Line 562, Address: 0x186c64, Func Offset: 0xb4
	// Func End, Address: 0x186c80, Func Offset: 0xd0
}

// LoadDestroy__FP15st_FILELOADINFO
// Start address: 0x186c80
void LoadDestroy(st_FILELOADINFO* fli)
{
	uint32 lockid;
	tag_xFile* fp;
	// Line 477, Address: 0x186c80, Func Offset: 0
	// Line 479, Address: 0x186c94, Func Offset: 0x14
	// Line 485, Address: 0x186c98, Func Offset: 0x18
	// Line 488, Address: 0x186cc0, Func Offset: 0x40
	// Line 489, Address: 0x186cc4, Func Offset: 0x44
	// Line 490, Address: 0x186cd4, Func Offset: 0x54
	// Line 493, Address: 0x186cec, Func Offset: 0x6c
	// Func End, Address: 0x186d00, Func Offset: 0x80
}

// xBinioLoadCreate__FPCc
// Start address: 0x186d00
st_FILELOADINFO* xBinioLoadCreate(int8* filename)
{
	int32 uselock;
	int32 i;
	tag_xFile* tmp_fp;
	st_FILELOADINFO* fli;
	// Line 380, Address: 0x186d00, Func Offset: 0
	// Line 389, Address: 0x186d18, Func Offset: 0x18
	// Line 382, Address: 0x186d1c, Func Offset: 0x1c
	// Line 385, Address: 0x186d20, Func Offset: 0x20
	// Line 389, Address: 0x186d24, Func Offset: 0x24
	// Line 390, Address: 0x186d28, Func Offset: 0x28
	// Line 391, Address: 0x186d3c, Func Offset: 0x3c
	// Line 392, Address: 0x186d40, Func Offset: 0x40
	// Line 391, Address: 0x186d54, Func Offset: 0x54
	// Line 392, Address: 0x186d5c, Func Offset: 0x5c
	// Line 393, Address: 0x186d64, Func Offset: 0x64
	// Line 394, Address: 0x186d68, Func Offset: 0x68
	// Line 396, Address: 0x186d70, Func Offset: 0x70
	// Line 399, Address: 0x186d80, Func Offset: 0x80
	// Line 400, Address: 0x186d88, Func Offset: 0x88
	// Line 403, Address: 0x186d98, Func Offset: 0x98
	// Line 407, Address: 0x186da8, Func Offset: 0xa8
	// Line 410, Address: 0x186dc4, Func Offset: 0xc4
	// Line 411, Address: 0x186dd0, Func Offset: 0xd0
	// Line 413, Address: 0x186ddc, Func Offset: 0xdc
	// Line 414, Address: 0x186de8, Func Offset: 0xe8
	// Line 415, Address: 0x186df4, Func Offset: 0xf4
	// Line 416, Address: 0x186e00, Func Offset: 0x100
	// Line 418, Address: 0x186e0c, Func Offset: 0x10c
	// Line 419, Address: 0x186e18, Func Offset: 0x118
	// Line 420, Address: 0x186e24, Func Offset: 0x124
	// Line 421, Address: 0x186e30, Func Offset: 0x130
	// Line 423, Address: 0x186e3c, Func Offset: 0x13c
	// Line 424, Address: 0x186e48, Func Offset: 0x148
	// Line 425, Address: 0x186e54, Func Offset: 0x154
	// Line 427, Address: 0x186e60, Func Offset: 0x160
	// Line 429, Address: 0x186e6c, Func Offset: 0x16c
	// Line 430, Address: 0x186e78, Func Offset: 0x178
	// Line 431, Address: 0x186e84, Func Offset: 0x184
	// Line 433, Address: 0x186e90, Func Offset: 0x190
	// Line 435, Address: 0x186e94, Func Offset: 0x194
	// Line 436, Address: 0x186e98, Func Offset: 0x198
	// Line 437, Address: 0x186e9c, Func Offset: 0x19c
	// Line 438, Address: 0x186ea0, Func Offset: 0x1a0
	// Line 440, Address: 0x186ea4, Func Offset: 0x1a4
	// Line 447, Address: 0x186ea8, Func Offset: 0x1a8
	// Line 449, Address: 0x186ec8, Func Offset: 0x1c8
	// Line 451, Address: 0x186ed0, Func Offset: 0x1d0
	// Line 454, Address: 0x186f28, Func Offset: 0x228
	// Line 451, Address: 0x186f2c, Func Offset: 0x22c
	// Line 454, Address: 0x186f30, Func Offset: 0x230
	// Line 455, Address: 0x186f3c, Func Offset: 0x23c
	// Line 457, Address: 0x186f40, Func Offset: 0x240
	// Line 461, Address: 0x186f48, Func Offset: 0x248
	// Line 462, Address: 0x186f80, Func Offset: 0x280
	// Line 461, Address: 0x186f84, Func Offset: 0x284
	// Line 467, Address: 0x186f8c, Func Offset: 0x28c
	// Line 468, Address: 0x186f90, Func Offset: 0x290
	// Func End, Address: 0x186fa8, Func Offset: 0x2a8
}

