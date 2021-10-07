



void Unselect();
void Select();
void Invisible();
void Visible();
void FocusOff();
void FocusOn();
void AutoMenu(void item, uint32 event);
void DoApplyMotionFrame(zUIMotionFrame* frame);
void DoInitMotion();
void ApplyMotion();
float32 CalcAcceleratedDistance(float32 totalDistance, float32 startTime, float32 endTime, float32 accelTime, float32 decelTime);
void RunMotion(zUIMotionAsset* asset, uint8 loop, uint8 reset);
void DoExit();
void DoUpdate(float32 dt, uint32 buttonsPressed);
void DoHandleEvent(uint32 toEvent, float32* toParam, xBase* toParamWidget);
void DoResetMotion();
void DoReset();
void DoSetup();
void Signal(xBase* from, uint32 event);
uint8 Blends();
void UIEventHandler(xBase* from, xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget, uint32 toParamWidgetID);

// Unselect__3zUIFv
// Start address: 0x2bb210
void zUI::Unselect()
{
	// Line 1463, Address: 0x2bb210, Func Offset: 0
	// Line 1464, Address: 0x2bb224, Func Offset: 0x14
	// Line 1465, Address: 0x2bb230, Func Offset: 0x20
	// Line 1469, Address: 0x2bb23c, Func Offset: 0x2c
	// Line 1470, Address: 0x2bb24c, Func Offset: 0x3c
	// Line 1471, Address: 0x2bb268, Func Offset: 0x58
	// Line 1468, Address: 0x2bb27c, Func Offset: 0x6c
	// Line 1471, Address: 0x2bb284, Func Offset: 0x74
	// Line 1468, Address: 0x2bb2f8, Func Offset: 0xe8
	// Line 1471, Address: 0x2bb2fc, Func Offset: 0xec
	// Line 1469, Address: 0x2bb30c, Func Offset: 0xfc
	// Line 1471, Address: 0x2bb314, Func Offset: 0x104
	// Line 1468, Address: 0x2bb340, Func Offset: 0x130
	// Line 1471, Address: 0x2bb348, Func Offset: 0x138
	// Func End, Address: 0x2bb360, Func Offset: 0x150
}

// Select__3zUIFv
// Start address: 0x2bb360
void zUI::Select()
{
	// Line 1452, Address: 0x2bb360, Func Offset: 0
	// Line 1453, Address: 0x2bb364, Func Offset: 0x4
	// Line 1452, Address: 0x2bb368, Func Offset: 0x8
	// Line 1453, Address: 0x2bb378, Func Offset: 0x18
	// Line 1454, Address: 0x2bb384, Func Offset: 0x24
	// Line 1458, Address: 0x2bb390, Func Offset: 0x30
	// Line 1459, Address: 0x2bb3a0, Func Offset: 0x40
	// Line 1460, Address: 0x2bb3bc, Func Offset: 0x5c
	// Line 1457, Address: 0x2bb3d0, Func Offset: 0x70
	// Line 1460, Address: 0x2bb3d8, Func Offset: 0x78
	// Line 1457, Address: 0x2bb44c, Func Offset: 0xec
	// Line 1460, Address: 0x2bb450, Func Offset: 0xf0
	// Line 1458, Address: 0x2bb460, Func Offset: 0x100
	// Line 1460, Address: 0x2bb468, Func Offset: 0x108
	// Line 1457, Address: 0x2bb494, Func Offset: 0x134
	// Line 1460, Address: 0x2bb49c, Func Offset: 0x13c
	// Func End, Address: 0x2bb4b4, Func Offset: 0x154
}

// Invisible__3zUIFv
// Start address: 0x2bb4c0
void zUI::Invisible()
{
	// Line 1446, Address: 0x2bb4c0, Func Offset: 0
	// Line 1447, Address: 0x2bb4c4, Func Offset: 0x4
	// Line 1449, Address: 0x2bb4d8, Func Offset: 0x18
	// Func End, Address: 0x2bb4f0, Func Offset: 0x30
}

// Visible__3zUIFv
// Start address: 0x2bb4f0
void zUI::Visible()
{
	// Line 1438, Address: 0x2bb4f0, Func Offset: 0
	// Line 1439, Address: 0x2bb4f8, Func Offset: 0x8
	// Line 1440, Address: 0x2bb4fc, Func Offset: 0xc
	// Line 1442, Address: 0x2bb510, Func Offset: 0x20
	// Func End, Address: 0x2bb528, Func Offset: 0x38
}

// FocusOff__3zUIFv
// Start address: 0x2bb530
void zUI::FocusOff()
{
	// Line 1427, Address: 0x2bb530, Func Offset: 0
	// Line 1428, Address: 0x2bb53c, Func Offset: 0xc
	// Line 1429, Address: 0x2bb540, Func Offset: 0x10
	// Line 1434, Address: 0x2bb554, Func Offset: 0x24
	// Line 1432, Address: 0x2bb56c, Func Offset: 0x3c
	// Line 1434, Address: 0x2bb574, Func Offset: 0x44
	// Func End, Address: 0x2bb590, Func Offset: 0x60
}

// FocusOn__3zUIFv
// Start address: 0x2bb590
void zUI::FocusOn()
{
	// Line 1417, Address: 0x2bb590, Func Offset: 0
	// Line 1418, Address: 0x2bb594, Func Offset: 0x4
	// Line 1417, Address: 0x2bb598, Func Offset: 0x8
	// Line 1418, Address: 0x2bb5a0, Func Offset: 0x10
	// Line 1419, Address: 0x2bb5a4, Func Offset: 0x14
	// Line 1424, Address: 0x2bb5b8, Func Offset: 0x28
	// Line 1422, Address: 0x2bb5d0, Func Offset: 0x40
	// Line 1424, Address: 0x2bb5d8, Func Offset: 0x48
	// Func End, Address: 0x2bb5f4, Func Offset: 0x64
}

