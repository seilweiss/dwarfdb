



void iCameraPerformRenderWareHack(RwCamera* camera);
RwCamera* RwCameraBeginUpdateWrapper(RwCamera* camera);
void iCameraSetFog(uint8 enable);
void iCameraSetFogRenderStates();
void iCameraUpdateFog(long32 t);
void iCameraSetFogParams(iFogParams* fp, float32 time);
void iCameraSetNearFarClip(float32 nearPlane, float32 farPlane);
void iCamGetViewMatrix(RwCamera* camera, xMat4x3* view_matrix);
float32 iCameraGetFOV(RwCamera* cam);
void iCameraUpdatePos(RwCamera* cam, xMat4x3* pos);
void iCameraShowRaster(RwCamera* cam);
void iCameraDestroy(RwCamera* camera);
RwCamera* iCameraCreate(int32 width, int32 height, int32 mainGameCamera);

// iCameraPerformRenderWareHack__FP8RwCamera
// Start address: 0x4450d0
void iCameraPerformRenderWareHack(RwCamera* camera)
{
	RpWorldSector** newFrustumSectors;
	int32 cameraExtOffset;
	RpWorldCameraExt* cameraExt;
	// Line 1460, Address: 0x4450d0, Func Offset: 0
	// Line 1483, Address: 0x4450d4, Func Offset: 0x4
	// Line 1460, Address: 0x4450d8, Func Offset: 0x8
	// Line 1483, Address: 0x4450dc, Func Offset: 0xc
	// Line 1460, Address: 0x4450e0, Func Offset: 0x10
	// Line 1483, Address: 0x4450ec, Func Offset: 0x1c
	// Line 1484, Address: 0x4450fc, Func Offset: 0x2c
	// Line 1485, Address: 0x445104, Func Offset: 0x34
	// Line 1487, Address: 0x445108, Func Offset: 0x38
	// Line 1486, Address: 0x44510c, Func Offset: 0x3c
	// Line 1487, Address: 0x445110, Func Offset: 0x40
	// Line 1489, Address: 0x445114, Func Offset: 0x44
	// Func End, Address: 0x445128, Func Offset: 0x58
}

// RwCameraBeginUpdateWrapper__FP8RwCamera
// Start address: 0x445130
RwCamera* RwCameraBeginUpdateWrapper(RwCamera* camera)
{
	RwCamera* retval;
	// Line 751, Address: 0x445130, Func Offset: 0
	// Line 752, Address: 0x44513c, Func Offset: 0xc
	// Line 755, Address: 0x445144, Func Offset: 0x14
	// Line 758, Address: 0x4452d0, Func Offset: 0x1a0
	// Func End, Address: 0x4452e0, Func Offset: 0x1b0
}

// iCameraSetFog__Fb
// Start address: 0x4452e0
void iCameraSetFog(uint8 enable)
{
	iFogParams* pFogParams;
	// Line 666, Address: 0x4452e0, Func Offset: 0
	// Line 667, Address: 0x4452e8, Func Offset: 0x8
	// Line 668, Address: 0x4452f0, Func Offset: 0x10
	// Line 672, Address: 0x445310, Func Offset: 0x30
	// Line 673, Address: 0x445318, Func Offset: 0x38
	// Line 674, Address: 0x44532c, Func Offset: 0x4c
	// Line 675, Address: 0x445334, Func Offset: 0x54
	// Line 677, Address: 0x445344, Func Offset: 0x64
	// Func End, Address: 0x445350, Func Offset: 0x70
}

