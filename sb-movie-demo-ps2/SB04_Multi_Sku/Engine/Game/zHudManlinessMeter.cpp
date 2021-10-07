



uint8 Combo15Effect(widget& w, motive& m, float32 dt);
uint8 Combo14Effect(widget& w, motive& m, float32 dt);
uint8 Combo13Effect(widget& w, motive& m, float32 dt);
uint8 Combo12Effect(widget& w, motive& m, float32 dt);
uint8 Combo11Effect(widget& w, motive& m, float32 dt);
uint8 Combo10Effect(widget& w, motive& m, float32 dt);
uint8 Combo9Effect(widget& w, motive& m, float32 dt);
uint8 Combo8Effect(widget& w, motive& m, float32 dt);
uint8 Combo7Effect(widget& w, motive& m, float32 dt);
uint8 Combo6Effect(widget& w, motive& m, float32 dt);
uint8 Combo5Effect(widget& w, motive& m, float32 dt);
uint8 Combo4Effect(widget& w, motive& m, float32 dt);
uint8 Combo3Effect(widget& w, motive& m, float32 dt);
void HideAndClearText(widget& w);
void ClearText(widget& w);
void hide();
void show(uint8 autohide);
void update(float32 dt);
void SetImmediateValue(uint32 value);
void setup();
void reset();
void* __ct();

// Combo15Effect__Q24zHud14ManlinessMeterFRQ24xhud6widgetRQ24xhud6motivef
// Start address: 0x379a80
uint8 Combo15Effect(widget& w, motive& m, float32 dt)
{
	text_widget& textWidget;
	int8 pos1[64];
	// Line 1015, Address: 0x379a80, Func Offset: 0
	// Line 1024, Address: 0x379a84, Func Offset: 0x4
	// Line 1015, Address: 0x379a88, Func Offset: 0x8
	// Line 1024, Address: 0x379a8c, Func Offset: 0xc
	// Line 1015, Address: 0x379a90, Func Offset: 0x10
	// Line 1024, Address: 0x379aa8, Func Offset: 0x28
	// Line 1029, Address: 0x379ac4, Func Offset: 0x44
	// Line 1032, Address: 0x379ad4, Func Offset: 0x54
	// Line 1033, Address: 0x379bc4, Func Offset: 0x144
	// Line 1036, Address: 0x379bd0, Func Offset: 0x150
	// Line 1037, Address: 0x379bd4, Func Offset: 0x154
	// Line 1040, Address: 0x379be8, Func Offset: 0x168
	// Line 1042, Address: 0x379c00, Func Offset: 0x180
	// Line 1043, Address: 0x379c0c, Func Offset: 0x18c
	// Line 1044, Address: 0x379c18, Func Offset: 0x198
	// Line 1049, Address: 0x379c2c, Func Offset: 0x1ac
	// Line 1044, Address: 0x379c30, Func Offset: 0x1b0
	// Line 1049, Address: 0x379c3c, Func Offset: 0x1bc
	// Line 1052, Address: 0x379c44, Func Offset: 0x1c4
	// Line 1054, Address: 0x379c48, Func Offset: 0x1c8
	// Line 1046, Address: 0x379c64, Func Offset: 0x1e4
	// Line 1054, Address: 0x379c68, Func Offset: 0x1e8
	// Line 1057, Address: 0x379c74, Func Offset: 0x1f4
	// Line 1058, Address: 0x379c78, Func Offset: 0x1f8
	// Line 1057, Address: 0x379c7c, Func Offset: 0x1fc
	// Line 1061, Address: 0x379c8c, Func Offset: 0x20c
	// Line 1069, Address: 0x379ca0, Func Offset: 0x220
	// Line 1070, Address: 0x379cb0, Func Offset: 0x230
	// Func End, Address: 0x379ccc, Func Offset: 0x24c
}

// Combo14Effect__Q24zHud14ManlinessMeterFRQ24xhud6widgetRQ24xhud6motivef
// Start address: 0x379cd0
uint8 Combo14Effect(widget& w, motive& m, float32 dt)
{
	// Line 1006, Address: 0x379cd0, Func Offset: 0
	// Line 1010, Address: 0x379cd4, Func Offset: 0x4
	// Line 1006, Address: 0x379cd8, Func Offset: 0x8
	// Line 1010, Address: 0x379cdc, Func Offset: 0xc
	// Line 1006, Address: 0x379ce0, Func Offset: 0x10
	// Line 1010, Address: 0x379cf4, Func Offset: 0x24
	// Line 1011, Address: 0x379d1c, Func Offset: 0x4c
	// Line 1012, Address: 0x379d2c, Func Offset: 0x5c
	// Func End, Address: 0x379d44, Func Offset: 0x74
}

// Combo13Effect__Q24zHud14ManlinessMeterFRQ24xhud6widgetRQ24xhud6motivef
// Start address: 0x379d50
uint8 Combo13Effect(widget& w, motive& m, float32 dt)
{
	text_widget& textWidget;
	int8 pos1[64];
	int8 comboText[128];
	int32 pos;
	int32 len;
	// Line 973, Address: 0x379d50, Func Offset: 0
	// Line 983, Address: 0x379d54, Func Offset: 0x4
	// Line 973, Address: 0x379d58, Func Offset: 0x8
	// Line 983, Address: 0x379d5c, Func Offset: 0xc
	// Line 973, Address: 0x379d60, Func Offset: 0x10
	// Line 983, Address: 0x379d78, Func Offset: 0x28
	// Line 989, Address: 0x379d94, Func Offset: 0x44
	// Line 992, Address: 0x379da4, Func Offset: 0x54
	// Line 993, Address: 0x379e6c, Func Offset: 0x11c
	// Line 995, Address: 0x379e74, Func Offset: 0x124
	// Line 996, Address: 0x379e7c, Func Offset: 0x12c
	// Line 997, Address: 0x379e98, Func Offset: 0x148
	// Line 999, Address: 0x379eac, Func Offset: 0x15c
	// Line 1002, Address: 0x379ec0, Func Offset: 0x170
	// Line 1003, Address: 0x379ee4, Func Offset: 0x194
	// Func End, Address: 0x379efc, Func Offset: 0x1ac
}

