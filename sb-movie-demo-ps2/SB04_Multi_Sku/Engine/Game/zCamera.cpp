



void zCameraMinTargetHeightClear();
void zCameraMinTargetHeightSet(float32 height);
void zCameraSetReward(int32 on);
void zCameraDisableWallJump();
void zCameraEnableWallJump(xVec3& collNormal);
void zCameraTranslate(xCamera* cam, float32 dposx, float32 dposy, float32 dposz);
int32 zCameraGetConvers();
float32 zCameraGetLassoCamFactor();
void zCameraSetLassoCamFactor(float32 factor);
void zCameraEnableLassoCam();
void zCameraDisableLassoCam();
void zCameraEnableInput();
void zCameraDisableInput();
uint32 zCameraIsTrackingDisabled();
void zCameraEnableTracking(camera_owner_enum owner);
void zCameraDisableTracking(camera_owner_enum owner);
void zCameraSetPlayerVel(xVec3* vel);
void zCameraSetHighbounce(int32 hbounce);
void zCameraSetLongbounce(int32 lbounce);
void zCameraSetBbounce(int32 bbouncing);
void zCameraUpdate(xCamera* cam, float32 dt);
int32 zCameraIsFlyCamRunning();
void zCameraFreeLookSetGoals(xCamera* cam, float32 pitch_s, float32& dgoal, float32& hgoal, float32& pitch_goal, float32& lktm, float32 dt);
int32 zCameraRewardUpdate(xCamera* cam, float32 dt);
void zCameraFlyStop();
void zCameraFlyRestoreBackup(xCamera* backup);
int32 zCameraFlyUpdate(xCamera* cam, float32 dt);
void zCameraConversUpdate(xCamera* cam, float32 dt);
void zCameraReset(xCamera* cam);

// zCameraMinTargetHeightClear__Fv
// Start address: 0x391040
void zCameraMinTargetHeightClear()
{
	// Line 1558, Address: 0x391040, Func Offset: 0
	// Line 1559, Address: 0x391048, Func Offset: 0x8
	// Func End, Address: 0x391050, Func Offset: 0x10
}

// zCameraMinTargetHeightSet__Ff
// Start address: 0x391050
void zCameraMinTargetHeightSet(float32 height)
{
	// Line 1554, Address: 0x391050, Func Offset: 0
	// Func End, Address: 0x391058, Func Offset: 0x8
}

// zCameraSetReward__Fi
// Start address: 0x391060
void zCameraSetReward(int32 on)
{
	// Line 1530, Address: 0x391060, Func Offset: 0
	// Line 1532, Address: 0x39106c, Func Offset: 0xc
	// Line 1534, Address: 0x391074, Func Offset: 0x14
	// Line 1535, Address: 0x391078, Func Offset: 0x18
	// Func End, Address: 0x391080, Func Offset: 0x20
}

// zCameraDisableWallJump__FP7xCamera
// Start address: 0x391080
void zCameraDisableWallJump()
{
	// Line 1524, Address: 0x391080, Func Offset: 0
	// Line 1526, Address: 0x39108c, Func Offset: 0xc
	// Func End, Address: 0x3910a4, Func Offset: 0x24
}

// zCameraEnableWallJump__FP7xCameraRC5xVec3
// Start address: 0x3910b0
void zCameraEnableWallJump(xVec3& collNormal)
{
	xVec3 up;
	// Line 1505, Address: 0x3910b0, Func Offset: 0
	// Line 1506, Address: 0x3910b4, Func Offset: 0x4
	// Line 1505, Address: 0x3910b8, Func Offset: 0x8
	// Line 1506, Address: 0x3910bc, Func Offset: 0xc
	// Line 1511, Address: 0x3910c8, Func Offset: 0x18
	// Line 1512, Address: 0x3910d8, Func Offset: 0x28
	// Line 1515, Address: 0x3910dc, Func Offset: 0x2c
	// Line 1512, Address: 0x3910e0, Func Offset: 0x30
	// Line 1515, Address: 0x3910ec, Func Offset: 0x3c
	// Line 1511, Address: 0x3910f0, Func Offset: 0x40
	// Line 1512, Address: 0x3910f4, Func Offset: 0x44
	// Line 1511, Address: 0x3910f8, Func Offset: 0x48
	// Line 1512, Address: 0x3910fc, Func Offset: 0x4c
	// Line 1515, Address: 0x391108, Func Offset: 0x58
	// Line 1511, Address: 0x39110c, Func Offset: 0x5c
	// Line 1512, Address: 0x391110, Func Offset: 0x60
	// Line 1515, Address: 0x39112c, Func Offset: 0x7c
	// Line 1518, Address: 0x391138, Func Offset: 0x88
	// Line 1515, Address: 0x39113c, Func Offset: 0x8c
	// Line 1518, Address: 0x391140, Func Offset: 0x90
	// Line 1520, Address: 0x391188, Func Offset: 0xd8
	// Line 1519, Address: 0x3911b4, Func Offset: 0x104
	// Line 1520, Address: 0x3911bc, Func Offset: 0x10c
	// Line 1519, Address: 0x3911c0, Func Offset: 0x110
	// Line 1520, Address: 0x3911c4, Func Offset: 0x114
	// Func End, Address: 0x3911dc, Func Offset: 0x12c
}

// zCameraTranslate__FP7xCamerafff
// Start address: 0x3911e0
void zCameraTranslate(xCamera* cam, float32 dposx, float32 dposy, float32 dposz)
{
	// Line 1500, Address: 0x3911e0, Func Offset: 0
	// Line 1501, Address: 0x391204, Func Offset: 0x24
	// Line 1502, Address: 0x391224, Func Offset: 0x44
	// Func End, Address: 0x39122c, Func Offset: 0x4c
}

// zCameraGetConvers__Fv
// Start address: 0x391230
int32 zCameraGetConvers()
{
	// Line 1442, Address: 0x391230, Func Offset: 0
	// Func End, Address: 0x391238, Func Offset: 0x8
}

// zCameraGetLassoCamFactor__Fv
// Start address: 0x391240
float32 zCameraGetLassoCamFactor()
{
	// Line 1437, Address: 0x391240, Func Offset: 0
	// Func End, Address: 0x391248, Func Offset: 0x8
}

// zCameraSetLassoCamFactor__Ff
// Start address: 0x391250
void zCameraSetLassoCamFactor(float32 factor)
{
	// Line 1433, Address: 0x391250, Func Offset: 0
	// Func End, Address: 0x391258, Func Offset: 0x8
}

// zCameraEnableLassoCam__Fv
// Start address: 0x391260
void zCameraEnableLassoCam()
{
	// Line 1427, Address: 0x391260, Func Offset: 0
	// Line 1429, Address: 0x391264, Func Offset: 0x4
	// Func End, Address: 0x39126c, Func Offset: 0xc
}

// zCameraDisableLassoCam__Fv
// Start address: 0x391270
void zCameraDisableLassoCam()
{
	// Line 1424, Address: 0x391270, Func Offset: 0
	// Func End, Address: 0x391278, Func Offset: 0x8
}

// zCameraEnableInput__Fv
// Start address: 0x391280
void zCameraEnableInput()
{
	// Line 1414, Address: 0x391280, Func Offset: 0
	// Line 1415, Address: 0x391284, Func Offset: 0x4
	// Func End, Address: 0x39128c, Func Offset: 0xc
}

// zCameraDisableInput__Fv
// Start address: 0x391290
void zCameraDisableInput()
{
	// Line 1411, Address: 0x391290, Func Offset: 0
	// Func End, Address: 0x391298, Func Offset: 0x8
}

// zCameraIsTrackingDisabled__Fv
// Start address: 0x3912a0
uint32 zCameraIsTrackingDisabled()
{
	// Line 1403, Address: 0x3912a0, Func Offset: 0
	// Func End, Address: 0x3912a8, Func Offset: 0x8
}

// zCameraEnableTracking__F17camera_owner_enum
// Start address: 0x3912b0
void zCameraEnableTracking(camera_owner_enum owner)
{
	// Line 1397, Address: 0x3912b0, Func Offset: 0
	// Line 1398, Address: 0x3912bc, Func Offset: 0xc
	// Func End, Address: 0x3912c4, Func Offset: 0x14
}

// zCameraDisableTracking__F17camera_owner_enum
// Start address: 0x3912d0
void zCameraDisableTracking(camera_owner_enum owner)
{
	// Line 1392, Address: 0x3912d0, Func Offset: 0
	// Line 1393, Address: 0x3912d8, Func Offset: 0x8
	// Func End, Address: 0x3912e0, Func Offset: 0x10
}

// zCameraSetPlayerVel__FP5xVec3
// Start address: 0x3912e0
void zCameraSetPlayerVel(xVec3* vel)
{
	// Line 1367, Address: 0x3912e0, Func Offset: 0
	// Func End, Address: 0x3912e8, Func Offset: 0x8
}

// zCameraSetHighbounce__Fi
// Start address: 0x3912f0
void zCameraSetHighbounce(int32 hbounce)
{
	// Line 1357, Address: 0x3912f0, Func Offset: 0
	// Line 1360, Address: 0x391308, Func Offset: 0x18
	// Line 1362, Address: 0x39130c, Func Offset: 0x1c
	// Func End, Address: 0x391324, Func Offset: 0x34
}

// zCameraSetLongbounce__Fi
// Start address: 0x391330
void zCameraSetLongbounce(int32 lbounce)
{
	// Line 1345, Address: 0x391330, Func Offset: 0
	// Line 1348, Address: 0x391348, Func Offset: 0x18
	// Line 1350, Address: 0x39134c, Func Offset: 0x1c
	// Func End, Address: 0x391364, Func Offset: 0x34
}

// zCameraSetBbounce__Fi
// Start address: 0x391370
void zCameraSetBbounce(int32 bbouncing)
{
	// Line 1338, Address: 0x391370, Func Offset: 0
	// Func End, Address: 0x391378, Func Offset: 0x8
}

