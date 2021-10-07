



void iModelAnimBoundWorld(xBox* box, xBox* combinedBox, RpAtomic* model, RwMatrixTag* mat, RwMatrixTag* bonemat);
void iModelAnimBoundPrepare(RpAtomic* model);
void iModelUnlock(RpAtomic* pModel);
RwTexCoords* iModelLockAndGetTextureCoords(RpAtomic* pModel, int32* numVertices);
void iModelMaterialMul(RpAtomic* model, float32 rm, float32 gm, float32 bm);
RpMaterial* iModelMaterialMulCB(RpMaterial* material, void* data);
void iModelSetMaterialTexture(RpAtomic* model, void* texture);
RpMaterial* iModelSetMaterialTextureCB(RpMaterial* material, void* data);
void iModelResetMaterial(RpAtomic* model);
void iModelSetMaterialAlpha(RpAtomic* model, uint8 alpha);
void iModelTagEval(RpAtomic* model, xModelTagWithNormal* tag, RwMatrixTag* mat, xVec3* dest, xVec3* normal);
void iModelTagEval(RpAtomic* model, xModelTag* tag, RwMatrixTag* mat, xVec3* dest);
uint32 iModelTagSetup(xModelTagWithNormal* tag, RpAtomic* model, float32 x, float32 y, float32 z);
uint32 iModelTagSetup(xModelTag* tag, RpAtomic* model, float32 x, float32 y, float32 z);
uint32 iModelTagInternal(xModelTag* tag, RpAtomic* model, float32 x, float32 y, float32 z, int32 closeV);
uint32 iModelTagUserData(xModelTag* tag, RpAtomic* model, float32 x, float32 y, float32 z, int32 closeV);
uint32 iModelNormalEval(xVec3* out, RpAtomic& m, RwMatrixTag* mat, uint32 index, int32 size, xVec3* in);
uint32 iModelVertEval(RpAtomic* model, uint32 index, uint32 count, RwMatrixTag* mat, xVec3* vert, xVec3* dest);
void iModel_SetLightKit(xLightKit* lightKit);
uint32 iModelVertCount(RpAtomic* model);
void iModelSetWorldBoundFromBox(RpAtomic* model, xBox* box);
xSphere* iModelWorldBoundSphere(RpAtomic* model, RwMatrixTag* mat, xSphere* sphere);
void iModelRender(RpAtomic* model, RwMatrixTag* mat);
void iModelAnimMatrices(RpAtomic* model, xQuat* quat, xVec3* tran, RwMatrixTag* mat);
void iModelQuatToMat(xQuat* quat, xVec3* tran, RwMatrixTag* mat);
uint32 iModelNumBones(RpAtomic* model);
RpAtomic* iModelFile_RWMultiAtomic(RpAtomic* model);
RpAtomic* NextAtomicCallback(RpAtomic* atomic, void* data);
void iModelUnload(RpAtomic* userdata);
RpAtomic* iModelFileNew(void* buffer, uint32 size);
RpAtomic* iModelStreamRead(RwStream* stream);
RpAtomic* FindAtomicCallback(RpAtomic* atomic);
void iModelInitOnce();
void iModelInit();
RpHAnimHierarchy* iModelGetHierarchy(RpAtomic* imodel);
RwFrame* GetChildFrameHierarchy(RwFrame* frame, void* data);

// iModelAnimBoundWorld__FP4xBoxP4xBoxP8RpAtomicP11RwMatrixTagP11RwMatrixTag
// Start address: 0x4ab8f0
void iModelAnimBoundWorld(xBox* box, xBox* combinedBox, RpAtomic* model, RwMatrixTag* mat, RwMatrixTag* bonemat)
{
	int32 i;
	int32* data;
	int32 count;
	RpUserDataArray* usrdat;
	int32 numbones;
	int32* boneidx;
	xSphere* bonesph;
	float32 maxscale;
	float32 scaleX;
	float32 scaleY;
	float32 scaleZ;
	// Line 2235, Address: 0x4ab8f0, Func Offset: 0
	// Line 2242, Address: 0x4ab924, Func Offset: 0x34
	// Line 2244, Address: 0x4ab934, Func Offset: 0x44
	// Line 2245, Address: 0x4ab944, Func Offset: 0x54
	// Line 2246, Address: 0x4ab950, Func Offset: 0x60
	// Line 2249, Address: 0x4ab968, Func Offset: 0x78
	// Line 2251, Address: 0x4ab978, Func Offset: 0x88
	// Line 2254, Address: 0x4ab97c, Func Offset: 0x8c
	// Line 2259, Address: 0x4ab988, Func Offset: 0x98
	// Line 2254, Address: 0x4ab990, Func Offset: 0xa0
	// Line 2253, Address: 0x4ab994, Func Offset: 0xa4
	// Line 2259, Address: 0x4ab998, Func Offset: 0xa8
	// Line 2252, Address: 0x4ab99c, Func Offset: 0xac
	// Line 2259, Address: 0x4ab9a0, Func Offset: 0xb0
	// Line 2260, Address: 0x4ab9a8, Func Offset: 0xb8
	// Line 2259, Address: 0x4ab9b0, Func Offset: 0xc0
	// Line 2254, Address: 0x4ab9b4, Func Offset: 0xc4
	// Line 2260, Address: 0x4ab9b8, Func Offset: 0xc8
	// Line 2254, Address: 0x4ab9bc, Func Offset: 0xcc
	// Line 2260, Address: 0x4ab9c0, Func Offset: 0xd0
	// Line 2261, Address: 0x4ab9cc, Func Offset: 0xdc
	// Line 2262, Address: 0x4ab9d4, Func Offset: 0xe4
	// Line 2268, Address: 0x4aba30, Func Offset: 0x140
	// Line 2269, Address: 0x4aba44, Func Offset: 0x154
	// Line 2270, Address: 0x4aba4c, Func Offset: 0x15c
	// Line 2271, Address: 0x4aba54, Func Offset: 0x164
	// Line 2272, Address: 0x4aba5c, Func Offset: 0x16c
	// Line 2273, Address: 0x4aba60, Func Offset: 0x170
	// Line 2274, Address: 0x4aba64, Func Offset: 0x174
	// Line 2275, Address: 0x4aba68, Func Offset: 0x178
	// Line 2276, Address: 0x4aba6c, Func Offset: 0x17c
	// Line 2277, Address: 0x4aba70, Func Offset: 0x180
	// Line 2278, Address: 0x4aba74, Func Offset: 0x184
	// Line 2292, Address: 0x4aba78, Func Offset: 0x188
	// Line 2305, Address: 0x4aba84, Func Offset: 0x194
	// Line 2306, Address: 0x4aba90, Func Offset: 0x1a0
	// Line 2307, Address: 0x4aba94, Func Offset: 0x1a4
	// Line 2308, Address: 0x4aba98, Func Offset: 0x1a8
	// Line 2309, Address: 0x4aba9c, Func Offset: 0x1ac
	// Line 2310, Address: 0x4abaa0, Func Offset: 0x1b0
	// Line 2311, Address: 0x4abaa4, Func Offset: 0x1b4
	// Line 2312, Address: 0x4abaa8, Func Offset: 0x1b8
	// Line 2313, Address: 0x4abaac, Func Offset: 0x1bc
	// Line 2314, Address: 0x4abab0, Func Offset: 0x1c0
	// Line 2315, Address: 0x4abab4, Func Offset: 0x1c4
	// Line 2316, Address: 0x4abab8, Func Offset: 0x1c8
	// Line 2317, Address: 0x4ababc, Func Offset: 0x1cc
	// Line 2318, Address: 0x4abac0, Func Offset: 0x1d0
	// Line 2319, Address: 0x4abac4, Func Offset: 0x1d4
	// Line 2320, Address: 0x4abac8, Func Offset: 0x1d8
	// Line 2321, Address: 0x4abacc, Func Offset: 0x1dc
	// Line 2322, Address: 0x4abad0, Func Offset: 0x1e0
	// Line 2368, Address: 0x4abad4, Func Offset: 0x1e4
	// Line 2366, Address: 0x4abad8, Func Offset: 0x1e8
	// Line 2368, Address: 0x4abadc, Func Offset: 0x1ec
	// Line 2372, Address: 0x4abae8, Func Offset: 0x1f8
	// Line 2373, Address: 0x4abaec, Func Offset: 0x1fc
	// Line 2374, Address: 0x4abaf0, Func Offset: 0x200
	// Line 2375, Address: 0x4abaf4, Func Offset: 0x204
	// Line 2376, Address: 0x4abaf8, Func Offset: 0x208
	// Line 2377, Address: 0x4abafc, Func Offset: 0x20c
	// Line 2378, Address: 0x4abb00, Func Offset: 0x210
	// Line 2379, Address: 0x4abb04, Func Offset: 0x214
	// Line 2380, Address: 0x4abb08, Func Offset: 0x218
	// Line 2381, Address: 0x4abb0c, Func Offset: 0x21c
	// Line 2382, Address: 0x4abb10, Func Offset: 0x220
	// Line 2383, Address: 0x4abb14, Func Offset: 0x224
	// Line 2389, Address: 0x4abb18, Func Offset: 0x228
	// Line 2390, Address: 0x4abb24, Func Offset: 0x234
	// Line 2391, Address: 0x4abb30, Func Offset: 0x240
	// Line 2392, Address: 0x4abb5c, Func Offset: 0x26c
	// Line 2393, Address: 0x4abb68, Func Offset: 0x278
	// Line 2394, Address: 0x4abb8c, Func Offset: 0x29c
	// Line 2395, Address: 0x4abbb0, Func Offset: 0x2c0
	// Line 2396, Address: 0x4abbd4, Func Offset: 0x2e4
	// Line 2397, Address: 0x4abbf8, Func Offset: 0x308
	// Line 2398, Address: 0x4abc1c, Func Offset: 0x32c
	// Line 2449, Address: 0x4abc38, Func Offset: 0x348
	// Func End, Address: 0x4abc60, Func Offset: 0x370
}

