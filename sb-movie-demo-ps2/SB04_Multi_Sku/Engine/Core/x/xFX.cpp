



void xFX_SceneShutdown();
void xFX_SceneSetup();
void xFXAuraRender();
void xFXAuraClearCount();
void xFXAuraUpdate(float32 dt);
void xFXAuraAdd(xVec3* pos, xColor_tag* color, float32 size, uint8 doTrivialCull);
void xFXAuraPTankRender();
void xFXAuraPTankInit();
void render_all();
void scene_enter();
int32 compare_ribbons(void* e1, void* e2);
void render_strip(RxObjSpace3DVertex* verts, iterator_1 first, uint32 size);
void eval_joint(joint_data& joint, xColor_tag& color, float32& width);
void refresh_joint(joint_data& joint, iterator_1& it);
void get_normal(xVec3& norm, xVec3& dir, float32 orient);
void render();
void update(float32 dt);
void insert(xVec3& loc, xVec3& norm, float32 scale, float32 alpha, int32 flags);
void set_config(config_type* cfg);
void load_default_config(config_type& cfg);
void clear();
void create();
void xFXShineRender();
void xFXShineUpdate(float32 dt);
void xFXShineInit();
void xFXStreakUpdate(uint32 id, xVec3* a, xVec3* b);
void xFXStreakStop(uint32 id);
uint32 xFXStreakStart(float32 frequency, float32 alphaFadeRate, float32 alphaStart, uint32 textureID, xColor_tag* edge_a, xColor_tag* edge_b, int32 taper);
void xFXStreakRender();
void xFXStreakUpdate(float32 dt);
void xFXStreakInit();
void xFXFireworksUpdate(float32 dt);
void xFXFireworksLaunch(float32 countdownTime, xVec3* pos, float32 fuelTime);
void xFXFireworksInit(int8* fireworksTrailEmitter, int8* fireworksEmitter1, int8* fireworksEmitter2, int8* fireworksSound, int8* fireworksLaunchSound);
void xFXRenderProximityFade(xModelInstance& model, float32 near_dist, float32 far_dist);
RpAtomic* xFXanimUVAtomicSetup(RpAtomic* atomic, uint8 dualPass);
void xFXanimUV2PSetTexture(RwTexture* texture);
RpAtomic* xFXAtomicEnvMapSetup(RpAtomic* atomic, uint32 envmapID, float32 shininess);
RpAtomic* xFXBubbleRender(RpAtomic* atomic);
RpMaterial* MaterialSetEnvMap2(RpMaterial* material, void* data);
RpMaterial* MaterialSetEnvMap(RpMaterial* material, void* data);
RpMaterial* MaterialSetShininess(RpMaterial* material);
RpAtomic* AtomicDisableMatFX(RpAtomic* atomic);
RpMaterial* MaterialDisableMatFX(RpMaterial* material);
void xFXUpdate(float32 dt);
void xFX_SceneExit();
void xFX_SceneEnter(RpWorld* world);
void xFXRingRender();
void xFXRingUpdate(float32 dt);
xFXRing* xFXRingCreate(xVec3* pos, xFXRing* params);
void DrawRing(xFXRing* m);
void xFXInit();

// xFX_SceneShutdown__Fv
// Start address: 0x3d3200
void xFX_SceneShutdown()
{
	// Line 4867, Address: 0x3d3200, Func Offset: 0
	// Line 4868, Address: 0x3d3214, Func Offset: 0x14
	// Line 4869, Address: 0x3d3254, Func Offset: 0x54
	// Func End, Address: 0x3d3268, Func Offset: 0x68
}

// xFX_SceneSetup__Fv
// Start address: 0x3d3270
void xFX_SceneSetup()
{
	// Line 4859, Address: 0x3d3270, Func Offset: 0
	// Line 4860, Address: 0x3d3274, Func Offset: 0x4
	// Line 4859, Address: 0x3d3278, Func Offset: 0x8
	// Line 4860, Address: 0x3d327c, Func Offset: 0xc
	// Line 4862, Address: 0x3d3290, Func Offset: 0x20
	// Line 4864, Address: 0x3d3298, Func Offset: 0x28
	// Func End, Address: 0x3d32a4, Func Offset: 0x34
}

// xFXAuraRender__Fv
// Start address: 0x3d32b0
void xFXAuraRender()
{
	int32 fogstate;
	// Line 4807, Address: 0x3d32b0, Func Offset: 0
	// Line 4809, Address: 0x3d32bc, Func Offset: 0xc
	// Line 4813, Address: 0x3d32c8, Func Offset: 0x18
	// Line 4814, Address: 0x3d32d4, Func Offset: 0x24
	// Line 4813, Address: 0x3d32d8, Func Offset: 0x28
	// Line 4814, Address: 0x3d32dc, Func Offset: 0x2c
	// Line 4815, Address: 0x3d32e8, Func Offset: 0x38
	// Line 4816, Address: 0x3d32fc, Func Offset: 0x4c
	// Line 4818, Address: 0x3d330c, Func Offset: 0x5c
	// Line 4820, Address: 0x3d3314, Func Offset: 0x64
	// Line 4821, Address: 0x3d3324, Func Offset: 0x74
	// Line 4856, Address: 0x3d3334, Func Offset: 0x84
	// Func End, Address: 0x3d3344, Func Offset: 0x94
}

// xFXAuraClearCount__Fv
// Start address: 0x3d3350
void xFXAuraClearCount()
{
	// Line 4646, Address: 0x3d3350, Func Offset: 0
	// Func End, Address: 0x3d3358, Func Offset: 0x8
}

// xFXAuraUpdate__Ff
// Start address: 0x3d3360
void xFXAuraUpdate(float32 dt)
{
	// Line 4616, Address: 0x3d3360, Func Offset: 0
	// Line 4617, Address: 0x3d336c, Func Offset: 0xc
	// Line 4621, Address: 0x3d3378, Func Offset: 0x18
	// Line 4620, Address: 0x3d337c, Func Offset: 0x1c
	// Line 4621, Address: 0x3d3380, Func Offset: 0x20
	// Line 4620, Address: 0x3d3388, Func Offset: 0x28
	// Line 4622, Address: 0x3d338c, Func Offset: 0x2c
	// Line 4620, Address: 0x3d3390, Func Offset: 0x30
	// Line 4622, Address: 0x3d3394, Func Offset: 0x34
	// Line 4621, Address: 0x3d3398, Func Offset: 0x38
	// Line 4620, Address: 0x3d339c, Func Offset: 0x3c
	// Line 4622, Address: 0x3d33a0, Func Offset: 0x40
	// Line 4620, Address: 0x3d33a4, Func Offset: 0x44
	// Line 4622, Address: 0x3d33ac, Func Offset: 0x4c
	// Line 4621, Address: 0x3d33b0, Func Offset: 0x50
	// Line 4622, Address: 0x3d33bc, Func Offset: 0x5c
	// Line 4623, Address: 0x3d33c4, Func Offset: 0x64
	// Line 4624, Address: 0x3d33e4, Func Offset: 0x84
	// Line 4625, Address: 0x3d33f8, Func Offset: 0x98
	// Line 4624, Address: 0x3d33fc, Func Offset: 0x9c
	// Line 4625, Address: 0x3d3400, Func Offset: 0xa0
	// Line 4628, Address: 0x3d340c, Func Offset: 0xac
	// Line 4625, Address: 0x3d3410, Func Offset: 0xb0
	// Line 4628, Address: 0x3d3414, Func Offset: 0xb4
	// Line 4625, Address: 0x3d3418, Func Offset: 0xb8
	// Line 4628, Address: 0x3d341c, Func Offset: 0xbc
	// Line 4625, Address: 0x3d3420, Func Offset: 0xc0
	// Line 4628, Address: 0x3d3424, Func Offset: 0xc4
	// Line 4629, Address: 0x3d3428, Func Offset: 0xc8
	// Line 4628, Address: 0x3d3430, Func Offset: 0xd0
	// Line 4625, Address: 0x3d343c, Func Offset: 0xdc
	// Line 4629, Address: 0x3d3440, Func Offset: 0xe0
	// Line 4628, Address: 0x3d3448, Func Offset: 0xe8
	// Line 4629, Address: 0x3d3450, Func Offset: 0xf0
	// Line 4630, Address: 0x3d345c, Func Offset: 0xfc
	// Line 4631, Address: 0x3d3468, Func Offset: 0x108
	// Line 4630, Address: 0x3d346c, Func Offset: 0x10c
	// Line 4631, Address: 0x3d3470, Func Offset: 0x110
	// Line 4632, Address: 0x3d3480, Func Offset: 0x120
	// Line 4631, Address: 0x3d3484, Func Offset: 0x124
	// Line 4633, Address: 0x3d3488, Func Offset: 0x128
	// Line 4632, Address: 0x3d348c, Func Offset: 0x12c
	// Line 4637, Address: 0x3d3490, Func Offset: 0x130
	// Line 4632, Address: 0x3d3494, Func Offset: 0x134
	// Line 4634, Address: 0x3d3498, Func Offset: 0x138
	// Line 4633, Address: 0x3d349c, Func Offset: 0x13c
	// Line 4634, Address: 0x3d34a4, Func Offset: 0x144
	// Line 4632, Address: 0x3d34ac, Func Offset: 0x14c
	// Line 4641, Address: 0x3d34b4, Func Offset: 0x154
	// Line 4622, Address: 0x3d34bc, Func Offset: 0x15c
	// Line 4623, Address: 0x3d34c8, Func Offset: 0x168
	// Line 4629, Address: 0x3d34d4, Func Offset: 0x174
	// Line 4641, Address: 0x3d34d8, Func Offset: 0x178
	// Line 4629, Address: 0x3d34dc, Func Offset: 0x17c
	// Line 4641, Address: 0x3d34f4, Func Offset: 0x194
	// Func End, Address: 0x3d3504, Func Offset: 0x1a4
}

// xFXAuraAdd__FP5xVec3P10xColor_tagfb
// Start address: 0x3d3510
void xFXAuraAdd(xVec3* pos, xColor_tag* color, float32 size, uint8 doTrivialCull)
{
	xMat4x3* camMat;
	xVec3 camToAura;
	_xFXAura* ap;
	// Line 4586, Address: 0x3d3510, Func Offset: 0
	// Line 4591, Address: 0x3d3518, Func Offset: 0x8
	// Line 4595, Address: 0x3d3524, Func Offset: 0x14
	// Line 4599, Address: 0x3d352c, Func Offset: 0x1c
	// Line 4600, Address: 0x3d3530, Func Offset: 0x20
	// Line 4599, Address: 0x3d3534, Func Offset: 0x24
	// Line 4600, Address: 0x3d3538, Func Offset: 0x28
	// Line 4601, Address: 0x3d3550, Func Offset: 0x40
	// Line 4600, Address: 0x3d3554, Func Offset: 0x44
	// Line 4601, Address: 0x3d3558, Func Offset: 0x48
	// Line 4600, Address: 0x3d355c, Func Offset: 0x4c
	// Line 4601, Address: 0x3d3560, Func Offset: 0x50
	// Line 4600, Address: 0x3d3564, Func Offset: 0x54
	// Line 4601, Address: 0x3d3570, Func Offset: 0x60
	// Line 4600, Address: 0x3d3574, Func Offset: 0x64
	// Line 4601, Address: 0x3d35b4, Func Offset: 0xa4
	// Line 4600, Address: 0x3d35b8, Func Offset: 0xa8
	// Line 4601, Address: 0x3d35bc, Func Offset: 0xac
	// Line 4600, Address: 0x3d35c0, Func Offset: 0xb0
	// Line 4601, Address: 0x3d35c4, Func Offset: 0xb4
	// Line 4603, Address: 0x3d35d8, Func Offset: 0xc8
	// Line 4604, Address: 0x3d3604, Func Offset: 0xf4
	// Line 4608, Address: 0x3d360c, Func Offset: 0xfc
	// Line 4609, Address: 0x3d361c, Func Offset: 0x10c
	// Line 4608, Address: 0x3d3620, Func Offset: 0x110
	// Line 4609, Address: 0x3d3628, Func Offset: 0x118
	// Line 4610, Address: 0x3d3630, Func Offset: 0x120
	// Line 4611, Address: 0x3d3648, Func Offset: 0x138
	// Line 4612, Address: 0x3d3668, Func Offset: 0x158
	// Line 4613, Address: 0x3d366c, Func Offset: 0x15c
	// Func End, Address: 0x3d3678, Func Offset: 0x168
}

// xFXAuraPTankRender__Fv
// Start address: 0x3d3680
void xFXAuraPTankRender()
{
	int32 activeCount;
	RpPTankLockStruct poslock;
	RpPTankLockStruct sizelock;
	RpPTankLockStruct rotlock;
	RpPTankLockStruct collock;
	uint32 i;
	_xFXAura* ap;
	xMat4x3* cammat;
	float32 nearclip;
	float32 scaleX;
	float32 scaleY;
	float32 rotA;
	float32 rotB;
	float32 width;
	float32 height;
	xVec3 myat;
	float32 depth;
	float32 camdist;
	float32 at_offset;
	// Line 4424, Address: 0x3d3680, Func Offset: 0
	// Line 4426, Address: 0x3d36c4, Func Offset: 0x44
	// Line 4434, Address: 0x3d36d8, Func Offset: 0x58
	// Line 4436, Address: 0x3d36e0, Func Offset: 0x60
	// Line 4437, Address: 0x3d36f4, Func Offset: 0x74
	// Line 4438, Address: 0x3d3708, Func Offset: 0x88
	// Line 4439, Address: 0x3d371c, Func Offset: 0x9c
	// Line 4443, Address: 0x3d3730, Func Offset: 0xb0
	// Line 4446, Address: 0x3d3734, Func Offset: 0xb4
	// Line 4443, Address: 0x3d3738, Func Offset: 0xb8
	// Line 4446, Address: 0x3d3740, Func Offset: 0xc0
	// Line 4443, Address: 0x3d3744, Func Offset: 0xc4
	// Line 4445, Address: 0x3d3748, Func Offset: 0xc8
	// Line 4444, Address: 0x3d374c, Func Offset: 0xcc
	// Line 4445, Address: 0x3d3750, Func Offset: 0xd0
	// Line 4446, Address: 0x3d375c, Func Offset: 0xdc
	// Line 4444, Address: 0x3d3768, Func Offset: 0xe8
	// Line 4446, Address: 0x3d376c, Func Offset: 0xec
	// Line 4445, Address: 0x3d3774, Func Offset: 0xf4
	// Line 4446, Address: 0x3d3778, Func Offset: 0xf8
	// Line 4450, Address: 0x3d3794, Func Offset: 0x114
	// Line 4446, Address: 0x3d37a4, Func Offset: 0x124
	// Line 4450, Address: 0x3d37a8, Func Offset: 0x128
	// Line 4446, Address: 0x3d37ac, Func Offset: 0x12c
	// Line 4450, Address: 0x3d37b8, Func Offset: 0x138
	// Line 4451, Address: 0x3d37d4, Func Offset: 0x154
	// Line 4452, Address: 0x3d3800, Func Offset: 0x180
	// Line 4457, Address: 0x3d3824, Func Offset: 0x1a4
	// Line 4458, Address: 0x3d3828, Func Offset: 0x1a8
	// Line 4457, Address: 0x3d382c, Func Offset: 0x1ac
	// Line 4458, Address: 0x3d3830, Func Offset: 0x1b0
	// Line 4457, Address: 0x3d3834, Func Offset: 0x1b4
	// Line 4458, Address: 0x3d3858, Func Offset: 0x1d8
	// Line 4459, Address: 0x3d3860, Func Offset: 0x1e0
	// Line 4460, Address: 0x3d386c, Func Offset: 0x1ec
	// Line 4461, Address: 0x3d3878, Func Offset: 0x1f8
	// Line 4466, Address: 0x3d3888, Func Offset: 0x208
	// Line 4462, Address: 0x3d388c, Func Offset: 0x20c
	// Line 4466, Address: 0x3d3890, Func Offset: 0x210
	// Line 4471, Address: 0x3d3894, Func Offset: 0x214
	// Line 4514, Address: 0x3d3898, Func Offset: 0x218
	// Line 4466, Address: 0x3d389c, Func Offset: 0x21c
	// Line 4465, Address: 0x3d38a0, Func Offset: 0x220
	// Line 4466, Address: 0x3d38c0, Func Offset: 0x240
	// Line 4465, Address: 0x3d38c4, Func Offset: 0x244
	// Line 4466, Address: 0x3d38d0, Func Offset: 0x250
	// Line 4465, Address: 0x3d38d8, Func Offset: 0x258
	// Line 4471, Address: 0x3d38dc, Func Offset: 0x25c
	// Line 4472, Address: 0x3d38e0, Func Offset: 0x260
	// Line 4466, Address: 0x3d38e4, Func Offset: 0x264
	// Line 4472, Address: 0x3d38ec, Func Offset: 0x26c
	// Line 4473, Address: 0x3d38f0, Func Offset: 0x270
	// Line 4465, Address: 0x3d38f4, Func Offset: 0x274
	// Line 4467, Address: 0x3d38f8, Func Offset: 0x278
	// Line 4473, Address: 0x3d38fc, Func Offset: 0x27c
	// Line 4474, Address: 0x3d3900, Func Offset: 0x280
	// Line 4468, Address: 0x3d3904, Func Offset: 0x284
	// Line 4474, Address: 0x3d3908, Func Offset: 0x288
	// Line 4475, Address: 0x3d3914, Func Offset: 0x294
	// Line 4476, Address: 0x3d3918, Func Offset: 0x298
	// Line 4477, Address: 0x3d3920, Func Offset: 0x2a0
	// Line 4478, Address: 0x3d3928, Func Offset: 0x2a8
	// Line 4481, Address: 0x3d3930, Func Offset: 0x2b0
	// Line 4478, Address: 0x3d3934, Func Offset: 0x2b4
	// Line 4481, Address: 0x3d393c, Func Offset: 0x2bc
	// Line 4482, Address: 0x3d3940, Func Offset: 0x2c0
	// Line 4483, Address: 0x3d3948, Func Offset: 0x2c8
	// Line 4484, Address: 0x3d3958, Func Offset: 0x2d8
	// Line 4485, Address: 0x3d395c, Func Offset: 0x2dc
	// Line 4486, Address: 0x3d3964, Func Offset: 0x2e4
	// Line 4489, Address: 0x3d396c, Func Offset: 0x2ec
	// Line 4486, Address: 0x3d3970, Func Offset: 0x2f0
	// Line 4489, Address: 0x3d3978, Func Offset: 0x2f8
	// Line 4490, Address: 0x3d397c, Func Offset: 0x2fc
	// Line 4491, Address: 0x3d398c, Func Offset: 0x30c
	// Line 4492, Address: 0x3d3990, Func Offset: 0x310
	// Line 4496, Address: 0x3d3998, Func Offset: 0x318
	// Line 4492, Address: 0x3d39a0, Func Offset: 0x320
	// Line 4496, Address: 0x3d39a8, Func Offset: 0x328
	// Line 4497, Address: 0x3d39ac, Func Offset: 0x32c
	// Line 4498, Address: 0x3d39bc, Func Offset: 0x33c
	// Line 4497, Address: 0x3d39c0, Func Offset: 0x340
	// Line 4498, Address: 0x3d39c4, Func Offset: 0x344
	// Line 4499, Address: 0x3d39c8, Func Offset: 0x348
	// Line 4515, Address: 0x3d39dc, Func Offset: 0x35c
	// Line 4520, Address: 0x3d39f8, Func Offset: 0x378
	// Line 4521, Address: 0x3d3a2c, Func Offset: 0x3ac
	// Line 4530, Address: 0x3d3a38, Func Offset: 0x3b8
	// Line 4536, Address: 0x3d3a44, Func Offset: 0x3c4
	// Func End, Address: 0x3d3a88, Func Offset: 0x408
}