// zCameraUpdate__FP7xCameraf
// Start address: 0x391380
void zCameraUpdate(xCamera* cam, float32 dt)
{
	int32 zcam_near'499;
	xVec3 tran_accum;
	float32 minDist;
	float32 dist;
	float32 oldTgtHeight;
	float32 plerp;
	float32 dlerp;
	float32 dgoal;
	float32 hgoal;
	float32 pgoal;
	float32 pitch_goal;
	float32 pCentered;
	float32 centeringFactor;
	float32 dp;
	float32 dp;
	float32 velx;
	float32 velz;
	float32 camx;
	float32 camz;
	float32 velsin;
	float32 angle_factor;
	float32 vel_factor;
	float32 time_factor;
	float32 dp;
	float32 dirx;
	float32 dirz;
	float32 dx__;
	float32 dy__;
	float32 dz__;
	float32 dist2;
	float32 dist_inv;
	xVec3 destPosition;
	float32 mvtm;
	float32 pitch_s;
	float32 lktm;
	// Line 697, Address: 0x391380, Func Offset: 0
	// Line 702, Address: 0x391388, Func Offset: 0x8
	// Line 697, Address: 0x39138c, Func Offset: 0xc
	// Line 702, Address: 0x3913b4, Func Offset: 0x34
	// Line 698, Address: 0x3913b8, Func Offset: 0x38
	// Line 699, Address: 0x3913c0, Func Offset: 0x40
	// Line 702, Address: 0x3913c4, Func Offset: 0x44
	// Line 698, Address: 0x3913cc, Func Offset: 0x4c
	// Line 702, Address: 0x3913d4, Func Offset: 0x54
	// Line 708, Address: 0x391474, Func Offset: 0xf4
	// Line 702, Address: 0x391478, Func Offset: 0xf8
	// Line 705, Address: 0x3914a4, Func Offset: 0x124
	// Line 706, Address: 0x3914b8, Func Offset: 0x138
	// Line 707, Address: 0x3914bc, Func Offset: 0x13c
	// Line 708, Address: 0x3914c0, Func Offset: 0x140
	// Line 710, Address: 0x3914c8, Func Offset: 0x148
	// Line 713, Address: 0x3914e4, Func Offset: 0x164
	// Line 716, Address: 0x3914f8, Func Offset: 0x178
	// Line 736, Address: 0x391544, Func Offset: 0x1c4
	// Line 741, Address: 0x391550, Func Offset: 0x1d0
	// Line 742, Address: 0x39155c, Func Offset: 0x1dc
	// Line 737, Address: 0x391f98, Func Offset: 0xc18
	// Line 742, Address: 0x391f9c, Func Offset: 0xc1c
	// Line 737, Address: 0x391fac, Func Offset: 0xc2c
	// Line 742, Address: 0x391fb0, Func Offset: 0xc30
	// Line 737, Address: 0x391fbc, Func Offset: 0xc3c
	// Line 742, Address: 0x391fc0, Func Offset: 0xc40
	// Line 738, Address: 0x391fd4, Func Offset: 0xc54
	// Line 742, Address: 0x391fd8, Func Offset: 0xc58
	// Line 743, Address: 0x391fe4, Func Offset: 0xc64
	// Line 749, Address: 0x391ff0, Func Offset: 0xc70
	// Line 771, Address: 0x391ffc, Func Offset: 0xc7c
	// Line 777, Address: 0x392008, Func Offset: 0xc88
	// Line 782, Address: 0x392034, Func Offset: 0xcb4
	// Line 777, Address: 0x392038, Func Offset: 0xcb8
	// Line 780, Address: 0x39203c, Func Offset: 0xcbc
	// Line 782, Address: 0x392040, Func Offset: 0xcc0
	// Line 787, Address: 0x39204c, Func Offset: 0xccc
	// Line 788, Address: 0x392058, Func Offset: 0xcd8
	// Line 792, Address: 0x392064, Func Offset: 0xce4
	// Line 830, Address: 0x392074, Func Offset: 0xcf4
	// Line 832, Address: 0x39207c, Func Offset: 0xcfc
	// Line 833, Address: 0x392088, Func Offset: 0xd08
	// Line 835, Address: 0x392098, Func Offset: 0xd18
	// Line 837, Address: 0x3920a4, Func Offset: 0xd24
	// Line 745, Address: 0x3920b4, Func Offset: 0xd34
	// Line 837, Address: 0x3920b8, Func Offset: 0xd38
	// Line 767, Address: 0x3920e4, Func Offset: 0xd64
	// Line 784, Address: 0x3920ec, Func Offset: 0xd6c
	// Line 837, Address: 0x3920f0, Func Offset: 0xd70
	// Line 785, Address: 0x3920f8, Func Offset: 0xd78
	// Line 837, Address: 0x392100, Func Offset: 0xd80
	// Line 804, Address: 0x39213c, Func Offset: 0xdbc
	// Line 837, Address: 0x392144, Func Offset: 0xdc4
	// Line 804, Address: 0x392154, Func Offset: 0xdd4
	// Line 837, Address: 0x392158, Func Offset: 0xdd8
	// Line 804, Address: 0x39215c, Func Offset: 0xddc
	// Line 837, Address: 0x392160, Func Offset: 0xde0
	// Line 812, Address: 0x392190, Func Offset: 0xe10
	// Line 837, Address: 0x392194, Func Offset: 0xe14
	// Line 812, Address: 0x3921b8, Func Offset: 0xe38
	// Line 837, Address: 0x3921c0, Func Offset: 0xe40
	// Line 796, Address: 0x3921e0, Func Offset: 0xe60
	// Line 837, Address: 0x3921e8, Func Offset: 0xe68
	// Line 804, Address: 0x3921fc, Func Offset: 0xe7c
	// Line 837, Address: 0x39220c, Func Offset: 0xe8c
	// Line 804, Address: 0x392210, Func Offset: 0xe90
	// Line 837, Address: 0x392214, Func Offset: 0xe94
	// Line 804, Address: 0x392218, Func Offset: 0xe98
	// Line 837, Address: 0x392224, Func Offset: 0xea4
	// Line 804, Address: 0x39222c, Func Offset: 0xeac
	// Line 808, Address: 0x392234, Func Offset: 0xeb4
	// Line 837, Address: 0x39223c, Func Offset: 0xebc
	// Line 851, Address: 0x392240, Func Offset: 0xec0
	// Line 837, Address: 0x392244, Func Offset: 0xec4
	// Line 851, Address: 0x39224c, Func Offset: 0xecc
	// Line 852, Address: 0x392250, Func Offset: 0xed0
	// Line 864, Address: 0x39225c, Func Offset: 0xedc
	// Line 865, Address: 0x392280, Func Offset: 0xf00
	// Line 864, Address: 0x392284, Func Offset: 0xf04
	// Line 865, Address: 0x39228c, Func Offset: 0xf0c
	// Line 866, Address: 0x3922e8, Func Offset: 0xf68
	// Line 865, Address: 0x3922fc, Func Offset: 0xf7c
	// Line 868, Address: 0x392304, Func Offset: 0xf84
	// Line 865, Address: 0x392308, Func Offset: 0xf88
	// Line 866, Address: 0x392310, Func Offset: 0xf90
	// Line 868, Address: 0x392314, Func Offset: 0xf94
	// Line 866, Address: 0x392320, Func Offset: 0xfa0
	// Line 868, Address: 0x392334, Func Offset: 0xfb4
	// Line 869, Address: 0x392384, Func Offset: 0x1004
	// Line 870, Address: 0x39239c, Func Offset: 0x101c
	// Line 892, Address: 0x3923b4, Func Offset: 0x1034
	// Line 922, Address: 0x3923d8, Func Offset: 0x1058
	// Line 925, Address: 0x3923e8, Func Offset: 0x1068
	// Line 933, Address: 0x392404, Func Offset: 0x1084
	// Line 926, Address: 0x392408, Func Offset: 0x1088
	// Line 927, Address: 0x39240c, Func Offset: 0x108c
	// Line 936, Address: 0x392418, Func Offset: 0x1098
	// Line 943, Address: 0x392430, Func Offset: 0x10b0
	// Line 944, Address: 0x392450, Func Offset: 0x10d0
	// Line 946, Address: 0x392454, Func Offset: 0x10d4
	// Line 947, Address: 0x392460, Func Offset: 0x10e0
	// Line 985, Address: 0x392468, Func Offset: 0x10e8
	// Line 986, Address: 0x3924ac, Func Offset: 0x112c
	// Line 989, Address: 0x3924dc, Func Offset: 0x115c
	// Line 986, Address: 0x3924e0, Func Offset: 0x1160
	// Line 989, Address: 0x3924ec, Func Offset: 0x116c
	// Line 995, Address: 0x392500, Func Offset: 0x1180
	// Line 997, Address: 0x39251c, Func Offset: 0x119c
	// Line 995, Address: 0x392520, Func Offset: 0x11a0
	// Line 997, Address: 0x392524, Func Offset: 0x11a4
	// Line 998, Address: 0x392534, Func Offset: 0x11b4
	// Line 997, Address: 0x392540, Func Offset: 0x11c0
	// Line 998, Address: 0x392544, Func Offset: 0x11c4
	// Line 1013, Address: 0x392548, Func Offset: 0x11c8
	// Line 1017, Address: 0x392558, Func Offset: 0x11d8
	// Line 1019, Address: 0x392568, Func Offset: 0x11e8
	// Line 1020, Address: 0x392578, Func Offset: 0x11f8
	// Line 1021, Address: 0x39258c, Func Offset: 0x120c
	// Line 1022, Address: 0x392598, Func Offset: 0x1218
	// Line 1024, Address: 0x3925a0, Func Offset: 0x1220
	// Line 1030, Address: 0x3925b0, Func Offset: 0x1230
	// Line 1024, Address: 0x3925b8, Func Offset: 0x1238
	// Line 1030, Address: 0x3925bc, Func Offset: 0x123c
	// Line 1031, Address: 0x3925d0, Func Offset: 0x1250
	// Line 1033, Address: 0x3925ec, Func Offset: 0x126c
	// Line 1080, Address: 0x3925f8, Func Offset: 0x1278
	// Line 1081, Address: 0x3925fc, Func Offset: 0x127c
	// Line 1084, Address: 0x392600, Func Offset: 0x1280
	// Line 1087, Address: 0x392608, Func Offset: 0x1288
	// Line 1088, Address: 0x392624, Func Offset: 0x12a4
	// Line 1090, Address: 0x392630, Func Offset: 0x12b0
	// Line 1092, Address: 0x392684, Func Offset: 0x1304
	// Line 1090, Address: 0x392688, Func Offset: 0x1308
	// Line 1092, Address: 0x392690, Func Offset: 0x1310
	// Line 1093, Address: 0x3926a4, Func Offset: 0x1324
	// Line 1096, Address: 0x3926b4, Func Offset: 0x1334
	// Line 1101, Address: 0x3926b8, Func Offset: 0x1338
	// Line 1096, Address: 0x3926c8, Func Offset: 0x1348
	// Line 1097, Address: 0x3926d0, Func Offset: 0x1350
	// Line 1101, Address: 0x3926dc, Func Offset: 0x135c
	// Line 1109, Address: 0x3926ec, Func Offset: 0x136c
	// Line 1111, Address: 0x3926f4, Func Offset: 0x1374
	// Line 1113, Address: 0x392704, Func Offset: 0x1384
	// Line 1115, Address: 0x392758, Func Offset: 0x13d8
	// Line 1113, Address: 0x39275c, Func Offset: 0x13dc
	// Line 1115, Address: 0x392764, Func Offset: 0x13e4
	// Line 1116, Address: 0x392778, Func Offset: 0x13f8
	// Line 1119, Address: 0x392788, Func Offset: 0x1408
	// Line 1124, Address: 0x39278c, Func Offset: 0x140c
	// Line 1119, Address: 0x39279c, Func Offset: 0x141c
	// Line 1120, Address: 0x3927a4, Func Offset: 0x1424
	// Line 1124, Address: 0x3927b0, Func Offset: 0x1430
	// Line 1132, Address: 0x3927c0, Func Offset: 0x1440
	// Line 1139, Address: 0x3927cc, Func Offset: 0x144c
	// Line 1140, Address: 0x3927f4, Func Offset: 0x1474
	// Line 1142, Address: 0x392800, Func Offset: 0x1480
	// Line 1143, Address: 0x392854, Func Offset: 0x14d4
	// Line 1142, Address: 0x392858, Func Offset: 0x14d8
	// Line 1143, Address: 0x39285c, Func Offset: 0x14dc
	// Line 1142, Address: 0x392860, Func Offset: 0x14e0
	// Line 1143, Address: 0x392868, Func Offset: 0x14e8
	// Line 1148, Address: 0x392874, Func Offset: 0x14f4
	// Line 1150, Address: 0x39287c, Func Offset: 0x14fc
	// Line 1152, Address: 0x39288c, Func Offset: 0x150c
	// Line 1153, Address: 0x3928e0, Func Offset: 0x1560
	// Line 1152, Address: 0x3928e4, Func Offset: 0x1564
	// Line 1153, Address: 0x3928e8, Func Offset: 0x1568
	// Line 1152, Address: 0x3928ec, Func Offset: 0x156c
	// Line 1153, Address: 0x3928f4, Func Offset: 0x1574
	// Line 1158, Address: 0x392900, Func Offset: 0x1580
	// Line 1163, Address: 0x39290c, Func Offset: 0x158c
	// Line 1168, Address: 0x392958, Func Offset: 0x15d8
	// Line 1169, Address: 0x39295c, Func Offset: 0x15dc
	// Line 1163, Address: 0x392960, Func Offset: 0x15e0
	// Line 1168, Address: 0x392964, Func Offset: 0x15e4
	// Line 1171, Address: 0x392968, Func Offset: 0x15e8
	// Line 1170, Address: 0x39296c, Func Offset: 0x15ec
	// Line 1168, Address: 0x392970, Func Offset: 0x15f0
	// Line 1169, Address: 0x392974, Func Offset: 0x15f4
	// Line 1168, Address: 0x39297c, Func Offset: 0x15fc
	// Line 1171, Address: 0x392980, Func Offset: 0x1600
	// Line 1168, Address: 0x392984, Func Offset: 0x1604
	// Line 1169, Address: 0x392988, Func Offset: 0x1608
	// Line 1170, Address: 0x39298c, Func Offset: 0x160c
	// Line 1172, Address: 0x392990, Func Offset: 0x1610
	// Line 1169, Address: 0x392998, Func Offset: 0x1618
	// Line 1168, Address: 0x39299c, Func Offset: 0x161c
	// Line 1172, Address: 0x3929a0, Func Offset: 0x1620
	// Line 1173, Address: 0x3929a4, Func Offset: 0x1624
	// Line 1172, Address: 0x3929b4, Func Offset: 0x1634
	// Line 1173, Address: 0x3929b8, Func Offset: 0x1638
	// Line 1176, Address: 0x3929c0, Func Offset: 0x1640
	// Line 1178, Address: 0x3929dc, Func Offset: 0x165c
	// Line 1179, Address: 0x3929ec, Func Offset: 0x166c
	// Line 1182, Address: 0x3929f8, Func Offset: 0x1678
	// Line 1183, Address: 0x3929fc, Func Offset: 0x167c
	// Line 1182, Address: 0x392a00, Func Offset: 0x1680
	// Line 1183, Address: 0x392a04, Func Offset: 0x1684
	// Line 1184, Address: 0x392a10, Func Offset: 0x1690
	// Line 1192, Address: 0x392a14, Func Offset: 0x1694
	// Line 1197, Address: 0x392a4c, Func Offset: 0x16cc
	// Line 1198, Address: 0x392a54, Func Offset: 0x16d4
	// Line 1201, Address: 0x392a58, Func Offset: 0x16d8
	// Line 1200, Address: 0x392a5c, Func Offset: 0x16dc
	// Line 1197, Address: 0x392a60, Func Offset: 0x16e0
	// Line 1199, Address: 0x392a64, Func Offset: 0x16e4
	// Line 1201, Address: 0x392a6c, Func Offset: 0x16ec
	// Line 1203, Address: 0x392acc, Func Offset: 0x174c
	// Line 1202, Address: 0x392ad4, Func Offset: 0x1754
	// Line 1203, Address: 0x392ad8, Func Offset: 0x1758
	// Line 1206, Address: 0x392b10, Func Offset: 0x1790
	// Line 1211, Address: 0x392b30, Func Offset: 0x17b0
	// Line 1212, Address: 0x392b3c, Func Offset: 0x17bc
	// Line 1213, Address: 0x392b50, Func Offset: 0x17d0
	// Line 1214, Address: 0x392b58, Func Offset: 0x17d8
	// Line 1217, Address: 0x392b64, Func Offset: 0x17e4
	// Line 1216, Address: 0x392b68, Func Offset: 0x17e8
	// Line 1217, Address: 0x392b6c, Func Offset: 0x17ec
	// Line 1216, Address: 0x392b70, Func Offset: 0x17f0
	// Line 1217, Address: 0x392b84, Func Offset: 0x1804
	// Line 1226, Address: 0x392bd8, Func Offset: 0x1858
	// Line 1218, Address: 0x392bdc, Func Offset: 0x185c
	// Line 1226, Address: 0x392be4, Func Offset: 0x1864
	// Line 1218, Address: 0x392be8, Func Offset: 0x1868
	// Line 1226, Address: 0x392bfc, Func Offset: 0x187c
	// Line 1227, Address: 0x392c50, Func Offset: 0x18d0
	// Line 1226, Address: 0x392c54, Func Offset: 0x18d4
	// Line 1227, Address: 0x392c5c, Func Offset: 0x18dc
	// Line 1228, Address: 0x392c70, Func Offset: 0x18f0
	// Line 1230, Address: 0x392c80, Func Offset: 0x1900
	// Line 1232, Address: 0x392c94, Func Offset: 0x1914
	// Line 1231, Address: 0x392c98, Func Offset: 0x1918
	// Line 1232, Address: 0x392c9c, Func Offset: 0x191c
	// Line 1233, Address: 0x392ca4, Func Offset: 0x1924
	// Line 1234, Address: 0x392cac, Func Offset: 0x192c
	// Line 1236, Address: 0x392cb4, Func Offset: 0x1934
	// Line 1235, Address: 0x392cb8, Func Offset: 0x1938
	// Line 1236, Address: 0x392cbc, Func Offset: 0x193c
	// Line 1237, Address: 0x392cc4, Func Offset: 0x1944
	// Line 1243, Address: 0x392cd0, Func Offset: 0x1950
	// Line 1251, Address: 0x392cf4, Func Offset: 0x1974
	// Line 1252, Address: 0x392d8c, Func Offset: 0x1a0c
	// Line 1256, Address: 0x392d9c, Func Offset: 0x1a1c
	// Line 1265, Address: 0x392da8, Func Offset: 0x1a28
	// Line 1266, Address: 0x392dc0, Func Offset: 0x1a40
	// Line 1285, Address: 0x392de4, Func Offset: 0x1a64
	// Line 1296, Address: 0x392e0c, Func Offset: 0x1a8c
	// Line 1314, Address: 0x392e18, Func Offset: 0x1a98
	// Line 1315, Address: 0x392e20, Func Offset: 0x1aa0
	// Line 1316, Address: 0x392e28, Func Offset: 0x1aa8
	// Line 1317, Address: 0x392e30, Func Offset: 0x1ab0
	// Line 1319, Address: 0x392e38, Func Offset: 0x1ab8
	// Line 1322, Address: 0x392e3c, Func Offset: 0x1abc
	// Line 1324, Address: 0x392e48, Func Offset: 0x1ac8
	// Line 1325, Address: 0x392e60, Func Offset: 0x1ae0
	// Line 1328, Address: 0x392e64, Func Offset: 0x1ae4
	// Line 1331, Address: 0x392e6c, Func Offset: 0x1aec
	// Line 1332, Address: 0x392e74, Func Offset: 0x1af4
	// Line 1333, Address: 0x392e78, Func Offset: 0x1af8
	// Line 853, Address: 0x392e80, Func Offset: 0x1b00
	// Line 1333, Address: 0x392e88, Func Offset: 0x1b08
	// Line 854, Address: 0x392e98, Func Offset: 0x1b18
	// Line 1333, Address: 0x392ea8, Func Offset: 0x1b28
	// Line 877, Address: 0x392ec0, Func Offset: 0x1b40
	// Line 1333, Address: 0x392ec4, Func Offset: 0x1b44
	// Line 877, Address: 0x392ed0, Func Offset: 0x1b50
	// Line 875, Address: 0x392ed4, Func Offset: 0x1b54
	// Line 876, Address: 0x392ed8, Func Offset: 0x1b58
	// Line 877, Address: 0x392edc, Func Offset: 0x1b5c
	// Line 876, Address: 0x392ee0, Func Offset: 0x1b60
	// Line 875, Address: 0x392ee4, Func Offset: 0x1b64
	// Line 877, Address: 0x392ee8, Func Offset: 0x1b68
	// Line 1333, Address: 0x392eec, Func Offset: 0x1b6c
	// Line 875, Address: 0x392ef4, Func Offset: 0x1b74
	// Line 878, Address: 0x392ef8, Func Offset: 0x1b78
	// Line 1333, Address: 0x392efc, Func Offset: 0x1b7c
	// Line 876, Address: 0x392f04, Func Offset: 0x1b84
	// Line 879, Address: 0x392f08, Func Offset: 0x1b88
	// Line 1333, Address: 0x392f0c, Func Offset: 0x1b8c
	// Line 896, Address: 0x392f2c, Func Offset: 0x1bac
	// Line 894, Address: 0x392f30, Func Offset: 0x1bb0
	// Line 1333, Address: 0x392f34, Func Offset: 0x1bb4
	// Line 897, Address: 0x392f40, Func Offset: 0x1bc0
	// Line 1333, Address: 0x392f4c, Func Offset: 0x1bcc
	// Line 937, Address: 0x392f50, Func Offset: 0x1bd0
	// Line 1333, Address: 0x392f54, Func Offset: 0x1bd4
	// Line 941, Address: 0x392f58, Func Offset: 0x1bd8
	// Line 1015, Address: 0x392f60, Func Offset: 0x1be0
	// Line 1333, Address: 0x392f6c, Func Offset: 0x1bec
	// Line 1026, Address: 0x392f70, Func Offset: 0x1bf0
	// Line 1025, Address: 0x392f80, Func Offset: 0x1c00
	// Line 1333, Address: 0x392f84, Func Offset: 0x1c04
	// Line 1026, Address: 0x392f88, Func Offset: 0x1c08
	// Line 1333, Address: 0x392f9c, Func Offset: 0x1c1c
	// Line 1035, Address: 0x392fb4, Func Offset: 0x1c34
	// Line 1333, Address: 0x392fc8, Func Offset: 0x1c48
	// Line 1037, Address: 0x392fd4, Func Offset: 0x1c54
	// Line 1333, Address: 0x392fd8, Func Offset: 0x1c58
	// Line 1039, Address: 0x392fe4, Func Offset: 0x1c64
	// Line 1040, Address: 0x392ff4, Func Offset: 0x1c74
	// Line 1333, Address: 0x392ff8, Func Offset: 0x1c78
	// Line 1045, Address: 0x393004, Func Offset: 0x1c84
	// Line 1048, Address: 0x39300c, Func Offset: 0x1c8c
	// Line 1049, Address: 0x39301c, Func Offset: 0x1c9c
	// Line 1333, Address: 0x393020, Func Offset: 0x1ca0
	// Line 1055, Address: 0x39302c, Func Offset: 0x1cac
	// Line 1333, Address: 0x393034, Func Offset: 0x1cb4
	// Line 1058, Address: 0x393038, Func Offset: 0x1cb8
	// Line 1333, Address: 0x39303c, Func Offset: 0x1cbc
	// Line 1060, Address: 0x393048, Func Offset: 0x1cc8
	// Line 1061, Address: 0x393058, Func Offset: 0x1cd8
	// Line 1333, Address: 0x39305c, Func Offset: 0x1cdc
	// Line 1067, Address: 0x39306c, Func Offset: 0x1cec
	// Line 1070, Address: 0x393074, Func Offset: 0x1cf4
	// Line 1071, Address: 0x393084, Func Offset: 0x1d04
	// Line 1333, Address: 0x393088, Func Offset: 0x1d08
	// Line 1102, Address: 0x3930b8, Func Offset: 0x1d38
	// Line 1103, Address: 0x3930bc, Func Offset: 0x1d3c
	// Line 1333, Address: 0x3930c0, Func Offset: 0x1d40
	// Line 1125, Address: 0x3930d0, Func Offset: 0x1d50
	// Line 1126, Address: 0x3930d4, Func Offset: 0x1d54
	// Line 1333, Address: 0x3930d8, Func Offset: 0x1d58
	// Line 1177, Address: 0x3930fc, Func Offset: 0x1d7c
	// Line 1178, Address: 0x393100, Func Offset: 0x1d80
	// Line 1333, Address: 0x393110, Func Offset: 0x1d90
	// Line 1260, Address: 0x393114, Func Offset: 0x1d94
	// Line 1258, Address: 0x39311c, Func Offset: 0x1d9c
	// Line 1260, Address: 0x393120, Func Offset: 0x1da0
	// Line 1333, Address: 0x393124, Func Offset: 0x1da4
	// Line 1261, Address: 0x39312c, Func Offset: 0x1dac
	// Line 1333, Address: 0x393130, Func Offset: 0x1db0
	// Line 1262, Address: 0x393138, Func Offset: 0x1db8
	// Line 1333, Address: 0x393140, Func Offset: 0x1dc0
	// Line 1275, Address: 0x393144, Func Offset: 0x1dc4
	// Line 1333, Address: 0x393148, Func Offset: 0x1dc8
	// Line 1275, Address: 0x39314c, Func Offset: 0x1dcc
	// Line 1333, Address: 0x393150, Func Offset: 0x1dd0
	// Line 1275, Address: 0x393154, Func Offset: 0x1dd4
	// Line 1333, Address: 0x39315c, Func Offset: 0x1ddc
	// Line 1298, Address: 0x39316c, Func Offset: 0x1dec
	// Line 1333, Address: 0x393174, Func Offset: 0x1df4
	// Line 1298, Address: 0x393178, Func Offset: 0x1df8
	// Line 1333, Address: 0x393180, Func Offset: 0x1e00
	// Line 1298, Address: 0x393184, Func Offset: 0x1e04
	// Line 1333, Address: 0x393188, Func Offset: 0x1e08
	// Line 1310, Address: 0x393194, Func Offset: 0x1e14
	// Line 1307, Address: 0x39319c, Func Offset: 0x1e1c
	// Line 1333, Address: 0x3931a4, Func Offset: 0x1e24
	// Line 1310, Address: 0x3931a8, Func Offset: 0x1e28
	// Line 1333, Address: 0x3931ac, Func Offset: 0x1e2c
	// Line 1310, Address: 0x3931bc, Func Offset: 0x1e3c
	// Line 1333, Address: 0x3931c0, Func Offset: 0x1e40
	// Line 1305, Address: 0x3931c8, Func Offset: 0x1e48
	// Line 1333, Address: 0x3931cc, Func Offset: 0x1e4c
	// Line 1307, Address: 0x3931e0, Func Offset: 0x1e60
	// Line 1305, Address: 0x3931e4, Func Offset: 0x1e64
	// Line 1333, Address: 0x3931f0, Func Offset: 0x1e70
	// Line 1306, Address: 0x393214, Func Offset: 0x1e94
	// Line 1333, Address: 0x393218, Func Offset: 0x1e98
	// Line 1306, Address: 0x393220, Func Offset: 0x1ea0
	// Line 1333, Address: 0x393224, Func Offset: 0x1ea4
	// Line 1306, Address: 0x393230, Func Offset: 0x1eb0
	// Line 1307, Address: 0x393234, Func Offset: 0x1eb4
	// Line 1333, Address: 0x393238, Func Offset: 0x1eb8
	// Line 1313, Address: 0x393248, Func Offset: 0x1ec8
	// Line 1314, Address: 0x39324c, Func Offset: 0x1ecc
	// Line 1333, Address: 0x393254, Func Offset: 0x1ed4
	// Func End, Address: 0x393284, Func Offset: 0x1f04
}

