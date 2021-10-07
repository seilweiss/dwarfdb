



void zPatTongue_PopOff();
void zPatTongue_Render(zLasso* lasso);
void IMLightKitLight(IMLightKit* imlkit, xVec3* norm, uint8* r, uint8* g, uint8* b);
void IMLightKitSetup(IMLightKit* imlkit, xLightKit* lkit);
void CalcSegNormals(xVec3* segA, xVec3* segB, xVec3* segC);
void CalcSegLerp(xVec3* segOut, xVec3* segA, xVec3* segB, float32 lerp, xVec3* translate, float32 scale);
void zPatTongue_Init(zLasso* lasso, xModelInstance* patmodel);
void zLasso_ResetTimer(zLasso* lasso, float32 interpTime);
void zLasso_InitTimer(zLasso* lasso, float32 interpTime);
void zLasso_Update(zLasso* lasso, xEnt* ent, float32 dt);
void zLasso_Render(zLasso* lasso);
void zLasso_Init(zLasso* lasso, xModelInstance* model, float32 x, float32 y, float32 z);

// zPatTongue_PopOff__Fv
// Start address: 0x2cae00
void zPatTongue_PopOff()
{
	float32 totalLen;
	float32 actualDensity;
	int32 i;
	int32 max_emit;
	xVec3* buffer;
	xVec3* loc;
	xVec3* vel;
	int32 emitted;
	float32 segEmit;
	float32 rightRand;
	// Line 2369, Address: 0x2cae00, Func Offset: 0
	// Line 2372, Address: 0x2cae04, Func Offset: 0x4
	// Line 2369, Address: 0x2cae08, Func Offset: 0x8
	// Line 2372, Address: 0x2cae38, Func Offset: 0x38
	// Line 2373, Address: 0x2cae40, Func Offset: 0x40
	// Line 2374, Address: 0x2cae48, Func Offset: 0x48
	// Line 2373, Address: 0x2cae4c, Func Offset: 0x4c
	// Line 2374, Address: 0x2cae50, Func Offset: 0x50
	// Line 2375, Address: 0x2cae68, Func Offset: 0x68
	// Line 2376, Address: 0x2cae6c, Func Offset: 0x6c
	// Line 2375, Address: 0x2cae70, Func Offset: 0x70
	// Line 2376, Address: 0x2cae74, Func Offset: 0x74
	// Line 2375, Address: 0x2cae78, Func Offset: 0x78
	// Line 2376, Address: 0x2caeb0, Func Offset: 0xb0
	// Line 2377, Address: 0x2caeb8, Func Offset: 0xb8
	// Line 2380, Address: 0x2caed4, Func Offset: 0xd4
	// Line 2381, Address: 0x2caee4, Func Offset: 0xe4
	// Line 2383, Address: 0x2caefc, Func Offset: 0xfc
	// Line 2384, Address: 0x2caf10, Func Offset: 0x110
	// Line 2385, Address: 0x2caf18, Func Offset: 0x118
	// Line 2390, Address: 0x2caf20, Func Offset: 0x120
	// Line 2391, Address: 0x2caf38, Func Offset: 0x138
	// Line 2392, Address: 0x2caf44, Func Offset: 0x144
	// Line 2393, Address: 0x2caf4c, Func Offset: 0x14c
	// Line 2395, Address: 0x2caf54, Func Offset: 0x154
	// Line 2392, Address: 0x2caf58, Func Offset: 0x158
	// Line 2395, Address: 0x2caf5c, Func Offset: 0x15c
	// Line 2394, Address: 0x2caf60, Func Offset: 0x160
	// Line 2395, Address: 0x2caf64, Func Offset: 0x164
	// Line 2396, Address: 0x2caf7c, Func Offset: 0x17c
	// Line 2398, Address: 0x2caf80, Func Offset: 0x180
	// Line 2396, Address: 0x2caf84, Func Offset: 0x184
	// Line 2398, Address: 0x2cafb8, Func Offset: 0x1b8
	// Line 2397, Address: 0x2cafbc, Func Offset: 0x1bc
	// Line 2396, Address: 0x2cafc0, Func Offset: 0x1c0
	// Line 2397, Address: 0x2cafc4, Func Offset: 0x1c4
	// Line 2398, Address: 0x2cafc8, Func Offset: 0x1c8
	// Line 2415, Address: 0x2cafd8, Func Offset: 0x1d8
	// Line 2399, Address: 0x2cb000, Func Offset: 0x200
	// Line 2415, Address: 0x2cb008, Func Offset: 0x208
	// Line 2399, Address: 0x2cb010, Func Offset: 0x210
	// Line 2415, Address: 0x2cb058, Func Offset: 0x258
	// Line 2400, Address: 0x2cb060, Func Offset: 0x260
	// Line 2415, Address: 0x2cb068, Func Offset: 0x268
	// Line 2400, Address: 0x2cb070, Func Offset: 0x270
	// Line 2415, Address: 0x2cb0a4, Func Offset: 0x2a4
	// Line 2400, Address: 0x2cb0b0, Func Offset: 0x2b0
	// Line 2415, Address: 0x2cb0b8, Func Offset: 0x2b8
	// Line 2400, Address: 0x2cb0c4, Func Offset: 0x2c4
	// Line 2415, Address: 0x2cb0cc, Func Offset: 0x2cc
	// Line 2400, Address: 0x2cb0d8, Func Offset: 0x2d8
	// Line 2415, Address: 0x2cb0e0, Func Offset: 0x2e0
	// Line 2401, Address: 0x2cb0ec, Func Offset: 0x2ec
	// Line 2415, Address: 0x2cb0f4, Func Offset: 0x2f4
	// Line 2401, Address: 0x2cb0fc, Func Offset: 0x2fc
	// Line 2415, Address: 0x2cb148, Func Offset: 0x348
	// Line 2401, Address: 0x2cb14c, Func Offset: 0x34c
	// Line 2415, Address: 0x2cb154, Func Offset: 0x354
	// Line 2402, Address: 0x2cb160, Func Offset: 0x360
	// Line 2415, Address: 0x2cb168, Func Offset: 0x368
	// Line 2402, Address: 0x2cb170, Func Offset: 0x370
	// Line 2415, Address: 0x2cb1bc, Func Offset: 0x3bc
	// Line 2402, Address: 0x2cb1c0, Func Offset: 0x3c0
	// Line 2415, Address: 0x2cb1c8, Func Offset: 0x3c8
	// Line 2403, Address: 0x2cb1d4, Func Offset: 0x3d4
	// Line 2415, Address: 0x2cb1dc, Func Offset: 0x3dc
	// Line 2403, Address: 0x2cb1e4, Func Offset: 0x3e4
	// Line 2415, Address: 0x2cb230, Func Offset: 0x430
	// Line 2403, Address: 0x2cb234, Func Offset: 0x434
	// Line 2415, Address: 0x2cb23c, Func Offset: 0x43c
	// Line 2404, Address: 0x2cb244, Func Offset: 0x444
	// Line 2415, Address: 0x2cb24c, Func Offset: 0x44c
	// Line 2404, Address: 0x2cb254, Func Offset: 0x454
	// Line 2415, Address: 0x2cb294, Func Offset: 0x494
	// Line 2405, Address: 0x2cb29c, Func Offset: 0x49c
	// Line 2415, Address: 0x2cb2a4, Func Offset: 0x4a4
	// Line 2405, Address: 0x2cb2ac, Func Offset: 0x4ac
	// Line 2415, Address: 0x2cb2ec, Func Offset: 0x4ec
	// Line 2406, Address: 0x2cb2f4, Func Offset: 0x4f4
	// Line 2415, Address: 0x2cb2fc, Func Offset: 0x4fc
	// Line 2406, Address: 0x2cb304, Func Offset: 0x504
	// Line 2415, Address: 0x2cb334, Func Offset: 0x534
	// Line 2406, Address: 0x2cb340, Func Offset: 0x540
	// Line 2415, Address: 0x2cb350, Func Offset: 0x550
	// Line 2413, Address: 0x2cb35c, Func Offset: 0x55c
	// Line 2414, Address: 0x2cb36c, Func Offset: 0x56c
	// Line 2415, Address: 0x2cb370, Func Offset: 0x570
	// Line 2417, Address: 0x2cb380, Func Offset: 0x580
	// Line 2422, Address: 0x2cb388, Func Offset: 0x588
	// Line 2423, Address: 0x2cb3a0, Func Offset: 0x5a0
	// Line 2424, Address: 0x2cb3a8, Func Offset: 0x5a8
	// Line 2425, Address: 0x2cb3ac, Func Offset: 0x5ac
	// Func End, Address: 0x2cb3e4, Func Offset: 0x5e4
}

