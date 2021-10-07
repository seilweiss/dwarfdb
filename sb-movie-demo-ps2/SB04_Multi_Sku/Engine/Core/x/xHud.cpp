



uint8 delay_motive_update(widget& w, motive& m, float32 dt);
void right_hide_widget(widget& w);
void left_hide_widget(widget& w);
void bottom_hide_widget(widget& w);
void top_hide_widget(widget& w);
uint8 shake_motive_update(motive& m, float32 dt);
uint8 accelerate_motive_update(motive& m, float32 dt);
uint8 linear_motive_update(widget& w, motive& m, float32 dt);
void render_one_model(xModelInstance& m, float32 alpha, basic_rect_0& r, xVec3& from, xVec3& to, xMat4x3& frame);
void cb_dispatch(xBase* from, xBase* to, uint32 event, float32* argf, xBase* argw, uint32 argwi);
void clear_motives();
void add_motive(motive& m);
void render_all();
void fp_render(widget& w);
void delay_hide_widget(move_direction d, float32 time);
void hide(move_direction d, uint8 clearmotives, uint8 bSkipHideMotive);
void show(move_direction dir, uint8 clearmotives, uint8 bSkipShowMotive);
uint8 is(uint32 id);
uint32 type();
void scene_enter();
void updater(float32 dt);
void presetup();
void render();
void update(float32 dt);
void destroy();
void init();
void for_each(uint8 type, uint32 size, functor_update f);
void for_each(uint8 type, uint32 size, void(*f)(widget&));
void for_each(uint8 type, uint32 size, functor_disable f);

// delay_motive_update__4xhudFRQ24xhud6widgetRQ24xhud6motivef
// Start address: 0x3cf050
uint8 delay_motive_update(widget& w, motive& m, float32 dt)
{
	// Line 1072, Address: 0x3cf050, Func Offset: 0
	// Line 1073, Address: 0x3cf058, Func Offset: 0x8
	// Line 1076, Address: 0x3cf074, Func Offset: 0x24
	// Line 1078, Address: 0x3cf078, Func Offset: 0x28
	// Line 1076, Address: 0x3cf080, Func Offset: 0x30
	// Line 1078, Address: 0x3cf088, Func Offset: 0x38
	// Line 1085, Address: 0x3cf0a0, Func Offset: 0x50
	// Line 1073, Address: 0x3cf0ac, Func Offset: 0x5c
	// Line 1085, Address: 0x3cf0b0, Func Offset: 0x60
	// Line 1073, Address: 0x3cf0b8, Func Offset: 0x68
	// Line 1085, Address: 0x3cf0bc, Func Offset: 0x6c
	// Line 1073, Address: 0x3cf0d0, Func Offset: 0x80
	// Line 1074, Address: 0x3cf0d8, Func Offset: 0x88
	// Line 1085, Address: 0x3cf0e0, Func Offset: 0x90
	// Line 1083, Address: 0x3cf0ec, Func Offset: 0x9c
	// Line 1086, Address: 0x3cf0f0, Func Offset: 0xa0
	// Func End, Address: 0x3cf0fc, Func Offset: 0xac
}

// right_hide_widget__4xhudFRQ24xhud6widgetRQ24xhud6motive
// Start address: 0x3cf100
void right_hide_widget(widget& w)
{
	// Line 1068, Address: 0x3cf100, Func Offset: 0
	// Func End, Address: 0x3cf110, Func Offset: 0x10
}

// left_hide_widget__4xhudFRQ24xhud6widgetRQ24xhud6motive
// Start address: 0x3cf110
void left_hide_widget(widget& w)
{
	// Line 1063, Address: 0x3cf110, Func Offset: 0
	// Func End, Address: 0x3cf120, Func Offset: 0x10
}

// bottom_hide_widget__4xhudFRQ24xhud6widgetRQ24xhud6motive
// Start address: 0x3cf120
void bottom_hide_widget(widget& w)
{
	// Line 1058, Address: 0x3cf120, Func Offset: 0
	// Func End, Address: 0x3cf130, Func Offset: 0x10
}

// top_hide_widget__4xhudFRQ24xhud6widgetRQ24xhud6motive
// Start address: 0x3cf130
void top_hide_widget(widget& w)
{
	// Line 1053, Address: 0x3cf130, Func Offset: 0
	// Func End, Address: 0x3cf140, Func Offset: 0x10
}

