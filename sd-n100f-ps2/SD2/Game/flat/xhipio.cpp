typedef struct st_FILESAVEINFO;
typedef struct st_FILELOADINFO;
typedef struct st_HIPSAVEDATA;
typedef struct st_HIPLOADDATA;
typedef struct st_HIPLOADFUNCS;
typedef struct st_HIPLOADBLOCK;
typedef struct st_HIPSAVEBLOCK;
typedef enum en_FIOERRCODES;
typedef struct st_HIPSAVEFUNCS;
typedef enum en_READ_ASYNC_STATUS;
typedef enum en_BIO_ASYNC_ERRCODES;

typedef int32(*type_0)(st_FILELOADINFO*, int8*, int32);
typedef int32(*type_1)(st_FILESAVEINFO*, float64*, int32);
typedef st_HIPSAVEDATA*(*type_2)(int8*);
typedef int32(*type_3)(st_FILELOADINFO*, int32, int8*, int32, int32);
typedef void(*type_4)(st_HIPSAVEDATA*);
typedef int32(*type_5)(st_FILESAVEINFO*, int32);
typedef en_BIO_ASYNC_ERRCODES(*type_6)(st_FILELOADINFO*);
typedef int32(*type_7)(st_FILELOADINFO*, int16*, int32);
typedef void(*type_8)(st_HIPSAVEDATA*, uint32);
typedef st_HIPLOADDATA*(*type_9)(int8*, int8*, int32);
typedef int32(*type_10)(st_FILELOADINFO*, int32*, int32);
typedef void(*type_11)(st_HIPSAVEDATA*);
typedef void(*type_12)(st_HIPLOADDATA*);
typedef void(*type_13)(st_HIPSAVEDATA*, int8*, int32);
typedef int32(*type_14)(st_FILELOADINFO*, float32*, int32);
typedef uint32(*type_15)(st_HIPLOADDATA*);
typedef void(*type_18)(st_HIPSAVEDATA*, int16*, int32);
typedef int32(*type_19)(st_FILELOADINFO*, float64*, int32);
typedef uint32(*type_20)(st_HIPLOADDATA*);
typedef void(*type_21)(st_HIPLOADDATA*);
typedef void(*type_22)(st_HIPSAVEDATA*, int32*, int32);
typedef int32(*type_23)(st_FILELOADINFO*, int16*, int32);
typedef void(*type_24)(st_FILESAVEINFO*);
typedef int32(*type_25)(st_HIPLOADDATA*, int8*, int32);
typedef void(*type_26)(st_HIPSAVEDATA*, float32*, int32);
typedef int32(*type_27)(st_FILESAVEINFO*, int8*, int32);
typedef int32(*type_28)(st_FILELOADINFO*, int32*, int32);
typedef int32(*type_29)(st_HIPLOADDATA*, int16*, int32);
typedef void(*type_30)(st_HIPSAVEDATA*, int8*);
typedef int32(*type_31)(st_FILELOADINFO*, float32*, int32);
typedef int32(*type_32)(st_FILESAVEINFO*, int16*, int32);
typedef int32(*type_33)(st_HIPLOADDATA*, int32*, int32);
typedef int32(*type_34)(st_HIPSAVEDATA*);
typedef int32(*type_35)(st_FILELOADINFO*, float64*, int32);
typedef int32(*type_36)(st_FILESAVEINFO*, int32*, int32);
typedef int32(*type_37)(st_HIPSAVEDATA*, int32, uint32);
typedef int32(*type_38)(st_HIPLOADDATA*, float32*, int32);
typedef int32(*type_40)(st_FILELOADINFO*, int32);
typedef int32(*type_41)(st_FILESAVEINFO*, float32*, int32);
typedef int32(*type_42)(st_HIPLOADDATA*, int8*);
typedef int32(*type_43)(st_FILELOADINFO*, int32);
typedef int32(*type_44)(st_FILESAVEINFO*, float64*, int32);
typedef int32(*type_45)(st_HIPLOADDATA*, int32, int32);
typedef void(*type_46)(st_FILELOADINFO*, int8*, int32);
typedef int32(*type_47)(st_FILESAVEINFO*, int16*, int32);
typedef void(*type_48)(st_HIPLOADDATA*, int32);
typedef void(*type_49)(st_FILELOADINFO*);
typedef en_READ_ASYNC_STATUS(*type_50)(st_HIPLOADDATA*);
typedef int32(*type_51)(st_FILESAVEINFO*, int32*, int32);
typedef int32(*type_52)(st_FILELOADINFO*, int32, int8*, int32, int32);
typedef int32(*type_53)(st_FILESAVEINFO*, float32*, int32);
typedef void(*type_54)(st_FILELOADINFO*);

