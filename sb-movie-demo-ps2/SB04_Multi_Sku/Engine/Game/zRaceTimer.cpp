



void Update(float32 dt);
void ParseTagRaceTimer(jot& j, split_tag& splitTag);
void EventHandler(xBase* to, uint32 event, float32* argf);
void Load(xBase& data, xDynAsset& asset);

// Update__10zRaceTimerFf
// Start address: 0x306410
void zRaceTimer::Update(float32 dt)
{
	// Line 210, Address: 0x306410, Func Offset: 0
	// Line 212, Address: 0x306418, Func Offset: 0x8
	// Line 216, Address: 0x306424, Func Offset: 0x14
	// Line 222, Address: 0x30644c, Func Offset: 0x3c
	// Line 223, Address: 0x306458, Func Offset: 0x48
	// Line 226, Address: 0x30646c, Func Offset: 0x5c
	// Line 229, Address: 0x3064ac, Func Offset: 0x9c
	// Line 230, Address: 0x3064b0, Func Offset: 0xa0
	// Line 229, Address: 0x3064b4, Func Offset: 0xa4
	// Line 230, Address: 0x3064b8, Func Offset: 0xa8
	// Line 232, Address: 0x3064d4, Func Offset: 0xc4
	// Line 236, Address: 0x3064e8, Func Offset: 0xd8
	// Line 239, Address: 0x306530, Func Offset: 0x120
	// Line 240, Address: 0x306534, Func Offset: 0x124
	// Line 239, Address: 0x306538, Func Offset: 0x128
	// Line 240, Address: 0x30653c, Func Offset: 0x12c
	// Line 243, Address: 0x306558, Func Offset: 0x148
	// Line 246, Address: 0x306560, Func Offset: 0x150
	// Line 247, Address: 0x30656c, Func Offset: 0x15c
	// Line 250, Address: 0x306580, Func Offset: 0x170
	// Line 253, Address: 0x3065c0, Func Offset: 0x1b0
	// Line 254, Address: 0x3065c4, Func Offset: 0x1b4
	// Line 253, Address: 0x3065c8, Func Offset: 0x1b8
	// Line 254, Address: 0x3065cc, Func Offset: 0x1bc
	// Line 256, Address: 0x3065e8, Func Offset: 0x1d8
	// Line 260, Address: 0x3065fc, Func Offset: 0x1ec
	// Line 263, Address: 0x306644, Func Offset: 0x234
	// Line 264, Address: 0x306648, Func Offset: 0x238
	// Line 263, Address: 0x30664c, Func Offset: 0x23c
	// Line 264, Address: 0x306650, Func Offset: 0x240
	// Line 267, Address: 0x30666c, Func Offset: 0x25c
	// Line 270, Address: 0x306674, Func Offset: 0x264
	// Line 272, Address: 0x306680, Func Offset: 0x270
	// Line 275, Address: 0x306694, Func Offset: 0x284
	// Line 278, Address: 0x3066c4, Func Offset: 0x2b4
	// Line 279, Address: 0x3066c8, Func Offset: 0x2b8
	// Line 278, Address: 0x3066cc, Func Offset: 0x2bc
	// Line 279, Address: 0x3066d0, Func Offset: 0x2c0
	// Line 281, Address: 0x3066ec, Func Offset: 0x2dc
	// Line 285, Address: 0x306700, Func Offset: 0x2f0
	// Line 288, Address: 0x306730, Func Offset: 0x320
	// Line 289, Address: 0x306734, Func Offset: 0x324
	// Line 288, Address: 0x306738, Func Offset: 0x328
	// Line 289, Address: 0x30673c, Func Offset: 0x32c
	// Line 292, Address: 0x306758, Func Offset: 0x348
	// Line 295, Address: 0x306760, Func Offset: 0x350
	// Line 297, Address: 0x30676c, Func Offset: 0x35c
	// Line 300, Address: 0x306778, Func Offset: 0x368
	// Line 302, Address: 0x30678c, Func Offset: 0x37c
	// Line 303, Address: 0x306790, Func Offset: 0x380
	// Line 302, Address: 0x306794, Func Offset: 0x384
	// Line 303, Address: 0x306798, Func Offset: 0x388
	// Line 305, Address: 0x3067b4, Func Offset: 0x3a4
	// Line 309, Address: 0x3067bc, Func Offset: 0x3ac
	// Line 311, Address: 0x3067d0, Func Offset: 0x3c0
	// Line 312, Address: 0x3067d4, Func Offset: 0x3c4
	// Line 311, Address: 0x3067d8, Func Offset: 0x3c8
	// Line 312, Address: 0x3067dc, Func Offset: 0x3cc
	// Line 322, Address: 0x3067f8, Func Offset: 0x3e8
	// Func End, Address: 0x306804, Func Offset: 0x3f4
}

