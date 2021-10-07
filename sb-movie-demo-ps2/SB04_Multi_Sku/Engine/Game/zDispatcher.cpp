



int16 zDispatcher_GetCurrentWorld();
uint32 zDispatcher_FindNextValidWorld(uint32 sceneID);
uint32 zDispatcher_FindTaskPointer(uint32 sceneID, int32 task);
void zDispatcher_FindWorldTask(uint32 sceneID, int32& world, int32& task);
void ZDSP_elcb_event(xBase* from, xBase* xb, uint32 toEvent, float32* toParam, xBase* toParamWidget, uint32 toParamWidgetID);
int32 ZDSP_doCommand(st_ZDISPATCH_CONTEXT* cmdCtxt);
void zDispatcher_Load(st_ZDISPATCH_DATA* dspdata, xSerial* s);
void zDispatcher_Save(st_ZDISPATCH_DATA* dspdata, xSerial* s);
void zDispatcher_InitDep();
void zDispatcher_Init(st_ZDISPATCH_DATA* dspdata, xBaseAsset* bass);
st_ZDISPATCH_DATA* zDispatcher_getInst(st_ZDISPATCH_DATA* pool, int32 idx);
st_ZDISPATCH_DATA* zDispatcher_memPool(int32 cnt);
void zDispatcher_sceneFinish();
void zDispatcher_scenePrepare();
void zDispatcher_Shutdown();
void zDispatcher_Startup();
void zDispatcherParseINI(xIniFile* ini);

// zDispatcher_GetCurrentWorld__Fv
// Start address: 0x37f020
int16 zDispatcher_GetCurrentWorld()
{
	// Line 1931, Address: 0x37f020, Func Offset: 0
	// Func End, Address: 0x37f028, Func Offset: 0x8
}

// zDispatcher_FindNextValidWorld__FUi
// Start address: 0x37f030
uint32 zDispatcher_FindNextValidWorld(uint32 sceneID)
{
	int8 sceneName[4];
	int32 worldIndex;
	int32 i;
	int32 j;
	int32 newIndex;
	// Line 1881, Address: 0x37f030, Func Offset: 0
	// Line 1889, Address: 0x37f034, Func Offset: 0x4
	// Line 1881, Address: 0x37f038, Func Offset: 0x8
	// Line 1889, Address: 0x37f03c, Func Offset: 0xc
	// Line 1881, Address: 0x37f040, Func Offset: 0x10
	// Line 1889, Address: 0x37f044, Func Offset: 0x14
	// Line 1881, Address: 0x37f04c, Func Offset: 0x1c
	// Line 1883, Address: 0x37f050, Func Offset: 0x20
	// Line 1881, Address: 0x37f054, Func Offset: 0x24
	// Line 1883, Address: 0x37f058, Func Offset: 0x28
	// Line 1888, Address: 0x37f05c, Func Offset: 0x2c
	// Line 1884, Address: 0x37f060, Func Offset: 0x30
	// Line 1886, Address: 0x37f064, Func Offset: 0x34
	// Line 1884, Address: 0x37f068, Func Offset: 0x38
	// Line 1885, Address: 0x37f06c, Func Offset: 0x3c
	// Line 1891, Address: 0x37f074, Func Offset: 0x44
	// Line 1900, Address: 0x37f078, Func Offset: 0x48
	// Line 1891, Address: 0x37f07c, Func Offset: 0x4c
	// Line 1893, Address: 0x37f088, Func Offset: 0x58
	// Line 1896, Address: 0x37f094, Func Offset: 0x64
	// Line 1898, Address: 0x37f09c, Func Offset: 0x6c
	// Line 1900, Address: 0x37f0b0, Func Offset: 0x80
	// Line 1902, Address: 0x37f0b8, Func Offset: 0x88
	// Line 1905, Address: 0x37f0c8, Func Offset: 0x98
	// Line 1906, Address: 0x37f0d4, Func Offset: 0xa4
	// Line 1908, Address: 0x37f0e0, Func Offset: 0xb0
	// Line 1911, Address: 0x37f0f0, Func Offset: 0xc0
	// Line 1908, Address: 0x37f0f4, Func Offset: 0xc4
	// Line 1911, Address: 0x37f100, Func Offset: 0xd0
	// Line 1913, Address: 0x37f13c, Func Offset: 0x10c
	// Line 1916, Address: 0x37f140, Func Offset: 0x110
	// Line 1917, Address: 0x37f14c, Func Offset: 0x11c
	// Line 1919, Address: 0x37f150, Func Offset: 0x120
	// Line 1921, Address: 0x37f158, Func Offset: 0x128
	// Line 1924, Address: 0x37f164, Func Offset: 0x134
	// Line 1921, Address: 0x37f168, Func Offset: 0x138
	// Line 1924, Address: 0x37f16c, Func Offset: 0x13c
	// Line 1921, Address: 0x37f178, Func Offset: 0x148
	// Line 1924, Address: 0x37f17c, Func Offset: 0x14c
	// Line 1926, Address: 0x37f1cc, Func Offset: 0x19c
	// Func End, Address: 0x37f1e4, Func Offset: 0x1b4
}

