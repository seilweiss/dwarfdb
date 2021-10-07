



void GGRibbonLoop(zEntPickup* ent);
void zEntPickup_SceneUpdate(float32 dt);
void zEntPickup_RenderList(zEntPickup* plist, uint32 pcount);
void zEntPickup_Drop(zEntPickup* ent);
void zEntPickup_Load(zEntPickup* ent, xSerial* s);
void zEntPickup_Save(zEntPickup* ent, xSerial* s);
void zEntPickup_Reset(zEntPickup* ent);
void zEntPickup_UpdateAll(float32 dt);
void zEntPickup_UpdateReset();
void zEntPickup_UpdateInit(zEntPickup* plist, uint32 pcount);
void zEntPickup_SetState(zEntPickup* ent, uint32 state);
void zEntPickup_Update(zEntPickup* ent, xScene* sc, float32 dt);
void zEntPickup_GivePickup(zEntPickup* ent);
void zEntPickup_DoPickup(zEntPickup* ent, uint8 instant);
int32 CheckPickupAgainstPlayer(xEnt* cbent, void* cbdata);
void zEntPickupEventCB(xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget);
void zEntPickup_Setup();
void zEntPickup_Setup(zEntPickup* p);
void zEntPickupInit(zEntPickup* ent, xEntAsset* asset);
void zEntPickupInit(void* ent, void* asset);
void PickupFallPhysics(zEntPickup* ent, xScene* sc, float32 dt);
void zEntPickupSceneInit(uint32 sceneID);

// GGRibbonLoop__FP10zEntPickup
// Start address: 0x351cc0
void GGRibbonLoop(zEntPickup* ent)
{
	RibData* ribhelp;
	xVec3 pos1;
	xVec3 pos2;
	xMat4x3* mat_root;
	xVec3 dir_emit;
	// Line 2450, Address: 0x351cc0, Func Offset: 0
	// Line 2451, Address: 0x351cc8, Func Offset: 0x8
	// Line 2460, Address: 0x351cd4, Func Offset: 0x14
	// Line 2458, Address: 0x351cd8, Func Offset: 0x18
	// Line 2460, Address: 0x351cdc, Func Offset: 0x1c
	// Line 2467, Address: 0x351ce0, Func Offset: 0x20
	// Line 2470, Address: 0x351ce4, Func Offset: 0x24
	// Line 2471, Address: 0x351ce8, Func Offset: 0x28
	// Line 2466, Address: 0x351cec, Func Offset: 0x2c
	// Line 2458, Address: 0x351cf0, Func Offset: 0x30
	// Line 2468, Address: 0x351cf4, Func Offset: 0x34
	// Line 2460, Address: 0x351cf8, Func Offset: 0x38
	// Line 2466, Address: 0x351cfc, Func Offset: 0x3c
	// Line 2467, Address: 0x351d08, Func Offset: 0x48
	// Line 2466, Address: 0x351d14, Func Offset: 0x54
	// Line 2472, Address: 0x351d18, Func Offset: 0x58
	// Line 2477, Address: 0x351d1c, Func Offset: 0x5c
	// Line 2467, Address: 0x351d20, Func Offset: 0x60
	// Line 2470, Address: 0x351d24, Func Offset: 0x64
	// Line 2471, Address: 0x351d2c, Func Offset: 0x6c
	// Line 2475, Address: 0x351d30, Func Offset: 0x70
	// Line 2466, Address: 0x351d34, Func Offset: 0x74
	// Line 2467, Address: 0x351d38, Func Offset: 0x78
	// Line 2475, Address: 0x351d3c, Func Offset: 0x7c
	// Line 2477, Address: 0x351d40, Func Offset: 0x80
	// Line 2478, Address: 0x351d88, Func Offset: 0xc8
	// Line 2480, Address: 0x351d8c, Func Offset: 0xcc
	// Line 2478, Address: 0x351d90, Func Offset: 0xd0
	// Line 2480, Address: 0x351dbc, Func Offset: 0xfc
	// Line 2484, Address: 0x351e04, Func Offset: 0x144
	// Line 2481, Address: 0x351e0c, Func Offset: 0x14c
	// Line 2490, Address: 0x351e10, Func Offset: 0x150
	// Line 2481, Address: 0x351e14, Func Offset: 0x154
	// Line 2484, Address: 0x351e18, Func Offset: 0x158
	// Line 2481, Address: 0x351e24, Func Offset: 0x164
	// Line 2484, Address: 0x351e28, Func Offset: 0x168
	// Line 2490, Address: 0x351e2c, Func Offset: 0x16c
	// Line 2484, Address: 0x351e30, Func Offset: 0x170
	// Line 2481, Address: 0x351e3c, Func Offset: 0x17c
	// Line 2490, Address: 0x351e40, Func Offset: 0x180
	// Line 2484, Address: 0x351e44, Func Offset: 0x184
	// Line 2481, Address: 0x351e48, Func Offset: 0x188
	// Line 2484, Address: 0x351e4c, Func Offset: 0x18c
	// Line 2481, Address: 0x351e5c, Func Offset: 0x19c
	// Line 2490, Address: 0x351e64, Func Offset: 0x1a4
	// Line 2484, Address: 0x351e68, Func Offset: 0x1a8
	// Line 2481, Address: 0x351e74, Func Offset: 0x1b4
	// Line 2484, Address: 0x351e78, Func Offset: 0x1b8
	// Line 2481, Address: 0x351e7c, Func Offset: 0x1bc
	// Line 2484, Address: 0x351e80, Func Offset: 0x1c0
	// Line 2481, Address: 0x351e84, Func Offset: 0x1c4
	// Line 2484, Address: 0x351e88, Func Offset: 0x1c8
	// Line 2481, Address: 0x351e90, Func Offset: 0x1d0
	// Line 2490, Address: 0x351e94, Func Offset: 0x1d4
	// Line 2484, Address: 0x351e98, Func Offset: 0x1d8
	// Line 2481, Address: 0x351ea0, Func Offset: 0x1e0
	// Line 2484, Address: 0x351ea4, Func Offset: 0x1e4
	// Line 2481, Address: 0x351ea8, Func Offset: 0x1e8
	// Line 2484, Address: 0x351eac, Func Offset: 0x1ec
	// Line 2490, Address: 0x351ed8, Func Offset: 0x218
	// Line 2491, Address: 0x351ee0, Func Offset: 0x220
	// Func End, Address: 0x351eec, Func Offset: 0x22c
}

// zEntPickup_SceneUpdate__Ff
// Start address: 0x351ef0
void zEntPickup_SceneUpdate(float32 dt)
{
	// Line 2389, Address: 0x351ef0, Func Offset: 0
	// Line 2391, Address: 0x351ef4, Func Offset: 0x4
	// Line 2389, Address: 0x351ef8, Func Offset: 0x8
	// Line 2391, Address: 0x351efc, Func Offset: 0xc
	// Line 2392, Address: 0x351f04, Func Offset: 0x14
	// Line 2391, Address: 0x351f08, Func Offset: 0x18
	// Line 2392, Address: 0x351f0c, Func Offset: 0x1c
	// Line 2391, Address: 0x351f10, Func Offset: 0x20
	// Line 2392, Address: 0x351f14, Func Offset: 0x24
	// Line 2391, Address: 0x351f1c, Func Offset: 0x2c
	// Line 2392, Address: 0x351f24, Func Offset: 0x34
	// Line 2395, Address: 0x351f30, Func Offset: 0x40
	// Line 2396, Address: 0x351f40, Func Offset: 0x50
	// Line 2397, Address: 0x351f48, Func Offset: 0x58
	// Line 2393, Address: 0x351f50, Func Offset: 0x60
	// Line 2397, Address: 0x351f5c, Func Offset: 0x6c
	// Func End, Address: 0x351f68, Func Offset: 0x78
}

