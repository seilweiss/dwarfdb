



void xSndMgrStopChildren(xEnt* pParentEnt);
void xSndMgrStartStereo(iSndHandle hSnd00, iSndHandle hSnd01);
void xSndMgrSetPitch(iSndHandle hSound, float32 fPitch);
void xSndMgrSetVolume(iSndHandle hSound, float32 fVolume);
void xSndMgrStop(iSndHandle& hInHandle);
void xSndMgrPause(iSndHandle hSound, uint8 bPause);
uint32 xSndMgrIsReady(iSndHandle hSound);
uint8 xSndMgrIsPlaying(iSndHandle hSound);
uint32 xSndMgrGetSoundId(iSndHandle hSound);
iSndHandle xSndMgrPlay(iSndGroupHandle hSoundToPlay, uint32 uFlags, xVec3* pPos_WS, xVec3* pVel, xEnt* pParentEnt, float32* pfOverrideVolume, float32* pfOverridePitch);
uint8 xSndMgrVoiceAvailable(exVoiceType voiceType, uint32 priority);
uint8 xSndMgrIsPlaying(iSndGroupHandle hSoundGroup);
iSndGroupHandle xSndMgrGetSoundGroup(uint32 uSoundGroupNameHash);
uint32 xSndMgrGetSoundId(iSndGroupHandle hSound, uint32 uIndexOfSound);
uint8 xSndMgrGetSoundCount(iSndGroupHandle hSound);
float32 xSndMgrGetDampedVolume(int16 eSoundCategory);
float32 xSndMgrGetUserVolume(int16 eSoundCategory);
void xSndMgrSetUserVolume(int16 eSoundCategory, float32 fVolume);
void xSndMgrPauseSounds(int16 eSoundCategory, uint8 bPaused, uint8 bPauseFutureSoundsOfThisType);
void xSndMgrStopSounds(int16 eSoundCategory, uint8 bSkipPaused);
void xSndMgrSceneExit();
void xSndMgrUpdate();
void xSndMgrSceneInit();
uint8 xSndMgr_SetInaudible(xSndVoiceInfo* pVoice);
uint8 xSndMgr_UpdateVoicePosition(xSndVoiceInfo* pVoice);
void xSndMgr_UpdateListenerPosition();
void xSndMgrProcessSoundPosition(xVec3* pActual, xVec3* pProcessed);
xSndEffect xSndMgrGetEffect();
void xSndMgrSetEffect(xSndEffect Effect);
void xSndMgrSelectListenerMode(xSndListener Mode);
void xSndMgrInit();
xSndGroup* xSndMgr_AllocGroup(uint8 nSoundAssets);

// xSndMgrStopChildren__FP4xEnt
// Start address: 0x454f60
void xSndMgrStopChildren(xEnt* pParentEnt)
{
	uint32 i;
	xSndVoiceInfo* vp;
	// Line 1468, Address: 0x454f60, Func Offset: 0
	// Line 1472, Address: 0x454f78, Func Offset: 0x18
	// Line 1470, Address: 0x454f7c, Func Offset: 0x1c
	// Line 1472, Address: 0x454f84, Func Offset: 0x24
	// Line 1474, Address: 0x454f88, Func Offset: 0x28
	// Line 1476, Address: 0x454fa0, Func Offset: 0x40
	// Line 1478, Address: 0x454ff8, Func Offset: 0x98
	// Line 1479, Address: 0x455008, Func Offset: 0xa8
	// Line 1476, Address: 0x45501c, Func Offset: 0xbc
	// Line 1479, Address: 0x455028, Func Offset: 0xc8
	// Func End, Address: 0x455040, Func Offset: 0xe0
}

// xSndMgrStartStereo__F10iSndHandle10iSndHandle
// Start address: 0x455040
void xSndMgrStartStereo(iSndHandle hSnd00, iSndHandle hSnd01)
{
	// Line 1452, Address: 0x455040, Func Offset: 0
	// Func End, Address: 0x455048, Func Offset: 0x8
}

// xSndMgrSetPitch__F10iSndHandlef
// Start address: 0x455050
void xSndMgrSetPitch(iSndHandle hSound, float32 fPitch)
{
	int32 i;
	// Line 1431, Address: 0x455050, Func Offset: 0
	// Line 1432, Address: 0x455054, Func Offset: 0x4
	// Line 1431, Address: 0x455058, Func Offset: 0x8
	// Line 1432, Address: 0x455070, Func Offset: 0x20
	// Line 1437, Address: 0x455078, Func Offset: 0x28
	// Line 1439, Address: 0x455084, Func Offset: 0x34
	// Line 1441, Address: 0x4550a0, Func Offset: 0x50
	// Line 1444, Address: 0x4550ac, Func Offset: 0x5c
	// Line 1445, Address: 0x4550b0, Func Offset: 0x60
	// Line 1446, Address: 0x4550b4, Func Offset: 0x64
	// Line 1447, Address: 0x4550b8, Func Offset: 0x68
	// Line 1448, Address: 0x4550c8, Func Offset: 0x78
	// Line 1443, Address: 0x4550d0, Func Offset: 0x80
	// Line 1448, Address: 0x4550d4, Func Offset: 0x84
	// Func End, Address: 0x455104, Func Offset: 0xb4
}

// xSndMgrSetVolume__F10iSndHandlef
// Start address: 0x455110
void xSndMgrSetVolume(iSndHandle hSound, float32 fVolume)
{
	int32 i;
	// Line 1409, Address: 0x455110, Func Offset: 0
	// Line 1410, Address: 0x455114, Func Offset: 0x4
	// Line 1409, Address: 0x455118, Func Offset: 0x8
	// Line 1410, Address: 0x455130, Func Offset: 0x20
	// Line 1417, Address: 0x455138, Func Offset: 0x28
	// Line 1419, Address: 0x455144, Func Offset: 0x34
	// Line 1421, Address: 0x455160, Func Offset: 0x50
	// Line 1424, Address: 0x45516c, Func Offset: 0x5c
	// Line 1425, Address: 0x455170, Func Offset: 0x60
	// Line 1426, Address: 0x455174, Func Offset: 0x64
	// Line 1427, Address: 0x455178, Func Offset: 0x68
	// Line 1428, Address: 0x455188, Func Offset: 0x78
	// Line 1423, Address: 0x455190, Func Offset: 0x80
	// Line 1428, Address: 0x455194, Func Offset: 0x84
	// Func End, Address: 0x4551c4, Func Offset: 0xb4
}

// xSndMgrStop__FR10iSndHandle
// Start address: 0x4551d0
void xSndMgrStop(iSndHandle& hInHandle)
{
	int32 i;
	// Line 1391, Address: 0x4551d0, Func Offset: 0
	// Line 1392, Address: 0x4551d4, Func Offset: 0x4
	// Line 1391, Address: 0x4551d8, Func Offset: 0x8
	// Line 1392, Address: 0x4551ec, Func Offset: 0x1c
	// Line 1397, Address: 0x4551f4, Func Offset: 0x24
	// Line 1399, Address: 0x455200, Func Offset: 0x30
	// Line 1401, Address: 0x455220, Func Offset: 0x50
	// Line 1399, Address: 0x455224, Func Offset: 0x54
	// Line 1401, Address: 0x455228, Func Offset: 0x58
	// Line 1399, Address: 0x455230, Func Offset: 0x60
	// Line 1401, Address: 0x455238, Func Offset: 0x68
	// Line 1402, Address: 0x45529c, Func Offset: 0xcc
	// Line 1404, Address: 0x4552a4, Func Offset: 0xd4
	// Line 1405, Address: 0x4552b8, Func Offset: 0xe8
	// Line 1406, Address: 0x4552bc, Func Offset: 0xec
	// Line 1401, Address: 0x4552f0, Func Offset: 0x120
	// Line 1406, Address: 0x4552f8, Func Offset: 0x128
	// Func End, Address: 0x45530c, Func Offset: 0x13c
}

// xSndMgrPause__F10iSndHandleb
// Start address: 0x455310
void xSndMgrPause(iSndHandle hSound, uint8 bPause)
{
	int32 i;
	// Line 1359, Address: 0x455310, Func Offset: 0
	// Line 1360, Address: 0x455314, Func Offset: 0x4
	// Line 1359, Address: 0x455318, Func Offset: 0x8
	// Line 1360, Address: 0x455334, Func Offset: 0x24
	// Line 1365, Address: 0x45533c, Func Offset: 0x2c
	// Line 1368, Address: 0x45534c, Func Offset: 0x3c
	// Line 1370, Address: 0x455368, Func Offset: 0x58
	// Line 1372, Address: 0x4553a4, Func Offset: 0x94
	// Line 1388, Address: 0x4553b8, Func Offset: 0xa8
	// Func End, Address: 0x4553d8, Func Offset: 0xc8
}

