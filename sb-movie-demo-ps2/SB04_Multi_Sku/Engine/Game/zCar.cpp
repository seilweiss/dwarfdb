



void SoundUpdate();
void SoundPlayCollision(eCollisionType type, float32 strength);
void SoundPlayHorn();
void SoundInitAssetTable();
void ModelSwap(eDamage newDamageLevel, uint8 swapEffects);
void StreakFX(xEnt* ent, float32 dt);
void DriveSurfaceFXInternal(xModelInstance* pModel, float32 dt, zDrivingSurf collisionType);
void RenderBrakeLights(xModelInstance* pModel);
void zCarRenderOneBrakeLight(xMat4x3* pMat);
void UpdateEffects(float32 dt);
void UpdateVirtualBunTop(float32 dt);
xAnimTable* CreateAnimTable();
uint32 JumpEndedCB();
uint32 JumpStartedCB();
uint32 AnimDefaultCB(xAnimSingle* anim);
uint32 DamageSpinCompleteCB(xAnimSingle* anim);
uint32 DeathCheck();
uint32 FailedCheck();
uint32 SuccessCheck();
uint32 SpinRightCheck();
uint32 SpinLeftCheck();
uint32 CrashCheck();
uint32 JumpEndCheck();
uint32 JumpCheck();
uint32 ReverseCheck();
uint32 StartBoostingCheck();
uint32 StartDrivingSlippyCheck();
uint32 StartDrivingCheck();
uint32 IdleCheck();
void UpdateAnimState(xEnt* pEnt);
void ApplyCollisionRebounds(xVec3* pVelocity);
void DepenetrateCollisionList(xVec3* pPosition);
void PreventPoppingThroughWorld(xVec3* pStartPosition, xVec3* pEndPosition, xVec3* pVelocity);
void SphereCollision(xVec3* pNewCarPosition, xVec3* pVelocity, uint8* pInGroundContact, float32* pShockExtension, xVec3* pGroundNormal);
uint8 __cl(xEnt& ent);
void UpdateGroundCharacteristics();
void CalculateIdealOrientation(float32 yaw, xMat3x3* pIdealOrientation, xVec3* pGroundNormal);
void CarUpdate(float32 dt, float32 steer, uint8 accelOn, uint8 brakeOn, uint8 boostOn);
void StartBoost();
uint32* GetVarNitros();
uint8 CanPickupNitros();
void AddNitros(int32 nitros);
xMat4x3* GetMatrix();
void SetMatrix(xMat4x3* pSource);
void GiveHealth(int32 health);
void SetFullHealth();
void TakeDamage(uint8 spinClockwise);
void HandleEvent(xBase* from, xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget, uint32 UNUSEDtoParamWidgetID);
void Exit();
void Reset(xEnt* pCarEnt, float32 initialYaw, xVec3* pPosition);
void Initialize(xEnt* pCarEnt);
void SceneInit();

// SoundUpdate__4zCarFv
// Start address: 0x387920
void zCar::SoundUpdate()
{
	eDamage carDamage;
	uint8 wasPlaying;
	float32 maxFreq;
	float32 freq;
	float32 freq;
	// Line 2947, Address: 0x387920, Func Offset: 0
	// Line 2950, Address: 0x387934, Func Offset: 0x14
	// Line 2949, Address: 0x387938, Func Offset: 0x18
	// Line 2950, Address: 0x38793c, Func Offset: 0x1c
	// Line 2952, Address: 0x387944, Func Offset: 0x24
	// Line 2955, Address: 0x387954, Func Offset: 0x34
	// Line 2959, Address: 0x387964, Func Offset: 0x44
	// Line 2965, Address: 0x387970, Func Offset: 0x50
	// Line 2967, Address: 0x387988, Func Offset: 0x68
	// Line 2968, Address: 0x387994, Func Offset: 0x74
	// Line 2975, Address: 0x3879a8, Func Offset: 0x88
	// Line 2976, Address: 0x3879b0, Func Offset: 0x90
	// Line 3004, Address: 0x3879cc, Func Offset: 0xac
	// Line 3014, Address: 0x3879d8, Func Offset: 0xb8
	// Line 3017, Address: 0x3879e8, Func Offset: 0xc8
	// Line 3016, Address: 0x3879ec, Func Offset: 0xcc
	// Line 3017, Address: 0x3879f0, Func Offset: 0xd0
	// Line 3020, Address: 0x387a18, Func Offset: 0xf8
	// Line 3021, Address: 0x387a1c, Func Offset: 0xfc
	// Line 3023, Address: 0x387a24, Func Offset: 0x104
	// Line 3024, Address: 0x387a28, Func Offset: 0x108
	// Line 3026, Address: 0x387a30, Func Offset: 0x110
	// Line 3030, Address: 0x387a34, Func Offset: 0x114
	// Line 3031, Address: 0x387a60, Func Offset: 0x140
	// Line 3034, Address: 0x387a6c, Func Offset: 0x14c
	// Line 3035, Address: 0x387a70, Func Offset: 0x150
	// Line 3034, Address: 0x387a74, Func Offset: 0x154
	// Line 3035, Address: 0x387a78, Func Offset: 0x158
	// Line 3034, Address: 0x387a80, Func Offset: 0x160
	// Line 3035, Address: 0x387a8c, Func Offset: 0x16c
	// Line 3036, Address: 0x387adc, Func Offset: 0x1bc
	// Line 3037, Address: 0x387af0, Func Offset: 0x1d0
	// Line 3039, Address: 0x387af4, Func Offset: 0x1d4
	// Line 3043, Address: 0x387afc, Func Offset: 0x1dc
	// Line 3044, Address: 0x387b08, Func Offset: 0x1e8
	// Line 3043, Address: 0x387b10, Func Offset: 0x1f0
	// Line 3044, Address: 0x387b18, Func Offset: 0x1f8
	// Line 3045, Address: 0x387b68, Func Offset: 0x248
	// Line 3046, Address: 0x387b7c, Func Offset: 0x25c
	// Line 3047, Address: 0x387b80, Func Offset: 0x260
	// Line 3049, Address: 0x387b84, Func Offset: 0x264
	// Line 3053, Address: 0x387b90, Func Offset: 0x270
	// Line 3056, Address: 0x387bac, Func Offset: 0x28c
	// Line 3059, Address: 0x387bc4, Func Offset: 0x2a4
	// Line 3061, Address: 0x387bdc, Func Offset: 0x2bc
	// Line 3062, Address: 0x387c04, Func Offset: 0x2e4
	// Line 3065, Address: 0x387c20, Func Offset: 0x300
	// Line 3074, Address: 0x387c2c, Func Offset: 0x30c
	// Line 3079, Address: 0x387c38, Func Offset: 0x318
	// Line 3082, Address: 0x387c48, Func Offset: 0x328
	// Line 3083, Address: 0x387c54, Func Offset: 0x334
	// Line 3085, Address: 0x387c64, Func Offset: 0x344
	// Line 3083, Address: 0x387c68, Func Offset: 0x348
	// Line 3085, Address: 0x387c6c, Func Offset: 0x34c
	// Line 3084, Address: 0x387c70, Func Offset: 0x350
	// Line 3085, Address: 0x387c74, Func Offset: 0x354
	// Line 3084, Address: 0x387c7c, Func Offset: 0x35c
	// Line 3085, Address: 0x387c80, Func Offset: 0x360
	// Line 3086, Address: 0x387c98, Func Offset: 0x378
	// Line 3089, Address: 0x387cc0, Func Offset: 0x3a0
	// Line 3093, Address: 0x387cd0, Func Offset: 0x3b0
	// Line 3089, Address: 0x387cd4, Func Offset: 0x3b4
	// Line 3093, Address: 0x387cdc, Func Offset: 0x3bc
	// Line 3094, Address: 0x387d10, Func Offset: 0x3f0
	// Line 3095, Address: 0x387d34, Func Offset: 0x414
	// Line 3102, Address: 0x387d40, Func Offset: 0x420
	// Line 2961, Address: 0x387d50, Func Offset: 0x430
	// Line 3102, Address: 0x387d60, Func Offset: 0x440
	// Line 2961, Address: 0x387d68, Func Offset: 0x448
	// Line 3102, Address: 0x387d70, Func Offset: 0x450
	// Line 2981, Address: 0x387d74, Func Offset: 0x454
	// Line 2979, Address: 0x387d78, Func Offset: 0x458
	// Line 3102, Address: 0x387d7c, Func Offset: 0x45c
	// Line 2981, Address: 0x387d88, Func Offset: 0x468
	// Line 2982, Address: 0x387d8c, Func Offset: 0x46c
	// Line 3102, Address: 0x387d90, Func Offset: 0x470
	// Line 2982, Address: 0x387d98, Func Offset: 0x478
	// Line 3102, Address: 0x387d9c, Func Offset: 0x47c
	// Line 2982, Address: 0x387dac, Func Offset: 0x48c
	// Line 3102, Address: 0x387db4, Func Offset: 0x494
	// Line 2985, Address: 0x387dbc, Func Offset: 0x49c
	// Line 3102, Address: 0x387dc8, Func Offset: 0x4a8
	// Line 2986, Address: 0x387dd0, Func Offset: 0x4b0
	// Line 3102, Address: 0x387dd8, Func Offset: 0x4b8
	// Line 2988, Address: 0x387de0, Func Offset: 0x4c0
	// Line 3102, Address: 0x387dec, Func Offset: 0x4cc
	// Line 2989, Address: 0x387df4, Func Offset: 0x4d4
	// Line 3102, Address: 0x387dfc, Func Offset: 0x4dc
	// Line 2991, Address: 0x387e08, Func Offset: 0x4e8
	// Line 3102, Address: 0x387e14, Func Offset: 0x4f4
	// Line 2995, Address: 0x387e2c, Func Offset: 0x50c
	// Line 3102, Address: 0x387e30, Func Offset: 0x510
	// Line 2998, Address: 0x387e40, Func Offset: 0x520
	// Line 3102, Address: 0x387e50, Func Offset: 0x530
	// Line 3006, Address: 0x387e68, Func Offset: 0x548
	// Line 3102, Address: 0x387e74, Func Offset: 0x554
	// Line 3006, Address: 0x387e7c, Func Offset: 0x55c
	// Line 3102, Address: 0x387e80, Func Offset: 0x560
	// Line 3007, Address: 0x387e90, Func Offset: 0x570
	// Line 3102, Address: 0x387ea0, Func Offset: 0x580
	// Line 3008, Address: 0x387eb0, Func Offset: 0x590
	// Line 3102, Address: 0x387ebc, Func Offset: 0x59c
	// Line 3009, Address: 0x387ed4, Func Offset: 0x5b4
	// Line 3102, Address: 0x387ee0, Func Offset: 0x5c0
	// Line 3069, Address: 0x387f04, Func Offset: 0x5e4
	// Line 3068, Address: 0x387f08, Func Offset: 0x5e8
	// Line 3102, Address: 0x387f10, Func Offset: 0x5f0
	// Line 3070, Address: 0x387f28, Func Offset: 0x608
	// Line 3102, Address: 0x387f34, Func Offset: 0x614
	// Line 3076, Address: 0x387f3c, Func Offset: 0x61c
	// Line 3077, Address: 0x387f40, Func Offset: 0x620
	// Line 3102, Address: 0x387f44, Func Offset: 0x624
	// Line 3077, Address: 0x387f4c, Func Offset: 0x62c
	// Line 3078, Address: 0x387f50, Func Offset: 0x630
	// Line 3099, Address: 0x387f58, Func Offset: 0x638
	// Line 3102, Address: 0x387f5c, Func Offset: 0x63c
	// Line 3100, Address: 0x387f64, Func Offset: 0x644
	// Line 3102, Address: 0x387f68, Func Offset: 0x648
	// Func End, Address: 0x387f8c, Func Offset: 0x66c
}

// SoundPlayCollision__4zCarFQ24zCar14eCollisionTypef
// Start address: 0x387f90
void zCar::SoundPlayCollision(eCollisionType type, float32 strength)
{
	effect* rumble;
	// Line 2900, Address: 0x387f90, Func Offset: 0
	// Line 2902, Address: 0x387f94, Func Offset: 0x4
	// Line 2900, Address: 0x387f98, Func Offset: 0x8
	// Line 2901, Address: 0x387fac, Func Offset: 0x1c
	// Line 2902, Address: 0x387fb0, Func Offset: 0x20
	// Line 2907, Address: 0x387fe0, Func Offset: 0x50
	// Line 2909, Address: 0x38800c, Func Offset: 0x7c
	// Line 2911, Address: 0x388014, Func Offset: 0x84
	// Line 2913, Address: 0x388050, Func Offset: 0xc0
	// Line 2915, Address: 0x388058, Func Offset: 0xc8
	// Line 2916, Address: 0x388094, Func Offset: 0x104
	// Line 2922, Address: 0x388098, Func Offset: 0x108
	// Line 2924, Address: 0x3880a0, Func Offset: 0x110
	// Line 2925, Address: 0x3880b4, Func Offset: 0x124
	// Line 2927, Address: 0x388120, Func Offset: 0x190
	// Line 2911, Address: 0x388134, Func Offset: 0x1a4
	// Line 2927, Address: 0x388144, Func Offset: 0x1b4
	// Line 2911, Address: 0x38814c, Func Offset: 0x1bc
	// Line 2927, Address: 0x388154, Func Offset: 0x1c4
	// Line 2915, Address: 0x388160, Func Offset: 0x1d0
	// Line 2927, Address: 0x388170, Func Offset: 0x1e0
	// Line 2915, Address: 0x388178, Func Offset: 0x1e8
	// Line 2927, Address: 0x388180, Func Offset: 0x1f0
	// Func End, Address: 0x388198, Func Offset: 0x208
}

// SoundPlayHorn__4zCarFv
// Start address: 0x3881a0
void zCar::SoundPlayHorn()
{
	// Line 2881, Address: 0x3881a0, Func Offset: 0
	// Line 2886, Address: 0x3881b0, Func Offset: 0x10
	// Line 2894, Address: 0x3881c0, Func Offset: 0x20
	// Line 2896, Address: 0x388224, Func Offset: 0x84
	// Line 2890, Address: 0x388238, Func Offset: 0x98
	// Line 2896, Address: 0x388248, Func Offset: 0xa8
	// Line 2890, Address: 0x388250, Func Offset: 0xb0
	// Line 2894, Address: 0x388258, Func Offset: 0xb8
	// Line 2896, Address: 0x38825c, Func Offset: 0xbc
	// Line 2894, Address: 0x388264, Func Offset: 0xc4
	// Line 2896, Address: 0x388268, Func Offset: 0xc8
	// Line 2894, Address: 0x38826c, Func Offset: 0xcc
	// Line 2896, Address: 0x388270, Func Offset: 0xd0
	// Line 2894, Address: 0x388274, Func Offset: 0xd4
	// Line 2896, Address: 0x388278, Func Offset: 0xd8
	// Line 2894, Address: 0x38827c, Func Offset: 0xdc
	// Line 2896, Address: 0x388280, Func Offset: 0xe0
	// Line 2894, Address: 0x388288, Func Offset: 0xe8
	// Line 2896, Address: 0x388290, Func Offset: 0xf0
	// Func End, Address: 0x38829c, Func Offset: 0xfc
}

// SoundInitAssetTable__4zCarFv
// Start address: 0x3882a0
void zCar::SoundInitAssetTable()
{
	// Line 2804, Address: 0x3882a0, Func Offset: 0
	// Line 2805, Address: 0x3882a4, Func Offset: 0x4
	// Line 2804, Address: 0x3882a8, Func Offset: 0x8
	// Line 2805, Address: 0x3882ac, Func Offset: 0xc
	// Line 2807, Address: 0x3882bc, Func Offset: 0x1c
	// Line 2808, Address: 0x3882d4, Func Offset: 0x34
	// Line 2809, Address: 0x3882f0, Func Offset: 0x50
	// Line 2811, Address: 0x38830c, Func Offset: 0x6c
	// Line 2812, Address: 0x388328, Func Offset: 0x88
	// Line 2813, Address: 0x388344, Func Offset: 0xa4
	// Line 2814, Address: 0x388360, Func Offset: 0xc0
	// Line 2815, Address: 0x38837c, Func Offset: 0xdc
	// Line 2816, Address: 0x388398, Func Offset: 0xf8
	// Line 2817, Address: 0x3883b4, Func Offset: 0x114
	// Line 2818, Address: 0x3883d0, Func Offset: 0x130
	// Line 2819, Address: 0x3883ec, Func Offset: 0x14c
	// Line 2822, Address: 0x388408, Func Offset: 0x168
	// Line 2823, Address: 0x388424, Func Offset: 0x184
	// Line 2824, Address: 0x388440, Func Offset: 0x1a0
	// Line 2830, Address: 0x38845c, Func Offset: 0x1bc
	// Line 2831, Address: 0x388478, Func Offset: 0x1d8
	// Line 2834, Address: 0x388494, Func Offset: 0x1f4
	// Line 2835, Address: 0x3884b0, Func Offset: 0x210
	// Line 2836, Address: 0x3884cc, Func Offset: 0x22c
	// Line 2837, Address: 0x3884e8, Func Offset: 0x248
	// Line 2842, Address: 0x388504, Func Offset: 0x264
	// Line 2844, Address: 0x388520, Func Offset: 0x280
	// Line 2845, Address: 0x38853c, Func Offset: 0x29c
	// Line 2846, Address: 0x388558, Func Offset: 0x2b8
	// Line 2847, Address: 0x388574, Func Offset: 0x2d4
	// Line 2848, Address: 0x388590, Func Offset: 0x2f0
	// Line 2850, Address: 0x3885ac, Func Offset: 0x30c
	// Line 2851, Address: 0x3885c8, Func Offset: 0x328
	// Line 2852, Address: 0x3885e4, Func Offset: 0x344
	// Line 2854, Address: 0x388600, Func Offset: 0x360
	// Line 2855, Address: 0x38861c, Func Offset: 0x37c
	// Line 2856, Address: 0x388638, Func Offset: 0x398
	// Line 2857, Address: 0x388654, Func Offset: 0x3b4
	// Line 2858, Address: 0x388670, Func Offset: 0x3d0
	// Line 2860, Address: 0x38868c, Func Offset: 0x3ec
	// Line 2861, Address: 0x3886a8, Func Offset: 0x408
	// Line 2862, Address: 0x3886c4, Func Offset: 0x424
	// Line 2863, Address: 0x3886e0, Func Offset: 0x440
	// Line 2865, Address: 0x3886fc, Func Offset: 0x45c
	// Line 2877, Address: 0x38871c, Func Offset: 0x47c
	// Func End, Address: 0x388728, Func Offset: 0x488
}