// iModelAnimBoundPrepare__FP8RpAtomic
// Start address: 0x4abc60
void iModelAnimBoundPrepare(RpAtomic* model)
{
	RpHAnimHierarchy* pHier;
	int32 numbones;
	int32 i;
	int32 j;
	int32 count;
	RpUserDataArray* usrdat;
	RpSkin* skin;
	uint32* boneidx;
	RwMatrixWeights* bonewt;
	RwV3d* vert;
	int32 numVert;
	int32* cntarr;
	xBox* boxarr;
	float32* currwt;
	uint32 curridx;
	uint32 matidx;
	xSphere* spharr;
	float32* currwt;
	float32 dist2;
	uint32 curridx;
	int32 numused;
	RwMatrixTag* skinmat;
	uint32 AnimBoundUsrDatArray[2];
	int32 index;
	int32* idata;
	int32* idata_boneidx;
	xSphere* idata_sphere;
	int32* idata;
	int32* idata_sphstart;
	int32* idata_sphactual;
	int32 numel;
	// Line 2018, Address: 0x4abc60, Func Offset: 0
	// Line 2020, Address: 0x4abc88, Func Offset: 0x28
	// Line 2021, Address: 0x4abcc0, Func Offset: 0x60
	// Line 2028, Address: 0x4abcc8, Func Offset: 0x68
	// Line 2030, Address: 0x4abcd8, Func Offset: 0x78
	// Line 2031, Address: 0x4abce4, Func Offset: 0x84
	// Line 2032, Address: 0x4abcf0, Func Offset: 0x90
	// Line 2035, Address: 0x4abd08, Func Offset: 0xa8
	// Line 2041, Address: 0x4abd18, Func Offset: 0xb8
	// Line 2046, Address: 0x4abd28, Func Offset: 0xc8
	// Line 2050, Address: 0x4abd30, Func Offset: 0xd0
	// Line 2051, Address: 0x4abd3c, Func Offset: 0xdc
	// Line 2052, Address: 0x4abd50, Func Offset: 0xf0
	// Line 2055, Address: 0x4abd60, Func Offset: 0x100
	// Line 2056, Address: 0x4abd6c, Func Offset: 0x10c
	// Line 2057, Address: 0x4abd74, Func Offset: 0x114
	// Line 2058, Address: 0x4abd78, Func Offset: 0x118
	// Line 2057, Address: 0x4abd7c, Func Offset: 0x11c
	// Line 2058, Address: 0x4abd84, Func Offset: 0x124
	// Line 2064, Address: 0x4abd8c, Func Offset: 0x12c
	// Line 2063, Address: 0x4abd90, Func Offset: 0x130
	// Line 2062, Address: 0x4abd94, Func Offset: 0x134
	// Line 2064, Address: 0x4abd98, Func Offset: 0x138
	// Line 2065, Address: 0x4abda4, Func Offset: 0x144
	// Line 2066, Address: 0x4abda8, Func Offset: 0x148
	// Line 2067, Address: 0x4abdb4, Func Offset: 0x154
	// Line 2066, Address: 0x4abdc0, Func Offset: 0x160
	// Line 2067, Address: 0x4abdc4, Func Offset: 0x164
	// Line 2066, Address: 0x4abdcc, Func Offset: 0x16c
	// Line 2067, Address: 0x4abdd0, Func Offset: 0x170
	// Line 2068, Address: 0x4abddc, Func Offset: 0x17c
	// Line 2069, Address: 0x4abdf0, Func Offset: 0x190
	// Line 2070, Address: 0x4abe0c, Func Offset: 0x1ac
	// Line 2071, Address: 0x4abe30, Func Offset: 0x1d0
	// Line 2072, Address: 0x4abe54, Func Offset: 0x1f4
	// Line 2073, Address: 0x4abe78, Func Offset: 0x218
	// Line 2074, Address: 0x4abe9c, Func Offset: 0x23c
	// Line 2075, Address: 0x4abec0, Func Offset: 0x260
	// Line 2077, Address: 0x4abedc, Func Offset: 0x27c
	// Line 2078, Address: 0x4abee0, Func Offset: 0x280
	// Line 2079, Address: 0x4abee4, Func Offset: 0x284
	// Line 2080, Address: 0x4abee8, Func Offset: 0x288
	// Line 2077, Address: 0x4abeec, Func Offset: 0x28c
	// Line 2080, Address: 0x4abef4, Func Offset: 0x294
	// Line 2085, Address: 0x4abf10, Func Offset: 0x2b0
	// Line 2082, Address: 0x4abf14, Func Offset: 0x2b4
	// Line 2085, Address: 0x4abf18, Func Offset: 0x2b8
	// Line 2083, Address: 0x4abf1c, Func Offset: 0x2bc
	// Line 2085, Address: 0x4abf20, Func Offset: 0x2c0
	// Line 2091, Address: 0x4abf28, Func Offset: 0x2c8
	// Line 2092, Address: 0x4abf34, Func Offset: 0x2d4
	// Line 2096, Address: 0x4abf48, Func Offset: 0x2e8
	// Line 2092, Address: 0x4abf4c, Func Offset: 0x2ec
	// Line 2096, Address: 0x4abf50, Func Offset: 0x2f0
	// Line 2092, Address: 0x4abf54, Func Offset: 0x2f4
	// Line 2093, Address: 0x4abf60, Func Offset: 0x300
	// Line 2094, Address: 0x4abf74, Func Offset: 0x314
	// Line 2095, Address: 0x4abf80, Func Offset: 0x320
	// Line 2094, Address: 0x4abf84, Func Offset: 0x324
	// Line 2095, Address: 0x4abf8c, Func Offset: 0x32c
	// Line 2096, Address: 0x4abf90, Func Offset: 0x330
	// Line 2099, Address: 0x4abf98, Func Offset: 0x338
	// Line 2100, Address: 0x4abfa4, Func Offset: 0x344
	// Line 2101, Address: 0x4abfac, Func Offset: 0x34c
	// Line 2102, Address: 0x4abfb0, Func Offset: 0x350
	// Line 2101, Address: 0x4abfb4, Func Offset: 0x354
	// Line 2102, Address: 0x4abfbc, Func Offset: 0x35c
	// Line 2109, Address: 0x4abfc4, Func Offset: 0x364
	// Line 2108, Address: 0x4abfc8, Func Offset: 0x368
	// Line 2107, Address: 0x4abfcc, Func Offset: 0x36c
	// Line 2109, Address: 0x4abfd0, Func Offset: 0x370
	// Line 2111, Address: 0x4abff8, Func Offset: 0x398
	// Line 2114, Address: 0x4ac014, Func Offset: 0x3b4
	// Line 2115, Address: 0x4ac030, Func Offset: 0x3d0
	// Line 2116, Address: 0x4ac034, Func Offset: 0x3d4
	// Line 2117, Address: 0x4ac038, Func Offset: 0x3d8
	// Line 2122, Address: 0x4ac058, Func Offset: 0x3f8
	// Line 2119, Address: 0x4ac05c, Func Offset: 0x3fc
	// Line 2122, Address: 0x4ac060, Func Offset: 0x400
	// Line 2120, Address: 0x4ac064, Func Offset: 0x404
	// Line 2122, Address: 0x4ac068, Func Offset: 0x408
	// Line 2128, Address: 0x4ac070, Func Offset: 0x410
	// Line 2129, Address: 0x4ac07c, Func Offset: 0x41c
	// Line 2130, Address: 0x4ac088, Func Offset: 0x428
	// Line 2131, Address: 0x4ac09c, Func Offset: 0x43c
	// Line 2132, Address: 0x4ac0a4, Func Offset: 0x444
	// Line 2133, Address: 0x4ac0a8, Func Offset: 0x448
	// Line 2132, Address: 0x4ac0b0, Func Offset: 0x450
	// Line 2133, Address: 0x4ac0b8, Func Offset: 0x458
	// Line 2135, Address: 0x4ac108, Func Offset: 0x4a8
	// Line 2143, Address: 0x4ac118, Func Offset: 0x4b8
	// Line 2139, Address: 0x4ac11c, Func Offset: 0x4bc
	// Line 2143, Address: 0x4ac120, Func Offset: 0x4c0
	// Line 2139, Address: 0x4ac124, Func Offset: 0x4c4
	// Line 2143, Address: 0x4ac12c, Func Offset: 0x4cc
	// Line 2139, Address: 0x4ac130, Func Offset: 0x4d0
	// Line 2143, Address: 0x4ac138, Func Offset: 0x4d8
	// Line 2144, Address: 0x4ac144, Func Offset: 0x4e4
	// Line 2148, Address: 0x4ac150, Func Offset: 0x4f0
	// Line 2144, Address: 0x4ac154, Func Offset: 0x4f4
	// Line 2150, Address: 0x4ac158, Func Offset: 0x4f8
	// Line 2153, Address: 0x4ac15c, Func Offset: 0x4fc
	// Line 2149, Address: 0x4ac164, Func Offset: 0x504
	// Line 2152, Address: 0x4ac168, Func Offset: 0x508
	// Line 2151, Address: 0x4ac16c, Func Offset: 0x50c
	// Line 2150, Address: 0x4ac170, Func Offset: 0x510
	// Line 2153, Address: 0x4ac174, Func Offset: 0x514
	// Line 2154, Address: 0x4ac184, Func Offset: 0x524
	// Line 2155, Address: 0x4ac190, Func Offset: 0x530
	// Line 2156, Address: 0x4ac194, Func Offset: 0x534
	// Line 2157, Address: 0x4ac198, Func Offset: 0x538
	// Line 2156, Address: 0x4ac19c, Func Offset: 0x53c
	// Line 2158, Address: 0x4ac1b8, Func Offset: 0x558
	// Line 2160, Address: 0x4ac1bc, Func Offset: 0x55c
	// Line 2158, Address: 0x4ac1c8, Func Offset: 0x568
	// Line 2160, Address: 0x4ac1cc, Func Offset: 0x56c
	// Line 2163, Address: 0x4ac1d8, Func Offset: 0x578
	// Line 2164, Address: 0x4ac1e0, Func Offset: 0x580
	// Line 2171, Address: 0x4ac1e8, Func Offset: 0x588
	// Line 2174, Address: 0x4ac1f0, Func Offset: 0x590
	// Line 2173, Address: 0x4ac1f8, Func Offset: 0x598
	// Line 2174, Address: 0x4ac1fc, Func Offset: 0x59c
	// Line 2173, Address: 0x4ac200, Func Offset: 0x5a0
	// Line 2177, Address: 0x4ac204, Func Offset: 0x5a4
	// Line 2178, Address: 0x4ac210, Func Offset: 0x5b0
	// Line 2179, Address: 0x4ac214, Func Offset: 0x5b4
	// Line 2182, Address: 0x4ac230, Func Offset: 0x5d0
	// Line 2184, Address: 0x4ac238, Func Offset: 0x5d8
	// Line 2185, Address: 0x4ac248, Func Offset: 0x5e8
	// Line 2186, Address: 0x4ac254, Func Offset: 0x5f4
	// Line 2188, Address: 0x4ac258, Func Offset: 0x5f8
	// Line 2189, Address: 0x4ac314, Func Offset: 0x6b4
	// Line 2192, Address: 0x4ac31c, Func Offset: 0x6bc
	// Line 2196, Address: 0x4ac3e8, Func Offset: 0x788
	// Func End, Address: 0x4ac410, Func Offset: 0x7b0
}