// xSndMgrIsReady__F10iSndHandle
// Start address: 0x4553e0
uint32 xSndMgrIsReady(iSndHandle hSound)
{
	// Line 1349, Address: 0x4553e0, Func Offset: 0
	// Line 1353, Address: 0x4553e4, Func Offset: 0x4
	// Line 1356, Address: 0x455404, Func Offset: 0x24
	// Func End, Address: 0x455410, Func Offset: 0x30
}

// xSndMgrIsPlaying__F10iSndHandle
// Start address: 0x455410
uint8 xSndMgrIsPlaying(iSndHandle hSound)
{
	int32 i;
	// Line 1336, Address: 0x455410, Func Offset: 0
	// Line 1342, Address: 0x45541c, Func Offset: 0xc
	// Line 1343, Address: 0x455428, Func Offset: 0x18
	// Line 1344, Address: 0x455444, Func Offset: 0x34
	// Line 1345, Address: 0x45545c, Func Offset: 0x4c
	// Line 1346, Address: 0x455460, Func Offset: 0x50
	// Func End, Address: 0x455468, Func Offset: 0x58
}

// xSndMgrGetSoundId__F10iSndHandle
// Start address: 0x455470
uint32 xSndMgrGetSoundId(iSndHandle hSound)
{
	int32 i;
	// Line 1322, Address: 0x455470, Func Offset: 0
	// Line 1327, Address: 0x45547c, Func Offset: 0xc
	// Line 1328, Address: 0x455488, Func Offset: 0x18
	// Line 1329, Address: 0x4554a4, Func Offset: 0x34
	// Line 1331, Address: 0x4554dc, Func Offset: 0x6c
	// Line 1332, Address: 0x4554e0, Func Offset: 0x70
	// Func End, Address: 0x4554e8, Func Offset: 0x78
}

// xSndMgrPlay__F15iSndGroupHandleUiPC5xVec3PC5xVec3P4xEntPfPf
// Start address: 0x4554f0
iSndHandle xSndMgrPlay(iSndGroupHandle hSoundToPlay, uint32 uFlags, xVec3* pPos_WS, xVec3* pVel, xEnt* pParentEnt, float32* pfOverrideVolume, float32* pfOverridePitch)
{
	uint32 uInfoIndex;
	xSndGroupInfo* pSndInfo;
	uint32 iFlags;
	iSndFileInfo* ip;
	xSndVoiceInfo* vp;
	uint8 bOKtoPlay;
	uint8 bPlaying;
	// Line 1045, Address: 0x4554f0, Func Offset: 0
	// Line 1055, Address: 0x4554f4, Func Offset: 0x4
	// Line 1045, Address: 0x4554f8, Func Offset: 0x8
	// Line 1055, Address: 0x455540, Func Offset: 0x50
	// Line 1061, Address: 0x455548, Func Offset: 0x58
	// Line 1063, Address: 0x455554, Func Offset: 0x64
	// Line 1064, Address: 0x4555b4, Func Offset: 0xc4
	// Line 1063, Address: 0x4555bc, Func Offset: 0xcc
	// Line 1068, Address: 0x4555c4, Func Offset: 0xd4
	// Line 1069, Address: 0x4555d8, Func Offset: 0xe8
	// Line 1071, Address: 0x4555e0, Func Offset: 0xf0
	// Line 1085, Address: 0x4555e4, Func Offset: 0xf4
	// Line 1071, Address: 0x4555e8, Func Offset: 0xf8
	// Line 1085, Address: 0x4555f0, Func Offset: 0x100
	// Line 1086, Address: 0x4555fc, Func Offset: 0x10c
	// Line 1092, Address: 0x455604, Func Offset: 0x114
	// Line 1094, Address: 0x455610, Func Offset: 0x120
	// Line 1095, Address: 0x455614, Func Offset: 0x124
	// Line 1108, Address: 0x45561c, Func Offset: 0x12c
	// Line 1109, Address: 0x45562c, Func Offset: 0x13c
	// Line 1111, Address: 0x455638, Func Offset: 0x148
	// Line 1114, Address: 0x455640, Func Offset: 0x150
	// Line 1115, Address: 0x455664, Func Offset: 0x174
	// Line 1118, Address: 0x45566c, Func Offset: 0x17c
	// Line 1120, Address: 0x45567c, Func Offset: 0x18c
	// Line 1123, Address: 0x455698, Func Offset: 0x1a8
	// Line 1125, Address: 0x45569c, Func Offset: 0x1ac
	// Line 1127, Address: 0x4556bc, Func Offset: 0x1cc
	// Line 1130, Address: 0x4556c8, Func Offset: 0x1d8
	// Line 1132, Address: 0x4556dc, Func Offset: 0x1ec
	// Line 1142, Address: 0x455750, Func Offset: 0x260
	// Line 1088, Address: 0x455758, Func Offset: 0x268
	// Line 1142, Address: 0x455760, Func Offset: 0x270
	// Line 1145, Address: 0x455764, Func Offset: 0x274
	// Line 1149, Address: 0x455770, Func Offset: 0x280
	// Line 1152, Address: 0x45577c, Func Offset: 0x28c
	// Line 1153, Address: 0x455790, Func Offset: 0x2a0
	// Line 1161, Address: 0x455798, Func Offset: 0x2a8
	// Line 1162, Address: 0x4557a8, Func Offset: 0x2b8
	// Line 1169, Address: 0x4557b0, Func Offset: 0x2c0
	// Line 1177, Address: 0x4557dc, Func Offset: 0x2ec
	// Line 1178, Address: 0x4557f4, Func Offset: 0x304
	// Line 1179, Address: 0x45580c, Func Offset: 0x31c
	// Line 1180, Address: 0x45584c, Func Offset: 0x35c
	// Line 1181, Address: 0x455860, Func Offset: 0x370
	// Line 1184, Address: 0x455878, Func Offset: 0x388
	// Line 1182, Address: 0x45587c, Func Offset: 0x38c
	// Line 1185, Address: 0x455880, Func Offset: 0x390
	// Line 1187, Address: 0x455884, Func Offset: 0x394
	// Line 1184, Address: 0x45588c, Func Offset: 0x39c
	// Line 1182, Address: 0x455890, Func Offset: 0x3a0
	// Line 1183, Address: 0x455894, Func Offset: 0x3a4
	// Line 1184, Address: 0x455898, Func Offset: 0x3a8
	// Line 1185, Address: 0x45589c, Func Offset: 0x3ac
	// Line 1186, Address: 0x4558a0, Func Offset: 0x3b0
	// Line 1187, Address: 0x4558a8, Func Offset: 0x3b8
	// Line 1188, Address: 0x4558b8, Func Offset: 0x3c8
	// Line 1207, Address: 0x4558bc, Func Offset: 0x3cc
	// Line 1209, Address: 0x4558c8, Func Offset: 0x3d8
	// Line 1212, Address: 0x4558d0, Func Offset: 0x3e0
	// Line 1213, Address: 0x4558dc, Func Offset: 0x3ec
	// Line 1214, Address: 0x4558e0, Func Offset: 0x3f0
	// Line 1215, Address: 0x4558e4, Func Offset: 0x3f4
	// Line 1216, Address: 0x455904, Func Offset: 0x414
	// Line 1217, Address: 0x455908, Func Offset: 0x418
	// Line 1218, Address: 0x45591c, Func Offset: 0x42c
	// Line 1217, Address: 0x455928, Func Offset: 0x438
	// Line 1218, Address: 0x45592c, Func Offset: 0x43c
	// Line 1221, Address: 0x455958, Func Offset: 0x468
	// Line 1222, Address: 0x45595c, Func Offset: 0x46c
	// Line 1221, Address: 0x455964, Func Offset: 0x474
	// Line 1222, Address: 0x45596c, Func Offset: 0x47c
	// Line 1288, Address: 0x455988, Func Offset: 0x498
	// Line 1299, Address: 0x45599c, Func Offset: 0x4ac
	// Line 1301, Address: 0x4559b0, Func Offset: 0x4c0
	// Line 1307, Address: 0x4559b8, Func Offset: 0x4c8
	// Line 1317, Address: 0x4559c0, Func Offset: 0x4d0
	// Line 1147, Address: 0x4559c8, Func Offset: 0x4d8
	// Line 1317, Address: 0x4559cc, Func Offset: 0x4dc
	// Line 1148, Address: 0x4559d4, Func Offset: 0x4e4
	// Line 1163, Address: 0x4559dc, Func Offset: 0x4ec
	// Line 1317, Address: 0x4559e4, Func Offset: 0x4f4
	// Line 1179, Address: 0x4559f0, Func Offset: 0x500
	// Line 1317, Address: 0x4559f8, Func Offset: 0x508
	// Line 1180, Address: 0x455a04, Func Offset: 0x514
	// Line 1218, Address: 0x455a20, Func Offset: 0x530
	// Line 1317, Address: 0x455a2c, Func Offset: 0x53c
	// Line 1218, Address: 0x455a78, Func Offset: 0x588
	// Line 1317, Address: 0x455a7c, Func Offset: 0x58c
	// Line 1218, Address: 0x455a80, Func Offset: 0x590
	// Line 1317, Address: 0x455a84, Func Offset: 0x594
	// Line 1218, Address: 0x455a9c, Func Offset: 0x5ac
	// Line 1317, Address: 0x455aa0, Func Offset: 0x5b0
	// Line 1218, Address: 0x455abc, Func Offset: 0x5cc
	// Line 1317, Address: 0x455ac0, Func Offset: 0x5d0
	// Line 1218, Address: 0x455ac8, Func Offset: 0x5d8
	// Line 1317, Address: 0x455acc, Func Offset: 0x5dc
	// Line 1218, Address: 0x455ae8, Func Offset: 0x5f8
	// Line 1317, Address: 0x455aec, Func Offset: 0x5fc
	// Line 1218, Address: 0x455afc, Func Offset: 0x60c
	// Line 1317, Address: 0x455b04, Func Offset: 0x614
	// Line 1231, Address: 0x455b2c, Func Offset: 0x63c
	// Line 1226, Address: 0x455b30, Func Offset: 0x640
	// Line 1317, Address: 0x455b34, Func Offset: 0x644
	// Line 1231, Address: 0x455b58, Func Offset: 0x668
	// Line 1317, Address: 0x455b5c, Func Offset: 0x66c
	// Line 1231, Address: 0x455b64, Func Offset: 0x674
	// Line 1317, Address: 0x455b70, Func Offset: 0x680
	// Line 1235, Address: 0x455b90, Func Offset: 0x6a0
	// Line 1317, Address: 0x455b98, Func Offset: 0x6a8
	// Line 1239, Address: 0x455ba4, Func Offset: 0x6b4
	// Line 1317, Address: 0x455bac, Func Offset: 0x6bc
	// Line 1262, Address: 0x455bf4, Func Offset: 0x704
	// Line 1317, Address: 0x455bfc, Func Offset: 0x70c
	// Line 1303, Address: 0x455c64, Func Offset: 0x774
	// Line 1317, Address: 0x455c68, Func Offset: 0x778
	// Line 1304, Address: 0x455c80, Func Offset: 0x790
	// Line 1317, Address: 0x455c84, Func Offset: 0x794
	// Line 1304, Address: 0x455c88, Func Offset: 0x798
	// Line 1317, Address: 0x455c98, Func Offset: 0x7a8
	// Line 1304, Address: 0x455ca0, Func Offset: 0x7b0
	// Line 1317, Address: 0x455cac, Func Offset: 0x7bc
	// Line 1304, Address: 0x455cb4, Func Offset: 0x7c4
	// Line 1317, Address: 0x455cc0, Func Offset: 0x7d0
	// Line 1304, Address: 0x455cc8, Func Offset: 0x7d8
	// Line 1317, Address: 0x455cd4, Func Offset: 0x7e4
	// Line 1304, Address: 0x455cdc, Func Offset: 0x7ec
	// Line 1317, Address: 0x455ce8, Func Offset: 0x7f8
	// Line 1304, Address: 0x455cf0, Func Offset: 0x800
	// Line 1317, Address: 0x455cfc, Func Offset: 0x80c
	// Line 1304, Address: 0x455d04, Func Offset: 0x814
	// Line 1317, Address: 0x455d10, Func Offset: 0x820
	// Line 1304, Address: 0x455d18, Func Offset: 0x828
	// Line 1317, Address: 0x455d28, Func Offset: 0x838
	// Line 1315, Address: 0x455d48, Func Offset: 0x858
	// Line 1318, Address: 0x455d4c, Func Offset: 0x85c
	// Func End, Address: 0x455d84, Func Offset: 0x894
}

