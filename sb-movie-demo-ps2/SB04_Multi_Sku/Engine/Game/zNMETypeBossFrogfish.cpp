



void RenderHud();
void OneLinersUpdate(float32 dt);
int32 IsAlive();
int32 EvalJump(float32 dt, float32 duration, uint8 setOrient);
void CalcJump(eFFBossLocation loc);
void AttackIncrement();
void StageIncrement();
void SetTheStage(eFFBossStage stageToBe);
int32 TypeHandleMail(NMEMsg* mail);
void CalcPos(xVec3* posDest, eFFBossLocation loc);
xAnimTable* CreateAnimTable(xAnimTable* table);
void EnterState(eFFBossState newState);
void BUpdate();
void Process(float32 dt);
void FeetFXUpdate(float32 dt);
void SoundInitAssetTable();
void UpdateCam(float32 dt);
void SetCamState(eFFBossCameraState newState);
void Destroy();
void Reset();
void Setup();
void Init(xEntAsset* asset);
int32 DfltVulnFlags();
void CreateConfig();

// RenderHud__12zNMEFrogfishFv
// Start address: 0x2561c0
void zNMEFrogfish::RenderHud()
{
	// Line 2948, Address: 0x2561c0, Func Offset: 0
	// Func End, Address: 0x2561cc, Func Offset: 0xc
}

// OneLinersUpdate__12zNMEFrogfishFf
// Start address: 0x2561d0
void zNMEFrogfish::OneLinersUpdate(float32 dt)
{
	eFFOneLiner commentToPlay;
	// Line 2887, Address: 0x2561d0, Func Offset: 0
	// Line 2889, Address: 0x2561d8, Func Offset: 0x8
	// Line 2887, Address: 0x2561dc, Func Offset: 0xc
	// Line 2888, Address: 0x2561ec, Func Offset: 0x1c
	// Line 2889, Address: 0x2561f8, Func Offset: 0x28
	// Line 2891, Address: 0x256204, Func Offset: 0x34
	// Line 2892, Address: 0x256208, Func Offset: 0x38
	// Line 2894, Address: 0x256214, Func Offset: 0x44
	// Line 2895, Address: 0x25621c, Func Offset: 0x4c
	// Line 2898, Address: 0x256224, Func Offset: 0x54
	// Line 2900, Address: 0x256234, Func Offset: 0x64
	// Line 2901, Address: 0x256248, Func Offset: 0x78
	// Line 2904, Address: 0x25624c, Func Offset: 0x7c
	// Line 2905, Address: 0x25625c, Func Offset: 0x8c
	// Line 2908, Address: 0x256264, Func Offset: 0x94
	// Line 2909, Address: 0x256268, Func Offset: 0x98
	// Line 2908, Address: 0x256270, Func Offset: 0xa0
	// Line 2909, Address: 0x256274, Func Offset: 0xa4
	// Line 2911, Address: 0x256280, Func Offset: 0xb0
	// Line 2912, Address: 0x256290, Func Offset: 0xc0
	// Line 2915, Address: 0x256298, Func Offset: 0xc8
	// Line 2916, Address: 0x25629c, Func Offset: 0xcc
	// Line 2915, Address: 0x2562a4, Func Offset: 0xd4
	// Line 2916, Address: 0x2562a8, Func Offset: 0xd8
	// Line 2918, Address: 0x2562b4, Func Offset: 0xe4
	// Line 2921, Address: 0x256328, Func Offset: 0x158
	// Line 2922, Address: 0x256344, Func Offset: 0x174
	// Line 2925, Address: 0x25634c, Func Offset: 0x17c
	// Line 2935, Address: 0x256358, Func Offset: 0x188
	// Line 2937, Address: 0x256364, Func Offset: 0x194
	// Line 2938, Address: 0x256368, Func Offset: 0x198
	// Line 2937, Address: 0x256370, Func Offset: 0x1a0
	// Line 2938, Address: 0x256374, Func Offset: 0x1a4
	// Line 2940, Address: 0x256380, Func Offset: 0x1b0
	// Line 2941, Address: 0x256390, Func Offset: 0x1c0
	// Line 2944, Address: 0x256394, Func Offset: 0x1c4
	// Line 2893, Address: 0x25639c, Func Offset: 0x1cc
	// Line 2944, Address: 0x2563a4, Func Offset: 0x1d4
	// Line 2904, Address: 0x2563a8, Func Offset: 0x1d8
	// Line 2944, Address: 0x2563ac, Func Offset: 0x1dc
	// Line 2904, Address: 0x2563b0, Func Offset: 0x1e0
	// Line 2944, Address: 0x2563b4, Func Offset: 0x1e4
	// Line 2918, Address: 0x2563d8, Func Offset: 0x208
	// Line 2944, Address: 0x2563e4, Func Offset: 0x214
	// Line 2918, Address: 0x2563fc, Func Offset: 0x22c
	// Line 2944, Address: 0x256404, Func Offset: 0x234
	// Line 2918, Address: 0x25641c, Func Offset: 0x24c
	// Line 2944, Address: 0x256424, Func Offset: 0x254
	// Line 2918, Address: 0x25642c, Func Offset: 0x25c
	// Line 2944, Address: 0x256438, Func Offset: 0x268
	// Line 2919, Address: 0x25645c, Func Offset: 0x28c
	// Line 2944, Address: 0x256464, Func Offset: 0x294
	// Line 2928, Address: 0x256468, Func Offset: 0x298
	// Line 2927, Address: 0x256470, Func Offset: 0x2a0
	// Line 2928, Address: 0x256474, Func Offset: 0x2a4
	// Line 2944, Address: 0x256478, Func Offset: 0x2a8
	// Line 2931, Address: 0x256490, Func Offset: 0x2c0
	// Line 2944, Address: 0x25649c, Func Offset: 0x2cc
	// Func End, Address: 0x2564dc, Func Offset: 0x30c
}

// IsAlive__12zNMEFrogfishFv
// Start address: 0x2564e0
int32 zNMEFrogfish::IsAlive()
{
	// Line 2858, Address: 0x2564e0, Func Offset: 0
	// Line 2860, Address: 0x2564e8, Func Offset: 0x8
	// Func End, Address: 0x2564f0, Func Offset: 0x10
}

// EvalJump__12zNMEFrogfishFffb
// Start address: 0x2564f0
int32 zNMEFrogfish::EvalJump(float32 dt, float32 duration, uint8 setOrient)
{
	int32 arrived;
	float32 mag;
	xVec3 pos;
	xVec3 vel;
	xMat3x3 mat_rot;
	xVec3 dir;
	// Line 2798, Address: 0x2564f0, Func Offset: 0
	// Line 2799, Address: 0x256514, Func Offset: 0x24
	// Line 2801, Address: 0x256538, Func Offset: 0x48
	// Line 2802, Address: 0x256544, Func Offset: 0x54
	// Line 2805, Address: 0x256550, Func Offset: 0x60
	// Line 2808, Address: 0x256558, Func Offset: 0x68
	// Line 2815, Address: 0x256560, Func Offset: 0x70
	// Line 2816, Address: 0x25656c, Func Offset: 0x7c
	// Line 2821, Address: 0x256570, Func Offset: 0x80
	// Line 2826, Address: 0x2565b8, Func Offset: 0xc8
	// Line 2821, Address: 0x2565c8, Func Offset: 0xd8
	// Line 2827, Address: 0x2565cc, Func Offset: 0xdc
	// Line 2830, Address: 0x2565d0, Func Offset: 0xe0
	// Line 2826, Address: 0x2565d4, Func Offset: 0xe4
	// Line 2827, Address: 0x2565dc, Func Offset: 0xec
	// Line 2826, Address: 0x2565e0, Func Offset: 0xf0
	// Line 2830, Address: 0x2565f4, Func Offset: 0x104
	// Line 2826, Address: 0x2565f8, Func Offset: 0x108
	// Line 2830, Address: 0x256608, Func Offset: 0x118
	// Line 2826, Address: 0x25660c, Func Offset: 0x11c
	// Line 2830, Address: 0x256610, Func Offset: 0x120
	// Line 2826, Address: 0x256614, Func Offset: 0x124
	// Line 2830, Address: 0x25661c, Func Offset: 0x12c
	// Line 2827, Address: 0x256620, Func Offset: 0x130
	// Line 2826, Address: 0x256624, Func Offset: 0x134
	// Line 2830, Address: 0x25663c, Func Offset: 0x14c
	// Line 2826, Address: 0x256640, Func Offset: 0x150
	// Line 2827, Address: 0x256644, Func Offset: 0x154
	// Line 2830, Address: 0x25664c, Func Offset: 0x15c
	// Line 2827, Address: 0x256650, Func Offset: 0x160
	// Line 2830, Address: 0x256654, Func Offset: 0x164
	// Line 2827, Address: 0x25665c, Func Offset: 0x16c
	// Line 2830, Address: 0x256660, Func Offset: 0x170
	// Line 2833, Address: 0x256664, Func Offset: 0x174
	// Line 2836, Address: 0x25666c, Func Offset: 0x17c
	// Line 2838, Address: 0x256688, Func Offset: 0x198
	// Line 2840, Address: 0x2566d4, Func Offset: 0x1e4
	// Line 2838, Address: 0x2566d8, Func Offset: 0x1e8
	// Line 2839, Address: 0x256774, Func Offset: 0x284
	// Line 2838, Address: 0x256778, Func Offset: 0x288
	// Line 2840, Address: 0x25677c, Func Offset: 0x28c
	// Line 2841, Address: 0x256784, Func Offset: 0x294
	// Line 2848, Address: 0x2567a8, Func Offset: 0x2b8
	// Line 2852, Address: 0x2567c0, Func Offset: 0x2d0
	// Line 2853, Address: 0x2567c4, Func Offset: 0x2d4
	// Func End, Address: 0x2567dc, Func Offset: 0x2ec
}

// CalcJump__12zNMEFrogfishF15eFFBossLocation
// Start address: 0x2567e0
void zNMEFrogfish::CalcJump(eFFBossLocation loc)
{
	float32 gravity;
	float32 duration;
	xVec3 pos_dest;
	xVec3 vel;
	// Line 2766, Address: 0x2567e0, Func Offset: 0
	// Line 2770, Address: 0x2567ec, Func Offset: 0xc
	// Line 2766, Address: 0x2567f0, Func Offset: 0x10
	// Line 2770, Address: 0x2567fc, Func Offset: 0x1c
	// Line 2773, Address: 0x256808, Func Offset: 0x28
	// Line 2774, Address: 0x25680c, Func Offset: 0x2c
	// Line 2777, Address: 0x256818, Func Offset: 0x38
	// Line 2778, Address: 0x25681c, Func Offset: 0x3c
	// Line 2782, Address: 0x256820, Func Offset: 0x40
	// Line 2783, Address: 0x25682c, Func Offset: 0x4c
	// Line 2784, Address: 0x256830, Func Offset: 0x50
	// Line 2782, Address: 0x256838, Func Offset: 0x58
	// Line 2783, Address: 0x25683c, Func Offset: 0x5c
	// Line 2786, Address: 0x256854, Func Offset: 0x74
	// Line 2783, Address: 0x256858, Func Offset: 0x78
	// Line 2784, Address: 0x256864, Func Offset: 0x84
	// Line 2782, Address: 0x256868, Func Offset: 0x88
	// Line 2784, Address: 0x25686c, Func Offset: 0x8c
	// Line 2783, Address: 0x256870, Func Offset: 0x90
	// Line 2786, Address: 0x256880, Func Offset: 0xa0
	// Line 2783, Address: 0x256884, Func Offset: 0xa4
	// Line 2786, Address: 0x25688c, Func Offset: 0xac
	// Line 2783, Address: 0x256890, Func Offset: 0xb0
	// Line 2789, Address: 0x2568a8, Func Offset: 0xc8
	// Line 2783, Address: 0x2568ac, Func Offset: 0xcc
	// Line 2789, Address: 0x2568b0, Func Offset: 0xd0
	// Line 2783, Address: 0x2568b8, Func Offset: 0xd8
	// Line 2789, Address: 0x2568cc, Func Offset: 0xec
	// Line 2783, Address: 0x2568d8, Func Offset: 0xf8
	// Line 2784, Address: 0x2568ec, Func Offset: 0x10c
	// Line 2783, Address: 0x2568f0, Func Offset: 0x110
	// Line 2784, Address: 0x2568f4, Func Offset: 0x114
	// Line 2786, Address: 0x256904, Func Offset: 0x124
	// Line 2790, Address: 0x25690c, Func Offset: 0x12c
	// Line 2783, Address: 0x256914, Func Offset: 0x134
	// Line 2784, Address: 0x256918, Func Offset: 0x138
	// Line 2790, Address: 0x256920, Func Offset: 0x140
	// Line 2791, Address: 0x256928, Func Offset: 0x148
	// Line 2792, Address: 0x25692c, Func Offset: 0x14c
	// Line 2793, Address: 0x256930, Func Offset: 0x150
	// Line 2794, Address: 0x256934, Func Offset: 0x154
	// Line 2795, Address: 0x256938, Func Offset: 0x158
	// Func End, Address: 0x256950, Func Offset: 0x170
}

// AttackIncrement__12zNMEFrogfishFv
// Start address: 0x256950
void zNMEFrogfish::AttackIncrement()
{
	int32 oldAttack;
	// Line 2674, Address: 0x256950, Func Offset: 0
	// Line 2676, Address: 0x256954, Func Offset: 0x4
	// Line 2674, Address: 0x256958, Func Offset: 0x8
	// Line 2676, Address: 0x25695c, Func Offset: 0xc
	// Line 2681, Address: 0x256964, Func Offset: 0x14
	// Line 2676, Address: 0x256968, Func Offset: 0x18
	// Line 2677, Address: 0x256980, Func Offset: 0x30
	// Line 2676, Address: 0x256984, Func Offset: 0x34
	// Line 2677, Address: 0x25698c, Func Offset: 0x3c
	// Line 2678, Address: 0x256990, Func Offset: 0x40
	// Line 2681, Address: 0x2569b8, Func Offset: 0x68
	// Line 2686, Address: 0x2569e8, Func Offset: 0x98
	// Line 2687, Address: 0x2569f0, Func Offset: 0xa0
	// Line 2689, Address: 0x256a00, Func Offset: 0xb0
	// Line 2695, Address: 0x256a10, Func Offset: 0xc0
	// Line 2696, Address: 0x256a18, Func Offset: 0xc8
	// Line 2698, Address: 0x256a28, Func Offset: 0xd8
	// Line 2704, Address: 0x256a30, Func Offset: 0xe0
	// Line 2705, Address: 0x256a50, Func Offset: 0x100
	// Func End, Address: 0x256a58, Func Offset: 0x108
}

// StageIncrement__12zNMEFrogfishFv
// Start address: 0x256a60
void zNMEFrogfish::StageIncrement()
{
	int32 oldAttack;
	// Line 2634, Address: 0x256a60, Func Offset: 0
	// Line 2635, Address: 0x256a64, Func Offset: 0x4
	// Line 2634, Address: 0x256a68, Func Offset: 0x8
	// Line 2635, Address: 0x256a6c, Func Offset: 0xc
	// Line 2634, Address: 0x256a70, Func Offset: 0x10
	// Line 2635, Address: 0x256a7c, Func Offset: 0x1c
	// Line 2636, Address: 0x256a9c, Func Offset: 0x3c
	// Line 2638, Address: 0x256aa4, Func Offset: 0x44
	// Line 2640, Address: 0x256ab0, Func Offset: 0x50
	// Line 2641, Address: 0x256abc, Func Offset: 0x5c
	// Line 2642, Address: 0x256ac4, Func Offset: 0x64
	// Line 2643, Address: 0x256ac8, Func Offset: 0x68
	// Line 2642, Address: 0x256acc, Func Offset: 0x6c
	// Line 2643, Address: 0x256ad0, Func Offset: 0x70
	// Line 2645, Address: 0x256ad8, Func Offset: 0x78
	// Line 2647, Address: 0x256adc, Func Offset: 0x7c
	// Line 2651, Address: 0x256af0, Func Offset: 0x90
	// Line 2653, Address: 0x256af8, Func Offset: 0x98
	// Line 2655, Address: 0x256b00, Func Offset: 0xa0
	// Line 2657, Address: 0x256b0c, Func Offset: 0xac
	// Line 2658, Address: 0x256b18, Func Offset: 0xb8
	// Line 2659, Address: 0x256b24, Func Offset: 0xc4
	// Line 2662, Address: 0x256b2c, Func Offset: 0xcc
	// Line 2664, Address: 0x256b34, Func Offset: 0xd4
	// Line 2666, Address: 0x256b40, Func Offset: 0xe0
	// Line 2667, Address: 0x256b4c, Func Offset: 0xec
	// Line 2670, Address: 0x256b58, Func Offset: 0xf8
	// Line 2637, Address: 0x256b68, Func Offset: 0x108
	// Line 2639, Address: 0x256b70, Func Offset: 0x110
	// Line 2670, Address: 0x256b74, Func Offset: 0x114
	// Line 2639, Address: 0x256b7c, Func Offset: 0x11c
	// Line 2644, Address: 0x256b84, Func Offset: 0x124
	// Line 2670, Address: 0x256b88, Func Offset: 0x128
	// Line 2644, Address: 0x256b98, Func Offset: 0x138
	// Line 2670, Address: 0x256b9c, Func Offset: 0x13c
	// Line 2644, Address: 0x256ba0, Func Offset: 0x140
	// Line 2670, Address: 0x256ba8, Func Offset: 0x148
	// Line 2649, Address: 0x256bb4, Func Offset: 0x154
	// Line 2670, Address: 0x256bb8, Func Offset: 0x158
	// Line 2650, Address: 0x256bc0, Func Offset: 0x160
	// Line 2670, Address: 0x256bc8, Func Offset: 0x168
	// Line 2654, Address: 0x256bd0, Func Offset: 0x170
	// Line 2656, Address: 0x256bd8, Func Offset: 0x178
	// Line 2670, Address: 0x256bdc, Func Offset: 0x17c
	// Line 2656, Address: 0x256be4, Func Offset: 0x184
	// Line 2663, Address: 0x256bec, Func Offset: 0x18c
	// Line 2670, Address: 0x256bf0, Func Offset: 0x190
	// Line 2663, Address: 0x256bf8, Func Offset: 0x198
	// Line 2665, Address: 0x256c00, Func Offset: 0x1a0
	// Line 2670, Address: 0x256c04, Func Offset: 0x1a4
	// Line 2665, Address: 0x256c0c, Func Offset: 0x1ac
	// Line 2671, Address: 0x256c14, Func Offset: 0x1b4
	// Func End, Address: 0x256c28, Func Offset: 0x1c8
}