// xFXAuraPTankInit__Fv
// Start address: 0x3d3a90
void xFXAuraPTankInit()
{
	RpAtomic* ptank;
	RwFrame* frame;
	RwTexCoords uv[2];
	// Line 4344, Address: 0x3d3a90, Func Offset: 0
	// Line 4351, Address: 0x3d3a94, Func Offset: 0x4
	// Line 4344, Address: 0x3d3a98, Func Offset: 0x8
	// Line 4351, Address: 0x3d3a9c, Func Offset: 0xc
	// Line 4364, Address: 0x3d3ab4, Func Offset: 0x24
	// Line 4367, Address: 0x3d3abc, Func Offset: 0x2c
	// Line 4369, Address: 0x3d3ac4, Func Offset: 0x34
	// Line 4373, Address: 0x3d3acc, Func Offset: 0x3c
	// Line 4374, Address: 0x3d3ae0, Func Offset: 0x50
	// Line 4373, Address: 0x3d3ae4, Func Offset: 0x54
	// Line 4374, Address: 0x3d3aec, Func Offset: 0x5c
	// Line 4373, Address: 0x3d3af0, Func Offset: 0x60
	// Line 4374, Address: 0x3d3b18, Func Offset: 0x88
	// Line 4375, Address: 0x3d3b20, Func Offset: 0x90
	// Line 4376, Address: 0x3d3b28, Func Offset: 0x98
	// Line 4375, Address: 0x3d3b2c, Func Offset: 0x9c
	// Line 4376, Address: 0x3d3b38, Func Offset: 0xa8
	// Line 4377, Address: 0x3d3b60, Func Offset: 0xd0
	// Line 4378, Address: 0x3d3b74, Func Offset: 0xe4
	// Line 4381, Address: 0x3d3b84, Func Offset: 0xf4
	// Line 4382, Address: 0x3d3b98, Func Offset: 0x108
	// Line 4378, Address: 0x3d3b9c, Func Offset: 0x10c
	// Line 4381, Address: 0x3d3bd0, Func Offset: 0x140
	// Line 4382, Address: 0x3d3be0, Func Offset: 0x150
	// Line 4381, Address: 0x3d3be4, Func Offset: 0x154
	// Line 4382, Address: 0x3d3bf4, Func Offset: 0x164
	// Line 4409, Address: 0x3d3c20, Func Offset: 0x190
	// Line 4370, Address: 0x3d3c28, Func Offset: 0x198
	// Line 4409, Address: 0x3d3c2c, Func Offset: 0x19c
	// Func End, Address: 0x3d3c44, Func Offset: 0x1b4
}

// render_all__9xFXRibbonFv
// Start address: 0x3d3c50
void xFXRibbon::render_all()
{
	RwRaster* raster;
	uint32 blend_src;
	uint32 blend_dst;
	activity_data** act;
	activity_data** end_act;
	xFXRibbon* ribbon;
	// Line 4250, Address: 0x3d3c50, Func Offset: 0
	// Line 4251, Address: 0x3d3c78, Func Offset: 0x28
	// Line 4253, Address: 0x3d3c80, Func Offset: 0x30
	// Line 4255, Address: 0x3d3cec, Func Offset: 0x9c
	// Line 4259, Address: 0x3d3cf8, Func Offset: 0xa8
	// Line 4257, Address: 0x3d3d04, Func Offset: 0xb4
	// Line 4258, Address: 0x3d3d08, Func Offset: 0xb8
	// Line 4259, Address: 0x3d3d0c, Func Offset: 0xbc
	// Line 4260, Address: 0x3d3d14, Func Offset: 0xc4
	// Line 4262, Address: 0x3d3d24, Func Offset: 0xd4
	// Line 4263, Address: 0x3d3d34, Func Offset: 0xe4
	// Line 4267, Address: 0x3d3d3c, Func Offset: 0xec
	// Line 4263, Address: 0x3d3d40, Func Offset: 0xf0
	// Line 4268, Address: 0x3d3d48, Func Offset: 0xf8
	// Line 4273, Address: 0x3d3d58, Func Offset: 0x108
	// Line 4276, Address: 0x3d3d60, Func Offset: 0x110
	// Line 4275, Address: 0x3d3d64, Func Offset: 0x114
	// Line 4276, Address: 0x3d3d68, Func Offset: 0x118
	// Line 4278, Address: 0x3d3d70, Func Offset: 0x120
	// Line 4279, Address: 0x3d3d78, Func Offset: 0x128
	// Line 4281, Address: 0x3d3d88, Func Offset: 0x138
	// Line 4283, Address: 0x3d3d94, Func Offset: 0x144
	// Line 4286, Address: 0x3d3da0, Func Offset: 0x150
	// Line 4287, Address: 0x3d3dac, Func Offset: 0x15c
	// Line 4265, Address: 0x3d3dc4, Func Offset: 0x174
	// Line 4287, Address: 0x3d3dc8, Func Offset: 0x178
	// Line 4270, Address: 0x3d3ddc, Func Offset: 0x18c
	// Line 4287, Address: 0x3d3de0, Func Offset: 0x190
	// Line 4286, Address: 0x3d3e20, Func Offset: 0x1d0
	// Line 4287, Address: 0x3d3e2c, Func Offset: 0x1dc
	// Func End, Address: 0x3d3e64, Func Offset: 0x214
}

// scene_enter__9xFXRibbonFv
// Start address: 0x3d3e70
void xFXRibbon::scene_enter()
{
	activity_data** act;
	activity_data** end_act;
	// Line 4223, Address: 0x3d3e70, Func Offset: 0
	// Line 4224, Address: 0x3d3e74, Func Offset: 0x4
	// Line 4223, Address: 0x3d3e78, Func Offset: 0x8
	// Line 4224, Address: 0x3d3e7c, Func Offset: 0xc
	// Line 4223, Address: 0x3d3e80, Func Offset: 0x10
	// Line 4224, Address: 0x3d3e84, Func Offset: 0x14
	// Line 4223, Address: 0x3d3e88, Func Offset: 0x18
	// Line 4224, Address: 0x3d3e8c, Func Offset: 0x1c
	// Line 4223, Address: 0x3d3e90, Func Offset: 0x20
	// Line 4224, Address: 0x3d3eac, Func Offset: 0x3c
	// Line 4228, Address: 0x3d46c4, Func Offset: 0x854
	// Line 4224, Address: 0x3d46c8, Func Offset: 0x858
	// Line 4228, Address: 0x3d46cc, Func Offset: 0x85c
	// Line 4224, Address: 0x3d46d0, Func Offset: 0x860
	// Line 4228, Address: 0x3d46dc, Func Offset: 0x86c
	// Line 4224, Address: 0x3d46e4, Func Offset: 0x874
	// Line 4229, Address: 0x3d473c, Func Offset: 0x8cc
	// Line 4231, Address: 0x3d4744, Func Offset: 0x8d4
	// Line 4233, Address: 0x3d4758, Func Offset: 0x8e8
	// Line 4232, Address: 0x3d475c, Func Offset: 0x8ec
	// Line 4233, Address: 0x3d4760, Func Offset: 0x8f0
	// Line 4232, Address: 0x3d4768, Func Offset: 0x8f8
	// Line 4233, Address: 0x3d476c, Func Offset: 0x8fc
	// Line 4234, Address: 0x3d4774, Func Offset: 0x904
	// Line 4233, Address: 0x3d4778, Func Offset: 0x908
	// Line 4234, Address: 0x3d478c, Func Offset: 0x91c
	// Line 4224, Address: 0x3d47a4, Func Offset: 0x934
	// Line 4234, Address: 0x3d47a8, Func Offset: 0x938
	// Line 4237, Address: 0x3d47c0, Func Offset: 0x950
	// Func End, Address: 0x3d47f0, Func Offset: 0x980
}

// compare_ribbons__9xFXRibbonFPCvPCv
// Start address: 0x3d47f0
int32 xFXRibbon::compare_ribbons(void* e1, void* e2)
{
	// Line 3850, Address: 0x3d47f0, Func Offset: 0
	// Line 3851, Address: 0x3d47f8, Func Offset: 0x8
	// Line 3852, Address: 0x3d4800, Func Offset: 0x10
	// Line 3855, Address: 0x3d4828, Func Offset: 0x38
	// Line 3856, Address: 0x3d4834, Func Offset: 0x44
	// Line 3857, Address: 0x3d4848, Func Offset: 0x58
	// Line 3858, Address: 0x3d4854, Func Offset: 0x64
	// Line 3859, Address: 0x3d4868, Func Offset: 0x78
	// Line 3860, Address: 0x3d4874, Func Offset: 0x84
	// Line 3850, Address: 0x3d487c, Func Offset: 0x8c
	// Line 3851, Address: 0x3d4884, Func Offset: 0x94
	// Line 3852, Address: 0x3d488c, Func Offset: 0x9c
	// Line 3855, Address: 0x3d4894, Func Offset: 0xa4
	// Line 3856, Address: 0x3d489c, Func Offset: 0xac
	// Line 3857, Address: 0x3d48a4, Func Offset: 0xb4
	// Line 3862, Address: 0x3d48ac, Func Offset: 0xbc
	// Func End, Address: 0x3d48b4, Func Offset: 0xc4
}

// render_strip__9xFXRibbonFP18RxObjSpace3DVertexQ236tier_queue<Q29xFXRibbon10joint_data>8iteratorUi
// Start address: 0x3d48c0
void xFXRibbon::render_strip(RxObjSpace3DVertex* verts, iterator_1 first, uint32 size)
{
	RxObjSpace3DVertex* v;
	iterator_1 it;
	iterator_1 last;
	xColor_tag color;
	float32 width;
	float32 off1;
	float32 off2;
	float32 cx;
	float32 cy;
	float32 cz;
	float32 nx;
	float32 ny;
	float32 nz;
	RxObjSpace3DVertex* endv;
	float32 ulookup[2];
	int32 back;
	float32 u;
	float32 du;
	float32 u;
	int32 back;
	float32 u;
	float32 du;
	float32 u;
	// Line 3753, Address: 0x3d48c0, Func Offset: 0
	// Line 3754, Address: 0x3d48f8, Func Offset: 0x38
	// Line 3753, Address: 0x3d48fc, Func Offset: 0x3c
	// Line 3754, Address: 0x3d4900, Func Offset: 0x40
	// Line 3759, Address: 0x3d4908, Func Offset: 0x48
	// Line 3757, Address: 0x3d4914, Func Offset: 0x54
	// Line 3759, Address: 0x3d4918, Func Offset: 0x58
	// Line 3781, Address: 0x3d4954, Func Offset: 0x94
	// Line 3780, Address: 0x3d4958, Func Offset: 0x98
	// Line 3781, Address: 0x3d4960, Func Offset: 0xa0
	// Line 3779, Address: 0x3d4964, Func Offset: 0xa4
	// Line 3781, Address: 0x3d4968, Func Offset: 0xa8
	// Line 3780, Address: 0x3d496c, Func Offset: 0xac
	// Line 3781, Address: 0x3d4970, Func Offset: 0xb0
	// Line 3785, Address: 0x3d49a4, Func Offset: 0xe4
	// Line 3786, Address: 0x3d49a8, Func Offset: 0xe8
	// Line 3790, Address: 0x3d49b0, Func Offset: 0xf0
	// Line 3788, Address: 0x3d49b4, Func Offset: 0xf4
	// Line 3790, Address: 0x3d49b8, Func Offset: 0xf8
	// Line 3788, Address: 0x3d49bc, Func Offset: 0xfc
	// Line 3791, Address: 0x3d49c0, Func Offset: 0x100
	// Line 3788, Address: 0x3d49c4, Func Offset: 0x104
	// Line 3789, Address: 0x3d49c8, Func Offset: 0x108
	// Line 3790, Address: 0x3d49d0, Func Offset: 0x110
	// Line 3791, Address: 0x3d49d8, Func Offset: 0x118
	// Line 3793, Address: 0x3d49e0, Func Offset: 0x120
	// Line 3796, Address: 0x3d49e8, Func Offset: 0x128
	// Line 3797, Address: 0x3d4a28, Func Offset: 0x168
	// Line 3798, Address: 0x3d4a34, Func Offset: 0x174
	// Line 3800, Address: 0x3d4a3c, Func Offset: 0x17c
	// Line 3801, Address: 0x3d4a40, Func Offset: 0x180
	// Line 3800, Address: 0x3d4a44, Func Offset: 0x184
	// Line 3801, Address: 0x3d4a48, Func Offset: 0x188
	// Line 3802, Address: 0x3d4a4c, Func Offset: 0x18c
	// Line 3801, Address: 0x3d4a50, Func Offset: 0x190
	// Line 3803, Address: 0x3d4a54, Func Offset: 0x194
	// Line 3805, Address: 0x3d4a5c, Func Offset: 0x19c
	// Line 3808, Address: 0x3d4a64, Func Offset: 0x1a4
	// Line 3809, Address: 0x3d4a68, Func Offset: 0x1a8
	// Line 3813, Address: 0x3d4a70, Func Offset: 0x1b0
	// Line 3811, Address: 0x3d4a74, Func Offset: 0x1b4
	// Line 3812, Address: 0x3d4a78, Func Offset: 0x1b8
	// Line 3811, Address: 0x3d4a7c, Func Offset: 0x1bc
	// Line 3814, Address: 0x3d4a80, Func Offset: 0x1c0
	// Line 3811, Address: 0x3d4a84, Func Offset: 0x1c4
	// Line 3813, Address: 0x3d4a88, Func Offset: 0x1c8
	// Line 3812, Address: 0x3d4a8c, Func Offset: 0x1cc
	// Line 3813, Address: 0x3d4a90, Func Offset: 0x1d0
	// Line 3814, Address: 0x3d4a98, Func Offset: 0x1d8
	// Line 3816, Address: 0x3d4aa0, Func Offset: 0x1e0
	// Line 3819, Address: 0x3d4aa8, Func Offset: 0x1e8
	// Line 3820, Address: 0x3d4ae8, Func Offset: 0x228
	// Line 3821, Address: 0x3d4af4, Func Offset: 0x234
	// Line 3823, Address: 0x3d4afc, Func Offset: 0x23c
	// Line 3824, Address: 0x3d4b00, Func Offset: 0x240
	// Line 3823, Address: 0x3d4b04, Func Offset: 0x244
	// Line 3824, Address: 0x3d4b08, Func Offset: 0x248
	// Line 3826, Address: 0x3d4b14, Func Offset: 0x254
	// Line 3829, Address: 0x3d4b1c, Func Offset: 0x25c
	// Line 3826, Address: 0x3d4b20, Func Offset: 0x260
	// Line 3835, Address: 0x3d4b40, Func Offset: 0x280
	// Line 3840, Address: 0x3d4b48, Func Offset: 0x288
	// Line 3763, Address: 0x3d4b60, Func Offset: 0x2a0
	// Line 3840, Address: 0x3d4b64, Func Offset: 0x2a4
	// Line 3762, Address: 0x3d4b8c, Func Offset: 0x2cc
	// Line 3840, Address: 0x3d4b90, Func Offset: 0x2d0
	// Line 3762, Address: 0x3d4ba4, Func Offset: 0x2e4
	// Line 3840, Address: 0x3d4bac, Func Offset: 0x2ec
	// Line 3762, Address: 0x3d4bb0, Func Offset: 0x2f0
	// Line 3840, Address: 0x3d4bb4, Func Offset: 0x2f4
	// Line 3762, Address: 0x3d4bb8, Func Offset: 0x2f8
	// Line 3840, Address: 0x3d4bbc, Func Offset: 0x2fc
	// Line 3767, Address: 0x3d4bd0, Func Offset: 0x310
	// Line 3840, Address: 0x3d4bd8, Func Offset: 0x318
	// Line 3770, Address: 0x3d4bfc, Func Offset: 0x33c
	// Line 3840, Address: 0x3d4c04, Func Offset: 0x344
	// Line 3773, Address: 0x3d4c18, Func Offset: 0x358
	// Line 3840, Address: 0x3d4c1c, Func Offset: 0x35c
	// Line 3773, Address: 0x3d4c3c, Func Offset: 0x37c
	// Line 3770, Address: 0x3d4c40, Func Offset: 0x380
	// Line 3774, Address: 0x3d4c44, Func Offset: 0x384
	// Line 3769, Address: 0x3d4c48, Func Offset: 0x388
	// Line 3770, Address: 0x3d4c4c, Func Offset: 0x38c
	// Line 3773, Address: 0x3d4c50, Func Offset: 0x390
	// Line 3840, Address: 0x3d4c54, Func Offset: 0x394
	// Line 3773, Address: 0x3d4c58, Func Offset: 0x398
	// Line 3840, Address: 0x3d4c60, Func Offset: 0x3a0
	// Line 3773, Address: 0x3d4c64, Func Offset: 0x3a4
	// Line 3840, Address: 0x3d4c6c, Func Offset: 0x3ac
	// Line 3774, Address: 0x3d4c74, Func Offset: 0x3b4
	// Line 3840, Address: 0x3d4c78, Func Offset: 0x3b8
	// Line 3774, Address: 0x3d4c7c, Func Offset: 0x3bc
	// Line 3840, Address: 0x3d4c80, Func Offset: 0x3c0
	// Line 3774, Address: 0x3d4c84, Func Offset: 0x3c4
	// Line 3840, Address: 0x3d4c88, Func Offset: 0x3c8
	// Line 3774, Address: 0x3d4c8c, Func Offset: 0x3cc
	// Line 3840, Address: 0x3d4c90, Func Offset: 0x3d0
	// Line 3774, Address: 0x3d4c94, Func Offset: 0x3d4
	// Line 3840, Address: 0x3d4c98, Func Offset: 0x3d8
	// Line 3774, Address: 0x3d4c9c, Func Offset: 0x3dc
	// Line 3840, Address: 0x3d4ca0, Func Offset: 0x3e0
	// Line 3835, Address: 0x3d4ce4, Func Offset: 0x424
	// Line 3840, Address: 0x3d4cec, Func Offset: 0x42c
	// Func End, Address: 0x3d4dd4, Func Offset: 0x514
}

// eval_joint__9xFXRibbonFRCQ29xFXRibbon10joint_dataR10xColor_tagRf
// Start address: 0x3d4de0
void xFXRibbon::eval_joint(joint_data& joint, xColor_tag& color, float32& width)
{
	float32 frac;
	curve_node_0* curve;
	curve_node_0& node0;
	curve_node_0& node1;
	float32 subfrac;
	// Line 3714, Address: 0x3d4de0, Func Offset: 0
	// Line 3715, Address: 0x3d4de4, Func Offset: 0x4
	// Line 3718, Address: 0x3d4dec, Func Offset: 0xc
	// Line 3719, Address: 0x3d4e2c, Func Offset: 0x4c
	// Line 3718, Address: 0x3d4e30, Func Offset: 0x50
	// Line 3719, Address: 0x3d4e38, Func Offset: 0x58
	// Line 3718, Address: 0x3d4e40, Func Offset: 0x60
	// Line 3719, Address: 0x3d4e4c, Func Offset: 0x6c
	// Line 3720, Address: 0x3d4e58, Func Offset: 0x78
	// Line 3723, Address: 0x3d4e5c, Func Offset: 0x7c
	// Line 3725, Address: 0x3d4e68, Func Offset: 0x88
	// Line 3727, Address: 0x3d4e80, Func Offset: 0xa0
	// Line 3729, Address: 0x3d4ea0, Func Offset: 0xc0
	// Line 3738, Address: 0x3d4ec4, Func Offset: 0xe4
	// Line 3734, Address: 0x3d4ecc, Func Offset: 0xec
	// Line 3735, Address: 0x3d4ed0, Func Offset: 0xf0
	// Line 3734, Address: 0x3d4ed4, Func Offset: 0xf4
	// Line 3735, Address: 0x3d4ed8, Func Offset: 0xf8
	// Line 3734, Address: 0x3d4ee0, Func Offset: 0x100
	// Line 3735, Address: 0x3d4ee4, Func Offset: 0x104
	// Line 3734, Address: 0x3d4ee8, Func Offset: 0x108
	// Line 3735, Address: 0x3d4eec, Func Offset: 0x10c
	// Line 3740, Address: 0x3d4ef4, Func Offset: 0x114
	// Line 3738, Address: 0x3d4ef8, Func Offset: 0x118
	// Line 3740, Address: 0x3d4efc, Func Offset: 0x11c
	// Line 3738, Address: 0x3d4f00, Func Offset: 0x120
	// Line 3740, Address: 0x3d4f14, Func Offset: 0x134
	// Line 3741, Address: 0x3d4ffc, Func Offset: 0x21c
	// Line 3742, Address: 0x3d50e8, Func Offset: 0x308
	// Line 3745, Address: 0x3d51d4, Func Offset: 0x3f4
	// Line 3746, Address: 0x3d5208, Func Offset: 0x428
	// Line 3748, Address: 0x3d529c, Func Offset: 0x4bc
	// Line 3749, Address: 0x3d52a8, Func Offset: 0x4c8
	// Line 3748, Address: 0x3d52ac, Func Offset: 0x4cc
	// Line 3749, Address: 0x3d52b8, Func Offset: 0x4d8
	// Line 3750, Address: 0x3d52c0, Func Offset: 0x4e0
	// Func End, Address: 0x3d52c8, Func Offset: 0x4e8
}