// shake_motive_update__4xhudFRQ24xhud6widgetRQ24xhud6motivef
// Start address: 0x3cf140
uint8 shake_motive_update(motive& m, float32 dt)
{
	uint32& iter;
	uint32 i;
	float32 diff;
	float32 mult[4];
	// Line 1029, Address: 0x3cf140, Func Offset: 0
	// Line 1034, Address: 0x3cf160, Func Offset: 0x20
	// Line 1035, Address: 0x3cf170, Func Offset: 0x30
	// Line 1043, Address: 0x3cf17c, Func Offset: 0x3c
	// Line 1044, Address: 0x3cf180, Func Offset: 0x40
	// Line 1045, Address: 0x3cf198, Func Offset: 0x58
	// Line 1046, Address: 0x3cf1a0, Func Offset: 0x60
	// Line 1048, Address: 0x3cf1a4, Func Offset: 0x64
	// Line 1046, Address: 0x3cf1a8, Func Offset: 0x68
	// Line 1047, Address: 0x3cf1b4, Func Offset: 0x74
	// Line 1048, Address: 0x3cf1bc, Func Offset: 0x7c
	// Line 1029, Address: 0x3cf1c8, Func Offset: 0x88
	// Line 1048, Address: 0x3cf1cc, Func Offset: 0x8c
	// Line 1029, Address: 0x3cf1d4, Func Offset: 0x94
	// Line 1048, Address: 0x3cf1d8, Func Offset: 0x98
	// Line 1029, Address: 0x3cf1ec, Func Offset: 0xac
	// Line 1030, Address: 0x3cf1f4, Func Offset: 0xb4
	// Line 1048, Address: 0x3cf1fc, Func Offset: 0xbc
	// Line 1040, Address: 0x3cf200, Func Offset: 0xc0
	// Line 1048, Address: 0x3cf204, Func Offset: 0xc4
	// Line 1038, Address: 0x3cf210, Func Offset: 0xd0
	// Line 1048, Address: 0x3cf214, Func Offset: 0xd4
	// Line 1040, Address: 0x3cf218, Func Offset: 0xd8
	// Line 1048, Address: 0x3cf220, Func Offset: 0xe0
	// Line 1045, Address: 0x3cf224, Func Offset: 0xe4
	// Line 1049, Address: 0x3cf230, Func Offset: 0xf0
	// Func End, Address: 0x3cf238, Func Offset: 0xf8
}

// accelerate_motive_update__4xhudFRQ24xhud6widgetRQ24xhud6motivef
// Start address: 0x3cf240
uint8 accelerate_motive_update(motive& m, float32 dt)
{
	float32 diff;
	float32 remaining;
	// Line 1006, Address: 0x3cf240, Func Offset: 0
	// Line 1011, Address: 0x3cf264, Func Offset: 0x24
	// Line 1013, Address: 0x3cf284, Func Offset: 0x44
	// Line 1015, Address: 0x3cf290, Func Offset: 0x50
	// Line 1014, Address: 0x3cf294, Func Offset: 0x54
	// Line 1015, Address: 0x3cf29c, Func Offset: 0x5c
	// Line 1018, Address: 0x3cf2d0, Func Offset: 0x90
	// Line 1020, Address: 0x3cf2d4, Func Offset: 0x94
	// Line 1018, Address: 0x3cf2d8, Func Offset: 0x98
	// Line 1019, Address: 0x3cf2e4, Func Offset: 0xa4
	// Line 1020, Address: 0x3cf2e8, Func Offset: 0xa8
	// Line 1006, Address: 0x3cf2f4, Func Offset: 0xb4
	// Line 1020, Address: 0x3cf2f8, Func Offset: 0xb8
	// Line 1006, Address: 0x3cf300, Func Offset: 0xc0
	// Line 1020, Address: 0x3cf304, Func Offset: 0xc4
	// Line 1006, Address: 0x3cf318, Func Offset: 0xd8
	// Line 1007, Address: 0x3cf320, Func Offset: 0xe0
	// Line 1022, Address: 0x3cf328, Func Offset: 0xe8
	// Line 1024, Address: 0x3cf32c, Func Offset: 0xec
	// Line 1022, Address: 0x3cf330, Func Offset: 0xf0
	// Line 1023, Address: 0x3cf33c, Func Offset: 0xfc
	// Line 1025, Address: 0x3cf348, Func Offset: 0x108
	// Func End, Address: 0x3cf350, Func Offset: 0x110
}

