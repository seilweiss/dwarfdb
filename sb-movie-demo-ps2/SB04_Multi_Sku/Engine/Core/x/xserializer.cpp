



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
int32 rdbit();
void wrbit(int32 is_on);
int32 Read(float32* buf);
int32 Read(uint32* buf);
int32 Read(int32* buf);
int32 Read(int16* buf);
int32 Read(uint8* buf);
int32 Read_b1(uint32* bits);
int32 Read_b1(int32* bits);
int32 Read_bn(uint32* bits, int32 n);
int32 Read(int8* buf, int32 elesize, int32 n);
int32 Write(float32 data);
int32 Write(uint32 data);
int32 Write(int32 data);
int32 Write(int16 data);
int32 Write(uint8 data);
int32 Write_b1(int32 bits);
int32 Write_bn(uint32 bits, int32 n);
int32 Write(int8* data, int32 elesize, int32 n);
void setClient(uint32 idtag);
void* __dt();
void xSerialTraverse(int32(*func)(uint32, xSerial*));
int32 xSerialShutdown();
int32 xSerialStartup(int32 count, st_SERIAL_PERCID_SIZE* sizeinfo);

// xSER_xsgclt_ldproc_fill__FPvP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTUii
// Start address: 0x4600b0
int32 xSER_xsgclt_ldproc_fill(st_XSAVEGAME_DATA* xsg, st_XSAVEGAME_READCONTEXT* rctxt)
{
	int8 filbuf[9];
	// Line 1364, Address: 0x4600b0, Func Offset: 0
	// Line 1366, Address: 0x4600b4, Func Offset: 0x4
	// Line 1369, Address: 0x4600e0, Func Offset: 0x30
	// Line 1370, Address: 0x4600f4, Func Offset: 0x44
	// Line 1373, Address: 0x4600fc, Func Offset: 0x4c
	// Line 1376, Address: 0x46010c, Func Offset: 0x5c
	// Line 1377, Address: 0x460110, Func Offset: 0x60
	// Func End, Address: 0x46011c, Func Offset: 0x6c
}

// xSER_xsgclt_svproc_fill__FPvP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXT
// Start address: 0x460120
int32 xSER_xsgclt_svproc_fill(st_XSAVEGAME_DATA* xsg, st_XSAVEGAME_WRITECONTEXT* wctxt)
{
	int8 filbuf[9];
	// Line 1352, Address: 0x460120, Func Offset: 0
	// Line 1354, Address: 0x460124, Func Offset: 0x4
	// Line 1352, Address: 0x460128, Func Offset: 0x8
	// Line 1354, Address: 0x46012c, Func Offset: 0xc
	// Line 1357, Address: 0x460154, Func Offset: 0x34
	// Line 1360, Address: 0x460168, Func Offset: 0x48
	// Line 1359, Address: 0x46016c, Func Offset: 0x4c
	// Line 1360, Address: 0x460170, Func Offset: 0x50
	// Func End, Address: 0x460178, Func Offset: 0x58
}

// xSER_xsgclt_svinfo_fill__FPvP17st_XSAVEGAME_DATAPiPi
// Start address: 0x460180
int32 xSER_xsgclt_svinfo_fill(int32* cur_space, int32* max_fullgame)
{
	st_XSERIAL_DATA_PRIV* xsd;
	int32 i;
	int32 tally;
	int32 size;
	// Line 1313, Address: 0x460180, Func Offset: 0
	// Line 1325, Address: 0x460184, Func Offset: 0x4
	// Line 1313, Address: 0x460188, Func Offset: 0x8
	// Line 1326, Address: 0x46018c, Func Offset: 0xc
	// Line 1330, Address: 0x460190, Func Offset: 0x10
	// Line 1333, Address: 0x460280, Func Offset: 0x100
	// Line 1348, Address: 0x460284, Func Offset: 0x104
	// Line 1337, Address: 0x460288, Func Offset: 0x108
	// Line 1345, Address: 0x46028c, Func Offset: 0x10c
	// Line 1349, Address: 0x460294, Func Offset: 0x114
	// Func End, Address: 0x46029c, Func Offset: 0x11c
}

// xSER_xsgclt_ldproc_clt__FPvP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTUii
// Start address: 0x4602a0
int32 xSER_xsgclt_ldproc_clt(st_XSAVEGAME_DATA* xsg, st_XSAVEGAME_READCONTEXT* rctxt, uint32 idtag)
{
	st_SERIAL_CLIENTINFO* clt;
	// Line 1286, Address: 0x4602a0, Func Offset: 0
	// Line 1292, Address: 0x4602a4, Func Offset: 0x4
	// Line 1286, Address: 0x4602a8, Func Offset: 0x8
	// Line 1292, Address: 0x4602b8, Func Offset: 0x18
	// Line 1293, Address: 0x4602c8, Func Offset: 0x28
	// Line 1296, Address: 0x4602d0, Func Offset: 0x30
	// Line 1303, Address: 0x4602d8, Func Offset: 0x38
	// Line 1305, Address: 0x4602ec, Func Offset: 0x4c
	// Line 1306, Address: 0x4602f0, Func Offset: 0x50
	// Func End, Address: 0x460304, Func Offset: 0x64
}

