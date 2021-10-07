



void xShadow_PickEntForNPC(xShadowMgr* mgr);
void xShadow_PickByRayCast(xShadowMgr* mgr);
void xShadowManager_Render();
void xShadowModelRender(xModelInstance* minst);
int32 CmpShadowMgr(void* a, void* b);
void xShadowManager_Remove(xEnt* ent);
void xShadowManager_Add(xEnt* ent);
void xShadowManager_Init(int32 numEnts);
void xShadowVertical_DrawCache(xShadowCache* cache, float32 shadowFactor, float32 fadeDist, int32 shadowMode, RwMatrixTag* shadowMat, RwRaster* shadowRast);
void xShadowVertical_FillCache(xShadowCache* cache, xVec3* pos, float32 r, float32 depth, float32 minNormY);
int32 shadowCacheEntityCB(xEnt* ent, void* cbdata);
int32 shadowCacheLeafCB(int32 numTriangles, int32 triOffset, void* data);
RpCollisionTriangle* shadowCacheEnvCB(RpCollisionTriangle* tri, void* data);
void xShadowSetVolume(RwCamera* shadowCamera, xVec3* pos, float32 depth);
void DrawAlphaBox(xVec3* volume, int32 frontface, uint8 alpha);
void DrawTwoSidedAlphaBoxPS2(xVec3* volume);
uint8 ShadowInsideBoxAdjust(xVec3* volume);
RwCamera* ShadowCameraSetSpherePersp(RwCamera* camera, RwV3d* center, float32 radius);
void ShadowRenderCachePolys(_ProjectionParam* param, xShadowPoly* poly, int32 count);
RwCamera* ShadowCameraUpdate(RwCamera* shadowCamera, void* model, void(*renderCB)(void*));
void ShadowCameraDestroy(RwCamera* shadowCamera);
int32 Im2DRenderQuad(float32 x1, float32 y1, float32 x2, float32 y2, float32 z, float32 recipCamZ, float32 uvOffset);
void xShadow_ListAdd(xEnt* ent);
void xShadowReceiveShadow(xEnt* ent, float32 shadowFactor, int32 shadowMode, RwMatrixTag* shadowMat, RwRaster* shadowRast);
void xShadowReceiveShadowFastPS2(xEnt* ent, float32 shadowFactor, int32 shadowMode, RwMatrixTag* shadowMat, RwRaster* shadowRast);
uint32 xShadowReceiveShadowSetup(xEnt* ent);
void xShadowCameraUpdate(void* model, void(*renderCB)(void*), xVec3* center, float32 radius, int32 shadowMode);
void xShadowSetLight(xVec3* target_pos, xVec3* in_vec);
void xShadowSetWorld(RpWorld* world);
int32 SetupShadow();
void xShadowInit();

// xShadow_PickEntForNPC__FP10xShadowMgr
// Start address: 0x459ee0
void xShadow_PickEntForNPC(xShadowMgr* mgr)
{
	// Line 5656, Address: 0x459ee0, Func Offset: 0
	// Line 5657, Address: 0x459ee4, Func Offset: 0x4
	// Line 5656, Address: 0x459ee8, Func Offset: 0x8
	// Line 5657, Address: 0x459eec, Func Offset: 0xc
	// Line 5659, Address: 0x459efc, Func Offset: 0x1c
	// Line 5660, Address: 0x459f10, Func Offset: 0x30
	// Line 5712, Address: 0x459f18, Func Offset: 0x38
	// Line 5744, Address: 0x459f20, Func Offset: 0x40
	// Func End, Address: 0x459f2c, Func Offset: 0x4c
}

// xShadow_PickByRayCast__FP10xShadowMgr
// Start address: 0x459f30
void xShadow_PickByRayCast(xShadowMgr* mgr)
{
	xEnt* ent_best;
	int32 idx_best;
	xCollis colrec;
	xRay3 ray;
	int32 num;
	int32 i;
	xEnt* ep;
	// Line 5592, Address: 0x459f30, Func Offset: 0
	// Line 5600, Address: 0x459f34, Func Offset: 0x4
	// Line 5592, Address: 0x459f38, Func Offset: 0x8
	// Line 5600, Address: 0x459f3c, Func Offset: 0xc
	// Line 5592, Address: 0x459f40, Func Offset: 0x10
	// Line 5595, Address: 0x459f50, Func Offset: 0x20
	// Line 5592, Address: 0x459f54, Func Offset: 0x24
	// Line 5600, Address: 0x459f60, Func Offset: 0x30
	// Line 5592, Address: 0x459f64, Func Offset: 0x34
	// Line 5596, Address: 0x459f68, Func Offset: 0x38
	// Line 5592, Address: 0x459f6c, Func Offset: 0x3c
	// Line 5600, Address: 0x459f70, Func Offset: 0x40
	// Line 5604, Address: 0x459f78, Func Offset: 0x48
	// Line 5605, Address: 0x459f7c, Func Offset: 0x4c
	// Line 5604, Address: 0x459f80, Func Offset: 0x50
	// Line 5606, Address: 0x459f9c, Func Offset: 0x6c
	// Line 5604, Address: 0x459fa4, Func Offset: 0x74
	// Line 5607, Address: 0x459fa8, Func Offset: 0x78
	// Line 5610, Address: 0x459fb0, Func Offset: 0x80
	// Line 5612, Address: 0x459fb8, Func Offset: 0x88
	// Line 5639, Address: 0x459fc4, Func Offset: 0x94
	// Line 5643, Address: 0x459fd0, Func Offset: 0xa0
	// Line 5644, Address: 0x459fe0, Func Offset: 0xb0
	// Line 5647, Address: 0x459fe8, Func Offset: 0xb8
	// Line 5620, Address: 0x45a014, Func Offset: 0xe4
	// Line 5647, Address: 0x45a018, Func Offset: 0xe8
	// Line 5627, Address: 0x45a05c, Func Offset: 0x12c
	// Line 5647, Address: 0x45a060, Func Offset: 0x130
	// Line 5629, Address: 0x45a070, Func Offset: 0x140
	// Line 5647, Address: 0x45a084, Func Offset: 0x154
	// Line 5634, Address: 0x45a08c, Func Offset: 0x15c
	// Line 5635, Address: 0x45a090, Func Offset: 0x160
	// Line 5637, Address: 0x45a094, Func Offset: 0x164
	// Line 5647, Address: 0x45a098, Func Offset: 0x168
	// Line 5648, Address: 0x45a0b0, Func Offset: 0x180
	// Func End, Address: 0x45a0e0, Func Offset: 0x1b0
}

// xShadowManager_Render__Fv
// Start address: 0x45a0e0
void xShadowManager_Render()
{
	int32 i;
	int32 cacheUsed[6];
	int32 j;
	float32 shadow_strength;
	uint8 old_xClumpColl_FilterFlags;
	xEnt* ent_ref;
	int32 bestIndex;
	int32 foundPriority;
	xVec3 center;
	float32 radius;
	xShadowMgr* mgr_best;
	float32 dst_depth;
	xEnt* ep;
	xEnt* ent;
	float32 dst_depth;
	int32 shadowOutside;
	xVec3 center;
	float32 radius;
	RpAtomic* old_model;
	xModelInstance* old_mnext;
	RpAtomic* shadModel;
	xEnt* ep;
	xShadowMgr* mgr;
	xEntShadow* npcshad;
	int32 num;
	int32 a;
	xEnt* ep;
	float32 rad;
	xVec3* lower;
	xVec3* upper;
	// Line 5019, Address: 0x45a0e0, Func Offset: 0
	// Line 5026, Address: 0x45a0e4, Func Offset: 0x4
	// Line 5019, Address: 0x45a0e8, Func Offset: 0x8
	// Line 5026, Address: 0x45a0ec, Func Offset: 0xc
	// Line 5019, Address: 0x45a0f0, Func Offset: 0x10
	// Line 5026, Address: 0x45a0f4, Func Offset: 0x14
	// Line 5019, Address: 0x45a0f8, Func Offset: 0x18
	// Line 5026, Address: 0x45a140, Func Offset: 0x60
	// Line 5027, Address: 0x45a148, Func Offset: 0x68
	// Line 5035, Address: 0x45a154, Func Offset: 0x74
	// Line 5040, Address: 0x45a158, Func Offset: 0x78
	// Line 5035, Address: 0x45a160, Func Offset: 0x80
	// Line 5037, Address: 0x45a164, Func Offset: 0x84
	// Line 5040, Address: 0x45a168, Func Offset: 0x88
	// Line 5041, Address: 0x45a178, Func Offset: 0x98
	// Line 5042, Address: 0x45a17c, Func Offset: 0x9c
	// Line 5041, Address: 0x45a180, Func Offset: 0xa0
	// Line 5042, Address: 0x45a188, Func Offset: 0xa8
	// Line 5049, Address: 0x45a198, Func Offset: 0xb8
	// Line 5050, Address: 0x45a1b0, Func Offset: 0xd0
	// Line 5051, Address: 0x45a1b4, Func Offset: 0xd4
	// Line 5056, Address: 0x45a1f0, Func Offset: 0x110
	// Line 5051, Address: 0x45a1f4, Func Offset: 0x114
	// Line 5056, Address: 0x45a1f8, Func Offset: 0x118
	// Line 5057, Address: 0x45a220, Func Offset: 0x140
	// Line 5059, Address: 0x45a228, Func Offset: 0x148
	// Line 5061, Address: 0x45a234, Func Offset: 0x154
	// Line 5063, Address: 0x45a23c, Func Offset: 0x15c
	// Line 5066, Address: 0x45a248, Func Offset: 0x168
	// Line 5069, Address: 0x45a25c, Func Offset: 0x17c
	// Line 5070, Address: 0x45a26c, Func Offset: 0x18c
	// Line 5071, Address: 0x45a294, Func Offset: 0x1b4
	// Line 5072, Address: 0x45a29c, Func Offset: 0x1bc
	// Line 5074, Address: 0x45a2c4, Func Offset: 0x1e4
	// Line 5072, Address: 0x45a2c8, Func Offset: 0x1e8
	// Line 5074, Address: 0x45a2cc, Func Offset: 0x1ec
	// Line 5075, Address: 0x45a2e8, Func Offset: 0x208
	// Line 5076, Address: 0x45a314, Func Offset: 0x234
	// Line 5077, Address: 0x45a324, Func Offset: 0x244
	// Line 5078, Address: 0x45a328, Func Offset: 0x248
	// Line 5084, Address: 0x45a338, Func Offset: 0x258
	// Line 5078, Address: 0x45a33c, Func Offset: 0x25c
	// Line 5084, Address: 0x45a340, Func Offset: 0x260
	// Line 5078, Address: 0x45a348, Func Offset: 0x268
	// Line 5079, Address: 0x45a354, Func Offset: 0x274
	// Line 5080, Address: 0x45a358, Func Offset: 0x278
	// Line 5081, Address: 0x45a364, Func Offset: 0x284
	// Line 5082, Address: 0x45a370, Func Offset: 0x290
	// Line 5084, Address: 0x45a374, Func Offset: 0x294
	// Line 5085, Address: 0x45a378, Func Offset: 0x298
	// Line 5087, Address: 0x45a380, Func Offset: 0x2a0
	// Line 5089, Address: 0x45a394, Func Offset: 0x2b4
	// Line 5090, Address: 0x45a3b8, Func Offset: 0x2d8
	// Line 5091, Address: 0x45a3cc, Func Offset: 0x2ec
	// Line 5092, Address: 0x45a3d0, Func Offset: 0x2f0
	// Line 5091, Address: 0x45a3d4, Func Offset: 0x2f4
	// Line 5092, Address: 0x45a3dc, Func Offset: 0x2fc
	// Line 5096, Address: 0x45a3f0, Func Offset: 0x310
	// Line 5097, Address: 0x45a3f4, Func Offset: 0x314
	// Line 5098, Address: 0x45a3f8, Func Offset: 0x318
	// Line 5117, Address: 0x45a404, Func Offset: 0x324
	// Line 5118, Address: 0x45a424, Func Offset: 0x344
	// Line 5120, Address: 0x45a430, Func Offset: 0x350
	// Line 5119, Address: 0x45a434, Func Offset: 0x354
	// Line 5120, Address: 0x45a438, Func Offset: 0x358
	// Line 5122, Address: 0x45a43c, Func Offset: 0x35c
	// Line 5127, Address: 0x45a460, Func Offset: 0x380
	// Line 5132, Address: 0x45a46c, Func Offset: 0x38c
	// Line 5138, Address: 0x45a490, Func Offset: 0x3b0
	// Line 5140, Address: 0x45a494, Func Offset: 0x3b4
	// Line 5142, Address: 0x45a498, Func Offset: 0x3b8
	// Line 5140, Address: 0x45a49c, Func Offset: 0x3bc
	// Line 5138, Address: 0x45a4a0, Func Offset: 0x3c0
	// Line 5141, Address: 0x45a4a4, Func Offset: 0x3c4
	// Line 5142, Address: 0x45a4b0, Func Offset: 0x3d0
	// Line 5143, Address: 0x45a4bc, Func Offset: 0x3dc
	// Line 5156, Address: 0x45a4c0, Func Offset: 0x3e0
	// Line 5158, Address: 0x45a4e4, Func Offset: 0x404
	// Line 5163, Address: 0x45a4e8, Func Offset: 0x408
	// Line 5164, Address: 0x45a4ec, Func Offset: 0x40c
	// Line 5173, Address: 0x45a508, Func Offset: 0x428
	// Line 5169, Address: 0x45a50c, Func Offset: 0x42c
	// Line 5166, Address: 0x45a510, Func Offset: 0x430
	// Line 5179, Address: 0x45a514, Func Offset: 0x434
	// Line 5169, Address: 0x45a518, Func Offset: 0x438
	// Line 5173, Address: 0x45a51c, Func Offset: 0x43c
	// Line 5174, Address: 0x45a524, Func Offset: 0x444
	// Line 5179, Address: 0x45a52c, Func Offset: 0x44c
	// Line 5201, Address: 0x45a534, Func Offset: 0x454
	// Line 5203, Address: 0x45a5a8, Func Offset: 0x4c8
	// Line 5204, Address: 0x45a5b4, Func Offset: 0x4d4
	// Line 5207, Address: 0x45a5c4, Func Offset: 0x4e4
	// Line 5208, Address: 0x45a5cc, Func Offset: 0x4ec
	// Line 5209, Address: 0x45a5d8, Func Offset: 0x4f8
	// Line 5210, Address: 0x45a5dc, Func Offset: 0x4fc
	// Line 5214, Address: 0x45a5e0, Func Offset: 0x500
	// Line 5215, Address: 0x45a5f0, Func Offset: 0x510
	// Line 5218, Address: 0x45a604, Func Offset: 0x524
	// Line 5222, Address: 0x45a61c, Func Offset: 0x53c
	// Line 5228, Address: 0x45a620, Func Offset: 0x540
	// Line 5222, Address: 0x45a624, Func Offset: 0x544
	// Line 5223, Address: 0x45a634, Func Offset: 0x554
	// Line 5224, Address: 0x45a64c, Func Offset: 0x56c
	// Line 5225, Address: 0x45a660, Func Offset: 0x580
	// Line 5226, Address: 0x45a668, Func Offset: 0x588
	// Line 5227, Address: 0x45a670, Func Offset: 0x590
	// Line 5228, Address: 0x45a67c, Func Offset: 0x59c
	// Line 5233, Address: 0x45a6f4, Func Offset: 0x614
	// Line 5236, Address: 0x45a70c, Func Offset: 0x62c
	// Line 5242, Address: 0x45a71c, Func Offset: 0x63c
	// Line 5241, Address: 0x45a720, Func Offset: 0x640
	// Line 5242, Address: 0x45a724, Func Offset: 0x644
	// Line 5243, Address: 0x45a72c, Func Offset: 0x64c
	// Line 5245, Address: 0x45a734, Func Offset: 0x654
	// Line 5246, Address: 0x45a738, Func Offset: 0x658
	// Line 5247, Address: 0x45a73c, Func Offset: 0x65c
	// Line 5248, Address: 0x45a744, Func Offset: 0x664
	// Line 5252, Address: 0x45a748, Func Offset: 0x668
	// Line 5253, Address: 0x45a75c, Func Offset: 0x67c
	// Line 5274, Address: 0x45a798, Func Offset: 0x6b8
	// Line 5275, Address: 0x45a7a0, Func Offset: 0x6c0
	// Line 5276, Address: 0x45a7a8, Func Offset: 0x6c8
	// Line 5283, Address: 0x45a7b0, Func Offset: 0x6d0
	// Line 5284, Address: 0x45a7bc, Func Offset: 0x6dc
	// Line 5285, Address: 0x45a7cc, Func Offset: 0x6ec
	// Line 5289, Address: 0x45a7d0, Func Offset: 0x6f0
	// Line 5293, Address: 0x45a7e4, Func Offset: 0x704
	// Line 5300, Address: 0x45a810, Func Offset: 0x730
	// Line 5307, Address: 0x45a820, Func Offset: 0x740
	// Line 5308, Address: 0x45a850, Func Offset: 0x770
	// Line 5309, Address: 0x45a878, Func Offset: 0x798
	// Line 5311, Address: 0x45a890, Func Offset: 0x7b0
	// Line 5312, Address: 0x45a8e8, Func Offset: 0x808
	// Line 5313, Address: 0x45ab5c, Func Offset: 0xa7c
	// Line 5314, Address: 0x45ab84, Func Offset: 0xaa4
	// Line 5315, Address: 0x45ab8c, Func Offset: 0xaac
	// Line 5327, Address: 0x45ab90, Func Offset: 0xab0
	// Line 5329, Address: 0x45aba8, Func Offset: 0xac8
	// Line 5331, Address: 0x45abb0, Func Offset: 0xad0
	// Line 5332, Address: 0x45abb4, Func Offset: 0xad4
	// Line 5337, Address: 0x45abbc, Func Offset: 0xadc
	// Line 5338, Address: 0x45abd0, Func Offset: 0xaf0
	// Line 5339, Address: 0x45abd8, Func Offset: 0xaf8
	// Line 5340, Address: 0x45abe8, Func Offset: 0xb08
	// Line 5342, Address: 0x45abec, Func Offset: 0xb0c
	// Line 5344, Address: 0x45abf0, Func Offset: 0xb10
	// Line 5345, Address: 0x45ac08, Func Offset: 0xb28
	// Line 5346, Address: 0x45ac1c, Func Offset: 0xb3c
	// Line 5347, Address: 0x45ac78, Func Offset: 0xb98
	// Line 5349, Address: 0x45aeec, Func Offset: 0xe0c
	// Line 5351, Address: 0x45af04, Func Offset: 0xe24
	// Line 5354, Address: 0x45af08, Func Offset: 0xe28
	// Line 5355, Address: 0x45af14, Func Offset: 0xe34
	// Line 5359, Address: 0x45af20, Func Offset: 0xe40
	// Line 5363, Address: 0x45af3c, Func Offset: 0xe5c
	// Line 5364, Address: 0x45af4c, Func Offset: 0xe6c
	// Line 5365, Address: 0x45af58, Func Offset: 0xe78
	// Line 5367, Address: 0x45af68, Func Offset: 0xe88
	// Line 5369, Address: 0x45af74, Func Offset: 0xe94
	// Line 5373, Address: 0x45af80, Func Offset: 0xea0
	// Line 5375, Address: 0x45af88, Func Offset: 0xea8
	// Line 5377, Address: 0x45af98, Func Offset: 0xeb8
	// Line 5380, Address: 0x45afa0, Func Offset: 0xec0
	// Line 5385, Address: 0x45afd0, Func Offset: 0xef0
	// Line 5388, Address: 0x45afe8, Func Offset: 0xf08
	// Line 5391, Address: 0x45b008, Func Offset: 0xf28
	// Line 5394, Address: 0x45b00c, Func Offset: 0xf2c
	// Line 5396, Address: 0x45b01c, Func Offset: 0xf3c
	// Func End, Address: 0x45b074, Func Offset: 0xf94
}

