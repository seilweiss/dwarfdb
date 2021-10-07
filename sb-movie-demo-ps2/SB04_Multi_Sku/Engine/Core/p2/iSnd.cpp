



void iSndSetMode();
void iSndSetExternalCallback(void(*callback)(iSndHandle, uint8));
void iSndSetPitch(xSndVoiceInfo* vp);
void iSndSetVol(xSndVoiceInfo* vp, float32 vol);
void iSndStop(xSndVoiceInfo* vp);
void iSndPause(xSndVoiceInfo* vp, uint32 pause);
xSndVoiceInfo* iSndGetFreeVoiceInfo(uint32 priority, uint32 flags);
void iSndStartStereo(iSndHandle id1, iSndHandle id2);
uint8 iSndIsReady(iSndHandle id);
uint8 iSndPlay(xSndVoiceInfo* vp);
void iSndUpdate();
iSndVol iSndCalcVol(xSndVoiceInfo* vp);
void iSndSetEnvironmentalEffect(int32 effectType);
void iSndInitSceneLoaded();
void iSndLoadFasterer();
void iSndInit();
void iSndSuspendCD();
iSndFileInfo* iSndLookup(uint32 id);

// iSndSetMode__Fv
// Start address: 0x4a0d10
void iSndSetMode()
{
	// Line 1436, Address: 0x4a0d10, Func Offset: 0
	// Func End, Address: 0x4a0d18, Func Offset: 0x8
}

// iSndSetExternalCallback__FPF10iSndHandleb_v
// Start address: 0x4a0d20
void iSndSetExternalCallback(void(*callback)(iSndHandle, uint8))
{
	// Line 1431, Address: 0x4a0d20, Func Offset: 0
	// Func End, Address: 0x4a0d28, Func Offset: 0x8
}

// iSndSetPitch__FP13xSndVoiceInfof
// Start address: 0x4a0d30
void iSndSetPitch(xSndVoiceInfo* vp)
{
	int32 voiceID;
	// Line 1386, Address: 0x4a0d30, Func Offset: 0
	// Line 1391, Address: 0x4a0d34, Func Offset: 0x4
	// Line 1386, Address: 0x4a0d38, Func Offset: 0x8
	// Line 1391, Address: 0x4a0d3c, Func Offset: 0xc
	// Line 1386, Address: 0x4a0d40, Func Offset: 0x10
	// Line 1391, Address: 0x4a0d50, Func Offset: 0x20
	// Line 1393, Address: 0x4a0d54, Func Offset: 0x24
	// Line 1391, Address: 0x4a0d58, Func Offset: 0x28
	// Line 1393, Address: 0x4a0d68, Func Offset: 0x38
	// Line 1391, Address: 0x4a0d6c, Func Offset: 0x3c
	// Line 1393, Address: 0x4a0d74, Func Offset: 0x44
	// Line 1395, Address: 0x4a0d7c, Func Offset: 0x4c
	// Line 1398, Address: 0x4a0ddc, Func Offset: 0xac
	// Line 1399, Address: 0x4a0ec0, Func Offset: 0x190
	// Line 1401, Address: 0x4a0ec8, Func Offset: 0x198
	// Line 1403, Address: 0x4a100c, Func Offset: 0x2dc
	// Func End, Address: 0x4a1024, Func Offset: 0x2f4
}

// iSndSetVol__FP13xSndVoiceInfof
// Start address: 0x4a1030
void iSndSetVol(xSndVoiceInfo* vp, float32 vol)
{
	float32 fScaledVol;
	// Line 1362, Address: 0x4a1030, Func Offset: 0
	// Line 1368, Address: 0x4a1044, Func Offset: 0x14
	// Line 1371, Address: 0x4a1054, Func Offset: 0x24
	// Line 1375, Address: 0x4a1144, Func Offset: 0x114
	// Line 1371, Address: 0x4a1148, Func Offset: 0x118
	// Line 1375, Address: 0x4a114c, Func Offset: 0x11c
	// Line 1371, Address: 0x4a1150, Func Offset: 0x120
	// Line 1375, Address: 0x4a1154, Func Offset: 0x124
	// Line 1371, Address: 0x4a115c, Func Offset: 0x12c
	// Line 1375, Address: 0x4a1160, Func Offset: 0x130
	// Line 1371, Address: 0x4a116c, Func Offset: 0x13c
	// Line 1375, Address: 0x4a1170, Func Offset: 0x140
	// Line 1371, Address: 0x4a1178, Func Offset: 0x148
	// Line 1375, Address: 0x4a117c, Func Offset: 0x14c
	// Line 1371, Address: 0x4a1180, Func Offset: 0x150
	// Line 1375, Address: 0x4a1198, Func Offset: 0x168
	// Line 1382, Address: 0x4a11a4, Func Offset: 0x174
	// Func End, Address: 0x4a11b8, Func Offset: 0x188
}

