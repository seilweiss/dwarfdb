



void EnableRibbonCartWheel();
void EnableRibbonMelee(xVec3& leftHand, xVec3& rightHand);
void Init();
void Reset();
void Update(float32 dt);
void Reset();
void Init();
void Update();
void SetSparks(uint8 value);
void Sparks(xVec3& pos);
void Explode(xVec3& pos);
void UpdateFlashing(float32 dt);
void Update(float32 dt);
void RemoveAll();
void Init();

// EnableRibbonCartWheel__Q212zEntPlayerFX6RibbonFv
// Start address: 0x31c2b0
void EnableRibbonCartWheel()
{
	xVec3 ribbonPos1;
	xVec3 normal1;
	xVec3 ribbonPos2;
	xVec3 normal2;
	// Line 1269, Address: 0x31c2b0, Func Offset: 0
	// Line 1279, Address: 0x31c2b4, Func Offset: 0x4
	// Line 1269, Address: 0x31c2b8, Func Offset: 0x8
	// Line 1284, Address: 0x31c2bc, Func Offset: 0xc
	// Line 1269, Address: 0x31c2c0, Func Offset: 0x10
	// Line 1279, Address: 0x31c2c4, Func Offset: 0x14
	// Line 1284, Address: 0x31c2c8, Func Offset: 0x18
	// Line 1273, Address: 0x31c2cc, Func Offset: 0x1c
	// Line 1274, Address: 0x31c2d4, Func Offset: 0x24
	// Line 1276, Address: 0x31c2e0, Func Offset: 0x30
	// Line 1277, Address: 0x31c2e4, Func Offset: 0x34
	// Line 1276, Address: 0x31c2e8, Func Offset: 0x38
	// Line 1273, Address: 0x31c2ec, Func Offset: 0x3c
	// Line 1284, Address: 0x31c2f0, Func Offset: 0x40
	// Line 1273, Address: 0x31c2f4, Func Offset: 0x44
	// Line 1276, Address: 0x31c300, Func Offset: 0x50
	// Line 1281, Address: 0x31c304, Func Offset: 0x54
	// Line 1273, Address: 0x31c308, Func Offset: 0x58
	// Line 1276, Address: 0x31c310, Func Offset: 0x60
	// Line 1281, Address: 0x31c314, Func Offset: 0x64
	// Line 1273, Address: 0x31c318, Func Offset: 0x68
	// Line 1274, Address: 0x31c31c, Func Offset: 0x6c
	// Line 1281, Address: 0x31c320, Func Offset: 0x70
	// Line 1274, Address: 0x31c324, Func Offset: 0x74
	// Line 1277, Address: 0x31c330, Func Offset: 0x80
	// Line 1282, Address: 0x31c334, Func Offset: 0x84
	// Line 1274, Address: 0x31c338, Func Offset: 0x88
	// Line 1277, Address: 0x31c340, Func Offset: 0x90
	// Line 1282, Address: 0x31c344, Func Offset: 0x94
	// Line 1276, Address: 0x31c348, Func Offset: 0x98
	// Line 1277, Address: 0x31c350, Func Offset: 0xa0
	// Line 1274, Address: 0x31c358, Func Offset: 0xa8
	// Line 1277, Address: 0x31c35c, Func Offset: 0xac
	// Line 1276, Address: 0x31c360, Func Offset: 0xb0
	// Line 1282, Address: 0x31c364, Func Offset: 0xb4
	// Line 1279, Address: 0x31c368, Func Offset: 0xb8
	// Line 1282, Address: 0x31c36c, Func Offset: 0xbc
	// Line 1281, Address: 0x31c374, Func Offset: 0xc4
	// Line 1279, Address: 0x31c37c, Func Offset: 0xcc
	// Line 1280, Address: 0x31c380, Func Offset: 0xd0
	// Line 1282, Address: 0x31c384, Func Offset: 0xd4
	// Line 1279, Address: 0x31c388, Func Offset: 0xd8
	// Line 1282, Address: 0x31c38c, Func Offset: 0xdc
	// Line 1281, Address: 0x31c390, Func Offset: 0xe0
	// Line 1279, Address: 0x31c394, Func Offset: 0xe4
	// Line 1280, Address: 0x31c3a0, Func Offset: 0xf0
	// Line 1281, Address: 0x31c3a4, Func Offset: 0xf4
	// Line 1280, Address: 0x31c3ac, Func Offset: 0xfc
	// Line 1281, Address: 0x31c3b0, Func Offset: 0x100
	// Line 1282, Address: 0x31c3b4, Func Offset: 0x104
	// Line 1280, Address: 0x31c3b8, Func Offset: 0x108
	// Line 1282, Address: 0x31c3c0, Func Offset: 0x110
	// Line 1281, Address: 0x31c3c4, Func Offset: 0x114
	// Line 1282, Address: 0x31c3d0, Func Offset: 0x120
	// Line 1284, Address: 0x31c3d4, Func Offset: 0x124
	// Line 1286, Address: 0x31c3dc, Func Offset: 0x12c
	// Line 1287, Address: 0x31c3ec, Func Offset: 0x13c
	// Line 1296, Address: 0x31c3f8, Func Offset: 0x148
	// Line 1297, Address: 0x31c40c, Func Offset: 0x15c
	// Line 1299, Address: 0x31c430, Func Offset: 0x180
	// Line 1292, Address: 0x31c450, Func Offset: 0x1a0
	// Line 1299, Address: 0x31c454, Func Offset: 0x1a4
	// Line 1294, Address: 0x31c468, Func Offset: 0x1b8
	// Line 1299, Address: 0x31c46c, Func Offset: 0x1bc
	// Line 1294, Address: 0x31c470, Func Offset: 0x1c0
	// Line 1299, Address: 0x31c474, Func Offset: 0x1c4
	// Line 1294, Address: 0x31c480, Func Offset: 0x1d0
	// Line 1299, Address: 0x31c484, Func Offset: 0x1d4
	// Func End, Address: 0x31c49c, Func Offset: 0x1ec
}