// zCameraIsFlyCamRunning__Fv
// Start address: 0x393290
int32 zCameraIsFlyCamRunning()
{
	// Line 694, Address: 0x393290, Func Offset: 0
	// Func End, Address: 0x393298, Func Offset: 0x8
}

// zCameraFreeLookSetGoals__FP7xCamerafRfRfRfRff
// Start address: 0x3932a0
void zCameraFreeLookSetGoals(xCamera* cam, float32 pitch_s, float32& dgoal, float32& hgoal, float32& pitch_goal, float32& lktm, float32 dt)
{
	float32 s;
	// Line 624, Address: 0x3932a0, Func Offset: 0
	// Line 626, Address: 0x3932b0, Func Offset: 0x10
	// Line 627, Address: 0x3932b8, Func Offset: 0x18
	// Line 628, Address: 0x393300, Func Offset: 0x60
	// Line 629, Address: 0x39334c, Func Offset: 0xac
	// Line 630, Address: 0x393364, Func Offset: 0xc4
	// Line 651, Address: 0x393370, Func Offset: 0xd0
	// Line 652, Address: 0x3933b0, Func Offset: 0x110
	// Line 653, Address: 0x3933e8, Func Offset: 0x148
	// Line 657, Address: 0x3933fc, Func Offset: 0x15c
	// Line 658, Address: 0x393418, Func Offset: 0x178
	// Line 659, Address: 0x393434, Func Offset: 0x194
	// Line 660, Address: 0x39344c, Func Offset: 0x1ac
	// Line 662, Address: 0x39345c, Func Offset: 0x1bc
	// Line 666, Address: 0x393464, Func Offset: 0x1c4
	// Line 668, Address: 0x393478, Func Offset: 0x1d8
	// Line 669, Address: 0x39348c, Func Offset: 0x1ec
	// Line 670, Address: 0x3934a0, Func Offset: 0x200
	// Line 672, Address: 0x3934b8, Func Offset: 0x218
	// Line 674, Address: 0x3934c0, Func Offset: 0x220
	// Line 673, Address: 0x3934c4, Func Offset: 0x224
	// Line 674, Address: 0x3934c8, Func Offset: 0x228
	// Line 675, Address: 0x3934d8, Func Offset: 0x238
	// Line 676, Address: 0x3934ec, Func Offset: 0x24c
	// Line 681, Address: 0x393500, Func Offset: 0x260
	// Line 682, Address: 0x393520, Func Offset: 0x280
	// Line 683, Address: 0x393528, Func Offset: 0x288
	// Line 684, Address: 0x393534, Func Offset: 0x294
	// Line 689, Address: 0x393538, Func Offset: 0x298
	// Line 633, Address: 0x39354c, Func Offset: 0x2ac
	// Line 689, Address: 0x39355c, Func Offset: 0x2bc
	// Line 633, Address: 0x393564, Func Offset: 0x2c4
	// Line 689, Address: 0x39356c, Func Offset: 0x2cc
	// Line 633, Address: 0x393570, Func Offset: 0x2d0
	// Line 689, Address: 0x393574, Func Offset: 0x2d4
	// Line 633, Address: 0x39357c, Func Offset: 0x2dc
	// Line 689, Address: 0x393584, Func Offset: 0x2e4
	// Line 633, Address: 0x393590, Func Offset: 0x2f0
	// Line 689, Address: 0x3935a0, Func Offset: 0x300
	// Line 634, Address: 0x3935b0, Func Offset: 0x310
	// Line 689, Address: 0x3935c4, Func Offset: 0x324
	// Line 634, Address: 0x3935d0, Func Offset: 0x330
	// Line 689, Address: 0x3935d8, Func Offset: 0x338
	// Line 634, Address: 0x3935dc, Func Offset: 0x33c
	// Line 689, Address: 0x3935e0, Func Offset: 0x340
	// Line 634, Address: 0x3935e8, Func Offset: 0x348
	// Line 689, Address: 0x3935f0, Func Offset: 0x350
	// Line 634, Address: 0x3935fc, Func Offset: 0x35c
	// Line 689, Address: 0x39360c, Func Offset: 0x36c
	// Line 636, Address: 0x393620, Func Offset: 0x380
	// Line 689, Address: 0x393624, Func Offset: 0x384
	// Line 636, Address: 0x393634, Func Offset: 0x394
	// Line 689, Address: 0x393640, Func Offset: 0x3a0
	// Line 637, Address: 0x393654, Func Offset: 0x3b4
	// Line 689, Address: 0x393664, Func Offset: 0x3c4
	// Line 637, Address: 0x393698, Func Offset: 0x3f8
	// Line 689, Address: 0x39369c, Func Offset: 0x3fc
	// Line 637, Address: 0x3936a4, Func Offset: 0x404
	// Line 689, Address: 0x3936b4, Func Offset: 0x414
	// Line 643, Address: 0x3936c0, Func Offset: 0x420
	// Line 644, Address: 0x3936f8, Func Offset: 0x458
	// Line 689, Address: 0x393700, Func Offset: 0x460
	// Line 645, Address: 0x39370c, Func Offset: 0x46c
	// Line 689, Address: 0x39372c, Func Offset: 0x48c
	// Line 647, Address: 0x393730, Func Offset: 0x490
	// Line 637, Address: 0x393738, Func Offset: 0x498
	// Line 689, Address: 0x39374c, Func Offset: 0x4ac
	// Func End, Address: 0x393754, Func Offset: 0x4b4
}