// iSndStop__FP13xSndVoiceInfo
// Start address: 0x4a11c0
void iSndStop(xSndVoiceInfo* vp)
{
	int32 voiceID;
	// Line 1332, Address: 0x4a11c0, Func Offset: 0
	// Line 1335, Address: 0x4a11c4, Func Offset: 0x4
	// Line 1332, Address: 0x4a11cc, Func Offset: 0xc
	// Line 1335, Address: 0x4a11d0, Func Offset: 0x10
	// Line 1332, Address: 0x4a11d4, Func Offset: 0x14
	// Line 1335, Address: 0x4a11d8, Func Offset: 0x18
	// Line 1340, Address: 0x4a11f4, Func Offset: 0x34
	// Line 1341, Address: 0x4a120c, Func Offset: 0x4c
	// Line 1340, Address: 0x4a1218, Func Offset: 0x58
	// Line 1342, Address: 0x4a1220, Func Offset: 0x60
	// Line 1340, Address: 0x4a1224, Func Offset: 0x64
	// Line 1343, Address: 0x4a1228, Func Offset: 0x68
	// Line 1341, Address: 0x4a122c, Func Offset: 0x6c
	// Line 1343, Address: 0x4a1230, Func Offset: 0x70
	// Line 1341, Address: 0x4a1234, Func Offset: 0x74
	// Line 1342, Address: 0x4a123c, Func Offset: 0x7c
	// Line 1343, Address: 0x4a1248, Func Offset: 0x88
	// Line 1356, Address: 0x4a1254, Func Offset: 0x94
	// Func End, Address: 0x4a1264, Func Offset: 0xa4
}

// iSndPause__FP13xSndVoiceInfoUi
// Start address: 0x4a1270
void iSndPause(xSndVoiceInfo* vp, uint32 pause)
{
	int32 voiceID;
	// Line 1316, Address: 0x4a1270, Func Offset: 0
	// Line 1319, Address: 0x4a1274, Func Offset: 0x4
	// Line 1316, Address: 0x4a127c, Func Offset: 0xc
	// Line 1319, Address: 0x4a1280, Func Offset: 0x10
	// Line 1324, Address: 0x4a129c, Func Offset: 0x2c
	// Line 1325, Address: 0x4a12a4, Func Offset: 0x34
	// Line 1327, Address: 0x4a12b4, Func Offset: 0x44
	// Line 1328, Address: 0x4a12bc, Func Offset: 0x4c
	// Func End, Address: 0x4a12c8, Func Offset: 0x58
}

// iSndGetFreeVoiceInfo__FUiUi
// Start address: 0x4a12d0
xSndVoiceInfo* iSndGetFreeVoiceInfo(uint32 priority, uint32 flags)
{
	uint32 i;
	uint32 vlo;
	uint32 vhi;
	uint32 best;
	uint32 bestpri;
	int32 bestvol;
	xSndVoiceInfo* vp;
	int32 volR;
	int32 L;
	int32 R;
	// Line 1245, Address: 0x4a12d0, Func Offset: 0
	// Line 1249, Address: 0x4a12d4, Func Offset: 0x4
	// Line 1245, Address: 0x4a12d8, Func Offset: 0x8
	// Line 1254, Address: 0x4a12dc, Func Offset: 0xc
	// Line 1245, Address: 0x4a12e0, Func Offset: 0x10
	// Line 1254, Address: 0x4a12e4, Func Offset: 0x14
	// Line 1249, Address: 0x4a12e8, Func Offset: 0x18
	// Line 1245, Address: 0x4a12ec, Func Offset: 0x1c
	// Line 1248, Address: 0x4a12f0, Func Offset: 0x20
	// Line 1254, Address: 0x4a12f4, Func Offset: 0x24
	// Line 1255, Address: 0x4a12fc, Func Offset: 0x2c
	// Line 1257, Address: 0x4a1300, Func Offset: 0x30
	// Line 1258, Address: 0x4a1308, Func Offset: 0x38
	// Line 1259, Address: 0x4a130c, Func Offset: 0x3c
	// Line 1263, Address: 0x4a1310, Func Offset: 0x40
	// Line 1264, Address: 0x4a1324, Func Offset: 0x54
	// Line 1263, Address: 0x4a1328, Func Offset: 0x58
	// Line 1264, Address: 0x4a1330, Func Offset: 0x60
	// Line 1272, Address: 0x4a1338, Func Offset: 0x68
	// Line 1264, Address: 0x4a133c, Func Offset: 0x6c
	// Line 1266, Address: 0x4a1340, Func Offset: 0x70
	// Line 1272, Address: 0x4a134c, Func Offset: 0x7c
	// Line 1278, Address: 0x4a1358, Func Offset: 0x88
	// Line 1285, Address: 0x4a1368, Func Offset: 0x98
	// Line 1287, Address: 0x4a136c, Func Offset: 0x9c
	// Line 1288, Address: 0x4a1370, Func Offset: 0xa0
	// Line 1287, Address: 0x4a137c, Func Offset: 0xac
	// Line 1290, Address: 0x4a1388, Func Offset: 0xb8
	// Line 1292, Address: 0x4a1390, Func Offset: 0xc0
	// Line 1296, Address: 0x4a139c, Func Offset: 0xcc
	// Line 1297, Address: 0x4a13a0, Func Offset: 0xd0
	// Line 1295, Address: 0x4a13a4, Func Offset: 0xd4
	// Line 1298, Address: 0x4a13a8, Func Offset: 0xd8
	// Line 1301, Address: 0x4a13b8, Func Offset: 0xe8
	// Line 1305, Address: 0x4a13c4, Func Offset: 0xf4
	// Line 1306, Address: 0x4a13d0, Func Offset: 0x100
	// Line 1268, Address: 0x4a13d8, Func Offset: 0x108
	// Line 1306, Address: 0x4a13dc, Func Offset: 0x10c
	// Line 1268, Address: 0x4a13e8, Func Offset: 0x118
	// Line 1306, Address: 0x4a13ec, Func Offset: 0x11c
	// Line 1268, Address: 0x4a13f0, Func Offset: 0x120
	// Line 1302, Address: 0x4a13fc, Func Offset: 0x12c
	// Line 1309, Address: 0x4a140c, Func Offset: 0x13c
	// Line 1306, Address: 0x4a1410, Func Offset: 0x140
	// Line 1309, Address: 0x4a1414, Func Offset: 0x144
	// Line 1306, Address: 0x4a141c, Func Offset: 0x14c
	// Line 1309, Address: 0x4a1424, Func Offset: 0x154
	// Line 1311, Address: 0x4a1434, Func Offset: 0x164
	// Line 1309, Address: 0x4a1438, Func Offset: 0x168
	// Line 1311, Address: 0x4a143c, Func Offset: 0x16c
	// Line 1309, Address: 0x4a1440, Func Offset: 0x170
	// Line 1311, Address: 0x4a1444, Func Offset: 0x174
	// Line 1312, Address: 0x4a1480, Func Offset: 0x1b0
	// Line 1311, Address: 0x4a1484, Func Offset: 0x1b4
	// Line 1313, Address: 0x4a14cc, Func Offset: 0x1fc
	// Func End, Address: 0x4a14e0, Func Offset: 0x210
}

