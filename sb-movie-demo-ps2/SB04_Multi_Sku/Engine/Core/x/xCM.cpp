



void xCMsetDest(float32 x, float32 y, float32 width, float32 height);
void xCMstop();
void xCMstart(xCreditsData* data, xBase* parent);
void xCMrender();
void xCMupdate(float32 dt);
uint32 xCMrender(float32 time, xCreditsData* data);
int32 Im2DRenderQuadAlpha(float32 x1, float32 y1, float32 x2, float32 y2, float32 alpha, float32 z, float32 recipCamZ, float32 uvOffset);
void xCMprep(xCreditsData* data);

// xCMsetDest__Fffff
// Start address: 0x42ca50
void xCMsetDest(float32 x, float32 y, float32 width, float32 height)
{
	// Line 1446, Address: 0x42ca50, Func Offset: 0
	// Line 1447, Address: 0x42ca54, Func Offset: 0x4
	// Line 1448, Address: 0x42ca58, Func Offset: 0x8
	// Line 1450, Address: 0x42ca5c, Func Offset: 0xc
	// Func End, Address: 0x42ca64, Func Offset: 0x14
}

// xCMstop__Fv
// Start address: 0x42ca70
void xCMstop()
{
	// Line 1425, Address: 0x42ca70, Func Offset: 0
	// Line 1433, Address: 0x42ca78, Func Offset: 0x8
	// Line 1435, Address: 0x42ca84, Func Offset: 0x14
	// Line 1434, Address: 0x42ca88, Func Offset: 0x18
	// Line 1435, Address: 0x42ca90, Func Offset: 0x20
	// Line 1437, Address: 0x42ca94, Func Offset: 0x24
	// Line 1439, Address: 0x42ca9c, Func Offset: 0x2c
	// Line 1442, Address: 0x42caa4, Func Offset: 0x34
	// Func End, Address: 0x42cab0, Func Offset: 0x40
}

// xCMstart__FP12xCreditsDatafP5xBase
// Start address: 0x42cab0
void xCMstart(xCreditsData* data, xBase* parent)
{
	xCMheader* hdr;
	// Line 1408, Address: 0x42cab0, Func Offset: 0
	// Line 1413, Address: 0x42cab8, Func Offset: 0x8
	// Line 1415, Address: 0x42cac8, Func Offset: 0x18
	// Line 1416, Address: 0x42cb20, Func Offset: 0x70
	// Line 1420, Address: 0x42cb30, Func Offset: 0x80
	// Line 1421, Address: 0x42cb38, Func Offset: 0x88
	// Line 1422, Address: 0x42cb40, Func Offset: 0x90
	// Func End, Address: 0x42cb48, Func Offset: 0x98
}

// xCMrender__Fv
// Start address: 0x42cb50
void xCMrender()
{
	// Line 1392, Address: 0x42cb50, Func Offset: 0
	// Func End, Address: 0x42cb5c, Func Offset: 0xc
}

// xCMupdate__Ff
// Start address: 0x42cb60
void xCMupdate(float32 dt)
{
	float32 scale;
	// Line 1363, Address: 0x42cb60, Func Offset: 0
	// Line 1367, Address: 0x42cb68, Func Offset: 0x8
	// Line 1368, Address: 0x42cb74, Func Offset: 0x14
	// Line 1371, Address: 0x42cb7c, Func Offset: 0x1c
	// Line 1380, Address: 0x42cbb8, Func Offset: 0x58
	// Line 1381, Address: 0x42cbc0, Func Offset: 0x60
	// Line 1384, Address: 0x42cbd8, Func Offset: 0x78
	// Line 1385, Address: 0x42cbec, Func Offset: 0x8c
	// Line 1388, Address: 0x42cc14, Func Offset: 0xb4
	// Line 1369, Address: 0x42cc20, Func Offset: 0xc0
	// Line 1388, Address: 0x42cc30, Func Offset: 0xd0
	// Line 1369, Address: 0x42cc34, Func Offset: 0xd4
	// Line 1388, Address: 0x42cc48, Func Offset: 0xe8
	// Func End, Address: 0x42cc54, Func Offset: 0xf4
}

