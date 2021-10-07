



void xShadowSimple_Add_Expert(xShadowSimpleCache* cache, xMat4x3* mat_owner, uint8 alpha, float32 radius, float32 height, float32 ecc);
void xShadowSimple_CacheInit_Expert(xShadowSimpleCache* cache, RwRaster* rast, uint8 alpha);
void xShadowSimple_Render();
void xShadowSimple_Add(xShadowSimpleCache* cache, xEnt* ent, float32 radius, float32 ecc);
void xShadowSimple_CacheInit(xShadowSimpleCache* cache, xEnt* ent, uint8 alpha);
void xShadowSimple_Reset();
void xShadowSimple_Init();
void xShadowSimple_AddVerts(xShadowSimpleCache* cache);
void xShadowSimple_CalcCorners(xShadowSimpleCache* cache, xMat4x3* mat, float32 radius, float32 ecc);
void xShadowSimple_SceneCollide(xShadowSimpleCache* cache, xVec3* pos, float32 depth);
int32 shadowRayEntCB(xEnt* ent, void* cbdata);
RpCollisionTriangle* shadowRayModelCB(RpIntersection* isx, RpCollisionTriangle* tri, float32 dist, void* data);
RpCollisionTriangle* shadowRayCB(RpCollisionTriangle* tri, float32 dist, void* data);

// xShadowSimple_Add_Expert__FP18xShadowSimpleCachePC7xMat4x3Ucfff
// Start address: 0x458140
void xShadowSimple_Add_Expert(xShadowSimpleCache* cache, xMat4x3* mat_owner, uint8 alpha, float32 radius, float32 height, float32 ecc)
{
	uint32 ownerMoved;
	xVec3 delta;
	float32 ds2_moved;
	// Line 701, Address: 0x458140, Func Offset: 0
	// Line 706, Address: 0x458148, Func Offset: 0x8
	// Line 701, Address: 0x45814c, Func Offset: 0xc
	// Line 706, Address: 0x458174, Func Offset: 0x34
	// Line 705, Address: 0x458178, Func Offset: 0x38
	// Line 706, Address: 0x458180, Func Offset: 0x40
	// Line 707, Address: 0x458188, Func Offset: 0x48
	// Line 709, Address: 0x45818c, Func Offset: 0x4c
	// Line 710, Address: 0x4581b0, Func Offset: 0x70
	// Line 714, Address: 0x4581b8, Func Offset: 0x78
	// Line 716, Address: 0x4581c4, Func Offset: 0x84
	// Line 719, Address: 0x4581c8, Func Offset: 0x88
	// Line 716, Address: 0x4581cc, Func Offset: 0x8c
	// Line 719, Address: 0x4581d0, Func Offset: 0x90
	// Line 717, Address: 0x4581d4, Func Offset: 0x94
	// Line 719, Address: 0x4581d8, Func Offset: 0x98
	// Line 717, Address: 0x4581dc, Func Offset: 0x9c
	// Line 719, Address: 0x4581e0, Func Offset: 0xa0
	// Line 721, Address: 0x4581e8, Func Offset: 0xa8
	// Line 725, Address: 0x4581ec, Func Offset: 0xac
	// Line 721, Address: 0x4581f4, Func Offset: 0xb4
	// Line 722, Address: 0x4581fc, Func Offset: 0xbc
	// Line 721, Address: 0x458204, Func Offset: 0xc4
	// Line 722, Address: 0x458208, Func Offset: 0xc8
	// Line 721, Address: 0x45820c, Func Offset: 0xcc
	// Line 722, Address: 0x458214, Func Offset: 0xd4
	// Line 725, Address: 0x45821c, Func Offset: 0xdc
	// Line 722, Address: 0x458224, Func Offset: 0xe4
	// Line 725, Address: 0x458228, Func Offset: 0xe8
	// Line 728, Address: 0x458238, Func Offset: 0xf8
	// Line 729, Address: 0x458248, Func Offset: 0x108
	// Line 730, Address: 0x458250, Func Offset: 0x110
	// Line 735, Address: 0x458258, Func Offset: 0x118
	// Line 736, Address: 0x458260, Func Offset: 0x120
	// Line 737, Address: 0x458270, Func Offset: 0x130
	// Line 736, Address: 0x458274, Func Offset: 0x134
	// Line 738, Address: 0x458294, Func Offset: 0x154
	// Line 736, Address: 0x458298, Func Offset: 0x158
	// Line 738, Address: 0x4582a4, Func Offset: 0x164
	// Line 736, Address: 0x4582a8, Func Offset: 0x168
	// Line 737, Address: 0x4582ec, Func Offset: 0x1ac
	// Line 736, Address: 0x4582f4, Func Offset: 0x1b4
	// Line 737, Address: 0x4582f8, Func Offset: 0x1b8
	// Line 738, Address: 0x4582fc, Func Offset: 0x1bc
	// Line 739, Address: 0x45830c, Func Offset: 0x1cc
	// Line 745, Address: 0x458314, Func Offset: 0x1d4
	// Line 752, Address: 0x458370, Func Offset: 0x230
	// Line 755, Address: 0x458398, Func Offset: 0x258
	// Line 756, Address: 0x4586f0, Func Offset: 0x5b0
	// Line 757, Address: 0x4586f8, Func Offset: 0x5b8
	// Line 761, Address: 0x458730, Func Offset: 0x5f0
	// Line 763, Address: 0x458a8c, Func Offset: 0x94c
	// Line 764, Address: 0x458a94, Func Offset: 0x954
	// Line 768, Address: 0x458a98, Func Offset: 0x958
	// Line 769, Address: 0x458aa0, Func Offset: 0x960
	// Line 770, Address: 0x458ab0, Func Offset: 0x970
	// Line 771, Address: 0x458abc, Func Offset: 0x97c
	// Line 773, Address: 0x458acc, Func Offset: 0x98c
	// Line 776, Address: 0x458ad8, Func Offset: 0x998
	// Line 777, Address: 0x458ee0, Func Offset: 0xda0
	// Line 782, Address: 0x458ee8, Func Offset: 0xda8
	// Line 783, Address: 0x458ef8, Func Offset: 0xdb8
	// Line 786, Address: 0x458f00, Func Offset: 0xdc0
	// Func End, Address: 0x458f28, Func Offset: 0xde8
}

