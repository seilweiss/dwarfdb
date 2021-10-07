



void DoTheResetinator();
void zGameResetPlayerToSceneStart();
void zGameInitPlayer();
void zGameScreenTransitionEnd();
void zGameScreenTransitionUpdate(float32 percentComplete, int8* msg, uint8* rgba);
void zGameScreenTransitionUpdate(float32 percentComplete, int8* msg);
void zGameScreenTransitionBegin();
void zGameUpdateMode();
void zGameStall();
void zGamePauseIfPossible();
void zGamePause();
pause_ability zGameOkToPause();
int32 zGameIsPaused();
void zGameLoop();
void zGameSetup();
void zGameExit();
void zGameInit(uint32 theSceneID);
uint32 PickNextSoak();

// DoTheResetinator__Fv
// Start address: 0x2d3150
void DoTheResetinator()
{
	// Line 4576, Address: 0x2d3150, Func Offset: 0
	// Func End, Address: 0x2d3158, Func Offset: 0x8
}

// zGameResetPlayerToSceneStart__Fv
// Start address: 0x2d3160
void zGameResetPlayerToSceneStart()
{
	pointer_asset* pointer;
	xEntFrame* frame;
	xMarkerAsset* marker;
	// Line 3657, Address: 0x2d3160, Func Offset: 0
	// Line 3658, Address: 0x2d3174, Func Offset: 0x14
	// Line 3664, Address: 0x2d317c, Func Offset: 0x1c
	// Line 3667, Address: 0x2d318c, Func Offset: 0x2c
	// Line 3672, Address: 0x2d3194, Func Offset: 0x34
	// Line 3675, Address: 0x2d31a0, Func Offset: 0x40
	// Line 3681, Address: 0x2d31ec, Func Offset: 0x8c
	// Line 3679, Address: 0x2d31f0, Func Offset: 0x90
	// Line 3681, Address: 0x2d31f4, Func Offset: 0x94
	// Line 3682, Address: 0x2d31fc, Func Offset: 0x9c
	// Line 3683, Address: 0x2d320c, Func Offset: 0xac
	// Line 3680, Address: 0x2d3210, Func Offset: 0xb0
	// Line 3682, Address: 0x2d3218, Func Offset: 0xb8
	// Line 3680, Address: 0x2d321c, Func Offset: 0xbc
	// Line 3679, Address: 0x2d3220, Func Offset: 0xc0
	// Line 3682, Address: 0x2d3224, Func Offset: 0xc4
	// Line 3679, Address: 0x2d3228, Func Offset: 0xc8
	// Line 3680, Address: 0x2d322c, Func Offset: 0xcc
	// Line 3681, Address: 0x2d3238, Func Offset: 0xd8
	// Line 3682, Address: 0x2d3244, Func Offset: 0xe4
	// Line 3683, Address: 0x2d3250, Func Offset: 0xf0
	// Line 3684, Address: 0x2d3268, Func Offset: 0x108
	// Line 3685, Address: 0x2d3298, Func Offset: 0x138
	// Line 3686, Address: 0x2d32a0, Func Offset: 0x140
	// Line 3689, Address: 0x2d32a8, Func Offset: 0x148
	// Line 3691, Address: 0x2d32b4, Func Offset: 0x154
	// Line 3693, Address: 0x2d32bc, Func Offset: 0x15c
	// Line 3697, Address: 0x2d32e0, Func Offset: 0x180
	// Line 3698, Address: 0x2d32e4, Func Offset: 0x184
	// Func End, Address: 0x2d32f8, Func Offset: 0x198
}

// zGameInitPlayer__Fv
// Start address: 0x2d3300
void zGameInitPlayer()
{
	xEntAsset* asset;
	int32 playerCount;
	int32 i;
	uint32 playerTag;
	zPlayerSB* player;
	uint32 altCostume;
	uint32 playerForPointerTag;
	// Line 3543, Address: 0x2d3300, Func Offset: 0
	// Line 3546, Address: 0x2d3304, Func Offset: 0x4
	// Line 3543, Address: 0x2d3308, Func Offset: 0x8
	// Line 3546, Address: 0x2d330c, Func Offset: 0xc
	// Line 3543, Address: 0x2d3310, Func Offset: 0x10
	// Line 3546, Address: 0x2d3324, Func Offset: 0x24
	// Line 3549, Address: 0x2d332c, Func Offset: 0x2c
	// Line 3550, Address: 0x2d3340, Func Offset: 0x40
	// Line 3549, Address: 0x2d3344, Func Offset: 0x44
	// Line 3550, Address: 0x2d3348, Func Offset: 0x48
	// Line 3563, Address: 0x2d334c, Func Offset: 0x4c
	// Line 3560, Address: 0x2d3350, Func Offset: 0x50
	// Line 3563, Address: 0x2d3354, Func Offset: 0x54
	// Line 3564, Address: 0x2d3368, Func Offset: 0x68
	// Line 3566, Address: 0x2d3374, Func Offset: 0x74
	// Line 3564, Address: 0x2d3378, Func Offset: 0x78
	// Line 3566, Address: 0x2d337c, Func Offset: 0x7c
	// Line 3564, Address: 0x2d3380, Func Offset: 0x80
	// Line 3566, Address: 0x2d3384, Func Offset: 0x84
	// Line 3570, Address: 0x2d3394, Func Offset: 0x94
	// Line 3572, Address: 0x2d33a4, Func Offset: 0xa4
	// Line 3575, Address: 0x2d33a8, Func Offset: 0xa8
	// Line 3576, Address: 0x2d33bc, Func Offset: 0xbc
	// Line 3577, Address: 0x2d33cc, Func Offset: 0xcc
	// Line 3603, Address: 0x2d33e0, Func Offset: 0xe0
	// Line 3621, Address: 0x2d33f4, Func Offset: 0xf4
	// Line 3613, Address: 0x2d33f8, Func Offset: 0xf8
	// Line 3621, Address: 0x2d3400, Func Offset: 0x100
	// Line 3631, Address: 0x2d3408, Func Offset: 0x108
	// Func End, Address: 0x2d342c, Func Offset: 0x12c
}

// zGameScreenTransitionEnd__Fv
// Start address: 0x2d3430
void zGameScreenTransitionEnd()
{
	// Line 3484, Address: 0x2d3430, Func Offset: 0
	// Line 3485, Address: 0x2d3434, Func Offset: 0x4
	// Line 3484, Address: 0x2d3438, Func Offset: 0x8
	// Line 3485, Address: 0x2d343c, Func Offset: 0xc
	// Line 3492, Address: 0x2d3448, Func Offset: 0x18
	// Line 3506, Address: 0x2d3454, Func Offset: 0x24
	// Line 3515, Address: 0x2d345c, Func Offset: 0x2c
	// Line 3516, Address: 0x2d3464, Func Offset: 0x34
	// Line 3518, Address: 0x2d346c, Func Offset: 0x3c
	// Line 3520, Address: 0x2d3478, Func Offset: 0x48
	// Line 3522, Address: 0x2d3480, Func Offset: 0x50
	// Line 3523, Address: 0x2d3488, Func Offset: 0x58
	// Line 3524, Address: 0x2d3490, Func Offset: 0x60
	// Line 3527, Address: 0x2d3494, Func Offset: 0x64
	// Line 3528, Address: 0x2d349c, Func Offset: 0x6c
	// Line 3539, Address: 0x2d34a0, Func Offset: 0x70
	// Func End, Address: 0x2d34ac, Func Offset: 0x7c
}

