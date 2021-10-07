



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

// Process__18zNMEGoalTurrPAlertFP11en_trantypefPv
// Start address: 0x1fc090
int32 zNMEGoalTurrPAlert::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	zNMETurret* npc;
	int32 nextgoal;
	xVec3 dir_plyr;
	// Line 287, Address: 0x1fc090, Func Offset: 0
	// Line 293, Address: 0x1fc094, Func Offset: 0x4
	// Line 287, Address: 0x1fc098, Func Offset: 0x8
	// Line 292, Address: 0x1fc09c, Func Offset: 0xc
	// Line 287, Address: 0x1fc0a0, Func Offset: 0x10
	// Line 293, Address: 0x1fc0a4, Func Offset: 0x14
	// Line 288, Address: 0x1fc0a8, Func Offset: 0x18
	// Line 292, Address: 0x1fc0b0, Func Offset: 0x20
	// Line 293, Address: 0x1fc0b4, Func Offset: 0x24
	// Line 289, Address: 0x1fc0b8, Func Offset: 0x28
	// Line 288, Address: 0x1fc0bc, Func Offset: 0x2c
	// Line 292, Address: 0x1fc0c0, Func Offset: 0x30
	// Line 293, Address: 0x1fc0f4, Func Offset: 0x64
	// Line 292, Address: 0x1fc0f8, Func Offset: 0x68
	// Line 293, Address: 0x1fc0fc, Func Offset: 0x6c
	// Line 297, Address: 0x1fc10c, Func Offset: 0x7c
	// Line 299, Address: 0x1fc12c, Func Offset: 0x9c
	// Line 298, Address: 0x1fc130, Func Offset: 0xa0
	// Line 299, Address: 0x1fc134, Func Offset: 0xa4
	// Line 298, Address: 0x1fc138, Func Offset: 0xa8
	// Line 302, Address: 0x1fc13c, Func Offset: 0xac
	// Line 303, Address: 0x1fc148, Func Offset: 0xb8
	// Line 306, Address: 0x1fc154, Func Offset: 0xc4
	// Line 308, Address: 0x1fc180, Func Offset: 0xf0
	// Line 295, Address: 0x1fc1d4, Func Offset: 0x144
	// Line 294, Address: 0x1fc1d8, Func Offset: 0x148
	// Line 308, Address: 0x1fc1dc, Func Offset: 0x14c
	// Line 296, Address: 0x1fc1e0, Func Offset: 0x150
	// Line 309, Address: 0x1fc1e8, Func Offset: 0x158
	// Func End, Address: 0x1fc1f8, Func Offset: 0x168
}

// Resume__18zNMEGoalTurrPAlertFfPv
// Start address: 0x1fc200
int32 zNMEGoalTurrPAlert::Resume()
{
	// Line 280, Address: 0x1fc200, Func Offset: 0
	// Line 282, Address: 0x1fc204, Func Offset: 0x4
	// Line 280, Address: 0x1fc208, Func Offset: 0x8
	// Line 283, Address: 0x1fc20c, Func Offset: 0xc
	// Line 280, Address: 0x1fc210, Func Offset: 0x10
	// Line 282, Address: 0x1fc21c, Func Offset: 0x1c
	// Line 283, Address: 0x1fc220, Func Offset: 0x20
	// Line 284, Address: 0x1fc2a4, Func Offset: 0xa4
	// Func End, Address: 0x1fc2bc, Func Offset: 0xbc
}

// Enter__18zNMEGoalTurrPAlertFfPv
// Start address: 0x1fc2c0
int32 zNMEGoalTurrPAlert::Enter()
{
	// Line 273, Address: 0x1fc2c0, Func Offset: 0
	// Line 275, Address: 0x1fc2c4, Func Offset: 0x4
	// Line 273, Address: 0x1fc2c8, Func Offset: 0x8
	// Line 276, Address: 0x1fc2cc, Func Offset: 0xc
	// Line 273, Address: 0x1fc2d0, Func Offset: 0x10
	// Line 275, Address: 0x1fc2dc, Func Offset: 0x1c
	// Line 276, Address: 0x1fc2e0, Func Offset: 0x20
	// Line 277, Address: 0x1fc364, Func Offset: 0xa4
	// Func End, Address: 0x1fc37c, Func Offset: 0xbc
}