// xSndMgrVoiceAvailable__F11exVoiceTypeUi
// Start address: 0x455d90
uint8 xSndMgrVoiceAvailable(exVoiceType voiceType, uint32 priority)
{
	// Line 1040, Address: 0x455d90, Func Offset: 0
	// Line 1041, Address: 0x455d94, Func Offset: 0x4
	// Line 1040, Address: 0x455d9c, Func Offset: 0xc
	// Line 1041, Address: 0x455da0, Func Offset: 0x10
	// Line 1042, Address: 0x455dac, Func Offset: 0x1c
	// Line 1041, Address: 0x455db0, Func Offset: 0x20
	// Line 1042, Address: 0x455db4, Func Offset: 0x24
	// Func End, Address: 0x455dbc, Func Offset: 0x2c
}

// xSndMgrIsPlaying__F15iSndGroupHandle
// Start address: 0x455dc0
uint8 xSndMgrIsPlaying(iSndGroupHandle hSoundGroup)
{
	int32 i;
	// Line 971, Address: 0x455dc0, Func Offset: 0
	// Line 976, Address: 0x455dcc, Func Offset: 0xc
	// Line 978, Address: 0x455dd8, Func Offset: 0x18
	// Line 979, Address: 0x455df4, Func Offset: 0x34
	// Line 980, Address: 0x455dfc, Func Offset: 0x3c
	// Line 981, Address: 0x455e0c, Func Offset: 0x4c
	// Line 982, Address: 0x455e10, Func Offset: 0x50
	// Func End, Address: 0x455e18, Func Offset: 0x58
}

// xSndMgrGetSoundGroup__FUi
// Start address: 0x455e20
iSndGroupHandle xSndMgrGetSoundGroup(uint32 uSoundGroupNameHash)
{
	iSndGroupHandle retHandle;
	xSndGroup* pSndGroup;
	// Line 947, Address: 0x455e20, Func Offset: 0
	// Line 948, Address: 0x455e30, Func Offset: 0x10
	// Line 951, Address: 0x455e38, Func Offset: 0x18
	// Line 953, Address: 0x455e40, Func Offset: 0x20
	// Line 954, Address: 0x455e4c, Func Offset: 0x2c
	// Line 957, Address: 0x455e54, Func Offset: 0x34
	// Line 960, Address: 0x455e5c, Func Offset: 0x3c
	// Line 965, Address: 0x455e68, Func Offset: 0x48
	// Line 967, Address: 0x455e88, Func Offset: 0x68
	// Func End, Address: 0x455e9c, Func Offset: 0x7c
}

// xSndMgrGetSoundId__F15iSndGroupHandleUi
// Start address: 0x455ea0
uint32 xSndMgrGetSoundId(iSndGroupHandle hSound, uint32 uIndexOfSound)
{
	// Line 933, Address: 0x455ea0, Func Offset: 0
	// Line 940, Address: 0x455eac, Func Offset: 0xc
	// Line 944, Address: 0x455ec8, Func Offset: 0x28
	// Func End, Address: 0x455ed0, Func Offset: 0x30
}

// xSndMgrGetSoundCount__F15iSndGroupHandle
// Start address: 0x455ed0
uint8 xSndMgrGetSoundCount(iSndGroupHandle hSound)
{
	// Line 926, Address: 0x455ed0, Func Offset: 0
	// Line 930, Address: 0x455ee8, Func Offset: 0x18
	// Func End, Address: 0x455ef0, Func Offset: 0x20
}

