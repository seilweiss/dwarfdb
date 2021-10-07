



void xScrFxLensFlare_Render(RwCamera* cam);
int32 lfcmp(void* a, void* b);
void xScrFxLensFlare_RenderElements(RwFrame* frame, uint8 vCol, void* flr);
void xScrFxLensFlare_SceneExit();
void xScrFxLensFlare_SceneEnter();
void LensFlareSourceCB(void* obj, uint32 type, void* data);
void LensFlareElementCB(void* obj, void* data);
int32 ObjRecurse(uint32 assetID, void(*callback)(void*, uint32, void*), void* data);
void xCameraFXEnd(xMat4x3& mat, RwCamera* icam);
void xCameraFXUpdate(xMat4x3& mat, RwCamera* icam, float32 dt);
void xCameraFXShakeUpdate(cameraFX* f, float32 dt, xMat4x3* m);
cameraFX* xCameraFXShake(float32 maxTime, float32 magnitude, float32 cycleMax, float32 rotate_magnitude, float32 radius, xVec3* epicenter, xVec3* player, uint8 shakeY);
void xCameraFXShakeEnd(cameraFX* fx, float32 fadeOutTime);
cameraFX* xCameraFXShakeForever(float32 magnitude, float32 cycleMax, float32 rotate_magnitude, float32 radius, xVec3* epicenter, xVec3* player, uint8 shakeY);
void xCameraFXZoomUpdate(cameraFX* f, float32 dt, xMat4x3* m);
void xCameraFXKill();
void xCameraFXBegin(xMat4x3& mat);
void xScrFxDrawBox(float32 x1, float32 y1, float32 x2, float32 y2, uint8 red, uint8 green, uint8 blue, uint8 alpha, float32 ushift, float32 vshift);
void xScrFXGlareRender(xMat4x3& mat);
void xScrFXFullScreenGlareRender();
uint8 xScrFXGlareActive(int32 id);
void xScrFXGlareChange(int32 id, xVec3* pos, float32 life, float32 intensity);
int32 xScrFXGlareAdd(xVec3* pos, float32 life, float32 intensity, float32 size, float32 r, float32 g, float32 b, float32 a, RwRaster* raster);
void xScrFXGlareDisable(int32 id);
void xScrFxDrawSafeArea();
void xScrFxRenderLetterBox();
void xScrFxLetterbox(int32 enable);
void xScrFxLetterBoxSetAlpha(uint8 alpha);
void xScrFxLetterBoxSetSize(float32 size);
void xScrFxLetterboxReset();
void xScrFxFadeUpdate(float32 seconds);
uint8 xScrFxIsFading();
void xScrFxStopFade();
void xScrFxFade(xColor_tag* base, xColor_tag* dest, float32 seconds, int32 hold);
void xScrFxDrawScreenSizeRectangle();
void xScrFxRender();
void xScrFxUpdate(float32 dt);
void xScrFxReset();
void xScrFxInit();

// xScrFxLensFlare_Render__FP8RwCamera
// Start address: 0x462260
void xScrFxLensFlare_Render(RwCamera* cam)
{
	int32 sNumFlares'146;
	iScrFxLensFlare* flare;
	RwMatrixTag* cammat;
	xVec3* campos;
	xVec3* cam_at;
	int32 i;
	int32 i;
	xScrFxLensFlareSource* source;
	float32 intensity;
	xVec3 v1;
	xVec3 v2;
	float32 inner;
	// Line 1924, Address: 0x462260, Func Offset: 0
	// Line 1937, Address: 0x462264, Func Offset: 0x4
	// Line 1924, Address: 0x462268, Func Offset: 0x8
	// Line 1936, Address: 0x462284, Func Offset: 0x24
	// Line 1924, Address: 0x462288, Func Offset: 0x28
	// Line 1936, Address: 0x46228c, Func Offset: 0x2c
	// Line 1924, Address: 0x462290, Func Offset: 0x30
	// Line 1932, Address: 0x4622ac, Func Offset: 0x4c
	// Line 1937, Address: 0x4622b0, Func Offset: 0x50
	// Line 1932, Address: 0x4622b4, Func Offset: 0x54
	// Line 1937, Address: 0x4622b8, Func Offset: 0x58
	// Line 1932, Address: 0x4622bc, Func Offset: 0x5c
	// Line 1933, Address: 0x4622c0, Func Offset: 0x60
	// Line 1937, Address: 0x4622c4, Func Offset: 0x64
	// Line 1938, Address: 0x4622cc, Func Offset: 0x6c
	// Line 1939, Address: 0x4622d0, Func Offset: 0x70
	// Line 1938, Address: 0x4622d4, Func Offset: 0x74
	// Line 1939, Address: 0x4622d8, Func Offset: 0x78
	// Line 1938, Address: 0x4622dc, Func Offset: 0x7c
	// Line 1939, Address: 0x462308, Func Offset: 0xa8
	// Line 1949, Address: 0x462310, Func Offset: 0xb0
	// Line 1983, Address: 0x46231c, Func Offset: 0xbc
	// Line 1982, Address: 0x462320, Func Offset: 0xc0
	// Line 1983, Address: 0x462328, Func Offset: 0xc8
	// Line 1986, Address: 0x462340, Func Offset: 0xe0
	// Line 1987, Address: 0x462344, Func Offset: 0xe4
	// Line 1991, Address: 0x462358, Func Offset: 0xf8
	// Line 1992, Address: 0x462378, Func Offset: 0x118
	// Line 1995, Address: 0x462388, Func Offset: 0x128
	// Line 1996, Address: 0x462394, Func Offset: 0x134
	// Line 2003, Address: 0x4623a4, Func Offset: 0x144
	// Line 2007, Address: 0x4623b4, Func Offset: 0x154
	// Line 2008, Address: 0x4623c0, Func Offset: 0x160
	// Line 2007, Address: 0x4623cc, Func Offset: 0x16c
	// Line 2008, Address: 0x4623d8, Func Offset: 0x178
	// Line 2011, Address: 0x4623f8, Func Offset: 0x198
	// Line 2015, Address: 0x462400, Func Offset: 0x1a0
	// Line 2016, Address: 0x462404, Func Offset: 0x1a4
	// Line 2015, Address: 0x462408, Func Offset: 0x1a8
	// Line 2017, Address: 0x462410, Func Offset: 0x1b0
	// Line 2016, Address: 0x46241c, Func Offset: 0x1bc
	// Line 2015, Address: 0x462420, Func Offset: 0x1c0
	// Line 2016, Address: 0x462428, Func Offset: 0x1c8
	// Line 2017, Address: 0x462450, Func Offset: 0x1f0
	// Line 2021, Address: 0x462474, Func Offset: 0x214
	// Line 2022, Address: 0x462480, Func Offset: 0x220
	// Line 2023, Address: 0x46248c, Func Offset: 0x22c
	// Line 2033, Address: 0x462490, Func Offset: 0x230
	// Line 2023, Address: 0x462494, Func Offset: 0x234
	// Line 2033, Address: 0x4624a8, Func Offset: 0x248
	// Line 2023, Address: 0x4624ac, Func Offset: 0x24c
	// Line 2033, Address: 0x4624b4, Func Offset: 0x254
	// Line 2023, Address: 0x4624c4, Func Offset: 0x264
	// Line 2033, Address: 0x4624c8, Func Offset: 0x268
	// Line 2023, Address: 0x4624d0, Func Offset: 0x270
	// Line 2033, Address: 0x4624d4, Func Offset: 0x274
	// Line 2023, Address: 0x4624d8, Func Offset: 0x278
	// Line 2033, Address: 0x4624dc, Func Offset: 0x27c
	// Line 2035, Address: 0x4624e4, Func Offset: 0x284
	// Line 2036, Address: 0x4624f0, Func Offset: 0x290
	// Line 2037, Address: 0x462500, Func Offset: 0x2a0
	// Line 2039, Address: 0x46250c, Func Offset: 0x2ac
	// Line 2040, Address: 0x462524, Func Offset: 0x2c4
	// Line 2049, Address: 0x462530, Func Offset: 0x2d0
	// Line 2058, Address: 0x462590, Func Offset: 0x330
	// Line 2056, Address: 0x462594, Func Offset: 0x334
	// Line 2058, Address: 0x462598, Func Offset: 0x338
	// Line 2056, Address: 0x4625a4, Func Offset: 0x344
	// Line 2058, Address: 0x4625b0, Func Offset: 0x350
	// Line 2060, Address: 0x4625b8, Func Offset: 0x358
	// Line 2061, Address: 0x4625bc, Func Offset: 0x35c
	// Line 2060, Address: 0x4625c4, Func Offset: 0x364
	// Line 2061, Address: 0x4625c8, Func Offset: 0x368
	// Line 2066, Address: 0x4625d4, Func Offset: 0x374
	// Line 2067, Address: 0x4626a8, Func Offset: 0x448
	// Line 1969, Address: 0x4626b8, Func Offset: 0x458
	// Line 2067, Address: 0x4626bc, Func Offset: 0x45c
	// Func End, Address: 0x462708, Func Offset: 0x4a8
}

// lfcmp__FPCvPCv
// Start address: 0x462710
int32 lfcmp(void* a, void* b)
{
	// Line 1919, Address: 0x462710, Func Offset: 0
	// Line 1920, Address: 0x462728, Func Offset: 0x18
	// Func End, Address: 0x462730, Func Offset: 0x20
}