// zDispatcher_FindTaskPointer__FUii
// Start address: 0x37f1f0
uint32 zDispatcher_FindTaskPointer(uint32 sceneID, int32 task)
{
	int8 sceneName[4];
	int32 i;
	int32 j;
	// Line 1853, Address: 0x37f1f0, Func Offset: 0
	// Line 1855, Address: 0x37f1f4, Func Offset: 0x4
	// Line 1856, Address: 0x37f1fc, Func Offset: 0xc
	// Line 1857, Address: 0x37f200, Func Offset: 0x10
	// Line 1863, Address: 0x37f204, Func Offset: 0x14
	// Line 1858, Address: 0x37f208, Func Offset: 0x18
	// Line 1863, Address: 0x37f20c, Func Offset: 0x1c
	// Line 1856, Address: 0x37f210, Func Offset: 0x20
	// Line 1863, Address: 0x37f214, Func Offset: 0x24
	// Line 1857, Address: 0x37f218, Func Offset: 0x28
	// Line 1865, Address: 0x37f21c, Func Offset: 0x2c
	// Line 1867, Address: 0x37f228, Func Offset: 0x38
	// Line 1869, Address: 0x37f234, Func Offset: 0x44
	// Line 1873, Address: 0x37f260, Func Offset: 0x70
	// Line 1874, Address: 0x37f270, Func Offset: 0x80
	// Line 1876, Address: 0x37f280, Func Offset: 0x90
	// Line 1877, Address: 0x37f284, Func Offset: 0x94
	// Func End, Address: 0x37f28c, Func Offset: 0x9c
}

// zDispatcher_FindWorldTask__FUiRiRi
// Start address: 0x37f290
void zDispatcher_FindWorldTask(uint32 sceneID, int32& world, int32& task)
{
	int8 sceneName[4];
	int32 i;
	int32 j;
	// Line 1826, Address: 0x37f290, Func Offset: 0
	// Line 1828, Address: 0x37f294, Func Offset: 0x4
	// Line 1838, Address: 0x37f29c, Func Offset: 0xc
	// Line 1829, Address: 0x37f2a0, Func Offset: 0x10
	// Line 1834, Address: 0x37f2a4, Func Offset: 0x14
	// Line 1829, Address: 0x37f2a8, Func Offset: 0x18
	// Line 1838, Address: 0x37f2ac, Func Offset: 0x1c
	// Line 1830, Address: 0x37f2b0, Func Offset: 0x20
	// Line 1831, Address: 0x37f2b4, Func Offset: 0x24
	// Line 1830, Address: 0x37f2b8, Func Offset: 0x28
	// Line 1838, Address: 0x37f2bc, Func Offset: 0x2c
	// Line 1835, Address: 0x37f2c0, Func Offset: 0x30
	// Line 1840, Address: 0x37f2c4, Func Offset: 0x34
	// Line 1842, Address: 0x37f2d0, Func Offset: 0x40
	// Line 1844, Address: 0x37f2dc, Func Offset: 0x4c
	// Line 1845, Address: 0x37f2e0, Func Offset: 0x50
	// Line 1844, Address: 0x37f2e4, Func Offset: 0x54
	// Line 1846, Address: 0x37f2e8, Func Offset: 0x58
	// Line 1848, Address: 0x37f2f0, Func Offset: 0x60
	// Line 1849, Address: 0x37f300, Func Offset: 0x70
	// Line 1850, Address: 0x37f310, Func Offset: 0x80
	// Func End, Address: 0x37f318, Func Offset: 0x88
}

