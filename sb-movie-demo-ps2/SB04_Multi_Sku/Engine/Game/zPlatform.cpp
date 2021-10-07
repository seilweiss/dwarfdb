



void zPlatform_GoofyRender(xEnt* ent);
uint8 zPlatform_UsePartialCameraCollision(zPlatform* ent);
void zPlatformEventCB(xBase* from, xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget, uint32 toParamWidgetID);
void zPlatFM_EventSetup(zPlatform* plat, float32* toParam, int32 idx, uint32 mask);
void zPlatformTranslate(xEnt* xent, xVec3* dpos, xMat4x3* dmat);
void zPlatform_Dismount(zPlatform* plat);
void zPlatform_Mount(zPlatform* plat);
void zPlatform_Shake(zPlatform* plat, float32 ampl, float32 freq);
void zPlatform_Move(xEnt* entplat, xScene* s, float32 dt, xEntFrame* frame);
void zPlatform_Update(xEnt* entplat, xScene* sc, float32 dt);
void zPlatformBreakaway_Update(zPlatform* plat, xScene* sc, float32 dt);
void zPlatFM_Update(zPlatform* plat, float32 dt);
uint32 zPlatform_PaddleCollide(xCollis* coll, xVec3* hitsource, xVec3* hitvel, uint32 worldSpaceNorm);
void zPlatform_PaddleStartRotate(xEnt* entplat, int32 direction, int32 stutter);
float32 SolvePaddleMotion(zPlatform* plat, float32* time, float32 tmr);
void zPlatform_Reset(zPlatform* plat, xScene* sc);
void zPlatform_Init(zPlatform* plat, xEntAsset* asset);
void zPlatform_Init(void* plat, void* asset);
void genericPlatRender(xEnt* ent);

// zPlatform_GoofyRender__FP4xEnt
// Start address: 0x308f10
void zPlatform_GoofyRender(xEnt* ent)
{
	int32 cull_shad;
	xVec3 vec;
	xSphere* sph_world;
	int32 cull_mod;
	// Line 2747, Address: 0x308f10, Func Offset: 0
	// Line 2749, Address: 0x308f24, Func Offset: 0x14
	// Line 2751, Address: 0x308f2c, Func Offset: 0x1c
	// Line 2753, Address: 0x308f44, Func Offset: 0x34
	// Line 2757, Address: 0x308f54, Func Offset: 0x44
	// Line 2762, Address: 0x308f64, Func Offset: 0x54
	// Line 2771, Address: 0x308f70, Func Offset: 0x60
	// Line 2772, Address: 0x308f74, Func Offset: 0x64
	// Line 2771, Address: 0x308f7c, Func Offset: 0x6c
	// Line 2772, Address: 0x308f84, Func Offset: 0x74
	// Line 2773, Address: 0x308f98, Func Offset: 0x88
	// Line 2774, Address: 0x308fac, Func Offset: 0x9c
	// Line 2776, Address: 0x308fbc, Func Offset: 0xac
	// Line 2777, Address: 0x308fcc, Func Offset: 0xbc
	// Line 2783, Address: 0x308fd4, Func Offset: 0xc4
	// Line 2795, Address: 0x308fe0, Func Offset: 0xd0
	// Line 2759, Address: 0x308ff0, Func Offset: 0xe0
	// Line 2795, Address: 0x308ff8, Func Offset: 0xe8
	// Line 2764, Address: 0x309000, Func Offset: 0xf0
	// Line 2795, Address: 0x309008, Func Offset: 0xf8
	// Line 2787, Address: 0x30901c, Func Offset: 0x10c
	// Line 2795, Address: 0x309028, Func Offset: 0x118
	// Line 2787, Address: 0x30902c, Func Offset: 0x11c
	// Line 2795, Address: 0x309038, Func Offset: 0x128
	// Line 2796, Address: 0x30904c, Func Offset: 0x13c
	// Func End, Address: 0x30905c, Func Offset: 0x14c
}

// zPlatform_UsePartialCameraCollision__FP9zPlatform
// Start address: 0x309060
uint8 zPlatform_UsePartialCameraCollision(zPlatform* ent)
{
	// Line 2637, Address: 0x309060, Func Offset: 0
	// Line 2638, Address: 0x309068, Func Offset: 0x8
	// Func End, Address: 0x309070, Func Offset: 0x10
}

