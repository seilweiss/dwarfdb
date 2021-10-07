
typedef void(*type_0)(uint8);
typedef void(*type_3)(uint8);

typedef int8 type_1[16];
typedef int8 type_2[16];

int8 buffer[16];
int8 buffer[16];
float32 sFMVVolumeScale;
void(*sxFMVPauseSoundCB)(uint8);
void(*DefaultFMVPauseSoundCB)(uint8);

int32 xFMVGetBinkCompliantVolume();
void(*)(uint8) xFMVSetPauseSoundCB(void(*pauseSoundCB)(uint8));
void DefaultFMVPauseSoundCB(uint8 doPause);
void xFMVPauseSound(uint8 doPause);

// xFMVGetBinkCompliantVolume__Fv
// Start address: 0x4c3f80
int32 xFMVGetBinkCompliantVolume()
{
	int32 volume;
	// Line 98, Address: 0x4c3f80, Func Offset: 0
	// Line 99, Address: 0x4c3f88, Func Offset: 0x8
	// Line 110, Address: 0x4c3f94, Func Offset: 0x14
	// Line 99, Address: 0x4c3f98, Func Offset: 0x18
	// Line 110, Address: 0x4c3fb0, Func Offset: 0x30
	// Func End, Address: 0x4c3fb8, Func Offset: 0x38
}

// xFMVSetPauseSoundCB__FPFb_v
// Start address: 0x4c3fc0
void(*)(uint8) xFMVSetPauseSoundCB(void(*pauseSoundCB)(uint8))
{
	void(*curCB)(uint8);
	// Line 82, Address: 0x4c3fc0, Func Offset: 0
	// Line 85, Address: 0x4c3fc8, Func Offset: 0x8
	// Line 86, Address: 0x4c3fcc, Func Offset: 0xc
	// Line 83, Address: 0x4c3fdc, Func Offset: 0x1c
	// Line 87, Address: 0x4c3fe4, Func Offset: 0x24
	// Func End, Address: 0x4c3fec, Func Offset: 0x2c
}

// DefaultFMVPauseSoundCB__Fb
// Start address: 0x4c3ff0
void DefaultFMVPauseSoundCB(uint8 doPause)
{
	// Line 75, Address: 0x4c3ff4, Func Offset: 0x4
	// Func End, Address: 0x4c4000, Func Offset: 0x10
}

// xFMVPauseSound__Fb
// Start address: 0x4c4000
void xFMVPauseSound(uint8 doPause)
{
	// Line 60, Address: 0x4c4000, Func Offset: 0
	// Line 61, Address: 0x4c400c, Func Offset: 0xc
	// Line 62, Address: 0x4c4018, Func Offset: 0x18
	// Line 64, Address: 0x4c4020, Func Offset: 0x20
	// Func End, Address: 0x4c4044, Func Offset: 0x44
}

