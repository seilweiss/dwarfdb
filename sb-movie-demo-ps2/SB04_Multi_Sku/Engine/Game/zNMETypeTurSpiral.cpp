



void EmitSteam();
int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
int32 Enter();
int32 Spiral_SeePlyr(xGoal* rawgoal, en_trantype* trantype);
void Process(float32 dt);
void Reset();
xAnimTable* CreateAnimTable(xAnimTable* table);
uint32 AnimPick(int32 gid, en_npcgspot gspot);
void SelfSetup();
void Init(xEntAsset* asset);

// EmitSteam__18zNMEGoalTurrSpiralFf
// Start address: 0x1fad90
void zNMEGoalTurrSpiral::EmitSteam()
{
	zNMETurSpiral* npc;
	xVec3 delta;
	xVec3 pos_src;
	xVec3 pos_tgt;
	xVec3 dir_laser;
	xCollis colrec_data;
	xCollis* colrec;
	int32 rc;
	// Line 298, Address: 0x1fad90, Func Offset: 0
	// Line 310, Address: 0x1fad94, Func Offset: 0x4
	// Line 298, Address: 0x1fad98, Func Offset: 0x8
	// Line 310, Address: 0x1fad9c, Func Offset: 0xc
	// Line 298, Address: 0x1fada0, Func Offset: 0x10
	// Line 309, Address: 0x1fada4, Func Offset: 0x14
	// Line 298, Address: 0x1fada8, Func Offset: 0x18
	// Line 311, Address: 0x1fadac, Func Offset: 0x1c
	// Line 298, Address: 0x1fadb0, Func Offset: 0x20
	// Line 311, Address: 0x1fadb4, Func Offset: 0x24
	// Line 298, Address: 0x1fadb8, Func Offset: 0x28
	// Line 309, Address: 0x1fadbc, Func Offset: 0x2c
	// Line 298, Address: 0x1fadc0, Func Offset: 0x30
	// Line 315, Address: 0x1fadc4, Func Offset: 0x34
	// Line 298, Address: 0x1fadc8, Func Offset: 0x38
	// Line 315, Address: 0x1fadcc, Func Offset: 0x3c
	// Line 298, Address: 0x1fadd0, Func Offset: 0x40
	// Line 309, Address: 0x1fadd4, Func Offset: 0x44
	// Line 298, Address: 0x1fadd8, Func Offset: 0x48
	// Line 309, Address: 0x1faddc, Func Offset: 0x4c
	// Line 298, Address: 0x1fade0, Func Offset: 0x50
	// Line 309, Address: 0x1fade4, Func Offset: 0x54
	// Line 299, Address: 0x1fade8, Func Offset: 0x58
	// Line 310, Address: 0x1fadec, Func Offset: 0x5c
	// Line 311, Address: 0x1fae00, Func Offset: 0x70
	// Line 312, Address: 0x1fae0c, Func Offset: 0x7c
	// Line 299, Address: 0x1fae18, Func Offset: 0x88
	// Line 312, Address: 0x1fae1c, Func Offset: 0x8c
	// Line 314, Address: 0x1fae20, Func Offset: 0x90
	// Line 299, Address: 0x1fae28, Func Offset: 0x98
	// Line 309, Address: 0x1fae2c, Func Offset: 0x9c
	// Line 314, Address: 0x1fae34, Func Offset: 0xa4
	// Line 309, Address: 0x1fae38, Func Offset: 0xa8
	// Line 299, Address: 0x1fae3c, Func Offset: 0xac
	// Line 309, Address: 0x1fae40, Func Offset: 0xb0
	// Line 310, Address: 0x1fae58, Func Offset: 0xc8
	// Line 309, Address: 0x1fae60, Func Offset: 0xd0
	// Line 310, Address: 0x1fae64, Func Offset: 0xd4
	// Line 309, Address: 0x1fae68, Func Offset: 0xd8
	// Line 310, Address: 0x1fae74, Func Offset: 0xe4
	// Line 309, Address: 0x1fae78, Func Offset: 0xe8
	// Line 310, Address: 0x1fae80, Func Offset: 0xf0
	// Line 309, Address: 0x1fae84, Func Offset: 0xf4
	// Line 310, Address: 0x1faea0, Func Offset: 0x110
	// Line 309, Address: 0x1faeac, Func Offset: 0x11c
	// Line 310, Address: 0x1faeb4, Func Offset: 0x124
	// Line 309, Address: 0x1faeb8, Func Offset: 0x128
	// Line 310, Address: 0x1faec0, Func Offset: 0x130
	// Line 309, Address: 0x1faec8, Func Offset: 0x138
	// Line 310, Address: 0x1faecc, Func Offset: 0x13c
	// Line 312, Address: 0x1faf48, Func Offset: 0x1b8
	// Line 310, Address: 0x1faf4c, Func Offset: 0x1bc
	// Line 312, Address: 0x1faf58, Func Offset: 0x1c8
	// Line 311, Address: 0x1faf5c, Func Offset: 0x1cc
	// Line 312, Address: 0x1faf60, Func Offset: 0x1d0
	// Line 311, Address: 0x1faf64, Func Offset: 0x1d4
	// Line 312, Address: 0x1fafb8, Func Offset: 0x228
	// Line 311, Address: 0x1fafc0, Func Offset: 0x230
	// Line 312, Address: 0x1fafcc, Func Offset: 0x23c
	// Line 311, Address: 0x1fafd4, Func Offset: 0x244
	// Line 312, Address: 0x1fafdc, Func Offset: 0x24c
	// Line 314, Address: 0x1fafe8, Func Offset: 0x258
	// Line 312, Address: 0x1faff4, Func Offset: 0x264
	// Line 314, Address: 0x1faff8, Func Offset: 0x268
	// Line 312, Address: 0x1faffc, Func Offset: 0x26c
	// Line 314, Address: 0x1fb000, Func Offset: 0x270
	// Line 321, Address: 0x1fb004, Func Offset: 0x274
	// Line 314, Address: 0x1fb008, Func Offset: 0x278
	// Line 321, Address: 0x1fb014, Func Offset: 0x284
	// Line 314, Address: 0x1fb018, Func Offset: 0x288
	// Line 321, Address: 0x1fb01c, Func Offset: 0x28c
	// Line 314, Address: 0x1fb020, Func Offset: 0x290
	// Line 315, Address: 0x1fb054, Func Offset: 0x2c4
	// Line 314, Address: 0x1fb058, Func Offset: 0x2c8
	// Line 315, Address: 0x1fb068, Func Offset: 0x2d8
	// Line 314, Address: 0x1fb06c, Func Offset: 0x2dc
	// Line 315, Address: 0x1fb070, Func Offset: 0x2e0
	// Line 314, Address: 0x1fb084, Func Offset: 0x2f4
	// Line 315, Address: 0x1fb088, Func Offset: 0x2f8
	// Line 321, Address: 0x1fb09c, Func Offset: 0x30c
	// Line 324, Address: 0x1fb0a4, Func Offset: 0x314
	// Line 325, Address: 0x1fb0a8, Func Offset: 0x318
	// Line 337, Address: 0x1fb0b8, Func Offset: 0x328
	// Line 339, Address: 0x1fb0dc, Func Offset: 0x34c
	// Line 363, Address: 0x1fb0fc, Func Offset: 0x36c
	// Line 365, Address: 0x1fb118, Func Offset: 0x388
	// Line 367, Address: 0x1fb13c, Func Offset: 0x3ac
	// Line 368, Address: 0x1fb158, Func Offset: 0x3c8
	// Line 373, Address: 0x1fb170, Func Offset: 0x3e0
	// Line 374, Address: 0x1fb17c, Func Offset: 0x3ec
	// Line 373, Address: 0x1fb180, Func Offset: 0x3f0
	// Line 374, Address: 0x1fb188, Func Offset: 0x3f8
	// Line 373, Address: 0x1fb18c, Func Offset: 0x3fc
	// Line 374, Address: 0x1fb190, Func Offset: 0x400
	// Line 378, Address: 0x1fb1e8, Func Offset: 0x458
	// Line 379, Address: 0x1fb1f4, Func Offset: 0x464
	// Line 378, Address: 0x1fb200, Func Offset: 0x470
	// Line 379, Address: 0x1fb208, Func Offset: 0x478
	// Line 378, Address: 0x1fb20c, Func Offset: 0x47c
	// Line 379, Address: 0x1fb214, Func Offset: 0x484
	// Line 378, Address: 0x1fb218, Func Offset: 0x488
	// Line 379, Address: 0x1fb240, Func Offset: 0x4b0
	// Line 378, Address: 0x1fb244, Func Offset: 0x4b4
	// Line 379, Address: 0x1fb248, Func Offset: 0x4b8
	// Line 391, Address: 0x1fb254, Func Offset: 0x4c4
	// Line 340, Address: 0x1fb25c, Func Offset: 0x4cc
	// Line 392, Address: 0x1fb268, Func Offset: 0x4d8
	// Func End, Address: 0x1fb298, Func Offset: 0x508
}

