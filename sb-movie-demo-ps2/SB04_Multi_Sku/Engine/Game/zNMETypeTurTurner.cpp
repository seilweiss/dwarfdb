



int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
int32 Resume();
int32 Enter();
int32 Process(en_trantype* trantype, float32 dt, void* ctxt);
int32 TypeHandleMail(NMEMsg* mail);
void Process(float32 dt);
void Reset();
xAnimTable* CreateAnimTable(xAnimTable* table);
uint32 AnimPick(int32 gid, en_npcgspot gspot);
void SelfSetup();

// Process__17zNMEGoalTurrTTurnFP11en_trantypefPv
// Start address: 0x1fa100
int32 zNMEGoalTurrTTurn::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	zNMETurret* npc;
	int32 nextgoal;
	xVec3 dir_plyr;
	// Line 278, Address: 0x1fa100, Func Offset: 0
	// Line 284, Address: 0x1fa104, Func Offset: 0x4
	// Line 278, Address: 0x1fa108, Func Offset: 0x8
	// Line 283, Address: 0x1fa10c, Func Offset: 0xc
	// Line 278, Address: 0x1fa110, Func Offset: 0x10
	// Line 284, Address: 0x1fa114, Func Offset: 0x14
	// Line 278, Address: 0x1fa118, Func Offset: 0x18
	// Line 279, Address: 0x1fa130, Func Offset: 0x30
	// Line 283, Address: 0x1fa134, Func Offset: 0x34
	// Line 280, Address: 0x1fa144, Func Offset: 0x44
	// Line 279, Address: 0x1fa148, Func Offset: 0x48
	// Line 283, Address: 0x1fa14c, Func Offset: 0x4c
	// Line 284, Address: 0x1fa19c, Func Offset: 0x9c
	// Line 288, Address: 0x1fa1a8, Func Offset: 0xa8
	// Line 290, Address: 0x1fa1c8, Func Offset: 0xc8
	// Line 289, Address: 0x1fa1cc, Func Offset: 0xcc
	// Line 290, Address: 0x1fa1d0, Func Offset: 0xd0
	// Line 289, Address: 0x1fa1d4, Func Offset: 0xd4
	// Line 293, Address: 0x1fa1d8, Func Offset: 0xd8
	// Line 297, Address: 0x1fa1e8, Func Offset: 0xe8
	// Line 302, Address: 0x1fa210, Func Offset: 0x110
	// Line 308, Address: 0x1fa228, Func Offset: 0x128
	// Line 286, Address: 0x1fa288, Func Offset: 0x188
	// Line 285, Address: 0x1fa28c, Func Offset: 0x18c
	// Line 308, Address: 0x1fa290, Func Offset: 0x190
	// Line 287, Address: 0x1fa294, Func Offset: 0x194
	// Line 308, Address: 0x1fa29c, Func Offset: 0x19c
	// Line 305, Address: 0x1fa2a8, Func Offset: 0x1a8
	// Line 308, Address: 0x1fa2b0, Func Offset: 0x1b0
	// Line 304, Address: 0x1fa2b4, Func Offset: 0x1b4
	// Line 308, Address: 0x1fa2b8, Func Offset: 0x1b8
	// Line 305, Address: 0x1fa2c4, Func Offset: 0x1c4
	// Line 304, Address: 0x1fa2cc, Func Offset: 0x1cc
	// Line 308, Address: 0x1fa2d8, Func Offset: 0x1d8
	// Line 309, Address: 0x1fa2f0, Func Offset: 0x1f0
	// Func End, Address: 0x1fa30c, Func Offset: 0x20c
}

// Resume__17zNMEGoalTurrTTurnFfPv
// Start address: 0x1fa310
int32 zNMEGoalTurrTTurn::Resume()
{
	// Line 271, Address: 0x1fa310, Func Offset: 0
	// Line 273, Address: 0x1fa314, Func Offset: 0x4
	// Line 271, Address: 0x1fa318, Func Offset: 0x8
	// Line 274, Address: 0x1fa31c, Func Offset: 0xc
	// Line 271, Address: 0x1fa320, Func Offset: 0x10
	// Line 273, Address: 0x1fa32c, Func Offset: 0x1c
	// Line 274, Address: 0x1fa330, Func Offset: 0x20
	// Line 275, Address: 0x1fa3b4, Func Offset: 0xa4
	// Func End, Address: 0x1fa3cc, Func Offset: 0xbc
}