// xShadowSimple_CacheInit_Expert__FP18xShadowSimpleCacheP8RwRasterUc
// Start address: 0x458f30
void xShadowSimple_CacheInit_Expert(xShadowSimpleCache* cache, RwRaster* rast, uint8 alpha)
{
	// Line 549, Address: 0x458f30, Func Offset: 0
	// Line 551, Address: 0x458f50, Func Offset: 0x20
	// Line 553, Address: 0x458f5c, Func Offset: 0x2c
	// Line 555, Address: 0x458f60, Func Offset: 0x30
	// Line 553, Address: 0x458f64, Func Offset: 0x34
	// Line 558, Address: 0x458f68, Func Offset: 0x38
	// Line 553, Address: 0x458f6c, Func Offset: 0x3c
	// Line 563, Address: 0x458f70, Func Offset: 0x40
	// Line 554, Address: 0x458f74, Func Offset: 0x44
	// Line 563, Address: 0x458f78, Func Offset: 0x48
	// Line 555, Address: 0x458f7c, Func Offset: 0x4c
	// Line 556, Address: 0x458f80, Func Offset: 0x50
	// Line 557, Address: 0x458f84, Func Offset: 0x54
	// Line 558, Address: 0x458f88, Func Offset: 0x58
	// Line 565, Address: 0x458f8c, Func Offset: 0x5c
	// Line 566, Address: 0x458f94, Func Offset: 0x64
	// Line 570, Address: 0x458f98, Func Offset: 0x68
	// Line 571, Address: 0x458fac, Func Offset: 0x7c
	// Func End, Address: 0x458fc0, Func Offset: 0x90
}