// refresh_joint__9xFXRibbonFRQ29xFXRibbon10joint_dataRCQ236tier_queue<Q29xFXRibbon10joint_data>8iterator
// Start address: 0x3d52d0
void xFXRibbon::refresh_joint(joint_data& joint, iterator_1& it)
{
	xVec3 offset;
	xVec3 dir;
	// Line 3677, Address: 0x3d52d0, Func Offset: 0
	// Line 3678, Address: 0x3d52dc, Func Offset: 0xc
	// Line 3681, Address: 0x3d52e8, Func Offset: 0x18
	// Line 3683, Address: 0x3d52fc, Func Offset: 0x2c
	// Line 3685, Address: 0x3d5300, Func Offset: 0x30
	// Line 3683, Address: 0x3d5304, Func Offset: 0x34
	// Line 3685, Address: 0x3d5318, Func Offset: 0x48
	// Line 3687, Address: 0x3d5328, Func Offset: 0x58
	// Line 3689, Address: 0x3d5378, Func Offset: 0xa8
	// Line 3691, Address: 0x3d537c, Func Offset: 0xac
	// Line 3689, Address: 0x3d5380, Func Offset: 0xb0
	// Line 3691, Address: 0x3d5384, Func Offset: 0xb4
	// Line 3689, Address: 0x3d5388, Func Offset: 0xb8
	// Line 3691, Address: 0x3d53c8, Func Offset: 0xf8
	// Line 3689, Address: 0x3d53cc, Func Offset: 0xfc
	// Line 3690, Address: 0x3d53f8, Func Offset: 0x128
	// Line 3689, Address: 0x3d53fc, Func Offset: 0x12c
	// Line 3690, Address: 0x3d5400, Func Offset: 0x130
	// Line 3691, Address: 0x3d540c, Func Offset: 0x13c
	// Line 3693, Address: 0x3d5434, Func Offset: 0x164
	// Line 3694, Address: 0x3d5440, Func Offset: 0x170
	// Line 3696, Address: 0x3d544c, Func Offset: 0x17c
	// Line 3686, Address: 0x3d548c, Func Offset: 0x1bc
	// Line 3696, Address: 0x3d5490, Func Offset: 0x1c0
	// Line 3686, Address: 0x3d5494, Func Offset: 0x1c4
	// Line 3696, Address: 0x3d5498, Func Offset: 0x1c8
	// Line 3686, Address: 0x3d54a4, Func Offset: 0x1d4
	// Line 3696, Address: 0x3d54ac, Func Offset: 0x1dc
	// Line 3686, Address: 0x3d54b0, Func Offset: 0x1e0
	// Line 3696, Address: 0x3d54b4, Func Offset: 0x1e4
	// Line 3686, Address: 0x3d54b8, Func Offset: 0x1e8
	// Line 3696, Address: 0x3d54c0, Func Offset: 0x1f0
	// Line 3688, Address: 0x3d54fc, Func Offset: 0x22c
	// Line 3696, Address: 0x3d5500, Func Offset: 0x230
	// Line 3688, Address: 0x3d5504, Func Offset: 0x234
	// Line 3696, Address: 0x3d5508, Func Offset: 0x238
	// Line 3688, Address: 0x3d5514, Func Offset: 0x244
	// Line 3696, Address: 0x3d551c, Func Offset: 0x24c
	// Line 3688, Address: 0x3d5520, Func Offset: 0x250
	// Line 3696, Address: 0x3d5524, Func Offset: 0x254
	// Line 3688, Address: 0x3d5528, Func Offset: 0x258
	// Line 3696, Address: 0x3d5530, Func Offset: 0x260
	// Line 3699, Address: 0x3d5540, Func Offset: 0x270
	// Line 3700, Address: 0x3d55b8, Func Offset: 0x2e8
	// Line 3711, Address: 0x3d55c4, Func Offset: 0x2f4
	// Func End, Address: 0x3d55d4, Func Offset: 0x304
}

// get_normal__9xFXRibbonFR5xVec3RC5xVec3f
// Start address: 0x3d55e0
void xFXRibbon::get_normal(xVec3& norm, xVec3& dir, float32 orient)
{
	// Line 3646, Address: 0x3d55e0, Func Offset: 0
	// Line 3648, Address: 0x3d55fc, Func Offset: 0x1c
	// Line 3651, Address: 0x3d5614, Func Offset: 0x34
	// Line 3652, Address: 0x3d5624, Func Offset: 0x44
	// Line 3657, Address: 0x3d563c, Func Offset: 0x5c
	// Line 3654, Address: 0x3d5640, Func Offset: 0x60
	// Line 3656, Address: 0x3d5644, Func Offset: 0x64
	// Line 3654, Address: 0x3d5648, Func Offset: 0x68
	// Line 3655, Address: 0x3d5650, Func Offset: 0x70
	// Line 3656, Address: 0x3d565c, Func Offset: 0x7c
	// Line 3657, Address: 0x3d5664, Func Offset: 0x84
	// Line 3654, Address: 0x3d5674, Func Offset: 0x94
	// Line 3657, Address: 0x3d5678, Func Offset: 0x98
	// Line 3654, Address: 0x3d567c, Func Offset: 0x9c
	// Line 3655, Address: 0x3d5684, Func Offset: 0xa4
	// Line 3656, Address: 0x3d5688, Func Offset: 0xa8
	// Line 3657, Address: 0x3d568c, Func Offset: 0xac
	// Line 3658, Address: 0x3d56ac, Func Offset: 0xcc
	// Line 3659, Address: 0x3d56b4, Func Offset: 0xd4
	// Line 3661, Address: 0x3d56c0, Func Offset: 0xe0
	// Line 3664, Address: 0x3d56c4, Func Offset: 0xe4
	// Line 3661, Address: 0x3d56c8, Func Offset: 0xe8
	// Line 3663, Address: 0x3d56cc, Func Offset: 0xec
	// Line 3661, Address: 0x3d56d0, Func Offset: 0xf0
	// Line 3662, Address: 0x3d56d8, Func Offset: 0xf8
	// Line 3661, Address: 0x3d56dc, Func Offset: 0xfc
	// Line 3663, Address: 0x3d56e4, Func Offset: 0x104
	// Line 3662, Address: 0x3d56e8, Func Offset: 0x108
	// Line 3663, Address: 0x3d56f0, Func Offset: 0x110
	// Line 3664, Address: 0x3d56f8, Func Offset: 0x118
	// Line 3661, Address: 0x3d5704, Func Offset: 0x124
	// Line 3664, Address: 0x3d5708, Func Offset: 0x128
	// Line 3662, Address: 0x3d570c, Func Offset: 0x12c
	// Line 3664, Address: 0x3d5710, Func Offset: 0x130
	// Line 3662, Address: 0x3d5714, Func Offset: 0x134
	// Line 3663, Address: 0x3d571c, Func Offset: 0x13c
	// Line 3664, Address: 0x3d5720, Func Offset: 0x140
	// Line 3665, Address: 0x3d5740, Func Offset: 0x160
	// Line 3669, Address: 0x3d5748, Func Offset: 0x168
	// Line 3671, Address: 0x3d574c, Func Offset: 0x16c
	// Line 3668, Address: 0x3d5750, Func Offset: 0x170
	// Line 3669, Address: 0x3d5754, Func Offset: 0x174
	// Line 3668, Address: 0x3d575c, Func Offset: 0x17c
	// Line 3669, Address: 0x3d5764, Func Offset: 0x184
	// Line 3668, Address: 0x3d576c, Func Offset: 0x18c
	// Line 3670, Address: 0x3d5770, Func Offset: 0x190
	// Line 3669, Address: 0x3d5774, Func Offset: 0x194
	// Line 3668, Address: 0x3d5778, Func Offset: 0x198
	// Line 3669, Address: 0x3d577c, Func Offset: 0x19c
	// Line 3670, Address: 0x3d5780, Func Offset: 0x1a0
	// Line 3671, Address: 0x3d5790, Func Offset: 0x1b0
	// Line 3670, Address: 0x3d57a0, Func Offset: 0x1c0
	// Line 3671, Address: 0x3d57a4, Func Offset: 0x1c4
	// Line 3673, Address: 0x3d57cc, Func Offset: 0x1ec
	// Func End, Address: 0x3d57e4, Func Offset: 0x204
}

// render__9xFXRibbonFv
// Start address: 0x3d57f0
void xFXRibbon::render()
{
	RxObjSpace3DVertex* verts;
	int32 it;
	int32 subsize;
	int32 next_it;
	int32 break_it;
	// Line 3584, Address: 0x3d57f0, Func Offset: 0
	// Line 3585, Address: 0x3d5810, Func Offset: 0x20
	// Line 3592, Address: 0x3d581c, Func Offset: 0x2c
	// Line 3590, Address: 0x3d5820, Func Offset: 0x30
	// Line 3592, Address: 0x3d5828, Func Offset: 0x38
	// Line 3595, Address: 0x3d585c, Func Offset: 0x6c
	// Line 3597, Address: 0x3d5870, Func Offset: 0x80
	// Line 3601, Address: 0x3d5890, Func Offset: 0xa0
	// Line 3603, Address: 0x3d58a8, Func Offset: 0xb8
	// Line 3604, Address: 0x3d58ac, Func Offset: 0xbc
	// Line 3603, Address: 0x3d58b0, Func Offset: 0xc0
	// Line 3604, Address: 0x3d58b4, Func Offset: 0xc4
	// Line 3607, Address: 0x3d58c4, Func Offset: 0xd4
	// Line 3606, Address: 0x3d58e4, Func Offset: 0xf4
	// Line 3607, Address: 0x3d58e8, Func Offset: 0xf8
	// Line 3609, Address: 0x3d593c, Func Offset: 0x14c
	// Line 3611, Address: 0x3d5940, Func Offset: 0x150
	// Line 3613, Address: 0x3d5948, Func Offset: 0x158
	// Line 3615, Address: 0x3d5958, Func Offset: 0x168
	// Line 3618, Address: 0x3d5964, Func Offset: 0x174
	// Line 3619, Address: 0x3d5970, Func Offset: 0x180
	// Line 3616, Address: 0x3d597c, Func Offset: 0x18c
	// Line 3619, Address: 0x3d5988, Func Offset: 0x198
	// Func End, Address: 0x3d59f0, Func Offset: 0x200
}

// update__9xFXRibbonFf
// Start address: 0x3d59f0
void xFXRibbon::update(float32 dt)
{
	// Line 3554, Address: 0x3d59f0, Func Offset: 0
	// Line 3555, Address: 0x3d59fc, Func Offset: 0xc
	// Line 3563, Address: 0x3d5a04, Func Offset: 0x14
	// Line 3567, Address: 0x3d5a60, Func Offset: 0x70
	// Line 3573, Address: 0x3d5a84, Func Offset: 0x94
	// Line 3569, Address: 0x3d5a88, Func Offset: 0x98
	// Line 3571, Address: 0x3d5b20, Func Offset: 0x130
	// Line 3572, Address: 0x3d5b34, Func Offset: 0x144
	// Line 3573, Address: 0x3d5b40, Func Offset: 0x150
	// Line 3574, Address: 0x3d5b4c, Func Offset: 0x15c
	// Line 3576, Address: 0x3d5b58, Func Offset: 0x168
	// Line 3574, Address: 0x3d5b5c, Func Offset: 0x16c
	// Line 3576, Address: 0x3d5b70, Func Offset: 0x180
	// Line 3574, Address: 0x3d5b74, Func Offset: 0x184
	// Line 3576, Address: 0x3d5b98, Func Offset: 0x1a8
	// Line 3577, Address: 0x3d5bf0, Func Offset: 0x200
	// Line 3556, Address: 0x3d5ca8, Func Offset: 0x2b8
	// Line 3577, Address: 0x3d5cb0, Func Offset: 0x2c0
	// Line 3573, Address: 0x3d5cb4, Func Offset: 0x2c4
	// Line 3577, Address: 0x3d5cb8, Func Offset: 0x2c8
	// Line 3573, Address: 0x3d5ccc, Func Offset: 0x2dc
	// Line 3577, Address: 0x3d5cd0, Func Offset: 0x2e0
	// Line 3573, Address: 0x3d5cd8, Func Offset: 0x2e8
	// Line 3577, Address: 0x3d5cdc, Func Offset: 0x2ec
	// Line 3573, Address: 0x3d5ce0, Func Offset: 0x2f0
	// Line 3577, Address: 0x3d5ce4, Func Offset: 0x2f4
	// Line 3573, Address: 0x3d5cfc, Func Offset: 0x30c
	// Line 3577, Address: 0x3d5d00, Func Offset: 0x310
	// Line 3573, Address: 0x3d5d08, Func Offset: 0x318
	// Line 3577, Address: 0x3d5d0c, Func Offset: 0x31c
	// Line 3573, Address: 0x3d5d1c, Func Offset: 0x32c
	// Line 3577, Address: 0x3d5d20, Func Offset: 0x330
	// Line 3573, Address: 0x3d5d34, Func Offset: 0x344
	// Line 3577, Address: 0x3d5d38, Func Offset: 0x348
	// Line 3573, Address: 0x3d5d48, Func Offset: 0x358
	// Line 3577, Address: 0x3d5d4c, Func Offset: 0x35c
	// Line 3573, Address: 0x3d5d64, Func Offset: 0x374
	// Line 3577, Address: 0x3d5d6c, Func Offset: 0x37c
	// Line 3578, Address: 0x3d5d74, Func Offset: 0x384
	// Line 3577, Address: 0x3d5d78, Func Offset: 0x388
	// Line 3578, Address: 0x3d5d7c, Func Offset: 0x38c
	// Line 3580, Address: 0x3d5d88, Func Offset: 0x398
	// Line 3581, Address: 0x3d5d94, Func Offset: 0x3a4
	// Line 3577, Address: 0x3d5ddc, Func Offset: 0x3ec
	// Line 3581, Address: 0x3d5de0, Func Offset: 0x3f0
	// Line 3577, Address: 0x3d5de8, Func Offset: 0x3f8
	// Line 3581, Address: 0x3d5dec, Func Offset: 0x3fc
	// Line 3577, Address: 0x3d5dfc, Func Offset: 0x40c
	// Line 3581, Address: 0x3d5e00, Func Offset: 0x410
	// Line 3577, Address: 0x3d5e14, Func Offset: 0x424
	// Line 3581, Address: 0x3d5e18, Func Offset: 0x428
	// Line 3577, Address: 0x3d5e28, Func Offset: 0x438
	// Line 3581, Address: 0x3d5e2c, Func Offset: 0x43c
	// Line 3580, Address: 0x3d5e58, Func Offset: 0x468
	// Line 3581, Address: 0x3d5e5c, Func Offset: 0x46c
	// Line 3580, Address: 0x3d5e70, Func Offset: 0x480
	// Line 3581, Address: 0x3d5e74, Func Offset: 0x484
	// Func End, Address: 0x3d5eb0, Func Offset: 0x4c0
}

// insert__9xFXRibbonFRC5xVec3RC5xVec3ffi
// Start address: 0x3d5eb0
void xFXRibbon::insert(xVec3& loc, xVec3& norm, float32 scale, float32 alpha, int32 flags)
{
	// Line 3480, Address: 0x3d5eb0, Func Offset: 0
	// Line 3482, Address: 0x3d5ef0, Func Offset: 0x40
	// Line 3483, Address: 0x3d5f00, Func Offset: 0x50
	// Line 3486, Address: 0x3d5f18, Func Offset: 0x68
	// Line 3487, Address: 0x3d602c, Func Offset: 0x17c
	// Line 3488, Address: 0x3d606c, Func Offset: 0x1bc
	// Line 3489, Address: 0x3d6114, Func Offset: 0x264
	// Line 3491, Address: 0x3d6118, Func Offset: 0x268
	// Line 3490, Address: 0x3d6120, Func Offset: 0x270
	// Line 3491, Address: 0x3d6124, Func Offset: 0x274
	// Line 3492, Address: 0x3d6128, Func Offset: 0x278
	// Line 3489, Address: 0x3d6134, Func Offset: 0x284
	// Line 3490, Address: 0x3d6184, Func Offset: 0x2d4
	// Line 3491, Address: 0x3d6188, Func Offset: 0x2d8
	// Line 3492, Address: 0x3d6194, Func Offset: 0x2e4
	// Line 3493, Address: 0x3d61a0, Func Offset: 0x2f0
	// Line 3494, Address: 0x3d61ac, Func Offset: 0x2fc
	// Line 3496, Address: 0x3d61b0, Func Offset: 0x300
	// Line 3482, Address: 0x3d61c8, Func Offset: 0x318
	// Line 3496, Address: 0x3d61cc, Func Offset: 0x31c
	// Line 3482, Address: 0x3d6214, Func Offset: 0x364
	// Line 3496, Address: 0x3d6234, Func Offset: 0x384
	// Line 3482, Address: 0x3d623c, Func Offset: 0x38c
	// Line 3496, Address: 0x3d6274, Func Offset: 0x3c4
	// Line 3482, Address: 0x3d6278, Func Offset: 0x3c8
	// Line 3496, Address: 0x3d627c, Func Offset: 0x3cc
	// Line 3486, Address: 0x3d628c, Func Offset: 0x3dc
	// Line 3496, Address: 0x3d6294, Func Offset: 0x3e4
	// Line 3486, Address: 0x3d62d4, Func Offset: 0x424
	// Line 3496, Address: 0x3d62d8, Func Offset: 0x428
	// Line 3486, Address: 0x3d62e0, Func Offset: 0x430
	// Line 3496, Address: 0x3d62e4, Func Offset: 0x434
	// Line 3486, Address: 0x3d62f4, Func Offset: 0x444
	// Line 3496, Address: 0x3d62f8, Func Offset: 0x448
	// Line 3486, Address: 0x3d630c, Func Offset: 0x45c
	// Line 3496, Address: 0x3d6310, Func Offset: 0x460
	// Line 3486, Address: 0x3d6320, Func Offset: 0x470
	// Line 3496, Address: 0x3d6324, Func Offset: 0x474
	// Line 3488, Address: 0x3d6338, Func Offset: 0x488
	// Line 3496, Address: 0x3d633c, Func Offset: 0x48c
	// Func End, Address: 0x3d6388, Func Offset: 0x4d8
}

// set_config__9xFXRibbonFPCQ29xFXRibbon11config_type
// Start address: 0x3d6390
void xFXRibbon::set_config(config_type* cfg)
{
	// Line 3468, Address: 0x3d6390, Func Offset: 0
	// Line 3472, Address: 0x3d6398, Func Offset: 0x8
	// Line 3474, Address: 0x3d63a0, Func Offset: 0x10
	// Line 3475, Address: 0x3d63ac, Func Offset: 0x1c
	// Line 3474, Address: 0x3d63b4, Func Offset: 0x24
	// Line 3475, Address: 0x3d63b8, Func Offset: 0x28
	// Line 3476, Address: 0x3d6400, Func Offset: 0x70
	// Line 3475, Address: 0x3d6404, Func Offset: 0x74
	// Line 3476, Address: 0x3d6408, Func Offset: 0x78
	// Line 3477, Address: 0x3d640c, Func Offset: 0x7c
	// Func End, Address: 0x3d6414, Func Offset: 0x84
}

// load_default_config__9xFXRibbonFRQ29xFXRibbon11config_type
// Start address: 0x3d6420
void load_default_config(config_type& cfg)
{
	curve_node_0 default_curve[2];
	// Line 3446, Address: 0x3d6420, Func Offset: 0
	// Line 3447, Address: 0x3d6424, Func Offset: 0x4
	// Line 3446, Address: 0x3d6428, Func Offset: 0x8
	// Line 3448, Address: 0x3d642c, Func Offset: 0xc
	// Line 3446, Address: 0x3d6430, Func Offset: 0x10
	// Line 3447, Address: 0x3d6434, Func Offset: 0x14
	// Line 3448, Address: 0x3d643c, Func Offset: 0x1c
	// Line 3449, Address: 0x3d6440, Func Offset: 0x20
	// Line 3450, Address: 0x3d6444, Func Offset: 0x24
	// Line 3449, Address: 0x3d6448, Func Offset: 0x28
	// Line 3450, Address: 0x3d644c, Func Offset: 0x2c
	// Line 3451, Address: 0x3d6450, Func Offset: 0x30
	// Line 3452, Address: 0x3d6454, Func Offset: 0x34
	// Line 3459, Address: 0x3d6474, Func Offset: 0x54
	// Line 3460, Address: 0x3d6480, Func Offset: 0x60
	// Line 3461, Address: 0x3d6484, Func Offset: 0x64
	// Line 3452, Address: 0x3d649c, Func Offset: 0x7c
	// Line 3461, Address: 0x3d64a4, Func Offset: 0x84
	// Func End, Address: 0x3d64c0, Func Offset: 0xa0
}

// clear__9xFXRibbonFv
// Start address: 0x3d64c0
void xFXRibbon::clear()
{
	// Line 3438, Address: 0x3d64c0, Func Offset: 0
	// Line 3439, Address: 0x3d64c4, Func Offset: 0x4
	// Line 3441, Address: 0x3d64cc, Func Offset: 0xc
	// Line 3442, Address: 0x3d6580, Func Offset: 0xc0
	// Line 3443, Address: 0x3d65e0, Func Offset: 0x120
	// Func End, Address: 0x3d65e8, Func Offset: 0x128
}

// create__9xFXRibbonFi
// Start address: 0x3d65f0
void xFXRibbon::create()
{
	// Line 3415, Address: 0x3d65f0, Func Offset: 0
	// Line 3416, Address: 0x3d65f4, Func Offset: 0x4
	// Line 3417, Address: 0x3d65fc, Func Offset: 0xc
	// Line 3435, Address: 0x3d6600, Func Offset: 0x10
	// Func End, Address: 0x3d6608, Func Offset: 0x18
}