// zCameraRewardUpdate__FP7xCameraf
// Start address: 0x393760
int32 zCameraRewardUpdate(xCamera* cam, float32 dt)
{
	xVec3 v;
	// Line 548, Address: 0x393760, Func Offset: 0
	// Line 549, Address: 0x393774, Func Offset: 0x14
	// Line 551, Address: 0x39377c, Func Offset: 0x1c
	// Line 553, Address: 0x3937a8, Func Offset: 0x48
	// Line 552, Address: 0x3937b0, Func Offset: 0x50
	// Line 553, Address: 0x3937b4, Func Offset: 0x54
	// Line 560, Address: 0x3937b8, Func Offset: 0x58
	// Line 552, Address: 0x3937c0, Func Offset: 0x60
	// Line 553, Address: 0x3937dc, Func Offset: 0x7c
	// Line 552, Address: 0x3937e0, Func Offset: 0x80
	// Line 553, Address: 0x3937e4, Func Offset: 0x84
	// Line 552, Address: 0x3937e8, Func Offset: 0x88
	// Line 560, Address: 0x3937ec, Func Offset: 0x8c
	// Line 562, Address: 0x393800, Func Offset: 0xa0
	// Line 571, Address: 0x393808, Func Offset: 0xa8
	// Line 573, Address: 0x393810, Func Offset: 0xb0
	// Line 574, Address: 0x393814, Func Offset: 0xb4
	// Line 573, Address: 0x393818, Func Offset: 0xb8
	// Line 574, Address: 0x39381c, Func Offset: 0xbc
	// Line 573, Address: 0x393820, Func Offset: 0xc0
	// Line 575, Address: 0x393824, Func Offset: 0xc4
	// Line 574, Address: 0x393828, Func Offset: 0xc8
	// Line 575, Address: 0x39382c, Func Offset: 0xcc
	// Line 576, Address: 0x393834, Func Offset: 0xd4
	// Line 577, Address: 0x39383c, Func Offset: 0xdc
	// Line 578, Address: 0x393844, Func Offset: 0xe4
	// Line 580, Address: 0x393848, Func Offset: 0xe8
	// Line 583, Address: 0x39385c, Func Offset: 0xfc
	// Line 592, Address: 0x393864, Func Offset: 0x104
	// Line 594, Address: 0x393870, Func Offset: 0x110
	// Line 595, Address: 0x393874, Func Offset: 0x114
	// Line 594, Address: 0x393878, Func Offset: 0x118
	// Line 595, Address: 0x39387c, Func Offset: 0x11c
	// Line 596, Address: 0x393880, Func Offset: 0x120
	// Line 598, Address: 0x393884, Func Offset: 0x124
	// Line 596, Address: 0x393888, Func Offset: 0x128
	// Line 597, Address: 0x393890, Func Offset: 0x130
	// Line 599, Address: 0x393898, Func Offset: 0x138
	// Line 606, Address: 0x3938a4, Func Offset: 0x144
	// Line 607, Address: 0x3938b4, Func Offset: 0x154
	// Line 606, Address: 0x3938b8, Func Offset: 0x158
	// Line 607, Address: 0x3938e4, Func Offset: 0x184
	// Line 606, Address: 0x3938e8, Func Offset: 0x188
	// Line 607, Address: 0x3938ec, Func Offset: 0x18c
	// Line 609, Address: 0x393900, Func Offset: 0x1a0
	// Line 610, Address: 0x393914, Func Offset: 0x1b4
	// Line 615, Address: 0x393928, Func Offset: 0x1c8
	// Line 618, Address: 0x39395c, Func Offset: 0x1fc
	// Line 564, Address: 0x393964, Func Offset: 0x204
	// Line 565, Address: 0x393968, Func Offset: 0x208
	// Line 564, Address: 0x39396c, Func Offset: 0x20c
	// Line 565, Address: 0x393970, Func Offset: 0x210
	// Line 618, Address: 0x393974, Func Offset: 0x214
	// Line 566, Address: 0x393978, Func Offset: 0x218
	// Line 618, Address: 0x39397c, Func Offset: 0x21c
	// Line 566, Address: 0x393980, Func Offset: 0x220
	// Line 618, Address: 0x393984, Func Offset: 0x224
	// Line 567, Address: 0x393988, Func Offset: 0x228
	// Line 618, Address: 0x39398c, Func Offset: 0x22c
	// Line 568, Address: 0x393990, Func Offset: 0x230
	// Line 618, Address: 0x393994, Func Offset: 0x234
	// Line 569, Address: 0x393998, Func Offset: 0x238
	// Line 571, Address: 0x3939a0, Func Offset: 0x240
	// Line 585, Address: 0x3939a8, Func Offset: 0x248
	// Line 586, Address: 0x3939ac, Func Offset: 0x24c
	// Line 618, Address: 0x3939b0, Func Offset: 0x250
	// Line 587, Address: 0x3939b8, Func Offset: 0x258
	// Line 618, Address: 0x3939bc, Func Offset: 0x25c
	// Line 587, Address: 0x3939c0, Func Offset: 0x260
	// Line 618, Address: 0x3939c4, Func Offset: 0x264
	// Line 588, Address: 0x3939c8, Func Offset: 0x268
	// Line 618, Address: 0x3939cc, Func Offset: 0x26c
	// Line 590, Address: 0x3939d0, Func Offset: 0x270
	// Line 592, Address: 0x3939d8, Func Offset: 0x278
	// Line 619, Address: 0x3939e0, Func Offset: 0x280
	// Func End, Address: 0x3939f4, Func Offset: 0x294
}