// xSER_xsgclt_svproc_clt__FPvP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXT
// Start address: 0x460310
int32 xSER_xsgclt_svproc_clt(void* cltdata, st_XSAVEGAME_DATA* xsg, st_XSAVEGAME_WRITECONTEXT* wctxt)
{
	st_SERIAL_CLIENTINFO* clt;
	// Line 1264, Address: 0x460310, Func Offset: 0
	// Line 1270, Address: 0x460324, Func Offset: 0x14
	// Line 1274, Address: 0x460330, Func Offset: 0x20
	// Line 1277, Address: 0x460344, Func Offset: 0x34
	// Line 1276, Address: 0x460348, Func Offset: 0x38
	// Line 1277, Address: 0x46034c, Func Offset: 0x3c
	// Func End, Address: 0x46035c, Func Offset: 0x4c
}

// xSER_xsgclt_svinfo_clt__FPvP17st_XSAVEGAME_DATAPiPi
// Start address: 0x460360
int32 xSER_xsgclt_svinfo_clt(void* cltdata, int32* cur_space, int32* max_fullgame)
{
	st_SERIAL_CLIENTINFO* clt;
	// Line 1257, Address: 0x460360, Func Offset: 0
	// Line 1260, Address: 0x460364, Func Offset: 0x4
	// Line 1257, Address: 0x460368, Func Offset: 0x8
	// Line 1258, Address: 0x46036c, Func Offset: 0xc
	// Line 1261, Address: 0x460370, Func Offset: 0x10
	// Func End, Address: 0x460378, Func Offset: 0x18
}

// xSER_xsgclt_ldproc_ver__FPvP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTUii
// Start address: 0x460380
int32 xSER_xsgclt_ldproc_ver(st_XSAVEGAME_DATA* xsg, st_XSAVEGAME_READCONTEXT* rctxt)
{
	st_XSERIAL_DATA_PRIV* xsd;
	int32 ver;
	// Line 1233, Address: 0x460380, Func Offset: 0
	// Line 1238, Address: 0x460384, Func Offset: 0x4
	// Line 1233, Address: 0x460388, Func Offset: 0x8
	// Line 1238, Address: 0x46038c, Func Offset: 0xc
	// Line 1233, Address: 0x460390, Func Offset: 0x10
	// Line 1238, Address: 0x460394, Func Offset: 0x14
	// Line 1234, Address: 0x460398, Func Offset: 0x18
	// Line 1238, Address: 0x46039c, Func Offset: 0x1c
	// Line 1235, Address: 0x4603a0, Func Offset: 0x20
	// Line 1238, Address: 0x4603a4, Func Offset: 0x24
	// Line 1242, Address: 0x4603ac, Func Offset: 0x2c
	// Line 1245, Address: 0x4603bc, Func Offset: 0x3c
	// Line 1243, Address: 0x4603c8, Func Offset: 0x48
	// Line 1246, Address: 0x4603d4, Func Offset: 0x54
	// Func End, Address: 0x4603e4, Func Offset: 0x64
}

// xSER_xsgclt_svproc_ver__FPvP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXT
// Start address: 0x4603f0
int32 xSER_xsgclt_svproc_ver(st_XSAVEGAME_DATA* xsg, st_XSAVEGAME_WRITECONTEXT* wctxt)
{
	int32 ver;
	// Line 1221, Address: 0x4603f0, Func Offset: 0
	// Line 1226, Address: 0x4603f4, Func Offset: 0x4
	// Line 1221, Address: 0x4603fc, Func Offset: 0xc
	// Line 1223, Address: 0x460400, Func Offset: 0x10
	// Line 1226, Address: 0x460404, Func Offset: 0x14
	// Line 1229, Address: 0x460410, Func Offset: 0x20
	// Line 1228, Address: 0x460414, Func Offset: 0x24
	// Line 1229, Address: 0x460418, Func Offset: 0x28
	// Func End, Address: 0x460420, Func Offset: 0x30
}

// xSER_xsgclt_svinfo_ver__FPvP17st_XSAVEGAME_DATAPiPi
// Start address: 0x460420
int32 xSER_xsgclt_svinfo_ver(int32* cur_space, int32* max_fullgame)
{
	// Line 1214, Address: 0x460420, Func Offset: 0
	// Line 1217, Address: 0x460424, Func Offset: 0x4
	// Line 1214, Address: 0x460428, Func Offset: 0x8
	// Line 1218, Address: 0x46042c, Func Offset: 0xc
	// Func End, Address: 0x460434, Func Offset: 0x14
}

