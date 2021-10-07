



void zVolumeEventCB(xBase* to, uint32 toEvent);
void zVolume_OccludePrecalc(xVec3* camPos);

// zVolumeEventCB__FP5xBaseP5xBaseUiPCfP5xBaseUi
// Start address: 0x2de720
void zVolumeEventCB(xBase* to, uint32 toEvent)
{
	zVolume* vol;
	int32 i;
	// Line 355, Address: 0x2de720, Func Offset: 0
	// Line 363, Address: 0x2de724, Func Offset: 0x4
	// Line 366, Address: 0x2de750, Func Offset: 0x30
	// Line 367, Address: 0x2de75c, Func Offset: 0x3c
	// Line 370, Address: 0x2de768, Func Offset: 0x48
	// Line 372, Address: 0x2de774, Func Offset: 0x54
	// Line 373, Address: 0x2de788, Func Offset: 0x68
	// Line 375, Address: 0x2de794, Func Offset: 0x74
	// Line 377, Address: 0x2de7a8, Func Offset: 0x88
	// Line 376, Address: 0x2de7ac, Func Offset: 0x8c
	// Line 377, Address: 0x2de7c0, Func Offset: 0xa0
	// Line 378, Address: 0x2de7c4, Func Offset: 0xa4
	// Line 381, Address: 0x2de7cc, Func Offset: 0xac
	// Line 382, Address: 0x2de7e4, Func Offset: 0xc4
	// Line 383, Address: 0x2de7f0, Func Offset: 0xd0
	// Line 384, Address: 0x2de810, Func Offset: 0xf0
	// Line 383, Address: 0x2de814, Func Offset: 0xf4
	// Line 384, Address: 0x2de818, Func Offset: 0xf8
	// Line 385, Address: 0x2de81c, Func Offset: 0xfc
	// Line 386, Address: 0x2de824, Func Offset: 0x104
	// Line 388, Address: 0x2de834, Func Offset: 0x114
	// Line 390, Address: 0x2de838, Func Offset: 0x118
	// Func End, Address: 0x2de844, Func Offset: 0x124
}