// xFXShineRender__Fv
// Start address: 0x3d6610
void xFXShineRender()
{
	xFXShineElem* e;
	int32 shine;
	int32 j;
	RxObjSpace3DVertex* vert;
	RwFrame* frame;
	xVec3 v;
	xVec3 w;
	float32 uoff;
	xMat3x3 mat;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RxObjSpace3DVertex blah[4];
	// Line 3131, Address: 0x3d6610, Func Offset: 0
	// Line 3134, Address: 0x3d6614, Func Offset: 0x4
	// Line 3131, Address: 0x3d6618, Func Offset: 0x8
	// Line 3134, Address: 0x3d661c, Func Offset: 0xc
	// Line 3131, Address: 0x3d6620, Func Offset: 0x10
	// Line 3134, Address: 0x3d6628, Func Offset: 0x18
	// Line 3131, Address: 0x3d662c, Func Offset: 0x1c
	// Line 3134, Address: 0x3d6630, Func Offset: 0x20
	// Line 3131, Address: 0x3d6634, Func Offset: 0x24
	// Line 3134, Address: 0x3d6638, Func Offset: 0x28
	// Line 3131, Address: 0x3d663c, Func Offset: 0x2c
	// Line 3134, Address: 0x3d6644, Func Offset: 0x34
	// Line 3131, Address: 0x3d6648, Func Offset: 0x38
	// Line 3134, Address: 0x3d664c, Func Offset: 0x3c
	// Line 3131, Address: 0x3d6650, Func Offset: 0x40
	// Line 3134, Address: 0x3d6654, Func Offset: 0x44
	// Line 3131, Address: 0x3d6658, Func Offset: 0x48
	// Line 3134, Address: 0x3d665c, Func Offset: 0x4c
	// Line 3131, Address: 0x3d6660, Func Offset: 0x50
	// Line 3134, Address: 0x3d6664, Func Offset: 0x54
	// Line 3131, Address: 0x3d6668, Func Offset: 0x58
	// Line 3138, Address: 0x3d6670, Func Offset: 0x60
	// Line 3142, Address: 0x3d6680, Func Offset: 0x70
	// Line 3144, Address: 0x3d6688, Func Offset: 0x78
	// Line 3155, Address: 0x3d6694, Func Offset: 0x84
	// Line 3151, Address: 0x3d6698, Func Offset: 0x88
	// Line 3155, Address: 0x3d66a0, Func Offset: 0x90
	// Line 3156, Address: 0x3d66a8, Func Offset: 0x98
	// Line 3157, Address: 0x3d66b0, Func Offset: 0xa0
	// Line 3165, Address: 0x3d66b8, Func Offset: 0xa8
	// Line 3160, Address: 0x3d66bc, Func Offset: 0xac
	// Line 3161, Address: 0x3d66c0, Func Offset: 0xb0
	// Line 3162, Address: 0x3d66c4, Func Offset: 0xb4
	// Line 3171, Address: 0x3d66c8, Func Offset: 0xb8
	// Line 3165, Address: 0x3d66d0, Func Offset: 0xc0
	// Line 3160, Address: 0x3d66d4, Func Offset: 0xc4
	// Line 3161, Address: 0x3d66d8, Func Offset: 0xc8
	// Line 3169, Address: 0x3d66dc, Func Offset: 0xcc
	// Line 3162, Address: 0x3d66e0, Func Offset: 0xd0
	// Line 3169, Address: 0x3d66e4, Func Offset: 0xd4
	// Line 3165, Address: 0x3d66e8, Func Offset: 0xd8
	// Line 3171, Address: 0x3d66f0, Func Offset: 0xe0
	// Line 3165, Address: 0x3d66f4, Func Offset: 0xe4
	// Line 3166, Address: 0x3d66fc, Func Offset: 0xec
	// Line 3165, Address: 0x3d6700, Func Offset: 0xf0
	// Line 3169, Address: 0x3d6704, Func Offset: 0xf4
	// Line 3166, Address: 0x3d6708, Func Offset: 0xf8
	// Line 3167, Address: 0x3d6718, Func Offset: 0x108
	// Line 3169, Address: 0x3d671c, Func Offset: 0x10c
	// Line 3167, Address: 0x3d6720, Func Offset: 0x110
	// Line 3169, Address: 0x3d6724, Func Offset: 0x114
	// Line 3167, Address: 0x3d6728, Func Offset: 0x118
	// Line 3169, Address: 0x3d6734, Func Offset: 0x124
	// Line 3174, Address: 0x3d6790, Func Offset: 0x180
	// Line 3175, Address: 0x3d6798, Func Offset: 0x188
	// Line 3193, Address: 0x3d67a8, Func Offset: 0x198
	// Line 3184, Address: 0x3d67ac, Func Offset: 0x19c
	// Line 3193, Address: 0x3d67b0, Func Offset: 0x1a0
	// Line 3184, Address: 0x3d67b4, Func Offset: 0x1a4
	// Line 3181, Address: 0x3d67bc, Func Offset: 0x1ac
	// Line 3193, Address: 0x3d67c4, Func Offset: 0x1b4
	// Line 3207, Address: 0x3d67c8, Func Offset: 0x1b8
	// Line 3183, Address: 0x3d67d0, Func Offset: 0x1c0
	// Line 3207, Address: 0x3d67d4, Func Offset: 0x1c4
	// Line 3184, Address: 0x3d67d8, Func Offset: 0x1c8
	// Line 3200, Address: 0x3d67dc, Func Offset: 0x1cc
	// Line 3194, Address: 0x3d67e0, Func Offset: 0x1d0
	// Line 3200, Address: 0x3d67e4, Func Offset: 0x1d4
	// Line 3203, Address: 0x3d67e8, Func Offset: 0x1d8
	// Line 3181, Address: 0x3d67ec, Func Offset: 0x1dc
	// Line 3184, Address: 0x3d67f0, Func Offset: 0x1e0
	// Line 3181, Address: 0x3d67f4, Func Offset: 0x1e4
	// Line 3184, Address: 0x3d67f8, Func Offset: 0x1e8
	// Line 3200, Address: 0x3d67fc, Func Offset: 0x1ec
	// Line 3194, Address: 0x3d6800, Func Offset: 0x1f0
	// Line 3181, Address: 0x3d6804, Func Offset: 0x1f4
	// Line 3207, Address: 0x3d6808, Func Offset: 0x1f8
	// Line 3200, Address: 0x3d680c, Func Offset: 0x1fc
	// Line 3184, Address: 0x3d6810, Func Offset: 0x200
	// Line 3194, Address: 0x3d6814, Func Offset: 0x204
	// Line 3207, Address: 0x3d6818, Func Offset: 0x208
	// Line 3194, Address: 0x3d681c, Func Offset: 0x20c
	// Line 3200, Address: 0x3d6820, Func Offset: 0x210
	// Line 3207, Address: 0x3d6824, Func Offset: 0x214
	// Line 3200, Address: 0x3d6828, Func Offset: 0x218
	// Line 3207, Address: 0x3d682c, Func Offset: 0x21c
	// Line 3191, Address: 0x3d6830, Func Offset: 0x220
	// Line 3200, Address: 0x3d6834, Func Offset: 0x224
	// Line 3181, Address: 0x3d6840, Func Offset: 0x230
	// Line 3191, Address: 0x3d6844, Func Offset: 0x234
	// Line 3200, Address: 0x3d6848, Func Offset: 0x238
	// Line 3207, Address: 0x3d684c, Func Offset: 0x23c
	// Line 3200, Address: 0x3d6854, Func Offset: 0x244
	// Line 3207, Address: 0x3d6860, Func Offset: 0x250
	// Line 3200, Address: 0x3d6864, Func Offset: 0x254
	// Line 3207, Address: 0x3d686c, Func Offset: 0x25c
	// Line 3182, Address: 0x3d6870, Func Offset: 0x260
	// Line 3192, Address: 0x3d6874, Func Offset: 0x264
	// Line 3181, Address: 0x3d6878, Func Offset: 0x268
	// Line 3191, Address: 0x3d687c, Func Offset: 0x26c
	// Line 3202, Address: 0x3d6880, Func Offset: 0x270
	// Line 3200, Address: 0x3d6884, Func Offset: 0x274
	// Line 3207, Address: 0x3d6888, Func Offset: 0x278
	// Line 3213, Address: 0x3d68b8, Func Offset: 0x2a8
	// Line 3207, Address: 0x3d68bc, Func Offset: 0x2ac
	// Line 3213, Address: 0x3d68c0, Func Offset: 0x2b0
	// Line 3219, Address: 0x3d68cc, Func Offset: 0x2bc
	// Line 3214, Address: 0x3d68d0, Func Offset: 0x2c0
	// Line 3219, Address: 0x3d68d4, Func Offset: 0x2c4
	// Line 3213, Address: 0x3d68d8, Func Offset: 0x2c8
	// Line 3219, Address: 0x3d68dc, Func Offset: 0x2cc
	// Line 3213, Address: 0x3d68e0, Func Offset: 0x2d0
	// Line 3219, Address: 0x3d68e4, Func Offset: 0x2d4
	// Line 3213, Address: 0x3d68e8, Func Offset: 0x2d8
	// Line 3219, Address: 0x3d68ec, Func Offset: 0x2dc
	// Line 3213, Address: 0x3d68f0, Func Offset: 0x2e0
	// Line 3215, Address: 0x3d68f4, Func Offset: 0x2e4
	// Line 3219, Address: 0x3d68f8, Func Offset: 0x2e8
	// Line 3215, Address: 0x3d68fc, Func Offset: 0x2ec
	// Line 3213, Address: 0x3d6900, Func Offset: 0x2f0
	// Line 3219, Address: 0x3d6904, Func Offset: 0x2f4
	// Line 3213, Address: 0x3d6908, Func Offset: 0x2f8
	// Line 3219, Address: 0x3d690c, Func Offset: 0x2fc
	// Line 3213, Address: 0x3d6910, Func Offset: 0x300
	// Line 3219, Address: 0x3d691c, Func Offset: 0x30c
	// Line 3213, Address: 0x3d6924, Func Offset: 0x314
	// Line 3219, Address: 0x3d6928, Func Offset: 0x318
	// Line 3213, Address: 0x3d692c, Func Offset: 0x31c
	// Line 3219, Address: 0x3d693c, Func Offset: 0x32c
	// Line 3213, Address: 0x3d6944, Func Offset: 0x334
	// Line 3219, Address: 0x3d6948, Func Offset: 0x338
	// Line 3222, Address: 0x3d697c, Func Offset: 0x36c
	// Line 3224, Address: 0x3d6994, Func Offset: 0x384
	// Line 3232, Address: 0x3d6b30, Func Offset: 0x520
	// Line 3233, Address: 0x3d6b38, Func Offset: 0x528
	// Line 3234, Address: 0x3d6b3c, Func Offset: 0x52c
	// Line 3233, Address: 0x3d6b40, Func Offset: 0x530
	// Line 3234, Address: 0x3d6b44, Func Offset: 0x534
	// Line 3251, Address: 0x3d6b48, Func Offset: 0x538
	// Line 3235, Address: 0x3d6b4c, Func Offset: 0x53c
	// Line 3232, Address: 0x3d6b5c, Func Offset: 0x54c
	// Line 3235, Address: 0x3d6b64, Func Offset: 0x554
	// Line 3242, Address: 0x3d6b68, Func Offset: 0x558
	// Line 3232, Address: 0x3d6b6c, Func Offset: 0x55c
	// Line 3242, Address: 0x3d6b70, Func Offset: 0x560
	// Line 3232, Address: 0x3d6b74, Func Offset: 0x564
	// Line 3251, Address: 0x3d6b78, Func Offset: 0x568
	// Line 3245, Address: 0x3d6b7c, Func Offset: 0x56c
	// Line 3251, Address: 0x3d6b80, Func Offset: 0x570
	// Line 3245, Address: 0x3d6b84, Func Offset: 0x574
	// Line 3251, Address: 0x3d6b88, Func Offset: 0x578
	// Line 3244, Address: 0x3d6b8c, Func Offset: 0x57c
	// Line 3235, Address: 0x3d6b90, Func Offset: 0x580
	// Line 3232, Address: 0x3d6b98, Func Offset: 0x588
	// Line 3235, Address: 0x3d6b9c, Func Offset: 0x58c
	// Line 3251, Address: 0x3d6ba0, Func Offset: 0x590
	// Line 3235, Address: 0x3d6ba4, Func Offset: 0x594
	// Line 3251, Address: 0x3d6ba8, Func Offset: 0x598
	// Line 3245, Address: 0x3d6bac, Func Offset: 0x59c
	// Line 3251, Address: 0x3d6bb4, Func Offset: 0x5a4
	// Line 3245, Address: 0x3d6bb8, Func Offset: 0x5a8
	// Line 3232, Address: 0x3d6bc0, Func Offset: 0x5b0
	// Line 3253, Address: 0x3d6bc4, Func Offset: 0x5b4
	// Line 3242, Address: 0x3d6bc8, Func Offset: 0x5b8
	// Line 3253, Address: 0x3d6bcc, Func Offset: 0x5bc
	// Line 3242, Address: 0x3d6bd0, Func Offset: 0x5c0
	// Line 3258, Address: 0x3d6bd4, Func Offset: 0x5c4
	// Line 3251, Address: 0x3d6bd8, Func Offset: 0x5c8
	// Line 3242, Address: 0x3d6bdc, Func Offset: 0x5cc
	// Line 3251, Address: 0x3d6be0, Func Offset: 0x5d0
	// Line 3258, Address: 0x3d6be4, Func Offset: 0x5d4
	// Line 3242, Address: 0x3d6bf4, Func Offset: 0x5e4
	// Line 3243, Address: 0x3d6bf8, Func Offset: 0x5e8
	// Line 3251, Address: 0x3d6c00, Func Offset: 0x5f0
	// Line 3244, Address: 0x3d6c04, Func Offset: 0x5f4
	// Line 3251, Address: 0x3d6c08, Func Offset: 0x5f8
	// Line 3244, Address: 0x3d6c0c, Func Offset: 0x5fc
	// Line 3254, Address: 0x3d6c10, Func Offset: 0x600
	// Line 3258, Address: 0x3d6c18, Func Offset: 0x608
	// Line 3232, Address: 0x3d6c1c, Func Offset: 0x60c
	// Line 3258, Address: 0x3d6c20, Func Offset: 0x610
	// Line 3251, Address: 0x3d6c24, Func Offset: 0x614
	// Line 3258, Address: 0x3d6c28, Func Offset: 0x618
	// Line 3251, Address: 0x3d6c30, Func Offset: 0x620
	// Line 3258, Address: 0x3d6c40, Func Offset: 0x630
	// Line 3264, Address: 0x3d6c80, Func Offset: 0x670
	// Line 3258, Address: 0x3d6c84, Func Offset: 0x674
	// Line 3264, Address: 0x3d6c88, Func Offset: 0x678
	// Line 3270, Address: 0x3d6c8c, Func Offset: 0x67c
	// Line 3264, Address: 0x3d6c90, Func Offset: 0x680
	// Line 3265, Address: 0x3d6c94, Func Offset: 0x684
	// Line 3266, Address: 0x3d6c9c, Func Offset: 0x68c
	// Line 3265, Address: 0x3d6ca0, Func Offset: 0x690
	// Line 3264, Address: 0x3d6ca4, Func Offset: 0x694
	// Line 3266, Address: 0x3d6ca8, Func Offset: 0x698
	// Line 3264, Address: 0x3d6cac, Func Offset: 0x69c
	// Line 3270, Address: 0x3d6cb4, Func Offset: 0x6a4
	// Line 3264, Address: 0x3d6cb8, Func Offset: 0x6a8
	// Line 3270, Address: 0x3d6cc0, Func Offset: 0x6b0
	// Line 3264, Address: 0x3d6cd4, Func Offset: 0x6c4
	// Line 3270, Address: 0x3d6ce0, Func Offset: 0x6d0
	// Line 3264, Address: 0x3d6ce4, Func Offset: 0x6d4
	// Line 3270, Address: 0x3d6ce8, Func Offset: 0x6d8
	// Line 3264, Address: 0x3d6cf8, Func Offset: 0x6e8
	// Line 3270, Address: 0x3d6d0c, Func Offset: 0x6fc
	// Line 3264, Address: 0x3d6d14, Func Offset: 0x704
	// Line 3270, Address: 0x3d6d18, Func Offset: 0x708
	// Line 3273, Address: 0x3d6d4c, Func Offset: 0x73c
	// Line 3275, Address: 0x3d6d64, Func Offset: 0x754
	// Line 3276, Address: 0x3d6f04, Func Offset: 0x8f4
	// Line 3275, Address: 0x3d6f08, Func Offset: 0x8f8
	// Line 3276, Address: 0x3d6f10, Func Offset: 0x900
	// Line 3278, Address: 0x3d6f1c, Func Offset: 0x90c
	// Line 3279, Address: 0x3d6f30, Func Offset: 0x920
	// Func End, Address: 0x3d6f6c, Func Offset: 0x95c
}

// xFXShineUpdate__Ff
// Start address: 0x3d6f70
void xFXShineUpdate(float32 dt)
{
	int32 i;
	int32 j;
	xFXShineElem* e;
	int32 done;
	int32 j;
	// Line 3036, Address: 0x3d6f70, Func Offset: 0
	// Line 3037, Address: 0x3d6f80, Func Offset: 0x10
	// Line 3036, Address: 0x3d6f84, Func Offset: 0x14
	// Line 3037, Address: 0x3d6f88, Func Offset: 0x18
	// Line 3036, Address: 0x3d6f8c, Func Offset: 0x1c
	// Line 3037, Address: 0x3d6f90, Func Offset: 0x20
	// Line 3036, Address: 0x3d6f94, Func Offset: 0x24
	// Line 3037, Address: 0x3d6f98, Func Offset: 0x28
	// Line 3036, Address: 0x3d6f9c, Func Offset: 0x2c
	// Line 3037, Address: 0x3d6fa4, Func Offset: 0x34
	// Line 3036, Address: 0x3d6fa8, Func Offset: 0x38
	// Line 3037, Address: 0x3d6fac, Func Offset: 0x3c
	// Line 3036, Address: 0x3d6fb0, Func Offset: 0x40
	// Line 3037, Address: 0x3d6fb4, Func Offset: 0x44
	// Line 3036, Address: 0x3d6fb8, Func Offset: 0x48
	// Line 3041, Address: 0x3d6fc0, Func Offset: 0x50
	// Line 3126, Address: 0x3d6fcc, Func Offset: 0x5c
	// Line 3041, Address: 0x3d6fd8, Func Offset: 0x68
	// Line 3126, Address: 0x3d6fdc, Func Offset: 0x6c
	// Line 3127, Address: 0x3d6fe4, Func Offset: 0x74
	// Line 3046, Address: 0x3d6ff0, Func Offset: 0x80
	// Line 3043, Address: 0x3d6ff8, Func Offset: 0x88
	// Line 3127, Address: 0x3d6ffc, Func Offset: 0x8c
	// Line 3044, Address: 0x3d7004, Func Offset: 0x94
	// Line 3127, Address: 0x3d7008, Func Offset: 0x98
	// Line 3046, Address: 0x3d7014, Func Offset: 0xa4
	// Line 3127, Address: 0x3d701c, Func Offset: 0xac
	// Line 3048, Address: 0x3d7024, Func Offset: 0xb4
	// Line 3127, Address: 0x3d7028, Func Offset: 0xb8
	// Line 3048, Address: 0x3d7034, Func Offset: 0xc4
	// Line 3127, Address: 0x3d7038, Func Offset: 0xc8
	// Line 3050, Address: 0x3d7044, Func Offset: 0xd4
	// Line 3127, Address: 0x3d7048, Func Offset: 0xd8
	// Line 3052, Address: 0x3d7054, Func Offset: 0xe4
	// Line 3127, Address: 0x3d7058, Func Offset: 0xe8
	// Line 3056, Address: 0x3d707c, Func Offset: 0x10c
	// Line 3058, Address: 0x3d7080, Func Offset: 0x110
	// Line 3127, Address: 0x3d7088, Func Offset: 0x118
	// Line 3063, Address: 0x3d709c, Func Offset: 0x12c
	// Line 3127, Address: 0x3d70a0, Func Offset: 0x130
	// Line 3063, Address: 0x3d70ac, Func Offset: 0x13c
	// Line 3127, Address: 0x3d70b0, Func Offset: 0x140
	// Line 3067, Address: 0x3d70c0, Func Offset: 0x150
	// Line 3127, Address: 0x3d70c8, Func Offset: 0x158
	// Line 3067, Address: 0x3d70d0, Func Offset: 0x160
	// Line 3127, Address: 0x3d7114, Func Offset: 0x1a4
	// Line 3067, Address: 0x3d7118, Func Offset: 0x1a8
	// Line 3127, Address: 0x3d711c, Func Offset: 0x1ac
	// Line 3068, Address: 0x3d7124, Func Offset: 0x1b4
	// Line 3127, Address: 0x3d712c, Func Offset: 0x1bc
	// Line 3068, Address: 0x3d7134, Func Offset: 0x1c4
	// Line 3127, Address: 0x3d7178, Func Offset: 0x208
	// Line 3068, Address: 0x3d717c, Func Offset: 0x20c
	// Line 3127, Address: 0x3d7180, Func Offset: 0x210
	// Line 3069, Address: 0x3d7188, Func Offset: 0x218
	// Line 3127, Address: 0x3d7190, Func Offset: 0x220
	// Line 3069, Address: 0x3d7198, Func Offset: 0x228
	// Line 3084, Address: 0x3d71c8, Func Offset: 0x258
	// Line 3069, Address: 0x3d71cc, Func Offset: 0x25c
	// Line 3127, Address: 0x3d71e0, Func Offset: 0x270
	// Line 3069, Address: 0x3d71e4, Func Offset: 0x274
	// Line 3127, Address: 0x3d71e8, Func Offset: 0x278
	// Line 3087, Address: 0x3d7248, Func Offset: 0x2d8
	// Line 3127, Address: 0x3d724c, Func Offset: 0x2dc
	// Line 3106, Address: 0x3d725c, Func Offset: 0x2ec
	// Line 3127, Address: 0x3d7260, Func Offset: 0x2f0
	// Line 3108, Address: 0x3d7274, Func Offset: 0x304
	// Line 3127, Address: 0x3d7278, Func Offset: 0x308
	// Line 3111, Address: 0x3d7280, Func Offset: 0x310
	// Line 3127, Address: 0x3d7288, Func Offset: 0x318
	// Line 3114, Address: 0x3d728c, Func Offset: 0x31c
	// Line 3127, Address: 0x3d7290, Func Offset: 0x320
	// Line 3117, Address: 0x3d72a0, Func Offset: 0x330
	// Line 3127, Address: 0x3d72a8, Func Offset: 0x338
	// Line 3093, Address: 0x3d72e4, Func Offset: 0x374
	// Line 3127, Address: 0x3d72e8, Func Offset: 0x378
	// Line 3093, Address: 0x3d72ec, Func Offset: 0x37c
	// Line 3127, Address: 0x3d72f0, Func Offset: 0x380
	// Line 3093, Address: 0x3d72fc, Func Offset: 0x38c
	// Line 3127, Address: 0x3d7300, Func Offset: 0x390
	// Line 3093, Address: 0x3d7314, Func Offset: 0x3a4
	// Line 3127, Address: 0x3d7318, Func Offset: 0x3a8
	// Line 3093, Address: 0x3d7328, Func Offset: 0x3b8
	// Line 3127, Address: 0x3d732c, Func Offset: 0x3bc
	// Line 3093, Address: 0x3d7334, Func Offset: 0x3c4
	// Line 3127, Address: 0x3d7338, Func Offset: 0x3c8
	// Line 3094, Address: 0x3d7340, Func Offset: 0x3d0
	// Line 3127, Address: 0x3d7344, Func Offset: 0x3d4
	// Line 3096, Address: 0x3d7350, Func Offset: 0x3e0
	// Line 3127, Address: 0x3d7354, Func Offset: 0x3e4
	// Line 3098, Address: 0x3d7368, Func Offset: 0x3f8
	// Line 3127, Address: 0x3d7378, Func Offset: 0x408
	// Line 3099, Address: 0x3d7380, Func Offset: 0x410
	// Line 3127, Address: 0x3d7388, Func Offset: 0x418
	// Func End, Address: 0x3d73bc, Func Offset: 0x44c
}