// xSerial_svgame_register__FP17st_XSAVEGAME_DATA16en_SAVEGAME_MODE
// Start address: 0x460440
int32 xSerial_svgame_register(st_XSAVEGAME_DATA* sgctxt, en_SAVEGAME_MODE mode)
{
	st_XSERIAL_DATA_PRIV* xsd;
	st_SERIAL_CLIENTINFO* clt;
	int32 i;
	// Line 1155, Address: 0x460440, Func Offset: 0
	// Line 1160, Address: 0x460444, Func Offset: 0x4
	// Line 1155, Address: 0x460448, Func Offset: 0x8
	// Line 1160, Address: 0x46044c, Func Offset: 0xc
	// Line 1155, Address: 0x460450, Func Offset: 0x10
	// Line 1165, Address: 0x460454, Func Offset: 0x14
	// Line 1155, Address: 0x460458, Func Offset: 0x18
	// Line 1160, Address: 0x460468, Func Offset: 0x28
	// Line 1156, Address: 0x46046c, Func Offset: 0x2c
	// Line 1160, Address: 0x460474, Func Offset: 0x34
	// Line 1165, Address: 0x46047c, Func Offset: 0x3c
	// Line 1184, Address: 0x460484, Func Offset: 0x44
	// Line 1187, Address: 0x460490, Func Offset: 0x50
	// Line 1194, Address: 0x4604a8, Func Offset: 0x68
	// Line 1198, Address: 0x4604c0, Func Offset: 0x80
	// Line 1205, Address: 0x4604dc, Func Offset: 0x9c
	// Line 1168, Address: 0x4604e8, Func Offset: 0xa8
	// Line 1205, Address: 0x4604ec, Func Offset: 0xac
	// Line 1168, Address: 0x4604f4, Func Offset: 0xb4
	// Line 1205, Address: 0x4604fc, Func Offset: 0xbc
	// Line 1176, Address: 0x460528, Func Offset: 0xe8
	// Line 1205, Address: 0x46052c, Func Offset: 0xec
	// Line 1181, Address: 0x460558, Func Offset: 0x118
	// Line 1205, Address: 0x46055c, Func Offset: 0x11c
	// Line 1181, Address: 0x460568, Func Offset: 0x128
	// Line 1205, Address: 0x46056c, Func Offset: 0x12c
	// Line 1181, Address: 0x460570, Func Offset: 0x130
	// Line 1205, Address: 0x460574, Func Offset: 0x134
	// Line 1183, Address: 0x460580, Func Offset: 0x140
	// Line 1206, Address: 0x460588, Func Offset: 0x148
	// Func End, Address: 0x4605a0, Func Offset: 0x160
}

// XSER_get_client__FUi
// Start address: 0x4605a0
st_SERIAL_CLIENTINFO* XSER_get_client(uint32 idtag)
{
	st_XSERIAL_DATA_PRIV* xsd;
	st_SERIAL_CLIENTINFO* clt;
	int32 idx;
	// Line 1103, Address: 0x4605a0, Func Offset: 0
	// Line 1109, Address: 0x4605a4, Func Offset: 0x4
	// Line 1103, Address: 0x4605a8, Func Offset: 0x8
	// Line 1109, Address: 0x4605ac, Func Offset: 0xc
	// Line 1103, Address: 0x4605b0, Func Offset: 0x10
	// Line 1109, Address: 0x4605c0, Func Offset: 0x20
	// Line 1104, Address: 0x4605c4, Func Offset: 0x24
	// Line 1109, Address: 0x4605c8, Func Offset: 0x28
	// Line 1110, Address: 0x4605d8, Func Offset: 0x38
	// Line 1131, Address: 0x4605e0, Func Offset: 0x40
	// Line 1146, Address: 0x4605ec, Func Offset: 0x4c
	// Line 1126, Address: 0x4605fc, Func Offset: 0x5c
	// Line 1146, Address: 0x460600, Func Offset: 0x60
	// Line 1126, Address: 0x460608, Func Offset: 0x68
	// Line 1146, Address: 0x46060c, Func Offset: 0x6c
	// Line 1127, Address: 0x460618, Func Offset: 0x78
	// Line 1147, Address: 0x460620, Func Offset: 0x80
	// Func End, Address: 0x460638, Func Offset: 0x98
}

// xSER_ord_test__FPCvPv
// Start address: 0x460640
int32 xSER_ord_test(void* key, void* elt)
{
	int32 rc;
	uint32 idtag;
	// Line 1088, Address: 0x460640, Func Offset: 0
	// Line 1091, Address: 0x460644, Func Offset: 0x4
	// Line 1093, Address: 0x460650, Func Offset: 0x10
	// Line 1094, Address: 0x46065c, Func Offset: 0x1c
	// Line 1098, Address: 0x460660, Func Offset: 0x20
	// Line 1092, Address: 0x460668, Func Offset: 0x28
	// Line 1099, Address: 0x460670, Func Offset: 0x30
	// Func End, Address: 0x460678, Func Offset: 0x38
}

// xSER_ord_compare__FPvPv
// Start address: 0x460680
int32 xSER_ord_compare(void* e1, void* e2)
{
	int32 rc;
	// Line 1068, Address: 0x460680, Func Offset: 0
	// Line 1074, Address: 0x460688, Func Offset: 0x8
	// Line 1076, Address: 0x460694, Func Offset: 0x14
	// Line 1077, Address: 0x4606a0, Func Offset: 0x20
	// Line 1081, Address: 0x4606a4, Func Offset: 0x24
	// Line 1075, Address: 0x4606ac, Func Offset: 0x2c
	// Line 1082, Address: 0x4606b4, Func Offset: 0x34
	// Func End, Address: 0x4606bc, Func Offset: 0x3c
}