// xShadowModelRender__FP14xModelInstance
// Start address: 0x45b080
void xShadowModelRender(xModelInstance* minst)
{
	xMat3x3 tmpmat;
	float32* mat;
	float32* scale;
	int32 i;
	RpMaterialList* matList;
	RwTexture* oldtex[8];
	// Line 4926, Address: 0x45b080, Func Offset: 0
	// Line 4927, Address: 0x45b090, Func Offset: 0x10
	// Line 4928, Address: 0x45b098, Func Offset: 0x18
	// Line 4932, Address: 0x45b0ac, Func Offset: 0x2c
	// Line 4933, Address: 0x45b0c4, Func Offset: 0x44
	// Line 4936, Address: 0x45b0e4, Func Offset: 0x64
	// Line 4937, Address: 0x45b0e8, Func Offset: 0x68
	// Line 4940, Address: 0x45b0ec, Func Offset: 0x6c
	// Line 4941, Address: 0x45b0f0, Func Offset: 0x70
	// Line 4942, Address: 0x45b0f4, Func Offset: 0x74
	// Line 4943, Address: 0x45b0f8, Func Offset: 0x78
	// Line 4944, Address: 0x45b0fc, Func Offset: 0x7c
	// Line 4945, Address: 0x45b100, Func Offset: 0x80
	// Line 4946, Address: 0x45b104, Func Offset: 0x84
	// Line 4947, Address: 0x45b108, Func Offset: 0x88
	// Line 4948, Address: 0x45b10c, Func Offset: 0x8c
	// Line 4949, Address: 0x45b110, Func Offset: 0x90
	// Line 4950, Address: 0x45b114, Func Offset: 0x94
	// Line 4951, Address: 0x45b118, Func Offset: 0x98
	// Line 4952, Address: 0x45b11c, Func Offset: 0x9c
	// Line 4953, Address: 0x45b120, Func Offset: 0xa0
	// Line 4954, Address: 0x45b124, Func Offset: 0xa4
	// Line 4978, Address: 0x45b128, Func Offset: 0xa8
	// Line 4980, Address: 0x45b138, Func Offset: 0xb8
	// Line 4981, Address: 0x45b144, Func Offset: 0xc4
	// Line 4982, Address: 0x45b158, Func Offset: 0xd8
	// Line 4984, Address: 0x45b15c, Func Offset: 0xdc
	// Line 4982, Address: 0x45b160, Func Offset: 0xe0
	// Line 4983, Address: 0x45b168, Func Offset: 0xe8
	// Line 4982, Address: 0x45b16c, Func Offset: 0xec
	// Line 4983, Address: 0x45b174, Func Offset: 0xf4
	// Line 4984, Address: 0x45b178, Func Offset: 0xf8
	// Line 4989, Address: 0x45b188, Func Offset: 0x108
	// Line 4990, Address: 0x45b194, Func Offset: 0x114
	// Line 4991, Address: 0x45b1a0, Func Offset: 0x120
	// Line 4992, Address: 0x45b1a8, Func Offset: 0x128
	// Line 4996, Address: 0x45b1b8, Func Offset: 0x138
	// Line 5000, Address: 0x45b1c8, Func Offset: 0x148
	// Line 5001, Address: 0x45b1d4, Func Offset: 0x154
	// Line 5002, Address: 0x45b1e8, Func Offset: 0x168
	// Line 5003, Address: 0x45b1f0, Func Offset: 0x170
	// Line 5002, Address: 0x45b1f4, Func Offset: 0x174
	// Line 5003, Address: 0x45b204, Func Offset: 0x184
	// Line 5004, Address: 0x45b214, Func Offset: 0x194
	// Line 5008, Address: 0x45b218, Func Offset: 0x198
	// Line 5009, Address: 0x45b230, Func Offset: 0x1b0
	// Line 5013, Address: 0x45b250, Func Offset: 0x1d0
	// Line 5014, Address: 0x45b254, Func Offset: 0x1d4
	// Line 5015, Address: 0x45b260, Func Offset: 0x1e0
	// Func End, Address: 0x45b274, Func Offset: 0x1f4
}

// CmpShadowMgr__FPCvPCv
// Start address: 0x45b280
int32 CmpShadowMgr(void* a, void* b)
{
	xEnt* entA;
	xEnt* entB;
	int32 isPlayerA;
	int32 isPlayerB;
	float32 distA;
	float32 distB;
	xVec3* campos;
	float32 dx__;
	float32 dy__;
	float32 dz__;
	float32 dx__;
	float32 dy__;
	float32 dz__;
	// Line 4901, Address: 0x45b280, Func Offset: 0
	// Line 4905, Address: 0x45b284, Func Offset: 0x4
	// Line 4902, Address: 0x45b288, Func Offset: 0x8
	// Line 4905, Address: 0x45b28c, Func Offset: 0xc
	// Line 4907, Address: 0x45b2a8, Func Offset: 0x28
	// Line 4905, Address: 0x45b2b0, Func Offset: 0x30
	// Line 4907, Address: 0x45b2b4, Func Offset: 0x34
	// Line 4909, Address: 0x45b2d0, Func Offset: 0x50
	// Line 4910, Address: 0x45b2e0, Func Offset: 0x60
	// Line 4914, Address: 0x45b2f8, Func Offset: 0x78
	// Line 4915, Address: 0x45b300, Func Offset: 0x80
	// Line 4914, Address: 0x45b304, Func Offset: 0x84
	// Line 4915, Address: 0x45b30c, Func Offset: 0x8c
	// Line 4914, Address: 0x45b31c, Func Offset: 0x9c
	// Line 4916, Address: 0x45b320, Func Offset: 0xa0
	// Line 4915, Address: 0x45b328, Func Offset: 0xa8
	// Line 4916, Address: 0x45b330, Func Offset: 0xb0
	// Line 4915, Address: 0x45b334, Func Offset: 0xb4
	// Line 4916, Address: 0x45b348, Func Offset: 0xc8
	// Line 4915, Address: 0x45b34c, Func Offset: 0xcc
	// Line 4916, Address: 0x45b350, Func Offset: 0xd0
	// Line 4917, Address: 0x45b364, Func Offset: 0xe4
	// Line 4918, Address: 0x45b370, Func Offset: 0xf0
	// Line 4907, Address: 0x45b388, Func Offset: 0x108
	// Line 4918, Address: 0x45b38c, Func Offset: 0x10c
	// Line 4920, Address: 0x45b39c, Func Offset: 0x11c
	// Func End, Address: 0x45b3a4, Func Offset: 0x124
}

// xShadowManager_Remove__FP4xEnt
// Start address: 0x45b3b0
void xShadowManager_Remove(xEnt* ent)
{
	int32 i;
	// Line 4880, Address: 0x45b3b0, Func Offset: 0
	// Line 4881, Address: 0x45b3c4, Func Offset: 0x14
	// Line 4882, Address: 0x45b3c8, Func Offset: 0x18
	// Line 4881, Address: 0x45b3cc, Func Offset: 0x1c
	// Line 4882, Address: 0x45b3d4, Func Offset: 0x24
	// Line 4885, Address: 0x45b3e8, Func Offset: 0x38
	// Line 4886, Address: 0x45b400, Func Offset: 0x50
	// Line 4894, Address: 0x45b410, Func Offset: 0x60
	// Line 4896, Address: 0x45b414, Func Offset: 0x64
	// Line 4894, Address: 0x45b418, Func Offset: 0x68
	// Line 4896, Address: 0x45b41c, Func Offset: 0x6c
	// Line 4897, Address: 0x45b428, Func Offset: 0x78
	// Line 4889, Address: 0x45b430, Func Offset: 0x80
	// Line 4897, Address: 0x45b434, Func Offset: 0x84
	// Line 4892, Address: 0x45b460, Func Offset: 0xb0
	// Line 4897, Address: 0x45b468, Func Offset: 0xb8
	// Func End, Address: 0x45b470, Func Offset: 0xc0
}

// xShadowManager_Add__FP4xEnt
// Start address: 0x45b470
void xShadowManager_Add(xEnt* ent)
{
	int32 i;
	// Line 4857, Address: 0x45b470, Func Offset: 0
	// Line 4858, Address: 0x45b484, Func Offset: 0x14
	// Line 4861, Address: 0x45b490, Func Offset: 0x20
	// Line 4865, Address: 0x45b4a0, Func Offset: 0x30
	// Line 4868, Address: 0x45b4b0, Func Offset: 0x40
	// Line 4870, Address: 0x45b4b8, Func Offset: 0x48
	// Line 4868, Address: 0x45b4bc, Func Offset: 0x4c
	// Line 4869, Address: 0x45b4c4, Func Offset: 0x54
	// Line 4870, Address: 0x45b4d8, Func Offset: 0x68
	// Line 4871, Address: 0x45b4ec, Func Offset: 0x7c
	// Line 4872, Address: 0x45b500, Func Offset: 0x90
	// Line 4873, Address: 0x45b50c, Func Offset: 0x9c
	// Func End, Address: 0x45b514, Func Offset: 0xa4
}

// xShadowManager_Init__Fii
// Start address: 0x45b520
void xShadowManager_Init(int32 numEnts)
{
	// Line 4825, Address: 0x45b520, Func Offset: 0
	// Line 4826, Address: 0x45b524, Func Offset: 0x4
	// Line 4825, Address: 0x45b528, Func Offset: 0x8
	// Line 4826, Address: 0x45b534, Func Offset: 0x14
	// Line 4827, Address: 0x45b540, Func Offset: 0x20
	// Line 4826, Address: 0x45b544, Func Offset: 0x24
	// Line 4828, Address: 0x45b548, Func Offset: 0x28
	// Line 4842, Address: 0x45b54c, Func Offset: 0x2c
	// Func End, Address: 0x45b55c, Func Offset: 0x3c
}

// xShadowVertical_DrawCache__FP12xShadowCacheffiP11RwMatrixTagP8RwRaster
// Start address: 0x45b560
void xShadowVertical_DrawCache(xShadowCache* cache, float32 shadowFactor, float32 fadeDist, int32 shadowMode, RwMatrixTag* shadowMat, RwRaster* shadowRast)
{
	_ProjectionParam param;
	RwMatrixTag* shadowMatrix;
	float32 radius;
	RwV3d scl;
	RwV3d tr;
	xVec3 A;
	xVec3 B;
	// Line 4554, Address: 0x45b560, Func Offset: 0
	// Line 4592, Address: 0x45b598, Func Offset: 0x38
	// Line 4594, Address: 0x45b5a4, Func Offset: 0x44
	// Line 4592, Address: 0x45b5a8, Func Offset: 0x48
	// Line 4594, Address: 0x45b5ac, Func Offset: 0x4c
	// Line 4595, Address: 0x45b5b8, Func Offset: 0x58
	// Line 4597, Address: 0x45b5c0, Func Offset: 0x60
	// Line 4595, Address: 0x45b5c4, Func Offset: 0x64
	// Line 4597, Address: 0x45b5cc, Func Offset: 0x6c
	// Line 4600, Address: 0x45b5dc, Func Offset: 0x7c
	// Line 4601, Address: 0x45b5ec, Func Offset: 0x8c
	// Line 4608, Address: 0x45b5fc, Func Offset: 0x9c
	// Line 4611, Address: 0x45b614, Func Offset: 0xb4
	// Line 4612, Address: 0x45b624, Func Offset: 0xc4
	// Line 4615, Address: 0x45b62c, Func Offset: 0xcc
	// Line 4619, Address: 0x45b63c, Func Offset: 0xdc
	// Line 4625, Address: 0x45b650, Func Offset: 0xf0
	// Line 4628, Address: 0x45b66c, Func Offset: 0x10c
	// Line 4629, Address: 0x45b67c, Func Offset: 0x11c
	// Line 4630, Address: 0x45b68c, Func Offset: 0x12c
	// Line 4636, Address: 0x45b694, Func Offset: 0x134
	// Line 4643, Address: 0x45b6a4, Func Offset: 0x144
	// Line 4646, Address: 0x45b6ac, Func Offset: 0x14c
	// Line 4649, Address: 0x45b6c4, Func Offset: 0x164
	// Line 4650, Address: 0x45b6d4, Func Offset: 0x174
	// Line 4656, Address: 0x45b6dc, Func Offset: 0x17c
	// Line 4674, Address: 0x45b6ec, Func Offset: 0x18c
	// Line 4676, Address: 0x45b708, Func Offset: 0x1a8
	// Line 4677, Address: 0x45b70c, Func Offset: 0x1ac
	// Line 4679, Address: 0x45b714, Func Offset: 0x1b4
	// Line 4676, Address: 0x45b71c, Func Offset: 0x1bc
	// Line 4679, Address: 0x45b72c, Func Offset: 0x1cc
	// Line 4681, Address: 0x45b734, Func Offset: 0x1d4
	// Line 4682, Address: 0x45b738, Func Offset: 0x1d8
	// Line 4681, Address: 0x45b73c, Func Offset: 0x1dc
	// Line 4683, Address: 0x45b740, Func Offset: 0x1e0
	// Line 4682, Address: 0x45b744, Func Offset: 0x1e4
	// Line 4683, Address: 0x45b748, Func Offset: 0x1e8
	// Line 4681, Address: 0x45b74c, Func Offset: 0x1ec
	// Line 4683, Address: 0x45b750, Func Offset: 0x1f0
	// Line 4682, Address: 0x45b754, Func Offset: 0x1f4
	// Line 4681, Address: 0x45b75c, Func Offset: 0x1fc
	// Line 4682, Address: 0x45b764, Func Offset: 0x204
	// Line 4683, Address: 0x45b76c, Func Offset: 0x20c
	// Line 4695, Address: 0x45b774, Func Offset: 0x214
	// Line 4696, Address: 0x45b794, Func Offset: 0x234
	// Line 4704, Address: 0x45b7e8, Func Offset: 0x288
	// Line 4696, Address: 0x45b7ec, Func Offset: 0x28c
	// Line 4712, Address: 0x45b7f0, Func Offset: 0x290
	// Line 4704, Address: 0x45b7f4, Func Offset: 0x294
	// Line 4713, Address: 0x45b7f8, Func Offset: 0x298
	// Line 4702, Address: 0x45b7fc, Func Offset: 0x29c
	// Line 4713, Address: 0x45b800, Func Offset: 0x2a0
	// Line 4705, Address: 0x45b804, Func Offset: 0x2a4
	// Line 4713, Address: 0x45b808, Func Offset: 0x2a8
	// Line 4697, Address: 0x45b80c, Func Offset: 0x2ac
	// Line 4704, Address: 0x45b814, Func Offset: 0x2b4
	// Line 4697, Address: 0x45b818, Func Offset: 0x2b8
	// Line 4713, Address: 0x45b820, Func Offset: 0x2c0
	// Line 4697, Address: 0x45b824, Func Offset: 0x2c4
	// Line 4712, Address: 0x45b830, Func Offset: 0x2d0
	// Line 4713, Address: 0x45b85c, Func Offset: 0x2fc
	// Line 4715, Address: 0x45b864, Func Offset: 0x304
	// Line 4721, Address: 0x45b868, Func Offset: 0x308
	// Line 4715, Address: 0x45b870, Func Offset: 0x310
	// Line 4721, Address: 0x45b874, Func Offset: 0x314
	// Line 4715, Address: 0x45b878, Func Offset: 0x318
	// Line 4721, Address: 0x45b87c, Func Offset: 0x31c
	// Line 4751, Address: 0x45b884, Func Offset: 0x324
	// Line 4756, Address: 0x45b894, Func Offset: 0x334
	// Line 4780, Address: 0x45b8a8, Func Offset: 0x348
	// Line 4784, Address: 0x45b8b0, Func Offset: 0x350
	// Line 4785, Address: 0x45bc54, Func Offset: 0x6f4
	// Line 4795, Address: 0x45bc58, Func Offset: 0x6f8
	// Line 4796, Address: 0x45bc68, Func Offset: 0x708
	// Line 4802, Address: 0x45bc78, Func Offset: 0x718
	// Func End, Address: 0x45bca4, Func Offset: 0x744
}

