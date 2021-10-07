



void xAnimPoolFree(xAnimPlay* play);
xAnimPlay* xAnimPoolAlloc(xMemPool* pool, void* object, xAnimTable* table, xModelInstance* modelInst);
void xAnimPoolInit(xMemPool* pool, uint32 count, uint32 singles, uint32 blendFlags, uint32 effectMax);
void xAnimPoolCB(xMemPool* pool, void* data);
void xAnimPlayEval(xAnimPlay* play);
void xAnimPlayUpdate(xAnimPlay* play, float32 timeDelta);
void xAnimPlayStartTransition(xAnimPlay* play, xAnimTransition* transition);
void xAnimPlayChooseTransition(xAnimPlay* play);
void xAnimPlaySetup(xAnimPlay* play, void* object, xAnimTable* table, xModelInstance* modelInst);
void SingleUpdate(xAnimSingle* single, float32 timeDelta);
void xAnimPlaySetState(xAnimSingle* single, xAnimState* state, float32 startTime);
void xAnimPhysicsEval(xAnimPhysicsData* phys, float32 time, xVec3* disp, float32* yaw);
void EffectSingleStop(xAnimSingle* single);
void EffectSingleLoop(xAnimSingle* single);
void EffectSingleRun(xAnimSingle* single);
void EffectSingleDuration(xAnimSingle* single);
void EffectSingleStart(xAnimSingle* single);
xAnimState* xAnimTableGetState(xAnimTable* table, int8* name);
xAnimState* xAnimTableGetStateID(xAnimTable* table, uint32 ID);
xAnimState* xAnimTableAddFileID(xAnimTable* table, xAnimFile* file, uint32 stateID, uint32 subStateID, uint32 subStateCount);
void xAnimTableAddFile(xAnimTable* table, xAnimFile* file, int8* states);
xAnimTransition* xAnimTableNewTransition(xAnimTable* table, int8* source, int8* dest, uint32(*conditional)(xAnimTransition*, xAnimSingle*, void*), uint32(*callback)(xAnimTransition*, xAnimSingle*, void*), uint32 flags, uint32 userFlags, float32 srcTime, float32 destTime, uint16 priority, uint16 queuePriority, float32 fBlendTime, uint16* blendOffset);
void xAnimTableAddTransition(xAnimTable* table, xAnimTransition* tran, int8* source);
void _xAnimTableAddTransition(xAnimTable* table, xAnimTransition* tran, int8* source, int8* dest);
xAnimState* xAnimTableNewState(xAnimTable* table, int8* name, uint32 flags, uint32 userFlags, float32 speed, float32* boneBlend, float32* timeSnap, float32 fadeRecip, uint16* fadeOffset, void* callbackData, void(*beforeEnter)(xAnimPlay*, xAnimState*, void*), void(*stateCallback)(xAnimState*, xAnimSingle*, void*), void(*beforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32));
void xAnimDefaultBeforeEnter(xAnimState* state);
xAnimTable* xAnimTableNew(int8* name, uint32 userFlags);
xAnimEffect* xAnimStateNewEffect(xAnimState* state, uint16 flags, uint16 probability, float32 startTime, float32 endTime, uint32(*callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*), uint32 userDataSize);
void xAnimFileEval(xAnimFile* data, float32 time, float32* bilinear, uint32 flags, xVec3* tran, xQuat* quat);
void xAnimFileSetTime(xAnimFile* data, float32 duration, float32 timeOffset);
xAnimFile* xAnimFileNew(void* rawData, int8* name, uint32 flags, xAnimFile** linkedList);
xAnimFile* xAnimFileNewBilinear(void** rawData, int8* name, uint32 hashed_name_id, uint32 flags, xAnimFile** linkedList, uint32 numX, uint32 numY);
void xAnimCalcPhysicsData(xAnimFile* afile, xAnimFile* endPose);
void TransitionTimeInit(xAnimSingle* single, xAnimTransition* tran);
uint32 DefaultOverride(xAnimState* state, xAnimTransition* tran);
void _xAnimTransitionListInsert(xAnimTransitionList** list, xAnimTransitionList* toInsert);
void xAnimTempStateInit(uint32 count);
xAnimTransition* xAnimTempTransitionAlloc(xAnimTransition* source);
void xAnimTempTransitionInit(uint32 count);
void xAnimInit();
uint8 _xCheckAnimNameInner(int8* name, int8* pattern, int32 patternSize, int8* extra, int32* nameOut, int32* extraOut);

// xAnimPoolFree__FP9xAnimPlay
// Start address: 0x43f460
void xAnimPoolFree(xAnimPlay* play)
{
	uint32 i;
	// Line 2876, Address: 0x43f460, Func Offset: 0
	// Line 2880, Address: 0x43f478, Func Offset: 0x18
	// Line 2888, Address: 0x43f490, Func Offset: 0x30
	// Line 2889, Address: 0x43f4a8, Func Offset: 0x48
	// Line 2891, Address: 0x43f4cc, Func Offset: 0x6c
	// Line 2892, Address: 0x43f4d8, Func Offset: 0x78
	// Line 2884, Address: 0x43f50c, Func Offset: 0xac
	// Line 2892, Address: 0x43f510, Func Offset: 0xb0
	// Func End, Address: 0x43f540, Func Offset: 0xe0
}

// xAnimPoolAlloc__FP8xMemPoolPvP10xAnimTableP14xModelInstance
// Start address: 0x43f540
xAnimPlay* xAnimPoolAlloc(xMemPool* pool, void* object, xAnimTable* table, xModelInstance* modelInst)
{
	xAnimPlay* play;
	// Line 2869, Address: 0x43f540, Func Offset: 0
	// Line 2870, Address: 0x43f560, Func Offset: 0x20
	// Line 2871, Address: 0x43f56c, Func Offset: 0x2c
	// Line 2872, Address: 0x43f580, Func Offset: 0x40
	// Line 2873, Address: 0x43f584, Func Offset: 0x44
	// Func End, Address: 0x43f5a0, Func Offset: 0x60
}

// xAnimPoolInit__FP8xMemPoolUiUiUiUi
// Start address: 0x43f5a0
void xAnimPoolInit(xMemPool* pool, uint32 count, uint32 singles, uint32 blendFlags, uint32 effectMax)
{
	uint32 size;
	uint32 i;
	void* buffer;
	xAnimPlay* play;
	xAnimSingle* currsingle;
	xAnimActiveEffect* curract;
	// Line 2798, Address: 0x43f5a0, Func Offset: 0
	// Line 2802, Address: 0x43f5a4, Func Offset: 0x4
	// Line 2798, Address: 0x43f5a8, Func Offset: 0x8
	// Line 2802, Address: 0x43f5c4, Func Offset: 0x24
	// Line 2798, Address: 0x43f5c8, Func Offset: 0x28
	// Line 2802, Address: 0x43f5e8, Func Offset: 0x48
	// Line 2810, Address: 0x43f5fc, Func Offset: 0x5c
	// Line 2802, Address: 0x43f604, Func Offset: 0x64
	// Line 2810, Address: 0x43f610, Func Offset: 0x70
	// Line 2811, Address: 0x43f698, Func Offset: 0xf8
	// Line 2810, Address: 0x43f69c, Func Offset: 0xfc
	// Line 2811, Address: 0x43f6b8, Func Offset: 0x118
	// Line 2810, Address: 0x43f6bc, Func Offset: 0x11c
	// Line 2811, Address: 0x43f6d0, Func Offset: 0x130
	// Line 2820, Address: 0x43f6dc, Func Offset: 0x13c
	// Line 2817, Address: 0x43f6e0, Func Offset: 0x140
	// Line 2822, Address: 0x43f6e4, Func Offset: 0x144
	// Line 2821, Address: 0x43f6e8, Func Offset: 0x148
	// Line 2825, Address: 0x43f6ec, Func Offset: 0x14c
	// Line 2822, Address: 0x43f6f0, Func Offset: 0x150
	// Line 2825, Address: 0x43f6f4, Func Offset: 0x154
	// Line 2822, Address: 0x43f6f8, Func Offset: 0x158
	// Line 2825, Address: 0x43f6fc, Func Offset: 0x15c
	// Line 2826, Address: 0x43f708, Func Offset: 0x168
	// Line 2827, Address: 0x43f71c, Func Offset: 0x17c
	// Line 2828, Address: 0x43f728, Func Offset: 0x188
	// Line 2830, Address: 0x43f72c, Func Offset: 0x18c
	// Line 2831, Address: 0x43f738, Func Offset: 0x198
	// Line 2833, Address: 0x43f744, Func Offset: 0x1a4
	// Line 2838, Address: 0x43f758, Func Offset: 0x1b8
	// Line 2840, Address: 0x43f76c, Func Offset: 0x1cc
	// Line 2842, Address: 0x43f774, Func Offset: 0x1d4
	// Line 2844, Address: 0x43f780, Func Offset: 0x1e0
	// Line 2845, Address: 0x43f788, Func Offset: 0x1e8
	// Line 2847, Address: 0x43f78c, Func Offset: 0x1ec
	// Line 2848, Address: 0x43f798, Func Offset: 0x1f8
	// Line 2849, Address: 0x43f79c, Func Offset: 0x1fc
	// Line 2850, Address: 0x43f7a0, Func Offset: 0x200
	// Line 2851, Address: 0x43f7a4, Func Offset: 0x204
	// Line 2852, Address: 0x43f7b0, Func Offset: 0x210
	// Line 2863, Address: 0x43f7c8, Func Offset: 0x228
	// Line 2858, Address: 0x43f7d0, Func Offset: 0x230
	// Line 2863, Address: 0x43f7d4, Func Offset: 0x234
	// Line 2865, Address: 0x43f7f0, Func Offset: 0x250
	// Func End, Address: 0x43f818, Func Offset: 0x278
}

// xAnimPoolCB__FP8xMemPoolPv
// Start address: 0x43f820
void xAnimPoolCB(xMemPool* pool, void* data)
{
	int32 i;
	xAnimPlay* clone;
	xAnimPlay* play;
	xAnimSingle* clonesingle;
	xAnimSingle* currsingle;
	xAnimActiveEffect* curract;
	// Line 2733, Address: 0x43f820, Func Offset: 0
	// Line 2735, Address: 0x43f824, Func Offset: 0x4
	// Line 2743, Address: 0x43f828, Func Offset: 0x8
	// Line 2738, Address: 0x43f82c, Func Offset: 0xc
	// Line 2739, Address: 0x43f834, Func Offset: 0x14
	// Line 2740, Address: 0x43f83c, Func Offset: 0x1c
	// Line 2743, Address: 0x43f840, Func Offset: 0x20
	// Line 2740, Address: 0x43f844, Func Offset: 0x24
	// Line 2743, Address: 0x43f84c, Func Offset: 0x2c
	// Line 2744, Address: 0x43f858, Func Offset: 0x38
	// Line 2745, Address: 0x43f864, Func Offset: 0x44
	// Line 2746, Address: 0x43f878, Func Offset: 0x58
	// Line 2747, Address: 0x43f884, Func Offset: 0x64
	// Line 2748, Address: 0x43f888, Func Offset: 0x68
	// Line 2750, Address: 0x43f88c, Func Offset: 0x6c
	// Line 2751, Address: 0x43f898, Func Offset: 0x78
	// Line 2753, Address: 0x43f8a4, Func Offset: 0x84
	// Line 2758, Address: 0x43f8c0, Func Offset: 0xa0
	// Line 2760, Address: 0x43f8d4, Func Offset: 0xb4
	// Line 2761, Address: 0x43f8d8, Func Offset: 0xb8
	// Line 2760, Address: 0x43f8dc, Func Offset: 0xbc
	// Line 2763, Address: 0x43f8e0, Func Offset: 0xc0
	// Line 2764, Address: 0x43f8e8, Func Offset: 0xc8
	// Line 2765, Address: 0x43f8f0, Func Offset: 0xd0
	// Line 2766, Address: 0x43f8fc, Func Offset: 0xdc
	// Line 2767, Address: 0x43f900, Func Offset: 0xe0
	// Line 2770, Address: 0x43f90c, Func Offset: 0xec
	// Line 2773, Address: 0x43f910, Func Offset: 0xf0
	// Line 2774, Address: 0x43f914, Func Offset: 0xf4
	// Line 2775, Address: 0x43f920, Func Offset: 0x100
	// Line 2782, Address: 0x43f938, Func Offset: 0x118
	// Func End, Address: 0x43f950, Func Offset: 0x130
}

// xAnimPlayEval__FP9xAnimPlay
// Start address: 0x43f950
void xAnimPlayEval(xAnimPlay* play)
{
	uint32 i;
	uint32 bone;
	xQuat* quatresult;
	xVec3* tranresult;
	xQuat* quatblend;
	xVec3* tranblend;
	xAnimSingle* si;
	float32 blendF;
	float32 blendR;
	uint16* blendO;
	// Line 2633, Address: 0x43f950, Func Offset: 0
	// Line 2634, Address: 0x43f990, Func Offset: 0x40
	// Line 2647, Address: 0x43f99c, Func Offset: 0x4c
	// Line 2634, Address: 0x43f9a0, Func Offset: 0x50
	// Line 2643, Address: 0x43f9a4, Func Offset: 0x54
	// Line 2647, Address: 0x43f9a8, Func Offset: 0x58
	// Line 2649, Address: 0x43f9b4, Func Offset: 0x64
	// Line 2652, Address: 0x43f9bc, Func Offset: 0x6c
	// Line 2655, Address: 0x43fa88, Func Offset: 0x138
	// Line 2656, Address: 0x43faa8, Func Offset: 0x158
	// Line 2657, Address: 0x43fab8, Func Offset: 0x168
	// Line 2659, Address: 0x43fad0, Func Offset: 0x180
	// Line 2660, Address: 0x43fad4, Func Offset: 0x184
	// Line 2659, Address: 0x43fad8, Func Offset: 0x188
	// Line 2661, Address: 0x43fadc, Func Offset: 0x18c
	// Line 2663, Address: 0x43fb9c, Func Offset: 0x24c
	// Line 2677, Address: 0x43fbb0, Func Offset: 0x260
	// Line 2680, Address: 0x43fbc4, Func Offset: 0x274
	// Line 2684, Address: 0x43fbfc, Func Offset: 0x2ac
	// Line 2688, Address: 0x43fc28, Func Offset: 0x2d8
	// Line 2685, Address: 0x43fc2c, Func Offset: 0x2dc
	// Line 2688, Address: 0x43fc30, Func Offset: 0x2e0
	// Line 2685, Address: 0x43fc34, Func Offset: 0x2e4
	// Line 2688, Address: 0x43fc38, Func Offset: 0x2e8
	// Line 2685, Address: 0x43fc3c, Func Offset: 0x2ec
	// Line 2686, Address: 0x43fc44, Func Offset: 0x2f4
	// Line 2687, Address: 0x43fc54, Func Offset: 0x304
	// Line 2688, Address: 0x43fc60, Func Offset: 0x310
	// Line 2689, Address: 0x43fc68, Func Offset: 0x318
	// Line 2688, Address: 0x43fc70, Func Offset: 0x320
	// Line 2689, Address: 0x43fc80, Func Offset: 0x330
	// Line 2691, Address: 0x43fc8c, Func Offset: 0x33c
	// Line 2694, Address: 0x43fc98, Func Offset: 0x348
	// Line 2701, Address: 0x43fcdc, Func Offset: 0x38c
	// Line 2694, Address: 0x43fce0, Func Offset: 0x390
	// Line 2701, Address: 0x43fce8, Func Offset: 0x398
	// Line 2705, Address: 0x43fd00, Func Offset: 0x3b0
	// Line 2706, Address: 0x43fd10, Func Offset: 0x3c0
	// Line 2709, Address: 0x43fd2c, Func Offset: 0x3dc
	// Line 2710, Address: 0x43fd34, Func Offset: 0x3e4
	// Line 2711, Address: 0x43fd4c, Func Offset: 0x3fc
	// Line 2712, Address: 0x43fd54, Func Offset: 0x404
	// Line 2715, Address: 0x43fd6c, Func Offset: 0x41c
	// Line 2716, Address: 0x43fd84, Func Offset: 0x434
	// Line 2663, Address: 0x43fd90, Func Offset: 0x440
	// Line 2716, Address: 0x43fd9c, Func Offset: 0x44c
	// Line 2669, Address: 0x43fdb8, Func Offset: 0x468
	// Line 2716, Address: 0x43fdc0, Func Offset: 0x470
	// Func End, Address: 0x43fe10, Func Offset: 0x4c0
}

