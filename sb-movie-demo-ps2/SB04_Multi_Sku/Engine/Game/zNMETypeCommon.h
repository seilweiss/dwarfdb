



void Destroy();
void Render();
void SelfDestroy();
void ProcessInvis();
void PostProcess();
uint32 AnimPick();
int32 GoalPick();
int32 IsAlive();
int32 IsHealthy();
int32 IsPresent();
en_nmesimp SimpleStatus();
float32 HealthRatio();
void Boo();
en_vis VisionTarget();
void DuploOwner(zNMECommon* duper);
void DuploNotice();
void SpeakBegin();
void SpeakEnd();
void SpeakStart();
void SpeakStop();
int32 CanRope();
int32 SetCarryState();
void CollideReview();
zMovePoint* MvptFirstFollow();
zMovePoint* MvptFirstTarget();
xEntFrame* Gimme_xEntFrame();
zNMEDriver* Gimme_DriveData();
xEntShadow* Gimme_ShadowData();
zNMENavNet* Gimme_NavNet();
zNMEArena* Gimme_NMEArena();
xShadowSimpleCache* Gimme_SimpShadowCache();
void Reset();
int32 WannaPoolShadow();
int32 TypeHandleMail();
void Process(float32 dt);
void BUpdate(xVec3* pos);
void Init(xEntAsset* entasset);

// Destroy__10zNMECommonFv
// Start address: 0x1f3f10
void zNMECommon::Destroy()
{
	// Line 491, Address: 0x1f3f10, Func Offset: 0
	// Func End, Address: 0x1f3f20, Func Offset: 0x10
}

// Render__10zNMECommonFv
// Start address: 0x1f3f20
void zNMECommon::Render()
{
	// Line 495, Address: 0x1f3f20, Func Offset: 0
	// Line 496, Address: 0x1f3f2c, Func Offset: 0xc
	// Line 497, Address: 0x1f3f3c, Func Offset: 0x1c
	// Func End, Address: 0x1f3f4c, Func Offset: 0x2c
}

// SelfDestroy__10zNMECommonFv
// Start address: 0x1f3f50
void zNMECommon::SelfDestroy()
{
	// Line 503, Address: 0x1f3f50, Func Offset: 0
	// Line 504, Address: 0x1f3f5c, Func Offset: 0xc
	// Line 506, Address: 0x1f3f7c, Func Offset: 0x2c
	// Func End, Address: 0x1f3f8c, Func Offset: 0x3c
}

// ProcessInvis__10zNMECommonFf
// Start address: 0x1f3f90
void zNMECommon::ProcessInvis()
{
	// Line 523, Address: 0x1f3f90, Func Offset: 0
	// Func End, Address: 0x1f3f98, Func Offset: 0x8
}

// PostProcess__10zNMECommonFf
// Start address: 0x1f3fa0
void zNMECommon::PostProcess()
{
	// Line 524, Address: 0x1f3fa0, Func Offset: 0
	// Func End, Address: 0x1f3fa8, Func Offset: 0x8
}

// AnimPick__10zNMECommonFi11en_npcgspotP5xGoal
// Start address: 0x1f3fb0
uint32 AnimPick()
{
	// Line 585, Address: 0x1f3fb0, Func Offset: 0
	// Func End, Address: 0x1f3fb8, Func Offset: 0x8
}

// GoalPick__10zNMECommonFP5xGoalRiR11en_trantype
// Start address: 0x1f3fc0
int32 GoalPick()
{
	// Line 691, Address: 0x1f3fc0, Func Offset: 0
	// Func End, Address: 0x1f3fc8, Func Offset: 0x8
}

// IsAlive__10zNMECommonFv
// Start address: 0x1f3fd0
int32 zNMECommon::IsAlive()
{
	// Line 695, Address: 0x1f3fd0, Func Offset: 0
	// Func End, Address: 0x1f3fd8, Func Offset: 0x8
}

// IsHealthy__10zNMECommonFv
// Start address: 0x1f3fe0
int32 zNMECommon::IsHealthy()
{
	// Line 696, Address: 0x1f3fe0, Func Offset: 0
	// Func End, Address: 0x1f3ff0, Func Offset: 0x10
}

// IsPresent__10zNMECommonFv
// Start address: 0x1f3ff0
int32 zNMECommon::IsPresent()
{
	// Line 697, Address: 0x1f3ff0, Func Offset: 0
	// Func End, Address: 0x1f4050, Func Offset: 0x60
}