// zGameScreenTransitionUpdate__FfPcPUc
// Start address: 0x2d34b0
void zGameScreenTransitionUpdate(float32 percentComplete, int8* msg, uint8* rgba)
{
	RwRGBA back_col;
	RwTexture* tex;
	RwRaster* ras;
	float32 recipCamZ;
	RwSky2DVertex vx[4];
	float32 z;
	int8 meter[256];
	// Line 3155, Address: 0x2d34b0, Func Offset: 0
	// Line 3156, Address: 0x2d34b4, Func Offset: 0x4
	// Line 3155, Address: 0x2d34b8, Func Offset: 0x8
	// Line 3156, Address: 0x2d34d4, Func Offset: 0x24
	// Line 3165, Address: 0x2d34e0, Func Offset: 0x30
	// Line 3169, Address: 0x2d34ec, Func Offset: 0x3c
	// Line 3165, Address: 0x2d34f0, Func Offset: 0x40
	// Line 3169, Address: 0x2d34f4, Func Offset: 0x44
	// Line 3200, Address: 0x2d3514, Func Offset: 0x64
	// Line 3201, Address: 0x2d351c, Func Offset: 0x6c
	// Line 3202, Address: 0x2d3524, Func Offset: 0x74
	// Line 3203, Address: 0x2d352c, Func Offset: 0x7c
	// Line 3204, Address: 0x2d3534, Func Offset: 0x84
	// Line 3208, Address: 0x2d353c, Func Offset: 0x8c
	// Line 3211, Address: 0x2d3550, Func Offset: 0xa0
	// Line 3216, Address: 0x2d3558, Func Offset: 0xa8
	// Line 3227, Address: 0x2d3568, Func Offset: 0xb8
	// Line 3230, Address: 0x2d3570, Func Offset: 0xc0
	// Line 3231, Address: 0x2d357c, Func Offset: 0xcc
	// Line 3232, Address: 0x2d3584, Func Offset: 0xd4
	// Line 3233, Address: 0x2d3588, Func Offset: 0xd8
	// Line 3234, Address: 0x2d3590, Func Offset: 0xe0
	// Line 3236, Address: 0x2d359c, Func Offset: 0xec
	// Line 3234, Address: 0x2d35a0, Func Offset: 0xf0
	// Line 3236, Address: 0x2d35a8, Func Offset: 0xf8
	// Line 3234, Address: 0x2d35b0, Func Offset: 0x100
	// Line 3236, Address: 0x2d35c0, Func Offset: 0x110
	// Line 3237, Address: 0x2d35c8, Func Offset: 0x118
	// Line 3238, Address: 0x2d35d8, Func Offset: 0x128
	// Line 3239, Address: 0x2d35e8, Func Offset: 0x138
	// Line 3240, Address: 0x2d35f8, Func Offset: 0x148
	// Line 3243, Address: 0x2d3608, Func Offset: 0x158
	// Line 3247, Address: 0x2d360c, Func Offset: 0x15c
	// Line 3243, Address: 0x2d3610, Func Offset: 0x160
	// Line 3245, Address: 0x2d3614, Func Offset: 0x164
	// Line 3246, Address: 0x2d3618, Func Offset: 0x168
	// Line 3248, Address: 0x2d361c, Func Offset: 0x16c
	// Line 3249, Address: 0x2d36e8, Func Offset: 0x238
	// Line 3253, Address: 0x2d36ec, Func Offset: 0x23c
	// Line 3250, Address: 0x2d36f0, Func Offset: 0x240
	// Line 3253, Address: 0x2d36f4, Func Offset: 0x244
	// Line 3248, Address: 0x2d36f8, Func Offset: 0x248
	// Line 3249, Address: 0x2d36fc, Func Offset: 0x24c
	// Line 3250, Address: 0x2d3700, Func Offset: 0x250
	// Line 3254, Address: 0x2d3704, Func Offset: 0x254
	// Line 3256, Address: 0x2d3738, Func Offset: 0x288
	// Line 3259, Address: 0x2d37fc, Func Offset: 0x34c
	// Line 3258, Address: 0x2d3800, Func Offset: 0x350
	// Line 3257, Address: 0x2d3808, Func Offset: 0x358
	// Line 3261, Address: 0x2d380c, Func Offset: 0x35c
	// Line 3262, Address: 0x2d3840, Func Offset: 0x390
	// Line 3264, Address: 0x2d3844, Func Offset: 0x394
	// Line 3265, Address: 0x2d3908, Func Offset: 0x458
	// Line 3267, Address: 0x2d390c, Func Offset: 0x45c
	// Line 3265, Address: 0x2d3910, Func Offset: 0x460
	// Line 3269, Address: 0x2d3914, Func Offset: 0x464
	// Line 3270, Address: 0x2d3944, Func Offset: 0x494
	// Line 3272, Address: 0x2d3978, Func Offset: 0x4c8
	// Line 3277, Address: 0x2d3a38, Func Offset: 0x588
	// Line 3272, Address: 0x2d3a44, Func Offset: 0x594
	// Line 3277, Address: 0x2d3a48, Func Offset: 0x598
	// Line 3274, Address: 0x2d3a50, Func Offset: 0x5a0
	// Line 3275, Address: 0x2d3a54, Func Offset: 0x5a4
	// Line 3277, Address: 0x2d3a58, Func Offset: 0x5a8
	// Line 3279, Address: 0x2d3a60, Func Offset: 0x5b0
	// Line 3280, Address: 0x2d3a70, Func Offset: 0x5c0
	// Line 3281, Address: 0x2d3a80, Func Offset: 0x5d0
	// Line 3288, Address: 0x2d3a90, Func Offset: 0x5e0
	// Line 3289, Address: 0x2d3aac, Func Offset: 0x5fc
	// Line 3290, Address: 0x2d3ab4, Func Offset: 0x604
	// Line 3297, Address: 0x2d3ac4, Func Offset: 0x614
	// Line 3298, Address: 0x2d3ad4, Func Offset: 0x624
	// Line 3300, Address: 0x2d3adc, Func Offset: 0x62c
	// Line 3301, Address: 0x2d3aec, Func Offset: 0x63c
	// Line 3303, Address: 0x2d3af4, Func Offset: 0x644
	// Line 3304, Address: 0x2d3b04, Func Offset: 0x654
	// Line 3306, Address: 0x2d3b0c, Func Offset: 0x65c
	// Line 3307, Address: 0x2d3b1c, Func Offset: 0x66c
	// Line 3309, Address: 0x2d3b24, Func Offset: 0x674
	// Line 3320, Address: 0x2d3b28, Func Offset: 0x678
	// Line 3327, Address: 0x2d3b30, Func Offset: 0x680
	// Line 3332, Address: 0x2d3b38, Func Offset: 0x688
	// Line 3340, Address: 0x2d3b44, Func Offset: 0x694
	// Line 3347, Address: 0x2d3b4c, Func Offset: 0x69c
	// Line 3350, Address: 0x2d3b54, Func Offset: 0x6a4
	// Line 3353, Address: 0x2d3b64, Func Offset: 0x6b4
	// Line 3293, Address: 0x2d3b78, Func Offset: 0x6c8
	// Line 3353, Address: 0x2d3b7c, Func Offset: 0x6cc
	// Line 3293, Address: 0x2d3b80, Func Offset: 0x6d0
	// Line 3353, Address: 0x2d3b84, Func Offset: 0x6d4
	// Line 3293, Address: 0x2d3b90, Func Offset: 0x6e0
	// Line 3353, Address: 0x2d3b94, Func Offset: 0x6e4
	// Line 3294, Address: 0x2d3ba0, Func Offset: 0x6f0
	// Line 3353, Address: 0x2d3bc4, Func Offset: 0x714
	// Line 3294, Address: 0x2d3bcc, Func Offset: 0x71c
	// Line 3353, Address: 0x2d3bd0, Func Offset: 0x720
	// Line 3294, Address: 0x2d3bd8, Func Offset: 0x728
	// Line 3353, Address: 0x2d3bdc, Func Offset: 0x72c
	// Line 3294, Address: 0x2d3be4, Func Offset: 0x734
	// Line 3353, Address: 0x2d3be8, Func Offset: 0x738
	// Line 3294, Address: 0x2d3bf8, Func Offset: 0x748
	// Line 3353, Address: 0x2d3c00, Func Offset: 0x750
	// Func End, Address: 0x2d3c20, Func Offset: 0x770
}