// xShadowSimple_Render__Fv
// Start address: 0x458fc0
void xShadowSimple_Render()
{
	int32 qnum;
	uint32 i;
	uint32 j;
	RwRaster* raster;
	// Line 472, Address: 0x458fc0, Func Offset: 0
	// Line 475, Address: 0x458fe0, Func Offset: 0x20
	// Line 472, Address: 0x458fe8, Func Offset: 0x28
	// Line 475, Address: 0x458fec, Func Offset: 0x2c
	// Line 476, Address: 0x458ff4, Func Offset: 0x34
	// Line 480, Address: 0x458ffc, Func Offset: 0x3c
	// Line 481, Address: 0x459010, Func Offset: 0x50
	// Line 482, Address: 0x45902c, Func Offset: 0x6c
	// Line 483, Address: 0x459048, Func Offset: 0x88
	// Line 487, Address: 0x45905c, Func Offset: 0x9c
	// Line 488, Address: 0x459064, Func Offset: 0xa4
	// Line 490, Address: 0x459068, Func Offset: 0xa8
	// Line 489, Address: 0x45906c, Func Offset: 0xac
	// Line 490, Address: 0x459070, Func Offset: 0xb0
	// Line 494, Address: 0x45907c, Func Offset: 0xbc
	// Line 498, Address: 0x459088, Func Offset: 0xc8
	// Line 501, Address: 0x459094, Func Offset: 0xd4
	// Line 498, Address: 0x459098, Func Offset: 0xd8
	// Line 501, Address: 0x45909c, Func Offset: 0xdc
	// Line 502, Address: 0x4590a8, Func Offset: 0xe8
	// Line 503, Address: 0x4590b8, Func Offset: 0xf8
	// Line 504, Address: 0x4590c8, Func Offset: 0x108
	// Line 505, Address: 0x4590d8, Func Offset: 0x118
	// Line 508, Address: 0x4590e8, Func Offset: 0x128
	// Line 509, Address: 0x4590ec, Func Offset: 0x12c
	// Line 510, Address: 0x459108, Func Offset: 0x148
	// Line 512, Address: 0x459118, Func Offset: 0x158
	// Line 510, Address: 0x459128, Func Offset: 0x168
	// Line 513, Address: 0x459134, Func Offset: 0x174
	// Line 515, Address: 0x459160, Func Offset: 0x1a0
	// Line 517, Address: 0x459170, Func Offset: 0x1b0
	// Line 519, Address: 0x459178, Func Offset: 0x1b8
	// Line 520, Address: 0x45917c, Func Offset: 0x1bc
	// Line 523, Address: 0x459188, Func Offset: 0x1c8
	// Line 524, Address: 0x45919c, Func Offset: 0x1dc
	// Line 525, Address: 0x4591b0, Func Offset: 0x1f0
	// Line 527, Address: 0x4591c4, Func Offset: 0x204
	// Line 529, Address: 0x4591e4, Func Offset: 0x224
	// Line 532, Address: 0x459204, Func Offset: 0x244
	// Line 517, Address: 0x45920c, Func Offset: 0x24c
	// Line 532, Address: 0x459210, Func Offset: 0x250
	// Line 517, Address: 0x45924c, Func Offset: 0x28c
	// Line 532, Address: 0x459250, Func Offset: 0x290
	// Func End, Address: 0x459300, Func Offset: 0x340
}

// xShadowSimple_Add__FP18xShadowSimpleCacheP4xEntff
// Start address: 0x459300
void xShadowSimple_Add(xShadowSimpleCache* cache, xEnt* ent, float32 radius, float32 ecc)
{
	// Line 466, Address: 0x459300, Func Offset: 0
	// Func End, Address: 0x45931c, Func Offset: 0x1c
}