// Combo12Effect__Q24zHud14ManlinessMeterFRQ24xhud6widgetRQ24xhud6motivef
// Start address: 0x379f00
uint8 Combo12Effect(widget& w, motive& m, float32 dt)
{
	text_widget& textWidget;
	int8 pos1[64];
	int8 pos2[64];
	int8 pos3[64];
	int8 comboText[128];
	uint32 len;
	// Line 918, Address: 0x379f00, Func Offset: 0
	// Line 928, Address: 0x379f04, Func Offset: 0x4
	// Line 918, Address: 0x379f08, Func Offset: 0x8
	// Line 928, Address: 0x379f0c, Func Offset: 0xc
	// Line 918, Address: 0x379f10, Func Offset: 0x10
	// Line 928, Address: 0x379f30, Func Offset: 0x30
	// Line 933, Address: 0x379f4c, Func Offset: 0x4c
	// Line 936, Address: 0x379f5c, Func Offset: 0x5c
	// Line 937, Address: 0x37a02c, Func Offset: 0x12c
	// Line 939, Address: 0x37a034, Func Offset: 0x134
	// Line 940, Address: 0x37a044, Func Offset: 0x144
	// Line 942, Address: 0x37a054, Func Offset: 0x154
	// Line 945, Address: 0x37a058, Func Offset: 0x158
	// Line 942, Address: 0x37a05c, Func Offset: 0x15c
	// Line 945, Address: 0x37a060, Func Offset: 0x160
	// Line 946, Address: 0x37a06c, Func Offset: 0x16c
	// Line 948, Address: 0x37a07c, Func Offset: 0x17c
	// Line 950, Address: 0x37a09c, Func Offset: 0x19c
	// Line 948, Address: 0x37a0a0, Func Offset: 0x1a0
	// Line 950, Address: 0x37a0a4, Func Offset: 0x1a4
	// Line 951, Address: 0x37a0c0, Func Offset: 0x1c0
	// Line 965, Address: 0x37a0fc, Func Offset: 0x1fc
	// Line 969, Address: 0x37a110, Func Offset: 0x210
	// Line 959, Address: 0x37a180, Func Offset: 0x280
	// Line 969, Address: 0x37a188, Func Offset: 0x288
	// Line 970, Address: 0x37a1a8, Func Offset: 0x2a8
	// Func End, Address: 0x37a1cc, Func Offset: 0x2cc
}

// Combo11Effect__Q24zHud14ManlinessMeterFRQ24xhud6widgetRQ24xhud6motivef
// Start address: 0x37a1d0
uint8 Combo11Effect(widget& w, motive& m, float32 dt)
{
	text_widget& textWidget;
	int8 pos1[64];
	int8 pos2[64];
	int8 comboText[128];
	float32 scale;
	// Line 878, Address: 0x37a1d0, Func Offset: 0
	// Line 887, Address: 0x37a1d4, Func Offset: 0x4
	// Line 878, Address: 0x37a1d8, Func Offset: 0x8
	// Line 887, Address: 0x37a1dc, Func Offset: 0xc
	// Line 878, Address: 0x37a1e0, Func Offset: 0x10
	// Line 887, Address: 0x37a1fc, Func Offset: 0x2c
	// Line 892, Address: 0x37a218, Func Offset: 0x48
	// Line 895, Address: 0x37a228, Func Offset: 0x58
	// Line 899, Address: 0x37a328, Func Offset: 0x158
	// Line 898, Address: 0x37a32c, Func Offset: 0x15c
	// Line 899, Address: 0x37a330, Func Offset: 0x160
	// Line 898, Address: 0x37a334, Func Offset: 0x164
	// Line 899, Address: 0x37a338, Func Offset: 0x168
	// Line 900, Address: 0x37a36c, Func Offset: 0x19c
	// Line 902, Address: 0x37a378, Func Offset: 0x1a8
	// Line 904, Address: 0x37a3ac, Func Offset: 0x1dc
	// Line 912, Address: 0x37a3dc, Func Offset: 0x20c
	// Line 914, Address: 0x37a3f0, Func Offset: 0x220
	// Line 915, Address: 0x37a440, Func Offset: 0x270
	// Func End, Address: 0x37a460, Func Offset: 0x290
}

// Combo10Effect__Q24zHud14ManlinessMeterFRQ24xhud6widgetRQ24xhud6motivef
// Start address: 0x37a460
uint8 Combo10Effect(widget& w, motive& m, float32 dt)
{
	text_widget& textWidget;
	int8 comboText[128];
	float32 scale;
	// Line 850, Address: 0x37a460, Func Offset: 0
	// Line 858, Address: 0x37a464, Func Offset: 0x4
	// Line 850, Address: 0x37a468, Func Offset: 0x8
	// Line 858, Address: 0x37a46c, Func Offset: 0xc
	// Line 850, Address: 0x37a470, Func Offset: 0x10
	// Line 858, Address: 0x37a488, Func Offset: 0x28
	// Line 863, Address: 0x37a4a4, Func Offset: 0x44
	// Line 865, Address: 0x37a4b4, Func Offset: 0x54
	// Line 866, Address: 0x37a4f4, Func Offset: 0x94
	// Line 868, Address: 0x37a500, Func Offset: 0xa0
	// Line 870, Address: 0x37a50c, Func Offset: 0xac
	// Line 871, Address: 0x37a544, Func Offset: 0xe4
	// Line 872, Address: 0x37a564, Func Offset: 0x104
	// Line 874, Address: 0x37a578, Func Offset: 0x118
	// Line 875, Address: 0x37a59c, Func Offset: 0x13c
	// Func End, Address: 0x37a5b4, Func Offset: 0x154
}

// Combo9Effect__Q24zHud14ManlinessMeterFRQ24xhud6widgetRQ24xhud6motivef
// Start address: 0x37a5c0
uint8 Combo9Effect(widget& w, motive& m, float32 dt)
{
	text_widget& textWidget;
	int8 pos1[64];
	int8 pos2[64];
	int8 comboText[192];
	// Line 816, Address: 0x37a5c0, Func Offset: 0
	// Line 825, Address: 0x37a5c4, Func Offset: 0x4
	// Line 816, Address: 0x37a5c8, Func Offset: 0x8
	// Line 825, Address: 0x37a5cc, Func Offset: 0xc
	// Line 816, Address: 0x37a5d0, Func Offset: 0x10
	// Line 825, Address: 0x37a5ec, Func Offset: 0x2c
	// Line 830, Address: 0x37a608, Func Offset: 0x48
	// Line 833, Address: 0x37a618, Func Offset: 0x58
	// Line 837, Address: 0x37a718, Func Offset: 0x158
	// Line 836, Address: 0x37a71c, Func Offset: 0x15c
	// Line 837, Address: 0x37a720, Func Offset: 0x160
	// Line 836, Address: 0x37a72c, Func Offset: 0x16c
	// Line 837, Address: 0x37a730, Func Offset: 0x170
	// Line 844, Address: 0x37a748, Func Offset: 0x188
	// Line 846, Address: 0x37a75c, Func Offset: 0x19c
	// Line 847, Address: 0x37a7ac, Func Offset: 0x1ec
	// Func End, Address: 0x37a7cc, Func Offset: 0x20c
}