// zGameScreenTransitionUpdate__FfPc
// Start address: 0x2d3c20
void zGameScreenTransitionUpdate(float32 percentComplete, int8* msg)
{
	// Line 3128, Address: 0x2d3c20, Func Offset: 0
	// Line 3129, Address: 0x2d3c24, Func Offset: 0x4
	// Line 3128, Address: 0x2d3c28, Func Offset: 0x8
	// Line 3129, Address: 0x2d3c2c, Func Offset: 0xc
	// Line 3132, Address: 0x2d3c38, Func Offset: 0x18
	// Line 3133, Address: 0x2d3c44, Func Offset: 0x24
	// Line 3135, Address: 0x2d3c4c, Func Offset: 0x2c
	// Line 3137, Address: 0x2d3c58, Func Offset: 0x38
	// Func End, Address: 0x2d3c64, Func Offset: 0x44
}

// zGameScreenTransitionBegin__Fv
// Start address: 0x2d3c70
void zGameScreenTransitionBegin()
{
	RwFrame* frame;
	RwRGBAReal col;
	RwBBox box;
	// Line 3062, Address: 0x2d3c70, Func Offset: 0
	// Line 3063, Address: 0x2d3c74, Func Offset: 0x4
	// Line 3062, Address: 0x2d3c78, Func Offset: 0x8
	// Line 3063, Address: 0x2d3c7c, Func Offset: 0xc
	// Line 3079, Address: 0x2d3c88, Func Offset: 0x18
	// Line 3072, Address: 0x2d3c8c, Func Offset: 0x1c
	// Line 3079, Address: 0x2d3c90, Func Offset: 0x20
	// Line 3072, Address: 0x2d3c98, Func Offset: 0x28
	// Line 3079, Address: 0x2d3c9c, Func Offset: 0x2c
	// Line 3080, Address: 0x2d3ca4, Func Offset: 0x34
	// Line 3088, Address: 0x2d3cac, Func Offset: 0x3c
	// Line 3090, Address: 0x2d3cb8, Func Offset: 0x48
	// Line 3095, Address: 0x2d3cc0, Func Offset: 0x50
	// Line 3097, Address: 0x2d3cc4, Func Offset: 0x54
	// Line 3095, Address: 0x2d3cc8, Func Offset: 0x58
	// Line 3097, Address: 0x2d3cd4, Func Offset: 0x64
	// Line 3099, Address: 0x2d3cdc, Func Offset: 0x6c
	// Line 3101, Address: 0x2d3ce4, Func Offset: 0x74
	// Line 3105, Address: 0x2d3cf0, Func Offset: 0x80
	// Line 3108, Address: 0x2d3cf4, Func Offset: 0x84
	// Line 3105, Address: 0x2d3cf8, Func Offset: 0x88
	// Line 3108, Address: 0x2d3cfc, Func Offset: 0x8c
	// Line 3105, Address: 0x2d3d00, Func Offset: 0x90
	// Line 3112, Address: 0x2d3d04, Func Offset: 0x94
	// Line 3106, Address: 0x2d3d08, Func Offset: 0x98
	// Line 3107, Address: 0x2d3d0c, Func Offset: 0x9c
	// Line 3108, Address: 0x2d3d10, Func Offset: 0xa0
	// Line 3109, Address: 0x2d3d14, Func Offset: 0xa4
	// Line 3112, Address: 0x2d3d18, Func Offset: 0xa8
	// Line 3115, Address: 0x2d3d20, Func Offset: 0xb0
	// Line 3125, Address: 0x2d3d30, Func Offset: 0xc0
	// Func End, Address: 0x2d3d3c, Func Offset: 0xcc
}