// ModelSwap__4zCarF7eDamageb
// Start address: 0x388730
void zCar::ModelSwap(eDamage newDamageLevel, uint8 swapEffects)
{
	xModelInstance* oldModelInstance;
	xVec3* posbuf;
	xVec3* velbuf;
	xVec3* pp;
	xVec3* vp;
	xSphere unitSphere;
	int32 j;
	// Line 2755, Address: 0x388730, Func Offset: 0
	// Line 2756, Address: 0x388758, Func Offset: 0x28
	// Line 2760, Address: 0x388768, Func Offset: 0x38
	// Line 2759, Address: 0x38877c, Func Offset: 0x4c
	// Line 2760, Address: 0x388780, Func Offset: 0x50
	// Line 2761, Address: 0x388784, Func Offset: 0x54
	// Line 2762, Address: 0x38879c, Func Offset: 0x6c
	// Line 2763, Address: 0x3887a4, Func Offset: 0x74
	// Line 2765, Address: 0x3887b8, Func Offset: 0x88
	// Line 2769, Address: 0x388848, Func Offset: 0x118
	// Line 2796, Address: 0x388850, Func Offset: 0x120
	// Line 2772, Address: 0x388860, Func Offset: 0x130
	// Line 2796, Address: 0x388864, Func Offset: 0x134
	// Line 2779, Address: 0x38886c, Func Offset: 0x13c
	// Line 2796, Address: 0x388870, Func Offset: 0x140
	// Line 2776, Address: 0x388878, Func Offset: 0x148
	// Line 2796, Address: 0x38887c, Func Offset: 0x14c
	// Line 2777, Address: 0x388880, Func Offset: 0x150
	// Line 2796, Address: 0x388884, Func Offset: 0x154
	// Line 2785, Address: 0x388888, Func Offset: 0x158
	// Line 2796, Address: 0x38888c, Func Offset: 0x15c
	// Line 2784, Address: 0x3888a8, Func Offset: 0x178
	// Line 2796, Address: 0x3888b0, Func Offset: 0x180
	// Line 2784, Address: 0x3888b4, Func Offset: 0x184
	// Line 2796, Address: 0x3888b8, Func Offset: 0x188
	// Line 2784, Address: 0x3888c0, Func Offset: 0x190
	// Line 2796, Address: 0x3888c4, Func Offset: 0x194
	// Line 2784, Address: 0x3888dc, Func Offset: 0x1ac
	// Line 2796, Address: 0x3888e0, Func Offset: 0x1b0
	// Line 2784, Address: 0x3888e8, Func Offset: 0x1b8
	// Line 2796, Address: 0x3888ec, Func Offset: 0x1bc
	// Line 2789, Address: 0x388940, Func Offset: 0x210
	// Line 2796, Address: 0x388944, Func Offset: 0x214
	// Line 2789, Address: 0x38894c, Func Offset: 0x21c
	// Line 2796, Address: 0x388950, Func Offset: 0x220
	// Line 2789, Address: 0x388958, Func Offset: 0x228
	// Line 2796, Address: 0x38895c, Func Offset: 0x22c
	// Line 2790, Address: 0x388964, Func Offset: 0x234
	// Line 2796, Address: 0x388968, Func Offset: 0x238
	// Line 2790, Address: 0x388970, Func Offset: 0x240
	// Line 2796, Address: 0x388974, Func Offset: 0x244
	// Line 2790, Address: 0x38897c, Func Offset: 0x24c
	// Line 2796, Address: 0x388980, Func Offset: 0x250
	// Line 2792, Address: 0x38898c, Func Offset: 0x25c
	// Line 2793, Address: 0x388990, Func Offset: 0x260
	// Line 2796, Address: 0x3889a0, Func Offset: 0x270
	// Func End, Address: 0x3889e4, Func Offset: 0x2b4
}

// StreakFX__4zCarFP4xEntf
// Start address: 0x3889f0
void zCar::StreakFX(xEnt* ent, float32 dt)
{
	xMat4x3* pMat;
	int32 i;
	xMat4x3* pBoneMat;
	xVec3 width;
	xParEmitterCustomSettings ketchupInfo;
	xVec3 velStartPt;
	xVec3 velEndPt;
	xVec3 ketchupVel;
	xVec3 ketchupPos;
	xParEmitterCustomSettings seedsInfo;
	// Line 2626, Address: 0x3889f0, Func Offset: 0
	// Line 2627, Address: 0x388a38, Func Offset: 0x48
	// Line 2629, Address: 0x388a3c, Func Offset: 0x4c
	// Line 2627, Address: 0x388a44, Func Offset: 0x54
	// Line 2629, Address: 0x388a48, Func Offset: 0x58
	// Line 2639, Address: 0x388a54, Func Offset: 0x64
	// Line 2644, Address: 0x388a60, Func Offset: 0x70
	// Line 2640, Address: 0x388a64, Func Offset: 0x74
	// Line 2644, Address: 0x388a70, Func Offset: 0x80
	// Line 2647, Address: 0x388ab4, Func Offset: 0xc4
	// Line 2650, Address: 0x388ac8, Func Offset: 0xd8
	// Line 2657, Address: 0x388ae8, Func Offset: 0xf8
	// Line 2659, Address: 0x388af0, Func Offset: 0x100
	// Line 2661, Address: 0x388b20, Func Offset: 0x130
	// Line 2662, Address: 0x388b28, Func Offset: 0x138
	// Line 2663, Address: 0x388b2c, Func Offset: 0x13c
	// Line 2666, Address: 0x388b30, Func Offset: 0x140
	// Line 2669, Address: 0x388b3c, Func Offset: 0x14c
	// Line 2666, Address: 0x388b48, Func Offset: 0x158
	// Line 2669, Address: 0x388b54, Func Offset: 0x164
	// Line 2670, Address: 0x388b80, Func Offset: 0x190
	// Line 2672, Address: 0x388bd0, Func Offset: 0x1e0
	// Line 2670, Address: 0x388bd4, Func Offset: 0x1e4
	// Line 2672, Address: 0x388be0, Func Offset: 0x1f0
	// Line 2673, Address: 0x388bf0, Func Offset: 0x200
	// Line 2674, Address: 0x388c04, Func Offset: 0x214
	// Line 2675, Address: 0x388c0c, Func Offset: 0x21c
	// Line 2677, Address: 0x388c38, Func Offset: 0x248
	// Line 2679, Address: 0x388c5c, Func Offset: 0x26c
	// Line 2680, Address: 0x388ce4, Func Offset: 0x2f4
	// Line 2683, Address: 0x388d40, Func Offset: 0x350
	// Line 2685, Address: 0x388d50, Func Offset: 0x360
	// Line 2687, Address: 0x388d60, Func Offset: 0x370
	// Line 2690, Address: 0x388d6c, Func Offset: 0x37c
	// Line 2694, Address: 0x388d78, Func Offset: 0x388
	// Line 2696, Address: 0x388d84, Func Offset: 0x394
	// Line 2705, Address: 0x388d90, Func Offset: 0x3a0
	// Line 2701, Address: 0x388d94, Func Offset: 0x3a4
	// Line 2705, Address: 0x388dac, Func Offset: 0x3bc
	// Line 2701, Address: 0x388db0, Func Offset: 0x3c0
	// Line 2704, Address: 0x388db4, Func Offset: 0x3c4
	// Line 2701, Address: 0x388db8, Func Offset: 0x3c8
	// Line 2705, Address: 0x388dbc, Func Offset: 0x3cc
	// Line 2704, Address: 0x388dc0, Func Offset: 0x3d0
	// Line 2705, Address: 0x388dc4, Func Offset: 0x3d4
	// Line 2706, Address: 0x388dc8, Func Offset: 0x3d8
	// Line 2704, Address: 0x388dcc, Func Offset: 0x3dc
	// Line 2705, Address: 0x388dd0, Func Offset: 0x3e0
	// Line 2706, Address: 0x388dd8, Func Offset: 0x3e8
	// Line 2707, Address: 0x388e28, Func Offset: 0x438
	// Line 2708, Address: 0x388e7c, Func Offset: 0x48c
	// Line 2707, Address: 0x388e8c, Func Offset: 0x49c
	// Line 2708, Address: 0x388e90, Func Offset: 0x4a0
	// Line 2710, Address: 0x388ea0, Func Offset: 0x4b0
	// Line 2708, Address: 0x388ea4, Func Offset: 0x4b4
	// Line 2710, Address: 0x388ea8, Func Offset: 0x4b8
	// Line 2708, Address: 0x388eac, Func Offset: 0x4bc
	// Line 2710, Address: 0x388ecc, Func Offset: 0x4dc
	// Line 2708, Address: 0x388ed0, Func Offset: 0x4e0
	// Line 2710, Address: 0x388edc, Func Offset: 0x4ec
	// Line 2708, Address: 0x388ee8, Func Offset: 0x4f8
	// Line 2710, Address: 0x388ef0, Func Offset: 0x500
	// Line 2708, Address: 0x388ef4, Func Offset: 0x504
	// Line 2710, Address: 0x388ef8, Func Offset: 0x508
	// Line 2708, Address: 0x388efc, Func Offset: 0x50c
	// Line 2710, Address: 0x388f18, Func Offset: 0x528
	// Line 2708, Address: 0x388f1c, Func Offset: 0x52c
	// Line 2711, Address: 0x388f2c, Func Offset: 0x53c
	// Line 2712, Address: 0x388f7c, Func Offset: 0x58c
	// Line 2711, Address: 0x388f80, Func Offset: 0x590
	// Line 2712, Address: 0x388f84, Func Offset: 0x594
	// Line 2713, Address: 0x388f90, Func Offset: 0x5a0
	// Line 2712, Address: 0x388f9c, Func Offset: 0x5ac
	// Line 2713, Address: 0x388fa8, Func Offset: 0x5b8
	// Line 2716, Address: 0x388fb0, Func Offset: 0x5c0
	// Line 2718, Address: 0x388fb8, Func Offset: 0x5c8
	// Line 2720, Address: 0x388ffc, Func Offset: 0x60c
	// Line 2722, Address: 0x389000, Func Offset: 0x610
	// Line 2720, Address: 0x389004, Func Offset: 0x614
	// Line 2722, Address: 0x389008, Func Offset: 0x618
	// Line 2720, Address: 0x38900c, Func Offset: 0x61c
	// Line 2722, Address: 0x389010, Func Offset: 0x620
	// Line 2720, Address: 0x389014, Func Offset: 0x624
	// Line 2721, Address: 0x389020, Func Offset: 0x630
	// Line 2722, Address: 0x389034, Func Offset: 0x644
	// Line 2723, Address: 0x38903c, Func Offset: 0x64c
	// Line 2724, Address: 0x389054, Func Offset: 0x664
	// Line 2725, Address: 0x389068, Func Offset: 0x678
	// Line 2728, Address: 0x389070, Func Offset: 0x680
	// Line 2730, Address: 0x389074, Func Offset: 0x684
	// Line 2728, Address: 0x389078, Func Offset: 0x688
	// Line 2730, Address: 0x38907c, Func Offset: 0x68c
	// Line 2728, Address: 0x389080, Func Offset: 0x690
	// Line 2730, Address: 0x389084, Func Offset: 0x694
	// Line 2728, Address: 0x389088, Func Offset: 0x698
	// Line 2729, Address: 0x389094, Func Offset: 0x6a4
	// Line 2730, Address: 0x3890a8, Func Offset: 0x6b8
	// Line 2731, Address: 0x3890b0, Func Offset: 0x6c0
	// Line 2732, Address: 0x3890c8, Func Offset: 0x6d8
	// Line 2736, Address: 0x3890e0, Func Offset: 0x6f0
	// Line 2740, Address: 0x3890ec, Func Offset: 0x6fc
	// Line 2742, Address: 0x3890f8, Func Offset: 0x708
	// Line 2745, Address: 0x389104, Func Offset: 0x714
	// Line 2743, Address: 0x389108, Func Offset: 0x718
	// Line 2745, Address: 0x38910c, Func Offset: 0x71c
	// Line 2743, Address: 0x389110, Func Offset: 0x720
	// Line 2745, Address: 0x389114, Func Offset: 0x724
	// Line 2743, Address: 0x389118, Func Offset: 0x728
	// Line 2744, Address: 0x389128, Func Offset: 0x738
	// Line 2745, Address: 0x38913c, Func Offset: 0x74c
	// Line 2746, Address: 0x389144, Func Offset: 0x754
	// Line 2747, Address: 0x38915c, Func Offset: 0x76c
	// Func End, Address: 0x3891a0, Func Offset: 0x7b0
}

// DriveSurfaceFXInternal__4zCarFPC14xModelInstancef12zDrivingSurf
// Start address: 0x3891a0
void zCar::DriveSurfaceFXInternal(xModelInstance* pModel, float32 dt, zDrivingSurf collisionType)
{
	float32 intensityFactor;
	zParEmitter* pEmit;
	xParEmitterCustomSettings parEmitInfo;
	float32 deathSize;
	float32 rate;
	xMat4x3* pMat;
	xVec3 parVelStartPt;
	xVec3 parVelEndPt;
	xVec3 parVel;
	xVec3 carVelocity;
	xVec3 carVelocity;
	xVec3 carVelocity;
	xVec3 carVelocity;
	int32 i;
	xVec3 parPos;
	// Line 2454, Address: 0x3891a0, Func Offset: 0
	// Line 2455, Address: 0x3891dc, Func Offset: 0x3c
	// Line 2458, Address: 0x3891e8, Func Offset: 0x48
	// Line 2459, Address: 0x3891ec, Func Offset: 0x4c
	// Line 2462, Address: 0x38923c, Func Offset: 0x9c
	// Line 2464, Address: 0x389248, Func Offset: 0xa8
	// Line 2462, Address: 0x38924c, Func Offset: 0xac
	// Line 2464, Address: 0x389254, Func Offset: 0xb4
	// Line 2471, Address: 0x389280, Func Offset: 0xe0
	// Line 2477, Address: 0x3892a8, Func Offset: 0x108
	// Line 2481, Address: 0x3892b0, Func Offset: 0x110
	// Line 2480, Address: 0x3892b4, Func Offset: 0x114
	// Line 2481, Address: 0x3892b8, Func Offset: 0x118
	// Line 2482, Address: 0x3892bc, Func Offset: 0x11c
	// Line 2486, Address: 0x3892c4, Func Offset: 0x124
	// Line 2489, Address: 0x3892cc, Func Offset: 0x12c
	// Line 2490, Address: 0x3892d0, Func Offset: 0x130
	// Line 2491, Address: 0x3892dc, Func Offset: 0x13c
	// Line 2494, Address: 0x3892e4, Func Offset: 0x144
	// Line 2496, Address: 0x3892e8, Func Offset: 0x148
	// Line 2500, Address: 0x3892f0, Func Offset: 0x150
	// Line 2504, Address: 0x3892f8, Func Offset: 0x158
	// Line 2508, Address: 0x389300, Func Offset: 0x160
	// Line 2509, Address: 0x389308, Func Offset: 0x168
	// Line 2513, Address: 0x389310, Func Offset: 0x170
	// Line 2516, Address: 0x389318, Func Offset: 0x178
	// Line 2520, Address: 0x389320, Func Offset: 0x180
	// Line 2524, Address: 0x389328, Func Offset: 0x188
	// Line 2526, Address: 0x389338, Func Offset: 0x198
	// Line 2534, Address: 0x389340, Func Offset: 0x1a0
	// Line 2535, Address: 0x389354, Func Offset: 0x1b4
	// Line 2536, Address: 0x389368, Func Offset: 0x1c8
	// Line 2537, Address: 0x389374, Func Offset: 0x1d4
	// Line 2538, Address: 0x389384, Func Offset: 0x1e4
	// Line 2539, Address: 0x389390, Func Offset: 0x1f0
	// Line 2541, Address: 0x3893a8, Func Offset: 0x208
	// Line 2545, Address: 0x3893b8, Func Offset: 0x218
	// Line 2542, Address: 0x3893c4, Func Offset: 0x224
	// Line 2545, Address: 0x3893d0, Func Offset: 0x230
	// Line 2542, Address: 0x3893d4, Func Offset: 0x234
	// Line 2545, Address: 0x3893d8, Func Offset: 0x238
	// Line 2542, Address: 0x3893e0, Func Offset: 0x240
	// Line 2546, Address: 0x3893e4, Func Offset: 0x244
	// Line 2545, Address: 0x3893e8, Func Offset: 0x248
	// Line 2546, Address: 0x3893f4, Func Offset: 0x254
	// Line 2547, Address: 0x3893fc, Func Offset: 0x25c
	// Line 2548, Address: 0x38940c, Func Offset: 0x26c
	// Line 2549, Address: 0x389418, Func Offset: 0x278
	// Line 2550, Address: 0x389420, Func Offset: 0x280
	// Line 2551, Address: 0x38942c, Func Offset: 0x28c
	// Line 2552, Address: 0x389434, Func Offset: 0x294
	// Line 2553, Address: 0x389440, Func Offset: 0x2a0
	// Line 2554, Address: 0x389450, Func Offset: 0x2b0
	// Line 2555, Address: 0x38945c, Func Offset: 0x2bc
	// Line 2557, Address: 0x389470, Func Offset: 0x2d0
	// Line 2558, Address: 0x389484, Func Offset: 0x2e4
	// Line 2557, Address: 0x389488, Func Offset: 0x2e8
	// Line 2562, Address: 0x38948c, Func Offset: 0x2ec
	// Line 2558, Address: 0x389498, Func Offset: 0x2f8
	// Line 2564, Address: 0x38949c, Func Offset: 0x2fc
	// Line 2565, Address: 0x3894a8, Func Offset: 0x308
	// Line 2566, Address: 0x3894c4, Func Offset: 0x324
	// Line 2567, Address: 0x3894dc, Func Offset: 0x33c
	// Line 2566, Address: 0x3894e4, Func Offset: 0x344
	// Line 2567, Address: 0x3894f4, Func Offset: 0x354
	// Line 2568, Address: 0x389520, Func Offset: 0x380
	// Line 2569, Address: 0x389538, Func Offset: 0x398
	// Line 2568, Address: 0x389540, Func Offset: 0x3a0
	// Line 2569, Address: 0x389550, Func Offset: 0x3b0
	// Line 2570, Address: 0x38957c, Func Offset: 0x3dc
	// Line 2571, Address: 0x389594, Func Offset: 0x3f4
	// Line 2570, Address: 0x38959c, Func Offset: 0x3fc
	// Line 2571, Address: 0x3895ac, Func Offset: 0x40c
	// Line 2572, Address: 0x3895d8, Func Offset: 0x438
	// Line 2573, Address: 0x3895f0, Func Offset: 0x450
	// Line 2572, Address: 0x3895f8, Func Offset: 0x458
	// Line 2573, Address: 0x3895fc, Func Offset: 0x45c
	// Line 2574, Address: 0x38962c, Func Offset: 0x48c
	// Line 2575, Address: 0x389648, Func Offset: 0x4a8
	// Line 2574, Address: 0x389650, Func Offset: 0x4b0
	// Line 2575, Address: 0x389654, Func Offset: 0x4b4
	// Line 2576, Address: 0x389684, Func Offset: 0x4e4
	// Line 2577, Address: 0x3896a0, Func Offset: 0x500
	// Line 2576, Address: 0x3896a8, Func Offset: 0x508
	// Line 2577, Address: 0x3896ac, Func Offset: 0x50c
	// Line 2579, Address: 0x3896dc, Func Offset: 0x53c
	// Line 2580, Address: 0x3896f4, Func Offset: 0x554
	// Line 2581, Address: 0x389748, Func Offset: 0x5a8
	// Line 2582, Address: 0x38979c, Func Offset: 0x5fc
	// Line 2581, Address: 0x3897ac, Func Offset: 0x60c
	// Line 2582, Address: 0x3897b0, Func Offset: 0x610
	// Line 2583, Address: 0x3897e0, Func Offset: 0x640
	// Line 2582, Address: 0x3897e4, Func Offset: 0x644
	// Line 2583, Address: 0x389828, Func Offset: 0x688
	// Line 2585, Address: 0x389830, Func Offset: 0x690
	// Line 2587, Address: 0x38983c, Func Offset: 0x69c
	// Line 2585, Address: 0x389848, Func Offset: 0x6a8
	// Line 2587, Address: 0x38984c, Func Offset: 0x6ac
	// Line 2585, Address: 0x389858, Func Offset: 0x6b8
	// Line 2587, Address: 0x38985c, Func Offset: 0x6bc
	// Line 2586, Address: 0x389860, Func Offset: 0x6c0
	// Line 2587, Address: 0x389864, Func Offset: 0x6c4
	// Line 2586, Address: 0x389868, Func Offset: 0x6c8
	// Line 2587, Address: 0x389870, Func Offset: 0x6d0
	// Line 2586, Address: 0x389878, Func Offset: 0x6d8
	// Line 2587, Address: 0x38987c, Func Offset: 0x6dc
	// Line 2586, Address: 0x38988c, Func Offset: 0x6ec
	// Line 2587, Address: 0x389894, Func Offset: 0x6f4
	// Line 2588, Address: 0x3898b8, Func Offset: 0x718
	// Line 2589, Address: 0x3898c0, Func Offset: 0x720
	// Line 2591, Address: 0x3898cc, Func Offset: 0x72c
	// Line 2593, Address: 0x3898d8, Func Offset: 0x738
	// Line 2591, Address: 0x3898e4, Func Offset: 0x744
	// Line 2593, Address: 0x3898e8, Func Offset: 0x748
	// Line 2591, Address: 0x3898f4, Func Offset: 0x754
	// Line 2593, Address: 0x3898f8, Func Offset: 0x758
	// Line 2592, Address: 0x3898fc, Func Offset: 0x75c
	// Line 2593, Address: 0x389900, Func Offset: 0x760
	// Line 2592, Address: 0x389904, Func Offset: 0x764
	// Line 2593, Address: 0x38990c, Func Offset: 0x76c
	// Line 2592, Address: 0x389914, Func Offset: 0x774
	// Line 2593, Address: 0x389918, Func Offset: 0x778
	// Line 2592, Address: 0x389928, Func Offset: 0x788
	// Line 2593, Address: 0x389930, Func Offset: 0x790
	// Line 2594, Address: 0x389954, Func Offset: 0x7b4
	// Line 2595, Address: 0x38995c, Func Offset: 0x7bc
	// Line 2597, Address: 0x389968, Func Offset: 0x7c8
	// Line 2599, Address: 0x389974, Func Offset: 0x7d4
	// Line 2597, Address: 0x389980, Func Offset: 0x7e0
	// Line 2599, Address: 0x389984, Func Offset: 0x7e4
	// Line 2597, Address: 0x389990, Func Offset: 0x7f0
	// Line 2599, Address: 0x389994, Func Offset: 0x7f4
	// Line 2598, Address: 0x389998, Func Offset: 0x7f8
	// Line 2599, Address: 0x38999c, Func Offset: 0x7fc
	// Line 2598, Address: 0x3899a0, Func Offset: 0x800
	// Line 2599, Address: 0x3899a8, Func Offset: 0x808
	// Line 2598, Address: 0x3899b0, Func Offset: 0x810
	// Line 2599, Address: 0x3899b4, Func Offset: 0x814
	// Line 2598, Address: 0x3899c4, Func Offset: 0x824
	// Line 2599, Address: 0x3899cc, Func Offset: 0x82c
	// Line 2600, Address: 0x3899f0, Func Offset: 0x850
	// Line 2601, Address: 0x3899f8, Func Offset: 0x858
	// Line 2603, Address: 0x389a04, Func Offset: 0x864
	// Line 2605, Address: 0x389a10, Func Offset: 0x870
	// Line 2603, Address: 0x389a1c, Func Offset: 0x87c
	// Line 2605, Address: 0x389a20, Func Offset: 0x880
	// Line 2603, Address: 0x389a2c, Func Offset: 0x88c
	// Line 2605, Address: 0x389a30, Func Offset: 0x890
	// Line 2604, Address: 0x389a34, Func Offset: 0x894
	// Line 2605, Address: 0x389a38, Func Offset: 0x898
	// Line 2604, Address: 0x389a3c, Func Offset: 0x89c
	// Line 2605, Address: 0x389a44, Func Offset: 0x8a4
	// Line 2604, Address: 0x389a4c, Func Offset: 0x8ac
	// Line 2605, Address: 0x389a50, Func Offset: 0x8b0
	// Line 2604, Address: 0x389a60, Func Offset: 0x8c0
	// Line 2605, Address: 0x389a68, Func Offset: 0x8c8
	// Line 2608, Address: 0x389a94, Func Offset: 0x8f4
	// Line 2610, Address: 0x389aa4, Func Offset: 0x904
	// Line 2611, Address: 0x389ae0, Func Offset: 0x940
	// Line 2610, Address: 0x389ae4, Func Offset: 0x944
	// Line 2611, Address: 0x389ae8, Func Offset: 0x948
	// Line 2612, Address: 0x389aec, Func Offset: 0x94c
	// Line 2613, Address: 0x389b3c, Func Offset: 0x99c
	// Line 2617, Address: 0x389b40, Func Offset: 0x9a0
	// Line 2613, Address: 0x389b44, Func Offset: 0x9a4
	// Line 2617, Address: 0x389b48, Func Offset: 0x9a8
	// Line 2613, Address: 0x389b4c, Func Offset: 0x9ac
	// Line 2614, Address: 0x389b50, Func Offset: 0x9b0
	// Line 2617, Address: 0x389b54, Func Offset: 0x9b4
	// Line 2613, Address: 0x389b58, Func Offset: 0x9b8
	// Line 2614, Address: 0x389b64, Func Offset: 0x9c4
	// Line 2613, Address: 0x389b80, Func Offset: 0x9e0
	// Line 2614, Address: 0x389b98, Func Offset: 0x9f8
	// Line 2615, Address: 0x389bb0, Func Offset: 0xa10
	// Line 2616, Address: 0x389bb4, Func Offset: 0xa14
	// Line 2615, Address: 0x389bb8, Func Offset: 0xa18
	// Line 2616, Address: 0x389bcc, Func Offset: 0xa2c
	// Line 2617, Address: 0x389be0, Func Offset: 0xa40
	// Line 2618, Address: 0x389be8, Func Offset: 0xa48
	// Line 2620, Address: 0x389bec, Func Offset: 0xa4c
	// Line 2618, Address: 0x389bf0, Func Offset: 0xa50
	// Line 2620, Address: 0x389bf4, Func Offset: 0xa54
	// Line 2618, Address: 0x389bf8, Func Offset: 0xa58
	// Line 2619, Address: 0x389c08, Func Offset: 0xa68
	// Line 2620, Address: 0x389c1c, Func Offset: 0xa7c
	// Line 2621, Address: 0x389c24, Func Offset: 0xa84
	// Func End, Address: 0x389c5c, Func Offset: 0xabc
}

