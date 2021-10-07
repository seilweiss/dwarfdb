



int32 MindySysMail(NMESysEvent* sysmail);
int32 TypeHandleMail(NMEMsg* mail);
void Render();
void Process(float32 dt);
void BUpdate(xVec3* pos);
void UpdateTVStatic(float32 dt);
xAnimTable* CreateAnimTable(xAnimTable* table);
uint32 CloseShellDone(void* object);
uint32 CloseShellCheck(void* object);
uint32 OpenShellDone(void* object);
uint32 OpenShellCheck(void* object);
uint32 SpatulaGrabCheck(void* object);
uint32 SpatulaGrabStopCB(xAnimSingle* anim, void* object);
uint32 SpatulaGrabCB(void* object);
void Destroy();
void Reset();
void Setup();
void Init(xEntAsset* asset);
void PostSetup();

// MindySysMail__9zNMEMindyFP11NMESysEvent
// Start address: 0x2335d0
int32 zNMEMindy::MindySysMail(NMESysEvent* sysmail)
{
	int32 handled;
	// Line 1050, Address: 0x2335d0, Func Offset: 0
	// Line 1053, Address: 0x2335d4, Func Offset: 0x4
	// Line 1050, Address: 0x2335d8, Func Offset: 0x8
	// Line 1051, Address: 0x2335f0, Func Offset: 0x20
	// Line 1053, Address: 0x2335f4, Func Offset: 0x24
	// Line 1056, Address: 0x233644, Func Offset: 0x74
	// Line 1057, Address: 0x233650, Func Offset: 0x80
	// Line 1060, Address: 0x233668, Func Offset: 0x98
	// Line 1061, Address: 0x2336d4, Func Offset: 0x104
	// Line 1064, Address: 0x2336e0, Func Offset: 0x110
	// Line 1067, Address: 0x233744, Func Offset: 0x174
	// Line 1069, Address: 0x23374c, Func Offset: 0x17c
	// Line 1071, Address: 0x233750, Func Offset: 0x180
	// Line 1069, Address: 0x233754, Func Offset: 0x184
	// Line 1071, Address: 0x233758, Func Offset: 0x188
	// Line 1072, Address: 0x2337d0, Func Offset: 0x200
	// Line 1075, Address: 0x2337dc, Func Offset: 0x20c
	// Line 1076, Address: 0x2337ec, Func Offset: 0x21c
	// Line 1077, Address: 0x2337f4, Func Offset: 0x224
	// Line 1082, Address: 0x233800, Func Offset: 0x230
	// Line 1084, Address: 0x233808, Func Offset: 0x238
	// Line 1088, Address: 0x233814, Func Offset: 0x244
	// Line 1089, Address: 0x233890, Func Offset: 0x2c0
	// Line 1092, Address: 0x233898, Func Offset: 0x2c8
	// Line 1096, Address: 0x2338a0, Func Offset: 0x2d0
	// Line 1098, Address: 0x2338ac, Func Offset: 0x2dc
	// Line 1099, Address: 0x2338b0, Func Offset: 0x2e0
	// Line 1100, Address: 0x2338b4, Func Offset: 0x2e4
	// Line 1101, Address: 0x2338b8, Func Offset: 0x2e8
	// Line 1102, Address: 0x2338bc, Func Offset: 0x2ec
	// Line 1103, Address: 0x2338c0, Func Offset: 0x2f0
	// Line 1105, Address: 0x2338e0, Func Offset: 0x310
	// Line 1108, Address: 0x2338e4, Func Offset: 0x314
	// Line 1111, Address: 0x2338ec, Func Offset: 0x31c
	// Line 1115, Address: 0x2338f0, Func Offset: 0x320
	// Line 1112, Address: 0x2338f4, Func Offset: 0x324
	// Line 1113, Address: 0x2338f8, Func Offset: 0x328
	// Line 1114, Address: 0x2338fc, Func Offset: 0x32c
	// Line 1116, Address: 0x233900, Func Offset: 0x330
	// Line 1120, Address: 0x233908, Func Offset: 0x338
	// Line 1124, Address: 0x233914, Func Offset: 0x344
	// Line 1058, Address: 0x233920, Func Offset: 0x350
	// Line 1124, Address: 0x233924, Func Offset: 0x354
	// Line 1060, Address: 0x23393c, Func Offset: 0x36c
	// Line 1125, Address: 0x233950, Func Offset: 0x380
	// Func End, Address: 0x233968, Func Offset: 0x398
}

// TypeHandleMail__9zNMEMindyFP6NMEMsg
// Start address: 0x233970
int32 zNMEMindy::TypeHandleMail(NMEMsg* mail)
{
	int32 handled;
	// Line 1030, Address: 0x233970, Func Offset: 0
	// Line 1033, Address: 0x233974, Func Offset: 0x4
	// Line 1030, Address: 0x233978, Func Offset: 0x8
	// Line 1033, Address: 0x23397c, Func Offset: 0xc
	// Line 1046, Address: 0x233988, Func Offset: 0x18
	// Line 1038, Address: 0x233998, Func Offset: 0x28
	// Line 1047, Address: 0x2339a0, Func Offset: 0x30
	// Func End, Address: 0x2339a8, Func Offset: 0x38
}