// zGameUpdateMode__Fv
// Start address: 0x2d3d40
void zGameUpdateMode()
{
	xPortalAsset* passet;
	uint32 nextSceneID;
	uint32 sPlayerMarkerStartCamID;
	// Line 2685, Address: 0x2d3d40, Func Offset: 0
	// Line 2688, Address: 0x2d3d44, Func Offset: 0x4
	// Line 2685, Address: 0x2d3d48, Func Offset: 0x8
	// Line 2688, Address: 0x2d3d5c, Func Offset: 0x1c
	// Line 2690, Address: 0x2d3d68, Func Offset: 0x28
	// Line 2692, Address: 0x2d3d74, Func Offset: 0x34
	// Line 2694, Address: 0x2d3d90, Func Offset: 0x50
	// Line 2695, Address: 0x2d3dac, Func Offset: 0x6c
	// Line 2697, Address: 0x2d3db8, Func Offset: 0x78
	// Line 2699, Address: 0x2d3dd4, Func Offset: 0x94
	// Line 2701, Address: 0x2d3dd8, Func Offset: 0x98
	// Line 2699, Address: 0x2d3ddc, Func Offset: 0x9c
	// Line 2701, Address: 0x2d3de0, Func Offset: 0xa0
	// Line 2702, Address: 0x2d3de4, Func Offset: 0xa4
	// Line 2703, Address: 0x2d3de8, Func Offset: 0xa8
	// Line 2702, Address: 0x2d3dec, Func Offset: 0xac
	// Line 2704, Address: 0x2d3df0, Func Offset: 0xb0
	// Line 2707, Address: 0x2d3dfc, Func Offset: 0xbc
	// Line 2704, Address: 0x2d3e00, Func Offset: 0xc0
	// Line 2707, Address: 0x2d3e04, Func Offset: 0xc4
	// Line 2708, Address: 0x2d3e0c, Func Offset: 0xcc
	// Line 2707, Address: 0x2d3e10, Func Offset: 0xd0
	// Line 2708, Address: 0x2d3e14, Func Offset: 0xd4
	// Line 2712, Address: 0x2d3e20, Func Offset: 0xe0
	// Line 2721, Address: 0x2d3e80, Func Offset: 0x140
	// Line 2835, Address: 0x2d3e8c, Func Offset: 0x14c
	// Line 2839, Address: 0x2d3e94, Func Offset: 0x154
	// Line 2937, Address: 0x2d3ea0, Func Offset: 0x160
	// Line 2944, Address: 0x2d3ea8, Func Offset: 0x168
	// Line 2966, Address: 0x2d3eb4, Func Offset: 0x174
	// Line 2971, Address: 0x2d3ebc, Func Offset: 0x17c
	// Line 2754, Address: 0x2d3ee0, Func Offset: 0x1a0
	// Line 2971, Address: 0x2d3ee4, Func Offset: 0x1a4
	// Line 2756, Address: 0x2d3ef8, Func Offset: 0x1b8
	// Line 2971, Address: 0x2d3efc, Func Offset: 0x1bc
	// Line 2756, Address: 0x2d3f14, Func Offset: 0x1d4
	// Line 2971, Address: 0x2d3f1c, Func Offset: 0x1dc
	// Line 2760, Address: 0x2d3f24, Func Offset: 0x1e4
	// Line 2761, Address: 0x2d3f28, Func Offset: 0x1e8
	// Line 2971, Address: 0x2d3f30, Func Offset: 0x1f0
	// Line 2770, Address: 0x2d3f40, Func Offset: 0x200
	// Line 2971, Address: 0x2d3f44, Func Offset: 0x204
	// Line 2770, Address: 0x2d3f68, Func Offset: 0x228
	// Line 2971, Address: 0x2d3f6c, Func Offset: 0x22c
	// Line 2773, Address: 0x2d3fa4, Func Offset: 0x264
	// Line 2971, Address: 0x2d3fa8, Func Offset: 0x268
	// Line 2774, Address: 0x2d3fc0, Func Offset: 0x280
	// Line 2971, Address: 0x2d3fc8, Func Offset: 0x288
	// Line 2774, Address: 0x2d3fd0, Func Offset: 0x290
	// Line 2971, Address: 0x2d3fd8, Func Offset: 0x298
	// Line 2774, Address: 0x2d3fe0, Func Offset: 0x2a0
	// Line 2971, Address: 0x2d3fe8, Func Offset: 0x2a8
	// Line 2774, Address: 0x2d4000, Func Offset: 0x2c0
	// Line 2971, Address: 0x2d4004, Func Offset: 0x2c4
	// Line 2777, Address: 0x2d400c, Func Offset: 0x2cc
	// Line 2971, Address: 0x2d4014, Func Offset: 0x2d4
	// Line 2756, Address: 0x2d4024, Func Offset: 0x2e4
	// Line 2971, Address: 0x2d4030, Func Offset: 0x2f0
	// Line 2756, Address: 0x2d4034, Func Offset: 0x2f4
	// Line 2971, Address: 0x2d4038, Func Offset: 0x2f8
	// Line 2756, Address: 0x2d4044, Func Offset: 0x304
	// Line 2971, Address: 0x2d404c, Func Offset: 0x30c
	// Line 2756, Address: 0x2d4050, Func Offset: 0x310
	// Line 2971, Address: 0x2d4054, Func Offset: 0x314
	// Line 2756, Address: 0x2d4058, Func Offset: 0x318
	// Line 2971, Address: 0x2d405c, Func Offset: 0x31c
	// Line 2756, Address: 0x2d4064, Func Offset: 0x324
	// Line 2971, Address: 0x2d4070, Func Offset: 0x330
	// Line 2756, Address: 0x2d407c, Func Offset: 0x33c
	// Line 2971, Address: 0x2d4084, Func Offset: 0x344
	// Line 2770, Address: 0x2d40dc, Func Offset: 0x39c
	// Line 2971, Address: 0x2d40e0, Func Offset: 0x3a0
	// Line 2770, Address: 0x2d410c, Func Offset: 0x3cc
	// Line 2971, Address: 0x2d4110, Func Offset: 0x3d0
	// Line 2770, Address: 0x2d4118, Func Offset: 0x3d8
	// Line 2971, Address: 0x2d411c, Func Offset: 0x3dc
	// Line 2770, Address: 0x2d4128, Func Offset: 0x3e8
	// Line 2971, Address: 0x2d412c, Func Offset: 0x3ec
	// Line 2770, Address: 0x2d4158, Func Offset: 0x418
	// Line 2971, Address: 0x2d415c, Func Offset: 0x41c
	// Line 2770, Address: 0x2d4180, Func Offset: 0x440
	// Line 2971, Address: 0x2d4184, Func Offset: 0x444
	// Line 2772, Address: 0x2d418c, Func Offset: 0x44c
	// Line 2834, Address: 0x2d4194, Func Offset: 0x454
	// Line 2971, Address: 0x2d419c, Func Offset: 0x45c
	// Line 2880, Address: 0x2d41e4, Func Offset: 0x4a4
	// Line 2971, Address: 0x2d41e8, Func Offset: 0x4a8
	// Line 2880, Address: 0x2d41f0, Func Offset: 0x4b0
	// Line 2971, Address: 0x2d41f4, Func Offset: 0x4b4
	// Line 2880, Address: 0x2d41fc, Func Offset: 0x4bc
	// Line 2971, Address: 0x2d4200, Func Offset: 0x4c0
	// Line 2880, Address: 0x2d4214, Func Offset: 0x4d4
	// Line 2971, Address: 0x2d4218, Func Offset: 0x4d8
	// Line 2880, Address: 0x2d4244, Func Offset: 0x504
	// Line 2971, Address: 0x2d424c, Func Offset: 0x50c
	// Line 2893, Address: 0x2d4278, Func Offset: 0x538
	// Line 2971, Address: 0x2d427c, Func Offset: 0x53c
	// Line 2922, Address: 0x2d42b0, Func Offset: 0x570
	// Line 2971, Address: 0x2d42d0, Func Offset: 0x590
	// Line 2924, Address: 0x2d42dc, Func Offset: 0x59c
	// Line 2971, Address: 0x2d42e0, Func Offset: 0x5a0
	// Line 2936, Address: 0x2d42e8, Func Offset: 0x5a8
	// Line 2971, Address: 0x2d42f0, Func Offset: 0x5b0
	// Line 2943, Address: 0x2d4310, Func Offset: 0x5d0
	// Line 2971, Address: 0x2d4318, Func Offset: 0x5d8
	// Line 2948, Address: 0x2d431c, Func Offset: 0x5dc
	// Line 2971, Address: 0x2d4328, Func Offset: 0x5e8
	// Line 2956, Address: 0x2d4338, Func Offset: 0x5f8
	// Line 2971, Address: 0x2d433c, Func Offset: 0x5fc
	// Line 2957, Address: 0x2d4348, Func Offset: 0x608
	// Line 2971, Address: 0x2d434c, Func Offset: 0x60c
	// Line 2958, Address: 0x2d4358, Func Offset: 0x618
	// Line 2971, Address: 0x2d4364, Func Offset: 0x624
	// Line 2965, Address: 0x2d4378, Func Offset: 0x638
	// Line 2950, Address: 0x2d4380, Func Offset: 0x640
	// Line 2971, Address: 0x2d4384, Func Offset: 0x644
	// Line 2952, Address: 0x2d438c, Func Offset: 0x64c
	// Line 2971, Address: 0x2d4390, Func Offset: 0x650
	// Line 2974, Address: 0x2d43a0, Func Offset: 0x660
	// Func End, Address: 0x2d43bc, Func Offset: 0x67c
}

// zGameStall__Fv
// Start address: 0x2d43c0
void zGameStall()
{
	// Line 2454, Address: 0x2d43c0, Func Offset: 0
	// Line 2458, Address: 0x2d43c8, Func Offset: 0x8
	// Line 2463, Address: 0x2d43d8, Func Offset: 0x18
	// Line 2466, Address: 0x2d43e0, Func Offset: 0x20
	// Line 2469, Address: 0x2d4410, Func Offset: 0x50
	// Line 2471, Address: 0x2d441c, Func Offset: 0x5c
	// Line 2473, Address: 0x2d442c, Func Offset: 0x6c
	// Func End, Address: 0x2d4438, Func Offset: 0x78
}

// zGamePauseIfPossible__Fv
// Start address: 0x2d4440
void zGamePauseIfPossible()
{
	// Line 2387, Address: 0x2d4440, Func Offset: 0
	// Line 2389, Address: 0x2d4444, Func Offset: 0x4
	// Line 2387, Address: 0x2d4448, Func Offset: 0x8
	// Line 2389, Address: 0x2d4450, Func Offset: 0x10
	// Line 2393, Address: 0x2d445c, Func Offset: 0x1c
	// Line 2397, Address: 0x2d446c, Func Offset: 0x2c
	// Line 2401, Address: 0x2d4484, Func Offset: 0x44
	// Line 2402, Address: 0x2d4490, Func Offset: 0x50
	// Line 2405, Address: 0x2d4498, Func Offset: 0x58
	// Line 2412, Address: 0x2d44a8, Func Offset: 0x68
	// Line 2431, Address: 0x2d44cc, Func Offset: 0x8c
	// Line 2433, Address: 0x2d44d4, Func Offset: 0x94
	// Line 2439, Address: 0x2d44e0, Func Offset: 0xa0
	// Line 2443, Address: 0x2d44f4, Func Offset: 0xb4
	// Line 2435, Address: 0x2d4514, Func Offset: 0xd4
	// Line 2443, Address: 0x2d451c, Func Offset: 0xdc
	// Line 2435, Address: 0x2d4524, Func Offset: 0xe4
	// Line 2443, Address: 0x2d452c, Func Offset: 0xec
	// Line 2435, Address: 0x2d4534, Func Offset: 0xf4
	// Line 2443, Address: 0x2d453c, Func Offset: 0xfc
	// Line 2435, Address: 0x2d4554, Func Offset: 0x114
	// Line 2443, Address: 0x2d4558, Func Offset: 0x118
	// Line 2441, Address: 0x2d4580, Func Offset: 0x140
	// Line 2443, Address: 0x2d4588, Func Offset: 0x148
	// Line 2441, Address: 0x2d4590, Func Offset: 0x150
	// Line 2443, Address: 0x2d4598, Func Offset: 0x158
	// Line 2441, Address: 0x2d45a0, Func Offset: 0x160
	// Line 2443, Address: 0x2d45a8, Func Offset: 0x168
	// Line 2441, Address: 0x2d45c0, Func Offset: 0x180
	// Line 2443, Address: 0x2d45c4, Func Offset: 0x184
	// Line 2450, Address: 0x2d45d4, Func Offset: 0x194
	// Line 2451, Address: 0x2d4740, Func Offset: 0x300
	// Func End, Address: 0x2d4750, Func Offset: 0x310
}