// xShadowVertical_FillCache__FP12xShadowCacheP5xVec3fff
// Start address: 0x45bcb0
void xShadowVertical_FillCache(xShadowCache* cache, xVec3* pos, float32 r, float32 depth, float32 minNormY)
{
	int32 i;
	int32 j;
	xEnv* env;
	RpIntersection isx;
	ShadowCacheContext context;
	int32 i;
	float32 sortRayDepth[5];
	float32 objMaxDepth;
	xQCData qcd;
	ShadowCBParam cbparam;
	// Line 4402, Address: 0x45bcb0, Func Offset: 0
	// Line 4411, Address: 0x45bcb4, Func Offset: 0x4
	// Line 4402, Address: 0x45bcb8, Func Offset: 0x8
	// Line 4411, Address: 0x45bcbc, Func Offset: 0xc
	// Line 4402, Address: 0x45bcc0, Func Offset: 0x10
	// Line 4418, Address: 0x45bcc4, Func Offset: 0x14
	// Line 4402, Address: 0x45bcc8, Func Offset: 0x18
	// Line 4422, Address: 0x45bccc, Func Offset: 0x1c
	// Line 4402, Address: 0x45bcd0, Func Offset: 0x20
	// Line 4406, Address: 0x45bcf0, Func Offset: 0x40
	// Line 4407, Address: 0x45bd10, Func Offset: 0x60
	// Line 4408, Address: 0x45bd14, Func Offset: 0x64
	// Line 4409, Address: 0x45bd18, Func Offset: 0x68
	// Line 4411, Address: 0x45bd1c, Func Offset: 0x6c
	// Line 4416, Address: 0x45bd30, Func Offset: 0x80
	// Line 4438, Address: 0x45bd34, Func Offset: 0x84
	// Line 4416, Address: 0x45bd38, Func Offset: 0x88
	// Line 4418, Address: 0x45bd40, Func Offset: 0x90
	// Line 4419, Address: 0x45bd44, Func Offset: 0x94
	// Line 4420, Address: 0x45bd50, Func Offset: 0xa0
	// Line 4421, Address: 0x45bd5c, Func Offset: 0xac
	// Line 4422, Address: 0x45bd68, Func Offset: 0xb8
	// Line 4423, Address: 0x45bd74, Func Offset: 0xc4
	// Line 4424, Address: 0x45bd84, Func Offset: 0xd4
	// Line 4435, Address: 0x45bd8c, Func Offset: 0xdc
	// Line 4436, Address: 0x45bd90, Func Offset: 0xe0
	// Line 4438, Address: 0x45bd94, Func Offset: 0xe4
	// Line 4478, Address: 0x45bd9c, Func Offset: 0xec
	// Line 4479, Address: 0x45bdac, Func Offset: 0xfc
	// Line 4480, Address: 0x45bdb0, Func Offset: 0x100
	// Line 4481, Address: 0x45bdc8, Func Offset: 0x118
	// Line 4487, Address: 0x45bdd4, Func Offset: 0x124
	// Line 4488, Address: 0x45bdf8, Func Offset: 0x148
	// Line 4489, Address: 0x45bdfc, Func Offset: 0x14c
	// Line 4492, Address: 0x45be30, Func Offset: 0x180
	// Line 4493, Address: 0x45be3c, Func Offset: 0x18c
	// Line 4498, Address: 0x45be40, Func Offset: 0x190
	// Line 4506, Address: 0x45be5c, Func Offset: 0x1ac
	// Line 4518, Address: 0x45be60, Func Offset: 0x1b0
	// Line 4505, Address: 0x45be64, Func Offset: 0x1b4
	// Line 4518, Address: 0x45be68, Func Offset: 0x1b8
	// Line 4506, Address: 0x45be6c, Func Offset: 0x1bc
	// Line 4518, Address: 0x45be70, Func Offset: 0x1c0
	// Line 4507, Address: 0x45be74, Func Offset: 0x1c4
	// Line 4508, Address: 0x45be7c, Func Offset: 0x1cc
	// Line 4509, Address: 0x45be84, Func Offset: 0x1d4
	// Line 4510, Address: 0x45be8c, Func Offset: 0x1dc
	// Line 4511, Address: 0x45be94, Func Offset: 0x1e4
	// Line 4512, Address: 0x45be98, Func Offset: 0x1e8
	// Line 4518, Address: 0x45bea0, Func Offset: 0x1f0
	// Line 4519, Address: 0x45bea8, Func Offset: 0x1f8
	// Line 4520, Address: 0x45bec8, Func Offset: 0x218
	// Line 4522, Address: 0x45bee8, Func Offset: 0x238
	// Line 4528, Address: 0x45bf08, Func Offset: 0x258
	// Line 4529, Address: 0x45bf14, Func Offset: 0x264
	// Line 4547, Address: 0x45bf1c, Func Offset: 0x26c
	// Line 4439, Address: 0x45bf24, Func Offset: 0x274
	// Line 4547, Address: 0x45bf28, Func Offset: 0x278
	// Line 4446, Address: 0x45bf5c, Func Offset: 0x2ac
	// Line 4547, Address: 0x45bf60, Func Offset: 0x2b0
	// Line 4548, Address: 0x45bfd4, Func Offset: 0x324
	// Func End, Address: 0x45c000, Func Offset: 0x350
}

// shadowCacheEntityCB__FP4xEntPv
// Start address: 0x45c000
int32 shadowCacheEntityCB(xEnt* ent, void* cbdata)
{
	ShadowCBParam* cbparam;
	xCollis coll;
	RpCollisionData* colldata;
	RwMatrixTag inverseLTM;
	// Line 4257, Address: 0x45c000, Func Offset: 0
	// Line 4259, Address: 0x45c01c, Func Offset: 0x1c
	// Line 4271, Address: 0x45c02c, Func Offset: 0x2c
	// Line 4276, Address: 0x45c040, Func Offset: 0x40
	// Line 4295, Address: 0x45c04c, Func Offset: 0x4c
	// Line 4296, Address: 0x45c050, Func Offset: 0x50
	// Line 4295, Address: 0x45c054, Func Offset: 0x54
	// Line 4296, Address: 0x45c058, Func Offset: 0x58
	// Line 4298, Address: 0x45c060, Func Offset: 0x60
	// Line 4301, Address: 0x45c068, Func Offset: 0x68
	// Line 4304, Address: 0x45c078, Func Offset: 0x78
	// Line 4310, Address: 0x45c0f0, Func Offset: 0xf0
	// Line 4313, Address: 0x45c0fc, Func Offset: 0xfc
	// Line 4320, Address: 0x45c110, Func Offset: 0x110
	// Line 4326, Address: 0x45c128, Func Offset: 0x128
	// Line 4322, Address: 0x45c130, Func Offset: 0x130
	// Line 4326, Address: 0x45c134, Func Offset: 0x134
	// Line 4322, Address: 0x45c138, Func Offset: 0x138
	// Line 4326, Address: 0x45c13c, Func Offset: 0x13c
	// Line 4333, Address: 0x45c15c, Func Offset: 0x15c
	// Line 4334, Address: 0x45c168, Func Offset: 0x168
	// Line 4335, Address: 0x45c17c, Func Offset: 0x17c
	// Line 4344, Address: 0x45c180, Func Offset: 0x180
	// Line 4335, Address: 0x45c184, Func Offset: 0x184
	// Line 4344, Address: 0x45c188, Func Offset: 0x188
	// Line 4335, Address: 0x45c190, Func Offset: 0x190
	// Line 4337, Address: 0x45c1c4, Func Offset: 0x1c4
	// Line 4336, Address: 0x45c1c8, Func Offset: 0x1c8
	// Line 4337, Address: 0x45c1d8, Func Offset: 0x1d8
	// Line 4340, Address: 0x45c1e0, Func Offset: 0x1e0
	// Line 4341, Address: 0x45c1ec, Func Offset: 0x1ec
	// Line 4342, Address: 0x45c1f4, Func Offset: 0x1f4
	// Line 4344, Address: 0x45c1f8, Func Offset: 0x1f8
	// Line 4349, Address: 0x45c200, Func Offset: 0x200
	// Line 4369, Address: 0x45c21c, Func Offset: 0x21c
	// Line 4370, Address: 0x45c228, Func Offset: 0x228
	// Line 4396, Address: 0x45c244, Func Offset: 0x244
	// Line 4260, Address: 0x45c250, Func Offset: 0x250
	// Line 4272, Address: 0x45c258, Func Offset: 0x258
	// Line 4277, Address: 0x45c260, Func Offset: 0x260
	// Line 4396, Address: 0x45c268, Func Offset: 0x268
	// Line 4297, Address: 0x45c26c, Func Offset: 0x26c
	// Line 4396, Address: 0x45c270, Func Offset: 0x270
	// Line 4298, Address: 0x45c278, Func Offset: 0x278
	// Line 4396, Address: 0x45c280, Func Offset: 0x280
	// Line 4299, Address: 0x45c284, Func Offset: 0x284
	// Line 4396, Address: 0x45c288, Func Offset: 0x288
	// Line 4301, Address: 0x45c294, Func Offset: 0x294
	// Line 4396, Address: 0x45c29c, Func Offset: 0x29c
	// Line 4384, Address: 0x45c2a8, Func Offset: 0x2a8
	// Line 4396, Address: 0x45c2ac, Func Offset: 0x2ac
	// Line 4384, Address: 0x45c2b0, Func Offset: 0x2b0
	// Line 4397, Address: 0x45c2bc, Func Offset: 0x2bc
	// Func End, Address: 0x45c2d8, Func Offset: 0x2d8
}