// Process__18zNMEGoalTurrSpiralFP11en_trantypefPv
// Start address: 0x1fb2a0
int32 zNMEGoalTurrSpiral::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	zNMETurSpiral* npc;
	// Line 264, Address: 0x1fb2a0, Func Offset: 0
	// Line 269, Address: 0x1fb2a4, Func Offset: 0x4
	// Line 264, Address: 0x1fb2a8, Func Offset: 0x8
	// Line 268, Address: 0x1fb2ac, Func Offset: 0xc
	// Line 264, Address: 0x1fb2b0, Func Offset: 0x10
	// Line 268, Address: 0x1fb2b4, Func Offset: 0x14
	// Line 264, Address: 0x1fb2b8, Func Offset: 0x18
	// Line 269, Address: 0x1fb2cc, Func Offset: 0x2c
	// Line 264, Address: 0x1fb2d0, Func Offset: 0x30
	// Line 265, Address: 0x1fb2d8, Func Offset: 0x38
	// Line 269, Address: 0x1fb2dc, Func Offset: 0x3c
	// Line 268, Address: 0x1fb2e4, Func Offset: 0x44
	// Line 265, Address: 0x1fb2ec, Func Offset: 0x4c
	// Line 268, Address: 0x1fb2f0, Func Offset: 0x50
	// Line 269, Address: 0x1fb31c, Func Offset: 0x7c
	// Line 268, Address: 0x1fb320, Func Offset: 0x80
	// Line 269, Address: 0x1fb324, Func Offset: 0x84
	// Line 270, Address: 0x1fb334, Func Offset: 0x94
	// Line 271, Address: 0x1fb338, Func Offset: 0x98
	// Line 270, Address: 0x1fb33c, Func Offset: 0x9c
	// Line 271, Address: 0x1fb340, Func Offset: 0xa0
	// Line 275, Address: 0x1fb348, Func Offset: 0xa8
	// Line 278, Address: 0x1fb378, Func Offset: 0xd8
	// Line 280, Address: 0x1fb384, Func Offset: 0xe4
	// Line 281, Address: 0x1fb3e0, Func Offset: 0x140
	// Func End, Address: 0x1fb400, Func Offset: 0x160
}