// zPlatformEventCB__FP5xBaseP5xBaseUiPCfP5xBaseUi
// Start address: 0x309070
void zPlatformEventCB(xBase* from, xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget, uint32 toParamWidgetID)
{
	zPlatform* plat;
	int32 iParam0;
	int32 destctr;
	float32 tp[4];
	float32 tp[4];
	float32 tp[4];
	float32 tp[4];
	float32 tp[4];
	float32 tp[4];
	float32 tp[4];
	float32 tp[4];
	float32 tp[4];
	float32 desired_angle;
	float32 delta_angle;
	float32 tp[4];
	float32 desired_angle;
	float32 delta_angle;
	float32 tp[4];
	float32 desired_angle;
	float32 delta_angle;
	float32 tp[4];
	float32 tp[4];
	float32 mt;
	float32 mt;
	FloatAndVoid dist;
	zShrapnelAsset* shrap;
	xVec3 currVel;
	uint32 numFireworks;
	uint32 i;
	xVec3 position;
	xEnt* ent;
	uint32 i;
	xVec3 position;
	// Line 1996, Address: 0x309070, Func Offset: 0
	// Line 2002, Address: 0x3090b0, Func Offset: 0x40
	// Line 2006, Address: 0x3090b4, Func Offset: 0x44
	// Line 2007, Address: 0x3090c4, Func Offset: 0x54
	// Line 2010, Address: 0x3090dc, Func Offset: 0x6c
	// Line 2013, Address: 0x309380, Func Offset: 0x310
	// Line 2023, Address: 0x309390, Func Offset: 0x320
	// Line 2026, Address: 0x309398, Func Offset: 0x328
	// Line 2029, Address: 0x3093a8, Func Offset: 0x338
	// Line 2032, Address: 0x3093b0, Func Offset: 0x340
	// Line 2033, Address: 0x3093c0, Func Offset: 0x350
	// Line 2034, Address: 0x3093c8, Func Offset: 0x358
	// Line 2037, Address: 0x3093d0, Func Offset: 0x360
	// Line 2056, Address: 0x3093dc, Func Offset: 0x36c
	// Line 2057, Address: 0x3093e8, Func Offset: 0x378
	// Line 2058, Address: 0x3093f0, Func Offset: 0x380
	// Line 2060, Address: 0x3093f8, Func Offset: 0x388
	// Line 2070, Address: 0x309400, Func Offset: 0x390
	// Line 2072, Address: 0x309408, Func Offset: 0x398
	// Line 2073, Address: 0x309418, Func Offset: 0x3a8
	// Line 2075, Address: 0x309420, Func Offset: 0x3b0
	// Line 2080, Address: 0x309430, Func Offset: 0x3c0
	// Line 2085, Address: 0x309474, Func Offset: 0x404
	// Line 2086, Address: 0x309488, Func Offset: 0x418
	// Line 2087, Address: 0x309490, Func Offset: 0x420
	// Line 2088, Address: 0x3094a0, Func Offset: 0x430
	// Line 2090, Address: 0x3094bc, Func Offset: 0x44c
	// Line 2089, Address: 0x3094c0, Func Offset: 0x450
	// Line 2090, Address: 0x3094c8, Func Offset: 0x458
	// Line 2095, Address: 0x3094cc, Func Offset: 0x45c
	// Line 2097, Address: 0x3094d4, Func Offset: 0x464
	// Line 2107, Address: 0x3094f0, Func Offset: 0x480
	// Line 2111, Address: 0x309500, Func Offset: 0x490
	// Line 2112, Address: 0x309508, Func Offset: 0x498
	// Line 2115, Address: 0x309510, Func Offset: 0x4a0
	// Line 2116, Address: 0x309520, Func Offset: 0x4b0
	// Line 2117, Address: 0x309528, Func Offset: 0x4b8
	// Line 2119, Address: 0x309530, Func Offset: 0x4c0
	// Line 2120, Address: 0x309538, Func Offset: 0x4c8
	// Line 2123, Address: 0x309540, Func Offset: 0x4d0
	// Line 2124, Address: 0x309550, Func Offset: 0x4e0
	// Line 2126, Address: 0x309560, Func Offset: 0x4f0
	// Line 2129, Address: 0x309568, Func Offset: 0x4f8
	// Line 2130, Address: 0x309578, Func Offset: 0x508
	// Line 2132, Address: 0x309588, Func Offset: 0x518
	// Line 2135, Address: 0x309590, Func Offset: 0x520
	// Line 2136, Address: 0x3095a0, Func Offset: 0x530
	// Line 2138, Address: 0x3095ac, Func Offset: 0x53c
	// Line 2141, Address: 0x3095b4, Func Offset: 0x544
	// Line 2142, Address: 0x3095c4, Func Offset: 0x554
	// Line 2144, Address: 0x3095d0, Func Offset: 0x560
	// Line 2147, Address: 0x3095d8, Func Offset: 0x568
	// Line 2148, Address: 0x3095e8, Func Offset: 0x578
	// Line 2150, Address: 0x3095f8, Func Offset: 0x588
	// Line 2153, Address: 0x309600, Func Offset: 0x590
	// Line 2154, Address: 0x309610, Func Offset: 0x5a0
	// Line 2156, Address: 0x309620, Func Offset: 0x5b0
	// Line 2159, Address: 0x309628, Func Offset: 0x5b8
	// Line 2161, Address: 0x309638, Func Offset: 0x5c8
	// Line 2162, Address: 0x309640, Func Offset: 0x5d0
	// Line 2165, Address: 0x309644, Func Offset: 0x5d4
	// Line 2163, Address: 0x309648, Func Offset: 0x5d8
	// Line 2165, Address: 0x30964c, Func Offset: 0x5dc
	// Line 2164, Address: 0x309650, Func Offset: 0x5e0
	// Line 2165, Address: 0x309654, Func Offset: 0x5e4
	// Line 2161, Address: 0x309658, Func Offset: 0x5e8
	// Line 2162, Address: 0x309664, Func Offset: 0x5f4
	// Line 2163, Address: 0x309668, Func Offset: 0x5f8
	// Line 2164, Address: 0x30966c, Func Offset: 0x5fc
	// Line 2165, Address: 0x309670, Func Offset: 0x600
	// Line 2167, Address: 0x309678, Func Offset: 0x608
	// Line 2170, Address: 0x309680, Func Offset: 0x610
	// Line 2172, Address: 0x309690, Func Offset: 0x620
	// Line 2176, Address: 0x309694, Func Offset: 0x624
	// Line 2172, Address: 0x309698, Func Offset: 0x628
	// Line 2176, Address: 0x30969c, Func Offset: 0x62c
	// Line 2173, Address: 0x3096a0, Func Offset: 0x630
	// Line 2176, Address: 0x3096a4, Func Offset: 0x634
	// Line 2174, Address: 0x3096a8, Func Offset: 0x638
	// Line 2176, Address: 0x3096ac, Func Offset: 0x63c
	// Line 2175, Address: 0x3096b0, Func Offset: 0x640
	// Line 2172, Address: 0x3096b4, Func Offset: 0x644
	// Line 2173, Address: 0x3096c0, Func Offset: 0x650
	// Line 2174, Address: 0x3096c4, Func Offset: 0x654
	// Line 2175, Address: 0x3096c8, Func Offset: 0x658
	// Line 2176, Address: 0x3096cc, Func Offset: 0x65c
	// Line 2178, Address: 0x3096d4, Func Offset: 0x664
	// Line 2181, Address: 0x3096dc, Func Offset: 0x66c
	// Line 2183, Address: 0x3096ec, Func Offset: 0x67c
	// Line 2184, Address: 0x3096f4, Func Offset: 0x684
	// Line 2187, Address: 0x3096f8, Func Offset: 0x688
	// Line 2185, Address: 0x3096fc, Func Offset: 0x68c
	// Line 2187, Address: 0x309700, Func Offset: 0x690
	// Line 2186, Address: 0x309704, Func Offset: 0x694
	// Line 2187, Address: 0x309708, Func Offset: 0x698
	// Line 2183, Address: 0x309710, Func Offset: 0x6a0
	// Line 2184, Address: 0x30971c, Func Offset: 0x6ac
	// Line 2185, Address: 0x309720, Func Offset: 0x6b0
	// Line 2186, Address: 0x309724, Func Offset: 0x6b4
	// Line 2187, Address: 0x309728, Func Offset: 0x6b8
	// Line 2189, Address: 0x309730, Func Offset: 0x6c0
	// Line 2192, Address: 0x309738, Func Offset: 0x6c8
	// Line 2194, Address: 0x309748, Func Offset: 0x6d8
	// Line 2198, Address: 0x309754, Func Offset: 0x6e4
	// Line 2194, Address: 0x309758, Func Offset: 0x6e8
	// Line 2198, Address: 0x30975c, Func Offset: 0x6ec
	// Line 2195, Address: 0x309760, Func Offset: 0x6f0
	// Line 2198, Address: 0x309764, Func Offset: 0x6f4
	// Line 2196, Address: 0x309768, Func Offset: 0x6f8
	// Line 2198, Address: 0x30976c, Func Offset: 0x6fc
	// Line 2197, Address: 0x309770, Func Offset: 0x700
	// Line 2194, Address: 0x309774, Func Offset: 0x704
	// Line 2195, Address: 0x309778, Func Offset: 0x708
	// Line 2196, Address: 0x30977c, Func Offset: 0x70c
	// Line 2197, Address: 0x309780, Func Offset: 0x710
	// Line 2198, Address: 0x309784, Func Offset: 0x714
	// Line 2200, Address: 0x30978c, Func Offset: 0x71c
	// Line 2203, Address: 0x309794, Func Offset: 0x724
	// Line 2205, Address: 0x3097a4, Func Offset: 0x734
	// Line 2209, Address: 0x3097b0, Func Offset: 0x740
	// Line 2205, Address: 0x3097b4, Func Offset: 0x744
	// Line 2209, Address: 0x3097b8, Func Offset: 0x748
	// Line 2206, Address: 0x3097bc, Func Offset: 0x74c
	// Line 2209, Address: 0x3097c0, Func Offset: 0x750
	// Line 2207, Address: 0x3097c4, Func Offset: 0x754
	// Line 2209, Address: 0x3097c8, Func Offset: 0x758
	// Line 2208, Address: 0x3097cc, Func Offset: 0x75c
	// Line 2205, Address: 0x3097d0, Func Offset: 0x760
	// Line 2206, Address: 0x3097d4, Func Offset: 0x764
	// Line 2207, Address: 0x3097d8, Func Offset: 0x768
	// Line 2208, Address: 0x3097dc, Func Offset: 0x76c
	// Line 2209, Address: 0x3097e0, Func Offset: 0x770
	// Line 2211, Address: 0x3097e8, Func Offset: 0x778
	// Line 2214, Address: 0x3097f0, Func Offset: 0x780
	// Line 2216, Address: 0x309800, Func Offset: 0x790
	// Line 2220, Address: 0x30980c, Func Offset: 0x79c
	// Line 2216, Address: 0x309810, Func Offset: 0x7a0
	// Line 2220, Address: 0x309814, Func Offset: 0x7a4
	// Line 2217, Address: 0x309818, Func Offset: 0x7a8
	// Line 2220, Address: 0x30981c, Func Offset: 0x7ac
	// Line 2218, Address: 0x309820, Func Offset: 0x7b0
	// Line 2220, Address: 0x309824, Func Offset: 0x7b4
	// Line 2219, Address: 0x309828, Func Offset: 0x7b8
	// Line 2216, Address: 0x30982c, Func Offset: 0x7bc
	// Line 2217, Address: 0x309830, Func Offset: 0x7c0
	// Line 2218, Address: 0x309834, Func Offset: 0x7c4
	// Line 2219, Address: 0x309838, Func Offset: 0x7c8
	// Line 2220, Address: 0x30983c, Func Offset: 0x7cc
	// Line 2222, Address: 0x309844, Func Offset: 0x7d4
	// Line 2225, Address: 0x30984c, Func Offset: 0x7dc
	// Line 2227, Address: 0x30985c, Func Offset: 0x7ec
	// Line 2231, Address: 0x309868, Func Offset: 0x7f8
	// Line 2227, Address: 0x30986c, Func Offset: 0x7fc
	// Line 2231, Address: 0x309870, Func Offset: 0x800
	// Line 2228, Address: 0x309874, Func Offset: 0x804
	// Line 2231, Address: 0x309878, Func Offset: 0x808
	// Line 2229, Address: 0x30987c, Func Offset: 0x80c
	// Line 2231, Address: 0x309880, Func Offset: 0x810
	// Line 2230, Address: 0x309884, Func Offset: 0x814
	// Line 2227, Address: 0x309888, Func Offset: 0x818
	// Line 2228, Address: 0x30988c, Func Offset: 0x81c
	// Line 2229, Address: 0x309890, Func Offset: 0x820
	// Line 2230, Address: 0x309894, Func Offset: 0x824
	// Line 2231, Address: 0x309898, Func Offset: 0x828
	// Line 2233, Address: 0x3098a0, Func Offset: 0x830
	// Line 2236, Address: 0x3098a8, Func Offset: 0x838
	// Line 2238, Address: 0x3098b8, Func Offset: 0x848
	// Line 2242, Address: 0x3098c4, Func Offset: 0x854
	// Line 2238, Address: 0x3098c8, Func Offset: 0x858
	// Line 2242, Address: 0x3098cc, Func Offset: 0x85c
	// Line 2239, Address: 0x3098d0, Func Offset: 0x860
	// Line 2242, Address: 0x3098d4, Func Offset: 0x864
	// Line 2240, Address: 0x3098d8, Func Offset: 0x868
	// Line 2242, Address: 0x3098dc, Func Offset: 0x86c
	// Line 2241, Address: 0x3098e0, Func Offset: 0x870
	// Line 2238, Address: 0x3098e4, Func Offset: 0x874
	// Line 2239, Address: 0x3098e8, Func Offset: 0x878
	// Line 2240, Address: 0x3098ec, Func Offset: 0x87c
	// Line 2241, Address: 0x3098f0, Func Offset: 0x880
	// Line 2242, Address: 0x3098f4, Func Offset: 0x884
	// Line 2244, Address: 0x3098fc, Func Offset: 0x88c
	// Line 2247, Address: 0x309904, Func Offset: 0x894
	// Line 2249, Address: 0x309914, Func Offset: 0x8a4
	// Line 2253, Address: 0x309920, Func Offset: 0x8b0
	// Line 2249, Address: 0x309924, Func Offset: 0x8b4
	// Line 2253, Address: 0x309928, Func Offset: 0x8b8
	// Line 2250, Address: 0x30992c, Func Offset: 0x8bc
	// Line 2253, Address: 0x309930, Func Offset: 0x8c0
	// Line 2251, Address: 0x309934, Func Offset: 0x8c4
	// Line 2253, Address: 0x309938, Func Offset: 0x8c8
	// Line 2252, Address: 0x30993c, Func Offset: 0x8cc
	// Line 2249, Address: 0x309940, Func Offset: 0x8d0
	// Line 2250, Address: 0x309944, Func Offset: 0x8d4
	// Line 2251, Address: 0x309948, Func Offset: 0x8d8
	// Line 2252, Address: 0x30994c, Func Offset: 0x8dc
	// Line 2253, Address: 0x309950, Func Offset: 0x8e0
	// Line 2255, Address: 0x309958, Func Offset: 0x8e8
	// Line 2258, Address: 0x309960, Func Offset: 0x8f0
	// Line 2260, Address: 0x309970, Func Offset: 0x900
	// Line 2263, Address: 0x309990, Func Offset: 0x920
	// Line 2266, Address: 0x3099a8, Func Offset: 0x938
	// Line 2269, Address: 0x3099b0, Func Offset: 0x940
	// Line 2270, Address: 0x3099cc, Func Offset: 0x95c
	// Line 2275, Address: 0x3099dc, Func Offset: 0x96c
	// Line 2281, Address: 0x3099e0, Func Offset: 0x970
	// Line 2276, Address: 0x3099e4, Func Offset: 0x974
	// Line 2281, Address: 0x3099e8, Func Offset: 0x978
	// Line 2277, Address: 0x3099ec, Func Offset: 0x97c
	// Line 2281, Address: 0x3099f0, Func Offset: 0x980
	// Line 2278, Address: 0x3099f4, Func Offset: 0x984
	// Line 2281, Address: 0x3099f8, Func Offset: 0x988
	// Line 2276, Address: 0x3099fc, Func Offset: 0x98c
	// Line 2277, Address: 0x309a00, Func Offset: 0x990
	// Line 2281, Address: 0x309a04, Func Offset: 0x994
	// Line 2283, Address: 0x309a0c, Func Offset: 0x99c
	// Line 2286, Address: 0x309a14, Func Offset: 0x9a4
	// Line 2288, Address: 0x309a24, Func Offset: 0x9b4
	// Line 2291, Address: 0x309a44, Func Offset: 0x9d4
	// Line 2294, Address: 0x309a5c, Func Offset: 0x9ec
	// Line 2297, Address: 0x309a64, Func Offset: 0x9f4
	// Line 2298, Address: 0x309a80, Func Offset: 0xa10
	// Line 2303, Address: 0x309a90, Func Offset: 0xa20
	// Line 2309, Address: 0x309a94, Func Offset: 0xa24
	// Line 2304, Address: 0x309a98, Func Offset: 0xa28
	// Line 2309, Address: 0x309a9c, Func Offset: 0xa2c
	// Line 2305, Address: 0x309aa0, Func Offset: 0xa30
	// Line 2309, Address: 0x309aa4, Func Offset: 0xa34
	// Line 2306, Address: 0x309aa8, Func Offset: 0xa38
	// Line 2309, Address: 0x309aac, Func Offset: 0xa3c
	// Line 2304, Address: 0x309ab0, Func Offset: 0xa40
	// Line 2305, Address: 0x309ab4, Func Offset: 0xa44
	// Line 2309, Address: 0x309ab8, Func Offset: 0xa48
	// Line 2311, Address: 0x309ac0, Func Offset: 0xa50
	// Line 2314, Address: 0x309ac8, Func Offset: 0xa58
	// Line 2316, Address: 0x309ad8, Func Offset: 0xa68
	// Line 2319, Address: 0x309af8, Func Offset: 0xa88
	// Line 2322, Address: 0x309b10, Func Offset: 0xaa0
	// Line 2325, Address: 0x309b18, Func Offset: 0xaa8
	// Line 2326, Address: 0x309b34, Func Offset: 0xac4
	// Line 2331, Address: 0x309b44, Func Offset: 0xad4
	// Line 2337, Address: 0x309b48, Func Offset: 0xad8
	// Line 2332, Address: 0x309b4c, Func Offset: 0xadc
	// Line 2337, Address: 0x309b50, Func Offset: 0xae0
	// Line 2333, Address: 0x309b54, Func Offset: 0xae4
	// Line 2337, Address: 0x309b58, Func Offset: 0xae8
	// Line 2334, Address: 0x309b5c, Func Offset: 0xaec
	// Line 2337, Address: 0x309b60, Func Offset: 0xaf0
	// Line 2332, Address: 0x309b64, Func Offset: 0xaf4
	// Line 2333, Address: 0x309b68, Func Offset: 0xaf8
	// Line 2337, Address: 0x309b6c, Func Offset: 0xafc
	// Line 2339, Address: 0x309b74, Func Offset: 0xb04
	// Line 2342, Address: 0x309b7c, Func Offset: 0xb0c
	// Line 2344, Address: 0x309b8c, Func Offset: 0xb1c
	// Line 2348, Address: 0x309b98, Func Offset: 0xb28
	// Line 2345, Address: 0x309b9c, Func Offset: 0xb2c
	// Line 2348, Address: 0x309ba0, Func Offset: 0xb30
	// Line 2346, Address: 0x309ba4, Func Offset: 0xb34
	// Line 2348, Address: 0x309ba8, Func Offset: 0xb38
	// Line 2347, Address: 0x309bac, Func Offset: 0xb3c
	// Line 2348, Address: 0x309bb0, Func Offset: 0xb40
	// Line 2344, Address: 0x309bb4, Func Offset: 0xb44
	// Line 2345, Address: 0x309bb8, Func Offset: 0xb48
	// Line 2346, Address: 0x309bbc, Func Offset: 0xb4c
	// Line 2347, Address: 0x309bc0, Func Offset: 0xb50
	// Line 2348, Address: 0x309bc4, Func Offset: 0xb54
	// Line 2350, Address: 0x309bcc, Func Offset: 0xb5c
	// Line 2354, Address: 0x309bd4, Func Offset: 0xb64
	// Line 2355, Address: 0x309be0, Func Offset: 0xb70
	// Line 2357, Address: 0x309be8, Func Offset: 0xb78
	// Line 2360, Address: 0x309bf0, Func Offset: 0xb80
	// Line 2361, Address: 0x309c18, Func Offset: 0xba8
	// Line 2364, Address: 0x309c20, Func Offset: 0xbb0
	// Line 2365, Address: 0x309c30, Func Offset: 0xbc0
	// Line 2369, Address: 0x309c38, Func Offset: 0xbc8
	// Line 2371, Address: 0x309c58, Func Offset: 0xbe8
	// Line 2372, Address: 0x309c88, Func Offset: 0xc18
	// Line 2374, Address: 0x309c98, Func Offset: 0xc28
	// Line 2378, Address: 0x309ca0, Func Offset: 0xc30
	// Line 2380, Address: 0x309cc0, Func Offset: 0xc50
	// Line 2381, Address: 0x309cf0, Func Offset: 0xc80
	// Line 2383, Address: 0x309d00, Func Offset: 0xc90
	// Line 2386, Address: 0x309d08, Func Offset: 0xc98
	// Line 2388, Address: 0x309d28, Func Offset: 0xcb8
	// Line 2389, Address: 0x309d58, Func Offset: 0xce8
	// Line 2392, Address: 0x309d68, Func Offset: 0xcf8
	// Line 2393, Address: 0x309d6c, Func Offset: 0xcfc
	// Line 2392, Address: 0x309d70, Func Offset: 0xd00
	// Line 2393, Address: 0x309d74, Func Offset: 0xd04
	// Line 2394, Address: 0x309d88, Func Offset: 0xd18
	// Line 2398, Address: 0x309d90, Func Offset: 0xd20
	// Line 2399, Address: 0x309d9c, Func Offset: 0xd2c
	// Line 2402, Address: 0x309da4, Func Offset: 0xd34
	// Line 2403, Address: 0x309dac, Func Offset: 0xd3c
	// Line 2407, Address: 0x309db4, Func Offset: 0xd44
	// Line 2409, Address: 0x309dd4, Func Offset: 0xd64
	// Line 2410, Address: 0x309e04, Func Offset: 0xd94
	// Line 2414, Address: 0x309e14, Func Offset: 0xda4
	// Line 2417, Address: 0x309e1c, Func Offset: 0xdac
	// Line 2419, Address: 0x309e30, Func Offset: 0xdc0
	// Line 2420, Address: 0x309e38, Func Offset: 0xdc8
	// Line 2422, Address: 0x309e3c, Func Offset: 0xdcc
	// Line 2423, Address: 0x309e54, Func Offset: 0xde4
	// Line 2427, Address: 0x309e5c, Func Offset: 0xdec
	// Line 2428, Address: 0x309e64, Func Offset: 0xdf4
	// Line 2429, Address: 0x309e6c, Func Offset: 0xdfc
	// Line 2432, Address: 0x309e74, Func Offset: 0xe04
	// Line 2433, Address: 0x309e7c, Func Offset: 0xe0c
	// Line 2435, Address: 0x309e84, Func Offset: 0xe14
	// Line 2436, Address: 0x309e8c, Func Offset: 0xe1c
	// Line 2450, Address: 0x309e94, Func Offset: 0xe24
	// Line 2451, Address: 0x309ea4, Func Offset: 0xe34
	// Line 2455, Address: 0x309eac, Func Offset: 0xe3c
	// Line 2456, Address: 0x309f08, Func Offset: 0xe98
	// Line 2458, Address: 0x309f10, Func Offset: 0xea0
	// Line 2459, Address: 0x309f74, Func Offset: 0xf04
	// Line 2462, Address: 0x309f7c, Func Offset: 0xf0c
	// Line 2463, Address: 0x309fe0, Func Offset: 0xf70
	// Line 2473, Address: 0x309fe8, Func Offset: 0xf78
	// Line 2474, Address: 0x30a024, Func Offset: 0xfb4
	// Line 2477, Address: 0x30a02c, Func Offset: 0xfbc
	// Line 2478, Address: 0x30a06c, Func Offset: 0xffc
	// Line 2482, Address: 0x30a074, Func Offset: 0x1004
	// Line 2483, Address: 0x30a080, Func Offset: 0x1010
	// Line 2486, Address: 0x30a088, Func Offset: 0x1018
	// Line 2487, Address: 0x30a094, Func Offset: 0x1024
	// Line 2490, Address: 0x30a09c, Func Offset: 0x102c
	// Line 2491, Address: 0x30a0a4, Func Offset: 0x1034
	// Line 2494, Address: 0x30a0ac, Func Offset: 0x103c
	// Line 2495, Address: 0x30a0b4, Func Offset: 0x1044
	// Line 2497, Address: 0x30a0bc, Func Offset: 0x104c
	// Line 2498, Address: 0x30a0c4, Func Offset: 0x1054
	// Line 2502, Address: 0x30a0cc, Func Offset: 0x105c
	// Line 2503, Address: 0x30a0d4, Func Offset: 0x1064
	// Line 2504, Address: 0x30a0dc, Func Offset: 0x106c
	// Line 2503, Address: 0x30a0e0, Func Offset: 0x1070
	// Line 2504, Address: 0x30a0e8, Func Offset: 0x1078
	// Line 2505, Address: 0x30a0f4, Func Offset: 0x1084
	// Line 2507, Address: 0x30a0f8, Func Offset: 0x1088
	// Line 2511, Address: 0x30a104, Func Offset: 0x1094
	// Line 2513, Address: 0x30a118, Func Offset: 0x10a8
	// Line 2522, Address: 0x30a124, Func Offset: 0x10b4
	// Line 2525, Address: 0x30a12c, Func Offset: 0x10bc
	// Line 2526, Address: 0x30a134, Func Offset: 0x10c4
	// Line 2527, Address: 0x30a13c, Func Offset: 0x10cc
	// Line 2526, Address: 0x30a140, Func Offset: 0x10d0
	// Line 2527, Address: 0x30a148, Func Offset: 0x10d8
	// Line 2528, Address: 0x30a154, Func Offset: 0x10e4
	// Line 2530, Address: 0x30a158, Func Offset: 0x10e8
	// Line 2532, Address: 0x30a160, Func Offset: 0x10f0
	// Line 2535, Address: 0x30a16c, Func Offset: 0x10fc
	// Line 2536, Address: 0x30a178, Func Offset: 0x1108
	// Line 2537, Address: 0x30a18c, Func Offset: 0x111c
	// Line 2538, Address: 0x30a1a0, Func Offset: 0x1130
	// Line 2541, Address: 0x30a1a8, Func Offset: 0x1138
	// Line 2540, Address: 0x30a1b0, Func Offset: 0x1140
	// Line 2541, Address: 0x30a1b4, Func Offset: 0x1144
	// Line 2544, Address: 0x30a1c0, Func Offset: 0x1150
	// Line 2549, Address: 0x30a1c8, Func Offset: 0x1158
	// Line 2552, Address: 0x30a1dc, Func Offset: 0x116c
	// Line 2549, Address: 0x30a1e0, Func Offset: 0x1170
	// Line 2552, Address: 0x30a1e4, Func Offset: 0x1174
	// Line 2551, Address: 0x30a1e8, Func Offset: 0x1178
	// Line 2553, Address: 0x30a1f0, Func Offset: 0x1180
	// Line 2552, Address: 0x30a1f4, Func Offset: 0x1184
	// Line 2553, Address: 0x30a1f8, Func Offset: 0x1188
	// Line 2552, Address: 0x30a1fc, Func Offset: 0x118c
	// Line 2551, Address: 0x30a200, Func Offset: 0x1190
	// Line 2552, Address: 0x30a208, Func Offset: 0x1198
	// Line 2551, Address: 0x30a20c, Func Offset: 0x119c
	// Line 2552, Address: 0x30a214, Func Offset: 0x11a4
	// Line 2551, Address: 0x30a218, Func Offset: 0x11a8
	// Line 2552, Address: 0x30a220, Func Offset: 0x11b0
	// Line 2551, Address: 0x30a224, Func Offset: 0x11b4
	// Line 2552, Address: 0x30a22c, Func Offset: 0x11bc
	// Line 2551, Address: 0x30a230, Func Offset: 0x11c0
	// Line 2552, Address: 0x30a238, Func Offset: 0x11c8
	// Line 2551, Address: 0x30a23c, Func Offset: 0x11cc
	// Line 2552, Address: 0x30a240, Func Offset: 0x11d0
	// Line 2553, Address: 0x30a250, Func Offset: 0x11e0
	// Line 2555, Address: 0x30a260, Func Offset: 0x11f0
	// Line 2562, Address: 0x30a268, Func Offset: 0x11f8
	// Line 2563, Address: 0x30a274, Func Offset: 0x1204
	// Line 2566, Address: 0x30a280, Func Offset: 0x1210
	// Line 2567, Address: 0x30a2a0, Func Offset: 0x1230
	// Line 2568, Address: 0x30a2a4, Func Offset: 0x1234
	// Line 2569, Address: 0x30a2a8, Func Offset: 0x1238
	// Line 2568, Address: 0x30a2ac, Func Offset: 0x123c
	// Line 2570, Address: 0x30a2b0, Func Offset: 0x1240
	// Line 2574, Address: 0x30a2b8, Func Offset: 0x1248
	// Line 2578, Address: 0x30a2c4, Func Offset: 0x1254
	// Line 2579, Address: 0x30a31c, Func Offset: 0x12ac
	// Line 2582, Address: 0x30a34c, Func Offset: 0x12dc
	// Line 2585, Address: 0x30a354, Func Offset: 0x12e4
	// Line 2586, Address: 0x30a360, Func Offset: 0x12f0
	// Line 2585, Address: 0x30a364, Func Offset: 0x12f4
	// Line 2586, Address: 0x30a374, Func Offset: 0x1304
	// Line 2589, Address: 0x30a3b0, Func Offset: 0x1340
	// Line 2593, Address: 0x30a3b4, Func Offset: 0x1344
	// Line 2589, Address: 0x30a3b8, Func Offset: 0x1348
	// Line 2590, Address: 0x30a3bc, Func Offset: 0x134c
	// Line 2591, Address: 0x30a3c4, Func Offset: 0x1354
	// Line 2589, Address: 0x30a3cc, Func Offset: 0x135c
	// Line 2590, Address: 0x30a3d0, Func Offset: 0x1360
	// Line 2591, Address: 0x30a3d4, Func Offset: 0x1364
	// Line 2589, Address: 0x30a3d8, Func Offset: 0x1368
	// Line 2590, Address: 0x30a3dc, Func Offset: 0x136c
	// Line 2591, Address: 0x30a3e0, Func Offset: 0x1370
	// Line 2593, Address: 0x30a3e4, Func Offset: 0x1374
	// Line 2594, Address: 0x30a43c, Func Offset: 0x13cc
	// Line 2597, Address: 0x30a448, Func Offset: 0x13d8
	// Line 2598, Address: 0x30a44c, Func Offset: 0x13dc
	// Line 2599, Address: 0x30a450, Func Offset: 0x13e0
	// Line 2597, Address: 0x30a454, Func Offset: 0x13e4
	// Line 2598, Address: 0x30a458, Func Offset: 0x13e8
	// Line 2599, Address: 0x30a45c, Func Offset: 0x13ec
	// Line 2602, Address: 0x30a460, Func Offset: 0x13f0
	// Line 2603, Address: 0x30a4ec, Func Offset: 0x147c
	// Line 2604, Address: 0x30a4fc, Func Offset: 0x148c
	// Line 2608, Address: 0x30a504, Func Offset: 0x1494
	// Line 2611, Address: 0x30a510, Func Offset: 0x14a0
	// Line 2613, Address: 0x30a518, Func Offset: 0x14a8
	// Line 2614, Address: 0x30a52c, Func Offset: 0x14bc
	// Line 2617, Address: 0x30a538, Func Offset: 0x14c8
	// Line 2618, Address: 0x30a53c, Func Offset: 0x14cc
	// Line 2619, Address: 0x30a540, Func Offset: 0x14d0
	// Line 2620, Address: 0x30a544, Func Offset: 0x14d4
	// Line 2622, Address: 0x30a548, Func Offset: 0x14d8
	// Line 2623, Address: 0x30a5fc, Func Offset: 0x158c
	// Line 2629, Address: 0x30a60c, Func Offset: 0x159c
	// Line 2632, Address: 0x30a610, Func Offset: 0x15a0
	// Func End, Address: 0x30a644, Func Offset: 0x15d4
}