// linear_motive_update__4xhudFRQ24xhud6widgetRQ24xhud6motivef
// Start address: 0x3cf350
uint8 linear_motive_update(widget& w, motive& m, float32 dt)
{
	float32 diff;
	float32 remaining;
	// Line 959, Address: 0x3cf350, Func Offset: 0
	// Line 960, Address: 0x3cf358, Func Offset: 0x8
	// Line 964, Address: 0x3cf374, Func Offset: 0x24
	// Line 966, Address: 0x3cf378, Func Offset: 0x28
	// Line 968, Address: 0x3cf384, Func Offset: 0x34
	// Line 969, Address: 0x3cf38c, Func Offset: 0x3c
	// Line 972, Address: 0x3cf3cc, Func Offset: 0x7c
	// Line 973, Address: 0x3cf3dc, Func Offset: 0x8c
	// Line 974, Address: 0x3cf3e8, Func Offset: 0x98
	// Line 976, Address: 0x3cf3f0, Func Offset: 0xa0
	// Line 978, Address: 0x3cf3f8, Func Offset: 0xa8
	// Line 985, Address: 0x3cf400, Func Offset: 0xb0
	// Line 986, Address: 0x3cf408, Func Offset: 0xb8
	// Line 985, Address: 0x3cf410, Func Offset: 0xc0
	// Line 986, Address: 0x3cf414, Func Offset: 0xc4
	// Line 988, Address: 0x3cf420, Func Offset: 0xd0
	// Line 989, Address: 0x3cf430, Func Offset: 0xe0
	// Line 990, Address: 0x3cf43c, Func Offset: 0xec
	// Line 992, Address: 0x3cf444, Func Offset: 0xf4
	// Line 994, Address: 0x3cf44c, Func Offset: 0xfc
	// Line 960, Address: 0x3cf458, Func Offset: 0x108
	// Line 994, Address: 0x3cf45c, Func Offset: 0x10c
	// Line 960, Address: 0x3cf464, Func Offset: 0x114
	// Line 994, Address: 0x3cf468, Func Offset: 0x118
	// Line 960, Address: 0x3cf47c, Func Offset: 0x12c
	// Line 961, Address: 0x3cf484, Func Offset: 0x134
	// Line 994, Address: 0x3cf48c, Func Offset: 0x13c
	// Line 980, Address: 0x3cf494, Func Offset: 0x144
	// Line 994, Address: 0x3cf498, Func Offset: 0x148
	// Line 981, Address: 0x3cf4a0, Func Offset: 0x150
	// Line 994, Address: 0x3cf4a4, Func Offset: 0x154
	// Line 1001, Address: 0x3cf4a8, Func Offset: 0x158
	// Line 996, Address: 0x3cf4b8, Func Offset: 0x168
	// Line 1001, Address: 0x3cf4bc, Func Offset: 0x16c
	// Line 997, Address: 0x3cf4c4, Func Offset: 0x174
	// Line 1002, Address: 0x3cf4d0, Func Offset: 0x180
	// Func End, Address: 0x3cf4dc, Func Offset: 0x18c
}

// render_one_model__Q24xhud19@unnamed@xWad2_cpp@FR14xModelInstancefRC13basic_rect<f>RC5xVec3RC5xVec3RC7xMat4x3
// Start address: 0x3cf4e0
void render_one_model(xModelInstance& m, float32 alpha, basic_rect_0& r, xVec3& from, xVec3& to, xMat4x3& frame)
{
	uint8 oldAlphaCmp;
	uint32 oldZWrite;
	// Line 845, Address: 0x3cf4e0, Func Offset: 0
	// Line 850, Address: 0x3cf4e4, Func Offset: 0x4
	// Line 845, Address: 0x3cf4e8, Func Offset: 0x8
	// Line 849, Address: 0x3cf524, Func Offset: 0x44
	// Line 850, Address: 0x3cf52c, Func Offset: 0x4c
	// Line 849, Address: 0x3cf530, Func Offset: 0x50
	// Line 850, Address: 0x3cf538, Func Offset: 0x58
	// Line 851, Address: 0x3cf578, Func Offset: 0x98
	// Line 859, Address: 0x3cf5dc, Func Offset: 0xfc
	// Line 851, Address: 0x3cf5e4, Func Offset: 0x104
	// Line 859, Address: 0x3cf5ec, Func Offset: 0x10c
	// Line 851, Address: 0x3cf600, Func Offset: 0x120
	// Line 859, Address: 0x3cf604, Func Offset: 0x124
	// Line 862, Address: 0x3cf648, Func Offset: 0x168
	// Line 867, Address: 0x3cf66c, Func Offset: 0x18c
	// Line 868, Address: 0x3cf680, Func Offset: 0x1a0
	// Line 870, Address: 0x3cf69c, Func Offset: 0x1bc
	// Line 868, Address: 0x3cf6a0, Func Offset: 0x1c0
	// Line 870, Address: 0x3cf6a4, Func Offset: 0x1c4
	// Line 872, Address: 0x3cf6b0, Func Offset: 0x1d0
	// Line 874, Address: 0x3cf70c, Func Offset: 0x22c
	// Line 877, Address: 0x3cf718, Func Offset: 0x238
	// Line 880, Address: 0x3cf720, Func Offset: 0x240
	// Line 877, Address: 0x3cf724, Func Offset: 0x244
	// Line 880, Address: 0x3cf728, Func Offset: 0x248
	// Line 883, Address: 0x3cf738, Func Offset: 0x258
	// Line 885, Address: 0x3cf744, Func Offset: 0x264
	// Line 888, Address: 0x3cf758, Func Offset: 0x278
	// Line 890, Address: 0x3cf764, Func Offset: 0x284
	// Line 895, Address: 0x3cf778, Func Offset: 0x298
	// Line 899, Address: 0x3cf78c, Func Offset: 0x2ac
	// Line 901, Address: 0x3cf79c, Func Offset: 0x2bc
	// Line 903, Address: 0x3cf7ac, Func Offset: 0x2cc
	// Line 906, Address: 0x3cf7bc, Func Offset: 0x2dc
	// Line 908, Address: 0x3cf7cc, Func Offset: 0x2ec
	// Line 914, Address: 0x3cf7dc, Func Offset: 0x2fc
	// Line 915, Address: 0x3cf7e0, Func Offset: 0x300
	// Line 914, Address: 0x3cf7e4, Func Offset: 0x304
	// Line 915, Address: 0x3cf7e8, Func Offset: 0x308
	// Line 914, Address: 0x3cf7ec, Func Offset: 0x30c
	// Line 915, Address: 0x3cf7f0, Func Offset: 0x310
	// Line 923, Address: 0x3cf7f8, Func Offset: 0x318
	// Line 924, Address: 0x3cf804, Func Offset: 0x324
	// Func End, Address: 0x3cf834, Func Offset: 0x354
}

