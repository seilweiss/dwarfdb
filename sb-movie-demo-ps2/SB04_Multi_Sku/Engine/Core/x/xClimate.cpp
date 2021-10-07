



void xClimateUpdate(_tagClimate* climate, float32 seconds);
void UpdateRain(_tagClimate* climate, float32 seconds);
void xClimateSetRain(float32 stre);
void xClimateSetSnow(float32 stre);
void xClimateInitAsset(_tagClimate* climate, xEnvAsset* easset);
void xClimateInit(_tagClimate* climate);

// xClimateUpdate__FP11_tagClimatef
// Start address: 0x431e50
void xClimateUpdate(_tagClimate* climate, float32 seconds)
{
	// Line 427, Address: 0x431e50, Func Offset: 0
	// Func End, Address: 0x431e58, Func Offset: 0x8
}

// UpdateRain__FP11_tagClimatef
// Start address: 0x431e60
void UpdateRain(_tagClimate* climate, float32 seconds)
{
	_tagRain* r;
	xParEmitterCustomSettings info;
	int32 total_rain_drops;
	int32 i;
	int32 total_snow_flakes;
	xVec3 player_pos;
	int32 i;
	float32 perc;
	int32 num;
	xVec3* pos;
	xVec3* vel;
	xVec3* pp;
	xVec3* vp;
	int32 i;
	float32 xx;
	float32 zz;
	float32 perc;
	// Line 232, Address: 0x431e60, Func Offset: 0
	// Line 278, Address: 0x431e64, Func Offset: 0x4
	// Line 232, Address: 0x431e68, Func Offset: 0x8
	// Line 278, Address: 0x431e6c, Func Offset: 0xc
	// Line 232, Address: 0x431e70, Func Offset: 0x10
	// Line 278, Address: 0x431e90, Func Offset: 0x30
	// Line 232, Address: 0x431e94, Func Offset: 0x34
	// Line 278, Address: 0x431ebc, Func Offset: 0x5c
	// Line 280, Address: 0x431ec8, Func Offset: 0x68
	// Line 283, Address: 0x431ed0, Func Offset: 0x70
	// Line 285, Address: 0x431edc, Func Offset: 0x7c
	// Line 292, Address: 0x431efc, Func Offset: 0x9c
	// Line 295, Address: 0x431f14, Func Offset: 0xb4
	// Line 297, Address: 0x431f60, Func Offset: 0x100
	// Line 298, Address: 0x431fa8, Func Offset: 0x148
	// Line 297, Address: 0x431fac, Func Offset: 0x14c
	// Line 298, Address: 0x431fc4, Func Offset: 0x164
	// Line 297, Address: 0x431fcc, Func Offset: 0x16c
	// Line 298, Address: 0x431fd0, Func Offset: 0x170
	// Line 297, Address: 0x431fd4, Func Offset: 0x174
	// Line 299, Address: 0x431fd8, Func Offset: 0x178
	// Line 301, Address: 0x432020, Func Offset: 0x1c0
	// Line 299, Address: 0x432024, Func Offset: 0x1c4
	// Line 301, Address: 0x432044, Func Offset: 0x1e4
	// Line 303, Address: 0x432050, Func Offset: 0x1f0
	// Line 404, Address: 0x432060, Func Offset: 0x200
	// Line 308, Address: 0x432070, Func Offset: 0x210
	// Line 404, Address: 0x432074, Func Offset: 0x214
	// Line 308, Address: 0x432078, Func Offset: 0x218
	// Line 404, Address: 0x43207c, Func Offset: 0x21c
	// Line 321, Address: 0x432080, Func Offset: 0x220
	// Line 404, Address: 0x432084, Func Offset: 0x224
	// Line 321, Address: 0x432088, Func Offset: 0x228
	// Line 308, Address: 0x432090, Func Offset: 0x230
	// Line 317, Address: 0x432094, Func Offset: 0x234
	// Line 404, Address: 0x432098, Func Offset: 0x238
	// Line 308, Address: 0x4320b0, Func Offset: 0x250
	// Line 404, Address: 0x4320b4, Func Offset: 0x254
	// Line 321, Address: 0x4320c4, Func Offset: 0x264
	// Line 404, Address: 0x4320c8, Func Offset: 0x268
	// Line 321, Address: 0x4320cc, Func Offset: 0x26c
	// Line 404, Address: 0x4320dc, Func Offset: 0x27c
	// Line 321, Address: 0x4320e0, Func Offset: 0x280
	// Line 404, Address: 0x4320e4, Func Offset: 0x284
	// Line 334, Address: 0x432158, Func Offset: 0x2f8
	// Line 404, Address: 0x432160, Func Offset: 0x300
	// Line 334, Address: 0x432168, Func Offset: 0x308
	// Line 404, Address: 0x4321ac, Func Offset: 0x34c
	// Line 334, Address: 0x4321b0, Func Offset: 0x350
	// Line 404, Address: 0x4321b4, Func Offset: 0x354
	// Line 335, Address: 0x4321bc, Func Offset: 0x35c
	// Line 404, Address: 0x4321c4, Func Offset: 0x364
	// Line 335, Address: 0x4321cc, Func Offset: 0x36c
	// Line 340, Address: 0x4321fc, Func Offset: 0x39c
	// Line 341, Address: 0x432204, Func Offset: 0x3a4
	// Line 335, Address: 0x432208, Func Offset: 0x3a8
	// Line 404, Address: 0x43221c, Func Offset: 0x3bc
	// Line 340, Address: 0x43222c, Func Offset: 0x3cc
	// Line 341, Address: 0x432230, Func Offset: 0x3d0
	// Line 335, Address: 0x432234, Func Offset: 0x3d4
	// Line 340, Address: 0x432238, Func Offset: 0x3d8
	// Line 341, Address: 0x43224c, Func Offset: 0x3ec
	// Line 404, Address: 0x432250, Func Offset: 0x3f0
	// Line 343, Address: 0x432258, Func Offset: 0x3f8
	// Line 404, Address: 0x432260, Func Offset: 0x400
	// Line 343, Address: 0x432268, Func Offset: 0x408
	// Line 404, Address: 0x4322a0, Func Offset: 0x440
	// Line 344, Address: 0x4322a8, Func Offset: 0x448
	// Line 404, Address: 0x4322b0, Func Offset: 0x450
	// Line 344, Address: 0x4322b8, Func Offset: 0x458
	// Line 404, Address: 0x4322e0, Func Offset: 0x480
	// Line 344, Address: 0x4322e4, Func Offset: 0x484
	// Line 404, Address: 0x4322f4, Func Offset: 0x494
	// Line 345, Address: 0x4322fc, Func Offset: 0x49c
	// Line 404, Address: 0x432304, Func Offset: 0x4a4
	// Line 345, Address: 0x43230c, Func Offset: 0x4ac
	// Line 347, Address: 0x432334, Func Offset: 0x4d4
	// Line 404, Address: 0x432338, Func Offset: 0x4d8
	// Line 345, Address: 0x43233c, Func Offset: 0x4dc
	// Line 404, Address: 0x432340, Func Offset: 0x4e0
	// Line 347, Address: 0x432344, Func Offset: 0x4e4
	// Line 345, Address: 0x432348, Func Offset: 0x4e8
	// Line 404, Address: 0x432350, Func Offset: 0x4f0
	// Line 347, Address: 0x432354, Func Offset: 0x4f4
	// Line 404, Address: 0x432360, Func Offset: 0x500
	// Line 349, Address: 0x432370, Func Offset: 0x510
	// Line 404, Address: 0x432378, Func Offset: 0x518
	// Line 356, Address: 0x432398, Func Offset: 0x538
	// Line 362, Address: 0x4323a0, Func Offset: 0x540
	// Line 404, Address: 0x4323ac, Func Offset: 0x54c
	// Line 362, Address: 0x4323b0, Func Offset: 0x550
	// Line 404, Address: 0x4323bc, Func Offset: 0x55c
	// Line 362, Address: 0x4323c0, Func Offset: 0x560
	// Line 404, Address: 0x4323c8, Func Offset: 0x568
	// Line 365, Address: 0x4323d0, Func Offset: 0x570
	// Line 404, Address: 0x4323d4, Func Offset: 0x574
	// Line 366, Address: 0x4323e0, Func Offset: 0x580
	// Line 365, Address: 0x4323e4, Func Offset: 0x584
	// Line 404, Address: 0x4323e8, Func Offset: 0x588
	// Line 366, Address: 0x4323ec, Func Offset: 0x58c
	// Line 404, Address: 0x4323f0, Func Offset: 0x590
	// Line 368, Address: 0x4323fc, Func Offset: 0x59c
	// Line 369, Address: 0x432400, Func Offset: 0x5a0
	// Line 404, Address: 0x432404, Func Offset: 0x5a4
	// Line 374, Address: 0x43245c, Func Offset: 0x5fc
	// Line 404, Address: 0x432464, Func Offset: 0x604
	// Line 374, Address: 0x43246c, Func Offset: 0x60c
	// Line 404, Address: 0x4324b0, Func Offset: 0x650
	// Line 374, Address: 0x4324b4, Func Offset: 0x654
	// Line 404, Address: 0x4324b8, Func Offset: 0x658
	// Line 375, Address: 0x4324c0, Func Offset: 0x660
	// Line 404, Address: 0x4324c8, Func Offset: 0x668
	// Line 375, Address: 0x4324d0, Func Offset: 0x670
	// Line 380, Address: 0x432500, Func Offset: 0x6a0
	// Line 381, Address: 0x432508, Func Offset: 0x6a8
	// Line 383, Address: 0x43250c, Func Offset: 0x6ac
	// Line 375, Address: 0x432510, Func Offset: 0x6b0
	// Line 404, Address: 0x432524, Func Offset: 0x6c4
	// Line 380, Address: 0x43252c, Func Offset: 0x6cc
	// Line 381, Address: 0x432530, Func Offset: 0x6d0
	// Line 383, Address: 0x432534, Func Offset: 0x6d4
	// Line 380, Address: 0x432538, Func Offset: 0x6d8
	// Line 375, Address: 0x432540, Func Offset: 0x6e0
	// Line 404, Address: 0x432544, Func Offset: 0x6e4
	// Line 379, Address: 0x432554, Func Offset: 0x6f4
	// Line 378, Address: 0x432558, Func Offset: 0x6f8
	// Line 380, Address: 0x43255c, Func Offset: 0x6fc
	// Line 381, Address: 0x432568, Func Offset: 0x708
	// Line 383, Address: 0x43256c, Func Offset: 0x70c
	// Line 404, Address: 0x432578, Func Offset: 0x718
	// Line 385, Address: 0x432580, Func Offset: 0x720
	// Line 404, Address: 0x432588, Func Offset: 0x728
	// Line 385, Address: 0x432590, Func Offset: 0x730
	// Line 404, Address: 0x4325c8, Func Offset: 0x768
	// Line 386, Address: 0x4325d0, Func Offset: 0x770
	// Line 404, Address: 0x4325d8, Func Offset: 0x778
	// Line 386, Address: 0x4325e0, Func Offset: 0x780
	// Line 404, Address: 0x432618, Func Offset: 0x7b8
	// Line 387, Address: 0x432620, Func Offset: 0x7c0
	// Line 404, Address: 0x432628, Func Offset: 0x7c8
	// Line 387, Address: 0x432630, Func Offset: 0x7d0
	// Line 404, Address: 0x432658, Func Offset: 0x7f8
	// Line 387, Address: 0x432664, Func Offset: 0x804
	// Line 404, Address: 0x432674, Func Offset: 0x814
	// Line 396, Address: 0x432680, Func Offset: 0x820
	// Line 404, Address: 0x432688, Func Offset: 0x828
	// Func End, Address: 0x4326ec, Func Offset: 0x88c
}

