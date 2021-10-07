typedef struct xSerial;
typedef struct st_SERIAL_CLIENTINFO;
typedef struct _xVec3;
typedef struct st_XSAVEGAME_DATA;
typedef struct st_XSAVEGAME_WRITECONTEXT;
typedef struct st_XSAVEGAME_READCONTEXT;
typedef struct st_SERIAL_PERCID_SIZE;
typedef struct st_XSERIAL_DATA_PRIV;
typedef struct st_XORDEREDARRAY;
typedef enum en_SAVEGAME_MODE;

typedef int32(*type_0)(void*, void*);
typedef int32(*type_2)(void*, st_XSAVEGAME_DATA*, int32*, int32*);
typedef int32(*type_3)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_WRITECONTEXT*);
typedef int32(*type_4)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_READCONTEXT*, uint32, int32);
typedef int32(*type_5)(uint32, xSerial*);
typedef int32(*type_6)(void*, st_XSAVEGAME_DATA*, int32*, int32*);
typedef int32(*type_8)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_WRITECONTEXT*);
typedef int32(*type_9)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_READCONTEXT*, uint32, int32);
typedef int32(*type_10)(void*, st_XSAVEGAME_DATA*, int32*, int32*);
typedef int32(*type_13)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_WRITECONTEXT*);
typedef int32(*type_14)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_READCONTEXT*, uint32, int32);
typedef int32(*type_15)(void*, void*);

typedef int32 type_1[32];
typedef int8 type_7[9];
typedef int32 type_11[32];
typedef int8 type_12[9];

struct xSerial
{
	uint32 idtag;
	int32 baseoff;
	st_SERIAL_CLIENTINFO* ctxtdata;
	int32 warned;
	int32 curele;
	int32 bitidx;
	int32 bittally;

	void wrbit(int32 is_on);
	int32 Read(float32* buf);
	int32 Read(uint32* buf);
	int32 Read(int32* buf);
	int32 Read(int16* buf);
	int32 Read(uint8* buf);
	int32 Read_b7(uint32* bits);
	int32 Read_b2(int32* bits);
	int32 Read_b1(uint32* bits);
	int32 Read_b1(int32* bits);
	int32 Read(int8* buf, int32 elesize, int32 n);
	int32 Write(float32 data);
	int32 Write(uint32 data);
	int32 Write(int32 data);
	int32 Write(int16 data);
	int32 Write(uint8 data);
	int32 Write_b7(uint32 bits);
	int32 Write_b2(int32 bits);
	int32 Write_b1(int32 bits);
	int32 Write(int8* data, int32 elesize, int32 n);
	void setClient(uint32 idtag);
	void* __dt();
	void* __ct();
};

struct st_SERIAL_CLIENTINFO
{
	uint32 idtag;
	int32* membuf;
	int32 trueoff;
	int32 actsize;
};

struct _xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct st_XSAVEGAME_DATA
{
};

struct st_XSAVEGAME_WRITECONTEXT
{
};

struct st_XSAVEGAME_READCONTEXT
{
};

struct st_SERIAL_PERCID_SIZE
{
	uint32 idtag;
	int32 needsize;
};

struct st_XSERIAL_DATA_PRIV
{
	int32 flg_info;
	int32* bitbuf;
	int32 buf_bytcnt;
	st_SERIAL_CLIENTINFO* cltbuf;
	st_SERIAL_CLIENTINFO* cltnext;
	st_XORDEREDARRAY cltlist;
};

struct st_XORDEREDARRAY
{
	void** list;
	int32 cnt;
	int32 max;
	int32 warnlvl;
};

enum en_SAVEGAME_MODE
{
	XSG_MODE_LOAD = 0xa,
	XSG_MODE_SAVE
};

int32 g_serinit;
st_XSERIAL_DATA_PRIV g_xserdata;
int32 g_tbl_onbit[32];
int32 g_tbl_clear[32];
int32(*xSER_xsgclt_ldproc_fill)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_READCONTEXT*, uint32, int32);
int32(*xSER_xsgclt_ldproc_clt)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_READCONTEXT*, uint32, int32);
int32(*xSER_xsgclt_ldproc_ver)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_READCONTEXT*, uint32, int32);
int32(*xSER_xsgclt_svproc_fill)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_WRITECONTEXT*);
int32(*xSER_xsgclt_svinfo_fill)(void*, st_XSAVEGAME_DATA*, int32*, int32*);
int32(*xSER_xsgclt_svproc_clt)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_WRITECONTEXT*);
int32(*xSER_xsgclt_svinfo_clt)(void*, st_XSAVEGAME_DATA*, int32*, int32*);
int32(*xSER_xsgclt_svproc_ver)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_WRITECONTEXT*);
int32(*xSER_xsgclt_svinfo_ver)(void*, st_XSAVEGAME_DATA*, int32*, int32*);
int32(*xSER_ord_compare)(void*, void*);
int32(*xSER_ord_test)(void*, void*);
uint32 gActiveHeap;