// zCameraFlyStop__Fv
// Start address: 0x393a00
void zCameraFlyStop()
{
	// Line 521, Address: 0x393a00, Func Offset: 0
	// Line 522, Address: 0x393a08, Func Offset: 0x8
	// Line 537, Address: 0x393a14, Func Offset: 0x14
	// Line 530, Address: 0x393a20, Func Offset: 0x20
	// Line 537, Address: 0x393a24, Func Offset: 0x24
	// Line 535, Address: 0x393a48, Func Offset: 0x48
	// Line 534, Address: 0x393a4c, Func Offset: 0x4c
	// Line 537, Address: 0x393a50, Func Offset: 0x50
	// Func End, Address: 0x393a6c, Func Offset: 0x6c
}

// zCameraFlyRestoreBackup__FP7xCamera
// Start address: 0x393a70
void zCameraFlyRestoreBackup(xCamera* backup)
{
	// Line 478, Address: 0x393a70, Func Offset: 0
	// Line 480, Address: 0x393a74, Func Offset: 0x4
	// Line 478, Address: 0x393a78, Func Offset: 0x8
	// Line 479, Address: 0x393a7c, Func Offset: 0xc
	// Line 478, Address: 0x393a80, Func Offset: 0x10
	// Line 479, Address: 0x393a84, Func Offset: 0x14
	// Line 478, Address: 0x393a88, Func Offset: 0x18
	// Line 479, Address: 0x393a8c, Func Offset: 0x1c
	// Line 478, Address: 0x393a90, Func Offset: 0x20
	// Line 479, Address: 0x393a94, Func Offset: 0x24
	// Line 478, Address: 0x393a98, Func Offset: 0x28
	// Line 479, Address: 0x393a9c, Func Offset: 0x2c
	// Line 478, Address: 0x393aa0, Func Offset: 0x30
	// Line 479, Address: 0x393aa4, Func Offset: 0x34
	// Line 478, Address: 0x393aa8, Func Offset: 0x38
	// Line 479, Address: 0x393aac, Func Offset: 0x3c
	// Line 478, Address: 0x393ab0, Func Offset: 0x40
	// Line 479, Address: 0x393ab4, Func Offset: 0x44
	// Line 478, Address: 0x393ab8, Func Offset: 0x48
	// Line 479, Address: 0x393abc, Func Offset: 0x4c
	// Line 480, Address: 0x393ac4, Func Offset: 0x54
	// Line 479, Address: 0x393ac8, Func Offset: 0x58
	// Line 480, Address: 0x393acc, Func Offset: 0x5c
	// Line 479, Address: 0x393ad0, Func Offset: 0x60
	// Line 480, Address: 0x393ad4, Func Offset: 0x64
	// Line 479, Address: 0x393adc, Func Offset: 0x6c
	// Line 480, Address: 0x393ae0, Func Offset: 0x70
	// Line 479, Address: 0x393ae4, Func Offset: 0x74
	// Line 480, Address: 0x393ae8, Func Offset: 0x78
	// Line 479, Address: 0x393aec, Func Offset: 0x7c
	// Line 480, Address: 0x393af0, Func Offset: 0x80
	// Line 479, Address: 0x393af4, Func Offset: 0x84
	// Line 480, Address: 0x393af8, Func Offset: 0x88
	// Line 479, Address: 0x393afc, Func Offset: 0x8c
	// Line 480, Address: 0x393b04, Func Offset: 0x94
	// Line 479, Address: 0x393b08, Func Offset: 0x98
	// Line 480, Address: 0x393b0c, Func Offset: 0x9c
	// Line 479, Address: 0x393b10, Func Offset: 0xa0
	// Line 480, Address: 0x393b14, Func Offset: 0xa4
	// Line 479, Address: 0x393b18, Func Offset: 0xa8
	// Line 480, Address: 0x393b1c, Func Offset: 0xac
	// Line 479, Address: 0x393b24, Func Offset: 0xb4
	// Line 481, Address: 0x393b28, Func Offset: 0xb8
	// Line 479, Address: 0x393b2c, Func Offset: 0xbc
	// Line 481, Address: 0x393b30, Func Offset: 0xc0
	// Line 480, Address: 0x393b34, Func Offset: 0xc4
	// Line 481, Address: 0x393b38, Func Offset: 0xc8
	// Line 480, Address: 0x393b3c, Func Offset: 0xcc
	// Line 481, Address: 0x393b40, Func Offset: 0xd0
	// Line 480, Address: 0x393b44, Func Offset: 0xd4
	// Line 479, Address: 0x393b48, Func Offset: 0xd8
	// Line 481, Address: 0x393b4c, Func Offset: 0xdc
	// Line 479, Address: 0x393b50, Func Offset: 0xe0
	// Line 481, Address: 0x393b54, Func Offset: 0xe4
	// Line 479, Address: 0x393b58, Func Offset: 0xe8
	// Line 481, Address: 0x393b5c, Func Offset: 0xec
	// Line 479, Address: 0x393b60, Func Offset: 0xf0
	// Line 481, Address: 0x393b64, Func Offset: 0xf4
	// Line 480, Address: 0x393b6c, Func Offset: 0xfc
	// Line 481, Address: 0x393b70, Func Offset: 0x100
	// Line 480, Address: 0x393b74, Func Offset: 0x104
	// Line 481, Address: 0x393b78, Func Offset: 0x108
	// Line 480, Address: 0x393b7c, Func Offset: 0x10c
	// Line 481, Address: 0x393b80, Func Offset: 0x110
	// Line 480, Address: 0x393b84, Func Offset: 0x114
	// Line 481, Address: 0x393b88, Func Offset: 0x118
	// Line 480, Address: 0x393b8c, Func Offset: 0x11c
	// Line 479, Address: 0x393b90, Func Offset: 0x120
	// Line 481, Address: 0x393b94, Func Offset: 0x124
	// Line 482, Address: 0x393b98, Func Offset: 0x128
	// Line 481, Address: 0x393b9c, Func Offset: 0x12c
	// Line 479, Address: 0x393ba0, Func Offset: 0x130
	// Line 482, Address: 0x393ba4, Func Offset: 0x134
	// Line 479, Address: 0x393ba8, Func Offset: 0x138
	// Line 481, Address: 0x393bac, Func Offset: 0x13c
	// Line 479, Address: 0x393bb0, Func Offset: 0x140
	// Line 481, Address: 0x393bb4, Func Offset: 0x144
	// Line 480, Address: 0x393bd4, Func Offset: 0x164
	// Line 482, Address: 0x393bd8, Func Offset: 0x168
	// Line 502, Address: 0x393bdc, Func Offset: 0x16c
	// Line 479, Address: 0x393be0, Func Offset: 0x170
	// Line 502, Address: 0x393be4, Func Offset: 0x174
	// Line 479, Address: 0x393be8, Func Offset: 0x178
	// Line 482, Address: 0x393bec, Func Offset: 0x17c
	// Line 479, Address: 0x393bf0, Func Offset: 0x180
	// Line 482, Address: 0x393bf4, Func Offset: 0x184
	// Line 479, Address: 0x393bf8, Func Offset: 0x188
	// Line 482, Address: 0x393bfc, Func Offset: 0x18c
	// Line 502, Address: 0x393c0c, Func Offset: 0x19c
	// Line 482, Address: 0x393c10, Func Offset: 0x1a0
	// Line 479, Address: 0x393c28, Func Offset: 0x1b8
	// Line 482, Address: 0x393c2c, Func Offset: 0x1bc
	// Line 487, Address: 0x393c30, Func Offset: 0x1c0
	// Line 482, Address: 0x393c34, Func Offset: 0x1c4
	// Line 479, Address: 0x393c38, Func Offset: 0x1c8
	// Line 487, Address: 0x393c3c, Func Offset: 0x1cc
	// Line 479, Address: 0x393c40, Func Offset: 0x1d0
	// Line 482, Address: 0x393c44, Func Offset: 0x1d4
	// Line 479, Address: 0x393c48, Func Offset: 0x1d8
	// Line 482, Address: 0x393c4c, Func Offset: 0x1dc
	// Line 479, Address: 0x393c78, Func Offset: 0x208
	// Line 482, Address: 0x393c7c, Func Offset: 0x20c
	// Line 479, Address: 0x393c80, Func Offset: 0x210
	// Line 482, Address: 0x393c84, Func Offset: 0x214
	// Line 479, Address: 0x393c88, Func Offset: 0x218
	// Line 482, Address: 0x393c8c, Func Offset: 0x21c
	// Line 479, Address: 0x393c90, Func Offset: 0x220
	// Line 482, Address: 0x393c94, Func Offset: 0x224
	// Line 485, Address: 0x393c9c, Func Offset: 0x22c
	// Line 482, Address: 0x393ca0, Func Offset: 0x230
	// Line 485, Address: 0x393ca4, Func Offset: 0x234
	// Line 482, Address: 0x393ca8, Func Offset: 0x238
	// Line 486, Address: 0x393cac, Func Offset: 0x23c
	// Line 482, Address: 0x393cb0, Func Offset: 0x240
	// Line 486, Address: 0x393cb4, Func Offset: 0x244
	// Line 482, Address: 0x393cb8, Func Offset: 0x248
	// Line 488, Address: 0x393cbc, Func Offset: 0x24c
	// Line 479, Address: 0x393cc0, Func Offset: 0x250
	// Line 482, Address: 0x393cc4, Func Offset: 0x254
	// Line 479, Address: 0x393cc8, Func Offset: 0x258
	// Line 482, Address: 0x393ccc, Func Offset: 0x25c
	// Line 479, Address: 0x393cd0, Func Offset: 0x260
	// Line 482, Address: 0x393cd4, Func Offset: 0x264
	// Line 479, Address: 0x393cd8, Func Offset: 0x268
	// Line 493, Address: 0x393cdc, Func Offset: 0x26c
	// Line 482, Address: 0x393ce0, Func Offset: 0x270
	// Line 501, Address: 0x393ce4, Func Offset: 0x274
	// Line 482, Address: 0x393ce8, Func Offset: 0x278
	// Line 488, Address: 0x393cec, Func Offset: 0x27c
	// Line 482, Address: 0x393cf0, Func Offset: 0x280
	// Line 489, Address: 0x393cf4, Func Offset: 0x284
	// Line 483, Address: 0x393cf8, Func Offset: 0x288
	// Line 489, Address: 0x393cfc, Func Offset: 0x28c
	// Line 483, Address: 0x393d00, Func Offset: 0x290
	// Line 490, Address: 0x393d04, Func Offset: 0x294
	// Line 479, Address: 0x393d08, Func Offset: 0x298
	// Line 483, Address: 0x393d0c, Func Offset: 0x29c
	// Line 480, Address: 0x393d10, Func Offset: 0x2a0
	// Line 483, Address: 0x393d14, Func Offset: 0x2a4
	// Line 480, Address: 0x393d18, Func Offset: 0x2a8
	// Line 483, Address: 0x393d1c, Func Offset: 0x2ac
	// Line 480, Address: 0x393d20, Func Offset: 0x2b0
	// Line 483, Address: 0x393d24, Func Offset: 0x2b4
	// Line 484, Address: 0x393d28, Func Offset: 0x2b8
	// Line 490, Address: 0x393d2c, Func Offset: 0x2bc
	// Line 484, Address: 0x393d30, Func Offset: 0x2c0
	// Line 491, Address: 0x393d34, Func Offset: 0x2c4
	// Line 502, Address: 0x393d3c, Func Offset: 0x2cc
	// Line 491, Address: 0x393d40, Func Offset: 0x2d0
	// Line 493, Address: 0x393d44, Func Offset: 0x2d4
	// Line 491, Address: 0x393d48, Func Offset: 0x2d8
	// Line 493, Address: 0x393d4c, Func Offset: 0x2dc
	// Line 480, Address: 0x393d50, Func Offset: 0x2e0
	// Line 491, Address: 0x393d54, Func Offset: 0x2e4
	// Line 480, Address: 0x393d58, Func Offset: 0x2e8
	// Line 491, Address: 0x393d5c, Func Offset: 0x2ec
	// Line 480, Address: 0x393d60, Func Offset: 0x2f0
	// Line 491, Address: 0x393d64, Func Offset: 0x2f4
	// Line 480, Address: 0x393d68, Func Offset: 0x2f8
	// Line 507, Address: 0x393d6c, Func Offset: 0x2fc
	// Line 491, Address: 0x393d70, Func Offset: 0x300
	// Line 503, Address: 0x393d74, Func Offset: 0x304
	// Line 492, Address: 0x393d78, Func Offset: 0x308
	// Line 493, Address: 0x393d7c, Func Offset: 0x30c
	// Line 492, Address: 0x393d80, Func Offset: 0x310
	// Line 493, Address: 0x393d84, Func Offset: 0x314
	// Line 492, Address: 0x393d88, Func Offset: 0x318
	// Line 493, Address: 0x393d8c, Func Offset: 0x31c
	// Line 492, Address: 0x393d90, Func Offset: 0x320
	// Line 493, Address: 0x393d94, Func Offset: 0x324
	// Line 480, Address: 0x393d98, Func Offset: 0x328
	// Line 492, Address: 0x393d9c, Func Offset: 0x32c
	// Line 480, Address: 0x393da0, Func Offset: 0x330
	// Line 492, Address: 0x393da4, Func Offset: 0x334
	// Line 480, Address: 0x393da8, Func Offset: 0x338
	// Line 492, Address: 0x393dac, Func Offset: 0x33c
	// Line 480, Address: 0x393db0, Func Offset: 0x340
	// Line 492, Address: 0x393db4, Func Offset: 0x344
	// Line 493, Address: 0x393db8, Func Offset: 0x348
	// Line 503, Address: 0x393dbc, Func Offset: 0x34c
	// Line 494, Address: 0x393dc0, Func Offset: 0x350
	// Line 501, Address: 0x393dc4, Func Offset: 0x354
	// Line 494, Address: 0x393dc8, Func Offset: 0x358
	// Line 503, Address: 0x393dcc, Func Offset: 0x35c
	// Line 495, Address: 0x393dd0, Func Offset: 0x360
	// Line 502, Address: 0x393dd4, Func Offset: 0x364
	// Line 495, Address: 0x393dd8, Func Offset: 0x368
	// Line 503, Address: 0x393ddc, Func Offset: 0x36c
	// Line 480, Address: 0x393de0, Func Offset: 0x370
	// Line 496, Address: 0x393de4, Func Offset: 0x374
	// Line 480, Address: 0x393de8, Func Offset: 0x378
	// Line 496, Address: 0x393df4, Func Offset: 0x384
	// Line 480, Address: 0x393df8, Func Offset: 0x388
	// Line 497, Address: 0x393dfc, Func Offset: 0x38c
	// Line 505, Address: 0x393e04, Func Offset: 0x394
	// Line 498, Address: 0x393e08, Func Offset: 0x398
	// Line 507, Address: 0x393e0c, Func Offset: 0x39c
	// Line 498, Address: 0x393e10, Func Offset: 0x3a0
	// Line 508, Address: 0x393e14, Func Offset: 0x3a4
	// Line 499, Address: 0x393e18, Func Offset: 0x3a8
	// Line 508, Address: 0x393e1c, Func Offset: 0x3ac
	// Line 499, Address: 0x393e20, Func Offset: 0x3b0
	// Line 510, Address: 0x393e24, Func Offset: 0x3b4
	// Line 480, Address: 0x393e28, Func Offset: 0x3b8
	// Line 500, Address: 0x393e2c, Func Offset: 0x3bc
	// Line 480, Address: 0x393e30, Func Offset: 0x3c0
	// Line 500, Address: 0x393e3c, Func Offset: 0x3cc
	// Line 480, Address: 0x393e40, Func Offset: 0x3d0
	// Line 501, Address: 0x393e44, Func Offset: 0x3d4
	// Line 506, Address: 0x393e4c, Func Offset: 0x3dc
	// Line 501, Address: 0x393e50, Func Offset: 0x3e0
	// Line 510, Address: 0x393e54, Func Offset: 0x3e4
	// Line 501, Address: 0x393e58, Func Offset: 0x3e8
	// Line 510, Address: 0x393e5c, Func Offset: 0x3ec
	// Line 501, Address: 0x393e60, Func Offset: 0x3f0
	// Line 510, Address: 0x393e64, Func Offset: 0x3f4
	// Line 501, Address: 0x393e68, Func Offset: 0x3f8
	// Line 510, Address: 0x393e6c, Func Offset: 0x3fc
	// Line 480, Address: 0x393e70, Func Offset: 0x400
	// Line 510, Address: 0x393e74, Func Offset: 0x404
	// Line 480, Address: 0x393e78, Func Offset: 0x408
	// Line 511, Address: 0x393e7c, Func Offset: 0x40c
	// Line 504, Address: 0x393e84, Func Offset: 0x414
	// Line 511, Address: 0x393e88, Func Offset: 0x418
	// Line 509, Address: 0x393e8c, Func Offset: 0x41c
	// Line 511, Address: 0x393e90, Func Offset: 0x420
	// Line 510, Address: 0x393e94, Func Offset: 0x424
	// Line 511, Address: 0x393e98, Func Offset: 0x428
	// Line 513, Address: 0x393e9c, Func Offset: 0x42c
	// Line 511, Address: 0x393ea0, Func Offset: 0x430
	// Line 513, Address: 0x393ea4, Func Offset: 0x434
	// Line 480, Address: 0x393ea8, Func Offset: 0x438
	// Line 511, Address: 0x393eac, Func Offset: 0x43c
	// Line 480, Address: 0x393eb0, Func Offset: 0x440
	// Line 513, Address: 0x393eb4, Func Offset: 0x444
	// Line 511, Address: 0x393eb8, Func Offset: 0x448
	// Line 516, Address: 0x393ebc, Func Offset: 0x44c
	// Line 512, Address: 0x393ec0, Func Offset: 0x450
	// Line 480, Address: 0x393ed0, Func Offset: 0x460
	// Line 512, Address: 0x393ed4, Func Offset: 0x464
	// Line 480, Address: 0x393ed8, Func Offset: 0x468
	// Line 512, Address: 0x393ee0, Func Offset: 0x470
	// Line 513, Address: 0x393eec, Func Offset: 0x47c
	// Line 480, Address: 0x393ef4, Func Offset: 0x484
	// Line 514, Address: 0x393ef8, Func Offset: 0x488
	// Line 480, Address: 0x393efc, Func Offset: 0x48c
	// Line 514, Address: 0x393f00, Func Offset: 0x490
	// Line 480, Address: 0x393f04, Func Offset: 0x494
	// Line 514, Address: 0x393f08, Func Offset: 0x498
	// Line 480, Address: 0x393f0c, Func Offset: 0x49c
	// Line 514, Address: 0x393f10, Func Offset: 0x4a0
	// Line 515, Address: 0x393f24, Func Offset: 0x4b4
	// Line 480, Address: 0x393f28, Func Offset: 0x4b8
	// Line 515, Address: 0x393f2c, Func Offset: 0x4bc
	// Line 480, Address: 0x393f30, Func Offset: 0x4c0
	// Line 515, Address: 0x393f38, Func Offset: 0x4c8
	// Line 480, Address: 0x393f4c, Func Offset: 0x4dc
	// Line 515, Address: 0x393f50, Func Offset: 0x4e0
	// Line 480, Address: 0x393f54, Func Offset: 0x4e4
	// Line 516, Address: 0x393f58, Func Offset: 0x4e8
	// Line 480, Address: 0x393f5c, Func Offset: 0x4ec
	// Line 516, Address: 0x393f60, Func Offset: 0x4f0
	// Line 480, Address: 0x393f74, Func Offset: 0x504
	// Line 481, Address: 0x393f78, Func Offset: 0x508
	// Line 482, Address: 0x394008, Func Offset: 0x598
	// Line 483, Address: 0x394110, Func Offset: 0x6a0
	// Line 484, Address: 0x394134, Func Offset: 0x6c4
	// Line 485, Address: 0x394140, Func Offset: 0x6d0
	// Line 486, Address: 0x39414c, Func Offset: 0x6dc
	// Line 487, Address: 0x394158, Func Offset: 0x6e8
	// Line 488, Address: 0x394164, Func Offset: 0x6f4
	// Line 489, Address: 0x394170, Func Offset: 0x700
	// Line 490, Address: 0x39417c, Func Offset: 0x70c
	// Line 491, Address: 0x394188, Func Offset: 0x718
	// Line 492, Address: 0x3941b8, Func Offset: 0x748
	// Line 493, Address: 0x3941e8, Func Offset: 0x778
	// Line 494, Address: 0x394218, Func Offset: 0x7a8
	// Line 495, Address: 0x394224, Func Offset: 0x7b4
	// Line 496, Address: 0x394230, Func Offset: 0x7c0
	// Line 497, Address: 0x39423c, Func Offset: 0x7cc
	// Line 498, Address: 0x394248, Func Offset: 0x7d8
	// Line 499, Address: 0x394254, Func Offset: 0x7e4
	// Line 500, Address: 0x394260, Func Offset: 0x7f0
	// Line 501, Address: 0x39426c, Func Offset: 0x7fc
	// Line 502, Address: 0x39429c, Func Offset: 0x82c
	// Line 503, Address: 0x3942c0, Func Offset: 0x850
	// Line 504, Address: 0x3942e0, Func Offset: 0x870
	// Line 505, Address: 0x3942e8, Func Offset: 0x878
	// Line 506, Address: 0x3942f0, Func Offset: 0x880
	// Line 507, Address: 0x3942f8, Func Offset: 0x888
	// Line 508, Address: 0x394304, Func Offset: 0x894
	// Line 509, Address: 0x394310, Func Offset: 0x8a0
	// Line 510, Address: 0x394318, Func Offset: 0x8a8
	// Line 511, Address: 0x394344, Func Offset: 0x8d4
	// Line 512, Address: 0x394374, Func Offset: 0x904
	// Line 513, Address: 0x3943a4, Func Offset: 0x934
	// Line 514, Address: 0x3943c4, Func Offset: 0x954
	// Line 513, Address: 0x3943c8, Func Offset: 0x958
	// Line 514, Address: 0x3943cc, Func Offset: 0x95c
	// Line 515, Address: 0x3943f8, Func Offset: 0x988
	// Line 516, Address: 0x394428, Func Offset: 0x9b8
	// Line 517, Address: 0x394454, Func Offset: 0x9e4
	// Func End, Address: 0x394480, Func Offset: 0xa10
}

