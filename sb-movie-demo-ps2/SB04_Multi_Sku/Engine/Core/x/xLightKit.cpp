



void xLightKit_Destroy(xLightKit* lkit);
xLightKit* xLightKit_GetCurrent();
void xLightKit_Enable(xLightKit* lkit, RpWorld* world);
void xLightKit_ClonePS2AllDoApply();
xLightKit* xLightKit_Prepare(void* data);

// xLightKit_Destroy__FP9xLightKit
// Start address: 0x411530
void xLightKit_Destroy(xLightKit* lkit)
{
	uint32 i;
	xLightKitLight* currLight;
	RwFrame* tframe;
	// Line 429, Address: 0x411530, Func Offset: 0
	// Line 431, Address: 0x411548, Func Offset: 0x18
	// Line 437, Address: 0x411550, Func Offset: 0x20
	// Line 435, Address: 0x411554, Func Offset: 0x24
	// Line 437, Address: 0x411558, Func Offset: 0x28
	// Line 438, Address: 0x411564, Func Offset: 0x34
	// Line 452, Address: 0x411570, Func Offset: 0x40
	// Line 453, Address: 0x411588, Func Offset: 0x58
	// Func End, Address: 0x4115ec, Func Offset: 0xbc
}

// xLightKit_GetCurrent__FP7RpWorld
// Start address: 0x4115f0
xLightKit* xLightKit_GetCurrent()
{
	// Line 425, Address: 0x4115f0, Func Offset: 0
	// Func End, Address: 0x4115f8, Func Offset: 0x8
}

// xLightKit_Enable__FP9xLightKitP7RpWorld
// Start address: 0x411600
void xLightKit_Enable(xLightKit* lkit, RpWorld* world)
{
	uint32 i;
	// Line 393, Address: 0x411600, Func Offset: 0
	// Line 395, Address: 0x411620, Func Offset: 0x20
	// Line 398, Address: 0x411628, Func Offset: 0x28
	// Line 399, Address: 0x411630, Func Offset: 0x30
	// Line 400, Address: 0x411644, Func Offset: 0x44
	// Line 401, Address: 0x411658, Func Offset: 0x58
	// Line 408, Address: 0x411670, Func Offset: 0x70
	// Line 409, Address: 0x411678, Func Offset: 0x78
	// Line 410, Address: 0x41168c, Func Offset: 0x8c
	// Line 411, Address: 0x4116a0, Func Offset: 0xa0
	// Line 412, Address: 0x4116b4, Func Offset: 0xb4
	// Line 416, Address: 0x4116b8, Func Offset: 0xb8
	// Line 417, Address: 0x4116c0, Func Offset: 0xc0
	// Line 420, Address: 0x4116c4, Func Offset: 0xc4
	// Func End, Address: 0x4116e0, Func Offset: 0xe0
}

// 
// Start address: 0x4116e0
void xLightKit_ClonePS2AllDoApply()
{
	float32* _rwSkyLightFillPos'79;
	uint32 i;
	RpLight* light;
	RpLightType type;
	RwRGBAReal* color;
	RwFrame* frame;
	// Line 347, Address: 0x4116e0, Func Offset: 0
	// Line 349, Address: 0x4116e4, Func Offset: 0x4
	// Line 354, Address: 0x4116ec, Func Offset: 0xc
	// Line 361, Address: 0x4116f8, Func Offset: 0x18
	// Line 362, Address: 0x4116fc, Func Offset: 0x1c
	// Line 358, Address: 0x411700, Func Offset: 0x20
	// Line 361, Address: 0x411704, Func Offset: 0x24
	// Line 362, Address: 0x41170c, Func Offset: 0x2c
	// Line 363, Address: 0x411714, Func Offset: 0x34
	// Line 373, Address: 0x411728, Func Offset: 0x48
	// Line 364, Address: 0x41172c, Func Offset: 0x4c
	// Line 368, Address: 0x411730, Func Offset: 0x50
	// Line 364, Address: 0x411738, Func Offset: 0x58
	// Line 365, Address: 0x411740, Func Offset: 0x60
	// Line 368, Address: 0x411744, Func Offset: 0x64
	// Line 369, Address: 0x41174c, Func Offset: 0x6c
	// Line 370, Address: 0x411758, Func Offset: 0x78
	// Line 371, Address: 0x411764, Func Offset: 0x84
	// Line 373, Address: 0x411768, Func Offset: 0x88
	// Line 374, Address: 0x411770, Func Offset: 0x90
	// Line 375, Address: 0x411774, Func Offset: 0x94
	// Line 376, Address: 0x411780, Func Offset: 0xa0
	// Line 377, Address: 0x41178c, Func Offset: 0xac
	// Line 378, Address: 0x411798, Func Offset: 0xb8
	// Line 379, Address: 0x41179c, Func Offset: 0xbc
	// Line 378, Address: 0x4117a0, Func Offset: 0xc0
	// Line 379, Address: 0x4117a4, Func Offset: 0xc4
	// Line 378, Address: 0x4117a8, Func Offset: 0xc8
	// Line 380, Address: 0x4117ac, Func Offset: 0xcc
	// Line 381, Address: 0x4117b8, Func Offset: 0xd8
	// Line 382, Address: 0x4117bc, Func Offset: 0xdc
	// Line 381, Address: 0x4117c0, Func Offset: 0xe0
	// Line 382, Address: 0x4117c4, Func Offset: 0xe4
	// Line 381, Address: 0x4117c8, Func Offset: 0xe8
	// Line 382, Address: 0x4117cc, Func Offset: 0xec
	// Line 384, Address: 0x4117d0, Func Offset: 0xf0
	// Line 387, Address: 0x4117e8, Func Offset: 0x108
	// Func End, Address: 0x4117fc, Func Offset: 0x11c
}