// xSER_init_buffers__FiP21st_SERIAL_PERCID_SIZE
// Start address: 0x4606c0
void xSER_init_buffers(int32 count, st_SERIAL_PERCID_SIZE* sizeinfo)
{
	st_XSERIAL_DATA_PRIV* xsd;
	int32 i;
	int32 tally;
	int32 sicnt;
	st_SERIAL_PERCID_SIZE* sitmp;
	st_SERIAL_CLIENTINFO* tmp_clt;
	// Line 949, Address: 0x4606c0, Func Offset: 0
	// Line 965, Address: 0x4606c4, Func Offset: 0x4
	// Line 949, Address: 0x4606c8, Func Offset: 0x8
	// Line 952, Address: 0x4606dc, Func Offset: 0x1c
	// Line 949, Address: 0x4606e0, Func Offset: 0x20
	// Line 950, Address: 0x4606e4, Func Offset: 0x24
	// Line 949, Address: 0x4606e8, Func Offset: 0x28
	// Line 965, Address: 0x4606f4, Func Offset: 0x34
	// Line 949, Address: 0x4606f8, Func Offset: 0x38
	// Line 965, Address: 0x4606fc, Func Offset: 0x3c
	// Line 950, Address: 0x460704, Func Offset: 0x44
	// Line 965, Address: 0x460708, Func Offset: 0x48
	// Line 966, Address: 0x460710, Func Offset: 0x50
	// Line 968, Address: 0x460724, Func Offset: 0x64
	// Line 966, Address: 0x460728, Func Offset: 0x68
	// Line 968, Address: 0x46072c, Func Offset: 0x6c
	// Line 969, Address: 0x460738, Func Offset: 0x78
	// Line 978, Address: 0x460748, Func Offset: 0x88
	// Line 979, Address: 0x460754, Func Offset: 0x94
	// Line 980, Address: 0x46075c, Func Offset: 0x9c
	// Line 979, Address: 0x460760, Func Offset: 0xa0
	// Line 981, Address: 0x460764, Func Offset: 0xa4
	// Line 979, Address: 0x460768, Func Offset: 0xa8
	// Line 982, Address: 0x46076c, Func Offset: 0xac
	// Line 987, Address: 0x46077c, Func Offset: 0xbc
	// Line 992, Address: 0x460780, Func Offset: 0xc0
	// Line 987, Address: 0x460784, Func Offset: 0xc4
	// Line 992, Address: 0x460788, Func Offset: 0xc8
	// Line 987, Address: 0x46078c, Func Offset: 0xcc
	// Line 992, Address: 0x46079c, Func Offset: 0xdc
	// Line 993, Address: 0x4607a8, Func Offset: 0xe8
	// Line 995, Address: 0x4607b8, Func Offset: 0xf8
	// Line 1008, Address: 0x4607bc, Func Offset: 0xfc
	// Line 1005, Address: 0x4607c0, Func Offset: 0x100
	// Line 1008, Address: 0x4607c4, Func Offset: 0x104
	// Line 1013, Address: 0x4607cc, Func Offset: 0x10c
	// Line 1015, Address: 0x4607d0, Func Offset: 0x110
	// Line 1017, Address: 0x4607d4, Func Offset: 0x114
	// Line 1013, Address: 0x4607d8, Func Offset: 0x118
	// Line 1014, Address: 0x4607dc, Func Offset: 0x11c
	// Line 1015, Address: 0x4607e0, Func Offset: 0x120
	// Line 1017, Address: 0x4607ec, Func Offset: 0x12c
	// Line 1020, Address: 0x460800, Func Offset: 0x140
	// Line 1017, Address: 0x460804, Func Offset: 0x144
	// Line 1020, Address: 0x460808, Func Offset: 0x148
	// Line 1017, Address: 0x46080c, Func Offset: 0x14c
	// Line 1020, Address: 0x460810, Func Offset: 0x150
	// Line 1026, Address: 0x460818, Func Offset: 0x158
	// Line 1023, Address: 0x46081c, Func Offset: 0x15c
	// Line 1028, Address: 0x460820, Func Offset: 0x160
	// Line 1023, Address: 0x460824, Func Offset: 0x164
	// Line 1028, Address: 0x460828, Func Offset: 0x168
	// Line 1034, Address: 0x460830, Func Offset: 0x170
	// Line 1058, Address: 0x460840, Func Offset: 0x180
	// Line 1051, Address: 0x4608a4, Func Offset: 0x1e4
	// Line 1058, Address: 0x4608a8, Func Offset: 0x1e8
	// Line 1051, Address: 0x4608b8, Func Offset: 0x1f8
	// Line 1058, Address: 0x4608c0, Func Offset: 0x200
	// Line 1051, Address: 0x4608dc, Func Offset: 0x21c
	// Line 1058, Address: 0x4608e0, Func Offset: 0x220
	// Line 1051, Address: 0x4608ec, Func Offset: 0x22c
	// Line 1058, Address: 0x4608f4, Func Offset: 0x234
	// Line 1051, Address: 0x460910, Func Offset: 0x250
	// Line 1058, Address: 0x460914, Func Offset: 0x254
	// Line 1051, Address: 0x460920, Func Offset: 0x260
	// Line 1058, Address: 0x460928, Func Offset: 0x268
	// Line 1051, Address: 0x460944, Func Offset: 0x284
	// Line 1058, Address: 0x460948, Func Offset: 0x288
	// Line 1051, Address: 0x460954, Func Offset: 0x294
	// Line 1058, Address: 0x46095c, Func Offset: 0x29c
	// Line 1051, Address: 0x460978, Func Offset: 0x2b8
	// Line 1058, Address: 0x46097c, Func Offset: 0x2bc
	// Line 1051, Address: 0x460988, Func Offset: 0x2c8
	// Line 1058, Address: 0x460990, Func Offset: 0x2d0
	// Line 1051, Address: 0x4609ac, Func Offset: 0x2ec
	// Line 1058, Address: 0x4609b0, Func Offset: 0x2f0
	// Line 1051, Address: 0x4609bc, Func Offset: 0x2fc
	// Line 1058, Address: 0x4609c4, Func Offset: 0x304
	// Line 1051, Address: 0x4609e0, Func Offset: 0x320
	// Line 1058, Address: 0x4609e4, Func Offset: 0x324
	// Line 1051, Address: 0x4609f0, Func Offset: 0x330
	// Line 1058, Address: 0x4609f8, Func Offset: 0x338
	// Line 1051, Address: 0x460a14, Func Offset: 0x354
	// Line 1058, Address: 0x460a18, Func Offset: 0x358
	// Line 1051, Address: 0x460a24, Func Offset: 0x364
	// Line 1058, Address: 0x460a28, Func Offset: 0x368
	// Line 1051, Address: 0x460a2c, Func Offset: 0x36c
	// Line 1058, Address: 0x460a30, Func Offset: 0x370
	// Line 1051, Address: 0x460a60, Func Offset: 0x3a0
	// Line 1058, Address: 0x460a64, Func Offset: 0x3a4
	// Line 1051, Address: 0x460a74, Func Offset: 0x3b4
	// Line 1058, Address: 0x460a78, Func Offset: 0x3b8
	// Line 1051, Address: 0x460a7c, Func Offset: 0x3bc
	// Line 1058, Address: 0x460a80, Func Offset: 0x3c0
	// Line 1064, Address: 0x460aa0, Func Offset: 0x3e0
	// Line 1065, Address: 0x460ab8, Func Offset: 0x3f8
	// Func End, Address: 0x460adc, Func Offset: 0x41c
}