typedef st_HIPLOADBLOCK type_16[8];
typedef st_HIPLOADDATA type_17[8];
typedef st_HIPSAVEBLOCK type_39[8];

struct st_FILESAVEINFO
{
	void(*destroy)(st_FILESAVEINFO*);
	int32(*writeBytes)(st_FILESAVEINFO*, int8*, int32);
	int32(*writeMShorts)(st_FILESAVEINFO*, int16*, int32);
	int32(*writeMLongs)(st_FILESAVEINFO*, int32*, int32);
	int32(*writeMFloats)(st_FILESAVEINFO*, float32*, int32);
	int32(*writeMDoubles)(st_FILESAVEINFO*, float64*, int32);
	int32(*writeIShorts)(st_FILESAVEINFO*, int16*, int32);
	int32(*writeILongs)(st_FILESAVEINFO*, int32*, int32);
	int32(*writeIFloats)(st_FILESAVEINFO*, float32*, int32);
	int32(*writeIDoubles)(st_FILESAVEINFO*, float64*, int32);
	int32(*seekSpot)(st_FILESAVEINFO*, int32);
	int32 length;
	int32 position;
	en_FIOERRCODES error;
	uint32 lockid;
	void* privdata;
	void* xtradata;
};

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

struct st_HIPSAVEDATA
{
	st_FILESAVEINFO* fsi;
	int32 lockid;
	int32 pos;
	int32 top;
	int32 writeTop;
	st_HIPSAVEBLOCK stk[8];
};

struct st_HIPLOADDATA
{
	st_FILELOADINFO* fli;
	int32 lockid;
	int32 bypass;
	int32 bypass_recover;
	uint32 base_sector;
	int32 use_async;
	en_READ_ASYNC_STATUS asyn_stat;
	int32 pos;
	int32 top;
	int32 readTop;
	st_HIPLOADBLOCK stk[8];
};

struct st_HIPLOADFUNCS
{
	st_HIPLOADDATA*(*create)(int8*, int8*, int32);
	void(*destroy)(st_HIPLOADDATA*);
	uint32(*basesector)(st_HIPLOADDATA*);
	uint32(*enter)(st_HIPLOADDATA*);
	void(*exit)(st_HIPLOADDATA*);
	int32(*readBytes)(st_HIPLOADDATA*, int8*, int32);
	int32(*readShorts)(st_HIPLOADDATA*, int16*, int32);
	int32(*readLongs)(st_HIPLOADDATA*, int32*, int32);
	int32(*readFloats)(st_HIPLOADDATA*, float32*, int32);
	int32(*readString)(st_HIPLOADDATA*, int8*);
	int32(*setBypass)(st_HIPLOADDATA*, int32, int32);
	void(*setSpot)(st_HIPLOADDATA*, int32);
	en_READ_ASYNC_STATUS(*pollRead)(st_HIPLOADDATA*);
};

struct st_HIPLOADBLOCK
{
	int32 endpos;
	uint32 blk_id;
	int32 blk_remain;
	int32 flags;
};

struct st_HIPSAVEBLOCK
{
	int32 pos;
	int32 len;
	int32 flags;
};

enum en_FIOERRCODES
{
	FIOERR_NONE,
	FIOERR_READFAIL,
	FIOERR_WRITEFAIL,
	FIOERR_SEEKFAIL,
	FIOERR_USERABORT
};