// iCameraSetFogRenderStates__Fv
// Start address: 0x445350
void iCameraSetFogRenderStates()
{
	RwCamera* pCamera;
	iFogParams* pFogParams;
	uint32 bite_me;
	// Line 623, Address: 0x445350, Func Offset: 0
	// Line 625, Address: 0x445354, Func Offset: 0x4
	// Line 623, Address: 0x445358, Func Offset: 0x8
	// Line 625, Address: 0x44536c, Func Offset: 0x1c
	// Line 626, Address: 0x445370, Func Offset: 0x20
	// Line 628, Address: 0x445378, Func Offset: 0x28
	// Line 630, Address: 0x445380, Func Offset: 0x30
	// Line 640, Address: 0x44538c, Func Offset: 0x3c
	// Line 642, Address: 0x4453a0, Func Offset: 0x50
	// Line 643, Address: 0x4453b4, Func Offset: 0x64
	// Line 644, Address: 0x4453c0, Func Offset: 0x70
	// Line 632, Address: 0x4453cc, Func Offset: 0x7c
	// Line 644, Address: 0x4453d0, Func Offset: 0x80
	// Line 634, Address: 0x4453e8, Func Offset: 0x98
	// Line 648, Address: 0x4453f0, Func Offset: 0xa0
	// Line 653, Address: 0x445404, Func Offset: 0xb4
	// Line 648, Address: 0x445408, Func Offset: 0xb8
	// Line 653, Address: 0x44540c, Func Offset: 0xbc
	// Line 648, Address: 0x445414, Func Offset: 0xc4
	// Line 653, Address: 0x445428, Func Offset: 0xd8
	// Line 654, Address: 0x445430, Func Offset: 0xe0
	// Line 655, Address: 0x445440, Func Offset: 0xf0
	// Line 656, Address: 0x445450, Func Offset: 0x100
	// Line 660, Address: 0x445460, Func Offset: 0x110
	// Line 661, Address: 0x445468, Func Offset: 0x118
	// Line 662, Address: 0x445474, Func Offset: 0x124
	// Func End, Address: 0x445490, Func Offset: 0x140
}

// iCameraUpdateFog__FP8RwCameral
// Start address: 0x445490
void iCameraUpdateFog(long32 t)
{
	iFogParams* fa;
	iFogParams* fb;
	float32 a;
	// Line 563, Address: 0x445490, Func Offset: 0
	// Line 570, Address: 0x4454b0, Func Offset: 0x20
	// Line 567, Address: 0x4454b8, Func Offset: 0x28
	// Line 570, Address: 0x4454bc, Func Offset: 0x2c
	// Line 573, Address: 0x4454c4, Func Offset: 0x34
	// Line 579, Address: 0x4454d0, Func Offset: 0x40
	// Line 580, Address: 0x4454e0, Func Offset: 0x50
	// Line 581, Address: 0x44550c, Func Offset: 0x7c
	// Line 586, Address: 0x445568, Func Offset: 0xd8
	// Line 593, Address: 0x44556c, Func Offset: 0xdc
	// Line 586, Address: 0x445570, Func Offset: 0xe0
	// Line 587, Address: 0x445578, Func Offset: 0xe8
	// Line 593, Address: 0x445588, Func Offset: 0xf8
	// Line 594, Address: 0x4455a0, Func Offset: 0x110
	// Line 595, Address: 0x4455b8, Func Offset: 0x128
	// Line 597, Address: 0x4455cc, Func Offset: 0x13c
	// Line 600, Address: 0x4455d0, Func Offset: 0x140
	// Line 597, Address: 0x4455d4, Func Offset: 0x144
	// Line 600, Address: 0x4455e0, Func Offset: 0x150
	// Line 601, Address: 0x445660, Func Offset: 0x1d0
	// Line 600, Address: 0x445668, Func Offset: 0x1d8
	// Line 601, Address: 0x44566c, Func Offset: 0x1dc
	// Line 602, Address: 0x4456ec, Func Offset: 0x25c
	// Line 601, Address: 0x4456f0, Func Offset: 0x260
	// Line 602, Address: 0x4456f4, Func Offset: 0x264
	// Line 603, Address: 0x44577c, Func Offset: 0x2ec
	// Line 604, Address: 0x445814, Func Offset: 0x384
	// Line 607, Address: 0x445818, Func Offset: 0x388
	// Line 604, Address: 0x44581c, Func Offset: 0x38c
	// Line 607, Address: 0x445828, Func Offset: 0x398
	// Line 608, Address: 0x4458a8, Func Offset: 0x418
	// Line 607, Address: 0x4458b0, Func Offset: 0x420
	// Line 608, Address: 0x4458b4, Func Offset: 0x424
	// Line 609, Address: 0x445934, Func Offset: 0x4a4
	// Line 608, Address: 0x445938, Func Offset: 0x4a8
	// Line 609, Address: 0x44593c, Func Offset: 0x4ac
	// Line 610, Address: 0x4459c4, Func Offset: 0x534
	// Line 613, Address: 0x445a4c, Func Offset: 0x5bc
	// Line 610, Address: 0x445a50, Func Offset: 0x5c0
	// Line 613, Address: 0x445a54, Func Offset: 0x5c4
	// Line 610, Address: 0x445a58, Func Offset: 0x5c8
	// Line 613, Address: 0x445a60, Func Offset: 0x5d0
	// Line 614, Address: 0x445a70, Func Offset: 0x5e0
	// Line 615, Address: 0x445a74, Func Offset: 0x5e4
	// Line 618, Address: 0x445adc, Func Offset: 0x64c
	// Func End, Address: 0x445afc, Func Offset: 0x66c
}