// SetTheStage__12zNMEFrogfishF12eFFBossStage
// Start address: 0x256c30
void zNMEFrogfish::SetTheStage(eFFBossStage stageToBe)
{
	// Line 2607, Address: 0x256c30, Func Offset: 0
	// Line 2611, Address: 0x256c34, Func Offset: 0x4
	// Line 2608, Address: 0x256c38, Func Offset: 0x8
	// Line 2609, Address: 0x256c3c, Func Offset: 0xc
	// Line 2610, Address: 0x256c40, Func Offset: 0x10
	// Line 2611, Address: 0x256c44, Func Offset: 0x14
	// Line 2614, Address: 0x256c4c, Func Offset: 0x1c
	// Line 2619, Address: 0x256c54, Func Offset: 0x24
	// Line 2624, Address: 0x256c5c, Func Offset: 0x2c
	// Line 2626, Address: 0x256c68, Func Offset: 0x38
	// Line 2627, Address: 0x256c6c, Func Offset: 0x3c
	// Line 2626, Address: 0x256c74, Func Offset: 0x44
	// Line 2627, Address: 0x256c7c, Func Offset: 0x4c
	// Line 2630, Address: 0x256ca4, Func Offset: 0x74
	// Line 2617, Address: 0x256cc8, Func Offset: 0x98
	// Line 2630, Address: 0x256ccc, Func Offset: 0x9c
	// Line 2617, Address: 0x256cd0, Func Offset: 0xa0
	// Line 2630, Address: 0x256cd8, Func Offset: 0xa8
	// Line 2617, Address: 0x256cdc, Func Offset: 0xac
	// Line 2630, Address: 0x256ce0, Func Offset: 0xb0
	// Line 2618, Address: 0x256ce4, Func Offset: 0xb4
	// Line 2630, Address: 0x256cec, Func Offset: 0xbc
	// Line 2622, Address: 0x256d08, Func Offset: 0xd8
	// Line 2630, Address: 0x256d0c, Func Offset: 0xdc
	// Line 2622, Address: 0x256d10, Func Offset: 0xe0
	// Line 2630, Address: 0x256d18, Func Offset: 0xe8
	// Line 2622, Address: 0x256d1c, Func Offset: 0xec
	// Line 2630, Address: 0x256d20, Func Offset: 0xf0
	// Line 2623, Address: 0x256d24, Func Offset: 0xf4
	// Line 2631, Address: 0x256d2c, Func Offset: 0xfc
	// Func End, Address: 0x256d34, Func Offset: 0x104
}

// TypeHandleMail__12zNMEFrogfishFP6NMEMsg
// Start address: 0x256d40
int32 zNMEFrogfish::TypeHandleMail(NMEMsg* mail)
{
	int32 handled;
	// Line 2473, Address: 0x256d40, Func Offset: 0
	// Line 2476, Address: 0x256d50, Func Offset: 0x10
	// Line 2481, Address: 0x256d74, Func Offset: 0x34
	// Line 2482, Address: 0x256e34, Func Offset: 0xf4
	// Line 2485, Address: 0x256e3c, Func Offset: 0xfc
	// Line 2486, Address: 0x256e8c, Func Offset: 0x14c
	// Line 2490, Address: 0x256e94, Func Offset: 0x154
	// Line 2494, Address: 0x256e98, Func Offset: 0x158
	// Line 2495, Address: 0x256eac, Func Offset: 0x16c
	// Func End, Address: 0x256ec0, Func Offset: 0x180
}

// CalcPos__12zNMEFrogfishFP5xVec315eFFBossLocation
// Start address: 0x256ec0
void zNMEFrogfish::CalcPos(xVec3* posDest, eFFBossLocation loc)
{
	xVec3 vCenter;
	xVec3 vCenterToEdge;
	xVec3 vCenter;
	xVec3 vCenterToEdge;
	xVec3 vCenter;
	xVec3 vCenterToEdge;
	// Line 2422, Address: 0x256ec0, Func Offset: 0
	// Line 2423, Address: 0x256ec4, Func Offset: 0x4
	// Line 2427, Address: 0x256ed0, Func Offset: 0x10
	// Line 2438, Address: 0x256ed8, Func Offset: 0x18
	// Line 2449, Address: 0x256ee4, Func Offset: 0x24
	// Line 2451, Address: 0x256ef0, Func Offset: 0x30
	// Line 2452, Address: 0x256f24, Func Offset: 0x64
	// Line 2453, Address: 0x256f28, Func Offset: 0x68
	// Line 2452, Address: 0x256f2c, Func Offset: 0x6c
	// Line 2454, Address: 0x256f38, Func Offset: 0x78
	// Line 2452, Address: 0x256f3c, Func Offset: 0x7c
	// Line 2451, Address: 0x256f40, Func Offset: 0x80
	// Line 2453, Address: 0x256f44, Func Offset: 0x84
	// Line 2452, Address: 0x256f48, Func Offset: 0x88
	// Line 2451, Address: 0x256f50, Func Offset: 0x90
	// Line 2452, Address: 0x256f54, Func Offset: 0x94
	// Line 2451, Address: 0x256f58, Func Offset: 0x98
	// Line 2452, Address: 0x256f5c, Func Offset: 0x9c
	// Line 2451, Address: 0x256f68, Func Offset: 0xa8
	// Line 2452, Address: 0x256f6c, Func Offset: 0xac
	// Line 2455, Address: 0x256f78, Func Offset: 0xb8
	// Line 2452, Address: 0x256f7c, Func Offset: 0xbc
	// Line 2454, Address: 0x256f90, Func Offset: 0xd0
	// Line 2452, Address: 0x256f94, Func Offset: 0xd4
	// Line 2454, Address: 0x256f9c, Func Offset: 0xdc
	// Line 2452, Address: 0x256fa0, Func Offset: 0xe0
	// Line 2457, Address: 0x256fa4, Func Offset: 0xe4
	// Line 2452, Address: 0x256fa8, Func Offset: 0xe8
	// Line 2457, Address: 0x256fac, Func Offset: 0xec
	// Line 2452, Address: 0x256fb0, Func Offset: 0xf0
	// Line 2457, Address: 0x256fd4, Func Offset: 0x114
	// Line 2452, Address: 0x256fdc, Func Offset: 0x11c
	// Line 2453, Address: 0x256fe0, Func Offset: 0x120
	// Line 2452, Address: 0x256fe4, Func Offset: 0x124
	// Line 2453, Address: 0x256fec, Func Offset: 0x12c
	// Line 2452, Address: 0x256ff0, Func Offset: 0x130
	// Line 2454, Address: 0x256ff4, Func Offset: 0x134
	// Line 2452, Address: 0x256ff8, Func Offset: 0x138
	// Line 2454, Address: 0x256ffc, Func Offset: 0x13c
	// Line 2455, Address: 0x257010, Func Offset: 0x150
	// Line 2454, Address: 0x257014, Func Offset: 0x154
	// Line 2455, Address: 0x25701c, Func Offset: 0x15c
	// Line 2457, Address: 0x257020, Func Offset: 0x160
	// Line 2455, Address: 0x257028, Func Offset: 0x168
	// Line 2457, Address: 0x257030, Func Offset: 0x170
	// Line 2455, Address: 0x257040, Func Offset: 0x180
	// Line 2457, Address: 0x257044, Func Offset: 0x184
	// Line 2458, Address: 0x257064, Func Offset: 0x1a4
	// Line 2464, Address: 0x257068, Func Offset: 0x1a8
	// Line 2426, Address: 0x257090, Func Offset: 0x1d0
	// Line 2464, Address: 0x257098, Func Offset: 0x1d8
	// Line 2429, Address: 0x2570a8, Func Offset: 0x1e8
	// Line 2464, Address: 0x2570b0, Func Offset: 0x1f0
	// Line 2432, Address: 0x2570c4, Func Offset: 0x204
	// Line 2464, Address: 0x2570c8, Func Offset: 0x208
	// Line 2432, Address: 0x2570cc, Func Offset: 0x20c
	// Line 2431, Address: 0x2570d0, Func Offset: 0x210
	// Line 2464, Address: 0x2570d4, Func Offset: 0x214
	// Line 2432, Address: 0x2570e8, Func Offset: 0x228
	// Line 2464, Address: 0x2570ec, Func Offset: 0x22c
	// Line 2433, Address: 0x25710c, Func Offset: 0x24c
	// Line 2464, Address: 0x257110, Func Offset: 0x250
	// Line 2430, Address: 0x257130, Func Offset: 0x270
	// Line 2464, Address: 0x257134, Func Offset: 0x274
	// Line 2430, Address: 0x257150, Func Offset: 0x290
	// Line 2464, Address: 0x257158, Func Offset: 0x298
	// Line 2432, Address: 0x25718c, Func Offset: 0x2cc
	// Line 2464, Address: 0x257190, Func Offset: 0x2d0
	// Line 2432, Address: 0x257194, Func Offset: 0x2d4
	// Line 2464, Address: 0x257198, Func Offset: 0x2d8
	// Line 2432, Address: 0x25719c, Func Offset: 0x2dc
	// Line 2433, Address: 0x2571a0, Func Offset: 0x2e0
	// Line 2432, Address: 0x2571a4, Func Offset: 0x2e4
	// Line 2433, Address: 0x2571ac, Func Offset: 0x2ec
	// Line 2435, Address: 0x2571b0, Func Offset: 0x2f0
	// Line 2433, Address: 0x2571b8, Func Offset: 0x2f8
	// Line 2464, Address: 0x2571bc, Func Offset: 0x2fc
	// Line 2435, Address: 0x2571c0, Func Offset: 0x300
	// Line 2464, Address: 0x2571c4, Func Offset: 0x304
	// Line 2437, Address: 0x2571f4, Func Offset: 0x334
	// Line 2464, Address: 0x2571fc, Func Offset: 0x33c
	// Line 2440, Address: 0x25720c, Func Offset: 0x34c
	// Line 2464, Address: 0x257214, Func Offset: 0x354
	// Line 2443, Address: 0x257228, Func Offset: 0x368
	// Line 2464, Address: 0x25722c, Func Offset: 0x36c
	// Line 2443, Address: 0x257230, Func Offset: 0x370
	// Line 2442, Address: 0x257234, Func Offset: 0x374
	// Line 2464, Address: 0x257238, Func Offset: 0x378
	// Line 2443, Address: 0x25724c, Func Offset: 0x38c
	// Line 2464, Address: 0x257250, Func Offset: 0x390
	// Line 2441, Address: 0x257278, Func Offset: 0x3b8
	// Line 2464, Address: 0x25727c, Func Offset: 0x3bc
	// Line 2441, Address: 0x2572a4, Func Offset: 0x3e4
	// Line 2464, Address: 0x2572a8, Func Offset: 0x3e8
	// Line 2441, Address: 0x2572ac, Func Offset: 0x3ec
	// Line 2464, Address: 0x2572b0, Func Offset: 0x3f0
	// Line 2443, Address: 0x2572e4, Func Offset: 0x424
	// Line 2464, Address: 0x2572e8, Func Offset: 0x428
	// Line 2443, Address: 0x2572ec, Func Offset: 0x42c
	// Line 2464, Address: 0x2572f0, Func Offset: 0x430
	// Line 2443, Address: 0x2572f4, Func Offset: 0x434
	// Line 2444, Address: 0x2572f8, Func Offset: 0x438
	// Line 2443, Address: 0x2572fc, Func Offset: 0x43c
	// Line 2444, Address: 0x257304, Func Offset: 0x444
	// Line 2446, Address: 0x257308, Func Offset: 0x448
	// Line 2444, Address: 0x257310, Func Offset: 0x450
	// Line 2464, Address: 0x257314, Func Offset: 0x454
	// Line 2446, Address: 0x257318, Func Offset: 0x458
	// Line 2464, Address: 0x25731c, Func Offset: 0x45c
	// Line 2448, Address: 0x25734c, Func Offset: 0x48c
	// Line 2464, Address: 0x257354, Func Offset: 0x494
	// Func End, Address: 0x257360, Func Offset: 0x4a0
}

// CreateAnimTable__12zNMEFrogfishFP10xAnimTable
// Start address: 0x257360
xAnimTable* zNMEFrogfish::CreateAnimTable(xAnimTable* table)
{
	// Line 2162, Address: 0x257360, Func Offset: 0
	// Line 2168, Address: 0x257370, Func Offset: 0x10
	// Line 2176, Address: 0x257378, Func Offset: 0x18
	// Line 2181, Address: 0x2573c0, Func Offset: 0x60
	// Line 2186, Address: 0x257408, Func Offset: 0xa8
	// Line 2191, Address: 0x257450, Func Offset: 0xf0
	// Line 2197, Address: 0x257498, Func Offset: 0x138
	// Line 2203, Address: 0x2574e0, Func Offset: 0x180
	// Line 2209, Address: 0x257528, Func Offset: 0x1c8
	// Line 2214, Address: 0x257570, Func Offset: 0x210
	// Line 2219, Address: 0x2575b8, Func Offset: 0x258
	// Line 2224, Address: 0x257600, Func Offset: 0x2a0
	// Line 2230, Address: 0x257648, Func Offset: 0x2e8
	// Line 2236, Address: 0x257690, Func Offset: 0x330
	// Line 2241, Address: 0x2576d8, Func Offset: 0x378
	// Line 2246, Address: 0x257720, Func Offset: 0x3c0
	// Line 2251, Address: 0x257768, Func Offset: 0x408
	// Line 2256, Address: 0x2577b0, Func Offset: 0x450
	// Line 2261, Address: 0x2577f8, Func Offset: 0x498
	// Line 2266, Address: 0x257840, Func Offset: 0x4e0
	// Line 2271, Address: 0x257888, Func Offset: 0x528
	// Line 2276, Address: 0x2578d0, Func Offset: 0x570
	// Line 2281, Address: 0x257918, Func Offset: 0x5b8
	// Line 2286, Address: 0x257960, Func Offset: 0x600
	// Line 2291, Address: 0x2579a8, Func Offset: 0x648
	// Line 2296, Address: 0x2579f0, Func Offset: 0x690
	// Line 2301, Address: 0x257a38, Func Offset: 0x6d8
	// Line 2306, Address: 0x257a80, Func Offset: 0x720
	// Line 2311, Address: 0x257ac8, Func Offset: 0x768
	// Line 2316, Address: 0x257b10, Func Offset: 0x7b0
	// Line 2321, Address: 0x257b58, Func Offset: 0x7f8
	// Line 2326, Address: 0x257ba0, Func Offset: 0x840
	// Line 2331, Address: 0x257be8, Func Offset: 0x888
	// Line 2336, Address: 0x257c30, Func Offset: 0x8d0
	// Line 2371, Address: 0x257c78, Func Offset: 0x918
	// Line 2168, Address: 0x257c80, Func Offset: 0x920
	// Line 2371, Address: 0x257c84, Func Offset: 0x924
	// Line 2372, Address: 0x257c94, Func Offset: 0x934
	// Func End, Address: 0x257ca4, Func Offset: 0x944
}