// EnableRibbonMelee__Q212zEntPlayerFX6RibbonFR5xVec3R5xVec3
// Start address: 0x31c4a0
void EnableRibbonMelee(xVec3& leftHand, xVec3& rightHand)
{
	xVec3 normal;
	// Line 1186, Address: 0x31c4a0, Func Offset: 0
	// Line 1188, Address: 0x31c4a4, Func Offset: 0x4
	// Line 1186, Address: 0x31c4a8, Func Offset: 0x8
	// Line 1188, Address: 0x31c4c0, Func Offset: 0x20
	// Line 1191, Address: 0x31c4d0, Func Offset: 0x30
	// Line 1192, Address: 0x31c4dc, Func Offset: 0x3c
	// Line 1191, Address: 0x31c4e0, Func Offset: 0x40
	// Line 1192, Address: 0x31c4e4, Func Offset: 0x44
	// Line 1195, Address: 0x31c4e8, Func Offset: 0x48
	// Line 1192, Address: 0x31c4ec, Func Offset: 0x4c
	// Line 1195, Address: 0x31c4f0, Func Offset: 0x50
	// Line 1196, Address: 0x31c4f4, Func Offset: 0x54
	// Line 1198, Address: 0x31c4f8, Func Offset: 0x58
	// Line 1202, Address: 0x31c500, Func Offset: 0x60
	// Line 1203, Address: 0x31c50c, Func Offset: 0x6c
	// Line 1202, Address: 0x31c510, Func Offset: 0x70
	// Line 1203, Address: 0x31c514, Func Offset: 0x74
	// Line 1206, Address: 0x31c518, Func Offset: 0x78
	// Line 1203, Address: 0x31c51c, Func Offset: 0x7c
	// Line 1206, Address: 0x31c520, Func Offset: 0x80
	// Line 1207, Address: 0x31c524, Func Offset: 0x84
	// Line 1212, Address: 0x31c52c, Func Offset: 0x8c
	// Line 1213, Address: 0x31c530, Func Offset: 0x90
	// Line 1212, Address: 0x31c538, Func Offset: 0x98
	// Line 1213, Address: 0x31c548, Func Offset: 0xa8
	// Line 1212, Address: 0x31c54c, Func Offset: 0xac
	// Line 1213, Address: 0x31c550, Func Offset: 0xb0
	// Line 1212, Address: 0x31c554, Func Offset: 0xb4
	// Line 1213, Address: 0x31c5a0, Func Offset: 0x100
	// Line 1214, Address: 0x31c5a8, Func Offset: 0x108
	// Line 1217, Address: 0x31c5cc, Func Offset: 0x12c
	// Line 1218, Address: 0x31c5d0, Func Offset: 0x130
	// Line 1217, Address: 0x31c5dc, Func Offset: 0x13c
	// Line 1218, Address: 0x31c5e0, Func Offset: 0x140
	// Line 1217, Address: 0x31c5e4, Func Offset: 0x144
	// Line 1218, Address: 0x31c638, Func Offset: 0x198
	// Line 1219, Address: 0x31c640, Func Offset: 0x1a0
	// Line 1220, Address: 0x31c664, Func Offset: 0x1c4
	// Func End, Address: 0x31c680, Func Offset: 0x1e0
}