// zCameraFlyUpdate__FP7xCameraf
// Start address: 0x394480
int32 zCameraFlyUpdate(xCamera* cam, float32 dt)
{
	int32 i;
	int32 flyIdx;
	int32 numKeys;
	float32 flyLerp;
	float32 flyFrame;
	zFlyKey keys[4];
	xMat3x3 tmpMat;
	xQuat quats[2];
	xQuat qresult;
	// Line 356, Address: 0x394480, Func Offset: 0
	// Line 358, Address: 0x394484, Func Offset: 0x4
	// Line 356, Address: 0x394488, Func Offset: 0x8
	// Line 358, Address: 0x3944c4, Func Offset: 0x44
	// Line 359, Address: 0x3944f0, Func Offset: 0x70
	// Line 364, Address: 0x394538, Func Offset: 0xb8
	// Line 365, Address: 0x39454c, Func Offset: 0xcc
	// Line 366, Address: 0x39455c, Func Offset: 0xdc
	// Line 367, Address: 0x394564, Func Offset: 0xe4
	// Line 368, Address: 0x39456c, Func Offset: 0xec
	// Line 375, Address: 0x39457c, Func Offset: 0xfc
	// Line 376, Address: 0x39459c, Func Offset: 0x11c
	// Line 377, Address: 0x3945a0, Func Offset: 0x120
	// Line 378, Address: 0x3945a4, Func Offset: 0x124
	// Line 375, Address: 0x3945a8, Func Offset: 0x128
	// Line 378, Address: 0x3945ac, Func Offset: 0x12c
	// Line 376, Address: 0x3945b0, Func Offset: 0x130
	// Line 377, Address: 0x3945b4, Func Offset: 0x134
	// Line 376, Address: 0x3945bc, Func Offset: 0x13c
	// Line 377, Address: 0x3945c0, Func Offset: 0x140
	// Line 375, Address: 0x3945c4, Func Offset: 0x144
	// Line 376, Address: 0x3945c8, Func Offset: 0x148
	// Line 375, Address: 0x3945cc, Func Offset: 0x14c
	// Line 377, Address: 0x3945d0, Func Offset: 0x150
	// Line 375, Address: 0x3945d4, Func Offset: 0x154
	// Line 376, Address: 0x3945e0, Func Offset: 0x160
	// Line 375, Address: 0x3945e4, Func Offset: 0x164
	// Line 377, Address: 0x3945e8, Func Offset: 0x168
	// Line 375, Address: 0x3945ec, Func Offset: 0x16c
	// Line 376, Address: 0x394608, Func Offset: 0x188
	// Line 375, Address: 0x39460c, Func Offset: 0x18c
	// Line 377, Address: 0x394610, Func Offset: 0x190
	// Line 375, Address: 0x394614, Func Offset: 0x194
	// Line 376, Address: 0x394658, Func Offset: 0x1d8
	// Line 375, Address: 0x394664, Func Offset: 0x1e4
	// Line 376, Address: 0x394670, Func Offset: 0x1f0
	// Line 377, Address: 0x3946d0, Func Offset: 0x250
	// Line 376, Address: 0x3946dc, Func Offset: 0x25c
	// Line 377, Address: 0x3946e8, Func Offset: 0x268
	// Line 378, Address: 0x394754, Func Offset: 0x2d4
	// Line 398, Address: 0x3947dc, Func Offset: 0x35c
	// Line 399, Address: 0x3947ec, Func Offset: 0x36c
	// Line 400, Address: 0x394800, Func Offset: 0x380
	// Line 399, Address: 0x394804, Func Offset: 0x384
	// Line 402, Address: 0x394818, Func Offset: 0x398
	// Line 399, Address: 0x39481c, Func Offset: 0x39c
	// Line 400, Address: 0x394838, Func Offset: 0x3b8
	// Line 402, Address: 0x394850, Func Offset: 0x3d0
	// Line 400, Address: 0x394854, Func Offset: 0x3d4
	// Line 402, Address: 0x394874, Func Offset: 0x3f4
	// Line 401, Address: 0x394878, Func Offset: 0x3f8
	// Line 399, Address: 0x394890, Func Offset: 0x410
	// Line 401, Address: 0x394894, Func Offset: 0x414
	// Line 402, Address: 0x3948b8, Func Offset: 0x438
	// Line 403, Address: 0x3948ec, Func Offset: 0x46c
	// Line 417, Address: 0x3948f0, Func Offset: 0x470
	// Line 421, Address: 0x394910, Func Offset: 0x490
	// Line 424, Address: 0x394914, Func Offset: 0x494
	// Line 422, Address: 0x394918, Func Offset: 0x498
	// Line 427, Address: 0x39491c, Func Offset: 0x49c
	// Line 423, Address: 0x394920, Func Offset: 0x4a0
	// Line 427, Address: 0x394924, Func Offset: 0x4a4
	// Line 420, Address: 0x394928, Func Offset: 0x4a8
	// Line 418, Address: 0x39492c, Func Offset: 0x4ac
	// Line 419, Address: 0x394930, Func Offset: 0x4b0
	// Line 421, Address: 0x394934, Func Offset: 0x4b4
	// Line 424, Address: 0x394938, Func Offset: 0x4b8
	// Line 422, Address: 0x39493c, Func Offset: 0x4bc
	// Line 423, Address: 0x394940, Func Offset: 0x4c0
	// Line 420, Address: 0x394944, Func Offset: 0x4c4
	// Line 425, Address: 0x394948, Func Offset: 0x4c8
	// Line 420, Address: 0x39494c, Func Offset: 0x4cc
	// Line 426, Address: 0x394950, Func Offset: 0x4d0
	// Line 424, Address: 0x394954, Func Offset: 0x4d4
	// Line 425, Address: 0x39495c, Func Offset: 0x4dc
	// Line 418, Address: 0x394968, Func Offset: 0x4e8
	// Line 426, Address: 0x39496c, Func Offset: 0x4ec
	// Line 419, Address: 0x394970, Func Offset: 0x4f0
	// Line 426, Address: 0x394974, Func Offset: 0x4f4
	// Line 418, Address: 0x394978, Func Offset: 0x4f8
	// Line 419, Address: 0x39497c, Func Offset: 0x4fc
	// Line 427, Address: 0x394980, Func Offset: 0x500
	// Line 428, Address: 0x394988, Func Offset: 0x508
	// Line 427, Address: 0x39498c, Func Offset: 0x50c
	// Line 428, Address: 0x394990, Func Offset: 0x510
	// Line 429, Address: 0x39499c, Func Offset: 0x51c
	// Line 430, Address: 0x3949b0, Func Offset: 0x530
	// Line 431, Address: 0x3949cc, Func Offset: 0x54c
	// Line 436, Address: 0x3949d4, Func Offset: 0x554
	// Line 431, Address: 0x3949d8, Func Offset: 0x558
	// Line 435, Address: 0x394a10, Func Offset: 0x590
	// Line 431, Address: 0x394a14, Func Offset: 0x594
	// Line 435, Address: 0x394a18, Func Offset: 0x598
	// Line 436, Address: 0x394a24, Func Offset: 0x5a4
	// Line 369, Address: 0x394a2c, Func Offset: 0x5ac
	// Line 436, Address: 0x394a34, Func Offset: 0x5b4
	// Line 405, Address: 0x394a58, Func Offset: 0x5d8
	// Line 436, Address: 0x394a5c, Func Offset: 0x5dc
	// Line 405, Address: 0x394a60, Func Offset: 0x5e0
	// Line 436, Address: 0x394a64, Func Offset: 0x5e4
	// Line 405, Address: 0x394a68, Func Offset: 0x5e8
	// Line 436, Address: 0x394a6c, Func Offset: 0x5ec
	// Line 405, Address: 0x394a8c, Func Offset: 0x60c
	// Line 436, Address: 0x394a90, Func Offset: 0x610
	// Line 405, Address: 0x394ac8, Func Offset: 0x648
	// Line 436, Address: 0x394acc, Func Offset: 0x64c
	// Line 405, Address: 0x394ad4, Func Offset: 0x654
	// Line 436, Address: 0x394ae4, Func Offset: 0x664
	// Line 405, Address: 0x394aec, Func Offset: 0x66c
	// Line 436, Address: 0x394b08, Func Offset: 0x688
	// Line 405, Address: 0x394b10, Func Offset: 0x690
	// Line 436, Address: 0x394b24, Func Offset: 0x6a4
	// Line 405, Address: 0x394b2c, Func Offset: 0x6ac
	// Line 436, Address: 0x394b30, Func Offset: 0x6b0
	// Line 405, Address: 0x394b38, Func Offset: 0x6b8
	// Line 436, Address: 0x394b48, Func Offset: 0x6c8
	// Line 405, Address: 0x394b4c, Func Offset: 0x6cc
	// Line 436, Address: 0x394b50, Func Offset: 0x6d0
	// Line 405, Address: 0x394b60, Func Offset: 0x6e0
	// Line 436, Address: 0x394b64, Func Offset: 0x6e4
	// Line 405, Address: 0x394b68, Func Offset: 0x6e8
	// Line 406, Address: 0x394b6c, Func Offset: 0x6ec
	// Line 436, Address: 0x394b70, Func Offset: 0x6f0
	// Line 406, Address: 0x394b74, Func Offset: 0x6f4
	// Line 436, Address: 0x394b78, Func Offset: 0x6f8
	// Line 406, Address: 0x394b88, Func Offset: 0x708
	// Line 436, Address: 0x394b8c, Func Offset: 0x70c
	// Line 406, Address: 0x394ba8, Func Offset: 0x728
	// Line 436, Address: 0x394bac, Func Offset: 0x72c
	// Line 406, Address: 0x394be0, Func Offset: 0x760
	// Line 436, Address: 0x394be4, Func Offset: 0x764
	// Line 406, Address: 0x394bec, Func Offset: 0x76c
	// Line 436, Address: 0x394bfc, Func Offset: 0x77c
	// Line 406, Address: 0x394c04, Func Offset: 0x784
	// Line 436, Address: 0x394c20, Func Offset: 0x7a0
	// Line 406, Address: 0x394c28, Func Offset: 0x7a8
	// Line 436, Address: 0x394c3c, Func Offset: 0x7bc
	// Line 406, Address: 0x394c44, Func Offset: 0x7c4
	// Line 436, Address: 0x394c48, Func Offset: 0x7c8
	// Line 406, Address: 0x394c50, Func Offset: 0x7d0
	// Line 436, Address: 0x394c60, Func Offset: 0x7e0
	// Line 406, Address: 0x394c64, Func Offset: 0x7e4
	// Line 436, Address: 0x394c68, Func Offset: 0x7e8
	// Line 406, Address: 0x394c78, Func Offset: 0x7f8
	// Line 436, Address: 0x394c7c, Func Offset: 0x7fc
	// Line 406, Address: 0x394c80, Func Offset: 0x800
	// Line 407, Address: 0x394c84, Func Offset: 0x804
	// Line 436, Address: 0x394c88, Func Offset: 0x808
	// Line 407, Address: 0x394c8c, Func Offset: 0x80c
	// Line 436, Address: 0x394c90, Func Offset: 0x810
	// Line 407, Address: 0x394ca0, Func Offset: 0x820
	// Line 436, Address: 0x394ca4, Func Offset: 0x824
	// Line 407, Address: 0x394cc0, Func Offset: 0x840
	// Line 436, Address: 0x394cc4, Func Offset: 0x844
	// Line 407, Address: 0x394cf8, Func Offset: 0x878
	// Line 436, Address: 0x394cfc, Func Offset: 0x87c
	// Line 407, Address: 0x394d04, Func Offset: 0x884
	// Line 436, Address: 0x394d14, Func Offset: 0x894
	// Line 407, Address: 0x394d1c, Func Offset: 0x89c
	// Line 436, Address: 0x394d38, Func Offset: 0x8b8
	// Line 407, Address: 0x394d40, Func Offset: 0x8c0
	// Line 436, Address: 0x394d54, Func Offset: 0x8d4
	// Line 407, Address: 0x394d5c, Func Offset: 0x8dc
	// Line 436, Address: 0x394d60, Func Offset: 0x8e0
	// Line 407, Address: 0x394d68, Func Offset: 0x8e8
	// Line 408, Address: 0x394d84, Func Offset: 0x904
	// Line 436, Address: 0x394d94, Func Offset: 0x914
	// Line 408, Address: 0x394d9c, Func Offset: 0x91c
	// Line 436, Address: 0x394db0, Func Offset: 0x930
	// Line 408, Address: 0x394db8, Func Offset: 0x938
	// Line 436, Address: 0x394dc0, Func Offset: 0x940
	// Line 409, Address: 0x394dc8, Func Offset: 0x948
	// Line 405, Address: 0x394dd4, Func Offset: 0x954
	// Line 406, Address: 0x394de4, Func Offset: 0x964
	// Line 407, Address: 0x394df4, Func Offset: 0x974
	// Line 437, Address: 0x394e04, Func Offset: 0x984
	// Func End, Address: 0x394e44, Func Offset: 0x9c4
}