// xShadowSimple_CacheInit__FP18xShadowSimpleCacheP4xEntUc
// Start address: 0x459320
void xShadowSimple_CacheInit(xShadowSimpleCache* cache, xEnt* ent, uint8 alpha)
{
	int32 i;
	int32 n;
	uint32 j;
	zSimpleShadowTableHeader* sst;
	RwRaster* raster;
	uint32 flags;
	uint32 size;
	RwTexture* tex;
	// Line 392, Address: 0x459320, Func Offset: 0
	// Line 394, Address: 0x45933c, Func Offset: 0x1c
	// Line 392, Address: 0x459340, Func Offset: 0x20
	// Line 394, Address: 0x45935c, Func Offset: 0x3c
	// Line 395, Address: 0x459364, Func Offset: 0x44
	// Line 397, Address: 0x459368, Func Offset: 0x48
	// Line 395, Address: 0x45936c, Func Offset: 0x4c
	// Line 396, Address: 0x459378, Func Offset: 0x58
	// Line 397, Address: 0x45937c, Func Offset: 0x5c
	// Line 398, Address: 0x459380, Func Offset: 0x60
	// Line 399, Address: 0x459384, Func Offset: 0x64
	// Line 402, Address: 0x45938c, Func Offset: 0x6c
	// Line 416, Address: 0x4593a8, Func Offset: 0x88
	// Line 410, Address: 0x4593ac, Func Offset: 0x8c
	// Line 416, Address: 0x4593b0, Func Offset: 0x90
	// Line 417, Address: 0x4593c0, Func Offset: 0xa0
	// Line 455, Address: 0x4593cc, Func Offset: 0xac
	// Line 458, Address: 0x4593e4, Func Offset: 0xc4
	// Line 459, Address: 0x4593e8, Func Offset: 0xc8
	// Line 458, Address: 0x4593ec, Func Offset: 0xcc
	// Line 459, Address: 0x4593f0, Func Offset: 0xd0
	// Line 460, Address: 0x459400, Func Offset: 0xe0
	// Line 461, Address: 0x459404, Func Offset: 0xe4
	// Line 418, Address: 0x45940c, Func Offset: 0xec
	// Line 461, Address: 0x459418, Func Offset: 0xf8
	// Line 418, Address: 0x459424, Func Offset: 0x104
	// Line 461, Address: 0x459428, Func Offset: 0x108
	// Line 439, Address: 0x459454, Func Offset: 0x134
	// Line 461, Address: 0x459458, Func Offset: 0x138
	// Line 442, Address: 0x459474, Func Offset: 0x154
	// Line 461, Address: 0x459478, Func Offset: 0x158
	// Line 432, Address: 0x4594b0, Func Offset: 0x190
	// Line 433, Address: 0x4594b8, Func Offset: 0x198
	// Line 455, Address: 0x4594c4, Func Offset: 0x1a4
	// Line 461, Address: 0x4594d0, Func Offset: 0x1b0
	// Func End, Address: 0x459500, Func Offset: 0x1e0
}

// xShadowSimple_Reset__Fv
// Start address: 0x459500
void xShadowSimple_Reset()
{
	// Line 385, Address: 0x459500, Func Offset: 0
	// Func End, Address: 0x459514, Func Offset: 0x14
}

// xShadowSimple_Init__Fv
// Start address: 0x459520
void xShadowSimple_Init()
{
	RwTexture* tex;
	uint32 i;
	// Line 351, Address: 0x459520, Func Offset: 0
	// Line 353, Address: 0x459524, Func Offset: 0x4
	// Line 351, Address: 0x459528, Func Offset: 0x8
	// Line 353, Address: 0x45952c, Func Offset: 0xc
	// Line 356, Address: 0x45953c, Func Offset: 0x1c
	// Line 357, Address: 0x45954c, Func Offset: 0x2c
	// Line 358, Address: 0x459554, Func Offset: 0x34
	// Line 365, Address: 0x45955c, Func Offset: 0x3c
	// Line 366, Address: 0x459570, Func Offset: 0x50
	// Line 367, Address: 0x45957c, Func Offset: 0x5c
	// Line 379, Address: 0x459584, Func Offset: 0x64
	// Line 368, Address: 0x459588, Func Offset: 0x68
	// Line 379, Address: 0x45958c, Func Offset: 0x6c
	// Line 369, Address: 0x459590, Func Offset: 0x70
	// Line 370, Address: 0x459594, Func Offset: 0x74
	// Line 371, Address: 0x459598, Func Offset: 0x78
	// Line 372, Address: 0x45959c, Func Offset: 0x7c
	// Line 373, Address: 0x4595a0, Func Offset: 0x80
	// Line 374, Address: 0x4595ac, Func Offset: 0x8c
	// Line 375, Address: 0x4595b8, Func Offset: 0x98
	// Line 376, Address: 0x4595c4, Func Offset: 0xa4
	// Line 377, Address: 0x4595d0, Func Offset: 0xb0
	// Line 378, Address: 0x4595dc, Func Offset: 0xbc
	// Line 379, Address: 0x4595e8, Func Offset: 0xc8
	// Line 380, Address: 0x4595f0, Func Offset: 0xd0
	// Func End, Address: 0x459608, Func Offset: 0xe8
}

