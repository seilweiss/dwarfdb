



void xScrFX_PulseGlaresReset();
void xScrFX_PulseGlaresRender(xMat4x3& mat);
void render_pulse_glare(xMat4x3& mat, xPulseGlare* g);
void init_pulse_glare(xPulseGlare& glare);
void xPulseFn(xPulse& p);

// xScrFX_PulseGlaresReset__Fv
// Start address: 0x461430
void xScrFX_PulseGlaresReset()
{
	// Line 291, Address: 0x461430, Func Offset: 0
	// Line 292, Address: 0x461440, Func Offset: 0x10
	// Line 293, Address: 0x461468, Func Offset: 0x38
	// Func End, Address: 0x46147c, Func Offset: 0x4c
}

// xScrFX_PulseGlaresRender__FRC7xMat4x3
// Start address: 0x461480
void xScrFX_PulseGlaresRender(xMat4x3& mat)
{
	// Line 281, Address: 0x461480, Func Offset: 0
	// Line 282, Address: 0x461498, Func Offset: 0x18
	// Line 283, Address: 0x4614c8, Func Offset: 0x48
	// Func End, Address: 0x4614f8, Func Offset: 0x78
}

// render_pulse_glare__19@unnamed@xWad5_cpp@FRC7xMat4x3PQ219@unnamed@xWad5_cpp@11xPulseGlare
// Start address: 0x461500
void render_pulse_glare(xMat4x3& mat, xPulseGlare* g)
{
	xVec3 w;
	xVec3 h;
	xVec3 g_pos;
	xVec3 cam_dir;
	float32 dot;
	float32 noise;
	xMat3x3 m;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RxObjSpace3DVertex sStripVert[4];
	// Line 107, Address: 0x461500, Func Offset: 0
	// Line 110, Address: 0x461508, Func Offset: 0x8
	// Line 107, Address: 0x46150c, Func Offset: 0xc
	// Line 110, Address: 0x461510, Func Offset: 0x10
	// Line 107, Address: 0x461514, Func Offset: 0x14
	// Line 110, Address: 0x461518, Func Offset: 0x18
	// Line 107, Address: 0x46151c, Func Offset: 0x1c
	// Line 111, Address: 0x461520, Func Offset: 0x20
	// Line 107, Address: 0x461524, Func Offset: 0x24
	// Line 111, Address: 0x461528, Func Offset: 0x28
	// Line 107, Address: 0x46152c, Func Offset: 0x2c
	// Line 111, Address: 0x461530, Func Offset: 0x30
	// Line 107, Address: 0x461534, Func Offset: 0x34
	// Line 110, Address: 0x461548, Func Offset: 0x48
	// Line 111, Address: 0x461554, Func Offset: 0x54
	// Line 114, Address: 0x461560, Func Offset: 0x60
	// Line 113, Address: 0x461564, Func Offset: 0x64
	// Line 114, Address: 0x461570, Func Offset: 0x70
	// Line 113, Address: 0x461574, Func Offset: 0x74
	// Line 114, Address: 0x46157c, Func Offset: 0x7c
	// Line 115, Address: 0x461584, Func Offset: 0x84
	// Line 117, Address: 0x4615f4, Func Offset: 0xf4
	// Line 118, Address: 0x461600, Func Offset: 0x100
	// Line 121, Address: 0x46160c, Func Offset: 0x10c
	// Line 122, Address: 0x461610, Func Offset: 0x110
	// Line 121, Address: 0x461614, Func Offset: 0x114
	// Line 125, Address: 0x461618, Func Offset: 0x118
	// Line 121, Address: 0x46161c, Func Offset: 0x11c
	// Line 125, Address: 0x461620, Func Offset: 0x120
	// Line 122, Address: 0x461624, Func Offset: 0x124
	// Line 123, Address: 0x46162c, Func Offset: 0x12c
	// Line 121, Address: 0x461634, Func Offset: 0x134
	// Line 122, Address: 0x461638, Func Offset: 0x138
	// Line 123, Address: 0x46163c, Func Offset: 0x13c
	// Line 121, Address: 0x461640, Func Offset: 0x140
	// Line 122, Address: 0x461644, Func Offset: 0x144
	// Line 125, Address: 0x461648, Func Offset: 0x148
	// Line 126, Address: 0x461650, Func Offset: 0x150
	// Line 128, Address: 0x46165c, Func Offset: 0x15c
	// Line 131, Address: 0x461678, Func Offset: 0x178
	// Line 130, Address: 0x46167c, Func Offset: 0x17c
	// Line 131, Address: 0x461680, Func Offset: 0x180
	// Line 128, Address: 0x461684, Func Offset: 0x184
	// Line 130, Address: 0x461688, Func Offset: 0x188
	// Line 131, Address: 0x4616c0, Func Offset: 0x1c0
	// Line 134, Address: 0x4616c8, Func Offset: 0x1c8
	// Line 137, Address: 0x4616e4, Func Offset: 0x1e4
	// Line 134, Address: 0x4616e8, Func Offset: 0x1e8
	// Line 137, Address: 0x4616f0, Func Offset: 0x1f0
	// Line 139, Address: 0x4616f8, Func Offset: 0x1f8
	// Line 142, Address: 0x461708, Func Offset: 0x208
	// Line 144, Address: 0x46170c, Func Offset: 0x20c
	// Line 146, Address: 0x461718, Func Offset: 0x218
	// Line 149, Address: 0x46171c, Func Offset: 0x21c
	// Line 151, Address: 0x461724, Func Offset: 0x224
	// Line 155, Address: 0x461734, Func Offset: 0x234
	// Line 156, Address: 0x461740, Func Offset: 0x240
	// Line 155, Address: 0x461748, Func Offset: 0x248
	// Line 156, Address: 0x461774, Func Offset: 0x274
	// Line 157, Address: 0x4617a0, Func Offset: 0x2a0
	// Line 161, Address: 0x4617a8, Func Offset: 0x2a8
	// Line 162, Address: 0x4617b4, Func Offset: 0x2b4
	// Line 161, Address: 0x4617bc, Func Offset: 0x2bc
	// Line 162, Address: 0x4617e4, Func Offset: 0x2e4
	// Line 166, Address: 0x461810, Func Offset: 0x310
	// Line 169, Address: 0x461820, Func Offset: 0x320
	// Line 171, Address: 0x46185c, Func Offset: 0x35c
	// Line 172, Address: 0x4618ac, Func Offset: 0x3ac
	// Line 182, Address: 0x4618f8, Func Offset: 0x3f8
	// Line 183, Address: 0x4618fc, Func Offset: 0x3fc
	// Line 182, Address: 0x461900, Func Offset: 0x400
	// Line 183, Address: 0x461904, Func Offset: 0x404
	// Line 184, Address: 0x461908, Func Offset: 0x408
	// Line 182, Address: 0x46190c, Func Offset: 0x40c
	// Line 184, Address: 0x461914, Func Offset: 0x414
	// Line 182, Address: 0x461918, Func Offset: 0x418
	// Line 185, Address: 0x46191c, Func Offset: 0x41c
	// Line 182, Address: 0x461920, Func Offset: 0x420
	// Line 185, Address: 0x461924, Func Offset: 0x424
	// Line 182, Address: 0x461928, Func Offset: 0x428
	// Line 185, Address: 0x461934, Func Offset: 0x434
	// Line 182, Address: 0x461938, Func Offset: 0x438
	// Line 185, Address: 0x46193c, Func Offset: 0x43c
	// Line 182, Address: 0x461940, Func Offset: 0x440
	// Line 185, Address: 0x46195c, Func Offset: 0x45c
	// Line 182, Address: 0x461964, Func Offset: 0x464
	// Line 185, Address: 0x461968, Func Offset: 0x468
	// Line 182, Address: 0x46196c, Func Offset: 0x46c
	// Line 185, Address: 0x461970, Func Offset: 0x470
	// Line 182, Address: 0x461974, Func Offset: 0x474
	// Line 185, Address: 0x461978, Func Offset: 0x478
	// Line 188, Address: 0x461a9c, Func Offset: 0x59c
	// Line 185, Address: 0x461aa0, Func Offset: 0x5a0
	// Line 188, Address: 0x461aa4, Func Offset: 0x5a4
	// Line 189, Address: 0x461aa8, Func Offset: 0x5a8
	// Line 188, Address: 0x461aac, Func Offset: 0x5ac
	// Line 189, Address: 0x461ab0, Func Offset: 0x5b0
	// Line 188, Address: 0x461ab4, Func Offset: 0x5b4
	// Line 191, Address: 0x461ac0, Func Offset: 0x5c0
	// Line 188, Address: 0x461ac4, Func Offset: 0x5c4
	// Line 190, Address: 0x461ac8, Func Offset: 0x5c8
	// Line 188, Address: 0x461ad0, Func Offset: 0x5d0
	// Line 190, Address: 0x461ad8, Func Offset: 0x5d8
	// Line 191, Address: 0x461adc, Func Offset: 0x5dc
	// Line 188, Address: 0x461ae4, Func Offset: 0x5e4
	// Line 191, Address: 0x461ae8, Func Offset: 0x5e8
	// Line 188, Address: 0x461aec, Func Offset: 0x5ec
	// Line 191, Address: 0x461b00, Func Offset: 0x600
	// Line 188, Address: 0x461b08, Func Offset: 0x608
	// Line 191, Address: 0x461b10, Func Offset: 0x610
	// Line 188, Address: 0x461b14, Func Offset: 0x614
	// Line 191, Address: 0x461b18, Func Offset: 0x618
	// Line 195, Address: 0x461c44, Func Offset: 0x744
	// Line 191, Address: 0x461c48, Func Offset: 0x748
	// Line 195, Address: 0x461c4c, Func Offset: 0x74c
	// Line 198, Address: 0x461c58, Func Offset: 0x758
	// Line 195, Address: 0x461c5c, Func Offset: 0x75c
	// Line 196, Address: 0x461c60, Func Offset: 0x760
	// Line 195, Address: 0x461c68, Func Offset: 0x768
	// Line 196, Address: 0x461c6c, Func Offset: 0x76c
	// Line 195, Address: 0x461c70, Func Offset: 0x770
	// Line 197, Address: 0x461c74, Func Offset: 0x774
	// Line 198, Address: 0x461c78, Func Offset: 0x778
	// Line 195, Address: 0x461c7c, Func Offset: 0x77c
	// Line 197, Address: 0x461c80, Func Offset: 0x780
	// Line 198, Address: 0x461c84, Func Offset: 0x784
	// Line 195, Address: 0x461c88, Func Offset: 0x788
	// Line 198, Address: 0x461c8c, Func Offset: 0x78c
	// Line 195, Address: 0x461c90, Func Offset: 0x790
	// Line 198, Address: 0x461ca0, Func Offset: 0x7a0
	// Line 195, Address: 0x461ca4, Func Offset: 0x7a4
	// Line 198, Address: 0x461ca8, Func Offset: 0x7a8
	// Line 195, Address: 0x461cac, Func Offset: 0x7ac
	// Line 198, Address: 0x461cb8, Func Offset: 0x7b8
	// Line 195, Address: 0x461cbc, Func Offset: 0x7bc
	// Line 198, Address: 0x461cc0, Func Offset: 0x7c0
	// Line 201, Address: 0x461dec, Func Offset: 0x8ec
	// Line 198, Address: 0x461df0, Func Offset: 0x8f0
	// Line 201, Address: 0x461df4, Func Offset: 0x8f4
	// Line 202, Address: 0x461e08, Func Offset: 0x908
	// Line 203, Address: 0x461e10, Func Offset: 0x910
	// Line 202, Address: 0x461e14, Func Offset: 0x914
	// Line 201, Address: 0x461e18, Func Offset: 0x918
	// Line 203, Address: 0x461e20, Func Offset: 0x920
	// Line 204, Address: 0x461e24, Func Offset: 0x924
	// Line 201, Address: 0x461e2c, Func Offset: 0x92c
	// Line 204, Address: 0x461e30, Func Offset: 0x930
	// Line 201, Address: 0x461e34, Func Offset: 0x934
	// Line 204, Address: 0x461e50, Func Offset: 0x950
	// Line 201, Address: 0x461e54, Func Offset: 0x954
	// Line 204, Address: 0x461e5c, Func Offset: 0x95c
	// Line 201, Address: 0x461e60, Func Offset: 0x960
	// Line 204, Address: 0x461e64, Func Offset: 0x964
	// Line 208, Address: 0x461f94, Func Offset: 0xa94
	// Line 210, Address: 0x461fac, Func Offset: 0xaac
	// Line 211, Address: 0x462134, Func Offset: 0xc34
	// Func End, Address: 0x462160, Func Offset: 0xc60
}

