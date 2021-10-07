



iSndHandle zNME_SNDPlay3D(zNMECommon* npc, eNMESound soundEnum);
void NMEC_GenSmooth(xVec3** pos_base, xVec3** pos_mid);
RwRaster* NMEC_FindRWRaster(RwTexture* txtr);
RwRaster* NMEC_FindRWRaster(uint32 hashid);
RwRaster* NMEC_FindRWRaster(int8* txtrname);
RwTexture* NMEC_FindRWTexture(int8* txtrname);
float32 NMEC_ds2_toCam(xVec3* pos_from, xVec3* delta);
int32 NMEC_LineHitsBound(xVec3* a, xVec3* b, xBound* bnd, xCollis* callers_colrec);
float32 NMEC_aimVary(xVec3* dir_aim, xVec3* pos_src, xVec3* pos_tgt, float32 dst_vary, int32 flg_vary, xVec3* pos_aimPoint);
void Render(xVec3* pos_src, xVec3* pos_tgt);
void Timestep();
void SceneReset();
void ScenePostInit();
void SceneFinish();
void ScenePrepare();

// zNME_SNDPlay3D__FP10zNMECommon9eNMESoundb
// Start address: 0x26af40
iSndHandle zNME_SNDPlay3D(zNMECommon* npc, eNMESound soundEnum)
{
	uint32 sndFlags;
	xEnt* ent;
	iSndGroupHandle sndHdl;
	// Line 2704, Address: 0x26af40, Func Offset: 0
	// Line 2706, Address: 0x26af44, Func Offset: 0x4
	// Line 2704, Address: 0x26af48, Func Offset: 0x8
	// Line 2706, Address: 0x26af58, Func Offset: 0x18
	// Line 2710, Address: 0x26af6c, Func Offset: 0x2c
	// Line 2712, Address: 0x26af94, Func Offset: 0x54
	// Line 2714, Address: 0x26af9c, Func Offset: 0x5c
	// Line 2727, Address: 0x26afe4, Func Offset: 0xa4
	// Line 2729, Address: 0x26aff4, Func Offset: 0xb4
	// Line 2731, Address: 0x26affc, Func Offset: 0xbc
	// Line 2737, Address: 0x26b000, Func Offset: 0xc0
	// Line 2738, Address: 0x26b00c, Func Offset: 0xcc
	// Line 2741, Address: 0x26b010, Func Offset: 0xd0
	// Line 2743, Address: 0x26b014, Func Offset: 0xd4
	// Line 2744, Address: 0x26b020, Func Offset: 0xe0
	// Line 2749, Address: 0x26b044, Func Offset: 0x104
	// Line 2754, Address: 0x26b070, Func Offset: 0x130
	// Line 2760, Address: 0x26b088, Func Offset: 0x148
	// Line 2707, Address: 0x26b090, Func Offset: 0x150
	// Line 2715, Address: 0x26b098, Func Offset: 0x158
	// Line 2761, Address: 0x26b09c, Func Offset: 0x15c
	// Func End, Address: 0x26b0b4, Func Offset: 0x174
}