// iModelUnlock__FP8RpAtomic
// Start address: 0x4ac410
void iModelUnlock(RpAtomic* pModel)
{
	// Line 2000, Address: 0x4ac410, Func Offset: 0
	// Func End, Address: 0x4ac418, Func Offset: 0x8
}

// iModelLockAndGetTextureCoords__FP8RpAtomicPi
// Start address: 0x4ac420
RwTexCoords* iModelLockAndGetTextureCoords(RpAtomic* pModel, int32* numVertices)
{
	RpGeometry* pGeom;
	// Line 1985, Address: 0x4ac420, Func Offset: 0
	// Line 1987, Address: 0x4ac42c, Func Offset: 0xc
	// Line 1988, Address: 0x4ac434, Func Offset: 0x14
	// Line 1990, Address: 0x4ac43c, Func Offset: 0x1c
	// Line 1991, Address: 0x4ac448, Func Offset: 0x28
	// Line 1992, Address: 0x4ac44c, Func Offset: 0x2c
	// Func End, Address: 0x4ac45c, Func Offset: 0x3c
}

// iModelMaterialMul__FP8RpAtomicfff
// Start address: 0x4ac460
void iModelMaterialMul(RpAtomic* model, float32 rm, float32 gm, float32 bm)
{
	RpGeometry* geom;
	float32 cols[3];
	// Line 1953, Address: 0x4ac460, Func Offset: 0
	// Line 1957, Address: 0x4ac470, Func Offset: 0x10
	// Line 1958, Address: 0x4ac47c, Func Offset: 0x1c
	// Line 1962, Address: 0x4ac480, Func Offset: 0x20
	// Line 1969, Address: 0x4ac484, Func Offset: 0x24
	// Line 1962, Address: 0x4ac490, Func Offset: 0x30
	// Line 1965, Address: 0x4ac498, Func Offset: 0x38
	// Line 1968, Address: 0x4ac49c, Func Offset: 0x3c
	// Line 1966, Address: 0x4ac4a0, Func Offset: 0x40
	// Line 1969, Address: 0x4ac4a4, Func Offset: 0x44
	// Line 1971, Address: 0x4ac4ac, Func Offset: 0x4c
	// Line 1972, Address: 0x4ac4b0, Func Offset: 0x50
	// Line 1971, Address: 0x4ac4b4, Func Offset: 0x54
	// Line 1973, Address: 0x4ac4bc, Func Offset: 0x5c
	// Func End, Address: 0x4ac4cc, Func Offset: 0x6c
}

// iModelMaterialMulCB__FP10RpMaterialPv
// Start address: 0x4ac4d0
RpMaterial* iModelMaterialMulCB(RpMaterial* material, void* data)
{
	RwRGBA* rw_col;
	RwRGBA col;
	float32 tmp;
	float32* mods;
	// Line 1933, Address: 0x4ac4d0, Func Offset: 0
	// Line 1935, Address: 0x4ac4d4, Func Offset: 0x4
	// Line 1939, Address: 0x4ac528, Func Offset: 0x58
	// Line 1935, Address: 0x4ac52c, Func Offset: 0x5c
	// Line 1939, Address: 0x4ac530, Func Offset: 0x60
	// Line 1940, Address: 0x4ac564, Func Offset: 0x94
	// Line 1939, Address: 0x4ac56c, Func Offset: 0x9c
	// Line 1940, Address: 0x4ac570, Func Offset: 0xa0
	// Line 1941, Address: 0x4ac5d4, Func Offset: 0x104
	// Line 1942, Address: 0x4ac60c, Func Offset: 0x13c
	// Line 1941, Address: 0x4ac614, Func Offset: 0x144
	// Line 1942, Address: 0x4ac618, Func Offset: 0x148
	// Line 1943, Address: 0x4ac67c, Func Offset: 0x1ac
	// Line 1944, Address: 0x4ac6b4, Func Offset: 0x1e4
	// Line 1943, Address: 0x4ac6bc, Func Offset: 0x1ec
	// Line 1944, Address: 0x4ac6c0, Func Offset: 0x1f0
	// Line 1946, Address: 0x4ac6e4, Func Offset: 0x214
	// Line 1948, Address: 0x4ac72c, Func Offset: 0x25c
	// Line 1946, Address: 0x4ac730, Func Offset: 0x260
	// Line 1948, Address: 0x4ac734, Func Offset: 0x264
	// Line 1940, Address: 0x4ac73c, Func Offset: 0x26c
	// Line 1942, Address: 0x4ac744, Func Offset: 0x274
	// Line 1944, Address: 0x4ac74c, Func Offset: 0x27c
	// Line 1949, Address: 0x4ac754, Func Offset: 0x284
	// Func End, Address: 0x4ac75c, Func Offset: 0x28c
}

// iModelSetMaterialTexture__FP8RpAtomicPv
// Start address: 0x4ac760
void iModelSetMaterialTexture(RpAtomic* model, void* texture)
{
	RpGeometry* geom;
	// Line 1903, Address: 0x4ac760, Func Offset: 0
	// Line 1908, Address: 0x4ac76c, Func Offset: 0xc
	// Line 1909, Address: 0x4ac77c, Func Offset: 0x1c
	// Line 1911, Address: 0x4ac780, Func Offset: 0x20
	// Line 1915, Address: 0x4ac784, Func Offset: 0x24
	// Line 1917, Address: 0x4ac794, Func Offset: 0x34
	// Line 1918, Address: 0x4ac798, Func Offset: 0x38
	// Line 1917, Address: 0x4ac79c, Func Offset: 0x3c
	// Line 1919, Address: 0x4ac7a4, Func Offset: 0x44
	// Func End, Address: 0x4ac7b4, Func Offset: 0x54
}

// iModelSetMaterialTextureCB__FP10RpMaterialPv
// Start address: 0x4ac7c0
RpMaterial* iModelSetMaterialTextureCB(RpMaterial* material, void* data)
{
	// Line 1891, Address: 0x4ac7c0, Func Offset: 0
	// Line 1894, Address: 0x4ac7c4, Func Offset: 0x4
	// Line 1891, Address: 0x4ac7c8, Func Offset: 0x8
	// Line 1894, Address: 0x4ac7cc, Func Offset: 0xc
	// Line 1891, Address: 0x4ac7d0, Func Offset: 0x10
	// Line 1894, Address: 0x4ac7d4, Func Offset: 0x14
	// Line 1896, Address: 0x4ac7f0, Func Offset: 0x30
	// Line 1898, Address: 0x4ac7f8, Func Offset: 0x38
	// Line 1899, Address: 0x4ac7fc, Func Offset: 0x3c
	// Func End, Address: 0x4ac80c, Func Offset: 0x4c
}

