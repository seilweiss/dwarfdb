



void zEntButtonEventCB(xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget);
void zEntButton_SceneUpdate(float32 dt);
void zEntButton_Hold(_zEntButton* ent, uint32 mask);
void zEntButton_Press(_zEntButton* ent, uint32 mask);
void zEntButton_Render(_zEntButton* ent);
void zEntButton_Update(_zEntButton* ent, xScene* sc, float32 dt);
void zEntButton_Reset(_zEntButton* ent, xScene* sc);
void zEntButton_Load(_zEntButton* ent, xSerial* s);
void zEntButton_Save(_zEntButton* ent, xSerial* s);
void zEntButton_Setup(_zEntButton* ent, xScene* sc);
void zEntButton_Move(_zEntButton* ent, xScene* s, float32 dt, xEntFrame* frame);
void zEntButton_Init(_zEntButton* ent, xEntAsset* asset);
void zEntButton_Init(void* ent, void* asset);

// zEntButtonEventCB__FP5xBaseP5xBaseUiPCfP5xBaseUi
// Start address: 0x3648d0
void zEntButtonEventCB(xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget)
{
	_zEntButton* s;
	FloatAndVoid dist;
	zShrapnelAsset* shrap;
	// Line 569, Address: 0x3648d0, Func Offset: 0
	// Line 578, Address: 0x3648d4, Func Offset: 0x4
	// Line 569, Address: 0x3648d8, Func Offset: 0x8
	// Line 578, Address: 0x3648f0, Func Offset: 0x20
	// Line 601, Address: 0x364a38, Func Offset: 0x168
	// Line 602, Address: 0x364a44, Func Offset: 0x174
	// Line 603, Address: 0x364a64, Func Offset: 0x194
	// Line 604, Address: 0x364a7c, Func Offset: 0x1ac
	// Line 605, Address: 0x364aac, Func Offset: 0x1dc
	// Line 606, Address: 0x364abc, Func Offset: 0x1ec
	// Line 609, Address: 0x364ac4, Func Offset: 0x1f4
	// Line 610, Address: 0x364ad0, Func Offset: 0x200
	// Line 611, Address: 0x364af0, Func Offset: 0x220
	// Line 612, Address: 0x364b20, Func Offset: 0x250
	// Line 613, Address: 0x364b30, Func Offset: 0x260
	// Line 617, Address: 0x364b38, Func Offset: 0x268
	// Line 618, Address: 0x364b58, Func Offset: 0x288
	// Line 619, Address: 0x364b70, Func Offset: 0x2a0
	// Line 620, Address: 0x364ba0, Func Offset: 0x2d0
	// Line 621, Address: 0x364bb0, Func Offset: 0x2e0
	// Line 624, Address: 0x364bb8, Func Offset: 0x2e8
	// Line 625, Address: 0x364bc0, Func Offset: 0x2f0
	// Line 628, Address: 0x364bc8, Func Offset: 0x2f8
	// Line 629, Address: 0x364bd0, Func Offset: 0x300
	// Line 632, Address: 0x364bd8, Func Offset: 0x308
	// Line 633, Address: 0x364be0, Func Offset: 0x310
	// Line 637, Address: 0x364be8, Func Offset: 0x318
	// Line 638, Address: 0x364c08, Func Offset: 0x338
	// Line 639, Address: 0x364c38, Func Offset: 0x368
	// Line 640, Address: 0x364c48, Func Offset: 0x378
	// Line 643, Address: 0x364c50, Func Offset: 0x380
	// Line 645, Address: 0x364c5c, Func Offset: 0x38c
	// Line 649, Address: 0x364c64, Func Offset: 0x394
	// Line 650, Address: 0x364c70, Func Offset: 0x3a0
	// Line 652, Address: 0x364c78, Func Offset: 0x3a8
	// Line 653, Address: 0x364c84, Func Offset: 0x3b4
	// Line 656, Address: 0x364c8c, Func Offset: 0x3bc
	// Line 657, Address: 0x364d48, Func Offset: 0x478
	// Line 660, Address: 0x364d50, Func Offset: 0x480
	// Line 661, Address: 0x364d64, Func Offset: 0x494
	// Line 664, Address: 0x364d70, Func Offset: 0x4a0
	// Line 665, Address: 0x364d78, Func Offset: 0x4a8
	// Line 666, Address: 0x364d84, Func Offset: 0x4b4
	// Line 669, Address: 0x364d8c, Func Offset: 0x4bc
	// Line 671, Address: 0x364d98, Func Offset: 0x4c8
	// Line 672, Address: 0x364dbc, Func Offset: 0x4ec
	// Line 673, Address: 0x364df8, Func Offset: 0x528
	// Line 676, Address: 0x364e00, Func Offset: 0x530
	// Line 677, Address: 0x364e24, Func Offset: 0x554
	// Line 679, Address: 0x364e60, Func Offset: 0x590
	// Line 689, Address: 0x364e68, Func Offset: 0x598
	// Line 690, Address: 0x364ea4, Func Offset: 0x5d4
	// Line 693, Address: 0x364eb4, Func Offset: 0x5e4
	// Line 694, Address: 0x364ec0, Func Offset: 0x5f0
	// Line 698, Address: 0x364ed4, Func Offset: 0x604
	// Line 699, Address: 0x364ed8, Func Offset: 0x608
	// Line 698, Address: 0x364edc, Func Offset: 0x60c
	// Line 699, Address: 0x364ee0, Func Offset: 0x610
	// Line 702, Address: 0x364eec, Func Offset: 0x61c
	// Line 707, Address: 0x364ef4, Func Offset: 0x624
	// Line 708, Address: 0x364f08, Func Offset: 0x638
	// Line 710, Address: 0x364f1c, Func Offset: 0x64c
	// Line 717, Address: 0x364f24, Func Offset: 0x654
	// Line 719, Address: 0x364f34, Func Offset: 0x664
	// Line 721, Address: 0x364f3c, Func Offset: 0x66c
	// Line 733, Address: 0x364f44, Func Offset: 0x674
	// Line 695, Address: 0x364f50, Func Offset: 0x680
	// Line 733, Address: 0x364f54, Func Offset: 0x684
	// Line 696, Address: 0x364f5c, Func Offset: 0x68c
	// Line 734, Address: 0x364f64, Func Offset: 0x694
	// Func End, Address: 0x364f7c, Func Offset: 0x6ac
}

