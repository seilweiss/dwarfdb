



void set_buffer_to_layer(RENDERTYPE eType);
uint8 render_random_v(uint32 uLayer);
uint8 render_special_strobe(uint32 uLayer);
uint8 render_strobe_effect(uint32 uLayer);
uint8 render_offset_rotate_ccw(uint32 uLayer);
uint8 render_rotate_ccw(uint32 uLayer);
uint8 render_half_ccw(uint32 uLayer);
uint8 render_counter_clockwise(uint32 uLayer);
uint8 render_variable_right(uint32 uLayer);
uint8 render_variable_top(uint32 uLayer);
uint8 render_one_to_one(uint32 uLayer, RENDERTYPE eType);
void render();
void update(float32 dt);
uint8 is(uint32 id);
uint32 type();
void destroy();
void load(xBase& data, xDynAsset& asset);

// set_buffer_to_layer__Q24xhud12image_widgetFQ34xhud12image_widget10RENDERTYPE
// Start address: 0x3c81a0
void image_widget::set_buffer_to_layer(RENDERTYPE eType)
{
	uint16* pIndex;
	// Line 1050, Address: 0x3c81a0, Func Offset: 0
	// Line 1051, Address: 0x3c81a4, Func Offset: 0x4
	// Line 1050, Address: 0x3c81a8, Func Offset: 0x8
	// Line 1051, Address: 0x3c81b0, Func Offset: 0x10
	// Line 1065, Address: 0x3c81d4, Func Offset: 0x34
	// Line 1066, Address: 0x3c81dc, Func Offset: 0x3c
	// Line 1067, Address: 0x3c81e8, Func Offset: 0x48
	// Line 1068, Address: 0x3c81f4, Func Offset: 0x54
	// Line 1069, Address: 0x3c8200, Func Offset: 0x60
	// Line 1070, Address: 0x3c820c, Func Offset: 0x6c
	// Line 1072, Address: 0x3c8218, Func Offset: 0x78
	// Line 1073, Address: 0x3c8224, Func Offset: 0x84
	// Line 1075, Address: 0x3c822c, Func Offset: 0x8c
	// Line 1078, Address: 0x3c8234, Func Offset: 0x94
	// Line 1079, Address: 0x3c8254, Func Offset: 0xb4
	// Line 1080, Address: 0x3c8274, Func Offset: 0xd4
	// Line 1081, Address: 0x3c8294, Func Offset: 0xf4
	// Line 1082, Address: 0x3c82b4, Func Offset: 0x114
	// Line 1083, Address: 0x3c82d4, Func Offset: 0x134
	// Line 1084, Address: 0x3c82f4, Func Offset: 0x154
	// Line 1085, Address: 0x3c8314, Func Offset: 0x174
	// Line 1087, Address: 0x3c8334, Func Offset: 0x194
	// Line 1088, Address: 0x3c8340, Func Offset: 0x1a0
	// Line 1089, Address: 0x3c8348, Func Offset: 0x1a8
	// Line 1092, Address: 0x3c8350, Func Offset: 0x1b0
	// Line 1093, Address: 0x3c8370, Func Offset: 0x1d0
	// Line 1094, Address: 0x3c8390, Func Offset: 0x1f0
	// Line 1095, Address: 0x3c83b0, Func Offset: 0x210
	// Line 1096, Address: 0x3c83d0, Func Offset: 0x230
	// Line 1097, Address: 0x3c83f4, Func Offset: 0x254
	// Line 1098, Address: 0x3c8418, Func Offset: 0x278
	// Line 1099, Address: 0x3c843c, Func Offset: 0x29c
	// Line 1101, Address: 0x3c8460, Func Offset: 0x2c0
	// Line 1102, Address: 0x3c846c, Func Offset: 0x2cc
	// Line 1105, Address: 0x3c8478, Func Offset: 0x2d8
	// Func End, Address: 0x3c8480, Func Offset: 0x2e0
}

// render_random_v__Q24xhud12image_widgetFUi
// Start address: 0x3c8480
uint8 image_widget::render_random_v(uint32 uLayer)
{
	float32 fTopX;
	float32 fTopY;
	float32 fWidth;
	float32 fDeltaV;
	float32 fTopU;
	float32 fBotU;
	float32 fBotV;
	// Line 823, Address: 0x3c8480, Func Offset: 0
	// Line 826, Address: 0x3c84b8, Func Offset: 0x38
	// Line 828, Address: 0x3c84e0, Func Offset: 0x60
	// Line 829, Address: 0x3c8510, Func Offset: 0x90
	// Line 827, Address: 0x3c8518, Func Offset: 0x98
	// Line 832, Address: 0x3c8524, Func Offset: 0xa4
	// Line 833, Address: 0x3c8558, Func Offset: 0xd8
	// Line 834, Address: 0x3c858c, Func Offset: 0x10c
	// Line 839, Address: 0x3c8590, Func Offset: 0x110
	// Line 834, Address: 0x3c8594, Func Offset: 0x114
	// Line 833, Address: 0x3c8598, Func Offset: 0x118
	// Line 835, Address: 0x3c859c, Func Offset: 0x11c
	// Line 834, Address: 0x3c85b0, Func Offset: 0x130
	// Line 837, Address: 0x3c85b4, Func Offset: 0x134
	// Line 839, Address: 0x3c85b8, Func Offset: 0x138
	// Line 840, Address: 0x3c85bc, Func Offset: 0x13c
	// Line 835, Address: 0x3c85c0, Func Offset: 0x140
	// Line 837, Address: 0x3c85c4, Func Offset: 0x144
	// Line 835, Address: 0x3c85c8, Func Offset: 0x148
	// Line 833, Address: 0x3c85cc, Func Offset: 0x14c
	// Line 837, Address: 0x3c85d0, Func Offset: 0x150
	// Line 834, Address: 0x3c85d8, Func Offset: 0x158
	// Line 837, Address: 0x3c85dc, Func Offset: 0x15c
	// Line 840, Address: 0x3c85e4, Func Offset: 0x164
	// Line 841, Address: 0x3c85ec, Func Offset: 0x16c
	// Line 840, Address: 0x3c85f0, Func Offset: 0x170
	// Line 844, Address: 0x3c85f4, Func Offset: 0x174
	// Line 840, Address: 0x3c85f8, Func Offset: 0x178
	// Line 844, Address: 0x3c85fc, Func Offset: 0x17c
	// Line 845, Address: 0x3c8604, Func Offset: 0x184
	// Line 841, Address: 0x3c860c, Func Offset: 0x18c
	// Line 844, Address: 0x3c8614, Func Offset: 0x194
	// Line 840, Address: 0x3c8618, Func Offset: 0x198
	// Line 844, Address: 0x3c861c, Func Offset: 0x19c
	// Line 840, Address: 0x3c8620, Func Offset: 0x1a0
	// Line 844, Address: 0x3c8624, Func Offset: 0x1a4
	// Line 840, Address: 0x3c862c, Func Offset: 0x1ac
	// Line 844, Address: 0x3c8630, Func Offset: 0x1b0
	// Line 842, Address: 0x3c8654, Func Offset: 0x1d4
	// Line 844, Address: 0x3c8658, Func Offset: 0x1d8
	// Line 845, Address: 0x3c8670, Func Offset: 0x1f0
	// Line 846, Address: 0x3c87e0, Func Offset: 0x360
	// Line 847, Address: 0x3c87e4, Func Offset: 0x364
	// Func End, Address: 0x3c8818, Func Offset: 0x398
}