struct st_HIPSAVEFUNCS
{
	st_HIPSAVEDATA*(*create)(int8*);
	void(*destroy)(st_HIPSAVEDATA*);
	void(*open)(st_HIPSAVEDATA*, uint32);
	void(*close)(st_HIPSAVEDATA*);
	void(*writeBytes)(st_HIPSAVEDATA*, int8*, int32);
	void(*writeShorts)(st_HIPSAVEDATA*, int16*, int32);
	void(*writeLongs)(st_HIPSAVEDATA*, int32*, int32);
	void(*writeFloats)(st_HIPSAVEDATA*, float32*, int32);
	void(*writeString)(st_HIPSAVEDATA*, int8*);
	int32(*curSpot)(st_HIPSAVEDATA*);
	int32(*spotLong)(st_HIPSAVEDATA*, int32, uint32);
};

enum en_READ_ASYNC_STATUS
{
	HIP_RDSTAT_NONE = 0xffffffff,
	HIP_RDSTAT_INPROG,
	HIP_RDSTAT_SUCCESS,
	HIP_RDSTAT_FAILED,
	HIP_RDSTAT_NOBYPASS,
	HIP_RDSTAT_NOASYNC
};

enum en_BIO_ASYNC_ERRCODES
{
	BINIO_ASYNC_FAIL = 0xffffffff,
	BINIO_ASYNC_NOOP,
	BINIO_ASYNC_INPROG,
	BINIO_ASYNC_DONE,
	BINIO_ASYNC_FORCEENUMSIZEINT = 0x7fffffff
};

uint32 g_loadlock;
st_HIPLOADDATA g_hiploadinst[8];
st_HIPLOADFUNCS g_map_HIPL_funcmap;
st_HIPSAVEFUNCS g_map_HIPS_funcmap;

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
st_HIPLOADDATA* HIPLCreate(int8* filename, int8* dblbuf, int32 bufsize);
st_HIPLOADFUNCS* get_HIPLFuncs();

// HIPLReadString__FP14st_HIPLOADDATAPc
// Start address: 0x186fb0
int32 HIPLReadString(st_HIPLOADDATA* lddata, int8* buf)
{
	int8 pad;
	int32 n;
	// Line 759, Address: 0x186fb0, Func Offset: 0
	// Line 762, Address: 0x186fc8, Func Offset: 0x18
	// Line 767, Address: 0x186fcc, Func Offset: 0x1c
	// Line 769, Address: 0x186fe0, Func Offset: 0x30
	// Line 770, Address: 0x186fe8, Func Offset: 0x38
	// Line 773, Address: 0x186ff4, Func Offset: 0x44
	// Line 774, Address: 0x187014, Func Offset: 0x64
	// Line 777, Address: 0x18701c, Func Offset: 0x6c
	// Line 778, Address: 0x187040, Func Offset: 0x90
	// Line 782, Address: 0x187048, Func Offset: 0x98
	// Line 785, Address: 0x187054, Func Offset: 0xa4
	// Line 786, Address: 0x187070, Func Offset: 0xc0
	// Line 789, Address: 0x187078, Func Offset: 0xc8
	// Line 792, Address: 0x187098, Func Offset: 0xe8
	// Line 793, Address: 0x18709c, Func Offset: 0xec
	// Func End, Address: 0x1870b8, Func Offset: 0x108
}

// HIPLReadFloats__FP14st_HIPLOADDATAPfi
// Start address: 0x1870c0
int32 HIPLReadFloats(st_HIPLOADDATA* lddata, float32* data, int32 cnt)
{
	int32 got;
	// Line 744, Address: 0x1870c0, Func Offset: 0
	// Line 749, Address: 0x1870c8, Func Offset: 0x8
	// Line 750, Address: 0x1870ec, Func Offset: 0x2c
	// Line 751, Address: 0x187100, Func Offset: 0x40
	// Line 750, Address: 0x187104, Func Offset: 0x44
	// Line 751, Address: 0x187108, Func Offset: 0x48
	// Func End, Address: 0x187110, Func Offset: 0x50
}

