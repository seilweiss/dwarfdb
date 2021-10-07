



void xParCmdCustom_Update(xParCmd* c, xParGroup* ps, float32 dt);
void xParCmdApplyCamMat_Update(xParCmd* c, xParGroup* ps, float32 dt);
void xParCmdCustom_Grass_Update(xParGroup* ps, float32 dt);
void xParCmdJet_Update(xParCmd* c, xParGroup* ps, float32 dt);
void xParCmdDamagePlayer_Update(xParCmd* c, xParGroup* ps);
void xParCmdAnimalMagentism_Update(xParCmd* c, xParGroup* ps, float32 dt);
void xParCmdPlayerCollision_Update();
void xParCmdClipVolumes_Update(xParGroup* ps);
void xParCmdKillDistance_Update(xParCmd* c, xParGroup* ps);
void zParCmdInit();

// xParCmdCustom_Update__FP7xParCmdP9xParGroupf
// Start address: 0x310f20
void xParCmdCustom_Update(xParCmd* c, xParGroup* ps, float32 dt)
{
	xPar* p;
	float32 mdt;
	float32 rSqr;
	float32 oorSqr;
	// Line 566, Address: 0x310f20, Func Offset: 0
	// Line 580, Address: 0x310f24, Func Offset: 0x4
	// Line 566, Address: 0x310f28, Func Offset: 0x8
	// Line 580, Address: 0x310f2c, Func Offset: 0xc
	// Line 591, Address: 0x310f60, Func Offset: 0x40
	// Line 595, Address: 0x310f78, Func Offset: 0x58
	// Line 596, Address: 0x310f7c, Func Offset: 0x5c
	// Line 597, Address: 0x310f80, Func Offset: 0x60
	// Line 600, Address: 0x310f84, Func Offset: 0x64
	// Line 615, Address: 0x310f8c, Func Offset: 0x6c
	// Line 618, Address: 0x310f90, Func Offset: 0x70
	// Line 615, Address: 0x310f94, Func Offset: 0x74
	// Line 618, Address: 0x310f98, Func Offset: 0x78
	// Line 615, Address: 0x310f9c, Func Offset: 0x7c
	// Line 618, Address: 0x310fa0, Func Offset: 0x80
	// Line 622, Address: 0x310fa4, Func Offset: 0x84
	// Line 612, Address: 0x310fa8, Func Offset: 0x88
	// Line 618, Address: 0x310fac, Func Offset: 0x8c
	// Line 622, Address: 0x310fb0, Func Offset: 0x90
	// Line 612, Address: 0x310fb4, Func Offset: 0x94
	// Line 619, Address: 0x310fb8, Func Offset: 0x98
	// Line 606, Address: 0x310fbc, Func Offset: 0x9c
	// Line 610, Address: 0x310fcc, Func Offset: 0xac
	// Line 606, Address: 0x310fd0, Func Offset: 0xb0
	// Line 610, Address: 0x310fd8, Func Offset: 0xb8
	// Line 612, Address: 0x310fe0, Func Offset: 0xc0
	// Line 615, Address: 0x310fec, Func Offset: 0xcc
	// Line 618, Address: 0x310ff4, Func Offset: 0xd4
	// Line 615, Address: 0x310ff8, Func Offset: 0xd8
	// Line 618, Address: 0x31100c, Func Offset: 0xec
	// Line 619, Address: 0x311020, Func Offset: 0x100
	// Line 622, Address: 0x311030, Func Offset: 0x110
	// Line 625, Address: 0x311044, Func Offset: 0x124
	// Line 626, Address: 0x311048, Func Offset: 0x128
	// Line 628, Address: 0x311050, Func Offset: 0x130
	// Line 637, Address: 0x311060, Func Offset: 0x140
	// Line 638, Address: 0x311064, Func Offset: 0x144
	// Line 639, Address: 0x311068, Func Offset: 0x148
	// Line 640, Address: 0x31106c, Func Offset: 0x14c
	// Line 641, Address: 0x311070, Func Offset: 0x150
	// Line 643, Address: 0x31107c, Func Offset: 0x15c
	// Line 646, Address: 0x311084, Func Offset: 0x164
	// Line 647, Address: 0x31108c, Func Offset: 0x16c
	// Line 654, Address: 0x31109c, Func Offset: 0x17c
	// Line 667, Address: 0x3110c8, Func Offset: 0x1a8
	// Line 668, Address: 0x3110cc, Func Offset: 0x1ac
	// Line 674, Address: 0x3110d4, Func Offset: 0x1b4
	// Line 675, Address: 0x3110d8, Func Offset: 0x1b8
	// Func End, Address: 0x3110e4, Func Offset: 0x1c4
}

