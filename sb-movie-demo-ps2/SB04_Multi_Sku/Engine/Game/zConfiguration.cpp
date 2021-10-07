



uint8 zConfig_isPlayerPatrick(ePlayerEnum playerEnum);
uint8 zConfig_isPlayerSpongebob(ePlayerEnum playerEnum);
uint32 zConfig_getAlternateCostume(ePlayerEnum player);
uint32 zConfig_getAlternateCostume(uint32 normalPlayerTag);
void zConfig_setPointerPlayer_MapEntry(uint32 sceneID, uint32 playerTag);
int32 zConfig_getPlayers(uint32 sceneID, uint32* players);
ePlayerEnum zConfig_getPlayerEnum(uint32 playerTag);
ePlayerEnum zConfig_getPlayerEnum(uint32 sceneID, int32 playerIdx);
int32 zConfig_getPlayerCount(uint32 sceneID);
int8* zConfig_getPlayerModelInfoString(uint32 _tag);
uint32 zConfig_getPlayerTag(uint32 sceneID, int32 playerIdx);
void zConfig_setScenePlayer_MapEntry(uint32 sceneID, uint32 playerTag);
uint32 zConfig_getPlayerEnumIdx(uint32 playerTag);

// zConfig_isPlayerPatrick__F11ePlayerEnum
// Start address: 0x386820
uint8 zConfig_isPlayerPatrick(ePlayerEnum playerEnum)
{
	// Line 504, Address: 0x386820, Func Offset: 0
	// Line 505, Address: 0x386834, Func Offset: 0x14
	// Func End, Address: 0x38683c, Func Offset: 0x1c
}

// zConfig_isPlayerSpongebob__F11ePlayerEnum
// Start address: 0x386840
uint8 zConfig_isPlayerSpongebob(ePlayerEnum playerEnum)
{
	// Line 499, Address: 0x386840, Func Offset: 0
	// Line 500, Address: 0x386854, Func Offset: 0x14
	// Func End, Address: 0x38685c, Func Offset: 0x1c
}

// zConfig_getAlternateCostume__F11ePlayerEnum
// Start address: 0x386860
uint32 zConfig_getAlternateCostume(ePlayerEnum player)
{
	uint32 altCostume;
	// Line 466, Address: 0x386860, Func Offset: 0
	// Line 471, Address: 0x386870, Func Offset: 0x10
	// Line 482, Address: 0x38688c, Func Offset: 0x2c
	// Line 484, Address: 0x3868a8, Func Offset: 0x48
	// Line 485, Address: 0x3868b4, Func Offset: 0x54
	// Line 487, Address: 0x3868bc, Func Offset: 0x5c
	// Line 488, Address: 0x3868c4, Func Offset: 0x64
	// Line 492, Address: 0x3868cc, Func Offset: 0x6c
	// Line 493, Address: 0x3868f4, Func Offset: 0x94
	// Line 494, Address: 0x386900, Func Offset: 0xa0
	// Line 473, Address: 0x386910, Func Offset: 0xb0
	// Line 494, Address: 0x386914, Func Offset: 0xb4
	// Line 477, Address: 0x386924, Func Offset: 0xc4
	// Line 495, Address: 0x386934, Func Offset: 0xd4
	// Func End, Address: 0x386948, Func Offset: 0xe8
}

// zConfig_getAlternateCostume__FUi
// Start address: 0x386950
uint32 zConfig_getAlternateCostume(uint32 normalPlayerTag)
{
	ePlayerEnum player;
	// Line 459, Address: 0x386950, Func Offset: 0
	// Line 461, Address: 0x386954, Func Offset: 0x4
	// Line 459, Address: 0x386958, Func Offset: 0x8
	// Line 461, Address: 0x38695c, Func Offset: 0xc
	// Line 459, Address: 0x386960, Func Offset: 0x10
	// Line 461, Address: 0x386968, Func Offset: 0x18
	// Line 462, Address: 0x386994, Func Offset: 0x44
	// Line 463, Address: 0x386a5c, Func Offset: 0x10c
	// Func End, Address: 0x386a6c, Func Offset: 0x11c
}