// Process__20zNMEGoalTurrPDormantFP11en_trantypefPv
// Start address: 0x1fc380
int32 zNMEGoalTurrPDormant::Process(en_trantype* trantype, float32 dt, void* ctxt)
{
	zNMETurret* npc;
	int32 nextgoal;
	// Line 248, Address: 0x1fc380, Func Offset: 0
	// Line 253, Address: 0x1fc384, Func Offset: 0x4
	// Line 248, Address: 0x1fc388, Func Offset: 0x8
	// Line 252, Address: 0x1fc38c, Func Offset: 0xc
	// Line 248, Address: 0x1fc390, Func Offset: 0x10
	// Line 250, Address: 0x1fc394, Func Offset: 0x14
	// Line 252, Address: 0x1fc398, Func Offset: 0x18
	// Line 253, Address: 0x1fc39c, Func Offset: 0x1c
	// Line 249, Address: 0x1fc3a0, Func Offset: 0x20
	// Line 253, Address: 0x1fc3a4, Func Offset: 0x24
	// Line 252, Address: 0x1fc3ac, Func Offset: 0x2c
	// Line 249, Address: 0x1fc3b0, Func Offset: 0x30
	// Line 252, Address: 0x1fc3b4, Func Offset: 0x34
	// Line 253, Address: 0x1fc3e4, Func Offset: 0x64
	// Line 252, Address: 0x1fc3e8, Func Offset: 0x68
	// Line 253, Address: 0x1fc3ec, Func Offset: 0x6c
	// Line 258, Address: 0x1fc3fc, Func Offset: 0x7c
	// Line 259, Address: 0x1fc408, Func Offset: 0x88
	// Line 255, Address: 0x1fc410, Func Offset: 0x90
	// Line 254, Address: 0x1fc414, Func Offset: 0x94
	// Line 259, Address: 0x1fc418, Func Offset: 0x98
	// Line 261, Address: 0x1fc424, Func Offset: 0xa4
	// Line 262, Address: 0x1fc474, Func Offset: 0xf4
	// Func End, Address: 0x1fc484, Func Offset: 0x104
}

// TypeHandleMail__12zNMETurPopupFP6NMEMsg
// Start address: 0x1fc490
int32 zNMETurPopup::TypeHandleMail(NMEMsg* mail)
{
	int32 handled;
	xPsyche* psy;
	// Line 204, Address: 0x1fc490, Func Offset: 0
	// Line 208, Address: 0x1fc494, Func Offset: 0x4
	// Line 204, Address: 0x1fc498, Func Offset: 0x8
	// Line 208, Address: 0x1fc4a0, Func Offset: 0x10
	// Line 206, Address: 0x1fc4a4, Func Offset: 0x14
	// Line 208, Address: 0x1fc4a8, Func Offset: 0x18
	// Line 211, Address: 0x1fc4b8, Func Offset: 0x28
	// Line 216, Address: 0x1fc4c0, Func Offset: 0x30
	// Line 225, Address: 0x1fc4d0, Func Offset: 0x40
	// Line 226, Address: 0x1fc4e4, Func Offset: 0x54
	// Func End, Address: 0x1fc4f0, Func Offset: 0x60
}

// Process__12zNMETurPopupFf
// Start address: 0x1fc4f0
void zNMETurPopup::Process(float32 dt)
{
	// Line 191, Address: 0x1fc4f0, Func Offset: 0
	// Line 193, Address: 0x1fc4f4, Func Offset: 0x4
	// Line 191, Address: 0x1fc4f8, Func Offset: 0x8
	// Line 193, Address: 0x1fc508, Func Offset: 0x18
	// Line 196, Address: 0x1fc514, Func Offset: 0x24
	// Line 198, Address: 0x1fc540, Func Offset: 0x50
	// Line 200, Address: 0x1fc578, Func Offset: 0x88
	// Func End, Address: 0x1fc58c, Func Offset: 0x9c
}

// Reset__12zNMETurPopupFv
// Start address: 0x1fc590
void zNMETurPopup::Reset()
{
	// Line 183, Address: 0x1fc590, Func Offset: 0
	// Line 184, Address: 0x1fc5a0, Func Offset: 0x10
	// Line 185, Address: 0x1fc81c, Func Offset: 0x28c
	// Line 187, Address: 0x1fc830, Func Offset: 0x2a0
	// Func End, Address: 0x1fc844, Func Offset: 0x2b4
}