int32 xSER_xsgclt_ldproc_fill(st_XSAVEGAME_DATA* xsg, st_XSAVEGAME_READCONTEXT* rctxt);
int32 xSER_xsgclt_svproc_fill(st_XSAVEGAME_DATA* xsg, st_XSAVEGAME_WRITECONTEXT* wctxt);
int32 xSER_xsgclt_svinfo_fill(int32* cur_space, int32* max_fullgame);
int32 xSER_xsgclt_ldproc_clt(st_XSAVEGAME_DATA* xsg, st_XSAVEGAME_READCONTEXT* rctxt, uint32 idtag);
int32 xSER_xsgclt_svproc_clt(void* cltdata, st_XSAVEGAME_DATA* xsg, st_XSAVEGAME_WRITECONTEXT* wctxt);
int32 xSER_xsgclt_svinfo_clt(void* cltdata, int32* cur_space, int32* max_fullgame);
int32 xSER_xsgclt_ldproc_ver(st_XSAVEGAME_DATA* xsg, st_XSAVEGAME_READCONTEXT* rctxt);
int32 xSER_xsgclt_svproc_ver(st_XSAVEGAME_DATA* xsg, st_XSAVEGAME_WRITECONTEXT* wctxt);
int32 xSER_xsgclt_svinfo_ver(int32* cur_space, int32* max_fullgame);
int32 xSerial_svgame_register(st_XSAVEGAME_DATA* sgctxt, en_SAVEGAME_MODE mode);
st_SERIAL_CLIENTINFO* XSER_get_client(uint32 idtag);
int32 xSER_ord_test(void* key, void* elt);
int32 xSER_ord_compare(void* e1, void* e2);
void xSER_init_buffers(int32 count, st_SERIAL_PERCID_SIZE* sizeinfo);
void xSerialWipeMainBuffer();
void wrbit(int32 is_on);
int32 Read(float32* buf);
int32 Read(uint32* buf);
int32 Read(int32* buf);
int32 Read(int16* buf);
int32 Read(uint8* buf);
int32 Read_b7(uint32* bits);
int32 Read_b2(int32* bits);
int32 Read_b1(uint32* bits);
int32 Read_b1(int32* bits);
int32 Read(int8* buf, int32 elesize, int32 n);
int32 Write(float32 data);
int32 Write(uint32 data);
int32 Write(int32 data);
int32 Write(int16 data);
int32 Write(uint8 data);
int32 Write_b7(uint32 bits);
int32 Write_b2(int32 bits);
int32 Write_b1(int32 bits);
int32 Write(int8* data, int32 elesize, int32 n);
void setClient(uint32 idtag);
void* __dt();
void* __ct();
void xSerialTraverse(int32(*func)(uint32, xSerial*));
int32 xSerialShutdown();
int32 xSerialStartup(int32 count, st_SERIAL_PERCID_SIZE* sizeinfo);

// xSER_xsgclt_ldproc_fill__FPvP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTUii
// Start address: 0x1975a0
int32 xSER_xsgclt_ldproc_fill(st_XSAVEGAME_DATA* xsg, st_XSAVEGAME_READCONTEXT* rctxt)
{
	int8 filbuf[9];
	// Line 1253, Address: 0x1975a0, Func Offset: 0
	// Line 1255, Address: 0x1975a4, Func Offset: 0x4
	// Line 1253, Address: 0x1975a8, Func Offset: 0x8
	// Line 1255, Address: 0x1975ac, Func Offset: 0xc
	// Line 1258, Address: 0x1975b8, Func Offset: 0x18
	// Line 1255, Address: 0x1975bc, Func Offset: 0x1c
	// Line 1258, Address: 0x1975c8, Func Offset: 0x28
	// Line 1261, Address: 0x1975e0, Func Offset: 0x40
	// Line 1264, Address: 0x1975f0, Func Offset: 0x50
	// Line 1265, Address: 0x1975f4, Func Offset: 0x54
	// Func End, Address: 0x197600, Func Offset: 0x60
}