// xShadowSimple_AddVerts__FP18xShadowSimpleCache
// Start address: 0x459610
void xShadowSimple_AddVerts(xShadowSimpleCache* cache)
{
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	// Line 326, Address: 0x459610, Func Offset: 0
	// Line 330, Address: 0x459640, Func Offset: 0x30
	// Line 331, Address: 0x459664, Func Offset: 0x54
	// Line 335, Address: 0x45966c, Func Offset: 0x5c
	// Line 331, Address: 0x459670, Func Offset: 0x60
	// Line 332, Address: 0x459678, Func Offset: 0x68
	// Line 330, Address: 0x45967c, Func Offset: 0x6c
	// Line 332, Address: 0x459680, Func Offset: 0x70
	// Line 330, Address: 0x459684, Func Offset: 0x74
	// Line 332, Address: 0x459688, Func Offset: 0x78
	// Line 330, Address: 0x45968c, Func Offset: 0x7c
	// Line 331, Address: 0x459690, Func Offset: 0x80
	// Line 332, Address: 0x459698, Func Offset: 0x88
	// Line 331, Address: 0x45969c, Func Offset: 0x8c
	// Line 332, Address: 0x4596a0, Func Offset: 0x90
	// Line 331, Address: 0x4596a4, Func Offset: 0x94
	// Line 333, Address: 0x4596a8, Func Offset: 0x98
	// Line 334, Address: 0x4596b4, Func Offset: 0xa4
	// Line 333, Address: 0x4596b8, Func Offset: 0xa8
	// Line 334, Address: 0x4596bc, Func Offset: 0xac
	// Line 331, Address: 0x4596c4, Func Offset: 0xb4
	// Line 333, Address: 0x4596c8, Func Offset: 0xb8
	// Line 331, Address: 0x4596cc, Func Offset: 0xbc
	// Line 334, Address: 0x4596d0, Func Offset: 0xc0
	// Line 331, Address: 0x4596d4, Func Offset: 0xc4
	// Line 335, Address: 0x4596d8, Func Offset: 0xc8
	// Line 332, Address: 0x4596dc, Func Offset: 0xcc
	// Line 335, Address: 0x4596e0, Func Offset: 0xd0
	// Line 332, Address: 0x4596e4, Func Offset: 0xd4
	// Line 335, Address: 0x4596e8, Func Offset: 0xd8
	// Line 332, Address: 0x4596ec, Func Offset: 0xdc
	// Line 345, Address: 0x4596f0, Func Offset: 0xe0
	// Line 334, Address: 0x4596f8, Func Offset: 0xe8
	// Line 335, Address: 0x4596fc, Func Offset: 0xec
	// Line 345, Address: 0x459700, Func Offset: 0xf0
	// Line 347, Address: 0x459708, Func Offset: 0xf8
	// Line 345, Address: 0x45970c, Func Offset: 0xfc
	// Line 332, Address: 0x459710, Func Offset: 0x100
	// Line 333, Address: 0x45971c, Func Offset: 0x10c
	// Line 345, Address: 0x459728, Func Offset: 0x118
	// Line 333, Address: 0x459734, Func Offset: 0x124
	// Line 345, Address: 0x459738, Func Offset: 0x128
	// Line 333, Address: 0x45973c, Func Offset: 0x12c
	// Line 334, Address: 0x459744, Func Offset: 0x134
	// Line 335, Address: 0x45975c, Func Offset: 0x14c
	// Line 338, Address: 0x459774, Func Offset: 0x164
	// Line 339, Address: 0x459788, Func Offset: 0x178
	// Line 340, Address: 0x45979c, Func Offset: 0x18c
	// Line 341, Address: 0x4597b0, Func Offset: 0x1a0
	// Line 342, Address: 0x4597c4, Func Offset: 0x1b4
	// Line 343, Address: 0x4597d8, Func Offset: 0x1c8
	// Line 345, Address: 0x4597ec, Func Offset: 0x1dc
	// Line 347, Address: 0x4597f4, Func Offset: 0x1e4
	// Line 348, Address: 0x4597f8, Func Offset: 0x1e8
	// Func End, Address: 0x459800, Func Offset: 0x1f0
}