// Combo8Effect__Q24zHud14ManlinessMeterFRQ24xhud6widgetRQ24xhud6motivef
// Start address: 0x37a7d0
uint8 Combo8Effect(widget& w, motive& m, float32 dt)
{
	text_widget& textWidget;
	int8 pos1[64];
	int8 pos2[64];
	int8 comboText[128];
	// Line 782, Address: 0x37a7d0, Func Offset: 0
	// Line 791, Address: 0x37a7d4, Func Offset: 0x4
	// Line 782, Address: 0x37a7d8, Func Offset: 0x8
	// Line 791, Address: 0x37a7dc, Func Offset: 0xc
	// Line 782, Address: 0x37a7e0, Func Offset: 0x10
	// Line 791, Address: 0x37a7fc, Func Offset: 0x2c
	// Line 796, Address: 0x37a818, Func Offset: 0x48
	// Line 799, Address: 0x37a828, Func Offset: 0x58
	// Line 800, Address: 0x37a908, Func Offset: 0x138
	// Line 807, Address: 0x37a910, Func Offset: 0x140
	// Line 810, Address: 0x37a928, Func Offset: 0x158
	// Line 812, Address: 0x37a93c, Func Offset: 0x16c
	// Line 802, Address: 0x37a9c0, Func Offset: 0x1f0
	// Line 812, Address: 0x37a9c4, Func Offset: 0x1f4
	// Line 804, Address: 0x37a9ec, Func Offset: 0x21c
	// Line 813, Address: 0x37a9f4, Func Offset: 0x224
	// Func End, Address: 0x37aa14, Func Offset: 0x244
}

// Combo7Effect__Q24zHud14ManlinessMeterFRQ24xhud6widgetRQ24xhud6motivef
// Start address: 0x37aa20
uint8 Combo7Effect(widget& w, motive& m, float32 dt)
{
	text_widget& textWidget;
	int8 pos1[64];
	int8 pos2[64];
	int8 comboText[128];
	uint32 len;
	// Line 723, Address: 0x37aa20, Func Offset: 0
	// Line 732, Address: 0x37aa24, Func Offset: 0x4
	// Line 723, Address: 0x37aa28, Func Offset: 0x8
	// Line 732, Address: 0x37aa2c, Func Offset: 0xc
	// Line 723, Address: 0x37aa30, Func Offset: 0x10
	// Line 732, Address: 0x37aa4c, Func Offset: 0x2c
	// Line 737, Address: 0x37aa68, Func Offset: 0x48
	// Line 740, Address: 0x37aa78, Func Offset: 0x58
	// Line 741, Address: 0x37ab48, Func Offset: 0x128
	// Line 743, Address: 0x37ab50, Func Offset: 0x130
	// Line 744, Address: 0x37ab60, Func Offset: 0x140
	// Line 746, Address: 0x37ab74, Func Offset: 0x154
	// Line 748, Address: 0x37ab84, Func Offset: 0x164
	// Line 750, Address: 0x37ab90, Func Offset: 0x170
	// Line 751, Address: 0x37ab94, Func Offset: 0x174
	// Line 750, Address: 0x37ab98, Func Offset: 0x178
	// Line 751, Address: 0x37ab9c, Func Offset: 0x17c
	// Line 752, Address: 0x37abb4, Func Offset: 0x194
	// Line 754, Address: 0x37abec, Func Offset: 0x1cc
	// Line 757, Address: 0x37abf4, Func Offset: 0x1d4
	// Line 758, Address: 0x37abf8, Func Offset: 0x1d8
	// Line 757, Address: 0x37abfc, Func Offset: 0x1dc
	// Line 758, Address: 0x37ac00, Func Offset: 0x1e0
	// Line 760, Address: 0x37ac18, Func Offset: 0x1f8
	// Line 775, Address: 0x37ac40, Func Offset: 0x220
	// Line 778, Address: 0x37ac54, Func Offset: 0x234
	// Line 769, Address: 0x37acc4, Func Offset: 0x2a4
	// Line 778, Address: 0x37accc, Func Offset: 0x2ac
	// Line 779, Address: 0x37acec, Func Offset: 0x2cc
	// Func End, Address: 0x37ad0c, Func Offset: 0x2ec
}

// Combo6Effect__Q24zHud14ManlinessMeterFRQ24xhud6widgetRQ24xhud6motivef
// Start address: 0x37ad10
uint8 Combo6Effect(widget& w, motive& m, float32 dt)
{
	text_widget& textWidget;
	int8 pos1[64];
	int8 pos2[64];
	int8 comboText[128];
	// Line 688, Address: 0x37ad10, Func Offset: 0
	// Line 698, Address: 0x37ad14, Func Offset: 0x4
	// Line 688, Address: 0x37ad18, Func Offset: 0x8
	// Line 698, Address: 0x37ad1c, Func Offset: 0xc
	// Line 688, Address: 0x37ad20, Func Offset: 0x10
	// Line 698, Address: 0x37ad3c, Func Offset: 0x2c
	// Line 703, Address: 0x37ad58, Func Offset: 0x48
	// Line 706, Address: 0x37ad68, Func Offset: 0x58
	// Line 707, Address: 0x37ae48, Func Offset: 0x138
	// Line 714, Address: 0x37ae50, Func Offset: 0x140
	// Line 717, Address: 0x37ae68, Func Offset: 0x158
	// Line 719, Address: 0x37ae7c, Func Offset: 0x16c
	// Line 709, Address: 0x37af00, Func Offset: 0x1f0
	// Line 719, Address: 0x37af04, Func Offset: 0x1f4
	// Line 711, Address: 0x37af2c, Func Offset: 0x21c
	// Line 720, Address: 0x37af34, Func Offset: 0x224
	// Func End, Address: 0x37af54, Func Offset: 0x244
}

// Combo5Effect__Q24zHud14ManlinessMeterFRQ24xhud6widgetRQ24xhud6motivef
// Start address: 0x37af60
uint8 Combo5Effect(widget& w, motive& m, float32 dt)
{
	text_widget& textWidget;
	int8 pos1[64];
	int8 pos2[64];
	int8 comboText[192];
	// Line 662, Address: 0x37af60, Func Offset: 0
	// Line 669, Address: 0x37af64, Func Offset: 0x4
	// Line 662, Address: 0x37af68, Func Offset: 0x8
	// Line 669, Address: 0x37af6c, Func Offset: 0xc
	// Line 662, Address: 0x37af70, Func Offset: 0x10
	// Line 669, Address: 0x37af8c, Func Offset: 0x2c
	// Line 674, Address: 0x37afa8, Func Offset: 0x48
	// Line 677, Address: 0x37afb8, Func Offset: 0x58
	// Line 680, Address: 0x37b0b8, Func Offset: 0x158
	// Line 682, Address: 0x37b0d0, Func Offset: 0x170
	// Line 684, Address: 0x37b0e4, Func Offset: 0x184
	// Line 685, Address: 0x37b134, Func Offset: 0x1d4
	// Func End, Address: 0x37b154, Func Offset: 0x1f4
}