// xScrFxLensFlare_RenderElements__FP8RwRasterP7RwFrameUcPv
// Start address: 0x462730
void xScrFxLensFlare_RenderElements(RwFrame* frame, uint8 vCol, void* flr)
{
	RxObjSpace3DVertex verts[4];
	uint16 indices[4];
	RxObjSpace3DVertex qverts[9];
	uint16 qindices[10];
	RwCamera* camera;
	RwV2d* vw;
	RwMatrixTag invMtx;
	RwMatrixTag transform;
	RwMatrixTag tmp;
	RwMatrixTag* matrix;
	RwV3d v;
	float32 length;
	RwV3d position;
	xScrFxLensFlareElement* ep;
	iScrFxLensFlare* flare;
	xScrFxLensFlareSource* source;
	int32 i;
	uint8 r;
	uint8 g;
	uint8 b;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwV3d flareSize;
	float32 uadj;
	float32 vadj;
	uint8 r;
	uint8 g;
	uint8 b;
	int32 j;
	RwRGBA* _col;
	RwV3d flareSize;
	// Line 1676, Address: 0x462730, Func Offset: 0
	// Line 1680, Address: 0x462734, Func Offset: 0x4
	// Line 1676, Address: 0x462738, Func Offset: 0x8
	// Line 1680, Address: 0x462770, Func Offset: 0x40
	// Line 1678, Address: 0x462774, Func Offset: 0x44
	// Line 1680, Address: 0x462778, Func Offset: 0x48
	// Line 1678, Address: 0x46277c, Func Offset: 0x4c
	// Line 1680, Address: 0x462780, Func Offset: 0x50
	// Line 1678, Address: 0x462784, Func Offset: 0x54
	// Line 1680, Address: 0x46279c, Func Offset: 0x6c
	// Line 1681, Address: 0x4627bc, Func Offset: 0x8c
	// Line 1684, Address: 0x4627c4, Func Offset: 0x94
	// Line 1690, Address: 0x4627d0, Func Offset: 0xa0
	// Line 1718, Address: 0x4627dc, Func Offset: 0xac
	// Line 1719, Address: 0x4627e8, Func Offset: 0xb8
	// Line 1720, Address: 0x462800, Func Offset: 0xd0
	// Line 1723, Address: 0x462804, Func Offset: 0xd4
	// Line 1720, Address: 0x462808, Func Offset: 0xd8
	// Line 1723, Address: 0x46280c, Func Offset: 0xdc
	// Line 1725, Address: 0x462818, Func Offset: 0xe8
	// Line 1735, Address: 0x462824, Func Offset: 0xf4
	// Line 1737, Address: 0x462834, Func Offset: 0x104
	// Line 1728, Address: 0x46283c, Func Offset: 0x10c
	// Line 1735, Address: 0x462844, Func Offset: 0x114
	// Line 1737, Address: 0x462848, Func Offset: 0x118
	// Line 1743, Address: 0x462850, Func Offset: 0x120
	// Line 1749, Address: 0x462864, Func Offset: 0x134
	// Line 1762, Address: 0x462868, Func Offset: 0x138
	// Line 1749, Address: 0x46286c, Func Offset: 0x13c
	// Line 1762, Address: 0x462874, Func Offset: 0x144
	// Line 1779, Address: 0x462878, Func Offset: 0x148
	// Line 1762, Address: 0x46287c, Func Offset: 0x14c
	// Line 1779, Address: 0x462880, Func Offset: 0x150
	// Line 1749, Address: 0x462884, Func Offset: 0x154
	// Line 1750, Address: 0x462894, Func Offset: 0x164
	// Line 1751, Address: 0x4628b0, Func Offset: 0x180
	// Line 1752, Address: 0x4628c8, Func Offset: 0x198
	// Line 1754, Address: 0x4628dc, Func Offset: 0x1ac
	// Line 1755, Address: 0x4628f8, Func Offset: 0x1c8
	// Line 1756, Address: 0x46290c, Func Offset: 0x1dc
	// Line 1757, Address: 0x462924, Func Offset: 0x1f4
	// Line 1758, Address: 0x462938, Func Offset: 0x208
	// Line 1759, Address: 0x462944, Func Offset: 0x214
	// Line 1760, Address: 0x462954, Func Offset: 0x224
	// Line 1761, Address: 0x46296c, Func Offset: 0x23c
	// Line 1762, Address: 0x46297c, Func Offset: 0x24c
	// Line 1779, Address: 0x462990, Func Offset: 0x260
	// Line 1782, Address: 0x46299c, Func Offset: 0x26c
	// Line 1783, Address: 0x4629b0, Func Offset: 0x280
	// Line 1785, Address: 0x4629c4, Func Offset: 0x294
	// Line 1796, Address: 0x4629d8, Func Offset: 0x2a8
	// Line 1798, Address: 0x4629dc, Func Offset: 0x2ac
	// Line 1800, Address: 0x462a54, Func Offset: 0x324
	// Line 1798, Address: 0x462a58, Func Offset: 0x328
	// Line 1800, Address: 0x462a5c, Func Offset: 0x32c
	// Line 1801, Address: 0x462a84, Func Offset: 0x354
	// Line 1802, Address: 0x462a90, Func Offset: 0x360
	// Line 1806, Address: 0x462a9c, Func Offset: 0x36c
	// Line 1841, Address: 0x462aa4, Func Offset: 0x374
	// Line 1843, Address: 0x462ab4, Func Offset: 0x384
	// Line 1869, Address: 0x462abc, Func Offset: 0x38c
	// Line 1846, Address: 0x462ac0, Func Offset: 0x390
	// Line 1869, Address: 0x462ac4, Func Offset: 0x394
	// Line 1841, Address: 0x462ac8, Func Offset: 0x398
	// Line 1843, Address: 0x462acc, Func Offset: 0x39c
	// Line 1844, Address: 0x462ad0, Func Offset: 0x3a0
	// Line 1843, Address: 0x462ad4, Func Offset: 0x3a4
	// Line 1846, Address: 0x462ad8, Func Offset: 0x3a8
	// Line 1843, Address: 0x462adc, Func Offset: 0x3ac
	// Line 1844, Address: 0x462ae0, Func Offset: 0x3b0
	// Line 1846, Address: 0x462ae4, Func Offset: 0x3b4
	// Line 1844, Address: 0x462aec, Func Offset: 0x3bc
	// Line 1847, Address: 0x462af0, Func Offset: 0x3c0
	// Line 1848, Address: 0x462b00, Func Offset: 0x3d0
	// Line 1849, Address: 0x462b10, Func Offset: 0x3e0
	// Line 1850, Address: 0x462b20, Func Offset: 0x3f0
	// Line 1851, Address: 0x462b30, Func Offset: 0x400
	// Line 1852, Address: 0x462b40, Func Offset: 0x410
	// Line 1853, Address: 0x462b50, Func Offset: 0x420
	// Line 1854, Address: 0x462b60, Func Offset: 0x430
	// Line 1855, Address: 0x462b70, Func Offset: 0x440
	// Line 1856, Address: 0x462b80, Func Offset: 0x450
	// Line 1857, Address: 0x462b90, Func Offset: 0x460
	// Line 1858, Address: 0x462ba0, Func Offset: 0x470
	// Line 1859, Address: 0x462bb0, Func Offset: 0x480
	// Line 1860, Address: 0x462bc0, Func Offset: 0x490
	// Line 1861, Address: 0x462bd0, Func Offset: 0x4a0
	// Line 1862, Address: 0x462be0, Func Offset: 0x4b0
	// Line 1863, Address: 0x462bf0, Func Offset: 0x4c0
	// Line 1865, Address: 0x462c04, Func Offset: 0x4d4
	// Line 1866, Address: 0x462c08, Func Offset: 0x4d8
	// Line 1865, Address: 0x462c0c, Func Offset: 0x4dc
	// Line 1866, Address: 0x462c10, Func Offset: 0x4e0
	// Line 1867, Address: 0x462c18, Func Offset: 0x4e8
	// Line 1866, Address: 0x462c1c, Func Offset: 0x4ec
	// Line 1867, Address: 0x462c20, Func Offset: 0x4f0
	// Line 1866, Address: 0x462c24, Func Offset: 0x4f4
	// Line 1867, Address: 0x462c28, Func Offset: 0x4f8
	// Line 1865, Address: 0x462c2c, Func Offset: 0x4fc
	// Line 1870, Address: 0x462c34, Func Offset: 0x504
	// Line 1867, Address: 0x462c38, Func Offset: 0x508
	// Line 1870, Address: 0x462c40, Func Offset: 0x510
	// Line 1873, Address: 0x462c80, Func Offset: 0x550
	// Line 1878, Address: 0x462c8c, Func Offset: 0x55c
	// Line 1873, Address: 0x462c90, Func Offset: 0x560
	// Line 1879, Address: 0x462c94, Func Offset: 0x564
	// Line 1873, Address: 0x462c98, Func Offset: 0x568
	// Line 1879, Address: 0x462c9c, Func Offset: 0x56c
	// Line 1873, Address: 0x462ca4, Func Offset: 0x574
	// Line 1876, Address: 0x462cd4, Func Offset: 0x5a4
	// Line 1878, Address: 0x462cd8, Func Offset: 0x5a8
	// Line 1876, Address: 0x462cdc, Func Offset: 0x5ac
	// Line 1877, Address: 0x462ce0, Func Offset: 0x5b0
	// Line 1878, Address: 0x462ce4, Func Offset: 0x5b4
	// Line 1877, Address: 0x462ce8, Func Offset: 0x5b8
	// Line 1879, Address: 0x462cec, Func Offset: 0x5bc
	// Line 1880, Address: 0x462cf4, Func Offset: 0x5c4
	// Line 1881, Address: 0x462d04, Func Offset: 0x5d4
	// Line 1883, Address: 0x462d14, Func Offset: 0x5e4
	// Line 1885, Address: 0x462d28, Func Offset: 0x5f8
	// Line 1886, Address: 0x462d38, Func Offset: 0x608
	// Line 1745, Address: 0x462d58, Func Offset: 0x628
	// Line 1886, Address: 0x462d5c, Func Offset: 0x62c
	// Line 1745, Address: 0x462d64, Func Offset: 0x634
	// Line 1886, Address: 0x462d68, Func Offset: 0x638
	// Line 1745, Address: 0x462d70, Func Offset: 0x640
	// Line 1886, Address: 0x462d7c, Func Offset: 0x64c
	// Line 1821, Address: 0x462d84, Func Offset: 0x654
	// Line 1831, Address: 0x462d88, Func Offset: 0x658
	// Line 1886, Address: 0x462d8c, Func Offset: 0x65c
	// Line 1832, Address: 0x462da0, Func Offset: 0x670
	// Line 1886, Address: 0x462da4, Func Offset: 0x674
	// Line 1817, Address: 0x462e00, Func Offset: 0x6d0
	// Line 1886, Address: 0x462e04, Func Offset: 0x6d4
	// Line 1817, Address: 0x462e08, Func Offset: 0x6d8
	// Line 1886, Address: 0x462e0c, Func Offset: 0x6dc
	// Line 1818, Address: 0x462e14, Func Offset: 0x6e4
	// Line 1886, Address: 0x462e18, Func Offset: 0x6e8
	// Line 1817, Address: 0x462e1c, Func Offset: 0x6ec
	// Line 1886, Address: 0x462e20, Func Offset: 0x6f0
	// Line 1818, Address: 0x462e24, Func Offset: 0x6f4
	// Line 1886, Address: 0x462e28, Func Offset: 0x6f8
	// Line 1818, Address: 0x462e2c, Func Offset: 0x6fc
	// Line 1886, Address: 0x462e30, Func Offset: 0x700
	// Line 1819, Address: 0x462e34, Func Offset: 0x704
	// Line 1818, Address: 0x462e38, Func Offset: 0x708
	// Line 1819, Address: 0x462e3c, Func Offset: 0x70c
	// Line 1886, Address: 0x462e40, Func Offset: 0x710
	// Line 1819, Address: 0x462e44, Func Offset: 0x714
	// Line 1886, Address: 0x462e48, Func Offset: 0x718
	// Line 1819, Address: 0x462e54, Func Offset: 0x724
	// Line 1886, Address: 0x462e58, Func Offset: 0x728
	// Line 1826, Address: 0x462e7c, Func Offset: 0x74c
	// Line 1886, Address: 0x462e84, Func Offset: 0x754
	// Line 1826, Address: 0x462e8c, Func Offset: 0x75c
	// Line 1886, Address: 0x462e94, Func Offset: 0x764
	// Line 1826, Address: 0x462ea0, Func Offset: 0x770
	// Line 1886, Address: 0x462ea8, Func Offset: 0x778
	// Line 1836, Address: 0x462ef0, Func Offset: 0x7c0
	// Line 1886, Address: 0x462ef4, Func Offset: 0x7c4
	// Line 1838, Address: 0x462f00, Func Offset: 0x7d0
	// Line 1886, Address: 0x462f04, Func Offset: 0x7d4
	// Line 1888, Address: 0x462f18, Func Offset: 0x7e8
	// Line 1890, Address: 0x462f38, Func Offset: 0x808
	// Line 1891, Address: 0x462f4c, Func Offset: 0x81c
	// Line 1892, Address: 0x462f60, Func Offset: 0x830
	// Func End, Address: 0x462f94, Func Offset: 0x864
}