// zPlatFM_EventSetup__FP9zPlatformPCfiUi
// Start address: 0x30a650
void zPlatFM_EventSetup(zPlatform* plat, float32* toParam, int32 idx, uint32 mask)
{
	zPlatFMRunTime* fmrt;
	float32 ds;
	float32 ttm;
	float32 atm;
	float32 dtm;
	// Line 1958, Address: 0x30a650, Func Offset: 0
	// Line 1961, Address: 0x30a654, Func Offset: 0x4
	// Line 1957, Address: 0x30a658, Func Offset: 0x8
	// Line 1959, Address: 0x30a65c, Func Offset: 0xc
	// Line 1960, Address: 0x30a660, Func Offset: 0x10
	// Line 1961, Address: 0x30a664, Func Offset: 0x14
	// Line 1968, Address: 0x30a670, Func Offset: 0x20
	// Line 1971, Address: 0x30a68c, Func Offset: 0x3c
	// Line 1978, Address: 0x30a6b0, Func Offset: 0x60
	// Line 1973, Address: 0x30a6bc, Func Offset: 0x6c
	// Line 1978, Address: 0x30a6c0, Func Offset: 0x70
	// Line 1973, Address: 0x30a6d4, Func Offset: 0x84
	// Line 1974, Address: 0x30a6d8, Func Offset: 0x88
	// Line 1975, Address: 0x30a6dc, Func Offset: 0x8c
	// Line 1976, Address: 0x30a6e0, Func Offset: 0x90
	// Line 1978, Address: 0x30a6e4, Func Offset: 0x94
	// Line 1979, Address: 0x30a6e8, Func Offset: 0x98
	// Line 1980, Address: 0x30a6ec, Func Offset: 0x9c
	// Line 1981, Address: 0x30a6f0, Func Offset: 0xa0
	// Line 1982, Address: 0x30a6f8, Func Offset: 0xa8
	// Line 1968, Address: 0x30a700, Func Offset: 0xb0
	// Line 1971, Address: 0x30a708, Func Offset: 0xb8
	// Line 1982, Address: 0x30a710, Func Offset: 0xc0
	// Func End, Address: 0x30a718, Func Offset: 0xc8
}

// zPlatformTranslate__FP4xEntP5xVec3P7xMat4x3
// Start address: 0x30a720
void zPlatformTranslate(xEnt* xent, xVec3* dpos, xMat4x3* dmat)
{
	zPlatform* plat;
	// Line 1934, Address: 0x30a720, Func Offset: 0
	// Line 1937, Address: 0x30a73c, Func Offset: 0x1c
	// Line 1938, Address: 0x30a744, Func Offset: 0x24
	// Line 1939, Address: 0x30a754, Func Offset: 0x34
	// Func End, Address: 0x30a76c, Func Offset: 0x4c
}

// zPlatform_Dismount__FP9zPlatform
// Start address: 0x30a770
void zPlatform_Dismount(zPlatform* plat)
{
	// Line 1906, Address: 0x30a770, Func Offset: 0
	// Line 1907, Address: 0x30a780, Func Offset: 0x10
	// Line 1909, Address: 0x30a794, Func Offset: 0x24
	// Line 1913, Address: 0x30a7bc, Func Offset: 0x4c
	// Line 1915, Address: 0x30a7c4, Func Offset: 0x54
	// Line 1917, Address: 0x30a82c, Func Offset: 0xbc
	// Line 1918, Address: 0x30a834, Func Offset: 0xc4
	// Line 1922, Address: 0x30a83c, Func Offset: 0xcc
	// Func End, Address: 0x30a85c, Func Offset: 0xec
}

// zPlatform_Mount__FP9zPlatform
// Start address: 0x30a860
void zPlatform_Mount(zPlatform* plat)
{
	// Line 1848, Address: 0x30a860, Func Offset: 0
	// Line 1871, Address: 0x30a870, Func Offset: 0x10
	// Line 1873, Address: 0x30a880, Func Offset: 0x20
	// Line 1893, Address: 0x30a890, Func Offset: 0x30
	// Line 1895, Address: 0x30a8a8, Func Offset: 0x48
	// Line 1898, Address: 0x30a910, Func Offset: 0xb0
	// Line 1899, Address: 0x30a920, Func Offset: 0xc0
	// Line 1902, Address: 0x30a960, Func Offset: 0x100
	// Line 1890, Address: 0x30a968, Func Offset: 0x108
	// Line 1902, Address: 0x30a974, Func Offset: 0x114
	// Func End, Address: 0x30a984, Func Offset: 0x124
}

// zPlatform_Shake__FP9zPlatformfff
// Start address: 0x30a990
void zPlatform_Shake(zPlatform* plat, float32 ampl, float32 freq)
{
	xFFXShakeState* ss;
	xFFX* sfkt;
	// Line 1754, Address: 0x30a990, Func Offset: 0
	// Line 1758, Address: 0x30a9b0, Func Offset: 0x20
	// Line 1759, Address: 0x30a9bc, Func Offset: 0x2c
	// Line 1760, Address: 0x30a9c4, Func Offset: 0x34
	// Line 1762, Address: 0x30a9cc, Func Offset: 0x3c
	// Line 1767, Address: 0x30a9d4, Func Offset: 0x44
	// Line 1766, Address: 0x30a9d8, Func Offset: 0x48
	// Line 1767, Address: 0x30a9dc, Func Offset: 0x4c
	// Line 1770, Address: 0x30a9e0, Func Offset: 0x50
	// Line 1769, Address: 0x30a9e4, Func Offset: 0x54
	// Line 1768, Address: 0x30a9e8, Func Offset: 0x58
	// Line 1769, Address: 0x30a9ec, Func Offset: 0x5c
	// Line 1770, Address: 0x30a9f0, Func Offset: 0x60
	// Line 1777, Address: 0x30a9f8, Func Offset: 0x68
	// Line 1774, Address: 0x30a9fc, Func Offset: 0x6c
	// Line 1777, Address: 0x30aa00, Func Offset: 0x70
	// Line 1774, Address: 0x30aa04, Func Offset: 0x74
	// Line 1770, Address: 0x30aa08, Func Offset: 0x78
	// Line 1771, Address: 0x30aa10, Func Offset: 0x80
	// Line 1772, Address: 0x30aa14, Func Offset: 0x84
	// Line 1774, Address: 0x30aa18, Func Offset: 0x88
	// Line 1777, Address: 0x30aa1c, Func Offset: 0x8c
	// Line 1779, Address: 0x30aa24, Func Offset: 0x94
	// Line 1763, Address: 0x30aa2c, Func Offset: 0x9c
	// Line 1779, Address: 0x30aa30, Func Offset: 0xa0
	// Func End, Address: 0x30aa54, Func Offset: 0xc4
}

// zPlatform_Move__FP4xEntP6xScenefP9xEntFrame
// Start address: 0x30aa60
void zPlatform_Move(xEnt* entplat, xScene* s, float32 dt, xEntFrame* frame)
{
	zPlatform* plat;
	// Line 1730, Address: 0x30aa60, Func Offset: 0
	// Line 1748, Address: 0x30aa80, Func Offset: 0x20
	// Line 1749, Address: 0x30aa88, Func Offset: 0x28
	// Line 1750, Address: 0x30aa9c, Func Offset: 0x3c
	// Func End, Address: 0x30aab4, Func Offset: 0x54
}