// AutoMenu__3zUIFM8zUIAssetUiUi
// Start address: 0x2bb600
void zUI::AutoMenu(void item, uint32 event)
{
	zUI* ui;
	uint32 id;
	uint8 bAllowAutoMenu;
	// Line 1357, Address: 0x2bb600, Func Offset: 0
	// Line 1360, Address: 0x2bb628, Func Offset: 0x28
	// Line 1363, Address: 0x2bb638, Func Offset: 0x38
	// Line 1365, Address: 0x2bb640, Func Offset: 0x40
	// Line 1366, Address: 0x2bb64c, Func Offset: 0x4c
	// Line 1369, Address: 0x2bb654, Func Offset: 0x54
	// Line 1370, Address: 0x2bb658, Func Offset: 0x58
	// Line 1371, Address: 0x2bb660, Func Offset: 0x60
	// Line 1373, Address: 0x2bb680, Func Offset: 0x80
	// Line 1375, Address: 0x2bb688, Func Offset: 0x88
	// Line 1376, Address: 0x2bb694, Func Offset: 0x94
	// Line 1367, Address: 0x2bb6a0, Func Offset: 0xa0
	// Line 1383, Address: 0x2bb6a8, Func Offset: 0xa8
	// Line 1385, Address: 0x2bb6bc, Func Offset: 0xbc
	// Line 1388, Address: 0x2bb6dc, Func Offset: 0xdc
	// Line 1389, Address: 0x2bb6e4, Func Offset: 0xe4
	// Line 1391, Address: 0x2bb6ec, Func Offset: 0xec
	// Line 1394, Address: 0x2bb6f4, Func Offset: 0xf4
	// Line 1395, Address: 0x2bb704, Func Offset: 0x104
	// Line 1398, Address: 0x2bb718, Func Offset: 0x118
	// Line 1399, Address: 0x2bb76c, Func Offset: 0x16c
	// Line 1414, Address: 0x2bb77c, Func Offset: 0x17c
	// Line 1403, Address: 0x2bb784, Func Offset: 0x184
	// Line 1414, Address: 0x2bb788, Func Offset: 0x188
	// Line 1404, Address: 0x2bb790, Func Offset: 0x190
	// Line 1414, Address: 0x2bb798, Func Offset: 0x198
	// Line 1407, Address: 0x2bb7b0, Func Offset: 0x1b0
	// Line 1414, Address: 0x2bb7c0, Func Offset: 0x1c0
	// Line 1407, Address: 0x2bb7d8, Func Offset: 0x1d8
	// Line 1414, Address: 0x2bb7ec, Func Offset: 0x1ec
	// Line 1408, Address: 0x2bb7f8, Func Offset: 0x1f8
	// Line 1414, Address: 0x2bb800, Func Offset: 0x200
	// Line 1411, Address: 0x2bb818, Func Offset: 0x218
	// Line 1414, Address: 0x2bb828, Func Offset: 0x228
	// Line 1411, Address: 0x2bb840, Func Offset: 0x240
	// Line 1414, Address: 0x2bb854, Func Offset: 0x254
	// Line 1412, Address: 0x2bb860, Func Offset: 0x260
	// Line 1414, Address: 0x2bb868, Func Offset: 0x268
	// Func End, Address: 0x2bb898, Func Offset: 0x298
}

// DoApplyMotionFrame__3zUIFPC14zUIMotionFrame
// Start address: 0x2bb8a0
void zUI::DoApplyMotionFrame(zUIMotionFrame* frame)
{
	// Line 1163, Address: 0x2bb8a0, Func Offset: 0
	// Line 1170, Address: 0x2bb8a4, Func Offset: 0x4
	// Line 1163, Address: 0x2bb8a8, Func Offset: 0x8
	// Line 1176, Address: 0x2bb8ac, Func Offset: 0xc
	// Line 1170, Address: 0x2bb8b0, Func Offset: 0x10
	// Line 1176, Address: 0x2bb8b4, Func Offset: 0x14
	// Line 1170, Address: 0x2bb8b8, Func Offset: 0x18
	// Line 1176, Address: 0x2bb8bc, Func Offset: 0x1c
	// Line 1170, Address: 0x2bb8c0, Func Offset: 0x20
	// Line 1176, Address: 0x2bb8c4, Func Offset: 0x24
	// Line 1170, Address: 0x2bb8c8, Func Offset: 0x28
	// Line 1172, Address: 0x2bb8cc, Func Offset: 0x2c
	// Line 1163, Address: 0x2bb8d0, Func Offset: 0x30
	// Line 1179, Address: 0x2bb8d4, Func Offset: 0x34
	// Line 1163, Address: 0x2bb8d8, Func Offset: 0x38
	// Line 1164, Address: 0x2bb8dc, Func Offset: 0x3c
	// Line 1170, Address: 0x2bb8e4, Func Offset: 0x44
	// Line 1172, Address: 0x2bb8e8, Func Offset: 0x48
	// Line 1164, Address: 0x2bb8ec, Func Offset: 0x4c
	// Line 1165, Address: 0x2bb8f4, Func Offset: 0x54
	// Line 1166, Address: 0x2bb8fc, Func Offset: 0x5c
	// Line 1165, Address: 0x2bb900, Func Offset: 0x60
	// Line 1166, Address: 0x2bb908, Func Offset: 0x68
	// Line 1170, Address: 0x2bb914, Func Offset: 0x74
	// Line 1171, Address: 0x2bb92c, Func Offset: 0x8c
	// Line 1172, Address: 0x2bb938, Func Offset: 0x98
	// Line 1173, Address: 0x2bb950, Func Offset: 0xb0
	// Line 1176, Address: 0x2bb95c, Func Offset: 0xbc
	// Line 1180, Address: 0x2bb96c, Func Offset: 0xcc
	// Func End, Address: 0x2bb974, Func Offset: 0xd4
}

// DoInitMotion__3zUIFv
// Start address: 0x2bb980
void zUI::DoInitMotion()
{
	// Line 1157, Address: 0x2bb980, Func Offset: 0
	// Line 1158, Address: 0x2bb9dc, Func Offset: 0x5c
	// Func End, Address: 0x2bb9e4, Func Offset: 0x64
}