// iSndStartStereo__F10iSndHandle10iSndHandle
// Start address: 0x4a14e0
void iSndStartStereo(iSndHandle id1, iSndHandle id2)
{
	int32 v1;
	int32 v2;
	// Line 1211, Address: 0x4a14e0, Func Offset: 0
	// Line 1214, Address: 0x4a14e4, Func Offset: 0x4
	// Line 1211, Address: 0x4a14e8, Func Offset: 0x8
	// Line 1214, Address: 0x4a14ec, Func Offset: 0xc
	// Line 1211, Address: 0x4a14f0, Func Offset: 0x10
	// Line 1214, Address: 0x4a14f8, Func Offset: 0x18
	// Line 1215, Address: 0x4a14fc, Func Offset: 0x1c
	// Line 1217, Address: 0x4a1518, Func Offset: 0x38
	// Line 1218, Address: 0x4a1528, Func Offset: 0x48
	// Line 1221, Address: 0x4a1534, Func Offset: 0x54
	// Line 1224, Address: 0x4a1540, Func Offset: 0x60
	// Line 1225, Address: 0x4a154c, Func Offset: 0x6c
	// Line 1227, Address: 0x4a1568, Func Offset: 0x88
	// Line 1228, Address: 0x4a1578, Func Offset: 0x98
	// Line 1229, Address: 0x4a1584, Func Offset: 0xa4
	// Line 1232, Address: 0x4a158c, Func Offset: 0xac
	// Line 1234, Address: 0x4a1598, Func Offset: 0xb8
	// Line 1235, Address: 0x4a15a0, Func Offset: 0xc0
	// Line 1241, Address: 0x4a15a8, Func Offset: 0xc8
	// Line 1239, Address: 0x4a15b0, Func Offset: 0xd0
	// Line 1241, Address: 0x4a15b4, Func Offset: 0xd4
	// Func End, Address: 0x4a15d8, Func Offset: 0xf8
}

// iSndIsReady__F10iSndHandle
// Start address: 0x4a15e0
uint8 iSndIsReady(iSndHandle id)
{
	int32 v;
	// Line 1194, Address: 0x4a15e0, Func Offset: 0
	// Line 1195, Address: 0x4a15ec, Func Offset: 0xc
	// Line 1194, Address: 0x4a15f4, Func Offset: 0x14
	// Line 1195, Address: 0x4a15f8, Func Offset: 0x18
	// Line 1197, Address: 0x4a160c, Func Offset: 0x2c
	// Line 1199, Address: 0x4a1618, Func Offset: 0x38
	// Line 1201, Address: 0x4a1640, Func Offset: 0x60
	// Line 1203, Address: 0x4a1650, Func Offset: 0x70
	// Line 1204, Address: 0x4a1654, Func Offset: 0x74
	// Func End, Address: 0x4a165c, Func Offset: 0x7c
}