// xSndMgrGetDampedVolume__Fs
// Start address: 0x455ef0
float32 xSndMgrGetDampedVolume(int16 eSoundCategory)
{
	float32 fRealVolume;
	// Line 815, Address: 0x455efc, Func Offset: 0xc
	// Line 817, Address: 0x455f18, Func Offset: 0x28
	// Line 815, Address: 0x455f1c, Func Offset: 0x2c
	// Line 817, Address: 0x455f20, Func Offset: 0x30
	// Line 815, Address: 0x455f28, Func Offset: 0x38
	// Line 817, Address: 0x455f2c, Func Offset: 0x3c
	// Line 818, Address: 0x455f7c, Func Offset: 0x8c
	// Func End, Address: 0x455f84, Func Offset: 0x94
}

// xSndMgrGetUserVolume__Fs
// Start address: 0x455f90
float32 xSndMgrGetUserVolume(int16 eSoundCategory)
{
	// Line 801, Address: 0x455f9c, Func Offset: 0xc
	// Line 805, Address: 0x455fac, Func Offset: 0x1c
	// Line 808, Address: 0x455fcc, Func Offset: 0x3c
	// Func End, Address: 0x455fd4, Func Offset: 0x44
}

// xSndMgrSetUserVolume__Fsf
// Start address: 0x455fe0
void xSndMgrSetUserVolume(int16 eSoundCategory, float32 fVolume)
{
	// Line 781, Address: 0x455fe4, Func Offset: 0x4
	// Line 784, Address: 0x456008, Func Offset: 0x28
	// Line 787, Address: 0x45600c, Func Offset: 0x2c
	// Line 788, Address: 0x456010, Func Offset: 0x30
	// Line 787, Address: 0x456014, Func Offset: 0x34
	// Line 789, Address: 0x456018, Func Offset: 0x38
	// Line 788, Address: 0x45601c, Func Offset: 0x3c
	// Line 789, Address: 0x456020, Func Offset: 0x40
	// Line 790, Address: 0x456024, Func Offset: 0x44
	// Line 791, Address: 0x456028, Func Offset: 0x48
	// Line 790, Address: 0x45602c, Func Offset: 0x4c
	// Line 792, Address: 0x456030, Func Offset: 0x50
	// Line 795, Address: 0x456038, Func Offset: 0x58
	// Line 798, Address: 0x456048, Func Offset: 0x68
	// Func End, Address: 0x456050, Func Offset: 0x70
}

// xSndMgrPauseSounds__Fsbb
// Start address: 0x456050
void xSndMgrPauseSounds(int16 eSoundCategory, uint8 bPaused, uint8 bPauseFutureSoundsOfThisType)
{
	int32 i;
	int32 i;
	int32 i;
	// Line 744, Address: 0x456050, Func Offset: 0
	// Line 745, Address: 0x456054, Func Offset: 0x4
	// Line 744, Address: 0x456058, Func Offset: 0x8
	// Line 745, Address: 0x456080, Func Offset: 0x30
	// Line 747, Address: 0x456088, Func Offset: 0x38
	// Line 749, Address: 0x456098, Func Offset: 0x48
	// Line 753, Address: 0x4560a8, Func Offset: 0x58
	// Line 776, Address: 0x4560b8, Func Offset: 0x68
	// Line 777, Address: 0x4562f4, Func Offset: 0x2a4
	// Line 751, Address: 0x4562fc, Func Offset: 0x2ac
	// Line 777, Address: 0x456300, Func Offset: 0x2b0
	// Line 751, Address: 0x456314, Func Offset: 0x2c4
	// Line 777, Address: 0x456328, Func Offset: 0x2d8
	// Line 751, Address: 0x45632c, Func Offset: 0x2dc
	// Line 755, Address: 0x456340, Func Offset: 0x2f0
	// Line 777, Address: 0x456344, Func Offset: 0x2f4
	// Line 757, Address: 0x456350, Func Offset: 0x300
	// Line 777, Address: 0x456354, Func Offset: 0x304
	// Line 759, Address: 0x456360, Func Offset: 0x310
	// Line 777, Address: 0x456364, Func Offset: 0x314
	// Line 759, Address: 0x456370, Func Offset: 0x320
	// Line 777, Address: 0x456374, Func Offset: 0x324
	// Line 761, Address: 0x45637c, Func Offset: 0x32c
	// Line 777, Address: 0x456380, Func Offset: 0x330
	// Line 761, Address: 0x456394, Func Offset: 0x344
	// Line 777, Address: 0x4563a8, Func Offset: 0x358
	// Line 761, Address: 0x4563ac, Func Offset: 0x35c
	// Line 777, Address: 0x4563b8, Func Offset: 0x368
	// Line 763, Address: 0x4563bc, Func Offset: 0x36c
	// Line 777, Address: 0x4563c0, Func Offset: 0x370
	// Line 764, Address: 0x4563d0, Func Offset: 0x380
	// Line 777, Address: 0x4563d8, Func Offset: 0x388
	// Line 767, Address: 0x4563dc, Func Offset: 0x38c
	// Line 777, Address: 0x4563e0, Func Offset: 0x390
	// Line 769, Address: 0x4563ec, Func Offset: 0x39c
	// Line 777, Address: 0x4563f0, Func Offset: 0x3a0
	// Line 771, Address: 0x456404, Func Offset: 0x3b4
	// Line 777, Address: 0x456408, Func Offset: 0x3b8
	// Line 771, Address: 0x45641c, Func Offset: 0x3cc
	// Line 777, Address: 0x456430, Func Offset: 0x3e0
	// Line 771, Address: 0x456434, Func Offset: 0x3e4
	// Line 777, Address: 0x456440, Func Offset: 0x3f0
	// Line 773, Address: 0x456444, Func Offset: 0x3f4
	// Line 777, Address: 0x456448, Func Offset: 0x3f8
	// Func End, Address: 0x456484, Func Offset: 0x434
}

// xSndMgrStopSounds__Fsb
// Start address: 0x456490
void xSndMgrStopSounds(int16 eSoundCategory, uint8 bSkipPaused)
{
	int32 i;
	int32 i;
	int32 i;
	// Line 708, Address: 0x456490, Func Offset: 0
	// Line 709, Address: 0x456494, Func Offset: 0x4
	// Line 708, Address: 0x456498, Func Offset: 0x8
	// Line 709, Address: 0x4564b8, Func Offset: 0x28
	// Line 711, Address: 0x4564c0, Func Offset: 0x30
	// Line 713, Address: 0x4564d4, Func Offset: 0x44
	// Line 715, Address: 0x4564f8, Func Offset: 0x68
	// Line 717, Address: 0x456550, Func Offset: 0xc0
	// Line 715, Address: 0x456558, Func Offset: 0xc8
	// Line 717, Address: 0x45655c, Func Offset: 0xcc
	// Line 740, Address: 0x456564, Func Offset: 0xd4
	// Line 741, Address: 0x456568, Func Offset: 0xd8
	// Line 715, Address: 0x45657c, Func Offset: 0xec
	// Line 722, Address: 0x456584, Func Offset: 0xf4
	// Line 723, Address: 0x456588, Func Offset: 0xf8
	// Line 741, Address: 0x45658c, Func Offset: 0xfc
	// Line 725, Address: 0x456598, Func Offset: 0x108
	// Line 741, Address: 0x45659c, Func Offset: 0x10c
	// Line 727, Address: 0x4565a8, Func Offset: 0x118
	// Line 741, Address: 0x4565ac, Func Offset: 0x11c
	// Line 727, Address: 0x4565bc, Func Offset: 0x12c
	// Line 741, Address: 0x4565c0, Func Offset: 0x130
	// Line 728, Address: 0x4565cc, Func Offset: 0x13c
	// Line 741, Address: 0x4565d0, Func Offset: 0x140
	// Line 729, Address: 0x4565d8, Func Offset: 0x148
	// Line 741, Address: 0x4565ec, Func Offset: 0x15c
	// Line 729, Address: 0x4565fc, Func Offset: 0x16c
	// Line 741, Address: 0x456604, Func Offset: 0x174
	// Line 729, Address: 0x456610, Func Offset: 0x180
	// Line 741, Address: 0x456618, Func Offset: 0x188
	// Line 729, Address: 0x45661c, Func Offset: 0x18c
	// Line 741, Address: 0x456624, Func Offset: 0x194
	// Line 731, Address: 0x45663c, Func Offset: 0x1ac
	// Line 734, Address: 0x456644, Func Offset: 0x1b4
	// Line 741, Address: 0x456648, Func Offset: 0x1b8
	// Line 736, Address: 0x456654, Func Offset: 0x1c4
	// Line 741, Address: 0x456658, Func Offset: 0x1c8
	// Line 736, Address: 0x456668, Func Offset: 0x1d8
	// Line 741, Address: 0x45666c, Func Offset: 0x1dc
	// Line 736, Address: 0x456674, Func Offset: 0x1e4
	// Line 741, Address: 0x456678, Func Offset: 0x1e8
	// Line 738, Address: 0x456684, Func Offset: 0x1f4
	// Line 741, Address: 0x456698, Func Offset: 0x208
	// Line 738, Address: 0x4566a8, Func Offset: 0x218
	// Line 741, Address: 0x4566b0, Func Offset: 0x220
	// Line 738, Address: 0x4566bc, Func Offset: 0x22c
	// Line 741, Address: 0x4566c8, Func Offset: 0x238
	// Line 738, Address: 0x4566cc, Func Offset: 0x23c
	// Line 741, Address: 0x4566d4, Func Offset: 0x244
	// Line 729, Address: 0x456700, Func Offset: 0x270
	// Line 741, Address: 0x456708, Func Offset: 0x278
	// Line 738, Address: 0x456714, Func Offset: 0x284
	// Line 741, Address: 0x456720, Func Offset: 0x290
	// Func End, Address: 0x456740, Func Offset: 0x2b0
}