// xSER_xsgclt_svproc_fill__FPvP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXT
// Start address: 0x197600
int32 xSER_xsgclt_svproc_fill(st_XSAVEGAME_DATA* xsg, st_XSAVEGAME_WRITECONTEXT* wctxt)
{
	int8 filbuf[9];
	// Line 1241, Address: 0x197600, Func Offset: 0
	// Line 1243, Address: 0x197604, Func Offset: 0x4
	// Line 1241, Address: 0x197608, Func Offset: 0x8
	// Line 1243, Address: 0x19760c, Func Offset: 0xc
	// Line 1246, Address: 0x197614, Func Offset: 0x14
	// Line 1243, Address: 0x197618, Func Offset: 0x18
	// Line 1246, Address: 0x19761c, Func Offset: 0x1c
	// Line 1243, Address: 0x197628, Func Offset: 0x28
	// Line 1246, Address: 0x197630, Func Offset: 0x30
	// Line 1249, Address: 0x197638, Func Offset: 0x38
	// Line 1248, Address: 0x19763c, Func Offset: 0x3c
	// Line 1249, Address: 0x197640, Func Offset: 0x40
	// Func End, Address: 0x197648, Func Offset: 0x48
}

// xSER_xsgclt_svinfo_fill__FPvP17st_XSAVEGAME_DATAPiPi
// Start address: 0x197650
int32 xSER_xsgclt_svinfo_fill(int32* cur_space, int32* max_fullgame)
{
	int32 size;
	int32 tally;
	int32 i;
	st_XSERIAL_DATA_PRIV* xsd;
	// Line 1202, Address: 0x197650, Func Offset: 0
	// Line 1215, Address: 0x197658, Func Offset: 0x8
	// Line 1214, Address: 0x19765c, Func Offset: 0xc
	// Line 1215, Address: 0x197660, Func Offset: 0x10
	// Line 1218, Address: 0x197680, Func Offset: 0x30
	// Line 1215, Address: 0x1976f0, Func Offset: 0xa0
	// Line 1218, Address: 0x1976f8, Func Offset: 0xa8
	// Line 1219, Address: 0x1976fc, Func Offset: 0xac
	// Line 1218, Address: 0x197700, Func Offset: 0xb0
	// Line 1219, Address: 0x197714, Func Offset: 0xc4
	// Line 1222, Address: 0x197728, Func Offset: 0xd8
	// Line 1237, Address: 0x19772c, Func Offset: 0xdc
	// Line 1226, Address: 0x197730, Func Offset: 0xe0
	// Line 1234, Address: 0x197734, Func Offset: 0xe4
	// Line 1238, Address: 0x19773c, Func Offset: 0xec
	// Func End, Address: 0x197744, Func Offset: 0xf4
}

// xSER_xsgclt_ldproc_clt__FPvP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTUii
// Start address: 0x197750
int32 xSER_xsgclt_ldproc_clt(st_XSAVEGAME_DATA* xsg, st_XSAVEGAME_READCONTEXT* rctxt, uint32 idtag)
{
	st_SERIAL_CLIENTINFO* clt;
	// Line 1176, Address: 0x197750, Func Offset: 0
	// Line 1182, Address: 0x197760, Func Offset: 0x10
	// Line 1185, Address: 0x197780, Func Offset: 0x30
	// Line 1192, Address: 0x197788, Func Offset: 0x38
	// Line 1194, Address: 0x19779c, Func Offset: 0x4c
	// Line 1195, Address: 0x1977a0, Func Offset: 0x50
	// Func End, Address: 0x1977b4, Func Offset: 0x64
}

// xSER_xsgclt_svproc_clt__FPvP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXT
// Start address: 0x1977c0
int32 xSER_xsgclt_svproc_clt(void* cltdata, st_XSAVEGAME_DATA* xsg, st_XSAVEGAME_WRITECONTEXT* wctxt)
{
	st_SERIAL_CLIENTINFO* clt;
	// Line 1154, Address: 0x1977c0, Func Offset: 0
	// Line 1160, Address: 0x1977d0, Func Offset: 0x10
	// Line 1164, Address: 0x1977e0, Func Offset: 0x20
	// Line 1167, Address: 0x1977f4, Func Offset: 0x34
	// Line 1166, Address: 0x197800, Func Offset: 0x40
	// Line 1167, Address: 0x197804, Func Offset: 0x44
	// Func End, Address: 0x19780c, Func Offset: 0x4c
}

// xSER_xsgclt_svinfo_clt__FPvP17st_XSAVEGAME_DATAPiPi
// Start address: 0x197810
int32 xSER_xsgclt_svinfo_clt(void* cltdata, int32* cur_space, int32* max_fullgame)
{
	st_SERIAL_CLIENTINFO* clt;
	// Line 1147, Address: 0x197810, Func Offset: 0
	// Line 1150, Address: 0x197814, Func Offset: 0x4
	// Line 1147, Address: 0x197818, Func Offset: 0x8
	// Line 1148, Address: 0x19781c, Func Offset: 0xc
	// Line 1151, Address: 0x197820, Func Offset: 0x10
	// Func End, Address: 0x197828, Func Offset: 0x18
}