// iModelResetMaterial__FP8RpAtomic
// Start address: 0x4ac810
void iModelResetMaterial(RpAtomic* model)
{
	uint32 i;
	RpGeometry* geom;
	RpMaterial* material;
	RwRGBA newColor;
	RwRGBA newColor;
	RwRGBA newColor;
	// Line 1849, Address: 0x4ac810, Func Offset: 0
	// Line 1853, Address: 0x4ac83c, Func Offset: 0x2c
	// Line 1854, Address: 0x4ac848, Func Offset: 0x38
	// Line 1857, Address: 0x4ac84c, Func Offset: 0x3c
	// Line 1860, Address: 0x4ac850, Func Offset: 0x40
	// Line 1862, Address: 0x4ac888, Func Offset: 0x78
	// Line 1864, Address: 0x4ac88c, Func Offset: 0x7c
	// Line 1862, Address: 0x4ac890, Func Offset: 0x80
	// Line 1864, Address: 0x4ac898, Func Offset: 0x88
	// Line 1869, Address: 0x4ac8a4, Func Offset: 0x94
	// Line 1874, Address: 0x4ac8b0, Func Offset: 0xa0
	// Line 1875, Address: 0x4ac8c0, Func Offset: 0xb0
	// Line 1876, Address: 0x4ac8d0, Func Offset: 0xc0
	// Line 1875, Address: 0x4ac8d4, Func Offset: 0xc4
	// Line 1877, Address: 0x4ac8dc, Func Offset: 0xcc
	// Line 1875, Address: 0x4ac8e0, Func Offset: 0xd0
	// Line 1877, Address: 0x4ac8e4, Func Offset: 0xd4
	// Line 1875, Address: 0x4ac8e8, Func Offset: 0xd8
	// Line 1877, Address: 0x4ac8ec, Func Offset: 0xdc
	// Line 1880, Address: 0x4ac908, Func Offset: 0xf8
	// Line 1883, Address: 0x4ac918, Func Offset: 0x108
	// Line 1880, Address: 0x4ac920, Func Offset: 0x110
	// Line 1883, Address: 0x4ac92c, Func Offset: 0x11c
	// Line 1886, Address: 0x4ac938, Func Offset: 0x128
	// Line 1868, Address: 0x4ac97c, Func Offset: 0x16c
	// Line 1886, Address: 0x4ac988, Func Offset: 0x178
	// Func End, Address: 0x4aca10, Func Offset: 0x200
}

// iModelSetMaterialAlpha__FP8RpAtomicUc
// Start address: 0x4aca10
void iModelSetMaterialAlpha(RpAtomic* model, uint8 alpha)
{
	uint32 i;
	RpGeometry* geom;
	RpMaterial* material;
	RwRGBA* col;
	RwRGBA new_col;
	// Line 1816, Address: 0x4aca10, Func Offset: 0
	// Line 1823, Address: 0x4aca14, Func Offset: 0x4
	// Line 1824, Address: 0x4aca20, Func Offset: 0x10
	// Line 1828, Address: 0x4aca24, Func Offset: 0x14
	// Line 1831, Address: 0x4aca30, Func Offset: 0x20
	// Line 1833, Address: 0x4aca38, Func Offset: 0x28
	// Line 1835, Address: 0x4aca5c, Func Offset: 0x4c
	// Line 1841, Address: 0x4aca60, Func Offset: 0x50
	// Line 1835, Address: 0x4aca64, Func Offset: 0x54
	// Line 1840, Address: 0x4aca6c, Func Offset: 0x5c
	// Line 1837, Address: 0x4aca70, Func Offset: 0x60
	// Line 1838, Address: 0x4aca78, Func Offset: 0x68
	// Line 1840, Address: 0x4aca94, Func Offset: 0x84
	// Line 1838, Address: 0x4aca98, Func Offset: 0x88
	// Line 1840, Address: 0x4aca9c, Func Offset: 0x8c
	// Line 1841, Address: 0x4acab4, Func Offset: 0xa4
	// Line 1843, Address: 0x4acac8, Func Offset: 0xb8
	// Line 1844, Address: 0x4acacc, Func Offset: 0xbc
	// Line 1843, Address: 0x4acad0, Func Offset: 0xc0
	// Line 1845, Address: 0x4acad8, Func Offset: 0xc8
	// Func End, Address: 0x4acae0, Func Offset: 0xd0
}

// iModelTagEval__FP8RpAtomicPC19xModelTagWithNormalP11RwMatrixTagP5xVec3P5xVec3
// Start address: 0x4acae0
void iModelTagEval(RpAtomic* model, xModelTagWithNormal* tag, RwMatrixTag* mat, xVec3* dest, xVec3* normal)
{
	RpSkin* skin;
	RwMatrixTag* skinmat;
	// Line 1623, Address: 0x4acae0, Func Offset: 0
	// Line 1624, Address: 0x4acaec, Func Offset: 0xc
	// Line 1623, Address: 0x4acaf0, Func Offset: 0x10
	// Line 1624, Address: 0x4acaf4, Func Offset: 0x14
	// Line 1623, Address: 0x4acaf8, Func Offset: 0x18
	// Line 1624, Address: 0x4acb0c, Func Offset: 0x2c
	// Line 1623, Address: 0x4acb10, Func Offset: 0x30
	// Line 1624, Address: 0x4acb30, Func Offset: 0x50
	// Line 1625, Address: 0x4acde0, Func Offset: 0x300
	// Line 1627, Address: 0x4acdf8, Func Offset: 0x318
	// Line 1628, Address: 0x4ace04, Func Offset: 0x324
	// Line 1629, Address: 0x4ace10, Func Offset: 0x330
	// Line 1630, Address: 0x4ad02c, Func Offset: 0x54c
	// Line 1634, Address: 0x4ad034, Func Offset: 0x554
	// Line 1636, Address: 0x4ad048, Func Offset: 0x568
	// Func End, Address: 0x4ad078, Func Offset: 0x598
}

// iModelTagEval__FP8RpAtomicPC9xModelTagP11RwMatrixTagP5xVec3
// Start address: 0x4ad080
void iModelTagEval(RpAtomic* model, xModelTag* tag, RwMatrixTag* mat, xVec3* dest)
{
	RpGeometry* geom;
	RpSkin* skin;
	RwMatrixTag* skinmat;
	// Line 1607, Address: 0x4ad080, Func Offset: 0
	// Line 1608, Address: 0x4ad088, Func Offset: 0x8
	// Line 1607, Address: 0x4ad08c, Func Offset: 0xc
	// Line 1608, Address: 0x4ad090, Func Offset: 0x10
	// Line 1607, Address: 0x4ad094, Func Offset: 0x14
	// Line 1608, Address: 0x4ad0ac, Func Offset: 0x2c
	// Line 1607, Address: 0x4ad0b0, Func Offset: 0x30
	// Line 1608, Address: 0x4ad0c0, Func Offset: 0x40
	// Line 1611, Address: 0x4ad0c8, Func Offset: 0x48
	// Line 1612, Address: 0x4ad0d0, Func Offset: 0x50
	// Line 1613, Address: 0x4ad0dc, Func Offset: 0x5c
	// Line 1614, Address: 0x4ad348, Func Offset: 0x2c8
	// Line 1618, Address: 0x4ad350, Func Offset: 0x2d0
	// Line 1620, Address: 0x4ad360, Func Offset: 0x2e0
	// Func End, Address: 0x4ad390, Func Offset: 0x310
}

// iModelTagSetup__FP19xModelTagWithNormalPC8RpAtomicfff
// Start address: 0x4ad390
uint32 iModelTagSetup(xModelTagWithNormal* tag, RpAtomic* model, float32 x, float32 y, float32 z)
{
	uint32 index;
	// Line 1592, Address: 0x4ad390, Func Offset: 0
	// Line 1593, Address: 0x4ad394, Func Offset: 0x4
	// Line 1592, Address: 0x4ad398, Func Offset: 0x8
	// Line 1593, Address: 0x4ad3a8, Func Offset: 0x18
	// Line 1598, Address: 0x4ad3b0, Func Offset: 0x20
	// Line 1600, Address: 0x4ad3e4, Func Offset: 0x54
	// Func End, Address: 0x4ad3f8, Func Offset: 0x68
}

// iModelTagSetup__FP9xModelTagPC8RpAtomicfff
// Start address: 0x4ad400
uint32 iModelTagSetup(xModelTag* tag, RpAtomic* model, float32 x, float32 y, float32 z)
{
	// Line 1588, Address: 0x4ad400, Func Offset: 0
	// Func End, Address: 0x4ad408, Func Offset: 0x8
}