// iSndPlay__FP13xSndVoiceInfo
// Start address: 0x4a1660
uint8 iSndPlay(xSndVoiceInfo* vp)
{
	iSndVol nvol;
	uint32 voice;
	int32 flags;
	iSndFileInfo* file;
	iSndFileInfo* file;
	uint32 offset;
	uint32 track;
	uint32 numTracks;
	// Line 1076, Address: 0x4a1660, Func Offset: 0
	// Line 1078, Address: 0x4a1664, Func Offset: 0x4
	// Line 1076, Address: 0x4a1668, Func Offset: 0x8
	// Line 1081, Address: 0x4a167c, Func Offset: 0x1c
	// Line 1076, Address: 0x4a1680, Func Offset: 0x20
	// Line 1078, Address: 0x4a1684, Func Offset: 0x24
	// Line 1081, Address: 0x4a1688, Func Offset: 0x28
	// Line 1085, Address: 0x4a1694, Func Offset: 0x34
	// Line 1081, Address: 0x4a1698, Func Offset: 0x38
	// Line 1085, Address: 0x4a169c, Func Offset: 0x3c
	// Line 1081, Address: 0x4a16a8, Func Offset: 0x48
	// Line 1082, Address: 0x4a16b0, Func Offset: 0x50
	// Line 1085, Address: 0x4a16c0, Func Offset: 0x60
	// Line 1088, Address: 0x4a17e8, Func Offset: 0x188
	// Line 1085, Address: 0x4a17ec, Func Offset: 0x18c
	// Line 1088, Address: 0x4a17f0, Func Offset: 0x190
	// Line 1090, Address: 0x4a17fc, Func Offset: 0x19c
	// Line 1088, Address: 0x4a1800, Func Offset: 0x1a0
	// Line 1090, Address: 0x4a1804, Func Offset: 0x1a4
	// Line 1088, Address: 0x4a1808, Func Offset: 0x1a8
	// Line 1090, Address: 0x4a180c, Func Offset: 0x1ac
	// Line 1088, Address: 0x4a1810, Func Offset: 0x1b0
	// Line 1090, Address: 0x4a1814, Func Offset: 0x1b4
	// Line 1088, Address: 0x4a1820, Func Offset: 0x1c0
	// Line 1090, Address: 0x4a1824, Func Offset: 0x1c4
	// Line 1093, Address: 0x4a182c, Func Offset: 0x1cc
	// Line 1090, Address: 0x4a1830, Func Offset: 0x1d0
	// Line 1093, Address: 0x4a1834, Func Offset: 0x1d4
	// Line 1088, Address: 0x4a1838, Func Offset: 0x1d8
	// Line 1093, Address: 0x4a1844, Func Offset: 0x1e4
	// Line 1114, Address: 0x4a184c, Func Offset: 0x1ec
	// Line 1121, Address: 0x4a1858, Func Offset: 0x1f8
	// Line 1125, Address: 0x4a1860, Func Offset: 0x200
	// Line 1127, Address: 0x4a1864, Func Offset: 0x204
	// Line 1130, Address: 0x4a186c, Func Offset: 0x20c
	// Line 1132, Address: 0x4a1890, Func Offset: 0x230
	// Line 1136, Address: 0x4a1898, Func Offset: 0x238
	// Line 1138, Address: 0x4a18a0, Func Offset: 0x240
	// Line 1140, Address: 0x4a18ac, Func Offset: 0x24c
	// Line 1141, Address: 0x4a18b4, Func Offset: 0x254
	// Line 1143, Address: 0x4a18b8, Func Offset: 0x258
	// Line 1145, Address: 0x4a18cc, Func Offset: 0x26c
	// Line 1143, Address: 0x4a18e8, Func Offset: 0x288
	// Line 1145, Address: 0x4a18ec, Func Offset: 0x28c
	// Line 1175, Address: 0x4a1918, Func Offset: 0x2b8
	// Line 1176, Address: 0x4a1920, Func Offset: 0x2c0
	// Line 1178, Address: 0x4a1924, Func Offset: 0x2c4
	// Line 1175, Address: 0x4a1928, Func Offset: 0x2c8
	// Line 1176, Address: 0x4a1930, Func Offset: 0x2d0
	// Line 1178, Address: 0x4a1938, Func Offset: 0x2d8
	// Line 1106, Address: 0x4a1960, Func Offset: 0x300
	// Line 1178, Address: 0x4a1964, Func Offset: 0x304
	// Line 1107, Address: 0x4a1970, Func Offset: 0x310
	// Line 1178, Address: 0x4a1974, Func Offset: 0x314
	// Line 1107, Address: 0x4a1978, Func Offset: 0x318
	// Line 1178, Address: 0x4a1980, Func Offset: 0x320
	// Line 1114, Address: 0x4a1988, Func Offset: 0x328
	// Line 1178, Address: 0x4a1990, Func Offset: 0x330
	// Line 1104, Address: 0x4a19a4, Func Offset: 0x344
	// Line 1178, Address: 0x4a19ac, Func Offset: 0x34c
	// Line 1117, Address: 0x4a19b0, Func Offset: 0x350
	// Line 1178, Address: 0x4a19b4, Func Offset: 0x354
	// Line 1117, Address: 0x4a19b8, Func Offset: 0x358
	// Line 1178, Address: 0x4a19c8, Func Offset: 0x368
	// Line 1120, Address: 0x4a19d8, Func Offset: 0x378
	// Line 1178, Address: 0x4a19e0, Func Offset: 0x380
	// Line 1128, Address: 0x4a19f4, Func Offset: 0x394
	// Line 1137, Address: 0x4a19fc, Func Offset: 0x39c
	// Line 1139, Address: 0x4a1a04, Func Offset: 0x3a4
	// Line 1159, Address: 0x4a1a0c, Func Offset: 0x3ac
	// Line 1178, Address: 0x4a1a18, Func Offset: 0x3b8
	// Line 1166, Address: 0x4a1a24, Func Offset: 0x3c4
	// Line 1178, Address: 0x4a1a28, Func Offset: 0x3c8
	// Line 1166, Address: 0x4a1a30, Func Offset: 0x3d0
	// Line 1178, Address: 0x4a1a38, Func Offset: 0x3d8
	// Line 1179, Address: 0x4a1a60, Func Offset: 0x400
	// Func End, Address: 0x4a1a7c, Func Offset: 0x41c
}

