



void NMEC_SimpShadowCacheRelease(xShadowSimpleCache* entShad);
xShadowSimpleCache* NMEC_SimpShadowCacheReserve();
void NMEC_RenderProjTexture(RwRaster* rast, float32 factor, xMat4x3* mat, float32 radius, float32 height, xShadowCache* cache, int32 fillCache, xEnt* ent);
void NMEC_MakeASplash(xMat4x3* mat_orient, en_typeSplash typ_splash, float32 radius, float32 tym_duration);
void NMEC_MakeASplash(NMECSplashData* splash);
void NMEC_BurstBubble(xVec3* pos_base, float32 rad_pop, int32 flags);
void NMEC_MakeLightningInfo(en_npclyt style, _tagLightningAdd* info);
void StingerUpdate();
void StingerPrepare();
void Timestep(float32 dt);
void SceneReset();
void ScenePostInit();
void ScenePrepare();
void ModulePrepUse();

// NMEC_SimpShadowCacheRelease__FP18xShadowSimpleCache
// Start address: 0x26c410
void NMEC_SimpShadowCacheRelease(xShadowSimpleCache* entShad)
{
	int32 i;
	// Line 1324, Address: 0x26c410, Func Offset: 0
	// Line 1325, Address: 0x26c424, Func Offset: 0x14
	// Line 1328, Address: 0x26c42c, Func Offset: 0x1c
	// Line 1325, Address: 0x26c438, Func Offset: 0x28
	// Line 1328, Address: 0x26c440, Func Offset: 0x30
	// Line 1329, Address: 0x26c448, Func Offset: 0x38
	// Line 1330, Address: 0x26c458, Func Offset: 0x48
	// Func End, Address: 0x26c460, Func Offset: 0x50
}

// NMEC_SimpShadowCacheReserve__Fv
// Start address: 0x26c460
xShadowSimpleCache* NMEC_SimpShadowCacheReserve()
{
	xShadowSimpleCache* da_simpShad;
	int32 i;
	// Line 1298, Address: 0x26c460, Func Offset: 0
	// Line 1302, Address: 0x26c464, Func Offset: 0x4
	// Line 1298, Address: 0x26c468, Func Offset: 0x8
	// Line 1302, Address: 0x26c46c, Func Offset: 0xc
	// Line 1298, Address: 0x26c470, Func Offset: 0x10
	// Line 1302, Address: 0x26c474, Func Offset: 0x14
	// Line 1299, Address: 0x26c478, Func Offset: 0x18
	// Line 1303, Address: 0x26c47c, Func Offset: 0x1c
	// Line 1305, Address: 0x26c488, Func Offset: 0x28
	// Line 1306, Address: 0x26c494, Func Offset: 0x34
	// Line 1305, Address: 0x26c498, Func Offset: 0x38
	// Line 1306, Address: 0x26c49c, Func Offset: 0x3c
	// Line 1307, Address: 0x26c4b4, Func Offset: 0x54
	// Line 1308, Address: 0x26c4bc, Func Offset: 0x5c
	// Line 1311, Address: 0x26c4d0, Func Offset: 0x70
	// Line 1312, Address: 0x26c4d8, Func Offset: 0x78
	// Line 1313, Address: 0x26c4e8, Func Offset: 0x88
	// Line 1318, Address: 0x26c4f0, Func Offset: 0x90
	// Line 1319, Address: 0x26c4f4, Func Offset: 0x94
	// Func End, Address: 0x26c504, Func Offset: 0xa4
}

// NMEC_RenderProjTexture__FP8RwRasterfP7xMat4x3ffP12xShadowCacheiP4xEnt
// Start address: 0x26c510
void NMEC_RenderProjTexture(RwRaster* rast, float32 factor, xMat4x3* mat, float32 radius, float32 height, xShadowCache* cache, int32 fillCache, xEnt* ent)
{
	int32 i;
	xEnt* ent_tgt;
	uint32 rc;
	// Line 1109, Address: 0x26c510, Func Offset: 0
	// Line 1114, Address: 0x26c550, Func Offset: 0x40
	// Line 1117, Address: 0x26c558, Func Offset: 0x48
	// Line 1127, Address: 0x26c57c, Func Offset: 0x6c
	// Line 1130, Address: 0x26c59c, Func Offset: 0x8c
	// Line 1131, Address: 0x26c5b0, Func Offset: 0xa0
	// Line 1132, Address: 0x26c5b4, Func Offset: 0xa4
	// Line 1134, Address: 0x26c5bc, Func Offset: 0xac
	// Line 1136, Address: 0x26c5cc, Func Offset: 0xbc
	// Line 1137, Address: 0x26c5d4, Func Offset: 0xc4
	// Line 1141, Address: 0x26c5dc, Func Offset: 0xcc
	// Line 1143, Address: 0x26c5f0, Func Offset: 0xe0
	// Line 1146, Address: 0x26c608, Func Offset: 0xf8
	// Func End, Address: 0x26c638, Func Offset: 0x128
}

