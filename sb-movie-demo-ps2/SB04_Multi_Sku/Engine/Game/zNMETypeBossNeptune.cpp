



int32 TypeHandleMail(NMEMsg* mail);
void RenderHud();
void RenderExtra();
void Render();
void PostProcess(float32 dt);
void Process(float32 dt);
void Reset();
void Destroy();
void Setup();
uint8 BeamCollide(xRay3* beamray, int32* aimedAtKrabs, xVec3* reflectnorm);
void BossCamSetTargets();
void PaintDecalOnPlayer();
void FireFXUpdate(float32 dt);
void TailSwipeUpdate();
void CollideLightning(RxObjSpace3DVertex* verts, uint32 numVerts);
void DefendCollideUpdate();
void RenderLightBeam(xVec3* start, xVec3* end, xVec3* dir, xVec3* startnorm, xVec3* endnorm, float32 radstart, float32 radend, xColor_tag color, float32 texu_start, float32 texu_end, float32 texv_start, float32 texv_end, int32 numseg, int32 numradial);
void ParUpdate(float32 dt, uint8 updatelast);
void ScorchUpdate(float32 dt);
void ParEmitBunch(float32* emitVar, float32 emitRate, float32 dt, uint32(*emitCB)(zNeptuneParticle*, void*, float32), void* context);
void ParArrayInit();
void FirePitchUpdate();
void CamStateChange(uint32 newCamState, uint8 force_cut);
zLoopingSound* SndLoop3D(eSOUND soundEnum, xVec3* playpos, void* context);
void CommonReset();
void Init(xEntAsset* entasset);
xAnimTable* CreateAnimTable(xAnimTable* table);
void CreateConfig();
void destroy();
void update();
void start();
void create();
void* __ct();
uint32 DamageExitCB();
uint32 DamageCheck();
uint32 NoStunCheck();
uint32 ReflectStunCheck();
uint32 StunCheck();
uint32 OutrageEndCheck();
uint32 OutrageCheck(xAnimTransition* tran);
uint32 TauntCB();
uint32 TauntCheck();
uint32 ExitFireCheck();
uint32 ReflectCB(xAnimSingle* anim);
uint32 ReflectCheck();
uint32 FireLoopCB();
uint32 FireCB();
uint32 FireLoopCheck(xAnimSingle* anim);
uint32 FireCheck();
uint32 TailAttackCB();
uint32 TailAttackRightCheck(xAnimSingle* anim);
uint32 TailAttackLeftCheck(xAnimSingle* anim);
uint32 ExitDefendCheck();
uint32 DefendCheck();
void Crowd_RenderSlave();
void Crowd_RenderMaster(xEnt* ent);
void Crowd_UpdateSlave(xEnt* ent, xScene* sc, float32 dt);
int32 CmpCrowd(void* a, void* b);
void DecalDestCB(RpAtomic* atomic);
void DecalEmitCB(RpAtomic* atomic, xMat4x3* driver);
void ReflectBeforeAnimMatrices(xAnimPlay* play, xQuat* quat, xVec3* tran);
void BucketCollideEventFunc(uint32 toEvent);
void PovCollideBoundUpdateCB(xEnt* ent, xVec3* pos);
void BodyCollideBoundUpdateCB(xEnt* ent, xVec3* pos);
int32 ExtractBoneInfluence(RpAtomic* model, int32* influence, RwMatrixTag* skinmat, int32 maxcount);
void LightningRingRenderCB(zLightning* ltng, RxObjSpace3DVertex* vertA, RxObjSpace3DVertex* vertB, uint32 numVerts);
void LightningFeelerRenderCB(RxObjSpace3DVertex* vertA, RxObjSpace3DVertex* vertB, uint32 numVerts);
void LightningBeamRenderCB(RxObjSpace3DVertex* vertA, RxObjSpace3DVertex* vertB, uint32 numVerts);
void BossPreRender();
void HackScaleModel(RpAtomic* model, float32 scale);
uint8 SndBucketStun(zLoopingSound* loopsnd);
uint8 SndBeamStun(zLoopingSound* loopsnd);
uint8 SndRing(zLoopingSound* loopsnd);
uint8 SndLightning(zLoopingSound* loopsnd);
uint8 SndHose(zLoopingSound* loopsnd);
uint32 EmitScorchCB(zNeptuneParticle* par);
uint32 EmitSpiralCB(zNeptuneParticle* par, void* context);
uint32 EmitBeamCB(zNeptuneParticle* par, void* context, float32 timeoffs);

// TypeHandleMail__11zNMENeptuneFP6NMEMsg
// Start address: 0x242640
int32 zNMENeptune::TypeHandleMail(NMEMsg* mail)
{
	int32 handled;
	// Line 6531, Address: 0x242640, Func Offset: 0
	// Line 6534, Address: 0x242644, Func Offset: 0x4
	// Line 6531, Address: 0x242648, Func Offset: 0x8
	// Line 6534, Address: 0x24264c, Func Offset: 0xc
	// Line 6546, Address: 0x242658, Func Offset: 0x18
	// Line 6538, Address: 0x242668, Func Offset: 0x28
	// Line 6547, Address: 0x242670, Func Offset: 0x30
	// Func End, Address: 0x242678, Func Offset: 0x38
}

// RenderHud__11zNMENeptuneFv
// Start address: 0x242680
void zNMENeptune::RenderHud()
{
	// Line 6527, Address: 0x242680, Func Offset: 0
	// Func End, Address: 0x24268c, Func Offset: 0xc
}

// RenderExtra__11zNMENeptuneFv
// Start address: 0x242690
void zNMENeptune::RenderExtra()
{
	float32 colorScale;
	float32 alphaScale;
	float32 faderad;
	RwMatrixTag matCopy;
	RpMaterial* mat;
	RwRGBA oldcolor;
	RwTexture* oldtexture;
	long32 oldSkyTest_1;
	float32 uoffset;
	xVec3 beamtips[3];
	xVec3 beamstart;
	xVec3 beamend;
	xVec3 beamdir;
	uint32 i;
	xColor_tag fadecolor;
	xVec3 prevReflect;
	xVec3 nextReflect;
	float32 scopeBeamAdjust[2][3];
	// Line 6254, Address: 0x242690, Func Offset: 0
	// Line 6256, Address: 0x242694, Func Offset: 0x4
	// Line 6254, Address: 0x242698, Func Offset: 0x8
	// Line 6256, Address: 0x24269c, Func Offset: 0xc
	// Line 6254, Address: 0x2426a0, Func Offset: 0x10
	// Line 6256, Address: 0x2426a4, Func Offset: 0x14
	// Line 6254, Address: 0x2426a8, Func Offset: 0x18
	// Line 6256, Address: 0x2426f4, Func Offset: 0x64
	// Line 6259, Address: 0x242708, Func Offset: 0x78
	// Line 6260, Address: 0x24275c, Func Offset: 0xcc
	// Line 6264, Address: 0x242768, Func Offset: 0xd8
	// Line 6268, Address: 0x242794, Func Offset: 0x104
	// Line 6271, Address: 0x24279c, Func Offset: 0x10c
	// Line 6268, Address: 0x2427a0, Func Offset: 0x110
	// Line 6271, Address: 0x2427a4, Func Offset: 0x114
	// Line 6274, Address: 0x2427c0, Func Offset: 0x130
	// Line 6277, Address: 0x2427d4, Func Offset: 0x144
	// Line 6274, Address: 0x2427d8, Func Offset: 0x148
	// Line 6277, Address: 0x2427dc, Func Offset: 0x14c
	// Line 6274, Address: 0x2427e0, Func Offset: 0x150
	// Line 6277, Address: 0x2427e8, Func Offset: 0x158
	// Line 6274, Address: 0x2427ec, Func Offset: 0x15c
	// Line 6277, Address: 0x2427f8, Func Offset: 0x168
	// Line 6278, Address: 0x242800, Func Offset: 0x170
	// Line 6279, Address: 0x242810, Func Offset: 0x180
	// Line 6282, Address: 0x242820, Func Offset: 0x190
	// Line 6283, Address: 0x24287c, Func Offset: 0x1ec
	// Line 6282, Address: 0x242884, Func Offset: 0x1f4
	// Line 6283, Address: 0x24288c, Func Offset: 0x1fc
	// Line 6284, Address: 0x2428b0, Func Offset: 0x220
	// Line 6285, Address: 0x242bb8, Func Offset: 0x528
	// Line 6284, Address: 0x242bbc, Func Offset: 0x52c
	// Line 6285, Address: 0x242d30, Func Offset: 0x6a0
	// Line 6296, Address: 0x242d54, Func Offset: 0x6c4
	// Line 6285, Address: 0x242d5c, Func Offset: 0x6cc
	// Line 6289, Address: 0x242d68, Func Offset: 0x6d8
	// Line 6294, Address: 0x242d6c, Func Offset: 0x6dc
	// Line 6289, Address: 0x242d70, Func Offset: 0x6e0
	// Line 6294, Address: 0x242d74, Func Offset: 0x6e4
	// Line 6290, Address: 0x242d78, Func Offset: 0x6e8
	// Line 6291, Address: 0x242d88, Func Offset: 0x6f8
	// Line 6290, Address: 0x242d8c, Func Offset: 0x6fc
	// Line 6294, Address: 0x242d98, Func Offset: 0x708
	// Line 6295, Address: 0x242d9c, Func Offset: 0x70c
	// Line 6296, Address: 0x242da4, Func Offset: 0x714
	// Line 6297, Address: 0x242de4, Func Offset: 0x754
	// Line 6298, Address: 0x242e30, Func Offset: 0x7a0
	// Line 6299, Address: 0x242e7c, Func Offset: 0x7ec
	// Line 6305, Address: 0x242ed0, Func Offset: 0x840
	// Line 6304, Address: 0x242ed8, Func Offset: 0x848
	// Line 6305, Address: 0x242edc, Func Offset: 0x84c
	// Line 6307, Address: 0x242ee8, Func Offset: 0x858
	// Line 6308, Address: 0x242f00, Func Offset: 0x870
	// Line 6309, Address: 0x242f0c, Func Offset: 0x87c
	// Line 6316, Address: 0x242f1c, Func Offset: 0x88c
	// Line 6312, Address: 0x242f2c, Func Offset: 0x89c
	// Line 6316, Address: 0x242f30, Func Offset: 0x8a0
	// Line 6317, Address: 0x242f40, Func Offset: 0x8b0
	// Line 6319, Address: 0x242f44, Func Offset: 0x8b4
	// Line 6322, Address: 0x242fd0, Func Offset: 0x940
	// Line 6324, Address: 0x242fe8, Func Offset: 0x958
	// Line 6327, Address: 0x242ffc, Func Offset: 0x96c
	// Line 6332, Address: 0x243010, Func Offset: 0x980
	// Line 6334, Address: 0x24305c, Func Offset: 0x9cc
	// Line 6333, Address: 0x243068, Func Offset: 0x9d8
	// Line 6334, Address: 0x243070, Func Offset: 0x9e0
	// Line 6335, Address: 0x2430d0, Func Offset: 0xa40
	// Line 6336, Address: 0x2430e0, Func Offset: 0xa50
	// Line 6337, Address: 0x2430e8, Func Offset: 0xa58
	// Line 6338, Address: 0x243100, Func Offset: 0xa70
	// Line 6339, Address: 0x243118, Func Offset: 0xa88
	// Line 6342, Address: 0x243134, Func Offset: 0xaa4
	// Line 6349, Address: 0x24313c, Func Offset: 0xaac
	// Line 6342, Address: 0x243140, Func Offset: 0xab0
	// Line 6348, Address: 0x243144, Func Offset: 0xab4
	// Line 6342, Address: 0x24314c, Func Offset: 0xabc
	// Line 6348, Address: 0x243150, Func Offset: 0xac0
	// Line 6349, Address: 0x243160, Func Offset: 0xad0
	// Line 6342, Address: 0x243164, Func Offset: 0xad4
	// Line 6348, Address: 0x243180, Func Offset: 0xaf0
	// Line 6342, Address: 0x243184, Func Offset: 0xaf4
	// Line 6344, Address: 0x2431d0, Func Offset: 0xb40
	// Line 6345, Address: 0x2431d8, Func Offset: 0xb48
	// Line 6346, Address: 0x2431dc, Func Offset: 0xb4c
	// Line 6344, Address: 0x2431e0, Func Offset: 0xb50
	// Line 6345, Address: 0x2431e8, Func Offset: 0xb58
	// Line 6348, Address: 0x2431ec, Func Offset: 0xb5c
	// Line 6345, Address: 0x2431f0, Func Offset: 0xb60
	// Line 6346, Address: 0x2431f8, Func Offset: 0xb68
	// Line 6348, Address: 0x2431fc, Func Offset: 0xb6c
	// Line 6346, Address: 0x243200, Func Offset: 0xb70
	// Line 6347, Address: 0x243208, Func Offset: 0xb78
	// Line 6348, Address: 0x243214, Func Offset: 0xb84
	// Line 6347, Address: 0x24321c, Func Offset: 0xb8c
	// Line 6348, Address: 0x243228, Func Offset: 0xb98
	// Line 6349, Address: 0x2432a4, Func Offset: 0xc14
	// Line 6352, Address: 0x2432ac, Func Offset: 0xc1c
	// Line 6358, Address: 0x2432b8, Func Offset: 0xc28
	// Line 6359, Address: 0x2432c4, Func Offset: 0xc34
	// Line 6365, Address: 0x2432c8, Func Offset: 0xc38
	// Line 6359, Address: 0x2432cc, Func Offset: 0xc3c
	// Line 6365, Address: 0x2432d0, Func Offset: 0xc40
	// Line 6359, Address: 0x2432d4, Func Offset: 0xc44
	// Line 6363, Address: 0x2432e4, Func Offset: 0xc54
	// Line 6359, Address: 0x2432e8, Func Offset: 0xc58
	// Line 6361, Address: 0x2432f4, Func Offset: 0xc64
	// Line 6363, Address: 0x243310, Func Offset: 0xc80
	// Line 6365, Address: 0x24332c, Func Offset: 0xc9c
	// Line 6366, Address: 0x243334, Func Offset: 0xca4
	// Line 6371, Address: 0x24333c, Func Offset: 0xcac
	// Line 6372, Address: 0x24337c, Func Offset: 0xcec
	// Line 6371, Address: 0x243380, Func Offset: 0xcf0
	// Line 6372, Address: 0x243384, Func Offset: 0xcf4
	// Line 6373, Address: 0x2433c0, Func Offset: 0xd30
	// Line 6372, Address: 0x2433c4, Func Offset: 0xd34
	// Line 6373, Address: 0x2433c8, Func Offset: 0xd38
	// Line 6374, Address: 0x243404, Func Offset: 0xd74
	// Line 6373, Address: 0x24340c, Func Offset: 0xd7c
	// Line 6374, Address: 0x243410, Func Offset: 0xd80
	// Line 6375, Address: 0x243458, Func Offset: 0xdc8
	// Line 6379, Address: 0x2434d4, Func Offset: 0xe44
	// Line 6375, Address: 0x2434d8, Func Offset: 0xe48
	// Line 6379, Address: 0x2434e4, Func Offset: 0xe54
	// Line 6380, Address: 0x243520, Func Offset: 0xe90
	// Line 6381, Address: 0x243560, Func Offset: 0xed0
	// Line 6382, Address: 0x2435a4, Func Offset: 0xf14
	// Line 6383, Address: 0x243604, Func Offset: 0xf74
	// Line 6387, Address: 0x243670, Func Offset: 0xfe0
	// Line 6383, Address: 0x243674, Func Offset: 0xfe4
	// Line 6387, Address: 0x243680, Func Offset: 0xff0
	// Line 6388, Address: 0x2436bc, Func Offset: 0x102c
	// Line 6389, Address: 0x2436fc, Func Offset: 0x106c
	// Line 6390, Address: 0x24374c, Func Offset: 0x10bc
	// Line 6391, Address: 0x243794, Func Offset: 0x1104
	// Line 6390, Address: 0x243798, Func Offset: 0x1108
	// Line 6391, Address: 0x24379c, Func Offset: 0x110c
	// Line 6395, Address: 0x2437f4, Func Offset: 0x1164
	// Line 6396, Address: 0x243834, Func Offset: 0x11a4
	// Line 6397, Address: 0x243874, Func Offset: 0x11e4
	// Line 6398, Address: 0x2438b4, Func Offset: 0x1224
	// Line 6399, Address: 0x2438f8, Func Offset: 0x1268
	// Line 6398, Address: 0x2438fc, Func Offset: 0x126c
	// Line 6399, Address: 0x243900, Func Offset: 0x1270
	// Line 6406, Address: 0x243954, Func Offset: 0x12c4
	// Line 6407, Address: 0x243958, Func Offset: 0x12c8
	// Line 6406, Address: 0x24395c, Func Offset: 0x12cc
	// Line 6407, Address: 0x24396c, Func Offset: 0x12dc
	// Line 6406, Address: 0x243970, Func Offset: 0x12e0
	// Line 6407, Address: 0x243984, Func Offset: 0x12f4
	// Line 6408, Address: 0x2439b8, Func Offset: 0x1328
	// Line 6409, Address: 0x2439f8, Func Offset: 0x1368
	// Line 6410, Address: 0x243a38, Func Offset: 0x13a8
	// Line 6412, Address: 0x243a7c, Func Offset: 0x13ec
	// Line 6415, Address: 0x243a88, Func Offset: 0x13f8
	// Line 6417, Address: 0x243a94, Func Offset: 0x1404
	// Line 6415, Address: 0x243a98, Func Offset: 0x1408
	// Line 6416, Address: 0x243abc, Func Offset: 0x142c
	// Line 6415, Address: 0x243ac0, Func Offset: 0x1430
	// Line 6416, Address: 0x243ac4, Func Offset: 0x1434
	// Line 6415, Address: 0x243ac8, Func Offset: 0x1438
	// Line 6416, Address: 0x243acc, Func Offset: 0x143c
	// Line 6415, Address: 0x243ad0, Func Offset: 0x1440
	// Line 6416, Address: 0x243ad4, Func Offset: 0x1444
	// Line 6415, Address: 0x243ad8, Func Offset: 0x1448
	// Line 6417, Address: 0x243adc, Func Offset: 0x144c
	// Line 6415, Address: 0x243ae0, Func Offset: 0x1450
	// Line 6416, Address: 0x243b08, Func Offset: 0x1478
	// Line 6415, Address: 0x243b14, Func Offset: 0x1484
	// Line 6416, Address: 0x243b30, Func Offset: 0x14a0
	// Line 6415, Address: 0x243b34, Func Offset: 0x14a4
	// Line 6416, Address: 0x243b38, Func Offset: 0x14a8
	// Line 6417, Address: 0x243bac, Func Offset: 0x151c
	// Line 6418, Address: 0x243bb4, Func Offset: 0x1524
	// Line 6423, Address: 0x243c04, Func Offset: 0x1574
	// Line 6426, Address: 0x243c0c, Func Offset: 0x157c
	// Line 6427, Address: 0x243c60, Func Offset: 0x15d0
	// Line 6428, Address: 0x243c70, Func Offset: 0x15e0
	// Line 6429, Address: 0x243cc8, Func Offset: 0x1638
	// Line 6430, Address: 0x243ccc, Func Offset: 0x163c
	// Line 6432, Address: 0x243cd0, Func Offset: 0x1640
	// Line 6433, Address: 0x243cd8, Func Offset: 0x1648
	// Line 6434, Address: 0x243ce4, Func Offset: 0x1654
	// Line 6438, Address: 0x243cf0, Func Offset: 0x1660
	// Line 6434, Address: 0x243cf4, Func Offset: 0x1664
	// Line 6438, Address: 0x243e90, Func Offset: 0x1800
	// Line 6439, Address: 0x243e94, Func Offset: 0x1804
	// Line 6440, Address: 0x243e98, Func Offset: 0x1808
	// Line 6442, Address: 0x243eac, Func Offset: 0x181c
	// Line 6443, Address: 0x243ec4, Func Offset: 0x1834
	// Line 6446, Address: 0x243ecc, Func Offset: 0x183c
	// Line 6452, Address: 0x243f30, Func Offset: 0x18a0
	// Line 6451, Address: 0x243f34, Func Offset: 0x18a4
	// Line 6452, Address: 0x243f40, Func Offset: 0x18b0
	// Line 6451, Address: 0x243f44, Func Offset: 0x18b4
	// Line 6452, Address: 0x243fd8, Func Offset: 0x1948
	// Line 6453, Address: 0x243fe4, Func Offset: 0x1954
	// Line 6459, Address: 0x244024, Func Offset: 0x1994
	// Line 6460, Address: 0x244028, Func Offset: 0x1998
	// Line 6459, Address: 0x24402c, Func Offset: 0x199c
	// Line 6460, Address: 0x244040, Func Offset: 0x19b0
	// Line 6465, Address: 0x244050, Func Offset: 0x19c0
	// Line 6467, Address: 0x24406c, Func Offset: 0x19dc
	// Func End, Address: 0x2440c4, Func Offset: 0x1a34
}

// Render__11zNMENeptuneFv
// Start address: 0x2440d0
void zNMENeptune::Render()
{
	RpMaterialList* matlist;
	RpMaterial* scopeMaterial;
	long32 oldSkyTest_1;
	int32 i;
	xQuat blurQuat[4][6];
	xVec3 blurTran[4][6];
	int32 i;
	int32 j;
	int32 currIdx;
	float32 blurTimeCurr;
	int32 blurInt;
	float32 blurFrac;
	float32 blurLerp;
	float32 lerpAlpha;
	float32 lerpColor;
	xQuat lerpQuat;
	xVec3 lerpTran;
	xMat4x3 adjustedScopeMat;
	// Line 6015, Address: 0x2440d0, Func Offset: 0
	// Line 6046, Address: 0x244110, Func Offset: 0x40
	// Line 6050, Address: 0x24411c, Func Offset: 0x4c
	// Line 6051, Address: 0x244130, Func Offset: 0x60
	// Line 6052, Address: 0x244144, Func Offset: 0x74
	// Line 6053, Address: 0x244154, Func Offset: 0x84
	// Line 6055, Address: 0x244160, Func Offset: 0x90
	// Line 6058, Address: 0x24416c, Func Offset: 0x9c
	// Line 6061, Address: 0x2441b8, Func Offset: 0xe8
	// Line 6062, Address: 0x2441bc, Func Offset: 0xec
	// Line 6061, Address: 0x2441c0, Func Offset: 0xf0
	// Line 6062, Address: 0x2441c4, Func Offset: 0xf4
	// Line 6066, Address: 0x2441cc, Func Offset: 0xfc
	// Line 6068, Address: 0x2441d0, Func Offset: 0x100
	// Line 6066, Address: 0x2441fc, Func Offset: 0x12c
	// Line 6068, Address: 0x244200, Func Offset: 0x130
	// Line 6066, Address: 0x244240, Func Offset: 0x170
	// Line 6068, Address: 0x244244, Func Offset: 0x174
	// Line 6069, Address: 0x2442b4, Func Offset: 0x1e4
	// Line 6070, Address: 0x244304, Func Offset: 0x234
	// Line 6071, Address: 0x244308, Func Offset: 0x238
	// Line 6070, Address: 0x24430c, Func Offset: 0x23c
	// Line 6071, Address: 0x244310, Func Offset: 0x240
	// Line 6072, Address: 0x244318, Func Offset: 0x248
	// Line 6075, Address: 0x244330, Func Offset: 0x260
	// Line 6076, Address: 0x244344, Func Offset: 0x274
	// Line 6077, Address: 0x244354, Func Offset: 0x284
	// Line 6078, Address: 0x244360, Func Offset: 0x290
	// Line 6079, Address: 0x244370, Func Offset: 0x2a0
	// Line 6082, Address: 0x244380, Func Offset: 0x2b0
	// Line 6087, Address: 0x244388, Func Offset: 0x2b8
	// Line 6086, Address: 0x244398, Func Offset: 0x2c8
	// Line 6097, Address: 0x24439c, Func Offset: 0x2cc
	// Line 6087, Address: 0x2443a8, Func Offset: 0x2d8
	// Line 6097, Address: 0x2443b0, Func Offset: 0x2e0
	// Line 6098, Address: 0x2443b8, Func Offset: 0x2e8
	// Line 6099, Address: 0x2443c8, Func Offset: 0x2f8
	// Line 6100, Address: 0x2443d0, Func Offset: 0x300
	// Line 6101, Address: 0x2443dc, Func Offset: 0x30c
	// Line 6102, Address: 0x2443ec, Func Offset: 0x31c
	// Line 6103, Address: 0x2443fc, Func Offset: 0x32c
	// Line 6104, Address: 0x24440c, Func Offset: 0x33c
	// Line 6105, Address: 0x24441c, Func Offset: 0x34c
	// Line 6115, Address: 0x24442c, Func Offset: 0x35c
	// Line 6124, Address: 0x244440, Func Offset: 0x370
	// Line 6126, Address: 0x244444, Func Offset: 0x374
	// Line 6116, Address: 0x244448, Func Offset: 0x378
	// Line 6117, Address: 0x244450, Func Offset: 0x380
	// Line 6118, Address: 0x244454, Func Offset: 0x384
	// Line 6120, Address: 0x244458, Func Offset: 0x388
	// Line 6124, Address: 0x24445c, Func Offset: 0x38c
	// Line 6126, Address: 0x244460, Func Offset: 0x390
	// Line 6117, Address: 0x244464, Func Offset: 0x394
	// Line 6128, Address: 0x244468, Func Offset: 0x398
	// Line 6118, Address: 0x24446c, Func Offset: 0x39c
	// Line 6128, Address: 0x244470, Func Offset: 0x3a0
	// Line 6119, Address: 0x244474, Func Offset: 0x3a4
	// Line 6120, Address: 0x244478, Func Offset: 0x3a8
	// Line 6121, Address: 0x24447c, Func Offset: 0x3ac
	// Line 6122, Address: 0x244480, Func Offset: 0x3b0
	// Line 6123, Address: 0x244484, Func Offset: 0x3b4
	// Line 6124, Address: 0x244488, Func Offset: 0x3b8
	// Line 6125, Address: 0x24448c, Func Offset: 0x3bc
	// Line 6126, Address: 0x244490, Func Offset: 0x3c0
	// Line 6127, Address: 0x244494, Func Offset: 0x3c4
	// Line 6128, Address: 0x244498, Func Offset: 0x3c8
	// Line 6129, Address: 0x2444a0, Func Offset: 0x3d0
	// Line 6134, Address: 0x2444a4, Func Offset: 0x3d4
	// Line 6129, Address: 0x2444a8, Func Offset: 0x3d8
	// Line 6134, Address: 0x2444ac, Func Offset: 0x3dc
	// Line 6129, Address: 0x2444b0, Func Offset: 0x3e0
	// Line 6135, Address: 0x2444b4, Func Offset: 0x3e4
	// Line 6132, Address: 0x2444b8, Func Offset: 0x3e8
	// Line 6133, Address: 0x2444c0, Func Offset: 0x3f0
	// Line 6135, Address: 0x2444c8, Func Offset: 0x3f8
	// Line 6138, Address: 0x2444d0, Func Offset: 0x400
	// Line 6139, Address: 0x2444e8, Func Offset: 0x418
	// Line 6144, Address: 0x2444ec, Func Offset: 0x41c
	// Line 6139, Address: 0x2444f0, Func Offset: 0x420
	// Line 6146, Address: 0x2444f4, Func Offset: 0x424
	// Line 6139, Address: 0x2444f8, Func Offset: 0x428
	// Line 6142, Address: 0x2444fc, Func Offset: 0x42c
	// Line 6143, Address: 0x244504, Func Offset: 0x434
	// Line 6144, Address: 0x24450c, Func Offset: 0x43c
	// Line 6145, Address: 0x244510, Func Offset: 0x440
	// Line 6146, Address: 0x244514, Func Offset: 0x444
	// Line 6173, Address: 0x24451c, Func Offset: 0x44c
	// Line 6180, Address: 0x244524, Func Offset: 0x454
	// Line 6181, Address: 0x244528, Func Offset: 0x458
	// Line 6180, Address: 0x24452c, Func Offset: 0x45c
	// Line 6181, Address: 0x244530, Func Offset: 0x460
	// Line 6185, Address: 0x244538, Func Offset: 0x468
	// Line 6188, Address: 0x244548, Func Offset: 0x478
	// Line 6194, Address: 0x2445d0, Func Offset: 0x500
	// Line 6193, Address: 0x2445d4, Func Offset: 0x504
	// Line 6194, Address: 0x2445d8, Func Offset: 0x508
	// Line 6201, Address: 0x2445ec, Func Offset: 0x51c
	// Line 6195, Address: 0x2445f0, Func Offset: 0x520
	// Line 6197, Address: 0x244620, Func Offset: 0x550
	// Line 6196, Address: 0x244624, Func Offset: 0x554
	// Line 6198, Address: 0x244628, Func Offset: 0x558
	// Line 6196, Address: 0x24462c, Func Offset: 0x55c
	// Line 6197, Address: 0x244648, Func Offset: 0x578
	// Line 6198, Address: 0x244670, Func Offset: 0x5a0
	// Line 6199, Address: 0x244688, Func Offset: 0x5b8
	// Line 6200, Address: 0x24468c, Func Offset: 0x5bc
	// Line 6201, Address: 0x244694, Func Offset: 0x5c4
	// Line 6203, Address: 0x244698, Func Offset: 0x5c8
	// Line 6201, Address: 0x2446a0, Func Offset: 0x5d0
	// Line 6203, Address: 0x2446a4, Func Offset: 0x5d4
	// Line 6207, Address: 0x2446b0, Func Offset: 0x5e0
	// Line 6206, Address: 0x2446b4, Func Offset: 0x5e4
	// Line 6207, Address: 0x2446bc, Func Offset: 0x5ec
	// Line 6214, Address: 0x2446c4, Func Offset: 0x5f4
	// Line 6215, Address: 0x2446d0, Func Offset: 0x600
	// Line 6217, Address: 0x2446dc, Func Offset: 0x60c
	// Line 6215, Address: 0x2446e0, Func Offset: 0x610
	// Line 6216, Address: 0x2446e4, Func Offset: 0x614
	// Line 6217, Address: 0x2446e8, Func Offset: 0x618
	// Line 6222, Address: 0x2446f8, Func Offset: 0x628
	// Line 6225, Address: 0x244704, Func Offset: 0x634
	// Line 6222, Address: 0x244710, Func Offset: 0x640
	// Line 6229, Address: 0x244718, Func Offset: 0x648
	// Line 6223, Address: 0x24471c, Func Offset: 0x64c
	// Line 6222, Address: 0x244720, Func Offset: 0x650
	// Line 6229, Address: 0x244724, Func Offset: 0x654
	// Line 6222, Address: 0x244728, Func Offset: 0x658
	// Line 6229, Address: 0x24472c, Func Offset: 0x65c
	// Line 6222, Address: 0x244730, Func Offset: 0x660
	// Line 6229, Address: 0x244734, Func Offset: 0x664
	// Line 6223, Address: 0x244744, Func Offset: 0x674
	// Line 6225, Address: 0x244748, Func Offset: 0x678
	// Line 6223, Address: 0x244750, Func Offset: 0x680
	// Line 6225, Address: 0x244758, Func Offset: 0x688
	// Line 6229, Address: 0x24475c, Func Offset: 0x68c
	// Line 6230, Address: 0x244764, Func Offset: 0x694
	// Line 6231, Address: 0x2447b0, Func Offset: 0x6e0
	// Line 6233, Address: 0x2447c4, Func Offset: 0x6f4
	// Line 6232, Address: 0x2447c8, Func Offset: 0x6f8
	// Line 6233, Address: 0x2447d0, Func Offset: 0x700
	// Line 6232, Address: 0x2447d4, Func Offset: 0x704
	// Line 6233, Address: 0x2447d8, Func Offset: 0x708
	// Line 6232, Address: 0x2447dc, Func Offset: 0x70c
	// Line 6233, Address: 0x2447ec, Func Offset: 0x71c
	// Line 6232, Address: 0x2447f0, Func Offset: 0x720
	// Line 6233, Address: 0x2447f4, Func Offset: 0x724
	// Line 6232, Address: 0x2447f8, Func Offset: 0x728
	// Line 6233, Address: 0x24480c, Func Offset: 0x73c
	// Line 6232, Address: 0x244810, Func Offset: 0x740
	// Line 6233, Address: 0x244814, Func Offset: 0x744
	// Line 6234, Address: 0x24481c, Func Offset: 0x74c
	// Line 6235, Address: 0x24483c, Func Offset: 0x76c
	// Line 6234, Address: 0x244840, Func Offset: 0x770
	// Line 6235, Address: 0x24485c, Func Offset: 0x78c
	// Line 6238, Address: 0x244880, Func Offset: 0x7b0
	// Line 6243, Address: 0x244888, Func Offset: 0x7b8
	// Line 6238, Address: 0x24488c, Func Offset: 0x7bc
	// Line 6239, Address: 0x244894, Func Offset: 0x7c4
	// Line 6240, Address: 0x24489c, Func Offset: 0x7cc
	// Line 6241, Address: 0x2448a4, Func Offset: 0x7d4
	// Line 6242, Address: 0x2448ac, Func Offset: 0x7dc
	// Line 6243, Address: 0x2448bc, Func Offset: 0x7ec
	// Line 6247, Address: 0x2448cc, Func Offset: 0x7fc
	// Line 6248, Address: 0x2448d4, Func Offset: 0x804
	// Line 6250, Address: 0x2448ec, Func Offset: 0x81c
	// Line 6251, Address: 0x2448f0, Func Offset: 0x820
	// Func End, Address: 0x244934, Func Offset: 0x864
}

// PostProcess__11zNMENeptuneFf
// Start address: 0x244940
void zNMENeptune::PostProcess(float32 dt)
{
	int32 i;
	xVec3 tempMidSect;
	RwMatrixTag oldPlyrMat;
	float32 oldPos;
	xVec3 atvec;
	xVec3 old_aim_pos;
	xVec3 old_aim_dir;
	xQuat old_aim_momentum;
	xMat4x3 old_aim_mat;
	xVec3 target_aim_pos;
	xMat3x3 restMat;
	float32 distPlayer2D;
	NMECfgNeptuneAttack* currAtk;
	float32 finalTimer;
	float32 lockonTimer;
	float32 aim_directlerp;
	float32 tooCloseTrackLerp;
	xVec3 target_aim_pos;
	xVec3 player_midsect;
	xVec3 target_dir;
	xQuat aimQuat;
	xMat3x3 aimMomentMat;
	xMat3x3 directMat;
	xVec3 scopeCamPos;
	float32 checkDist;
	// Line 5737, Address: 0x244940, Func Offset: 0
	// Line 5740, Address: 0x244978, Func Offset: 0x38
	// Line 5741, Address: 0x244984, Func Offset: 0x44
	// Line 5743, Address: 0x244994, Func Offset: 0x54
	// Line 5744, Address: 0x2449a4, Func Offset: 0x64
	// Line 5745, Address: 0x2449b8, Func Offset: 0x78
	// Line 5744, Address: 0x2449bc, Func Offset: 0x7c
	// Line 5745, Address: 0x2449c0, Func Offset: 0x80
	// Line 5746, Address: 0x2449cc, Func Offset: 0x8c
	// Line 5747, Address: 0x2449d8, Func Offset: 0x98
	// Line 5748, Address: 0x2449e4, Func Offset: 0xa4
	// Line 5753, Address: 0x2449ec, Func Offset: 0xac
	// Line 5748, Address: 0x2449f4, Func Offset: 0xb4
	// Line 5753, Address: 0x244a00, Func Offset: 0xc0
	// Line 5754, Address: 0x244a24, Func Offset: 0xe4
	// Line 5755, Address: 0x244a4c, Func Offset: 0x10c
	// Line 5758, Address: 0x244a50, Func Offset: 0x110
	// Line 5755, Address: 0x244a54, Func Offset: 0x114
	// Line 5758, Address: 0x244a60, Func Offset: 0x120
	// Line 5755, Address: 0x244a68, Func Offset: 0x128
	// Line 5756, Address: 0x244a74, Func Offset: 0x134
	// Line 5757, Address: 0x244a8c, Func Offset: 0x14c
	// Line 5759, Address: 0x244a98, Func Offset: 0x158
	// Line 5761, Address: 0x244ac0, Func Offset: 0x180
	// Line 5762, Address: 0x244ac4, Func Offset: 0x184
	// Line 5761, Address: 0x244ac8, Func Offset: 0x188
	// Line 5762, Address: 0x244acc, Func Offset: 0x18c
	// Line 5761, Address: 0x244ad0, Func Offset: 0x190
	// Line 5762, Address: 0x244af8, Func Offset: 0x1b8
	// Line 5763, Address: 0x244b00, Func Offset: 0x1c0
	// Line 5764, Address: 0x244b1c, Func Offset: 0x1dc
	// Line 5763, Address: 0x244b30, Func Offset: 0x1f0
	// Line 5764, Address: 0x244b34, Func Offset: 0x1f4
	// Line 5763, Address: 0x244b38, Func Offset: 0x1f8
	// Line 5764, Address: 0x244b4c, Func Offset: 0x20c
	// Line 5763, Address: 0x244b58, Func Offset: 0x218
	// Line 5764, Address: 0x244b7c, Func Offset: 0x23c
	// Line 5763, Address: 0x244b8c, Func Offset: 0x24c
	// Line 5764, Address: 0x244b98, Func Offset: 0x258
	// Line 5763, Address: 0x244ba8, Func Offset: 0x268
	// Line 5764, Address: 0x244bac, Func Offset: 0x26c
	// Line 5767, Address: 0x244bf4, Func Offset: 0x2b4
	// Line 5768, Address: 0x244c04, Func Offset: 0x2c4
	// Line 5772, Address: 0x244c0c, Func Offset: 0x2cc
	// Line 5775, Address: 0x244cf0, Func Offset: 0x3b0
	// Line 5778, Address: 0x244cf8, Func Offset: 0x3b8
	// Line 5788, Address: 0x244d0c, Func Offset: 0x3cc
	// Line 5789, Address: 0x244d10, Func Offset: 0x3d0
	// Line 5778, Address: 0x244d14, Func Offset: 0x3d4
	// Line 5783, Address: 0x244d18, Func Offset: 0x3d8
	// Line 5784, Address: 0x244d1c, Func Offset: 0x3dc
	// Line 5788, Address: 0x244d24, Func Offset: 0x3e4
	// Line 5789, Address: 0x244d44, Func Offset: 0x404
	// Line 5788, Address: 0x244d48, Func Offset: 0x408
	// Line 5790, Address: 0x244d4c, Func Offset: 0x40c
	// Line 5791, Address: 0x244d70, Func Offset: 0x430
	// Line 5794, Address: 0x244d80, Func Offset: 0x440
	// Line 5796, Address: 0x244d84, Func Offset: 0x444
	// Line 5794, Address: 0x244d88, Func Offset: 0x448
	// Line 5796, Address: 0x244d8c, Func Offset: 0x44c
	// Line 5794, Address: 0x244d90, Func Offset: 0x450
	// Line 5796, Address: 0x244d94, Func Offset: 0x454
	// Line 5794, Address: 0x244d98, Func Offset: 0x458
	// Line 5796, Address: 0x244d9c, Func Offset: 0x45c
	// Line 5794, Address: 0x244da0, Func Offset: 0x460
	// Line 5799, Address: 0x244da4, Func Offset: 0x464
	// Line 5794, Address: 0x244da8, Func Offset: 0x468
	// Line 5799, Address: 0x244dac, Func Offset: 0x46c
	// Line 5794, Address: 0x244db0, Func Offset: 0x470
	// Line 5796, Address: 0x244db4, Func Offset: 0x474
	// Line 5794, Address: 0x244db8, Func Offset: 0x478
	// Line 5796, Address: 0x244dbc, Func Offset: 0x47c
	// Line 5794, Address: 0x244dc0, Func Offset: 0x480
	// Line 5796, Address: 0x244dc4, Func Offset: 0x484
	// Line 5794, Address: 0x244dc8, Func Offset: 0x488
	// Line 5796, Address: 0x244dcc, Func Offset: 0x48c
	// Line 5795, Address: 0x244dd0, Func Offset: 0x490
	// Line 5794, Address: 0x244de0, Func Offset: 0x4a0
	// Line 5795, Address: 0x244de8, Func Offset: 0x4a8
	// Line 5799, Address: 0x244df4, Func Offset: 0x4b4
	// Line 5804, Address: 0x244e24, Func Offset: 0x4e4
	// Line 5799, Address: 0x244e2c, Func Offset: 0x4ec
	// Line 5804, Address: 0x244e30, Func Offset: 0x4f0
	// Line 5805, Address: 0x244e88, Func Offset: 0x548
	// Line 5809, Address: 0x244e94, Func Offset: 0x554
	// Line 5805, Address: 0x244e98, Func Offset: 0x558
	// Line 5809, Address: 0x244eec, Func Offset: 0x5ac
	// Line 5810, Address: 0x244f04, Func Offset: 0x5c4
	// Line 5811, Address: 0x244f54, Func Offset: 0x614
	// Line 5814, Address: 0x244f5c, Func Offset: 0x61c
	// Line 5815, Address: 0x244f74, Func Offset: 0x634
	// Line 5816, Address: 0x244f88, Func Offset: 0x648
	// Line 5821, Address: 0x244f94, Func Offset: 0x654
	// Line 5826, Address: 0x244fac, Func Offset: 0x66c
	// Line 5821, Address: 0x244fb0, Func Offset: 0x670
	// Line 5826, Address: 0x244fb8, Func Offset: 0x678
	// Line 5828, Address: 0x244fbc, Func Offset: 0x67c
	// Line 5821, Address: 0x244fc0, Func Offset: 0x680
	// Line 5828, Address: 0x244fcc, Func Offset: 0x68c
	// Line 5821, Address: 0x244fd0, Func Offset: 0x690
	// Line 5826, Address: 0x244fec, Func Offset: 0x6ac
	// Line 5828, Address: 0x244ff0, Func Offset: 0x6b0
	// Line 5830, Address: 0x244ffc, Func Offset: 0x6bc
	// Line 5831, Address: 0x245058, Func Offset: 0x718
	// Line 5832, Address: 0x245070, Func Offset: 0x730
	// Line 5836, Address: 0x24508c, Func Offset: 0x74c
	// Line 5837, Address: 0x2450ac, Func Offset: 0x76c
	// Line 5840, Address: 0x2450b0, Func Offset: 0x770
	// Line 5843, Address: 0x2450bc, Func Offset: 0x77c
	// Line 5845, Address: 0x2450c0, Func Offset: 0x780
	// Line 5848, Address: 0x2450d4, Func Offset: 0x794
	// Line 5851, Address: 0x2450e8, Func Offset: 0x7a8
	// Line 5854, Address: 0x2450f0, Func Offset: 0x7b0
	// Line 5858, Address: 0x2450f4, Func Offset: 0x7b4
	// Line 5859, Address: 0x2450f8, Func Offset: 0x7b8
	// Line 5858, Address: 0x2450fc, Func Offset: 0x7bc
	// Line 5859, Address: 0x245100, Func Offset: 0x7c0
	// Line 5858, Address: 0x245108, Func Offset: 0x7c8
	// Line 5859, Address: 0x24510c, Func Offset: 0x7cc
	// Line 5863, Address: 0x245128, Func Offset: 0x7e8
	// Line 5859, Address: 0x24512c, Func Offset: 0x7ec
	// Line 5863, Address: 0x245130, Func Offset: 0x7f0
	// Line 5866, Address: 0x245138, Func Offset: 0x7f8
	// Line 5862, Address: 0x24513c, Func Offset: 0x7fc
	// Line 5863, Address: 0x245140, Func Offset: 0x800
	// Line 5866, Address: 0x245148, Func Offset: 0x808
	// Line 5872, Address: 0x24515c, Func Offset: 0x81c
	// Line 5866, Address: 0x245164, Func Offset: 0x824
	// Line 5872, Address: 0x245168, Func Offset: 0x828
	// Line 5873, Address: 0x2451c0, Func Offset: 0x880
	// Line 5876, Address: 0x2451cc, Func Offset: 0x88c
	// Line 5873, Address: 0x2451d0, Func Offset: 0x890
	// Line 5876, Address: 0x2451d4, Func Offset: 0x894
	// Line 5873, Address: 0x2451e0, Func Offset: 0x8a0
	// Line 5876, Address: 0x2451e4, Func Offset: 0x8a4
	// Line 5873, Address: 0x2451e8, Func Offset: 0x8a8
	// Line 5877, Address: 0x2451ec, Func Offset: 0x8ac
	// Line 5873, Address: 0x245210, Func Offset: 0x8d0
	// Line 5877, Address: 0x245214, Func Offset: 0x8d4
	// Line 5873, Address: 0x245218, Func Offset: 0x8d8
	// Line 5876, Address: 0x24521c, Func Offset: 0x8dc
	// Line 5873, Address: 0x245220, Func Offset: 0x8e0
	// Line 5876, Address: 0x24524c, Func Offset: 0x90c
	// Line 5878, Address: 0x245250, Func Offset: 0x910
	// Line 5876, Address: 0x245254, Func Offset: 0x914
	// Line 5878, Address: 0x24526c, Func Offset: 0x92c
	// Line 5876, Address: 0x245270, Func Offset: 0x930
	// Line 5878, Address: 0x24527c, Func Offset: 0x93c
	// Line 5876, Address: 0x245280, Func Offset: 0x940
	// Line 5878, Address: 0x24528c, Func Offset: 0x94c
	// Line 5876, Address: 0x245290, Func Offset: 0x950
	// Line 5877, Address: 0x2452b0, Func Offset: 0x970
	// Line 5876, Address: 0x2452bc, Func Offset: 0x97c
	// Line 5877, Address: 0x2452c4, Func Offset: 0x984
	// Line 5876, Address: 0x2452c8, Func Offset: 0x988
	// Line 5877, Address: 0x2452cc, Func Offset: 0x98c
	// Line 5876, Address: 0x2452d0, Func Offset: 0x990
	// Line 5877, Address: 0x2452d8, Func Offset: 0x998
	// Line 5878, Address: 0x245384, Func Offset: 0xa44
	// Line 5882, Address: 0x2453d4, Func Offset: 0xa94
	// Line 5883, Address: 0x2453f0, Func Offset: 0xab0
	// Line 5882, Address: 0x2453f4, Func Offset: 0xab4
	// Line 5883, Address: 0x245438, Func Offset: 0xaf8
	// Line 5887, Address: 0x245440, Func Offset: 0xb00
	// Line 5892, Address: 0x2455a0, Func Offset: 0xc60
	// Line 5893, Address: 0x2455ac, Func Offset: 0xc6c
	// Line 5894, Address: 0x2455c4, Func Offset: 0xc84
	// Line 5895, Address: 0x2455d4, Func Offset: 0xc94
	// Line 5896, Address: 0x2455dc, Func Offset: 0xc9c
	// Line 5897, Address: 0x2455e8, Func Offset: 0xca8
	// Line 5899, Address: 0x245604, Func Offset: 0xcc4
	// Line 5902, Address: 0x24560c, Func Offset: 0xccc
	// Line 5907, Address: 0x245628, Func Offset: 0xce8
	// Line 5908, Address: 0x245634, Func Offset: 0xcf4
	// Line 5911, Address: 0x245690, Func Offset: 0xd50
	// Line 5908, Address: 0x245694, Func Offset: 0xd54
	// Line 5911, Address: 0x24569c, Func Offset: 0xd5c
	// Line 5914, Address: 0x2457d0, Func Offset: 0xe90
	// Line 5915, Address: 0x2457d8, Func Offset: 0xe98
	// Line 5916, Address: 0x245828, Func Offset: 0xee8
	// Line 5918, Address: 0x245834, Func Offset: 0xef4
	// Line 5922, Address: 0x245878, Func Offset: 0xf38
	// Line 5924, Address: 0x245884, Func Offset: 0xf44
	// Line 5929, Address: 0x24588c, Func Offset: 0xf4c
	// Line 5931, Address: 0x2458d0, Func Offset: 0xf90
	// Line 5932, Address: 0x2458e0, Func Offset: 0xfa0
	// Line 5933, Address: 0x2458ec, Func Offset: 0xfac
	// Line 5938, Address: 0x2458f0, Func Offset: 0xfb0
	// Line 5940, Address: 0x2458f4, Func Offset: 0xfb4
	// Line 5945, Address: 0x2458fc, Func Offset: 0xfbc
	// Line 5946, Address: 0x245914, Func Offset: 0xfd4
	// Line 5947, Address: 0x245928, Func Offset: 0xfe8
	// Line 5948, Address: 0x245934, Func Offset: 0xff4
	// Line 5953, Address: 0x245938, Func Offset: 0xff8
	// Line 5959, Address: 0x245940, Func Offset: 0x1000
	// Line 5960, Address: 0x245958, Func Offset: 0x1018
	// Line 5959, Address: 0x245960, Func Offset: 0x1020
	// Line 5960, Address: 0x2459b0, Func Offset: 0x1070
	// Line 5961, Address: 0x2459b8, Func Offset: 0x1078
	// Line 5964, Address: 0x2459bc, Func Offset: 0x107c
	// Line 5961, Address: 0x2459c0, Func Offset: 0x1080
	// Line 5964, Address: 0x2459d4, Func Offset: 0x1094
	// Line 5967, Address: 0x2459f8, Func Offset: 0x10b8
	// Line 5968, Address: 0x245b30, Func Offset: 0x11f0
	// Line 5971, Address: 0x245b40, Func Offset: 0x1200
	// Line 5974, Address: 0x245b48, Func Offset: 0x1208
	// Line 5973, Address: 0x245b4c, Func Offset: 0x120c
	// Line 5974, Address: 0x245b50, Func Offset: 0x1210
	// Line 5977, Address: 0x245b54, Func Offset: 0x1214
	// Line 5974, Address: 0x245b58, Func Offset: 0x1218
	// Line 5977, Address: 0x245b5c, Func Offset: 0x121c
	// Line 5975, Address: 0x245b60, Func Offset: 0x1220
	// Line 5974, Address: 0x245b6c, Func Offset: 0x122c
	// Line 5976, Address: 0x245b78, Func Offset: 0x1238
	// Line 5975, Address: 0x245b7c, Func Offset: 0x123c
	// Line 5976, Address: 0x245b88, Func Offset: 0x1248
	// Line 5977, Address: 0x245b98, Func Offset: 0x1258
	// Line 5976, Address: 0x245ba0, Func Offset: 0x1260
	// Line 5977, Address: 0x245ba8, Func Offset: 0x1268
	// Line 5976, Address: 0x245bac, Func Offset: 0x126c
	// Line 5977, Address: 0x245bb0, Func Offset: 0x1270
	// Line 5982, Address: 0x245c1c, Func Offset: 0x12dc
	// Line 5983, Address: 0x245c30, Func Offset: 0x12f0
	// Line 5982, Address: 0x245c34, Func Offset: 0x12f4
	// Line 5983, Address: 0x245cb0, Func Offset: 0x1370
	// Line 5984, Address: 0x245d00, Func Offset: 0x13c0
	// Line 5987, Address: 0x245d18, Func Offset: 0x13d8
	// Line 5988, Address: 0x245d6c, Func Offset: 0x142c
	// Line 5989, Address: 0x245d88, Func Offset: 0x1448
	// Line 5994, Address: 0x245dac, Func Offset: 0x146c
	// Line 5998, Address: 0x245db8, Func Offset: 0x1478
	// Line 5999, Address: 0x245e80, Func Offset: 0x1540
	// Func End, Address: 0x245eb8, Func Offset: 0x1578
}

// Process__11zNMENeptuneFf
// Start address: 0x245ec0
void zNMENeptune::Process(float32 dt)
{
	float32 safeDist;
	float32 safeVel;
	float32 velscale;
	xBase* base;
	float32 tmpparam[4];
	float32 zeroParam[4];
	xVec3* playerpos;
	xVec3* playeroldpos;
	uint8 inFireLoop;
	int32 i;
	xVec3 triTipTags[3];
	int32 aimedAtKrabs;
	float32 aimKrabsDist;
	NMECfgNeptuneAttack* currAtk;
	float32 time_remaining;
	uint8 firstbeam;
	xIsect isx;
	xVec3 beamstart;
	xVec3 beamend;
	xVec3 beamdir;
	uint8 reflected;
	xRay3 beamray;
	xVec3 reflectnorm;
	float32 reflDot;
	xVec3 tempPlayerMidsect;
	int32 oldScorchCount;
	float32 distPlayer2D;
	float32 distLerp;
	float32 kbvel;
	float32 kbtime;
	xEnt* refl;
	xMat3x3 assetMat;
	xVec3 bucketSoundPos;
	NMECfgNeptuneAttack* currAtk;
	xVec3 triTipTags[4];
	xMat4x3* cruiseMat;
	float32 cruiseDist;
	NMECfgNeptuneAttack* currAtk;
	int32 i;
	NMECfgNeptuneAttack* currAtk;
	NMECfgNeptuneAttack* currAtk;
	float32 distplayer2;
	int32 i;
	int32 i;
	int32 lagidx;
	xVec3 laggedVel;
	float32 tgtTime;
	float32 launchSpeed;
	uint8 inFireLoop;
	float32 playerDist;
	float32 distLerp;
	float32 timeLerp;
	float32 frontLerp;
	float32 frontDist;
	xVec3 facepos;
	xVec3 diffVec;
	xVec3 atvec;
	float32 currAngle;
	float32 targetAngle;
	float32 diffAngle;
	float32 absAngle;
	float32 rightdot;
	float32 xzdist2;
	int32 turncount;
	int32 i;
	xEnt* refl;
	xMat3x3 assetMat;
	xVec3 shooterVec;
	int32 kbpower;
	// Line 4641, Address: 0x245ec0, Func Offset: 0
	// Line 4652, Address: 0x245f00, Func Offset: 0x40
	// Line 4653, Address: 0x245f18, Func Offset: 0x58
	// Line 4654, Address: 0x245f2c, Func Offset: 0x6c
	// Line 4655, Address: 0x245f40, Func Offset: 0x80
	// Line 4658, Address: 0x245fec, Func Offset: 0x12c
	// Line 4659, Address: 0x245ff8, Func Offset: 0x138
	// Line 4666, Address: 0x246004, Func Offset: 0x144
	// Line 4659, Address: 0x246008, Func Offset: 0x148
	// Line 4667, Address: 0x24600c, Func Offset: 0x14c
	// Line 4659, Address: 0x246010, Func Offset: 0x150
	// Line 4665, Address: 0x246018, Func Offset: 0x158
	// Line 4659, Address: 0x24601c, Func Offset: 0x15c
	// Line 4665, Address: 0x246028, Func Offset: 0x168
	// Line 4667, Address: 0x246040, Func Offset: 0x180
	// Line 4666, Address: 0x246048, Func Offset: 0x188
	// Line 4667, Address: 0x246054, Func Offset: 0x194
	// Line 4671, Address: 0x24606c, Func Offset: 0x1ac
	// Line 4672, Address: 0x246078, Func Offset: 0x1b8
	// Line 4673, Address: 0x246080, Func Offset: 0x1c0
	// Line 4679, Address: 0x24609c, Func Offset: 0x1dc
	// Line 4680, Address: 0x2460a8, Func Offset: 0x1e8
	// Line 4681, Address: 0x2460b0, Func Offset: 0x1f0
	// Line 4685, Address: 0x2460cc, Func Offset: 0x20c
	// Line 4689, Address: 0x2460d4, Func Offset: 0x214
	// Line 4690, Address: 0x2460e0, Func Offset: 0x220
	// Line 4691, Address: 0x246108, Func Offset: 0x248
	// Line 4694, Address: 0x246110, Func Offset: 0x250
	// Line 4695, Address: 0x246120, Func Offset: 0x260
	// Line 4698, Address: 0x246148, Func Offset: 0x288
	// Line 4699, Address: 0x246154, Func Offset: 0x294
	// Line 4700, Address: 0x24615c, Func Offset: 0x29c
	// Line 4701, Address: 0x246184, Func Offset: 0x2c4
	// Line 4703, Address: 0x2461a8, Func Offset: 0x2e8
	// Line 4706, Address: 0x2461b0, Func Offset: 0x2f0
	// Line 4707, Address: 0x2461c0, Func Offset: 0x300
	// Line 4708, Address: 0x2461d0, Func Offset: 0x310
	// Line 4711, Address: 0x2461d4, Func Offset: 0x314
	// Line 4707, Address: 0x2461d8, Func Offset: 0x318
	// Line 4708, Address: 0x2461dc, Func Offset: 0x31c
	// Line 4709, Address: 0x246204, Func Offset: 0x344
	// Line 4710, Address: 0x246228, Func Offset: 0x368
	// Line 4711, Address: 0x246244, Func Offset: 0x384
	// Line 4712, Address: 0x24624c, Func Offset: 0x38c
	// Line 4713, Address: 0x246258, Func Offset: 0x398
	// Line 4714, Address: 0x246260, Func Offset: 0x3a0
	// Line 4716, Address: 0x246280, Func Offset: 0x3c0
	// Line 4717, Address: 0x24628c, Func Offset: 0x3cc
	// Line 4720, Address: 0x246290, Func Offset: 0x3d0
	// Line 4726, Address: 0x2462a4, Func Offset: 0x3e4
	// Line 4727, Address: 0x2462ac, Func Offset: 0x3ec
	// Line 4728, Address: 0x2462d8, Func Offset: 0x418
	// Line 4731, Address: 0x2462f0, Func Offset: 0x430
	// Line 4732, Address: 0x24631c, Func Offset: 0x45c
	// Line 4733, Address: 0x246340, Func Offset: 0x480
	// Line 4735, Address: 0x246378, Func Offset: 0x4b8
	// Line 4738, Address: 0x246398, Func Offset: 0x4d8
	// Line 4741, Address: 0x24639c, Func Offset: 0x4dc
	// Line 4735, Address: 0x2463a0, Func Offset: 0x4e0
	// Line 4738, Address: 0x2463a4, Func Offset: 0x4e4
	// Line 4739, Address: 0x2463cc, Func Offset: 0x50c
	// Line 4740, Address: 0x2463f0, Func Offset: 0x530
	// Line 4741, Address: 0x24640c, Func Offset: 0x54c
	// Line 4742, Address: 0x246414, Func Offset: 0x554
	// Line 4744, Address: 0x24641c, Func Offset: 0x55c
	// Line 4745, Address: 0x246428, Func Offset: 0x568
	// Line 4746, Address: 0x246440, Func Offset: 0x580
	// Line 4747, Address: 0x246464, Func Offset: 0x5a4
	// Line 4748, Address: 0x246488, Func Offset: 0x5c8
	// Line 4749, Address: 0x2464ac, Func Offset: 0x5ec
	// Line 4755, Address: 0x2464d0, Func Offset: 0x610
	// Line 4756, Address: 0x2464d8, Func Offset: 0x618
	// Line 4757, Address: 0x2464fc, Func Offset: 0x63c
	// Line 4758, Address: 0x246510, Func Offset: 0x650
	// Line 4759, Address: 0x246518, Func Offset: 0x658
	// Line 4764, Address: 0x24652c, Func Offset: 0x66c
	// Line 4765, Address: 0x246538, Func Offset: 0x678
	// Line 4764, Address: 0x246540, Func Offset: 0x680
	// Line 4765, Address: 0x246548, Func Offset: 0x688
	// Line 4764, Address: 0x246554, Func Offset: 0x694
	// Line 4765, Address: 0x246560, Func Offset: 0x6a0
	// Line 4768, Address: 0x246574, Func Offset: 0x6b4
	// Line 4774, Address: 0x246580, Func Offset: 0x6c0
	// Line 4768, Address: 0x246584, Func Offset: 0x6c4
	// Line 4774, Address: 0x246588, Func Offset: 0x6c8
	// Line 4768, Address: 0x2465b0, Func Offset: 0x6f0
	// Line 4778, Address: 0x2465b4, Func Offset: 0x6f4
	// Line 4774, Address: 0x2465bc, Func Offset: 0x6fc
	// Line 4773, Address: 0x2465c8, Func Offset: 0x708
	// Line 4778, Address: 0x2465cc, Func Offset: 0x70c
	// Line 4768, Address: 0x2465d0, Func Offset: 0x710
	// Line 4774, Address: 0x2465d8, Func Offset: 0x718
	// Line 4778, Address: 0x246688, Func Offset: 0x7c8
	// Line 4780, Address: 0x2466c4, Func Offset: 0x804
	// Line 4783, Address: 0x2466d8, Func Offset: 0x818
	// Line 4787, Address: 0x24677c, Func Offset: 0x8bc
	// Line 4788, Address: 0x246788, Func Offset: 0x8c8
	// Line 4789, Address: 0x246798, Func Offset: 0x8d8
	// Line 4795, Address: 0x24679c, Func Offset: 0x8dc
	// Line 4798, Address: 0x2467a0, Func Offset: 0x8e0
	// Line 4801, Address: 0x2467e0, Func Offset: 0x920
	// Line 4803, Address: 0x2467ec, Func Offset: 0x92c
	// Line 4804, Address: 0x2467fc, Func Offset: 0x93c
	// Line 4806, Address: 0x246814, Func Offset: 0x954
	// Line 4808, Address: 0x24683c, Func Offset: 0x97c
	// Line 4809, Address: 0x246840, Func Offset: 0x980
	// Line 4808, Address: 0x246848, Func Offset: 0x988
	// Line 4809, Address: 0x24684c, Func Offset: 0x98c
	// Line 4810, Address: 0x246858, Func Offset: 0x998
	// Line 4813, Address: 0x24685c, Func Offset: 0x99c
	// Line 4814, Address: 0x246874, Func Offset: 0x9b4
	// Line 4815, Address: 0x246888, Func Offset: 0x9c8
	// Line 4816, Address: 0x246894, Func Offset: 0x9d4
	// Line 4819, Address: 0x246898, Func Offset: 0x9d8
	// Line 4820, Address: 0x2468c0, Func Offset: 0xa00
	// Line 4821, Address: 0x2468d0, Func Offset: 0xa10
	// Line 4822, Address: 0x2468dc, Func Offset: 0xa1c
	// Line 4825, Address: 0x2468e0, Func Offset: 0xa20
	// Line 4826, Address: 0x2468f8, Func Offset: 0xa38
	// Line 4827, Address: 0x246908, Func Offset: 0xa48
	// Line 4828, Address: 0x246918, Func Offset: 0xa58
	// Line 4829, Address: 0x246924, Func Offset: 0xa64
	// Line 4833, Address: 0x246928, Func Offset: 0xa68
	// Line 4834, Address: 0x246940, Func Offset: 0xa80
	// Line 4835, Address: 0x246954, Func Offset: 0xa94
	// Line 4836, Address: 0x246968, Func Offset: 0xaa8
	// Line 4837, Address: 0x246974, Func Offset: 0xab4
	// Line 4841, Address: 0x246978, Func Offset: 0xab8
	// Line 4844, Address: 0x246994, Func Offset: 0xad4
	// Line 4849, Address: 0x2469a4, Func Offset: 0xae4
	// Line 4850, Address: 0x2469a8, Func Offset: 0xae8
	// Line 4849, Address: 0x2469b4, Func Offset: 0xaf4
	// Line 4850, Address: 0x2469bc, Func Offset: 0xafc
	// Line 4851, Address: 0x246a1c, Func Offset: 0xb5c
	// Line 4852, Address: 0x246a2c, Func Offset: 0xb6c
	// Line 4855, Address: 0x246b10, Func Offset: 0xc50
	// Line 4856, Address: 0x246b1c, Func Offset: 0xc5c
	// Line 4860, Address: 0x246bdc, Func Offset: 0xd1c
	// Line 4862, Address: 0x246be0, Func Offset: 0xd20
	// Line 4863, Address: 0x246d24, Func Offset: 0xe64
	// Line 4864, Address: 0x246d34, Func Offset: 0xe74
	// Line 4867, Address: 0x246d3c, Func Offset: 0xe7c
	// Line 4871, Address: 0x246d84, Func Offset: 0xec4
	// Line 4872, Address: 0x246da0, Func Offset: 0xee0
	// Line 4873, Address: 0x246da8, Func Offset: 0xee8
	// Line 4874, Address: 0x246db8, Func Offset: 0xef8
	// Line 4875, Address: 0x246dbc, Func Offset: 0xefc
	// Line 4879, Address: 0x246dc0, Func Offset: 0xf00
	// Line 4884, Address: 0x246dc8, Func Offset: 0xf08
	// Line 4885, Address: 0x246de0, Func Offset: 0xf20
	// Line 4886, Address: 0x246dfc, Func Offset: 0xf3c
	// Line 4888, Address: 0x246e08, Func Offset: 0xf48
	// Line 4894, Address: 0x246e0c, Func Offset: 0xf4c
	// Line 4888, Address: 0x246e10, Func Offset: 0xf50
	// Line 4894, Address: 0x246e24, Func Offset: 0xf64
	// Line 4895, Address: 0x246e40, Func Offset: 0xf80
	// Line 4896, Address: 0x246e84, Func Offset: 0xfc4
	// Line 4900, Address: 0x246e94, Func Offset: 0xfd4
	// Line 4901, Address: 0x246ea0, Func Offset: 0xfe0
	// Line 4902, Address: 0x246ebc, Func Offset: 0xffc
	// Line 4903, Address: 0x246f10, Func Offset: 0x1050
	// Line 4906, Address: 0x246f24, Func Offset: 0x1064
	// Line 4907, Address: 0x246f38, Func Offset: 0x1078
	// Line 4908, Address: 0x246f44, Func Offset: 0x1084
	// Line 4909, Address: 0x246f5c, Func Offset: 0x109c
	// Line 4910, Address: 0x246f60, Func Offset: 0x10a0
	// Line 4911, Address: 0x246fe0, Func Offset: 0x1120
	// Line 4912, Address: 0x246fe4, Func Offset: 0x1124
	// Line 4913, Address: 0x246ff0, Func Offset: 0x1130
	// Line 4914, Address: 0x246ff4, Func Offset: 0x1134
	// Line 4915, Address: 0x246ff8, Func Offset: 0x1138
	// Line 4916, Address: 0x247004, Func Offset: 0x1144
	// Line 4917, Address: 0x247048, Func Offset: 0x1188
	// Line 4921, Address: 0x247050, Func Offset: 0x1190
	// Line 4922, Address: 0x247070, Func Offset: 0x11b0
	// Line 4923, Address: 0x24707c, Func Offset: 0x11bc
	// Line 4924, Address: 0x247084, Func Offset: 0x11c4
	// Line 4930, Address: 0x247088, Func Offset: 0x11c8
	// Line 4935, Address: 0x247090, Func Offset: 0x11d0
	// Line 4938, Address: 0x2470b4, Func Offset: 0x11f4
	// Line 4941, Address: 0x2470d0, Func Offset: 0x1210
	// Line 4938, Address: 0x2470d4, Func Offset: 0x1214
	// Line 4941, Address: 0x2470d8, Func Offset: 0x1218
	// Line 4946, Address: 0x2470dc, Func Offset: 0x121c
	// Line 4947, Address: 0x247140, Func Offset: 0x1280
	// Line 4948, Address: 0x24714c, Func Offset: 0x128c
	// Line 4950, Address: 0x247150, Func Offset: 0x1290
	// Line 4957, Address: 0x247154, Func Offset: 0x1294
	// Line 4958, Address: 0x24715c, Func Offset: 0x129c
	// Line 4947, Address: 0x247160, Func Offset: 0x12a0
	// Line 4958, Address: 0x247164, Func Offset: 0x12a4
	// Line 4947, Address: 0x247168, Func Offset: 0x12a8
	// Line 4959, Address: 0x24716c, Func Offset: 0x12ac
	// Line 4947, Address: 0x247170, Func Offset: 0x12b0
	// Line 4961, Address: 0x247174, Func Offset: 0x12b4
	// Line 4947, Address: 0x247178, Func Offset: 0x12b8
	// Line 4962, Address: 0x24717c, Func Offset: 0x12bc
	// Line 4948, Address: 0x247180, Func Offset: 0x12c0
	// Line 4962, Address: 0x247184, Func Offset: 0x12c4
	// Line 4948, Address: 0x247188, Func Offset: 0x12c8
	// Line 4962, Address: 0x24718c, Func Offset: 0x12cc
	// Line 4949, Address: 0x247190, Func Offset: 0x12d0
	// Line 4962, Address: 0x247194, Func Offset: 0x12d4
	// Line 4948, Address: 0x247198, Func Offset: 0x12d8
	// Line 4950, Address: 0x24719c, Func Offset: 0x12dc
	// Line 4948, Address: 0x2471a0, Func Offset: 0x12e0
	// Line 4949, Address: 0x2471a4, Func Offset: 0x12e4
	// Line 4948, Address: 0x2471ac, Func Offset: 0x12ec
	// Line 4949, Address: 0x2471b0, Func Offset: 0x12f0
	// Line 4950, Address: 0x2471b4, Func Offset: 0x12f4
	// Line 4957, Address: 0x2471c0, Func Offset: 0x1300
	// Line 4960, Address: 0x2471c4, Func Offset: 0x1304
	// Line 4958, Address: 0x2471c8, Func Offset: 0x1308
	// Line 4961, Address: 0x2471cc, Func Offset: 0x130c
	// Line 4957, Address: 0x2471d0, Func Offset: 0x1310
	// Line 4959, Address: 0x2471d4, Func Offset: 0x1314
	// Line 4958, Address: 0x2471d8, Func Offset: 0x1318
	// Line 4957, Address: 0x2471dc, Func Offset: 0x131c
	// Line 4958, Address: 0x2471e0, Func Offset: 0x1320
	// Line 4962, Address: 0x2471e4, Func Offset: 0x1324
	// Line 4963, Address: 0x2471ec, Func Offset: 0x132c
	// Line 4962, Address: 0x2471f0, Func Offset: 0x1330
	// Line 4963, Address: 0x2471f4, Func Offset: 0x1334
	// Line 4964, Address: 0x247210, Func Offset: 0x1350
	// Line 4965, Address: 0x247228, Func Offset: 0x1368
	// Line 4967, Address: 0x247240, Func Offset: 0x1380
	// Line 4970, Address: 0x247248, Func Offset: 0x1388
	// Line 4971, Address: 0x247264, Func Offset: 0x13a4
	// Line 4970, Address: 0x247268, Func Offset: 0x13a8
	// Line 4971, Address: 0x247280, Func Offset: 0x13c0
	// Line 4972, Address: 0x247294, Func Offset: 0x13d4
	// Line 4973, Address: 0x2472a8, Func Offset: 0x13e8
	// Line 4983, Address: 0x2472bc, Func Offset: 0x13fc
	// Line 4984, Address: 0x247324, Func Offset: 0x1464
	// Line 4986, Address: 0x247338, Func Offset: 0x1478
	// Line 4984, Address: 0x24733c, Func Offset: 0x147c
	// Line 4986, Address: 0x247340, Func Offset: 0x1480
	// Line 4990, Address: 0x24735c, Func Offset: 0x149c
	// Line 4991, Address: 0x247360, Func Offset: 0x14a0
	// Line 4992, Address: 0x247368, Func Offset: 0x14a8
	// Line 4993, Address: 0x247370, Func Offset: 0x14b0
	// Line 4996, Address: 0x24737c, Func Offset: 0x14bc
	// Line 4999, Address: 0x247384, Func Offset: 0x14c4
	// Line 5000, Address: 0x2473fc, Func Offset: 0x153c
	// Line 5001, Address: 0x247404, Func Offset: 0x1544
	// Line 5002, Address: 0x247454, Func Offset: 0x1594
	// Line 5003, Address: 0x247468, Func Offset: 0x15a8
	// Line 5005, Address: 0x2474bc, Func Offset: 0x15fc
	// Line 5006, Address: 0x2474d0, Func Offset: 0x1610
	// Line 5005, Address: 0x2474d4, Func Offset: 0x1614
	// Line 5006, Address: 0x2474d8, Func Offset: 0x1618
	// Line 5005, Address: 0x2474dc, Func Offset: 0x161c
	// Line 5006, Address: 0x2474e0, Func Offset: 0x1620
	// Line 5007, Address: 0x2474f0, Func Offset: 0x1630
	// Line 5012, Address: 0x247500, Func Offset: 0x1640
	// Line 5007, Address: 0x247504, Func Offset: 0x1644
	// Line 5012, Address: 0x24750c, Func Offset: 0x164c
	// Line 5007, Address: 0x247510, Func Offset: 0x1650
	// Line 5014, Address: 0x247514, Func Offset: 0x1654
	// Line 5007, Address: 0x247518, Func Offset: 0x1658
	// Line 5014, Address: 0x24751c, Func Offset: 0x165c
	// Line 5007, Address: 0x247520, Func Offset: 0x1660
	// Line 5012, Address: 0x247544, Func Offset: 0x1684
	// Line 5014, Address: 0x247548, Func Offset: 0x1688
	// Line 5016, Address: 0x247558, Func Offset: 0x1698
	// Line 5017, Address: 0x2475a8, Func Offset: 0x16e8
	// Line 5020, Address: 0x2475e4, Func Offset: 0x1724
	// Line 5021, Address: 0x2475f0, Func Offset: 0x1730
	// Line 5023, Address: 0x2475f4, Func Offset: 0x1734
	// Line 5024, Address: 0x247600, Func Offset: 0x1740
	// Line 5029, Address: 0x24760c, Func Offset: 0x174c
	// Line 5026, Address: 0x247610, Func Offset: 0x1750
	// Line 5029, Address: 0x247614, Func Offset: 0x1754
	// Line 5026, Address: 0x247618, Func Offset: 0x1758
	// Line 5028, Address: 0x24761c, Func Offset: 0x175c
	// Line 5026, Address: 0x247620, Func Offset: 0x1760
	// Line 5029, Address: 0x247628, Func Offset: 0x1768
	// Line 5035, Address: 0x2476cc, Func Offset: 0x180c
	// Line 5039, Address: 0x2476d8, Func Offset: 0x1818
	// Line 5042, Address: 0x2476e0, Func Offset: 0x1820
	// Line 5047, Address: 0x247700, Func Offset: 0x1840
	// Line 5049, Address: 0x247710, Func Offset: 0x1850
	// Line 5053, Address: 0x247724, Func Offset: 0x1864
	// Line 5057, Address: 0x247768, Func Offset: 0x18a8
	// Line 5062, Address: 0x247784, Func Offset: 0x18c4
	// Line 5057, Address: 0x247788, Func Offset: 0x18c8
	// Line 5065, Address: 0x24778c, Func Offset: 0x18cc
	// Line 5067, Address: 0x2477ac, Func Offset: 0x18ec
	// Line 5070, Address: 0x2477b0, Func Offset: 0x18f0
	// Line 5068, Address: 0x2477b4, Func Offset: 0x18f4
	// Line 5069, Address: 0x2477c4, Func Offset: 0x1904
	// Line 5070, Address: 0x2477d0, Func Offset: 0x1910
	// Line 5071, Address: 0x2477dc, Func Offset: 0x191c
	// Line 5072, Address: 0x2477fc, Func Offset: 0x193c
	// Line 5079, Address: 0x247808, Func Offset: 0x1948
	// Line 5082, Address: 0x247814, Func Offset: 0x1954
	// Line 5083, Address: 0x24781c, Func Offset: 0x195c
	// Line 5085, Address: 0x247828, Func Offset: 0x1968
	// Line 5086, Address: 0x24786c, Func Offset: 0x19ac
	// Line 5087, Address: 0x247880, Func Offset: 0x19c0
	// Line 5088, Address: 0x247890, Func Offset: 0x19d0
	// Line 5089, Address: 0x247894, Func Offset: 0x19d4
	// Line 5088, Address: 0x24789c, Func Offset: 0x19dc
	// Line 5090, Address: 0x2478a0, Func Offset: 0x19e0
	// Line 5088, Address: 0x2478ac, Func Offset: 0x19ec
	// Line 5089, Address: 0x2478bc, Func Offset: 0x19fc
	// Line 5088, Address: 0x2478c0, Func Offset: 0x1a00
	// Line 5090, Address: 0x2478c8, Func Offset: 0x1a08
	// Line 5092, Address: 0x2478d0, Func Offset: 0x1a10
	// Line 5094, Address: 0x2478e0, Func Offset: 0x1a20
	// Line 5095, Address: 0x247924, Func Offset: 0x1a64
	// Line 5096, Address: 0x247968, Func Offset: 0x1aa8
	// Line 5098, Address: 0x247970, Func Offset: 0x1ab0
	// Line 5104, Address: 0x2479b4, Func Offset: 0x1af4
	// Line 5105, Address: 0x2479b8, Func Offset: 0x1af8
	// Line 5104, Address: 0x2479c0, Func Offset: 0x1b00
	// Line 5105, Address: 0x2479c4, Func Offset: 0x1b04
	// Line 5104, Address: 0x2479cc, Func Offset: 0x1b0c
	// Line 5105, Address: 0x2479dc, Func Offset: 0x1b1c
	// Line 5108, Address: 0x2479e8, Func Offset: 0x1b28
	// Line 5109, Address: 0x247a04, Func Offset: 0x1b44
	// Line 5112, Address: 0x247a10, Func Offset: 0x1b50
	// Line 5114, Address: 0x247a24, Func Offset: 0x1b64
	// Line 5115, Address: 0x247a34, Func Offset: 0x1b74
	// Line 5117, Address: 0x247a38, Func Offset: 0x1b78
	// Line 5115, Address: 0x247a3c, Func Offset: 0x1b7c
	// Line 5116, Address: 0x247a44, Func Offset: 0x1b84
	// Line 5117, Address: 0x247a50, Func Offset: 0x1b90
	// Line 5119, Address: 0x247a58, Func Offset: 0x1b98
	// Line 5121, Address: 0x247a60, Func Offset: 0x1ba0
	// Line 5122, Address: 0x247a6c, Func Offset: 0x1bac
	// Line 5123, Address: 0x247a7c, Func Offset: 0x1bbc
	// Line 5124, Address: 0x247a80, Func Offset: 0x1bc0
	// Line 5129, Address: 0x247a84, Func Offset: 0x1bc4
	// Line 5134, Address: 0x247a8c, Func Offset: 0x1bcc
	// Line 5135, Address: 0x247a98, Func Offset: 0x1bd8
	// Line 5136, Address: 0x247ac0, Func Offset: 0x1c00
	// Line 5137, Address: 0x247ad8, Func Offset: 0x1c18
	// Line 5138, Address: 0x247ae0, Func Offset: 0x1c20
	// Line 5141, Address: 0x247aec, Func Offset: 0x1c2c
	// Line 5143, Address: 0x247b28, Func Offset: 0x1c68
	// Line 5144, Address: 0x247b2c, Func Offset: 0x1c6c
	// Line 5146, Address: 0x247b30, Func Offset: 0x1c70
	// Line 5148, Address: 0x247b60, Func Offset: 0x1ca0
	// Line 5149, Address: 0x247b68, Func Offset: 0x1ca8
	// Line 5150, Address: 0x247b6c, Func Offset: 0x1cac
	// Line 5149, Address: 0x247b70, Func Offset: 0x1cb0
	// Line 5150, Address: 0x247b74, Func Offset: 0x1cb4
	// Line 5152, Address: 0x247b84, Func Offset: 0x1cc4
	// Line 5153, Address: 0x247b90, Func Offset: 0x1cd0
	// Line 5157, Address: 0x247b98, Func Offset: 0x1cd8
	// Line 5159, Address: 0x247ba8, Func Offset: 0x1ce8
	// Line 5160, Address: 0x247bb4, Func Offset: 0x1cf4
	// Line 5161, Address: 0x247bbc, Func Offset: 0x1cfc
	// Line 5162, Address: 0x247bc4, Func Offset: 0x1d04
	// Line 5164, Address: 0x247bd0, Func Offset: 0x1d10
	// Line 5166, Address: 0x247be0, Func Offset: 0x1d20
	// Line 5167, Address: 0x247bec, Func Offset: 0x1d2c
	// Line 5169, Address: 0x247bf8, Func Offset: 0x1d38
	// Line 5170, Address: 0x247c14, Func Offset: 0x1d54
	// Line 5172, Address: 0x247c18, Func Offset: 0x1d58
	// Line 5178, Address: 0x247c30, Func Offset: 0x1d70
	// Line 5183, Address: 0x247c38, Func Offset: 0x1d78
	// Line 5184, Address: 0x247c58, Func Offset: 0x1d98
	// Line 5185, Address: 0x247c64, Func Offset: 0x1da4
	// Line 5186, Address: 0x247c68, Func Offset: 0x1da8
	// Line 5185, Address: 0x247c6c, Func Offset: 0x1dac
	// Line 5186, Address: 0x247c70, Func Offset: 0x1db0
	// Line 5187, Address: 0x247c78, Func Offset: 0x1db8
	// Line 5188, Address: 0x247c80, Func Offset: 0x1dc0
	// Line 5189, Address: 0x247c84, Func Offset: 0x1dc4
	// Line 5188, Address: 0x247c88, Func Offset: 0x1dc8
	// Line 5189, Address: 0x247c8c, Func Offset: 0x1dcc
	// Line 5195, Address: 0x247c94, Func Offset: 0x1dd4
	// Line 5200, Address: 0x247ca0, Func Offset: 0x1de0
	// Line 5201, Address: 0x247cbc, Func Offset: 0x1dfc
	// Line 5202, Address: 0x247cd8, Func Offset: 0x1e18
	// Line 5203, Address: 0x247cf4, Func Offset: 0x1e34
	// Line 5204, Address: 0x247d08, Func Offset: 0x1e48
	// Line 5208, Address: 0x247edc, Func Offset: 0x201c
	// Line 5209, Address: 0x247ee8, Func Offset: 0x2028
	// Line 5214, Address: 0x247fac, Func Offset: 0x20ec
	// Line 5215, Address: 0x247fd4, Func Offset: 0x2114
	// Line 5219, Address: 0x247fe0, Func Offset: 0x2120
	// Line 5220, Address: 0x247fec, Func Offset: 0x212c
	// Line 5221, Address: 0x247ff0, Func Offset: 0x2130
	// Line 5220, Address: 0x247ff4, Func Offset: 0x2134
	// Line 5221, Address: 0x247ff8, Func Offset: 0x2138
	// Line 5225, Address: 0x248000, Func Offset: 0x2140
	// Line 5226, Address: 0x248030, Func Offset: 0x2170
	// Line 5228, Address: 0x24803c, Func Offset: 0x217c
	// Line 5230, Address: 0x248068, Func Offset: 0x21a8
	// Line 5231, Address: 0x248070, Func Offset: 0x21b0
	// Line 5232, Address: 0x248078, Func Offset: 0x21b8
	// Line 5239, Address: 0x24807c, Func Offset: 0x21bc
	// Line 5244, Address: 0x2480e0, Func Offset: 0x2220
	// Line 5248, Address: 0x2480f0, Func Offset: 0x2230
	// Line 5250, Address: 0x248128, Func Offset: 0x2268
	// Line 5251, Address: 0x24812c, Func Offset: 0x226c
	// Line 5254, Address: 0x248138, Func Offset: 0x2278
	// Line 5255, Address: 0x248200, Func Offset: 0x2340
	// Line 5256, Address: 0x24820c, Func Offset: 0x234c
	// Line 5257, Address: 0x248220, Func Offset: 0x2360
	// Line 5258, Address: 0x248274, Func Offset: 0x23b4
	// Line 5259, Address: 0x24827c, Func Offset: 0x23bc
	// Line 5261, Address: 0x2482d4, Func Offset: 0x2414
	// Line 5262, Address: 0x2482f4, Func Offset: 0x2434
	// Line 5263, Address: 0x248308, Func Offset: 0x2448
	// Line 5264, Address: 0x248310, Func Offset: 0x2450
	// Line 5265, Address: 0x248364, Func Offset: 0x24a4
	// Line 5266, Address: 0x248378, Func Offset: 0x24b8
	// Line 5267, Address: 0x2483cc, Func Offset: 0x250c
	// Line 5268, Address: 0x2483e0, Func Offset: 0x2520
	// Line 5270, Address: 0x248438, Func Offset: 0x2578
	// Line 5271, Address: 0x24844c, Func Offset: 0x258c
	// Line 5270, Address: 0x248450, Func Offset: 0x2590
	// Line 5271, Address: 0x248454, Func Offset: 0x2594
	// Line 5270, Address: 0x248458, Func Offset: 0x2598
	// Line 5271, Address: 0x24845c, Func Offset: 0x259c
	// Line 5272, Address: 0x24846c, Func Offset: 0x25ac
	// Line 5277, Address: 0x248478, Func Offset: 0x25b8
	// Line 5278, Address: 0x24847c, Func Offset: 0x25bc
	// Line 5279, Address: 0x248484, Func Offset: 0x25c4
	// Line 5280, Address: 0x248490, Func Offset: 0x25d0
	// Line 5281, Address: 0x248498, Func Offset: 0x25d8
	// Line 5282, Address: 0x2484a0, Func Offset: 0x25e0
	// Line 5283, Address: 0x2484a8, Func Offset: 0x25e8
	// Line 5286, Address: 0x2484b4, Func Offset: 0x25f4
	// Line 5287, Address: 0x2484cc, Func Offset: 0x260c
	// Line 5288, Address: 0x2484d0, Func Offset: 0x2610
	// Line 5289, Address: 0x2484dc, Func Offset: 0x261c
	// Line 5290, Address: 0x2484e0, Func Offset: 0x2620
	// Line 5294, Address: 0x2484ec, Func Offset: 0x262c
	// Line 5295, Address: 0x2484f8, Func Offset: 0x2638
	// Line 5296, Address: 0x248504, Func Offset: 0x2644
	// Line 5299, Address: 0x24850c, Func Offset: 0x264c
	// Line 5302, Address: 0x248524, Func Offset: 0x2664
	// Line 5299, Address: 0x24852c, Func Offset: 0x266c
	// Line 5302, Address: 0x248538, Func Offset: 0x2678
	// Line 5306, Address: 0x248554, Func Offset: 0x2694
	// Line 5307, Address: 0x248564, Func Offset: 0x26a4
	// Line 5309, Address: 0x248568, Func Offset: 0x26a8
	// Line 5307, Address: 0x24856c, Func Offset: 0x26ac
	// Line 5309, Address: 0x248574, Func Offset: 0x26b4
	// Line 5310, Address: 0x24857c, Func Offset: 0x26bc
	// Line 5311, Address: 0x248594, Func Offset: 0x26d4
	// Line 5317, Address: 0x2485a4, Func Offset: 0x26e4
	// Line 5322, Address: 0x2485d0, Func Offset: 0x2710
	// Line 5324, Address: 0x2485f4, Func Offset: 0x2734
	// Line 5325, Address: 0x2485fc, Func Offset: 0x273c
	// Line 5326, Address: 0x2486ec, Func Offset: 0x282c
	// Line 5327, Address: 0x248700, Func Offset: 0x2840
	// Line 5328, Address: 0x248710, Func Offset: 0x2850
	// Line 5329, Address: 0x248718, Func Offset: 0x2858
	// Line 5332, Address: 0x248720, Func Offset: 0x2860
	// Line 5337, Address: 0x24872c, Func Offset: 0x286c
	// Line 5332, Address: 0x248730, Func Offset: 0x2870
	// Line 5337, Address: 0x248744, Func Offset: 0x2884
	// Line 5340, Address: 0x248818, Func Offset: 0x2958
	// Line 5341, Address: 0x248820, Func Offset: 0x2960
	// Line 5350, Address: 0x248824, Func Offset: 0x2964
	// Line 5342, Address: 0x248828, Func Offset: 0x2968
	// Line 5343, Address: 0x24882c, Func Offset: 0x296c
	// Line 5344, Address: 0x248830, Func Offset: 0x2970
	// Line 5345, Address: 0x248834, Func Offset: 0x2974
	// Line 5346, Address: 0x248838, Func Offset: 0x2978
	// Line 5347, Address: 0x24883c, Func Offset: 0x297c
	// Line 5348, Address: 0x248840, Func Offset: 0x2980
	// Line 5349, Address: 0x248844, Func Offset: 0x2984
	// Line 5350, Address: 0x248848, Func Offset: 0x2988
	// Line 5353, Address: 0x24884c, Func Offset: 0x298c
	// Line 5359, Address: 0x248858, Func Offset: 0x2998
	// Line 5353, Address: 0x24885c, Func Offset: 0x299c
	// Line 5359, Address: 0x248870, Func Offset: 0x29b0
	// Line 5361, Address: 0x248898, Func Offset: 0x29d8
	// Line 5362, Address: 0x2488a4, Func Offset: 0x29e4
	// Line 5364, Address: 0x2488b0, Func Offset: 0x29f0
	// Line 5365, Address: 0x2488bc, Func Offset: 0x29fc
	// Line 5366, Address: 0x2488c4, Func Offset: 0x2a04
	// Line 5367, Address: 0x2488f0, Func Offset: 0x2a30
	// Line 5370, Address: 0x2488f8, Func Offset: 0x2a38
	// Line 5375, Address: 0x248900, Func Offset: 0x2a40
	// Line 5379, Address: 0x24895c, Func Offset: 0x2a9c
	// Line 5380, Address: 0x248964, Func Offset: 0x2aa4
	// Line 5381, Address: 0x248970, Func Offset: 0x2ab0
	// Line 5388, Address: 0x248978, Func Offset: 0x2ab8
	// Line 5386, Address: 0x24897c, Func Offset: 0x2abc
	// Line 5381, Address: 0x248980, Func Offset: 0x2ac0
	// Line 5388, Address: 0x248988, Func Offset: 0x2ac8
	// Line 5381, Address: 0x24898c, Func Offset: 0x2acc
	// Line 5388, Address: 0x248994, Func Offset: 0x2ad4
	// Line 5381, Address: 0x248998, Func Offset: 0x2ad8
	// Line 5386, Address: 0x2489b4, Func Offset: 0x2af4
	// Line 5388, Address: 0x2489b8, Func Offset: 0x2af8
	// Line 5390, Address: 0x2489d4, Func Offset: 0x2b14
	// Line 5391, Address: 0x2489d8, Func Offset: 0x2b18
	// Line 5390, Address: 0x2489dc, Func Offset: 0x2b1c
	// Line 5391, Address: 0x2489e0, Func Offset: 0x2b20
	// Line 5390, Address: 0x2489e4, Func Offset: 0x2b24
	// Line 5394, Address: 0x2489e8, Func Offset: 0x2b28
	// Line 5399, Address: 0x2489f4, Func Offset: 0x2b34
	// Line 5400, Address: 0x248a08, Func Offset: 0x2b48
	// Line 5401, Address: 0x248a20, Func Offset: 0x2b60
	// Line 5402, Address: 0x248a28, Func Offset: 0x2b68
	// Line 5415, Address: 0x248a30, Func Offset: 0x2b70
	// Line 5416, Address: 0x248a38, Func Offset: 0x2b78
	// Line 5425, Address: 0x248a3c, Func Offset: 0x2b7c
	// Line 5417, Address: 0x248a40, Func Offset: 0x2b80
	// Line 5418, Address: 0x248a44, Func Offset: 0x2b84
	// Line 5419, Address: 0x248a48, Func Offset: 0x2b88
	// Line 5420, Address: 0x248a4c, Func Offset: 0x2b8c
	// Line 5421, Address: 0x248a50, Func Offset: 0x2b90
	// Line 5422, Address: 0x248a54, Func Offset: 0x2b94
	// Line 5423, Address: 0x248a58, Func Offset: 0x2b98
	// Line 5424, Address: 0x248a5c, Func Offset: 0x2b9c
	// Line 5425, Address: 0x248a60, Func Offset: 0x2ba0
	// Line 5430, Address: 0x248a64, Func Offset: 0x2ba4
	// Line 5435, Address: 0x248a6c, Func Offset: 0x2bac
	// Line 5436, Address: 0x248a88, Func Offset: 0x2bc8
	// Line 5437, Address: 0x248afc, Func Offset: 0x2c3c
	// Line 5438, Address: 0x248b04, Func Offset: 0x2c44
	// Line 5439, Address: 0x248b58, Func Offset: 0x2c98
	// Line 5440, Address: 0x248b6c, Func Offset: 0x2cac
	// Line 5441, Address: 0x248bc0, Func Offset: 0x2d00
	// Line 5442, Address: 0x248bd4, Func Offset: 0x2d14
	// Line 5444, Address: 0x248c2c, Func Offset: 0x2d6c
	// Line 5445, Address: 0x248c40, Func Offset: 0x2d80
	// Line 5444, Address: 0x248c44, Func Offset: 0x2d84
	// Line 5445, Address: 0x248c48, Func Offset: 0x2d88
	// Line 5444, Address: 0x248c4c, Func Offset: 0x2d8c
	// Line 5445, Address: 0x248c50, Func Offset: 0x2d90
	// Line 5446, Address: 0x248c60, Func Offset: 0x2da0
	// Line 5449, Address: 0x248c6c, Func Offset: 0x2dac
	// Line 5450, Address: 0x248c70, Func Offset: 0x2db0
	// Line 5449, Address: 0x248c74, Func Offset: 0x2db4
	// Line 5450, Address: 0x248c78, Func Offset: 0x2db8
	// Line 5451, Address: 0x248c80, Func Offset: 0x2dc0
	// Line 5455, Address: 0x248c84, Func Offset: 0x2dc4
	// Line 5462, Address: 0x248c8c, Func Offset: 0x2dcc
	// Line 5463, Address: 0x248ca8, Func Offset: 0x2de8
	// Line 5464, Address: 0x248cac, Func Offset: 0x2dec
	// Line 5463, Address: 0x248cb0, Func Offset: 0x2df0
	// Line 5465, Address: 0x248cbc, Func Offset: 0x2dfc
	// Line 5466, Address: 0x248d5c, Func Offset: 0x2e9c
	// Line 5467, Address: 0x248d70, Func Offset: 0x2eb0
	// Line 5471, Address: 0x248d78, Func Offset: 0x2eb8
	// Line 5472, Address: 0x248d80, Func Offset: 0x2ec0
	// Line 5475, Address: 0x248df8, Func Offset: 0x2f38
	// Line 5476, Address: 0x248e08, Func Offset: 0x2f48
	// Line 5477, Address: 0x248e14, Func Offset: 0x2f54
	// Line 5478, Address: 0x248e20, Func Offset: 0x2f60
	// Line 5486, Address: 0x248e28, Func Offset: 0x2f68
	// Line 5488, Address: 0x248e40, Func Offset: 0x2f80
	// Line 5489, Address: 0x248e50, Func Offset: 0x2f90
	// Line 5491, Address: 0x248e8c, Func Offset: 0x2fcc
	// Line 5492, Address: 0x248e9c, Func Offset: 0x2fdc
	// Line 5493, Address: 0x248ea4, Func Offset: 0x2fe4
	// Line 5498, Address: 0x248eb4, Func Offset: 0x2ff4
	// Line 5503, Address: 0x248ed0, Func Offset: 0x3010
	// Line 5504, Address: 0x248ed4, Func Offset: 0x3014
	// Line 5505, Address: 0x248efc, Func Offset: 0x303c
	// Line 5508, Address: 0x248f08, Func Offset: 0x3048
	// Line 5506, Address: 0x248f0c, Func Offset: 0x304c
	// Line 5507, Address: 0x248f10, Func Offset: 0x3050
	// Line 5508, Address: 0x248f18, Func Offset: 0x3058
	// Line 5509, Address: 0x248f1c, Func Offset: 0x305c
	// Line 5508, Address: 0x248f24, Func Offset: 0x3064
	// Line 5511, Address: 0x248f28, Func Offset: 0x3068
	// Line 5508, Address: 0x248f30, Func Offset: 0x3070
	// Line 5510, Address: 0x248f34, Func Offset: 0x3074
	// Line 5511, Address: 0x248f38, Func Offset: 0x3078
	// Line 5510, Address: 0x248f3c, Func Offset: 0x307c
	// Line 5511, Address: 0x248f64, Func Offset: 0x30a4
	// Line 5515, Address: 0x248f6c, Func Offset: 0x30ac
	// Line 5517, Address: 0x248f78, Func Offset: 0x30b8
	// Line 5512, Address: 0x248f8c, Func Offset: 0x30cc
	// Line 5517, Address: 0x248f90, Func Offset: 0x30d0
	// Line 5512, Address: 0x248fb4, Func Offset: 0x30f4
	// Line 5517, Address: 0x248fb8, Func Offset: 0x30f8
	// Line 5512, Address: 0x248fc4, Func Offset: 0x3104
	// Line 5517, Address: 0x248fcc, Func Offset: 0x310c
	// Line 5512, Address: 0x248fe0, Func Offset: 0x3120
	// Line 5517, Address: 0x248fe4, Func Offset: 0x3124
	// Line 5536, Address: 0x24911c, Func Offset: 0x325c
	// Line 5537, Address: 0x249128, Func Offset: 0x3268
	// Line 5536, Address: 0x24912c, Func Offset: 0x326c
	// Line 5537, Address: 0x24913c, Func Offset: 0x327c
	// Line 5540, Address: 0x249154, Func Offset: 0x3294
	// Line 5542, Address: 0x249158, Func Offset: 0x3298
	// Line 5540, Address: 0x24915c, Func Offset: 0x329c
	// Line 5545, Address: 0x249168, Func Offset: 0x32a8
	// Line 5540, Address: 0x24916c, Func Offset: 0x32ac
	// Line 5541, Address: 0x249180, Func Offset: 0x32c0
	// Line 5542, Address: 0x249198, Func Offset: 0x32d8
	// Line 5545, Address: 0x2491b8, Func Offset: 0x32f8
	// Line 5547, Address: 0x2491f4, Func Offset: 0x3334
	// Line 5545, Address: 0x2491f8, Func Offset: 0x3338
	// Line 5547, Address: 0x2491fc, Func Offset: 0x333c
	// Line 5548, Address: 0x24920c, Func Offset: 0x334c
	// Line 5547, Address: 0x249210, Func Offset: 0x3350
	// Line 5548, Address: 0x24921c, Func Offset: 0x335c
	// Line 5547, Address: 0x249220, Func Offset: 0x3360
	// Line 5548, Address: 0x249254, Func Offset: 0x3394
	// Line 5550, Address: 0x249264, Func Offset: 0x33a4
	// Line 5552, Address: 0x249294, Func Offset: 0x33d4
	// Line 5553, Address: 0x2492e4, Func Offset: 0x3424
	// Line 5555, Address: 0x24933c, Func Offset: 0x347c
	// Line 5554, Address: 0x249344, Func Offset: 0x3484
	// Line 5555, Address: 0x249348, Func Offset: 0x3488
	// Line 5557, Address: 0x24934c, Func Offset: 0x348c
	// Line 5558, Address: 0x249368, Func Offset: 0x34a8
	// Line 5559, Address: 0x24938c, Func Offset: 0x34cc
	// Line 5560, Address: 0x2493a4, Func Offset: 0x34e4
	// Line 5561, Address: 0x2493ac, Func Offset: 0x34ec
	// Line 5564, Address: 0x2493f0, Func Offset: 0x3530
	// Line 5565, Address: 0x249414, Func Offset: 0x3554
	// Line 5566, Address: 0x24942c, Func Offset: 0x356c
	// Line 5569, Address: 0x249444, Func Offset: 0x3584
	// Line 5570, Address: 0x249450, Func Offset: 0x3590
	// Line 5580, Address: 0x24945c, Func Offset: 0x359c
	// Line 5581, Address: 0x24946c, Func Offset: 0x35ac
	// Line 5584, Address: 0x249478, Func Offset: 0x35b8
	// Line 5589, Address: 0x249484, Func Offset: 0x35c4
	// Line 5590, Address: 0x2494ac, Func Offset: 0x35ec
	// Line 5591, Address: 0x2494c8, Func Offset: 0x3608
	// Line 5592, Address: 0x2494e0, Func Offset: 0x3620
	// Line 5593, Address: 0x2494f4, Func Offset: 0x3634
	// Line 5594, Address: 0x24950c, Func Offset: 0x364c
	// Line 5600, Address: 0x249528, Func Offset: 0x3668
	// Line 5601, Address: 0x24952c, Func Offset: 0x366c
	// Line 5600, Address: 0x249530, Func Offset: 0x3670
	// Line 5602, Address: 0x249534, Func Offset: 0x3674
	// Line 5601, Address: 0x249538, Func Offset: 0x3678
	// Line 5594, Address: 0x24953c, Func Offset: 0x367c
	// Line 5600, Address: 0x249540, Func Offset: 0x3680
	// Line 5601, Address: 0x249544, Func Offset: 0x3684
	// Line 5602, Address: 0x249548, Func Offset: 0x3688
	// Line 5600, Address: 0x24954c, Func Offset: 0x368c
	// Line 5601, Address: 0x249550, Func Offset: 0x3690
	// Line 5602, Address: 0x249554, Func Offset: 0x3694
	// Line 5600, Address: 0x249558, Func Offset: 0x3698
	// Line 5601, Address: 0x24955c, Func Offset: 0x369c
	// Line 5606, Address: 0x249560, Func Offset: 0x36a0
	// Line 5607, Address: 0x24957c, Func Offset: 0x36bc
	// Line 5609, Address: 0x249590, Func Offset: 0x36d0
	// Line 5610, Address: 0x249594, Func Offset: 0x36d4
	// Line 5607, Address: 0x24959c, Func Offset: 0x36dc
	// Line 5610, Address: 0x2495a0, Func Offset: 0x36e0
	// Line 5611, Address: 0x2495c8, Func Offset: 0x3708
	// Line 5612, Address: 0x2495f8, Func Offset: 0x3738
	// Line 5613, Address: 0x249618, Func Offset: 0x3758
	// Line 5614, Address: 0x249630, Func Offset: 0x3770
	// Line 5616, Address: 0x249644, Func Offset: 0x3784
	// Line 5617, Address: 0x24964c, Func Offset: 0x378c
	// Line 5619, Address: 0x249650, Func Offset: 0x3790
	// Line 5620, Address: 0x24965c, Func Offset: 0x379c
	// Line 5621, Address: 0x249660, Func Offset: 0x37a0
	// Line 5622, Address: 0x249674, Func Offset: 0x37b4
	// Line 5630, Address: 0x249688, Func Offset: 0x37c8
	// Line 5622, Address: 0x24968c, Func Offset: 0x37cc
	// Line 5630, Address: 0x249690, Func Offset: 0x37d0
	// Line 5622, Address: 0x249694, Func Offset: 0x37d4
	// Line 5630, Address: 0x24969c, Func Offset: 0x37dc
	// Line 5622, Address: 0x2496a0, Func Offset: 0x37e0
	// Line 5626, Address: 0x2496a4, Func Offset: 0x37e4
	// Line 5627, Address: 0x2496a8, Func Offset: 0x37e8
	// Line 5625, Address: 0x2496ac, Func Offset: 0x37ec
	// Line 5628, Address: 0x2496b0, Func Offset: 0x37f0
	// Line 5622, Address: 0x2496b8, Func Offset: 0x37f8
	// Line 5628, Address: 0x2496bc, Func Offset: 0x37fc
	// Line 5630, Address: 0x2496c0, Func Offset: 0x3800
	// Line 5626, Address: 0x2496c4, Func Offset: 0x3804
	// Line 5625, Address: 0x2496c8, Func Offset: 0x3808
	// Line 5627, Address: 0x2496cc, Func Offset: 0x380c
	// Line 5626, Address: 0x2496d0, Func Offset: 0x3810
	// Line 5627, Address: 0x2496d4, Func Offset: 0x3814
	// Line 5626, Address: 0x2496d8, Func Offset: 0x3818
	// Line 5628, Address: 0x2496dc, Func Offset: 0x381c
	// Line 5627, Address: 0x2496e0, Func Offset: 0x3820
	// Line 5625, Address: 0x2496e4, Func Offset: 0x3824
	// Line 5628, Address: 0x2496e8, Func Offset: 0x3828
	// Line 5630, Address: 0x249700, Func Offset: 0x3840
	// Line 5632, Address: 0x249724, Func Offset: 0x3864
	// Line 5630, Address: 0x249728, Func Offset: 0x3868
	// Line 5632, Address: 0x24972c, Func Offset: 0x386c
	// Line 5636, Address: 0x249774, Func Offset: 0x38b4
	// Line 5639, Address: 0x2497ac, Func Offset: 0x38ec
	// Line 5643, Address: 0x2497b8, Func Offset: 0x38f8
	// Line 5646, Address: 0x249ce4, Func Offset: 0x3e24
	// Line 5649, Address: 0x249cf0, Func Offset: 0x3e30
	// Line 5652, Address: 0x249db0, Func Offset: 0x3ef0
	// Line 5655, Address: 0x249e54, Func Offset: 0x3f94
	// Line 5658, Address: 0x249ec4, Func Offset: 0x4004
	// Line 5655, Address: 0x249ed0, Func Offset: 0x4010
	// Line 5658, Address: 0x249ed8, Func Offset: 0x4018
	// Line 5661, Address: 0x249f78, Func Offset: 0x40b8
	// Line 5663, Address: 0x24a010, Func Offset: 0x4150
	// Line 5664, Address: 0x24a018, Func Offset: 0x4158
	// Line 5665, Address: 0x24a06c, Func Offset: 0x41ac
	// Line 5666, Address: 0x24a080, Func Offset: 0x41c0
	// Line 5667, Address: 0x24a0e0, Func Offset: 0x4220
	// Line 5670, Address: 0x24a138, Func Offset: 0x4278
	// Line 5674, Address: 0x24a148, Func Offset: 0x4288
	// Line 5677, Address: 0x24a1e0, Func Offset: 0x4320
	// Line 5681, Address: 0x24a238, Func Offset: 0x4378
	// Line 5682, Address: 0x24a250, Func Offset: 0x4390
	// Line 5683, Address: 0x24a258, Func Offset: 0x4398
	// Line 5684, Address: 0x24a27c, Func Offset: 0x43bc
	// Line 5685, Address: 0x24a288, Func Offset: 0x43c8
	// Line 5686, Address: 0x24a324, Func Offset: 0x4464
	// Line 5687, Address: 0x24a374, Func Offset: 0x44b4
	// Line 5686, Address: 0x24a378, Func Offset: 0x44b8
	// Line 5687, Address: 0x24a37c, Func Offset: 0x44bc
	// Line 5686, Address: 0x24a380, Func Offset: 0x44c0
	// Line 5687, Address: 0x24a384, Func Offset: 0x44c4
	// Line 5689, Address: 0x24a388, Func Offset: 0x44c8
	// Line 5690, Address: 0x24a3d0, Func Offset: 0x4510
	// Line 5691, Address: 0x24a3dc, Func Offset: 0x451c
	// Line 5693, Address: 0x24a3e4, Func Offset: 0x4524
	// Line 5694, Address: 0x24a3e8, Func Offset: 0x4528
	// Line 5695, Address: 0x24a3fc, Func Offset: 0x453c
	// Line 5697, Address: 0x24a404, Func Offset: 0x4544
	// Line 5701, Address: 0x24a418, Func Offset: 0x4558
	// Line 5702, Address: 0x24a45c, Func Offset: 0x459c
	// Line 5704, Address: 0x24a460, Func Offset: 0x45a0
	// Line 5707, Address: 0x24a470, Func Offset: 0x45b0
	// Line 5708, Address: 0x24a488, Func Offset: 0x45c8
	// Line 5710, Address: 0x24a52c, Func Offset: 0x466c
	// Line 5711, Address: 0x24a540, Func Offset: 0x4680
	// Line 5713, Address: 0x24a598, Func Offset: 0x46d8
	// Line 5715, Address: 0x24a5b0, Func Offset: 0x46f0
	// Line 5716, Address: 0x24a5b8, Func Offset: 0x46f8
	// Line 5717, Address: 0x24a64c, Func Offset: 0x478c
	// Line 5718, Address: 0x24a658, Func Offset: 0x4798
	// Line 5720, Address: 0x24a6b0, Func Offset: 0x47f0
	// Line 5727, Address: 0x24a6cc, Func Offset: 0x480c
	// Line 5731, Address: 0x24a754, Func Offset: 0x4894
	// Line 5732, Address: 0x24a7a4, Func Offset: 0x48e4
	// Line 5731, Address: 0x24a7a8, Func Offset: 0x48e8
	// Line 5732, Address: 0x24a7ac, Func Offset: 0x48ec
	// Line 5731, Address: 0x24a7b0, Func Offset: 0x48f0
	// Line 5732, Address: 0x24a7b4, Func Offset: 0x48f4
	// Line 5734, Address: 0x24a7b8, Func Offset: 0x48f8
	// Func End, Address: 0x24a7f8, Func Offset: 0x4938
}

// Reset__11zNMENeptuneFv
// Start address: 0x24a800
void zNMENeptune::Reset()
{
	// Line 4630, Address: 0x24a800, Func Offset: 0
	// Line 4631, Address: 0x24a810, Func Offset: 0x10
	// Line 4634, Address: 0x24aa8c, Func Offset: 0x28c
	// Line 4637, Address: 0x24aa98, Func Offset: 0x298
	// Line 4638, Address: 0x24aaf0, Func Offset: 0x2f0
	// Func End, Address: 0x24ab04, Func Offset: 0x304
}

// Destroy__11zNMENeptuneFv
// Start address: 0x24ab10
void zNMENeptune::Destroy()
{
	// Line 4606, Address: 0x24ab10, Func Offset: 0
	// Line 4608, Address: 0x24ab1c, Func Offset: 0xc
	// Line 4611, Address: 0x24ab24, Func Offset: 0x14
	// Line 4612, Address: 0x24ab2c, Func Offset: 0x1c
	// Line 4613, Address: 0x24ab34, Func Offset: 0x24
	// Line 4614, Address: 0x24ab3c, Func Offset: 0x2c
	// Line 4617, Address: 0x24ab58, Func Offset: 0x48
	// Line 4618, Address: 0x24ab68, Func Offset: 0x58
	// Line 4619, Address: 0x24ab78, Func Offset: 0x68
	// Line 4620, Address: 0x24ab7c, Func Offset: 0x6c
	// Line 4626, Address: 0x24ab80, Func Offset: 0x70
	// Line 4627, Address: 0x24ab90, Func Offset: 0x80
	// Func End, Address: 0x24aba0, Func Offset: 0x90
}

// Setup__11zNMENeptuneFv
// Start address: 0x24abb0
void zNMENeptune::Setup()
{
	int32 i;
	int32 currIndex;
	xModelInstance* minst;
	int32 tagidx;
	RpAtomic* atomic;
	int32 whichCollideBody;
	int32 pitchIdx;
	xAnimState* astate;
	RwMatrixTag tempmat[64];
	xQuat tempquat[64];
	xVec3 temptran[64];
	float32 bilinear[2];
	xVec3 butt;
	xVec3 tip;
	int32 samp;
	// Line 4447, Address: 0x24abb0, Func Offset: 0
	// Line 4451, Address: 0x24abe8, Func Offset: 0x38
	// Line 4452, Address: 0x24abec, Func Offset: 0x3c
	// Line 4454, Address: 0x24abf8, Func Offset: 0x48
	// Line 4456, Address: 0x24abfc, Func Offset: 0x4c
	// Line 4455, Address: 0x24ac00, Func Offset: 0x50
	// Line 4457, Address: 0x24ac08, Func Offset: 0x58
	// Line 4461, Address: 0x24ac18, Func Offset: 0x68
	// Line 4462, Address: 0x24ac30, Func Offset: 0x80
	// Line 4461, Address: 0x24ac34, Func Offset: 0x84
	// Line 4462, Address: 0x24ac38, Func Offset: 0x88
	// Line 4467, Address: 0x24ac68, Func Offset: 0xb8
	// Line 4462, Address: 0x24ac6c, Func Offset: 0xbc
	// Line 4467, Address: 0x24ac70, Func Offset: 0xc0
	// Line 4470, Address: 0x24ac7c, Func Offset: 0xcc
	// Line 4471, Address: 0x24ac8c, Func Offset: 0xdc
	// Line 4470, Address: 0x24ac94, Func Offset: 0xe4
	// Line 4471, Address: 0x24ac98, Func Offset: 0xe8
	// Line 4476, Address: 0x24acb0, Func Offset: 0x100
	// Line 4471, Address: 0x24acb4, Func Offset: 0x104
	// Line 4476, Address: 0x24acb8, Func Offset: 0x108
	// Line 4479, Address: 0x24acc4, Func Offset: 0x114
	// Line 4480, Address: 0x24acd4, Func Offset: 0x124
	// Line 4481, Address: 0x24ace4, Func Offset: 0x134
	// Line 4482, Address: 0x24acf4, Func Offset: 0x144
	// Line 4485, Address: 0x24ad04, Func Offset: 0x154
	// Line 4486, Address: 0x24ad14, Func Offset: 0x164
	// Line 4487, Address: 0x24ad24, Func Offset: 0x174
	// Line 4488, Address: 0x24ad34, Func Offset: 0x184
	// Line 4489, Address: 0x24ad44, Func Offset: 0x194
	// Line 4490, Address: 0x24ad54, Func Offset: 0x1a4
	// Line 4491, Address: 0x24ad64, Func Offset: 0x1b4
	// Line 4492, Address: 0x24ad74, Func Offset: 0x1c4
	// Line 4493, Address: 0x24ad84, Func Offset: 0x1d4
	// Line 4494, Address: 0x24ad94, Func Offset: 0x1e4
	// Line 4495, Address: 0x24ada4, Func Offset: 0x1f4
	// Line 4496, Address: 0x24adb4, Func Offset: 0x204
	// Line 4497, Address: 0x24adc4, Func Offset: 0x214
	// Line 4498, Address: 0x24add4, Func Offset: 0x224
	// Line 4499, Address: 0x24ade4, Func Offset: 0x234
	// Line 4500, Address: 0x24adf8, Func Offset: 0x248
	// Line 4504, Address: 0x24ae08, Func Offset: 0x258
	// Line 4505, Address: 0x24ae18, Func Offset: 0x268
	// Line 4506, Address: 0x24ae20, Func Offset: 0x270
	// Line 4511, Address: 0x24ae2c, Func Offset: 0x27c
	// Line 4512, Address: 0x24ae38, Func Offset: 0x288
	// Line 4513, Address: 0x24ae40, Func Offset: 0x290
	// Line 4515, Address: 0x24ae50, Func Offset: 0x2a0
	// Line 4518, Address: 0x24ae60, Func Offset: 0x2b0
	// Line 4519, Address: 0x24ae64, Func Offset: 0x2b4
	// Line 4522, Address: 0x24ae6c, Func Offset: 0x2bc
	// Line 4518, Address: 0x24ae70, Func Offset: 0x2c0
	// Line 4519, Address: 0x24ae7c, Func Offset: 0x2cc
	// Line 4523, Address: 0x24ae80, Func Offset: 0x2d0
	// Line 4525, Address: 0x24ae8c, Func Offset: 0x2dc
	// Line 4524, Address: 0x24ae90, Func Offset: 0x2e0
	// Line 4526, Address: 0x24ae94, Func Offset: 0x2e4
	// Line 4527, Address: 0x24aec4, Func Offset: 0x314
	// Line 4528, Address: 0x24aecc, Func Offset: 0x31c
	// Line 4529, Address: 0x24aed8, Func Offset: 0x328
	// Line 4534, Address: 0x24aee0, Func Offset: 0x330
	// Line 4542, Address: 0x24aee4, Func Offset: 0x334
	// Line 4531, Address: 0x24aee8, Func Offset: 0x338
	// Line 4533, Address: 0x24aeec, Func Offset: 0x33c
	// Line 4534, Address: 0x24aef0, Func Offset: 0x340
	// Line 4539, Address: 0x24aef4, Func Offset: 0x344
	// Line 4541, Address: 0x24aef8, Func Offset: 0x348
	// Line 4542, Address: 0x24aefc, Func Offset: 0x34c
	// Line 4529, Address: 0x24af04, Func Offset: 0x354
	// Line 4530, Address: 0x24af08, Func Offset: 0x358
	// Line 4531, Address: 0x24af10, Func Offset: 0x360
	// Line 4532, Address: 0x24af18, Func Offset: 0x368
	// Line 4533, Address: 0x24af20, Func Offset: 0x370
	// Line 4534, Address: 0x24af28, Func Offset: 0x378
	// Line 4537, Address: 0x24af30, Func Offset: 0x380
	// Line 4538, Address: 0x24af38, Func Offset: 0x388
	// Line 4539, Address: 0x24af40, Func Offset: 0x390
	// Line 4540, Address: 0x24af48, Func Offset: 0x398
	// Line 4541, Address: 0x24af50, Func Offset: 0x3a0
	// Line 4542, Address: 0x24af58, Func Offset: 0x3a8
	// Line 4545, Address: 0x24af64, Func Offset: 0x3b4
	// Line 4548, Address: 0x24afa4, Func Offset: 0x3f4
	// Line 4553, Address: 0x24afe4, Func Offset: 0x434
	// Line 4557, Address: 0x24b000, Func Offset: 0x450
	// Line 4558, Address: 0x24b030, Func Offset: 0x480
	// Line 4562, Address: 0x24b04c, Func Offset: 0x49c
	// Line 4563, Address: 0x24b050, Func Offset: 0x4a0
	// Line 4562, Address: 0x24b05c, Func Offset: 0x4ac
	// Line 4564, Address: 0x24b064, Func Offset: 0x4b4
	// Line 4562, Address: 0x24b074, Func Offset: 0x4c4
	// Line 4564, Address: 0x24b084, Func Offset: 0x4d4
	// Line 4565, Address: 0x24b090, Func Offset: 0x4e0
	// Line 4570, Address: 0x24b0a8, Func Offset: 0x4f8
	// Line 4571, Address: 0x24b0c0, Func Offset: 0x510
	// Line 4572, Address: 0x24b0d8, Func Offset: 0x528
	// Line 4574, Address: 0x24b0dc, Func Offset: 0x52c
	// Line 4572, Address: 0x24b0e0, Func Offset: 0x530
	// Line 4580, Address: 0x24b0e4, Func Offset: 0x534
	// Line 4572, Address: 0x24b0e8, Func Offset: 0x538
	// Line 4574, Address: 0x24b0ec, Func Offset: 0x53c
	// Line 4573, Address: 0x24b0f0, Func Offset: 0x540
	// Line 4572, Address: 0x24b0f4, Func Offset: 0x544
	// Line 4573, Address: 0x24b100, Func Offset: 0x550
	// Line 4574, Address: 0x24b178, Func Offset: 0x5c8
	// Line 4580, Address: 0x24b1b0, Func Offset: 0x600
	// Line 4581, Address: 0x24b1b4, Func Offset: 0x604
	// Line 4584, Address: 0x24b1f0, Func Offset: 0x640
	// Line 4585, Address: 0x24b208, Func Offset: 0x658
	// Line 4586, Address: 0x24b220, Func Offset: 0x670
	// Line 4587, Address: 0x24b224, Func Offset: 0x674
	// Line 4586, Address: 0x24b228, Func Offset: 0x678
	// Line 4587, Address: 0x24b22c, Func Offset: 0x67c
	// Line 4586, Address: 0x24b230, Func Offset: 0x680
	// Line 4587, Address: 0x24b254, Func Offset: 0x6a4
	// Line 4588, Address: 0x24b25c, Func Offset: 0x6ac
	// Line 4590, Address: 0x24b268, Func Offset: 0x6b8
	// Line 4588, Address: 0x24b26c, Func Offset: 0x6bc
	// Line 4590, Address: 0x24b270, Func Offset: 0x6c0
	// Line 4588, Address: 0x24b274, Func Offset: 0x6c4
	// Line 4590, Address: 0x24b3a4, Func Offset: 0x7f4
	// Line 4593, Address: 0x24b3ac, Func Offset: 0x7fc
	// Line 4596, Address: 0x24b3b4, Func Offset: 0x804
	// Line 4599, Address: 0x24b3d0, Func Offset: 0x820
	// Line 4602, Address: 0x24b58c, Func Offset: 0x9dc
	// Line 4599, Address: 0x24b590, Func Offset: 0x9e0
	// Line 4602, Address: 0x24b5e8, Func Offset: 0xa38
	// Line 4603, Address: 0x24b5f0, Func Offset: 0xa40
	// Func End, Address: 0x24b628, Func Offset: 0xa78
}

// BeamCollide__11zNMENeptuneFP5xRay3PiP5xVec3
// Start address: 0x24b630
uint8 zNMENeptune::BeamCollide(xRay3* beamray, int32* aimedAtKrabs, xVec3* reflectnorm)
{
	xIsect isx;
	xCollis beamcollis;
	xCollis boundcollis;
	xSphere krabSph;
	int32 i;
	xEnt* reflent;
	// Line 4396, Address: 0x24b630, Func Offset: 0
	// Line 4399, Address: 0x24b634, Func Offset: 0x4
	// Line 4396, Address: 0x24b638, Func Offset: 0x8
	// Line 4399, Address: 0x24b65c, Func Offset: 0x2c
	// Line 4400, Address: 0x24b664, Func Offset: 0x34
	// Line 4401, Address: 0x24b684, Func Offset: 0x54
	// Line 4404, Address: 0x24b68c, Func Offset: 0x5c
	// Line 4403, Address: 0x24b690, Func Offset: 0x60
	// Line 4404, Address: 0x24b694, Func Offset: 0x64
	// Line 4405, Address: 0x24b698, Func Offset: 0x68
	// Line 4406, Address: 0x24b6ac, Func Offset: 0x7c
	// Line 4408, Address: 0x24b6d8, Func Offset: 0xa8
	// Line 4409, Address: 0x24b6dc, Func Offset: 0xac
	// Line 4410, Address: 0x24b6e0, Func Offset: 0xb0
	// Line 4408, Address: 0x24b6e4, Func Offset: 0xb4
	// Line 4410, Address: 0x24b6e8, Func Offset: 0xb8
	// Line 4411, Address: 0x24b6f0, Func Offset: 0xc0
	// Line 4413, Address: 0x24b6fc, Func Offset: 0xcc
	// Line 4411, Address: 0x24b704, Func Offset: 0xd4
	// Line 4413, Address: 0x24b708, Func Offset: 0xd8
	// Line 4415, Address: 0x24b764, Func Offset: 0x134
	// Line 4416, Address: 0x24b770, Func Offset: 0x140
	// Line 4415, Address: 0x24b774, Func Offset: 0x144
	// Line 4416, Address: 0x24b778, Func Offset: 0x148
	// Line 4415, Address: 0x24b77c, Func Offset: 0x14c
	// Line 4416, Address: 0x24b784, Func Offset: 0x154
	// Line 4417, Address: 0x24b78c, Func Offset: 0x15c
	// Line 4418, Address: 0x24b7a4, Func Offset: 0x174
	// Line 4420, Address: 0x24b7ac, Func Offset: 0x17c
	// Line 4426, Address: 0x24b7b8, Func Offset: 0x188
	// Line 4428, Address: 0x24b7bc, Func Offset: 0x18c
	// Line 4429, Address: 0x24b7c0, Func Offset: 0x190
	// Line 4428, Address: 0x24b7c8, Func Offset: 0x198
	// Line 4429, Address: 0x24b7cc, Func Offset: 0x19c
	// Line 4430, Address: 0x24b7d8, Func Offset: 0x1a8
	// Line 4436, Address: 0x24b800, Func Offset: 0x1d0
	// Line 4437, Address: 0x24b80c, Func Offset: 0x1dc
	// Line 4438, Address: 0x24b85c, Func Offset: 0x22c
	// Line 4439, Address: 0x24b868, Func Offset: 0x238
	// Line 4441, Address: 0x24b870, Func Offset: 0x240
	// Line 4443, Address: 0x24b880, Func Offset: 0x250
	// Line 4444, Address: 0x24b884, Func Offset: 0x254
	// Func End, Address: 0x24b8a4, Func Offset: 0x274
}

// BossCamSetTargets__11zNMENeptuneFv
// Start address: 0x24b8b0
void zNMENeptune::BossCamSetTargets()
{
	float32 dx;
	float32 dz;
	float32 outlerp;
	// Line 4361, Address: 0x24b8b0, Func Offset: 0
	// Line 4370, Address: 0x24b8c4, Func Offset: 0x14
	// Line 4361, Address: 0x24b8cc, Func Offset: 0x1c
	// Line 4370, Address: 0x24b8d0, Func Offset: 0x20
	// Line 4369, Address: 0x24b8d4, Func Offset: 0x24
	// Line 4361, Address: 0x24b8d8, Func Offset: 0x28
	// Line 4367, Address: 0x24b8e8, Func Offset: 0x38
	// Line 4361, Address: 0x24b8ec, Func Offset: 0x3c
	// Line 4367, Address: 0x24b8f0, Func Offset: 0x40
	// Line 4368, Address: 0x24b8f8, Func Offset: 0x48
	// Line 4367, Address: 0x24b8fc, Func Offset: 0x4c
	// Line 4368, Address: 0x24b900, Func Offset: 0x50
	// Line 4369, Address: 0x24b904, Func Offset: 0x54
	// Line 4370, Address: 0x24b918, Func Offset: 0x68
	// Line 4374, Address: 0x24b934, Func Offset: 0x84
	// Line 4375, Address: 0x24b938, Func Offset: 0x88
	// Line 4377, Address: 0x24b940, Func Offset: 0x90
	// Line 4378, Address: 0x24b944, Func Offset: 0x94
	// Line 4377, Address: 0x24b948, Func Offset: 0x98
	// Line 4380, Address: 0x24b94c, Func Offset: 0x9c
	// Line 4378, Address: 0x24b950, Func Offset: 0xa0
	// Line 4375, Address: 0x24b954, Func Offset: 0xa4
	// Line 4380, Address: 0x24b958, Func Offset: 0xa8
	// Line 4378, Address: 0x24b95c, Func Offset: 0xac
	// Line 4380, Address: 0x24b960, Func Offset: 0xb0
	// Line 4377, Address: 0x24b964, Func Offset: 0xb4
	// Line 4379, Address: 0x24b968, Func Offset: 0xb8
	// Line 4380, Address: 0x24b970, Func Offset: 0xc0
	// Line 4381, Address: 0x24b978, Func Offset: 0xc8
	// Line 4382, Address: 0x24b990, Func Offset: 0xe0
	// Line 4383, Address: 0x24b9c4, Func Offset: 0x114
	// Line 4391, Address: 0x24b9e4, Func Offset: 0x134
	// Line 4392, Address: 0x24b9f8, Func Offset: 0x148
	// Line 4373, Address: 0x24ba04, Func Offset: 0x154
	// Line 4392, Address: 0x24ba0c, Func Offset: 0x15c
	// Func End, Address: 0x24ba60, Func Offset: 0x1b0
}

// PaintDecalOnPlayer__11zNMENeptuneFv
// Start address: 0x24ba60
void zNMENeptune::PaintDecalOnPlayer()
{
	emit_context ec;
	// Line 4309, Address: 0x24ba60, Func Offset: 0
	// Line 4311, Address: 0x24ba64, Func Offset: 0x4
	// Line 4309, Address: 0x24ba68, Func Offset: 0x8
	// Line 4311, Address: 0x24ba6c, Func Offset: 0xc
	// Line 4309, Address: 0x24ba70, Func Offset: 0x10
	// Line 4311, Address: 0x24ba78, Func Offset: 0x18
	// Line 4312, Address: 0x24ba80, Func Offset: 0x20
	// Line 4322, Address: 0x24ba84, Func Offset: 0x24
	// Line 4312, Address: 0x24ba88, Func Offset: 0x28
	// Line 4323, Address: 0x24ba8c, Func Offset: 0x2c
	// Line 4312, Address: 0x24ba90, Func Offset: 0x30
	// Line 4321, Address: 0x24ba94, Func Offset: 0x34
	// Line 4313, Address: 0x24ba98, Func Offset: 0x38
	// Line 4314, Address: 0x24ba9c, Func Offset: 0x3c
	// Line 4313, Address: 0x24baa0, Func Offset: 0x40
	// Line 4322, Address: 0x24baa4, Func Offset: 0x44
	// Line 4315, Address: 0x24baa8, Func Offset: 0x48
	// Line 4318, Address: 0x24baac, Func Offset: 0x4c
	// Line 4315, Address: 0x24bab0, Func Offset: 0x50
	// Line 4323, Address: 0x24bab4, Func Offset: 0x54
	// Line 4316, Address: 0x24bab8, Func Offset: 0x58
	// Line 4325, Address: 0x24babc, Func Offset: 0x5c
	// Line 4316, Address: 0x24bac0, Func Offset: 0x60
	// Line 4325, Address: 0x24bac4, Func Offset: 0x64
	// Line 4317, Address: 0x24bac8, Func Offset: 0x68
	// Line 4325, Address: 0x24bacc, Func Offset: 0x6c
	// Line 4317, Address: 0x24bad0, Func Offset: 0x70
	// Line 4319, Address: 0x24badc, Func Offset: 0x7c
	// Line 4324, Address: 0x24bae0, Func Offset: 0x80
	// Line 4319, Address: 0x24bae8, Func Offset: 0x88
	// Line 4322, Address: 0x24baec, Func Offset: 0x8c
	// Line 4323, Address: 0x24baf0, Func Offset: 0x90
	// Line 4324, Address: 0x24baf4, Func Offset: 0x94
	// Line 4321, Address: 0x24baf8, Func Offset: 0x98
	// Line 4320, Address: 0x24bb00, Func Offset: 0xa0
	// Line 4325, Address: 0x24bb04, Func Offset: 0xa4
	// Line 4326, Address: 0x24bb0c, Func Offset: 0xac
	// Func End, Address: 0x24bb1c, Func Offset: 0xbc
}

// FireFXUpdate__11zNMENeptuneFf
// Start address: 0x24bb20
void zNMENeptune::FireFXUpdate(float32 dt)
{
	int32 i;
	uint8 inFireLoop;
	xVec3 worldTipAvg;
	RwMatrixTag tmproot;
	xVec3 targetdir;
	xVec3 tridentdir;
	EmitContext emitctx;
	float32 avgDot;
	int32 oldParCount;
	NMECfgNeptuneAttack* currAtk;
	_tagLightningAdd ltadd;
	float32 beamlerp;
	float32 feelAngle;
	float32 feelerlerp;
	xMat4x3 rotmat;
	int32 j;
	xVec3 start;
	xVec3 end;
	zLightningRing* currLtRing;
	zLightningRing* currLtRing;
	float32 poslerp;
	xVec3 tempEnd;
	xVec3 ringEnds[2];
	// Line 4008, Address: 0x24bb20, Func Offset: 0
	// Line 4011, Address: 0x24bb24, Func Offset: 0x4
	// Line 4008, Address: 0x24bb28, Func Offset: 0x8
	// Line 4011, Address: 0x24bb60, Func Offset: 0x40
	// Line 4013, Address: 0x24bb6c, Func Offset: 0x4c
	// Line 4018, Address: 0x24bbb0, Func Offset: 0x90
	// Line 4023, Address: 0x24bbbc, Func Offset: 0x9c
	// Line 4018, Address: 0x24bbc4, Func Offset: 0xa4
	// Line 4022, Address: 0x24bbc8, Func Offset: 0xa8
	// Line 4023, Address: 0x24bc48, Func Offset: 0x128
	// Line 4024, Address: 0x24bc6c, Func Offset: 0x14c
	// Line 4025, Address: 0x24bc94, Func Offset: 0x174
	// Line 4026, Address: 0x24bd1c, Func Offset: 0x1fc
	// Line 4027, Address: 0x24bd28, Func Offset: 0x208
	// Line 4028, Address: 0x24bd34, Func Offset: 0x214
	// Line 4029, Address: 0x24bd4c, Func Offset: 0x22c
	// Line 4031, Address: 0x24bd54, Func Offset: 0x234
	// Line 4029, Address: 0x24bd58, Func Offset: 0x238
	// Line 4031, Address: 0x24bd5c, Func Offset: 0x23c
	// Line 4032, Address: 0x24bd68, Func Offset: 0x248
	// Line 4036, Address: 0x24bd6c, Func Offset: 0x24c
	// Line 4035, Address: 0x24bd70, Func Offset: 0x250
	// Line 4036, Address: 0x24bd78, Func Offset: 0x258
	// Line 4035, Address: 0x24bd7c, Func Offset: 0x25c
	// Line 4036, Address: 0x24bd80, Func Offset: 0x260
	// Line 4035, Address: 0x24bd84, Func Offset: 0x264
	// Line 4036, Address: 0x24bd8c, Func Offset: 0x26c
	// Line 4037, Address: 0x24bda0, Func Offset: 0x280
	// Line 4038, Address: 0x24bda4, Func Offset: 0x284
	// Line 4037, Address: 0x24bda8, Func Offset: 0x288
	// Line 4038, Address: 0x24bdac, Func Offset: 0x28c
	// Line 4037, Address: 0x24bdb0, Func Offset: 0x290
	// Line 4038, Address: 0x24bdd8, Func Offset: 0x2b8
	// Line 4039, Address: 0x24bde0, Func Offset: 0x2c0
	// Line 4040, Address: 0x24be20, Func Offset: 0x300
	// Line 4039, Address: 0x24be2c, Func Offset: 0x30c
	// Line 4040, Address: 0x24be50, Func Offset: 0x330
	// Line 4046, Address: 0x24bea0, Func Offset: 0x380
	// Line 4047, Address: 0x24bea4, Func Offset: 0x384
	// Line 4046, Address: 0x24bea8, Func Offset: 0x388
	// Line 4047, Address: 0x24becc, Func Offset: 0x3ac
	// Line 4046, Address: 0x24bed0, Func Offset: 0x3b0
	// Line 4047, Address: 0x24bf18, Func Offset: 0x3f8
	// Line 4048, Address: 0x24bf20, Func Offset: 0x400
	// Line 4049, Address: 0x24bf3c, Func Offset: 0x41c
	// Line 4048, Address: 0x24bf40, Func Offset: 0x420
	// Line 4049, Address: 0x24bf84, Func Offset: 0x464
	// Line 4052, Address: 0x24bf8c, Func Offset: 0x46c
	// Line 4049, Address: 0x24bf90, Func Offset: 0x470
	// Line 4052, Address: 0x24bf94, Func Offset: 0x474
	// Line 4054, Address: 0x24bf9c, Func Offset: 0x47c
	// Line 4053, Address: 0x24bfa4, Func Offset: 0x484
	// Line 4052, Address: 0x24bfa8, Func Offset: 0x488
	// Line 4053, Address: 0x24bfb4, Func Offset: 0x494
	// Line 4054, Address: 0x24bfcc, Func Offset: 0x4ac
	// Line 4057, Address: 0x24bfd8, Func Offset: 0x4b8
	// Line 4060, Address: 0x24bfe8, Func Offset: 0x4c8
	// Line 4057, Address: 0x24bfec, Func Offset: 0x4cc
	// Line 4060, Address: 0x24bff0, Func Offset: 0x4d0
	// Line 4059, Address: 0x24bffc, Func Offset: 0x4dc
	// Line 4060, Address: 0x24c000, Func Offset: 0x4e0
	// Line 4059, Address: 0x24c004, Func Offset: 0x4e4
	// Line 4060, Address: 0x24c008, Func Offset: 0x4e8
	// Line 4059, Address: 0x24c00c, Func Offset: 0x4ec
	// Line 4061, Address: 0x24c010, Func Offset: 0x4f0
	// Line 4059, Address: 0x24c014, Func Offset: 0x4f4
	// Line 4060, Address: 0x24c018, Func Offset: 0x4f8
	// Line 4057, Address: 0x24c01c, Func Offset: 0x4fc
	// Line 4061, Address: 0x24c020, Func Offset: 0x500
	// Line 4057, Address: 0x24c024, Func Offset: 0x504
	// Line 4060, Address: 0x24c028, Func Offset: 0x508
	// Line 4059, Address: 0x24c02c, Func Offset: 0x50c
	// Line 4060, Address: 0x24c030, Func Offset: 0x510
	// Line 4059, Address: 0x24c034, Func Offset: 0x514
	// Line 4057, Address: 0x24c038, Func Offset: 0x518
	// Line 4059, Address: 0x24c040, Func Offset: 0x520
	// Line 4060, Address: 0x24c04c, Func Offset: 0x52c
	// Line 4061, Address: 0x24c054, Func Offset: 0x534
	// Line 4060, Address: 0x24c058, Func Offset: 0x538
	// Line 4059, Address: 0x24c060, Func Offset: 0x540
	// Line 4060, Address: 0x24c06c, Func Offset: 0x54c
	// Line 4061, Address: 0x24c070, Func Offset: 0x550
	// Line 4060, Address: 0x24c074, Func Offset: 0x554
	// Line 4061, Address: 0x24c084, Func Offset: 0x564
	// Line 4060, Address: 0x24c088, Func Offset: 0x568
	// Line 4061, Address: 0x24c0bc, Func Offset: 0x59c
	// Line 4060, Address: 0x24c0c8, Func Offset: 0x5a8
	// Line 4061, Address: 0x24c0d0, Func Offset: 0x5b0
	// Line 4060, Address: 0x24c0d8, Func Offset: 0x5b8
	// Line 4061, Address: 0x24c0e8, Func Offset: 0x5c8
	// Line 4060, Address: 0x24c0f8, Func Offset: 0x5d8
	// Line 4061, Address: 0x24c0fc, Func Offset: 0x5dc
	// Line 4060, Address: 0x24c100, Func Offset: 0x5e0
	// Line 4061, Address: 0x24c104, Func Offset: 0x5e4
	// Line 4060, Address: 0x24c114, Func Offset: 0x5f4
	// Line 4061, Address: 0x24c118, Func Offset: 0x5f8
	// Line 4060, Address: 0x24c120, Func Offset: 0x600
	// Line 4061, Address: 0x24c128, Func Offset: 0x608
	// Line 4060, Address: 0x24c130, Func Offset: 0x610
	// Line 4061, Address: 0x24c138, Func Offset: 0x618
	// Line 4060, Address: 0x24c13c, Func Offset: 0x61c
	// Line 4061, Address: 0x24c140, Func Offset: 0x620
	// Line 4060, Address: 0x24c144, Func Offset: 0x624
	// Line 4061, Address: 0x24c148, Func Offset: 0x628
	// Line 4065, Address: 0x24c168, Func Offset: 0x648
	// Line 4066, Address: 0x24c17c, Func Offset: 0x65c
	// Line 4067, Address: 0x24c184, Func Offset: 0x664
	// Line 4061, Address: 0x24c18c, Func Offset: 0x66c
	// Line 4065, Address: 0x24c19c, Func Offset: 0x67c
	// Line 4066, Address: 0x24c1c0, Func Offset: 0x6a0
	// Line 4065, Address: 0x24c1c8, Func Offset: 0x6a8
	// Line 4066, Address: 0x24c1cc, Func Offset: 0x6ac
	// Line 4065, Address: 0x24c1e0, Func Offset: 0x6c0
	// Line 4066, Address: 0x24c1e4, Func Offset: 0x6c4
	// Line 4067, Address: 0x24c1e8, Func Offset: 0x6c8
	// Line 4068, Address: 0x24c1f0, Func Offset: 0x6d0
	// Line 4069, Address: 0x24c1fc, Func Offset: 0x6dc
	// Line 4070, Address: 0x24c208, Func Offset: 0x6e8
	// Line 4071, Address: 0x24c20c, Func Offset: 0x6ec
	// Line 4072, Address: 0x24c210, Func Offset: 0x6f0
	// Line 4073, Address: 0x24c214, Func Offset: 0x6f4
	// Line 4069, Address: 0x24c218, Func Offset: 0x6f8
	// Line 4070, Address: 0x24c21c, Func Offset: 0x6fc
	// Line 4069, Address: 0x24c220, Func Offset: 0x700
	// Line 4071, Address: 0x24c224, Func Offset: 0x704
	// Line 4072, Address: 0x24c228, Func Offset: 0x708
	// Line 4069, Address: 0x24c22c, Func Offset: 0x70c
	// Line 4073, Address: 0x24c230, Func Offset: 0x710
	// Line 4069, Address: 0x24c234, Func Offset: 0x714
	// Line 4070, Address: 0x24c238, Func Offset: 0x718
	// Line 4071, Address: 0x24c240, Func Offset: 0x720
	// Line 4070, Address: 0x24c244, Func Offset: 0x724
	// Line 4071, Address: 0x24c248, Func Offset: 0x728
	// Line 4072, Address: 0x24c24c, Func Offset: 0x72c
	// Line 4071, Address: 0x24c250, Func Offset: 0x730
	// Line 4072, Address: 0x24c254, Func Offset: 0x734
	// Line 4073, Address: 0x24c258, Func Offset: 0x738
	// Line 4072, Address: 0x24c25c, Func Offset: 0x73c
	// Line 4073, Address: 0x24c260, Func Offset: 0x740
	// Line 4074, Address: 0x24c264, Func Offset: 0x744
	// Line 4073, Address: 0x24c268, Func Offset: 0x748
	// Line 4074, Address: 0x24c26c, Func Offset: 0x74c
	// Line 4076, Address: 0x24c278, Func Offset: 0x758
	// Line 4078, Address: 0x24c29c, Func Offset: 0x77c
	// Line 4080, Address: 0x24c2b8, Func Offset: 0x798
	// Line 4081, Address: 0x24c2c0, Func Offset: 0x7a0
	// Line 4086, Address: 0x24c2c4, Func Offset: 0x7a4
	// Line 4085, Address: 0x24c2c8, Func Offset: 0x7a8
	// Line 4086, Address: 0x24c2d0, Func Offset: 0x7b0
	// Line 4085, Address: 0x24c2d4, Func Offset: 0x7b4
	// Line 4086, Address: 0x24c2d8, Func Offset: 0x7b8
	// Line 4091, Address: 0x24c2f4, Func Offset: 0x7d4
	// Line 4092, Address: 0x24c310, Func Offset: 0x7f0
	// Line 4093, Address: 0x24c320, Func Offset: 0x800
	// Line 4095, Address: 0x24c324, Func Offset: 0x804
	// Line 4092, Address: 0x24c330, Func Offset: 0x810
	// Line 4093, Address: 0x24c334, Func Offset: 0x814
	// Line 4092, Address: 0x24c340, Func Offset: 0x820
	// Line 4093, Address: 0x24c34c, Func Offset: 0x82c
	// Line 4094, Address: 0x24c37c, Func Offset: 0x85c
	// Line 4095, Address: 0x24c390, Func Offset: 0x870
	// Line 4096, Address: 0x24c398, Func Offset: 0x878
	// Line 4100, Address: 0x24c3e4, Func Offset: 0x8c4
	// Line 4101, Address: 0x24c3e8, Func Offset: 0x8c8
	// Line 4100, Address: 0x24c3ec, Func Offset: 0x8cc
	// Line 4096, Address: 0x24c3f0, Func Offset: 0x8d0
	// Line 4100, Address: 0x24c3f4, Func Offset: 0x8d4
	// Line 4101, Address: 0x24c3f8, Func Offset: 0x8d8
	// Line 4100, Address: 0x24c408, Func Offset: 0x8e8
	// Line 4101, Address: 0x24c414, Func Offset: 0x8f4
	// Line 4103, Address: 0x24c424, Func Offset: 0x904
	// Line 4104, Address: 0x24c428, Func Offset: 0x908
	// Line 4103, Address: 0x24c42c, Func Offset: 0x90c
	// Line 4104, Address: 0x24c430, Func Offset: 0x910
	// Line 4103, Address: 0x24c434, Func Offset: 0x914
	// Line 4104, Address: 0x24c438, Func Offset: 0x918
	// Line 4103, Address: 0x24c444, Func Offset: 0x924
	// Line 4104, Address: 0x24c450, Func Offset: 0x930
	// Line 4108, Address: 0x24c460, Func Offset: 0x940
	// Line 4112, Address: 0x24c474, Func Offset: 0x954
	// Line 4110, Address: 0x24c478, Func Offset: 0x958
	// Line 4112, Address: 0x24c484, Func Offset: 0x964
	// Line 4110, Address: 0x24c488, Func Offset: 0x968
	// Line 4112, Address: 0x24c48c, Func Offset: 0x96c
	// Line 4110, Address: 0x24c498, Func Offset: 0x978
	// Line 4112, Address: 0x24c49c, Func Offset: 0x97c
	// Line 4114, Address: 0x24c4a4, Func Offset: 0x984
	// Line 4115, Address: 0x24c4ac, Func Offset: 0x98c
	// Line 4120, Address: 0x24c4b4, Func Offset: 0x994
	// Line 4121, Address: 0x24c4c4, Func Offset: 0x9a4
	// Line 4127, Address: 0x24c4c8, Func Offset: 0x9a8
	// Line 4121, Address: 0x24c4cc, Func Offset: 0x9ac
	// Line 4124, Address: 0x24c4d0, Func Offset: 0x9b0
	// Line 4122, Address: 0x24c4d4, Func Offset: 0x9b4
	// Line 4124, Address: 0x24c4d8, Func Offset: 0x9b8
	// Line 4123, Address: 0x24c4dc, Func Offset: 0x9bc
	// Line 4124, Address: 0x24c4e0, Func Offset: 0x9c0
	// Line 4125, Address: 0x24c4e4, Func Offset: 0x9c4
	// Line 4126, Address: 0x24c4e8, Func Offset: 0x9c8
	// Line 4125, Address: 0x24c4ec, Func Offset: 0x9cc
	// Line 4127, Address: 0x24c4f0, Func Offset: 0x9d0
	// Line 4135, Address: 0x24c4f4, Func Offset: 0x9d4
	// Line 4127, Address: 0x24c4f8, Func Offset: 0x9d8
	// Line 4128, Address: 0x24c4fc, Func Offset: 0x9dc
	// Line 4130, Address: 0x24c500, Func Offset: 0x9e0
	// Line 4128, Address: 0x24c504, Func Offset: 0x9e4
	// Line 4129, Address: 0x24c508, Func Offset: 0x9e8
	// Line 4136, Address: 0x24c50c, Func Offset: 0x9ec
	// Line 4129, Address: 0x24c510, Func Offset: 0x9f0
	// Line 4130, Address: 0x24c514, Func Offset: 0x9f4
	// Line 4139, Address: 0x24c518, Func Offset: 0x9f8
	// Line 4130, Address: 0x24c51c, Func Offset: 0x9fc
	// Line 4131, Address: 0x24c520, Func Offset: 0xa00
	// Line 4133, Address: 0x24c524, Func Offset: 0xa04
	// Line 4131, Address: 0x24c528, Func Offset: 0xa08
	// Line 4133, Address: 0x24c52c, Func Offset: 0xa0c
	// Line 4140, Address: 0x24c530, Func Offset: 0xa10
	// Line 4141, Address: 0x24c534, Func Offset: 0xa14
	// Line 4140, Address: 0x24c538, Func Offset: 0xa18
	// Line 4131, Address: 0x24c53c, Func Offset: 0xa1c
	// Line 4132, Address: 0x24c56c, Func Offset: 0xa4c
	// Line 4134, Address: 0x24c570, Func Offset: 0xa50
	// Line 4142, Address: 0x24c584, Func Offset: 0xa64
	// Line 4137, Address: 0x24c588, Func Offset: 0xa68
	// Line 4142, Address: 0x24c58c, Func Offset: 0xa6c
	// Line 4138, Address: 0x24c590, Func Offset: 0xa70
	// Line 4145, Address: 0x24c594, Func Offset: 0xa74
	// Line 4149, Address: 0x24c5a0, Func Offset: 0xa80
	// Line 4148, Address: 0x24c5a4, Func Offset: 0xa84
	// Line 4151, Address: 0x24c5a8, Func Offset: 0xa88
	// Line 4150, Address: 0x24c5ac, Func Offset: 0xa8c
	// Line 4149, Address: 0x24c5b0, Func Offset: 0xa90
	// Line 4151, Address: 0x24c5b4, Func Offset: 0xa94
	// Line 4152, Address: 0x24c5c0, Func Offset: 0xaa0
	// Line 4153, Address: 0x24c5d0, Func Offset: 0xab0
	// Line 4158, Address: 0x24c5d8, Func Offset: 0xab8
	// Line 4159, Address: 0x24c5dc, Func Offset: 0xabc
	// Line 4158, Address: 0x24c5e0, Func Offset: 0xac0
	// Line 4159, Address: 0x24c5e4, Func Offset: 0xac4
	// Line 4158, Address: 0x24c5e8, Func Offset: 0xac8
	// Line 4159, Address: 0x24c5f8, Func Offset: 0xad8
	// Line 4161, Address: 0x24c654, Func Offset: 0xb34
	// Line 4160, Address: 0x24c65c, Func Offset: 0xb3c
	// Line 4161, Address: 0x24c69c, Func Offset: 0xb7c
	// Line 4164, Address: 0x24c6a8, Func Offset: 0xb88
	// Line 4165, Address: 0x24c6c0, Func Offset: 0xba0
	// Line 4166, Address: 0x24c6d0, Func Offset: 0xbb0
	// Line 4170, Address: 0x24c71c, Func Offset: 0xbfc
	// Line 4173, Address: 0x24c734, Func Offset: 0xc14
	// Line 4175, Address: 0x24c740, Func Offset: 0xc20
	// Line 4176, Address: 0x24c768, Func Offset: 0xc48
	// Line 4177, Address: 0x24c794, Func Offset: 0xc74
	// Line 4179, Address: 0x24c7a8, Func Offset: 0xc88
	// Line 4177, Address: 0x24c7ac, Func Offset: 0xc8c
	// Line 4178, Address: 0x24c7b8, Func Offset: 0xc98
	// Line 4179, Address: 0x24c7bc, Func Offset: 0xc9c
	// Line 4180, Address: 0x24c7d0, Func Offset: 0xcb0
	// Line 4179, Address: 0x24c7d4, Func Offset: 0xcb4
	// Line 4180, Address: 0x24c7dc, Func Offset: 0xcbc
	// Line 4182, Address: 0x24c7f0, Func Offset: 0xcd0
	// Line 4180, Address: 0x24c7f4, Func Offset: 0xcd4
	// Line 4181, Address: 0x24c800, Func Offset: 0xce0
	// Line 4182, Address: 0x24c804, Func Offset: 0xce4
	// Line 4185, Address: 0x24c810, Func Offset: 0xcf0
	// Line 4182, Address: 0x24c814, Func Offset: 0xcf4
	// Line 4185, Address: 0x24c818, Func Offset: 0xcf8
	// Line 4182, Address: 0x24c81c, Func Offset: 0xcfc
	// Line 4185, Address: 0x24c820, Func Offset: 0xd00
	// Line 4183, Address: 0x24c828, Func Offset: 0xd08
	// Line 4184, Address: 0x24c82c, Func Offset: 0xd0c
	// Line 4185, Address: 0x24c830, Func Offset: 0xd10
	// Line 4186, Address: 0x24c834, Func Offset: 0xd14
	// Line 4182, Address: 0x24c838, Func Offset: 0xd18
	// Line 4183, Address: 0x24c844, Func Offset: 0xd24
	// Line 4184, Address: 0x24c848, Func Offset: 0xd28
	// Line 4186, Address: 0x24c84c, Func Offset: 0xd2c
	// Line 4188, Address: 0x24c858, Func Offset: 0xd38
	// Line 4189, Address: 0x24c864, Func Offset: 0xd44
	// Line 4188, Address: 0x24c86c, Func Offset: 0xd4c
	// Line 4189, Address: 0x24c870, Func Offset: 0xd50
	// Line 4190, Address: 0x24c878, Func Offset: 0xd58
	// Line 4191, Address: 0x24c88c, Func Offset: 0xd6c
	// Line 4190, Address: 0x24c890, Func Offset: 0xd70
	// Line 4196, Address: 0x24c894, Func Offset: 0xd74
	// Line 4194, Address: 0x24c898, Func Offset: 0xd78
	// Line 4196, Address: 0x24c89c, Func Offset: 0xd7c
	// Line 4190, Address: 0x24c8a0, Func Offset: 0xd80
	// Line 4194, Address: 0x24c8a4, Func Offset: 0xd84
	// Line 4196, Address: 0x24c8bc, Func Offset: 0xd9c
	// Line 4198, Address: 0x24c914, Func Offset: 0xdf4
	// Line 4199, Address: 0x24c944, Func Offset: 0xe24
	// Line 4200, Address: 0x24c998, Func Offset: 0xe78
	// Line 4201, Address: 0x24c9a4, Func Offset: 0xe84
	// Line 4202, Address: 0x24c9ac, Func Offset: 0xe8c
	// Line 4200, Address: 0x24c9b0, Func Offset: 0xe90
	// Line 4201, Address: 0x24c9b8, Func Offset: 0xe98
	// Line 4202, Address: 0x24c9c4, Func Offset: 0xea4
	// Line 4203, Address: 0x24c9d0, Func Offset: 0xeb0
	// Line 4205, Address: 0x24c9f0, Func Offset: 0xed0
	// Line 4206, Address: 0x24c9f8, Func Offset: 0xed8
	// Line 4205, Address: 0x24c9fc, Func Offset: 0xedc
	// Line 4206, Address: 0x24ca14, Func Offset: 0xef4
	// Line 4207, Address: 0x24ca68, Func Offset: 0xf48
	// Line 4217, Address: 0x24ca7c, Func Offset: 0xf5c
	// Line 4207, Address: 0x24ca88, Func Offset: 0xf68
	// Line 4217, Address: 0x24ca8c, Func Offset: 0xf6c
	// Line 4207, Address: 0x24ca90, Func Offset: 0xf70
	// Line 4211, Address: 0x24ca94, Func Offset: 0xf74
	// Line 4212, Address: 0x24cab4, Func Offset: 0xf94
	// Line 4213, Address: 0x24cacc, Func Offset: 0xfac
	// Line 4214, Address: 0x24cae4, Func Offset: 0xfc4
	// Line 4215, Address: 0x24cafc, Func Offset: 0xfdc
	// Line 4216, Address: 0x24cb14, Func Offset: 0xff4
	// Line 4217, Address: 0x24cb28, Func Offset: 0x1008
	// Line 4218, Address: 0x24cb34, Func Offset: 0x1014
	// Line 4222, Address: 0x24cb54, Func Offset: 0x1034
	// Line 4227, Address: 0x24cb64, Func Offset: 0x1044
	// Line 4232, Address: 0x24cb9c, Func Offset: 0x107c
	// Line 4231, Address: 0x24cba0, Func Offset: 0x1080
	// Line 4232, Address: 0x24cba4, Func Offset: 0x1084
	// Line 4231, Address: 0x24cba8, Func Offset: 0x1088
	// Line 4233, Address: 0x24cbb4, Func Offset: 0x1094
	// Line 4235, Address: 0x24cbc0, Func Offset: 0x10a0
	// Line 4234, Address: 0x24cbc4, Func Offset: 0x10a4
	// Line 4235, Address: 0x24cbc8, Func Offset: 0x10a8
	// Line 4236, Address: 0x24cbcc, Func Offset: 0x10ac
	// Line 4235, Address: 0x24cbd0, Func Offset: 0x10b0
	// Line 4236, Address: 0x24cbd4, Func Offset: 0x10b4
	// Line 4238, Address: 0x24cbd8, Func Offset: 0x10b8
	// Line 4236, Address: 0x24cbdc, Func Offset: 0x10bc
	// Line 4239, Address: 0x24cbe0, Func Offset: 0x10c0
	// Line 4237, Address: 0x24cbe4, Func Offset: 0x10c4
	// Line 4238, Address: 0x24cbe8, Func Offset: 0x10c8
	// Line 4237, Address: 0x24cbec, Func Offset: 0x10cc
	// Line 4238, Address: 0x24cbf4, Func Offset: 0x10d4
	// Line 4239, Address: 0x24cbf8, Func Offset: 0x10d8
	// Line 4241, Address: 0x24cc04, Func Offset: 0x10e4
	// Line 4248, Address: 0x24cc10, Func Offset: 0x10f0
	// Line 4241, Address: 0x24cc18, Func Offset: 0x10f8
	// Line 4242, Address: 0x24cc1c, Func Offset: 0x10fc
	// Line 4245, Address: 0x24cc24, Func Offset: 0x1104
	// Line 4246, Address: 0x24cc2c, Func Offset: 0x110c
	// Line 4247, Address: 0x24cc30, Func Offset: 0x1110
	// Line 4248, Address: 0x24cc38, Func Offset: 0x1118
	// Line 4249, Address: 0x24cc58, Func Offset: 0x1138
	// Line 4252, Address: 0x24cc64, Func Offset: 0x1144
	// Line 4249, Address: 0x24cc68, Func Offset: 0x1148
	// Line 4252, Address: 0x24cc6c, Func Offset: 0x114c
	// Line 4249, Address: 0x24cc74, Func Offset: 0x1154
	// Line 4252, Address: 0x24cc7c, Func Offset: 0x115c
	// Line 4257, Address: 0x24cc84, Func Offset: 0x1164
	// Line 4263, Address: 0x24cca8, Func Offset: 0x1188
	// Line 4264, Address: 0x24ccc0, Func Offset: 0x11a0
	// Line 4265, Address: 0x24cce0, Func Offset: 0x11c0
	// Line 4266, Address: 0x24cce4, Func Offset: 0x11c4
	// Line 4265, Address: 0x24cce8, Func Offset: 0x11c8
	// Line 4266, Address: 0x24cd20, Func Offset: 0x1200
	// Line 4267, Address: 0x24cd28, Func Offset: 0x1208
	// Line 4271, Address: 0x24cd30, Func Offset: 0x1210
	// Line 4272, Address: 0x24cd50, Func Offset: 0x1230
	// Line 4273, Address: 0x24cd60, Func Offset: 0x1240
	// Line 4279, Address: 0x24cd64, Func Offset: 0x1244
	// Line 4282, Address: 0x24cd70, Func Offset: 0x1250
	// Line 4279, Address: 0x24cd74, Func Offset: 0x1254
	// Line 4282, Address: 0x24cd78, Func Offset: 0x1258
	// Line 4279, Address: 0x24cd7c, Func Offset: 0x125c
	// Line 4280, Address: 0x24cd80, Func Offset: 0x1260
	// Line 4281, Address: 0x24cd84, Func Offset: 0x1264
	// Line 4279, Address: 0x24cd88, Func Offset: 0x1268
	// Line 4282, Address: 0x24cd8c, Func Offset: 0x126c
	// Line 4283, Address: 0x24cd98, Func Offset: 0x1278
	// Line 4286, Address: 0x24cdac, Func Offset: 0x128c
	// Line 4289, Address: 0x24cdb8, Func Offset: 0x1298
	// Line 4290, Address: 0x24cdc0, Func Offset: 0x12a0
	// Line 4291, Address: 0x24cdc8, Func Offset: 0x12a8
	// Line 4293, Address: 0x24cdcc, Func Offset: 0x12ac
	// Line 4294, Address: 0x24cdd8, Func Offset: 0x12b8
	// Line 4295, Address: 0x24cde0, Func Offset: 0x12c0
	// Line 4296, Address: 0x24cde8, Func Offset: 0x12c8
	// Line 4298, Address: 0x24cdec, Func Offset: 0x12cc
	// Line 4299, Address: 0x24ce00, Func Offset: 0x12e0
	// Line 4300, Address: 0x24ce08, Func Offset: 0x12e8
	// Line 4301, Address: 0x24ce10, Func Offset: 0x12f0
	// Line 4302, Address: 0x24ce18, Func Offset: 0x12f8
	// Line 4304, Address: 0x24ce1c, Func Offset: 0x12fc
	// Line 4306, Address: 0x24ce30, Func Offset: 0x1310
	// Func End, Address: 0x24ce6c, Func Offset: 0x134c
}

// TailSwipeUpdate__11zNMENeptuneFv
// Start address: 0x24ce70
void zNMENeptune::TailSwipeUpdate()
{
	int32 i;
	float32 tailTimer;
	int32 emitted;
	xVec3 posEmit[20];
	xVec3 velEmit[20];
	float32 normrand;
	xVec3 tipCenter;
	xVec3 neckTop;
	xVec3 neckBottom;
	xVec3 perpVec;
	xVec3 ribpos;
	xFXRibbon* rib;
	RibData* ribhelp;
	float32* tailtable;
	float32 tailframe;
	float32 taillerp;
	float32 tailangle;
	float32 vecleftX;
	float32 vecleftZ;
	float32 dotAt;
	float32 dotLeft;
	float32 playerX;
	float32 playerZ;
	int32 tailidx;
	// Line 3803, Address: 0x24ce70, Func Offset: 0
	// Line 3807, Address: 0x24ce78, Func Offset: 0x8
	// Line 3803, Address: 0x24ce7c, Func Offset: 0xc
	// Line 3807, Address: 0x24ceac, Func Offset: 0x3c
	// Line 3805, Address: 0x24ceb0, Func Offset: 0x40
	// Line 3807, Address: 0x24ceb4, Func Offset: 0x44
	// Line 3810, Address: 0x24cebc, Func Offset: 0x4c
	// Line 3811, Address: 0x24cec4, Func Offset: 0x54
	// Line 3814, Address: 0x24ced0, Func Offset: 0x60
	// Line 3811, Address: 0x24ced8, Func Offset: 0x68
	// Line 3814, Address: 0x24cedc, Func Offset: 0x6c
	// Line 3827, Address: 0x24cee4, Func Offset: 0x74
	// Line 3830, Address: 0x24cee8, Func Offset: 0x78
	// Line 3835, Address: 0x24cf04, Func Offset: 0x94
	// Line 3840, Address: 0x24cf24, Func Offset: 0xb4
	// Line 3843, Address: 0x24cf34, Func Offset: 0xc4
	// Line 3840, Address: 0x24cf38, Func Offset: 0xc8
	// Line 3843, Address: 0x24cf44, Func Offset: 0xd4
	// Line 3840, Address: 0x24cf48, Func Offset: 0xd8
	// Line 3843, Address: 0x24cf4c, Func Offset: 0xdc
	// Line 3846, Address: 0x24cf50, Func Offset: 0xe0
	// Line 3840, Address: 0x24cf54, Func Offset: 0xe4
	// Line 3843, Address: 0x24cfc0, Func Offset: 0x150
	// Line 3840, Address: 0x24cfc4, Func Offset: 0x154
	// Line 3843, Address: 0x24cfe4, Func Offset: 0x174
	// Line 3840, Address: 0x24cfe8, Func Offset: 0x178
	// Line 3843, Address: 0x24cff0, Func Offset: 0x180
	// Line 3846, Address: 0x24cffc, Func Offset: 0x18c
	// Line 3843, Address: 0x24d000, Func Offset: 0x190
	// Line 3846, Address: 0x24d008, Func Offset: 0x198
	// Line 3848, Address: 0x24d01c, Func Offset: 0x1ac
	// Line 3871, Address: 0x24d02c, Func Offset: 0x1bc
	// Line 3853, Address: 0x24d060, Func Offset: 0x1f0
	// Line 3871, Address: 0x24d068, Func Offset: 0x1f8
	// Line 3853, Address: 0x24d070, Func Offset: 0x200
	// Line 3871, Address: 0x24d098, Func Offset: 0x228
	// Line 3854, Address: 0x24d0a0, Func Offset: 0x230
	// Line 3871, Address: 0x24d0a8, Func Offset: 0x238
	// Line 3854, Address: 0x24d0b0, Func Offset: 0x240
	// Line 3855, Address: 0x24d0e0, Func Offset: 0x270
	// Line 3854, Address: 0x24d0e4, Func Offset: 0x274
	// Line 3855, Address: 0x24d0e8, Func Offset: 0x278
	// Line 3854, Address: 0x24d0f0, Func Offset: 0x280
	// Line 3855, Address: 0x24d0f4, Func Offset: 0x284
	// Line 3871, Address: 0x24d0f8, Func Offset: 0x288
	// Line 3856, Address: 0x24d120, Func Offset: 0x2b0
	// Line 3871, Address: 0x24d138, Func Offset: 0x2c8
	// Line 3857, Address: 0x24d150, Func Offset: 0x2e0
	// Line 3858, Address: 0x24d164, Func Offset: 0x2f4
	// Line 3871, Address: 0x24d174, Func Offset: 0x304
	// Line 3859, Address: 0x24d18c, Func Offset: 0x31c
	// Line 3871, Address: 0x24d1a4, Func Offset: 0x334
	// Line 3860, Address: 0x24d1bc, Func Offset: 0x34c
	// Line 3861, Address: 0x24d1d4, Func Offset: 0x364
	// Line 3863, Address: 0x24d1e0, Func Offset: 0x370
	// Line 3862, Address: 0x24d1e4, Func Offset: 0x374
	// Line 3863, Address: 0x24d1e8, Func Offset: 0x378
	// Line 3862, Address: 0x24d1f0, Func Offset: 0x380
	// Line 3871, Address: 0x24d1fc, Func Offset: 0x38c
	// Line 3862, Address: 0x24d200, Func Offset: 0x390
	// Line 3871, Address: 0x24d208, Func Offset: 0x398
	// Line 3864, Address: 0x24d218, Func Offset: 0x3a8
	// Line 3871, Address: 0x24d224, Func Offset: 0x3b4
	// Line 3866, Address: 0x24d22c, Func Offset: 0x3bc
	// Line 3867, Address: 0x24d230, Func Offset: 0x3c0
	// Line 3871, Address: 0x24d234, Func Offset: 0x3c4
	// Line 3867, Address: 0x24d238, Func Offset: 0x3c8
	// Line 3869, Address: 0x24d240, Func Offset: 0x3d0
	// Line 3871, Address: 0x24d248, Func Offset: 0x3d8
	// Line 3867, Address: 0x24d254, Func Offset: 0x3e4
	// Line 3871, Address: 0x24d258, Func Offset: 0x3e8
	// Line 3868, Address: 0x24d280, Func Offset: 0x410
	// Line 3871, Address: 0x24d28c, Func Offset: 0x41c
	// Line 3869, Address: 0x24d2c4, Func Offset: 0x454
	// Line 3871, Address: 0x24d2d0, Func Offset: 0x460
	// Line 3807, Address: 0x24d2d4, Func Offset: 0x464
	// Line 3871, Address: 0x24d2d8, Func Offset: 0x468
	// Line 3816, Address: 0x24d2e4, Func Offset: 0x474
	// Line 3871, Address: 0x24d2e8, Func Offset: 0x478
	// Line 3819, Address: 0x24d2f0, Func Offset: 0x480
	// Line 3871, Address: 0x24d2f8, Func Offset: 0x488
	// Line 3823, Address: 0x24d340, Func Offset: 0x4d0
	// Line 3871, Address: 0x24d34c, Func Offset: 0x4dc
	// Line 3823, Address: 0x24d35c, Func Offset: 0x4ec
	// Line 3871, Address: 0x24d360, Func Offset: 0x4f0
	// Line 3823, Address: 0x24d374, Func Offset: 0x504
	// Line 3871, Address: 0x24d378, Func Offset: 0x508
	// Line 3823, Address: 0x24d38c, Func Offset: 0x51c
	// Line 3871, Address: 0x24d3a0, Func Offset: 0x530
	// Line 3823, Address: 0x24d3ac, Func Offset: 0x53c
	// Line 3871, Address: 0x24d3b0, Func Offset: 0x540
	// Line 3823, Address: 0x24d3b4, Func Offset: 0x544
	// Line 3871, Address: 0x24d3b8, Func Offset: 0x548
	// Line 3812, Address: 0x24d3e4, Func Offset: 0x574
	// Line 3871, Address: 0x24d3e8, Func Offset: 0x578
	// Line 3823, Address: 0x24d408, Func Offset: 0x598
	// Line 3871, Address: 0x24d41c, Func Offset: 0x5ac
	// Line 3823, Address: 0x24d420, Func Offset: 0x5b0
	// Line 3871, Address: 0x24d424, Func Offset: 0x5b4
	// Line 3823, Address: 0x24d428, Func Offset: 0x5b8
	// Line 3872, Address: 0x24d440, Func Offset: 0x5d0
	// Line 3873, Address: 0x24d458, Func Offset: 0x5e8
	// Line 3874, Address: 0x24d474, Func Offset: 0x604
	// Line 3877, Address: 0x24d478, Func Offset: 0x608
	// Line 3917, Address: 0x24d490, Func Offset: 0x620
	// Line 3927, Address: 0x24d4d0, Func Offset: 0x660
	// Line 3928, Address: 0x24d4e8, Func Offset: 0x678
	// Line 3930, Address: 0x24d4f8, Func Offset: 0x688
	// Line 3931, Address: 0x24d4fc, Func Offset: 0x68c
	// Line 3932, Address: 0x24d504, Func Offset: 0x694
	// Line 3933, Address: 0x24d514, Func Offset: 0x6a4
	// Line 3934, Address: 0x24d518, Func Offset: 0x6a8
	// Line 3933, Address: 0x24d51c, Func Offset: 0x6ac
	// Line 3934, Address: 0x24d520, Func Offset: 0x6b0
	// Line 3936, Address: 0x24d524, Func Offset: 0x6b4
	// Line 3937, Address: 0x24d528, Func Offset: 0x6b8
	// Line 3936, Address: 0x24d52c, Func Offset: 0x6bc
	// Line 3937, Address: 0x24d530, Func Offset: 0x6c0
	// Line 3936, Address: 0x24d53c, Func Offset: 0x6cc
	// Line 3937, Address: 0x24d540, Func Offset: 0x6d0
	// Line 3940, Address: 0x24d558, Func Offset: 0x6e8
	// Line 3946, Address: 0x24d55c, Func Offset: 0x6ec
	// Line 3940, Address: 0x24d560, Func Offset: 0x6f0
	// Line 3946, Address: 0x24d564, Func Offset: 0x6f4
	// Line 3938, Address: 0x24d568, Func Offset: 0x6f8
	// Line 3940, Address: 0x24d56c, Func Offset: 0x6fc
	// Line 3946, Address: 0x24d574, Func Offset: 0x704
	// Line 3940, Address: 0x24d578, Func Offset: 0x708
	// Line 3938, Address: 0x24d57c, Func Offset: 0x70c
	// Line 3942, Address: 0x24d580, Func Offset: 0x710
	// Line 3939, Address: 0x24d588, Func Offset: 0x718
	// Line 3940, Address: 0x24d58c, Func Offset: 0x71c
	// Line 3939, Address: 0x24d594, Func Offset: 0x724
	// Line 3940, Address: 0x24d598, Func Offset: 0x728
	// Line 3942, Address: 0x24d5ac, Func Offset: 0x73c
	// Line 3940, Address: 0x24d5b0, Func Offset: 0x740
	// Line 3941, Address: 0x24d5b4, Func Offset: 0x744
	// Line 3943, Address: 0x24d5bc, Func Offset: 0x74c
	// Line 3942, Address: 0x24d5c4, Func Offset: 0x754
	// Line 3941, Address: 0x24d5c8, Func Offset: 0x758
	// Line 3943, Address: 0x24d5cc, Func Offset: 0x75c
	// Line 3944, Address: 0x24d5d4, Func Offset: 0x764
	// Line 3945, Address: 0x24d5dc, Func Offset: 0x76c
	// Line 3940, Address: 0x24d5e8, Func Offset: 0x778
	// Line 3945, Address: 0x24d5ec, Func Offset: 0x77c
	// Line 3946, Address: 0x24d5f4, Func Offset: 0x784
	// Line 3951, Address: 0x24d60c, Func Offset: 0x79c
	// Line 3949, Address: 0x24d610, Func Offset: 0x7a0
	// Line 3950, Address: 0x24d614, Func Offset: 0x7a4
	// Line 3951, Address: 0x24d618, Func Offset: 0x7a8
	// Line 3952, Address: 0x24d62c, Func Offset: 0x7bc
	// Line 3954, Address: 0x24d65c, Func Offset: 0x7ec
	// Line 3956, Address: 0x24d660, Func Offset: 0x7f0
	// Line 3957, Address: 0x24d668, Func Offset: 0x7f8
	// Line 3959, Address: 0x24d674, Func Offset: 0x804
	// Line 3974, Address: 0x24d690, Func Offset: 0x820
	// Line 3980, Address: 0x24d6b0, Func Offset: 0x840
	// Line 3981, Address: 0x24d6c0, Func Offset: 0x850
	// Line 3984, Address: 0x24d774, Func Offset: 0x904
	// Line 3884, Address: 0x24d780, Func Offset: 0x910
	// Line 3984, Address: 0x24d784, Func Offset: 0x914
	// Line 3887, Address: 0x24d790, Func Offset: 0x920
	// Line 3984, Address: 0x24d794, Func Offset: 0x924
	// Line 3884, Address: 0x24d7b0, Func Offset: 0x940
	// Line 3984, Address: 0x24d7b4, Func Offset: 0x944
	// Line 3884, Address: 0x24d7bc, Func Offset: 0x94c
	// Line 3885, Address: 0x24d7cc, Func Offset: 0x95c
	// Line 3886, Address: 0x24d7d8, Func Offset: 0x968
	// Line 3984, Address: 0x24d7e4, Func Offset: 0x974
	// Line 3890, Address: 0x24d80c, Func Offset: 0x99c
	// Line 3984, Address: 0x24d818, Func Offset: 0x9a8
	// Line 3908, Address: 0x24d86c, Func Offset: 0x9fc
	// Line 3984, Address: 0x24d878, Func Offset: 0xa08
	// Line 3908, Address: 0x24d880, Func Offset: 0xa10
	// Line 3984, Address: 0x24d884, Func Offset: 0xa14
	// Line 3908, Address: 0x24d888, Func Offset: 0xa18
	// Line 3984, Address: 0x24d88c, Func Offset: 0xa1c
	// Line 3908, Address: 0x24d8ac, Func Offset: 0xa3c
	// Line 3984, Address: 0x24d8c0, Func Offset: 0xa50
	// Line 3908, Address: 0x24d8cc, Func Offset: 0xa5c
	// Line 3984, Address: 0x24d8d0, Func Offset: 0xa60
	// Line 3908, Address: 0x24d8d4, Func Offset: 0xa64
	// Line 3984, Address: 0x24d8d8, Func Offset: 0xa68
	// Line 3912, Address: 0x24d8e8, Func Offset: 0xa78
	// Line 3984, Address: 0x24d8ec, Func Offset: 0xa7c
	// Line 3908, Address: 0x24d92c, Func Offset: 0xabc
	// Line 3984, Address: 0x24d940, Func Offset: 0xad0
	// Line 3908, Address: 0x24d944, Func Offset: 0xad4
	// Line 3984, Address: 0x24d948, Func Offset: 0xad8
	// Line 3908, Address: 0x24d94c, Func Offset: 0xadc
	// Line 3947, Address: 0x24d958, Func Offset: 0xae8
	// Line 3948, Address: 0x24d95c, Func Offset: 0xaec
	// Line 3957, Address: 0x24d964, Func Offset: 0xaf4
	// Line 3984, Address: 0x24d974, Func Offset: 0xb04
	// Line 3957, Address: 0x24d97c, Func Offset: 0xb0c
	// Line 3984, Address: 0x24d980, Func Offset: 0xb10
	// Func End, Address: 0x24d9c0, Func Offset: 0xb50
}

// CollideLightning__11zNMENeptuneFP18RxObjSpace3DVertexUi
// Start address: 0x24d9c0
void zNMENeptune::CollideLightning(RxObjSpace3DVertex* verts, uint32 numVerts)
{
	uint32 i;
	float32 playerX;
	float32 playerY;
	float32 playerZ;
	float32 currX;
	float32 currY;
	float32 currZ;
	float32 nextX;
	float32 nextY;
	float32 nextZ;
	float32 checkDist2;
	float32 ax;
	float32 ay;
	float32 az;
	float32 bx;
	float32 by;
	float32 bz;
	float32 dotAB;
	float32 dotBB;
	// Line 3739, Address: 0x24d9c0, Func Offset: 0
	// Line 3751, Address: 0x24d9d0, Func Offset: 0x10
	// Line 3747, Address: 0x24d9d4, Func Offset: 0x14
	// Line 3755, Address: 0x24d9d8, Func Offset: 0x18
	// Line 3752, Address: 0x24d9dc, Func Offset: 0x1c
	// Line 3755, Address: 0x24d9e0, Func Offset: 0x20
	// Line 3752, Address: 0x24d9e4, Func Offset: 0x24
	// Line 3755, Address: 0x24d9e8, Func Offset: 0x28
	// Line 3751, Address: 0x24d9ec, Func Offset: 0x2c
	// Line 3739, Address: 0x24d9f4, Func Offset: 0x34
	// Line 3751, Address: 0x24d9f8, Func Offset: 0x38
	// Line 3747, Address: 0x24d9fc, Func Offset: 0x3c
	// Line 3753, Address: 0x24da00, Func Offset: 0x40
	// Line 3752, Address: 0x24da04, Func Offset: 0x44
	// Line 3739, Address: 0x24da08, Func Offset: 0x48
	// Line 3752, Address: 0x24da0c, Func Offset: 0x4c
	// Line 3751, Address: 0x24da10, Func Offset: 0x50
	// Line 3739, Address: 0x24da14, Func Offset: 0x54
	// Line 3748, Address: 0x24da18, Func Offset: 0x58
	// Line 3751, Address: 0x24da1c, Func Offset: 0x5c
	// Line 3753, Address: 0x24da20, Func Offset: 0x60
	// Line 3746, Address: 0x24da24, Func Offset: 0x64
	// Line 3745, Address: 0x24da2c, Func Offset: 0x6c
	// Line 3747, Address: 0x24da30, Func Offset: 0x70
	// Line 3753, Address: 0x24da34, Func Offset: 0x74
	// Line 3755, Address: 0x24da3c, Func Offset: 0x7c
	// Line 3783, Address: 0x24da44, Func Offset: 0x84
	// Line 3770, Address: 0x24da50, Func Offset: 0x90
	// Line 3758, Address: 0x24da54, Func Offset: 0x94
	// Line 3759, Address: 0x24da5c, Func Offset: 0x9c
	// Line 3760, Address: 0x24da64, Func Offset: 0xa4
	// Line 3764, Address: 0x24da6c, Func Offset: 0xac
	// Line 3758, Address: 0x24da70, Func Offset: 0xb0
	// Line 3759, Address: 0x24da74, Func Offset: 0xb4
	// Line 3760, Address: 0x24da78, Func Offset: 0xb8
	// Line 3758, Address: 0x24da7c, Func Offset: 0xbc
	// Line 3767, Address: 0x24da80, Func Offset: 0xc0
	// Line 3759, Address: 0x24da84, Func Offset: 0xc4
	// Line 3765, Address: 0x24da88, Func Offset: 0xc8
	// Line 3768, Address: 0x24da8c, Func Offset: 0xcc
	// Line 3770, Address: 0x24da90, Func Offset: 0xd0
	// Line 3760, Address: 0x24da94, Func Offset: 0xd4
	// Line 3766, Address: 0x24da98, Func Offset: 0xd8
	// Line 3769, Address: 0x24da9c, Func Offset: 0xdc
	// Line 3770, Address: 0x24daa0, Func Offset: 0xe0
	// Line 3771, Address: 0x24daa8, Func Offset: 0xe8
	// Line 3777, Address: 0x24dab4, Func Offset: 0xf4
	// Line 3778, Address: 0x24dac8, Func Offset: 0x108
	// Line 3783, Address: 0x24dad4, Func Offset: 0x114
	// Line 3784, Address: 0x24dae0, Func Offset: 0x120
	// Line 3785, Address: 0x24daec, Func Offset: 0x12c
	// Line 3786, Address: 0x24daf4, Func Offset: 0x134
	// Line 3788, Address: 0x24dafc, Func Offset: 0x13c
	// Line 3787, Address: 0x24db00, Func Offset: 0x140
	// Line 3788, Address: 0x24db08, Func Offset: 0x148
	// Line 3789, Address: 0x24db24, Func Offset: 0x164
	// Line 3790, Address: 0x24db2c, Func Offset: 0x16c
	// Line 3799, Address: 0x24db34, Func Offset: 0x174
	// Line 3796, Address: 0x24db40, Func Offset: 0x180
	// Line 3797, Address: 0x24db44, Func Offset: 0x184
	// Line 3799, Address: 0x24db48, Func Offset: 0x188
	// Line 3800, Address: 0x24db50, Func Offset: 0x190
	// Line 3772, Address: 0x24db58, Func Offset: 0x198
	// Line 3800, Address: 0x24db70, Func Offset: 0x1b0
	// Line 3774, Address: 0x24db80, Func Offset: 0x1c0
	// Line 3779, Address: 0x24db8c, Func Offset: 0x1cc
	// Line 3800, Address: 0x24dbac, Func Offset: 0x1ec
	// Func End, Address: 0x24dbc8, Func Offset: 0x208
}

// DefendCollideUpdate__11zNMENeptuneFv
// Start address: 0x24dbd0
void zNMENeptune::DefendCollideUpdate()
{
	xVec3 butt;
	xVec3 tip;
	xVec3 defendCurrVec;
	xVec3 defendForward;
	xVec3 defendRight;
	xVec3 defendUp;
	xMat4x3* defendMat;
	// Line 3641, Address: 0x24dbd0, Func Offset: 0
	// Line 3642, Address: 0x24dbe0, Func Offset: 0x10
	// Line 3647, Address: 0x24dbe8, Func Offset: 0x18
	// Line 3659, Address: 0x24dc2c, Func Offset: 0x5c
	// Line 3660, Address: 0x24dc44, Func Offset: 0x74
	// Line 3661, Address: 0x24dc58, Func Offset: 0x88
	// Line 3674, Address: 0x24dc64, Func Offset: 0x94
	// Line 3676, Address: 0x24dc70, Func Offset: 0xa0
	// Line 3674, Address: 0x24dc74, Func Offset: 0xa4
	// Line 3675, Address: 0x24dc78, Func Offset: 0xa8
	// Line 3674, Address: 0x24dc7c, Func Offset: 0xac
	// Line 3675, Address: 0x24dc80, Func Offset: 0xb0
	// Line 3674, Address: 0x24dc84, Func Offset: 0xb4
	// Line 3675, Address: 0x24dc90, Func Offset: 0xc0
	// Line 3674, Address: 0x24dc94, Func Offset: 0xc4
	// Line 3676, Address: 0x24dc98, Func Offset: 0xc8
	// Line 3674, Address: 0x24dc9c, Func Offset: 0xcc
	// Line 3676, Address: 0x24dcb8, Func Offset: 0xe8
	// Line 3675, Address: 0x24dcc4, Func Offset: 0xf4
	// Line 3674, Address: 0x24dcc8, Func Offset: 0xf8
	// Line 3675, Address: 0x24dcd8, Func Offset: 0x108
	// Line 3676, Address: 0x24dcf4, Func Offset: 0x124
	// Line 3675, Address: 0x24dd04, Func Offset: 0x134
	// Line 3676, Address: 0x24dd0c, Func Offset: 0x13c
	// Line 3679, Address: 0x24dd14, Func Offset: 0x144
	// Line 3676, Address: 0x24dd18, Func Offset: 0x148
	// Line 3679, Address: 0x24dd1c, Func Offset: 0x14c
	// Line 3676, Address: 0x24dd34, Func Offset: 0x164
	// Line 3679, Address: 0x24dd38, Func Offset: 0x168
	// Line 3680, Address: 0x24dd84, Func Offset: 0x1b4
	// Line 3681, Address: 0x24dd88, Func Offset: 0x1b8
	// Line 3680, Address: 0x24dd8c, Func Offset: 0x1bc
	// Line 3681, Address: 0x24dd90, Func Offset: 0x1c0
	// Line 3680, Address: 0x24dd94, Func Offset: 0x1c4
	// Line 3681, Address: 0x24ddac, Func Offset: 0x1dc
	// Line 3680, Address: 0x24ddb0, Func Offset: 0x1e0
	// Line 3681, Address: 0x24ddcc, Func Offset: 0x1fc
	// Line 3680, Address: 0x24ddd4, Func Offset: 0x204
	// Line 3681, Address: 0x24ddd8, Func Offset: 0x208
	// Line 3680, Address: 0x24dde0, Func Offset: 0x210
	// Line 3681, Address: 0x24dde4, Func Offset: 0x214
	// Line 3684, Address: 0x24ddec, Func Offset: 0x21c
	// Line 3690, Address: 0x24ddf0, Func Offset: 0x220
	// Line 3681, Address: 0x24ddf4, Func Offset: 0x224
	// Line 3684, Address: 0x24de00, Func Offset: 0x230
	// Line 3690, Address: 0x24de0c, Func Offset: 0x23c
	// Line 3684, Address: 0x24de10, Func Offset: 0x240
	// Line 3691, Address: 0x24de20, Func Offset: 0x250
	// Line 3684, Address: 0x24de24, Func Offset: 0x254
	// Line 3692, Address: 0x24de28, Func Offset: 0x258
	// Line 3690, Address: 0x24de2c, Func Offset: 0x25c
	// Line 3692, Address: 0x24de30, Func Offset: 0x260
	// Line 3684, Address: 0x24de34, Func Offset: 0x264
	// Line 3691, Address: 0x24de50, Func Offset: 0x280
	// Line 3684, Address: 0x24de54, Func Offset: 0x284
	// Line 3685, Address: 0x24de5c, Func Offset: 0x28c
	// Line 3684, Address: 0x24de68, Func Offset: 0x298
	// Line 3693, Address: 0x24de6c, Func Offset: 0x29c
	// Line 3691, Address: 0x24de70, Func Offset: 0x2a0
	// Line 3685, Address: 0x24de78, Func Offset: 0x2a8
	// Line 3693, Address: 0x24de80, Func Offset: 0x2b0
	// Line 3685, Address: 0x24de84, Func Offset: 0x2b4
	// Line 3694, Address: 0x24de94, Func Offset: 0x2c4
	// Line 3685, Address: 0x24de98, Func Offset: 0x2c8
	// Line 3691, Address: 0x24de9c, Func Offset: 0x2cc
	// Line 3694, Address: 0x24deac, Func Offset: 0x2dc
	// Line 3691, Address: 0x24deb0, Func Offset: 0x2e0
	// Line 3692, Address: 0x24deb4, Func Offset: 0x2e4
	// Line 3693, Address: 0x24dec0, Func Offset: 0x2f0
	// Line 3691, Address: 0x24dec4, Func Offset: 0x2f4
	// Line 3693, Address: 0x24ded8, Func Offset: 0x308
	// Line 3694, Address: 0x24dee0, Func Offset: 0x310
	// Line 3691, Address: 0x24dee8, Func Offset: 0x318
	// Line 3692, Address: 0x24def4, Func Offset: 0x324
	// Line 3685, Address: 0x24def8, Func Offset: 0x328
	// Line 3697, Address: 0x24defc, Func Offset: 0x32c
	// Line 3692, Address: 0x24df08, Func Offset: 0x338
	// Line 3693, Address: 0x24df44, Func Offset: 0x374
	// Line 3694, Address: 0x24df84, Func Offset: 0x3b4
	// Line 3697, Address: 0x24dfc4, Func Offset: 0x3f4
	// Line 3698, Address: 0x24dfcc, Func Offset: 0x3fc
	// Line 3651, Address: 0x24dfd8, Func Offset: 0x408
	// Line 3698, Address: 0x24dfdc, Func Offset: 0x40c
	// Line 3654, Address: 0x24e004, Func Offset: 0x434
	// Line 3698, Address: 0x24e00c, Func Offset: 0x43c
	// Line 3665, Address: 0x24e010, Func Offset: 0x440
	// Line 3667, Address: 0x24e014, Func Offset: 0x444
	// Line 3698, Address: 0x24e018, Func Offset: 0x448
	// Line 3668, Address: 0x24e068, Func Offset: 0x498
	// Line 3698, Address: 0x24e074, Func Offset: 0x4a4
	// Line 3669, Address: 0x24e09c, Func Offset: 0x4cc
	// Line 3698, Address: 0x24e0a4, Func Offset: 0x4d4
	// Line 3677, Address: 0x24e0b8, Func Offset: 0x4e8
	// Line 3698, Address: 0x24e0bc, Func Offset: 0x4ec
	// Line 3677, Address: 0x24e0dc, Func Offset: 0x50c
	// Line 3698, Address: 0x24e0e4, Func Offset: 0x514
	// Line 3677, Address: 0x24e0e8, Func Offset: 0x518
	// Line 3698, Address: 0x24e0ec, Func Offset: 0x51c
	// Line 3679, Address: 0x24e130, Func Offset: 0x560
	// Line 3698, Address: 0x24e138, Func Offset: 0x568
	// Line 3682, Address: 0x24e144, Func Offset: 0x574
	// Line 3698, Address: 0x24e150, Func Offset: 0x580
	// Line 3682, Address: 0x24e154, Func Offset: 0x584
	// Line 3698, Address: 0x24e16c, Func Offset: 0x59c
	// Func End, Address: 0x24e188, Func Offset: 0x5b8
}

// RenderLightBeam__11zNMENeptuneFP5xVec3P5xVec3P5xVec3P5xVec3P5xVec3ff10xColor_tagffffii
// Start address: 0x24e190
void RenderLightBeam(xVec3* start, xVec3* end, xVec3* dir, xVec3* startnorm, xVec3* endnorm, float32 radstart, float32 radend, xColor_tag color, float32 texu_start, float32 texu_end, float32 texv_start, float32 texv_end, int32 numseg, int32 numradial)
{
	int32 seg;
	int32 i;
	xMat4x3 beamBasis;
	xVec3 xsect[16][2];
	xVec3 xsectlerp[16][2];
	float32 anglescale;
	float32 startPlaneD;
	float32 endPlaneD;
	RxObjSpace3DVertex* currvert;
	RxObjSpace3DVertex* xsectStartVert;
	float32 invradial;
	float32 invseg;
	float32 texuscale;
	xVec3* xsectA;
	xVec3* xsectB;
	float32 seglerpA;
	float32 seglerpB;
	RwRGBA* _col;
	RwRGBA* _col;
	// Line 3480, Address: 0x24e190, Func Offset: 0
	// Line 3488, Address: 0x24e198, Func Offset: 0x8
	// Line 3480, Address: 0x24e19c, Func Offset: 0xc
	// Line 3486, Address: 0x24e1b8, Func Offset: 0x28
	// Line 3480, Address: 0x24e1bc, Func Offset: 0x2c
	// Line 3486, Address: 0x24e200, Func Offset: 0x70
	// Line 3480, Address: 0x24e204, Func Offset: 0x74
	// Line 3486, Address: 0x24e224, Func Offset: 0x94
	// Line 3484, Address: 0x24e22c, Func Offset: 0x9c
	// Line 3486, Address: 0x24e240, Func Offset: 0xb0
	// Line 3484, Address: 0x24e24c, Func Offset: 0xbc
	// Line 3488, Address: 0x24e250, Func Offset: 0xc0
	// Line 3484, Address: 0x24e254, Func Offset: 0xc4
	// Line 3485, Address: 0x24e25c, Func Offset: 0xcc
	// Line 3486, Address: 0x24e260, Func Offset: 0xd0
	// Line 3485, Address: 0x24e268, Func Offset: 0xd8
	// Line 3487, Address: 0x24e288, Func Offset: 0xf8
	// Line 3485, Address: 0x24e28c, Func Offset: 0xfc
	// Line 3486, Address: 0x24e290, Func Offset: 0x100
	// Line 3487, Address: 0x24e2a8, Func Offset: 0x118
	// Line 3488, Address: 0x24e2d4, Func Offset: 0x144
	// Line 3495, Address: 0x24e2e0, Func Offset: 0x150
	// Line 3489, Address: 0x24e2e4, Func Offset: 0x154
	// Line 3496, Address: 0x24e2f4, Func Offset: 0x164
	// Line 3488, Address: 0x24e2f8, Func Offset: 0x168
	// Line 3489, Address: 0x24e2fc, Func Offset: 0x16c
	// Line 3496, Address: 0x24e300, Func Offset: 0x170
	// Line 3495, Address: 0x24e304, Func Offset: 0x174
	// Line 3489, Address: 0x24e310, Func Offset: 0x180
	// Line 3495, Address: 0x24e348, Func Offset: 0x1b8
	// Line 3496, Address: 0x24e360, Func Offset: 0x1d0
	// Line 3509, Address: 0x24e368, Func Offset: 0x1d8
	// Line 3510, Address: 0x24e370, Func Offset: 0x1e0
	// Line 3512, Address: 0x24e378, Func Offset: 0x1e8
	// Line 3514, Address: 0x24e37c, Func Offset: 0x1ec
	// Line 3512, Address: 0x24e380, Func Offset: 0x1f0
	// Line 3514, Address: 0x24e384, Func Offset: 0x1f4
	// Line 3512, Address: 0x24e388, Func Offset: 0x1f8
	// Line 3513, Address: 0x24e398, Func Offset: 0x208
	// Line 3514, Address: 0x24e39c, Func Offset: 0x20c
	// Line 3512, Address: 0x24e3a0, Func Offset: 0x210
	// Line 3513, Address: 0x24e3a4, Func Offset: 0x214
	// Line 3512, Address: 0x24e3b0, Func Offset: 0x220
	// Line 3513, Address: 0x24e3b8, Func Offset: 0x228
	// Line 3514, Address: 0x24e3c8, Func Offset: 0x238
	// Line 3516, Address: 0x24e3d0, Func Offset: 0x240
	// Line 3514, Address: 0x24e3d4, Func Offset: 0x244
	// Line 3516, Address: 0x24e3d8, Func Offset: 0x248
	// Line 3514, Address: 0x24e3e4, Func Offset: 0x254
	// Line 3515, Address: 0x24e3e8, Func Offset: 0x258
	// Line 3514, Address: 0x24e3ec, Func Offset: 0x25c
	// Line 3515, Address: 0x24e3f0, Func Offset: 0x260
	// Line 3514, Address: 0x24e3f4, Func Offset: 0x264
	// Line 3515, Address: 0x24e3f8, Func Offset: 0x268
	// Line 3516, Address: 0x24e41c, Func Offset: 0x28c
	// Line 3515, Address: 0x24e420, Func Offset: 0x290
	// Line 3516, Address: 0x24e424, Func Offset: 0x294
	// Line 3515, Address: 0x24e428, Func Offset: 0x298
	// Line 3516, Address: 0x24e42c, Func Offset: 0x29c
	// Line 3517, Address: 0x24e44c, Func Offset: 0x2bc
	// Line 3524, Address: 0x24e460, Func Offset: 0x2d0
	// Line 3520, Address: 0x24e468, Func Offset: 0x2d8
	// Line 3525, Address: 0x24e46c, Func Offset: 0x2dc
	// Line 3524, Address: 0x24e470, Func Offset: 0x2e0
	// Line 3525, Address: 0x24e474, Func Offset: 0x2e4
	// Line 3531, Address: 0x24e478, Func Offset: 0x2e8
	// Line 3524, Address: 0x24e480, Func Offset: 0x2f0
	// Line 3525, Address: 0x24e484, Func Offset: 0x2f4
	// Line 3524, Address: 0x24e488, Func Offset: 0x2f8
	// Line 3525, Address: 0x24e48c, Func Offset: 0x2fc
	// Line 3527, Address: 0x24e4a4, Func Offset: 0x314
	// Line 3531, Address: 0x24e4c0, Func Offset: 0x330
	// Line 3527, Address: 0x24e4c4, Func Offset: 0x334
	// Line 3528, Address: 0x24e4d4, Func Offset: 0x344
	// Line 3531, Address: 0x24e4d8, Func Offset: 0x348
	// Line 3535, Address: 0x24e4f8, Func Offset: 0x368
	// Line 3545, Address: 0x24e504, Func Offset: 0x374
	// Line 3535, Address: 0x24e510, Func Offset: 0x380
	// Line 3551, Address: 0x24e518, Func Offset: 0x388
	// Line 3548, Address: 0x24e520, Func Offset: 0x390
	// Line 3561, Address: 0x24e524, Func Offset: 0x394
	// Line 3539, Address: 0x24e52c, Func Offset: 0x39c
	// Line 3540, Address: 0x24e544, Func Offset: 0x3b4
	// Line 3542, Address: 0x24e54c, Func Offset: 0x3bc
	// Line 3543, Address: 0x24e558, Func Offset: 0x3c8
	// Line 3545, Address: 0x24e570, Func Offset: 0x3e0
	// Line 3544, Address: 0x24e574, Func Offset: 0x3e4
	// Line 3545, Address: 0x24e578, Func Offset: 0x3e8
	// Line 3544, Address: 0x24e57c, Func Offset: 0x3ec
	// Line 3545, Address: 0x24e5b8, Func Offset: 0x428
	// Line 3548, Address: 0x24e5c8, Func Offset: 0x438
	// Line 3550, Address: 0x24e5d0, Func Offset: 0x440
	// Line 3551, Address: 0x24e5d8, Func Offset: 0x448
	// Line 3553, Address: 0x24e5f0, Func Offset: 0x460
	// Line 3552, Address: 0x24e5f4, Func Offset: 0x464
	// Line 3553, Address: 0x24e5f8, Func Offset: 0x468
	// Line 3552, Address: 0x24e5fc, Func Offset: 0x46c
	// Line 3553, Address: 0x24e638, Func Offset: 0x4a8
	// Line 3557, Address: 0x24e648, Func Offset: 0x4b8
	// Line 3556, Address: 0x24e64c, Func Offset: 0x4bc
	// Line 3557, Address: 0x24e650, Func Offset: 0x4c0
	// Line 3560, Address: 0x24e658, Func Offset: 0x4c8
	// Line 3559, Address: 0x24e65c, Func Offset: 0x4cc
	// Line 3561, Address: 0x24e670, Func Offset: 0x4e0
	// Line 3572, Address: 0x24e674, Func Offset: 0x4e4
	// Line 3559, Address: 0x24e67c, Func Offset: 0x4ec
	// Line 3560, Address: 0x24e688, Func Offset: 0x4f8
	// Line 3561, Address: 0x24e6a4, Func Offset: 0x514
	// Line 3565, Address: 0x24e6a8, Func Offset: 0x518
	// Line 3561, Address: 0x24e6ac, Func Offset: 0x51c
	// Line 3570, Address: 0x24e6c4, Func Offset: 0x534
	// Line 3561, Address: 0x24e6c8, Func Offset: 0x538
	// Line 3562, Address: 0x24e6e8, Func Offset: 0x558
	// Line 3564, Address: 0x24e6ec, Func Offset: 0x55c
	// Line 3565, Address: 0x24e704, Func Offset: 0x574
	// Line 3566, Address: 0x24e71c, Func Offset: 0x58c
	// Line 3571, Address: 0x24e738, Func Offset: 0x5a8
	// Line 3566, Address: 0x24e73c, Func Offset: 0x5ac
	// Line 3567, Address: 0x24e754, Func Offset: 0x5c4
	// Line 3572, Address: 0x24e758, Func Offset: 0x5c8
	// Line 3499, Address: 0x24e784, Func Offset: 0x5f4
	// Line 3572, Address: 0x24e788, Func Offset: 0x5f8
	// Line 3500, Address: 0x24e7c4, Func Offset: 0x634
	// Line 3572, Address: 0x24e7c8, Func Offset: 0x638
	// Line 3500, Address: 0x24e7cc, Func Offset: 0x63c
	// Line 3572, Address: 0x24e7d8, Func Offset: 0x648
	// Line 3501, Address: 0x24e7ec, Func Offset: 0x65c
	// Line 3572, Address: 0x24e7f0, Func Offset: 0x660
	// Line 3501, Address: 0x24e7f4, Func Offset: 0x664
	// Line 3572, Address: 0x24e7fc, Func Offset: 0x66c
	// Line 3502, Address: 0x24e808, Func Offset: 0x678
	// Line 3572, Address: 0x24e814, Func Offset: 0x684
	// Line 3503, Address: 0x24e81c, Func Offset: 0x68c
	// Line 3572, Address: 0x24e828, Func Offset: 0x698
	// Line 3504, Address: 0x24e830, Func Offset: 0x6a0
	// Line 3572, Address: 0x24e83c, Func Offset: 0x6ac
	// Line 3505, Address: 0x24e844, Func Offset: 0x6b4
	// Line 3572, Address: 0x24e850, Func Offset: 0x6c0
	// Line 3515, Address: 0x24e888, Func Offset: 0x6f8
	// Line 3572, Address: 0x24e8ac, Func Offset: 0x71c
	// Line 3515, Address: 0x24e8b8, Func Offset: 0x728
	// Line 3572, Address: 0x24e8c0, Func Offset: 0x730
	// Line 3515, Address: 0x24e8cc, Func Offset: 0x73c
	// Line 3572, Address: 0x24e8e0, Func Offset: 0x750
	// Line 3516, Address: 0x24e8f4, Func Offset: 0x764
	// Line 3572, Address: 0x24e918, Func Offset: 0x788
	// Line 3516, Address: 0x24e924, Func Offset: 0x794
	// Line 3572, Address: 0x24e92c, Func Offset: 0x79c
	// Line 3516, Address: 0x24e938, Func Offset: 0x7a8
	// Line 3580, Address: 0x24e958, Func Offset: 0x7c8
	// Line 3575, Address: 0x24e95c, Func Offset: 0x7cc
	// Line 3580, Address: 0x24e960, Func Offset: 0x7d0
	// Line 3575, Address: 0x24e964, Func Offset: 0x7d4
	// Line 3576, Address: 0x24e9c0, Func Offset: 0x830
	// Line 3577, Address: 0x24ea20, Func Offset: 0x890
	// Line 3578, Address: 0x24ea24, Func Offset: 0x894
	// Line 3580, Address: 0x24ea28, Func Offset: 0x898
	// Line 3583, Address: 0x24ea58, Func Offset: 0x8c8
	// Line 3584, Address: 0x24ea60, Func Offset: 0x8d0
	// Line 3583, Address: 0x24ea74, Func Offset: 0x8e4
	// Line 3584, Address: 0x24ea7c, Func Offset: 0x8ec
	// Func End, Address: 0x24eb90, Func Offset: 0xa00
}

// ParUpdate__11zNMENeptuneFfb
// Start address: 0x24eb90
void zNMENeptune::ParUpdate(float32 dt, uint8 updatelast)
{
	xMat4x3* cammat;
	float32 camAtX;
	float32 camAtY;
	float32 camAtZ;
	float32 camD;
	float32 playerX;
	float32 playerY;
	float32 playerZ;
	int32 i;
	int32 sortcount;
	zNeptuneSortParticle* sortpar;
	float32 spiral_radrate;
	float32 spiral_radtarget;
	float32 posX;
	float32 posY;
	float32 posZ;
	zNeptuneParticle* currpar;
	float32 currLife;
	zNeptuneParticleBeamUser* beamuser;
	float32 lerp;
	zNeptuneParticleSpiralUser* spuser;
	float32 spiral_rad;
	float32 cnew;
	float32 snew;
	float32 cold;
	float32 sold;
	float32 deltadt;
	float32 bcx;
	float32 bcy;
	float32 bcz;
	float32 bsx;
	float32 bsy;
	float32 bsz;
	zNeptuneParticleGravBounceUser* gbuser;
	zNeptuneParticleGravBounceUser* gbuser;
	zNeptuneParSize* npsize;
	float32 size;
	float32 fDepth;
	uint32 uLife;
	ptank_pool__pos_color_size_uv2 pool;
	float32 lifetime;
	zNeptuneParTex* ptex;
	zNeptuneParCol* pcol;
	float32 collerp;
	float32 invcollerp;
	zNeptuneParSize* psize;
	float32 interpsize;
	// Line 3159, Address: 0x24eb90, Func Offset: 0
	// Line 3164, Address: 0x24eb94, Func Offset: 0x4
	// Line 3159, Address: 0x24eb98, Func Offset: 0x8
	// Line 3164, Address: 0x24eb9c, Func Offset: 0xc
	// Line 3159, Address: 0x24eba0, Func Offset: 0x10
	// Line 3164, Address: 0x24eba4, Func Offset: 0x14
	// Line 3159, Address: 0x24eba8, Func Offset: 0x18
	// Line 3164, Address: 0x24ec08, Func Offset: 0x78
	// Line 3165, Address: 0x24ec58, Func Offset: 0xc8
	// Line 3167, Address: 0x24ec9c, Func Offset: 0x10c
	// Line 3168, Address: 0x24eca4, Func Offset: 0x114
	// Line 3180, Address: 0x24ecac, Func Offset: 0x11c
	// Line 3194, Address: 0x24ecb4, Func Offset: 0x124
	// Line 3180, Address: 0x24ecb8, Func Offset: 0x128
	// Line 3183, Address: 0x24ecbc, Func Offset: 0x12c
	// Line 3178, Address: 0x24ecc8, Func Offset: 0x138
	// Line 3183, Address: 0x24eccc, Func Offset: 0x13c
	// Line 3180, Address: 0x24ecd0, Func Offset: 0x140
	// Line 3181, Address: 0x24ecd4, Func Offset: 0x144
	// Line 3183, Address: 0x24ecd8, Func Offset: 0x148
	// Line 3182, Address: 0x24ecdc, Func Offset: 0x14c
	// Line 3183, Address: 0x24ece0, Func Offset: 0x150
	// Line 3190, Address: 0x24ece8, Func Offset: 0x158
	// Line 3180, Address: 0x24ecec, Func Offset: 0x15c
	// Line 3181, Address: 0x24ecf0, Func Offset: 0x160
	// Line 3183, Address: 0x24ecf4, Func Offset: 0x164
	// Line 3182, Address: 0x24ecf8, Func Offset: 0x168
	// Line 3181, Address: 0x24ecfc, Func Offset: 0x16c
	// Line 3182, Address: 0x24ed00, Func Offset: 0x170
	// Line 3180, Address: 0x24ed04, Func Offset: 0x174
	// Line 3183, Address: 0x24ed08, Func Offset: 0x178
	// Line 3191, Address: 0x24ed0c, Func Offset: 0x17c
	// Line 3190, Address: 0x24ed10, Func Offset: 0x180
	// Line 3189, Address: 0x24ed14, Func Offset: 0x184
	// Line 3183, Address: 0x24ed18, Func Offset: 0x188
	// Line 3191, Address: 0x24ed1c, Func Offset: 0x18c
	// Line 3183, Address: 0x24ed20, Func Offset: 0x190
	// Line 3190, Address: 0x24ed28, Func Offset: 0x198
	// Line 3196, Address: 0x24ed2c, Func Offset: 0x19c
	// Line 3197, Address: 0x24ed34, Func Offset: 0x1a4
	// Line 3200, Address: 0x24ed48, Func Offset: 0x1b8
	// Line 3201, Address: 0x24ed54, Func Offset: 0x1c4
	// Line 3200, Address: 0x24ed58, Func Offset: 0x1c8
	// Line 3203, Address: 0x24ed5c, Func Offset: 0x1cc
	// Line 3211, Address: 0x24edb0, Func Offset: 0x220
	// Line 3203, Address: 0x24edb4, Func Offset: 0x224
	// Line 3210, Address: 0x24edc0, Func Offset: 0x230
	// Line 3211, Address: 0x24edcc, Func Offset: 0x23c
	// Line 3210, Address: 0x24edd4, Func Offset: 0x244
	// Line 3211, Address: 0x24eddc, Func Offset: 0x24c
	// Line 3212, Address: 0x24ede8, Func Offset: 0x258
	// Line 3214, Address: 0x24edec, Func Offset: 0x25c
	// Line 3212, Address: 0x24edf0, Func Offset: 0x260
	// Line 3214, Address: 0x24edf4, Func Offset: 0x264
	// Line 3212, Address: 0x24edf8, Func Offset: 0x268
	// Line 3213, Address: 0x24edfc, Func Offset: 0x26c
	// Line 3212, Address: 0x24ee00, Func Offset: 0x270
	// Line 3214, Address: 0x24ee08, Func Offset: 0x278
	// Line 3212, Address: 0x24ee0c, Func Offset: 0x27c
	// Line 3214, Address: 0x24ee10, Func Offset: 0x280
	// Line 3212, Address: 0x24ee14, Func Offset: 0x284
	// Line 3214, Address: 0x24eec8, Func Offset: 0x338
	// Line 3215, Address: 0x24eed0, Func Offset: 0x340
	// Line 3216, Address: 0x24eed8, Func Offset: 0x348
	// Line 3220, Address: 0x24eee0, Func Offset: 0x350
	// Line 3223, Address: 0x24eee4, Func Offset: 0x354
	// Line 3224, Address: 0x24ef00, Func Offset: 0x370
	// Line 3225, Address: 0x24ef0c, Func Offset: 0x37c
	// Line 3226, Address: 0x24ef28, Func Offset: 0x398
	// Line 3227, Address: 0x24ef44, Func Offset: 0x3b4
	// Line 3228, Address: 0x24ef50, Func Offset: 0x3c0
	// Line 3229, Address: 0x24ef70, Func Offset: 0x3e0
	// Line 3230, Address: 0x24ef8c, Func Offset: 0x3fc
	// Line 3231, Address: 0x24ef98, Func Offset: 0x408
	// Line 3244, Address: 0x24efb8, Func Offset: 0x428
	// Line 3237, Address: 0x24efbc, Func Offset: 0x42c
	// Line 3240, Address: 0x24efc0, Func Offset: 0x430
	// Line 3238, Address: 0x24efc4, Func Offset: 0x434
	// Line 3240, Address: 0x24efc8, Func Offset: 0x438
	// Line 3239, Address: 0x24efcc, Func Offset: 0x43c
	// Line 3240, Address: 0x24efd0, Func Offset: 0x440
	// Line 3241, Address: 0x24efd8, Func Offset: 0x448
	// Line 3240, Address: 0x24efdc, Func Offset: 0x44c
	// Line 3241, Address: 0x24efe0, Func Offset: 0x450
	// Line 3242, Address: 0x24efec, Func Offset: 0x45c
	// Line 3244, Address: 0x24effc, Func Offset: 0x46c
	// Line 3248, Address: 0x24f020, Func Offset: 0x490
	// Line 3249, Address: 0x24f028, Func Offset: 0x498
	// Line 3256, Address: 0x24f02c, Func Offset: 0x49c
	// Line 3257, Address: 0x24f030, Func Offset: 0x4a0
	// Line 3256, Address: 0x24f03c, Func Offset: 0x4ac
	// Line 3257, Address: 0x24f040, Func Offset: 0x4b0
	// Line 3258, Address: 0x24f060, Func Offset: 0x4d0
	// Line 3264, Address: 0x24f0b0, Func Offset: 0x520
	// Line 3258, Address: 0x24f0b4, Func Offset: 0x524
	// Line 3264, Address: 0x24f0b8, Func Offset: 0x528
	// Line 3258, Address: 0x24f0c0, Func Offset: 0x530
	// Line 3264, Address: 0x24f0c4, Func Offset: 0x534
	// Line 3267, Address: 0x24f0d4, Func Offset: 0x544
	// Line 3271, Address: 0x24f0e0, Func Offset: 0x550
	// Line 3274, Address: 0x24f0f4, Func Offset: 0x564
	// Line 3275, Address: 0x24f100, Func Offset: 0x570
	// Line 3274, Address: 0x24f104, Func Offset: 0x574
	// Line 3276, Address: 0x24f10c, Func Offset: 0x57c
	// Line 3277, Address: 0x24f154, Func Offset: 0x5c4
	// Line 3276, Address: 0x24f158, Func Offset: 0x5c8
	// Line 3278, Address: 0x24f170, Func Offset: 0x5e0
	// Line 3279, Address: 0x24f1d0, Func Offset: 0x640
	// Line 3280, Address: 0x24f1d4, Func Offset: 0x644
	// Line 3281, Address: 0x24f1d8, Func Offset: 0x648
	// Line 3282, Address: 0x24f1dc, Func Offset: 0x64c
	// Line 3285, Address: 0x24f1e4, Func Offset: 0x654
	// Line 3286, Address: 0x24f1e8, Func Offset: 0x658
	// Line 3289, Address: 0x24f1fc, Func Offset: 0x66c
	// Line 3296, Address: 0x24f204, Func Offset: 0x674
	// Line 3297, Address: 0x24f208, Func Offset: 0x678
	// Line 3298, Address: 0x24f210, Func Offset: 0x680
	// Line 3299, Address: 0x24f21c, Func Offset: 0x68c
	// Line 3301, Address: 0x24f220, Func Offset: 0x690
	// Line 3305, Address: 0x24f224, Func Offset: 0x694
	// Line 3314, Address: 0x24f228, Func Offset: 0x698
	// Line 3306, Address: 0x24f230, Func Offset: 0x6a0
	// Line 3314, Address: 0x24f234, Func Offset: 0x6a4
	// Line 3307, Address: 0x24f238, Func Offset: 0x6a8
	// Line 3314, Address: 0x24f23c, Func Offset: 0x6ac
	// Line 3305, Address: 0x24f248, Func Offset: 0x6b8
	// Line 3314, Address: 0x24f24c, Func Offset: 0x6bc
	// Line 3308, Address: 0x24f284, Func Offset: 0x6f4
	// Line 3309, Address: 0x24f28c, Func Offset: 0x6fc
	// Line 3310, Address: 0x24f294, Func Offset: 0x704
	// Line 3318, Address: 0x24f2a4, Func Offset: 0x714
	// Line 3319, Address: 0x24f2a8, Func Offset: 0x718
	// Line 3320, Address: 0x24f2ac, Func Offset: 0x71c
	// Line 3322, Address: 0x24f2b0, Func Offset: 0x720
	// Line 3323, Address: 0x24f2b4, Func Offset: 0x724
	// Line 3326, Address: 0x24f2b8, Func Offset: 0x728
	// Line 3321, Address: 0x24f2c0, Func Offset: 0x730
	// Line 3327, Address: 0x24f2c4, Func Offset: 0x734
	// Line 3331, Address: 0x24f2c8, Func Offset: 0x738
	// Line 3327, Address: 0x24f2cc, Func Offset: 0x73c
	// Line 3326, Address: 0x24f2d0, Func Offset: 0x740
	// Line 3328, Address: 0x24f2d4, Func Offset: 0x744
	// Line 3331, Address: 0x24f2e0, Func Offset: 0x750
	// Line 3327, Address: 0x24f2e4, Func Offset: 0x754
	// Line 3331, Address: 0x24f2e8, Func Offset: 0x758
	// Line 3337, Address: 0x24f2f4, Func Offset: 0x764
	// Line 3338, Address: 0x24f300, Func Offset: 0x770
	// Line 3340, Address: 0x24f304, Func Offset: 0x774
	// Line 3339, Address: 0x24f308, Func Offset: 0x778
	// Line 3337, Address: 0x24f318, Func Offset: 0x788
	// Line 3345, Address: 0x24f31c, Func Offset: 0x78c
	// Line 3337, Address: 0x24f320, Func Offset: 0x790
	// Line 3338, Address: 0x24f324, Func Offset: 0x794
	// Line 3339, Address: 0x24f328, Func Offset: 0x798
	// Line 3340, Address: 0x24f334, Func Offset: 0x7a4
	// Line 3341, Address: 0x24f338, Func Offset: 0x7a8
	// Line 3342, Address: 0x24f344, Func Offset: 0x7b4
	// Line 3343, Address: 0x24f348, Func Offset: 0x7b8
	// Line 3344, Address: 0x24f34c, Func Offset: 0x7bc
	// Line 3345, Address: 0x24f350, Func Offset: 0x7c0
	// Line 3346, Address: 0x24f354, Func Offset: 0x7c4
	// Line 3349, Address: 0x24f35c, Func Offset: 0x7cc
	// Line 3356, Address: 0x24f364, Func Offset: 0x7d4
	// Line 3357, Address: 0x24f378, Func Offset: 0x7e8
	// Line 3358, Address: 0x24f398, Func Offset: 0x808
	// Line 3366, Address: 0x24f3a0, Func Offset: 0x810
	// Line 3369, Address: 0x24f3a8, Func Offset: 0x818
	// Line 3370, Address: 0x24f3ac, Func Offset: 0x81c
	// Line 3369, Address: 0x24f3b0, Func Offset: 0x820
	// Line 3370, Address: 0x24f3b8, Func Offset: 0x828
	// Line 3373, Address: 0x24f3cc, Func Offset: 0x83c
	// Line 3374, Address: 0x24f3d4, Func Offset: 0x844
	// Line 3380, Address: 0x24f438, Func Offset: 0x8a8
	// Line 3381, Address: 0x24f488, Func Offset: 0x8f8
	// Line 3384, Address: 0x24f48c, Func Offset: 0x8fc
	// Line 3381, Address: 0x24f490, Func Offset: 0x900
	// Line 3384, Address: 0x24f494, Func Offset: 0x904
	// Line 3381, Address: 0x24f498, Func Offset: 0x908
	// Line 3384, Address: 0x24f4a0, Func Offset: 0x910
	// Line 3389, Address: 0x24f4fc, Func Offset: 0x96c
	// Line 3386, Address: 0x24f504, Func Offset: 0x974
	// Line 3389, Address: 0x24f508, Func Offset: 0x978
	// Line 3387, Address: 0x24f50c, Func Offset: 0x97c
	// Line 3389, Address: 0x24f510, Func Offset: 0x980
	// Line 3390, Address: 0x24f544, Func Offset: 0x9b4
	// Line 3389, Address: 0x24f548, Func Offset: 0x9b8
	// Line 3393, Address: 0x24f54c, Func Offset: 0x9bc
	// Line 3389, Address: 0x24f550, Func Offset: 0x9c0
	// Line 3390, Address: 0x24f554, Func Offset: 0x9c4
	// Line 3393, Address: 0x24f558, Func Offset: 0x9c8
	// Line 3390, Address: 0x24f560, Func Offset: 0x9d0
	// Line 3391, Address: 0x24f570, Func Offset: 0x9e0
	// Line 3392, Address: 0x24f584, Func Offset: 0x9f4
	// Line 3396, Address: 0x24f59c, Func Offset: 0xa0c
	// Line 3399, Address: 0x24f5b8, Func Offset: 0xa28
	// Line 3401, Address: 0x24f5c4, Func Offset: 0xa34
	// Line 3402, Address: 0x24f5cc, Func Offset: 0xa3c
	// Line 3406, Address: 0x24f5d4, Func Offset: 0xa44
	// Line 3413, Address: 0x24f5f0, Func Offset: 0xa60
	// Line 3414, Address: 0x24f5f4, Func Offset: 0xa64
	// Line 3415, Address: 0x24f5f8, Func Offset: 0xa68
	// Line 3416, Address: 0x24f5fc, Func Offset: 0xa6c
	// Line 3419, Address: 0x24f600, Func Offset: 0xa70
	// Line 3422, Address: 0x24f608, Func Offset: 0xa78
	// Line 3419, Address: 0x24f60c, Func Offset: 0xa7c
	// Line 3422, Address: 0x24f610, Func Offset: 0xa80
	// Line 3413, Address: 0x24f614, Func Offset: 0xa84
	// Line 3414, Address: 0x24f618, Func Offset: 0xa88
	// Line 3415, Address: 0x24f61c, Func Offset: 0xa8c
	// Line 3416, Address: 0x24f620, Func Offset: 0xa90
	// Line 3422, Address: 0x24f624, Func Offset: 0xa94
	// Line 3425, Address: 0x24f644, Func Offset: 0xab4
	// Line 3426, Address: 0x24f778, Func Offset: 0xbe8
	// Line 3429, Address: 0x24f784, Func Offset: 0xbf4
	// Line 3432, Address: 0x24f7b8, Func Offset: 0xc28
	// Line 3429, Address: 0x24f7bc, Func Offset: 0xc2c
	// Line 3446, Address: 0x24f7c4, Func Offset: 0xc34
	// Line 3429, Address: 0x24f7d0, Func Offset: 0xc40
	// Line 3432, Address: 0x24f7d4, Func Offset: 0xc44
	// Line 3433, Address: 0x24f7dc, Func Offset: 0xc4c
	// Line 3434, Address: 0x24f7e8, Func Offset: 0xc58
	// Line 3437, Address: 0x24f7f4, Func Offset: 0xc64
	// Line 3438, Address: 0x24f7f8, Func Offset: 0xc68
	// Line 3437, Address: 0x24f7fc, Func Offset: 0xc6c
	// Line 3438, Address: 0x24f804, Func Offset: 0xc74
	// Line 3439, Address: 0x24f80c, Func Offset: 0xc7c
	// Line 3440, Address: 0x24f818, Func Offset: 0xc88
	// Line 3441, Address: 0x24f82c, Func Offset: 0xc9c
	// Line 3444, Address: 0x24f840, Func Offset: 0xcb0
	// Line 3445, Address: 0x24f84c, Func Offset: 0xcbc
	// Line 3447, Address: 0x24f850, Func Offset: 0xcc0
	// Line 3445, Address: 0x24f854, Func Offset: 0xcc4
	// Line 3444, Address: 0x24f858, Func Offset: 0xcc8
	// Line 3445, Address: 0x24f85c, Func Offset: 0xccc
	// Line 3447, Address: 0x24f864, Func Offset: 0xcd4
	// Line 3448, Address: 0x24f910, Func Offset: 0xd80
	// Line 3449, Address: 0x24f9c0, Func Offset: 0xe30
	// Line 3450, Address: 0x24fa70, Func Offset: 0xee0
	// Line 3454, Address: 0x24fb20, Func Offset: 0xf90
	// Line 3457, Address: 0x24fb24, Func Offset: 0xf94
	// Line 3450, Address: 0x24fb2c, Func Offset: 0xf9c
	// Line 3453, Address: 0x24fb30, Func Offset: 0xfa0
	// Line 3457, Address: 0x24fb34, Func Offset: 0xfa4
	// Line 3455, Address: 0x24fb38, Func Offset: 0xfa8
	// Line 3453, Address: 0x24fb3c, Func Offset: 0xfac
	// Line 3456, Address: 0x24fb40, Func Offset: 0xfb0
	// Line 3453, Address: 0x24fb44, Func Offset: 0xfb4
	// Line 3454, Address: 0x24fb48, Func Offset: 0xfb8
	// Line 3455, Address: 0x24fb60, Func Offset: 0xfd0
	// Line 3456, Address: 0x24fb64, Func Offset: 0xfd4
	// Line 3457, Address: 0x24fb68, Func Offset: 0xfd8
	// Line 3460, Address: 0x24fb70, Func Offset: 0xfe0
	// Line 3463, Address: 0x24fbbc, Func Offset: 0x102c
	// Line 3464, Address: 0x24fbc4, Func Offset: 0x1034
	// Func End, Address: 0x24fc24, Func Offset: 0x1094
}

// ScorchUpdate__11zNMENeptuneFf
// Start address: 0x24fc30
void zNMENeptune::ScorchUpdate(float32 dt)
{
	int32 i;
	// Line 3121, Address: 0x24fc30, Func Offset: 0
	// Line 3124, Address: 0x24fc34, Func Offset: 0x4
	// Line 3121, Address: 0x24fc38, Func Offset: 0x8
	// Line 3124, Address: 0x24fc3c, Func Offset: 0xc
	// Line 3128, Address: 0x24fc4c, Func Offset: 0x1c
	// Line 3124, Address: 0x24fc5c, Func Offset: 0x2c
	// Line 3127, Address: 0x24fc60, Func Offset: 0x30
	// Line 3128, Address: 0x24fc6c, Func Offset: 0x3c
	// Line 3134, Address: 0x24fc78, Func Offset: 0x48
	// Line 3137, Address: 0x24fc90, Func Offset: 0x60
	// Line 3138, Address: 0x24fc98, Func Offset: 0x68
	// Line 3139, Address: 0x24fc9c, Func Offset: 0x6c
	// Line 3140, Address: 0x24fcb0, Func Offset: 0x80
	// Line 3141, Address: 0x24fcb4, Func Offset: 0x84
	// Line 3140, Address: 0x24fcb8, Func Offset: 0x88
	// Line 3141, Address: 0x24fcc4, Func Offset: 0x94
	// Line 3129, Address: 0x24fce8, Func Offset: 0xb8
	// Line 3141, Address: 0x24fcec, Func Offset: 0xbc
	// Line 3142, Address: 0x24fd20, Func Offset: 0xf0
	// Line 3144, Address: 0x24fd3c, Func Offset: 0x10c
	// Func End, Address: 0x24fd48, Func Offset: 0x118
}

// ParEmitBunch__11zNMENeptuneFPfffPFP16zNeptuneParticlePvf_UiPv
// Start address: 0x24fd50
void zNMENeptune::ParEmitBunch(float32* emitVar, float32 emitRate, float32 dt, uint32(*emitCB)(zNeptuneParticle*, void*, float32), void* context)
{
	float32 invEmitRate;
	float32 invDt;
	zNeptuneParticle* allocpar;
	uint32 emitType;
	zNeptuneParType* ptype;
	// Line 3078, Address: 0x24fd50, Func Offset: 0
	// Line 3080, Address: 0x24fd54, Func Offset: 0x4
	// Line 3078, Address: 0x24fd58, Func Offset: 0x8
	// Line 3080, Address: 0x24fd5c, Func Offset: 0xc
	// Line 3078, Address: 0x24fd60, Func Offset: 0x10
	// Line 3080, Address: 0x24fd64, Func Offset: 0x14
	// Line 3078, Address: 0x24fd68, Func Offset: 0x18
	// Line 3080, Address: 0x24fd74, Func Offset: 0x24
	// Line 3078, Address: 0x24fd78, Func Offset: 0x28
	// Line 3080, Address: 0x24fd90, Func Offset: 0x40
	// Line 3086, Address: 0x24fd98, Func Offset: 0x48
	// Line 3088, Address: 0x24fda8, Func Offset: 0x58
	// Line 3086, Address: 0x24fdac, Func Offset: 0x5c
	// Line 3087, Address: 0x24fdb0, Func Offset: 0x60
	// Line 3088, Address: 0x24fdc8, Func Offset: 0x78
	// Line 3089, Address: 0x24fdcc, Func Offset: 0x7c
	// Line 3092, Address: 0x24fde4, Func Offset: 0x94
	// Line 3095, Address: 0x24fdf0, Func Offset: 0xa0
	// Line 3096, Address: 0x24fe08, Func Offset: 0xb8
	// Line 3099, Address: 0x24fe14, Func Offset: 0xc4
	// Line 3100, Address: 0x24fe18, Func Offset: 0xc8
	// Line 3099, Address: 0x24fe1c, Func Offset: 0xcc
	// Line 3104, Address: 0x24fe20, Func Offset: 0xd0
	// Line 3100, Address: 0x24fe24, Func Offset: 0xd4
	// Line 3099, Address: 0x24fe28, Func Offset: 0xd8
	// Line 3100, Address: 0x24fe2c, Func Offset: 0xdc
	// Line 3099, Address: 0x24fe34, Func Offset: 0xe4
	// Line 3101, Address: 0x24fe38, Func Offset: 0xe8
	// Line 3099, Address: 0x24fe3c, Func Offset: 0xec
	// Line 3104, Address: 0x24fe40, Func Offset: 0xf0
	// Line 3107, Address: 0x24fe50, Func Offset: 0x100
	// Line 3116, Address: 0x24fe54, Func Offset: 0x104
	// Line 3107, Address: 0x24fe58, Func Offset: 0x108
	// Line 3109, Address: 0x24fe64, Func Offset: 0x114
	// Line 3108, Address: 0x24fe6c, Func Offset: 0x11c
	// Line 3109, Address: 0x24fe74, Func Offset: 0x124
	// Line 3110, Address: 0x24fe80, Func Offset: 0x130
	// Line 3111, Address: 0x24fe94, Func Offset: 0x144
	// Line 3112, Address: 0x24fea8, Func Offset: 0x158
	// Line 3116, Address: 0x24febc, Func Offset: 0x16c
	// Line 3117, Address: 0x24fec8, Func Offset: 0x178
	// Line 3118, Address: 0x24fed8, Func Offset: 0x188
	// Func End, Address: 0x24ff00, Func Offset: 0x1b0
}

// ParArrayInit__11zNMENeptuneFv
// Start address: 0x24ff00
void zNMENeptune::ParArrayInit()
{
	int32 i;
	int32 startNew;
	// Line 3000, Address: 0x24ff00, Func Offset: 0
	// Line 3008, Address: 0x24ff04, Func Offset: 0x4
	// Line 3001, Address: 0x24ff08, Func Offset: 0x8
	// Line 3007, Address: 0x24ff0c, Func Offset: 0xc
	// Line 3002, Address: 0x24ff10, Func Offset: 0x10
	// Line 3008, Address: 0x24ff14, Func Offset: 0x14
	// Line 3010, Address: 0x24ff20, Func Offset: 0x20
	// Line 3012, Address: 0x24ff24, Func Offset: 0x24
	// Line 3010, Address: 0x24ff28, Func Offset: 0x28
	// Line 3012, Address: 0x24ff2c, Func Offset: 0x2c
	// Line 3023, Address: 0x24ff30, Func Offset: 0x30
	// Line 3024, Address: 0x24ff38, Func Offset: 0x38
	// Line 3008, Address: 0x24ff3c, Func Offset: 0x3c
	// Line 3009, Address: 0x24ff40, Func Offset: 0x40
	// Line 3010, Address: 0x24ff48, Func Offset: 0x48
	// Line 3011, Address: 0x24ff64, Func Offset: 0x64
	// Line 3012, Address: 0x24ff84, Func Offset: 0x84
	// Line 3017, Address: 0x24ffa4, Func Offset: 0xa4
	// Line 3018, Address: 0x24ffa8, Func Offset: 0xa8
	// Line 3019, Address: 0x24ffac, Func Offset: 0xac
	// Line 3022, Address: 0x24ffb4, Func Offset: 0xb4
	// Line 3023, Address: 0x24ffb8, Func Offset: 0xb8
	// Line 3026, Address: 0x24ffc8, Func Offset: 0xc8
	// Line 3023, Address: 0x24ffd0, Func Offset: 0xd0
	// Line 3026, Address: 0x24ffd4, Func Offset: 0xd4
	// Line 3034, Address: 0x24ffdc, Func Offset: 0xdc
	// Line 3027, Address: 0x24ffe0, Func Offset: 0xe0
	// Line 3028, Address: 0x24ffe4, Func Offset: 0xe4
	// Line 3034, Address: 0x24ffec, Func Offset: 0xec
	// Line 3028, Address: 0x24fff0, Func Offset: 0xf0
	// Line 3036, Address: 0x24fff8, Func Offset: 0xf8
	// Line 3029, Address: 0x24fffc, Func Offset: 0xfc
	// Line 3030, Address: 0x250030, Func Offset: 0x130
	// Line 3034, Address: 0x25003c, Func Offset: 0x13c
	// Line 3041, Address: 0x250048, Func Offset: 0x148
	// Line 3042, Address: 0x25004c, Func Offset: 0x14c
	// Line 3043, Address: 0x250060, Func Offset: 0x160
	// Line 3045, Address: 0x250068, Func Offset: 0x168
	// Line 3043, Address: 0x250070, Func Offset: 0x170
	// Line 3045, Address: 0x250074, Func Offset: 0x174
	// Line 3053, Address: 0x25007c, Func Offset: 0x17c
	// Line 3046, Address: 0x250080, Func Offset: 0x180
	// Line 3047, Address: 0x250084, Func Offset: 0x184
	// Line 3053, Address: 0x25008c, Func Offset: 0x18c
	// Line 3047, Address: 0x250090, Func Offset: 0x190
	// Line 3055, Address: 0x250098, Func Offset: 0x198
	// Line 3048, Address: 0x25009c, Func Offset: 0x19c
	// Line 3049, Address: 0x2500b8, Func Offset: 0x1b8
	// Line 3053, Address: 0x2500c4, Func Offset: 0x1c4
	// Line 3060, Address: 0x2500d0, Func Offset: 0x1d0
	// Line 3061, Address: 0x2500d4, Func Offset: 0x1d4
	// Line 3064, Address: 0x2500f4, Func Offset: 0x1f4
	// Line 3066, Address: 0x2500fc, Func Offset: 0x1fc
	// Line 3064, Address: 0x250108, Func Offset: 0x208
	// Line 3066, Address: 0x25010c, Func Offset: 0x20c
	// Line 3067, Address: 0x250114, Func Offset: 0x214
	// Line 3021, Address: 0x250134, Func Offset: 0x234
	// Line 3067, Address: 0x250138, Func Offset: 0x238
	// Line 3020, Address: 0x25013c, Func Offset: 0x23c
	// Line 3067, Address: 0x250140, Func Offset: 0x240
	// Line 3032, Address: 0x25015c, Func Offset: 0x25c
	// Line 3067, Address: 0x250160, Func Offset: 0x260
	// Line 3031, Address: 0x250164, Func Offset: 0x264
	// Line 3067, Address: 0x250168, Func Offset: 0x268
	// Line 3039, Address: 0x250180, Func Offset: 0x280
	// Line 3067, Address: 0x250188, Func Offset: 0x288
	// Line 3051, Address: 0x25018c, Func Offset: 0x28c
	// Line 3067, Address: 0x250190, Func Offset: 0x290
	// Line 3050, Address: 0x250194, Func Offset: 0x294
	// Line 3067, Address: 0x250198, Func Offset: 0x298
	// Line 3058, Address: 0x2501b0, Func Offset: 0x2b0
	// Line 3067, Address: 0x2501b8, Func Offset: 0x2b8
	// Func End, Address: 0x2501c0, Func Offset: 0x2c0
}

// FirePitchUpdate__11zNMENeptuneFv
// Start address: 0x2501c0
void zNMENeptune::FirePitchUpdate()
{
	int32 i;
	xAnimSingle* fireSingle;
	int32 lastResult;
	float32 lastHitX;
	float32 lastHitZ;
	float32 lastDist;
	float32 hitX;
	float32 hitZ;
	float32 testDist;
	float32 distToTarget;
	float32 fireLerp;
	float32 closeDist;
	int32 closeIdx;
	xMat4x3 targetMat;
	xVec3 mirrorVec;
	// Line 2865, Address: 0x2501c0, Func Offset: 0
	// Line 2870, Address: 0x2501c4, Func Offset: 0x4
	// Line 2865, Address: 0x2501c8, Func Offset: 0x8
	// Line 2869, Address: 0x2501d0, Func Offset: 0x10
	// Line 2870, Address: 0x2501e0, Func Offset: 0x20
	// Line 2872, Address: 0x2501f4, Func Offset: 0x34
	// Line 2874, Address: 0x25021c, Func Offset: 0x5c
	// Line 2898, Address: 0x25022c, Func Offset: 0x6c
	// Line 2896, Address: 0x250230, Func Offset: 0x70
	// Line 2898, Address: 0x250234, Func Offset: 0x74
	// Line 2874, Address: 0x250238, Func Offset: 0x78
	// Line 2896, Address: 0x25024c, Func Offset: 0x8c
	// Line 2898, Address: 0x250254, Func Offset: 0x94
	// Line 2900, Address: 0x250368, Func Offset: 0x1a8
	// Line 2899, Address: 0x25036c, Func Offset: 0x1ac
	// Line 2900, Address: 0x250370, Func Offset: 0x1b0
	// Line 2901, Address: 0x250384, Func Offset: 0x1c4
	// Line 2898, Address: 0x25038c, Func Offset: 0x1cc
	// Line 2901, Address: 0x250394, Func Offset: 0x1d4
	// Line 2898, Address: 0x250398, Func Offset: 0x1d8
	// Line 2899, Address: 0x2503a4, Func Offset: 0x1e4
	// Line 2901, Address: 0x2503ac, Func Offset: 0x1ec
	// Line 2902, Address: 0x2504d0, Func Offset: 0x310
	// Line 2903, Address: 0x2504d4, Func Offset: 0x314
	// Line 2917, Address: 0x250518, Func Offset: 0x358
	// Line 2912, Address: 0x25051c, Func Offset: 0x35c
	// Line 2917, Address: 0x250520, Func Offset: 0x360
	// Line 2911, Address: 0x250524, Func Offset: 0x364
	// Line 2913, Address: 0x250528, Func Offset: 0x368
	// Line 2914, Address: 0x25052c, Func Offset: 0x36c
	// Line 2917, Address: 0x250530, Func Offset: 0x370
	// Line 2914, Address: 0x250538, Func Offset: 0x378
	// Line 2917, Address: 0x25053c, Func Offset: 0x37c
	// Line 2919, Address: 0x250560, Func Offset: 0x3a0
	// Line 2920, Address: 0x250568, Func Offset: 0x3a8
	// Line 2924, Address: 0x250598, Func Offset: 0x3d8
	// Line 2925, Address: 0x2505a0, Func Offset: 0x3e0
	// Line 2924, Address: 0x2505a4, Func Offset: 0x3e4
	// Line 2925, Address: 0x2505ac, Func Offset: 0x3ec
	// Line 2926, Address: 0x2505b0, Func Offset: 0x3f0
	// Line 2932, Address: 0x2505b8, Func Offset: 0x3f8
	// Line 2930, Address: 0x2505bc, Func Offset: 0x3fc
	// Line 2932, Address: 0x2505c0, Func Offset: 0x400
	// Line 2928, Address: 0x2505c4, Func Offset: 0x404
	// Line 2929, Address: 0x2505c8, Func Offset: 0x408
	// Line 2932, Address: 0x2505cc, Func Offset: 0x40c
	// Line 2936, Address: 0x2505d4, Func Offset: 0x414
	// Line 2937, Address: 0x2505d8, Func Offset: 0x418
	// Line 2936, Address: 0x2505dc, Func Offset: 0x41c
	// Line 2938, Address: 0x2505e0, Func Offset: 0x420
	// Line 2936, Address: 0x2505e4, Func Offset: 0x424
	// Line 2938, Address: 0x2505e8, Func Offset: 0x428
	// Line 2939, Address: 0x2505f4, Func Offset: 0x434
	// Line 2938, Address: 0x2505f8, Func Offset: 0x438
	// Line 2939, Address: 0x250600, Func Offset: 0x440
	// Line 2940, Address: 0x250740, Func Offset: 0x580
	// Line 2941, Address: 0x250750, Func Offset: 0x590
	// Line 2943, Address: 0x25075c, Func Offset: 0x59c
	// Line 2942, Address: 0x250760, Func Offset: 0x5a0
	// Line 2944, Address: 0x250764, Func Offset: 0x5a4
	// Line 2945, Address: 0x250768, Func Offset: 0x5a8
	// Line 2948, Address: 0x25076c, Func Offset: 0x5ac
	// Line 2950, Address: 0x250780, Func Offset: 0x5c0
	// Line 2951, Address: 0x250788, Func Offset: 0x5c8
	// Line 2959, Address: 0x2507a4, Func Offset: 0x5e4
	// Line 2960, Address: 0x2507a8, Func Offset: 0x5e8
	// Line 2962, Address: 0x2507ac, Func Offset: 0x5ec
	// Line 2959, Address: 0x2507b0, Func Offset: 0x5f0
	// Line 2962, Address: 0x2507b4, Func Offset: 0x5f4
	// Line 2951, Address: 0x2507b8, Func Offset: 0x5f8
	// Line 2959, Address: 0x2507bc, Func Offset: 0x5fc
	// Line 2960, Address: 0x2507c0, Func Offset: 0x600
	// Line 2961, Address: 0x2507c4, Func Offset: 0x604
	// Line 2960, Address: 0x2507c8, Func Offset: 0x608
	// Line 2959, Address: 0x2507d0, Func Offset: 0x610
	// Line 2962, Address: 0x2507d4, Func Offset: 0x614
	// Line 2959, Address: 0x2507d8, Func Offset: 0x618
	// Line 2962, Address: 0x2507dc, Func Offset: 0x61c
	// Line 2961, Address: 0x2507e0, Func Offset: 0x620
	// Line 2959, Address: 0x2507e4, Func Offset: 0x624
	// Line 2961, Address: 0x2507e8, Func Offset: 0x628
	// Line 2962, Address: 0x2507f8, Func Offset: 0x638
	// Line 2959, Address: 0x2507fc, Func Offset: 0x63c
	// Line 2961, Address: 0x250800, Func Offset: 0x640
	// Line 2962, Address: 0x250804, Func Offset: 0x644
	// Line 2963, Address: 0x25085c, Func Offset: 0x69c
	// Line 2964, Address: 0x250860, Func Offset: 0x6a0
	// Line 2963, Address: 0x250864, Func Offset: 0x6a4
	// Line 2965, Address: 0x250868, Func Offset: 0x6a8
	// Line 2968, Address: 0x250870, Func Offset: 0x6b0
	// Line 2965, Address: 0x250874, Func Offset: 0x6b4
	// Line 2963, Address: 0x250878, Func Offset: 0x6b8
	// Line 2964, Address: 0x250888, Func Offset: 0x6c8
	// Line 2963, Address: 0x25088c, Func Offset: 0x6cc
	// Line 2965, Address: 0x250898, Func Offset: 0x6d8
	// Line 2963, Address: 0x2508a8, Func Offset: 0x6e8
	// Line 2971, Address: 0x2508ac, Func Offset: 0x6ec
	// Line 2965, Address: 0x2508b0, Func Offset: 0x6f0
	// Line 2969, Address: 0x2508b4, Func Offset: 0x6f4
	// Line 2965, Address: 0x2508b8, Func Offset: 0x6f8
	// Line 2963, Address: 0x2508bc, Func Offset: 0x6fc
	// Line 2965, Address: 0x2508c0, Func Offset: 0x700
	// Line 2964, Address: 0x2508d0, Func Offset: 0x710
	// Line 2971, Address: 0x2508d4, Func Offset: 0x714
	// Line 2964, Address: 0x2508d8, Func Offset: 0x718
	// Line 2965, Address: 0x2508e0, Func Offset: 0x720
	// Line 2964, Address: 0x2508f0, Func Offset: 0x730
	// Line 2968, Address: 0x2508f4, Func Offset: 0x734
	// Line 2969, Address: 0x2508f8, Func Offset: 0x738
	// Line 2971, Address: 0x2508fc, Func Offset: 0x73c
	// Line 2964, Address: 0x250900, Func Offset: 0x740
	// Line 2969, Address: 0x250908, Func Offset: 0x748
	// Line 2970, Address: 0x25090c, Func Offset: 0x74c
	// Line 2971, Address: 0x250910, Func Offset: 0x750
	// Line 2972, Address: 0x250948, Func Offset: 0x788
	// Line 2973, Address: 0x25094c, Func Offset: 0x78c
	// Line 2972, Address: 0x250958, Func Offset: 0x798
	// Line 2973, Address: 0x250960, Func Offset: 0x7a0
	// Line 2983, Address: 0x2509b0, Func Offset: 0x7f0
	// Func End, Address: 0x2509c0, Func Offset: 0x800
}

// CamStateChange__11zNMENeptuneFUib
// Start address: 0x2509c0
void zNMENeptune::CamStateChange(uint32 newCamState, uint8 force_cut)
{
	// Line 2763, Address: 0x2509c0, Func Offset: 0
	// Line 2766, Address: 0x2509c4, Func Offset: 0x4
	// Line 2763, Address: 0x2509c8, Func Offset: 0x8
	// Line 2766, Address: 0x2509e0, Func Offset: 0x20
	// Line 2767, Address: 0x2509ec, Func Offset: 0x2c
	// Line 2768, Address: 0x250a9c, Func Offset: 0xdc
	// Line 2769, Address: 0x250aa4, Func Offset: 0xe4
	// Line 2779, Address: 0x250b58, Func Offset: 0x198
	// Line 2780, Address: 0x250b64, Func Offset: 0x1a4
	// Line 2787, Address: 0x250b6c, Func Offset: 0x1ac
	// Line 2788, Address: 0x250b78, Func Offset: 0x1b8
	// Line 2789, Address: 0x250b7c, Func Offset: 0x1bc
	// Line 2788, Address: 0x250b80, Func Offset: 0x1c0
	// Line 2789, Address: 0x250b84, Func Offset: 0x1c4
	// Line 2790, Address: 0x250b88, Func Offset: 0x1c8
	// Line 2791, Address: 0x250b98, Func Offset: 0x1d8
	// Line 2792, Address: 0x250ba4, Func Offset: 0x1e4
	// Line 2793, Address: 0x250bb0, Func Offset: 0x1f0
	// Line 2794, Address: 0x250bb8, Func Offset: 0x1f8
	// Line 2796, Address: 0x250bc0, Func Offset: 0x200
	// Line 2798, Address: 0x250bc8, Func Offset: 0x208
	// Line 2797, Address: 0x250bcc, Func Offset: 0x20c
	// Line 2798, Address: 0x250bd0, Func Offset: 0x210
	// Line 2799, Address: 0x250bd4, Func Offset: 0x214
	// Line 2800, Address: 0x250be0, Func Offset: 0x220
	// Line 2801, Address: 0x250bec, Func Offset: 0x22c
	// Line 2802, Address: 0x250bf8, Func Offset: 0x238
	// Line 2803, Address: 0x250c00, Func Offset: 0x240
	// Line 2808, Address: 0x250c0c, Func Offset: 0x24c
	// Line 2810, Address: 0x250c18, Func Offset: 0x258
	// Line 2809, Address: 0x250c1c, Func Offset: 0x25c
	// Line 2810, Address: 0x250c20, Func Offset: 0x260
	// Line 2809, Address: 0x250c24, Func Offset: 0x264
	// Line 2811, Address: 0x250c28, Func Offset: 0x268
	// Line 2810, Address: 0x250c2c, Func Offset: 0x26c
	// Line 2812, Address: 0x250c30, Func Offset: 0x270
	// Line 2813, Address: 0x250c38, Func Offset: 0x278
	// Line 2814, Address: 0x250c3c, Func Offset: 0x27c
	// Line 2818, Address: 0x250c40, Func Offset: 0x280
	// Line 2819, Address: 0x250c54, Func Offset: 0x294
	// Line 2820, Address: 0x250c5c, Func Offset: 0x29c
	// Line 2825, Address: 0x250c64, Func Offset: 0x2a4
	// Line 2782, Address: 0x250c78, Func Offset: 0x2b8
	// Line 2825, Address: 0x250c7c, Func Offset: 0x2bc
	// Line 2783, Address: 0x250c84, Func Offset: 0x2c4
	// Line 2825, Address: 0x250c88, Func Offset: 0x2c8
	// Line 2784, Address: 0x250c90, Func Offset: 0x2d0
	// Line 2825, Address: 0x250c98, Func Offset: 0x2d8
	// Line 2787, Address: 0x250ca0, Func Offset: 0x2e0
	// Line 2825, Address: 0x250ca8, Func Offset: 0x2e8
	// Func End, Address: 0x250cc0, Func Offset: 0x300
}

// SndLoop3D__11zNMENeptuneFQ27Neptune6eSOUNDP5xVec3Pv
// Start address: 0x250cc0
zLoopingSound* zNMENeptune::SndLoop3D(eSOUND soundEnum, xVec3* playpos, void* context)
{
	int32 i;
	uint32 sndID;
	uint32 sndFlags;
	zLoopingSound* looper;
	// Line 2656, Address: 0x250cc0, Func Offset: 0
	// Line 2660, Address: 0x250cc4, Func Offset: 0x4
	// Line 2656, Address: 0x250cc8, Func Offset: 0x8
	// Line 2660, Address: 0x250cdc, Func Offset: 0x1c
	// Line 2664, Address: 0x250cec, Func Offset: 0x2c
	// Line 2660, Address: 0x250cf0, Func Offset: 0x30
	// Line 2664, Address: 0x250cf4, Func Offset: 0x34
	// Line 2665, Address: 0x250cfc, Func Offset: 0x3c
	// Line 2664, Address: 0x250d00, Func Offset: 0x40
	// Line 2669, Address: 0x250d04, Func Offset: 0x44
	// Line 2664, Address: 0x250d08, Func Offset: 0x48
	// Line 2670, Address: 0x250d0c, Func Offset: 0x4c
	// Line 2671, Address: 0x250d14, Func Offset: 0x54
	// Line 2672, Address: 0x250d2c, Func Offset: 0x6c
	// Line 2673, Address: 0x250d40, Func Offset: 0x80
	// Line 2675, Address: 0x250d48, Func Offset: 0x88
	// Line 2676, Address: 0x250d58, Func Offset: 0x98
	// Line 2681, Address: 0x250d60, Func Offset: 0xa0
	// Line 2682, Address: 0x250d74, Func Offset: 0xb4
	// Line 2684, Address: 0x250d78, Func Offset: 0xb8
	// Line 2686, Address: 0x250d80, Func Offset: 0xc0
	// Line 2685, Address: 0x250d84, Func Offset: 0xc4
	// Line 2686, Address: 0x250d88, Func Offset: 0xc8
	// Line 2688, Address: 0x250d9c, Func Offset: 0xdc
	// Line 2689, Address: 0x250da4, Func Offset: 0xe4
	// Line 2690, Address: 0x250dac, Func Offset: 0xec
	// Line 2691, Address: 0x250db4, Func Offset: 0xf4
	// Line 2695, Address: 0x250dbc, Func Offset: 0xfc
	// Line 2697, Address: 0x250dfc, Func Offset: 0x13c
	// Line 2700, Address: 0x250e0c, Func Offset: 0x14c
	// Line 2661, Address: 0x250e14, Func Offset: 0x154
	// Line 2677, Address: 0x250e1c, Func Offset: 0x15c
	// Line 2698, Address: 0x250e24, Func Offset: 0x164
	// Line 2701, Address: 0x250e28, Func Offset: 0x168
	// Func End, Address: 0x250e44, Func Offset: 0x184
}

// CommonReset__11zNMENeptuneFv
// Start address: 0x250e50
void zNMENeptune::CommonReset()
{
	int32 i;
	zEntSimpleObj* simpList;
	int32 simpCount;
	int32 crowdCount;
	CrowdSortStruct crowdList[20];
	// Line 2440, Address: 0x250e50, Func Offset: 0
	// Line 2450, Address: 0x250e70, Func Offset: 0x20
	// Line 2440, Address: 0x250e74, Func Offset: 0x24
	// Line 2447, Address: 0x250e80, Func Offset: 0x30
	// Line 2446, Address: 0x250e84, Func Offset: 0x34
	// Line 2450, Address: 0x250e88, Func Offset: 0x38
	// Line 2451, Address: 0x250e98, Func Offset: 0x48
	// Line 2452, Address: 0x250eb0, Func Offset: 0x60
	// Line 2453, Address: 0x250ebc, Func Offset: 0x6c
	// Line 2454, Address: 0x250ec4, Func Offset: 0x74
	// Line 2456, Address: 0x250edc, Func Offset: 0x8c
	// Line 2454, Address: 0x250ee0, Func Offset: 0x90
	// Line 2459, Address: 0x250ee4, Func Offset: 0x94
	// Line 2464, Address: 0x250ef8, Func Offset: 0xa8
	// Line 2465, Address: 0x250f10, Func Offset: 0xc0
	// Line 2466, Address: 0x250f20, Func Offset: 0xd0
	// Line 2474, Address: 0x250f2c, Func Offset: 0xdc
	// Line 2475, Address: 0x250f30, Func Offset: 0xe0
	// Line 2471, Address: 0x250f34, Func Offset: 0xe4
	// Line 2466, Address: 0x250f38, Func Offset: 0xe8
	// Line 2472, Address: 0x250f3c, Func Offset: 0xec
	// Line 2474, Address: 0x250f44, Func Offset: 0xf4
	// Line 2475, Address: 0x250f48, Func Offset: 0xf8
	// Line 2471, Address: 0x250f4c, Func Offset: 0xfc
	// Line 2470, Address: 0x250f50, Func Offset: 0x100
	// Line 2471, Address: 0x250f58, Func Offset: 0x108
	// Line 2472, Address: 0x250f60, Func Offset: 0x110
	// Line 2473, Address: 0x250f78, Func Offset: 0x128
	// Line 2474, Address: 0x250f80, Func Offset: 0x130
	// Line 2475, Address: 0x250f88, Func Offset: 0x138
	// Line 2477, Address: 0x250f90, Func Offset: 0x140
	// Line 2478, Address: 0x250f94, Func Offset: 0x144
	// Line 2477, Address: 0x250f9c, Func Offset: 0x14c
	// Line 2478, Address: 0x250fa4, Func Offset: 0x154
	// Line 2482, Address: 0x250fb0, Func Offset: 0x160
	// Line 2483, Address: 0x250fb8, Func Offset: 0x168
	// Line 2484, Address: 0x250fc0, Func Offset: 0x170
	// Line 2485, Address: 0x250fd0, Func Offset: 0x180
	// Line 2487, Address: 0x250fd4, Func Offset: 0x184
	// Line 2488, Address: 0x250fe0, Func Offset: 0x190
	// Line 2491, Address: 0x250fe8, Func Offset: 0x198
	// Line 2494, Address: 0x250fec, Func Offset: 0x19c
	// Line 2491, Address: 0x250ff0, Func Offset: 0x1a0
	// Line 2506, Address: 0x250ff4, Func Offset: 0x1a4
	// Line 2491, Address: 0x250ff8, Func Offset: 0x1a8
	// Line 2494, Address: 0x251000, Func Offset: 0x1b0
	// Line 2502, Address: 0x251004, Func Offset: 0x1b4
	// Line 2494, Address: 0x251008, Func Offset: 0x1b8
	// Line 2495, Address: 0x25100c, Func Offset: 0x1bc
	// Line 2496, Address: 0x25101c, Func Offset: 0x1cc
	// Line 2497, Address: 0x251020, Func Offset: 0x1d0
	// Line 2498, Address: 0x251024, Func Offset: 0x1d4
	// Line 2499, Address: 0x251028, Func Offset: 0x1d8
	// Line 2500, Address: 0x25102c, Func Offset: 0x1dc
	// Line 2501, Address: 0x251030, Func Offset: 0x1e0
	// Line 2502, Address: 0x251034, Func Offset: 0x1e4
	// Line 2507, Address: 0x251038, Func Offset: 0x1e8
	// Line 2510, Address: 0x251044, Func Offset: 0x1f4
	// Line 2507, Address: 0x251050, Func Offset: 0x200
	// Line 2510, Address: 0x251054, Func Offset: 0x204
	// Line 2513, Address: 0x25105c, Func Offset: 0x20c
	// Line 2514, Address: 0x251060, Func Offset: 0x210
	// Line 2517, Address: 0x251068, Func Offset: 0x218
	// Line 2518, Address: 0x251070, Func Offset: 0x220
	// Line 2519, Address: 0x251074, Func Offset: 0x224
	// Line 2518, Address: 0x251078, Func Offset: 0x228
	// Line 2519, Address: 0x251080, Func Offset: 0x230
	// Line 2520, Address: 0x251090, Func Offset: 0x240
	// Line 2521, Address: 0x2510a0, Func Offset: 0x250
	// Line 2523, Address: 0x2510a8, Func Offset: 0x258
	// Line 2524, Address: 0x2510b0, Func Offset: 0x260
	// Line 2525, Address: 0x2510b4, Func Offset: 0x264
	// Line 2524, Address: 0x2510b8, Func Offset: 0x268
	// Line 2525, Address: 0x2510c0, Func Offset: 0x270
	// Line 2526, Address: 0x2510d0, Func Offset: 0x280
	// Line 2528, Address: 0x2510e0, Func Offset: 0x290
	// Line 2533, Address: 0x2510f0, Func Offset: 0x2a0
	// Line 2534, Address: 0x2510f8, Func Offset: 0x2a8
	// Line 2535, Address: 0x251104, Func Offset: 0x2b4
	// Line 2536, Address: 0x251118, Func Offset: 0x2c8
	// Line 2540, Address: 0x25112c, Func Offset: 0x2dc
	// Line 2547, Address: 0x251130, Func Offset: 0x2e0
	// Line 2540, Address: 0x251134, Func Offset: 0x2e4
	// Line 2547, Address: 0x251138, Func Offset: 0x2e8
	// Line 2540, Address: 0x25113c, Func Offset: 0x2ec
	// Line 2547, Address: 0x251140, Func Offset: 0x2f0
	// Line 2541, Address: 0x251144, Func Offset: 0x2f4
	// Line 2542, Address: 0x251148, Func Offset: 0x2f8
	// Line 2543, Address: 0x25114c, Func Offset: 0x2fc
	// Line 2547, Address: 0x251150, Func Offset: 0x300
	// Line 2548, Address: 0x251158, Func Offset: 0x308
	// Line 2549, Address: 0x251168, Func Offset: 0x318
	// Line 2552, Address: 0x251178, Func Offset: 0x328
	// Line 2566, Address: 0x25117c, Func Offset: 0x32c
	// Line 2553, Address: 0x251180, Func Offset: 0x330
	// Line 2568, Address: 0x251184, Func Offset: 0x334
	// Line 2554, Address: 0x251188, Func Offset: 0x338
	// Line 2580, Address: 0x25118c, Func Offset: 0x33c
	// Line 2555, Address: 0x251190, Func Offset: 0x340
	// Line 2556, Address: 0x251194, Func Offset: 0x344
	// Line 2557, Address: 0x251198, Func Offset: 0x348
	// Line 2558, Address: 0x25119c, Func Offset: 0x34c
	// Line 2559, Address: 0x2511a0, Func Offset: 0x350
	// Line 2560, Address: 0x2511a4, Func Offset: 0x354
	// Line 2561, Address: 0x2511a8, Func Offset: 0x358
	// Line 2562, Address: 0x2511ac, Func Offset: 0x35c
	// Line 2563, Address: 0x2511b0, Func Offset: 0x360
	// Line 2564, Address: 0x2511b4, Func Offset: 0x364
	// Line 2565, Address: 0x2511b8, Func Offset: 0x368
	// Line 2566, Address: 0x2511bc, Func Offset: 0x36c
	// Line 2567, Address: 0x2511c0, Func Offset: 0x370
	// Line 2568, Address: 0x2511c4, Func Offset: 0x374
	// Line 2569, Address: 0x2511c8, Func Offset: 0x378
	// Line 2570, Address: 0x2511cc, Func Offset: 0x37c
	// Line 2573, Address: 0x2511d0, Func Offset: 0x380
	// Line 2576, Address: 0x2511d4, Func Offset: 0x384
	// Line 2577, Address: 0x2511e4, Func Offset: 0x394
	// Line 2580, Address: 0x2511f0, Func Offset: 0x3a0
	// Line 2583, Address: 0x2511f8, Func Offset: 0x3a8
	// Line 2584, Address: 0x251200, Func Offset: 0x3b0
	// Line 2586, Address: 0x251274, Func Offset: 0x424
	// Line 2587, Address: 0x251278, Func Offset: 0x428
	// Line 2586, Address: 0x25127c, Func Offset: 0x42c
	// Line 2587, Address: 0x251280, Func Offset: 0x430
	// Line 2586, Address: 0x251284, Func Offset: 0x434
	// Line 2588, Address: 0x251288, Func Offset: 0x438
	// Line 2589, Address: 0x2512d4, Func Offset: 0x484
	// Line 2590, Address: 0x2512d8, Func Offset: 0x488
	// Line 2591, Address: 0x2512dc, Func Offset: 0x48c
	// Line 2592, Address: 0x2512e0, Func Offset: 0x490
	// Line 2589, Address: 0x2512e4, Func Offset: 0x494
	// Line 2590, Address: 0x2512e8, Func Offset: 0x498
	// Line 2591, Address: 0x2512ec, Func Offset: 0x49c
	// Line 2588, Address: 0x2512f0, Func Offset: 0x4a0
	// Line 2592, Address: 0x2512f4, Func Offset: 0x4a4
	// Line 2589, Address: 0x2512f8, Func Offset: 0x4a8
	// Line 2602, Address: 0x2512fc, Func Offset: 0x4ac
	// Line 2590, Address: 0x251300, Func Offset: 0x4b0
	// Line 2593, Address: 0x251304, Func Offset: 0x4b4
	// Line 2591, Address: 0x251308, Func Offset: 0x4b8
	// Line 2593, Address: 0x25130c, Func Offset: 0x4bc
	// Line 2592, Address: 0x251310, Func Offset: 0x4c0
	// Line 2594, Address: 0x251314, Func Offset: 0x4c4
	// Line 2593, Address: 0x251318, Func Offset: 0x4c8
	// Line 2594, Address: 0x25131c, Func Offset: 0x4cc
	// Line 2595, Address: 0x251320, Func Offset: 0x4d0
	// Line 2594, Address: 0x251324, Func Offset: 0x4d4
	// Line 2595, Address: 0x251328, Func Offset: 0x4d8
	// Line 2598, Address: 0x251330, Func Offset: 0x4e0
	// Line 2602, Address: 0x251338, Func Offset: 0x4e8
	// Line 2611, Address: 0x251344, Func Offset: 0x4f4
	// Line 2619, Address: 0x251358, Func Offset: 0x508
	// Line 2620, Address: 0x251378, Func Offset: 0x528
	// Line 2621, Address: 0x251380, Func Offset: 0x530
	// Line 2624, Address: 0x251394, Func Offset: 0x544
	// Line 2508, Address: 0x25139c, Func Offset: 0x54c
	// Line 2624, Address: 0x2513a0, Func Offset: 0x550
	// Line 2612, Address: 0x2513b0, Func Offset: 0x560
	// Line 2624, Address: 0x2513b4, Func Offset: 0x564
	// Line 2613, Address: 0x2513b8, Func Offset: 0x568
	// Line 2624, Address: 0x2513bc, Func Offset: 0x56c
	// Line 2613, Address: 0x2513c0, Func Offset: 0x570
	// Line 2624, Address: 0x2513d0, Func Offset: 0x580
	// Line 2614, Address: 0x2513dc, Func Offset: 0x58c
	// Line 2624, Address: 0x2513f4, Func Offset: 0x5a4
	// Line 2618, Address: 0x25141c, Func Offset: 0x5cc
	// Line 2624, Address: 0x251424, Func Offset: 0x5d4
	// Func End, Address: 0x251448, Func Offset: 0x5f8
}

// Init__11zNMENeptuneFP9xEntAsset
// Start address: 0x251450
void zNMENeptune::Init(xEntAsset* entasset)
{
	int32 i;
	xAnimTable* table;
	xAnimState* currstate;
	iAnimSKBHeader* skb;
	RwRGBAReal tempColor;
	RpAtomic* trident_model;
	RpAtomic* bucket_model;
	int32 matidx;
	RpGeometry* geom;
	RpMaterialList* matlist;
	RpMaterial* scopeMat;
	int32 i;
	int32 j;
	// Line 2273, Address: 0x251450, Func Offset: 0
	// Line 2277, Address: 0x251454, Func Offset: 0x4
	// Line 2273, Address: 0x251458, Func Offset: 0x8
	// Line 2277, Address: 0x251470, Func Offset: 0x20
	// Line 2273, Address: 0x251474, Func Offset: 0x24
	// Line 2277, Address: 0x25147c, Func Offset: 0x2c
	// Line 2278, Address: 0x251498, Func Offset: 0x48
	// Line 2281, Address: 0x2514bc, Func Offset: 0x6c
	// Line 2283, Address: 0x2514cc, Func Offset: 0x7c
	// Line 2284, Address: 0x2514d0, Func Offset: 0x80
	// Line 2287, Address: 0x2514d8, Func Offset: 0x88
	// Line 2288, Address: 0x2514dc, Func Offset: 0x8c
	// Line 2285, Address: 0x2514e0, Func Offset: 0x90
	// Line 2286, Address: 0x251500, Func Offset: 0xb0
	// Line 2287, Address: 0x25150c, Func Offset: 0xbc
	// Line 2291, Address: 0x25151c, Func Offset: 0xcc
	// Line 2292, Address: 0x251540, Func Offset: 0xf0
	// Line 2293, Address: 0x251544, Func Offset: 0xf4
	// Line 2294, Address: 0x251550, Func Offset: 0x100
	// Line 2295, Address: 0x251554, Func Offset: 0x104
	// Line 2296, Address: 0x25155c, Func Offset: 0x10c
	// Line 2298, Address: 0x251580, Func Offset: 0x130
	// Line 2299, Address: 0x251584, Func Offset: 0x134
	// Line 2298, Address: 0x251588, Func Offset: 0x138
	// Line 2299, Address: 0x2515a0, Func Offset: 0x150
	// Line 2288, Address: 0x2515cc, Func Offset: 0x17c
	// Line 2299, Address: 0x2515d0, Func Offset: 0x180
	// Line 2288, Address: 0x2515d8, Func Offset: 0x188
	// Line 2299, Address: 0x2515dc, Func Offset: 0x18c
	// Line 2288, Address: 0x2515e4, Func Offset: 0x194
	// Line 2299, Address: 0x2515e8, Func Offset: 0x198
	// Line 2289, Address: 0x2515f0, Func Offset: 0x1a0
	// Line 2300, Address: 0x251600, Func Offset: 0x1b0
	// Line 2301, Address: 0x251604, Func Offset: 0x1b4
	// Line 2304, Address: 0x251610, Func Offset: 0x1c0
	// Line 2312, Address: 0x251614, Func Offset: 0x1c4
	// Line 2315, Address: 0x251630, Func Offset: 0x1e0
	// Line 2316, Address: 0x251640, Func Offset: 0x1f0
	// Line 2317, Address: 0x2516f4, Func Offset: 0x2a4
	// Line 2318, Address: 0x251704, Func Offset: 0x2b4
	// Line 2321, Address: 0x251708, Func Offset: 0x2b8
	// Line 2318, Address: 0x251714, Func Offset: 0x2c4
	// Line 2321, Address: 0x251718, Func Offset: 0x2c8
	// Line 2323, Address: 0x251728, Func Offset: 0x2d8
	// Line 2325, Address: 0x251734, Func Offset: 0x2e4
	// Line 2323, Address: 0x251738, Func Offset: 0x2e8
	// Line 2325, Address: 0x25173c, Func Offset: 0x2ec
	// Line 2323, Address: 0x251740, Func Offset: 0x2f0
	// Line 2325, Address: 0x251744, Func Offset: 0x2f4
	// Line 2323, Address: 0x251748, Func Offset: 0x2f8
	// Line 2324, Address: 0x251764, Func Offset: 0x314
	// Line 2325, Address: 0x251768, Func Offset: 0x318
	// Line 2326, Address: 0x251774, Func Offset: 0x324
	// Line 2327, Address: 0x251780, Func Offset: 0x330
	// Line 2329, Address: 0x25178c, Func Offset: 0x33c
	// Line 2332, Address: 0x251798, Func Offset: 0x348
	// Line 2333, Address: 0x2517a4, Func Offset: 0x354
	// Line 2334, Address: 0x2517b0, Func Offset: 0x360
	// Line 2338, Address: 0x2517bc, Func Offset: 0x36c
	// Line 2336, Address: 0x2517c0, Func Offset: 0x370
	// Line 2338, Address: 0x2517c4, Func Offset: 0x374
	// Line 2335, Address: 0x2517c8, Func Offset: 0x378
	// Line 2338, Address: 0x2517d0, Func Offset: 0x380
	// Line 2335, Address: 0x2517d4, Func Offset: 0x384
	// Line 2338, Address: 0x2517d8, Func Offset: 0x388
	// Line 2337, Address: 0x2517dc, Func Offset: 0x38c
	// Line 2336, Address: 0x2517e0, Func Offset: 0x390
	// Line 2337, Address: 0x2517e4, Func Offset: 0x394
	// Line 2336, Address: 0x2517e8, Func Offset: 0x398
	// Line 2338, Address: 0x2517f0, Func Offset: 0x3a0
	// Line 2339, Address: 0x251800, Func Offset: 0x3b0
	// Line 2338, Address: 0x251804, Func Offset: 0x3b4
	// Line 2339, Address: 0x251814, Func Offset: 0x3c4
	// Line 2340, Address: 0x25181c, Func Offset: 0x3cc
	// Line 2343, Address: 0x251838, Func Offset: 0x3e8
	// Line 2344, Address: 0x251844, Func Offset: 0x3f4
	// Line 2345, Address: 0x251850, Func Offset: 0x400
	// Line 2353, Address: 0x25185c, Func Offset: 0x40c
	// Line 2348, Address: 0x251860, Func Offset: 0x410
	// Line 2353, Address: 0x251864, Func Offset: 0x414
	// Line 2349, Address: 0x251868, Func Offset: 0x418
	// Line 2353, Address: 0x25186c, Func Offset: 0x41c
	// Line 2358, Address: 0x251884, Func Offset: 0x434
	// Line 2366, Address: 0x251898, Func Offset: 0x448
	// Line 2367, Address: 0x2518a0, Func Offset: 0x450
	// Line 2371, Address: 0x2518c0, Func Offset: 0x470
	// Line 2368, Address: 0x2518c4, Func Offset: 0x474
	// Line 2371, Address: 0x2518cc, Func Offset: 0x47c
	// Line 2368, Address: 0x2518d0, Func Offset: 0x480
	// Line 2371, Address: 0x2518d4, Func Offset: 0x484
	// Line 2376, Address: 0x2518dc, Func Offset: 0x48c
	// Line 2382, Address: 0x2518f4, Func Offset: 0x4a4
	// Line 2386, Address: 0x2518fc, Func Offset: 0x4ac
	// Line 2389, Address: 0x251910, Func Offset: 0x4c0
	// Line 2390, Address: 0x251924, Func Offset: 0x4d4
	// Line 2391, Address: 0x251938, Func Offset: 0x4e8
	// Line 2394, Address: 0x251948, Func Offset: 0x4f8
	// Line 2391, Address: 0x25194c, Func Offset: 0x4fc
	// Line 2394, Address: 0x251950, Func Offset: 0x500
	// Line 2395, Address: 0x251958, Func Offset: 0x508
	// Line 2396, Address: 0x251960, Func Offset: 0x510
	// Line 2395, Address: 0x251964, Func Offset: 0x514
	// Line 2396, Address: 0x251968, Func Offset: 0x518
	// Line 2403, Address: 0x251978, Func Offset: 0x528
	// Line 2405, Address: 0x251980, Func Offset: 0x530
	// Line 2407, Address: 0x251984, Func Offset: 0x534
	// Line 2408, Address: 0x251988, Func Offset: 0x538
	// Line 2409, Address: 0x2519b0, Func Offset: 0x560
	// Line 2410, Address: 0x2519cc, Func Offset: 0x57c
	// Line 2411, Address: 0x2519d8, Func Offset: 0x588
	// Line 2413, Address: 0x2519ec, Func Offset: 0x59c
	// Line 2414, Address: 0x251a00, Func Offset: 0x5b0
	// Line 2416, Address: 0x251a08, Func Offset: 0x5b8
	// Line 2422, Address: 0x251a18, Func Offset: 0x5c8
	// Line 2417, Address: 0x251a24, Func Offset: 0x5d4
	// Line 2418, Address: 0x251a40, Func Offset: 0x5f0
	// Line 2425, Address: 0x251a4c, Func Offset: 0x5fc
	// Line 2418, Address: 0x251a58, Func Offset: 0x608
	// Line 2425, Address: 0x251a5c, Func Offset: 0x60c
	// Line 2422, Address: 0x251aa4, Func Offset: 0x654
	// Line 2425, Address: 0x251aa8, Func Offset: 0x658
	// Line 2426, Address: 0x251aac, Func Offset: 0x65c
	// Line 2428, Address: 0x251ac4, Func Offset: 0x674
	// Line 2437, Address: 0x251ac8, Func Offset: 0x678
	// Func End, Address: 0x251ae8, Func Offset: 0x698
}

// CreateAnimTable__11zNMENeptuneFP10xAnimTable
// Start address: 0x251af0
xAnimTable* zNMENeptune::CreateAnimTable(xAnimTable* table)
{
	int32 i;
	// Line 2212, Address: 0x251af0, Func Offset: 0
	// Line 2215, Address: 0x251b00, Func Offset: 0x10
	// Line 2212, Address: 0x251b04, Func Offset: 0x14
	// Line 2215, Address: 0x251b08, Func Offset: 0x18
	// Line 2212, Address: 0x251b0c, Func Offset: 0x1c
	// Line 2215, Address: 0x251b10, Func Offset: 0x20
	// Line 2216, Address: 0x251b20, Func Offset: 0x30
	// Line 2217, Address: 0x251b2c, Func Offset: 0x3c
	// Line 2216, Address: 0x251b34, Func Offset: 0x44
	// Line 2217, Address: 0x251b38, Func Offset: 0x48
	// Line 2220, Address: 0x251b40, Func Offset: 0x50
	// Line 2223, Address: 0x251b48, Func Offset: 0x58
	// Line 2224, Address: 0x251b54, Func Offset: 0x64
	// Line 2229, Address: 0x251b98, Func Offset: 0xa8
	// Line 2232, Address: 0x251ba8, Func Offset: 0xb8
	// Line 2233, Address: 0x251bf0, Func Offset: 0x100
	// Line 2234, Address: 0x251c38, Func Offset: 0x148
	// Line 2237, Address: 0x251c84, Func Offset: 0x194
	// Line 2238, Address: 0x251cd0, Func Offset: 0x1e0
	// Line 2239, Address: 0x251d1c, Func Offset: 0x22c
	// Line 2242, Address: 0x251d6c, Func Offset: 0x27c
	// Line 2243, Address: 0x251dbc, Func Offset: 0x2cc
	// Line 2244, Address: 0x251e0c, Func Offset: 0x31c
	// Line 2246, Address: 0x251e5c, Func Offset: 0x36c
	// Line 2250, Address: 0x251ea4, Func Offset: 0x3b4
	// Line 2252, Address: 0x251ef4, Func Offset: 0x404
	// Line 2255, Address: 0x251f44, Func Offset: 0x454
	// Line 2258, Address: 0x251f94, Func Offset: 0x4a4
	// Line 2259, Address: 0x251fe0, Func Offset: 0x4f0
	// Line 2260, Address: 0x25202c, Func Offset: 0x53c
	// Line 2261, Address: 0x252078, Func Offset: 0x588
	// Line 2264, Address: 0x2520bc, Func Offset: 0x5cc
	// Line 2265, Address: 0x252100, Func Offset: 0x610
	// Line 2266, Address: 0x25214c, Func Offset: 0x65c
	// Line 2267, Address: 0x252198, Func Offset: 0x6a8
	// Line 2269, Address: 0x2521e4, Func Offset: 0x6f4
	// Line 2220, Address: 0x2521ec, Func Offset: 0x6fc
	// Line 2269, Address: 0x2521f0, Func Offset: 0x700
	// Line 2270, Address: 0x252200, Func Offset: 0x710
	// Func End, Address: 0x25221c, Func Offset: 0x72c
}

// CreateConfig__11zNMENeptuneFPCc
// Start address: 0x252220
void zNMENeptune::CreateConfig()
{
	// Line 1966, Address: 0x252220, Func Offset: 0
	// Line 1967, Address: 0x252224, Func Offset: 0x4
	// Line 1966, Address: 0x252228, Func Offset: 0x8
	// Line 1967, Address: 0x25222c, Func Offset: 0xc
	// Line 1966, Address: 0x252230, Func Offset: 0x10
	// Line 1967, Address: 0x252234, Func Offset: 0x14
	// Line 1969, Address: 0x252240, Func Offset: 0x20
	// Line 1967, Address: 0x252244, Func Offset: 0x24
	// Line 1969, Address: 0x252248, Func Offset: 0x28
	// Line 1972, Address: 0x25225c, Func Offset: 0x3c
	// Line 1973, Address: 0x25228c, Func Offset: 0x6c
	// Line 1979, Address: 0x252294, Func Offset: 0x74
	// Line 1972, Address: 0x25229c, Func Offset: 0x7c
	// Line 1980, Address: 0x2522a4, Func Offset: 0x84
	// Func End, Address: 0x2522b4, Func Offset: 0x94
}

// destroy__11zCamNeptuneFv
// Start address: 0x2522c0
void zCamNeptune::destroy()
{
	// Line 1943, Address: 0x2522c0, Func Offset: 0
	// Func End, Address: 0x2522c8, Func Offset: 0x8
}

// update__11zCamNeptuneFR6xScenef
// Start address: 0x2522d0
void zCamNeptune::update()
{
	xVec3 atvec;
	xMat4x3 atmat;
	// Line 1898, Address: 0x2522d0, Func Offset: 0
	// Line 1900, Address: 0x2522d4, Func Offset: 0x4
	// Line 1898, Address: 0x2522d8, Func Offset: 0x8
	// Line 1900, Address: 0x2522dc, Func Offset: 0xc
	// Line 1898, Address: 0x2522e0, Func Offset: 0x10
	// Line 1900, Address: 0x2522e4, Func Offset: 0x14
	// Line 1906, Address: 0x2522f4, Func Offset: 0x24
	// Line 1911, Address: 0x252304, Func Offset: 0x34
	// Line 1915, Address: 0x252310, Func Offset: 0x40
	// Line 1917, Address: 0x252314, Func Offset: 0x44
	// Line 1921, Address: 0x25231c, Func Offset: 0x4c
	// Line 1934, Address: 0x252328, Func Offset: 0x58
	// Line 1938, Address: 0x25232c, Func Offset: 0x5c
	// Line 1939, Address: 0x252334, Func Offset: 0x64
	// Line 1913, Address: 0x25234c, Func Offset: 0x7c
	// Line 1939, Address: 0x252350, Func Offset: 0x80
	// Line 1927, Address: 0x252394, Func Offset: 0xc4
	// Line 1939, Address: 0x252398, Func Offset: 0xc8
	// Line 1928, Address: 0x2523a4, Func Offset: 0xd4
	// Line 1939, Address: 0x2523a8, Func Offset: 0xd8
	// Line 1929, Address: 0x2523c0, Func Offset: 0xf0
	// Line 1939, Address: 0x2523c4, Func Offset: 0xf4
	// Line 1932, Address: 0x2523d0, Func Offset: 0x100
	// Line 1939, Address: 0x2523d4, Func Offset: 0x104
	// Func End, Address: 0x252404, Func Offset: 0x134
}

// start__11zCamNeptuneFv
// Start address: 0x252410
void zCamNeptune::start()
{
	// Line 1892, Address: 0x252410, Func Offset: 0
	// Line 1895, Address: 0x252428, Func Offset: 0x18
	// Func End, Address: 0x252430, Func Offset: 0x20
}

// create__11zCamNeptuneFv
// Start address: 0x252430
void zCamNeptune::create()
{
	// Line 1879, Address: 0x252430, Func Offset: 0
	// Line 1881, Address: 0x25243c, Func Offset: 0xc
	// Line 1887, Address: 0x252444, Func Offset: 0x14
	// Line 1882, Address: 0x252448, Func Offset: 0x18
	// Line 1887, Address: 0x25244c, Func Offset: 0x1c
	// Line 1884, Address: 0x252450, Func Offset: 0x20
	// Line 1883, Address: 0x252454, Func Offset: 0x24
	// Line 1884, Address: 0x252458, Func Offset: 0x28
	// Line 1887, Address: 0x25245c, Func Offset: 0x2c
	// Line 1888, Address: 0x252490, Func Offset: 0x60
	// Func End, Address: 0x2524a0, Func Offset: 0x70
}

// __ct__11zCamNeptuneFv
// Start address: 0x2524a0
void* zCamNeptune::__ct()
{
	// Line 1873, Address: 0x2524a0, Func Offset: 0
	// Line 1874, Address: 0x2524ac, Func Offset: 0xc
	// Func End, Address: 0x2524b4, Func Offset: 0x14
}

// DamageExitCB__7NeptuneFP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x2524c0
uint32 DamageExitCB()
{
	// Line 1856, Address: 0x2524c0, Func Offset: 0
	// Line 1858, Address: 0x2524c8, Func Offset: 0x8
	// Line 1859, Address: 0x2524d0, Func Offset: 0x10
	// Line 1860, Address: 0x2524d4, Func Offset: 0x14
	// Line 1859, Address: 0x2524d8, Func Offset: 0x18
	// Line 1861, Address: 0x2524dc, Func Offset: 0x1c
	// Func End, Address: 0x2524e8, Func Offset: 0x28
}

// DamageCheck__7NeptuneFP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x2524f0
uint32 DamageCheck()
{
	// Line 1853, Address: 0x2524f0, Func Offset: 0
	// Line 1854, Address: 0x252554, Func Offset: 0x64
	// Func End, Address: 0x25255c, Func Offset: 0x6c
}

// NoStunCheck__7NeptuneFP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x252560
uint32 NoStunCheck()
{
	// Line 1849, Address: 0x252560, Func Offset: 0
	// Line 1850, Address: 0x2525f8, Func Offset: 0x98
	// Func End, Address: 0x252600, Func Offset: 0xa0
}

// ReflectStunCheck__7NeptuneFP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x252600
uint32 ReflectStunCheck()
{
	// Line 1843, Address: 0x252600, Func Offset: 0
	// Line 1846, Address: 0x252654, Func Offset: 0x54
	// Func End, Address: 0x25265c, Func Offset: 0x5c
}

// StunCheck__7NeptuneFP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x252660
uint32 StunCheck()
{
	// Line 1838, Address: 0x252660, Func Offset: 0
	// Line 1840, Address: 0x252698, Func Offset: 0x38
	// Func End, Address: 0x2526a0, Func Offset: 0x40
}

// OutrageEndCheck__7NeptuneFP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x2526a0
uint32 OutrageEndCheck()
{
	// Line 1834, Address: 0x2526a0, Func Offset: 0
	// Line 1835, Address: 0x2526ac, Func Offset: 0xc
	// Func End, Address: 0x2526b4, Func Offset: 0x14
}

// OutrageCheck__7NeptuneFP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x2526c0
uint32 OutrageCheck(xAnimTransition* tran)
{
	// Line 1830, Address: 0x2526c0, Func Offset: 0
	// Line 1831, Address: 0x2526ec, Func Offset: 0x2c
	// Func End, Address: 0x2526f4, Func Offset: 0x34
}

// TauntCB__7NeptuneFP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x252700
uint32 TauntCB()
{
	// Line 1824, Address: 0x252700, Func Offset: 0
	// Line 1826, Address: 0x252704, Func Offset: 0x4
	// Line 1824, Address: 0x252708, Func Offset: 0x8
	// Line 1825, Address: 0x25270c, Func Offset: 0xc
	// Line 1827, Address: 0x252710, Func Offset: 0x10
	// Func End, Address: 0x252718, Func Offset: 0x18
}

// TauntCheck__7NeptuneFP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x252720
uint32 TauntCheck()
{
	// Line 1819, Address: 0x252720, Func Offset: 0
	// Line 1820, Address: 0x252724, Func Offset: 0x4
	// Func End, Address: 0x25272c, Func Offset: 0xc
}

// ExitFireCheck__7NeptuneFP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x252730
uint32 ExitFireCheck()
{
	// Line 1815, Address: 0x252730, Func Offset: 0
	// Line 1816, Address: 0x252758, Func Offset: 0x28
	// Func End, Address: 0x252760, Func Offset: 0x30
}

// ReflectCB__7NeptuneFP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x252760
uint32 ReflectCB(xAnimSingle* anim)
{
	// Line 1808, Address: 0x252760, Func Offset: 0
	// Line 1809, Address: 0x252764, Func Offset: 0x4
	// Line 1811, Address: 0x25276c, Func Offset: 0xc
	// Line 1808, Address: 0x252770, Func Offset: 0x10
	// Line 1809, Address: 0x25277c, Func Offset: 0x1c
	// Line 1810, Address: 0x252784, Func Offset: 0x24
	// Line 1812, Address: 0x252788, Func Offset: 0x28
	// Func End, Address: 0x252790, Func Offset: 0x30
}

// ReflectCheck__7NeptuneFP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x252790
uint32 ReflectCheck()
{
	// Line 1804, Address: 0x252790, Func Offset: 0
	// Line 1805, Address: 0x25279c, Func Offset: 0xc
	// Func End, Address: 0x2527a4, Func Offset: 0x14
}

// FireLoopCB__7NeptuneFP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x2527b0
uint32 FireLoopCB()
{
	// Line 1798, Address: 0x2527b0, Func Offset: 0
	// Line 1799, Address: 0x2527b8, Func Offset: 0x8
	// Line 1801, Address: 0x2527c0, Func Offset: 0x10
	// Line 1800, Address: 0x2527c4, Func Offset: 0x14
	// Line 1801, Address: 0x2527c8, Func Offset: 0x18
	// Func End, Address: 0x2527d0, Func Offset: 0x20
}

// FireCB__7NeptuneFP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x2527d0
uint32 FireCB()
{
	// Line 1794, Address: 0x2527d0, Func Offset: 0
	// Line 1795, Address: 0x2527d4, Func Offset: 0x4
	// Line 1796, Address: 0x2527d8, Func Offset: 0x8
	// Func End, Address: 0x2527e0, Func Offset: 0x10
}

// FireLoopCheck__7NeptuneFP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x2527e0
uint32 FireLoopCheck(xAnimSingle* anim)
{
	// Line 1788, Address: 0x2527e0, Func Offset: 0
	// Line 1789, Address: 0x25281c, Func Offset: 0x3c
	// Func End, Address: 0x252824, Func Offset: 0x44
}

// FireCheck__7NeptuneFP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x252830
uint32 FireCheck()
{
	// Line 1784, Address: 0x252830, Func Offset: 0
	// Line 1785, Address: 0x25283c, Func Offset: 0xc
	// Func End, Address: 0x252844, Func Offset: 0x14
}

// TailAttackCB__7NeptuneFP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x252850
uint32 TailAttackCB()
{
	// Line 1775, Address: 0x252850, Func Offset: 0
	// Line 1780, Address: 0x252854, Func Offset: 0x4
	// Line 1776, Address: 0x252858, Func Offset: 0x8
	// Line 1777, Address: 0x252868, Func Offset: 0x18
	// Line 1778, Address: 0x252878, Func Offset: 0x28
	// Line 1779, Address: 0x252880, Func Offset: 0x30
	// Line 1781, Address: 0x252884, Func Offset: 0x34
	// Func End, Address: 0x25288c, Func Offset: 0x3c
}

// TailAttackRightCheck__7NeptuneFP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x252890
uint32 TailAttackRightCheck(xAnimSingle* anim)
{
	// Line 1771, Address: 0x252890, Func Offset: 0
	// Line 1773, Address: 0x252930, Func Offset: 0xa0
	// Func End, Address: 0x252938, Func Offset: 0xa8
}

// TailAttackLeftCheck__7NeptuneFP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x252940
uint32 TailAttackLeftCheck(xAnimSingle* anim)
{
	// Line 1766, Address: 0x252940, Func Offset: 0
	// Line 1768, Address: 0x2529e8, Func Offset: 0xa8
	// Func End, Address: 0x2529f0, Func Offset: 0xb0
}

// ExitDefendCheck__7NeptuneFP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x2529f0
uint32 ExitDefendCheck()
{
	// Line 1756, Address: 0x2529f0, Func Offset: 0
	// Line 1757, Address: 0x2529fc, Func Offset: 0xc
	// Func End, Address: 0x252a04, Func Offset: 0x14
}

// DefendCheck__7NeptuneFP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x252a10
uint32 DefendCheck()
{
	// Line 1752, Address: 0x252a10, Func Offset: 0
	// Line 1753, Address: 0x252a1c, Func Offset: 0xc
	// Func End, Address: 0x252a24, Func Offset: 0x14
}

// Crowd_RenderSlave__7NeptuneFP4xEnt
// Start address: 0x252a30
void Crowd_RenderSlave()
{
	// Line 1748, Address: 0x252a30, Func Offset: 0
	// Func End, Address: 0x252a38, Func Offset: 0x8
}

// Crowd_RenderMaster__7NeptuneFP4xEnt
// Start address: 0x252a40
void Crowd_RenderMaster(xEnt* ent)
{
	xEnt** crowdGroup;
	RpAtomic* atomic;
	RpHAnimHierarchy* pHierarchy;
	RwMatrixTag* pAnimOldMatrix;
	rwPDS_HICloneArray cloneList[20];
	uint32 cloneCount;
	RwFrustumTestResult frustRes;
	// Line 1694, Address: 0x252a40, Func Offset: 0
	// Line 1696, Address: 0x252a44, Func Offset: 0x4
	// Line 1694, Address: 0x252a48, Func Offset: 0x8
	// Line 1696, Address: 0x252a6c, Func Offset: 0x2c
	// Line 1701, Address: 0x252aac, Func Offset: 0x6c
	// Line 1703, Address: 0x252ab4, Func Offset: 0x74
	// Line 1705, Address: 0x252abc, Func Offset: 0x7c
	// Line 1703, Address: 0x252ac0, Func Offset: 0x80
	// Line 1704, Address: 0x252ac4, Func Offset: 0x84
	// Line 1705, Address: 0x252ac8, Func Offset: 0x88
	// Line 1711, Address: 0x252ad4, Func Offset: 0x94
	// Line 1712, Address: 0x252ae4, Func Offset: 0xa4
	// Line 1713, Address: 0x252af4, Func Offset: 0xb4
	// Line 1721, Address: 0x252afc, Func Offset: 0xbc
	// Line 1722, Address: 0x252b00, Func Offset: 0xc0
	// Line 1723, Address: 0x252b04, Func Offset: 0xc4
	// Line 1724, Address: 0x252b10, Func Offset: 0xd0
	// Line 1744, Address: 0x252b18, Func Offset: 0xd8
	// Line 1714, Address: 0x252b20, Func Offset: 0xe0
	// Line 1744, Address: 0x252b24, Func Offset: 0xe4
	// Line 1714, Address: 0x252b2c, Func Offset: 0xec
	// Line 1744, Address: 0x252b30, Func Offset: 0xf0
	// Line 1714, Address: 0x252b34, Func Offset: 0xf4
	// Line 1744, Address: 0x252b44, Func Offset: 0x104
	// Line 1726, Address: 0x252b7c, Func Offset: 0x13c
	// Line 1744, Address: 0x252b84, Func Offset: 0x144
	// Func End, Address: 0x252bbc, Func Offset: 0x17c
}

// Crowd_UpdateSlave__7NeptuneFP4xEntP6xScenef
// Start address: 0x252bc0
void Crowd_UpdateSlave(xEnt* ent, xScene* sc, float32 dt)
{
	// Line 1676, Address: 0x252bc0, Func Offset: 0
	// Line 1678, Address: 0x252bcc, Func Offset: 0xc
	// Line 1692, Address: 0x252bdc, Func Offset: 0x1c
	// Line 1685, Address: 0x252bf0, Func Offset: 0x30
	// Line 1692, Address: 0x252bf8, Func Offset: 0x38
	// Line 1685, Address: 0x252bfc, Func Offset: 0x3c
	// Line 1692, Address: 0x252c00, Func Offset: 0x40
	// Line 1686, Address: 0x252c0c, Func Offset: 0x4c
	// Line 1692, Address: 0x252c10, Func Offset: 0x50
	// Line 1687, Address: 0x252c1c, Func Offset: 0x5c
	// Line 1692, Address: 0x252c20, Func Offset: 0x60
	// Line 1688, Address: 0x252c2c, Func Offset: 0x6c
	// Line 1692, Address: 0x252c30, Func Offset: 0x70
	// Line 1689, Address: 0x252c3c, Func Offset: 0x7c
	// Line 1692, Address: 0x252c40, Func Offset: 0x80
	// Line 1690, Address: 0x252c4c, Func Offset: 0x8c
	// Line 1692, Address: 0x252c58, Func Offset: 0x98
	// Func End, Address: 0x252c64, Func Offset: 0xa4
}

// CmpCrowd__7NeptuneFPCvPCv
// Start address: 0x252c70
int32 CmpCrowd(void* a, void* b)
{
	// Line 1660, Address: 0x252c70, Func Offset: 0
	// Line 1661, Address: 0x252c78, Func Offset: 0x8
	// Line 1662, Address: 0x252c84, Func Offset: 0x14
	// Line 1664, Address: 0x252c9c, Func Offset: 0x2c
	// Func End, Address: 0x252ca4, Func Offset: 0x34
}

// DecalDestCB__7NeptuneFP8RpAtomic
// Start address: 0x252cb0
void DecalDestCB(RpAtomic* atomic)
{
	int32 i;
	// Line 1650, Address: 0x252cb0, Func Offset: 0
	// Line 1651, Address: 0x252cc8, Func Offset: 0x18
	// Line 1652, Address: 0x252cd8, Func Offset: 0x28
	// Line 1653, Address: 0x252d0c, Func Offset: 0x5c
	// Line 1654, Address: 0x252d18, Func Offset: 0x68
	// Line 1656, Address: 0x252d20, Func Offset: 0x70
	// Line 1657, Address: 0x252d38, Func Offset: 0x88
	// Func End, Address: 0x252d40, Func Offset: 0x90
}

// DecalEmitCB__7NeptuneFP8RpAtomicPC7xMat4x3
// Start address: 0x252d40
void DecalEmitCB(RpAtomic* atomic, xMat4x3* driver)
{
	float32 area;
	int32 i;
	int32 numTri;
	RpGeometry* geom;
	RwV3d* vert;
	RpTriangle* tri;
	xVec3* va;
	xVec3* vb;
	xVec3* vc;
	float32 dx0;
	float32 dy0;
	float32 dz0;
	float32 dx1;
	float32 dy1;
	float32 dz1;
	float32 crossx;
	float32 crossy;
	float32 crossz;
	// Line 1609, Address: 0x252d40, Func Offset: 0
	// Line 1611, Address: 0x252d48, Func Offset: 0x8
	// Line 1612, Address: 0x252d54, Func Offset: 0x14
	// Line 1614, Address: 0x252d60, Func Offset: 0x20
	// Line 1612, Address: 0x252d64, Func Offset: 0x24
	// Line 1613, Address: 0x252d68, Func Offset: 0x28
	// Line 1614, Address: 0x252d7c, Func Offset: 0x3c
	// Line 1619, Address: 0x252d8c, Func Offset: 0x4c
	// Line 1620, Address: 0x252d90, Func Offset: 0x50
	// Line 1622, Address: 0x252d94, Func Offset: 0x54
	// Line 1621, Address: 0x252d98, Func Offset: 0x58
	// Line 1620, Address: 0x252d9c, Func Offset: 0x5c
	// Line 1623, Address: 0x252da0, Func Offset: 0x60
	// Line 1628, Address: 0x252dac, Func Offset: 0x6c
	// Line 1641, Address: 0x252db0, Func Offset: 0x70
	// Line 1629, Address: 0x252db4, Func Offset: 0x74
	// Line 1641, Address: 0x252db8, Func Offset: 0x78
	// Line 1630, Address: 0x252dbc, Func Offset: 0x7c
	// Line 1628, Address: 0x252dc0, Func Offset: 0x80
	// Line 1629, Address: 0x252dc8, Func Offset: 0x88
	// Line 1641, Address: 0x252dcc, Func Offset: 0x8c
	// Line 1629, Address: 0x252dd0, Func Offset: 0x90
	// Line 1628, Address: 0x252dd4, Func Offset: 0x94
	// Line 1629, Address: 0x252dd8, Func Offset: 0x98
	// Line 1628, Address: 0x252ddc, Func Offset: 0x9c
	// Line 1629, Address: 0x252de0, Func Offset: 0xa0
	// Line 1630, Address: 0x252de4, Func Offset: 0xa4
	// Line 1631, Address: 0x252df8, Func Offset: 0xb8
	// Line 1634, Address: 0x252dfc, Func Offset: 0xbc
	// Line 1632, Address: 0x252e00, Func Offset: 0xc0
	// Line 1633, Address: 0x252e04, Func Offset: 0xc4
	// Line 1631, Address: 0x252e08, Func Offset: 0xc8
	// Line 1632, Address: 0x252e0c, Func Offset: 0xcc
	// Line 1631, Address: 0x252e10, Func Offset: 0xd0
	// Line 1634, Address: 0x252e14, Func Offset: 0xd4
	// Line 1633, Address: 0x252e18, Func Offset: 0xd8
	// Line 1636, Address: 0x252e1c, Func Offset: 0xdc
	// Line 1635, Address: 0x252e20, Func Offset: 0xe0
	// Line 1632, Address: 0x252e24, Func Offset: 0xe4
	// Line 1636, Address: 0x252e28, Func Offset: 0xe8
	// Line 1635, Address: 0x252e2c, Func Offset: 0xec
	// Line 1637, Address: 0x252e30, Func Offset: 0xf0
	// Line 1638, Address: 0x252e38, Func Offset: 0xf8
	// Line 1639, Address: 0x252e40, Func Offset: 0x100
	// Line 1640, Address: 0x252e48, Func Offset: 0x108
	// Line 1641, Address: 0x252e60, Func Offset: 0x120
	// Line 1642, Address: 0x252e6c, Func Offset: 0x12c
	// Line 1643, Address: 0x252e7c, Func Offset: 0x13c
	// Line 1645, Address: 0x252e8c, Func Offset: 0x14c
	// Func End, Address: 0x252e94, Func Offset: 0x154
}

// ReflectBeforeAnimMatrices__7NeptuneFP9xAnimPlayP5xQuatP5xVec3i
// Start address: 0x252ea0
void ReflectBeforeAnimMatrices(xAnimPlay* play, xQuat* quat, xVec3* tran)
{
	float32 fadeLerp;
	xQuat quatRot;
	xVec3 idleTipTranslate;
	// Line 1586, Address: 0x252ea0, Func Offset: 0
	// Line 1588, Address: 0x252ea4, Func Offset: 0x4
	// Line 1586, Address: 0x252ea8, Func Offset: 0x8
	// Line 1588, Address: 0x252ec0, Func Offset: 0x20
	// Line 1589, Address: 0x252ec8, Func Offset: 0x28
	// Line 1590, Address: 0x252ee0, Func Offset: 0x40
	// Line 1591, Address: 0x252efc, Func Offset: 0x5c
	// Line 1600, Address: 0x252f14, Func Offset: 0x74
	// Line 1601, Address: 0x252f48, Func Offset: 0xa8
	// Line 1600, Address: 0x252f4c, Func Offset: 0xac
	// Line 1601, Address: 0x252f58, Func Offset: 0xb8
	// Line 1605, Address: 0x252f70, Func Offset: 0xd0
	// Line 1601, Address: 0x252f80, Func Offset: 0xe0
	// Line 1605, Address: 0x252f84, Func Offset: 0xe4
	// Line 1601, Address: 0x252f94, Func Offset: 0xf4
	// Line 1605, Address: 0x252fa4, Func Offset: 0x104
	// Line 1606, Address: 0x252fd0, Func Offset: 0x130
	// Func End, Address: 0x252ff4, Func Offset: 0x154
}

// BucketCollideEventFunc__7NeptuneFP5xBaseP5xBaseUiPCfP5xBaseUi
// Start address: 0x253000
void BucketCollideEventFunc(uint32 toEvent)
{
	int32 i;
	// Line 1472, Address: 0x253000, Func Offset: 0
	// Line 1476, Address: 0x253004, Func Offset: 0x4
	// Line 1472, Address: 0x253008, Func Offset: 0x8
	// Line 1476, Address: 0x253010, Func Offset: 0x10
	// Line 1477, Address: 0x25301c, Func Offset: 0x1c
	// Line 1480, Address: 0x253030, Func Offset: 0x30
	// Line 1482, Address: 0x25305c, Func Offset: 0x5c
	// Line 1484, Address: 0x253084, Func Offset: 0x84
	// Line 1485, Address: 0x2530a8, Func Offset: 0xa8
	// Line 1487, Address: 0x2530c8, Func Offset: 0xc8
	// Line 1488, Address: 0x2530d0, Func Offset: 0xd0
	// Line 1489, Address: 0x2530d4, Func Offset: 0xd4
	// Line 1488, Address: 0x2530d8, Func Offset: 0xd8
	// Line 1492, Address: 0x2530dc, Func Offset: 0xdc
	// Line 1487, Address: 0x2530e4, Func Offset: 0xe4
	// Line 1488, Address: 0x2530ec, Func Offset: 0xec
	// Line 1489, Address: 0x2530f8, Func Offset: 0xf8
	// Line 1492, Address: 0x253104, Func Offset: 0x104
	// Line 1493, Address: 0x253114, Func Offset: 0x114
	// Line 1494, Address: 0x253128, Func Offset: 0x128
	// Line 1495, Address: 0x253134, Func Offset: 0x134
	// Line 1497, Address: 0x253160, Func Offset: 0x160
	// Line 1505, Address: 0x253170, Func Offset: 0x170
	// Line 1506, Address: 0x253188, Func Offset: 0x188
	// Line 1509, Address: 0x2531bc, Func Offset: 0x1bc
	// Line 1531, Address: 0x2531cc, Func Offset: 0x1cc
	// Line 1536, Address: 0x2531dc, Func Offset: 0x1dc
	// Line 1539, Address: 0x2531e4, Func Offset: 0x1e4
	// Line 1536, Address: 0x2531f0, Func Offset: 0x1f0
	// Line 1539, Address: 0x2531f8, Func Offset: 0x1f8
	// Line 1543, Address: 0x253248, Func Offset: 0x248
	// Line 1539, Address: 0x25324c, Func Offset: 0x24c
	// Line 1544, Address: 0x25325c, Func Offset: 0x25c
	// Line 1545, Address: 0x253288, Func Offset: 0x288
	// Line 1546, Address: 0x2532b4, Func Offset: 0x2b4
	// Line 1548, Address: 0x2532c4, Func Offset: 0x2c4
	// Line 1549, Address: 0x2532c8, Func Offset: 0x2c8
	// Line 1482, Address: 0x2532ec, Func Offset: 0x2ec
	// Line 1549, Address: 0x2532f0, Func Offset: 0x2f0
	// Line 1482, Address: 0x2532fc, Func Offset: 0x2fc
	// Line 1549, Address: 0x253310, Func Offset: 0x310
	// Line 1485, Address: 0x253328, Func Offset: 0x328
	// Line 1549, Address: 0x25332c, Func Offset: 0x32c
	// Line 1485, Address: 0x253338, Func Offset: 0x338
	// Line 1549, Address: 0x25334c, Func Offset: 0x34c
	// Line 1506, Address: 0x25336c, Func Offset: 0x36c
	// Line 1549, Address: 0x253370, Func Offset: 0x370
	// Line 1506, Address: 0x25337c, Func Offset: 0x37c
	// Line 1549, Address: 0x253390, Func Offset: 0x390
	// Line 1516, Address: 0x2533c0, Func Offset: 0x3c0
	// Line 1549, Address: 0x2533c4, Func Offset: 0x3c4
	// Line 1523, Address: 0x2533ec, Func Offset: 0x3ec
	// Line 1526, Address: 0x2533f4, Func Offset: 0x3f4
	// Line 1549, Address: 0x253408, Func Offset: 0x408
	// Func End, Address: 0x253430, Func Offset: 0x430
}

// PovCollideBoundUpdateCB__7NeptuneFP4xEntP5xVec3
// Start address: 0x253430
void PovCollideBoundUpdateCB(xEnt* ent, xVec3* pos)
{
	// Line 1461, Address: 0x253430, Func Offset: 0
	// Line 1465, Address: 0x253434, Func Offset: 0x4
	// Line 1461, Address: 0x253438, Func Offset: 0x8
	// Line 1462, Address: 0x253440, Func Offset: 0x10
	// Line 1463, Address: 0x25344c, Func Offset: 0x1c
	// Line 1464, Address: 0x253454, Func Offset: 0x24
	// Line 1465, Address: 0x25345c, Func Offset: 0x2c
	// Line 1466, Address: 0x253460, Func Offset: 0x30
	// Line 1467, Address: 0x253468, Func Offset: 0x38
	// Line 1468, Address: 0x253470, Func Offset: 0x40
	// Func End, Address: 0x253480, Func Offset: 0x50
}

// BodyCollideBoundUpdateCB__7NeptuneFP4xEntP5xVec3
// Start address: 0x253480
void BodyCollideBoundUpdateCB(xEnt* ent, xVec3* pos)
{
	// Line 1450, Address: 0x253480, Func Offset: 0
	// Line 1452, Address: 0x253484, Func Offset: 0x4
	// Line 1450, Address: 0x253488, Func Offset: 0x8
	// Line 1452, Address: 0x25348c, Func Offset: 0xc
	// Line 1450, Address: 0x253490, Func Offset: 0x10
	// Line 1451, Address: 0x253494, Func Offset: 0x14
	// Line 1454, Address: 0x253498, Func Offset: 0x18
	// Line 1451, Address: 0x2534a0, Func Offset: 0x20
	// Line 1452, Address: 0x2534a4, Func Offset: 0x24
	// Line 1453, Address: 0x2534b0, Func Offset: 0x30
	// Line 1454, Address: 0x2534b8, Func Offset: 0x38
	// Line 1455, Address: 0x2534bc, Func Offset: 0x3c
	// Line 1456, Address: 0x2534c4, Func Offset: 0x44
	// Line 1457, Address: 0x2534cc, Func Offset: 0x4c
	// Func End, Address: 0x2534dc, Func Offset: 0x5c
}

// ExtractBoneInfluence__7NeptuneFP8RpAtomicPiP11RwMatrixTagi
// Start address: 0x2534e0
int32 ExtractBoneInfluence(RpAtomic* model, int32* influence, RwMatrixTag* skinmat, int32 maxcount)
{
	RpSkin* skin;
	uint32* boneidx;
	RwMatrixWeights* bonewt;
	RwMatrixTag* bonemat;
	int32 i;
	int32 j;
	int32 numVert;
	int32 influenceIdx;
	int32 foundInfl;
	float32* currwt;
	uint32 curridx;
	uint32 matidx;
	// Line 1337, Address: 0x2534e0, Func Offset: 0
	// Line 1338, Address: 0x253514, Func Offset: 0x34
	// Line 1342, Address: 0x253524, Func Offset: 0x44
	// Line 1343, Address: 0x253528, Func Offset: 0x48
	// Line 1344, Address: 0x253534, Func Offset: 0x54
	// Line 1345, Address: 0x25353c, Func Offset: 0x5c
	// Line 1347, Address: 0x25354c, Func Offset: 0x6c
	// Line 1346, Address: 0x253550, Func Offset: 0x70
	// Line 1347, Address: 0x253554, Func Offset: 0x74
	// Line 1346, Address: 0x253558, Func Offset: 0x78
	// Line 1347, Address: 0x25355c, Func Offset: 0x7c
	// Line 1349, Address: 0x253564, Func Offset: 0x84
	// Line 1379, Address: 0x253570, Func Offset: 0x90
	// Line 1363, Address: 0x253574, Func Offset: 0x94
	// Line 1353, Address: 0x253578, Func Offset: 0x98
	// Line 1352, Address: 0x25357c, Func Offset: 0x9c
	// Line 1354, Address: 0x253580, Func Offset: 0xa0
	// Line 1379, Address: 0x253584, Func Offset: 0xa4
	// Line 1355, Address: 0x2535a4, Func Offset: 0xc4
	// Line 1379, Address: 0x2535a8, Func Offset: 0xc8
	// Line 1360, Address: 0x2535d4, Func Offset: 0xf4
	// Line 1379, Address: 0x2535d8, Func Offset: 0xf8
	// Line 1362, Address: 0x2535ec, Func Offset: 0x10c
	// Line 1379, Address: 0x2535f0, Func Offset: 0x110
	// Line 1368, Address: 0x253698, Func Offset: 0x1b8
	// Line 1379, Address: 0x2536a0, Func Offset: 0x1c0
	// Line 1376, Address: 0x2536bc, Func Offset: 0x1dc
	// Line 1379, Address: 0x2536c0, Func Offset: 0x1e0
	// Line 1378, Address: 0x2536c4, Func Offset: 0x1e4
	// Line 1372, Address: 0x2536d0, Func Offset: 0x1f0
	// Line 1382, Address: 0x2536d8, Func Offset: 0x1f8
	// Line 1380, Address: 0x2536dc, Func Offset: 0x1fc
	// Line 1382, Address: 0x2536e0, Func Offset: 0x200
	// Line 1384, Address: 0x2536f0, Func Offset: 0x210
	// Line 1385, Address: 0x2536f4, Func Offset: 0x214
	// Func End, Address: 0x253720, Func Offset: 0x240
}

// LightningRingRenderCB__7NeptuneFP10zLightningP18RxObjSpace3DVertexP18RxObjSpace3DVertexUi
// Start address: 0x253720
void LightningRingRenderCB(zLightning* ltng, RxObjSpace3DVertex* vertA, RxObjSpace3DVertex* vertB, uint32 numVerts)
{
	int32 vnum;
	int32 j;
	uint32 i;
	RxObjSpace3DVertex* verts;
	RxObjSpace3DVertex* vlist[2];
	zLightningRing* currLtRing;
	NMECfgNeptuneAttack* currAtk;
	float32 rad;
	float32 lineDelta;
	float32 rotDelta;
	float32 deltaCos;
	float32 deltaSin;
	float32 lineOffset;
	float32 currCos;
	float32 currSin;
	xVec3* pos;
	float32 px;
	float32 pz;
	float32 tempCos;
	xVec3* posStart;
	xVec3* posEnd;
	float32 centerY;
	RwV3d* pos;
	// Line 1225, Address: 0x253720, Func Offset: 0
	// Line 1228, Address: 0x253724, Func Offset: 0x4
	// Line 1225, Address: 0x253728, Func Offset: 0x8
	// Line 1228, Address: 0x25372c, Func Offset: 0xc
	// Line 1225, Address: 0x253730, Func Offset: 0x10
	// Line 1228, Address: 0x253764, Func Offset: 0x44
	// Line 1239, Address: 0x25378c, Func Offset: 0x6c
	// Line 1229, Address: 0x253790, Func Offset: 0x70
	// Line 1228, Address: 0x253794, Func Offset: 0x74
	// Line 1229, Address: 0x25379c, Func Offset: 0x7c
	// Line 1239, Address: 0x2537a0, Func Offset: 0x80
	// Line 1234, Address: 0x2537a4, Func Offset: 0x84
	// Line 1239, Address: 0x2537bc, Func Offset: 0x9c
	// Line 1240, Address: 0x2537f4, Func Offset: 0xd4
	// Line 1241, Address: 0x2537fc, Func Offset: 0xdc
	// Line 1240, Address: 0x253804, Func Offset: 0xe4
	// Line 1241, Address: 0x253808, Func Offset: 0xe8
	// Line 1243, Address: 0x25381c, Func Offset: 0xfc
	// Line 1244, Address: 0x253824, Func Offset: 0x104
	// Line 1281, Address: 0x25383c, Func Offset: 0x11c
	// Line 1284, Address: 0x25384c, Func Offset: 0x12c
	// Line 1281, Address: 0x253854, Func Offset: 0x134
	// Line 1245, Address: 0x25385c, Func Offset: 0x13c
	// Line 1284, Address: 0x253860, Func Offset: 0x140
	// Line 1292, Address: 0x253864, Func Offset: 0x144
	// Line 1281, Address: 0x25386c, Func Offset: 0x14c
	// Line 1248, Address: 0x253870, Func Offset: 0x150
	// Line 1246, Address: 0x25387c, Func Offset: 0x15c
	// Line 1247, Address: 0x253880, Func Offset: 0x160
	// Line 1249, Address: 0x253884, Func Offset: 0x164
	// Line 1250, Address: 0x25388c, Func Offset: 0x16c
	// Line 1252, Address: 0x253898, Func Offset: 0x178
	// Line 1255, Address: 0x2538a0, Func Offset: 0x180
	// Line 1258, Address: 0x2538b4, Func Offset: 0x194
	// Line 1259, Address: 0x2538b8, Func Offset: 0x198
	// Line 1258, Address: 0x2538bc, Func Offset: 0x19c
	// Line 1259, Address: 0x2538c0, Func Offset: 0x1a0
	// Line 1262, Address: 0x2538c4, Func Offset: 0x1a4
	// Line 1263, Address: 0x2538d0, Func Offset: 0x1b0
	// Line 1266, Address: 0x2538dc, Func Offset: 0x1bc
	// Line 1267, Address: 0x25392c, Func Offset: 0x20c
	// Line 1275, Address: 0x25393c, Func Offset: 0x21c
	// Line 1272, Address: 0x253944, Func Offset: 0x224
	// Line 1273, Address: 0x253948, Func Offset: 0x228
	// Line 1272, Address: 0x25394c, Func Offset: 0x22c
	// Line 1273, Address: 0x253950, Func Offset: 0x230
	// Line 1271, Address: 0x253954, Func Offset: 0x234
	// Line 1274, Address: 0x253958, Func Offset: 0x238
	// Line 1275, Address: 0x25395c, Func Offset: 0x23c
	// Line 1281, Address: 0x253968, Func Offset: 0x248
	// Line 1282, Address: 0x25396c, Func Offset: 0x24c
	// Line 1284, Address: 0x253970, Func Offset: 0x250
	// Line 1292, Address: 0x253974, Func Offset: 0x254
	// Line 1282, Address: 0x253978, Func Offset: 0x258
	// Line 1283, Address: 0x25397c, Func Offset: 0x25c
	// Line 1284, Address: 0x253984, Func Offset: 0x264
	// Line 1288, Address: 0x2539a4, Func Offset: 0x284
	// Line 1292, Address: 0x2539ac, Func Offset: 0x28c
	// Line 1291, Address: 0x2539d0, Func Offset: 0x2b0
	// Line 1292, Address: 0x2539dc, Func Offset: 0x2bc
	// Line 1291, Address: 0x2539e8, Func Offset: 0x2c8
	// Line 1292, Address: 0x2539f4, Func Offset: 0x2d4
	// Line 1291, Address: 0x253a00, Func Offset: 0x2e0
	// Line 1292, Address: 0x253a0c, Func Offset: 0x2ec
	// Line 1291, Address: 0x253a18, Func Offset: 0x2f8
	// Line 1292, Address: 0x253a24, Func Offset: 0x304
	// Line 1291, Address: 0x253a30, Func Offset: 0x310
	// Line 1292, Address: 0x253a3c, Func Offset: 0x31c
	// Line 1291, Address: 0x253a48, Func Offset: 0x328
	// Line 1292, Address: 0x253a54, Func Offset: 0x334
	// Line 1291, Address: 0x253a60, Func Offset: 0x340
	// Line 1292, Address: 0x253a6c, Func Offset: 0x34c
	// Line 1291, Address: 0x253a78, Func Offset: 0x358
	// Line 1292, Address: 0x253a84, Func Offset: 0x364
	// Line 1291, Address: 0x253aa8, Func Offset: 0x388
	// Line 1289, Address: 0x253aac, Func Offset: 0x38c
	// Line 1292, Address: 0x253ab0, Func Offset: 0x390
	// Line 1291, Address: 0x253ac0, Func Offset: 0x3a0
	// Line 1292, Address: 0x253ac8, Func Offset: 0x3a8
	// Line 1294, Address: 0x253ad4, Func Offset: 0x3b4
	// Line 1297, Address: 0x253ae8, Func Offset: 0x3c8
	// Line 1298, Address: 0x253afc, Func Offset: 0x3dc
	// Line 1299, Address: 0x253b08, Func Offset: 0x3e8
	// Line 1301, Address: 0x253e94, Func Offset: 0x774
	// Line 1304, Address: 0x253ea8, Func Offset: 0x788
	// Line 1306, Address: 0x253ed8, Func Offset: 0x7b8
	// Line 1308, Address: 0x253ee4, Func Offset: 0x7c4
	// Func End, Address: 0x253f20, Func Offset: 0x800
}

// LightningFeelerRenderCB__7NeptuneFP10zLightningP18RxObjSpace3DVertexP18RxObjSpace3DVertexUi
// Start address: 0x253f20
void LightningFeelerRenderCB(RxObjSpace3DVertex* vertA, RxObjSpace3DVertex* vertB, uint32 numVerts)
{
	int32 vnum;
	RxObjSpace3DVertex* vlist[2];
	uint32 i;
	NMECfgNeptuneAttack* currAtk;
	float32 centerY;
	RwV3d* pos;
	// Line 1191, Address: 0x253f20, Func Offset: 0
	// Line 1193, Address: 0x253f24, Func Offset: 0x4
	// Line 1191, Address: 0x253f28, Func Offset: 0x8
	// Line 1193, Address: 0x253f2c, Func Offset: 0xc
	// Line 1191, Address: 0x253f30, Func Offset: 0x10
	// Line 1193, Address: 0x253f54, Func Offset: 0x34
	// Line 1195, Address: 0x253f7c, Func Offset: 0x5c
	// Line 1193, Address: 0x253f80, Func Offset: 0x60
	// Line 1195, Address: 0x253f84, Func Offset: 0x64
	// Line 1196, Address: 0x253f98, Func Offset: 0x78
	// Line 1208, Address: 0x253fa4, Func Offset: 0x84
	// Line 1205, Address: 0x253fa8, Func Offset: 0x88
	// Line 1203, Address: 0x253fac, Func Offset: 0x8c
	// Line 1204, Address: 0x253fb0, Func Offset: 0x90
	// Line 1203, Address: 0x253fb4, Func Offset: 0x94
	// Line 1208, Address: 0x253fc8, Func Offset: 0xa8
	// Line 1207, Address: 0x253fdc, Func Offset: 0xbc
	// Line 1208, Address: 0x253fe8, Func Offset: 0xc8
	// Line 1207, Address: 0x253ff8, Func Offset: 0xd8
	// Line 1208, Address: 0x254004, Func Offset: 0xe4
	// Line 1207, Address: 0x254010, Func Offset: 0xf0
	// Line 1208, Address: 0x25401c, Func Offset: 0xfc
	// Line 1207, Address: 0x254028, Func Offset: 0x108
	// Line 1208, Address: 0x254034, Func Offset: 0x114
	// Line 1207, Address: 0x254040, Func Offset: 0x120
	// Line 1208, Address: 0x25404c, Func Offset: 0x12c
	// Line 1207, Address: 0x254058, Func Offset: 0x138
	// Line 1208, Address: 0x254064, Func Offset: 0x144
	// Line 1207, Address: 0x254070, Func Offset: 0x150
	// Line 1208, Address: 0x25407c, Func Offset: 0x15c
	// Line 1207, Address: 0x254088, Func Offset: 0x168
	// Line 1208, Address: 0x254094, Func Offset: 0x174
	// Line 1207, Address: 0x2540a0, Func Offset: 0x180
	// Line 1208, Address: 0x2540ac, Func Offset: 0x18c
	// Line 1207, Address: 0x2540c8, Func Offset: 0x1a8
	// Line 1208, Address: 0x2540d0, Func Offset: 0x1b0
	// Line 1207, Address: 0x2540d4, Func Offset: 0x1b4
	// Line 1208, Address: 0x2540d8, Func Offset: 0x1b8
	// Line 1207, Address: 0x2540e8, Func Offset: 0x1c8
	// Line 1208, Address: 0x2540f0, Func Offset: 0x1d0
	// Line 1211, Address: 0x254100, Func Offset: 0x1e0
	// Line 1213, Address: 0x254494, Func Offset: 0x574
	// Line 1216, Address: 0x2544a8, Func Offset: 0x588
	// Line 1220, Address: 0x2544d4, Func Offset: 0x5b4
	// Line 1222, Address: 0x2544dc, Func Offset: 0x5bc
	// Func End, Address: 0x254508, Func Offset: 0x5e8
}

// LightningBeamRenderCB__7NeptuneFP10zLightningP18RxObjSpace3DVertexP18RxObjSpace3DVertexUi
// Start address: 0x254510
void LightningBeamRenderCB(RxObjSpace3DVertex* vertA, RxObjSpace3DVertex* vertB, uint32 numVerts)
{
	int32 vnum;
	RxObjSpace3DVertex* vlist[2];
	// Line 1173, Address: 0x254510, Func Offset: 0
	// Line 1175, Address: 0x254514, Func Offset: 0x4
	// Line 1173, Address: 0x254518, Func Offset: 0x8
	// Line 1175, Address: 0x25451c, Func Offset: 0xc
	// Line 1173, Address: 0x254520, Func Offset: 0x10
	// Line 1175, Address: 0x254544, Func Offset: 0x34
	// Line 1178, Address: 0x25456c, Func Offset: 0x5c
	// Line 1175, Address: 0x254570, Func Offset: 0x60
	// Line 1178, Address: 0x254574, Func Offset: 0x64
	// Line 1179, Address: 0x254584, Func Offset: 0x74
	// Line 1180, Address: 0x254590, Func Offset: 0x80
	// Line 1181, Address: 0x25491c, Func Offset: 0x40c
	// Line 1182, Address: 0x254920, Func Offset: 0x410
	// Line 1185, Address: 0x254930, Func Offset: 0x420
	// Line 1186, Address: 0x254954, Func Offset: 0x444
	// Line 1188, Address: 0x25495c, Func Offset: 0x44c
	// Func End, Address: 0x254988, Func Offset: 0x478
}

// BossPreRender__7NeptuneFv
// Start address: 0x254990
void BossPreRender()
{
	RwV2d vw;
	// Line 1085, Address: 0x254990, Func Offset: 0
	// Line 1087, Address: 0x2549a4, Func Offset: 0x14
	// Line 1096, Address: 0x2549b8, Func Offset: 0x28
	// Line 1099, Address: 0x2549c4, Func Offset: 0x34
	// Line 1102, Address: 0x2549d0, Func Offset: 0x40
	// Line 1105, Address: 0x2549e0, Func Offset: 0x50
	// Line 1170, Address: 0x254a1c, Func Offset: 0x8c
	// Line 1105, Address: 0x254a24, Func Offset: 0x94
	// Line 1107, Address: 0x254a38, Func Offset: 0xa8
	// Line 1108, Address: 0x254a3c, Func Offset: 0xac
	// Line 1170, Address: 0x254a40, Func Offset: 0xb0
	// Line 1115, Address: 0x254a9c, Func Offset: 0x10c
	// Line 1170, Address: 0x254aa0, Func Offset: 0x110
	// Line 1115, Address: 0x254aec, Func Offset: 0x15c
	// Line 1170, Address: 0x254af0, Func Offset: 0x160
	// Line 1118, Address: 0x254b04, Func Offset: 0x174
	// Line 1170, Address: 0x254b08, Func Offset: 0x178
	// Line 1128, Address: 0x254b4c, Func Offset: 0x1bc
	// Line 1170, Address: 0x254b50, Func Offset: 0x1c0
	// Line 1128, Address: 0x254b54, Func Offset: 0x1c4
	// Line 1170, Address: 0x254b60, Func Offset: 0x1d0
	// Func End, Address: 0x254bbc, Func Offset: 0x22c
}

// HackScaleModel__7NeptuneFP8RpAtomicf
// Start address: 0x254bc0
void HackScaleModel(RpAtomic* model, float32 scale)
{
	int32 i;
	int32 vertCount;
	RwV3d* verts;
	int32 usrdatcount;
	RpUserDataArray* usrdat;
	int32* data;
	int32 numbones;
	xSphere* bonesph;
	RpSkin* pSkin;
	int32 numbones;
	RwMatrixTag* skinBoneMat;
	// Line 1007, Address: 0x254bc0, Func Offset: 0
	// Line 1008, Address: 0x254bdc, Func Offset: 0x1c
	// Line 1010, Address: 0x254be8, Func Offset: 0x28
	// Line 1011, Address: 0x254bec, Func Offset: 0x2c
	// Line 1016, Address: 0x254bf0, Func Offset: 0x30
	// Line 1011, Address: 0x254bf4, Func Offset: 0x34
	// Line 1016, Address: 0x254bf8, Func Offset: 0x38
	// Line 1013, Address: 0x254c44, Func Offset: 0x84
	// Line 1016, Address: 0x254c48, Func Offset: 0x88
	// Line 1014, Address: 0x254c50, Func Offset: 0x90
	// Line 1016, Address: 0x254c54, Func Offset: 0x94
	// Line 1015, Address: 0x254c5c, Func Offset: 0x9c
	// Line 1016, Address: 0x254c60, Func Offset: 0xa0
	// Line 1013, Address: 0x254c68, Func Offset: 0xa8
	// Line 1016, Address: 0x254c6c, Func Offset: 0xac
	// Line 1014, Address: 0x254c74, Func Offset: 0xb4
	// Line 1016, Address: 0x254c78, Func Offset: 0xb8
	// Line 1015, Address: 0x254c80, Func Offset: 0xc0
	// Line 1016, Address: 0x254c84, Func Offset: 0xc4
	// Line 1013, Address: 0x254c8c, Func Offset: 0xcc
	// Line 1016, Address: 0x254c90, Func Offset: 0xd0
	// Line 1014, Address: 0x254c98, Func Offset: 0xd8
	// Line 1016, Address: 0x254c9c, Func Offset: 0xdc
	// Line 1015, Address: 0x254ca4, Func Offset: 0xe4
	// Line 1016, Address: 0x254ca8, Func Offset: 0xe8
	// Line 1013, Address: 0x254cb0, Func Offset: 0xf0
	// Line 1016, Address: 0x254cb4, Func Offset: 0xf4
	// Line 1014, Address: 0x254cbc, Func Offset: 0xfc
	// Line 1016, Address: 0x254cc0, Func Offset: 0x100
	// Line 1015, Address: 0x254cc8, Func Offset: 0x108
	// Line 1016, Address: 0x254ccc, Func Offset: 0x10c
	// Line 1013, Address: 0x254cd4, Func Offset: 0x114
	// Line 1016, Address: 0x254cd8, Func Offset: 0x118
	// Line 1014, Address: 0x254ce0, Func Offset: 0x120
	// Line 1016, Address: 0x254ce4, Func Offset: 0x124
	// Line 1015, Address: 0x254cec, Func Offset: 0x12c
	// Line 1016, Address: 0x254cf0, Func Offset: 0x130
	// Line 1013, Address: 0x254cf8, Func Offset: 0x138
	// Line 1016, Address: 0x254cfc, Func Offset: 0x13c
	// Line 1014, Address: 0x254d04, Func Offset: 0x144
	// Line 1016, Address: 0x254d08, Func Offset: 0x148
	// Line 1015, Address: 0x254d10, Func Offset: 0x150
	// Line 1016, Address: 0x254d14, Func Offset: 0x154
	// Line 1013, Address: 0x254d1c, Func Offset: 0x15c
	// Line 1016, Address: 0x254d20, Func Offset: 0x160
	// Line 1014, Address: 0x254d28, Func Offset: 0x168
	// Line 1016, Address: 0x254d2c, Func Offset: 0x16c
	// Line 1015, Address: 0x254d34, Func Offset: 0x174
	// Line 1016, Address: 0x254d38, Func Offset: 0x178
	// Line 1013, Address: 0x254d40, Func Offset: 0x180
	// Line 1016, Address: 0x254d44, Func Offset: 0x184
	// Line 1014, Address: 0x254d4c, Func Offset: 0x18c
	// Line 1016, Address: 0x254d50, Func Offset: 0x190
	// Line 1015, Address: 0x254d58, Func Offset: 0x198
	// Line 1016, Address: 0x254d5c, Func Offset: 0x19c
	// Line 1013, Address: 0x254d8c, Func Offset: 0x1cc
	// Line 1016, Address: 0x254d90, Func Offset: 0x1d0
	// Line 1014, Address: 0x254d98, Func Offset: 0x1d8
	// Line 1016, Address: 0x254d9c, Func Offset: 0x1dc
	// Line 1015, Address: 0x254da4, Func Offset: 0x1e4
	// Line 1016, Address: 0x254da8, Func Offset: 0x1e8
	// Line 1019, Address: 0x254db8, Func Offset: 0x1f8
	// Line 1021, Address: 0x254dc4, Func Offset: 0x204
	// Line 1026, Address: 0x254dd4, Func Offset: 0x214
	// Line 1027, Address: 0x254dd8, Func Offset: 0x218
	// Line 1028, Address: 0x254de0, Func Offset: 0x220
	// Line 1031, Address: 0x254de4, Func Offset: 0x224
	// Line 1029, Address: 0x254de8, Func Offset: 0x228
	// Line 1030, Address: 0x254dec, Func Offset: 0x22c
	// Line 1036, Address: 0x254df0, Func Offset: 0x230
	// Line 1030, Address: 0x254df4, Func Offset: 0x234
	// Line 1036, Address: 0x254df8, Func Offset: 0x238
	// Line 1032, Address: 0x254e44, Func Offset: 0x284
	// Line 1036, Address: 0x254e48, Func Offset: 0x288
	// Line 1033, Address: 0x254e50, Func Offset: 0x290
	// Line 1036, Address: 0x254e54, Func Offset: 0x294
	// Line 1034, Address: 0x254e5c, Func Offset: 0x29c
	// Line 1036, Address: 0x254e60, Func Offset: 0x2a0
	// Line 1035, Address: 0x254e68, Func Offset: 0x2a8
	// Line 1036, Address: 0x254e6c, Func Offset: 0x2ac
	// Line 1032, Address: 0x254e74, Func Offset: 0x2b4
	// Line 1036, Address: 0x254e78, Func Offset: 0x2b8
	// Line 1033, Address: 0x254e80, Func Offset: 0x2c0
	// Line 1036, Address: 0x254e84, Func Offset: 0x2c4
	// Line 1034, Address: 0x254e8c, Func Offset: 0x2cc
	// Line 1036, Address: 0x254e90, Func Offset: 0x2d0
	// Line 1035, Address: 0x254e98, Func Offset: 0x2d8
	// Line 1036, Address: 0x254e9c, Func Offset: 0x2dc
	// Line 1032, Address: 0x254ea4, Func Offset: 0x2e4
	// Line 1036, Address: 0x254ea8, Func Offset: 0x2e8
	// Line 1033, Address: 0x254eb0, Func Offset: 0x2f0
	// Line 1036, Address: 0x254eb4, Func Offset: 0x2f4
	// Line 1034, Address: 0x254ebc, Func Offset: 0x2fc
	// Line 1036, Address: 0x254ec0, Func Offset: 0x300
	// Line 1035, Address: 0x254ec8, Func Offset: 0x308
	// Line 1036, Address: 0x254ecc, Func Offset: 0x30c
	// Line 1032, Address: 0x254ed4, Func Offset: 0x314
	// Line 1036, Address: 0x254ed8, Func Offset: 0x318
	// Line 1033, Address: 0x254ee0, Func Offset: 0x320
	// Line 1036, Address: 0x254ee4, Func Offset: 0x324
	// Line 1034, Address: 0x254eec, Func Offset: 0x32c
	// Line 1036, Address: 0x254ef0, Func Offset: 0x330
	// Line 1035, Address: 0x254ef8, Func Offset: 0x338
	// Line 1036, Address: 0x254efc, Func Offset: 0x33c
	// Line 1032, Address: 0x254f04, Func Offset: 0x344
	// Line 1036, Address: 0x254f08, Func Offset: 0x348
	// Line 1033, Address: 0x254f10, Func Offset: 0x350
	// Line 1036, Address: 0x254f14, Func Offset: 0x354
	// Line 1034, Address: 0x254f1c, Func Offset: 0x35c
	// Line 1036, Address: 0x254f20, Func Offset: 0x360
	// Line 1035, Address: 0x254f28, Func Offset: 0x368
	// Line 1036, Address: 0x254f2c, Func Offset: 0x36c
	// Line 1032, Address: 0x254f34, Func Offset: 0x374
	// Line 1036, Address: 0x254f38, Func Offset: 0x378
	// Line 1033, Address: 0x254f40, Func Offset: 0x380
	// Line 1036, Address: 0x254f44, Func Offset: 0x384
	// Line 1034, Address: 0x254f4c, Func Offset: 0x38c
	// Line 1036, Address: 0x254f50, Func Offset: 0x390
	// Line 1035, Address: 0x254f58, Func Offset: 0x398
	// Line 1036, Address: 0x254f5c, Func Offset: 0x39c
	// Line 1032, Address: 0x254f64, Func Offset: 0x3a4
	// Line 1036, Address: 0x254f68, Func Offset: 0x3a8
	// Line 1033, Address: 0x254f70, Func Offset: 0x3b0
	// Line 1036, Address: 0x254f74, Func Offset: 0x3b4
	// Line 1034, Address: 0x254f7c, Func Offset: 0x3bc
	// Line 1036, Address: 0x254f80, Func Offset: 0x3c0
	// Line 1035, Address: 0x254f88, Func Offset: 0x3c8
	// Line 1036, Address: 0x254f8c, Func Offset: 0x3cc
	// Line 1032, Address: 0x254f94, Func Offset: 0x3d4
	// Line 1036, Address: 0x254f98, Func Offset: 0x3d8
	// Line 1033, Address: 0x254fa0, Func Offset: 0x3e0
	// Line 1036, Address: 0x254fa4, Func Offset: 0x3e4
	// Line 1034, Address: 0x254fac, Func Offset: 0x3ec
	// Line 1036, Address: 0x254fb0, Func Offset: 0x3f0
	// Line 1035, Address: 0x254fb8, Func Offset: 0x3f8
	// Line 1036, Address: 0x254fbc, Func Offset: 0x3fc
	// Line 1031, Address: 0x254fd4, Func Offset: 0x414
	// Line 1036, Address: 0x254fd8, Func Offset: 0x418
	// Line 1032, Address: 0x254fe4, Func Offset: 0x424
	// Line 1036, Address: 0x254fe8, Func Offset: 0x428
	// Line 1033, Address: 0x254ff0, Func Offset: 0x430
	// Line 1036, Address: 0x254ff4, Func Offset: 0x434
	// Line 1034, Address: 0x254ffc, Func Offset: 0x43c
	// Line 1036, Address: 0x255000, Func Offset: 0x440
	// Line 1035, Address: 0x255008, Func Offset: 0x448
	// Line 1036, Address: 0x25500c, Func Offset: 0x44c
	// Line 1041, Address: 0x255018, Func Offset: 0x458
	// Line 1042, Address: 0x255024, Func Offset: 0x464
	// Line 1043, Address: 0x25502c, Func Offset: 0x46c
	// Line 1044, Address: 0x255034, Func Offset: 0x474
	// Line 1049, Address: 0x255040, Func Offset: 0x480
	// Line 1046, Address: 0x255094, Func Offset: 0x4d4
	// Line 1049, Address: 0x255098, Func Offset: 0x4d8
	// Line 1047, Address: 0x2550a0, Func Offset: 0x4e0
	// Line 1049, Address: 0x2550a4, Func Offset: 0x4e4
	// Line 1048, Address: 0x2550ac, Func Offset: 0x4ec
	// Line 1049, Address: 0x2550b0, Func Offset: 0x4f0
	// Line 1046, Address: 0x2550b8, Func Offset: 0x4f8
	// Line 1049, Address: 0x2550bc, Func Offset: 0x4fc
	// Line 1047, Address: 0x2550c4, Func Offset: 0x504
	// Line 1049, Address: 0x2550c8, Func Offset: 0x508
	// Line 1048, Address: 0x2550d0, Func Offset: 0x510
	// Line 1049, Address: 0x2550d4, Func Offset: 0x514
	// Line 1046, Address: 0x2550dc, Func Offset: 0x51c
	// Line 1049, Address: 0x2550e0, Func Offset: 0x520
	// Line 1047, Address: 0x2550e8, Func Offset: 0x528
	// Line 1049, Address: 0x2550ec, Func Offset: 0x52c
	// Line 1048, Address: 0x2550f4, Func Offset: 0x534
	// Line 1049, Address: 0x2550f8, Func Offset: 0x538
	// Line 1046, Address: 0x255100, Func Offset: 0x540
	// Line 1049, Address: 0x255104, Func Offset: 0x544
	// Line 1047, Address: 0x25510c, Func Offset: 0x54c
	// Line 1049, Address: 0x255110, Func Offset: 0x550
	// Line 1048, Address: 0x255118, Func Offset: 0x558
	// Line 1049, Address: 0x25511c, Func Offset: 0x55c
	// Line 1046, Address: 0x255124, Func Offset: 0x564
	// Line 1049, Address: 0x255128, Func Offset: 0x568
	// Line 1047, Address: 0x255130, Func Offset: 0x570
	// Line 1049, Address: 0x255134, Func Offset: 0x574
	// Line 1048, Address: 0x25513c, Func Offset: 0x57c
	// Line 1049, Address: 0x255140, Func Offset: 0x580
	// Line 1046, Address: 0x255148, Func Offset: 0x588
	// Line 1049, Address: 0x25514c, Func Offset: 0x58c
	// Line 1047, Address: 0x255154, Func Offset: 0x594
	// Line 1049, Address: 0x255158, Func Offset: 0x598
	// Line 1048, Address: 0x255160, Func Offset: 0x5a0
	// Line 1049, Address: 0x255164, Func Offset: 0x5a4
	// Line 1046, Address: 0x25516c, Func Offset: 0x5ac
	// Line 1049, Address: 0x255170, Func Offset: 0x5b0
	// Line 1047, Address: 0x255178, Func Offset: 0x5b8
	// Line 1049, Address: 0x25517c, Func Offset: 0x5bc
	// Line 1048, Address: 0x255184, Func Offset: 0x5c4
	// Line 1049, Address: 0x255188, Func Offset: 0x5c8
	// Line 1046, Address: 0x255190, Func Offset: 0x5d0
	// Line 1049, Address: 0x255194, Func Offset: 0x5d4
	// Line 1047, Address: 0x25519c, Func Offset: 0x5dc
	// Line 1049, Address: 0x2551a0, Func Offset: 0x5e0
	// Line 1048, Address: 0x2551a8, Func Offset: 0x5e8
	// Line 1049, Address: 0x2551ac, Func Offset: 0x5ec
	// Line 1046, Address: 0x2551d4, Func Offset: 0x614
	// Line 1049, Address: 0x2551d8, Func Offset: 0x618
	// Line 1047, Address: 0x2551e0, Func Offset: 0x620
	// Line 1049, Address: 0x2551e4, Func Offset: 0x624
	// Line 1048, Address: 0x2551ec, Func Offset: 0x62c
	// Line 1049, Address: 0x2551f0, Func Offset: 0x630
	// Line 1050, Address: 0x2551fc, Func Offset: 0x63c
	// Line 1063, Address: 0x255200, Func Offset: 0x640
	// Line 1053, Address: 0x255204, Func Offset: 0x644
	// Line 1054, Address: 0x255210, Func Offset: 0x650
	// Line 1055, Address: 0x25521c, Func Offset: 0x65c
	// Line 1056, Address: 0x255228, Func Offset: 0x668
	// Line 1057, Address: 0x255234, Func Offset: 0x674
	// Line 1058, Address: 0x255240, Func Offset: 0x680
	// Line 1059, Address: 0x25524c, Func Offset: 0x68c
	// Line 1060, Address: 0x255258, Func Offset: 0x698
	// Line 1063, Address: 0x255260, Func Offset: 0x6a0
	// Line 1064, Address: 0x25526c, Func Offset: 0x6ac
	// Line 1065, Address: 0x255278, Func Offset: 0x6b8
	// Line 1023, Address: 0x255290, Func Offset: 0x6d0
	// Line 1065, Address: 0x255298, Func Offset: 0x6d8
	// Func End, Address: 0x2552dc, Func Offset: 0x71c
}

// SndBucketStun__7NeptuneFPQ211zNMENeptune13zLoopingSound
// Start address: 0x2552e0
uint8 SndBucketStun(zLoopingSound* loopsnd)
{
	NMECfgNeptune* cfg;
	float32 vollerp;
	// Line 938, Address: 0x2552e0, Func Offset: 0
	// Line 939, Address: 0x2552f0, Func Offset: 0x10
	// Line 940, Address: 0x2552f8, Func Offset: 0x18
	// Line 943, Address: 0x255320, Func Offset: 0x40
	// Line 946, Address: 0x25532c, Func Offset: 0x4c
	// Line 950, Address: 0x255330, Func Offset: 0x50
	// Line 946, Address: 0x255334, Func Offset: 0x54
	// Line 950, Address: 0x255340, Func Offset: 0x60
	// Line 960, Address: 0x25536c, Func Offset: 0x8c
	// Line 945, Address: 0x255374, Func Offset: 0x94
	// Line 960, Address: 0x25537c, Func Offset: 0x9c
	// Line 955, Address: 0x255384, Func Offset: 0xa4
	// Line 960, Address: 0x255388, Func Offset: 0xa8
	// Line 954, Address: 0x25538c, Func Offset: 0xac
	// Line 960, Address: 0x255390, Func Offset: 0xb0
	// Line 955, Address: 0x25539c, Func Offset: 0xbc
	// Line 960, Address: 0x2553a0, Func Offset: 0xc0
	// Line 957, Address: 0x2553ac, Func Offset: 0xcc
	// Line 961, Address: 0x2553b0, Func Offset: 0xd0
	// Func End, Address: 0x2553c4, Func Offset: 0xe4
}

// SndBeamStun__7NeptuneFPQ211zNMENeptune13zLoopingSound
// Start address: 0x2553d0
uint8 SndBeamStun(zLoopingSound* loopsnd)
{
	// Line 927, Address: 0x2553d0, Func Offset: 0
	// Line 931, Address: 0x2553d4, Func Offset: 0x4
	// Line 930, Address: 0x2553d8, Func Offset: 0x8
	// Line 931, Address: 0x2553ec, Func Offset: 0x1c
	// Line 935, Address: 0x255400, Func Offset: 0x30
	// Line 933, Address: 0x25540c, Func Offset: 0x3c
	// Line 936, Address: 0x255410, Func Offset: 0x40
	// Func End, Address: 0x255418, Func Offset: 0x48
}

// SndRing__7NeptuneFPQ211zNMENeptune13zLoopingSound
// Start address: 0x255420
uint8 SndRing(zLoopingSound* loopsnd)
{
	NMECfgNeptune* cfg;
	NMECfgNeptuneAttack* currAtk;
	zLightningRing* ltring;
	float32 playerX;
	float32 playerZ;
	float32 invPlayerMag;
	float32 dopplerp;
	float32 distScale;
	// Line 867, Address: 0x255420, Func Offset: 0
	// Line 870, Address: 0x255424, Func Offset: 0x4
	// Line 869, Address: 0x25542c, Func Offset: 0xc
	// Line 868, Address: 0x255430, Func Offset: 0x10
	// Line 869, Address: 0x255434, Func Offset: 0x14
	// Line 870, Address: 0x255438, Func Offset: 0x18
	// Line 869, Address: 0x25543c, Func Offset: 0x1c
	// Line 870, Address: 0x255440, Func Offset: 0x20
	// Line 869, Address: 0x255444, Func Offset: 0x24
	// Line 870, Address: 0x255448, Func Offset: 0x28
	// Line 869, Address: 0x25544c, Func Offset: 0x2c
	// Line 870, Address: 0x255450, Func Offset: 0x30
	// Line 874, Address: 0x255480, Func Offset: 0x60
	// Line 884, Address: 0x255484, Func Offset: 0x64
	// Line 883, Address: 0x255490, Func Offset: 0x70
	// Line 877, Address: 0x255494, Func Offset: 0x74
	// Line 882, Address: 0x2554b0, Func Offset: 0x90
	// Line 881, Address: 0x2554b4, Func Offset: 0x94
	// Line 877, Address: 0x2554b8, Func Offset: 0x98
	// Line 882, Address: 0x2554c4, Func Offset: 0xa4
	// Line 881, Address: 0x2554c8, Func Offset: 0xa8
	// Line 882, Address: 0x2554cc, Func Offset: 0xac
	// Line 881, Address: 0x2554d0, Func Offset: 0xb0
	// Line 883, Address: 0x2554d4, Func Offset: 0xb4
	// Line 884, Address: 0x2554e8, Func Offset: 0xc8
	// Line 888, Address: 0x255500, Func Offset: 0xe0
	// Line 889, Address: 0x255504, Func Offset: 0xe4
	// Line 890, Address: 0x255508, Func Offset: 0xe8
	// Line 894, Address: 0x255510, Func Offset: 0xf0
	// Line 897, Address: 0x25551c, Func Offset: 0xfc
	// Line 898, Address: 0x255530, Func Offset: 0x110
	// Line 899, Address: 0x255584, Func Offset: 0x164
	// Line 910, Address: 0x2555b4, Func Offset: 0x194
	// Line 899, Address: 0x2555b8, Func Offset: 0x198
	// Line 908, Address: 0x2555e4, Func Offset: 0x1c4
	// Line 910, Address: 0x2555f0, Func Offset: 0x1d0
	// Line 911, Address: 0x2555fc, Func Offset: 0x1dc
	// Line 914, Address: 0x255614, Func Offset: 0x1f4
	// Line 921, Address: 0x255640, Func Offset: 0x220
	// Line 924, Address: 0x25564c, Func Offset: 0x22c
	// Line 887, Address: 0x255658, Func Offset: 0x238
	// Line 924, Address: 0x255660, Func Offset: 0x240
	// Line 896, Address: 0x255664, Func Offset: 0x244
	// Line 924, Address: 0x25566c, Func Offset: 0x24c
	// Line 915, Address: 0x255674, Func Offset: 0x254
	// Line 924, Address: 0x255678, Func Offset: 0x258
	// Line 915, Address: 0x255680, Func Offset: 0x260
	// Line 916, Address: 0x255688, Func Offset: 0x268
	// Line 924, Address: 0x25568c, Func Offset: 0x26c
	// Line 918, Address: 0x255698, Func Offset: 0x278
	// Line 925, Address: 0x25569c, Func Offset: 0x27c
	// Func End, Address: 0x2556a4, Func Offset: 0x284
}

// SndLightning__7NeptuneFPQ211zNMENeptune13zLoopingSound
// Start address: 0x2556b0
uint8 SndLightning(zLoopingSound* loopsnd)
{
	// Line 850, Address: 0x2556b0, Func Offset: 0
	// Line 852, Address: 0x2556f4, Func Offset: 0x44
	// Line 857, Address: 0x255700, Func Offset: 0x50
	// Line 852, Address: 0x255708, Func Offset: 0x58
	// Line 857, Address: 0x25570c, Func Offset: 0x5c
	// Line 859, Address: 0x255724, Func Offset: 0x74
	// Line 860, Address: 0x255730, Func Offset: 0x80
	// Line 861, Address: 0x255734, Func Offset: 0x84
	// Line 864, Address: 0x25573c, Func Offset: 0x8c
	// Line 855, Address: 0x255768, Func Offset: 0xb8
	// Line 865, Address: 0x255770, Func Offset: 0xc0
	// Func End, Address: 0x255778, Func Offset: 0xc8
}

// SndHose__7NeptuneFPQ211zNMENeptune13zLoopingSound
// Start address: 0x255780
uint8 SndHose(zLoopingSound* loopsnd)
{
	NMECfgNeptune* cfg;
	// Line 813, Address: 0x255780, Func Offset: 0
	// Line 817, Address: 0x255788, Func Offset: 0x8
	// Line 819, Address: 0x25579c, Func Offset: 0x1c
	// Line 827, Address: 0x2557b4, Func Offset: 0x34
	// Line 828, Address: 0x2557c4, Func Offset: 0x44
	// Line 831, Address: 0x2557dc, Func Offset: 0x5c
	// Line 833, Address: 0x2557ec, Func Offset: 0x6c
	// Line 831, Address: 0x2557f0, Func Offset: 0x70
	// Line 833, Address: 0x2557f4, Func Offset: 0x74
	// Line 834, Address: 0x255800, Func Offset: 0x80
	// Line 835, Address: 0x255824, Func Offset: 0xa4
	// Line 836, Address: 0x255834, Func Offset: 0xb4
	// Line 837, Address: 0x255844, Func Offset: 0xc4
	// Line 838, Address: 0x255848, Func Offset: 0xc8
	// Line 839, Address: 0x255858, Func Offset: 0xd8
	// Line 845, Address: 0x255860, Func Offset: 0xe0
	// Line 823, Address: 0x2558a0, Func Offset: 0x120
	// Line 845, Address: 0x2558a8, Func Offset: 0x128
	// Line 823, Address: 0x2558ac, Func Offset: 0x12c
	// Line 845, Address: 0x2558b0, Func Offset: 0x130
	// Line 823, Address: 0x2558b4, Func Offset: 0x134
	// Line 845, Address: 0x2558b8, Func Offset: 0x138
	// Line 823, Address: 0x2558d8, Func Offset: 0x158
	// Line 845, Address: 0x2558e0, Func Offset: 0x160
	// Line 832, Address: 0x255908, Func Offset: 0x188
	// Line 845, Address: 0x255914, Func Offset: 0x194
	// Line 832, Address: 0x255918, Func Offset: 0x198
	// Line 833, Address: 0x25591c, Func Offset: 0x19c
	// Line 845, Address: 0x255924, Func Offset: 0x1a4
	// Line 846, Address: 0x255930, Func Offset: 0x1b0
	// Func End, Address: 0x25593c, Func Offset: 0x1bc
}

// EmitScorchCB__Q27Neptune3ParFP16zNeptuneParticlePvf
// Start address: 0x255940
uint32 EmitScorchCB(zNeptuneParticle* par)
{
	int32 foundScorch;
	uint32 foundTriIdx;
	uint32 foundVertIdx;
	float32 foundUV;
	int32 i;
	int32 whichScorch;
	float32 areaSample;
	RpGeometry* geom;
	uint32 triVertIdx;
	uint32 triIdx;
	uint32 vertIdx;
	float32 testUV;
	xVec3 evalVerts[3];
	RpGeometry* scorchGeom;
	zNeptuneParticleGravBounceUser* gbuser;
	// Line 642, Address: 0x255940, Func Offset: 0
	// Line 651, Address: 0x255944, Func Offset: 0x4
	// Line 642, Address: 0x255948, Func Offset: 0x8
	// Line 651, Address: 0x25594c, Func Offset: 0xc
	// Line 642, Address: 0x255950, Func Offset: 0x10
	// Line 656, Address: 0x255970, Func Offset: 0x30
	// Line 642, Address: 0x255974, Func Offset: 0x34
	// Line 651, Address: 0x25597c, Func Offset: 0x3c
	// Line 660, Address: 0x255980, Func Offset: 0x40
	// Line 665, Address: 0x2559d8, Func Offset: 0x98
	// Line 663, Address: 0x2559f4, Func Offset: 0xb4
	// Line 665, Address: 0x2559f8, Func Offset: 0xb8
	// Line 668, Address: 0x255a08, Func Offset: 0xc8
	// Line 669, Address: 0x255a14, Func Offset: 0xd4
	// Line 670, Address: 0x255a20, Func Offset: 0xe0
	// Line 671, Address: 0x255a30, Func Offset: 0xf0
	// Line 669, Address: 0x255a3c, Func Offset: 0xfc
	// Line 670, Address: 0x255a4c, Func Offset: 0x10c
	// Line 671, Address: 0x255a54, Func Offset: 0x114
	// Line 670, Address: 0x255a58, Func Offset: 0x118
	// Line 671, Address: 0x255a60, Func Offset: 0x120
	// Line 676, Address: 0x255a8c, Func Offset: 0x14c
	// Line 680, Address: 0x255a94, Func Offset: 0x154
	// Line 681, Address: 0x255aa0, Func Offset: 0x160
	// Line 682, Address: 0x255aa4, Func Offset: 0x164
	// Line 683, Address: 0x255aa8, Func Offset: 0x168
	// Line 684, Address: 0x255aac, Func Offset: 0x16c
	// Line 686, Address: 0x255ab0, Func Offset: 0x170
	// Line 689, Address: 0x255acc, Func Offset: 0x18c
	// Line 693, Address: 0x255ae0, Func Offset: 0x1a0
	// Line 694, Address: 0x255aec, Func Offset: 0x1ac
	// Line 693, Address: 0x255af8, Func Offset: 0x1b8
	// Line 695, Address: 0x255b04, Func Offset: 0x1c4
	// Line 694, Address: 0x255b0c, Func Offset: 0x1cc
	// Line 695, Address: 0x255b10, Func Offset: 0x1d0
	// Line 694, Address: 0x255b18, Func Offset: 0x1d8
	// Line 695, Address: 0x255b1c, Func Offset: 0x1dc
	// Line 698, Address: 0x255b34, Func Offset: 0x1f4
	// Line 695, Address: 0x255b38, Func Offset: 0x1f8
	// Line 698, Address: 0x255b3c, Func Offset: 0x1fc
	// Line 699, Address: 0x255b48, Func Offset: 0x208
	// Line 703, Address: 0x255b4c, Func Offset: 0x20c
	// Line 699, Address: 0x255b50, Func Offset: 0x210
	// Line 700, Address: 0x255b54, Func Offset: 0x214
	// Line 699, Address: 0x255b58, Func Offset: 0x218
	// Line 700, Address: 0x255b5c, Func Offset: 0x21c
	// Line 699, Address: 0x255b60, Func Offset: 0x220
	// Line 701, Address: 0x255b64, Func Offset: 0x224
	// Line 699, Address: 0x255b68, Func Offset: 0x228
	// Line 701, Address: 0x255b6c, Func Offset: 0x22c
	// Line 699, Address: 0x255b70, Func Offset: 0x230
	// Line 701, Address: 0x255b74, Func Offset: 0x234
	// Line 699, Address: 0x255b78, Func Offset: 0x238
	// Line 701, Address: 0x255b7c, Func Offset: 0x23c
	// Line 699, Address: 0x255b80, Func Offset: 0x240
	// Line 702, Address: 0x255b84, Func Offset: 0x244
	// Line 703, Address: 0x255b88, Func Offset: 0x248
	// Line 699, Address: 0x255b8c, Func Offset: 0x24c
	// Line 702, Address: 0x255b90, Func Offset: 0x250
	// Line 699, Address: 0x255b94, Func Offset: 0x254
	// Line 700, Address: 0x255b9c, Func Offset: 0x25c
	// Line 701, Address: 0x255ba0, Func Offset: 0x260
	// Line 700, Address: 0x255ba4, Func Offset: 0x264
	// Line 701, Address: 0x255ba8, Func Offset: 0x268
	// Line 700, Address: 0x255bac, Func Offset: 0x26c
	// Line 701, Address: 0x255bb0, Func Offset: 0x270
	// Line 700, Address: 0x255bb4, Func Offset: 0x274
	// Line 701, Address: 0x255bb8, Func Offset: 0x278
	// Line 700, Address: 0x255bc4, Func Offset: 0x284
	// Line 701, Address: 0x255bc8, Func Offset: 0x288
	// Line 700, Address: 0x255bcc, Func Offset: 0x28c
	// Line 701, Address: 0x255bd0, Func Offset: 0x290
	// Line 700, Address: 0x255bd4, Func Offset: 0x294
	// Line 701, Address: 0x255bd8, Func Offset: 0x298
	// Line 700, Address: 0x255bdc, Func Offset: 0x29c
	// Line 702, Address: 0x255be0, Func Offset: 0x2a0
	// Line 700, Address: 0x255be4, Func Offset: 0x2a4
	// Line 702, Address: 0x255bf0, Func Offset: 0x2b0
	// Line 700, Address: 0x255bfc, Func Offset: 0x2bc
	// Line 702, Address: 0x255c00, Func Offset: 0x2c0
	// Line 703, Address: 0x255c40, Func Offset: 0x300
	// Line 704, Address: 0x255c48, Func Offset: 0x308
	// Line 709, Address: 0x255c54, Func Offset: 0x314
	// Line 704, Address: 0x255c58, Func Offset: 0x318
	// Line 710, Address: 0x255c5c, Func Offset: 0x31c
	// Line 704, Address: 0x255c60, Func Offset: 0x320
	// Line 712, Address: 0x255c64, Func Offset: 0x324
	// Line 704, Address: 0x255c68, Func Offset: 0x328
	// Line 709, Address: 0x255ca0, Func Offset: 0x360
	// Line 710, Address: 0x255ca4, Func Offset: 0x364
	// Line 713, Address: 0x255ca8, Func Offset: 0x368
	// Func End, Address: 0x255cd8, Func Offset: 0x398
}

// EmitSpiralCB__Q27Neptune3ParFP16zNeptuneParticlePvf
// Start address: 0x255ce0
uint32 EmitSpiralCB(zNeptuneParticle* par, void* context)
{
	EmitContext* emitctx;
	float32 xinit;
	float32 yinit;
	float32 invmag;
	zNeptuneParticleSpiralUser* spuser;
	int32 sign;
	// Line 598, Address: 0x255ce0, Func Offset: 0
	// Line 601, Address: 0x255cfc, Func Offset: 0x1c
	// Line 602, Address: 0x255d10, Func Offset: 0x30
	// Line 608, Address: 0x255db4, Func Offset: 0xd4
	// Line 610, Address: 0x255dbc, Func Offset: 0xdc
	// Line 621, Address: 0x255dc0, Func Offset: 0xe0
	// Line 622, Address: 0x255dc8, Func Offset: 0xe8
	// Line 625, Address: 0x255dd0, Func Offset: 0xf0
	// Line 610, Address: 0x255dd8, Func Offset: 0xf8
	// Line 611, Address: 0x255ddc, Func Offset: 0xfc
	// Line 612, Address: 0x255de4, Func Offset: 0x104
	// Line 613, Address: 0x255dec, Func Offset: 0x10c
	// Line 614, Address: 0x255df4, Func Offset: 0x114
	// Line 615, Address: 0x255dfc, Func Offset: 0x11c
	// Line 616, Address: 0x255e20, Func Offset: 0x140
	// Line 615, Address: 0x255e24, Func Offset: 0x144
	// Line 616, Address: 0x255e28, Func Offset: 0x148
	// Line 615, Address: 0x255e2c, Func Offset: 0x14c
	// Line 616, Address: 0x255e30, Func Offset: 0x150
	// Line 618, Address: 0x255e50, Func Offset: 0x170
	// Line 620, Address: 0x255e6c, Func Offset: 0x18c
	// Line 621, Address: 0x255e78, Func Offset: 0x198
	// Line 622, Address: 0x255e7c, Func Offset: 0x19c
	// Line 623, Address: 0x255e84, Func Offset: 0x1a4
	// Line 624, Address: 0x255e88, Func Offset: 0x1a8
	// Line 623, Address: 0x255e8c, Func Offset: 0x1ac
	// Line 624, Address: 0x255e90, Func Offset: 0x1b0
	// Line 625, Address: 0x255ea0, Func Offset: 0x1c0
	// Line 630, Address: 0x255efc, Func Offset: 0x21c
	// Line 635, Address: 0x255f04, Func Offset: 0x224
	// Line 638, Address: 0x255f10, Func Offset: 0x230
	// Line 635, Address: 0x255f14, Func Offset: 0x234
	// Line 638, Address: 0x255f18, Func Offset: 0x238
	// Line 631, Address: 0x255f28, Func Offset: 0x248
	// Line 632, Address: 0x255f2c, Func Offset: 0x24c
	// Line 639, Address: 0x255f34, Func Offset: 0x254
	// Func End, Address: 0x255f4c, Func Offset: 0x26c
}

// EmitBeamCB__Q27Neptune3ParFP16zNeptuneParticlePvf
// Start address: 0x255f50
uint32 EmitBeamCB(zNeptuneParticle* par, void* context, float32 timeoffs)
{
	EmitContext* emitctx;
	zNeptuneParticleBeamUser* bmuser;
	float32 vo;
	float32 spreadx;
	float32 spready;
	float32 randang;
	// Line 567, Address: 0x255f50, Func Offset: 0
	// Line 569, Address: 0x255f74, Func Offset: 0x24
	// Line 573, Address: 0x255f78, Func Offset: 0x28
	// Line 567, Address: 0x255f7c, Func Offset: 0x2c
	// Line 570, Address: 0x255f80, Func Offset: 0x30
	// Line 574, Address: 0x255fb8, Func Offset: 0x68
	// Line 578, Address: 0x256010, Func Offset: 0xc0
	// Line 574, Address: 0x256014, Func Offset: 0xc4
	// Line 577, Address: 0x256068, Func Offset: 0x118
	// Line 578, Address: 0x256080, Func Offset: 0x130
	// Line 580, Address: 0x256098, Func Offset: 0x148
	// Line 581, Address: 0x2560ec, Func Offset: 0x19c
	// Line 582, Address: 0x2560f4, Func Offset: 0x1a4
	// Line 583, Address: 0x256104, Func Offset: 0x1b4
	// Line 586, Address: 0x25610c, Func Offset: 0x1bc
	// Line 594, Address: 0x256114, Func Offset: 0x1c4
	// Line 586, Address: 0x256118, Func Offset: 0x1c8
	// Line 582, Address: 0x25611c, Func Offset: 0x1cc
	// Line 583, Address: 0x256120, Func Offset: 0x1d0
	// Line 584, Address: 0x256130, Func Offset: 0x1e0
	// Line 585, Address: 0x256134, Func Offset: 0x1e4
	// Line 586, Address: 0x256138, Func Offset: 0x1e8
	// Line 587, Address: 0x256148, Func Offset: 0x1f8
	// Line 588, Address: 0x256164, Func Offset: 0x214
	// Line 591, Address: 0x256180, Func Offset: 0x230
	// Line 595, Address: 0x256198, Func Offset: 0x248
	// Func End, Address: 0x2561b4, Func Offset: 0x264
}