// Render__9zNMEMindyFv
// Start address: 0x2339b0
void zNMEMindy::Render()
{
	// Line 1016, Address: 0x2339b0, Func Offset: 0
	// Func End, Address: 0x2339b8, Func Offset: 0x8
}

// Process__9zNMEMindyFf
// Start address: 0x2339c0
void zNMEMindy::Process(float32 dt)
{
	float32 jawval;
	xMat3x3 matrix;
	float32 diffY;
	xMat3x3 rotationMat;
	xQuat currentQuat;
	xQuat defaultQuat;
	xQuat resultQuat;
	// Line 739, Address: 0x2339c0, Func Offset: 0
	// Line 741, Address: 0x2339c4, Func Offset: 0x4
	// Line 739, Address: 0x2339c8, Func Offset: 0x8
	// Line 741, Address: 0x2339e4, Func Offset: 0x24
	// Line 745, Address: 0x233a18, Func Offset: 0x58
	// Line 750, Address: 0x233b18, Func Offset: 0x158
	// Line 752, Address: 0x233b34, Func Offset: 0x174
	// Line 753, Address: 0x233b50, Func Offset: 0x190
	// Line 754, Address: 0x233b84, Func Offset: 0x1c4
	// Line 756, Address: 0x233b8c, Func Offset: 0x1cc
	// Line 761, Address: 0x233ba4, Func Offset: 0x1e4
	// Line 765, Address: 0x233bb0, Func Offset: 0x1f0
	// Line 766, Address: 0x233bc0, Func Offset: 0x200
	// Line 767, Address: 0x233bc4, Func Offset: 0x204
	// Line 769, Address: 0x233bc8, Func Offset: 0x208
	// Line 773, Address: 0x233bd0, Func Offset: 0x210
	// Line 775, Address: 0x233c44, Func Offset: 0x284
	// Line 779, Address: 0x233cd4, Func Offset: 0x314
	// Line 780, Address: 0x233ce4, Func Offset: 0x324
	// Line 782, Address: 0x233cec, Func Offset: 0x32c
	// Line 798, Address: 0x233cf4, Func Offset: 0x334
	// Line 805, Address: 0x233d50, Func Offset: 0x390
	// Line 807, Address: 0x233d5c, Func Offset: 0x39c
	// Line 816, Address: 0x233d8c, Func Offset: 0x3cc
	// Line 817, Address: 0x233d90, Func Offset: 0x3d0
	// Line 816, Address: 0x233d94, Func Offset: 0x3d4
	// Line 817, Address: 0x233d98, Func Offset: 0x3d8
	// Line 821, Address: 0x233e10, Func Offset: 0x450
	// Line 825, Address: 0x233e18, Func Offset: 0x458
	// Line 827, Address: 0x233ea4, Func Offset: 0x4e4
	// Line 828, Address: 0x233ea8, Func Offset: 0x4e8
	// Line 835, Address: 0x233eb0, Func Offset: 0x4f0
	// Line 837, Address: 0x233f50, Func Offset: 0x590
	// Line 838, Address: 0x233f90, Func Offset: 0x5d0
	// Line 840, Address: 0x233f98, Func Offset: 0x5d8
	// Line 842, Address: 0x234048, Func Offset: 0x688
	// Line 786, Address: 0x2340a0, Func Offset: 0x6e0
	// Line 842, Address: 0x2340a4, Func Offset: 0x6e4
	// Line 786, Address: 0x2340b0, Func Offset: 0x6f0
	// Line 842, Address: 0x2340b4, Func Offset: 0x6f4
	// Line 786, Address: 0x2340b8, Func Offset: 0x6f8
	// Line 842, Address: 0x2340d4, Func Offset: 0x714
	// Line 786, Address: 0x2340dc, Func Offset: 0x71c
	// Line 842, Address: 0x2340e4, Func Offset: 0x724
	// Line 786, Address: 0x2340ec, Func Offset: 0x72c
	// Line 842, Address: 0x234100, Func Offset: 0x740
	// Line 786, Address: 0x23411c, Func Offset: 0x75c
	// Line 842, Address: 0x234120, Func Offset: 0x760
	// Line 786, Address: 0x234138, Func Offset: 0x778
	// Line 842, Address: 0x23413c, Func Offset: 0x77c
	// Line 794, Address: 0x234144, Func Offset: 0x784
	// Line 842, Address: 0x23414c, Func Offset: 0x78c
	// Line 800, Address: 0x23415c, Func Offset: 0x79c
	// Line 801, Address: 0x234160, Func Offset: 0x7a0
	// Line 842, Address: 0x234164, Func Offset: 0x7a4
	// Line 801, Address: 0x234190, Func Offset: 0x7d0
	// Line 842, Address: 0x23419c, Func Offset: 0x7dc
	// Line 801, Address: 0x2341a8, Func Offset: 0x7e8
	// Line 842, Address: 0x2341ac, Func Offset: 0x7ec
	// Line 801, Address: 0x2341b0, Func Offset: 0x7f0
	// Line 842, Address: 0x2341b4, Func Offset: 0x7f4
	// Line 801, Address: 0x2341c4, Func Offset: 0x804
	// Line 842, Address: 0x2341cc, Func Offset: 0x80c
	// Line 801, Address: 0x2341d0, Func Offset: 0x810
	// Line 842, Address: 0x2341d4, Func Offset: 0x814
	// Line 802, Address: 0x2341e0, Func Offset: 0x820
	// Line 842, Address: 0x2341e8, Func Offset: 0x828
	// Line 809, Address: 0x2341ec, Func Offset: 0x82c
	// Line 842, Address: 0x2341f0, Func Offset: 0x830
	// Line 812, Address: 0x23420c, Func Offset: 0x84c
	// Line 842, Address: 0x234214, Func Offset: 0x854
	// Line 846, Address: 0x234238, Func Offset: 0x878
	// Line 850, Address: 0x234240, Func Offset: 0x880
	// Line 863, Address: 0x234250, Func Offset: 0x890
	// Line 866, Address: 0x234270, Func Offset: 0x8b0
	// Line 867, Address: 0x23427c, Func Offset: 0x8bc
	// Line 870, Address: 0x234284, Func Offset: 0x8c4
	// Line 871, Address: 0x2342b8, Func Offset: 0x8f8
	// Line 875, Address: 0x2342ec, Func Offset: 0x92c
	// Line 876, Address: 0x2342f0, Func Offset: 0x930
	// Line 883, Address: 0x2342f8, Func Offset: 0x938
	// Line 885, Address: 0x23430c, Func Offset: 0x94c
	// Line 886, Address: 0x234314, Func Offset: 0x954
	// Line 1009, Address: 0x234338, Func Offset: 0x978
	// Line 1011, Address: 0x234370, Func Offset: 0x9b0
	// Line 936, Address: 0x23439c, Func Offset: 0x9dc
	// Line 1011, Address: 0x2343a0, Func Offset: 0x9e0
	// Line 936, Address: 0x2343a4, Func Offset: 0x9e4
	// Line 1011, Address: 0x2343a8, Func Offset: 0x9e8
	// Line 936, Address: 0x2343ac, Func Offset: 0x9ec
	// Line 931, Address: 0x2343b0, Func Offset: 0x9f0
	// Line 1011, Address: 0x2343b4, Func Offset: 0x9f4
	// Line 934, Address: 0x2343c0, Func Offset: 0xa00
	// Line 1011, Address: 0x2343c4, Func Offset: 0xa04
	// Line 936, Address: 0x2343c8, Func Offset: 0xa08
	// Line 1011, Address: 0x2343cc, Func Offset: 0xa0c
	// Line 943, Address: 0x2343d4, Func Offset: 0xa14
	// Line 1011, Address: 0x2343d8, Func Offset: 0xa18
	// Line 949, Address: 0x2343e0, Func Offset: 0xa20
	// Line 1011, Address: 0x2343e4, Func Offset: 0xa24
	// Line 951, Address: 0x2343f4, Func Offset: 0xa34
	// Line 1011, Address: 0x234400, Func Offset: 0xa40
	// Line 961, Address: 0x234408, Func Offset: 0xa48
	// Line 1011, Address: 0x234418, Func Offset: 0xa58
	// Line 963, Address: 0x234420, Func Offset: 0xa60
	// Line 1011, Address: 0x234424, Func Offset: 0xa64
	// Line 978, Address: 0x23446c, Func Offset: 0xaac
	// Line 1011, Address: 0x234470, Func Offset: 0xab0
	// Line 978, Address: 0x2344c4, Func Offset: 0xb04
	// Line 1011, Address: 0x2344cc, Func Offset: 0xb0c
	// Line 978, Address: 0x2344d0, Func Offset: 0xb10
	// Line 1011, Address: 0x2344d4, Func Offset: 0xb14
	// Line 999, Address: 0x2345c4, Func Offset: 0xc04
	// Line 1003, Address: 0x2345d4, Func Offset: 0xc14
	// Line 1011, Address: 0x2345dc, Func Offset: 0xc1c
	// Line 892, Address: 0x2345ec, Func Offset: 0xc2c
	// Line 1011, Address: 0x2345f8, Func Offset: 0xc38
	// Line 895, Address: 0x234604, Func Offset: 0xc44
	// Line 1011, Address: 0x234608, Func Offset: 0xc48
	// Line 896, Address: 0x234624, Func Offset: 0xc64
	// Line 1011, Address: 0x234628, Func Offset: 0xc68
	// Line 896, Address: 0x234630, Func Offset: 0xc70
	// Line 1011, Address: 0x234638, Func Offset: 0xc78
	// Line 904, Address: 0x2346b0, Func Offset: 0xcf0
	// Line 1011, Address: 0x2346b4, Func Offset: 0xcf4
	// Line 905, Address: 0x2346cc, Func Offset: 0xd0c
	// Line 1011, Address: 0x2346d0, Func Offset: 0xd10
	// Line 906, Address: 0x2346e8, Func Offset: 0xd28
	// Line 1011, Address: 0x2346ec, Func Offset: 0xd2c
	// Line 911, Address: 0x234718, Func Offset: 0xd58
	// Line 1011, Address: 0x234720, Func Offset: 0xd60
	// Line 914, Address: 0x234724, Func Offset: 0xd64
	// Line 1011, Address: 0x234730, Func Offset: 0xd70
	// Line 917, Address: 0x23473c, Func Offset: 0xd7c
	// Line 1011, Address: 0x234744, Func Offset: 0xd84
	// Line 917, Address: 0x23474c, Func Offset: 0xd8c
	// Line 1011, Address: 0x234750, Func Offset: 0xd90
	// Line 917, Address: 0x234754, Func Offset: 0xd94
	// Line 1011, Address: 0x23475c, Func Offset: 0xd9c
	// Line 917, Address: 0x234760, Func Offset: 0xda0
	// Line 1011, Address: 0x234764, Func Offset: 0xda4
	// Line 918, Address: 0x234770, Func Offset: 0xdb0
	// Line 919, Address: 0x234778, Func Offset: 0xdb8
	// Line 1011, Address: 0x23477c, Func Offset: 0xdbc
	// Line 921, Address: 0x234784, Func Offset: 0xdc4
	// Line 925, Address: 0x234788, Func Offset: 0xdc8
	// Line 1011, Address: 0x234790, Func Offset: 0xdd0
	// Line 939, Address: 0x2347a4, Func Offset: 0xde4
	// Line 1011, Address: 0x2347ac, Func Offset: 0xdec
	// Line 945, Address: 0x2347b4, Func Offset: 0xdf4
	// Line 946, Address: 0x2347c0, Func Offset: 0xe00
	// Line 997, Address: 0x2347d0, Func Offset: 0xe10
	// Line 1011, Address: 0x2347e0, Func Offset: 0xe20
	// Line 1012, Address: 0x234808, Func Offset: 0xe48
	// Func End, Address: 0x234828, Func Offset: 0xe68
}