// Enter__17zNMEGoalTurrTTurnFfPv
// Start address: 0x1fa3d0
int32 zNMEGoalTurrTTurn::Enter()
{
	// Line 264, Address: 0x1fa3d0, Func Offset: 0
	// Line 266, Address: 0x1fa3d4, Func Offset: 0x4
	// Line 264, Address: 0x1fa3d8, Func Offset: 0x8
	// Line 267, Address: 0x1fa3dc, Func Offset: 0xc
	// Line 264, Address: 0x1fa3e0, Func Offset: 0x10
	// Line 266, Address: 0x1fa3ec, Func Offset: 0x1c
	// Line 267, Address: 0x1fa3f0, Func Offset: 0x20
	// Line 268, Address: 0x1fa474, Func Offset: 0xa4
	// Func End, Address: 0x1fa48c, Func Offset: 0xbc
}

// Process__18zNMEGoalTurrTReadyFP11en_trantypefPv
// Start address: 0x1fa490
int32 zNMEGoalTurrTReady::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	zNMETurret* npc;
	int32 nextgoal;
	// Line 239, Address: 0x1fa490, Func Offset: 0
	// Line 244, Address: 0x1fa494, Func Offset: 0x4
	// Line 239, Address: 0x1fa498, Func Offset: 0x8
	// Line 243, Address: 0x1fa49c, Func Offset: 0xc
	// Line 239, Address: 0x1fa4a0, Func Offset: 0x10
	// Line 241, Address: 0x1fa4a4, Func Offset: 0x14
	// Line 243, Address: 0x1fa4a8, Func Offset: 0x18
	// Line 244, Address: 0x1fa4ac, Func Offset: 0x1c
	// Line 240, Address: 0x1fa4b0, Func Offset: 0x20
	// Line 244, Address: 0x1fa4b4, Func Offset: 0x24
	// Line 243, Address: 0x1fa4bc, Func Offset: 0x2c
	// Line 240, Address: 0x1fa4c0, Func Offset: 0x30
	// Line 243, Address: 0x1fa4c4, Func Offset: 0x34
	// Line 244, Address: 0x1fa4f4, Func Offset: 0x64
	// Line 243, Address: 0x1fa4f8, Func Offset: 0x68
	// Line 244, Address: 0x1fa4fc, Func Offset: 0x6c
	// Line 249, Address: 0x1fa50c, Func Offset: 0x7c
	// Line 250, Address: 0x1fa518, Func Offset: 0x88
	// Line 246, Address: 0x1fa520, Func Offset: 0x90
	// Line 245, Address: 0x1fa524, Func Offset: 0x94
	// Line 250, Address: 0x1fa528, Func Offset: 0x98
	// Line 252, Address: 0x1fa534, Func Offset: 0xa4
	// Line 253, Address: 0x1fa584, Func Offset: 0xf4
	// Func End, Address: 0x1fa594, Func Offset: 0x104
}

// TypeHandleMail__13zNMETurTurnerFP6NMEMsg
// Start address: 0x1fa5a0
int32 zNMETurTurner::TypeHandleMail(NMEMsg* mail)
{
	int32 handled;
	xPsyche* psy;
	// Line 195, Address: 0x1fa5a0, Func Offset: 0
	// Line 199, Address: 0x1fa5a4, Func Offset: 0x4
	// Line 195, Address: 0x1fa5a8, Func Offset: 0x8
	// Line 199, Address: 0x1fa5b0, Func Offset: 0x10
	// Line 197, Address: 0x1fa5b4, Func Offset: 0x14
	// Line 199, Address: 0x1fa5b8, Func Offset: 0x18
	// Line 202, Address: 0x1fa5c8, Func Offset: 0x28
	// Line 207, Address: 0x1fa5d0, Func Offset: 0x30
	// Line 216, Address: 0x1fa5e0, Func Offset: 0x40
	// Line 217, Address: 0x1fa5f4, Func Offset: 0x54
	// Func End, Address: 0x1fa600, Func Offset: 0x60
}

// Process__13zNMETurTurnerFf
// Start address: 0x1fa600
void zNMETurTurner::Process(float32 dt)
{
	// Line 185, Address: 0x1fa600, Func Offset: 0
	// Line 187, Address: 0x1fa604, Func Offset: 0x4
	// Line 185, Address: 0x1fa608, Func Offset: 0x8
	// Line 187, Address: 0x1fa618, Func Offset: 0x18
	// Line 189, Address: 0x1fa624, Func Offset: 0x24
	// Line 191, Address: 0x1fa65c, Func Offset: 0x5c
	// Func End, Address: 0x1fa670, Func Offset: 0x70
}

// Reset__13zNMETurTurnerFv
// Start address: 0x1fa670
void zNMETurTurner::Reset()
{
	// Line 177, Address: 0x1fa670, Func Offset: 0
	// Line 178, Address: 0x1fa680, Func Offset: 0x10
	// Line 179, Address: 0x1fa8fc, Func Offset: 0x28c
	// Line 181, Address: 0x1fa910, Func Offset: 0x2a0
	// Func End, Address: 0x1fa924, Func Offset: 0x2b4
}

