



void StopRumbling();
void Reset();
Manager& Get();
void Update(_tagxPad* pad, xVec3& playerPos, float32 timeElapsed, uint8 bPauseState);
uint8 Add(_tagxPad* pad, emitterBase* pEmitter);
float32 GetIntensity(xVec3& playerPos);
void updateCameraShake(float32 intensity);

// StopRumbling__Q27xRumble7ManagerFv
// Start address: 0x39f630
void StopRumbling()
{
	// Line 258, Address: 0x39f630, Func Offset: 0
	// Func End, Address: 0x39f63c, Func Offset: 0xc
}

// Reset__Q27xRumble7ManagerFv
// Start address: 0x39f640
void Manager::Reset()
{
	// Line 246, Address: 0x39f640, Func Offset: 0
	// Line 247, Address: 0x39f654, Func Offset: 0x14
	// Line 248, Address: 0x39f664, Func Offset: 0x24
	// Line 249, Address: 0x39f6a0, Func Offset: 0x60
	// Line 250, Address: 0x39f6b0, Func Offset: 0x70
	// Func End, Address: 0x39f6c8, Func Offset: 0x88
}

// Get__Q27xRumble7ManagerFv
// Start address: 0x39f6d0
Manager& Get()
{
	int8 @14766;
	Manager rumbleManager;
	// Line 241, Address: 0x39f6d0, Func Offset: 0
	// Line 242, Address: 0x39f6d8, Func Offset: 0x8
	// Line 243, Address: 0x39f6e4, Func Offset: 0x14
	// Line 242, Address: 0x39f6f0, Func Offset: 0x20
	// Line 243, Address: 0x39f6f4, Func Offset: 0x24
	// Line 242, Address: 0x39f700, Func Offset: 0x30
	// Line 244, Address: 0x39f70c, Func Offset: 0x3c
	// Func End, Address: 0x39f718, Func Offset: 0x48
}

// Update__Q27xRumble7ManagerFP8_tagxPadRC5xVec3fb
// Start address: 0x39f720
void Manager::Update(_tagxPad* pad, xVec3& playerPos, float32 timeElapsed, uint8 bPauseState)
{
	padInfo* pInfo;
	uint32 i;
	float32 intensity;
	uint32 i;
	// Line 182, Address: 0x39f720, Func Offset: 0
	// Line 184, Address: 0x39f748, Func Offset: 0x28
	// Line 187, Address: 0x39f75c, Func Offset: 0x3c
	// Line 190, Address: 0x39f760, Func Offset: 0x40
	// Line 187, Address: 0x39f764, Func Offset: 0x44
	// Line 199, Address: 0x39f778, Func Offset: 0x58
	// Line 190, Address: 0x39f780, Func Offset: 0x60
	// Line 192, Address: 0x39f784, Func Offset: 0x64
	// Line 196, Address: 0x39f78c, Func Offset: 0x6c
	// Line 197, Address: 0x39f7a4, Func Offset: 0x84
	// Line 199, Address: 0x39f7a8, Func Offset: 0x88
	// Line 200, Address: 0x39f7b8, Func Offset: 0x98
	// Line 201, Address: 0x39f7c0, Func Offset: 0xa0
	// Line 203, Address: 0x39f7d4, Func Offset: 0xb4
	// Line 206, Address: 0x39f7dc, Func Offset: 0xbc
	// Line 211, Address: 0x39f7e8, Func Offset: 0xc8
	// Line 184, Address: 0x39f82c, Func Offset: 0x10c
	// Line 185, Address: 0x39f830, Func Offset: 0x110
	// Line 211, Address: 0x39f838, Func Offset: 0x118
	// Line 208, Address: 0x39f840, Func Offset: 0x120
	// Line 211, Address: 0x39f844, Func Offset: 0x124
	// Line 209, Address: 0x39f84c, Func Offset: 0x12c
	// Line 211, Address: 0x39f854, Func Offset: 0x134
	// Line 212, Address: 0x39f884, Func Offset: 0x164
	// Line 213, Address: 0x39f88c, Func Offset: 0x16c
	// Line 214, Address: 0x39f8a0, Func Offset: 0x180
	// Line 218, Address: 0x39f8a8, Func Offset: 0x188
	// Line 219, Address: 0x39f8ac, Func Offset: 0x18c
	// Line 221, Address: 0x39f8b0, Func Offset: 0x190
	// Line 225, Address: 0x39f8d8, Func Offset: 0x1b8
	// Line 228, Address: 0x39f8e0, Func Offset: 0x1c0
	// Line 230, Address: 0x39f8f8, Func Offset: 0x1d8
	// Line 231, Address: 0x39f908, Func Offset: 0x1e8
	// Line 232, Address: 0x39f920, Func Offset: 0x200
	// Line 234, Address: 0x39f924, Func Offset: 0x204
	// Line 235, Address: 0x39f958, Func Offset: 0x238
	// Line 239, Address: 0x39f960, Func Offset: 0x240
	// Line 223, Address: 0x39f984, Func Offset: 0x264
	// Line 224, Address: 0x39f988, Func Offset: 0x268
	// Line 239, Address: 0x39f98c, Func Offset: 0x26c
	// Line 225, Address: 0x39f994, Func Offset: 0x274
	// Line 236, Address: 0x39f99c, Func Offset: 0x27c
	// Line 237, Address: 0x39f9a0, Func Offset: 0x280
	// Line 239, Address: 0x39f9a4, Func Offset: 0x284
	// Func End, Address: 0x39f9d8, Func Offset: 0x2b8
}