// zEntPickup_RenderList__FP10zEntPickupUi
// Start address: 0x351f70
void zEntPickup_RenderList(zEntPickup* plist, uint32 pcount)
{
	uint32 i;
	RpAtomic* imodel;
	xVec3* campos;
	float32 dist2;
	int32 shadowResult;
	xVec3 shadVec;
	xSphere bound;
	float32 auraRadius;
	float32 prescale;
	xModelInstance* minst;
	int32 alpha;
	float32 radius;
	xVec3 currOffset;
	xVec3 pos;
	xVec3 currOffset;
	float32 ang;
	xVec3 pos;
	// Line 2193, Address: 0x351f70, Func Offset: 0
	// Line 2194, Address: 0x351fd0, Func Offset: 0x60
	// Line 2195, Address: 0x351fec, Func Offset: 0x7c
	// Line 2207, Address: 0x351ff4, Func Offset: 0x84
	// Line 2209, Address: 0x352004, Func Offset: 0x94
	// Line 2211, Address: 0x35211c, Func Offset: 0x1ac
	// Line 2219, Address: 0x352138, Func Offset: 0x1c8
	// Line 2213, Address: 0x352140, Func Offset: 0x1d0
	// Line 2219, Address: 0x352144, Func Offset: 0x1d4
	// Line 2213, Address: 0x352148, Func Offset: 0x1d8
	// Line 2219, Address: 0x35214c, Func Offset: 0x1dc
	// Line 2226, Address: 0x352150, Func Offset: 0x1e0
	// Line 2219, Address: 0x352154, Func Offset: 0x1e4
	// Line 2226, Address: 0x35215c, Func Offset: 0x1ec
	// Line 2221, Address: 0x352168, Func Offset: 0x1f8
	// Line 2226, Address: 0x352170, Func Offset: 0x200
	// Line 2240, Address: 0x352194, Func Offset: 0x224
	// Line 2244, Address: 0x3521c0, Func Offset: 0x250
	// Line 2245, Address: 0x3521c4, Func Offset: 0x254
	// Line 2246, Address: 0x3521dc, Func Offset: 0x26c
	// Line 2248, Address: 0x3521f0, Func Offset: 0x280
	// Line 2249, Address: 0x352218, Func Offset: 0x2a8
	// Line 2248, Address: 0x352220, Func Offset: 0x2b0
	// Line 2249, Address: 0x35222c, Func Offset: 0x2bc
	// Line 2251, Address: 0x352248, Func Offset: 0x2d8
	// Line 2249, Address: 0x35224c, Func Offset: 0x2dc
	// Line 2251, Address: 0x352258, Func Offset: 0x2e8
	// Line 2252, Address: 0x352264, Func Offset: 0x2f4
	// Line 2256, Address: 0x352284, Func Offset: 0x314
	// Line 2252, Address: 0x352290, Func Offset: 0x320
	// Line 2256, Address: 0x352294, Func Offset: 0x324
	// Line 2259, Address: 0x3522a4, Func Offset: 0x334
	// Line 2262, Address: 0x3522c0, Func Offset: 0x350
	// Line 2268, Address: 0x3522dc, Func Offset: 0x36c
	// Line 2269, Address: 0x3522e0, Func Offset: 0x370
	// Line 2270, Address: 0x352304, Func Offset: 0x394
	// Line 2271, Address: 0x352308, Func Offset: 0x398
	// Line 2270, Address: 0x35230c, Func Offset: 0x39c
	// Line 2272, Address: 0x352310, Func Offset: 0x3a0
	// Line 2273, Address: 0x352314, Func Offset: 0x3a4
	// Line 2274, Address: 0x352318, Func Offset: 0x3a8
	// Line 2275, Address: 0x35231c, Func Offset: 0x3ac
	// Line 2276, Address: 0x352320, Func Offset: 0x3b0
	// Line 2277, Address: 0x352324, Func Offset: 0x3b4
	// Line 2270, Address: 0x352328, Func Offset: 0x3b8
	// Line 2278, Address: 0x35232c, Func Offset: 0x3bc
	// Line 2270, Address: 0x352330, Func Offset: 0x3c0
	// Line 2271, Address: 0x352334, Func Offset: 0x3c4
	// Line 2272, Address: 0x352340, Func Offset: 0x3d0
	// Line 2273, Address: 0x35234c, Func Offset: 0x3dc
	// Line 2274, Address: 0x352358, Func Offset: 0x3e8
	// Line 2275, Address: 0x352364, Func Offset: 0x3f4
	// Line 2276, Address: 0x352370, Func Offset: 0x400
	// Line 2277, Address: 0x35237c, Func Offset: 0x40c
	// Line 2278, Address: 0x352388, Func Offset: 0x418
	// Line 2279, Address: 0x352390, Func Offset: 0x420
	// Line 2280, Address: 0x352398, Func Offset: 0x428
	// Line 2295, Address: 0x35240c, Func Offset: 0x49c
	// Line 2300, Address: 0x352478, Func Offset: 0x508
	// Line 2301, Address: 0x352490, Func Offset: 0x520
	// Line 2306, Address: 0x3524b4, Func Offset: 0x544
	// Line 2307, Address: 0x3524c0, Func Offset: 0x550
	// Line 2308, Address: 0x3524c4, Func Offset: 0x554
	// Line 2311, Address: 0x3524cc, Func Offset: 0x55c
	// Line 2317, Address: 0x3524e8, Func Offset: 0x578
	// Line 2319, Address: 0x35251c, Func Offset: 0x5ac
	// Line 2321, Address: 0x35252c, Func Offset: 0x5bc
	// Line 2322, Address: 0x352538, Func Offset: 0x5c8
	// Line 2323, Address: 0x352544, Func Offset: 0x5d4
	// Line 2324, Address: 0x35256c, Func Offset: 0x5fc
	// Line 2325, Address: 0x352578, Func Offset: 0x608
	// Line 2326, Address: 0x35257c, Func Offset: 0x60c
	// Line 2328, Address: 0x352584, Func Offset: 0x614
	// Line 2329, Address: 0x35258c, Func Offset: 0x61c
	// Line 2332, Address: 0x352590, Func Offset: 0x620
	// Line 2335, Address: 0x3525a0, Func Offset: 0x630
	// Line 2336, Address: 0x3525b4, Func Offset: 0x644
	// Line 2337, Address: 0x3525c8, Func Offset: 0x658
	// Line 2338, Address: 0x3525cc, Func Offset: 0x65c
	// Line 2342, Address: 0x3525e0, Func Offset: 0x670
	// Line 2345, Address: 0x3525fc, Func Offset: 0x68c
	// Line 2348, Address: 0x35260c, Func Offset: 0x69c
	// Line 2350, Address: 0x352660, Func Offset: 0x6f0
	// Line 2349, Address: 0x352664, Func Offset: 0x6f4
	// Line 2350, Address: 0x352668, Func Offset: 0x6f8
	// Line 2351, Address: 0x35266c, Func Offset: 0x6fc
	// Line 2350, Address: 0x352670, Func Offset: 0x700
	// Line 2349, Address: 0x352674, Func Offset: 0x704
	// Line 2351, Address: 0x352678, Func Offset: 0x708
	// Line 2350, Address: 0x352680, Func Offset: 0x710
	// Line 2349, Address: 0x352688, Func Offset: 0x718
	// Line 2350, Address: 0x352698, Func Offset: 0x728
	// Line 2349, Address: 0x3526a0, Func Offset: 0x730
	// Line 2350, Address: 0x3526a8, Func Offset: 0x738
	// Line 2351, Address: 0x3526cc, Func Offset: 0x75c
	// Line 2352, Address: 0x3526d4, Func Offset: 0x764
	// Line 2362, Address: 0x3526dc, Func Offset: 0x76c
	// Line 2363, Address: 0x35272c, Func Offset: 0x7bc
	// Line 2364, Address: 0x35273c, Func Offset: 0x7cc
	// Line 2363, Address: 0x352740, Func Offset: 0x7d0
	// Line 2364, Address: 0x352748, Func Offset: 0x7d8
	// Line 2365, Address: 0x352754, Func Offset: 0x7e4
	// Line 2366, Address: 0x352758, Func Offset: 0x7e8
	// Line 2364, Address: 0x35275c, Func Offset: 0x7ec
	// Line 2366, Address: 0x352760, Func Offset: 0x7f0
	// Line 2364, Address: 0x352768, Func Offset: 0x7f8
	// Line 2365, Address: 0x352770, Func Offset: 0x800
	// Line 2364, Address: 0x352774, Func Offset: 0x804
	// Line 2366, Address: 0x352778, Func Offset: 0x808
	// Line 2368, Address: 0x3527c0, Func Offset: 0x850
	// Line 2367, Address: 0x3527c4, Func Offset: 0x854
	// Line 2368, Address: 0x3527c8, Func Offset: 0x858
	// Line 2367, Address: 0x3527cc, Func Offset: 0x85c
	// Line 2368, Address: 0x3527d0, Func Offset: 0x860
	// Line 2370, Address: 0x3527d4, Func Offset: 0x864
	// Line 2368, Address: 0x3527e8, Func Offset: 0x878
	// Line 2370, Address: 0x3527f0, Func Offset: 0x880
	// Line 2367, Address: 0x3527fc, Func Offset: 0x88c
	// Line 2368, Address: 0x35280c, Func Offset: 0x89c
	// Line 2367, Address: 0x352814, Func Offset: 0x8a4
	// Line 2368, Address: 0x35281c, Func Offset: 0x8ac
	// Line 2370, Address: 0x352840, Func Offset: 0x8d0
	// Line 2375, Address: 0x35284c, Func Offset: 0x8dc
	// Line 2377, Address: 0x35285c, Func Offset: 0x8ec
	// Line 2382, Address: 0x35286c, Func Offset: 0x8fc
	// Func End, Address: 0x3528cc, Func Offset: 0x95c
}

// zEntPickup_Drop__FP10zEntPickup
// Start address: 0x3528d0
void zEntPickup_Drop(zEntPickup* ent)
{
	float32 c;
	float32 sol[2];
	uint32 solcnt;
	// Line 1949, Address: 0x3528d0, Func Offset: 0
	// Line 1951, Address: 0x3528d4, Func Offset: 0x4
	// Line 1949, Address: 0x3528d8, Func Offset: 0x8
	// Line 1951, Address: 0x3528e8, Func Offset: 0x18
	// Line 1952, Address: 0x3528f0, Func Offset: 0x20
	// Line 1953, Address: 0x3529ec, Func Offset: 0x11c
	// Line 1958, Address: 0x352a0c, Func Offset: 0x13c
	// Line 1962, Address: 0x352a28, Func Offset: 0x158
	// Line 1963, Address: 0x352a48, Func Offset: 0x178
	// Line 1969, Address: 0x352a74, Func Offset: 0x1a4
	// Line 1970, Address: 0x352a78, Func Offset: 0x1a8
	// Line 1969, Address: 0x352a7c, Func Offset: 0x1ac
	// Line 1970, Address: 0x352a80, Func Offset: 0x1b0
	// Line 1969, Address: 0x352a84, Func Offset: 0x1b4
	// Line 1970, Address: 0x352a88, Func Offset: 0x1b8
	// Line 1974, Address: 0x352a90, Func Offset: 0x1c0
	// Line 1975, Address: 0x352a94, Func Offset: 0x1c4
	// Line 1976, Address: 0x352a98, Func Offset: 0x1c8
	// Line 1980, Address: 0x352a9c, Func Offset: 0x1cc
	// Line 1996, Address: 0x352aac, Func Offset: 0x1dc
	// Line 1997, Address: 0x352ab4, Func Offset: 0x1e4
	// Line 1952, Address: 0x352ac0, Func Offset: 0x1f0
	// Line 1997, Address: 0x352ac4, Func Offset: 0x1f4
	// Line 1952, Address: 0x352acc, Func Offset: 0x1fc
	// Line 1981, Address: 0x352adc, Func Offset: 0x20c
	// Line 1997, Address: 0x352ae0, Func Offset: 0x210
	// Line 1981, Address: 0x352ae4, Func Offset: 0x214
	// Line 1997, Address: 0x352ae8, Func Offset: 0x218
	// Line 1983, Address: 0x352afc, Func Offset: 0x22c
	// Line 1997, Address: 0x352b00, Func Offset: 0x230
	// Line 1983, Address: 0x352b10, Func Offset: 0x240
	// Line 1997, Address: 0x352b14, Func Offset: 0x244
	// Line 1986, Address: 0x352b24, Func Offset: 0x254
	// Line 1997, Address: 0x352b38, Func Offset: 0x268
	// Line 1987, Address: 0x352b40, Func Offset: 0x270
	// Line 1997, Address: 0x352b4c, Func Offset: 0x27c
	// Line 1989, Address: 0x352b64, Func Offset: 0x294
	// Line 1997, Address: 0x352b6c, Func Offset: 0x29c
	// Line 1990, Address: 0x352b84, Func Offset: 0x2b4
	// Line 1997, Address: 0x352b94, Func Offset: 0x2c4
	// Func End, Address: 0x352ba8, Func Offset: 0x2d8
}