// render_special_strobe__Q24xhud12image_widgetFUi
// Start address: 0x3c8820
uint8 image_widget::render_special_strobe(uint32 uLayer)
{
	float32 fBottomY;
	float32 fTopY;
	float32 v0;
	float32 v1;
	float32 u0;
	float32 u1;
	float32 fTopX;
	// Line 776, Address: 0x3c8820, Func Offset: 0
	// Line 779, Address: 0x3c8824, Func Offset: 0x4
	// Line 781, Address: 0x3c884c, Func Offset: 0x2c
	// Line 789, Address: 0x3c8874, Func Offset: 0x54
	// Line 781, Address: 0x3c8880, Func Offset: 0x60
	// Line 789, Address: 0x3c8884, Func Offset: 0x64
	// Line 791, Address: 0x3c88a8, Func Offset: 0x88
	// Line 804, Address: 0x3c88bc, Func Offset: 0x9c
	// Line 808, Address: 0x3c88c0, Func Offset: 0xa0
	// Line 805, Address: 0x3c88c4, Func Offset: 0xa4
	// Line 807, Address: 0x3c88c8, Func Offset: 0xa8
	// Line 808, Address: 0x3c88cc, Func Offset: 0xac
	// Line 813, Address: 0x3c8904, Func Offset: 0xe4
	// Line 810, Address: 0x3c890c, Func Offset: 0xec
	// Line 813, Address: 0x3c8910, Func Offset: 0xf0
	// Line 817, Address: 0x3c8944, Func Offset: 0x124
	// Line 818, Address: 0x3c894c, Func Offset: 0x12c
	// Line 817, Address: 0x3c8950, Func Offset: 0x130
	// Line 818, Address: 0x3c8954, Func Offset: 0x134
	// Line 817, Address: 0x3c8958, Func Offset: 0x138
	// Line 813, Address: 0x3c8960, Func Offset: 0x140
	// Line 817, Address: 0x3c8964, Func Offset: 0x144
	// Line 818, Address: 0x3c89c0, Func Offset: 0x1a0
	// Line 819, Address: 0x3c8b30, Func Offset: 0x310
	// Line 780, Address: 0x3c8b38, Func Offset: 0x318
	// Line 819, Address: 0x3c8b44, Func Offset: 0x324
	// Line 781, Address: 0x3c8b48, Func Offset: 0x328
	// Line 819, Address: 0x3c8b50, Func Offset: 0x330
	// Line 782, Address: 0x3c8b58, Func Offset: 0x338
	// Line 795, Address: 0x3c8b60, Func Offset: 0x340
	// Line 819, Address: 0x3c8b6c, Func Offset: 0x34c
	// Line 820, Address: 0x3c8b7c, Func Offset: 0x35c
	// Func End, Address: 0x3c8b84, Func Offset: 0x364
}

// render_strobe_effect__Q24xhud12image_widgetFUi
// Start address: 0x3c8b90
uint8 image_widget::render_strobe_effect(uint32 uLayer)
{
	float32 fBottomY;
	float32 fTopY;
	float32 fRealTopY;
	float32 vRange;
	float32 v0;
	float32 v1;
	float32 u0;
	float32 u1;
	float32 fTopX;
	// Line 723, Address: 0x3c8b90, Func Offset: 0
	// Line 726, Address: 0x3c8b94, Func Offset: 0x4
	// Line 728, Address: 0x3c8bbc, Func Offset: 0x2c
	// Line 730, Address: 0x3c8bd8, Func Offset: 0x48
	// Line 737, Address: 0x3c8bf4, Func Offset: 0x64
	// Line 730, Address: 0x3c8bfc, Func Offset: 0x6c
	// Line 737, Address: 0x3c8c00, Func Offset: 0x70
	// Line 739, Address: 0x3c8c24, Func Offset: 0x94
	// Line 740, Address: 0x3c8c30, Func Offset: 0xa0
	// Line 742, Address: 0x3c8c34, Func Offset: 0xa4
	// Line 744, Address: 0x3c8c50, Func Offset: 0xc0
	// Line 748, Address: 0x3c8c5c, Func Offset: 0xcc
	// Line 750, Address: 0x3c8c68, Func Offset: 0xd8
	// Line 761, Address: 0x3c8c70, Func Offset: 0xe0
	// Line 750, Address: 0x3c8c74, Func Offset: 0xe4
	// Line 756, Address: 0x3c8c78, Func Offset: 0xe8
	// Line 757, Address: 0x3c8c7c, Func Offset: 0xec
	// Line 756, Address: 0x3c8c84, Func Offset: 0xf4
	// Line 757, Address: 0x3c8c88, Func Offset: 0xf8
	// Line 758, Address: 0x3c8c90, Func Offset: 0x100
	// Line 760, Address: 0x3c8c98, Func Offset: 0x108
	// Line 761, Address: 0x3c8c9c, Func Offset: 0x10c
	// Line 766, Address: 0x3c8cd4, Func Offset: 0x144
	// Line 763, Address: 0x3c8cdc, Func Offset: 0x14c
	// Line 766, Address: 0x3c8ce0, Func Offset: 0x150
	// Line 770, Address: 0x3c8d10, Func Offset: 0x180
	// Line 771, Address: 0x3c8d18, Func Offset: 0x188
	// Line 770, Address: 0x3c8d1c, Func Offset: 0x18c
	// Line 771, Address: 0x3c8d24, Func Offset: 0x194
	// Line 766, Address: 0x3c8d28, Func Offset: 0x198
	// Line 770, Address: 0x3c8d2c, Func Offset: 0x19c
	// Line 766, Address: 0x3c8d40, Func Offset: 0x1b0
	// Line 770, Address: 0x3c8d44, Func Offset: 0x1b4
	// Line 771, Address: 0x3c8d90, Func Offset: 0x200
	// Line 772, Address: 0x3c8f00, Func Offset: 0x370
	// Line 727, Address: 0x3c8f08, Func Offset: 0x378
	// Line 772, Address: 0x3c8f14, Func Offset: 0x384
	// Line 728, Address: 0x3c8f18, Func Offset: 0x388
	// Line 772, Address: 0x3c8f20, Func Offset: 0x390
	// Line 729, Address: 0x3c8f28, Func Offset: 0x398
	// Line 731, Address: 0x3c8f30, Func Offset: 0x3a0
	// Line 747, Address: 0x3c8f38, Func Offset: 0x3a8
	// Line 773, Address: 0x3c8f40, Func Offset: 0x3b0
	// Func End, Address: 0x3c8f48, Func Offset: 0x3b8
}