// Init__Q212zEntPlayerFX6RibbonFv
// Start address: 0x31c680
void Init()
{
	int32 i;
	int32 j;
	// Line 1044, Address: 0x31c680, Func Offset: 0
	// Line 1047, Address: 0x31c684, Func Offset: 0x4
	// Line 1044, Address: 0x31c68c, Func Offset: 0xc
	// Line 1047, Address: 0x31c694, Func Offset: 0x14
	// Line 1044, Address: 0x31c698, Func Offset: 0x18
	// Line 1049, Address: 0x31c69c, Func Offset: 0x1c
	// Line 1044, Address: 0x31c6a0, Func Offset: 0x20
	// Line 1047, Address: 0x31c6a4, Func Offset: 0x24
	// Line 1044, Address: 0x31c6a8, Func Offset: 0x28
	// Line 1047, Address: 0x31c6ac, Func Offset: 0x2c
	// Line 1044, Address: 0x31c6b0, Func Offset: 0x30
	// Line 1049, Address: 0x31c6b4, Func Offset: 0x34
	// Line 1047, Address: 0x31c6b8, Func Offset: 0x38
	// Line 1044, Address: 0x31c6bc, Func Offset: 0x3c
	// Line 1047, Address: 0x31c6c0, Func Offset: 0x40
	// Line 1044, Address: 0x31c6c4, Func Offset: 0x44
	// Line 1047, Address: 0x31c6c8, Func Offset: 0x48
	// Line 1046, Address: 0x31c6cc, Func Offset: 0x4c
	// Line 1049, Address: 0x31c6d4, Func Offset: 0x54
	// Line 1046, Address: 0x31c6d8, Func Offset: 0x58
	// Line 1049, Address: 0x31c6dc, Func Offset: 0x5c
	// Line 1047, Address: 0x31c6e4, Func Offset: 0x64
	// Line 1051, Address: 0x31c6f4, Func Offset: 0x74
	// Line 1053, Address: 0x31c708, Func Offset: 0x88
	// Line 1055, Address: 0x31c714, Func Offset: 0x94
	// Line 1057, Address: 0x31c71c, Func Offset: 0x9c
	// Line 1059, Address: 0x31c720, Func Offset: 0xa0
	// Line 1058, Address: 0x31c724, Func Offset: 0xa4
	// Line 1057, Address: 0x31c728, Func Offset: 0xa8
	// Line 1059, Address: 0x31c72c, Func Offset: 0xac
	// Line 1061, Address: 0x31c73c, Func Offset: 0xbc
	// Line 1064, Address: 0x31c758, Func Offset: 0xd8
	// Line 1066, Address: 0x31c784, Func Offset: 0x104
	// Line 1067, Address: 0x31c788, Func Offset: 0x108
	// Line 1068, Address: 0x31c790, Func Offset: 0x110
	// Line 1071, Address: 0x31c798, Func Offset: 0x118
	// Line 1072, Address: 0x31c7a0, Func Offset: 0x120
	// Line 1075, Address: 0x31c7a8, Func Offset: 0x128
	// Line 1076, Address: 0x31c7b0, Func Offset: 0x130
	// Line 1079, Address: 0x31c7b8, Func Offset: 0x138
	// Line 1084, Address: 0x31c7c0, Func Offset: 0x140
	// Line 1086, Address: 0x31c7c8, Func Offset: 0x148
	// Line 1088, Address: 0x31c7f4, Func Offset: 0x174
	// Line 1089, Address: 0x31c7f8, Func Offset: 0x178
	// Line 1090, Address: 0x31c800, Func Offset: 0x180
	// Line 1093, Address: 0x31c808, Func Offset: 0x188
	// Line 1094, Address: 0x31c810, Func Offset: 0x190
	// Line 1097, Address: 0x31c818, Func Offset: 0x198
	// Line 1098, Address: 0x31c820, Func Offset: 0x1a0
	// Line 1101, Address: 0x31c828, Func Offset: 0x1a8
	// Line 1105, Address: 0x31c834, Func Offset: 0x1b4
	// Line 1108, Address: 0x31c838, Func Offset: 0x1b8
	// Line 1110, Address: 0x31c83c, Func Offset: 0x1bc
	// Line 1111, Address: 0x31c840, Func Offset: 0x1c0
	// Line 1110, Address: 0x31c844, Func Offset: 0x1c4
	// Line 1113, Address: 0x31c848, Func Offset: 0x1c8
	// Line 1108, Address: 0x31c850, Func Offset: 0x1d0
	// Line 1110, Address: 0x31c858, Func Offset: 0x1d8
	// Line 1113, Address: 0x31c85c, Func Offset: 0x1dc
	// Line 1119, Address: 0x31c864, Func Offset: 0x1e4
	// Line 1113, Address: 0x31c868, Func Offset: 0x1e8
	// Line 1119, Address: 0x31c86c, Func Offset: 0x1ec
	// Line 1113, Address: 0x31c870, Func Offset: 0x1f0
	// Line 1119, Address: 0x31c874, Func Offset: 0x1f4
	// Line 1120, Address: 0x31c87c, Func Offset: 0x1fc
	// Line 1119, Address: 0x31c880, Func Offset: 0x200
	// Line 1120, Address: 0x31c884, Func Offset: 0x204
	// Line 1123, Address: 0x31c890, Func Offset: 0x210
	// Line 1125, Address: 0x31c89c, Func Offset: 0x21c
	// Line 1127, Address: 0x31c8a8, Func Offset: 0x228
	// Line 1129, Address: 0x31c8b4, Func Offset: 0x234
	// Line 1131, Address: 0x31c8c0, Func Offset: 0x240
	// Line 1130, Address: 0x31c8c4, Func Offset: 0x244
	// Line 1131, Address: 0x31c8cc, Func Offset: 0x24c
	// Line 1132, Address: 0x31c8dc, Func Offset: 0x25c
	// Line 1131, Address: 0x31c8e0, Func Offset: 0x260
	// Line 1132, Address: 0x31c8e4, Func Offset: 0x264
	// Line 1133, Address: 0x31c8ec, Func Offset: 0x26c
	// Line 1132, Address: 0x31c8f0, Func Offset: 0x270
	// Line 1134, Address: 0x31c8f4, Func Offset: 0x274
	// Line 1133, Address: 0x31c8f8, Func Offset: 0x278
	// Line 1134, Address: 0x31c8fc, Func Offset: 0x27c
	// Line 1136, Address: 0x31c900, Func Offset: 0x280
	// Line 1137, Address: 0x31c908, Func Offset: 0x288
	// Line 1134, Address: 0x31c90c, Func Offset: 0x28c
	// Line 1136, Address: 0x31c910, Func Offset: 0x290
	// Line 1137, Address: 0x31c918, Func Offset: 0x298
	// Line 1139, Address: 0x31c91c, Func Offset: 0x29c
	// Line 1137, Address: 0x31c920, Func Offset: 0x2a0
	// Line 1139, Address: 0x31c924, Func Offset: 0x2a4
	// Line 1134, Address: 0x31c928, Func Offset: 0x2a8
	// Line 1139, Address: 0x31c92c, Func Offset: 0x2ac
	// Line 1144, Address: 0x31c938, Func Offset: 0x2b8
	// Line 1146, Address: 0x31c948, Func Offset: 0x2c8
	// Func End, Address: 0x31c970, Func Offset: 0x2f0
}