// zEntPickup_Load__FP10zEntPickupP7xSerial
// Start address: 0x352bb0
void zEntPickup_Load(zEntPickup* ent, xSerial* s)
{
	int32 is_a_dropper;
	uint32 temp;
	uint32 temp2;
	// Line 1840, Address: 0x352bb0, Func Offset: 0
	// Line 1843, Address: 0x352bd8, Func Offset: 0x28
	// Line 1855, Address: 0x352be0, Func Offset: 0x30
	// Line 1863, Address: 0x352bf4, Func Offset: 0x44
	// Line 1862, Address: 0x352bfc, Func Offset: 0x4c
	// Line 1863, Address: 0x352c00, Func Offset: 0x50
	// Line 1865, Address: 0x352c08, Func Offset: 0x58
	// Line 1870, Address: 0x352c14, Func Offset: 0x64
	// Line 1876, Address: 0x352c24, Func Offset: 0x74
	// Line 1880, Address: 0x352c2c, Func Offset: 0x7c
	// Line 1881, Address: 0x352c38, Func Offset: 0x88
	// Line 1883, Address: 0x352c48, Func Offset: 0x98
	// Line 1888, Address: 0x352c54, Func Offset: 0xa4
	// Line 1902, Address: 0x352c64, Func Offset: 0xb4
	// Line 1906, Address: 0x352c80, Func Offset: 0xd0
	// Line 1912, Address: 0x352cc0, Func Offset: 0x110
	// Line 1920, Address: 0x352d28, Func Offset: 0x178
	// Line 1921, Address: 0x352d30, Func Offset: 0x180
	// Line 1923, Address: 0x352d50, Func Offset: 0x1a0
	// Line 1872, Address: 0x352d5c, Func Offset: 0x1ac
	// Line 1923, Address: 0x352d68, Func Offset: 0x1b8
	// Line 1872, Address: 0x352d70, Func Offset: 0x1c0
	// Line 1923, Address: 0x352d74, Func Offset: 0x1c4
	// Line 1872, Address: 0x352db0, Func Offset: 0x200
	// Line 1923, Address: 0x352db4, Func Offset: 0x204
	// Line 1872, Address: 0x352dd8, Func Offset: 0x228
	// Line 1923, Address: 0x352ddc, Func Offset: 0x22c
	// Line 1872, Address: 0x352e0c, Func Offset: 0x25c
	// Line 1923, Address: 0x352e14, Func Offset: 0x264
	// Line 1873, Address: 0x352e70, Func Offset: 0x2c0
	// Line 1923, Address: 0x352e74, Func Offset: 0x2c4
	// Line 1872, Address: 0x352e98, Func Offset: 0x2e8
	// Line 1923, Address: 0x352e9c, Func Offset: 0x2ec
	// Line 1872, Address: 0x352ea4, Func Offset: 0x2f4
	// Line 1923, Address: 0x352eb4, Func Offset: 0x304
	// Line 1890, Address: 0x352eb8, Func Offset: 0x308
	// Line 1923, Address: 0x352ec4, Func Offset: 0x314
	// Line 1890, Address: 0x352ecc, Func Offset: 0x31c
	// Line 1923, Address: 0x352ed0, Func Offset: 0x320
	// Line 1890, Address: 0x352f0c, Func Offset: 0x35c
	// Line 1923, Address: 0x352f10, Func Offset: 0x360
	// Line 1890, Address: 0x352f34, Func Offset: 0x384
	// Line 1923, Address: 0x352f38, Func Offset: 0x388
	// Line 1890, Address: 0x352f68, Func Offset: 0x3b8
	// Line 1923, Address: 0x352f70, Func Offset: 0x3c0
	// Line 1891, Address: 0x352fcc, Func Offset: 0x41c
	// Line 1923, Address: 0x352fd0, Func Offset: 0x420
	// Line 1890, Address: 0x352ff4, Func Offset: 0x444
	// Line 1923, Address: 0x352ff8, Func Offset: 0x448
	// Line 1890, Address: 0x353000, Func Offset: 0x450
	// Line 1925, Address: 0x353010, Func Offset: 0x460
	// Line 1930, Address: 0x353030, Func Offset: 0x480
	// Func End, Address: 0x353054, Func Offset: 0x4a4
}

// zEntPickup_Save__FP10zEntPickupP7xSerial
// Start address: 0x353060
void zEntPickup_Save(zEntPickup* ent, xSerial* s)
{
	// Line 1814, Address: 0x353060, Func Offset: 0
	// Line 1815, Address: 0x353074, Func Offset: 0x14
	// Line 1820, Address: 0x35307c, Func Offset: 0x1c
	// Line 1822, Address: 0x35308c, Func Offset: 0x2c
	// Line 1823, Address: 0x35309c, Func Offset: 0x3c
	// Line 1825, Address: 0x3530b0, Func Offset: 0x50
	// Line 1827, Address: 0x3530b8, Func Offset: 0x58
	// Func End, Address: 0x3530cc, Func Offset: 0x6c
}

// zEntPickup_Reset__FP10zEntPickup
// Start address: 0x3530d0
void zEntPickup_Reset(zEntPickup* ent)
{
	// Line 1784, Address: 0x3530d0, Func Offset: 0
	// Line 1786, Address: 0x3530dc, Func Offset: 0xc
	// Line 1789, Address: 0x3530e4, Func Offset: 0x14
	// Line 1793, Address: 0x3530e8, Func Offset: 0x18
	// Line 1789, Address: 0x3530ec, Func Offset: 0x1c
	// Line 1790, Address: 0x3530f0, Func Offset: 0x20
	// Line 1791, Address: 0x3530f4, Func Offset: 0x24
	// Line 1792, Address: 0x3530f8, Func Offset: 0x28
	// Line 1793, Address: 0x353104, Func Offset: 0x34
	// Line 1795, Address: 0x353108, Func Offset: 0x38
	// Line 1798, Address: 0x353150, Func Offset: 0x80
	// Line 1795, Address: 0x353154, Func Offset: 0x84
	// Line 1798, Address: 0x353158, Func Offset: 0x88
	// Line 1801, Address: 0x353168, Func Offset: 0x98
	// Line 1802, Address: 0x35320c, Func Offset: 0x13c
	// Func End, Address: 0x35321c, Func Offset: 0x14c
}

// zEntPickup_UpdateAll__Ff
// Start address: 0x353220
void zEntPickup_UpdateAll(float32 dt)
{
	int32 i;
	// Line 1765, Address: 0x353220, Func Offset: 0
	// Line 1768, Address: 0x353230, Func Offset: 0x10
	// Line 1765, Address: 0x353234, Func Offset: 0x14
	// Line 1768, Address: 0x35323c, Func Offset: 0x1c
	// Line 1769, Address: 0x353254, Func Offset: 0x34
	// Line 1779, Address: 0x35326c, Func Offset: 0x4c
	// Line 1780, Address: 0x353288, Func Offset: 0x68
	// Line 1775, Address: 0x353294, Func Offset: 0x74
	// Line 1780, Address: 0x353298, Func Offset: 0x78
	// Func End, Address: 0x3532dc, Func Offset: 0xbc
}

// zEntPickup_UpdateReset__Fv
// Start address: 0x3532e0
void zEntPickup_UpdateReset()
{
	uint32 sPickupUpdateCount'73;
	uint32 i;
	// Line 1755, Address: 0x3532e0, Func Offset: 0
	// Line 1754, Address: 0x3532e4, Func Offset: 0x4
	// Line 1755, Address: 0x3532ec, Func Offset: 0xc
	// Line 1756, Address: 0x3532fc, Func Offset: 0x1c
	// Line 1755, Address: 0x353300, Func Offset: 0x20
	// Line 1756, Address: 0x353310, Func Offset: 0x30
	// Line 1760, Address: 0x353360, Func Offset: 0x80
	// Line 1761, Address: 0x353378, Func Offset: 0x98
	// Line 1756, Address: 0x353384, Func Offset: 0xa4
	// Line 1761, Address: 0x353388, Func Offset: 0xa8
	// Line 1756, Address: 0x353390, Func Offset: 0xb0
	// Line 1761, Address: 0x3533a0, Func Offset: 0xc0
	// Line 1757, Address: 0x3533ac, Func Offset: 0xcc
	// Line 1761, Address: 0x3533b0, Func Offset: 0xd0
	// Func End, Address: 0x3533e8, Func Offset: 0x108
}

// zEntPickup_UpdateInit__FP10zEntPickupUi
// Start address: 0x3533f0
void zEntPickup_UpdateInit(zEntPickup* plist, uint32 pcount)
{
	uint32 sPickupUpdateCount'159;
	uint32 i;
	// Line 1738, Address: 0x3533f0, Func Offset: 0
	// Line 1740, Address: 0x3533f4, Func Offset: 0x4
	// Line 1738, Address: 0x3533f8, Func Offset: 0x8
	// Line 1740, Address: 0x35341c, Func Offset: 0x2c
	// Line 1746, Address: 0x35342c, Func Offset: 0x3c
	// Line 1740, Address: 0x353430, Func Offset: 0x40
	// Line 1743, Address: 0x353434, Func Offset: 0x44
	// Line 1741, Address: 0x353438, Func Offset: 0x48
	// Line 1746, Address: 0x35343c, Func Offset: 0x4c
	// Line 1744, Address: 0x35345c, Func Offset: 0x6c
	// Line 1746, Address: 0x353460, Func Offset: 0x70
	// Line 1744, Address: 0x353464, Func Offset: 0x74
	// Line 1746, Address: 0x353468, Func Offset: 0x78
	// Line 1744, Address: 0x35346c, Func Offset: 0x7c
	// Line 1746, Address: 0x353470, Func Offset: 0x80
	// Line 1744, Address: 0x353474, Func Offset: 0x84
	// Line 1746, Address: 0x353478, Func Offset: 0x88
	// Line 1744, Address: 0x35347c, Func Offset: 0x8c
	// Line 1746, Address: 0x353480, Func Offset: 0x90
	// Line 1744, Address: 0x353484, Func Offset: 0x94
	// Line 1746, Address: 0x353488, Func Offset: 0x98
	// Line 1744, Address: 0x353494, Func Offset: 0xa4
	// Line 1746, Address: 0x353498, Func Offset: 0xa8
	// Line 1747, Address: 0x3535e0, Func Offset: 0x1f0
	// Line 1748, Address: 0x353678, Func Offset: 0x288
	// Line 1747, Address: 0x353684, Func Offset: 0x294
	// Line 1748, Address: 0x353688, Func Offset: 0x298
	// Line 1747, Address: 0x353690, Func Offset: 0x2a0
	// Line 1748, Address: 0x3536a0, Func Offset: 0x2b0
	// Line 1747, Address: 0x3536ac, Func Offset: 0x2bc
	// Line 1748, Address: 0x3536b0, Func Offset: 0x2c0
	// Func End, Address: 0x353708, Func Offset: 0x318
}