// RenderBrakeLights__4zCarFPC14xModelInstance
// Start address: 0x389c60
void zCar::RenderBrakeLights(xModelInstance* pModel)
{
	xMat4x3 brakeLightMatL;
	xMat4x3 brakeLightMatR;
	// Line 2405, Address: 0x389c60, Func Offset: 0
	// Line 2406, Address: 0x389c6c, Func Offset: 0xc
	// Line 2408, Address: 0x389c78, Func Offset: 0x18
	// Line 2412, Address: 0x389c88, Func Offset: 0x28
	// Line 2413, Address: 0x389c98, Func Offset: 0x38
	// Line 2418, Address: 0x389ca4, Func Offset: 0x44
	// Line 2413, Address: 0x389ca8, Func Offset: 0x48
	// Line 2418, Address: 0x389cb0, Func Offset: 0x50
	// Line 2421, Address: 0x389cc0, Func Offset: 0x60
	// Line 2422, Address: 0x389cd0, Func Offset: 0x70
	// Line 2424, Address: 0x389ce0, Func Offset: 0x80
	// Line 2425, Address: 0x389ce8, Func Offset: 0x88
	// Line 2428, Address: 0x389cf0, Func Offset: 0x90
	// Line 2429, Address: 0x389d00, Func Offset: 0xa0
	// Line 2431, Address: 0x389d10, Func Offset: 0xb0
	// Func End, Address: 0x389d20, Func Offset: 0xc0
}

// zCarRenderOneBrakeLight__FP7xMat4x3
// Start address: 0x389d20
void zCarRenderOneBrakeLight(xMat4x3* pMat)
{
	xVec3 w;
	xVec3 h;
	xVec3 d;
	xVec3 pos;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RxObjSpace3DVertex sStripVert[4];
	// Line 2353, Address: 0x389d20, Func Offset: 0
	// Line 2364, Address: 0x389d24, Func Offset: 0x4
	// Line 2353, Address: 0x389d28, Func Offset: 0x8
	// Line 2364, Address: 0x389d2c, Func Offset: 0xc
	// Line 2353, Address: 0x389d30, Func Offset: 0x10
	// Line 2390, Address: 0x389d34, Func Offset: 0x14
	// Line 2353, Address: 0x389d38, Func Offset: 0x18
	// Line 2365, Address: 0x389d3c, Func Offset: 0x1c
	// Line 2353, Address: 0x389d40, Func Offset: 0x20
	// Line 2365, Address: 0x389d44, Func Offset: 0x24
	// Line 2353, Address: 0x389d48, Func Offset: 0x28
	// Line 2365, Address: 0x389d4c, Func Offset: 0x2c
	// Line 2353, Address: 0x389d50, Func Offset: 0x30
	// Line 2374, Address: 0x389d54, Func Offset: 0x34
	// Line 2353, Address: 0x389d58, Func Offset: 0x38
	// Line 2366, Address: 0x389d5c, Func Offset: 0x3c
	// Line 2353, Address: 0x389d60, Func Offset: 0x40
	// Line 2380, Address: 0x389d64, Func Offset: 0x44
	// Line 2353, Address: 0x389d68, Func Offset: 0x48
	// Line 2387, Address: 0x389d6c, Func Offset: 0x4c
	// Line 2353, Address: 0x389d70, Func Offset: 0x50
	// Line 2393, Address: 0x389d74, Func Offset: 0x54
	// Line 2360, Address: 0x389d78, Func Offset: 0x58
	// Line 2390, Address: 0x389d7c, Func Offset: 0x5c
	// Line 2359, Address: 0x389d80, Func Offset: 0x60
	// Line 2390, Address: 0x389d84, Func Offset: 0x64
	// Line 2359, Address: 0x389d88, Func Offset: 0x68
	// Line 2390, Address: 0x389d8c, Func Offset: 0x6c
	// Line 2360, Address: 0x389d90, Func Offset: 0x70
	// Line 2390, Address: 0x389d94, Func Offset: 0x74
	// Line 2359, Address: 0x389d98, Func Offset: 0x78
	// Line 2390, Address: 0x389d9c, Func Offset: 0x7c
	// Line 2361, Address: 0x389da0, Func Offset: 0x80
	// Line 2391, Address: 0x389da4, Func Offset: 0x84
	// Line 2365, Address: 0x389da8, Func Offset: 0x88
	// Line 2391, Address: 0x389dac, Func Offset: 0x8c
	// Line 2392, Address: 0x389db0, Func Offset: 0x90
	// Line 2366, Address: 0x389db4, Func Offset: 0x94
	// Line 2392, Address: 0x389db8, Func Offset: 0x98
	// Line 2379, Address: 0x389dbc, Func Offset: 0x9c
	// Line 2371, Address: 0x389dc4, Func Offset: 0xa4
	// Line 2377, Address: 0x389dc8, Func Offset: 0xa8
	// Line 2371, Address: 0x389dcc, Func Offset: 0xac
	// Line 2359, Address: 0x389dd0, Func Offset: 0xb0
	// Line 2371, Address: 0x389dd4, Func Offset: 0xb4
	// Line 2366, Address: 0x389dd8, Func Offset: 0xb8
	// Line 2377, Address: 0x389ddc, Func Offset: 0xbc
	// Line 2359, Address: 0x389de0, Func Offset: 0xc0
	// Line 2377, Address: 0x389de4, Func Offset: 0xc4
	// Line 2366, Address: 0x389de8, Func Offset: 0xc8
	// Line 2384, Address: 0x389dec, Func Offset: 0xcc
	// Line 2372, Address: 0x389df0, Func Offset: 0xd0
	// Line 2373, Address: 0x389df4, Func Offset: 0xd4
	// Line 2378, Address: 0x389df8, Func Offset: 0xd8
	// Line 2384, Address: 0x389dfc, Func Offset: 0xdc
	// Line 2374, Address: 0x389e04, Func Offset: 0xe4
	// Line 2380, Address: 0x389e0c, Func Offset: 0xec
	// Line 2361, Address: 0x389e10, Func Offset: 0xf0
	// Line 2385, Address: 0x389e14, Func Offset: 0xf4
	// Line 2360, Address: 0x389e18, Func Offset: 0xf8
	// Line 2386, Address: 0x389e1c, Func Offset: 0xfc
	// Line 2360, Address: 0x389e20, Func Offset: 0x100
	// Line 2387, Address: 0x389e24, Func Offset: 0x104
	// Line 2362, Address: 0x389e28, Func Offset: 0x108
	// Line 2393, Address: 0x389e2c, Func Offset: 0x10c
	// Line 2361, Address: 0x389e30, Func Offset: 0x110
	// Line 2396, Address: 0x389e34, Func Offset: 0x114
	// Line 2364, Address: 0x389e38, Func Offset: 0x118
	// Line 2396, Address: 0x389e3c, Func Offset: 0x11c
	// Line 2366, Address: 0x389e44, Func Offset: 0x124
	// Line 2362, Address: 0x389e4c, Func Offset: 0x12c
	// Line 2360, Address: 0x389e54, Func Offset: 0x134
	// Line 2366, Address: 0x389e58, Func Offset: 0x138
	// Line 2364, Address: 0x389e5c, Func Offset: 0x13c
	// Line 2365, Address: 0x389e60, Func Offset: 0x140
	// Line 2362, Address: 0x389e64, Func Offset: 0x144
	// Line 2364, Address: 0x389e68, Func Offset: 0x148
	// Line 2379, Address: 0x389e6c, Func Offset: 0x14c
	// Line 2364, Address: 0x389e70, Func Offset: 0x150
	// Line 2391, Address: 0x389e74, Func Offset: 0x154
	// Line 2362, Address: 0x389e78, Func Offset: 0x158
	// Line 2372, Address: 0x389e7c, Func Offset: 0x15c
	// Line 2368, Address: 0x389e80, Func Offset: 0x160
	// Line 2373, Address: 0x389e84, Func Offset: 0x164
	// Line 2378, Address: 0x389e88, Func Offset: 0x168
	// Line 2385, Address: 0x389e8c, Func Offset: 0x16c
	// Line 2386, Address: 0x389e90, Func Offset: 0x170
	// Line 2364, Address: 0x389e94, Func Offset: 0x174
	// Line 2391, Address: 0x389e98, Func Offset: 0x178
	// Line 2364, Address: 0x389e9c, Func Offset: 0x17c
	// Line 2392, Address: 0x389ea0, Func Offset: 0x180
	// Line 2364, Address: 0x389ea4, Func Offset: 0x184
	// Line 2374, Address: 0x389ea8, Func Offset: 0x188
	// Line 2380, Address: 0x389eb8, Func Offset: 0x198
	// Line 2365, Address: 0x389ebc, Func Offset: 0x19c
	// Line 2392, Address: 0x389ec0, Func Offset: 0x1a0
	// Line 2365, Address: 0x389ec4, Func Offset: 0x1a4
	// Line 2364, Address: 0x389ec8, Func Offset: 0x1a8
	// Line 2380, Address: 0x389ed0, Func Offset: 0x1b0
	// Line 2364, Address: 0x389ed4, Func Offset: 0x1b4
	// Line 2380, Address: 0x389edc, Func Offset: 0x1bc
	// Line 2387, Address: 0x389ee4, Func Offset: 0x1c4
	// Line 2365, Address: 0x389ee8, Func Offset: 0x1c8
	// Line 2387, Address: 0x389eec, Func Offset: 0x1cc
	// Line 2365, Address: 0x389ef0, Func Offset: 0x1d0
	// Line 2387, Address: 0x389ef4, Func Offset: 0x1d4
	// Line 2364, Address: 0x389ef8, Func Offset: 0x1d8
	// Line 2387, Address: 0x389efc, Func Offset: 0x1dc
	// Line 2365, Address: 0x389f00, Func Offset: 0x1e0
	// Line 2393, Address: 0x389f08, Func Offset: 0x1e8
	// Line 2396, Address: 0x389f14, Func Offset: 0x1f4
	// Line 2393, Address: 0x389f18, Func Offset: 0x1f8
	// Line 2365, Address: 0x389f1c, Func Offset: 0x1fc
	// Line 2396, Address: 0x389f20, Func Offset: 0x200
	// Line 2365, Address: 0x389f24, Func Offset: 0x204
	// Line 2368, Address: 0x389f30, Func Offset: 0x210
	// Line 2371, Address: 0x389f4c, Func Offset: 0x22c
	// Line 2368, Address: 0x389f50, Func Offset: 0x230
	// Line 2371, Address: 0x389f58, Func Offset: 0x238
	// Line 2368, Address: 0x389f5c, Func Offset: 0x23c
	// Line 2366, Address: 0x389f60, Func Offset: 0x240
	// Line 2362, Address: 0x389f68, Func Offset: 0x248
	// Line 2368, Address: 0x389f6c, Func Offset: 0x24c
	// Line 2377, Address: 0x389f74, Func Offset: 0x254
	// Line 2368, Address: 0x389f78, Func Offset: 0x258
	// Line 2377, Address: 0x389f7c, Func Offset: 0x25c
	// Line 2384, Address: 0x389f80, Func Offset: 0x260
	// Line 2368, Address: 0x389f84, Func Offset: 0x264
	// Line 2384, Address: 0x389f88, Func Offset: 0x268
	// Line 2368, Address: 0x389f8c, Func Offset: 0x26c
	// Line 2390, Address: 0x389f90, Func Offset: 0x270
	// Line 2368, Address: 0x389f98, Func Offset: 0x278
	// Line 2390, Address: 0x389f9c, Func Offset: 0x27c
	// Line 2371, Address: 0x389fac, Func Offset: 0x28c
	// Line 2377, Address: 0x389fb4, Func Offset: 0x294
	// Line 2371, Address: 0x389fb8, Func Offset: 0x298
	// Line 2377, Address: 0x389fc0, Func Offset: 0x2a0
	// Line 2384, Address: 0x389fd0, Func Offset: 0x2b0
	// Line 2390, Address: 0x389fd4, Func Offset: 0x2b4
	// Line 2384, Address: 0x389fe4, Func Offset: 0x2c4
	// Line 2390, Address: 0x389fe8, Func Offset: 0x2c8
	// Line 2384, Address: 0x389fec, Func Offset: 0x2cc
	// Line 2396, Address: 0x389ff4, Func Offset: 0x2d4
	// Line 2401, Address: 0x38a004, Func Offset: 0x2e4
	// Func End, Address: 0x38a050, Func Offset: 0x330
}

// UpdateEffects__4zCarFf
// Start address: 0x38a050
void zCar::UpdateEffects(float32 dt)
{
	float32 rightSpeed;
	// Line 2310, Address: 0x38a050, Func Offset: 0
	// Line 2312, Address: 0x38a064, Func Offset: 0x14
	// Line 2310, Address: 0x38a068, Func Offset: 0x18
	// Line 2312, Address: 0x38a078, Func Offset: 0x28
	// Line 2313, Address: 0x38a09c, Func Offset: 0x4c
	// Line 2314, Address: 0x38a0ac, Func Offset: 0x5c
	// Line 2315, Address: 0x38a0cc, Func Offset: 0x7c
	// Line 2317, Address: 0x38a140, Func Offset: 0xf0
	// Line 2320, Address: 0x38a194, Func Offset: 0x144
	// Line 2322, Address: 0x38a330, Func Offset: 0x2e0
	// Line 2324, Address: 0x38a3b8, Func Offset: 0x368
	// Line 2326, Address: 0x38a3c8, Func Offset: 0x378
	// Line 2327, Address: 0x38a3d4, Func Offset: 0x384
	// Func End, Address: 0x38a3f0, Func Offset: 0x3a0
}

