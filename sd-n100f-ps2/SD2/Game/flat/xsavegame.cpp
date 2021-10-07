typedef struct st_XSAVEGAME_READCONTEXT;
typedef enum en_XSGASYNC_STATUS;
typedef enum en_CHGCODE;
typedef struct st_XSAVEGAME_CLIENT;
typedef struct st_XSAVEGAME_DATA;
typedef struct st_XSAVEGAME_WRITECONTEXT;
typedef struct st_XSAVEGAME_LEADER;
typedef struct st_ISGSESSION;
typedef enum en_ASYNC_OPSTAT;
typedef enum en_SAVEGAME_MODE;

typedef int32(*type_1)(void*, st_XSAVEGAME_DATA*, int32*, int32*);
typedef int32(*type_3)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_READCONTEXT*, uint32, int32);
typedef int32(*type_4)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_WRITECONTEXT*);
typedef int32(*type_5)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_READCONTEXT*, uint32, int32);
typedef int32(*type_7)(void*, st_XSAVEGAME_DATA*, int32*, int32*);
typedef int32(*type_8)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_WRITECONTEXT*);
typedef void(*type_17)(void*, en_CHGCODE);

typedef int8 type_0[64];
typedef int8 type_2[32];
typedef int8 type_6[256];
typedef st_XSAVEGAME_CLIENT type_9[128];
typedef int8 type_10[32];
typedef int8 type_11[256];
typedef int8 type_12[64];
typedef int8 type_13[23];
typedef int8 type_14[2];
typedef st_XSAVEGAME_LEADER type_15[8];
typedef int8 type_16[32];

struct st_XSAVEGAME_READCONTEXT
{
};

enum en_XSGASYNC_STATUS
{
	XSG_ASTAT_NOOP,
	XSG_ASTAT_INPROG,
	XSG_ASTAT_SUCCESS,
	XSG_ASTAT_FAILED
};

enum en_CHGCODE
{
	ISG_CHG_NONE,
	ISG_CHG_TARGET,
	ISG_CHG_GAMELIST
};

struct st_XSAVEGAME_CLIENT
{
	uint32 idtag;
	int32(*cltinfo)(void*, st_XSAVEGAME_DATA*, int32*, int32*);
	int32(*cltproc)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_WRITECONTEXT*);
	int32(*cltload)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_READCONTEXT*, uint32, int32);
	void* cltdata;
	int32 needamt;
	int32 maxamt;
	int32 realamt;
	int8* buf_sizepos;
	int8* buf_maxpos;
	int32 blokact;
	int32 blokmax;
	int8* blokpos;
	int8* readpos;
	int32 readamt;
	int32 readremain;
};

struct st_XSAVEGAME_DATA
{
	int32 gfile_idx;
	en_SAVEGAME_MODE mode;
	uint32 stage;
	int32 gslot;
	int8 label[64];
	int32 thumIndex;
	long32 playtime;
	int8* membuf;
	int32 memsize;
	int8* buf_curpos;
	int8* buf_sizespot;
	int8* buf_cksmspot;
	int32 totamt;
	uint32 chksum;
	uint32 upd_tally;
	int32 cltneed;
	int32 cltmax;
	int32 chdrneed;
	int32 stkcnt;
	st_XSAVEGAME_CLIENT cltstk[128];
	st_XSAVEGAME_CLIENT dfltloadclt;
	uint32 file_chksum;
	uint32 read_chksum;
	int32 readsize;
	int8* loadbuf;
	int32 loadsize;
	int8* walkpos;
	int32 walkremain;
	st_ISGSESSION* isgsess;
};

struct st_XSAVEGAME_WRITECONTEXT
{
};

struct st_XSAVEGAME_LEADER
{
	int8 gameLabel[64];
	int32 thumIconIndex;
	long32 gametime;
};

struct st_ISGSESSION
{
};

enum en_ASYNC_OPSTAT
{
	ISG_OPSTAT_FAILURE = 0xffffffff,
	ISG_OPSTAT_INPROG,
	ISG_OPSTAT_SUCCESS
};

enum en_SAVEGAME_MODE
{
	XSG_MODE_LOAD = 0xa,
	XSG_MODE_SAVE
};

int32 g_xsginit;
st_XSAVEGAME_DATA g_xsgdata;
st_XSAVEGAME_LEADER g_leaders[8];
int32(*xSG_cb_leader_svproc)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_WRITECONTEXT*);
int32(*xSG_cb_leader_svinfo)(void*, st_XSAVEGAME_DATA*, int32*, int32*);
int32(*xSG_cb_leader_load)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_READCONTEXT*, uint32, int32);
void(*xSG_cb_ISGChange)(void*, en_CHGCODE);

int32 xSG_ld_flipload(st_XSAVEGAME_DATA* xsgdata);
int32 xSG_ld_findcltblk(st_XSAVEGAME_DATA* xsgdata);
int32 xSG_ld_readhead(st_XSAVEGAME_DATA* xsgdata);
void xSG_cb_ISGChange();
int32 xSG_sv_commit(st_XSAVEGAME_DATA* xsgdata);
int32 xSG_smem_cltclose(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_CLIENT* clt);
int32 xSG_smem_blkclose(st_XSAVEGAME_DATA* xsgdata);
int32 xSG_sv_flipproc(st_XSAVEGAME_DATA* xsgdata);
int32 xSG_sv_prepdest(st_XSAVEGAME_DATA* xsgdata);
int32 xSG_sv_flipinfo(st_XSAVEGAME_DATA* xsgdata);
int8* xSG_cm_slotname(int32 slotidx);
int32 xSG_chdir_gamedir(st_XSAVEGAME_DATA* xsgdata);
int32 xSG_grab_leaders(st_XSAVEGAME_DATA* xsgdata);
int32 xSGReadData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt, float32* buff, int32 n);
int32 xSGReadData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt, uint32* buff, int32 n);
int32 xSGReadData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt, int32* buff, int32 n);
int32 xSGReadData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt, int8* buff, int32 n);
int32 xSGReadData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt, int8* buff, int32 elesiz, int32 n);
int32 xSGWriteData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt, float32* data, int32 n);
int32 xSGWriteData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt, uint32* data, int32 n);
int32 xSGWriteData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt, int32* data, int32 n);
int32 xSGWriteData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt, int8* data, int32 n);
int32 xSGWriteStrLen(int8* str);
int32 xSGWriteData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt, int8* data, int32 elesiz, int32 n);
int32 xSG_cb_leader_load(st_XSAVEGAME_DATA* original_xsgdata, st_XSAVEGAME_READCONTEXT* rctxt);
int32 xSG_cb_leader_svproc(void* cltdata, st_XSAVEGAME_DATA* original_xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt);
int32 xSG_cb_leader_svinfo(int32* cur_space, int32* max_fullgame);
en_XSGASYNC_STATUS xSGAsyncStatus(st_XSAVEGAME_DATA* xsgdata, int32 block, int8* errmsg);
int32 xSGWrapup(st_XSAVEGAME_DATA* xsgdata);
int32 xSGProcess(st_XSAVEGAME_DATA* xsgdata);
int32 xSGSetup(st_XSAVEGAME_DATA* xsgdata, int32 gidx, int8* label, int32 thumIdx, long32 playtime);
int32 xSGSetup(st_XSAVEGAME_DATA* xsgdata);
int32 xSGAddLoadClient(st_XSAVEGAME_DATA* xsgdata, uint32 clttag, void* cltdata, int32(*loadfunc)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_READCONTEXT*, uint32, int32));
int32 xSGAddSaveClient(st_XSAVEGAME_DATA* xsgdata, uint32 clttag, void* cltdata, int32(*infofunc)(void*, st_XSAVEGAME_DATA*, int32*, int32*), int32(*procfunc)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_WRITECONTEXT*));
int32 xSGGameThumIndex(st_XSAVEGAME_DATA* xsgdata, int32 gidx);
int8* xSGGameLabel(st_XSAVEGAME_DATA* xsgdata, int32 gidx);
int8* xSGGameModDate(st_XSAVEGAME_DATA* xsgdata, int32 gidx);
int32 xSGGameIsEmpty(st_XSAVEGAME_DATA* xsgdata, int32 gidx);
void xSGGameSet(st_XSAVEGAME_DATA* xsgdata, int32 gidx);
int32 xSGTgtHaveRoom(st_XSAVEGAME_DATA* xsgdata, int32 tidx, int32 fsize, int32 slotidx, int32* bytesNeeded, int32* availOnDisk);
int32 xSGTgtHasGameDir(st_XSAVEGAME_DATA* xsgdata, int32 tidx);
int32 xSGTgtSelect(st_XSAVEGAME_DATA* xsgdata, int32 tidx);
int32 xSGTgtFormatTgt(st_XSAVEGAME_DATA* xsgdata, int32 tidx);
int32 xSGTgtIsFormat(st_XSAVEGAME_DATA* xsgdata, int32 tidx);
int32 xSGTgtPhysSlotIdx(st_XSAVEGAME_DATA* xsgdata, int32 tidx);
int32 xSGTgtCount(st_XSAVEGAME_DATA* xsgdata, int32* max);
int32 xSGDone(st_XSAVEGAME_DATA* xsgdata);
st_XSAVEGAME_DATA* xSGInit(en_SAVEGAME_MODE mode);
int32 xSGShutdown();
int32 xSGStartup();