// xParCmdApplyCamMat_Update__FP7xParCmdP9xParGroupf
// Start address: 0x3110f0
void xParCmdApplyCamMat_Update(xParCmd* c, xParGroup* ps, float32 dt)
{
	xPar* p;
	xParCmdApplyCamMat* cmd;
	xMat4x3* mat;
	float32 mul;
	// Line 502, Address: 0x3110f0, Func Offset: 0
	// Line 509, Address: 0x3110f4, Func Offset: 0x4
	// Line 514, Address: 0x3110f8, Func Offset: 0x8
	// Line 509, Address: 0x3110fc, Func Offset: 0xc
	// Line 514, Address: 0x311100, Func Offset: 0x10
	// Line 517, Address: 0x31110c, Func Offset: 0x1c
	// Line 518, Address: 0x311110, Func Offset: 0x20
	// Line 520, Address: 0x311118, Func Offset: 0x28
	// Line 521, Address: 0x31112c, Func Offset: 0x3c
	// Line 522, Address: 0x311140, Func Offset: 0x50
	// Line 524, Address: 0x311154, Func Offset: 0x64
	// Line 525, Address: 0x311158, Func Offset: 0x68
	// Line 529, Address: 0x311164, Func Offset: 0x74
	// Line 532, Address: 0x311178, Func Offset: 0x88
	// Line 533, Address: 0x31117c, Func Offset: 0x8c
	// Line 535, Address: 0x311184, Func Offset: 0x94
	// Line 536, Address: 0x311198, Func Offset: 0xa8
	// Line 537, Address: 0x3111ac, Func Offset: 0xbc
	// Line 539, Address: 0x3111c0, Func Offset: 0xd0
	// Line 540, Address: 0x3111c4, Func Offset: 0xd4
	// Line 541, Address: 0x3111cc, Func Offset: 0xdc
	// Line 540, Address: 0x3111d0, Func Offset: 0xe0
	// Line 544, Address: 0x3111d4, Func Offset: 0xe4
	// Line 547, Address: 0x3111e8, Func Offset: 0xf8
	// Line 548, Address: 0x3111ec, Func Offset: 0xfc
	// Line 550, Address: 0x3111f4, Func Offset: 0x104
	// Line 551, Address: 0x311208, Func Offset: 0x118
	// Line 552, Address: 0x31121c, Func Offset: 0x12c
	// Line 554, Address: 0x311230, Func Offset: 0x140
	// Line 555, Address: 0x311234, Func Offset: 0x144
	// Line 556, Address: 0x31123c, Func Offset: 0x14c
	// Line 557, Address: 0x311240, Func Offset: 0x150
	// Func End, Address: 0x311248, Func Offset: 0x158
}