// xSndMgrSceneExit__Fv
// Start address: 0x456740
void xSndMgrSceneExit()
{
	// Line 674, Address: 0x456740, Func Offset: 0
	// Line 675, Address: 0x456744, Func Offset: 0x4
	// Line 674, Address: 0x456748, Func Offset: 0x8
	// Line 675, Address: 0x45674c, Func Offset: 0xc
	// Line 676, Address: 0x456754, Func Offset: 0x14
	// Line 677, Address: 0x456770, Func Offset: 0x30
	// Line 689, Address: 0x456778, Func Offset: 0x38
	// Line 691, Address: 0x456788, Func Offset: 0x48
	// Line 692, Address: 0x456794, Func Offset: 0x54
	// Line 691, Address: 0x456798, Func Offset: 0x58
	// Line 692, Address: 0x45679c, Func Offset: 0x5c
	// Line 693, Address: 0x4567a8, Func Offset: 0x68
	// Func End, Address: 0x4567b4, Func Offset: 0x74
}

// xSndMgrUpdate__Fv
// Start address: 0x4567c0
void xSndMgrUpdate()
{
	uint32 i;
	// Line 592, Address: 0x4567c0, Func Offset: 0
	// Line 593, Address: 0x4567cc, Func Offset: 0xc
	// Line 597, Address: 0x4567d4, Func Offset: 0x14
	// Line 600, Address: 0x4567e0, Func Offset: 0x20
	// Line 601, Address: 0x4567e8, Func Offset: 0x28
	// Line 600, Address: 0x4567ec, Func Offset: 0x2c
	// Line 601, Address: 0x4567f0, Func Offset: 0x30
	// Line 605, Address: 0x4567fc, Func Offset: 0x3c
	// Line 656, Address: 0x456804, Func Offset: 0x44
	// Line 663, Address: 0x456820, Func Offset: 0x60
	// Line 666, Address: 0x456844, Func Offset: 0x84
	// Line 671, Address: 0x45684c, Func Offset: 0x8c
	// Line 657, Address: 0x45685c, Func Offset: 0x9c
	// Line 658, Address: 0x456860, Func Offset: 0xa0
	// Line 671, Address: 0x456864, Func Offset: 0xa4
	// Func End, Address: 0x456888, Func Offset: 0xc8
}

// xSndMgrSceneInit__Fv
// Start address: 0x456890
void xSndMgrSceneInit()
{
	float32 musicFader;
	int32 i;
	// Line 548, Address: 0x456890, Func Offset: 0
	// Line 550, Address: 0x456894, Func Offset: 0x4
	// Line 548, Address: 0x456898, Func Offset: 0x8
	// Line 552, Address: 0x45689c, Func Offset: 0xc
	// Line 550, Address: 0x4568a0, Func Offset: 0x10
	// Line 552, Address: 0x4568a4, Func Offset: 0x14
	// Line 550, Address: 0x4568a8, Func Offset: 0x18
	// Line 552, Address: 0x4568b0, Func Offset: 0x20
	// Line 556, Address: 0x4568c8, Func Offset: 0x38
	// Line 552, Address: 0x4568cc, Func Offset: 0x3c
	// Line 556, Address: 0x4568d8, Func Offset: 0x48
	// Line 552, Address: 0x4568dc, Func Offset: 0x4c
	// Line 556, Address: 0x4568e0, Func Offset: 0x50
	// Line 564, Address: 0x45692c, Func Offset: 0x9c
	// Line 566, Address: 0x456938, Func Offset: 0xa8
	// Line 577, Address: 0x45693c, Func Offset: 0xac
	// Line 566, Address: 0x456940, Func Offset: 0xb0
	// Line 567, Address: 0x456948, Func Offset: 0xb8
	// Line 566, Address: 0x45694c, Func Offset: 0xbc
	// Line 567, Address: 0x456950, Func Offset: 0xc0
	// Line 568, Address: 0x456954, Func Offset: 0xc4
	// Line 569, Address: 0x456958, Func Offset: 0xc8
	// Line 568, Address: 0x45695c, Func Offset: 0xcc
	// Line 569, Address: 0x456960, Func Offset: 0xd0
	// Line 571, Address: 0x456964, Func Offset: 0xd4
	// Line 570, Address: 0x456968, Func Offset: 0xd8
	// Line 571, Address: 0x45696c, Func Offset: 0xdc
	// Line 570, Address: 0x456970, Func Offset: 0xe0
	// Line 575, Address: 0x456974, Func Offset: 0xe4
	// Line 571, Address: 0x456978, Func Offset: 0xe8
	// Line 577, Address: 0x45697c, Func Offset: 0xec
	// Line 571, Address: 0x456980, Func Offset: 0xf0
	// Line 579, Address: 0x456984, Func Offset: 0xf4
	// Line 575, Address: 0x456988, Func Offset: 0xf8
	// Line 579, Address: 0x45698c, Func Offset: 0xfc
	// Line 575, Address: 0x456990, Func Offset: 0x100
	// Line 579, Address: 0x456994, Func Offset: 0x104
	// Line 582, Address: 0x456998, Func Offset: 0x108
	// Line 577, Address: 0x45699c, Func Offset: 0x10c
	// Line 582, Address: 0x4569a0, Func Offset: 0x110
	// Line 579, Address: 0x4569a8, Func Offset: 0x118
	// Line 583, Address: 0x4569ac, Func Offset: 0x11c
	// Line 579, Address: 0x4569b0, Func Offset: 0x120
	// Line 583, Address: 0x4569b4, Func Offset: 0x124
	// Line 579, Address: 0x4569b8, Func Offset: 0x128
	// Line 580, Address: 0x4569bc, Func Offset: 0x12c
	// Line 581, Address: 0x4569c8, Func Offset: 0x138
	// Line 582, Address: 0x4569d4, Func Offset: 0x144
	// Line 583, Address: 0x4569e0, Func Offset: 0x150
	// Line 584, Address: 0x4569e8, Func Offset: 0x158
	// Line 585, Address: 0x4569fc, Func Offset: 0x16c
	// Line 584, Address: 0x456a00, Func Offset: 0x170
	// Line 585, Address: 0x456a04, Func Offset: 0x174
	// Line 586, Address: 0x456a18, Func Offset: 0x188
	// Line 587, Address: 0x456a2c, Func Offset: 0x19c
	// Line 586, Address: 0x456a30, Func Offset: 0x1a0
	// Line 587, Address: 0x456a34, Func Offset: 0x1a4
	// Line 588, Address: 0x456a44, Func Offset: 0x1b4
	// Line 589, Address: 0x456a4c, Func Offset: 0x1bc
	// Line 562, Address: 0x456a54, Func Offset: 0x1c4
	// Line 589, Address: 0x456a60, Func Offset: 0x1d0
	// Func End, Address: 0x456a68, Func Offset: 0x1d8
}