// xLightKit_Prepare__FPv
// Start address: 0x411800
xLightKit* xLightKit_Prepare(void* data)
{
	xLightKit* lkit;
	xLightKitLight* currlight;
	uint32 i;
	float32 s;
	RwFrame* frame;
	RwMatrixTag tmpmat;
	// Line 205, Address: 0x411800, Func Offset: 0
	// Line 207, Address: 0x41181c, Func Offset: 0x1c
	// Line 205, Address: 0x411820, Func Offset: 0x20
	// Line 210, Address: 0x411824, Func Offset: 0x24
	// Line 205, Address: 0x411828, Func Offset: 0x28
	// Line 210, Address: 0x411834, Func Offset: 0x34
	// Line 213, Address: 0x411838, Func Offset: 0x38
	// Line 241, Address: 0x41185c, Func Offset: 0x5c
	// Line 250, Address: 0x411874, Func Offset: 0x74
	// Line 257, Address: 0x411890, Func Offset: 0x90
	// Line 259, Address: 0x4118d4, Func Offset: 0xd4
	// Line 260, Address: 0x411904, Func Offset: 0x104
	// Line 259, Address: 0x411908, Func Offset: 0x108
	// Line 260, Address: 0x41190c, Func Offset: 0x10c
	// Line 261, Address: 0x411914, Func Offset: 0x114
	// Line 262, Address: 0x411920, Func Offset: 0x120
	// Line 267, Address: 0x41192c, Func Offset: 0x12c
	// Line 269, Address: 0x411964, Func Offset: 0x164
	// Line 271, Address: 0x41196c, Func Offset: 0x16c
	// Line 273, Address: 0x411974, Func Offset: 0x174
	// Line 275, Address: 0x41197c, Func Offset: 0x17c
	// Line 277, Address: 0x411984, Func Offset: 0x184
	// Line 278, Address: 0x41198c, Func Offset: 0x18c
	// Line 280, Address: 0x411994, Func Offset: 0x194
	// Line 289, Address: 0x4119a0, Func Offset: 0x1a0
	// Line 292, Address: 0x4119ac, Func Offset: 0x1ac
	// Line 316, Address: 0x4119bc, Func Offset: 0x1bc
	// Line 321, Address: 0x4119cc, Func Offset: 0x1cc
	// Line 326, Address: 0x4119dc, Func Offset: 0x1dc
	// Line 331, Address: 0x4119f0, Func Offset: 0x1f0
	// Line 243, Address: 0x4119f8, Func Offset: 0x1f8
	// Line 331, Address: 0x411a00, Func Offset: 0x200
	// Line 250, Address: 0x411a04, Func Offset: 0x204
	// Line 331, Address: 0x411a08, Func Offset: 0x208
	// Line 250, Address: 0x411a14, Func Offset: 0x214
	// Line 331, Address: 0x411a18, Func Offset: 0x218
	// Line 293, Address: 0x411a30, Func Offset: 0x230
	// Line 331, Address: 0x411a34, Func Offset: 0x234
	// Line 295, Address: 0x411a38, Func Offset: 0x238
	// Line 331, Address: 0x411a3c, Func Offset: 0x23c
	// Line 308, Address: 0x411a50, Func Offset: 0x250
	// Line 296, Address: 0x411a54, Func Offset: 0x254
	// Line 331, Address: 0x411a58, Func Offset: 0x258
	// Line 297, Address: 0x411a60, Func Offset: 0x260
	// Line 331, Address: 0x411a64, Func Offset: 0x264
	// Line 298, Address: 0x411a6c, Func Offset: 0x26c
	// Line 331, Address: 0x411a70, Func Offset: 0x270
	// Line 302, Address: 0x411a94, Func Offset: 0x294
	// Line 331, Address: 0x411a98, Func Offset: 0x298
	// Line 303, Address: 0x411aa0, Func Offset: 0x2a0
	// Line 331, Address: 0x411aa4, Func Offset: 0x2a4
	// Line 304, Address: 0x411ab0, Func Offset: 0x2b0
	// Line 331, Address: 0x411ab4, Func Offset: 0x2b4
	// Line 309, Address: 0x411ae0, Func Offset: 0x2e0
	// Line 331, Address: 0x411ae4, Func Offset: 0x2e4
	// Line 310, Address: 0x411aec, Func Offset: 0x2ec
	// Line 331, Address: 0x411af0, Func Offset: 0x2f0
	// Line 311, Address: 0x411af8, Func Offset: 0x2f8
	// Line 331, Address: 0x411afc, Func Offset: 0x2fc
	// Line 332, Address: 0x411b44, Func Offset: 0x344
	// Func End, Address: 0x411b74, Func Offset: 0x374
}