// Combo4Effect__Q24zHud14ManlinessMeterFRQ24xhud6widgetRQ24xhud6motivef
// Start address: 0x37b160
uint8 Combo4Effect(widget& w, motive& m, float32 dt)
{
	text_widget& textWidget;
	int8 pos1[64];
	// Line 632, Address: 0x37b160, Func Offset: 0
	// Line 641, Address: 0x37b164, Func Offset: 0x4
	// Line 632, Address: 0x37b168, Func Offset: 0x8
	// Line 641, Address: 0x37b16c, Func Offset: 0xc
	// Line 632, Address: 0x37b170, Func Offset: 0x10
	// Line 641, Address: 0x37b188, Func Offset: 0x28
	// Line 646, Address: 0x37b1a4, Func Offset: 0x44
	// Line 648, Address: 0x37b1b4, Func Offset: 0x54
	// Line 649, Address: 0x37b284, Func Offset: 0x124
	// Line 651, Address: 0x37b28c, Func Offset: 0x12c
	// Line 652, Address: 0x37b2a0, Func Offset: 0x140
	// Line 655, Address: 0x37b2a8, Func Offset: 0x148
	// Line 658, Address: 0x37b2b8, Func Offset: 0x158
	// Line 659, Address: 0x37b308, Func Offset: 0x1a8
	// Func End, Address: 0x37b324, Func Offset: 0x1c4
}

// Combo3Effect__Q24zHud14ManlinessMeterFRQ24xhud6widgetRQ24xhud6motivef
// Start address: 0x37b330
uint8 Combo3Effect(widget& w, motive& m, float32 dt)
{
	// Line 625, Address: 0x37b330, Func Offset: 0
	// Line 627, Address: 0x37b334, Func Offset: 0x4
	// Line 625, Address: 0x37b338, Func Offset: 0x8
	// Line 627, Address: 0x37b33c, Func Offset: 0xc
	// Line 625, Address: 0x37b340, Func Offset: 0x10
	// Line 627, Address: 0x37b354, Func Offset: 0x24
	// Line 628, Address: 0x37b37c, Func Offset: 0x4c
	// Line 629, Address: 0x37b38c, Func Offset: 0x5c
	// Func End, Address: 0x37b3a4, Func Offset: 0x74
}

// HideAndClearText__Q24zHud14ManlinessMeterFRQ24xhud6widgetRQ24xhud6motive
// Start address: 0x37b3b0
void HideAndClearText(widget& w)
{
	float32 sx;
	float32 sy;
	float32 cx;
	float32 cy;
	float32 tcx;
	float32 tcy;
	float32 ex;
	float32 ey;
	// Line 559, Address: 0x37b3b0, Func Offset: 0
	// Line 562, Address: 0x37b3bc, Func Offset: 0xc
	// Line 559, Address: 0x37b3c0, Func Offset: 0x10
	// Line 562, Address: 0x37b3cc, Func Offset: 0x1c
	// Line 577, Address: 0x37b3d4, Func Offset: 0x24
	// Line 579, Address: 0x37b3d8, Func Offset: 0x28
	// Line 580, Address: 0x37b3dc, Func Offset: 0x2c
	// Line 578, Address: 0x37b3e0, Func Offset: 0x30
	// Line 579, Address: 0x37b3e8, Func Offset: 0x38
	// Line 580, Address: 0x37b3f0, Func Offset: 0x40
	// Line 582, Address: 0x37b3fc, Func Offset: 0x4c
	// Line 583, Address: 0x37b400, Func Offset: 0x50
	// Line 584, Address: 0x37b404, Func Offset: 0x54
	// Line 589, Address: 0x37b428, Func Offset: 0x78
	// Line 591, Address: 0x37b434, Func Offset: 0x84
	// Line 592, Address: 0x37b45c, Func Offset: 0xac
	// Line 593, Address: 0x37b470, Func Offset: 0xc0
	// Line 596, Address: 0x37b478, Func Offset: 0xc8
	// Line 597, Address: 0x37b4a0, Func Offset: 0xf0
	// Line 604, Address: 0x37b4ac, Func Offset: 0xfc
	// Line 603, Address: 0x37b4b0, Func Offset: 0x100
	// Line 604, Address: 0x37b4c4, Func Offset: 0x114
	// Line 603, Address: 0x37b4cc, Func Offset: 0x11c
	// Line 604, Address: 0x37b4d0, Func Offset: 0x120
	// Line 606, Address: 0x37b4d4, Func Offset: 0x124
	// Line 612, Address: 0x37b4e0, Func Offset: 0x130
	// Line 613, Address: 0x37b548, Func Offset: 0x198
	// Line 614, Address: 0x37b59c, Func Offset: 0x1ec
	// Line 616, Address: 0x37b5fc, Func Offset: 0x24c
	// Line 622, Address: 0x37b618, Func Offset: 0x268
	// Line 587, Address: 0x37b620, Func Offset: 0x270
	// Line 622, Address: 0x37b628, Func Offset: 0x278
	// Line 619, Address: 0x37b638, Func Offset: 0x288
	// Line 622, Address: 0x37b63c, Func Offset: 0x28c
	// Line 619, Address: 0x37b640, Func Offset: 0x290
	// Line 622, Address: 0x37b644, Func Offset: 0x294
	// Line 619, Address: 0x37b648, Func Offset: 0x298
	// Line 622, Address: 0x37b64c, Func Offset: 0x29c
	// Func End, Address: 0x37b670, Func Offset: 0x2c0
}