// BUpdate__9zNMEMindyFP5xVec3
// Start address: 0x234830
void zNMEMindy::BUpdate(xVec3* pos)
{
	// Line 733, Address: 0x234830, Func Offset: 0
	// Line 734, Address: 0x234834, Func Offset: 0x4
	// Line 733, Address: 0x234838, Func Offset: 0x8
	// Line 734, Address: 0x234840, Func Offset: 0x10
	// Line 735, Address: 0x234a18, Func Offset: 0x1e8
	// Line 734, Address: 0x234a28, Func Offset: 0x1f8
	// Line 735, Address: 0x234a30, Func Offset: 0x200
	// Line 734, Address: 0x234a70, Func Offset: 0x240
	// Line 735, Address: 0x234a74, Func Offset: 0x244
	// Line 734, Address: 0x234a78, Func Offset: 0x248
	// Line 735, Address: 0x234a7c, Func Offset: 0x24c
	// Line 734, Address: 0x234a98, Func Offset: 0x268
	// Line 735, Address: 0x234a9c, Func Offset: 0x26c
	// Line 734, Address: 0x234aa4, Func Offset: 0x274
	// Line 735, Address: 0x234aa8, Func Offset: 0x278
	// Line 734, Address: 0x234ad4, Func Offset: 0x2a4
	// Line 735, Address: 0x234ad8, Func Offset: 0x2a8
	// Line 734, Address: 0x234b08, Func Offset: 0x2d8
	// Line 735, Address: 0x234b10, Func Offset: 0x2e0
	// Line 734, Address: 0x234b3c, Func Offset: 0x30c
	// Line 735, Address: 0x234b40, Func Offset: 0x310
	// Line 734, Address: 0x234b70, Func Offset: 0x340
	// Line 735, Address: 0x234b78, Func Offset: 0x348
	// Line 734, Address: 0x234ba0, Func Offset: 0x370
	// Line 735, Address: 0x234ba4, Func Offset: 0x374
	// Line 734, Address: 0x234ba8, Func Offset: 0x378
	// Line 735, Address: 0x234bac, Func Offset: 0x37c
	// Line 734, Address: 0x234bb4, Func Offset: 0x384
	// Line 735, Address: 0x234bbc, Func Offset: 0x38c
	// Line 734, Address: 0x234c0c, Func Offset: 0x3dc
	// Line 735, Address: 0x234c14, Func Offset: 0x3e4
	// Line 734, Address: 0x234c38, Func Offset: 0x408
	// Line 735, Address: 0x234c3c, Func Offset: 0x40c
	// Line 734, Address: 0x234c40, Func Offset: 0x410
	// Line 735, Address: 0x234c44, Func Offset: 0x414
	// Line 734, Address: 0x234c64, Func Offset: 0x434
	// Line 735, Address: 0x234c68, Func Offset: 0x438
	// Line 734, Address: 0x234ca4, Func Offset: 0x474
	// Line 735, Address: 0x234ca8, Func Offset: 0x478
	// Line 734, Address: 0x234cb0, Func Offset: 0x480
	// Line 735, Address: 0x234cb4, Func Offset: 0x484
	// Line 734, Address: 0x234cec, Func Offset: 0x4bc
	// Line 735, Address: 0x234cf0, Func Offset: 0x4c0
	// Line 734, Address: 0x234cf4, Func Offset: 0x4c4
	// Line 735, Address: 0x234cf8, Func Offset: 0x4c8
	// Line 734, Address: 0x234d00, Func Offset: 0x4d0
	// Line 735, Address: 0x234d0c, Func Offset: 0x4dc
	// Line 734, Address: 0x234d24, Func Offset: 0x4f4
	// Line 735, Address: 0x234d28, Func Offset: 0x4f8
	// Line 734, Address: 0x234d6c, Func Offset: 0x53c
	// Line 735, Address: 0x234d74, Func Offset: 0x544
	// Line 736, Address: 0x234d84, Func Offset: 0x554
	// Func End, Address: 0x234d90, Func Offset: 0x560
}