// xSER_xsgclt_ldproc_ver__FPvP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTUii
// Start address: 0x197830
int32 xSER_xsgclt_ldproc_ver(st_XSAVEGAME_DATA* xsg, st_XSAVEGAME_READCONTEXT* rctxt)
{
	int32 ver;
	st_XSERIAL_DATA_PRIV* xsd;
	// Line 1124, Address: 0x197830, Func Offset: 0
	// Line 1129, Address: 0x197838, Func Offset: 0x8
	// Line 1124, Address: 0x19783c, Func Offset: 0xc
	// Line 1125, Address: 0x197840, Func Offset: 0x10
	// Line 1129, Address: 0x197844, Func Offset: 0x14
	// Line 1125, Address: 0x197848, Func Offset: 0x18
	// Line 1129, Address: 0x19784c, Func Offset: 0x1c
	// Line 1133, Address: 0x19785c, Func Offset: 0x2c
	// Line 1136, Address: 0x197878, Func Offset: 0x48
	// Line 1135, Address: 0x197880, Func Offset: 0x50
	// Line 1136, Address: 0x197884, Func Offset: 0x54
	// Func End, Address: 0x19788c, Func Offset: 0x5c
}

// xSER_xsgclt_svproc_ver__FPvP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXT
// Start address: 0x197890
int32 xSER_xsgclt_svproc_ver(st_XSAVEGAME_DATA* xsg, st_XSAVEGAME_WRITECONTEXT* wctxt)
{
	int32 ver;
	// Line 1112, Address: 0x197890, Func Offset: 0
	// Line 1117, Address: 0x197894, Func Offset: 0x4
	// Line 1112, Address: 0x19789c, Func Offset: 0xc
	// Line 1114, Address: 0x1978a0, Func Offset: 0x10
	// Line 1117, Address: 0x1978a8, Func Offset: 0x18
	// Line 1120, Address: 0x1978b0, Func Offset: 0x20
	// Line 1119, Address: 0x1978b4, Func Offset: 0x24
	// Line 1120, Address: 0x1978b8, Func Offset: 0x28
	// Func End, Address: 0x1978c0, Func Offset: 0x30
}

// xSER_xsgclt_svinfo_ver__FPvP17st_XSAVEGAME_DATAPiPi
// Start address: 0x1978c0
int32 xSER_xsgclt_svinfo_ver(int32* cur_space, int32* max_fullgame)
{
	// Line 1105, Address: 0x1978c0, Func Offset: 0
	// Line 1106, Address: 0x1978c8, Func Offset: 0x8
	// Line 1109, Address: 0x1978cc, Func Offset: 0xc
	// Func End, Address: 0x1978d4, Func Offset: 0x14
}

// xSerial_svgame_register__FP17st_XSAVEGAME_DATA16en_SAVEGAME_MODE
// Start address: 0x1978e0
int32 xSerial_svgame_register(st_XSAVEGAME_DATA* sgctxt, en_SAVEGAME_MODE mode)
{
	int32 i;
	st_SERIAL_CLIENTINFO* clt;
	st_XSERIAL_DATA_PRIV* xsd;
	// Line 1046, Address: 0x1978e0, Func Offset: 0
	// Line 1047, Address: 0x1978f4, Func Offset: 0x14
	// Line 1046, Address: 0x1978fc, Func Offset: 0x1c
	// Line 1051, Address: 0x197900, Func Offset: 0x20
	// Line 1056, Address: 0x197908, Func Offset: 0x28
	// Line 1051, Address: 0x197910, Func Offset: 0x30
	// Line 1056, Address: 0x197914, Func Offset: 0x34
	// Line 1059, Address: 0x19791c, Func Offset: 0x3c
	// Line 1064, Address: 0x19793c, Func Offset: 0x5c
	// Line 1066, Address: 0x197948, Func Offset: 0x68
	// Line 1067, Address: 0x19794c, Func Offset: 0x6c
	// Line 1066, Address: 0x19795c, Func Offset: 0x7c
	// Line 1067, Address: 0x197964, Func Offset: 0x84
	// Line 1069, Address: 0x197974, Func Offset: 0x94
	// Line 1072, Address: 0x197988, Func Offset: 0xa8
	// Line 1074, Address: 0x1979a8, Func Offset: 0xc8
	// Line 1075, Address: 0x1979b0, Func Offset: 0xd0
	// Line 1078, Address: 0x1979bc, Func Offset: 0xdc
	// Line 1085, Address: 0x1979d0, Func Offset: 0xf0
	// Line 1089, Address: 0x1979e8, Func Offset: 0x108
	// Line 1097, Address: 0x197a04, Func Offset: 0x124
	// Line 1096, Address: 0x197a18, Func Offset: 0x138
	// Line 1097, Address: 0x197a1c, Func Offset: 0x13c
	// Func End, Address: 0x197a24, Func Offset: 0x144
}