// NMEC_MakeASplash__FPC7xMat4x313en_typeSplashff
// Start address: 0x26c640
void NMEC_MakeASplash(xMat4x3* mat_orient, en_typeSplash typ_splash, float32 radius, float32 tym_duration)
{
	float32 rad_splash;
	float32 tym_splash;
	en_haztyp hazTypeForSplash[7];
	en_haztyp hazType;
	zNMEHazard* haz;
	int32 rc;
	// Line 990, Address: 0x26c640, Func Offset: 0
	// Line 995, Address: 0x26c648, Func Offset: 0x8
	// Line 990, Address: 0x26c64c, Func Offset: 0xc
	// Line 995, Address: 0x26c654, Func Offset: 0x14
	// Line 990, Address: 0x26c658, Func Offset: 0x18
	// Line 995, Address: 0x26c668, Func Offset: 0x28
	// Line 996, Address: 0x26c670, Func Offset: 0x30
	// Line 999, Address: 0x26c678, Func Offset: 0x38
	// Line 1000, Address: 0x26c68c, Func Offset: 0x4c
	// Line 1003, Address: 0x26c694, Func Offset: 0x54
	// Line 1009, Address: 0x26c6d8, Func Offset: 0x98
	// Line 1019, Address: 0x26c6dc, Func Offset: 0x9c
	// Line 1009, Address: 0x26c6e0, Func Offset: 0xa0
	// Line 1019, Address: 0x26c6e4, Func Offset: 0xa4
	// Line 1009, Address: 0x26c6e8, Func Offset: 0xa8
	// Line 1023, Address: 0x26c734, Func Offset: 0xf4
	// Line 1024, Address: 0x26c740, Func Offset: 0x100
	// Line 1027, Address: 0x26c748, Func Offset: 0x108
	// Line 1028, Address: 0x26c7a4, Func Offset: 0x164
	// Line 1029, Address: 0x26c7ac, Func Offset: 0x16c
	// Line 1030, Address: 0x26c820, Func Offset: 0x1e0
	// Line 1035, Address: 0x26c830, Func Offset: 0x1f0
	// Line 1037, Address: 0x26c870, Func Offset: 0x230
	// Line 1039, Address: 0x26c8b4, Func Offset: 0x274
	// Line 1055, Address: 0x26c930, Func Offset: 0x2f0
	// Func End, Address: 0x26c950, Func Offset: 0x310
}

// NMEC_MakeASplash__FPC14NMECSplashData
// Start address: 0x26c950
void NMEC_MakeASplash(NMECSplashData* splash)
{
	// Line 913, Address: 0x26c950, Func Offset: 0
	// Line 914, Address: 0x26c974, Func Offset: 0x24
	// Line 915, Address: 0x26c97c, Func Offset: 0x2c
	// Line 919, Address: 0x26cb08, Func Offset: 0x1b8
	// Line 921, Address: 0x26cb10, Func Offset: 0x1c0
	// Line 927, Address: 0x26cbf0, Func Offset: 0x2a0
	// Func End, Address: 0x26cc18, Func Offset: 0x2c8
}