// zEntButton_SceneUpdate__Ff
// Start address: 0x364f80
void zEntButton_SceneUpdate(float32 dt)
{
	// Line 532, Address: 0x364f80, Func Offset: 0
	// Line 533, Address: 0x364f88, Func Offset: 0x8
	// Line 532, Address: 0x364f8c, Func Offset: 0xc
	// Line 533, Address: 0x364f98, Func Offset: 0x18
	// Line 532, Address: 0x364f9c, Func Offset: 0x1c
	// Line 533, Address: 0x364fb4, Func Offset: 0x34
	// Line 538, Address: 0x364fc0, Func Offset: 0x40
	// Line 547, Address: 0x365000, Func Offset: 0x80
	// Line 548, Address: 0x365004, Func Offset: 0x84
	// Line 555, Address: 0x365008, Func Offset: 0x88
	// Func End, Address: 0x36503c, Func Offset: 0xbc
}

// zEntButton_Hold__FP11_zEntButtonUi
// Start address: 0x365040
void zEntButton_Hold(_zEntButton* ent, uint32 mask)
{
	xVec3* player;
	xBound* bound;
	xVec3 lv;
	// Line 459, Address: 0x365040, Func Offset: 0
	// Line 460, Address: 0x365054, Func Offset: 0x14
	// Line 464, Address: 0x365068, Func Offset: 0x28
	// Line 466, Address: 0x365074, Func Offset: 0x34
	// Line 487, Address: 0x3650a8, Func Offset: 0x68
	// Line 492, Address: 0x3650ac, Func Offset: 0x6c
	// Line 488, Address: 0x3650bc, Func Offset: 0x7c
	// Line 487, Address: 0x3650c0, Func Offset: 0x80
	// Line 492, Address: 0x3650c4, Func Offset: 0x84
	// Line 487, Address: 0x3650c8, Func Offset: 0x88
	// Line 492, Address: 0x3650d0, Func Offset: 0x90
	// Line 495, Address: 0x365100, Func Offset: 0xc0
	// Line 505, Address: 0x365118, Func Offset: 0xd8
	// Line 512, Address: 0x365124, Func Offset: 0xe4
	// Line 507, Address: 0x365130, Func Offset: 0xf0
	// Line 512, Address: 0x365148, Func Offset: 0x108
	// Line 508, Address: 0x365168, Func Offset: 0x128
	// Line 512, Address: 0x365180, Func Offset: 0x140
	// Line 508, Address: 0x365194, Func Offset: 0x154
	// Line 512, Address: 0x36519c, Func Offset: 0x15c
	// Line 508, Address: 0x3651b0, Func Offset: 0x170
	// Line 512, Address: 0x3651b4, Func Offset: 0x174
	// Line 508, Address: 0x3651cc, Func Offset: 0x18c
	// Line 512, Address: 0x3651d8, Func Offset: 0x198
	// Line 515, Address: 0x3651e0, Func Offset: 0x1a0
	// Func End, Address: 0x3651f8, Func Offset: 0x1b8
}