// xFXShineInit__Fv
// Start address: 0x3d73c0
void xFXShineInit()
{
	int32 i;
	// Line 3023, Address: 0x3d73c0, Func Offset: 0
	// Line 3025, Address: 0x3d73d0, Func Offset: 0x10
	// Line 3029, Address: 0x3d73dc, Func Offset: 0x1c
	// Line 3032, Address: 0x3d73ec, Func Offset: 0x2c
	// Line 3031, Address: 0x3d73f0, Func Offset: 0x30
	// Line 3032, Address: 0x3d73f4, Func Offset: 0x34
	// Line 3033, Address: 0x3d7400, Func Offset: 0x40
	// Func End, Address: 0x3d7414, Func Offset: 0x54
}

// xFXStreakUpdate__FUiPC5xVec3PC5xVec3
// Start address: 0x3d7420
void xFXStreakUpdate(uint32 id, xVec3* a, xVec3* b)
{
	xFXStreak* s;
	// Line 2946, Address: 0x3d7420, Func Offset: 0
	// Line 2950, Address: 0x3d742c, Func Offset: 0xc
	// Line 2953, Address: 0x3d7440, Func Offset: 0x20
	// Line 2956, Address: 0x3d7450, Func Offset: 0x30
	// Line 2958, Address: 0x3d7458, Func Offset: 0x38
	// Line 2959, Address: 0x3d7464, Func Offset: 0x44
	// Line 2960, Address: 0x3d7474, Func Offset: 0x54
	// Line 2962, Address: 0x3d7478, Func Offset: 0x58
	// Line 2964, Address: 0x3d7484, Func Offset: 0x64
	// Line 2962, Address: 0x3d7488, Func Offset: 0x68
	// Line 2963, Address: 0x3d748c, Func Offset: 0x6c
	// Line 2962, Address: 0x3d7498, Func Offset: 0x78
	// Line 2963, Address: 0x3d74ac, Func Offset: 0x8c
	// Line 2964, Address: 0x3d74c4, Func Offset: 0xa4
	// Line 2965, Address: 0x3d74d4, Func Offset: 0xb4
	// Line 2968, Address: 0x3d74e8, Func Offset: 0xc8
	// Func End, Address: 0x3d74f0, Func Offset: 0xd0
}

// xFXStreakStop__FUi
// Start address: 0x3d74f0
void xFXStreakStop(uint32 id)
{
	xFXStreak* s;
	// Line 2928, Address: 0x3d74f0, Func Offset: 0
	// Line 2933, Address: 0x3d74fc, Func Offset: 0xc
	// Line 2938, Address: 0x3d7510, Func Offset: 0x20
	// Line 2939, Address: 0x3d7528, Func Offset: 0x38
	// Line 2941, Address: 0x3d7530, Func Offset: 0x40
	// Line 2942, Address: 0x3d753c, Func Offset: 0x4c
	// Line 2943, Address: 0x3d7548, Func Offset: 0x58
	// Func End, Address: 0x3d7550, Func Offset: 0x60
}

// xFXStreakStart__FfffUiPC10xColor_tagPC10xColor_tagi
// Start address: 0x3d7550
uint32 xFXStreakStart(float32 frequency, float32 alphaFadeRate, float32 alphaStart, uint32 textureID, xColor_tag* edge_a, xColor_tag* edge_b, int32 taper)
{
	uint32 i;
	int32 j;
	// Line 2864, Address: 0x3d7550, Func Offset: 0
	// Line 2866, Address: 0x3d7560, Func Offset: 0x10
	// Line 2869, Address: 0x3d756c, Func Offset: 0x1c
	// Line 2873, Address: 0x3d7578, Func Offset: 0x28
	// Line 2876, Address: 0x3d7580, Func Offset: 0x30
	// Line 2885, Address: 0x3d7584, Func Offset: 0x34
	// Line 2877, Address: 0x3d7588, Func Offset: 0x38
	// Line 2878, Address: 0x3d7590, Func Offset: 0x40
	// Line 2879, Address: 0x3d7594, Func Offset: 0x44
	// Line 2880, Address: 0x3d7598, Func Offset: 0x48
	// Line 2881, Address: 0x3d759c, Func Offset: 0x4c
	// Line 2882, Address: 0x3d75a0, Func Offset: 0x50
	// Line 2883, Address: 0x3d75a4, Func Offset: 0x54
	// Line 2887, Address: 0x3d75a8, Func Offset: 0x58
	// Line 2890, Address: 0x3d75e4, Func Offset: 0x94
	// Line 2892, Address: 0x3d75ec, Func Offset: 0x9c
	// Line 2899, Address: 0x3d760c, Func Offset: 0xbc
	// Line 2901, Address: 0x3d7614, Func Offset: 0xc4
	// Line 2908, Address: 0x3d7634, Func Offset: 0xe4
	// Line 2909, Address: 0x3d763c, Func Offset: 0xec
	// Line 2912, Address: 0x3d764c, Func Offset: 0xfc
	// Line 2913, Address: 0x3d7660, Func Offset: 0x110
	// Line 2915, Address: 0x3d7668, Func Offset: 0x118
	// Line 2919, Address: 0x3d7670, Func Offset: 0x120
	// Line 2922, Address: 0x3d7678, Func Offset: 0x128
	// Line 2923, Address: 0x3d7688, Func Offset: 0x138
	// Line 2874, Address: 0x3d7694, Func Offset: 0x144
	// Line 2896, Address: 0x3d76a0, Func Offset: 0x150
	// Line 2923, Address: 0x3d76a4, Func Offset: 0x154
	// Line 2924, Address: 0x3d76cc, Func Offset: 0x17c
	// Func End, Address: 0x3d76e0, Func Offset: 0x190
}

// xFXStreakRender__Fv
// Start address: 0x3d76e0
void xFXStreakRender()
{
	xFXStreakElem* e1;
	int32 streak;
	int32 count;
	int32 j;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RxObjSpace3DVertex sStripVert[4];
	// Line 2782, Address: 0x3d76e0, Func Offset: 0
	// Line 2787, Address: 0x3d76f0, Func Offset: 0x10
	// Line 2782, Address: 0x3d76f4, Func Offset: 0x14
	// Line 2787, Address: 0x3d76f8, Func Offset: 0x18
	// Line 2782, Address: 0x3d76fc, Func Offset: 0x1c
	// Line 2787, Address: 0x3d7700, Func Offset: 0x20
	// Line 2782, Address: 0x3d7704, Func Offset: 0x24
	// Line 2787, Address: 0x3d7710, Func Offset: 0x30
	// Line 2782, Address: 0x3d7714, Func Offset: 0x34
	// Line 2787, Address: 0x3d7718, Func Offset: 0x38
	// Line 2791, Address: 0x3d7728, Func Offset: 0x48
	// Line 2797, Address: 0x3d7734, Func Offset: 0x54
	// Line 2796, Address: 0x3d7738, Func Offset: 0x58
	// Line 2801, Address: 0x3d773c, Func Offset: 0x5c
	// Line 2802, Address: 0x3d7740, Func Offset: 0x60
	// Line 2801, Address: 0x3d7744, Func Offset: 0x64
	// Line 2802, Address: 0x3d7748, Func Offset: 0x68
	// Line 2804, Address: 0x3d7764, Func Offset: 0x84
	// Line 2815, Address: 0x3d777c, Func Offset: 0x9c
	// Line 2817, Address: 0x3d7784, Func Offset: 0xa4
	// Line 2816, Address: 0x3d7788, Func Offset: 0xa8
	// Line 2817, Address: 0x3d778c, Func Offset: 0xac
	// Line 2818, Address: 0x3d7790, Func Offset: 0xb0
	// Line 2816, Address: 0x3d7794, Func Offset: 0xb4
	// Line 2815, Address: 0x3d7798, Func Offset: 0xb8
	// Line 2818, Address: 0x3d77a0, Func Offset: 0xc0
	// Line 2815, Address: 0x3d77a4, Func Offset: 0xc4
	// Line 2818, Address: 0x3d77b0, Func Offset: 0xd0
	// Line 2815, Address: 0x3d77c0, Func Offset: 0xe0
	// Line 2818, Address: 0x3d77c4, Func Offset: 0xe4
	// Line 2815, Address: 0x3d77cc, Func Offset: 0xec
	// Line 2818, Address: 0x3d77d0, Func Offset: 0xf0
	// Line 2822, Address: 0x3d781c, Func Offset: 0x13c
	// Line 2823, Address: 0x3d7820, Func Offset: 0x140
	// Line 2822, Address: 0x3d7828, Func Offset: 0x148
	// Line 2818, Address: 0x3d782c, Func Offset: 0x14c
	// Line 2825, Address: 0x3d7830, Func Offset: 0x150
	// Line 2822, Address: 0x3d7834, Func Offset: 0x154
	// Line 2824, Address: 0x3d7840, Func Offset: 0x160
	// Line 2822, Address: 0x3d784c, Func Offset: 0x16c
	// Line 2825, Address: 0x3d7850, Func Offset: 0x170
	// Line 2822, Address: 0x3d7860, Func Offset: 0x180
	// Line 2825, Address: 0x3d7864, Func Offset: 0x184
	// Line 2822, Address: 0x3d7868, Func Offset: 0x188
	// Line 2825, Address: 0x3d786c, Func Offset: 0x18c
	// Line 2822, Address: 0x3d7870, Func Offset: 0x190
	// Line 2825, Address: 0x3d7874, Func Offset: 0x194
	// Line 2830, Address: 0x3d78c4, Func Offset: 0x1e4
	// Line 2825, Address: 0x3d78c8, Func Offset: 0x1e8
	// Line 2830, Address: 0x3d78cc, Func Offset: 0x1ec
	// Line 2832, Address: 0x3d78d0, Func Offset: 0x1f0
	// Line 2830, Address: 0x3d78d8, Func Offset: 0x1f8
	// Line 2833, Address: 0x3d78e0, Func Offset: 0x200
	// Line 2830, Address: 0x3d78e4, Func Offset: 0x204
	// Line 2831, Address: 0x3d78ec, Func Offset: 0x20c
	// Line 2830, Address: 0x3d78f4, Func Offset: 0x214
	// Line 2831, Address: 0x3d78f8, Func Offset: 0x218
	// Line 2833, Address: 0x3d78fc, Func Offset: 0x21c
	// Line 2830, Address: 0x3d7904, Func Offset: 0x224
	// Line 2833, Address: 0x3d7908, Func Offset: 0x228
	// Line 2830, Address: 0x3d7918, Func Offset: 0x238
	// Line 2833, Address: 0x3d791c, Func Offset: 0x23c
	// Line 2837, Address: 0x3d796c, Func Offset: 0x28c
	// Line 2833, Address: 0x3d7974, Func Offset: 0x294
	// Line 2838, Address: 0x3d7978, Func Offset: 0x298
	// Line 2837, Address: 0x3d7980, Func Offset: 0x2a0
	// Line 2838, Address: 0x3d7984, Func Offset: 0x2a4
	// Line 2840, Address: 0x3d7988, Func Offset: 0x2a8
	// Line 2837, Address: 0x3d798c, Func Offset: 0x2ac
	// Line 2839, Address: 0x3d7990, Func Offset: 0x2b0
	// Line 2837, Address: 0x3d7998, Func Offset: 0x2b8
	// Line 2840, Address: 0x3d79a0, Func Offset: 0x2c0
	// Line 2837, Address: 0x3d79bc, Func Offset: 0x2dc
	// Line 2840, Address: 0x3d79c4, Func Offset: 0x2e4
	// Line 2837, Address: 0x3d79c8, Func Offset: 0x2e8
	// Line 2840, Address: 0x3d79cc, Func Offset: 0x2ec
	// Line 2847, Address: 0x3d7a14, Func Offset: 0x334
	// Line 2850, Address: 0x3d7a28, Func Offset: 0x348
	// Line 2852, Address: 0x3d7ba4, Func Offset: 0x4c4
	// Line 2855, Address: 0x3d7ba8, Func Offset: 0x4c8
	// Line 2857, Address: 0x3d7bb0, Func Offset: 0x4d0
	// Line 2859, Address: 0x3d7bb8, Func Offset: 0x4d8
	// Line 2860, Address: 0x3d7bc8, Func Offset: 0x4e8
	// Func End, Address: 0x3d7c00, Func Offset: 0x520
}

// xFXStreakUpdate__Ff
// Start address: 0x3d7c00
void xFXStreakUpdate(float32 dt)
{
	int32 i;
	int32 j;
	xFXStreakElem* e;
	xVec3 diff;
	int32 done;
	int32 j;
	// Line 2723, Address: 0x3d7c00, Func Offset: 0
	// Line 2724, Address: 0x3d7c04, Func Offset: 0x4
	// Line 2745, Address: 0x3d7c28, Func Offset: 0x28
	// Line 2753, Address: 0x3d7c2c, Func Offset: 0x2c
	// Line 2745, Address: 0x3d7c30, Func Offset: 0x30
	// Line 2752, Address: 0x3d7c34, Func Offset: 0x34
	// Line 2753, Address: 0x3d7c38, Func Offset: 0x38
	// Line 2768, Address: 0x3d7c40, Func Offset: 0x40
	// Line 2728, Address: 0x3d7c44, Func Offset: 0x44
	// Line 2778, Address: 0x3d7c50, Func Offset: 0x50
	// Line 2728, Address: 0x3d7c58, Func Offset: 0x58
	// Line 2778, Address: 0x3d7c5c, Func Offset: 0x5c
	// Line 2779, Address: 0x3d7c64, Func Offset: 0x64
	// Line 2735, Address: 0x3d7c70, Func Offset: 0x70
	// Line 2730, Address: 0x3d7c78, Func Offset: 0x78
	// Line 2779, Address: 0x3d7c7c, Func Offset: 0x7c
	// Line 2731, Address: 0x3d7c84, Func Offset: 0x84
	// Line 2779, Address: 0x3d7c88, Func Offset: 0x88
	// Line 2735, Address: 0x3d7c8c, Func Offset: 0x8c
	// Line 2779, Address: 0x3d7c90, Func Offset: 0x90
	// Line 2740, Address: 0x3d7c94, Func Offset: 0x94
	// Line 2779, Address: 0x3d7c98, Func Offset: 0x98
	// Line 2752, Address: 0x3d7ca8, Func Offset: 0xa8
	// Line 2753, Address: 0x3d7cb0, Func Offset: 0xb0
	// Line 2779, Address: 0x3d7cb4, Func Offset: 0xb4
	// Line 2760, Address: 0x3d7cbc, Func Offset: 0xbc
	// Line 2779, Address: 0x3d7cc0, Func Offset: 0xc0
	// Line 2762, Address: 0x3d7cd4, Func Offset: 0xd4
	// Line 2779, Address: 0x3d7cd8, Func Offset: 0xd8
	// Line 2765, Address: 0x3d7ce0, Func Offset: 0xe0
	// Line 2779, Address: 0x3d7ce8, Func Offset: 0xe8
	// Line 2771, Address: 0x3d7cf4, Func Offset: 0xf4
	// Line 2773, Address: 0x3d7cfc, Func Offset: 0xfc
	// Line 2779, Address: 0x3d7d00, Func Offset: 0x100
	// Line 2745, Address: 0x3d7d44, Func Offset: 0x144
	// Line 2742, Address: 0x3d7d48, Func Offset: 0x148
	// Line 2779, Address: 0x3d7d50, Func Offset: 0x150
	// Line 2745, Address: 0x3d7d54, Func Offset: 0x154
	// Line 2779, Address: 0x3d7d58, Func Offset: 0x158
	// Line 2742, Address: 0x3d7d78, Func Offset: 0x178
	// Line 2779, Address: 0x3d7d7c, Func Offset: 0x17c
	// Line 2745, Address: 0x3d7d98, Func Offset: 0x198
	// Line 2747, Address: 0x3d7d9c, Func Offset: 0x19c
	// Line 2779, Address: 0x3d7da0, Func Offset: 0x1a0
	// Line 2745, Address: 0x3d7da4, Func Offset: 0x1a4
	// Line 2779, Address: 0x3d7da8, Func Offset: 0x1a8
	// Line 2747, Address: 0x3d7dc0, Func Offset: 0x1c0
	// Line 2779, Address: 0x3d7dc4, Func Offset: 0x1c4
	// Line 2745, Address: 0x3d7dc8, Func Offset: 0x1c8
	// Line 2779, Address: 0x3d7dcc, Func Offset: 0x1cc
	// Line 2747, Address: 0x3d7dd4, Func Offset: 0x1d4
	// Line 2779, Address: 0x3d7dd8, Func Offset: 0x1d8
	// Line 2748, Address: 0x3d7de0, Func Offset: 0x1e0
	// Line 2779, Address: 0x3d7de4, Func Offset: 0x1e4
	// Line 2748, Address: 0x3d7dec, Func Offset: 0x1ec
	// Line 2779, Address: 0x3d7df0, Func Offset: 0x1f0
	// Line 2748, Address: 0x3d7df8, Func Offset: 0x1f8
	// Line 2779, Address: 0x3d7e08, Func Offset: 0x208
	// Func End, Address: 0x3d7e20, Func Offset: 0x220
}

// xFXStreakInit__Fv
// Start address: 0x3d7e20
void xFXStreakInit()
{
	int32 i;
	// Line 2709, Address: 0x3d7e20, Func Offset: 0
	// Line 2711, Address: 0x3d7e30, Func Offset: 0x10
	// Line 2715, Address: 0x3d7e3c, Func Offset: 0x1c
	// Line 2717, Address: 0x3d7e4c, Func Offset: 0x2c
	// Line 2719, Address: 0x3d7e50, Func Offset: 0x30
	// Line 2718, Address: 0x3d7e54, Func Offset: 0x34
	// Line 2719, Address: 0x3d7e58, Func Offset: 0x38
	// Line 2720, Address: 0x3d7e64, Func Offset: 0x44
	// Func End, Address: 0x3d7e78, Func Offset: 0x58
}