// NMEC_BurstBubble__F11en_npcburstP5xVec3fi
// Start address: 0x26cc20
void NMEC_BurstBubble(xVec3* pos_base, float32 rad_pop, int32 flags)
{
	float32 inc_hyt;
	int32 i;
	int32 j;
	float32 hyt;
	float32 rat_hyt;
	float32 rad_cur;
	float32 curang;
	xVec3 pos_emit;
	// Line 852, Address: 0x26cc20, Func Offset: 0
	// Line 857, Address: 0x26cc24, Func Offset: 0x4
	// Line 852, Address: 0x26cc28, Func Offset: 0x8
	// Line 857, Address: 0x26cc2c, Func Offset: 0xc
	// Line 852, Address: 0x26cc30, Func Offset: 0x10
	// Line 857, Address: 0x26cc34, Func Offset: 0x14
	// Line 852, Address: 0x26cc38, Func Offset: 0x18
	// Line 857, Address: 0x26cc3c, Func Offset: 0x1c
	// Line 852, Address: 0x26cc40, Func Offset: 0x20
	// Line 860, Address: 0x26cc4c, Func Offset: 0x2c
	// Line 852, Address: 0x26cc50, Func Offset: 0x30
	// Line 860, Address: 0x26cc5c, Func Offset: 0x3c
	// Line 852, Address: 0x26cc60, Func Offset: 0x40
	// Line 860, Address: 0x26cc64, Func Offset: 0x44
	// Line 857, Address: 0x26cc6c, Func Offset: 0x4c
	// Line 852, Address: 0x26cc70, Func Offset: 0x50
	// Line 857, Address: 0x26cc74, Func Offset: 0x54
	// Line 852, Address: 0x26cc78, Func Offset: 0x58
	// Line 864, Address: 0x26cc88, Func Offset: 0x68
	// Line 865, Address: 0x26cc8c, Func Offset: 0x6c
	// Line 864, Address: 0x26cc98, Func Offset: 0x78
	// Line 865, Address: 0x26cca0, Func Offset: 0x80
	// Line 867, Address: 0x26ccb0, Func Offset: 0x90
	// Line 868, Address: 0x26cccc, Func Offset: 0xac
	// Line 870, Address: 0x26ccd8, Func Offset: 0xb8
	// Line 872, Address: 0x26cd10, Func Offset: 0xf0
	// Line 874, Address: 0x26cd14, Func Offset: 0xf4
	// Line 875, Address: 0x26cd70, Func Offset: 0x150
	// Line 874, Address: 0x26cd78, Func Offset: 0x158
	// Line 875, Address: 0x26cd7c, Func Offset: 0x15c
	// Line 874, Address: 0x26cd84, Func Offset: 0x164
	// Line 875, Address: 0x26cd8c, Func Offset: 0x16c
	// Line 876, Address: 0x26cde0, Func Offset: 0x1c0
	// Line 877, Address: 0x26cdec, Func Offset: 0x1cc
	// Line 882, Address: 0x26cdf8, Func Offset: 0x1d8
	// Line 883, Address: 0x26ce6c, Func Offset: 0x24c
	// Line 884, Address: 0x26cee4, Func Offset: 0x2c4
	// Line 894, Address: 0x26cf34, Func Offset: 0x314
	// Line 884, Address: 0x26cf3c, Func Offset: 0x31c
	// Line 886, Address: 0x26cf54, Func Offset: 0x334
	// Line 884, Address: 0x26cf58, Func Offset: 0x338
	// Line 886, Address: 0x26cf64, Func Offset: 0x344
	// Line 894, Address: 0x26cf8c, Func Offset: 0x36c
	// Line 895, Address: 0x26cf94, Func Offset: 0x374
	// Line 897, Address: 0x26cfa4, Func Offset: 0x384
	// Line 900, Address: 0x26cfb4, Func Offset: 0x394
	// Func End, Address: 0x26cff0, Func Offset: 0x3d0
}