// zPlatform_Update__FP4xEntP6xScenef
// Start address: 0x30aac0
void zPlatform_Update(xEnt* entplat, xScene* sc, float32 dt)
{
	zPlatform* plat;
	uint16 state;
	xEntDrive* drv;
	xEntMotionMechData* mkasst;
	xEnt* p;
	float32 ctilt;
	float32 itilt;
	float32 dtilt;
	xVec3* scale;
	xVec3 lpos;
	float32 dangle;
	float32 tangle;
	xVec3* scale;
	float32 time[3];
	float32 orient;
	xMat3x3 orientrot;
	xMat3x3 origrot;
	xVec3* scale;
	xMovePoint* src;
	int32 moving;
	xVec3* opos;
	xVec3* pos;
	xVec3* orot;
	xVec3* rot;
	// Line 1410, Address: 0x30aac0, Func Offset: 0
	// Line 1411, Address: 0x30aadc, Func Offset: 0x1c
	// Line 1410, Address: 0x30aae0, Func Offset: 0x20
	// Line 1419, Address: 0x30aae4, Func Offset: 0x24
	// Line 1424, Address: 0x30aaf4, Func Offset: 0x34
	// Line 1426, Address: 0x30ab08, Func Offset: 0x48
	// Line 1427, Address: 0x30ab10, Func Offset: 0x50
	// Line 1442, Address: 0x30ab24, Func Offset: 0x64
	// Line 1444, Address: 0x30ab28, Func Offset: 0x68
	// Line 1447, Address: 0x30ab30, Func Offset: 0x70
	// Line 1448, Address: 0x30ab3c, Func Offset: 0x7c
	// Line 1451, Address: 0x30ab44, Func Offset: 0x84
	// Line 1453, Address: 0x30ab4c, Func Offset: 0x8c
	// Line 1455, Address: 0x30ab54, Func Offset: 0x94
	// Line 1457, Address: 0x30ab58, Func Offset: 0x98
	// Line 1469, Address: 0x30ab64, Func Offset: 0xa4
	// Line 1477, Address: 0x30ab90, Func Offset: 0xd0
	// Line 1480, Address: 0x30ab98, Func Offset: 0xd8
	// Line 1481, Address: 0x30aba0, Func Offset: 0xe0
	// Line 1484, Address: 0x30aba8, Func Offset: 0xe8
	// Line 1502, Address: 0x30abc8, Func Offset: 0x108
	// Line 1506, Address: 0x30abe0, Func Offset: 0x120
	// Line 1502, Address: 0x30abe8, Func Offset: 0x128
	// Line 1506, Address: 0x30abec, Func Offset: 0x12c
	// Line 1505, Address: 0x30abf0, Func Offset: 0x130
	// Line 1506, Address: 0x30abf4, Func Offset: 0x134
	// Line 1504, Address: 0x30ac00, Func Offset: 0x140
	// Line 1505, Address: 0x30ac08, Func Offset: 0x148
	// Line 1506, Address: 0x30ac0c, Func Offset: 0x14c
	// Line 1508, Address: 0x30ac14, Func Offset: 0x154
	// Line 1510, Address: 0x30ac20, Func Offset: 0x160
	// Line 1512, Address: 0x30ac2c, Func Offset: 0x16c
	// Line 1513, Address: 0x30ac44, Func Offset: 0x184
	// Line 1516, Address: 0x30ac4c, Func Offset: 0x18c
	// Line 1518, Address: 0x30ac5c, Func Offset: 0x19c
	// Line 1521, Address: 0x30ac74, Func Offset: 0x1b4
	// Line 1522, Address: 0x30ac84, Func Offset: 0x1c4
	// Line 1530, Address: 0x30ac9c, Func Offset: 0x1dc
	// Line 1529, Address: 0x30aca0, Func Offset: 0x1e0
	// Line 1530, Address: 0x30aca4, Func Offset: 0x1e4
	// Line 1531, Address: 0x30acd0, Func Offset: 0x210
	// Line 1532, Address: 0x30ad00, Func Offset: 0x240
	// Line 1534, Address: 0x30ad2c, Func Offset: 0x26c
	// Line 1606, Address: 0x30ad34, Func Offset: 0x274
	// Line 1612, Address: 0x30ad4c, Func Offset: 0x28c
	// Line 1613, Address: 0x30ad50, Func Offset: 0x290
	// Line 1618, Address: 0x30ad5c, Func Offset: 0x29c
	// Line 1619, Address: 0x30ad70, Func Offset: 0x2b0
	// Line 1618, Address: 0x30ad74, Func Offset: 0x2b4
	// Line 1619, Address: 0x30ad78, Func Offset: 0x2b8
	// Line 1618, Address: 0x30ad7c, Func Offset: 0x2bc
	// Line 1619, Address: 0x30ad80, Func Offset: 0x2c0
	// Line 1618, Address: 0x30ad84, Func Offset: 0x2c4
	// Line 1619, Address: 0x30ad88, Func Offset: 0x2c8
	// Line 1620, Address: 0x30ad98, Func Offset: 0x2d8
	// Line 1621, Address: 0x30adac, Func Offset: 0x2ec
	// Line 1625, Address: 0x30adc0, Func Offset: 0x300
	// Line 1624, Address: 0x30adc4, Func Offset: 0x304
	// Line 1625, Address: 0x30adc8, Func Offset: 0x308
	// Line 1626, Address: 0x30adf4, Func Offset: 0x334
	// Line 1627, Address: 0x30ae24, Func Offset: 0x364
	// Line 1630, Address: 0x30ae50, Func Offset: 0x390
	// Line 1633, Address: 0x30ae58, Func Offset: 0x398
	// Line 1635, Address: 0x30ae68, Func Offset: 0x3a8
	// Line 1640, Address: 0x30ae74, Func Offset: 0x3b4
	// Line 1642, Address: 0x30ae84, Func Offset: 0x3c4
	// Line 1643, Address: 0x30ae88, Func Offset: 0x3c8
	// Line 1645, Address: 0x30ae94, Func Offset: 0x3d4
	// Line 1646, Address: 0x30aeb4, Func Offset: 0x3f4
	// Line 1650, Address: 0x30aeb8, Func Offset: 0x3f8
	// Line 1652, Address: 0x30aec8, Func Offset: 0x408
	// Line 1654, Address: 0x30aed4, Func Offset: 0x414
	// Line 1663, Address: 0x30aef8, Func Offset: 0x438
	// Line 1662, Address: 0x30aefc, Func Offset: 0x43c
	// Line 1659, Address: 0x30af00, Func Offset: 0x440
	// Line 1660, Address: 0x30af04, Func Offset: 0x444
	// Line 1661, Address: 0x30af08, Func Offset: 0x448
	// Line 1663, Address: 0x30af0c, Func Offset: 0x44c
	// Line 1677, Address: 0x30af14, Func Offset: 0x454
	// Line 1679, Address: 0x30af20, Func Offset: 0x460
	// Line 1682, Address: 0x30af38, Func Offset: 0x478
	// Line 1690, Address: 0x30af40, Func Offset: 0x480
	// Line 1692, Address: 0x30af54, Func Offset: 0x494
	// Line 1701, Address: 0x30af58, Func Offset: 0x498
	// Line 1703, Address: 0x30af64, Func Offset: 0x4a4
	// Line 1712, Address: 0x30af70, Func Offset: 0x4b0
	// Line 1714, Address: 0x30af84, Func Offset: 0x4c4
	// Line 1717, Address: 0x30afbc, Func Offset: 0x4fc
	// Line 1439, Address: 0x30aff0, Func Offset: 0x530
	// Line 1717, Address: 0x30aff4, Func Offset: 0x534
	// Line 1439, Address: 0x30affc, Func Offset: 0x53c
	// Line 1717, Address: 0x30b000, Func Offset: 0x540
	// Line 1439, Address: 0x30b010, Func Offset: 0x550
	// Line 1717, Address: 0x30b014, Func Offset: 0x554
	// Line 1439, Address: 0x30b024, Func Offset: 0x564
	// Line 1717, Address: 0x30b028, Func Offset: 0x568
	// Line 1439, Address: 0x30b040, Func Offset: 0x580
	// Line 1459, Address: 0x30b048, Func Offset: 0x588
	// Line 1717, Address: 0x30b064, Func Offset: 0x5a4
	// Line 1460, Address: 0x30b06c, Func Offset: 0x5ac
	// Line 1472, Address: 0x30b074, Func Offset: 0x5b4
	// Line 1717, Address: 0x30b090, Func Offset: 0x5d0
	// Line 1487, Address: 0x30b0ac, Func Offset: 0x5ec
	// Line 1717, Address: 0x30b0b4, Func Offset: 0x5f4
	// Line 1491, Address: 0x30b0d0, Func Offset: 0x610
	// Line 1717, Address: 0x30b0d8, Func Offset: 0x618
	// Line 1491, Address: 0x30b0dc, Func Offset: 0x61c
	// Line 1717, Address: 0x30b0e0, Func Offset: 0x620
	// Line 1491, Address: 0x30b0e8, Func Offset: 0x628
	// Line 1717, Address: 0x30b0ec, Func Offset: 0x62c
	// Line 1491, Address: 0x30b0f4, Func Offset: 0x634
	// Line 1717, Address: 0x30b0f8, Func Offset: 0x638
	// Line 1497, Address: 0x30b110, Func Offset: 0x650
	// Line 1717, Address: 0x30b114, Func Offset: 0x654
	// Line 1497, Address: 0x30b120, Func Offset: 0x660
	// Line 1717, Address: 0x30b124, Func Offset: 0x664
	// Line 1497, Address: 0x30b130, Func Offset: 0x670
	// Line 1499, Address: 0x30b134, Func Offset: 0x674
	// Line 1717, Address: 0x30b13c, Func Offset: 0x67c
	// Line 1538, Address: 0x30b148, Func Offset: 0x688
	// Line 1717, Address: 0x30b150, Func Offset: 0x690
	// Line 1549, Address: 0x30b160, Func Offset: 0x6a0
	// Line 1717, Address: 0x30b164, Func Offset: 0x6a4
	// Line 1549, Address: 0x30b174, Func Offset: 0x6b4
	// Line 1717, Address: 0x30b178, Func Offset: 0x6b8
	// Line 1549, Address: 0x30b184, Func Offset: 0x6c4
	// Line 1717, Address: 0x30b188, Func Offset: 0x6c8
	// Line 1549, Address: 0x30b194, Func Offset: 0x6d4
	// Line 1717, Address: 0x30b198, Func Offset: 0x6d8
	// Line 1555, Address: 0x30b1a4, Func Offset: 0x6e4
	// Line 1717, Address: 0x30b1ac, Func Offset: 0x6ec
	// Line 1555, Address: 0x30b1b0, Func Offset: 0x6f0
	// Line 1717, Address: 0x30b1b8, Func Offset: 0x6f8
	// Line 1565, Address: 0x30b1bc, Func Offset: 0x6fc
	// Line 1717, Address: 0x30b1c0, Func Offset: 0x700
	// Line 1555, Address: 0x30b1cc, Func Offset: 0x70c
	// Line 1558, Address: 0x30b1dc, Func Offset: 0x71c
	// Line 1717, Address: 0x30b1e0, Func Offset: 0x720
	// Line 1558, Address: 0x30b1e8, Func Offset: 0x728
	// Line 1565, Address: 0x30b1ec, Func Offset: 0x72c
	// Line 1717, Address: 0x30b1f0, Func Offset: 0x730
	// Line 1567, Address: 0x30b1f8, Func Offset: 0x738
	// Line 1717, Address: 0x30b1fc, Func Offset: 0x73c
	// Line 1570, Address: 0x30b204, Func Offset: 0x744
	// Line 1573, Address: 0x30b20c, Func Offset: 0x74c
	// Line 1717, Address: 0x30b210, Func Offset: 0x750
	// Line 1575, Address: 0x30b218, Func Offset: 0x758
	// Line 1717, Address: 0x30b21c, Func Offset: 0x75c
	// Line 1582, Address: 0x30b220, Func Offset: 0x760
	// Line 1717, Address: 0x30b224, Func Offset: 0x764
	// Line 1591, Address: 0x30b258, Func Offset: 0x798
	// Line 1717, Address: 0x30b25c, Func Offset: 0x79c
	// Line 1591, Address: 0x30b264, Func Offset: 0x7a4
	// Line 1717, Address: 0x30b268, Func Offset: 0x7a8
	// Line 1591, Address: 0x30b270, Func Offset: 0x7b0
	// Line 1717, Address: 0x30b274, Func Offset: 0x7b4
	// Line 1592, Address: 0x30b288, Func Offset: 0x7c8
	// Line 1717, Address: 0x30b28c, Func Offset: 0x7cc
	// Line 1592, Address: 0x30b294, Func Offset: 0x7d4
	// Line 1717, Address: 0x30b298, Func Offset: 0x7d8
	// Line 1592, Address: 0x30b2a0, Func Offset: 0x7e0
	// Line 1717, Address: 0x30b2a4, Func Offset: 0x7e4
	// Line 1593, Address: 0x30b2b8, Func Offset: 0x7f8
	// Line 1717, Address: 0x30b2bc, Func Offset: 0x7fc
	// Line 1593, Address: 0x30b2c4, Func Offset: 0x804
	// Line 1717, Address: 0x30b2c8, Func Offset: 0x808
	// Line 1593, Address: 0x30b2d0, Func Offset: 0x810
	// Line 1601, Address: 0x30b2d4, Func Offset: 0x814
	// Line 1717, Address: 0x30b2dc, Func Offset: 0x81c
	// Line 1665, Address: 0x30b2f0, Func Offset: 0x830
	// Line 1717, Address: 0x30b2f4, Func Offset: 0x834
	// Line 1668, Address: 0x30b2fc, Func Offset: 0x83c
	// Line 1717, Address: 0x30b304, Func Offset: 0x844
	// Line 1665, Address: 0x30b30c, Func Offset: 0x84c
	// Line 1717, Address: 0x30b310, Func Offset: 0x850
	// Line 1665, Address: 0x30b320, Func Offset: 0x860
	// Line 1717, Address: 0x30b324, Func Offset: 0x864
	// Line 1674, Address: 0x30b32c, Func Offset: 0x86c
	// Line 1687, Address: 0x30b334, Func Offset: 0x874
	// Line 1717, Address: 0x30b33c, Func Offset: 0x87c
	// Line 1690, Address: 0x30b344, Func Offset: 0x884
	// Line 1717, Address: 0x30b348, Func Offset: 0x888
	// Line 1690, Address: 0x30b358, Func Offset: 0x898
	// Line 1717, Address: 0x30b35c, Func Offset: 0x89c
	// Line 1690, Address: 0x30b36c, Func Offset: 0x8ac
	// Line 1717, Address: 0x30b370, Func Offset: 0x8b0
	// Line 1690, Address: 0x30b380, Func Offset: 0x8c0
	// Line 1717, Address: 0x30b384, Func Offset: 0x8c4
	// Line 1690, Address: 0x30b394, Func Offset: 0x8d4
	// Line 1717, Address: 0x30b398, Func Offset: 0x8d8
	// Line 1705, Address: 0x30b3a8, Func Offset: 0x8e8
	// Line 1717, Address: 0x30b3c0, Func Offset: 0x900
	// Line 1720, Address: 0x30b3c8, Func Offset: 0x908
	// Line 1723, Address: 0x30b3cc, Func Offset: 0x90c
	// Line 1726, Address: 0x30b480, Func Offset: 0x9c0
	// Func End, Address: 0x30b4a0, Func Offset: 0x9e0
}