// ApplyMotion__3zUIFv
// Start address: 0x2bb9f0
void zUI::ApplyMotion()
{
	zUIMotionFrame frame;
	float32 timeCompensation;
	uint8 fireEndEvent;
	int8* entity;
	int32 i;
	int32 size;
	zUIMotionCmdMove* cmd;
	zUIMotionCmdScale* cmd;
	float32 scaleX;
	float32 scaleY;
	zUIMotionCmdRotate* cmd;
	float32 rotation;
	zUIMotionCmdOpacity* cmd;
	float32 opacityChange;
	zUIMotionCmdAbsoluteScale* cmd;
	float32 scaleX;
	float32 scaleY;
	float32 percent;
	zUIMotionCmdBrightness* cmd;
	float32 brightnessChange;
	zUIMotionCmdColor* cmd;
	float32 redChange;
	float32 greenChange;
	float32 blueChange;
	zUIMotionCmdUVScroll* cmd;
	uint8 in;
	xBase uiMotionBase;
	zUIMotionAsset* oldMotion;
	// Line 815, Address: 0x2bb9f0, Func Offset: 0
	// Line 818, Address: 0x2bb9f4, Func Offset: 0x4
	// Line 815, Address: 0x2bb9f8, Func Offset: 0x8
	// Line 818, Address: 0x2bb9fc, Func Offset: 0xc
	// Line 815, Address: 0x2bba00, Func Offset: 0x10
	// Line 818, Address: 0x2bba20, Func Offset: 0x30
	// Line 815, Address: 0x2bba24, Func Offset: 0x34
	// Line 818, Address: 0x2bba38, Func Offset: 0x48
	// Line 819, Address: 0x2bba64, Func Offset: 0x74
	// Line 820, Address: 0x2bba70, Func Offset: 0x80
	// Line 821, Address: 0x2bba78, Func Offset: 0x88
	// Line 820, Address: 0x2bba7c, Func Offset: 0x8c
	// Line 829, Address: 0x2bba80, Func Offset: 0x90
	// Line 823, Address: 0x2bba84, Func Offset: 0x94
	// Line 821, Address: 0x2bba88, Func Offset: 0x98
	// Line 823, Address: 0x2bba8c, Func Offset: 0x9c
	// Line 824, Address: 0x2bba90, Func Offset: 0xa0
	// Line 822, Address: 0x2bba98, Func Offset: 0xa8
	// Line 824, Address: 0x2bba9c, Func Offset: 0xac
	// Line 829, Address: 0x2bbaa0, Func Offset: 0xb0
	// Line 825, Address: 0x2bbaa4, Func Offset: 0xb4
	// Line 826, Address: 0x2bbabc, Func Offset: 0xcc
	// Line 825, Address: 0x2bbac0, Func Offset: 0xd0
	// Line 826, Address: 0x2bbac8, Func Offset: 0xd8
	// Line 830, Address: 0x2bbad0, Func Offset: 0xe0
	// Line 831, Address: 0x2bbadc, Func Offset: 0xec
	// Line 833, Address: 0x2bbae8, Func Offset: 0xf8
	// Line 835, Address: 0x2bbaf4, Func Offset: 0x104
	// Line 836, Address: 0x2bbaf8, Func Offset: 0x108
	// Line 837, Address: 0x2bbb04, Func Offset: 0x114
	// Line 841, Address: 0x2bbb1c, Func Offset: 0x12c
	// Line 839, Address: 0x2bbb20, Func Offset: 0x130
	// Line 841, Address: 0x2bbb24, Func Offset: 0x134
	// Line 845, Address: 0x2bbb2c, Func Offset: 0x13c
	// Line 846, Address: 0x2bbb30, Func Offset: 0x140
	// Line 849, Address: 0x2bbb48, Func Offset: 0x158
	// Line 851, Address: 0x2bbb74, Func Offset: 0x184
	// Line 856, Address: 0x2bbb78, Func Offset: 0x188
	// Line 858, Address: 0x2bbb9c, Func Offset: 0x1ac
	// Line 860, Address: 0x2bbba8, Func Offset: 0x1b8
	// Line 861, Address: 0x2bbbb0, Func Offset: 0x1c0
	// Line 860, Address: 0x2bbbb4, Func Offset: 0x1c4
	// Line 861, Address: 0x2bbbbc, Func Offset: 0x1cc
	// Line 862, Address: 0x2bbbc4, Func Offset: 0x1d4
	// Line 873, Address: 0x2bbbcc, Func Offset: 0x1dc
	// Line 878, Address: 0x2bbbd0, Func Offset: 0x1e0
	// Line 881, Address: 0x2bbbf0, Func Offset: 0x200
	// Line 880, Address: 0x2bbbf4, Func Offset: 0x204
	// Line 883, Address: 0x2bbbfc, Func Offset: 0x20c
	// Line 885, Address: 0x2bbc08, Func Offset: 0x218
	// Line 886, Address: 0x2bbc0c, Func Offset: 0x21c
	// Line 885, Address: 0x2bbc10, Func Offset: 0x220
	// Line 886, Address: 0x2bbc14, Func Offset: 0x224
	// Line 896, Address: 0x2bbc18, Func Offset: 0x228
	// Line 898, Address: 0x2bbc28, Func Offset: 0x238
	// Line 907, Address: 0x2bbc4c, Func Offset: 0x25c
	// Line 908, Address: 0x2bbc50, Func Offset: 0x260
	// Line 910, Address: 0x2bbc54, Func Offset: 0x264
	// Line 918, Address: 0x2bbc5c, Func Offset: 0x26c
	// Line 923, Address: 0x2bbc60, Func Offset: 0x270
	// Line 925, Address: 0x2bbc84, Func Offset: 0x294
	// Line 927, Address: 0x2bbc90, Func Offset: 0x2a0
	// Line 935, Address: 0x2bbca4, Func Offset: 0x2b4
	// Line 962, Address: 0x2bbce0, Func Offset: 0x2f0
	// Line 964, Address: 0x2bbd04, Func Offset: 0x314
	// Line 966, Address: 0x2bbd10, Func Offset: 0x320
	// Line 967, Address: 0x2bbd18, Func Offset: 0x328
	// Line 982, Address: 0x2bbd20, Func Offset: 0x330
	// Line 987, Address: 0x2bbd44, Func Offset: 0x354
	// Line 994, Address: 0x2bbd50, Func Offset: 0x360
	// Line 996, Address: 0x2bbd60, Func Offset: 0x370
	// Line 997, Address: 0x2bbd6c, Func Offset: 0x37c
	// Line 996, Address: 0x2bbd70, Func Offset: 0x380
	// Line 997, Address: 0x2bbd7c, Func Offset: 0x38c
	// Line 1000, Address: 0x2bbd88, Func Offset: 0x398
	// Line 1005, Address: 0x2bbd94, Func Offset: 0x3a4
	// Line 1007, Address: 0x2bbda0, Func Offset: 0x3b0
	// Line 1009, Address: 0x2bbda4, Func Offset: 0x3b4
	// Line 1010, Address: 0x2bbdb0, Func Offset: 0x3c0
	// Line 1011, Address: 0x2bbdb8, Func Offset: 0x3c8
	// Line 1016, Address: 0x2bbdbc, Func Offset: 0x3cc
	// Line 1018, Address: 0x2bbdc4, Func Offset: 0x3d4
	// Line 1023, Address: 0x2bbdc8, Func Offset: 0x3d8
	// Line 1025, Address: 0x2bbdec, Func Offset: 0x3fc
	// Line 1027, Address: 0x2bbdf8, Func Offset: 0x408
	// Line 1028, Address: 0x2bbe00, Func Offset: 0x410
	// Line 1044, Address: 0x2bbe08, Func Offset: 0x418
	// Line 1046, Address: 0x2bbe2c, Func Offset: 0x43c
	// Line 1048, Address: 0x2bbe38, Func Offset: 0x448
	// Line 1049, Address: 0x2bbe40, Func Offset: 0x450
	// Line 1050, Address: 0x2bbe4c, Func Offset: 0x45c
	// Line 1051, Address: 0x2bbe54, Func Offset: 0x464
	// Line 1068, Address: 0x2bbe5c, Func Offset: 0x46c
	// Line 1073, Address: 0x2bbe60, Func Offset: 0x470
	// Line 1075, Address: 0x2bbe84, Func Offset: 0x494
	// Line 1077, Address: 0x2bbe90, Func Offset: 0x4a0
	// Line 1078, Address: 0x2bbe9c, Func Offset: 0x4ac
	// Line 1091, Address: 0x2bbea8, Func Offset: 0x4b8
	// Line 1094, Address: 0x2bbec0, Func Offset: 0x4d0
	// Line 1096, Address: 0x2bbf74, Func Offset: 0x584
	// Line 1098, Address: 0x2bbf80, Func Offset: 0x590
	// Line 1100, Address: 0x2bbf98, Func Offset: 0x5a8
	// Line 1105, Address: 0x2bbf9c, Func Offset: 0x5ac
	// Line 1100, Address: 0x2bbfa0, Func Offset: 0x5b0
	// Line 1101, Address: 0x2bbfa8, Func Offset: 0x5b8
	// Line 1104, Address: 0x2bbfac, Func Offset: 0x5bc
	// Line 1101, Address: 0x2bbfb0, Func Offset: 0x5c0
	// Line 1104, Address: 0x2bbfb4, Func Offset: 0x5c4
	// Line 1105, Address: 0x2bbfb8, Func Offset: 0x5c8
	// Line 1106, Address: 0x2bbfbc, Func Offset: 0x5cc
	// Line 1107, Address: 0x2bbfc0, Func Offset: 0x5d0
	// Line 1108, Address: 0x2bbfc4, Func Offset: 0x5d4
	// Line 1115, Address: 0x2bbfd0, Func Offset: 0x5e0
	// Line 1118, Address: 0x2bbffc, Func Offset: 0x60c
	// Line 1119, Address: 0x2bc010, Func Offset: 0x620
	// Line 1120, Address: 0x2bc028, Func Offset: 0x638
	// Line 1121, Address: 0x2bc030, Func Offset: 0x640
	// Line 1131, Address: 0x2bc040, Func Offset: 0x650
	// Line 1132, Address: 0x2bc050, Func Offset: 0x660
	// Line 1133, Address: 0x2bc068, Func Offset: 0x678
	// Line 1134, Address: 0x2bc070, Func Offset: 0x680
	// Line 1135, Address: 0x2bc07c, Func Offset: 0x68c
	// Line 1136, Address: 0x2bc080, Func Offset: 0x690
	// Line 1140, Address: 0x2bc090, Func Offset: 0x6a0
	// Line 1141, Address: 0x2bc09c, Func Offset: 0x6ac
	// Line 1146, Address: 0x2bc0a4, Func Offset: 0x6b4
	// Line 1148, Address: 0x2bc0c0, Func Offset: 0x6d0
	// Line 1149, Address: 0x2bc0cc, Func Offset: 0x6dc
	// Line 1150, Address: 0x2bc0e4, Func Offset: 0x6f4
	// Line 1151, Address: 0x2bc0e8, Func Offset: 0x6f8
	// Line 1153, Address: 0x2bc0f4, Func Offset: 0x704
	// Line 864, Address: 0x2bc118, Func Offset: 0x728
	// Line 1153, Address: 0x2bc11c, Func Offset: 0x72c
	// Line 866, Address: 0x2bc144, Func Offset: 0x754
	// Line 871, Address: 0x2bc148, Func Offset: 0x758
	// Line 889, Address: 0x2bc150, Func Offset: 0x760
	// Line 1153, Address: 0x2bc154, Func Offset: 0x764
	// Line 889, Address: 0x2bc16c, Func Offset: 0x77c
	// Line 891, Address: 0x2bc170, Func Offset: 0x780
	// Line 889, Address: 0x2bc174, Func Offset: 0x784
	// Line 1153, Address: 0x2bc178, Func Offset: 0x788
	// Line 889, Address: 0x2bc17c, Func Offset: 0x78c
	// Line 1153, Address: 0x2bc180, Func Offset: 0x790
	// Line 889, Address: 0x2bc194, Func Offset: 0x7a4
	// Line 1153, Address: 0x2bc198, Func Offset: 0x7a8
	// Line 891, Address: 0x2bc1a0, Func Offset: 0x7b0
	// Line 905, Address: 0x2bc1b8, Func Offset: 0x7c8
	// Line 1153, Address: 0x2bc1c0, Func Offset: 0x7d0
	// Line 905, Address: 0x2bc1c4, Func Offset: 0x7d4
	// Line 906, Address: 0x2bc1d0, Func Offset: 0x7e0
	// Line 905, Address: 0x2bc1d4, Func Offset: 0x7e4
	// Line 1153, Address: 0x2bc1dc, Func Offset: 0x7ec
	// Line 906, Address: 0x2bc1e8, Func Offset: 0x7f8
	// Line 1153, Address: 0x2bc1f8, Func Offset: 0x808
	// Line 916, Address: 0x2bc204, Func Offset: 0x814
	// Line 928, Address: 0x2bc20c, Func Offset: 0x81c
	// Line 1153, Address: 0x2bc210, Func Offset: 0x820
	// Line 930, Address: 0x2bc22c, Func Offset: 0x83c
	// Line 939, Address: 0x2bc238, Func Offset: 0x848
	// Line 1153, Address: 0x2bc244, Func Offset: 0x854
	// Line 940, Address: 0x2bc250, Func Offset: 0x860
	// Line 1153, Address: 0x2bc270, Func Offset: 0x880
	// Line 940, Address: 0x2bc274, Func Offset: 0x884
	// Line 1153, Address: 0x2bc278, Func Offset: 0x888
	// Line 940, Address: 0x2bc27c, Func Offset: 0x88c
	// Line 1153, Address: 0x2bc280, Func Offset: 0x890
	// Line 940, Address: 0x2bc284, Func Offset: 0x894
	// Line 1153, Address: 0x2bc288, Func Offset: 0x898
	// Line 940, Address: 0x2bc28c, Func Offset: 0x89c
	// Line 1153, Address: 0x2bc298, Func Offset: 0x8a8
	// Line 940, Address: 0x2bc29c, Func Offset: 0x8ac
	// Line 942, Address: 0x2bc2a8, Func Offset: 0x8b8
	// Line 1153, Address: 0x2bc2ac, Func Offset: 0x8bc
	// Line 942, Address: 0x2bc2b0, Func Offset: 0x8c0
	// Line 1153, Address: 0x2bc2cc, Func Offset: 0x8dc
	// Line 942, Address: 0x2bc2d0, Func Offset: 0x8e0
	// Line 1153, Address: 0x2bc2d4, Func Offset: 0x8e4
	// Line 942, Address: 0x2bc2d8, Func Offset: 0x8e8
	// Line 1153, Address: 0x2bc2dc, Func Offset: 0x8ec
	// Line 942, Address: 0x2bc2e0, Func Offset: 0x8f0
	// Line 1153, Address: 0x2bc2e4, Func Offset: 0x8f4
	// Line 942, Address: 0x2bc2e8, Func Offset: 0x8f8
	// Line 1153, Address: 0x2bc2f4, Func Offset: 0x904
	// Line 942, Address: 0x2bc2f8, Func Offset: 0x908
	// Line 943, Address: 0x2bc300, Func Offset: 0x910
	// Line 1153, Address: 0x2bc320, Func Offset: 0x930
	// Line 947, Address: 0x2bc328, Func Offset: 0x938
	// Line 1153, Address: 0x2bc32c, Func Offset: 0x93c
	// Line 950, Address: 0x2bc344, Func Offset: 0x954
	// Line 1153, Address: 0x2bc354, Func Offset: 0x964
	// Line 951, Address: 0x2bc360, Func Offset: 0x970
	// Line 955, Address: 0x2bc374, Func Offset: 0x984
	// Line 967, Address: 0x2bc37c, Func Offset: 0x98c
	// Line 1153, Address: 0x2bc380, Func Offset: 0x990
	// Line 969, Address: 0x2bc390, Func Offset: 0x9a0
	// Line 1153, Address: 0x2bc394, Func Offset: 0x9a4
	// Line 969, Address: 0x2bc39c, Func Offset: 0x9ac
	// Line 1153, Address: 0x2bc3a0, Func Offset: 0x9b0
	// Line 971, Address: 0x2bc3b4, Func Offset: 0x9c4
	// Line 1153, Address: 0x2bc420, Func Offset: 0xa30
	// Line 975, Address: 0x2bc424, Func Offset: 0xa34
	// Line 1153, Address: 0x2bc430, Func Offset: 0xa40
	// Line 991, Address: 0x2bc434, Func Offset: 0xa44
	// Line 1153, Address: 0x2bc440, Func Offset: 0xa50
	// Line 1004, Address: 0x2bc44c, Func Offset: 0xa5c
	// Line 1028, Address: 0x2bc454, Func Offset: 0xa64
	// Line 1153, Address: 0x2bc458, Func Offset: 0xa68
	// Line 1030, Address: 0x2bc468, Func Offset: 0xa78
	// Line 1153, Address: 0x2bc46c, Func Offset: 0xa7c
	// Line 1030, Address: 0x2bc474, Func Offset: 0xa84
	// Line 1153, Address: 0x2bc478, Func Offset: 0xa88
	// Line 1033, Address: 0x2bc48c, Func Offset: 0xa9c
	// Line 1153, Address: 0x2bc4f8, Func Offset: 0xb08
	// Line 1037, Address: 0x2bc4fc, Func Offset: 0xb0c
	// Line 1051, Address: 0x2bc504, Func Offset: 0xb14
	// Line 1153, Address: 0x2bc508, Func Offset: 0xb18
	// Line 1053, Address: 0x2bc518, Func Offset: 0xb28
	// Line 1153, Address: 0x2bc51c, Func Offset: 0xb2c
	// Line 1053, Address: 0x2bc524, Func Offset: 0xb34
	// Line 1153, Address: 0x2bc528, Func Offset: 0xb38
	// Line 1053, Address: 0x2bc534, Func Offset: 0xb44
	// Line 1153, Address: 0x2bc538, Func Offset: 0xb48
	// Line 1055, Address: 0x2bc544, Func Offset: 0xb54
	// Line 1153, Address: 0x2bc548, Func Offset: 0xb58
	// Line 1055, Address: 0x2bc558, Func Offset: 0xb68
	// Line 1153, Address: 0x2bc55c, Func Offset: 0xb6c
	// Line 1055, Address: 0x2bc568, Func Offset: 0xb78
	// Line 1153, Address: 0x2bc56c, Func Offset: 0xb7c
	// Line 1057, Address: 0x2bc578, Func Offset: 0xb88
	// Line 1153, Address: 0x2bc57c, Func Offset: 0xb8c
	// Line 1057, Address: 0x2bc58c, Func Offset: 0xb9c
	// Line 1153, Address: 0x2bc590, Func Offset: 0xba0
	// Line 1060, Address: 0x2bc5a4, Func Offset: 0xbb4
	// Line 1153, Address: 0x2bc610, Func Offset: 0xc20
	// Line 1061, Address: 0x2bc620, Func Offset: 0xc30
	// Line 1153, Address: 0x2bc68c, Func Offset: 0xc9c
	// Line 1062, Address: 0x2bc6a0, Func Offset: 0xcb0
	// Line 1153, Address: 0x2bc70c, Func Offset: 0xd1c
	// Line 1066, Address: 0x2bc710, Func Offset: 0xd20
	// Line 1153, Address: 0x2bc718, Func Offset: 0xd28
	// Line 1094, Address: 0x2bc764, Func Offset: 0xd74
	// Line 1153, Address: 0x2bc768, Func Offset: 0xd78
	// Line 1094, Address: 0x2bc76c, Func Offset: 0xd7c
	// Line 1153, Address: 0x2bc770, Func Offset: 0xd80
	// Line 1124, Address: 0x2bc784, Func Offset: 0xd94
	// Line 1153, Address: 0x2bc794, Func Offset: 0xda4
	// Func End, Address: 0x2bc7d0, Func Offset: 0xde0
}