// xCMrender__FfP12xCreditsData
// Start address: 0x42cc60
uint32 xCMrender(float32 time, xCreditsData* data)
{
	xCMheader* hdr;
	int8* dp;
	xCMcredits* cp;
	xCMpreset* pp;
	xCMhunk* hp;
	float32 a;
	xCMpreset* preset;
	float32 nx;
	float32 ny;
	float32 x0;
	float32 x1;
	float32 y0;
	float32 y1;
	float32 ca;
	xCMtexture* tex;
	int32 oldSrcBlend;
	int32 oldDestBlend;
	int32 oldZWrite;
	int32 oldZTest;
	xColor_tag color;
	basic_rect bounds;
	xtextbox tb;
	xColor_tag color;
	basic_rect bounds;
	xtextbox tb;
	uint32 alignL;
	uint32 alignR;
	xColor_tag colorL;
	basic_rect bounds;
	xtextbox tb;
	xColor_tag colorR;
	basic_rect bounds;
	xtextbox tb;
	// Line 1115, Address: 0x42cc60, Func Offset: 0
	// Line 1117, Address: 0x42cc64, Func Offset: 0x4
	// Line 1115, Address: 0x42cc68, Func Offset: 0x8
	// Line 1117, Address: 0x42ccc0, Func Offset: 0x60
	// Line 1121, Address: 0x42ccdc, Func Offset: 0x7c
	// Line 1122, Address: 0x42ccf4, Func Offset: 0x94
	// Line 1124, Address: 0x42ccfc, Func Offset: 0x9c
	// Line 1129, Address: 0x42cd18, Func Offset: 0xb8
	// Line 1130, Address: 0x42cd1c, Func Offset: 0xbc
	// Line 1129, Address: 0x42cd20, Func Offset: 0xc0
	// Line 1130, Address: 0x42cd24, Func Offset: 0xc4
	// Line 1140, Address: 0x42cd84, Func Offset: 0x124
	// Line 1134, Address: 0x42cd88, Func Offset: 0x128
	// Line 1141, Address: 0x42cd90, Func Offset: 0x130
	// Line 1140, Address: 0x42cd94, Func Offset: 0x134
	// Line 1141, Address: 0x42cdb0, Func Offset: 0x150
	// Line 1145, Address: 0x42cdc4, Func Offset: 0x164
	// Line 1148, Address: 0x42cde0, Func Offset: 0x180
	// Line 1152, Address: 0x42cde4, Func Offset: 0x184
	// Line 1148, Address: 0x42cde8, Func Offset: 0x188
	// Line 1152, Address: 0x42cdec, Func Offset: 0x18c
	// Line 1148, Address: 0x42cdf4, Func Offset: 0x194
	// Line 1152, Address: 0x42cdf8, Func Offset: 0x198
	// Line 1162, Address: 0x42ce10, Func Offset: 0x1b0
	// Line 1167, Address: 0x42ce28, Func Offset: 0x1c8
	// Line 1169, Address: 0x42ce44, Func Offset: 0x1e4
	// Line 1170, Address: 0x42ce60, Func Offset: 0x200
	// Line 1171, Address: 0x42ce7c, Func Offset: 0x21c
	// Line 1172, Address: 0x42ce94, Func Offset: 0x234
	// Line 1174, Address: 0x42ce9c, Func Offset: 0x23c
	// Line 1172, Address: 0x42cea0, Func Offset: 0x240
	// Line 1176, Address: 0x42cea4, Func Offset: 0x244
	// Line 1178, Address: 0x42cedc, Func Offset: 0x27c
	// Line 1182, Address: 0x42cee0, Func Offset: 0x280
	// Line 1183, Address: 0x42ceec, Func Offset: 0x28c
	// Line 1182, Address: 0x42cef0, Func Offset: 0x290
	// Line 1184, Address: 0x42cef4, Func Offset: 0x294
	// Line 1186, Address: 0x42cefc, Func Offset: 0x29c
	// Line 1187, Address: 0x42cf0c, Func Offset: 0x2ac
	// Line 1196, Address: 0x42cf10, Func Offset: 0x2b0
	// Line 1188, Address: 0x42cf14, Func Offset: 0x2b4
	// Line 1192, Address: 0x42cf18, Func Offset: 0x2b8
	// Line 1193, Address: 0x42cf1c, Func Offset: 0x2bc
	// Line 1196, Address: 0x42cf24, Func Offset: 0x2c4
	// Line 1193, Address: 0x42cf28, Func Offset: 0x2c8
	// Line 1196, Address: 0x42cf2c, Func Offset: 0x2cc
	// Line 1192, Address: 0x42cf30, Func Offset: 0x2d0
	// Line 1193, Address: 0x42cf34, Func Offset: 0x2d4
	// Line 1196, Address: 0x42cf38, Func Offset: 0x2d8
	// Line 1197, Address: 0x42cf58, Func Offset: 0x2f8
	// Line 1198, Address: 0x42cf8c, Func Offset: 0x32c
	// Line 1199, Address: 0x42cfbc, Func Offset: 0x35c
	// Line 1200, Address: 0x42cfec, Func Offset: 0x38c
	// Line 1205, Address: 0x42d01c, Func Offset: 0x3bc
	// Line 1200, Address: 0x42d020, Func Offset: 0x3c0
	// Line 1205, Address: 0x42d024, Func Offset: 0x3c4
	// Line 1206, Address: 0x42d030, Func Offset: 0x3d0
	// Line 1207, Address: 0x42d040, Func Offset: 0x3e0
	// Line 1208, Address: 0x42d050, Func Offset: 0x3f0
	// Line 1211, Address: 0x42d060, Func Offset: 0x400
	// Line 1212, Address: 0x42d070, Func Offset: 0x410
	// Line 1213, Address: 0x42d080, Func Offset: 0x420
	// Line 1214, Address: 0x42d090, Func Offset: 0x430
	// Line 1218, Address: 0x42d0a0, Func Offset: 0x440
	// Line 1222, Address: 0x42d0cc, Func Offset: 0x46c
	// Line 1228, Address: 0x42d0d0, Func Offset: 0x470
	// Line 1222, Address: 0x42d0d4, Func Offset: 0x474
	// Line 1228, Address: 0x42d0d8, Func Offset: 0x478
	// Line 1222, Address: 0x42d0e0, Func Offset: 0x480
	// Line 1228, Address: 0x42d0ec, Func Offset: 0x48c
	// Line 1222, Address: 0x42d0f8, Func Offset: 0x498
	// Line 1228, Address: 0x42d0fc, Func Offset: 0x49c
	// Line 1222, Address: 0x42d108, Func Offset: 0x4a8
	// Line 1228, Address: 0x42d10c, Func Offset: 0x4ac
	// Line 1229, Address: 0x42d354, Func Offset: 0x6f4
	// Line 1228, Address: 0x42d358, Func Offset: 0x6f8
	// Line 1229, Address: 0x42d35c, Func Offset: 0x6fc
	// Line 1228, Address: 0x42d360, Func Offset: 0x700
	// Line 1229, Address: 0x42d394, Func Offset: 0x734
	// Line 1231, Address: 0x42d3b8, Func Offset: 0x758
	// Line 1229, Address: 0x42d3f4, Func Offset: 0x794
	// Line 1231, Address: 0x42d3f8, Func Offset: 0x798
	// Line 1230, Address: 0x42d40c, Func Offset: 0x7ac
	// Line 1231, Address: 0x42d410, Func Offset: 0x7b0
	// Line 1230, Address: 0x42d414, Func Offset: 0x7b4
	// Line 1231, Address: 0x42d418, Func Offset: 0x7b8
	// Line 1230, Address: 0x42d430, Func Offset: 0x7d0
	// Line 1231, Address: 0x42d434, Func Offset: 0x7d4
	// Line 1230, Address: 0x42d43c, Func Offset: 0x7dc
	// Line 1231, Address: 0x42d440, Func Offset: 0x7e0
	// Line 1230, Address: 0x42d450, Func Offset: 0x7f0
	// Line 1231, Address: 0x42d454, Func Offset: 0x7f4
	// Line 1230, Address: 0x42d46c, Func Offset: 0x80c
	// Line 1231, Address: 0x42d470, Func Offset: 0x810
	// Line 1230, Address: 0x42d484, Func Offset: 0x824
	// Line 1231, Address: 0x42d488, Func Offset: 0x828
	// Line 1229, Address: 0x42d48c, Func Offset: 0x82c
	// Line 1231, Address: 0x42d490, Func Offset: 0x830
	// Line 1230, Address: 0x42d498, Func Offset: 0x838
	// Line 1231, Address: 0x42d49c, Func Offset: 0x83c
	// Line 1230, Address: 0x42d4ac, Func Offset: 0x84c
	// Line 1231, Address: 0x42d4b0, Func Offset: 0x850
	// Line 1230, Address: 0x42d4c0, Func Offset: 0x860
	// Line 1231, Address: 0x42d4c4, Func Offset: 0x864
	// Line 1230, Address: 0x42d4d4, Func Offset: 0x874
	// Line 1231, Address: 0x42d4d8, Func Offset: 0x878
	// Line 1230, Address: 0x42d504, Func Offset: 0x8a4
	// Line 1231, Address: 0x42d508, Func Offset: 0x8a8
	// Line 1230, Address: 0x42d580, Func Offset: 0x920
	// Line 1231, Address: 0x42d584, Func Offset: 0x924
	// Line 1230, Address: 0x42d58c, Func Offset: 0x92c
	// Line 1231, Address: 0x42d590, Func Offset: 0x930
	// Line 1230, Address: 0x42d5e8, Func Offset: 0x988
	// Line 1231, Address: 0x42d5ec, Func Offset: 0x98c
	// Line 1230, Address: 0x42d5f0, Func Offset: 0x990
	// Line 1231, Address: 0x42d5f4, Func Offset: 0x994
	// Line 1230, Address: 0x42d708, Func Offset: 0xaa8
	// Line 1231, Address: 0x42d70c, Func Offset: 0xaac
	// Line 1230, Address: 0x42d710, Func Offset: 0xab0
	// Line 1231, Address: 0x42d714, Func Offset: 0xab4
	// Line 1234, Address: 0x42d7dc, Func Offset: 0xb7c
	// Line 1231, Address: 0x42d7e0, Func Offset: 0xb80
	// Line 1234, Address: 0x42d7e4, Func Offset: 0xb84
	// Line 1231, Address: 0x42d7e8, Func Offset: 0xb88
	// Line 1234, Address: 0x42d7ec, Func Offset: 0xb8c
	// Line 1235, Address: 0x42d7f4, Func Offset: 0xb94
	// Line 1236, Address: 0x42d800, Func Offset: 0xba0
	// Line 1238, Address: 0x42d820, Func Offset: 0xbc0
	// Line 1239, Address: 0x42d830, Func Offset: 0xbd0
	// Line 1240, Address: 0x42d840, Func Offset: 0xbe0
	// Line 1241, Address: 0x42d850, Func Offset: 0xbf0
	// Line 1251, Address: 0x42d860, Func Offset: 0xc00
	// Line 1254, Address: 0x42d868, Func Offset: 0xc08
	// Line 1267, Address: 0x42d870, Func Offset: 0xc10
	// Line 1254, Address: 0x42d878, Func Offset: 0xc18
	// Line 1267, Address: 0x42d880, Func Offset: 0xc20
	// Line 1254, Address: 0x42d884, Func Offset: 0xc24
	// Line 1267, Address: 0x42d888, Func Offset: 0xc28
	// Line 1254, Address: 0x42d894, Func Offset: 0xc34
	// Line 1267, Address: 0x42d898, Func Offset: 0xc38
	// Line 1254, Address: 0x42d8a4, Func Offset: 0xc44
	// Line 1267, Address: 0x42d8a8, Func Offset: 0xc48
	// Line 1268, Address: 0x42daf0, Func Offset: 0xe90
	// Line 1267, Address: 0x42daf4, Func Offset: 0xe94
	// Line 1268, Address: 0x42daf8, Func Offset: 0xe98
	// Line 1267, Address: 0x42dafc, Func Offset: 0xe9c
	// Line 1268, Address: 0x42db30, Func Offset: 0xed0
	// Line 1270, Address: 0x42db54, Func Offset: 0xef4
	// Line 1268, Address: 0x42db90, Func Offset: 0xf30
	// Line 1270, Address: 0x42db94, Func Offset: 0xf34
	// Line 1269, Address: 0x42dba8, Func Offset: 0xf48
	// Line 1270, Address: 0x42dbac, Func Offset: 0xf4c
	// Line 1269, Address: 0x42dbb0, Func Offset: 0xf50
	// Line 1270, Address: 0x42dbb4, Func Offset: 0xf54
	// Line 1269, Address: 0x42dbcc, Func Offset: 0xf6c
	// Line 1270, Address: 0x42dbd0, Func Offset: 0xf70
	// Line 1269, Address: 0x42dbd8, Func Offset: 0xf78
	// Line 1270, Address: 0x42dbdc, Func Offset: 0xf7c
	// Line 1269, Address: 0x42dbec, Func Offset: 0xf8c
	// Line 1270, Address: 0x42dbf0, Func Offset: 0xf90
	// Line 1269, Address: 0x42dc08, Func Offset: 0xfa8
	// Line 1270, Address: 0x42dc0c, Func Offset: 0xfac
	// Line 1269, Address: 0x42dc20, Func Offset: 0xfc0
	// Line 1270, Address: 0x42dc24, Func Offset: 0xfc4
	// Line 1268, Address: 0x42dc28, Func Offset: 0xfc8
	// Line 1270, Address: 0x42dc2c, Func Offset: 0xfcc
	// Line 1269, Address: 0x42dc34, Func Offset: 0xfd4
	// Line 1270, Address: 0x42dc38, Func Offset: 0xfd8
	// Line 1269, Address: 0x42dc48, Func Offset: 0xfe8
	// Line 1270, Address: 0x42dc4c, Func Offset: 0xfec
	// Line 1269, Address: 0x42dc5c, Func Offset: 0xffc
	// Line 1270, Address: 0x42dc60, Func Offset: 0x1000
	// Line 1269, Address: 0x42dc70, Func Offset: 0x1010
	// Line 1270, Address: 0x42dc74, Func Offset: 0x1014
	// Line 1269, Address: 0x42dca0, Func Offset: 0x1040
	// Line 1270, Address: 0x42dca4, Func Offset: 0x1044
	// Line 1269, Address: 0x42dd1c, Func Offset: 0x10bc
	// Line 1270, Address: 0x42dd20, Func Offset: 0x10c0
	// Line 1269, Address: 0x42dd28, Func Offset: 0x10c8
	// Line 1270, Address: 0x42dd2c, Func Offset: 0x10cc
	// Line 1269, Address: 0x42dd84, Func Offset: 0x1124
	// Line 1270, Address: 0x42dd88, Func Offset: 0x1128
	// Line 1269, Address: 0x42dd8c, Func Offset: 0x112c
	// Line 1270, Address: 0x42dd90, Func Offset: 0x1130
	// Line 1269, Address: 0x42dea4, Func Offset: 0x1244
	// Line 1270, Address: 0x42dea8, Func Offset: 0x1248
	// Line 1269, Address: 0x42deac, Func Offset: 0x124c
	// Line 1270, Address: 0x42deb0, Func Offset: 0x1250
	// Line 1273, Address: 0x42df74, Func Offset: 0x1314
	// Line 1270, Address: 0x42df78, Func Offset: 0x1318
	// Line 1273, Address: 0x42df7c, Func Offset: 0x131c
	// Line 1270, Address: 0x42df80, Func Offset: 0x1320
	// Line 1273, Address: 0x42df84, Func Offset: 0x1324
	// Line 1274, Address: 0x42df8c, Func Offset: 0x132c
	// Line 1275, Address: 0x42df98, Func Offset: 0x1338
	// Line 1277, Address: 0x42dfb8, Func Offset: 0x1358
	// Line 1297, Address: 0x42dfc0, Func Offset: 0x1360
	// Line 1299, Address: 0x42dfcc, Func Offset: 0x136c
	// Line 1301, Address: 0x42dfd4, Func Offset: 0x1374
	// Line 1302, Address: 0x42dfe0, Func Offset: 0x1380
	// Line 1303, Address: 0x42dfe4, Func Offset: 0x1384
	// Line 1305, Address: 0x42dfe8, Func Offset: 0x1388
	// Line 1306, Address: 0x42e254, Func Offset: 0x15f4
	// Line 1305, Address: 0x42e258, Func Offset: 0x15f8
	// Line 1306, Address: 0x42e25c, Func Offset: 0x15fc
	// Line 1305, Address: 0x42e260, Func Offset: 0x1600
	// Line 1306, Address: 0x42e294, Func Offset: 0x1634
	// Line 1308, Address: 0x42e2b8, Func Offset: 0x1658
	// Line 1306, Address: 0x42e2f4, Func Offset: 0x1694
	// Line 1308, Address: 0x42e2f8, Func Offset: 0x1698
	// Line 1307, Address: 0x42e314, Func Offset: 0x16b4
	// Line 1308, Address: 0x42e318, Func Offset: 0x16b8
	// Line 1307, Address: 0x42e364, Func Offset: 0x1704
	// Line 1308, Address: 0x42e368, Func Offset: 0x1708
	// Line 1306, Address: 0x42e390, Func Offset: 0x1730
	// Line 1308, Address: 0x42e394, Func Offset: 0x1734
	// Line 1307, Address: 0x42e3a4, Func Offset: 0x1744
	// Line 1308, Address: 0x42e3a8, Func Offset: 0x1748
	// Line 1307, Address: 0x42e3b8, Func Offset: 0x1758
	// Line 1308, Address: 0x42e3bc, Func Offset: 0x175c
	// Line 1307, Address: 0x42e3cc, Func Offset: 0x176c
	// Line 1308, Address: 0x42e3d0, Func Offset: 0x1770
	// Line 1307, Address: 0x42e3e0, Func Offset: 0x1780
	// Line 1308, Address: 0x42e3e4, Func Offset: 0x1784
	// Line 1307, Address: 0x42e3f4, Func Offset: 0x1794
	// Line 1308, Address: 0x42e3f8, Func Offset: 0x1798
	// Line 1307, Address: 0x42e458, Func Offset: 0x17f8
	// Line 1308, Address: 0x42e45c, Func Offset: 0x17fc
	// Line 1307, Address: 0x42e4a0, Func Offset: 0x1840
	// Line 1308, Address: 0x42e4a8, Func Offset: 0x1848
	// Line 1307, Address: 0x42e4b8, Func Offset: 0x1858
	// Line 1308, Address: 0x42e4c0, Func Offset: 0x1860
	// Line 1307, Address: 0x42e540, Func Offset: 0x18e0
	// Line 1308, Address: 0x42e544, Func Offset: 0x18e4
	// Line 1307, Address: 0x42e554, Func Offset: 0x18f4
	// Line 1308, Address: 0x42e564, Func Offset: 0x1904
	// Line 1307, Address: 0x42e56c, Func Offset: 0x190c
	// Line 1308, Address: 0x42e570, Func Offset: 0x1910
	// Line 1311, Address: 0x42e6dc, Func Offset: 0x1a7c
	// Line 1308, Address: 0x42e6e0, Func Offset: 0x1a80
	// Line 1311, Address: 0x42e6e4, Func Offset: 0x1a84
	// Line 1308, Address: 0x42e6e8, Func Offset: 0x1a88
	// Line 1311, Address: 0x42e6ec, Func Offset: 0x1a8c
	// Line 1312, Address: 0x42e6f4, Func Offset: 0x1a94
	// Line 1313, Address: 0x42e700, Func Offset: 0x1aa0
	// Line 1330, Address: 0x42e720, Func Offset: 0x1ac0
	// Line 1331, Address: 0x42e98c, Func Offset: 0x1d2c
	// Line 1330, Address: 0x42e990, Func Offset: 0x1d30
	// Line 1331, Address: 0x42e994, Func Offset: 0x1d34
	// Line 1330, Address: 0x42e998, Func Offset: 0x1d38
	// Line 1331, Address: 0x42e9cc, Func Offset: 0x1d6c
	// Line 1333, Address: 0x42e9f0, Func Offset: 0x1d90
	// Line 1331, Address: 0x42ea2c, Func Offset: 0x1dcc
	// Line 1333, Address: 0x42ea30, Func Offset: 0x1dd0
	// Line 1332, Address: 0x42ea4c, Func Offset: 0x1dec
	// Line 1333, Address: 0x42ea50, Func Offset: 0x1df0
	// Line 1332, Address: 0x42ea9c, Func Offset: 0x1e3c
	// Line 1333, Address: 0x42eaa0, Func Offset: 0x1e40
	// Line 1332, Address: 0x42eab8, Func Offset: 0x1e58
	// Line 1333, Address: 0x42eabc, Func Offset: 0x1e5c
	// Line 1332, Address: 0x42eac4, Func Offset: 0x1e64
	// Line 1333, Address: 0x42eac8, Func Offset: 0x1e68
	// Line 1332, Address: 0x42ead8, Func Offset: 0x1e78
	// Line 1333, Address: 0x42eadc, Func Offset: 0x1e7c
	// Line 1332, Address: 0x42eaec, Func Offset: 0x1e8c
	// Line 1333, Address: 0x42eaf0, Func Offset: 0x1e90
	// Line 1332, Address: 0x42eb00, Func Offset: 0x1ea0
	// Line 1333, Address: 0x42eb04, Func Offset: 0x1ea4
	// Line 1332, Address: 0x42eb28, Func Offset: 0x1ec8
	// Line 1333, Address: 0x42eb2c, Func Offset: 0x1ecc
	// Line 1332, Address: 0x42eb34, Func Offset: 0x1ed4
	// Line 1333, Address: 0x42eb38, Func Offset: 0x1ed8
	// Line 1331, Address: 0x42eb40, Func Offset: 0x1ee0
	// Line 1333, Address: 0x42eb44, Func Offset: 0x1ee4
	// Line 1332, Address: 0x42eb58, Func Offset: 0x1ef8
	// Line 1333, Address: 0x42eb5c, Func Offset: 0x1efc
	// Line 1332, Address: 0x42eb64, Func Offset: 0x1f04
	// Line 1333, Address: 0x42eb68, Func Offset: 0x1f08
	// Line 1332, Address: 0x42ebd8, Func Offset: 0x1f78
	// Line 1333, Address: 0x42ebdc, Func Offset: 0x1f7c
	// Line 1332, Address: 0x42ec78, Func Offset: 0x2018
	// Line 1333, Address: 0x42ec7c, Func Offset: 0x201c
	// Line 1332, Address: 0x42ec80, Func Offset: 0x2020
	// Line 1333, Address: 0x42ec84, Func Offset: 0x2024
	// Line 1332, Address: 0x42ec8c, Func Offset: 0x202c
	// Line 1333, Address: 0x42ec94, Func Offset: 0x2034
	// Line 1332, Address: 0x42ec9c, Func Offset: 0x203c
	// Line 1333, Address: 0x42eca4, Func Offset: 0x2044
	// Line 1336, Address: 0x42ee0c, Func Offset: 0x21ac
	// Line 1333, Address: 0x42ee10, Func Offset: 0x21b0
	// Line 1336, Address: 0x42ee14, Func Offset: 0x21b4
	// Line 1333, Address: 0x42ee18, Func Offset: 0x21b8
	// Line 1336, Address: 0x42ee1c, Func Offset: 0x21bc
	// Line 1337, Address: 0x42ee24, Func Offset: 0x21c4
	// Line 1338, Address: 0x42ee30, Func Offset: 0x21d0
	// Line 1343, Address: 0x42ee50, Func Offset: 0x21f0
	// Line 1344, Address: 0x42ee54, Func Offset: 0x21f4
	// Line 1343, Address: 0x42ee58, Func Offset: 0x21f8
	// Line 1344, Address: 0x42ee5c, Func Offset: 0x21fc
	// Line 1346, Address: 0x42ee70, Func Offset: 0x2210
	// Line 1352, Address: 0x42ee88, Func Offset: 0x2228
	// Line 1118, Address: 0x42eec8, Func Offset: 0x2268
	// Line 1168, Address: 0x42eed0, Func Offset: 0x2270
	// Line 1172, Address: 0x42eedc, Func Offset: 0x227c
	// Line 1174, Address: 0x42eee0, Func Offset: 0x2280
	// Line 1352, Address: 0x42eef0, Func Offset: 0x2290
	// Line 1298, Address: 0x42ef08, Func Offset: 0x22a8
	// Line 1299, Address: 0x42ef0c, Func Offset: 0x22ac
	// Line 1353, Address: 0x42ef18, Func Offset: 0x22b8
	// Func End, Address: 0x42ef74, Func Offset: 0x2314
}