// xSG_ld_flipload__FP17st_XSAVEGAME_DATA
// Start address: 0x18be30
int32 xSG_ld_flipload(st_XSAVEGAME_DATA* xsgdata)
{
	st_XSAVEGAME_CLIENT* clt;
	int32 i;
	int32 rc;
	int32 result;
	// Line 2126, Address: 0x18be30, Func Offset: 0
	// Line 2127, Address: 0x18be50, Func Offset: 0x20
	// Line 2134, Address: 0x18be54, Func Offset: 0x24
	// Line 2137, Address: 0x18be60, Func Offset: 0x30
	// Line 2138, Address: 0x18be84, Func Offset: 0x54
	// Line 2139, Address: 0x18be90, Func Offset: 0x60
	// Line 2143, Address: 0x18beac, Func Offset: 0x7c
	// Line 2144, Address: 0x18beb4, Func Offset: 0x84
	// Line 2149, Address: 0x18bec0, Func Offset: 0x90
	// Line 2151, Address: 0x18bec8, Func Offset: 0x98
	// Line 2153, Address: 0x18bed4, Func Offset: 0xa4
	// Line 2155, Address: 0x18bed8, Func Offset: 0xa8
	// Line 2156, Address: 0x18bee4, Func Offset: 0xb4
	// Line 2158, Address: 0x18bef8, Func Offset: 0xc8
	// Line 2159, Address: 0x18befc, Func Offset: 0xcc
	// Func End, Address: 0x18bf1c, Func Offset: 0xec
}

// xSG_ld_findcltblk__FP17st_XSAVEGAME_DATA
// Start address: 0x18bf20
int32 xSG_ld_findcltblk(st_XSAVEGAME_DATA* xsgdata)
{
	st_XSAVEGAME_CLIENT* dfltclt;
	int32 rc;
	int32 found;
	int32 i;
	st_XSAVEGAME_CLIENT* clt;
	int32 actamt;
	int32 maxamt;
	uint32 tag;
	int32 ival;
	// Line 1959, Address: 0x18bf20, Func Offset: 0
	// Line 1962, Address: 0x18bf34, Func Offset: 0x14
	// Line 1963, Address: 0x18bf38, Func Offset: 0x18
	// Line 1964, Address: 0x18bf3c, Func Offset: 0x1c
	// Line 1965, Address: 0x18bf40, Func Offset: 0x20
	// Line 1978, Address: 0x18bf44, Func Offset: 0x24
	// Line 1982, Address: 0x18bf4c, Func Offset: 0x2c
	// Line 1978, Address: 0x18bf5c, Func Offset: 0x3c
	// Line 1979, Address: 0x18bf60, Func Offset: 0x40
	// Line 1975, Address: 0x18bf64, Func Offset: 0x44
	// Line 1982, Address: 0x18bf68, Func Offset: 0x48
	// Line 1983, Address: 0x18bf70, Func Offset: 0x50
	// Line 1984, Address: 0x18bf88, Func Offset: 0x68
	// Line 1985, Address: 0x18bfa0, Func Offset: 0x80
	// Line 1989, Address: 0x18bfb8, Func Offset: 0x98
	// Line 1999, Address: 0x18bfc0, Func Offset: 0xa0
	// Line 1992, Address: 0x18bfd0, Func Offset: 0xb0
	// Line 1993, Address: 0x18bfd4, Func Offset: 0xb4
	// Line 1994, Address: 0x18bfd8, Func Offset: 0xb8
	// Line 1999, Address: 0x18bfdc, Func Offset: 0xbc
	// Line 2000, Address: 0x18bfe4, Func Offset: 0xc4
	// Line 2001, Address: 0x18bffc, Func Offset: 0xdc
	// Line 2003, Address: 0x18c014, Func Offset: 0xf4
	// Line 2008, Address: 0x18c020, Func Offset: 0x100
	// Line 2013, Address: 0x18c034, Func Offset: 0x114
	// Line 2021, Address: 0x18c040, Func Offset: 0x120
	// Line 2015, Address: 0x18c044, Func Offset: 0x124
	// Line 2021, Address: 0x18c048, Func Offset: 0x128
	// Line 2022, Address: 0x18c04c, Func Offset: 0x12c
	// Line 2023, Address: 0x18c054, Func Offset: 0x134
	// Line 2026, Address: 0x18c05c, Func Offset: 0x13c
	// Line 2027, Address: 0x18c064, Func Offset: 0x144
	// Line 2028, Address: 0x18c068, Func Offset: 0x148
	// Line 2030, Address: 0x18c06c, Func Offset: 0x14c
	// Line 2033, Address: 0x18c078, Func Offset: 0x158
	// Line 2037, Address: 0x18c090, Func Offset: 0x170
	// Line 2038, Address: 0x18c098, Func Offset: 0x178
	// Line 2041, Address: 0x18c0a4, Func Offset: 0x184
	// Line 2047, Address: 0x18c0b0, Func Offset: 0x190
	// Line 2058, Address: 0x18c0b4, Func Offset: 0x194
	// Line 2047, Address: 0x18c0b8, Func Offset: 0x198
	// Line 2048, Address: 0x18c0bc, Func Offset: 0x19c
	// Line 2049, Address: 0x18c0c4, Func Offset: 0x1a4
	// Line 2052, Address: 0x18c0cc, Func Offset: 0x1ac
	// Line 2053, Address: 0x18c0d4, Func Offset: 0x1b4
	// Line 2054, Address: 0x18c0d8, Func Offset: 0x1b8
	// Line 2058, Address: 0x18c0e0, Func Offset: 0x1c0
	// Line 2061, Address: 0x18c0f8, Func Offset: 0x1d8
	// Line 2062, Address: 0x18c100, Func Offset: 0x1e0
	// Line 2065, Address: 0x18c10c, Func Offset: 0x1ec
	// Line 2073, Address: 0x18c110, Func Offset: 0x1f0
	// Line 2074, Address: 0x18c11c, Func Offset: 0x1fc
	// Line 2075, Address: 0x18c138, Func Offset: 0x218
	// Line 2078, Address: 0x18c154, Func Offset: 0x234
	// Line 2080, Address: 0x18c15c, Func Offset: 0x23c
	// Line 2086, Address: 0x18c168, Func Offset: 0x248
	// Line 2087, Address: 0x18c178, Func Offset: 0x258
	// Line 2089, Address: 0x18c184, Func Offset: 0x264
	// Line 2096, Address: 0x18c18c, Func Offset: 0x26c
	// Line 2097, Address: 0x18c19c, Func Offset: 0x27c
	// Line 2107, Address: 0x18c1ac, Func Offset: 0x28c
	// Line 2121, Address: 0x18c1bc, Func Offset: 0x29c
	// Line 2120, Address: 0x18c1cc, Func Offset: 0x2ac
	// Line 2121, Address: 0x18c1d0, Func Offset: 0x2b0
	// Func End, Address: 0x18c1d8, Func Offset: 0x2b8
}