// zEntButton_Press__FP11_zEntButtonUi
// Start address: 0x365200
void zEntButton_Press(_zEntButton* ent, uint32 mask)
{
	// Line 447, Address: 0x365200, Func Offset: 0
	// Line 448, Address: 0x365210, Func Offset: 0x10
	// Line 450, Address: 0x365228, Func Offset: 0x28
	// Line 452, Address: 0x365234, Func Offset: 0x34
	// Line 453, Address: 0x365254, Func Offset: 0x54
	// Line 456, Address: 0x365348, Func Offset: 0x148
	// Func End, Address: 0x36535c, Func Offset: 0x15c
}

// zEntButton_Render__FP11_zEntButton
// Start address: 0x365360
void zEntButton_Render(_zEntButton* ent)
{
	xModelInstance* model;
	// Line 374, Address: 0x365360, Func Offset: 0
	// Line 377, Address: 0x365364, Func Offset: 0x4
	// Line 374, Address: 0x365368, Func Offset: 0x8
	// Line 375, Address: 0x365378, Func Offset: 0x18
	// Line 377, Address: 0x36537c, Func Offset: 0x1c
	// Line 380, Address: 0x365394, Func Offset: 0x34
	// Line 381, Address: 0x36539c, Func Offset: 0x3c
	// Line 382, Address: 0x3653a0, Func Offset: 0x40
	// Line 385, Address: 0x3653a8, Func Offset: 0x48
	// Line 388, Address: 0x3653b8, Func Offset: 0x58
	// Line 389, Address: 0x3653c0, Func Offset: 0x60
	// Line 390, Address: 0x3653c8, Func Offset: 0x68
	// Line 394, Address: 0x3653d0, Func Offset: 0x70
	// Line 400, Address: 0x3653e0, Func Offset: 0x80
	// Func End, Address: 0x36540c, Func Offset: 0xac
}