// xAnimPlayUpdate__FP9xAnimPlayf
// Start address: 0x43fe10
void xAnimPlayUpdate(xAnimPlay* play, float32 timeDelta)
{
	uint32 i;
	xAnimSingle* single;
	// Line 2618, Address: 0x43fe10, Func Offset: 0
	// Line 2621, Address: 0x43fe2c, Func Offset: 0x1c
	// Line 2618, Address: 0x43fe30, Func Offset: 0x20
	// Line 2621, Address: 0x43fe34, Func Offset: 0x24
	// Line 2630, Address: 0x43fe44, Func Offset: 0x34
	// Line 2624, Address: 0x43fe54, Func Offset: 0x44
	// Line 2630, Address: 0x43fe58, Func Offset: 0x48
	// Func End, Address: 0x43fec0, Func Offset: 0xb0
}

// xAnimPlayStartTransition__FP9xAnimPlayP15xAnimTransition
// Start address: 0x43fec0
void xAnimPlayStartTransition(xAnimPlay* play, xAnimTransition* transition)
{
	xAnimSingle* single;
	xAnimSingle* bl;
	uint8 transferredState;
	uint8 tookOwnership;
	// Line 2512, Address: 0x43fec0, Func Offset: 0
	// Line 2525, Address: 0x43fec8, Func Offset: 0x8
	// Line 2512, Address: 0x43fecc, Func Offset: 0xc
	// Line 2521, Address: 0x43fef0, Func Offset: 0x30
	// Line 2525, Address: 0x43fef4, Func Offset: 0x34
	// Line 2521, Address: 0x43fef8, Func Offset: 0x38
	// Line 2525, Address: 0x43fefc, Func Offset: 0x3c
	// Line 2521, Address: 0x43ff00, Func Offset: 0x40
	// Line 2525, Address: 0x43ff18, Func Offset: 0x58
	// Line 2528, Address: 0x43ff24, Func Offset: 0x64
	// Line 2529, Address: 0x43ff54, Func Offset: 0x94
	// Line 2525, Address: 0x43ff60, Func Offset: 0xa0
	// Line 2529, Address: 0x43ff64, Func Offset: 0xa4
	// Line 2533, Address: 0x43ff80, Func Offset: 0xc0
	// Line 2534, Address: 0x43ff94, Func Offset: 0xd4
	// Line 2535, Address: 0x43ffa0, Func Offset: 0xe0
	// Line 2536, Address: 0x43ffd0, Func Offset: 0x110
	// Line 2540, Address: 0x43ffd4, Func Offset: 0x114
	// Line 2539, Address: 0x43ffd8, Func Offset: 0x118
	// Line 2540, Address: 0x43ffdc, Func Offset: 0x11c
	// Line 2548, Address: 0x440000, Func Offset: 0x140
	// Line 2551, Address: 0x440008, Func Offset: 0x148
	// Line 2557, Address: 0x44000c, Func Offset: 0x14c
	// Line 2559, Address: 0x440010, Func Offset: 0x150
	// Line 2567, Address: 0x440040, Func Offset: 0x180
	// Line 2568, Address: 0x440054, Func Offset: 0x194
	// Line 2572, Address: 0x440060, Func Offset: 0x1a0
	// Line 2573, Address: 0x440090, Func Offset: 0x1d0
	// Line 2576, Address: 0x440094, Func Offset: 0x1d4
	// Line 2573, Address: 0x440098, Func Offset: 0x1d8
	// Line 2580, Address: 0x4400a0, Func Offset: 0x1e0
	// Line 2583, Address: 0x4400ac, Func Offset: 0x1ec
	// Line 2585, Address: 0x4400b4, Func Offset: 0x1f4
	// Line 2586, Address: 0x44013c, Func Offset: 0x27c
	// Line 2589, Address: 0x440154, Func Offset: 0x294
	// Line 2593, Address: 0x440188, Func Offset: 0x2c8
	// Line 2595, Address: 0x440198, Func Offset: 0x2d8
	// Line 2599, Address: 0x44019c, Func Offset: 0x2dc
	// Line 2603, Address: 0x4401b0, Func Offset: 0x2f0
	// Line 2604, Address: 0x4401b8, Func Offset: 0x2f8
	// Line 2607, Address: 0x4401c8, Func Offset: 0x308
	// Line 2608, Address: 0x4401d0, Func Offset: 0x310
	// Line 2611, Address: 0x4401e4, Func Offset: 0x324
	// Line 2612, Address: 0x4401ec, Func Offset: 0x32c
	// Line 2615, Address: 0x44021c, Func Offset: 0x35c
	// Line 2543, Address: 0x440224, Func Offset: 0x364
	// Line 2615, Address: 0x440228, Func Offset: 0x368
	// Line 2544, Address: 0x440248, Func Offset: 0x388
	// Line 2615, Address: 0x44024c, Func Offset: 0x38c
	// Line 2546, Address: 0x440260, Func Offset: 0x3a0
	// Line 2585, Address: 0x440270, Func Offset: 0x3b0
	// Line 2615, Address: 0x440278, Func Offset: 0x3b8
	// Func End, Address: 0x4402c0, Func Offset: 0x400
}

// xAnimPlayChooseTransition__FP9xAnimPlay
// Start address: 0x4402c0
void xAnimPlayChooseTransition(xAnimPlay* play)
{
	uint32 i;
	void* object;
	xAnimTransition** found;
	xAnimTransitionList* curr;
	int8 @6040;
	uint8* tmpBuffer;
	// Line 2472, Address: 0x4402c0, Func Offset: 0
	// Line 2476, Address: 0x4402e0, Func Offset: 0x20
	// Line 2474, Address: 0x4402e4, Func Offset: 0x24
	// Line 2476, Address: 0x4402e8, Func Offset: 0x28
	// Line 2478, Address: 0x4402f0, Func Offset: 0x30
	// Line 2479, Address: 0x4402f4, Func Offset: 0x34
	// Line 2482, Address: 0x440308, Func Offset: 0x48
	// Line 2483, Address: 0x440328, Func Offset: 0x68
	// Line 2484, Address: 0x440330, Func Offset: 0x70
	// Line 2486, Address: 0x440334, Func Offset: 0x74
	// Line 2487, Address: 0x44033c, Func Offset: 0x7c
	// Line 2499, Address: 0x44034c, Func Offset: 0x8c
	// Line 2476, Address: 0x44039c, Func Offset: 0xdc
	// Line 2499, Address: 0x4403a0, Func Offset: 0xe0
	// Line 2495, Address: 0x4403dc, Func Offset: 0x11c
	// Line 2499, Address: 0x4403e4, Func Offset: 0x124
	// Line 2501, Address: 0x4403ec, Func Offset: 0x12c
	// Line 2504, Address: 0x440408, Func Offset: 0x148
	// Line 2505, Address: 0x440418, Func Offset: 0x158
	// Line 2506, Address: 0x440420, Func Offset: 0x160
	// Line 2508, Address: 0x440428, Func Offset: 0x168
	// Line 2509, Address: 0x440440, Func Offset: 0x180
	// Func End, Address: 0x440464, Func Offset: 0x1a4
}

// xAnimPlaySetup__FP9xAnimPlayPvP10xAnimTableP14xModelInstance
// Start address: 0x440470
void xAnimPlaySetup(xAnimPlay* play, void* object, xAnimTable* table, xModelInstance* modelInst)
{
	int32 i;
	// Line 2430, Address: 0x440470, Func Offset: 0
	// Line 2432, Address: 0x440494, Func Offset: 0x24
	// Line 2433, Address: 0x44049c, Func Offset: 0x2c
	// Line 2434, Address: 0x4404a0, Func Offset: 0x30
	// Line 2435, Address: 0x4404a4, Func Offset: 0x34
	// Line 2438, Address: 0x4404a8, Func Offset: 0x38
	// Line 2439, Address: 0x4404ac, Func Offset: 0x3c
	// Line 2443, Address: 0x4404b8, Func Offset: 0x48
	// Line 2448, Address: 0x4404c4, Func Offset: 0x54
	// Line 2450, Address: 0x4404d8, Func Offset: 0x68
	// Line 2453, Address: 0x4404fc, Func Offset: 0x8c
	// Line 2454, Address: 0x440508, Func Offset: 0x98
	// Line 2455, Address: 0x440520, Func Offset: 0xb0
	// Line 2456, Address: 0x440528, Func Offset: 0xb8
	// Line 2457, Address: 0x440558, Func Offset: 0xe8
	// Line 2460, Address: 0x44056c, Func Offset: 0xfc
	// Line 2461, Address: 0x44057c, Func Offset: 0x10c
	// Line 2444, Address: 0x440588, Func Offset: 0x118
	// Line 2461, Address: 0x440594, Func Offset: 0x124
	// Func End, Address: 0x4405b0, Func Offset: 0x140
}