// shadowCacheLeafCB__FiiPv
// Start address: 0x45c2e0
int32 shadowCacheLeafCB(int32 numTriangles, int32 triOffset, void* data)
{
	ShadowCBParam* cbparam;
	xShadowCache* cache;
	RpGeometry* geometry;
	RwV3d* vertices;
	RpTriangle* triangles;
	int32 triSlot;
	uint16* triIndex;
	int32 i;
	RpTriangle* tri;
	int32 vertIndex0;
	int32 vertIndex1;
	int32 vertIndex2;
	RwV3d* v0;
	RwV3d* v1;
	RwV3d* v2;
	xVec3 worldV[3];
	float32 posX;
	float32 posZ;
	float32 nx;
	float32 nz;
	float32 nmag2;
	float32 pdot;
	xVec3* vert0;
	xVec3* vert1;
	float32 dotA;
	float32 dotB;
	xVec3* vert0;
	xVec3* vert1;
	xVec3* vert2;
	xVec3 aa;
	xVec3 bb;
	xVec3 trinorm;
	float32 depthtest;
	float32 dydx;
	float32 dydz;
	float32 depth0;
	float32 n0x;
	float32 n0z;
	float32 n0d;
	float32 n1x;
	float32 n1z;
	float32 n1d;
	float32 n2x;
	float32 n2z;
	float32 n2d;
	float32 denom;
	// Line 4063, Address: 0x45c2e0, Func Offset: 0
	// Line 4067, Address: 0x45c31c, Func Offset: 0x3c
	// Line 4072, Address: 0x45c320, Func Offset: 0x40
	// Line 4066, Address: 0x45c324, Func Offset: 0x44
	// Line 4068, Address: 0x45c328, Func Offset: 0x48
	// Line 4072, Address: 0x45c32c, Func Offset: 0x4c
	// Line 4069, Address: 0x45c330, Func Offset: 0x50
	// Line 4072, Address: 0x45c334, Func Offset: 0x54
	// Line 4068, Address: 0x45c338, Func Offset: 0x58
	// Line 4072, Address: 0x45c33c, Func Offset: 0x5c
	// Line 4073, Address: 0x45c340, Func Offset: 0x60
	// Line 4074, Address: 0x45c348, Func Offset: 0x68
	// Line 4075, Address: 0x45c34c, Func Offset: 0x6c
	// Line 4076, Address: 0x45c350, Func Offset: 0x70
	// Line 4077, Address: 0x45c358, Func Offset: 0x78
	// Line 4089, Address: 0x45c388, Func Offset: 0xa8
	// Line 4090, Address: 0x45c390, Func Offset: 0xb0
	// Line 4092, Address: 0x45c394, Func Offset: 0xb4
	// Line 4093, Address: 0x45c39c, Func Offset: 0xbc
	// Line 4099, Address: 0x45c3a0, Func Offset: 0xc0
	// Line 4111, Address: 0x45c3a4, Func Offset: 0xc4
	// Line 4099, Address: 0x45c3a8, Func Offset: 0xc8
	// Line 4111, Address: 0x45c3ac, Func Offset: 0xcc
	// Line 4099, Address: 0x45c3b0, Func Offset: 0xd0
	// Line 4100, Address: 0x45c3b4, Func Offset: 0xd4
	// Line 4101, Address: 0x45c3b8, Func Offset: 0xd8
	// Line 4103, Address: 0x45c3bc, Func Offset: 0xdc
	// Line 4104, Address: 0x45c3c4, Func Offset: 0xe4
	// Line 4103, Address: 0x45c3c8, Func Offset: 0xe8
	// Line 4104, Address: 0x45c3cc, Func Offset: 0xec
	// Line 4103, Address: 0x45c3d0, Func Offset: 0xf0
	// Line 4104, Address: 0x45c3d4, Func Offset: 0xf4
	// Line 4105, Address: 0x45c3dc, Func Offset: 0xfc
	// Line 4111, Address: 0x45c3ec, Func Offset: 0x10c
	// Line 4112, Address: 0x45c43c, Func Offset: 0x15c
	// Line 4113, Address: 0x45c490, Func Offset: 0x1b0
	// Line 4127, Address: 0x45c4e4, Func Offset: 0x204
	// Line 4129, Address: 0x45c4e8, Func Offset: 0x208
	// Line 4127, Address: 0x45c4ec, Func Offset: 0x20c
	// Line 4132, Address: 0x45c4f4, Func Offset: 0x214
	// Line 4133, Address: 0x45c51c, Func Offset: 0x23c
	// Line 4134, Address: 0x45c520, Func Offset: 0x240
	// Line 4137, Address: 0x45c524, Func Offset: 0x244
	// Line 4133, Address: 0x45c528, Func Offset: 0x248
	// Line 4134, Address: 0x45c530, Func Offset: 0x250
	// Line 4137, Address: 0x45c534, Func Offset: 0x254
	// Line 4135, Address: 0x45c538, Func Offset: 0x258
	// Line 4137, Address: 0x45c540, Func Offset: 0x260
	// Line 4139, Address: 0x45c548, Func Offset: 0x268
	// Line 4145, Address: 0x45c56c, Func Offset: 0x28c
	// Line 4156, Address: 0x45c57c, Func Offset: 0x29c
	// Line 4148, Address: 0x45c580, Func Offset: 0x2a0
	// Line 4152, Address: 0x45c584, Func Offset: 0x2a4
	// Line 4153, Address: 0x45c58c, Func Offset: 0x2ac
	// Line 4152, Address: 0x45c590, Func Offset: 0x2b0
	// Line 4153, Address: 0x45c594, Func Offset: 0x2b4
	// Line 4152, Address: 0x45c5a4, Func Offset: 0x2c4
	// Line 4153, Address: 0x45c5a8, Func Offset: 0x2c8
	// Line 4152, Address: 0x45c5ac, Func Offset: 0x2cc
	// Line 4153, Address: 0x45c5c0, Func Offset: 0x2e0
	// Line 4158, Address: 0x45c5f0, Func Offset: 0x310
	// Line 4156, Address: 0x45c5f4, Func Offset: 0x314
	// Line 4158, Address: 0x45c608, Func Offset: 0x328
	// Line 4164, Address: 0x45c63c, Func Offset: 0x35c
	// Line 4167, Address: 0x45c650, Func Offset: 0x370
	// Line 4174, Address: 0x45c654, Func Offset: 0x374
	// Line 4167, Address: 0x45c65c, Func Offset: 0x37c
	// Line 4171, Address: 0x45c664, Func Offset: 0x384
	// Line 4172, Address: 0x45c678, Func Offset: 0x398
	// Line 4171, Address: 0x45c67c, Func Offset: 0x39c
	// Line 4172, Address: 0x45c68c, Func Offset: 0x3ac
	// Line 4171, Address: 0x45c690, Func Offset: 0x3b0
	// Line 4172, Address: 0x45c694, Func Offset: 0x3b4
	// Line 4171, Address: 0x45c698, Func Offset: 0x3b8
	// Line 4172, Address: 0x45c6a0, Func Offset: 0x3c0
	// Line 4171, Address: 0x45c6a4, Func Offset: 0x3c4
	// Line 4172, Address: 0x45c6a8, Func Offset: 0x3c8
	// Line 4173, Address: 0x45c6b8, Func Offset: 0x3d8
	// Line 4172, Address: 0x45c6bc, Func Offset: 0x3dc
	// Line 4173, Address: 0x45c6c0, Func Offset: 0x3e0
	// Line 4172, Address: 0x45c6c4, Func Offset: 0x3e4
	// Line 4173, Address: 0x45c6c8, Func Offset: 0x3e8
	// Line 4171, Address: 0x45c6e8, Func Offset: 0x408
	// Line 4172, Address: 0x45c6ec, Func Offset: 0x40c
	// Line 4174, Address: 0x45c6f0, Func Offset: 0x410
	// Line 4178, Address: 0x45c700, Func Offset: 0x420
	// Line 4180, Address: 0x45c71c, Func Offset: 0x43c
	// Line 4179, Address: 0x45c724, Func Offset: 0x444
	// Line 4180, Address: 0x45c728, Func Offset: 0x448
	// Line 4183, Address: 0x45c734, Func Offset: 0x454
	// Line 4180, Address: 0x45c738, Func Offset: 0x458
	// Line 4179, Address: 0x45c740, Func Offset: 0x460
	// Line 4180, Address: 0x45c748, Func Offset: 0x468
	// Line 4181, Address: 0x45c750, Func Offset: 0x470
	// Line 4185, Address: 0x45c774, Func Offset: 0x494
	// Line 4189, Address: 0x45c77c, Func Offset: 0x49c
	// Line 4187, Address: 0x45c780, Func Offset: 0x4a0
	// Line 4191, Address: 0x45c788, Func Offset: 0x4a8
	// Line 4193, Address: 0x45c78c, Func Offset: 0x4ac
	// Line 4184, Address: 0x45c790, Func Offset: 0x4b0
	// Line 4183, Address: 0x45c794, Func Offset: 0x4b4
	// Line 4185, Address: 0x45c798, Func Offset: 0x4b8
	// Line 4188, Address: 0x45c7a0, Func Offset: 0x4c0
	// Line 4192, Address: 0x45c7a4, Func Offset: 0x4c4
	// Line 4189, Address: 0x45c7a8, Func Offset: 0x4c8
	// Line 4193, Address: 0x45c7b4, Func Offset: 0x4d4
	// Line 4196, Address: 0x45c7bc, Func Offset: 0x4dc
	// Line 4200, Address: 0x45c7e0, Func Offset: 0x500
	// Line 4201, Address: 0x45c7f0, Func Offset: 0x510
	// Line 4202, Address: 0x45c7f8, Func Offset: 0x518
	// Line 4205, Address: 0x45c804, Func Offset: 0x524
	// Line 4209, Address: 0x45c84c, Func Offset: 0x56c
	// Line 4210, Address: 0x45c854, Func Offset: 0x574
	// Line 4211, Address: 0x45c864, Func Offset: 0x584
	// Line 4212, Address: 0x45c86c, Func Offset: 0x58c
	// Line 4215, Address: 0x45c874, Func Offset: 0x594
	// Line 4219, Address: 0x45c8c0, Func Offset: 0x5e0
	// Line 4220, Address: 0x45c8cc, Func Offset: 0x5ec
	// Line 4221, Address: 0x45c8dc, Func Offset: 0x5fc
	// Line 4222, Address: 0x45c8e4, Func Offset: 0x604
	// Line 4225, Address: 0x45c8f0, Func Offset: 0x610
	// Line 4229, Address: 0x45c938, Func Offset: 0x658
	// Line 4230, Address: 0x45c940, Func Offset: 0x660
	// Line 4231, Address: 0x45c950, Func Offset: 0x670
	// Line 4232, Address: 0x45c958, Func Offset: 0x678
	// Line 4235, Address: 0x45c960, Func Offset: 0x680
	// Line 4239, Address: 0x45c9a8, Func Offset: 0x6c8
	// Line 4240, Address: 0x45c9b4, Func Offset: 0x6d4
	// Line 4241, Address: 0x45c9c4, Func Offset: 0x6e4
	// Line 4242, Address: 0x45c9cc, Func Offset: 0x6ec
	// Line 4247, Address: 0x45c9d0, Func Offset: 0x6f0
	// Line 4251, Address: 0x45c9dc, Func Offset: 0x6fc
	// Line 4250, Address: 0x45c9f8, Func Offset: 0x718
	// Line 4251, Address: 0x45c9fc, Func Offset: 0x71c
	// Func End, Address: 0x45ca1c, Func Offset: 0x73c
}

// shadowCacheEnvCB__FP14RpIntersectionP13RpWorldSectorP19RpCollisionTrianglefPv
// Start address: 0x45ca20
RpCollisionTriangle* shadowCacheEnvCB(RpCollisionTriangle* tri, void* data)
{
	ShadowCacheContext* context;
	xShadowCache* cache;
	xShadowPoly* poly;
	float32 dydx;
	float32 dydz;
	float32 depth0;
	float32 n0x;
	float32 n0z;
	float32 n0d;
	float32 n1x;
	float32 n1z;
	float32 n1d;
	float32 n2x;
	float32 n2z;
	float32 n2d;
	// Line 3958, Address: 0x45ca20, Func Offset: 0
	// Line 3962, Address: 0x45ca28, Func Offset: 0x8
	// Line 3975, Address: 0x45ca34, Func Offset: 0x14
	// Line 3980, Address: 0x45ca48, Func Offset: 0x28
	// Line 3981, Address: 0x45ca68, Func Offset: 0x48
	// Line 3970, Address: 0x45ca70, Func Offset: 0x50
	// Line 3976, Address: 0x45ca78, Func Offset: 0x58
	// Line 3985, Address: 0x45ca80, Func Offset: 0x60
	// Line 3986, Address: 0x45ca84, Func Offset: 0x64
	// Line 3985, Address: 0x45ca88, Func Offset: 0x68
	// Line 4013, Address: 0x45ca8c, Func Offset: 0x6c
	// Line 3985, Address: 0x45ca90, Func Offset: 0x70
	// Line 4013, Address: 0x45ca94, Func Offset: 0x74
	// Line 3985, Address: 0x45ca98, Func Offset: 0x78
	// Line 4013, Address: 0x45ca9c, Func Offset: 0x7c
	// Line 3986, Address: 0x45caa0, Func Offset: 0x80
	// Line 3987, Address: 0x45caa8, Func Offset: 0x88
	// Line 3988, Address: 0x45cac4, Func Offset: 0xa4
	// Line 3989, Address: 0x45cae0, Func Offset: 0xc0
	// Line 3990, Address: 0x45cafc, Func Offset: 0xdc
	// Line 3991, Address: 0x45cb04, Func Offset: 0xe4
	// Line 3992, Address: 0x45cb0c, Func Offset: 0xec
	// Line 3996, Address: 0x45cb14, Func Offset: 0xf4
	// Line 3997, Address: 0x45cb18, Func Offset: 0xf8
	// Line 3992, Address: 0x45cb1c, Func Offset: 0xfc
	// Line 3997, Address: 0x45cb20, Func Offset: 0x100
	// Line 3998, Address: 0x45cb28, Func Offset: 0x108
	// Line 3996, Address: 0x45cb2c, Func Offset: 0x10c
	// Line 3997, Address: 0x45cb30, Func Offset: 0x110
	// Line 3996, Address: 0x45cb34, Func Offset: 0x114
	// Line 3997, Address: 0x45cb38, Func Offset: 0x118
	// Line 3998, Address: 0x45cb48, Func Offset: 0x128
	// Line 4002, Address: 0x45cb50, Func Offset: 0x130
	// Line 4000, Address: 0x45cb54, Func Offset: 0x134
	// Line 4004, Address: 0x45cb58, Func Offset: 0x138
	// Line 3998, Address: 0x45cb60, Func Offset: 0x140
	// Line 4000, Address: 0x45cb68, Func Offset: 0x148
	// Line 4008, Address: 0x45cb6c, Func Offset: 0x14c
	// Line 4001, Address: 0x45cb70, Func Offset: 0x150
	// Line 4009, Address: 0x45cb74, Func Offset: 0x154
	// Line 4004, Address: 0x45cb78, Func Offset: 0x158
	// Line 4002, Address: 0x45cb7c, Func Offset: 0x15c
	// Line 4005, Address: 0x45cb84, Func Offset: 0x164
	// Line 4006, Address: 0x45cb88, Func Offset: 0x168
	// Line 4010, Address: 0x45cb94, Func Offset: 0x174
	// Line 4006, Address: 0x45cb98, Func Offset: 0x178
	// Line 4010, Address: 0x45cb9c, Func Offset: 0x17c
	// Line 4013, Address: 0x45cba4, Func Offset: 0x184
	// Line 4016, Address: 0x45cbcc, Func Offset: 0x1ac
	// Line 4018, Address: 0x45cbf0, Func Offset: 0x1d0
	// Line 4021, Address: 0x45cc50, Func Offset: 0x230
	// Line 4023, Address: 0x45cc70, Func Offset: 0x250
	// Line 4026, Address: 0x45cce0, Func Offset: 0x2c0
	// Line 4028, Address: 0x45cd0c, Func Offset: 0x2ec
	// Line 4031, Address: 0x45cd68, Func Offset: 0x348
	// Line 4033, Address: 0x45cd88, Func Offset: 0x368
	// Line 4036, Address: 0x45cdf8, Func Offset: 0x3d8
	// Line 4040, Address: 0x45ce14, Func Offset: 0x3f4
	// Line 4041, Address: 0x45ce18, Func Offset: 0x3f8
	// Func End, Address: 0x45ce20, Func Offset: 0x400
}

// xShadowSetVolume__FP8RwCameraP5xVec3f
// Start address: 0x45ce20
void xShadowSetVolume(RwCamera* shadowCamera, xVec3* pos, float32 depth)
{
	int32 i;
	xVec3 volume[8];
	xVec3 camAt;
	float32 invNearFar;
	float32 lerp;
	int32 cullstate;
	int32 ztest;
	int32 zwrite;
	int32 srcblend;
	int32 destblend;
	// Line 3750, Address: 0x45ce20, Func Offset: 0
	// Line 3760, Address: 0x45ce24, Func Offset: 0x4
	// Line 3750, Address: 0x45ce28, Func Offset: 0x8
	// Line 3759, Address: 0x45ce38, Func Offset: 0x18
	// Line 3760, Address: 0x45ce3c, Func Offset: 0x1c
	// Line 3759, Address: 0x45ce40, Func Offset: 0x20
	// Line 3766, Address: 0x45ce58, Func Offset: 0x38
	// Line 3762, Address: 0x45ce60, Func Offset: 0x40
	// Line 3771, Address: 0x45ce6c, Func Offset: 0x4c
	// Line 3760, Address: 0x45ce70, Func Offset: 0x50
	// Line 3771, Address: 0x45ce74, Func Offset: 0x54
	// Line 3762, Address: 0x45ce78, Func Offset: 0x58
	// Line 3770, Address: 0x45ce7c, Func Offset: 0x5c
	// Line 3764, Address: 0x45ce80, Func Offset: 0x60
	// Line 3762, Address: 0x45ce88, Func Offset: 0x68
	// Line 3764, Address: 0x45ce8c, Func Offset: 0x6c
	// Line 3762, Address: 0x45ce90, Func Offset: 0x70
	// Line 3764, Address: 0x45ce98, Func Offset: 0x78
	// Line 3766, Address: 0x45cea0, Func Offset: 0x80
	// Line 3764, Address: 0x45cea4, Func Offset: 0x84
	// Line 3762, Address: 0x45cea8, Func Offset: 0x88
	// Line 3766, Address: 0x45ceac, Func Offset: 0x8c
	// Line 3767, Address: 0x45ceb0, Func Offset: 0x90
	// Line 3766, Address: 0x45ceb4, Func Offset: 0x94
	// Line 3769, Address: 0x45cec8, Func Offset: 0xa8
	// Line 3767, Address: 0x45ced0, Func Offset: 0xb0
	// Line 3769, Address: 0x45ced4, Func Offset: 0xb4
	// Line 3768, Address: 0x45cedc, Func Offset: 0xbc
	// Line 3770, Address: 0x45cf14, Func Offset: 0xf4
	// Line 3771, Address: 0x45cf54, Func Offset: 0x134
	// Line 3791, Address: 0x45cf60, Func Offset: 0x140
	// Line 3771, Address: 0x45cf64, Func Offset: 0x144
	// Line 3791, Address: 0x45cf68, Func Offset: 0x148
	// Line 3792, Address: 0x45cf74, Func Offset: 0x154
	// Line 3793, Address: 0x45cf84, Func Offset: 0x164
	// Line 3794, Address: 0x45cf94, Func Offset: 0x174
	// Line 3795, Address: 0x45cfa4, Func Offset: 0x184
	// Line 3797, Address: 0x45cfb8, Func Offset: 0x198
	// Line 3795, Address: 0x45cfbc, Func Offset: 0x19c
	// Line 3797, Address: 0x45cfc0, Func Offset: 0x1a0
	// Line 3798, Address: 0x45cfcc, Func Offset: 0x1ac
	// Line 3799, Address: 0x45cfdc, Func Offset: 0x1bc
	// Line 3800, Address: 0x45cfec, Func Offset: 0x1cc
	// Line 3801, Address: 0x45cffc, Func Offset: 0x1dc
	// Line 3802, Address: 0x45d00c, Func Offset: 0x1ec
	// Line 3803, Address: 0x45d01c, Func Offset: 0x1fc
	// Line 3804, Address: 0x45d02c, Func Offset: 0x20c
	// Line 3817, Address: 0x45d040, Func Offset: 0x220
	// Line 3818, Address: 0x45d04c, Func Offset: 0x22c
	// Line 3846, Address: 0x45d060, Func Offset: 0x240
	// Line 3849, Address: 0x45d070, Func Offset: 0x250
	// Line 3857, Address: 0x45d080, Func Offset: 0x260
	// Line 3874, Address: 0x45d09c, Func Offset: 0x27c
	// Line 3889, Address: 0x45d0a4, Func Offset: 0x284
	// Line 3898, Address: 0x45d0ac, Func Offset: 0x28c
	// Line 3920, Address: 0x45d0c8, Func Offset: 0x2a8
	// Line 3921, Address: 0x45d0d8, Func Offset: 0x2b8
	// Line 3922, Address: 0x45d0e8, Func Offset: 0x2c8
	// Line 3923, Address: 0x45d0f8, Func Offset: 0x2d8
	// Line 3924, Address: 0x45d108, Func Offset: 0x2e8
	// Line 3925, Address: 0x45d118, Func Offset: 0x2f8
	// Line 3926, Address: 0x45d128, Func Offset: 0x308
	// Func End, Address: 0x45d138, Func Offset: 0x318
}