// xSG_ld_readhead__FP17st_XSAVEGAME_DATA
// Start address: 0x18c1e0
int32 xSG_ld_readhead(st_XSAVEGAME_DATA* xsgdata)
{
	int32 ival;
	int32 result;
	// Line 1891, Address: 0x18c1e0, Func Offset: 0
	// Line 1893, Address: 0x18c1f0, Func Offset: 0x10
	// Line 1896, Address: 0x18c1f4, Func Offset: 0x14
	// Line 1892, Address: 0x18c1f8, Func Offset: 0x18
	// Line 1900, Address: 0x18c200, Func Offset: 0x20
	// Line 1896, Address: 0x18c20c, Func Offset: 0x2c
	// Line 1897, Address: 0x18c210, Func Offset: 0x30
	// Line 1900, Address: 0x18c214, Func Offset: 0x34
	// Line 1902, Address: 0x18c220, Func Offset: 0x40
	// Line 1905, Address: 0x18c238, Func Offset: 0x58
	// Line 1907, Address: 0x18c24c, Func Offset: 0x6c
	// Line 1910, Address: 0x18c260, Func Offset: 0x80
	// Line 1911, Address: 0x18c274, Func Offset: 0x94
	// Line 1915, Address: 0x18c278, Func Offset: 0x98
	// Line 1916, Address: 0x18c294, Func Offset: 0xb4
	// Line 1920, Address: 0x18c298, Func Offset: 0xb8
	// Line 1916, Address: 0x18c29c, Func Offset: 0xbc
	// Line 1921, Address: 0x18c2a0, Func Offset: 0xc0
	// Func End, Address: 0x18c2b4, Func Offset: 0xd4
}

// xSG_cb_ISGChange__FPv10en_CHGCODE
// Start address: 0x18c2c0
void xSG_cb_ISGChange()
{
	// Line 1839, Address: 0x18c2c0, Func Offset: 0
	// Func End, Address: 0x18c2c8, Func Offset: 0x8
}

// xSG_sv_commit__FP17st_XSAVEGAME_DATA
// Start address: 0x18c2d0
int32 xSG_sv_commit(st_XSAVEGAME_DATA* xsgdata)
{
	int8* name;
	int32 rc;
	int32 result;
	// Line 1784, Address: 0x18c2d0, Func Offset: 0
	// Line 1798, Address: 0x18c2e4, Func Offset: 0x14
	// Line 1799, Address: 0x18c2f8, Func Offset: 0x28
	// Line 1801, Address: 0x18c308, Func Offset: 0x38
	// Line 1804, Address: 0x18c318, Func Offset: 0x48
	// Line 1805, Address: 0x18c328, Func Offset: 0x58
	// Line 1808, Address: 0x18c340, Func Offset: 0x70
	// Line 1811, Address: 0x18c34c, Func Offset: 0x7c
	// Line 1812, Address: 0x18c350, Func Offset: 0x80
	// Func End, Address: 0x18c364, Func Offset: 0x94
}

// xSG_smem_cltclose__FP17st_XSAVEGAME_DATAP19st_XSAVEGAME_CLIENT
// Start address: 0x18c370
int32 xSG_smem_cltclose(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_CLIENT* clt)
{
	int8* last_bufpos;
	// Line 1739, Address: 0x18c370, Func Offset: 0
	// Line 1748, Address: 0x18c388, Func Offset: 0x18
	// Line 1751, Address: 0x18c398, Func Offset: 0x28
	// Line 1755, Address: 0x18c39c, Func Offset: 0x2c
	// Line 1756, Address: 0x18c3b0, Func Offset: 0x40
	// Line 1761, Address: 0x18c3bc, Func Offset: 0x4c
	// Line 1764, Address: 0x18c3c0, Func Offset: 0x50
	// Line 1765, Address: 0x18c3c4, Func Offset: 0x54
	// Line 1766, Address: 0x18c3e0, Func Offset: 0x70
	// Line 1768, Address: 0x18c3e4, Func Offset: 0x74
	// Line 1769, Address: 0x18c3e8, Func Offset: 0x78
	// Line 1770, Address: 0x18c404, Func Offset: 0x94
	// Line 1772, Address: 0x18c408, Func Offset: 0x98
	// Line 1774, Address: 0x18c410, Func Offset: 0xa0
	// Line 1778, Address: 0x18c41c, Func Offset: 0xac
	// Line 1777, Address: 0x18c42c, Func Offset: 0xbc
	// Line 1778, Address: 0x18c430, Func Offset: 0xc0
	// Func End, Address: 0x18c438, Func Offset: 0xc8
}

// xSG_smem_blkclose__FP17st_XSAVEGAME_DATA
// Start address: 0x18c440
int32 xSG_smem_blkclose(st_XSAVEGAME_DATA* xsgdata)
{
	int8* last_bufpos;
	// Line 1655, Address: 0x18c440, Func Offset: 0
	// Line 1665, Address: 0x18c450, Func Offset: 0x10
	// Line 1678, Address: 0x18c454, Func Offset: 0x14
	// Line 1679, Address: 0x18c458, Func Offset: 0x18
	// Line 1680, Address: 0x18c460, Func Offset: 0x20
	// Line 1681, Address: 0x18c478, Func Offset: 0x38
	// Line 1684, Address: 0x18c47c, Func Offset: 0x3c
	// Line 1685, Address: 0x18c480, Func Offset: 0x40
	// Line 1686, Address: 0x18c484, Func Offset: 0x44
	// Line 1687, Address: 0x18c4a0, Func Offset: 0x60
	// Line 1689, Address: 0x18c4a4, Func Offset: 0x64
	// Line 1694, Address: 0x18c4ac, Func Offset: 0x6c
	// Func End, Address: 0x18c4c0, Func Offset: 0x80
}

// xSG_sv_flipproc__FP17st_XSAVEGAME_DATA
// Start address: 0x18c4c0
int32 xSG_sv_flipproc(st_XSAVEGAME_DATA* xsgdata)
{
	int32 needfill;
	int8 bfill;
	st_XSAVEGAME_CLIENT* clt;
	int32 i;
	int32 rc;
	int32 result;
	// Line 1537, Address: 0x18c4c0, Func Offset: 0
	// Line 1542, Address: 0x18c4e8, Func Offset: 0x28
	// Line 1538, Address: 0x18c4ec, Func Offset: 0x2c
	// Line 1542, Address: 0x18c4f0, Func Offset: 0x30
	// Line 1546, Address: 0x18c4f4, Func Offset: 0x34
	// Line 1551, Address: 0x18c500, Func Offset: 0x40
	// Line 1556, Address: 0x18c588, Func Offset: 0xc8
	// Line 1558, Address: 0x18c5a0, Func Offset: 0xe0
	// Line 1559, Address: 0x18c5a8, Func Offset: 0xe8
	// Line 1561, Address: 0x18c5b4, Func Offset: 0xf4
	// Line 1565, Address: 0x18c5b8, Func Offset: 0xf8
	// Line 1566, Address: 0x18c5c0, Func Offset: 0x100
	// Line 1570, Address: 0x18c5d0, Func Offset: 0x110
	// Line 1575, Address: 0x18c608, Func Offset: 0x148
	// Line 1576, Address: 0x18c610, Func Offset: 0x150
	// Line 1578, Address: 0x18c618, Func Offset: 0x158
	// Line 1580, Address: 0x18c620, Func Offset: 0x160
	// Line 1585, Address: 0x18c630, Func Offset: 0x170
	// Line 1590, Address: 0x18c63c, Func Offset: 0x17c
	// Line 1592, Address: 0x18c650, Func Offset: 0x190
	// Line 1593, Address: 0x18c654, Func Offset: 0x194
	// Func End, Address: 0x18c67c, Func Offset: 0x1bc
}

// xSG_sv_prepdest__FP17st_XSAVEGAME_DATA
// Start address: 0x18c680
int32 xSG_sv_prepdest(st_XSAVEGAME_DATA* xsgdata)
{
	int32 result;
	// Line 1496, Address: 0x18c680, Func Offset: 0
	// Line 1502, Address: 0x18c690, Func Offset: 0x10
	// Line 1505, Address: 0x18c6a0, Func Offset: 0x20
	// Line 1509, Address: 0x18c6a8, Func Offset: 0x28
	// Line 1514, Address: 0x18c6bc, Func Offset: 0x3c
	// Line 1517, Address: 0x18c6c8, Func Offset: 0x48
	// Line 1520, Address: 0x18c6d4, Func Offset: 0x54
	// Line 1522, Address: 0x18c6dc, Func Offset: 0x5c
	// Line 1525, Address: 0x18c6e8, Func Offset: 0x68
	// Line 1527, Address: 0x18c6f8, Func Offset: 0x78
	// Line 1532, Address: 0x18c700, Func Offset: 0x80
	// Line 1533, Address: 0x18c704, Func Offset: 0x84
	// Func End, Address: 0x18c718, Func Offset: 0x98
}