// CalcAcceleratedDistance__3zUIFffffff
// Start address: 0x2bc7d0
float32 zUI::CalcAcceleratedDistance(float32 totalDistance, float32 startTime, float32 endTime, float32 accelTime, float32 decelTime)
{
	float32 timePassed;
	float32 timeLength;
	float32 topVelocity;
	float32 curDistance;
	float32 timeToEnd;
	// Line 781, Address: 0x2bc7d0, Func Offset: 0
	// Line 790, Address: 0x2bc7d4, Func Offset: 0x4
	// Line 795, Address: 0x2bc7d8, Func Offset: 0x8
	// Line 784, Address: 0x2bc7dc, Func Offset: 0xc
	// Line 795, Address: 0x2bc7e0, Func Offset: 0x10
	// Line 790, Address: 0x2bc7e4, Func Offset: 0x14
	// Line 783, Address: 0x2bc800, Func Offset: 0x30
	// Line 790, Address: 0x2bc804, Func Offset: 0x34
	// Line 795, Address: 0x2bc80c, Func Offset: 0x3c
	// Line 800, Address: 0x2bc814, Func Offset: 0x44
	// Line 805, Address: 0x2bc824, Func Offset: 0x54
	// Line 808, Address: 0x2bc830, Func Offset: 0x60
	// Line 807, Address: 0x2bc834, Func Offset: 0x64
	// Line 808, Address: 0x2bc838, Func Offset: 0x68
	// Line 811, Address: 0x2bc848, Func Offset: 0x78
	// Line 797, Address: 0x2bc850, Func Offset: 0x80
	// Line 798, Address: 0x2bc868, Func Offset: 0x98
	// Line 802, Address: 0x2bc870, Func Offset: 0xa0
	// Line 803, Address: 0x2bc878, Func Offset: 0xa8
	// Line 812, Address: 0x2bc880, Func Offset: 0xb0
	// Func End, Address: 0x2bc888, Func Offset: 0xb8
}