// zEntButton_Update__FP11_zEntButtonP6xScenef
// Start address: 0x365410
void zEntButton_Update(_zEntButton* ent, xScene* sc, float32 dt)
{
	// Line 265, Address: 0x365410, Func Offset: 0
	// Line 268, Address: 0x365428, Func Offset: 0x18
	// Line 270, Address: 0x365430, Func Offset: 0x20
	// Line 274, Address: 0x36543c, Func Offset: 0x2c
	// Line 276, Address: 0x36544c, Func Offset: 0x3c
	// Line 279, Address: 0x365458, Func Offset: 0x48
	// Line 282, Address: 0x365478, Func Offset: 0x68
	// Line 284, Address: 0x365488, Func Offset: 0x78
	// Line 287, Address: 0x365490, Func Offset: 0x80
	// Line 290, Address: 0x3654a4, Func Offset: 0x94
	// Line 292, Address: 0x3654ac, Func Offset: 0x9c
	// Line 303, Address: 0x3654b4, Func Offset: 0xa4
	// Line 305, Address: 0x3654c0, Func Offset: 0xb0
	// Line 308, Address: 0x3654cc, Func Offset: 0xbc
	// Line 311, Address: 0x365504, Func Offset: 0xf4
	// Line 312, Address: 0x36550c, Func Offset: 0xfc
	// Line 316, Address: 0x365514, Func Offset: 0x104
	// Line 317, Address: 0x36551c, Func Offset: 0x10c
	// Line 319, Address: 0x365524, Func Offset: 0x114
	// Line 320, Address: 0x36552c, Func Offset: 0x11c
	// Line 322, Address: 0x365534, Func Offset: 0x124
	// Line 324, Address: 0x365540, Func Offset: 0x130
	// Line 326, Address: 0x365554, Func Offset: 0x144
	// Line 327, Address: 0x365570, Func Offset: 0x160
	// Line 334, Address: 0x3655ac, Func Offset: 0x19c
	// Line 338, Address: 0x3655bc, Func Offset: 0x1ac
	// Line 351, Address: 0x3655c4, Func Offset: 0x1b4
	// Line 354, Address: 0x3655d0, Func Offset: 0x1c0
	// Line 355, Address: 0x3655dc, Func Offset: 0x1cc
	// Line 363, Address: 0x3655ec, Func Offset: 0x1dc
	// Line 364, Address: 0x3655f0, Func Offset: 0x1e0
	// Line 363, Address: 0x3655f8, Func Offset: 0x1e8
	// Line 364, Address: 0x3655fc, Func Offset: 0x1ec
	// Line 371, Address: 0x365608, Func Offset: 0x1f8
	// Line 323, Address: 0x365614, Func Offset: 0x204
	// Line 371, Address: 0x365620, Func Offset: 0x210
	// Line 342, Address: 0x36563c, Func Offset: 0x22c
	// Line 371, Address: 0x365640, Func Offset: 0x230
	// Line 345, Address: 0x365650, Func Offset: 0x240
	// Line 371, Address: 0x365654, Func Offset: 0x244
	// Line 345, Address: 0x365660, Func Offset: 0x250
	// Line 371, Address: 0x365664, Func Offset: 0x254
	// Line 347, Address: 0x36566c, Func Offset: 0x25c
	// Line 371, Address: 0x365684, Func Offset: 0x274
	// Line 348, Address: 0x3656a4, Func Offset: 0x294
	// Line 371, Address: 0x3656bc, Func Offset: 0x2ac
	// Line 350, Address: 0x3656c8, Func Offset: 0x2b8
	// Line 366, Address: 0x3656d0, Func Offset: 0x2c0
	// Line 371, Address: 0x3656d4, Func Offset: 0x2c4
	// Func End, Address: 0x3656f0, Func Offset: 0x2e0
}

// zEntButton_Reset__FP11_zEntButtonP6xScene
// Start address: 0x3656f0
void zEntButton_Reset(_zEntButton* ent, xScene* sc)
{
	// Line 234, Address: 0x3656f0, Func Offset: 0
	// Line 236, Address: 0x365704, Func Offset: 0x14
	// Line 240, Address: 0x36570c, Func Offset: 0x1c
	// Line 242, Address: 0x365720, Func Offset: 0x30
	// Line 244, Address: 0x36572c, Func Offset: 0x3c
	// Line 245, Address: 0x365738, Func Offset: 0x48
	// Line 247, Address: 0x365744, Func Offset: 0x54
	// Line 251, Address: 0x365758, Func Offset: 0x68
	// Line 254, Address: 0x365778, Func Offset: 0x88
	// Line 255, Address: 0x36577c, Func Offset: 0x8c
	// Line 254, Address: 0x365780, Func Offset: 0x90
	// Line 255, Address: 0x365788, Func Offset: 0x98
	// Line 257, Address: 0x36579c, Func Offset: 0xac
	// Line 260, Address: 0x3657a0, Func Offset: 0xb0
	// Line 258, Address: 0x3657a4, Func Offset: 0xb4
	// Line 261, Address: 0x3657a8, Func Offset: 0xb8
	// Line 258, Address: 0x3657ac, Func Offset: 0xbc
	// Line 260, Address: 0x3657b4, Func Offset: 0xc4
	// Line 261, Address: 0x3657b8, Func Offset: 0xc8
	// Line 262, Address: 0x3657bc, Func Offset: 0xcc
	// Func End, Address: 0x3657d0, Func Offset: 0xe0
}