// ParseTagRaceTimer__10zRaceTimerFRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x306810
void ParseTagRaceTimer(jot& j, split_tag& splitTag)
{
	int8* c;
	uint8 bestTimeTag;
	uint8 victoryTimeTag;
	int8* bestTime;
	int8* victoryTime;
	uint32 id;
	zRaceTimer* raceTimer;
	int8 buffer[64];
	uint32 sec;
	uint32 mn;
	// Line 114, Address: 0x306810, Func Offset: 0
	// Line 118, Address: 0x306814, Func Offset: 0x4
	// Line 114, Address: 0x306818, Func Offset: 0x8
	// Line 117, Address: 0x30681c, Func Offset: 0xc
	// Line 114, Address: 0x306820, Func Offset: 0x10
	// Line 117, Address: 0x306824, Func Offset: 0x14
	// Line 114, Address: 0x306828, Func Offset: 0x18
	// Line 117, Address: 0x30682c, Func Offset: 0x1c
	// Line 114, Address: 0x306830, Func Offset: 0x20
	// Line 117, Address: 0x306844, Func Offset: 0x34
	// Line 114, Address: 0x306848, Func Offset: 0x38
	// Line 116, Address: 0x30684c, Func Offset: 0x3c
	// Line 117, Address: 0x306850, Func Offset: 0x40
	// Line 118, Address: 0x306878, Func Offset: 0x68
	// Line 124, Address: 0x3068a0, Func Offset: 0x90
	// Line 123, Address: 0x3068a4, Func Offset: 0x94
	// Line 125, Address: 0x3068a8, Func Offset: 0x98
	// Line 127, Address: 0x3068b8, Func Offset: 0xa8
	// Line 130, Address: 0x3068c8, Func Offset: 0xb8
	// Line 131, Address: 0x3068d0, Func Offset: 0xc0
	// Line 132, Address: 0x3068fc, Func Offset: 0xec
	// Line 133, Address: 0x306914, Func Offset: 0x104
	// Line 135, Address: 0x30691c, Func Offset: 0x10c
	// Line 136, Address: 0x306928, Func Offset: 0x118
	// Line 137, Address: 0x306954, Func Offset: 0x144
	// Line 139, Address: 0x306968, Func Offset: 0x158
	// Line 141, Address: 0x306970, Func Offset: 0x160
	// Line 149, Address: 0x306984, Func Offset: 0x174
	// Line 150, Address: 0x30698c, Func Offset: 0x17c
	// Line 154, Address: 0x306998, Func Offset: 0x188
	// Line 155, Address: 0x3069fc, Func Offset: 0x1ec
	// Line 160, Address: 0x306a04, Func Offset: 0x1f4
	// Line 170, Address: 0x306a08, Func Offset: 0x1f8
	// Line 160, Address: 0x306a10, Func Offset: 0x200
	// Line 170, Address: 0x306a48, Func Offset: 0x238
	// Line 173, Address: 0x306a7c, Func Offset: 0x26c
	// Line 175, Address: 0x306a84, Func Offset: 0x274
	// Line 176, Address: 0x306ac8, Func Offset: 0x2b8
	// Line 179, Address: 0x306ad0, Func Offset: 0x2c0
	// Line 181, Address: 0x306ad8, Func Offset: 0x2c8
	// Line 182, Address: 0x306b1c, Func Offset: 0x30c
	// Line 185, Address: 0x306b24, Func Offset: 0x314
	// Line 187, Address: 0x306b30, Func Offset: 0x320
	// Line 194, Address: 0x306b90, Func Offset: 0x380
	// Line 195, Address: 0x306ba4, Func Offset: 0x394
	// Line 197, Address: 0x306bac, Func Offset: 0x39c
	// Line 205, Address: 0x306bc4, Func Offset: 0x3b4
	// Line 206, Address: 0x306bdc, Func Offset: 0x3cc
	// Line 207, Address: 0x306be0, Func Offset: 0x3d0
	// Line 154, Address: 0x306be8, Func Offset: 0x3d8
	// Line 201, Address: 0x306bf0, Func Offset: 0x3e0
	// Line 207, Address: 0x306bf4, Func Offset: 0x3e4
	// Func End, Address: 0x306c30, Func Offset: 0x420
}

// EventHandler__10zRaceTimerFP5xBaseP5xBaseUiPCfP5xBaseUi
// Start address: 0x306c30
void zRaceTimer::EventHandler(xBase* to, uint32 event, float32* argf)
{
	zRaceTimer& raceTimer;
	// Line 67, Address: 0x306c30, Func Offset: 0
	// Line 71, Address: 0x306c34, Func Offset: 0x4
	// Line 67, Address: 0x306c38, Func Offset: 0x8
	// Line 71, Address: 0x306c40, Func Offset: 0x10
	// Line 74, Address: 0x306c98, Func Offset: 0x68
	// Line 75, Address: 0x306cac, Func Offset: 0x7c
	// Line 78, Address: 0x306cb4, Func Offset: 0x84
	// Line 80, Address: 0x306cbc, Func Offset: 0x8c
	// Line 82, Address: 0x306cc8, Func Offset: 0x98
	// Line 85, Address: 0x306cd0, Func Offset: 0xa0
	// Line 86, Address: 0x306db0, Func Offset: 0x180
	// Line 90, Address: 0x306db8, Func Offset: 0x188
	// Line 93, Address: 0x306dc0, Func Offset: 0x190
	// Line 94, Address: 0x306e04, Func Offset: 0x1d4
	// Line 97, Address: 0x306e0c, Func Offset: 0x1dc
	// Line 98, Address: 0x306e10, Func Offset: 0x1e0
	// Line 101, Address: 0x306e18, Func Offset: 0x1e8
	// Line 110, Address: 0x306e48, Func Offset: 0x218
	// Func End, Address: 0x306e58, Func Offset: 0x228
}

// Load__10zRaceTimerFR5xBaseR9xDynAssetUi
// Start address: 0x306e60
void zRaceTimer::Load(xBase& data, xDynAsset& asset)
{
	// Line 61, Address: 0x306e60, Func Offset: 0
	// Line 63, Address: 0x306e74, Func Offset: 0x14
	// Line 64, Address: 0x306fa8, Func Offset: 0x148
	// Func End, Address: 0x306fbc, Func Offset: 0x15c
}