// xSG_sv_flipinfo__FP17st_XSAVEGAME_DATA
// Start address: 0x18c720
int32 xSG_sv_flipinfo(st_XSAVEGAME_DATA* xsgdata)
{
	int32 cltmax;
	int32 cltamt;
	st_XSAVEGAME_CLIENT* clt;
	int32 rc;
	int32 i;
	int32 result;
	// Line 1437, Address: 0x18c720, Func Offset: 0
	// Line 1443, Address: 0x18c740, Func Offset: 0x20
	// Line 1444, Address: 0x18c744, Func Offset: 0x24
	// Line 1439, Address: 0x18c748, Func Offset: 0x28
	// Line 1449, Address: 0x18c74c, Func Offset: 0x2c
	// Line 1451, Address: 0x18c758, Func Offset: 0x38
	// Line 1452, Address: 0x18c75c, Func Offset: 0x3c
	// Line 1465, Address: 0x18c760, Func Offset: 0x40
	// Line 1466, Address: 0x18c77c, Func Offset: 0x5c
	// Line 1467, Address: 0x18c784, Func Offset: 0x64
	// Line 1470, Address: 0x18c790, Func Offset: 0x70
	// Line 1474, Address: 0x18c798, Func Offset: 0x78
	// Line 1475, Address: 0x18c7a0, Func Offset: 0x80
	// Line 1476, Address: 0x18c7a8, Func Offset: 0x88
	// Line 1477, Address: 0x18c7b8, Func Offset: 0x98
	// Line 1478, Address: 0x18c7c8, Func Offset: 0xa8
	// Line 1479, Address: 0x18c7d4, Func Offset: 0xb4
	// Line 1481, Address: 0x18c7d8, Func Offset: 0xb8
	// Line 1482, Address: 0x18c7e0, Func Offset: 0xc0
	// Line 1483, Address: 0x18c7ec, Func Offset: 0xcc
	// Line 1486, Address: 0x18c7f4, Func Offset: 0xd4
	// Line 1490, Address: 0x18c808, Func Offset: 0xe8
	// Line 1491, Address: 0x18c80c, Func Offset: 0xec
	// Func End, Address: 0x18c82c, Func Offset: 0x10c
}

// xSG_cm_slotname__FP17st_XSAVEGAME_DATAi
// Start address: 0x18c830
int8* xSG_cm_slotname(int32 slotidx)
{
	int8* sptr;
	int8 slotname[32];
	// Line 1413, Address: 0x18c830, Func Offset: 0
	// Line 1417, Address: 0x18c838, Func Offset: 0x8
	// Line 1419, Address: 0x18c840, Func Offset: 0x10
	// Line 1420, Address: 0x18c84c, Func Offset: 0x1c
	// Line 1421, Address: 0x18c85c, Func Offset: 0x2c
	// Line 1425, Address: 0x18c864, Func Offset: 0x34
	// Line 1429, Address: 0x18c870, Func Offset: 0x40
	// Line 1432, Address: 0x18c880, Func Offset: 0x50
	// Line 1431, Address: 0x18c884, Func Offset: 0x54
	// Line 1432, Address: 0x18c88c, Func Offset: 0x5c
	// Func End, Address: 0x18c894, Func Offset: 0x64
}

// xSG_chdir_gamedir__FP17st_XSAVEGAME_DATA
// Start address: 0x18c8a0
int32 xSG_chdir_gamedir(st_XSAVEGAME_DATA* xsgdata)
{
	int8* namestr;
	int32 rc;
	int32 result;
	// Line 1398, Address: 0x18c8a0, Func Offset: 0
	// Line 1404, Address: 0x18c8b4, Func Offset: 0x14
	// Line 1405, Address: 0x18c8c8, Func Offset: 0x28
	// Line 1406, Address: 0x18c8d4, Func Offset: 0x34
	// Line 1408, Address: 0x18c8e0, Func Offset: 0x40
	// Line 1409, Address: 0x18c8e4, Func Offset: 0x44
	// Func End, Address: 0x18c8f8, Func Offset: 0x58
}

// xSG_grab_leaders__FP17st_XSAVEGAME_DATA
// Start address: 0x18c900
int32 xSG_grab_leaders(st_XSAVEGAME_DATA* xsgdata)
{
	int32 rc;
	int8 readbuf[256];
	int32 i;
	int32 num_found;
	// Line 1356, Address: 0x18c900, Func Offset: 0
	// Line 1359, Address: 0x18c924, Func Offset: 0x24
	// Line 1357, Address: 0x18c928, Func Offset: 0x28
	// Line 1359, Address: 0x18c92c, Func Offset: 0x2c
	// Line 1366, Address: 0x18c958, Func Offset: 0x58
	// Line 1371, Address: 0x18c96c, Func Offset: 0x6c
	// Line 1372, Address: 0x18c998, Func Offset: 0x98
	// Line 1374, Address: 0x18c9a8, Func Offset: 0xa8
	// Line 1375, Address: 0x18c9b4, Func Offset: 0xb4
	// Line 1381, Address: 0x18c9fc, Func Offset: 0xfc
	// Line 1383, Address: 0x18ca48, Func Offset: 0x148
	// Line 1385, Address: 0x18ca64, Func Offset: 0x164
	// Line 1390, Address: 0x18ca6c, Func Offset: 0x16c
	// Line 1392, Address: 0x18ca7c, Func Offset: 0x17c
	// Line 1394, Address: 0x18ca90, Func Offset: 0x190
	// Line 1395, Address: 0x18ca94, Func Offset: 0x194
	// Func End, Address: 0x18cab8, Func Offset: 0x1b8
}

// xSGReadData__FP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTPfi
// Start address: 0x18cac0
int32 xSGReadData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt, float32* buff, int32 n)
{
	int32 cnt;
	// Line 1346, Address: 0x18cac4, Func Offset: 0x4
	// Func End, Address: 0x18cacc, Func Offset: 0xc
}

// xSGReadData__FP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTPUii
// Start address: 0x18cad0
int32 xSGReadData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt, uint32* buff, int32 n)
{
	int32 cnt;
	// Line 1338, Address: 0x18cad4, Func Offset: 0x4
	// Func End, Address: 0x18cadc, Func Offset: 0xc
}

// xSGReadData__FP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTPii
// Start address: 0x18cae0
int32 xSGReadData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt, int32* buff, int32 n)
{
	int32 cnt;
	// Line 1330, Address: 0x18cae4, Func Offset: 0x4
	// Func End, Address: 0x18caec, Func Offset: 0xc
}

// xSGReadData__FP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTPci
// Start address: 0x18caf0
int32 xSGReadData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt, int8* buff, int32 n)
{
	int32 cnt;
	// Line 1290, Address: 0x18caf4, Func Offset: 0x4
	// Func End, Address: 0x18cafc, Func Offset: 0xc
}

// xSGReadData__FP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTPcii
// Start address: 0x18cb00
int32 xSGReadData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt, int8* buff, int32 elesiz, int32 n)
{
	st_XSAVEGAME_CLIENT* clt;
	int32 cnt;
	// Line 1176, Address: 0x18cb00, Func Offset: 0
	// Line 1183, Address: 0x18cb20, Func Offset: 0x20
	// Line 1186, Address: 0x18cb30, Func Offset: 0x30
	// Line 1188, Address: 0x18cb34, Func Offset: 0x34
	// Line 1192, Address: 0x18cb44, Func Offset: 0x44
	// Line 1193, Address: 0x18cb4c, Func Offset: 0x4c
	// Line 1194, Address: 0x18cb5c, Func Offset: 0x5c
	// Line 1196, Address: 0x18cb68, Func Offset: 0x68
	// Line 1204, Address: 0x18cb70, Func Offset: 0x70
	// Line 1205, Address: 0x18cb90, Func Offset: 0x90
	// Line 1208, Address: 0x18cba0, Func Offset: 0xa0
	// Line 1209, Address: 0x18cbac, Func Offset: 0xac
	// Line 1211, Address: 0x18cbb4, Func Offset: 0xb4
	// Line 1212, Address: 0x18cbbc, Func Offset: 0xbc
	// Line 1213, Address: 0x18cbc8, Func Offset: 0xc8
	// Line 1214, Address: 0x18cbd4, Func Offset: 0xd4
	// Line 1221, Address: 0x18cbe0, Func Offset: 0xe0
	// Line 1222, Address: 0x18cbf0, Func Offset: 0xf0
	// Func End, Address: 0x18cc0c, Func Offset: 0x10c
}