// DrawAlphaBox__FP5xVec3iUc
// Start address: 0x45d140
void DrawAlphaBox(xVec3* volume, int32 frontface, uint8 alpha)
{
	uint32 i;
	uint32 numV;
	RxObjSpace3DVertex boxV[36];
	RxObjSpace3DVertex* v3d;
	RwMatrixTag* mainMatrix;
	xVec3 normal;
	xVec3* v0;
	xVec3* v1;
	xVec3* v2;
	xVec3* v3;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	// Line 3698, Address: 0x45d140, Func Offset: 0
	// Line 3703, Address: 0x45d144, Func Offset: 0x4
	// Line 3698, Address: 0x45d148, Func Offset: 0x8
	// Line 3704, Address: 0x45d160, Func Offset: 0x20
	// Line 3698, Address: 0x45d164, Func Offset: 0x24
	// Line 3705, Address: 0x45d170, Func Offset: 0x30
	// Line 3698, Address: 0x45d174, Func Offset: 0x34
	// Line 3706, Address: 0x45d178, Func Offset: 0x38
	// Line 3698, Address: 0x45d17c, Func Offset: 0x3c
	// Line 3706, Address: 0x45d180, Func Offset: 0x40
	// Line 3698, Address: 0x45d184, Func Offset: 0x44
	// Line 3706, Address: 0x45d194, Func Offset: 0x54
	// Line 3698, Address: 0x45d198, Func Offset: 0x58
	// Line 3703, Address: 0x45d1bc, Func Offset: 0x7c
	// Line 3715, Address: 0x45d1cc, Func Offset: 0x8c
	// Line 3721, Address: 0x45d1d0, Func Offset: 0x90
	// Line 3711, Address: 0x45d1d4, Func Offset: 0x94
	// Line 3721, Address: 0x45d1d8, Func Offset: 0x98
	// Line 3712, Address: 0x45d1dc, Func Offset: 0x9c
	// Line 3713, Address: 0x45d1e0, Func Offset: 0xa0
	// Line 3714, Address: 0x45d1e4, Func Offset: 0xa4
	// Line 3715, Address: 0x45d1e8, Func Offset: 0xa8
	// Line 3716, Address: 0x45d1ec, Func Offset: 0xac
	// Line 3717, Address: 0x45d1f0, Func Offset: 0xb0
	// Line 3711, Address: 0x45d1f4, Func Offset: 0xb4
	// Line 3712, Address: 0x45d1fc, Func Offset: 0xbc
	// Line 3711, Address: 0x45d204, Func Offset: 0xc4
	// Line 3712, Address: 0x45d208, Func Offset: 0xc8
	// Line 3711, Address: 0x45d210, Func Offset: 0xd0
	// Line 3714, Address: 0x45d214, Func Offset: 0xd4
	// Line 3713, Address: 0x45d218, Func Offset: 0xd8
	// Line 3718, Address: 0x45d21c, Func Offset: 0xdc
	// Line 3713, Address: 0x45d220, Func Offset: 0xe0
	// Line 3715, Address: 0x45d224, Func Offset: 0xe4
	// Line 3714, Address: 0x45d228, Func Offset: 0xe8
	// Line 3718, Address: 0x45d22c, Func Offset: 0xec
	// Line 3714, Address: 0x45d230, Func Offset: 0xf0
	// Line 3716, Address: 0x45d234, Func Offset: 0xf4
	// Line 3713, Address: 0x45d238, Func Offset: 0xf8
	// Line 3714, Address: 0x45d23c, Func Offset: 0xfc
	// Line 3713, Address: 0x45d240, Func Offset: 0x100
	// Line 3715, Address: 0x45d244, Func Offset: 0x104
	// Line 3714, Address: 0x45d248, Func Offset: 0x108
	// Line 3720, Address: 0x45d24c, Func Offset: 0x10c
	// Line 3718, Address: 0x45d250, Func Offset: 0x110
	// Line 3716, Address: 0x45d25c, Func Offset: 0x11c
	// Line 3719, Address: 0x45d260, Func Offset: 0x120
	// Line 3717, Address: 0x45d264, Func Offset: 0x124
	// Line 3718, Address: 0x45d268, Func Offset: 0x128
	// Line 3719, Address: 0x45d26c, Func Offset: 0x12c
	// Line 3720, Address: 0x45d280, Func Offset: 0x140
	// Line 3721, Address: 0x45d2a4, Func Offset: 0x164
	// Line 3722, Address: 0x45d2ac, Func Offset: 0x16c
	// Line 3723, Address: 0x45d2c4, Func Offset: 0x184
	// Line 3722, Address: 0x45d2c8, Func Offset: 0x188
	// Line 3723, Address: 0x45d2d0, Func Offset: 0x190
	// Line 3725, Address: 0x45d2d8, Func Offset: 0x198
	// Line 3741, Address: 0x45d2f8, Func Offset: 0x1b8
	// Line 3729, Address: 0x45d2fc, Func Offset: 0x1bc
	// Line 3730, Address: 0x45d308, Func Offset: 0x1c8
	// Line 3729, Address: 0x45d314, Func Offset: 0x1d4
	// Line 3730, Address: 0x45d320, Func Offset: 0x1e0
	// Line 3731, Address: 0x45d328, Func Offset: 0x1e8
	// Line 3730, Address: 0x45d32c, Func Offset: 0x1ec
	// Line 3731, Address: 0x45d330, Func Offset: 0x1f0
	// Line 3732, Address: 0x45d344, Func Offset: 0x204
	// Line 3733, Address: 0x45d350, Func Offset: 0x210
	// Line 3734, Address: 0x45d35c, Func Offset: 0x21c
	// Line 3735, Address: 0x45d374, Func Offset: 0x234
	// Line 3736, Address: 0x45d384, Func Offset: 0x244
	// Line 3737, Address: 0x45d394, Func Offset: 0x254
	// Line 3738, Address: 0x45d3a4, Func Offset: 0x264
	// Line 3739, Address: 0x45d3b4, Func Offset: 0x274
	// Line 3740, Address: 0x45d3c4, Func Offset: 0x284
	// Line 3742, Address: 0x45d3d4, Func Offset: 0x294
	// Line 3743, Address: 0x45d3d8, Func Offset: 0x298
	// Line 3745, Address: 0x45d3f0, Func Offset: 0x2b0
	// Line 3746, Address: 0x45d3f8, Func Offset: 0x2b8
	// Line 3723, Address: 0x45d400, Func Offset: 0x2c0
	// Line 3746, Address: 0x45d404, Func Offset: 0x2c4
	// Line 3745, Address: 0x45d41c, Func Offset: 0x2dc
	// Line 3746, Address: 0x45d420, Func Offset: 0x2e0
	// Func End, Address: 0x45d81c, Func Offset: 0x6dc
}

// DrawTwoSidedAlphaBoxPS2__FP5xVec3
// Start address: 0x45d820
void DrawTwoSidedAlphaBoxPS2(xVec3* volume)
{
	HIFastIMLockStruct imlock;
	RwMatrixTag* mainMatrix;
	uint32 i;
	uint32 outFront;
	uint32 outBack;
	xVec3 normal;
	xVec3* v0;
	xVec3* v1;
	xVec3* v2;
	xVec3* v3;
	// Line 3635, Address: 0x45d820, Func Offset: 0
	// Line 3638, Address: 0x45d824, Func Offset: 0x4
	// Line 3635, Address: 0x45d828, Func Offset: 0x8
	// Line 3638, Address: 0x45d82c, Func Offset: 0xc
	// Line 3635, Address: 0x45d830, Func Offset: 0x10
	// Line 3638, Address: 0x45d840, Func Offset: 0x20
	// Line 3635, Address: 0x45d844, Func Offset: 0x24
	// Line 3638, Address: 0x45d864, Func Offset: 0x44
	// Line 3642, Address: 0x45d86c, Func Offset: 0x4c
	// Line 3647, Address: 0x45d870, Func Offset: 0x50
	// Line 3642, Address: 0x45d874, Func Offset: 0x54
	// Line 3647, Address: 0x45d878, Func Offset: 0x58
	// Line 3645, Address: 0x45d87c, Func Offset: 0x5c
	// Line 3647, Address: 0x45d884, Func Offset: 0x64
	// Line 3646, Address: 0x45d894, Func Offset: 0x74
	// Line 3642, Address: 0x45d8a4, Func Offset: 0x84
	// Line 3656, Address: 0x45d8b0, Func Offset: 0x90
	// Line 3662, Address: 0x45d8b4, Func Offset: 0x94
	// Line 3652, Address: 0x45d8b8, Func Offset: 0x98
	// Line 3662, Address: 0x45d8bc, Func Offset: 0x9c
	// Line 3653, Address: 0x45d8c0, Func Offset: 0xa0
	// Line 3654, Address: 0x45d8c4, Func Offset: 0xa4
	// Line 3655, Address: 0x45d8c8, Func Offset: 0xa8
	// Line 3656, Address: 0x45d8cc, Func Offset: 0xac
	// Line 3657, Address: 0x45d8d0, Func Offset: 0xb0
	// Line 3658, Address: 0x45d8d4, Func Offset: 0xb4
	// Line 3652, Address: 0x45d8d8, Func Offset: 0xb8
	// Line 3653, Address: 0x45d8e0, Func Offset: 0xc0
	// Line 3652, Address: 0x45d8e8, Func Offset: 0xc8
	// Line 3653, Address: 0x45d8ec, Func Offset: 0xcc
	// Line 3652, Address: 0x45d8f4, Func Offset: 0xd4
	// Line 3655, Address: 0x45d8f8, Func Offset: 0xd8
	// Line 3654, Address: 0x45d8fc, Func Offset: 0xdc
	// Line 3659, Address: 0x45d900, Func Offset: 0xe0
	// Line 3654, Address: 0x45d904, Func Offset: 0xe4
	// Line 3656, Address: 0x45d908, Func Offset: 0xe8
	// Line 3655, Address: 0x45d90c, Func Offset: 0xec
	// Line 3659, Address: 0x45d910, Func Offset: 0xf0
	// Line 3655, Address: 0x45d914, Func Offset: 0xf4
	// Line 3657, Address: 0x45d918, Func Offset: 0xf8
	// Line 3654, Address: 0x45d91c, Func Offset: 0xfc
	// Line 3655, Address: 0x45d920, Func Offset: 0x100
	// Line 3654, Address: 0x45d924, Func Offset: 0x104
	// Line 3656, Address: 0x45d928, Func Offset: 0x108
	// Line 3655, Address: 0x45d92c, Func Offset: 0x10c
	// Line 3661, Address: 0x45d930, Func Offset: 0x110
	// Line 3659, Address: 0x45d934, Func Offset: 0x114
	// Line 3657, Address: 0x45d940, Func Offset: 0x120
	// Line 3660, Address: 0x45d944, Func Offset: 0x124
	// Line 3658, Address: 0x45d948, Func Offset: 0x128
	// Line 3659, Address: 0x45d94c, Func Offset: 0x12c
	// Line 3660, Address: 0x45d950, Func Offset: 0x130
	// Line 3661, Address: 0x45d964, Func Offset: 0x144
	// Line 3662, Address: 0x45d988, Func Offset: 0x168
	// Line 3665, Address: 0x45d990, Func Offset: 0x170
	// Line 3673, Address: 0x45d9c0, Func Offset: 0x1a0
	// Line 3666, Address: 0x45d9c4, Func Offset: 0x1a4
	// Line 3673, Address: 0x45d9d4, Func Offset: 0x1b4
	// Line 3674, Address: 0x45d9dc, Func Offset: 0x1bc
	// Line 3675, Address: 0x45d9e8, Func Offset: 0x1c8
	// Line 3666, Address: 0x45d9f4, Func Offset: 0x1d4
	// Line 3667, Address: 0x45da04, Func Offset: 0x1e4
	// Line 3668, Address: 0x45da24, Func Offset: 0x204
	// Line 3669, Address: 0x45da44, Func Offset: 0x224
	// Line 3670, Address: 0x45da64, Func Offset: 0x244
	// Line 3671, Address: 0x45da84, Func Offset: 0x264
	// Line 3674, Address: 0x45da98, Func Offset: 0x278
	// Line 3671, Address: 0x45da9c, Func Offset: 0x27c
	// Line 3672, Address: 0x45daa8, Func Offset: 0x288
	// Line 3674, Address: 0x45dabc, Func Offset: 0x29c
	// Line 3673, Address: 0x45dac8, Func Offset: 0x2a8
	// Line 3674, Address: 0x45dad8, Func Offset: 0x2b8
	// Line 3676, Address: 0x45dae4, Func Offset: 0x2c4
	// Line 3683, Address: 0x45daf0, Func Offset: 0x2d0
	// Line 3677, Address: 0x45daf8, Func Offset: 0x2d8
	// Line 3683, Address: 0x45dafc, Func Offset: 0x2dc
	// Line 3684, Address: 0x45db0c, Func Offset: 0x2ec
	// Line 3677, Address: 0x45db10, Func Offset: 0x2f0
	// Line 3684, Address: 0x45db20, Func Offset: 0x300
	// Line 3683, Address: 0x45db24, Func Offset: 0x304
	// Line 3684, Address: 0x45db28, Func Offset: 0x308
	// Line 3685, Address: 0x45db2c, Func Offset: 0x30c
	// Line 3677, Address: 0x45db30, Func Offset: 0x310
	// Line 3678, Address: 0x45db3c, Func Offset: 0x31c
	// Line 3685, Address: 0x45db48, Func Offset: 0x328
	// Line 3686, Address: 0x45db50, Func Offset: 0x330
	// Line 3678, Address: 0x45db5c, Func Offset: 0x33c
	// Line 3679, Address: 0x45db70, Func Offset: 0x350
	// Line 3680, Address: 0x45db90, Func Offset: 0x370
	// Line 3681, Address: 0x45dbb0, Func Offset: 0x390
	// Line 3682, Address: 0x45dbd0, Func Offset: 0x3b0
	// Line 3685, Address: 0x45dbe4, Func Offset: 0x3c4
	// Line 3682, Address: 0x45dbe8, Func Offset: 0x3c8
	// Line 3683, Address: 0x45dbf4, Func Offset: 0x3d4
	// Line 3685, Address: 0x45dc08, Func Offset: 0x3e8
	// Line 3684, Address: 0x45dc14, Func Offset: 0x3f4
	// Line 3685, Address: 0x45dc24, Func Offset: 0x404
	// Line 3688, Address: 0x45dc34, Func Offset: 0x414
	// Line 3691, Address: 0x45dc50, Func Offset: 0x430
	// Line 3692, Address: 0x45dc5c, Func Offset: 0x43c
	// Func End, Address: 0x45dc98, Func Offset: 0x478
}