// XSER_get_client__FUi
// Start address: 0x197a30
st_SERIAL_CLIENTINFO* XSER_get_client(uint32 idtag)
{
	int32 idx;
	st_SERIAL_CLIENTINFO* clt;
	st_XSERIAL_DATA_PRIV* xsd;
	// Line 995, Address: 0x197a30, Func Offset: 0
	// Line 996, Address: 0x197a40, Func Offset: 0x10
	// Line 1001, Address: 0x197a4c, Func Offset: 0x1c
	// Line 1002, Address: 0x197a64, Func Offset: 0x34
	// Line 1008, Address: 0x197a6c, Func Offset: 0x3c
	// Line 1018, Address: 0x197a70, Func Offset: 0x40
	// Line 1009, Address: 0x197a7c, Func Offset: 0x4c
	// Line 1018, Address: 0x197a84, Func Offset: 0x54
	// Line 1019, Address: 0x197a90, Func Offset: 0x60
	// Line 1023, Address: 0x197a98, Func Offset: 0x68
	// Line 1038, Address: 0x197aa8, Func Offset: 0x78
	// Line 1039, Address: 0x197aac, Func Offset: 0x7c
	// Func End, Address: 0x197ac4, Func Offset: 0x94
}

// xSER_ord_test__FPCvPv
// Start address: 0x197ad0
int32 xSER_ord_test(void* key, void* elt)
{
	uint32 idtag;
	int32 rc;
	// Line 986, Address: 0x197ad0, Func Offset: 0
	// Line 987, Address: 0x197ae8, Func Offset: 0x18
	// Line 991, Address: 0x197af4, Func Offset: 0x24
	// Func End, Address: 0x197afc, Func Offset: 0x2c
}

// xSER_ord_compare__FPvPv
// Start address: 0x197b00
int32 xSER_ord_compare(void* e1, void* e2)
{
	int32 rc;
	// Line 972, Address: 0x197b00, Func Offset: 0
	// Line 973, Address: 0x197b1c, Func Offset: 0x1c
	// Line 977, Address: 0x197b28, Func Offset: 0x28
	// Func End, Address: 0x197b30, Func Offset: 0x30
}

// xSER_init_buffers__FiP21st_SERIAL_PERCID_SIZE
// Start address: 0x197b30
void xSER_init_buffers(int32 count, st_SERIAL_PERCID_SIZE* sizeinfo)
{
	st_SERIAL_CLIENTINFO* tmp_clt;
	st_SERIAL_PERCID_SIZE* sitmp;
	int32 sicnt;
	int32 tally;
	int32 i;
	st_XSERIAL_DATA_PRIV* xsd;
	// Line 850, Address: 0x197b30, Func Offset: 0
	// Line 851, Address: 0x197b54, Func Offset: 0x24
	// Line 863, Address: 0x197b64, Func Offset: 0x34
	// Line 853, Address: 0x197b6c, Func Offset: 0x3c
	// Line 863, Address: 0x197b70, Func Offset: 0x40
	// Line 864, Address: 0x197b78, Func Offset: 0x48
	// Line 866, Address: 0x197b90, Func Offset: 0x60
	// Line 867, Address: 0x197ba0, Func Offset: 0x70
	// Line 875, Address: 0x197ba4, Func Offset: 0x74
	// Line 876, Address: 0x197ba8, Func Offset: 0x78
	// Line 877, Address: 0x197bb4, Func Offset: 0x84
	// Line 878, Address: 0x197bb8, Func Offset: 0x88
	// Line 877, Address: 0x197bbc, Func Offset: 0x8c
	// Line 879, Address: 0x197bc8, Func Offset: 0x98
	// Line 880, Address: 0x197bcc, Func Offset: 0x9c
	// Line 885, Address: 0x197bdc, Func Offset: 0xac
	// Line 890, Address: 0x197bf8, Func Offset: 0xc8
	// Line 891, Address: 0x197c08, Func Offset: 0xd8
	// Line 893, Address: 0x197c18, Func Offset: 0xe8
	// Line 903, Address: 0x197c1c, Func Offset: 0xec
	// Line 906, Address: 0x197c20, Func Offset: 0xf0
	// Line 911, Address: 0x197c28, Func Offset: 0xf8
	// Line 912, Address: 0x197c2c, Func Offset: 0xfc
	// Line 913, Address: 0x197c30, Func Offset: 0x100
	// Line 915, Address: 0x197c38, Func Offset: 0x108
	// Line 913, Address: 0x197c3c, Func Offset: 0x10c
	// Line 915, Address: 0x197c44, Func Offset: 0x114
	// Line 918, Address: 0x197c5c, Func Offset: 0x12c
	// Line 915, Address: 0x197c64, Func Offset: 0x134
	// Line 918, Address: 0x197c68, Func Offset: 0x138
	// Line 921, Address: 0x197c70, Func Offset: 0x140
	// Line 924, Address: 0x197c74, Func Offset: 0x144
	// Line 921, Address: 0x197c78, Func Offset: 0x148
	// Line 925, Address: 0x197c7c, Func Offset: 0x14c
	// Line 926, Address: 0x197c80, Func Offset: 0x150
	// Line 932, Address: 0x197c8c, Func Offset: 0x15c
	// Line 944, Address: 0x197c9c, Func Offset: 0x16c
	// Line 947, Address: 0x197ca8, Func Offset: 0x178
	// Line 945, Address: 0x197cac, Func Offset: 0x17c
	// Line 946, Address: 0x197cb0, Func Offset: 0x180
	// Line 947, Address: 0x197cb4, Func Offset: 0x184
	// Line 949, Address: 0x197cb8, Func Offset: 0x188
	// Line 956, Address: 0x197cd0, Func Offset: 0x1a0
	// Line 949, Address: 0x197cd8, Func Offset: 0x1a8
	// Line 952, Address: 0x197ce0, Func Offset: 0x1b0
	// Line 956, Address: 0x197ce8, Func Offset: 0x1b8
	// Line 963, Address: 0x197cf0, Func Offset: 0x1c0
	// Func End, Address: 0x197d18, Func Offset: 0x1e8
}