// render_offset_rotate_ccw__Q24xhud12image_widgetFUi
// Start address: 0x3c8f50
uint8 image_widget::render_offset_rotate_ccw(uint32 uLayer)
{
	float32 fRadians;
	float32 fTopU;
	float32 fTopV;
	float32 fBotU;
	float32 fBotV;
	float32 fTopX;
	float32 fTopY;
	float32 fBotX;
	float32 fBotY;
	float32 fCenterX;
	float32 fCenterY;
	xVec2 toTopLeft;
	xVec2 toBotLeft;
	xVec2 toTopRight;
	xVec2 toBotRight;
	float32 fTemp10;
	float32 fTemp20;
	// Line 663, Address: 0x3c8f50, Func Offset: 0
	// Line 666, Address: 0x3c8f94, Func Offset: 0x44
	// Line 668, Address: 0x3c8fbc, Func Offset: 0x6c
	// Line 669, Address: 0x3c8fec, Func Offset: 0x9c
	// Line 667, Address: 0x3c8ff4, Func Offset: 0xa4
	// Line 672, Address: 0x3c9000, Func Offset: 0xb0
	// Line 678, Address: 0x3c9010, Func Offset: 0xc0
	// Line 672, Address: 0x3c9014, Func Offset: 0xc4
	// Line 673, Address: 0x3c9018, Func Offset: 0xc8
	// Line 674, Address: 0x3c901c, Func Offset: 0xcc
	// Line 675, Address: 0x3c9020, Func Offset: 0xd0
	// Line 676, Address: 0x3c9024, Func Offset: 0xd4
	// Line 672, Address: 0x3c9028, Func Offset: 0xd8
	// Line 678, Address: 0x3c902c, Func Offset: 0xdc
	// Line 679, Address: 0x3c9060, Func Offset: 0x110
	// Line 681, Address: 0x3c9098, Func Offset: 0x148
	// Line 687, Address: 0x3c90a0, Func Offset: 0x150
	// Line 681, Address: 0x3c90a4, Func Offset: 0x154
	// Line 682, Address: 0x3c90ac, Func Offset: 0x15c
	// Line 679, Address: 0x3c90b4, Func Offset: 0x164
	// Line 684, Address: 0x3c90b8, Func Offset: 0x168
	// Line 681, Address: 0x3c90bc, Func Offset: 0x16c
	// Line 682, Address: 0x3c90c4, Func Offset: 0x174
	// Line 684, Address: 0x3c90c8, Func Offset: 0x178
	// Line 682, Address: 0x3c90d0, Func Offset: 0x180
	// Line 684, Address: 0x3c90d4, Func Offset: 0x184
	// Line 687, Address: 0x3c90d8, Func Offset: 0x188
	// Line 682, Address: 0x3c90dc, Func Offset: 0x18c
	// Line 685, Address: 0x3c90e0, Func Offset: 0x190
	// Line 687, Address: 0x3c90e4, Func Offset: 0x194
	// Line 688, Address: 0x3c9114, Func Offset: 0x1c4
	// Line 687, Address: 0x3c9120, Func Offset: 0x1d0
	// Line 688, Address: 0x3c9138, Func Offset: 0x1e8
	// Line 689, Address: 0x3c9168, Func Offset: 0x218
	// Line 688, Address: 0x3c9170, Func Offset: 0x220
	// Line 689, Address: 0x3c9188, Func Offset: 0x238
	// Line 690, Address: 0x3c91b8, Func Offset: 0x268
	// Line 689, Address: 0x3c91c0, Func Offset: 0x270
	// Line 690, Address: 0x3c91d8, Func Offset: 0x288
	// Line 691, Address: 0x3c9204, Func Offset: 0x2b4
	// Line 690, Address: 0x3c9208, Func Offset: 0x2b8
	// Line 691, Address: 0x3c9220, Func Offset: 0x2d0
	// Line 692, Address: 0x3c9228, Func Offset: 0x2d8
	// Line 712, Address: 0x3c9238, Func Offset: 0x2e8
	// Line 692, Address: 0x3c923c, Func Offset: 0x2ec
	// Line 714, Address: 0x3c9240, Func Offset: 0x2f0
	// Line 718, Address: 0x3c9244, Func Offset: 0x2f4
	// Line 714, Address: 0x3c9248, Func Offset: 0x2f8
	// Line 718, Address: 0x3c924c, Func Offset: 0x2fc
	// Line 697, Address: 0x3c9250, Func Offset: 0x300
	// Line 718, Address: 0x3c9258, Func Offset: 0x308
	// Line 694, Address: 0x3c925c, Func Offset: 0x30c
	// Line 714, Address: 0x3c9260, Func Offset: 0x310
	// Line 694, Address: 0x3c9264, Func Offset: 0x314
	// Line 714, Address: 0x3c9268, Func Offset: 0x318
	// Line 695, Address: 0x3c926c, Func Offset: 0x31c
	// Line 714, Address: 0x3c9270, Func Offset: 0x320
	// Line 695, Address: 0x3c9278, Func Offset: 0x328
	// Line 696, Address: 0x3c927c, Func Offset: 0x32c
	// Line 699, Address: 0x3c9280, Func Offset: 0x330
	// Line 700, Address: 0x3c9288, Func Offset: 0x338
	// Line 702, Address: 0x3c9290, Func Offset: 0x340
	// Line 716, Address: 0x3c9294, Func Offset: 0x344
	// Line 702, Address: 0x3c9298, Func Offset: 0x348
	// Line 716, Address: 0x3c92a0, Func Offset: 0x350
	// Line 701, Address: 0x3c92a4, Func Offset: 0x354
	// Line 705, Address: 0x3c92a8, Func Offset: 0x358
	// Line 706, Address: 0x3c92b0, Func Offset: 0x360
	// Line 707, Address: 0x3c92b8, Func Offset: 0x368
	// Line 715, Address: 0x3c92c0, Func Offset: 0x370
	// Line 707, Address: 0x3c92c4, Func Offset: 0x374
	// Line 710, Address: 0x3c92c8, Func Offset: 0x378
	// Line 711, Address: 0x3c92d0, Func Offset: 0x380
	// Line 714, Address: 0x3c92d8, Func Offset: 0x388
	// Line 697, Address: 0x3c92e8, Func Offset: 0x398
	// Line 706, Address: 0x3c92ec, Func Offset: 0x39c
	// Line 714, Address: 0x3c92f0, Func Offset: 0x3a0
	// Line 718, Address: 0x3c9308, Func Offset: 0x3b8
	// Line 715, Address: 0x3c930c, Func Offset: 0x3bc
	// Line 711, Address: 0x3c9318, Func Offset: 0x3c8
	// Line 715, Address: 0x3c931c, Func Offset: 0x3cc
	// Line 712, Address: 0x3c9334, Func Offset: 0x3e4
	// Line 717, Address: 0x3c9338, Func Offset: 0x3e8
	// Line 715, Address: 0x3c933c, Func Offset: 0x3ec
	// Line 717, Address: 0x3c9358, Func Offset: 0x408
	// Line 716, Address: 0x3c935c, Func Offset: 0x40c
	// Line 717, Address: 0x3c9398, Func Offset: 0x448
	// Line 718, Address: 0x3c93d0, Func Offset: 0x480
	// Line 719, Address: 0x3c9538, Func Offset: 0x5e8
	// Line 720, Address: 0x3c953c, Func Offset: 0x5ec
	// Func End, Address: 0x3c957c, Func Offset: 0x62c
}

// render_rotate_ccw__Q24xhud12image_widgetFUi
// Start address: 0x3c9580
uint8 image_widget::render_rotate_ccw(uint32 uLayer)
{
	float32 fRadians;
	float32 fTopU;
	float32 fTopV;
	float32 fBotU;
	float32 fBotV;
	float32 fTopX;
	float32 fTopY;
	float32 fCenterX;
	float32 fCenterY;
	float32 fBotX;
	float32 fBotY;
	xVec2 toTopLeft;
	xVec2 toBotLeft;
	xVec2 toTopRight;
	xVec2 toBotRight;
	float32 fTemp10;
	float32 fTemp20;
	// Line 603, Address: 0x3c9580, Func Offset: 0
	// Line 606, Address: 0x3c95c0, Func Offset: 0x40
	// Line 608, Address: 0x3c95ec, Func Offset: 0x6c
	// Line 609, Address: 0x3c961c, Func Offset: 0x9c
	// Line 607, Address: 0x3c9624, Func Offset: 0xa4
	// Line 612, Address: 0x3c9630, Func Offset: 0xb0
	// Line 618, Address: 0x3c963c, Func Offset: 0xbc
	// Line 612, Address: 0x3c9640, Func Offset: 0xc0
	// Line 613, Address: 0x3c9644, Func Offset: 0xc4
	// Line 614, Address: 0x3c9648, Func Offset: 0xc8
	// Line 615, Address: 0x3c964c, Func Offset: 0xcc
	// Line 616, Address: 0x3c9650, Func Offset: 0xd0
	// Line 612, Address: 0x3c9654, Func Offset: 0xd4
	// Line 618, Address: 0x3c9658, Func Offset: 0xd8
	// Line 619, Address: 0x3c968c, Func Offset: 0x10c
	// Line 621, Address: 0x3c96c4, Func Offset: 0x144
	// Line 624, Address: 0x3c96cc, Func Offset: 0x14c
	// Line 627, Address: 0x3c96d4, Func Offset: 0x154
	// Line 624, Address: 0x3c96d8, Func Offset: 0x158
	// Line 625, Address: 0x3c96dc, Func Offset: 0x15c
	// Line 622, Address: 0x3c96e0, Func Offset: 0x160
	// Line 619, Address: 0x3c96e4, Func Offset: 0x164
	// Line 624, Address: 0x3c96e8, Func Offset: 0x168
	// Line 625, Address: 0x3c96ec, Func Offset: 0x16c
	// Line 622, Address: 0x3c96f0, Func Offset: 0x170
	// Line 624, Address: 0x3c96f4, Func Offset: 0x174
	// Line 625, Address: 0x3c96f8, Func Offset: 0x178
	// Line 624, Address: 0x3c96fc, Func Offset: 0x17c
	// Line 625, Address: 0x3c9700, Func Offset: 0x180
	// Line 627, Address: 0x3c9704, Func Offset: 0x184
	// Line 621, Address: 0x3c9708, Func Offset: 0x188
	// Line 627, Address: 0x3c970c, Func Offset: 0x18c
	// Line 628, Address: 0x3c973c, Func Offset: 0x1bc
	// Line 627, Address: 0x3c9748, Func Offset: 0x1c8
	// Line 628, Address: 0x3c9760, Func Offset: 0x1e0
	// Line 629, Address: 0x3c9790, Func Offset: 0x210
	// Line 628, Address: 0x3c9798, Func Offset: 0x218
	// Line 629, Address: 0x3c97b0, Func Offset: 0x230
	// Line 630, Address: 0x3c97e0, Func Offset: 0x260
	// Line 629, Address: 0x3c97e8, Func Offset: 0x268
	// Line 630, Address: 0x3c9800, Func Offset: 0x280
	// Line 631, Address: 0x3c982c, Func Offset: 0x2ac
	// Line 630, Address: 0x3c9830, Func Offset: 0x2b0
	// Line 631, Address: 0x3c9848, Func Offset: 0x2c8
	// Line 632, Address: 0x3c9850, Func Offset: 0x2d0
	// Line 658, Address: 0x3c9860, Func Offset: 0x2e0
	// Line 632, Address: 0x3c9864, Func Offset: 0x2e4
	// Line 654, Address: 0x3c9868, Func Offset: 0x2e8
	// Line 658, Address: 0x3c986c, Func Offset: 0x2ec
	// Line 654, Address: 0x3c9870, Func Offset: 0x2f0
	// Line 637, Address: 0x3c9874, Func Offset: 0x2f4
	// Line 658, Address: 0x3c9878, Func Offset: 0x2f8
	// Line 634, Address: 0x3c9884, Func Offset: 0x304
	// Line 654, Address: 0x3c988c, Func Offset: 0x30c
	// Line 635, Address: 0x3c9890, Func Offset: 0x310
	// Line 654, Address: 0x3c9894, Func Offset: 0x314
	// Line 635, Address: 0x3c9898, Func Offset: 0x318
	// Line 654, Address: 0x3c989c, Func Offset: 0x31c
	// Line 637, Address: 0x3c98a0, Func Offset: 0x320
	// Line 654, Address: 0x3c98a4, Func Offset: 0x324
	// Line 637, Address: 0x3c98b0, Func Offset: 0x330
	// Line 639, Address: 0x3c98b4, Func Offset: 0x334
	// Line 654, Address: 0x3c98b8, Func Offset: 0x338
	// Line 655, Address: 0x3c98c0, Func Offset: 0x340
	// Line 642, Address: 0x3c98c4, Func Offset: 0x344
	// Line 655, Address: 0x3c98cc, Func Offset: 0x34c
	// Line 639, Address: 0x3c98d0, Func Offset: 0x350
	// Line 640, Address: 0x3c98d4, Func Offset: 0x354
	// Line 656, Address: 0x3c98dc, Func Offset: 0x35c
	// Line 655, Address: 0x3c98e0, Func Offset: 0x360
	// Line 645, Address: 0x3c98ec, Func Offset: 0x36c
	// Line 647, Address: 0x3c98f4, Func Offset: 0x374
	// Line 642, Address: 0x3c98f8, Func Offset: 0x378
	// Line 646, Address: 0x3c98fc, Func Offset: 0x37c
	// Line 655, Address: 0x3c9908, Func Offset: 0x388
	// Line 641, Address: 0x3c990c, Func Offset: 0x38c
	// Line 647, Address: 0x3c9910, Func Offset: 0x390
	// Line 655, Address: 0x3c9914, Func Offset: 0x394
	// Line 656, Address: 0x3c9928, Func Offset: 0x3a8
	// Line 647, Address: 0x3c9934, Func Offset: 0x3b4
	// Line 650, Address: 0x3c9938, Func Offset: 0x3b8
	// Line 656, Address: 0x3c993c, Func Offset: 0x3bc
	// Line 650, Address: 0x3c994c, Func Offset: 0x3cc
	// Line 656, Address: 0x3c9950, Func Offset: 0x3d0
	// Line 657, Address: 0x3c995c, Func Offset: 0x3dc
	// Line 651, Address: 0x3c9960, Func Offset: 0x3e0
	// Line 657, Address: 0x3c9968, Func Offset: 0x3e8
	// Line 651, Address: 0x3c996c, Func Offset: 0x3ec
	// Line 652, Address: 0x3c9970, Func Offset: 0x3f0
	// Line 657, Address: 0x3c9974, Func Offset: 0x3f4
	// Line 658, Address: 0x3c9998, Func Offset: 0x418
	// Line 636, Address: 0x3c99a4, Func Offset: 0x424
	// Line 658, Address: 0x3c99a8, Func Offset: 0x428
	// Line 659, Address: 0x3c9b04, Func Offset: 0x584
	// Line 660, Address: 0x3c9b08, Func Offset: 0x588
	// Func End, Address: 0x3c9b48, Func Offset: 0x5c8
}