// zPlatformBreakaway_Update__FP9zPlatformP6xScenef
// Start address: 0x30b4a0
void zPlatformBreakaway_Update(zPlatform* plat, xScene* sc, float32 dt)
{
	xAnimState* ast;
	xAnimSingle* single;
	xAnimState* ast;
	xAnimSingle* single;
	xAnimState* ast;
	xAnimSingle* single;
	xAnimState* ast;
	xAnimSingle* single;
	xAnimState* ast;
	xAnimSingle* single;
	// Line 1182, Address: 0x30b4a0, Func Offset: 0
	// Line 1184, Address: 0x30b4a4, Func Offset: 0x4
	// Line 1182, Address: 0x30b4a8, Func Offset: 0x8
	// Line 1184, Address: 0x30b4b8, Func Offset: 0x18
	// Line 1191, Address: 0x30b4c4, Func Offset: 0x24
	// Line 1204, Address: 0x30b500, Func Offset: 0x60
	// Line 1210, Address: 0x30b508, Func Offset: 0x68
	// Line 1214, Address: 0x30b510, Func Offset: 0x70
	// Line 1215, Address: 0x30b51c, Func Offset: 0x7c
	// Line 1217, Address: 0x30b524, Func Offset: 0x84
	// Line 1219, Address: 0x30b528, Func Offset: 0x88
	// Line 1217, Address: 0x30b52c, Func Offset: 0x8c
	// Line 1219, Address: 0x30b534, Func Offset: 0x94
	// Line 1220, Address: 0x30b53c, Func Offset: 0x9c
	// Line 1221, Address: 0x30b544, Func Offset: 0xa4
	// Line 1223, Address: 0x30b54c, Func Offset: 0xac
	// Line 1226, Address: 0x30b554, Func Offset: 0xb4
	// Line 1229, Address: 0x30b55c, Func Offset: 0xbc
	// Line 1230, Address: 0x30b560, Func Offset: 0xc0
	// Line 1229, Address: 0x30b568, Func Offset: 0xc8
	// Line 1230, Address: 0x30b56c, Func Offset: 0xcc
	// Line 1232, Address: 0x30b578, Func Offset: 0xd8
	// Line 1233, Address: 0x30b5b4, Func Offset: 0x114
	// Line 1234, Address: 0x30b618, Func Offset: 0x178
	// Line 1238, Address: 0x30b624, Func Offset: 0x184
	// Line 1240, Address: 0x30b62c, Func Offset: 0x18c
	// Line 1241, Address: 0x30b630, Func Offset: 0x190
	// Line 1242, Address: 0x30b63c, Func Offset: 0x19c
	// Line 1241, Address: 0x30b640, Func Offset: 0x1a0
	// Line 1242, Address: 0x30b644, Func Offset: 0x1a4
	// Line 1243, Address: 0x30b668, Func Offset: 0x1c8
	// Line 1247, Address: 0x30b678, Func Offset: 0x1d8
	// Line 1250, Address: 0x30b680, Func Offset: 0x1e0
	// Line 1251, Address: 0x30b6a8, Func Offset: 0x208
	// Line 1253, Address: 0x30b6b0, Func Offset: 0x210
	// Line 1254, Address: 0x30b6b8, Func Offset: 0x218
	// Line 1256, Address: 0x30b6c0, Func Offset: 0x220
	// Line 1258, Address: 0x30b6c4, Func Offset: 0x224
	// Line 1256, Address: 0x30b6c8, Func Offset: 0x228
	// Line 1258, Address: 0x30b6d0, Func Offset: 0x230
	// Line 1259, Address: 0x30b6d8, Func Offset: 0x238
	// Line 1260, Address: 0x30b6e0, Func Offset: 0x240
	// Line 1261, Address: 0x30b6e8, Func Offset: 0x248
	// Line 1262, Address: 0x30b6f4, Func Offset: 0x254
	// Line 1265, Address: 0x30b6fc, Func Offset: 0x25c
	// Line 1267, Address: 0x30b700, Func Offset: 0x260
	// Line 1269, Address: 0x30b724, Func Offset: 0x284
	// Line 1272, Address: 0x30b72c, Func Offset: 0x28c
	// Line 1275, Address: 0x30b738, Func Offset: 0x298
	// Line 1276, Address: 0x30b744, Func Offset: 0x2a4
	// Line 1278, Address: 0x30b75c, Func Offset: 0x2bc
	// Line 1281, Address: 0x30b760, Func Offset: 0x2c0
	// Line 1283, Address: 0x30b774, Func Offset: 0x2d4
	// Line 1286, Address: 0x30b778, Func Offset: 0x2d8
	// Line 1283, Address: 0x30b77c, Func Offset: 0x2dc
	// Line 1284, Address: 0x30b780, Func Offset: 0x2e0
	// Line 1286, Address: 0x30b784, Func Offset: 0x2e4
	// Line 1284, Address: 0x30b794, Func Offset: 0x2f4
	// Line 1285, Address: 0x30b79c, Func Offset: 0x2fc
	// Line 1286, Address: 0x30b7a4, Func Offset: 0x304
	// Line 1287, Address: 0x30b7b0, Func Offset: 0x310
	// Line 1290, Address: 0x30b7bc, Func Offset: 0x31c
	// Line 1293, Address: 0x30b7d0, Func Offset: 0x330
	// Line 1296, Address: 0x30b7e0, Func Offset: 0x340
	// Line 1297, Address: 0x30b7e4, Func Offset: 0x344
	// Line 1296, Address: 0x30b7e8, Func Offset: 0x348
	// Line 1297, Address: 0x30b7f0, Func Offset: 0x350
	// Line 1300, Address: 0x30b7f8, Func Offset: 0x358
	// Line 1304, Address: 0x30b800, Func Offset: 0x360
	// Line 1305, Address: 0x30b80c, Func Offset: 0x36c
	// Line 1307, Address: 0x30b814, Func Offset: 0x374
	// Line 1309, Address: 0x30b818, Func Offset: 0x378
	// Line 1307, Address: 0x30b81c, Func Offset: 0x37c
	// Line 1309, Address: 0x30b824, Func Offset: 0x384
	// Line 1310, Address: 0x30b82c, Func Offset: 0x38c
	// Line 1311, Address: 0x30b834, Func Offset: 0x394
	// Line 1313, Address: 0x30b83c, Func Offset: 0x39c
	// Line 1316, Address: 0x30b844, Func Offset: 0x3a4
	// Line 1318, Address: 0x30b84c, Func Offset: 0x3ac
	// Line 1321, Address: 0x30b854, Func Offset: 0x3b4
	// Line 1323, Address: 0x30b874, Func Offset: 0x3d4
	// Line 1326, Address: 0x30b878, Func Offset: 0x3d8
	// Line 1323, Address: 0x30b87c, Func Offset: 0x3dc
	// Line 1324, Address: 0x30b880, Func Offset: 0x3e0
	// Line 1326, Address: 0x30b884, Func Offset: 0x3e4
	// Line 1324, Address: 0x30b894, Func Offset: 0x3f4
	// Line 1325, Address: 0x30b89c, Func Offset: 0x3fc
	// Line 1326, Address: 0x30b8a4, Func Offset: 0x404
	// Line 1330, Address: 0x30b8b0, Func Offset: 0x410
	// Line 1333, Address: 0x30b8b8, Func Offset: 0x418
	// Line 1336, Address: 0x30b8c4, Func Offset: 0x424
	// Line 1337, Address: 0x30b8d0, Func Offset: 0x430
	// Line 1339, Address: 0x30b8e8, Func Offset: 0x448
	// Line 1342, Address: 0x30b8ec, Func Offset: 0x44c
	// Line 1345, Address: 0x30b908, Func Offset: 0x468
	// Line 1347, Address: 0x30b910, Func Offset: 0x470
	// Line 1348, Address: 0x30b914, Func Offset: 0x474
	// Line 1349, Address: 0x30b918, Func Offset: 0x478
	// Line 1351, Address: 0x30b920, Func Offset: 0x480
	// Line 1352, Address: 0x30b92c, Func Offset: 0x48c
	// Line 1354, Address: 0x30b934, Func Offset: 0x494
	// Line 1356, Address: 0x30b938, Func Offset: 0x498
	// Line 1354, Address: 0x30b93c, Func Offset: 0x49c
	// Line 1356, Address: 0x30b944, Func Offset: 0x4a4
	// Line 1357, Address: 0x30b94c, Func Offset: 0x4ac
	// Line 1358, Address: 0x30b954, Func Offset: 0x4b4
	// Line 1359, Address: 0x30b95c, Func Offset: 0x4bc
	// Line 1360, Address: 0x30b968, Func Offset: 0x4c8
	// Line 1363, Address: 0x30b970, Func Offset: 0x4d0
	// Line 1365, Address: 0x30b974, Func Offset: 0x4d4
	// Line 1367, Address: 0x30b978, Func Offset: 0x4d8
	// Line 1370, Address: 0x30b980, Func Offset: 0x4e0
	// Line 1371, Address: 0x30b984, Func Offset: 0x4e4
	// Line 1370, Address: 0x30b98c, Func Offset: 0x4ec
	// Line 1371, Address: 0x30b990, Func Offset: 0x4f0
	// Line 1373, Address: 0x30b9a0, Func Offset: 0x500
	// Line 1375, Address: 0x30b9a8, Func Offset: 0x508
	// Line 1380, Address: 0x30b9ac, Func Offset: 0x50c
	// Line 1376, Address: 0x30b9b0, Func Offset: 0x510
	// Line 1377, Address: 0x30b9b4, Func Offset: 0x514
	// Line 1378, Address: 0x30b9b8, Func Offset: 0x518
	// Line 1379, Address: 0x30b9c4, Func Offset: 0x524
	// Line 1381, Address: 0x30b9cc, Func Offset: 0x52c
	// Line 1384, Address: 0x30b9d4, Func Offset: 0x534
	// Line 1385, Address: 0x30b9e0, Func Offset: 0x540
	// Line 1387, Address: 0x30b9e8, Func Offset: 0x548
	// Line 1389, Address: 0x30b9ec, Func Offset: 0x54c
	// Line 1387, Address: 0x30b9f0, Func Offset: 0x550
	// Line 1389, Address: 0x30b9f8, Func Offset: 0x558
	// Line 1390, Address: 0x30ba00, Func Offset: 0x560
	// Line 1391, Address: 0x30ba08, Func Offset: 0x568
	// Line 1394, Address: 0x30ba10, Func Offset: 0x570
	// Line 1399, Address: 0x30ba14, Func Offset: 0x574
	// Line 1395, Address: 0x30ba18, Func Offset: 0x578
	// Line 1396, Address: 0x30ba1c, Func Offset: 0x57c
	// Line 1397, Address: 0x30ba20, Func Offset: 0x580
	// Line 1398, Address: 0x30ba2c, Func Offset: 0x58c
	// Line 1399, Address: 0x30ba34, Func Offset: 0x594
	// Line 1403, Address: 0x30ba38, Func Offset: 0x598
	// Func End, Address: 0x30ba4c, Func Offset: 0x5ac
}