// zConfig_setPointerPlayer_MapEntry__FUiUi
// Start address: 0x386a70
void zConfig_setPointerPlayer_MapEntry(uint32 sceneID, uint32 playerTag)
{
	int32 i;
	// Line 291, Address: 0x386a70, Func Offset: 0
	// Line 293, Address: 0x386a88, Func Offset: 0x18
	// Line 314, Address: 0x386aa0, Func Offset: 0x30
	// Line 293, Address: 0x386aac, Func Offset: 0x3c
	// Line 314, Address: 0x386ab0, Func Offset: 0x40
	// Line 317, Address: 0x386ac4, Func Offset: 0x54
	// Line 319, Address: 0x386acc, Func Offset: 0x5c
	// Line 321, Address: 0x386ad4, Func Offset: 0x64
	// Line 324, Address: 0x386af4, Func Offset: 0x84
	// Line 325, Address: 0x386b10, Func Offset: 0xa0
	// Line 327, Address: 0x386b20, Func Offset: 0xb0
	// Line 325, Address: 0x386b24, Func Offset: 0xb4
	// Line 327, Address: 0x386b30, Func Offset: 0xc0
	// Line 326, Address: 0x386b38, Func Offset: 0xc8
	// Line 328, Address: 0x386b44, Func Offset: 0xd4
	// Func End, Address: 0x386b4c, Func Offset: 0xdc
}

// zConfig_getPlayers__FUiPUi
// Start address: 0x386b50
int32 zConfig_getPlayers(uint32 sceneID, uint32* players)
{
	int32 i;
	int32 j;
	// Line 269, Address: 0x386b50, Func Offset: 0
	// Line 272, Address: 0x386b54, Func Offset: 0x4
	// Line 274, Address: 0x386b6c, Func Offset: 0x1c
	// Line 276, Address: 0x386b78, Func Offset: 0x28
	// Line 278, Address: 0x386ba0, Func Offset: 0x50
	// Line 276, Address: 0x386ba4, Func Offset: 0x54
	// Line 278, Address: 0x386bb0, Func Offset: 0x60
	// Line 279, Address: 0x386bb4, Func Offset: 0x64
	// Line 278, Address: 0x386bb8, Func Offset: 0x68
	// Line 279, Address: 0x386bc8, Func Offset: 0x78
	// Line 282, Address: 0x386be0, Func Offset: 0x90
	// Line 285, Address: 0x386bf0, Func Offset: 0xa0
	// Line 286, Address: 0x386bf4, Func Offset: 0xa4
	// Line 287, Address: 0x386c00, Func Offset: 0xb0
	// Func End, Address: 0x386c08, Func Offset: 0xb8
}

// zConfig_getPlayerEnum__FUi
// Start address: 0x386c10
ePlayerEnum zConfig_getPlayerEnum(uint32 playerTag)
{
	int32 i;
	// Line 255, Address: 0x386c10, Func Offset: 0
	// Line 257, Address: 0x386c1c, Func Offset: 0xc
	// Line 259, Address: 0x386c28, Func Offset: 0x18
	// Line 261, Address: 0x386c30, Func Offset: 0x20
	// Line 263, Address: 0x386c40, Func Offset: 0x30
	// Line 265, Address: 0x386c44, Func Offset: 0x34
	// Func End, Address: 0x386c4c, Func Offset: 0x3c
}

// zConfig_getPlayerEnum__FUii
// Start address: 0x386c50
ePlayerEnum zConfig_getPlayerEnum(uint32 sceneID, int32 playerIdx)
{
	int32 i;
	// Line 236, Address: 0x386c50, Func Offset: 0
	// Line 238, Address: 0x386c68, Func Offset: 0x18
	// Line 241, Address: 0x386c74, Func Offset: 0x24
	// Line 246, Address: 0x386c7c, Func Offset: 0x2c
	// Line 248, Address: 0x386ca4, Func Offset: 0x54
	// Line 241, Address: 0x386cc8, Func Offset: 0x78
	// Line 248, Address: 0x386ccc, Func Offset: 0x7c
	// Line 250, Address: 0x386ce0, Func Offset: 0x90
	// Line 251, Address: 0x386ce4, Func Offset: 0x94
	// Func End, Address: 0x386cec, Func Offset: 0x9c
}

// zConfig_getPlayerCount__FUi
// Start address: 0x386cf0
int32 zConfig_getPlayerCount(uint32 sceneID)
{
	int32 i;
	// Line 221, Address: 0x386cf0, Func Offset: 0
	// Line 223, Address: 0x386d08, Func Offset: 0x18
	// Line 225, Address: 0x386d14, Func Offset: 0x24
	// Line 227, Address: 0x386d34, Func Offset: 0x44
	// Line 230, Address: 0x386d48, Func Offset: 0x58
	// Line 231, Address: 0x386d4c, Func Offset: 0x5c
	// Func End, Address: 0x386d54, Func Offset: 0x64
}