// xScrFxLensFlare_SceneExit__Fv
// Start address: 0x462fa0
void xScrFxLensFlare_SceneExit()
{
	// Line 1575, Address: 0x462fa0, Func Offset: 0
	// Line 1576, Address: 0x462fb0, Func Offset: 0x10
	// Line 1578, Address: 0x462fb8, Func Offset: 0x18
	// Line 1579, Address: 0x462fc8, Func Offset: 0x28
	// Line 1581, Address: 0x462fcc, Func Offset: 0x2c
	// Func End, Address: 0x462fdc, Func Offset: 0x3c
}

// xScrFxLensFlare_SceneEnter__Fv
// Start address: 0x462fe0
void xScrFxLensFlare_SceneEnter()
{
	int32 sNumFlares'122;
	int32 numDyns;
	int32 i;
	xDynAsset* dyn;
	int32 numSources;
	int32 i;
	xDynAsset* dyn;
	int32 i;
	xDynAsset* dyn;
	// Line 1520, Address: 0x462fe0, Func Offset: 0
	// Line 1521, Address: 0x462fe4, Func Offset: 0x4
	// Line 1520, Address: 0x462fe8, Func Offset: 0x8
	// Line 1521, Address: 0x462fec, Func Offset: 0xc
	// Line 1520, Address: 0x462ff0, Func Offset: 0x10
	// Line 1521, Address: 0x462ff8, Func Offset: 0x18
	// Line 1528, Address: 0x463004, Func Offset: 0x24
	// Line 1531, Address: 0x463010, Func Offset: 0x30
	// Line 1532, Address: 0x46301c, Func Offset: 0x3c
	// Line 1544, Address: 0x46302c, Func Offset: 0x4c
	// Line 1543, Address: 0x463030, Func Offset: 0x50
	// Line 1544, Address: 0x463034, Func Offset: 0x54
	// Line 1532, Address: 0x463038, Func Offset: 0x58
	// Line 1539, Address: 0x46303c, Func Offset: 0x5c
	// Line 1540, Address: 0x46304c, Func Offset: 0x6c
	// Line 1544, Address: 0x463050, Func Offset: 0x70
	// Line 1557, Address: 0x463058, Func Offset: 0x78
	// Line 1571, Address: 0x463060, Func Offset: 0x80
	// Line 1572, Address: 0x463138, Func Offset: 0x158
	// Line 1533, Address: 0x463140, Func Offset: 0x160
	// Line 1572, Address: 0x46314c, Func Offset: 0x16c
	// Line 1534, Address: 0x463158, Func Offset: 0x178
	// Line 1572, Address: 0x463160, Func Offset: 0x180
	// Line 1535, Address: 0x463180, Func Offset: 0x1a0
	// Line 1545, Address: 0x463190, Func Offset: 0x1b0
	// Line 1572, Address: 0x46319c, Func Offset: 0x1bc
	// Line 1546, Address: 0x4631a8, Func Offset: 0x1c8
	// Line 1572, Address: 0x4631b0, Func Offset: 0x1d0
	// Line 1548, Address: 0x4631bc, Func Offset: 0x1dc
	// Line 1572, Address: 0x4631c0, Func Offset: 0x1e0
	// Line 1551, Address: 0x4631d0, Func Offset: 0x1f0
	// Line 1572, Address: 0x4631d8, Func Offset: 0x1f8
	// Line 1553, Address: 0x4631dc, Func Offset: 0x1fc
	// Line 1572, Address: 0x4631e0, Func Offset: 0x200
	// Line 1555, Address: 0x4631ec, Func Offset: 0x20c
	// Line 1572, Address: 0x4631f0, Func Offset: 0x210
	// Line 1559, Address: 0x46320c, Func Offset: 0x22c
	// Line 1572, Address: 0x463210, Func Offset: 0x230
	// Line 1563, Address: 0x463228, Func Offset: 0x248
	// Line 1572, Address: 0x463234, Func Offset: 0x254
	// Line 1563, Address: 0x463240, Func Offset: 0x260
	// Line 1564, Address: 0x463244, Func Offset: 0x264
	// Line 1572, Address: 0x46324c, Func Offset: 0x26c
	// Line 1564, Address: 0x463258, Func Offset: 0x278
	// Line 1572, Address: 0x46325c, Func Offset: 0x27c
	// Line 1567, Address: 0x463274, Func Offset: 0x294
	// Line 1572, Address: 0x463278, Func Offset: 0x298
	// Func End, Address: 0x4632a4, Func Offset: 0x2c4
}

// LensFlareSourceCB__FPvUiPv
// Start address: 0x4632b0
void LensFlareSourceCB(void* obj, uint32 type, void* data)
{
	xScrFxLensFlareSource* source;
	uint32 elementID;
	int32 numElements;
	uint32 texID;
	int32 i;
	xScrFxLensFlareElement* element;
	int32 i;
	xScrFxLensFlareElement* element;
	RwTexture* tex;
	RwRaster* raster;
	int32 width;
	int32 height;
	RwRaster* newRaster;
	RwImage* image;
	int32 format;
	// Line 1400, Address: 0x4632b0, Func Offset: 0
	// Line 1402, Address: 0x4632e4, Func Offset: 0x34
	// Line 1403, Address: 0x4632e8, Func Offset: 0x38
	// Line 1402, Address: 0x4632ec, Func Offset: 0x3c
	// Line 1403, Address: 0x4632f0, Func Offset: 0x40
	// Line 1402, Address: 0x4632f4, Func Offset: 0x44
	// Line 1403, Address: 0x4632fc, Func Offset: 0x4c
	// Line 1407, Address: 0x463304, Func Offset: 0x54
	// Line 1409, Address: 0x463338, Func Offset: 0x88
	// Line 1410, Address: 0x46333c, Func Offset: 0x8c
	// Line 1412, Address: 0x463348, Func Offset: 0x98
	// Line 1415, Address: 0x46334c, Func Offset: 0x9c
	// Line 1418, Address: 0x463354, Func Offset: 0xa4
	// Line 1420, Address: 0x46335c, Func Offset: 0xac
	// Line 1421, Address: 0x46336c, Func Offset: 0xbc
	// Line 1428, Address: 0x46337c, Func Offset: 0xcc
	// Line 1431, Address: 0x46338c, Func Offset: 0xdc
	// Line 1516, Address: 0x463398, Func Offset: 0xe8
	// Line 1425, Address: 0x4633a0, Func Offset: 0xf0
	// Line 1516, Address: 0x4633a8, Func Offset: 0xf8
	// Line 1435, Address: 0x4633ac, Func Offset: 0xfc
	// Line 1516, Address: 0x4633b4, Func Offset: 0x104
	// Line 1438, Address: 0x4633c0, Func Offset: 0x110
	// Line 1516, Address: 0x4633c4, Func Offset: 0x114
	// Line 1441, Address: 0x4633d4, Func Offset: 0x124
	// Line 1516, Address: 0x4633d8, Func Offset: 0x128
	// Line 1441, Address: 0x4633dc, Func Offset: 0x12c
	// Line 1516, Address: 0x4633e0, Func Offset: 0x130
	// Line 1446, Address: 0x4633ec, Func Offset: 0x13c
	// Line 1516, Address: 0x4633f0, Func Offset: 0x140
	// Line 1454, Address: 0x463490, Func Offset: 0x1e0
	// Line 1516, Address: 0x463498, Func Offset: 0x1e8
	// Line 1469, Address: 0x4634a4, Func Offset: 0x1f4
	// Line 1516, Address: 0x4634a8, Func Offset: 0x1f8
	// Line 1480, Address: 0x4634bc, Func Offset: 0x20c
	// Line 1516, Address: 0x4634c0, Func Offset: 0x210
	// Line 1480, Address: 0x4634c8, Func Offset: 0x218
	// Line 1516, Address: 0x4634cc, Func Offset: 0x21c
	// Line 1480, Address: 0x4634d4, Func Offset: 0x224
	// Line 1516, Address: 0x4634d8, Func Offset: 0x228
	// Line 1491, Address: 0x4634e0, Func Offset: 0x230
	// Line 1516, Address: 0x4634e8, Func Offset: 0x238
	// Line 1491, Address: 0x4634f0, Func Offset: 0x240
	// Line 1516, Address: 0x4634f4, Func Offset: 0x244
	// Line 1493, Address: 0x4634fc, Func Offset: 0x24c
	// Line 1516, Address: 0x463500, Func Offset: 0x250
	// Line 1502, Address: 0x46350c, Func Offset: 0x25c
	// Line 1516, Address: 0x463510, Func Offset: 0x260
	// Line 1502, Address: 0x463514, Func Offset: 0x264
	// Line 1495, Address: 0x463520, Func Offset: 0x270
	// Line 1497, Address: 0x463524, Func Offset: 0x274
	// Line 1516, Address: 0x463528, Func Offset: 0x278
	// Line 1502, Address: 0x46353c, Func Offset: 0x28c
	// Line 1516, Address: 0x463540, Func Offset: 0x290
	// Line 1506, Address: 0x463548, Func Offset: 0x298
	// Line 1516, Address: 0x46354c, Func Offset: 0x29c
	// Line 1507, Address: 0x463554, Func Offset: 0x2a4
	// Line 1516, Address: 0x463558, Func Offset: 0x2a8
	// Func End, Address: 0x4635a4, Func Offset: 0x2f4
}

// LensFlareElementCB__FPvUiPv
// Start address: 0x4635b0
void LensFlareElementCB(void* obj, void* data)
{
	xScrFxLensFlareSourceAsset* asset;
	// Line 1393, Address: 0x4635b0, Func Offset: 0
	// Line 1395, Address: 0x4635b4, Func Offset: 0x4
	// Line 1396, Address: 0x4635c8, Func Offset: 0x18
	// Line 1397, Address: 0x4635d0, Func Offset: 0x20
	// Func End, Address: 0x4635d8, Func Offset: 0x28
}