// xSGWriteData__FP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXTPfi
// Start address: 0x18cc10
int32 xSGWriteData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt, float32* data, int32 n)
{
	int32 cnt;
	// Line 1162, Address: 0x18cc14, Func Offset: 0x4
	// Func End, Address: 0x18cc1c, Func Offset: 0xc
}

// xSGWriteData__FP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXTPUii
// Start address: 0x18cc20
int32 xSGWriteData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt, uint32* data, int32 n)
{
	int32 cnt;
	// Line 1149, Address: 0x18cc24, Func Offset: 0x4
	// Func End, Address: 0x18cc2c, Func Offset: 0xc
}

// xSGWriteData__FP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXTPii
// Start address: 0x18cc30
int32 xSGWriteData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt, int32* data, int32 n)
{
	int32 cnt;
	// Line 1138, Address: 0x18cc34, Func Offset: 0x4
	// Func End, Address: 0x18cc3c, Func Offset: 0xc
}

// xSGWriteData__FP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXTPci
// Start address: 0x18cc40
int32 xSGWriteData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt, int8* data, int32 n)
{
	int32 cnt;
	// Line 1090, Address: 0x18cc44, Func Offset: 0x4
	// Func End, Address: 0x18cc4c, Func Offset: 0xc
}

// xSGWriteStrLen__FPCc
// Start address: 0x18cc50
int32 xSGWriteStrLen(int8* str)
{
	int32 len;
	// Line 1074, Address: 0x18cc50, Func Offset: 0
	// Line 1078, Address: 0x18cc58, Func Offset: 0x8
	// Line 1081, Address: 0x18cc60, Func Offset: 0x10
	// Line 1079, Address: 0x18cc64, Func Offset: 0x14
	// Line 1081, Address: 0x18cc74, Func Offset: 0x24
	// Func End, Address: 0x18cc7c, Func Offset: 0x2c
}

// xSGWriteData__FP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXTPcii
// Start address: 0x18cc80
int32 xSGWriteData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt, int8* data, int32 elesiz, int32 n)
{
	void* mcprc;
	int32 is_ok;
	st_XSAVEGAME_CLIENT* clt;
	int32 cnt;
	// Line 983, Address: 0x18cc80, Func Offset: 0
	// Line 986, Address: 0x18cc9c, Func Offset: 0x1c
	// Line 992, Address: 0x18cca0, Func Offset: 0x20
	// Line 995, Address: 0x18ccc4, Func Offset: 0x44
	// Line 1000, Address: 0x18ccd4, Func Offset: 0x54
	// Line 1004, Address: 0x18cce4, Func Offset: 0x64
	// Line 1007, Address: 0x18ccf0, Func Offset: 0x70
	// Line 1009, Address: 0x18cd08, Func Offset: 0x88
	// Line 1010, Address: 0x18cd0c, Func Offset: 0x8c
	// Line 1021, Address: 0x18cd14, Func Offset: 0x94
	// Line 1023, Address: 0x18cd24, Func Offset: 0xa4
	// Line 1026, Address: 0x18cd2c, Func Offset: 0xac
	// Line 1030, Address: 0x18cd34, Func Offset: 0xb4
	// Line 1034, Address: 0x18cd40, Func Offset: 0xc0
	// Line 1035, Address: 0x18cd50, Func Offset: 0xd0
	// Line 1036, Address: 0x18cd58, Func Offset: 0xd8
	// Line 1042, Address: 0x18cd6c, Func Offset: 0xec
	// Line 1043, Address: 0x18cd74, Func Offset: 0xf4
	// Line 1044, Address: 0x18cd7c, Func Offset: 0xfc
	// Line 1043, Address: 0x18cd80, Func Offset: 0x100
	// Line 1044, Address: 0x18cd84, Func Offset: 0x104
	// Line 1046, Address: 0x18cd8c, Func Offset: 0x10c
	// Line 1047, Address: 0x18cd90, Func Offset: 0x110
	// Func End, Address: 0x18cdb0, Func Offset: 0x130
}

// xSG_cb_leader_load__FPvP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTUii
// Start address: 0x18cdb0
int32 xSG_cb_leader_load(st_XSAVEGAME_DATA* original_xsgdata, st_XSAVEGAME_READCONTEXT* rctxt)
{
	st_XSAVEGAME_LEADER discard;
	int8 fundata[32];
	// Line 944, Address: 0x18cdb0, Func Offset: 0
	// Line 949, Address: 0x18cdbc, Func Offset: 0xc
	// Line 944, Address: 0x18cdc0, Func Offset: 0x10
	// Line 949, Address: 0x18cdc4, Func Offset: 0x14
	// Line 950, Address: 0x18cddc, Func Offset: 0x2c
	// Line 955, Address: 0x18cde0, Func Offset: 0x30
	// Line 949, Address: 0x18cde4, Func Offset: 0x34
	// Line 950, Address: 0x18cde8, Func Offset: 0x38
	// Line 949, Address: 0x18cdec, Func Offset: 0x3c
	// Line 950, Address: 0x18cdf0, Func Offset: 0x40
	// Line 955, Address: 0x18ce04, Func Offset: 0x54
	// Line 950, Address: 0x18ce10, Func Offset: 0x60
	// Line 955, Address: 0x18ce24, Func Offset: 0x74
	// Line 956, Address: 0x18ce2c, Func Offset: 0x7c
	// Line 961, Address: 0x18ce44, Func Offset: 0x94
	// Line 960, Address: 0x18ce50, Func Offset: 0xa0
	// Line 961, Address: 0x18ce54, Func Offset: 0xa4
	// Func End, Address: 0x18ce5c, Func Offset: 0xac
}

// xSG_cb_leader_svproc__FPvP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXT
// Start address: 0x18ce60
int32 xSG_cb_leader_svproc(void* cltdata, st_XSAVEGAME_DATA* original_xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt)
{
	int8 fundata[23];
	st_XSAVEGAME_LEADER leader;
	st_XSAVEGAME_DATA* xsg;
	// Line 913, Address: 0x18ce60, Func Offset: 0
	// Line 919, Address: 0x18ce70, Func Offset: 0x10
	// Line 913, Address: 0x18ce74, Func Offset: 0x14
	// Line 919, Address: 0x18ce78, Func Offset: 0x18
	// Line 916, Address: 0x18ce84, Func Offset: 0x24
	// Line 919, Address: 0x18ce88, Func Offset: 0x28
	// Line 920, Address: 0x18ce94, Func Offset: 0x34
	// Line 919, Address: 0x18cea4, Func Offset: 0x44
	// Line 920, Address: 0x18ceb8, Func Offset: 0x58
	// Line 930, Address: 0x18cebc, Func Offset: 0x5c
	// Line 919, Address: 0x18cec4, Func Offset: 0x64
	// Line 920, Address: 0x18cec8, Func Offset: 0x68
	// Line 930, Address: 0x18cee4, Func Offset: 0x84
	// Line 931, Address: 0x18ceec, Func Offset: 0x8c
	// Line 932, Address: 0x18cef0, Func Offset: 0x90
	// Line 936, Address: 0x18cef4, Func Offset: 0x94
	// Line 932, Address: 0x18cf08, Func Offset: 0xa8
	// Line 933, Address: 0x18cf0c, Func Offset: 0xac
	// Line 936, Address: 0x18cf10, Func Offset: 0xb0
	// Line 937, Address: 0x18cf18, Func Offset: 0xb8
	// Line 940, Address: 0x18cf30, Func Offset: 0xd0
	// Line 939, Address: 0x18cf40, Func Offset: 0xe0
	// Line 940, Address: 0x18cf44, Func Offset: 0xe4
	// Func End, Address: 0x18cf4c, Func Offset: 0xec
}

// xSG_cb_leader_svinfo__FPvP17st_XSAVEGAME_DATAPiPi
// Start address: 0x18cf50
int32 xSG_cb_leader_svinfo(int32* cur_space, int32* max_fullgame)
{
	// Line 905, Address: 0x18cf50, Func Offset: 0
	// Line 906, Address: 0x18cf58, Func Offset: 0x8
	// Line 909, Address: 0x18cf5c, Func Offset: 0xc
	// Func End, Address: 0x18cf64, Func Offset: 0x14
}