// xSerialWipeMainBuffer__Fv
// Start address: 0x197d20
void xSerialWipeMainBuffer()
{
	// Line 819, Address: 0x197d20, Func Offset: 0
	// Func End, Address: 0x197d38, Func Offset: 0x18
}

// wrbit__7xSerialFi
// Start address: 0x197d40
void xSerial::wrbit(int32 is_on)
{
	st_SERIAL_CLIENTINFO* clt;
	// Line 666, Address: 0x197d40, Func Offset: 0
	// Line 682, Address: 0x197d44, Func Offset: 0x4
	// Line 689, Address: 0x197d60, Func Offset: 0x20
	// Line 698, Address: 0x197d68, Func Offset: 0x28
	// Line 703, Address: 0x197d98, Func Offset: 0x58
	// Line 706, Address: 0x197dd4, Func Offset: 0x94
	// Line 707, Address: 0x197dd8, Func Offset: 0x98
	// Line 706, Address: 0x197ddc, Func Offset: 0x9c
	// Line 707, Address: 0x197de4, Func Offset: 0xa4
	// Line 709, Address: 0x197df0, Func Offset: 0xb0
	// Line 710, Address: 0x197dfc, Func Offset: 0xbc
	// Line 715, Address: 0x197e00, Func Offset: 0xc0
	// Line 718, Address: 0x197e0c, Func Offset: 0xcc
	// Func End, Address: 0x197e14, Func Offset: 0xd4
}

// Read__7xSerialFPf
// Start address: 0x197e20
int32 xSerial::Read(float32* buf)
{
	// Line 603, Address: 0x197e20, Func Offset: 0
	// Func End, Address: 0x197e2c, Func Offset: 0xc
}

// Read__7xSerialFPUi
// Start address: 0x197e30
int32 xSerial::Read(uint32* buf)
{
	// Line 598, Address: 0x197e30, Func Offset: 0
	// Func End, Address: 0x197e3c, Func Offset: 0xc
}

// Read__7xSerialFPi
// Start address: 0x197e40
int32 xSerial::Read(int32* buf)
{
	// Line 593, Address: 0x197e40, Func Offset: 0
	// Func End, Address: 0x197e4c, Func Offset: 0xc
}

// Read__7xSerialFPs
// Start address: 0x197e50
int32 xSerial::Read(int16* buf)
{
	// Line 583, Address: 0x197e50, Func Offset: 0
	// Func End, Address: 0x197e5c, Func Offset: 0xc
}

// Read__7xSerialFPUc
// Start address: 0x197e60
int32 xSerial::Read(uint8* buf)
{
	// Line 573, Address: 0x197e60, Func Offset: 0
	// Func End, Address: 0x197e6c, Func Offset: 0xc
}

// Read_b7__7xSerialFPUi
// Start address: 0x197e70
int32 xSerial::Read_b7(uint32* bits)
{
	// Line 561, Address: 0x197e70, Func Offset: 0
	// Func End, Address: 0x197e7c, Func Offset: 0xc
}

// Read_b2__7xSerialFPi
// Start address: 0x197e80
int32 xSerial::Read_b2(int32* bits)
{
	// Line 506, Address: 0x197e80, Func Offset: 0
	// Func End, Address: 0x197e8c, Func Offset: 0xc
}