// iCameraSetFogParams__FP10iFogParamsf
// Start address: 0x445b00
void iCameraSetFogParams(iFogParams* fp, float32 time)
{
	// Line 528, Address: 0x445b00, Func Offset: 0
	// Line 531, Address: 0x445b14, Func Offset: 0x14
	// Line 535, Address: 0x445b28, Func Offset: 0x28
	// Line 542, Address: 0x445b4c, Func Offset: 0x4c
	// Line 543, Address: 0x445bb4, Func Offset: 0xb4
	// Line 544, Address: 0x445c24, Func Offset: 0x124
	// Line 545, Address: 0x445c30, Func Offset: 0x130
	// Line 556, Address: 0x445c50, Func Offset: 0x150
	// Line 534, Address: 0x445c64, Func Offset: 0x164
	// Line 556, Address: 0x445c6c, Func Offset: 0x16c
	// Line 540, Address: 0x445d48, Func Offset: 0x248
	// Line 556, Address: 0x445d50, Func Offset: 0x250
	// Func End, Address: 0x445d64, Func Offset: 0x264
}

// iCameraSetNearFarClip__Fff
// Start address: 0x445d70
void iCameraSetNearFarClip(float32 nearPlane, float32 farPlane)
{
	// Line 506, Address: 0x445d70, Func Offset: 0
	// Line 507, Address: 0x445d8c, Func Offset: 0x1c
	// Line 508, Address: 0x445da8, Func Offset: 0x38
	// Func End, Address: 0x445db0, Func Offset: 0x40
}

// iCamGetViewMatrix__FP8RwCameraP7xMat4x3
// Start address: 0x445db0
void iCamGetViewMatrix(RwCamera* camera, xMat4x3* view_matrix)
{
	RwMatrixTag* rw_view;
	// Line 483, Address: 0x445db0, Func Offset: 0
	// Line 486, Address: 0x445db4, Func Offset: 0x4
	// Line 483, Address: 0x445db8, Func Offset: 0x8
	// Line 484, Address: 0x445dc8, Func Offset: 0x18
	// Line 486, Address: 0x445dcc, Func Offset: 0x1c
	// Line 487, Address: 0x445dd8, Func Offset: 0x28
	// Line 488, Address: 0x445de0, Func Offset: 0x30
	// Line 489, Address: 0x445de8, Func Offset: 0x38
	// Line 490, Address: 0x445df0, Func Offset: 0x40
	// Line 491, Address: 0x445df8, Func Offset: 0x48
	// Line 492, Address: 0x445e00, Func Offset: 0x50
	// Line 493, Address: 0x445e08, Func Offset: 0x58
	// Line 494, Address: 0x445e10, Func Offset: 0x60
	// Line 495, Address: 0x445e18, Func Offset: 0x68
	// Line 496, Address: 0x445e20, Func Offset: 0x70
	// Line 497, Address: 0x445e28, Func Offset: 0x78
	// Line 498, Address: 0x445e30, Func Offset: 0x80
	// Line 499, Address: 0x445e38, Func Offset: 0x88
	// Func End, Address: 0x445e4c, Func Offset: 0x9c
}

// iCameraGetFOV__FP8RwCamera
// Start address: 0x445e50
float32 iCameraGetFOV(RwCamera* cam)
{
	// Line 426, Address: 0x445e50, Func Offset: 0
	// Line 431, Address: 0x445e58, Func Offset: 0x8
	// Line 433, Address: 0x445e60, Func Offset: 0x10
	// Line 434, Address: 0x445e64, Func Offset: 0x14
	// Line 433, Address: 0x445e68, Func Offset: 0x18
	// Line 434, Address: 0x445e78, Func Offset: 0x28
	// Func End, Address: 0x445e80, Func Offset: 0x30
}

// iCameraUpdatePos__FP8RwCameraP7xMat4x3
// Start address: 0x445e80
void iCameraUpdatePos(RwCamera* cam, xMat4x3* pos)
{
	RwFrame* f;
	RwMatrixTag* m;
	// Line 317, Address: 0x445e80, Func Offset: 0
	// Line 324, Address: 0x445e94, Func Offset: 0x14
	// Line 326, Address: 0x445e98, Func Offset: 0x18
	// Line 329, Address: 0x445e9c, Func Offset: 0x1c
	// Line 331, Address: 0x445ebc, Func Offset: 0x3c
	// Line 334, Address: 0x445ec4, Func Offset: 0x44
	// Line 338, Address: 0x445ee4, Func Offset: 0x64
	// Line 344, Address: 0x445eec, Func Offset: 0x6c
	// Line 345, Address: 0x445ef4, Func Offset: 0x74
	// Func End, Address: 0x445f08, Func Offset: 0x88
}