// EnterState__12zNMEFrogfishF12eFFBossState
// Start address: 0x257cb0
void zNMEFrogfish::EnterState(eFFBossState newState)
{
	xVec3 dirFFToCenter;
	float32 deltaX;
	float32 deltaZ;
	float32 distPlayerFromCenterSq;
	xVec3 dirFFToPlayer;
	float32 dy;
	xVec3 chargeVel;
	xMat3x3 mat_rot;
	float32 mag;
	xVec3 dir;
	xVec3 newPos;
	// Line 1945, Address: 0x257cb0, Func Offset: 0
	// Line 1946, Address: 0x257cc4, Func Offset: 0x14
	// Line 1948, Address: 0x257ccc, Func Offset: 0x1c
	// Line 1950, Address: 0x257cd8, Func Offset: 0x28
	// Line 1952, Address: 0x257ce4, Func Offset: 0x34
	// Line 1955, Address: 0x257ce8, Func Offset: 0x38
	// Line 1957, Address: 0x257d0c, Func Offset: 0x5c
	// Line 1960, Address: 0x257d14, Func Offset: 0x64
	// Line 1961, Address: 0x257d18, Func Offset: 0x68
	// Line 1965, Address: 0x257d44, Func Offset: 0x94
	// Line 1966, Address: 0x257d48, Func Offset: 0x98
	// Line 1970, Address: 0x257d50, Func Offset: 0xa0
	// Line 1971, Address: 0x257d54, Func Offset: 0xa4
	// Line 1972, Address: 0x257d84, Func Offset: 0xd4
	// Line 1973, Address: 0x257de0, Func Offset: 0x130
	// Line 1979, Address: 0x257de8, Func Offset: 0x138
	// Line 1980, Address: 0x257dec, Func Offset: 0x13c
	// Line 1981, Address: 0x257df0, Func Offset: 0x140
	// Line 1973, Address: 0x257df8, Func Offset: 0x148
	// Line 1994, Address: 0x257e00, Func Offset: 0x150
	// Line 2001, Address: 0x257e08, Func Offset: 0x158
	// Line 1980, Address: 0x257e1c, Func Offset: 0x16c
	// Line 1981, Address: 0x257e20, Func Offset: 0x170
	// Line 1973, Address: 0x257e28, Func Offset: 0x178
	// Line 2004, Address: 0x257e30, Func Offset: 0x180
	// Line 2001, Address: 0x257e38, Func Offset: 0x188
	// Line 2004, Address: 0x257e3c, Func Offset: 0x18c
	// Line 1981, Address: 0x257e40, Func Offset: 0x190
	// Line 1986, Address: 0x257e44, Func Offset: 0x194
	// Line 1994, Address: 0x257e48, Func Offset: 0x198
	// Line 1981, Address: 0x257e50, Func Offset: 0x1a0
	// Line 1986, Address: 0x257e54, Func Offset: 0x1a4
	// Line 1981, Address: 0x257e58, Func Offset: 0x1a8
	// Line 1994, Address: 0x257e5c, Func Offset: 0x1ac
	// Line 1995, Address: 0x257e78, Func Offset: 0x1c8
	// Line 1997, Address: 0x257e90, Func Offset: 0x1e0
	// Line 1995, Address: 0x257e9c, Func Offset: 0x1ec
	// Line 1997, Address: 0x257ea0, Func Offset: 0x1f0
	// Line 1998, Address: 0x257ea8, Func Offset: 0x1f8
	// Line 2001, Address: 0x257eb4, Func Offset: 0x204
	// Line 2003, Address: 0x257f28, Func Offset: 0x278
	// Line 2004, Address: 0x257f34, Func Offset: 0x284
	// Line 2005, Address: 0x257f40, Func Offset: 0x290
	// Line 2009, Address: 0x257f7c, Func Offset: 0x2cc
	// Line 2005, Address: 0x257f80, Func Offset: 0x2d0
	// Line 2009, Address: 0x258038, Func Offset: 0x388
	// Line 2010, Address: 0x258040, Func Offset: 0x390
	// Line 2012, Address: 0x258064, Func Offset: 0x3b4
	// Line 2013, Address: 0x258090, Func Offset: 0x3e0
	// Line 2014, Address: 0x2580b0, Func Offset: 0x400
	// Line 2016, Address: 0x2580bc, Func Offset: 0x40c
	// Line 2020, Address: 0x2580c4, Func Offset: 0x414
	// Line 2021, Address: 0x2580e4, Func Offset: 0x434
	// Line 2022, Address: 0x258110, Func Offset: 0x460
	// Line 2024, Address: 0x258118, Func Offset: 0x468
	// Line 2029, Address: 0x258120, Func Offset: 0x470
	// Line 2030, Address: 0x258140, Func Offset: 0x490
	// Line 2033, Address: 0x258148, Func Offset: 0x498
	// Line 2037, Address: 0x258150, Func Offset: 0x4a0
	// Line 2039, Address: 0x25815c, Func Offset: 0x4ac
	// Line 2038, Address: 0x258160, Func Offset: 0x4b0
	// Line 2039, Address: 0x258164, Func Offset: 0x4b4
	// Line 2040, Address: 0x258180, Func Offset: 0x4d0
	// Line 2041, Address: 0x2581ac, Func Offset: 0x4fc
	// Line 2042, Address: 0x2581c4, Func Offset: 0x514
	// Line 2046, Address: 0x2581cc, Func Offset: 0x51c
	// Line 2047, Address: 0x2581f0, Func Offset: 0x540
	// Line 2051, Address: 0x2581f8, Func Offset: 0x548
	// Line 2052, Address: 0x25821c, Func Offset: 0x56c
	// Line 2057, Address: 0x258224, Func Offset: 0x574
	// Line 2058, Address: 0x258244, Func Offset: 0x594
	// Line 2059, Address: 0x258270, Func Offset: 0x5c0
	// Line 2061, Address: 0x258278, Func Offset: 0x5c8
	// Line 2065, Address: 0x258280, Func Offset: 0x5d0
	// Line 2066, Address: 0x2582a8, Func Offset: 0x5f8
	// Line 2067, Address: 0x2582ac, Func Offset: 0x5fc
	// Line 2066, Address: 0x2582b0, Func Offset: 0x600
	// Line 2067, Address: 0x2582b4, Func Offset: 0x604
	// Line 2066, Address: 0x2582b8, Func Offset: 0x608
	// Line 2067, Address: 0x2582c0, Func Offset: 0x610
	// Line 2066, Address: 0x2582c4, Func Offset: 0x614
	// Line 2067, Address: 0x258310, Func Offset: 0x660
	// Line 2068, Address: 0x25833c, Func Offset: 0x68c
	// Line 2072, Address: 0x258344, Func Offset: 0x694
	// Line 2073, Address: 0x258348, Func Offset: 0x698
	// Line 2074, Address: 0x25836c, Func Offset: 0x6bc
	// Line 2078, Address: 0x258374, Func Offset: 0x6c4
	// Line 2080, Address: 0x2583d0, Func Offset: 0x720
	// Line 2082, Address: 0x2583f8, Func Offset: 0x748
	// Line 2085, Address: 0x258400, Func Offset: 0x750
	// Line 2087, Address: 0x25840c, Func Offset: 0x75c
	// Line 2089, Address: 0x258414, Func Offset: 0x764
	// Line 2092, Address: 0x25841c, Func Offset: 0x76c
	// Line 2093, Address: 0x258428, Func Offset: 0x778
	// Line 2098, Address: 0x258450, Func Offset: 0x7a0
	// Line 2102, Address: 0x25845c, Func Offset: 0x7ac
	// Line 2103, Address: 0x2584e8, Func Offset: 0x838
	// Line 2105, Address: 0x258518, Func Offset: 0x868
	// Line 2106, Address: 0x258540, Func Offset: 0x890
	// Line 2110, Address: 0x258548, Func Offset: 0x898
	// Line 2111, Address: 0x25856c, Func Offset: 0x8bc
	// Line 2115, Address: 0x258574, Func Offset: 0x8c4
	// Line 2116, Address: 0x25859c, Func Offset: 0x8ec
	// Line 2117, Address: 0x2585bc, Func Offset: 0x90c
	// Line 2118, Address: 0x2585d4, Func Offset: 0x924
	// Line 2122, Address: 0x2585dc, Func Offset: 0x92c
	// Line 2123, Address: 0x258600, Func Offset: 0x950
	// Line 2127, Address: 0x258608, Func Offset: 0x958
	// Line 2128, Address: 0x25862c, Func Offset: 0x97c
	// Line 2136, Address: 0x258634, Func Offset: 0x984
	// Line 2137, Address: 0x258638, Func Offset: 0x988
	// Line 2140, Address: 0x258640, Func Offset: 0x990
	// Line 2138, Address: 0x258644, Func Offset: 0x994
	// Line 2136, Address: 0x258648, Func Offset: 0x998
	// Line 2138, Address: 0x25864c, Func Offset: 0x99c
	// Line 2136, Address: 0x258650, Func Offset: 0x9a0
	// Line 2137, Address: 0x258660, Func Offset: 0x9b0
	// Line 2138, Address: 0x258664, Func Offset: 0x9b4
	// Line 2136, Address: 0x25866c, Func Offset: 0x9bc
	// Line 2137, Address: 0x258670, Func Offset: 0x9c0
	// Line 2138, Address: 0x258674, Func Offset: 0x9c4
	// Line 2140, Address: 0x258684, Func Offset: 0x9d4
	// Line 2141, Address: 0x25868c, Func Offset: 0x9dc
	// Line 2144, Address: 0x2586b4, Func Offset: 0xa04
	// Line 2148, Address: 0x2586bc, Func Offset: 0xa0c
	// Line 2149, Address: 0x2586e4, Func Offset: 0xa34
	// Line 2150, Address: 0x258708, Func Offset: 0xa58
	// Line 2159, Address: 0x25872c, Func Offset: 0xa7c
	// Func End, Address: 0x258740, Func Offset: 0xa90
}

// BUpdate__12zNMEFrogfishFP5xVec3
// Start address: 0x258740
void zNMEFrogfish::BUpdate()
{
	float32 radBound;
	xVec3 vecBoundShift;
	// Line 1878, Address: 0x258740, Func Offset: 0
	// Line 1883, Address: 0x25874c, Func Offset: 0xc
	// Line 1887, Address: 0x258758, Func Offset: 0x18
	// Line 1888, Address: 0x25877c, Func Offset: 0x3c
	// Line 1889, Address: 0x2587cc, Func Offset: 0x8c
	// Line 1891, Address: 0x2587d0, Func Offset: 0x90
	// Line 1892, Address: 0x2587d8, Func Offset: 0x98
	// Line 1889, Address: 0x2587dc, Func Offset: 0x9c
	// Line 1894, Address: 0x2587e0, Func Offset: 0xa0
	// Line 1892, Address: 0x2587e4, Func Offset: 0xa4
	// Line 1889, Address: 0x2587e8, Func Offset: 0xa8
	// Line 1892, Address: 0x258818, Func Offset: 0xd8
	// Line 1894, Address: 0x258828, Func Offset: 0xe8
	// Line 1897, Address: 0x258840, Func Offset: 0x100
	// Line 1896, Address: 0x25884c, Func Offset: 0x10c
	// Line 1897, Address: 0x258850, Func Offset: 0x110
	// Line 1900, Address: 0x25885c, Func Offset: 0x11c
	// Line 1909, Address: 0x258860, Func Offset: 0x120
	// Line 1902, Address: 0x258864, Func Offset: 0x124
	// Line 1904, Address: 0x258868, Func Offset: 0x128
	// Line 1905, Address: 0x25886c, Func Offset: 0x12c
	// Line 1906, Address: 0x258870, Func Offset: 0x130
	// Line 1902, Address: 0x258874, Func Offset: 0x134
	// Line 1904, Address: 0x25887c, Func Offset: 0x13c
	// Line 1905, Address: 0x2588e0, Func Offset: 0x1a0
	// Line 1906, Address: 0x258944, Func Offset: 0x204
	// Line 1909, Address: 0x2589a4, Func Offset: 0x264
	// Line 1910, Address: 0x2589ac, Func Offset: 0x26c
	// Line 1913, Address: 0x2589b4, Func Offset: 0x274
	// Func End, Address: 0x2589c4, Func Offset: 0x284
}