// Reset__Q212zEntPlayerFX11HammerThrowFv
// Start address: 0x31c970
void Reset()
{
	// Line 957, Address: 0x31c970, Func Offset: 0
	// Line 959, Address: 0x31c978, Func Offset: 0x8
	// Line 964, Address: 0x31c984, Func Offset: 0x14
	// Line 969, Address: 0x31c990, Func Offset: 0x20
	// Line 970, Address: 0x31c994, Func Offset: 0x24
	// Line 972, Address: 0x31c998, Func Offset: 0x28
	// Func End, Address: 0x31c9cc, Func Offset: 0x5c
}

// Update__Q212zEntPlayerFX10CartShieldFf
// Start address: 0x31c9d0
void Update(float32 dt)
{
	int32 i;
	xModelInstance* model;
	// Line 724, Address: 0x31c9d0, Func Offset: 0
	// Line 726, Address: 0x31c9d4, Func Offset: 0x4
	// Line 724, Address: 0x31c9d8, Func Offset: 0x8
	// Line 726, Address: 0x31c9e4, Func Offset: 0x14
	// Line 724, Address: 0x31c9e8, Func Offset: 0x18
	// Line 726, Address: 0x31c9ec, Func Offset: 0x1c
	// Line 724, Address: 0x31c9f0, Func Offset: 0x20
	// Line 726, Address: 0x31c9f4, Func Offset: 0x24
	// Line 724, Address: 0x31c9f8, Func Offset: 0x28
	// Line 726, Address: 0x31c9fc, Func Offset: 0x2c
	// Line 724, Address: 0x31ca00, Func Offset: 0x30
	// Line 726, Address: 0x31ca08, Func Offset: 0x38
	// Line 724, Address: 0x31ca0c, Func Offset: 0x3c
	// Line 726, Address: 0x31ca10, Func Offset: 0x40
	// Line 724, Address: 0x31ca14, Func Offset: 0x44
	// Line 726, Address: 0x31ca18, Func Offset: 0x48
	// Line 724, Address: 0x31ca1c, Func Offset: 0x4c
	// Line 726, Address: 0x31ca20, Func Offset: 0x50
	// Line 728, Address: 0x31ca2c, Func Offset: 0x5c
	// Line 733, Address: 0x31ca38, Func Offset: 0x68
	// Line 735, Address: 0x31ca3c, Func Offset: 0x6c
	// Line 733, Address: 0x31ca40, Func Offset: 0x70
	// Line 735, Address: 0x31ca44, Func Offset: 0x74
	// Line 733, Address: 0x31ca48, Func Offset: 0x78
	// Line 735, Address: 0x31ca4c, Func Offset: 0x7c
	// Line 733, Address: 0x31ca54, Func Offset: 0x84
	// Line 735, Address: 0x31ca5c, Func Offset: 0x8c
	// Line 737, Address: 0x31ca68, Func Offset: 0x98
	// Line 741, Address: 0x31ca80, Func Offset: 0xb0
	// Line 740, Address: 0x31ca84, Func Offset: 0xb4
	// Line 741, Address: 0x31ca88, Func Offset: 0xb8
	// Line 742, Address: 0x31caa0, Func Offset: 0xd0
	// Line 744, Address: 0x31cac4, Func Offset: 0xf4
	// Line 745, Address: 0x31cad4, Func Offset: 0x104
	// Line 747, Address: 0x31cae8, Func Offset: 0x118
	// Line 750, Address: 0x31cb04, Func Offset: 0x134
	// Line 752, Address: 0x31cb10, Func Offset: 0x140
	// Line 771, Address: 0x31cb30, Func Offset: 0x160
	// Line 772, Address: 0x31cb68, Func Offset: 0x198
	// Line 775, Address: 0x31cb78, Func Offset: 0x1a8
	// Line 776, Address: 0x31cbb0, Func Offset: 0x1e0
	// Line 778, Address: 0x31cbc0, Func Offset: 0x1f0
	// Line 781, Address: 0x31cbc8, Func Offset: 0x1f8
	// Line 785, Address: 0x31cbd0, Func Offset: 0x200
	// Line 786, Address: 0x31cc08, Func Offset: 0x238
	// Line 791, Address: 0x31cc18, Func Offset: 0x248
	// Line 792, Address: 0x31cc50, Func Offset: 0x280
	// Line 796, Address: 0x31cc60, Func Offset: 0x290
	// Line 805, Address: 0x31cc6c, Func Offset: 0x29c
	// Line 796, Address: 0x31cc70, Func Offset: 0x2a0
	// Line 805, Address: 0x31cc74, Func Offset: 0x2a4
	// Line 796, Address: 0x31cc78, Func Offset: 0x2a8
	// Line 805, Address: 0x31cc98, Func Offset: 0x2c8
	// Line 807, Address: 0x31cca4, Func Offset: 0x2d4
	// Line 808, Address: 0x31cca8, Func Offset: 0x2d8
	// Line 736, Address: 0x31ccb0, Func Offset: 0x2e0
	// Line 738, Address: 0x31ccc0, Func Offset: 0x2f0
	// Line 764, Address: 0x31ccdc, Func Offset: 0x30c
	// Line 808, Address: 0x31cce0, Func Offset: 0x310
	// Func End, Address: 0x31cd4c, Func Offset: 0x37c
}