// zEntButton_Load__FP11_zEntButtonP7xSerial
// Start address: 0x3657d0
void zEntButton_Load(_zEntButton* ent, xSerial* s)
{
	int32 pressed;
	int32 pushing;
	// Line 215, Address: 0x3657d0, Func Offset: 0
	// Line 216, Address: 0x3657e4, Func Offset: 0x14
	// Line 223, Address: 0x3657ec, Func Offset: 0x1c
	// Line 221, Address: 0x3657f4, Func Offset: 0x24
	// Line 223, Address: 0x3657f8, Func Offset: 0x28
	// Line 224, Address: 0x365800, Func Offset: 0x30
	// Line 227, Address: 0x36580c, Func Offset: 0x3c
	// Line 228, Address: 0x365818, Func Offset: 0x48
	// Line 231, Address: 0x365824, Func Offset: 0x54
	// Func End, Address: 0x36584c, Func Offset: 0x7c
}

// zEntButton_Save__FP11_zEntButtonP7xSerial
// Start address: 0x365850
void zEntButton_Save(_zEntButton* ent, xSerial* s)
{
	// Line 186, Address: 0x365850, Func Offset: 0
	// Line 187, Address: 0x365864, Func Offset: 0x14
	// Line 192, Address: 0x36586c, Func Offset: 0x1c
	// Line 193, Address: 0x36587c, Func Offset: 0x2c
	// Line 195, Address: 0x365890, Func Offset: 0x40
	// Line 197, Address: 0x365898, Func Offset: 0x48
	// Line 198, Address: 0x3658a8, Func Offset: 0x58
	// Line 200, Address: 0x3658b8, Func Offset: 0x68
	// Line 202, Address: 0x3658c0, Func Offset: 0x70
	// Func End, Address: 0x3658d4, Func Offset: 0x84
}

// zEntButton_Setup__FP11_zEntButtonP6xScene
// Start address: 0x3658e0
void zEntButton_Setup(_zEntButton* ent, xScene* sc)
{
	// Line 169, Address: 0x3658e0, Func Offset: 0
	// Line 171, Address: 0x3658f8, Func Offset: 0x18
	// Line 173, Address: 0x365914, Func Offset: 0x34
	// Line 174, Address: 0x365920, Func Offset: 0x40
	// Line 171, Address: 0x365928, Func Offset: 0x48
	// Line 174, Address: 0x365934, Func Offset: 0x54
	// Line 171, Address: 0x36593c, Func Offset: 0x5c
	// Line 174, Address: 0x365950, Func Offset: 0x70
	// Line 171, Address: 0x365988, Func Offset: 0xa8
	// Line 174, Address: 0x36598c, Func Offset: 0xac
	// Line 171, Address: 0x365994, Func Offset: 0xb4
	// Line 174, Address: 0x365998, Func Offset: 0xb8
	// Line 171, Address: 0x3659a0, Func Offset: 0xc0
	// Line 174, Address: 0x3659a4, Func Offset: 0xc4
	// Line 171, Address: 0x3659ac, Func Offset: 0xcc
	// Line 174, Address: 0x3659b0, Func Offset: 0xd0
	// Line 171, Address: 0x3659b8, Func Offset: 0xd8
	// Line 174, Address: 0x3659bc, Func Offset: 0xdc
	// Line 171, Address: 0x3659d4, Func Offset: 0xf4
	// Line 174, Address: 0x3659d8, Func Offset: 0xf8
	// Line 171, Address: 0x3659e0, Func Offset: 0x100
	// Line 174, Address: 0x3659e4, Func Offset: 0x104
	// Line 171, Address: 0x3659f0, Func Offset: 0x110
	// Line 174, Address: 0x3659fc, Func Offset: 0x11c
	// Func End, Address: 0x365a10, Func Offset: 0x130
}

// zEntButton_Move__FP11_zEntButtonP6xScenefP9xEntFrame
// Start address: 0x365a10
void zEntButton_Move(_zEntButton* ent, xScene* s, float32 dt, xEntFrame* frame)
{
	xEntFrame* dframe;
	// Line 153, Address: 0x365a10, Func Offset: 0
	// Line 154, Address: 0x365a14, Func Offset: 0x4
	// Line 156, Address: 0x365a1c, Func Offset: 0xc
	// Line 158, Address: 0x365a28, Func Offset: 0x18
	// Line 161, Address: 0x365a2c, Func Offset: 0x1c
	// Line 160, Address: 0x365a30, Func Offset: 0x20
	// Line 161, Address: 0x365a4c, Func Offset: 0x3c
	// Line 160, Address: 0x365a58, Func Offset: 0x48
	// Line 161, Address: 0x365a60, Func Offset: 0x50
	// Line 162, Address: 0x365a74, Func Offset: 0x64
	// Line 165, Address: 0x365a98, Func Offset: 0x88
	// Func End, Address: 0x365aa0, Func Offset: 0x90
}