// xSndMgr_SetInaudible__FP13xSndVoiceInfo
// Start address: 0x456a70
uint8 xSndMgr_SetInaudible(xSndVoiceInfo* pVoice)
{
	// Line 487, Address: 0x456a70, Func Offset: 0
	// Line 489, Address: 0x456a84, Func Offset: 0x14
	// Line 494, Address: 0x456a94, Func Offset: 0x24
	// Line 501, Address: 0x456aa0, Func Offset: 0x30
	// Line 502, Address: 0x456ad4, Func Offset: 0x64
	// Line 507, Address: 0x456adc, Func Offset: 0x6c
	// Line 506, Address: 0x456ae0, Func Offset: 0x70
	// Line 507, Address: 0x456ae4, Func Offset: 0x74
	// Line 506, Address: 0x456afc, Func Offset: 0x8c
	// Line 507, Address: 0x456b04, Func Offset: 0x94
	// Line 506, Address: 0x456b14, Func Offset: 0xa4
	// Line 507, Address: 0x456bec, Func Offset: 0x17c
	// Line 509, Address: 0x456c1c, Func Offset: 0x1ac
	// Line 513, Address: 0x456c20, Func Offset: 0x1b0
	// Line 517, Address: 0x456c28, Func Offset: 0x1b8
	// Line 513, Address: 0x456c2c, Func Offset: 0x1bc
	// Line 517, Address: 0x456c30, Func Offset: 0x1c0
	// Line 492, Address: 0x456c38, Func Offset: 0x1c8
	// Line 498, Address: 0x456c40, Func Offset: 0x1d0
	// Line 503, Address: 0x456c48, Func Offset: 0x1d8
	// Line 517, Address: 0x456c50, Func Offset: 0x1e0
	// Line 507, Address: 0x456c5c, Func Offset: 0x1ec
	// Line 518, Address: 0x456c64, Func Offset: 0x1f4
	// Func End, Address: 0x456c78, Func Offset: 0x208
}

// xSndMgr_UpdateVoicePosition__FP13xSndVoiceInfo
// Start address: 0x456c80
uint8 xSndMgr_UpdateVoicePosition(xSndVoiceInfo* pVoice)
{
	xVec3 vel;
	xVec3 soundDir;
	float32 newDoppler;
	// Line 312, Address: 0x456c80, Func Offset: 0
	// Line 313, Address: 0x456c94, Func Offset: 0x14
	// Line 316, Address: 0x456ca0, Func Offset: 0x20
	// Line 318, Address: 0x456cac, Func Offset: 0x2c
	// Line 321, Address: 0x456cbc, Func Offset: 0x3c
	// Line 323, Address: 0x456cc4, Func Offset: 0x44
	// Line 324, Address: 0x456ce0, Func Offset: 0x60
	// Line 325, Address: 0x456ce8, Func Offset: 0x68
	// Line 379, Address: 0x456d00, Func Offset: 0x80
	// Line 381, Address: 0x456d0c, Func Offset: 0x8c
	// Line 414, Address: 0x456d1c, Func Offset: 0x9c
	// Line 415, Address: 0x456d48, Func Offset: 0xc8
	// Line 414, Address: 0x456d4c, Func Offset: 0xcc
	// Line 415, Address: 0x456d50, Func Offset: 0xd0
	// Line 416, Address: 0x456d5c, Func Offset: 0xdc
	// Line 415, Address: 0x456d60, Func Offset: 0xe0
	// Line 416, Address: 0x456d68, Func Offset: 0xe8
	// Line 418, Address: 0x456d7c, Func Offset: 0xfc
	// Line 421, Address: 0x456d88, Func Offset: 0x108
	// Line 423, Address: 0x456db8, Func Offset: 0x138
	// Line 430, Address: 0x456dc0, Func Offset: 0x140
	// Line 431, Address: 0x456dd4, Func Offset: 0x154
	// Line 314, Address: 0x456fd8, Func Offset: 0x358
	// Line 431, Address: 0x456fe0, Func Offset: 0x360
	// Line 356, Address: 0x457008, Func Offset: 0x388
	// Line 431, Address: 0x457018, Func Offset: 0x398
	// Line 336, Address: 0x45702c, Func Offset: 0x3ac
	// Line 431, Address: 0x457030, Func Offset: 0x3b0
	// Line 336, Address: 0x457034, Func Offset: 0x3b4
	// Line 431, Address: 0x457044, Func Offset: 0x3c4
	// Line 336, Address: 0x45704c, Func Offset: 0x3cc
	// Line 431, Address: 0x457058, Func Offset: 0x3d8
	// Line 336, Address: 0x457060, Func Offset: 0x3e0
	// Line 431, Address: 0x45706c, Func Offset: 0x3ec
	// Line 336, Address: 0x457074, Func Offset: 0x3f4
	// Line 431, Address: 0x457080, Func Offset: 0x400
	// Line 336, Address: 0x457088, Func Offset: 0x408
	// Line 431, Address: 0x457094, Func Offset: 0x414
	// Line 336, Address: 0x45709c, Func Offset: 0x41c
	// Line 431, Address: 0x4570a8, Func Offset: 0x428
	// Line 336, Address: 0x4570b0, Func Offset: 0x430
	// Line 431, Address: 0x4570bc, Func Offset: 0x43c
	// Line 336, Address: 0x4570c4, Func Offset: 0x444
	// Line 431, Address: 0x4570d4, Func Offset: 0x454
	// Line 339, Address: 0x457100, Func Offset: 0x480
	// Line 431, Address: 0x457104, Func Offset: 0x484
	// Line 339, Address: 0x457110, Func Offset: 0x490
	// Line 431, Address: 0x45711c, Func Offset: 0x49c
	// Line 339, Address: 0x457120, Func Offset: 0x4a0
	// Line 431, Address: 0x457124, Func Offset: 0x4a4
	// Line 339, Address: 0x45712c, Func Offset: 0x4ac
	// Line 431, Address: 0x457140, Func Offset: 0x4c0
	// Line 340, Address: 0x457148, Func Offset: 0x4c8
	// Line 431, Address: 0x45714c, Func Offset: 0x4cc
	// Line 340, Address: 0x457150, Func Offset: 0x4d0
	// Line 431, Address: 0x457154, Func Offset: 0x4d4
	// Line 340, Address: 0x457160, Func Offset: 0x4e0
	// Line 431, Address: 0x457164, Func Offset: 0x4e4
	// Line 340, Address: 0x45719c, Func Offset: 0x51c
	// Line 431, Address: 0x4571a0, Func Offset: 0x520
	// Line 340, Address: 0x4571a4, Func Offset: 0x524
	// Line 431, Address: 0x4571a8, Func Offset: 0x528
	// Line 340, Address: 0x4571c0, Func Offset: 0x540
	// Line 431, Address: 0x4571c4, Func Offset: 0x544
	// Line 340, Address: 0x4571e0, Func Offset: 0x560
	// Line 431, Address: 0x4571e4, Func Offset: 0x564
	// Line 340, Address: 0x4571ec, Func Offset: 0x56c
	// Line 431, Address: 0x4571f0, Func Offset: 0x570
	// Line 340, Address: 0x45720c, Func Offset: 0x58c
	// Line 431, Address: 0x457210, Func Offset: 0x590
	// Line 354, Address: 0x45723c, Func Offset: 0x5bc
	// Line 431, Address: 0x457244, Func Offset: 0x5c4
	// Line 385, Address: 0x457298, Func Offset: 0x618
	// Line 431, Address: 0x45729c, Func Offset: 0x61c
	// Line 387, Address: 0x4572a4, Func Offset: 0x624
	// Line 431, Address: 0x4572a8, Func Offset: 0x628
	// Line 387, Address: 0x4572ac, Func Offset: 0x62c
	// Line 431, Address: 0x4572b0, Func Offset: 0x630
	// Line 387, Address: 0x4572b4, Func Offset: 0x634
	// Line 385, Address: 0x4572bc, Func Offset: 0x63c
	// Line 431, Address: 0x4572c0, Func Offset: 0x640
	// Line 385, Address: 0x4572d8, Func Offset: 0x658
	// Line 431, Address: 0x4572dc, Func Offset: 0x65c
	// Line 386, Address: 0x4572f8, Func Offset: 0x678
	// Line 431, Address: 0x457300, Func Offset: 0x680
	// Line 386, Address: 0x457304, Func Offset: 0x684
	// Line 387, Address: 0x457308, Func Offset: 0x688
	// Line 431, Address: 0x45730c, Func Offset: 0x68c
	// Line 387, Address: 0x457314, Func Offset: 0x694
	// Line 431, Address: 0x457328, Func Offset: 0x6a8
	// Line 403, Address: 0x45734c, Func Offset: 0x6cc
	// Line 431, Address: 0x457350, Func Offset: 0x6d0
	// Line 390, Address: 0x457368, Func Offset: 0x6e8
	// Line 431, Address: 0x45736c, Func Offset: 0x6ec
	// Line 390, Address: 0x457370, Func Offset: 0x6f0
	// Line 431, Address: 0x457378, Func Offset: 0x6f8
	// Line 403, Address: 0x457390, Func Offset: 0x710
	// Line 431, Address: 0x4573bc, Func Offset: 0x73c
	// Line 403, Address: 0x4573c0, Func Offset: 0x740
	// Line 404, Address: 0x4573c8, Func Offset: 0x748
	// Line 431, Address: 0x4573cc, Func Offset: 0x74c
	// Line 405, Address: 0x4573d4, Func Offset: 0x754
	// Line 431, Address: 0x4573e4, Func Offset: 0x764
	// Line 424, Address: 0x4573ec, Func Offset: 0x76c
	// Line 431, Address: 0x4573f4, Func Offset: 0x774
	// Line 434, Address: 0x4573fc, Func Offset: 0x77c
	// Line 435, Address: 0x457400, Func Offset: 0x780
	// Func End, Address: 0x457414, Func Offset: 0x794
}