// iModelTagInternal__FP9xModelTagPC8RpAtomicfffi
// Start address: 0x4ad410
uint32 iModelTagInternal(xModelTag* tag, RpAtomic* model, float32 x, float32 y, float32 z, int32 closeV)
{
	RpGeometry* geom;
	RwV3d* vert;
	int32 v;
	int32 numV;
	float32 distSqr;
	float32 closeDistSqr;
	RpSkin* skin;
	RwMatrixWeights* wt;
	// Line 1506, Address: 0x4ad410, Func Offset: 0
	// Line 1507, Address: 0x4ad414, Func Offset: 0x4
	// Line 1506, Address: 0x4ad418, Func Offset: 0x8
	// Line 1508, Address: 0x4ad42c, Func Offset: 0x1c
	// Line 1511, Address: 0x4ad434, Func Offset: 0x24
	// Line 1516, Address: 0x4ad43c, Func Offset: 0x2c
	// Line 1518, Address: 0x4ad448, Func Offset: 0x38
	// Line 1537, Address: 0x4ad45c, Func Offset: 0x4c
	// Line 1538, Address: 0x4ad46c, Func Offset: 0x5c
	// Line 1539, Address: 0x4ad478, Func Offset: 0x68
	// Line 1540, Address: 0x4ad480, Func Offset: 0x70
	// Line 1544, Address: 0x4ad488, Func Offset: 0x78
	// Line 1547, Address: 0x4ad490, Func Offset: 0x80
	// Line 1548, Address: 0x4ad49c, Func Offset: 0x8c
	// Line 1549, Address: 0x4ad4a4, Func Offset: 0x94
	// Line 1550, Address: 0x4ad4ac, Func Offset: 0x9c
	// Line 1549, Address: 0x4ad4b0, Func Offset: 0xa0
	// Line 1550, Address: 0x4ad4b4, Func Offset: 0xa4
	// Line 1551, Address: 0x4ad4cc, Func Offset: 0xbc
	// Line 1552, Address: 0x4ad4d4, Func Offset: 0xc4
	// Line 1553, Address: 0x4ad4dc, Func Offset: 0xcc
	// Line 1554, Address: 0x4ad4e4, Func Offset: 0xd4
	// Line 1555, Address: 0x4ad4e8, Func Offset: 0xd8
	// Line 1512, Address: 0x4ad4f8, Func Offset: 0xe8
	// Line 1555, Address: 0x4ad500, Func Offset: 0xf0
	// Line 1519, Address: 0x4ad504, Func Offset: 0xf4
	// Line 1555, Address: 0x4ad508, Func Offset: 0xf8
	// Line 1521, Address: 0x4ad524, Func Offset: 0x114
	// Line 1525, Address: 0x4ad534, Func Offset: 0x124
	// Line 1555, Address: 0x4ad538, Func Offset: 0x128
	// Line 1527, Address: 0x4ad540, Func Offset: 0x130
	// Line 1526, Address: 0x4ad544, Func Offset: 0x134
	// Line 1555, Address: 0x4ad548, Func Offset: 0x138
	// Line 1536, Address: 0x4ad568, Func Offset: 0x158
	// Line 1558, Address: 0x4ad570, Func Offset: 0x160
	// Line 1559, Address: 0x4ad574, Func Offset: 0x164
	// Line 1560, Address: 0x4ad578, Func Offset: 0x168
	// Line 1561, Address: 0x4ad57c, Func Offset: 0x16c
	// Line 1562, Address: 0x4ad580, Func Offset: 0x170
	// Line 1566, Address: 0x4ad584, Func Offset: 0x174
	// Line 1567, Address: 0x4ad588, Func Offset: 0x178
	// Func End, Address: 0x4ad5a0, Func Offset: 0x190
}

// iModelTagUserData__FP9xModelTagPC8RpAtomicfffi
// Start address: 0x4ad5a0
uint32 iModelTagUserData(xModelTag* tag, RpAtomic* model, float32 x, float32 y, float32 z, int32 closeV)
{
	int32 i;
	int32 count;
	RpUserDataArray* array;
	RpUserDataArray* testarray;
	float32 distSqr;
	float32 closeDistSqr;
	int32 numTags;
	int32 t;
	xModelTag* tagList;
	// Line 1455, Address: 0x4ad5a0, Func Offset: 0
	// Line 1457, Address: 0x4ad5d4, Func Offset: 0x34
	// Line 1455, Address: 0x4ad5d8, Func Offset: 0x38
	// Line 1457, Address: 0x4ad5e8, Func Offset: 0x48
	// Line 1458, Address: 0x4ad5f4, Func Offset: 0x54
	// Line 1459, Address: 0x4ad5f8, Func Offset: 0x58
	// Line 1466, Address: 0x4ad604, Func Offset: 0x64
	// Line 1472, Address: 0x4ad60c, Func Offset: 0x6c
	// Line 1475, Address: 0x4ad61c, Func Offset: 0x7c
	// Line 1480, Address: 0x4ad620, Func Offset: 0x80
	// Line 1497, Address: 0x4ad634, Func Offset: 0x94
	// Line 1498, Address: 0x4ad640, Func Offset: 0xa0
	// Line 1502, Address: 0x4ad684, Func Offset: 0xe4
	// Line 1460, Address: 0x4ad6a4, Func Offset: 0x104
	// Line 1502, Address: 0x4ad6a8, Func Offset: 0x108
	// Line 1463, Address: 0x4ad6b8, Func Offset: 0x118
	// Line 1502, Address: 0x4ad6c0, Func Offset: 0x120
	// Line 1467, Address: 0x4ad6d8, Func Offset: 0x138
	// Line 1502, Address: 0x4ad6dc, Func Offset: 0x13c
	// Line 1468, Address: 0x4ad6e4, Func Offset: 0x144
	// Line 1502, Address: 0x4ad6ec, Func Offset: 0x14c
	// Line 1481, Address: 0x4ad6f0, Func Offset: 0x150
	// Line 1502, Address: 0x4ad6f4, Func Offset: 0x154
	// Line 1483, Address: 0x4ad714, Func Offset: 0x174
	// Line 1487, Address: 0x4ad724, Func Offset: 0x184
	// Line 1502, Address: 0x4ad728, Func Offset: 0x188
	// Line 1489, Address: 0x4ad730, Func Offset: 0x190
	// Line 1488, Address: 0x4ad734, Func Offset: 0x194
	// Line 1502, Address: 0x4ad738, Func Offset: 0x198
	// Line 1496, Address: 0x4ad790, Func Offset: 0x1f0
	// Line 1503, Address: 0x4ad798, Func Offset: 0x1f8
	// Func End, Address: 0x4ad7cc, Func Offset: 0x22c
}

// iModelNormalEval__FP5xVec3RC8RpAtomicPC11RwMatrixTagUiiPC5xVec3
// Start address: 0x4ad7d0
uint32 iModelNormalEval(xVec3* out, RpAtomic& m, RwMatrixTag* mat, uint32 index, int32 size, xVec3* in)
{
	RpGeometry* geom;
	int32 max_size;
	RpSkin* skin;
	RwMatrixTag* skin_mats;
	float32* bone_weights;
	uint32* bone_indices;
	xMat4x3 nmat;
	// Line 1415, Address: 0x4ad7d0, Func Offset: 0
	// Line 1416, Address: 0x4ad7f0, Func Offset: 0x20
	// Line 1415, Address: 0x4ad7f8, Func Offset: 0x28
	// Line 1422, Address: 0x4ad810, Func Offset: 0x40
	// Line 1429, Address: 0x4ad818, Func Offset: 0x48
	// Line 1431, Address: 0x4ad85c, Func Offset: 0x8c
	// Line 1433, Address: 0x4ad864, Func Offset: 0x94
	// Line 1434, Address: 0x4ad870, Func Offset: 0xa0
	// Line 1437, Address: 0x4ad878, Func Offset: 0xa8
	// Line 1438, Address: 0x4ad884, Func Offset: 0xb4
	// Line 1439, Address: 0x4ad894, Func Offset: 0xc4
	// Line 1440, Address: 0x4ad8a0, Func Offset: 0xd0
	// Line 1439, Address: 0x4ad8a4, Func Offset: 0xd4
	// Line 1440, Address: 0x4ad8a8, Func Offset: 0xd8
	// Line 1451, Address: 0x4adae8, Func Offset: 0x318
	// Line 1448, Address: 0x4adaf8, Func Offset: 0x328
	// Line 1451, Address: 0x4adb04, Func Offset: 0x334
	// Line 1452, Address: 0x4adb20, Func Offset: 0x350
	// Func End, Address: 0x4adb50, Func Offset: 0x380
}

// iModelVertEval__FP8RpAtomicUiUiP11RwMatrixTagP5xVec3P5xVec3
// Start address: 0x4adb50
uint32 iModelVertEval(RpAtomic* model, uint32 index, uint32 count, RwMatrixTag* mat, xVec3* vert, xVec3* dest)
{
	RpGeometry* geom;
	uint32 numV;
	RpSkin* skin;
	// Line 1374, Address: 0x4adb50, Func Offset: 0
	// Line 1381, Address: 0x4adb90, Func Offset: 0x40
	// Line 1383, Address: 0x4adb98, Func Offset: 0x48
	// Line 1386, Address: 0x4adb9c, Func Offset: 0x4c
	// Line 1387, Address: 0x4adbc4, Func Offset: 0x74
	// Line 1390, Address: 0x4adbdc, Func Offset: 0x8c
	// Line 1391, Address: 0x4adbe0, Func Offset: 0x90
	// Line 1390, Address: 0x4adbec, Func Offset: 0x9c
	// Line 1391, Address: 0x4adbf0, Func Offset: 0xa0
	// Line 1394, Address: 0x4adbf4, Func Offset: 0xa4
	// Line 1395, Address: 0x4adc00, Func Offset: 0xb0
	// Line 1398, Address: 0x4adc08, Func Offset: 0xb8
	// Line 1402, Address: 0x4adea0, Func Offset: 0x350
	// Line 1406, Address: 0x4adea8, Func Offset: 0x358
	// Line 1409, Address: 0x4adebc, Func Offset: 0x36c
	// Line 1410, Address: 0x4adec0, Func Offset: 0x370
	// Func End, Address: 0x4adef0, Func Offset: 0x3a0
}

