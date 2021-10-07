



float32 zMusicGetCurrentVolume();
void zMusicTempSongStopEvent();
void zMusicTempSongEvent(float32* toParam, uint32 toParamWidgetID);
void zMusicNewSongEvent(float32* toParam, uint32 toParamWidgetID);
uint32 _zMusicCrossFade(float32 fNewVolume, float32 fNewVolTime, uint32 newTrack, eTrackReason eReason);
void zMusicSetVolume(float32 vol, float32 delay);
void zMusicUnpause();
void zMusicPause();
void zMusicKill();
void zMusicUpdate();
void zMusicInit();

// zMusicGetCurrentVolume__FUi
// Start address: 0x2bf140
float32 zMusicGetCurrentVolume()
{
	// Line 478, Address: 0x2bf140, Func Offset: 0
	// Line 479, Address: 0x2bf144, Func Offset: 0x4
	// Func End, Address: 0x2bf14c, Func Offset: 0xc
}

// zMusicTempSongStopEvent__Fv
// Start address: 0x2bf150
void zMusicTempSongStopEvent()
{
	uint32 i;
	// Line 462, Address: 0x2bf150, Func Offset: 0
	// Line 470, Address: 0x2bf15c, Func Offset: 0xc
	// Line 466, Address: 0x2bf160, Func Offset: 0x10
	// Line 464, Address: 0x2bf164, Func Offset: 0x14
	// Line 466, Address: 0x2bf174, Func Offset: 0x24
	// Line 470, Address: 0x2bf180, Func Offset: 0x30
	// Line 472, Address: 0x2bf184, Func Offset: 0x34
	// Line 473, Address: 0x2bf188, Func Offset: 0x38
	// Line 474, Address: 0x2bf198, Func Offset: 0x48
	// Func End, Address: 0x2bf1a0, Func Offset: 0x50
}

// zMusicTempSongEvent__FPCfUi
// Start address: 0x2bf1a0
void zMusicTempSongEvent(float32* toParam, uint32 toParamWidgetID)
{
	float32 fFadeVolTime;
	float32 fNewVolTime;
	float32 fPlayTime;
	float32 fNewVolume;
	uint32 i;
	uint32 nSlot;
	// Line 426, Address: 0x2bf1a0, Func Offset: 0
	// Line 428, Address: 0x2bf1a8, Func Offset: 0x8
	// Line 426, Address: 0x2bf1ac, Func Offset: 0xc
	// Line 428, Address: 0x2bf1cc, Func Offset: 0x2c
	// Line 429, Address: 0x2bf1e4, Func Offset: 0x44
	// Line 430, Address: 0x2bf200, Func Offset: 0x60
	// Line 431, Address: 0x2bf21c, Func Offset: 0x7c
	// Line 434, Address: 0x2bf238, Func Offset: 0x98
	// Line 431, Address: 0x2bf240, Func Offset: 0xa0
	// Line 434, Address: 0x2bf244, Func Offset: 0xa4
	// Line 436, Address: 0x2bf248, Func Offset: 0xa8
	// Line 444, Address: 0x2bf258, Func Offset: 0xb8
	// Line 446, Address: 0x2bf268, Func Offset: 0xc8
	// Line 450, Address: 0x2bf278, Func Offset: 0xd8
	// Line 452, Address: 0x2bf288, Func Offset: 0xe8
	// Line 453, Address: 0x2bf2a4, Func Offset: 0x104
	// Line 456, Address: 0x2bf2c0, Func Offset: 0x120
	// Func End, Address: 0x2bf310, Func Offset: 0x170
}