// render_half_ccw__Q24xhud12image_widgetFUi
// Start address: 0x3c9b50
uint8 image_widget::render_half_ccw(uint32 uLayer)
{
	float32 fPercent;
	float32 fClampTopY;
	float32 fClampTopV;
	float32 fCenterX;
	float32 fCenterY;
	float32 fCenterYPlusfHalfHeight;
	float32 fCenterYMinusfHalfHeight;
	float32 u0;
	float32 u1;
	float32 fCenterU;
	float32 fCenterV;
	float32 fRangeToFour;
	int32 nWholeTris;
	int32 nWholeTrisPlus1;
	int32 nWholeTrisPlus2;
	float32 fInterpAmount;
	uint32 vertexIndex0;
	uint32 vertexIndex1;
	uint32 vertexIndex2;
	float32 xCoord[2];
	float32 yCoord[2];
	float32 uCoord[2];
	float32 vCoord[2];
	uint32 uHalfOffset;
	uint32 VertIndex;
	// Line 510, Address: 0x3c9b50, Func Offset: 0
	// Line 513, Address: 0x3c9b7c, Func Offset: 0x2c
	// Line 515, Address: 0x3c9ba4, Func Offset: 0x54
	// Line 519, Address: 0x3c9bc0, Func Offset: 0x70
	// Line 524, Address: 0x3c9c0c, Func Offset: 0xbc
	// Line 519, Address: 0x3c9c18, Func Offset: 0xc8
	// Line 524, Address: 0x3c9c1c, Func Offset: 0xcc
	// Line 525, Address: 0x3c9c24, Func Offset: 0xd4
	// Line 526, Address: 0x3c9c34, Func Offset: 0xe4
	// Line 525, Address: 0x3c9c38, Func Offset: 0xe8
	// Line 524, Address: 0x3c9c3c, Func Offset: 0xec
	// Line 521, Address: 0x3c9c40, Func Offset: 0xf0
	// Line 524, Address: 0x3c9c58, Func Offset: 0x108
	// Line 522, Address: 0x3c9c5c, Func Offset: 0x10c
	// Line 526, Address: 0x3c9c64, Func Offset: 0x114
	// Line 524, Address: 0x3c9c68, Func Offset: 0x118
	// Line 526, Address: 0x3c9c6c, Func Offset: 0x11c
	// Line 527, Address: 0x3c9c9c, Func Offset: 0x14c
	// Line 526, Address: 0x3c9ca0, Func Offset: 0x150
	// Line 528, Address: 0x3c9ca4, Func Offset: 0x154
	// Line 526, Address: 0x3c9ca8, Func Offset: 0x158
	// Line 529, Address: 0x3c9cac, Func Offset: 0x15c
	// Line 532, Address: 0x3c9cb0, Func Offset: 0x160
	// Line 533, Address: 0x3c9cc0, Func Offset: 0x170
	// Line 534, Address: 0x3c9cd0, Func Offset: 0x180
	// Line 536, Address: 0x3c9ce8, Func Offset: 0x198
	// Line 538, Address: 0x3c9cec, Func Offset: 0x19c
	// Line 542, Address: 0x3c9cf0, Func Offset: 0x1a0
	// Line 538, Address: 0x3c9cf4, Func Offset: 0x1a4
	// Line 536, Address: 0x3c9cf8, Func Offset: 0x1a8
	// Line 537, Address: 0x3c9cfc, Func Offset: 0x1ac
	// Line 542, Address: 0x3c9d00, Func Offset: 0x1b0
	// Line 538, Address: 0x3c9d04, Func Offset: 0x1b4
	// Line 544, Address: 0x3c9d08, Func Offset: 0x1b8
	// Line 545, Address: 0x3c9d18, Func Offset: 0x1c8
	// Line 546, Address: 0x3c9d28, Func Offset: 0x1d8
	// Line 553, Address: 0x3c9d40, Func Offset: 0x1f0
	// Line 548, Address: 0x3c9d44, Func Offset: 0x1f4
	// Line 565, Address: 0x3c9d4c, Func Offset: 0x1fc
	// Line 553, Address: 0x3c9d50, Func Offset: 0x200
	// Line 565, Address: 0x3c9d54, Func Offset: 0x204
	// Line 548, Address: 0x3c9d58, Func Offset: 0x208
	// Line 565, Address: 0x3c9d5c, Func Offset: 0x20c
	// Line 553, Address: 0x3c9d60, Func Offset: 0x210
	// Line 565, Address: 0x3c9d7c, Func Offset: 0x22c
	// Line 554, Address: 0x3c9d80, Func Offset: 0x230
	// Line 555, Address: 0x3c9dac, Func Offset: 0x25c
	// Line 549, Address: 0x3c9db0, Func Offset: 0x260
	// Line 555, Address: 0x3c9db4, Func Offset: 0x264
	// Line 556, Address: 0x3c9dd4, Func Offset: 0x284
	// Line 549, Address: 0x3c9dd8, Func Offset: 0x288
	// Line 556, Address: 0x3c9ddc, Func Offset: 0x28c
	// Line 550, Address: 0x3c9de0, Func Offset: 0x290
	// Line 551, Address: 0x3c9de4, Func Offset: 0x294
	// Line 556, Address: 0x3c9de8, Func Offset: 0x298
	// Line 557, Address: 0x3c9e04, Func Offset: 0x2b4
	// Line 558, Address: 0x3c9e28, Func Offset: 0x2d8
	// Line 559, Address: 0x3c9e4c, Func Offset: 0x2fc
	// Line 560, Address: 0x3c9e70, Func Offset: 0x320
	// Line 561, Address: 0x3c9e94, Func Offset: 0x344
	// Line 562, Address: 0x3c9eb8, Func Offset: 0x368
	// Line 563, Address: 0x3c9edc, Func Offset: 0x38c
	// Line 564, Address: 0x3c9f00, Func Offset: 0x3b0
	// Line 565, Address: 0x3c9f20, Func Offset: 0x3d0
	// Line 566, Address: 0x3ca078, Func Offset: 0x528
	// Line 567, Address: 0x3ca1e4, Func Offset: 0x694
	// Line 569, Address: 0x3ca34c, Func Offset: 0x7fc
	// Line 571, Address: 0x3ca358, Func Offset: 0x808
	// Line 575, Address: 0x3ca360, Func Offset: 0x810
	// Line 571, Address: 0x3ca368, Func Offset: 0x818
	// Line 575, Address: 0x3ca36c, Func Offset: 0x81c
	// Line 583, Address: 0x3ca370, Func Offset: 0x820
	// Line 575, Address: 0x3ca374, Func Offset: 0x824
	// Line 571, Address: 0x3ca394, Func Offset: 0x844
	// Line 583, Address: 0x3ca39c, Func Offset: 0x84c
	// Line 575, Address: 0x3ca3ac, Func Offset: 0x85c
	// Line 578, Address: 0x3ca3b0, Func Offset: 0x860
	// Line 579, Address: 0x3ca3b4, Func Offset: 0x864
	// Line 578, Address: 0x3ca3b8, Func Offset: 0x868
	// Line 579, Address: 0x3ca3bc, Func Offset: 0x86c
	// Line 580, Address: 0x3ca3c0, Func Offset: 0x870
	// Line 581, Address: 0x3ca3c4, Func Offset: 0x874
	// Line 583, Address: 0x3ca3e8, Func Offset: 0x898
	// Line 584, Address: 0x3ca3f0, Func Offset: 0x8a0
	// Line 585, Address: 0x3ca3f8, Func Offset: 0x8a8
	// Line 583, Address: 0x3ca3fc, Func Offset: 0x8ac
	// Line 584, Address: 0x3ca414, Func Offset: 0x8c4
	// Line 585, Address: 0x3ca42c, Func Offset: 0x8dc
	// Line 586, Address: 0x3ca448, Func Offset: 0x8f8
	// Line 587, Address: 0x3ca45c, Func Offset: 0x90c
	// Line 590, Address: 0x3ca474, Func Offset: 0x924
	// Line 591, Address: 0x3ca484, Func Offset: 0x934
	// Line 592, Address: 0x3ca48c, Func Offset: 0x93c
	// Line 590, Address: 0x3ca494, Func Offset: 0x944
	// Line 591, Address: 0x3ca49c, Func Offset: 0x94c
	// Line 592, Address: 0x3ca4a4, Func Offset: 0x954
	// Line 593, Address: 0x3ca4b0, Func Offset: 0x960
	// Line 590, Address: 0x3ca4b8, Func Offset: 0x968
	// Line 591, Address: 0x3ca4bc, Func Offset: 0x96c
	// Line 593, Address: 0x3ca4c0, Func Offset: 0x970
	// Line 594, Address: 0x3ca4cc, Func Offset: 0x97c
	// Line 595, Address: 0x3ca4d0, Func Offset: 0x980
	// Line 596, Address: 0x3ca4d8, Func Offset: 0x988
	// Line 595, Address: 0x3ca67c, Func Offset: 0xb2c
	// Line 596, Address: 0x3ca680, Func Offset: 0xb30
	// Line 597, Address: 0x3ca6b0, Func Offset: 0xb60
	// Line 596, Address: 0x3ca6b8, Func Offset: 0xb68
	// Line 597, Address: 0x3ca6c8, Func Offset: 0xb78
	// Line 599, Address: 0x3ca6d0, Func Offset: 0xb80
	// Line 514, Address: 0x3ca6d8, Func Offset: 0xb88
	// Line 599, Address: 0x3ca6e0, Func Offset: 0xb90
	// Line 515, Address: 0x3ca6e4, Func Offset: 0xb94
	// Line 599, Address: 0x3ca6ec, Func Offset: 0xb9c
	// Line 516, Address: 0x3ca6f4, Func Offset: 0xba4
	// Line 600, Address: 0x3ca6f8, Func Offset: 0xba8
	// Func End, Address: 0x3ca724, Func Offset: 0xbd4
}