// zEntPickup_SetState__FP10zEntPickupUi
// Start address: 0x353710
void zEntPickup_SetState(zEntPickup* ent, uint32 state)
{
	// Line 1689, Address: 0x353710, Func Offset: 0
	// Line 1690, Address: 0x353728, Func Offset: 0x18
	// Line 1691, Address: 0x353828, Func Offset: 0x118
	// Line 1690, Address: 0x353834, Func Offset: 0x124
	// Line 1691, Address: 0x353838, Func Offset: 0x128
	// Line 1690, Address: 0x353840, Func Offset: 0x130
	// Line 1691, Address: 0x353854, Func Offset: 0x144
	// Func End, Address: 0x35385c, Func Offset: 0x14c
}

// zEntPickup_Update__FP10zEntPickupP6xScenef
// Start address: 0x353860
void zEntPickup_Update(zEntPickup* ent, xScene* sc, float32 dt)
{
	xEntFrame frame;
	float32 duration;
	xQuat* q0;
	xVec3* t0;
	xVec3* player;
	float32 chkdist;
	zEnt* plent;
	float32 distsqr;
	float32 dx__;
	float32 dy__;
	float32 dz__;
	xVec3* dest;
	xVec3 vec;
	float32 mult;
	float32 dx__;
	float32 dy__;
	float32 dz__;
	// Line 1438, Address: 0x353860, Func Offset: 0
	// Line 1439, Address: 0x3538a0, Func Offset: 0x40
	// Line 1440, Address: 0x3538bc, Func Offset: 0x5c
	// Line 1443, Address: 0x3538c4, Func Offset: 0x64
	// Line 1445, Address: 0x3538d4, Func Offset: 0x74
	// Line 1449, Address: 0x3538e4, Func Offset: 0x84
	// Line 1451, Address: 0x3538fc, Func Offset: 0x9c
	// Line 1452, Address: 0x353900, Func Offset: 0xa0
	// Line 1458, Address: 0x35390c, Func Offset: 0xac
	// Line 1459, Address: 0x353910, Func Offset: 0xb0
	// Line 1460, Address: 0x353a50, Func Offset: 0x1f0
	// Line 1467, Address: 0x353a70, Func Offset: 0x210
	// Line 1470, Address: 0x353a88, Func Offset: 0x228
	// Line 1472, Address: 0x353a90, Func Offset: 0x230
	// Line 1470, Address: 0x353aa0, Func Offset: 0x240
	// Line 1472, Address: 0x353b24, Func Offset: 0x2c4
	// Line 1473, Address: 0x353b2c, Func Offset: 0x2cc
	// Line 1480, Address: 0x353b30, Func Offset: 0x2d0
	// Line 1474, Address: 0x353b34, Func Offset: 0x2d4
	// Line 1480, Address: 0x353b38, Func Offset: 0x2d8
	// Line 1474, Address: 0x353b3c, Func Offset: 0x2dc
	// Line 1480, Address: 0x353b40, Func Offset: 0x2e0
	// Line 1474, Address: 0x353b44, Func Offset: 0x2e4
	// Line 1480, Address: 0x353b48, Func Offset: 0x2e8
	// Line 1474, Address: 0x353b4c, Func Offset: 0x2ec
	// Line 1477, Address: 0x353bcc, Func Offset: 0x36c
	// Line 1480, Address: 0x353c00, Func Offset: 0x3a0
	// Line 1481, Address: 0x353c08, Func Offset: 0x3a8
	// Line 1486, Address: 0x353c10, Func Offset: 0x3b0
	// Line 1487, Address: 0x353c3c, Func Offset: 0x3dc
	// Line 1491, Address: 0x353c48, Func Offset: 0x3e8
	// Line 1492, Address: 0x353c50, Func Offset: 0x3f0
	// Line 1493, Address: 0x353c58, Func Offset: 0x3f8
	// Line 1494, Address: 0x353c60, Func Offset: 0x400
	// Line 1495, Address: 0x353c6c, Func Offset: 0x40c
	// Line 1497, Address: 0x353c74, Func Offset: 0x414
	// Line 1499, Address: 0x353c78, Func Offset: 0x418
	// Line 1498, Address: 0x353c84, Func Offset: 0x424
	// Line 1499, Address: 0x353c88, Func Offset: 0x428
	// Line 1500, Address: 0x353c98, Func Offset: 0x438
	// Line 1501, Address: 0x353cb0, Func Offset: 0x450
	// Line 1502, Address: 0x353dc4, Func Offset: 0x564
	// Line 1509, Address: 0x353dc8, Func Offset: 0x568
	// Line 1513, Address: 0x353e18, Func Offset: 0x5b8
	// Line 1515, Address: 0x353e20, Func Offset: 0x5c0
	// Line 1517, Address: 0x353e2c, Func Offset: 0x5cc
	// Line 1521, Address: 0x353e34, Func Offset: 0x5d4
	// Line 1522, Address: 0x353e58, Func Offset: 0x5f8
	// Line 1521, Address: 0x353e5c, Func Offset: 0x5fc
	// Line 1522, Address: 0x353e60, Func Offset: 0x600
	// Line 1528, Address: 0x353e88, Func Offset: 0x628
	// Line 1531, Address: 0x353e90, Func Offset: 0x630
	// Line 1532, Address: 0x353ea0, Func Offset: 0x640
	// Line 1536, Address: 0x353ea8, Func Offset: 0x648
	// Line 1538, Address: 0x353eb8, Func Offset: 0x658
	// Line 1541, Address: 0x353ec4, Func Offset: 0x664
	// Line 1543, Address: 0x353edc, Func Offset: 0x67c
	// Line 1546, Address: 0x354018, Func Offset: 0x7b8
	// Line 1551, Address: 0x354024, Func Offset: 0x7c4
	// Line 1555, Address: 0x354028, Func Offset: 0x7c8
	// Line 1546, Address: 0x35402c, Func Offset: 0x7cc
	// Line 1551, Address: 0x354030, Func Offset: 0x7d0
	// Line 1553, Address: 0x354034, Func Offset: 0x7d4
	// Line 1555, Address: 0x354040, Func Offset: 0x7e0
	// Line 1553, Address: 0x354044, Func Offset: 0x7e4
	// Line 1557, Address: 0x354048, Func Offset: 0x7e8
	// Line 1553, Address: 0x35404c, Func Offset: 0x7ec
	// Line 1557, Address: 0x354068, Func Offset: 0x808
	// Line 1560, Address: 0x354080, Func Offset: 0x820
	// Line 1561, Address: 0x354090, Func Offset: 0x830
	// Line 1563, Address: 0x3540a8, Func Offset: 0x848
	// Line 1564, Address: 0x3540cc, Func Offset: 0x86c
	// Line 1566, Address: 0x3540d4, Func Offset: 0x874
	// Line 1568, Address: 0x3540fc, Func Offset: 0x89c
	// Line 1569, Address: 0x35422c, Func Offset: 0x9cc
	// Line 1572, Address: 0x354238, Func Offset: 0x9d8
	// Line 1574, Address: 0x35424c, Func Offset: 0x9ec
	// Line 1577, Address: 0x35426c, Func Offset: 0xa0c
	// Line 1578, Address: 0x3543a8, Func Offset: 0xb48
	// Line 1581, Address: 0x3543b0, Func Offset: 0xb50
	// Line 1584, Address: 0x3543e0, Func Offset: 0xb80
	// Line 1586, Address: 0x3543fc, Func Offset: 0xb9c
	// Line 1587, Address: 0x354410, Func Offset: 0xbb0
	// Line 1590, Address: 0x354418, Func Offset: 0xbb8
	// Line 1591, Address: 0x354440, Func Offset: 0xbe0
	// Line 1592, Address: 0x35444c, Func Offset: 0xbec
	// Line 1593, Address: 0x354454, Func Offset: 0xbf4
	// Line 1595, Address: 0x35445c, Func Offset: 0xbfc
	// Line 1596, Address: 0x354488, Func Offset: 0xc28
	// Line 1597, Address: 0x354494, Func Offset: 0xc34
	// Line 1599, Address: 0x35449c, Func Offset: 0xc3c
	// Line 1601, Address: 0x35464c, Func Offset: 0xdec
	// Line 1603, Address: 0x354660, Func Offset: 0xe00
	// Line 1606, Address: 0x354690, Func Offset: 0xe30
	// Line 1607, Address: 0x3546a4, Func Offset: 0xe44
	// Line 1608, Address: 0x3546ac, Func Offset: 0xe4c
	// Line 1611, Address: 0x3546c4, Func Offset: 0xe64
	// Line 1614, Address: 0x3546e8, Func Offset: 0xe88
	// Line 1615, Address: 0x3546f0, Func Offset: 0xe90
	// Line 1619, Address: 0x354700, Func Offset: 0xea0
	// Line 1620, Address: 0x354720, Func Offset: 0xec0
	// Line 1621, Address: 0x35472c, Func Offset: 0xecc
	// Line 1623, Address: 0x35486c, Func Offset: 0x100c
	// Line 1624, Address: 0x354874, Func Offset: 0x1014
	// Line 1627, Address: 0x3548ac, Func Offset: 0x104c
	// Line 1646, Address: 0x3548b4, Func Offset: 0x1054
	// Line 1651, Address: 0x3548b8, Func Offset: 0x1058
	// Line 1648, Address: 0x3548bc, Func Offset: 0x105c
	// Line 1645, Address: 0x3548c0, Func Offset: 0x1060
	// Line 1651, Address: 0x3548c4, Func Offset: 0x1064
	// Line 1646, Address: 0x3548c8, Func Offset: 0x1068
	// Line 1648, Address: 0x3548cc, Func Offset: 0x106c
	// Line 1649, Address: 0x3548d8, Func Offset: 0x1078
	// Line 1650, Address: 0x3548e8, Func Offset: 0x1088
	// Line 1651, Address: 0x3548f4, Func Offset: 0x1094
	// Line 1653, Address: 0x3548fc, Func Offset: 0x109c
	// Line 1661, Address: 0x354900, Func Offset: 0x10a0
	// Line 1653, Address: 0x354910, Func Offset: 0x10b0
	// Line 1657, Address: 0x354924, Func Offset: 0x10c4
	// Line 1661, Address: 0x354954, Func Offset: 0x10f4
	// Line 1664, Address: 0x354960, Func Offset: 0x1100
	// Line 1667, Address: 0x354968, Func Offset: 0x1108
	// Line 1669, Address: 0x354980, Func Offset: 0x1120
	// Line 1673, Address: 0x354984, Func Offset: 0x1124
	// Line 1674, Address: 0x3549a8, Func Offset: 0x1148
	// Line 1675, Address: 0x3549c8, Func Offset: 0x1168
	// Line 1685, Address: 0x3549e8, Func Offset: 0x1188
	// Func End, Address: 0x354a24, Func Offset: 0x11c4
}