// init_pulse_glare__19@unnamed@xWad5_cpp@FRQ219@unnamed@xWad5_cpp@11xPulseGlare
// Start address: 0x462160
void init_pulse_glare(xPulseGlare& glare)
{
	// Line 46, Address: 0x462160, Func Offset: 0
	// Line 47, Address: 0x462164, Func Offset: 0x4
	// Line 46, Address: 0x462168, Func Offset: 0x8
	// Line 48, Address: 0x46216c, Func Offset: 0xc
	// Line 46, Address: 0x462170, Func Offset: 0x10
	// Line 47, Address: 0x462174, Func Offset: 0x14
	// Line 49, Address: 0x46217c, Func Offset: 0x1c
	// Line 51, Address: 0x46218c, Func Offset: 0x2c
	// Line 54, Address: 0x462190, Func Offset: 0x30
	// Line 49, Address: 0x462194, Func Offset: 0x34
	// Line 51, Address: 0x462198, Func Offset: 0x38
	// Line 54, Address: 0x4621a0, Func Offset: 0x40
	// Line 52, Address: 0x4621a4, Func Offset: 0x44
	// Line 57, Address: 0x4621a8, Func Offset: 0x48
	// Line 53, Address: 0x4621ac, Func Offset: 0x4c
	// Line 57, Address: 0x4621b0, Func Offset: 0x50
	// Line 54, Address: 0x4621b4, Func Offset: 0x54
	// Line 58, Address: 0x4621b8, Func Offset: 0x58
	// Line 55, Address: 0x4621bc, Func Offset: 0x5c
	// Line 64, Address: 0x4621c0, Func Offset: 0x60
	// Line 56, Address: 0x4621c4, Func Offset: 0x64
	// Line 64, Address: 0x4621c8, Func Offset: 0x68
	// Line 57, Address: 0x4621cc, Func Offset: 0x6c
	// Line 64, Address: 0x4621d0, Func Offset: 0x70
	// Line 58, Address: 0x4621d4, Func Offset: 0x74
	// Line 59, Address: 0x4621d8, Func Offset: 0x78
	// Line 60, Address: 0x4621dc, Func Offset: 0x7c
	// Line 61, Address: 0x4621e0, Func Offset: 0x80
	// Line 62, Address: 0x4621e4, Func Offset: 0x84
	// Line 63, Address: 0x4621e8, Func Offset: 0x88
	// Line 64, Address: 0x4621ec, Func Offset: 0x8c
	// Line 65, Address: 0x462200, Func Offset: 0xa0
	// Func End, Address: 0x462210, Func Offset: 0xb0
}

// xPulseFn__19@unnamed@xWad5_cpp@FRQ219@unnamed@xWad5_cpp@6xPulsef
// Start address: 0x462210
void xPulseFn(xPulse& p)
{
	// Line 31, Address: 0x462210, Func Offset: 0
	// Line 42, Address: 0x46221c, Func Offset: 0xc
	// Line 43, Address: 0x462250, Func Offset: 0x40
	// Func End, Address: 0x462260, Func Offset: 0x50
}