// UpdateTVStatic__9zNMEMindyFf
// Start address: 0x234d90
void zNMEMindy::UpdateTVStatic(float32 dt)
{
	xModelInstance* tvStaticAtomic;
	// Line 597, Address: 0x234d90, Func Offset: 0
	// Line 601, Address: 0x234d94, Func Offset: 0x4
	// Line 597, Address: 0x234d98, Func Offset: 0x8
	// Line 601, Address: 0x234da0, Func Offset: 0x10
	// Line 604, Address: 0x234de4, Func Offset: 0x54
	// Line 608, Address: 0x234e14, Func Offset: 0x84
	// Line 609, Address: 0x234e1c, Func Offset: 0x8c
	// Line 611, Address: 0x234e24, Func Offset: 0x94
	// Line 615, Address: 0x234e54, Func Offset: 0xc4
	// Line 616, Address: 0x234e5c, Func Offset: 0xcc
	// Line 619, Address: 0x234e64, Func Offset: 0xd4
	// Line 621, Address: 0x234e68, Func Offset: 0xd8
	// Line 619, Address: 0x234e70, Func Offset: 0xe0
	// Line 621, Address: 0x234e74, Func Offset: 0xe4
	// Line 622, Address: 0x234e7c, Func Offset: 0xec
	// Line 623, Address: 0x234e84, Func Offset: 0xf4
	// Line 622, Address: 0x234e8c, Func Offset: 0xfc
	// Line 623, Address: 0x234e90, Func Offset: 0x100
	// Line 631, Address: 0x234e9c, Func Offset: 0x10c
	// Line 640, Address: 0x234ea4, Func Offset: 0x114
	// Line 642, Address: 0x234ea8, Func Offset: 0x118
	// Line 640, Address: 0x234eb4, Func Offset: 0x124
	// Line 642, Address: 0x234eb8, Func Offset: 0x128
	// Line 643, Address: 0x234ec0, Func Offset: 0x130
	// Line 644, Address: 0x234ec4, Func Offset: 0x134
	// Line 643, Address: 0x234ec8, Func Offset: 0x138
	// Line 644, Address: 0x234ecc, Func Offset: 0x13c
	// Line 643, Address: 0x234ed4, Func Offset: 0x144
	// Line 644, Address: 0x234ed8, Func Offset: 0x148
	// Line 651, Address: 0x234ee4, Func Offset: 0x154
	// Line 657, Address: 0x234eec, Func Offset: 0x15c
	// Line 661, Address: 0x234f10, Func Offset: 0x180
	// Line 668, Address: 0x234f1c, Func Offset: 0x18c
	// Line 669, Address: 0x234f2c, Func Offset: 0x19c
	// Line 671, Address: 0x234f44, Func Offset: 0x1b4
	// Line 674, Address: 0x234f68, Func Offset: 0x1d8
	// Line 676, Address: 0x234f74, Func Offset: 0x1e4
	// Line 677, Address: 0x234fa4, Func Offset: 0x214
	// Line 680, Address: 0x234fac, Func Offset: 0x21c
	// Line 684, Address: 0x234fd4, Func Offset: 0x244
	// Line 686, Address: 0x234ff0, Func Offset: 0x260
	// Line 687, Address: 0x235020, Func Offset: 0x290
	// Line 690, Address: 0x235028, Func Offset: 0x298
	// Line 696, Address: 0x235054, Func Offset: 0x2c4
	// Line 698, Address: 0x235080, Func Offset: 0x2f0
	// Line 701, Address: 0x235088, Func Offset: 0x2f8
	// Line 704, Address: 0x235098, Func Offset: 0x308
	// Line 708, Address: 0x2350bc, Func Offset: 0x32c
	// Line 709, Address: 0x2350c0, Func Offset: 0x330
	// Line 710, Address: 0x2350c8, Func Offset: 0x338
	// Line 712, Address: 0x2350cc, Func Offset: 0x33c
	// Line 715, Address: 0x2350d4, Func Offset: 0x344
	// Line 716, Address: 0x2350d8, Func Offset: 0x348
	// Line 719, Address: 0x2350e0, Func Offset: 0x350
	// Line 717, Address: 0x2350e4, Func Offset: 0x354
	// Line 719, Address: 0x2350e8, Func Offset: 0x358
	// Line 721, Address: 0x2350fc, Func Offset: 0x36c
	// Line 724, Address: 0x235104, Func Offset: 0x374
	// Line 725, Address: 0x235108, Func Offset: 0x378
	// Line 730, Address: 0x23510c, Func Offset: 0x37c
	// Line 626, Address: 0x235118, Func Offset: 0x388
	// Line 730, Address: 0x23511c, Func Offset: 0x38c
	// Func End, Address: 0x235150, Func Offset: 0x3c0
}