// ShadowInsideBoxAdjust__FP5xVec3
// Start address: 0x45dca0
uint8 ShadowInsideBoxAdjust(xVec3* volume)
{
	xVec3* v0;
	xVec3* v1;
	xVec3* v2;
	xVec3* v3;
	xVec3 normal[6];
	uint32 i;
	RwCamera* mainCamera;
	RwMatrixTag* mainMatrix;
	float32 nearclip;
	// Line 3580, Address: 0x45dca0, Func Offset: 0
	// Line 3584, Address: 0x45dca4, Func Offset: 0x4
	// Line 3580, Address: 0x45dca8, Func Offset: 0x8
	// Line 3588, Address: 0x45dcac, Func Offset: 0xc
	// Line 3580, Address: 0x45dcb0, Func Offset: 0x10
	// Line 3590, Address: 0x45dcc4, Func Offset: 0x24
	// Line 3580, Address: 0x45dcc8, Func Offset: 0x28
	// Line 3590, Address: 0x45dccc, Func Offset: 0x2c
	// Line 3580, Address: 0x45dcd0, Func Offset: 0x30
	// Line 3590, Address: 0x45dcd4, Func Offset: 0x34
	// Line 3580, Address: 0x45dcd8, Func Offset: 0x38
	// Line 3590, Address: 0x45dcdc, Func Offset: 0x3c
	// Line 3580, Address: 0x45dce0, Func Offset: 0x40
	// Line 3584, Address: 0x45dcf8, Func Offset: 0x58
	// Line 3588, Address: 0x45dcfc, Func Offset: 0x5c
	// Line 3585, Address: 0x45dd08, Func Offset: 0x68
	// Line 3588, Address: 0x45dd0c, Func Offset: 0x6c
	// Line 3585, Address: 0x45dd18, Func Offset: 0x78
	// Line 3588, Address: 0x45dd1c, Func Offset: 0x7c
	// Line 3593, Address: 0x45dd44, Func Offset: 0xa4
	// Line 3597, Address: 0x45dd48, Func Offset: 0xa8
	// Line 3594, Address: 0x45dd4c, Func Offset: 0xac
	// Line 3598, Address: 0x45dd50, Func Offset: 0xb0
	// Line 3595, Address: 0x45dd54, Func Offset: 0xb4
	// Line 3599, Address: 0x45dd58, Func Offset: 0xb8
	// Line 3603, Address: 0x45dd5c, Func Offset: 0xbc
	// Line 3593, Address: 0x45dd64, Func Offset: 0xc4
	// Line 3594, Address: 0x45dd6c, Func Offset: 0xcc
	// Line 3593, Address: 0x45dd74, Func Offset: 0xd4
	// Line 3594, Address: 0x45dd78, Func Offset: 0xd8
	// Line 3593, Address: 0x45dd7c, Func Offset: 0xdc
	// Line 3594, Address: 0x45dd80, Func Offset: 0xe0
	// Line 3595, Address: 0x45dd84, Func Offset: 0xe4
	// Line 3600, Address: 0x45dd8c, Func Offset: 0xec
	// Line 3595, Address: 0x45dd90, Func Offset: 0xf0
	// Line 3597, Address: 0x45dd94, Func Offset: 0xf4
	// Line 3595, Address: 0x45dd98, Func Offset: 0xf8
	// Line 3598, Address: 0x45dd9c, Func Offset: 0xfc
	// Line 3595, Address: 0x45dda0, Func Offset: 0x100
	// Line 3600, Address: 0x45dda4, Func Offset: 0x104
	// Line 3597, Address: 0x45ddac, Func Offset: 0x10c
	// Line 3600, Address: 0x45ddb0, Func Offset: 0x110
	// Line 3598, Address: 0x45ddb4, Func Offset: 0x114
	// Line 3600, Address: 0x45ddb8, Func Offset: 0x118
	// Line 3601, Address: 0x45ddc0, Func Offset: 0x120
	// Line 3599, Address: 0x45ddc4, Func Offset: 0x124
	// Line 3601, Address: 0x45ddc8, Func Offset: 0x128
	// Line 3602, Address: 0x45dddc, Func Offset: 0x13c
	// Line 3603, Address: 0x45ddfc, Func Offset: 0x15c
	// Line 3605, Address: 0x45de04, Func Offset: 0x164
	// Line 3606, Address: 0x45de38, Func Offset: 0x198
	// Line 3608, Address: 0x45de40, Func Offset: 0x1a0
	// Line 3606, Address: 0x45de44, Func Offset: 0x1a4
	// Line 3608, Address: 0x45de48, Func Offset: 0x1a8
	// Line 3606, Address: 0x45de4c, Func Offset: 0x1ac
	// Line 3608, Address: 0x45de50, Func Offset: 0x1b0
	// Line 3611, Address: 0x45de5c, Func Offset: 0x1bc
	// Line 3616, Address: 0x45de70, Func Offset: 0x1d0
	// Line 3612, Address: 0x45de74, Func Offset: 0x1d4
	// Line 3628, Address: 0x45de78, Func Offset: 0x1d8
	// Line 3613, Address: 0x45de7c, Func Offset: 0x1dc
	// Line 3616, Address: 0x45de80, Func Offset: 0x1e0
	// Line 3614, Address: 0x45de84, Func Offset: 0x1e4
	// Line 3628, Address: 0x45de88, Func Offset: 0x1e8
	// Line 3615, Address: 0x45de8c, Func Offset: 0x1ec
	// Line 3612, Address: 0x45de90, Func Offset: 0x1f0
	// Line 3613, Address: 0x45de98, Func Offset: 0x1f8
	// Line 3627, Address: 0x45dea0, Func Offset: 0x200
	// Line 3612, Address: 0x45dea4, Func Offset: 0x204
	// Line 3613, Address: 0x45dea8, Func Offset: 0x208
	// Line 3612, Address: 0x45deac, Func Offset: 0x20c
	// Line 3616, Address: 0x45deb0, Func Offset: 0x210
	// Line 3613, Address: 0x45deb4, Func Offset: 0x214
	// Line 3614, Address: 0x45deb8, Func Offset: 0x218
	// Line 3615, Address: 0x45dec0, Func Offset: 0x220
	// Line 3614, Address: 0x45dec8, Func Offset: 0x228
	// Line 3615, Address: 0x45decc, Func Offset: 0x22c
	// Line 3616, Address: 0x45ded0, Func Offset: 0x230
	// Line 3614, Address: 0x45ded4, Func Offset: 0x234
	// Line 3616, Address: 0x45ded8, Func Offset: 0x238
	// Line 3615, Address: 0x45dedc, Func Offset: 0x23c
	// Line 3616, Address: 0x45dee0, Func Offset: 0x240
	// Line 3617, Address: 0x45dee4, Func Offset: 0x244
	// Line 3618, Address: 0x45def8, Func Offset: 0x258
	// Line 3619, Address: 0x45df0c, Func Offset: 0x26c
	// Line 3620, Address: 0x45df20, Func Offset: 0x280
	// Line 3621, Address: 0x45df34, Func Offset: 0x294
	// Line 3622, Address: 0x45df48, Func Offset: 0x2a8
	// Line 3623, Address: 0x45df5c, Func Offset: 0x2bc
	// Line 3624, Address: 0x45df70, Func Offset: 0x2d0
	// Line 3625, Address: 0x45df84, Func Offset: 0x2e4
	// Line 3626, Address: 0x45df98, Func Offset: 0x2f8
	// Line 3627, Address: 0x45dfac, Func Offset: 0x30c
	// Line 3628, Address: 0x45dfc0, Func Offset: 0x320
	// Line 3629, Address: 0x45dfc8, Func Offset: 0x328
	// Line 3630, Address: 0x45dfcc, Func Offset: 0x32c
	// Func End, Address: 0x45e004, Func Offset: 0x364
}

// ShadowCameraSetSpherePersp__FP8RwCameraP5RwV3df
// Start address: 0x45e010
RwCamera* ShadowCameraSetSpherePersp(RwCamera* camera, RwV3d* center, float32 radius)
{
	RwFrame* camFrame;
	RwMatrixTag* camMatrix;
	RwV3d* camPos;
	float32 objDepth;
	float32 nearZ;
	float32 farZ;
	// Line 3534, Address: 0x45e010, Func Offset: 0
	// Line 3540, Address: 0x45e014, Func Offset: 0x4
	// Line 3534, Address: 0x45e018, Func Offset: 0x8
	// Line 3540, Address: 0x45e01c, Func Offset: 0xc
	// Line 3534, Address: 0x45e020, Func Offset: 0x10
	// Line 3540, Address: 0x45e024, Func Offset: 0x14
	// Line 3534, Address: 0x45e028, Func Offset: 0x18
	// Line 3540, Address: 0x45e04c, Func Offset: 0x3c
	// Line 3535, Address: 0x45e050, Func Offset: 0x40
	// Line 3540, Address: 0x45e058, Func Offset: 0x48
	// Line 3536, Address: 0x45e05c, Func Offset: 0x4c
	// Line 3537, Address: 0x45e064, Func Offset: 0x54
	// Line 3541, Address: 0x45e068, Func Offset: 0x58
	// Line 3542, Address: 0x45e06c, Func Offset: 0x5c
	// Line 3546, Address: 0x45e070, Func Offset: 0x60
	// Line 3548, Address: 0x45e074, Func Offset: 0x64
	// Line 3549, Address: 0x45e07c, Func Offset: 0x6c
	// Line 3554, Address: 0x45e088, Func Offset: 0x78
	// Line 3556, Address: 0x45e08c, Func Offset: 0x7c
	// Line 3555, Address: 0x45e090, Func Offset: 0x80
	// Line 3556, Address: 0x45e094, Func Offset: 0x84
	// Line 3557, Address: 0x45e0a0, Func Offset: 0x90
	// Line 3554, Address: 0x45e0a4, Func Offset: 0x94
	// Line 3555, Address: 0x45e0b8, Func Offset: 0xa8
	// Line 3556, Address: 0x45e0f4, Func Offset: 0xe4
	// Line 3557, Address: 0x45e108, Func Offset: 0xf8
	// Line 3558, Address: 0x45e110, Func Offset: 0x100
	// Line 3561, Address: 0x45e118, Func Offset: 0x108
	// Line 3563, Address: 0x45e11c, Func Offset: 0x10c
	// Line 3564, Address: 0x45e120, Func Offset: 0x110
	// Func End, Address: 0x45e14c, Func Offset: 0x13c
}

// ShadowRenderCachePolys__FP16_ProjectionParamP11xShadowPolyi
// Start address: 0x45e150
void ShadowRenderCachePolys(_ProjectionParam* param, xShadowPoly* poly, int32 count)
{
	int32 i;
	RxObjSpace3DVertex* imv;
	xVec4 vShad[3];
	float32 cx;
	float32 cy;
	float32 cz;
	RwV3d _packed;
	RwV3d _packed;
	RwV3d _packed;
	uint32 sw;
	// Line 2973, Address: 0x45e150, Func Offset: 0
	// Line 2977, Address: 0x45e154, Func Offset: 0x4
	// Line 2973, Address: 0x45e158, Func Offset: 0x8
	// Line 2977, Address: 0x45e15c, Func Offset: 0xc
	// Line 2973, Address: 0x45e160, Func Offset: 0x10
	// Line 2977, Address: 0x45e16c, Func Offset: 0x1c
	// Line 2973, Address: 0x45e170, Func Offset: 0x20
	// Line 2977, Address: 0x45e19c, Func Offset: 0x4c
	// Line 2994, Address: 0x45e1cc, Func Offset: 0x7c
	// Line 2997, Address: 0x45e1d0, Func Offset: 0x80
	// Line 2998, Address: 0x45e1d4, Func Offset: 0x84
	// Line 2999, Address: 0x45e1d8, Func Offset: 0x88
	// Line 3001, Address: 0x45e1dc, Func Offset: 0x8c
	// Line 3002, Address: 0x45e1e0, Func Offset: 0x90
	// Line 3003, Address: 0x45e1e4, Func Offset: 0x94
	// Line 3004, Address: 0x45e1e8, Func Offset: 0x98
	// Line 3006, Address: 0x45e1ec, Func Offset: 0x9c
	// Line 3007, Address: 0x45e1f0, Func Offset: 0xa0
	// Line 3008, Address: 0x45e1f4, Func Offset: 0xa4
	// Line 3009, Address: 0x45e1f8, Func Offset: 0xa8
	// Line 3011, Address: 0x45e1fc, Func Offset: 0xac
	// Line 3012, Address: 0x45e200, Func Offset: 0xb0
	// Line 3013, Address: 0x45e204, Func Offset: 0xb4
	// Line 3014, Address: 0x45e208, Func Offset: 0xb8
	// Line 3016, Address: 0x45e20c, Func Offset: 0xbc
	// Line 3017, Address: 0x45e210, Func Offset: 0xc0
	// Line 3018, Address: 0x45e214, Func Offset: 0xc4
	// Line 3046, Address: 0x45e218, Func Offset: 0xc8
	// Line 3060, Address: 0x45e31c, Func Offset: 0x1cc
	// Line 3062, Address: 0x45e328, Func Offset: 0x1d8
	// Line 3063, Address: 0x45e6c0, Func Offset: 0x570
	// Line 3064, Address: 0x45e6cc, Func Offset: 0x57c
	// Line 3070, Address: 0x45e6d0, Func Offset: 0x580
	// Line 3075, Address: 0x45e6d4, Func Offset: 0x584
	// Line 3070, Address: 0x45e6d8, Func Offset: 0x588
	// Line 3076, Address: 0x45e6dc, Func Offset: 0x58c
	// Line 3074, Address: 0x45e6e0, Func Offset: 0x590
	// Line 3078, Address: 0x45e6e4, Func Offset: 0x594
	// Line 3070, Address: 0x45e6ec, Func Offset: 0x59c
	// Line 3075, Address: 0x45e6f0, Func Offset: 0x5a0
	// Line 3070, Address: 0x45e6f4, Func Offset: 0x5a4
	// Line 3078, Address: 0x45e700, Func Offset: 0x5b0
	// Line 3084, Address: 0x45e70c, Func Offset: 0x5bc
	// Line 3076, Address: 0x45e714, Func Offset: 0x5c4
	// Line 3074, Address: 0x45e718, Func Offset: 0x5c8
	// Line 3086, Address: 0x45e71c, Func Offset: 0x5cc
	// Line 3078, Address: 0x45e724, Func Offset: 0x5d4
	// Line 3087, Address: 0x45e72c, Func Offset: 0x5dc
	// Line 3078, Address: 0x45e734, Func Offset: 0x5e4
	// Line 3082, Address: 0x45e738, Func Offset: 0x5e8
	// Line 3083, Address: 0x45e73c, Func Offset: 0x5ec
	// Line 3078, Address: 0x45e740, Func Offset: 0x5f0
	// Line 3088, Address: 0x45e744, Func Offset: 0x5f4
	// Line 3078, Address: 0x45e74c, Func Offset: 0x5fc
	// Line 3079, Address: 0x45e758, Func Offset: 0x608
	// Line 3078, Address: 0x45e760, Func Offset: 0x610
	// Line 3079, Address: 0x45e768, Func Offset: 0x618
	// Line 3080, Address: 0x45e798, Func Offset: 0x648
	// Line 3082, Address: 0x45e7c8, Func Offset: 0x678
	// Line 3083, Address: 0x45e7cc, Func Offset: 0x67c
	// Line 3084, Address: 0x45e7d0, Func Offset: 0x680
	// Line 3086, Address: 0x45e7d4, Func Offset: 0x684
	// Line 3087, Address: 0x45e7d8, Func Offset: 0x688
	// Line 3080, Address: 0x45e7dc, Func Offset: 0x68c
	// Line 3088, Address: 0x45e7e0, Func Offset: 0x690
	// Line 3080, Address: 0x45e7e8, Func Offset: 0x698
	// Line 3095, Address: 0x45e7ec, Func Offset: 0x69c
	// Line 3096, Address: 0x45e7f0, Func Offset: 0x6a0
	// Line 3097, Address: 0x45e7f4, Func Offset: 0x6a4
	// Line 3108, Address: 0x45e7f8, Func Offset: 0x6a8
	// Line 3116, Address: 0x45e804, Func Offset: 0x6b4
	// Line 3125, Address: 0x45e820, Func Offset: 0x6d0
	// Func End, Address: 0x45e85c, Func Offset: 0x70c
}

// ShadowCameraUpdate__FP8RwCameraPvPFPv_vP5xVec3fi
// Start address: 0x45e860
RwCamera* ShadowCameraUpdate(RwCamera* shadowCamera, void* model, void(*renderCB)(void*))
{
	RwRGBA bgColor;
	RwCamera* camera;
	int32 fogstate;
	// Line 2349, Address: 0x45e860, Func Offset: 0
	// Line 2352, Address: 0x45e864, Func Offset: 0x4
	// Line 2349, Address: 0x45e868, Func Offset: 0x8
	// Line 2358, Address: 0x45e88c, Func Offset: 0x2c
	// Line 2352, Address: 0x45e890, Func Offset: 0x30
	// Line 2350, Address: 0x45e894, Func Offset: 0x34
	// Line 2358, Address: 0x45e898, Func Offset: 0x38
	// Line 2359, Address: 0x45e8b0, Func Offset: 0x50
	// Line 2358, Address: 0x45e8b4, Func Offset: 0x54
	// Line 2359, Address: 0x45e8b8, Func Offset: 0x58
	// Line 2365, Address: 0x45e8c4, Func Offset: 0x64
	// Line 2366, Address: 0x45e8cc, Func Offset: 0x6c
	// Line 2369, Address: 0x45e8d4, Func Offset: 0x74
	// Line 2370, Address: 0x45e8dc, Func Offset: 0x7c
	// Line 2417, Address: 0x45e8e4, Func Offset: 0x84
	// Line 2422, Address: 0x45e8f4, Func Offset: 0x94
	// Line 2427, Address: 0x45e8fc, Func Offset: 0x9c
	// Line 2474, Address: 0x45e90c, Func Offset: 0xac
	// Line 2475, Address: 0x45e914, Func Offset: 0xb4
	// Line 2482, Address: 0x45e91c, Func Offset: 0xbc
	// Line 2485, Address: 0x45e92c, Func Offset: 0xcc
	// Line 2429, Address: 0x45e938, Func Offset: 0xd8
	// Line 2485, Address: 0x45e93c, Func Offset: 0xdc
	// Line 2430, Address: 0x45e948, Func Offset: 0xe8
	// Line 2485, Address: 0x45e94c, Func Offset: 0xec
	// Line 2431, Address: 0x45e958, Func Offset: 0xf8
	// Line 2485, Address: 0x45e95c, Func Offset: 0xfc
	// Line 2432, Address: 0x45e968, Func Offset: 0x108
	// Line 2485, Address: 0x45e96c, Func Offset: 0x10c
	// Line 2465, Address: 0x45e998, Func Offset: 0x138
	// Line 2485, Address: 0x45e99c, Func Offset: 0x13c
	// Line 2466, Address: 0x45e9a8, Func Offset: 0x148
	// Line 2485, Address: 0x45e9ac, Func Offset: 0x14c
	// Line 2486, Address: 0x45e9c4, Func Offset: 0x164
	// Func End, Address: 0x45e9e4, Func Offset: 0x184
}