// NMEC_MakeLightningInfo__F9en_npclytP16_tagLightningAdd
// Start address: 0x26cff0
void NMEC_MakeLightningInfo(en_npclyt style, _tagLightningAdd* info)
{
	// Line 583, Address: 0x26cff0, Func Offset: 0
	// Line 584, Address: 0x26cff4, Func Offset: 0x4
	// Line 583, Address: 0x26cff8, Func Offset: 0x8
	// Line 584, Address: 0x26d000, Func Offset: 0x10
	// Line 590, Address: 0x26d028, Func Offset: 0x38
	// Line 591, Address: 0x26d02c, Func Offset: 0x3c
	// Line 590, Address: 0x26d030, Func Offset: 0x40
	// Line 594, Address: 0x26d034, Func Offset: 0x44
	// Line 592, Address: 0x26d038, Func Offset: 0x48
	// Line 591, Address: 0x26d03c, Func Offset: 0x4c
	// Line 592, Address: 0x26d040, Func Offset: 0x50
	// Line 593, Address: 0x26d044, Func Offset: 0x54
	// Line 592, Address: 0x26d048, Func Offset: 0x58
	// Line 593, Address: 0x26d04c, Func Offset: 0x5c
	// Line 595, Address: 0x26d060, Func Offset: 0x70
	// Line 594, Address: 0x26d068, Func Offset: 0x78
	// Line 595, Address: 0x26d06c, Func Offset: 0x7c
	// Line 596, Address: 0x26d070, Func Offset: 0x80
	// Line 601, Address: 0x26d078, Func Offset: 0x88
	// Line 597, Address: 0x26d07c, Func Offset: 0x8c
	// Line 598, Address: 0x26d080, Func Offset: 0x90
	// Line 599, Address: 0x26d088, Func Offset: 0x98
	// Line 600, Address: 0x26d090, Func Offset: 0xa0
	// Line 604, Address: 0x26d094, Func Offset: 0xa4
	// Line 605, Address: 0x26d0f0, Func Offset: 0x100
	// Line 606, Address: 0x26d150, Func Offset: 0x160
	// Line 607, Address: 0x26d174, Func Offset: 0x184
	// Line 609, Address: 0x26d188, Func Offset: 0x198
	// Line 614, Address: 0x26d190, Func Offset: 0x1a0
	// Line 615, Address: 0x26d194, Func Offset: 0x1a4
	// Line 617, Address: 0x26d19c, Func Offset: 0x1ac
	// Line 616, Address: 0x26d1a0, Func Offset: 0x1b0
	// Line 617, Address: 0x26d1a4, Func Offset: 0x1b4
	// Line 616, Address: 0x26d1a8, Func Offset: 0x1b8
	// Line 618, Address: 0x26d1ac, Func Offset: 0x1bc
	// Line 616, Address: 0x26d1b0, Func Offset: 0x1c0
	// Line 617, Address: 0x26d1b4, Func Offset: 0x1c4
	// Line 619, Address: 0x26d1b8, Func Offset: 0x1c8
	// Line 617, Address: 0x26d1bc, Func Offset: 0x1cc
	// Line 619, Address: 0x26d1c8, Func Offset: 0x1d8
	// Line 618, Address: 0x26d1cc, Func Offset: 0x1dc
	// Line 620, Address: 0x26d1d0, Func Offset: 0x1e0
	// Line 619, Address: 0x26d1d4, Func Offset: 0x1e4
	// Line 625, Address: 0x26d1d8, Func Offset: 0x1e8
	// Line 620, Address: 0x26d1dc, Func Offset: 0x1ec
	// Line 621, Address: 0x26d1e0, Func Offset: 0x1f0
	// Line 622, Address: 0x26d1e4, Func Offset: 0x1f4
	// Line 623, Address: 0x26d1ec, Func Offset: 0x1fc
	// Line 624, Address: 0x26d1f4, Func Offset: 0x204
	// Line 628, Address: 0x26d1f8, Func Offset: 0x208
	// Line 629, Address: 0x26d254, Func Offset: 0x264
	// Line 630, Address: 0x26d2b4, Func Offset: 0x2c4
	// Line 631, Address: 0x26d2d8, Func Offset: 0x2e8
	// Line 633, Address: 0x26d2ec, Func Offset: 0x2fc
	// Line 638, Address: 0x26d2f4, Func Offset: 0x304
	// Line 639, Address: 0x26d2f8, Func Offset: 0x308
	// Line 641, Address: 0x26d300, Func Offset: 0x310
	// Line 640, Address: 0x26d304, Func Offset: 0x314
	// Line 642, Address: 0x26d308, Func Offset: 0x318
	// Line 640, Address: 0x26d30c, Func Offset: 0x31c
	// Line 641, Address: 0x26d310, Func Offset: 0x320
	// Line 643, Address: 0x26d324, Func Offset: 0x334
	// Line 642, Address: 0x26d32c, Func Offset: 0x33c
	// Line 643, Address: 0x26d330, Func Offset: 0x340
	// Line 644, Address: 0x26d334, Func Offset: 0x344
	// Line 649, Address: 0x26d33c, Func Offset: 0x34c
	// Line 645, Address: 0x26d340, Func Offset: 0x350
	// Line 646, Address: 0x26d344, Func Offset: 0x354
	// Line 647, Address: 0x26d34c, Func Offset: 0x35c
	// Line 648, Address: 0x26d354, Func Offset: 0x364
	// Line 652, Address: 0x26d358, Func Offset: 0x368
	// Line 653, Address: 0x26d3b4, Func Offset: 0x3c4
	// Line 654, Address: 0x26d414, Func Offset: 0x424
	// Line 655, Address: 0x26d438, Func Offset: 0x448
	// Line 657, Address: 0x26d44c, Func Offset: 0x45c
	// Line 662, Address: 0x26d454, Func Offset: 0x464
	// Line 663, Address: 0x26d458, Func Offset: 0x468
	// Line 666, Address: 0x26d460, Func Offset: 0x470
	// Line 664, Address: 0x26d464, Func Offset: 0x474
	// Line 668, Address: 0x26d468, Func Offset: 0x478
	// Line 664, Address: 0x26d46c, Func Offset: 0x47c
	// Line 665, Address: 0x26d470, Func Offset: 0x480
	// Line 667, Address: 0x26d490, Func Offset: 0x4a0
	// Line 666, Address: 0x26d494, Func Offset: 0x4a4
	// Line 667, Address: 0x26d498, Func Offset: 0x4a8
	// Line 668, Address: 0x26d4a0, Func Offset: 0x4b0
	// Line 673, Address: 0x26d4a4, Func Offset: 0x4b4
	// Line 669, Address: 0x26d4a8, Func Offset: 0x4b8
	// Line 670, Address: 0x26d4ac, Func Offset: 0x4bc
	// Line 671, Address: 0x26d4b4, Func Offset: 0x4c4
	// Line 672, Address: 0x26d4bc, Func Offset: 0x4cc
	// Line 676, Address: 0x26d4c0, Func Offset: 0x4d0
	// Line 677, Address: 0x26d51c, Func Offset: 0x52c
	// Line 678, Address: 0x26d57c, Func Offset: 0x58c
	// Line 679, Address: 0x26d5a0, Func Offset: 0x5b0
	// Line 681, Address: 0x26d5b4, Func Offset: 0x5c4
	// Line 692, Address: 0x26d5bc, Func Offset: 0x5cc
	// Line 693, Address: 0x26d5c0, Func Offset: 0x5d0
	// Line 692, Address: 0x26d5c4, Func Offset: 0x5d4
	// Line 694, Address: 0x26d5c8, Func Offset: 0x5d8
	// Line 693, Address: 0x26d5cc, Func Offset: 0x5dc
	// Line 695, Address: 0x26d5d0, Func Offset: 0x5e0
	// Line 694, Address: 0x26d5d8, Func Offset: 0x5e8
	// Line 695, Address: 0x26d5dc, Func Offset: 0x5ec
	// Line 697, Address: 0x26d5f4, Func Offset: 0x604
	// Line 696, Address: 0x26d5fc, Func Offset: 0x60c
	// Line 698, Address: 0x26d600, Func Offset: 0x610
	// Line 697, Address: 0x26d604, Func Offset: 0x614
	// Line 698, Address: 0x26d608, Func Offset: 0x618
	// Line 699, Address: 0x26d610, Func Offset: 0x620
	// Line 700, Address: 0x26d618, Func Offset: 0x628
	// Line 703, Address: 0x26d61c, Func Offset: 0x62c
	// Line 700, Address: 0x26d620, Func Offset: 0x630
	// Line 701, Address: 0x26d624, Func Offset: 0x634
	// Line 702, Address: 0x26d62c, Func Offset: 0x63c
	// Line 706, Address: 0x26d630, Func Offset: 0x640
	// Line 707, Address: 0x26d68c, Func Offset: 0x69c
	// Line 708, Address: 0x26d6ec, Func Offset: 0x6fc
	// Line 709, Address: 0x26d710, Func Offset: 0x720
	// Line 714, Address: 0x26d728, Func Offset: 0x738
	// Func End, Address: 0x26d738, Func Offset: 0x748
}