// Reset__Q212zEntPlayerFX10CartShieldFv
// Start address: 0x31cd50
void Reset()
{
	// Line 720, Address: 0x31cd50, Func Offset: 0
	// Func End, Address: 0x31cd64, Func Offset: 0x14
}

// Init__Q212zEntPlayerFX10CartShieldFv
// Start address: 0x31cd70
void Init()
{
	int32 i;
	int8 modelName[256];
	RpAtomic* imodel;
	xModelInstance* model;
	// Line 641, Address: 0x31cd70, Func Offset: 0
	// Line 645, Address: 0x31cd74, Func Offset: 0x4
	// Line 641, Address: 0x31cd78, Func Offset: 0x8
	// Line 645, Address: 0x31cd7c, Func Offset: 0xc
	// Line 641, Address: 0x31cd80, Func Offset: 0x10
	// Line 647, Address: 0x31cd84, Func Offset: 0x14
	// Line 641, Address: 0x31cd88, Func Offset: 0x18
	// Line 660, Address: 0x31cd8c, Func Offset: 0x1c
	// Line 641, Address: 0x31cd90, Func Offset: 0x20
	// Line 660, Address: 0x31cd94, Func Offset: 0x24
	// Line 641, Address: 0x31cd98, Func Offset: 0x28
	// Line 660, Address: 0x31cd9c, Func Offset: 0x2c
	// Line 641, Address: 0x31cda0, Func Offset: 0x30
	// Line 660, Address: 0x31cda4, Func Offset: 0x34
	// Line 647, Address: 0x31cda8, Func Offset: 0x38
	// Line 648, Address: 0x31cdac, Func Offset: 0x3c
	// Line 645, Address: 0x31cdb0, Func Offset: 0x40
	// Line 648, Address: 0x31cdb4, Func Offset: 0x44
	// Line 651, Address: 0x31cdb8, Func Offset: 0x48
	// Line 649, Address: 0x31cdbc, Func Offset: 0x4c
	// Line 650, Address: 0x31cdc0, Func Offset: 0x50
	// Line 649, Address: 0x31cdc4, Func Offset: 0x54
	// Line 653, Address: 0x31cdc8, Func Offset: 0x58
	// Line 642, Address: 0x31cdcc, Func Offset: 0x5c
	// Line 653, Address: 0x31cdd0, Func Offset: 0x60
	// Line 643, Address: 0x31cdd4, Func Offset: 0x64
	// Line 653, Address: 0x31cdd8, Func Offset: 0x68
	// Line 655, Address: 0x31cddc, Func Offset: 0x6c
	// Line 644, Address: 0x31cde0, Func Offset: 0x70
	// Line 646, Address: 0x31cde4, Func Offset: 0x74
	// Line 648, Address: 0x31cde8, Func Offset: 0x78
	// Line 654, Address: 0x31cdec, Func Offset: 0x7c
	// Line 655, Address: 0x31cdf0, Func Offset: 0x80
	// Line 650, Address: 0x31cdf4, Func Offset: 0x84
	// Line 656, Address: 0x31cdf8, Func Offset: 0x88
	// Line 652, Address: 0x31cdfc, Func Offset: 0x8c
	// Line 657, Address: 0x31ce00, Func Offset: 0x90
	// Line 665, Address: 0x31ce04, Func Offset: 0x94
	// Line 666, Address: 0x31ce1c, Func Offset: 0xac
	// Line 667, Address: 0x31ce30, Func Offset: 0xc0
	// Line 669, Address: 0x31ce38, Func Offset: 0xc8
	// Line 670, Address: 0x31ce54, Func Offset: 0xe4
	// Line 671, Address: 0x31ce58, Func Offset: 0xe8
	// Line 673, Address: 0x31ce60, Func Offset: 0xf0
	// Line 674, Address: 0x31ce64, Func Offset: 0xf4
	// Line 676, Address: 0x31ce68, Func Offset: 0xf8
	// Line 680, Address: 0x31ce6c, Func Offset: 0xfc
	// Line 673, Address: 0x31ce78, Func Offset: 0x108
	// Line 674, Address: 0x31ce88, Func Offset: 0x118
	// Line 676, Address: 0x31ce94, Func Offset: 0x124
	// Line 677, Address: 0x31ce98, Func Offset: 0x128
	// Line 678, Address: 0x31ce9c, Func Offset: 0x12c
	// Line 680, Address: 0x31cea0, Func Offset: 0x130
	// Line 681, Address: 0x31cea8, Func Offset: 0x138
	// Line 685, Address: 0x31ceb4, Func Offset: 0x144
	// Line 681, Address: 0x31cec0, Func Offset: 0x150
	// Line 685, Address: 0x31cec8, Func Offset: 0x158
	// Line 687, Address: 0x31ced0, Func Offset: 0x160
	// Line 688, Address: 0x31ced4, Func Offset: 0x164
	// Line 691, Address: 0x31cee4, Func Offset: 0x174
	// Line 693, Address: 0x31ceec, Func Offset: 0x17c
	// Line 715, Address: 0x31cef4, Func Offset: 0x184
	// Func End, Address: 0x31cf14, Func Offset: 0x1a4
}