// NMEC_GenSmooth__FPP5xVec3PP5xVec3
// Start address: 0x26b0c0
void NMEC_GenSmooth(xVec3** pos_base, xVec3** pos_mid)
{
	int32 i;
	float32 u;
	float32 u3;
	float32 prepute[4][4];
	float32 yews[4];
	int32 init;
	// Line 2556, Address: 0x26b0c0, Func Offset: 0
	// Line 2570, Address: 0x26b0cc, Func Offset: 0xc
	// Line 2572, Address: 0x26b0d4, Func Offset: 0x14
	// Line 2570, Address: 0x26b0d8, Func Offset: 0x18
	// Line 2571, Address: 0x26b0dc, Func Offset: 0x1c
	// Line 2575, Address: 0x26b0e0, Func Offset: 0x20
	// Line 2571, Address: 0x26b0e4, Func Offset: 0x24
	// Line 2572, Address: 0x26b0ec, Func Offset: 0x2c
	// Line 2575, Address: 0x26b0f0, Func Offset: 0x30
	// Line 2573, Address: 0x26b0f4, Func Offset: 0x34
	// Line 2574, Address: 0x26b0f8, Func Offset: 0x38
	// Line 2571, Address: 0x26b0fc, Func Offset: 0x3c
	// Line 2574, Address: 0x26b100, Func Offset: 0x40
	// Line 2571, Address: 0x26b104, Func Offset: 0x44
	// Line 2572, Address: 0x26b124, Func Offset: 0x64
	// Line 2573, Address: 0x26b168, Func Offset: 0xa8
	// Line 2574, Address: 0x26b1ac, Func Offset: 0xec
	// Line 2575, Address: 0x26b1f0, Func Offset: 0x130
	// Line 2616, Address: 0x26b1f8, Func Offset: 0x138
	// Line 2563, Address: 0x26b200, Func Offset: 0x140
	// Line 2616, Address: 0x26b204, Func Offset: 0x144
	// Line 2563, Address: 0x26b208, Func Offset: 0x148
	// Line 2562, Address: 0x26b20c, Func Offset: 0x14c
	// Line 2616, Address: 0x26b210, Func Offset: 0x150
	// Line 2562, Address: 0x26b214, Func Offset: 0x154
	// Line 2563, Address: 0x26b218, Func Offset: 0x158
	// Line 2616, Address: 0x26b220, Func Offset: 0x160
	// Line 2563, Address: 0x26b224, Func Offset: 0x164
	// Line 2558, Address: 0x26b228, Func Offset: 0x168
	// Line 2563, Address: 0x26b22c, Func Offset: 0x16c
	// Line 2564, Address: 0x26b230, Func Offset: 0x170
	// Line 2616, Address: 0x26b238, Func Offset: 0x178
	// Line 2564, Address: 0x26b23c, Func Offset: 0x17c
	// Line 2616, Address: 0x26b240, Func Offset: 0x180
	// Line 2564, Address: 0x26b244, Func Offset: 0x184
	// Line 2562, Address: 0x26b248, Func Offset: 0x188
	// Line 2564, Address: 0x26b24c, Func Offset: 0x18c
	// Line 2616, Address: 0x26b254, Func Offset: 0x194
	// Line 2561, Address: 0x26b268, Func Offset: 0x1a8
	// Line 2562, Address: 0x26b26c, Func Offset: 0x1ac
	// Line 2616, Address: 0x26b278, Func Offset: 0x1b8
	// Line 2563, Address: 0x26b27c, Func Offset: 0x1bc
	// Line 2564, Address: 0x26b288, Func Offset: 0x1c8
	// Line 2616, Address: 0x26b28c, Func Offset: 0x1cc
	// Line 2564, Address: 0x26b290, Func Offset: 0x1d0
	// Line 2616, Address: 0x26b298, Func Offset: 0x1d8
	// Line 2565, Address: 0x26b29c, Func Offset: 0x1dc
	// Line 2616, Address: 0x26b2a4, Func Offset: 0x1e4
	// Line 2617, Address: 0x26b2b8, Func Offset: 0x1f8
	// Func End, Address: 0x26b2c0, Func Offset: 0x200
}

// NMEC_FindRWRaster__FP9RwTexture
// Start address: 0x26b2c0
RwRaster* NMEC_FindRWRaster(RwTexture* txtr)
{
	// Line 2513, Address: 0x26b2c0, Func Offset: 0
	// Line 2515, Address: 0x26b2cc, Func Offset: 0xc
	// Func End, Address: 0x26b2d4, Func Offset: 0x14
}

// NMEC_FindRWRaster__FUi
// Start address: 0x26b2e0
RwRaster* NMEC_FindRWRaster(uint32 hashid)
{
	// Line 2503, Address: 0x26b2e0, Func Offset: 0
	// Line 2504, Address: 0x26b2e8, Func Offset: 0x8
	// Line 2506, Address: 0x26b2f0, Func Offset: 0x10
	// Line 2508, Address: 0x26b304, Func Offset: 0x24
	// Func End, Address: 0x26b310, Func Offset: 0x30
}

// NMEC_FindRWRaster__FPCc
// Start address: 0x26b310
RwRaster* NMEC_FindRWRaster(int8* txtrname)
{
	// Line 2494, Address: 0x26b310, Func Offset: 0
	// Line 2496, Address: 0x26b318, Func Offset: 0x8
	// Line 2498, Address: 0x26b32c, Func Offset: 0x1c
	// Line 2500, Address: 0x26b340, Func Offset: 0x30
	// Func End, Address: 0x26b34c, Func Offset: 0x3c
}

// NMEC_FindRWTexture__FPCc
// Start address: 0x26b350
RwTexture* NMEC_FindRWTexture(int8* txtrname)
{
	// Line 2484, Address: 0x26b350, Func Offset: 0
	// Line 2485, Address: 0x26b358, Func Offset: 0x8
	// Line 2486, Address: 0x26b36c, Func Offset: 0x1c
	// Func End, Address: 0x26b378, Func Offset: 0x28
}

// NMEC_ds2_toCam__FPC5xVec3P5xVec3
// Start address: 0x26b380
float32 NMEC_ds2_toCam(xVec3* pos_from, xVec3* delta)
{
	xVec3 delt;
	// Line 2320, Address: 0x26b380, Func Offset: 0
	// Line 2322, Address: 0x26b384, Func Offset: 0x4
	// Line 2323, Address: 0x26b3ac, Func Offset: 0x2c
	// Line 2324, Address: 0x26b3ec, Func Offset: 0x6c
	// Line 2323, Address: 0x26b3f0, Func Offset: 0x70
	// Line 2324, Address: 0x26b3f4, Func Offset: 0x74
	// Line 2323, Address: 0x26b3f8, Func Offset: 0x78
	// Line 2325, Address: 0x26b3fc, Func Offset: 0x7c
	// Line 2327, Address: 0x26b410, Func Offset: 0x90
	// Func End, Address: 0x26b418, Func Offset: 0x98
}