// StingerUpdate__10zMODSuppleFf
// Start address: 0x26d740
void zMODSupple::StingerUpdate()
{
	int32 num_plyrbone;
	int32 idx_base;
	int32 idx_list[3];
	xMat4x3* mat_list[3];
	int32 i;
	int32 idx;
	xVec3 pos_pctr;
	xMat4x3 mat_plyrroot;
	int32 i;
	xVec3 pos_from;
	xVec3 pos_dest;
	xVec3 pos_dest;
	xVec3 pos_outer;
	xVec3 vec_elechair;
	int32 lessismore;
	// Line 477, Address: 0x26d740, Func Offset: 0
	// Line 478, Address: 0x26d754, Func Offset: 0x14
	// Line 481, Address: 0x26d764, Func Offset: 0x24
	// Line 483, Address: 0x26d788, Func Offset: 0x48
	// Line 484, Address: 0x26d7d0, Func Offset: 0x90
	// Line 489, Address: 0x26d7d8, Func Offset: 0x98
	// Line 494, Address: 0x26d7e8, Func Offset: 0xa8
	// Line 491, Address: 0x26d7ec, Func Offset: 0xac
	// Line 496, Address: 0x26d7f4, Func Offset: 0xb4
	// Line 495, Address: 0x26d7f8, Func Offset: 0xb8
	// Line 494, Address: 0x26d7fc, Func Offset: 0xbc
	// Line 496, Address: 0x26d800, Func Offset: 0xc0
	// Line 494, Address: 0x26d804, Func Offset: 0xc4
	// Line 496, Address: 0x26d80c, Func Offset: 0xcc
	// Line 497, Address: 0x26d810, Func Offset: 0xd0
	// Line 498, Address: 0x26d820, Func Offset: 0xe0
	// Line 506, Address: 0x26d828, Func Offset: 0xe8
	// Line 508, Address: 0x26d83c, Func Offset: 0xfc
	// Line 506, Address: 0x26d840, Func Offset: 0x100
	// Line 507, Address: 0x26d84c, Func Offset: 0x10c
	// Line 508, Address: 0x26d858, Func Offset: 0x118
	// Line 510, Address: 0x26d88c, Func Offset: 0x14c
	// Line 509, Address: 0x26d890, Func Offset: 0x150
	// Line 510, Address: 0x26d894, Func Offset: 0x154
	// Line 509, Address: 0x26d898, Func Offset: 0x158
	// Line 510, Address: 0x26d8ac, Func Offset: 0x16c
	// Line 522, Address: 0x26d8b8, Func Offset: 0x178
	// Line 510, Address: 0x26d8bc, Func Offset: 0x17c
	// Line 521, Address: 0x26d8c0, Func Offset: 0x180
	// Line 515, Address: 0x26d8c4, Func Offset: 0x184
	// Line 521, Address: 0x26d8d0, Func Offset: 0x190
	// Line 515, Address: 0x26d8d4, Func Offset: 0x194
	// Line 521, Address: 0x26d8e0, Func Offset: 0x1a0
	// Line 522, Address: 0x26d8fc, Func Offset: 0x1bc
	// Line 524, Address: 0x26d904, Func Offset: 0x1c4
	// Line 525, Address: 0x26d914, Func Offset: 0x1d4
	// Line 524, Address: 0x26d918, Func Offset: 0x1d8
	// Line 525, Address: 0x26d930, Func Offset: 0x1f0
	// Line 537, Address: 0x26d978, Func Offset: 0x238
	// Line 526, Address: 0x26d980, Func Offset: 0x240
	// Line 537, Address: 0x26d998, Func Offset: 0x258
	// Line 526, Address: 0x26d9a4, Func Offset: 0x264
	// Line 537, Address: 0x26d9ac, Func Offset: 0x26c
	// Line 526, Address: 0x26d9b0, Func Offset: 0x270
	// Line 538, Address: 0x26d9bc, Func Offset: 0x27c
	// Line 540, Address: 0x26dad4, Func Offset: 0x394
	// Line 538, Address: 0x26dad8, Func Offset: 0x398
	// Line 541, Address: 0x26dae0, Func Offset: 0x3a0
	// Line 538, Address: 0x26dae4, Func Offset: 0x3a4
	// Line 539, Address: 0x26dae8, Func Offset: 0x3a8
	// Line 541, Address: 0x26daec, Func Offset: 0x3ac
	// Line 540, Address: 0x26daf4, Func Offset: 0x3b4
	// Line 538, Address: 0x26daf8, Func Offset: 0x3b8
	// Line 542, Address: 0x26dafc, Func Offset: 0x3bc
	// Line 538, Address: 0x26db00, Func Offset: 0x3c0
	// Line 540, Address: 0x26db04, Func Offset: 0x3c4
	// Line 538, Address: 0x26db08, Func Offset: 0x3c8
	// Line 542, Address: 0x26db0c, Func Offset: 0x3cc
	// Line 541, Address: 0x26db10, Func Offset: 0x3d0
	// Line 542, Address: 0x26db14, Func Offset: 0x3d4
	// Line 539, Address: 0x26db18, Func Offset: 0x3d8
	// Line 545, Address: 0x26db20, Func Offset: 0x3e0
	// Line 538, Address: 0x26db24, Func Offset: 0x3e4
	// Line 541, Address: 0x26db28, Func Offset: 0x3e8
	// Line 545, Address: 0x26db2c, Func Offset: 0x3ec
	// Line 538, Address: 0x26db30, Func Offset: 0x3f0
	// Line 545, Address: 0x26db34, Func Offset: 0x3f4
	// Line 538, Address: 0x26db3c, Func Offset: 0x3fc
	// Line 541, Address: 0x26db40, Func Offset: 0x400
	// Line 540, Address: 0x26db44, Func Offset: 0x404
	// Line 541, Address: 0x26db4c, Func Offset: 0x40c
	// Line 538, Address: 0x26db58, Func Offset: 0x418
	// Line 540, Address: 0x26db5c, Func Offset: 0x41c
	// Line 541, Address: 0x26db64, Func Offset: 0x424
	// Line 540, Address: 0x26db70, Func Offset: 0x430
	// Line 541, Address: 0x26db7c, Func Offset: 0x43c
	// Line 542, Address: 0x26db8c, Func Offset: 0x44c
	// Line 540, Address: 0x26db94, Func Offset: 0x454
	// Line 541, Address: 0x26db98, Func Offset: 0x458
	// Line 540, Address: 0x26db9c, Func Offset: 0x45c
	// Line 542, Address: 0x26dba4, Func Offset: 0x464
	// Line 541, Address: 0x26dba8, Func Offset: 0x468
	// Line 542, Address: 0x26dbac, Func Offset: 0x46c
	// Line 540, Address: 0x26dbb0, Func Offset: 0x470
	// Line 542, Address: 0x26dbb8, Func Offset: 0x478
	// Line 539, Address: 0x26dbbc, Func Offset: 0x47c
	// Line 540, Address: 0x26dbc0, Func Offset: 0x480
	// Line 541, Address: 0x26dbc8, Func Offset: 0x488
	// Line 542, Address: 0x26dbcc, Func Offset: 0x48c
	// Line 540, Address: 0x26dbd0, Func Offset: 0x490
	// Line 542, Address: 0x26dbe4, Func Offset: 0x4a4
	// Line 538, Address: 0x26dbe8, Func Offset: 0x4a8
	// Line 540, Address: 0x26dbec, Func Offset: 0x4ac
	// Line 539, Address: 0x26dbf0, Func Offset: 0x4b0
	// Line 542, Address: 0x26dbf4, Func Offset: 0x4b4
	// Line 540, Address: 0x26dbf8, Func Offset: 0x4b8
	// Line 541, Address: 0x26dc00, Func Offset: 0x4c0
	// Line 542, Address: 0x26dc08, Func Offset: 0x4c8
	// Line 541, Address: 0x26dc0c, Func Offset: 0x4cc
	// Line 540, Address: 0x26dc10, Func Offset: 0x4d0
	// Line 542, Address: 0x26dc14, Func Offset: 0x4d4
	// Line 541, Address: 0x26dc24, Func Offset: 0x4e4
	// Line 542, Address: 0x26dc2c, Func Offset: 0x4ec
	// Line 540, Address: 0x26dc44, Func Offset: 0x504
	// Line 542, Address: 0x26dc48, Func Offset: 0x508
	// Line 545, Address: 0x26dc60, Func Offset: 0x520
	// Line 547, Address: 0x26dc6c, Func Offset: 0x52c
	// Line 550, Address: 0x26dc7c, Func Offset: 0x53c
	// Func End, Address: 0x26dc94, Func Offset: 0x554
}