// CreateAnimTable__9zNMEMindyFP10xAnimTable
// Start address: 0x235150
xAnimTable* zNMEMindy::CreateAnimTable(xAnimTable* table)
{
	int8** names;
	// Line 440, Address: 0x235150, Func Offset: 0
	// Line 443, Address: 0x235168, Func Offset: 0x18
	// Line 454, Address: 0x235170, Func Offset: 0x20
	// Line 450, Address: 0x235174, Func Offset: 0x24
	// Line 454, Address: 0x235178, Func Offset: 0x28
	// Line 455, Address: 0x2351c0, Func Offset: 0x70
	// Line 456, Address: 0x235208, Func Offset: 0xb8
	// Line 457, Address: 0x235250, Func Offset: 0x100
	// Line 459, Address: 0x235298, Func Offset: 0x148
	// Line 460, Address: 0x2352e0, Func Offset: 0x190
	// Line 461, Address: 0x235328, Func Offset: 0x1d8
	// Line 462, Address: 0x235370, Func Offset: 0x220
	// Line 465, Address: 0x2353b8, Func Offset: 0x268
	// Line 467, Address: 0x2353c8, Func Offset: 0x278
	// Line 468, Address: 0x23540c, Func Offset: 0x2bc
	// Line 469, Address: 0x235458, Func Offset: 0x308
	// Line 470, Address: 0x23549c, Func Offset: 0x34c
	// Line 471, Address: 0x2354e0, Func Offset: 0x390
	// Line 472, Address: 0x235524, Func Offset: 0x3d4
	// Line 473, Address: 0x235568, Func Offset: 0x418
	// Line 478, Address: 0x235570, Func Offset: 0x420
	// Line 479, Address: 0x2355b0, Func Offset: 0x460
	// Line 480, Address: 0x2355f4, Func Offset: 0x4a4
	// Line 482, Address: 0x235638, Func Offset: 0x4e8
	// Line 484, Address: 0x235680, Func Offset: 0x530
	// Line 486, Address: 0x2356c4, Func Offset: 0x574
	// Line 487, Address: 0x235708, Func Offset: 0x5b8
	// Line 512, Address: 0x23574c, Func Offset: 0x5fc
	// Line 445, Address: 0x23575c, Func Offset: 0x60c
	// Line 512, Address: 0x235760, Func Offset: 0x610
	// Line 513, Address: 0x235770, Func Offset: 0x620
	// Func End, Address: 0x235784, Func Offset: 0x634
}