// iSndUpdate__Fv
// Start address: 0x4a1a80
void iSndUpdate()
{
	int32 i;
	uint8 active;
	uint8 bDialogActive;
	int32 i;
	iSndVol nvol;
	int32 j;
	int32 testBuffer;
	// Line 659, Address: 0x4a1a80, Func Offset: 0
	// Line 661, Address: 0x4a1a84, Func Offset: 0x4
	// Line 659, Address: 0x4a1a88, Func Offset: 0x8
	// Line 661, Address: 0x4a1aa0, Func Offset: 0x20
	// Line 682, Address: 0x4a1aa8, Func Offset: 0x28
	// Line 668, Address: 0x4a1aac, Func Offset: 0x2c
	// Line 682, Address: 0x4a1ab0, Func Offset: 0x30
	// Line 694, Address: 0x4a1ab4, Func Offset: 0x34
	// Line 668, Address: 0x4a1ab8, Func Offset: 0x38
	// Line 675, Address: 0x4a1ac0, Func Offset: 0x40
	// Line 693, Address: 0x4a1ac4, Func Offset: 0x44
	// Line 687, Address: 0x4a1ac8, Func Offset: 0x48
	// Line 694, Address: 0x4a1acc, Func Offset: 0x4c
	// Line 670, Address: 0x4a1ad0, Func Offset: 0x50
	// Line 675, Address: 0x4a1af4, Func Offset: 0x74
	// Line 670, Address: 0x4a1af8, Func Offset: 0x78
	// Line 675, Address: 0x4a1afc, Func Offset: 0x7c
	// Line 679, Address: 0x4a1b10, Func Offset: 0x90
	// Line 682, Address: 0x4a1b18, Func Offset: 0x98
	// Line 684, Address: 0x4a1b1c, Func Offset: 0x9c
	// Line 682, Address: 0x4a1b20, Func Offset: 0xa0
	// Line 687, Address: 0x4a1b24, Func Offset: 0xa4
	// Line 690, Address: 0x4a1b38, Func Offset: 0xb8
	// Line 693, Address: 0x4a1b40, Func Offset: 0xc0
	// Line 694, Address: 0x4a1b44, Func Offset: 0xc4
	// Line 695, Address: 0x4a1b50, Func Offset: 0xd0
	// Line 697, Address: 0x4a1b5c, Func Offset: 0xdc
	// Line 695, Address: 0x4a1b60, Func Offset: 0xe0
	// Line 701, Address: 0x4a1b64, Func Offset: 0xe4
	// Line 704, Address: 0x4a1b84, Func Offset: 0x104
	// Line 707, Address: 0x4a1b8c, Func Offset: 0x10c
	// Line 716, Address: 0x4a1b94, Func Offset: 0x114
	// Line 892, Address: 0x4a1ba8, Func Offset: 0x128
	// Line 891, Address: 0x4a1bac, Func Offset: 0x12c
	// Line 892, Address: 0x4a1bb0, Func Offset: 0x130
	// Line 895, Address: 0x4a1bc4, Func Offset: 0x144
	// Line 900, Address: 0x4a1bf8, Func Offset: 0x178
	// Line 901, Address: 0x4a1c04, Func Offset: 0x184
	// Line 904, Address: 0x4a1c60, Func Offset: 0x1e0
	// Line 905, Address: 0x4a1d44, Func Offset: 0x2c4
	// Line 906, Address: 0x4a1d48, Func Offset: 0x2c8
	// Line 909, Address: 0x4a1d50, Func Offset: 0x2d0
	// Line 906, Address: 0x4a1d58, Func Offset: 0x2d8
	// Line 909, Address: 0x4a1d64, Func Offset: 0x2e4
	// Line 910, Address: 0x4a1d8c, Func Offset: 0x30c
	// Line 916, Address: 0x4a1d9c, Func Offset: 0x31c
	// Line 918, Address: 0x4a1db0, Func Offset: 0x330
	// Line 925, Address: 0x4a1de4, Func Offset: 0x364
	// Line 928, Address: 0x4a1df0, Func Offset: 0x370
	// Line 929, Address: 0x4a1e10, Func Offset: 0x390
	// Line 930, Address: 0x4a1e20, Func Offset: 0x3a0
	// Line 931, Address: 0x4a1e28, Func Offset: 0x3a8
	// Line 932, Address: 0x4a1e3c, Func Offset: 0x3bc
	// Line 933, Address: 0x4a1e4c, Func Offset: 0x3cc
	// Line 935, Address: 0x4a1e58, Func Offset: 0x3d8
	// Line 938, Address: 0x4a1e5c, Func Offset: 0x3dc
	// Line 941, Address: 0x4a1e70, Func Offset: 0x3f0
	// Line 942, Address: 0x4a1e78, Func Offset: 0x3f8
	// Func End, Address: 0x4a1e9c, Func Offset: 0x41c
}

