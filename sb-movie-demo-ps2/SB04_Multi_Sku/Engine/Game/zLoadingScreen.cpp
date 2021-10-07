



void Exit();
void Render();
void Update(float32 dt);
void Init();
void CustomSignalHandler(zUI* from, uint32 dest, uint32 event, float32* param, xBase* paramWidget, uint32 paramWidgetID, void* user);
void* CustomStaticAllocator(uint32 size, void* user);

// Exit__14zLoadingScreenFv
// Start address: 0x2b2c20
void zLoadingScreen::Exit()
{
	int32 j;
	int32 i;
	// Line 144, Address: 0x2b2c20, Func Offset: 0
	// Line 145, Address: 0x2b2c3c, Func Offset: 0x1c
	// Line 146, Address: 0x2b2c50, Func Offset: 0x30
	// Line 148, Address: 0x2b2c98, Func Offset: 0x78
	// Line 149, Address: 0x2b2ca0, Func Offset: 0x80
	// Line 152, Address: 0x2b2cb0, Func Offset: 0x90
	// Func End, Address: 0x2b2d08, Func Offset: 0xe8
}

// Render__14zLoadingScreenFv
// Start address: 0x2b2d10
void zLoadingScreen::Render()
{
	zUIMgrHDRContext context;
	int32 i;
	// Line 130, Address: 0x2b2d10, Func Offset: 0
	// Line 133, Address: 0x2b2d28, Func Offset: 0x18
	// Line 135, Address: 0x2b2d84, Func Offset: 0x74
	// Line 136, Address: 0x2b2d9c, Func Offset: 0x8c
	// Line 137, Address: 0x2b2da8, Func Offset: 0x98
	// Line 136, Address: 0x2b2dac, Func Offset: 0x9c
	// Line 137, Address: 0x2b2db0, Func Offset: 0xa0
	// Line 140, Address: 0x2b2dc0, Func Offset: 0xb0
	// Line 141, Address: 0x2b2dec, Func Offset: 0xdc
	// Func End, Address: 0x2b2e30, Func Offset: 0x120
}

// Update__14zLoadingScreenFf
// Start address: 0x2b2e30
void zLoadingScreen::Update(float32 dt)
{
	int32 i;
	// Line 123, Address: 0x2b2e30, Func Offset: 0
	// Line 124, Address: 0x2b2e4c, Func Offset: 0x1c
	// Line 123, Address: 0x2b2e50, Func Offset: 0x20
	// Line 124, Address: 0x2b2e54, Func Offset: 0x24
	// Line 125, Address: 0x2b2e6c, Func Offset: 0x3c
	// Line 126, Address: 0x2b2e7c, Func Offset: 0x4c
	// Line 127, Address: 0x2b2ee8, Func Offset: 0xb8
	// Func End, Address: 0x2b2f08, Func Offset: 0xd8
}