// zMusicNewSongEvent__FPCfUi
// Start address: 0x2bf310
void zMusicNewSongEvent(float32* toParam, uint32 toParamWidgetID)
{
	float32 fFadeVolTime;
	float32 fNewVolTime;
	float32 fFadeVolume;
	float32 fNewVolume;
	uint32 i;
	// Line 382, Address: 0x2bf310, Func Offset: 0
	// Line 383, Address: 0x2bf318, Func Offset: 0x8
	// Line 382, Address: 0x2bf31c, Func Offset: 0xc
	// Line 383, Address: 0x2bf33c, Func Offset: 0x2c
	// Line 384, Address: 0x2bf354, Func Offset: 0x44
	// Line 385, Address: 0x2bf370, Func Offset: 0x60
	// Line 386, Address: 0x2bf38c, Func Offset: 0x7c
	// Line 391, Address: 0x2bf3a8, Func Offset: 0x98
	// Line 395, Address: 0x2bf3c0, Func Offset: 0xb0
	// Line 399, Address: 0x2bf3c4, Func Offset: 0xb4
	// Line 395, Address: 0x2bf3cc, Func Offset: 0xbc
	// Line 399, Address: 0x2bf3d0, Func Offset: 0xc0
	// Line 401, Address: 0x2bf3d4, Func Offset: 0xc4
	// Line 408, Address: 0x2bf3e4, Func Offset: 0xd4
	// Line 410, Address: 0x2bf3f8, Func Offset: 0xe8
	// Line 414, Address: 0x2bf408, Func Offset: 0xf8
	// Line 415, Address: 0x2bf418, Func Offset: 0x108
	// Line 416, Address: 0x2bf434, Func Offset: 0x124
	// Line 417, Address: 0x2bf44c, Func Offset: 0x13c
	// Line 419, Address: 0x2bf454, Func Offset: 0x144
	// Line 420, Address: 0x2bf464, Func Offset: 0x154
	// Line 422, Address: 0x2bf47c, Func Offset: 0x16c
	// Func End, Address: 0x2bf4d0, Func Offset: 0x1c0
}

// _zMusicCrossFade__FffffUi12eTrackReason
// Start address: 0x2bf4d0
uint32 _zMusicCrossFade(float32 fNewVolume, float32 fNewVolTime, uint32 newTrack, eTrackReason eReason)
{
	uint32 i;
	uint32 nFadeInSlot;
	uint32 j;
	// Line 298, Address: 0x2bf4d0, Func Offset: 0
	// Line 300, Address: 0x2bf4e4, Func Offset: 0x14
	// Line 298, Address: 0x2bf4e8, Func Offset: 0x18
	// Line 300, Address: 0x2bf4fc, Func Offset: 0x2c
	// Line 298, Address: 0x2bf500, Func Offset: 0x30
	// Line 300, Address: 0x2bf504, Func Offset: 0x34
	// Line 302, Address: 0x2bf510, Func Offset: 0x40
	// Line 313, Address: 0x2bf520, Func Offset: 0x50
	// Line 316, Address: 0x2bf530, Func Offset: 0x60
	// Line 318, Address: 0x2bf53c, Func Offset: 0x6c
	// Line 320, Address: 0x2bf548, Func Offset: 0x78
	// Line 325, Address: 0x2bf54c, Func Offset: 0x7c
	// Line 320, Address: 0x2bf550, Func Offset: 0x80
	// Line 323, Address: 0x2bf55c, Func Offset: 0x8c
	// Line 325, Address: 0x2bf564, Func Offset: 0x94
	// Line 327, Address: 0x2bf584, Func Offset: 0xb4
	// Line 329, Address: 0x2bf588, Func Offset: 0xb8
	// Line 331, Address: 0x2bf5b0, Func Offset: 0xe0
	// Line 333, Address: 0x2bf5c0, Func Offset: 0xf0
	// Line 334, Address: 0x2bf5c8, Func Offset: 0xf8
	// Line 368, Address: 0x2bf5e8, Func Offset: 0x118
	// Line 334, Address: 0x2bf5f4, Func Offset: 0x124
	// Line 368, Address: 0x2bf5f8, Func Offset: 0x128
	// Line 367, Address: 0x2bf5fc, Func Offset: 0x12c
	// Line 369, Address: 0x2bf600, Func Offset: 0x130
	// Line 373, Address: 0x2bf60c, Func Offset: 0x13c
	// Line 369, Address: 0x2bf610, Func Offset: 0x140
	// Line 373, Address: 0x2bf614, Func Offset: 0x144
	// Line 369, Address: 0x2bf618, Func Offset: 0x148
	// Line 373, Address: 0x2bf61c, Func Offset: 0x14c
	// Line 370, Address: 0x2bf620, Func Offset: 0x150
	// Line 373, Address: 0x2bf624, Func Offset: 0x154
	// Line 370, Address: 0x2bf628, Func Offset: 0x158
	// Line 373, Address: 0x2bf62c, Func Offset: 0x15c
	// Line 369, Address: 0x2bf630, Func Offset: 0x160
	// Line 370, Address: 0x2bf634, Func Offset: 0x164
	// Line 373, Address: 0x2bf63c, Func Offset: 0x16c
	// Line 371, Address: 0x2bf640, Func Offset: 0x170
	// Line 372, Address: 0x2bf650, Func Offset: 0x180
	// Line 373, Address: 0x2bf654, Func Offset: 0x184
	// Line 372, Address: 0x2bf658, Func Offset: 0x188
	// Line 373, Address: 0x2bf664, Func Offset: 0x194
	// Line 378, Address: 0x2bf690, Func Offset: 0x1c0
	// Line 310, Address: 0x2bf6bc, Func Offset: 0x1ec
	// Line 378, Address: 0x2bf6c0, Func Offset: 0x1f0
	// Line 310, Address: 0x2bf708, Func Offset: 0x238
	// Line 337, Address: 0x2bf710, Func Offset: 0x240
	// Line 378, Address: 0x2bf714, Func Offset: 0x244
	// Line 342, Address: 0x2bf71c, Func Offset: 0x24c
	// Line 378, Address: 0x2bf720, Func Offset: 0x250
	// Line 353, Address: 0x2bf7f0, Func Offset: 0x320
	// Line 378, Address: 0x2bf7f8, Func Offset: 0x328
	// Line 379, Address: 0x2bf810, Func Offset: 0x340
	// Func End, Address: 0x2bf838, Func Offset: 0x368
}

