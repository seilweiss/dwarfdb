



void xSkyDome_RenderSingle(xEnt* ent);
void xSkyDome_EndRenderSingle();
void xSkyDome_BeginRenderSingle();
void xSkyDome_GetSettings(xEnt* ent, int32& sortorder, int32& lockY, int32& lockXZ);
void xSkyDome_Render();
void xSkyDome_AddEntity(xEnt* ent, int32 sortorder, int32 lockY, int32 lockXZ);
void xSkyDome_Setup();
void xSkyDome_EmptyRender();

// xSkyDome_RenderSingle__FP4xEnt
// Start address: 0x457b20
void xSkyDome_RenderSingle(xEnt* ent)
{
	RwMatrixTag* cammat;
	xMat4x3& mat;
	xVec3 oldpos;
	SkyDomeInfo& info;
	// Line 239, Address: 0x457b20, Func Offset: 0
	// Line 242, Address: 0x457b24, Func Offset: 0x4
	// Line 239, Address: 0x457b28, Func Offset: 0x8
	// Line 244, Address: 0x457b38, Func Offset: 0x18
	// Line 242, Address: 0x457b3c, Func Offset: 0x1c
	// Line 252, Address: 0x457b40, Func Offset: 0x20
	// Line 244, Address: 0x457b44, Func Offset: 0x24
	// Line 252, Address: 0x457b48, Func Offset: 0x28
	// Line 242, Address: 0x457b4c, Func Offset: 0x2c
	// Line 252, Address: 0x457b50, Func Offset: 0x30
	// Line 254, Address: 0x457b5c, Func Offset: 0x3c
	// Line 248, Address: 0x457b60, Func Offset: 0x40
	// Line 242, Address: 0x457b6c, Func Offset: 0x4c
	// Line 248, Address: 0x457b70, Func Offset: 0x50
	// Line 254, Address: 0x457b78, Func Offset: 0x58
	// Line 259, Address: 0x457b80, Func Offset: 0x60
	// Line 264, Address: 0x457b8c, Func Offset: 0x6c
	// Line 272, Address: 0x457b9c, Func Offset: 0x7c
	// Line 273, Address: 0x457bb0, Func Offset: 0x90
	// Func End, Address: 0x457c04, Func Offset: 0xe4
}

// xSkyDome_EndRenderSingle__Fv
// Start address: 0x457c10
void xSkyDome_EndRenderSingle()
{
	RwCamera* cam;
	// Line 222, Address: 0x457c10, Func Offset: 0
	// Line 224, Address: 0x457c14, Func Offset: 0x4
	// Line 222, Address: 0x457c18, Func Offset: 0x8
	// Line 224, Address: 0x457c20, Func Offset: 0x10
	// Line 225, Address: 0x457c24, Func Offset: 0x14
	// Line 226, Address: 0x457c2c, Func Offset: 0x1c
	// Line 227, Address: 0x457c38, Func Offset: 0x28
	// Line 233, Address: 0x457c40, Func Offset: 0x30
	// Line 236, Address: 0x457c54, Func Offset: 0x44
	// Line 234, Address: 0x457c5c, Func Offset: 0x4c
	// Line 236, Address: 0x457c60, Func Offset: 0x50
	// Func End, Address: 0x457c7c, Func Offset: 0x6c
}

// xSkyDome_BeginRenderSingle__Fv
// Start address: 0x457c80
void xSkyDome_BeginRenderSingle()
{
	RwCamera* cam;
	// Line 203, Address: 0x457c80, Func Offset: 0
	// Line 204, Address: 0x457c84, Func Offset: 0x4
	// Line 203, Address: 0x457c88, Func Offset: 0x8
	// Line 204, Address: 0x457c90, Func Offset: 0x10
	// Line 207, Address: 0x457c94, Func Offset: 0x14
	// Line 208, Address: 0x457c98, Func Offset: 0x18
	// Line 209, Address: 0x457ca4, Func Offset: 0x24
	// Line 210, Address: 0x457cb8, Func Offset: 0x38
	// Line 216, Address: 0x457cc0, Func Offset: 0x40
	// Line 219, Address: 0x457cd4, Func Offset: 0x54
	// Line 217, Address: 0x457cdc, Func Offset: 0x5c
	// Line 219, Address: 0x457ce0, Func Offset: 0x60
	// Func End, Address: 0x457cfc, Func Offset: 0x7c
}