// HIPLReadLongs__FP14st_HIPLOADDATAPii
// Start address: 0x187110
int32 HIPLReadLongs(st_HIPLOADDATA* lddata, int32* data, int32 cnt)
{
	int32 got;
	// Line 735, Address: 0x187110, Func Offset: 0
	// Line 740, Address: 0x187118, Func Offset: 0x8
	// Line 741, Address: 0x18713c, Func Offset: 0x2c
	// Line 742, Address: 0x187150, Func Offset: 0x40
	// Line 741, Address: 0x187154, Func Offset: 0x44
	// Line 742, Address: 0x187158, Func Offset: 0x48
	// Func End, Address: 0x187160, Func Offset: 0x50
}

// HIPLReadShorts__FP14st_HIPLOADDATAPsi
// Start address: 0x187160
int32 HIPLReadShorts(st_HIPLOADDATA* lddata, int16* data, int32 cnt)
{
	int32 got;
	// Line 726, Address: 0x187160, Func Offset: 0
	// Line 731, Address: 0x187168, Func Offset: 0x8
	// Line 732, Address: 0x18718c, Func Offset: 0x2c
	// Line 733, Address: 0x1871a0, Func Offset: 0x40
	// Line 732, Address: 0x1871a4, Func Offset: 0x44
	// Line 733, Address: 0x1871a8, Func Offset: 0x48
	// Func End, Address: 0x1871b0, Func Offset: 0x50
}

// HIPLReadBytes__FP14st_HIPLOADDATAPci
// Start address: 0x1871b0
int32 HIPLReadBytes(st_HIPLOADDATA* lddata, int8* data, int32 cnt)
{
	// Line 719, Address: 0x1871b0, Func Offset: 0
	// Line 722, Address: 0x1871b8, Func Offset: 0x8
	// Line 724, Address: 0x1871dc, Func Offset: 0x2c
	// Func End, Address: 0x1871e8, Func Offset: 0x38
}

// HIPLPollRead__FP14st_HIPLOADDATA
// Start address: 0x1871f0
en_READ_ASYNC_STATUS HIPLPollRead(st_HIPLOADDATA* lddata)
{
	en_BIO_ASYNC_ERRCODES pollstat;
	en_READ_ASYNC_STATUS rdstat;
	// Line 658, Address: 0x1871f0, Func Offset: 0
	// Line 665, Address: 0x187200, Func Offset: 0x10
	// Line 667, Address: 0x187210, Func Offset: 0x20
	// Line 670, Address: 0x187218, Func Offset: 0x28
	// Line 672, Address: 0x187224, Func Offset: 0x34
	// Line 678, Address: 0x18722c, Func Offset: 0x3c
	// Line 682, Address: 0x18723c, Func Offset: 0x4c
	// Line 688, Address: 0x187268, Func Offset: 0x78
	// Line 689, Address: 0x18726c, Func Offset: 0x7c
	// Line 692, Address: 0x187274, Func Offset: 0x84
	// Line 693, Address: 0x187278, Func Offset: 0x88
	// Line 697, Address: 0x187280, Func Offset: 0x90
	// Line 701, Address: 0x187284, Func Offset: 0x94
	// Line 702, Address: 0x187288, Func Offset: 0x98
	// Func End, Address: 0x18729c, Func Offset: 0xac
}

// HIPLBypassRead__FP14st_HIPLOADDATAPvii
// Start address: 0x1872a0
int32 HIPLBypassRead(st_HIPLOADDATA* lddata, void* data, int32 cnt, int32 size)
{
	int32 got;
	// Line 591, Address: 0x1872a0, Func Offset: 0
	// Line 602, Address: 0x1872b0, Func Offset: 0x10
	// Line 604, Address: 0x1872d0, Func Offset: 0x30
	// Line 606, Address: 0x1872dc, Func Offset: 0x3c
	// Line 607, Address: 0x1872fc, Func Offset: 0x5c
	// Line 610, Address: 0x187304, Func Offset: 0x64
	// Line 616, Address: 0x187314, Func Offset: 0x74
	// Line 617, Address: 0x187324, Func Offset: 0x84
	// Line 618, Address: 0x18732c, Func Offset: 0x8c
	// Line 619, Address: 0x18733c, Func Offset: 0x9c
	// Line 620, Address: 0x187344, Func Offset: 0xa4
	// Line 621, Address: 0x18734c, Func Offset: 0xac
	// Line 622, Address: 0x18735c, Func Offset: 0xbc
	// Line 623, Address: 0x187364, Func Offset: 0xc4
	// Line 624, Address: 0x18736c, Func Offset: 0xcc
	// Line 629, Address: 0x18737c, Func Offset: 0xdc
	// Line 630, Address: 0x187380, Func Offset: 0xe0
	// Func End, Address: 0x187394, Func Offset: 0xf4
}