// SimpleStatus__10zNMECommonFv
// Start address: 0x1f4050
en_nmesimp zNMECommon::SimpleStatus()
{
	// Line 701, Address: 0x1f4050, Func Offset: 0
	// Func End, Address: 0x1f4058, Func Offset: 0x8
}

// HealthRatio__10zNMECommonFv
// Start address: 0x1f4060
float32 zNMECommon::HealthRatio()
{
	en_nmesimp simp;
	// Line 703, Address: 0x1f4060, Func Offset: 0
	// Line 704, Address: 0x1f4068, Func Offset: 0x8
	// Line 706, Address: 0x1f4078, Func Offset: 0x18
	// Line 708, Address: 0x1f4098, Func Offset: 0x38
	// Func End, Address: 0x1f40a4, Func Offset: 0x44
}

// Boo__10zNMECommonFPC10zNMECommon
// Start address: 0x1f40b0
void zNMECommon::Boo()
{
	// Line 711, Address: 0x1f40b0, Func Offset: 0
	// Func End, Address: 0x1f40b8, Func Offset: 0x8
}

// VisionTarget__10zNMECommonCFP4xEnt9en_defconi
// Start address: 0x1f40c0
en_vis VisionTarget()
{
	// Line 724, Address: 0x1f40c0, Func Offset: 0
	// Func End, Address: 0x1f40c8, Func Offset: 0x8
}

// DuploOwner__10zNMECommonFP10zNMECommon
// Start address: 0x1f40d0
void zNMECommon::DuploOwner(zNMECommon* duper)
{
	// Line 737, Address: 0x1f40d0, Func Offset: 0
	// Func End, Address: 0x1f40d8, Func Offset: 0x8
}

// DuploNotice__10zNMECommonF9en_smnotePv
// Start address: 0x1f40e0
void DuploNotice()
{
	// Line 738, Address: 0x1f40e0, Func Offset: 0
	// Func End, Address: 0x1f40e8, Func Offset: 0x8
}

// SpeakBegin__10zNMECommonFv
// Start address: 0x1f40f0
void zNMECommon::SpeakBegin()
{
	// Line 777, Address: 0x1f40f0, Func Offset: 0
	// Func End, Address: 0x1f40f8, Func Offset: 0x8
}

// SpeakEnd__10zNMECommonFv
// Start address: 0x1f4100
void zNMECommon::SpeakEnd()
{
	// Line 778, Address: 0x1f4100, Func Offset: 0
	// Func End, Address: 0x1f4108, Func Offset: 0x8
}

// SpeakStart__10zNMECommonFUiUii
// Start address: 0x1f4110
void zNMECommon::SpeakStart()
{
	// Line 779, Address: 0x1f4110, Func Offset: 0
	// Func End, Address: 0x1f4118, Func Offset: 0x8
}

// SpeakStop__10zNMECommonFv
// Start address: 0x1f4120
void zNMECommon::SpeakStop()
{
	// Line 780, Address: 0x1f4120, Func Offset: 0
	// Func End, Address: 0x1f4128, Func Offset: 0x8
}

// CanRope__10zNMECommonFv
// Start address: 0x1f4130
int32 zNMECommon::CanRope()
{
	// Line 787, Address: 0x1f4130, Func Offset: 0
	// Func End, Address: 0x1f4140, Func Offset: 0x10
}

// SetCarryState__10zNMECommonF11en_carystat
// Start address: 0x1f4140
int32 SetCarryState()
{
	// Line 793, Address: 0x1f4140, Func Offset: 0
	// Func End, Address: 0x1f4148, Func Offset: 0x8
}

// CollideReview__10zNMECommonFv
// Start address: 0x1f4150
void zNMECommon::CollideReview()
{
	// Line 964, Address: 0x1f4150, Func Offset: 0
	// Func End, Address: 0x1f4158, Func Offset: 0x8
}

// MvptFirstFollow__10zNMECommonFv
// Start address: 0x1f4160
zMovePoint* zNMECommon::MvptFirstFollow()
{
	// Line 988, Address: 0x1f4160, Func Offset: 0
	// Func End, Address: 0x1f4168, Func Offset: 0x8
}