// xSGAsyncStatus__FP17st_XSAVEGAME_DATAiPc
// Start address: 0x18cf70
en_XSGASYNC_STATUS xSGAsyncStatus(st_XSAVEGAME_DATA* xsgdata, int32 block, int8* errmsg)
{
	en_ASYNC_OPSTAT istat;
	en_XSGASYNC_STATUS xstat;
	// Line 860, Address: 0x18cf70, Func Offset: 0
	// Line 865, Address: 0x18cf8c, Func Offset: 0x1c
	// Line 868, Address: 0x18cf98, Func Offset: 0x28
	// Line 870, Address: 0x18cfa8, Func Offset: 0x38
	// Line 875, Address: 0x18cfd0, Func Offset: 0x60
	// Line 876, Address: 0x18cfe4, Func Offset: 0x74
	// Line 888, Address: 0x18cfec, Func Offset: 0x7c
	// Line 889, Address: 0x18cff0, Func Offset: 0x80
	// Func End, Address: 0x18d008, Func Offset: 0x98
}

// xSGWrapup__FP17st_XSAVEGAME_DATA
// Start address: 0x18d010
int32 xSGWrapup(st_XSAVEGAME_DATA* xsgdata)
{
	int32 rc;
	int32 result;
	// Line 812, Address: 0x18d010, Func Offset: 0
	// Line 817, Address: 0x18d024, Func Offset: 0x14
	// Line 813, Address: 0x18d02c, Func Offset: 0x1c
	// Line 817, Address: 0x18d030, Func Offset: 0x20
	// Line 818, Address: 0x18d048, Func Offset: 0x38
	// Line 821, Address: 0x18d054, Func Offset: 0x44
	// Line 822, Address: 0x18d05c, Func Offset: 0x4c
	// Line 823, Address: 0x18d064, Func Offset: 0x54
	// Line 825, Address: 0x18d068, Func Offset: 0x58
	// Line 829, Address: 0x18d06c, Func Offset: 0x5c
	// Line 830, Address: 0x18d084, Func Offset: 0x74
	// Line 837, Address: 0x18d094, Func Offset: 0x84
	// Line 838, Address: 0x18d0a4, Func Offset: 0x94
	// Line 841, Address: 0x18d0b0, Func Offset: 0xa0
	// Line 842, Address: 0x18d100, Func Offset: 0xf0
	// Line 847, Address: 0x18d10c, Func Offset: 0xfc
	// Line 848, Address: 0x18d11c, Func Offset: 0x10c
	// Line 851, Address: 0x18d128, Func Offset: 0x118
	// Line 852, Address: 0x18d138, Func Offset: 0x128
	// Line 854, Address: 0x18d144, Func Offset: 0x134
	// Line 855, Address: 0x18d15c, Func Offset: 0x14c
	// Line 856, Address: 0x18d160, Func Offset: 0x150
	// Func End, Address: 0x18d178, Func Offset: 0x168
}

// xSGProcess__FP17st_XSAVEGAME_DATA
// Start address: 0x18d180
int32 xSGProcess(st_XSAVEGAME_DATA* xsgdata)
{
	int32 rc;
	int32 result;
	// Line 735, Address: 0x18d180, Func Offset: 0
	// Line 743, Address: 0x18d194, Func Offset: 0x14
	// Line 744, Address: 0x18d1b4, Func Offset: 0x34
	// Line 747, Address: 0x18d1c0, Func Offset: 0x40
	// Line 748, Address: 0x18d1c8, Func Offset: 0x48
	// Line 750, Address: 0x18d1d0, Func Offset: 0x50
	// Line 753, Address: 0x18d1d4, Func Offset: 0x54
	// Line 762, Address: 0x18d1ec, Func Offset: 0x6c
	// Line 766, Address: 0x18d274, Func Offset: 0xf4
	// Line 767, Address: 0x18d27c, Func Offset: 0xfc
	// Line 768, Address: 0x18d284, Func Offset: 0x104
	// Line 775, Address: 0x18d290, Func Offset: 0x110
	// Line 776, Address: 0x18d298, Func Offset: 0x118
	// Line 780, Address: 0x18d2b4, Func Offset: 0x134
	// Line 782, Address: 0x18d2bc, Func Offset: 0x13c
	// Line 783, Address: 0x18d2c4, Func Offset: 0x144
	// Line 789, Address: 0x18d2d0, Func Offset: 0x150
	// Line 791, Address: 0x18d2d8, Func Offset: 0x158
	// Line 794, Address: 0x18d2e0, Func Offset: 0x160
	// Line 795, Address: 0x18d2e8, Func Offset: 0x168
	// Line 798, Address: 0x18d300, Func Offset: 0x180
	// Line 799, Address: 0x18d354, Func Offset: 0x1d4
	// Line 805, Address: 0x18d360, Func Offset: 0x1e0
	// Line 806, Address: 0x18d368, Func Offset: 0x1e8
	// Line 808, Address: 0x18d380, Func Offset: 0x200
	// Line 809, Address: 0x18d384, Func Offset: 0x204
	// Func End, Address: 0x18d39c, Func Offset: 0x21c
}

// xSGSetup__FP17st_XSAVEGAME_DATAiPcil
// Start address: 0x18d3a0
int32 xSGSetup(st_XSAVEGAME_DATA* xsgdata, int32 gidx, int8* label, int32 thumIdx, long32 playtime)
{
	int32 rc;
	int32 result;
	// Line 670, Address: 0x18d3a0, Func Offset: 0
	// Line 677, Address: 0x18d3b8, Func Offset: 0x18
	// Line 678, Address: 0x18d3e0, Func Offset: 0x40
	// Line 680, Address: 0x18d3ec, Func Offset: 0x4c
	// Line 686, Address: 0x18d3f0, Func Offset: 0x50
	// Line 688, Address: 0x18d400, Func Offset: 0x60
	// Line 694, Address: 0x18d404, Func Offset: 0x64
	// Line 695, Address: 0x18d414, Func Offset: 0x74
	// Line 696, Address: 0x18d418, Func Offset: 0x78
	// Line 699, Address: 0x18d41c, Func Offset: 0x7c
	// Line 701, Address: 0x18d424, Func Offset: 0x84
	// Line 702, Address: 0x18d42c, Func Offset: 0x8c
	// Line 706, Address: 0x18d438, Func Offset: 0x98
	// Line 707, Address: 0x18d440, Func Offset: 0xa0
	// Line 708, Address: 0x18d448, Func Offset: 0xa8
	// Line 711, Address: 0x18d450, Func Offset: 0xb0
	// Line 716, Address: 0x18d458, Func Offset: 0xb8
	// Line 717, Address: 0x18d4ac, Func Offset: 0x10c
	// Line 722, Address: 0x18d4b8, Func Offset: 0x118
	// Line 723, Address: 0x18d4c0, Func Offset: 0x120
	// Line 725, Address: 0x18d4d8, Func Offset: 0x138
	// Line 726, Address: 0x18d4dc, Func Offset: 0x13c
	// Func End, Address: 0x18d4f8, Func Offset: 0x158
}

// xSGSetup__FP17st_XSAVEGAME_DATA
// Start address: 0x18d500
int32 xSGSetup(st_XSAVEGAME_DATA* xsgdata)
{
	// Line 666, Address: 0x18d500, Func Offset: 0
	// Func End, Address: 0x18d518, Func Offset: 0x18
}