// ShadowCameraDestroy__FP8RwCamera
// Start address: 0x45e9f0
void ShadowCameraDestroy(RwCamera* shadowCamera)
{
	RwRaster* raster;
	RwFrame* frame;
	// Line 2177, Address: 0x45e9f0, Func Offset: 0
	// Line 2178, Address: 0x45ea00, Func Offset: 0x10
	// Line 2185, Address: 0x45ea08, Func Offset: 0x18
	// Line 2187, Address: 0x45ea10, Func Offset: 0x20
	// Line 2188, Address: 0x45ea14, Func Offset: 0x24
	// Line 2190, Address: 0x45ea1c, Func Offset: 0x2c
	// Line 2191, Address: 0x45ea24, Func Offset: 0x34
	// Line 2194, Address: 0x45ea34, Func Offset: 0x44
	// Line 2195, Address: 0x45ea38, Func Offset: 0x48
	// Line 2198, Address: 0x45ea40, Func Offset: 0x50
	// Line 2201, Address: 0x45ea48, Func Offset: 0x58
	// Line 2202, Address: 0x45ea4c, Func Offset: 0x5c
	// Line 2206, Address: 0x45ea54, Func Offset: 0x64
	// Line 2209, Address: 0x45ea5c, Func Offset: 0x6c
	// Line 2213, Address: 0x45ea64, Func Offset: 0x74
	// Func End, Address: 0x45ea78, Func Offset: 0x88
}

// Im2DRenderQuad__Ffffffff
// Start address: 0x45ea80
int32 Im2DRenderQuad(float32 x1, float32 y1, float32 x2, float32 y2, float32 z, float32 recipCamZ, float32 uvOffset)
{
	RwSky2DVertex vx[4];
	// Line 2040, Address: 0x45ea80, Func Offset: 0
	// Line 2051, Address: 0x45ea90, Func Offset: 0x10
	// Line 2080, Address: 0x45ea94, Func Offset: 0x14
	// Line 2051, Address: 0x45ea9c, Func Offset: 0x1c
	// Line 2080, Address: 0x45eaa0, Func Offset: 0x20
	// Line 2051, Address: 0x45eaa8, Func Offset: 0x28
	// Line 2080, Address: 0x45eaac, Func Offset: 0x2c
	// Line 2051, Address: 0x45eab0, Func Offset: 0x30
	// Line 2080, Address: 0x45eab4, Func Offset: 0x34
	// Line 2051, Address: 0x45eab8, Func Offset: 0x38
	// Line 2048, Address: 0x45eabc, Func Offset: 0x3c
	// Line 2059, Address: 0x45eac0, Func Offset: 0x40
	// Line 2056, Address: 0x45eac4, Func Offset: 0x44
	// Line 2059, Address: 0x45eac8, Func Offset: 0x48
	// Line 2049, Address: 0x45eacc, Func Offset: 0x4c
	// Line 2059, Address: 0x45ead0, Func Offset: 0x50
	// Line 2065, Address: 0x45ead4, Func Offset: 0x54
	// Line 2059, Address: 0x45ead8, Func Offset: 0x58
	// Line 2050, Address: 0x45eadc, Func Offset: 0x5c
	// Line 2067, Address: 0x45eae0, Func Offset: 0x60
	// Line 2052, Address: 0x45eae4, Func Offset: 0x64
	// Line 2067, Address: 0x45eae8, Func Offset: 0x68
	// Line 2053, Address: 0x45eaec, Func Offset: 0x6c
	// Line 2067, Address: 0x45eaf0, Func Offset: 0x70
	// Line 2054, Address: 0x45eaf4, Func Offset: 0x74
	// Line 2067, Address: 0x45eaf8, Func Offset: 0x78
	// Line 2057, Address: 0x45eafc, Func Offset: 0x7c
	// Line 2075, Address: 0x45eb00, Func Offset: 0x80
	// Line 2073, Address: 0x45eb04, Func Offset: 0x84
	// Line 2075, Address: 0x45eb08, Func Offset: 0x88
	// Line 2058, Address: 0x45eb0c, Func Offset: 0x8c
	// Line 2075, Address: 0x45eb10, Func Offset: 0x90
	// Line 2060, Address: 0x45eb14, Func Offset: 0x94
	// Line 2075, Address: 0x45eb18, Func Offset: 0x98
	// Line 2061, Address: 0x45eb1c, Func Offset: 0x9c
	// Line 2070, Address: 0x45eb20, Func Offset: 0xa0
	// Line 2062, Address: 0x45eb24, Func Offset: 0xa4
	// Line 2064, Address: 0x45eb28, Func Offset: 0xa8
	// Line 2072, Address: 0x45eb2c, Func Offset: 0xac
	// Line 2066, Address: 0x45eb30, Func Offset: 0xb0
	// Line 2074, Address: 0x45eb34, Func Offset: 0xb4
	// Line 2068, Address: 0x45eb38, Func Offset: 0xb8
	// Line 2076, Address: 0x45eb3c, Func Offset: 0xbc
	// Line 2069, Address: 0x45eb40, Func Offset: 0xc0
	// Line 2077, Address: 0x45eb44, Func Offset: 0xc4
	// Line 2080, Address: 0x45eb48, Func Offset: 0xc8
	// Line 2083, Address: 0x45eb50, Func Offset: 0xd0
	// Line 2082, Address: 0x45eb54, Func Offset: 0xd4
	// Line 2083, Address: 0x45eb58, Func Offset: 0xd8
	// Func End, Address: 0x45eb60, Func Offset: 0xe0
}

// xShadow_ListAdd__FP4xEnt
// Start address: 0x45eb60
void xShadow_ListAdd(xEnt* ent)
{
	// Line 1954, Address: 0x45eb60, Func Offset: 0
	// Func End, Address: 0x45eb68, Func Offset: 0x8
}

// xShadowReceiveShadow__FP4xEntfiP11RwMatrixTagP8RwRaster
// Start address: 0x45eb70
void xShadowReceiveShadow(xEnt* ent, float32 shadowFactor, int32 shadowMode, RwMatrixTag* shadowMat, RwRaster* shadowRast)
{
	RwMatrixTag oldroot;
	// Line 1552, Address: 0x45eb70, Func Offset: 0
	// Line 1557, Address: 0x45eb9c, Func Offset: 0x2c
	// Line 1561, Address: 0x45ebb0, Func Offset: 0x40
	// Line 1562, Address: 0x45ebd8, Func Offset: 0x68
	// Line 1577, Address: 0x45ebec, Func Offset: 0x7c
	// Line 1927, Address: 0x45ec08, Func Offset: 0x98
	// Line 1930, Address: 0x45ec1c, Func Offset: 0xac
	// Line 1564, Address: 0x45ec94, Func Offset: 0x124
	// Line 1930, Address: 0x45ec98, Func Offset: 0x128
	// Line 1564, Address: 0x45ecc4, Func Offset: 0x154
	// Line 1930, Address: 0x45ecc8, Func Offset: 0x158
	// Line 1564, Address: 0x45ecdc, Func Offset: 0x16c
	// Line 1930, Address: 0x45ece0, Func Offset: 0x170
	// Line 1564, Address: 0x45ecf4, Func Offset: 0x184
	// Line 1930, Address: 0x45ecf8, Func Offset: 0x188
	// Line 1564, Address: 0x45ed0c, Func Offset: 0x19c
	// Line 1930, Address: 0x45ed10, Func Offset: 0x1a0
	// Line 1564, Address: 0x45ed24, Func Offset: 0x1b4
	// Line 1930, Address: 0x45ed28, Func Offset: 0x1b8
	// Line 1564, Address: 0x45ed3c, Func Offset: 0x1cc
	// Line 1930, Address: 0x45ed40, Func Offset: 0x1d0
	// Line 1564, Address: 0x45ed54, Func Offset: 0x1e4
	// Line 1930, Address: 0x45ed58, Func Offset: 0x1e8
	// Line 1564, Address: 0x45ed6c, Func Offset: 0x1fc
	// Line 1930, Address: 0x45ed78, Func Offset: 0x208
	// Func End, Address: 0x45ee20, Func Offset: 0x2b0
}