// ClearText__Q24zHud14ManlinessMeterFRQ24xhud6widgetRQ24xhud6motive
// Start address: 0x37b670
void ClearText(widget& w)
{
	text_widget& textWidget;
	// Line 535, Address: 0x37b670, Func Offset: 0
	// Line 537, Address: 0x37b674, Func Offset: 0x4
	// Line 535, Address: 0x37b678, Func Offset: 0x8
	// Line 537, Address: 0x37b67c, Func Offset: 0xc
	// Line 535, Address: 0x37b680, Func Offset: 0x10
	// Line 537, Address: 0x37b68c, Func Offset: 0x1c
	// Line 538, Address: 0x37b698, Func Offset: 0x28
	// Line 540, Address: 0x37b69c, Func Offset: 0x2c
	// Line 548, Address: 0x37b6b8, Func Offset: 0x48
	// Line 550, Address: 0x37b6d4, Func Offset: 0x64
	// Line 553, Address: 0x37b6e0, Func Offset: 0x70
	// Line 554, Address: 0x37b6ec, Func Offset: 0x7c
	// Line 553, Address: 0x37b6f4, Func Offset: 0x84
	// Line 554, Address: 0x37b6f8, Func Offset: 0x88
	// Line 553, Address: 0x37b6fc, Func Offset: 0x8c
	// Line 554, Address: 0x37b708, Func Offset: 0x98
	// Line 555, Address: 0x37b718, Func Offset: 0xa8
	// Line 556, Address: 0x37b720, Func Offset: 0xb0
	// Line 542, Address: 0x37b72c, Func Offset: 0xbc
	// Line 556, Address: 0x37b730, Func Offset: 0xc0
	// Line 542, Address: 0x37b73c, Func Offset: 0xcc
	// Line 556, Address: 0x37b740, Func Offset: 0xd0
	// Line 545, Address: 0x37b75c, Func Offset: 0xec
	// Line 556, Address: 0x37b764, Func Offset: 0xf4
	// Func End, Address: 0x37b77c, Func Offset: 0x10c
}

// hide__Q24zHud14ManlinessMeterFv
// Start address: 0x37b780
void ManlinessMeter::hide()
{
	int32 i;
	// Line 522, Address: 0x37b780, Func Offset: 0
	// Line 525, Address: 0x37b790, Func Offset: 0x10
	// Line 527, Address: 0x37b79c, Func Offset: 0x1c
	// Line 529, Address: 0x37b7a4, Func Offset: 0x24
	// Line 531, Address: 0x37b7b0, Func Offset: 0x30
	// Line 532, Address: 0x37b7c0, Func Offset: 0x40
	// Func End, Address: 0x37b7d4, Func Offset: 0x54
}

// show__Q24zHud14ManlinessMeterFb
// Start address: 0x37b7e0
void ManlinessMeter::show(uint8 autohide)
{
	int32 i;
	// Line 404, Address: 0x37b7e0, Func Offset: 0
	// Line 408, Address: 0x37b7f0, Func Offset: 0x10
	// Line 404, Address: 0x37b7f4, Func Offset: 0x14
	// Line 408, Address: 0x37b7f8, Func Offset: 0x18
	// Line 404, Address: 0x37b7fc, Func Offset: 0x1c
	// Line 408, Address: 0x37b800, Func Offset: 0x20
	// Line 404, Address: 0x37b804, Func Offset: 0x24
	// Line 408, Address: 0x37b808, Func Offset: 0x28
	// Line 404, Address: 0x37b80c, Func Offset: 0x2c
	// Line 408, Address: 0x37b820, Func Offset: 0x40
	// Line 404, Address: 0x37b824, Func Offset: 0x44
	// Line 408, Address: 0x37b82c, Func Offset: 0x4c
	// Line 410, Address: 0x37b834, Func Offset: 0x54
	// Line 413, Address: 0x37b83c, Func Offset: 0x5c
	// Line 415, Address: 0x37b874, Func Offset: 0x94
	// Line 416, Address: 0x37b878, Func Offset: 0x98
	// Line 417, Address: 0x37b884, Func Offset: 0xa4
	// Line 419, Address: 0x37b88c, Func Offset: 0xac
	// Line 421, Address: 0x37b8a0, Func Offset: 0xc0
	// Line 424, Address: 0x37b8a8, Func Offset: 0xc8
	// Line 426, Address: 0x37b8b4, Func Offset: 0xd4
	// Line 427, Address: 0x37b8c0, Func Offset: 0xe0
	// Line 429, Address: 0x37b938, Func Offset: 0x158
	// Line 433, Address: 0x37b940, Func Offset: 0x160
	// Line 467, Address: 0x37b994, Func Offset: 0x1b4
	// Line 468, Address: 0x37b998, Func Offset: 0x1b8
	// Line 469, Address: 0x37b9a8, Func Offset: 0x1c8
	// Line 472, Address: 0x37b9b4, Func Offset: 0x1d4
	// Line 478, Address: 0x37b9c0, Func Offset: 0x1e0
	// Line 480, Address: 0x37b9d8, Func Offset: 0x1f8
	// Line 483, Address: 0x37b9e8, Func Offset: 0x208
	// Line 485, Address: 0x37b9f0, Func Offset: 0x210
	// Line 490, Address: 0x37ba04, Func Offset: 0x224
	// Line 491, Address: 0x37ba08, Func Offset: 0x228
	// Line 492, Address: 0x37ba20, Func Offset: 0x240
	// Line 495, Address: 0x37ba28, Func Offset: 0x248
	// Line 498, Address: 0x37ba30, Func Offset: 0x250
	// Line 495, Address: 0x37ba38, Func Offset: 0x258
	// Line 496, Address: 0x37ba48, Func Offset: 0x268
	// Line 497, Address: 0x37ba50, Func Offset: 0x270
	// Line 498, Address: 0x37ba58, Func Offset: 0x278
	// Line 499, Address: 0x37ba64, Func Offset: 0x284
	// Line 501, Address: 0x37ba7c, Func Offset: 0x29c
	// Line 508, Address: 0x37ba84, Func Offset: 0x2a4
	// Line 509, Address: 0x37ba88, Func Offset: 0x2a8
	// Line 510, Address: 0x37ba94, Func Offset: 0x2b4
	// Line 512, Address: 0x37ba9c, Func Offset: 0x2bc
	// Line 433, Address: 0x37babc, Func Offset: 0x2dc
	// Line 512, Address: 0x37bac0, Func Offset: 0x2e0
	// Line 439, Address: 0x37bac8, Func Offset: 0x2e8
	// Line 512, Address: 0x37bacc, Func Offset: 0x2ec
	// Line 439, Address: 0x37bad0, Func Offset: 0x2f0
	// Line 512, Address: 0x37bad4, Func Offset: 0x2f4
	// Line 441, Address: 0x37baf8, Func Offset: 0x318
	// Line 512, Address: 0x37bafc, Func Offset: 0x31c
	// Line 444, Address: 0x37bb14, Func Offset: 0x334
	// Line 512, Address: 0x37bb18, Func Offset: 0x338
	// Line 444, Address: 0x37bb20, Func Offset: 0x340
	// Line 512, Address: 0x37bb28, Func Offset: 0x348
	// Line 447, Address: 0x37bb2c, Func Offset: 0x34c
	// Line 512, Address: 0x37bb3c, Func Offset: 0x35c
	// Line 447, Address: 0x37bb4c, Func Offset: 0x36c
	// Line 512, Address: 0x37bb50, Func Offset: 0x370
	// Line 448, Address: 0x37bbb8, Func Offset: 0x3d8
	// Line 512, Address: 0x37bbc0, Func Offset: 0x3e0
	// Line 454, Address: 0x37bbc4, Func Offset: 0x3e4
	// Line 512, Address: 0x37bbc8, Func Offset: 0x3e8
	// Line 456, Address: 0x37bbd0, Func Offset: 0x3f0
	// Line 512, Address: 0x37bbd4, Func Offset: 0x3f4
	// Line 456, Address: 0x37bbd8, Func Offset: 0x3f8
	// Line 512, Address: 0x37bbdc, Func Offset: 0x3fc
	// Line 456, Address: 0x37bc00, Func Offset: 0x420
	// Line 512, Address: 0x37bc04, Func Offset: 0x424
	// Line 456, Address: 0x37bc44, Func Offset: 0x464
	// Line 512, Address: 0x37bc48, Func Offset: 0x468
	// Line 456, Address: 0x37bc4c, Func Offset: 0x46c
	// Line 512, Address: 0x37bc50, Func Offset: 0x470
	// Line 457, Address: 0x37bc6c, Func Offset: 0x48c
	// Line 512, Address: 0x37bc78, Func Offset: 0x498
	// Line 460, Address: 0x37bc80, Func Offset: 0x4a0
	// Line 512, Address: 0x37bc84, Func Offset: 0x4a4
	// Line 460, Address: 0x37bc88, Func Offset: 0x4a8
	// Line 512, Address: 0x37bc8c, Func Offset: 0x4ac
	// Line 460, Address: 0x37bcac, Func Offset: 0x4cc
	// Line 512, Address: 0x37bcb0, Func Offset: 0x4d0
	// Line 465, Address: 0x37bd04, Func Offset: 0x524
	// Line 512, Address: 0x37bd10, Func Offset: 0x530
	// Line 475, Address: 0x37bd18, Func Offset: 0x538
	// Line 512, Address: 0x37bd20, Func Offset: 0x540
	// Line 475, Address: 0x37bd24, Func Offset: 0x544
	// Line 512, Address: 0x37bd28, Func Offset: 0x548
	// Line 475, Address: 0x37bd2c, Func Offset: 0x54c
	// Line 512, Address: 0x37bd30, Func Offset: 0x550
	// Line 475, Address: 0x37bd38, Func Offset: 0x558
	// Line 512, Address: 0x37bd3c, Func Offset: 0x55c
	// Line 501, Address: 0x37bdac, Func Offset: 0x5cc
	// Line 512, Address: 0x37bdb0, Func Offset: 0x5d0
	// Line 518, Address: 0x37bdb4, Func Offset: 0x5d4
	// Line 519, Address: 0x37bdc8, Func Offset: 0x5e8
	// Func End, Address: 0x37bdf8, Func Offset: 0x618
}