// xParCmdCustom_Grass_Update__FP7xParCmdP9xParGroupf
// Start address: 0x311250
void xParCmdCustom_Grass_Update(xParGroup* ps, float32 dt)
{
	xPar* p;
	// Line 456, Address: 0x311250, Func Offset: 0
	// Line 464, Address: 0x311264, Func Offset: 0x14
	// Line 465, Address: 0x311268, Func Offset: 0x18
	// Line 467, Address: 0x31126c, Func Offset: 0x1c
	// Line 486, Address: 0x311290, Func Offset: 0x40
	// Line 480, Address: 0x311294, Func Offset: 0x44
	// Line 486, Address: 0x311298, Func Offset: 0x48
	// Line 480, Address: 0x3112a4, Func Offset: 0x54
	// Line 477, Address: 0x3112ac, Func Offset: 0x5c
	// Line 473, Address: 0x3112b4, Func Offset: 0x64
	// Line 477, Address: 0x3112c8, Func Offset: 0x78
	// Line 473, Address: 0x3112cc, Func Offset: 0x7c
	// Line 477, Address: 0x3112d0, Func Offset: 0x80
	// Line 479, Address: 0x3112e4, Func Offset: 0x94
	// Line 480, Address: 0x3112ec, Func Offset: 0x9c
	// Line 482, Address: 0x3112f8, Func Offset: 0xa8
	// Line 485, Address: 0x311300, Func Offset: 0xb0
	// Line 486, Address: 0x311308, Func Offset: 0xb8
	// Line 487, Address: 0x311314, Func Offset: 0xc4
	// Line 490, Address: 0x311318, Func Offset: 0xc8
	// Line 491, Address: 0x31131c, Func Offset: 0xcc
	// Line 492, Address: 0x311328, Func Offset: 0xd8
	// Func End, Address: 0x311330, Func Offset: 0xe0
}

// xParCmdJet_Update__FP7xParCmdP9xParGroupf
// Start address: 0x311330
void xParCmdJet_Update(xParCmd* c, xParGroup* ps, float32 dt)
{
	xPar* p;
	xParCmdJet* cmd;
	float32 mdt;
	xVec3 center;
	float32 rSqr;
	float32 oorSqr;
	// Line 382, Address: 0x311330, Func Offset: 0
	// Line 384, Address: 0x311334, Func Offset: 0x4
	// Line 392, Address: 0x311338, Func Offset: 0x8
	// Line 395, Address: 0x31133c, Func Offset: 0xc
	// Line 403, Address: 0x311348, Func Offset: 0x18
	// Line 407, Address: 0x311360, Func Offset: 0x30
	// Line 408, Address: 0x311364, Func Offset: 0x34
	// Line 426, Address: 0x311370, Func Offset: 0x40
	// Line 408, Address: 0x311374, Func Offset: 0x44
	// Line 426, Address: 0x311378, Func Offset: 0x48
	// Line 414, Address: 0x31137c, Func Offset: 0x4c
	// Line 426, Address: 0x311380, Func Offset: 0x50
	// Line 427, Address: 0x311388, Func Offset: 0x58
	// Line 414, Address: 0x31138c, Func Offset: 0x5c
	// Line 420, Address: 0x311398, Func Offset: 0x68
	// Line 414, Address: 0x31139c, Func Offset: 0x6c
	// Line 418, Address: 0x3113a0, Func Offset: 0x70
	// Line 414, Address: 0x3113a4, Func Offset: 0x74
	// Line 418, Address: 0x3113ac, Func Offset: 0x7c
	// Line 420, Address: 0x3113b4, Func Offset: 0x84
	// Line 423, Address: 0x3113c0, Func Offset: 0x90
	// Line 426, Address: 0x3113c4, Func Offset: 0x94
	// Line 423, Address: 0x3113c8, Func Offset: 0x98
	// Line 426, Address: 0x3113e4, Func Offset: 0xb4
	// Line 427, Address: 0x3113f8, Func Offset: 0xc8
	// Line 430, Address: 0x311410, Func Offset: 0xe0
	// Line 431, Address: 0x311428, Func Offset: 0xf8
	// Line 432, Address: 0x31143c, Func Offset: 0x10c
	// Line 435, Address: 0x311454, Func Offset: 0x124
	// Line 436, Address: 0x311458, Func Offset: 0x128
	// Line 437, Address: 0x311460, Func Offset: 0x130
	// Line 400, Address: 0x31148c, Func Offset: 0x15c
	// Line 437, Address: 0x311494, Func Offset: 0x164
	// Func End, Address: 0x3114a0, Func Offset: 0x170
}