// iSndCalcVol__FP13xSndVoiceInfo
// Start address: 0x4a1ea0
iSndVol iSndCalcVol(xSndVoiceInfo* vp)
{
	float32 volL;
	float32 volR;
	float32 xzDeltaSquared;
	float32 fAudioDistance;
	float32 fDolbyLt;
	float32 fDolbyRt;
	float32 fCosListenerSoundDirAngleXZ;
	float32 fListenerSoundDirAngleXZ;
	float32 fHalfListenerSoundDirAngleMinus45XZ;
	float32 fHalfListenerSoundDirAngleMinus45XZ;
	float32 volscale;
	float32 fadeRange;
	float32 fCategoryFader;
	iSndVol ret;
	// Line 487, Address: 0x4a1ea0, Func Offset: 0
	// Line 491, Address: 0x4a1ec0, Func Offset: 0x20
	// Line 498, Address: 0x4a1ed0, Func Offset: 0x30
	// Line 497, Address: 0x4a1ed4, Func Offset: 0x34
	// Line 498, Address: 0x4a1ed8, Func Offset: 0x38
	// Line 497, Address: 0x4a1edc, Func Offset: 0x3c
	// Line 500, Address: 0x4a1ee0, Func Offset: 0x40
	// Line 499, Address: 0x4a1ee4, Func Offset: 0x44
	// Line 501, Address: 0x4a1ee8, Func Offset: 0x48
	// Line 500, Address: 0x4a1eec, Func Offset: 0x4c
	// Line 499, Address: 0x4a1ef0, Func Offset: 0x50
	// Line 500, Address: 0x4a1ef8, Func Offset: 0x58
	// Line 499, Address: 0x4a1efc, Func Offset: 0x5c
	// Line 503, Address: 0x4a1f00, Func Offset: 0x60
	// Line 500, Address: 0x4a1f08, Func Offset: 0x68
	// Line 501, Address: 0x4a1f0c, Func Offset: 0x6c
	// Line 503, Address: 0x4a1f10, Func Offset: 0x70
	// Line 501, Address: 0x4a1f14, Func Offset: 0x74
	// Line 503, Address: 0x4a1f18, Func Offset: 0x78
	// Line 505, Address: 0x4a1f40, Func Offset: 0xa0
	// Line 506, Address: 0x4a1f58, Func Offset: 0xb8
	// Line 507, Address: 0x4a1f5c, Func Offset: 0xbc
	// Line 515, Address: 0x4a1f60, Func Offset: 0xc0
	// Line 516, Address: 0x4a1f64, Func Offset: 0xc4
	// Line 520, Address: 0x4a1f74, Func Offset: 0xd4
	// Line 524, Address: 0x4a1fa4, Func Offset: 0x104
	// Line 526, Address: 0x4a1fb0, Func Offset: 0x110
	// Line 531, Address: 0x4a1fb8, Func Offset: 0x118
	// Line 534, Address: 0x4a1fc4, Func Offset: 0x124
	// Line 538, Address: 0x4a1ff0, Func Offset: 0x150
	// Line 540, Address: 0x4a2020, Func Offset: 0x180
	// Line 541, Address: 0x4a2040, Func Offset: 0x1a0
	// Line 542, Address: 0x4a2048, Func Offset: 0x1a8
	// Line 541, Address: 0x4a2064, Func Offset: 0x1c4
	// Line 542, Address: 0x4a2068, Func Offset: 0x1c8
	// Line 543, Address: 0x4a207c, Func Offset: 0x1dc
	// Line 547, Address: 0x4a2084, Func Offset: 0x1e4
	// Line 546, Address: 0x4a208c, Func Offset: 0x1ec
	// Line 547, Address: 0x4a2090, Func Offset: 0x1f0
	// Line 548, Address: 0x4a209c, Func Offset: 0x1fc
	// Line 547, Address: 0x4a20a8, Func Offset: 0x208
	// Line 548, Address: 0x4a20ac, Func Offset: 0x20c
	// Line 547, Address: 0x4a20b8, Func Offset: 0x218
	// Line 548, Address: 0x4a20bc, Func Offset: 0x21c
	// Line 549, Address: 0x4a20d8, Func Offset: 0x238
	// Line 555, Address: 0x4a20e8, Func Offset: 0x248
	// Line 560, Address: 0x4a20f4, Func Offset: 0x254
	// Line 561, Address: 0x4a20f8, Func Offset: 0x258
	// Line 560, Address: 0x4a20fc, Func Offset: 0x25c
	// Line 561, Address: 0x4a2100, Func Offset: 0x260
	// Line 563, Address: 0x4a210c, Func Offset: 0x26c
	// Line 564, Address: 0x4a2110, Func Offset: 0x270
	// Line 563, Address: 0x4a2114, Func Offset: 0x274
	// Line 565, Address: 0x4a2118, Func Offset: 0x278
	// Line 566, Address: 0x4a2120, Func Offset: 0x280
	// Line 568, Address: 0x4a2124, Func Offset: 0x284
	// Line 569, Address: 0x4a212c, Func Offset: 0x28c
	// Line 571, Address: 0x4a2154, Func Offset: 0x2b4
	// Line 573, Address: 0x4a2168, Func Offset: 0x2c8
	// Line 574, Address: 0x4a2170, Func Offset: 0x2d0
	// Line 577, Address: 0x4a2180, Func Offset: 0x2e0
	// Line 579, Address: 0x4a2188, Func Offset: 0x2e8
	// Line 578, Address: 0x4a218c, Func Offset: 0x2ec
	// Line 582, Address: 0x4a2190, Func Offset: 0x2f0
	// Line 583, Address: 0x4a219c, Func Offset: 0x2fc
	// Line 584, Address: 0x4a21a0, Func Offset: 0x300
	// Line 585, Address: 0x4a21ac, Func Offset: 0x30c
	// Line 589, Address: 0x4a21b0, Func Offset: 0x310
	// Line 590, Address: 0x4a227c, Func Offset: 0x3dc
	// Line 589, Address: 0x4a2280, Func Offset: 0x3e0
	// Line 590, Address: 0x4a22b8, Func Offset: 0x418
	// Line 593, Address: 0x4a22d8, Func Offset: 0x438
	// Line 594, Address: 0x4a22dc, Func Offset: 0x43c
	// Line 593, Address: 0x4a22e0, Func Offset: 0x440
	// Line 594, Address: 0x4a22e4, Func Offset: 0x444
	// Line 593, Address: 0x4a22e8, Func Offset: 0x448
	// Line 594, Address: 0x4a22ec, Func Offset: 0x44c
	// Line 596, Address: 0x4a22f0, Func Offset: 0x450
	// Line 512, Address: 0x4a2318, Func Offset: 0x478
	// Line 534, Address: 0x4a2324, Func Offset: 0x484
	// Line 596, Address: 0x4a2328, Func Offset: 0x488
	// Line 534, Address: 0x4a2330, Func Offset: 0x490
	// Line 596, Address: 0x4a2380, Func Offset: 0x4e0
	// Line 590, Address: 0x4a239c, Func Offset: 0x4fc
	// Line 596, Address: 0x4a23a8, Func Offset: 0x508
	// Line 597, Address: 0x4a23bc, Func Offset: 0x51c
	// Func End, Address: 0x4a23dc, Func Offset: 0x53c
}