// zGamePause__Fv
// Start address: 0x2d4750
void zGamePause()
{
	// Line 2338, Address: 0x2d4750, Func Offset: 0
	// Line 2341, Address: 0x2d4754, Func Offset: 0x4
	// Line 2338, Address: 0x2d4758, Func Offset: 0x8
	// Line 2341, Address: 0x2d4760, Func Offset: 0x10
	// Line 2348, Address: 0x2d476c, Func Offset: 0x1c
	// Line 2351, Address: 0x2d4890, Func Offset: 0x140
	// Line 2352, Address: 0x2d489c, Func Offset: 0x14c
	// Line 2355, Address: 0x2d48a4, Func Offset: 0x154
	// Line 2357, Address: 0x2d48b4, Func Offset: 0x164
	// Line 2381, Address: 0x2d48c4, Func Offset: 0x174
	// Func End, Address: 0x2d48d4, Func Offset: 0x184
}

// zGameOkToPause__Fv
// Start address: 0x2d48e0
pause_ability zGameOkToPause()
{
	// Line 2281, Address: 0x2d48e0, Func Offset: 0
	// Line 2282, Address: 0x2d48e4, Func Offset: 0x4
	// Line 2281, Address: 0x2d48e8, Func Offset: 0x8
	// Line 2282, Address: 0x2d48ec, Func Offset: 0xc
	// Line 2283, Address: 0x2d48f8, Func Offset: 0x18
	// Line 2285, Address: 0x2d4900, Func Offset: 0x20
	// Line 2290, Address: 0x2d4910, Func Offset: 0x30
	// Line 2302, Address: 0x2d492c, Func Offset: 0x4c
	// Line 2306, Address: 0x2d4944, Func Offset: 0x64
	// Line 2308, Address: 0x2d4958, Func Offset: 0x78
	// Line 2313, Address: 0x2d4960, Func Offset: 0x80
	// Line 2286, Address: 0x2d4970, Func Offset: 0x90
	// Line 2318, Address: 0x2d4978, Func Offset: 0x98
	// Func End, Address: 0x2d4984, Func Offset: 0xa4
}

// zGameIsPaused__Fv
// Start address: 0x2d4990
int32 zGameIsPaused()
{
	// Line 2185, Address: 0x2d4990, Func Offset: 0
	// Line 2188, Address: 0x2d4994, Func Offset: 0x4
	// Line 2194, Address: 0x2d49a0, Func Offset: 0x10
	// Line 2197, Address: 0x2d49ac, Func Offset: 0x1c
	// Line 2200, Address: 0x2d49b8, Func Offset: 0x28
	// Line 2203, Address: 0x2d49c4, Func Offset: 0x34
	// Line 2206, Address: 0x2d49d0, Func Offset: 0x40
	// Line 2215, Address: 0x2d49d8, Func Offset: 0x48
	// Line 2220, Address: 0x2d49e4, Func Offset: 0x54
	// Line 2190, Address: 0x2d49f0, Func Offset: 0x60
	// Line 2195, Address: 0x2d49f8, Func Offset: 0x68
	// Line 2198, Address: 0x2d4a00, Func Offset: 0x70
	// Line 2201, Address: 0x2d4a08, Func Offset: 0x78
	// Line 2204, Address: 0x2d4a10, Func Offset: 0x80
	// Line 2235, Address: 0x2d4a18, Func Offset: 0x88
	// Func End, Address: 0x2d4a20, Func Offset: 0x90
}