// cb_dispatch__Q24xhud6widgetFP5xBaseP5xBaseUiPCfP5xBaseUi
// Start address: 0x3cf840
void cb_dispatch(xBase* from, xBase* to, uint32 event, float32* argf, xBase* argw, uint32 argwi)
{
	// Line 671, Address: 0x3cf844, Func Offset: 0x4
	// Func End, Address: 0x3cf85c, Func Offset: 0x1c
}

// clear_motives__Q24xhud6widgetFv
// Start address: 0x3cf860
void widget::clear_motives()
{
	motive_node** itp;
	motive_node* it;
	// Line 625, Address: 0x3cf860, Func Offset: 0
	// Line 626, Address: 0x3cf878, Func Offset: 0x18
	// Line 628, Address: 0x3cf87c, Func Offset: 0x1c
	// Line 630, Address: 0x3cf888, Func Offset: 0x28
	// Line 631, Address: 0x3cf8d8, Func Offset: 0x78
	// Line 632, Address: 0x3cf8dc, Func Offset: 0x7c
	// Line 631, Address: 0x3cf8e8, Func Offset: 0x88
	// Line 632, Address: 0x3cf8ec, Func Offset: 0x8c
	// Line 633, Address: 0x3cf8f8, Func Offset: 0x98
	// Line 634, Address: 0x3cf8fc, Func Offset: 0x9c
	// Line 635, Address: 0x3cf908, Func Offset: 0xa8
	// Func End, Address: 0x3cf938, Func Offset: 0xd8
}

// add_motive__Q24xhud6widgetFRCQ24xhud6motive
// Start address: 0x3cf940
void widget::add_motive(motive& m)
{
	motive_node* n;
	// Line 608, Address: 0x3cf940, Func Offset: 0
	// Line 609, Address: 0x3cf948, Func Offset: 0x8
	// Line 610, Address: 0x3cf954, Func Offset: 0x14
	// Line 611, Address: 0x3cf9c4, Func Offset: 0x84
	// Line 618, Address: 0x3cf9d0, Func Offset: 0x90
	// Line 619, Address: 0x3cf9dc, Func Offset: 0x9c
	// Line 620, Address: 0x3cf9e4, Func Offset: 0xa4
	// Line 622, Address: 0x3cf9e8, Func Offset: 0xa8
	// Line 615, Address: 0x3cf9f8, Func Offset: 0xb8
	// Line 622, Address: 0x3cfa08, Func Offset: 0xc8
	// Func End, Address: 0x3cfa10, Func Offset: 0xd0
}

// render_all__Q24xhud6widgetFv
// Start address: 0x3cfa10
void render_all()
{
	RwCamera* camera;
	uint32 i;
	// Line 550, Address: 0x3cfa10, Func Offset: 0
	// Line 555, Address: 0x3cfa14, Func Offset: 0x4
	// Line 550, Address: 0x3cfa18, Func Offset: 0x8
	// Line 555, Address: 0x3cfa28, Func Offset: 0x18
	// Line 556, Address: 0x3cfa2c, Func Offset: 0x1c
	// Line 561, Address: 0x3cfa34, Func Offset: 0x24
	// Line 563, Address: 0x3cfa38, Func Offset: 0x28
	// Line 561, Address: 0x3cfa3c, Func Offset: 0x2c
	// Line 562, Address: 0x3cfa44, Func Offset: 0x34
	// Line 563, Address: 0x3cfa4c, Func Offset: 0x3c
	// Line 565, Address: 0x3cfa54, Func Offset: 0x44
	// Line 566, Address: 0x3cfa64, Func Offset: 0x54
	// Line 567, Address: 0x3cfa6c, Func Offset: 0x5c
	// Line 575, Address: 0x3cfa7c, Func Offset: 0x6c
	// Line 577, Address: 0x3cfa88, Func Offset: 0x78
	// Line 578, Address: 0x3cfa9c, Func Offset: 0x8c
	// Line 582, Address: 0x3cfaac, Func Offset: 0x9c
	// Line 584, Address: 0x3cfabc, Func Offset: 0xac
	// Line 585, Address: 0x3cfac4, Func Offset: 0xb4
	// Line 586, Address: 0x3cfacc, Func Offset: 0xbc
	// Line 587, Address: 0x3cfad4, Func Offset: 0xc4
	// Line 588, Address: 0x3cfae4, Func Offset: 0xd4
	// Line 593, Address: 0x3cfaec, Func Offset: 0xdc
	// Func End, Address: 0x3cfb04, Func Offset: 0xf4
}

// fp_render__Q24xhud19@unnamed@xWad2_cpp@FRQ24xhud6widget
// Start address: 0x3cfb10
void fp_render(widget& w)
{
	// Line 502, Address: 0x3cfb10, Func Offset: 0
	// Line 503, Address: 0x3cfb18, Func Offset: 0x8
	// Line 507, Address: 0x3cfb38, Func Offset: 0x28
	// Func End, Address: 0x3cfb60, Func Offset: 0x50
}