// iModel_SetLightKit__FP9xLightKit
// Start address: 0x4adef0
void iModel_SetLightKit(xLightKit* lightKit)
{
	RpLight* amb;
	RpLight* dir[4];
	int32 lightTypes[5];
	uint32 i;
	// Line 983, Address: 0x4adef0, Func Offset: 0
	// Line 987, Address: 0x4adef4, Func Offset: 0x4
	// Line 992, Address: 0x4adefc, Func Offset: 0xc
	// Line 994, Address: 0x4adf24, Func Offset: 0x34
	// Line 995, Address: 0x4adf34, Func Offset: 0x44
	// Line 996, Address: 0x4adf40, Func Offset: 0x50
	// Line 995, Address: 0x4adf44, Func Offset: 0x54
	// Line 996, Address: 0x4adf50, Func Offset: 0x60
	// Line 995, Address: 0x4adf54, Func Offset: 0x64
	// Line 996, Address: 0x4adf60, Func Offset: 0x70
	// Line 997, Address: 0x4adf68, Func Offset: 0x78
	// Line 1009, Address: 0x4adfa0, Func Offset: 0xb0
	// Line 1008, Address: 0x4adfa4, Func Offset: 0xb4
	// Line 1009, Address: 0x4adfa8, Func Offset: 0xb8
	// Line 1010, Address: 0x4adfac, Func Offset: 0xbc
	// Line 1009, Address: 0x4adfb0, Func Offset: 0xc0
	// Line 1010, Address: 0x4adfb4, Func Offset: 0xc4
	// Line 1011, Address: 0x4adfb8, Func Offset: 0xc8
	// Line 1010, Address: 0x4adfbc, Func Offset: 0xcc
	// Line 1011, Address: 0x4adfc0, Func Offset: 0xd0
	// Line 1012, Address: 0x4adfc4, Func Offset: 0xd4
	// Line 1011, Address: 0x4adfc8, Func Offset: 0xd8
	// Line 1012, Address: 0x4adfcc, Func Offset: 0xdc
	// Line 1015, Address: 0x4adfd4, Func Offset: 0xe4
	// Line 1018, Address: 0x4adfec, Func Offset: 0xfc
	// Line 1016, Address: 0x4adff0, Func Offset: 0x100
	// Line 1015, Address: 0x4adff4, Func Offset: 0x104
	// Line 1016, Address: 0x4ae000, Func Offset: 0x110
	// Line 1018, Address: 0x4ae008, Func Offset: 0x118
	// Line 1019, Address: 0x4ae010, Func Offset: 0x120
	// Line 1021, Address: 0x4ae01c, Func Offset: 0x12c
	// Line 1024, Address: 0x4ae038, Func Offset: 0x148
	// Line 1025, Address: 0x4ae044, Func Offset: 0x154
	// Line 1018, Address: 0x4ae04c, Func Offset: 0x15c
	// Line 1025, Address: 0x4ae058, Func Offset: 0x168
	// Func End, Address: 0x4ae064, Func Offset: 0x174
}

// iModelVertCount__FP8RpAtomic
// Start address: 0x4ae070
uint32 iModelVertCount(RpAtomic* model)
{
	// Line 975, Address: 0x4ae070, Func Offset: 0
	// Line 976, Address: 0x4ae074, Func Offset: 0x4
	// Func End, Address: 0x4ae07c, Func Offset: 0xc
}

// iModelSetWorldBoundFromBox__FP8RpAtomicP4xBox
// Start address: 0x4ae080
void iModelSetWorldBoundFromBox(RpAtomic* model, xBox* box)
{
	float32 sizeX;
	float32 sizeY;
	float32 sizeZ;
	RwFrame* frame;
	// Line 951, Address: 0x4ae080, Func Offset: 0
	// Line 964, Address: 0x4ae08c, Func Offset: 0xc
	// Line 951, Address: 0x4ae090, Func Offset: 0x10
	// Line 967, Address: 0x4ae094, Func Offset: 0x14
	// Line 951, Address: 0x4ae098, Func Offset: 0x18
	// Line 952, Address: 0x4ae0a4, Func Offset: 0x24
	// Line 953, Address: 0x4ae0b8, Func Offset: 0x38
	// Line 955, Address: 0x4ae0cc, Func Offset: 0x4c
	// Line 956, Address: 0x4ae0d4, Func Offset: 0x54
	// Line 954, Address: 0x4ae0dc, Func Offset: 0x5c
	// Line 955, Address: 0x4ae0e4, Func Offset: 0x64
	// Line 956, Address: 0x4ae0e8, Func Offset: 0x68
	// Line 954, Address: 0x4ae0ec, Func Offset: 0x6c
	// Line 955, Address: 0x4ae0f0, Func Offset: 0x70
	// Line 954, Address: 0x4ae0f4, Func Offset: 0x74
	// Line 957, Address: 0x4ae0f8, Func Offset: 0x78
	// Line 956, Address: 0x4ae0fc, Func Offset: 0x7c
	// Line 957, Address: 0x4ae100, Func Offset: 0x80
	// Line 960, Address: 0x4ae110, Func Offset: 0x90
	// Line 964, Address: 0x4ae114, Func Offset: 0x94
	// Line 967, Address: 0x4ae120, Func Offset: 0xa0
	// Line 968, Address: 0x4ae128, Func Offset: 0xa8
	// Func End, Address: 0x4ae130, Func Offset: 0xb0
}

// iModelWorldBoundSphere__FP8RpAtomicP11RwMatrixTagP7xSphere
// Start address: 0x4ae130
xSphere* iModelWorldBoundSphere(RpAtomic* model, RwMatrixTag* mat, xSphere* sphere)
{
	RwSphere* modelsphere;
	float32 xScale2;
	float32 yScale2;
	float32 zScale2;
	RwV3d* up;
	RwV3d* at;
	RwFrame* frame;
	// Line 907, Address: 0x4ae130, Func Offset: 0
	// Line 909, Address: 0x4ae150, Func Offset: 0x20
	// Line 914, Address: 0x4ae168, Func Offset: 0x38
	// Line 918, Address: 0x4ae17c, Func Offset: 0x4c
	// Line 919, Address: 0x4ae188, Func Offset: 0x58
	// Line 920, Address: 0x4ae1a0, Func Offset: 0x70
	// Line 921, Address: 0x4ae1b8, Func Offset: 0x88
	// Line 923, Address: 0x4ae1c4, Func Offset: 0x94
	// Line 932, Address: 0x4ae204, Func Offset: 0xd4
	// Line 935, Address: 0x4ae208, Func Offset: 0xd8
	// Line 938, Address: 0x4ae20c, Func Offset: 0xdc
	// Line 925, Address: 0x4ae210, Func Offset: 0xe0
	// Line 928, Address: 0x4ae21c, Func Offset: 0xec
	// Line 932, Address: 0x4ae220, Func Offset: 0xf0
	// Line 935, Address: 0x4ae22c, Func Offset: 0xfc
	// Line 938, Address: 0x4ae234, Func Offset: 0x104
	// Line 923, Address: 0x4ae23c, Func Offset: 0x10c
	// Line 939, Address: 0x4ae244, Func Offset: 0x114
	// Func End, Address: 0x4ae260, Func Offset: 0x130
}

// iModelRender__FP8RpAtomicP11RwMatrixTag
// Start address: 0x4ae260
void iModelRender(RpAtomic* model, RwMatrixTag* mat)
{
	RwMatrixTag* pAnimOldMatrix;
	RwFrame* frame;
	// Line 728, Address: 0x4ae260, Func Offset: 0
	// Line 729, Address: 0x4ae288, Func Offset: 0x28
	// Line 733, Address: 0x4ae2a8, Func Offset: 0x48
	// Line 761, Address: 0x4ae2b0, Func Offset: 0x50
	// Line 762, Address: 0x4ae2b4, Func Offset: 0x54
	// Line 766, Address: 0x4ae2bc, Func Offset: 0x5c
	// Line 771, Address: 0x4ae2c0, Func Offset: 0x60
	// Line 772, Address: 0x4ae340, Func Offset: 0xe0
	// Line 892, Address: 0x4ae348, Func Offset: 0xe8
	// Line 895, Address: 0x4ae354, Func Offset: 0xf4
	// Line 896, Address: 0x4ae35c, Func Offset: 0xfc
	// Line 898, Address: 0x4ae360, Func Offset: 0x100
	// Line 729, Address: 0x4ae36c, Func Offset: 0x10c
	// Line 898, Address: 0x4ae370, Func Offset: 0x110
	// Line 729, Address: 0x4ae37c, Func Offset: 0x11c
	// Line 898, Address: 0x4ae384, Func Offset: 0x124
	// Func End, Address: 0x4ae3a4, Func Offset: 0x144
}