// iSndSetEnvironmentalEffect__Fi
// Start address: 0x4a23e0
void iSndSetEnvironmentalEffect(int32 effectType)
{
	// Line 463, Address: 0x4a23e0, Func Offset: 0
	// Line 468, Address: 0x4a23e4, Func Offset: 0x4
	// Line 470, Address: 0x4a2400, Func Offset: 0x20
	// Line 471, Address: 0x4a2420, Func Offset: 0x40
	// Line 475, Address: 0x4a2428, Func Offset: 0x48
	// Line 482, Address: 0x4a2448, Func Offset: 0x68
	// Func End, Address: 0x4a2454, Func Offset: 0x74
}

// iSndInitSceneLoaded__Fv
// Start address: 0x4a2460
void iSndInitSceneLoaded()
{
	// Line 418, Address: 0x4a2460, Func Offset: 0
	// Line 420, Address: 0x4a2468, Func Offset: 0x8
	// Line 421, Address: 0x4a2478, Func Offset: 0x18
	// Line 422, Address: 0x4a2480, Func Offset: 0x20
	// Line 451, Address: 0x4a2484, Func Offset: 0x24
	// Line 422, Address: 0x4a2488, Func Offset: 0x28
	// Line 451, Address: 0x4a2498, Func Offset: 0x38
	// Func End, Address: 0x4a24a0, Func Offset: 0x40
}