// RunMotion__3zUIFP14zUIMotionAssetbb
// Start address: 0x2bc890
void zUI::RunMotion(zUIMotionAsset* asset, uint8 loop, uint8 reset)
{
	// Line 753, Address: 0x2bc890, Func Offset: 0
	// Line 754, Address: 0x2bc8ac, Func Offset: 0x1c
	// Line 756, Address: 0x2bc8b4, Func Offset: 0x24
	// Line 758, Address: 0x2bc8c0, Func Offset: 0x30
	// Line 759, Address: 0x2bc8c4, Func Offset: 0x34
	// Line 760, Address: 0x2bc8cc, Func Offset: 0x3c
	// Line 763, Address: 0x2bc8d8, Func Offset: 0x48
	// Line 765, Address: 0x2bc91c, Func Offset: 0x8c
	// Line 770, Address: 0x2bc920, Func Offset: 0x90
	// Line 766, Address: 0x2bc924, Func Offset: 0x94
	// Line 767, Address: 0x2bc928, Func Offset: 0x98
	// Line 770, Address: 0x2bc92c, Func Offset: 0x9c
	// Line 771, Address: 0x2bc934, Func Offset: 0xa4
	// Line 755, Address: 0x2bc968, Func Offset: 0xd8
	// Line 771, Address: 0x2bc970, Func Offset: 0xe0
	// Func End, Address: 0x2bc984, Func Offset: 0xf4
}