// HIPLBlockRead__FP14st_HIPLOADDATAPvii
// Start address: 0x1873a0
int32 HIPLBlockRead(st_HIPLOADDATA* lddata, void* data, int32 cnt, int32 size)
{
	int32 head;
	int32 left;
	int32 got;
	st_HIPLOADBLOCK* top;
	// Line 517, Address: 0x1873a0, Func Offset: 0
	// Line 529, Address: 0x1873b4, Func Offset: 0x14
	// Line 520, Address: 0x1873c0, Func Offset: 0x20
	// Line 522, Address: 0x1873c4, Func Offset: 0x24
	// Line 529, Address: 0x1873c8, Func Offset: 0x28
	// Line 531, Address: 0x1873d8, Func Offset: 0x38
	// Line 533, Address: 0x1873e8, Func Offset: 0x48
	// Line 535, Address: 0x1873fc, Func Offset: 0x5c
	// Line 536, Address: 0x187404, Func Offset: 0x64
	// Line 539, Address: 0x187418, Func Offset: 0x78
	// Line 540, Address: 0x187420, Func Offset: 0x80
	// Line 542, Address: 0x187424, Func Offset: 0x84
	// Line 550, Address: 0x18743c, Func Offset: 0x9c
	// Line 554, Address: 0x187450, Func Offset: 0xb0
	// Line 555, Address: 0x187460, Func Offset: 0xc0
	// Line 556, Address: 0x187468, Func Offset: 0xc8
	// Line 557, Address: 0x187478, Func Offset: 0xd8
	// Line 558, Address: 0x187480, Func Offset: 0xe0
	// Line 559, Address: 0x187488, Func Offset: 0xe8
	// Line 560, Address: 0x187498, Func Offset: 0xf8
	// Line 561, Address: 0x1874a0, Func Offset: 0x100
	// Line 562, Address: 0x1874a8, Func Offset: 0x108
	// Line 567, Address: 0x1874b8, Func Offset: 0x118
	// Line 568, Address: 0x1874c4, Func Offset: 0x124
	// Line 571, Address: 0x1874d8, Func Offset: 0x138
	// Func End, Address: 0x1874f0, Func Offset: 0x150
}

// HIPLBlockExit__FP14st_HIPLOADDATA
// Start address: 0x1874f0
void HIPLBlockExit(st_HIPLOADDATA* lddata)
{
	st_HIPLOADBLOCK* top;
	// Line 480, Address: 0x1874f0, Func Offset: 0
	// Line 487, Address: 0x187500, Func Offset: 0x10
	// Line 494, Address: 0x18750c, Func Offset: 0x1c
	// Line 497, Address: 0x187520, Func Offset: 0x30
	// Line 494, Address: 0x187528, Func Offset: 0x38
	// Line 497, Address: 0x18752c, Func Offset: 0x3c
	// Line 500, Address: 0x18753c, Func Offset: 0x4c
	// Line 503, Address: 0x187544, Func Offset: 0x54
	// Func End, Address: 0x187558, Func Offset: 0x68
}