// xSerialWipeMainBuffer__Fv
// Start address: 0x460ae0
void xSerialWipeMainBuffer()
{
	// Line 918, Address: 0x460ae0, Func Offset: 0
	// Func End, Address: 0x460af8, Func Offset: 0x18
}

// rdbit__7xSerialFv
// Start address: 0x460b00
int32 xSerial::rdbit()
{
	st_SERIAL_CLIENTINFO* clt;
	// Line 825, Address: 0x460b00, Func Offset: 0
	// Line 842, Address: 0x460b04, Func Offset: 0x4
	// Line 858, Address: 0x460b20, Func Offset: 0x20
	// Line 862, Address: 0x460b34, Func Offset: 0x34
	// Line 858, Address: 0x460b38, Func Offset: 0x38
	// Line 861, Address: 0x460b50, Func Offset: 0x50
	// Line 858, Address: 0x460b54, Func Offset: 0x54
	// Line 861, Address: 0x460b58, Func Offset: 0x58
	// Line 858, Address: 0x460b5c, Func Offset: 0x5c
	// Line 862, Address: 0x460b60, Func Offset: 0x60
	// Line 870, Address: 0x460b6c, Func Offset: 0x6c
	// Line 872, Address: 0x460b74, Func Offset: 0x74
	// Line 849, Address: 0x460b7c, Func Offset: 0x7c
	// Line 872, Address: 0x460b88, Func Offset: 0x88
	// Line 873, Address: 0x460b9c, Func Offset: 0x9c
	// Func End, Address: 0x460ba4, Func Offset: 0xa4
}

// wrbit__7xSerialFi
// Start address: 0x460bb0
void xSerial::wrbit(int32 is_on)
{
	st_SERIAL_CLIENTINFO* clt;
	// Line 765, Address: 0x460bb0, Func Offset: 0
	// Line 781, Address: 0x460bb4, Func Offset: 0x4
	// Line 796, Address: 0x460bd0, Func Offset: 0x20
	// Line 801, Address: 0x460c00, Func Offset: 0x50
	// Line 805, Address: 0x460c08, Func Offset: 0x58
	// Line 806, Address: 0x460c0c, Func Offset: 0x5c
	// Line 805, Address: 0x460c10, Func Offset: 0x60
	// Line 806, Address: 0x460c18, Func Offset: 0x68
	// Line 814, Address: 0x460c24, Func Offset: 0x74
	// Line 816, Address: 0x460c2c, Func Offset: 0x7c
	// Line 787, Address: 0x460c34, Func Offset: 0x84
	// Line 816, Address: 0x460c3c, Func Offset: 0x8c
	// Line 802, Address: 0x460c50, Func Offset: 0xa0
	// Line 816, Address: 0x460c54, Func Offset: 0xa4
	// Line 802, Address: 0x460c58, Func Offset: 0xa8
	// Line 816, Address: 0x460c5c, Func Offset: 0xac
	// Line 817, Address: 0x460c88, Func Offset: 0xd8
	// Func End, Address: 0x460c90, Func Offset: 0xe0
}