// DoExit__3zUIFv
// Start address: 0x2bc990
void zUI::DoExit()
{
	// Line 694, Address: 0x2bc990, Func Offset: 0
	// Func End, Address: 0x2bc998, Func Offset: 0x8
}

// DoUpdate__3zUIFfUi
// Start address: 0x2bc9a0
void zUI::DoUpdate(float32 dt, uint32 buttonsPressed)
{
	_tagxPad* pad;
	// Line 299, Address: 0x2bc9a0, Func Offset: 0
	// Line 300, Address: 0x2bc9c0, Func Offset: 0x20
	// Line 304, Address: 0x2bc9cc, Func Offset: 0x2c
	// Line 684, Address: 0x2bc9ec, Func Offset: 0x4c
	// Line 686, Address: 0x2bca04, Func Offset: 0x64
	// Line 687, Address: 0x2bca08, Func Offset: 0x68
	// Line 686, Address: 0x2bca0c, Func Offset: 0x6c
	// Line 687, Address: 0x2bca10, Func Offset: 0x70
	// Line 689, Address: 0x2bca18, Func Offset: 0x78
	// Line 442, Address: 0x2bca30, Func Offset: 0x90
	// Line 689, Address: 0x2bca34, Func Offset: 0x94
	// Line 533, Address: 0x2bca44, Func Offset: 0xa4
	// Line 689, Address: 0x2bca48, Func Offset: 0xa8
	// Line 559, Address: 0x2bca50, Func Offset: 0xb0
	// Line 689, Address: 0x2bca54, Func Offset: 0xb4
	// Line 619, Address: 0x2bca5c, Func Offset: 0xbc
	// Line 689, Address: 0x2bca64, Func Offset: 0xc4
	// Line 623, Address: 0x2bca6c, Func Offset: 0xcc
	// Line 689, Address: 0x2bca74, Func Offset: 0xd4
	// Line 642, Address: 0x2bca7c, Func Offset: 0xdc
	// Line 689, Address: 0x2bca84, Func Offset: 0xe4
	// Line 644, Address: 0x2bca8c, Func Offset: 0xec
	// Line 689, Address: 0x2bca94, Func Offset: 0xf4
	// Line 646, Address: 0x2bca9c, Func Offset: 0xfc
	// Line 689, Address: 0x2bcaa4, Func Offset: 0x104
	// Line 650, Address: 0x2bcaac, Func Offset: 0x10c
	// Line 689, Address: 0x2bcab0, Func Offset: 0x110
	// Line 652, Address: 0x2bcab8, Func Offset: 0x118
	// Line 689, Address: 0x2bcabc, Func Offset: 0x11c
	// Line 654, Address: 0x2bcac4, Func Offset: 0x124
	// Line 689, Address: 0x2bcac8, Func Offset: 0x128
	// Line 656, Address: 0x2bcad0, Func Offset: 0x130
	// Line 689, Address: 0x2bcad4, Func Offset: 0x134
	// Line 669, Address: 0x2bcb14, Func Offset: 0x174
	// Line 689, Address: 0x2bcb18, Func Offset: 0x178
	// Line 674, Address: 0x2bcb30, Func Offset: 0x190
	// Line 689, Address: 0x2bcb38, Func Offset: 0x198
	// Line 678, Address: 0x2bcb50, Func Offset: 0x1b0
	// Line 689, Address: 0x2bcb58, Func Offset: 0x1b8
	// Line 535, Address: 0x2bcb68, Func Offset: 0x1c8
	// Line 689, Address: 0x2bcb70, Func Offset: 0x1d0
	// Line 547, Address: 0x2bcb80, Func Offset: 0x1e0
	// Line 689, Address: 0x2bcb88, Func Offset: 0x1e8
	// Line 578, Address: 0x2bcbb0, Func Offset: 0x210
	// Line 689, Address: 0x2bcbb4, Func Offset: 0x214
	// Line 578, Address: 0x2bcbc0, Func Offset: 0x220
	// Line 689, Address: 0x2bcbc4, Func Offset: 0x224
	// Line 583, Address: 0x2bcbcc, Func Offset: 0x22c
	// Line 689, Address: 0x2bcbd4, Func Offset: 0x234
	// Line 585, Address: 0x2bcbdc, Func Offset: 0x23c
	// Line 568, Address: 0x2bcbe4, Func Offset: 0x244
	// Line 689, Address: 0x2bcbec, Func Offset: 0x24c
	// Line 570, Address: 0x2bcbf4, Func Offset: 0x254
	// Line 571, Address: 0x2bcbfc, Func Offset: 0x25c
	// Line 689, Address: 0x2bcc00, Func Offset: 0x260
	// Line 571, Address: 0x2bcc0c, Func Offset: 0x26c
	// Line 689, Address: 0x2bcc10, Func Offset: 0x270
	// Line 576, Address: 0x2bcc18, Func Offset: 0x278
	// Line 689, Address: 0x2bcc20, Func Offset: 0x280
	// Line 577, Address: 0x2bcc28, Func Offset: 0x288
	// Line 620, Address: 0x2bcc30, Func Offset: 0x290
	// Line 689, Address: 0x2bcc38, Func Offset: 0x298
	// Line 620, Address: 0x2bcc40, Func Offset: 0x2a0
	// Line 624, Address: 0x2bcc48, Func Offset: 0x2a8
	// Line 689, Address: 0x2bcc50, Func Offset: 0x2b0
	// Line 624, Address: 0x2bcc58, Func Offset: 0x2b8
	// Line 643, Address: 0x2bcc60, Func Offset: 0x2c0
	// Line 689, Address: 0x2bcc68, Func Offset: 0x2c8
	// Line 643, Address: 0x2bcc70, Func Offset: 0x2d0
	// Line 645, Address: 0x2bcc78, Func Offset: 0x2d8
	// Line 689, Address: 0x2bcc80, Func Offset: 0x2e0
	// Line 645, Address: 0x2bcc88, Func Offset: 0x2e8
	// Line 647, Address: 0x2bcc90, Func Offset: 0x2f0
	// Line 689, Address: 0x2bcc98, Func Offset: 0x2f8
	// Line 647, Address: 0x2bcca0, Func Offset: 0x300
	// Line 651, Address: 0x2bcca8, Func Offset: 0x308
	// Line 689, Address: 0x2bccb0, Func Offset: 0x310
	// Line 651, Address: 0x2bccb8, Func Offset: 0x318
	// Line 653, Address: 0x2bccc0, Func Offset: 0x320
	// Line 689, Address: 0x2bccc8, Func Offset: 0x328
	// Line 653, Address: 0x2bccd0, Func Offset: 0x330
	// Line 655, Address: 0x2bccd8, Func Offset: 0x338
	// Line 689, Address: 0x2bcce0, Func Offset: 0x340
	// Line 655, Address: 0x2bcce8, Func Offset: 0x348
	// Line 657, Address: 0x2bccf0, Func Offset: 0x350
	// Line 689, Address: 0x2bccf8, Func Offset: 0x358
	// Line 657, Address: 0x2bcd00, Func Offset: 0x360
	// Line 660, Address: 0x2bcd08, Func Offset: 0x368
	// Line 689, Address: 0x2bcd10, Func Offset: 0x370
	// Line 660, Address: 0x2bcd18, Func Offset: 0x378
	// Line 662, Address: 0x2bcd20, Func Offset: 0x380
	// Line 689, Address: 0x2bcd28, Func Offset: 0x388
	// Line 662, Address: 0x2bcd30, Func Offset: 0x390
	// Line 664, Address: 0x2bcd38, Func Offset: 0x398
	// Line 689, Address: 0x2bcd40, Func Offset: 0x3a0
	// Line 664, Address: 0x2bcd48, Func Offset: 0x3a8
	// Line 666, Address: 0x2bcd50, Func Offset: 0x3b0
	// Line 689, Address: 0x2bcd58, Func Offset: 0x3b8
	// Line 666, Address: 0x2bcd60, Func Offset: 0x3c0
	// Line 672, Address: 0x2bcd68, Func Offset: 0x3c8
	// Line 689, Address: 0x2bcd70, Func Offset: 0x3d0
	// Line 672, Address: 0x2bcd78, Func Offset: 0x3d8
	// Line 676, Address: 0x2bcd80, Func Offset: 0x3e0
	// Line 689, Address: 0x2bcd88, Func Offset: 0x3e8
	// Line 676, Address: 0x2bcd90, Func Offset: 0x3f0
	// Line 689, Address: 0x2bcd98, Func Offset: 0x3f8
	// Func End, Address: 0x2bcdb4, Func Offset: 0x414
}