// HIPLBlockEnter__FP14st_HIPLOADDATA
// Start address: 0x187560
uint32 HIPLBlockEnter(st_HIPLOADDATA* lddata)
{
	int32 size;
	uint32 cid;
	st_HIPLOADBLOCK* top;
	// Line 417, Address: 0x187560, Func Offset: 0
	// Line 420, Address: 0x18756c, Func Offset: 0xc
	// Line 421, Address: 0x187570, Func Offset: 0x10
	// Line 427, Address: 0x187574, Func Offset: 0x14
	// Line 429, Address: 0x187580, Func Offset: 0x20
	// Line 436, Address: 0x187588, Func Offset: 0x28
	// Line 438, Address: 0x187594, Func Offset: 0x34
	// Line 439, Address: 0x1875a8, Func Offset: 0x48
	// Line 443, Address: 0x1875b0, Func Offset: 0x50
	// Line 444, Address: 0x1875e4, Func Offset: 0x84
	// Line 448, Address: 0x187608, Func Offset: 0xa8
	// Line 457, Address: 0x187640, Func Offset: 0xe0
	// Line 458, Address: 0x18764c, Func Offset: 0xec
	// Line 462, Address: 0x187664, Func Offset: 0x104
	// Line 465, Address: 0x187678, Func Offset: 0x118
	// Line 466, Address: 0x187680, Func Offset: 0x120
	// Line 470, Address: 0x187688, Func Offset: 0x128
	// Line 471, Address: 0x1876a0, Func Offset: 0x140
	// Line 474, Address: 0x1876a4, Func Offset: 0x144
	// Line 475, Address: 0x1876ac, Func Offset: 0x14c
	// Func End, Address: 0x1876bc, Func Offset: 0x15c
}

// HIPLSetSpot__FP14st_HIPLOADDATAi
// Start address: 0x1876c0
void HIPLSetSpot(st_HIPLOADDATA* lddata, int32 spot)
{
	// Line 375, Address: 0x1876c0, Func Offset: 0
	// Line 393, Address: 0x1876cc, Func Offset: 0xc
	// Line 401, Address: 0x1876d0, Func Offset: 0x10
	// Func End, Address: 0x1876d8, Func Offset: 0x18
}

// HIPLSetBypass__FP14st_HIPLOADDATAii
// Start address: 0x1876e0
int32 HIPLSetBypass(st_HIPLOADDATA* lddata, int32 enable, int32 use_async)
{
	// Line 330, Address: 0x1876e0, Func Offset: 0
	// Line 335, Address: 0x1876f8, Func Offset: 0x18
	// Line 338, Address: 0x18770c, Func Offset: 0x2c
	// Line 340, Address: 0x187720, Func Offset: 0x40
	// Line 342, Address: 0x187728, Func Offset: 0x48
	// Line 344, Address: 0x18773c, Func Offset: 0x5c
	// Line 348, Address: 0x187744, Func Offset: 0x64
	// Line 350, Address: 0x18774c, Func Offset: 0x6c
	// Line 351, Address: 0x187750, Func Offset: 0x70
	// Line 352, Address: 0x187754, Func Offset: 0x74
	// Line 353, Address: 0x18775c, Func Offset: 0x7c
	// Line 355, Address: 0x187764, Func Offset: 0x84
	// Line 356, Address: 0x187774, Func Offset: 0x94
	// Line 357, Address: 0x187778, Func Offset: 0x98
	// Line 358, Address: 0x18777c, Func Offset: 0x9c
	// Line 361, Address: 0x187784, Func Offset: 0xa4
	// Line 362, Address: 0x187788, Func Offset: 0xa8
	// Func End, Address: 0x1877a0, Func Offset: 0xc0
}

// HIPLBaseSector__FP14st_HIPLOADDATA
// Start address: 0x1877a0
uint32 HIPLBaseSector(st_HIPLOADDATA* lddata)
{
	// Line 315, Address: 0x1877a0, Func Offset: 0
	// Func End, Address: 0x1877a8, Func Offset: 0x8
}