// Add__Q27xRumble7ManagerFP8_tagxPadPQ27xRumble11emitterBase
// Start address: 0x39f9e0
uint8 Manager::Add(_tagxPad* pad, emitterBase* pEmitter)
{
	padInfo* pInfo;
	uint8 rumbleForever;
	emitterBase* pCurrentEmitter;
	uint32 effectPriority;
	effectInternal* freeEffect;
	uint32 i;
	// Line 117, Address: 0x39f9e0, Func Offset: 0
	// Line 121, Address: 0x39f9e8, Func Offset: 0x8
	// Line 123, Address: 0x39f9ec, Func Offset: 0xc
	// Line 121, Address: 0x39f9f0, Func Offset: 0x10
	// Line 123, Address: 0x39f9f4, Func Offset: 0x14
	// Line 121, Address: 0x39f9f8, Func Offset: 0x18
	// Line 123, Address: 0x39fa10, Func Offset: 0x30
	// Line 127, Address: 0x39fa28, Func Offset: 0x48
	// Line 128, Address: 0x39fa30, Func Offset: 0x50
	// Line 130, Address: 0x39fa34, Func Offset: 0x54
	// Line 132, Address: 0x39fa58, Func Offset: 0x78
	// Line 133, Address: 0x39fa88, Func Offset: 0xa8
	// Line 134, Address: 0x39fa8c, Func Offset: 0xac
	// Line 135, Address: 0x39fa9c, Func Offset: 0xbc
	// Line 118, Address: 0x39fae0, Func Offset: 0x100
	// Line 135, Address: 0x39fae8, Func Offset: 0x108
	// Line 137, Address: 0x39fb18, Func Offset: 0x138
	// Line 141, Address: 0x39fb20, Func Offset: 0x140
	// Line 145, Address: 0x39fb6c, Func Offset: 0x18c
	// Line 148, Address: 0x39fb74, Func Offset: 0x194
	// Line 153, Address: 0x39fb78, Func Offset: 0x198
	// Line 147, Address: 0x39fb7c, Func Offset: 0x19c
	// Line 148, Address: 0x39fb84, Func Offset: 0x1a4
	// Line 149, Address: 0x39fb88, Func Offset: 0x1a8
	// Line 151, Address: 0x39fbbc, Func Offset: 0x1dc
	// Line 152, Address: 0x39fbec, Func Offset: 0x20c
	// Line 153, Address: 0x39fbf4, Func Offset: 0x214
	// Line 157, Address: 0x39fbfc, Func Offset: 0x21c
	// Line 161, Address: 0x39fc10, Func Offset: 0x230
	// Line 163, Address: 0x39fc18, Func Offset: 0x238
	// Line 166, Address: 0x39fc48, Func Offset: 0x268
	// Line 153, Address: 0x39fc60, Func Offset: 0x280
	// Line 166, Address: 0x39fc64, Func Offset: 0x284
	// Line 167, Address: 0x39fc78, Func Offset: 0x298
	// Func End, Address: 0x39fc80, Func Offset: 0x2a0
}