// ObjRecurse__FUiPFPvUiPv_vPv
// Start address: 0x4635e0
int32 ObjRecurse(uint32 assetID, void(*callback)(void*, uint32, void*), void* data)
{
	int32 count;
	xBase* base;
	xGroup* group;
	uint32 numItems;
	uint32 i;
	uint32 memberID;
	uint32 size;
	void* obj;
	xDynAsset* da;
	// Line 1329, Address: 0x4635e0, Func Offset: 0
	// Line 1330, Address: 0x463608, Func Offset: 0x28
	// Line 1331, Address: 0x463610, Func Offset: 0x30
	// Line 1334, Address: 0x463618, Func Offset: 0x38
	// Line 1335, Address: 0x463620, Func Offset: 0x40
	// Line 1336, Address: 0x463628, Func Offset: 0x48
	// Line 1345, Address: 0x463638, Func Offset: 0x58
	// Line 1346, Address: 0x463648, Func Offset: 0x68
	// Line 1347, Address: 0x463650, Func Offset: 0x70
	// Line 1349, Address: 0x46365c, Func Offset: 0x7c
	// Line 1386, Address: 0x463660, Func Offset: 0x80
	// Line 1339, Address: 0x463670, Func Offset: 0x90
	// Line 1386, Address: 0x463674, Func Offset: 0x94
	// Line 1341, Address: 0x463680, Func Offset: 0xa0
	// Line 1386, Address: 0x463684, Func Offset: 0xa4
	// Line 1342, Address: 0x46368c, Func Offset: 0xac
	// Line 1386, Address: 0x463694, Func Offset: 0xb4
	// Line 1344, Address: 0x4636b0, Func Offset: 0xd0
	// Line 1386, Address: 0x4636b8, Func Offset: 0xd8
	// Line 1355, Address: 0x4636c0, Func Offset: 0xe0
	// Line 1386, Address: 0x4636c4, Func Offset: 0xe4
	// Line 1359, Address: 0x4636d0, Func Offset: 0xf0
	// Line 1386, Address: 0x4636d4, Func Offset: 0xf4
	// Line 1361, Address: 0x4636e4, Func Offset: 0x104
	// Line 1386, Address: 0x4636e8, Func Offset: 0x108
	// Line 1366, Address: 0x463714, Func Offset: 0x134
	// Line 1386, Address: 0x463720, Func Offset: 0x140
	// Line 1366, Address: 0x463728, Func Offset: 0x148
	// Line 1386, Address: 0x463730, Func Offset: 0x150
	// Line 1366, Address: 0x463740, Func Offset: 0x160
	// Line 1386, Address: 0x463744, Func Offset: 0x164
	// Line 1368, Address: 0x463764, Func Offset: 0x184
	// Line 1386, Address: 0x463768, Func Offset: 0x188
	// Line 1371, Address: 0x463770, Func Offset: 0x190
	// Line 1386, Address: 0x463778, Func Offset: 0x198
	// Line 1372, Address: 0x463794, Func Offset: 0x1b4
	// Line 1386, Address: 0x4637a0, Func Offset: 0x1c0
	// Line 1372, Address: 0x4637a8, Func Offset: 0x1c8
	// Line 1386, Address: 0x4637b0, Func Offset: 0x1d0
	// Line 1372, Address: 0x4637c0, Func Offset: 0x1e0
	// Line 1386, Address: 0x4637c4, Func Offset: 0x1e4
	// Line 1374, Address: 0x4637e0, Func Offset: 0x200
	// Line 1386, Address: 0x4637e4, Func Offset: 0x204
	// Line 1377, Address: 0x4637ec, Func Offset: 0x20c
	// Line 1386, Address: 0x4637f4, Func Offset: 0x214
	// Line 1377, Address: 0x463804, Func Offset: 0x224
	// Line 1386, Address: 0x463810, Func Offset: 0x230
	// Line 1377, Address: 0x463818, Func Offset: 0x238
	// Line 1386, Address: 0x463820, Func Offset: 0x240
	// Line 1377, Address: 0x463830, Func Offset: 0x250
	// Line 1386, Address: 0x463834, Func Offset: 0x254
	// Line 1379, Address: 0x463850, Func Offset: 0x270
	// Line 1386, Address: 0x463854, Func Offset: 0x274
	// Line 1387, Address: 0x463864, Func Offset: 0x284
	// Func End, Address: 0x463888, Func Offset: 0x2a8
}

// xCameraFXEnd__FR7xMat4x3P8RwCamera
// Start address: 0x463890
void xCameraFXEnd(xMat4x3& mat, RwCamera* icam)
{
	// Line 1257, Address: 0x463890, Func Offset: 0
	// Line 1258, Address: 0x4638b8, Func Offset: 0x28
	// Func End, Address: 0x4638c4, Func Offset: 0x34
}

// xCameraFXUpdate__FR7xMat4x3P8RwCameraf
// Start address: 0x4638d0
void xCameraFXUpdate(xMat4x3& mat, RwCamera* icam, float32 dt)
{
	int32 i;
	// Line 1201, Address: 0x4638d0, Func Offset: 0
	// Line 1209, Address: 0x4638f4, Func Offset: 0x24
	// Line 1216, Address: 0x463904, Func Offset: 0x34
	// Line 1214, Address: 0x463908, Func Offset: 0x38
	// Line 1216, Address: 0x46390c, Func Offset: 0x3c
	// Line 1219, Address: 0x463914, Func Offset: 0x44
	// Line 1244, Address: 0x463924, Func Offset: 0x54
	// Line 1247, Address: 0x463938, Func Offset: 0x68
	// Line 1248, Address: 0x463944, Func Offset: 0x74
	// Line 1221, Address: 0x463950, Func Offset: 0x80
	// Line 1224, Address: 0x463954, Func Offset: 0x84
	// Line 1223, Address: 0x46395c, Func Offset: 0x8c
	// Line 1248, Address: 0x463960, Func Offset: 0x90
	// Line 1224, Address: 0x463968, Func Offset: 0x98
	// Line 1248, Address: 0x46396c, Func Offset: 0x9c
	// Line 1224, Address: 0x463978, Func Offset: 0xa8
	// Line 1248, Address: 0x46397c, Func Offset: 0xac
	// Line 1224, Address: 0x463984, Func Offset: 0xb4
	// Line 1248, Address: 0x463988, Func Offset: 0xb8
	// Line 1234, Address: 0x4639bc, Func Offset: 0xec
	// Line 1224, Address: 0x4639c4, Func Offset: 0xf4
	// Line 1248, Address: 0x4639c8, Func Offset: 0xf8
	// Line 1224, Address: 0x4639cc, Func Offset: 0xfc
	// Line 1248, Address: 0x4639d0, Func Offset: 0x100
	// Line 1239, Address: 0x463a04, Func Offset: 0x134
	// Line 1248, Address: 0x463a0c, Func Offset: 0x13c
	// Func End, Address: 0x463a40, Func Offset: 0x170
}

// xCameraFXShakeUpdate__FP8cameraFXfPC7xMat4x3P7xMat4x3
// Start address: 0x463a40
void xCameraFXShakeUpdate(cameraFX* f, float32 dt, xMat4x3* m)
{
	float32 x;
	float32 y;
	float32 scale;
	float32 noise;
	float32 s;
	xVec3 e;
	// Line 1141, Address: 0x463a40, Func Offset: 0
	// Line 1142, Address: 0x463a60, Func Offset: 0x20
	// Line 1144, Address: 0x463a6c, Func Offset: 0x2c
	// Line 1147, Address: 0x463a7c, Func Offset: 0x3c
	// Line 1148, Address: 0x463a88, Func Offset: 0x48
	// Line 1149, Address: 0x463a94, Func Offset: 0x54
	// Line 1150, Address: 0x463aa4, Func Offset: 0x64
	// Line 1153, Address: 0x463ab8, Func Offset: 0x78
	// Line 1154, Address: 0x463ac4, Func Offset: 0x84
	// Line 1155, Address: 0x463ae0, Func Offset: 0xa0
	// Line 1157, Address: 0x463af0, Func Offset: 0xb0
	// Line 1163, Address: 0x463b54, Func Offset: 0x114
	// Line 1167, Address: 0x463b78, Func Offset: 0x138
	// Line 1170, Address: 0x463b80, Func Offset: 0x140
	// Line 1172, Address: 0x463ba4, Func Offset: 0x164
	// Line 1173, Address: 0x463bb8, Func Offset: 0x178
	// Line 1172, Address: 0x463bbc, Func Offset: 0x17c
	// Line 1173, Address: 0x463bc0, Func Offset: 0x180
	// Line 1180, Address: 0x463bc8, Func Offset: 0x188
	// Line 1181, Address: 0x463be4, Func Offset: 0x1a4
	// Line 1168, Address: 0x463c0c, Func Offset: 0x1cc
	// Line 1181, Address: 0x463c10, Func Offset: 0x1d0
	// Line 1168, Address: 0x463c18, Func Offset: 0x1d8
	// Line 1175, Address: 0x463c24, Func Offset: 0x1e4
	// Line 1186, Address: 0x463c28, Func Offset: 0x1e8
	// Line 1187, Address: 0x463c7c, Func Offset: 0x23c
	// Line 1188, Address: 0x463c84, Func Offset: 0x244
	// Line 1187, Address: 0x463c88, Func Offset: 0x248
	// Line 1188, Address: 0x463c8c, Func Offset: 0x24c
	// Line 1190, Address: 0x463cf4, Func Offset: 0x2b4
	// Line 1188, Address: 0x463cf8, Func Offset: 0x2b8
	// Line 1190, Address: 0x463d30, Func Offset: 0x2f0
	// Line 1188, Address: 0x463d34, Func Offset: 0x2f4
	// Line 1190, Address: 0x463d3c, Func Offset: 0x2fc
	// Line 1191, Address: 0x463d44, Func Offset: 0x304
	// Line 1194, Address: 0x463d50, Func Offset: 0x310
	// Line 1195, Address: 0x463d5c, Func Offset: 0x31c
	// Line 1196, Address: 0x463d80, Func Offset: 0x340
	// Line 1195, Address: 0x463d84, Func Offset: 0x344
	// Line 1196, Address: 0x463d88, Func Offset: 0x348
	// Line 1195, Address: 0x463d8c, Func Offset: 0x34c
	// Line 1196, Address: 0x463da8, Func Offset: 0x368
	// Line 1198, Address: 0x463db0, Func Offset: 0x370
	// Func End, Address: 0x463dd0, Func Offset: 0x390
}

// xCameraFXShake__FfffffPC5xVec3PC5xVec3b
// Start address: 0x463dd0
cameraFX* xCameraFXShake(float32 maxTime, float32 magnitude, float32 cycleMax, float32 rotate_magnitude, float32 radius, xVec3* epicenter, xVec3* player, uint8 shakeY)
{
	// Line 1108, Address: 0x463dd0, Func Offset: 0
	// Line 1109, Address: 0x463e0c, Func Offset: 0x3c
	// Line 1112, Address: 0x463e14, Func Offset: 0x44
	// Line 1113, Address: 0x463e18, Func Offset: 0x48
	// Line 1115, Address: 0x463e1c, Func Offset: 0x4c
	// Line 1117, Address: 0x463e28, Func Offset: 0x58
	// Line 1119, Address: 0x463e30, Func Offset: 0x60
	// Line 1122, Address: 0x463e3c, Func Offset: 0x6c
	// Line 1123, Address: 0x463e44, Func Offset: 0x74
	// Line 1128, Address: 0x463e48, Func Offset: 0x78
	// Line 1125, Address: 0x463e54, Func Offset: 0x84
	// Line 1126, Address: 0x463e58, Func Offset: 0x88
	// Line 1127, Address: 0x463e5c, Func Offset: 0x8c
	// Line 1128, Address: 0x463e60, Func Offset: 0x90
	// Line 1129, Address: 0x463e64, Func Offset: 0x94
	// Line 1131, Address: 0x463e68, Func Offset: 0x98
	// Line 1132, Address: 0x463e6c, Func Offset: 0x9c
	// Line 1133, Address: 0x463e74, Func Offset: 0xa4
	// Line 1134, Address: 0x463e7c, Func Offset: 0xac
	// Line 1136, Address: 0x463e94, Func Offset: 0xc4
	// Line 1110, Address: 0x463e9c, Func Offset: 0xcc
	// Line 1137, Address: 0x463ea0, Func Offset: 0xd0
	// Func End, Address: 0x463ea8, Func Offset: 0xd8
}