// xShadowSimple_CalcCorners__FP18xShadowSimpleCachePC7xMat4x3ff
// Start address: 0x459800
void xShadowSimple_CalcCorners(xShadowSimpleCache* cache, xMat4x3* mat, float32 radius, float32 ecc)
{
	xVec3 tempnorm;
	// Line 251, Address: 0x459800, Func Offset: 0
	// Line 255, Address: 0x459804, Func Offset: 0x4
	// Line 251, Address: 0x459808, Func Offset: 0x8
	// Line 255, Address: 0x45980c, Func Offset: 0xc
	// Line 251, Address: 0x459810, Func Offset: 0x10
	// Line 255, Address: 0x459814, Func Offset: 0x14
	// Line 251, Address: 0x459818, Func Offset: 0x18
	// Line 255, Address: 0x45982c, Func Offset: 0x2c
	// Line 267, Address: 0x459844, Func Offset: 0x44
	// Line 269, Address: 0x45984c, Func Offset: 0x4c
	// Line 270, Address: 0x4598a4, Func Offset: 0xa4
	// Line 271, Address: 0x4598b0, Func Offset: 0xb0
	// Line 272, Address: 0x4598c4, Func Offset: 0xc4
	// Line 278, Address: 0x4598d8, Func Offset: 0xd8
	// Line 279, Address: 0x4598e8, Func Offset: 0xe8
	// Line 280, Address: 0x4598ec, Func Offset: 0xec
	// Line 282, Address: 0x4598f0, Func Offset: 0xf0
	// Line 283, Address: 0x4598f4, Func Offset: 0xf4
	// Line 280, Address: 0x4598f8, Func Offset: 0xf8
	// Line 279, Address: 0x459900, Func Offset: 0x100
	// Line 280, Address: 0x459908, Func Offset: 0x108
	// Line 282, Address: 0x45990c, Func Offset: 0x10c
	// Line 280, Address: 0x459910, Func Offset: 0x110
	// Line 281, Address: 0x459914, Func Offset: 0x114
	// Line 283, Address: 0x459918, Func Offset: 0x118
	// Line 281, Address: 0x45991c, Func Offset: 0x11c
	// Line 284, Address: 0x459920, Func Offset: 0x120
	// Line 285, Address: 0x459924, Func Offset: 0x124
	// Line 291, Address: 0x45992c, Func Offset: 0x12c
	// Line 288, Address: 0x459930, Func Offset: 0x130
	// Line 286, Address: 0x459934, Func Offset: 0x134
	// Line 288, Address: 0x459938, Func Offset: 0x138
	// Line 287, Address: 0x45993c, Func Offset: 0x13c
	// Line 291, Address: 0x459940, Func Offset: 0x140
	// Line 289, Address: 0x459944, Func Offset: 0x144
	// Line 294, Address: 0x459948, Func Offset: 0x148
	// Line 295, Address: 0x45994c, Func Offset: 0x14c
	// Line 296, Address: 0x459950, Func Offset: 0x150
	// Line 295, Address: 0x459954, Func Offset: 0x154
	// Line 294, Address: 0x45995c, Func Offset: 0x15c
	// Line 295, Address: 0x459964, Func Offset: 0x164
	// Line 296, Address: 0x459968, Func Offset: 0x168
	// Line 303, Address: 0x45996c, Func Offset: 0x16c
	// Line 295, Address: 0x459970, Func Offset: 0x170
	// Line 296, Address: 0x45997c, Func Offset: 0x17c
	// Line 297, Address: 0x459980, Func Offset: 0x180
	// Line 300, Address: 0x459984, Func Offset: 0x184
	// Line 297, Address: 0x459988, Func Offset: 0x188
	// Line 298, Address: 0x45998c, Func Offset: 0x18c
	// Line 299, Address: 0x459990, Func Offset: 0x190
	// Line 302, Address: 0x459994, Func Offset: 0x194
	// Line 298, Address: 0x459998, Func Offset: 0x198
	// Line 299, Address: 0x4599a4, Func Offset: 0x1a4
	// Line 300, Address: 0x4599a8, Func Offset: 0x1a8
	// Line 301, Address: 0x4599ac, Func Offset: 0x1ac
	// Line 305, Address: 0x4599b0, Func Offset: 0x1b0
	// Line 301, Address: 0x4599b4, Func Offset: 0x1b4
	// Line 302, Address: 0x4599c0, Func Offset: 0x1c0
	// Line 303, Address: 0x4599c4, Func Offset: 0x1c4
	// Line 304, Address: 0x4599c8, Func Offset: 0x1c8
	// Line 305, Address: 0x4599d8, Func Offset: 0x1d8
	// Line 321, Address: 0x4599dc, Func Offset: 0x1dc
	// Func End, Address: 0x4599f8, Func Offset: 0x1f8
}