// zConfig_getPlayerModelInfoString__FUi
// Start address: 0x386d60
int8* zConfig_getPlayerModelInfoString(uint32 _tag)
{
	int32 i;
	// Line 203, Address: 0x386d60, Func Offset: 0
	// Line 205, Address: 0x386d6c, Func Offset: 0xc
	// Line 212, Address: 0x386d78, Func Offset: 0x18
	// Line 214, Address: 0x386d8c, Func Offset: 0x2c
	// Line 216, Address: 0x386d9c, Func Offset: 0x3c
	// Line 217, Address: 0x386da4, Func Offset: 0x44
	// Func End, Address: 0x386dac, Func Offset: 0x4c
}

// zConfig_getPlayerTag__FUii
// Start address: 0x386db0
uint32 zConfig_getPlayerTag(uint32 sceneID, int32 playerIdx)
{
	int32 i;
	uint32 mask;
	// Line 172, Address: 0x386db0, Func Offset: 0
	// Line 174, Address: 0x386dc8, Func Offset: 0x18
	// Line 175, Address: 0x386dcc, Func Offset: 0x1c
	// Line 178, Address: 0x386de0, Func Offset: 0x30
	// Line 183, Address: 0x386de8, Func Offset: 0x38
	// Line 185, Address: 0x386e24, Func Offset: 0x74
	// Line 178, Address: 0x386e48, Func Offset: 0x98
	// Line 185, Address: 0x386e4c, Func Offset: 0x9c
	// Line 187, Address: 0x386e60, Func Offset: 0xb0
	// Line 188, Address: 0x386e68, Func Offset: 0xb8
	// Func End, Address: 0x386e70, Func Offset: 0xc0
}

// zConfig_setScenePlayer_MapEntry__FUiUi
// Start address: 0x386e70
void zConfig_setScenePlayer_MapEntry(uint32 sceneID, uint32 playerTag)
{
	int32 i;
	uint32 sceneMask;
	int32 i;
	// Line 145, Address: 0x386e70, Func Offset: 0
	// Line 147, Address: 0x386e88, Func Offset: 0x18
	// Line 149, Address: 0x386e94, Func Offset: 0x24
	// Line 150, Address: 0x386efc, Func Offset: 0x8c
	// Line 151, Address: 0x386f04, Func Offset: 0x94
	// Line 153, Address: 0x386f0c, Func Offset: 0x9c
	// Line 156, Address: 0x386f20, Func Offset: 0xb0
	// Line 157, Address: 0x386f24, Func Offset: 0xb4
	// Line 159, Address: 0x386f2c, Func Offset: 0xbc
	// Line 158, Address: 0x386f30, Func Offset: 0xc0
	// Line 159, Address: 0x386f44, Func Offset: 0xd4
	// Line 163, Address: 0x386f64, Func Offset: 0xf4
	// Line 159, Address: 0x386f68, Func Offset: 0xf8
	// Line 163, Address: 0x386f6c, Func Offset: 0xfc
	// Line 164, Address: 0x386f74, Func Offset: 0x104
	// Line 163, Address: 0x386f78, Func Offset: 0x108
	// Line 164, Address: 0x386f7c, Func Offset: 0x10c
	// Line 163, Address: 0x386f80, Func Offset: 0x110
	// Line 164, Address: 0x386f84, Func Offset: 0x114
	// Line 165, Address: 0x386f88, Func Offset: 0x118
	// Line 164, Address: 0x386f94, Func Offset: 0x124
	// Line 165, Address: 0x386f98, Func Offset: 0x128
	// Line 167, Address: 0x386fdc, Func Offset: 0x16c
	// Line 165, Address: 0x386fe0, Func Offset: 0x170
	// Line 167, Address: 0x386fe8, Func Offset: 0x178
	// Line 165, Address: 0x386fec, Func Offset: 0x17c
	// Line 167, Address: 0x386ff0, Func Offset: 0x180
	// Line 166, Address: 0x386ff4, Func Offset: 0x184
	// Line 168, Address: 0x387000, Func Offset: 0x190
	// Func End, Address: 0x387008, Func Offset: 0x198
}

// zConfig_getPlayerEnumIdx__FUi
// Start address: 0x387010
uint32 zConfig_getPlayerEnumIdx(uint32 playerTag)
{
	uint32 i;
	// Line 133, Address: 0x387010, Func Offset: 0
	// Line 135, Address: 0x38701c, Func Offset: 0xc
	// Line 136, Address: 0x387028, Func Offset: 0x18
	// Line 137, Address: 0x387030, Func Offset: 0x20
	// Line 140, Address: 0x387040, Func Offset: 0x30
	// Line 141, Address: 0x387044, Func Offset: 0x34
	// Func End, Address: 0x38704c, Func Offset: 0x3c
}