// zPatTongue_Render__FP6zLasso
// Start address: 0x2cb3f0
void zPatTongue_Render(zLasso* lasso)
{
	RxObjSpace3DVertex* currvert;
	IMLightKit imlkit;
	int32 i;
	xVec3 tippos;
	xVec3 tiptag;
	xVec3 teethtag;
	xVec3 mouthtag;
	xVec3 ignoreNorm;
	xVec3 tonguevec;
	xVec3 mouthvec;
	float32 totaldist;
	float32 tipsin;
	float32 tipangle;
	xMat4x3* tipmat;
	xVec3 hitchpos;
	xVec3 mouthToTeeth;
	xMat3x3 rotmat;
	float32 distLerp;
	int32 numsegments;
	xVec3 seglinear[13];
	float32 seglerp[13];
	float32 segscale[13];
	float32 invdistsqr;
	float32 tongueScale;
	float32 slope;
	float32 normadjust;
	xVec3 inside_normvec;
	xVec3 tangent_vec;
	int32 currsegidx;
	xVec3 start_xsect[24];
	xVec3 end_xsect[24];
	int32 seg;
	xVec3 xsectbuf[24][4];
	xVec3* curr_xsect[4];
	RxObjSpace3DVertex* xsectStartVert;
	xVec3* xsectA;
	xVec3* xsectB;
	uint8 color[4];
	RwRGBA* _col;
	RwRGBA* _col;
	xVec3* tmpxsect;
	// Line 2003, Address: 0x2cb3f0, Func Offset: 0
	// Line 2008, Address: 0x2cb438, Func Offset: 0x48
	// Line 2006, Address: 0x2cb43c, Func Offset: 0x4c
	// Line 2008, Address: 0x2cb440, Func Offset: 0x50
	// Line 2022, Address: 0x2cb44c, Func Offset: 0x5c
	// Line 2025, Address: 0x2cb450, Func Offset: 0x60
	// Line 2022, Address: 0x2cb454, Func Offset: 0x64
	// Line 2025, Address: 0x2cb458, Func Offset: 0x68
	// Line 2027, Address: 0x2cb474, Func Offset: 0x84
	// Line 2029, Address: 0x2cb490, Func Offset: 0xa0
	// Line 2038, Address: 0x2cb4b8, Func Offset: 0xc8
	// Line 2041, Address: 0x2cb4c0, Func Offset: 0xd0
	// Line 2044, Address: 0x2cb524, Func Offset: 0x134
	// Line 2049, Address: 0x2cb53c, Func Offset: 0x14c
	// Line 2050, Address: 0x2cb568, Func Offset: 0x178
	// Line 2049, Address: 0x2cb56c, Func Offset: 0x17c
	// Line 2050, Address: 0x2cb574, Func Offset: 0x184
	// Line 2049, Address: 0x2cb578, Func Offset: 0x188
	// Line 2050, Address: 0x2cb5bc, Func Offset: 0x1cc
	// Line 2054, Address: 0x2cb5c8, Func Offset: 0x1d8
	// Line 2051, Address: 0x2cb5d4, Func Offset: 0x1e4
	// Line 2057, Address: 0x2cb5d8, Func Offset: 0x1e8
	// Line 2051, Address: 0x2cb5dc, Func Offset: 0x1ec
	// Line 2057, Address: 0x2cb5e0, Func Offset: 0x1f0
	// Line 2050, Address: 0x2cb5e4, Func Offset: 0x1f4
	// Line 2057, Address: 0x2cb5e8, Func Offset: 0x1f8
	// Line 2051, Address: 0x2cb5ec, Func Offset: 0x1fc
	// Line 2052, Address: 0x2cb5f0, Func Offset: 0x200
	// Line 2050, Address: 0x2cb5f4, Func Offset: 0x204
	// Line 2057, Address: 0x2cb5fc, Func Offset: 0x20c
	// Line 2052, Address: 0x2cb628, Func Offset: 0x238
	// Line 2054, Address: 0x2cb630, Func Offset: 0x240
	// Line 2057, Address: 0x2cb640, Func Offset: 0x250
	// Line 2054, Address: 0x2cb64c, Func Offset: 0x25c
	// Line 2057, Address: 0x2cb668, Func Offset: 0x278
	// Line 2054, Address: 0x2cb66c, Func Offset: 0x27c
	// Line 2057, Address: 0x2cb674, Func Offset: 0x284
	// Line 2063, Address: 0x2cb6e8, Func Offset: 0x2f8
	// Line 2064, Address: 0x2cb6f4, Func Offset: 0x304
	// Line 2067, Address: 0x2cb704, Func Offset: 0x314
	// Line 2068, Address: 0x2cb714, Func Offset: 0x324
	// Line 2069, Address: 0x2cb738, Func Offset: 0x348
	// Line 2071, Address: 0x2cb740, Func Offset: 0x350
	// Line 2072, Address: 0x2cb774, Func Offset: 0x384
	// Line 2071, Address: 0x2cb778, Func Offset: 0x388
	// Line 2072, Address: 0x2cb77c, Func Offset: 0x38c
	// Line 2073, Address: 0x2cb794, Func Offset: 0x3a4
	// Line 2076, Address: 0x2cb7e4, Func Offset: 0x3f4
	// Line 2077, Address: 0x2cb868, Func Offset: 0x478
	// Line 2078, Address: 0x2cb874, Func Offset: 0x484
	// Line 2081, Address: 0x2cb880, Func Offset: 0x490
	// Line 2082, Address: 0x2cb894, Func Offset: 0x4a4
	// Line 2083, Address: 0x2cb8ac, Func Offset: 0x4bc
	// Line 2085, Address: 0x2cb8b4, Func Offset: 0x4c4
	// Line 2086, Address: 0x2cb8dc, Func Offset: 0x4ec
	// Line 2085, Address: 0x2cb8e0, Func Offset: 0x4f0
	// Line 2086, Address: 0x2cb8e4, Func Offset: 0x4f4
	// Line 2087, Address: 0x2cb8fc, Func Offset: 0x50c
	// Line 2094, Address: 0x2cb94c, Func Offset: 0x55c
	// Line 2095, Address: 0x2cb964, Func Offset: 0x574
	// Line 2094, Address: 0x2cb968, Func Offset: 0x578
	// Line 2095, Address: 0x2cb978, Func Offset: 0x588
	// Line 2094, Address: 0x2cb984, Func Offset: 0x594
	// Line 2095, Address: 0x2cb988, Func Offset: 0x598
	// Line 2101, Address: 0x2cb9b8, Func Offset: 0x5c8
	// Line 2106, Address: 0x2cb9c4, Func Offset: 0x5d4
	// Line 2101, Address: 0x2cb9c8, Func Offset: 0x5d8
	// Line 2102, Address: 0x2cb9cc, Func Offset: 0x5dc
	// Line 2101, Address: 0x2cb9d0, Func Offset: 0x5e0
	// Line 2102, Address: 0x2cba04, Func Offset: 0x614
	// Line 2101, Address: 0x2cba14, Func Offset: 0x624
	// Line 2102, Address: 0x2cba18, Func Offset: 0x628
	// Line 2103, Address: 0x2cba20, Func Offset: 0x630
	// Line 2106, Address: 0x2cba30, Func Offset: 0x640
	// Line 2107, Address: 0x2cba38, Func Offset: 0x648
	// Line 2109, Address: 0x2cba3c, Func Offset: 0x64c
	// Line 2107, Address: 0x2cba44, Func Offset: 0x654
	// Line 2108, Address: 0x2cba60, Func Offset: 0x670
	// Line 2109, Address: 0x2cbab0, Func Offset: 0x6c0
	// Line 2110, Address: 0x2cbab8, Func Offset: 0x6c8
	// Line 2114, Address: 0x2cbabc, Func Offset: 0x6cc
	// Line 2110, Address: 0x2cbac0, Func Offset: 0x6d0
	// Line 2114, Address: 0x2cbac4, Func Offset: 0x6d4
	// Line 2110, Address: 0x2cbac8, Func Offset: 0x6d8
	// Line 2114, Address: 0x2cbacc, Func Offset: 0x6dc
	// Line 2110, Address: 0x2cbad0, Func Offset: 0x6e0
	// Line 2111, Address: 0x2cbad4, Func Offset: 0x6e4
	// Line 2110, Address: 0x2cbae0, Func Offset: 0x6f0
	// Line 2111, Address: 0x2cbb24, Func Offset: 0x734
	// Line 2114, Address: 0x2cbb34, Func Offset: 0x744
	// Line 2118, Address: 0x2cbb44, Func Offset: 0x754
	// Line 2120, Address: 0x2cbb8c, Func Offset: 0x79c
	// Line 2122, Address: 0x2cbb94, Func Offset: 0x7a4
	// Line 2123, Address: 0x2cbba0, Func Offset: 0x7b0
	// Line 2125, Address: 0x2cbba4, Func Offset: 0x7b4
	// Line 2123, Address: 0x2cbbac, Func Offset: 0x7bc
	// Line 2124, Address: 0x2cbbc8, Func Offset: 0x7d8
	// Line 2125, Address: 0x2cbc18, Func Offset: 0x828
	// Line 2126, Address: 0x2cbc20, Func Offset: 0x830
	// Line 2130, Address: 0x2cbc24, Func Offset: 0x834
	// Line 2126, Address: 0x2cbc28, Func Offset: 0x838
	// Line 2130, Address: 0x2cbc2c, Func Offset: 0x83c
	// Line 2126, Address: 0x2cbc30, Func Offset: 0x840
	// Line 2130, Address: 0x2cbc34, Func Offset: 0x844
	// Line 2126, Address: 0x2cbc38, Func Offset: 0x848
	// Line 2127, Address: 0x2cbc3c, Func Offset: 0x84c
	// Line 2126, Address: 0x2cbc48, Func Offset: 0x858
	// Line 2127, Address: 0x2cbc8c, Func Offset: 0x89c
	// Line 2130, Address: 0x2cbc9c, Func Offset: 0x8ac
	// Line 2143, Address: 0x2cbcac, Func Offset: 0x8bc
	// Line 2144, Address: 0x2cbcc0, Func Offset: 0x8d0
	// Line 2145, Address: 0x2cbcd0, Func Offset: 0x8e0
	// Line 2146, Address: 0x2cbcdc, Func Offset: 0x8ec
	// Line 2156, Address: 0x2cbcec, Func Offset: 0x8fc
	// Line 2157, Address: 0x2cbcf0, Func Offset: 0x900
	// Line 2156, Address: 0x2cbcf4, Func Offset: 0x904
	// Line 2160, Address: 0x2cbcf8, Func Offset: 0x908
	// Line 2161, Address: 0x2cbd00, Func Offset: 0x910
	// Line 2158, Address: 0x2cbd04, Func Offset: 0x914
	// Line 2156, Address: 0x2cbd0c, Func Offset: 0x91c
	// Line 2158, Address: 0x2cbd1c, Func Offset: 0x92c
	// Line 2160, Address: 0x2cbd20, Func Offset: 0x930
	// Line 2158, Address: 0x2cbd24, Func Offset: 0x934
	// Line 2160, Address: 0x2cbd28, Func Offset: 0x938
	// Line 2156, Address: 0x2cbd2c, Func Offset: 0x93c
	// Line 2161, Address: 0x2cbd30, Func Offset: 0x940
	// Line 2160, Address: 0x2cbd34, Func Offset: 0x944
	// Line 2156, Address: 0x2cbd38, Func Offset: 0x948
	// Line 2159, Address: 0x2cbd3c, Func Offset: 0x94c
	// Line 2157, Address: 0x2cbd44, Func Offset: 0x954
	// Line 2156, Address: 0x2cbd48, Func Offset: 0x958
	// Line 2159, Address: 0x2cbd54, Func Offset: 0x964
	// Line 2157, Address: 0x2cbd5c, Func Offset: 0x96c
	// Line 2167, Address: 0x2cbd60, Func Offset: 0x970
	// Line 2160, Address: 0x2cbd68, Func Offset: 0x978
	// Line 2159, Address: 0x2cbd6c, Func Offset: 0x97c
	// Line 2156, Address: 0x2cbd70, Func Offset: 0x980
	// Line 2160, Address: 0x2cbd80, Func Offset: 0x990
	// Line 2156, Address: 0x2cbd84, Func Offset: 0x994
	// Line 2160, Address: 0x2cbd88, Func Offset: 0x998
	// Line 2158, Address: 0x2cbd90, Func Offset: 0x9a0
	// Line 2156, Address: 0x2cbd9c, Func Offset: 0x9ac
	// Line 2158, Address: 0x2cbda0, Func Offset: 0x9b0
	// Line 2156, Address: 0x2cbda4, Func Offset: 0x9b4
	// Line 2159, Address: 0x2cbda8, Func Offset: 0x9b8
	// Line 2166, Address: 0x2cbdac, Func Offset: 0x9bc
	// Line 2156, Address: 0x2cbdb0, Func Offset: 0x9c0
	// Line 2158, Address: 0x2cbdb4, Func Offset: 0x9c4
	// Line 2166, Address: 0x2cbdc0, Func Offset: 0x9d0
	// Line 2158, Address: 0x2cbdc4, Func Offset: 0x9d4
	// Line 2156, Address: 0x2cbdcc, Func Offset: 0x9dc
	// Line 2159, Address: 0x2cbdd0, Func Offset: 0x9e0
	// Line 2156, Address: 0x2cbdd4, Func Offset: 0x9e4
	// Line 2159, Address: 0x2cbdd8, Func Offset: 0x9e8
	// Line 2157, Address: 0x2cbddc, Func Offset: 0x9ec
	// Line 2159, Address: 0x2cbde0, Func Offset: 0x9f0
	// Line 2166, Address: 0x2cbde4, Func Offset: 0x9f4
	// Line 2159, Address: 0x2cbde8, Func Offset: 0x9f8
	// Line 2166, Address: 0x2cbdec, Func Offset: 0x9fc
	// Line 2157, Address: 0x2cbdf0, Func Offset: 0xa00
	// Line 2159, Address: 0x2cbdf8, Func Offset: 0xa08
	// Line 2166, Address: 0x2cbe18, Func Offset: 0xa28
	// Line 2159, Address: 0x2cbe1c, Func Offset: 0xa2c
	// Line 2166, Address: 0x2cbe20, Func Offset: 0xa30
	// Line 2157, Address: 0x2cbe34, Func Offset: 0xa44
	// Line 2161, Address: 0x2cbe38, Func Offset: 0xa48
	// Line 2167, Address: 0x2cbe3c, Func Offset: 0xa4c
	// Line 2156, Address: 0x2cbe40, Func Offset: 0xa50
	// Line 2159, Address: 0x2cbe4c, Func Offset: 0xa5c
	// Line 2166, Address: 0x2cbe50, Func Offset: 0xa60
	// Line 2167, Address: 0x2cbe58, Func Offset: 0xa68
	// Line 2169, Address: 0x2cbe64, Func Offset: 0xa74
	// Line 2171, Address: 0x2cbe88, Func Offset: 0xa98
	// Line 2173, Address: 0x2cbeac, Func Offset: 0xabc
	// Line 2175, Address: 0x2cbecc, Func Offset: 0xadc
	// Line 2177, Address: 0x2cbef0, Func Offset: 0xb00
	// Line 2179, Address: 0x2cbf14, Func Offset: 0xb24
	// Line 2180, Address: 0x2cbf1c, Func Offset: 0xb2c
	// Line 2182, Address: 0x2cbf20, Func Offset: 0xb30
	// Line 2184, Address: 0x2cbf54, Func Offset: 0xb64
	// Line 2182, Address: 0x2cbf58, Func Offset: 0xb68
	// Line 2184, Address: 0x2cbf5c, Func Offset: 0xb6c
	// Line 2183, Address: 0x2cbf68, Func Offset: 0xb78
	// Line 2184, Address: 0x2cbf8c, Func Offset: 0xb9c
	// Line 2185, Address: 0x2cbfa0, Func Offset: 0xbb0
	// Line 2186, Address: 0x2cbfc4, Func Offset: 0xbd4
	// Line 2185, Address: 0x2cbfc8, Func Offset: 0xbd8
	// Line 2186, Address: 0x2cbfd0, Func Offset: 0xbe0
	// Line 2185, Address: 0x2cbfd4, Func Offset: 0xbe4
	// Line 2186, Address: 0x2cbfd8, Func Offset: 0xbe8
	// Line 2185, Address: 0x2cbfdc, Func Offset: 0xbec
	// Line 2191, Address: 0x2cbfe0, Func Offset: 0xbf0
	// Line 2185, Address: 0x2cbfe4, Func Offset: 0xbf4
	// Line 2186, Address: 0x2cbfe8, Func Offset: 0xbf8
	// Line 2185, Address: 0x2cbff4, Func Offset: 0xc04
	// Line 2191, Address: 0x2cbffc, Func Offset: 0xc0c
	// Line 2185, Address: 0x2cc000, Func Offset: 0xc10
	// Line 2191, Address: 0x2cc004, Func Offset: 0xc14
	// Line 2185, Address: 0x2cc00c, Func Offset: 0xc1c
	// Line 2193, Address: 0x2cc014, Func Offset: 0xc24
	// Line 2185, Address: 0x2cc018, Func Offset: 0xc28
	// Line 2193, Address: 0x2cc020, Func Offset: 0xc30
	// Line 2194, Address: 0x2cc080, Func Offset: 0xc90
	// Line 2193, Address: 0x2cc084, Func Offset: 0xc94
	// Line 2194, Address: 0x2cc088, Func Offset: 0xc98
	// Line 2193, Address: 0x2cc08c, Func Offset: 0xc9c
	// Line 2194, Address: 0x2cc094, Func Offset: 0xca4
	// Line 2195, Address: 0x2cc09c, Func Offset: 0xcac
	// Line 2196, Address: 0x2cc15c, Func Offset: 0xd6c
	// Line 2195, Address: 0x2cc164, Func Offset: 0xd74
	// Line 2196, Address: 0x2cc178, Func Offset: 0xd88
	// Line 2200, Address: 0x2cc180, Func Offset: 0xd90
	// Line 2205, Address: 0x2cc194, Func Offset: 0xda4
	// Line 2200, Address: 0x2cc198, Func Offset: 0xda8
	// Line 2205, Address: 0x2cc19c, Func Offset: 0xdac
	// Line 2200, Address: 0x2cc1a0, Func Offset: 0xdb0
	// Line 2205, Address: 0x2cc1d4, Func Offset: 0xde4
	// Line 2200, Address: 0x2cc1d8, Func Offset: 0xde8
	// Line 2206, Address: 0x2cc1e0, Func Offset: 0xdf0
	// Line 2202, Address: 0x2cc1ec, Func Offset: 0xdfc
	// Line 2205, Address: 0x2cc214, Func Offset: 0xe24
	// Line 2206, Address: 0x2cc228, Func Offset: 0xe38
	// Line 2209, Address: 0x2cc240, Func Offset: 0xe50
	// Line 2207, Address: 0x2cc244, Func Offset: 0xe54
	// Line 2209, Address: 0x2cc248, Func Offset: 0xe58
	// Line 2208, Address: 0x2cc24c, Func Offset: 0xe5c
	// Line 2209, Address: 0x2cc290, Func Offset: 0xea0
	// Line 2219, Address: 0x2cc298, Func Offset: 0xea8
	// Line 2218, Address: 0x2cc29c, Func Offset: 0xeac
	// Line 2219, Address: 0x2cc2a0, Func Offset: 0xeb0
	// Line 2218, Address: 0x2cc2a4, Func Offset: 0xeb4
	// Line 2220, Address: 0x2cc2a8, Func Offset: 0xeb8
	// Line 2218, Address: 0x2cc2ac, Func Offset: 0xebc
	// Line 2219, Address: 0x2cc2b0, Func Offset: 0xec0
	// Line 2218, Address: 0x2cc2bc, Func Offset: 0xecc
	// Line 2219, Address: 0x2cc2d4, Func Offset: 0xee4
	// Line 2218, Address: 0x2cc2e0, Func Offset: 0xef0
	// Line 2219, Address: 0x2cc2e8, Func Offset: 0xef8
	// Line 2218, Address: 0x2cc2f4, Func Offset: 0xf04
	// Line 2219, Address: 0x2cc300, Func Offset: 0xf10
	// Line 2218, Address: 0x2cc308, Func Offset: 0xf18
	// Line 2219, Address: 0x2cc30c, Func Offset: 0xf1c
	// Line 2218, Address: 0x2cc310, Func Offset: 0xf20
	// Line 2219, Address: 0x2cc314, Func Offset: 0xf24
	// Line 2218, Address: 0x2cc320, Func Offset: 0xf30
	// Line 2219, Address: 0x2cc328, Func Offset: 0xf38
	// Line 2218, Address: 0x2cc330, Func Offset: 0xf40
	// Line 2220, Address: 0x2cc334, Func Offset: 0xf44
	// Line 2221, Address: 0x2cc33c, Func Offset: 0xf4c
	// Line 2222, Address: 0x2cc35c, Func Offset: 0xf6c
	// Line 2223, Address: 0x2cc374, Func Offset: 0xf84
	// Line 2224, Address: 0x2cc384, Func Offset: 0xf94
	// Line 2223, Address: 0x2cc38c, Func Offset: 0xf9c
	// Line 2224, Address: 0x2cc398, Func Offset: 0xfa8
	// Line 2225, Address: 0x2cc3b4, Func Offset: 0xfc4
	// Line 2224, Address: 0x2cc3b8, Func Offset: 0xfc8
	// Line 2225, Address: 0x2cc3bc, Func Offset: 0xfcc
	// Line 2226, Address: 0x2cc3d8, Func Offset: 0xfe8
	// Line 2227, Address: 0x2cc3e4, Func Offset: 0xff4
	// Line 2228, Address: 0x2cc3e8, Func Offset: 0xff8
	// Line 2227, Address: 0x2cc3ec, Func Offset: 0xffc
	// Line 2228, Address: 0x2cc3f4, Func Offset: 0x1004
	// Line 2227, Address: 0x2cc3f8, Func Offset: 0x1008
	// Line 2228, Address: 0x2cc420, Func Offset: 0x1030
	// Line 2230, Address: 0x2cc434, Func Offset: 0x1044
	// Line 2229, Address: 0x2cc440, Func Offset: 0x1050
	// Line 2230, Address: 0x2cc44c, Func Offset: 0x105c
	// Line 2231, Address: 0x2cc458, Func Offset: 0x1068
	// Line 2229, Address: 0x2cc45c, Func Offset: 0x106c
	// Line 2231, Address: 0x2cc460, Func Offset: 0x1070
	// Line 2233, Address: 0x2cc468, Func Offset: 0x1078
	// Line 2235, Address: 0x2cc47c, Func Offset: 0x108c
	// Line 2236, Address: 0x2cc484, Func Offset: 0x1094
	// Line 2238, Address: 0x2cc490, Func Offset: 0x10a0
	// Line 2240, Address: 0x2cc49c, Func Offset: 0x10ac
	// Line 2238, Address: 0x2cc4a4, Func Offset: 0x10b4
	// Line 2241, Address: 0x2cc4a8, Func Offset: 0x10b8
	// Line 2239, Address: 0x2cc4b0, Func Offset: 0x10c0
	// Line 2240, Address: 0x2cc4bc, Func Offset: 0x10cc
	// Line 2241, Address: 0x2cc4c0, Func Offset: 0x10d0
	// Line 2240, Address: 0x2cc4c4, Func Offset: 0x10d4
	// Line 2239, Address: 0x2cc4c8, Func Offset: 0x10d8
	// Line 2240, Address: 0x2cc4d0, Func Offset: 0x10e0
	// Line 2241, Address: 0x2cc4dc, Func Offset: 0x10ec
	// Line 2239, Address: 0x2cc4e8, Func Offset: 0x10f8
	// Line 2241, Address: 0x2cc4ec, Func Offset: 0x10fc
	// Line 2250, Address: 0x2cc4f0, Func Offset: 0x1100
	// Line 2251, Address: 0x2cc508, Func Offset: 0x1118
	// Line 2253, Address: 0x2cc530, Func Offset: 0x1140
	// Line 2251, Address: 0x2cc534, Func Offset: 0x1144
	// Line 2253, Address: 0x2cc538, Func Offset: 0x1148
	// Line 2251, Address: 0x2cc53c, Func Offset: 0x114c
	// Line 2253, Address: 0x2cc540, Func Offset: 0x1150
	// Line 2254, Address: 0x2cc548, Func Offset: 0x1158
	// Line 2255, Address: 0x2cc55c, Func Offset: 0x116c
	// Line 2257, Address: 0x2cc584, Func Offset: 0x1194
	// Line 2255, Address: 0x2cc588, Func Offset: 0x1198
	// Line 2257, Address: 0x2cc58c, Func Offset: 0x119c
	// Line 2255, Address: 0x2cc590, Func Offset: 0x11a0
	// Line 2257, Address: 0x2cc594, Func Offset: 0x11a4
	// Line 2263, Address: 0x2cc59c, Func Offset: 0x11ac
	// Line 2264, Address: 0x2cc5b4, Func Offset: 0x11c4
	// Line 2265, Address: 0x2cc5b8, Func Offset: 0x11c8
	// Line 2266, Address: 0x2cc5d4, Func Offset: 0x11e4
	// Line 2265, Address: 0x2cc5d8, Func Offset: 0x11e8
	// Line 2266, Address: 0x2cc5dc, Func Offset: 0x11ec
	// Line 2265, Address: 0x2cc5e0, Func Offset: 0x11f0
	// Line 2266, Address: 0x2cc5ec, Func Offset: 0x11fc
	// Line 2267, Address: 0x2cc5f4, Func Offset: 0x1204
	// Line 2268, Address: 0x2cc5fc, Func Offset: 0x120c
	// Line 2269, Address: 0x2cc604, Func Offset: 0x1214
	// Line 2272, Address: 0x2cc61c, Func Offset: 0x122c
	// Line 2273, Address: 0x2cc630, Func Offset: 0x1240
	// Line 2274, Address: 0x2cc634, Func Offset: 0x1244
	// Line 2281, Address: 0x2cc63c, Func Offset: 0x124c
	// Line 2272, Address: 0x2cc644, Func Offset: 0x1254
	// Line 2274, Address: 0x2cc654, Func Offset: 0x1264
	// Line 2272, Address: 0x2cc658, Func Offset: 0x1268
	// Line 2273, Address: 0x2cc688, Func Offset: 0x1298
	// Line 2272, Address: 0x2cc68c, Func Offset: 0x129c
	// Line 2274, Address: 0x2cc690, Func Offset: 0x12a0
	// Line 2281, Address: 0x2cc6ac, Func Offset: 0x12bc
	// Line 2284, Address: 0x2cc6cc, Func Offset: 0x12dc
	// Line 2286, Address: 0x2cc714, Func Offset: 0x1324
	// Line 2291, Address: 0x2cc720, Func Offset: 0x1330
	// Line 2292, Address: 0x2cc72c, Func Offset: 0x133c
	// Line 2293, Address: 0x2cc744, Func Offset: 0x1354
	// Line 2296, Address: 0x2cc748, Func Offset: 0x1358
	// Line 2298, Address: 0x2cc750, Func Offset: 0x1360
	// Line 2299, Address: 0x2cc754, Func Offset: 0x1364
	// Line 2296, Address: 0x2cc758, Func Offset: 0x1368
	// Line 2300, Address: 0x2cc760, Func Offset: 0x1370
	// Line 2307, Address: 0x2cc778, Func Offset: 0x1388
	// Line 2309, Address: 0x2cc77c, Func Offset: 0x138c
	// Line 2307, Address: 0x2cc780, Func Offset: 0x1390
	// Line 2309, Address: 0x2cc784, Func Offset: 0x1394
	// Line 2307, Address: 0x2cc788, Func Offset: 0x1398
	// Line 2310, Address: 0x2cc78c, Func Offset: 0x139c
	// Line 2308, Address: 0x2cc790, Func Offset: 0x13a0
	// Line 2310, Address: 0x2cc794, Func Offset: 0x13a4
	// Line 2312, Address: 0x2cc798, Func Offset: 0x13a8
	// Line 2307, Address: 0x2cc7ac, Func Offset: 0x13bc
	// Line 2308, Address: 0x2cc7b8, Func Offset: 0x13c8
	// Line 2309, Address: 0x2cc7d4, Func Offset: 0x13e4
	// Line 2312, Address: 0x2cc7d8, Func Offset: 0x13e8
	// Line 2318, Address: 0x2cc7e0, Func Offset: 0x13f0
	// Line 2320, Address: 0x2cc7e4, Func Offset: 0x13f4
	// Line 2318, Address: 0x2cc7e8, Func Offset: 0x13f8
	// Line 2320, Address: 0x2cc7ec, Func Offset: 0x13fc
	// Line 2318, Address: 0x2cc7f0, Func Offset: 0x1400
	// Line 2321, Address: 0x2cc7f4, Func Offset: 0x1404
	// Line 2319, Address: 0x2cc7f8, Func Offset: 0x1408
	// Line 2321, Address: 0x2cc7fc, Func Offset: 0x140c
	// Line 2326, Address: 0x2cc800, Func Offset: 0x1410
	// Line 2324, Address: 0x2cc804, Func Offset: 0x1414
	// Line 2326, Address: 0x2cc808, Func Offset: 0x1418
	// Line 2318, Address: 0x2cc80c, Func Offset: 0x141c
	// Line 2325, Address: 0x2cc810, Func Offset: 0x1420
	// Line 2318, Address: 0x2cc814, Func Offset: 0x1424
	// Line 2319, Address: 0x2cc81c, Func Offset: 0x142c
	// Line 2320, Address: 0x2cc838, Func Offset: 0x1448
	// Line 2321, Address: 0x2cc83c, Func Offset: 0x144c
	// Line 2326, Address: 0x2cc840, Func Offset: 0x1450
	// Line 2334, Address: 0x2cc848, Func Offset: 0x1458
	// Line 2343, Address: 0x2cc854, Func Offset: 0x1464
	// Line 2329, Address: 0x2cc858, Func Offset: 0x1468
	// Line 2341, Address: 0x2cc85c, Func Offset: 0x146c
	// Line 2338, Address: 0x2cc860, Func Offset: 0x1470
	// Line 2329, Address: 0x2cc864, Func Offset: 0x1474
	// Line 2334, Address: 0x2cc86c, Func Offset: 0x147c
	// Line 2343, Address: 0x2cc870, Func Offset: 0x1480
	// Line 2334, Address: 0x2cc874, Func Offset: 0x1484
	// Line 2342, Address: 0x2cc87c, Func Offset: 0x148c
	// Line 2339, Address: 0x2cc880, Func Offset: 0x1490
	// Line 2329, Address: 0x2cc888, Func Offset: 0x1498
	// Line 2341, Address: 0x2cc898, Func Offset: 0x14a8
	// Line 2339, Address: 0x2cc89c, Func Offset: 0x14ac
	// Line 2341, Address: 0x2cc8a0, Func Offset: 0x14b0
	// Line 2340, Address: 0x2cc8a4, Func Offset: 0x14b4
	// Line 2329, Address: 0x2cc8a8, Func Offset: 0x14b8
	// Line 2340, Address: 0x2cc8ac, Func Offset: 0x14bc
	// Line 2329, Address: 0x2cc8b0, Func Offset: 0x14c0
	// Line 2330, Address: 0x2cc8f0, Func Offset: 0x1500
	// Line 2334, Address: 0x2cc950, Func Offset: 0x1560
	// Line 2331, Address: 0x2cc95c, Func Offset: 0x156c
	// Line 2334, Address: 0x2cc960, Func Offset: 0x1570
	// Line 2335, Address: 0x2cc964, Func Offset: 0x1574
	// Line 2334, Address: 0x2cc968, Func Offset: 0x1578
	// Line 2335, Address: 0x2cc9a4, Func Offset: 0x15b4
	// Line 2343, Address: 0x2cc9a8, Func Offset: 0x15b8
	// Line 2357, Address: 0x2cc9b0, Func Offset: 0x15c0
	// Line 2358, Address: 0x2cc9c8, Func Offset: 0x15d8
	// Line 2364, Address: 0x2cc9f8, Func Offset: 0x1608
	// Line 2365, Address: 0x2cca00, Func Offset: 0x1610
	// Line 2366, Address: 0x2cca08, Func Offset: 0x1618
	// Func End, Address: 0x2cca50, Func Offset: 0x1660
}