// ZDSP_elcb_event__FP5xBaseP5xBaseUiPCfP5xBaseUi
// Start address: 0x37f320
void ZDSP_elcb_event(xBase* from, xBase* xb, uint32 toEvent, float32* toParam, xBase* toParamWidget, uint32 toParamWidgetID)
{
	int16 currentTask'665;
	int16 currentWorld'664;
	st_ZDISPATCH_DATA* dspdata;
	int32 old_vibration;
	pointer_asset* pointerAsset;
	zFMVFile* file;
	float32 pointer;
	zCar* car;
	zCar* car;
	zUITextAsset* uia;
	xVec3 start;
	xVec3 end;
	xPortalAsset portalAsset;
	_zPortal portal;
	// Line 954, Address: 0x37f320, Func Offset: 0
	// Line 963, Address: 0x37f324, Func Offset: 0x4
	// Line 954, Address: 0x37f328, Func Offset: 0x8
	// Line 956, Address: 0x37f34c, Func Offset: 0x2c
	// Line 954, Address: 0x37f350, Func Offset: 0x30
	// Line 963, Address: 0x37f358, Func Offset: 0x38
	// Line 966, Address: 0x37f83c, Func Offset: 0x51c
	// Line 967, Address: 0x37f888, Func Offset: 0x568
	// Line 974, Address: 0x37f890, Func Offset: 0x570
	// Line 975, Address: 0x37f89c, Func Offset: 0x57c
	// Line 978, Address: 0x37f8a4, Func Offset: 0x584
	// Line 979, Address: 0x37f8b8, Func Offset: 0x598
	// Line 980, Address: 0x37f8c4, Func Offset: 0x5a4
	// Line 983, Address: 0x37f8cc, Func Offset: 0x5ac
	// Line 984, Address: 0x37f8d4, Func Offset: 0x5b4
	// Line 993, Address: 0x37f8dc, Func Offset: 0x5bc
	// Line 995, Address: 0x37f910, Func Offset: 0x5f0
	// Line 997, Address: 0x37f918, Func Offset: 0x5f8
	// Line 999, Address: 0x37f94c, Func Offset: 0x62c
	// Line 1001, Address: 0x37f954, Func Offset: 0x634
	// Line 1003, Address: 0x37f98c, Func Offset: 0x66c
	// Line 1005, Address: 0x37f994, Func Offset: 0x674
	// Line 1007, Address: 0x37f9cc, Func Offset: 0x6ac
	// Line 1011, Address: 0x37f9d4, Func Offset: 0x6b4
	// Line 1012, Address: 0x37f9d8, Func Offset: 0x6b8
	// Line 1011, Address: 0x37f9dc, Func Offset: 0x6bc
	// Line 1012, Address: 0x37f9e0, Func Offset: 0x6c0
	// Line 1013, Address: 0x37fa14, Func Offset: 0x6f4
	// Line 1014, Address: 0x37fa24, Func Offset: 0x704
	// Line 1016, Address: 0x37fa90, Func Offset: 0x770
	// Line 1018, Address: 0x37fa98, Func Offset: 0x778
	// Line 1019, Address: 0x37facc, Func Offset: 0x7ac
	// Line 1022, Address: 0x37fad4, Func Offset: 0x7b4
	// Line 1023, Address: 0x37fb0c, Func Offset: 0x7ec
	// Line 1025, Address: 0x37fb14, Func Offset: 0x7f4
	// Line 1026, Address: 0x37fb48, Func Offset: 0x828
	// Line 1029, Address: 0x37fb50, Func Offset: 0x830
	// Line 1031, Address: 0x37fb84, Func Offset: 0x864
	// Line 1033, Address: 0x37fb8c, Func Offset: 0x86c
	// Line 1035, Address: 0x37fbc4, Func Offset: 0x8a4
	// Line 1038, Address: 0x37fbd0, Func Offset: 0x8b0
	// Line 1039, Address: 0x37fbf8, Func Offset: 0x8d8
	// Line 1041, Address: 0x37fc04, Func Offset: 0x8e4
	// Line 1042, Address: 0x37fc2c, Func Offset: 0x90c
	// Line 1045, Address: 0x37fc38, Func Offset: 0x918
	// Line 1046, Address: 0x37fc60, Func Offset: 0x940
	// Line 1048, Address: 0x37fc6c, Func Offset: 0x94c
	// Line 1049, Address: 0x37fc94, Func Offset: 0x974
	// Line 1052, Address: 0x37fca0, Func Offset: 0x980
	// Line 1053, Address: 0x37fcc8, Func Offset: 0x9a8
	// Line 1055, Address: 0x37fcd4, Func Offset: 0x9b4
	// Line 1057, Address: 0x37fcfc, Func Offset: 0x9dc
	// Line 1063, Address: 0x37fd04, Func Offset: 0x9e4
	// Line 1064, Address: 0x37fd18, Func Offset: 0x9f8
	// Line 1068, Address: 0x37fd20, Func Offset: 0xa00
	// Line 1069, Address: 0x37fd2c, Func Offset: 0xa0c
	// Line 1071, Address: 0x37fd34, Func Offset: 0xa14
	// Line 1072, Address: 0x37fd40, Func Offset: 0xa20
	// Line 1143, Address: 0x37fd48, Func Offset: 0xa28
	// Line 1144, Address: 0x37fd54, Func Offset: 0xa34
	// Line 1147, Address: 0x37fd5c, Func Offset: 0xa3c
	// Line 1148, Address: 0x37fd6c, Func Offset: 0xa4c
	// Line 1149, Address: 0x37fd74, Func Offset: 0xa54
	// Line 1152, Address: 0x37fd7c, Func Offset: 0xa5c
	// Line 1153, Address: 0x37fd84, Func Offset: 0xa64
	// Line 1157, Address: 0x37fd8c, Func Offset: 0xa6c
	// Line 1158, Address: 0x37fd90, Func Offset: 0xa70
	// Line 1159, Address: 0x37fd9c, Func Offset: 0xa7c
	// Line 1175, Address: 0x37fda4, Func Offset: 0xa84
	// Line 1179, Address: 0x37fdb0, Func Offset: 0xa90
	// Line 1208, Address: 0x37fdb8, Func Offset: 0xa98
	// Line 1216, Address: 0x37fe00, Func Offset: 0xae0
	// Line 1222, Address: 0x37fe20, Func Offset: 0xb00
	// Line 1226, Address: 0x37fe30, Func Offset: 0xb10
	// Line 1230, Address: 0x37fe38, Func Offset: 0xb18
	// Line 1231, Address: 0x37fe4c, Func Offset: 0xb2c
	// Line 1233, Address: 0x37fe54, Func Offset: 0xb34
	// Line 1234, Address: 0x37fe64, Func Offset: 0xb44
	// Line 1238, Address: 0x37fe6c, Func Offset: 0xb4c
	// Line 1240, Address: 0x37fe88, Func Offset: 0xb68
	// Line 1293, Address: 0x37fe90, Func Offset: 0xb70
	// Line 1294, Address: 0x37fedc, Func Offset: 0xbbc
	// Line 1298, Address: 0x37fee4, Func Offset: 0xbc4
	// Line 1310, Address: 0x37ff0c, Func Offset: 0xbec
	// Line 1313, Address: 0x37ff14, Func Offset: 0xbf4
	// Line 1314, Address: 0x37ff20, Func Offset: 0xc00
	// Line 1315, Address: 0x37ff28, Func Offset: 0xc08
	// Line 1317, Address: 0x37ff30, Func Offset: 0xc10
	// Line 1318, Address: 0x37ff3c, Func Offset: 0xc1c
	// Line 1353, Address: 0x37ff44, Func Offset: 0xc24
	// Line 1356, Address: 0x37ff50, Func Offset: 0xc30
	// Line 1359, Address: 0x37ff58, Func Offset: 0xc38
	// Line 1360, Address: 0x37ff7c, Func Offset: 0xc5c
	// Line 1379, Address: 0x37ff84, Func Offset: 0xc64
	// Line 1383, Address: 0x37ffa4, Func Offset: 0xc84
	// Line 1385, Address: 0x37ffb4, Func Offset: 0xc94
	// Line 1386, Address: 0x37ffb8, Func Offset: 0xc98
	// Line 1387, Address: 0x37ffc8, Func Offset: 0xca8
	// Line 1394, Address: 0x37ffe4, Func Offset: 0xcc4
	// Line 1403, Address: 0x380000, Func Offset: 0xce0
	// Line 1404, Address: 0x38002c, Func Offset: 0xd0c
	// Line 1428, Address: 0x380048, Func Offset: 0xd28
	// Line 1429, Address: 0x38005c, Func Offset: 0xd3c
	// Line 1432, Address: 0x38009c, Func Offset: 0xd7c
	// Line 1448, Address: 0x3800a4, Func Offset: 0xd84
	// Line 1461, Address: 0x3800a8, Func Offset: 0xd88
	// Line 1448, Address: 0x3800ac, Func Offset: 0xd8c
	// Line 1461, Address: 0x3800b0, Func Offset: 0xd90
	// Line 1462, Address: 0x3800b8, Func Offset: 0xd98
	// Line 1461, Address: 0x3800bc, Func Offset: 0xd9c
	// Line 1462, Address: 0x3800c0, Func Offset: 0xda0
	// Line 1468, Address: 0x38012c, Func Offset: 0xe0c
	// Line 1469, Address: 0x380134, Func Offset: 0xe14
	// Line 1470, Address: 0x380148, Func Offset: 0xe28
	// Line 1472, Address: 0x380158, Func Offset: 0xe38
	// Line 1473, Address: 0x380170, Func Offset: 0xe50
	// Line 1475, Address: 0x380180, Func Offset: 0xe60
	// Line 1478, Address: 0x38018c, Func Offset: 0xe6c
	// Line 1482, Address: 0x380194, Func Offset: 0xe74
	// Line 1512, Address: 0x38019c, Func Offset: 0xe7c
	// Line 1513, Address: 0x3801a8, Func Offset: 0xe88
	// Line 1516, Address: 0x3801b0, Func Offset: 0xe90
	// Line 1517, Address: 0x3801b8, Func Offset: 0xe98
	// Line 1520, Address: 0x3801c0, Func Offset: 0xea0
	// Line 1521, Address: 0x3801f4, Func Offset: 0xed4
	// Line 1525, Address: 0x3801fc, Func Offset: 0xedc
	// Line 1526, Address: 0x3802f0, Func Offset: 0xfd0
	// Line 1528, Address: 0x3802f8, Func Offset: 0xfd8
	// Line 1530, Address: 0x380308, Func Offset: 0xfe8
	// Line 1532, Address: 0x380310, Func Offset: 0xff0
	// Line 1536, Address: 0x380318, Func Offset: 0xff8
	// Line 1537, Address: 0x380320, Func Offset: 0x1000
	// Line 1539, Address: 0x380338, Func Offset: 0x1018
	// Line 1543, Address: 0x38033c, Func Offset: 0x101c
	// Line 1547, Address: 0x380344, Func Offset: 0x1024
	// Line 1548, Address: 0x38034c, Func Offset: 0x102c
	// Line 1550, Address: 0x380364, Func Offset: 0x1044
	// Line 1553, Address: 0x380368, Func Offset: 0x1048
	// Line 1557, Address: 0x380370, Func Offset: 0x1050
	// Line 1558, Address: 0x380394, Func Offset: 0x1074
	// Line 1562, Address: 0x38039c, Func Offset: 0x107c
	// Line 1563, Address: 0x3803c0, Func Offset: 0x10a0
	// Line 1566, Address: 0x3803c8, Func Offset: 0x10a8
	// Line 1568, Address: 0x3803d0, Func Offset: 0x10b0
	// Line 1572, Address: 0x3803dc, Func Offset: 0x10bc
	// Line 1574, Address: 0x3803e4, Func Offset: 0x10c4
	// Line 1575, Address: 0x3803ec, Func Offset: 0x10cc
	// Line 1576, Address: 0x3803f0, Func Offset: 0x10d0
	// Line 1574, Address: 0x3803f4, Func Offset: 0x10d4
	// Line 1575, Address: 0x3803fc, Func Offset: 0x10dc
	// Line 1576, Address: 0x380408, Func Offset: 0x10e8
	// Line 1578, Address: 0x380414, Func Offset: 0x10f4
	// Line 1579, Address: 0x380428, Func Offset: 0x1108
	// Line 1580, Address: 0x380434, Func Offset: 0x1114
	// Line 1594, Address: 0x380440, Func Offset: 0x1120
	// Line 1596, Address: 0x380470, Func Offset: 0x1150
	// Line 1603, Address: 0x380478, Func Offset: 0x1158
	// Line 1604, Address: 0x380484, Func Offset: 0x1164
	// Line 1607, Address: 0x38048c, Func Offset: 0x116c
	// Line 1608, Address: 0x380494, Func Offset: 0x1174
	// Line 1611, Address: 0x38049c, Func Offset: 0x117c
	// Line 1612, Address: 0x3804b0, Func Offset: 0x1190
	// Line 1615, Address: 0x3804b8, Func Offset: 0x1198
	// Line 1616, Address: 0x3804c4, Func Offset: 0x11a4
	// Line 1619, Address: 0x3804cc, Func Offset: 0x11ac
	// Line 1620, Address: 0x3804d8, Func Offset: 0x11b8
	// Line 1623, Address: 0x3804e0, Func Offset: 0x11c0
	// Line 1624, Address: 0x3804f0, Func Offset: 0x11d0
	// Line 1625, Address: 0x3804f8, Func Offset: 0x11d8
	// Line 1628, Address: 0x380500, Func Offset: 0x11e0
	// Line 1629, Address: 0x38052c, Func Offset: 0x120c
	// Line 1632, Address: 0x380534, Func Offset: 0x1214
	// Line 1633, Address: 0x380660, Func Offset: 0x1340
	// Line 1644, Address: 0x380670, Func Offset: 0x1350
	// Line 1645, Address: 0x380678, Func Offset: 0x1358
	// Line 1646, Address: 0x38067c, Func Offset: 0x135c
	// Line 1645, Address: 0x380680, Func Offset: 0x1360
	// Line 1646, Address: 0x380684, Func Offset: 0x1364
	// Line 1678, Address: 0x380690, Func Offset: 0x1370
	// Line 1212, Address: 0x3806a0, Func Offset: 0x1380
	// Line 1678, Address: 0x3806b0, Func Offset: 0x1390
	// Line 1400, Address: 0x3806b4, Func Offset: 0x1394
	// Line 1678, Address: 0x3806bc, Func Offset: 0x139c
	// Line 1410, Address: 0x3806c0, Func Offset: 0x13a0
	// Line 1437, Address: 0x3806c8, Func Offset: 0x13a8
	// Line 1678, Address: 0x3806cc, Func Offset: 0x13ac
	// Line 1437, Address: 0x3806d0, Func Offset: 0x13b0
	// Line 1678, Address: 0x3806d4, Func Offset: 0x13b4
	// Line 1438, Address: 0x3806d8, Func Offset: 0x13b8
	// Line 1678, Address: 0x3806e0, Func Offset: 0x13c0
	// Line 1439, Address: 0x3806f4, Func Offset: 0x13d4
	// Line 1678, Address: 0x3806f8, Func Offset: 0x13d8
	// Line 1439, Address: 0x380708, Func Offset: 0x13e8
	// Line 1678, Address: 0x380710, Func Offset: 0x13f0
	// Line 1439, Address: 0x380720, Func Offset: 0x1400
	// Line 1678, Address: 0x380724, Func Offset: 0x1404
	// Line 1439, Address: 0x380734, Func Offset: 0x1414
	// Line 1678, Address: 0x380738, Func Offset: 0x1418
	// Line 1439, Address: 0x380740, Func Offset: 0x1420
	// Line 1678, Address: 0x380748, Func Offset: 0x1428
	// Line 1443, Address: 0x380754, Func Offset: 0x1434
	// Line 1525, Address: 0x38075c, Func Offset: 0x143c
	// Line 1678, Address: 0x380770, Func Offset: 0x1450
	// Line 1589, Address: 0x380790, Func Offset: 0x1470
	// Line 1678, Address: 0x380794, Func Offset: 0x1474
	// Line 1679, Address: 0x3807ac, Func Offset: 0x148c
	// Func End, Address: 0x3807d4, Func Offset: 0x14b4
}