// zCameraConversUpdate__FP7xCameraf
// Start address: 0x394e50
void zCameraConversUpdate(xCamera* cam, float32 dt)
{
	float32 s;
	xQuat a;
	xQuat c;
	// Line 302, Address: 0x394e50, Func Offset: 0
	// Line 303, Address: 0x394e6c, Func Offset: 0x1c
	// Line 306, Address: 0x394e78, Func Offset: 0x28
	// Line 310, Address: 0x394e8c, Func Offset: 0x3c
	// Line 311, Address: 0x394e98, Func Offset: 0x48
	// Line 312, Address: 0x394eb4, Func Offset: 0x64
	// Line 313, Address: 0x394ecc, Func Offset: 0x7c
	// Line 314, Address: 0x394ee4, Func Offset: 0x94
	// Line 315, Address: 0x394efc, Func Offset: 0xac
	// Line 316, Address: 0x394f14, Func Offset: 0xc4
	// Line 329, Address: 0x394f1c, Func Offset: 0xcc
	// Line 330, Address: 0x394f24, Func Offset: 0xd4
	// Line 308, Address: 0x394f2c, Func Offset: 0xdc
	// Line 330, Address: 0x394f34, Func Offset: 0xe4
	// Line 319, Address: 0x394f38, Func Offset: 0xe8
	// Line 330, Address: 0x394f3c, Func Offset: 0xec
	// Line 319, Address: 0x394f44, Func Offset: 0xf4
	// Line 323, Address: 0x394f48, Func Offset: 0xf8
	// Line 319, Address: 0x394f4c, Func Offset: 0xfc
	// Line 320, Address: 0x394f60, Func Offset: 0x110
	// Line 319, Address: 0x394f6c, Func Offset: 0x11c
	// Line 321, Address: 0x394f88, Func Offset: 0x138
	// Line 330, Address: 0x394fb0, Func Offset: 0x160
	// Line 326, Address: 0x394ff4, Func Offset: 0x1a4
	// Line 330, Address: 0x394ffc, Func Offset: 0x1ac
	// Line 326, Address: 0x395008, Func Offset: 0x1b8
	// Line 330, Address: 0x395010, Func Offset: 0x1c0
	// Line 326, Address: 0x39501c, Func Offset: 0x1cc
	// Line 330, Address: 0x395024, Func Offset: 0x1d4
	// Line 327, Address: 0x395030, Func Offset: 0x1e0
	// Line 330, Address: 0x395040, Func Offset: 0x1f0
	// Func End, Address: 0x395058, Func Offset: 0x208
}