// CreateAnimTable__13zNMETurTurnerFP10xAnimTable
// Start address: 0x1fa930
xAnimTable* zNMETurTurner::CreateAnimTable(xAnimTable* table)
{
	int32 ourAnims[6];
	// Line 117, Address: 0x1fa930, Func Offset: 0
	// Line 123, Address: 0x1fa940, Func Offset: 0x10
	// Line 130, Address: 0x1fa948, Func Offset: 0x18
	// Line 134, Address: 0x1fa990, Func Offset: 0x60
	// Line 139, Address: 0x1fa9d8, Func Offset: 0xa8
	// Line 143, Address: 0x1faa20, Func Offset: 0xf0
	// Line 147, Address: 0x1faa68, Func Offset: 0x138
	// Line 155, Address: 0x1faab0, Func Offset: 0x180
	// Line 161, Address: 0x1faab4, Func Offset: 0x184
	// Line 155, Address: 0x1faab8, Func Offset: 0x188
	// Line 161, Address: 0x1faac0, Func Offset: 0x190
	// Line 155, Address: 0x1faacc, Func Offset: 0x19c
	// Line 161, Address: 0x1fab08, Func Offset: 0x1d8
	// Line 167, Address: 0x1fab1c, Func Offset: 0x1ec
	// Line 170, Address: 0x1fab64, Func Offset: 0x234
	// Line 172, Address: 0x1fabac, Func Offset: 0x27c
	// Line 123, Address: 0x1fabb4, Func Offset: 0x284
	// Line 172, Address: 0x1fabb8, Func Offset: 0x288
	// Line 173, Address: 0x1fabc8, Func Offset: 0x298
	// Func End, Address: 0x1fabd8, Func Offset: 0x2a8
}

// AnimPick__13zNMETurTurnerFi11en_npcgspotP5xGoal
// Start address: 0x1fabe0
uint32 AnimPick(int32 gid, en_npcgspot gspot)
{
	int32 idx;
	uint32 da_anim;
	// Line 79, Address: 0x1fabe0, Func Offset: 0
	// Line 76, Address: 0x1fabe4, Func Offset: 0x4
	// Line 79, Address: 0x1fabe8, Func Offset: 0x8
	// Line 82, Address: 0x1fac20, Func Offset: 0x40
	// Line 85, Address: 0x1fac28, Func Offset: 0x48
	// Line 87, Address: 0x1fac30, Func Offset: 0x50
	// Line 89, Address: 0x1fac3c, Func Offset: 0x5c
	// Line 91, Address: 0x1fac48, Func Offset: 0x68
	// Line 93, Address: 0x1fac54, Func Offset: 0x74
	// Line 94, Address: 0x1fac60, Func Offset: 0x80
	// Line 96, Address: 0x1fac68, Func Offset: 0x88
	// Line 97, Address: 0x1fac6c, Func Offset: 0x8c
	// Line 100, Address: 0x1fac74, Func Offset: 0x94
	// Line 104, Address: 0x1fac7c, Func Offset: 0x9c
	// Line 109, Address: 0x1fac84, Func Offset: 0xa4
	// Line 110, Address: 0x1fac8c, Func Offset: 0xac
	// Line 113, Address: 0x1faca0, Func Offset: 0xc0
	// Line 88, Address: 0x1faca8, Func Offset: 0xc8
	// Line 90, Address: 0x1facb4, Func Offset: 0xd4
	// Line 92, Address: 0x1facc0, Func Offset: 0xe0
	// Line 114, Address: 0x1faccc, Func Offset: 0xec
	// Func End, Address: 0x1facd4, Func Offset: 0xf4
}

// SelfSetup__13zNMETurTurnerFv
// Start address: 0x1face0
void zNMETurTurner::SelfSetup()
{
	xBehaveMgr* bmgr;
	xPsyche* psy;
	// Line 48, Address: 0x1face0, Func Offset: 0
	// Line 50, Address: 0x1facec, Func Offset: 0xc
	// Line 51, Address: 0x1facf4, Func Offset: 0x14
	// Line 54, Address: 0x1fad08, Func Offset: 0x28
	// Line 57, Address: 0x1fad0c, Func Offset: 0x2c
	// Line 61, Address: 0x1fad14, Func Offset: 0x34
	// Line 62, Address: 0x1fad28, Func Offset: 0x48
	// Line 63, Address: 0x1fad3c, Func Offset: 0x5c
	// Line 64, Address: 0x1fad50, Func Offset: 0x70
	// Line 66, Address: 0x1fad64, Func Offset: 0x84
	// Line 69, Address: 0x1fad6c, Func Offset: 0x8c
	// Line 72, Address: 0x1fad78, Func Offset: 0x98
	// Func End, Address: 0x1fad88, Func Offset: 0xa8
}