// xFXFireworksUpdate__Ff
// Start address: 0x3d7e80
void xFXFireworksUpdate(float32 dt)
{
	int32 i;
	xParEmitterCustomSettings trail_info;
	zParEmitter* femit;
	xParEmitterCustomSettings xplo_info;
	// Line 2554, Address: 0x3d7e80, Func Offset: 0
	// Line 2555, Address: 0x3d7e98, Func Offset: 0x18
	// Line 2554, Address: 0x3d7e9c, Func Offset: 0x1c
	// Line 2555, Address: 0x3d7ea0, Func Offset: 0x20
	// Line 2554, Address: 0x3d7ea4, Func Offset: 0x24
	// Line 2555, Address: 0x3d7eb0, Func Offset: 0x30
	// Line 2554, Address: 0x3d7eb4, Func Offset: 0x34
	// Line 2555, Address: 0x3d7eb8, Func Offset: 0x38
	// Line 2554, Address: 0x3d7ebc, Func Offset: 0x3c
	// Line 2555, Address: 0x3d7ed4, Func Offset: 0x54
	// Line 2559, Address: 0x3d7ed8, Func Offset: 0x58
	// Line 2562, Address: 0x3d7ee0, Func Offset: 0x60
	// Line 2564, Address: 0x3d7ee8, Func Offset: 0x68
	// Line 2565, Address: 0x3d7eec, Func Offset: 0x6c
	// Line 2564, Address: 0x3d7ef4, Func Offset: 0x74
	// Line 2565, Address: 0x3d7ef8, Func Offset: 0x78
	// Line 2568, Address: 0x3d7f04, Func Offset: 0x84
	// Line 2570, Address: 0x3d7f64, Func Offset: 0xe4
	// Line 2574, Address: 0x3d7fac, Func Offset: 0x12c
	// Line 2570, Address: 0x3d7fb4, Func Offset: 0x134
	// Line 2576, Address: 0x3d7fcc, Func Offset: 0x14c
	// Line 2577, Address: 0x3d7fd4, Func Offset: 0x154
	// Line 2579, Address: 0x3d7ffc, Func Offset: 0x17c
	// Line 2585, Address: 0x3d8008, Func Offset: 0x188
	// Line 2586, Address: 0x3d800c, Func Offset: 0x18c
	// Line 2585, Address: 0x3d8014, Func Offset: 0x194
	// Line 2586, Address: 0x3d8018, Func Offset: 0x198
	// Line 2587, Address: 0x3d8024, Func Offset: 0x1a4
	// Line 2600, Address: 0x3d8028, Func Offset: 0x1a8
	// Line 2591, Address: 0x3d802c, Func Offset: 0x1ac
	// Line 2598, Address: 0x3d8030, Func Offset: 0x1b0
	// Line 2591, Address: 0x3d8034, Func Offset: 0x1b4
	// Line 2598, Address: 0x3d8038, Func Offset: 0x1b8
	// Line 2591, Address: 0x3d803c, Func Offset: 0x1bc
	// Line 2598, Address: 0x3d8040, Func Offset: 0x1c0
	// Line 2600, Address: 0x3d8044, Func Offset: 0x1c4
	// Line 2591, Address: 0x3d804c, Func Offset: 0x1cc
	// Line 2592, Address: 0x3d8058, Func Offset: 0x1d8
	// Line 2593, Address: 0x3d806c, Func Offset: 0x1ec
	// Line 2599, Address: 0x3d8080, Func Offset: 0x200
	// Line 2600, Address: 0x3d8094, Func Offset: 0x214
	// Line 2604, Address: 0x3d809c, Func Offset: 0x21c
	// Line 2612, Address: 0x3d80b4, Func Offset: 0x234
	// Line 2607, Address: 0x3d80b8, Func Offset: 0x238
	// Line 2613, Address: 0x3d80bc, Func Offset: 0x23c
	// Line 2614, Address: 0x3d8114, Func Offset: 0x294
	// Line 2617, Address: 0x3d8118, Func Offset: 0x298
	// Line 2620, Address: 0x3d811c, Func Offset: 0x29c
	// Line 2617, Address: 0x3d8120, Func Offset: 0x2a0
	// Line 2620, Address: 0x3d8124, Func Offset: 0x2a4
	// Line 2617, Address: 0x3d8128, Func Offset: 0x2a8
	// Line 2620, Address: 0x3d812c, Func Offset: 0x2ac
	// Line 2622, Address: 0x3d813c, Func Offset: 0x2bc
	// Line 2626, Address: 0x3d8144, Func Offset: 0x2c4
	// Line 2627, Address: 0x3d81c8, Func Offset: 0x348
	// Line 2628, Address: 0x3d824c, Func Offset: 0x3cc
	// Line 2631, Address: 0x3d82ac, Func Offset: 0x42c
	// Line 2628, Address: 0x3d82b0, Func Offset: 0x430
	// Line 2629, Address: 0x3d82b4, Func Offset: 0x434
	// Line 2628, Address: 0x3d82bc, Func Offset: 0x43c
	// Line 2629, Address: 0x3d82cc, Func Offset: 0x44c
	// Line 2628, Address: 0x3d82d8, Func Offset: 0x458
	// Line 2629, Address: 0x3d82dc, Func Offset: 0x45c
	// Line 2628, Address: 0x3d82e8, Func Offset: 0x468
	// Line 2629, Address: 0x3d82ec, Func Offset: 0x46c
	// Line 2631, Address: 0x3d82f0, Func Offset: 0x470
	// Line 2629, Address: 0x3d82f4, Func Offset: 0x474
	// Line 2628, Address: 0x3d82f8, Func Offset: 0x478
	// Line 2629, Address: 0x3d82fc, Func Offset: 0x47c
	// Line 2631, Address: 0x3d8300, Func Offset: 0x480
	// Line 2629, Address: 0x3d8304, Func Offset: 0x484
	// Line 2628, Address: 0x3d8308, Func Offset: 0x488
	// Line 2631, Address: 0x3d830c, Func Offset: 0x48c
	// Line 2632, Address: 0x3d8314, Func Offset: 0x494
	// Line 2634, Address: 0x3d8320, Func Offset: 0x4a0
	// Line 2632, Address: 0x3d8324, Func Offset: 0x4a4
	// Line 2634, Address: 0x3d8328, Func Offset: 0x4a8
	// Line 2632, Address: 0x3d832c, Func Offset: 0x4ac
	// Line 2634, Address: 0x3d8330, Func Offset: 0x4b0
	// Line 2632, Address: 0x3d8334, Func Offset: 0x4b4
	// Line 2634, Address: 0x3d8348, Func Offset: 0x4c8
	// Line 2639, Address: 0x3d8350, Func Offset: 0x4d0
	// Line 2657, Address: 0x3d85e8, Func Offset: 0x768
	// Line 2659, Address: 0x3d8600, Func Offset: 0x780
	// Line 2660, Address: 0x3d8608, Func Offset: 0x788
	// Line 2663, Address: 0x3d8630, Func Offset: 0x7b0
	// Line 2664, Address: 0x3d8640, Func Offset: 0x7c0
	// Line 2587, Address: 0x3d864c, Func Offset: 0x7cc
	// Line 2664, Address: 0x3d8658, Func Offset: 0x7d8
	// Func End, Address: 0x3d8690, Func Offset: 0x810
}

// xFXFireworksLaunch__FfPC5xVec3f
// Start address: 0x3d8690
void xFXFireworksLaunch(float32 countdownTime, xVec3* pos, float32 fuelTime)
{
	int32 i;
	// Line 2538, Address: 0x3d8690, Func Offset: 0
	// Line 2542, Address: 0x3d869c, Func Offset: 0xc
	// Line 2546, Address: 0x3d86ac, Func Offset: 0x1c
	// Line 2544, Address: 0x3d86b0, Func Offset: 0x20
	// Line 2546, Address: 0x3d86b4, Func Offset: 0x24
	// Line 2544, Address: 0x3d86b8, Func Offset: 0x28
	// Line 2546, Address: 0x3d86bc, Func Offset: 0x2c
	// Line 2545, Address: 0x3d86c0, Func Offset: 0x30
	// Line 2546, Address: 0x3d86c4, Func Offset: 0x34
	// Line 2548, Address: 0x3d86d0, Func Offset: 0x40
	// Line 2550, Address: 0x3d86d8, Func Offset: 0x48
	// Line 2551, Address: 0x3d86e8, Func Offset: 0x58
	// Func End, Address: 0x3d86f0, Func Offset: 0x60
}

// xFXFireworksInit__FPCcPCcPCcPCcPCc
// Start address: 0x3d86f0
void xFXFireworksInit(int8* fireworksTrailEmitter, int8* fireworksEmitter1, int8* fireworksEmitter2, int8* fireworksSound, int8* fireworksLaunchSound)
{
	int32 i;
	// Line 2518, Address: 0x3d86f0, Func Offset: 0
	// Line 2520, Address: 0x3d8714, Func Offset: 0x24
	// Line 2521, Address: 0x3d871c, Func Offset: 0x2c
	// Line 2522, Address: 0x3d8728, Func Offset: 0x38
	// Line 2525, Address: 0x3d8734, Func Offset: 0x44
	// Line 2526, Address: 0x3d8740, Func Offset: 0x50
	// Line 2529, Address: 0x3d874c, Func Offset: 0x5c
	// Line 2526, Address: 0x3d8750, Func Offset: 0x60
	// Line 2529, Address: 0x3d8754, Func Offset: 0x64
	// Line 2530, Address: 0x3d8764, Func Offset: 0x74
	// Line 2532, Address: 0x3d8770, Func Offset: 0x80
	// Line 2534, Address: 0x3d8794, Func Offset: 0xa4
	// Func End, Address: 0x3d87b0, Func Offset: 0xc0
}

// xFXRenderProximityFade__FRC14xModelInstanceff
// Start address: 0x3d87b0
void xFXRenderProximityFade(xModelInstance& model, float32 near_dist, float32 far_dist)
{
	int32 curtriindex;
	RpGeometry* geom;
	RwRaster* raster;
	RpTriangle* tri;
	RwFrame* frame;
	RwTexCoords* uv;
	int32 vert_total;
	xVec3* vert;
	xVec3* normal;
	uint8* alpha;
	float32* depth;
	xMat4x3& cm;
	xVec3 ov;
	int32 i;
	float32 a;
	RxObjSpace3DVertex* out_vert;
	int32 tri_total;
	uint16* alpha_tri_index;
	tri_data_0* alpha_tri;
	uint32 alpha_tri_total;
	tri_data_0 tri_buffer[3][2];
	tri_data_0 cur_tri;
	RpTriangle* end;
	uint16 vi[3];
	float32 d0;
	float32 d1;
	float32 d2;
	uint32 flags;
	int32 i;
	int32 j;
	uint32 i;
	// Line 2305, Address: 0x3d87b0, Func Offset: 0
	// Line 2306, Address: 0x3d87b4, Func Offset: 0x4
	// Line 2305, Address: 0x3d87b8, Func Offset: 0x8
	// Line 2306, Address: 0x3d87bc, Func Offset: 0xc
	// Line 2305, Address: 0x3d87c0, Func Offset: 0x10
	// Line 2306, Address: 0x3d87e0, Func Offset: 0x30
	// Line 2305, Address: 0x3d87e4, Func Offset: 0x34
	// Line 2306, Address: 0x3d87e8, Func Offset: 0x38
	// Line 2305, Address: 0x3d87ec, Func Offset: 0x3c
	// Line 2306, Address: 0x3d8824, Func Offset: 0x74
	// Line 2307, Address: 0x3d882c, Func Offset: 0x7c
	// Line 2323, Address: 0x3d8840, Func Offset: 0x90
	// Line 2311, Address: 0x3d8844, Func Offset: 0x94
	// Line 2323, Address: 0x3d8848, Func Offset: 0x98
	// Line 2325, Address: 0x3d884c, Func Offset: 0x9c
	// Line 2328, Address: 0x3d8854, Func Offset: 0xa4
	// Line 2311, Address: 0x3d8860, Func Offset: 0xb0
	// Line 2323, Address: 0x3d8864, Func Offset: 0xb4
	// Line 2314, Address: 0x3d8868, Func Offset: 0xb8
	// Line 2320, Address: 0x3d886c, Func Offset: 0xbc
	// Line 2325, Address: 0x3d8870, Func Offset: 0xc0
	// Line 2320, Address: 0x3d8874, Func Offset: 0xc4
	// Line 2324, Address: 0x3d8878, Func Offset: 0xc8
	// Line 2314, Address: 0x3d8880, Func Offset: 0xd0
	// Line 2328, Address: 0x3d888c, Func Offset: 0xdc
	// Line 2329, Address: 0x3d8894, Func Offset: 0xe4
	// Line 2330, Address: 0x3d88a4, Func Offset: 0xf4
	// Line 2331, Address: 0x3d88b4, Func Offset: 0x104
	// Line 2334, Address: 0x3d88d0, Func Offset: 0x120
	// Line 2335, Address: 0x3d88d8, Func Offset: 0x128
	// Line 2336, Address: 0x3d88e4, Func Offset: 0x134
	// Line 2337, Address: 0x3d8904, Func Offset: 0x154
	// Line 2340, Address: 0x3d8920, Func Offset: 0x170
	// Line 2341, Address: 0x3d892c, Func Offset: 0x17c
	// Line 2342, Address: 0x3d8934, Func Offset: 0x184
	// Line 2344, Address: 0x3d8940, Func Offset: 0x190
	// Line 2345, Address: 0x3d8960, Func Offset: 0x1b0
	// Line 2356, Address: 0x3d896c, Func Offset: 0x1bc
	// Line 2355, Address: 0x3d8970, Func Offset: 0x1c0
	// Line 2361, Address: 0x3d8974, Func Offset: 0x1c4
	// Line 2360, Address: 0x3d8978, Func Offset: 0x1c8
	// Line 2355, Address: 0x3d897c, Func Offset: 0x1cc
	// Line 2358, Address: 0x3d8980, Func Offset: 0x1d0
	// Line 2359, Address: 0x3d8984, Func Offset: 0x1d4
	// Line 2361, Address: 0x3d8988, Func Offset: 0x1d8
	// Line 2362, Address: 0x3d8a88, Func Offset: 0x2d8
	// Line 2364, Address: 0x3d8a94, Func Offset: 0x2e4
	// Line 2378, Address: 0x3d8ab4, Func Offset: 0x304
	// Line 2380, Address: 0x3d8eac, Func Offset: 0x6fc
	// Line 2378, Address: 0x3d8eb0, Func Offset: 0x700
	// Line 2380, Address: 0x3d8eb4, Func Offset: 0x704
	// Line 2378, Address: 0x3d8eb8, Func Offset: 0x708
	// Line 2380, Address: 0x3d8ebc, Func Offset: 0x70c
	// Line 2382, Address: 0x3d9294, Func Offset: 0xae4
	// Line 2402, Address: 0x3d9298, Func Offset: 0xae8
	// Line 2382, Address: 0x3d929c, Func Offset: 0xaec
	// Line 2383, Address: 0x3d92bc, Func Offset: 0xb0c
	// Line 2382, Address: 0x3d92c0, Func Offset: 0xb10
	// Line 2383, Address: 0x3d92c4, Func Offset: 0xb14
	// Line 2402, Address: 0x3d92f4, Func Offset: 0xb44
	// Line 2403, Address: 0x3d9300, Func Offset: 0xb50
	// Line 2404, Address: 0x3d9314, Func Offset: 0xb64
	// Line 2405, Address: 0x3d9318, Func Offset: 0xb68
	// Line 2406, Address: 0x3d932c, Func Offset: 0xb7c
	// Line 2407, Address: 0x3d9340, Func Offset: 0xb90
	// Line 2408, Address: 0x3d9344, Func Offset: 0xb94
	// Line 2409, Address: 0x3d9358, Func Offset: 0xba8
	// Line 2410, Address: 0x3d936c, Func Offset: 0xbbc
	// Line 2412, Address: 0x3d9370, Func Offset: 0xbc0
	// Line 2420, Address: 0x3d938c, Func Offset: 0xbdc
	// Line 2426, Address: 0x3d939c, Func Offset: 0xbec
	// Line 2427, Address: 0x3d9448, Func Offset: 0xc98
	// Line 2428, Address: 0x3da4b0, Func Offset: 0x1d00
	// Line 2441, Address: 0x3da4bc, Func Offset: 0x1d0c
	// Line 2449, Address: 0x3da4e0, Func Offset: 0x1d30
	// Line 2434, Address: 0x3da4e4, Func Offset: 0x1d34
	// Line 2441, Address: 0x3da4e8, Func Offset: 0x1d38
	// Line 2430, Address: 0x3da4f8, Func Offset: 0x1d48
	// Line 2434, Address: 0x3da528, Func Offset: 0x1d78
	// Line 2435, Address: 0x3db4a0, Func Offset: 0x2cf0
	// Line 2437, Address: 0x3db4b0, Func Offset: 0x2d00
	// Line 2441, Address: 0x3db4e4, Func Offset: 0x2d34
	// Line 2452, Address: 0x3db5a4, Func Offset: 0x2df4
	// Line 2453, Address: 0x3db5b8, Func Offset: 0x2e08
	// Line 2456, Address: 0x3db5c8, Func Offset: 0x2e18
	// Line 2459, Address: 0x3db5f0, Func Offset: 0x2e40
	// Line 2460, Address: 0x3db680, Func Offset: 0x2ed0
	// Line 2462, Address: 0x3db6a4, Func Offset: 0x2ef4
	// Line 2460, Address: 0x3db6a8, Func Offset: 0x2ef8
	// Line 2462, Address: 0x3db6ac, Func Offset: 0x2efc
	// Line 2463, Address: 0x3dba70, Func Offset: 0x32c0
	// Line 2464, Address: 0x3dbb78, Func Offset: 0x33c8
	// Line 2463, Address: 0x3dbb7c, Func Offset: 0x33cc
	// Line 2464, Address: 0x3dbb84, Func Offset: 0x33d4
	// Line 2466, Address: 0x3dbb98, Func Offset: 0x33e8
	// Line 2468, Address: 0x3dbf64, Func Offset: 0x37b4
	// Line 2470, Address: 0x3dbf70, Func Offset: 0x37c0
	// Line 2471, Address: 0x3dbf78, Func Offset: 0x37c8
	// Line 2474, Address: 0x3dbf80, Func Offset: 0x37d0
	// Line 2475, Address: 0x3dbf8c, Func Offset: 0x37dc
	// Line 2476, Address: 0x3dbf94, Func Offset: 0x37e4
	// Line 2477, Address: 0x3dbf9c, Func Offset: 0x37ec
	// Line 2478, Address: 0x3dbfa4, Func Offset: 0x37f4
	// Line 2344, Address: 0x3dbfb4, Func Offset: 0x3804
	// Line 2478, Address: 0x3dbfc4, Func Offset: 0x3814
	// Line 2347, Address: 0x3dbfd8, Func Offset: 0x3828
	// Line 2478, Address: 0x3dbfe4, Func Offset: 0x3834
	// Line 2347, Address: 0x3dbff0, Func Offset: 0x3840
	// Line 2478, Address: 0x3dbff4, Func Offset: 0x3844
	// Line 2347, Address: 0x3dc000, Func Offset: 0x3850
	// Line 2478, Address: 0x3dc004, Func Offset: 0x3854
	// Line 2349, Address: 0x3dc010, Func Offset: 0x3860
	// Line 2350, Address: 0x3dc018, Func Offset: 0x3868
	// Line 2348, Address: 0x3dc01c, Func Offset: 0x386c
	// Line 2478, Address: 0x3dc024, Func Offset: 0x3874
	// Line 2349, Address: 0x3dc028, Func Offset: 0x3878
	// Line 2350, Address: 0x3dc02c, Func Offset: 0x387c
	// Line 2478, Address: 0x3dc030, Func Offset: 0x3880
	// Line 2351, Address: 0x3dc038, Func Offset: 0x3888
	// Line 2478, Address: 0x3dc03c, Func Offset: 0x388c
	// Line 2352, Address: 0x3dc044, Func Offset: 0x3894
	// Line 2478, Address: 0x3dc08c, Func Offset: 0x38dc
	// Line 2350, Address: 0x3dc0bc, Func Offset: 0x390c
	// Line 2478, Address: 0x3dc0c8, Func Offset: 0x3918
	// Line 2351, Address: 0x3dc0cc, Func Offset: 0x391c
	// Line 2478, Address: 0x3dc0d0, Func Offset: 0x3920
	// Line 2351, Address: 0x3dc0d4, Func Offset: 0x3924
	// Line 2366, Address: 0x3dc0dc, Func Offset: 0x392c
	// Line 2478, Address: 0x3dc0e0, Func Offset: 0x3930
	// Line 2369, Address: 0x3dc0e8, Func Offset: 0x3938
	// Line 2371, Address: 0x3dc0ec, Func Offset: 0x393c
	// Line 2478, Address: 0x3dc0f4, Func Offset: 0x3944
	// Line 2402, Address: 0x3dc108, Func Offset: 0x3958
	// Line 2405, Address: 0x3dc110, Func Offset: 0x3960
	// Line 2408, Address: 0x3dc118, Func Offset: 0x3968
	// Line 2478, Address: 0x3dc120, Func Offset: 0x3970
	// Line 2416, Address: 0x3dc13c, Func Offset: 0x398c
	// Line 2478, Address: 0x3dc144, Func Offset: 0x3994
	// Line 2418, Address: 0x3dc168, Func Offset: 0x39b8
	// Line 2478, Address: 0x3dc174, Func Offset: 0x39c4
	// Line 2416, Address: 0x3dc17c, Func Offset: 0x39cc
	// Line 2478, Address: 0x3dc180, Func Offset: 0x39d0
	// Line 2417, Address: 0x3dc198, Func Offset: 0x39e8
	// Line 2478, Address: 0x3dc19c, Func Offset: 0x39ec
	// Line 2419, Address: 0x3dc2d8, Func Offset: 0x3b28
	// Line 2441, Address: 0x3dc2e0, Func Offset: 0x3b30
	// Line 2478, Address: 0x3dc2f0, Func Offset: 0x3b40
	// Line 2449, Address: 0x3dc2f4, Func Offset: 0x3b44
	// Line 2478, Address: 0x3dc300, Func Offset: 0x3b50
	// Line 2449, Address: 0x3dc30c, Func Offset: 0x3b5c
	// Line 2478, Address: 0x3dc310, Func Offset: 0x3b60
	// Line 2449, Address: 0x3dc314, Func Offset: 0x3b64
	// Line 2478, Address: 0x3dc318, Func Offset: 0x3b68
	// Line 2449, Address: 0x3dc324, Func Offset: 0x3b74
	// Line 2478, Address: 0x3dc328, Func Offset: 0x3b78
	// Line 2463, Address: 0x3dc350, Func Offset: 0x3ba0
	// Line 2478, Address: 0x3dc360, Func Offset: 0x3bb0
	// Func End, Address: 0x3dc3c0, Func Offset: 0x3c10
}

