



zMovePoint* NextBestNav(zMovePoint* nav_from);
int32 Cycle(zNMECommon* npc, int32 peek);

// NextBestNav__9zNMEArenaFP10zNMECommonP10zMovePoint
// Start address: 0x2a4240
zMovePoint* zNMEArena::NextBestNav(zMovePoint* nav_from)
{
	float32 rad_best;
	zMovePoint* nav_best;
	int32 i;
	// Line 263, Address: 0x2a4240, Func Offset: 0
	// Line 253, Address: 0x2a4244, Func Offset: 0x4
	// Line 264, Address: 0x2a424c, Func Offset: 0xc
	// Line 263, Address: 0x2a4250, Func Offset: 0x10
	// Line 264, Address: 0x2a4254, Func Offset: 0x14
	// Line 291, Address: 0x2a4260, Func Offset: 0x20
	// Line 264, Address: 0x2a4264, Func Offset: 0x24
	// Line 291, Address: 0x2a4268, Func Offset: 0x28
	// Line 295, Address: 0x2a426c, Func Offset: 0x2c
	// Line 279, Address: 0x2a4270, Func Offset: 0x30
	// Line 266, Address: 0x2a4278, Func Offset: 0x38
	// Line 268, Address: 0x2a427c, Func Offset: 0x3c
	// Line 278, Address: 0x2a4284, Func Offset: 0x44
	// Line 279, Address: 0x2a428c, Func Offset: 0x4c
	// Line 290, Address: 0x2a4298, Func Offset: 0x58
	// Line 291, Address: 0x2a42a0, Func Offset: 0x60
	// Line 290, Address: 0x2a42a8, Func Offset: 0x68
	// Line 291, Address: 0x2a42b8, Func Offset: 0x78
	// Line 290, Address: 0x2a42c0, Func Offset: 0x80
	// Line 291, Address: 0x2a42c4, Func Offset: 0x84
	// Line 295, Address: 0x2a42d0, Func Offset: 0x90
	// Line 311, Address: 0x2a42ec, Func Offset: 0xac
	// Line 312, Address: 0x2a42f8, Func Offset: 0xb8
	// Line 313, Address: 0x2a42fc, Func Offset: 0xbc
	// Line 321, Address: 0x2a4300, Func Offset: 0xc0
	// Line 324, Address: 0x2a4310, Func Offset: 0xd0
	// Func End, Address: 0x2a4318, Func Offset: 0xd8
}

// Cycle__9zNMEArenaFP10zNMECommoni
// Start address: 0x2a4320
int32 zNMEArena::Cycle(zNMECommon* npc, int32 peek)
{
	zMovePoint* nav_near;
	// Line 169, Address: 0x2a4320, Func Offset: 0
	// Line 173, Address: 0x2a4324, Func Offset: 0x4
	// Line 169, Address: 0x2a4334, Func Offset: 0x14
	// Line 173, Address: 0x2a4350, Func Offset: 0x30
	// Line 174, Address: 0x2a4358, Func Offset: 0x38
	// Line 173, Address: 0x2a435c, Func Offset: 0x3c
	// Line 174, Address: 0x2a4364, Func Offset: 0x44
	// Line 173, Address: 0x2a4368, Func Offset: 0x48
	// Line 174, Address: 0x2a436c, Func Offset: 0x4c
	// Line 175, Address: 0x2a4370, Func Offset: 0x50
	// Line 177, Address: 0x2a4374, Func Offset: 0x54
	// Line 178, Address: 0x2a4378, Func Offset: 0x58
	// Line 179, Address: 0x2a4384, Func Offset: 0x64
	// Line 193, Address: 0x2a438c, Func Offset: 0x6c
	// Line 200, Address: 0x2a4394, Func Offset: 0x74
	// Line 207, Address: 0x2a439c, Func Offset: 0x7c
	// Line 214, Address: 0x2a43a4, Func Offset: 0x84
	// Line 218, Address: 0x2a43cc, Func Offset: 0xac
	// Line 219, Address: 0x2a43d0, Func Offset: 0xb0
	// Line 235, Address: 0x2a440c, Func Offset: 0xec
	// Line 236, Address: 0x2a443c, Func Offset: 0x11c
	// Line 244, Address: 0x2a4448, Func Offset: 0x128
	// Line 248, Address: 0x2a4450, Func Offset: 0x130
	// Line 193, Address: 0x2a4488, Func Offset: 0x168
	// Line 248, Address: 0x2a4490, Func Offset: 0x170
	// Line 193, Address: 0x2a4494, Func Offset: 0x174
	// Line 248, Address: 0x2a4498, Func Offset: 0x178
	// Line 198, Address: 0x2a44dc, Func Offset: 0x1bc
	// Line 248, Address: 0x2a44e4, Func Offset: 0x1c4
	// Line 199, Address: 0x2a4508, Func Offset: 0x1e8
	// Line 248, Address: 0x2a4510, Func Offset: 0x1f0
	// Line 205, Address: 0x2a456c, Func Offset: 0x24c
	// Line 248, Address: 0x2a4574, Func Offset: 0x254
	// Line 205, Address: 0x2a458c, Func Offset: 0x26c
	// Line 248, Address: 0x2a4590, Func Offset: 0x270
	// Line 206, Address: 0x2a459c, Func Offset: 0x27c
	// Line 248, Address: 0x2a45a4, Func Offset: 0x284
	// Line 207, Address: 0x2a45b8, Func Offset: 0x298
	// Line 248, Address: 0x2a45c0, Func Offset: 0x2a0
	// Line 207, Address: 0x2a45c4, Func Offset: 0x2a4
	// Line 248, Address: 0x2a45c8, Func Offset: 0x2a8
	// Line 212, Address: 0x2a460c, Func Offset: 0x2ec
	// Line 248, Address: 0x2a4614, Func Offset: 0x2f4
	// Line 212, Address: 0x2a462c, Func Offset: 0x30c
	// Line 248, Address: 0x2a4630, Func Offset: 0x310
	// Line 213, Address: 0x2a463c, Func Offset: 0x31c
	// Line 248, Address: 0x2a4644, Func Offset: 0x324
	// Line 219, Address: 0x2a465c, Func Offset: 0x33c
	// Line 248, Address: 0x2a4660, Func Offset: 0x340
	// Line 245, Address: 0x2a4678, Func Offset: 0x358
	// Line 249, Address: 0x2a4684, Func Offset: 0x364
	// Func End, Address: 0x2a469c, Func Offset: 0x37c
}