// UpdateVirtualBunTop__4zCarFf
// Start address: 0x38a3f0
void zCar::UpdateVirtualBunTop(float32 dt)
{
	xVec3 idealBunPos;
	xVec3 delta;
	xVec3 newDelta;
	// Line 2209, Address: 0x38a3f0, Func Offset: 0
	// Line 2215, Address: 0x38a3f4, Func Offset: 0x4
	// Line 2209, Address: 0x38a3f8, Func Offset: 0x8
	// Line 2215, Address: 0x38a3fc, Func Offset: 0xc
	// Line 2209, Address: 0x38a400, Func Offset: 0x10
	// Line 2215, Address: 0x38a404, Func Offset: 0x14
	// Line 2223, Address: 0x38a40c, Func Offset: 0x1c
	// Line 2215, Address: 0x38a410, Func Offset: 0x20
	// Line 2218, Address: 0x38a42c, Func Offset: 0x3c
	// Line 2215, Address: 0x38a430, Func Offset: 0x40
	// Line 2218, Address: 0x38a43c, Func Offset: 0x4c
	// Line 2215, Address: 0x38a444, Func Offset: 0x54
	// Line 2218, Address: 0x38a468, Func Offset: 0x78
	// Line 2215, Address: 0x38a474, Func Offset: 0x84
	// Line 2218, Address: 0x38a4bc, Func Offset: 0xcc
	// Line 2215, Address: 0x38a4c0, Func Offset: 0xd0
	// Line 2218, Address: 0x38a4cc, Func Offset: 0xdc
	// Line 2215, Address: 0x38a4d0, Func Offset: 0xe0
	// Line 2218, Address: 0x38a4d4, Func Offset: 0xe4
	// Line 2215, Address: 0x38a4dc, Func Offset: 0xec
	// Line 2218, Address: 0x38a4e0, Func Offset: 0xf0
	// Line 2223, Address: 0x38a534, Func Offset: 0x144
	// Line 2224, Address: 0x38a540, Func Offset: 0x150
	// Line 2226, Address: 0x38a584, Func Offset: 0x194
	// Line 2232, Address: 0x38a5dc, Func Offset: 0x1ec
	// Line 2235, Address: 0x38a614, Func Offset: 0x224
	// Line 2249, Address: 0x38a634, Func Offset: 0x244
	// Line 2235, Address: 0x38a638, Func Offset: 0x248
	// Line 2239, Address: 0x38a640, Func Offset: 0x250
	// Line 2235, Address: 0x38a644, Func Offset: 0x254
	// Line 2239, Address: 0x38a648, Func Offset: 0x258
	// Line 2235, Address: 0x38a654, Func Offset: 0x264
	// Line 2249, Address: 0x38a668, Func Offset: 0x278
	// Line 2239, Address: 0x38a66c, Func Offset: 0x27c
	// Line 2235, Address: 0x38a670, Func Offset: 0x280
	// Line 2239, Address: 0x38a674, Func Offset: 0x284
	// Line 2235, Address: 0x38a678, Func Offset: 0x288
	// Line 2239, Address: 0x38a69c, Func Offset: 0x2ac
	// Line 2235, Address: 0x38a6a0, Func Offset: 0x2b0
	// Line 2236, Address: 0x38a6ec, Func Offset: 0x2fc
	// Line 2239, Address: 0x38a71c, Func Offset: 0x32c
	// Line 2240, Address: 0x38a728, Func Offset: 0x338
	// Line 2239, Address: 0x38a734, Func Offset: 0x344
	// Line 2244, Address: 0x38a750, Func Offset: 0x360
	// Line 2241, Address: 0x38a754, Func Offset: 0x364
	// Line 2239, Address: 0x38a758, Func Offset: 0x368
	// Line 2241, Address: 0x38a75c, Func Offset: 0x36c
	// Line 2239, Address: 0x38a760, Func Offset: 0x370
	// Line 2244, Address: 0x38a780, Func Offset: 0x390
	// Line 2239, Address: 0x38a788, Func Offset: 0x398
	// Line 2244, Address: 0x38a78c, Func Offset: 0x39c
	// Line 2239, Address: 0x38a790, Func Offset: 0x3a0
	// Line 2240, Address: 0x38a798, Func Offset: 0x3a8
	// Line 2241, Address: 0x38a79c, Func Offset: 0x3ac
	// Line 2239, Address: 0x38a7a0, Func Offset: 0x3b0
	// Line 2240, Address: 0x38a7a8, Func Offset: 0x3b8
	// Line 2244, Address: 0x38a7b4, Func Offset: 0x3c4
	// Line 2241, Address: 0x38a7cc, Func Offset: 0x3dc
	// Line 2249, Address: 0x38a7d8, Func Offset: 0x3e8
	// Line 2244, Address: 0x38a7dc, Func Offset: 0x3ec
	// Line 2249, Address: 0x38a80c, Func Offset: 0x41c
	// Line 2273, Address: 0x38a874, Func Offset: 0x484
	// Line 2249, Address: 0x38a878, Func Offset: 0x488
	// Line 2273, Address: 0x38a884, Func Offset: 0x494
	// Line 2280, Address: 0x38a88c, Func Offset: 0x49c
	// Line 2283, Address: 0x38a89c, Func Offset: 0x4ac
	// Line 2280, Address: 0x38a8a4, Func Offset: 0x4b4
	// Line 2283, Address: 0x38a8ac, Func Offset: 0x4bc
	// Line 2286, Address: 0x38a8c0, Func Offset: 0x4d0
	// Line 2294, Address: 0x38a8d4, Func Offset: 0x4e4
	// Line 2301, Address: 0x38a8f4, Func Offset: 0x504
	// Line 2302, Address: 0x38a904, Func Offset: 0x514
	// Line 2301, Address: 0x38a910, Func Offset: 0x520
	// Line 2302, Address: 0x38a91c, Func Offset: 0x52c
	// Line 2303, Address: 0x38a928, Func Offset: 0x538
	// Line 2233, Address: 0x38a930, Func Offset: 0x540
	// Line 2303, Address: 0x38a938, Func Offset: 0x548
	// Line 2233, Address: 0x38a93c, Func Offset: 0x54c
	// Line 2303, Address: 0x38a944, Func Offset: 0x554
	// Line 2233, Address: 0x38a950, Func Offset: 0x560
	// Line 2303, Address: 0x38a958, Func Offset: 0x568
	// Line 2233, Address: 0x38a95c, Func Offset: 0x56c
	// Line 2303, Address: 0x38a960, Func Offset: 0x570
	// Line 2233, Address: 0x38a968, Func Offset: 0x578
	// Line 2303, Address: 0x38a96c, Func Offset: 0x57c
	// Line 2233, Address: 0x38a980, Func Offset: 0x590
	// Line 2303, Address: 0x38a98c, Func Offset: 0x59c
	// Line 2296, Address: 0x38a9b0, Func Offset: 0x5c0
	// Line 2303, Address: 0x38a9b4, Func Offset: 0x5c4
	// Func End, Address: 0x38a9d4, Func Offset: 0x5e4
}

// CreateAnimTable__4zCarFv
// Start address: 0x38a9e0
xAnimTable* zCar::CreateAnimTable()
{
	xAnimTable* table;
	// Line 2113, Address: 0x38a9e0, Func Offset: 0
	// Line 2116, Address: 0x38a9e4, Func Offset: 0x4
	// Line 2113, Address: 0x38a9e8, Func Offset: 0x8
	// Line 2116, Address: 0x38a9ec, Func Offset: 0xc
	// Line 2122, Address: 0x38aa00, Func Offset: 0x20
	// Line 2123, Address: 0x38aa48, Func Offset: 0x68
	// Line 2124, Address: 0x38aa90, Func Offset: 0xb0
	// Line 2125, Address: 0x38aad8, Func Offset: 0xf8
	// Line 2126, Address: 0x38ab20, Func Offset: 0x140
	// Line 2127, Address: 0x38ab68, Func Offset: 0x188
	// Line 2128, Address: 0x38abb0, Func Offset: 0x1d0
	// Line 2129, Address: 0x38abf8, Func Offset: 0x218
	// Line 2130, Address: 0x38ac40, Func Offset: 0x260
	// Line 2131, Address: 0x38ac88, Func Offset: 0x2a8
	// Line 2132, Address: 0x38acd0, Func Offset: 0x2f0
	// Line 2134, Address: 0x38ad18, Func Offset: 0x338
	// Line 2135, Address: 0x38ad60, Func Offset: 0x380
	// Line 2142, Address: 0x38ada8, Func Offset: 0x3c8
	// Line 2143, Address: 0x38adf8, Func Offset: 0x418
	// Line 2144, Address: 0x38ae44, Func Offset: 0x464
	// Line 2145, Address: 0x38ae94, Func Offset: 0x4b4
	// Line 2146, Address: 0x38aee0, Func Offset: 0x500
	// Line 2153, Address: 0x38af30, Func Offset: 0x550
	// Line 2154, Address: 0x38af74, Func Offset: 0x594
	// Line 2155, Address: 0x38afb8, Func Offset: 0x5d8
	// Line 2156, Address: 0x38b000, Func Offset: 0x620
	// Line 2157, Address: 0x38b048, Func Offset: 0x668
	// Line 2158, Address: 0x38b098, Func Offset: 0x6b8
	// Line 2159, Address: 0x38b0e8, Func Offset: 0x708
	// Line 2160, Address: 0x38b138, Func Offset: 0x758
	// Line 2161, Address: 0x38b188, Func Offset: 0x7a8
	// Line 2162, Address: 0x38b1d8, Func Offset: 0x7f8
	// Line 2165, Address: 0x38b228, Func Offset: 0x848
	// Line 2166, Address: 0x38b274, Func Offset: 0x894
	// Line 2167, Address: 0x38b2bc, Func Offset: 0x8dc
	// Line 2171, Address: 0x38b308, Func Offset: 0x928
	// Line 2172, Address: 0x38b358, Func Offset: 0x978
	// Line 2173, Address: 0x38b3a8, Func Offset: 0x9c8
	// Line 2174, Address: 0x38b3f8, Func Offset: 0xa18
	// Line 2175, Address: 0x38b448, Func Offset: 0xa68
	// Line 2176, Address: 0x38b498, Func Offset: 0xab8
	// Line 2177, Address: 0x38b4e8, Func Offset: 0xb08
	// Line 2178, Address: 0x38b538, Func Offset: 0xb58
	// Line 2179, Address: 0x38b584, Func Offset: 0xba4
	// Line 2180, Address: 0x38b5d0, Func Offset: 0xbf0
	// Line 2181, Address: 0x38b61c, Func Offset: 0xc3c
	// Line 2182, Address: 0x38b668, Func Offset: 0xc88
	// Line 2184, Address: 0x38b6b0, Func Offset: 0xcd0
	// Line 2185, Address: 0x38b6fc, Func Offset: 0xd1c
	// Line 2186, Address: 0x38b740, Func Offset: 0xd60
	// Line 2187, Address: 0x38b78c, Func Offset: 0xdac
	// Line 2188, Address: 0x38b7d0, Func Offset: 0xdf0
	// Line 2189, Address: 0x38b81c, Func Offset: 0xe3c
	// Line 2201, Address: 0x38b860, Func Offset: 0xe80
	// Line 2202, Address: 0x38b864, Func Offset: 0xe84
	// Func End, Address: 0x38b874, Func Offset: 0xe94
}

// JumpEndedCB__4zCarFP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x38b880
uint32 zCar::JumpEndedCB()
{
	zCar* pCar;
	// Line 2104, Address: 0x38b880, Func Offset: 0
	// Line 2105, Address: 0x38b888, Func Offset: 0x8
	// Line 2106, Address: 0x38b890, Func Offset: 0x10
	// Line 2108, Address: 0x38b894, Func Offset: 0x14
	// Line 2107, Address: 0x38b898, Func Offset: 0x18
	// Line 2108, Address: 0x38b89c, Func Offset: 0x1c
	// Func End, Address: 0x38b8a4, Func Offset: 0x24
}

// JumpStartedCB__4zCarFP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x38b8b0
uint32 zCar::JumpStartedCB()
{
	zCar* pCar;
	// Line 2097, Address: 0x38b8b0, Func Offset: 0
	// Line 2098, Address: 0x38b8b8, Func Offset: 0x8
	// Line 2099, Address: 0x38b8c0, Func Offset: 0x10
	// Line 2101, Address: 0x38b8c8, Func Offset: 0x18
	// Line 2100, Address: 0x38b8cc, Func Offset: 0x1c
	// Line 2101, Address: 0x38b8d0, Func Offset: 0x20
	// Func End, Address: 0x38b8d8, Func Offset: 0x28
}

// AnimDefaultCB__4zCarFP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x38b8e0
uint32 zCar::AnimDefaultCB(xAnimSingle* anim)
{
	zCar* pCar;
	// Line 2088, Address: 0x38b8e0, Func Offset: 0
	// Line 2091, Address: 0x38b8ec, Func Offset: 0xc
	// Line 2092, Address: 0x38b8f4, Func Offset: 0x14
	// Line 2093, Address: 0x38b8fc, Func Offset: 0x1c
	// Line 2094, Address: 0x38b900, Func Offset: 0x20
	// Func End, Address: 0x38b910, Func Offset: 0x30
}

// DamageSpinCompleteCB__4zCarFP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x38b910
uint32 zCar::DamageSpinCompleteCB(xAnimSingle* anim)
{
	zCar* pCar;
	// Line 2080, Address: 0x38b910, Func Offset: 0
	// Line 2081, Address: 0x38b91c, Func Offset: 0xc
	// Line 2082, Address: 0x38b924, Func Offset: 0x14
	// Line 2083, Address: 0x38b92c, Func Offset: 0x1c
	// Line 2085, Address: 0x38b930, Func Offset: 0x20
	// Line 2084, Address: 0x38b934, Func Offset: 0x24
	// Line 2085, Address: 0x38b938, Func Offset: 0x28
	// Func End, Address: 0x38b944, Func Offset: 0x34
}

// DeathCheck__4zCarFP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x38b950
uint32 zCar::DeathCheck()
{
	zCar* pCar;
	// Line 2073, Address: 0x38b950, Func Offset: 0
	// Line 2074, Address: 0x38b958, Func Offset: 0x8
	// Line 2075, Address: 0x38b960, Func Offset: 0x10
	// Line 2076, Address: 0x38b964, Func Offset: 0x14
	// Line 2075, Address: 0x38b968, Func Offset: 0x18
	// Line 2076, Address: 0x38b970, Func Offset: 0x20
	// Func End, Address: 0x38b978, Func Offset: 0x28
}

// FailedCheck__4zCarFP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x38b980
uint32 zCar::FailedCheck()
{
	zCar* pCar;
	// Line 2067, Address: 0x38b980, Func Offset: 0
	// Line 2068, Address: 0x38b988, Func Offset: 0x8
	// Line 2069, Address: 0x38b990, Func Offset: 0x10
	// Line 2070, Address: 0x38b994, Func Offset: 0x14
	// Line 2069, Address: 0x38b998, Func Offset: 0x18
	// Line 2070, Address: 0x38b9a0, Func Offset: 0x20
	// Func End, Address: 0x38b9a8, Func Offset: 0x28
}

// SuccessCheck__4zCarFP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x38b9b0
uint32 zCar::SuccessCheck()
{
	zCar* pCar;
	// Line 2061, Address: 0x38b9b0, Func Offset: 0
	// Line 2062, Address: 0x38b9b8, Func Offset: 0x8
	// Line 2063, Address: 0x38b9c0, Func Offset: 0x10
	// Line 2064, Address: 0x38b9c4, Func Offset: 0x14
	// Line 2063, Address: 0x38b9c8, Func Offset: 0x18
	// Line 2064, Address: 0x38b9d0, Func Offset: 0x20
	// Func End, Address: 0x38b9d8, Func Offset: 0x28
}

// SpinRightCheck__4zCarFP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x38b9e0
uint32 zCar::SpinRightCheck()
{
	zCar* pCar;
	// Line 2055, Address: 0x38b9e0, Func Offset: 0
	// Line 2056, Address: 0x38b9e8, Func Offset: 0x8
	// Line 2057, Address: 0x38b9f0, Func Offset: 0x10
	// Line 2058, Address: 0x38b9f4, Func Offset: 0x14
	// Line 2057, Address: 0x38b9f8, Func Offset: 0x18
	// Line 2058, Address: 0x38ba00, Func Offset: 0x20
	// Func End, Address: 0x38ba08, Func Offset: 0x28
}

// SpinLeftCheck__4zCarFP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x38ba10
uint32 zCar::SpinLeftCheck()
{
	zCar* pCar;
	// Line 2049, Address: 0x38ba10, Func Offset: 0
	// Line 2050, Address: 0x38ba18, Func Offset: 0x8
	// Line 2051, Address: 0x38ba20, Func Offset: 0x10
	// Line 2052, Address: 0x38ba24, Func Offset: 0x14
	// Line 2051, Address: 0x38ba28, Func Offset: 0x18
	// Line 2052, Address: 0x38ba30, Func Offset: 0x20
	// Func End, Address: 0x38ba38, Func Offset: 0x28
}

// CrashCheck__4zCarFP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x38ba40
uint32 zCar::CrashCheck()
{
	zCar* pCar;
	// Line 2043, Address: 0x38ba40, Func Offset: 0
	// Line 2044, Address: 0x38ba48, Func Offset: 0x8
	// Line 2045, Address: 0x38ba50, Func Offset: 0x10
	// Line 2046, Address: 0x38ba54, Func Offset: 0x14
	// Line 2045, Address: 0x38ba58, Func Offset: 0x18
	// Line 2046, Address: 0x38ba60, Func Offset: 0x20
	// Func End, Address: 0x38ba68, Func Offset: 0x28
}

// JumpEndCheck__4zCarFP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x38ba70
uint32 zCar::JumpEndCheck()
{
	zCar* pCar;
	// Line 2037, Address: 0x38ba70, Func Offset: 0
	// Line 2038, Address: 0x38ba78, Func Offset: 0x8
	// Line 2039, Address: 0x38ba80, Func Offset: 0x10
	// Line 2040, Address: 0x38ba84, Func Offset: 0x14
	// Line 2039, Address: 0x38ba88, Func Offset: 0x18
	// Line 2040, Address: 0x38ba90, Func Offset: 0x20
	// Func End, Address: 0x38ba98, Func Offset: 0x28
}

// JumpCheck__4zCarFP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x38baa0
uint32 zCar::JumpCheck()
{
	zCar* pCar;
	// Line 2031, Address: 0x38baa0, Func Offset: 0
	// Line 2032, Address: 0x38baa8, Func Offset: 0x8
	// Line 2033, Address: 0x38bab0, Func Offset: 0x10
	// Line 2034, Address: 0x38bab4, Func Offset: 0x14
	// Line 2033, Address: 0x38bab8, Func Offset: 0x18
	// Line 2034, Address: 0x38bac0, Func Offset: 0x20
	// Func End, Address: 0x38bac8, Func Offset: 0x28
}

// ReverseCheck__4zCarFP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x38bad0
uint32 zCar::ReverseCheck()
{
	zCar* pCar;
	// Line 2025, Address: 0x38bad0, Func Offset: 0
	// Line 2026, Address: 0x38bad8, Func Offset: 0x8
	// Line 2027, Address: 0x38bae0, Func Offset: 0x10
	// Line 2028, Address: 0x38bae4, Func Offset: 0x14
	// Line 2027, Address: 0x38bae8, Func Offset: 0x18
	// Line 2028, Address: 0x38baf0, Func Offset: 0x20
	// Func End, Address: 0x38baf8, Func Offset: 0x28
}

// StartBoostingCheck__4zCarFP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x38bb00
uint32 zCar::StartBoostingCheck()
{
	zCar* pCar;
	// Line 2019, Address: 0x38bb00, Func Offset: 0
	// Line 2020, Address: 0x38bb08, Func Offset: 0x8
	// Line 2021, Address: 0x38bb10, Func Offset: 0x10
	// Line 2022, Address: 0x38bb14, Func Offset: 0x14
	// Line 2021, Address: 0x38bb18, Func Offset: 0x18
	// Line 2022, Address: 0x38bb20, Func Offset: 0x20
	// Func End, Address: 0x38bb28, Func Offset: 0x28
}

// StartDrivingSlippyCheck__4zCarFP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x38bb30
uint32 zCar::StartDrivingSlippyCheck()
{
	zCar* pCar;
	// Line 2013, Address: 0x38bb30, Func Offset: 0
	// Line 2014, Address: 0x38bb38, Func Offset: 0x8
	// Line 2015, Address: 0x38bb40, Func Offset: 0x10
	// Line 2016, Address: 0x38bb44, Func Offset: 0x14
	// Line 2015, Address: 0x38bb48, Func Offset: 0x18
	// Line 2016, Address: 0x38bb50, Func Offset: 0x20
	// Func End, Address: 0x38bb58, Func Offset: 0x28
}

// StartDrivingCheck__4zCarFP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x38bb60
uint32 zCar::StartDrivingCheck()
{
	zCar* pCar;
	// Line 2007, Address: 0x38bb60, Func Offset: 0
	// Line 2008, Address: 0x38bb68, Func Offset: 0x8
	// Line 2009, Address: 0x38bb70, Func Offset: 0x10
	// Line 2010, Address: 0x38bb74, Func Offset: 0x14
	// Line 2009, Address: 0x38bb78, Func Offset: 0x18
	// Line 2010, Address: 0x38bb80, Func Offset: 0x20
	// Func End, Address: 0x38bb88, Func Offset: 0x28
}

// IdleCheck__4zCarFP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x38bb90
uint32 zCar::IdleCheck()
{
	zCar* pCar;
	// Line 2000, Address: 0x38bb90, Func Offset: 0
	// Line 2001, Address: 0x38bb98, Func Offset: 0x8
	// Line 2002, Address: 0x38bba0, Func Offset: 0x10
	// Line 2003, Address: 0x38bba4, Func Offset: 0x14
	// Line 2002, Address: 0x38bba8, Func Offset: 0x18
	// Line 2003, Address: 0x38bbb0, Func Offset: 0x20
	// Func End, Address: 0x38bbb8, Func Offset: 0x28
}