// delay_hide_widget__Q24xhud6widgetFQ34xhud6widget14move_directionf
// Start address: 0x3cfb70
void widget::delay_hide_widget(move_direction d, float32 time)
{
	// Line 445, Address: 0x3cfb70, Func Offset: 0
	// Line 449, Address: 0x3cfba4, Func Offset: 0x34
	// Line 450, Address: 0x3cfc30, Func Offset: 0xc0
	// Line 453, Address: 0x3cfc38, Func Offset: 0xc8
	// Line 454, Address: 0x3cfcc4, Func Offset: 0x154
	// Line 457, Address: 0x3cfccc, Func Offset: 0x15c
	// Line 458, Address: 0x3cfd58, Func Offset: 0x1e8
	// Line 461, Address: 0x3cfd60, Func Offset: 0x1f0
	// Line 465, Address: 0x3cfdf0, Func Offset: 0x280
	// Line 449, Address: 0x3cfe00, Func Offset: 0x290
	// Line 465, Address: 0x3cfe10, Func Offset: 0x2a0
	// Line 453, Address: 0x3cfe18, Func Offset: 0x2a8
	// Line 465, Address: 0x3cfe28, Func Offset: 0x2b8
	// Line 457, Address: 0x3cfe30, Func Offset: 0x2c0
	// Line 465, Address: 0x3cfe40, Func Offset: 0x2d0
	// Line 461, Address: 0x3cfe48, Func Offset: 0x2d8
	// Line 465, Address: 0x3cfe58, Func Offset: 0x2e8
	// Func End, Address: 0x3cfe60, Func Offset: 0x2f0
}

// hide__Q24xhud6widgetFQ34xhud6widget14move_directionbb
// Start address: 0x3cfe60
void widget::hide(move_direction d, uint8 clearmotives, uint8 bSkipHideMotive)
{
	float32 sx;
	float32 sy;
	float32 cx;
	float32 cy;
	float32 tcx;
	float32 tcy;
	float32 vx;
	float32 vy;
	float32 ex;
	float32 ey;
	// Line 341, Address: 0x3cfe60, Func Offset: 0
	// Line 348, Address: 0x3cfe84, Func Offset: 0x24
	// Line 351, Address: 0x3cfe8c, Func Offset: 0x2c
	// Line 366, Address: 0x3cfe9c, Func Offset: 0x3c
	// Line 368, Address: 0x3cfea0, Func Offset: 0x40
	// Line 373, Address: 0x3cfea4, Func Offset: 0x44
	// Line 369, Address: 0x3cfea8, Func Offset: 0x48
	// Line 373, Address: 0x3cfeac, Func Offset: 0x4c
	// Line 367, Address: 0x3cfeb0, Func Offset: 0x50
	// Line 373, Address: 0x3cfeb4, Func Offset: 0x54
	// Line 368, Address: 0x3cfebc, Func Offset: 0x5c
	// Line 369, Address: 0x3cfec4, Func Offset: 0x64
	// Line 371, Address: 0x3cfecc, Func Offset: 0x6c
	// Line 372, Address: 0x3cfed0, Func Offset: 0x70
	// Line 373, Address: 0x3cfed4, Func Offset: 0x74
	// Line 378, Address: 0x3cfee8, Func Offset: 0x88
	// Line 380, Address: 0x3cfef4, Func Offset: 0x94
	// Line 381, Address: 0x3cff1c, Func Offset: 0xbc
	// Line 382, Address: 0x3cff30, Func Offset: 0xd0
	// Line 385, Address: 0x3cff38, Func Offset: 0xd8
	// Line 386, Address: 0x3cff60, Func Offset: 0x100
	// Line 393, Address: 0x3cff6c, Func Offset: 0x10c
	// Line 392, Address: 0x3cff70, Func Offset: 0x110
	// Line 397, Address: 0x3cff74, Func Offset: 0x114
	// Line 400, Address: 0x3cff78, Func Offset: 0x118
	// Line 392, Address: 0x3cff7c, Func Offset: 0x11c
	// Line 397, Address: 0x3cff84, Func Offset: 0x124
	// Line 392, Address: 0x3cff88, Func Offset: 0x128
	// Line 393, Address: 0x3cff8c, Func Offset: 0x12c
	// Line 392, Address: 0x3cff90, Func Offset: 0x130
	// Line 393, Address: 0x3cff94, Func Offset: 0x134
	// Line 392, Address: 0x3cff98, Func Offset: 0x138
	// Line 393, Address: 0x3cff9c, Func Offset: 0x13c
	// Line 395, Address: 0x3cffa0, Func Offset: 0x140
	// Line 397, Address: 0x3cffac, Func Offset: 0x14c
	// Line 398, Address: 0x3cffb4, Func Offset: 0x154
	// Line 400, Address: 0x3cffb8, Func Offset: 0x158
	// Line 404, Address: 0x3cffe4, Func Offset: 0x184
	// Line 405, Address: 0x3cffec, Func Offset: 0x18c
	// Line 407, Address: 0x3cfff4, Func Offset: 0x194
	// Line 408, Address: 0x3d007c, Func Offset: 0x21c
	// Line 411, Address: 0x3d0084, Func Offset: 0x224
	// Line 412, Address: 0x3d008c, Func Offset: 0x22c
	// Line 414, Address: 0x3d0094, Func Offset: 0x234
	// Line 419, Address: 0x3d0120, Func Offset: 0x2c0
	// Line 425, Address: 0x3d0128, Func Offset: 0x2c8
	// Line 419, Address: 0x3d0130, Func Offset: 0x2d0
	// Line 425, Address: 0x3d0134, Func Offset: 0x2d4
	// Line 426, Address: 0x3d01b0, Func Offset: 0x350
	// Line 349, Address: 0x3d01d4, Func Offset: 0x374
	// Line 426, Address: 0x3d01d8, Func Offset: 0x378
	// Line 349, Address: 0x3d0200, Func Offset: 0x3a0
	// Line 426, Address: 0x3d0208, Func Offset: 0x3a8
	// Line 349, Address: 0x3d020c, Func Offset: 0x3ac
	// Line 426, Address: 0x3d0210, Func Offset: 0x3b0
	// Line 349, Address: 0x3d0220, Func Offset: 0x3c0
	// Line 426, Address: 0x3d0224, Func Offset: 0x3c4
	// Line 376, Address: 0x3d0260, Func Offset: 0x400
	// Line 426, Address: 0x3d0268, Func Offset: 0x408
	// Line 407, Address: 0x3d0270, Func Offset: 0x410
	// Line 426, Address: 0x3d0280, Func Offset: 0x420
	// Line 414, Address: 0x3d0288, Func Offset: 0x428
	// Line 426, Address: 0x3d0298, Func Offset: 0x438
	// Line 421, Address: 0x3d029c, Func Offset: 0x43c
	// Line 426, Address: 0x3d02a0, Func Offset: 0x440
	// Line 423, Address: 0x3d02b0, Func Offset: 0x450
	// Line 426, Address: 0x3d02b8, Func Offset: 0x458
	// Line 425, Address: 0x3d02c0, Func Offset: 0x460
	// Line 426, Address: 0x3d02d0, Func Offset: 0x470
	// Func End, Address: 0x3d02f0, Func Offset: 0x490
}