// NMEC_LineHitsBound__FPC5xVec3PC5xVec3P6xBoundP7xCollis
// Start address: 0x26b420
int32 NMEC_LineHitsBound(xVec3* a, xVec3* b, xBound* bnd, xCollis* callers_colrec)
{
	xCollis* colrec;
	xCollis local_colrec;
	xVec3 vec;
	float32 len;
	xRay3 ray;
	// Line 2109, Address: 0x26b420, Func Offset: 0
	// Line 2113, Address: 0x26b440, Func Offset: 0x20
	// Line 2114, Address: 0x26b448, Func Offset: 0x28
	// Line 2121, Address: 0x26b44c, Func Offset: 0x2c
	// Line 2124, Address: 0x26b450, Func Offset: 0x30
	// Line 2121, Address: 0x26b454, Func Offset: 0x34
	// Line 2124, Address: 0x26b458, Func Offset: 0x38
	// Line 2121, Address: 0x26b45c, Func Offset: 0x3c
	// Line 2124, Address: 0x26b474, Func Offset: 0x54
	// Line 2121, Address: 0x26b478, Func Offset: 0x58
	// Line 2122, Address: 0x26b4cc, Func Offset: 0xac
	// Line 2121, Address: 0x26b4d0, Func Offset: 0xb0
	// Line 2122, Address: 0x26b4d4, Func Offset: 0xb4
	// Line 2121, Address: 0x26b4e4, Func Offset: 0xc4
	// Line 2122, Address: 0x26b4e8, Func Offset: 0xc8
	// Line 2124, Address: 0x26b4f0, Func Offset: 0xd0
	// Line 2129, Address: 0x26b504, Func Offset: 0xe4
	// Line 2133, Address: 0x26b50c, Func Offset: 0xec
	// Line 2130, Address: 0x26b510, Func Offset: 0xf0
	// Line 2133, Address: 0x26b514, Func Offset: 0xf4
	// Line 2131, Address: 0x26b51c, Func Offset: 0xfc
	// Line 2133, Address: 0x26b524, Func Offset: 0x104
	// Line 2129, Address: 0x26b528, Func Offset: 0x108
	// Line 2128, Address: 0x26b530, Func Offset: 0x110
	// Line 2127, Address: 0x26b534, Func Offset: 0x114
	// Line 2128, Address: 0x26b53c, Func Offset: 0x11c
	// Line 2127, Address: 0x26b54c, Func Offset: 0x12c
	// Line 2128, Address: 0x26b558, Func Offset: 0x138
	// Line 2133, Address: 0x26b55c, Func Offset: 0x13c
	// Line 2135, Address: 0x26b564, Func Offset: 0x144
	// Line 2118, Address: 0x26b574, Func Offset: 0x154
	// Line 2135, Address: 0x26b57c, Func Offset: 0x15c
	// Line 2136, Address: 0x26b58c, Func Offset: 0x16c
	// Func End, Address: 0x26b5a8, Func Offset: 0x188
}