// zEntButton_Init__FP11_zEntButtonP9xEntAsset
// Start address: 0x365aa0
void zEntButton_Init(_zEntButton* ent, xEntAsset* asset)
{
	zEntButtonAsset* passet;
	xEntMotionAsset* emasset;
	uint32 bufsize;
	void* info;
	// Line 74, Address: 0x365aa0, Func Offset: 0
	// Line 76, Address: 0x365aa4, Func Offset: 0x4
	// Line 74, Address: 0x365aa8, Func Offset: 0x8
	// Line 76, Address: 0x365aac, Func Offset: 0xc
	// Line 74, Address: 0x365ab0, Func Offset: 0x10
	// Line 76, Address: 0x365ac4, Func Offset: 0x24
	// Line 78, Address: 0x365acc, Func Offset: 0x2c
	// Line 88, Address: 0x365ad0, Func Offset: 0x30
	// Line 84, Address: 0x365ad4, Func Offset: 0x34
	// Line 88, Address: 0x365ad8, Func Offset: 0x38
	// Line 89, Address: 0x365ae4, Func Offset: 0x44
	// Line 91, Address: 0x365aec, Func Offset: 0x4c
	// Line 99, Address: 0x365afc, Func Offset: 0x5c
	// Line 100, Address: 0x365b14, Func Offset: 0x74
	// Line 113, Address: 0x365b20, Func Offset: 0x80
	// Line 117, Address: 0x365b24, Func Offset: 0x84
	// Line 118, Address: 0x365b28, Func Offset: 0x88
	// Line 119, Address: 0x365b2c, Func Offset: 0x8c
	// Line 120, Address: 0x365b30, Func Offset: 0x90
	// Line 117, Address: 0x365b34, Func Offset: 0x94
	// Line 118, Address: 0x365b38, Func Offset: 0x98
	// Line 119, Address: 0x365b3c, Func Offset: 0x9c
	// Line 120, Address: 0x365b40, Func Offset: 0xa0
	// Line 113, Address: 0x365b44, Func Offset: 0xa4
	// Line 114, Address: 0x365b4c, Func Offset: 0xac
	// Line 115, Address: 0x365b58, Func Offset: 0xb8
	// Line 117, Address: 0x365b64, Func Offset: 0xc4
	// Line 118, Address: 0x365b68, Func Offset: 0xc8
	// Line 119, Address: 0x365b6c, Func Offset: 0xcc
	// Line 120, Address: 0x365b70, Func Offset: 0xd0
	// Line 122, Address: 0x365b74, Func Offset: 0xd4
	// Line 123, Address: 0x365b80, Func Offset: 0xe0
	// Line 125, Address: 0x365b88, Func Offset: 0xe8
	// Line 131, Address: 0x365b8c, Func Offset: 0xec
	// Line 140, Address: 0x365b90, Func Offset: 0xf0
	// Line 131, Address: 0x365b94, Func Offset: 0xf4
	// Line 133, Address: 0x365b9c, Func Offset: 0xfc
	// Line 134, Address: 0x365ba0, Func Offset: 0x100
	// Line 135, Address: 0x365ba8, Func Offset: 0x108
	// Line 137, Address: 0x365bac, Func Offset: 0x10c
	// Line 140, Address: 0x365bb4, Func Offset: 0x114
	// Line 142, Address: 0x365bbc, Func Offset: 0x11c
	// Line 143, Address: 0x365bcc, Func Offset: 0x12c
	// Line 146, Address: 0x365bd8, Func Offset: 0x138
	// Line 148, Address: 0x365bdc, Func Offset: 0x13c
	// Line 102, Address: 0x365c04, Func Offset: 0x164
	// Line 148, Address: 0x365c1c, Func Offset: 0x17c
	// Func End, Address: 0x365c38, Func Offset: 0x198
}

// zEntButton_Init__FPvPv
// Start address: 0x365c40
void zEntButton_Init(void* ent, void* asset)
{
	// Line 70, Address: 0x365c40, Func Offset: 0
	// Func End, Address: 0x365c48, Func Offset: 0x8
}