// SingleUpdate__FP11xAnimSinglef
// Start address: 0x4405b0
void SingleUpdate(xAnimSingle* single, float32 timeDelta)
{
	uint32 foundBlendstop;
	uint32 firstStep;
	xAnimTransition* foundTransition;
	xAnimSingle* bl;
	float32 tranDelta;
	float32 blendDelta;
	float32 singleTime;
	void* object;
	float32 duration;
	float32 timeCmp;
	float32 timeCmp;
	xAnimTransitionList* curr;
	float32 recip;
	uint8 transferredState;
	xVec3 disp;
	float32 yaw;
	xMat3x3 rot;
	xVec3 disp;
	float32 yaw;
	xMat3x3 rot;
	// Line 2036, Address: 0x4405b0, Func Offset: 0
	// Line 2046, Address: 0x4405b4, Func Offset: 0x4
	// Line 2036, Address: 0x4405b8, Func Offset: 0x8
	// Line 2038, Address: 0x4405cc, Func Offset: 0x1c
	// Line 2036, Address: 0x4405d0, Func Offset: 0x20
	// Line 2039, Address: 0x4405dc, Func Offset: 0x2c
	// Line 2036, Address: 0x4405e0, Func Offset: 0x30
	// Line 2040, Address: 0x4405e4, Func Offset: 0x34
	// Line 2036, Address: 0x4405e8, Func Offset: 0x38
	// Line 2038, Address: 0x4405f0, Func Offset: 0x40
	// Line 2036, Address: 0x4405f4, Func Offset: 0x44
	// Line 2044, Address: 0x440610, Func Offset: 0x60
	// Line 2041, Address: 0x440614, Func Offset: 0x64
	// Line 2044, Address: 0x440618, Func Offset: 0x68
	// Line 2045, Address: 0x440624, Func Offset: 0x74
	// Line 2046, Address: 0x440628, Func Offset: 0x78
	// Line 2049, Address: 0x440634, Func Offset: 0x84
	// Line 2053, Address: 0x440640, Func Offset: 0x90
	// Line 2056, Address: 0x440648, Func Offset: 0x98
	// Line 2057, Address: 0x440660, Func Offset: 0xb0
	// Line 2061, Address: 0x440668, Func Offset: 0xb8
	// Line 2064, Address: 0x44066c, Func Offset: 0xbc
	// Line 2062, Address: 0x440670, Func Offset: 0xc0
	// Line 2061, Address: 0x440678, Func Offset: 0xc8
	// Line 2062, Address: 0x44067c, Func Offset: 0xcc
	// Line 2064, Address: 0x440690, Func Offset: 0xe0
	// Line 2065, Address: 0x4406a0, Func Offset: 0xf0
	// Line 2067, Address: 0x4406b4, Func Offset: 0x104
	// Line 2068, Address: 0x4406d8, Func Offset: 0x128
	// Line 2072, Address: 0x4406e8, Func Offset: 0x138
	// Line 2074, Address: 0x4406fc, Func Offset: 0x14c
	// Line 2075, Address: 0x440718, Func Offset: 0x168
	// Line 2077, Address: 0x440720, Func Offset: 0x170
	// Line 2081, Address: 0x44072c, Func Offset: 0x17c
	// Line 2082, Address: 0x440734, Func Offset: 0x184
	// Line 2084, Address: 0x440740, Func Offset: 0x190
	// Line 2088, Address: 0x440754, Func Offset: 0x1a4
	// Line 2089, Address: 0x440768, Func Offset: 0x1b8
	// Line 2093, Address: 0x440780, Func Offset: 0x1d0
	// Line 2092, Address: 0x440784, Func Offset: 0x1d4
	// Line 2093, Address: 0x440788, Func Offset: 0x1d8
	// Line 2095, Address: 0x44078c, Func Offset: 0x1dc
	// Line 2093, Address: 0x440794, Func Offset: 0x1e4
	// Line 2094, Address: 0x44079c, Func Offset: 0x1ec
	// Line 2095, Address: 0x4407a0, Func Offset: 0x1f0
	// Line 2097, Address: 0x4407ac, Func Offset: 0x1fc
	// Line 2101, Address: 0x4407d0, Func Offset: 0x220
	// Line 2100, Address: 0x4407d4, Func Offset: 0x224
	// Line 2101, Address: 0x4407d8, Func Offset: 0x228
	// Line 2103, Address: 0x4407dc, Func Offset: 0x22c
	// Line 2101, Address: 0x4407e4, Func Offset: 0x234
	// Line 2102, Address: 0x4407ec, Func Offset: 0x23c
	// Line 2103, Address: 0x4407f0, Func Offset: 0x240
	// Line 2107, Address: 0x4407fc, Func Offset: 0x24c
	// Line 2111, Address: 0x440804, Func Offset: 0x254
	// Line 2113, Address: 0x44080c, Func Offset: 0x25c
	// Line 2112, Address: 0x440810, Func Offset: 0x260
	// Line 2118, Address: 0x440814, Func Offset: 0x264
	// Line 2121, Address: 0x440820, Func Offset: 0x270
	// Line 2139, Address: 0x440840, Func Offset: 0x290
	// Line 2121, Address: 0x440844, Func Offset: 0x294
	// Line 2138, Address: 0x440848, Func Offset: 0x298
	// Line 2139, Address: 0x44084c, Func Offset: 0x29c
	// Line 2141, Address: 0x440868, Func Offset: 0x2b8
	// Line 2147, Address: 0x44088c, Func Offset: 0x2dc
	// Line 2148, Address: 0x440894, Func Offset: 0x2e4
	// Line 2151, Address: 0x4408d0, Func Offset: 0x320
	// Line 2153, Address: 0x4408d8, Func Offset: 0x328
	// Line 2156, Address: 0x4408f8, Func Offset: 0x348
	// Line 2159, Address: 0x440900, Func Offset: 0x350
	// Line 2160, Address: 0x440910, Func Offset: 0x360
	// Line 2162, Address: 0x440918, Func Offset: 0x368
	// Line 2160, Address: 0x440920, Func Offset: 0x370
	// Line 2161, Address: 0x440928, Func Offset: 0x378
	// Line 2162, Address: 0x44092c, Func Offset: 0x37c
	// Line 2163, Address: 0x440938, Func Offset: 0x388
	// Line 2164, Address: 0x440940, Func Offset: 0x390
	// Line 2165, Address: 0x440944, Func Offset: 0x394
	// Line 2172, Address: 0x44094c, Func Offset: 0x39c
	// Line 2177, Address: 0x440964, Func Offset: 0x3b4
	// Line 2179, Address: 0x440984, Func Offset: 0x3d4
	// Line 2181, Address: 0x44099c, Func Offset: 0x3ec
	// Line 2182, Address: 0x4409ac, Func Offset: 0x3fc
	// Line 2183, Address: 0x4409b0, Func Offset: 0x400
	// Line 2184, Address: 0x4409c8, Func Offset: 0x418
	// Line 2185, Address: 0x4409dc, Func Offset: 0x42c
	// Line 2194, Address: 0x440a00, Func Offset: 0x450
	// Line 2196, Address: 0x440a08, Func Offset: 0x458
	// Line 2199, Address: 0x440a10, Func Offset: 0x460
	// Line 2201, Address: 0x440a14, Func Offset: 0x464
	// Line 2202, Address: 0x440a28, Func Offset: 0x478
	// Line 2203, Address: 0x440a34, Func Offset: 0x484
	// Line 2205, Address: 0x440a38, Func Offset: 0x488
	// Line 2206, Address: 0x440a40, Func Offset: 0x490
	// Line 2207, Address: 0x440a48, Func Offset: 0x498
	// Line 2208, Address: 0x440a80, Func Offset: 0x4d0
	// Line 2209, Address: 0x440a84, Func Offset: 0x4d4
	// Line 2210, Address: 0x440ab0, Func Offset: 0x500
	// Line 2211, Address: 0x440abc, Func Offset: 0x50c
	// Line 2213, Address: 0x440ac4, Func Offset: 0x514
	// Line 2214, Address: 0x440af0, Func Offset: 0x540
	// Line 2216, Address: 0x440af8, Func Offset: 0x548
	// Line 2217, Address: 0x440b04, Func Offset: 0x554
	// Line 2218, Address: 0x440b34, Func Offset: 0x584
	// Line 2223, Address: 0x440b3c, Func Offset: 0x58c
	// Line 2226, Address: 0x440b40, Func Offset: 0x590
	// Line 2231, Address: 0x440b48, Func Offset: 0x598
	// Line 2232, Address: 0x440b50, Func Offset: 0x5a0
	// Line 2233, Address: 0x440b58, Func Offset: 0x5a8
	// Line 2234, Address: 0x440b90, Func Offset: 0x5e0
	// Line 2235, Address: 0x440b94, Func Offset: 0x5e4
	// Line 2238, Address: 0x440b98, Func Offset: 0x5e8
	// Line 2241, Address: 0x440bb8, Func Offset: 0x608
	// Line 2242, Address: 0x440bc4, Func Offset: 0x614
	// Line 2244, Address: 0x440bf0, Func Offset: 0x640
	// Line 2248, Address: 0x440bf8, Func Offset: 0x648
	// Line 2247, Address: 0x440bfc, Func Offset: 0x64c
	// Line 2254, Address: 0x440c00, Func Offset: 0x650
	// Line 2248, Address: 0x440c04, Func Offset: 0x654
	// Line 2256, Address: 0x440c08, Func Offset: 0x658
	// Line 2265, Address: 0x440c38, Func Offset: 0x688
	// Line 2266, Address: 0x440c4c, Func Offset: 0x69c
	// Line 2269, Address: 0x440c58, Func Offset: 0x6a8
	// Line 2270, Address: 0x440c90, Func Offset: 0x6e0
	// Line 2271, Address: 0x440c94, Func Offset: 0x6e4
	// Line 2270, Address: 0x440c98, Func Offset: 0x6e8
	// Line 2275, Address: 0x440c9c, Func Offset: 0x6ec
	// Line 2270, Address: 0x440ca0, Func Offset: 0x6f0
	// Line 2275, Address: 0x440ca4, Func Offset: 0x6f4
	// Line 2278, Address: 0x440cb4, Func Offset: 0x704
	// Line 2281, Address: 0x440cc8, Func Offset: 0x718
	// Line 2283, Address: 0x440cfc, Func Offset: 0x74c
	// Line 2286, Address: 0x440d08, Func Offset: 0x758
	// Line 2287, Address: 0x440d14, Func Offset: 0x764
	// Line 2289, Address: 0x440d64, Func Offset: 0x7b4
	// Line 2291, Address: 0x440d68, Func Offset: 0x7b8
	// Line 2292, Address: 0x440d78, Func Offset: 0x7c8
	// Line 2293, Address: 0x440d84, Func Offset: 0x7d4
	// Line 2296, Address: 0x440d88, Func Offset: 0x7d8
	// Line 2299, Address: 0x440d94, Func Offset: 0x7e4
	// Line 2300, Address: 0x440d9c, Func Offset: 0x7ec
	// Line 2301, Address: 0x440da0, Func Offset: 0x7f0
	// Line 2302, Address: 0x440e48, Func Offset: 0x898
	// Line 2305, Address: 0x440e60, Func Offset: 0x8b0
	// Line 2309, Address: 0x440e98, Func Offset: 0x8e8
	// Line 2311, Address: 0x440eb0, Func Offset: 0x900
	// Line 2312, Address: 0x440eb4, Func Offset: 0x904
	// Line 2315, Address: 0x440eb8, Func Offset: 0x908
	// Line 2318, Address: 0x440ec8, Func Offset: 0x918
	// Line 2319, Address: 0x440ed4, Func Offset: 0x924
	// Line 2322, Address: 0x440ee4, Func Offset: 0x934
	// Line 2323, Address: 0x440eec, Func Offset: 0x93c
	// Line 2327, Address: 0x440f00, Func Offset: 0x950
	// Line 2326, Address: 0x440f04, Func Offset: 0x954
	// Line 2334, Address: 0x440f08, Func Offset: 0x958
	// Line 2335, Address: 0x440f24, Func Offset: 0x974
	// Line 2336, Address: 0x440f34, Func Offset: 0x984
	// Line 2338, Address: 0x440f44, Func Offset: 0x994
	// Line 2339, Address: 0x440f58, Func Offset: 0x9a8
	// Line 2340, Address: 0x441078, Func Offset: 0xac8
	// Line 2341, Address: 0x441080, Func Offset: 0xad0
	// Line 2344, Address: 0x4410a0, Func Offset: 0xaf0
	// Line 2346, Address: 0x4410a8, Func Offset: 0xaf8
	// Line 2347, Address: 0x4410b4, Func Offset: 0xb04
	// Line 2348, Address: 0x4410c8, Func Offset: 0xb18
	// Line 2349, Address: 0x4411e8, Func Offset: 0xc38
	// Line 2350, Address: 0x4411f0, Func Offset: 0xc40
	// Line 2352, Address: 0x441210, Func Offset: 0xc60
	// Line 2357, Address: 0x441218, Func Offset: 0xc68
	// Line 2360, Address: 0x441228, Func Offset: 0xc78
	// Line 2363, Address: 0x441264, Func Offset: 0xcb4
	// Line 2364, Address: 0x441270, Func Offset: 0xcc0
	// Line 2366, Address: 0x441280, Func Offset: 0xcd0
	// Line 2367, Address: 0x441288, Func Offset: 0xcd8
	// Line 2368, Address: 0x4412ac, Func Offset: 0xcfc
	// Line 2373, Address: 0x4412b0, Func Offset: 0xd00
	// Line 2374, Address: 0x4412bc, Func Offset: 0xd0c
	// Line 2377, Address: 0x4412d0, Func Offset: 0xd20
	// Line 2374, Address: 0x4412d4, Func Offset: 0xd24
	// Line 2377, Address: 0x4412d8, Func Offset: 0xd28
	// Line 2380, Address: 0x4412e8, Func Offset: 0xd38
	// Line 2382, Address: 0x4412fc, Func Offset: 0xd4c
	// Line 2384, Address: 0x441304, Func Offset: 0xd54
	// Line 2382, Address: 0x44130c, Func Offset: 0xd5c
	// Line 2384, Address: 0x441338, Func Offset: 0xd88
	// Line 2387, Address: 0x441344, Func Offset: 0xd94
	// Line 2388, Address: 0x441350, Func Offset: 0xda0
	// Line 2391, Address: 0x4413a0, Func Offset: 0xdf0
	// Line 2392, Address: 0x4413b0, Func Offset: 0xe00
	// Line 2395, Address: 0x4413bc, Func Offset: 0xe0c
	// Func End, Address: 0x441408, Func Offset: 0xe58
}

// xAnimPlaySetState__FP11xAnimSingleP10xAnimStatef
// Start address: 0x441410
void xAnimPlaySetState(xAnimSingle* single, xAnimState* state, float32 startTime)
{
	// Line 1955, Address: 0x441410, Func Offset: 0
	// Line 1957, Address: 0x441430, Func Offset: 0x20
	// Line 1958, Address: 0x44143c, Func Offset: 0x2c
	// Line 1959, Address: 0x441444, Func Offset: 0x34
	// Line 1960, Address: 0x44144c, Func Offset: 0x3c
	// Line 1963, Address: 0x441484, Func Offset: 0x74
	// Line 1964, Address: 0x441508, Func Offset: 0xf8
	// Line 1968, Address: 0x441510, Func Offset: 0x100
	// Line 1975, Address: 0x441548, Func Offset: 0x138
	// Line 1971, Address: 0x44154c, Func Offset: 0x13c
	// Line 1972, Address: 0x441554, Func Offset: 0x144
	// Line 1973, Address: 0x441558, Func Offset: 0x148
	// Line 1974, Address: 0x44155c, Func Offset: 0x14c
	// Line 1975, Address: 0x441560, Func Offset: 0x150
	// Line 1981, Address: 0x441570, Func Offset: 0x160
	// Line 1983, Address: 0x44157c, Func Offset: 0x16c
	// Line 1984, Address: 0x4415b0, Func Offset: 0x1a0
	// Line 1986, Address: 0x4415e0, Func Offset: 0x1d0
	// Line 1963, Address: 0x4415e8, Func Offset: 0x1d8
	// Line 1986, Address: 0x4415f0, Func Offset: 0x1e0
	// Line 1968, Address: 0x441608, Func Offset: 0x1f8
	// Line 1986, Address: 0x441610, Func Offset: 0x200
	// Line 1968, Address: 0x441618, Func Offset: 0x208
	// Line 1986, Address: 0x441644, Func Offset: 0x234
	// Line 1968, Address: 0x441648, Func Offset: 0x238
	// Line 1986, Address: 0x441650, Func Offset: 0x240
	// Func End, Address: 0x44166c, Func Offset: 0x25c
}

// xAnimPhysicsEval__FP16xAnimPhysicsDatafP5xVec3Pf
// Start address: 0x441670
void xAnimPhysicsEval(xAnimPhysicsData* phys, float32 time, xVec3* disp, float32* yaw)
{
	float32 interp;
	int32 index;
	// Line 1859, Address: 0x441670, Func Offset: 0
	// Line 1862, Address: 0x441678, Func Offset: 0x8
	// Line 1863, Address: 0x44168c, Func Offset: 0x1c
	// Line 1865, Address: 0x441690, Func Offset: 0x20
	// Line 1866, Address: 0x441694, Func Offset: 0x24
	// Line 1865, Address: 0x441698, Func Offset: 0x28
	// Line 1866, Address: 0x4416a4, Func Offset: 0x34
	// Line 1869, Address: 0x4416b4, Func Offset: 0x44
	// Line 1871, Address: 0x4416c0, Func Offset: 0x50
	// Line 1873, Address: 0x4416f0, Func Offset: 0x80
	// Line 1874, Address: 0x4416f8, Func Offset: 0x88
	// Line 1879, Address: 0x441708, Func Offset: 0x98
	// Line 1883, Address: 0x441710, Func Offset: 0xa0
	// Line 1888, Address: 0x441714, Func Offset: 0xa4
	// Line 1883, Address: 0x441720, Func Offset: 0xb0
	// Line 1888, Address: 0x441724, Func Offset: 0xb4
	// Line 1889, Address: 0x44172c, Func Offset: 0xbc
	// Line 1888, Address: 0x44173c, Func Offset: 0xcc
	// Line 1883, Address: 0x441740, Func Offset: 0xd0
	// Line 1888, Address: 0x441748, Func Offset: 0xd8
	// Line 1889, Address: 0x441750, Func Offset: 0xe0
	// Line 1888, Address: 0x441754, Func Offset: 0xe4
	// Line 1889, Address: 0x441774, Func Offset: 0x104
	// Line 1897, Address: 0x4417bc, Func Offset: 0x14c
	// Line 1898, Address: 0x4417d0, Func Offset: 0x160
	// Line 1903, Address: 0x4417e4, Func Offset: 0x174
	// Func End, Address: 0x441804, Func Offset: 0x194
}

// EffectSingleStop__FP11xAnimSingle
// Start address: 0x441810
void EffectSingleStop(xAnimSingle* single)
{
	uint32 i;
	xAnimEffect* effect;
	xAnimActiveEffect tempActive;
	// Line 1822, Address: 0x441810, Func Offset: 0
	// Line 1824, Address: 0x441824, Func Offset: 0x14
	// Line 1835, Address: 0x441850, Func Offset: 0x40
	// Line 1833, Address: 0x441878, Func Offset: 0x68
	// Line 1835, Address: 0x44187c, Func Offset: 0x6c
	// Line 1824, Address: 0x441894, Func Offset: 0x84
	// Line 1825, Address: 0x441898, Func Offset: 0x88
	// Line 1835, Address: 0x4418a0, Func Offset: 0x90
	// Line 1834, Address: 0x4418a4, Func Offset: 0x94
	// Line 1835, Address: 0x4418a8, Func Offset: 0x98
	// Line 1836, Address: 0x4418c0, Func Offset: 0xb0
	// Line 1839, Address: 0x4418c8, Func Offset: 0xb8
	// Line 1841, Address: 0x4418cc, Func Offset: 0xbc
	// Line 1842, Address: 0x4418d4, Func Offset: 0xc4
	// Line 1851, Address: 0x4418e8, Func Offset: 0xd8
	// Line 1852, Address: 0x4418ec, Func Offset: 0xdc
	// Line 1854, Address: 0x4418f8, Func Offset: 0xe8
	// Line 1846, Address: 0x441904, Func Offset: 0xf4
	// Line 1854, Address: 0x441908, Func Offset: 0xf8
	// Line 1847, Address: 0x441928, Func Offset: 0x118
	// Line 1854, Address: 0x44192c, Func Offset: 0x11c
	// Line 1848, Address: 0x441938, Func Offset: 0x128
	// Line 1854, Address: 0x44193c, Func Offset: 0x12c
	// Func End, Address: 0x441970, Func Offset: 0x160
}