// Read__7xSerialFPf
// Start address: 0x460c90
int32 xSerial::Read(float32* buf)
{
	// Line 702, Address: 0x460c90, Func Offset: 0
	// Func End, Address: 0x460c9c, Func Offset: 0xc
}

// Read__7xSerialFPUi
// Start address: 0x460ca0
int32 xSerial::Read(uint32* buf)
{
	// Line 697, Address: 0x460ca0, Func Offset: 0
	// Func End, Address: 0x460cac, Func Offset: 0xc
}

// Read__7xSerialFPi
// Start address: 0x460cb0
int32 xSerial::Read(int32* buf)
{
	// Line 692, Address: 0x460cb0, Func Offset: 0
	// Func End, Address: 0x460cbc, Func Offset: 0xc
}

// Read__7xSerialFPs
// Start address: 0x460cc0
int32 xSerial::Read(int16* buf)
{
	// Line 682, Address: 0x460cc0, Func Offset: 0
	// Func End, Address: 0x460ccc, Func Offset: 0xc
}

// Read__7xSerialFPUc
// Start address: 0x460cd0
int32 xSerial::Read(uint8* buf)
{
	// Line 672, Address: 0x460cd0, Func Offset: 0
	// Func End, Address: 0x460cdc, Func Offset: 0xc
}

// Read_b1__7xSerialFPUi
// Start address: 0x460ce0
int32 xSerial::Read_b1(uint32* bits)
{
	// Line 600, Address: 0x460ce0, Func Offset: 0
	// Func End, Address: 0x460cec, Func Offset: 0xc
}

// Read_b1__7xSerialFPi
// Start address: 0x460cf0
int32 xSerial::Read_b1(int32* bits)
{
	// Line 595, Address: 0x460cf0, Func Offset: 0
	// Func End, Address: 0x460cfc, Func Offset: 0xc
}

// Read_bn__7xSerialFPUii
// Start address: 0x460d00
int32 xSerial::Read_bn(uint32* bits, int32 n)
{
	// Line 585, Address: 0x460d00, Func Offset: 0
	// Func End, Address: 0x460d0c, Func Offset: 0xc
}

// Read__7xSerialFPcii
// Start address: 0x460d10
int32 xSerial::Read(int8* buf, int32 elesize, int32 n)
{
	int32 nbit;
	int32* iptr;
	int32 bidx;
	int32 i;
	int32 bitval;
	int8* cptr;
	int32 bitval;
	// Line 483, Address: 0x460d10, Func Offset: 0
	// Line 501, Address: 0x460d2c, Func Offset: 0x1c
	// Line 517, Address: 0x460d44, Func Offset: 0x34
	// Line 548, Address: 0x460d4c, Func Offset: 0x3c
	// Line 547, Address: 0x460d50, Func Offset: 0x40
	// Line 546, Address: 0x460d54, Func Offset: 0x44
	// Line 548, Address: 0x460d58, Func Offset: 0x48
	// Line 551, Address: 0x460d60, Func Offset: 0x50
	// Line 554, Address: 0x460d68, Func Offset: 0x58
	// Line 555, Address: 0x460d70, Func Offset: 0x60
	// Line 557, Address: 0x460d98, Func Offset: 0x88
	// Line 560, Address: 0x460db8, Func Offset: 0xa8
	// Line 563, Address: 0x460dbc, Func Offset: 0xac
	// Line 564, Address: 0x460dc8, Func Offset: 0xb8
	// Line 565, Address: 0x460dcc, Func Offset: 0xbc
	// Line 569, Address: 0x460dd0, Func Offset: 0xc0
	// Line 577, Address: 0x460de0, Func Offset: 0xd0
	// Line 521, Address: 0x460de8, Func Offset: 0xd8
	// Line 520, Address: 0x460dec, Func Offset: 0xdc
	// Line 577, Address: 0x460df0, Func Offset: 0xe0
	// Line 529, Address: 0x460e0c, Func Offset: 0xfc
	// Line 577, Address: 0x460e10, Func Offset: 0x100
	// Line 529, Address: 0x460e24, Func Offset: 0x114
	// Line 577, Address: 0x460e30, Func Offset: 0x120
	// Line 531, Address: 0x460e34, Func Offset: 0x124
	// Line 577, Address: 0x460e38, Func Offset: 0x128
	// Line 537, Address: 0x460e54, Func Offset: 0x144
	// Line 577, Address: 0x460e58, Func Offset: 0x148
	// Line 538, Address: 0x460e60, Func Offset: 0x150
	// Line 577, Address: 0x460e64, Func Offset: 0x154
	// Line 544, Address: 0x460e78, Func Offset: 0x168
	// Line 578, Address: 0x460e80, Func Offset: 0x170
	// Func End, Address: 0x460ea0, Func Offset: 0x190
}