// UpdateAnimState__4zCarFP4xEnt
// Start address: 0x38bbc0
void zCar::UpdateAnimState(xEnt* pEnt)
{
	// Line 1876, Address: 0x38bbc0, Func Offset: 0
	// Line 1878, Address: 0x38bbcc, Func Offset: 0xc
	// Line 1879, Address: 0x38bbdc, Func Offset: 0x1c
	// Line 1882, Address: 0x38bbe4, Func Offset: 0x24
	// Line 1895, Address: 0x38bbf8, Func Offset: 0x38
	// Line 1902, Address: 0x38bc08, Func Offset: 0x48
	// Line 1909, Address: 0x38bc14, Func Offset: 0x54
	// Line 1919, Address: 0x38bc20, Func Offset: 0x60
	// Line 1924, Address: 0x38bc4c, Func Offset: 0x8c
	// Line 1937, Address: 0x38bc5c, Func Offset: 0x9c
	// Line 1941, Address: 0x38bc64, Func Offset: 0xa4
	// Line 1949, Address: 0x38bc70, Func Offset: 0xb0
	// Line 1954, Address: 0x38bc7c, Func Offset: 0xbc
	// Line 1963, Address: 0x38bc94, Func Offset: 0xd4
	// Line 1964, Address: 0x38bcd8, Func Offset: 0x118
	// Line 1970, Address: 0x38bce4, Func Offset: 0x124
	// Line 1975, Address: 0x38bcf0, Func Offset: 0x130
	// Line 1980, Address: 0x38bd08, Func Offset: 0x148
	// Line 1984, Address: 0x38bd34, Func Offset: 0x174
	// Line 1985, Address: 0x38bd3c, Func Offset: 0x17c
	// Line 1987, Address: 0x38bd4c, Func Offset: 0x18c
	// Line 1988, Address: 0x38bd50, Func Offset: 0x190
	// Line 1992, Address: 0x38bd58, Func Offset: 0x198
	// Line 1994, Address: 0x38bd5c, Func Offset: 0x19c
	// Line 1898, Address: 0x38bd64, Func Offset: 0x1a4
	// Line 1905, Address: 0x38bd6c, Func Offset: 0x1ac
	// Line 1994, Address: 0x38bd70, Func Offset: 0x1b0
	// Line 1907, Address: 0x38bd78, Func Offset: 0x1b8
	// Line 1912, Address: 0x38bd80, Func Offset: 0x1c0
	// Line 1994, Address: 0x38bd84, Func Offset: 0x1c4
	// Line 1914, Address: 0x38bd8c, Func Offset: 0x1cc
	// Line 1927, Address: 0x38bd94, Func Offset: 0x1d4
	// Line 1994, Address: 0x38bd9c, Func Offset: 0x1dc
	// Line 1944, Address: 0x38bda0, Func Offset: 0x1e0
	// Line 1945, Address: 0x38bda4, Func Offset: 0x1e4
	// Line 1952, Address: 0x38bdac, Func Offset: 0x1ec
	// Line 1957, Address: 0x38bdb4, Func Offset: 0x1f4
	// Line 1994, Address: 0x38bdbc, Func Offset: 0x1fc
	// Line 1969, Address: 0x38bdc0, Func Offset: 0x200
	// Line 1974, Address: 0x38bdc8, Func Offset: 0x208
	// Line 1979, Address: 0x38bdd0, Func Offset: 0x210
	// Line 1994, Address: 0x38bdd8, Func Offset: 0x218
	// Func End, Address: 0x38bde0, Func Offset: 0x220
}

// ApplyCollisionRebounds__4zCarFP5xVec3
// Start address: 0x38bde0
void zCar::ApplyCollisionRebounds(xVec3* pVelocity)
{
	int32 i;
	float32 oldVertSpeed;
	xVec3 initialVel;
	xVec3 forwardVel;
	xVec3 velocityDelta;
	float32 volumeFactor;
	float32 volumeFactor;
	// Line 1762, Address: 0x38bde0, Func Offset: 0
	// Line 1763, Address: 0x38be18, Func Offset: 0x38
	// Line 1765, Address: 0x38be40, Func Offset: 0x60
	// Line 1769, Address: 0x38be50, Func Offset: 0x70
	// Line 1770, Address: 0x38be78, Func Offset: 0x98
	// Line 1778, Address: 0x38be84, Func Offset: 0xa4
	// Line 1773, Address: 0x38be8c, Func Offset: 0xac
	// Line 1778, Address: 0x38be90, Func Offset: 0xb0
	// Line 1789, Address: 0x38be9c, Func Offset: 0xbc
	// Line 1775, Address: 0x38bea4, Func Offset: 0xc4
	// Line 1778, Address: 0x38beb4, Func Offset: 0xd4
	// Line 1775, Address: 0x38bebc, Func Offset: 0xdc
	// Line 1789, Address: 0x38bec0, Func Offset: 0xe0
	// Line 1775, Address: 0x38bec4, Func Offset: 0xe4
	// Line 1778, Address: 0x38becc, Func Offset: 0xec
	// Line 1779, Address: 0x38bed4, Func Offset: 0xf4
	// Line 1780, Address: 0x38bee8, Func Offset: 0x108
	// Line 1789, Address: 0x38befc, Func Offset: 0x11c
	// Line 1791, Address: 0x38bf58, Func Offset: 0x178
	// Line 1796, Address: 0x38bf74, Func Offset: 0x194
	// Line 1803, Address: 0x38bf78, Func Offset: 0x198
	// Line 1796, Address: 0x38bf7c, Func Offset: 0x19c
	// Line 1797, Address: 0x38bf80, Func Offset: 0x1a0
	// Line 1796, Address: 0x38bf84, Func Offset: 0x1a4
	// Line 1797, Address: 0x38bf98, Func Offset: 0x1b8
	// Line 1796, Address: 0x38bfa0, Func Offset: 0x1c0
	// Line 1797, Address: 0x38bfa4, Func Offset: 0x1c4
	// Line 1796, Address: 0x38bfa8, Func Offset: 0x1c8
	// Line 1803, Address: 0x38bfac, Func Offset: 0x1cc
	// Line 1797, Address: 0x38bfb0, Func Offset: 0x1d0
	// Line 1803, Address: 0x38bfc8, Func Offset: 0x1e8
	// Line 1797, Address: 0x38bfd4, Func Offset: 0x1f4
	// Line 1803, Address: 0x38c004, Func Offset: 0x224
	// Line 1797, Address: 0x38c00c, Func Offset: 0x22c
	// Line 1803, Address: 0x38c014, Func Offset: 0x234
	// Line 1805, Address: 0x38c03c, Func Offset: 0x25c
	// Line 1806, Address: 0x38c050, Func Offset: 0x270
	// Line 1808, Address: 0x38c054, Func Offset: 0x274
	// Line 1812, Address: 0x38c05c, Func Offset: 0x27c
	// Line 1818, Address: 0x38c060, Func Offset: 0x280
	// Line 1812, Address: 0x38c068, Func Offset: 0x288
	// Line 1818, Address: 0x38c078, Func Offset: 0x298
	// Line 1812, Address: 0x38c07c, Func Offset: 0x29c
	// Line 1813, Address: 0x38c0e0, Func Offset: 0x300
	// Line 1812, Address: 0x38c0ec, Func Offset: 0x30c
	// Line 1813, Address: 0x38c0f4, Func Offset: 0x314
	// Line 1814, Address: 0x38c0fc, Func Offset: 0x31c
	// Line 1813, Address: 0x38c100, Func Offset: 0x320
	// Line 1814, Address: 0x38c108, Func Offset: 0x328
	// Line 1818, Address: 0x38c11c, Func Offset: 0x33c
	// Line 1821, Address: 0x38c13c, Func Offset: 0x35c
	// Line 1824, Address: 0x38c144, Func Offset: 0x364
	// Line 1821, Address: 0x38c148, Func Offset: 0x368
	// Line 1824, Address: 0x38c14c, Func Offset: 0x36c
	// Line 1821, Address: 0x38c154, Func Offset: 0x374
	// Line 1824, Address: 0x38c160, Func Offset: 0x380
	// Line 1825, Address: 0x38c1bc, Func Offset: 0x3dc
	// Line 1826, Address: 0x38c1c4, Func Offset: 0x3e4
	// Line 1831, Address: 0x38c200, Func Offset: 0x420
	// Line 1833, Address: 0x38c208, Func Offset: 0x428
	// Line 1831, Address: 0x38c20c, Func Offset: 0x42c
	// Line 1833, Address: 0x38c210, Func Offset: 0x430
	// Line 1831, Address: 0x38c218, Func Offset: 0x438
	// Line 1833, Address: 0x38c224, Func Offset: 0x444
	// Line 1835, Address: 0x38c274, Func Offset: 0x494
	// Line 1836, Address: 0x38c288, Func Offset: 0x4a8
	// Line 1840, Address: 0x38c290, Func Offset: 0x4b0
	// Line 1836, Address: 0x38c298, Func Offset: 0x4b8
	// Line 1840, Address: 0x38c29c, Func Offset: 0x4bc
	// Line 1841, Address: 0x38c2a8, Func Offset: 0x4c8
	// Func End, Address: 0x38c2dc, Func Offset: 0x4fc
}

// DepenetrateCollisionList__4zCarFP5xVec3f
// Start address: 0x38c2e0
void zCar::DepenetrateCollisionList(xVec3* pPosition)
{
	int32 i;
	float32 innerBound;
	xVec3 depen;
	float32 depenScale;
	// Line 1732, Address: 0x38c2e0, Func Offset: 0
	// Line 1733, Address: 0x38c2e4, Func Offset: 0x4
	// Line 1735, Address: 0x38c308, Func Offset: 0x28
	// Line 1737, Address: 0x38c314, Func Offset: 0x34
	// Line 1739, Address: 0x38c31c, Func Offset: 0x3c
	// Line 1742, Address: 0x38c320, Func Offset: 0x40
	// Line 1739, Address: 0x38c324, Func Offset: 0x44
	// Line 1742, Address: 0x38c32c, Func Offset: 0x4c
	// Line 1739, Address: 0x38c330, Func Offset: 0x50
	// Line 1740, Address: 0x38c334, Func Offset: 0x54
	// Line 1742, Address: 0x38c338, Func Offset: 0x58
	// Line 1740, Address: 0x38c33c, Func Offset: 0x5c
	// Line 1739, Address: 0x38c348, Func Offset: 0x68
	// Line 1742, Address: 0x38c34c, Func Offset: 0x6c
	// Line 1739, Address: 0x38c358, Func Offset: 0x78
	// Line 1743, Address: 0x38c360, Func Offset: 0x80
	// Line 1747, Address: 0x38c36c, Func Offset: 0x8c
	// Line 1749, Address: 0x38c378, Func Offset: 0x98
	// Line 1748, Address: 0x38c37c, Func Offset: 0x9c
	// Line 1749, Address: 0x38c384, Func Offset: 0xa4
	// Line 1748, Address: 0x38c38c, Func Offset: 0xac
	// Line 1749, Address: 0x38c390, Func Offset: 0xb0
	// Line 1748, Address: 0x38c394, Func Offset: 0xb4
	// Line 1749, Address: 0x38c3a0, Func Offset: 0xc0
	// Line 1748, Address: 0x38c3a8, Func Offset: 0xc8
	// Line 1749, Address: 0x38c3ac, Func Offset: 0xcc
	// Line 1748, Address: 0x38c3b0, Func Offset: 0xd0
	// Line 1749, Address: 0x38c3b4, Func Offset: 0xd4
	// Line 1751, Address: 0x38c3b8, Func Offset: 0xd8
	// Line 1754, Address: 0x38c3c0, Func Offset: 0xe0
	// Line 1757, Address: 0x38c3f0, Func Offset: 0x110
	// Line 1754, Address: 0x38c3f8, Func Offset: 0x118
	// Line 1757, Address: 0x38c3fc, Func Offset: 0x11c
	// Line 1758, Address: 0x38c408, Func Offset: 0x128
	// Func End, Address: 0x38c410, Func Offset: 0x130
}

// PreventPoppingThroughWorld__4zCarFPC5xVec3P5xVec3P5xVec3
// Start address: 0x38c410
void zCar::PreventPoppingThroughWorld(xVec3* pStartPosition, xVec3* pEndPosition, xVec3* pVelocity)
{
	xVec3 startPos;
	xVec3 endPos;
	xVec3 direction;
	float32 rayLength;
	xRay3 ray;
	xCollis collision;
	// Line 1683, Address: 0x38c410, Func Offset: 0
	// Line 1685, Address: 0x38c418, Func Offset: 0x8
	// Line 1683, Address: 0x38c41c, Func Offset: 0xc
	// Line 1685, Address: 0x38c420, Func Offset: 0x10
	// Line 1683, Address: 0x38c424, Func Offset: 0x14
	// Line 1685, Address: 0x38c428, Func Offset: 0x18
	// Line 1686, Address: 0x38c42c, Func Offset: 0x1c
	// Line 1687, Address: 0x38c430, Func Offset: 0x20
	// Line 1686, Address: 0x38c434, Func Offset: 0x24
	// Line 1685, Address: 0x38c444, Func Offset: 0x34
	// Line 1688, Address: 0x38c450, Func Offset: 0x40
	// Line 1686, Address: 0x38c454, Func Offset: 0x44
	// Line 1687, Address: 0x38c45c, Func Offset: 0x4c
	// Line 1686, Address: 0x38c464, Func Offset: 0x54
	// Line 1687, Address: 0x38c468, Func Offset: 0x58
	// Line 1688, Address: 0x38c490, Func Offset: 0x80
	// Line 1695, Address: 0x38c498, Func Offset: 0x88
	// Line 1694, Address: 0x38c49c, Func Offset: 0x8c
	// Line 1695, Address: 0x38c4a0, Func Offset: 0x90
	// Line 1693, Address: 0x38c4a4, Func Offset: 0x94
	// Line 1697, Address: 0x38c4a8, Func Offset: 0x98
	// Line 1699, Address: 0x38c4ac, Func Offset: 0x9c
	// Line 1697, Address: 0x38c4b0, Func Offset: 0xa0
	// Line 1691, Address: 0x38c4b4, Func Offset: 0xa4
	// Line 1699, Address: 0x38c4b8, Func Offset: 0xa8
	// Line 1691, Address: 0x38c4bc, Func Offset: 0xac
	// Line 1699, Address: 0x38c4c0, Func Offset: 0xb0
	// Line 1691, Address: 0x38c4c4, Func Offset: 0xb4
	// Line 1692, Address: 0x38c4c8, Func Offset: 0xb8
	// Line 1691, Address: 0x38c4d4, Func Offset: 0xc4
	// Line 1692, Address: 0x38c4e0, Func Offset: 0xd0
	// Line 1699, Address: 0x38c4ec, Func Offset: 0xdc
	// Line 1702, Address: 0x38c4f8, Func Offset: 0xe8
	// Line 1706, Address: 0x38c508, Func Offset: 0xf8
	// Line 1709, Address: 0x38c514, Func Offset: 0x104
	// Line 1706, Address: 0x38c518, Func Offset: 0x108
	// Line 1709, Address: 0x38c524, Func Offset: 0x114
	// Line 1710, Address: 0x38c548, Func Offset: 0x138
	// Line 1712, Address: 0x38c554, Func Offset: 0x144
	// Line 1713, Address: 0x38c580, Func Offset: 0x170
	// Line 1714, Address: 0x38c594, Func Offset: 0x184
	// Line 1727, Address: 0x38c5a8, Func Offset: 0x198
	// Func End, Address: 0x38c5bc, Func Offset: 0x1ac
}