// Read_b1__7xSerialFPUi
// Start address: 0x197e90
int32 xSerial::Read_b1(uint32* bits)
{
	// Line 501, Address: 0x197e90, Func Offset: 0
	// Func End, Address: 0x197e9c, Func Offset: 0xc
}

// Read_b1__7xSerialFPi
// Start address: 0x197ea0
int32 xSerial::Read_b1(int32* bits)
{
	// Line 496, Address: 0x197ea0, Func Offset: 0
	// Func End, Address: 0x197eac, Func Offset: 0xc
}

// Read__7xSerialFPcii
// Start address: 0x197eb0
int32 xSerial::Read(int8* buf, int32 elesize, int32 n)
{
	int32 i;
	int32 bidx;
	int8* cptr;
	int32 nbit;
	// Line 434, Address: 0x197eb0, Func Offset: 0
	// Line 450, Address: 0x197ec0, Func Offset: 0x10
	// Line 448, Address: 0x197ec4, Func Offset: 0x14
	// Line 450, Address: 0x197ec8, Func Offset: 0x18
	// Line 453, Address: 0x197ee0, Func Offset: 0x30
	// Line 456, Address: 0x197f70, Func Offset: 0xc0
	// Line 457, Address: 0x197f94, Func Offset: 0xe4
	// Line 460, Address: 0x197fb0, Func Offset: 0x100
	// Line 463, Address: 0x197fb4, Func Offset: 0x104
	// Line 464, Address: 0x197fc0, Func Offset: 0x110
	// Line 465, Address: 0x197fc4, Func Offset: 0x114
	// Line 471, Address: 0x197fc8, Func Offset: 0x118
	// Line 479, Address: 0x197fd8, Func Offset: 0x128
	// Func End, Address: 0x197fe0, Func Offset: 0x130
}

// Write__7xSerialFf
// Start address: 0x197fe0
int32 xSerial::Write(float32 data)
{
	// Line 363, Address: 0x197fe0, Func Offset: 0
	// Line 364, Address: 0x197fec, Func Offset: 0xc
	// Line 365, Address: 0x197ffc, Func Offset: 0x1c
	// Func End, Address: 0x198008, Func Offset: 0x28
}

// Write__7xSerialFUi
// Start address: 0x198010
int32 xSerial::Write(uint32 data)
{
	// Line 358, Address: 0x198010, Func Offset: 0
	// Line 359, Address: 0x19801c, Func Offset: 0xc
	// Line 360, Address: 0x19802c, Func Offset: 0x1c
	// Func End, Address: 0x198038, Func Offset: 0x28
}

// Write__7xSerialFi
// Start address: 0x198040
int32 xSerial::Write(int32 data)
{
	// Line 353, Address: 0x198040, Func Offset: 0
	// Line 354, Address: 0x19804c, Func Offset: 0xc
	// Line 355, Address: 0x19805c, Func Offset: 0x1c
	// Func End, Address: 0x198068, Func Offset: 0x28
}

// Write__7xSerialFs
// Start address: 0x198070
int32 xSerial::Write(int16 data)
{
	// Line 343, Address: 0x198070, Func Offset: 0
	// Line 344, Address: 0x19807c, Func Offset: 0xc
	// Line 345, Address: 0x19808c, Func Offset: 0x1c
	// Func End, Address: 0x198098, Func Offset: 0x28
}

// Write__7xSerialFUc
// Start address: 0x1980a0
int32 xSerial::Write(uint8 data)
{
	// Line 333, Address: 0x1980a0, Func Offset: 0
	// Line 334, Address: 0x1980ac, Func Offset: 0xc
	// Line 335, Address: 0x1980bc, Func Offset: 0x1c
	// Func End, Address: 0x1980c8, Func Offset: 0x28
}

// Write_b7__7xSerialFUi
// Start address: 0x1980d0
int32 xSerial::Write_b7(uint32 bits)
{
	// Line 321, Address: 0x1980d0, Func Offset: 0
	// Line 322, Address: 0x1980dc, Func Offset: 0xc
	// Line 323, Address: 0x1980ec, Func Offset: 0x1c
	// Func End, Address: 0x1980f8, Func Offset: 0x28
}

// Write_b2__7xSerialFi
// Start address: 0x198100
int32 xSerial::Write_b2(int32 bits)
{
	// Line 266, Address: 0x198100, Func Offset: 0
	// Line 267, Address: 0x19810c, Func Offset: 0xc
	// Line 268, Address: 0x19811c, Func Offset: 0x1c
	// Func End, Address: 0x198128, Func Offset: 0x28
}

// Write_b1__7xSerialFi
// Start address: 0x198130
int32 xSerial::Write_b1(int32 bits)
{
	// Line 256, Address: 0x198130, Func Offset: 0
	// Line 257, Address: 0x19813c, Func Offset: 0xc
	// Line 258, Address: 0x19814c, Func Offset: 0x1c
	// Func End, Address: 0x198158, Func Offset: 0x28
}