// Enter__18zNMEGoalTurrSpiralFfPv
// Start address: 0x1fb400
int32 zNMEGoalTurrSpiral::Enter()
{
	// Line 259, Address: 0x1fb400, Func Offset: 0
	// Line 260, Address: 0x1fb404, Func Offset: 0x4
	// Line 259, Address: 0x1fb408, Func Offset: 0x8
	// Line 260, Address: 0x1fb40c, Func Offset: 0xc
	// Line 259, Address: 0x1fb410, Func Offset: 0x10
	// Line 260, Address: 0x1fb414, Func Offset: 0x14
	// Line 259, Address: 0x1fb418, Func Offset: 0x18
	// Line 260, Address: 0x1fb420, Func Offset: 0x20
	// Line 261, Address: 0x1fb49c, Func Offset: 0x9c
	// Func End, Address: 0x1fb4b4, Func Offset: 0xb4
}

// Spiral_SeePlyr__13zNMETurSpiralFP5xGoalPvP11en_trantypefPv
// Start address: 0x1fb4c0
int32 Spiral_SeePlyr(xGoal* rawgoal, en_trantype* trantype)
{
	zNMETurSpiral* npc;
	// Line 229, Address: 0x1fb4c0, Func Offset: 0
	// Line 233, Address: 0x1fb4c4, Func Offset: 0x4
	// Line 231, Address: 0x1fb4cc, Func Offset: 0xc
	// Line 233, Address: 0x1fb4d0, Func Offset: 0x10
	// Line 236, Address: 0x1fb4dc, Func Offset: 0x1c
	// Line 243, Address: 0x1fb4e8, Func Offset: 0x28
	// Line 244, Address: 0x1fb4f0, Func Offset: 0x30
	// Line 243, Address: 0x1fb4f4, Func Offset: 0x34
	// Line 244, Address: 0x1fb4f8, Func Offset: 0x38
	// Line 243, Address: 0x1fb504, Func Offset: 0x44
	// Line 244, Address: 0x1fb534, Func Offset: 0x74
	// Line 243, Address: 0x1fb538, Func Offset: 0x78
	// Line 244, Address: 0x1fb53c, Func Offset: 0x7c
	// Line 233, Address: 0x1fb554, Func Offset: 0x94
	// Line 236, Address: 0x1fb55c, Func Offset: 0x9c
	// Line 247, Address: 0x1fb564, Func Offset: 0xa4
	// Line 250, Address: 0x1fb568, Func Offset: 0xa8
	// Line 247, Address: 0x1fb56c, Func Offset: 0xac
	// Line 250, Address: 0x1fb570, Func Offset: 0xb0
	// Line 251, Address: 0x1fb574, Func Offset: 0xb4
	// Func End, Address: 0x1fb580, Func Offset: 0xc0
}