// Im2DRenderQuadAlpha__Fffffffff
// Start address: 0x42ef80
int32 Im2DRenderQuadAlpha(float32 x1, float32 y1, float32 x2, float32 y2, float32 alpha, float32 z, float32 recipCamZ, float32 uvOffset)
{
	RwSky2DVertex vx[4];
	uint8 alphaI;
	// Line 934, Address: 0x42ef80, Func Offset: 0
	// Line 942, Address: 0x42ef84, Func Offset: 0x4
	// Line 947, Address: 0x42efd4, Func Offset: 0x54
	// Line 942, Address: 0x42efd8, Func Offset: 0x58
	// Line 944, Address: 0x42efdc, Func Offset: 0x5c
	// Line 947, Address: 0x42efe0, Func Offset: 0x60
	// Line 945, Address: 0x42efe4, Func Offset: 0x64
	// Line 947, Address: 0x42efe8, Func Offset: 0x68
	// Line 946, Address: 0x42efec, Func Offset: 0x6c
	// Line 947, Address: 0x42eff0, Func Offset: 0x70
	// Line 955, Address: 0x42f020, Func Offset: 0xa0
	// Line 947, Address: 0x42f024, Func Offset: 0xa4
	// Line 955, Address: 0x42f028, Func Offset: 0xa8
	// Line 952, Address: 0x42f02c, Func Offset: 0xac
	// Line 955, Address: 0x42f030, Func Offset: 0xb0
	// Line 948, Address: 0x42f034, Func Offset: 0xb4
	// Line 955, Address: 0x42f038, Func Offset: 0xb8
	// Line 949, Address: 0x42f03c, Func Offset: 0xbc
	// Line 950, Address: 0x42f040, Func Offset: 0xc0
	// Line 953, Address: 0x42f044, Func Offset: 0xc4
	// Line 955, Address: 0x42f048, Func Offset: 0xc8
	// Line 961, Address: 0x42f084, Func Offset: 0x104
	// Line 963, Address: 0x42f08c, Func Offset: 0x10c
	// Line 956, Address: 0x42f09c, Func Offset: 0x11c
	// Line 957, Address: 0x42f0a0, Func Offset: 0x120
	// Line 960, Address: 0x42f0a4, Func Offset: 0x124
	// Line 962, Address: 0x42f0a8, Func Offset: 0x128
	// Line 963, Address: 0x42f0ac, Func Offset: 0x12c
	// Line 971, Address: 0x42f0dc, Func Offset: 0x15c
	// Line 963, Address: 0x42f0e0, Func Offset: 0x160
	// Line 971, Address: 0x42f0e4, Func Offset: 0x164
	// Line 966, Address: 0x42f0e8, Func Offset: 0x168
	// Line 971, Address: 0x42f0ec, Func Offset: 0x16c
	// Line 968, Address: 0x42f0f0, Func Offset: 0x170
	// Line 971, Address: 0x42f0f4, Func Offset: 0x174
	// Line 969, Address: 0x42f0f8, Func Offset: 0x178
	// Line 970, Address: 0x42f0fc, Func Offset: 0x17c
	// Line 964, Address: 0x42f100, Func Offset: 0x180
	// Line 971, Address: 0x42f104, Func Offset: 0x184
	// Line 976, Address: 0x42f134, Func Offset: 0x1b4
	// Line 971, Address: 0x42f140, Func Offset: 0x1c0
	// Line 972, Address: 0x42f144, Func Offset: 0x1c4
	// Line 976, Address: 0x42f148, Func Offset: 0x1c8
	// Line 973, Address: 0x42f14c, Func Offset: 0x1cc
	// Line 976, Address: 0x42f150, Func Offset: 0x1d0
	// Line 979, Address: 0x42f15c, Func Offset: 0x1dc
	// Line 978, Address: 0x42f160, Func Offset: 0x1e0
	// Line 979, Address: 0x42f164, Func Offset: 0x1e4
	// Func End, Address: 0x42f16c, Func Offset: 0x1ec
}