// GetIntensity__Q27xRumble14effectInternalFRC5xVec3
// Start address: 0x39fc80
float32 effectInternal::GetIntensity(xVec3& playerPos)
{
	float32 intensity;
	effectAsset* pAsset;
	float32 magFraction;
	// Line 69, Address: 0x39fc80, Func Offset: 0
	// Line 70, Address: 0x39fc98, Func Offset: 0x18
	// Line 72, Address: 0x39fca0, Func Offset: 0x20
	// Line 71, Address: 0x39fca4, Func Offset: 0x24
	// Line 72, Address: 0x39fca8, Func Offset: 0x28
	// Line 85, Address: 0x39fcc0, Func Offset: 0x40
	// Line 86, Address: 0x39fcc8, Func Offset: 0x48
	// Line 88, Address: 0x39fce0, Func Offset: 0x60
	// Line 73, Address: 0x39fcf0, Func Offset: 0x70
	// Line 88, Address: 0x39fcf4, Func Offset: 0x74
	// Line 73, Address: 0x39fd08, Func Offset: 0x88
	// Line 88, Address: 0x39fd0c, Func Offset: 0x8c
	// Line 75, Address: 0x39fd18, Func Offset: 0x98
	// Line 88, Address: 0x39fd24, Func Offset: 0xa4
	// Line 78, Address: 0x39fd30, Func Offset: 0xb0
	// Line 88, Address: 0x39fd44, Func Offset: 0xc4
	// Line 78, Address: 0x39fd4c, Func Offset: 0xcc
	// Line 88, Address: 0x39fd5c, Func Offset: 0xdc
	// Line 78, Address: 0x39fd68, Func Offset: 0xe8
	// Line 88, Address: 0x39fd6c, Func Offset: 0xec
	// Line 78, Address: 0x39fd74, Func Offset: 0xf4
	// Line 88, Address: 0x39fd78, Func Offset: 0xf8
	// Line 85, Address: 0x39fd80, Func Offset: 0x100
	// Line 77, Address: 0x39fd88, Func Offset: 0x108
	// Line 88, Address: 0x39fd8c, Func Offset: 0x10c
	// Line 78, Address: 0x39fd94, Func Offset: 0x114
	// Line 88, Address: 0x39fd9c, Func Offset: 0x11c
	// Line 78, Address: 0x39fda0, Func Offset: 0x120
	// Line 88, Address: 0x39fdb4, Func Offset: 0x134
	// Line 78, Address: 0x39fdbc, Func Offset: 0x13c
	// Line 88, Address: 0x39fdcc, Func Offset: 0x14c
	// Line 82, Address: 0x39fddc, Func Offset: 0x15c
	// Line 88, Address: 0x39fdec, Func Offset: 0x16c
	// Line 89, Address: 0x39fdfc, Func Offset: 0x17c
	// Func End, Address: 0x39fe14, Func Offset: 0x194
}

// updateCameraShake__Q27xRumble14effectInternalFf
// Start address: 0x39fe20
void effectInternal::updateCameraShake(float32 intensity)
{
	effectAsset* pAsset;
	// Line 39, Address: 0x39fe20, Func Offset: 0
	// Line 40, Address: 0x39fe24, Func Offset: 0x4
	// Line 39, Address: 0x39fe28, Func Offset: 0x8
	// Line 40, Address: 0x39fe2c, Func Offset: 0xc
	// Line 43, Address: 0x39fe74, Func Offset: 0x54
	// Line 48, Address: 0x39fe90, Func Offset: 0x70
	// Line 49, Address: 0x39feb0, Func Offset: 0x90
	// Line 50, Address: 0x39fecc, Func Offset: 0xac
	// Line 53, Address: 0x39fee0, Func Offset: 0xc0
	// Line 54, Address: 0x39fef4, Func Offset: 0xd4
	// Line 57, Address: 0x39fef8, Func Offset: 0xd8
	// Line 41, Address: 0x39ff08, Func Offset: 0xe8
	// Line 57, Address: 0x39ff0c, Func Offset: 0xec
	// Line 42, Address: 0x39ff18, Func Offset: 0xf8
	// Line 43, Address: 0x39ff1c, Func Offset: 0xfc
	// Line 57, Address: 0x39ff24, Func Offset: 0x104
	// Line 46, Address: 0x39ff28, Func Offset: 0x108
	// Line 47, Address: 0x39ff40, Func Offset: 0x120
	// Line 57, Address: 0x39ff50, Func Offset: 0x130
	// Func End, Address: 0x39ff58, Func Offset: 0x138
}