// SphereCollision__4zCarFPC5xVec3PC5xVec3PbPfP5xVec3
// Start address: 0x38c5c0
void zCar::SphereCollision(xVec3* pNewCarPosition, xVec3* pVelocity, uint8* pInGroundContact, float32* pShockExtension, xVec3* pGroundNormal)
{
	int32 i;
	xSphere collisionSphere;
	uint32 i;
	uint32 numGroundCollisions;
	float32 averageShockPos;
	xVec3 averageGroundNormal;
	int32 i;
	xSurface* pSurface;
	uint8 isWallSurfaceType;
	zDrivingSurf surfaceType;
	xEnt* pEntity;
	xEntBoulder* pBoulder;
	float32 dot;
	xVec3 newVel;
	float32 hitParams[4];
	zNMECommon* pNME;
	en_npctyp type;
	float32 hitParams[4];
	float32 hitParams[4];
	uint8 isSteepSurface;
	float32 distFromMidShockPos;
	// Line 1342, Address: 0x38c5c0, Func Offset: 0
	// Line 1344, Address: 0x38c5f0, Func Offset: 0x30
	// Line 1342, Address: 0x38c5f4, Func Offset: 0x34
	// Line 1344, Address: 0x38c62c, Func Offset: 0x6c
	// Line 1345, Address: 0x38c630, Func Offset: 0x70
	// Line 1353, Address: 0x38c658, Func Offset: 0x98
	// Line 1345, Address: 0x38c65c, Func Offset: 0x9c
	// Line 1353, Address: 0x38c660, Func Offset: 0xa0
	// Line 1345, Address: 0x38c664, Func Offset: 0xa4
	// Line 1353, Address: 0x38c668, Func Offset: 0xa8
	// Line 1363, Address: 0x38c66c, Func Offset: 0xac
	// Line 1353, Address: 0x38c674, Func Offset: 0xb4
	// Line 1363, Address: 0x38c680, Func Offset: 0xc0
	// Line 1354, Address: 0x38c684, Func Offset: 0xc4
	// Line 1363, Address: 0x38c688, Func Offset: 0xc8
	// Line 1364, Address: 0x38c690, Func Offset: 0xd0
	// Line 1367, Address: 0x38c69c, Func Offset: 0xdc
	// Line 1366, Address: 0x38c6a0, Func Offset: 0xe0
	// Line 1367, Address: 0x38c6a4, Func Offset: 0xe4
	// Line 1371, Address: 0x38c6e4, Func Offset: 0x124
	// Line 1377, Address: 0x38c708, Func Offset: 0x148
	// Line 1374, Address: 0x38c70c, Func Offset: 0x14c
	// Line 1377, Address: 0x38c710, Func Offset: 0x150
	// Line 1374, Address: 0x38c714, Func Offset: 0x154
	// Line 1377, Address: 0x38c718, Func Offset: 0x158
	// Line 1375, Address: 0x38c71c, Func Offset: 0x15c
	// Line 1377, Address: 0x38c720, Func Offset: 0x160
	// Line 1375, Address: 0x38c724, Func Offset: 0x164
	// Line 1376, Address: 0x38c728, Func Offset: 0x168
	// Line 1377, Address: 0x38c73c, Func Offset: 0x17c
	// Line 1378, Address: 0x38c744, Func Offset: 0x184
	// Line 1379, Address: 0x38c75c, Func Offset: 0x19c
	// Line 1380, Address: 0x38c774, Func Offset: 0x1b4
	// Line 1387, Address: 0x38c78c, Func Offset: 0x1cc
	// Line 1385, Address: 0x38c798, Func Offset: 0x1d8
	// Line 1387, Address: 0x38c79c, Func Offset: 0x1dc
	// Line 1384, Address: 0x38c7a0, Func Offset: 0x1e0
	// Line 1387, Address: 0x38c7a4, Func Offset: 0x1e4
	// Line 1390, Address: 0x38c7a8, Func Offset: 0x1e8
	// Line 1396, Address: 0x38c7f0, Func Offset: 0x230
	// Line 1398, Address: 0x38c800, Func Offset: 0x240
	// Line 1399, Address: 0x38c808, Func Offset: 0x248
	// Line 1406, Address: 0x38c80c, Func Offset: 0x24c
	// Line 1407, Address: 0x38c810, Func Offset: 0x250
	// Line 1416, Address: 0x38c820, Func Offset: 0x260
	// Line 1411, Address: 0x38c824, Func Offset: 0x264
	// Line 1416, Address: 0x38c828, Func Offset: 0x268
	// Line 1414, Address: 0x38c82c, Func Offset: 0x26c
	// Line 1416, Address: 0x38c830, Func Offset: 0x270
	// Line 1426, Address: 0x38c844, Func Offset: 0x284
	// Line 1431, Address: 0x38c850, Func Offset: 0x290
	// Line 1432, Address: 0x38c854, Func Offset: 0x294
	// Line 1434, Address: 0x38c85c, Func Offset: 0x29c
	// Line 1439, Address: 0x38c894, Func Offset: 0x2d4
	// Line 1442, Address: 0x38c8a8, Func Offset: 0x2e8
	// Line 1452, Address: 0x38c8cc, Func Offset: 0x30c
	// Line 1456, Address: 0x38c914, Func Offset: 0x354
	// Line 1452, Address: 0x38c91c, Func Offset: 0x35c
	// Line 1456, Address: 0x38c920, Func Offset: 0x360
	// Line 1452, Address: 0x38c924, Func Offset: 0x364
	// Line 1456, Address: 0x38c928, Func Offset: 0x368
	// Line 1457, Address: 0x38c92c, Func Offset: 0x36c
	// Line 1456, Address: 0x38c930, Func Offset: 0x370
	// Line 1457, Address: 0x38c934, Func Offset: 0x374
	// Line 1456, Address: 0x38c938, Func Offset: 0x378
	// Line 1457, Address: 0x38c944, Func Offset: 0x384
	// Line 1456, Address: 0x38c950, Func Offset: 0x390
	// Line 1457, Address: 0x38c958, Func Offset: 0x398
	// Line 1458, Address: 0x38c964, Func Offset: 0x3a4
	// Line 1465, Address: 0x38c970, Func Offset: 0x3b0
	// Line 1466, Address: 0x38c97c, Func Offset: 0x3bc
	// Line 1465, Address: 0x38c980, Func Offset: 0x3c0
	// Line 1466, Address: 0x38c988, Func Offset: 0x3c8
	// Line 1465, Address: 0x38c998, Func Offset: 0x3d8
	// Line 1466, Address: 0x38c9b0, Func Offset: 0x3f0
	// Line 1465, Address: 0x38c9b4, Func Offset: 0x3f4
	// Line 1466, Address: 0x38c9bc, Func Offset: 0x3fc
	// Line 1468, Address: 0x38c9c8, Func Offset: 0x408
	// Line 1474, Address: 0x38c9d0, Func Offset: 0x410
	// Line 1475, Address: 0x38c9f4, Func Offset: 0x434
	// Line 1477, Address: 0x38ca04, Func Offset: 0x444
	// Line 1478, Address: 0x38ca08, Func Offset: 0x448
	// Line 1480, Address: 0x38ca1c, Func Offset: 0x45c
	// Line 1481, Address: 0x38ca24, Func Offset: 0x464
	// Line 1488, Address: 0x38ca3c, Func Offset: 0x47c
	// Line 1495, Address: 0x38ca44, Func Offset: 0x484
	// Line 1498, Address: 0x38ca50, Func Offset: 0x490
	// Line 1499, Address: 0x38ca58, Func Offset: 0x498
	// Line 1498, Address: 0x38ca5c, Func Offset: 0x49c
	// Line 1499, Address: 0x38ca64, Func Offset: 0x4a4
	// Line 1498, Address: 0x38ca7c, Func Offset: 0x4bc
	// Line 1499, Address: 0x38ca98, Func Offset: 0x4d8
	// Line 1500, Address: 0x38caa0, Func Offset: 0x4e0
	// Line 1501, Address: 0x38caac, Func Offset: 0x4ec
	// Line 1509, Address: 0x38cab4, Func Offset: 0x4f4
	// Line 1510, Address: 0x38cabc, Func Offset: 0x4fc
	// Line 1509, Address: 0x38cad8, Func Offset: 0x518
	// Line 1510, Address: 0x38cafc, Func Offset: 0x53c
	// Line 1511, Address: 0x38cb04, Func Offset: 0x544
	// Line 1514, Address: 0x38cb10, Func Offset: 0x550
	// Line 1661, Address: 0x38cb20, Func Offset: 0x560
	// Line 1514, Address: 0x38cb28, Func Offset: 0x568
	// Line 1661, Address: 0x38cb2c, Func Offset: 0x56c
	// Line 1664, Address: 0x38cb38, Func Offset: 0x578
	// Line 1672, Address: 0x38cb40, Func Offset: 0x580
	// Line 1674, Address: 0x38cb44, Func Offset: 0x584
	// Line 1672, Address: 0x38cb48, Func Offset: 0x588
	// Line 1673, Address: 0x38cb4c, Func Offset: 0x58c
	// Line 1674, Address: 0x38cb50, Func Offset: 0x590
	// Line 1673, Address: 0x38cb54, Func Offset: 0x594
	// Line 1675, Address: 0x38cb68, Func Offset: 0x5a8
	// Line 1421, Address: 0x38cb84, Func Offset: 0x5c4
	// Line 1675, Address: 0x38cb9c, Func Offset: 0x5dc
	// Line 1460, Address: 0x38cbc0, Func Offset: 0x600
	// Line 1675, Address: 0x38cbc4, Func Offset: 0x604
	// Line 1460, Address: 0x38cbe0, Func Offset: 0x620
	// Line 1675, Address: 0x38cbe4, Func Offset: 0x624
	// Line 1460, Address: 0x38cc0c, Func Offset: 0x64c
	// Line 1675, Address: 0x38cc10, Func Offset: 0x650
	// Line 1460, Address: 0x38cc30, Func Offset: 0x670
	// Line 1675, Address: 0x38cc38, Func Offset: 0x678
	// Line 1460, Address: 0x38cc60, Func Offset: 0x6a0
	// Line 1675, Address: 0x38cc64, Func Offset: 0x6a4
	// Line 1532, Address: 0x38ccb4, Func Offset: 0x6f4
	// Line 1675, Address: 0x38ccc4, Func Offset: 0x704
	// Line 1535, Address: 0x38cccc, Func Offset: 0x70c
	// Line 1675, Address: 0x38ccd4, Func Offset: 0x714
	// Line 1550, Address: 0x38ccd8, Func Offset: 0x718
	// Line 1675, Address: 0x38ccdc, Func Offset: 0x71c
	// Line 1549, Address: 0x38ccf8, Func Offset: 0x738
	// Line 1550, Address: 0x38cd04, Func Offset: 0x744
	// Line 1675, Address: 0x38cd08, Func Offset: 0x748
	// Line 1550, Address: 0x38cd10, Func Offset: 0x750
	// Line 1675, Address: 0x38cd28, Func Offset: 0x768
	// Line 1550, Address: 0x38cd30, Func Offset: 0x770
	// Line 1675, Address: 0x38cd44, Func Offset: 0x784
	// Line 1550, Address: 0x38cd4c, Func Offset: 0x78c
	// Line 1675, Address: 0x38cd50, Func Offset: 0x790
	// Line 1557, Address: 0x38cd54, Func Offset: 0x794
	// Line 1675, Address: 0x38cd58, Func Offset: 0x798
	// Line 1557, Address: 0x38cd60, Func Offset: 0x7a0
	// Line 1556, Address: 0x38cd68, Func Offset: 0x7a8
	// Line 1557, Address: 0x38cd74, Func Offset: 0x7b4
	// Line 1675, Address: 0x38cd78, Func Offset: 0x7b8
	// Line 1557, Address: 0x38cd80, Func Offset: 0x7c0
	// Line 1675, Address: 0x38cd90, Func Offset: 0x7d0
	// Line 1557, Address: 0x38cd98, Func Offset: 0x7d8
	// Line 1675, Address: 0x38cdac, Func Offset: 0x7ec
	// Line 1557, Address: 0x38cdb4, Func Offset: 0x7f4
	// Line 1558, Address: 0x38cdc4, Func Offset: 0x804
	// Line 1675, Address: 0x38cdd4, Func Offset: 0x814
	// Line 1558, Address: 0x38cddc, Func Offset: 0x81c
	// Line 1675, Address: 0x38cdec, Func Offset: 0x82c
	// Line 1558, Address: 0x38cdf4, Func Offset: 0x834
	// Line 1675, Address: 0x38cdf8, Func Offset: 0x838
	// Line 1561, Address: 0x38ce00, Func Offset: 0x840
	// Line 1675, Address: 0x38ce24, Func Offset: 0x864
	// Line 1577, Address: 0x38ce5c, Func Offset: 0x89c
	// Line 1675, Address: 0x38ce60, Func Offset: 0x8a0
	// Line 1583, Address: 0x38ce7c, Func Offset: 0x8bc
	// Line 1675, Address: 0x38ce94, Func Offset: 0x8d4
	// Line 1587, Address: 0x38cea0, Func Offset: 0x8e0
	// Line 1589, Address: 0x38cea4, Func Offset: 0x8e4
	// Line 1675, Address: 0x38ceac, Func Offset: 0x8ec
	// Line 1533, Address: 0x38ceb8, Func Offset: 0x8f8
	// Line 1675, Address: 0x38cebc, Func Offset: 0x8fc
	// Line 1533, Address: 0x38cedc, Func Offset: 0x91c
	// Line 1675, Address: 0x38cee0, Func Offset: 0x920
	// Line 1533, Address: 0x38cee4, Func Offset: 0x924
	// Line 1675, Address: 0x38ceec, Func Offset: 0x92c
	// Line 1533, Address: 0x38cf1c, Func Offset: 0x95c
	// Line 1675, Address: 0x38cf24, Func Offset: 0x964
	// Line 1611, Address: 0x38cf40, Func Offset: 0x980
	// Line 1612, Address: 0x38cf50, Func Offset: 0x990
	// Line 1675, Address: 0x38cf54, Func Offset: 0x994
	// Line 1625, Address: 0x38cf5c, Func Offset: 0x99c
	// Line 1619, Address: 0x38cf60, Func Offset: 0x9a0
	// Line 1675, Address: 0x38cf64, Func Offset: 0x9a4
	// Line 1619, Address: 0x38cf68, Func Offset: 0x9a8
	// Line 1625, Address: 0x38cf78, Func Offset: 0x9b8
	// Line 1675, Address: 0x38cf7c, Func Offset: 0x9bc
	// Line 1625, Address: 0x38cf90, Func Offset: 0x9d0
	// Line 1675, Address: 0x38cf94, Func Offset: 0x9d4
	// Line 1620, Address: 0x38cf9c, Func Offset: 0x9dc
	// Line 1675, Address: 0x38cfa0, Func Offset: 0x9e0
	// Line 1620, Address: 0x38cfac, Func Offset: 0x9ec
	// Line 1675, Address: 0x38cfb0, Func Offset: 0x9f0
	// Line 1620, Address: 0x38cfbc, Func Offset: 0x9fc
	// Line 1675, Address: 0x38cfc0, Func Offset: 0xa00
	// Line 1628, Address: 0x38cfc8, Func Offset: 0xa08
	// Line 1631, Address: 0x38cfcc, Func Offset: 0xa0c
	// Line 1675, Address: 0x38cfd4, Func Offset: 0xa14
	// Line 1666, Address: 0x38cfdc, Func Offset: 0xa1c
	// Line 1667, Address: 0x38d010, Func Offset: 0xa50
	// Line 1675, Address: 0x38d018, Func Offset: 0xa58
	// Line 1667, Address: 0x38d020, Func Offset: 0xa60
	// Line 1675, Address: 0x38d050, Func Offset: 0xa90
	// Line 1668, Address: 0x38d058, Func Offset: 0xa98
	// Line 1675, Address: 0x38d05c, Func Offset: 0xa9c
	// Line 1667, Address: 0x38d064, Func Offset: 0xaa4
	// Line 1675, Address: 0x38d068, Func Offset: 0xaa8
	// Line 1667, Address: 0x38d074, Func Offset: 0xab4
	// Line 1675, Address: 0x38d07c, Func Offset: 0xabc
	// Func End, Address: 0x38d0f0, Func Offset: 0xb30
}

// __cl__4zCarFR4xEnt
// Start address: 0x38d0f0
uint8 zCar::__cl(xEnt& ent)
{
	xCollis* pCollis;
	int32 collisionsDetected;
	int32 maxCollisions;
	int32 f;
	int32 f;
	// Line 1288, Address: 0x38d0f0, Func Offset: 0
	// Line 1289, Address: 0x38d0f4, Func Offset: 0x4
	// Line 1288, Address: 0x38d0f8, Func Offset: 0x8
	// Line 1289, Address: 0x38d118, Func Offset: 0x28
	// Line 1292, Address: 0x38d120, Func Offset: 0x30
	// Line 1293, Address: 0x38d130, Func Offset: 0x40
	// Line 1290, Address: 0x38d138, Func Offset: 0x48
	// Line 1297, Address: 0x38d140, Func Offset: 0x50
	// Line 1296, Address: 0x38d144, Func Offset: 0x54
	// Line 1297, Address: 0x38d148, Func Offset: 0x58
	// Line 1296, Address: 0x38d14c, Func Offset: 0x5c
	// Line 1297, Address: 0x38d160, Func Offset: 0x70
	// Line 1298, Address: 0x38d168, Func Offset: 0x78
	// Line 1303, Address: 0x38d178, Func Offset: 0x88
	// Line 1324, Address: 0x38d188, Func Offset: 0x98
	// Line 1332, Address: 0x38d18c, Func Offset: 0x9c
	// Line 1334, Address: 0x38d2d0, Func Offset: 0x1e0
	// Line 1335, Address: 0x38d2d4, Func Offset: 0x1e4
	// Line 1334, Address: 0x38d2d8, Func Offset: 0x1e8
	// Line 1335, Address: 0x38d2dc, Func Offset: 0x1ec
	// Line 1299, Address: 0x38d2e4, Func Offset: 0x1f4
	// Line 1335, Address: 0x38d2ec, Func Offset: 0x1fc
	// Line 1308, Address: 0x38d2f0, Func Offset: 0x200
	// Line 1306, Address: 0x38d2f4, Func Offset: 0x204
	// Line 1308, Address: 0x38d2f8, Func Offset: 0x208
	// Line 1335, Address: 0x38d2fc, Func Offset: 0x20c
	// Line 1308, Address: 0x38d300, Func Offset: 0x210
	// Line 1335, Address: 0x38d30c, Func Offset: 0x21c
	// Line 1314, Address: 0x38d32c, Func Offset: 0x23c
	// Line 1335, Address: 0x38d330, Func Offset: 0x240
	// Line 1318, Address: 0x38d34c, Func Offset: 0x25c
	// Line 1335, Address: 0x38d350, Func Offset: 0x260
	// Line 1320, Address: 0x38d358, Func Offset: 0x268
	// Line 1336, Address: 0x38d35c, Func Offset: 0x26c
	// Func End, Address: 0x38d37c, Func Offset: 0x28c
}

// UpdateGroundCharacteristics__4zCarFv
// Start address: 0x38d380
void zCar::UpdateGroundCharacteristics()
{
	int32 i;
	// Line 1245, Address: 0x38d380, Func Offset: 0
	// Line 1247, Address: 0x38d384, Func Offset: 0x4
	// Line 1245, Address: 0x38d388, Func Offset: 0x8
	// Line 1249, Address: 0x38d394, Func Offset: 0x14
	// Line 1251, Address: 0x38d3ac, Func Offset: 0x2c
	// Line 1260, Address: 0x38d3bc, Func Offset: 0x3c
	// Line 1251, Address: 0x38d3c0, Func Offset: 0x40
	// Line 1252, Address: 0x38d3c8, Func Offset: 0x48
	// Line 1260, Address: 0x38d3cc, Func Offset: 0x4c
	// Line 1270, Address: 0x38d3d8, Func Offset: 0x58
	// Line 1278, Address: 0x38d3f0, Func Offset: 0x70
	// Line 1280, Address: 0x38d3f8, Func Offset: 0x78
	// Line 1281, Address: 0x38d404, Func Offset: 0x84
	// Line 1263, Address: 0x38d40c, Func Offset: 0x8c
	// Line 1281, Address: 0x38d410, Func Offset: 0x90
	// Line 1275, Address: 0x38d454, Func Offset: 0xd4
	// Line 1281, Address: 0x38d458, Func Offset: 0xd8
	// Func End, Address: 0x38d474, Func Offset: 0xf4
}

// CalculateIdealOrientation__4zCarFfP7xMat3x3P5xVec3
// Start address: 0x38d480
void zCar::CalculateIdealOrientation(float32 yaw, xMat3x3* pIdealOrientation, xVec3* pGroundNormal)
{
	xMat3x3 yawMatrix;
	xVec3 inclineRotAxis;
	xMat3x3 inclineMatrix;
	xVec3 flightArcDirection;
	xVec3 flightArcRightVec;
	float32 tilt;
	xMat3x3 inclineMatrix;
	// Line 1173, Address: 0x38d480, Func Offset: 0
	// Line 1176, Address: 0x38d4a0, Func Offset: 0x20
	// Line 1178, Address: 0x38d4ac, Func Offset: 0x2c
	// Line 1197, Address: 0x38d4b8, Func Offset: 0x38
	// Line 1200, Address: 0x38d4d8, Func Offset: 0x58
	// Line 1242, Address: 0x38d538, Func Offset: 0xb8
	// Line 1183, Address: 0x38d554, Func Offset: 0xd4
	// Line 1242, Address: 0x38d558, Func Offset: 0xd8
	// Line 1184, Address: 0x38d574, Func Offset: 0xf4
	// Line 1242, Address: 0x38d580, Func Offset: 0x100
	// Line 1183, Address: 0x38d5d4, Func Offset: 0x154
	// Line 1184, Address: 0x38d5e0, Func Offset: 0x160
	// Line 1242, Address: 0x38d5e4, Func Offset: 0x164
	// Line 1187, Address: 0x38d5ec, Func Offset: 0x16c
	// Line 1242, Address: 0x38d5f0, Func Offset: 0x170
	// Line 1188, Address: 0x38d5f4, Func Offset: 0x174
	// Line 1187, Address: 0x38d5f8, Func Offset: 0x178
	// Line 1242, Address: 0x38d600, Func Offset: 0x180
	// Line 1187, Address: 0x38d60c, Func Offset: 0x18c
	// Line 1242, Address: 0x38d618, Func Offset: 0x198
	// Line 1187, Address: 0x38d624, Func Offset: 0x1a4
	// Line 1242, Address: 0x38d630, Func Offset: 0x1b0
	// Line 1189, Address: 0x38d638, Func Offset: 0x1b8
	// Line 1242, Address: 0x38d648, Func Offset: 0x1c8
	// Line 1189, Address: 0x38d650, Func Offset: 0x1d0
	// Line 1242, Address: 0x38d664, Func Offset: 0x1e4
	// Line 1189, Address: 0x38d66c, Func Offset: 0x1ec
	// Line 1242, Address: 0x38d674, Func Offset: 0x1f4
	// Line 1192, Address: 0x38d694, Func Offset: 0x214
	// Line 1242, Address: 0x38d69c, Func Offset: 0x21c
	// Line 1194, Address: 0x38d6a4, Func Offset: 0x224
	// Line 1213, Address: 0x38d6ac, Func Offset: 0x22c
	// Line 1242, Address: 0x38d6b0, Func Offset: 0x230
	// Line 1213, Address: 0x38d6b8, Func Offset: 0x238
	// Line 1242, Address: 0x38d6cc, Func Offset: 0x24c
	// Line 1219, Address: 0x38d750, Func Offset: 0x2d0
	// Line 1242, Address: 0x38d754, Func Offset: 0x2d4
	// Line 1218, Address: 0x38d76c, Func Offset: 0x2ec
	// Line 1242, Address: 0x38d774, Func Offset: 0x2f4
	// Line 1218, Address: 0x38d778, Func Offset: 0x2f8
	// Line 1242, Address: 0x38d784, Func Offset: 0x304
	// Line 1218, Address: 0x38d788, Func Offset: 0x308
	// Line 1242, Address: 0x38d78c, Func Offset: 0x30c
	// Line 1219, Address: 0x38d794, Func Offset: 0x314
	// Line 1242, Address: 0x38d7a8, Func Offset: 0x328
	// Line 1224, Address: 0x38d7d4, Func Offset: 0x354
	// Line 1223, Address: 0x38d7d8, Func Offset: 0x358
	// Line 1224, Address: 0x38d7e0, Func Offset: 0x360
	// Line 1223, Address: 0x38d7e4, Func Offset: 0x364
	// Line 1224, Address: 0x38d7e8, Func Offset: 0x368
	// Line 1242, Address: 0x38d7ec, Func Offset: 0x36c
	// Line 1224, Address: 0x38d7f4, Func Offset: 0x374
	// Line 1242, Address: 0x38d808, Func Offset: 0x388
	// Line 1224, Address: 0x38d810, Func Offset: 0x390
	// Line 1242, Address: 0x38d814, Func Offset: 0x394
	// Line 1224, Address: 0x38d81c, Func Offset: 0x39c
	// Line 1225, Address: 0x38d820, Func Offset: 0x3a0
	// Line 1224, Address: 0x38d824, Func Offset: 0x3a4
	// Line 1225, Address: 0x38d828, Func Offset: 0x3a8
	// Line 1224, Address: 0x38d82c, Func Offset: 0x3ac
	// Line 1242, Address: 0x38d830, Func Offset: 0x3b0
	// Line 1225, Address: 0x38d834, Func Offset: 0x3b4
	// Line 1224, Address: 0x38d83c, Func Offset: 0x3bc
	// Line 1242, Address: 0x38d840, Func Offset: 0x3c0
	// Line 1231, Address: 0x38d854, Func Offset: 0x3d4
	// Line 1242, Address: 0x38d858, Func Offset: 0x3d8
	// Line 1234, Address: 0x38d864, Func Offset: 0x3e4
	// Line 1242, Address: 0x38d86c, Func Offset: 0x3ec
	// Func End, Address: 0x38d888, Func Offset: 0x408
}