// xCameraFXShakeEnd__FP8cameraFXf
// Start address: 0x463eb0
void xCameraFXShakeEnd(cameraFX* fx, float32 fadeOutTime)
{
	// Line 1098, Address: 0x463eb0, Func Offset: 0
	// Line 1096, Address: 0x463eb8, Func Offset: 0x8
	// Line 1098, Address: 0x463ebc, Func Offset: 0xc
	// Line 1097, Address: 0x463ec4, Func Offset: 0x14
	// Line 1099, Address: 0x463ec8, Func Offset: 0x18
	// Func End, Address: 0x463ed0, Func Offset: 0x20
}

// xCameraFXShakeForever__FffffPC5xVec3PC5xVec3b
// Start address: 0x463ed0
cameraFX* xCameraFXShakeForever(float32 magnitude, float32 cycleMax, float32 rotate_magnitude, float32 radius, xVec3* epicenter, xVec3* player, uint8 shakeY)
{
	// Line 1092, Address: 0x463ed4, Func Offset: 0x4
	// Func End, Address: 0x463ef8, Func Offset: 0x28
}

// xCameraFXZoomUpdate__FP8cameraFXfPC7xMat4x3P7xMat4x3
// Start address: 0x463f00
void xCameraFXZoomUpdate(cameraFX* f, float32 dt, xMat4x3* m)
{
	// Line 1019, Address: 0x463f00, Func Offset: 0
	// Line 1020, Address: 0x463f04, Func Offset: 0x4
	// Line 1019, Address: 0x463f08, Func Offset: 0x8
	// Line 1020, Address: 0x463f0c, Func Offset: 0xc
	// Line 1023, Address: 0x463f40, Func Offset: 0x40
	// Line 1024, Address: 0x463f5c, Func Offset: 0x5c
	// Line 1025, Address: 0x463f70, Func Offset: 0x70
	// Line 1027, Address: 0x463f80, Func Offset: 0x80
	// Line 1028, Address: 0x463f84, Func Offset: 0x84
	// Line 1029, Address: 0x463f88, Func Offset: 0x88
	// Line 1031, Address: 0x463f8c, Func Offset: 0x8c
	// Line 1032, Address: 0x463f98, Func Offset: 0x98
	// Line 1035, Address: 0x463fa0, Func Offset: 0xa0
	// Line 1036, Address: 0x463fac, Func Offset: 0xac
	// Line 1038, Address: 0x463fbc, Func Offset: 0xbc
	// Line 1039, Address: 0x463fc0, Func Offset: 0xc0
	// Line 1042, Address: 0x463fc8, Func Offset: 0xc8
	// Line 1045, Address: 0x463fd0, Func Offset: 0xd0
	// Line 1046, Address: 0x463fdc, Func Offset: 0xdc
	// Line 1049, Address: 0x463fe4, Func Offset: 0xe4
	// Line 1050, Address: 0x464000, Func Offset: 0x100
	// Line 1051, Address: 0x46400c, Func Offset: 0x10c
	// Line 1053, Address: 0x464018, Func Offset: 0x118
	// Line 1054, Address: 0x46401c, Func Offset: 0x11c
	// Line 1057, Address: 0x464020, Func Offset: 0x120
	// Line 1059, Address: 0x46402c, Func Offset: 0x12c
	// Line 1069, Address: 0x464038, Func Offset: 0x138
	// Func End, Address: 0x464044, Func Offset: 0x144
}

// xCameraFXKill__Fv
// Start address: 0x464050
void xCameraFXKill()
{
	int32 i;
	// Line 995, Address: 0x464050, Func Offset: 0
	// Line 997, Address: 0x46405c, Func Offset: 0xc
	// Line 998, Address: 0x46406c, Func Offset: 0x1c
	// Line 999, Address: 0x464070, Func Offset: 0x20
	// Line 1000, Address: 0x464080, Func Offset: 0x30
	// Func End, Address: 0x464098, Func Offset: 0x48
}

// xCameraFXBegin__FRC7xMat4x3
// Start address: 0x4640a0
void xCameraFXBegin(xMat4x3& mat)
{
	// Line 920, Address: 0x4640a0, Func Offset: 0
	// Line 921, Address: 0x4640d0, Func Offset: 0x30
	// Line 922, Address: 0x4640f0, Func Offset: 0x50
	// Func End, Address: 0x4640f8, Func Offset: 0x58
}

// xScrFxDrawBox__FffffUcUcUcUcff
// Start address: 0x464100
void xScrFxDrawBox(float32 x1, float32 y1, float32 x2, float32 y2, uint8 red, uint8 green, uint8 blue, uint8 alpha, float32 ushift, float32 vshift)
{
	float32 oocameraNearClipPlane;
	uint16 indices[4];
	RwSky2DVertex v[4];
	// Line 872, Address: 0x464100, Func Offset: 0
	// Line 875, Address: 0x464104, Func Offset: 0x4
	// Line 872, Address: 0x464108, Func Offset: 0x8
	// Line 875, Address: 0x46410c, Func Offset: 0xc
	// Line 877, Address: 0x464110, Func Offset: 0x10
	// Line 882, Address: 0x46411c, Func Offset: 0x1c
	// Line 881, Address: 0x464120, Func Offset: 0x20
	// Line 882, Address: 0x464124, Func Offset: 0x24
	// Line 883, Address: 0x464128, Func Offset: 0x28
	// Line 884, Address: 0x46412c, Func Offset: 0x2c
	// Line 885, Address: 0x464134, Func Offset: 0x34
	// Line 887, Address: 0x46413c, Func Offset: 0x3c
	// Line 881, Address: 0x464140, Func Offset: 0x40
	// Line 887, Address: 0x464144, Func Offset: 0x44
	// Line 886, Address: 0x464148, Func Offset: 0x48
	// Line 888, Address: 0x46414c, Func Offset: 0x4c
	// Line 886, Address: 0x464150, Func Offset: 0x50
	// Line 888, Address: 0x464154, Func Offset: 0x54
	// Line 889, Address: 0x464158, Func Offset: 0x58
	// Line 890, Address: 0x46415c, Func Offset: 0x5c
	// Line 889, Address: 0x464160, Func Offset: 0x60
	// Line 890, Address: 0x464164, Func Offset: 0x64
	// Line 891, Address: 0x464168, Func Offset: 0x68
	// Line 892, Address: 0x46416c, Func Offset: 0x6c
	// Line 883, Address: 0x464170, Func Offset: 0x70
	// Line 891, Address: 0x464174, Func Offset: 0x74
	// Line 894, Address: 0x464178, Func Offset: 0x78
	// Line 895, Address: 0x464248, Func Offset: 0x148
	// Line 896, Address: 0x464318, Func Offset: 0x218
	// Line 897, Address: 0x4643e8, Func Offset: 0x2e8
	// Line 912, Address: 0x4644b8, Func Offset: 0x3b8
	// Line 899, Address: 0x4644bc, Func Offset: 0x3bc
	// Line 912, Address: 0x4644c0, Func Offset: 0x3c0
	// Line 897, Address: 0x4644c4, Func Offset: 0x3c4
	// Line 902, Address: 0x4644c8, Func Offset: 0x3c8
	// Line 900, Address: 0x4644cc, Func Offset: 0x3cc
	// Line 906, Address: 0x4644d0, Func Offset: 0x3d0
	// Line 899, Address: 0x4644d4, Func Offset: 0x3d4
	// Line 908, Address: 0x4644d8, Func Offset: 0x3d8
	// Line 912, Address: 0x4644e0, Func Offset: 0x3e0
	// Line 900, Address: 0x4644ec, Func Offset: 0x3ec
	// Line 912, Address: 0x4644f0, Func Offset: 0x3f0
	// Line 903, Address: 0x4644f8, Func Offset: 0x3f8
	// Line 909, Address: 0x4644fc, Func Offset: 0x3fc
	// Line 912, Address: 0x464500, Func Offset: 0x400
	// Line 903, Address: 0x464508, Func Offset: 0x408
	// Line 905, Address: 0x46450c, Func Offset: 0x40c
	// Line 912, Address: 0x464514, Func Offset: 0x414
	// Line 902, Address: 0x46451c, Func Offset: 0x41c
	// Line 908, Address: 0x464520, Func Offset: 0x420
	// Line 906, Address: 0x464524, Func Offset: 0x424
	// Line 912, Address: 0x464528, Func Offset: 0x428
	// Line 913, Address: 0x464530, Func Offset: 0x430
	// Func End, Address: 0x46453c, Func Offset: 0x43c
}