// Update__Q212zEntPlayerFX10MotionBlurFf
// Start address: 0x31cf20
void Update()
{
	en_plyratak attackToCheck;
	// Line 548, Address: 0x31cf20, Func Offset: 0
	// Line 549, Address: 0x31cf28, Func Offset: 0x8
	// Line 551, Address: 0x31cf40, Func Offset: 0x20
	// Line 553, Address: 0x31cf88, Func Offset: 0x68
	// Line 554, Address: 0x31cf94, Func Offset: 0x74
	// Line 555, Address: 0x31cfa8, Func Offset: 0x88
	// Line 559, Address: 0x31cfb0, Func Offset: 0x90
	// Line 562, Address: 0x31cfbc, Func Offset: 0x9c
	// Line 565, Address: 0x31cfc4, Func Offset: 0xa4
	// Line 568, Address: 0x31cfc8, Func Offset: 0xa8
	// Line 570, Address: 0x31cff8, Func Offset: 0xd8
	// Line 571, Address: 0x31d004, Func Offset: 0xe4
	// Line 572, Address: 0x31d014, Func Offset: 0xf4
	// Line 575, Address: 0x31d01c, Func Offset: 0xfc
	// Line 576, Address: 0x31d028, Func Offset: 0x108
	// Line 581, Address: 0x31d038, Func Offset: 0x118
	// Line 568, Address: 0x31d040, Func Offset: 0x120
	// Line 581, Address: 0x31d058, Func Offset: 0x138
	// Func End, Address: 0x31d064, Func Offset: 0x144
}

// SetSparks__Q212zEntPlayerFX17GauntletExplosionFb
// Start address: 0x31d070
void SetSparks(uint8 value)
{
	// Line 439, Address: 0x31d070, Func Offset: 0
	// Func End, Address: 0x31d078, Func Offset: 0x8
}

// Sparks__Q212zEntPlayerFX17GauntletExplosionFR5xVec3
// Start address: 0x31d080
void Sparks(xVec3& pos)
{
	// Line 429, Address: 0x31d080, Func Offset: 0
	// Line 430, Address: 0x31d088, Func Offset: 0x8
	// Line 435, Address: 0x31d094, Func Offset: 0x14
	// Line 433, Address: 0x31d0a4, Func Offset: 0x24
	// Line 435, Address: 0x31d0b0, Func Offset: 0x30
	// Func End, Address: 0x31d0b8, Func Offset: 0x38
}

// Explode__Q212zEntPlayerFX17GauntletExplosionFR5xVec3
// Start address: 0x31d0c0
void Explode(xVec3& pos)
{
	sphericalEmitter* rumble;
	// Line 396, Address: 0x31d0c0, Func Offset: 0
	// Line 397, Address: 0x31d0d4, Func Offset: 0x14
	// Line 411, Address: 0x31d0e0, Func Offset: 0x20
	// Line 399, Address: 0x31d0e8, Func Offset: 0x28
	// Line 411, Address: 0x31d0ec, Func Offset: 0x2c
	// Line 400, Address: 0x31d0f8, Func Offset: 0x38
	// Line 411, Address: 0x31d0fc, Func Offset: 0x3c
	// Line 400, Address: 0x31d100, Func Offset: 0x40
	// Line 411, Address: 0x31d104, Func Offset: 0x44
	// Line 401, Address: 0x31d130, Func Offset: 0x70
	// Line 411, Address: 0x31d134, Func Offset: 0x74
	// Line 404, Address: 0x31d140, Func Offset: 0x80
	// Line 411, Address: 0x31d144, Func Offset: 0x84
	// Line 405, Address: 0x31d160, Func Offset: 0xa0
	// Line 411, Address: 0x31d184, Func Offset: 0xc4
	// Line 405, Address: 0x31d188, Func Offset: 0xc8
	// Line 411, Address: 0x31d198, Func Offset: 0xd8
	// Line 405, Address: 0x31d19c, Func Offset: 0xdc
	// Line 411, Address: 0x31d1a8, Func Offset: 0xe8
	// Line 407, Address: 0x31d1cc, Func Offset: 0x10c
	// Line 411, Address: 0x31d1e4, Func Offset: 0x124
	// Line 408, Address: 0x31d1ec, Func Offset: 0x12c
	// Line 411, Address: 0x31d1f8, Func Offset: 0x138
	// Func End, Address: 0x31d20c, Func Offset: 0x14c
}

// UpdateFlashing__Q212zEntPlayerFX23SuperMachoBowlLightningFf
// Start address: 0x31d210
void UpdateFlashing(float32 dt)
{
	xModelInstance* model;
	// Line 205, Address: 0x31d210, Func Offset: 0
	// Line 210, Address: 0x31d224, Func Offset: 0x14
	// Line 205, Address: 0x31d228, Func Offset: 0x18
	// Line 210, Address: 0x31d23c, Func Offset: 0x2c
	// Line 212, Address: 0x31d244, Func Offset: 0x34
	// Line 213, Address: 0x31d24c, Func Offset: 0x3c
	// Line 212, Address: 0x31d254, Func Offset: 0x44
	// Line 214, Address: 0x31d258, Func Offset: 0x48
	// Line 215, Address: 0x31d25c, Func Offset: 0x4c
	// Line 216, Address: 0x31d264, Func Offset: 0x54
	// Line 218, Address: 0x31d270, Func Offset: 0x60
	// Line 219, Address: 0x31d278, Func Offset: 0x68
	// Line 218, Address: 0x31d280, Func Offset: 0x70
	// Line 219, Address: 0x31d284, Func Offset: 0x74
	// Line 218, Address: 0x31d28c, Func Offset: 0x7c
	// Line 219, Address: 0x31d294, Func Offset: 0x84
	// Line 221, Address: 0x31d2a0, Func Offset: 0x90
	// Line 223, Address: 0x31d2a4, Func Offset: 0x94
	// Line 224, Address: 0x31d2a8, Func Offset: 0x98
	// Line 243, Address: 0x31d2ac, Func Offset: 0x9c
	// Line 231, Address: 0x31d2b8, Func Offset: 0xa8
	// Line 243, Address: 0x31d2bc, Func Offset: 0xac
	// Line 233, Address: 0x31d2c4, Func Offset: 0xb4
	// Line 236, Address: 0x31d2cc, Func Offset: 0xbc
	// Line 243, Address: 0x31d2d0, Func Offset: 0xc0
	// Func End, Address: 0x31d2f0, Func Offset: 0xe0
}