// CloseShellDone__9zNMEMindyFP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x235790
uint32 zNMEMindy::CloseShellDone(void* object)
{
	zNMEMindy* ent;
	xModelInstance* tvStaticAtomic;
	// Line 413, Address: 0x235790, Func Offset: 0
	// Line 424, Address: 0x235794, Func Offset: 0x4
	// Line 413, Address: 0x235798, Func Offset: 0x8
	// Line 424, Address: 0x23579c, Func Offset: 0xc
	// Line 413, Address: 0x2357a0, Func Offset: 0x10
	// Line 420, Address: 0x2357a4, Func Offset: 0x14
	// Line 418, Address: 0x2357a8, Func Offset: 0x18
	// Line 421, Address: 0x2357ac, Func Offset: 0x1c
	// Line 424, Address: 0x2357b0, Func Offset: 0x20
	// Line 425, Address: 0x2357bc, Func Offset: 0x2c
	// Line 427, Address: 0x2357c4, Func Offset: 0x34
	// Line 430, Address: 0x2357cc, Func Offset: 0x3c
	// Line 431, Address: 0x2357dc, Func Offset: 0x4c
	// Line 433, Address: 0x2357e4, Func Offset: 0x54
	// Line 436, Address: 0x2357e8, Func Offset: 0x58
	// Line 435, Address: 0x2357ec, Func Offset: 0x5c
	// Line 436, Address: 0x2357f0, Func Offset: 0x60
	// Func End, Address: 0x2357fc, Func Offset: 0x6c
}