// Process__12zNMEFrogfishFf
// Start address: 0x2589d0
void zNMEFrogfish::Process(float32 dt)
{
	xMat4x3 oldMat;
	float32 tym_animCurr;
	float32 tym_animDur;
	float32 tym_animPlusTime;
	xVec3 dirPlayer;
	xVec3 newPos;
	xVec3 newPos;
	xVec3 newPos;
	xVec3 pos_emit;
	float32 deltaX;
	float32 deltaZ;
	float32 distFromCenterSq;
	xVec3 arenaCenter;
	xVec3 centerToFF;
	xVec3 centerToPlayer;
	xVec3 ffToPlayer;
	float32 distPlayerFromCenterSq;
	float32 stoppingRadiusSq;
	xVec3 newPos;
	float32 absDeltaV;
	float32 deltaX;
	float32 deltaZ;
	float32 distFromCenterSq;
	xVec3 newPos;
	xVec3 newPos;
	xVec3 newPos;
	xVec3 dirCenter;
	float32 dy;
	xVec3 arenaCenter;
	xMat3x3 mat_rot;
	xVec3 newPos;
	xVec3 newPos;
	xVec3 newPos;
	xVec3 pos_emit;
	float32 absDeltaV;
	float32 deltaX;
	float32 deltaZ;
	xVec3 newPos;
	xVec3 dirPlayer;
	float32 qdot;
	xVec3 dirPlayer;
	float32 qdot;
	xVec3 dirPlayer;
	xVec3 dirPlayer;
	xVec3 newPos;
	xVec3 pos_emit;
	xVec3 vel;
	int32 jumpDone;
	int32 jumpDone;
	// Line 1007, Address: 0x2589d0, Func Offset: 0
	// Line 1024, Address: 0x2589f4, Func Offset: 0x24
	// Line 1025, Address: 0x258a00, Func Offset: 0x30
	// Line 1027, Address: 0x258a0c, Func Offset: 0x3c
	// Line 1028, Address: 0x258a24, Func Offset: 0x54
	// Line 1029, Address: 0x258a38, Func Offset: 0x68
	// Line 1030, Address: 0x258a4c, Func Offset: 0x7c
	// Line 1033, Address: 0x258aec, Func Offset: 0x11c
	// Line 1035, Address: 0x258b04, Func Offset: 0x134
	// Line 1036, Address: 0x258b10, Func Offset: 0x140
	// Line 1039, Address: 0x258b18, Func Offset: 0x148
	// Line 1040, Address: 0x258b4c, Func Offset: 0x17c
	// Line 1044, Address: 0x258b54, Func Offset: 0x184
	// Line 1040, Address: 0x258b58, Func Offset: 0x188
	// Line 1044, Address: 0x258b5c, Func Offset: 0x18c
	// Line 1046, Address: 0x258b7c, Func Offset: 0x1ac
	// Line 1048, Address: 0x258b94, Func Offset: 0x1c4
	// Line 1049, Address: 0x258bd4, Func Offset: 0x204
	// Line 1050, Address: 0x258c1c, Func Offset: 0x24c
	// Line 1053, Address: 0x258c38, Func Offset: 0x268
	// Line 1054, Address: 0x258c44, Func Offset: 0x274
	// Line 1056, Address: 0x258c6c, Func Offset: 0x29c
	// Line 1059, Address: 0x258da4, Func Offset: 0x3d4
	// Line 1060, Address: 0x258e74, Func Offset: 0x4a4
	// Line 1064, Address: 0x258e88, Func Offset: 0x4b8
	// Line 1065, Address: 0x258ecc, Func Offset: 0x4fc
	// Line 1068, Address: 0x258ed0, Func Offset: 0x500
	// Line 1070, Address: 0x258edc, Func Offset: 0x50c
	// Line 1074, Address: 0x258f08, Func Offset: 0x538
	// Line 1077, Address: 0x258f20, Func Offset: 0x550
	// Line 1078, Address: 0x258f48, Func Offset: 0x578
	// Line 1080, Address: 0x258f50, Func Offset: 0x580
	// Line 1082, Address: 0x258f58, Func Offset: 0x588
	// Line 1087, Address: 0x258f60, Func Offset: 0x590
	// Line 1082, Address: 0x258f64, Func Offset: 0x594
	// Line 1087, Address: 0x258f68, Func Offset: 0x598
	// Line 1089, Address: 0x258f74, Func Offset: 0x5a4
	// Line 1091, Address: 0x258f88, Func Offset: 0x5b8
	// Line 1094, Address: 0x259000, Func Offset: 0x630
	// Line 1098, Address: 0x259004, Func Offset: 0x634
	// Line 1094, Address: 0x25900c, Func Offset: 0x63c
	// Line 1098, Address: 0x259010, Func Offset: 0x640
	// Line 1097, Address: 0x259014, Func Offset: 0x644
	// Line 1094, Address: 0x259018, Func Offset: 0x648
	// Line 1098, Address: 0x25901c, Func Offset: 0x64c
	// Line 1097, Address: 0x259020, Func Offset: 0x650
	// Line 1096, Address: 0x259024, Func Offset: 0x654
	// Line 1094, Address: 0x259028, Func Offset: 0x658
	// Line 1098, Address: 0x25902c, Func Offset: 0x65c
	// Line 1094, Address: 0x259030, Func Offset: 0x660
	// Line 1097, Address: 0x259058, Func Offset: 0x688
	// Line 1094, Address: 0x25905c, Func Offset: 0x68c
	// Line 1096, Address: 0x259064, Func Offset: 0x694
	// Line 1094, Address: 0x259068, Func Offset: 0x698
	// Line 1096, Address: 0x259078, Func Offset: 0x6a8
	// Line 1097, Address: 0x259080, Func Offset: 0x6b0
	// Line 1094, Address: 0x259084, Func Offset: 0x6b4
	// Line 1097, Address: 0x259088, Func Offset: 0x6b8
	// Line 1098, Address: 0x2590a4, Func Offset: 0x6d4
	// Line 1101, Address: 0x2590b4, Func Offset: 0x6e4
	// Line 1104, Address: 0x25912c, Func Offset: 0x75c
	// Line 1105, Address: 0x259130, Func Offset: 0x760
	// Line 1108, Address: 0x259138, Func Offset: 0x768
	// Line 1105, Address: 0x25913c, Func Offset: 0x76c
	// Line 1108, Address: 0x259140, Func Offset: 0x770
	// Line 1104, Address: 0x259144, Func Offset: 0x774
	// Line 1105, Address: 0x259150, Func Offset: 0x780
	// Line 1104, Address: 0x259158, Func Offset: 0x788
	// Line 1108, Address: 0x259160, Func Offset: 0x790
	// Line 1105, Address: 0x259168, Func Offset: 0x798
	// Line 1108, Address: 0x259174, Func Offset: 0x7a4
	// Line 1109, Address: 0x259184, Func Offset: 0x7b4
	// Line 1110, Address: 0x25918c, Func Offset: 0x7bc
	// Line 1113, Address: 0x259198, Func Offset: 0x7c8
	// Line 1114, Address: 0x25919c, Func Offset: 0x7cc
	// Line 1117, Address: 0x2591a4, Func Offset: 0x7d4
	// Line 1114, Address: 0x2591a8, Func Offset: 0x7d8
	// Line 1117, Address: 0x2591ac, Func Offset: 0x7dc
	// Line 1113, Address: 0x2591b0, Func Offset: 0x7e0
	// Line 1114, Address: 0x2591bc, Func Offset: 0x7ec
	// Line 1113, Address: 0x2591c4, Func Offset: 0x7f4
	// Line 1117, Address: 0x2591cc, Func Offset: 0x7fc
	// Line 1114, Address: 0x2591d4, Func Offset: 0x804
	// Line 1117, Address: 0x2591e0, Func Offset: 0x810
	// Line 1120, Address: 0x2591f4, Func Offset: 0x824
	// Line 1123, Address: 0x25920c, Func Offset: 0x83c
	// Line 1127, Address: 0x259210, Func Offset: 0x840
	// Line 1125, Address: 0x259214, Func Offset: 0x844
	// Line 1127, Address: 0x259218, Func Offset: 0x848
	// Line 1124, Address: 0x259224, Func Offset: 0x854
	// Line 1127, Address: 0x259228, Func Offset: 0x858
	// Line 1123, Address: 0x25922c, Func Offset: 0x85c
	// Line 1125, Address: 0x259230, Func Offset: 0x860
	// Line 1123, Address: 0x259234, Func Offset: 0x864
	// Line 1125, Address: 0x259240, Func Offset: 0x870
	// Line 1123, Address: 0x259248, Func Offset: 0x878
	// Line 1125, Address: 0x25924c, Func Offset: 0x87c
	// Line 1127, Address: 0x259260, Func Offset: 0x890
	// Line 1129, Address: 0x25931c, Func Offset: 0x94c
	// Line 1127, Address: 0x259344, Func Offset: 0x974
	// Line 1129, Address: 0x259348, Func Offset: 0x978
	// Line 1130, Address: 0x259400, Func Offset: 0xa30
	// Line 1131, Address: 0x259420, Func Offset: 0xa50
	// Line 1134, Address: 0x259428, Func Offset: 0xa58
	// Line 1136, Address: 0x259448, Func Offset: 0xa78
	// Line 1137, Address: 0x259464, Func Offset: 0xa94
	// Line 1136, Address: 0x259468, Func Offset: 0xa98
	// Line 1137, Address: 0x259478, Func Offset: 0xaa8
	// Line 1136, Address: 0x25947c, Func Offset: 0xaac
	// Line 1137, Address: 0x259480, Func Offset: 0xab0
	// Line 1136, Address: 0x259484, Func Offset: 0xab4
	// Line 1137, Address: 0x2594dc, Func Offset: 0xb0c
	// Line 1138, Address: 0x2594e4, Func Offset: 0xb14
	// Line 1139, Address: 0x259570, Func Offset: 0xba0
	// Line 1142, Address: 0x259574, Func Offset: 0xba4
	// Line 1144, Address: 0x25959c, Func Offset: 0xbcc
	// Line 1145, Address: 0x2595a4, Func Offset: 0xbd4
	// Line 1147, Address: 0x2595b0, Func Offset: 0xbe0
	// Line 1149, Address: 0x2595bc, Func Offset: 0xbec
	// Line 1151, Address: 0x2595e0, Func Offset: 0xc10
	// Line 1152, Address: 0x2595e8, Func Offset: 0xc18
	// Line 1154, Address: 0x2595f8, Func Offset: 0xc28
	// Line 1156, Address: 0x259604, Func Offset: 0xc34
	// Line 1158, Address: 0x259610, Func Offset: 0xc40
	// Line 1159, Address: 0x259618, Func Offset: 0xc48
	// Line 1163, Address: 0x259620, Func Offset: 0xc50
	// Line 1165, Address: 0x25962c, Func Offset: 0xc5c
	// Line 1167, Address: 0x259654, Func Offset: 0xc84
	// Line 1168, Address: 0x259680, Func Offset: 0xcb0
	// Line 1169, Address: 0x25968c, Func Offset: 0xcbc
	// Line 1171, Address: 0x259694, Func Offset: 0xcc4
	// Line 1178, Address: 0x25969c, Func Offset: 0xccc
	// Line 1183, Address: 0x2596a4, Func Offset: 0xcd4
	// Line 1185, Address: 0x2596b8, Func Offset: 0xce8
	// Line 1186, Address: 0x2596c4, Func Offset: 0xcf4
	// Line 1189, Address: 0x2596ec, Func Offset: 0xd1c
	// Line 1191, Address: 0x2597f8, Func Offset: 0xe28
	// Line 1189, Address: 0x259818, Func Offset: 0xe48
	// Line 1191, Address: 0x25981c, Func Offset: 0xe4c
	// Line 1192, Address: 0x2598dc, Func Offset: 0xf0c
	// Line 1193, Address: 0x2598fc, Func Offset: 0xf2c
	// Line 1194, Address: 0x259908, Func Offset: 0xf38
	// Line 1195, Address: 0x259910, Func Offset: 0xf40
	// Line 1207, Address: 0x259924, Func Offset: 0xf54
	// Line 1197, Address: 0x259928, Func Offset: 0xf58
	// Line 1207, Address: 0x25992c, Func Offset: 0xf5c
	// Line 1208, Address: 0x259930, Func Offset: 0xf60
	// Line 1210, Address: 0x259944, Func Offset: 0xf74
	// Line 1208, Address: 0x259948, Func Offset: 0xf78
	// Line 1205, Address: 0x25994c, Func Offset: 0xf7c
	// Line 1208, Address: 0x259950, Func Offset: 0xf80
	// Line 1210, Address: 0x259954, Func Offset: 0xf84
	// Line 1195, Address: 0x259958, Func Offset: 0xf88
	// Line 1213, Address: 0x25995c, Func Offset: 0xf8c
	// Line 1215, Address: 0x259960, Func Offset: 0xf90
	// Line 1213, Address: 0x259964, Func Offset: 0xf94
	// Line 1208, Address: 0x259968, Func Offset: 0xf98
	// Line 1195, Address: 0x25996c, Func Offset: 0xf9c
	// Line 1208, Address: 0x259970, Func Offset: 0xfa0
	// Line 1212, Address: 0x259974, Func Offset: 0xfa4
	// Line 1208, Address: 0x259978, Func Offset: 0xfa8
	// Line 1197, Address: 0x25997c, Func Offset: 0xfac
	// Line 1198, Address: 0x259980, Func Offset: 0xfb0
	// Line 1207, Address: 0x259984, Func Offset: 0xfb4
	// Line 1213, Address: 0x25998c, Func Offset: 0xfbc
	// Line 1208, Address: 0x259994, Func Offset: 0xfc4
	// Line 1198, Address: 0x259998, Func Offset: 0xfc8
	// Line 1208, Address: 0x25999c, Func Offset: 0xfcc
	// Line 1207, Address: 0x2599a0, Func Offset: 0xfd0
	// Line 1197, Address: 0x2599a4, Func Offset: 0xfd4
	// Line 1208, Address: 0x2599a8, Func Offset: 0xfd8
	// Line 1207, Address: 0x2599ac, Func Offset: 0xfdc
	// Line 1199, Address: 0x2599b0, Func Offset: 0xfe0
	// Line 1217, Address: 0x2599b8, Func Offset: 0xfe8
	// Line 1209, Address: 0x2599bc, Func Offset: 0xfec
	// Line 1211, Address: 0x2599c0, Func Offset: 0xff0
	// Line 1216, Address: 0x2599c4, Func Offset: 0xff4
	// Line 1199, Address: 0x2599c8, Func Offset: 0xff8
	// Line 1204, Address: 0x2599cc, Func Offset: 0xffc
	// Line 1206, Address: 0x2599d0, Func Offset: 0x1000
	// Line 1209, Address: 0x2599d4, Func Offset: 0x1004
	// Line 1211, Address: 0x2599d8, Func Offset: 0x1008
	// Line 1209, Address: 0x2599dc, Func Offset: 0x100c
	// Line 1212, Address: 0x2599e0, Func Offset: 0x1010
	// Line 1215, Address: 0x2599e8, Func Offset: 0x1018
	// Line 1211, Address: 0x2599ec, Func Offset: 0x101c
	// Line 1215, Address: 0x2599f0, Func Offset: 0x1020
	// Line 1216, Address: 0x2599f8, Func Offset: 0x1028
	// Line 1208, Address: 0x259a00, Func Offset: 0x1030
	// Line 1207, Address: 0x259a08, Func Offset: 0x1038
	// Line 1217, Address: 0x259a10, Func Offset: 0x1040
	// Line 1221, Address: 0x259a4c, Func Offset: 0x107c
	// Line 1222, Address: 0x259a58, Func Offset: 0x1088
	// Line 1221, Address: 0x259a5c, Func Offset: 0x108c
	// Line 1222, Address: 0x259ab0, Func Offset: 0x10e0
	// Line 1221, Address: 0x259ab4, Func Offset: 0x10e4
	// Line 1222, Address: 0x259b68, Func Offset: 0x1198
	// Line 1221, Address: 0x259b6c, Func Offset: 0x119c
	// Line 1222, Address: 0x259b78, Func Offset: 0x11a8
	// Line 1221, Address: 0x259b84, Func Offset: 0x11b4
	// Line 1222, Address: 0x259b8c, Func Offset: 0x11bc
	// Line 1223, Address: 0x259b9c, Func Offset: 0x11cc
	// Line 1226, Address: 0x259ba4, Func Offset: 0x11d4
	// Line 1228, Address: 0x259bb0, Func Offset: 0x11e0
	// Line 1231, Address: 0x259bb8, Func Offset: 0x11e8
	// Line 1236, Address: 0x259bc0, Func Offset: 0x11f0
	// Line 1238, Address: 0x259cc8, Func Offset: 0x12f8
	// Line 1236, Address: 0x259cd4, Func Offset: 0x1304
	// Line 1238, Address: 0x259cd8, Func Offset: 0x1308
	// Line 1239, Address: 0x259dac, Func Offset: 0x13dc
	// Line 1243, Address: 0x259dcc, Func Offset: 0x13fc
	// Line 1244, Address: 0x259ddc, Func Offset: 0x140c
	// Line 1245, Address: 0x259dec, Func Offset: 0x141c
	// Line 1247, Address: 0x259e10, Func Offset: 0x1440
	// Line 1251, Address: 0x259e20, Func Offset: 0x1450
	// Line 1250, Address: 0x259e24, Func Offset: 0x1454
	// Line 1249, Address: 0x259e28, Func Offset: 0x1458
	// Line 1250, Address: 0x259e2c, Func Offset: 0x145c
	// Line 1249, Address: 0x259e30, Func Offset: 0x1460
	// Line 1252, Address: 0x259e34, Func Offset: 0x1464
	// Line 1250, Address: 0x259e38, Func Offset: 0x1468
	// Line 1249, Address: 0x259e3c, Func Offset: 0x146c
	// Line 1251, Address: 0x259e40, Func Offset: 0x1470
	// Line 1252, Address: 0x259e48, Func Offset: 0x1478
	// Line 1255, Address: 0x259e54, Func Offset: 0x1484
	// Line 1256, Address: 0x259e58, Func Offset: 0x1488
	// Line 1255, Address: 0x259e5c, Func Offset: 0x148c
	// Line 1256, Address: 0x259ea4, Func Offset: 0x14d4
	// Line 1255, Address: 0x259ea8, Func Offset: 0x14d8
	// Line 1256, Address: 0x259f70, Func Offset: 0x15a0
	// Line 1255, Address: 0x259f74, Func Offset: 0x15a4
	// Line 1256, Address: 0x259f80, Func Offset: 0x15b0
	// Line 1255, Address: 0x259f8c, Func Offset: 0x15bc
	// Line 1256, Address: 0x259f94, Func Offset: 0x15c4
	// Line 1259, Address: 0x259fa8, Func Offset: 0x15d8
	// Line 1263, Address: 0x259fcc, Func Offset: 0x15fc
	// Line 1261, Address: 0x259fd0, Func Offset: 0x1600
	// Line 1259, Address: 0x259fd4, Func Offset: 0x1604
	// Line 1262, Address: 0x259fd8, Func Offset: 0x1608
	// Line 1261, Address: 0x259fdc, Func Offset: 0x160c
	// Line 1265, Address: 0x259fe0, Func Offset: 0x1610
	// Line 1262, Address: 0x259fe4, Func Offset: 0x1614
	// Line 1263, Address: 0x259fe8, Func Offset: 0x1618
	// Line 1261, Address: 0x259fec, Func Offset: 0x161c
	// Line 1263, Address: 0x259ff0, Func Offset: 0x1620
	// Line 1265, Address: 0x259ff8, Func Offset: 0x1628
	// Line 1272, Address: 0x25a004, Func Offset: 0x1634
	// Line 1273, Address: 0x25a020, Func Offset: 0x1650
	// Line 1272, Address: 0x25a024, Func Offset: 0x1654
	// Line 1273, Address: 0x25a054, Func Offset: 0x1684
	// Line 1272, Address: 0x25a058, Func Offset: 0x1688
	// Line 1273, Address: 0x25a124, Func Offset: 0x1754
	// Line 1272, Address: 0x25a128, Func Offset: 0x1758
	// Line 1273, Address: 0x25a130, Func Offset: 0x1760
	// Line 1272, Address: 0x25a134, Func Offset: 0x1764
	// Line 1273, Address: 0x25a138, Func Offset: 0x1768
	// Line 1272, Address: 0x25a140, Func Offset: 0x1770
	// Line 1273, Address: 0x25a148, Func Offset: 0x1778
	// Line 1275, Address: 0x25a158, Func Offset: 0x1788
	// Line 1278, Address: 0x25a160, Func Offset: 0x1790
	// Line 1280, Address: 0x25a2d8, Func Offset: 0x1908
	// Line 1281, Address: 0x25a2e4, Func Offset: 0x1914
	// Line 1284, Address: 0x25a2ec, Func Offset: 0x191c
	// Line 1288, Address: 0x25a2f4, Func Offset: 0x1924
	// Line 1290, Address: 0x25a2fc, Func Offset: 0x192c
	// Line 1294, Address: 0x25a304, Func Offset: 0x1934
	// Line 1295, Address: 0x25a308, Func Offset: 0x1938
	// Line 1294, Address: 0x25a314, Func Offset: 0x1944
	// Line 1295, Address: 0x25a318, Func Offset: 0x1948
	// Line 1297, Address: 0x25a344, Func Offset: 0x1974
	// Line 1298, Address: 0x25a364, Func Offset: 0x1994
	// Line 1300, Address: 0x25a36c, Func Offset: 0x199c
	// Line 1305, Address: 0x25a398, Func Offset: 0x19c8
	// Line 1306, Address: 0x25a414, Func Offset: 0x1a44
	// Line 1308, Address: 0x25a42c, Func Offset: 0x1a5c
	// Line 1309, Address: 0x25a438, Func Offset: 0x1a68
	// Line 1320, Address: 0x25a43c, Func Offset: 0x1a6c
	// Line 1317, Address: 0x25a440, Func Offset: 0x1a70
	// Line 1319, Address: 0x25a444, Func Offset: 0x1a74
	// Line 1309, Address: 0x25a448, Func Offset: 0x1a78
	// Line 1319, Address: 0x25a44c, Func Offset: 0x1a7c
	// Line 1320, Address: 0x25a450, Func Offset: 0x1a80
	// Line 1321, Address: 0x25a454, Func Offset: 0x1a84
	// Line 1309, Address: 0x25a468, Func Offset: 0x1a98
	// Line 1321, Address: 0x25a46c, Func Offset: 0x1a9c
	// Line 1325, Address: 0x25a474, Func Offset: 0x1aa4
	// Line 1317, Address: 0x25a478, Func Offset: 0x1aa8
	// Line 1309, Address: 0x25a47c, Func Offset: 0x1aac
	// Line 1319, Address: 0x25a4a0, Func Offset: 0x1ad0
	// Line 1309, Address: 0x25a4a4, Func Offset: 0x1ad4
	// Line 1319, Address: 0x25a4a8, Func Offset: 0x1ad8
	// Line 1316, Address: 0x25a4ac, Func Offset: 0x1adc
	// Line 1318, Address: 0x25a4b0, Func Offset: 0x1ae0
	// Line 1319, Address: 0x25a4b4, Func Offset: 0x1ae4
	// Line 1316, Address: 0x25a4b8, Func Offset: 0x1ae8
	// Line 1318, Address: 0x25a4bc, Func Offset: 0x1aec
	// Line 1319, Address: 0x25a4c0, Func Offset: 0x1af0
	// Line 1320, Address: 0x25a4ec, Func Offset: 0x1b1c
	// Line 1321, Address: 0x25a4fc, Func Offset: 0x1b2c
	// Line 1320, Address: 0x25a500, Func Offset: 0x1b30
	// Line 1321, Address: 0x25a50c, Func Offset: 0x1b3c
	// Line 1325, Address: 0x25a584, Func Offset: 0x1bb4
	// Line 1326, Address: 0x25a58c, Func Offset: 0x1bbc
	// Line 1328, Address: 0x25a5b0, Func Offset: 0x1be0
	// Line 1329, Address: 0x25a5b4, Func Offset: 0x1be4
	// Line 1330, Address: 0x25a5bc, Func Offset: 0x1bec
	// Line 1332, Address: 0x25a634, Func Offset: 0x1c64
	// Line 1335, Address: 0x25a63c, Func Offset: 0x1c6c
	// Line 1336, Address: 0x25a644, Func Offset: 0x1c74
	// Line 1337, Address: 0x25a650, Func Offset: 0x1c80
	// Line 1338, Address: 0x25a658, Func Offset: 0x1c88
	// Line 1340, Address: 0x25a680, Func Offset: 0x1cb0
	// Line 1342, Address: 0x25a688, Func Offset: 0x1cb8
	// Line 1345, Address: 0x25a690, Func Offset: 0x1cc0
	// Line 1347, Address: 0x25a6b8, Func Offset: 0x1ce8
	// Line 1349, Address: 0x25a6c0, Func Offset: 0x1cf0
	// Line 1347, Address: 0x25a6c4, Func Offset: 0x1cf4
	// Line 1349, Address: 0x25a6c8, Func Offset: 0x1cf8
	// Line 1351, Address: 0x25a6d4, Func Offset: 0x1d04
	// Line 1353, Address: 0x25a6f0, Func Offset: 0x1d20
	// Line 1354, Address: 0x25a720, Func Offset: 0x1d50
	// Line 1358, Address: 0x25a780, Func Offset: 0x1db0
	// Line 1354, Address: 0x25a784, Func Offset: 0x1db4
	// Line 1357, Address: 0x25a790, Func Offset: 0x1dc0
	// Line 1358, Address: 0x25a794, Func Offset: 0x1dc4
	// Line 1360, Address: 0x25a798, Func Offset: 0x1dc8
	// Line 1357, Address: 0x25a79c, Func Offset: 0x1dcc
	// Line 1360, Address: 0x25a7a0, Func Offset: 0x1dd0
	// Line 1357, Address: 0x25a7a4, Func Offset: 0x1dd4
	// Line 1358, Address: 0x25a7b4, Func Offset: 0x1de4
	// Line 1360, Address: 0x25a7b8, Func Offset: 0x1de8
	// Line 1357, Address: 0x25a7c0, Func Offset: 0x1df0
	// Line 1358, Address: 0x25a7c4, Func Offset: 0x1df4
	// Line 1360, Address: 0x25a7c8, Func Offset: 0x1df8
	// Line 1362, Address: 0x25a7d8, Func Offset: 0x1e08
	// Line 1363, Address: 0x25a7e0, Func Offset: 0x1e10
	// Line 1365, Address: 0x25a7ec, Func Offset: 0x1e1c
	// Line 1367, Address: 0x25a7f0, Func Offset: 0x1e20
	// Line 1365, Address: 0x25a800, Func Offset: 0x1e30
	// Line 1367, Address: 0x25a804, Func Offset: 0x1e34
	// Line 1371, Address: 0x25a810, Func Offset: 0x1e40
	// Line 1370, Address: 0x25a81c, Func Offset: 0x1e4c
	// Line 1374, Address: 0x25a820, Func Offset: 0x1e50
	// Line 1371, Address: 0x25a824, Func Offset: 0x1e54
	// Line 1370, Address: 0x25a828, Func Offset: 0x1e58
	// Line 1374, Address: 0x25a82c, Func Offset: 0x1e5c
	// Line 1370, Address: 0x25a830, Func Offset: 0x1e60
	// Line 1371, Address: 0x25a83c, Func Offset: 0x1e6c
	// Line 1370, Address: 0x25a844, Func Offset: 0x1e74
	// Line 1374, Address: 0x25a84c, Func Offset: 0x1e7c
	// Line 1371, Address: 0x25a854, Func Offset: 0x1e84
	// Line 1374, Address: 0x25a860, Func Offset: 0x1e90
	// Line 1377, Address: 0x25a874, Func Offset: 0x1ea4
	// Line 1380, Address: 0x25a88c, Func Offset: 0x1ebc
	// Line 1384, Address: 0x25a890, Func Offset: 0x1ec0
	// Line 1382, Address: 0x25a894, Func Offset: 0x1ec4
	// Line 1384, Address: 0x25a898, Func Offset: 0x1ec8
	// Line 1381, Address: 0x25a8a4, Func Offset: 0x1ed4
	// Line 1384, Address: 0x25a8a8, Func Offset: 0x1ed8
	// Line 1380, Address: 0x25a8ac, Func Offset: 0x1edc
	// Line 1382, Address: 0x25a8b0, Func Offset: 0x1ee0
	// Line 1380, Address: 0x25a8b4, Func Offset: 0x1ee4
	// Line 1382, Address: 0x25a8c0, Func Offset: 0x1ef0
	// Line 1380, Address: 0x25a8c8, Func Offset: 0x1ef8
	// Line 1382, Address: 0x25a8cc, Func Offset: 0x1efc
	// Line 1384, Address: 0x25a8e0, Func Offset: 0x1f10
	// Line 1386, Address: 0x25a99c, Func Offset: 0x1fcc
	// Line 1384, Address: 0x25a9c4, Func Offset: 0x1ff4
	// Line 1386, Address: 0x25a9c8, Func Offset: 0x1ff8
	// Line 1387, Address: 0x25aa80, Func Offset: 0x20b0
	// Line 1388, Address: 0x25aaa0, Func Offset: 0x20d0
	// Line 1391, Address: 0x25aaa8, Func Offset: 0x20d8
	// Line 1393, Address: 0x25aac8, Func Offset: 0x20f8
	// Line 1394, Address: 0x25aae4, Func Offset: 0x2114
	// Line 1393, Address: 0x25aae8, Func Offset: 0x2118
	// Line 1394, Address: 0x25aaf8, Func Offset: 0x2128
	// Line 1393, Address: 0x25aafc, Func Offset: 0x212c
	// Line 1394, Address: 0x25ab00, Func Offset: 0x2130
	// Line 1393, Address: 0x25ab04, Func Offset: 0x2134
	// Line 1394, Address: 0x25ab5c, Func Offset: 0x218c
	// Line 1395, Address: 0x25ab64, Func Offset: 0x2194
	// Line 1396, Address: 0x25abf0, Func Offset: 0x2220
	// Line 1399, Address: 0x25abf4, Func Offset: 0x2224
	// Line 1401, Address: 0x25ac1c, Func Offset: 0x224c
	// Line 1402, Address: 0x25ac24, Func Offset: 0x2254
	// Line 1404, Address: 0x25ac34, Func Offset: 0x2264
	// Line 1406, Address: 0x25ac40, Func Offset: 0x2270
	// Line 1408, Address: 0x25ac64, Func Offset: 0x2294
	// Line 1409, Address: 0x25ac6c, Func Offset: 0x229c
	// Line 1411, Address: 0x25ac78, Func Offset: 0x22a8
	// Line 1413, Address: 0x25ac84, Func Offset: 0x22b4
	// Line 1416, Address: 0x25ac90, Func Offset: 0x22c0
	// Line 1415, Address: 0x25ac94, Func Offset: 0x22c4
	// Line 1416, Address: 0x25ac98, Func Offset: 0x22c8
	// Line 1417, Address: 0x25aca0, Func Offset: 0x22d0
	// Line 1421, Address: 0x25aca8, Func Offset: 0x22d8
	// Line 1423, Address: 0x25acdc, Func Offset: 0x230c
	// Line 1426, Address: 0x25ace8, Func Offset: 0x2318
	// Line 1427, Address: 0x25acf0, Func Offset: 0x2320
	// Line 1428, Address: 0x25acfc, Func Offset: 0x232c
	// Line 1429, Address: 0x25ad04, Func Offset: 0x2334
	// Line 1431, Address: 0x25ad2c, Func Offset: 0x235c
	// Line 1432, Address: 0x25ad34, Func Offset: 0x2364
	// Line 1435, Address: 0x25ad3c, Func Offset: 0x236c
	// Line 1442, Address: 0x25ad44, Func Offset: 0x2374
	// Line 1446, Address: 0x25ad4c, Func Offset: 0x237c
	// Line 1448, Address: 0x25ad60, Func Offset: 0x2390
	// Line 1450, Address: 0x25ad6c, Func Offset: 0x239c
	// Line 1454, Address: 0x25ad74, Func Offset: 0x23a4
	// Line 1458, Address: 0x25ad7c, Func Offset: 0x23ac
	// Line 1460, Address: 0x25ad90, Func Offset: 0x23c0
	// Line 1462, Address: 0x25ad9c, Func Offset: 0x23cc
	// Line 1463, Address: 0x25adc4, Func Offset: 0x23f4
	// Line 1464, Address: 0x25adec, Func Offset: 0x241c
	// Line 1465, Address: 0x25adf4, Func Offset: 0x2424
	// Line 1466, Address: 0x25ae00, Func Offset: 0x2430
	// Line 1467, Address: 0x25ae0c, Func Offset: 0x243c
	// Line 1468, Address: 0x25ae18, Func Offset: 0x2448
	// Line 1469, Address: 0x25ae20, Func Offset: 0x2450
	// Line 1472, Address: 0x25ae28, Func Offset: 0x2458
	// Line 1475, Address: 0x25ae30, Func Offset: 0x2460
	// Line 1478, Address: 0x25ae5c, Func Offset: 0x248c
	// Line 1477, Address: 0x25ae60, Func Offset: 0x2490
	// Line 1478, Address: 0x25ae64, Func Offset: 0x2494
	// Line 1480, Address: 0x25ae80, Func Offset: 0x24b0
	// Line 1482, Address: 0x25ae98, Func Offset: 0x24c8
	// Line 1485, Address: 0x25aea4, Func Offset: 0x24d4
	// Line 1483, Address: 0x25aea8, Func Offset: 0x24d8
	// Line 1485, Address: 0x25aeac, Func Offset: 0x24dc
	// Line 1487, Address: 0x25aeb4, Func Offset: 0x24e4
	// Line 1490, Address: 0x25aebc, Func Offset: 0x24ec
	// Line 1495, Address: 0x25aec4, Func Offset: 0x24f4
	// Line 1490, Address: 0x25aec8, Func Offset: 0x24f8
	// Line 1495, Address: 0x25aecc, Func Offset: 0x24fc
	// Line 1499, Address: 0x25aed8, Func Offset: 0x2508
	// Line 1500, Address: 0x25aee8, Func Offset: 0x2518
	// Line 1501, Address: 0x25aef8, Func Offset: 0x2528
	// Line 1503, Address: 0x25af1c, Func Offset: 0x254c
	// Line 1506, Address: 0x25af2c, Func Offset: 0x255c
	// Line 1505, Address: 0x25af34, Func Offset: 0x2564
	// Line 1506, Address: 0x25af38, Func Offset: 0x2568
	// Line 1505, Address: 0x25af3c, Func Offset: 0x256c
	// Line 1508, Address: 0x25af40, Func Offset: 0x2570
	// Line 1506, Address: 0x25af44, Func Offset: 0x2574
	// Line 1505, Address: 0x25af48, Func Offset: 0x2578
	// Line 1508, Address: 0x25af4c, Func Offset: 0x257c
	// Line 1511, Address: 0x25af60, Func Offset: 0x2590
	// Line 1512, Address: 0x25af64, Func Offset: 0x2594
	// Line 1511, Address: 0x25af68, Func Offset: 0x2598
	// Line 1512, Address: 0x25afb0, Func Offset: 0x25e0
	// Line 1511, Address: 0x25afb4, Func Offset: 0x25e4
	// Line 1512, Address: 0x25b07c, Func Offset: 0x26ac
	// Line 1511, Address: 0x25b080, Func Offset: 0x26b0
	// Line 1512, Address: 0x25b08c, Func Offset: 0x26bc
	// Line 1511, Address: 0x25b098, Func Offset: 0x26c8
	// Line 1512, Address: 0x25b0a0, Func Offset: 0x26d0
	// Line 1514, Address: 0x25b0b4, Func Offset: 0x26e4
	// Line 1520, Address: 0x25b0cc, Func Offset: 0x26fc
	// Line 1522, Address: 0x25b0f0, Func Offset: 0x2720
	// Line 1523, Address: 0x25b0fc, Func Offset: 0x272c
	// Line 1526, Address: 0x25b104, Func Offset: 0x2734
	// Line 1529, Address: 0x25b108, Func Offset: 0x2738
	// Line 1526, Address: 0x25b10c, Func Offset: 0x273c
	// Line 1529, Address: 0x25b110, Func Offset: 0x2740
	// Line 1526, Address: 0x25b114, Func Offset: 0x2744
	// Line 1534, Address: 0x25b11c, Func Offset: 0x274c
	// Line 1528, Address: 0x25b120, Func Offset: 0x2750
	// Line 1526, Address: 0x25b124, Func Offset: 0x2754
	// Line 1529, Address: 0x25b150, Func Offset: 0x2780
	// Line 1526, Address: 0x25b154, Func Offset: 0x2784
	// Line 1528, Address: 0x25b15c, Func Offset: 0x278c
	// Line 1526, Address: 0x25b160, Func Offset: 0x2790
	// Line 1528, Address: 0x25b170, Func Offset: 0x27a0
	// Line 1529, Address: 0x25b178, Func Offset: 0x27a8
	// Line 1526, Address: 0x25b17c, Func Offset: 0x27ac
	// Line 1529, Address: 0x25b180, Func Offset: 0x27b0
	// Line 1534, Address: 0x25b1a0, Func Offset: 0x27d0
	// Line 1536, Address: 0x25b1b0, Func Offset: 0x27e0
	// Line 1538, Address: 0x25b1cc, Func Offset: 0x27fc
	// Line 1539, Address: 0x25b1f4, Func Offset: 0x2824
	// Line 1540, Address: 0x25b21c, Func Offset: 0x284c
	// Line 1542, Address: 0x25b274, Func Offset: 0x28a4
	// Line 1547, Address: 0x25b27c, Func Offset: 0x28ac
	// Line 1549, Address: 0x25b294, Func Offset: 0x28c4
	// Line 1551, Address: 0x25b2bc, Func Offset: 0x28ec
	// Line 1552, Address: 0x25b2dc, Func Offset: 0x290c
	// Line 1553, Address: 0x25b2e8, Func Offset: 0x2918
	// Line 1556, Address: 0x25b2f0, Func Offset: 0x2920
	// Line 1558, Address: 0x25b2fc, Func Offset: 0x292c
	// Line 1559, Address: 0x25b300, Func Offset: 0x2930
	// Line 1562, Address: 0x25b30c, Func Offset: 0x293c
	// Line 1563, Address: 0x25b314, Func Offset: 0x2944
	// Line 1564, Address: 0x25b320, Func Offset: 0x2950
	// Line 1565, Address: 0x25b328, Func Offset: 0x2958
	// Line 1567, Address: 0x25b350, Func Offset: 0x2980
	// Line 1568, Address: 0x25b358, Func Offset: 0x2988
	// Line 1571, Address: 0x25b360, Func Offset: 0x2990
	// Line 1573, Address: 0x25b368, Func Offset: 0x2998
	// Line 1575, Address: 0x25b370, Func Offset: 0x29a0
	// Line 1579, Address: 0x25b378, Func Offset: 0x29a8
	// Line 1581, Address: 0x25b380, Func Offset: 0x29b0
	// Line 1586, Address: 0x25b388, Func Offset: 0x29b8
	// Line 1589, Address: 0x25b38c, Func Offset: 0x29bc
	// Line 1586, Address: 0x25b390, Func Offset: 0x29c0
	// Line 1589, Address: 0x25b394, Func Offset: 0x29c4
	// Line 1586, Address: 0x25b398, Func Offset: 0x29c8
	// Line 1595, Address: 0x25b3a0, Func Offset: 0x29d0
	// Line 1588, Address: 0x25b3a4, Func Offset: 0x29d4
	// Line 1586, Address: 0x25b3a8, Func Offset: 0x29d8
	// Line 1589, Address: 0x25b3d4, Func Offset: 0x2a04
	// Line 1586, Address: 0x25b3d8, Func Offset: 0x2a08
	// Line 1588, Address: 0x25b3e0, Func Offset: 0x2a10
	// Line 1586, Address: 0x25b3e4, Func Offset: 0x2a14
	// Line 1588, Address: 0x25b3f4, Func Offset: 0x2a24
	// Line 1589, Address: 0x25b3fc, Func Offset: 0x2a2c
	// Line 1586, Address: 0x25b400, Func Offset: 0x2a30
	// Line 1589, Address: 0x25b404, Func Offset: 0x2a34
	// Line 1595, Address: 0x25b424, Func Offset: 0x2a54
	// Line 1597, Address: 0x25b434, Func Offset: 0x2a64
	// Line 1598, Address: 0x25b450, Func Offset: 0x2a80
	// Line 1600, Address: 0x25b458, Func Offset: 0x2a88
	// Line 1605, Address: 0x25b460, Func Offset: 0x2a90
	// Line 1608, Address: 0x25b464, Func Offset: 0x2a94
	// Line 1605, Address: 0x25b468, Func Offset: 0x2a98
	// Line 1608, Address: 0x25b46c, Func Offset: 0x2a9c
	// Line 1605, Address: 0x25b470, Func Offset: 0x2aa0
	// Line 1614, Address: 0x25b478, Func Offset: 0x2aa8
	// Line 1607, Address: 0x25b47c, Func Offset: 0x2aac
	// Line 1605, Address: 0x25b480, Func Offset: 0x2ab0
	// Line 1608, Address: 0x25b4ac, Func Offset: 0x2adc
	// Line 1605, Address: 0x25b4b0, Func Offset: 0x2ae0
	// Line 1607, Address: 0x25b4b8, Func Offset: 0x2ae8
	// Line 1605, Address: 0x25b4bc, Func Offset: 0x2aec
	// Line 1607, Address: 0x25b4cc, Func Offset: 0x2afc
	// Line 1608, Address: 0x25b4d4, Func Offset: 0x2b04
	// Line 1605, Address: 0x25b4d8, Func Offset: 0x2b08
	// Line 1608, Address: 0x25b4dc, Func Offset: 0x2b0c
	// Line 1614, Address: 0x25b4fc, Func Offset: 0x2b2c
	// Line 1617, Address: 0x25b50c, Func Offset: 0x2b3c
	// Line 1620, Address: 0x25b534, Func Offset: 0x2b64
	// Line 1619, Address: 0x25b538, Func Offset: 0x2b68
	// Line 1620, Address: 0x25b53c, Func Offset: 0x2b6c
	// Line 1623, Address: 0x25b558, Func Offset: 0x2b88
	// Line 1625, Address: 0x25b564, Func Offset: 0x2b94
	// Line 1628, Address: 0x25b56c, Func Offset: 0x2b9c
	// Line 1632, Address: 0x25b574, Func Offset: 0x2ba4
	// Line 1628, Address: 0x25b578, Func Offset: 0x2ba8
	// Line 1632, Address: 0x25b57c, Func Offset: 0x2bac
	// Line 1634, Address: 0x25b588, Func Offset: 0x2bb8
	// Line 1636, Address: 0x25b5b0, Func Offset: 0x2be0
	// Line 1637, Address: 0x25b5d0, Func Offset: 0x2c00
	// Line 1640, Address: 0x25b5d8, Func Offset: 0x2c08
	// Line 1642, Address: 0x25b5e8, Func Offset: 0x2c18
	// Line 1644, Address: 0x25b60c, Func Offset: 0x2c3c
	// Line 1645, Address: 0x25b614, Func Offset: 0x2c44
	// Line 1646, Address: 0x25b620, Func Offset: 0x2c50
	// Line 1647, Address: 0x25b628, Func Offset: 0x2c58
	// Line 1649, Address: 0x25b64c, Func Offset: 0x2c7c
	// Line 1650, Address: 0x25b654, Func Offset: 0x2c84
	// Line 1651, Address: 0x25b660, Func Offset: 0x2c90
	// Line 1652, Address: 0x25b668, Func Offset: 0x2c98
	// Line 1654, Address: 0x25b670, Func Offset: 0x2ca0
	// Line 1655, Address: 0x25b678, Func Offset: 0x2ca8
	// Line 1658, Address: 0x25b684, Func Offset: 0x2cb4
	// Line 1659, Address: 0x25b68c, Func Offset: 0x2cbc
	// Line 1662, Address: 0x25b698, Func Offset: 0x2cc8
	// Line 1665, Address: 0x25b69c, Func Offset: 0x2ccc
	// Line 1662, Address: 0x25b6a0, Func Offset: 0x2cd0
	// Line 1665, Address: 0x25b6a4, Func Offset: 0x2cd4
	// Line 1662, Address: 0x25b6a8, Func Offset: 0x2cd8
	// Line 1666, Address: 0x25b6b0, Func Offset: 0x2ce0
	// Line 1664, Address: 0x25b6b4, Func Offset: 0x2ce4
	// Line 1662, Address: 0x25b6b8, Func Offset: 0x2ce8
	// Line 1665, Address: 0x25b6e4, Func Offset: 0x2d14
	// Line 1662, Address: 0x25b6e8, Func Offset: 0x2d18
	// Line 1664, Address: 0x25b6f0, Func Offset: 0x2d20
	// Line 1662, Address: 0x25b6f4, Func Offset: 0x2d24
	// Line 1664, Address: 0x25b704, Func Offset: 0x2d34
	// Line 1665, Address: 0x25b70c, Func Offset: 0x2d3c
	// Line 1662, Address: 0x25b710, Func Offset: 0x2d40
	// Line 1665, Address: 0x25b714, Func Offset: 0x2d44
	// Line 1666, Address: 0x25b734, Func Offset: 0x2d64
	// Line 1667, Address: 0x25b744, Func Offset: 0x2d74
	// Line 1670, Address: 0x25b768, Func Offset: 0x2d98
	// Line 1671, Address: 0x25b76c, Func Offset: 0x2d9c
	// Line 1672, Address: 0x25b770, Func Offset: 0x2da0
	// Line 1671, Address: 0x25b774, Func Offset: 0x2da4
	// Line 1673, Address: 0x25b778, Func Offset: 0x2da8
	// Line 1670, Address: 0x25b784, Func Offset: 0x2db4
	// Line 1672, Address: 0x25b788, Func Offset: 0x2db8
	// Line 1670, Address: 0x25b78c, Func Offset: 0x2dbc
	// Line 1671, Address: 0x25b79c, Func Offset: 0x2dcc
	// Line 1672, Address: 0x25b7a0, Func Offset: 0x2dd0
	// Line 1670, Address: 0x25b7a8, Func Offset: 0x2dd8
	// Line 1671, Address: 0x25b7ac, Func Offset: 0x2ddc
	// Line 1672, Address: 0x25b7b0, Func Offset: 0x2de0
	// Line 1673, Address: 0x25b7c4, Func Offset: 0x2df4
	// Line 1676, Address: 0x25b7e4, Func Offset: 0x2e14
	// Line 1677, Address: 0x25b7ec, Func Offset: 0x2e1c
	// Line 1679, Address: 0x25b7fc, Func Offset: 0x2e2c
	// Line 1681, Address: 0x25b814, Func Offset: 0x2e44
	// Line 1682, Address: 0x25b81c, Func Offset: 0x2e4c
	// Line 1684, Address: 0x25b844, Func Offset: 0x2e74
	// Line 1685, Address: 0x25b84c, Func Offset: 0x2e7c
	// Line 1687, Address: 0x25b858, Func Offset: 0x2e88
	// Line 1688, Address: 0x25b85c, Func Offset: 0x2e8c
	// Line 1687, Address: 0x25b864, Func Offset: 0x2e94
	// Line 1688, Address: 0x25b868, Func Offset: 0x2e98
	// Line 1690, Address: 0x25b874, Func Offset: 0x2ea4
	// Line 1692, Address: 0x25b894, Func Offset: 0x2ec4
	// Line 1693, Address: 0x25b8b0, Func Offset: 0x2ee0
	// Line 1692, Address: 0x25b8b4, Func Offset: 0x2ee4
	// Line 1693, Address: 0x25b8c4, Func Offset: 0x2ef4
	// Line 1692, Address: 0x25b8c8, Func Offset: 0x2ef8
	// Line 1693, Address: 0x25b8cc, Func Offset: 0x2efc
	// Line 1692, Address: 0x25b8d0, Func Offset: 0x2f00
	// Line 1693, Address: 0x25b928, Func Offset: 0x2f58
	// Line 1694, Address: 0x25b930, Func Offset: 0x2f60
	// Line 1695, Address: 0x25b9bc, Func Offset: 0x2fec
	// Line 1696, Address: 0x25b9c8, Func Offset: 0x2ff8
	// Line 1697, Address: 0x25b9f4, Func Offset: 0x3024
	// Line 1700, Address: 0x25ba08, Func Offset: 0x3038
	// Line 1701, Address: 0x25ba34, Func Offset: 0x3064
	// Line 1702, Address: 0x25ba40, Func Offset: 0x3070
	// Line 1704, Address: 0x25ba48, Func Offset: 0x3078
	// Line 1707, Address: 0x25ba58, Func Offset: 0x3088
	// Line 1708, Address: 0x25ba84, Func Offset: 0x30b4
	// Line 1709, Address: 0x25ba88, Func Offset: 0x30b8
	// Line 1708, Address: 0x25ba8c, Func Offset: 0x30bc
	// Line 1709, Address: 0x25ba90, Func Offset: 0x30c0
	// Line 1712, Address: 0x25baa4, Func Offset: 0x30d4
	// Line 1716, Address: 0x25bacc, Func Offset: 0x30fc
	// Line 1715, Address: 0x25bad0, Func Offset: 0x3100
	// Line 1716, Address: 0x25bad4, Func Offset: 0x3104
	// Line 1720, Address: 0x25baf8, Func Offset: 0x3128
	// Line 1724, Address: 0x25bb00, Func Offset: 0x3130
	// Line 1726, Address: 0x25bb1c, Func Offset: 0x314c
	// Line 1728, Address: 0x25bb38, Func Offset: 0x3168
	// Line 1736, Address: 0x25bd30, Func Offset: 0x3360
	// Line 1728, Address: 0x25bd34, Func Offset: 0x3364
	// Line 1736, Address: 0x25bd38, Func Offset: 0x3368
	// Line 1738, Address: 0x25bd44, Func Offset: 0x3374
	// Line 1740, Address: 0x25bd50, Func Offset: 0x3380
	// Line 1741, Address: 0x25bd78, Func Offset: 0x33a8
	// Line 1744, Address: 0x25bda0, Func Offset: 0x33d0
	// Line 1746, Address: 0x25bdac, Func Offset: 0x33dc
	// Line 1747, Address: 0x25bdb8, Func Offset: 0x33e8
	// Line 1750, Address: 0x25bdc0, Func Offset: 0x33f0
	// Line 1754, Address: 0x25bdc8, Func Offset: 0x33f8
	// Line 1750, Address: 0x25bdcc, Func Offset: 0x33fc
	// Line 1754, Address: 0x25bdd0, Func Offset: 0x3400
	// Line 1756, Address: 0x25bddc, Func Offset: 0x340c
	// Line 1762, Address: 0x25bde8, Func Offset: 0x3418
	// Line 1764, Address: 0x25bdf4, Func Offset: 0x3424
	// Line 1765, Address: 0x25be1c, Func Offset: 0x344c
	// Line 1767, Address: 0x25be48, Func Offset: 0x3478
	// Line 1769, Address: 0x25be78, Func Offset: 0x34a8
	// Line 1771, Address: 0x25beb0, Func Offset: 0x34e0
	// Line 1772, Address: 0x25bedc, Func Offset: 0x350c
	// Line 1775, Address: 0x25bf04, Func Offset: 0x3534
	// Line 1776, Address: 0x25bf0c, Func Offset: 0x353c
	// Line 1779, Address: 0x25bf14, Func Offset: 0x3544
	// Line 1782, Address: 0x25bf1c, Func Offset: 0x354c
	// Line 1783, Address: 0x25bf24, Func Offset: 0x3554
	// Line 1785, Address: 0x25bf30, Func Offset: 0x3560
	// Line 1787, Address: 0x25bf3c, Func Offset: 0x356c
	// Line 1790, Address: 0x25bf48, Func Offset: 0x3578
	// Line 1791, Address: 0x25bf50, Func Offset: 0x3580
	// Line 1792, Address: 0x25bf5c, Func Offset: 0x358c
	// Line 1793, Address: 0x25bf64, Func Offset: 0x3594
	// Line 1795, Address: 0x25bf8c, Func Offset: 0x35bc
	// Line 1800, Address: 0x25bf94, Func Offset: 0x35c4
	// Line 1805, Address: 0x25bf9c, Func Offset: 0x35cc
	// Line 1806, Address: 0x25bfb4, Func Offset: 0x35e4
	// Line 1808, Address: 0x25bfc0, Func Offset: 0x35f0
	// Line 1809, Address: 0x25bfc8, Func Offset: 0x35f8
	// Line 1810, Address: 0x25bfcc, Func Offset: 0x35fc
	// Line 1809, Address: 0x25bfd0, Func Offset: 0x3600
	// Line 1810, Address: 0x25bfd4, Func Offset: 0x3604
	// Line 1811, Address: 0x25bff0, Func Offset: 0x3620
	// Line 1814, Address: 0x25c07c, Func Offset: 0x36ac
	// Line 1818, Address: 0x25c084, Func Offset: 0x36b4
	// Line 1820, Address: 0x25c098, Func Offset: 0x36c8
	// Line 1822, Address: 0x25c0a4, Func Offset: 0x36d4
	// Line 1826, Address: 0x25c0c8, Func Offset: 0x36f8
	// Line 1831, Address: 0x25c0d0, Func Offset: 0x3700
	// Line 1833, Address: 0x25c0dc, Func Offset: 0x370c
	// Line 1836, Address: 0x25c0e4, Func Offset: 0x3714
	// Line 1840, Address: 0x25c0ec, Func Offset: 0x371c
	// Line 1841, Address: 0x25c0fc, Func Offset: 0x372c
	// Line 1852, Address: 0x25c104, Func Offset: 0x3734
	// Line 1854, Address: 0x25c110, Func Offset: 0x3740
	// Line 1857, Address: 0x25c148, Func Offset: 0x3778
	// Func End, Address: 0x25c16c, Func Offset: 0x379c
}