// zCameraReset__FP7xCamera
// Start address: 0x395060
void zCameraReset(xCamera* cam)
{
	// Line 217, Address: 0x395060, Func Offset: 0
	// Line 235, Address: 0x395064, Func Offset: 0x4
	// Line 217, Address: 0x395068, Func Offset: 0x8
	// Line 230, Address: 0x39506c, Func Offset: 0xc
	// Line 217, Address: 0x395070, Func Offset: 0x10
	// Line 235, Address: 0x395074, Func Offset: 0x14
	// Line 217, Address: 0x395078, Func Offset: 0x18
	// Line 231, Address: 0x39507c, Func Offset: 0x1c
	// Line 219, Address: 0x395080, Func Offset: 0x20
	// Line 220, Address: 0x395088, Func Offset: 0x28
	// Line 221, Address: 0x39508c, Func Offset: 0x2c
	// Line 222, Address: 0x395090, Func Offset: 0x30
	// Line 223, Address: 0x395094, Func Offset: 0x34
	// Line 224, Address: 0x395098, Func Offset: 0x38
	// Line 235, Address: 0x39509c, Func Offset: 0x3c
	// Line 225, Address: 0x3950a0, Func Offset: 0x40
	// Line 226, Address: 0x3950a4, Func Offset: 0x44
	// Line 227, Address: 0x3950a8, Func Offset: 0x48
	// Line 228, Address: 0x3950ac, Func Offset: 0x4c
	// Line 229, Address: 0x3950b0, Func Offset: 0x50
	// Line 230, Address: 0x3950b4, Func Offset: 0x54
	// Line 231, Address: 0x3950b8, Func Offset: 0x58
	// Line 232, Address: 0x3950bc, Func Offset: 0x5c
	// Line 233, Address: 0x3950c0, Func Offset: 0x60
	// Line 234, Address: 0x3950c4, Func Offset: 0x64
	// Line 236, Address: 0x3950c8, Func Offset: 0x68
	// Line 237, Address: 0x3950cc, Func Offset: 0x6c
	// Line 238, Address: 0x3950d0, Func Offset: 0x70
	// Line 241, Address: 0x3950d4, Func Offset: 0x74
	// Line 244, Address: 0x3950d8, Func Offset: 0x78
	// Line 248, Address: 0x3951ac, Func Offset: 0x14c
	// Line 250, Address: 0x395240, Func Offset: 0x1e0
	// Line 254, Address: 0x395244, Func Offset: 0x1e4
	// Line 250, Address: 0x395248, Func Offset: 0x1e8
	// Line 253, Address: 0x39524c, Func Offset: 0x1ec
	// Line 255, Address: 0x395254, Func Offset: 0x1f4
	// Line 256, Address: 0x395258, Func Offset: 0x1f8
	// Line 261, Address: 0x39525c, Func Offset: 0x1fc
	// Line 262, Address: 0x395264, Func Offset: 0x204
	// Line 264, Address: 0x395268, Func Offset: 0x208
	// Func End, Address: 0x39528c, Func Offset: 0x22c
}