// CloseShellCheck__9zNMEMindyFP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x235800
uint32 zNMEMindy::CloseShellCheck(void* object)
{
	// Line 409, Address: 0x235800, Func Offset: 0
	// Line 410, Address: 0x235808, Func Offset: 0x8
	// Func End, Address: 0x235810, Func Offset: 0x10
}

// OpenShellDone__9zNMEMindyFP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x235810
uint32 zNMEMindy::OpenShellDone(void* object)
{
	// Line 401, Address: 0x235810, Func Offset: 0
	// Line 403, Address: 0x235818, Func Offset: 0x8
	// Func End, Address: 0x235820, Func Offset: 0x10
}

// OpenShellCheck__9zNMEMindyFP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x235820
uint32 zNMEMindy::OpenShellCheck(void* object)
{
	// Line 394, Address: 0x235820, Func Offset: 0
	// Line 395, Address: 0x235828, Func Offset: 0x8
	// Func End, Address: 0x235830, Func Offset: 0x10
}

// SpatulaGrabCheck__9zNMEMindyFP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x235830
uint32 zNMEMindy::SpatulaGrabCheck(void* object)
{
	// Line 388, Address: 0x235830, Func Offset: 0
	// Func End, Address: 0x235838, Func Offset: 0x8
}

// SpatulaGrabStopCB__9zNMEMindyFP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x235840
uint32 zNMEMindy::SpatulaGrabStopCB(xAnimSingle* anim, void* object)
{
	// Line 353, Address: 0x235840, Func Offset: 0
	// Line 355, Address: 0x235844, Func Offset: 0x4
	// Line 353, Address: 0x235848, Func Offset: 0x8
	// Line 355, Address: 0x235850, Func Offset: 0x10
	// Line 381, Address: 0x23585c, Func Offset: 0x1c
	// Line 364, Address: 0x235898, Func Offset: 0x58
	// Line 381, Address: 0x23589c, Func Offset: 0x5c
	// Line 365, Address: 0x2358a8, Func Offset: 0x68
	// Line 366, Address: 0x2358ac, Func Offset: 0x6c
	// Line 381, Address: 0x2358b0, Func Offset: 0x70
	// Line 368, Address: 0x2358c0, Func Offset: 0x80
	// Line 381, Address: 0x2358c4, Func Offset: 0x84
	// Line 370, Address: 0x2358cc, Func Offset: 0x8c
	// Line 381, Address: 0x2358d4, Func Offset: 0x94
	// Line 378, Address: 0x2358ec, Func Offset: 0xac
	// Line 381, Address: 0x2358f0, Func Offset: 0xb0
	// Line 382, Address: 0x235900, Func Offset: 0xc0
	// Func End, Address: 0x235910, Func Offset: 0xd0
}

// SpatulaGrabCB__9zNMEMindyFP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x235910
uint32 zNMEMindy::SpatulaGrabCB(void* object)
{
	// Line 319, Address: 0x235910, Func Offset: 0
	// Line 336, Address: 0x235914, Func Offset: 0x4
	// Line 319, Address: 0x235918, Func Offset: 0x8
	// Line 336, Address: 0x23591c, Func Offset: 0xc
	// Line 339, Address: 0x235924, Func Offset: 0x14
	// Line 341, Address: 0x23592c, Func Offset: 0x1c
	// Line 349, Address: 0x235940, Func Offset: 0x30
	// Line 346, Address: 0x235954, Func Offset: 0x44
	// Line 349, Address: 0x235960, Func Offset: 0x50
	// Line 350, Address: 0x235970, Func Offset: 0x60
	// Func End, Address: 0x23597c, Func Offset: 0x6c
}

// Destroy__9zNMEMindyFv
// Start address: 0x235980
void zNMEMindy::Destroy()
{
	// Line 315, Address: 0x235980, Func Offset: 0
	// Func End, Address: 0x235990, Func Offset: 0x10
}