// CarUpdate__4zCarFffbbb
// Start address: 0x38d890
void zCar::CarUpdate(float32 dt, float32 steer, uint8 accelOn, uint8 brakeOn, uint8 boostOn)
{
	float32 speedPercentage;
	float32 steerFactor;
	float32 steerAngle;
	float32 accelerationFactor;
	float32 boostAccelFactor;
	xVec3 newVelocity;
	xVec3 acceleration;
	xVec3 forwardVelocity;
	xVec3 rightVelocity;
	xVec3 downHill;
	xVec3 oldPos;
	xVec3 newPos;
	xVec3 groundNormal;
	xMat3x3 idealOrientation;
	xQuat currentQuat;
	xQuat idealQuat;
	xQuat slerped;
	// Line 822, Address: 0x38d890, Func Offset: 0
	// Line 858, Address: 0x38d898, Func Offset: 0x8
	// Line 822, Address: 0x38d89c, Func Offset: 0xc
	// Line 858, Address: 0x38d8e8, Func Offset: 0x58
	// Line 860, Address: 0x38d8f8, Func Offset: 0x68
	// Line 861, Address: 0x38d8fc, Func Offset: 0x6c
	// Line 862, Address: 0x38d914, Func Offset: 0x84
	// Line 863, Address: 0x38d928, Func Offset: 0x98
	// Line 867, Address: 0x38d92c, Func Offset: 0x9c
	// Line 868, Address: 0x38d938, Func Offset: 0xa8
	// Line 870, Address: 0x38d940, Func Offset: 0xb0
	// Line 882, Address: 0x38d950, Func Offset: 0xc0
	// Line 870, Address: 0x38d954, Func Offset: 0xc4
	// Line 882, Address: 0x38d95c, Func Offset: 0xcc
	// Line 873, Address: 0x38d960, Func Offset: 0xd0
	// Line 882, Address: 0x38d964, Func Offset: 0xd4
	// Line 873, Address: 0x38d968, Func Offset: 0xd8
	// Line 872, Address: 0x38d96c, Func Offset: 0xdc
	// Line 882, Address: 0x38d97c, Func Offset: 0xec
	// Line 873, Address: 0x38d984, Func Offset: 0xf4
	// Line 874, Address: 0x38d990, Func Offset: 0x100
	// Line 873, Address: 0x38d99c, Func Offset: 0x10c
	// Line 874, Address: 0x38d9a0, Func Offset: 0x110
	// Line 872, Address: 0x38d9a4, Func Offset: 0x114
	// Line 874, Address: 0x38d9a8, Func Offset: 0x118
	// Line 875, Address: 0x38d9b0, Func Offset: 0x120
	// Line 886, Address: 0x38d9bc, Func Offset: 0x12c
	// Line 874, Address: 0x38d9c0, Func Offset: 0x130
	// Line 875, Address: 0x38d9c4, Func Offset: 0x134
	// Line 886, Address: 0x38d9cc, Func Offset: 0x13c
	// Line 888, Address: 0x38d9e0, Func Offset: 0x150
	// Line 891, Address: 0x38da40, Func Offset: 0x1b0
	// Line 895, Address: 0x38da74, Func Offset: 0x1e4
	// Line 904, Address: 0x38da84, Func Offset: 0x1f4
	// Line 905, Address: 0x38da90, Func Offset: 0x200
	// Line 904, Address: 0x38daa4, Func Offset: 0x214
	// Line 905, Address: 0x38dab0, Func Offset: 0x220
	// Line 906, Address: 0x38dac0, Func Offset: 0x230
	// Line 907, Address: 0x38dac4, Func Offset: 0x234
	// Line 909, Address: 0x38dadc, Func Offset: 0x24c
	// Line 910, Address: 0x38dae4, Func Offset: 0x254
	// Line 911, Address: 0x38daf4, Func Offset: 0x264
	// Line 912, Address: 0x38db28, Func Offset: 0x298
	// Line 927, Address: 0x38db2c, Func Offset: 0x29c
	// Line 929, Address: 0x38db40, Func Offset: 0x2b0
	// Line 935, Address: 0x38db64, Func Offset: 0x2d4
	// Line 941, Address: 0x38db74, Func Offset: 0x2e4
	// Line 945, Address: 0x38dba4, Func Offset: 0x314
	// Line 948, Address: 0x38dba8, Func Offset: 0x318
	// Line 945, Address: 0x38dbb8, Func Offset: 0x328
	// Line 948, Address: 0x38dbbc, Func Offset: 0x32c
	// Line 950, Address: 0x38dbc8, Func Offset: 0x338
	// Line 951, Address: 0x38dbe4, Func Offset: 0x354
	// Line 956, Address: 0x38dc00, Func Offset: 0x370
	// Line 958, Address: 0x38dc3c, Func Offset: 0x3ac
	// Line 962, Address: 0x38dc44, Func Offset: 0x3b4
	// Line 963, Address: 0x38dc48, Func Offset: 0x3b8
	// Line 964, Address: 0x38dc4c, Func Offset: 0x3bc
	// Line 970, Address: 0x38dc5c, Func Offset: 0x3cc
	// Line 966, Address: 0x38dc60, Func Offset: 0x3d0
	// Line 970, Address: 0x38dc64, Func Offset: 0x3d4
	// Line 966, Address: 0x38dc68, Func Offset: 0x3d8
	// Line 970, Address: 0x38dc78, Func Offset: 0x3e8
	// Line 972, Address: 0x38dcd0, Func Offset: 0x440
	// Line 970, Address: 0x38dcd4, Func Offset: 0x444
	// Line 972, Address: 0x38dcd8, Func Offset: 0x448
	// Line 973, Address: 0x38dd38, Func Offset: 0x4a8
	// Line 974, Address: 0x38dd40, Func Offset: 0x4b0
	// Line 978, Address: 0x38dd48, Func Offset: 0x4b8
	// Line 981, Address: 0x38dd54, Func Offset: 0x4c4
	// Line 980, Address: 0x38dd58, Func Offset: 0x4c8
	// Line 981, Address: 0x38dd5c, Func Offset: 0x4cc
	// Line 980, Address: 0x38dd60, Func Offset: 0x4d0
	// Line 982, Address: 0x38dd68, Func Offset: 0x4d8
	// Line 985, Address: 0x38dd70, Func Offset: 0x4e0
	// Line 987, Address: 0x38dd74, Func Offset: 0x4e4
	// Line 988, Address: 0x38dd88, Func Offset: 0x4f8
	// Line 990, Address: 0x38dda0, Func Offset: 0x510
	// Line 994, Address: 0x38ddb8, Func Offset: 0x528
	// Line 995, Address: 0x38ddbc, Func Offset: 0x52c
	// Line 997, Address: 0x38ddc4, Func Offset: 0x534
	// Line 1004, Address: 0x38ddd8, Func Offset: 0x548
	// Line 1005, Address: 0x38ddfc, Func Offset: 0x56c
	// Line 1007, Address: 0x38de04, Func Offset: 0x574
	// Line 1008, Address: 0x38de0c, Func Offset: 0x57c
	// Line 1010, Address: 0x38de14, Func Offset: 0x584
	// Line 1013, Address: 0x38de20, Func Offset: 0x590
	// Line 1014, Address: 0x38de40, Func Offset: 0x5b0
	// Line 1019, Address: 0x38de44, Func Offset: 0x5b4
	// Line 1029, Address: 0x38de7c, Func Offset: 0x5ec
	// Line 1030, Address: 0x38de84, Func Offset: 0x5f4
	// Line 1037, Address: 0x38de8c, Func Offset: 0x5fc
	// Line 1030, Address: 0x38de90, Func Offset: 0x600
	// Line 1037, Address: 0x38de94, Func Offset: 0x604
	// Line 1030, Address: 0x38de98, Func Offset: 0x608
	// Line 1037, Address: 0x38de9c, Func Offset: 0x60c
	// Line 1030, Address: 0x38dea8, Func Offset: 0x618
	// Line 1037, Address: 0x38deac, Func Offset: 0x61c
	// Line 1030, Address: 0x38deb0, Func Offset: 0x620
	// Line 1037, Address: 0x38deb4, Func Offset: 0x624
	// Line 1030, Address: 0x38deb8, Func Offset: 0x628
	// Line 1037, Address: 0x38debc, Func Offset: 0x62c
	// Line 1040, Address: 0x38df00, Func Offset: 0x670
	// Line 1042, Address: 0x38df18, Func Offset: 0x688
	// Line 1043, Address: 0x38df24, Func Offset: 0x694
	// Line 1042, Address: 0x38df2c, Func Offset: 0x69c
	// Line 1043, Address: 0x38df44, Func Offset: 0x6b4
	// Line 1042, Address: 0x38df50, Func Offset: 0x6c0
	// Line 1043, Address: 0x38df54, Func Offset: 0x6c4
	// Line 1042, Address: 0x38df58, Func Offset: 0x6c8
	// Line 1043, Address: 0x38df80, Func Offset: 0x6f0
	// Line 1042, Address: 0x38df88, Func Offset: 0x6f8
	// Line 1043, Address: 0x38df8c, Func Offset: 0x6fc
	// Line 1042, Address: 0x38df98, Func Offset: 0x708
	// Line 1043, Address: 0x38df9c, Func Offset: 0x70c
	// Line 1042, Address: 0x38dfa0, Func Offset: 0x710
	// Line 1043, Address: 0x38dfa8, Func Offset: 0x718
	// Line 1047, Address: 0x38e014, Func Offset: 0x784
	// Line 1048, Address: 0x38e018, Func Offset: 0x788
	// Line 1047, Address: 0x38e01c, Func Offset: 0x78c
	// Line 1048, Address: 0x38e038, Func Offset: 0x7a8
	// Line 1047, Address: 0x38e040, Func Offset: 0x7b0
	// Line 1048, Address: 0x38e084, Func Offset: 0x7f4
	// Line 1055, Address: 0x38e0ac, Func Offset: 0x81c
	// Line 1058, Address: 0x38e0b4, Func Offset: 0x824
	// Line 1059, Address: 0x38e0c0, Func Offset: 0x830
	// Line 1061, Address: 0x38e1cc, Func Offset: 0x93c
	// Line 1066, Address: 0x38e2d8, Func Offset: 0xa48
	// Line 1069, Address: 0x38e2ec, Func Offset: 0xa5c
	// Line 1080, Address: 0x38e2f4, Func Offset: 0xa64
	// Line 1088, Address: 0x38e2fc, Func Offset: 0xa6c
	// Line 1093, Address: 0x38e31c, Func Offset: 0xa8c
	// Line 1095, Address: 0x38e32c, Func Offset: 0xa9c
	// Line 1093, Address: 0x38e330, Func Offset: 0xaa0
	// Line 1095, Address: 0x38e340, Func Offset: 0xab0
	// Line 1093, Address: 0x38e344, Func Offset: 0xab4
	// Line 1094, Address: 0x38e34c, Func Offset: 0xabc
	// Line 1095, Address: 0x38e35c, Func Offset: 0xacc
	// Line 1094, Address: 0x38e360, Func Offset: 0xad0
	// Line 1095, Address: 0x38e368, Func Offset: 0xad8
	// Line 1101, Address: 0x38e374, Func Offset: 0xae4
	// Line 1100, Address: 0x38e37c, Func Offset: 0xaec
	// Line 1101, Address: 0x38e380, Func Offset: 0xaf0
	// Line 1097, Address: 0x38e388, Func Offset: 0xaf8
	// Line 1100, Address: 0x38e394, Func Offset: 0xb04
	// Line 1101, Address: 0x38e3d0, Func Offset: 0xb40
	// Line 1103, Address: 0x38e3d8, Func Offset: 0xb48
	// Line 1107, Address: 0x38e43c, Func Offset: 0xbac
	// Line 1117, Address: 0x38e4fc, Func Offset: 0xc6c
	// Line 1126, Address: 0x38e52c, Func Offset: 0xc9c
	// Line 1125, Address: 0x38e530, Func Offset: 0xca0
	// Line 1117, Address: 0x38e534, Func Offset: 0xca4
	// Line 1125, Address: 0x38e538, Func Offset: 0xca8
	// Line 1126, Address: 0x38e53c, Func Offset: 0xcac
	// Line 1125, Address: 0x38e540, Func Offset: 0xcb0
	// Line 1126, Address: 0x38e550, Func Offset: 0xcc0
	// Line 1117, Address: 0x38e554, Func Offset: 0xcc4
	// Line 1126, Address: 0x38e558, Func Offset: 0xcc8
	// Line 1117, Address: 0x38e55c, Func Offset: 0xccc
	// Line 1126, Address: 0x38e560, Func Offset: 0xcd0
	// Line 1117, Address: 0x38e564, Func Offset: 0xcd4
	// Line 1126, Address: 0x38e568, Func Offset: 0xcd8
	// Line 1117, Address: 0x38e56c, Func Offset: 0xcdc
	// Line 1126, Address: 0x38e570, Func Offset: 0xce0
	// Line 1117, Address: 0x38e574, Func Offset: 0xce4
	// Line 1137, Address: 0x38e578, Func Offset: 0xce8
	// Line 1117, Address: 0x38e57c, Func Offset: 0xcec
	// Line 1137, Address: 0x38e580, Func Offset: 0xcf0
	// Line 1117, Address: 0x38e58c, Func Offset: 0xcfc
	// Line 1137, Address: 0x38e5a4, Func Offset: 0xd14
	// Line 1117, Address: 0x38e5a8, Func Offset: 0xd18
	// Line 1126, Address: 0x38e5cc, Func Offset: 0xd3c
	// Line 1117, Address: 0x38e5d4, Func Offset: 0xd44
	// Line 1125, Address: 0x38e5d8, Func Offset: 0xd48
	// Line 1126, Address: 0x38e5e0, Func Offset: 0xd50
	// Line 1125, Address: 0x38e5e8, Func Offset: 0xd58
	// Line 1126, Address: 0x38e5fc, Func Offset: 0xd6c
	// Line 1125, Address: 0x38e600, Func Offset: 0xd70
	// Line 1126, Address: 0x38e608, Func Offset: 0xd78
	// Line 1125, Address: 0x38e610, Func Offset: 0xd80
	// Line 1126, Address: 0x38e614, Func Offset: 0xd84
	// Line 1125, Address: 0x38e618, Func Offset: 0xd88
	// Line 1126, Address: 0x38e61c, Func Offset: 0xd8c
	// Line 1125, Address: 0x38e630, Func Offset: 0xda0
	// Line 1126, Address: 0x38e644, Func Offset: 0xdb4
	// Line 1125, Address: 0x38e654, Func Offset: 0xdc4
	// Line 1126, Address: 0x38e65c, Func Offset: 0xdcc
	// Line 1125, Address: 0x38e660, Func Offset: 0xdd0
	// Line 1126, Address: 0x38e670, Func Offset: 0xde0
	// Line 1125, Address: 0x38e674, Func Offset: 0xde4
	// Line 1126, Address: 0x38e684, Func Offset: 0xdf4
	// Line 1125, Address: 0x38e68c, Func Offset: 0xdfc
	// Line 1126, Address: 0x38e694, Func Offset: 0xe04
	// Line 1125, Address: 0x38e69c, Func Offset: 0xe0c
	// Line 1126, Address: 0x38e6c0, Func Offset: 0xe30
	// Line 1125, Address: 0x38e6c8, Func Offset: 0xe38
	// Line 1126, Address: 0x38e6ec, Func Offset: 0xe5c
	// Line 1125, Address: 0x38e6f0, Func Offset: 0xe60
	// Line 1126, Address: 0x38e6f4, Func Offset: 0xe64
	// Line 1125, Address: 0x38e6fc, Func Offset: 0xe6c
	// Line 1126, Address: 0x38e704, Func Offset: 0xe74
	// Line 1125, Address: 0x38e708, Func Offset: 0xe78
	// Line 1126, Address: 0x38e710, Func Offset: 0xe80
	// Line 1137, Address: 0x38e770, Func Offset: 0xee0
	// Line 1140, Address: 0x38e778, Func Offset: 0xee8
	// Line 1143, Address: 0x38e784, Func Offset: 0xef4
	// Line 1145, Address: 0x38e788, Func Offset: 0xef8
	// Line 1143, Address: 0x38e78c, Func Offset: 0xefc
	// Line 1145, Address: 0x38e7a0, Func Offset: 0xf10
	// Line 1150, Address: 0x38e7ac, Func Offset: 0xf1c
	// Line 1156, Address: 0x38e7c0, Func Offset: 0xf30
	// Line 1160, Address: 0x38e7d4, Func Offset: 0xf44
	// Line 1161, Address: 0x38e7e0, Func Offset: 0xf50
	// Line 1162, Address: 0x38e7ec, Func Offset: 0xf5c
	// Line 1163, Address: 0x38e808, Func Offset: 0xf78
	// Line 1165, Address: 0x38e814, Func Offset: 0xf84
	// Line 1168, Address: 0x38e850, Func Offset: 0xfc0
	// Line 1165, Address: 0x38e854, Func Offset: 0xfc4
	// Line 1168, Address: 0x38e900, Func Offset: 0x1070
	// Line 1169, Address: 0x38e908, Func Offset: 0x1078
	// Line 900, Address: 0x38e914, Func Offset: 0x1084
	// Line 949, Address: 0x38e920, Func Offset: 0x1090
	// Line 1169, Address: 0x38e944, Func Offset: 0x10b4
	// Line 972, Address: 0x38e94c, Func Offset: 0x10bc
	// Line 1169, Address: 0x38e950, Func Offset: 0x10c0
	// Line 972, Address: 0x38e958, Func Offset: 0x10c8
	// Line 1169, Address: 0x38e95c, Func Offset: 0x10cc
	// Line 972, Address: 0x38e960, Func Offset: 0x10d0
	// Line 1169, Address: 0x38e964, Func Offset: 0x10d4
	// Line 972, Address: 0x38e968, Func Offset: 0x10d8
	// Line 1169, Address: 0x38e970, Func Offset: 0x10e0
	// Line 972, Address: 0x38e980, Func Offset: 0x10f0
	// Line 1169, Address: 0x38e984, Func Offset: 0x10f4
	// Line 972, Address: 0x38e9a0, Func Offset: 0x1110
	// Line 1169, Address: 0x38e9c4, Func Offset: 0x1134
	// Line 972, Address: 0x38e9c8, Func Offset: 0x1138
	// Line 1169, Address: 0x38e9d4, Func Offset: 0x1144
	// Line 972, Address: 0x38e9d8, Func Offset: 0x1148
	// Line 1169, Address: 0x38e9e4, Func Offset: 0x1154
	// Line 999, Address: 0x38e9fc, Func Offset: 0x116c
	// Line 1169, Address: 0x38ea00, Func Offset: 0x1170
	// Line 999, Address: 0x38ea04, Func Offset: 0x1174
	// Line 1001, Address: 0x38ea0c, Func Offset: 0x117c
	// Line 1023, Address: 0x38ea14, Func Offset: 0x1184
	// Line 1169, Address: 0x38ea20, Func Offset: 0x1190
	// Line 1024, Address: 0x38ea28, Func Offset: 0x1198
	// Line 1026, Address: 0x38ea3c, Func Offset: 0x11ac
	// Line 1169, Address: 0x38ea50, Func Offset: 0x11c0
	// Line 1051, Address: 0x38ea54, Func Offset: 0x11c4
	// Line 1169, Address: 0x38ea58, Func Offset: 0x11c8
	// Line 1051, Address: 0x38ea64, Func Offset: 0x11d4
	// Line 1169, Address: 0x38ea6c, Func Offset: 0x11dc
	// Line 1051, Address: 0x38eaa4, Func Offset: 0x1214
	// Line 1169, Address: 0x38eaa8, Func Offset: 0x1218
	// Line 1051, Address: 0x38eab0, Func Offset: 0x1220
	// Line 1169, Address: 0x38eab8, Func Offset: 0x1228
	// Line 1051, Address: 0x38ead8, Func Offset: 0x1248
	// Line 1169, Address: 0x38eadc, Func Offset: 0x124c
	// Line 1051, Address: 0x38eae4, Func Offset: 0x1254
	// Line 1169, Address: 0x38eaec, Func Offset: 0x125c
	// Line 1052, Address: 0x38eaf4, Func Offset: 0x1264
	// Line 1169, Address: 0x38eafc, Func Offset: 0x126c
	// Line 1073, Address: 0x38eb00, Func Offset: 0x1270
	// Line 1169, Address: 0x38eb28, Func Offset: 0x1298
	// Line 1084, Address: 0x38eb58, Func Offset: 0x12c8
	// Line 1169, Address: 0x38eb5c, Func Offset: 0x12cc
	// Line 1084, Address: 0x38eb70, Func Offset: 0x12e0
	// Line 1169, Address: 0x38eb74, Func Offset: 0x12e4
	// Line 1084, Address: 0x38eb84, Func Offset: 0x12f4
	// Line 1169, Address: 0x38eb88, Func Offset: 0x12f8
	// Line 1084, Address: 0x38eb98, Func Offset: 0x1308
	// Line 1169, Address: 0x38eb9c, Func Offset: 0x130c
	// Line 1084, Address: 0x38eba0, Func Offset: 0x1310
	// Line 1169, Address: 0x38eba4, Func Offset: 0x1314
	// Line 1084, Address: 0x38eba8, Func Offset: 0x1318
	// Line 1169, Address: 0x38ebac, Func Offset: 0x131c
	// Func End, Address: 0x38ec04, Func Offset: 0x1374
}