// EffectSingleLoop__FP11xAnimSingle
// Start address: 0x441970
void EffectSingleLoop(xAnimSingle* single)
{
	xAnimActiveEffect* alist;
	uint32 index;
	uint32 count;
	xAnimEffect* effect;
	// Line 1783, Address: 0x441970, Func Offset: 0
	// Line 1785, Address: 0x441988, Func Offset: 0x18
	// Line 1788, Address: 0x441990, Func Offset: 0x20
	// Line 1789, Address: 0x441994, Func Offset: 0x24
	// Line 1806, Address: 0x44199c, Func Offset: 0x2c
	// Line 1792, Address: 0x4419b8, Func Offset: 0x48
	// Line 1806, Address: 0x4419bc, Func Offset: 0x4c
	// Line 1794, Address: 0x4419d8, Func Offset: 0x68
	// Line 1806, Address: 0x4419e0, Func Offset: 0x70
	// Line 1795, Address: 0x441a04, Func Offset: 0x94
	// Line 1806, Address: 0x441a08, Func Offset: 0x98
	// Line 1795, Address: 0x441a2c, Func Offset: 0xbc
	// Line 1806, Address: 0x441a38, Func Offset: 0xc8
	// Line 1802, Address: 0x441a48, Func Offset: 0xd8
	// Line 1811, Address: 0x441a50, Func Offset: 0xe0
	// Line 1814, Address: 0x441a58, Func Offset: 0xe8
	// Line 1815, Address: 0x441a88, Func Offset: 0x118
	// Line 1816, Address: 0x441a8c, Func Offset: 0x11c
	// Func End, Address: 0x441aa8, Func Offset: 0x138
}

// EffectSingleRun__FP11xAnimSingle
// Start address: 0x441ab0
void EffectSingleRun(xAnimSingle* single)
{
	xAnimEffect* effect;
	xAnimActiveEffect tempActive;
	float32 time;
	uint32 flags;
	// Line 1747, Address: 0x441ab0, Func Offset: 0
	// Line 1750, Address: 0x441acc, Func Offset: 0x1c
	// Line 1747, Address: 0x441ad0, Func Offset: 0x20
	// Line 1748, Address: 0x441ad8, Func Offset: 0x28
	// Line 1750, Address: 0x441adc, Func Offset: 0x2c
	// Line 1777, Address: 0x441ae0, Func Offset: 0x30
	// Line 1755, Address: 0x441b04, Func Offset: 0x54
	// Line 1777, Address: 0x441b08, Func Offset: 0x58
	// Line 1757, Address: 0x441b1c, Func Offset: 0x6c
	// Line 1777, Address: 0x441b28, Func Offset: 0x78
	// Line 1757, Address: 0x441b60, Func Offset: 0xb0
	// Line 1777, Address: 0x441b68, Func Offset: 0xb8
	// Line 1763, Address: 0x441b7c, Func Offset: 0xcc
	// Line 1777, Address: 0x441b80, Func Offset: 0xd0
	// Line 1766, Address: 0x441b8c, Func Offset: 0xdc
	// Line 1777, Address: 0x441b90, Func Offset: 0xe0
	// Line 1766, Address: 0x441b94, Func Offset: 0xe4
	// Line 1777, Address: 0x441b98, Func Offset: 0xe8
	// Line 1768, Address: 0x441bbc, Func Offset: 0x10c
	// Line 1777, Address: 0x441bc0, Func Offset: 0x110
	// Line 1771, Address: 0x441bcc, Func Offset: 0x11c
	// Line 1777, Address: 0x441bd0, Func Offset: 0x120
	// Line 1771, Address: 0x441bd4, Func Offset: 0x124
	// Line 1777, Address: 0x441bd8, Func Offset: 0x128
	// Line 1757, Address: 0x441bfc, Func Offset: 0x14c
	// Line 1777, Address: 0x441c08, Func Offset: 0x158
	// Line 1761, Address: 0x441c10, Func Offset: 0x160
	// Line 1777, Address: 0x441c14, Func Offset: 0x164
	// Line 1762, Address: 0x441c28, Func Offset: 0x178
	// Line 1777, Address: 0x441c2c, Func Offset: 0x17c
	// Line 1764, Address: 0x441c48, Func Offset: 0x198
	// Line 1777, Address: 0x441c4c, Func Offset: 0x19c
	// Line 1765, Address: 0x441c5c, Func Offset: 0x1ac
	// Line 1766, Address: 0x441c64, Func Offset: 0x1b4
	// Line 1777, Address: 0x441c68, Func Offset: 0x1b8
	// Line 1768, Address: 0x441c84, Func Offset: 0x1d4
	// Line 1771, Address: 0x441c8c, Func Offset: 0x1dc
	// Line 1777, Address: 0x441c90, Func Offset: 0x1e0
	// Line 1778, Address: 0x441cb8, Func Offset: 0x208
	// Line 1779, Address: 0x441cbc, Func Offset: 0x20c
	// Func End, Address: 0x441ce0, Func Offset: 0x230
}

// EffectSingleDuration__FP11xAnimSingle
// Start address: 0x441ce0
void EffectSingleDuration(xAnimSingle* single)
{
	float32 time;
	xAnimActiveEffect* alist;
	uint32 index;
	uint32 count;
	// Line 1719, Address: 0x441ce0, Func Offset: 0
	// Line 1722, Address: 0x441cfc, Func Offset: 0x1c
	// Line 1719, Address: 0x441d00, Func Offset: 0x20
	// Line 1720, Address: 0x441d04, Func Offset: 0x24
	// Line 1721, Address: 0x441d08, Func Offset: 0x28
	// Line 1722, Address: 0x441d0c, Func Offset: 0x2c
	// Line 1742, Address: 0x441d10, Func Offset: 0x30
	// Line 1727, Address: 0x441d2c, Func Offset: 0x4c
	// Line 1742, Address: 0x441d30, Func Offset: 0x50
	// Line 1727, Address: 0x441d3c, Func Offset: 0x5c
	// Line 1742, Address: 0x441d40, Func Offset: 0x60
	// Line 1729, Address: 0x441d4c, Func Offset: 0x6c
	// Line 1742, Address: 0x441d54, Func Offset: 0x74
	// Line 1730, Address: 0x441d7c, Func Offset: 0x9c
	// Line 1742, Address: 0x441d80, Func Offset: 0xa0
	// Line 1730, Address: 0x441da4, Func Offset: 0xc4
	// Line 1742, Address: 0x441db0, Func Offset: 0xd0
	// Line 1737, Address: 0x441dc0, Func Offset: 0xe0
	// Line 1742, Address: 0x441dc8, Func Offset: 0xe8
	// Line 1738, Address: 0x441dcc, Func Offset: 0xec
	// Line 1742, Address: 0x441dd4, Func Offset: 0xf4
	// Line 1743, Address: 0x441df0, Func Offset: 0x110
	// Func End, Address: 0x441e10, Func Offset: 0x130
}

// EffectSingleStart__FP11xAnimSingle
// Start address: 0x441e10
void EffectSingleStart(xAnimSingle* single)
{
	xAnimEffect* effect;
	xAnimActiveEffect tempActive;
	float32 time;
	uint32 flags;
	// Line 1672, Address: 0x441e10, Func Offset: 0
	// Line 1677, Address: 0x441e2c, Func Offset: 0x1c
	// Line 1675, Address: 0x441e30, Func Offset: 0x20
	// Line 1677, Address: 0x441e34, Func Offset: 0x24
	// Line 1675, Address: 0x441e38, Func Offset: 0x28
	// Line 1712, Address: 0x441e3c, Func Offset: 0x2c
	// Line 1682, Address: 0x441e60, Func Offset: 0x50
	// Line 1712, Address: 0x441e64, Func Offset: 0x54
	// Line 1701, Address: 0x441e74, Func Offset: 0x64
	// Line 1712, Address: 0x441e78, Func Offset: 0x68
	// Line 1701, Address: 0x441e8c, Func Offset: 0x7c
	// Line 1712, Address: 0x441e90, Func Offset: 0x80
	// Line 1706, Address: 0x441e9c, Func Offset: 0x8c
	// Line 1712, Address: 0x441ea0, Func Offset: 0x90
	// Line 1707, Address: 0x441ebc, Func Offset: 0xac
	// Line 1712, Address: 0x441ec0, Func Offset: 0xb0
	// Line 1688, Address: 0x441ef8, Func Offset: 0xe8
	// Line 1712, Address: 0x441efc, Func Offset: 0xec
	// Line 1689, Address: 0x441f18, Func Offset: 0x108
	// Line 1712, Address: 0x441f1c, Func Offset: 0x10c
	// Line 1698, Address: 0x441f30, Func Offset: 0x120
	// Line 1712, Address: 0x441f34, Func Offset: 0x124
	// Line 1690, Address: 0x441f64, Func Offset: 0x154
	// Line 1712, Address: 0x441f68, Func Offset: 0x158
	// Line 1693, Address: 0x441f74, Func Offset: 0x164
	// Line 1712, Address: 0x441f78, Func Offset: 0x168
	// Line 1693, Address: 0x441f7c, Func Offset: 0x16c
	// Line 1712, Address: 0x441f80, Func Offset: 0x170
	// Line 1691, Address: 0x441fb0, Func Offset: 0x1a0
	// Line 1712, Address: 0x441fb4, Func Offset: 0x1a4
	// Line 1692, Address: 0x441fc4, Func Offset: 0x1b4
	// Line 1693, Address: 0x441fcc, Func Offset: 0x1bc
	// Line 1712, Address: 0x441fd0, Func Offset: 0x1c0
	// Line 1695, Address: 0x441fec, Func Offset: 0x1dc
	// Line 1698, Address: 0x441ff4, Func Offset: 0x1e4
	// Line 1712, Address: 0x441ff8, Func Offset: 0x1e8
	// Line 1701, Address: 0x442014, Func Offset: 0x204
	// Line 1707, Address: 0x44201c, Func Offset: 0x20c
	// Line 1712, Address: 0x442020, Func Offset: 0x210
	// Line 1714, Address: 0x442048, Func Offset: 0x238
	// Line 1715, Address: 0x44204c, Func Offset: 0x23c
	// Func End, Address: 0x442068, Func Offset: 0x258
}

// xAnimTableGetState__FP10xAnimTablePCc
// Start address: 0x442070
xAnimState* xAnimTableGetState(xAnimTable* table, int8* name)
{
	// Line 1606, Address: 0x442070, Func Offset: 0
	// Line 1607, Address: 0x442080, Func Offset: 0x10
	// Line 1608, Address: 0x4420bc, Func Offset: 0x4c
	// Line 1607, Address: 0x4420c0, Func Offset: 0x50
	// Line 1608, Address: 0x4420c4, Func Offset: 0x54
	// Func End, Address: 0x4420d0, Func Offset: 0x60
}

// xAnimTableGetStateID__FP10xAnimTableUi
// Start address: 0x4420d0
xAnimState* xAnimTableGetStateID(xAnimTable* table, uint32 ID)
{
	xAnimState* curr;
	// Line 1587, Address: 0x4420d0, Func Offset: 0
	// Line 1588, Address: 0x4420d4, Func Offset: 0x4
	// Line 1589, Address: 0x4420dc, Func Offset: 0xc
	// Line 1590, Address: 0x4420e8, Func Offset: 0x18
	// Line 1591, Address: 0x4420f0, Func Offset: 0x20
	// Line 1592, Address: 0x4420f4, Func Offset: 0x24
	// Line 1593, Address: 0x442100, Func Offset: 0x30
	// Line 1594, Address: 0x442104, Func Offset: 0x34
	// Func End, Address: 0x44210c, Func Offset: 0x3c
}

// xAnimTableAddFileID__FP10xAnimTableP9xAnimFileUiUiUi
// Start address: 0x442110
xAnimState* xAnimTableAddFileID(xAnimTable* table, xAnimFile* file, uint32 stateID, uint32 subStateID, uint32 subStateCount)
{
	// Line 1547, Address: 0x442110, Func Offset: 0
	// Line 1548, Address: 0x442130, Func Offset: 0x20
	// Line 1549, Address: 0x442164, Func Offset: 0x54
	// Line 1552, Address: 0x44216c, Func Offset: 0x5c
	// Line 1554, Address: 0x442174, Func Offset: 0x64
	// Line 1555, Address: 0x442180, Func Offset: 0x70
	// Line 1556, Address: 0x4421bc, Func Offset: 0xac
	// Line 1562, Address: 0x4421d0, Func Offset: 0xc0
	// Line 1563, Address: 0x4421d8, Func Offset: 0xc8
	// Line 1564, Address: 0x4421e4, Func Offset: 0xd4
	// Line 1570, Address: 0x4421f4, Func Offset: 0xe4
	// Line 1573, Address: 0x4421f8, Func Offset: 0xe8
	// Line 1574, Address: 0x442208, Func Offset: 0xf8
	// Line 1575, Address: 0x442220, Func Offset: 0x110
	// Line 1576, Address: 0x442228, Func Offset: 0x118
	// Line 1582, Address: 0x442244, Func Offset: 0x134
	// Line 1583, Address: 0x442248, Func Offset: 0x138
	// Func End, Address: 0x442264, Func Offset: 0x154
}

// xAnimTableAddFile__FP10xAnimTableP9xAnimFilePCc
// Start address: 0x442270
void xAnimTableAddFile(xAnimTable* table, xAnimFile* file, int8* states)
{
	uint8* buffer;
	int8* stateName;
	// Line 1533, Address: 0x442270, Func Offset: 0
	// Line 1534, Address: 0x442290, Func Offset: 0x20
	// Line 1538, Address: 0x44229c, Func Offset: 0x2c
	// Line 1534, Address: 0x4422a4, Func Offset: 0x34
	// Line 1538, Address: 0x4422a8, Func Offset: 0x38
	// Line 1539, Address: 0x4422b4, Func Offset: 0x44
	// Line 1540, Address: 0x4422bc, Func Offset: 0x4c
	// Line 1541, Address: 0x4422dc, Func Offset: 0x6c
	// Line 1542, Address: 0x4422f0, Func Offset: 0x80
	// Line 1543, Address: 0x4422f8, Func Offset: 0x88
	// Line 1544, Address: 0x442300, Func Offset: 0x90
	// Func End, Address: 0x442318, Func Offset: 0xa8
}

// xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
// Start address: 0x442320
xAnimTransition* xAnimTableNewTransition(xAnimTable* table, int8* source, int8* dest, uint32(*conditional)(xAnimTransition*, xAnimSingle*, void*), uint32(*callback)(xAnimTransition*, xAnimSingle*, void*), uint32 flags, uint32 userFlags, float32 srcTime, float32 destTime, uint16 priority, uint16 queuePriority, float32 fBlendTime, uint16* blendOffset)
{
	xAnimTransition* tran;
	uint8 isComplex;
	int32 i;
	// Line 1492, Address: 0x442320, Func Offset: 0
	// Line 1493, Address: 0x442380, Func Offset: 0x60
	// Line 1494, Address: 0x4423b8, Func Offset: 0x98
	// Line 1495, Address: 0x4423e4, Func Offset: 0xc4
	// Line 1498, Address: 0x4423e8, Func Offset: 0xc8
	// Line 1495, Address: 0x4423ec, Func Offset: 0xcc
	// Line 1499, Address: 0x4423f0, Func Offset: 0xd0
	// Line 1502, Address: 0x442404, Func Offset: 0xe4
	// Line 1503, Address: 0x44240c, Func Offset: 0xec
	// Line 1502, Address: 0x442414, Func Offset: 0xf4
	// Line 1503, Address: 0x44241c, Func Offset: 0xfc
	// Line 1507, Address: 0x44242c, Func Offset: 0x10c
	// Line 1517, Address: 0x44244c, Func Offset: 0x12c
	// Line 1518, Address: 0x442450, Func Offset: 0x130
	// Line 1519, Address: 0x442454, Func Offset: 0x134
	// Line 1520, Address: 0x442458, Func Offset: 0x138
	// Line 1521, Address: 0x44245c, Func Offset: 0x13c
	// Line 1523, Address: 0x442460, Func Offset: 0x140
	// Line 1522, Address: 0x442464, Func Offset: 0x144
	// Line 1524, Address: 0x442468, Func Offset: 0x148
	// Line 1525, Address: 0x44246c, Func Offset: 0x14c
	// Line 1523, Address: 0x442470, Func Offset: 0x150
	// Line 1525, Address: 0x442474, Func Offset: 0x154
	// Line 1526, Address: 0x44258c, Func Offset: 0x26c
	// Line 1525, Address: 0x442590, Func Offset: 0x270
	// Line 1526, Address: 0x442598, Func Offset: 0x278
	// Line 1528, Address: 0x44259c, Func Offset: 0x27c
	// Line 1529, Address: 0x4425b0, Func Offset: 0x290
	// Line 1504, Address: 0x4425b8, Func Offset: 0x298
	// Line 1529, Address: 0x4425bc, Func Offset: 0x29c
	// Line 1509, Address: 0x4425c4, Func Offset: 0x2a4
	// Line 1529, Address: 0x4425d4, Func Offset: 0x2b4
	// Line 1509, Address: 0x4425f4, Func Offset: 0x2d4
	// Line 1529, Address: 0x4425fc, Func Offset: 0x2dc
	// Line 1509, Address: 0x442608, Func Offset: 0x2e8
	// Line 1530, Address: 0x442614, Func Offset: 0x2f4
	// Func End, Address: 0x442654, Func Offset: 0x334
}

// xAnimTableAddTransition__FP10xAnimTableP15xAnimTransitionPCc
// Start address: 0x442660
void xAnimTableAddTransition(xAnimTable* table, xAnimTransition* tran, int8* source)
{
	// Line 1485, Address: 0x442660, Func Offset: 0
	// Func End, Address: 0x442668, Func Offset: 0x8
}

// _xAnimTableAddTransition__FP10xAnimTableP15xAnimTransitionPCcPCc
// Start address: 0x442670
void _xAnimTableAddTransition(xAnimTable* table, xAnimTransition* tran, int8* source, int8* dest)
{
	uint8* buffer;
	xAnimState** stateList;
	uint32 i;
	uint32 stateCount;
	uint32 allocCount;
	int8* stateName;
	xAnimTransitionList* tlist;
	xAnimTransition* substTransitionList[32];
	uint32 substTransitionCount;
	uint8 hasSubst;
	int32 i;
	uint8 isComplex;
	int8* COMPLEX_PATTERNS;
	int8* search;
	xAnimState* state;
	int8 extra[128];
	int8 tempName[128];
	int8* tempIterator;
	int8* extraIterator;
	uint8 allowMissingState;
	int32 i;
	uint32 extraIteratorLength;
	xAnimTransition* duplicatedTransition;
	// Line 1334, Address: 0x442670, Func Offset: 0
	// Line 1339, Address: 0x442688, Func Offset: 0x18
	// Line 1334, Address: 0x44268c, Func Offset: 0x1c
	// Line 1347, Address: 0x4426a4, Func Offset: 0x34
	// Line 1334, Address: 0x4426a8, Func Offset: 0x38
	// Line 1337, Address: 0x4426ac, Func Offset: 0x3c
	// Line 1347, Address: 0x4426b8, Func Offset: 0x48
	// Line 1349, Address: 0x4426c8, Func Offset: 0x58
	// Line 1350, Address: 0x4426cc, Func Offset: 0x5c
	// Line 1349, Address: 0x4426d0, Func Offset: 0x60
	// Line 1354, Address: 0x4426d4, Func Offset: 0x64
	// Line 1355, Address: 0x4426dc, Func Offset: 0x6c
	// Line 1356, Address: 0x4426e8, Func Offset: 0x78
	// Line 1355, Address: 0x4426f0, Func Offset: 0x80
	// Line 1356, Address: 0x4426f8, Func Offset: 0x88
	// Line 1359, Address: 0x442708, Func Offset: 0x98
	// Line 1357, Address: 0x442724, Func Offset: 0xb4
	// Line 1365, Address: 0x44272c, Func Offset: 0xbc
	// Line 1366, Address: 0x442740, Func Offset: 0xd0
	// Line 1368, Address: 0x442750, Func Offset: 0xe0
	// Line 1369, Address: 0x442754, Func Offset: 0xe4
	// Line 1371, Address: 0x44275c, Func Offset: 0xec
	// Line 1370, Address: 0x442760, Func Offset: 0xf0
	// Line 1371, Address: 0x442764, Func Offset: 0xf4
	// Line 1372, Address: 0x442774, Func Offset: 0x104
	// Line 1376, Address: 0x4427d0, Func Offset: 0x160
	// Line 1380, Address: 0x4427e0, Func Offset: 0x170
	// Line 1382, Address: 0x4427e8, Func Offset: 0x178
	// Line 1384, Address: 0x4427f0, Func Offset: 0x180
	// Line 1386, Address: 0x4427f8, Func Offset: 0x188
	// Line 1390, Address: 0x442854, Func Offset: 0x1e4
	// Line 1396, Address: 0x442860, Func Offset: 0x1f0
	// Line 1393, Address: 0x442864, Func Offset: 0x1f4
	// Line 1394, Address: 0x442868, Func Offset: 0x1f8
	// Line 1395, Address: 0x44286c, Func Offset: 0x1fc
	// Line 1396, Address: 0x442870, Func Offset: 0x200
	// Line 1397, Address: 0x442884, Func Offset: 0x214
	// Line 1396, Address: 0x442888, Func Offset: 0x218
	// Line 1397, Address: 0x44288c, Func Offset: 0x21c
	// Line 1405, Address: 0x4428a0, Func Offset: 0x230
	// Line 1409, Address: 0x4428c8, Func Offset: 0x258
	// Line 1410, Address: 0x44290c, Func Offset: 0x29c
	// Line 1415, Address: 0x442920, Func Offset: 0x2b0
	// Line 1416, Address: 0x44292c, Func Offset: 0x2bc
	// Line 1417, Address: 0x442960, Func Offset: 0x2f0
	// Line 1418, Address: 0x442970, Func Offset: 0x300
	// Line 1421, Address: 0x442974, Func Offset: 0x304
	// Line 1424, Address: 0x442978, Func Offset: 0x308
	// Line 1421, Address: 0x44297c, Func Offset: 0x30c
	// Line 1428, Address: 0x442994, Func Offset: 0x324
	// Line 1429, Address: 0x4429a0, Func Offset: 0x330
	// Line 1433, Address: 0x442a80, Func Offset: 0x410
	// Line 1434, Address: 0x442a84, Func Offset: 0x414
	// Line 1450, Address: 0x442a8c, Func Offset: 0x41c
	// Line 1451, Address: 0x442aa0, Func Offset: 0x430
	// Line 1453, Address: 0x442aa8, Func Offset: 0x438
	// Line 1454, Address: 0x442ab0, Func Offset: 0x440
	// Line 1457, Address: 0x442ae4, Func Offset: 0x474
	// Line 1458, Address: 0x442af4, Func Offset: 0x484
	// Line 1459, Address: 0x442b08, Func Offset: 0x498
	// Line 1460, Address: 0x442b18, Func Offset: 0x4a8
	// Line 1469, Address: 0x442b34, Func Offset: 0x4c4
	// Line 1460, Address: 0x442b38, Func Offset: 0x4c8
	// Line 1469, Address: 0x442b40, Func Offset: 0x4d0
	// Line 1471, Address: 0x442b50, Func Offset: 0x4e0
	// Line 1473, Address: 0x442b58, Func Offset: 0x4e8
	// Line 1474, Address: 0x442b6c, Func Offset: 0x4fc
	// Line 1475, Address: 0x442b80, Func Offset: 0x510
	// Line 1476, Address: 0x442b94, Func Offset: 0x524
	// Line 1477, Address: 0x442b98, Func Offset: 0x528
	// Line 1476, Address: 0x442b9c, Func Offset: 0x52c
	// Line 1477, Address: 0x442ba8, Func Offset: 0x538
	// Line 1480, Address: 0x442bb8, Func Offset: 0x548
	// Line 1481, Address: 0x442bc4, Func Offset: 0x554
	// Line 1374, Address: 0x442bcc, Func Offset: 0x55c
	// Line 1398, Address: 0x442bd4, Func Offset: 0x564
	// Line 1400, Address: 0x442bd8, Func Offset: 0x568
	// Line 1481, Address: 0x442bdc, Func Offset: 0x56c
	// Line 1400, Address: 0x442be8, Func Offset: 0x578
	// Line 1401, Address: 0x442bec, Func Offset: 0x57c
	// Line 1481, Address: 0x442bf0, Func Offset: 0x580
	// Line 1404, Address: 0x442c00, Func Offset: 0x590
	// Line 1481, Address: 0x442c08, Func Offset: 0x598
	// Line 1428, Address: 0x442c0c, Func Offset: 0x59c
	// Line 1481, Address: 0x442c14, Func Offset: 0x5a4
	// Line 1436, Address: 0x442c3c, Func Offset: 0x5cc
	// Line 1481, Address: 0x442c40, Func Offset: 0x5d0
	// Line 1438, Address: 0x442c64, Func Offset: 0x5f4
	// Line 1481, Address: 0x442c6c, Func Offset: 0x5fc
	// Line 1438, Address: 0x442c78, Func Offset: 0x608
	// Line 1481, Address: 0x442c7c, Func Offset: 0x60c
	// Line 1446, Address: 0x442c94, Func Offset: 0x624
	// Line 1481, Address: 0x442c98, Func Offset: 0x628
	// Line 1446, Address: 0x442cb8, Func Offset: 0x648
	// Line 1481, Address: 0x442cc0, Func Offset: 0x650
	// Line 1446, Address: 0x442ce4, Func Offset: 0x674
	// Line 1481, Address: 0x442ce8, Func Offset: 0x678
	// Line 1446, Address: 0x442cf0, Func Offset: 0x680
	// Line 1481, Address: 0x442cf8, Func Offset: 0x688
	// Line 1446, Address: 0x442d0c, Func Offset: 0x69c
	// Line 1481, Address: 0x442d14, Func Offset: 0x6a4
	// Line 1446, Address: 0x442d2c, Func Offset: 0x6bc
	// Line 1481, Address: 0x442d34, Func Offset: 0x6c4
	// Line 1446, Address: 0x442d40, Func Offset: 0x6d0
	// Line 1481, Address: 0x442d44, Func Offset: 0x6d4
	// Line 1446, Address: 0x442d4c, Func Offset: 0x6dc
	// Line 1481, Address: 0x442d50, Func Offset: 0x6e0
	// Line 1446, Address: 0x442d54, Func Offset: 0x6e4
	// Line 1481, Address: 0x442d58, Func Offset: 0x6e8
	// Line 1445, Address: 0x442d78, Func Offset: 0x708
	// Line 1481, Address: 0x442d80, Func Offset: 0x710
	// Line 1465, Address: 0x442db0, Func Offset: 0x740
	// Line 1481, Address: 0x442db4, Func Offset: 0x744
	// Func End, Address: 0x442df4, Func Offset: 0x784
}

// xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimStatePv_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
// Start address: 0x442e00
xAnimState* xAnimTableNewState(xAnimTable* table, int8* name, uint32 flags, uint32 userFlags, float32 speed, float32* boneBlend, float32* timeSnap, float32 fadeRecip, uint16* fadeOffset, void* callbackData, void(*beforeEnter)(xAnimPlay*, xAnimState*, void*), void(*stateCallback)(xAnimState*, xAnimSingle*, void*), void(*beforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32))
{
	xAnimState* state;
	// Line 1127, Address: 0x442e00, Func Offset: 0
	// Line 1130, Address: 0x442e54, Func Offset: 0x54
	// Line 1131, Address: 0x442e8c, Func Offset: 0x8c
	// Line 1135, Address: 0x442e94, Func Offset: 0x94
	// Line 1136, Address: 0x442e9c, Func Offset: 0x9c
	// Line 1144, Address: 0x442ea4, Func Offset: 0xa4
	// Line 1145, Address: 0x442eb4, Func Offset: 0xb4
	// Line 1146, Address: 0x442eb8, Func Offset: 0xb8
	// Line 1147, Address: 0x442ebc, Func Offset: 0xbc
	// Line 1148, Address: 0x442ec0, Func Offset: 0xc0
	// Line 1149, Address: 0x442ec4, Func Offset: 0xc4
	// Line 1150, Address: 0x442ec8, Func Offset: 0xc8
	// Line 1151, Address: 0x442ecc, Func Offset: 0xcc
	// Line 1152, Address: 0x442ed0, Func Offset: 0xd0
	// Line 1154, Address: 0x442ed4, Func Offset: 0xd4
	// Line 1160, Address: 0x442fec, Func Offset: 0x1ec
	// Line 1154, Address: 0x442ff0, Func Offset: 0x1f0
	// Line 1161, Address: 0x442ff4, Func Offset: 0x1f4
	// Line 1164, Address: 0x442ff8, Func Offset: 0x1f8
	// Line 1162, Address: 0x442ffc, Func Offset: 0x1fc
	// Line 1155, Address: 0x443000, Func Offset: 0x200
	// Line 1157, Address: 0x443004, Func Offset: 0x204
	// Line 1159, Address: 0x443008, Func Offset: 0x208
	// Line 1160, Address: 0x44300c, Func Offset: 0x20c
	// Line 1161, Address: 0x443010, Func Offset: 0x210
	// Line 1164, Address: 0x443014, Func Offset: 0x214
	// Line 1134, Address: 0x443020, Func Offset: 0x220
	// Line 1165, Address: 0x443028, Func Offset: 0x228
	// Func End, Address: 0x443060, Func Offset: 0x260
}

// xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimStatePv
// Start address: 0x443060
void xAnimDefaultBeforeEnter(xAnimState* state)
{
	uint32 entry;
	// Line 1115, Address: 0x443060, Func Offset: 0
	// Line 1116, Address: 0x443074, Func Offset: 0x14
	// Line 1117, Address: 0x44307c, Func Offset: 0x1c
	// Line 1118, Address: 0x443090, Func Offset: 0x30
	// Line 1120, Address: 0x4430a0, Func Offset: 0x40
	// Func End, Address: 0x4430b4, Func Offset: 0x54
}

// xAnimTableNew__FPCcUi
// Start address: 0x4430c0
xAnimTable* xAnimTableNew(int8* name, uint32 userFlags)
{
	xAnimTable* table;
	// Line 1102, Address: 0x4430c0, Func Offset: 0
	// Line 1104, Address: 0x4430c4, Func Offset: 0x4
	// Line 1102, Address: 0x4430c8, Func Offset: 0x8
	// Line 1104, Address: 0x4430d8, Func Offset: 0x18
	// Line 1105, Address: 0x4430e8, Func Offset: 0x28
	// Line 1106, Address: 0x4430ec, Func Offset: 0x2c
	// Line 1107, Address: 0x4430f0, Func Offset: 0x30
	// Line 1108, Address: 0x4430f4, Func Offset: 0x34
	// Line 1109, Address: 0x4430f8, Func Offset: 0x38
	// Line 1110, Address: 0x4430fc, Func Offset: 0x3c
	// Line 1112, Address: 0x443100, Func Offset: 0x40
	// Func End, Address: 0x443114, Func Offset: 0x54
}

// xAnimStateNewEffect__FP10xAnimStateUsUsffPFUiP17xAnimActiveEffectP11xAnimSinglePv_UiUi
// Start address: 0x443120
xAnimEffect* xAnimStateNewEffect(xAnimState* state, uint16 flags, uint16 probability, float32 startTime, float32 endTime, uint32(*callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*), uint32 userDataSize)
{
	xAnimEffect* curr;
	xAnimEffect** prev;
	xAnimEffect* effect;
	// Line 1046, Address: 0x443120, Func Offset: 0
	// Line 1047, Address: 0x443150, Func Offset: 0x30
	// Line 1048, Address: 0x443184, Func Offset: 0x64
	// Line 1055, Address: 0x443188, Func Offset: 0x68
	// Line 1049, Address: 0x44318c, Func Offset: 0x6c
	// Line 1050, Address: 0x443190, Func Offset: 0x70
	// Line 1051, Address: 0x443194, Func Offset: 0x74
	// Line 1052, Address: 0x443198, Func Offset: 0x78
	// Line 1056, Address: 0x44319c, Func Offset: 0x7c
	// Line 1060, Address: 0x4431a0, Func Offset: 0x80
	// Line 1058, Address: 0x4431c0, Func Offset: 0xa0
	// Line 1061, Address: 0x4431d0, Func Offset: 0xb0
	// Line 1062, Address: 0x4431d4, Func Offset: 0xb4
	// Line 1065, Address: 0x4431d8, Func Offset: 0xb8
	// Func End, Address: 0x4431fc, Func Offset: 0xdc
}

// xAnimFileEval__FP9xAnimFilefPfUiP5xVec3P5xQuatPf
// Start address: 0x443200
void xAnimFileEval(xAnimFile* data, float32 time, float32* bilinear, uint32 flags, xVec3* tran, xQuat* quat)
{
	int32 i;
	uint32 numBones;
	float32 bilerp[2];
	uint32 biindex[2];
	uint32 biplus[2];
	xQuat* q0;
	xVec3* t0;
	xQuat* q1;
	xVec3* t1;
	// Line 957, Address: 0x443200, Func Offset: 0
	// Line 965, Address: 0x443248, Func Offset: 0x48
	// Line 966, Address: 0x443298, Func Offset: 0x98
	// Line 969, Address: 0x4432d4, Func Offset: 0xd4
	// Line 974, Address: 0x4432e0, Func Offset: 0xe0
	// Line 975, Address: 0x4432f8, Func Offset: 0xf8
	// Line 976, Address: 0x443308, Func Offset: 0x108
	// Line 979, Address: 0x443310, Func Offset: 0x110
	// Line 984, Address: 0x443324, Func Offset: 0x124
	// Line 985, Address: 0x443354, Func Offset: 0x154
	// Line 986, Address: 0x4433b4, Func Offset: 0x1b4
	// Line 987, Address: 0x4433c0, Func Offset: 0x1c0
	// Line 988, Address: 0x4433c4, Func Offset: 0x1c4
	// Line 987, Address: 0x4433c8, Func Offset: 0x1c8
	// Line 988, Address: 0x4433cc, Func Offset: 0x1cc
	// Line 989, Address: 0x443408, Func Offset: 0x208
	// Line 988, Address: 0x44340c, Func Offset: 0x20c
	// Line 989, Address: 0x443414, Func Offset: 0x214
	// Line 988, Address: 0x443418, Func Offset: 0x218
	// Line 989, Address: 0x44341c, Func Offset: 0x21c
	// Line 990, Address: 0x443428, Func Offset: 0x228
	// Line 989, Address: 0x44342c, Func Offset: 0x22c
	// Line 990, Address: 0x443440, Func Offset: 0x240
	// Line 994, Address: 0x44344c, Func Offset: 0x24c
	// Line 990, Address: 0x443450, Func Offset: 0x250
	// Line 997, Address: 0x443454, Func Offset: 0x254
	// Line 993, Address: 0x443460, Func Offset: 0x260
	// Line 997, Address: 0x443464, Func Offset: 0x264
	// Line 1014, Address: 0x44346c, Func Offset: 0x26c
	// Line 1021, Address: 0x443484, Func Offset: 0x284
	// Line 1024, Address: 0x443494, Func Offset: 0x294
	// Line 1025, Address: 0x4434cc, Func Offset: 0x2cc
	// Line 1026, Address: 0x443504, Func Offset: 0x304
	// Line 1038, Address: 0x443538, Func Offset: 0x338
	// Line 966, Address: 0x443544, Func Offset: 0x344
	// Line 1038, Address: 0x443550, Func Offset: 0x350
	// Line 997, Address: 0x443558, Func Offset: 0x358
	// Line 1038, Address: 0x44355c, Func Offset: 0x35c
	// Line 1000, Address: 0x443568, Func Offset: 0x368
	// Line 1038, Address: 0x44356c, Func Offset: 0x36c
	// Line 1004, Address: 0x443570, Func Offset: 0x370
	// Line 1038, Address: 0x443574, Func Offset: 0x374
	// Line 1004, Address: 0x443578, Func Offset: 0x378
	// Line 1038, Address: 0x44357c, Func Offset: 0x37c
	// Line 1004, Address: 0x443580, Func Offset: 0x380
	// Line 1038, Address: 0x443588, Func Offset: 0x388
	// Line 1004, Address: 0x44358c, Func Offset: 0x38c
	// Line 1038, Address: 0x443590, Func Offset: 0x390
	// Line 1004, Address: 0x443594, Func Offset: 0x394
	// Line 1038, Address: 0x443598, Func Offset: 0x398
	// Line 1005, Address: 0x4435b4, Func Offset: 0x3b4
	// Line 1038, Address: 0x4435b8, Func Offset: 0x3b8
	// Line 1005, Address: 0x4435bc, Func Offset: 0x3bc
	// Line 1038, Address: 0x4435c8, Func Offset: 0x3c8
	// Line 1005, Address: 0x4435d0, Func Offset: 0x3d0
	// Line 1038, Address: 0x4435d4, Func Offset: 0x3d4
	// Line 1006, Address: 0x4435e8, Func Offset: 0x3e8
	// Line 1038, Address: 0x443610, Func Offset: 0x410
	// Line 1008, Address: 0x443624, Func Offset: 0x424
	// Line 1038, Address: 0x443628, Func Offset: 0x428
	// Line 1008, Address: 0x44362c, Func Offset: 0x42c
	// Line 1038, Address: 0x443638, Func Offset: 0x438
	// Line 1008, Address: 0x443640, Func Offset: 0x440
	// Line 1038, Address: 0x443644, Func Offset: 0x444
	// Line 1009, Address: 0x443660, Func Offset: 0x460
	// Line 1038, Address: 0x443664, Func Offset: 0x464
	// Line 1009, Address: 0x443668, Func Offset: 0x468
	// Line 1038, Address: 0x443674, Func Offset: 0x474
	// Line 1009, Address: 0x44367c, Func Offset: 0x47c
	// Line 1038, Address: 0x443680, Func Offset: 0x480
	// Line 1010, Address: 0x443694, Func Offset: 0x494
	// Line 1038, Address: 0x4436bc, Func Offset: 0x4bc
	// Line 1012, Address: 0x4436c8, Func Offset: 0x4c8
	// Line 1038, Address: 0x4436cc, Func Offset: 0x4cc
	// Line 1012, Address: 0x4436d0, Func Offset: 0x4d0
	// Line 1038, Address: 0x4436f4, Func Offset: 0x4f4
	// Line 1014, Address: 0x4436fc, Func Offset: 0x4fc
	// Line 1038, Address: 0x443704, Func Offset: 0x504
	// Line 1017, Address: 0x443710, Func Offset: 0x510
	// Line 1038, Address: 0x443714, Func Offset: 0x514
	// Line 1017, Address: 0x443718, Func Offset: 0x518
	// Line 1038, Address: 0x44371c, Func Offset: 0x51c
	// Line 1017, Address: 0x443720, Func Offset: 0x520
	// Line 1038, Address: 0x443728, Func Offset: 0x528
	// Line 1017, Address: 0x44372c, Func Offset: 0x52c
	// Line 1038, Address: 0x443730, Func Offset: 0x530
	// Line 1018, Address: 0x443744, Func Offset: 0x544
	// Line 1038, Address: 0x443748, Func Offset: 0x548
	// Line 1018, Address: 0x44374c, Func Offset: 0x54c
	// Line 1038, Address: 0x443750, Func Offset: 0x550
	// Line 1018, Address: 0x443754, Func Offset: 0x554
	// Line 1038, Address: 0x443758, Func Offset: 0x558
	// Line 1018, Address: 0x44375c, Func Offset: 0x55c
	// Line 1038, Address: 0x443760, Func Offset: 0x560
	// Line 1018, Address: 0x443764, Func Offset: 0x564
	// Line 1038, Address: 0x443768, Func Offset: 0x568
	// Line 1019, Address: 0x44377c, Func Offset: 0x57c
	// Line 1038, Address: 0x4437a4, Func Offset: 0x5a4
	// Line 1021, Address: 0x4437ac, Func Offset: 0x5ac
	// Line 1038, Address: 0x4437b4, Func Offset: 0x5b4
	// Line 1030, Address: 0x4437b8, Func Offset: 0x5b8
	// Line 1038, Address: 0x4437bc, Func Offset: 0x5bc
	// Line 1030, Address: 0x4437c0, Func Offset: 0x5c0
	// Line 1038, Address: 0x4437c4, Func Offset: 0x5c4
	// Line 1030, Address: 0x4437c8, Func Offset: 0x5c8
	// Line 1038, Address: 0x4437cc, Func Offset: 0x5cc
	// Line 1030, Address: 0x4437d0, Func Offset: 0x5d0
	// Line 1038, Address: 0x4437d4, Func Offset: 0x5d4
	// Line 1030, Address: 0x4437d8, Func Offset: 0x5d8
	// Line 1038, Address: 0x4437dc, Func Offset: 0x5dc
	// Line 1033, Address: 0x4437ec, Func Offset: 0x5ec
	// Line 1038, Address: 0x4437f4, Func Offset: 0x5f4
	// Line 1035, Address: 0x4437f8, Func Offset: 0x5f8
	// Line 1038, Address: 0x443804, Func Offset: 0x604
	// Func End, Address: 0x443850, Func Offset: 0x650
}

// xAnimFileSetTime__FP9xAnimFileff
// Start address: 0x443850
void xAnimFileSetTime(xAnimFile* data, float32 duration, float32 timeOffset)
{
	float32 rawDuration;
	// Line 943, Address: 0x443850, Func Offset: 0
	// Line 944, Address: 0x443868, Func Offset: 0x18
	// Line 945, Address: 0x44389c, Func Offset: 0x4c
	// Line 946, Address: 0x4438bc, Func Offset: 0x6c
	// Line 949, Address: 0x4438c0, Func Offset: 0x70
	// Line 950, Address: 0x4438c4, Func Offset: 0x74
	// Line 951, Address: 0x4438d0, Func Offset: 0x80
	// Line 952, Address: 0x4438d4, Func Offset: 0x84
	// Line 953, Address: 0x4438f4, Func Offset: 0xa4
	// Func End, Address: 0x44390c, Func Offset: 0xbc
}

// xAnimFileNew__FPvPCcUiPP9xAnimFile
// Start address: 0x443910
xAnimFile* xAnimFileNew(void* rawData, int8* name, uint32 flags, xAnimFile** linkedList)
{
	// Line 935, Address: 0x443910, Func Offset: 0
	// Line 937, Address: 0x443934, Func Offset: 0x24
	// Line 938, Address: 0x44395c, Func Offset: 0x4c
	// Func End, Address: 0x443974, Func Offset: 0x64
}

// xAnimFileNewBilinear__FPPvPCcUiUiPP9xAnimFileUiUi
// Start address: 0x443980
xAnimFile* xAnimFileNewBilinear(void** rawData, int8* name, uint32 hashed_name_id, uint32 flags, xAnimFile** linkedList, uint32 numX, uint32 numY)
{
	int32 i;
	xAnimFile* afile;
	// Line 894, Address: 0x443980, Func Offset: 0
	// Line 896, Address: 0x4439c4, Func Offset: 0x44
	// Line 902, Address: 0x443a04, Func Offset: 0x84
	// Line 903, Address: 0x443a1c, Func Offset: 0x9c
	// Line 906, Address: 0x443a20, Func Offset: 0xa0
	// Line 907, Address: 0x443a38, Func Offset: 0xb8
	// Line 909, Address: 0x443a3c, Func Offset: 0xbc
	// Line 910, Address: 0x443a44, Func Offset: 0xc4
	// Line 911, Address: 0x443a4c, Func Offset: 0xcc
	// Line 916, Address: 0x443a50, Func Offset: 0xd0
	// Line 918, Address: 0x443a54, Func Offset: 0xd4
	// Line 917, Address: 0x443a58, Func Offset: 0xd8
	// Line 918, Address: 0x443a5c, Func Offset: 0xdc
	// Line 923, Address: 0x443b74, Func Offset: 0x1f4
	// Line 925, Address: 0x443bd8, Func Offset: 0x258
	// Line 926, Address: 0x443bf8, Func Offset: 0x278
	// Line 931, Address: 0x443bfc, Func Offset: 0x27c
	// Line 927, Address: 0x443c00, Func Offset: 0x280
	// Line 931, Address: 0x443c04, Func Offset: 0x284
	// Line 923, Address: 0x443c24, Func Offset: 0x2a4
	// Line 931, Address: 0x443c28, Func Offset: 0x2a8
	// Line 932, Address: 0x443c38, Func Offset: 0x2b8
	// Func End, Address: 0x443c68, Func Offset: 0x2e8
}