// xShadowSimple_SceneCollide__FP18xShadowSimpleCachePC5xVec3f
// Start address: 0x459a00
void xShadowSimple_SceneCollide(xShadowSimpleCache* cache, xVec3* pos, float32 depth)
{
	xEnv* env;
	RpIntersection isx;
	int32 i;
	ShadowSimpleCBParam cbparam;
	xQCData qcd;
	// Line 180, Address: 0x459a00, Func Offset: 0
	// Line 184, Address: 0x459a04, Func Offset: 0x4
	// Line 180, Address: 0x459a08, Func Offset: 0x8
	// Line 184, Address: 0x459a0c, Func Offset: 0xc
	// Line 180, Address: 0x459a10, Func Offset: 0x10
	// Line 195, Address: 0x459a14, Func Offset: 0x14
	// Line 180, Address: 0x459a18, Func Offset: 0x18
	// Line 194, Address: 0x459a1c, Func Offset: 0x1c
	// Line 180, Address: 0x459a20, Func Offset: 0x20
	// Line 196, Address: 0x459a24, Func Offset: 0x24
	// Line 180, Address: 0x459a28, Func Offset: 0x28
	// Line 193, Address: 0x459a2c, Func Offset: 0x2c
	// Line 180, Address: 0x459a30, Func Offset: 0x30
	// Line 194, Address: 0x459a34, Func Offset: 0x34
	// Line 180, Address: 0x459a38, Func Offset: 0x38
	// Line 197, Address: 0x459a3c, Func Offset: 0x3c
	// Line 184, Address: 0x459a40, Func Offset: 0x40
	// Line 185, Address: 0x459a48, Func Offset: 0x48
	// Line 186, Address: 0x459a4c, Func Offset: 0x4c
	// Line 195, Address: 0x459a50, Func Offset: 0x50
	// Line 187, Address: 0x459a54, Func Offset: 0x54
	// Line 195, Address: 0x459a58, Func Offset: 0x58
	// Line 191, Address: 0x459a5c, Func Offset: 0x5c
	// Line 195, Address: 0x459a60, Func Offset: 0x60
	// Line 191, Address: 0x459a6c, Func Offset: 0x6c
	// Line 198, Address: 0x459a70, Func Offset: 0x70
	// Line 191, Address: 0x459a74, Func Offset: 0x74
	// Line 193, Address: 0x459a78, Func Offset: 0x78
	// Line 195, Address: 0x459a7c, Func Offset: 0x7c
	// Line 198, Address: 0x459a80, Func Offset: 0x80
	// Line 194, Address: 0x459a84, Func Offset: 0x84
	// Line 197, Address: 0x459a88, Func Offset: 0x88
	// Line 196, Address: 0x459a8c, Func Offset: 0x8c
	// Line 199, Address: 0x459a90, Func Offset: 0x90
	// Line 204, Address: 0x459a94, Func Offset: 0x94
	// Line 212, Address: 0x459aac, Func Offset: 0xac
	// Line 213, Address: 0x459acc, Func Offset: 0xcc
	// Line 214, Address: 0x459ae8, Func Offset: 0xe8
	// Line 217, Address: 0x459aec, Func Offset: 0xec
	// Line 230, Address: 0x459b00, Func Offset: 0x100
	// Line 231, Address: 0x459b20, Func Offset: 0x120
	// Line 237, Address: 0x459b3c, Func Offset: 0x13c
	// Line 238, Address: 0x459b68, Func Offset: 0x168
	// Line 239, Address: 0x459b7c, Func Offset: 0x17c
	// Line 248, Address: 0x459b90, Func Offset: 0x190
	// Func End, Address: 0x459c74, Func Offset: 0x274
}