// StartBoost__4zCarFv
// Start address: 0x38ec10
void zCar::StartBoost()
{
	// Line 747, Address: 0x38ec10, Func Offset: 0
	// Line 750, Address: 0x38ec18, Func Offset: 0x8
	// Line 747, Address: 0x38ec1c, Func Offset: 0xc
	// Line 750, Address: 0x38ec20, Func Offset: 0x10
	// Line 752, Address: 0x38ec3c, Func Offset: 0x2c
	// Line 755, Address: 0x38ec48, Func Offset: 0x38
	// Line 757, Address: 0x38ec5c, Func Offset: 0x4c
	// Line 759, Address: 0x38ec7c, Func Offset: 0x6c
	// Line 761, Address: 0x38ec80, Func Offset: 0x70
	// Line 759, Address: 0x38ec94, Func Offset: 0x84
	// Line 761, Address: 0x38ec98, Func Offset: 0x88
	// Line 764, Address: 0x38ecac, Func Offset: 0x9c
	// Line 765, Address: 0x38ecd4, Func Offset: 0xc4
	// Line 768, Address: 0x38ece8, Func Offset: 0xd8
	// Line 769, Address: 0x38ecf0, Func Offset: 0xe0
	// Line 772, Address: 0x38ed5c, Func Offset: 0x14c
	// Line 773, Address: 0x38ed64, Func Offset: 0x154
	// Line 776, Address: 0x38edcc, Func Offset: 0x1bc
	// Line 777, Address: 0x38edfc, Func Offset: 0x1ec
	// Line 779, Address: 0x38ee2c, Func Offset: 0x21c
	// Func End, Address: 0x38ee58, Func Offset: 0x248
}

// GetVarNitros__4zCarCFv
// Start address: 0x38ee60
uint32* zCar::GetVarNitros()
{
	// Line 729, Address: 0x38ee60, Func Offset: 0
	// Func End, Address: 0x38ee68, Func Offset: 0x8
}

// CanPickupNitros__4zCarCFv
// Start address: 0x38ee70
uint8 zCar::CanPickupNitros()
{
	// Line 723, Address: 0x38ee70, Func Offset: 0
	// Line 724, Address: 0x38ee78, Func Offset: 0x8
	// Func End, Address: 0x38ee80, Func Offset: 0x10
}

// AddNitros__4zCarFi
// Start address: 0x38ee80
void zCar::AddNitros(int32 nitros)
{
	// Line 716, Address: 0x38ee80, Func Offset: 0
	// Line 718, Address: 0x38ee88, Func Offset: 0x8
	// Line 716, Address: 0x38ee9c, Func Offset: 0x1c
	// Line 718, Address: 0x38eea4, Func Offset: 0x24
	// Func End, Address: 0x38eeb4, Func Offset: 0x34
}

// GetMatrix__4zCarFv
// Start address: 0x38eec0
xMat4x3* zCar::GetMatrix()
{
	// Line 690, Address: 0x38eec0, Func Offset: 0
	// Func End, Address: 0x38eec8, Func Offset: 0x8
}

// SetMatrix__4zCarFP7xMat4x3
// Start address: 0x38eed0
void zCar::SetMatrix(xMat4x3* pSource)
{
	// Line 682, Address: 0x38eed0, Func Offset: 0
	// Line 683, Address: 0x38ef50, Func Offset: 0x80
	// Line 684, Address: 0x38efcc, Func Offset: 0xfc
	// Func End, Address: 0x38efd4, Func Offset: 0x104
}

// GiveHealth__4zCarFi
// Start address: 0x38efe0
void zCar::GiveHealth(int32 health)
{
	eDamage newDamageLevel;
	// Line 602, Address: 0x38efe0, Func Offset: 0
	// Line 604, Address: 0x38efe4, Func Offset: 0x4
	// Line 602, Address: 0x38efe8, Func Offset: 0x8
	// Line 604, Address: 0x38eff8, Func Offset: 0x18
	// Line 608, Address: 0x38f008, Func Offset: 0x28
	// Line 610, Address: 0x38f018, Func Offset: 0x38
	// Line 611, Address: 0x38f020, Func Offset: 0x40
	// Line 616, Address: 0x38f028, Func Offset: 0x48
	// Line 618, Address: 0x38f034, Func Offset: 0x54
	// Line 621, Address: 0x38f038, Func Offset: 0x58
	// Line 622, Address: 0x38f044, Func Offset: 0x64
	// Func End, Address: 0x38f07c, Func Offset: 0x9c
}

// SetFullHealth__4zCarFv
// Start address: 0x38f080
void zCar::SetFullHealth()
{
	// Line 589, Address: 0x38f080, Func Offset: 0
	// Line 591, Address: 0x38f084, Func Offset: 0x4
	// Line 589, Address: 0x38f088, Func Offset: 0x8
	// Line 591, Address: 0x38f08c, Func Offset: 0xc
	// Line 589, Address: 0x38f090, Func Offset: 0x10
	// Line 591, Address: 0x38f094, Func Offset: 0x14
	// Line 594, Address: 0x38f09c, Func Offset: 0x1c
	// Line 595, Address: 0x38f0a0, Func Offset: 0x20
	// Line 596, Address: 0x38f0a4, Func Offset: 0x24
	// Line 597, Address: 0x38f0a8, Func Offset: 0x28
	// Line 598, Address: 0x38f0ac, Func Offset: 0x2c
	// Line 599, Address: 0x38f0b0, Func Offset: 0x30
	// Func End, Address: 0x38f0c0, Func Offset: 0x40
}

// TakeDamage__4zCarFb
// Start address: 0x38f0c0
void zCar::TakeDamage(uint8 spinClockwise)
{
	// Line 550, Address: 0x38f0c0, Func Offset: 0
	// Line 557, Address: 0x38f0cc, Func Offset: 0xc
	// Line 561, Address: 0x38f0f0, Func Offset: 0x30
	// Line 564, Address: 0x38f100, Func Offset: 0x40
	// Line 565, Address: 0x38f108, Func Offset: 0x48
	// Line 567, Address: 0x38f114, Func Offset: 0x54
	// Line 570, Address: 0x38f11c, Func Offset: 0x5c
	// Line 573, Address: 0x38f130, Func Offset: 0x70
	// Line 583, Address: 0x38f140, Func Offset: 0x80
	// Line 584, Address: 0x38f150, Func Offset: 0x90
	// Line 586, Address: 0x38f16c, Func Offset: 0xac
	// Line 576, Address: 0x38f178, Func Offset: 0xb8
	// Line 586, Address: 0x38f190, Func Offset: 0xd0
	// Line 578, Address: 0x38f1a4, Func Offset: 0xe4
	// Line 586, Address: 0x38f1a8, Func Offset: 0xe8
	// Line 578, Address: 0x38f1ac, Func Offset: 0xec
	// Line 586, Address: 0x38f1b8, Func Offset: 0xf8
	// Line 578, Address: 0x38f1c0, Func Offset: 0x100
	// Line 586, Address: 0x38f1c8, Func Offset: 0x108
	// Func End, Address: 0x38f1d8, Func Offset: 0x118
}

// HandleEvent__4zCarFP5xBaseP5xBaseUiPCfP5xBaseUi
// Start address: 0x38f1e0
void zCar::HandleEvent(xBase* from, xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget, uint32 UNUSEDtoParamWidgetID)
{
	int32 param;
	uint8 spinClockwise;
	// Line 498, Address: 0x38f1e0, Func Offset: 0
	// Line 501, Address: 0x38f1e4, Func Offset: 0x4
	// Line 498, Address: 0x38f1e8, Func Offset: 0x8
	// Line 501, Address: 0x38f1f4, Func Offset: 0x14
	// Line 505, Address: 0x38f228, Func Offset: 0x48
	// Line 506, Address: 0x38f238, Func Offset: 0x58
	// Line 508, Address: 0x38f240, Func Offset: 0x60
	// Line 510, Address: 0x38f244, Func Offset: 0x64
	// Line 512, Address: 0x38f24c, Func Offset: 0x6c
	// Line 513, Address: 0x38f29c, Func Offset: 0xbc
	// Line 526, Address: 0x38f2a4, Func Offset: 0xc4
	// Line 528, Address: 0x38f2d0, Func Offset: 0xf0
	// Line 531, Address: 0x38f2d8, Func Offset: 0xf8
	// Line 532, Address: 0x38f2e0, Func Offset: 0x100
	// Line 535, Address: 0x38f2e8, Func Offset: 0x108
	// Line 539, Address: 0x38f318, Func Offset: 0x138
	// Line 543, Address: 0x38f320, Func Offset: 0x140
	// Line 545, Address: 0x38f33c, Func Offset: 0x15c
	// Line 516, Address: 0x38f37c, Func Offset: 0x19c
	// Line 517, Address: 0x38f380, Func Offset: 0x1a0
	// Line 545, Address: 0x38f384, Func Offset: 0x1a4
	// Line 520, Address: 0x38f38c, Func Offset: 0x1ac
	// Line 545, Address: 0x38f394, Func Offset: 0x1b4
	// Func End, Address: 0x38f3a8, Func Offset: 0x1c8
}

// Exit__4zCarFv
// Start address: 0x38f3b0
void zCar::Exit()
{
	int32 i;
	// Line 481, Address: 0x38f3b0, Func Offset: 0
	// Line 482, Address: 0x38f3c0, Func Offset: 0x10
	// Line 484, Address: 0x38f3d0, Func Offset: 0x20
	// Line 488, Address: 0x38f3d8, Func Offset: 0x28
	// Line 490, Address: 0x38f3dc, Func Offset: 0x2c
	// Line 491, Address: 0x38f3e4, Func Offset: 0x34
	// Line 493, Address: 0x38f3e8, Func Offset: 0x38
	// Line 494, Address: 0x38f3f8, Func Offset: 0x48
	// Func End, Address: 0x38f40c, Func Offset: 0x5c
}

// Reset__4zCarFP4xEntfP5xVec3
// Start address: 0x38f410
void zCar::Reset(xEnt* pCarEnt, float32 initialYaw, xVec3* pPosition)
{
	// Line 399, Address: 0x38f410, Func Offset: 0
	// Line 400, Address: 0x38f414, Func Offset: 0x4
	// Line 399, Address: 0x38f418, Func Offset: 0x8
	// Line 400, Address: 0x38f430, Func Offset: 0x20
	// Line 401, Address: 0x38f438, Func Offset: 0x28
	// Line 402, Address: 0x38f444, Func Offset: 0x34
	// Line 403, Address: 0x38f448, Func Offset: 0x38
	// Line 426, Address: 0x38f45c, Func Offset: 0x4c
	// Line 403, Address: 0x38f460, Func Offset: 0x50
	// Line 426, Address: 0x38f464, Func Offset: 0x54
	// Line 403, Address: 0x38f468, Func Offset: 0x58
	// Line 427, Address: 0x38f46c, Func Offset: 0x5c
	// Line 403, Address: 0x38f470, Func Offset: 0x60
	// Line 427, Address: 0x38f474, Func Offset: 0x64
	// Line 403, Address: 0x38f478, Func Offset: 0x68
	// Line 428, Address: 0x38f47c, Func Offset: 0x6c
	// Line 406, Address: 0x38f480, Func Offset: 0x70
	// Line 404, Address: 0x38f484, Func Offset: 0x74
	// Line 407, Address: 0x38f488, Func Offset: 0x78
	// Line 406, Address: 0x38f48c, Func Offset: 0x7c
	// Line 407, Address: 0x38f490, Func Offset: 0x80
	// Line 428, Address: 0x38f494, Func Offset: 0x84
	// Line 409, Address: 0x38f498, Func Offset: 0x88
	// Line 410, Address: 0x38f49c, Func Offset: 0x8c
	// Line 411, Address: 0x38f4a0, Func Offset: 0x90
	// Line 412, Address: 0x38f4b8, Func Offset: 0xa8
	// Line 413, Address: 0x38f4c4, Func Offset: 0xb4
	// Line 414, Address: 0x38f4c8, Func Offset: 0xb8
	// Line 415, Address: 0x38f4cc, Func Offset: 0xbc
	// Line 416, Address: 0x38f4d0, Func Offset: 0xc0
	// Line 417, Address: 0x38f4d4, Func Offset: 0xc4
	// Line 418, Address: 0x38f4d8, Func Offset: 0xc8
	// Line 419, Address: 0x38f4dc, Func Offset: 0xcc
	// Line 420, Address: 0x38f4e0, Func Offset: 0xd0
	// Line 421, Address: 0x38f4e4, Func Offset: 0xd4
	// Line 422, Address: 0x38f4e8, Func Offset: 0xd8
	// Line 423, Address: 0x38f4ec, Func Offset: 0xdc
	// Line 424, Address: 0x38f4f8, Func Offset: 0xe8
	// Line 425, Address: 0x38f4fc, Func Offset: 0xec
	// Line 426, Address: 0x38f500, Func Offset: 0xf0
	// Line 427, Address: 0x38f504, Func Offset: 0xf4
	// Line 428, Address: 0x38f508, Func Offset: 0xf8
	// Line 429, Address: 0x38f50c, Func Offset: 0xfc
	// Line 430, Address: 0x38f510, Func Offset: 0x100
	// Line 435, Address: 0x38f514, Func Offset: 0x104
	// Line 436, Address: 0x38f518, Func Offset: 0x108
	// Line 437, Address: 0x38f51c, Func Offset: 0x10c
	// Line 438, Address: 0x38f524, Func Offset: 0x114
	// Line 439, Address: 0x38f530, Func Offset: 0x120
	// Line 440, Address: 0x38f53c, Func Offset: 0x12c
	// Line 441, Address: 0x38f548, Func Offset: 0x138
	// Line 442, Address: 0x38f554, Func Offset: 0x144
	// Line 443, Address: 0x38f560, Func Offset: 0x150
	// Line 444, Address: 0x38f56c, Func Offset: 0x15c
	// Line 445, Address: 0x38f578, Func Offset: 0x168
	// Line 446, Address: 0x38f584, Func Offset: 0x174
	// Line 449, Address: 0x38f594, Func Offset: 0x184
	// Line 447, Address: 0x38f598, Func Offset: 0x188
	// Line 451, Address: 0x38f59c, Func Offset: 0x18c
	// Line 449, Address: 0x38f5a0, Func Offset: 0x190
	// Line 448, Address: 0x38f5a4, Func Offset: 0x194
	// Line 449, Address: 0x38f5a8, Func Offset: 0x198
	// Line 451, Address: 0x38f5ac, Func Offset: 0x19c
	// Line 456, Address: 0x38f5c0, Func Offset: 0x1b0
	// Line 457, Address: 0x38f5cc, Func Offset: 0x1bc
	// Line 458, Address: 0x38f5d0, Func Offset: 0x1c0
	// Line 457, Address: 0x38f5d4, Func Offset: 0x1c4
	// Line 461, Address: 0x38f5d8, Func Offset: 0x1c8
	// Line 459, Address: 0x38f5dc, Func Offset: 0x1cc
	// Line 458, Address: 0x38f5e0, Func Offset: 0x1d0
	// Line 459, Address: 0x38f5e4, Func Offset: 0x1d4
	// Line 462, Address: 0x38f5e8, Func Offset: 0x1d8
	// Line 460, Address: 0x38f5ec, Func Offset: 0x1dc
	// Line 462, Address: 0x38f5f0, Func Offset: 0x1e0
	// Line 461, Address: 0x38f5f4, Func Offset: 0x1e4
	// Line 462, Address: 0x38f5f8, Func Offset: 0x1e8
	// Line 463, Address: 0x38f600, Func Offset: 0x1f0
	// Line 464, Address: 0x38f604, Func Offset: 0x1f4
	// Line 465, Address: 0x38f608, Func Offset: 0x1f8
	// Line 466, Address: 0x38f60c, Func Offset: 0x1fc
	// Line 473, Address: 0x38f610, Func Offset: 0x200
	// Line 476, Address: 0x38f614, Func Offset: 0x204
	// Line 477, Address: 0x38f628, Func Offset: 0x218
	// Func End, Address: 0x38f640, Func Offset: 0x230
}

// Initialize__4zCarFP4xEnt
// Start address: 0x38f640
void zCar::Initialize(xEnt* pCarEnt)
{
	xVec3 dummyPos;
	// Line 390, Address: 0x38f640, Func Offset: 0
	// Line 391, Address: 0x38f654, Func Offset: 0x14
	// Line 393, Address: 0x38f65c, Func Offset: 0x1c
	// Line 394, Address: 0x38f684, Func Offset: 0x44
	// Line 396, Address: 0x38f698, Func Offset: 0x58
	// Func End, Address: 0x38f6ac, Func Offset: 0x6c
}

// SceneInit__4zCarFv
// Start address: 0x38f6b0
void zCar::SceneInit()
{
	int32 i;
	int8 modelName[256];
	RpAtomic* imodel;
	// Line 361, Address: 0x38f6b0, Func Offset: 0
	// Line 363, Address: 0x38f6c4, Func Offset: 0x14
	// Line 365, Address: 0x38f6cc, Func Offset: 0x1c
	// Line 368, Address: 0x38f6e0, Func Offset: 0x30
	// Line 369, Address: 0x38f6e4, Func Offset: 0x34
	// Line 368, Address: 0x38f6e8, Func Offset: 0x38
	// Line 369, Address: 0x38f6f0, Func Offset: 0x40
	// Line 368, Address: 0x38f6f8, Func Offset: 0x48
	// Line 373, Address: 0x38f6fc, Func Offset: 0x4c
	// Line 374, Address: 0x38f710, Func Offset: 0x60
	// Line 375, Address: 0x38f724, Func Offset: 0x74
	// Line 376, Address: 0x38f72c, Func Offset: 0x7c
	// Line 377, Address: 0x38f748, Func Offset: 0x98
	// Line 380, Address: 0x38f758, Func Offset: 0xa8
	// Line 381, Address: 0x38f76c, Func Offset: 0xbc
	// Line 380, Address: 0x38f770, Func Offset: 0xc0
	// Line 381, Address: 0x38f774, Func Offset: 0xc4
	// Line 382, Address: 0x38f784, Func Offset: 0xd4
	// Line 381, Address: 0x38f788, Func Offset: 0xd8
	// Line 382, Address: 0x38f78c, Func Offset: 0xdc
	// Line 383, Address: 0x38f79c, Func Offset: 0xec
	// Line 382, Address: 0x38f7a0, Func Offset: 0xf0
	// Line 383, Address: 0x38f7a4, Func Offset: 0xf4
	// Line 386, Address: 0x38f7b8, Func Offset: 0x108
	// Line 387, Address: 0x38f7c0, Func Offset: 0x110
	// Func End, Address: 0x38f7d8, Func Offset: 0x128
}