// StingerPrepare__10zMODSuppleFv
// Start address: 0x26dca0
void zMODSupple::StingerPrepare()
{
	_tagLightningAdd info;
	xVec3 pos_beg;
	int32 i;
	int32 num_plyrbone;
	// Line 423, Address: 0x26dca0, Func Offset: 0
	// Line 424, Address: 0x26dcb8, Func Offset: 0x18
	// Line 427, Address: 0x26dccc, Func Offset: 0x2c
	// Line 431, Address: 0x26dcd8, Func Offset: 0x38
	// Line 427, Address: 0x26dcdc, Func Offset: 0x3c
	// Line 431, Address: 0x26dce0, Func Offset: 0x40
	// Line 427, Address: 0x26dce4, Func Offset: 0x44
	// Line 431, Address: 0x26dce8, Func Offset: 0x48
	// Line 432, Address: 0x26dcf0, Func Offset: 0x50
	// Line 440, Address: 0x26dcfc, Func Offset: 0x5c
	// Line 442, Address: 0x26dd04, Func Offset: 0x64
	// Line 445, Address: 0x26dd08, Func Offset: 0x68
	// Line 447, Address: 0x26dd0c, Func Offset: 0x6c
	// Line 440, Address: 0x26dd14, Func Offset: 0x74
	// Line 442, Address: 0x26dd28, Func Offset: 0x88
	// Line 440, Address: 0x26dd2c, Func Offset: 0x8c
	// Line 445, Address: 0x26dd30, Func Offset: 0x90
	// Line 440, Address: 0x26dd34, Func Offset: 0x94
	// Line 443, Address: 0x26dd38, Func Offset: 0x98
	// Line 444, Address: 0x26dd3c, Func Offset: 0x9c
	// Line 448, Address: 0x26dd40, Func Offset: 0xa0
	// Line 450, Address: 0x26dd4c, Func Offset: 0xac
	// Line 454, Address: 0x26dd5c, Func Offset: 0xbc
	// Line 455, Address: 0x26dd68, Func Offset: 0xc8
	// Line 456, Address: 0x26ddcc, Func Offset: 0x12c
	// Line 459, Address: 0x26de00, Func Offset: 0x160
	// Func End, Address: 0x26de18, Func Offset: 0x178
}

