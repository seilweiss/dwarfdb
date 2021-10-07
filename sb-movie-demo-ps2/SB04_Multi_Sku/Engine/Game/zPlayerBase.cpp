



void zPlayerLoadMultipleHIPs(uint32 sceneID);
void zPlayerLoadHIP(uint32 sceneID);
void zPlayerReset(zEnt* ent);
void zPlayerRender(zEnt* ent);
void zPlayerUpdate(xEnt* ent, float32 dt);

// zPlayerLoadMultipleHIPs__FUi
// Start address: 0x307760
void zPlayerLoadMultipleHIPs(uint32 sceneID)
{
	uint32 tagPlayer;
	int32 i;
	int32 playerOrderCount;
	uint32 playersToLoad;
	uint8 needSBCommon;
	uint8 needPatCommon;
	ePlayerEnum player;
	// Line 311, Address: 0x307760, Func Offset: 0
	// Line 317, Address: 0x307768, Func Offset: 0x8
	// Line 311, Address: 0x30776c, Func Offset: 0xc
	// Line 317, Address: 0x307784, Func Offset: 0x24
	// Line 326, Address: 0x30778c, Func Offset: 0x2c
	// Line 322, Address: 0x30779c, Func Offset: 0x3c
	// Line 323, Address: 0x3077a0, Func Offset: 0x40
	// Line 326, Address: 0x3077a4, Func Offset: 0x44
	// Line 328, Address: 0x3077ac, Func Offset: 0x4c
	// Line 330, Address: 0x3077c4, Func Offset: 0x64
	// Line 334, Address: 0x3077d0, Func Offset: 0x70
	// Line 344, Address: 0x3077d8, Func Offset: 0x78
	// Line 346, Address: 0x3077f0, Func Offset: 0x90
	// Line 350, Address: 0x3077fc, Func Offset: 0x9c
	// Line 346, Address: 0x307800, Func Offset: 0xa0
	// Line 347, Address: 0x307804, Func Offset: 0xa4
	// Line 346, Address: 0x307808, Func Offset: 0xa8
	// Line 348, Address: 0x30780c, Func Offset: 0xac
	// Line 346, Address: 0x307810, Func Offset: 0xb0
	// Line 350, Address: 0x307814, Func Offset: 0xb4
	// Line 351, Address: 0x30781c, Func Offset: 0xbc
	// Line 353, Address: 0x307834, Func Offset: 0xd4
	// Line 356, Address: 0x307850, Func Offset: 0xf0
	// Line 366, Address: 0x307868, Func Offset: 0x108
	// Line 367, Address: 0x307870, Func Offset: 0x110
	// Line 336, Address: 0x307888, Func Offset: 0x128
	// Line 340, Address: 0x307894, Func Offset: 0x134
	// Line 367, Address: 0x307898, Func Offset: 0x138
	// Line 338, Address: 0x3078a4, Func Offset: 0x144
	// Line 367, Address: 0x3078a8, Func Offset: 0x148
	// Line 341, Address: 0x3078b4, Func Offset: 0x154
	// Line 367, Address: 0x3078c4, Func Offset: 0x164
	// Line 358, Address: 0x3078e8, Func Offset: 0x188
	// Line 367, Address: 0x3078ec, Func Offset: 0x18c
	// Line 364, Address: 0x307900, Func Offset: 0x1a0
	// Line 367, Address: 0x307910, Func Offset: 0x1b0
	// Line 365, Address: 0x30791c, Func Offset: 0x1bc
	// Line 367, Address: 0x307920, Func Offset: 0x1c0
	// Func End, Address: 0x307960, Func Offset: 0x200
}

// zPlayerLoadHIP__FUi
// Start address: 0x307960
void zPlayerLoadHIP(uint32 sceneID)
{
	uint32 tagPlayer;
	// Line 105, Address: 0x307960, Func Offset: 0
	// Line 106, Address: 0x307964, Func Offset: 0x4
	// Line 105, Address: 0x307968, Func Offset: 0x8
	// Line 106, Address: 0x30797c, Func Offset: 0x1c
	// Line 113, Address: 0x307984, Func Offset: 0x24
	// Line 106, Address: 0x307988, Func Offset: 0x28
	// Line 113, Address: 0x30798c, Func Offset: 0x2c
	// Line 115, Address: 0x307998, Func Offset: 0x38
	// Line 116, Address: 0x3079a4, Func Offset: 0x44
	// Line 120, Address: 0x3079ac, Func Offset: 0x4c
	// Line 122, Address: 0x3079bc, Func Offset: 0x5c
	// Line 132, Address: 0x307a3c, Func Offset: 0xdc
	// Line 177, Address: 0x307a70, Func Offset: 0x110
	// Line 184, Address: 0x307af0, Func Offset: 0x190
	// Line 185, Address: 0x307af4, Func Offset: 0x194
	// Line 184, Address: 0x307af8, Func Offset: 0x198
	// Line 187, Address: 0x307afc, Func Offset: 0x19c
	// Line 201, Address: 0x307b04, Func Offset: 0x1a4
	// Line 213, Address: 0x307b10, Func Offset: 0x1b0
	// Func End, Address: 0x307b54, Func Offset: 0x1f4
}

// zPlayerReset__FP4zEnt
// Start address: 0x307b60
void zPlayerReset(zEnt* ent)
{
	// Line 92, Address: 0x307b60, Func Offset: 0
	// Func End, Address: 0x307b70, Func Offset: 0x10
}

// zPlayerRender__FP4zEnt
// Start address: 0x307b70
void zPlayerRender(zEnt* ent)
{
	// Line 85, Address: 0x307b70, Func Offset: 0
	// Func End, Address: 0x307b80, Func Offset: 0x10
}

// zPlayerUpdate__FP4xEntP6xScenef
// Start address: 0x307b80
void zPlayerUpdate(xEnt* ent, float32 dt)
{
	zPlayer* player;
	// Line 60, Address: 0x307b80, Func Offset: 0
	// Line 69, Address: 0x307b90, Func Offset: 0x10
	// Line 76, Address: 0x307b94, Func Offset: 0x14
	// Line 77, Address: 0x307ba4, Func Offset: 0x24
	// Line 78, Address: 0x307bb8, Func Offset: 0x38
	// Line 79, Address: 0x307bcc, Func Offset: 0x4c
	// Func End, Address: 0x307be0, Func Offset: 0x60
}