// xSkyDome_GetSettings__FP4xEntRiRiRi
// Start address: 0x457d00
void xSkyDome_GetSettings(xEnt* ent, int32& sortorder, int32& lockY, int32& lockXZ)
{
	SkyDomeInfo& info;
	// Line 192, Address: 0x457d00, Func Offset: 0
	// Line 194, Address: 0x457d14, Func Offset: 0x14
	// Line 195, Address: 0x457d1c, Func Offset: 0x1c
	// Line 196, Address: 0x457d24, Func Offset: 0x24
	// Line 197, Address: 0x457d28, Func Offset: 0x28
	// Func End, Address: 0x457d30, Func Offset: 0x30
}

// xSkyDome_Render__Fv
// Start address: 0x457d30
void xSkyDome_Render()
{
	RwCamera* cam;
	RwMatrixTag* cammat;
	float32 far_clip;
	RwRGBA color;
	int32 i;
	xEnt* ent;
	// Line 121, Address: 0x457d30, Func Offset: 0
	// Line 122, Address: 0x457d34, Func Offset: 0x4
	// Line 121, Address: 0x457d38, Func Offset: 0x8
	// Line 122, Address: 0x457d60, Func Offset: 0x30
	// Line 124, Address: 0x457d64, Func Offset: 0x34
	// Line 127, Address: 0x457d68, Func Offset: 0x38
	// Line 128, Address: 0x457d6c, Func Offset: 0x3c
	// Line 129, Address: 0x457d78, Func Offset: 0x48
	// Line 133, Address: 0x457d8c, Func Offset: 0x5c
	// Line 135, Address: 0x457db4, Func Offset: 0x84
	// Line 137, Address: 0x457dc4, Func Offset: 0x94
	// Line 140, Address: 0x457dd0, Func Offset: 0xa0
	// Line 137, Address: 0x457dd4, Func Offset: 0xa4
	// Line 140, Address: 0x457dd8, Func Offset: 0xa8
	// Line 141, Address: 0x457de4, Func Offset: 0xb4
	// Line 144, Address: 0x457df4, Func Offset: 0xc4
	// Line 145, Address: 0x457e0c, Func Offset: 0xdc
	// Line 150, Address: 0x457e10, Func Offset: 0xe0
	// Line 153, Address: 0x457e1c, Func Offset: 0xec
	// Line 156, Address: 0x457e30, Func Offset: 0x100
	// Line 163, Address: 0x457e54, Func Offset: 0x124
	// Line 162, Address: 0x457e58, Func Offset: 0x128
	// Line 163, Address: 0x457e64, Func Offset: 0x134
	// Line 167, Address: 0x457e6c, Func Offset: 0x13c
	// Line 168, Address: 0x457e70, Func Offset: 0x140
	// Line 170, Address: 0x457e7c, Func Offset: 0x14c
	// Line 171, Address: 0x457e80, Func Offset: 0x150
	// Line 178, Address: 0x457e90, Func Offset: 0x160
	// Line 179, Address: 0x457ea4, Func Offset: 0x174
	// Line 182, Address: 0x457ec0, Func Offset: 0x190
	// Line 183, Address: 0x457ec8, Func Offset: 0x198
	// Line 184, Address: 0x457ed4, Func Offset: 0x1a4
	// Line 185, Address: 0x457edc, Func Offset: 0x1ac
	// Func End, Address: 0x457f60, Func Offset: 0x230
}