// xScrFXGlareRender__FRC7xMat4x3
// Start address: 0x464540
void xScrFXGlareRender(xMat4x3& mat)
{
	int32 i;
	xVec3 w;
	xVec3 h;
	xVec3 v;
	xVec3 glareDir;
	float32 val;
	xVec3 toCam;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RxObjSpace3DVertex sStripVert[4];
	// Line 762, Address: 0x464540, Func Offset: 0
	// Line 763, Address: 0x464550, Func Offset: 0x10
	// Line 762, Address: 0x464554, Func Offset: 0x14
	// Line 763, Address: 0x464558, Func Offset: 0x18
	// Line 762, Address: 0x46455c, Func Offset: 0x1c
	// Line 763, Address: 0x464560, Func Offset: 0x20
	// Line 762, Address: 0x464564, Func Offset: 0x24
	// Line 763, Address: 0x464568, Func Offset: 0x28
	// Line 762, Address: 0x464570, Func Offset: 0x30
	// Line 763, Address: 0x464580, Func Offset: 0x40
	// Line 762, Address: 0x464584, Func Offset: 0x44
	// Line 763, Address: 0x464590, Func Offset: 0x50
	// Line 762, Address: 0x464598, Func Offset: 0x58
	// Line 763, Address: 0x4645a0, Func Offset: 0x60
	// Line 767, Address: 0x4645bc, Func Offset: 0x7c
	// Line 867, Address: 0x4645c8, Func Offset: 0x88
	// Line 767, Address: 0x4645d0, Func Offset: 0x90
	// Line 867, Address: 0x4645d4, Func Offset: 0x94
	// Line 868, Address: 0x4645dc, Func Offset: 0x9c
	// Line 774, Address: 0x4645f0, Func Offset: 0xb0
	// Line 868, Address: 0x4645f4, Func Offset: 0xb4
	// Line 776, Address: 0x464630, Func Offset: 0xf0
	// Line 868, Address: 0x464638, Func Offset: 0xf8
	// Line 782, Address: 0x464640, Func Offset: 0x100
	// Line 868, Address: 0x464644, Func Offset: 0x104
	// Line 776, Address: 0x464654, Func Offset: 0x114
	// Line 868, Address: 0x464658, Func Offset: 0x118
	// Line 776, Address: 0x46465c, Func Offset: 0x11c
	// Line 868, Address: 0x464660, Func Offset: 0x120
	// Line 776, Address: 0x464664, Func Offset: 0x124
	// Line 868, Address: 0x464668, Func Offset: 0x128
	// Line 776, Address: 0x46466c, Func Offset: 0x12c
	// Line 868, Address: 0x464670, Func Offset: 0x130
	// Line 777, Address: 0x464680, Func Offset: 0x140
	// Line 868, Address: 0x464684, Func Offset: 0x144
	// Line 777, Address: 0x464688, Func Offset: 0x148
	// Line 868, Address: 0x46468c, Func Offset: 0x14c
	// Line 777, Address: 0x464690, Func Offset: 0x150
	// Line 868, Address: 0x464694, Func Offset: 0x154
	// Line 789, Address: 0x4646cc, Func Offset: 0x18c
	// Line 868, Address: 0x4646d0, Func Offset: 0x190
	// Line 786, Address: 0x4646dc, Func Offset: 0x19c
	// Line 785, Address: 0x4646e0, Func Offset: 0x1a0
	// Line 868, Address: 0x4646e4, Func Offset: 0x1a4
	// Line 787, Address: 0x4646e8, Func Offset: 0x1a8
	// Line 868, Address: 0x4646ec, Func Offset: 0x1ac
	// Line 793, Address: 0x464710, Func Offset: 0x1d0
	// Line 868, Address: 0x464714, Func Offset: 0x1d4
	// Line 793, Address: 0x464724, Func Offset: 0x1e4
	// Line 868, Address: 0x464734, Func Offset: 0x1f4
	// Line 793, Address: 0x46473c, Func Offset: 0x1fc
	// Line 797, Address: 0x464748, Func Offset: 0x208
	// Line 793, Address: 0x464750, Func Offset: 0x210
	// Line 797, Address: 0x464758, Func Offset: 0x218
	// Line 868, Address: 0x46475c, Func Offset: 0x21c
	// Line 796, Address: 0x464760, Func Offset: 0x220
	// Line 798, Address: 0x464768, Func Offset: 0x228
	// Line 868, Address: 0x46476c, Func Offset: 0x22c
	// Line 800, Address: 0x464778, Func Offset: 0x238
	// Line 802, Address: 0x464788, Func Offset: 0x248
	// Line 868, Address: 0x46478c, Func Offset: 0x24c
	// Line 821, Address: 0x464798, Func Offset: 0x258
	// Line 808, Address: 0x4647a0, Func Offset: 0x260
	// Line 868, Address: 0x4647a8, Func Offset: 0x268
	// Line 806, Address: 0x464810, Func Offset: 0x2d0
	// Line 868, Address: 0x464814, Func Offset: 0x2d4
	// Line 806, Address: 0x464820, Func Offset: 0x2e0
	// Line 868, Address: 0x464824, Func Offset: 0x2e4
	// Line 806, Address: 0x46482c, Func Offset: 0x2ec
	// Line 868, Address: 0x464830, Func Offset: 0x2f0
	// Line 807, Address: 0x464878, Func Offset: 0x338
	// Line 868, Address: 0x46487c, Func Offset: 0x33c
	// Line 807, Address: 0x464880, Func Offset: 0x340
	// Line 868, Address: 0x464888, Func Offset: 0x348
	// Line 807, Address: 0x46488c, Func Offset: 0x34c
	// Line 868, Address: 0x464890, Func Offset: 0x350
	// Line 807, Address: 0x464898, Func Offset: 0x358
	// Line 868, Address: 0x46489c, Func Offset: 0x35c
	// Line 807, Address: 0x4648a4, Func Offset: 0x364
	// Line 808, Address: 0x4648a8, Func Offset: 0x368
	// Line 807, Address: 0x4648ac, Func Offset: 0x36c
	// Line 868, Address: 0x4648b0, Func Offset: 0x370
	// Line 809, Address: 0x4648b4, Func Offset: 0x374
	// Line 807, Address: 0x4648b8, Func Offset: 0x378
	// Line 808, Address: 0x4648bc, Func Offset: 0x37c
	// Line 868, Address: 0x4648c0, Func Offset: 0x380
	// Line 808, Address: 0x4648cc, Func Offset: 0x38c
	// Line 868, Address: 0x4648d0, Func Offset: 0x390
	// Line 809, Address: 0x4648d4, Func Offset: 0x394
	// Line 868, Address: 0x4648d8, Func Offset: 0x398
	// Line 809, Address: 0x4648e4, Func Offset: 0x3a4
	// Line 868, Address: 0x4648e8, Func Offset: 0x3a8
	// Line 818, Address: 0x4648fc, Func Offset: 0x3bc
	// Line 821, Address: 0x464914, Func Offset: 0x3d4
	// Line 868, Address: 0x464918, Func Offset: 0x3d8
	// Line 821, Address: 0x464920, Func Offset: 0x3e0
	// Line 868, Address: 0x464950, Func Offset: 0x410
	// Line 821, Address: 0x464954, Func Offset: 0x414
	// Line 868, Address: 0x464994, Func Offset: 0x454
	// Line 821, Address: 0x464998, Func Offset: 0x458
	// Line 868, Address: 0x4649d8, Func Offset: 0x498
	// Line 821, Address: 0x4649dc, Func Offset: 0x49c
	// Line 868, Address: 0x464a20, Func Offset: 0x4e0
	// Line 826, Address: 0x464a3c, Func Offset: 0x4fc
	// Line 868, Address: 0x464a40, Func Offset: 0x500
	// Line 824, Address: 0x464a58, Func Offset: 0x518
	// Line 868, Address: 0x464a5c, Func Offset: 0x51c
	// Line 827, Address: 0x464a60, Func Offset: 0x520
	// Line 868, Address: 0x464a64, Func Offset: 0x524
	// Line 824, Address: 0x464a70, Func Offset: 0x530
	// Line 868, Address: 0x464a74, Func Offset: 0x534
	// Line 824, Address: 0x464a78, Func Offset: 0x538
	// Line 868, Address: 0x464a7c, Func Offset: 0x53c
	// Line 824, Address: 0x464a80, Func Offset: 0x540
	// Line 868, Address: 0x464a84, Func Offset: 0x544
	// Line 824, Address: 0x464a88, Func Offset: 0x548
	// Line 868, Address: 0x464a8c, Func Offset: 0x54c
	// Line 824, Address: 0x464a90, Func Offset: 0x550
	// Line 827, Address: 0x464a94, Func Offset: 0x554
	// Line 868, Address: 0x464a98, Func Offset: 0x558
	// Line 827, Address: 0x464a9c, Func Offset: 0x55c
	// Line 868, Address: 0x464ad0, Func Offset: 0x590
	// Line 827, Address: 0x464ad4, Func Offset: 0x594
	// Line 868, Address: 0x464b14, Func Offset: 0x5d4
	// Line 827, Address: 0x464b18, Func Offset: 0x5d8
	// Line 868, Address: 0x464b58, Func Offset: 0x618
	// Line 827, Address: 0x464b5c, Func Offset: 0x61c
	// Line 868, Address: 0x464ba0, Func Offset: 0x660
	// Line 832, Address: 0x464bac, Func Offset: 0x66c
	// Line 868, Address: 0x464bb0, Func Offset: 0x670
	// Line 834, Address: 0x464bc4, Func Offset: 0x684
	// Line 868, Address: 0x464bc8, Func Offset: 0x688
	// Line 831, Address: 0x464bd8, Func Offset: 0x698
	// Line 868, Address: 0x464bdc, Func Offset: 0x69c
	// Line 831, Address: 0x464be8, Func Offset: 0x6a8
	// Line 868, Address: 0x464bec, Func Offset: 0x6ac
	// Line 831, Address: 0x464bfc, Func Offset: 0x6bc
	// Line 868, Address: 0x464c00, Func Offset: 0x6c0
	// Line 831, Address: 0x464c04, Func Offset: 0x6c4
	// Line 868, Address: 0x464c10, Func Offset: 0x6d0
	// Line 834, Address: 0x464c14, Func Offset: 0x6d4
	// Line 868, Address: 0x464c18, Func Offset: 0x6d8
	// Line 834, Address: 0x464c1c, Func Offset: 0x6dc
	// Line 868, Address: 0x464c50, Func Offset: 0x710
	// Line 834, Address: 0x464c54, Func Offset: 0x714
	// Line 868, Address: 0x464c94, Func Offset: 0x754
	// Line 834, Address: 0x464c98, Func Offset: 0x758
	// Line 868, Address: 0x464cd8, Func Offset: 0x798
	// Line 834, Address: 0x464cdc, Func Offset: 0x79c
	// Line 868, Address: 0x464d20, Func Offset: 0x7e0
	// Line 838, Address: 0x464d2c, Func Offset: 0x7ec
	// Line 868, Address: 0x464d30, Func Offset: 0x7f0
	// Line 837, Address: 0x464d58, Func Offset: 0x818
	// Line 840, Address: 0x464d5c, Func Offset: 0x81c
	// Line 868, Address: 0x464d60, Func Offset: 0x820
	// Line 837, Address: 0x464d68, Func Offset: 0x828
	// Line 868, Address: 0x464d6c, Func Offset: 0x82c
	// Line 837, Address: 0x464d7c, Func Offset: 0x83c
	// Line 868, Address: 0x464d80, Func Offset: 0x840
	// Line 837, Address: 0x464d84, Func Offset: 0x844
	// Line 868, Address: 0x464d90, Func Offset: 0x850
	// Line 840, Address: 0x464d94, Func Offset: 0x854
	// Line 868, Address: 0x464d98, Func Offset: 0x858
	// Line 840, Address: 0x464d9c, Func Offset: 0x85c
	// Line 868, Address: 0x464dd0, Func Offset: 0x890
	// Line 840, Address: 0x464dd4, Func Offset: 0x894
	// Line 868, Address: 0x464e14, Func Offset: 0x8d4
	// Line 840, Address: 0x464e18, Func Offset: 0x8d8
	// Line 868, Address: 0x464e58, Func Offset: 0x918
	// Line 840, Address: 0x464e5c, Func Offset: 0x91c
	// Line 868, Address: 0x464ea0, Func Offset: 0x960
	// Line 847, Address: 0x464ebc, Func Offset: 0x97c
	// Line 868, Address: 0x464ec0, Func Offset: 0x980
	// Line 847, Address: 0x464f78, Func Offset: 0xa38
	// Line 868, Address: 0x464f7c, Func Offset: 0xa3c
	// Func End, Address: 0x465084, Func Offset: 0xb44
}