// xSGAddLoadClient__FP17st_XSAVEGAME_DATAUiPvPFPvP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTUii_i
// Start address: 0x18d520
int32 xSGAddLoadClient(st_XSAVEGAME_DATA* xsgdata, uint32 clttag, void* cltdata, int32(*loadfunc)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_READCONTEXT*, uint32, int32))
{
	st_XSAVEGAME_CLIENT* clt;
	int32 result;
	// Line 556, Address: 0x18d520, Func Offset: 0
	// Line 563, Address: 0x18d53c, Func Offset: 0x1c
	// Line 564, Address: 0x18d564, Func Offset: 0x44
	// Line 567, Address: 0x18d570, Func Offset: 0x50
	// Line 568, Address: 0x18d578, Func Offset: 0x58
	// Line 569, Address: 0x18d58c, Func Offset: 0x6c
	// Line 572, Address: 0x18d594, Func Offset: 0x74
	// Line 602, Address: 0x18d598, Func Offset: 0x78
	// Line 608, Address: 0x18d5ac, Func Offset: 0x8c
	// Line 612, Address: 0x18d5b4, Func Offset: 0x94
	// Line 613, Address: 0x18d5b8, Func Offset: 0x98
	// Line 614, Address: 0x18d5bc, Func Offset: 0x9c
	// Line 618, Address: 0x18d5c0, Func Offset: 0xa0
	// Line 619, Address: 0x18d5c4, Func Offset: 0xa4
	// Line 620, Address: 0x18d5c8, Func Offset: 0xa8
	// Line 621, Address: 0x18d5cc, Func Offset: 0xac
	// Line 622, Address: 0x18d5d0, Func Offset: 0xb0
	// Line 625, Address: 0x18d5d4, Func Offset: 0xb4
	// Line 628, Address: 0x18d5dc, Func Offset: 0xbc
	// Line 630, Address: 0x18d5f0, Func Offset: 0xd0
	// Line 631, Address: 0x18d5f4, Func Offset: 0xd4
	// Line 632, Address: 0x18d5f8, Func Offset: 0xd8
	// Line 633, Address: 0x18d5fc, Func Offset: 0xdc
	// Line 634, Address: 0x18d600, Func Offset: 0xe0
	// Line 635, Address: 0x18d604, Func Offset: 0xe4
	// Line 636, Address: 0x18d608, Func Offset: 0xe8
	// Line 637, Address: 0x18d60c, Func Offset: 0xec
	// Line 638, Address: 0x18d610, Func Offset: 0xf0
	// Line 643, Address: 0x18d614, Func Offset: 0xf4
	// Line 644, Address: 0x18d61c, Func Offset: 0xfc
	// Line 646, Address: 0x18d634, Func Offset: 0x114
	// Func End, Address: 0x18d650, Func Offset: 0x130
}

// xSGAddSaveClient__FP17st_XSAVEGAME_DATAUiPvPFPvP17st_XSAVEGAME_DATAPiPi_iPFPvP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXT_i
// Start address: 0x18d650
int32 xSGAddSaveClient(st_XSAVEGAME_DATA* xsgdata, uint32 clttag, void* cltdata, int32(*infofunc)(void*, st_XSAVEGAME_DATA*, int32*, int32*), int32(*procfunc)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_WRITECONTEXT*))
{
	st_XSAVEGAME_CLIENT* clt;
	int32 result;
	// Line 474, Address: 0x18d650, Func Offset: 0
	// Line 482, Address: 0x18d670, Func Offset: 0x20
	// Line 483, Address: 0x18d69c, Func Offset: 0x4c
	// Line 485, Address: 0x18d6a8, Func Offset: 0x58
	// Line 496, Address: 0x18d6ac, Func Offset: 0x5c
	// Line 497, Address: 0x18d6c0, Func Offset: 0x70
	// Line 500, Address: 0x18d6c8, Func Offset: 0x78
	// Line 524, Address: 0x18d6cc, Func Offset: 0x7c
	// Line 526, Address: 0x18d6e0, Func Offset: 0x90
	// Line 527, Address: 0x18d6e4, Func Offset: 0x94
	// Line 528, Address: 0x18d6e8, Func Offset: 0x98
	// Line 529, Address: 0x18d6ec, Func Offset: 0x9c
	// Line 530, Address: 0x18d6f0, Func Offset: 0xa0
	// Line 531, Address: 0x18d6f4, Func Offset: 0xa4
	// Line 532, Address: 0x18d6f8, Func Offset: 0xa8
	// Line 543, Address: 0x18d6fc, Func Offset: 0xac
	// Line 544, Address: 0x18d704, Func Offset: 0xb4
	// Line 547, Address: 0x18d71c, Func Offset: 0xcc
	// Func End, Address: 0x18d73c, Func Offset: 0xec
}

// xSGGameThumIndex__FP17st_XSAVEGAME_DATAi
// Start address: 0x18d740
int32 xSGGameThumIndex(st_XSAVEGAME_DATA* xsgdata, int32 gidx)
{
	int32 idx_thum;
	// Line 448, Address: 0x18d740, Func Offset: 0
	// Line 453, Address: 0x18d760, Func Offset: 0x20
	// Line 449, Address: 0x18d76c, Func Offset: 0x2c
	// Line 453, Address: 0x18d770, Func Offset: 0x30
	// Line 456, Address: 0x18d798, Func Offset: 0x58
	// Line 459, Address: 0x18d7b8, Func Offset: 0x78
	// Line 460, Address: 0x18d7bc, Func Offset: 0x7c
	// Func End, Address: 0x18d7d8, Func Offset: 0x98
}

// xSGGameLabel__FP17st_XSAVEGAME_DATAi
// Start address: 0x18d7e0
int8* xSGGameLabel(st_XSAVEGAME_DATA* xsgdata, int32 gidx)
{
	st_XSAVEGAME_LEADER* lead;
	int8* da_name;
	// Line 416, Address: 0x18d7e0, Func Offset: 0
	// Line 421, Address: 0x18d800, Func Offset: 0x20
	// Line 417, Address: 0x18d80c, Func Offset: 0x2c
	// Line 421, Address: 0x18d810, Func Offset: 0x30
	// Line 423, Address: 0x18d838, Func Offset: 0x58
	// Line 424, Address: 0x18d850, Func Offset: 0x70
	// Line 426, Address: 0x18d85c, Func Offset: 0x7c
	// Line 427, Address: 0x18d860, Func Offset: 0x80
	// Func End, Address: 0x18d87c, Func Offset: 0x9c
}

// xSGGameModDate__FP17st_XSAVEGAME_DATAi
// Start address: 0x18d880
int8* xSGGameModDate(st_XSAVEGAME_DATA* xsgdata, int32 gidx)
{
	int8 da_date[32];
	// Line 401, Address: 0x18d880, Func Offset: 0
	// Line 405, Address: 0x18d89c, Func Offset: 0x1c
	// Line 407, Address: 0x18d8a0, Func Offset: 0x20
	// Line 405, Address: 0x18d8ac, Func Offset: 0x2c
	// Line 407, Address: 0x18d8b0, Func Offset: 0x30
	// Line 408, Address: 0x18d8d8, Func Offset: 0x58
	// Line 409, Address: 0x18d91c, Func Offset: 0x9c
	// Line 413, Address: 0x18d93c, Func Offset: 0xbc
	// Line 412, Address: 0x18d94c, Func Offset: 0xcc
	// Line 413, Address: 0x18d954, Func Offset: 0xd4
	// Func End, Address: 0x18d95c, Func Offset: 0xdc
}

// xSGGameIsEmpty__FP17st_XSAVEGAME_DATAi
// Start address: 0x18d960
int32 xSGGameIsEmpty(st_XSAVEGAME_DATA* xsgdata, int32 gidx)
{
	// Line 375, Address: 0x18d960, Func Offset: 0
	// Line 377, Address: 0x18d980, Func Offset: 0x20
	// Line 378, Address: 0x18d9d4, Func Offset: 0x74
	// Line 379, Address: 0x18d9d8, Func Offset: 0x78
	// Line 378, Address: 0x18d9ec, Func Offset: 0x8c
	// Line 379, Address: 0x18d9f4, Func Offset: 0x94
	// Func End, Address: 0x18d9fc, Func Offset: 0x9c
}

// xSGGameSet__FP17st_XSAVEGAME_DATAi
// Start address: 0x18da00
void xSGGameSet(st_XSAVEGAME_DATA* xsgdata, int32 gidx)
{
	// Line 368, Address: 0x18da00, Func Offset: 0
	// Func End, Address: 0x18da08, Func Offset: 0x8
}

// xSGTgtHaveRoom__FP17st_XSAVEGAME_DATAiiiPiPi
// Start address: 0x18da10
int32 xSGTgtHaveRoom(st_XSAVEGAME_DATA* xsgdata, int32 tidx, int32 fsize, int32 slotidx, int32* bytesNeeded, int32* availOnDisk)
{
	int8 fname[256];
	int32 isroom;
	// Line 328, Address: 0x18da10, Func Offset: 0
	// Line 330, Address: 0x18da38, Func Offset: 0x28
	// Line 336, Address: 0x18da70, Func Offset: 0x60
	// Line 337, Address: 0x18da78, Func Offset: 0x68
	// Line 338, Address: 0x18da98, Func Offset: 0x88
	// Line 341, Address: 0x18daa0, Func Offset: 0x90
	// Line 342, Address: 0x18dab8, Func Offset: 0xa8
	// Line 346, Address: 0x18dad8, Func Offset: 0xc8
	// Func End, Address: 0x18daf8, Func Offset: 0xe8
}