// IMLightKitLight__FP10IMLightKitP5xVec3PUcPUcPUc
// Start address: 0x2cca50
void IMLightKitLight(IMLightKit* imlkit, xVec3* norm, uint8* r, uint8* g, uint8* b)
{
	float32 red;
	float32 grn;
	float32 blu;
	// Line 1864, Address: 0x2cca50, Func Offset: 0
	// Line 1869, Address: 0x2cca54, Func Offset: 0x4
	// Line 1864, Address: 0x2cca58, Func Offset: 0x8
	// Line 1869, Address: 0x2cca5c, Func Offset: 0xc
	// Line 1864, Address: 0x2cca60, Func Offset: 0x10
	// Line 1869, Address: 0x2cca64, Func Offset: 0x14
	// Line 1870, Address: 0x2cca68, Func Offset: 0x18
	// Line 1869, Address: 0x2cca6c, Func Offset: 0x1c
	// Line 1870, Address: 0x2cca70, Func Offset: 0x20
	// Line 1869, Address: 0x2cca74, Func Offset: 0x24
	// Line 1870, Address: 0x2cca78, Func Offset: 0x28
	// Line 1869, Address: 0x2cca7c, Func Offset: 0x2c
	// Line 1870, Address: 0x2cca80, Func Offset: 0x30
	// Line 1871, Address: 0x2cca84, Func Offset: 0x34
	// Line 1870, Address: 0x2cca88, Func Offset: 0x38
	// Line 1871, Address: 0x2cca8c, Func Offset: 0x3c
	// Line 1870, Address: 0x2cca90, Func Offset: 0x40
	// Line 1871, Address: 0x2cca94, Func Offset: 0x44
	// Line 1869, Address: 0x2cca98, Func Offset: 0x48
	// Line 1872, Address: 0x2cca9c, Func Offset: 0x4c
	// Line 1871, Address: 0x2ccaa4, Func Offset: 0x54
	// Line 1872, Address: 0x2ccab0, Func Offset: 0x60
	// Line 1875, Address: 0x2ccabc, Func Offset: 0x6c
	// Line 1876, Address: 0x2ccad4, Func Offset: 0x84
	// Line 1877, Address: 0x2ccaf4, Func Offset: 0xa4
	// Line 1878, Address: 0x2ccb14, Func Offset: 0xc4
	// Line 1881, Address: 0x2ccb34, Func Offset: 0xe4
	// Line 1898, Address: 0x2ccb38, Func Offset: 0xe8
	// Line 1881, Address: 0x2ccb3c, Func Offset: 0xec
	// Line 1886, Address: 0x2ccb48, Func Offset: 0xf8
	// Line 1881, Address: 0x2ccb50, Func Offset: 0x100
	// Line 1886, Address: 0x2ccb64, Func Offset: 0x114
	// Line 1891, Address: 0x2ccb74, Func Offset: 0x124
	// Line 1881, Address: 0x2ccb78, Func Offset: 0x128
	// Line 1886, Address: 0x2ccb7c, Func Offset: 0x12c
	// Line 1891, Address: 0x2ccb88, Func Offset: 0x138
	// Line 1881, Address: 0x2ccb98, Func Offset: 0x148
	// Line 1886, Address: 0x2ccb9c, Func Offset: 0x14c
	// Line 1891, Address: 0x2ccba0, Func Offset: 0x150
	// Line 1898, Address: 0x2ccbb0, Func Offset: 0x160
	// Line 1900, Address: 0x2ccbb8, Func Offset: 0x168
	// Line 1901, Address: 0x2ccbbc, Func Offset: 0x16c
	// Line 1900, Address: 0x2ccbc0, Func Offset: 0x170
	// Line 1901, Address: 0x2ccbc8, Func Offset: 0x178
	// Line 1900, Address: 0x2ccbd0, Func Offset: 0x180
	// Line 1901, Address: 0x2ccbe4, Func Offset: 0x194
	// Line 1902, Address: 0x2ccbe8, Func Offset: 0x198
	// Line 1901, Address: 0x2ccbec, Func Offset: 0x19c
	// Line 1903, Address: 0x2ccbf4, Func Offset: 0x1a4
	// Line 1901, Address: 0x2ccbf8, Func Offset: 0x1a8
	// Line 1902, Address: 0x2ccbfc, Func Offset: 0x1ac
	// Line 1901, Address: 0x2ccc04, Func Offset: 0x1b4
	// Line 1903, Address: 0x2ccc08, Func Offset: 0x1b8
	// Line 1902, Address: 0x2ccc0c, Func Offset: 0x1bc
	// Line 1903, Address: 0x2ccc1c, Func Offset: 0x1cc
	// Line 1906, Address: 0x2ccc24, Func Offset: 0x1d4
	// Line 1902, Address: 0x2ccc28, Func Offset: 0x1d8
	// Line 1903, Address: 0x2ccc2c, Func Offset: 0x1dc
	// Line 1906, Address: 0x2ccc38, Func Offset: 0x1e8
	// Line 1907, Address: 0x2ccc4c, Func Offset: 0x1fc
	// Line 1908, Address: 0x2ccc6c, Func Offset: 0x21c
	// Line 1909, Address: 0x2ccc8c, Func Offset: 0x23c
	// Line 1912, Address: 0x2cccac, Func Offset: 0x25c
	// Line 1917, Address: 0x2cccbc, Func Offset: 0x26c
	// Line 1912, Address: 0x2cccc4, Func Offset: 0x274
	// Line 1917, Address: 0x2cccd4, Func Offset: 0x284
	// Line 1922, Address: 0x2ccce4, Func Offset: 0x294
	// Line 1912, Address: 0x2cccec, Func Offset: 0x29c
	// Line 1917, Address: 0x2cccf0, Func Offset: 0x2a0
	// Line 1922, Address: 0x2cccfc, Func Offset: 0x2ac
	// Line 1932, Address: 0x2ccd18, Func Offset: 0x2c8
	// Line 1933, Address: 0x2ccd7c, Func Offset: 0x32c
	// Line 1934, Address: 0x2ccde0, Func Offset: 0x390
	// Line 1935, Address: 0x2cce48, Func Offset: 0x3f8
	// Func End, Address: 0x2cce50, Func Offset: 0x400
}

// IMLightKitSetup__FP10IMLightKitP9xLightKit
// Start address: 0x2cce50
void IMLightKitSetup(IMLightKit* imlkit, xLightKit* lkit)
{
	uint32 i;
	uint32 numdir;
	float32* lightdir;
	float32* extraLightdir;
	xLightKitLight* light;
	RwMatrixTag* mat;
	// Line 1813, Address: 0x2cce50, Func Offset: 0
	// Line 1815, Address: 0x2cce54, Func Offset: 0x4
	// Line 1813, Address: 0x2cce58, Func Offset: 0x8
	// Line 1814, Address: 0x2cce64, Func Offset: 0x14
	// Line 1813, Address: 0x2cce68, Func Offset: 0x18
	// Line 1815, Address: 0x2cce74, Func Offset: 0x24
	// Line 1820, Address: 0x2cce7c, Func Offset: 0x2c
	// Line 1816, Address: 0x2cce80, Func Offset: 0x30
	// Line 1818, Address: 0x2cce84, Func Offset: 0x34
	// Line 1820, Address: 0x2cce88, Func Offset: 0x38
	// Line 1850, Address: 0x2cce94, Func Offset: 0x44
	// Line 1822, Address: 0x2ccea0, Func Offset: 0x50
	// Line 1824, Address: 0x2ccea4, Func Offset: 0x54
	// Line 1822, Address: 0x2ccea8, Func Offset: 0x58
	// Line 1821, Address: 0x2cceac, Func Offset: 0x5c
	// Line 1822, Address: 0x2cceb4, Func Offset: 0x64
	// Line 1824, Address: 0x2cced0, Func Offset: 0x80
	// Line 1825, Address: 0x2ccee4, Func Offset: 0x94
	// Line 1826, Address: 0x2ccef8, Func Offset: 0xa8
	// Line 1827, Address: 0x2ccf08, Func Offset: 0xb8
	// Line 1832, Address: 0x2ccf10, Func Offset: 0xc0
	// Line 1834, Address: 0x2ccf14, Func Offset: 0xc4
	// Line 1832, Address: 0x2ccf18, Func Offset: 0xc8
	// Line 1834, Address: 0x2ccf1c, Func Offset: 0xcc
	// Line 1845, Address: 0x2ccf24, Func Offset: 0xd4
	// Line 1846, Address: 0x2ccf30, Func Offset: 0xe0
	// Line 1849, Address: 0x2ccf38, Func Offset: 0xe8
	// Line 1854, Address: 0x2ccf3c, Func Offset: 0xec
	// Line 1846, Address: 0x2ccf40, Func Offset: 0xf0
	// Line 1847, Address: 0x2ccf48, Func Offset: 0xf8
	// Line 1848, Address: 0x2ccf54, Func Offset: 0x104
	// Line 1849, Address: 0x2ccf60, Func Offset: 0x110
	// Line 1850, Address: 0x2ccf6c, Func Offset: 0x11c
	// Line 1853, Address: 0x2ccf70, Func Offset: 0x120
	// Line 1850, Address: 0x2ccf74, Func Offset: 0x124
	// Line 1851, Address: 0x2ccf7c, Func Offset: 0x12c
	// Line 1852, Address: 0x2ccf88, Func Offset: 0x138
	// Line 1860, Address: 0x2ccf94, Func Offset: 0x144
	// Line 1861, Address: 0x2ccfb0, Func Offset: 0x160
	// Line 1835, Address: 0x2ccfc8, Func Offset: 0x178
	// Line 1861, Address: 0x2ccfcc, Func Offset: 0x17c
	// Line 1836, Address: 0x2ccfd4, Func Offset: 0x184
	// Line 1861, Address: 0x2ccfd8, Func Offset: 0x188
	// Line 1837, Address: 0x2ccfe0, Func Offset: 0x190
	// Line 1861, Address: 0x2ccfe4, Func Offset: 0x194
	// Line 1838, Address: 0x2ccff0, Func Offset: 0x1a0
	// Line 1861, Address: 0x2ccff4, Func Offset: 0x1a4
	// Line 1839, Address: 0x2ccffc, Func Offset: 0x1ac
	// Line 1861, Address: 0x2cd000, Func Offset: 0x1b0
	// Line 1840, Address: 0x2cd008, Func Offset: 0x1b8
	// Line 1843, Address: 0x2cd00c, Func Offset: 0x1bc
	// Line 1861, Address: 0x2cd018, Func Offset: 0x1c8
	// Func End, Address: 0x2cd030, Func Offset: 0x1e0
}

// CalcSegNormals__FP5xVec3P5xVec3P5xVec3
// Start address: 0x2cd030
void CalcSegNormals(xVec3* segA, xVec3* segB, xVec3* segC)
{
	int32 i;
	xVec3 normsum;
	xVec3* vright;
	xVec3* vleft;
	// Line 1759, Address: 0x2cd030, Func Offset: 0
	// Line 1762, Address: 0x2cd044, Func Offset: 0x14
	// Line 1759, Address: 0x2cd048, Func Offset: 0x18
	// Line 1762, Address: 0x2cd05c, Func Offset: 0x2c
	// Line 1759, Address: 0x2cd060, Func Offset: 0x30
	// Line 1765, Address: 0x2cd088, Func Offset: 0x58
	// Line 1766, Address: 0x2cd098, Func Offset: 0x68
	// Line 1765, Address: 0x2cd0a0, Func Offset: 0x70
	// Line 1766, Address: 0x2cd0a8, Func Offset: 0x78
	// Line 1765, Address: 0x2cd0ac, Func Offset: 0x7c
	// Line 1766, Address: 0x2cd0b4, Func Offset: 0x84
	// Line 1767, Address: 0x2cd0c4, Func Offset: 0x94
	// Line 1768, Address: 0x2cd0d4, Func Offset: 0xa4
	// Line 1772, Address: 0x2cd0e4, Func Offset: 0xb4
	// Line 1770, Address: 0x2cd0e8, Func Offset: 0xb8
	// Line 1771, Address: 0x2cd0f0, Func Offset: 0xc0
	// Line 1773, Address: 0x2cd0f4, Func Offset: 0xc4
	// Line 1774, Address: 0x2cd1c4, Func Offset: 0x194
	// Line 1775, Address: 0x2cd288, Func Offset: 0x258
	// Line 1776, Address: 0x2cd34c, Func Offset: 0x31c
	// Line 1779, Address: 0x2cd410, Func Offset: 0x3e0
	// Line 1780, Address: 0x2cd42c, Func Offset: 0x3fc
	// Line 1779, Address: 0x2cd430, Func Offset: 0x400
	// Line 1780, Address: 0x2cd448, Func Offset: 0x418
	// Line 1781, Address: 0x2cd454, Func Offset: 0x424
	// Func End, Address: 0x2cd484, Func Offset: 0x454
}

// CalcSegLerp__FP5xVec3P5xVec3P5xVec3fP5xVec3f
// Start address: 0x2cd490
void CalcSegLerp(xVec3* segOut, xVec3* segA, xVec3* segB, float32 lerp, xVec3* translate, float32 scale)
{
	int32 i;
	// Line 1711, Address: 0x2cd490, Func Offset: 0
	// Line 1712, Address: 0x2cd494, Func Offset: 0x4
	// Line 1714, Address: 0x2cd4a8, Func Offset: 0x18
	// Line 1718, Address: 0x2cd4c0, Func Offset: 0x30
	// Line 1719, Address: 0x2cd4d0, Func Offset: 0x40
	// Line 1720, Address: 0x2cd508, Func Offset: 0x78
	// Line 1721, Address: 0x2cd510, Func Offset: 0x80
	// Line 1723, Address: 0x2cd574, Func Offset: 0xe4
	// Line 1721, Address: 0x2cd580, Func Offset: 0xf0
	// Line 1723, Address: 0x2cd588, Func Offset: 0xf8
	// Line 1727, Address: 0x2cd590, Func Offset: 0x100
	// Line 1729, Address: 0x2cd5a4, Func Offset: 0x114
	// Line 1730, Address: 0x2cd5b0, Func Offset: 0x120
	// Line 1729, Address: 0x2cd5b4, Func Offset: 0x124
	// Line 1731, Address: 0x2cd5ec, Func Offset: 0x15c
	// Line 1733, Address: 0x2cd5f0, Func Offset: 0x160
	// Line 1731, Address: 0x2cd5f4, Func Offset: 0x164
	// Line 1733, Address: 0x2cd5f8, Func Offset: 0x168
	// Line 1731, Address: 0x2cd5fc, Func Offset: 0x16c
	// Line 1732, Address: 0x2cd608, Func Offset: 0x178
	// Line 1733, Address: 0x2cd61c, Func Offset: 0x18c
	// Line 1731, Address: 0x2cd634, Func Offset: 0x1a4
	// Line 1733, Address: 0x2cd640, Func Offset: 0x1b0
	// Line 1732, Address: 0x2cd648, Func Offset: 0x1b8
	// Line 1733, Address: 0x2cd654, Func Offset: 0x1c4
	// Line 1731, Address: 0x2cd670, Func Offset: 0x1e0
	// Line 1733, Address: 0x2cd67c, Func Offset: 0x1ec
	// Line 1732, Address: 0x2cd684, Func Offset: 0x1f4
	// Line 1733, Address: 0x2cd690, Func Offset: 0x200
	// Line 1731, Address: 0x2cd6ac, Func Offset: 0x21c
	// Line 1733, Address: 0x2cd6b8, Func Offset: 0x228
	// Line 1732, Address: 0x2cd6c0, Func Offset: 0x230
	// Line 1733, Address: 0x2cd6cc, Func Offset: 0x23c
	// Line 1731, Address: 0x2cd6e8, Func Offset: 0x258
	// Line 1733, Address: 0x2cd6f4, Func Offset: 0x264
	// Line 1732, Address: 0x2cd6fc, Func Offset: 0x26c
	// Line 1733, Address: 0x2cd708, Func Offset: 0x278
	// Line 1731, Address: 0x2cd724, Func Offset: 0x294
	// Line 1733, Address: 0x2cd730, Func Offset: 0x2a0
	// Line 1732, Address: 0x2cd738, Func Offset: 0x2a8
	// Line 1733, Address: 0x2cd744, Func Offset: 0x2b4
	// Line 1736, Address: 0x2cd764, Func Offset: 0x2d4
	// Line 1737, Address: 0x2cd768, Func Offset: 0x2d8
	// Line 1714, Address: 0x2cd778, Func Offset: 0x2e8
	// Line 1715, Address: 0x2cd780, Func Offset: 0x2f0
	// Line 1737, Address: 0x2cd784, Func Offset: 0x2f4
	// Line 1716, Address: 0x2cd78c, Func Offset: 0x2fc
	// Line 1737, Address: 0x2cd794, Func Offset: 0x304
	// Func End, Address: 0x2cd79c, Func Offset: 0x30c
}