// xCMprep__FP12xCreditsData
// Start address: 0x42f170
void xCMprep(xCreditsData* data)
{
	xCMheader* hdr;
	int8* dp;
	xCMcredits* cp;
	xCMpreset* pp;
	xCMhunk* hp;
	xCMpreset* preset;
	// Line 226, Address: 0x42f170, Func Offset: 0
	// Line 229, Address: 0x42f184, Func Offset: 0x14
	// Line 228, Address: 0x42f188, Func Offset: 0x18
	// Line 229, Address: 0x42f18c, Func Offset: 0x1c
	// Line 266, Address: 0x42f19c, Func Offset: 0x2c
	// Line 235, Address: 0x42f1a0, Func Offset: 0x30
	// Line 266, Address: 0x42f1a4, Func Offset: 0x34
	// Line 235, Address: 0x42f1a8, Func Offset: 0x38
	// Line 268, Address: 0x42f1ac, Func Offset: 0x3c
	// Line 235, Address: 0x42f1b0, Func Offset: 0x40
	// Line 268, Address: 0x42f1b4, Func Offset: 0x44
	// Line 266, Address: 0x42f1bc, Func Offset: 0x4c
	// Line 273, Address: 0x42f1c0, Func Offset: 0x50
	// Line 235, Address: 0x42f1cc, Func Offset: 0x5c
	// Line 232, Address: 0x42f1d0, Func Offset: 0x60
	// Line 231, Address: 0x42f1d4, Func Offset: 0x64
	// Line 233, Address: 0x42f1d8, Func Offset: 0x68
	// Line 232, Address: 0x42f1dc, Func Offset: 0x6c
	// Line 233, Address: 0x42f1f4, Func Offset: 0x84
	// Line 234, Address: 0x42f208, Func Offset: 0x98
	// Line 235, Address: 0x42f224, Func Offset: 0xb4
	// Line 243, Address: 0x42f258, Func Offset: 0xe8
	// Line 245, Address: 0x42f26c, Func Offset: 0xfc
	// Line 246, Address: 0x42f274, Func Offset: 0x104
	// Line 247, Address: 0x42f284, Func Offset: 0x114
	// Line 248, Address: 0x42f28c, Func Offset: 0x11c
	// Line 249, Address: 0x42f290, Func Offset: 0x120
	// Line 251, Address: 0x42f29c, Func Offset: 0x12c
	// Line 252, Address: 0x42f2a4, Func Offset: 0x134
	// Line 253, Address: 0x42f2b4, Func Offset: 0x144
	// Line 254, Address: 0x42f2bc, Func Offset: 0x14c
	// Line 256, Address: 0x42f2c0, Func Offset: 0x150
	// Line 261, Address: 0x42f2c8, Func Offset: 0x158
	// Line 263, Address: 0x42f2d8, Func Offset: 0x168
	// Line 266, Address: 0x42f2e4, Func Offset: 0x174
	// Line 271, Address: 0x42f2f4, Func Offset: 0x184
	// Line 273, Address: 0x42f300, Func Offset: 0x190
	// Line 281, Address: 0x42f308, Func Offset: 0x198
	// Line 282, Address: 0x42f30c, Func Offset: 0x19c
	// Line 281, Address: 0x42f310, Func Offset: 0x1a0
	// Line 282, Address: 0x42f314, Func Offset: 0x1a4
	// Line 284, Address: 0x42f328, Func Offset: 0x1b8
	// Line 283, Address: 0x42f32c, Func Offset: 0x1bc
	// Line 284, Address: 0x42f330, Func Offset: 0x1c0
	// Line 285, Address: 0x42f340, Func Offset: 0x1d0
	// Line 286, Address: 0x42f344, Func Offset: 0x1d4
	// Line 285, Address: 0x42f348, Func Offset: 0x1d8
	// Line 286, Address: 0x42f34c, Func Offset: 0x1dc
	// Line 285, Address: 0x42f354, Func Offset: 0x1e4
	// Line 287, Address: 0x42f358, Func Offset: 0x1e8
	// Line 285, Address: 0x42f35c, Func Offset: 0x1ec
	// Line 287, Address: 0x42f360, Func Offset: 0x1f0
	// Line 288, Address: 0x42f364, Func Offset: 0x1f4
	// Line 268, Address: 0x42f36c, Func Offset: 0x1fc
	// Line 288, Address: 0x42f378, Func Offset: 0x208
	// Func End, Address: 0x42f380, Func Offset: 0x210
}