// zGameLoop__Fv
// Start address: 0x2d4a20
void zGameLoop()
{
	int32 ostrich_delay;
	int32 isPaused;
	xMat4x3 playerMat;
	uint32 i;
	uint8 moviePadInsertion;
	float32 sAttractMode_timer;
	// Line 1002, Address: 0x2d4a20, Func Offset: 0
	// Line 1012, Address: 0x2d4a24, Func Offset: 0x4
	// Line 1002, Address: 0x2d4a28, Func Offset: 0x8
	// Line 1009, Address: 0x2d4a44, Func Offset: 0x24
	// Line 1002, Address: 0x2d4a48, Func Offset: 0x28
	// Line 1012, Address: 0x2d4a60, Func Offset: 0x40
	// Line 1019, Address: 0x2d4a70, Func Offset: 0x50
	// Line 1021, Address: 0x2d4a78, Func Offset: 0x58
	// Line 1040, Address: 0x2d4a80, Func Offset: 0x60
	// Line 1048, Address: 0x2d4ab8, Func Offset: 0x98
	// Line 1040, Address: 0x2d4abc, Func Offset: 0x9c
	// Line 1048, Address: 0x2d4ac0, Func Offset: 0xa0
	// Line 1108, Address: 0x2d4b74, Func Offset: 0x154
	// Line 1109, Address: 0x2d4b7c, Func Offset: 0x15c
	// Line 1111, Address: 0x2d4b8c, Func Offset: 0x16c
	// Line 1128, Address: 0x2d4ba8, Func Offset: 0x188
	// Line 1311, Address: 0x2d4bb4, Func Offset: 0x194
	// Line 1312, Address: 0x2d4bbc, Func Offset: 0x19c
	// Line 1358, Address: 0x2d4bc0, Func Offset: 0x1a0
	// Line 1360, Address: 0x2d4bc4, Func Offset: 0x1a4
	// Line 1358, Address: 0x2d4bc8, Func Offset: 0x1a8
	// Line 1361, Address: 0x2d4bcc, Func Offset: 0x1ac
	// Line 1363, Address: 0x2d4bd4, Func Offset: 0x1b4
	// Line 1364, Address: 0x2d4bdc, Func Offset: 0x1bc
	// Line 1361, Address: 0x2d4be0, Func Offset: 0x1c0
	// Line 1363, Address: 0x2d4be4, Func Offset: 0x1c4
	// Line 1364, Address: 0x2d4bec, Func Offset: 0x1cc
	// Line 1363, Address: 0x2d4bf0, Func Offset: 0x1d0
	// Line 1365, Address: 0x2d4bf4, Func Offset: 0x1d4
	// Line 1366, Address: 0x2d4c00, Func Offset: 0x1e0
	// Line 1365, Address: 0x2d4c08, Func Offset: 0x1e8
	// Line 1366, Address: 0x2d4c0c, Func Offset: 0x1ec
	// Line 1365, Address: 0x2d4c10, Func Offset: 0x1f0
	// Line 1366, Address: 0x2d4c1c, Func Offset: 0x1fc
	// Line 1372, Address: 0x2d4c28, Func Offset: 0x208
	// Line 1366, Address: 0x2d4c34, Func Offset: 0x214
	// Line 1372, Address: 0x2d4c44, Func Offset: 0x224
	// Line 1384, Address: 0x2d4c4c, Func Offset: 0x22c
	// Line 1389, Address: 0x2d4c5c, Func Offset: 0x23c
	// Line 1397, Address: 0x2d4c90, Func Offset: 0x270
	// Line 1402, Address: 0x2d4cc4, Func Offset: 0x2a4
	// Line 1405, Address: 0x2d4cc8, Func Offset: 0x2a8
	// Line 1407, Address: 0x2d4ce0, Func Offset: 0x2c0
	// Line 1408, Address: 0x2d4ce8, Func Offset: 0x2c8
	// Line 1412, Address: 0x2d4cf8, Func Offset: 0x2d8
	// Line 1413, Address: 0x2d4d00, Func Offset: 0x2e0
	// Line 1414, Address: 0x2d4d18, Func Offset: 0x2f8
	// Line 1415, Address: 0x2d4d1c, Func Offset: 0x2fc
	// Line 1414, Address: 0x2d4d20, Func Offset: 0x300
	// Line 1415, Address: 0x2d4d24, Func Offset: 0x304
	// Line 1414, Address: 0x2d4d2c, Func Offset: 0x30c
	// Line 1415, Address: 0x2d4d3c, Func Offset: 0x31c
	// Line 1417, Address: 0x2d4d4c, Func Offset: 0x32c
	// Line 1416, Address: 0x2d4d50, Func Offset: 0x330
	// Line 1417, Address: 0x2d4d54, Func Offset: 0x334
	// Line 1419, Address: 0x2d4d5c, Func Offset: 0x33c
	// Line 1420, Address: 0x2d4d68, Func Offset: 0x348
	// Line 1421, Address: 0x2d4d6c, Func Offset: 0x34c
	// Line 1422, Address: 0x2d4d70, Func Offset: 0x350
	// Line 1423, Address: 0x2d4d98, Func Offset: 0x378
	// Line 1424, Address: 0x2d4db4, Func Offset: 0x394
	// Line 1423, Address: 0x2d4db8, Func Offset: 0x398
	// Line 1424, Address: 0x2d4dbc, Func Offset: 0x39c
	// Line 1426, Address: 0x2d4dcc, Func Offset: 0x3ac
	// Line 1425, Address: 0x2d4dd0, Func Offset: 0x3b0
	// Line 1426, Address: 0x2d4dd4, Func Offset: 0x3b4
	// Line 1456, Address: 0x2d4df4, Func Offset: 0x3d4
	// Line 1458, Address: 0x2d4e00, Func Offset: 0x3e0
	// Line 1459, Address: 0x2d4e08, Func Offset: 0x3e8
	// Line 1460, Address: 0x2d4e24, Func Offset: 0x404
	// Line 1462, Address: 0x2d4e30, Func Offset: 0x410
	// Line 1463, Address: 0x2d4e38, Func Offset: 0x418
	// Line 1467, Address: 0x2d4e44, Func Offset: 0x424
	// Line 1519, Address: 0x2d4e48, Func Offset: 0x428
	// Line 1521, Address: 0x2d4e70, Func Offset: 0x450
	// Line 1524, Address: 0x2d4e78, Func Offset: 0x458
	// Line 1606, Address: 0x2d4e84, Func Offset: 0x464
	// Line 1623, Address: 0x2d4e8c, Func Offset: 0x46c
	// Line 1635, Address: 0x2d4e94, Func Offset: 0x474
	// Line 1649, Address: 0x2d4ea0, Func Offset: 0x480
	// Line 1650, Address: 0x2d4eac, Func Offset: 0x48c
	// Line 1649, Address: 0x2d4eb4, Func Offset: 0x494
	// Line 1650, Address: 0x2d4eb8, Func Offset: 0x498
	// Line 1653, Address: 0x2d4ec8, Func Offset: 0x4a8
	// Line 1669, Address: 0x2d4ed0, Func Offset: 0x4b0
	// Line 1686, Address: 0x2d4ed8, Func Offset: 0x4b8
	// Line 1687, Address: 0x2d4ee8, Func Offset: 0x4c8
	// Line 1690, Address: 0x2d4efc, Func Offset: 0x4dc
	// Line 1692, Address: 0x2d4f08, Func Offset: 0x4e8
	// Line 1693, Address: 0x2d4f54, Func Offset: 0x534
	// Line 1733, Address: 0x2d4f70, Func Offset: 0x550
	// Line 1737, Address: 0x2d4f78, Func Offset: 0x558
	// Line 1738, Address: 0x2d4f84, Func Offset: 0x564
	// Line 1740, Address: 0x2d4fa0, Func Offset: 0x580
	// Line 1761, Address: 0x2d4fa8, Func Offset: 0x588
	// Line 1764, Address: 0x2d4fb0, Func Offset: 0x590
	// Line 1766, Address: 0x2d4fb8, Func Offset: 0x598
	// Line 1768, Address: 0x2d5008, Func Offset: 0x5e8
	// Line 1770, Address: 0x2d5010, Func Offset: 0x5f0
	// Line 1771, Address: 0x2d5018, Func Offset: 0x5f8
	// Line 1770, Address: 0x2d5020, Func Offset: 0x600
	// Line 1771, Address: 0x2d5024, Func Offset: 0x604
	// Line 1772, Address: 0x2d502c, Func Offset: 0x60c
	// Line 1775, Address: 0x2d5038, Func Offset: 0x618
	// Line 1772, Address: 0x2d5044, Func Offset: 0x624
	// Line 1775, Address: 0x2d5054, Func Offset: 0x634
	// Line 1790, Address: 0x2d505c, Func Offset: 0x63c
	// Line 1794, Address: 0x2d506c, Func Offset: 0x64c
	// Line 1805, Address: 0x2d5074, Func Offset: 0x654
	// Line 1808, Address: 0x2d507c, Func Offset: 0x65c
	// Line 2001, Address: 0x2d508c, Func Offset: 0x66c
	// Line 2003, Address: 0x2d50a0, Func Offset: 0x680
	// Line 2004, Address: 0x2d50cc, Func Offset: 0x6ac
	// Line 2005, Address: 0x2d50d8, Func Offset: 0x6b8
	// Line 2006, Address: 0x2d50e0, Func Offset: 0x6c0
	// Line 2009, Address: 0x2d50ec, Func Offset: 0x6cc
	// Line 2011, Address: 0x2d50f4, Func Offset: 0x6d4
	// Line 2013, Address: 0x2d50f8, Func Offset: 0x6d8
	// Line 2014, Address: 0x2d5100, Func Offset: 0x6e0
	// Line 2030, Address: 0x2d5108, Func Offset: 0x6e8
	// Line 2044, Address: 0x2d511c, Func Offset: 0x6fc
	// Line 2046, Address: 0x2d5130, Func Offset: 0x710
	// Line 2049, Address: 0x2d5140, Func Offset: 0x720
	// Line 2057, Address: 0x2d5158, Func Offset: 0x738
	// Line 2060, Address: 0x2d5160, Func Offset: 0x740
	// Line 2063, Address: 0x2d5168, Func Offset: 0x748
	// Line 2064, Address: 0x2d516c, Func Offset: 0x74c
	// Line 2063, Address: 0x2d5170, Func Offset: 0x750
	// Line 2064, Address: 0x2d5174, Func Offset: 0x754
	// Line 2063, Address: 0x2d5178, Func Offset: 0x758
	// Line 2066, Address: 0x2d517c, Func Offset: 0x75c
	// Line 2068, Address: 0x2d5184, Func Offset: 0x764
	// Line 2169, Address: 0x2d5190, Func Offset: 0x770
	// Line 2176, Address: 0x2d51b0, Func Offset: 0x790
	// Line 1312, Address: 0x2d51c0, Func Offset: 0x7a0
	// Line 2176, Address: 0x2d51d0, Func Offset: 0x7b0
	// Line 1312, Address: 0x2d51d4, Func Offset: 0x7b4
	// Line 2176, Address: 0x2d51e8, Func Offset: 0x7c8
	// Line 1394, Address: 0x2d5200, Func Offset: 0x7e0
	// Line 1397, Address: 0x2d520c, Func Offset: 0x7ec
	// Line 1401, Address: 0x2d5210, Func Offset: 0x7f0
	// Line 1428, Address: 0x2d521c, Func Offset: 0x7fc
	// Line 2176, Address: 0x2d5220, Func Offset: 0x800
	// Line 1457, Address: 0x2d5240, Func Offset: 0x820
	// Line 2176, Address: 0x2d5250, Func Offset: 0x830
	// Line 1461, Address: 0x2d5258, Func Offset: 0x838
	// Line 2176, Address: 0x2d5268, Func Offset: 0x848
	// Line 1676, Address: 0x2d526c, Func Offset: 0x84c
	// Line 2176, Address: 0x2d5278, Func Offset: 0x858
	// Line 1676, Address: 0x2d5284, Func Offset: 0x864
	// Line 2176, Address: 0x2d5288, Func Offset: 0x868
	// Line 1676, Address: 0x2d52b4, Func Offset: 0x894
	// Line 2176, Address: 0x2d52c8, Func Offset: 0x8a8
	// Line 1679, Address: 0x2d52d0, Func Offset: 0x8b0
	// Line 2176, Address: 0x2d52e0, Func Offset: 0x8c0
	// Line 1681, Address: 0x2d52ec, Func Offset: 0x8cc
	// Line 2176, Address: 0x2d52f0, Func Offset: 0x8d0
	// Line 1681, Address: 0x2d5328, Func Offset: 0x908
	// Line 2176, Address: 0x2d532c, Func Offset: 0x90c
	// Line 1681, Address: 0x2d5434, Func Offset: 0xa14
	// Line 2176, Address: 0x2d543c, Func Offset: 0xa1c
	// Line 1683, Address: 0x2d552c, Func Offset: 0xb0c
	// Line 2176, Address: 0x2d553c, Func Offset: 0xb1c
	// Line 1683, Address: 0x2d5558, Func Offset: 0xb38
	// Line 2176, Address: 0x2d5560, Func Offset: 0xb40
	// Line 1677, Address: 0x2d5588, Func Offset: 0xb68
	// Line 2176, Address: 0x2d558c, Func Offset: 0xb6c
	// Line 1677, Address: 0x2d5594, Func Offset: 0xb74
	// Line 2176, Address: 0x2d55a0, Func Offset: 0xb80
	// Line 1677, Address: 0x2d55c4, Func Offset: 0xba4
	// Line 2176, Address: 0x2d55c8, Func Offset: 0xba8
	// Line 1677, Address: 0x2d55e0, Func Offset: 0xbc0
	// Line 2176, Address: 0x2d55e4, Func Offset: 0xbc4
	// Line 1677, Address: 0x2d55fc, Func Offset: 0xbdc
	// Line 2176, Address: 0x2d5600, Func Offset: 0xbe0
	// Line 1677, Address: 0x2d5628, Func Offset: 0xc08
	// Line 2176, Address: 0x2d562c, Func Offset: 0xc0c
	// Line 1677, Address: 0x2d5630, Func Offset: 0xc10
	// Line 2176, Address: 0x2d5634, Func Offset: 0xc14
	// Line 1677, Address: 0x2d5648, Func Offset: 0xc28
	// Line 2176, Address: 0x2d564c, Func Offset: 0xc2c
	// Line 1678, Address: 0x2d5674, Func Offset: 0xc54
	// Line 2176, Address: 0x2d5680, Func Offset: 0xc60
	// Line 1681, Address: 0x2d568c, Func Offset: 0xc6c
	// Line 1694, Address: 0x2d5694, Func Offset: 0xc74
	// Line 2176, Address: 0x2d5698, Func Offset: 0xc78
	// Line 2072, Address: 0x2d56c8, Func Offset: 0xca8
	// Line 2176, Address: 0x2d56cc, Func Offset: 0xcac
	// Line 2082, Address: 0x2d56f4, Func Offset: 0xcd4
	// Line 2176, Address: 0x2d56f8, Func Offset: 0xcd8
	// Line 2100, Address: 0x2d5718, Func Offset: 0xcf8
	// Line 2176, Address: 0x2d571c, Func Offset: 0xcfc
	// Line 2117, Address: 0x2d574c, Func Offset: 0xd2c
	// Line 2176, Address: 0x2d5750, Func Offset: 0xd30
	// Line 2102, Address: 0x2d5768, Func Offset: 0xd48
	// Line 2176, Address: 0x2d576c, Func Offset: 0xd4c
	// Line 2169, Address: 0x2d5784, Func Offset: 0xd64
	// Line 2176, Address: 0x2d5788, Func Offset: 0xd68
	// Line 2169, Address: 0x2d57b4, Func Offset: 0xd94
	// Line 2176, Address: 0x2d57c0, Func Offset: 0xda0
	// Line 2169, Address: 0x2d57c8, Func Offset: 0xda8
	// Line 2176, Address: 0x2d57d8, Func Offset: 0xdb8
	// Func End, Address: 0x2d5838, Func Offset: 0xe18
}