// zPatTongue_Init__FP6zLassoP14xModelInstance
// Start address: 0x2cd7a0
void zPatTongue_Init(zLasso* lasso, xModelInstance* patmodel)
{
	int32 i;
	RwV3d* verts;
	uint32 index;
	// Line 1654, Address: 0x2cd7a0, Func Offset: 0
	// Line 1660, Address: 0x2cd7c0, Func Offset: 0x20
	// Line 1661, Address: 0x2cd7c8, Func Offset: 0x28
	// Line 1662, Address: 0x2cd7e4, Func Offset: 0x44
	// Line 1663, Address: 0x2cd7f0, Func Offset: 0x50
	// Line 1665, Address: 0x2cd80c, Func Offset: 0x6c
	// Line 1666, Address: 0x2cd810, Func Offset: 0x70
	// Line 1665, Address: 0x2cd814, Func Offset: 0x74
	// Line 1666, Address: 0x2cd818, Func Offset: 0x78
	// Line 1665, Address: 0x2cd81c, Func Offset: 0x7c
	// Line 1666, Address: 0x2cd820, Func Offset: 0x80
	// Line 1667, Address: 0x2cd844, Func Offset: 0xa4
	// Line 1672, Address: 0x2cd850, Func Offset: 0xb0
	// Line 1675, Address: 0x2cd854, Func Offset: 0xb4
	// Line 1672, Address: 0x2cd85c, Func Offset: 0xbc
	// Line 1675, Address: 0x2cd860, Func Offset: 0xc0
	// Line 1676, Address: 0x2cd864, Func Offset: 0xc4
	// Line 1680, Address: 0x2cd87c, Func Offset: 0xdc
	// Line 1681, Address: 0x2cd88c, Func Offset: 0xec
	// Line 1682, Address: 0x2cd890, Func Offset: 0xf0
	// Line 1681, Address: 0x2cd89c, Func Offset: 0xfc
	// Line 1683, Address: 0x2cd8a8, Func Offset: 0x108
	// Line 1690, Address: 0x2cd8c4, Func Offset: 0x124
	// Line 1683, Address: 0x2cd8c8, Func Offset: 0x128
	// Line 1690, Address: 0x2cd8d0, Func Offset: 0x130
	// Line 1683, Address: 0x2cd8d4, Func Offset: 0x134
	// Line 1687, Address: 0x2cd8d8, Func Offset: 0x138
	// Line 1688, Address: 0x2cd8e0, Func Offset: 0x140
	// Line 1689, Address: 0x2cd8e8, Func Offset: 0x148
	// Line 1690, Address: 0x2cd8f0, Func Offset: 0x150
	// Line 1691, Address: 0x2cd8f8, Func Offset: 0x158
	// Line 1692, Address: 0x2cd904, Func Offset: 0x164
	// Line 1696, Address: 0x2cd91c, Func Offset: 0x17c
	// Line 1700, Address: 0x2cd92c, Func Offset: 0x18c
	// Line 1699, Address: 0x2cd938, Func Offset: 0x198
	// Line 1700, Address: 0x2cd93c, Func Offset: 0x19c
	// Line 1699, Address: 0x2cd948, Func Offset: 0x1a8
	// Line 1700, Address: 0x2cd960, Func Offset: 0x1c0
	// Line 1704, Address: 0x2cd96c, Func Offset: 0x1cc
	// Line 1707, Address: 0x2cd970, Func Offset: 0x1d0
	// Line 1708, Address: 0x2cd974, Func Offset: 0x1d4
	// Func End, Address: 0x2cd994, Func Offset: 0x1f4
}

// zLasso_ResetTimer__FP6zLassof
// Start address: 0x2cd9a0
void zLasso_ResetTimer(zLasso* lasso, float32 interpTime)
{
	// Line 1316, Address: 0x2cd9a0, Func Offset: 0
	// Line 1317, Address: 0x2cd9a4, Func Offset: 0x4
	// Line 1319, Address: 0x2cd9a8, Func Offset: 0x8
	// Line 1320, Address: 0x2cd9b4, Func Offset: 0x14
	// Line 1322, Address: 0x2cd9c0, Func Offset: 0x20
	// Line 1323, Address: 0x2cd9d8, Func Offset: 0x38
	// Line 1325, Address: 0x2cd9f0, Func Offset: 0x50
	// Line 1326, Address: 0x2cda1c, Func Offset: 0x7c
	// Func End, Address: 0x2cda24, Func Offset: 0x84
}

// zLasso_InitTimer__FP6zLassof
// Start address: 0x2cda30
void zLasso_InitTimer(zLasso* lasso, float32 interpTime)
{
	// Line 1271, Address: 0x2cda30, Func Offset: 0
	// Line 1272, Address: 0x2cda3c, Func Offset: 0xc
	// Line 1273, Address: 0x2cda44, Func Offset: 0x14
	// Line 1278, Address: 0x2cda48, Func Offset: 0x18
	// Line 1275, Address: 0x2cda4c, Func Offset: 0x1c
	// Line 1276, Address: 0x2cda58, Func Offset: 0x28
	// Line 1278, Address: 0x2cda68, Func Offset: 0x38
	// Line 1280, Address: 0x2cda78, Func Offset: 0x48
	// Line 1287, Address: 0x2cda7c, Func Offset: 0x4c
	// Line 1298, Address: 0x2cda80, Func Offset: 0x50
	// Line 1299, Address: 0x2cda84, Func Offset: 0x54
	// Line 1300, Address: 0x2cda88, Func Offset: 0x58
	// Line 1301, Address: 0x2cda8c, Func Offset: 0x5c
	// Line 1280, Address: 0x2cda90, Func Offset: 0x60
	// Line 1281, Address: 0x2cdaac, Func Offset: 0x7c
	// Line 1283, Address: 0x2cdadc, Func Offset: 0xac
	// Line 1285, Address: 0x2cdaf4, Func Offset: 0xc4
	// Line 1287, Address: 0x2cdafc, Func Offset: 0xcc
	// Line 1288, Address: 0x2cdb08, Func Offset: 0xd8
	// Line 1289, Address: 0x2cdb14, Func Offset: 0xe4
	// Line 1291, Address: 0x2cdb20, Func Offset: 0xf0
	// Line 1292, Address: 0x2cdb38, Func Offset: 0x108
	// Line 1293, Address: 0x2cdb50, Func Offset: 0x120
	// Line 1294, Address: 0x2cdb68, Func Offset: 0x138
	// Line 1295, Address: 0x2cdb80, Func Offset: 0x150
	// Line 1297, Address: 0x2cdb98, Func Offset: 0x168
	// Line 1298, Address: 0x2cdb9c, Func Offset: 0x16c
	// Line 1299, Address: 0x2cdba0, Func Offset: 0x170
	// Line 1300, Address: 0x2cdba4, Func Offset: 0x174
	// Line 1301, Address: 0x2cdba8, Func Offset: 0x178
	// Line 1302, Address: 0x2cdbac, Func Offset: 0x17c
	// Func End, Address: 0x2cdbbc, Func Offset: 0x18c
}