// FeetFXUpdate__12zNMEFrogfishFf
// Start address: 0x25c180
void zNMEFrogfish::FeetFXUpdate(float32 dt)
{
	float32 tym_animCurr;
	float32 tym_animDur;
	float32 tym_animPlusTime;
	uint8 puffLeft;
	uint8 puffRight;
	xVec3 vel;
	xVec3 pos_emit;
	xVec3 dir_emit;
	xMat4x3* mat_bone;
	xMat4x3* mat_bone;
	xMat4x3* mat_bone;
	// Line 876, Address: 0x25c180, Func Offset: 0
	// Line 877, Address: 0x25c1c8, Func Offset: 0x48
	// Line 878, Address: 0x25c1cc, Func Offset: 0x4c
	// Line 881, Address: 0x25c200, Func Offset: 0x80
	// Line 882, Address: 0x25c204, Func Offset: 0x84
	// Line 881, Address: 0x25c208, Func Offset: 0x88
	// Line 882, Address: 0x25c20c, Func Offset: 0x8c
	// Line 883, Address: 0x25c218, Func Offset: 0x98
	// Line 882, Address: 0x25c21c, Func Offset: 0x9c
	// Line 883, Address: 0x25c224, Func Offset: 0xa4
	// Line 879, Address: 0x25c228, Func Offset: 0xa8
	// Line 880, Address: 0x25c22c, Func Offset: 0xac
	// Line 881, Address: 0x25c230, Func Offset: 0xb0
	// Line 882, Address: 0x25c234, Func Offset: 0xb4
	// Line 883, Address: 0x25c24c, Func Offset: 0xcc
	// Line 882, Address: 0x25c254, Func Offset: 0xd4
	// Line 883, Address: 0x25c260, Func Offset: 0xe0
	// Line 882, Address: 0x25c268, Func Offset: 0xe8
	// Line 886, Address: 0x25c270, Func Offset: 0xf0
	// Line 882, Address: 0x25c274, Func Offset: 0xf4
	// Line 886, Address: 0x25c278, Func Offset: 0xf8
	// Line 883, Address: 0x25c27c, Func Offset: 0xfc
	// Line 882, Address: 0x25c284, Func Offset: 0x104
	// Line 886, Address: 0x25c288, Func Offset: 0x108
	// Line 888, Address: 0x25c2a0, Func Offset: 0x120
	// Line 890, Address: 0x25c2bc, Func Offset: 0x13c
	// Line 891, Address: 0x25c2c4, Func Offset: 0x144
	// Line 893, Address: 0x25c2d4, Func Offset: 0x154
	// Line 896, Address: 0x25c2fc, Func Offset: 0x17c
	// Line 897, Address: 0x25c32c, Func Offset: 0x1ac
	// Line 898, Address: 0x25c340, Func Offset: 0x1c0
	// Line 900, Address: 0x25c35c, Func Offset: 0x1dc
	// Line 901, Address: 0x25c364, Func Offset: 0x1e4
	// Line 903, Address: 0x25c378, Func Offset: 0x1f8
	// Line 906, Address: 0x25c39c, Func Offset: 0x21c
	// Line 908, Address: 0x25c3c4, Func Offset: 0x244
	// Line 909, Address: 0x25c3cc, Func Offset: 0x24c
	// Line 911, Address: 0x25c3e8, Func Offset: 0x268
	// Line 912, Address: 0x25c400, Func Offset: 0x280
	// Line 913, Address: 0x25c430, Func Offset: 0x2b0
	// Line 914, Address: 0x25c448, Func Offset: 0x2c8
	// Line 917, Address: 0x25c468, Func Offset: 0x2e8
	// Line 920, Address: 0x25c478, Func Offset: 0x2f8
	// Line 921, Address: 0x25c480, Func Offset: 0x300
	// Line 923, Address: 0x25c484, Func Offset: 0x304
	// Line 921, Address: 0x25c488, Func Offset: 0x308
	// Line 922, Address: 0x25c48c, Func Offset: 0x30c
	// Line 921, Address: 0x25c490, Func Offset: 0x310
	// Line 922, Address: 0x25c494, Func Offset: 0x314
	// Line 923, Address: 0x25c49c, Func Offset: 0x31c
	// Line 924, Address: 0x25c4e4, Func Offset: 0x364
	// Line 925, Address: 0x25c510, Func Offset: 0x390
	// Line 927, Address: 0x25c518, Func Offset: 0x398
	// Line 929, Address: 0x25c51c, Func Offset: 0x39c
	// Line 927, Address: 0x25c520, Func Offset: 0x3a0
	// Line 928, Address: 0x25c524, Func Offset: 0x3a4
	// Line 927, Address: 0x25c528, Func Offset: 0x3a8
	// Line 928, Address: 0x25c52c, Func Offset: 0x3ac
	// Line 929, Address: 0x25c534, Func Offset: 0x3b4
	// Line 930, Address: 0x25c57c, Func Offset: 0x3fc
	// Line 932, Address: 0x25c5ac, Func Offset: 0x42c
	// Line 933, Address: 0x25c600, Func Offset: 0x480
	// Line 935, Address: 0x25c60c, Func Offset: 0x48c
	// Line 933, Address: 0x25c610, Func Offset: 0x490
	// Line 935, Address: 0x25c614, Func Offset: 0x494
	// Line 936, Address: 0x25c624, Func Offset: 0x4a4
	// Line 933, Address: 0x25c62c, Func Offset: 0x4ac
	// Line 935, Address: 0x25c654, Func Offset: 0x4d4
	// Line 936, Address: 0x25c6a8, Func Offset: 0x528
	// Line 935, Address: 0x25c6ac, Func Offset: 0x52c
	// Line 936, Address: 0x25c6b4, Func Offset: 0x534
	// Line 935, Address: 0x25c6bc, Func Offset: 0x53c
	// Line 936, Address: 0x25c6c0, Func Offset: 0x540
	// Line 937, Address: 0x25c724, Func Offset: 0x5a4
	// Line 938, Address: 0x25c72c, Func Offset: 0x5ac
	// Line 940, Address: 0x25c7b8, Func Offset: 0x638
	// Line 942, Address: 0x25c840, Func Offset: 0x6c0
	// Line 945, Address: 0x25c854, Func Offset: 0x6d4
	// Line 952, Address: 0x25c868, Func Offset: 0x6e8
	// Line 953, Address: 0x25c8bc, Func Offset: 0x73c
	// Line 956, Address: 0x25c8c8, Func Offset: 0x748
	// Line 954, Address: 0x25c8cc, Func Offset: 0x74c
	// Line 956, Address: 0x25c8dc, Func Offset: 0x75c
	// Line 953, Address: 0x25c8e4, Func Offset: 0x764
	// Line 954, Address: 0x25c900, Func Offset: 0x780
	// Line 955, Address: 0x25c954, Func Offset: 0x7d4
	// Line 954, Address: 0x25c958, Func Offset: 0x7d8
	// Line 955, Address: 0x25c960, Func Offset: 0x7e0
	// Line 954, Address: 0x25c968, Func Offset: 0x7e8
	// Line 955, Address: 0x25c96c, Func Offset: 0x7ec
	// Line 956, Address: 0x25c990, Func Offset: 0x810
	// Line 959, Address: 0x25c998, Func Offset: 0x818
	// Line 956, Address: 0x25c99c, Func Offset: 0x81c
	// Line 959, Address: 0x25c9a0, Func Offset: 0x820
	// Line 964, Address: 0x25c9ac, Func Offset: 0x82c
	// Line 963, Address: 0x25c9b0, Func Offset: 0x830
	// Line 964, Address: 0x25c9b4, Func Offset: 0x834
	// Line 965, Address: 0x25c9b8, Func Offset: 0x838
	// Line 964, Address: 0x25c9bc, Func Offset: 0x83c
	// Line 963, Address: 0x25c9cc, Func Offset: 0x84c
	// Line 964, Address: 0x25c9d0, Func Offset: 0x850
	// Line 963, Address: 0x25c9dc, Func Offset: 0x85c
	// Line 965, Address: 0x25c9e0, Func Offset: 0x860
	// Line 966, Address: 0x25ca28, Func Offset: 0x8a8
	// Line 967, Address: 0x25ca58, Func Offset: 0x8d8
	// Line 968, Address: 0x25caa8, Func Offset: 0x928
	// Line 970, Address: 0x25cabc, Func Offset: 0x93c
	// Line 968, Address: 0x25cac0, Func Offset: 0x940
	// Line 970, Address: 0x25cac4, Func Offset: 0x944
	// Line 968, Address: 0x25cac8, Func Offset: 0x948
	// Line 970, Address: 0x25cacc, Func Offset: 0x94c
	// Line 968, Address: 0x25cad0, Func Offset: 0x950
	// Line 970, Address: 0x25cad4, Func Offset: 0x954
	// Line 968, Address: 0x25cad8, Func Offset: 0x958
	// Line 971, Address: 0x25cadc, Func Offset: 0x95c
	// Line 972, Address: 0x25cae4, Func Offset: 0x964
	// Line 968, Address: 0x25cae8, Func Offset: 0x968
	// Line 972, Address: 0x25caec, Func Offset: 0x96c
	// Line 968, Address: 0x25caf4, Func Offset: 0x974
	// Line 970, Address: 0x25cb14, Func Offset: 0x994
	// Line 971, Address: 0x25cb68, Func Offset: 0x9e8
	// Line 970, Address: 0x25cb6c, Func Offset: 0x9ec
	// Line 971, Address: 0x25cb74, Func Offset: 0x9f4
	// Line 970, Address: 0x25cb7c, Func Offset: 0x9fc
	// Line 971, Address: 0x25cb80, Func Offset: 0xa00
	// Line 972, Address: 0x25cbe4, Func Offset: 0xa64
	// Line 974, Address: 0x25cbec, Func Offset: 0xa6c
	// Line 975, Address: 0x25cbf0, Func Offset: 0xa70
	// Line 974, Address: 0x25cbf8, Func Offset: 0xa78
	// Line 975, Address: 0x25cbfc, Func Offset: 0xa7c
	// Line 977, Address: 0x25cc0c, Func Offset: 0xa8c
	// Line 978, Address: 0x25cc14, Func Offset: 0xa94
	// Line 979, Address: 0x25cc28, Func Offset: 0xaa8
	// Line 984, Address: 0x25cc30, Func Offset: 0xab0
	// Line 983, Address: 0x25cc34, Func Offset: 0xab4
	// Line 984, Address: 0x25cc38, Func Offset: 0xab8
	// Line 985, Address: 0x25cc3c, Func Offset: 0xabc
	// Line 984, Address: 0x25cc40, Func Offset: 0xac0
	// Line 983, Address: 0x25cc50, Func Offset: 0xad0
	// Line 984, Address: 0x25cc54, Func Offset: 0xad4
	// Line 983, Address: 0x25cc60, Func Offset: 0xae0
	// Line 985, Address: 0x25cc64, Func Offset: 0xae4
	// Line 986, Address: 0x25ccac, Func Offset: 0xb2c
	// Line 987, Address: 0x25ccdc, Func Offset: 0xb5c
	// Line 988, Address: 0x25cd2c, Func Offset: 0xbac
	// Line 991, Address: 0x25cd30, Func Offset: 0xbb0
	// Line 990, Address: 0x25cd38, Func Offset: 0xbb8
	// Line 992, Address: 0x25cd3c, Func Offset: 0xbbc
	// Line 988, Address: 0x25cd44, Func Offset: 0xbc4
	// Line 992, Address: 0x25cd48, Func Offset: 0xbc8
	// Line 988, Address: 0x25cd4c, Func Offset: 0xbcc
	// Line 990, Address: 0x25cd58, Func Offset: 0xbd8
	// Line 988, Address: 0x25cd5c, Func Offset: 0xbdc
	// Line 990, Address: 0x25cd80, Func Offset: 0xc00
	// Line 991, Address: 0x25cdcc, Func Offset: 0xc4c
	// Line 992, Address: 0x25ce28, Func Offset: 0xca8
	// Line 993, Address: 0x25ce30, Func Offset: 0xcb0
	// Line 994, Address: 0x25ce38, Func Offset: 0xcb8
	// Line 996, Address: 0x25ce44, Func Offset: 0xcc4
	// Line 997, Address: 0x25ce48, Func Offset: 0xcc8
	// Line 996, Address: 0x25ce50, Func Offset: 0xcd0
	// Line 997, Address: 0x25ce54, Func Offset: 0xcd4
	// Line 999, Address: 0x25ce64, Func Offset: 0xce4
	// Line 1000, Address: 0x25ce6c, Func Offset: 0xcec
	// Line 1001, Address: 0x25ce80, Func Offset: 0xd00
	// Line 1004, Address: 0x25ce8c, Func Offset: 0xd0c
	// Func End, Address: 0x25cec8, Func Offset: 0xd48
}