// ZDSP_doCommand__FP17st_ZDISPATCH_DATAP20st_ZDISPATCH_CONTEXT
// Start address: 0x3807e0
int32 ZDSP_doCommand(st_ZDISPATCH_CONTEXT* cmdCtxt)
{
	int32 iv;
	en_DISPATCH_COMMAND cmd;
	void* indata;
	void* result;
	int32 warned;
	// Line 680, Address: 0x3807e0, Func Offset: 0
	// Line 690, Address: 0x3807e4, Func Offset: 0x4
	// Line 680, Address: 0x3807e8, Func Offset: 0x8
	// Line 685, Address: 0x3807f4, Func Offset: 0x14
	// Line 687, Address: 0x3807f8, Func Offset: 0x18
	// Line 690, Address: 0x3807fc, Func Offset: 0x1c
	// Line 698, Address: 0x380804, Func Offset: 0x24
	// Line 711, Address: 0x38082c, Func Offset: 0x4c
	// Line 719, Address: 0x380834, Func Offset: 0x54
	// Line 720, Address: 0x38083c, Func Offset: 0x5c
	// Line 730, Address: 0x380844, Func Offset: 0x64
	// Line 731, Address: 0x38084c, Func Offset: 0x6c
	// Line 740, Address: 0x380854, Func Offset: 0x74
	// Line 738, Address: 0x380858, Func Offset: 0x78
	// Line 740, Address: 0x38085c, Func Offset: 0x7c
	// Line 739, Address: 0x380860, Func Offset: 0x80
	// Line 740, Address: 0x380864, Func Offset: 0x84
	// Line 741, Address: 0x38086c, Func Offset: 0x8c
	// Line 748, Address: 0x380874, Func Offset: 0x94
	// Line 749, Address: 0x380878, Func Offset: 0x98
	// Line 750, Address: 0x38087c, Func Offset: 0x9c
	// Line 765, Address: 0x380884, Func Offset: 0xa4
	// Line 766, Address: 0x38088c, Func Offset: 0xac
	// Line 773, Address: 0x380894, Func Offset: 0xb4
	// Line 774, Address: 0x380898, Func Offset: 0xb8
	// Line 775, Address: 0x3808a0, Func Offset: 0xc0
	// Line 780, Address: 0x3808bc, Func Offset: 0xdc
	// Line 781, Address: 0x3808cc, Func Offset: 0xec
	// Line 791, Address: 0x3808d4, Func Offset: 0xf4
	// Line 792, Address: 0x3808dc, Func Offset: 0xfc
	// Line 799, Address: 0x3808e4, Func Offset: 0x104
	// Line 800, Address: 0x380960, Func Offset: 0x180
	// Line 801, Address: 0x380970, Func Offset: 0x190
	// Line 808, Address: 0x380978, Func Offset: 0x198
	// Line 809, Address: 0x380980, Func Offset: 0x1a0
	// Line 812, Address: 0x380990, Func Offset: 0x1b0
	// Line 814, Address: 0x380a18, Func Offset: 0x238
	// Line 815, Address: 0x380a28, Func Offset: 0x248
	// Line 822, Address: 0x380a30, Func Offset: 0x250
	// Line 823, Address: 0x380a38, Func Offset: 0x258
	// Line 826, Address: 0x380a48, Func Offset: 0x268
	// Line 828, Address: 0x380ad0, Func Offset: 0x2f0
	// Line 829, Address: 0x380ae0, Func Offset: 0x300
	// Line 839, Address: 0x380ae8, Func Offset: 0x308
	// Line 840, Address: 0x380af0, Func Offset: 0x310
	// Line 847, Address: 0x380af8, Func Offset: 0x318
	// Line 848, Address: 0x380b74, Func Offset: 0x394
	// Line 849, Address: 0x380b84, Func Offset: 0x3a4
	// Line 856, Address: 0x380b8c, Func Offset: 0x3ac
	// Line 857, Address: 0x380b94, Func Offset: 0x3b4
	// Line 860, Address: 0x380ba4, Func Offset: 0x3c4
	// Line 862, Address: 0x380c2c, Func Offset: 0x44c
	// Line 863, Address: 0x380c3c, Func Offset: 0x45c
	// Line 870, Address: 0x380c44, Func Offset: 0x464
	// Line 871, Address: 0x380c4c, Func Offset: 0x46c
	// Line 874, Address: 0x380c5c, Func Offset: 0x47c
	// Line 876, Address: 0x380ce4, Func Offset: 0x504
	// Line 877, Address: 0x380cf4, Func Offset: 0x514
	// Line 891, Address: 0x380cfc, Func Offset: 0x51c
	// Line 892, Address: 0x380d04, Func Offset: 0x524
	// Line 900, Address: 0x380d0c, Func Offset: 0x52c
	// Line 901, Address: 0x380d14, Func Offset: 0x534
	// Line 902, Address: 0x380d24, Func Offset: 0x544
	// Line 913, Address: 0x380d2c, Func Offset: 0x54c
	// Line 914, Address: 0x380d34, Func Offset: 0x554
	// Line 925, Address: 0x380d3c, Func Offset: 0x55c
	// Line 926, Address: 0x380d44, Func Offset: 0x564
	// Line 947, Address: 0x380d58, Func Offset: 0x578
	// Line 695, Address: 0x380d64, Func Offset: 0x584
	// Line 947, Address: 0x380d70, Func Offset: 0x590
	// Line 774, Address: 0x380d78, Func Offset: 0x598
	// Line 948, Address: 0x380da0, Func Offset: 0x5c0
	// Func End, Address: 0x380db0, Func Offset: 0x5d0
}