// zMusicSetVolume__Fff
// Start address: 0x2bf840
void zMusicSetVolume(float32 vol, float32 delay)
{
	// Line 270, Address: 0x2bf840, Func Offset: 0
	// Line 271, Address: 0x2bf844, Func Offset: 0x4
	// Line 270, Address: 0x2bf848, Func Offset: 0x8
	// Line 271, Address: 0x2bf84c, Func Offset: 0xc
	// Line 272, Address: 0x2bf850, Func Offset: 0x10
	// Line 273, Address: 0x2bf854, Func Offset: 0x14
	// Line 274, Address: 0x2bf860, Func Offset: 0x20
	// Line 273, Address: 0x2bf864, Func Offset: 0x24
	// Line 274, Address: 0x2bf868, Func Offset: 0x28
	// Line 275, Address: 0x2bf874, Func Offset: 0x34
	// Func End, Address: 0x2bf880, Func Offset: 0x40
}

// zMusicUnpause__Fv
// Start address: 0x2bf880
void zMusicUnpause()
{
	uint32 i;
	// Line 258, Address: 0x2bf880, Func Offset: 0
	// Line 259, Address: 0x2bf884, Func Offset: 0x4
	// Line 258, Address: 0x2bf888, Func Offset: 0x8
	// Line 259, Address: 0x2bf894, Func Offset: 0x14
	// Line 261, Address: 0x2bf8a0, Func Offset: 0x20
	// Line 263, Address: 0x2bf8ac, Func Offset: 0x2c
	// Line 264, Address: 0x2bf8c0, Func Offset: 0x40
	// Line 265, Address: 0x2bf8d0, Func Offset: 0x50
	// Line 267, Address: 0x2bf8d8, Func Offset: 0x58
	// Line 263, Address: 0x2bf8e0, Func Offset: 0x60
	// Line 267, Address: 0x2bf8e4, Func Offset: 0x64
	// Func End, Address: 0x2bf90c, Func Offset: 0x8c
}