// iSndLoadFasterer__Fv
// Start address: 0x4a24a0
void iSndLoadFasterer()
{
	int32 request;
	int32 index;
	uint32 size;
	SndInfo* sndInfo;
	VAGheader* vagIterator;
	PKRAssetTOCInfo xinfo;
	int8* hipname;
	int32 fileIndex;
	int32 startSPUAddress;
	uint32 totalToRead;
	int32 i;
	int8* pszAssetName;
	uint8 bLooping;
	iSndFileInfo* file;
	int32 i;
	PKRAssetTOCInfo xinfo;
	int8* pszAssetName;
	uint8 bLooping;
	iSndFileInfo* file;
	PKRAssetTOCInfo xinfo;
	// Line 277, Address: 0x4a24a0, Func Offset: 0
	// Line 279, Address: 0x4a24c8, Func Offset: 0x28
	// Line 280, Address: 0x4a24d0, Func Offset: 0x30
	// Line 290, Address: 0x4a24dc, Func Offset: 0x3c
	// Line 283, Address: 0x4a24e0, Func Offset: 0x40
	// Line 295, Address: 0x4a24e4, Func Offset: 0x44
	// Line 297, Address: 0x4a24ec, Func Offset: 0x4c
	// Line 298, Address: 0x4a2504, Func Offset: 0x64
	// Line 302, Address: 0x4a250c, Func Offset: 0x6c
	// Line 303, Address: 0x4a2524, Func Offset: 0x84
	// Line 310, Address: 0x4a2528, Func Offset: 0x88
	// Line 312, Address: 0x4a2540, Func Offset: 0xa0
	// Line 313, Address: 0x4a2548, Func Offset: 0xa8
	// Line 317, Address: 0x4a2554, Func Offset: 0xb4
	// Line 319, Address: 0x4a2558, Func Offset: 0xb8
	// Line 318, Address: 0x4a255c, Func Offset: 0xbc
	// Line 319, Address: 0x4a2560, Func Offset: 0xc0
	// Line 353, Address: 0x4a2570, Func Offset: 0xd0
	// Line 384, Address: 0x4a2580, Func Offset: 0xe0
	// Line 385, Address: 0x4a2588, Func Offset: 0xe8
	// Line 386, Address: 0x4a2590, Func Offset: 0xf0
	// Line 388, Address: 0x4a2598, Func Offset: 0xf8
	// Line 390, Address: 0x4a25a4, Func Offset: 0x104
	// Line 399, Address: 0x4a25d0, Func Offset: 0x130
	// Line 324, Address: 0x4a25e4, Func Offset: 0x144
	// Line 399, Address: 0x4a25e8, Func Offset: 0x148
	// Line 328, Address: 0x4a2608, Func Offset: 0x168
	// Line 399, Address: 0x4a260c, Func Offset: 0x16c
	// Line 328, Address: 0x4a2614, Func Offset: 0x174
	// Line 399, Address: 0x4a2618, Func Offset: 0x178
	// Line 358, Address: 0x4a2690, Func Offset: 0x1f0
	// Line 399, Address: 0x4a2694, Func Offset: 0x1f4
	// Line 367, Address: 0x4a26b0, Func Offset: 0x210
	// Line 399, Address: 0x4a26b4, Func Offset: 0x214
	// Line 362, Address: 0x4a26bc, Func Offset: 0x21c
	// Line 399, Address: 0x4a26c0, Func Offset: 0x220
	// Line 362, Address: 0x4a26cc, Func Offset: 0x22c
	// Line 399, Address: 0x4a26d0, Func Offset: 0x230
	// Line 373, Address: 0x4a2704, Func Offset: 0x264
	// Line 399, Address: 0x4a2708, Func Offset: 0x268
	// Line 401, Address: 0x4a2730, Func Offset: 0x290
	// Line 413, Address: 0x4a273c, Func Offset: 0x29c
	// Func End, Address: 0x4a2780, Func Offset: 0x2e0
}

// iSndInit__Fv
// Start address: 0x4a2780
void iSndInit()
{
	// Line 203, Address: 0x4a2780, Func Offset: 0
	// Line 205, Address: 0x4a2788, Func Offset: 0x8
	// Line 259, Address: 0x4a2790, Func Offset: 0x10
	// Line 260, Address: 0x4a279c, Func Offset: 0x1c
	// Func End, Address: 0x4a27a8, Func Offset: 0x28
}

// iSndSuspendCD__FUi
// Start address: 0x4a27b0
void iSndSuspendCD()
{
	// Line 198, Address: 0x4a27b0, Func Offset: 0
	// Func End, Address: 0x4a27b8, Func Offset: 0x8
}

// iSndLookup__FUi
// Start address: 0x4a27c0
iSndFileInfo* iSndLookup(uint32 id)
{
	int32 i;
	// Line 187, Address: 0x4a27c0, Func Offset: 0
	// Line 188, Address: 0x4a27d8, Func Offset: 0x18
	// Line 189, Address: 0x4a27e4, Func Offset: 0x24
	// Line 192, Address: 0x4a2810, Func Offset: 0x50
	// Line 193, Address: 0x4a2814, Func Offset: 0x54
	// Func End, Address: 0x4a281c, Func Offset: 0x5c
}