// xSkyDome_AddEntity__FP4xEntiii
// Start address: 0x457f60
void xSkyDome_AddEntity(xEnt* ent, int32 sortorder, int32 lockY, int32 lockXZ)
{
	int32 i;
	int32 j;
	// Line 54, Address: 0x457f60, Func Offset: 0
	// Line 55, Address: 0x457f64, Func Offset: 0x4
	// Line 54, Address: 0x457f68, Func Offset: 0x8
	// Line 55, Address: 0x457f6c, Func Offset: 0xc
	// Line 54, Address: 0x457f70, Func Offset: 0x10
	// Line 55, Address: 0x457f78, Func Offset: 0x18
	// Line 69, Address: 0x457f84, Func Offset: 0x24
	// Line 70, Address: 0x457f9c, Func Offset: 0x3c
	// Line 78, Address: 0x457fa8, Func Offset: 0x48
	// Line 83, Address: 0x457fb8, Func Offset: 0x58
	// Line 84, Address: 0x457fcc, Func Offset: 0x6c
	// Line 87, Address: 0x457fdc, Func Offset: 0x7c
	// Line 88, Address: 0x457ff0, Func Offset: 0x90
	// Line 89, Address: 0x458010, Func Offset: 0xb0
	// Line 90, Address: 0x458014, Func Offset: 0xb4
	// Line 91, Address: 0x458018, Func Offset: 0xb8
	// Line 89, Address: 0x458020, Func Offset: 0xc0
	// Line 90, Address: 0x45803c, Func Offset: 0xdc
	// Line 91, Address: 0x458044, Func Offset: 0xe4
	// Line 92, Address: 0x45804c, Func Offset: 0xec
	// Line 96, Address: 0x458050, Func Offset: 0xf0
	// Line 92, Address: 0x458058, Func Offset: 0xf8
	// Line 111, Address: 0x458060, Func Offset: 0x100
	// Line 93, Address: 0x458064, Func Offset: 0x104
	// Line 92, Address: 0x458068, Func Offset: 0x108
	// Line 93, Address: 0x45806c, Func Offset: 0x10c
	// Line 111, Address: 0x458070, Func Offset: 0x110
	// Line 93, Address: 0x458074, Func Offset: 0x114
	// Line 111, Address: 0x458078, Func Offset: 0x118
	// Line 93, Address: 0x45807c, Func Offset: 0x11c
	// Line 96, Address: 0x458080, Func Offset: 0x120
	// Line 94, Address: 0x458084, Func Offset: 0x124
	// Line 96, Address: 0x458088, Func Offset: 0x128
	// Line 94, Address: 0x45808c, Func Offset: 0x12c
	// Line 111, Address: 0x458090, Func Offset: 0x130
	// Line 94, Address: 0x458094, Func Offset: 0x134
	// Line 95, Address: 0x458098, Func Offset: 0x138
	// Line 94, Address: 0x45809c, Func Offset: 0x13c
	// Line 95, Address: 0x4580a0, Func Offset: 0x140
	// Line 111, Address: 0x4580a4, Func Offset: 0x144
	// Line 95, Address: 0x4580a8, Func Offset: 0x148
	// Line 111, Address: 0x4580ac, Func Offset: 0x14c
	// Line 95, Address: 0x4580b0, Func Offset: 0x150
	// Line 111, Address: 0x4580b4, Func Offset: 0x154
	// Line 102, Address: 0x4580b8, Func Offset: 0x158
	// Line 98, Address: 0x4580bc, Func Offset: 0x15c
	// Line 102, Address: 0x4580c0, Func Offset: 0x160
	// Line 111, Address: 0x4580c4, Func Offset: 0x164
	// Line 102, Address: 0x4580c8, Func Offset: 0x168
	// Line 105, Address: 0x4580cc, Func Offset: 0x16c
	// Line 108, Address: 0x4580dc, Func Offset: 0x17c
	// Line 111, Address: 0x4580e4, Func Offset: 0x184
	// Line 112, Address: 0x4580ec, Func Offset: 0x18c
	// Line 113, Address: 0x458110, Func Offset: 0x1b0
	// Func End, Address: 0x458120, Func Offset: 0x1c0
}

// xSkyDome_Setup__Fv
// Start address: 0x458120
void xSkyDome_Setup()
{
	// Line 49, Address: 0x458120, Func Offset: 0
	// Func End, Address: 0x458128, Func Offset: 0x8
}

// xSkyDome_EmptyRender__FP4xEnt
// Start address: 0x458130
void xSkyDome_EmptyRender()
{
	// Line 42, Address: 0x458130, Func Offset: 0
	// Func End, Address: 0x458138, Func Offset: 0x8
}