// MvptFirstTarget__10zNMECommonFv
// Start address: 0x1f4170
zMovePoint* zNMECommon::MvptFirstTarget()
{
	// Line 989, Address: 0x1f4170, Func Offset: 0
	// Func End, Address: 0x1f4178, Func Offset: 0x8
}

// Gimme_xEntFrame__10zNMECommonFv
// Start address: 0x1f4180
xEntFrame* zNMECommon::Gimme_xEntFrame()
{
	// Line 1106, Address: 0x1f4180, Func Offset: 0
	// Func End, Address: 0x1f4188, Func Offset: 0x8
}

// Gimme_DriveData__10zNMECommonFv
// Start address: 0x1f4190
zNMEDriver* zNMECommon::Gimme_DriveData()
{
	// Line 1107, Address: 0x1f4190, Func Offset: 0
	// Func End, Address: 0x1f4198, Func Offset: 0x8
}

// Gimme_ShadowData__10zNMECommonFv
// Start address: 0x1f41a0
xEntShadow* zNMECommon::Gimme_ShadowData()
{
	// Line 1108, Address: 0x1f41a0, Func Offset: 0
	// Func End, Address: 0x1f41a8, Func Offset: 0x8
}

// Gimme_NavNet__10zNMECommonFv
// Start address: 0x1f41b0
zNMENavNet* zNMECommon::Gimme_NavNet()
{
	// Line 1109, Address: 0x1f41b0, Func Offset: 0
	// Func End, Address: 0x1f41b8, Func Offset: 0x8
}

// Gimme_NMEArena__10zNMECommonFv
// Start address: 0x1f41c0
zNMEArena* zNMECommon::Gimme_NMEArena()
{
	// Line 1110, Address: 0x1f41c0, Func Offset: 0
	// Func End, Address: 0x1f41c8, Func Offset: 0x8
}

// Gimme_SimpShadowCache__10zNMECommonFv
// Start address: 0x1f41d0
xShadowSimpleCache* zNMECommon::Gimme_SimpShadowCache()
{
	// Line 1111, Address: 0x1f41d0, Func Offset: 0
	// Func End, Address: 0x1f41d8, Func Offset: 0x8
}

// Reset__10zNMECommonFv
// Start address: 0x22d070
void zNMECommon::Reset()
{
	// Line 480, Address: 0x22d070, Func Offset: 0
	// Line 481, Address: 0x22d07c, Func Offset: 0xc
	// Line 482, Address: 0x22d088, Func Offset: 0x18
	// Line 484, Address: 0x22d2fc, Func Offset: 0x28c
	// Func End, Address: 0x22d30c, Func Offset: 0x29c
}

// WannaPoolShadow__10zNMECommonFv
// Start address: 0x23d5c0
int32 zNMECommon::WannaPoolShadow()
{
	// Line 1116, Address: 0x23d5c0, Func Offset: 0
	// Func End, Address: 0x23d5c8, Func Offset: 0x8
}

// TypeHandleMail__10zNMECommonFP6NMEMsg
// Start address: 0x23ea70
int32 zNMECommon::TypeHandleMail()
{
	// Line 571, Address: 0x23ea70, Func Offset: 0
	// Func End, Address: 0x23ea78, Func Offset: 0x8
}

// Process__10zNMECommonFf
// Start address: 0x23f2f0
void zNMECommon::Process(float32 dt)
{
	// Line 519, Address: 0x23f2f0, Func Offset: 0
	// Line 522, Address: 0x23f328, Func Offset: 0x38
	// Func End, Address: 0x23f330, Func Offset: 0x40
}

// BUpdate__10zNMECommonFP5xVec3
// Start address: 0x2a4bf0
void zNMECommon::BUpdate(xVec3* pos)
{
	// Line 487, Address: 0x2a4bf0, Func Offset: 0
	// Func End, Address: 0x2a4bf8, Func Offset: 0x8
}

// Init__10zNMECommonFP9xEntAsset
// Start address: 0x2a63b0
void zNMECommon::Init(xEntAsset* entasset)
{
	// Line 1092, Address: 0x2a63b0, Func Offset: 0
	// Line 1093, Address: 0x2a63c4, Func Offset: 0x14
	// Line 1094, Address: 0x2a63cc, Func Offset: 0x1c
	// Line 1096, Address: 0x2a63d8, Func Offset: 0x28
	// Func End, Address: 0x2a63ec, Func Offset: 0x3c
}