// Timestep__10zMODSuppleFf
// Start address: 0x26de20
void zMODSupple::Timestep(float32 dt)
{
	// Line 356, Address: 0x26de20, Func Offset: 0
	// Line 357, Address: 0x26de34, Func Offset: 0x14
	// Line 358, Address: 0x26de48, Func Offset: 0x28
	// Line 360, Address: 0x26df7c, Func Offset: 0x15c
	// Line 363, Address: 0x26df90, Func Offset: 0x170
	// Line 358, Address: 0x26df9c, Func Offset: 0x17c
	// Line 363, Address: 0x26dfb4, Func Offset: 0x194
	// Line 364, Address: 0x26dfc4, Func Offset: 0x1a4
	// Func End, Address: 0x26dfd4, Func Offset: 0x1b4
}

// SceneReset__10zMODSuppleFv
// Start address: 0x26dfe0
void zMODSupple::SceneReset()
{
	int32 i;
	// Line 338, Address: 0x26dfe0, Func Offset: 0
	// Line 340, Address: 0x26dfe4, Func Offset: 0x4
	// Line 338, Address: 0x26dfe8, Func Offset: 0x8
	// Line 340, Address: 0x26dfec, Func Offset: 0xc
	// Line 338, Address: 0x26dff0, Func Offset: 0x10
	// Line 340, Address: 0x26dff4, Func Offset: 0x14
	// Line 338, Address: 0x26dff8, Func Offset: 0x18
	// Line 339, Address: 0x26dffc, Func Offset: 0x1c
	// Line 340, Address: 0x26e00c, Func Offset: 0x2c
	// Line 341, Address: 0x26e03c, Func Offset: 0x5c
	// Line 342, Address: 0x26e078, Func Offset: 0x98
	// Line 343, Address: 0x26e0b4, Func Offset: 0xd4
	// Line 346, Address: 0x26e0f4, Func Offset: 0x114
	// Line 347, Address: 0x26e0fc, Func Offset: 0x11c
	// Line 348, Address: 0x26e104, Func Offset: 0x124
	// Line 350, Address: 0x26e110, Func Offset: 0x130
	// Line 349, Address: 0x26e114, Func Offset: 0x134
	// Line 350, Address: 0x26e118, Func Offset: 0x138
	// Line 353, Address: 0x26e124, Func Offset: 0x144
	// Func End, Address: 0x26e138, Func Offset: 0x158
}