// render_counter_clockwise__Q24xhud12image_widgetFUi
// Start address: 0x3ca730
uint8 image_widget::render_counter_clockwise(uint32 uLayer)
{
	float32 u0;
	float32 v0;
	float32 u1;
	float32 v1;
	float32 fCenterX;
	float32 fCenterY;
	float32 fCenterYPlusfHalfHeight;
	float32 fCenterYMinusfHalfHeight;
	float32 fCenterU;
	float32 fCenterV;
	float32 fRangeToEight;
	int32 nWholeTris;
	int32 nWholeTrisPlus1;
	int32 nWholeTrisPlus2;
	float32 fInterpAmount;
	float32 xCoord;
	float32 yCoord;
	float32 uCoord;
	float32 vCoord;
	int32 vertexIndex0;
	int32 vertexIndex1;
	int32 vertexIndex2;
	int32 VertIndex;
	// Line 424, Address: 0x3ca730, Func Offset: 0
	// Line 427, Address: 0x3ca734, Func Offset: 0x4
	// Line 429, Address: 0x3ca75c, Func Offset: 0x2c
	// Line 438, Address: 0x3ca778, Func Offset: 0x48
	// Line 434, Address: 0x3ca77c, Func Offset: 0x4c
	// Line 438, Address: 0x3ca780, Func Offset: 0x50
	// Line 439, Address: 0x3ca788, Func Offset: 0x58
	// Line 438, Address: 0x3ca78c, Func Offset: 0x5c
	// Line 434, Address: 0x3ca794, Func Offset: 0x64
	// Line 439, Address: 0x3ca798, Func Offset: 0x68
	// Line 438, Address: 0x3ca7a0, Func Offset: 0x70
	// Line 440, Address: 0x3ca7a4, Func Offset: 0x74
	// Line 439, Address: 0x3ca7a8, Func Offset: 0x78
	// Line 435, Address: 0x3ca7ac, Func Offset: 0x7c
	// Line 436, Address: 0x3ca7b0, Func Offset: 0x80
	// Line 437, Address: 0x3ca7b4, Func Offset: 0x84
	// Line 440, Address: 0x3ca7b8, Func Offset: 0x88
	// Line 438, Address: 0x3ca7bc, Func Offset: 0x8c
	// Line 440, Address: 0x3ca7c0, Func Offset: 0x90
	// Line 441, Address: 0x3ca7f0, Func Offset: 0xc0
	// Line 440, Address: 0x3ca7f4, Func Offset: 0xc4
	// Line 441, Address: 0x3ca7f8, Func Offset: 0xc8
	// Line 440, Address: 0x3ca7fc, Func Offset: 0xcc
	// Line 441, Address: 0x3ca800, Func Offset: 0xd0
	// Line 448, Address: 0x3ca830, Func Offset: 0x100
	// Line 445, Address: 0x3ca834, Func Offset: 0x104
	// Line 448, Address: 0x3ca83c, Func Offset: 0x10c
	// Line 445, Address: 0x3ca84c, Func Offset: 0x11c
	// Line 448, Address: 0x3ca850, Func Offset: 0x120
	// Line 445, Address: 0x3ca854, Func Offset: 0x124
	// Line 446, Address: 0x3ca858, Func Offset: 0x128
	// Line 449, Address: 0x3ca860, Func Offset: 0x130
	// Line 441, Address: 0x3ca868, Func Offset: 0x138
	// Line 450, Address: 0x3ca86c, Func Offset: 0x13c
	// Line 451, Address: 0x3ca870, Func Offset: 0x140
	// Line 441, Address: 0x3ca874, Func Offset: 0x144
	// Line 452, Address: 0x3ca878, Func Offset: 0x148
	// Line 441, Address: 0x3ca87c, Func Offset: 0x14c
	// Line 442, Address: 0x3ca880, Func Offset: 0x150
	// Line 452, Address: 0x3ca884, Func Offset: 0x154
	// Line 456, Address: 0x3ca8a8, Func Offset: 0x178
	// Line 458, Address: 0x3ca8cc, Func Offset: 0x19c
	// Line 460, Address: 0x3ca8f4, Func Offset: 0x1c4
	// Line 462, Address: 0x3ca91c, Func Offset: 0x1ec
	// Line 464, Address: 0x3ca944, Func Offset: 0x214
	// Line 466, Address: 0x3ca968, Func Offset: 0x238
	// Line 468, Address: 0x3ca990, Func Offset: 0x260
	// Line 470, Address: 0x3ca9b8, Func Offset: 0x288
	// Line 471, Address: 0x3ca9e0, Func Offset: 0x2b0
	// Line 472, Address: 0x3caa04, Func Offset: 0x2d4
	// Line 477, Address: 0x3caa24, Func Offset: 0x2f4
	// Line 478, Address: 0x3cab8c, Func Offset: 0x45c
	// Line 479, Address: 0x3cacf8, Func Offset: 0x5c8
	// Line 480, Address: 0x3cadb0, Func Offset: 0x680
	// Line 479, Address: 0x3cadb4, Func Offset: 0x684
	// Line 480, Address: 0x3cadb8, Func Offset: 0x688
	// Line 479, Address: 0x3cadc4, Func Offset: 0x694
	// Line 480, Address: 0x3cadd0, Func Offset: 0x6a0
	// Line 482, Address: 0x3cae78, Func Offset: 0x748
	// Line 480, Address: 0x3cae7c, Func Offset: 0x74c
	// Line 482, Address: 0x3cae88, Func Offset: 0x758
	// Line 484, Address: 0x3cae90, Func Offset: 0x760
	// Line 489, Address: 0x3cae98, Func Offset: 0x768
	// Line 484, Address: 0x3cae9c, Func Offset: 0x76c
	// Line 486, Address: 0x3caea0, Func Offset: 0x770
	// Line 487, Address: 0x3caea4, Func Offset: 0x774
	// Line 484, Address: 0x3caea8, Func Offset: 0x778
	// Line 489, Address: 0x3caeac, Func Offset: 0x77c
	// Line 491, Address: 0x3caec0, Func Offset: 0x790
	// Line 489, Address: 0x3caecc, Func Offset: 0x79c
	// Line 491, Address: 0x3caee4, Func Offset: 0x7b4
	// Line 492, Address: 0x3caf00, Func Offset: 0x7d0
	// Line 491, Address: 0x3caf04, Func Offset: 0x7d4
	// Line 492, Address: 0x3caf10, Func Offset: 0x7e0
	// Line 493, Address: 0x3caf30, Func Offset: 0x800
	// Line 494, Address: 0x3caf54, Func Offset: 0x824
	// Line 495, Address: 0x3caf64, Func Offset: 0x834
	// Line 498, Address: 0x3caf88, Func Offset: 0x858
	// Line 499, Address: 0x3cafa0, Func Offset: 0x870
	// Line 498, Address: 0x3cafa8, Func Offset: 0x878
	// Line 499, Address: 0x3cafb0, Func Offset: 0x880
	// Line 500, Address: 0x3cafb4, Func Offset: 0x884
	// Line 499, Address: 0x3cafbc, Func Offset: 0x88c
	// Line 500, Address: 0x3cafc0, Func Offset: 0x890
	// Line 499, Address: 0x3cafcc, Func Offset: 0x89c
	// Line 501, Address: 0x3cafd4, Func Offset: 0x8a4
	// Line 500, Address: 0x3cafd8, Func Offset: 0x8a8
	// Line 501, Address: 0x3cafdc, Func Offset: 0x8ac
	// Line 500, Address: 0x3cafe0, Func Offset: 0x8b0
	// Line 501, Address: 0x3cafe4, Func Offset: 0x8b4
	// Line 504, Address: 0x3caff4, Func Offset: 0x8c4
	// Line 505, Address: 0x3cb1c4, Func Offset: 0xa94
	// Line 506, Address: 0x3cb1c8, Func Offset: 0xa98
	// Line 428, Address: 0x3cb1d0, Func Offset: 0xaa0
	// Line 506, Address: 0x3cb1d8, Func Offset: 0xaa8
	// Line 429, Address: 0x3cb1dc, Func Offset: 0xaac
	// Line 506, Address: 0x3cb1e4, Func Offset: 0xab4
	// Line 430, Address: 0x3cb1ec, Func Offset: 0xabc
	// Line 507, Address: 0x3cb1f0, Func Offset: 0xac0
	// Func End, Address: 0x3cb1f8, Func Offset: 0xac8
}

