



void hide();
void show(uint8 autohide);
void update(float32 dt);
void setup();
void reset();
void* __ct();

// hide__Q24zHud16KrabbyPattyMeterFv
// Start address: 0x37cb40
void KrabbyPattyMeter::hide()
{
	// Line 145, Address: 0x37cb40, Func Offset: 0
	// Line 146, Address: 0x37cb4c, Func Offset: 0xc
	// Line 148, Address: 0x37cb54, Func Offset: 0x14
	// Line 150, Address: 0x37cb60, Func Offset: 0x20
	// Func End, Address: 0x37cb6c, Func Offset: 0x2c
}

// show__Q24zHud16KrabbyPattyMeterFb
// Start address: 0x37cb70
void KrabbyPattyMeter::show(uint8 autohide)
{
	// Line 123, Address: 0x37cb70, Func Offset: 0
	// Line 124, Address: 0x37cb84, Func Offset: 0x14
	// Line 126, Address: 0x37cb94, Func Offset: 0x24
	// Line 124, Address: 0x37cb98, Func Offset: 0x28
	// Line 126, Address: 0x37cba0, Func Offset: 0x30
	// Line 128, Address: 0x37cbb4, Func Offset: 0x44
	// Line 137, Address: 0x37cbb8, Func Offset: 0x48
	// Line 139, Address: 0x37cbc0, Func Offset: 0x50
	// Line 142, Address: 0x37cbd4, Func Offset: 0x64
	// Line 134, Address: 0x37cbe0, Func Offset: 0x70
	// Line 142, Address: 0x37cbe4, Func Offset: 0x74
	// Line 134, Address: 0x37cbe8, Func Offset: 0x78
	// Line 142, Address: 0x37cbec, Func Offset: 0x7c
	// Func End, Address: 0x37cc10, Func Offset: 0xa0
}

// update__Q24zHud16KrabbyPattyMeterFf
// Start address: 0x37cc10
void KrabbyPattyMeter::update(float32 dt)
{
	int32 healthIdx;
	float32 delta;
	// Line 74, Address: 0x37cc10, Func Offset: 0
	// Line 75, Address: 0x37cc30, Func Offset: 0x20
	// Line 74, Address: 0x37cc34, Func Offset: 0x24
	// Line 75, Address: 0x37cc38, Func Offset: 0x28
	// Line 120, Address: 0x37cc5c, Func Offset: 0x4c
	// Line 82, Address: 0x37cc6c, Func Offset: 0x5c
	// Line 120, Address: 0x37cc90, Func Offset: 0x80
	// Line 85, Address: 0x37cc9c, Func Offset: 0x8c
	// Line 120, Address: 0x37cca0, Func Offset: 0x90
	// Line 85, Address: 0x37cca4, Func Offset: 0x94
	// Line 120, Address: 0x37ccb4, Func Offset: 0xa4
	// Line 85, Address: 0x37ccb8, Func Offset: 0xa8
	// Line 120, Address: 0x37ccbc, Func Offset: 0xac
	// Line 92, Address: 0x37ccd4, Func Offset: 0xc4
	// Line 120, Address: 0x37ccdc, Func Offset: 0xcc
	// Line 96, Address: 0x37cd08, Func Offset: 0xf8
	// Line 97, Address: 0x37cd0c, Func Offset: 0xfc
	// Line 96, Address: 0x37cd10, Func Offset: 0x100
	// Line 120, Address: 0x37cd14, Func Offset: 0x104
	// Line 96, Address: 0x37cd1c, Func Offset: 0x10c
	// Line 120, Address: 0x37cd20, Func Offset: 0x110
	// Line 97, Address: 0x37cd34, Func Offset: 0x124
	// Line 120, Address: 0x37cd38, Func Offset: 0x128
	// Line 97, Address: 0x37cd44, Func Offset: 0x134
	// Line 120, Address: 0x37cd48, Func Offset: 0x138
	// Line 98, Address: 0x37cd8c, Func Offset: 0x17c
	// Line 120, Address: 0x37cd94, Func Offset: 0x184
	// Line 98, Address: 0x37cda0, Func Offset: 0x190
	// Line 120, Address: 0x37cda4, Func Offset: 0x194
	// Line 99, Address: 0x37cde8, Func Offset: 0x1d8
	// Line 120, Address: 0x37cdf0, Func Offset: 0x1e0
	// Line 99, Address: 0x37cdfc, Func Offset: 0x1ec
	// Line 120, Address: 0x37ce00, Func Offset: 0x1f0
	// Line 100, Address: 0x37ce38, Func Offset: 0x228
	// Line 120, Address: 0x37ce40, Func Offset: 0x230
	// Line 105, Address: 0x37ce48, Func Offset: 0x238
	// Line 106, Address: 0x37ce4c, Func Offset: 0x23c
	// Line 105, Address: 0x37ce50, Func Offset: 0x240
	// Line 120, Address: 0x37ce54, Func Offset: 0x244
	// Line 105, Address: 0x37ce5c, Func Offset: 0x24c
	// Line 120, Address: 0x37ce60, Func Offset: 0x250
	// Line 106, Address: 0x37ce74, Func Offset: 0x264
	// Line 120, Address: 0x37ce78, Func Offset: 0x268
	// Line 106, Address: 0x37ce84, Func Offset: 0x274
	// Line 120, Address: 0x37ce88, Func Offset: 0x278
	// Line 107, Address: 0x37cecc, Func Offset: 0x2bc
	// Line 120, Address: 0x37ced4, Func Offset: 0x2c4
	// Line 107, Address: 0x37cee0, Func Offset: 0x2d0
	// Line 120, Address: 0x37cee4, Func Offset: 0x2d4
	// Line 108, Address: 0x37cf28, Func Offset: 0x318
	// Line 120, Address: 0x37cf30, Func Offset: 0x320
	// Line 108, Address: 0x37cf3c, Func Offset: 0x32c
	// Line 120, Address: 0x37cf40, Func Offset: 0x330
	// Line 115, Address: 0x37cf9c, Func Offset: 0x38c
	// Line 120, Address: 0x37cfc0, Func Offset: 0x3b0
	// Line 117, Address: 0x37cfc4, Func Offset: 0x3b4
	// Line 120, Address: 0x37cfc8, Func Offset: 0x3b8
	// Func End, Address: 0x37cff8, Func Offset: 0x3e8
}