// show__Q24xhud6widgetFQ34xhud6widget14move_directionbb
// Start address: 0x3d0300
void widget::show(move_direction dir, uint8 clearmotives, uint8 bSkipShowMotive)
{
	float32 dx;
	float32 dy;
	float32 vx;
	float32 vy;
	float32 a;
	float32 ax;
	float32 ay;
	float32 da;
	// Line 290, Address: 0x3d0300, Func Offset: 0
	// Line 294, Address: 0x3d0324, Func Offset: 0x24
	// Line 297, Address: 0x3d032c, Func Offset: 0x2c
	// Line 305, Address: 0x3d0330, Func Offset: 0x30
	// Line 297, Address: 0x3d0334, Func Offset: 0x34
	// Line 305, Address: 0x3d0338, Func Offset: 0x38
	// Line 301, Address: 0x3d033c, Func Offset: 0x3c
	// Line 300, Address: 0x3d0344, Func Offset: 0x44
	// Line 305, Address: 0x3d034c, Func Offset: 0x4c
	// Line 301, Address: 0x3d0354, Func Offset: 0x54
	// Line 300, Address: 0x3d0358, Func Offset: 0x58
	// Line 305, Address: 0x3d0364, Func Offset: 0x64
	// Line 312, Address: 0x3d0378, Func Offset: 0x78
	// Line 315, Address: 0x3d0384, Func Offset: 0x84
	// Line 320, Address: 0x3d0388, Func Offset: 0x88
	// Line 324, Address: 0x3d038c, Func Offset: 0x8c
	// Line 315, Address: 0x3d0390, Func Offset: 0x90
	// Line 320, Address: 0x3d0394, Func Offset: 0x94
	// Line 316, Address: 0x3d039c, Func Offset: 0x9c
	// Line 315, Address: 0x3d03a0, Func Offset: 0xa0
	// Line 320, Address: 0x3d03a4, Func Offset: 0xa4
	// Line 321, Address: 0x3d03b8, Func Offset: 0xb8
	// Line 322, Address: 0x3d03c4, Func Offset: 0xc4
	// Line 324, Address: 0x3d03d4, Func Offset: 0xd4
	// Line 328, Address: 0x3d0400, Func Offset: 0x100
	// Line 329, Address: 0x3d047c, Func Offset: 0x17c
	// Line 332, Address: 0x3d0484, Func Offset: 0x184
	// Line 338, Address: 0x3d050c, Func Offset: 0x20c
	// Line 337, Address: 0x3d0518, Func Offset: 0x218
	// Line 338, Address: 0x3d0520, Func Offset: 0x220
	// Line 337, Address: 0x3d0538, Func Offset: 0x238
	// Line 338, Address: 0x3d0540, Func Offset: 0x240
	// Line 339, Address: 0x3d05a8, Func Offset: 0x2a8
	// Line 295, Address: 0x3d05cc, Func Offset: 0x2cc
	// Line 339, Address: 0x3d05d0, Func Offset: 0x2d0
	// Line 295, Address: 0x3d05f8, Func Offset: 0x2f8
	// Line 339, Address: 0x3d0600, Func Offset: 0x300
	// Line 295, Address: 0x3d0604, Func Offset: 0x304
	// Line 339, Address: 0x3d0608, Func Offset: 0x308
	// Line 295, Address: 0x3d0618, Func Offset: 0x318
	// Line 339, Address: 0x3d061c, Func Offset: 0x31c
	// Line 305, Address: 0x3d0654, Func Offset: 0x354
	// Line 339, Address: 0x3d0658, Func Offset: 0x358
	// Line 309, Address: 0x3d0674, Func Offset: 0x374
	// Line 339, Address: 0x3d067c, Func Offset: 0x37c
	// Line 328, Address: 0x3d0684, Func Offset: 0x384
	// Line 339, Address: 0x3d0694, Func Offset: 0x394
	// Line 332, Address: 0x3d069c, Func Offset: 0x39c
	// Line 339, Address: 0x3d06ac, Func Offset: 0x3ac
	// Line 338, Address: 0x3d06b4, Func Offset: 0x3b4
	// Line 339, Address: 0x3d06c4, Func Offset: 0x3c4
	// Func End, Address: 0x3d06e4, Func Offset: 0x3e4
}