// xAnimCalcPhysicsData__FP9xAnimFileP9xAnimFile
// Start address: 0x443c70
void xAnimCalcPhysicsData(xAnimFile* afile, xAnimFile* endPose)
{
	int32 numAnims;
	uint8 axis[3];
	int32 tranCount;
	uint32 size;
	xAnimPhysicsData* physDat;
	xVec3* tranTable;
	float32* yawTable;
	xVec3 tranStart[64];
	xQuat quatStart[64];
	xVec3 tranEnd[64];
	xQuat quatEnd[64];
	xVec3* tempTable;
	int32 i;
	int32 i;
	int32 i;
	float32 yawStart;
	float32 yawEnd;
	float32* tempYaw;
	int32 i;
	int32 i;
	float32 subOff;
	int32 i;
	int32 i;
	// Line 729, Address: 0x443c70, Func Offset: 0
	// Line 730, Address: 0x443cac, Func Offset: 0x3c
	// Line 733, Address: 0x443cc0, Func Offset: 0x50
	// Line 736, Address: 0x443cc8, Func Offset: 0x58
	// Line 743, Address: 0x443cd0, Func Offset: 0x60
	// Line 745, Address: 0x443cd8, Func Offset: 0x68
	// Line 743, Address: 0x443cdc, Func Offset: 0x6c
	// Line 745, Address: 0x443ce8, Func Offset: 0x78
	// Line 746, Address: 0x443cfc, Func Offset: 0x8c
	// Line 747, Address: 0x443d00, Func Offset: 0x90
	// Line 748, Address: 0x443d08, Func Offset: 0x98
	// Line 750, Address: 0x443d0c, Func Offset: 0x9c
	// Line 751, Address: 0x443d24, Func Offset: 0xb4
	// Line 752, Address: 0x443d28, Func Offset: 0xb8
	// Line 753, Address: 0x443d30, Func Offset: 0xc0
	// Line 757, Address: 0x443d34, Func Offset: 0xc4
	// Line 762, Address: 0x443d44, Func Offset: 0xd4
	// Line 757, Address: 0x443d48, Func Offset: 0xd8
	// Line 761, Address: 0x443d4c, Func Offset: 0xdc
	// Line 762, Address: 0x443d50, Func Offset: 0xe0
	// Line 761, Address: 0x443d54, Func Offset: 0xe4
	// Line 762, Address: 0x443d5c, Func Offset: 0xec
	// Line 763, Address: 0x443d68, Func Offset: 0xf8
	// Line 765, Address: 0x443d70, Func Offset: 0x100
	// Line 766, Address: 0x443d9c, Func Offset: 0x12c
	// Line 767, Address: 0x443da0, Func Offset: 0x130
	// Line 769, Address: 0x443da8, Func Offset: 0x138
	// Line 770, Address: 0x443dbc, Func Offset: 0x14c
	// Line 771, Address: 0x443dcc, Func Offset: 0x15c
	// Line 772, Address: 0x443dd4, Func Offset: 0x164
	// Line 779, Address: 0x443dd8, Func Offset: 0x168
	// Line 774, Address: 0x443de0, Func Offset: 0x170
	// Line 779, Address: 0x443de4, Func Offset: 0x174
	// Line 781, Address: 0x443df8, Func Offset: 0x188
	// Line 783, Address: 0x443e04, Func Offset: 0x194
	// Line 785, Address: 0x443e10, Func Offset: 0x1a0
	// Line 793, Address: 0x443e1c, Func Offset: 0x1ac
	// Line 794, Address: 0x443e24, Func Offset: 0x1b4
	// Line 799, Address: 0x443e40, Func Offset: 0x1d0
	// Line 801, Address: 0x443e4c, Func Offset: 0x1dc
	// Line 803, Address: 0x443e58, Func Offset: 0x1e8
	// Line 807, Address: 0x443e64, Func Offset: 0x1f4
	// Line 815, Address: 0x443e80, Func Offset: 0x210
	// Line 827, Address: 0x443e8c, Func Offset: 0x21c
	// Line 829, Address: 0x443e98, Func Offset: 0x228
	// Line 827, Address: 0x443ea4, Func Offset: 0x234
	// Line 829, Address: 0x443eb0, Func Offset: 0x240
	// Line 827, Address: 0x443eb4, Func Offset: 0x244
	// Line 829, Address: 0x443ec4, Func Offset: 0x254
	// Line 833, Address: 0x443ecc, Func Offset: 0x25c
	// Line 829, Address: 0x443ed8, Func Offset: 0x268
	// Line 830, Address: 0x443ef8, Func Offset: 0x288
	// Line 831, Address: 0x443f04, Func Offset: 0x294
	// Line 832, Address: 0x443f10, Func Offset: 0x2a0
	// Line 831, Address: 0x443f14, Func Offset: 0x2a4
	// Line 832, Address: 0x443f18, Func Offset: 0x2a8
	// Line 831, Address: 0x443f24, Func Offset: 0x2b4
	// Line 832, Address: 0x443f2c, Func Offset: 0x2bc
	// Line 833, Address: 0x443f40, Func Offset: 0x2d0
	// Line 796, Address: 0x443f6c, Func Offset: 0x2fc
	// Line 833, Address: 0x443f74, Func Offset: 0x304
	// Line 816, Address: 0x443fa4, Func Offset: 0x334
	// Line 833, Address: 0x443fa8, Func Offset: 0x338
	// Line 816, Address: 0x443fb8, Func Offset: 0x348
	// Line 833, Address: 0x443fbc, Func Offset: 0x34c
	// Line 818, Address: 0x443fcc, Func Offset: 0x35c
	// Line 833, Address: 0x443fd8, Func Offset: 0x368
	// Line 834, Address: 0x444008, Func Offset: 0x398
	// Line 839, Address: 0x444014, Func Offset: 0x3a4
	// Line 834, Address: 0x444018, Func Offset: 0x3a8
	// Line 839, Address: 0x44402c, Func Offset: 0x3bc
	// Line 844, Address: 0x444038, Func Offset: 0x3c8
	// Line 846, Address: 0x444040, Func Offset: 0x3d0
	// Line 847, Address: 0x44404c, Func Offset: 0x3dc
	// Line 849, Address: 0x444054, Func Offset: 0x3e4
	// Line 847, Address: 0x444058, Func Offset: 0x3e8
	// Line 849, Address: 0x44405c, Func Offset: 0x3ec
	// Line 855, Address: 0x444070, Func Offset: 0x400
	// Line 874, Address: 0x44407c, Func Offset: 0x40c
	// Line 871, Address: 0x4440c8, Func Offset: 0x458
	// Line 874, Address: 0x4440d0, Func Offset: 0x460
	// Line 871, Address: 0x4440dc, Func Offset: 0x46c
	// Line 874, Address: 0x4440e0, Func Offset: 0x470
	// Line 871, Address: 0x4440e4, Func Offset: 0x474
	// Line 874, Address: 0x4440e8, Func Offset: 0x478
	// Line 871, Address: 0x4440fc, Func Offset: 0x48c
	// Line 874, Address: 0x444104, Func Offset: 0x494
	// Line 871, Address: 0x444108, Func Offset: 0x498
	// Line 874, Address: 0x444118, Func Offset: 0x4a8
	// Line 871, Address: 0x44411c, Func Offset: 0x4ac
	// Line 874, Address: 0x444124, Func Offset: 0x4b4
	// Line 871, Address: 0x444128, Func Offset: 0x4b8
	// Line 874, Address: 0x444130, Func Offset: 0x4c0
	// Line 871, Address: 0x444138, Func Offset: 0x4c8
	// Line 874, Address: 0x444144, Func Offset: 0x4d4
	// Line 871, Address: 0x444148, Func Offset: 0x4d8
	// Line 874, Address: 0x444150, Func Offset: 0x4e0
	// Line 871, Address: 0x444154, Func Offset: 0x4e4
	// Line 874, Address: 0x44415c, Func Offset: 0x4ec
	// Line 871, Address: 0x444164, Func Offset: 0x4f4
	// Line 874, Address: 0x444178, Func Offset: 0x508
	// Line 872, Address: 0x444180, Func Offset: 0x510
	// Line 873, Address: 0x444184, Func Offset: 0x514
	// Line 874, Address: 0x444188, Func Offset: 0x518
	// Line 872, Address: 0x444194, Func Offset: 0x524
	// Line 873, Address: 0x444198, Func Offset: 0x528
	// Line 874, Address: 0x44419c, Func Offset: 0x52c
	// Line 872, Address: 0x4441a8, Func Offset: 0x538
	// Line 873, Address: 0x4441ac, Func Offset: 0x53c
	// Line 874, Address: 0x4441b0, Func Offset: 0x540
	// Line 872, Address: 0x4441bc, Func Offset: 0x54c
	// Line 873, Address: 0x4441c0, Func Offset: 0x550
	// Line 874, Address: 0x4441c4, Func Offset: 0x554
	// Line 872, Address: 0x4441d0, Func Offset: 0x560
	// Line 873, Address: 0x4441d4, Func Offset: 0x564
	// Line 874, Address: 0x4441d8, Func Offset: 0x568
	// Line 872, Address: 0x4441e4, Func Offset: 0x574
	// Line 873, Address: 0x4441e8, Func Offset: 0x578
	// Line 874, Address: 0x4441ec, Func Offset: 0x57c
	// Line 872, Address: 0x4441f8, Func Offset: 0x588
	// Line 873, Address: 0x4441fc, Func Offset: 0x58c
	// Line 874, Address: 0x444200, Func Offset: 0x590
	// Line 872, Address: 0x44420c, Func Offset: 0x59c
	// Line 873, Address: 0x444210, Func Offset: 0x5a0
	// Line 874, Address: 0x444214, Func Offset: 0x5a4
	// Line 871, Address: 0x444234, Func Offset: 0x5c4
	// Line 874, Address: 0x44423c, Func Offset: 0x5cc
	// Line 871, Address: 0x444240, Func Offset: 0x5d0
	// Line 874, Address: 0x444244, Func Offset: 0x5d4
	// Line 871, Address: 0x444254, Func Offset: 0x5e4
	// Line 872, Address: 0x44425c, Func Offset: 0x5ec
	// Line 874, Address: 0x444260, Func Offset: 0x5f0
	// Line 873, Address: 0x444264, Func Offset: 0x5f4
	// Line 874, Address: 0x444268, Func Offset: 0x5f8
	// Line 875, Address: 0x444278, Func Offset: 0x608
	// Line 880, Address: 0x44427c, Func Offset: 0x60c
	// Line 881, Address: 0x44428c, Func Offset: 0x61c
	// Line 883, Address: 0x4442a8, Func Offset: 0x638
	// Line 889, Address: 0x4442b8, Func Offset: 0x648
	// Line 890, Address: 0x4443c0, Func Offset: 0x750
	// Line 840, Address: 0x4443d8, Func Offset: 0x768
	// Line 890, Address: 0x4443e0, Func Offset: 0x770
	// Line 856, Address: 0x444414, Func Offset: 0x7a4
	// Line 890, Address: 0x444418, Func Offset: 0x7a8
	// Line 858, Address: 0x444428, Func Offset: 0x7b8
	// Line 890, Address: 0x444430, Func Offset: 0x7c0
	// Func End, Address: 0x444498, Func Offset: 0x828
}

// TransitionTimeInit__FP11xAnimSingleP15xAnimTransition
// Start address: 0x4444a0
void TransitionTimeInit(xAnimSingle* single, xAnimTransition* tran)
{
	xAnimFile* dest;
	xAnimFile* src;
	xAnimFile* dest;
	// Line 665, Address: 0x4444a0, Func Offset: 0
	// Line 667, Address: 0x4444a4, Func Offset: 0x4
	// Line 665, Address: 0x4444a8, Func Offset: 0x8
	// Line 667, Address: 0x4444b4, Func Offset: 0x14
	// Line 675, Address: 0x4444e0, Func Offset: 0x40
	// Line 676, Address: 0x4444e4, Func Offset: 0x44
	// Line 675, Address: 0x4444e8, Func Offset: 0x48
	// Line 676, Address: 0x4444ec, Func Offset: 0x4c
	// Line 677, Address: 0x444508, Func Offset: 0x68
	// Line 680, Address: 0x444514, Func Offset: 0x74
	// Line 688, Address: 0x44451c, Func Offset: 0x7c
	// Line 689, Address: 0x444520, Func Offset: 0x80
	// Line 687, Address: 0x444524, Func Offset: 0x84
	// Line 688, Address: 0x444528, Func Offset: 0x88
	// Line 687, Address: 0x44452c, Func Offset: 0x8c
	// Line 689, Address: 0x444530, Func Offset: 0x90
	// Line 690, Address: 0x444544, Func Offset: 0xa4
	// Line 691, Address: 0x44455c, Func Offset: 0xbc
	// Line 694, Address: 0x444568, Func Offset: 0xc8
	// Line 705, Address: 0x444570, Func Offset: 0xd0
	// Line 707, Address: 0x4445a0, Func Offset: 0x100
	// Line 714, Address: 0x4445a8, Func Offset: 0x108
	// Line 717, Address: 0x4445e8, Func Offset: 0x148
	// Line 718, Address: 0x4445ec, Func Offset: 0x14c
	// Line 714, Address: 0x444600, Func Offset: 0x160
	// Line 718, Address: 0x444608, Func Offset: 0x168
	// Line 714, Address: 0x444610, Func Offset: 0x170
	// Line 718, Address: 0x44463c, Func Offset: 0x19c
	// Line 714, Address: 0x444640, Func Offset: 0x1a0
	// Line 718, Address: 0x444648, Func Offset: 0x1a8
	// Func End, Address: 0x444658, Func Offset: 0x1b8
}

// DefaultOverride__FP10xAnimStateP15xAnimTransition
// Start address: 0x444660
uint32 DefaultOverride(xAnimState* state, xAnimTransition* tran)
{
	xAnimTransitionList* curr;
	xAnimTransitionList* prev;
	// Line 582, Address: 0x444660, Func Offset: 0
	// Line 585, Address: 0x44466c, Func Offset: 0xc
	// Line 586, Address: 0x44467c, Func Offset: 0x1c
	// Line 604, Address: 0x444688, Func Offset: 0x28
	// Line 605, Address: 0x44468c, Func Offset: 0x2c
	// Line 606, Address: 0x444690, Func Offset: 0x30
	// Line 607, Address: 0x444698, Func Offset: 0x38
	// Line 598, Address: 0x4446d4, Func Offset: 0x74
	// Line 607, Address: 0x4446d8, Func Offset: 0x78
	// Line 602, Address: 0x4446e8, Func Offset: 0x88
	// Line 589, Address: 0x4446f4, Func Offset: 0x94
	// Line 592, Address: 0x4446fc, Func Offset: 0x9c
	// Line 608, Address: 0x444704, Func Offset: 0xa4
	// Func End, Address: 0x444710, Func Offset: 0xb0
}