// zPlatFM_Update__FP9zPlatformP6xScenef
// Start address: 0x30ba50
void zPlatFM_Update(zPlatform* plat, float32 dt)
{
	int32 i;
	zPlatFMRunTime* fmrt;
	float32 tm;
	float32 ttm;
	float32 atm;
	float32 dtm;
	float32 vm;
	float32 ds;
	float32 etm;
	float32 p;
	float32 p;
	float32 p;
	float32 p;
	float32 p;
	xMat4x3* pmat;
	xVec3 undoScale;
	xMat3x3 preR;
	xMat3x3 preR;
	xMat3x3 preR;
	xMat3x3 postR;
	xMat3x3 postR;
	xMat3x3 postR;
	float32 scale_adjust;
	float32 len2;
	float32 len_inv;
	float32 len2;
	float32 len_inv;
	float32 rdotu;
	float32 len2;
	float32 len_inv;
	// Line 856, Address: 0x30ba50, Func Offset: 0
	// Line 858, Address: 0x30ba7c, Func Offset: 0x2c
	// Line 856, Address: 0x30ba80, Func Offset: 0x30
	// Line 859, Address: 0x30baa0, Func Offset: 0x50
	// Line 862, Address: 0x30baa4, Func Offset: 0x54
	// Line 859, Address: 0x30baa8, Func Offset: 0x58
	// Line 860, Address: 0x30baac, Func Offset: 0x5c
	// Line 862, Address: 0x30bab0, Func Offset: 0x60
	// Line 863, Address: 0x30babc, Func Offset: 0x6c
	// Line 864, Address: 0x30bac4, Func Offset: 0x74
	// Line 865, Address: 0x30bad4, Func Offset: 0x84
	// Line 866, Address: 0x30badc, Func Offset: 0x8c
	// Line 928, Address: 0x30bae4, Func Offset: 0x94
	// Line 930, Address: 0x30baf0, Func Offset: 0xa0
	// Line 932, Address: 0x30bafc, Func Offset: 0xac
	// Line 1002, Address: 0x30bb08, Func Offset: 0xb8
	// Line 1004, Address: 0x30bb1c, Func Offset: 0xcc
	// Line 1014, Address: 0x30bb24, Func Offset: 0xd4
	// Line 1016, Address: 0x30bb34, Func Offset: 0xe4
	// Line 1019, Address: 0x30bb40, Func Offset: 0xf0
	// Line 1020, Address: 0x30bb5c, Func Offset: 0x10c
	// Line 1023, Address: 0x30bb68, Func Offset: 0x118
	// Line 1025, Address: 0x30bb7c, Func Offset: 0x12c
	// Line 1027, Address: 0x30bb88, Func Offset: 0x138
	// Line 1029, Address: 0x30bb94, Func Offset: 0x144
	// Line 1031, Address: 0x30bba0, Func Offset: 0x150
	// Line 1047, Address: 0x30bbac, Func Offset: 0x15c
	// Line 1067, Address: 0x30bbd0, Func Offset: 0x180
	// Line 1066, Address: 0x30bbd4, Func Offset: 0x184
	// Line 1067, Address: 0x30bbd8, Func Offset: 0x188
	// Line 1073, Address: 0x30bbe4, Func Offset: 0x194
	// Line 1077, Address: 0x30bbec, Func Offset: 0x19c
	// Line 1081, Address: 0x30bbf8, Func Offset: 0x1a8
	// Line 1085, Address: 0x30bc00, Func Offset: 0x1b0
	// Line 1088, Address: 0x30bc0c, Func Offset: 0x1bc
	// Line 1091, Address: 0x30bc14, Func Offset: 0x1c4
	// Line 1094, Address: 0x30bc20, Func Offset: 0x1d0
	// Line 1099, Address: 0x30bc28, Func Offset: 0x1d8
	// Line 1104, Address: 0x30bc34, Func Offset: 0x1e4
	// Line 1109, Address: 0x30bc3c, Func Offset: 0x1ec
	// Line 1114, Address: 0x30bc48, Func Offset: 0x1f8
	// Line 1119, Address: 0x30bc50, Func Offset: 0x200
	// Line 1123, Address: 0x30bc5c, Func Offset: 0x20c
	// Line 1127, Address: 0x30bc74, Func Offset: 0x224
	// Line 1125, Address: 0x30bc80, Func Offset: 0x230
	// Line 1127, Address: 0x30bc88, Func Offset: 0x238
	// Line 1128, Address: 0x30bcb0, Func Offset: 0x260
	// Line 1129, Address: 0x30bcdc, Func Offset: 0x28c
	// Line 1130, Address: 0x30bd00, Func Offset: 0x2b0
	// Line 1131, Address: 0x30bd2c, Func Offset: 0x2dc
	// Line 1132, Address: 0x30bd54, Func Offset: 0x304
	// Line 1136, Address: 0x30bd78, Func Offset: 0x328
	// Line 1137, Address: 0x30bd7c, Func Offset: 0x32c
	// Line 1136, Address: 0x30bd80, Func Offset: 0x330
	// Line 1137, Address: 0x30bd84, Func Offset: 0x334
	// Line 1138, Address: 0x30bd94, Func Offset: 0x344
	// Line 1137, Address: 0x30bd98, Func Offset: 0x348
	// Line 1138, Address: 0x30bda0, Func Offset: 0x350
	// Line 1139, Address: 0x30bdc0, Func Offset: 0x370
	// Line 1140, Address: 0x30bde4, Func Offset: 0x394
	// Line 1143, Address: 0x30be08, Func Offset: 0x3b8
	// Line 1144, Address: 0x30bf5c, Func Offset: 0x50c
	// Line 1146, Address: 0x30c090, Func Offset: 0x640
	// Line 1144, Address: 0x30c094, Func Offset: 0x644
	// Line 1146, Address: 0x30c0a0, Func Offset: 0x650
	// Line 1147, Address: 0x30c124, Func Offset: 0x6d4
	// Line 1148, Address: 0x30c258, Func Offset: 0x808
	// Line 1147, Address: 0x30c25c, Func Offset: 0x80c
	// Line 1148, Address: 0x30c268, Func Offset: 0x818
	// Line 1151, Address: 0x30c2f0, Func Offset: 0x8a0
	// Line 1149, Address: 0x30c2f4, Func Offset: 0x8a4
	// Line 1148, Address: 0x30c2fc, Func Offset: 0x8ac
	// Line 1149, Address: 0x30c300, Func Offset: 0x8b0
	// Line 1151, Address: 0x30c314, Func Offset: 0x8c4
	// Line 1149, Address: 0x30c318, Func Offset: 0x8c8
	// Line 1151, Address: 0x30c31c, Func Offset: 0x8cc
	// Line 1149, Address: 0x30c320, Func Offset: 0x8d0
	// Line 1151, Address: 0x30c324, Func Offset: 0x8d4
	// Line 1150, Address: 0x30c328, Func Offset: 0x8d8
	// Line 1149, Address: 0x30c32c, Func Offset: 0x8dc
	// Line 1150, Address: 0x30c330, Func Offset: 0x8e0
	// Line 1151, Address: 0x30c340, Func Offset: 0x8f0
	// Line 1150, Address: 0x30c348, Func Offset: 0x8f8
	// Line 1151, Address: 0x30c374, Func Offset: 0x924
	// Line 1167, Address: 0x30c3e0, Func Offset: 0x990
	// Line 1153, Address: 0x30c3e4, Func Offset: 0x994
	// Line 1167, Address: 0x30c3e8, Func Offset: 0x998
	// Line 1153, Address: 0x30c3ec, Func Offset: 0x99c
	// Line 1167, Address: 0x30c3f0, Func Offset: 0x9a0
	// Line 1153, Address: 0x30c3f4, Func Offset: 0x9a4
	// Line 1175, Address: 0x30c3f8, Func Offset: 0x9a8
	// Line 1153, Address: 0x30c3fc, Func Offset: 0x9ac
	// Line 1175, Address: 0x30c400, Func Offset: 0x9b0
	// Line 1153, Address: 0x30c418, Func Offset: 0x9c8
	// Line 1155, Address: 0x30c45c, Func Offset: 0xa0c
	// Line 1156, Address: 0x30c480, Func Offset: 0xa30
	// Line 1157, Address: 0x30c4a4, Func Offset: 0xa54
	// Line 1159, Address: 0x30c4c8, Func Offset: 0xa78
	// Line 1167, Address: 0x30c4cc, Func Offset: 0xa7c
	// Line 1168, Address: 0x30c4d8, Func Offset: 0xa88
	// Line 1170, Address: 0x30c4dc, Func Offset: 0xa8c
	// Line 1169, Address: 0x30c4e0, Func Offset: 0xa90
	// Line 1170, Address: 0x30c4e4, Func Offset: 0xa94
	// Line 1171, Address: 0x30c4e8, Func Offset: 0xa98
	// Line 1175, Address: 0x30c4f0, Func Offset: 0xaa0
	// Line 1178, Address: 0x30c4f8, Func Offset: 0xaa8
	// Line 1179, Address: 0x30c508, Func Offset: 0xab8
	// Line 934, Address: 0x30c510, Func Offset: 0xac0
	// Line 1179, Address: 0x30c514, Func Offset: 0xac4
	// Line 936, Address: 0x30c51c, Func Offset: 0xacc
	// Line 1179, Address: 0x30c520, Func Offset: 0xad0
	// Line 938, Address: 0x30c528, Func Offset: 0xad8
	// Line 1179, Address: 0x30c52c, Func Offset: 0xadc
	// Line 960, Address: 0x30c534, Func Offset: 0xae4
	// Line 963, Address: 0x30c574, Func Offset: 0xb24
	// Line 971, Address: 0x30c580, Func Offset: 0xb30
	// Line 966, Address: 0x30c584, Func Offset: 0xb34
	// Line 971, Address: 0x30c588, Func Offset: 0xb38
	// Line 974, Address: 0x30c5ac, Func Offset: 0xb5c
	// Line 948, Address: 0x30c5b8, Func Offset: 0xb68
	// Line 941, Address: 0x30c5bc, Func Offset: 0xb6c
	// Line 948, Address: 0x30c5c0, Func Offset: 0xb70
	// Line 950, Address: 0x30c5e4, Func Offset: 0xb94
	// Line 974, Address: 0x30c5ec, Func Offset: 0xb9c
	// Line 977, Address: 0x30c5f0, Func Offset: 0xba0
	// Line 1179, Address: 0x30c5f4, Func Offset: 0xba4
	// Line 995, Address: 0x30c5fc, Func Offset: 0xbac
	// Line 999, Address: 0x30c624, Func Offset: 0xbd4
	// Line 985, Address: 0x30c630, Func Offset: 0xbe0
	// Line 980, Address: 0x30c634, Func Offset: 0xbe4
	// Line 985, Address: 0x30c638, Func Offset: 0xbe8
	// Line 987, Address: 0x30c65c, Func Offset: 0xc0c
	// Line 1004, Address: 0x30c664, Func Offset: 0xc14
	// Line 1006, Address: 0x30c668, Func Offset: 0xc18
	// Line 1179, Address: 0x30c670, Func Offset: 0xc20
	// Line 1008, Address: 0x30c678, Func Offset: 0xc28
	// Line 1009, Address: 0x30c694, Func Offset: 0xc44
	// Line 1011, Address: 0x30c6a0, Func Offset: 0xc50
	// Line 1014, Address: 0x30c6b4, Func Offset: 0xc64
	// Line 1038, Address: 0x30c6c0, Func Offset: 0xc70
	// Line 1040, Address: 0x30c6d4, Func Offset: 0xc84
	// Line 1050, Address: 0x30c6dc, Func Offset: 0xc8c
	// Line 1054, Address: 0x30c6e0, Func Offset: 0xc90
	// Line 1056, Address: 0x30c6e8, Func Offset: 0xc98
	// Line 1179, Address: 0x30c6f0, Func Offset: 0xca0
	// Line 1059, Address: 0x30c6f8, Func Offset: 0xca8
	// Line 1074, Address: 0x30c708, Func Offset: 0xcb8
	// Line 1179, Address: 0x30c70c, Func Offset: 0xcbc
	// Line 1074, Address: 0x30c71c, Func Offset: 0xccc
	// Line 1179, Address: 0x30c720, Func Offset: 0xcd0
	// Line 1074, Address: 0x30c724, Func Offset: 0xcd4
	// Line 1179, Address: 0x30c728, Func Offset: 0xcd8
	// Line 1074, Address: 0x30c72c, Func Offset: 0xcdc
	// Line 1179, Address: 0x30c734, Func Offset: 0xce4
	// Line 1074, Address: 0x30c73c, Func Offset: 0xcec
	// Line 1179, Address: 0x30c740, Func Offset: 0xcf0
	// Line 1074, Address: 0x30c74c, Func Offset: 0xcfc
	// Line 1179, Address: 0x30c750, Func Offset: 0xd00
	// Line 1074, Address: 0x30c75c, Func Offset: 0xd0c
	// Line 1179, Address: 0x30c760, Func Offset: 0xd10
	// Line 1074, Address: 0x30c768, Func Offset: 0xd18
	// Line 1179, Address: 0x30c76c, Func Offset: 0xd1c
	// Line 1075, Address: 0x30c7d4, Func Offset: 0xd84
	// Line 1179, Address: 0x30c7d8, Func Offset: 0xd88
	// Line 1075, Address: 0x30c7e8, Func Offset: 0xd98
	// Line 1179, Address: 0x30c7ec, Func Offset: 0xd9c
	// Line 1075, Address: 0x30c7f0, Func Offset: 0xda0
	// Line 1179, Address: 0x30c7f4, Func Offset: 0xda4
	// Line 1075, Address: 0x30c818, Func Offset: 0xdc8
	// Line 1179, Address: 0x30c81c, Func Offset: 0xdcc
	// Line 1075, Address: 0x30c824, Func Offset: 0xdd4
	// Line 1179, Address: 0x30c828, Func Offset: 0xdd8
	// Line 1075, Address: 0x30c830, Func Offset: 0xde0
	// Line 1077, Address: 0x30c834, Func Offset: 0xde4
	// Line 1078, Address: 0x30c840, Func Offset: 0xdf0
	// Line 1179, Address: 0x30c844, Func Offset: 0xdf4
	// Line 1078, Address: 0x30c854, Func Offset: 0xe04
	// Line 1179, Address: 0x30c858, Func Offset: 0xe08
	// Line 1078, Address: 0x30c85c, Func Offset: 0xe0c
	// Line 1179, Address: 0x30c860, Func Offset: 0xe10
	// Line 1078, Address: 0x30c864, Func Offset: 0xe14
	// Line 1179, Address: 0x30c86c, Func Offset: 0xe1c
	// Line 1078, Address: 0x30c874, Func Offset: 0xe24
	// Line 1179, Address: 0x30c878, Func Offset: 0xe28
	// Line 1078, Address: 0x30c884, Func Offset: 0xe34
	// Line 1179, Address: 0x30c888, Func Offset: 0xe38
	// Line 1078, Address: 0x30c894, Func Offset: 0xe44
	// Line 1179, Address: 0x30c898, Func Offset: 0xe48
	// Line 1078, Address: 0x30c8a0, Func Offset: 0xe50
	// Line 1179, Address: 0x30c8a4, Func Offset: 0xe54
	// Line 1079, Address: 0x30c90c, Func Offset: 0xebc
	// Line 1179, Address: 0x30c910, Func Offset: 0xec0
	// Line 1079, Address: 0x30c920, Func Offset: 0xed0
	// Line 1179, Address: 0x30c924, Func Offset: 0xed4
	// Line 1079, Address: 0x30c928, Func Offset: 0xed8
	// Line 1179, Address: 0x30c92c, Func Offset: 0xedc
	// Line 1079, Address: 0x30c950, Func Offset: 0xf00
	// Line 1179, Address: 0x30c954, Func Offset: 0xf04
	// Line 1079, Address: 0x30c95c, Func Offset: 0xf0c
	// Line 1179, Address: 0x30c960, Func Offset: 0xf10
	// Line 1079, Address: 0x30c968, Func Offset: 0xf18
	// Line 1081, Address: 0x30c96c, Func Offset: 0xf1c
	// Line 1082, Address: 0x30c978, Func Offset: 0xf28
	// Line 1179, Address: 0x30c97c, Func Offset: 0xf2c
	// Line 1082, Address: 0x30c98c, Func Offset: 0xf3c
	// Line 1179, Address: 0x30c990, Func Offset: 0xf40
	// Line 1082, Address: 0x30c994, Func Offset: 0xf44
	// Line 1179, Address: 0x30c998, Func Offset: 0xf48
	// Line 1082, Address: 0x30c99c, Func Offset: 0xf4c
	// Line 1179, Address: 0x30c9a4, Func Offset: 0xf54
	// Line 1082, Address: 0x30c9ac, Func Offset: 0xf5c
	// Line 1179, Address: 0x30c9b0, Func Offset: 0xf60
	// Line 1082, Address: 0x30c9bc, Func Offset: 0xf6c
	// Line 1179, Address: 0x30c9c0, Func Offset: 0xf70
	// Line 1082, Address: 0x30c9cc, Func Offset: 0xf7c
	// Line 1179, Address: 0x30c9d0, Func Offset: 0xf80
	// Line 1082, Address: 0x30c9d8, Func Offset: 0xf88
	// Line 1179, Address: 0x30c9dc, Func Offset: 0xf8c
	// Line 1083, Address: 0x30ca44, Func Offset: 0xff4
	// Line 1179, Address: 0x30ca48, Func Offset: 0xff8
	// Line 1083, Address: 0x30ca58, Func Offset: 0x1008
	// Line 1179, Address: 0x30ca5c, Func Offset: 0x100c
	// Line 1083, Address: 0x30ca60, Func Offset: 0x1010
	// Line 1179, Address: 0x30ca64, Func Offset: 0x1014
	// Line 1083, Address: 0x30ca88, Func Offset: 0x1038
	// Line 1179, Address: 0x30ca8c, Func Offset: 0x103c
	// Line 1083, Address: 0x30ca94, Func Offset: 0x1044
	// Line 1179, Address: 0x30ca98, Func Offset: 0x1048
	// Line 1083, Address: 0x30caa0, Func Offset: 0x1050
	// Line 1085, Address: 0x30caa4, Func Offset: 0x1054
	// Line 1179, Address: 0x30cab0, Func Offset: 0x1060
	// Line 1086, Address: 0x30cab4, Func Offset: 0x1064
	// Line 1088, Address: 0x30cab8, Func Offset: 0x1068
	// Line 1179, Address: 0x30cac0, Func Offset: 0x1070
	// Line 1089, Address: 0x30cac4, Func Offset: 0x1074
	// Line 1091, Address: 0x30cac8, Func Offset: 0x1078
	// Line 1179, Address: 0x30cad0, Func Offset: 0x1080
	// Line 1092, Address: 0x30cad4, Func Offset: 0x1084
	// Line 1094, Address: 0x30cad8, Func Offset: 0x1088
	// Line 1179, Address: 0x30cae0, Func Offset: 0x1090
	// Line 1097, Address: 0x30cae8, Func Offset: 0x1098
	// Line 1179, Address: 0x30caec, Func Offset: 0x109c
	// Line 1099, Address: 0x30caf8, Func Offset: 0x10a8
	// Line 1179, Address: 0x30cb00, Func Offset: 0x10b0
	// Line 1102, Address: 0x30cb08, Func Offset: 0x10b8
	// Line 1179, Address: 0x30cb0c, Func Offset: 0x10bc
	// Line 1104, Address: 0x30cb18, Func Offset: 0x10c8
	// Line 1179, Address: 0x30cb20, Func Offset: 0x10d0
	// Line 1107, Address: 0x30cb28, Func Offset: 0x10d8
	// Line 1179, Address: 0x30cb2c, Func Offset: 0x10dc
	// Line 1109, Address: 0x30cb38, Func Offset: 0x10e8
	// Line 1179, Address: 0x30cb40, Func Offset: 0x10f0
	// Line 1112, Address: 0x30cb48, Func Offset: 0x10f8
	// Line 1179, Address: 0x30cb50, Func Offset: 0x1100
	// Line 1114, Address: 0x30cb58, Func Offset: 0x1108
	// Line 1179, Address: 0x30cb60, Func Offset: 0x1110
	// Line 1117, Address: 0x30cb68, Func Offset: 0x1118
	// Line 1179, Address: 0x30cb70, Func Offset: 0x1120
	// Line 1119, Address: 0x30cb78, Func Offset: 0x1128
	// Line 1179, Address: 0x30cb80, Func Offset: 0x1130
	// Line 1122, Address: 0x30cb88, Func Offset: 0x1138
	// Line 1179, Address: 0x30cb90, Func Offset: 0x1140
	// Line 1123, Address: 0x30cb98, Func Offset: 0x1148
	// Line 1179, Address: 0x30cba0, Func Offset: 0x1150
	// Line 1146, Address: 0x30cbb0, Func Offset: 0x1160
	// Line 1179, Address: 0x30cbb8, Func Offset: 0x1168
	// Line 1148, Address: 0x30cbc8, Func Offset: 0x1178
	// Line 1179, Address: 0x30cbd0, Func Offset: 0x1180
	// Line 1151, Address: 0x30cbe0, Func Offset: 0x1190
	// Line 1179, Address: 0x30cbe8, Func Offset: 0x1198
	// Func End, Address: 0x30cc20, Func Offset: 0x11d0
}