// zEntPickup_GivePickup__FP10zEntPickup
// Start address: 0x354a30
void zEntPickup_GivePickup(zEntPickup* ent)
{
	xMat4x3 mat;
	// Line 1192, Address: 0x354a30, Func Offset: 0
	// Line 1193, Address: 0x354a44, Func Offset: 0x14
	// Line 1197, Address: 0x354a60, Func Offset: 0x30
	// Line 1200, Address: 0x354aa0, Func Offset: 0x70
	// Line 1201, Address: 0x354ab4, Func Offset: 0x84
	// Line 1203, Address: 0x354abc, Func Offset: 0x8c
	// Line 1204, Address: 0x354ad0, Func Offset: 0xa0
	// Line 1206, Address: 0x354ad8, Func Offset: 0xa8
	// Line 1207, Address: 0x354aec, Func Offset: 0xbc
	// Line 1209, Address: 0x354af4, Func Offset: 0xc4
	// Line 1210, Address: 0x354b0c, Func Offset: 0xdc
	// Line 1212, Address: 0x354b14, Func Offset: 0xe4
	// Line 1218, Address: 0x354b2c, Func Offset: 0xfc
	// Line 1219, Address: 0x354b48, Func Offset: 0x118
	// Line 1221, Address: 0x354b58, Func Offset: 0x128
	// Line 1225, Address: 0x354bd4, Func Offset: 0x1a4
	// Line 1279, Address: 0x354c00, Func Offset: 0x1d0
	// Line 1281, Address: 0x354c0c, Func Offset: 0x1dc
	// Line 1282, Address: 0x354c1c, Func Offset: 0x1ec
	// Line 1285, Address: 0x354c2c, Func Offset: 0x1fc
	// Line 1288, Address: 0x354c38, Func Offset: 0x208
	// Line 1289, Address: 0x354c4c, Func Offset: 0x21c
	// Line 1291, Address: 0x354c5c, Func Offset: 0x22c
	// Line 1293, Address: 0x354c64, Func Offset: 0x234
	// Line 1294, Address: 0x354d08, Func Offset: 0x2d8
	// Line 1302, Address: 0x354d60, Func Offset: 0x330
	// Line 1303, Address: 0x354d74, Func Offset: 0x344
	// Line 1309, Address: 0x354da0, Func Offset: 0x370
	// Line 1311, Address: 0x354dc0, Func Offset: 0x390
	// Line 1312, Address: 0x354dc8, Func Offset: 0x398
	// Line 1315, Address: 0x354de4, Func Offset: 0x3b4
	// Line 1316, Address: 0x354e38, Func Offset: 0x408
	// Line 1318, Address: 0x354eb0, Func Offset: 0x480
	// Line 1319, Address: 0x354edc, Func Offset: 0x4ac
	// Line 1320, Address: 0x354efc, Func Offset: 0x4cc
	// Line 1323, Address: 0x354f1c, Func Offset: 0x4ec
	// Line 1356, Address: 0x354f2c, Func Offset: 0x4fc
	// Line 1362, Address: 0x354f34, Func Offset: 0x504
	// Line 1365, Address: 0x354f3c, Func Offset: 0x50c
	// Line 1366, Address: 0x354f5c, Func Offset: 0x52c
	// Line 1367, Address: 0x354f68, Func Offset: 0x538
	// Line 1366, Address: 0x354f6c, Func Offset: 0x53c
	// Line 1367, Address: 0x354f80, Func Offset: 0x550
	// Line 1368, Address: 0x354f8c, Func Offset: 0x55c
	// Line 1369, Address: 0x355004, Func Offset: 0x5d4
	// Line 1373, Address: 0x35505c, Func Offset: 0x62c
	// Line 1393, Address: 0x35506c, Func Offset: 0x63c
	// Func End, Address: 0x35507c, Func Offset: 0x64c
}

// zEntPickup_DoPickup__FP10zEntPickupb
// Start address: 0x355080
void zEntPickup_DoPickup(zEntPickup* ent, uint8 instant)
{
	// Line 1130, Address: 0x355080, Func Offset: 0
	// Line 1131, Address: 0x35509c, Func Offset: 0x1c
	// Line 1134, Address: 0x3550b8, Func Offset: 0x38
	// Line 1136, Address: 0x3550bc, Func Offset: 0x3c
	// Line 1134, Address: 0x3550c0, Func Offset: 0x40
	// Line 1135, Address: 0x3550dc, Func Offset: 0x5c
	// Line 1136, Address: 0x3550e8, Func Offset: 0x68
	// Line 1137, Address: 0x3551fc, Func Offset: 0x17c
	// Line 1139, Address: 0x35520c, Func Offset: 0x18c
	// Line 1141, Address: 0x355218, Func Offset: 0x198
	// Line 1142, Address: 0x355248, Func Offset: 0x1c8
	// Line 1143, Address: 0x35524c, Func Offset: 0x1cc
	// Line 1142, Address: 0x355250, Func Offset: 0x1d0
	// Line 1144, Address: 0x355254, Func Offset: 0x1d4
	// Line 1145, Address: 0x35525c, Func Offset: 0x1dc
	// Line 1146, Address: 0x355278, Func Offset: 0x1f8
	// Line 1147, Address: 0x355318, Func Offset: 0x298
	// Line 1166, Address: 0x355320, Func Offset: 0x2a0
	// Line 1167, Address: 0x355438, Func Offset: 0x3b8
	// Line 1136, Address: 0x355444, Func Offset: 0x3c4
	// Line 1167, Address: 0x355448, Func Offset: 0x3c8
	// Line 1136, Address: 0x355450, Func Offset: 0x3d0
	// Line 1167, Address: 0x355464, Func Offset: 0x3e4
	// Line 1145, Address: 0x355468, Func Offset: 0x3e8
	// Line 1167, Address: 0x355470, Func Offset: 0x3f0
	// Line 1146, Address: 0x355498, Func Offset: 0x418
	// Line 1167, Address: 0x35549c, Func Offset: 0x41c
	// Line 1146, Address: 0x3554a0, Func Offset: 0x420
	// Line 1167, Address: 0x3554ac, Func Offset: 0x42c
	// Line 1156, Address: 0x3554b8, Func Offset: 0x438
	// Line 1167, Address: 0x3554d8, Func Offset: 0x458
	// Line 1155, Address: 0x3554f8, Func Offset: 0x478
	// Line 1167, Address: 0x3554fc, Func Offset: 0x47c
	// Line 1157, Address: 0x355504, Func Offset: 0x484
	// Line 1167, Address: 0x35550c, Func Offset: 0x48c
	// Line 1163, Address: 0x355510, Func Offset: 0x490
	// Line 1167, Address: 0x355514, Func Offset: 0x494
	// Line 1166, Address: 0x355568, Func Offset: 0x4e8
	// Line 1167, Address: 0x35556c, Func Offset: 0x4ec
	// Line 1166, Address: 0x355574, Func Offset: 0x4f4
	// Line 1167, Address: 0x355588, Func Offset: 0x508
	// Func End, Address: 0x3555a4, Func Offset: 0x524
}