// render_variable_right__Q24xhud12image_widgetFUi
// Start address: 0x3cb200
uint8 image_widget::render_variable_right(uint32 uLayer)
{
	float32 fPercent;
	float32 fTopX;
	float32 fTopY;
	float32 fTopV;
	float32 fBotU;
	float32 fBotV;
	// Line 395, Address: 0x3cb200, Func Offset: 0
	// Line 398, Address: 0x3cb204, Func Offset: 0x4
	// Line 400, Address: 0x3cb22c, Func Offset: 0x2c
	// Line 404, Address: 0x3cb248, Func Offset: 0x48
	// Line 407, Address: 0x3cb24c, Func Offset: 0x4c
	// Line 408, Address: 0x3cb284, Func Offset: 0x84
	// Line 418, Address: 0x3cb2c0, Func Offset: 0xc0
	// Line 408, Address: 0x3cb2e0, Func Offset: 0xe0
	// Line 418, Address: 0x3cb2e4, Func Offset: 0xe4
	// Line 419, Address: 0x3cb2e8, Func Offset: 0xe8
	// Line 418, Address: 0x3cb2ec, Func Offset: 0xec
	// Line 408, Address: 0x3cb2f0, Func Offset: 0xf0
	// Line 415, Address: 0x3cb2f4, Func Offset: 0xf4
	// Line 410, Address: 0x3cb2f8, Func Offset: 0xf8
	// Line 416, Address: 0x3cb2fc, Func Offset: 0xfc
	// Line 418, Address: 0x3cb300, Func Offset: 0x100
	// Line 415, Address: 0x3cb304, Func Offset: 0x104
	// Line 418, Address: 0x3cb308, Func Offset: 0x108
	// Line 415, Address: 0x3cb318, Func Offset: 0x118
	// Line 418, Address: 0x3cb324, Func Offset: 0x124
	// Line 419, Address: 0x3cb344, Func Offset: 0x144
	// Line 418, Address: 0x3cb348, Func Offset: 0x148
	// Line 419, Address: 0x3cb350, Func Offset: 0x150
	// Line 418, Address: 0x3cb354, Func Offset: 0x154
	// Line 419, Address: 0x3cb370, Func Offset: 0x170
	// Line 420, Address: 0x3cb4dc, Func Offset: 0x2dc
	// Line 399, Address: 0x3cb4e4, Func Offset: 0x2e4
	// Line 420, Address: 0x3cb4f0, Func Offset: 0x2f0
	// Line 400, Address: 0x3cb4f4, Func Offset: 0x2f4
	// Line 420, Address: 0x3cb4fc, Func Offset: 0x2fc
	// Line 401, Address: 0x3cb504, Func Offset: 0x304
	// Line 421, Address: 0x3cb508, Func Offset: 0x308
	// Func End, Address: 0x3cb510, Func Offset: 0x310
}

// render_variable_top__Q24xhud12image_widgetFUi
// Start address: 0x3cb510
uint8 image_widget::render_variable_top(uint32 uLayer)
{
	float32 fPercent;
	float32 fHeight;
	float32 fTopY;
	float32 fTopV;
	float32 fTopX;
	float32 fTopU;
	float32 fBotU;
	// Line 367, Address: 0x3cb510, Func Offset: 0
	// Line 370, Address: 0x3cb514, Func Offset: 0x4
	// Line 372, Address: 0x3cb53c, Func Offset: 0x2c
	// Line 376, Address: 0x3cb558, Func Offset: 0x48
	// Line 380, Address: 0x3cb56c, Func Offset: 0x5c
	// Line 384, Address: 0x3cb5ac, Func Offset: 0x9c
	// Line 380, Address: 0x3cb5b0, Func Offset: 0xa0
	// Line 381, Address: 0x3cb5c8, Func Offset: 0xb8
	// Line 384, Address: 0x3cb5d4, Func Offset: 0xc4
	// Line 385, Address: 0x3cb608, Func Offset: 0xf8
	// Line 390, Address: 0x3cb60c, Func Offset: 0xfc
	// Line 389, Address: 0x3cb614, Func Offset: 0x104
	// Line 385, Address: 0x3cb624, Func Offset: 0x114
	// Line 389, Address: 0x3cb628, Func Offset: 0x118
	// Line 386, Address: 0x3cb62c, Func Offset: 0x11c
	// Line 389, Address: 0x3cb630, Func Offset: 0x120
	// Line 384, Address: 0x3cb63c, Func Offset: 0x12c
	// Line 389, Address: 0x3cb640, Func Offset: 0x130
	// Line 390, Address: 0x3cb68c, Func Offset: 0x17c
	// Line 391, Address: 0x3cb7fc, Func Offset: 0x2ec
	// Line 371, Address: 0x3cb804, Func Offset: 0x2f4
	// Line 391, Address: 0x3cb810, Func Offset: 0x300
	// Line 372, Address: 0x3cb814, Func Offset: 0x304
	// Line 391, Address: 0x3cb81c, Func Offset: 0x30c
	// Line 373, Address: 0x3cb824, Func Offset: 0x314
	// Line 392, Address: 0x3cb828, Func Offset: 0x318
	// Func End, Address: 0x3cb830, Func Offset: 0x320
}