// zMusicPause__Fv
// Start address: 0x2bf910
void zMusicPause()
{
	uint32 i;
	// Line 246, Address: 0x2bf910, Func Offset: 0
	// Line 247, Address: 0x2bf914, Func Offset: 0x4
	// Line 246, Address: 0x2bf918, Func Offset: 0x8
	// Line 247, Address: 0x2bf924, Func Offset: 0x14
	// Line 249, Address: 0x2bf930, Func Offset: 0x20
	// Line 251, Address: 0x2bf93c, Func Offset: 0x2c
	// Line 252, Address: 0x2bf950, Func Offset: 0x40
	// Line 253, Address: 0x2bf960, Func Offset: 0x50
	// Line 255, Address: 0x2bf96c, Func Offset: 0x5c
	// Line 251, Address: 0x2bf974, Func Offset: 0x64
	// Line 255, Address: 0x2bf978, Func Offset: 0x68
	// Func End, Address: 0x2bf99c, Func Offset: 0x8c
}

// zMusicKill__Fv
// Start address: 0x2bf9a0
void zMusicKill()
{
	uint32 i;
	// Line 238, Address: 0x2bf9a0, Func Offset: 0
	// Line 239, Address: 0x2bf9b0, Func Offset: 0x10
	// Line 241, Address: 0x2bf9bc, Func Offset: 0x1c
	// Line 242, Address: 0x2bf9d0, Func Offset: 0x30
	// Line 241, Address: 0x2bf9d4, Func Offset: 0x34
	// Line 242, Address: 0x2bf9d8, Func Offset: 0x38
	// Line 243, Address: 0x2bf9e4, Func Offset: 0x44
	// Func End, Address: 0x2bfa14, Func Offset: 0x74
}

// zMusicUpdate__Ff
// Start address: 0x2bfa20
void zMusicUpdate()
{
	float32 fNowTime;
	uint32 i;
	float32 fDeltaTime;
	float32 fHowLongPlaying;
	// Line 133, Address: 0x2bfa20, Func Offset: 0
	// Line 135, Address: 0x2bfa38, Func Offset: 0x18
	// Line 139, Address: 0x2bfa4c, Func Offset: 0x2c
	// Line 172, Address: 0x2bfa64, Func Offset: 0x44
	// Line 173, Address: 0x2bfa7c, Func Offset: 0x5c
	// Line 175, Address: 0x2bfa88, Func Offset: 0x68
	// Line 178, Address: 0x2bfa90, Func Offset: 0x70
	// Line 175, Address: 0x2bfa98, Func Offset: 0x78
	// Line 178, Address: 0x2bfa9c, Func Offset: 0x7c
	// Line 180, Address: 0x2bfaa0, Func Offset: 0x80
	// Line 183, Address: 0x2bfab4, Func Offset: 0x94
	// Line 185, Address: 0x2bfaec, Func Offset: 0xcc
	// Line 186, Address: 0x2bfaf4, Func Offset: 0xd4
	// Line 188, Address: 0x2bfb2c, Func Offset: 0x10c
	// Line 192, Address: 0x2bfb44, Func Offset: 0x124
	// Line 194, Address: 0x2bfb80, Func Offset: 0x160
	// Line 197, Address: 0x2bfba0, Func Offset: 0x180
	// Line 198, Address: 0x2bfbac, Func Offset: 0x18c
	// Line 199, Address: 0x2bfbc4, Func Offset: 0x1a4
	// Line 201, Address: 0x2bfbcc, Func Offset: 0x1ac
	// Line 217, Address: 0x2bfbe0, Func Offset: 0x1c0
	// Line 219, Address: 0x2bfbf0, Func Offset: 0x1d0
	// Line 220, Address: 0x2bfbf8, Func Offset: 0x1d8
	// Line 222, Address: 0x2bfc18, Func Offset: 0x1f8
	// Line 224, Address: 0x2bfc20, Func Offset: 0x200
	// Line 226, Address: 0x2bfc40, Func Offset: 0x220
	// Line 224, Address: 0x2bfc44, Func Offset: 0x224
	// Line 227, Address: 0x2bfc54, Func Offset: 0x234
	// Line 229, Address: 0x2bfc60, Func Offset: 0x240
	// Line 228, Address: 0x2bfc64, Func Offset: 0x244
	// Line 229, Address: 0x2bfc68, Func Offset: 0x248
	// Line 230, Address: 0x2bfc74, Func Offset: 0x254
	// Line 234, Address: 0x2bfc78, Func Offset: 0x258
	// Line 235, Address: 0x2bfc88, Func Offset: 0x268
	// Line 139, Address: 0x2bfc94, Func Offset: 0x274
	// Line 235, Address: 0x2bfc98, Func Offset: 0x278
	// Line 163, Address: 0x2bfcb8, Func Offset: 0x298
	// Line 235, Address: 0x2bfcbc, Func Offset: 0x29c
	// Line 171, Address: 0x2bfd5c, Func Offset: 0x33c
	// Line 154, Address: 0x2bfd64, Func Offset: 0x344
	// Line 235, Address: 0x2bfd68, Func Offset: 0x348
	// Line 159, Address: 0x2bfda0, Func Offset: 0x380
	// Line 235, Address: 0x2bfda8, Func Offset: 0x388
	// Line 160, Address: 0x2bfdbc, Func Offset: 0x39c
	// Line 235, Address: 0x2bfdcc, Func Offset: 0x3ac
	// Line 162, Address: 0x2bfdf0, Func Offset: 0x3d0
	// Line 201, Address: 0x2bfdf8, Func Offset: 0x3d8
	// Line 235, Address: 0x2bfdfc, Func Offset: 0x3dc
	// Line 207, Address: 0x2bfe14, Func Offset: 0x3f4
	// Line 210, Address: 0x2bfe1c, Func Offset: 0x3fc
	// Line 235, Address: 0x2bfe20, Func Offset: 0x400
	// Line 210, Address: 0x2bfe24, Func Offset: 0x404
	// Line 235, Address: 0x2bfe2c, Func Offset: 0x40c
	// Line 229, Address: 0x2bfe44, Func Offset: 0x424
	// Line 235, Address: 0x2bfe48, Func Offset: 0x428
	// Func End, Address: 0x2bfe74, Func Offset: 0x454
}