// _xAnimTransitionListInsert__FPP19xAnimTransitionListP19xAnimTransitionList
// Start address: 0x444710
void _xAnimTransitionListInsert(xAnimTransitionList** list, xAnimTransitionList* toInsert)
{
	xAnimTransitionList* curr;
	// Line 532, Address: 0x444710, Func Offset: 0
	// Line 548, Address: 0x444714, Func Offset: 0x4
	// Line 557, Address: 0x444758, Func Offset: 0x48
	// Line 569, Address: 0x44475c, Func Offset: 0x4c
	// Line 573, Address: 0x4447b8, Func Offset: 0xa8
	// Line 574, Address: 0x4447bc, Func Offset: 0xac
	// Line 576, Address: 0x4447c0, Func Offset: 0xb0
	// Line 556, Address: 0x4447cc, Func Offset: 0xbc
	// Line 576, Address: 0x4447d4, Func Offset: 0xc4
	// Func End, Address: 0x4447dc, Func Offset: 0xcc
}

// xAnimTempStateInit__FUi
// Start address: 0x4447e0
void xAnimTempStateInit(uint32 count)
{
	// Line 417, Address: 0x4447e0, Func Offset: 0
	// Line 419, Address: 0x4447e4, Func Offset: 0x4
	// Line 417, Address: 0x4447e8, Func Offset: 0x8
	// Line 419, Address: 0x4447f4, Func Offset: 0x14
	// Line 423, Address: 0x444838, Func Offset: 0x58
	// Func End, Address: 0x444848, Func Offset: 0x68
}

// xAnimTempTransitionAlloc__FPC15xAnimTransition
// Start address: 0x444850
xAnimTransition* xAnimTempTransitionAlloc(xAnimTransition* source)
{
	xAnimTransition* tran;
	// Line 401, Address: 0x444850, Func Offset: 0
	// Line 403, Address: 0x444864, Func Offset: 0x14
	// Line 404, Address: 0x444870, Func Offset: 0x20
	// Line 405, Address: 0x444878, Func Offset: 0x28
	// Line 408, Address: 0x444888, Func Offset: 0x38
	// Line 413, Address: 0x44488c, Func Offset: 0x3c
	// Line 409, Address: 0x444890, Func Offset: 0x40
	// Line 413, Address: 0x444898, Func Offset: 0x48
	// Line 407, Address: 0x4448a0, Func Offset: 0x50
	// Line 413, Address: 0x4448a8, Func Offset: 0x58
	// Line 414, Address: 0x4448b8, Func Offset: 0x68
	// Func End, Address: 0x4448cc, Func Offset: 0x7c
}

// xAnimTempTransitionInit__FUi
// Start address: 0x4448d0
void xAnimTempTransitionInit(uint32 count)
{
	// Line 392, Address: 0x4448d0, Func Offset: 0
	// Line 394, Address: 0x4448d4, Func Offset: 0x4
	// Line 392, Address: 0x4448d8, Func Offset: 0x8
	// Line 394, Address: 0x4448e4, Func Offset: 0x14
	// Line 398, Address: 0x444928, Func Offset: 0x58
	// Func End, Address: 0x444938, Func Offset: 0x68
}

// xAnimInit__Fv
// Start address: 0x444940
void xAnimInit()
{
	// Line 366, Address: 0x444940, Func Offset: 0
	// Line 379, Address: 0x444948, Func Offset: 0x8
	// Line 382, Address: 0x444950, Func Offset: 0x10
	// Line 383, Address: 0x444964, Func Offset: 0x24
	// Line 388, Address: 0x444978, Func Offset: 0x38
	// Func End, Address: 0x444984, Func Offset: 0x44
}

// _xCheckAnimNameInner__FPCcPCciPcPiPi
// Start address: 0x444990
uint8 _xCheckAnimNameInner(int8* name, int8* pattern, int32 patternSize, int8* extra, int32* nameOut, int32* extraOut)
{
	int8* startExtra;
	int8* initialExtra;
	int32 patternCurrent;
	int32 nameCurrent;
	int32 check;
	int8 nextPattern[128];
	int32 nextPatternCount;
	uint8 first;
	int32 parenCount;
	int8* IGNORE_PATTERNS;
	int32 length;
	uint8 done;
	int8* current;
	int8* startPattern;
	int32 pc;
	int32 nameOut;
	int32 extraOut;
	int8* current;
	int8* positiveEnd;
	int8* negative;
	int8* negativeEnd;
	int32 nameOut;
	int32 extraOut;
	uint8 matched;
	// Line 125, Address: 0x444990, Func Offset: 0
	// Line 130, Address: 0x444994, Func Offset: 0x4
	// Line 125, Address: 0x444998, Func Offset: 0x8
	// Line 130, Address: 0x44499c, Func Offset: 0xc
	// Line 125, Address: 0x4449a0, Func Offset: 0x10
	// Line 126, Address: 0x4449ac, Func Offset: 0x1c
	// Line 125, Address: 0x4449b0, Func Offset: 0x20
	// Line 129, Address: 0x4449cc, Func Offset: 0x3c
	// Line 125, Address: 0x4449d0, Func Offset: 0x40
	// Line 129, Address: 0x4449dc, Func Offset: 0x4c
	// Line 130, Address: 0x4449e8, Func Offset: 0x58
	// Line 132, Address: 0x4449f8, Func Offset: 0x68
	// Line 137, Address: 0x444a58, Func Offset: 0xc8
	// Line 140, Address: 0x444a60, Func Offset: 0xd0
	// Line 144, Address: 0x444a6c, Func Offset: 0xdc
	// Line 148, Address: 0x444a70, Func Offset: 0xe0
	// Line 147, Address: 0x444a74, Func Offset: 0xe4
	// Line 148, Address: 0x444a78, Func Offset: 0xe8
	// Line 150, Address: 0x444aa0, Func Offset: 0x110
	// Line 148, Address: 0x444aa4, Func Offset: 0x114
	// Line 150, Address: 0x444aa8, Func Offset: 0x118
	// Line 148, Address: 0x444ab4, Func Offset: 0x124
	// Line 150, Address: 0x444abc, Func Offset: 0x12c
	// Line 151, Address: 0x444adc, Func Offset: 0x14c
	// Line 174, Address: 0x444ae4, Func Offset: 0x154
	// Line 152, Address: 0x444ae8, Func Offset: 0x158
	// Line 157, Address: 0x444aec, Func Offset: 0x15c
	// Line 161, Address: 0x444af4, Func Offset: 0x164
	// Line 174, Address: 0x444af8, Func Offset: 0x168
	// Line 166, Address: 0x444afc, Func Offset: 0x16c
	// Line 168, Address: 0x444b00, Func Offset: 0x170
	// Line 167, Address: 0x444b04, Func Offset: 0x174
	// Line 157, Address: 0x444b08, Func Offset: 0x178
	// Line 174, Address: 0x444b10, Func Offset: 0x180
	// Line 162, Address: 0x444b30, Func Offset: 0x1a0
	// Line 174, Address: 0x444b38, Func Offset: 0x1a8
	// Line 167, Address: 0x444b48, Func Offset: 0x1b8
	// Line 174, Address: 0x444b50, Func Offset: 0x1c0
	// Line 168, Address: 0x444b64, Func Offset: 0x1d4
	// Line 174, Address: 0x444b68, Func Offset: 0x1d8
	// Line 168, Address: 0x444b78, Func Offset: 0x1e8
	// Line 174, Address: 0x444b80, Func Offset: 0x1f0
	// Line 168, Address: 0x444b98, Func Offset: 0x208
	// Line 174, Address: 0x444ba0, Func Offset: 0x210
	// Line 170, Address: 0x444bb4, Func Offset: 0x224
	// Line 174, Address: 0x444bc0, Func Offset: 0x230
	// Line 184, Address: 0x444bc8, Func Offset: 0x238
	// Line 186, Address: 0x444bdc, Func Offset: 0x24c
	// Line 188, Address: 0x444be8, Func Offset: 0x258
	// Line 192, Address: 0x444c04, Func Offset: 0x274
	// Line 195, Address: 0x444c08, Func Offset: 0x278
	// Line 197, Address: 0x444c0c, Func Offset: 0x27c
	// Line 199, Address: 0x444c14, Func Offset: 0x284
	// Line 204, Address: 0x444c18, Func Offset: 0x288
	// Line 206, Address: 0x444c1c, Func Offset: 0x28c
	// Line 207, Address: 0x444c24, Func Offset: 0x294
	// Line 208, Address: 0x444c34, Func Offset: 0x2a4
	// Line 209, Address: 0x444c38, Func Offset: 0x2a8
	// Line 208, Address: 0x444c40, Func Offset: 0x2b0
	// Line 210, Address: 0x444c44, Func Offset: 0x2b4
	// Line 211, Address: 0x444c4c, Func Offset: 0x2bc
	// Line 212, Address: 0x444c50, Func Offset: 0x2c0
	// Line 215, Address: 0x444c54, Func Offset: 0x2c4
	// Line 217, Address: 0x444c5c, Func Offset: 0x2cc
	// Line 220, Address: 0x444c60, Func Offset: 0x2d0
	// Line 221, Address: 0x444c64, Func Offset: 0x2d4
	// Line 222, Address: 0x444c6c, Func Offset: 0x2dc
	// Line 257, Address: 0x444c74, Func Offset: 0x2e4
	// Line 232, Address: 0x444c88, Func Offset: 0x2f8
	// Line 240, Address: 0x444c8c, Func Offset: 0x2fc
	// Line 228, Address: 0x444c90, Func Offset: 0x300
	// Line 240, Address: 0x444c94, Func Offset: 0x304
	// Line 257, Address: 0x444c98, Func Offset: 0x308
	// Line 235, Address: 0x444cbc, Func Offset: 0x32c
	// Line 257, Address: 0x444cc0, Func Offset: 0x330
	// Line 272, Address: 0x444cf0, Func Offset: 0x360
	// Line 275, Address: 0x444cf8, Func Offset: 0x368
	// Line 278, Address: 0x444cfc, Func Offset: 0x36c
	// Line 275, Address: 0x444d08, Func Offset: 0x378
	// Line 278, Address: 0x444d0c, Func Offset: 0x37c
	// Line 319, Address: 0x444d2c, Func Offset: 0x39c
	// Line 320, Address: 0x444d30, Func Offset: 0x3a0
	// Line 323, Address: 0x444d38, Func Offset: 0x3a8
	// Line 325, Address: 0x444d44, Func Offset: 0x3b4
	// Line 326, Address: 0x444d48, Func Offset: 0x3b8
	// Line 328, Address: 0x444d4c, Func Offset: 0x3bc
	// Line 331, Address: 0x444d60, Func Offset: 0x3d0
	// Line 332, Address: 0x444d6c, Func Offset: 0x3dc
	// Line 333, Address: 0x444d70, Func Offset: 0x3e0
	// Line 334, Address: 0x444d7c, Func Offset: 0x3ec
	// Line 335, Address: 0x444d8c, Func Offset: 0x3fc
	// Line 138, Address: 0x444d98, Func Offset: 0x408
	// Line 335, Address: 0x444da0, Func Offset: 0x410
	// Line 160, Address: 0x444db8, Func Offset: 0x428
	// Line 175, Address: 0x444dc0, Func Offset: 0x430
	// Line 335, Address: 0x444dc4, Func Offset: 0x434
	// Line 178, Address: 0x444dec, Func Offset: 0x45c
	// Line 335, Address: 0x444df0, Func Offset: 0x460
	// Line 178, Address: 0x444df8, Func Offset: 0x468
	// Line 335, Address: 0x444e0c, Func Offset: 0x47c
	// Line 178, Address: 0x444e2c, Func Offset: 0x49c
	// Line 335, Address: 0x444e44, Func Offset: 0x4b4
	// Line 178, Address: 0x444e4c, Func Offset: 0x4bc
	// Line 335, Address: 0x444e58, Func Offset: 0x4c8
	// Line 178, Address: 0x444e78, Func Offset: 0x4e8
	// Line 335, Address: 0x444e80, Func Offset: 0x4f0
	// Line 178, Address: 0x444e90, Func Offset: 0x500
	// Line 181, Address: 0x444e98, Func Offset: 0x508
	// Line 185, Address: 0x444ea0, Func Offset: 0x510
	// Line 190, Address: 0x444ea8, Func Offset: 0x518
	// Line 231, Address: 0x444eb0, Func Offset: 0x520
	// Line 335, Address: 0x444eb8, Func Offset: 0x528
	// Line 238, Address: 0x444ec0, Func Offset: 0x530
	// Line 335, Address: 0x444ed0, Func Offset: 0x540
	// Line 245, Address: 0x444ef0, Func Offset: 0x560
	// Line 335, Address: 0x444ef4, Func Offset: 0x564
	// Line 250, Address: 0x444f10, Func Offset: 0x580
	// Line 335, Address: 0x444f14, Func Offset: 0x584
	// Line 251, Address: 0x444f1c, Func Offset: 0x58c
	// Line 335, Address: 0x444f28, Func Offset: 0x598
	// Line 253, Address: 0x444f34, Func Offset: 0x5a4
	// Line 335, Address: 0x444f38, Func Offset: 0x5a8
	// Line 254, Address: 0x444f3c, Func Offset: 0x5ac
	// Line 335, Address: 0x444f40, Func Offset: 0x5b0
	// Line 261, Address: 0x444f54, Func Offset: 0x5c4
	// Line 335, Address: 0x444f58, Func Offset: 0x5c8
	// Line 266, Address: 0x444f64, Func Offset: 0x5d4
	// Line 335, Address: 0x444f6c, Func Offset: 0x5dc
	// Line 283, Address: 0x444f80, Func Offset: 0x5f0
	// Line 280, Address: 0x444f84, Func Offset: 0x5f4
	// Line 282, Address: 0x444f88, Func Offset: 0x5f8
	// Line 335, Address: 0x444f8c, Func Offset: 0x5fc
	// Line 287, Address: 0x444f98, Func Offset: 0x608
	// Line 285, Address: 0x444f9c, Func Offset: 0x60c
	// Line 335, Address: 0x444fa0, Func Offset: 0x610
	// Line 296, Address: 0x444fd4, Func Offset: 0x644
	// Line 335, Address: 0x444fd8, Func Offset: 0x648
	// Line 296, Address: 0x444fdc, Func Offset: 0x64c
	// Line 335, Address: 0x444fe8, Func Offset: 0x658
	// Line 299, Address: 0x445004, Func Offset: 0x674
	// Line 300, Address: 0x445008, Func Offset: 0x678
	// Line 306, Address: 0x44500c, Func Offset: 0x67c
	// Line 335, Address: 0x445010, Func Offset: 0x680
	// Line 315, Address: 0x445034, Func Offset: 0x6a4
	// Line 335, Address: 0x44503c, Func Offset: 0x6ac
	// Line 293, Address: 0x445048, Func Offset: 0x6b8
	// Line 335, Address: 0x445054, Func Offset: 0x6c4
	// Line 293, Address: 0x445060, Func Offset: 0x6d0
	// Line 335, Address: 0x445064, Func Offset: 0x6d4
	// Line 324, Address: 0x445090, Func Offset: 0x700
	// Line 336, Address: 0x445094, Func Offset: 0x704
	// Func End, Address: 0x4450c4, Func Offset: 0x734
}