// Init__14zLoadingScreenFv
// Start address: 0x2b2f10
void zLoadingScreen::Init()
{
	xGroupAsset* group;
	int16 i;
	uint32 size;
	xDynAsset* asset;
	void* test;
	zUI* element;
	int32 i;
	// Line 51, Address: 0x2b2f10, Func Offset: 0
	// Line 54, Address: 0x2b2f14, Func Offset: 0x4
	// Line 51, Address: 0x2b2f18, Func Offset: 0x8
	// Line 54, Address: 0x2b2f1c, Func Offset: 0xc
	// Line 51, Address: 0x2b2f20, Func Offset: 0x10
	// Line 58, Address: 0x2b2f24, Func Offset: 0x14
	// Line 51, Address: 0x2b2f28, Func Offset: 0x18
	// Line 53, Address: 0x2b2f48, Func Offset: 0x38
	// Line 54, Address: 0x2b2f4c, Func Offset: 0x3c
	// Line 58, Address: 0x2b2f54, Func Offset: 0x44
	// Line 57, Address: 0x2b2f58, Func Offset: 0x48
	// Line 58, Address: 0x2b2f5c, Func Offset: 0x4c
	// Line 60, Address: 0x2b2f68, Func Offset: 0x58
	// Line 63, Address: 0x2b2f84, Func Offset: 0x74
	// Line 64, Address: 0x2b2f94, Func Offset: 0x84
	// Line 68, Address: 0x2b2f9c, Func Offset: 0x8c
	// Line 71, Address: 0x2b2fe8, Func Offset: 0xd8
	// Line 72, Address: 0x2b2ff8, Func Offset: 0xe8
	// Line 74, Address: 0x2b2ffc, Func Offset: 0xec
	// Line 75, Address: 0x2b300c, Func Offset: 0xfc
	// Line 76, Address: 0x2b3358, Func Offset: 0x448
	// Line 80, Address: 0x2b3360, Func Offset: 0x450
	// Line 81, Address: 0x2b3374, Func Offset: 0x464
	// Line 82, Address: 0x2b3384, Func Offset: 0x474
	// Line 83, Address: 0x2b36e8, Func Offset: 0x7d8
	// Line 86, Address: 0x2b36f0, Func Offset: 0x7e0
	// Line 87, Address: 0x2b3704, Func Offset: 0x7f4
	// Line 88, Address: 0x2b3714, Func Offset: 0x804
	// Line 89, Address: 0x2b3a58, Func Offset: 0xb48
	// Line 92, Address: 0x2b3a60, Func Offset: 0xb50
	// Line 93, Address: 0x2b3a74, Func Offset: 0xb64
	// Line 94, Address: 0x2b3a84, Func Offset: 0xb74
	// Line 98, Address: 0x2b3dc8, Func Offset: 0xeb8
	// Line 101, Address: 0x2b3dd0, Func Offset: 0xec0
	// Line 103, Address: 0x2b3de8, Func Offset: 0xed8
	// Line 105, Address: 0x2b3e00, Func Offset: 0xef0
	// Line 108, Address: 0x2b3e1c, Func Offset: 0xf0c
	// Line 107, Address: 0x2b3e20, Func Offset: 0xf10
	// Line 108, Address: 0x2b3e24, Func Offset: 0xf14
	// Line 107, Address: 0x2b3e28, Func Offset: 0xf18
	// Line 108, Address: 0x2b3e2c, Func Offset: 0xf1c
	// Line 111, Address: 0x2b3e30, Func Offset: 0xf20
	// Line 108, Address: 0x2b3e34, Func Offset: 0xf24
	// Line 111, Address: 0x2b3e38, Func Offset: 0xf28
	// Line 114, Address: 0x2b3e50, Func Offset: 0xf40
	// Line 116, Address: 0x2b3e68, Func Offset: 0xf58
	// Line 117, Address: 0x2b3ec8, Func Offset: 0xfb8
	// Line 118, Address: 0x2b3ed8, Func Offset: 0xfc8
	// Line 120, Address: 0x2b3ef0, Func Offset: 0xfe0
	// Line 75, Address: 0x2b3f10, Func Offset: 0x1000
	// Line 120, Address: 0x2b3f18, Func Offset: 0x1008
	// Line 75, Address: 0x2b3f1c, Func Offset: 0x100c
	// Line 120, Address: 0x2b3f20, Func Offset: 0x1010
	// Line 75, Address: 0x2b3f30, Func Offset: 0x1020
	// Line 120, Address: 0x2b3f34, Func Offset: 0x1024
	// Line 75, Address: 0x2b3f3c, Func Offset: 0x102c
	// Line 120, Address: 0x2b3f44, Func Offset: 0x1034
	// Line 75, Address: 0x2b3fe4, Func Offset: 0x10d4
	// Line 120, Address: 0x2b3fe8, Func Offset: 0x10d8
	// Line 82, Address: 0x2b4014, Func Offset: 0x1104
	// Line 120, Address: 0x2b401c, Func Offset: 0x110c
	// Line 82, Address: 0x2b4020, Func Offset: 0x1110
	// Line 120, Address: 0x2b4024, Func Offset: 0x1114
	// Line 82, Address: 0x2b4034, Func Offset: 0x1124
	// Line 120, Address: 0x2b4038, Func Offset: 0x1128
	// Line 82, Address: 0x2b4040, Func Offset: 0x1130
	// Line 120, Address: 0x2b4048, Func Offset: 0x1138
	// Line 82, Address: 0x2b40e8, Func Offset: 0x11d8
	// Line 120, Address: 0x2b40ec, Func Offset: 0x11dc
	// Line 88, Address: 0x2b4118, Func Offset: 0x1208
	// Line 120, Address: 0x2b4120, Func Offset: 0x1210
	// Line 88, Address: 0x2b4124, Func Offset: 0x1214
	// Line 120, Address: 0x2b4128, Func Offset: 0x1218
	// Line 88, Address: 0x2b4138, Func Offset: 0x1228
	// Line 120, Address: 0x2b413c, Func Offset: 0x122c
	// Line 88, Address: 0x2b4144, Func Offset: 0x1234
	// Line 120, Address: 0x2b414c, Func Offset: 0x123c
	// Line 88, Address: 0x2b41ec, Func Offset: 0x12dc
	// Line 120, Address: 0x2b41f0, Func Offset: 0x12e0
	// Line 94, Address: 0x2b421c, Func Offset: 0x130c
	// Line 120, Address: 0x2b4224, Func Offset: 0x1314
	// Line 94, Address: 0x2b4228, Func Offset: 0x1318
	// Line 120, Address: 0x2b422c, Func Offset: 0x131c
	// Line 94, Address: 0x2b423c, Func Offset: 0x132c
	// Line 120, Address: 0x2b4240, Func Offset: 0x1330
	// Line 94, Address: 0x2b4248, Func Offset: 0x1338
	// Line 120, Address: 0x2b4250, Func Offset: 0x1340
	// Line 94, Address: 0x2b42f0, Func Offset: 0x13e0
	// Line 120, Address: 0x2b42f4, Func Offset: 0x13e4
	// Func End, Address: 0x2b4334, Func Offset: 0x1424
}

// CustomSignalHandler__20@unnamed@zWadUI_cpp@FP3zUIUiUiPCfP5xBaseUiPv
// Start address: 0x2b4340
void CustomSignalHandler(zUI* from, uint32 dest, uint32 event, float32* param, xBase* paramWidget, uint32 paramWidgetID, void* user)
{
	// Line 43, Address: 0x2b4340, Func Offset: 0
	// Line 44, Address: 0x2b4370, Func Offset: 0x30
	// Line 45, Address: 0x2b4420, Func Offset: 0xe0
	// Func End, Address: 0x2b4444, Func Offset: 0x104
}

// CustomStaticAllocator__20@unnamed@zWadUI_cpp@FUiPv
// Start address: 0x2b4450
void* CustomStaticAllocator(uint32 size, void* user)
{
	// Line 38, Address: 0x2b4450, Func Offset: 0
	// Line 39, Address: 0x2b4454, Func Offset: 0x4
	// Line 38, Address: 0x2b4458, Func Offset: 0x8
	// Line 39, Address: 0x2b4468, Func Offset: 0x18
	// Line 40, Address: 0x2b449c, Func Offset: 0x4c
	// Line 39, Address: 0x2b44a8, Func Offset: 0x58
	// Line 40, Address: 0x2b44ac, Func Offset: 0x5c
	// Func End, Address: 0x2b44b4, Func Offset: 0x64
}