// xScrFXFullScreenGlareRender__Fv
// Start address: 0x465090
void xScrFXFullScreenGlareRender()
{
	xMat4x3 mat;
	xVec3 v;
	xVec3 glareDir;
	float32 d;
	float32 alpha;
	// Line 702, Address: 0x465090, Func Offset: 0
	// Line 703, Address: 0x4650b0, Func Offset: 0x20
	// Line 707, Address: 0x4650bc, Func Offset: 0x2c
	// Line 710, Address: 0x4650d0, Func Offset: 0x40
	// Line 711, Address: 0x4650d4, Func Offset: 0x44
	// Line 710, Address: 0x4650d8, Func Offset: 0x48
	// Line 711, Address: 0x4650dc, Func Offset: 0x4c
	// Line 710, Address: 0x4650e0, Func Offset: 0x50
	// Line 711, Address: 0x4650ec, Func Offset: 0x5c
	// Line 714, Address: 0x4650f4, Func Offset: 0x64
	// Line 715, Address: 0x465104, Func Offset: 0x74
	// Line 720, Address: 0x465108, Func Offset: 0x78
	// Line 715, Address: 0x46510c, Func Offset: 0x7c
	// Line 720, Address: 0x465120, Func Offset: 0x90
	// Line 715, Address: 0x465124, Func Offset: 0x94
	// Line 722, Address: 0x465128, Func Offset: 0x98
	// Line 715, Address: 0x46512c, Func Offset: 0x9c
	// Line 720, Address: 0x465138, Func Offset: 0xa8
	// Line 721, Address: 0x46513c, Func Offset: 0xac
	// Line 722, Address: 0x465148, Func Offset: 0xb8
	// Line 725, Address: 0x46514c, Func Offset: 0xbc
	// Line 733, Address: 0x465158, Func Offset: 0xc8
	// Line 731, Address: 0x46515c, Func Offset: 0xcc
	// Line 732, Address: 0x465160, Func Offset: 0xd0
	// Line 733, Address: 0x465164, Func Offset: 0xd4
	// Line 734, Address: 0x465198, Func Offset: 0x108
	// Line 735, Address: 0x4651b0, Func Offset: 0x120
	// Line 737, Address: 0x4651b4, Func Offset: 0x124
	// Line 739, Address: 0x4651f4, Func Offset: 0x164
	// Line 741, Address: 0x465204, Func Offset: 0x174
	// Line 743, Address: 0x46520c, Func Offset: 0x17c
	// Line 741, Address: 0x465210, Func Offset: 0x180
	// Line 743, Address: 0x465218, Func Offset: 0x188
	// Line 749, Address: 0x465224, Func Offset: 0x194
	// Line 750, Address: 0x465234, Func Offset: 0x1a4
	// Line 752, Address: 0x465244, Func Offset: 0x1b4
	// Line 759, Address: 0x4652d0, Func Offset: 0x240
	// Line 746, Address: 0x4652f0, Func Offset: 0x260
	// Line 759, Address: 0x4652f4, Func Offset: 0x264
	// Func End, Address: 0x465330, Func Offset: 0x2a0
}

// xScrFXGlareActive__Fi
// Start address: 0x465330
uint8 xScrFXGlareActive(int32 id)
{
	// Line 657, Address: 0x465330, Func Offset: 0
	// Line 658, Address: 0x465354, Func Offset: 0x24
	// Func End, Address: 0x46535c, Func Offset: 0x2c
}

// xScrFXGlareChange__FiPC5xVec3ff
// Start address: 0x465360
void xScrFXGlareChange(int32 id, xVec3* pos, float32 life, float32 intensity)
{
	// Line 647, Address: 0x465364, Func Offset: 0x4
	// Line 648, Address: 0x46536c, Func Offset: 0xc
	// Line 647, Address: 0x465370, Func Offset: 0x10
	// Line 648, Address: 0x465374, Func Offset: 0x14
	// Line 649, Address: 0x46537c, Func Offset: 0x1c
	// Line 648, Address: 0x465380, Func Offset: 0x20
	// Line 649, Address: 0x465390, Func Offset: 0x30
	// Line 648, Address: 0x465394, Func Offset: 0x34
	// Line 649, Address: 0x46539c, Func Offset: 0x3c
	// Line 651, Address: 0x4653a4, Func Offset: 0x44
	// Line 653, Address: 0x4653b8, Func Offset: 0x58
	// Func End, Address: 0x4653ec, Func Offset: 0x8c
}

// xScrFXGlareAdd__FPC5xVec3fffffffP8RwRaster
// Start address: 0x4653f0
int32 xScrFXGlareAdd(xVec3* pos, float32 life, float32 intensity, float32 size, float32 r, float32 g, float32 b, float32 a, RwRaster* raster)
{
	int32 i;
	RwTexture* texturePtr;
	// Line 608, Address: 0x4653f0, Func Offset: 0
	// Line 609, Address: 0x4653f4, Func Offset: 0x4
	// Line 608, Address: 0x4653f8, Func Offset: 0x8
	// Line 609, Address: 0x4653fc, Func Offset: 0xc
	// Line 608, Address: 0x465400, Func Offset: 0x10
	// Line 609, Address: 0x465408, Func Offset: 0x18
	// Line 611, Address: 0x46540c, Func Offset: 0x1c
	// Line 613, Address: 0x465424, Func Offset: 0x34
	// Line 615, Address: 0x46542c, Func Offset: 0x3c
	// Line 611, Address: 0x465430, Func Offset: 0x40
	// Line 613, Address: 0x46543c, Func Offset: 0x4c
	// Line 616, Address: 0x465440, Func Offset: 0x50
	// Line 611, Address: 0x465444, Func Offset: 0x54
	// Line 616, Address: 0x465448, Func Offset: 0x58
	// Line 615, Address: 0x46544c, Func Offset: 0x5c
	// Line 616, Address: 0x465450, Func Offset: 0x60
	// Line 613, Address: 0x465454, Func Offset: 0x64
	// Line 617, Address: 0x46545c, Func Offset: 0x6c
	// Line 615, Address: 0x465464, Func Offset: 0x74
	// Line 617, Address: 0x465468, Func Offset: 0x78
	// Line 616, Address: 0x46546c, Func Offset: 0x7c
	// Line 618, Address: 0x465470, Func Offset: 0x80
	// Line 619, Address: 0x46547c, Func Offset: 0x8c
	// Line 620, Address: 0x465488, Func Offset: 0x98
	// Line 621, Address: 0x465494, Func Offset: 0xa4
	// Line 615, Address: 0x4654a0, Func Offset: 0xb0
	// Line 622, Address: 0x4654a4, Func Offset: 0xb4
	// Line 614, Address: 0x4654a8, Func Offset: 0xb8
	// Line 622, Address: 0x4654ac, Func Offset: 0xbc
	// Line 615, Address: 0x4654b0, Func Offset: 0xc0
	// Line 622, Address: 0x4654b4, Func Offset: 0xc4
	// Line 615, Address: 0x4654b8, Func Offset: 0xc8
	// Line 616, Address: 0x4654c8, Func Offset: 0xd8
	// Line 617, Address: 0x4654cc, Func Offset: 0xdc
	// Line 618, Address: 0x4654d0, Func Offset: 0xe0
	// Line 619, Address: 0x4654d4, Func Offset: 0xe4
	// Line 620, Address: 0x4654d8, Func Offset: 0xe8
	// Line 621, Address: 0x4654dc, Func Offset: 0xec
	// Line 622, Address: 0x4654e0, Func Offset: 0xf0
	// Line 624, Address: 0x4654f4, Func Offset: 0x104
	// Line 637, Address: 0x4654fc, Func Offset: 0x10c
	// Line 639, Address: 0x46550c, Func Offset: 0x11c
	// Line 641, Address: 0x465514, Func Offset: 0x124
	// Line 643, Address: 0x465524, Func Offset: 0x134
	// Line 628, Address: 0x465540, Func Offset: 0x150
	// Line 643, Address: 0x46554c, Func Offset: 0x15c
	// Line 628, Address: 0x465554, Func Offset: 0x164
	// Line 643, Address: 0x46555c, Func Offset: 0x16c
	// Line 628, Address: 0x46556c, Func Offset: 0x17c
	// Line 643, Address: 0x465570, Func Offset: 0x180
	// Line 633, Address: 0x465598, Func Offset: 0x1a8
	// Line 643, Address: 0x4655a0, Func Offset: 0x1b0
	// Line 636, Address: 0x4655ac, Func Offset: 0x1bc
	// Line 644, Address: 0x4655b4, Func Offset: 0x1c4
	// Func End, Address: 0x4655c8, Func Offset: 0x1d8
}

// xScrFXGlareDisable__Fi
// Start address: 0x4655d0
void xScrFXGlareDisable(int32 id)
{
	// Line 604, Address: 0x4655d0, Func Offset: 0
	// Line 605, Address: 0x4655f0, Func Offset: 0x20
	// Func End, Address: 0x4655f8, Func Offset: 0x28
}

// xScrFxDrawSafeArea__Fv
// Start address: 0x465600
void xScrFxDrawSafeArea()
{
	RwVideoMode videoMode;
	uint8 bHiDef;
	float32 fSafeArea;
	uint32 screenWidth;
	uint32 screenHeight;
	uint32 xMargin;
	uint32 yMargin;
	int32 top;
	int32 bottom;
	int32 left;
	int32 right;
	// Line 542, Address: 0x465600, Func Offset: 0
	// Line 547, Address: 0x46561c, Func Offset: 0x1c
	// Line 549, Address: 0x465630, Func Offset: 0x30
	// Line 550, Address: 0x465640, Func Offset: 0x40
	// Line 552, Address: 0x465644, Func Offset: 0x44
	// Line 553, Address: 0x465650, Func Offset: 0x50
	// Line 554, Address: 0x465658, Func Offset: 0x58
	// Line 556, Address: 0x465660, Func Offset: 0x60
	// Line 560, Address: 0x465664, Func Offset: 0x64
	// Line 561, Address: 0x4656dc, Func Offset: 0xdc
	// Line 567, Address: 0x465754, Func Offset: 0x154
	// Line 561, Address: 0x465758, Func Offset: 0x158
	// Line 569, Address: 0x46575c, Func Offset: 0x15c
	// Line 567, Address: 0x465760, Func Offset: 0x160
	// Line 561, Address: 0x465764, Func Offset: 0x164
	// Line 565, Address: 0x46576c, Func Offset: 0x16c
	// Line 569, Address: 0x465770, Func Offset: 0x170
	// Line 567, Address: 0x465790, Func Offset: 0x190
	// Line 569, Address: 0x465794, Func Offset: 0x194
	// Line 570, Address: 0x4657ac, Func Offset: 0x1ac
	// Line 571, Address: 0x4657e0, Func Offset: 0x1e0
	// Line 572, Address: 0x465818, Func Offset: 0x218
	// Line 573, Address: 0x465850, Func Offset: 0x250
	// Func End, Address: 0x465874, Func Offset: 0x274
}

// xScrFxRenderLetterBox__FP8RwCamera
// Start address: 0x465880
void xScrFxRenderLetterBox()
{
	RwVideoMode video_mode;
	// Line 464, Address: 0x465880, Func Offset: 0
	// Line 472, Address: 0x465890, Func Offset: 0x10
	// Line 476, Address: 0x4658a8, Func Offset: 0x28
	// Line 483, Address: 0x4658b4, Func Offset: 0x34
	// Line 485, Address: 0x4658c0, Func Offset: 0x40
	// Line 486, Address: 0x4658dc, Func Offset: 0x5c
	// Line 487, Address: 0x4658e8, Func Offset: 0x68
	// Line 490, Address: 0x4658f0, Func Offset: 0x70
	// Line 518, Address: 0x465904, Func Offset: 0x84
	// Line 478, Address: 0x465910, Func Offset: 0x90
	// Line 479, Address: 0x465928, Func Offset: 0xa8
	// Line 518, Address: 0x46592c, Func Offset: 0xac
	// Line 481, Address: 0x465934, Func Offset: 0xb4
	// Line 518, Address: 0x46593c, Func Offset: 0xbc
	// Line 496, Address: 0x465944, Func Offset: 0xc4
	// Line 518, Address: 0x465948, Func Offset: 0xc8
	// Line 498, Address: 0x465958, Func Offset: 0xd8
	// Line 518, Address: 0x465974, Func Offset: 0xf4
	// Line 508, Address: 0x465988, Func Offset: 0x108
	// Line 518, Address: 0x46599c, Func Offset: 0x11c
	// Func End, Address: 0x4659c4, Func Offset: 0x144
}