// zMusicInit__Fv
// Start address: 0x2bfe80
void zMusicInit()
{
	iSndGroupHandle hMusicDefGroup;
	uint8 uSoundCount;
	// Line 86, Address: 0x2bfe80, Func Offset: 0
	// Line 88, Address: 0x2bfe84, Func Offset: 0x4
	// Line 86, Address: 0x2bfe88, Func Offset: 0x8
	// Line 95, Address: 0x2bfe8c, Func Offset: 0xc
	// Line 86, Address: 0x2bfe90, Func Offset: 0x10
	// Line 95, Address: 0x2bfe94, Func Offset: 0x14
	// Line 86, Address: 0x2bfe98, Func Offset: 0x18
	// Line 97, Address: 0x2bfe9c, Func Offset: 0x1c
	// Line 88, Address: 0x2bfea0, Func Offset: 0x20
	// Line 89, Address: 0x2bfea4, Func Offset: 0x24
	// Line 95, Address: 0x2bfea8, Func Offset: 0x28
	// Line 89, Address: 0x2bfeac, Func Offset: 0x2c
	// Line 90, Address: 0x2bfeb0, Func Offset: 0x30
	// Line 95, Address: 0x2bfeb8, Func Offset: 0x38
	// Line 97, Address: 0x2bfebc, Func Offset: 0x3c
	// Line 98, Address: 0x2bfec8, Func Offset: 0x48
	// Line 100, Address: 0x2bfee0, Func Offset: 0x60
	// Line 102, Address: 0x2bfee8, Func Offset: 0x68
	// Line 118, Address: 0x2bfef0, Func Offset: 0x70
	// Line 106, Address: 0x2bff0c, Func Offset: 0x8c
	// Line 107, Address: 0x2bff10, Func Offset: 0x90
	// Line 118, Address: 0x2bff14, Func Offset: 0x94
	// Line 111, Address: 0x2bff2c, Func Offset: 0xac
	// Line 118, Address: 0x2bff40, Func Offset: 0xc0
	// Func End, Address: 0x2bff68, Func Offset: 0xe8
}