// zPlatform_PaddleCollide__FP7xCollisPC5xVec3PC5xVec3Ui
// Start address: 0x30cc20
uint32 zPlatform_PaddleCollide(xCollis* coll, xVec3* hitsource, xVec3* hitvel, uint32 worldSpaceNorm)
{
	zPlatform* plat;
	xVec3 locnorm;
	xVec3 lochitsrc;
	xVec3 lochitvel;
	float32 hitdot;
	xVec3 hitsrcbot;
	xVec3 hitsrctop;
	xRay3 hitsrcray;
	xCollis hitsrccoll;
	int32 posX;
	int32 posZ;
	int32 direction;
	int32 stutter;
	// Line 728, Address: 0x30cc20, Func Offset: 0
	// Line 730, Address: 0x30cc40, Func Offset: 0x20
	// Line 736, Address: 0x30cc44, Func Offset: 0x24
	// Line 737, Address: 0x30cc50, Func Offset: 0x30
	// Line 744, Address: 0x30cc58, Func Offset: 0x38
	// Line 746, Address: 0x30cc60, Func Offset: 0x40
	// Line 747, Address: 0x30cc74, Func Offset: 0x54
	// Line 749, Address: 0x30cc7c, Func Offset: 0x5c
	// Line 751, Address: 0x30cc94, Func Offset: 0x74
	// Line 752, Address: 0x30cce0, Func Offset: 0xc0
	// Line 768, Address: 0x30ccf4, Func Offset: 0xd4
	// Line 769, Address: 0x30cd00, Func Offset: 0xe0
	// Line 783, Address: 0x30cd10, Func Offset: 0xf0
	// Line 784, Address: 0x30cd20, Func Offset: 0x100
	// Line 787, Address: 0x30cd24, Func Offset: 0x104
	// Line 770, Address: 0x30cd28, Func Offset: 0x108
	// Line 783, Address: 0x30cd2c, Func Offset: 0x10c
	// Line 784, Address: 0x30cd30, Func Offset: 0x110
	// Line 787, Address: 0x30cd34, Func Offset: 0x114
	// Line 785, Address: 0x30cd38, Func Offset: 0x118
	// Line 787, Address: 0x30cd3c, Func Offset: 0x11c
	// Line 786, Address: 0x30cd40, Func Offset: 0x120
	// Line 783, Address: 0x30cd44, Func Offset: 0x124
	// Line 784, Address: 0x30cd48, Func Offset: 0x128
	// Line 785, Address: 0x30cd4c, Func Offset: 0x12c
	// Line 786, Address: 0x30cd50, Func Offset: 0x130
	// Line 783, Address: 0x30cd54, Func Offset: 0x134
	// Line 784, Address: 0x30cd58, Func Offset: 0x138
	// Line 787, Address: 0x30cd5c, Func Offset: 0x13c
	// Line 788, Address: 0x30cdac, Func Offset: 0x18c
	// Line 789, Address: 0x30ce08, Func Offset: 0x1e8
	// Line 790, Address: 0x30ce10, Func Offset: 0x1f0
	// Line 791, Address: 0x30ce18, Func Offset: 0x1f8
	// Line 795, Address: 0x30ce1c, Func Offset: 0x1fc
	// Line 794, Address: 0x30ce20, Func Offset: 0x200
	// Line 793, Address: 0x30ce24, Func Offset: 0x204
	// Line 792, Address: 0x30ce28, Func Offset: 0x208
	// Line 789, Address: 0x30ce2c, Func Offset: 0x20c
	// Line 790, Address: 0x30ce30, Func Offset: 0x210
	// Line 791, Address: 0x30ce34, Func Offset: 0x214
	// Line 794, Address: 0x30ce38, Func Offset: 0x218
	// Line 791, Address: 0x30ce3c, Func Offset: 0x21c
	// Line 796, Address: 0x30ce40, Func Offset: 0x220
	// Line 793, Address: 0x30ce44, Func Offset: 0x224
	// Line 792, Address: 0x30ce48, Func Offset: 0x228
	// Line 793, Address: 0x30ce4c, Func Offset: 0x22c
	// Line 792, Address: 0x30ce50, Func Offset: 0x230
	// Line 796, Address: 0x30ce54, Func Offset: 0x234
	// Line 797, Address: 0x30ce5c, Func Offset: 0x23c
	// Line 798, Address: 0x30ce60, Func Offset: 0x240
	// Line 796, Address: 0x30ce64, Func Offset: 0x244
	// Line 797, Address: 0x30ce68, Func Offset: 0x248
	// Line 798, Address: 0x30ce6c, Func Offset: 0x24c
	// Line 799, Address: 0x30ce78, Func Offset: 0x258
	// Line 800, Address: 0x30ce88, Func Offset: 0x268
	// Line 805, Address: 0x30ce90, Func Offset: 0x270
	// Line 808, Address: 0x30ceac, Func Offset: 0x28c
	// Line 809, Address: 0x30cec8, Func Offset: 0x2a8
	// Line 808, Address: 0x30cecc, Func Offset: 0x2ac
	// Line 809, Address: 0x30ced0, Func Offset: 0x2b0
	// Line 810, Address: 0x30ceec, Func Offset: 0x2cc
	// Line 812, Address: 0x30cef8, Func Offset: 0x2d8
	// Line 816, Address: 0x30cf00, Func Offset: 0x2e0
	// Line 818, Address: 0x30cf08, Func Offset: 0x2e8
	// Line 819, Address: 0x30cf24, Func Offset: 0x304
	// Line 818, Address: 0x30cf28, Func Offset: 0x308
	// Line 819, Address: 0x30cf2c, Func Offset: 0x30c
	// Line 820, Address: 0x30cf48, Func Offset: 0x328
	// Line 821, Address: 0x30cf54, Func Offset: 0x334
	// Line 829, Address: 0x30cf58, Func Offset: 0x338
	// Line 830, Address: 0x30cf6c, Func Offset: 0x34c
	// Line 833, Address: 0x30cf94, Func Offset: 0x374
	// Line 836, Address: 0x30cf98, Func Offset: 0x378
	// Line 837, Address: 0x30cfac, Func Offset: 0x38c
	// Line 840, Address: 0x30cfcc, Func Offset: 0x3ac
	// Line 845, Address: 0x30cfd0, Func Offset: 0x3b0
	// Line 846, Address: 0x30cfd8, Func Offset: 0x3b8
	// Line 847, Address: 0x30d00c, Func Offset: 0x3ec
	// Line 851, Address: 0x30d02c, Func Offset: 0x40c
	// Line 852, Address: 0x30d03c, Func Offset: 0x41c
	// Line 853, Address: 0x30d040, Func Offset: 0x420
	// Func End, Address: 0x30d060, Func Offset: 0x440
}

// zPlatform_PaddleStartRotate__FP4xEntii
// Start address: 0x30d060
void zPlatform_PaddleStartRotate(xEnt* entplat, int32 direction, int32 stutter)
{
	zPlatform* plat;
	float32 time[3];
	// Line 696, Address: 0x30d060, Func Offset: 0
	// Line 702, Address: 0x30d06c, Func Offset: 0xc
	// Line 703, Address: 0x30d074, Func Offset: 0x14
	// Line 705, Address: 0x30d07c, Func Offset: 0x1c
	// Line 709, Address: 0x30d084, Func Offset: 0x24
	// Line 710, Address: 0x30d08c, Func Offset: 0x2c
	// Line 711, Address: 0x30d090, Func Offset: 0x30
	// Line 712, Address: 0x30d09c, Func Offset: 0x3c
	// Line 713, Address: 0x30d0b4, Func Offset: 0x54
	// Line 723, Address: 0x30d0b8, Func Offset: 0x58
	// Line 724, Address: 0x30d0cc, Func Offset: 0x6c
	// Line 725, Address: 0x30d0e0, Func Offset: 0x80
	// Line 706, Address: 0x30d0f0, Func Offset: 0x90
	// Line 708, Address: 0x30d0f4, Func Offset: 0x94
	// Line 725, Address: 0x30d0fc, Func Offset: 0x9c
	// Func End, Address: 0x30d144, Func Offset: 0xe4
}

// SolvePaddleMotion__FP9zPlatformPff
// Start address: 0x30d150
float32 SolvePaddleMotion(zPlatform* plat, float32* time, float32 tmr)
{
	xPlatformPaddleData* paddle;
	float32 destOrient;
	float32 srcOrient;
	float32 stutterAmount;
	float32 A;
	float32 D;
	float32 distA;
	float32 distC;
	float32 distD;
	float32 lerp;
	float32 ttot;
	// Line 552, Address: 0x30d150, Func Offset: 0
	// Line 557, Address: 0x30d154, Func Offset: 0x4
	// Line 552, Address: 0x30d158, Func Offset: 0x8
	// Line 553, Address: 0x30d15c, Func Offset: 0xc
	// Line 552, Address: 0x30d160, Func Offset: 0x10
	// Line 553, Address: 0x30d168, Func Offset: 0x18
	// Line 557, Address: 0x30d16c, Func Offset: 0x1c
	// Line 564, Address: 0x30d180, Func Offset: 0x30
	// Line 573, Address: 0x30d198, Func Offset: 0x48
	// Line 561, Address: 0x30d1b0, Func Offset: 0x60
	// Line 562, Address: 0x30d1b8, Func Offset: 0x68
	// Line 573, Address: 0x30d1bc, Func Offset: 0x6c
	// Line 580, Address: 0x30d1c4, Func Offset: 0x74
	// Line 603, Address: 0x30d1d4, Func Offset: 0x84
	// Line 604, Address: 0x30d1e4, Func Offset: 0x94
	// Line 626, Address: 0x30d1f0, Func Offset: 0xa0
	// Line 641, Address: 0x30d208, Func Offset: 0xb8
	// Line 644, Address: 0x30d214, Func Offset: 0xc4
	// Line 646, Address: 0x30d218, Func Offset: 0xc8
	// Line 644, Address: 0x30d228, Func Offset: 0xd8
	// Line 646, Address: 0x30d22c, Func Offset: 0xdc
	// Line 645, Address: 0x30d234, Func Offset: 0xe4
	// Line 646, Address: 0x30d238, Func Offset: 0xe8
	// Line 647, Address: 0x30d240, Func Offset: 0xf0
	// Line 649, Address: 0x30d250, Func Offset: 0x100
	// Line 650, Address: 0x30d25c, Func Offset: 0x10c
	// Line 651, Address: 0x30d270, Func Offset: 0x120
	// Line 652, Address: 0x30d274, Func Offset: 0x124
	// Line 653, Address: 0x30d27c, Func Offset: 0x12c
	// Line 666, Address: 0x30d284, Func Offset: 0x134
	// Line 670, Address: 0x30d29c, Func Offset: 0x14c
	// Line 672, Address: 0x30d2b4, Func Offset: 0x164
	// Line 673, Address: 0x30d2dc, Func Offset: 0x18c
	// Line 674, Address: 0x30d2ec, Func Offset: 0x19c
	// Line 675, Address: 0x30d2f4, Func Offset: 0x1a4
	// Line 676, Address: 0x30d2f8, Func Offset: 0x1a8
	// Line 677, Address: 0x30d308, Func Offset: 0x1b8
	// Line 688, Address: 0x30d33c, Func Offset: 0x1ec
	// Line 568, Address: 0x30d35c, Func Offset: 0x20c
	// Line 688, Address: 0x30d364, Func Offset: 0x214
	// Line 569, Address: 0x30d368, Func Offset: 0x218
	// Line 570, Address: 0x30d370, Func Offset: 0x220
	// Line 572, Address: 0x30d374, Func Offset: 0x224
	// Line 585, Address: 0x30d37c, Func Offset: 0x22c
	// Line 586, Address: 0x30d380, Func Offset: 0x230
	// Line 688, Address: 0x30d388, Func Offset: 0x238
	// Line 588, Address: 0x30d38c, Func Offset: 0x23c
	// Line 688, Address: 0x30d390, Func Offset: 0x240
	// Line 586, Address: 0x30d394, Func Offset: 0x244
	// Line 688, Address: 0x30d398, Func Offset: 0x248
	// Line 589, Address: 0x30d3a0, Func Offset: 0x250
	// Line 688, Address: 0x30d3b4, Func Offset: 0x264
	// Line 594, Address: 0x30d3c4, Func Offset: 0x274
	// Line 596, Address: 0x30d3c8, Func Offset: 0x278
	// Line 592, Address: 0x30d3d0, Func Offset: 0x280
	// Line 593, Address: 0x30d3dc, Func Offset: 0x28c
	// Line 688, Address: 0x30d3e0, Func Offset: 0x290
	// Line 604, Address: 0x30d3f4, Func Offset: 0x2a4
	// Line 688, Address: 0x30d3f8, Func Offset: 0x2a8
	// Line 613, Address: 0x30d404, Func Offset: 0x2b4
	// Line 611, Address: 0x30d40c, Func Offset: 0x2bc
	// Line 612, Address: 0x30d410, Func Offset: 0x2c0
	// Line 613, Address: 0x30d414, Func Offset: 0x2c4
	// Line 688, Address: 0x30d42c, Func Offset: 0x2dc
	// Line 614, Address: 0x30d43c, Func Offset: 0x2ec
	// Line 688, Address: 0x30d440, Func Offset: 0x2f0
	// Line 616, Address: 0x30d450, Func Offset: 0x300
	// Line 617, Address: 0x30d460, Func Offset: 0x310
	// Line 688, Address: 0x30d468, Func Offset: 0x318
	// Line 619, Address: 0x30d47c, Func Offset: 0x32c
	// Line 618, Address: 0x30d480, Func Offset: 0x330
	// Line 620, Address: 0x30d484, Func Offset: 0x334
	// Line 688, Address: 0x30d48c, Func Offset: 0x33c
	// Line 622, Address: 0x30d494, Func Offset: 0x344
	// Line 688, Address: 0x30d498, Func Offset: 0x348
	// Line 626, Address: 0x30d4a0, Func Offset: 0x350
	// Line 688, Address: 0x30d4a8, Func Offset: 0x358
	// Line 630, Address: 0x30d4ac, Func Offset: 0x35c
	// Line 629, Address: 0x30d4bc, Func Offset: 0x36c
	// Line 630, Address: 0x30d4c0, Func Offset: 0x370
	// Line 688, Address: 0x30d4c4, Func Offset: 0x374
	// Line 632, Address: 0x30d4d8, Func Offset: 0x388
	// Line 688, Address: 0x30d4dc, Func Offset: 0x38c
	// Line 634, Address: 0x30d4e4, Func Offset: 0x394
	// Line 688, Address: 0x30d4ec, Func Offset: 0x39c
	// Line 635, Address: 0x30d4f0, Func Offset: 0x3a0
	// Line 636, Address: 0x30d504, Func Offset: 0x3b4
	// Line 688, Address: 0x30d508, Func Offset: 0x3b8
	// Line 638, Address: 0x30d510, Func Offset: 0x3c0
	// Line 641, Address: 0x30d51c, Func Offset: 0x3cc
	// Line 688, Address: 0x30d524, Func Offset: 0x3d4
	// Line 660, Address: 0x30d52c, Func Offset: 0x3dc
	// Line 688, Address: 0x30d534, Func Offset: 0x3e4
	// Line 679, Address: 0x30d540, Func Offset: 0x3f0
	// Line 680, Address: 0x30d564, Func Offset: 0x414
	// Line 688, Address: 0x30d56c, Func Offset: 0x41c
	// Line 683, Address: 0x30d570, Func Offset: 0x420
	// Line 682, Address: 0x30d578, Func Offset: 0x428
	// Line 688, Address: 0x30d57c, Func Offset: 0x42c
	// Line 683, Address: 0x30d580, Func Offset: 0x430
	// Line 691, Address: 0x30d5a0, Func Offset: 0x450
	// Func End, Address: 0x30d5a8, Func Offset: 0x458
}