// update__Q24zHud14ManlinessMeterFf
// Start address: 0x37be00
void ManlinessMeter::update(float32 dt)
{
	uint32 comboPoints;
	float32 delta;
	// Line 318, Address: 0x37be00, Func Offset: 0
	// Line 321, Address: 0x37be04, Func Offset: 0x4
	// Line 318, Address: 0x37be08, Func Offset: 0x8
	// Line 321, Address: 0x37be28, Func Offset: 0x28
	// Line 397, Address: 0x37be44, Func Offset: 0x44
	// Line 401, Address: 0x37be54, Func Offset: 0x54
	// Line 336, Address: 0x37be7c, Func Offset: 0x7c
	// Line 401, Address: 0x37be80, Func Offset: 0x80
	// Line 366, Address: 0x37bf24, Func Offset: 0x124
	// Line 401, Address: 0x37bf28, Func Offset: 0x128
	// Line 371, Address: 0x37bf44, Func Offset: 0x144
	// Line 376, Address: 0x37bf48, Func Offset: 0x148
	// Line 371, Address: 0x37bf4c, Func Offset: 0x14c
	// Line 372, Address: 0x37bf50, Func Offset: 0x150
	// Line 376, Address: 0x37bf54, Func Offset: 0x154
	// Line 372, Address: 0x37bf58, Func Offset: 0x158
	// Line 401, Address: 0x37bf5c, Func Offset: 0x15c
	// Line 377, Address: 0x37bf8c, Func Offset: 0x18c
	// Line 401, Address: 0x37bf90, Func Offset: 0x190
	// Line 377, Address: 0x37bfa0, Func Offset: 0x1a0
	// Line 401, Address: 0x37bfa4, Func Offset: 0x1a4
	// Line 378, Address: 0x37bfe0, Func Offset: 0x1e0
	// Line 401, Address: 0x37bfe4, Func Offset: 0x1e4
	// Line 378, Address: 0x37bff4, Func Offset: 0x1f4
	// Line 401, Address: 0x37bff8, Func Offset: 0x1f8
	// Line 380, Address: 0x37c034, Func Offset: 0x234
	// Line 401, Address: 0x37c038, Func Offset: 0x238
	// Line 382, Address: 0x37c054, Func Offset: 0x254
	// Line 401, Address: 0x37c068, Func Offset: 0x268
	// Line 386, Address: 0x37c070, Func Offset: 0x270
	// Line 401, Address: 0x37c078, Func Offset: 0x278
	// Line 389, Address: 0x37c07c, Func Offset: 0x27c
	// Line 401, Address: 0x37c084, Func Offset: 0x284
	// Line 395, Address: 0x37c0b0, Func Offset: 0x2b0
	// Line 401, Address: 0x37c0b4, Func Offset: 0x2b4
	// Line 346, Address: 0x37c0fc, Func Offset: 0x2fc
	// Line 401, Address: 0x37c124, Func Offset: 0x324
	// Line 346, Address: 0x37c12c, Func Offset: 0x32c
	// Line 401, Address: 0x37c16c, Func Offset: 0x36c
	// Line 346, Address: 0x37c174, Func Offset: 0x374
	// Line 401, Address: 0x37c184, Func Offset: 0x384
	// Line 346, Address: 0x37c18c, Func Offset: 0x38c
	// Line 401, Address: 0x37c1a0, Func Offset: 0x3a0
	// Line 346, Address: 0x37c1a8, Func Offset: 0x3a8
	// Line 401, Address: 0x37c1b8, Func Offset: 0x3b8
	// Line 346, Address: 0x37c1bc, Func Offset: 0x3bc
	// Line 401, Address: 0x37c1c0, Func Offset: 0x3c0
	// Line 346, Address: 0x37c1e4, Func Offset: 0x3e4
	// Line 401, Address: 0x37c208, Func Offset: 0x408
	// Line 346, Address: 0x37c20c, Func Offset: 0x40c
	// Line 401, Address: 0x37c21c, Func Offset: 0x41c
	// Line 346, Address: 0x37c224, Func Offset: 0x424
	// Line 401, Address: 0x37c25c, Func Offset: 0x45c
	// Line 346, Address: 0x37c260, Func Offset: 0x460
	// Line 401, Address: 0x37c268, Func Offset: 0x468
	// Line 346, Address: 0x37c294, Func Offset: 0x494
	// Line 401, Address: 0x37c2b8, Func Offset: 0x4b8
	// Line 346, Address: 0x37c2c8, Func Offset: 0x4c8
	// Line 401, Address: 0x37c2cc, Func Offset: 0x4cc
	// Line 352, Address: 0x37c358, Func Offset: 0x558
	// Line 401, Address: 0x37c35c, Func Offset: 0x55c
	// Line 353, Address: 0x37c360, Func Offset: 0x560
	// Line 401, Address: 0x37c364, Func Offset: 0x564
	// Line 359, Address: 0x37c384, Func Offset: 0x584
	// Line 401, Address: 0x37c390, Func Offset: 0x590
	// Func End, Address: 0x37c3bc, Func Offset: 0x5bc
}