// xParCmdDamagePlayer_Update__FP7xParCmdP9xParGroupf
// Start address: 0x3114a0
void xParCmdDamagePlayer_Update(xParCmd* c, xParGroup* ps)
{
	xPar* p;
	xParCmdDamagePlayer* cmd;
	xBound* pbound;
	int32 last_idx;
	int32 i;
	xCollis collis;
	xBound bnd_fake;
	// Line 288, Address: 0x3114a0, Func Offset: 0
	// Line 298, Address: 0x3114b8, Func Offset: 0x18
	// Line 290, Address: 0x3114bc, Func Offset: 0x1c
	// Line 298, Address: 0x3114c0, Func Offset: 0x20
	// Line 306, Address: 0x3114c4, Func Offset: 0x24
	// Line 307, Address: 0x3114cc, Func Offset: 0x2c
	// Line 306, Address: 0x3114d0, Func Offset: 0x30
	// Line 308, Address: 0x3114dc, Func Offset: 0x3c
	// Line 312, Address: 0x311500, Func Offset: 0x60
	// Line 319, Address: 0x311514, Func Offset: 0x74
	// Line 320, Address: 0x311528, Func Offset: 0x88
	// Line 322, Address: 0x311530, Func Offset: 0x90
	// Line 326, Address: 0x311538, Func Offset: 0x98
	// Line 358, Address: 0x311558, Func Offset: 0xb8
	// Line 359, Address: 0x311568, Func Offset: 0xc8
	// Line 361, Address: 0x311570, Func Offset: 0xd0
	// Line 362, Address: 0x311580, Func Offset: 0xe0
	// Line 364, Address: 0x311588, Func Offset: 0xe8
	// Line 334, Address: 0x311594, Func Offset: 0xf4
	// Line 364, Address: 0x311598, Func Offset: 0xf8
	// Line 334, Address: 0x31159c, Func Offset: 0xfc
	// Line 364, Address: 0x3115a0, Func Offset: 0x100
	// Line 334, Address: 0x3115a4, Func Offset: 0x104
	// Line 364, Address: 0x3115a8, Func Offset: 0x108
	// Line 340, Address: 0x3115b0, Func Offset: 0x110
	// Line 364, Address: 0x3115b8, Func Offset: 0x118
	// Line 351, Address: 0x3115c8, Func Offset: 0x128
	// Line 364, Address: 0x3115cc, Func Offset: 0x12c
	// Line 352, Address: 0x3115d8, Func Offset: 0x138
	// Line 364, Address: 0x3115e8, Func Offset: 0x148
	// Line 335, Address: 0x311608, Func Offset: 0x168
	// Line 364, Address: 0x311610, Func Offset: 0x170
	// Line 335, Address: 0x31161c, Func Offset: 0x17c
	// Line 364, Address: 0x311620, Func Offset: 0x180
	// Line 337, Address: 0x311634, Func Offset: 0x194
	// Line 364, Address: 0x311638, Func Offset: 0x198
	// Line 338, Address: 0x311664, Func Offset: 0x1c4
	// Line 364, Address: 0x311668, Func Offset: 0x1c8
	// Line 339, Address: 0x311670, Func Offset: 0x1d0
	// Line 365, Address: 0x311678, Func Offset: 0x1d8
	// Func End, Address: 0x311690, Func Offset: 0x1f0
}