// CheckPickupAgainstPlayer__FP4xEntPv
// Start address: 0x3555b0
int32 CheckPickupAgainstPlayer(xEnt* cbent, void* cbdata)
{
	zEntPickup* ent;
	float32 dt;
	zEnt* plent;
	float32 distsqr;
	float32 dx__;
	float32 dy__;
	float32 dz__;
	float32 distance;
	float32 chkdist;
	float32 dist2_1;
	float32 dist2_2;
	float32 dx__;
	float32 dy__;
	float32 dz__;
	float32 dx__;
	float32 dy__;
	float32 dz__;
	int32 i;
	// Line 947, Address: 0x3555b0, Func Offset: 0
	// Line 948, Address: 0x3555b4, Func Offset: 0x4
	// Line 947, Address: 0x3555b8, Func Offset: 0x8
	// Line 948, Address: 0x3555d8, Func Offset: 0x28
	// Line 954, Address: 0x3555e4, Func Offset: 0x34
	// Line 957, Address: 0x3555ec, Func Offset: 0x3c
	// Line 962, Address: 0x355638, Func Offset: 0x88
	// Line 972, Address: 0x355650, Func Offset: 0xa0
	// Line 978, Address: 0x355654, Func Offset: 0xa4
	// Line 972, Address: 0x355658, Func Offset: 0xa8
	// Line 978, Address: 0x35565c, Func Offset: 0xac
	// Line 972, Address: 0x355664, Func Offset: 0xb4
	// Line 974, Address: 0x35566c, Func Offset: 0xbc
	// Line 978, Address: 0x3556a0, Func Offset: 0xf0
	// Line 980, Address: 0x3556d4, Func Offset: 0x124
	// Line 981, Address: 0x3556d8, Func Offset: 0x128
	// Line 982, Address: 0x3556ec, Func Offset: 0x13c
	// Line 984, Address: 0x3556fc, Func Offset: 0x14c
	// Line 988, Address: 0x355724, Func Offset: 0x174
	// Line 1106, Address: 0x35572c, Func Offset: 0x17c
	// Line 1108, Address: 0x355734, Func Offset: 0x184
	// Line 1115, Address: 0x355770, Func Offset: 0x1c0
	// Line 1125, Address: 0x35577c, Func Offset: 0x1cc
	// Line 949, Address: 0x355788, Func Offset: 0x1d8
	// Line 964, Address: 0x355790, Func Offset: 0x1e0
	// Line 965, Address: 0x355794, Func Offset: 0x1e4
	// Line 1125, Address: 0x355798, Func Offset: 0x1e8
	// Line 968, Address: 0x3557a0, Func Offset: 0x1f0
	// Line 1125, Address: 0x3557a8, Func Offset: 0x1f8
	// Line 990, Address: 0x3557ac, Func Offset: 0x1fc
	// Line 1125, Address: 0x3557b0, Func Offset: 0x200
	// Line 990, Address: 0x3557c8, Func Offset: 0x218
	// Line 1125, Address: 0x3557cc, Func Offset: 0x21c
	// Line 990, Address: 0x3557d4, Func Offset: 0x224
	// Line 1125, Address: 0x3557dc, Func Offset: 0x22c
	// Line 998, Address: 0x3557fc, Func Offset: 0x24c
	// Line 1125, Address: 0x355804, Func Offset: 0x254
	// Line 1004, Address: 0x355818, Func Offset: 0x268
	// Line 1033, Address: 0x35581c, Func Offset: 0x26c
	// Line 1125, Address: 0x355824, Func Offset: 0x274
	// Line 1037, Address: 0x355830, Func Offset: 0x280
	// Line 1125, Address: 0x355834, Func Offset: 0x284
	// Line 1036, Address: 0x355854, Func Offset: 0x2a4
	// Line 1125, Address: 0x355858, Func Offset: 0x2a8
	// Line 1037, Address: 0x355860, Func Offset: 0x2b0
	// Line 1125, Address: 0x355868, Func Offset: 0x2b8
	// Line 1037, Address: 0x355870, Func Offset: 0x2c0
	// Line 1125, Address: 0x355874, Func Offset: 0x2c4
	// Line 1037, Address: 0x3558b0, Func Offset: 0x300
	// Line 1125, Address: 0x3558b4, Func Offset: 0x304
	// Line 1037, Address: 0x3558d8, Func Offset: 0x328
	// Line 1125, Address: 0x3558dc, Func Offset: 0x32c
	// Line 1037, Address: 0x35590c, Func Offset: 0x35c
	// Line 1125, Address: 0x355914, Func Offset: 0x364
	// Line 1038, Address: 0x35596c, Func Offset: 0x3bc
	// Line 1125, Address: 0x355970, Func Offset: 0x3c0
	// Line 1040, Address: 0x355984, Func Offset: 0x3d4
	// Line 1125, Address: 0x355988, Func Offset: 0x3d8
	// Line 1044, Address: 0x3559f4, Func Offset: 0x444
	// Line 1125, Address: 0x3559f8, Func Offset: 0x448
	// Line 1044, Address: 0x3559fc, Func Offset: 0x44c
	// Line 1125, Address: 0x355a00, Func Offset: 0x450
	// Line 1044, Address: 0x355a20, Func Offset: 0x470
	// Line 1125, Address: 0x355a34, Func Offset: 0x484
	// Line 1044, Address: 0x355a40, Func Offset: 0x490
	// Line 1125, Address: 0x355a44, Func Offset: 0x494
	// Line 1044, Address: 0x355a48, Func Offset: 0x498
	// Line 1125, Address: 0x355a4c, Func Offset: 0x49c
	// Line 1047, Address: 0x355a64, Func Offset: 0x4b4
	// Line 1049, Address: 0x355a68, Func Offset: 0x4b8
	// Line 1125, Address: 0x355a70, Func Offset: 0x4c0
	// Line 1054, Address: 0x355a74, Func Offset: 0x4c4
	// Line 1125, Address: 0x355a78, Func Offset: 0x4c8
	// Line 1056, Address: 0x355a84, Func Offset: 0x4d4
	// Line 1057, Address: 0x355a8c, Func Offset: 0x4dc
	// Line 1125, Address: 0x355a90, Func Offset: 0x4e0
	// Line 1058, Address: 0x355aa0, Func Offset: 0x4f0
	// Line 1125, Address: 0x355ab0, Func Offset: 0x500
	// Line 1061, Address: 0x355ac0, Func Offset: 0x510
	// Line 1125, Address: 0x355ac4, Func Offset: 0x514
	// Line 1067, Address: 0x355ad4, Func Offset: 0x524
	// Line 1125, Address: 0x355adc, Func Offset: 0x52c
	// Line 1093, Address: 0x355aec, Func Offset: 0x53c
	// Line 1125, Address: 0x355af4, Func Offset: 0x544
	// Line 1093, Address: 0x355afc, Func Offset: 0x54c
	// Line 1125, Address: 0x355b3c, Func Offset: 0x58c
	// Line 1093, Address: 0x355b44, Func Offset: 0x594
	// Line 1125, Address: 0x355b6c, Func Offset: 0x5bc
	// Line 1093, Address: 0x355b70, Func Offset: 0x5c0
	// Line 1125, Address: 0x355b84, Func Offset: 0x5d4
	// Line 1093, Address: 0x355b88, Func Offset: 0x5d8
	// Line 1125, Address: 0x355b98, Func Offset: 0x5e8
	// Line 1098, Address: 0x355bb8, Func Offset: 0x608
	// Line 1125, Address: 0x355bc0, Func Offset: 0x610
	// Line 1010, Address: 0x355bdc, Func Offset: 0x62c
	// Line 1125, Address: 0x355be0, Func Offset: 0x630
	// Line 1017, Address: 0x355bf4, Func Offset: 0x644
	// Line 1019, Address: 0x355bf8, Func Offset: 0x648
	// Line 1018, Address: 0x355c00, Func Offset: 0x650
	// Line 1019, Address: 0x355c04, Func Offset: 0x654
	// Line 1020, Address: 0x355c10, Func Offset: 0x660
	// Line 1019, Address: 0x355c14, Func Offset: 0x664
	// Line 1020, Address: 0x355c18, Func Offset: 0x668
	// Line 1028, Address: 0x355c24, Func Offset: 0x674
	// Line 1125, Address: 0x355c28, Func Offset: 0x678
	// Line 1028, Address: 0x355c30, Func Offset: 0x680
	// Line 1125, Address: 0x355c44, Func Offset: 0x694
	// Line 1037, Address: 0x355c48, Func Offset: 0x698
	// Line 1125, Address: 0x355c4c, Func Offset: 0x69c
	// Line 1037, Address: 0x355c54, Func Offset: 0x6a4
	// Line 1125, Address: 0x355c64, Func Offset: 0x6b4
	// Line 1040, Address: 0x355c68, Func Offset: 0x6b8
	// Line 1125, Address: 0x355c6c, Func Offset: 0x6bc
	// Line 1043, Address: 0x355c80, Func Offset: 0x6d0
	// Line 1125, Address: 0x355c88, Func Offset: 0x6d8
	// Line 1044, Address: 0x355cb0, Func Offset: 0x700
	// Line 1125, Address: 0x355cb4, Func Offset: 0x704
	// Line 1044, Address: 0x355cb8, Func Offset: 0x708
	// Line 1126, Address: 0x355cc4, Func Offset: 0x714
	// Func End, Address: 0x355cec, Func Offset: 0x73c
}

// zEntPickupEventCB__FP5xBaseP5xBaseUiPCfP5xBaseUi
// Start address: 0x355cf0
void zEntPickupEventCB(xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget)
{
	zEntPickup* p;
	xEntFrame frame;
	// Line 788, Address: 0x355cf0, Func Offset: 0
	// Line 797, Address: 0x355cf4, Func Offset: 0x4
	// Line 788, Address: 0x355cf8, Func Offset: 0x8
	// Line 797, Address: 0x355d00, Func Offset: 0x10
	// Line 802, Address: 0x355d94, Func Offset: 0xa4
	// Line 803, Address: 0x355da4, Func Offset: 0xb4
	// Line 804, Address: 0x355dc4, Func Offset: 0xd4
	// Line 808, Address: 0x355dcc, Func Offset: 0xdc
	// Line 809, Address: 0x355dec, Func Offset: 0xfc
	// Line 812, Address: 0x355df4, Func Offset: 0x104
	// Line 814, Address: 0x355e04, Func Offset: 0x114
	// Line 815, Address: 0x355e10, Func Offset: 0x120
	// Line 817, Address: 0x355e30, Func Offset: 0x140
	// Line 820, Address: 0x355e38, Func Offset: 0x148
	// Line 821, Address: 0x355e44, Func Offset: 0x154
	// Line 822, Address: 0x355e64, Func Offset: 0x174
	// Line 825, Address: 0x355e6c, Func Offset: 0x17c
	// Line 826, Address: 0x355fa0, Func Offset: 0x2b0
	// Line 831, Address: 0x355fa8, Func Offset: 0x2b8
	// Line 833, Address: 0x355fb0, Func Offset: 0x2c0
	// Line 836, Address: 0x355fc0, Func Offset: 0x2d0
	// Line 841, Address: 0x355fe4, Func Offset: 0x2f4
	// Line 843, Address: 0x355fec, Func Offset: 0x2fc
	// Line 844, Address: 0x355ffc, Func Offset: 0x30c
	// Line 845, Address: 0x356004, Func Offset: 0x314
	// Line 849, Address: 0x35600c, Func Offset: 0x31c
	// Line 848, Address: 0x356010, Func Offset: 0x320
	// Line 850, Address: 0x356014, Func Offset: 0x324
	// Line 851, Address: 0x356018, Func Offset: 0x328
	// Line 849, Address: 0x35601c, Func Offset: 0x32c
	// Line 850, Address: 0x356020, Func Offset: 0x330
	// Line 852, Address: 0x356024, Func Offset: 0x334
	// Line 856, Address: 0x35602c, Func Offset: 0x33c
	// Line 858, Address: 0x356030, Func Offset: 0x340
	// Line 856, Address: 0x356038, Func Offset: 0x348
	// Line 858, Address: 0x35603c, Func Offset: 0x34c
	// Line 856, Address: 0x35604c, Func Offset: 0x35c
	// Line 858, Address: 0x3560d0, Func Offset: 0x3e0
	// Line 860, Address: 0x3560d8, Func Offset: 0x3e8
	// Line 864, Address: 0x3560e0, Func Offset: 0x3f0
	// Line 866, Address: 0x3560e4, Func Offset: 0x3f4
	// Line 864, Address: 0x3560ec, Func Offset: 0x3fc
	// Line 866, Address: 0x3560f0, Func Offset: 0x400
	// Line 864, Address: 0x3560f8, Func Offset: 0x408
	// Line 866, Address: 0x35617c, Func Offset: 0x48c
	// Line 867, Address: 0x356184, Func Offset: 0x494
	// Line 872, Address: 0x35618c, Func Offset: 0x49c
	// Line 874, Address: 0x35628c, Func Offset: 0x59c
	// Line 872, Address: 0x356298, Func Offset: 0x5a8
	// Line 874, Address: 0x35629c, Func Offset: 0x5ac
	// Line 872, Address: 0x3562a4, Func Offset: 0x5b4
	// Line 875, Address: 0x3562b8, Func Offset: 0x5c8
	// Func End, Address: 0x3562c8, Func Offset: 0x5d8
}