// SetImmediateValue__Q24zHud14ManlinessMeterFUi
// Start address: 0x37c3c0
void ManlinessMeter::SetImmediateValue(uint32 value)
{
	// Line 310, Address: 0x37c3c0, Func Offset: 0
	// Line 311, Address: 0x37c3cc, Func Offset: 0xc
	// Line 313, Address: 0x37c3d4, Func Offset: 0x14
	// Line 315, Address: 0x37c408, Func Offset: 0x48
	// Func End, Address: 0x37c414, Func Offset: 0x54
}

// setup__Q24zHud14ManlinessMeterFv
// Start address: 0x37c420
void ManlinessMeter::setup()
{
	uint32 meterID;
	xBase* baseWidget;
	uint32 hudLightKitID;
	RwTexCoords low;
	RwTexCoords high;
	xVec3 location;
	int32 i;
	int8 comboString[32];
	int8* textString;
	// Line 123, Address: 0x37c420, Func Offset: 0
	// Line 129, Address: 0x37c438, Func Offset: 0x18
	// Line 132, Address: 0x37c43c, Func Offset: 0x1c
	// Line 135, Address: 0x37c448, Func Offset: 0x28
	// Line 132, Address: 0x37c44c, Func Offset: 0x2c
	// Line 135, Address: 0x37c450, Func Offset: 0x30
	// Line 136, Address: 0x37c458, Func Offset: 0x38
	// Line 137, Address: 0x37c4ac, Func Offset: 0x8c
	// Line 140, Address: 0x37c4b4, Func Offset: 0x94
	// Line 143, Address: 0x37c4b8, Func Offset: 0x98
	// Line 147, Address: 0x37c4c0, Func Offset: 0xa0
	// Line 143, Address: 0x37c4d4, Func Offset: 0xb4
	// Line 145, Address: 0x37c4e4, Func Offset: 0xc4
	// Line 146, Address: 0x37c4e8, Func Offset: 0xc8
	// Line 147, Address: 0x37c4ec, Func Offset: 0xcc
	// Line 148, Address: 0x37c4f4, Func Offset: 0xd4
	// Line 149, Address: 0x37c4fc, Func Offset: 0xdc
	// Line 159, Address: 0x37c500, Func Offset: 0xe0
	// Line 160, Address: 0x37c50c, Func Offset: 0xec
	// Line 162, Address: 0x37c56c, Func Offset: 0x14c
	// Line 165, Address: 0x37c574, Func Offset: 0x154
	// Line 167, Address: 0x37c578, Func Offset: 0x158
	// Line 168, Address: 0x37c588, Func Offset: 0x168
	// Line 169, Address: 0x37c58c, Func Offset: 0x16c
	// Line 167, Address: 0x37c590, Func Offset: 0x170
	// Line 171, Address: 0x37c594, Func Offset: 0x174
	// Line 168, Address: 0x37c5a0, Func Offset: 0x180
	// Line 173, Address: 0x37c5a4, Func Offset: 0x184
	// Line 169, Address: 0x37c5a8, Func Offset: 0x188
	// Line 167, Address: 0x37c5ac, Func Offset: 0x18c
	// Line 182, Address: 0x37c5b0, Func Offset: 0x190
	// Line 183, Address: 0x37c5bc, Func Offset: 0x19c
	// Line 184, Address: 0x37c644, Func Offset: 0x224
	// Line 186, Address: 0x37c64c, Func Offset: 0x22c
	// Line 187, Address: 0x37c694, Func Offset: 0x274
	// Line 188, Address: 0x37c698, Func Offset: 0x278
	// Line 187, Address: 0x37c69c, Func Offset: 0x27c
	// Line 188, Address: 0x37c6a0, Func Offset: 0x280
	// Line 189, Address: 0x37c6a4, Func Offset: 0x284
	// Line 198, Address: 0x37c6ac, Func Offset: 0x28c
	// Line 201, Address: 0x37c6ec, Func Offset: 0x2cc
	// Line 202, Address: 0x37c6f4, Func Offset: 0x2d4
	// Line 204, Address: 0x37c6fc, Func Offset: 0x2dc
	// Line 206, Address: 0x37c704, Func Offset: 0x2e4
	// Line 207, Address: 0x37c70c, Func Offset: 0x2ec
	// Line 208, Address: 0x37c720, Func Offset: 0x300
	// Line 209, Address: 0x37c728, Func Offset: 0x308
	// Line 210, Address: 0x37c730, Func Offset: 0x310
	// Line 219, Address: 0x37c740, Func Offset: 0x320
	// Line 220, Address: 0x37c74c, Func Offset: 0x32c
	// Line 221, Address: 0x37c790, Func Offset: 0x370
	// Line 223, Address: 0x37c798, Func Offset: 0x378
	// Line 224, Address: 0x37c7a4, Func Offset: 0x384
	// Line 233, Address: 0x37c7ac, Func Offset: 0x38c
	// Line 234, Address: 0x37c7b8, Func Offset: 0x398
	// Line 235, Address: 0x37c7c0, Func Offset: 0x3a0
	// Line 237, Address: 0x37c7c8, Func Offset: 0x3a8
	// Line 238, Address: 0x37c7d0, Func Offset: 0x3b0
	// Line 239, Address: 0x37c7e4, Func Offset: 0x3c4
	// Line 240, Address: 0x37c7ec, Func Offset: 0x3cc
	// Line 250, Address: 0x37c7f4, Func Offset: 0x3d4
	// Line 251, Address: 0x37c800, Func Offset: 0x3e0
	// Line 252, Address: 0x37c808, Func Offset: 0x3e8
	// Line 254, Address: 0x37c810, Func Offset: 0x3f0
	// Line 255, Address: 0x37c818, Func Offset: 0x3f8
	// Line 256, Address: 0x37c82c, Func Offset: 0x40c
	// Line 257, Address: 0x37c834, Func Offset: 0x414
	// Line 267, Address: 0x37c83c, Func Offset: 0x41c
	// Line 271, Address: 0x37c848, Func Offset: 0x428
	// Line 272, Address: 0x37c85c, Func Offset: 0x43c
	// Line 273, Address: 0x37c868, Func Offset: 0x448
	// Line 275, Address: 0x37c870, Func Offset: 0x450
	// Line 278, Address: 0x37c878, Func Offset: 0x458
	// Line 282, Address: 0x37c888, Func Offset: 0x468
	// Line 283, Address: 0x37c88c, Func Offset: 0x46c
	// Line 282, Address: 0x37c890, Func Offset: 0x470
	// Line 283, Address: 0x37c89c, Func Offset: 0x47c
	// Line 284, Address: 0x37c8a4, Func Offset: 0x484
	// Line 283, Address: 0x37c8a8, Func Offset: 0x488
	// Line 284, Address: 0x37c8ac, Func Offset: 0x48c
	// Line 285, Address: 0x37c8b4, Func Offset: 0x494
	// Line 284, Address: 0x37c8b8, Func Offset: 0x498
	// Line 285, Address: 0x37c8bc, Func Offset: 0x49c
	// Line 286, Address: 0x37c8c4, Func Offset: 0x4a4
	// Line 285, Address: 0x37c8c8, Func Offset: 0x4a8
	// Line 286, Address: 0x37c8cc, Func Offset: 0x4ac
	// Line 287, Address: 0x37c8d4, Func Offset: 0x4b4
	// Line 286, Address: 0x37c8d8, Func Offset: 0x4b8
	// Line 287, Address: 0x37c8dc, Func Offset: 0x4bc
	// Line 288, Address: 0x37c8e4, Func Offset: 0x4c4
	// Line 287, Address: 0x37c8e8, Func Offset: 0x4c8
	// Line 288, Address: 0x37c8ec, Func Offset: 0x4cc
	// Line 289, Address: 0x37c8f4, Func Offset: 0x4d4
	// Line 288, Address: 0x37c8f8, Func Offset: 0x4d8
	// Line 289, Address: 0x37c8fc, Func Offset: 0x4dc
	// Line 290, Address: 0x37c904, Func Offset: 0x4e4
	// Line 289, Address: 0x37c908, Func Offset: 0x4e8
	// Line 290, Address: 0x37c90c, Func Offset: 0x4ec
	// Line 291, Address: 0x37c914, Func Offset: 0x4f4
	// Line 290, Address: 0x37c918, Func Offset: 0x4f8
	// Line 291, Address: 0x37c91c, Func Offset: 0x4fc
	// Line 292, Address: 0x37c924, Func Offset: 0x504
	// Line 291, Address: 0x37c928, Func Offset: 0x508
	// Line 292, Address: 0x37c92c, Func Offset: 0x50c
	// Line 293, Address: 0x37c934, Func Offset: 0x514
	// Line 292, Address: 0x37c938, Func Offset: 0x518
	// Line 293, Address: 0x37c93c, Func Offset: 0x51c
	// Line 294, Address: 0x37c944, Func Offset: 0x524
	// Line 293, Address: 0x37c948, Func Offset: 0x528
	// Line 294, Address: 0x37c94c, Func Offset: 0x52c
	// Line 304, Address: 0x37c954, Func Offset: 0x534
	// Line 294, Address: 0x37c958, Func Offset: 0x538
	// Line 304, Address: 0x37c95c, Func Offset: 0x53c
	// Line 305, Address: 0x37c970, Func Offset: 0x550
	// Line 307, Address: 0x37c980, Func Offset: 0x560
	// Func End, Address: 0x37c9d4, Func Offset: 0x5b4
}