// iCameraShowRaster__FP8RwCamera
// Start address: 0x445f10
void iCameraShowRaster(RwCamera* cam)
{
	// Line 309, Address: 0x445f10, Func Offset: 0
	// Func End, Address: 0x445f1c, Func Offset: 0xc
}

// iCameraDestroy__FP8RwCamera
// Start address: 0x445f20
void iCameraDestroy(RwCamera* camera)
{
	RpWorld* pWorld;
	RwRaster* raster;
	RwFrame* frame;
	// Line 154, Address: 0x445f20, Func Offset: 0
	// Line 162, Address: 0x445f34, Func Offset: 0x14
	// Line 164, Address: 0x445f3c, Func Offset: 0x1c
	// Line 166, Address: 0x445f44, Func Offset: 0x24
	// Line 171, Address: 0x445f4c, Func Offset: 0x2c
	// Line 172, Address: 0x445f58, Func Offset: 0x38
	// Line 174, Address: 0x445f60, Func Offset: 0x40
	// Line 178, Address: 0x445f68, Func Offset: 0x48
	// Line 183, Address: 0x445f74, Func Offset: 0x54
	// Line 188, Address: 0x445f7c, Func Offset: 0x5c
	// Line 189, Address: 0x445f80, Func Offset: 0x60
	// Line 191, Address: 0x445f88, Func Offset: 0x68
	// Line 193, Address: 0x445f94, Func Offset: 0x74
	// Line 196, Address: 0x445fa4, Func Offset: 0x84
	// Line 197, Address: 0x445fa8, Func Offset: 0x88
	// Line 199, Address: 0x445fb0, Func Offset: 0x90
	// Line 201, Address: 0x445fb8, Func Offset: 0x98
	// Line 204, Address: 0x445fbc, Func Offset: 0x9c
	// Line 205, Address: 0x445fc0, Func Offset: 0xa0
	// Line 207, Address: 0x445fc8, Func Offset: 0xa8
	// Line 209, Address: 0x445fd0, Func Offset: 0xb0
	// Line 212, Address: 0x445fd4, Func Offset: 0xb4
	// Line 214, Address: 0x445fdc, Func Offset: 0xbc
	// Line 179, Address: 0x445fe4, Func Offset: 0xc4
	// Line 214, Address: 0x445fe8, Func Offset: 0xc8
	// Func End, Address: 0x44600c, Func Offset: 0xec
}

// iCameraCreate__Fiii
// Start address: 0x446010
RwCamera* iCameraCreate(int32 width, int32 height, int32 mainGameCamera)
{
	RwV2d vw;
	RwFrame* cameraFrame;
	RwRaster* cameraRaster;
	RwRaster* zbuffer;
	// Line 103, Address: 0x446010, Func Offset: 0
	// Line 108, Address: 0x446034, Func Offset: 0x24
	// Line 112, Address: 0x446078, Func Offset: 0x68
	// Line 114, Address: 0x446080, Func Offset: 0x70
	// Line 116, Address: 0x44608c, Func Offset: 0x7c
	// Line 121, Address: 0x4460a0, Func Offset: 0x90
	// Line 118, Address: 0x4460a8, Func Offset: 0x98
	// Line 121, Address: 0x4460ac, Func Offset: 0x9c
	// Line 123, Address: 0x4460b8, Func Offset: 0xa8
	// Line 126, Address: 0x4460bc, Func Offset: 0xac
	// Line 127, Address: 0x4460c8, Func Offset: 0xb8
	// Line 130, Address: 0x4460d4, Func Offset: 0xc4
	// Line 132, Address: 0x4460d8, Func Offset: 0xc8
	// Line 130, Address: 0x4460dc, Func Offset: 0xcc
	// Line 132, Address: 0x4460e0, Func Offset: 0xd0
	// Line 139, Address: 0x4460ec, Func Offset: 0xdc
	// Line 144, Address: 0x4460f4, Func Offset: 0xe4
	// Line 145, Address: 0x44610c, Func Offset: 0xfc
	// Func End, Address: 0x44612c, Func Offset: 0x11c
}