// shadowRayEntCB__FP4xEntPv
// Start address: 0x459c80
int32 shadowRayEntCB(xEnt* ent, void* cbdata)
{
	ShadowSimpleCBParam* cbparam;
	xModelInstance* m;
	float32 oldHeight;
	// Line 146, Address: 0x459c80, Func Offset: 0
	// Line 147, Address: 0x459c98, Func Offset: 0x18
	// Line 154, Address: 0x459ca8, Func Offset: 0x28
	// Line 157, Address: 0x459cb8, Func Offset: 0x38
	// Line 158, Address: 0x459cbc, Func Offset: 0x3c
	// Line 159, Address: 0x459cd0, Func Offset: 0x50
	// Line 148, Address: 0x459cd8, Func Offset: 0x58
	// Line 155, Address: 0x459ce0, Func Offset: 0x60
	// Line 165, Address: 0x459ce8, Func Offset: 0x68
	// Line 167, Address: 0x459cec, Func Offset: 0x6c
	// Line 165, Address: 0x459cf4, Func Offset: 0x74
	// Line 167, Address: 0x459cf8, Func Offset: 0x78
	// Line 168, Address: 0x459d04, Func Offset: 0x84
	// Line 169, Address: 0x459d08, Func Offset: 0x88
	// Line 168, Address: 0x459d0c, Func Offset: 0x8c
	// Line 169, Address: 0x459d10, Func Offset: 0x90
	// Line 170, Address: 0x459d24, Func Offset: 0xa4
	// Line 172, Address: 0x459d2c, Func Offset: 0xac
	// Line 173, Address: 0x459d3c, Func Offset: 0xbc
	// Line 176, Address: 0x459d40, Func Offset: 0xc0
	// Line 177, Address: 0x459d44, Func Offset: 0xc4
	// Func End, Address: 0x459d60, Func Offset: 0xe0
}

// shadowRayModelCB__FP14RpIntersectionP19RpCollisionTrianglefPv
// Start address: 0x459d60
RpCollisionTriangle* shadowRayModelCB(RpIntersection* isx, RpCollisionTriangle* tri, float32 dist, void* data)
{
	// Line 137, Address: 0x459d68, Func Offset: 0x8
	// Func End, Address: 0x459d74, Func Offset: 0x14
}

// shadowRayCB__FP14RpIntersectionP13RpWorldSectorP19RpCollisionTrianglefPv
// Start address: 0x459d80
RpCollisionTriangle* shadowRayCB(RpCollisionTriangle* tri, float32 dist, void* data)
{
	xVec3 xformnorm;
	xVec3* norm;
	float32* testdist;
	xShadowSimpleCache* cache;
	// Line 101, Address: 0x459d80, Func Offset: 0
	// Line 104, Address: 0x459da0, Func Offset: 0x20
	// Line 105, Address: 0x459da4, Func Offset: 0x24
	// Line 106, Address: 0x459dac, Func Offset: 0x2c
	// Line 107, Address: 0x459db0, Func Offset: 0x30
	// Line 108, Address: 0x459dfc, Func Offset: 0x7c
	// Line 110, Address: 0x459e04, Func Offset: 0x84
	// Line 111, Address: 0x459e0c, Func Offset: 0x8c
	// Line 112, Address: 0x459e10, Func Offset: 0x90
	// Line 117, Address: 0x459e14, Func Offset: 0x94
	// Line 118, Address: 0x459e44, Func Offset: 0xc4
	// Line 122, Address: 0x459e4c, Func Offset: 0xcc
	// Line 128, Address: 0x459e50, Func Offset: 0xd0
	// Line 123, Address: 0x459e54, Func Offset: 0xd4
	// Line 124, Address: 0x459e70, Func Offset: 0xf0
	// Line 125, Address: 0x459e8c, Func Offset: 0x10c
	// Line 126, Address: 0x459ea8, Func Offset: 0x128
	// Line 129, Address: 0x459ec0, Func Offset: 0x140
	// Func End, Address: 0x459edc, Func Offset: 0x15c
}