// Process__13zNMETurSpiralFf
// Start address: 0x1fb580
void zNMETurSpiral::Process(float32 dt)
{
	// Line 197, Address: 0x1fb580, Func Offset: 0
	// Line 200, Address: 0x1fb584, Func Offset: 0x4
	// Line 197, Address: 0x1fb588, Func Offset: 0x8
	// Line 200, Address: 0x1fb598, Func Offset: 0x18
	// Line 203, Address: 0x1fb5a4, Func Offset: 0x24
	// Line 205, Address: 0x1fb5d0, Func Offset: 0x50
	// Line 208, Address: 0x1fb608, Func Offset: 0x88
	// Func End, Address: 0x1fb61c, Func Offset: 0x9c
}

// Reset__13zNMETurSpiralFv
// Start address: 0x1fb620
void zNMETurSpiral::Reset()
{
	// Line 186, Address: 0x1fb620, Func Offset: 0
	// Line 187, Address: 0x1fb630, Func Offset: 0x10
	// Line 191, Address: 0x1fb8ac, Func Offset: 0x28c
	// Line 194, Address: 0x1fb8c0, Func Offset: 0x2a0
	// Func End, Address: 0x1fb8d4, Func Offset: 0x2b4
}

// CreateAnimTable__13zNMETurSpiralFP10xAnimTable
// Start address: 0x1fb8e0
xAnimTable* zNMETurSpiral::CreateAnimTable(xAnimTable* table)
{
	int32 ourAnims[7];
	// Line 118, Address: 0x1fb8e0, Func Offset: 0
	// Line 124, Address: 0x1fb8f0, Func Offset: 0x10
	// Line 132, Address: 0x1fb8f8, Func Offset: 0x18
	// Line 136, Address: 0x1fb940, Func Offset: 0x60
	// Line 142, Address: 0x1fb988, Func Offset: 0xa8
	// Line 146, Address: 0x1fb9d0, Func Offset: 0xf0
	// Line 150, Address: 0x1fba18, Func Offset: 0x138
	// Line 156, Address: 0x1fba60, Func Offset: 0x180
	// Line 164, Address: 0x1fbaa8, Func Offset: 0x1c8
	// Line 174, Address: 0x1fbaac, Func Offset: 0x1cc
	// Line 164, Address: 0x1fbab0, Func Offset: 0x1d0
	// Line 174, Address: 0x1fbab8, Func Offset: 0x1d8
	// Line 164, Address: 0x1fbac4, Func Offset: 0x1e4
	// Line 174, Address: 0x1fbb0c, Func Offset: 0x22c
	// Line 180, Address: 0x1fbb20, Func Offset: 0x240
	// Line 182, Address: 0x1fbb68, Func Offset: 0x288
	// Line 124, Address: 0x1fbb70, Func Offset: 0x290
	// Line 182, Address: 0x1fbb74, Func Offset: 0x294
	// Line 183, Address: 0x1fbb84, Func Offset: 0x2a4
	// Func End, Address: 0x1fbb94, Func Offset: 0x2b4
}