// iModelAnimMatrices__FP8RpAtomicP5xQuatP5xVec3P11RwMatrixTag
// Start address: 0x4ae3b0
void iModelAnimMatrices(RpAtomic* model, xQuat* quat, xVec3* tran, RwMatrixTag* mat)
{
	RpHAnimHierarchy* pHierarchy;
	RwMatrixTag matrixStack[32];
	RwMatrixTag* pMatrixStackTop;
	RpHAnimNodeInfo* pCurrentFrame;
	int32 currentFrameFlags;
	int32 i;
	int32 numFrames;
	RwMatrixTag* pMatrixArray;
	// Line 578, Address: 0x4ae3b0, Func Offset: 0
	// Line 579, Address: 0x4ae3d0, Func Offset: 0x20
	// Line 581, Address: 0x4ae40c, Func Offset: 0x5c
	// Line 595, Address: 0x4ae414, Func Offset: 0x64
	// Line 596, Address: 0x4ae418, Func Offset: 0x68
	// Line 597, Address: 0x4ae41c, Func Offset: 0x6c
	// Line 598, Address: 0x4ae420, Func Offset: 0x70
	// Line 599, Address: 0x4ae424, Func Offset: 0x74
	// Line 600, Address: 0x4ae428, Func Offset: 0x78
	// Line 601, Address: 0x4ae42c, Func Offset: 0x7c
	// Line 602, Address: 0x4ae430, Func Offset: 0x80
	// Line 603, Address: 0x4ae434, Func Offset: 0x84
	// Line 604, Address: 0x4ae438, Func Offset: 0x88
	// Line 605, Address: 0x4ae43c, Func Offset: 0x8c
	// Line 620, Address: 0x4ae440, Func Offset: 0x90
	// Line 618, Address: 0x4ae444, Func Offset: 0x94
	// Line 621, Address: 0x4ae448, Func Offset: 0x98
	// Line 626, Address: 0x4ae44c, Func Offset: 0x9c
	// Line 629, Address: 0x4ae458, Func Offset: 0xa8
	// Line 630, Address: 0x4ae45c, Func Offset: 0xac
	// Line 634, Address: 0x4ae468, Func Offset: 0xb8
	// Line 635, Address: 0x4ae46c, Func Offset: 0xbc
	// Line 636, Address: 0x4ae470, Func Offset: 0xc0
	// Line 637, Address: 0x4ae474, Func Offset: 0xc4
	// Line 641, Address: 0x4ae478, Func Offset: 0xc8
	// Line 644, Address: 0x4ae47c, Func Offset: 0xcc
	// Line 645, Address: 0x4ae500, Func Offset: 0x150
	// Line 646, Address: 0x4ae548, Func Offset: 0x198
	// Line 648, Address: 0x4ae554, Func Offset: 0x1a4
	// Line 651, Address: 0x4ae558, Func Offset: 0x1a8
	// Line 652, Address: 0x4ae55c, Func Offset: 0x1ac
	// Line 653, Address: 0x4ae560, Func Offset: 0x1b0
	// Line 654, Address: 0x4ae564, Func Offset: 0x1b4
	// Line 658, Address: 0x4ae568, Func Offset: 0x1b8
	// Line 661, Address: 0x4ae570, Func Offset: 0x1c0
	// Line 662, Address: 0x4ae574, Func Offset: 0x1c4
	// Line 663, Address: 0x4ae578, Func Offset: 0x1c8
	// Line 664, Address: 0x4ae57c, Func Offset: 0x1cc
	// Line 699, Address: 0x4ae580, Func Offset: 0x1d0
	// Line 694, Address: 0x4ae588, Func Offset: 0x1d8
	// Line 695, Address: 0x4ae58c, Func Offset: 0x1dc
	// Line 696, Address: 0x4ae590, Func Offset: 0x1e0
	// Line 699, Address: 0x4ae594, Func Offset: 0x1e4
	// Line 700, Address: 0x4ae5a0, Func Offset: 0x1f0
	// Func End, Address: 0x4ae5bc, Func Offset: 0x20c
}

// iModelQuatToMat__FP5xQuatP5xVec3P11RwMatrixTag
// Start address: 0x4ae5c0
void iModelQuatToMat(xQuat* quat, xVec3* tran, RwMatrixTag* mat)
{
	// Line 378, Address: 0x4ae5c0, Func Offset: 0
	// Line 390, Address: 0x4ae5dc, Func Offset: 0x1c
	// Line 391, Address: 0x4ae5e4, Func Offset: 0x24
	// Line 390, Address: 0x4ae5e8, Func Offset: 0x28
	// Line 391, Address: 0x4ae5ec, Func Offset: 0x2c
	// Line 392, Address: 0x4ae5f4, Func Offset: 0x34
	// Line 394, Address: 0x4ae600, Func Offset: 0x40
	// Line 395, Address: 0x4ae608, Func Offset: 0x48
	// Line 396, Address: 0x4ae610, Func Offset: 0x50
	// Line 397, Address: 0x4ae618, Func Offset: 0x58
	// Func End, Address: 0x4ae630, Func Offset: 0x70
}

// iModelNumBones__FP8RpAtomic
// Start address: 0x4ae630
uint32 iModelNumBones(RpAtomic* model)
{
	// Line 366, Address: 0x4ae630, Func Offset: 0
	// Line 367, Address: 0x4ae63c, Func Offset: 0xc
	// Line 369, Address: 0x4ae65c, Func Offset: 0x2c
	// Line 374, Address: 0x4ae664, Func Offset: 0x34
	// Line 367, Address: 0x4ae66c, Func Offset: 0x3c
	// Line 374, Address: 0x4ae670, Func Offset: 0x40
	// Line 367, Address: 0x4ae67c, Func Offset: 0x4c
	// Line 370, Address: 0x4ae684, Func Offset: 0x54
	// Line 375, Address: 0x4ae688, Func Offset: 0x58
	// Func End, Address: 0x4ae698, Func Offset: 0x68
}

// iModelFile_RWMultiAtomic__FP8RpAtomic
// Start address: 0x4ae6a0
RpAtomic* iModelFile_RWMultiAtomic(RpAtomic* model)
{
	RpClump* clump;
	RpAtomic* nextModel;
	// Line 356, Address: 0x4ae6a0, Func Offset: 0
	// Line 357, Address: 0x4ae6a4, Func Offset: 0x4
	// Line 359, Address: 0x4ae6ac, Func Offset: 0xc
	// Line 361, Address: 0x4ae6b0, Func Offset: 0x10
	// Line 360, Address: 0x4ae6bc, Func Offset: 0x1c
	// Line 361, Address: 0x4ae6c0, Func Offset: 0x20
	// Line 362, Address: 0x4ae6c8, Func Offset: 0x28
	// Line 357, Address: 0x4ae6d0, Func Offset: 0x30
	// Line 363, Address: 0x4ae6d4, Func Offset: 0x34
	// Func End, Address: 0x4ae6e0, Func Offset: 0x40
}

// NextAtomicCallback__FP8RpAtomicPv
// Start address: 0x4ae6e0
RpAtomic* NextAtomicCallback(RpAtomic* atomic, void* data)
{
	RpAtomic** nextModel;
	// Line 342, Address: 0x4ae6e0, Func Offset: 0
	// Line 344, Address: 0x4ae6e4, Func Offset: 0x4
	// Line 346, Address: 0x4ae6ec, Func Offset: 0xc
	// Line 347, Address: 0x4ae6f4, Func Offset: 0x14
	// Line 349, Address: 0x4ae6f8, Func Offset: 0x18
	// Line 345, Address: 0x4ae700, Func Offset: 0x20
	// Line 350, Address: 0x4ae708, Func Offset: 0x28
	// Func End, Address: 0x4ae710, Func Offset: 0x30
}

// iModelUnload__FP8RpAtomic
// Start address: 0x4ae710
void iModelUnload(RpAtomic* userdata)
{
	RpClump* clump;
	RwFrame* frame;
	RwFrame* root;
	// Line 307, Address: 0x4ae710, Func Offset: 0
	// Line 313, Address: 0x4ae720, Func Offset: 0x10
	// Line 318, Address: 0x4ae724, Func Offset: 0x14
	// Line 319, Address: 0x4ae728, Func Offset: 0x18
	// Line 321, Address: 0x4ae730, Func Offset: 0x20
	// Line 322, Address: 0x4ae738, Func Offset: 0x28
	// Line 323, Address: 0x4ae744, Func Offset: 0x34
	// Line 324, Address: 0x4ae750, Func Offset: 0x40
	// Line 328, Address: 0x4ae754, Func Offset: 0x44
	// Line 330, Address: 0x4ae764, Func Offset: 0x54
	// Func End, Address: 0x4ae778, Func Offset: 0x68
}