// zGameSetup__Fv
// Start address: 0x2d5840
void zGameSetup()
{
	RpWorld* world;
	int32 csncount;
	int32 cnum;
	int8 @7149;
	tweak_callback cb_spawn_bubble_wall;
	// Line 780, Address: 0x2d5840, Func Offset: 0
	// Line 792, Address: 0x2d584c, Func Offset: 0xc
	// Line 796, Address: 0x2d5854, Func Offset: 0x14
	// Line 799, Address: 0x2d585c, Func Offset: 0x1c
	// Line 800, Address: 0x2d5870, Func Offset: 0x30
	// Line 801, Address: 0x2d5878, Func Offset: 0x38
	// Line 805, Address: 0x2d5978, Func Offset: 0x138
	// Line 807, Address: 0x2d5980, Func Offset: 0x140
	// Line 810, Address: 0x2d5988, Func Offset: 0x148
	// Line 825, Address: 0x2d5994, Func Offset: 0x154
	// Line 848, Address: 0x2d59a8, Func Offset: 0x168
	// Line 853, Address: 0x2d59c0, Func Offset: 0x180
	// Line 874, Address: 0x2d59c8, Func Offset: 0x188
	// Line 877, Address: 0x2d59d4, Func Offset: 0x194
	// Line 883, Address: 0x2d59e0, Func Offset: 0x1a0
	// Line 886, Address: 0x2d59e8, Func Offset: 0x1a8
	// Line 889, Address: 0x2d59fc, Func Offset: 0x1bc
	// Line 892, Address: 0x2d5a10, Func Offset: 0x1d0
	// Line 895, Address: 0x2d5a24, Func Offset: 0x1e4
	// Line 896, Address: 0x2d5a30, Func Offset: 0x1f0
	// Line 899, Address: 0x2d5a40, Func Offset: 0x200
	// Line 903, Address: 0x2d5a48, Func Offset: 0x208
	// Line 911, Address: 0x2d5a58, Func Offset: 0x218
	// Line 913, Address: 0x2d5a60, Func Offset: 0x220
	// Line 917, Address: 0x2d5a68, Func Offset: 0x228
	// Line 920, Address: 0x2d5a70, Func Offset: 0x230
	// Line 923, Address: 0x2d5a78, Func Offset: 0x238
	// Line 926, Address: 0x2d5a80, Func Offset: 0x240
	// Line 931, Address: 0x2d5a88, Func Offset: 0x248
	// Line 801, Address: 0x2d5a9c, Func Offset: 0x25c
	// Line 931, Address: 0x2d5aa4, Func Offset: 0x264
	// Line 801, Address: 0x2d5ad8, Func Offset: 0x298
	// Line 931, Address: 0x2d5adc, Func Offset: 0x29c
	// Line 855, Address: 0x2d5b10, Func Offset: 0x2d0
	// Line 931, Address: 0x2d5b14, Func Offset: 0x2d4
	// Line 863, Address: 0x2d5b44, Func Offset: 0x304
	// Line 931, Address: 0x2d5b4c, Func Offset: 0x30c
	// Line 863, Address: 0x2d5b5c, Func Offset: 0x31c
	// Line 931, Address: 0x2d5b78, Func Offset: 0x338
	// Line 865, Address: 0x2d5b80, Func Offset: 0x340
	// Line 866, Address: 0x2d5b88, Func Offset: 0x348
	// Line 931, Address: 0x2d5b94, Func Offset: 0x354
	// Line 866, Address: 0x2d5ba4, Func Offset: 0x364
	// Line 931, Address: 0x2d5bc0, Func Offset: 0x380
	// Line 870, Address: 0x2d5bd8, Func Offset: 0x398
	// Line 931, Address: 0x2d5be0, Func Offset: 0x3a0
	// Line 873, Address: 0x2d5be4, Func Offset: 0x3a4
	// Line 931, Address: 0x2d5bec, Func Offset: 0x3ac
	// Func End, Address: 0x2d5bfc, Func Offset: 0x3bc
}