// NMEC_aimVary__FP5xVec3PC5xVec3PC5xVec3fiP5xVec3
// Start address: 0x26b5b0
float32 NMEC_aimVary(xVec3* dir_aim, xVec3* pos_src, xVec3* pos_tgt, float32 dst_vary, int32 flg_vary, xVec3* pos_aimPoint)
{
	xVec3 dir_toReal;
	float32 mag_vary;
	float32 mag_updown;
	float32 fv;
	xVec3 dir_left;
	xVec3 vec_offset;
	xVec3 pos_tgtFake;
	xVec3 dir_toFake;
	float32 dst_toFake;
	// Line 1917, Address: 0x26b5b0, Func Offset: 0
	// Line 1920, Address: 0x26b5b4, Func Offset: 0x4
	// Line 1917, Address: 0x26b5b8, Func Offset: 0x8
	// Line 1920, Address: 0x26b5bc, Func Offset: 0xc
	// Line 1917, Address: 0x26b5c0, Func Offset: 0x10
	// Line 1920, Address: 0x26b5c8, Func Offset: 0x18
	// Line 1917, Address: 0x26b5d0, Func Offset: 0x20
	// Line 1920, Address: 0x26b5e0, Func Offset: 0x30
	// Line 1917, Address: 0x26b5e4, Func Offset: 0x34
	// Line 1920, Address: 0x26b5ec, Func Offset: 0x3c
	// Line 1917, Address: 0x26b5f4, Func Offset: 0x44
	// Line 1920, Address: 0x26b5f8, Func Offset: 0x48
	// Line 1922, Address: 0x26b610, Func Offset: 0x60
	// Line 1920, Address: 0x26b614, Func Offset: 0x64
	// Line 1917, Address: 0x26b62c, Func Offset: 0x7c
	// Line 1920, Address: 0x26b638, Func Offset: 0x88
	// Line 1922, Address: 0x26b670, Func Offset: 0xc0
	// Line 1929, Address: 0x26b684, Func Offset: 0xd4
	// Line 1922, Address: 0x26b688, Func Offset: 0xd8
	// Line 1929, Address: 0x26b68c, Func Offset: 0xdc
	// Line 1922, Address: 0x26b690, Func Offset: 0xe0
	// Line 1929, Address: 0x26b694, Func Offset: 0xe4
	// Line 1928, Address: 0x26b698, Func Offset: 0xe8
	// Line 1929, Address: 0x26b6b4, Func Offset: 0x104
	// Line 1930, Address: 0x26b6c0, Func Offset: 0x110
	// Line 1936, Address: 0x26b6cc, Func Offset: 0x11c
	// Line 1937, Address: 0x26b6ec, Func Offset: 0x13c
	// Line 1938, Address: 0x26b6f4, Func Offset: 0x144
	// Line 1940, Address: 0x26b70c, Func Offset: 0x15c
	// Line 1932, Address: 0x26b724, Func Offset: 0x174
	// Line 1940, Address: 0x26b728, Func Offset: 0x178
	// Line 1932, Address: 0x26b72c, Func Offset: 0x17c
	// Line 1940, Address: 0x26b730, Func Offset: 0x180
	// Line 1932, Address: 0x26b738, Func Offset: 0x188
	// Line 1933, Address: 0x26b73c, Func Offset: 0x18c
	// Line 1932, Address: 0x26b740, Func Offset: 0x190
	// Line 1940, Address: 0x26b74c, Func Offset: 0x19c
	// Line 1934, Address: 0x26b75c, Func Offset: 0x1ac
	// Line 1943, Address: 0x26b764, Func Offset: 0x1b4
	// Line 1953, Address: 0x26b770, Func Offset: 0x1c0
	// Line 1943, Address: 0x26b774, Func Offset: 0x1c4
	// Line 1953, Address: 0x26b78c, Func Offset: 0x1dc
	// Line 1954, Address: 0x26b794, Func Offset: 0x1e4
	// Line 1973, Address: 0x26b798, Func Offset: 0x1e8
	// Line 1974, Address: 0x26b7a4, Func Offset: 0x1f4
	// Line 1975, Address: 0x26b7ac, Func Offset: 0x1fc
	// Line 1976, Address: 0x26b7b4, Func Offset: 0x204
	// Line 1982, Address: 0x26b7bc, Func Offset: 0x20c
	// Line 1976, Address: 0x26b7c0, Func Offset: 0x210
	// Line 1982, Address: 0x26b7c4, Func Offset: 0x214
	// Line 1976, Address: 0x26b7c8, Func Offset: 0x218
	// Line 1983, Address: 0x26b7cc, Func Offset: 0x21c
	// Line 1976, Address: 0x26b7d0, Func Offset: 0x220
	// Line 1983, Address: 0x26b7d4, Func Offset: 0x224
	// Line 1982, Address: 0x26b7d8, Func Offset: 0x228
	// Line 1983, Address: 0x26b7dc, Func Offset: 0x22c
	// Line 1982, Address: 0x26b7e0, Func Offset: 0x230
	// Line 1987, Address: 0x26b7e4, Func Offset: 0x234
	// Line 1976, Address: 0x26b7f0, Func Offset: 0x240
	// Line 1988, Address: 0x26b7f4, Func Offset: 0x244
	// Line 1976, Address: 0x26b7f8, Func Offset: 0x248
	// Line 1983, Address: 0x26b7fc, Func Offset: 0x24c
	// Line 1990, Address: 0x26b800, Func Offset: 0x250
	// Line 1982, Address: 0x26b804, Func Offset: 0x254
	// Line 1983, Address: 0x26b81c, Func Offset: 0x26c
	// Line 1984, Address: 0x26b820, Func Offset: 0x270
	// Line 1982, Address: 0x26b828, Func Offset: 0x278
	// Line 1988, Address: 0x26b834, Func Offset: 0x284
	// Line 1982, Address: 0x26b838, Func Offset: 0x288
	// Line 1983, Address: 0x26b83c, Func Offset: 0x28c
	// Line 1982, Address: 0x26b840, Func Offset: 0x290
	// Line 1988, Address: 0x26b844, Func Offset: 0x294
	// Line 1983, Address: 0x26b848, Func Offset: 0x298
	// Line 1987, Address: 0x26b84c, Func Offset: 0x29c
	// Line 1984, Address: 0x26b850, Func Offset: 0x2a0
	// Line 1983, Address: 0x26b854, Func Offset: 0x2a4
	// Line 1987, Address: 0x26b860, Func Offset: 0x2b0
	// Line 1984, Address: 0x26b864, Func Offset: 0x2b4
	// Line 1987, Address: 0x26b868, Func Offset: 0x2b8
	// Line 1984, Address: 0x26b86c, Func Offset: 0x2bc
	// Line 1983, Address: 0x26b878, Func Offset: 0x2c8
	// Line 1988, Address: 0x26b884, Func Offset: 0x2d4
	// Line 1987, Address: 0x26b888, Func Offset: 0x2d8
	// Line 1984, Address: 0x26b88c, Func Offset: 0x2dc
	// Line 1988, Address: 0x26b890, Func Offset: 0x2e0
	// Line 1983, Address: 0x26b894, Func Offset: 0x2e4
	// Line 1987, Address: 0x26b8a8, Func Offset: 0x2f8
	// Line 1984, Address: 0x26b8ac, Func Offset: 0x2fc
	// Line 1987, Address: 0x26b8b0, Func Offset: 0x300
	// Line 1983, Address: 0x26b8b8, Func Offset: 0x308
	// Line 1984, Address: 0x26b8d8, Func Offset: 0x328
	// Line 1983, Address: 0x26b8dc, Func Offset: 0x32c
	// Line 1984, Address: 0x26b8e0, Func Offset: 0x330
	// Line 1983, Address: 0x26b8e4, Func Offset: 0x334
	// Line 1984, Address: 0x26b8ec, Func Offset: 0x33c
	// Line 1987, Address: 0x26b910, Func Offset: 0x360
	// Line 1984, Address: 0x26b914, Func Offset: 0x364
	// Line 1988, Address: 0x26b918, Func Offset: 0x368
	// Line 1983, Address: 0x26b91c, Func Offset: 0x36c
	// Line 1988, Address: 0x26b920, Func Offset: 0x370
	// Line 1984, Address: 0x26b924, Func Offset: 0x374
	// Line 1987, Address: 0x26b92c, Func Offset: 0x37c
	// Line 1988, Address: 0x26b958, Func Offset: 0x3a8
	// Line 1987, Address: 0x26b95c, Func Offset: 0x3ac
	// Line 1984, Address: 0x26b960, Func Offset: 0x3b0
	// Line 1988, Address: 0x26b968, Func Offset: 0x3b8
	// Line 1987, Address: 0x26b96c, Func Offset: 0x3bc
	// Line 1988, Address: 0x26b978, Func Offset: 0x3c8
	// Line 1987, Address: 0x26b980, Func Offset: 0x3d0
	// Line 1988, Address: 0x26b984, Func Offset: 0x3d4
	// Line 1984, Address: 0x26b990, Func Offset: 0x3e0
	// Line 1988, Address: 0x26b994, Func Offset: 0x3e4
	// Line 1990, Address: 0x26b9e4, Func Offset: 0x434
	// Line 1991, Address: 0x26b9ec, Func Offset: 0x43c
	// Line 1992, Address: 0x26b9f4, Func Offset: 0x444
	// Line 1995, Address: 0x26ba10, Func Offset: 0x460
	// Line 1997, Address: 0x26ba18, Func Offset: 0x468
	// Line 1957, Address: 0x26ba28, Func Offset: 0x478
	// Line 1997, Address: 0x26ba30, Func Offset: 0x480
	// Line 1957, Address: 0x26ba38, Func Offset: 0x488
	// Line 1961, Address: 0x26ba68, Func Offset: 0x4b8
	// Line 1957, Address: 0x26ba6c, Func Offset: 0x4bc
	// Line 1997, Address: 0x26ba80, Func Offset: 0x4d0
	// Line 1961, Address: 0x26ba88, Func Offset: 0x4d8
	// Line 1997, Address: 0x26ba8c, Func Offset: 0x4dc
	// Line 1963, Address: 0x26ba9c, Func Offset: 0x4ec
	// Line 1997, Address: 0x26baa4, Func Offset: 0x4f4
	// Line 1963, Address: 0x26baac, Func Offset: 0x4fc
	// Line 1964, Address: 0x26baf4, Func Offset: 0x544
	// Line 1997, Address: 0x26baf8, Func Offset: 0x548
	// Line 1969, Address: 0x26bb08, Func Offset: 0x558
	// Line 1997, Address: 0x26bb14, Func Offset: 0x564
	// Line 1965, Address: 0x26bb1c, Func Offset: 0x56c
	// Line 1997, Address: 0x26bb24, Func Offset: 0x574
	// Line 1965, Address: 0x26bb2c, Func Offset: 0x57c
	// Line 1997, Address: 0x26bb58, Func Offset: 0x5a8
	// Line 1967, Address: 0x26bb60, Func Offset: 0x5b0
	// Line 1997, Address: 0x26bb68, Func Offset: 0x5b8
	// Line 1967, Address: 0x26bb70, Func Offset: 0x5c0
	// Line 1994, Address: 0x26bba0, Func Offset: 0x5f0
	// Line 1997, Address: 0x26bba4, Func Offset: 0x5f4
	// Line 1998, Address: 0x26bbb4, Func Offset: 0x604
	// Func End, Address: 0x26bbe8, Func Offset: 0x638
}