// is__Q24xhud6widgetCFUi
// Start address: 0x3d06f0
uint8 is(uint32 id)
{
	// Line 285, Address: 0x3d06f0, Func Offset: 0
	// Line 286, Address: 0x3d06fc, Func Offset: 0xc
	// Line 287, Address: 0x3d0734, Func Offset: 0x44
	// Func End, Address: 0x3d0744, Func Offset: 0x54
}

// type__Q24xhud6widgetCFv
// Start address: 0x3d0750
uint32 type()
{
	// Line 279, Address: 0x3d0750, Func Offset: 0
	// Line 280, Address: 0x3d0758, Func Offset: 0x8
	// Line 281, Address: 0x3d0764, Func Offset: 0x14
	// Line 280, Address: 0x3d0778, Func Offset: 0x28
	// Line 282, Address: 0x3d0784, Func Offset: 0x34
	// Func End, Address: 0x3d0790, Func Offset: 0x40
}

// scene_enter__Q24xhud6widgetFv
// Start address: 0x3d0790
void scene_enter()
{
	// Line 265, Address: 0x3d0790, Func Offset: 0
	// Line 266, Address: 0x3d0794, Func Offset: 0x4
	// Line 265, Address: 0x3d079c, Func Offset: 0xc
	// Line 266, Address: 0x3d07a0, Func Offset: 0x10
	// Line 267, Address: 0x3d0824, Func Offset: 0x94
	// Func End, Address: 0x3d0830, Func Offset: 0xa0
}

// updater__Q24xhud6widgetFf
// Start address: 0x3d0830
void widget::updater(float32 dt)
{
	motive_node** itp;
	motive_node* it;
	// Line 203, Address: 0x3d0830, Func Offset: 0
	// Line 204, Address: 0x3d084c, Func Offset: 0x1c
	// Line 207, Address: 0x3d0858, Func Offset: 0x28
	// Line 209, Address: 0x3d0860, Func Offset: 0x30
	// Line 211, Address: 0x3d086c, Func Offset: 0x3c
	// Line 221, Address: 0x3d0888, Func Offset: 0x58
	// Line 223, Address: 0x3d0894, Func Offset: 0x64
	// Line 224, Address: 0x3d0898, Func Offset: 0x68
	// Line 225, Address: 0x3d089c, Func Offset: 0x6c
	// Line 226, Address: 0x3d08a8, Func Offset: 0x78
	// Line 228, Address: 0x3d08b4, Func Offset: 0x84
	// Line 229, Address: 0x3d08c0, Func Offset: 0x90
	// Line 230, Address: 0x3d08c8, Func Offset: 0x98
	// Line 232, Address: 0x3d08cc, Func Offset: 0x9c
	// Line 234, Address: 0x3d08d0, Func Offset: 0xa0
	// Line 235, Address: 0x3d08dc, Func Offset: 0xac
	// Line 205, Address: 0x3d08e8, Func Offset: 0xb8
	// Line 235, Address: 0x3d08f4, Func Offset: 0xc4
	// Line 216, Address: 0x3d0910, Func Offset: 0xe0
	// Line 235, Address: 0x3d0914, Func Offset: 0xe4
	// Line 217, Address: 0x3d091c, Func Offset: 0xec
	// Line 235, Address: 0x3d0928, Func Offset: 0xf8
	// Func End, Address: 0x3d0958, Func Offset: 0x128
}

// presetup__Q24xhud6widgetFv
// Start address: 0x3d0960
void widget::presetup()
{
	// Line 200, Address: 0x3d0960, Func Offset: 0
	// Func End, Address: 0x3d0968, Func Offset: 0x8
}

// render__4xhudFv
// Start address: 0x3d0970
void render()
{
	// Line 146, Address: 0x3d0970, Func Offset: 0
	// Line 147, Address: 0x3d0978, Func Offset: 0x8
	// Line 149, Address: 0x3d0984, Func Offset: 0x14
	// Func End, Address: 0x3d09a4, Func Offset: 0x34
}