// zLasso_Update__FP6zLassoP4xEntf
// Start address: 0x2cdbc0
void zLasso_Update(zLasso* lasso, xEnt* ent, float32 dt)
{
	int32 i;
	xVec3 newPoint;
	float32 interp;
	// Line 1145, Address: 0x2cdbc0, Func Offset: 0
	// Line 1150, Address: 0x2cdbc8, Func Offset: 0x8
	// Line 1145, Address: 0x2cdbcc, Func Offset: 0xc
	// Line 1150, Address: 0x2cdbe4, Func Offset: 0x24
	// Line 1153, Address: 0x2cdc00, Func Offset: 0x40
	// Line 1154, Address: 0x2cdc20, Func Offset: 0x60
	// Line 1156, Address: 0x2cdc54, Func Offset: 0x94
	// Line 1221, Address: 0x2cdc60, Func Offset: 0xa0
	// Line 1224, Address: 0x2cdc68, Func Offset: 0xa8
	// Line 1227, Address: 0x2cdc74, Func Offset: 0xb4
	// Line 1230, Address: 0x2cdc84, Func Offset: 0xc4
	// Line 1235, Address: 0x2cdc94, Func Offset: 0xd4
	// Line 1238, Address: 0x2cdca4, Func Offset: 0xe4
	// Line 1159, Address: 0x2cde7c, Func Offset: 0x2bc
	// Line 1157, Address: 0x2cde84, Func Offset: 0x2c4
	// Line 1159, Address: 0x2cde88, Func Offset: 0x2c8
	// Line 1238, Address: 0x2cde8c, Func Offset: 0x2cc
	// Line 1165, Address: 0x2cde98, Func Offset: 0x2d8
	// Line 1238, Address: 0x2cde9c, Func Offset: 0x2dc
	// Line 1165, Address: 0x2cdea4, Func Offset: 0x2e4
	// Line 1167, Address: 0x2cdeb0, Func Offset: 0x2f0
	// Line 1165, Address: 0x2cdeb4, Func Offset: 0x2f4
	// Line 1238, Address: 0x2cdebc, Func Offset: 0x2fc
	// Line 1172, Address: 0x2cdec4, Func Offset: 0x304
	// Line 1238, Address: 0x2cdec8, Func Offset: 0x308
	// Line 1173, Address: 0x2cded4, Func Offset: 0x314
	// Line 1238, Address: 0x2cdedc, Func Offset: 0x31c
	// Line 1173, Address: 0x2cdee0, Func Offset: 0x320
	// Line 1238, Address: 0x2cdf04, Func Offset: 0x344
	// Line 1174, Address: 0x2cdf0c, Func Offset: 0x34c
	// Line 1238, Address: 0x2cdf14, Func Offset: 0x354
	// Line 1176, Address: 0x2cdf1c, Func Offset: 0x35c
	// Line 1238, Address: 0x2cdf24, Func Offset: 0x364
	// Line 1181, Address: 0x2cdf2c, Func Offset: 0x36c
	// Line 1238, Address: 0x2cdf30, Func Offset: 0x370
	// Line 1182, Address: 0x2cdf38, Func Offset: 0x378
	// Line 1238, Address: 0x2cdf3c, Func Offset: 0x37c
	// Line 1182, Address: 0x2cdf40, Func Offset: 0x380
	// Line 1238, Address: 0x2cdf50, Func Offset: 0x390
	// Line 1182, Address: 0x2cdf54, Func Offset: 0x394
	// Line 1238, Address: 0x2cdf5c, Func Offset: 0x39c
	// Line 1182, Address: 0x2cdf60, Func Offset: 0x3a0
	// Line 1238, Address: 0x2cdf64, Func Offset: 0x3a4
	// Line 1182, Address: 0x2cdf68, Func Offset: 0x3a8
	// Line 1238, Address: 0x2cdf70, Func Offset: 0x3b0
	// Line 1182, Address: 0x2cdf74, Func Offset: 0x3b4
	// Line 1238, Address: 0x2cdf78, Func Offset: 0x3b8
	// Line 1182, Address: 0x2cdf84, Func Offset: 0x3c4
	// Line 1238, Address: 0x2cdf8c, Func Offset: 0x3cc
	// Line 1182, Address: 0x2cdf98, Func Offset: 0x3d8
	// Line 1238, Address: 0x2cdfa0, Func Offset: 0x3e0
	// Line 1182, Address: 0x2cdfac, Func Offset: 0x3ec
	// Line 1238, Address: 0x2cdfb4, Func Offset: 0x3f4
	// Line 1182, Address: 0x2cdfc0, Func Offset: 0x400
	// Line 1238, Address: 0x2cdfc8, Func Offset: 0x408
	// Line 1182, Address: 0x2cdfd4, Func Offset: 0x414
	// Line 1183, Address: 0x2cdfdc, Func Offset: 0x41c
	// Line 1238, Address: 0x2cdfe8, Func Offset: 0x428
	// Line 1186, Address: 0x2cdff0, Func Offset: 0x430
	// Line 1185, Address: 0x2cdff4, Func Offset: 0x434
	// Line 1238, Address: 0x2cdff8, Func Offset: 0x438
	// Line 1185, Address: 0x2ce000, Func Offset: 0x440
	// Line 1238, Address: 0x2ce004, Func Offset: 0x444
	// Line 1185, Address: 0x2ce00c, Func Offset: 0x44c
	// Line 1238, Address: 0x2ce010, Func Offset: 0x450
	// Line 1186, Address: 0x2ce01c, Func Offset: 0x45c
	// Line 1238, Address: 0x2ce024, Func Offset: 0x464
	// Line 1186, Address: 0x2ce030, Func Offset: 0x470
	// Line 1238, Address: 0x2ce038, Func Offset: 0x478
	// Line 1186, Address: 0x2ce044, Func Offset: 0x484
	// Line 1238, Address: 0x2ce04c, Func Offset: 0x48c
	// Line 1187, Address: 0x2ce058, Func Offset: 0x498
	// Line 1238, Address: 0x2ce05c, Func Offset: 0x49c
	// Line 1187, Address: 0x2ce068, Func Offset: 0x4a8
	// Line 1238, Address: 0x2ce06c, Func Offset: 0x4ac
	// Line 1187, Address: 0x2ce078, Func Offset: 0x4b8
	// Line 1238, Address: 0x2ce07c, Func Offset: 0x4bc
	// Line 1191, Address: 0x2ce084, Func Offset: 0x4c4
	// Line 1238, Address: 0x2ce088, Func Offset: 0x4c8
	// Line 1196, Address: 0x2ce09c, Func Offset: 0x4dc
	// Line 1195, Address: 0x2ce0a0, Func Offset: 0x4e0
	// Line 1238, Address: 0x2ce0a4, Func Offset: 0x4e4
	// Line 1195, Address: 0x2ce0ac, Func Offset: 0x4ec
	// Line 1238, Address: 0x2ce0b0, Func Offset: 0x4f0
	// Line 1195, Address: 0x2ce0b8, Func Offset: 0x4f8
	// Line 1238, Address: 0x2ce0bc, Func Offset: 0x4fc
	// Line 1196, Address: 0x2ce0c8, Func Offset: 0x508
	// Line 1238, Address: 0x2ce0d0, Func Offset: 0x510
	// Line 1196, Address: 0x2ce0dc, Func Offset: 0x51c
	// Line 1238, Address: 0x2ce0e4, Func Offset: 0x524
	// Line 1196, Address: 0x2ce0f0, Func Offset: 0x530
	// Line 1238, Address: 0x2ce0f8, Func Offset: 0x538
	// Line 1198, Address: 0x2ce100, Func Offset: 0x540
	// Line 1238, Address: 0x2ce104, Func Offset: 0x544
	// Line 1198, Address: 0x2ce10c, Func Offset: 0x54c
	// Line 1238, Address: 0x2ce110, Func Offset: 0x550
	// Line 1198, Address: 0x2ce114, Func Offset: 0x554
	// Line 1238, Address: 0x2ce124, Func Offset: 0x564
	// Line 1198, Address: 0x2ce128, Func Offset: 0x568
	// Line 1238, Address: 0x2ce130, Func Offset: 0x570
	// Line 1198, Address: 0x2ce138, Func Offset: 0x578
	// Line 1238, Address: 0x2ce13c, Func Offset: 0x57c
	// Line 1198, Address: 0x2ce144, Func Offset: 0x584
	// Line 1238, Address: 0x2ce148, Func Offset: 0x588
	// Line 1204, Address: 0x2ce150, Func Offset: 0x590
	// Line 1238, Address: 0x2ce154, Func Offset: 0x594
	// Line 1207, Address: 0x2ce160, Func Offset: 0x5a0
	// Line 1238, Address: 0x2ce164, Func Offset: 0x5a4
	// Line 1207, Address: 0x2ce168, Func Offset: 0x5a8
	// Line 1238, Address: 0x2ce174, Func Offset: 0x5b4
	// Line 1207, Address: 0x2ce180, Func Offset: 0x5c0
	// Line 1238, Address: 0x2ce184, Func Offset: 0x5c4
	// Line 1207, Address: 0x2ce190, Func Offset: 0x5d0
	// Line 1238, Address: 0x2ce194, Func Offset: 0x5d4
	// Line 1207, Address: 0x2ce1b4, Func Offset: 0x5f4
	// Line 1238, Address: 0x2ce1d4, Func Offset: 0x614
	// Line 1207, Address: 0x2ce1e0, Func Offset: 0x620
	// Line 1238, Address: 0x2ce1e8, Func Offset: 0x628
	// Line 1207, Address: 0x2ce1f4, Func Offset: 0x634
	// Line 1238, Address: 0x2ce1fc, Func Offset: 0x63c
	// Line 1207, Address: 0x2ce21c, Func Offset: 0x65c
	// Line 1238, Address: 0x2ce220, Func Offset: 0x660
	// Line 1207, Address: 0x2ce234, Func Offset: 0x674
	// Line 1238, Address: 0x2ce238, Func Offset: 0x678
	// Line 1207, Address: 0x2ce254, Func Offset: 0x694
	// Line 1238, Address: 0x2ce268, Func Offset: 0x6a8
	// Line 1207, Address: 0x2ce26c, Func Offset: 0x6ac
	// Line 1238, Address: 0x2ce274, Func Offset: 0x6b4
	// Line 1207, Address: 0x2ce27c, Func Offset: 0x6bc
	// Line 1238, Address: 0x2ce280, Func Offset: 0x6c0
	// Line 1207, Address: 0x2ce288, Func Offset: 0x6c8
	// Line 1238, Address: 0x2ce28c, Func Offset: 0x6cc
	// Line 1207, Address: 0x2ce298, Func Offset: 0x6d8
	// Line 1238, Address: 0x2ce29c, Func Offset: 0x6dc
	// Line 1207, Address: 0x2ce2a8, Func Offset: 0x6e8
	// Line 1238, Address: 0x2ce2ac, Func Offset: 0x6ec
	// Line 1207, Address: 0x2ce2b8, Func Offset: 0x6f8
	// Line 1238, Address: 0x2ce2c4, Func Offset: 0x704
	// Line 1207, Address: 0x2ce2d8, Func Offset: 0x718
	// Line 1238, Address: 0x2ce2e0, Func Offset: 0x720
	// Line 1207, Address: 0x2ce2e8, Func Offset: 0x728
	// Line 1238, Address: 0x2ce2ec, Func Offset: 0x72c
	// Line 1207, Address: 0x2ce2f4, Func Offset: 0x734
	// Line 1238, Address: 0x2ce2f8, Func Offset: 0x738
	// Line 1207, Address: 0x2ce304, Func Offset: 0x744
	// Line 1238, Address: 0x2ce308, Func Offset: 0x748
	// Line 1207, Address: 0x2ce314, Func Offset: 0x754
	// Line 1238, Address: 0x2ce318, Func Offset: 0x758
	// Line 1207, Address: 0x2ce324, Func Offset: 0x764
	// Line 1238, Address: 0x2ce330, Func Offset: 0x770
	// Line 1161, Address: 0x2ce338, Func Offset: 0x778
	// Line 1238, Address: 0x2ce344, Func Offset: 0x784
	// Line 1192, Address: 0x2ce348, Func Offset: 0x788
	// Line 1238, Address: 0x2ce354, Func Offset: 0x794
	// Line 1192, Address: 0x2ce358, Func Offset: 0x798
	// Line 1238, Address: 0x2ce35c, Func Offset: 0x79c
	// Line 1192, Address: 0x2ce360, Func Offset: 0x7a0
	// Line 1238, Address: 0x2ce364, Func Offset: 0x7a4
	// Line 1192, Address: 0x2ce36c, Func Offset: 0x7ac
	// Line 1238, Address: 0x2ce370, Func Offset: 0x7b0
	// Line 1192, Address: 0x2ce374, Func Offset: 0x7b4
	// Line 1238, Address: 0x2ce378, Func Offset: 0x7b8
	// Line 1192, Address: 0x2ce37c, Func Offset: 0x7bc
	// Line 1238, Address: 0x2ce384, Func Offset: 0x7c4
	// Line 1192, Address: 0x2ce3a8, Func Offset: 0x7e8
	// Line 1238, Address: 0x2ce3c8, Func Offset: 0x808
	// Line 1192, Address: 0x2ce3cc, Func Offset: 0x80c
	// Line 1238, Address: 0x2ce3ec, Func Offset: 0x82c
	// Line 1192, Address: 0x2ce3f4, Func Offset: 0x834
	// Line 1238, Address: 0x2ce3fc, Func Offset: 0x83c
	// Line 1192, Address: 0x2ce404, Func Offset: 0x844
	// Line 1238, Address: 0x2ce40c, Func Offset: 0x84c
	// Line 1193, Address: 0x2ce414, Func Offset: 0x854
	// Line 1238, Address: 0x2ce41c, Func Offset: 0x85c
	// Line 1205, Address: 0x2ce420, Func Offset: 0x860
	// Line 1238, Address: 0x2ce444, Func Offset: 0x884
	// Line 1205, Address: 0x2ce44c, Func Offset: 0x88c
	// Line 1238, Address: 0x2ce468, Func Offset: 0x8a8
	// Line 1205, Address: 0x2ce470, Func Offset: 0x8b0
	// Line 1238, Address: 0x2ce474, Func Offset: 0x8b4
	// Line 1205, Address: 0x2ce480, Func Offset: 0x8c0
	// Line 1238, Address: 0x2ce484, Func Offset: 0x8c4
	// Line 1205, Address: 0x2ce488, Func Offset: 0x8c8
	// Line 1238, Address: 0x2ce490, Func Offset: 0x8d0
	// Line 1205, Address: 0x2ce498, Func Offset: 0x8d8
	// Line 1238, Address: 0x2ce49c, Func Offset: 0x8dc
	// Line 1205, Address: 0x2ce4a8, Func Offset: 0x8e8
	// Line 1238, Address: 0x2ce4b0, Func Offset: 0x8f0
	// Line 1205, Address: 0x2ce4bc, Func Offset: 0x8fc
	// Line 1238, Address: 0x2ce4c4, Func Offset: 0x904
	// Line 1205, Address: 0x2ce4d0, Func Offset: 0x910
	// Line 1238, Address: 0x2ce4d4, Func Offset: 0x914
	// Line 1205, Address: 0x2ce4d8, Func Offset: 0x918
	// Line 1238, Address: 0x2ce4e0, Func Offset: 0x920
	// Line 1205, Address: 0x2ce4e8, Func Offset: 0x928
	// Line 1238, Address: 0x2ce4ec, Func Offset: 0x92c
	// Line 1205, Address: 0x2ce4f8, Func Offset: 0x938
	// Line 1238, Address: 0x2ce500, Func Offset: 0x940
	// Line 1205, Address: 0x2ce50c, Func Offset: 0x94c
	// Line 1238, Address: 0x2ce514, Func Offset: 0x954
	// Line 1205, Address: 0x2ce520, Func Offset: 0x960
	// Line 1238, Address: 0x2ce524, Func Offset: 0x964
	// Line 1205, Address: 0x2ce528, Func Offset: 0x968
	// Line 1238, Address: 0x2ce530, Func Offset: 0x970
	// Line 1205, Address: 0x2ce538, Func Offset: 0x978
	// Line 1238, Address: 0x2ce53c, Func Offset: 0x97c
	// Line 1205, Address: 0x2ce548, Func Offset: 0x988
	// Line 1238, Address: 0x2ce550, Func Offset: 0x990
	// Line 1205, Address: 0x2ce55c, Func Offset: 0x99c
	// Line 1238, Address: 0x2ce564, Func Offset: 0x9a4
	// Line 1205, Address: 0x2ce584, Func Offset: 0x9c4
	// Line 1238, Address: 0x2ce5a4, Func Offset: 0x9e4
	// Line 1205, Address: 0x2ce5b0, Func Offset: 0x9f0
	// Line 1238, Address: 0x2ce5b8, Func Offset: 0x9f8
	// Line 1205, Address: 0x2ce5c4, Func Offset: 0xa04
	// Line 1238, Address: 0x2ce5cc, Func Offset: 0xa0c
	// Line 1205, Address: 0x2ce5dc, Func Offset: 0xa1c
	// Line 1238, Address: 0x2ce5e0, Func Offset: 0xa20
	// Line 1205, Address: 0x2ce5e8, Func Offset: 0xa28
	// Line 1238, Address: 0x2ce5ec, Func Offset: 0xa2c
	// Line 1205, Address: 0x2ce5f4, Func Offset: 0xa34
	// Line 1238, Address: 0x2ce5f8, Func Offset: 0xa38
	// Line 1205, Address: 0x2ce60c, Func Offset: 0xa4c
	// Line 1238, Address: 0x2ce618, Func Offset: 0xa58
	// Line 1205, Address: 0x2ce628, Func Offset: 0xa68
	// Line 1238, Address: 0x2ce634, Func Offset: 0xa74
	// Line 1205, Address: 0x2ce644, Func Offset: 0xa84
	// Line 1238, Address: 0x2ce648, Func Offset: 0xa88
	// Line 1205, Address: 0x2ce654, Func Offset: 0xa94
	// Line 1238, Address: 0x2ce658, Func Offset: 0xa98
	// Line 1205, Address: 0x2ce664, Func Offset: 0xaa4
	// Line 1206, Address: 0x2ce668, Func Offset: 0xaa8
	// Line 1213, Address: 0x2ce670, Func Offset: 0xab0
	// Line 1238, Address: 0x2ce674, Func Offset: 0xab4
	// Line 1213, Address: 0x2ce678, Func Offset: 0xab8
	// Line 1238, Address: 0x2ce680, Func Offset: 0xac0
	// Line 1213, Address: 0x2ce684, Func Offset: 0xac4
	// Line 1238, Address: 0x2ce6a8, Func Offset: 0xae8
	// Line 1213, Address: 0x2ce6b0, Func Offset: 0xaf0
	// Line 1238, Address: 0x2ce6c0, Func Offset: 0xb00
	// Line 1214, Address: 0x2ce6c8, Func Offset: 0xb08
	// Line 1238, Address: 0x2ce6d0, Func Offset: 0xb10
	// Line 1216, Address: 0x2ce6d4, Func Offset: 0xb14
	// Line 1238, Address: 0x2ce6d8, Func Offset: 0xb18
	// Line 1216, Address: 0x2ce6dc, Func Offset: 0xb1c
	// Line 1238, Address: 0x2ce6e8, Func Offset: 0xb28
	// Line 1247, Address: 0x2ce6ec, Func Offset: 0xb2c
	// Line 1250, Address: 0x2ce6f4, Func Offset: 0xb34
	// Line 1247, Address: 0x2ce6f8, Func Offset: 0xb38
	// Line 1248, Address: 0x2ce71c, Func Offset: 0xb5c
	// Line 1251, Address: 0x2ce724, Func Offset: 0xb64
	// Line 1250, Address: 0x2ce728, Func Offset: 0xb68
	// Line 1251, Address: 0x2ce72c, Func Offset: 0xb6c
	// Line 1252, Address: 0x2ce734, Func Offset: 0xb74
	// Line 1253, Address: 0x2ce744, Func Offset: 0xb84
	// Line 1255, Address: 0x2ce758, Func Offset: 0xb98
	// Line 1257, Address: 0x2ce764, Func Offset: 0xba4
	// Line 1212, Address: 0x2ce7c4, Func Offset: 0xc04
	// Line 1257, Address: 0x2ce7c8, Func Offset: 0xc08
	// Line 1213, Address: 0x2ce7d8, Func Offset: 0xc18
	// Line 1257, Address: 0x2ce7e0, Func Offset: 0xc20
	// Line 1225, Address: 0x2ce7e4, Func Offset: 0xc24
	// Line 1257, Address: 0x2ce7ec, Func Offset: 0xc2c
	// Line 1225, Address: 0x2ce7f0, Func Offset: 0xc30
	// Line 1257, Address: 0x2ce814, Func Offset: 0xc54
	// Line 1228, Address: 0x2ce828, Func Offset: 0xc68
	// Line 1257, Address: 0x2ce838, Func Offset: 0xc78
	// Line 1228, Address: 0x2ce83c, Func Offset: 0xc7c
	// Line 1257, Address: 0x2ce844, Func Offset: 0xc84
	// Line 1228, Address: 0x2ce848, Func Offset: 0xc88
	// Line 1257, Address: 0x2ce84c, Func Offset: 0xc8c
	// Line 1228, Address: 0x2ce850, Func Offset: 0xc90
	// Line 1257, Address: 0x2ce858, Func Offset: 0xc98
	// Line 1228, Address: 0x2ce85c, Func Offset: 0xc9c
	// Line 1257, Address: 0x2ce860, Func Offset: 0xca0
	// Line 1228, Address: 0x2ce86c, Func Offset: 0xcac
	// Line 1257, Address: 0x2ce874, Func Offset: 0xcb4
	// Line 1228, Address: 0x2ce880, Func Offset: 0xcc0
	// Line 1257, Address: 0x2ce888, Func Offset: 0xcc8
	// Line 1228, Address: 0x2ce894, Func Offset: 0xcd4
	// Line 1257, Address: 0x2ce89c, Func Offset: 0xcdc
	// Line 1228, Address: 0x2ce8a8, Func Offset: 0xce8
	// Line 1257, Address: 0x2ce8b0, Func Offset: 0xcf0
	// Line 1228, Address: 0x2ce8bc, Func Offset: 0xcfc
	// Line 1257, Address: 0x2ce8cc, Func Offset: 0xd0c
	// Line 1231, Address: 0x2ce8d0, Func Offset: 0xd10
	// Line 1257, Address: 0x2ce8dc, Func Offset: 0xd1c
	// Line 1231, Address: 0x2ce8e0, Func Offset: 0xd20
	// Line 1257, Address: 0x2ce8e4, Func Offset: 0xd24
	// Line 1231, Address: 0x2ce8e8, Func Offset: 0xd28
	// Line 1257, Address: 0x2ce8ec, Func Offset: 0xd2c
	// Line 1231, Address: 0x2ce8f4, Func Offset: 0xd34
	// Line 1257, Address: 0x2ce8f8, Func Offset: 0xd38
	// Line 1231, Address: 0x2ce8fc, Func Offset: 0xd3c
	// Line 1257, Address: 0x2ce900, Func Offset: 0xd40
	// Line 1231, Address: 0x2ce904, Func Offset: 0xd44
	// Line 1257, Address: 0x2ce90c, Func Offset: 0xd4c
	// Line 1231, Address: 0x2ce930, Func Offset: 0xd70
	// Line 1257, Address: 0x2ce950, Func Offset: 0xd90
	// Line 1231, Address: 0x2ce954, Func Offset: 0xd94
	// Line 1257, Address: 0x2ce974, Func Offset: 0xdb4
	// Line 1231, Address: 0x2ce97c, Func Offset: 0xdbc
	// Line 1257, Address: 0x2ce984, Func Offset: 0xdc4
	// Line 1231, Address: 0x2ce98c, Func Offset: 0xdcc
	// Line 1257, Address: 0x2ce994, Func Offset: 0xdd4
	// Line 1232, Address: 0x2ce9a0, Func Offset: 0xde0
	// Line 1257, Address: 0x2ce9a4, Func Offset: 0xde4
	// Line 1232, Address: 0x2ce9ac, Func Offset: 0xdec
	// Line 1257, Address: 0x2ce9b0, Func Offset: 0xdf0
	// Line 1232, Address: 0x2ce9b4, Func Offset: 0xdf4
	// Line 1257, Address: 0x2ce9c0, Func Offset: 0xe00
	// Line 1232, Address: 0x2ce9c4, Func Offset: 0xe04
	// Line 1257, Address: 0x2ce9cc, Func Offset: 0xe0c
	// Line 1232, Address: 0x2ce9d4, Func Offset: 0xe14
	// Line 1257, Address: 0x2ce9d8, Func Offset: 0xe18
	// Line 1232, Address: 0x2ce9e0, Func Offset: 0xe20
	// Line 1257, Address: 0x2ce9ec, Func Offset: 0xe2c
	// Line 1236, Address: 0x2ce9f0, Func Offset: 0xe30
	// Line 1257, Address: 0x2cea14, Func Offset: 0xe54
	// Line 1236, Address: 0x2cea1c, Func Offset: 0xe5c
	// Line 1257, Address: 0x2cea38, Func Offset: 0xe78
	// Line 1236, Address: 0x2cea40, Func Offset: 0xe80
	// Line 1257, Address: 0x2cea4c, Func Offset: 0xe8c
	// Line 1236, Address: 0x2cea58, Func Offset: 0xe98
	// Line 1257, Address: 0x2cea5c, Func Offset: 0xe9c
	// Line 1236, Address: 0x2cea60, Func Offset: 0xea0
	// Line 1257, Address: 0x2cea68, Func Offset: 0xea8
	// Line 1236, Address: 0x2cea70, Func Offset: 0xeb0
	// Line 1257, Address: 0x2cea74, Func Offset: 0xeb4
	// Line 1236, Address: 0x2cea80, Func Offset: 0xec0
	// Line 1257, Address: 0x2cea88, Func Offset: 0xec8
	// Line 1236, Address: 0x2cea94, Func Offset: 0xed4
	// Line 1257, Address: 0x2cea9c, Func Offset: 0xedc
	// Line 1236, Address: 0x2ceaa8, Func Offset: 0xee8
	// Line 1257, Address: 0x2ceaac, Func Offset: 0xeec
	// Line 1236, Address: 0x2ceab0, Func Offset: 0xef0
	// Line 1257, Address: 0x2ceab8, Func Offset: 0xef8
	// Line 1236, Address: 0x2ceac0, Func Offset: 0xf00
	// Line 1257, Address: 0x2ceac4, Func Offset: 0xf04
	// Line 1236, Address: 0x2cead0, Func Offset: 0xf10
	// Line 1257, Address: 0x2cead8, Func Offset: 0xf18
	// Line 1236, Address: 0x2ceae4, Func Offset: 0xf24
	// Line 1257, Address: 0x2ceaec, Func Offset: 0xf2c
	// Line 1236, Address: 0x2ceaf8, Func Offset: 0xf38
	// Line 1257, Address: 0x2ceafc, Func Offset: 0xf3c
	// Line 1236, Address: 0x2ceb00, Func Offset: 0xf40
	// Line 1257, Address: 0x2ceb08, Func Offset: 0xf48
	// Line 1236, Address: 0x2ceb10, Func Offset: 0xf50
	// Line 1257, Address: 0x2ceb14, Func Offset: 0xf54
	// Line 1236, Address: 0x2ceb20, Func Offset: 0xf60
	// Line 1257, Address: 0x2ceb28, Func Offset: 0xf68
	// Line 1236, Address: 0x2ceb34, Func Offset: 0xf74
	// Line 1257, Address: 0x2ceb3c, Func Offset: 0xf7c
	// Line 1236, Address: 0x2ceb5c, Func Offset: 0xf9c
	// Line 1257, Address: 0x2ceb74, Func Offset: 0xfb4
	// Line 1236, Address: 0x2ceb80, Func Offset: 0xfc0
	// Line 1257, Address: 0x2ceb88, Func Offset: 0xfc8
	// Line 1236, Address: 0x2ceb94, Func Offset: 0xfd4
	// Line 1257, Address: 0x2ceb9c, Func Offset: 0xfdc
	// Line 1236, Address: 0x2cebac, Func Offset: 0xfec
	// Line 1257, Address: 0x2cebb0, Func Offset: 0xff0
	// Line 1236, Address: 0x2cebb8, Func Offset: 0xff8
	// Line 1257, Address: 0x2cebbc, Func Offset: 0xffc
	// Line 1236, Address: 0x2cebc4, Func Offset: 0x1004
	// Line 1257, Address: 0x2cebc8, Func Offset: 0x1008
	// Line 1236, Address: 0x2cebdc, Func Offset: 0x101c
	// Line 1257, Address: 0x2cebe8, Func Offset: 0x1028
	// Line 1236, Address: 0x2cebf8, Func Offset: 0x1038
	// Line 1257, Address: 0x2cec04, Func Offset: 0x1044
	// Line 1236, Address: 0x2cec14, Func Offset: 0x1054
	// Line 1257, Address: 0x2cec18, Func Offset: 0x1058
	// Line 1236, Address: 0x2cec24, Func Offset: 0x1064
	// Line 1257, Address: 0x2cec28, Func Offset: 0x1068
	// Line 1236, Address: 0x2cec34, Func Offset: 0x1074
	// Line 1257, Address: 0x2cec38, Func Offset: 0x1078
	// Line 1242, Address: 0x2cec40, Func Offset: 0x1080
	// Line 1257, Address: 0x2cec44, Func Offset: 0x1084
	// Line 1243, Address: 0x2cec50, Func Offset: 0x1090
	// Line 1257, Address: 0x2cec54, Func Offset: 0x1094
	// Line 1243, Address: 0x2cec58, Func Offset: 0x1098
	// Line 1257, Address: 0x2cec60, Func Offset: 0x10a0
	// Line 1243, Address: 0x2cec64, Func Offset: 0x10a4
	// Line 1257, Address: 0x2cec88, Func Offset: 0x10c8
	// Line 1243, Address: 0x2cec90, Func Offset: 0x10d0
	// Line 1257, Address: 0x2ceca0, Func Offset: 0x10e0
	// Line 1243, Address: 0x2cecb8, Func Offset: 0x10f8
	// Line 1257, Address: 0x2cecc0, Func Offset: 0x1100
	// Line 1259, Address: 0x2cecd8, Func Offset: 0x1118
	// Func End, Address: 0x2cecf4, Func Offset: 0x1134
}