// SoundInitAssetTable__12zNMEFrogfishFv
// Start address: 0x25ced0
void zNMEFrogfish::SoundInitAssetTable()
{
	// Line 768, Address: 0x25ced0, Func Offset: 0
	// Line 769, Address: 0x25ced4, Func Offset: 0x4
	// Line 768, Address: 0x25ced8, Func Offset: 0x8
	// Line 769, Address: 0x25cedc, Func Offset: 0xc
	// Line 768, Address: 0x25cee0, Func Offset: 0x10
	// Line 769, Address: 0x25cee8, Func Offset: 0x18
	// Line 770, Address: 0x25cef0, Func Offset: 0x20
	// Line 771, Address: 0x25cf04, Func Offset: 0x34
	// Line 770, Address: 0x25cf08, Func Offset: 0x38
	// Line 771, Address: 0x25cf0c, Func Offset: 0x3c
	// Line 772, Address: 0x25cf1c, Func Offset: 0x4c
	// Line 771, Address: 0x25cf20, Func Offset: 0x50
	// Line 772, Address: 0x25cf24, Func Offset: 0x54
	// Line 773, Address: 0x25cf34, Func Offset: 0x64
	// Line 772, Address: 0x25cf38, Func Offset: 0x68
	// Line 773, Address: 0x25cf3c, Func Offset: 0x6c
	// Line 774, Address: 0x25cf4c, Func Offset: 0x7c
	// Line 773, Address: 0x25cf50, Func Offset: 0x80
	// Line 774, Address: 0x25cf54, Func Offset: 0x84
	// Line 775, Address: 0x25cf64, Func Offset: 0x94
	// Line 774, Address: 0x25cf68, Func Offset: 0x98
	// Line 775, Address: 0x25cf6c, Func Offset: 0x9c
	// Line 776, Address: 0x25cf7c, Func Offset: 0xac
	// Line 775, Address: 0x25cf80, Func Offset: 0xb0
	// Line 776, Address: 0x25cf84, Func Offset: 0xb4
	// Line 777, Address: 0x25cf94, Func Offset: 0xc4
	// Line 776, Address: 0x25cf98, Func Offset: 0xc8
	// Line 777, Address: 0x25cf9c, Func Offset: 0xcc
	// Line 778, Address: 0x25cfac, Func Offset: 0xdc
	// Line 777, Address: 0x25cfb0, Func Offset: 0xe0
	// Line 778, Address: 0x25cfb4, Func Offset: 0xe4
	// Line 779, Address: 0x25cfc4, Func Offset: 0xf4
	// Line 778, Address: 0x25cfc8, Func Offset: 0xf8
	// Line 779, Address: 0x25cfcc, Func Offset: 0xfc
	// Line 780, Address: 0x25cfdc, Func Offset: 0x10c
	// Line 779, Address: 0x25cfe0, Func Offset: 0x110
	// Line 780, Address: 0x25cfe4, Func Offset: 0x114
	// Line 781, Address: 0x25cff4, Func Offset: 0x124
	// Line 780, Address: 0x25cff8, Func Offset: 0x128
	// Line 781, Address: 0x25cffc, Func Offset: 0x12c
	// Line 782, Address: 0x25d00c, Func Offset: 0x13c
	// Line 781, Address: 0x25d010, Func Offset: 0x140
	// Line 782, Address: 0x25d014, Func Offset: 0x144
	// Line 783, Address: 0x25d024, Func Offset: 0x154
	// Line 782, Address: 0x25d028, Func Offset: 0x158
	// Line 783, Address: 0x25d02c, Func Offset: 0x15c
	// Line 784, Address: 0x25d03c, Func Offset: 0x16c
	// Line 783, Address: 0x25d040, Func Offset: 0x170
	// Line 784, Address: 0x25d044, Func Offset: 0x174
	// Line 785, Address: 0x25d054, Func Offset: 0x184
	// Line 784, Address: 0x25d058, Func Offset: 0x188
	// Line 785, Address: 0x25d05c, Func Offset: 0x18c
	// Line 786, Address: 0x25d06c, Func Offset: 0x19c
	// Line 785, Address: 0x25d070, Func Offset: 0x1a0
	// Line 786, Address: 0x25d074, Func Offset: 0x1a4
	// Line 787, Address: 0x25d084, Func Offset: 0x1b4
	// Line 786, Address: 0x25d088, Func Offset: 0x1b8
	// Line 787, Address: 0x25d08c, Func Offset: 0x1bc
	// Line 788, Address: 0x25d09c, Func Offset: 0x1cc
	// Line 787, Address: 0x25d0a0, Func Offset: 0x1d0
	// Line 788, Address: 0x25d0a4, Func Offset: 0x1d4
	// Line 789, Address: 0x25d0b4, Func Offset: 0x1e4
	// Line 788, Address: 0x25d0b8, Func Offset: 0x1e8
	// Line 789, Address: 0x25d0bc, Func Offset: 0x1ec
	// Line 790, Address: 0x25d0d0, Func Offset: 0x200
	// Func End, Address: 0x25d0e0, Func Offset: 0x210
}