// ScenePostInit__10zMODSuppleFv
// Start address: 0x26e140
void zMODSupple::ScenePostInit()
{
	// Line 312, Address: 0x26e140, Func Offset: 0
	// Line 318, Address: 0x26e144, Func Offset: 0x4
	// Line 312, Address: 0x26e148, Func Offset: 0x8
	// Line 318, Address: 0x26e14c, Func Offset: 0xc
	// Line 312, Address: 0x26e150, Func Offset: 0x10
	// Line 318, Address: 0x26e154, Func Offset: 0x14
	// Line 320, Address: 0x26e170, Func Offset: 0x30
	// Line 335, Address: 0x26e190, Func Offset: 0x50
	// Func End, Address: 0x26e1a0, Func Offset: 0x60
}

// ScenePrepare__10zMODSuppleFv
// Start address: 0x26e1a0
void zMODSupple::ScenePrepare()
{
	// Line 289, Address: 0x26e1a0, Func Offset: 0
	// Line 295, Address: 0x26e1a4, Func Offset: 0x4
	// Line 289, Address: 0x26e1a8, Func Offset: 0x8
	// Line 295, Address: 0x26e1ac, Func Offset: 0xc
	// Line 289, Address: 0x26e1b0, Func Offset: 0x10
	// Line 294, Address: 0x26e1c0, Func Offset: 0x20
	// Line 295, Address: 0x26e1c4, Func Offset: 0x24
	// Line 294, Address: 0x26e1c8, Func Offset: 0x28
	// Line 295, Address: 0x26e1d4, Func Offset: 0x34
	// Line 296, Address: 0x26e204, Func Offset: 0x64
	// Line 297, Address: 0x26e240, Func Offset: 0xa0
	// Line 299, Address: 0x26e27c, Func Offset: 0xdc
	// Line 300, Address: 0x26e2a4, Func Offset: 0x104
	// Line 303, Address: 0x26e2e0, Func Offset: 0x140
	// Line 304, Address: 0x26e2ec, Func Offset: 0x14c
	// Line 303, Address: 0x26e2f4, Func Offset: 0x154
	// Line 304, Address: 0x26e300, Func Offset: 0x160
	// Line 306, Address: 0x26e310, Func Offset: 0x170
	// Line 309, Address: 0x26e318, Func Offset: 0x178
	// Func End, Address: 0x26e330, Func Offset: 0x190
}

// ModulePrepUse__10zMODSuppleFv
// Start address: 0x26e330
void zMODSupple::ModulePrepUse()
{
	// Line 286, Address: 0x26e330, Func Offset: 0
	// Func End, Address: 0x26e338, Func Offset: 0x8
}