// zLasso_Render__FP6zLasso
// Start address: 0x2ced00
void zLasso_Render(zLasso* lasso)
{
	int32 i;
	xVec3 loop[16];
	int32 numVerts;
	float32 closestDistSqr;
	float32 arc_length;
	uint8 shouldUseGuide;
	float32 time;
	RpGeometry* geom;
	int32 numMorphs;
	int32 mIndx1;
	float32 interp;
	int32 mIndx2;
	RpMorphTarget* m1;
	RpMorphTarget* m2;
	RwV3d* m1V;
	RwV3d* m2V;
	xVec3 temp;
	xVec3 dif;
	xVec3 currClose;
	xVec3 closestPoint;
	xVec3 hand;
	float32 closestDistSqr;
	float32 len;
	RxObjSpace3DVertex* tmp_pt;
	xVec3 b1;
	xVec3 b2;
	xVec3 b3;
	float32 s[3];
	float32 c[3];
	float32 a;
	float32 astep;
	xVec3 worldHonda;
	xVec3 incr;
	xVec3 disp;
	xVec3 crossSection[3];
	xVec3 sections[6];
	int32 currSection;
	int32 lastSection;
	int32 numSections;
	float32 distSoFar;
	float32 distTotal;
	float32 spokeDistIncr;
	uint32 numVertsSoFar;
	float32 u;
	float32 v;
	float32 ustep;
	float32 vstep;
	xVec3 sectionCenter;
	float32 xDisp;
	float32 yDisp;
	RwV3d _packed;
	RwRGBA* _col;
	RwV3d _packed;
	RwRGBA* _col;
	RwV3d _packed;
	RwRGBA* _col;
	RwV3d _packed;
	RwRGBA* _col;
	RwV3d _packed;
	RwRGBA* _col;
	int32 shouldRepeat;
	xMat4x3 rotMatrix;
	xVec3 addTo;
	xVec3 temp;
	int32 k;
	RwV3d _packed;
	RwRGBA* _col;
	RwV3d _packed;
	RwRGBA* _col;
	RwV3d _packed;
	RwRGBA* _col;
	RwV3d _packed;
	RwRGBA* _col;
	RwV3d _packed;
	RwRGBA* _col;
	xMat4x3 rotMatrix;
	xVec3 norm;
	xVec3 oldNorm;
	int32 k;
	int32 k1;
	int32 k2;
	int32 k3;
	RwV3d _packed;
	RwRGBA* _col;
	RwV3d _packed;
	RwRGBA* _col;
	RwV3d _packed;
	RwRGBA* _col;
	RwV3d _packed;
	RwRGBA* _col;
	RwV3d _packed;
	RwRGBA* _col;
	// Line 329, Address: 0x2ced00, Func Offset: 0
	// Line 331, Address: 0x2ced5c, Func Offset: 0x5c
	// Line 332, Address: 0x2ced68, Func Offset: 0x68
	// Line 333, Address: 0x2ced70, Func Offset: 0x70
	// Line 345, Address: 0x2ced78, Func Offset: 0x78
	// Line 350, Address: 0x2cedd4, Func Offset: 0xd4
	// Line 380, Address: 0x2cede8, Func Offset: 0xe8
	// Line 378, Address: 0x2cedec, Func Offset: 0xec
	// Line 350, Address: 0x2cedf0, Func Offset: 0xf0
	// Line 364, Address: 0x2cedf8, Func Offset: 0xf8
	// Line 350, Address: 0x2cedfc, Func Offset: 0xfc
	// Line 364, Address: 0x2cee00, Func Offset: 0x100
	// Line 350, Address: 0x2cee04, Func Offset: 0x104
	// Line 377, Address: 0x2cee08, Func Offset: 0x108
	// Line 367, Address: 0x2cee0c, Func Offset: 0x10c
	// Line 371, Address: 0x2cee10, Func Offset: 0x110
	// Line 380, Address: 0x2cee18, Func Offset: 0x118
	// Line 368, Address: 0x2cee1c, Func Offset: 0x11c
	// Line 370, Address: 0x2cee28, Func Offset: 0x128
	// Line 369, Address: 0x2cee2c, Func Offset: 0x12c
	// Line 370, Address: 0x2cee34, Func Offset: 0x134
	// Line 371, Address: 0x2cee44, Func Offset: 0x144
	// Line 374, Address: 0x2cee50, Func Offset: 0x150
	// Line 372, Address: 0x2cee5c, Func Offset: 0x15c
	// Line 375, Address: 0x2cee68, Func Offset: 0x168
	// Line 380, Address: 0x2cee6c, Func Offset: 0x16c
	// Line 385, Address: 0x2cee7c, Func Offset: 0x17c
	// Line 380, Address: 0x2cee8c, Func Offset: 0x18c
	// Line 381, Address: 0x2cee90, Func Offset: 0x190
	// Line 382, Address: 0x2ceeb8, Func Offset: 0x1b8
	// Line 381, Address: 0x2ceebc, Func Offset: 0x1bc
	// Line 382, Address: 0x2ceec4, Func Offset: 0x1c4
	// Line 381, Address: 0x2ceed0, Func Offset: 0x1d0
	// Line 382, Address: 0x2ceed8, Func Offset: 0x1d8
	// Line 381, Address: 0x2ceee4, Func Offset: 0x1e4
	// Line 382, Address: 0x2ceee8, Func Offset: 0x1e8
	// Line 385, Address: 0x2ceefc, Func Offset: 0x1fc
	// Line 386, Address: 0x2cef4c, Func Offset: 0x24c
	// Line 390, Address: 0x2cef60, Func Offset: 0x260
	// Line 389, Address: 0x2cef68, Func Offset: 0x268
	// Line 395, Address: 0x2cef70, Func Offset: 0x270
	// Line 389, Address: 0x2cef74, Func Offset: 0x274
	// Line 395, Address: 0x2cef78, Func Offset: 0x278
	// Line 389, Address: 0x2cef7c, Func Offset: 0x27c
	// Line 390, Address: 0x2cef84, Func Offset: 0x284
	// Line 391, Address: 0x2cef90, Func Offset: 0x290
	// Line 389, Address: 0x2cef94, Func Offset: 0x294
	// Line 391, Address: 0x2cefa8, Func Offset: 0x2a8
	// Line 389, Address: 0x2cefac, Func Offset: 0x2ac
	// Line 391, Address: 0x2cefb4, Func Offset: 0x2b4
	// Line 389, Address: 0x2cefc0, Func Offset: 0x2c0
	// Line 390, Address: 0x2cefc4, Func Offset: 0x2c4
	// Line 389, Address: 0x2cefc8, Func Offset: 0x2c8
	// Line 390, Address: 0x2cefd0, Func Offset: 0x2d0
	// Line 389, Address: 0x2ceff0, Func Offset: 0x2f0
	// Line 390, Address: 0x2ceffc, Func Offset: 0x2fc
	// Line 395, Address: 0x2cf004, Func Offset: 0x304
	// Line 399, Address: 0x2cf030, Func Offset: 0x330
	// Line 397, Address: 0x2cf03c, Func Offset: 0x33c
	// Line 398, Address: 0x2cf044, Func Offset: 0x344
	// Line 397, Address: 0x2cf048, Func Offset: 0x348
	// Line 398, Address: 0x2cf04c, Func Offset: 0x34c
	// Line 395, Address: 0x2cf060, Func Offset: 0x360
	// Line 397, Address: 0x2cf070, Func Offset: 0x370
	// Line 399, Address: 0x2cf09c, Func Offset: 0x39c
	// Line 400, Address: 0x2cf0a4, Func Offset: 0x3a4
	// Line 402, Address: 0x2cf0c8, Func Offset: 0x3c8
	// Line 403, Address: 0x2cf0d4, Func Offset: 0x3d4
	// Line 404, Address: 0x2cf0e8, Func Offset: 0x3e8
	// Line 405, Address: 0x2cf100, Func Offset: 0x400
	// Line 404, Address: 0x2cf118, Func Offset: 0x418
	// Line 405, Address: 0x2cf128, Func Offset: 0x428
	// Line 406, Address: 0x2cf12c, Func Offset: 0x42c
	// Line 407, Address: 0x2cf138, Func Offset: 0x438
	// Line 408, Address: 0x2cf144, Func Offset: 0x444
	// Line 411, Address: 0x2cf168, Func Offset: 0x468
	// Line 412, Address: 0x2cf188, Func Offset: 0x488
	// Line 411, Address: 0x2cf18c, Func Offset: 0x48c
	// Line 412, Address: 0x2cf194, Func Offset: 0x494
	// Line 411, Address: 0x2cf198, Func Offset: 0x498
	// Line 412, Address: 0x2cf19c, Func Offset: 0x49c
	// Line 414, Address: 0x2cf1a0, Func Offset: 0x4a0
	// Line 415, Address: 0x2cf1ac, Func Offset: 0x4ac
	// Line 416, Address: 0x2cf1c0, Func Offset: 0x4c0
	// Line 417, Address: 0x2cf1c4, Func Offset: 0x4c4
	// Line 416, Address: 0x2cf1c8, Func Offset: 0x4c8
	// Line 420, Address: 0x2cf1d0, Func Offset: 0x4d0
	// Line 419, Address: 0x2cf1d4, Func Offset: 0x4d4
	// Line 416, Address: 0x2cf200, Func Offset: 0x500
	// Line 419, Address: 0x2cf210, Func Offset: 0x510
	// Line 420, Address: 0x2cf22c, Func Offset: 0x52c
	// Line 423, Address: 0x2cf238, Func Offset: 0x538
	// Line 424, Address: 0x2cf264, Func Offset: 0x564
	// Line 425, Address: 0x2cf26c, Func Offset: 0x56c
	// Line 428, Address: 0x2cf288, Func Offset: 0x588
	// Line 425, Address: 0x2cf28c, Func Offset: 0x58c
	// Line 428, Address: 0x2cf290, Func Offset: 0x590
	// Line 433, Address: 0x2cf29c, Func Offset: 0x59c
	// Line 450, Address: 0x2cf2ac, Func Offset: 0x5ac
	// Line 451, Address: 0x2cf2b0, Func Offset: 0x5b0
	// Line 450, Address: 0x2cf2b4, Func Offset: 0x5b4
	// Line 451, Address: 0x2cf2c0, Func Offset: 0x5c0
	// Line 445, Address: 0x2cf2c4, Func Offset: 0x5c4
	// Line 442, Address: 0x2cf2c8, Func Offset: 0x5c8
	// Line 443, Address: 0x2cf2cc, Func Offset: 0x5cc
	// Line 444, Address: 0x2cf2d0, Func Offset: 0x5d0
	// Line 450, Address: 0x2cf2d4, Func Offset: 0x5d4
	// Line 451, Address: 0x2cf30c, Func Offset: 0x60c
	// Line 458, Address: 0x2cf318, Func Offset: 0x618
	// Line 452, Address: 0x2cf31c, Func Offset: 0x61c
	// Line 456, Address: 0x2cf320, Func Offset: 0x620
	// Line 458, Address: 0x2cf324, Func Offset: 0x624
	// Line 452, Address: 0x2cf328, Func Offset: 0x628
	// Line 453, Address: 0x2cf32c, Func Offset: 0x62c
	// Line 455, Address: 0x2cf334, Func Offset: 0x634
	// Line 453, Address: 0x2cf338, Func Offset: 0x638
	// Line 456, Address: 0x2cf33c, Func Offset: 0x63c
	// Line 455, Address: 0x2cf344, Func Offset: 0x644
	// Line 457, Address: 0x2cf348, Func Offset: 0x648
	// Line 455, Address: 0x2cf350, Func Offset: 0x650
	// Line 458, Address: 0x2cf354, Func Offset: 0x654
	// Line 462, Address: 0x2cf360, Func Offset: 0x660
	// Line 458, Address: 0x2cf364, Func Offset: 0x664
	// Line 462, Address: 0x2cf368, Func Offset: 0x668
	// Line 460, Address: 0x2cf36c, Func Offset: 0x66c
	// Line 458, Address: 0x2cf380, Func Offset: 0x680
	// Line 462, Address: 0x2cf388, Func Offset: 0x688
	// Line 458, Address: 0x2cf38c, Func Offset: 0x68c
	// Line 462, Address: 0x2cf394, Func Offset: 0x694
	// Line 458, Address: 0x2cf398, Func Offset: 0x698
	// Line 460, Address: 0x2cf3ac, Func Offset: 0x6ac
	// Line 473, Address: 0x2cf3d8, Func Offset: 0x6d8
	// Line 474, Address: 0x2cf40c, Func Offset: 0x70c
	// Line 491, Address: 0x2cf440, Func Offset: 0x740
	// Line 474, Address: 0x2cf444, Func Offset: 0x744
	// Line 491, Address: 0x2cf450, Func Offset: 0x750
	// Line 477, Address: 0x2cf464, Func Offset: 0x764
	// Line 491, Address: 0x2cf468, Func Offset: 0x768
	// Line 499, Address: 0x2cf478, Func Offset: 0x778
	// Line 476, Address: 0x2cf480, Func Offset: 0x780
	// Line 488, Address: 0x2cf488, Func Offset: 0x788
	// Line 478, Address: 0x2cf490, Func Offset: 0x790
	// Line 477, Address: 0x2cf494, Func Offset: 0x794
	// Line 488, Address: 0x2cf4a0, Func Offset: 0x7a0
	// Line 499, Address: 0x2cf4b0, Func Offset: 0x7b0
	// Line 480, Address: 0x2cf4c0, Func Offset: 0x7c0
	// Line 499, Address: 0x2cf4d0, Func Offset: 0x7d0
	// Line 476, Address: 0x2cf4d4, Func Offset: 0x7d4
	// Line 479, Address: 0x2cf4e8, Func Offset: 0x7e8
	// Line 481, Address: 0x2cf4ec, Func Offset: 0x7ec
	// Line 476, Address: 0x2cf4f0, Func Offset: 0x7f0
	// Line 478, Address: 0x2cf4f4, Func Offset: 0x7f4
	// Line 477, Address: 0x2cf4f8, Func Offset: 0x7f8
	// Line 479, Address: 0x2cf500, Func Offset: 0x800
	// Line 481, Address: 0x2cf504, Func Offset: 0x804
	// Line 477, Address: 0x2cf508, Func Offset: 0x808
	// Line 476, Address: 0x2cf510, Func Offset: 0x810
	// Line 477, Address: 0x2cf518, Func Offset: 0x818
	// Line 476, Address: 0x2cf51c, Func Offset: 0x81c
	// Line 477, Address: 0x2cf520, Func Offset: 0x820
	// Line 478, Address: 0x2cf538, Func Offset: 0x838
	// Line 477, Address: 0x2cf53c, Func Offset: 0x83c
	// Line 478, Address: 0x2cf544, Func Offset: 0x844
	// Line 479, Address: 0x2cf54c, Func Offset: 0x84c
	// Line 480, Address: 0x2cf55c, Func Offset: 0x85c
	// Line 479, Address: 0x2cf560, Func Offset: 0x860
	// Line 480, Address: 0x2cf56c, Func Offset: 0x86c
	// Line 481, Address: 0x2cf570, Func Offset: 0x870
	// Line 480, Address: 0x2cf578, Func Offset: 0x878
	// Line 481, Address: 0x2cf57c, Func Offset: 0x87c
	// Line 479, Address: 0x2cf58c, Func Offset: 0x88c
	// Line 481, Address: 0x2cf590, Func Offset: 0x890
	// Line 487, Address: 0x2cf598, Func Offset: 0x898
	// Line 491, Address: 0x2cf5b0, Func Offset: 0x8b0
	// Line 487, Address: 0x2cf5b4, Func Offset: 0x8b4
	// Line 491, Address: 0x2cf5c4, Func Offset: 0x8c4
	// Line 487, Address: 0x2cf5c8, Func Offset: 0x8c8
	// Line 491, Address: 0x2cf5cc, Func Offset: 0x8cc
	// Line 488, Address: 0x2cf5d0, Func Offset: 0x8d0
	// Line 491, Address: 0x2cf5d4, Func Offset: 0x8d4
	// Line 488, Address: 0x2cf5dc, Func Offset: 0x8dc
	// Line 491, Address: 0x2cf5e0, Func Offset: 0x8e0
	// Line 488, Address: 0x2cf5e8, Func Offset: 0x8e8
	// Line 491, Address: 0x2cf5ec, Func Offset: 0x8ec
	// Line 488, Address: 0x2cf614, Func Offset: 0x914
	// Line 491, Address: 0x2cf620, Func Offset: 0x920
	// Line 505, Address: 0x2cf644, Func Offset: 0x944
	// Line 487, Address: 0x2cf648, Func Offset: 0x948
	// Line 488, Address: 0x2cf64c, Func Offset: 0x94c
	// Line 491, Address: 0x2cf650, Func Offset: 0x950
	// Line 505, Address: 0x2cf660, Func Offset: 0x960
	// Line 511, Address: 0x2cf66c, Func Offset: 0x96c
	// Line 520, Address: 0x2cf678, Func Offset: 0x978
	// Line 511, Address: 0x2cf67c, Func Offset: 0x97c
	// Line 512, Address: 0x2cf680, Func Offset: 0x980
	// Line 513, Address: 0x2cf688, Func Offset: 0x988
	// Line 520, Address: 0x2cf68c, Func Offset: 0x98c
	// Line 511, Address: 0x2cf694, Func Offset: 0x994
	// Line 520, Address: 0x2cf6ac, Func Offset: 0x9ac
	// Line 511, Address: 0x2cf6b0, Func Offset: 0x9b0
	// Line 520, Address: 0x2cf6b8, Func Offset: 0x9b8
	// Line 511, Address: 0x2cf6bc, Func Offset: 0x9bc
	// Line 520, Address: 0x2cf6c0, Func Offset: 0x9c0
	// Line 519, Address: 0x2cf6c4, Func Offset: 0x9c4
	// Line 518, Address: 0x2cf6d0, Func Offset: 0x9d0
	// Line 511, Address: 0x2cf6d4, Func Offset: 0x9d4
	// Line 526, Address: 0x2cf6d8, Func Offset: 0x9d8
	// Line 530, Address: 0x2cf6e0, Func Offset: 0x9e0
	// Line 532, Address: 0x2cf6f8, Func Offset: 0x9f8
	// Line 536, Address: 0x2cf6fc, Func Offset: 0x9fc
	// Line 539, Address: 0x2cf70c, Func Offset: 0xa0c
	// Line 540, Address: 0x2cf73c, Func Offset: 0xa3c
	// Line 539, Address: 0x2cf744, Func Offset: 0xa44
	// Line 542, Address: 0x2cf758, Func Offset: 0xa58
	// Line 539, Address: 0x2cf75c, Func Offset: 0xa5c
	// Line 540, Address: 0x2cf764, Func Offset: 0xa64
	// Line 542, Address: 0x2cf778, Func Offset: 0xa78
	// Line 543, Address: 0x2cf784, Func Offset: 0xa84
	// Line 542, Address: 0x2cf78c, Func Offset: 0xa8c
	// Line 543, Address: 0x2cf7a4, Func Offset: 0xaa4
	// Line 544, Address: 0x2cf7b0, Func Offset: 0xab0
	// Line 543, Address: 0x2cf7c8, Func Offset: 0xac8
	// Line 544, Address: 0x2cf7cc, Func Offset: 0xacc
	// Line 543, Address: 0x2cf7d0, Func Offset: 0xad0
	// Line 544, Address: 0x2cf7d8, Func Offset: 0xad8
	// Line 543, Address: 0x2cf7dc, Func Offset: 0xadc
	// Line 544, Address: 0x2cf7e0, Func Offset: 0xae0
	// Line 546, Address: 0x2cf7f4, Func Offset: 0xaf4
	// Line 544, Address: 0x2cf7fc, Func Offset: 0xafc
	// Line 546, Address: 0x2cf804, Func Offset: 0xb04
	// Line 548, Address: 0x2cf830, Func Offset: 0xb30
	// Line 549, Address: 0x2cf838, Func Offset: 0xb38
	// Line 552, Address: 0x2cf83c, Func Offset: 0xb3c
	// Line 549, Address: 0x2cf844, Func Offset: 0xb44
	// Line 554, Address: 0x2cf884, Func Offset: 0xb84
	// Line 557, Address: 0x2cf888, Func Offset: 0xb88
	// Line 637, Address: 0x2cf890, Func Offset: 0xb90
	// Line 557, Address: 0x2cf894, Func Offset: 0xb94
	// Line 552, Address: 0x2cf898, Func Offset: 0xb98
	// Line 557, Address: 0x2cf89c, Func Offset: 0xb9c
	// Line 552, Address: 0x2cf8b0, Func Offset: 0xbb0
	// Line 557, Address: 0x2cf8b4, Func Offset: 0xbb4
	// Line 552, Address: 0x2cf8d4, Func Offset: 0xbd4
	// Line 557, Address: 0x2cf8d8, Func Offset: 0xbd8
	// Line 626, Address: 0x2cf8fc, Func Offset: 0xbfc
	// Line 557, Address: 0x2cf900, Func Offset: 0xc00
	// Line 640, Address: 0x2cf918, Func Offset: 0xc18
	// Line 557, Address: 0x2cf91c, Func Offset: 0xc1c
	// Line 625, Address: 0x2cf950, Func Offset: 0xc50
	// Line 557, Address: 0x2cf958, Func Offset: 0xc58
	// Line 625, Address: 0x2cf95c, Func Offset: 0xc5c
	// Line 557, Address: 0x2cf964, Func Offset: 0xc64
	// Line 631, Address: 0x2cf968, Func Offset: 0xc68
	// Line 625, Address: 0x2cf96c, Func Offset: 0xc6c
	// Line 557, Address: 0x2cf970, Func Offset: 0xc70
	// Line 625, Address: 0x2cf974, Func Offset: 0xc74
	// Line 626, Address: 0x2cf97c, Func Offset: 0xc7c
	// Line 631, Address: 0x2cf980, Func Offset: 0xc80
	// Line 626, Address: 0x2cf984, Func Offset: 0xc84
	// Line 631, Address: 0x2cf988, Func Offset: 0xc88
	// Line 626, Address: 0x2cf98c, Func Offset: 0xc8c
	// Line 557, Address: 0x2cf990, Func Offset: 0xc90
	// Line 626, Address: 0x2cf994, Func Offset: 0xc94
	// Line 625, Address: 0x2cf998, Func Offset: 0xc98
	// Line 627, Address: 0x2cf99c, Func Offset: 0xc9c
	// Line 625, Address: 0x2cf9a0, Func Offset: 0xca0
	// Line 628, Address: 0x2cf9a4, Func Offset: 0xca4
	// Line 631, Address: 0x2cf9ac, Func Offset: 0xcac
	// Line 632, Address: 0x2cf9b8, Func Offset: 0xcb8
	// Line 625, Address: 0x2cf9bc, Func Offset: 0xcbc
	// Line 632, Address: 0x2cf9c0, Func Offset: 0xcc0
	// Line 631, Address: 0x2cf9c4, Func Offset: 0xcc4
	// Line 632, Address: 0x2cf9c8, Func Offset: 0xcc8
	// Line 631, Address: 0x2cf9cc, Func Offset: 0xccc
	// Line 632, Address: 0x2cf9d0, Func Offset: 0xcd0
	// Line 631, Address: 0x2cf9d4, Func Offset: 0xcd4
	// Line 633, Address: 0x2cf9d8, Func Offset: 0xcd8
	// Line 634, Address: 0x2cf9dc, Func Offset: 0xcdc
	// Line 625, Address: 0x2cf9e0, Func Offset: 0xce0
	// Line 631, Address: 0x2cf9e4, Func Offset: 0xce4
	// Line 636, Address: 0x2cf9e8, Func Offset: 0xce8
	// Line 631, Address: 0x2cf9ec, Func Offset: 0xcec
	// Line 641, Address: 0x2cf9f0, Func Offset: 0xcf0
	// Line 640, Address: 0x2cf9fc, Func Offset: 0xcfc
	// Line 656, Address: 0x2cfa00, Func Offset: 0xd00
	// Line 641, Address: 0x2cfa04, Func Offset: 0xd04
	// Line 669, Address: 0x2cfa08, Func Offset: 0xd08
	// Line 656, Address: 0x2cfa0c, Func Offset: 0xd0c
	// Line 641, Address: 0x2cfa10, Func Offset: 0xd10
	// Line 670, Address: 0x2cfa14, Func Offset: 0xd14
	// Line 656, Address: 0x2cfa1c, Func Offset: 0xd1c
	// Line 641, Address: 0x2cfa24, Func Offset: 0xd24
	// Line 656, Address: 0x2cfa28, Func Offset: 0xd28
	// Line 669, Address: 0x2cfa2c, Func Offset: 0xd2c
	// Line 656, Address: 0x2cfa30, Func Offset: 0xd30
	// Line 662, Address: 0x2cfa38, Func Offset: 0xd38
	// Line 657, Address: 0x2cfa3c, Func Offset: 0xd3c
	// Line 656, Address: 0x2cfa40, Func Offset: 0xd40
	// Line 657, Address: 0x2cfa44, Func Offset: 0xd44
	// Line 656, Address: 0x2cfa4c, Func Offset: 0xd4c
	// Line 657, Address: 0x2cfa50, Func Offset: 0xd50
	// Line 656, Address: 0x2cfa54, Func Offset: 0xd54
	// Line 658, Address: 0x2cfa58, Func Offset: 0xd58
	// Line 659, Address: 0x2cfa5c, Func Offset: 0xd5c
	// Line 656, Address: 0x2cfa60, Func Offset: 0xd60
	// Line 662, Address: 0x2cfa64, Func Offset: 0xd64
	// Line 669, Address: 0x2cfa80, Func Offset: 0xd80
	// Line 663, Address: 0x2cfa84, Func Offset: 0xd84
	// Line 662, Address: 0x2cfa88, Func Offset: 0xd88
	// Line 663, Address: 0x2cfa8c, Func Offset: 0xd8c
	// Line 662, Address: 0x2cfa90, Func Offset: 0xd90
	// Line 663, Address: 0x2cfa94, Func Offset: 0xd94
	// Line 662, Address: 0x2cfa98, Func Offset: 0xd98
	// Line 663, Address: 0x2cfa9c, Func Offset: 0xd9c
	// Line 664, Address: 0x2cfaa0, Func Offset: 0xda0
	// Line 665, Address: 0x2cfaa4, Func Offset: 0xda4
	// Line 670, Address: 0x2cfaa8, Func Offset: 0xda8
	// Line 674, Address: 0x2cfab0, Func Offset: 0xdb0
	// Line 675, Address: 0x2cfac0, Func Offset: 0xdc0
	// Line 676, Address: 0x2cfac8, Func Offset: 0xdc8
	// Line 678, Address: 0x2cfacc, Func Offset: 0xdcc
	// Line 679, Address: 0x2cfad0, Func Offset: 0xdd0
	// Line 685, Address: 0x2cfafc, Func Offset: 0xdfc
	// Line 679, Address: 0x2cfb04, Func Offset: 0xe04
	// Line 690, Address: 0x2cfb08, Func Offset: 0xe08
	// Line 686, Address: 0x2cfb10, Func Offset: 0xe10
	// Line 685, Address: 0x2cfb14, Func Offset: 0xe14
	// Line 692, Address: 0x2cfb18, Func Offset: 0xe18
	// Line 685, Address: 0x2cfb1c, Func Offset: 0xe1c
	// Line 686, Address: 0x2cfb34, Func Offset: 0xe34
	// Line 685, Address: 0x2cfb38, Func Offset: 0xe38
	// Line 686, Address: 0x2cfb3c, Func Offset: 0xe3c
	// Line 685, Address: 0x2cfb40, Func Offset: 0xe40
	// Line 686, Address: 0x2cfb44, Func Offset: 0xe44
	// Line 685, Address: 0x2cfb48, Func Offset: 0xe48
	// Line 686, Address: 0x2cfb4c, Func Offset: 0xe4c
	// Line 695, Address: 0x2cfb50, Func Offset: 0xe50
	// Line 687, Address: 0x2cfb54, Func Offset: 0xe54
	// Line 688, Address: 0x2cfb58, Func Offset: 0xe58
	// Line 695, Address: 0x2cfb5c, Func Offset: 0xe5c
	// Line 700, Address: 0x2cfb64, Func Offset: 0xe64
	// Line 705, Address: 0x2cfb78, Func Offset: 0xe78
	// Line 700, Address: 0x2cfb80, Func Offset: 0xe80
	// Line 701, Address: 0x2cfb90, Func Offset: 0xe90
	// Line 700, Address: 0x2cfb98, Func Offset: 0xe98
	// Line 701, Address: 0x2cfbbc, Func Offset: 0xebc
	// Line 705, Address: 0x2cfbfc, Func Offset: 0xefc
	// Line 706, Address: 0x2cfc10, Func Offset: 0xf10
	// Line 705, Address: 0x2cfc14, Func Offset: 0xf14
	// Line 706, Address: 0x2cfc18, Func Offset: 0xf18
	// Line 705, Address: 0x2cfc24, Func Offset: 0xf24
	// Line 706, Address: 0x2cfc34, Func Offset: 0xf34
	// Line 709, Address: 0x2cfcc8, Func Offset: 0xfc8
	// Line 711, Address: 0x2cfccc, Func Offset: 0xfcc
	// Line 706, Address: 0x2cfcd0, Func Offset: 0xfd0
	// Line 709, Address: 0x2cfcf0, Func Offset: 0xff0
	// Line 711, Address: 0x2cfcf8, Func Offset: 0xff8
	// Line 712, Address: 0x2cfd50, Func Offset: 0x1050
	// Line 715, Address: 0x2cfd60, Func Offset: 0x1060
	// Line 722, Address: 0x2cfd7c, Func Offset: 0x107c
	// Line 721, Address: 0x2cfd9c, Func Offset: 0x109c
	// Line 729, Address: 0x2cfda0, Func Offset: 0x10a0
	// Line 722, Address: 0x2cfda4, Func Offset: 0x10a4
	// Line 719, Address: 0x2cfdac, Func Offset: 0x10ac
	// Line 718, Address: 0x2cfdb0, Func Offset: 0x10b0
	// Line 715, Address: 0x2cfdb4, Func Offset: 0x10b4
	// Line 738, Address: 0x2cfdb8, Func Offset: 0x10b8
	// Line 715, Address: 0x2cfdbc, Func Offset: 0x10bc
	// Line 722, Address: 0x2cfdc0, Func Offset: 0x10c0
	// Line 738, Address: 0x2cfdc8, Func Offset: 0x10c8
	// Line 722, Address: 0x2cfdcc, Func Offset: 0x10cc
	// Line 738, Address: 0x2cfdd0, Func Offset: 0x10d0
	// Line 715, Address: 0x2cfde8, Func Offset: 0x10e8
	// Line 722, Address: 0x2cfdf0, Func Offset: 0x10f0
	// Line 715, Address: 0x2cfdf4, Func Offset: 0x10f4
	// Line 722, Address: 0x2cfdf8, Func Offset: 0x10f8
	// Line 738, Address: 0x2cfdfc, Func Offset: 0x10fc
	// Line 715, Address: 0x2cfe00, Func Offset: 0x1100
	// Line 722, Address: 0x2cfe0c, Func Offset: 0x110c
	// Line 738, Address: 0x2cfe10, Func Offset: 0x1110
	// Line 722, Address: 0x2cfe14, Func Offset: 0x1114
	// Line 715, Address: 0x2cfe28, Func Offset: 0x1128
	// Line 722, Address: 0x2cfe2c, Func Offset: 0x112c
	// Line 729, Address: 0x2cfe38, Func Offset: 0x1138
	// Line 738, Address: 0x2cfe3c, Func Offset: 0x113c
	// Line 722, Address: 0x2cfe40, Func Offset: 0x1140
	// Line 725, Address: 0x2cfe44, Func Offset: 0x1144
	// Line 738, Address: 0x2cfe48, Func Offset: 0x1148
	// Line 722, Address: 0x2cfe4c, Func Offset: 0x114c
	// Line 725, Address: 0x2cfe58, Func Offset: 0x1158
	// Line 722, Address: 0x2cfe5c, Func Offset: 0x115c
	// Line 738, Address: 0x2cfe68, Func Offset: 0x1168
	// Line 722, Address: 0x2cfe6c, Func Offset: 0x116c
	// Line 725, Address: 0x2cfe8c, Func Offset: 0x118c
	// Line 722, Address: 0x2cfe90, Func Offset: 0x1190
	// Line 725, Address: 0x2cfe98, Func Offset: 0x1198
	// Line 722, Address: 0x2cfe9c, Func Offset: 0x119c
	// Line 738, Address: 0x2cfea0, Func Offset: 0x11a0
	// Line 722, Address: 0x2cfea4, Func Offset: 0x11a4
	// Line 725, Address: 0x2cfeb0, Func Offset: 0x11b0
	// Line 722, Address: 0x2cfeb4, Func Offset: 0x11b4
	// Line 738, Address: 0x2cfebc, Func Offset: 0x11bc
	// Line 722, Address: 0x2cfec0, Func Offset: 0x11c0
	// Line 725, Address: 0x2cfec4, Func Offset: 0x11c4
	// Line 722, Address: 0x2cfed0, Func Offset: 0x11d0
	// Line 726, Address: 0x2cfed4, Func Offset: 0x11d4
	// Line 725, Address: 0x2cfed8, Func Offset: 0x11d8
	// Line 726, Address: 0x2cfeec, Func Offset: 0x11ec
	// Line 725, Address: 0x2cfef4, Func Offset: 0x11f4
	// Line 726, Address: 0x2cfef8, Func Offset: 0x11f8
	// Line 729, Address: 0x2cfefc, Func Offset: 0x11fc
	// Line 726, Address: 0x2cff00, Func Offset: 0x1200
	// Line 728, Address: 0x2cff04, Func Offset: 0x1204
	// Line 726, Address: 0x2cff08, Func Offset: 0x1208
	// Line 729, Address: 0x2cff10, Func Offset: 0x1210
	// Line 726, Address: 0x2cff14, Func Offset: 0x1214
	// Line 738, Address: 0x2cff1c, Func Offset: 0x121c
	// Line 729, Address: 0x2cff20, Func Offset: 0x1220
	// Line 738, Address: 0x2cff30, Func Offset: 0x1230
	// Line 742, Address: 0x2cff3c, Func Offset: 0x123c
	// Line 745, Address: 0x2cff50, Func Offset: 0x1250
	// Line 753, Address: 0x2cffa0, Func Offset: 0x12a0
	// Line 748, Address: 0x2cffa4, Func Offset: 0x12a4
	// Line 753, Address: 0x2cffa8, Func Offset: 0x12a8
	// Line 748, Address: 0x2cffbc, Func Offset: 0x12bc
	// Line 749, Address: 0x2cffc4, Func Offset: 0x12c4
	// Line 753, Address: 0x2d001c, Func Offset: 0x131c
	// Line 749, Address: 0x2d0020, Func Offset: 0x1320
	// Line 756, Address: 0x2d0028, Func Offset: 0x1328
	// Line 749, Address: 0x2d002c, Func Offset: 0x132c
	// Line 753, Address: 0x2d0034, Func Offset: 0x1334
	// Line 749, Address: 0x2d0040, Func Offset: 0x1340
	// Line 753, Address: 0x2d0044, Func Offset: 0x1344
	// Line 756, Address: 0x2d0048, Func Offset: 0x1348
	// Line 753, Address: 0x2d004c, Func Offset: 0x134c
	// Line 754, Address: 0x2d0054, Func Offset: 0x1354
	// Line 756, Address: 0x2d0068, Func Offset: 0x1368
	// Line 821, Address: 0x2d0070, Func Offset: 0x1370
	// Line 822, Address: 0x2d0078, Func Offset: 0x1378
	// Line 831, Address: 0x2d0080, Func Offset: 0x1380
	// Line 822, Address: 0x2d008c, Func Offset: 0x138c
	// Line 825, Address: 0x2d0090, Func Offset: 0x1390
	// Line 826, Address: 0x2d00ac, Func Offset: 0x13ac
	// Line 825, Address: 0x2d00b0, Func Offset: 0x13b0
	// Line 826, Address: 0x2d00b4, Func Offset: 0x13b4
	// Line 825, Address: 0x2d00b8, Func Offset: 0x13b8
	// Line 826, Address: 0x2d00bc, Func Offset: 0x13bc
	// Line 825, Address: 0x2d00c0, Func Offset: 0x13c0
	// Line 826, Address: 0x2d00c4, Func Offset: 0x13c4
	// Line 825, Address: 0x2d00c8, Func Offset: 0x13c8
	// Line 827, Address: 0x2d00cc, Func Offset: 0x13cc
	// Line 828, Address: 0x2d00d0, Func Offset: 0x13d0
	// Line 830, Address: 0x2d00d4, Func Offset: 0x13d4
	// Line 831, Address: 0x2d00dc, Func Offset: 0x13dc
	// Line 847, Address: 0x2d00e0, Func Offset: 0x13e0
	// Line 838, Address: 0x2d00f0, Func Offset: 0x13f0
	// Line 831, Address: 0x2d00f4, Func Offset: 0x13f4
	// Line 835, Address: 0x2d00fc, Func Offset: 0x13fc
	// Line 838, Address: 0x2d0108, Func Offset: 0x1408
	// Line 835, Address: 0x2d010c, Func Offset: 0x140c
	// Line 850, Address: 0x2d0110, Func Offset: 0x1410
	// Line 841, Address: 0x2d0114, Func Offset: 0x1414
	// Line 835, Address: 0x2d0120, Func Offset: 0x1420
	// Line 836, Address: 0x2d012c, Func Offset: 0x142c
	// Line 837, Address: 0x2d0140, Func Offset: 0x1440
	// Line 838, Address: 0x2d0144, Func Offset: 0x1444
	// Line 841, Address: 0x2d0148, Func Offset: 0x1448
	// Line 842, Address: 0x2d0154, Func Offset: 0x1454
	// Line 835, Address: 0x2d0158, Func Offset: 0x1458
	// Line 842, Address: 0x2d015c, Func Offset: 0x145c
	// Line 835, Address: 0x2d0160, Func Offset: 0x1460
	// Line 842, Address: 0x2d0164, Func Offset: 0x1464
	// Line 835, Address: 0x2d0168, Func Offset: 0x1468
	// Line 842, Address: 0x2d016c, Func Offset: 0x146c
	// Line 841, Address: 0x2d0170, Func Offset: 0x1470
	// Line 843, Address: 0x2d0174, Func Offset: 0x1474
	// Line 844, Address: 0x2d0178, Func Offset: 0x1478
	// Line 841, Address: 0x2d017c, Func Offset: 0x147c
	// Line 846, Address: 0x2d0180, Func Offset: 0x1480
	// Line 841, Address: 0x2d0184, Func Offset: 0x1484
	// Line 878, Address: 0x2d0188, Func Offset: 0x1488
	// Line 851, Address: 0x2d018c, Func Offset: 0x148c
	// Line 866, Address: 0x2d0190, Func Offset: 0x1490
	// Line 851, Address: 0x2d0194, Func Offset: 0x1494
	// Line 879, Address: 0x2d0198, Func Offset: 0x1498
	// Line 866, Address: 0x2d01a0, Func Offset: 0x14a0
	// Line 851, Address: 0x2d01a8, Func Offset: 0x14a8
	// Line 866, Address: 0x2d01ac, Func Offset: 0x14ac
	// Line 878, Address: 0x2d01b0, Func Offset: 0x14b0
	// Line 866, Address: 0x2d01b4, Func Offset: 0x14b4
	// Line 872, Address: 0x2d01bc, Func Offset: 0x14bc
	// Line 867, Address: 0x2d01c0, Func Offset: 0x14c0
	// Line 866, Address: 0x2d01c4, Func Offset: 0x14c4
	// Line 867, Address: 0x2d01c8, Func Offset: 0x14c8
	// Line 872, Address: 0x2d01cc, Func Offset: 0x14cc
	// Line 867, Address: 0x2d01d0, Func Offset: 0x14d0
	// Line 872, Address: 0x2d01d4, Func Offset: 0x14d4
	// Line 867, Address: 0x2d01d8, Func Offset: 0x14d8
	// Line 868, Address: 0x2d01dc, Func Offset: 0x14dc
	// Line 869, Address: 0x2d01e0, Func Offset: 0x14e0
	// Line 872, Address: 0x2d01e4, Func Offset: 0x14e4
	// Line 866, Address: 0x2d01e8, Func Offset: 0x14e8
	// Line 872, Address: 0x2d01ec, Func Offset: 0x14ec
	// Line 878, Address: 0x2d01f4, Func Offset: 0x14f4
	// Line 873, Address: 0x2d01f8, Func Offset: 0x14f8
	// Line 866, Address: 0x2d01fc, Func Offset: 0x14fc
	// Line 873, Address: 0x2d0200, Func Offset: 0x1500
	// Line 872, Address: 0x2d0204, Func Offset: 0x1504
	// Line 873, Address: 0x2d0208, Func Offset: 0x1508
	// Line 872, Address: 0x2d020c, Func Offset: 0x150c
	// Line 873, Address: 0x2d0210, Func Offset: 0x1510
	// Line 872, Address: 0x2d0214, Func Offset: 0x1514
	// Line 874, Address: 0x2d0218, Func Offset: 0x1518
	// Line 875, Address: 0x2d021c, Func Offset: 0x151c
	// Line 879, Address: 0x2d0220, Func Offset: 0x1520
	// Line 883, Address: 0x2d0228, Func Offset: 0x1528
	// Line 884, Address: 0x2d0238, Func Offset: 0x1538
	// Line 887, Address: 0x2d0240, Func Offset: 0x1540
	// Line 886, Address: 0x2d0244, Func Offset: 0x1544
	// Line 888, Address: 0x2d0248, Func Offset: 0x1548
	// Line 889, Address: 0x2d026c, Func Offset: 0x156c
	// Line 892, Address: 0x2d0274, Func Offset: 0x1574
	// Line 894, Address: 0x2d0278, Func Offset: 0x1578
	// Line 892, Address: 0x2d027c, Func Offset: 0x157c
	// Line 894, Address: 0x2d0280, Func Offset: 0x1580
	// Line 892, Address: 0x2d0284, Func Offset: 0x1584
	// Line 893, Address: 0x2d0288, Func Offset: 0x1588
	// Line 892, Address: 0x2d0290, Func Offset: 0x1590
	// Line 893, Address: 0x2d02a8, Func Offset: 0x15a8
	// Line 892, Address: 0x2d02ac, Func Offset: 0x15ac
	// Line 893, Address: 0x2d02bc, Func Offset: 0x15bc
	// Line 894, Address: 0x2d02e8, Func Offset: 0x15e8
	// Line 898, Address: 0x2d02fc, Func Offset: 0x15fc
	// Line 894, Address: 0x2d0300, Func Offset: 0x1600
	// Line 898, Address: 0x2d0304, Func Offset: 0x1604
	// Line 894, Address: 0x2d0310, Func Offset: 0x1610
	// Line 898, Address: 0x2d0320, Func Offset: 0x1620
	// Line 902, Address: 0x2d03a4, Func Offset: 0x16a4
	// Line 898, Address: 0x2d03a8, Func Offset: 0x16a8
	// Line 904, Address: 0x2d03ac, Func Offset: 0x16ac
	// Line 899, Address: 0x2d03b0, Func Offset: 0x16b0
	// Line 898, Address: 0x2d03bc, Func Offset: 0x16bc
	// Line 899, Address: 0x2d03c4, Func Offset: 0x16c4
	// Line 898, Address: 0x2d03c8, Func Offset: 0x16c8
	// Line 899, Address: 0x2d03e8, Func Offset: 0x16e8
	// Line 902, Address: 0x2d03fc, Func Offset: 0x16fc
	// Line 904, Address: 0x2d0404, Func Offset: 0x1704
	// Line 905, Address: 0x2d045c, Func Offset: 0x175c
	// Line 921, Address: 0x2d046c, Func Offset: 0x176c
	// Line 918, Address: 0x2d047c, Func Offset: 0x177c
	// Line 921, Address: 0x2d0480, Func Offset: 0x1780
	// Line 918, Address: 0x2d0484, Func Offset: 0x1784
	// Line 921, Address: 0x2d0488, Func Offset: 0x1788
	// Line 917, Address: 0x2d0498, Func Offset: 0x1798
	// Line 918, Address: 0x2d04a0, Func Offset: 0x17a0
	// Line 921, Address: 0x2d04a4, Func Offset: 0x17a4
	// Line 924, Address: 0x2d04a8, Func Offset: 0x17a8
	// Line 934, Address: 0x2d04ac, Func Offset: 0x17ac
	// Line 921, Address: 0x2d04b0, Func Offset: 0x17b0
	// Line 934, Address: 0x2d0544, Func Offset: 0x1844
	// Line 938, Address: 0x2d054c, Func Offset: 0x184c
	// Line 939, Address: 0x2d0550, Func Offset: 0x1850
	// Line 940, Address: 0x2d0554, Func Offset: 0x1854
	// Line 941, Address: 0x2d0558, Func Offset: 0x1858
	// Line 938, Address: 0x2d055c, Func Offset: 0x185c
	// Line 939, Address: 0x2d0560, Func Offset: 0x1860
	// Line 940, Address: 0x2d0568, Func Offset: 0x1868
	// Line 941, Address: 0x2d0570, Func Offset: 0x1870
	// Line 945, Address: 0x2d0588, Func Offset: 0x1888
	// Line 941, Address: 0x2d0594, Func Offset: 0x1894
	// Line 945, Address: 0x2d05a8, Func Offset: 0x18a8
	// Line 941, Address: 0x2d05ac, Func Offset: 0x18ac
	// Line 944, Address: 0x2d05b0, Func Offset: 0x18b0
	// Line 945, Address: 0x2d05e4, Func Offset: 0x18e4
	// Line 946, Address: 0x2d05ec, Func Offset: 0x18ec
	// Line 947, Address: 0x2d0698, Func Offset: 0x1998
	// Line 950, Address: 0x2d069c, Func Offset: 0x199c
	// Line 947, Address: 0x2d06a0, Func Offset: 0x19a0
	// Line 949, Address: 0x2d06a4, Func Offset: 0x19a4
	// Line 947, Address: 0x2d06a8, Func Offset: 0x19a8
	// Line 946, Address: 0x2d06b8, Func Offset: 0x19b8
	// Line 947, Address: 0x2d06d0, Func Offset: 0x19d0
	// Line 946, Address: 0x2d06e0, Func Offset: 0x19e0
	// Line 950, Address: 0x2d0700, Func Offset: 0x1a00
	// Line 953, Address: 0x2d0718, Func Offset: 0x1a18
	// Line 949, Address: 0x2d0724, Func Offset: 0x1a24
	// Line 950, Address: 0x2d072c, Func Offset: 0x1a2c
	// Line 953, Address: 0x2d0784, Func Offset: 0x1a84
	// Line 950, Address: 0x2d0788, Func Offset: 0x1a88
	// Line 953, Address: 0x2d078c, Func Offset: 0x1a8c
	// Line 950, Address: 0x2d0798, Func Offset: 0x1a98
	// Line 955, Address: 0x2d07a0, Func Offset: 0x1aa0
	// Line 950, Address: 0x2d07ac, Func Offset: 0x1aac
	// Line 953, Address: 0x2d07b0, Func Offset: 0x1ab0
	// Line 955, Address: 0x2d07c4, Func Offset: 0x1ac4
	// Line 957, Address: 0x2d07e0, Func Offset: 0x1ae0
	// Line 1022, Address: 0x2d0810, Func Offset: 0x1b10
	// Line 1027, Address: 0x2d081c, Func Offset: 0x1b1c
	// Line 1023, Address: 0x2d0820, Func Offset: 0x1b20
	// Line 1032, Address: 0x2d082c, Func Offset: 0x1b2c
	// Line 1023, Address: 0x2d0834, Func Offset: 0x1b34
	// Line 1026, Address: 0x2d0838, Func Offset: 0x1b38
	// Line 1029, Address: 0x2d0844, Func Offset: 0x1b44
	// Line 1026, Address: 0x2d0848, Func Offset: 0x1b48
	// Line 1027, Address: 0x2d0858, Func Offset: 0x1b58
	// Line 1026, Address: 0x2d085c, Func Offset: 0x1b5c
	// Line 1027, Address: 0x2d0860, Func Offset: 0x1b60
	// Line 1026, Address: 0x2d0864, Func Offset: 0x1b64
	// Line 1027, Address: 0x2d0868, Func Offset: 0x1b68
	// Line 1026, Address: 0x2d086c, Func Offset: 0x1b6c
	// Line 1027, Address: 0x2d0870, Func Offset: 0x1b70
	// Line 1026, Address: 0x2d0874, Func Offset: 0x1b74
	// Line 1028, Address: 0x2d0878, Func Offset: 0x1b78
	// Line 1029, Address: 0x2d087c, Func Offset: 0x1b7c
	// Line 1031, Address: 0x2d0880, Func Offset: 0x1b80
	// Line 1036, Address: 0x2d0884, Func Offset: 0x1b84
	// Line 1032, Address: 0x2d088c, Func Offset: 0x1b8c
	// Line 1048, Address: 0x2d0890, Func Offset: 0x1b90
	// Line 1037, Address: 0x2d0898, Func Offset: 0x1b98
	// Line 1039, Address: 0x2d08a4, Func Offset: 0x1ba4
	// Line 1051, Address: 0x2d08a8, Func Offset: 0x1ba8
	// Line 1032, Address: 0x2d08ac, Func Offset: 0x1bac
	// Line 1036, Address: 0x2d08b4, Func Offset: 0x1bb4
	// Line 1039, Address: 0x2d08c0, Func Offset: 0x1bc0
	// Line 1036, Address: 0x2d08c4, Func Offset: 0x1bc4
	// Line 1037, Address: 0x2d08ec, Func Offset: 0x1bec
	// Line 1042, Address: 0x2d08f0, Func Offset: 0x1bf0
	// Line 1037, Address: 0x2d08f4, Func Offset: 0x1bf4
	// Line 1042, Address: 0x2d08fc, Func Offset: 0x1bfc
	// Line 1037, Address: 0x2d0900, Func Offset: 0x1c00
	// Line 1042, Address: 0x2d0904, Func Offset: 0x1c04
	// Line 1038, Address: 0x2d0908, Func Offset: 0x1c08
	// Line 1042, Address: 0x2d090c, Func Offset: 0x1c0c
	// Line 1039, Address: 0x2d0910, Func Offset: 0x1c10
	// Line 1042, Address: 0x2d0918, Func Offset: 0x1c18
	// Line 1043, Address: 0x2d0924, Func Offset: 0x1c24
	// Line 1042, Address: 0x2d0928, Func Offset: 0x1c28
	// Line 1043, Address: 0x2d092c, Func Offset: 0x1c2c
	// Line 1042, Address: 0x2d0930, Func Offset: 0x1c30
	// Line 1043, Address: 0x2d0934, Func Offset: 0x1c34
	// Line 1042, Address: 0x2d0938, Func Offset: 0x1c38
	// Line 1043, Address: 0x2d093c, Func Offset: 0x1c3c
	// Line 1042, Address: 0x2d0940, Func Offset: 0x1c40
	// Line 1044, Address: 0x2d0944, Func Offset: 0x1c44
	// Line 1045, Address: 0x2d0948, Func Offset: 0x1c48
	// Line 1047, Address: 0x2d094c, Func Offset: 0x1c4c
	// Line 1067, Address: 0x2d0950, Func Offset: 0x1c50
	// Line 1052, Address: 0x2d0954, Func Offset: 0x1c54
	// Line 1079, Address: 0x2d0958, Func Offset: 0x1c58
	// Line 1067, Address: 0x2d095c, Func Offset: 0x1c5c
	// Line 1052, Address: 0x2d0960, Func Offset: 0x1c60
	// Line 1080, Address: 0x2d0964, Func Offset: 0x1c64
	// Line 1067, Address: 0x2d096c, Func Offset: 0x1c6c
	// Line 1052, Address: 0x2d0974, Func Offset: 0x1c74
	// Line 1067, Address: 0x2d0978, Func Offset: 0x1c78
	// Line 1079, Address: 0x2d097c, Func Offset: 0x1c7c
	// Line 1067, Address: 0x2d0980, Func Offset: 0x1c80
	// Line 1073, Address: 0x2d0988, Func Offset: 0x1c88
	// Line 1068, Address: 0x2d098c, Func Offset: 0x1c8c
	// Line 1067, Address: 0x2d0990, Func Offset: 0x1c90
	// Line 1068, Address: 0x2d0994, Func Offset: 0x1c94
	// Line 1067, Address: 0x2d099c, Func Offset: 0x1c9c
	// Line 1068, Address: 0x2d09a0, Func Offset: 0x1ca0
	// Line 1067, Address: 0x2d09a4, Func Offset: 0x1ca4
	// Line 1069, Address: 0x2d09a8, Func Offset: 0x1ca8
	// Line 1070, Address: 0x2d09ac, Func Offset: 0x1cac
	// Line 1067, Address: 0x2d09b0, Func Offset: 0x1cb0
	// Line 1073, Address: 0x2d09b4, Func Offset: 0x1cb4
	// Line 1079, Address: 0x2d09d0, Func Offset: 0x1cd0
	// Line 1074, Address: 0x2d09d4, Func Offset: 0x1cd4
	// Line 1073, Address: 0x2d09d8, Func Offset: 0x1cd8
	// Line 1074, Address: 0x2d09dc, Func Offset: 0x1cdc
	// Line 1073, Address: 0x2d09e0, Func Offset: 0x1ce0
	// Line 1074, Address: 0x2d09e4, Func Offset: 0x1ce4
	// Line 1073, Address: 0x2d09e8, Func Offset: 0x1ce8
	// Line 1074, Address: 0x2d09ec, Func Offset: 0x1cec
	// Line 1075, Address: 0x2d09f0, Func Offset: 0x1cf0
	// Line 1076, Address: 0x2d09f4, Func Offset: 0x1cf4
	// Line 1080, Address: 0x2d09f8, Func Offset: 0x1cf8
	// Line 1084, Address: 0x2d0a00, Func Offset: 0x1d00
	// Line 1085, Address: 0x2d0a10, Func Offset: 0x1d10
	// Line 1088, Address: 0x2d0a18, Func Offset: 0x1d18
	// Line 1087, Address: 0x2d0a1c, Func Offset: 0x1d1c
	// Line 1089, Address: 0x2d0a20, Func Offset: 0x1d20
	// Line 1090, Address: 0x2d0a44, Func Offset: 0x1d44
	// Line 1093, Address: 0x2d0a48, Func Offset: 0x1d48
	// Line 1105, Address: 0x2d0a50, Func Offset: 0x1d50
	// Line 1112, Address: 0x2d0a68, Func Offset: 0x1d68
	// Line 1113, Address: 0x2d0a70, Func Offset: 0x1d70
	// Line 1135, Address: 0x2d0a78, Func Offset: 0x1d78
	// Func End, Address: 0x2d0ad8, Func Offset: 0x1dd8
}

// zLasso_Init__FP6zLassoP14xModelInstancefff
// Start address: 0x2d0ae0
void zLasso_Init(zLasso* lasso, xModelInstance* model, float32 x, float32 y, float32 z)
{
	RwTexture* tempTexture;
	// Line 158, Address: 0x2d0ae0, Func Offset: 0
	// Line 159, Address: 0x2d0b04, Func Offset: 0x24
	// Line 160, Address: 0x2d0b0c, Func Offset: 0x2c
	// Line 169, Address: 0x2d0b1c, Func Offset: 0x3c
	// Line 174, Address: 0x2d0b34, Func Offset: 0x54
	// Line 170, Address: 0x2d0b38, Func Offset: 0x58
	// Line 174, Address: 0x2d0b3c, Func Offset: 0x5c
	// Line 178, Address: 0x2d0b40, Func Offset: 0x60
	// Line 161, Address: 0x2d0b54, Func Offset: 0x74
	// Line 178, Address: 0x2d0b58, Func Offset: 0x78
	// Line 164, Address: 0x2d0b6c, Func Offset: 0x8c
	// Line 178, Address: 0x2d0b7c, Func Offset: 0x9c
	// Func End, Address: 0x2d0b9c, Func Offset: 0xbc
}