// xScrFxLetterbox__Fi
// Start address: 0x4659d0
void xScrFxLetterbox(int32 enable)
{
	// Line 440, Address: 0x4659d0, Func Offset: 0
	// Line 442, Address: 0x4659dc, Func Offset: 0xc
	// Line 443, Address: 0x4659ec, Func Offset: 0x1c
	// Line 445, Address: 0x4659f0, Func Offset: 0x20
	// Line 447, Address: 0x4659f8, Func Offset: 0x28
	// Line 453, Address: 0x4659fc, Func Offset: 0x2c
	// Line 456, Address: 0x465a04, Func Offset: 0x34
	// Line 458, Address: 0x465a08, Func Offset: 0x38
	// Func End, Address: 0x465a18, Func Offset: 0x48
}

// xScrFxLetterBoxSetAlpha__FUc
// Start address: 0x465a20
void xScrFxLetterBoxSetAlpha(uint8 alpha)
{
	// Line 431, Address: 0x465a20, Func Offset: 0
	// Func End, Address: 0x465a28, Func Offset: 0x8
}

// xScrFxLetterBoxSetSize__Ff
// Start address: 0x465a30
void xScrFxLetterBoxSetSize(float32 size)
{
	// Line 414, Address: 0x465a30, Func Offset: 0
	// Line 415, Address: 0x465a80, Func Offset: 0x50
	// Func End, Address: 0x465a88, Func Offset: 0x58
}

// xScrFxLetterboxReset__Fv
// Start address: 0x465a90
void xScrFxLetterboxReset()
{
	// Line 403, Address: 0x465a90, Func Offset: 0
	// Line 405, Address: 0x465a94, Func Offset: 0x4
	// Func End, Address: 0x465a9c, Func Offset: 0xc
}

// xScrFxFadeUpdate__Ff
// Start address: 0x465aa0
void xScrFxFadeUpdate(float32 seconds)
{
	float32 percent;
	// Line 297, Address: 0x465aa0, Func Offset: 0
	// Line 308, Address: 0x465aac, Func Offset: 0xc
	// Line 316, Address: 0x465abc, Func Offset: 0x1c
	// Line 323, Address: 0x465acc, Func Offset: 0x2c
	// Line 326, Address: 0x465ae4, Func Offset: 0x44
	// Line 330, Address: 0x465af0, Func Offset: 0x50
	// Line 332, Address: 0x465b00, Func Offset: 0x60
	// Line 335, Address: 0x465b04, Func Offset: 0x64
	// Line 339, Address: 0x465b0c, Func Offset: 0x6c
	// Line 342, Address: 0x465b48, Func Offset: 0xa8
	// Line 346, Address: 0x465b50, Func Offset: 0xb0
	// Line 349, Address: 0x465b5c, Func Offset: 0xbc
	// Line 350, Address: 0x465bf4, Func Offset: 0x154
	// Line 349, Address: 0x465bf8, Func Offset: 0x158
	// Line 350, Address: 0x465bfc, Func Offset: 0x15c
	// Line 351, Address: 0x465c90, Func Offset: 0x1f0
	// Line 350, Address: 0x465c94, Func Offset: 0x1f4
	// Line 351, Address: 0x465c98, Func Offset: 0x1f8
	// Line 352, Address: 0x465d2c, Func Offset: 0x28c
	// Line 351, Address: 0x465d30, Func Offset: 0x290
	// Line 352, Address: 0x465d34, Func Offset: 0x294
	// Line 353, Address: 0x465dcc, Func Offset: 0x32c
	// Func End, Address: 0x465ddc, Func Offset: 0x33c
}

// xScrFxIsFading__Fv
// Start address: 0x465de0
uint8 xScrFxIsFading()
{
	// Line 272, Address: 0x465de0, Func Offset: 0
	// Line 273, Address: 0x465de4, Func Offset: 0x4
	// Func End, Address: 0x465dec, Func Offset: 0xc
}

// xScrFxStopFade__Fv
// Start address: 0x465df0
void xScrFxStopFade()
{
	// Line 266, Address: 0x465df0, Func Offset: 0
	// Line 267, Address: 0x465df4, Func Offset: 0x4
	// Func End, Address: 0x465dfc, Func Offset: 0xc
}

// xScrFxFade__FPC10xColor_tagPC10xColor_tagfi
// Start address: 0x465e00
void xScrFxFade(xColor_tag* base, xColor_tag* dest, float32 seconds, int32 hold)
{
	// Line 253, Address: 0x465e00, Func Offset: 0
	// Line 256, Address: 0x465e18, Func Offset: 0x18
	// Line 261, Address: 0x465e1c, Func Offset: 0x1c
	// Line 255, Address: 0x465e20, Func Offset: 0x20
	// Line 256, Address: 0x465e2c, Func Offset: 0x2c
	// Line 257, Address: 0x465e4c, Func Offset: 0x4c
	// Line 259, Address: 0x465e50, Func Offset: 0x50
	// Line 257, Address: 0x465e54, Func Offset: 0x54
	// Line 259, Address: 0x465e58, Func Offset: 0x58
	// Line 257, Address: 0x465e5c, Func Offset: 0x5c
	// Line 261, Address: 0x465e60, Func Offset: 0x60
	// Line 256, Address: 0x465e64, Func Offset: 0x64
	// Line 261, Address: 0x465e68, Func Offset: 0x68
	// Line 257, Address: 0x465e6c, Func Offset: 0x6c
	// Line 258, Address: 0x465e70, Func Offset: 0x70
	// Line 257, Address: 0x465e74, Func Offset: 0x74
	// Line 258, Address: 0x465e78, Func Offset: 0x78
	// Line 257, Address: 0x465e7c, Func Offset: 0x7c
	// Line 256, Address: 0x465e84, Func Offset: 0x84
	// Line 257, Address: 0x465e88, Func Offset: 0x88
	// Line 256, Address: 0x465e8c, Func Offset: 0x8c
	// Line 257, Address: 0x465e90, Func Offset: 0x90
	// Line 262, Address: 0x465e9c, Func Offset: 0x9c
	// Func End, Address: 0x465ea4, Func Offset: 0xa4
}

// xScrFxDrawScreenSizeRectangle__Fv
// Start address: 0x465eb0
void xScrFxDrawScreenSizeRectangle()
{
	RwVideoMode video_mode;
	// Line 189, Address: 0x465eb0, Func Offset: 0
	// Line 192, Address: 0x465eb8, Func Offset: 0x8
	// Line 193, Address: 0x465ecc, Func Offset: 0x1c
	// Line 195, Address: 0x465efc, Func Offset: 0x4c
	// Func End, Address: 0x465f08, Func Offset: 0x58
}

// xScrFxRender__FP8RwCamera
// Start address: 0x465f10
void xScrFxRender()
{
	// Line 143, Address: 0x465f10, Func Offset: 0
	// Line 145, Address: 0x465f20, Func Offset: 0x10
	// Line 156, Address: 0x465f28, Func Offset: 0x18
	// Line 159, Address: 0x465f7c, Func Offset: 0x6c
	// Line 164, Address: 0x465fd0, Func Offset: 0xc0
	// Line 168, Address: 0x465fd8, Func Offset: 0xc8
	// Line 170, Address: 0x465fe4, Func Offset: 0xd4
	// Line 174, Address: 0x465fec, Func Offset: 0xdc
	// Line 175, Address: 0x465ff4, Func Offset: 0xe4
	// Line 156, Address: 0x466004, Func Offset: 0xf4
	// Line 175, Address: 0x466008, Func Offset: 0xf8
	// Line 156, Address: 0x466020, Func Offset: 0x110
	// Line 175, Address: 0x466024, Func Offset: 0x114
	// Line 156, Address: 0x46602c, Func Offset: 0x11c
	// Line 175, Address: 0x466034, Func Offset: 0x124
	// Func End, Address: 0x466074, Func Offset: 0x164
}

// xScrFxUpdate__FP8RwCameraf
// Start address: 0x466080
void xScrFxUpdate(float32 dt)
{
	// Line 123, Address: 0x466080, Func Offset: 0
	// Line 125, Address: 0x466094, Func Offset: 0x14
	// Line 127, Address: 0x46609c, Func Offset: 0x1c
	// Line 129, Address: 0x4660a4, Func Offset: 0x24
	// Line 131, Address: 0x4660e8, Func Offset: 0x68
	// Line 134, Address: 0x46611c, Func Offset: 0x9c
	// Line 139, Address: 0x4661a8, Func Offset: 0x128
	// Line 140, Address: 0x4661b0, Func Offset: 0x130
	// Line 131, Address: 0x4661bc, Func Offset: 0x13c
	// Line 140, Address: 0x4661c0, Func Offset: 0x140
	// Line 131, Address: 0x4661cc, Func Offset: 0x14c
	// Line 140, Address: 0x4661d4, Func Offset: 0x154
	// Line 131, Address: 0x4661dc, Func Offset: 0x15c
	// Line 140, Address: 0x4661e0, Func Offset: 0x160
	// Line 134, Address: 0x4661f4, Func Offset: 0x174
	// Line 140, Address: 0x4661f8, Func Offset: 0x178
	// Line 134, Address: 0x466204, Func Offset: 0x184
	// Line 140, Address: 0x466208, Func Offset: 0x188
	// Line 134, Address: 0x466214, Func Offset: 0x194
	// Line 140, Address: 0x466218, Func Offset: 0x198
	// Line 134, Address: 0x46621c, Func Offset: 0x19c
	// Line 140, Address: 0x466224, Func Offset: 0x1a4
	// Line 134, Address: 0x46622c, Func Offset: 0x1ac
	// Line 140, Address: 0x466238, Func Offset: 0x1b8
	// Func End, Address: 0x466250, Func Offset: 0x1d0
}

// xScrFxReset__Fv
// Start address: 0x466250
void xScrFxReset()
{
	// Line 110, Address: 0x466250, Func Offset: 0
	// Line 114, Address: 0x466280, Func Offset: 0x30
	// Func End, Address: 0x466288, Func Offset: 0x38
}

// xScrFxInit__Fv
// Start address: 0x466290
void xScrFxInit()
{
	// Line 94, Address: 0x466290, Func Offset: 0
	// Line 95, Address: 0x466294, Func Offset: 0x4
	// Line 94, Address: 0x466298, Func Offset: 0x8
	// Line 95, Address: 0x46629c, Func Offset: 0xc
	// Line 96, Address: 0x4662ac, Func Offset: 0x1c
	// Line 98, Address: 0x4662dc, Func Offset: 0x4c
	// Line 100, Address: 0x4662e4, Func Offset: 0x54
	// Line 101, Address: 0x466328, Func Offset: 0x98
	// Func End, Address: 0x466334, Func Offset: 0xa4
}