// zEntPickup_Setup__Fv
// Start address: 0x3562d0
void zEntPickup_Setup()
{
	zScene* zsc;
	int32 i;
	xBase* base;
	uint32 j;
	zEntPickup* p;
	xVec3* srcPos;
	// Line 719, Address: 0x3562d0, Func Offset: 0
	// Line 734, Address: 0x3562d4, Func Offset: 0x4
	// Line 719, Address: 0x3562d8, Func Offset: 0x8
	// Line 734, Address: 0x3562fc, Func Offset: 0x2c
	// Line 736, Address: 0x356300, Func Offset: 0x30
	// Line 738, Address: 0x356320, Func Offset: 0x50
	// Line 741, Address: 0x356328, Func Offset: 0x58
	// Line 744, Address: 0x356344, Func Offset: 0x74
	// Line 746, Address: 0x35635c, Func Offset: 0x8c
	// Line 747, Address: 0x356368, Func Offset: 0x98
	// Line 749, Address: 0x356390, Func Offset: 0xc0
	// Line 753, Address: 0x356394, Func Offset: 0xc4
	// Line 755, Address: 0x3563e0, Func Offset: 0x110
	// Line 756, Address: 0x3563ec, Func Offset: 0x11c
	// Line 757, Address: 0x3563f8, Func Offset: 0x128
	// Line 762, Address: 0x3563fc, Func Offset: 0x12c
	// Line 763, Address: 0x356400, Func Offset: 0x130
	// Line 767, Address: 0x356408, Func Offset: 0x138
	// Line 770, Address: 0x35657c, Func Offset: 0x2ac
	// Line 772, Address: 0x356594, Func Offset: 0x2c4
	// Line 773, Address: 0x3565b0, Func Offset: 0x2e0
	// Line 767, Address: 0x3565bc, Func Offset: 0x2ec
	// Line 773, Address: 0x3565c0, Func Offset: 0x2f0
	// Line 767, Address: 0x3565c8, Func Offset: 0x2f8
	// Line 773, Address: 0x3565d8, Func Offset: 0x308
	// Func End, Address: 0x356604, Func Offset: 0x334
}

// zEntPickup_Setup__FP10zEntPickup
// Start address: 0x356610
void zEntPickup_Setup(zEntPickup* p)
{
	// Line 712, Address: 0x356610, Func Offset: 0
	// Line 713, Address: 0x356620, Func Offset: 0x10
	// Line 715, Address: 0x35663c, Func Offset: 0x2c
	// Line 716, Address: 0x356650, Func Offset: 0x40
	// Line 713, Address: 0x356658, Func Offset: 0x48
	// Line 716, Address: 0x356664, Func Offset: 0x54
	// Line 713, Address: 0x35666c, Func Offset: 0x5c
	// Line 716, Address: 0x356680, Func Offset: 0x70
	// Line 713, Address: 0x3566b8, Func Offset: 0xa8
	// Line 716, Address: 0x3566bc, Func Offset: 0xac
	// Line 713, Address: 0x3566c4, Func Offset: 0xb4
	// Line 716, Address: 0x3566c8, Func Offset: 0xb8
	// Line 713, Address: 0x3566d0, Func Offset: 0xc0
	// Line 716, Address: 0x3566d4, Func Offset: 0xc4
	// Line 713, Address: 0x3566dc, Func Offset: 0xcc
	// Line 716, Address: 0x3566e0, Func Offset: 0xd0
	// Line 713, Address: 0x3566e8, Func Offset: 0xd8
	// Line 716, Address: 0x3566ec, Func Offset: 0xdc
	// Line 713, Address: 0x356704, Func Offset: 0xf4
	// Line 716, Address: 0x356708, Func Offset: 0xf8
	// Line 713, Address: 0x356710, Func Offset: 0x100
	// Line 716, Address: 0x356714, Func Offset: 0x104
	// Line 713, Address: 0x356720, Func Offset: 0x110
	// Line 716, Address: 0x35672c, Func Offset: 0x11c
	// Func End, Address: 0x356740, Func Offset: 0x130
}

// zEntPickupInit__FP10zEntPickupP9xEntAsset
// Start address: 0x356740
void zEntPickupInit(zEntPickup* ent, xEntAsset* asset)
{
	xEntPickupAsset* pickupAsset;
	uint32 i;
	uint32 tmpsize;
	zAssetPickup* ptbl;
	RpAtomic* modelData;
	void* animData;
	// Line 551, Address: 0x356740, Func Offset: 0
	// Line 553, Address: 0x356744, Func Offset: 0x4
	// Line 551, Address: 0x356748, Func Offset: 0x8
	// Line 553, Address: 0x35674c, Func Offset: 0xc
	// Line 551, Address: 0x356750, Func Offset: 0x10
	// Line 553, Address: 0x356774, Func Offset: 0x34
	// Line 555, Address: 0x35677c, Func Offset: 0x3c
	// Line 556, Address: 0x356788, Func Offset: 0x48
	// Line 558, Address: 0x356798, Func Offset: 0x58
	// Line 584, Address: 0x35679c, Func Offset: 0x5c
	// Line 587, Address: 0x3567a0, Func Offset: 0x60
	// Line 585, Address: 0x3567a4, Func Offset: 0x64
	// Line 590, Address: 0x3567a8, Func Offset: 0x68
	// Line 587, Address: 0x3567ac, Func Offset: 0x6c
	// Line 586, Address: 0x3567b0, Func Offset: 0x70
	// Line 587, Address: 0x3567b4, Func Offset: 0x74
	// Line 590, Address: 0x3567b8, Func Offset: 0x78
	// Line 589, Address: 0x3567bc, Func Offset: 0x7c
	// Line 595, Address: 0x3567c0, Func Offset: 0x80
	// Line 590, Address: 0x3567c4, Func Offset: 0x84
	// Line 561, Address: 0x3567c8, Func Offset: 0x88
	// Line 591, Address: 0x3567cc, Func Offset: 0x8c
	// Line 603, Address: 0x3567d0, Func Offset: 0x90
	// Line 592, Address: 0x3567d4, Func Offset: 0x94
	// Line 593, Address: 0x3567d8, Func Offset: 0x98
	// Line 594, Address: 0x3567dc, Func Offset: 0x9c
	// Line 595, Address: 0x3567e0, Func Offset: 0xa0
	// Line 603, Address: 0x3567e8, Func Offset: 0xa8
	// Line 604, Address: 0x356804, Func Offset: 0xc4
	// Line 605, Address: 0x356810, Func Offset: 0xd0
	// Line 606, Address: 0x35681c, Func Offset: 0xdc
	// Line 607, Address: 0x356824, Func Offset: 0xe4
	// Line 624, Address: 0x356838, Func Offset: 0xf8
	// Line 626, Address: 0x356848, Func Offset: 0x108
	// Line 635, Address: 0x356854, Func Offset: 0x114
	// Line 637, Address: 0x35685c, Func Offset: 0x11c
	// Line 642, Address: 0x356868, Func Offset: 0x128
	// Line 650, Address: 0x356884, Func Offset: 0x144
	// Line 662, Address: 0x356888, Func Offset: 0x148
	// Line 668, Address: 0x35688c, Func Offset: 0x14c
	// Line 669, Address: 0x356890, Func Offset: 0x150
	// Line 662, Address: 0x356894, Func Offset: 0x154
	// Line 665, Address: 0x3568a0, Func Offset: 0x160
	// Line 668, Address: 0x3568ac, Func Offset: 0x16c
	// Line 669, Address: 0x3568b0, Func Offset: 0x170
	// Line 672, Address: 0x3568bc, Func Offset: 0x17c
	// Line 673, Address: 0x3568c4, Func Offset: 0x184
	// Line 676, Address: 0x3568c8, Func Offset: 0x188
	// Line 677, Address: 0x3568cc, Func Offset: 0x18c
	// Line 679, Address: 0x3568dc, Func Offset: 0x19c
	// Line 683, Address: 0x3568ec, Func Offset: 0x1ac
	// Line 686, Address: 0x3568f0, Func Offset: 0x1b0
	// Line 684, Address: 0x3568f4, Func Offset: 0x1b4
	// Line 685, Address: 0x3568f8, Func Offset: 0x1b8
	// Line 686, Address: 0x3568fc, Func Offset: 0x1bc
	// Line 691, Address: 0x35694c, Func Offset: 0x20c
	// Line 687, Address: 0x356950, Func Offset: 0x210
	// Line 691, Address: 0x356954, Func Offset: 0x214
	// Line 692, Address: 0x35695c, Func Offset: 0x21c
	// Line 693, Address: 0x356960, Func Offset: 0x220
	// Line 692, Address: 0x356964, Func Offset: 0x224
	// Line 698, Address: 0x356968, Func Offset: 0x228
	// Line 693, Address: 0x35696c, Func Offset: 0x22c
	// Line 698, Address: 0x356970, Func Offset: 0x230
	// Line 693, Address: 0x356974, Func Offset: 0x234
	// Line 694, Address: 0x356978, Func Offset: 0x238
	// Line 698, Address: 0x3569ac, Func Offset: 0x26c
	// Line 701, Address: 0x3569b4, Func Offset: 0x274
	// Line 709, Address: 0x356a58, Func Offset: 0x318
	// Line 654, Address: 0x356a88, Func Offset: 0x348
	// Line 709, Address: 0x356a8c, Func Offset: 0x34c
	// Line 654, Address: 0x356aa0, Func Offset: 0x360
	// Line 709, Address: 0x356aa4, Func Offset: 0x364
	// Line 654, Address: 0x356ab0, Func Offset: 0x370
	// Line 709, Address: 0x356ab4, Func Offset: 0x374
	// Line 654, Address: 0x356ac0, Func Offset: 0x380
	// Line 709, Address: 0x356ac4, Func Offset: 0x384
	// Line 654, Address: 0x356ad4, Func Offset: 0x394
	// Line 709, Address: 0x356ad8, Func Offset: 0x398
	// Line 654, Address: 0x356ae0, Func Offset: 0x3a0
	// Line 709, Address: 0x356ae8, Func Offset: 0x3a8
	// Line 654, Address: 0x356af8, Func Offset: 0x3b8
	// Line 709, Address: 0x356b0c, Func Offset: 0x3cc
	// Line 656, Address: 0x356b18, Func Offset: 0x3d8
	// Line 654, Address: 0x356b20, Func Offset: 0x3e0
	// Line 709, Address: 0x356b34, Func Offset: 0x3f4
	// Line 654, Address: 0x356b3c, Func Offset: 0x3fc
	// Line 660, Address: 0x356b44, Func Offset: 0x404
	// Line 709, Address: 0x356b58, Func Offset: 0x418
	// Line 678, Address: 0x356b6c, Func Offset: 0x42c
	// Line 709, Address: 0x356b78, Func Offset: 0x438
	// Line 680, Address: 0x356b7c, Func Offset: 0x43c
	// Line 709, Address: 0x356b88, Func Offset: 0x448
	// Func End, Address: 0x356bb4, Func Offset: 0x474
}