// xParCmdAnimalMagentism_Update__FP7xParCmdP9xParGroupf
// Start address: 0x311690
void xParCmdAnimalMagentism_Update(xParCmd* c, xParGroup* ps, float32 dt)
{
	xPar* p;
	xVec3 pos;
	float32 mul;
	xVec3 vec;
	float32 dist;
	// Line 234, Address: 0x311690, Func Offset: 0
	// Line 247, Address: 0x3116b0, Func Offset: 0x20
	// Line 248, Address: 0x3116b4, Func Offset: 0x24
	// Line 243, Address: 0x3116b8, Func Offset: 0x28
	// Line 247, Address: 0x3116bc, Func Offset: 0x2c
	// Line 244, Address: 0x3116c0, Func Offset: 0x30
	// Line 243, Address: 0x3116c4, Func Offset: 0x34
	// Line 244, Address: 0x3116c8, Func Offset: 0x38
	// Line 243, Address: 0x3116cc, Func Offset: 0x3c
	// Line 247, Address: 0x3116d0, Func Offset: 0x40
	// Line 243, Address: 0x3116d8, Func Offset: 0x48
	// Line 244, Address: 0x3116f0, Func Offset: 0x60
	// Line 243, Address: 0x3116f4, Func Offset: 0x64
	// Line 244, Address: 0x3116fc, Func Offset: 0x6c
	// Line 249, Address: 0x311700, Func Offset: 0x70
	// Line 253, Address: 0x311710, Func Offset: 0x80
	// Line 257, Address: 0x311714, Func Offset: 0x84
	// Line 253, Address: 0x311718, Func Offset: 0x88
	// Line 257, Address: 0x31171c, Func Offset: 0x8c
	// Line 253, Address: 0x311720, Func Offset: 0x90
	// Line 254, Address: 0x311728, Func Offset: 0x98
	// Line 255, Address: 0x311734, Func Offset: 0xa4
	// Line 257, Address: 0x31173c, Func Offset: 0xac
	// Line 260, Address: 0x311744, Func Offset: 0xb4
	// Line 266, Address: 0x311748, Func Offset: 0xb8
	// Line 260, Address: 0x31174c, Func Offset: 0xbc
	// Line 266, Address: 0x311750, Func Offset: 0xc0
	// Line 260, Address: 0x311754, Func Offset: 0xc4
	// Line 266, Address: 0x311758, Func Offset: 0xc8
	// Line 260, Address: 0x31175c, Func Offset: 0xcc
	// Line 261, Address: 0x311768, Func Offset: 0xd8
	// Line 262, Address: 0x31177c, Func Offset: 0xec
	// Line 266, Address: 0x31178c, Func Offset: 0xfc
	// Line 270, Address: 0x311794, Func Offset: 0x104
	// Line 272, Address: 0x3117ac, Func Offset: 0x11c
	// Line 273, Address: 0x3117b4, Func Offset: 0x124
	// Line 272, Address: 0x3117b8, Func Offset: 0x128
	// Line 273, Address: 0x3117bc, Func Offset: 0x12c
	// Line 274, Address: 0x3117c4, Func Offset: 0x134
	// Line 275, Address: 0x3117d0, Func Offset: 0x140
	// Line 276, Address: 0x3117dc, Func Offset: 0x14c
	// Line 278, Address: 0x3117e0, Func Offset: 0x150
	// Line 279, Address: 0x3117e4, Func Offset: 0x154
	// Line 280, Address: 0x3117f0, Func Offset: 0x160
	// Line 268, Address: 0x3117f8, Func Offset: 0x168
	// Line 269, Address: 0x3117fc, Func Offset: 0x16c
	// Line 280, Address: 0x311808, Func Offset: 0x178
	// Func End, Address: 0x31182c, Func Offset: 0x19c
}

// xParCmdPlayerCollision_Update__FP7xParCmdP9xParGroupf
// Start address: 0x311830
void xParCmdPlayerCollision_Update()
{
	// Line 226, Address: 0x311830, Func Offset: 0
	// Func End, Address: 0x311838, Func Offset: 0x8
}