// DoHandleEvent__3zUIFP5xBaseUiPCfP5xBaseUi
// Start address: 0x2bcdc0
void zUI::DoHandleEvent(uint32 toEvent, float32* toParam, xBase* toParamWidget)
{
	// Line 195, Address: 0x2bcdc0, Func Offset: 0
	// Line 196, Address: 0x2bcdc4, Func Offset: 0x4
	// Line 195, Address: 0x2bcdc8, Func Offset: 0x8
	// Line 196, Address: 0x2bcddc, Func Offset: 0x1c
	// Line 199, Address: 0x2bceb8, Func Offset: 0xf8
	// Line 200, Address: 0x2bcec0, Func Offset: 0x100
	// Line 203, Address: 0x2bcec8, Func Offset: 0x108
	// Line 204, Address: 0x2bced0, Func Offset: 0x110
	// Line 207, Address: 0x2bced8, Func Offset: 0x118
	// Line 208, Address: 0x2bcee8, Func Offset: 0x128
	// Line 211, Address: 0x2bcef0, Func Offset: 0x130
	// Line 212, Address: 0x2bcf00, Func Offset: 0x140
	// Line 213, Address: 0x2bcf10, Func Offset: 0x150
	// Line 214, Address: 0x2bcf20, Func Offset: 0x160
	// Line 215, Address: 0x2bcf30, Func Offset: 0x170
	// Line 218, Address: 0x2bcf38, Func Offset: 0x178
	// Line 219, Address: 0x2bcf48, Func Offset: 0x188
	// Line 222, Address: 0x2bcf50, Func Offset: 0x190
	// Line 223, Address: 0x2bcf60, Func Offset: 0x1a0
	// Line 224, Address: 0x2bcf70, Func Offset: 0x1b0
	// Line 225, Address: 0x2bcf80, Func Offset: 0x1c0
	// Line 226, Address: 0x2bcf90, Func Offset: 0x1d0
	// Line 229, Address: 0x2bcf98, Func Offset: 0x1d8
	// Line 230, Address: 0x2bcfa8, Func Offset: 0x1e8
	// Line 231, Address: 0x2bcfb8, Func Offset: 0x1f8
	// Line 232, Address: 0x2bcfc8, Func Offset: 0x208
	// Line 233, Address: 0x2bcfd8, Func Offset: 0x218
	// Line 234, Address: 0x2bcfe8, Func Offset: 0x228
	// Line 235, Address: 0x2bcff8, Func Offset: 0x238
	// Line 238, Address: 0x2bd000, Func Offset: 0x240
	// Line 239, Address: 0x2bd010, Func Offset: 0x250
	// Line 240, Address: 0x2bd020, Func Offset: 0x260
	// Line 241, Address: 0x2bd030, Func Offset: 0x270
	// Line 242, Address: 0x2bd040, Func Offset: 0x280
	// Line 243, Address: 0x2bd050, Func Offset: 0x290
	// Line 244, Address: 0x2bd060, Func Offset: 0x2a0
	// Line 247, Address: 0x2bd068, Func Offset: 0x2a8
	// Line 248, Address: 0x2bd078, Func Offset: 0x2b8
	// Line 251, Address: 0x2bd080, Func Offset: 0x2c0
	// Line 252, Address: 0x2bd090, Func Offset: 0x2d0
	// Line 255, Address: 0x2bd098, Func Offset: 0x2d8
	// Line 257, Address: 0x2bd0a4, Func Offset: 0x2e4
	// Line 258, Address: 0x2bd0b4, Func Offset: 0x2f4
	// Line 259, Address: 0x2bd0c4, Func Offset: 0x304
	// Line 260, Address: 0x2bd0cc, Func Offset: 0x30c
	// Line 261, Address: 0x2bd0dc, Func Offset: 0x31c
	// Line 263, Address: 0x2bd0ec, Func Offset: 0x32c
	// Line 266, Address: 0x2bd0f4, Func Offset: 0x334
	// Line 267, Address: 0x2bd120, Func Offset: 0x360
	// Line 270, Address: 0x2bd128, Func Offset: 0x368
	// Line 271, Address: 0x2bd154, Func Offset: 0x394
	// Line 274, Address: 0x2bd15c, Func Offset: 0x39c
	// Line 275, Address: 0x2bd16c, Func Offset: 0x3ac
	// Line 278, Address: 0x2bd174, Func Offset: 0x3b4
	// Line 279, Address: 0x2bd184, Func Offset: 0x3c4
	// Line 282, Address: 0x2bd18c, Func Offset: 0x3cc
	// Line 283, Address: 0x2bd194, Func Offset: 0x3d4
	// Line 289, Address: 0x2bd274, Func Offset: 0x4b4
	// Line 290, Address: 0x2bd278, Func Offset: 0x4b8
	// Line 293, Address: 0x2bd280, Func Offset: 0x4c0
	// Line 296, Address: 0x2bd284, Func Offset: 0x4c4
	// Line 283, Address: 0x2bd2b8, Func Offset: 0x4f8
	// Line 296, Address: 0x2bd2c0, Func Offset: 0x500
	// Line 286, Address: 0x2bd2dc, Func Offset: 0x51c
	// Line 296, Address: 0x2bd2e4, Func Offset: 0x524
	// Func End, Address: 0x2bd2fc, Func Offset: 0x53c
}