// CreateAnimTable__12zNMETurPopupFP10xAnimTable
// Start address: 0x1fc850
xAnimTable* zNMETurPopup::CreateAnimTable(xAnimTable* table)
{
	int32 ourAnims[8];
	// Line 113, Address: 0x1fc850, Func Offset: 0
	// Line 119, Address: 0x1fc860, Func Offset: 0x10
	// Line 126, Address: 0x1fc868, Func Offset: 0x18
	// Line 130, Address: 0x1fc8b0, Func Offset: 0x60
	// Line 135, Address: 0x1fc8f8, Func Offset: 0xa8
	// Line 139, Address: 0x1fc940, Func Offset: 0xf0
	// Line 144, Address: 0x1fc988, Func Offset: 0x138
	// Line 148, Address: 0x1fc9d0, Func Offset: 0x180
	// Line 152, Address: 0x1fca18, Func Offset: 0x1c8
	// Line 160, Address: 0x1fca60, Func Offset: 0x210
	// Line 167, Address: 0x1fca64, Func Offset: 0x214
	// Line 160, Address: 0x1fca68, Func Offset: 0x218
	// Line 167, Address: 0x1fca70, Func Offset: 0x220
	// Line 160, Address: 0x1fca7c, Func Offset: 0x22c
	// Line 167, Address: 0x1fcad0, Func Offset: 0x280
	// Line 173, Address: 0x1fcae4, Func Offset: 0x294
	// Line 176, Address: 0x1fcb2c, Func Offset: 0x2dc
	// Line 178, Address: 0x1fcb74, Func Offset: 0x324
	// Line 119, Address: 0x1fcb7c, Func Offset: 0x32c
	// Line 178, Address: 0x1fcb80, Func Offset: 0x330
	// Line 179, Address: 0x1fcb90, Func Offset: 0x340
	// Func End, Address: 0x1fcba0, Func Offset: 0x350
}

// AnimPick__12zNMETurPopupFi11en_npcgspotP5xGoal
// Start address: 0x1fcba0
uint32 AnimPick(int32 gid, en_npcgspot gspot)
{
	en_turranim idx;
	// Line 78, Address: 0x1fcba0, Func Offset: 0
	// Line 80, Address: 0x1fcbdc, Func Offset: 0x3c
	// Line 81, Address: 0x1fcbec, Func Offset: 0x4c
	// Line 86, Address: 0x1fcbf4, Func Offset: 0x54
	// Line 88, Address: 0x1fcbfc, Func Offset: 0x5c
	// Line 90, Address: 0x1fcc04, Func Offset: 0x64
	// Line 92, Address: 0x1fcc10, Func Offset: 0x70
	// Line 94, Address: 0x1fcc1c, Func Offset: 0x7c
	// Line 95, Address: 0x1fcc28, Func Offset: 0x88
	// Line 98, Address: 0x1fcc30, Func Offset: 0x90
	// Line 109, Address: 0x1fcc38, Func Offset: 0x98
	// Line 89, Address: 0x1fcc50, Func Offset: 0xb0
	// Line 91, Address: 0x1fcc58, Func Offset: 0xb8
	// Line 93, Address: 0x1fcc60, Func Offset: 0xc0
	// Line 110, Address: 0x1fcc68, Func Offset: 0xc8
	// Func End, Address: 0x1fcc70, Func Offset: 0xd0
}

// SelfSetup__12zNMETurPopupFv
// Start address: 0x1fcc70
void zNMETurPopup::SelfSetup()
{
	xBehaveMgr* bmgr;
	xPsyche* psy;
	// Line 48, Address: 0x1fcc70, Func Offset: 0
	// Line 50, Address: 0x1fcc7c, Func Offset: 0xc
	// Line 51, Address: 0x1fcc84, Func Offset: 0x14
	// Line 54, Address: 0x1fcc98, Func Offset: 0x28
	// Line 57, Address: 0x1fcc9c, Func Offset: 0x2c
	// Line 61, Address: 0x1fcca4, Func Offset: 0x34
	// Line 62, Address: 0x1fccb8, Func Offset: 0x48
	// Line 63, Address: 0x1fcccc, Func Offset: 0x5c
	// Line 64, Address: 0x1fcce0, Func Offset: 0x70
	// Line 66, Address: 0x1fccf4, Func Offset: 0x84
	// Line 69, Address: 0x1fccfc, Func Offset: 0x8c
	// Line 72, Address: 0x1fcd08, Func Offset: 0x98
	// Func End, Address: 0x1fcd18, Func Offset: 0xa8
}