// zEntPickupInit__FPvPv
// Start address: 0x356bc0
void zEntPickupInit(void* ent, void* asset)
{
	// Line 547, Address: 0x356bc0, Func Offset: 0
	// Func End, Address: 0x356bc8, Func Offset: 0x8
}

// PickupFallPhysics__FP10zEntPickupP6xScenef
// Start address: 0x356bd0
void PickupFallPhysics(zEntPickup* ent, xScene* sc, float32 dt)
{
	// Line 502, Address: 0x356bd0, Func Offset: 0
	// Line 504, Address: 0x356bd4, Func Offset: 0x4
	// Line 502, Address: 0x356bd8, Func Offset: 0x8
	// Line 504, Address: 0x356bdc, Func Offset: 0xc
	// Line 502, Address: 0x356be0, Func Offset: 0x10
	// Line 504, Address: 0x356be4, Func Offset: 0x14
	// Line 502, Address: 0x356be8, Func Offset: 0x18
	// Line 504, Address: 0x356bec, Func Offset: 0x1c
	// Line 502, Address: 0x356bf0, Func Offset: 0x20
	// Line 504, Address: 0x356bf4, Func Offset: 0x24
	// Line 502, Address: 0x356bf8, Func Offset: 0x28
	// Line 504, Address: 0x356bfc, Func Offset: 0x2c
	// Line 502, Address: 0x356c00, Func Offset: 0x30
	// Line 504, Address: 0x356c04, Func Offset: 0x34
	// Line 502, Address: 0x356c08, Func Offset: 0x38
	// Line 504, Address: 0x356c0c, Func Offset: 0x3c
	// Line 502, Address: 0x356c10, Func Offset: 0x40
	// Line 504, Address: 0x356c14, Func Offset: 0x44
	// Line 502, Address: 0x356c18, Func Offset: 0x48
	// Line 504, Address: 0x356c1c, Func Offset: 0x4c
	// Line 502, Address: 0x356c20, Func Offset: 0x50
	// Line 504, Address: 0x356c24, Func Offset: 0x54
	// Line 506, Address: 0x356c3c, Func Offset: 0x6c
	// Line 512, Address: 0x356c48, Func Offset: 0x78
	// Line 504, Address: 0x356c50, Func Offset: 0x80
	// Line 505, Address: 0x356c68, Func Offset: 0x98
	// Line 504, Address: 0x356c84, Func Offset: 0xb4
	// Line 506, Address: 0x356c88, Func Offset: 0xb8
	// Line 504, Address: 0x356c8c, Func Offset: 0xbc
	// Line 506, Address: 0x356c90, Func Offset: 0xc0
	// Line 504, Address: 0x356c94, Func Offset: 0xc4
	// Line 506, Address: 0x356c98, Func Offset: 0xc8
	// Line 504, Address: 0x356c9c, Func Offset: 0xcc
	// Line 508, Address: 0x356ca0, Func Offset: 0xd0
	// Line 509, Address: 0x356ca8, Func Offset: 0xd8
	// Line 512, Address: 0x356cb0, Func Offset: 0xe0
	// Line 504, Address: 0x356cb8, Func Offset: 0xe8
	// Line 513, Address: 0x356cc0, Func Offset: 0xf0
	// Line 504, Address: 0x356cc4, Func Offset: 0xf4
	// Line 513, Address: 0x356ccc, Func Offset: 0xfc
	// Line 504, Address: 0x356cd0, Func Offset: 0x100
	// Line 505, Address: 0x356d18, Func Offset: 0x148
	// Line 504, Address: 0x356d1c, Func Offset: 0x14c
	// Line 506, Address: 0x356d20, Func Offset: 0x150
	// Line 504, Address: 0x356d24, Func Offset: 0x154
	// Line 506, Address: 0x356d28, Func Offset: 0x158
	// Line 505, Address: 0x356d2c, Func Offset: 0x15c
	// Line 504, Address: 0x356d30, Func Offset: 0x160
	// Line 506, Address: 0x356d34, Func Offset: 0x164
	// Line 508, Address: 0x356d38, Func Offset: 0x168
	// Line 505, Address: 0x356d3c, Func Offset: 0x16c
	// Line 504, Address: 0x356d40, Func Offset: 0x170
	// Line 508, Address: 0x356d44, Func Offset: 0x174
	// Line 506, Address: 0x356d48, Func Offset: 0x178
	// Line 508, Address: 0x356d4c, Func Offset: 0x17c
	// Line 509, Address: 0x356d50, Func Offset: 0x180
	// Line 506, Address: 0x356d58, Func Offset: 0x188
	// Line 505, Address: 0x356d60, Func Offset: 0x190
	// Line 512, Address: 0x356d68, Func Offset: 0x198
	// Line 513, Address: 0x356d74, Func Offset: 0x1a4
	// Line 516, Address: 0x356d80, Func Offset: 0x1b0
	// Line 518, Address: 0x356d84, Func Offset: 0x1b4
	// Line 516, Address: 0x356d88, Func Offset: 0x1b8
	// Line 517, Address: 0x356d94, Func Offset: 0x1c4
	// Line 516, Address: 0x356d98, Func Offset: 0x1c8
	// Line 518, Address: 0x356d9c, Func Offset: 0x1cc
	// Line 517, Address: 0x356da0, Func Offset: 0x1d0
	// Line 516, Address: 0x356da8, Func Offset: 0x1d8
	// Line 517, Address: 0x356db4, Func Offset: 0x1e4
	// Line 518, Address: 0x356db8, Func Offset: 0x1e8
	// Line 517, Address: 0x356dbc, Func Offset: 0x1ec
	// Line 518, Address: 0x356dc8, Func Offset: 0x1f8
	// Line 521, Address: 0x356dd8, Func Offset: 0x208
	// Line 532, Address: 0x356df8, Func Offset: 0x228
	// Line 533, Address: 0x356e08, Func Offset: 0x238
	// Line 532, Address: 0x356e30, Func Offset: 0x260
	// Line 533, Address: 0x356e34, Func Offset: 0x264
	// Line 532, Address: 0x356e38, Func Offset: 0x268
	// Line 533, Address: 0x356e3c, Func Offset: 0x26c
	// Line 532, Address: 0x356e44, Func Offset: 0x274
	// Line 533, Address: 0x356e48, Func Offset: 0x278
	// Line 532, Address: 0x356e4c, Func Offset: 0x27c
	// Line 533, Address: 0x356e50, Func Offset: 0x280
	// Line 536, Address: 0x356e70, Func Offset: 0x2a0
	// Line 533, Address: 0x356e74, Func Offset: 0x2a4
	// Line 536, Address: 0x356ee4, Func Offset: 0x314
	// Line 538, Address: 0x356f0c, Func Offset: 0x33c
	// Line 541, Address: 0x356f10, Func Offset: 0x340
	// Line 539, Address: 0x356f14, Func Offset: 0x344
	// Line 540, Address: 0x356f18, Func Offset: 0x348
	// Line 541, Address: 0x356f1c, Func Offset: 0x34c
	// Line 543, Address: 0x357030, Func Offset: 0x460
	// Line 526, Address: 0x357054, Func Offset: 0x484
	// Line 543, Address: 0x357058, Func Offset: 0x488
	// Line 541, Address: 0x357070, Func Offset: 0x4a0
	// Line 543, Address: 0x357074, Func Offset: 0x4a4
	// Line 541, Address: 0x35707c, Func Offset: 0x4ac
	// Line 543, Address: 0x357090, Func Offset: 0x4c0
	// Func End, Address: 0x3570c0, Func Offset: 0x4f0
}

// zEntPickupSceneInit__FUi
// Start address: 0x3570c0
void zEntPickupSceneInit(uint32 sceneID)
{
	uint32 hudLightKitID;
	int32 i;
	// Line 436, Address: 0x3570c0, Func Offset: 0
	// Line 437, Address: 0x3570d0, Func Offset: 0x10
	// Line 438, Address: 0x3570dc, Func Offset: 0x1c
	// Line 445, Address: 0x3570e8, Func Offset: 0x28
	// Line 438, Address: 0x3570ec, Func Offset: 0x2c
	// Line 445, Address: 0x3570f0, Func Offset: 0x30
	// Line 446, Address: 0x3570f8, Func Offset: 0x38
	// Line 449, Address: 0x357104, Func Offset: 0x44
	// Line 451, Address: 0x35711c, Func Offset: 0x5c
	// Line 453, Address: 0x357128, Func Offset: 0x68
	// Line 454, Address: 0x357138, Func Offset: 0x78
	// Line 455, Address: 0x357144, Func Offset: 0x84
	// Line 457, Address: 0x357150, Func Offset: 0x90
	// Line 461, Address: 0x357160, Func Offset: 0xa0
	// Func End, Address: 0x357170, Func Offset: 0xb0
}