// Write__7xSerialFPcii
// Start address: 0x198160
int32 xSerial::Write(int8* data, int32 elesize, int32 n)
{
	int32 i;
	int32 bidx;
	int8* cptr;
	int32 nbit;
	// Line 167, Address: 0x198160, Func Offset: 0
	// Line 176, Address: 0x198180, Func Offset: 0x20
	// Line 188, Address: 0x198190, Func Offset: 0x30
	// Line 213, Address: 0x1981a0, Func Offset: 0x40
	// Line 212, Address: 0x1981a4, Func Offset: 0x44
	// Line 211, Address: 0x1981a8, Func Offset: 0x48
	// Line 213, Address: 0x1981ac, Func Offset: 0x4c
	// Line 218, Address: 0x1981bc, Func Offset: 0x5c
	// Line 221, Address: 0x1981d8, Func Offset: 0x78
	// Line 224, Address: 0x1981dc, Func Offset: 0x7c
	// Line 226, Address: 0x1981e8, Func Offset: 0x88
	// Line 227, Address: 0x1981ec, Func Offset: 0x8c
	// Line 232, Address: 0x1981f0, Func Offset: 0x90
	// Line 239, Address: 0x198200, Func Offset: 0xa0
	// Line 240, Address: 0x198204, Func Offset: 0xa4
	// Func End, Address: 0x198228, Func Offset: 0xc8
}

// setClient__7xSerialFUi
// Start address: 0x198230
void xSerial::setClient(uint32 idtag)
{
	// Line 154, Address: 0x198230, Func Offset: 0
	// Line 155, Address: 0x198240, Func Offset: 0x10
	// Line 157, Address: 0x19826c, Func Offset: 0x3c
	// Func End, Address: 0x19827c, Func Offset: 0x4c
}

// __dt__7xSerialFv
// Start address: 0x198280
void* xSerial::__dt()
{
	// Line 121, Address: 0x198280, Func Offset: 0
	// Line 128, Address: 0x198298, Func Offset: 0x18
	// Line 137, Address: 0x1982a4, Func Offset: 0x24
	// Line 143, Address: 0x1982b4, Func Offset: 0x34
	// Func End, Address: 0x1982c4, Func Offset: 0x44
}

// __ct__7xSerialFv
// Start address: 0x1982d0
void* xSerial::__ct()
{
	// Line 119, Address: 0x1982d0, Func Offset: 0
	// Func End, Address: 0x1982d8, Func Offset: 0x8
}

// xSerialTraverse__FPFUiP7xSerial_i
// Start address: 0x1982e0
void xSerialTraverse(int32(*func)(uint32, xSerial*))
{
	int32 rc;
	xSerial xser;
	st_SERIAL_CLIENTINFO* clt;
	st_XSERIAL_DATA_PRIV* xsd;
	int32 i;
	// Line 85, Address: 0x1982e0, Func Offset: 0
	// Line 87, Address: 0x1982fc, Func Offset: 0x1c
	// Line 94, Address: 0x198308, Func Offset: 0x28
	// Line 96, Address: 0x198314, Func Offset: 0x34
	// Line 101, Address: 0x198320, Func Offset: 0x40
	// Line 104, Address: 0x19834c, Func Offset: 0x6c
	// Line 105, Address: 0x198358, Func Offset: 0x78
	// Line 107, Address: 0x198364, Func Offset: 0x84
	// Line 110, Address: 0x198390, Func Offset: 0xb0
	// Func End, Address: 0x1983b0, Func Offset: 0xd0
}

// xSerialShutdown__Fv
// Start address: 0x1983b0
int32 xSerialShutdown()
{
	// Line 71, Address: 0x1983b0, Func Offset: 0
	// Line 81, Address: 0x1983c0, Func Offset: 0x10
	// Func End, Address: 0x1983c8, Func Offset: 0x18
}

// xSerialStartup__FiP21st_SERIAL_PERCID_SIZE
// Start address: 0x1983d0
int32 xSerialStartup(int32 count, st_SERIAL_PERCID_SIZE* sizeinfo)
{
	// Line 47, Address: 0x1983d0, Func Offset: 0
	// Line 48, Address: 0x1983e4, Func Offset: 0x14
	// Line 50, Address: 0x198400, Func Offset: 0x30
	// Line 52, Address: 0x198420, Func Offset: 0x50
	// Line 53, Address: 0x1984dc, Func Offset: 0x10c
	// Line 65, Address: 0x1984e8, Func Offset: 0x118
	// Line 66, Address: 0x1984ec, Func Offset: 0x11c
	// Func End, Address: 0x198504, Func Offset: 0x134
}

