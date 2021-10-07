



void zBusStopEventCB(xBase* to, uint32 toEvent);
void zBusStop_Update(xBase* to, float32 dt);
void zBusStop_Setup(zBusStop* bstop);
void zBusStop_Init(zBusStop* bstop, busstop_asset* asset);
void zBusStop_Init(xBase& data, xDynAsset& asset);

// zBusStopEventCB__FP5xBaseP5xBaseUiPCfP5xBaseUi
// Start address: 0x3972f0
void zBusStopEventCB(xBase* to, uint32 toEvent)
{
	zBusStop* bstop;
	// Line 312, Address: 0x3972f0, Func Offset: 0
	// Line 316, Address: 0x3972f4, Func Offset: 0x4
	// Line 332, Address: 0x397348, Func Offset: 0x58
	// Line 333, Address: 0x397368, Func Offset: 0x78
	// Func End, Address: 0x397374, Func Offset: 0x84
}

// zBusStop_Update__FP5xBaseP6xScenef
// Start address: 0x397380
void zBusStop_Update(xBase* to, float32 dt)
{
	zBusStop* bstop;
	zEnt* player;
	float32 dx__;
	float32 dy__;
	float32 dz__;
	xAnimSingle* single;
	// Line 115, Address: 0x397380, Func Offset: 0
	// Line 127, Address: 0x397384, Func Offset: 0x4
	// Line 115, Address: 0x397388, Func Offset: 0x8
	// Line 127, Address: 0x39738c, Func Offset: 0xc
	// Line 115, Address: 0x397390, Func Offset: 0x10
	// Line 127, Address: 0x397394, Func Offset: 0x14
	// Line 115, Address: 0x397398, Func Offset: 0x18
	// Line 119, Address: 0x39739c, Func Offset: 0x1c
	// Line 123, Address: 0x3973a0, Func Offset: 0x20
	// Line 125, Address: 0x3973a4, Func Offset: 0x24
	// Line 123, Address: 0x3973b0, Func Offset: 0x30
	// Line 125, Address: 0x3973b4, Func Offset: 0x34
	// Line 127, Address: 0x3973c8, Func Offset: 0x48
	// Line 125, Address: 0x3973cc, Func Offset: 0x4c
	// Line 127, Address: 0x3973d0, Func Offset: 0x50
	// Line 129, Address: 0x3973e4, Func Offset: 0x64
	// Line 130, Address: 0x3973f0, Func Offset: 0x70
	// Line 135, Address: 0x3973f8, Func Offset: 0x78
	// Line 141, Address: 0x397430, Func Offset: 0xb0
	// Line 143, Address: 0x397450, Func Offset: 0xd0
	// Line 145, Address: 0x397468, Func Offset: 0xe8
	// Line 146, Address: 0x39746c, Func Offset: 0xec
	// Line 147, Address: 0x397478, Func Offset: 0xf8
	// Line 152, Address: 0x397484, Func Offset: 0x104
	// Line 157, Address: 0x397498, Func Offset: 0x118
	// Line 159, Address: 0x3974b8, Func Offset: 0x138
	// Line 160, Address: 0x3974c4, Func Offset: 0x144
	// Line 165, Address: 0x3974d4, Func Offset: 0x154
	// Line 176, Address: 0x3974dc, Func Offset: 0x15c
	// Line 179, Address: 0x3974e0, Func Offset: 0x160
	// Line 176, Address: 0x3974ec, Func Offset: 0x16c
	// Line 179, Address: 0x3974f8, Func Offset: 0x178
	// Line 190, Address: 0x39751c, Func Offset: 0x19c
	// Line 192, Address: 0x397528, Func Offset: 0x1a8
	// Line 197, Address: 0x39755c, Func Offset: 0x1dc
	// Line 199, Address: 0x39756c, Func Offset: 0x1ec
	// Line 203, Address: 0x397574, Func Offset: 0x1f4
	// Line 206, Address: 0x397584, Func Offset: 0x204
	// Line 207, Address: 0x397594, Func Offset: 0x214
	// Line 213, Address: 0x3975a4, Func Offset: 0x224
	// Line 215, Address: 0x3975ac, Func Offset: 0x22c
	// Line 222, Address: 0x3975bc, Func Offset: 0x23c
	// Line 221, Address: 0x3975c0, Func Offset: 0x240
	// Line 224, Address: 0x3975c4, Func Offset: 0x244
	// Line 228, Address: 0x3975cc, Func Offset: 0x24c
	// Line 232, Address: 0x3975ec, Func Offset: 0x26c
	// Line 234, Address: 0x3975fc, Func Offset: 0x27c
	// Line 236, Address: 0x397604, Func Offset: 0x284
	// Line 237, Address: 0x397614, Func Offset: 0x294
	// Line 241, Address: 0x39763c, Func Offset: 0x2bc
	// Line 245, Address: 0x397664, Func Offset: 0x2e4
	// Line 247, Address: 0x397668, Func Offset: 0x2e8
	// Line 245, Address: 0x39766c, Func Offset: 0x2ec
	// Line 247, Address: 0x397674, Func Offset: 0x2f4
	// Line 252, Address: 0x397678, Func Offset: 0x2f8
	// Line 258, Address: 0x397680, Func Offset: 0x300
	// Line 259, Address: 0x39768c, Func Offset: 0x30c
	// Line 261, Address: 0x397698, Func Offset: 0x318
	// Line 262, Address: 0x39769c, Func Offset: 0x31c
	// Line 263, Address: 0x3976a4, Func Offset: 0x324
	// Line 272, Address: 0x3976c8, Func Offset: 0x348
	// Line 275, Address: 0x3976cc, Func Offset: 0x34c
	// Line 272, Address: 0x3976d0, Func Offset: 0x350
	// Line 275, Address: 0x3976d4, Func Offset: 0x354
	// Line 280, Address: 0x3976e4, Func Offset: 0x364
	// Line 281, Address: 0x3976fc, Func Offset: 0x37c
	// Line 282, Address: 0x397700, Func Offset: 0x380
	// Line 283, Address: 0x39770c, Func Offset: 0x38c
	// Line 286, Address: 0x397710, Func Offset: 0x390
	// Line 153, Address: 0x397724, Func Offset: 0x3a4
	// Line 286, Address: 0x397728, Func Offset: 0x3a8
	// Line 153, Address: 0x397730, Func Offset: 0x3b0
	// Line 180, Address: 0x397738, Func Offset: 0x3b8
	// Line 286, Address: 0x397744, Func Offset: 0x3c4
	// Line 275, Address: 0x397748, Func Offset: 0x3c8
	// Line 286, Address: 0x39774c, Func Offset: 0x3cc
	// Line 277, Address: 0x397754, Func Offset: 0x3d4
	// Line 286, Address: 0x397760, Func Offset: 0x3e0
	// Func End, Address: 0x397774, Func Offset: 0x3f4
}