// Render__8NMELaserFP5xVec3P5xVec3
// Start address: 0x26bbf0
void NMELaser::Render(xVec3* pos_src, xVec3* pos_tgt)
{
	int32 i;
	RxObjSpace3DVertex* vtx_horz;
	RxObjSpace3DVertex* vtx_vert;
	xVec3 dir_axis;
	float32 rat;
	float32 v;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	_SDRenderState old_rendstat;
	int32 bgg;
	RxObjSpace3DVertex laser_vtxbuf[14][2];
	// Line 608, Address: 0x26bbf0, Func Offset: 0
	// Line 645, Address: 0x26bc10, Func Offset: 0x20
	// Line 608, Address: 0x26bc14, Func Offset: 0x24
	// Line 627, Address: 0x26bc24, Func Offset: 0x34
	// Line 628, Address: 0x26bc28, Func Offset: 0x38
	// Line 627, Address: 0x26bc2c, Func Offset: 0x3c
	// Line 628, Address: 0x26bc34, Func Offset: 0x44
	// Line 643, Address: 0x26bc3c, Func Offset: 0x4c
	// Line 645, Address: 0x26bc40, Func Offset: 0x50
	// Line 643, Address: 0x26bc44, Func Offset: 0x54
	// Line 645, Address: 0x26bc54, Func Offset: 0x64
	// Line 647, Address: 0x26bc6c, Func Offset: 0x7c
	// Line 645, Address: 0x26bc70, Func Offset: 0x80
	// Line 647, Address: 0x26bc80, Func Offset: 0x90
	// Line 649, Address: 0x26bc98, Func Offset: 0xa8
	// Line 647, Address: 0x26bc9c, Func Offset: 0xac
	// Line 649, Address: 0x26bca0, Func Offset: 0xb0
	// Line 647, Address: 0x26bca4, Func Offset: 0xb4
	// Line 649, Address: 0x26bcb4, Func Offset: 0xc4
	// Line 650, Address: 0x26bce0, Func Offset: 0xf0
	// Line 652, Address: 0x26bd08, Func Offset: 0x118
	// Line 693, Address: 0x26bd0c, Func Offset: 0x11c
	// Line 652, Address: 0x26bd10, Func Offset: 0x120
	// Line 700, Address: 0x26bd14, Func Offset: 0x124
	// Line 652, Address: 0x26bd18, Func Offset: 0x128
	// Line 678, Address: 0x26bd1c, Func Offset: 0x12c
	// Line 693, Address: 0x26bd20, Func Offset: 0x130
	// Line 679, Address: 0x26bd24, Func Offset: 0x134
	// Line 678, Address: 0x26bd2c, Func Offset: 0x13c
	// Line 683, Address: 0x26bd30, Func Offset: 0x140
	// Line 679, Address: 0x26bd34, Func Offset: 0x144
	// Line 680, Address: 0x26bd38, Func Offset: 0x148
	// Line 692, Address: 0x26bd3c, Func Offset: 0x14c
	// Line 652, Address: 0x26bd40, Func Offset: 0x150
	// Line 700, Address: 0x26bd54, Func Offset: 0x164
	// Line 683, Address: 0x26bd58, Func Offset: 0x168
	// Line 685, Address: 0x26bd5c, Func Offset: 0x16c
	// Line 652, Address: 0x26bd60, Func Offset: 0x170
	// Line 683, Address: 0x26bd64, Func Offset: 0x174
	// Line 690, Address: 0x26bd68, Func Offset: 0x178
	// Line 692, Address: 0x26bd6c, Func Offset: 0x17c
	// Line 685, Address: 0x26bd70, Func Offset: 0x180
	// Line 683, Address: 0x26bd74, Func Offset: 0x184
	// Line 692, Address: 0x26bd78, Func Offset: 0x188
	// Line 683, Address: 0x26bd7c, Func Offset: 0x18c
	// Line 685, Address: 0x26bd80, Func Offset: 0x190
	// Line 692, Address: 0x26bd84, Func Offset: 0x194
	// Line 685, Address: 0x26bd88, Func Offset: 0x198
	// Line 692, Address: 0x26bd8c, Func Offset: 0x19c
	// Line 685, Address: 0x26bd90, Func Offset: 0x1a0
	// Line 692, Address: 0x26bd94, Func Offset: 0x1a4
	// Line 685, Address: 0x26bd98, Func Offset: 0x1a8
	// Line 688, Address: 0x26bd9c, Func Offset: 0x1ac
	// Line 689, Address: 0x26bda4, Func Offset: 0x1b4
	// Line 690, Address: 0x26bdac, Func Offset: 0x1bc
	// Line 692, Address: 0x26bdb0, Func Offset: 0x1c0
	// Line 693, Address: 0x26bdec, Func Offset: 0x1fc
	// Line 694, Address: 0x26be40, Func Offset: 0x250
	// Line 697, Address: 0x26be94, Func Offset: 0x2a4
	// Line 700, Address: 0x26bedc, Func Offset: 0x2ec
	// Line 697, Address: 0x26bee0, Func Offset: 0x2f0
	// Line 781, Address: 0x26bee4, Func Offset: 0x2f4
	// Line 697, Address: 0x26bee8, Func Offset: 0x2f8
	// Line 781, Address: 0x26beec, Func Offset: 0x2fc
	// Line 716, Address: 0x26bef0, Func Offset: 0x300
	// Line 700, Address: 0x26bef4, Func Offset: 0x304
	// Line 717, Address: 0x26bef8, Func Offset: 0x308
	// Line 752, Address: 0x26befc, Func Offset: 0x30c
	// Line 718, Address: 0x26bf00, Func Offset: 0x310
	// Line 716, Address: 0x26bf04, Func Offset: 0x314
	// Line 717, Address: 0x26bf08, Func Offset: 0x318
	// Line 718, Address: 0x26bf0c, Func Offset: 0x31c
	// Line 716, Address: 0x26bf10, Func Offset: 0x320
	// Line 717, Address: 0x26bf14, Func Offset: 0x324
	// Line 718, Address: 0x26bf18, Func Offset: 0x328
	// Line 720, Address: 0x26bf1c, Func Offset: 0x32c
	// Line 700, Address: 0x26bf20, Func Offset: 0x330
	// Line 720, Address: 0x26bf24, Func Offset: 0x334
	// Line 721, Address: 0x26bf34, Func Offset: 0x344
	// Line 732, Address: 0x26bf38, Func Offset: 0x348
	// Line 733, Address: 0x26bf3c, Func Offset: 0x34c
	// Line 722, Address: 0x26bf40, Func Offset: 0x350
	// Line 734, Address: 0x26bf44, Func Offset: 0x354
	// Line 732, Address: 0x26bf48, Func Offset: 0x358
	// Line 733, Address: 0x26bf4c, Func Offset: 0x35c
	// Line 734, Address: 0x26bf50, Func Offset: 0x360
	// Line 732, Address: 0x26bf54, Func Offset: 0x364
	// Line 733, Address: 0x26bf58, Func Offset: 0x368
	// Line 734, Address: 0x26bf5c, Func Offset: 0x36c
	// Line 752, Address: 0x26bf60, Func Offset: 0x370
	// Line 736, Address: 0x26bf64, Func Offset: 0x374
	// Line 737, Address: 0x26bf74, Func Offset: 0x384
	// Line 738, Address: 0x26bf78, Func Offset: 0x388
	// Line 753, Address: 0x26bf7c, Func Offset: 0x38c
	// Line 740, Address: 0x26bf80, Func Offset: 0x390
	// Line 754, Address: 0x26bf84, Func Offset: 0x394
	// Line 752, Address: 0x26bf88, Func Offset: 0x398
	// Line 753, Address: 0x26bf8c, Func Offset: 0x39c
	// Line 754, Address: 0x26bf90, Func Offset: 0x3a0
	// Line 753, Address: 0x26bf94, Func Offset: 0x3a4
	// Line 754, Address: 0x26bf98, Func Offset: 0x3a8
	// Line 768, Address: 0x26bf9c, Func Offset: 0x3ac
	// Line 756, Address: 0x26bfa0, Func Offset: 0x3b0
	// Line 757, Address: 0x26bfb0, Func Offset: 0x3c0
	// Line 769, Address: 0x26bfb4, Func Offset: 0x3c4
	// Line 758, Address: 0x26bfb8, Func Offset: 0x3c8
	// Line 770, Address: 0x26bfbc, Func Offset: 0x3cc
	// Line 768, Address: 0x26bfc0, Func Offset: 0x3d0
	// Line 769, Address: 0x26bfc8, Func Offset: 0x3d8
	// Line 770, Address: 0x26bfd0, Func Offset: 0x3e0
	// Line 772, Address: 0x26bfd8, Func Offset: 0x3e8
	// Line 773, Address: 0x26bfe8, Func Offset: 0x3f8
	// Line 774, Address: 0x26bfec, Func Offset: 0x3fc
	// Line 781, Address: 0x26bff0, Func Offset: 0x400
	// Line 790, Address: 0x26bff8, Func Offset: 0x408
	// Line 792, Address: 0x26c004, Func Offset: 0x414
	// Line 793, Address: 0x26c00c, Func Offset: 0x41c
	// Line 805, Address: 0x26c010, Func Offset: 0x420
	// Line 793, Address: 0x26c014, Func Offset: 0x424
	// Line 805, Address: 0x26c018, Func Offset: 0x428
	// Line 811, Address: 0x26c024, Func Offset: 0x434
	// Line 812, Address: 0x26c034, Func Offset: 0x444
	// Line 815, Address: 0x26c03c, Func Offset: 0x44c
	// Line 817, Address: 0x26c054, Func Offset: 0x464
	// Line 820, Address: 0x26c05c, Func Offset: 0x46c
	// Line 822, Address: 0x26c074, Func Offset: 0x484
	// Line 829, Address: 0x26c07c, Func Offset: 0x48c
	// Line 831, Address: 0x26c088, Func Offset: 0x498
	// Line 832, Address: 0x26c098, Func Offset: 0x4a8
	// Line 834, Address: 0x26c0b0, Func Offset: 0x4c0
	// Line 837, Address: 0x26c0c0, Func Offset: 0x4d0
	// Line 838, Address: 0x26c0d0, Func Offset: 0x4e0
	// Line 840, Address: 0x26c0e8, Func Offset: 0x4f8
	// Line 844, Address: 0x26c0fc, Func Offset: 0x50c
	// Line 872, Address: 0x26c108, Func Offset: 0x518
	// Line 875, Address: 0x26c110, Func Offset: 0x520
	// Line 876, Address: 0x26c124, Func Offset: 0x534
	// Line 879, Address: 0x26c12c, Func Offset: 0x53c
	// Line 880, Address: 0x26c144, Func Offset: 0x554
	// Line 884, Address: 0x26c14c, Func Offset: 0x55c
	// Line 889, Address: 0x26c154, Func Offset: 0x564
	// Line 891, Address: 0x26c15c, Func Offset: 0x56c
	// Line 854, Address: 0x26c168, Func Offset: 0x578
	// Line 891, Address: 0x26c16c, Func Offset: 0x57c
	// Line 856, Address: 0x26c17c, Func Offset: 0x58c
	// Line 891, Address: 0x26c180, Func Offset: 0x590
	// Line 860, Address: 0x26c18c, Func Offset: 0x59c
	// Line 891, Address: 0x26c190, Func Offset: 0x5a0
	// Line 860, Address: 0x26c194, Func Offset: 0x5a4
	// Line 891, Address: 0x26c198, Func Offset: 0x5a8
	// Line 864, Address: 0x26c1ac, Func Offset: 0x5bc
	// Line 891, Address: 0x26c1b0, Func Offset: 0x5c0
	// Line 864, Address: 0x26c1b4, Func Offset: 0x5c4
	// Line 891, Address: 0x26c1b8, Func Offset: 0x5c8
	// Line 868, Address: 0x26c1d4, Func Offset: 0x5e4
	// Line 891, Address: 0x26c1dc, Func Offset: 0x5ec
	// Line 871, Address: 0x26c1ec, Func Offset: 0x5fc
	// Line 891, Address: 0x26c1f4, Func Offset: 0x604
	// Line 854, Address: 0x26c1f8, Func Offset: 0x608
	// Line 891, Address: 0x26c1fc, Func Offset: 0x60c
	// Line 892, Address: 0x26c20c, Func Offset: 0x61c
	// Func End, Address: 0x26c238, Func Offset: 0x648
}