// Reset__9zNMEMindyFv
// Start address: 0x235990
void zNMEMindy::Reset()
{
	// Line 239, Address: 0x235990, Func Offset: 0
	// Line 240, Address: 0x2359a0, Func Offset: 0x10
	// Line 242, Address: 0x235c1c, Func Offset: 0x28c
	// Line 243, Address: 0x235c68, Func Offset: 0x2d8
	// Line 244, Address: 0x235c70, Func Offset: 0x2e0
	// Line 245, Address: 0x235c74, Func Offset: 0x2e4
	// Func End, Address: 0x235c88, Func Offset: 0x2f8
}

// Setup__9zNMEMindyFv
// Start address: 0x235c90
void zNMEMindy::Setup()
{
	// Line 180, Address: 0x235c90, Func Offset: 0
	// Line 194, Address: 0x235c94, Func Offset: 0x4
	// Line 180, Address: 0x235c98, Func Offset: 0x8
	// Line 194, Address: 0x235c9c, Func Offset: 0xc
	// Line 180, Address: 0x235ca0, Func Offset: 0x10
	// Line 200, Address: 0x235ca4, Func Offset: 0x14
	// Line 183, Address: 0x235ca8, Func Offset: 0x18
	// Line 200, Address: 0x235cac, Func Offset: 0x1c
	// Line 213, Address: 0x235cb0, Func Offset: 0x20
	// Line 195, Address: 0x235cb4, Func Offset: 0x24
	// Line 213, Address: 0x235cb8, Func Offset: 0x28
	// Line 204, Address: 0x235cbc, Func Offset: 0x2c
	// Line 214, Address: 0x235cc0, Func Offset: 0x30
	// Line 217, Address: 0x235cc4, Func Offset: 0x34
	// Line 214, Address: 0x235cc8, Func Offset: 0x38
	// Line 218, Address: 0x235cd0, Func Offset: 0x40
	// Line 183, Address: 0x235cd4, Func Offset: 0x44
	// Line 184, Address: 0x235cd8, Func Offset: 0x48
	// Line 189, Address: 0x235cdc, Func Offset: 0x4c
	// Line 190, Address: 0x235ce8, Func Offset: 0x58
	// Line 191, Address: 0x235cec, Func Offset: 0x5c
	// Line 192, Address: 0x235cf0, Func Offset: 0x60
	// Line 193, Address: 0x235cf4, Func Offset: 0x64
	// Line 194, Address: 0x235cf8, Func Offset: 0x68
	// Line 195, Address: 0x235cfc, Func Offset: 0x6c
	// Line 197, Address: 0x235d00, Func Offset: 0x70
	// Line 198, Address: 0x235d04, Func Offset: 0x74
	// Line 200, Address: 0x235d08, Func Offset: 0x78
	// Line 201, Address: 0x235d0c, Func Offset: 0x7c
	// Line 203, Address: 0x235d10, Func Offset: 0x80
	// Line 204, Address: 0x235d1c, Func Offset: 0x8c
	// Line 205, Address: 0x235d20, Func Offset: 0x90
	// Line 207, Address: 0x235d24, Func Offset: 0x94
	// Line 208, Address: 0x235d28, Func Offset: 0x98
	// Line 210, Address: 0x235d2c, Func Offset: 0x9c
	// Line 211, Address: 0x235d30, Func Offset: 0xa0
	// Line 213, Address: 0x235d34, Func Offset: 0xa4
	// Line 214, Address: 0x235d38, Func Offset: 0xa8
	// Line 216, Address: 0x235d3c, Func Offset: 0xac
	// Line 217, Address: 0x235d40, Func Offset: 0xb0
	// Line 218, Address: 0x235d44, Func Offset: 0xb4
	// Line 219, Address: 0x235d48, Func Offset: 0xb8
	// Line 222, Address: 0x235d54, Func Offset: 0xc4
	// Line 223, Address: 0x235d64, Func Offset: 0xd4
	// Line 224, Address: 0x235d70, Func Offset: 0xe0
	// Line 226, Address: 0x235d78, Func Offset: 0xe8
	// Line 227, Address: 0x235d88, Func Offset: 0xf8
	// Line 228, Address: 0x235d98, Func Offset: 0x108
	// Line 236, Address: 0x235da8, Func Offset: 0x118
	// Func End, Address: 0x235db8, Func Offset: 0x128
}

// Init__9zNMEMindyFP9xEntAsset
// Start address: 0x235dc0
void zNMEMindy::Init(xEntAsset* asset)
{
	// Line 159, Address: 0x235dc0, Func Offset: 0
	// Line 160, Address: 0x235dd4, Func Offset: 0x14
	// Line 167, Address: 0x235de8, Func Offset: 0x28
	// Line 177, Address: 0x235df4, Func Offset: 0x34
	// Func End, Address: 0x235e08, Func Offset: 0x48
}

// PostSetup__9zNMEMindyFv
// Start address: 0x235e10
void zNMEMindy::PostSetup()
{
	// Line 155, Address: 0x235e10, Func Offset: 0
	// Line 156, Address: 0x235e94, Func Offset: 0x84
	// Func End, Address: 0x235e9c, Func Offset: 0x8c
}