// zDispatcher_Load__FP17st_ZDISPATCH_DATAP7xSerial
// Start address: 0x380db0
void zDispatcher_Load(st_ZDISPATCH_DATA* dspdata, xSerial* s)
{
	// Line 402, Address: 0x380db0, Func Offset: 0
	// Func End, Address: 0x380db8, Func Offset: 0x8
}

// zDispatcher_Save__FP17st_ZDISPATCH_DATAP7xSerial
// Start address: 0x380dc0
void zDispatcher_Save(st_ZDISPATCH_DATA* dspdata, xSerial* s)
{
	// Line 384, Address: 0x380dc0, Func Offset: 0
	// Func End, Address: 0x380dc8, Func Offset: 0x8
}

// zDispatcher_InitDep__FP17st_ZDISPATCH_DATAP6zScene
// Start address: 0x380dd0
void zDispatcher_InitDep()
{
	// Line 365, Address: 0x380dd0, Func Offset: 0
	// Func End, Address: 0x380dd8, Func Offset: 0x8
}

// zDispatcher_Init__FP17st_ZDISPATCH_DATAP10xBaseAsset
// Start address: 0x380de0
void zDispatcher_Init(st_ZDISPATCH_DATA* dspdata, xBaseAsset* bass)
{
	// Line 353, Address: 0x380de0, Func Offset: 0
	// Line 354, Address: 0x380df4, Func Offset: 0x14
	// Line 359, Address: 0x380e2c, Func Offset: 0x4c
	// Func End, Address: 0x380e40, Func Offset: 0x60
}