// xSndMgr_UpdateListenerPosition__Fv
// Start address: 0x457420
void xSndMgr_UpdateListenerPosition()
{
	xMat4x3* pMat;
	xMat4x3* pMat;
	// Line 270, Address: 0x457420, Func Offset: 0
	// Line 276, Address: 0x457444, Func Offset: 0x24
	// Line 275, Address: 0x457448, Func Offset: 0x28
	// Line 276, Address: 0x45744c, Func Offset: 0x2c
	// Line 277, Address: 0x457454, Func Offset: 0x34
	// Line 276, Address: 0x457458, Func Offset: 0x38
	// Line 277, Address: 0x45745c, Func Offset: 0x3c
	// Line 276, Address: 0x45746c, Func Offset: 0x4c
	// Line 277, Address: 0x457470, Func Offset: 0x50
	// Line 278, Address: 0x457474, Func Offset: 0x54
	// Line 276, Address: 0x457478, Func Offset: 0x58
	// Line 278, Address: 0x45747c, Func Offset: 0x5c
	// Line 276, Address: 0x457480, Func Offset: 0x60
	// Line 278, Address: 0x457484, Func Offset: 0x64
	// Line 276, Address: 0x457488, Func Offset: 0x68
	// Line 281, Address: 0x45748c, Func Offset: 0x6c
	// Line 277, Address: 0x457498, Func Offset: 0x78
	// Line 281, Address: 0x45749c, Func Offset: 0x7c
	// Line 277, Address: 0x4574a0, Func Offset: 0x80
	// Line 285, Address: 0x4574a4, Func Offset: 0x84
	// Line 276, Address: 0x4574a8, Func Offset: 0x88
	// Line 281, Address: 0x4574ac, Func Offset: 0x8c
	// Line 277, Address: 0x4574b0, Func Offset: 0x90
	// Line 281, Address: 0x4574b4, Func Offset: 0x94
	// Line 285, Address: 0x4574bc, Func Offset: 0x9c
	// Line 281, Address: 0x4574c0, Func Offset: 0xa0
	// Line 278, Address: 0x4574c8, Func Offset: 0xa8
	// Line 281, Address: 0x4574cc, Func Offset: 0xac
	// Line 285, Address: 0x4574d0, Func Offset: 0xb0
	// Line 281, Address: 0x4574d4, Func Offset: 0xb4
	// Line 285, Address: 0x4574d8, Func Offset: 0xb8
	// Line 281, Address: 0x4574e0, Func Offset: 0xc0
	// Line 278, Address: 0x4574e4, Func Offset: 0xc4
	// Line 285, Address: 0x4574ec, Func Offset: 0xcc
	// Line 278, Address: 0x4574f8, Func Offset: 0xd8
	// Line 285, Address: 0x457500, Func Offset: 0xe0
	// Line 278, Address: 0x45750c, Func Offset: 0xec
	// Line 287, Address: 0x457510, Func Offset: 0xf0
	// Line 293, Address: 0x457518, Func Offset: 0xf8
	// Line 292, Address: 0x45751c, Func Offset: 0xfc
	// Line 293, Address: 0x457520, Func Offset: 0x100
	// Line 294, Address: 0x457528, Func Offset: 0x108
	// Line 293, Address: 0x45752c, Func Offset: 0x10c
	// Line 294, Address: 0x457530, Func Offset: 0x110
	// Line 293, Address: 0x457540, Func Offset: 0x120
	// Line 294, Address: 0x457544, Func Offset: 0x124
	// Line 295, Address: 0x457548, Func Offset: 0x128
	// Line 293, Address: 0x45754c, Func Offset: 0x12c
	// Line 295, Address: 0x457550, Func Offset: 0x130
	// Line 293, Address: 0x457554, Func Offset: 0x134
	// Line 295, Address: 0x457558, Func Offset: 0x138
	// Line 293, Address: 0x45755c, Func Offset: 0x13c
	// Line 298, Address: 0x457560, Func Offset: 0x140
	// Line 294, Address: 0x45756c, Func Offset: 0x14c
	// Line 298, Address: 0x457570, Func Offset: 0x150
	// Line 294, Address: 0x457574, Func Offset: 0x154
	// Line 301, Address: 0x457578, Func Offset: 0x158
	// Line 293, Address: 0x45757c, Func Offset: 0x15c
	// Line 298, Address: 0x457580, Func Offset: 0x160
	// Line 294, Address: 0x457584, Func Offset: 0x164
	// Line 298, Address: 0x457588, Func Offset: 0x168
	// Line 301, Address: 0x457590, Func Offset: 0x170
	// Line 298, Address: 0x457594, Func Offset: 0x174
	// Line 295, Address: 0x45759c, Func Offset: 0x17c
	// Line 298, Address: 0x4575a0, Func Offset: 0x180
	// Line 301, Address: 0x4575a4, Func Offset: 0x184
	// Line 298, Address: 0x4575a8, Func Offset: 0x188
	// Line 301, Address: 0x4575ac, Func Offset: 0x18c
	// Line 298, Address: 0x4575b4, Func Offset: 0x194
	// Line 295, Address: 0x4575b8, Func Offset: 0x198
	// Line 301, Address: 0x4575c0, Func Offset: 0x1a0
	// Line 295, Address: 0x4575cc, Func Offset: 0x1ac
	// Line 301, Address: 0x4575d4, Func Offset: 0x1b4
	// Line 295, Address: 0x4575e0, Func Offset: 0x1c0
	// Line 301, Address: 0x4575e4, Func Offset: 0x1c4
	// Line 305, Address: 0x4575e8, Func Offset: 0x1c8
	// Func End, Address: 0x4575f0, Func Offset: 0x1d0
}