// zPlatform_Reset__FP9zPlatformP6xScene
// Start address: 0x30d5b0
void zPlatform_Reset(zPlatform* plat, xScene* sc)
{
	RpAtomic* imodel;
	xSurface* surf;
	int32 i;
	// Line 340, Address: 0x30d5b0, Func Offset: 0
	// Line 343, Address: 0x30d5d0, Func Offset: 0x20
	// Line 346, Address: 0x30d5d8, Func Offset: 0x28
	// Line 347, Address: 0x30d5e8, Func Offset: 0x38
	// Line 350, Address: 0x30d5f0, Func Offset: 0x40
	// Line 351, Address: 0x30d604, Func Offset: 0x54
	// Line 353, Address: 0x30d60c, Func Offset: 0x5c
	// Line 355, Address: 0x30d614, Func Offset: 0x64
	// Line 356, Address: 0x30d61c, Func Offset: 0x6c
	// Line 359, Address: 0x30d620, Func Offset: 0x70
	// Line 362, Address: 0x30d634, Func Offset: 0x84
	// Line 363, Address: 0x30d650, Func Offset: 0xa0
	// Line 367, Address: 0x30d654, Func Offset: 0xa4
	// Line 368, Address: 0x30d658, Func Offset: 0xa8
	// Line 372, Address: 0x30d65c, Func Offset: 0xac
	// Line 367, Address: 0x30d660, Func Offset: 0xb0
	// Line 368, Address: 0x30d66c, Func Offset: 0xbc
	// Line 369, Address: 0x30d67c, Func Offset: 0xcc
	// Line 372, Address: 0x30d68c, Func Offset: 0xdc
	// Line 373, Address: 0x30d698, Func Offset: 0xe8
	// Line 374, Address: 0x30d69c, Func Offset: 0xec
	// Line 373, Address: 0x30d6ac, Func Offset: 0xfc
	// Line 374, Address: 0x30d6b0, Func Offset: 0x100
	// Line 375, Address: 0x30d6b8, Func Offset: 0x108
	// Line 376, Address: 0x30d6c0, Func Offset: 0x110
	// Line 382, Address: 0x30d6c8, Func Offset: 0x118
	// Line 384, Address: 0x30d6d4, Func Offset: 0x124
	// Line 385, Address: 0x30d6dc, Func Offset: 0x12c
	// Line 386, Address: 0x30d6e8, Func Offset: 0x138
	// Line 387, Address: 0x30d6f4, Func Offset: 0x144
	// Line 397, Address: 0x30d6fc, Func Offset: 0x14c
	// Line 403, Address: 0x30d70c, Func Offset: 0x15c
	// Line 410, Address: 0x30d714, Func Offset: 0x164
	// Line 413, Address: 0x30d720, Func Offset: 0x170
	// Line 416, Address: 0x30d724, Func Offset: 0x174
	// Line 413, Address: 0x30d728, Func Offset: 0x178
	// Line 416, Address: 0x30d72c, Func Offset: 0x17c
	// Line 422, Address: 0x30d770, Func Offset: 0x1c0
	// Line 429, Address: 0x30d778, Func Offset: 0x1c8
	// Line 425, Address: 0x30d77c, Func Offset: 0x1cc
	// Line 429, Address: 0x30d780, Func Offset: 0x1d0
	// Line 425, Address: 0x30d784, Func Offset: 0x1d4
	// Line 429, Address: 0x30d788, Func Offset: 0x1d8
	// Line 425, Address: 0x30d790, Func Offset: 0x1e0
	// Line 426, Address: 0x30d794, Func Offset: 0x1e4
	// Line 429, Address: 0x30d798, Func Offset: 0x1e8
	// Line 427, Address: 0x30d7a0, Func Offset: 0x1f0
	// Line 428, Address: 0x30d7ac, Func Offset: 0x1fc
	// Line 429, Address: 0x30d7b4, Func Offset: 0x204
	// Line 430, Address: 0x30d7c4, Func Offset: 0x214
	// Line 431, Address: 0x30d7cc, Func Offset: 0x21c
	// Line 434, Address: 0x30d7d4, Func Offset: 0x224
	// Line 435, Address: 0x30d7d8, Func Offset: 0x228
	// Line 438, Address: 0x30d7e0, Func Offset: 0x230
	// Line 439, Address: 0x30d7e8, Func Offset: 0x238
	// Line 441, Address: 0x30d7ec, Func Offset: 0x23c
	// Line 444, Address: 0x30d7f4, Func Offset: 0x244
	// Line 445, Address: 0x30d7f8, Func Offset: 0x248
	// Line 444, Address: 0x30d7fc, Func Offset: 0x24c
	// Line 445, Address: 0x30d804, Func Offset: 0x254
	// Line 446, Address: 0x30d808, Func Offset: 0x258
	// Line 447, Address: 0x30d810, Func Offset: 0x260
	// Line 452, Address: 0x30d81c, Func Offset: 0x26c
	// Line 459, Address: 0x30d820, Func Offset: 0x270
	// Line 452, Address: 0x30d828, Func Offset: 0x278
	// Line 453, Address: 0x30d82c, Func Offset: 0x27c
	// Line 454, Address: 0x30d838, Func Offset: 0x288
	// Line 455, Address: 0x30d844, Func Offset: 0x294
	// Line 456, Address: 0x30d850, Func Offset: 0x2a0
	// Line 457, Address: 0x30d85c, Func Offset: 0x2ac
	// Line 458, Address: 0x30d868, Func Offset: 0x2b8
	// Line 459, Address: 0x30d874, Func Offset: 0x2c4
	// Line 461, Address: 0x30d87c, Func Offset: 0x2cc
	// Line 464, Address: 0x30d880, Func Offset: 0x2d0
	// Line 472, Address: 0x30d890, Func Offset: 0x2e0
	// Line 474, Address: 0x30d8a4, Func Offset: 0x2f4
	// Line 475, Address: 0x30d8ac, Func Offset: 0x2fc
	// Line 482, Address: 0x30d8b0, Func Offset: 0x300
	// Line 483, Address: 0x30d8b8, Func Offset: 0x308
	// Line 485, Address: 0x30d8d0, Func Offset: 0x320
	// Line 488, Address: 0x30d8d4, Func Offset: 0x324
	// Line 485, Address: 0x30d8d8, Func Offset: 0x328
	// Line 488, Address: 0x30d8dc, Func Offset: 0x32c
	// Line 485, Address: 0x30d8e0, Func Offset: 0x330
	// Line 488, Address: 0x30d8e4, Func Offset: 0x334
	// Line 493, Address: 0x30d8f8, Func Offset: 0x348
	// Line 515, Address: 0x30d904, Func Offset: 0x354
	// Line 517, Address: 0x30d908, Func Offset: 0x358
	// Line 515, Address: 0x30d90c, Func Offset: 0x35c
	// Line 517, Address: 0x30d910, Func Offset: 0x360
	// Line 520, Address: 0x30d920, Func Offset: 0x370
	// Line 490, Address: 0x30d948, Func Offset: 0x398
	// Line 520, Address: 0x30d95c, Func Offset: 0x3ac
	// Func End, Address: 0x30d974, Func Offset: 0x3c4
}

// zPlatform_Init__FP9zPlatformP9xEntAsset
// Start address: 0x30d980
void zPlatform_Init(zPlatform* plat, xEntAsset* asset)
{
	xPlatformAsset* plat_asset;
	xEntMotionAsset* ent_motion_asset;
	xAnimFile* spring_file;
	xAnimFile* idle_file;
	uint32 size;
	uint32 newid;
	xDestructibleAsset* destruct;
	// Line 95, Address: 0x30d980, Func Offset: 0
	// Line 104, Address: 0x30d984, Func Offset: 0x4
	// Line 95, Address: 0x30d988, Func Offset: 0x8
	// Line 104, Address: 0x30d98c, Func Offset: 0xc
	// Line 95, Address: 0x30d990, Func Offset: 0x10
	// Line 100, Address: 0x30d998, Func Offset: 0x18
	// Line 95, Address: 0x30d99c, Func Offset: 0x1c
	// Line 101, Address: 0x30d9a8, Func Offset: 0x28
	// Line 104, Address: 0x30d9ac, Func Offset: 0x2c
	// Line 106, Address: 0x30d9b4, Func Offset: 0x34
	// Line 107, Address: 0x30d9b8, Func Offset: 0x38
	// Line 109, Address: 0x30d9c0, Func Offset: 0x40
	// Line 110, Address: 0x30d9cc, Func Offset: 0x4c
	// Line 118, Address: 0x30d9d0, Func Offset: 0x50
	// Line 120, Address: 0x30d9d4, Func Offset: 0x54
	// Line 118, Address: 0x30d9d8, Func Offset: 0x58
	// Line 120, Address: 0x30d9dc, Func Offset: 0x5c
	// Line 118, Address: 0x30d9e0, Func Offset: 0x60
	// Line 121, Address: 0x30d9e4, Func Offset: 0x64
	// Line 120, Address: 0x30d9e8, Func Offset: 0x68
	// Line 121, Address: 0x30d9ec, Func Offset: 0x6c
	// Line 122, Address: 0x30d9f0, Func Offset: 0x70
	// Line 121, Address: 0x30d9f4, Func Offset: 0x74
	// Line 122, Address: 0x30d9f8, Func Offset: 0x78
	// Line 123, Address: 0x30d9fc, Func Offset: 0x7c
	// Line 122, Address: 0x30da00, Func Offset: 0x80
	// Line 123, Address: 0x30da04, Func Offset: 0x84
	// Line 135, Address: 0x30da08, Func Offset: 0x88
	// Line 123, Address: 0x30da0c, Func Offset: 0x8c
	// Line 125, Address: 0x30da10, Func Offset: 0x90
	// Line 126, Address: 0x30da14, Func Offset: 0x94
	// Line 129, Address: 0x30da18, Func Offset: 0x98
	// Line 130, Address: 0x30da1c, Func Offset: 0x9c
	// Line 131, Address: 0x30da20, Func Offset: 0xa0
	// Line 134, Address: 0x30da24, Func Offset: 0xa4
	// Line 135, Address: 0x30da2c, Func Offset: 0xac
	// Line 169, Address: 0x30da34, Func Offset: 0xb4
	// Line 213, Address: 0x30da3c, Func Offset: 0xbc
	// Line 214, Address: 0x30da48, Func Offset: 0xc8
	// Line 217, Address: 0x30da5c, Func Offset: 0xdc
	// Line 219, Address: 0x30da6c, Func Offset: 0xec
	// Line 220, Address: 0x30da78, Func Offset: 0xf8
	// Line 230, Address: 0x30da7c, Func Offset: 0xfc
	// Line 220, Address: 0x30da80, Func Offset: 0x100
	// Line 230, Address: 0x30da84, Func Offset: 0x104
	// Line 234, Address: 0x30da8c, Func Offset: 0x10c
	// Line 236, Address: 0x30da90, Func Offset: 0x110
	// Line 235, Address: 0x30da94, Func Offset: 0x114
	// Line 236, Address: 0x30da98, Func Offset: 0x118
	// Line 237, Address: 0x30daac, Func Offset: 0x12c
	// Line 239, Address: 0x30dab8, Func Offset: 0x138
	// Line 240, Address: 0x30dac0, Func Offset: 0x140
	// Line 242, Address: 0x30dadc, Func Offset: 0x15c
	// Line 244, Address: 0x30dae4, Func Offset: 0x164
	// Line 245, Address: 0x30daec, Func Offset: 0x16c
	// Line 246, Address: 0x30daf8, Func Offset: 0x178
	// Line 250, Address: 0x30db00, Func Offset: 0x180
	// Line 251, Address: 0x30db04, Func Offset: 0x184
	// Line 250, Address: 0x30db08, Func Offset: 0x188
	// Line 251, Address: 0x30db0c, Func Offset: 0x18c
	// Line 254, Address: 0x30db1c, Func Offset: 0x19c
	// Line 141, Address: 0x30db30, Func Offset: 0x1b0
	// Line 254, Address: 0x30db34, Func Offset: 0x1b4
	// Line 169, Address: 0x30db6c, Func Offset: 0x1ec
	// Line 254, Address: 0x30db74, Func Offset: 0x1f4
	// Line 173, Address: 0x30db88, Func Offset: 0x208
	// Line 254, Address: 0x30db94, Func Offset: 0x214
	// Line 174, Address: 0x30dba8, Func Offset: 0x228
	// Line 254, Address: 0x30dbb8, Func Offset: 0x238
	// Line 179, Address: 0x30dbc0, Func Offset: 0x240
	// Line 254, Address: 0x30dbc4, Func Offset: 0x244
	// Line 181, Address: 0x30dbec, Func Offset: 0x26c
	// Line 254, Address: 0x30dbf0, Func Offset: 0x270
	// Line 181, Address: 0x30dbf4, Func Offset: 0x274
	// Line 254, Address: 0x30dbf8, Func Offset: 0x278
	// Line 181, Address: 0x30dbfc, Func Offset: 0x27c
	// Line 254, Address: 0x30dc00, Func Offset: 0x280
	// Line 181, Address: 0x30dc04, Func Offset: 0x284
	// Line 254, Address: 0x30dc08, Func Offset: 0x288
	// Line 181, Address: 0x30dc0c, Func Offset: 0x28c
	// Line 254, Address: 0x30dc1c, Func Offset: 0x29c
	// Line 185, Address: 0x30dc2c, Func Offset: 0x2ac
	// Line 254, Address: 0x30dc30, Func Offset: 0x2b0
	// Line 185, Address: 0x30dc3c, Func Offset: 0x2bc
	// Line 254, Address: 0x30dc40, Func Offset: 0x2c0
	// Line 185, Address: 0x30dc44, Func Offset: 0x2c4
	// Line 254, Address: 0x30dc48, Func Offset: 0x2c8
	// Line 185, Address: 0x30dc54, Func Offset: 0x2d4
	// Line 254, Address: 0x30dc68, Func Offset: 0x2e8
	// Line 186, Address: 0x30dc74, Func Offset: 0x2f4
	// Line 254, Address: 0x30dc78, Func Offset: 0x2f8
	// Line 186, Address: 0x30dc7c, Func Offset: 0x2fc
	// Line 254, Address: 0x30dc80, Func Offset: 0x300
	// Line 186, Address: 0x30dc84, Func Offset: 0x304
	// Line 254, Address: 0x30dc88, Func Offset: 0x308
	// Line 186, Address: 0x30dc90, Func Offset: 0x310
	// Line 254, Address: 0x30dc94, Func Offset: 0x314
	// Line 186, Address: 0x30dc9c, Func Offset: 0x31c
	// Line 254, Address: 0x30dcb0, Func Offset: 0x330
	// Line 188, Address: 0x30dcbc, Func Offset: 0x33c
	// Line 254, Address: 0x30dcc0, Func Offset: 0x340
	// Line 188, Address: 0x30dcc4, Func Offset: 0x344
	// Line 254, Address: 0x30dcc8, Func Offset: 0x348
	// Line 188, Address: 0x30dcd4, Func Offset: 0x354
	// Line 254, Address: 0x30dcd8, Func Offset: 0x358
	// Line 189, Address: 0x30dcdc, Func Offset: 0x35c
	// Line 254, Address: 0x30dce0, Func Offset: 0x360
	// Line 196, Address: 0x30dcf0, Func Offset: 0x370
	// Line 254, Address: 0x30dcf4, Func Offset: 0x374
	// Line 196, Address: 0x30dcf8, Func Offset: 0x378
	// Line 254, Address: 0x30dcfc, Func Offset: 0x37c
	// Line 197, Address: 0x30dd0c, Func Offset: 0x38c
	// Line 254, Address: 0x30dd10, Func Offset: 0x390
	// Line 206, Address: 0x30dd24, Func Offset: 0x3a4
	// Line 254, Address: 0x30dd28, Func Offset: 0x3a8
	// Line 213, Address: 0x30dd38, Func Offset: 0x3b8
	// Line 254, Address: 0x30dd40, Func Offset: 0x3c0
	// Line 199, Address: 0x30dd58, Func Offset: 0x3d8
	// Line 254, Address: 0x30dd5c, Func Offset: 0x3dc
	// Line 251, Address: 0x30dd74, Func Offset: 0x3f4
	// Line 254, Address: 0x30dd78, Func Offset: 0x3f8
	// Line 255, Address: 0x30dd94, Func Offset: 0x414
	// Func End, Address: 0x30ddb0, Func Offset: 0x430
}

// zPlatform_Init__FPvPv
// Start address: 0x30ddb0
void zPlatform_Init(void* plat, void* asset)
{
	// Line 91, Address: 0x30ddb0, Func Offset: 0
	// Func End, Address: 0x30ddb8, Func Offset: 0x8
}

// genericPlatRender__FP4xEnt
// Start address: 0x30ddc0
void genericPlatRender(xEnt* ent)
{
	// Line 65, Address: 0x30ddc0, Func Offset: 0
	// Line 67, Address: 0x30ddcc, Func Offset: 0xc
	// Line 70, Address: 0x30ddec, Func Offset: 0x2c
	// Line 71, Address: 0x30ddf4, Func Offset: 0x34
	// Func End, Address: 0x30de00, Func Offset: 0x40
}