// Timestep__11zMODSupportFf
// Start address: 0x26c240
void zMODSupport::Timestep()
{
	// Line 140, Address: 0x26c240, Func Offset: 0
	// Func End, Address: 0x26c248, Func Offset: 0x8
}

// SceneReset__11zMODSupportFv
// Start address: 0x26c250
void zMODSupport::SceneReset()
{
	// Line 132, Address: 0x26c250, Func Offset: 0
	// Func End, Address: 0x26c258, Func Offset: 0x8
}

// ScenePostInit__11zMODSupportFv
// Start address: 0x26c260
void zMODSupport::ScenePostInit()
{
	// Line 120, Address: 0x26c260, Func Offset: 0
	// Line 122, Address: 0x26c274, Func Offset: 0x14
	// Line 120, Address: 0x26c278, Func Offset: 0x18
	// Line 122, Address: 0x26c27c, Func Offset: 0x1c
	// Line 123, Address: 0x26c348, Func Offset: 0xe8
	// Line 122, Address: 0x26c360, Func Offset: 0x100
	// Line 124, Address: 0x26c368, Func Offset: 0x108
	// Func End, Address: 0x26c384, Func Offset: 0x124
}

// SceneFinish__11zMODSupportFv
// Start address: 0x26c390
void zMODSupport::SceneFinish()
{
	// Line 117, Address: 0x26c390, Func Offset: 0
	// Func End, Address: 0x26c398, Func Offset: 0x8
}

// ScenePrepare__11zMODSupportFv
// Start address: 0x26c3a0
void zMODSupport::ScenePrepare()
{
	// Line 109, Address: 0x26c3a0, Func Offset: 0
	// Func End, Address: 0x26c3a8, Func Offset: 0x8
}