// xSndMgrProcessSoundPosition__FPC5xVec3P5xVec3
// Start address: 0x4575f0
void xSndMgrProcessSoundPosition(xVec3* pActual, xVec3* pProcessed)
{
	xVec3 playerDelta;
	float32 inwardShift;
	float32 factor;
	// Line 219, Address: 0x4575f0, Func Offset: 0
	// Line 220, Address: 0x4575f4, Func Offset: 0x4
	// Line 237, Address: 0x457614, Func Offset: 0x24
	// Line 220, Address: 0x457624, Func Offset: 0x34
	// Line 237, Address: 0x457630, Func Offset: 0x40
	// Line 220, Address: 0x457638, Func Offset: 0x48
	// Line 238, Address: 0x45763c, Func Offset: 0x4c
	// Line 220, Address: 0x457640, Func Offset: 0x50
	// Line 238, Address: 0x457644, Func Offset: 0x54
	// Line 220, Address: 0x457648, Func Offset: 0x58
	// Line 237, Address: 0x45764c, Func Offset: 0x5c
	// Line 238, Address: 0x457654, Func Offset: 0x64
	// Line 237, Address: 0x45765c, Func Offset: 0x6c
	// Line 238, Address: 0x457664, Func Offset: 0x74
	// Line 237, Address: 0x45766c, Func Offset: 0x7c
	// Line 238, Address: 0x457674, Func Offset: 0x84
	// Line 237, Address: 0x457678, Func Offset: 0x88
	// Line 238, Address: 0x45767c, Func Offset: 0x8c
	// Line 237, Address: 0x457690, Func Offset: 0xa0
	// Line 238, Address: 0x457698, Func Offset: 0xa8
	// Line 237, Address: 0x45769c, Func Offset: 0xac
	// Line 238, Address: 0x4576a0, Func Offset: 0xb0
	// Line 237, Address: 0x4576a8, Func Offset: 0xb8
	// Line 238, Address: 0x4576b0, Func Offset: 0xc0
	// Line 237, Address: 0x4576bc, Func Offset: 0xcc
	// Line 238, Address: 0x4576c8, Func Offset: 0xd8
	// Line 237, Address: 0x4576d0, Func Offset: 0xe0
	// Line 238, Address: 0x4576e4, Func Offset: 0xf4
	// Line 239, Address: 0x4576ec, Func Offset: 0xfc
	// Line 240, Address: 0x4576fc, Func Offset: 0x10c
	// Line 241, Address: 0x457718, Func Offset: 0x128
	// Line 246, Address: 0x457724, Func Offset: 0x134
	// Line 249, Address: 0x45772c, Func Offset: 0x13c
	// Line 246, Address: 0x457730, Func Offset: 0x140
	// Line 248, Address: 0x457734, Func Offset: 0x144
	// Line 249, Address: 0x45773c, Func Offset: 0x14c
	// Line 250, Address: 0x457754, Func Offset: 0x164
	// Line 249, Address: 0x457758, Func Offset: 0x168
	// Line 250, Address: 0x45775c, Func Offset: 0x16c
	// Line 249, Address: 0x457768, Func Offset: 0x178
	// Line 250, Address: 0x45776c, Func Offset: 0x17c
	// Line 251, Address: 0x4577a4, Func Offset: 0x1b4
	// Line 260, Address: 0x4577ac, Func Offset: 0x1bc
	// Line 266, Address: 0x4577c4, Func Offset: 0x1d4
	// Line 257, Address: 0x4577d4, Func Offset: 0x1e4
	// Line 266, Address: 0x4577dc, Func Offset: 0x1ec
	// Func End, Address: 0x4577e4, Func Offset: 0x1f4
}

// xSndMgrGetEffect__Fv
// Start address: 0x4577f0
xSndEffect xSndMgrGetEffect()
{
	// Line 210, Address: 0x4577f0, Func Offset: 0
	// Func End, Address: 0x4577f8, Func Offset: 0x8
}

// xSndMgrSetEffect__F10xSndEffect
// Start address: 0x457800
void xSndMgrSetEffect(xSndEffect Effect)
{
	float32 cEffectDelay;
	// Line 192, Address: 0x457800, Func Offset: 0
	// Line 191, Address: 0x457804, Func Offset: 0x4
	// Line 192, Address: 0x457808, Func Offset: 0x8
	// Line 193, Address: 0x457814, Func Offset: 0x14
	// Line 194, Address: 0x457818, Func Offset: 0x18
	// Line 205, Address: 0x45781c, Func Offset: 0x1c
	// Func End, Address: 0x457824, Func Offset: 0x24
}

// xSndMgrSelectListenerMode__F12xSndListener
// Start address: 0x457830
void xSndMgrSelectListenerMode(xSndListener Mode)
{
	// Line 185, Address: 0x457830, Func Offset: 0
	// Line 186, Address: 0x457834, Func Offset: 0x4
	// Func End, Address: 0x45783c, Func Offset: 0xc
}

// xSndMgrInit__Fv
// Start address: 0x457840
void xSndMgrInit()
{
	xSndVoiceInfo* voice;
	// Line 127, Address: 0x457840, Func Offset: 0
	// Line 129, Address: 0x457844, Func Offset: 0x4
	// Line 127, Address: 0x457848, Func Offset: 0x8
	// Line 129, Address: 0x45784c, Func Offset: 0xc
	// Line 131, Address: 0x45785c, Func Offset: 0x1c
	// Line 133, Address: 0x457864, Func Offset: 0x24
	// Line 138, Address: 0x457868, Func Offset: 0x28
	// Line 133, Address: 0x45786c, Func Offset: 0x2c
	// Line 138, Address: 0x457870, Func Offset: 0x30
	// Line 136, Address: 0x45788c, Func Offset: 0x4c
	// Line 138, Address: 0x457890, Func Offset: 0x50
	// Line 140, Address: 0x457930, Func Offset: 0xf0
	// Line 142, Address: 0x457938, Func Offset: 0xf8
	// Line 140, Address: 0x45793c, Func Offset: 0xfc
	// Line 152, Address: 0x457940, Func Offset: 0x100
	// Line 140, Address: 0x457944, Func Offset: 0x104
	// Line 142, Address: 0x457948, Func Offset: 0x108
	// Line 143, Address: 0x45794c, Func Offset: 0x10c
	// Line 142, Address: 0x457950, Func Offset: 0x110
	// Line 144, Address: 0x457954, Func Offset: 0x114
	// Line 143, Address: 0x457958, Func Offset: 0x118
	// Line 144, Address: 0x45795c, Func Offset: 0x11c
	// Line 145, Address: 0x457960, Func Offset: 0x120
	// Line 146, Address: 0x457964, Func Offset: 0x124
	// Line 145, Address: 0x457968, Func Offset: 0x128
	// Line 146, Address: 0x45796c, Func Offset: 0x12c
	// Line 149, Address: 0x457970, Func Offset: 0x130
	// Line 156, Address: 0x457978, Func Offset: 0x138
	// Line 149, Address: 0x45797c, Func Offset: 0x13c
	// Line 156, Address: 0x457980, Func Offset: 0x140
	// Line 180, Address: 0x457988, Func Offset: 0x148
	// Line 181, Address: 0x457994, Func Offset: 0x154
	// Func End, Address: 0x4579a0, Func Offset: 0x160
}

// xSndMgr_AllocGroup__FUc
// Start address: 0x4579a0
xSndGroup* xSndMgr_AllocGroup(uint8 nSoundAssets)
{
	uint32 datasize;
	void* pAllocated;
	xSndGroup* pRetGroup;
	uint32 i;
	// Line 100, Address: 0x4579a0, Func Offset: 0
	// Line 101, Address: 0x4579a4, Func Offset: 0x4
	// Line 100, Address: 0x4579a8, Func Offset: 0x8
	// Line 103, Address: 0x4579ac, Func Offset: 0xc
	// Line 100, Address: 0x4579b0, Func Offset: 0x10
	// Line 103, Address: 0x4579bc, Func Offset: 0x1c
	// Line 102, Address: 0x4579c4, Func Offset: 0x24
	// Line 103, Address: 0x4579c8, Func Offset: 0x28
	// Line 105, Address: 0x4579d0, Func Offset: 0x30
	// Line 106, Address: 0x4579d4, Func Offset: 0x34
	// Line 108, Address: 0x4579dc, Func Offset: 0x3c
	// Line 107, Address: 0x4579e0, Func Offset: 0x40
	// Line 110, Address: 0x4579e4, Func Offset: 0x44
	// Line 108, Address: 0x4579e8, Func Offset: 0x48
	// Line 112, Address: 0x4579ec, Func Offset: 0x4c
	// Line 109, Address: 0x4579f0, Func Offset: 0x50
	// Line 113, Address: 0x4579f4, Func Offset: 0x54
	// Line 110, Address: 0x4579f8, Func Offset: 0x58
	// Line 122, Address: 0x4579fc, Func Offset: 0x5c
	// Line 111, Address: 0x457a00, Func Offset: 0x60
	// Line 114, Address: 0x457a04, Func Offset: 0x64
	// Line 112, Address: 0x457a08, Func Offset: 0x68
	// Line 114, Address: 0x457a0c, Func Offset: 0x6c
	// Line 113, Address: 0x457a10, Func Offset: 0x70
	// Line 116, Address: 0x457a14, Func Offset: 0x74
	// Line 114, Address: 0x457a18, Func Offset: 0x78
	// Line 122, Address: 0x457a1c, Func Offset: 0x7c
	// Line 120, Address: 0x457a34, Func Offset: 0x94
	// Line 122, Address: 0x457a38, Func Offset: 0x98
	// Line 120, Address: 0x457ad4, Func Offset: 0x134
	// Line 122, Address: 0x457ad8, Func Offset: 0x138
	// Line 124, Address: 0x457b00, Func Offset: 0x160
	// Func End, Address: 0x457b14, Func Offset: 0x174
}

