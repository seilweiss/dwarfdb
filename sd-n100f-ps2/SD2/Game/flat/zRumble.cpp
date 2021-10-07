typedef enum _tagSDRumbleType;



enum _tagSDRumbleType
{
	SDR_Digging,
	SDR_Headbutt,
	SDR_ButtbounceJump,
	SDR_Buttbounce,
	SDR_VillainCollideScare,
	SDR_FleaScratch,
	SDR_ScreechingStop,
	SDR_GotScared,
	SDR_WebDestroyed,
	SDR_XploDestroyedObj,
	SDR_DustDestroyedObj,
	SDR_EventLight,
	SDR_EventMedium,
	SDR_EventHeavy,
	SDR_Test,
	SDR_FireworkBang,
	SDR_Total
};


void zRumbleStartDistance(int32 pad_id, float32 real_dist, float32 max_dist);
void zRumbleStart(int32 pad_id, _tagSDRumbleType rumble_type);

// zRumbleStartDistance__Fiff
// Start address: 0x1c5240
void zRumbleStartDistance(int32 pad_id, float32 real_dist, float32 max_dist)
{
	float32 rumble_it;
	// Line 111, Address: 0x1c5240, Func Offset: 0
	// Line 110, Address: 0x1c5244, Func Offset: 0x4
	// Line 111, Address: 0x1c5248, Func Offset: 0x8
	// Line 112, Address: 0x1c5258, Func Offset: 0x18
	// Line 113, Address: 0x1c5260, Func Offset: 0x20
	// Line 114, Address: 0x1c5270, Func Offset: 0x30
	// Line 118, Address: 0x1c5274, Func Offset: 0x34
	// Line 122, Address: 0x1c52a0, Func Offset: 0x60
	// Line 123, Address: 0x1c52b8, Func Offset: 0x78
	// Line 124, Address: 0x1c52c4, Func Offset: 0x84
	// Func End, Address: 0x1c52d0, Func Offset: 0x90
}

// zRumbleStart__Fi16_tagSDRumbleType
// Start address: 0x1c52d0
void zRumbleStart(int32 pad_id, _tagSDRumbleType rumble_type)
{
	// Line 26, Address: 0x1c52d0, Func Offset: 0
	// Line 28, Address: 0x1c52dc, Func Offset: 0xc
	// Line 32, Address: 0x1c5304, Func Offset: 0x34
	// Line 33, Address: 0x1c5320, Func Offset: 0x50
	// Line 36, Address: 0x1c5328, Func Offset: 0x58
	// Line 37, Address: 0x1c5344, Func Offset: 0x74
	// Line 40, Address: 0x1c534c, Func Offset: 0x7c
	// Line 41, Address: 0x1c5368, Func Offset: 0x98
	// Line 45, Address: 0x1c5370, Func Offset: 0xa0
	// Line 46, Address: 0x1c538c, Func Offset: 0xbc
	// Line 49, Address: 0x1c5394, Func Offset: 0xc4
	// Line 50, Address: 0x1c53ac, Func Offset: 0xdc
	// Line 53, Address: 0x1c53b4, Func Offset: 0xe4
	// Line 54, Address: 0x1c53cc, Func Offset: 0xfc
	// Line 57, Address: 0x1c53d4, Func Offset: 0x104
	// Line 58, Address: 0x1c53f0, Func Offset: 0x120
	// Line 59, Address: 0x1c5410, Func Offset: 0x140
	// Line 60, Address: 0x1c5430, Func Offset: 0x160
	// Line 61, Address: 0x1c5450, Func Offset: 0x180
	// Line 62, Address: 0x1c5470, Func Offset: 0x1a0
	// Line 65, Address: 0x1c5478, Func Offset: 0x1a8
	// Line 66, Address: 0x1c5494, Func Offset: 0x1c4
	// Line 69, Address: 0x1c549c, Func Offset: 0x1cc
	// Line 70, Address: 0x1c54b8, Func Offset: 0x1e8
	// Line 71, Address: 0x1c54d8, Func Offset: 0x208
	// Line 74, Address: 0x1c54e0, Func Offset: 0x210
	// Line 75, Address: 0x1c54fc, Func Offset: 0x22c
	// Line 76, Address: 0x1c551c, Func Offset: 0x24c
	// Line 80, Address: 0x1c5524, Func Offset: 0x254
	// Line 81, Address: 0x1c553c, Func Offset: 0x26c
	// Line 84, Address: 0x1c5544, Func Offset: 0x274
	// Line 85, Address: 0x1c5560, Func Offset: 0x290
	// Line 88, Address: 0x1c5568, Func Offset: 0x298
	// Line 89, Address: 0x1c5584, Func Offset: 0x2b4
	// Line 92, Address: 0x1c558c, Func Offset: 0x2bc
	// Line 103, Address: 0x1c55a8, Func Offset: 0x2d8
	// Func End, Address: 0x1c55b8, Func Offset: 0x2e8
}