// xShadowReceiveShadowFastPS2__FP4xEntfiP11RwMatrixTagP8RwRaster
// Start address: 0x45ee20
void xShadowReceiveShadowFastPS2(xEnt* ent, float32 shadowFactor, int32 shadowMode, RwMatrixTag* shadowMat, RwRaster* shadowRast)
{
	RwCamera* shadowCamera;
	RwMatrixTag* shadowMatrix;
	RwMatrixTag invMatrix;
	RwV4dTag at;
	float32 radius;
	RwV3d scl;
	RwV3d tr;
	float32 fadeDist;
	uint32 i;
	uint32 num_verts;
	xVec3* xvert;
	RpTriangle* tri;
	RpGeometry* geom;
	uint8 val;
	uint32 vertex_color;
	xModelInstance* model;
	uint32 max_verts;
	uint32 model_num;
	uint32 ent_id;
	xVec3* vert;
	RxObjSpace3DVertex* imv;
	xVec3* v0;
	xVec3* v1;
	xVec3* v2;
	float32 local_SHADOW_BIAS_AMT;
	float32 local_SHADOW_MINNORMY;
	// Line 987, Address: 0x45ee20, Func Offset: 0
	// Line 1039, Address: 0x45ee68, Func Offset: 0x48
	// Line 1041, Address: 0x45ee74, Func Offset: 0x54
	// Line 1039, Address: 0x45ee78, Func Offset: 0x58
	// Line 1041, Address: 0x45ee80, Func Offset: 0x60
	// Line 1042, Address: 0x45ee8c, Func Offset: 0x6c
	// Line 1044, Address: 0x45ee98, Func Offset: 0x78
	// Line 1042, Address: 0x45ee9c, Func Offset: 0x7c
	// Line 1044, Address: 0x45eea4, Func Offset: 0x84
	// Line 1047, Address: 0x45eeb0, Func Offset: 0x90
	// Line 1048, Address: 0x45eec4, Func Offset: 0xa4
	// Line 1055, Address: 0x45eed8, Func Offset: 0xb8
	// Line 1058, Address: 0x45eef0, Func Offset: 0xd0
	// Line 1059, Address: 0x45ef04, Func Offset: 0xe4
	// Line 1062, Address: 0x45ef0c, Func Offset: 0xec
	// Line 1067, Address: 0x45ef20, Func Offset: 0x100
	// Line 1073, Address: 0x45ef34, Func Offset: 0x114
	// Line 1076, Address: 0x45ef50, Func Offset: 0x130
	// Line 1077, Address: 0x45ef64, Func Offset: 0x144
	// Line 1078, Address: 0x45ef78, Func Offset: 0x158
	// Line 1083, Address: 0x45ef80, Func Offset: 0x160
	// Line 1087, Address: 0x45ef94, Func Offset: 0x174
	// Line 1090, Address: 0x45ef9c, Func Offset: 0x17c
	// Line 1093, Address: 0x45efb4, Func Offset: 0x194
	// Line 1094, Address: 0x45efc8, Func Offset: 0x1a8
	// Line 1099, Address: 0x45efd0, Func Offset: 0x1b0
	// Line 1115, Address: 0x45efe4, Func Offset: 0x1c4
	// Line 1117, Address: 0x45effc, Func Offset: 0x1dc
	// Line 1122, Address: 0x45f000, Func Offset: 0x1e0
	// Line 1118, Address: 0x45f004, Func Offset: 0x1e4
	// Line 1122, Address: 0x45f008, Func Offset: 0x1e8
	// Line 1119, Address: 0x45f00c, Func Offset: 0x1ec
	// Line 1120, Address: 0x45f010, Func Offset: 0x1f0
	// Line 1117, Address: 0x45f014, Func Offset: 0x1f4
	// Line 1118, Address: 0x45f018, Func Offset: 0x1f8
	// Line 1122, Address: 0x45f01c, Func Offset: 0x1fc
	// Line 1124, Address: 0x45f024, Func Offset: 0x204
	// Line 1125, Address: 0x45f028, Func Offset: 0x208
	// Line 1124, Address: 0x45f02c, Func Offset: 0x20c
	// Line 1126, Address: 0x45f030, Func Offset: 0x210
	// Line 1125, Address: 0x45f034, Func Offset: 0x214
	// Line 1126, Address: 0x45f038, Func Offset: 0x218
	// Line 1124, Address: 0x45f03c, Func Offset: 0x21c
	// Line 1126, Address: 0x45f040, Func Offset: 0x220
	// Line 1125, Address: 0x45f044, Func Offset: 0x224
	// Line 1124, Address: 0x45f048, Func Offset: 0x228
	// Line 1125, Address: 0x45f04c, Func Offset: 0x22c
	// Line 1124, Address: 0x45f054, Func Offset: 0x234
	// Line 1125, Address: 0x45f058, Func Offset: 0x238
	// Line 1126, Address: 0x45f060, Func Offset: 0x240
	// Line 1128, Address: 0x45f068, Func Offset: 0x248
	// Line 1130, Address: 0x45f06c, Func Offset: 0x24c
	// Line 1128, Address: 0x45f070, Func Offset: 0x250
	// Line 1130, Address: 0x45f074, Func Offset: 0x254
	// Line 1128, Address: 0x45f078, Func Offset: 0x258
	// Line 1130, Address: 0x45f07c, Func Offset: 0x25c
	// Line 1160, Address: 0x45f088, Func Offset: 0x268
	// Line 1163, Address: 0x45f0a0, Func Offset: 0x280
	// Line 1169, Address: 0x45f100, Func Offset: 0x2e0
	// Line 1164, Address: 0x45f108, Func Offset: 0x2e8
	// Line 1170, Address: 0x45f10c, Func Offset: 0x2ec
	// Line 1169, Address: 0x45f110, Func Offset: 0x2f0
	// Line 1164, Address: 0x45f114, Func Offset: 0x2f4
	// Line 1175, Address: 0x45f124, Func Offset: 0x304
	// Line 1177, Address: 0x45f138, Func Offset: 0x318
	// Line 1178, Address: 0x45f148, Func Offset: 0x328
	// Line 1180, Address: 0x45f150, Func Offset: 0x330
	// Line 1181, Address: 0x45f154, Func Offset: 0x334
	// Line 1182, Address: 0x45f160, Func Offset: 0x340
	// Line 1183, Address: 0x45f164, Func Offset: 0x344
	// Line 1185, Address: 0x45f168, Func Offset: 0x348
	// Line 1186, Address: 0x45f170, Func Offset: 0x350
	// Line 1187, Address: 0x45f174, Func Offset: 0x354
	// Line 1189, Address: 0x45f180, Func Offset: 0x360
	// Line 1192, Address: 0x45f188, Func Offset: 0x368
	// Line 1193, Address: 0x45f19c, Func Offset: 0x37c
	// Line 1196, Address: 0x45f1a4, Func Offset: 0x384
	// Line 1199, Address: 0x45f1a8, Func Offset: 0x388
	// Line 1196, Address: 0x45f1ac, Func Offset: 0x38c
	// Line 1200, Address: 0x45f1b4, Func Offset: 0x394
	// Line 1201, Address: 0x45f1b8, Func Offset: 0x398
	// Line 1202, Address: 0x45f1bc, Func Offset: 0x39c
	// Line 1203, Address: 0x45f1c0, Func Offset: 0x3a0
	// Line 1221, Address: 0x45f1c4, Func Offset: 0x3a4
	// Line 1222, Address: 0x45f1cc, Func Offset: 0x3ac
	// Line 1224, Address: 0x45f1f8, Func Offset: 0x3d8
	// Line 1237, Address: 0x45f210, Func Offset: 0x3f0
	// Line 1224, Address: 0x45f21c, Func Offset: 0x3fc
	// Line 1237, Address: 0x45f220, Func Offset: 0x400
	// Line 1230, Address: 0x45f224, Func Offset: 0x404
	// Line 1233, Address: 0x45f228, Func Offset: 0x408
	// Line 1237, Address: 0x45f22c, Func Offset: 0x40c
	// Line 1247, Address: 0x45f234, Func Offset: 0x414
	// Line 1248, Address: 0x45f23c, Func Offset: 0x41c
	// Line 1253, Address: 0x45f254, Func Offset: 0x434
	// Line 1255, Address: 0x45f260, Func Offset: 0x440
	// Line 1256, Address: 0x45f5f8, Func Offset: 0x7d8
	// Line 1257, Address: 0x45f5fc, Func Offset: 0x7dc
	// Line 1259, Address: 0x45f600, Func Offset: 0x7e0
	// Line 1261, Address: 0x45f604, Func Offset: 0x7e4
	// Line 1262, Address: 0x45f608, Func Offset: 0x7e8
	// Line 1263, Address: 0x45f60c, Func Offset: 0x7ec
	// Line 1259, Address: 0x45f610, Func Offset: 0x7f0
	// Line 1261, Address: 0x45f620, Func Offset: 0x800
	// Line 1259, Address: 0x45f628, Func Offset: 0x808
	// Line 1261, Address: 0x45f62c, Func Offset: 0x80c
	// Line 1262, Address: 0x45f630, Func Offset: 0x810
	// Line 1261, Address: 0x45f634, Func Offset: 0x814
	// Line 1262, Address: 0x45f638, Func Offset: 0x818
	// Line 1263, Address: 0x45f640, Func Offset: 0x820
	// Line 1262, Address: 0x45f64c, Func Offset: 0x82c
	// Line 1263, Address: 0x45f650, Func Offset: 0x830
	// Line 1291, Address: 0x45f654, Func Offset: 0x834
	// Line 1292, Address: 0x45f658, Func Offset: 0x838
	// Line 1293, Address: 0x45f65c, Func Offset: 0x83c
	// Line 1294, Address: 0x45f660, Func Offset: 0x840
	// Line 1295, Address: 0x45f664, Func Offset: 0x844
	// Line 1296, Address: 0x45f668, Func Offset: 0x848
	// Line 1297, Address: 0x45f66c, Func Offset: 0x84c
	// Line 1298, Address: 0x45f670, Func Offset: 0x850
	// Line 1300, Address: 0x45f674, Func Offset: 0x854
	// Line 1301, Address: 0x45f678, Func Offset: 0x858
	// Line 1302, Address: 0x45f67c, Func Offset: 0x85c
	// Line 1303, Address: 0x45f680, Func Offset: 0x860
	// Line 1304, Address: 0x45f684, Func Offset: 0x864
	// Line 1305, Address: 0x45f688, Func Offset: 0x868
	// Line 1306, Address: 0x45f68c, Func Offset: 0x86c
	// Line 1308, Address: 0x45f690, Func Offset: 0x870
	// Line 1309, Address: 0x45f694, Func Offset: 0x874
	// Line 1310, Address: 0x45f698, Func Offset: 0x878
	// Line 1311, Address: 0x45f69c, Func Offset: 0x87c
	// Line 1312, Address: 0x45f6a0, Func Offset: 0x880
	// Line 1313, Address: 0x45f6a4, Func Offset: 0x884
	// Line 1315, Address: 0x45f6a8, Func Offset: 0x888
	// Line 1316, Address: 0x45f6ac, Func Offset: 0x88c
	// Line 1317, Address: 0x45f6b0, Func Offset: 0x890
	// Line 1318, Address: 0x45f6b4, Func Offset: 0x894
	// Line 1320, Address: 0x45f6b8, Func Offset: 0x898
	// Line 1321, Address: 0x45f6bc, Func Offset: 0x89c
	// Line 1322, Address: 0x45f6c0, Func Offset: 0x8a0
	// Line 1323, Address: 0x45f6c4, Func Offset: 0x8a4
	// Line 1325, Address: 0x45f6c8, Func Offset: 0x8a8
	// Line 1326, Address: 0x45f6cc, Func Offset: 0x8ac
	// Line 1327, Address: 0x45f6d0, Func Offset: 0x8b0
	// Line 1328, Address: 0x45f6d4, Func Offset: 0x8b4
	// Line 1359, Address: 0x45f6d8, Func Offset: 0x8b8
	// Line 1360, Address: 0x45f6dc, Func Offset: 0x8bc
	// Line 1361, Address: 0x45f6e0, Func Offset: 0x8c0
	// Line 1362, Address: 0x45f6e4, Func Offset: 0x8c4
	// Line 1367, Address: 0x45f6e8, Func Offset: 0x8c8
	// Line 1368, Address: 0x45f6ec, Func Offset: 0x8cc
	// Line 1369, Address: 0x45f6f0, Func Offset: 0x8d0
	// Line 1370, Address: 0x45f6f4, Func Offset: 0x8d4
	// Line 1371, Address: 0x45f6f8, Func Offset: 0x8d8
	// Line 1372, Address: 0x45f6fc, Func Offset: 0x8dc
	// Line 1373, Address: 0x45f700, Func Offset: 0x8e0
	// Line 1374, Address: 0x45f704, Func Offset: 0x8e4
	// Line 1375, Address: 0x45f708, Func Offset: 0x8e8
	// Line 1376, Address: 0x45f70c, Func Offset: 0x8ec
	// Line 1377, Address: 0x45f710, Func Offset: 0x8f0
	// Line 1378, Address: 0x45f714, Func Offset: 0x8f4
	// Line 1380, Address: 0x45f718, Func Offset: 0x8f8
	// Line 1381, Address: 0x45f71c, Func Offset: 0x8fc
	// Line 1382, Address: 0x45f720, Func Offset: 0x900
	// Line 1383, Address: 0x45f724, Func Offset: 0x904
	// Line 1385, Address: 0x45f72c, Func Offset: 0x90c
	// Line 1395, Address: 0x45f730, Func Offset: 0x910
	// Line 1397, Address: 0x45f734, Func Offset: 0x914
	// Line 1396, Address: 0x45f738, Func Offset: 0x918
	// Line 1397, Address: 0x45f73c, Func Offset: 0x91c
	// Line 1403, Address: 0x45f740, Func Offset: 0x920
	// Line 1406, Address: 0x45f744, Func Offset: 0x924
	// Line 1407, Address: 0x45f748, Func Offset: 0x928
	// Line 1408, Address: 0x45f74c, Func Offset: 0x92c
	// Line 1410, Address: 0x45f750, Func Offset: 0x930
	// Line 1411, Address: 0x45f754, Func Offset: 0x934
	// Line 1412, Address: 0x45f758, Func Offset: 0x938
	// Line 1413, Address: 0x45f75c, Func Offset: 0x93c
	// Line 1414, Address: 0x45f760, Func Offset: 0x940
	// Line 1415, Address: 0x45f764, Func Offset: 0x944
	// Line 1416, Address: 0x45f768, Func Offset: 0x948
	// Line 1417, Address: 0x45f76c, Func Offset: 0x94c
	// Line 1419, Address: 0x45f770, Func Offset: 0x950
	// Line 1420, Address: 0x45f774, Func Offset: 0x954
	// Line 1421, Address: 0x45f778, Func Offset: 0x958
	// Line 1422, Address: 0x45f77c, Func Offset: 0x95c
	// Line 1423, Address: 0x45f780, Func Offset: 0x960
	// Line 1424, Address: 0x45f784, Func Offset: 0x964
	// Line 1425, Address: 0x45f788, Func Offset: 0x968
	// Line 1426, Address: 0x45f78c, Func Offset: 0x96c
	// Line 1428, Address: 0x45f790, Func Offset: 0x970
	// Line 1429, Address: 0x45f794, Func Offset: 0x974
	// Line 1430, Address: 0x45f798, Func Offset: 0x978
	// Line 1431, Address: 0x45f79c, Func Offset: 0x97c
	// Line 1434, Address: 0x45f7a4, Func Offset: 0x984
	// Line 1435, Address: 0x45f7a8, Func Offset: 0x988
	// Line 1436, Address: 0x45f7ac, Func Offset: 0x98c
	// Line 1437, Address: 0x45f7b0, Func Offset: 0x990
	// Line 1438, Address: 0x45f7b4, Func Offset: 0x994
	// Line 1439, Address: 0x45f7b8, Func Offset: 0x998
	// Line 1440, Address: 0x45f7bc, Func Offset: 0x99c
	// Line 1441, Address: 0x45f7c0, Func Offset: 0x9a0
	// Line 1442, Address: 0x45f7c4, Func Offset: 0x9a4
	// Line 1448, Address: 0x45f7c8, Func Offset: 0x9a8
	// Line 1449, Address: 0x45f7cc, Func Offset: 0x9ac
	// Line 1450, Address: 0x45f7d0, Func Offset: 0x9b0
	// Line 1456, Address: 0x45f7d8, Func Offset: 0x9b8
	// Line 1457, Address: 0x45f7dc, Func Offset: 0x9bc
	// Line 1458, Address: 0x45f7e0, Func Offset: 0x9c0
	// Line 1459, Address: 0x45f7e4, Func Offset: 0x9c4
	// Line 1460, Address: 0x45f7e8, Func Offset: 0x9c8
	// Line 1462, Address: 0x45f7ec, Func Offset: 0x9cc
	// Line 1463, Address: 0x45f7f0, Func Offset: 0x9d0
	// Line 1464, Address: 0x45f7f4, Func Offset: 0x9d4
	// Line 1465, Address: 0x45f7f8, Func Offset: 0x9d8
	// Line 1466, Address: 0x45f7fc, Func Offset: 0x9dc
	// Line 1467, Address: 0x45f800, Func Offset: 0x9e0
	// Line 1469, Address: 0x45f804, Func Offset: 0x9e4
	// Line 1470, Address: 0x45f808, Func Offset: 0x9e8
	// Line 1471, Address: 0x45f80c, Func Offset: 0x9ec
	// Line 1472, Address: 0x45f810, Func Offset: 0x9f0
	// Line 1473, Address: 0x45f814, Func Offset: 0x9f4
	// Line 1474, Address: 0x45f818, Func Offset: 0x9f8
	// Line 1481, Address: 0x45f81c, Func Offset: 0x9fc
	// Line 1482, Address: 0x45f820, Func Offset: 0xa00
	// Line 1483, Address: 0x45f824, Func Offset: 0xa04
	// Line 1484, Address: 0x45f828, Func Offset: 0xa08
	// Line 1486, Address: 0x45f82c, Func Offset: 0xa0c
	// Line 1487, Address: 0x45f830, Func Offset: 0xa10
	// Line 1488, Address: 0x45f834, Func Offset: 0xa14
	// Line 1489, Address: 0x45f838, Func Offset: 0xa18
	// Line 1491, Address: 0x45f83c, Func Offset: 0xa1c
	// Line 1492, Address: 0x45f840, Func Offset: 0xa20
	// Line 1493, Address: 0x45f844, Func Offset: 0xa24
	// Line 1494, Address: 0x45f848, Func Offset: 0xa28
	// Line 1500, Address: 0x45f84c, Func Offset: 0xa2c
	// Line 1501, Address: 0x45f850, Func Offset: 0xa30
	// Line 1502, Address: 0x45f854, Func Offset: 0xa34
	// Line 1504, Address: 0x45f858, Func Offset: 0xa38
	// Line 1506, Address: 0x45f864, Func Offset: 0xa44
	// Line 1508, Address: 0x45f868, Func Offset: 0xa48
	// Line 1513, Address: 0x45f884, Func Offset: 0xa64
	// Line 1515, Address: 0x45f88c, Func Offset: 0xa6c
	// Line 1516, Address: 0x45fcb8, Func Offset: 0xe98
	// Line 1525, Address: 0x45fcbc, Func Offset: 0xe9c
	// Line 1526, Address: 0x45fcc0, Func Offset: 0xea0
	// Line 1527, Address: 0x45fcd4, Func Offset: 0xeb4
	// Line 1528, Address: 0x45fcdc, Func Offset: 0xebc
	// Line 1530, Address: 0x45fce8, Func Offset: 0xec8
	// Line 1535, Address: 0x45fcf0, Func Offset: 0xed0
	// Line 1536, Address: 0x45fd04, Func Offset: 0xee4
	// Line 1543, Address: 0x45fd18, Func Offset: 0xef8
	// Func End, Address: 0x45fd54, Func Offset: 0xf34
}

// xShadowReceiveShadowSetup__FP4xEnt
// Start address: 0x45fd60
uint32 xShadowReceiveShadowSetup(xEnt* ent)
{
	// Line 906, Address: 0x45fd60, Func Offset: 0
	// Line 918, Address: 0x45fd6c, Func Offset: 0xc
	// Line 923, Address: 0x45fd8c, Func Offset: 0x2c
	// Line 928, Address: 0x45fd9c, Func Offset: 0x3c
	// Line 942, Address: 0x45fdac, Func Offset: 0x4c
	// Line 948, Address: 0x45fdb4, Func Offset: 0x54
	// Line 949, Address: 0x45fdb8, Func Offset: 0x58
	// Func End, Address: 0x45fdc4, Func Offset: 0x64
}

// xShadowCameraUpdate__FPvPFPv_vP5xVec3fi
// Start address: 0x45fdd0
void xShadowCameraUpdate(void* model, void(*renderCB)(void*), xVec3* center, float32 radius, int32 shadowMode)
{
	// Line 534, Address: 0x45fdd0, Func Offset: 0
	// Line 544, Address: 0x45fdfc, Func Offset: 0x2c
	// Line 593, Address: 0x45fe0c, Func Offset: 0x3c
	// Line 597, Address: 0x45fe28, Func Offset: 0x58
	// Line 599, Address: 0x45fe30, Func Offset: 0x60
	// Func End, Address: 0x45fe50, Func Offset: 0x80
}

// xShadowSetLight__FP5xVec3P5xVec3f
// Start address: 0x45fe50
void xShadowSetLight(xVec3* target_pos, xVec3* in_vec)
{
	xVec3 zvec;
	xMat4x3 matrix;
	RwFrame* camFrame;
	RwMatrixTag* camMatrix;
	// Line 489, Address: 0x45fe50, Func Offset: 0
	// Line 493, Address: 0x45fe64, Func Offset: 0x14
	// Line 496, Address: 0x45fe6c, Func Offset: 0x1c
	// Line 498, Address: 0x45fe78, Func Offset: 0x28
	// Line 500, Address: 0x45fe7c, Func Offset: 0x2c
	// Line 498, Address: 0x45fe80, Func Offset: 0x30
	// Line 502, Address: 0x45fe84, Func Offset: 0x34
	// Line 498, Address: 0x45fe88, Func Offset: 0x38
	// Line 500, Address: 0x45fe98, Func Offset: 0x48
	// Line 501, Address: 0x45fe9c, Func Offset: 0x4c
	// Line 502, Address: 0x45fea0, Func Offset: 0x50
	// Line 506, Address: 0x45fec0, Func Offset: 0x70
	// Line 509, Address: 0x45fec8, Func Offset: 0x78
	// Line 512, Address: 0x45fed0, Func Offset: 0x80
	// Line 513, Address: 0x45fed8, Func Offset: 0x88
	// Func End, Address: 0x45feec, Func Offset: 0x9c
}

// xShadowSetWorld__FP7RpWorld
// Start address: 0x45fef0
void xShadowSetWorld(RpWorld* world)
{
	// Line 474, Address: 0x45fef0, Func Offset: 0
	// Line 478, Address: 0x45fef8, Func Offset: 0x8
	// Line 483, Address: 0x45ff00, Func Offset: 0x10
	// Line 484, Address: 0x45ff08, Func Offset: 0x18
	// Func End, Address: 0x45ff14, Func Offset: 0x24
}

// SetupShadow__Fv
// Start address: 0x45ff20
int32 SetupShadow()
{
	int32 res;
	// Line 398, Address: 0x45ff20, Func Offset: 0
	// Line 406, Address: 0x45ff30, Func Offset: 0x10
	// Line 411, Address: 0x45ff3c, Func Offset: 0x1c
	// Line 427, Address: 0x45ff64, Func Offset: 0x44
	// Line 431, Address: 0x45ffe0, Func Offset: 0xc0
	// Line 439, Address: 0x45ffe8, Func Offset: 0xc8
	// Line 440, Address: 0x45fffc, Func Offset: 0xdc
	// Line 445, Address: 0x460004, Func Offset: 0xe4
	// Line 446, Address: 0x46000c, Func Offset: 0xec
	// Line 427, Address: 0x460014, Func Offset: 0xf4
	// Line 446, Address: 0x460018, Func Offset: 0xf8
	// Line 433, Address: 0x460028, Func Offset: 0x108
	// Line 442, Address: 0x460030, Func Offset: 0x110
	// Line 447, Address: 0x460034, Func Offset: 0x114
	// Func End, Address: 0x460048, Func Offset: 0x128
}

// xShadowInit__Fv
// Start address: 0x460050
void xShadowInit()
{
	RwFrame* frame;
	// Line 233, Address: 0x460050, Func Offset: 0
	// Line 234, Address: 0x460058, Func Offset: 0x8
	// Line 250, Address: 0x460060, Func Offset: 0x10
	// Line 253, Address: 0x460068, Func Offset: 0x18
	// Line 254, Address: 0x460070, Func Offset: 0x20
	// Line 253, Address: 0x460074, Func Offset: 0x24
	// Line 254, Address: 0x460078, Func Offset: 0x28
	// Line 255, Address: 0x460084, Func Offset: 0x34
	// Line 256, Address: 0x46008c, Func Offset: 0x3c
	// Line 271, Address: 0x460098, Func Offset: 0x48
	// Func End, Address: 0x4600a4, Func Offset: 0x54
}