// zDispatcher_getInst__FP17st_ZDISPATCH_DATAi
// Start address: 0x380e40
st_ZDISPATCH_DATA* zDispatcher_getInst(st_ZDISPATCH_DATA* pool, int32 idx)
{
	// Line 341, Address: 0x380e40, Func Offset: 0
	// Line 342, Address: 0x380e4c, Func Offset: 0xc
	// Func End, Address: 0x380e54, Func Offset: 0x14
}

// zDispatcher_memPool__Fi
// Start address: 0x380e60
st_ZDISPATCH_DATA* zDispatcher_memPool(int32 cnt)
{
	st_ZDISPATCH_DATA* pool;
	st_ZDISPATCH_DEPOT* depot;
	// Line 314, Address: 0x380e60, Func Offset: 0
	// Line 319, Address: 0x380e78, Func Offset: 0x18
	// Line 321, Address: 0x380e88, Func Offset: 0x28
	// Line 323, Address: 0x380ea4, Func Offset: 0x44
	// Line 327, Address: 0x380ebc, Func Offset: 0x5c
	// Line 329, Address: 0x380ec0, Func Offset: 0x60
	// Line 326, Address: 0x380ec4, Func Offset: 0x64
	// Line 330, Address: 0x380ec8, Func Offset: 0x68
	// Func End, Address: 0x380ee0, Func Offset: 0x80
}