// UpdateCam__12zNMEFrogfishFf
// Start address: 0x25d0e0
void zNMEFrogfish::UpdateCam(float32 dt)
{
	zBossCam_Binary* gzBinaryCam'288;
	zBossCam_Binary theStaticBinaryCam;
	int8 @28501;
	// Line 676, Address: 0x25d0e0, Func Offset: 0
	// Line 677, Address: 0x25d0f4, Func Offset: 0x14
	// Line 679, Address: 0x25d2bc, Func Offset: 0x1dc
	// Line 682, Address: 0x25d2c8, Func Offset: 0x1e8
	// Line 686, Address: 0x25d2f0, Func Offset: 0x210
	// Line 687, Address: 0x25d314, Func Offset: 0x234
	// Line 688, Address: 0x25d364, Func Offset: 0x284
	// Line 689, Address: 0x25d36c, Func Offset: 0x28c
	// Line 690, Address: 0x25d370, Func Offset: 0x290
	// Line 688, Address: 0x25d374, Func Offset: 0x294
	// Line 689, Address: 0x25d3a4, Func Offset: 0x2c4
	// Line 688, Address: 0x25d3a8, Func Offset: 0x2c8
	// Line 689, Address: 0x25d3ac, Func Offset: 0x2cc
	// Line 692, Address: 0x25d3c8, Func Offset: 0x2e8
	// Line 695, Address: 0x25d3d0, Func Offset: 0x2f0
	// Line 696, Address: 0x25d3e0, Func Offset: 0x300
	// Line 695, Address: 0x25d3e8, Func Offset: 0x308
	// Line 696, Address: 0x25d3ec, Func Offset: 0x30c
	// Line 697, Address: 0x25d40c, Func Offset: 0x32c
	// Line 699, Address: 0x25d414, Func Offset: 0x334
	// Line 703, Address: 0x25d41c, Func Offset: 0x33c
	// Line 704, Address: 0x25d428, Func Offset: 0x348
	// Line 703, Address: 0x25d430, Func Offset: 0x350
	// Line 704, Address: 0x25d46c, Func Offset: 0x38c
	// Line 705, Address: 0x25d48c, Func Offset: 0x3ac
	// Line 706, Address: 0x25d4dc, Func Offset: 0x3fc
	// Line 707, Address: 0x25d4e4, Func Offset: 0x404
	// Line 706, Address: 0x25d4ec, Func Offset: 0x40c
	// Line 707, Address: 0x25d520, Func Offset: 0x440
	// Line 708, Address: 0x25d52c, Func Offset: 0x44c
	// Line 709, Address: 0x25d53c, Func Offset: 0x45c
	// Line 710, Address: 0x25d548, Func Offset: 0x468
	// Line 711, Address: 0x25d54c, Func Offset: 0x46c
	// Line 713, Address: 0x25d554, Func Offset: 0x474
	// Line 717, Address: 0x25d55c, Func Offset: 0x47c
	// Line 718, Address: 0x25d560, Func Offset: 0x480
	// Line 717, Address: 0x25d56c, Func Offset: 0x48c
	// Line 718, Address: 0x25d578, Func Offset: 0x498
	// Line 720, Address: 0x25d580, Func Offset: 0x4a0
	// Line 725, Address: 0x25d588, Func Offset: 0x4a8
	// Line 726, Address: 0x25d594, Func Offset: 0x4b4
	// Line 725, Address: 0x25d59c, Func Offset: 0x4bc
	// Line 726, Address: 0x25d5d8, Func Offset: 0x4f8
	// Line 727, Address: 0x25d5f8, Func Offset: 0x518
	// Line 728, Address: 0x25d648, Func Offset: 0x568
	// Line 729, Address: 0x25d650, Func Offset: 0x570
	// Line 728, Address: 0x25d658, Func Offset: 0x578
	// Line 729, Address: 0x25d68c, Func Offset: 0x5ac
	// Line 730, Address: 0x25d698, Func Offset: 0x5b8
	// Line 731, Address: 0x25d6a8, Func Offset: 0x5c8
	// Line 732, Address: 0x25d6b4, Func Offset: 0x5d4
	// Line 733, Address: 0x25d6b8, Func Offset: 0x5d8
	// Line 735, Address: 0x25d6c0, Func Offset: 0x5e0
	// Line 739, Address: 0x25d6c8, Func Offset: 0x5e8
	// Line 740, Address: 0x25d6cc, Func Offset: 0x5ec
	// Line 739, Address: 0x25d6d8, Func Offset: 0x5f8
	// Line 740, Address: 0x25d6e4, Func Offset: 0x604
	// Line 742, Address: 0x25d6ec, Func Offset: 0x60c
	// Line 746, Address: 0x25d6f4, Func Offset: 0x614
	// Line 747, Address: 0x25d700, Func Offset: 0x620
	// Line 746, Address: 0x25d708, Func Offset: 0x628
	// Line 747, Address: 0x25d744, Func Offset: 0x664
	// Line 748, Address: 0x25d764, Func Offset: 0x684
	// Line 749, Address: 0x25d7b4, Func Offset: 0x6d4
	// Line 750, Address: 0x25d7bc, Func Offset: 0x6dc
	// Line 749, Address: 0x25d7c4, Func Offset: 0x6e4
	// Line 750, Address: 0x25d7f8, Func Offset: 0x718
	// Line 751, Address: 0x25d804, Func Offset: 0x724
	// Line 752, Address: 0x25d814, Func Offset: 0x734
	// Line 753, Address: 0x25d820, Func Offset: 0x740
	// Line 754, Address: 0x25d824, Func Offset: 0x744
	// Line 762, Address: 0x25d830, Func Offset: 0x750
	// Func End, Address: 0x25d844, Func Offset: 0x764
}