// AnimPick__13zNMETurSpiralFi11en_npcgspotP5xGoal
// Start address: 0x1fbba0
uint32 AnimPick(int32 gid, en_npcgspot gspot)
{
	en_turranim idx;
	// Line 93, Address: 0x1fbba0, Func Offset: 0
	// Line 96, Address: 0x1fbbd0, Func Offset: 0x30
	// Line 99, Address: 0x1fbbd8, Func Offset: 0x38
	// Line 101, Address: 0x1fbbe0, Func Offset: 0x40
	// Line 102, Address: 0x1fbbe8, Func Offset: 0x48
	// Line 103, Address: 0x1fbbf4, Func Offset: 0x54
	// Line 114, Address: 0x1fbc08, Func Offset: 0x68
	// Line 101, Address: 0x1fbc20, Func Offset: 0x80
	// Line 102, Address: 0x1fbc28, Func Offset: 0x88
	// Line 115, Address: 0x1fbc30, Func Offset: 0x90
	// Func End, Address: 0x1fbc38, Func Offset: 0x98
}

// SelfSetup__13zNMETurSpiralFv
// Start address: 0x1fbc40
void zNMETurSpiral::SelfSetup()
{
	xBehaveMgr* bmgr;
	xPsyche* psy;
	xGoal* goal;
	// Line 59, Address: 0x1fbc40, Func Offset: 0
	// Line 62, Address: 0x1fbc4c, Func Offset: 0xc
	// Line 63, Address: 0x1fbc54, Func Offset: 0x14
	// Line 66, Address: 0x1fbc68, Func Offset: 0x28
	// Line 69, Address: 0x1fbc6c, Func Offset: 0x2c
	// Line 74, Address: 0x1fbc74, Func Offset: 0x34
	// Line 75, Address: 0x1fbc88, Func Offset: 0x48
	// Line 76, Address: 0x1fbc8c, Func Offset: 0x4c
	// Line 75, Address: 0x1fbc90, Func Offset: 0x50
	// Line 76, Address: 0x1fbc94, Func Offset: 0x54
	// Line 75, Address: 0x1fbc98, Func Offset: 0x58
	// Line 76, Address: 0x1fbc9c, Func Offset: 0x5c
	// Line 75, Address: 0x1fbca0, Func Offset: 0x60
	// Line 76, Address: 0x1fbca4, Func Offset: 0x64
	// Line 77, Address: 0x1fbcac, Func Offset: 0x6c
	// Line 79, Address: 0x1fbcc0, Func Offset: 0x80
	// Line 81, Address: 0x1fbcd4, Func Offset: 0x94
	// Line 84, Address: 0x1fbcdc, Func Offset: 0x9c
	// Line 87, Address: 0x1fbce8, Func Offset: 0xa8
	// Func End, Address: 0x1fbcf8, Func Offset: 0xb8
}

// Init__13zNMETurSpiralFP9xEntAsset
// Start address: 0x1fbd00
void zNMETurSpiral::Init(xEntAsset* asset)
{
	// Line 50, Address: 0x1fbd00, Func Offset: 0
	// Line 51, Address: 0x1fbd14, Func Offset: 0x14
	// Line 53, Address: 0x1fbd28, Func Offset: 0x28
	// Line 55, Address: 0x1fbd40, Func Offset: 0x40
	// Line 53, Address: 0x1fbd48, Func Offset: 0x48
	// Line 55, Address: 0x1fbd4c, Func Offset: 0x4c
	// Line 56, Address: 0x1fbd5c, Func Offset: 0x5c
	// Func End, Address: 0x1fbd6c, Func Offset: 0x6c
}