// xFXanimUVAtomicSetup__FP8RpAtomicb
// Start address: 0x3dc3c0
RpAtomic* xFXanimUVAtomicSetup(RpAtomic* atomic, uint8 dualPass)
{
	RpGeometry* geom;
	int32 numMaterials;
	int32 i;
	RpMaterial* material;
	float32 rx;
	float32 ry;
	float32 ux;
	float32 uy;
	float32 py;
	// Line 1813, Address: 0x3dc3c0, Func Offset: 0
	// Line 1832, Address: 0x3dc3e8, Func Offset: 0x28
	// Line 1834, Address: 0x3dc3f0, Func Offset: 0x30
	// Line 1835, Address: 0x3dc3f4, Func Offset: 0x34
	// Line 1838, Address: 0x3dc3fc, Func Offset: 0x3c
	// Line 1839, Address: 0x3dc400, Func Offset: 0x40
	// Line 1841, Address: 0x3dc410, Func Offset: 0x50
	// Line 1842, Address: 0x3dc41c, Func Offset: 0x5c
	// Line 1844, Address: 0x3dc424, Func Offset: 0x64
	// Line 1848, Address: 0x3dc430, Func Offset: 0x70
	// Line 1844, Address: 0x3dc434, Func Offset: 0x74
	// Line 1846, Address: 0x3dc43c, Func Offset: 0x7c
	// Line 1844, Address: 0x3dc440, Func Offset: 0x80
	// Line 1855, Address: 0x3dc444, Func Offset: 0x84
	// Line 1844, Address: 0x3dc448, Func Offset: 0x88
	// Line 1846, Address: 0x3dc44c, Func Offset: 0x8c
	// Line 1844, Address: 0x3dc450, Func Offset: 0x90
	// Line 1854, Address: 0x3dc454, Func Offset: 0x94
	// Line 1849, Address: 0x3dc458, Func Offset: 0x98
	// Line 1844, Address: 0x3dc45c, Func Offset: 0x9c
	// Line 1848, Address: 0x3dc460, Func Offset: 0xa0
	// Line 1844, Address: 0x3dc464, Func Offset: 0xa4
	// Line 1856, Address: 0x3dc46c, Func Offset: 0xac
	// Line 1844, Address: 0x3dc470, Func Offset: 0xb0
	// Line 1853, Address: 0x3dc474, Func Offset: 0xb4
	// Line 1844, Address: 0x3dc478, Func Offset: 0xb8
	// Line 1849, Address: 0x3dc480, Func Offset: 0xc0
	// Line 1844, Address: 0x3dc484, Func Offset: 0xc4
	// Line 1856, Address: 0x3dc488, Func Offset: 0xc8
	// Line 1844, Address: 0x3dc48c, Func Offset: 0xcc
	// Line 1846, Address: 0x3dc494, Func Offset: 0xd4
	// Line 1844, Address: 0x3dc498, Func Offset: 0xd8
	// Line 1857, Address: 0x3dc4a0, Func Offset: 0xe0
	// Line 1844, Address: 0x3dc4a4, Func Offset: 0xe4
	// Line 1858, Address: 0x3dc4a8, Func Offset: 0xe8
	// Line 1857, Address: 0x3dc4ac, Func Offset: 0xec
	// Line 1847, Address: 0x3dc4b0, Func Offset: 0xf0
	// Line 1855, Address: 0x3dc4b4, Func Offset: 0xf4
	// Line 1853, Address: 0x3dc4b8, Func Offset: 0xf8
	// Line 1857, Address: 0x3dc4bc, Func Offset: 0xfc
	// Line 1847, Address: 0x3dc4c0, Func Offset: 0x100
	// Line 1854, Address: 0x3dc4c4, Func Offset: 0x104
	// Line 1851, Address: 0x3dc4c8, Func Offset: 0x108
	// Line 1860, Address: 0x3dc4cc, Func Offset: 0x10c
	// Line 1862, Address: 0x3dc4d4, Func Offset: 0x114
	// Line 1867, Address: 0x3dc4e8, Func Offset: 0x128
	// Line 1870, Address: 0x3dc4f4, Func Offset: 0x134
	// Line 1867, Address: 0x3dc4f8, Func Offset: 0x138
	// Line 1868, Address: 0x3dc500, Func Offset: 0x140
	// Line 1867, Address: 0x3dc504, Func Offset: 0x144
	// Line 1877, Address: 0x3dc508, Func Offset: 0x148
	// Line 1867, Address: 0x3dc50c, Func Offset: 0x14c
	// Line 1868, Address: 0x3dc510, Func Offset: 0x150
	// Line 1867, Address: 0x3dc514, Func Offset: 0x154
	// Line 1876, Address: 0x3dc518, Func Offset: 0x158
	// Line 1871, Address: 0x3dc51c, Func Offset: 0x15c
	// Line 1867, Address: 0x3dc520, Func Offset: 0x160
	// Line 1870, Address: 0x3dc524, Func Offset: 0x164
	// Line 1867, Address: 0x3dc528, Func Offset: 0x168
	// Line 1878, Address: 0x3dc530, Func Offset: 0x170
	// Line 1867, Address: 0x3dc534, Func Offset: 0x174
	// Line 1882, Address: 0x3dc538, Func Offset: 0x178
	// Line 1867, Address: 0x3dc53c, Func Offset: 0x17c
	// Line 1875, Address: 0x3dc540, Func Offset: 0x180
	// Line 1867, Address: 0x3dc544, Func Offset: 0x184
	// Line 1882, Address: 0x3dc548, Func Offset: 0x188
	// Line 1871, Address: 0x3dc54c, Func Offset: 0x18c
	// Line 1867, Address: 0x3dc550, Func Offset: 0x190
	// Line 1878, Address: 0x3dc554, Func Offset: 0x194
	// Line 1867, Address: 0x3dc558, Func Offset: 0x198
	// Line 1868, Address: 0x3dc560, Func Offset: 0x1a0
	// Line 1867, Address: 0x3dc564, Func Offset: 0x1a4
	// Line 1879, Address: 0x3dc56c, Func Offset: 0x1ac
	// Line 1867, Address: 0x3dc570, Func Offset: 0x1b0
	// Line 1880, Address: 0x3dc574, Func Offset: 0x1b4
	// Line 1882, Address: 0x3dc578, Func Offset: 0x1b8
	// Line 1879, Address: 0x3dc57c, Func Offset: 0x1bc
	// Line 1869, Address: 0x3dc580, Func Offset: 0x1c0
	// Line 1877, Address: 0x3dc584, Func Offset: 0x1c4
	// Line 1875, Address: 0x3dc588, Func Offset: 0x1c8
	// Line 1879, Address: 0x3dc58c, Func Offset: 0x1cc
	// Line 1869, Address: 0x3dc590, Func Offset: 0x1d0
	// Line 1876, Address: 0x3dc594, Func Offset: 0x1d4
	// Line 1873, Address: 0x3dc598, Func Offset: 0x1d8
	// Line 1882, Address: 0x3dc59c, Func Offset: 0x1dc
	// Line 1883, Address: 0x3dc5a4, Func Offset: 0x1e4
	// Line 1884, Address: 0x3dc5bc, Func Offset: 0x1fc
	// Line 1887, Address: 0x3dc5c8, Func Offset: 0x208
	// Line 1893, Address: 0x3dc5dc, Func Offset: 0x21c
	// Line 1894, Address: 0x3dc5e4, Func Offset: 0x224
	// Line 1908, Address: 0x3dc5f8, Func Offset: 0x238
	// Line 1911, Address: 0x3dc608, Func Offset: 0x248
	// Line 1865, Address: 0x3dc610, Func Offset: 0x250
	// Line 1890, Address: 0x3dc618, Func Offset: 0x258
	// Line 1912, Address: 0x3dc61c, Func Offset: 0x25c
	// Func End, Address: 0x3dc644, Func Offset: 0x284
}

// xFXanimUV2PSetTexture__FP9RwTexture
// Start address: 0x3dc650
void xFXanimUV2PSetTexture(RwTexture* texture)
{
	// Line 1805, Address: 0x3dc650, Func Offset: 0
	// Func End, Address: 0x3dc658, Func Offset: 0x8
}

// xFXAtomicEnvMapSetup__FP8RpAtomicUif
// Start address: 0x3dc660
RpAtomic* xFXAtomicEnvMapSetup(RpAtomic* atomic, uint32 envmapID, float32 shininess)
{
	RwTexture* env;
	float32 tmp;
	RpSkin* skin;
	// Line 1395, Address: 0x3dc660, Func Offset: 0
	// Line 1396, Address: 0x3dc678, Func Offset: 0x18
	// Line 1397, Address: 0x3dc690, Func Offset: 0x30
	// Line 1398, Address: 0x3dc698, Func Offset: 0x38
	// Line 1399, Address: 0x3dc6b8, Func Offset: 0x58
	// Line 1400, Address: 0x3dc6bc, Func Offset: 0x5c
	// Line 1401, Address: 0x3dc6c0, Func Offset: 0x60
	// Line 1402, Address: 0x3dc6d8, Func Offset: 0x78
	// Line 1406, Address: 0x3dc6dc, Func Offset: 0x7c
	// Line 1407, Address: 0x3dc6e4, Func Offset: 0x84
	// Line 1408, Address: 0x3dc6ec, Func Offset: 0x8c
	// Line 1410, Address: 0x3dc6f4, Func Offset: 0x94
	// Line 1414, Address: 0x3dc6fc, Func Offset: 0x9c
	// Line 1415, Address: 0x3dc700, Func Offset: 0xa0
	// Func End, Address: 0x3dc71c, Func Offset: 0xbc
}

// xFXBubbleRender__FP8RpAtomic
// Start address: 0x3dc720
RpAtomic* xFXBubbleRender(RpAtomic* atomic)
{
	RwCullMode cmode;
	xFXBubbleParams* bp;
	// Line 1235, Address: 0x3dc720, Func Offset: 0
	// Line 1239, Address: 0x3dc724, Func Offset: 0x4
	// Line 1235, Address: 0x3dc728, Func Offset: 0x8
	// Line 1239, Address: 0x3dc72c, Func Offset: 0xc
	// Line 1235, Address: 0x3dc730, Func Offset: 0x10
	// Line 1239, Address: 0x3dc744, Func Offset: 0x24
	// Line 1235, Address: 0x3dc748, Func Offset: 0x28
	// Line 1237, Address: 0x3dc750, Func Offset: 0x30
	// Line 1239, Address: 0x3dc758, Func Offset: 0x38
	// Line 1237, Address: 0x3dc75c, Func Offset: 0x3c
	// Line 1239, Address: 0x3dc768, Func Offset: 0x48
	// Line 1240, Address: 0x3dc774, Func Offset: 0x54
	// Line 1239, Address: 0x3dc778, Func Offset: 0x58
	// Line 1240, Address: 0x3dc77c, Func Offset: 0x5c
	// Line 1244, Address: 0x3dc788, Func Offset: 0x68
	// Line 1245, Address: 0x3dc79c, Func Offset: 0x7c
	// Line 1246, Address: 0x3dc7a8, Func Offset: 0x88
	// Line 1247, Address: 0x3dc7b8, Func Offset: 0x98
	// Line 1249, Address: 0x3dc7d8, Func Offset: 0xb8
	// Line 1251, Address: 0x3dc7e4, Func Offset: 0xc4
	// Line 1253, Address: 0x3dc7f8, Func Offset: 0xd8
	// Line 1254, Address: 0x3dc804, Func Offset: 0xe4
	// Line 1264, Address: 0x3dc818, Func Offset: 0xf8
	// Line 1265, Address: 0x3dc824, Func Offset: 0x104
	// Line 1266, Address: 0x3dc838, Func Offset: 0x118
	// Line 1267, Address: 0x3dc85c, Func Offset: 0x13c
	// Line 1268, Address: 0x3dc864, Func Offset: 0x144
	// Line 1271, Address: 0x3dc8d8, Func Offset: 0x1b8
	// Line 1274, Address: 0x3dc8e8, Func Offset: 0x1c8
	// Line 1276, Address: 0x3dc8f8, Func Offset: 0x1d8
	// Line 1256, Address: 0x3dc930, Func Offset: 0x210
	// Line 1276, Address: 0x3dc934, Func Offset: 0x214
	// Line 1256, Address: 0x3dc950, Func Offset: 0x230
	// Line 1276, Address: 0x3dc954, Func Offset: 0x234
	// Line 1260, Address: 0x3dc97c, Func Offset: 0x25c
	// Line 1276, Address: 0x3dc980, Func Offset: 0x260
	// Line 1277, Address: 0x3dc990, Func Offset: 0x270
	// Func End, Address: 0x3dc9b4, Func Offset: 0x294
}

// MaterialSetEnvMap2__FP10RpMaterialPv
// Start address: 0x3dc9c0
RpMaterial* MaterialSetEnvMap2(RpMaterial* material, void* data)
{
	RwTexture* texture;
	RwFrame* frame;
	// Line 1187, Address: 0x3dc9c0, Func Offset: 0
	// Line 1191, Address: 0x3dc9d4, Func Offset: 0x14
	// Line 1212, Address: 0x3dc9e0, Func Offset: 0x20
	// Line 1196, Address: 0x3dc9e4, Func Offset: 0x24
	// Line 1212, Address: 0x3dc9e8, Func Offset: 0x28
	// Line 1214, Address: 0x3dca20, Func Offset: 0x60
	// Line 1216, Address: 0x3dca2c, Func Offset: 0x6c
	// Line 1225, Address: 0x3dca44, Func Offset: 0x84
	// Line 1226, Address: 0x3dca48, Func Offset: 0x88
	// Func End, Address: 0x3dca60, Func Offset: 0xa0
}

// MaterialSetEnvMap__FP10RpMaterialPv
// Start address: 0x3dca60
RpMaterial* MaterialSetEnvMap(RpMaterial* material, void* data)
{
	RwTexture* texture;
	RwFrame* frame;
	// Line 1134, Address: 0x3dca60, Func Offset: 0
	// Line 1137, Address: 0x3dca74, Func Offset: 0x14
	// Line 1144, Address: 0x3dca7c, Func Offset: 0x1c
	// Line 1148, Address: 0x3dca88, Func Offset: 0x28
	// Line 1151, Address: 0x3dca8c, Func Offset: 0x2c
	// Line 1155, Address: 0x3dca94, Func Offset: 0x34
	// Line 1157, Address: 0x3dcab0, Func Offset: 0x50
	// Line 1158, Address: 0x3dcab8, Func Offset: 0x58
	// Line 1166, Address: 0x3dcac0, Func Offset: 0x60
	// Line 1168, Address: 0x3dcac8, Func Offset: 0x68
	// Line 1172, Address: 0x3dcad4, Func Offset: 0x74
	// Line 1174, Address: 0x3dcaf0, Func Offset: 0x90
	// Line 1139, Address: 0x3dcaf8, Func Offset: 0x98
	// Line 1174, Address: 0x3dcb00, Func Offset: 0xa0
	// Line 1163, Address: 0x3dcb04, Func Offset: 0xa4
	// Line 1177, Address: 0x3dcb0c, Func Offset: 0xac
	// Line 1181, Address: 0x3dcb14, Func Offset: 0xb4
	// Line 1182, Address: 0x3dcb18, Func Offset: 0xb8
	// Func End, Address: 0x3dcb30, Func Offset: 0xd0
}

// MaterialSetShininess__FP10RpMaterialPv
// Start address: 0x3dcb30
RpMaterial* MaterialSetShininess(RpMaterial* material)
{
	RpMatFXMaterialFlags flags;
	// Line 1099, Address: 0x3dcb30, Func Offset: 0
	// Line 1102, Address: 0x3dcb3c, Func Offset: 0xc
	// Line 1104, Address: 0x3dcb44, Func Offset: 0x14
	// Line 1109, Address: 0x3dcb54, Func Offset: 0x24
	// Line 1110, Address: 0x3dcb70, Func Offset: 0x40
	// Func End, Address: 0x3dcb80, Func Offset: 0x50
}

// AtomicDisableMatFX__FP8RpAtomic
// Start address: 0x3dcb80
RpAtomic* AtomicDisableMatFX(RpAtomic* atomic)
{
	RpGeometry* geometry;
	// Line 1081, Address: 0x3dcb80, Func Offset: 0
	// Line 1082, Address: 0x3dcb8c, Func Offset: 0xc
	// Line 1084, Address: 0x3dcb94, Func Offset: 0x14
	// Line 1085, Address: 0x3dcb98, Func Offset: 0x18
	// Line 1087, Address: 0x3dcba0, Func Offset: 0x20
	// Line 1090, Address: 0x3dcbb0, Func Offset: 0x30
	// Line 1091, Address: 0x3dcbb4, Func Offset: 0x34
	// Func End, Address: 0x3dcbc4, Func Offset: 0x44
}

// MaterialDisableMatFX__FP10RpMaterialPv
// Start address: 0x3dcbd0
RpMaterial* MaterialDisableMatFX(RpMaterial* material)
{
	// Line 1073, Address: 0x3dcbd0, Func Offset: 0
	// Line 1074, Address: 0x3dcbd4, Func Offset: 0x4
	// Line 1073, Address: 0x3dcbd8, Func Offset: 0x8
	// Line 1074, Address: 0x3dcbe0, Func Offset: 0x10
	// Line 1076, Address: 0x3dcbe8, Func Offset: 0x18
	// Line 1077, Address: 0x3dcbec, Func Offset: 0x1c
	// Func End, Address: 0x3dcbfc, Func Offset: 0x2c
}

// xFXUpdate__Ff
// Start address: 0x3dcc00
void xFXUpdate(float32 dt)
{
	// Line 904, Address: 0x3dcc00, Func Offset: 0
	// Line 906, Address: 0x3dcc14, Func Offset: 0x14
	// Line 907, Address: 0x3dcc1c, Func Offset: 0x1c
	// Line 909, Address: 0x3dcc58, Func Offset: 0x58
	// Line 948, Address: 0x3dcc60, Func Offset: 0x60
	// Func End, Address: 0x3dcc78, Func Offset: 0x78
}

// xFX_SceneExit__FP7RpWorld
// Start address: 0x3dcc80
void xFX_SceneExit()
{
	// Line 901, Address: 0x3dcc80, Func Offset: 0
	// Func End, Address: 0x3dcc88, Func Offset: 0x8
}