// setup__Q24zHud16KrabbyPattyMeterFv
// Start address: 0x37d000
void KrabbyPattyMeter::setup()
{
	uint32 meterID;
	xBase* baseWidget;
	uint32 hudLightKitID;
	xLightKit* hudLightKit;
	int32 i;
	int32 j;
	// Line 35, Address: 0x37d000, Func Offset: 0
	// Line 38, Address: 0x37d010, Func Offset: 0x10
	// Line 39, Address: 0x37d01c, Func Offset: 0x1c
	// Line 40, Address: 0x37d024, Func Offset: 0x24
	// Line 42, Address: 0x37d02c, Func Offset: 0x2c
	// Line 43, Address: 0x37d034, Func Offset: 0x34
	// Line 44, Address: 0x37d048, Func Offset: 0x48
	// Line 47, Address: 0x37d050, Func Offset: 0x50
	// Line 48, Address: 0x37d054, Func Offset: 0x54
	// Line 49, Address: 0x37d058, Func Offset: 0x58
	// Line 44, Address: 0x37d05c, Func Offset: 0x5c
	// Line 47, Address: 0x37d060, Func Offset: 0x60
	// Line 48, Address: 0x37d06c, Func Offset: 0x6c
	// Line 49, Address: 0x37d078, Func Offset: 0x78
	// Line 52, Address: 0x37d0b0, Func Offset: 0xb0
	// Line 53, Address: 0x37d0c0, Func Offset: 0xc0
	// Line 55, Address: 0x37d0cc, Func Offset: 0xcc
	// Line 59, Address: 0x37d0d8, Func Offset: 0xd8
	// Line 61, Address: 0x37d0f0, Func Offset: 0xf0
	// Line 63, Address: 0x37d0f8, Func Offset: 0xf8
	// Line 65, Address: 0x37d0fc, Func Offset: 0xfc
	// Line 66, Address: 0x37d110, Func Offset: 0x110
	// Line 69, Address: 0x37d120, Func Offset: 0x120
	// Line 71, Address: 0x37d130, Func Offset: 0x130
	// Func End, Address: 0x37d140, Func Offset: 0x140
}

// reset__Q24zHud16KrabbyPattyMeterFv
// Start address: 0x37d140
void KrabbyPattyMeter::reset()
{
	// Line 24, Address: 0x37d140, Func Offset: 0
	// Line 25, Address: 0x37d154, Func Offset: 0x14
	// Line 27, Address: 0x37d15c, Func Offset: 0x1c
	// Line 29, Address: 0x37d164, Func Offset: 0x24
	// Line 30, Address: 0x37d168, Func Offset: 0x28
	// Line 29, Address: 0x37d16c, Func Offset: 0x2c
	// Line 31, Address: 0x37d174, Func Offset: 0x34
	// Line 29, Address: 0x37d178, Func Offset: 0x38
	// Line 30, Address: 0x37d17c, Func Offset: 0x3c
	// Line 31, Address: 0x37d188, Func Offset: 0x48
	// Line 32, Address: 0x37d18c, Func Offset: 0x4c
	// Func End, Address: 0x37d19c, Func Offset: 0x5c
}

// __ct__Q24zHud16KrabbyPattyMeterFv
// Start address: 0x37d1a0
void* KrabbyPattyMeter::__ct()
{
	// Line 16, Address: 0x37d1a0, Func Offset: 0
	// Line 19, Address: 0x37d1a4, Func Offset: 0x4
	// Line 16, Address: 0x37d1a8, Func Offset: 0x8
	// Line 20, Address: 0x37d1ac, Func Offset: 0xc
	// Line 16, Address: 0x37d1b0, Func Offset: 0x10
	// Line 18, Address: 0x37d1b4, Func Offset: 0x14
	// Line 17, Address: 0x37d1b8, Func Offset: 0x18
	// Line 18, Address: 0x37d1bc, Func Offset: 0x1c
	// Line 21, Address: 0x37d1c4, Func Offset: 0x24
	// Line 18, Address: 0x37d1c8, Func Offset: 0x28
	// Line 19, Address: 0x37d1cc, Func Offset: 0x2c
	// Line 21, Address: 0x37d1d8, Func Offset: 0x38
	// Func End, Address: 0x37d1e0, Func Offset: 0x40
}