// Write__7xSerialFf
// Start address: 0x460ea0
int32 xSerial::Write(float32 data)
{
	// Line 429, Address: 0x460ea0, Func Offset: 0
	// Line 430, Address: 0x460ea4, Func Offset: 0x4
	// Line 429, Address: 0x460ea8, Func Offset: 0x8
	// Line 430, Address: 0x460eac, Func Offset: 0xc
	// Line 429, Address: 0x460eb0, Func Offset: 0x10
	// Line 430, Address: 0x460eb4, Func Offset: 0x14
	// Line 431, Address: 0x460ebc, Func Offset: 0x1c
	// Func End, Address: 0x460ec8, Func Offset: 0x28
}

// Write__7xSerialFUi
// Start address: 0x460ed0
int32 xSerial::Write(uint32 data)
{
	// Line 424, Address: 0x460ed0, Func Offset: 0
	// Line 425, Address: 0x460ed4, Func Offset: 0x4
	// Line 424, Address: 0x460ed8, Func Offset: 0x8
	// Line 425, Address: 0x460edc, Func Offset: 0xc
	// Line 424, Address: 0x460ee0, Func Offset: 0x10
	// Line 425, Address: 0x460ee4, Func Offset: 0x14
	// Line 426, Address: 0x460eec, Func Offset: 0x1c
	// Func End, Address: 0x460ef8, Func Offset: 0x28
}

// Write__7xSerialFi
// Start address: 0x460f00
int32 xSerial::Write(int32 data)
{
	// Line 419, Address: 0x460f00, Func Offset: 0
	// Line 420, Address: 0x460f04, Func Offset: 0x4
	// Line 419, Address: 0x460f08, Func Offset: 0x8
	// Line 420, Address: 0x460f0c, Func Offset: 0xc
	// Line 419, Address: 0x460f10, Func Offset: 0x10
	// Line 420, Address: 0x460f14, Func Offset: 0x14
	// Line 421, Address: 0x460f1c, Func Offset: 0x1c
	// Func End, Address: 0x460f28, Func Offset: 0x28
}

// Write__7xSerialFs
// Start address: 0x460f30
int32 xSerial::Write(int16 data)
{
	// Line 409, Address: 0x460f30, Func Offset: 0
	// Line 410, Address: 0x460f34, Func Offset: 0x4
	// Line 409, Address: 0x460f38, Func Offset: 0x8
	// Line 410, Address: 0x460f3c, Func Offset: 0xc
	// Line 409, Address: 0x460f40, Func Offset: 0x10
	// Line 410, Address: 0x460f44, Func Offset: 0x14
	// Line 411, Address: 0x460f4c, Func Offset: 0x1c
	// Func End, Address: 0x460f58, Func Offset: 0x28
}

// Write__7xSerialFUc
// Start address: 0x460f60
int32 xSerial::Write(uint8 data)
{
	// Line 399, Address: 0x460f60, Func Offset: 0
	// Line 400, Address: 0x460f64, Func Offset: 0x4
	// Line 399, Address: 0x460f68, Func Offset: 0x8
	// Line 400, Address: 0x460f6c, Func Offset: 0xc
	// Line 399, Address: 0x460f70, Func Offset: 0x10
	// Line 400, Address: 0x460f74, Func Offset: 0x14
	// Line 401, Address: 0x460f7c, Func Offset: 0x1c
	// Func End, Address: 0x460f88, Func Offset: 0x28
}

// Write_b1__7xSerialFi
// Start address: 0x460f90
int32 xSerial::Write_b1(int32 bits)
{
	// Line 322, Address: 0x460f90, Func Offset: 0
	// Line 323, Address: 0x460f94, Func Offset: 0x4
	// Line 322, Address: 0x460f98, Func Offset: 0x8
	// Line 323, Address: 0x460f9c, Func Offset: 0xc
	// Line 322, Address: 0x460fa0, Func Offset: 0x10
	// Line 323, Address: 0x460fa4, Func Offset: 0x14
	// Line 324, Address: 0x460fac, Func Offset: 0x1c
	// Func End, Address: 0x460fb8, Func Offset: 0x28
}

// Write_bn__7xSerialFUii
// Start address: 0x460fc0
int32 xSerial::Write_bn(uint32 bits, int32 n)
{
	// Line 317, Address: 0x460fc0, Func Offset: 0
	// Line 318, Address: 0x460fc4, Func Offset: 0x4
	// Line 317, Address: 0x460fc8, Func Offset: 0x8
	// Line 318, Address: 0x460fcc, Func Offset: 0xc
	// Line 317, Address: 0x460fd0, Func Offset: 0x10
	// Line 318, Address: 0x460fd4, Func Offset: 0x14
	// Line 319, Address: 0x460fdc, Func Offset: 0x1c
	// Func End, Address: 0x460fe8, Func Offset: 0x28
}