// update__4xhudFf
// Start address: 0x3d09b0
void update(float32 dt)
{
	// Line 142, Address: 0x3d09b0, Func Offset: 0
	// Line 143, Address: 0x3d09b8, Func Offset: 0x8
	// Line 142, Address: 0x3d09bc, Func Offset: 0xc
	// Line 143, Address: 0x3d09c4, Func Offset: 0x14
	// Line 144, Address: 0x3d09f0, Func Offset: 0x40
	// Func End, Address: 0x3d0a04, Func Offset: 0x54
}

// destroy__4xhudFv
// Start address: 0x3d0a10
void destroy()
{
	// Line 135, Address: 0x3d0a10, Func Offset: 0
	// Line 137, Address: 0x3d0a20, Func Offset: 0x10
	// Line 135, Address: 0x3d0a24, Func Offset: 0x14
	// Line 137, Address: 0x3d0a28, Func Offset: 0x18
	// Line 138, Address: 0x3d0a58, Func Offset: 0x48
	// Line 139, Address: 0x3d0a5c, Func Offset: 0x4c
	// Func End, Address: 0x3d0a74, Func Offset: 0x64
}

// init__4xhudFv
// Start address: 0x3d0a80
void init()
{
	// Line 121, Address: 0x3d0a80, Func Offset: 0
	// Line 122, Address: 0x3d0a94, Func Offset: 0x14
	// Line 124, Address: 0x3d0aa0, Func Offset: 0x20
	// Line 127, Address: 0x3d0aa4, Func Offset: 0x24
	// Line 126, Address: 0x3d0ab0, Func Offset: 0x30
	// Line 127, Address: 0x3d0ab8, Func Offset: 0x38
	// Func End, Address: 0x3d0afc, Func Offset: 0x7c
}

// for_each<Q34xhud19@unnamed@xWad2_cpp@14functor_update>__Q24xhud19@unnamed@xWad2_cpp@FUcUiQ34xhud19@unnamed@xWad2_cpp@14functor_update_v
// Start address: 0x404110
void for_each(uint8 type, uint32 size, functor_update f)
{
	zScene& s;
	uint8* it;
	uint8* end;
	widget_chunk* wc;
	// Line 470, Address: 0x404110, Func Offset: 0
	// Line 471, Address: 0x404134, Func Offset: 0x24
	// Line 472, Address: 0x40413c, Func Offset: 0x2c
	// Line 473, Address: 0x404144, Func Offset: 0x34
	// Line 474, Address: 0x404150, Func Offset: 0x40
	// Line 477, Address: 0x404158, Func Offset: 0x48
	// Line 478, Address: 0x404168, Func Offset: 0x58
	// Line 479, Address: 0x404180, Func Offset: 0x70
	// Line 477, Address: 0x40418c, Func Offset: 0x7c
	// Line 479, Address: 0x404190, Func Offset: 0x80
	// Func End, Address: 0x4041c4, Func Offset: 0xb4
}

// for_each<PFRQ24xhud6widget_v>__Q24xhud19@unnamed@xWad2_cpp@FUcUiPFRQ24xhud6widget_v_v
// Start address: 0x4041d0
void for_each(uint8 type, uint32 size, void(*f)(widget&))
{
	zScene& s;
	uint8* it;
	uint8* end;
	// Line 470, Address: 0x4041d0, Func Offset: 0
	// Line 471, Address: 0x4041f4, Func Offset: 0x24
	// Line 472, Address: 0x4041fc, Func Offset: 0x2c
	// Line 473, Address: 0x404204, Func Offset: 0x34
	// Line 474, Address: 0x404210, Func Offset: 0x40
	// Line 477, Address: 0x404218, Func Offset: 0x48
	// Line 478, Address: 0x404220, Func Offset: 0x50
	// Line 479, Address: 0x404238, Func Offset: 0x68
	// Func End, Address: 0x404254, Func Offset: 0x84
}

// for_each<Q34xhud19@unnamed@xWad2_cpp@15functor_disable>__Q24xhud19@unnamed@xWad2_cpp@FUcUiQ34xhud19@unnamed@xWad2_cpp@15functor_disable_v
// Start address: 0x404260
void for_each(uint8 type, uint32 size, functor_disable f)
{
	functor_disable f'53;
	zScene& s;
	uint8* it;
	uint8* end;
	widget_chunk* wc;
	// Line 470, Address: 0x404260, Func Offset: 0
	// Line 471, Address: 0x404284, Func Offset: 0x24
	// Line 472, Address: 0x40428c, Func Offset: 0x2c
	// Line 473, Address: 0x404294, Func Offset: 0x34
	// Line 474, Address: 0x4042a0, Func Offset: 0x40
	// Line 477, Address: 0x4042a8, Func Offset: 0x48
	// Line 478, Address: 0x4042b8, Func Offset: 0x58
	// Line 479, Address: 0x4042c8, Func Offset: 0x68
	// Func End, Address: 0x404304, Func Offset: 0xa4
}