// iModelFileNew__FPvUi
// Start address: 0x4ae780
RpAtomic* iModelFileNew(void* buffer, uint32 size)
{
	RwMemory rwmem;
	// Line 291, Address: 0x4ae780, Func Offset: 0
	// Line 295, Address: 0x4ae788, Func Offset: 0x8
	// Line 293, Address: 0x4ae78c, Func Offset: 0xc
	// Line 294, Address: 0x4ae790, Func Offset: 0x10
	// Line 295, Address: 0x4ae794, Func Offset: 0x14
	// Line 296, Address: 0x4ae7a8, Func Offset: 0x28
	// Func End, Address: 0x4ae7b4, Func Offset: 0x34
}

// iModelStreamRead__FP8RwStream
// Start address: 0x4ae7c0
RpAtomic* iModelStreamRead(RwStream* stream)
{
	RpClump* clump;
	uint32 i;
	uint32 maxIndex;
	float32 maxRadius;
	float32 testRadius;
	// Line 208, Address: 0x4ae7c0, Func Offset: 0
	// Line 212, Address: 0x4ae7d0, Func Offset: 0x10
	// Line 216, Address: 0x4ae7d8, Func Offset: 0x18
	// Line 224, Address: 0x4ae7f0, Func Offset: 0x30
	// Line 225, Address: 0x4ae7fc, Func Offset: 0x3c
	// Line 226, Address: 0x4ae808, Func Offset: 0x48
	// Line 231, Address: 0x4ae810, Func Offset: 0x50
	// Line 240, Address: 0x4ae82c, Func Offset: 0x6c
	// Line 245, Address: 0x4ae838, Func Offset: 0x78
	// Line 244, Address: 0x4ae83c, Func Offset: 0x7c
	// Line 243, Address: 0x4ae840, Func Offset: 0x80
	// Line 245, Address: 0x4ae844, Func Offset: 0x84
	// Line 246, Address: 0x4ae85c, Func Offset: 0x9c
	// Line 247, Address: 0x4ae868, Func Offset: 0xa8
	// Line 248, Address: 0x4ae86c, Func Offset: 0xac
	// Line 250, Address: 0x4ae870, Func Offset: 0xb0
	// Line 253, Address: 0x4ae880, Func Offset: 0xc0
	// Line 254, Address: 0x4ae89c, Func Offset: 0xdc
	// Line 256, Address: 0x4ae8a4, Func Offset: 0xe4
	// Line 260, Address: 0x4ae8ec, Func Offset: 0x12c
	// Line 261, Address: 0x4ae8f8, Func Offset: 0x138
	// Line 264, Address: 0x4ae8fc, Func Offset: 0x13c
	// Line 267, Address: 0x4ae910, Func Offset: 0x150
	// Line 270, Address: 0x4ae918, Func Offset: 0x158
	// Line 267, Address: 0x4ae91c, Func Offset: 0x15c
	// Line 270, Address: 0x4ae920, Func Offset: 0x160
	// Line 279, Address: 0x4ae938, Func Offset: 0x178
	// Line 270, Address: 0x4ae93c, Func Offset: 0x17c
	// Line 271, Address: 0x4ae940, Func Offset: 0x180
	// Line 274, Address: 0x4ae948, Func Offset: 0x188
	// Line 280, Address: 0x4ae94c, Func Offset: 0x18c
	// Line 274, Address: 0x4ae950, Func Offset: 0x190
	// Line 279, Address: 0x4ae954, Func Offset: 0x194
	// Line 280, Address: 0x4ae964, Func Offset: 0x1a4
	// Line 281, Address: 0x4ae974, Func Offset: 0x1b4
	// Line 284, Address: 0x4ae978, Func Offset: 0x1b8
	// Line 213, Address: 0x4ae984, Func Offset: 0x1c4
	// Line 284, Address: 0x4ae98c, Func Offset: 0x1cc
	// Line 220, Address: 0x4ae994, Func Offset: 0x1d4
	// Line 227, Address: 0x4ae99c, Func Offset: 0x1dc
	// Line 284, Address: 0x4ae9a4, Func Offset: 0x1e4
	// Line 285, Address: 0x4ae9c8, Func Offset: 0x208
	// Func End, Address: 0x4ae9dc, Func Offset: 0x21c
}

// FindAtomicCallback__FP8RpAtomicPv
// Start address: 0x4ae9e0
RpAtomic* FindAtomicCallback(RpAtomic* atomic)
{
	RpHAnimHierarchy* pHier;
	RpSkin* pSkin;
	// Line 146, Address: 0x4ae9e0, Func Offset: 0
	// Line 148, Address: 0x4ae9fc, Func Offset: 0x1c
	// Line 152, Address: 0x4aea20, Func Offset: 0x40
	// Line 155, Address: 0x4aea2c, Func Offset: 0x4c
	// Line 156, Address: 0x4aea3c, Func Offset: 0x5c
	// Line 169, Address: 0x4aea5c, Func Offset: 0x7c
	// Line 156, Address: 0x4aea60, Func Offset: 0x80
	// Line 169, Address: 0x4aea64, Func Offset: 0x84
	// Line 171, Address: 0x4aea6c, Func Offset: 0x8c
	// Line 174, Address: 0x4aea7c, Func Offset: 0x9c
	// Line 177, Address: 0x4aea84, Func Offset: 0xa4
	// Line 178, Address: 0x4aea8c, Func Offset: 0xac
	// Line 182, Address: 0x4aea90, Func Offset: 0xb0
	// Line 183, Address: 0x4aeaa0, Func Offset: 0xc0
	// Line 186, Address: 0x4aeaac, Func Offset: 0xcc
	// Line 191, Address: 0x4aeab8, Func Offset: 0xd8
	// Line 197, Address: 0x4aeac0, Func Offset: 0xe0
	// Line 148, Address: 0x4aeac8, Func Offset: 0xe8
	// Line 197, Address: 0x4aeacc, Func Offset: 0xec
	// Line 148, Address: 0x4aead8, Func Offset: 0xf8
	// Line 187, Address: 0x4aeae0, Func Offset: 0x100
	// Line 197, Address: 0x4aeae4, Func Offset: 0x104
	// Line 198, Address: 0x4aeafc, Func Offset: 0x11c
	// Func End, Address: 0x4aeb18, Func Offset: 0x138
}

// iModelInitOnce__Fv
// Start address: 0x4aeb20
void iModelInitOnce()
{
	RwFrame* frame;
	RwRGBAReal black;
	int32 i;
	// Line 128, Address: 0x4aeb20, Func Offset: 0
	// Line 130, Address: 0x4aeb24, Func Offset: 0x4
	// Line 128, Address: 0x4aeb28, Func Offset: 0x8
	// Line 130, Address: 0x4aeb2c, Func Offset: 0xc
	// Line 128, Address: 0x4aeb30, Func Offset: 0x10
	// Line 130, Address: 0x4aeb34, Func Offset: 0x14
	// Line 131, Address: 0x4aeb58, Func Offset: 0x38
	// Line 142, Address: 0x4aeb68, Func Offset: 0x48
	// Line 133, Address: 0x4aeb70, Func Offset: 0x50
	// Line 142, Address: 0x4aeb74, Func Offset: 0x54
	// Line 140, Address: 0x4aebc0, Func Offset: 0xa0
	// Line 142, Address: 0x4aebc4, Func Offset: 0xa4
	// Func End, Address: 0x4aebe4, Func Offset: 0xc4
}

// iModelInit__Fv
// Start address: 0x4aebf0
void iModelInit()
{
	// Line 124, Address: 0x4aebf0, Func Offset: 0
	// Func End, Address: 0x4aebf8, Func Offset: 0x8
}

// iModelGetHierarchy__FP8RpAtomic
// Start address: 0x4aec00
RpHAnimHierarchy* iModelGetHierarchy(RpAtomic* imodel)
{
	RpHAnimHierarchy* hierarchy;
	RwFrame* frame;
	// Line 104, Address: 0x4aec00, Func Offset: 0
	// Line 105, Address: 0x4aec0c, Func Offset: 0xc
	// Line 106, Address: 0x4aec10, Func Offset: 0x10
	// Line 107, Address: 0x4aec14, Func Offset: 0x14
	// Line 108, Address: 0x4aec28, Func Offset: 0x28
	// Line 107, Address: 0x4aec30, Func Offset: 0x30
	// Line 108, Address: 0x4aec34, Func Offset: 0x34
	// Line 107, Address: 0x4aec40, Func Offset: 0x40
	// Line 109, Address: 0x4aec48, Func Offset: 0x48
	// Func End, Address: 0x4aec58, Func Offset: 0x58
}

// GetChildFrameHierarchy__FP7RwFramePv
// Start address: 0x4aec60
RwFrame* GetChildFrameHierarchy(RwFrame* frame, void* data)
{
	RpHAnimHierarchy* hierarchy;
	// Line 93, Address: 0x4aec60, Func Offset: 0
	// Line 95, Address: 0x4aec74, Func Offset: 0x14
	// Line 96, Address: 0x4aec7c, Func Offset: 0x1c
	// Line 100, Address: 0x4aec84, Func Offset: 0x24
	// Line 101, Address: 0x4aec88, Func Offset: 0x28
	// Line 97, Address: 0x4aec90, Func Offset: 0x30
	// Line 101, Address: 0x4aec98, Func Offset: 0x38
	// Line 98, Address: 0x4aeca0, Func Offset: 0x40
	// Line 102, Address: 0x4aeca4, Func Offset: 0x44
	// Func End, Address: 0x4aecb8, Func Offset: 0x58
}