// SetCamState__12zNMEFrogfishF18eFFBossCameraState
// Start address: 0x25d850
void zNMEFrogfish::SetCamState(eFFBossCameraState newState)
{
	xVec3 tongueLoc;
	// Line 597, Address: 0x25d850, Func Offset: 0
	// Line 598, Address: 0x25d85c, Func Offset: 0xc
	// Line 601, Address: 0x25d868, Func Offset: 0x18
	// Line 603, Address: 0x25d86c, Func Offset: 0x1c
	// Line 607, Address: 0x25d898, Func Offset: 0x48
	// Line 610, Address: 0x25d8a0, Func Offset: 0x50
	// Line 613, Address: 0x25d8a8, Func Offset: 0x58
	// Line 614, Address: 0x25d8b0, Func Offset: 0x60
	// Line 617, Address: 0x25d8b8, Func Offset: 0x68
	// Line 621, Address: 0x25d8c0, Func Offset: 0x70
	// Line 623, Address: 0x25d8c4, Func Offset: 0x74
	// Line 621, Address: 0x25d8cc, Func Offset: 0x7c
	// Line 623, Address: 0x25d8ec, Func Offset: 0x9c
	// Line 624, Address: 0x25d8f4, Func Offset: 0xa4
	// Line 626, Address: 0x25d8f8, Func Offset: 0xa8
	// Line 624, Address: 0x25d8fc, Func Offset: 0xac
	// Line 627, Address: 0x25d910, Func Offset: 0xc0
	// Line 626, Address: 0x25d918, Func Offset: 0xc8
	// Line 624, Address: 0x25d91c, Func Offset: 0xcc
	// Line 627, Address: 0x25d920, Func Offset: 0xd0
	// Line 624, Address: 0x25d924, Func Offset: 0xd4
	// Line 625, Address: 0x25d954, Func Offset: 0x104
	// Line 626, Address: 0x25d958, Func Offset: 0x108
	// Line 629, Address: 0x25d95c, Func Offset: 0x10c
	// Line 634, Address: 0x25d964, Func Offset: 0x114
	// Line 636, Address: 0x25d968, Func Offset: 0x118
	// Line 641, Address: 0x25d970, Func Offset: 0x120
	// Line 645, Address: 0x25d974, Func Offset: 0x124
	// Line 641, Address: 0x25d978, Func Offset: 0x128
	// Line 643, Address: 0x25d98c, Func Offset: 0x13c
	// Line 644, Address: 0x25d9b4, Func Offset: 0x164
	// Line 645, Address: 0x25d9b8, Func Offset: 0x168
	// Line 649, Address: 0x25d9bc, Func Offset: 0x16c
	// Line 654, Address: 0x25d9c4, Func Offset: 0x174
	// Line 656, Address: 0x25d9c8, Func Offset: 0x178
	// Line 661, Address: 0x25d9d0, Func Offset: 0x180
	// Line 664, Address: 0x25d9d4, Func Offset: 0x184
	// Line 661, Address: 0x25d9d8, Func Offset: 0x188
	// Line 662, Address: 0x25d9ec, Func Offset: 0x19c
	// Line 663, Address: 0x25da14, Func Offset: 0x1c4
	// Line 664, Address: 0x25da18, Func Offset: 0x1c8
	// Line 665, Address: 0x25da1c, Func Offset: 0x1cc
	// Line 673, Address: 0x25da20, Func Offset: 0x1d0
	// Func End, Address: 0x25da30, Func Offset: 0x1e0
}

// Destroy__12zNMEFrogfishFv
// Start address: 0x25da30
void zNMEFrogfish::Destroy()
{
	// Line 549, Address: 0x25da30, Func Offset: 0
	// Line 551, Address: 0x25da3c, Func Offset: 0xc
	// Line 552, Address: 0x25da4c, Func Offset: 0x1c
	// Line 553, Address: 0x25da58, Func Offset: 0x28
	// Line 554, Address: 0x25da6c, Func Offset: 0x3c
	// Line 555, Address: 0x25da70, Func Offset: 0x40
	// Line 556, Address: 0x25da74, Func Offset: 0x44
	// Func End, Address: 0x25da84, Func Offset: 0x54
}

// Reset__12zNMEFrogfishFv
// Start address: 0x25da90
void zNMEFrogfish::Reset()
{
	// Line 532, Address: 0x25da90, Func Offset: 0
	// Line 533, Address: 0x25daa0, Func Offset: 0x10
	// Line 535, Address: 0x25dd1c, Func Offset: 0x28c
	// Line 537, Address: 0x25dd20, Func Offset: 0x290
	// Line 536, Address: 0x25dd24, Func Offset: 0x294
	// Line 538, Address: 0x25dd28, Func Offset: 0x298
	// Line 537, Address: 0x25dd2c, Func Offset: 0x29c
	// Line 538, Address: 0x25dd30, Func Offset: 0x2a0
	// Line 539, Address: 0x25dd38, Func Offset: 0x2a8
	// Line 542, Address: 0x25dd48, Func Offset: 0x2b8
	// Line 543, Address: 0x25dd4c, Func Offset: 0x2bc
	// Line 545, Address: 0x25dd50, Func Offset: 0x2c0
	// Line 539, Address: 0x25dd5c, Func Offset: 0x2cc
	// Line 540, Address: 0x25dd7c, Func Offset: 0x2ec
	// Line 541, Address: 0x25dd80, Func Offset: 0x2f0
	// Line 542, Address: 0x25dd84, Func Offset: 0x2f4
	// Line 543, Address: 0x25dd88, Func Offset: 0x2f8
	// Line 544, Address: 0x25dd8c, Func Offset: 0x2fc
	// Line 545, Address: 0x25dd90, Func Offset: 0x300
	// Line 546, Address: 0x25dd9c, Func Offset: 0x30c
	// Func End, Address: 0x25ddb0, Func Offset: 0x320
}

// Setup__12zNMEFrogfishFv
// Start address: 0x25ddb0
void zNMEFrogfish::Setup()
{
	int32 i;
	zNPCMgr* npcmgr;
	int8* nam_tongue;
	base* nb;
	// Line 499, Address: 0x25ddb0, Func Offset: 0
	// Line 500, Address: 0x25ddb4, Func Offset: 0x4
	// Line 499, Address: 0x25ddb8, Func Offset: 0x8
	// Line 500, Address: 0x25ddbc, Func Offset: 0xc
	// Line 499, Address: 0x25ddc0, Func Offset: 0x10
	// Line 500, Address: 0x25ddc4, Func Offset: 0x14
	// Line 499, Address: 0x25ddc8, Func Offset: 0x18
	// Line 500, Address: 0x25ddcc, Func Offset: 0x1c
	// Line 499, Address: 0x25ddd0, Func Offset: 0x20
	// Line 500, Address: 0x25ddd8, Func Offset: 0x28
	// Line 502, Address: 0x25de08, Func Offset: 0x58
	// Line 505, Address: 0x25de1c, Func Offset: 0x6c
	// Line 506, Address: 0x25de28, Func Offset: 0x78
	// Line 505, Address: 0x25de30, Func Offset: 0x80
	// Line 506, Address: 0x25de34, Func Offset: 0x84
	// Line 508, Address: 0x25de3c, Func Offset: 0x8c
	// Line 509, Address: 0x25de44, Func Offset: 0x94
	// Line 511, Address: 0x25de58, Func Offset: 0xa8
	// Line 512, Address: 0x25de6c, Func Offset: 0xbc
	// Line 511, Address: 0x25de70, Func Offset: 0xc0
	// Line 512, Address: 0x25de74, Func Offset: 0xc4
	// Line 513, Address: 0x25de88, Func Offset: 0xd8
	// Line 512, Address: 0x25de8c, Func Offset: 0xdc
	// Line 513, Address: 0x25de90, Func Offset: 0xe0
	// Line 514, Address: 0x25dea4, Func Offset: 0xf4
	// Line 513, Address: 0x25dea8, Func Offset: 0xf8
	// Line 514, Address: 0x25deac, Func Offset: 0xfc
	// Line 515, Address: 0x25dec0, Func Offset: 0x110
	// Line 514, Address: 0x25dec4, Func Offset: 0x114
	// Line 515, Address: 0x25dec8, Func Offset: 0x118
	// Line 518, Address: 0x25dedc, Func Offset: 0x12c
	// Line 519, Address: 0x25dee4, Func Offset: 0x134
	// Line 518, Address: 0x25dee8, Func Offset: 0x138
	// Line 520, Address: 0x25deec, Func Offset: 0x13c
	// Line 521, Address: 0x25df00, Func Offset: 0x150
	// Line 528, Address: 0x25df04, Func Offset: 0x154
	// Line 526, Address: 0x25df08, Func Offset: 0x158
	// Line 528, Address: 0x25df0c, Func Offset: 0x15c
	// Line 526, Address: 0x25df10, Func Offset: 0x160
	// Line 528, Address: 0x25df14, Func Offset: 0x164
	// Line 529, Address: 0x25e110, Func Offset: 0x360
	// Func End, Address: 0x25e12c, Func Offset: 0x37c
}

// Init__12zNMEFrogfishFP9xEntAsset
// Start address: 0x25e130
void zNMEFrogfish::Init(xEntAsset* asset)
{
	// Line 483, Address: 0x25e130, Func Offset: 0
	// Line 484, Address: 0x25e144, Func Offset: 0x14
	// Line 487, Address: 0x25e158, Func Offset: 0x28
	// Line 488, Address: 0x25e170, Func Offset: 0x40
	// Line 491, Address: 0x25e188, Func Offset: 0x58
	// Line 492, Address: 0x25e18c, Func Offset: 0x5c
	// Line 491, Address: 0x25e190, Func Offset: 0x60
	// Line 492, Address: 0x25e194, Func Offset: 0x64
	// Line 493, Address: 0x25e198, Func Offset: 0x68
	// Line 494, Address: 0x25e19c, Func Offset: 0x6c
	// Line 496, Address: 0x25e1a0, Func Offset: 0x70
	// Line 487, Address: 0x25e1a8, Func Offset: 0x78
	// Line 496, Address: 0x25e1ac, Func Offset: 0x7c
	// Line 488, Address: 0x25e1bc, Func Offset: 0x8c
	// Line 496, Address: 0x25e1c0, Func Offset: 0x90
	// Func End, Address: 0x25e1e4, Func Offset: 0xb4
}

// DfltVulnFlags__12zNMEFrogfishFv
// Start address: 0x25e1f0
int32 zNMEFrogfish::DfltVulnFlags()
{
	// Line 478, Address: 0x25e1f0, Func Offset: 0
	// Line 479, Address: 0x25e1f4, Func Offset: 0x4
	// Func End, Address: 0x25e1fc, Func Offset: 0xc
}

// CreateConfig__12zNMEFrogfishFPCc
// Start address: 0x25e200
void zNMEFrogfish::CreateConfig()
{
	// Line 367, Address: 0x25e200, Func Offset: 0
	// Line 368, Address: 0x25e204, Func Offset: 0x4
	// Line 367, Address: 0x25e208, Func Offset: 0x8
	// Line 368, Address: 0x25e20c, Func Offset: 0xc
	// Line 367, Address: 0x25e210, Func Offset: 0x10
	// Line 368, Address: 0x25e214, Func Offset: 0x14
	// Line 369, Address: 0x25e220, Func Offset: 0x20
	// Line 368, Address: 0x25e224, Func Offset: 0x24
	// Line 369, Address: 0x25e228, Func Offset: 0x28
	// Line 371, Address: 0x25e23c, Func Offset: 0x3c
	// Line 372, Address: 0x25e26c, Func Offset: 0x6c
	// Line 382, Address: 0x25e274, Func Offset: 0x74
	// Line 371, Address: 0x25e27c, Func Offset: 0x7c
	// Line 383, Address: 0x25e284, Func Offset: 0x84
	// Func End, Address: 0x25e294, Func Offset: 0x94
}