// zBusStop_Setup__FP8zBusStop
// Start address: 0x397780
void zBusStop_Setup(zBusStop* bstop)
{
	xBase* simpPtr;
	// Line 100, Address: 0x397780, Func Offset: 0
	// Line 101, Address: 0x39778c, Func Offset: 0xc
	// Line 103, Address: 0x39779c, Func Offset: 0x1c
	// Line 108, Address: 0x3977a8, Func Offset: 0x28
	// Line 111, Address: 0x3977ac, Func Offset: 0x2c
	// Line 109, Address: 0x3977b0, Func Offset: 0x30
	// Line 111, Address: 0x3977b4, Func Offset: 0x34
	// Line 112, Address: 0x3977cc, Func Offset: 0x4c
	// Func End, Address: 0x3977dc, Func Offset: 0x5c
}

// zBusStop_Init__FP8zBusStopP13busstop_asset
// Start address: 0x3977e0
void zBusStop_Init(zBusStop* bstop, busstop_asset* asset)
{
	uint32 size;
	xMarkerAsset* marker;
	// Line 54, Address: 0x3977e0, Func Offset: 0
	// Line 56, Address: 0x3977f4, Func Offset: 0x14
	// Line 66, Address: 0x3977fc, Func Offset: 0x1c
	// Line 64, Address: 0x397800, Func Offset: 0x20
	// Line 66, Address: 0x397804, Func Offset: 0x24
	// Line 68, Address: 0x39780c, Func Offset: 0x2c
	// Line 69, Address: 0x397818, Func Offset: 0x38
	// Line 75, Address: 0x397820, Func Offset: 0x40
	// Line 76, Address: 0x39782c, Func Offset: 0x4c
	// Line 82, Address: 0x397834, Func Offset: 0x54
	// Line 86, Address: 0x397844, Func Offset: 0x64
	// Line 89, Address: 0x397854, Func Offset: 0x74
	// Line 91, Address: 0x39786c, Func Offset: 0x8c
	// Line 92, Address: 0x397870, Func Offset: 0x90
	// Line 95, Address: 0x397874, Func Offset: 0x94
	// Line 96, Address: 0x397878, Func Offset: 0x98
	// Func End, Address: 0x39788c, Func Offset: 0xac
}

// zBusStop_Init__FR5xBaseR9xDynAssetUi
// Start address: 0x397890
void zBusStop_Init(xBase& data, xDynAsset& asset)
{
	// Line 50, Address: 0x397890, Func Offset: 0
	// Func End, Address: 0x397898, Func Offset: 0x8
}