// DoResetMotion__3zUIFv
// Start address: 0x2bd300
void zUI::DoResetMotion()
{
	// Line 183, Address: 0x2bd300, Func Offset: 0
	// Line 184, Address: 0x2bd30c, Func Offset: 0xc
	// Line 185, Address: 0x2bd318, Func Offset: 0x18
	// Line 186, Address: 0x2bd324, Func Offset: 0x24
	// Line 187, Address: 0x2bd330, Func Offset: 0x30
	// Line 188, Address: 0x2bd354, Func Offset: 0x54
	// Line 189, Address: 0x2bd360, Func Offset: 0x60
	// Line 190, Address: 0x2bd364, Func Offset: 0x64
	// Line 192, Address: 0x2bd368, Func Offset: 0x68
	// Func End, Address: 0x2bd370, Func Offset: 0x70
}

// DoReset__3zUIFv
// Start address: 0x2bd370
void zUI::DoReset()
{
	// Line 171, Address: 0x2bd370, Func Offset: 0
	// Line 173, Address: 0x2bd37c, Func Offset: 0xc
	// Line 174, Address: 0x2bd3a8, Func Offset: 0x38
	// Line 175, Address: 0x2bd3b4, Func Offset: 0x44
	// Line 176, Address: 0x2bd3c8, Func Offset: 0x58
	// Line 177, Address: 0x2bd3dc, Func Offset: 0x6c
	// Line 178, Address: 0x2bd3f0, Func Offset: 0x80
	// Line 179, Address: 0x2bd404, Func Offset: 0x94
	// Func End, Address: 0x2bd414, Func Offset: 0xa4
}

// DoSetup__3zUIFv
// Start address: 0x2bd420
void zUI::DoSetup()
{
	// Line 168, Address: 0x2bd420, Func Offset: 0
	// Func End, Address: 0x2bd428, Func Offset: 0x8
}

// Signal__3zUIFP5xBaseUi
// Start address: 0x2bd430
void zUI::Signal(xBase* from, uint32 event)
{
	int32 i;
	xBase* dest;
	xBase* base;
	int32 i;
	xBase* base;
	// Line 103, Address: 0x2bd430, Func Offset: 0
	// Line 116, Address: 0x2bd45c, Func Offset: 0x2c
	// Line 117, Address: 0x2bd464, Func Offset: 0x34
	// Line 125, Address: 0x2bd47c, Func Offset: 0x4c
	// Line 144, Address: 0x2bd488, Func Offset: 0x58
	// Line 145, Address: 0x2bd4a4, Func Offset: 0x74
	// Line 147, Address: 0x2bd4b0, Func Offset: 0x80
	// Line 148, Address: 0x2bd4b4, Func Offset: 0x84
	// Line 149, Address: 0x2bd4bc, Func Offset: 0x8c
	// Line 151, Address: 0x2bd4cc, Func Offset: 0x9c
	// Line 149, Address: 0x2bd4dc, Func Offset: 0xac
	// Line 151, Address: 0x2bd4e0, Func Offset: 0xb0
	// Line 152, Address: 0x2bd4f4, Func Offset: 0xc4
	// Line 153, Address: 0x2bd50c, Func Offset: 0xdc
	// Line 155, Address: 0x2bd510, Func Offset: 0xe0
	// Line 142, Address: 0x2bd544, Func Offset: 0x114
	// Line 155, Address: 0x2bd548, Func Offset: 0x118
	// Line 143, Address: 0x2bd55c, Func Offset: 0x12c
	// Line 155, Address: 0x2bd564, Func Offset: 0x134
	// Line 130, Address: 0x2bd56c, Func Offset: 0x13c
	// Line 155, Address: 0x2bd570, Func Offset: 0x140
	// Line 140, Address: 0x2bd5b4, Func Offset: 0x184
	// Line 155, Address: 0x2bd5c8, Func Offset: 0x198
	// Func End, Address: 0x2bd60c, Func Offset: 0x1dc
}

// Blends__3zUICFv
// Start address: 0x2bd610
uint8 Blends()
{
	// Line 100, Address: 0x2bd610, Func Offset: 0
	// Func End, Address: 0x2bd618, Func Offset: 0x8
}

// UIEventHandler__20@unnamed@zWadUI_cpp@FP5xBaseP5xBaseUiPCfP5xBaseUi
// Start address: 0x2bd620
void UIEventHandler(xBase* from, xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget, uint32 toParamWidgetID)
{
	// Line 45, Address: 0x2bd620, Func Offset: 0
	// Line 46, Address: 0x2bd658, Func Offset: 0x38
	// Line 47, Address: 0x2bd69c, Func Offset: 0x7c
	// Func End, Address: 0x2bd6c0, Func Offset: 0xa0
}