// xFX_SceneEnter__FP7RpWorld
// Start address: 0x3dcc90
void xFX_SceneEnter(RpWorld* world)
{
	int32 i;
	int32 num;
	xSurface* sp;
	zSurfaceProps* pp;
	zSurfMatFX* fxp;
	RpMaterial* mp;
	RwTexture* env;
	RwTexture* bump;
	RwTexture* env;
	RwTexture* bump;
	xScene* sc;
	xEnt* ent;
	RpAtomic*(*tmp)(RpAtomic*);
	uint32 bubble;
	// Line 765, Address: 0x3dcc90, Func Offset: 0
	// Line 773, Address: 0x3dccc4, Func Offset: 0x34
	// Line 774, Address: 0x3dccc8, Func Offset: 0x38
	// Line 775, Address: 0x3dccd8, Func Offset: 0x48
	// Line 776, Address: 0x3dcce0, Func Offset: 0x50
	// Line 777, Address: 0x3dcce4, Func Offset: 0x54
	// Line 780, Address: 0x3dccf8, Func Offset: 0x68
	// Line 782, Address: 0x3dccfc, Func Offset: 0x6c
	// Line 786, Address: 0x3dcd04, Func Offset: 0x74
	// Line 789, Address: 0x3dcd10, Func Offset: 0x80
	// Line 791, Address: 0x3dcd1c, Func Offset: 0x8c
	// Line 797, Address: 0x3dcd28, Func Offset: 0x98
	// Line 799, Address: 0x3dcd34, Func Offset: 0xa4
	// Line 811, Address: 0x3dcd40, Func Offset: 0xb0
	// Line 822, Address: 0x3dcd4c, Func Offset: 0xbc
	// Line 823, Address: 0x3dcd5c, Func Offset: 0xcc
	// Line 824, Address: 0x3dcd68, Func Offset: 0xd8
	// Line 823, Address: 0x3dcd6c, Func Offset: 0xdc
	// Line 824, Address: 0x3dcd70, Func Offset: 0xe0
	// Line 825, Address: 0x3dcd78, Func Offset: 0xe8
	// Line 832, Address: 0x3dcd88, Func Offset: 0xf8
	// Line 839, Address: 0x3dcdfc, Func Offset: 0x16c
	// Line 843, Address: 0x3dce0c, Func Offset: 0x17c
	// Line 853, Address: 0x3dce14, Func Offset: 0x184
	// Line 854, Address: 0x3dce28, Func Offset: 0x198
	// Line 859, Address: 0x3dce2c, Func Offset: 0x19c
	// Line 854, Address: 0x3dce30, Func Offset: 0x1a0
	// Line 859, Address: 0x3dce34, Func Offset: 0x1a4
	// Line 864, Address: 0x3dce3c, Func Offset: 0x1ac
	// Line 868, Address: 0x3dce40, Func Offset: 0x1b0
	// Line 869, Address: 0x3dce4c, Func Offset: 0x1bc
	// Line 870, Address: 0x3dce50, Func Offset: 0x1c0
	// Line 871, Address: 0x3dce58, Func Offset: 0x1c8
	// Line 872, Address: 0x3dce60, Func Offset: 0x1d0
	// Line 873, Address: 0x3dce68, Func Offset: 0x1d8
	// Line 869, Address: 0x3dce70, Func Offset: 0x1e0
	// Line 874, Address: 0x3dce74, Func Offset: 0x1e4
	// Line 870, Address: 0x3dce78, Func Offset: 0x1e8
	// Line 871, Address: 0x3dce7c, Func Offset: 0x1ec
	// Line 870, Address: 0x3dce80, Func Offset: 0x1f0
	// Line 872, Address: 0x3dce84, Func Offset: 0x1f4
	// Line 871, Address: 0x3dce88, Func Offset: 0x1f8
	// Line 870, Address: 0x3dce8c, Func Offset: 0x1fc
	// Line 871, Address: 0x3dce90, Func Offset: 0x200
	// Line 872, Address: 0x3dce94, Func Offset: 0x204
	// Line 873, Address: 0x3dce9c, Func Offset: 0x20c
	// Line 874, Address: 0x3dcea4, Func Offset: 0x214
	// Line 873, Address: 0x3dcea8, Func Offset: 0x218
	// Line 874, Address: 0x3dceac, Func Offset: 0x21c
	// Line 875, Address: 0x3dceb4, Func Offset: 0x224
	// Line 874, Address: 0x3dceb8, Func Offset: 0x228
	// Line 875, Address: 0x3dcebc, Func Offset: 0x22c
	// Line 877, Address: 0x3dcec8, Func Offset: 0x238
	// Line 878, Address: 0x3dced0, Func Offset: 0x240
	// Line 879, Address: 0x3dced8, Func Offset: 0x248
	// Line 883, Address: 0x3dcf0c, Func Offset: 0x27c
	// Line 897, Address: 0x3dcf28, Func Offset: 0x298
	// Line 800, Address: 0x3dcf44, Func Offset: 0x2b4
	// Line 897, Address: 0x3dcf48, Func Offset: 0x2b8
	// Line 806, Address: 0x3dcf5c, Func Offset: 0x2cc
	// Line 897, Address: 0x3dcf68, Func Offset: 0x2d8
	// Line 812, Address: 0x3dcf84, Func Offset: 0x2f4
	// Line 897, Address: 0x3dcf88, Func Offset: 0x2f8
	// Line 817, Address: 0x3dcfb0, Func Offset: 0x320
	// Line 897, Address: 0x3dcfb4, Func Offset: 0x324
	// Line 817, Address: 0x3dcfc0, Func Offset: 0x330
	// Line 897, Address: 0x3dcfd0, Func Offset: 0x340
	// Line 817, Address: 0x3dcfd8, Func Offset: 0x348
	// Line 897, Address: 0x3dcfe0, Func Offset: 0x350
	// Line 861, Address: 0x3dd02c, Func Offset: 0x39c
	// Line 897, Address: 0x3dd030, Func Offset: 0x3a0
	// Func End, Address: 0x3dd0b4, Func Offset: 0x424
}

// xFXRingRender__Fv
// Start address: 0x3dd0c0
void xFXRingRender()
{
	int32 i;
	xFXRing* ring;
	// Line 458, Address: 0x3dd0c0, Func Offset: 0
	// Line 462, Address: 0x3dd0d0, Func Offset: 0x10
	// Line 460, Address: 0x3dd0d4, Func Offset: 0x14
	// Line 463, Address: 0x3dd0dc, Func Offset: 0x1c
	// Line 464, Address: 0x3dd0f4, Func Offset: 0x34
	// Line 465, Address: 0x3dd0f8, Func Offset: 0x38
	// Line 466, Address: 0x3dd108, Func Offset: 0x48
	// Func End, Address: 0x3dd134, Func Offset: 0x74
}

// xFXRingUpdate__Ff
// Start address: 0x3dd140
void xFXRingUpdate(float32 dt)
{
	xFXRing* ring;
	int32 i;
	// Line 437, Address: 0x3dd140, Func Offset: 0
	// Line 435, Address: 0x3dd144, Func Offset: 0x4
	// Line 437, Address: 0x3dd148, Func Offset: 0x8
	// Line 447, Address: 0x3dd168, Func Offset: 0x28
	// Line 440, Address: 0x3dd16c, Func Offset: 0x2c
	// Line 447, Address: 0x3dd170, Func Offset: 0x30
	// Line 441, Address: 0x3dd174, Func Offset: 0x34
	// Line 444, Address: 0x3dd18c, Func Offset: 0x4c
	// Line 445, Address: 0x3dd19c, Func Offset: 0x5c
	// Line 447, Address: 0x3dd1a4, Func Offset: 0x64
	// Line 448, Address: 0x3dd1b8, Func Offset: 0x78
	// Line 449, Address: 0x3dd1c0, Func Offset: 0x80
	// Line 450, Address: 0x3dd1c8, Func Offset: 0x88
	// Line 452, Address: 0x3dd1cc, Func Offset: 0x8c
	// Line 454, Address: 0x3dd1d0, Func Offset: 0x90
	// Line 455, Address: 0x3dd1e0, Func Offset: 0xa0
	// Func End, Address: 0x3dd1e8, Func Offset: 0xa8
}

// xFXRingCreate__FPC5xVec3PC7xFXRing
// Start address: 0x3dd1f0
xFXRing* xFXRingCreate(xVec3* pos, xFXRing* params)
{
	xFXRing* ring;
	int32 i;
	// Line 410, Address: 0x3dd1f0, Func Offset: 0
	// Line 411, Address: 0x3dd204, Func Offset: 0x14
	// Line 413, Address: 0x3dd208, Func Offset: 0x18
	// Line 418, Address: 0x3dd218, Func Offset: 0x28
	// Line 417, Address: 0x3dd21c, Func Offset: 0x2c
	// Line 418, Address: 0x3dd220, Func Offset: 0x30
	// Line 420, Address: 0x3dd244, Func Offset: 0x54
	// Line 421, Address: 0x3dd250, Func Offset: 0x60
	// Line 423, Address: 0x3dd260, Func Offset: 0x70
	// Line 421, Address: 0x3dd264, Func Offset: 0x74
	// Line 423, Address: 0x3dd268, Func Offset: 0x78
	// Line 422, Address: 0x3dd26c, Func Offset: 0x7c
	// Line 423, Address: 0x3dd270, Func Offset: 0x80
	// Line 422, Address: 0x3dd274, Func Offset: 0x84
	// Line 424, Address: 0x3dd27c, Func Offset: 0x8c
	// Line 423, Address: 0x3dd288, Func Offset: 0x98
	// Line 427, Address: 0x3dd28c, Func Offset: 0x9c
	// Line 423, Address: 0x3dd290, Func Offset: 0xa0
	// Line 424, Address: 0x3dd298, Func Offset: 0xa8
	// Line 425, Address: 0x3dd2ac, Func Offset: 0xbc
	// Line 426, Address: 0x3dd2c0, Func Offset: 0xd0
	// Line 427, Address: 0x3dd2d4, Func Offset: 0xe4
	// Line 429, Address: 0x3dd2dc, Func Offset: 0xec
	// Line 430, Address: 0x3dd2ec, Func Offset: 0xfc
	// Line 414, Address: 0x3dd2f4, Func Offset: 0x104
	// Line 430, Address: 0x3dd300, Func Offset: 0x110
	// Line 421, Address: 0x3dd318, Func Offset: 0x128
	// Line 431, Address: 0x3dd320, Func Offset: 0x130
	// Func End, Address: 0x3dd334, Func Offset: 0x144
}

// DrawRing__FP7xFXRing
// Start address: 0x3dd340
void DrawRing(xFXRing* m)
{
	float32 dt;
	float32 radius;
	float32 height;
	float32 tilt;
	float32 oradius;
	xVec3* center;
	RxObjSpace3DVertex* Im3DBuffer;
	RxObjSpace3DVertex* imv;
	_SDRenderState old_rendState;
	float32 oour;
	int32 i;
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
	float32 u;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	// Line 256, Address: 0x3dd340, Func Offset: 0
	// Line 259, Address: 0x3dd348, Func Offset: 0x8
	// Line 256, Address: 0x3dd34c, Func Offset: 0xc
	// Line 259, Address: 0x3dd3a4, Func Offset: 0x64
	// Line 263, Address: 0x3dd3b0, Func Offset: 0x70
	// Line 264, Address: 0x3dd3bc, Func Offset: 0x7c
	// Line 266, Address: 0x3dd3c4, Func Offset: 0x84
	// Line 270, Address: 0x3dd3c8, Func Offset: 0x88
	// Line 271, Address: 0x3dd3d0, Func Offset: 0x90
	// Line 273, Address: 0x3dd3d8, Func Offset: 0x98
	// Line 266, Address: 0x3dd3dc, Func Offset: 0x9c
	// Line 270, Address: 0x3dd3e0, Func Offset: 0xa0
	// Line 271, Address: 0x3dd3e8, Func Offset: 0xa8
	// Line 273, Address: 0x3dd3ec, Func Offset: 0xac
	// Line 271, Address: 0x3dd3f0, Func Offset: 0xb0
	// Line 273, Address: 0x3dd3f4, Func Offset: 0xb4
	// Line 274, Address: 0x3dd3fc, Func Offset: 0xbc
	// Line 275, Address: 0x3dd408, Func Offset: 0xc8
	// Line 274, Address: 0x3dd40c, Func Offset: 0xcc
	// Line 275, Address: 0x3dd410, Func Offset: 0xd0
	// Line 285, Address: 0x3dd41c, Func Offset: 0xdc
	// Line 277, Address: 0x3dd424, Func Offset: 0xe4
	// Line 279, Address: 0x3dd428, Func Offset: 0xe8
	// Line 278, Address: 0x3dd42c, Func Offset: 0xec
	// Line 277, Address: 0x3dd430, Func Offset: 0xf0
	// Line 280, Address: 0x3dd434, Func Offset: 0xf4
	// Line 283, Address: 0x3dd438, Func Offset: 0xf8
	// Line 282, Address: 0x3dd43c, Func Offset: 0xfc
	// Line 289, Address: 0x3dd440, Func Offset: 0x100
	// Line 290, Address: 0x3dd44c, Func Offset: 0x10c
	// Line 293, Address: 0x3dd454, Func Offset: 0x114
	// Line 296, Address: 0x3dd468, Func Offset: 0x128
	// Line 299, Address: 0x3dd4dc, Func Offset: 0x19c
	// Line 301, Address: 0x3dd508, Func Offset: 0x1c8
	// Line 303, Address: 0x3dd514, Func Offset: 0x1d4
	// Line 304, Address: 0x3dd51c, Func Offset: 0x1dc
	// Line 307, Address: 0x3dd520, Func Offset: 0x1e0
	// Line 309, Address: 0x3dd534, Func Offset: 0x1f4
	// Line 311, Address: 0x3dd598, Func Offset: 0x258
	// Line 312, Address: 0x3dd5a4, Func Offset: 0x264
	// Line 319, Address: 0x3dd5b4, Func Offset: 0x274
	// Line 314, Address: 0x3dd5b8, Func Offset: 0x278
	// Line 316, Address: 0x3dd5cc, Func Offset: 0x28c
	// Line 317, Address: 0x3dd5d4, Func Offset: 0x294
	// Line 319, Address: 0x3dd5dc, Func Offset: 0x29c
	// Line 318, Address: 0x3dd5e0, Func Offset: 0x2a0
	// Line 322, Address: 0x3dd5e4, Func Offset: 0x2a4
	// Line 323, Address: 0x3dd654, Func Offset: 0x314
	// Line 324, Address: 0x3dd6c4, Func Offset: 0x384
	// Line 325, Address: 0x3dd734, Func Offset: 0x3f4
	// Line 326, Address: 0x3dd79c, Func Offset: 0x45c
	// Line 325, Address: 0x3dd7a0, Func Offset: 0x460
	// Line 326, Address: 0x3dd7a4, Func Offset: 0x464
	// Line 327, Address: 0x3dd7ac, Func Offset: 0x46c
	// Line 328, Address: 0x3dd7b0, Func Offset: 0x470
	// Line 329, Address: 0x3dd7c4, Func Offset: 0x484
	// Line 330, Address: 0x3dd7c8, Func Offset: 0x488
	// Line 331, Address: 0x3dd7dc, Func Offset: 0x49c
	// Line 332, Address: 0x3dd7e0, Func Offset: 0x4a0
	// Line 333, Address: 0x3dd7f4, Func Offset: 0x4b4
	// Line 343, Address: 0x3dd7f8, Func Offset: 0x4b8
	// Line 344, Address: 0x3dd83c, Func Offset: 0x4fc
	// Line 345, Address: 0x3dd87c, Func Offset: 0x53c
	// Line 346, Address: 0x3dd8bc, Func Offset: 0x57c
	// Line 354, Address: 0x3dd904, Func Offset: 0x5c4
	// Line 371, Address: 0x3dd908, Func Offset: 0x5c8
	// Line 354, Address: 0x3dd90c, Func Offset: 0x5cc
	// Line 371, Address: 0x3dd910, Func Offset: 0x5d0
	// Line 354, Address: 0x3dd914, Func Offset: 0x5d4
	// Line 355, Address: 0x3dd918, Func Offset: 0x5d8
	// Line 349, Address: 0x3dd924, Func Offset: 0x5e4
	// Line 356, Address: 0x3dd928, Func Offset: 0x5e8
	// Line 389, Address: 0x3dd930, Func Offset: 0x5f0
	// Line 356, Address: 0x3dd934, Func Offset: 0x5f4
	// Line 358, Address: 0x3dd938, Func Offset: 0x5f8
	// Line 359, Address: 0x3dd944, Func Offset: 0x604
	// Line 349, Address: 0x3dd94c, Func Offset: 0x60c
	// Line 387, Address: 0x3dd950, Func Offset: 0x610
	// Line 349, Address: 0x3dd954, Func Offset: 0x614
	// Line 359, Address: 0x3dd958, Func Offset: 0x618
	// Line 360, Address: 0x3dd95c, Func Offset: 0x61c
	// Line 362, Address: 0x3dd968, Func Offset: 0x628
	// Line 363, Address: 0x3dd970, Func Offset: 0x630
	// Line 364, Address: 0x3dd974, Func Offset: 0x634
	// Line 366, Address: 0x3dd978, Func Offset: 0x638
	// Line 367, Address: 0x3dd97c, Func Offset: 0x63c
	// Line 368, Address: 0x3dd980, Func Offset: 0x640
	// Line 370, Address: 0x3dd984, Func Offset: 0x644
	// Line 387, Address: 0x3dd988, Func Offset: 0x648
	// Line 371, Address: 0x3dd98c, Func Offset: 0x64c
	// Line 387, Address: 0x3dd990, Func Offset: 0x650
	// Line 372, Address: 0x3dd994, Func Offset: 0x654
	// Line 388, Address: 0x3dd998, Func Offset: 0x658
	// Line 374, Address: 0x3dd99c, Func Offset: 0x65c
	// Line 388, Address: 0x3dd9a0, Func Offset: 0x660
	// Line 375, Address: 0x3dd9a4, Func Offset: 0x664
	// Line 376, Address: 0x3dd9a8, Func Offset: 0x668
	// Line 378, Address: 0x3dd9ac, Func Offset: 0x66c
	// Line 379, Address: 0x3dd9bc, Func Offset: 0x67c
	// Line 380, Address: 0x3dd9cc, Func Offset: 0x68c
	// Line 381, Address: 0x3dd9dc, Func Offset: 0x69c
	// Line 382, Address: 0x3dd9ec, Func Offset: 0x6ac
	// Line 383, Address: 0x3dd9fc, Func Offset: 0x6bc
	// Line 385, Address: 0x3dda0c, Func Offset: 0x6cc
	// Line 389, Address: 0x3dda18, Func Offset: 0x6d8
	// Line 394, Address: 0x3dda2c, Func Offset: 0x6ec
	// Line 396, Address: 0x3dda34, Func Offset: 0x6f4
	// Line 397, Address: 0x3dda3c, Func Offset: 0x6fc
	// Line 404, Address: 0x3dda40, Func Offset: 0x700
	// Line 406, Address: 0x3dda4c, Func Offset: 0x70c
	// Line 303, Address: 0x3dda58, Func Offset: 0x718
	// Line 406, Address: 0x3dda5c, Func Offset: 0x71c
	// Line 396, Address: 0x3ddde8, Func Offset: 0xaa8
	// Line 406, Address: 0x3dddec, Func Offset: 0xaac
	// Line 407, Address: 0x3de194, Func Offset: 0xe54
	// Func End, Address: 0x3de1f4, Func Offset: 0xeb4
}

// xFXInit__Fv
// Start address: 0x3de200
void xFXInit()
{
	RpLight* light;
	RwFrame* frame;
	// Line 133, Address: 0x3de200, Func Offset: 0
	// Line 134, Address: 0x3de210, Func Offset: 0x10
	// Line 136, Address: 0x3de21c, Func Offset: 0x1c
	// Line 138, Address: 0x3de220, Func Offset: 0x20
	// Line 144, Address: 0x3de22c, Func Offset: 0x2c
	// Line 145, Address: 0x3de238, Func Offset: 0x38
	// Line 149, Address: 0x3de240, Func Offset: 0x40
	// Line 150, Address: 0x3de248, Func Offset: 0x48
	// Line 152, Address: 0x3de250, Func Offset: 0x50
	// Line 154, Address: 0x3de25c, Func Offset: 0x5c
	// Line 159, Address: 0x3de2c0, Func Offset: 0xc0
	// Line 160, Address: 0x3de2c8, Func Offset: 0xc8
	// Line 164, Address: 0x3de2d0, Func Offset: 0xd0
	// Line 166, Address: 0x3de2dc, Func Offset: 0xdc
	// Line 169, Address: 0x3de2e8, Func Offset: 0xe8
	// Line 171, Address: 0x3de308, Func Offset: 0x108
	// Line 169, Address: 0x3de30c, Func Offset: 0x10c
	// Line 171, Address: 0x3de310, Func Offset: 0x110
	// Line 177, Address: 0x3de344, Func Offset: 0x144
	// Line 169, Address: 0x3de36c, Func Offset: 0x16c
	// Line 177, Address: 0x3de370, Func Offset: 0x170
	// Line 171, Address: 0x3de398, Func Offset: 0x198
	// Line 177, Address: 0x3de3a0, Func Offset: 0x1a0
	// Func End, Address: 0x3de3b4, Func Offset: 0x1b4
}