// render_one_to_one__Q24xhud12image_widgetFUiQ34xhud12image_widget10RENDERTYPE
// Start address: 0x3cb830
uint8 image_widget::render_one_to_one(uint32 uLayer, RENDERTYPE eType)
{
	float32 fQuadX;
	float32 fQuadY;
	float32 fQuadWidth;
	float32 fQuadHeight;
	// Line 302, Address: 0x3cb830, Func Offset: 0
	// Line 305, Address: 0x3cb834, Func Offset: 0x4
	// Line 307, Address: 0x3cb85c, Func Offset: 0x2c
	// Line 314, Address: 0x3cb8c0, Func Offset: 0x90
	// Line 315, Address: 0x3cb8f8, Func Offset: 0xc8
	// Line 316, Address: 0x3cb8fc, Func Offset: 0xcc
	// Line 317, Address: 0x3cb900, Func Offset: 0xd0
	// Line 316, Address: 0x3cb908, Func Offset: 0xd8
	// Line 317, Address: 0x3cb90c, Func Offset: 0xdc
	// Line 316, Address: 0x3cb910, Func Offset: 0xe0
	// Line 317, Address: 0x3cb914, Func Offset: 0xe4
	// Line 316, Address: 0x3cb918, Func Offset: 0xe8
	// Line 333, Address: 0x3cb91c, Func Offset: 0xec
	// Line 335, Address: 0x3cb924, Func Offset: 0xf4
	// Line 340, Address: 0x3cb930, Func Offset: 0x100
	// Line 345, Address: 0x3cb938, Func Offset: 0x108
	// Line 350, Address: 0x3cb944, Func Offset: 0x114
	// Line 354, Address: 0x3cb94c, Func Offset: 0x11c
	// Line 358, Address: 0x3cb950, Func Offset: 0x120
	// Line 354, Address: 0x3cb964, Func Offset: 0x134
	// Line 358, Address: 0x3cb968, Func Offset: 0x138
	// Line 359, Address: 0x3cb96c, Func Offset: 0x13c
	// Line 358, Address: 0x3cb970, Func Offset: 0x140
	// Line 354, Address: 0x3cb984, Func Offset: 0x154
	// Line 358, Address: 0x3cb988, Func Offset: 0x158
	// Line 359, Address: 0x3cb990, Func Offset: 0x160
	// Line 355, Address: 0x3cb994, Func Offset: 0x164
	// Line 359, Address: 0x3cb998, Func Offset: 0x168
	// Line 355, Address: 0x3cb9a4, Func Offset: 0x174
	// Line 359, Address: 0x3cb9a8, Func Offset: 0x178
	// Line 306, Address: 0x3cb9c0, Func Offset: 0x190
	// Line 359, Address: 0x3cb9cc, Func Offset: 0x19c
	// Line 307, Address: 0x3cb9d0, Func Offset: 0x1a0
	// Line 359, Address: 0x3cb9d8, Func Offset: 0x1a8
	// Line 308, Address: 0x3cb9e0, Func Offset: 0x1b0
	// Line 359, Address: 0x3cb9e8, Func Offset: 0x1b8
	// Line 337, Address: 0x3cb9ec, Func Offset: 0x1bc
	// Line 339, Address: 0x3cba04, Func Offset: 0x1d4
	// Line 359, Address: 0x3cba0c, Func Offset: 0x1dc
	// Line 343, Address: 0x3cba10, Func Offset: 0x1e0
	// Line 344, Address: 0x3cba28, Func Offset: 0x1f8
	// Line 359, Address: 0x3cba30, Func Offset: 0x200
	// Line 347, Address: 0x3cba34, Func Offset: 0x204
	// Line 359, Address: 0x3cba3c, Func Offset: 0x20c
	// Line 347, Address: 0x3cba40, Func Offset: 0x210
	// Line 348, Address: 0x3cba44, Func Offset: 0x214
	// Line 347, Address: 0x3cba4c, Func Offset: 0x21c
	// Line 348, Address: 0x3cba54, Func Offset: 0x224
	// Line 347, Address: 0x3cba5c, Func Offset: 0x22c
	// Line 348, Address: 0x3cba60, Func Offset: 0x230
	// Line 361, Address: 0x3cba64, Func Offset: 0x234
	// Line 362, Address: 0x3cba70, Func Offset: 0x240
	// Line 361, Address: 0x3cba78, Func Offset: 0x248
	// Line 362, Address: 0x3cbac4, Func Offset: 0x294
	// Line 363, Address: 0x3cbc34, Func Offset: 0x404
	// Line 364, Address: 0x3cbc38, Func Offset: 0x408
	// Func End, Address: 0x3cbc40, Func Offset: 0x410
}