// reset__Q24zHud14ManlinessMeterFv
// Start address: 0x37c9e0
void ManlinessMeter::reset()
{
	int32 i;
	// Line 109, Address: 0x37c9e0, Func Offset: 0
	// Line 112, Address: 0x37c9f8, Func Offset: 0x18
	// Line 114, Address: 0x37ca04, Func Offset: 0x24
	// Line 116, Address: 0x37ca0c, Func Offset: 0x2c
	// Line 117, Address: 0x37ca14, Func Offset: 0x34
	// Line 118, Address: 0x37ca18, Func Offset: 0x38
	// Line 119, Address: 0x37ca28, Func Offset: 0x48
	// Line 120, Address: 0x37ca38, Func Offset: 0x58
	// Func End, Address: 0x37ca50, Func Offset: 0x70
}

// __ct__Q24zHud14ManlinessMeterFv
// Start address: 0x37ca50
void* ManlinessMeter::__ct()
{
	// Line 94, Address: 0x37ca50, Func Offset: 0
	// Line 95, Address: 0x37ca9c, Func Offset: 0x4c
	// Line 94, Address: 0x37caa0, Func Offset: 0x50
	// Line 96, Address: 0x37caa4, Func Offset: 0x54
	// Line 94, Address: 0x37caa8, Func Offset: 0x58
	// Line 96, Address: 0x37caac, Func Offset: 0x5c
	// Line 94, Address: 0x37cab0, Func Offset: 0x60
	// Line 95, Address: 0x37cad8, Func Offset: 0x88
	// Line 96, Address: 0x37cae0, Func Offset: 0x90
	// Line 97, Address: 0x37cae8, Func Offset: 0x98
	// Line 99, Address: 0x37caec, Func Offset: 0x9c
	// Line 98, Address: 0x37caf0, Func Offset: 0xa0
	// Line 100, Address: 0x37caf4, Func Offset: 0xa4
	// Line 99, Address: 0x37caf8, Func Offset: 0xa8
	// Line 100, Address: 0x37cafc, Func Offset: 0xac
	// Line 101, Address: 0x37cb08, Func Offset: 0xb8
	// Line 102, Address: 0x37cb1c, Func Offset: 0xcc
	// Line 106, Address: 0x37cb20, Func Offset: 0xd0
	// Line 103, Address: 0x37cb24, Func Offset: 0xd4
	// Line 104, Address: 0x37cb28, Func Offset: 0xd8
	// Line 105, Address: 0x37cb2c, Func Offset: 0xdc
	// Line 106, Address: 0x37cb30, Func Offset: 0xe0
	// Func End, Address: 0x37cb40, Func Offset: 0xf0
}