// Update__Q212zEntPlayerFX23SuperMachoBowlLightningFf
// Start address: 0x31d2f0
void Update(float32 dt)
{
	// Line 158, Address: 0x31d2f0, Func Offset: 0
	// Line 160, Address: 0x31d2f8, Func Offset: 0x8
	// Line 158, Address: 0x31d2fc, Func Offset: 0xc
	// Line 160, Address: 0x31d318, Func Offset: 0x28
	// Line 162, Address: 0x31d328, Func Offset: 0x38
	// Line 163, Address: 0x31d3ec, Func Offset: 0xfc
	// Line 164, Address: 0x31d3f4, Func Offset: 0x104
	// Line 192, Address: 0x31d3fc, Func Offset: 0x10c
	// Line 168, Address: 0x31d408, Func Offset: 0x118
	// Line 192, Address: 0x31d40c, Func Offset: 0x11c
	// Line 172, Address: 0x31d428, Func Offset: 0x138
	// Line 192, Address: 0x31d42c, Func Offset: 0x13c
	// Line 172, Address: 0x31d434, Func Offset: 0x144
	// Line 192, Address: 0x31d440, Func Offset: 0x150
	// Line 172, Address: 0x31d444, Func Offset: 0x154
	// Line 192, Address: 0x31d450, Func Offset: 0x160
	// Line 172, Address: 0x31d460, Func Offset: 0x170
	// Line 192, Address: 0x31d464, Func Offset: 0x174
	// Line 172, Address: 0x31d48c, Func Offset: 0x19c
	// Line 192, Address: 0x31d498, Func Offset: 0x1a8
	// Line 172, Address: 0x31d49c, Func Offset: 0x1ac
	// Line 192, Address: 0x31d4a4, Func Offset: 0x1b4
	// Line 172, Address: 0x31d4bc, Func Offset: 0x1cc
	// Line 192, Address: 0x31d4c0, Func Offset: 0x1d0
	// Line 172, Address: 0x31d4cc, Func Offset: 0x1dc
	// Line 192, Address: 0x31d4d0, Func Offset: 0x1e0
	// Line 172, Address: 0x31d4e0, Func Offset: 0x1f0
	// Line 192, Address: 0x31d4e4, Func Offset: 0x1f4
	// Line 172, Address: 0x31d4ec, Func Offset: 0x1fc
	// Line 192, Address: 0x31d4f8, Func Offset: 0x208
	// Line 172, Address: 0x31d500, Func Offset: 0x210
	// Line 192, Address: 0x31d510, Func Offset: 0x220
	// Line 172, Address: 0x31d520, Func Offset: 0x230
	// Line 192, Address: 0x31d524, Func Offset: 0x234
	// Line 172, Address: 0x31d52c, Func Offset: 0x23c
	// Line 192, Address: 0x31d530, Func Offset: 0x240
	// Line 172, Address: 0x31d538, Func Offset: 0x248
	// Line 192, Address: 0x31d53c, Func Offset: 0x24c
	// Line 174, Address: 0x31d568, Func Offset: 0x278
	// Line 192, Address: 0x31d570, Func Offset: 0x280
	// Line 177, Address: 0x31d574, Func Offset: 0x284
	// Line 178, Address: 0x31d578, Func Offset: 0x288
	// Line 192, Address: 0x31d57c, Func Offset: 0x28c
	// Line 184, Address: 0x31d598, Func Offset: 0x2a8
	// Line 192, Address: 0x31d59c, Func Offset: 0x2ac
	// Line 184, Address: 0x31d5a4, Func Offset: 0x2b4
	// Line 192, Address: 0x31d5b0, Func Offset: 0x2c0
	// Line 184, Address: 0x31d5e4, Func Offset: 0x2f4
	// Line 192, Address: 0x31d5f0, Func Offset: 0x300
	// Line 184, Address: 0x31d5f4, Func Offset: 0x304
	// Line 192, Address: 0x31d5fc, Func Offset: 0x30c
	// Line 184, Address: 0x31d620, Func Offset: 0x330
	// Line 192, Address: 0x31d624, Func Offset: 0x334
	// Line 184, Address: 0x31d630, Func Offset: 0x340
	// Line 192, Address: 0x31d638, Func Offset: 0x348
	// Line 184, Address: 0x31d648, Func Offset: 0x358
	// Line 192, Address: 0x31d64c, Func Offset: 0x35c
	// Line 184, Address: 0x31d654, Func Offset: 0x364
	// Line 192, Address: 0x31d664, Func Offset: 0x374
	// Line 184, Address: 0x31d668, Func Offset: 0x378
	// Line 192, Address: 0x31d66c, Func Offset: 0x37c
	// Line 184, Address: 0x31d670, Func Offset: 0x380
	// Line 192, Address: 0x31d67c, Func Offset: 0x38c
	// Line 184, Address: 0x31d68c, Func Offset: 0x39c
	// Line 192, Address: 0x31d690, Func Offset: 0x3a0
	// Line 184, Address: 0x31d698, Func Offset: 0x3a8
	// Line 192, Address: 0x31d69c, Func Offset: 0x3ac
	// Line 184, Address: 0x31d6a4, Func Offset: 0x3b4
	// Line 192, Address: 0x31d6a8, Func Offset: 0x3b8
	// Line 182, Address: 0x31d6e0, Func Offset: 0x3f0
	// Line 192, Address: 0x31d6e4, Func Offset: 0x3f4
	// Line 182, Address: 0x31d700, Func Offset: 0x410
	// Line 192, Address: 0x31d708, Func Offset: 0x418
	// Func End, Address: 0x31d74c, Func Offset: 0x45c
}