// HIPLDestroy__FP14st_HIPLOADDATA
// Start address: 0x1877b0
void HIPLDestroy(st_HIPLOADDATA* lddata)
{
	int32 lockid;
	// Line 293, Address: 0x1877b0, Func Offset: 0
	// Line 297, Address: 0x1877c0, Func Offset: 0x10
	// Line 300, Address: 0x1877c8, Func Offset: 0x18
	// Line 303, Address: 0x1877e0, Func Offset: 0x30
	// Line 304, Address: 0x1877e4, Func Offset: 0x34
	// Line 305, Address: 0x1877f4, Func Offset: 0x44
	// Line 308, Address: 0x18780c, Func Offset: 0x5c
	// Func End, Address: 0x187820, Func Offset: 0x70
}

// HIPLCreate__FPCcPci
// Start address: 0x187820
st_HIPLOADDATA* HIPLCreate(int8* filename, int8* dblbuf, int32 bufsize)
{
	int32 uselock;
	int32 i;
	st_HIPLOADBLOCK* tmp_blk;
	st_FILELOADINFO* fli;
	st_HIPLOADDATA* lddata;
	// Line 219, Address: 0x187820, Func Offset: 0
	// Line 230, Address: 0x187840, Func Offset: 0x20
	// Line 221, Address: 0x18784c, Func Offset: 0x2c
	// Line 225, Address: 0x187850, Func Offset: 0x30
	// Line 230, Address: 0x187854, Func Offset: 0x34
	// Line 231, Address: 0x187858, Func Offset: 0x38
	// Line 232, Address: 0x18786c, Func Offset: 0x4c
	// Line 233, Address: 0x187870, Func Offset: 0x50
	// Line 234, Address: 0x187880, Func Offset: 0x60
	// Line 232, Address: 0x187884, Func Offset: 0x64
	// Line 233, Address: 0x18788c, Func Offset: 0x6c
	// Line 235, Address: 0x187898, Func Offset: 0x78
	// Line 237, Address: 0x1878a0, Func Offset: 0x80
	// Line 240, Address: 0x1878b0, Func Offset: 0x90
	// Line 241, Address: 0x1878b8, Func Offset: 0x98
	// Line 244, Address: 0x1878c8, Func Offset: 0xa8
	// Line 246, Address: 0x1878cc, Func Offset: 0xac
	// Line 248, Address: 0x1878d4, Func Offset: 0xb4
	// Line 249, Address: 0x1878d8, Func Offset: 0xb8
	// Line 250, Address: 0x1878dc, Func Offset: 0xbc
	// Line 251, Address: 0x1878e0, Func Offset: 0xc0
	// Line 252, Address: 0x1878e4, Func Offset: 0xc4
	// Line 254, Address: 0x1878e8, Func Offset: 0xc8
	// Line 255, Address: 0x1878ec, Func Offset: 0xcc
	// Line 258, Address: 0x1878f0, Func Offset: 0xd0
	// Line 259, Address: 0x1878f4, Func Offset: 0xd4
	// Line 260, Address: 0x1878f8, Func Offset: 0xd8
	// Line 261, Address: 0x1878fc, Func Offset: 0xdc
	// Line 264, Address: 0x18796c, Func Offset: 0x14c
	// Line 265, Address: 0x187978, Func Offset: 0x158
	// Line 266, Address: 0x187980, Func Offset: 0x160
	// Line 267, Address: 0x187984, Func Offset: 0x164
	// Line 271, Address: 0x187988, Func Offset: 0x168
	// Line 272, Address: 0x187998, Func Offset: 0x178
	// Line 274, Address: 0x1879a8, Func Offset: 0x188
	// Line 277, Address: 0x1879b0, Func Offset: 0x190
	// Line 278, Address: 0x1879fc, Func Offset: 0x1dc
	// Line 283, Address: 0x187a00, Func Offset: 0x1e0
	// Line 284, Address: 0x187a04, Func Offset: 0x1e4
	// Func End, Address: 0x187a24, Func Offset: 0x204
}

// get_HIPLFuncs__Fv
// Start address: 0x187a30
st_HIPLOADFUNCS* get_HIPLFuncs()
{
	// Line 194, Address: 0x187a30, Func Offset: 0
	// Line 195, Address: 0x187a34, Func Offset: 0x4
	// Func End, Address: 0x187a3c, Func Offset: 0xc
}