// zVolume_OccludePrecalc__FP5xVec3
// Start address: 0x2de850
void zVolume_OccludePrecalc(xVec3* camPos)
{
	int32 i;
	int32 j;
	xVec3 corner[5];
	xVolumeAsset* a;
	PreCalcOcclude* calc;
	xVec4 locFrustVec[4];
	float32 depthdot;
	float32 camdot;
	// Line 129, Address: 0x2de850, Func Offset: 0
	// Line 137, Address: 0x2de86c, Func Offset: 0x1c
	// Line 129, Address: 0x2de870, Func Offset: 0x20
	// Line 137, Address: 0x2de888, Func Offset: 0x38
	// Line 239, Address: 0x2de898, Func Offset: 0x48
	// Line 143, Address: 0x2de904, Func Offset: 0xb4
	// Line 239, Address: 0x2de908, Func Offset: 0xb8
	// Line 143, Address: 0x2de910, Func Offset: 0xc0
	// Line 146, Address: 0x2de914, Func Offset: 0xc4
	// Line 239, Address: 0x2de91c, Func Offset: 0xcc
	// Line 171, Address: 0x2de924, Func Offset: 0xd4
	// Line 239, Address: 0x2de928, Func Offset: 0xd8
	// Line 171, Address: 0x2de92c, Func Offset: 0xdc
	// Line 239, Address: 0x2de930, Func Offset: 0xe0
	// Line 146, Address: 0x2de94c, Func Offset: 0xfc
	// Line 148, Address: 0x2de954, Func Offset: 0x104
	// Line 150, Address: 0x2de95c, Func Offset: 0x10c
	// Line 239, Address: 0x2de960, Func Offset: 0x110
	// Line 150, Address: 0x2de970, Func Offset: 0x120
	// Line 168, Address: 0x2de978, Func Offset: 0x128
	// Line 239, Address: 0x2de97c, Func Offset: 0x12c
	// Line 152, Address: 0x2de988, Func Offset: 0x138
	// Line 239, Address: 0x2de98c, Func Offset: 0x13c
	// Line 152, Address: 0x2de990, Func Offset: 0x140
	// Line 239, Address: 0x2de994, Func Offset: 0x144
	// Line 168, Address: 0x2de998, Func Offset: 0x148
	// Line 239, Address: 0x2de99c, Func Offset: 0x14c
	// Line 154, Address: 0x2de9a0, Func Offset: 0x150
	// Line 239, Address: 0x2de9a8, Func Offset: 0x158
	// Line 156, Address: 0x2de9ac, Func Offset: 0x15c
	// Line 239, Address: 0x2de9b4, Func Offset: 0x164
	// Line 169, Address: 0x2de9b8, Func Offset: 0x168
	// Line 239, Address: 0x2de9bc, Func Offset: 0x16c
	// Line 158, Address: 0x2de9c0, Func Offset: 0x170
	// Line 239, Address: 0x2de9c8, Func Offset: 0x178
	// Line 160, Address: 0x2de9cc, Func Offset: 0x17c
	// Line 239, Address: 0x2de9d0, Func Offset: 0x180
	// Line 160, Address: 0x2de9d4, Func Offset: 0x184
	// Line 239, Address: 0x2de9d8, Func Offset: 0x188
	// Line 169, Address: 0x2de9e0, Func Offset: 0x190
	// Line 239, Address: 0x2de9e4, Func Offset: 0x194
	// Line 168, Address: 0x2de9ec, Func Offset: 0x19c
	// Line 169, Address: 0x2de9f0, Func Offset: 0x1a0
	// Line 170, Address: 0x2de9f4, Func Offset: 0x1a4
	// Line 239, Address: 0x2dea04, Func Offset: 0x1b4
	// Line 170, Address: 0x2dea08, Func Offset: 0x1b8
	// Line 239, Address: 0x2dea10, Func Offset: 0x1c0
	// Line 172, Address: 0x2dea40, Func Offset: 0x1f0
	// Line 239, Address: 0x2dea44, Func Offset: 0x1f4
	// Line 172, Address: 0x2dea48, Func Offset: 0x1f8
	// Line 239, Address: 0x2dea4c, Func Offset: 0x1fc
	// Line 172, Address: 0x2dea50, Func Offset: 0x200
	// Line 173, Address: 0x2dea54, Func Offset: 0x204
	// Line 177, Address: 0x2dea60, Func Offset: 0x210
	// Line 239, Address: 0x2dea64, Func Offset: 0x214
	// Line 181, Address: 0x2dea6c, Func Offset: 0x21c
	// Line 184, Address: 0x2dea70, Func Offset: 0x220
	// Line 239, Address: 0x2dea80, Func Offset: 0x230
	// Line 184, Address: 0x2dea84, Func Offset: 0x234
	// Line 239, Address: 0x2dea88, Func Offset: 0x238
	// Line 178, Address: 0x2deaac, Func Offset: 0x25c
	// Line 239, Address: 0x2deab0, Func Offset: 0x260
	// Line 179, Address: 0x2deab8, Func Offset: 0x268
	// Line 180, Address: 0x2deabc, Func Offset: 0x26c
	// Line 178, Address: 0x2deac0, Func Offset: 0x270
	// Line 239, Address: 0x2deac4, Func Offset: 0x274
	// Line 178, Address: 0x2deacc, Func Offset: 0x27c
	// Line 189, Address: 0x2dead8, Func Offset: 0x288
	// Line 239, Address: 0x2deadc, Func Offset: 0x28c
	// Line 193, Address: 0x2deae8, Func Offset: 0x298
	// Line 239, Address: 0x2deaec, Func Offset: 0x29c
	// Line 193, Address: 0x2deaf0, Func Offset: 0x2a0
	// Line 239, Address: 0x2deaf4, Func Offset: 0x2a4
	// Line 190, Address: 0x2deb0c, Func Offset: 0x2bc
	// Line 191, Address: 0x2deb10, Func Offset: 0x2c0
	// Line 190, Address: 0x2deb14, Func Offset: 0x2c4
	// Line 239, Address: 0x2deb18, Func Offset: 0x2c8
	// Line 190, Address: 0x2deb1c, Func Offset: 0x2cc
	// Line 239, Address: 0x2deb20, Func Offset: 0x2d0
	// Line 191, Address: 0x2deb24, Func Offset: 0x2d4
	// Line 192, Address: 0x2deb2c, Func Offset: 0x2dc
	// Line 239, Address: 0x2deb3c, Func Offset: 0x2ec
	// Line 192, Address: 0x2deb40, Func Offset: 0x2f0
	// Line 239, Address: 0x2deb48, Func Offset: 0x2f8
	// Line 199, Address: 0x2deb88, Func Offset: 0x338
	// Line 239, Address: 0x2deb90, Func Offset: 0x340
	// Line 199, Address: 0x2deb98, Func Offset: 0x348
	// Line 239, Address: 0x2deb9c, Func Offset: 0x34c
	// Line 199, Address: 0x2debac, Func Offset: 0x35c
	// Line 239, Address: 0x2debbc, Func Offset: 0x36c
	// Line 203, Address: 0x2debc4, Func Offset: 0x374
	// Line 239, Address: 0x2debc8, Func Offset: 0x378
	// Line 207, Address: 0x2dec18, Func Offset: 0x3c8
	// Line 239, Address: 0x2dec24, Func Offset: 0x3d4
	// Line 207, Address: 0x2dec68, Func Offset: 0x418
	// Line 239, Address: 0x2dec6c, Func Offset: 0x41c
	// Line 207, Address: 0x2dec70, Func Offset: 0x420
	// Line 239, Address: 0x2dec74, Func Offset: 0x424
	// Line 207, Address: 0x2dec78, Func Offset: 0x428
	// Line 239, Address: 0x2dec7c, Func Offset: 0x42c
	// Line 207, Address: 0x2deca0, Func Offset: 0x450
	// Line 239, Address: 0x2decb8, Func Offset: 0x468
	// Line 201, Address: 0x2ded5c, Func Offset: 0x50c
	// Line 239, Address: 0x2ded60, Func Offset: 0x510
	// Line 201, Address: 0x2ded6c, Func Offset: 0x51c
	// Line 239, Address: 0x2ded70, Func Offset: 0x520
	// Line 201, Address: 0x2ded74, Func Offset: 0x524
	// Line 239, Address: 0x2ded78, Func Offset: 0x528
	// Line 201, Address: 0x2ded94, Func Offset: 0x544
	// Line 239, Address: 0x2deda0, Func Offset: 0x550
	// Line 201, Address: 0x2dedb8, Func Offset: 0x568
	// Line 239, Address: 0x2dedd0, Func Offset: 0x580
	// Func End, Address: 0x2dee24, Func Offset: 0x5d4
}