// xClimateSetRain__Ff
// Start address: 0x4326f0
void xClimateSetRain(float32 stre)
{
	// Line 177, Address: 0x4326f0, Func Offset: 0
	// Line 178, Address: 0x4326fc, Func Offset: 0xc
	// Line 179, Address: 0x432700, Func Offset: 0x10
	// Func End, Address: 0x432708, Func Offset: 0x18
}

// xClimateSetSnow__Ff
// Start address: 0x432710
void xClimateSetSnow(float32 stre)
{
	// Line 170, Address: 0x432710, Func Offset: 0
	// Line 171, Address: 0x432718, Func Offset: 0x8
	// Line 172, Address: 0x43271c, Func Offset: 0xc
	// Func End, Address: 0x432724, Func Offset: 0x14
}

// xClimateInitAsset__FP11_tagClimateP9xEnvAsset
// Start address: 0x432730
void xClimateInitAsset(_tagClimate* climate, xEnvAsset* easset)
{
	_tagWind* w;
	// Line 113, Address: 0x432730, Func Offset: 0
	// Line 130, Address: 0x432734, Func Offset: 0x4
	// Line 113, Address: 0x432738, Func Offset: 0x8
	// Line 129, Address: 0x43273c, Func Offset: 0xc
	// Line 113, Address: 0x432740, Func Offset: 0x10
	// Line 130, Address: 0x432744, Func Offset: 0x14
	// Line 113, Address: 0x432748, Func Offset: 0x18
	// Line 124, Address: 0x432758, Func Offset: 0x28
	// Line 128, Address: 0x43275c, Func Offset: 0x2c
	// Line 129, Address: 0x432760, Func Offset: 0x30
	// Line 130, Address: 0x432764, Func Offset: 0x34
	// Line 134, Address: 0x4327c0, Func Offset: 0x90
	// Line 137, Address: 0x4327c8, Func Offset: 0x98
	// Line 139, Address: 0x4327cc, Func Offset: 0x9c
	// Line 140, Address: 0x4327d4, Func Offset: 0xa4
	// Line 143, Address: 0x4327dc, Func Offset: 0xac
	// Line 144, Address: 0x4327e0, Func Offset: 0xb0
	// Line 143, Address: 0x4327e4, Func Offset: 0xb4
	// Line 144, Address: 0x4327e8, Func Offset: 0xb8
	// Line 145, Address: 0x432800, Func Offset: 0xd0
	// Line 146, Address: 0x43280c, Func Offset: 0xdc
	// Line 147, Address: 0x432814, Func Offset: 0xe4
	// Line 150, Address: 0x432820, Func Offset: 0xf0
	// Line 151, Address: 0x432824, Func Offset: 0xf4
	// Line 152, Address: 0x432844, Func Offset: 0x114
	// Line 164, Address: 0x432854, Func Offset: 0x124
	// Func End, Address: 0x43286c, Func Offset: 0x13c
}

// xClimateInit__FP11_tagClimate
// Start address: 0x432870
void xClimateInit(_tagClimate* climate)
{
	// Line 89, Address: 0x432870, Func Offset: 0
	// Line 94, Address: 0x432874, Func Offset: 0x4
	// Line 89, Address: 0x432878, Func Offset: 0x8
	// Line 92, Address: 0x432880, Func Offset: 0x10
	// Line 94, Address: 0x432888, Func Offset: 0x18
	// Line 96, Address: 0x432894, Func Offset: 0x24
	// Line 98, Address: 0x432898, Func Offset: 0x28
	// Line 96, Address: 0x4328a0, Func Offset: 0x30
	// Line 98, Address: 0x4328a8, Func Offset: 0x38
	// Line 100, Address: 0x4328b4, Func Offset: 0x44
	// Line 106, Address: 0x4328c4, Func Offset: 0x54
	// Func End, Address: 0x4328d4, Func Offset: 0x64
}