// zGameExit__Fv
// Start address: 0x2d5c00
void zGameExit()
{
	// Line 703, Address: 0x2d5c00, Func Offset: 0
	// Line 711, Address: 0x2d5c0c, Func Offset: 0xc
	// Line 713, Address: 0x2d5c14, Func Offset: 0x14
	// Line 714, Address: 0x2d5c24, Func Offset: 0x24
	// Line 715, Address: 0x2d5c34, Func Offset: 0x34
	// Line 716, Address: 0x2d5c64, Func Offset: 0x64
	// Line 717, Address: 0x2d5c70, Func Offset: 0x70
	// Line 719, Address: 0x2d5c78, Func Offset: 0x78
	// Line 723, Address: 0x2d5c80, Func Offset: 0x80
	// Line 724, Address: 0x2d5c8c, Func Offset: 0x8c
	// Line 726, Address: 0x2d5c9c, Func Offset: 0x9c
	// Line 727, Address: 0x2d5ca4, Func Offset: 0xa4
	// Func End, Address: 0x2d5cd4, Func Offset: 0xd4
}

// zGameInit__FUi
// Start address: 0x2d5ce0
void zGameInit(uint32 theSceneID)
{
	zLoadingScreen screen;
	// Line 601, Address: 0x2d5ce0, Func Offset: 0
	// Line 643, Address: 0x2d5ce4, Func Offset: 0x4
	// Line 601, Address: 0x2d5ce8, Func Offset: 0x8
	// Line 643, Address: 0x2d5cf4, Func Offset: 0x14
	// Line 645, Address: 0x2d5cfc, Func Offset: 0x1c
	// Line 689, Address: 0x2d5d0c, Func Offset: 0x2c
	// Line 691, Address: 0x2d5d78, Func Offset: 0x98
	// Line 692, Address: 0x2d5d7c, Func Offset: 0x9c
	// Line 671, Address: 0x2d5de4, Func Offset: 0x104
	// Line 692, Address: 0x2d5de8, Func Offset: 0x108
	// Line 671, Address: 0x2d5df0, Func Offset: 0x110
	// Line 692, Address: 0x2d5df8, Func Offset: 0x118
	// Line 688, Address: 0x2d5e78, Func Offset: 0x198
	// Line 692, Address: 0x2d5e80, Func Offset: 0x1a0
	// Func End, Address: 0x2d5e90, Func Offset: 0x1b0
}

// PickNextSoak__Fv
// Start address: 0x2d5e90
uint32 PickNextSoak()
{
	int32 soakidx'138;
	uint32 nextsoak;
	int8* name;
	uint32 tag;
	int32 num_search;
	int8 useme[5];
	en_SOAK_DIR soakdir;
	int32 soakidx;
	int32 justwrap;
	int32 soakcnt;
	uint32 sumtotal;
	// Line 439, Address: 0x2d5e90, Func Offset: 0
	// Line 445, Address: 0x2d5e94, Func Offset: 0x4
	// Line 439, Address: 0x2d5e98, Func Offset: 0x8
	// Line 445, Address: 0x2d5e9c, Func Offset: 0xc
	// Line 439, Address: 0x2d5ea0, Func Offset: 0x10
	// Line 449, Address: 0x2d5ea8, Func Offset: 0x18
	// Line 453, Address: 0x2d5eb4, Func Offset: 0x24
	// Line 460, Address: 0x2d5ebc, Func Offset: 0x2c
	// Line 465, Address: 0x2d5ee4, Func Offset: 0x54
	// Line 467, Address: 0x2d5eec, Func Offset: 0x5c
	// Line 469, Address: 0x2d5ef8, Func Offset: 0x68
	// Line 472, Address: 0x2d5f10, Func Offset: 0x80
	// Line 471, Address: 0x2d5f14, Func Offset: 0x84
	// Line 476, Address: 0x2d5f18, Func Offset: 0x88
	// Line 477, Address: 0x2d5f2c, Func Offset: 0x9c
	// Line 482, Address: 0x2d5f34, Func Offset: 0xa4
	// Line 484, Address: 0x2d5f3c, Func Offset: 0xac
	// Line 495, Address: 0x2d5f44, Func Offset: 0xb4
	// Line 496, Address: 0x2d5f58, Func Offset: 0xc8
	// Line 504, Address: 0x2d5f68, Func Offset: 0xd8
	// Line 507, Address: 0x2d5f74, Func Offset: 0xe4
	// Line 517, Address: 0x2d5f78, Func Offset: 0xe8
	// Line 515, Address: 0x2d5fb4, Func Offset: 0x124
	// Line 517, Address: 0x2d5fb8, Func Offset: 0x128
	// Line 516, Address: 0x2d5fc8, Func Offset: 0x138
	// Line 517, Address: 0x2d5fd0, Func Offset: 0x140
	// Line 516, Address: 0x2d5fd4, Func Offset: 0x144
	// Line 517, Address: 0x2d5fd8, Func Offset: 0x148
	// Line 520, Address: 0x2d5fe4, Func Offset: 0x154
	// Line 524, Address: 0x2d5fe8, Func Offset: 0x158
	// Line 525, Address: 0x2d6010, Func Offset: 0x180
	// Line 527, Address: 0x2d6020, Func Offset: 0x190
	// Line 530, Address: 0x2d602c, Func Offset: 0x19c
	// Line 527, Address: 0x2d6030, Func Offset: 0x1a0
	// Line 530, Address: 0x2d6044, Func Offset: 0x1b4
	// Line 527, Address: 0x2d6048, Func Offset: 0x1b8
	// Line 530, Address: 0x2d604c, Func Offset: 0x1bc
	// Line 539, Address: 0x2d6050, Func Offset: 0x1c0
	// Line 454, Address: 0x2d6094, Func Offset: 0x204
	// Line 539, Address: 0x2d609c, Func Offset: 0x20c
	// Line 487, Address: 0x2d60a8, Func Offset: 0x218
	// Line 539, Address: 0x2d60b0, Func Offset: 0x220
	// Line 515, Address: 0x2d60c0, Func Offset: 0x230
	// Line 539, Address: 0x2d60c8, Func Offset: 0x238
	// Line 515, Address: 0x2d60d0, Func Offset: 0x240
	// Line 539, Address: 0x2d60d8, Func Offset: 0x248
	// Line 515, Address: 0x2d60e0, Func Offset: 0x250
	// Line 539, Address: 0x2d6110, Func Offset: 0x280
	// Line 515, Address: 0x2d6114, Func Offset: 0x284
	// Line 539, Address: 0x2d6118, Func Offset: 0x288
	// Line 515, Address: 0x2d611c, Func Offset: 0x28c
	// Line 539, Address: 0x2d6124, Func Offset: 0x294
	// Line 515, Address: 0x2d6134, Func Offset: 0x2a4
	// Line 539, Address: 0x2d6138, Func Offset: 0x2a8
	// Line 515, Address: 0x2d6140, Func Offset: 0x2b0
	// Line 539, Address: 0x2d6144, Func Offset: 0x2b4
	// Line 540, Address: 0x2d6158, Func Offset: 0x2c8
	// Func End, Address: 0x2d6170, Func Offset: 0x2e0
}