// zDispatcher_sceneFinish__Fv
// Start address: 0x380ee0
void zDispatcher_sceneFinish()
{
	st_ZDISPATCH_DEPOT* depot;
	// Line 300, Address: 0x380ee0, Func Offset: 0
	// Line 301, Address: 0x380ee4, Func Offset: 0x4
	// Line 300, Address: 0x380ee8, Func Offset: 0x8
	// Line 303, Address: 0x380eec, Func Offset: 0xc
	// Line 306, Address: 0x380efc, Func Offset: 0x1c
	// Line 309, Address: 0x380f08, Func Offset: 0x28
	// Func End, Address: 0x380f14, Func Offset: 0x34
}

// zDispatcher_scenePrepare__Fv
// Start address: 0x380f20
void zDispatcher_scenePrepare()
{
	st_ZDISPATCH_DEPOT* depot;
	// Line 286, Address: 0x380f20, Func Offset: 0
	// Line 287, Address: 0x380f24, Func Offset: 0x4
	// Line 286, Address: 0x380f28, Func Offset: 0x8
	// Line 289, Address: 0x380f2c, Func Offset: 0xc
	// Line 294, Address: 0x380f3c, Func Offset: 0x1c
	// Line 297, Address: 0x380f48, Func Offset: 0x28
	// Func End, Address: 0x380f54, Func Offset: 0x34
}