// xParCmdClipVolumes_Update__FP7xParCmdP9xParGroupf
// Start address: 0x311840
void xParCmdClipVolumes_Update(xParGroup* ps)
{
	xPar* p;
	int32 i;
	xCollis collis;
	// Line 144, Address: 0x311840, Func Offset: 0
	// Line 153, Address: 0x311854, Func Offset: 0x14
	// Line 154, Address: 0x311858, Func Offset: 0x18
	// Line 158, Address: 0x311860, Func Offset: 0x20
	// Line 173, Address: 0x311870, Func Offset: 0x30
	// Line 174, Address: 0x311874, Func Offset: 0x34
	// Line 175, Address: 0x311880, Func Offset: 0x40
	// Line 164, Address: 0x311894, Func Offset: 0x54
	// Line 175, Address: 0x311898, Func Offset: 0x58
	// Line 165, Address: 0x3118ac, Func Offset: 0x6c
	// Line 175, Address: 0x3118b0, Func Offset: 0x70
	// Line 168, Address: 0x3118d8, Func Offset: 0x98
	// Line 175, Address: 0x3118e8, Func Offset: 0xa8
	// Func End, Address: 0x311900, Func Offset: 0xc0
}

// xParCmdKillDistance_Update__FP7xParCmdP9xParGroupf
// Start address: 0x311900
void xParCmdKillDistance_Update(xParCmd* c, xParGroup* ps)
{
	xPar* p;
	xParCmdKillDistance* cmd;
	xVec3* camera_pos;
	// Line 101, Address: 0x311900, Func Offset: 0
	// Line 108, Address: 0x311904, Func Offset: 0x4
	// Line 113, Address: 0x311908, Func Offset: 0x8
	// Line 108, Address: 0x31190c, Func Offset: 0xc
	// Line 115, Address: 0x311910, Func Offset: 0x10
	// Line 117, Address: 0x31191c, Func Offset: 0x1c
	// Line 119, Address: 0x311924, Func Offset: 0x24
	// Line 121, Address: 0x31193c, Func Offset: 0x3c
	// Line 119, Address: 0x311940, Func Offset: 0x40
	// Line 121, Address: 0x311948, Func Offset: 0x48
	// Line 119, Address: 0x31194c, Func Offset: 0x4c
	// Line 121, Address: 0x311950, Func Offset: 0x50
	// Line 122, Address: 0x311964, Func Offset: 0x64
	// Line 124, Address: 0x311968, Func Offset: 0x68
	// Line 125, Address: 0x31196c, Func Offset: 0x6c
	// Line 126, Address: 0x311974, Func Offset: 0x74
	// Line 131, Address: 0x311984, Func Offset: 0x84
	// Line 133, Address: 0x31199c, Func Offset: 0x9c
	// Line 131, Address: 0x3119a0, Func Offset: 0xa0
	// Line 133, Address: 0x3119a8, Func Offset: 0xa8
	// Line 131, Address: 0x3119ac, Func Offset: 0xac
	// Line 133, Address: 0x3119b0, Func Offset: 0xb0
	// Line 134, Address: 0x3119c4, Func Offset: 0xc4
	// Line 136, Address: 0x3119c8, Func Offset: 0xc8
	// Line 137, Address: 0x3119cc, Func Offset: 0xcc
	// Line 138, Address: 0x3119d4, Func Offset: 0xd4
	// Line 139, Address: 0x3119d8, Func Offset: 0xd8
	// Func End, Address: 0x3119f8, Func Offset: 0xf8
}

// zParCmdInit__Fv
// Start address: 0x311a00
void zParCmdInit()
{
	// Line 60, Address: 0x311a00, Func Offset: 0
	// Line 62, Address: 0x311a08, Func Offset: 0x8
	// Line 65, Address: 0x311a10, Func Offset: 0x10
	// Line 66, Address: 0x311a24, Func Offset: 0x24
	// Line 67, Address: 0x311a38, Func Offset: 0x38
	// Line 68, Address: 0x311a4c, Func Offset: 0x4c
	// Line 69, Address: 0x311a60, Func Offset: 0x60
	// Line 70, Address: 0x311a74, Func Offset: 0x74
	// Line 71, Address: 0x311a88, Func Offset: 0x88
	// Line 72, Address: 0x311a9c, Func Offset: 0x9c
	// Line 73, Address: 0x311ab0, Func Offset: 0xb0
	// Func End, Address: 0x311abc, Func Offset: 0xbc
}