// render__Q24xhud12image_widgetFv
// Start address: 0x3cbc40
void image_widget::render()
{
	uint32 i;
	LAYER_FLAGS eLayerMode;
	uint8 bFlushTempBuffer;
	uint32 uLayer;
	uint32 uNewMode;
	uint8 bRendered;
	int8 @22849;
	float32 fNearZ;
	// Line 124, Address: 0x3cbc40, Func Offset: 0
	// Line 142, Address: 0x3cbc44, Func Offset: 0x4
	// Line 124, Address: 0x3cbc48, Func Offset: 0x8
	// Line 142, Address: 0x3cbc4c, Func Offset: 0xc
	// Line 124, Address: 0x3cbc50, Func Offset: 0x10
	// Line 142, Address: 0x3cbc54, Func Offset: 0x14
	// Line 124, Address: 0x3cbc58, Func Offset: 0x18
	// Line 142, Address: 0x3cbc78, Func Offset: 0x38
	// Line 145, Address: 0x3cbca0, Func Offset: 0x60
	// Line 146, Address: 0x3cbcb0, Func Offset: 0x70
	// Line 147, Address: 0x3cbcc0, Func Offset: 0x80
	// Line 148, Address: 0x3cbccc, Func Offset: 0x8c
	// Line 150, Address: 0x3cbcdc, Func Offset: 0x9c
	// Line 153, Address: 0x3cbce4, Func Offset: 0xa4
	// Line 157, Address: 0x3cbcfc, Func Offset: 0xbc
	// Line 155, Address: 0x3cbd00, Func Offset: 0xc0
	// Line 158, Address: 0x3cbd04, Func Offset: 0xc4
	// Line 155, Address: 0x3cbd08, Func Offset: 0xc8
	// Line 156, Address: 0x3cbd10, Func Offset: 0xd0
	// Line 157, Address: 0x3cbd20, Func Offset: 0xe0
	// Line 158, Address: 0x3cbd50, Func Offset: 0x110
	// Line 147, Address: 0x3cbd6c, Func Offset: 0x12c
	// Line 158, Address: 0x3cbd70, Func Offset: 0x130
	// Line 151, Address: 0x3cbd84, Func Offset: 0x144
	// Line 158, Address: 0x3cbda4, Func Offset: 0x164
	// Line 160, Address: 0x3cbda8, Func Offset: 0x168
	// Line 158, Address: 0x3cbdac, Func Offset: 0x16c
	// Line 160, Address: 0x3cbdb0, Func Offset: 0x170
	// Line 161, Address: 0x3cbdbc, Func Offset: 0x17c
	// Line 162, Address: 0x3cbdcc, Func Offset: 0x18c
	// Line 163, Address: 0x3cbddc, Func Offset: 0x19c
	// Line 165, Address: 0x3cbdec, Func Offset: 0x1ac
	// Line 170, Address: 0x3cbdf0, Func Offset: 0x1b0
	// Line 166, Address: 0x3cbdf4, Func Offset: 0x1b4
	// Line 171, Address: 0x3cbdf8, Func Offset: 0x1b8
	// Line 168, Address: 0x3cbdfc, Func Offset: 0x1bc
	// Line 173, Address: 0x3cbe04, Func Offset: 0x1c4
	// Line 176, Address: 0x3cbe24, Func Offset: 0x1e4
	// Line 177, Address: 0x3cbe38, Func Offset: 0x1f8
	// Line 179, Address: 0x3cbe44, Func Offset: 0x204
	// Line 180, Address: 0x3cbe58, Func Offset: 0x218
	// Line 182, Address: 0x3cbe60, Func Offset: 0x220
	// Line 183, Address: 0x3cbe70, Func Offset: 0x230
	// Line 185, Address: 0x3cbe80, Func Offset: 0x240
	// Line 195, Address: 0x3cbe88, Func Offset: 0x248
	// Line 201, Address: 0x3cbe94, Func Offset: 0x254
	// Line 207, Address: 0x3cbea0, Func Offset: 0x260
	// Line 219, Address: 0x3cbea8, Func Offset: 0x268
	// Line 221, Address: 0x3cbeb4, Func Offset: 0x274
	// Line 222, Address: 0x3cbec4, Func Offset: 0x284
	// Line 223, Address: 0x3cbed4, Func Offset: 0x294
	// Line 225, Address: 0x3cbee4, Func Offset: 0x2a4
	// Line 226, Address: 0x3cbee8, Func Offset: 0x2a8
	// Line 227, Address: 0x3cbef0, Func Offset: 0x2b0
	// Line 233, Address: 0x3cbf1c, Func Offset: 0x2dc
	// Line 235, Address: 0x3cbf20, Func Offset: 0x2e0
	// Line 236, Address: 0x3cbf30, Func Offset: 0x2f0
	// Line 240, Address: 0x3cbf38, Func Offset: 0x2f8
	// Line 241, Address: 0x3cbf44, Func Offset: 0x304
	// Line 243, Address: 0x3cbf4c, Func Offset: 0x30c
	// Line 245, Address: 0x3cbf50, Func Offset: 0x310
	// Line 246, Address: 0x3cbf5c, Func Offset: 0x31c
	// Line 248, Address: 0x3cbf64, Func Offset: 0x324
	// Line 250, Address: 0x3cbf68, Func Offset: 0x328
	// Line 251, Address: 0x3cbf74, Func Offset: 0x334
	// Line 253, Address: 0x3cbf7c, Func Offset: 0x33c
	// Line 255, Address: 0x3cbf80, Func Offset: 0x340
	// Line 256, Address: 0x3cbf8c, Func Offset: 0x34c
	// Line 259, Address: 0x3cbf94, Func Offset: 0x354
	// Line 261, Address: 0x3cbf98, Func Offset: 0x358
	// Line 262, Address: 0x3cbfa4, Func Offset: 0x364
	// Line 264, Address: 0x3cbfac, Func Offset: 0x36c
	// Line 266, Address: 0x3cbfb0, Func Offset: 0x370
	// Line 267, Address: 0x3cbfbc, Func Offset: 0x37c
	// Line 269, Address: 0x3cbfc4, Func Offset: 0x384
	// Line 271, Address: 0x3cbfc8, Func Offset: 0x388
	// Line 272, Address: 0x3cbfd4, Func Offset: 0x394
	// Line 274, Address: 0x3cbfdc, Func Offset: 0x39c
	// Line 276, Address: 0x3cbfe0, Func Offset: 0x3a0
	// Line 277, Address: 0x3cbfec, Func Offset: 0x3ac
	// Line 279, Address: 0x3cbff4, Func Offset: 0x3b4
	// Line 281, Address: 0x3cbff8, Func Offset: 0x3b8
	// Line 287, Address: 0x3cc008, Func Offset: 0x3c8
	// Line 290, Address: 0x3cc010, Func Offset: 0x3d0
	// Line 291, Address: 0x3cc02c, Func Offset: 0x3ec
	// Line 292, Address: 0x3cc034, Func Offset: 0x3f4
	// Line 294, Address: 0x3cc050, Func Offset: 0x410
	// Line 295, Address: 0x3cc058, Func Offset: 0x418
	// Line 296, Address: 0x3cc05c, Func Offset: 0x41c
	// Line 297, Address: 0x3cc064, Func Offset: 0x424
	// Line 299, Address: 0x3cc068, Func Offset: 0x428
	// Line 188, Address: 0x3cc070, Func Offset: 0x430
	// Line 299, Address: 0x3cc074, Func Offset: 0x434
	// Line 191, Address: 0x3cc08c, Func Offset: 0x44c
	// Line 299, Address: 0x3cc098, Func Offset: 0x458
	// Line 197, Address: 0x3cc09c, Func Offset: 0x45c
	// Line 299, Address: 0x3cc0a0, Func Offset: 0x460
	// Line 198, Address: 0x3cc0ac, Func Offset: 0x46c
	// Line 299, Address: 0x3cc0b0, Func Offset: 0x470
	// Line 199, Address: 0x3cc0b8, Func Offset: 0x478
	// Line 299, Address: 0x3cc0c0, Func Offset: 0x480
	// Line 200, Address: 0x3cc0c8, Func Offset: 0x488
	// Line 299, Address: 0x3cc0d0, Func Offset: 0x490
	// Line 203, Address: 0x3cc0d4, Func Offset: 0x494
	// Line 299, Address: 0x3cc0d8, Func Offset: 0x498
	// Line 204, Address: 0x3cc0e4, Func Offset: 0x4a4
	// Line 299, Address: 0x3cc0e8, Func Offset: 0x4a8
	// Line 205, Address: 0x3cc0f0, Func Offset: 0x4b0
	// Line 299, Address: 0x3cc0f8, Func Offset: 0x4b8
	// Line 206, Address: 0x3cc100, Func Offset: 0x4c0
	// Line 299, Address: 0x3cc108, Func Offset: 0x4c8
	// Line 210, Address: 0x3cc118, Func Offset: 0x4d8
	// Line 299, Address: 0x3cc11c, Func Offset: 0x4dc
	// Line 211, Address: 0x3cc124, Func Offset: 0x4e4
	// Line 299, Address: 0x3cc130, Func Offset: 0x4f0
	// Line 218, Address: 0x3cc138, Func Offset: 0x4f8
	// Line 299, Address: 0x3cc140, Func Offset: 0x500
	// Func End, Address: 0x3cc18c, Func Offset: 0x54c
}

// update__Q24xhud12image_widgetFf
// Start address: 0x3cc190
void image_widget::update(float32 dt)
{
	uint32 uLayer;
	// Line 94, Address: 0x3cc190, Func Offset: 0
	// Line 95, Address: 0x3cc1a4, Func Offset: 0x14
	// Line 96, Address: 0x3cc1ac, Func Offset: 0x1c
	// Line 99, Address: 0x3cc1ec, Func Offset: 0x5c
	// Line 102, Address: 0x3cc1fc, Func Offset: 0x6c
	// Line 101, Address: 0x3cc210, Func Offset: 0x80
	// Line 99, Address: 0x3cc214, Func Offset: 0x84
	// Line 101, Address: 0x3cc21c, Func Offset: 0x8c
	// Line 103, Address: 0x3cc228, Func Offset: 0x98
	// Line 104, Address: 0x3cc240, Func Offset: 0xb0
	// Line 102, Address: 0x3cc258, Func Offset: 0xc8
	// Line 104, Address: 0x3cc270, Func Offset: 0xe0
	// Line 102, Address: 0x3cc280, Func Offset: 0xf0
	// Line 104, Address: 0x3cc284, Func Offset: 0xf4
	// Line 102, Address: 0x3cc2a4, Func Offset: 0x114
	// Line 104, Address: 0x3cc2a8, Func Offset: 0x118
	// Func End, Address: 0x3cc2cc, Func Offset: 0x13c
}

// is__Q24xhud12image_widgetCFUi
// Start address: 0x3cc2d0
uint8 is(uint32 id)
{
	int8 @21764;
	uint32 myid;
	int8 @22805;
	uint32 myid;
	// Line 89, Address: 0x3cc2d0, Func Offset: 0
	// Line 90, Address: 0x3cc2dc, Func Offset: 0xc
	// Line 91, Address: 0x3cc354, Func Offset: 0x84
	// Func End, Address: 0x3cc364, Func Offset: 0x94
}

// type__Q24xhud12image_widgetCFv
// Start address: 0x3cc370
uint32 type()
{
	// Line 83, Address: 0x3cc370, Func Offset: 0
	// Line 84, Address: 0x3cc378, Func Offset: 0x8
	// Line 85, Address: 0x3cc384, Func Offset: 0x14
	// Line 84, Address: 0x3cc398, Func Offset: 0x28
	// Line 86, Address: 0x3cc3a4, Func Offset: 0x34
	// Func End, Address: 0x3cc3b0, Func Offset: 0x40
}

// destroy__Q24xhud12image_widgetFv
// Start address: 0x3cc3b0
void image_widget::destroy()
{
	// Line 79, Address: 0x3cc3b0, Func Offset: 0
	// Line 80, Address: 0x3cc3c8, Func Offset: 0x18
	// Func End, Address: 0x3cc3d0, Func Offset: 0x20
}

// load__Q24xhud12image_widgetFR5xBaseR9xDynAssetUi
// Start address: 0x3cc3d0
void load(xBase& data, xDynAsset& asset)
{
	// Line 39, Address: 0x3cc3d0, Func Offset: 0
	// Line 41, Address: 0x3cc3e4, Func Offset: 0x14
	// Line 43, Address: 0x3cc408, Func Offset: 0x38
	// Line 44, Address: 0x3cc550, Func Offset: 0x180
	// Func End, Address: 0x3cc564, Func Offset: 0x194
}