// zDispatcher_Shutdown__Fv
// Start address: 0x380f60
void zDispatcher_Shutdown()
{
	// Line 280, Address: 0x380f60, Func Offset: 0
	// Func End, Address: 0x380f68, Func Offset: 0x8
}

// zDispatcher_Startup__Fv
// Start address: 0x380f70
void zDispatcher_Startup()
{
	// Line 275, Address: 0x380f70, Func Offset: 0
	// Func End, Address: 0x380f78, Func Offset: 0x8
}

// zDispatcherParseINI__FP8xIniFile
// Start address: 0x380f80
void zDispatcherParseINI(xIniFile* ini)
{
	int32 i;
	int8 itemName[16];
	int8 value[256];
	int8* value_;
	int32 j;
	int8* ltok;
	int8* tok;
	// Line 167, Address: 0x380f80, Func Offset: 0
	// Line 168, Address: 0x380f84, Func Offset: 0x4
	// Line 167, Address: 0x380f88, Func Offset: 0x8
	// Line 168, Address: 0x380f8c, Func Offset: 0xc
	// Line 167, Address: 0x380f90, Func Offset: 0x10
	// Line 168, Address: 0x380fa0, Func Offset: 0x20
	// Line 167, Address: 0x380fa4, Func Offset: 0x24
	// Line 168, Address: 0x380fa8, Func Offset: 0x28
	// Line 172, Address: 0x380fb4, Func Offset: 0x34
	// Line 169, Address: 0x380fb8, Func Offset: 0x38
	// Line 172, Address: 0x380fbc, Func Offset: 0x3c
	// Line 170, Address: 0x380fc0, Func Offset: 0x40
	// Line 172, Address: 0x380fc4, Func Offset: 0x44
	// Line 171, Address: 0x380fc8, Func Offset: 0x48
	// Line 174, Address: 0x380fcc, Func Offset: 0x4c
	// Line 178, Address: 0x380fe0, Func Offset: 0x60
	// Line 181, Address: 0x380ff4, Func Offset: 0x74
	// Line 185, Address: 0x380ffc, Func Offset: 0x7c
	// Line 187, Address: 0x381004, Func Offset: 0x84
	// Line 188, Address: 0x381018, Func Offset: 0x98
	// Line 191, Address: 0x38101c, Func Offset: 0x9c
	// Line 188, Address: 0x38102c, Func Offset: 0xac
	// Line 189, Address: 0x381030, Func Offset: 0xb0
	// Line 191, Address: 0x381034, Func Offset: 0xb4
	// Line 192, Address: 0x38103c, Func Offset: 0xbc
	// Line 194, Address: 0x38104c, Func Offset: 0xcc
	// Line 196, Address: 0x38105c, Func Offset: 0xdc
	// Line 197, Address: 0x381064, Func Offset: 0xe4
	// Line 198, Address: 0x38106c, Func Offset: 0xec
	// Line 199, Address: 0x381074, Func Offset: 0xf4
	// Line 200, Address: 0x38107c, Func Offset: 0xfc
	// Line 212, Address: 0x381080, Func Offset: 0x100
	// Line 215, Address: 0x381090, Func Offset: 0x110
	// Line 229, Address: 0x381098, Func Offset: 0x118
	// Line 231, Address: 0x3810b0, Func Offset: 0x130
	// Line 236, Address: 0x3810c4, Func Offset: 0x144
	// Line 231, Address: 0x3810c8, Func Offset: 0x148
	// Line 233, Address: 0x3810cc, Func Offset: 0x14c
	// Line 234, Address: 0x3810d0, Func Offset: 0x150
	// Line 245, Address: 0x3810d4, Func Offset: 0x154
	// Line 234, Address: 0x3810dc, Func Offset: 0x15c
	// Line 235, Address: 0x3810e0, Func Offset: 0x160
	// Line 236, Address: 0x3810e8, Func Offset: 0x168
	// Line 237, Address: 0x3810ec, Func Offset: 0x16c
	// Line 239, Address: 0x3810f0, Func Offset: 0x170
	// Line 245, Address: 0x3810f4, Func Offset: 0x174
	// Line 182, Address: 0x381108, Func Offset: 0x188
	// Line 245, Address: 0x38110c, Func Offset: 0x18c
	// Line 184, Address: 0x381110, Func Offset: 0x190
	// Line 245, Address: 0x381118, Func Offset: 0x198
	// Line 213, Address: 0x381148, Func Offset: 0x1c8
	// Line 246, Address: 0x381150, Func Offset: 0x1d0
	// Line 247, Address: 0x381160, Func Offset: 0x1e0
	// Func End, Address: 0x381180, Func Offset: 0x200
}