// xSGTgtHasGameDir__FP17st_XSAVEGAME_DATAi
// Start address: 0x18db00
int32 xSGTgtHasGameDir(st_XSAVEGAME_DATA* xsgdata, int32 tidx)
{
	int32 rc;
	// Line 317, Address: 0x18db00, Func Offset: 0
	// Line 319, Address: 0x18db14, Func Offset: 0x14
	// Line 320, Address: 0x18db1c, Func Offset: 0x1c
	// Line 321, Address: 0x18db24, Func Offset: 0x24
	// Line 324, Address: 0x18db50, Func Offset: 0x50
	// Func End, Address: 0x18db64, Func Offset: 0x64
}

// xSGTgtSelect__FP17st_XSAVEGAME_DATAi
// Start address: 0x18db70
int32 xSGTgtSelect(st_XSAVEGAME_DATA* xsgdata, int32 tidx)
{
	int32 result;
	// Line 302, Address: 0x18db70, Func Offset: 0
	// Line 306, Address: 0x18db88, Func Offset: 0x18
	// Line 308, Address: 0x18db94, Func Offset: 0x24
	// Line 309, Address: 0x18dbc0, Func Offset: 0x50
	// Line 311, Address: 0x18dbc8, Func Offset: 0x58
	// Line 314, Address: 0x18dbd0, Func Offset: 0x60
	// Line 315, Address: 0x18dbd4, Func Offset: 0x64
	// Func End, Address: 0x18dbec, Func Offset: 0x7c
}

// xSGTgtFormatTgt__FP17st_XSAVEGAME_DATAi
// Start address: 0x18dbf0
int32 xSGTgtFormatTgt(st_XSAVEGAME_DATA* xsgdata, int32 tidx)
{
	int32 result;
	// Line 288, Address: 0x18dbf0, Func Offset: 0
	// Func End, Address: 0x18dbfc, Func Offset: 0xc
}

// xSGTgtIsFormat__FP17st_XSAVEGAME_DATAi
// Start address: 0x18dc00
int32 xSGTgtIsFormat(st_XSAVEGAME_DATA* xsgdata, int32 tidx)
{
	uint32 rc;
	// Line 276, Address: 0x18dc00, Func Offset: 0
	// Line 279, Address: 0x18dc08, Func Offset: 0x8
	// Line 281, Address: 0x18dc14, Func Offset: 0x14
	// Line 280, Address: 0x18dc18, Func Offset: 0x18
	// Line 281, Address: 0x18dc1c, Func Offset: 0x1c
	// Func End, Address: 0x18dc24, Func Offset: 0x24
}

// xSGTgtPhysSlotIdx__FP17st_XSAVEGAME_DATAi
// Start address: 0x18dc30
int32 xSGTgtPhysSlotIdx(st_XSAVEGAME_DATA* xsgdata, int32 tidx)
{
	// Line 264, Address: 0x18dc30, Func Offset: 0
	// Func End, Address: 0x18dc38, Func Offset: 0x8
}

// xSGTgtCount__FP17st_XSAVEGAME_DATAPi
// Start address: 0x18dc40
int32 xSGTgtCount(st_XSAVEGAME_DATA* xsgdata, int32* max)
{
	int32 cnt;
	// Line 257, Address: 0x18dc40, Func Offset: 0
	// Func End, Address: 0x18dc48, Func Offset: 0x8
}

// xSGDone__FP17st_XSAVEGAME_DATA
// Start address: 0x18dc50
int32 xSGDone(st_XSAVEGAME_DATA* xsgdata)
{
	int32 result;
	// Line 182, Address: 0x18dc50, Func Offset: 0
	// Line 187, Address: 0x18dc60, Func Offset: 0x10
	// Line 189, Address: 0x18dc74, Func Offset: 0x24
	// Line 204, Address: 0x18dc78, Func Offset: 0x28
	// Line 207, Address: 0x18dc8c, Func Offset: 0x3c
	// Line 210, Address: 0x18dc9c, Func Offset: 0x4c
	// Line 211, Address: 0x18dca8, Func Offset: 0x58
	// Line 213, Address: 0x18dcb8, Func Offset: 0x68
	// Line 214, Address: 0x18dcc0, Func Offset: 0x70
	// Line 215, Address: 0x18dcc4, Func Offset: 0x74
	// Line 219, Address: 0x18dcc8, Func Offset: 0x78
	// Line 220, Address: 0x18dcd0, Func Offset: 0x80
	// Line 222, Address: 0x18dcd8, Func Offset: 0x88
	// Line 223, Address: 0x18dce4, Func Offset: 0x94
	// Line 225, Address: 0x18dcf4, Func Offset: 0xa4
	// Line 226, Address: 0x18dcfc, Func Offset: 0xac
	// Line 227, Address: 0x18dd00, Func Offset: 0xb0
	// Line 228, Address: 0x18dd04, Func Offset: 0xb4
	// Line 229, Address: 0x18dd08, Func Offset: 0xb8
	// Line 237, Address: 0x18dd0c, Func Offset: 0xbc
	// Line 240, Address: 0x18dd20, Func Offset: 0xd0
	// Line 242, Address: 0x18dd34, Func Offset: 0xe4
	// Line 243, Address: 0x18dd38, Func Offset: 0xe8
	// Func End, Address: 0x18dd4c, Func Offset: 0xfc
}

// xSGInit__F16en_SAVEGAME_MODE
// Start address: 0x18dd50
st_XSAVEGAME_DATA* xSGInit(en_SAVEGAME_MODE mode)
{
	st_XSAVEGAME_DATA* xsgdata;
	// Line 123, Address: 0x18dd50, Func Offset: 0
	// Line 125, Address: 0x18dd60, Func Offset: 0x10
	// Line 133, Address: 0x18dd68, Func Offset: 0x18
	// Line 136, Address: 0x18dd78, Func Offset: 0x28
	// Line 147, Address: 0x18dd80, Func Offset: 0x30
	// Line 148, Address: 0x18dd8c, Func Offset: 0x3c
	// Line 153, Address: 0x18dd94, Func Offset: 0x44
	// Line 156, Address: 0x18dda0, Func Offset: 0x50
	// Line 160, Address: 0x18dda4, Func Offset: 0x54
	// Line 156, Address: 0x18ddb0, Func Offset: 0x60
	// Line 160, Address: 0x18ddb4, Func Offset: 0x64
	// Line 164, Address: 0x18ddc0, Func Offset: 0x70
	// Line 165, Address: 0x18ddcc, Func Offset: 0x7c
	// Line 167, Address: 0x18dde8, Func Offset: 0x98
	// Line 170, Address: 0x18ddf0, Func Offset: 0xa0
	// Line 175, Address: 0x18de10, Func Offset: 0xc0
	// Line 177, Address: 0x18de24, Func Offset: 0xd4
	// Line 178, Address: 0x18de28, Func Offset: 0xd8
	// Func End, Address: 0x18de3c, Func Offset: 0xec
}

// xSGShutdown__Fv
// Start address: 0x18de40
int32 xSGShutdown()
{
	// Line 100, Address: 0x18de40, Func Offset: 0
	// Line 102, Address: 0x18de48, Func Offset: 0x8
	// Line 105, Address: 0x18de58, Func Offset: 0x18
	// Line 106, Address: 0x18de60, Func Offset: 0x20
	// Line 113, Address: 0x18de68, Func Offset: 0x28
	// Line 112, Address: 0x18de6c, Func Offset: 0x2c
	// Line 113, Address: 0x18de70, Func Offset: 0x30
	// Func End, Address: 0x18de78, Func Offset: 0x38
}

// xSGStartup__Fv
// Start address: 0x18de80
int32 xSGStartup()
{
	// Line 68, Address: 0x18de80, Func Offset: 0
	// Line 70, Address: 0x18de88, Func Offset: 0x8
	// Line 76, Address: 0x18de98, Func Offset: 0x18
	// Line 79, Address: 0x18dea0, Func Offset: 0x20
	// Line 82, Address: 0x18dea8, Func Offset: 0x28
	// Line 97, Address: 0x18debc, Func Offset: 0x3c
	// Line 96, Address: 0x18dec0, Func Offset: 0x40
	// Line 97, Address: 0x18dec4, Func Offset: 0x44
	// Func End, Address: 0x18decc, Func Offset: 0x4c
}