// Write__7xSerialFPcii
// Start address: 0x460ff0
int32 xSerial::Write(int8* data, int32 elesize, int32 n)
{
	int32 nbit;
	int32 bidx;
	int32* iptr;
	int32 i;
	int32 bidx;
	int8* cptr;
	int32 i;
	// Line 166, Address: 0x460ff0, Func Offset: 0
	// Line 168, Address: 0x46100c, Func Offset: 0x1c
	// Line 184, Address: 0x461014, Func Offset: 0x24
	// Line 228, Address: 0x461024, Func Offset: 0x34
	// Line 258, Address: 0x46102c, Func Offset: 0x3c
	// Line 257, Address: 0x461030, Func Offset: 0x40
	// Line 256, Address: 0x461034, Func Offset: 0x44
	// Line 258, Address: 0x461038, Func Offset: 0x48
	// Line 263, Address: 0x461040, Func Offset: 0x50
	// Line 266, Address: 0x461064, Func Offset: 0x74
	// Line 269, Address: 0x461068, Func Offset: 0x78
	// Line 271, Address: 0x461074, Func Offset: 0x84
	// Line 272, Address: 0x461078, Func Offset: 0x88
	// Line 277, Address: 0x46107c, Func Offset: 0x8c
	// Line 285, Address: 0x461090, Func Offset: 0xa0
	// Line 169, Address: 0x461098, Func Offset: 0xa8
	// Line 231, Address: 0x4610a0, Func Offset: 0xb0
	// Line 230, Address: 0x4610a4, Func Offset: 0xb4
	// Line 285, Address: 0x4610a8, Func Offset: 0xb8
	// Line 237, Address: 0x4610b4, Func Offset: 0xc4
	// Line 285, Address: 0x4610b8, Func Offset: 0xc8
	// Line 237, Address: 0x4610bc, Func Offset: 0xcc
	// Line 285, Address: 0x4610c0, Func Offset: 0xd0
	// Line 243, Address: 0x4610d8, Func Offset: 0xe8
	// Line 285, Address: 0x4610dc, Func Offset: 0xec
	// Line 245, Address: 0x4610e4, Func Offset: 0xf4
	// Line 285, Address: 0x4610e8, Func Offset: 0xf8
	// Line 251, Address: 0x4610ec, Func Offset: 0xfc
	// Line 285, Address: 0x4610f0, Func Offset: 0x100
	// Line 252, Address: 0x461100, Func Offset: 0x110
	// Line 286, Address: 0x461108, Func Offset: 0x118
	// Func End, Address: 0x461128, Func Offset: 0x138
}

// setClient__7xSerialFUi
// Start address: 0x461130
void xSerial::setClient(uint32 idtag)
{
	// Line 153, Address: 0x461130, Func Offset: 0
	// Line 154, Address: 0x461140, Func Offset: 0x10
	// Line 156, Address: 0x46116c, Func Offset: 0x3c
	// Func End, Address: 0x46117c, Func Offset: 0x4c
}

// __dt__7xSerialFv
// Start address: 0x461180
void* xSerial::__dt()
{
	// Line 124, Address: 0x461180, Func Offset: 0
	// Line 139, Address: 0x461198, Func Offset: 0x18
	// Line 150, Address: 0x4611b4, Func Offset: 0x34
	// Func End, Address: 0x4611c4, Func Offset: 0x44
}

// xSerialTraverse__FPFUiP7xSerial_i
// Start address: 0x4611d0
void xSerialTraverse(int32(*func)(uint32, xSerial*))
{
	int32 i;
	st_XSERIAL_DATA_PRIV* xsd;
	st_SERIAL_CLIENTINFO* clt;
	xSerial xser;
	int32 rc;
	// Line 91, Address: 0x4611d0, Func Offset: 0
	// Line 100, Address: 0x4611d4, Func Offset: 0x4
	// Line 91, Address: 0x4611d8, Func Offset: 0x8
	// Line 100, Address: 0x4611f8, Func Offset: 0x28
	// Line 91, Address: 0x4611fc, Func Offset: 0x2c
	// Line 93, Address: 0x461204, Func Offset: 0x34
	// Line 91, Address: 0x461208, Func Offset: 0x38
	// Line 100, Address: 0x46120c, Func Offset: 0x3c
	// Line 116, Address: 0x46121c, Func Offset: 0x4c
	// Line 117, Address: 0x4612a8, Func Offset: 0xd8
	// Func End, Address: 0x4612d8, Func Offset: 0x108
}

// xSerialShutdown__Fv
// Start address: 0x4612e0
int32 xSerialShutdown()
{
	// Line 77, Address: 0x4612e0, Func Offset: 0
	// Line 87, Address: 0x4612e8, Func Offset: 0x8
	// Func End, Address: 0x4612f0, Func Offset: 0x10
}

// xSerialStartup__FiP21st_SERIAL_PERCID_SIZE
// Start address: 0x4612f0
int32 xSerialStartup(int32 count, st_SERIAL_PERCID_SIZE* sizeinfo)
{
	// Line 51, Address: 0x4612f0, Func Offset: 0
	// Line 52, Address: 0x461304, Func Offset: 0x14
	// Line 71, Address: 0x461318, Func Offset: 0x28
	// Line 54, Address: 0x461324, Func Offset: 0x34
	// Line 71, Address: 0x461328, Func Offset: 0x38
	// Line 56, Address: 0x46133c, Func Offset: 0x4c
	// Line 71, Address: 0x461340, Func Offset: 0x50
	// Line 57, Address: 0x4613fc, Func Offset: 0x10c
	// Line 71, Address: 0x461400, Func Offset: 0x110
	// Line 72, Address: 0x461410, Func Offset: 0x120
	// Func End, Address: 0x461424, Func Offset: 0x134
}