// RemoveAll__Q212zEntPlayerFX23SuperMachoBowlLightningFv
// Start address: 0x31d750
void RemoveAll()
{
	int32 i;
	// Line 89, Address: 0x31d750, Func Offset: 0
	// Line 91, Address: 0x31d760, Func Offset: 0x10
	// Line 93, Address: 0x31d770, Func Offset: 0x20
	// Line 95, Address: 0x31d778, Func Offset: 0x28
	// Line 96, Address: 0x31d780, Func Offset: 0x30
	// Line 99, Address: 0x31d790, Func Offset: 0x40
	// Line 100, Address: 0x31d7a0, Func Offset: 0x50
	// Func End, Address: 0x31d7b4, Func Offset: 0x64
}

// Init__Q212zEntPlayerFX23SuperMachoBowlLightningFv
// Start address: 0x31d7c0
void Init()
{
	// Line 45, Address: 0x31d7c0, Func Offset: 0
	// Line 50, Address: 0x31d7c4, Func Offset: 0x4
	// Line 45, Address: 0x31d7c8, Func Offset: 0x8
	// Line 46, Address: 0x31d7cc, Func Offset: 0xc
	// Line 47, Address: 0x31d7d4, Func Offset: 0x14
	// Line 46, Address: 0x31d7d8, Func Offset: 0x18
	// Line 49, Address: 0x31d7dc, Func Offset: 0x1c
	// Line 47, Address: 0x31d7e0, Func Offset: 0x20
	// Line 48, Address: 0x31d7e4, Func Offset: 0x24
	// Line 47, Address: 0x31d7e8, Func Offset: 0x28
	// Line 50, Address: 0x31d7ec, Func Offset: 0x2c
	// Line 49, Address: 0x31d7f0, Func Offset: 0x30
	// Line 48, Address: 0x31d7f4, Func Offset: 0x34
	// Line 49, Address: 0x31d7f8, Func Offset: 0x38
	// Line 48, Address: 0x31d800, Func Offset: 0x40
	// Line 49, Address: 0x31d804, Func Offset: 0x44
	// Line 51, Address: 0x31d818, Func Offset: 0x58
	// Line 56, Address: 0x31d820, Func Offset: 0x60
	// Line 49, Address: 0x31d828, Func Offset: 0x68
	// Line 52, Address: 0x31d834, Func Offset: 0x74
	// Line 55, Address: 0x31d83c, Func Offset: 0x7c
	// Line 49, Address: 0x31d844, Func Offset: 0x84
	// Line 53, Address: 0x31d850, Func Offset: 0x90
	// Line 50, Address: 0x31d854, Func Offset: 0x94
	// Line 49, Address: 0x31d858, Func Offset: 0x98
	// Line 50, Address: 0x31d85c, Func Offset: 0x9c
	// Line 54, Address: 0x31d860, Func Offset: 0xa0
	// Line 53, Address: 0x31d864, Func Offset: 0xa4
	// Line 54, Address: 0x31d86c, Func Offset: 0xac
	// Line 55, Address: 0x31d874, Func Offset: 0xb4
	// Line 56, Address: 0x31d878, Func Offset: 0xb8
	// Line 58, Address: 0x31d884, Func Offset: 0xc4
	// Line 56, Address: 0x31d888, Func Offset: 0xc8
	// Line 57, Address: 0x31d88c, Func Offset: 0xcc
	// Line 60, Address: 0x31d890, Func Offset: 0xd0
	// Line 57, Address: 0x31d894, Func Offset: 0xd4
	// Line 58, Address: 0x31d898, Func Offset: 0xd8
	// Line 61, Address: 0x31d89c, Func Offset: 0xdc
	// Line 58, Address: 0x31d8a0, Func Offset: 0xe0
	// Line 59, Address: 0x31d8a4, Func Offset: 0xe4
	// Line 62, Address: 0x31d8a8, Func Offset: 0xe8
	// Line 59, Address: 0x31d8ac, Func Offset: 0xec
	// Line 63, Address: 0x31d8b0, Func Offset: 0xf0
	// Line 64, Address: 0x31d8b8, Func Offset: 0xf8
	// Func End, Address: 0x31d8c4, Func Offset: 0x104
}

