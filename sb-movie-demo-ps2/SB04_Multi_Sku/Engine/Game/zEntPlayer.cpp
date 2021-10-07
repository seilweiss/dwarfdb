



float32 zEntPlayerGetBowlBlastRadius();
int32 zEntPlayerIsInSlidingMode();
xEntBoulder* zEntPlayerGetBBowl();
void zEntPlayer_InitPlayerDefaultValues(xIniFile* ini);
void zEntPlayer_MinimalRender(zEnt* ent);
uint8 zEntPlayer_MinimalUpdate(xEnt* ent, xScene* sc, float32 dt, xVec3& drive_motion);
void dont_move(xEnt* ent, float32 dt);
void zEntPlayer_SceneExit();
void PlayerLedgeUpdate(xEnt* ent, xScene* sc, float32 dt);
void PlayerLedgeInit(zLedgeGrabParams* ledge, xModelInstance* model);
void PlayerBeginCollideNoBupdate(xEnt* ent);
void zEntPlayer_TikiKilledBy(zNMECommon* tiki, xBase* killedBy);
uint8 zEntPlayer_SoundsCurrentlyAllowed();
void zEntPlayer_SNDStop(_tagePlayerSnd player_snd);
void zEntPlayer_SNDPlayStream(uint32 lower, uint32 upper, _tagePlayerStreamSnd player_snd);
void zEntPlayer_SNDPlayUpgradeVO(int32 powerupIndex);
void zEntPlayer_SNDPlayStream(_tagePlayerStreamSnd player_snd);
void zEntPlayer_SNDPlay(_tagePlayerSnd player_snd, uint8 playRumble);
void zEntPlayer_SNDInit();
void TimeOutCB(zTimerBase* theTimer);
void PlayerRotMatchUpdateEnt(xEnt* ent, float32 dt, void* fdata);
void PlayerTeeterCheck(xEnt* ent, float32 dt);
void PlayerSwingUpdate(xEnt* ent, float32 mag, float32 angle, float32 dt);
void zEntPlayerEventCB(xBase* from, xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget);
void zEntPlayerCollide(xEnt* ent, xScene* sc, float32 dt);
void PlayerCollsSelectDepen(xEnt* p);
void CalcCombinedDepen(float32& dx, float32& dz, float32 ax, float32 az, float32 bx, float32 bz, float32 fudge);
void PlayerCollisTranslate(xCollis* c, float32 x, float32 y, float32 z);
xEnt* PlayerCollCheckOneVillain(xEnt* ent, void* data);
uint32 CollidePyramidBoxTop(xCollis* coll, xBox* box, float32 height, xSphere* sph);
xEnt* PlayerCollCheckOneEnt(xEnt* ent, void* data);
void zEntPlayerReset(xEnt* ent);
int32 zEntPlayer_ObjIDIsTrack(uint32 id);
void zEntPlayerDriveUpdate(xEnt* p, float32 dt);
void zEntPlayerSurfDamageUpdate(xEnt* p);
void PlayerBoundUpdate(xEnt* ent, xVec3* pos);
uint32 PlayerDepenQuery(xCollis* coll);
void zEntPlayerFloorUpdate(xEnt* p, float32 dt);
void zEntPlayerTSlideUpdate(xEnt* p, float32 dt);
void SlideTrackUpdate(xEnt* p);
RpCollisionTriangle* nearestTrackCB(RpCollisionTriangle* collTriangle, void* data);
void zEntPlayerVelUpdate(xEnt* ent, float32 dt);
void zEntPlayerEGenUpdate(xEnt* p, xScene* sc);
void zEntPlayerJumpUpdate(xEnt* ent, float32 dt);
void zEntPlayerJumpLand(xEnt* ent);
float32 CalcJumpImpulse_Smooth(float32 g, float32 j, float32 h, float32 Tgc, float32 Tgs);
void zEntPlayer_GivePatsSocksCurrentLevel(int32 quantity);
uint32 zEntPlayer_MoveInfo();
en_plyrpup zEntPlayer_PowerupLevel(en_plyratak forThisAttack);
int32 zEntPlayer_Damage(xBase* src, uint32 damage);
int32 zEntPlayer_DamageNPCKnockBack(xBase* src, uint32 damage, xVec3* npcPos, ePlayerNMEDamage type);
int32 zEntPlayer_Damage(xBase* src, uint32 damage, xVec3* knockback);
void zEntPlayer_setBoulderMode(uint32 mode);
void zEntPlayer_Move(xEnt* ent, float32 dt, xEntFrame* frame);
void zEntPlayer_RenderEffects(zEnt* ent);
void zEntPlayer_Render(zEnt* ent);
void zEntPlayerUpdateModelSB();
void zEntPlayer_ReticleRender();
void zEntPlayer_BubbleBowlLaneRender(zEnt* ent);
void zEntPlayerDirectionDecalRender(RwMatrixTag* Mat, RwRaster* rwras, float32 factor, float32 distance);
void zEntPlayer_ShadowModelDisable();
void zEntPlayer_ShadowModelEnable();
void zEntPlayer_PatrickLaunch(xEnt* patLauncher);
void zEntPlayer_CheckCritterContact(xEnt* player, float32 dt);
void zEntPlayerGauntletBlastRadius(float32 radius);
void zEntPlayer_Update(xEnt* ent, xScene* sc, float32 dt);
void zEntPlayer_Update_HitchSpinAndFade(float32 dt);
void zEntPlayerExplodeBowl();
void zEntPlayerExplodeHammerThrow(xVec3* pos);
void zEntPlayerBowlTargetUpdate(float32 dt);
void zEntPlayerBowlTargetRemoveAll();
void zEntPlayerBowlTarget_Remove(zEntPlayerBowlTarget* target);
zEntPlayerBowlTarget* zEntPlayerBowlTarget_Add(xVec3* target);
void StartThrow();
xEnt* zEntPlayer_FindGrabEnt(xEnt* ent, zScene* zsc, int32* failed);
int32 zEntPlayerKnockToSafety(xEnt* ent);
void zEntPlayer_PredictPos(xVec3* pos, float32 timeIntoFuture, float32 leadFactor, int32 useTurn);
void zEntPlayer_PredictionUpdate(xEnt* ent, float32 dt);
void zEntPlayer_BoulderVehicleUpdate(xEnt* ent, xScene* sc, float32 dt);
void zEntPlayer_BoulderVehicleMove(xEntFrame* frame);
void zEntPlayer_BoulderVehicleRender();
void BoulderVEventCB();
void getPadDefl(_tagPadAnalog* stick, xVec2* v);
void zEntPlayer_SpringboardFX(xEnt* ent, float32 dt);
void zEntPlayer_StreakFX(xEnt* ent);
void zEntPlayer_SpongeBallInit(xEnt* ent, xEntAsset* asset);
void zEntPlayer_SpongePatInit(xEnt* ent, xEntAsset* asset);
void zEntPlayer_CarInit(xEnt* ent, xEntAsset* asset);
void zEntPlayer_PatrickInit(xEnt* ent, xEntAsset* asset);
void zEntPlayer_SpongeBobInit(xEnt* ent, xEntAsset* asset, int32 costumeIndex);
void zEntPlayerCommonInit(xEnt* ent, xEntAsset* asset);
int32 load_talk_filter(uint8* filter, xModelAssetParam* params, uint32 params_size, int32 max_size);
int32 CheckObjectAgainstGauntlet(xEnt* cbent, void* cbdata);
int32 CheckNMEAgainstBubbleBowl(xEnt* cbent, void* cbdata);
void ReturnTheFavor(zNMEHazard* haz);
uint8 HazardCheck(zNMEHazard& haz, void* context);
int32 CheckObjectAgainstBound(xEnt* cbent, void* cbdata);
int32 AttackBoundCollide(xEnt* ent, zScene* zsc, xBound* meleeB, en_plyratak attack);
void zEntPlayerKillGauntlet();
uint32 StunRadiusCB();
uint32 StunStartFallCB();
uint32 LassoSwingReleaseCB();
uint32 LassoSwingGroundedCB();
uint32 LassoSwingCB(xAnimSingle* anim);
uint32 LassoSwingTossCB();
uint32 LassoSwingGroundedBeginCB(xAnimTransition* tran, xAnimSingle* anim, void* object);
uint32 LassoSwingBeginCB(void* object);
uint32 LassoSwingReleaseCheck();
uint32 LassoSwingBeginCheck();
uint32 LassoSwingGroundedBeginCheck();
uint32 PatrickHammerThrowCB(void* object);
uint32 PatrickHammerSpinCB();
uint32 PatrickHammerCB();
uint32 PatrickGrabThrowStartCB(void* object);
xEnt* GetPatrickTarget(xEnt* ent);
uint32 PatCartwheelLoopCB();
uint32 PatNoCartwheelCB();
uint32 PatCartwheelNoCartwheelCheck();
uint32 PatCartwheelCB();
uint32 PatCartwheelCheck();
uint32 PatrickGrabCB();
uint32 PatrickMeleeCB(xAnimSingle* anim);
uint32 PatrickStunCheckHeadbutt();
uint32 PatrickStunCheckButtslam();
uint32 PatrickAttackCheckMelee2();
uint32 PatrickAttackCheckMelee1();
uint32 PatrickHammerThrowCheck();
uint32 PatrickHammerCheck();
uint32 PatrickGrabThrowStart();
uint32 PatrickGrabKill();
uint32 PatrickGrabFailed();
uint32 PatrickGrabCheck();
uint32 LedgeFinishCB();
uint32 LedgeGrabCB(void* object);
uint32 LedgeGrabCheck();
uint32 TrackPrefallJumpCheck();
uint32 TrackFallCB();
uint32 TrackFallCheck();
uint32 NoslideTrackCheck();
uint32 NoslideTrackCB();
uint32 SlideTrackCB();
uint32 SlideTrackCheck();
uint32 BoulderRollDoneCB();
uint32 BoulderRollCB();
uint32 BoulderRollWindupCB();
uint32 BoulderRollCheck();
uint32 BoulderRollIdleCheck();
uint32 BoulderRollMoveCheck();
uint32 FallCheck();
uint32 TongueDblSpinCB(xAnimSingle* anim);
uint32 TongueDblJumpCB(xAnimTransition* tran, xAnimSingle* anim, void* object);
uint32 DblJumpCB();
uint32 DblJumpCheck();
uint32 BounceCB();
uint32 BounceCheck();
uint32 JumpApexCheck();
uint32 JumpCB();
uint32 JumpCheck();
uint32 WallJumpFallCB();
uint32 WallJumpStickCB();
uint32 WallJumpFallCheck();
uint32 WallJumpLandFlightCallback();
uint32 WallJumpLandFlightCheck();
uint32 WallJumpFlightLandCallback();
uint32 WallJumpFlightLandCheck();
uint32 WallJumpCallback();
uint32 WallJumpLaunchCallback();
uint32 WallJumpLaunchCheck();
void DoWallJumpCheck();
uint32 SpatulaGrabStopCB();
uint32 SpatulaGrabCB(void* object);
uint32 SpatulaGrabCheck();
uint32 DefeatedCB();
uint32 Defeated03Check(xAnimTransition* tran);
uint32 Defeated02Check(xAnimTransition* tran);
uint32 Defeated01Check(xAnimTransition* tran);
uint32 DefeatedCheck();
uint32 Hit05CB();
uint32 Hit05Check();
uint32 Hit04CB();
uint32 Hit04Check();
uint32 Hit03CB();
uint32 Hit03Check();
uint32 Hit02CB();
uint32 Hit02Check();
uint32 Hit01CB();
uint32 Hit01Check();
uint32 HitCB();
uint32 HitCheck();
uint32 GooDeathCB();
uint32 GooCheck();
uint32 BbowlRecoverRunSlipCheck(xAnimSingle* anim);
uint32 BbowlRecoverRunOutOfWorldCheck(xAnimSingle* anim);
uint32 BbowlRecoverRunCheck(xAnimSingle* anim);
uint32 BbowlRecoverWalkCheck(xAnimSingle* anim);
uint32 BbowlTossEndCB();
uint32 BbowlWindupEndCheck(xAnimSingle* anim);
uint32 BbowlCB();
uint32 BbowlCheck();
uint32 BBounceToJumpCB();
uint32 BBounceToJumpCheck();
uint32 BBounceStrikeCB();
uint32 BBounceStrikeCheck();
uint32 BBounceAttackCB();
uint32 BubbleBounceCB();
uint32 BubbleBounceCheck();
uint32 BbashStart01EffectMissCB();
uint32 BBashStrikeCB();
uint32 BBashStrikeCheck();
uint32 BubbleBashCB();
uint32 BubbleBashCheckGauntlet();
uint32 BubbleBashCheckPunch();
uint32 BubbleSpinCB(xAnimSingle* anim);
uint32 BubbleSpinCheck2();
uint32 BubbleSpinCheck1();
uint32 LandSlipRunCallback();
uint32 LandCallback();
uint32 LandNoTrackSlipIdleCheck();
uint32 LandNoTrackSlipRunCheck();
uint32 LandNoTrackFastCheck();
uint32 LandSlipRunCheck();
uint32 LandSlipIdleCheck();
uint32 LandNoTrackWalkCheck();
uint32 LandRunCheck();
uint32 LandHighCheck();
uint32 LandNoTrackCheck();
uint32 LandTrackCheck();
uint32 LandCheck();
uint32 SlideDecelerateCB();
uint32 SlideDecelerateCheck(xAnimSingle* anim);
uint32 SlideAccelerateCB();
uint32 SlideAccelerateCheck(xAnimSingle* anim);
uint32 SlideCruisingCB();
uint32 SlideCruisingCheck(xAnimSingle* anim);
uint32 InactiveCB();
uint32 InactiveCheck(xAnimTransition* tran);
uint32 IdleCB();
uint32 NoSlipCB();
uint32 SlipRunCB();
uint32 AnyStopCheck();
uint32 AnyMoveCheck();
uint32 IdleSlipCheck();
uint32 IdleStoicCheck();
uint32 IdleCheck();
uint32 WalkStoicCheck();
uint32 WalkCheck();
uint32 RunOutOfWorldCheck();
uint32 RunSlipCheck();
uint32 RunStoicCheck();
uint32 RunAnyCheck();
void zEntPlayerHealthResetAll();
void InvReset();
void PlayerAbsControl(xEnt* ent, float32 x, float32 z, float32 dt);
void TurnToFace(xEnt* ent, xVec3* target, float32 speedLimit, float32 dt);
void DampenControls(float32* angle, float32* mag, float32 x, float32 y);
void SetPlayerKillsVillainTimer();
void VillainNoticesPlayer(zNMECommon* npc);
void zEntPlayerControlOff(zControlOwner owner);
void zEntPlayerControlOn(zControlOwner owner);
void zEntPlayerKillCarry();

// zEntPlayerGetBowlBlastRadius__Fv
// Start address: 0x31d8d0
float32 zEntPlayerGetBowlBlastRadius()
{
	// Line 22571, Address: 0x31d8d0, Func Offset: 0
	// Func End, Address: 0x31d8d8, Func Offset: 0x8
}

// zEntPlayerIsInSlidingMode__Fv
// Start address: 0x31d8e0
int32 zEntPlayerIsInSlidingMode()
{
	// Line 22535, Address: 0x31d8e0, Func Offset: 0
	// Line 22537, Address: 0x31d900, Func Offset: 0x20
	// Func End, Address: 0x31d908, Func Offset: 0x28
}

// zEntPlayerGetBBowl__Fv
// Start address: 0x31d910
xEntBoulder* zEntPlayerGetBBowl()
{
	// Line 22489, Address: 0x31d910, Func Offset: 0
	// Line 22490, Address: 0x31d934, Func Offset: 0x24
	// Func End, Address: 0x31d93c, Func Offset: 0x2c
}

// zEntPlayer_InitPlayerDefaultValues__FP8xIniFile
// Start address: 0x31d940
void zEntPlayer_InitPlayerDefaultValues(xIniFile* ini)
{
	float32 fbuf[4];
	float32 fbuf[4];
	float32 fbuf[4];
	float32 fbuf[4];
	float32 fbuf[4];
	float32 fbuf[3];
	float32 fbuf[3];
	float32 fbuf[3];
	float32 fbuf[6];
	float32 fbuf[4];
	float32 fbuf[4];
	float32 fbuf[4];
	float32 fbuf[4];
	float32 fbuf[4];
	float32 fbuf[3];
	float32 fbuf[3];
	float32 fbuf[3];
	float32 fbuf[6];
	float32 fbuf[4];
	float32 fbuf[4];
	float32 fbuf[4];
	float32 fbuf[4];
	float32 fbuf[4];
	float32 fbuf[3];
	float32 fbuf[3];
	float32 fbuf[3];
	float32 fbuf[6];
	// Line 22328, Address: 0x31d940, Func Offset: 0
	// Line 22332, Address: 0x31d944, Func Offset: 0x4
	// Line 22328, Address: 0x31d948, Func Offset: 0x8
	// Line 22332, Address: 0x31d94c, Func Offset: 0xc
	// Line 22328, Address: 0x31d950, Func Offset: 0x10
	// Line 22332, Address: 0x31d954, Func Offset: 0x14
	// Line 22328, Address: 0x31d958, Func Offset: 0x18
	// Line 22332, Address: 0x31d960, Func Offset: 0x20
	// Line 22334, Address: 0x31d994, Func Offset: 0x54
	// Line 22335, Address: 0x31d9d4, Func Offset: 0x94
	// Line 22336, Address: 0x31da14, Func Offset: 0xd4
	// Line 22338, Address: 0x31da54, Func Offset: 0x114
	// Line 22339, Address: 0x31da6c, Func Offset: 0x12c
	// Line 22338, Address: 0x31da70, Func Offset: 0x130
	// Line 22339, Address: 0x31da74, Func Offset: 0x134
	// Line 22340, Address: 0x31da8c, Func Offset: 0x14c
	// Line 22339, Address: 0x31da90, Func Offset: 0x150
	// Line 22340, Address: 0x31da94, Func Offset: 0x154
	// Line 22341, Address: 0x31daac, Func Offset: 0x16c
	// Line 22340, Address: 0x31dab0, Func Offset: 0x170
	// Line 22341, Address: 0x31dab4, Func Offset: 0x174
	// Line 22343, Address: 0x31dacc, Func Offset: 0x18c
	// Line 22341, Address: 0x31dad0, Func Offset: 0x190
	// Line 22343, Address: 0x31dad4, Func Offset: 0x194
	// Line 22344, Address: 0x31daec, Func Offset: 0x1ac
	// Line 22346, Address: 0x31daf8, Func Offset: 0x1b8
	// Line 22344, Address: 0x31dafc, Func Offset: 0x1bc
	// Line 22346, Address: 0x31db08, Func Offset: 0x1c8
	// Line 22347, Address: 0x31db10, Func Offset: 0x1d0
	// Line 22348, Address: 0x31db18, Func Offset: 0x1d8
	// Line 22350, Address: 0x31db20, Func Offset: 0x1e0
	// Line 22351, Address: 0x31db60, Func Offset: 0x220
	// Line 22352, Address: 0x31dba0, Func Offset: 0x260
	// Line 22353, Address: 0x31dbe0, Func Offset: 0x2a0
	// Line 22354, Address: 0x31dc20, Func Offset: 0x2e0
	// Line 22357, Address: 0x31dc60, Func Offset: 0x320
	// Line 22359, Address: 0x31dc74, Func Offset: 0x334
	// Line 22357, Address: 0x31dc78, Func Offset: 0x338
	// Line 22359, Address: 0x31dc7c, Func Offset: 0x33c
	// Line 22360, Address: 0x31dc94, Func Offset: 0x354
	// Line 22359, Address: 0x31dc98, Func Offset: 0x358
	// Line 22360, Address: 0x31dc9c, Func Offset: 0x35c
	// Line 22363, Address: 0x31dcb8, Func Offset: 0x378
	// Line 22360, Address: 0x31dcbc, Func Offset: 0x37c
	// Line 22363, Address: 0x31dcc0, Func Offset: 0x380
	// Line 22364, Address: 0x31dccc, Func Offset: 0x38c
	// Line 22365, Address: 0x31dcf0, Func Offset: 0x3b0
	// Line 22364, Address: 0x31dcf4, Func Offset: 0x3b4
	// Line 22365, Address: 0x31dcf8, Func Offset: 0x3b8
	// Line 22364, Address: 0x31dcfc, Func Offset: 0x3bc
	// Line 22365, Address: 0x31dd00, Func Offset: 0x3c0
	// Line 22366, Address: 0x31dd24, Func Offset: 0x3e4
	// Line 22365, Address: 0x31dd28, Func Offset: 0x3e8
	// Line 22366, Address: 0x31dd2c, Func Offset: 0x3ec
	// Line 22365, Address: 0x31dd30, Func Offset: 0x3f0
	// Line 22366, Address: 0x31dd34, Func Offset: 0x3f4
	// Line 22367, Address: 0x31dd58, Func Offset: 0x418
	// Line 22366, Address: 0x31dd5c, Func Offset: 0x41c
	// Line 22367, Address: 0x31dd60, Func Offset: 0x420
	// Line 22366, Address: 0x31dd64, Func Offset: 0x424
	// Line 22367, Address: 0x31dd68, Func Offset: 0x428
	// Line 22368, Address: 0x31dd8c, Func Offset: 0x44c
	// Line 22367, Address: 0x31dd90, Func Offset: 0x450
	// Line 22368, Address: 0x31dd94, Func Offset: 0x454
	// Line 22367, Address: 0x31dd98, Func Offset: 0x458
	// Line 22368, Address: 0x31dd9c, Func Offset: 0x45c
	// Line 22394, Address: 0x31ddc4, Func Offset: 0x484
	// Line 22368, Address: 0x31ddd0, Func Offset: 0x490
	// Line 22394, Address: 0x31ddd4, Func Offset: 0x494
	// Line 22396, Address: 0x31de08, Func Offset: 0x4c8
	// Line 22397, Address: 0x31de48, Func Offset: 0x508
	// Line 22398, Address: 0x31de88, Func Offset: 0x548
	// Line 22400, Address: 0x31dec8, Func Offset: 0x588
	// Line 22401, Address: 0x31dee0, Func Offset: 0x5a0
	// Line 22400, Address: 0x31dee4, Func Offset: 0x5a4
	// Line 22401, Address: 0x31dee8, Func Offset: 0x5a8
	// Line 22402, Address: 0x31df00, Func Offset: 0x5c0
	// Line 22401, Address: 0x31df04, Func Offset: 0x5c4
	// Line 22402, Address: 0x31df08, Func Offset: 0x5c8
	// Line 22403, Address: 0x31df20, Func Offset: 0x5e0
	// Line 22402, Address: 0x31df24, Func Offset: 0x5e4
	// Line 22403, Address: 0x31df28, Func Offset: 0x5e8
	// Line 22405, Address: 0x31df40, Func Offset: 0x600
	// Line 22403, Address: 0x31df44, Func Offset: 0x604
	// Line 22405, Address: 0x31df48, Func Offset: 0x608
	// Line 22406, Address: 0x31df60, Func Offset: 0x620
	// Line 22410, Address: 0x31df64, Func Offset: 0x624
	// Line 22406, Address: 0x31df68, Func Offset: 0x628
	// Line 22410, Address: 0x31df6c, Func Offset: 0x62c
	// Line 22406, Address: 0x31df70, Func Offset: 0x630
	// Line 22410, Address: 0x31df78, Func Offset: 0x638
	// Line 22406, Address: 0x31df80, Func Offset: 0x640
	// Line 22410, Address: 0x31df84, Func Offset: 0x644
	// Line 22411, Address: 0x31dfb8, Func Offset: 0x678
	// Line 22412, Address: 0x31dff8, Func Offset: 0x6b8
	// Line 22413, Address: 0x31e038, Func Offset: 0x6f8
	// Line 22414, Address: 0x31e078, Func Offset: 0x738
	// Line 22418, Address: 0x31e0b8, Func Offset: 0x778
	// Line 22419, Address: 0x31e0c8, Func Offset: 0x788
	// Line 22420, Address: 0x31e0ec, Func Offset: 0x7ac
	// Line 22419, Address: 0x31e0f0, Func Offset: 0x7b0
	// Line 22420, Address: 0x31e0f4, Func Offset: 0x7b4
	// Line 22419, Address: 0x31e0f8, Func Offset: 0x7b8
	// Line 22420, Address: 0x31e0fc, Func Offset: 0x7bc
	// Line 22421, Address: 0x31e120, Func Offset: 0x7e0
	// Line 22420, Address: 0x31e124, Func Offset: 0x7e4
	// Line 22421, Address: 0x31e128, Func Offset: 0x7e8
	// Line 22420, Address: 0x31e12c, Func Offset: 0x7ec
	// Line 22421, Address: 0x31e130, Func Offset: 0x7f0
	// Line 22422, Address: 0x31e154, Func Offset: 0x814
	// Line 22421, Address: 0x31e158, Func Offset: 0x818
	// Line 22422, Address: 0x31e15c, Func Offset: 0x81c
	// Line 22421, Address: 0x31e160, Func Offset: 0x820
	// Line 22422, Address: 0x31e164, Func Offset: 0x824
	// Line 22423, Address: 0x31e188, Func Offset: 0x848
	// Line 22422, Address: 0x31e18c, Func Offset: 0x84c
	// Line 22423, Address: 0x31e190, Func Offset: 0x850
	// Line 22422, Address: 0x31e194, Func Offset: 0x854
	// Line 22423, Address: 0x31e198, Func Offset: 0x858
	// Line 22426, Address: 0x31e1c0, Func Offset: 0x880
	// Line 22423, Address: 0x31e1cc, Func Offset: 0x88c
	// Line 22426, Address: 0x31e1d0, Func Offset: 0x890
	// Line 22431, Address: 0x31e1dc, Func Offset: 0x89c
	// Line 22426, Address: 0x31e1e8, Func Offset: 0x8a8
	// Line 22431, Address: 0x31e1ec, Func Offset: 0x8ac
	// Line 22433, Address: 0x31e220, Func Offset: 0x8e0
	// Line 22434, Address: 0x31e260, Func Offset: 0x920
	// Line 22435, Address: 0x31e2a0, Func Offset: 0x960
	// Line 22437, Address: 0x31e2e0, Func Offset: 0x9a0
	// Line 22438, Address: 0x31e2f8, Func Offset: 0x9b8
	// Line 22437, Address: 0x31e2fc, Func Offset: 0x9bc
	// Line 22438, Address: 0x31e300, Func Offset: 0x9c0
	// Line 22439, Address: 0x31e318, Func Offset: 0x9d8
	// Line 22438, Address: 0x31e31c, Func Offset: 0x9dc
	// Line 22439, Address: 0x31e320, Func Offset: 0x9e0
	// Line 22440, Address: 0x31e338, Func Offset: 0x9f8
	// Line 22439, Address: 0x31e33c, Func Offset: 0x9fc
	// Line 22440, Address: 0x31e340, Func Offset: 0xa00
	// Line 22442, Address: 0x31e358, Func Offset: 0xa18
	// Line 22440, Address: 0x31e35c, Func Offset: 0xa1c
	// Line 22442, Address: 0x31e360, Func Offset: 0xa20
	// Line 22443, Address: 0x31e378, Func Offset: 0xa38
	// Line 22447, Address: 0x31e37c, Func Offset: 0xa3c
	// Line 22443, Address: 0x31e380, Func Offset: 0xa40
	// Line 22447, Address: 0x31e384, Func Offset: 0xa44
	// Line 22443, Address: 0x31e388, Func Offset: 0xa48
	// Line 22447, Address: 0x31e390, Func Offset: 0xa50
	// Line 22443, Address: 0x31e398, Func Offset: 0xa58
	// Line 22447, Address: 0x31e39c, Func Offset: 0xa5c
	// Line 22448, Address: 0x31e3d0, Func Offset: 0xa90
	// Line 22449, Address: 0x31e410, Func Offset: 0xad0
	// Line 22450, Address: 0x31e450, Func Offset: 0xb10
	// Line 22451, Address: 0x31e490, Func Offset: 0xb50
	// Line 22455, Address: 0x31e4d0, Func Offset: 0xb90
	// Line 22456, Address: 0x31e4e0, Func Offset: 0xba0
	// Line 22457, Address: 0x31e504, Func Offset: 0xbc4
	// Line 22456, Address: 0x31e508, Func Offset: 0xbc8
	// Line 22457, Address: 0x31e50c, Func Offset: 0xbcc
	// Line 22456, Address: 0x31e510, Func Offset: 0xbd0
	// Line 22457, Address: 0x31e514, Func Offset: 0xbd4
	// Line 22458, Address: 0x31e538, Func Offset: 0xbf8
	// Line 22457, Address: 0x31e53c, Func Offset: 0xbfc
	// Line 22458, Address: 0x31e540, Func Offset: 0xc00
	// Line 22457, Address: 0x31e544, Func Offset: 0xc04
	// Line 22458, Address: 0x31e548, Func Offset: 0xc08
	// Line 22459, Address: 0x31e56c, Func Offset: 0xc2c
	// Line 22458, Address: 0x31e570, Func Offset: 0xc30
	// Line 22459, Address: 0x31e574, Func Offset: 0xc34
	// Line 22458, Address: 0x31e578, Func Offset: 0xc38
	// Line 22459, Address: 0x31e57c, Func Offset: 0xc3c
	// Line 22460, Address: 0x31e5a0, Func Offset: 0xc60
	// Line 22459, Address: 0x31e5a4, Func Offset: 0xc64
	// Line 22460, Address: 0x31e5a8, Func Offset: 0xc68
	// Line 22459, Address: 0x31e5ac, Func Offset: 0xc6c
	// Line 22460, Address: 0x31e5b0, Func Offset: 0xc70
	// Line 22463, Address: 0x31e5d8, Func Offset: 0xc98
	// Line 22460, Address: 0x31e5e4, Func Offset: 0xca4
	// Line 22463, Address: 0x31e5e8, Func Offset: 0xca8
	// Line 22465, Address: 0x31e5f8, Func Offset: 0xcb8
	// Func End, Address: 0x31e60c, Func Offset: 0xccc
}

// zEntPlayer_MinimalRender__FP4zEnt
// Start address: 0x31e610
void zEntPlayer_MinimalRender(zEnt* ent)
{
	float32 reticle_order[2];
	uint32 i;
	xVec3& loc;
	xVec3& reticle_loc;
	xVec3 cam_offset;
	xVec3 reticle_offset;
	uint32 i;
	// Line 22270, Address: 0x31e610, Func Offset: 0
	// Line 22273, Address: 0x31e620, Func Offset: 0x10
	// Line 22270, Address: 0x31e624, Func Offset: 0x14
	// Line 22273, Address: 0x31e628, Func Offset: 0x18
	// Line 22270, Address: 0x31e62c, Func Offset: 0x1c
	// Line 22273, Address: 0x31e630, Func Offset: 0x20
	// Line 22270, Address: 0x31e634, Func Offset: 0x24
	// Line 22273, Address: 0x31e638, Func Offset: 0x28
	// Line 22270, Address: 0x31e63c, Func Offset: 0x2c
	// Line 22273, Address: 0x31e648, Func Offset: 0x38
	// Line 22270, Address: 0x31e64c, Func Offset: 0x3c
	// Line 22273, Address: 0x31e650, Func Offset: 0x40
	// Line 22270, Address: 0x31e654, Func Offset: 0x44
	// Line 22273, Address: 0x31e658, Func Offset: 0x48
	// Line 22274, Address: 0x31e664, Func Offset: 0x54
	// Line 22278, Address: 0x31e66c, Func Offset: 0x5c
	// Line 22279, Address: 0x31e670, Func Offset: 0x60
	// Line 22276, Address: 0x31e678, Func Offset: 0x68
	// Line 22280, Address: 0x31e67c, Func Offset: 0x6c
	// Line 22279, Address: 0x31e680, Func Offset: 0x70
	// Line 22276, Address: 0x31e688, Func Offset: 0x78
	// Line 22279, Address: 0x31e68c, Func Offset: 0x7c
	// Line 22278, Address: 0x31e6a8, Func Offset: 0x98
	// Line 22279, Address: 0x31e6ac, Func Offset: 0x9c
	// Line 22280, Address: 0x31e71c, Func Offset: 0x10c
	// Line 22279, Address: 0x31e720, Func Offset: 0x110
	// Line 22280, Address: 0x31e724, Func Offset: 0x114
	// Line 22279, Address: 0x31e728, Func Offset: 0x118
	// Line 22280, Address: 0x31e744, Func Offset: 0x134
	// Line 22279, Address: 0x31e748, Func Offset: 0x138
	// Line 22280, Address: 0x31e750, Func Offset: 0x140
	// Line 22279, Address: 0x31e754, Func Offset: 0x144
	// Line 22280, Address: 0x31e760, Func Offset: 0x150
	// Line 22279, Address: 0x31e764, Func Offset: 0x154
	// Line 22280, Address: 0x31e768, Func Offset: 0x158
	// Line 22279, Address: 0x31e76c, Func Offset: 0x15c
	// Line 22280, Address: 0x31e770, Func Offset: 0x160
	// Line 22279, Address: 0x31e774, Func Offset: 0x164
	// Line 22280, Address: 0x31e77c, Func Offset: 0x16c
	// Line 22281, Address: 0x31e794, Func Offset: 0x184
	// Line 22283, Address: 0x31e7ac, Func Offset: 0x19c
	// Line 22281, Address: 0x31e7b8, Func Offset: 0x1a8
	// Line 22283, Address: 0x31e7bc, Func Offset: 0x1ac
	// Line 22286, Address: 0x31e7c4, Func Offset: 0x1b4
	// Line 22288, Address: 0x31e7d0, Func Offset: 0x1c0
	// Line 22289, Address: 0x31e7d4, Func Offset: 0x1c4
	// Line 22290, Address: 0x31e7ec, Func Offset: 0x1dc
	// Line 22291, Address: 0x31e800, Func Offset: 0x1f0
	// Func End, Address: 0x31e848, Func Offset: 0x238
}

// zEntPlayer_MinimalUpdate__FP4xEntP6xScenefR5xVec3
// Start address: 0x31e850
uint8 zEntPlayer_MinimalUpdate(xEnt* ent, xScene* sc, float32 dt, xVec3& drive_motion)
{
	uint8 stop_the_madness;
	xBound bowlBound;
	xSphere* bowlSph;
	xBound gauntletBound;
	xSphere* gauntletSph;
	xVec3 suboldpos;
	void(*old_move)(xEnt*, xScene*, float32, xEntFrame*);
	xVec3 req_motion;
	xVec3 predrive_loc;
	uint8 isDriverTiki;
	xEntFrame* dummyFrame;
	uint8 isOldDriverTiki;
	xEntFrame* dummyFrameOldDrv;
	zNMETiki* tiki;
	xVec3& floor_norm;
	float32 ndotm;
	xCollis* fcoll;
	// Line 22050, Address: 0x31e850, Func Offset: 0
	// Line 22062, Address: 0x31e854, Func Offset: 0x4
	// Line 22050, Address: 0x31e858, Func Offset: 0x8
	// Line 22059, Address: 0x31e864, Func Offset: 0x14
	// Line 22050, Address: 0x31e868, Func Offset: 0x18
	// Line 22062, Address: 0x31e890, Func Offset: 0x40
	// Line 22063, Address: 0x31e938, Func Offset: 0xe8
	// Line 22066, Address: 0x31e940, Func Offset: 0xf0
	// Line 22070, Address: 0x31e988, Func Offset: 0x138
	// Line 22078, Address: 0x31e994, Func Offset: 0x144
	// Line 22072, Address: 0x31e998, Func Offset: 0x148
	// Line 22078, Address: 0x31e99c, Func Offset: 0x14c
	// Line 22073, Address: 0x31e9a0, Func Offset: 0x150
	// Line 22078, Address: 0x31e9a4, Func Offset: 0x154
	// Line 22070, Address: 0x31e9a8, Func Offset: 0x158
	// Line 22073, Address: 0x31e9ac, Func Offset: 0x15c
	// Line 22070, Address: 0x31e9b0, Func Offset: 0x160
	// Line 22074, Address: 0x31e9b4, Func Offset: 0x164
	// Line 22076, Address: 0x31e9b8, Func Offset: 0x168
	// Line 22074, Address: 0x31e9bc, Func Offset: 0x16c
	// Line 22078, Address: 0x31e9c0, Func Offset: 0x170
	// Line 22074, Address: 0x31e9c4, Func Offset: 0x174
	// Line 22078, Address: 0x31e9dc, Func Offset: 0x18c
	// Line 22079, Address: 0x31e9e4, Func Offset: 0x194
	// Line 22081, Address: 0x31e9f8, Func Offset: 0x1a8
	// Line 22083, Address: 0x31ea14, Func Offset: 0x1c4
	// Line 22091, Address: 0x31ea18, Func Offset: 0x1c8
	// Line 22094, Address: 0x31ea24, Func Offset: 0x1d4
	// Line 22098, Address: 0x31ea3c, Func Offset: 0x1ec
	// Line 22102, Address: 0x31ea40, Func Offset: 0x1f0
	// Line 22098, Address: 0x31ea44, Func Offset: 0x1f4
	// Line 22102, Address: 0x31ea48, Func Offset: 0x1f8
	// Line 22099, Address: 0x31ea4c, Func Offset: 0x1fc
	// Line 22097, Address: 0x31ea50, Func Offset: 0x200
	// Line 22102, Address: 0x31ea54, Func Offset: 0x204
	// Line 22099, Address: 0x31ea5c, Func Offset: 0x20c
	// Line 22102, Address: 0x31ea7c, Func Offset: 0x22c
	// Line 22103, Address: 0x31ea84, Func Offset: 0x234
	// Line 22111, Address: 0x31ea98, Func Offset: 0x248
	// Line 22116, Address: 0x31ebbc, Func Offset: 0x36c
	// Line 22118, Address: 0x31ec94, Func Offset: 0x444
	// Line 22120, Address: 0x31eca4, Func Offset: 0x454
	// Line 22122, Address: 0x31ecac, Func Offset: 0x45c
	// Line 22124, Address: 0x31ecb0, Func Offset: 0x460
	// Line 22122, Address: 0x31ecbc, Func Offset: 0x46c
	// Line 22124, Address: 0x31ecd0, Func Offset: 0x480
	// Line 22126, Address: 0x31ecd8, Func Offset: 0x488
	// Line 22127, Address: 0x31ecdc, Func Offset: 0x48c
	// Line 22128, Address: 0x31ece4, Func Offset: 0x494
	// Line 22129, Address: 0x31ecf8, Func Offset: 0x4a8
	// Line 22138, Address: 0x31ecfc, Func Offset: 0x4ac
	// Line 22129, Address: 0x31ed00, Func Offset: 0x4b0
	// Line 22137, Address: 0x31ed04, Func Offset: 0x4b4
	// Line 22130, Address: 0x31ed08, Func Offset: 0x4b8
	// Line 22134, Address: 0x31ed14, Func Offset: 0x4c4
	// Line 22130, Address: 0x31ed20, Func Offset: 0x4d0
	// Line 22134, Address: 0x31ed2c, Func Offset: 0x4dc
	// Line 22138, Address: 0x31ed34, Func Offset: 0x4e4
	// Line 22139, Address: 0x31ed48, Func Offset: 0x4f8
	// Line 22140, Address: 0x31ed50, Func Offset: 0x500
	// Line 22143, Address: 0x31ed78, Func Offset: 0x528
	// Line 22142, Address: 0x31ed84, Func Offset: 0x534
	// Line 22143, Address: 0x31ed88, Func Offset: 0x538
	// Line 22144, Address: 0x31ed8c, Func Offset: 0x53c
	// Line 22148, Address: 0x31edb4, Func Offset: 0x564
	// Line 22149, Address: 0x31edcc, Func Offset: 0x57c
	// Line 22150, Address: 0x31edd4, Func Offset: 0x584
	// Line 22154, Address: 0x31edfc, Func Offset: 0x5ac
	// Line 22152, Address: 0x31ee00, Func Offset: 0x5b0
	// Line 22154, Address: 0x31ee04, Func Offset: 0x5b4
	// Line 22155, Address: 0x31ee08, Func Offset: 0x5b8
	// Line 22156, Address: 0x31ee34, Func Offset: 0x5e4
	// Line 22160, Address: 0x31ee64, Func Offset: 0x614
	// Line 22161, Address: 0x31ee7c, Func Offset: 0x62c
	// Line 22164, Address: 0x31eecc, Func Offset: 0x67c
	// Line 22165, Address: 0x31eed4, Func Offset: 0x684
	// Line 22167, Address: 0x31eee0, Func Offset: 0x690
	// Line 22169, Address: 0x31eee8, Func Offset: 0x698
	// Line 22171, Address: 0x31eef4, Func Offset: 0x6a4
	// Line 22172, Address: 0x31eefc, Func Offset: 0x6ac
	// Line 22175, Address: 0x31ef08, Func Offset: 0x6b8
	// Line 22178, Address: 0x31ef20, Func Offset: 0x6d0
	// Line 22175, Address: 0x31ef24, Func Offset: 0x6d4
	// Line 22178, Address: 0x31ef28, Func Offset: 0x6d8
	// Line 22183, Address: 0x31ef4c, Func Offset: 0x6fc
	// Line 22187, Address: 0x31ef54, Func Offset: 0x704
	// Line 22183, Address: 0x31ef58, Func Offset: 0x708
	// Line 22187, Address: 0x31ef5c, Func Offset: 0x70c
	// Line 22183, Address: 0x31ef60, Func Offset: 0x710
	// Line 22188, Address: 0x31ef6c, Func Offset: 0x71c
	// Line 22189, Address: 0x31ef80, Func Offset: 0x730
	// Line 22193, Address: 0x31efbc, Func Offset: 0x76c
	// Line 22191, Address: 0x31efc8, Func Offset: 0x778
	// Line 22194, Address: 0x31efd4, Func Offset: 0x784
	// Line 22195, Address: 0x31efe0, Func Offset: 0x790
	// Line 22196, Address: 0x31efe8, Func Offset: 0x798
	// Line 22197, Address: 0x31effc, Func Offset: 0x7ac
	// Line 22199, Address: 0x31f00c, Func Offset: 0x7bc
	// Line 22202, Address: 0x31f010, Func Offset: 0x7c0
	// Line 22208, Address: 0x31f020, Func Offset: 0x7d0
	// Line 22213, Address: 0x31f02c, Func Offset: 0x7dc
	// Line 22215, Address: 0x31f034, Func Offset: 0x7e4
	// Line 22217, Address: 0x31f03c, Func Offset: 0x7ec
	// Line 22219, Address: 0x31f044, Func Offset: 0x7f4
	// Line 22221, Address: 0x31f070, Func Offset: 0x820
	// Line 22223, Address: 0x31f078, Func Offset: 0x828
	// Line 22225, Address: 0x31f0a4, Func Offset: 0x854
	// Line 22233, Address: 0x31f0a8, Func Offset: 0x858
	// Line 22236, Address: 0x31f0b8, Func Offset: 0x868
	// Line 22240, Address: 0x31f0c8, Func Offset: 0x878
	// Line 22244, Address: 0x31f0d8, Func Offset: 0x888
	// Line 22247, Address: 0x31f0e8, Func Offset: 0x898
	// Line 22250, Address: 0x31f0f4, Func Offset: 0x8a4
	// Line 22252, Address: 0x31f104, Func Offset: 0x8b4
	// Line 22258, Address: 0x31f114, Func Offset: 0x8c4
	// Line 22259, Address: 0x31f130, Func Offset: 0x8e0
	// Line 22260, Address: 0x31f138, Func Offset: 0x8e8
	// Line 22261, Address: 0x31f144, Func Offset: 0x8f4
	// Line 22265, Address: 0x31f14c, Func Offset: 0x8fc
	// Line 22266, Address: 0x31f150, Func Offset: 0x900
	// Func End, Address: 0x31f180, Func Offset: 0x930
}

// dont_move__FP4xEntP6xScenefP9xEntFrame
// Start address: 0x31f180
void dont_move(xEnt* ent, float32 dt)
{
	// Line 22046, Address: 0x31f184, Func Offset: 0x4
	// Func End, Address: 0x31f194, Func Offset: 0x14
}

// zEntPlayer_SceneExit__Fv
// Start address: 0x31f1a0
void zEntPlayer_SceneExit()
{
	int32 i;
	// Line 22005, Address: 0x31f1a0, Func Offset: 0
	// Line 22012, Address: 0x31f1a4, Func Offset: 0x4
	// Line 22005, Address: 0x31f1a8, Func Offset: 0x8
	// Line 22007, Address: 0x31f1ac, Func Offset: 0xc
	// Line 22005, Address: 0x31f1b0, Func Offset: 0x10
	// Line 22012, Address: 0x31f1b4, Func Offset: 0x14
	// Line 22005, Address: 0x31f1b8, Func Offset: 0x18
	// Line 22012, Address: 0x31f1bc, Func Offset: 0x1c
	// Line 22007, Address: 0x31f1c0, Func Offset: 0x20
	// Line 22012, Address: 0x31f1c4, Func Offset: 0x24
	// Line 22008, Address: 0x31f1c8, Func Offset: 0x28
	// Line 22009, Address: 0x31f1d0, Func Offset: 0x30
	// Line 22010, Address: 0x31f1d8, Func Offset: 0x38
	// Line 22011, Address: 0x31f1e0, Func Offset: 0x40
	// Line 22012, Address: 0x31f1e4, Func Offset: 0x44
	// Line 22018, Address: 0x31f1ec, Func Offset: 0x4c
	// Line 22014, Address: 0x31f1f0, Func Offset: 0x50
	// Line 22018, Address: 0x31f1f4, Func Offset: 0x54
	// Line 22019, Address: 0x31f1fc, Func Offset: 0x5c
	// Line 22021, Address: 0x31f218, Func Offset: 0x78
	// Line 22023, Address: 0x31f248, Func Offset: 0xa8
	// Line 22031, Address: 0x31f288, Func Offset: 0xe8
	// Line 22034, Address: 0x31f29c, Func Offset: 0xfc
	// Line 22036, Address: 0x31f2b4, Func Offset: 0x114
	// Line 22037, Address: 0x31f2d4, Func Offset: 0x134
	// Line 22036, Address: 0x31f2d8, Func Offset: 0x138
	// Line 22037, Address: 0x31f2dc, Func Offset: 0x13c
	// Line 22038, Address: 0x31f314, Func Offset: 0x174
	// Func End, Address: 0x31f344, Func Offset: 0x1a4
}

// PlayerLedgeUpdate__FP4xEntP6xScenef
// Start address: 0x31f350
void PlayerLedgeUpdate(xEnt* ent, xScene* sc, float32 dt)
{
	zLedgeGrabParams* ledge;
	float32 tnext;
	float32 ttest;
	float32 tcap;
	float32 s;
	xMat4x3 tmpmat;
	float32 animTime;
	float32 timelerp;
	float32 animDiffZ;
	int32 sidx;
	float32 sfactor;
	float32 sscale;
	xNearFloorPoly nfpoly;
	int32 chknum;
	xSurface* surface;
	float32 neardx;
	float32 neardz;
	xRay3 groundray;
	xCollis groundcoll;
	xVec3 bpos;
	xEntCollis collis;
	// Line 21560, Address: 0x31f350, Func Offset: 0
	// Line 21561, Address: 0x31f354, Func Offset: 0x4
	// Line 21560, Address: 0x31f358, Func Offset: 0x8
	// Line 21583, Address: 0x31f35c, Func Offset: 0xc
	// Line 21560, Address: 0x31f360, Func Offset: 0x10
	// Line 21561, Address: 0x31f3a8, Func Offset: 0x58
	// Line 21583, Address: 0x31f3b4, Func Offset: 0x64
	// Line 21598, Address: 0x31f3c0, Func Offset: 0x70
	// Line 21600, Address: 0x31f3c8, Func Offset: 0x78
	// Line 21603, Address: 0x31f3d4, Func Offset: 0x84
	// Line 21604, Address: 0x31f3dc, Func Offset: 0x8c
	// Line 21607, Address: 0x31f3e4, Func Offset: 0x94
	// Line 21608, Address: 0x31f3f4, Func Offset: 0xa4
	// Line 21611, Address: 0x31f408, Func Offset: 0xb8
	// Line 21613, Address: 0x31f414, Func Offset: 0xc4
	// Line 21614, Address: 0x31f41c, Func Offset: 0xcc
	// Line 21615, Address: 0x31f434, Func Offset: 0xe4
	// Line 21616, Address: 0x31f48c, Func Offset: 0x13c
	// Line 21617, Address: 0x31f4e0, Func Offset: 0x190
	// Line 21618, Address: 0x31f534, Func Offset: 0x1e4
	// Line 21619, Address: 0x31f5c0, Func Offset: 0x270
	// Line 21620, Address: 0x31f5e4, Func Offset: 0x294
	// Line 21619, Address: 0x31f5e8, Func Offset: 0x298
	// Line 21620, Address: 0x31f5ec, Func Offset: 0x29c
	// Line 21619, Address: 0x31f5f4, Func Offset: 0x2a4
	// Line 21620, Address: 0x31f5f8, Func Offset: 0x2a8
	// Line 21621, Address: 0x31f608, Func Offset: 0x2b8
	// Line 21622, Address: 0x31f620, Func Offset: 0x2d0
	// Line 21623, Address: 0x31f638, Func Offset: 0x2e8
	// Line 21627, Address: 0x31f64c, Func Offset: 0x2fc
	// Line 21635, Address: 0x31f658, Func Offset: 0x308
	// Line 21643, Address: 0x31f6a0, Func Offset: 0x350
	// Line 21641, Address: 0x31f6a8, Func Offset: 0x358
	// Line 21649, Address: 0x31f6b0, Func Offset: 0x360
	// Line 21644, Address: 0x31f6b4, Func Offset: 0x364
	// Line 21649, Address: 0x31f6b8, Func Offset: 0x368
	// Line 21643, Address: 0x31f6bc, Func Offset: 0x36c
	// Line 21641, Address: 0x31f6c0, Func Offset: 0x370
	// Line 21644, Address: 0x31f6c4, Func Offset: 0x374
	// Line 21655, Address: 0x31f6d0, Func Offset: 0x380
	// Line 21645, Address: 0x31f6d4, Func Offset: 0x384
	// Line 21646, Address: 0x31f6dc, Func Offset: 0x38c
	// Line 21655, Address: 0x31f6e8, Func Offset: 0x398
	// Line 21661, Address: 0x31f70c, Func Offset: 0x3bc
	// Line 21662, Address: 0x31f724, Func Offset: 0x3d4
	// Line 21664, Address: 0x31f72c, Func Offset: 0x3dc
	// Line 21663, Address: 0x31f734, Func Offset: 0x3e4
	// Line 21665, Address: 0x31f738, Func Offset: 0x3e8
	// Line 21663, Address: 0x31f73c, Func Offset: 0x3ec
	// Line 21665, Address: 0x31f744, Func Offset: 0x3f4
	// Line 21667, Address: 0x31f750, Func Offset: 0x400
	// Line 21666, Address: 0x31f754, Func Offset: 0x404
	// Line 21667, Address: 0x31f758, Func Offset: 0x408
	// Line 21669, Address: 0x31f770, Func Offset: 0x420
	// Line 21670, Address: 0x31f78c, Func Offset: 0x43c
	// Line 21675, Address: 0x31f794, Func Offset: 0x444
	// Line 21669, Address: 0x31f798, Func Offset: 0x448
	// Line 21670, Address: 0x31f7a8, Func Offset: 0x458
	// Line 21669, Address: 0x31f7ac, Func Offset: 0x45c
	// Line 21670, Address: 0x31f7c0, Func Offset: 0x470
	// Line 21669, Address: 0x31f7c4, Func Offset: 0x474
	// Line 21672, Address: 0x31f7c8, Func Offset: 0x478
	// Line 21669, Address: 0x31f7cc, Func Offset: 0x47c
	// Line 21671, Address: 0x31f7d0, Func Offset: 0x480
	// Line 21672, Address: 0x31f7d4, Func Offset: 0x484
	// Line 21675, Address: 0x31f7e0, Func Offset: 0x490
	// Line 21671, Address: 0x31f7ec, Func Offset: 0x49c
	// Line 21676, Address: 0x31f7f0, Func Offset: 0x4a0
	// Line 21677, Address: 0x31f7f4, Func Offset: 0x4a4
	// Line 21676, Address: 0x31f7fc, Func Offset: 0x4ac
	// Line 21677, Address: 0x31f800, Func Offset: 0x4b0
	// Line 21679, Address: 0x31f80c, Func Offset: 0x4bc
	// Line 21680, Address: 0x31f820, Func Offset: 0x4d0
	// Line 21681, Address: 0x31f834, Func Offset: 0x4e4
	// Line 21683, Address: 0x31f844, Func Offset: 0x4f4
	// Line 21684, Address: 0x31f84c, Func Offset: 0x4fc
	// Line 21685, Address: 0x31f858, Func Offset: 0x508
	// Line 21684, Address: 0x31f86c, Func Offset: 0x51c
	// Line 21685, Address: 0x31f8a0, Func Offset: 0x550
	// Line 21688, Address: 0x31f8b8, Func Offset: 0x568
	// Line 21695, Address: 0x31f8bc, Func Offset: 0x56c
	// Line 21688, Address: 0x31f8c0, Func Offset: 0x570
	// Line 21689, Address: 0x31f8c4, Func Offset: 0x574
	// Line 21690, Address: 0x31f8cc, Func Offset: 0x57c
	// Line 21695, Address: 0x31f8d4, Func Offset: 0x584
	// Line 21693, Address: 0x31f8d8, Func Offset: 0x588
	// Line 21694, Address: 0x31f8dc, Func Offset: 0x58c
	// Line 21696, Address: 0x31f8e0, Func Offset: 0x590
	// Line 21699, Address: 0x31f8f4, Func Offset: 0x5a4
	// Line 21700, Address: 0x31f910, Func Offset: 0x5c0
	// Line 21699, Address: 0x31f914, Func Offset: 0x5c4
	// Line 21700, Address: 0x31f918, Func Offset: 0x5c8
	// Line 21699, Address: 0x31f91c, Func Offset: 0x5cc
	// Line 21700, Address: 0x31f920, Func Offset: 0x5d0
	// Line 21702, Address: 0x31f938, Func Offset: 0x5e8
	// Line 21704, Address: 0x31f94c, Func Offset: 0x5fc
	// Line 21708, Address: 0x31f954, Func Offset: 0x604
	// Line 21711, Address: 0x31f95c, Func Offset: 0x60c
	// Line 21716, Address: 0x31f96c, Func Offset: 0x61c
	// Line 21730, Address: 0x31f978, Func Offset: 0x628
	// Line 21736, Address: 0x31f984, Func Offset: 0x634
	// Line 21731, Address: 0x31f988, Func Offset: 0x638
	// Line 21732, Address: 0x31f98c, Func Offset: 0x63c
	// Line 21734, Address: 0x31f990, Func Offset: 0x640
	// Line 21736, Address: 0x31f99c, Func Offset: 0x64c
	// Line 21738, Address: 0x31f9a0, Func Offset: 0x650
	// Line 21739, Address: 0x31f9a4, Func Offset: 0x654
	// Line 21730, Address: 0x31f9a8, Func Offset: 0x658
	// Line 21737, Address: 0x31f9ac, Func Offset: 0x65c
	// Line 21753, Address: 0x31f9b0, Func Offset: 0x660
	// Line 21730, Address: 0x31f9b4, Func Offset: 0x664
	// Line 21731, Address: 0x31f9b8, Func Offset: 0x668
	// Line 21739, Address: 0x31f9bc, Func Offset: 0x66c
	// Line 21731, Address: 0x31f9c0, Func Offset: 0x670
	// Line 21732, Address: 0x31f9cc, Func Offset: 0x67c
	// Line 21739, Address: 0x31f9d0, Func Offset: 0x680
	// Line 21732, Address: 0x31f9d4, Func Offset: 0x684
	// Line 21733, Address: 0x31f9e0, Func Offset: 0x690
	// Line 21739, Address: 0x31f9e4, Func Offset: 0x694
	// Line 21733, Address: 0x31f9e8, Func Offset: 0x698
	// Line 21734, Address: 0x31f9f4, Func Offset: 0x6a4
	// Line 21739, Address: 0x31f9f8, Func Offset: 0x6a8
	// Line 21734, Address: 0x31fa04, Func Offset: 0x6b4
	// Line 21739, Address: 0x31fa08, Func Offset: 0x6b8
	// Line 21734, Address: 0x31fa0c, Func Offset: 0x6bc
	// Line 21735, Address: 0x31fa14, Func Offset: 0x6c4
	// Line 21739, Address: 0x31fa18, Func Offset: 0x6c8
	// Line 21735, Address: 0x31fa1c, Func Offset: 0x6cc
	// Line 21739, Address: 0x31fa20, Func Offset: 0x6d0
	// Line 21735, Address: 0x31fa24, Func Offset: 0x6d4
	// Line 21736, Address: 0x31fa28, Func Offset: 0x6d8
	// Line 21737, Address: 0x31fa2c, Func Offset: 0x6dc
	// Line 21735, Address: 0x31fa30, Func Offset: 0x6e0
	// Line 21739, Address: 0x31fa34, Func Offset: 0x6e4
	// Line 21738, Address: 0x31fa38, Func Offset: 0x6e8
	// Line 21739, Address: 0x31fa3c, Func Offset: 0x6ec
	// Line 21738, Address: 0x31fa44, Func Offset: 0x6f4
	// Line 21739, Address: 0x31fa48, Func Offset: 0x6f8
	// Line 21738, Address: 0x31fa54, Func Offset: 0x704
	// Line 21739, Address: 0x31fa64, Func Offset: 0x714
	// Line 21738, Address: 0x31fa68, Func Offset: 0x718
	// Line 21739, Address: 0x31fa70, Func Offset: 0x720
	// Line 21755, Address: 0x31fa78, Func Offset: 0x728
	// Line 21759, Address: 0x31fa94, Func Offset: 0x744
	// Line 21765, Address: 0x31fab4, Func Offset: 0x764
	// Line 21767, Address: 0x31fac4, Func Offset: 0x774
	// Line 21768, Address: 0x31facc, Func Offset: 0x77c
	// Line 21771, Address: 0x31faec, Func Offset: 0x79c
	// Line 21776, Address: 0x31faf4, Func Offset: 0x7a4
	// Line 21783, Address: 0x31fb00, Func Offset: 0x7b0
	// Line 21776, Address: 0x31fb08, Func Offset: 0x7b8
	// Line 21785, Address: 0x31fb0c, Func Offset: 0x7bc
	// Line 21787, Address: 0x31fb10, Func Offset: 0x7c0
	// Line 21776, Address: 0x31fb1c, Func Offset: 0x7cc
	// Line 21784, Address: 0x31fb20, Func Offset: 0x7d0
	// Line 21783, Address: 0x31fb2c, Func Offset: 0x7dc
	// Line 21784, Address: 0x31fb30, Func Offset: 0x7e0
	// Line 21785, Address: 0x31fb34, Func Offset: 0x7e4
	// Line 21787, Address: 0x31fb48, Func Offset: 0x7f8
	// Line 21804, Address: 0x31fba8, Func Offset: 0x858
	// Line 21810, Address: 0x31fbac, Func Offset: 0x85c
	// Line 21805, Address: 0x31fbb0, Func Offset: 0x860
	// Line 21811, Address: 0x31fbb4, Func Offset: 0x864
	// Line 21804, Address: 0x31fbbc, Func Offset: 0x86c
	// Line 21811, Address: 0x31fbc0, Func Offset: 0x870
	// Line 21808, Address: 0x31fbc4, Func Offset: 0x874
	// Line 21814, Address: 0x31fbc8, Func Offset: 0x878
	// Line 21812, Address: 0x31fbcc, Func Offset: 0x87c
	// Line 21813, Address: 0x31fbd0, Func Offset: 0x880
	// Line 21814, Address: 0x31fbd4, Func Offset: 0x884
	// Line 21817, Address: 0x31fbd8, Func Offset: 0x888
	// Line 21805, Address: 0x31fbe0, Func Offset: 0x890
	// Line 21817, Address: 0x31fbe4, Func Offset: 0x894
	// Line 21811, Address: 0x31fbec, Func Offset: 0x89c
	// Line 21805, Address: 0x31fbf0, Func Offset: 0x8a0
	// Line 21817, Address: 0x31fbf4, Func Offset: 0x8a4
	// Line 21805, Address: 0x31fbf8, Func Offset: 0x8a8
	// Line 21806, Address: 0x31fbfc, Func Offset: 0x8ac
	// Line 21811, Address: 0x31fc00, Func Offset: 0x8b0
	// Line 21806, Address: 0x31fc04, Func Offset: 0x8b4
	// Line 21808, Address: 0x31fc0c, Func Offset: 0x8bc
	// Line 21811, Address: 0x31fc10, Func Offset: 0x8c0
	// Line 21812, Address: 0x31fc14, Func Offset: 0x8c4
	// Line 21814, Address: 0x31fc18, Func Offset: 0x8c8
	// Line 21807, Address: 0x31fc1c, Func Offset: 0x8cc
	// Line 21809, Address: 0x31fc20, Func Offset: 0x8d0
	// Line 21813, Address: 0x31fc24, Func Offset: 0x8d4
	// Line 21810, Address: 0x31fc28, Func Offset: 0x8d8
	// Line 21815, Address: 0x31fc2c, Func Offset: 0x8dc
	// Line 21817, Address: 0x31fc30, Func Offset: 0x8e0
	// Line 21819, Address: 0x31fc38, Func Offset: 0x8e8
	// Line 21827, Address: 0x31fc58, Func Offset: 0x908
	// Line 21828, Address: 0x31fc64, Func Offset: 0x914
	// Line 21836, Address: 0x31fc6c, Func Offset: 0x91c
	// Line 21834, Address: 0x31fc70, Func Offset: 0x920
	// Line 21836, Address: 0x31fc74, Func Offset: 0x924
	// Line 21834, Address: 0x31fc78, Func Offset: 0x928
	// Line 21829, Address: 0x31fc80, Func Offset: 0x930
	// Line 21827, Address: 0x31fc84, Func Offset: 0x934
	// Line 21828, Address: 0x31fc94, Func Offset: 0x944
	// Line 21827, Address: 0x31fc98, Func Offset: 0x948
	// Line 21829, Address: 0x31fc9c, Func Offset: 0x94c
	// Line 21827, Address: 0x31fca0, Func Offset: 0x950
	// Line 21828, Address: 0x31fca8, Func Offset: 0x958
	// Line 21829, Address: 0x31fcb4, Func Offset: 0x964
	// Line 21832, Address: 0x31fcc8, Func Offset: 0x978
	// Line 21833, Address: 0x31fcd4, Func Offset: 0x984
	// Line 21832, Address: 0x31fce0, Func Offset: 0x990
	// Line 21833, Address: 0x31fcec, Func Offset: 0x99c
	// Line 21834, Address: 0x31fcf8, Func Offset: 0x9a8
	// Line 21836, Address: 0x31fd04, Func Offset: 0x9b4
	// Line 21840, Address: 0x31fd24, Func Offset: 0x9d4
	// Line 21841, Address: 0x31fdbc, Func Offset: 0xa6c
	// Line 21844, Address: 0x31fdd0, Func Offset: 0xa80
	// Line 21845, Address: 0x31fdd4, Func Offset: 0xa84
	// Line 21844, Address: 0x31fdd8, Func Offset: 0xa88
	// Line 21845, Address: 0x31fddc, Func Offset: 0xa8c
	// Line 21844, Address: 0x31fde0, Func Offset: 0xa90
	// Line 21845, Address: 0x31fde4, Func Offset: 0xa94
	// Line 21844, Address: 0x31fdfc, Func Offset: 0xaac
	// Line 21845, Address: 0x31fe00, Func Offset: 0xab0
	// Line 21844, Address: 0x31fe04, Func Offset: 0xab4
	// Line 21845, Address: 0x31fe08, Func Offset: 0xab8
	// Line 21844, Address: 0x31fe0c, Func Offset: 0xabc
	// Line 21845, Address: 0x31fe10, Func Offset: 0xac0
	// Line 21848, Address: 0x31fe7c, Func Offset: 0xb2c
	// Line 21851, Address: 0x31fe84, Func Offset: 0xb34
	// Line 21852, Address: 0x31fe88, Func Offset: 0xb38
	// Line 21851, Address: 0x31fe8c, Func Offset: 0xb3c
	// Line 21852, Address: 0x31fe90, Func Offset: 0xb40
	// Line 21851, Address: 0x31fe94, Func Offset: 0xb44
	// Line 21852, Address: 0x31fe98, Func Offset: 0xb48
	// Line 21851, Address: 0x31feb0, Func Offset: 0xb60
	// Line 21852, Address: 0x31feb4, Func Offset: 0xb64
	// Line 21851, Address: 0x31feb8, Func Offset: 0xb68
	// Line 21852, Address: 0x31febc, Func Offset: 0xb6c
	// Line 21851, Address: 0x31fec0, Func Offset: 0xb70
	// Line 21852, Address: 0x31fec4, Func Offset: 0xb74
	// Line 21858, Address: 0x31ff28, Func Offset: 0xbd8
	// Line 21852, Address: 0x31ff2c, Func Offset: 0xbdc
	// Line 21858, Address: 0x31ff30, Func Offset: 0xbe0
	// Line 21855, Address: 0x31ff34, Func Offset: 0xbe4
	// Line 21858, Address: 0x31ff38, Func Offset: 0xbe8
	// Line 21852, Address: 0x31ff3c, Func Offset: 0xbec
	// Line 21855, Address: 0x31ff44, Func Offset: 0xbf4
	// Line 21856, Address: 0x31ff48, Func Offset: 0xbf8
	// Line 21857, Address: 0x31ff60, Func Offset: 0xc10
	// Line 21856, Address: 0x31ff64, Func Offset: 0xc14
	// Line 21857, Address: 0x31ff6c, Func Offset: 0xc1c
	// Line 21858, Address: 0x31ff84, Func Offset: 0xc34
	// Line 21859, Address: 0x31ff90, Func Offset: 0xc40
	// Line 21860, Address: 0x31ffb8, Func Offset: 0xc68
	// Line 21861, Address: 0x31ffc8, Func Offset: 0xc78
	// Line 21862, Address: 0x31ffd0, Func Offset: 0xc80
	// Line 21881, Address: 0x320054, Func Offset: 0xd04
	// Line 21886, Address: 0x32005c, Func Offset: 0xd0c
	// Line 21887, Address: 0x320064, Func Offset: 0xd14
	// Line 21889, Address: 0x320074, Func Offset: 0xd24
	// Line 21887, Address: 0x320078, Func Offset: 0xd28
	// Line 21888, Address: 0x32007c, Func Offset: 0xd2c
	// Line 21887, Address: 0x320080, Func Offset: 0xd30
	// Line 21888, Address: 0x320090, Func Offset: 0xd40
	// Line 21889, Address: 0x320094, Func Offset: 0xd44
	// Line 21890, Address: 0x32009c, Func Offset: 0xd4c
	// Line 21891, Address: 0x3200a0, Func Offset: 0xd50
	// Line 21892, Address: 0x3200a4, Func Offset: 0xd54
	// Line 21888, Address: 0x3200a8, Func Offset: 0xd58
	// Line 21889, Address: 0x3200bc, Func Offset: 0xd6c
	// Line 21890, Address: 0x3200d0, Func Offset: 0xd80
	// Line 21891, Address: 0x3200e8, Func Offset: 0xd98
	// Line 21892, Address: 0x3200fc, Func Offset: 0xdac
	// Line 21905, Address: 0x320110, Func Offset: 0xdc0
	// Line 21906, Address: 0x320120, Func Offset: 0xdd0
	// Func End, Address: 0x32016c, Func Offset: 0xe1c
}

// PlayerLedgeInit__FP16zLedgeGrabParamsP14xModelInstance
// Start address: 0x320170
void PlayerLedgeInit(zLedgeGrabParams* ledge, xModelInstance* model)
{
	int32 i;
	xAnimState* idle;
	xAnimState* grab;
	xVec3 tran[64];
	xQuat quat[64];
	// Line 21495, Address: 0x320170, Func Offset: 0
	// Line 21500, Address: 0x320190, Func Offset: 0x20
	// Line 21499, Address: 0x320194, Func Offset: 0x24
	// Line 21500, Address: 0x320198, Func Offset: 0x28
	// Line 21503, Address: 0x3201a4, Func Offset: 0x34
	// Line 21505, Address: 0x3201cc, Func Offset: 0x5c
	// Line 21508, Address: 0x3201d8, Func Offset: 0x68
	// Line 21516, Address: 0x3201e8, Func Offset: 0x78
	// Line 21517, Address: 0x320208, Func Offset: 0x98
	// Line 21516, Address: 0x32020c, Func Offset: 0x9c
	// Line 21517, Address: 0x320210, Func Offset: 0xa0
	// Line 21518, Address: 0x320228, Func Offset: 0xb8
	// Line 21519, Address: 0x320244, Func Offset: 0xd4
	// Line 21522, Address: 0x320248, Func Offset: 0xd8
	// Line 21519, Address: 0x32024c, Func Offset: 0xdc
	// Line 21520, Address: 0x320258, Func Offset: 0xe8
	// Line 21521, Address: 0x320268, Func Offset: 0xf8
	// Line 21522, Address: 0x320278, Func Offset: 0x108
	// Line 21523, Address: 0x320288, Func Offset: 0x118
	// Line 21526, Address: 0x3202a0, Func Offset: 0x130
	// Line 21528, Address: 0x3202b0, Func Offset: 0x140
	// Line 21529, Address: 0x3202c8, Func Offset: 0x158
	// Line 21532, Address: 0x3202d4, Func Offset: 0x164
	// Line 21541, Address: 0x3202e8, Func Offset: 0x178
	// Line 21543, Address: 0x3202ec, Func Offset: 0x17c
	// Line 21542, Address: 0x3202f4, Func Offset: 0x184
	// Line 21543, Address: 0x3202f8, Func Offset: 0x188
	// Line 21544, Address: 0x3202fc, Func Offset: 0x18c
	// Line 21545, Address: 0x320304, Func Offset: 0x194
	// Line 21546, Address: 0x32030c, Func Offset: 0x19c
	// Line 21545, Address: 0x320310, Func Offset: 0x1a0
	// Line 21546, Address: 0x320314, Func Offset: 0x1a4
	// Line 21547, Address: 0x32031c, Func Offset: 0x1ac
	// Line 21555, Address: 0x320328, Func Offset: 0x1b8
	// Line 21548, Address: 0x32032c, Func Offset: 0x1bc
	// Line 21549, Address: 0x320330, Func Offset: 0x1c0
	// Line 21550, Address: 0x320334, Func Offset: 0x1c4
	// Line 21551, Address: 0x320338, Func Offset: 0x1c8
	// Line 21552, Address: 0x32033c, Func Offset: 0x1cc
	// Line 21553, Address: 0x320340, Func Offset: 0x1d0
	// Line 21554, Address: 0x320344, Func Offset: 0x1d4
	// Line 21555, Address: 0x320348, Func Offset: 0x1d8
	// Line 21557, Address: 0x32034c, Func Offset: 0x1dc
	// Line 21536, Address: 0x320354, Func Offset: 0x1e4
	// Line 21538, Address: 0x320358, Func Offset: 0x1e8
	// Line 21557, Address: 0x32035c, Func Offset: 0x1ec
	// Line 21538, Address: 0x320360, Func Offset: 0x1f0
	// Line 21557, Address: 0x320364, Func Offset: 0x1f4
	// Func End, Address: 0x320388, Func Offset: 0x218
}

// PlayerBeginCollideNoBupdate__FP4xEntP6xScenef
// Start address: 0x320390
void PlayerBeginCollideNoBupdate(xEnt* ent)
{
	uint8 idx;
	xCollis* coll;
	// Line 21369, Address: 0x320390, Func Offset: 0
	// Line 21374, Address: 0x320398, Func Offset: 0x8
	// Line 21371, Address: 0x32039c, Func Offset: 0xc
	// Line 21374, Address: 0x3203a0, Func Offset: 0x10
	// Line 21370, Address: 0x3203a4, Func Offset: 0x14
	// Line 21374, Address: 0x3203a8, Func Offset: 0x18
	// Line 21370, Address: 0x3203b4, Func Offset: 0x24
	// Line 21371, Address: 0x3203b8, Func Offset: 0x28
	// Line 21372, Address: 0x3203bc, Func Offset: 0x2c
	// Line 21373, Address: 0x3203c0, Func Offset: 0x30
	// Line 21374, Address: 0x3203c4, Func Offset: 0x34
	// Line 21379, Address: 0x320448, Func Offset: 0xb8
	// Line 21382, Address: 0x320454, Func Offset: 0xc4
	// Line 21383, Address: 0x32045c, Func Offset: 0xcc
	// Line 21384, Address: 0x320464, Func Offset: 0xd4
	// Line 21385, Address: 0x32046c, Func Offset: 0xdc
	// Line 21386, Address: 0x320474, Func Offset: 0xe4
	// Line 21387, Address: 0x32047c, Func Offset: 0xec
	// Line 21388, Address: 0x320484, Func Offset: 0xf4
	// Line 21389, Address: 0x32048c, Func Offset: 0xfc
	// Line 21390, Address: 0x320490, Func Offset: 0x100
	// Func End, Address: 0x320498, Func Offset: 0x108
}

// zEntPlayer_TikiKilledBy__FP10zNMECommonPC5xBase
// Start address: 0x3204a0
void zEntPlayer_TikiKilledBy(zNMECommon* tiki, xBase* killedBy)
{
	xEnt* ent;
	en_npctyp typ;
	// Line 21288, Address: 0x3204a0, Func Offset: 0
	// Line 21291, Address: 0x3204a4, Func Offset: 0x4
	// Line 21295, Address: 0x3204b4, Func Offset: 0x14
	// Line 21297, Address: 0x3204f0, Func Offset: 0x50
	// Line 21299, Address: 0x3204f4, Func Offset: 0x54
	// Line 21297, Address: 0x3204f8, Func Offset: 0x58
	// Line 21299, Address: 0x3204fc, Func Offset: 0x5c
	// Line 21303, Address: 0x32051c, Func Offset: 0x7c
	// Line 21304, Address: 0x320558, Func Offset: 0xb8
	// Line 21306, Address: 0x320560, Func Offset: 0xc0
	// Line 21312, Address: 0x32057c, Func Offset: 0xdc
	// Func End, Address: 0x320588, Func Offset: 0xe8
}

// zEntPlayer_SoundsCurrentlyAllowed__Fv
// Start address: 0x320590
uint8 zEntPlayer_SoundsCurrentlyAllowed()
{
	// Line 21274, Address: 0x320590, Func Offset: 0
	// Line 21275, Address: 0x320594, Func Offset: 0x4
	// Line 21274, Address: 0x320598, Func Offset: 0x8
	// Line 21275, Address: 0x32059c, Func Offset: 0xc
	// Line 21276, Address: 0x3205a8, Func Offset: 0x18
	// Line 21277, Address: 0x3205b0, Func Offset: 0x20
	// Line 21278, Address: 0x3205c0, Func Offset: 0x30
	// Line 21281, Address: 0x3205c8, Func Offset: 0x38
	// Line 21284, Address: 0x3205d4, Func Offset: 0x44
	// Func End, Address: 0x3205e0, Func Offset: 0x50
}

// zEntPlayer_SNDStop__F14_tagePlayerSnd
// Start address: 0x3205e0
void zEntPlayer_SNDStop(_tagePlayerSnd player_snd)
{
	// Line 21237, Address: 0x3205e0, Func Offset: 0
	// Line 21241, Address: 0x3205f0, Func Offset: 0x10
	// Line 21243, Address: 0x3205f8, Func Offset: 0x18
	// Line 21246, Address: 0x320614, Func Offset: 0x34
	// Line 21243, Address: 0x320618, Func Offset: 0x38
	// Line 21246, Address: 0x32061c, Func Offset: 0x3c
	// Line 21248, Address: 0x32063c, Func Offset: 0x5c
	// Line 21246, Address: 0x320640, Func Offset: 0x60
	// Line 21248, Address: 0x32064c, Func Offset: 0x6c
	// Line 21250, Address: 0x320658, Func Offset: 0x78
	// Line 21251, Address: 0x320660, Func Offset: 0x80
	// Line 21253, Address: 0x320664, Func Offset: 0x84
	// Line 21251, Address: 0x32066c, Func Offset: 0x8c
	// Line 21253, Address: 0x320680, Func Offset: 0xa0
	// Line 21251, Address: 0x320684, Func Offset: 0xa4
	// Line 21253, Address: 0x320688, Func Offset: 0xa8
	// Line 21251, Address: 0x32068c, Func Offset: 0xac
	// Line 21253, Address: 0x3206a0, Func Offset: 0xc0
	// Line 21255, Address: 0x3206ac, Func Offset: 0xcc
	// Line 21260, Address: 0x3206bc, Func Offset: 0xdc
	// Func End, Address: 0x3206cc, Func Offset: 0xec
}

// zEntPlayer_SNDPlayStream__FUiUi20_tagePlayerStreamSnd
// Start address: 0x3206d0
void zEntPlayer_SNDPlayStream(uint32 lower, uint32 upper, _tagePlayerStreamSnd player_snd)
{
	// Line 21185, Address: 0x3206d0, Func Offset: 0
	// Line 21189, Address: 0x3206e0, Func Offset: 0x10
	// Line 21190, Address: 0x3206f8, Func Offset: 0x28
	// Line 21196, Address: 0x320748, Func Offset: 0x78
	// Func End, Address: 0x320754, Func Offset: 0x84
}

// zEntPlayer_SNDPlayUpgradeVO__Fi
// Start address: 0x320760
void zEntPlayer_SNDPlayUpgradeVO(int32 powerupIndex)
{
	iSndGroupHandle VOGroup;
	eSNDCurrentPlayer player;
	eSNDCurrentPlayer player;
	// Line 21152, Address: 0x320760, Func Offset: 0
	// Line 21154, Address: 0x32076c, Func Offset: 0xc
	// Line 21156, Address: 0x320798, Func Offset: 0x38
	// Line 21158, Address: 0x3207dc, Func Offset: 0x7c
	// Line 21161, Address: 0x3207e4, Func Offset: 0x84
	// Line 21163, Address: 0x3207fc, Func Offset: 0x9c
	// Line 21170, Address: 0x320858, Func Offset: 0xf8
	// Func End, Address: 0x320874, Func Offset: 0x114
}

// zEntPlayer_SNDPlayStream__F20_tagePlayerStreamSnd
// Start address: 0x320880
void zEntPlayer_SNDPlayStream(_tagePlayerStreamSnd player_snd)
{
	// Line 21132, Address: 0x320880, Func Offset: 0
	// Line 21134, Address: 0x320884, Func Offset: 0x4
	// Line 21132, Address: 0x320888, Func Offset: 0x8
	// Line 21134, Address: 0x320890, Func Offset: 0x10
	// Line 21138, Address: 0x3208a8, Func Offset: 0x28
	// Line 21143, Address: 0x3208dc, Func Offset: 0x5c
	// Func End, Address: 0x3208e8, Func Offset: 0x68
}

// zEntPlayer_SNDPlay__F14_tagePlayerSndb
// Start address: 0x3208f0
void zEntPlayer_SNDPlay(_tagePlayerSnd player_snd, uint8 playRumble)
{
	// Line 21104, Address: 0x3208f0, Func Offset: 0
	// Line 21106, Address: 0x3208f4, Func Offset: 0x4
	// Line 21104, Address: 0x3208f8, Func Offset: 0x8
	// Line 21106, Address: 0x320904, Func Offset: 0x14
	// Line 21108, Address: 0x320910, Func Offset: 0x20
	// Line 21113, Address: 0x320920, Func Offset: 0x30
	// Line 21115, Address: 0x320928, Func Offset: 0x38
	// Line 21118, Address: 0x320960, Func Offset: 0x70
	// Line 21129, Address: 0x320968, Func Offset: 0x78
	// Line 21120, Address: 0x32097c, Func Offset: 0x8c
	// Line 21129, Address: 0x320990, Func Offset: 0xa0
	// Line 21120, Address: 0x3209a8, Func Offset: 0xb8
	// Line 21129, Address: 0x3209ac, Func Offset: 0xbc
	// Line 21120, Address: 0x3209b0, Func Offset: 0xc0
	// Line 21129, Address: 0x3209b4, Func Offset: 0xc4
	// Line 21120, Address: 0x3209b8, Func Offset: 0xc8
	// Line 21129, Address: 0x3209bc, Func Offset: 0xcc
	// Line 21120, Address: 0x3209c0, Func Offset: 0xd0
	// Line 21129, Address: 0x3209c4, Func Offset: 0xd4
	// Line 21126, Address: 0x3209f4, Func Offset: 0x104
	// Line 21129, Address: 0x320a1c, Func Offset: 0x12c
	// Line 21126, Address: 0x320a20, Func Offset: 0x130
	// Line 21129, Address: 0x320a2c, Func Offset: 0x13c
	// Line 21126, Address: 0x320a30, Func Offset: 0x140
	// Line 21129, Address: 0x320a3c, Func Offset: 0x14c
	// Func End, Address: 0x320a68, Func Offset: 0x178
}

// zEntPlayer_SNDInit__Fv
// Start address: 0x320a70
void zEntPlayer_SNDInit()
{
	int32 player;
	int32 snd;
	int32 snd;
	// Line 20903, Address: 0x320a70, Func Offset: 0
	// Line 20905, Address: 0x320a74, Func Offset: 0x4
	// Line 20903, Address: 0x320a78, Func Offset: 0x8
	// Line 20905, Address: 0x320a7c, Func Offset: 0xc
	// Line 20909, Address: 0x320a84, Func Offset: 0x14
	// Line 20907, Address: 0x320a88, Func Offset: 0x18
	// Line 20909, Address: 0x320a90, Func Offset: 0x20
	// Line 20911, Address: 0x320ac4, Func Offset: 0x54
	// Line 20909, Address: 0x320ac8, Func Offset: 0x58
	// Line 20911, Address: 0x320ad0, Func Offset: 0x60
	// Line 20909, Address: 0x320ad4, Func Offset: 0x64
	// Line 20911, Address: 0x320ae0, Func Offset: 0x70
	// Line 20914, Address: 0x320ae8, Func Offset: 0x78
	// Line 20916, Address: 0x320af4, Func Offset: 0x84
	// Line 20920, Address: 0x320b30, Func Offset: 0xc0
	// Line 20916, Address: 0x320b34, Func Offset: 0xc4
	// Line 20920, Address: 0x320b38, Func Offset: 0xc8
	// Line 20916, Address: 0x320b3c, Func Offset: 0xcc
	// Line 20920, Address: 0x320b48, Func Offset: 0xd8
	// Line 20921, Address: 0x320b54, Func Offset: 0xe4
	// Line 20922, Address: 0x320b68, Func Offset: 0xf8
	// Line 20923, Address: 0x320b7c, Func Offset: 0x10c
	// Line 20924, Address: 0x320b90, Func Offset: 0x120
	// Line 20925, Address: 0x320ba4, Func Offset: 0x134
	// Line 20926, Address: 0x320bb8, Func Offset: 0x148
	// Line 20927, Address: 0x320bcc, Func Offset: 0x15c
	// Line 20928, Address: 0x320be0, Func Offset: 0x170
	// Line 20929, Address: 0x320bf4, Func Offset: 0x184
	// Line 20930, Address: 0x320c08, Func Offset: 0x198
	// Line 20931, Address: 0x320c1c, Func Offset: 0x1ac
	// Line 20932, Address: 0x320c30, Func Offset: 0x1c0
	// Line 20933, Address: 0x320c44, Func Offset: 0x1d4
	// Line 20934, Address: 0x320c58, Func Offset: 0x1e8
	// Line 20933, Address: 0x320c5c, Func Offset: 0x1ec
	// Line 20935, Address: 0x320c60, Func Offset: 0x1f0
	// Line 20934, Address: 0x320c64, Func Offset: 0x1f4
	// Line 20935, Address: 0x320c68, Func Offset: 0x1f8
	// Line 20936, Address: 0x320c74, Func Offset: 0x204
	// Line 20935, Address: 0x320c78, Func Offset: 0x208
	// Line 20937, Address: 0x320c7c, Func Offset: 0x20c
	// Line 20938, Address: 0x320c80, Func Offset: 0x210
	// Line 20937, Address: 0x320c84, Func Offset: 0x214
	// Line 20938, Address: 0x320c88, Func Offset: 0x218
	// Line 20939, Address: 0x320c8c, Func Offset: 0x21c
	// Line 20940, Address: 0x320c90, Func Offset: 0x220
	// Line 20939, Address: 0x320c94, Func Offset: 0x224
	// Line 20940, Address: 0x320c98, Func Offset: 0x228
	// Line 20941, Address: 0x320c9c, Func Offset: 0x22c
	// Line 20942, Address: 0x320ca0, Func Offset: 0x230
	// Line 20936, Address: 0x320ca4, Func Offset: 0x234
	// Line 20941, Address: 0x320ca8, Func Offset: 0x238
	// Line 20945, Address: 0x320cac, Func Offset: 0x23c
	// Line 20942, Address: 0x320cb0, Func Offset: 0x240
	// Line 20943, Address: 0x320cb4, Func Offset: 0x244
	// Line 20944, Address: 0x320cb8, Func Offset: 0x248
	// Line 20943, Address: 0x320cbc, Func Offset: 0x24c
	// Line 20945, Address: 0x320cc0, Func Offset: 0x250
	// Line 20946, Address: 0x320cd0, Func Offset: 0x260
	// Line 20947, Address: 0x320ce4, Func Offset: 0x274
	// Line 20946, Address: 0x320ce8, Func Offset: 0x278
	// Line 20948, Address: 0x320cec, Func Offset: 0x27c
	// Line 20949, Address: 0x320cf0, Func Offset: 0x280
	// Line 20947, Address: 0x320cf4, Func Offset: 0x284
	// Line 20949, Address: 0x320cf8, Func Offset: 0x288
	// Line 20950, Address: 0x320d08, Func Offset: 0x298
	// Line 20949, Address: 0x320d0c, Func Offset: 0x29c
	// Line 20951, Address: 0x320d10, Func Offset: 0x2a0
	// Line 20950, Address: 0x320d14, Func Offset: 0x2a4
	// Line 20951, Address: 0x320d18, Func Offset: 0x2a8
	// Line 20952, Address: 0x320d24, Func Offset: 0x2b4
	// Line 20951, Address: 0x320d28, Func Offset: 0x2b8
	// Line 20953, Address: 0x320d2c, Func Offset: 0x2bc
	// Line 20952, Address: 0x320d30, Func Offset: 0x2c0
	// Line 20953, Address: 0x320d34, Func Offset: 0x2c4
	// Line 20954, Address: 0x320d40, Func Offset: 0x2d0
	// Line 20953, Address: 0x320d44, Func Offset: 0x2d4
	// Line 20955, Address: 0x320d48, Func Offset: 0x2d8
	// Line 20954, Address: 0x320d4c, Func Offset: 0x2dc
	// Line 20955, Address: 0x320d50, Func Offset: 0x2e0
	// Line 20956, Address: 0x320d5c, Func Offset: 0x2ec
	// Line 20957, Address: 0x320d70, Func Offset: 0x300
	// Line 20958, Address: 0x320d84, Func Offset: 0x314
	// Line 20959, Address: 0x320d98, Func Offset: 0x328
	// Line 20960, Address: 0x320dac, Func Offset: 0x33c
	// Line 20963, Address: 0x320dc0, Func Offset: 0x350
	// Line 20964, Address: 0x320dd4, Func Offset: 0x364
	// Line 20965, Address: 0x320de8, Func Offset: 0x378
	// Line 20966, Address: 0x320dfc, Func Offset: 0x38c
	// Line 20969, Address: 0x320e10, Func Offset: 0x3a0
	// Line 20970, Address: 0x320e24, Func Offset: 0x3b4
	// Line 20971, Address: 0x320e38, Func Offset: 0x3c8
	// Line 20972, Address: 0x320e4c, Func Offset: 0x3dc
	// Line 20971, Address: 0x320e50, Func Offset: 0x3e0
	// Line 20973, Address: 0x320e54, Func Offset: 0x3e4
	// Line 20974, Address: 0x320e58, Func Offset: 0x3e8
	// Line 20973, Address: 0x320e5c, Func Offset: 0x3ec
	// Line 20974, Address: 0x320e60, Func Offset: 0x3f0
	// Line 20975, Address: 0x320e64, Func Offset: 0x3f4
	// Line 20976, Address: 0x320e68, Func Offset: 0x3f8
	// Line 20975, Address: 0x320e6c, Func Offset: 0x3fc
	// Line 20976, Address: 0x320e70, Func Offset: 0x400
	// Line 20977, Address: 0x320e74, Func Offset: 0x404
	// Line 20978, Address: 0x320e78, Func Offset: 0x408
	// Line 20977, Address: 0x320e7c, Func Offset: 0x40c
	// Line 20978, Address: 0x320e80, Func Offset: 0x410
	// Line 20979, Address: 0x320e84, Func Offset: 0x414
	// Line 20980, Address: 0x320e88, Func Offset: 0x418
	// Line 20979, Address: 0x320e8c, Func Offset: 0x41c
	// Line 20980, Address: 0x320e90, Func Offset: 0x420
	// Line 20981, Address: 0x320e94, Func Offset: 0x424
	// Line 20982, Address: 0x320e98, Func Offset: 0x428
	// Line 20972, Address: 0x320e9c, Func Offset: 0x42c
	// Line 20981, Address: 0x320ea0, Func Offset: 0x430
	// Line 20985, Address: 0x320ea4, Func Offset: 0x434
	// Line 20982, Address: 0x320ea8, Func Offset: 0x438
	// Line 20983, Address: 0x320eac, Func Offset: 0x43c
	// Line 20984, Address: 0x320eb0, Func Offset: 0x440
	// Line 20983, Address: 0x320eb4, Func Offset: 0x444
	// Line 20985, Address: 0x320eb8, Func Offset: 0x448
	// Line 20986, Address: 0x320ec8, Func Offset: 0x458
	// Line 20987, Address: 0x320edc, Func Offset: 0x46c
	// Line 20988, Address: 0x320ef0, Func Offset: 0x480
	// Line 20989, Address: 0x320f04, Func Offset: 0x494
	// Line 20988, Address: 0x320f08, Func Offset: 0x498
	// Line 20990, Address: 0x320f0c, Func Offset: 0x49c
	// Line 20989, Address: 0x320f10, Func Offset: 0x4a0
	// Line 20990, Address: 0x320f14, Func Offset: 0x4a4
	// Line 20991, Address: 0x320f18, Func Offset: 0x4a8
	// Line 20992, Address: 0x320f1c, Func Offset: 0x4ac
	// Line 20993, Address: 0x320f20, Func Offset: 0x4b0
	// Line 20991, Address: 0x320f24, Func Offset: 0x4b4
	// Line 20993, Address: 0x320f28, Func Offset: 0x4b8
	// Line 20994, Address: 0x320f38, Func Offset: 0x4c8
	// Line 20995, Address: 0x320f4c, Func Offset: 0x4dc
	// Line 20996, Address: 0x320f60, Func Offset: 0x4f0
	// Line 20997, Address: 0x320f74, Func Offset: 0x504
	// Line 20996, Address: 0x320f78, Func Offset: 0x508
	// Line 20998, Address: 0x320f7c, Func Offset: 0x50c
	// Line 20997, Address: 0x320f80, Func Offset: 0x510
	// Line 20998, Address: 0x320f84, Func Offset: 0x514
	// Line 20999, Address: 0x320f90, Func Offset: 0x520
	// Line 20998, Address: 0x320f94, Func Offset: 0x524
	// Line 21000, Address: 0x320f98, Func Offset: 0x528
	// Line 20999, Address: 0x320f9c, Func Offset: 0x52c
	// Line 21000, Address: 0x320fa0, Func Offset: 0x530
	// Line 21001, Address: 0x320fac, Func Offset: 0x53c
	// Line 21000, Address: 0x320fb0, Func Offset: 0x540
	// Line 21002, Address: 0x320fb4, Func Offset: 0x544
	// Line 21001, Address: 0x320fb8, Func Offset: 0x548
	// Line 21002, Address: 0x320fbc, Func Offset: 0x54c
	// Line 21003, Address: 0x320fc8, Func Offset: 0x558
	// Line 21002, Address: 0x320fcc, Func Offset: 0x55c
	// Line 21004, Address: 0x320fd0, Func Offset: 0x560
	// Line 21005, Address: 0x320fd4, Func Offset: 0x564
	// Line 21003, Address: 0x320fd8, Func Offset: 0x568
	// Line 21005, Address: 0x320fdc, Func Offset: 0x56c
	// Line 21006, Address: 0x320fec, Func Offset: 0x57c
	// Line 21007, Address: 0x321000, Func Offset: 0x590
	// Line 21008, Address: 0x321014, Func Offset: 0x5a4
	// Line 21009, Address: 0x321028, Func Offset: 0x5b8
	// Line 21010, Address: 0x32103c, Func Offset: 0x5cc
	// Line 21013, Address: 0x321050, Func Offset: 0x5e0
	// Line 21014, Address: 0x321064, Func Offset: 0x5f4
	// Line 21015, Address: 0x321078, Func Offset: 0x608
	// Line 21016, Address: 0x32108c, Func Offset: 0x61c
	// Line 21017, Address: 0x3210a0, Func Offset: 0x630
	// Line 21016, Address: 0x3210a4, Func Offset: 0x634
	// Line 21017, Address: 0x3210a8, Func Offset: 0x638
	// Line 21018, Address: 0x3210ac, Func Offset: 0x63c
	// Line 21019, Address: 0x3210b0, Func Offset: 0x640
	// Line 21020, Address: 0x3210b4, Func Offset: 0x644
	// Line 21018, Address: 0x3210b8, Func Offset: 0x648
	// Line 21020, Address: 0x3210bc, Func Offset: 0x64c
	// Line 21021, Address: 0x3210cc, Func Offset: 0x65c
	// Line 21020, Address: 0x3210d0, Func Offset: 0x660
	// Line 21022, Address: 0x3210d4, Func Offset: 0x664
	// Line 21021, Address: 0x3210d8, Func Offset: 0x668
	// Line 21022, Address: 0x3210dc, Func Offset: 0x66c
	// Line 21023, Address: 0x3210e8, Func Offset: 0x678
	// Line 21022, Address: 0x3210ec, Func Offset: 0x67c
	// Line 21034, Address: 0x3210f0, Func Offset: 0x680
	// Line 21027, Address: 0x3210f4, Func Offset: 0x684
	// Line 21023, Address: 0x3210f8, Func Offset: 0x688
	// Line 21027, Address: 0x3210fc, Func Offset: 0x68c
	// Line 21034, Address: 0x321108, Func Offset: 0x698
	// Line 21027, Address: 0x32110c, Func Offset: 0x69c
	// Line 21034, Address: 0x321110, Func Offset: 0x6a0
	// Line 21027, Address: 0x321114, Func Offset: 0x6a4
	// Line 21034, Address: 0x321118, Func Offset: 0x6a8
	// Line 21035, Address: 0x321124, Func Offset: 0x6b4
	// Line 21036, Address: 0x32113c, Func Offset: 0x6cc
	// Line 21037, Address: 0x321154, Func Offset: 0x6e4
	// Line 21039, Address: 0x32116c, Func Offset: 0x6fc
	// Line 21042, Address: 0x321180, Func Offset: 0x710
	// Line 21043, Address: 0x3211d8, Func Offset: 0x768
	// Line 21044, Address: 0x321230, Func Offset: 0x7c0
	// Line 21045, Address: 0x321294, Func Offset: 0x824
	// Line 21047, Address: 0x3212e0, Func Offset: 0x870
	// Line 21045, Address: 0x3212e4, Func Offset: 0x874
	// Line 21047, Address: 0x3212ec, Func Offset: 0x87c
	// Line 21089, Address: 0x3213e4, Func Offset: 0x974
	// Func End, Address: 0x321580, Func Offset: 0xb10
}

// TimeOutCB__19zPlayerCommentTimerFP10zTimerBase
// Start address: 0x321580
void zPlayerCommentTimer::TimeOutCB(zTimerBase* theTimer)
{
	// Line 338, Address: 0x321580, Func Offset: 0
	// Line 339, Address: 0x321584, Func Offset: 0x4
	// Line 338, Address: 0x321588, Func Offset: 0x8
	// Line 339, Address: 0x32158c, Func Offset: 0xc
	// Line 340, Address: 0x3215e0, Func Offset: 0x60
	// Func End, Address: 0x3215ec, Func Offset: 0x6c
}

// PlayerRotMatchUpdateEnt__FP4xEntP6xScenefPv
// Start address: 0x3215f0
void PlayerRotMatchUpdateEnt(xEnt* ent, float32 dt, void* fdata)
{
	xFFXRotMatchState* rms;
	xCollis* coll;
	int32 hit_it;
	xSurface* surf;
	int32 grounded;
	xVec3* fup;
	xVec3* eup;
	xVec3 nfup;
	xVec3 neup;
	float32 fup_len;
	float32 eup_len;
	float32 fdecl;
	float32 edecl;
	xVec3 raxis;
	float32 rang;
	float32 dang;
	xMat4x3 rot;
	float32 s;
	xVec3* eup;
	xVec3 neup;
	float32 eup_len;
	xVec3 raxis;
	float32 rang;
	float32 dang;
	xMat4x3 rot;
	// Line 20662, Address: 0x3215f0, Func Offset: 0
	// Line 20668, Address: 0x321620, Func Offset: 0x30
	// Line 20672, Address: 0x321628, Func Offset: 0x38
	// Line 20680, Address: 0x321634, Func Offset: 0x44
	// Line 20677, Address: 0x321638, Func Offset: 0x48
	// Line 20679, Address: 0x32163c, Func Offset: 0x4c
	// Line 20681, Address: 0x321640, Func Offset: 0x50
	// Line 20685, Address: 0x321648, Func Offset: 0x58
	// Line 20688, Address: 0x321684, Func Offset: 0x94
	// Line 20691, Address: 0x32168c, Func Offset: 0x9c
	// Line 20692, Address: 0x321698, Func Offset: 0xa8
	// Line 20698, Address: 0x32169c, Func Offset: 0xac
	// Line 20696, Address: 0x3216a0, Func Offset: 0xb0
	// Line 20704, Address: 0x3216a4, Func Offset: 0xb4
	// Line 20705, Address: 0x3216b4, Func Offset: 0xc4
	// Line 20710, Address: 0x3216c0, Func Offset: 0xd0
	// Line 20711, Address: 0x321700, Func Offset: 0x110
	// Line 20710, Address: 0x321708, Func Offset: 0x118
	// Line 20711, Address: 0x32170c, Func Offset: 0x11c
	// Line 20714, Address: 0x321748, Func Offset: 0x158
	// Line 20720, Address: 0x321760, Func Offset: 0x170
	// Line 20721, Address: 0x321764, Func Offset: 0x174
	// Line 20720, Address: 0x321768, Func Offset: 0x178
	// Line 20721, Address: 0x32176c, Func Offset: 0x17c
	// Line 20720, Address: 0x321770, Func Offset: 0x180
	// Line 20721, Address: 0x3217a0, Func Offset: 0x1b0
	// Line 20733, Address: 0x3217a8, Func Offset: 0x1b8
	// Line 20737, Address: 0x321808, Func Offset: 0x218
	// Line 20752, Address: 0x32181c, Func Offset: 0x22c
	// Line 20753, Address: 0x321820, Func Offset: 0x230
	// Line 20752, Address: 0x321828, Func Offset: 0x238
	// Line 20753, Address: 0x321834, Func Offset: 0x244
	// Line 20756, Address: 0x321850, Func Offset: 0x260
	// Line 20759, Address: 0x32185c, Func Offset: 0x26c
	// Line 20760, Address: 0x32186c, Func Offset: 0x27c
	// Line 20762, Address: 0x321884, Func Offset: 0x294
	// Line 20766, Address: 0x321898, Func Offset: 0x2a8
	// Line 20764, Address: 0x3218a0, Func Offset: 0x2b0
	// Line 20766, Address: 0x3218a4, Func Offset: 0x2b4
	// Line 20768, Address: 0x3218a8, Func Offset: 0x2b8
	// Line 20766, Address: 0x3218b4, Func Offset: 0x2c4
	// Line 20768, Address: 0x3218c0, Func Offset: 0x2d0
	// Line 20770, Address: 0x3218c8, Func Offset: 0x2d8
	// Line 20771, Address: 0x321920, Func Offset: 0x330
	// Line 20786, Address: 0x321924, Func Offset: 0x334
	// Line 20789, Address: 0x32193c, Func Offset: 0x34c
	// Line 20790, Address: 0x321948, Func Offset: 0x358
	// Line 20794, Address: 0x321950, Func Offset: 0x360
	// Line 20796, Address: 0x321968, Func Offset: 0x378
	// Line 20800, Address: 0x32196c, Func Offset: 0x37c
	// Line 20809, Address: 0x321978, Func Offset: 0x388
	// Line 20800, Address: 0x321988, Func Offset: 0x398
	// Line 20809, Address: 0x32198c, Func Offset: 0x39c
	// Line 20810, Address: 0x321990, Func Offset: 0x3a0
	// Line 20809, Address: 0x3219a4, Func Offset: 0x3b4
	// Line 20810, Address: 0x3219a8, Func Offset: 0x3b8
	// Line 20812, Address: 0x3219d8, Func Offset: 0x3e8
	// Line 20813, Address: 0x3219ec, Func Offset: 0x3fc
	// Line 20814, Address: 0x3219f0, Func Offset: 0x400
	// Line 20813, Address: 0x3219f8, Func Offset: 0x408
	// Line 20814, Address: 0x321a04, Func Offset: 0x414
	// Line 20817, Address: 0x321a1c, Func Offset: 0x42c
	// Line 20826, Address: 0x321a28, Func Offset: 0x438
	// Line 20817, Address: 0x321a2c, Func Offset: 0x43c
	// Line 20826, Address: 0x321a30, Func Offset: 0x440
	// Line 20817, Address: 0x321a34, Func Offset: 0x444
	// Line 20823, Address: 0x321a4c, Func Offset: 0x45c
	// Line 20826, Address: 0x321a74, Func Offset: 0x484
	// Line 20828, Address: 0x321a80, Func Offset: 0x490
	// Line 20829, Address: 0x321ad8, Func Offset: 0x4e8
	// Line 20834, Address: 0x321ae0, Func Offset: 0x4f0
	// Line 20836, Address: 0x321b18, Func Offset: 0x528
	// Line 20835, Address: 0x321b20, Func Offset: 0x530
	// Line 20837, Address: 0x321b24, Func Offset: 0x534
	// Line 20838, Address: 0x321b28, Func Offset: 0x538
	// Line 20837, Address: 0x321b2c, Func Offset: 0x53c
	// Line 20838, Address: 0x321b30, Func Offset: 0x540
	// Line 20841, Address: 0x321b34, Func Offset: 0x544
	// Line 20842, Address: 0x321b40, Func Offset: 0x550
	// Line 20843, Address: 0x321b44, Func Offset: 0x554
	// Func End, Address: 0x321b70, Func Offset: 0x580
}

// PlayerTeeterCheck__FP4xEntP6xScenef
// Start address: 0x321b70
void PlayerTeeterCheck(xEnt* ent, float32 dt)
{
	int32 i;
	xRay3 ray;
	xCollis crec;
	uint32 i;
	xEnt* fent;
	// Line 20607, Address: 0x321b70, Func Offset: 0
	// Line 20608, Address: 0x321b80, Func Offset: 0x10
	// Line 20609, Address: 0x321b8c, Func Offset: 0x1c
	// Line 20613, Address: 0x321b9c, Func Offset: 0x2c
	// Line 20612, Address: 0x321ba0, Func Offset: 0x30
	// Line 20613, Address: 0x321ba4, Func Offset: 0x34
	// Line 20612, Address: 0x321ba8, Func Offset: 0x38
	// Line 20611, Address: 0x321bac, Func Offset: 0x3c
	// Line 20613, Address: 0x321bb4, Func Offset: 0x44
	// Line 20611, Address: 0x321bb8, Func Offset: 0x48
	// Line 20612, Address: 0x321bbc, Func Offset: 0x4c
	// Line 20611, Address: 0x321bc0, Func Offset: 0x50
	// Line 20612, Address: 0x321bc8, Func Offset: 0x58
	// Line 20613, Address: 0x321bd8, Func Offset: 0x68
	// Line 20614, Address: 0x321be8, Func Offset: 0x78
	// Line 20615, Address: 0x321bfc, Func Offset: 0x8c
	// Line 20616, Address: 0x321c04, Func Offset: 0x94
	// Line 20618, Address: 0x321c0c, Func Offset: 0x9c
	// Line 20620, Address: 0x321c10, Func Offset: 0xa0
	// Line 20621, Address: 0x321c18, Func Offset: 0xa8
	// Line 20623, Address: 0x321c1c, Func Offset: 0xac
	// Line 20621, Address: 0x321c28, Func Offset: 0xb8
	// Line 20623, Address: 0x321c2c, Func Offset: 0xbc
	// Line 20659, Address: 0x321c38, Func Offset: 0xc8
	// Func End, Address: 0x321c40, Func Offset: 0xd0
}

// PlayerSwingUpdate__FP4xEntfff
// Start address: 0x321c40
void PlayerSwingUpdate(xEnt* ent, float32 mag, float32 angle, float32 dt)
{
	float32 hangDist;
	xVec3 pos;
	xVec3 unitHang;
	xVec3 accel;
	xVec3 unitDefl;
	xVec3 unitVel;
	int32 i;
	xVec3 unitAccel;
	float32 lerpDiff;
	float32 newLerp;
	float32 curFactor;
	// Line 20455, Address: 0x321c40, Func Offset: 0
	// Line 20465, Address: 0x321c54, Func Offset: 0x14
	// Line 20455, Address: 0x321c58, Func Offset: 0x18
	// Line 20465, Address: 0x321c80, Func Offset: 0x40
	// Line 20467, Address: 0x321c84, Func Offset: 0x44
	// Line 20471, Address: 0x321c94, Func Offset: 0x54
	// Line 20465, Address: 0x321c98, Func Offset: 0x58
	// Line 20467, Address: 0x321cb0, Func Offset: 0x70
	// Line 20465, Address: 0x321cb4, Func Offset: 0x74
	// Line 20467, Address: 0x321cb8, Func Offset: 0x78
	// Line 20471, Address: 0x321cbc, Func Offset: 0x7c
	// Line 20472, Address: 0x321cd0, Func Offset: 0x90
	// Line 20473, Address: 0x321cd4, Func Offset: 0x94
	// Line 20471, Address: 0x321cd8, Func Offset: 0x98
	// Line 20473, Address: 0x321ce0, Func Offset: 0xa0
	// Line 20475, Address: 0x321cf4, Func Offset: 0xb4
	// Line 20473, Address: 0x321cfc, Func Offset: 0xbc
	// Line 20475, Address: 0x321d04, Func Offset: 0xc4
	// Line 20477, Address: 0x321d10, Func Offset: 0xd0
	// Line 20593, Address: 0x321d18, Func Offset: 0xd8
	// Line 20477, Address: 0x321d3c, Func Offset: 0xfc
	// Line 20478, Address: 0x321d44, Func Offset: 0x104
	// Line 20489, Address: 0x321d54, Func Offset: 0x114
	// Line 20491, Address: 0x321d68, Func Offset: 0x128
	// Line 20494, Address: 0x321d78, Func Offset: 0x138
	// Line 20495, Address: 0x321d7c, Func Offset: 0x13c
	// Line 20494, Address: 0x321d80, Func Offset: 0x140
	// Line 20495, Address: 0x321d94, Func Offset: 0x154
	// Line 20494, Address: 0x321d98, Func Offset: 0x158
	// Line 20495, Address: 0x321dcc, Func Offset: 0x18c
	// Line 20496, Address: 0x321ddc, Func Offset: 0x19c
	// Line 20495, Address: 0x321de0, Func Offset: 0x1a0
	// Line 20496, Address: 0x321de4, Func Offset: 0x1a4
	// Line 20504, Address: 0x321df0, Func Offset: 0x1b0
	// Line 20496, Address: 0x321df4, Func Offset: 0x1b4
	// Line 20504, Address: 0x321df8, Func Offset: 0x1b8
	// Line 20496, Address: 0x321dfc, Func Offset: 0x1bc
	// Line 20495, Address: 0x321e04, Func Offset: 0x1c4
	// Line 20496, Address: 0x321e08, Func Offset: 0x1c8
	// Line 20498, Address: 0x321e0c, Func Offset: 0x1cc
	// Line 20496, Address: 0x321e10, Func Offset: 0x1d0
	// Line 20498, Address: 0x321e14, Func Offset: 0x1d4
	// Line 20499, Address: 0x321e18, Func Offset: 0x1d8
	// Line 20496, Address: 0x321e20, Func Offset: 0x1e0
	// Line 20498, Address: 0x321e28, Func Offset: 0x1e8
	// Line 20499, Address: 0x321e30, Func Offset: 0x1f0
	// Line 20500, Address: 0x321e38, Func Offset: 0x1f8
	// Line 20498, Address: 0x321e40, Func Offset: 0x200
	// Line 20499, Address: 0x321e44, Func Offset: 0x204
	// Line 20500, Address: 0x321e48, Func Offset: 0x208
	// Line 20504, Address: 0x321e50, Func Offset: 0x210
	// Line 20505, Address: 0x321e80, Func Offset: 0x240
	// Line 20504, Address: 0x321e84, Func Offset: 0x244
	// Line 20505, Address: 0x321e88, Func Offset: 0x248
	// Line 20504, Address: 0x321e8c, Func Offset: 0x24c
	// Line 20505, Address: 0x321e94, Func Offset: 0x254
	// Line 20504, Address: 0x321e98, Func Offset: 0x258
	// Line 20505, Address: 0x321ea0, Func Offset: 0x260
	// Line 20507, Address: 0x321ea8, Func Offset: 0x268
	// Line 20513, Address: 0x321eb4, Func Offset: 0x274
	// Line 20518, Address: 0x321f0c, Func Offset: 0x2cc
	// Line 20523, Address: 0x321f10, Func Offset: 0x2d0
	// Line 20518, Address: 0x321f14, Func Offset: 0x2d4
	// Line 20521, Address: 0x321f18, Func Offset: 0x2d8
	// Line 20518, Address: 0x321f1c, Func Offset: 0x2dc
	// Line 20522, Address: 0x321f20, Func Offset: 0x2e0
	// Line 20521, Address: 0x321f24, Func Offset: 0x2e4
	// Line 20523, Address: 0x321f2c, Func Offset: 0x2ec
	// Line 20521, Address: 0x321f30, Func Offset: 0x2f0
	// Line 20518, Address: 0x321f38, Func Offset: 0x2f8
	// Line 20522, Address: 0x321f3c, Func Offset: 0x2fc
	// Line 20527, Address: 0x321f40, Func Offset: 0x300
	// Line 20522, Address: 0x321f44, Func Offset: 0x304
	// Line 20527, Address: 0x321f48, Func Offset: 0x308
	// Line 20521, Address: 0x321f4c, Func Offset: 0x30c
	// Line 20523, Address: 0x321f54, Func Offset: 0x314
	// Line 20526, Address: 0x321f58, Func Offset: 0x318
	// Line 20518, Address: 0x321f5c, Func Offset: 0x31c
	// Line 20522, Address: 0x321f60, Func Offset: 0x320
	// Line 20523, Address: 0x321f64, Func Offset: 0x324
	// Line 20522, Address: 0x321f68, Func Offset: 0x328
	// Line 20523, Address: 0x321f6c, Func Offset: 0x32c
	// Line 20527, Address: 0x321f70, Func Offset: 0x330
	// Line 20523, Address: 0x321f74, Func Offset: 0x334
	// Line 20527, Address: 0x321f78, Func Offset: 0x338
	// Line 20523, Address: 0x321f7c, Func Offset: 0x33c
	// Line 20526, Address: 0x321f80, Func Offset: 0x340
	// Line 20521, Address: 0x321f8c, Func Offset: 0x34c
	// Line 20522, Address: 0x321f90, Func Offset: 0x350
	// Line 20526, Address: 0x321f94, Func Offset: 0x354
	// Line 20527, Address: 0x321f9c, Func Offset: 0x35c
	// Line 20528, Address: 0x321fb0, Func Offset: 0x370
	// Line 20529, Address: 0x321fbc, Func Offset: 0x37c
	// Line 20530, Address: 0x321fc4, Func Offset: 0x384
	// Line 20528, Address: 0x321fcc, Func Offset: 0x38c
	// Line 20529, Address: 0x321fd0, Func Offset: 0x390
	// Line 20530, Address: 0x321fd8, Func Offset: 0x398
	// Line 20528, Address: 0x321fe0, Func Offset: 0x3a0
	// Line 20529, Address: 0x321fe4, Func Offset: 0x3a4
	// Line 20530, Address: 0x321fe8, Func Offset: 0x3a8
	// Line 20534, Address: 0x321fec, Func Offset: 0x3ac
	// Line 20540, Address: 0x321ff0, Func Offset: 0x3b0
	// Line 20534, Address: 0x321ff4, Func Offset: 0x3b4
	// Line 20540, Address: 0x321ff8, Func Offset: 0x3b8
	// Line 20534, Address: 0x321ffc, Func Offset: 0x3bc
	// Line 20535, Address: 0x322004, Func Offset: 0x3c4
	// Line 20536, Address: 0x322008, Func Offset: 0x3c8
	// Line 20535, Address: 0x32200c, Func Offset: 0x3cc
	// Line 20534, Address: 0x322014, Func Offset: 0x3d4
	// Line 20535, Address: 0x32201c, Func Offset: 0x3dc
	// Line 20534, Address: 0x322020, Func Offset: 0x3e0
	// Line 20536, Address: 0x322024, Func Offset: 0x3e4
	// Line 20535, Address: 0x32202c, Func Offset: 0x3ec
	// Line 20536, Address: 0x322030, Func Offset: 0x3f0
	// Line 20535, Address: 0x322034, Func Offset: 0x3f4
	// Line 20539, Address: 0x322038, Func Offset: 0x3f8
	// Line 20536, Address: 0x32203c, Func Offset: 0x3fc
	// Line 20539, Address: 0x322044, Func Offset: 0x404
	// Line 20540, Address: 0x322080, Func Offset: 0x440
	// Line 20541, Address: 0x322088, Func Offset: 0x448
	// Line 20542, Address: 0x3220a4, Func Offset: 0x464
	// Line 20545, Address: 0x3220c8, Func Offset: 0x488
	// Line 20547, Address: 0x3220cc, Func Offset: 0x48c
	// Line 20546, Address: 0x3220d4, Func Offset: 0x494
	// Line 20545, Address: 0x3220d8, Func Offset: 0x498
	// Line 20552, Address: 0x3220dc, Func Offset: 0x49c
	// Line 20545, Address: 0x3220e0, Func Offset: 0x4a0
	// Line 20546, Address: 0x3220e4, Func Offset: 0x4a4
	// Line 20547, Address: 0x3220ec, Func Offset: 0x4ac
	// Line 20553, Address: 0x3220f0, Func Offset: 0x4b0
	// Line 20561, Address: 0x3220f4, Func Offset: 0x4b4
	// Line 20546, Address: 0x3220f8, Func Offset: 0x4b8
	// Line 20558, Address: 0x322100, Func Offset: 0x4c0
	// Line 20547, Address: 0x322104, Func Offset: 0x4c4
	// Line 20546, Address: 0x322108, Func Offset: 0x4c8
	// Line 20547, Address: 0x322114, Func Offset: 0x4d4
	// Line 20546, Address: 0x322118, Func Offset: 0x4d8
	// Line 20552, Address: 0x32211c, Func Offset: 0x4dc
	// Line 20561, Address: 0x322120, Func Offset: 0x4e0
	// Line 20552, Address: 0x322124, Func Offset: 0x4e4
	// Line 20553, Address: 0x322148, Func Offset: 0x508
	// Line 20555, Address: 0x32218c, Func Offset: 0x54c
	// Line 20558, Address: 0x3221a0, Func Offset: 0x560
	// Line 20561, Address: 0x3221b4, Func Offset: 0x574
	// Line 20562, Address: 0x3221d4, Func Offset: 0x594
	// Line 20568, Address: 0x3221f8, Func Offset: 0x5b8
	// Line 20562, Address: 0x322210, Func Offset: 0x5d0
	// Line 20575, Address: 0x322214, Func Offset: 0x5d4
	// Line 20568, Address: 0x32221c, Func Offset: 0x5dc
	// Line 20575, Address: 0x322224, Func Offset: 0x5e4
	// Line 20568, Address: 0x322228, Func Offset: 0x5e8
	// Line 20562, Address: 0x322230, Func Offset: 0x5f0
	// Line 20568, Address: 0x322234, Func Offset: 0x5f4
	// Line 20562, Address: 0x32224c, Func Offset: 0x60c
	// Line 20568, Address: 0x322250, Func Offset: 0x610
	// Line 20572, Address: 0x32225c, Func Offset: 0x61c
	// Line 20573, Address: 0x322264, Func Offset: 0x624
	// Line 20575, Address: 0x322268, Func Offset: 0x628
	// Line 20573, Address: 0x32226c, Func Offset: 0x62c
	// Line 20574, Address: 0x322284, Func Offset: 0x644
	// Line 20575, Address: 0x322290, Func Offset: 0x650
	// Line 20577, Address: 0x3222c0, Func Offset: 0x680
	// Line 20580, Address: 0x3223dc, Func Offset: 0x79c
	// Line 20586, Address: 0x3223e4, Func Offset: 0x7a4
	// Line 20591, Address: 0x3223ec, Func Offset: 0x7ac
	// Line 20592, Address: 0x322450, Func Offset: 0x810
	// Line 20593, Address: 0x322458, Func Offset: 0x818
	// Line 20484, Address: 0x322490, Func Offset: 0x850
	// Line 20593, Address: 0x32249c, Func Offset: 0x85c
	// Line 20484, Address: 0x3224a0, Func Offset: 0x860
	// Line 20593, Address: 0x3224a4, Func Offset: 0x864
	// Line 20484, Address: 0x3224a8, Func Offset: 0x868
	// Line 20593, Address: 0x3224ac, Func Offset: 0x86c
	// Line 20484, Address: 0x3224b0, Func Offset: 0x870
	// Line 20593, Address: 0x3224b4, Func Offset: 0x874
	// Line 20484, Address: 0x3224b8, Func Offset: 0x878
	// Line 20593, Address: 0x3224c8, Func Offset: 0x888
	// Line 20509, Address: 0x3224d4, Func Offset: 0x894
	// Line 20593, Address: 0x3224e0, Func Offset: 0x8a0
	// Line 20575, Address: 0x3224f0, Func Offset: 0x8b0
	// Line 20593, Address: 0x3224f4, Func Offset: 0x8b4
	// Func End, Address: 0x32253c, Func Offset: 0x8fc
}

// zEntPlayerEventCB__FP5xBaseP5xBaseUiPCfP5xBaseUi
// Start address: 0x322540
void zEntPlayerEventCB(xBase* from, xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget)
{
	eSNDCurrentPlayer gCurrentPlayer'558;
	int32 iParam;
	int32 num;
	int32 s;
	uint32 p;
	zEnt* z;
	int8* astatename;
	zShrapnelAsset* shrap;
	xVec3 currVel;
	eSNDCurrentPlayer oldPlayer;
	// Line 20081, Address: 0x322540, Func Offset: 0
	// Line 20086, Address: 0x322544, Func Offset: 0x4
	// Line 20081, Address: 0x322548, Func Offset: 0x8
	// Line 20086, Address: 0x322560, Func Offset: 0x20
	// Line 20090, Address: 0x32269c, Func Offset: 0x15c
	// Line 20097, Address: 0x32286c, Func Offset: 0x32c
	// Line 20098, Address: 0x3228c0, Func Offset: 0x380
	// Line 20099, Address: 0x3228c4, Func Offset: 0x384
	// Line 20098, Address: 0x3228c8, Func Offset: 0x388
	// Line 20101, Address: 0x3228cc, Func Offset: 0x38c
	// Line 20099, Address: 0x3228d0, Func Offset: 0x390
	// Line 20100, Address: 0x3228d8, Func Offset: 0x398
	// Line 20101, Address: 0x3228dc, Func Offset: 0x39c
	// Line 20102, Address: 0x3228e4, Func Offset: 0x3a4
	// Line 20107, Address: 0x3228ec, Func Offset: 0x3ac
	// Line 20109, Address: 0x3228f8, Func Offset: 0x3b8
	// Line 20108, Address: 0x3228fc, Func Offset: 0x3bc
	// Line 20109, Address: 0x322900, Func Offset: 0x3c0
	// Line 20110, Address: 0x322908, Func Offset: 0x3c8
	// Line 20113, Address: 0x322910, Func Offset: 0x3d0
	// Line 20114, Address: 0x322920, Func Offset: 0x3e0
	// Line 20115, Address: 0x322928, Func Offset: 0x3e8
	// Line 20117, Address: 0x32292c, Func Offset: 0x3ec
	// Line 20131, Address: 0x322934, Func Offset: 0x3f4
	// Line 20133, Address: 0x322970, Func Offset: 0x430
	// Line 20141, Address: 0x32297c, Func Offset: 0x43c
	// Line 20142, Address: 0x3229b8, Func Offset: 0x478
	// Line 20150, Address: 0x322a00, Func Offset: 0x4c0
	// Line 20153, Address: 0x322a1c, Func Offset: 0x4dc
	// Line 20154, Address: 0x322a28, Func Offset: 0x4e8
	// Line 20156, Address: 0x322a30, Func Offset: 0x4f0
	// Line 20157, Address: 0x322a38, Func Offset: 0x4f8
	// Line 20161, Address: 0x322a40, Func Offset: 0x500
	// Line 20166, Address: 0x322a50, Func Offset: 0x510
	// Line 20168, Address: 0x322a6c, Func Offset: 0x52c
	// Line 20170, Address: 0x322a80, Func Offset: 0x540
	// Line 20174, Address: 0x322a94, Func Offset: 0x554
	// Line 20176, Address: 0x322aa4, Func Offset: 0x564
	// Line 20178, Address: 0x322ab0, Func Offset: 0x570
	// Line 20179, Address: 0x322abc, Func Offset: 0x57c
	// Line 20184, Address: 0x322ad0, Func Offset: 0x590
	// Line 20185, Address: 0x322ad4, Func Offset: 0x594
	// Line 20186, Address: 0x322ad8, Func Offset: 0x598
	// Line 20185, Address: 0x322adc, Func Offset: 0x59c
	// Line 20186, Address: 0x322ae0, Func Offset: 0x5a0
	// Line 20184, Address: 0x322ae4, Func Offset: 0x5a4
	// Line 20185, Address: 0x322aec, Func Offset: 0x5ac
	// Line 20186, Address: 0x322af0, Func Offset: 0x5b0
	// Line 20185, Address: 0x322af4, Func Offset: 0x5b4
	// Line 20186, Address: 0x322af8, Func Offset: 0x5b8
	// Line 20185, Address: 0x322afc, Func Offset: 0x5bc
	// Line 20187, Address: 0x322b00, Func Offset: 0x5c0
	// Line 20196, Address: 0x322b08, Func Offset: 0x5c8
	// Line 20201, Address: 0x322b10, Func Offset: 0x5d0
	// Line 20205, Address: 0x322b1c, Func Offset: 0x5dc
	// Line 20206, Address: 0x322b58, Func Offset: 0x618
	// Line 20212, Address: 0x322b60, Func Offset: 0x620
	// Line 20215, Address: 0x322b74, Func Offset: 0x634
	// Line 20218, Address: 0x322b84, Func Offset: 0x644
	// Line 20221, Address: 0x322b8c, Func Offset: 0x64c
	// Line 20222, Address: 0x322ba0, Func Offset: 0x660
	// Line 20225, Address: 0x322ba8, Func Offset: 0x668
	// Line 20226, Address: 0x322c0c, Func Offset: 0x6cc
	// Line 20230, Address: 0x322c14, Func Offset: 0x6d4
	// Line 20231, Address: 0x322c2c, Func Offset: 0x6ec
	// Line 20233, Address: 0x322c7c, Func Offset: 0x73c
	// Line 20231, Address: 0x322c90, Func Offset: 0x750
	// Line 20233, Address: 0x322c98, Func Offset: 0x758
	// Line 20235, Address: 0x322ce0, Func Offset: 0x7a0
	// Line 20238, Address: 0x322ce8, Func Offset: 0x7a8
	// Line 20239, Address: 0x322d44, Func Offset: 0x804
	// Line 20243, Address: 0x322d4c, Func Offset: 0x80c
	// Line 20246, Address: 0x322d68, Func Offset: 0x828
	// Line 20247, Address: 0x322d7c, Func Offset: 0x83c
	// Line 20248, Address: 0x322d84, Func Offset: 0x844
	// Line 20253, Address: 0x322d98, Func Offset: 0x858
	// Line 20256, Address: 0x322db4, Func Offset: 0x874
	// Line 20257, Address: 0x322dc8, Func Offset: 0x888
	// Line 20268, Address: 0x322ddc, Func Offset: 0x89c
	// Line 20281, Address: 0x322df0, Func Offset: 0x8b0
	// Line 20291, Address: 0x322df8, Func Offset: 0x8b8
	// Line 20286, Address: 0x322dfc, Func Offset: 0x8bc
	// Line 20290, Address: 0x322e04, Func Offset: 0x8c4
	// Line 20291, Address: 0x322e08, Func Offset: 0x8c8
	// Line 20290, Address: 0x322e0c, Func Offset: 0x8cc
	// Line 20286, Address: 0x322e14, Func Offset: 0x8d4
	// Line 20291, Address: 0x322e18, Func Offset: 0x8d8
	// Line 20286, Address: 0x322e1c, Func Offset: 0x8dc
	// Line 20291, Address: 0x322e20, Func Offset: 0x8e0
	// Line 20286, Address: 0x322e24, Func Offset: 0x8e4
	// Line 20291, Address: 0x322e28, Func Offset: 0x8e8
	// Line 20286, Address: 0x322e2c, Func Offset: 0x8ec
	// Line 20291, Address: 0x322e30, Func Offset: 0x8f0
	// Line 20286, Address: 0x322e34, Func Offset: 0x8f4
	// Line 20287, Address: 0x322e38, Func Offset: 0x8f8
	// Line 20290, Address: 0x322e5c, Func Offset: 0x91c
	// Line 20291, Address: 0x322e78, Func Offset: 0x938
	// Line 20292, Address: 0x322e88, Func Offset: 0x948
	// Line 20295, Address: 0x322e8c, Func Offset: 0x94c
	// Line 20299, Address: 0x322e94, Func Offset: 0x954
	// Line 20305, Address: 0x322eb0, Func Offset: 0x970
	// Line 20306, Address: 0x322eb4, Func Offset: 0x974
	// Line 20305, Address: 0x322ebc, Func Offset: 0x97c
	// Line 20306, Address: 0x322ecc, Func Offset: 0x98c
	// Line 20309, Address: 0x322ef4, Func Offset: 0x9b4
	// Line 20310, Address: 0x322f04, Func Offset: 0x9c4
	// Line 20312, Address: 0x322f0c, Func Offset: 0x9cc
	// Line 20310, Address: 0x322f14, Func Offset: 0x9d4
	// Line 20312, Address: 0x322f18, Func Offset: 0x9d8
	// Line 20317, Address: 0x322f1c, Func Offset: 0x9dc
	// Line 20318, Address: 0x322f2c, Func Offset: 0x9ec
	// Line 20321, Address: 0x322f38, Func Offset: 0x9f8
	// Line 20324, Address: 0x322f40, Func Offset: 0xa00
	// Line 20325, Address: 0x322f48, Func Offset: 0xa08
	// Line 20329, Address: 0x322f50, Func Offset: 0xa10
	// Line 20328, Address: 0x322f54, Func Offset: 0xa14
	// Line 20329, Address: 0x322f5c, Func Offset: 0xa1c
	// Line 20330, Address: 0x322f64, Func Offset: 0xa24
	// Line 20333, Address: 0x322f6c, Func Offset: 0xa2c
	// Line 20340, Address: 0x322f84, Func Offset: 0xa44
	// Line 20339, Address: 0x322f90, Func Offset: 0xa50
	// Line 20340, Address: 0x322f98, Func Offset: 0xa58
	// Line 20341, Address: 0x322fd8, Func Offset: 0xa98
	// Line 20342, Address: 0x32308c, Func Offset: 0xb4c
	// Line 20341, Address: 0x323090, Func Offset: 0xb50
	// Line 20342, Address: 0x323094, Func Offset: 0xb54
	// Line 20341, Address: 0x323098, Func Offset: 0xb58
	// Line 20342, Address: 0x3230a8, Func Offset: 0xb68
	// Line 20343, Address: 0x3230ac, Func Offset: 0xb6c
	// Line 20341, Address: 0x3230b0, Func Offset: 0xb70
	// Line 20342, Address: 0x3230b4, Func Offset: 0xb74
	// Line 20341, Address: 0x3230b8, Func Offset: 0xb78
	// Line 20343, Address: 0x3230c0, Func Offset: 0xb80
	// Line 20350, Address: 0x3230d8, Func Offset: 0xb98
	// Line 20351, Address: 0x3230f0, Func Offset: 0xbb0
	// Line 20352, Address: 0x3230fc, Func Offset: 0xbbc
	// Line 20353, Address: 0x3231c4, Func Offset: 0xc84
	// Line 20352, Address: 0x3231c8, Func Offset: 0xc88
	// Line 20353, Address: 0x3231cc, Func Offset: 0xc8c
	// Line 20352, Address: 0x3231d0, Func Offset: 0xc90
	// Line 20355, Address: 0x3231d4, Func Offset: 0xc94
	// Line 20358, Address: 0x3231dc, Func Offset: 0xc9c
	// Line 20359, Address: 0x3231e0, Func Offset: 0xca0
	// Line 20364, Address: 0x3231e8, Func Offset: 0xca8
	// Line 20366, Address: 0x3231fc, Func Offset: 0xcbc
	// Line 20369, Address: 0x323208, Func Offset: 0xcc8
	// Line 20366, Address: 0x32320c, Func Offset: 0xccc
	// Line 20369, Address: 0x323210, Func Offset: 0xcd0
	// Line 20366, Address: 0x323214, Func Offset: 0xcd4
	// Line 20369, Address: 0x323228, Func Offset: 0xce8
	// Line 20366, Address: 0x32322c, Func Offset: 0xcec
	// Line 20369, Address: 0x323240, Func Offset: 0xd00
	// Line 20371, Address: 0x323254, Func Offset: 0xd14
	// Line 20377, Address: 0x32325c, Func Offset: 0xd1c
	// Line 20380, Address: 0x323278, Func Offset: 0xd38
	// Line 20382, Address: 0x323288, Func Offset: 0xd48
	// Line 20383, Address: 0x323290, Func Offset: 0xd50
	// Line 20385, Address: 0x3232d8, Func Offset: 0xd98
	// Line 20388, Address: 0x3232e0, Func Offset: 0xda0
	// Line 20389, Address: 0x3232f8, Func Offset: 0xdb8
	// Line 20390, Address: 0x323330, Func Offset: 0xdf0
	// Line 20392, Address: 0x323338, Func Offset: 0xdf8
	// Line 20393, Address: 0x323350, Func Offset: 0xe10
	// Line 20394, Address: 0x323388, Func Offset: 0xe48
	// Line 20414, Address: 0x323390, Func Offset: 0xe50
	// Line 20415, Address: 0x3233c8, Func Offset: 0xe88
	// Line 20417, Address: 0x3233d0, Func Offset: 0xe90
	// Line 20418, Address: 0x323408, Func Offset: 0xec8
	// Line 20420, Address: 0x323410, Func Offset: 0xed0
	// Line 20421, Address: 0x323448, Func Offset: 0xf08
	// Line 20423, Address: 0x323454, Func Offset: 0xf14
	// Line 20425, Address: 0x323460, Func Offset: 0xf20
	// Line 20427, Address: 0x323488, Func Offset: 0xf48
	// Line 20428, Address: 0x323490, Func Offset: 0xf50
	// Line 20430, Address: 0x3234ac, Func Offset: 0xf6c
	// Line 20436, Address: 0x323524, Func Offset: 0xfe4
	// Line 20438, Address: 0x32352c, Func Offset: 0xfec
	// Line 20439, Address: 0x323534, Func Offset: 0xff4
	// Line 20441, Address: 0x32353c, Func Offset: 0xffc
	// Line 20442, Address: 0x323540, Func Offset: 0x1000
	// Line 20444, Address: 0x323548, Func Offset: 0x1008
	// Line 20445, Address: 0x323554, Func Offset: 0x1014
	// Line 20450, Address: 0x32356c, Func Offset: 0x102c
	// Line 20118, Address: 0x323574, Func Offset: 0x1034
	// Line 20450, Address: 0x323578, Func Offset: 0x1038
	// Line 20121, Address: 0x3235a0, Func Offset: 0x1060
	// Line 20450, Address: 0x3235ac, Func Offset: 0x106c
	// Line 20125, Address: 0x3235b4, Func Offset: 0x1074
	// Line 20450, Address: 0x3235b8, Func Offset: 0x1078
	// Line 20126, Address: 0x3235c4, Func Offset: 0x1084
	// Line 20450, Address: 0x3235c8, Func Offset: 0x1088
	// Line 20126, Address: 0x3235cc, Func Offset: 0x108c
	// Line 20450, Address: 0x3235d4, Func Offset: 0x1094
	// Line 20126, Address: 0x323600, Func Offset: 0x10c0
	// Line 20450, Address: 0x323604, Func Offset: 0x10c4
	// Line 20126, Address: 0x32360c, Func Offset: 0x10cc
	// Line 20450, Address: 0x323614, Func Offset: 0x10d4
	// Line 20126, Address: 0x323644, Func Offset: 0x1104
	// Line 20450, Address: 0x323648, Func Offset: 0x1108
	// Line 20126, Address: 0x32365c, Func Offset: 0x111c
	// Line 20450, Address: 0x323668, Func Offset: 0x1128
	// Line 20126, Address: 0x323678, Func Offset: 0x1138
	// Line 20450, Address: 0x32367c, Func Offset: 0x113c
	// Line 20126, Address: 0x323680, Func Offset: 0x1140
	// Line 20450, Address: 0x323684, Func Offset: 0x1144
	// Line 20126, Address: 0x32368c, Func Offset: 0x114c
	// Line 20450, Address: 0x323690, Func Offset: 0x1150
	// Line 20130, Address: 0x32369c, Func Offset: 0x115c
	// Line 20122, Address: 0x3236a4, Func Offset: 0x1164
	// Line 20450, Address: 0x3236a8, Func Offset: 0x1168
	// Line 20122, Address: 0x3236b8, Func Offset: 0x1178
	// Line 20450, Address: 0x3236bc, Func Offset: 0x117c
	// Line 20123, Address: 0x3236c8, Func Offset: 0x1188
	// Line 20450, Address: 0x3236d0, Func Offset: 0x1190
	// Line 20123, Address: 0x3236d8, Func Offset: 0x1198
	// Line 20450, Address: 0x3236dc, Func Offset: 0x119c
	// Line 20123, Address: 0x3236fc, Func Offset: 0x11bc
	// Line 20450, Address: 0x323700, Func Offset: 0x11c0
	// Line 20123, Address: 0x323708, Func Offset: 0x11c8
	// Line 20450, Address: 0x323710, Func Offset: 0x11d0
	// Line 20123, Address: 0x323740, Func Offset: 0x1200
	// Line 20450, Address: 0x323744, Func Offset: 0x1204
	// Line 20123, Address: 0x323758, Func Offset: 0x1218
	// Line 20450, Address: 0x323764, Func Offset: 0x1224
	// Line 20123, Address: 0x323774, Func Offset: 0x1234
	// Line 20450, Address: 0x323778, Func Offset: 0x1238
	// Line 20123, Address: 0x32377c, Func Offset: 0x123c
	// Line 20450, Address: 0x323780, Func Offset: 0x1240
	// Line 20123, Address: 0x323788, Func Offset: 0x1248
	// Line 20450, Address: 0x32378c, Func Offset: 0x124c
	// Line 20125, Address: 0x323798, Func Offset: 0x1258
	// Line 20123, Address: 0x3237a0, Func Offset: 0x1260
	// Line 20450, Address: 0x3237a4, Func Offset: 0x1264
	// Line 20126, Address: 0x3237b0, Func Offset: 0x1270
	// Line 20450, Address: 0x3237b4, Func Offset: 0x1274
	// Line 20131, Address: 0x3237c4, Func Offset: 0x1284
	// Line 20450, Address: 0x3237c8, Func Offset: 0x1288
	// Line 20131, Address: 0x3237e0, Func Offset: 0x12a0
	// Line 20450, Address: 0x3237e8, Func Offset: 0x12a8
	// Line 20142, Address: 0x3237ec, Func Offset: 0x12ac
	// Line 20450, Address: 0x3237f0, Func Offset: 0x12b0
	// Line 20142, Address: 0x323804, Func Offset: 0x12c4
	// Line 20450, Address: 0x323808, Func Offset: 0x12c8
	// Line 20142, Address: 0x323814, Func Offset: 0x12d4
	// Line 20450, Address: 0x32381c, Func Offset: 0x12dc
	// Line 20142, Address: 0x323820, Func Offset: 0x12e0
	// Line 20450, Address: 0x323824, Func Offset: 0x12e4
	// Line 20142, Address: 0x32382c, Func Offset: 0x12ec
	// Line 20450, Address: 0x323830, Func Offset: 0x12f0
	// Line 20144, Address: 0x323844, Func Offset: 0x1304
	// Line 20450, Address: 0x32384c, Func Offset: 0x130c
	// Line 20177, Address: 0x32385c, Func Offset: 0x131c
	// Line 20450, Address: 0x32386c, Func Offset: 0x132c
	// Line 20214, Address: 0x323870, Func Offset: 0x1330
	// Line 20450, Address: 0x323878, Func Offset: 0x1338
	// Line 20225, Address: 0x32388c, Func Offset: 0x134c
	// Line 20450, Address: 0x323890, Func Offset: 0x1350
	// Line 20225, Address: 0x32389c, Func Offset: 0x135c
	// Line 20450, Address: 0x3238a4, Func Offset: 0x1364
	// Line 20270, Address: 0x3238c4, Func Offset: 0x1384
	// Line 20450, Address: 0x3238c8, Func Offset: 0x1388
	// Line 20279, Address: 0x3238d8, Func Offset: 0x1398
	// Line 20450, Address: 0x3238dc, Func Offset: 0x139c
	// Line 20280, Address: 0x32391c, Func Offset: 0x13dc
	// Line 20450, Address: 0x323924, Func Offset: 0x13e4
	// Line 20345, Address: 0x323934, Func Offset: 0x13f4
	// Line 20450, Address: 0x323938, Func Offset: 0x13f8
	// Line 20347, Address: 0x32393c, Func Offset: 0x13fc
	// Line 20378, Address: 0x323944, Func Offset: 0x1404
	// Line 20450, Address: 0x323950, Func Offset: 0x1410
	// Func End, Address: 0x323974, Func Offset: 0x1434
}

// zEntPlayerCollide__FP4xEntP6xScenef
// Start address: 0x323980
void zEntPlayerCollide(xEnt* ent, xScene* sc, float32 dt)
{
	xCollis* colls;
	xCollis* cend;
	xCollis* c;
	// Line 19903, Address: 0x323980, Func Offset: 0
	// Line 19918, Address: 0x323984, Func Offset: 0x4
	// Line 19903, Address: 0x323988, Func Offset: 0x8
	// Line 19918, Address: 0x3239a4, Func Offset: 0x24
	// Line 19903, Address: 0x3239a8, Func Offset: 0x28
	// Line 19918, Address: 0x3239ac, Func Offset: 0x2c
	// Line 19916, Address: 0x3239b0, Func Offset: 0x30
	// Line 19918, Address: 0x3239b4, Func Offset: 0x34
	// Line 19922, Address: 0x323a10, Func Offset: 0x90
	// Line 19918, Address: 0x323a14, Func Offset: 0x94
	// Line 19922, Address: 0x323a18, Func Offset: 0x98
	// Line 19924, Address: 0x323a28, Func Offset: 0xa8
	// Line 19938, Address: 0x323a38, Func Offset: 0xb8
	// Line 19941, Address: 0x323a4c, Func Offset: 0xcc
	// Line 19975, Address: 0x323a60, Func Offset: 0xe0
	// Line 20004, Address: 0x323a74, Func Offset: 0xf4
	// Line 20009, Address: 0x323a84, Func Offset: 0x104
	// Line 20008, Address: 0x323a88, Func Offset: 0x108
	// Line 20010, Address: 0x323a8c, Func Offset: 0x10c
	// Line 20009, Address: 0x323a90, Func Offset: 0x110
	// Line 20010, Address: 0x323aa8, Func Offset: 0x128
	// Line 20012, Address: 0x323ab4, Func Offset: 0x134
	// Line 20011, Address: 0x323ab8, Func Offset: 0x138
	// Line 20014, Address: 0x323acc, Func Offset: 0x14c
	// Line 20024, Address: 0x323ae0, Func Offset: 0x160
	// Line 20027, Address: 0x323af0, Func Offset: 0x170
	// Line 19925, Address: 0x323afc, Func Offset: 0x17c
	// Line 20027, Address: 0x323b08, Func Offset: 0x188
	// Line 19925, Address: 0x323b24, Func Offset: 0x1a4
	// Line 20027, Address: 0x323b28, Func Offset: 0x1a8
	// Line 19925, Address: 0x323b30, Func Offset: 0x1b0
	// Line 20027, Address: 0x323b38, Func Offset: 0x1b8
	// Line 19925, Address: 0x323b48, Func Offset: 0x1c8
	// Line 20027, Address: 0x323b5c, Func Offset: 0x1dc
	// Line 19925, Address: 0x323b64, Func Offset: 0x1e4
	// Line 20027, Address: 0x323b68, Func Offset: 0x1e8
	// Line 19925, Address: 0x323b88, Func Offset: 0x208
	// Line 20027, Address: 0x323b94, Func Offset: 0x214
	// Line 19939, Address: 0x323bac, Func Offset: 0x22c
	// Line 20027, Address: 0x323bb4, Func Offset: 0x234
	// Line 19942, Address: 0x323bc4, Func Offset: 0x244
	// Line 20027, Address: 0x323bcc, Func Offset: 0x24c
	// Line 20012, Address: 0x323be0, Func Offset: 0x260
	// Line 20027, Address: 0x323bf0, Func Offset: 0x270
	// Func End, Address: 0x323c10, Func Offset: 0x290
}

// PlayerCollsSelectDepen__FP4xEntP6xScenef
// Start address: 0x323c10
void PlayerCollsSelectDepen(xEnt* p)
{
	xCollis* colls;
	xMat4x3* mat;
	xCollis* c;
	xCollis* cend;
	xVec3 motion_delta;
	uint8 idx;
	xSurface* surface;
	xVec3 vec;
	xCollis* curr;
	xCollis* coll;
	float32 h_dot_n;
	float32 depen_len;
	xEnt* cent;
	xSurface* surf;
	xCollis* cceil;
	xSurface* sfloor;
	int32 num_walls;
	xCollis* first_wall;
	xCollis* inside_wall;
	xCollis* cfront;
	xCollis* crear;
	float32 dx;
	float32 dz;
	xCollis* cleft;
	xCollis* cright;
	float32 dx;
	float32 dz;
	// Line 19343, Address: 0x323c10, Func Offset: 0
	// Line 19379, Address: 0x323c18, Func Offset: 0x8
	// Line 19343, Address: 0x323c1c, Func Offset: 0xc
	// Line 19379, Address: 0x323c20, Func Offset: 0x10
	// Line 19343, Address: 0x323c24, Func Offset: 0x14
	// Line 19379, Address: 0x323c28, Func Offset: 0x18
	// Line 19343, Address: 0x323c2c, Func Offset: 0x1c
	// Line 19373, Address: 0x323c54, Func Offset: 0x44
	// Line 19343, Address: 0x323c58, Func Offset: 0x48
	// Line 19379, Address: 0x323c5c, Func Offset: 0x4c
	// Line 19373, Address: 0x323c64, Func Offset: 0x54
	// Line 19379, Address: 0x323c68, Func Offset: 0x58
	// Line 19377, Address: 0x323c6c, Func Offset: 0x5c
	// Line 19379, Address: 0x323c70, Func Offset: 0x60
	// Line 19376, Address: 0x323c78, Func Offset: 0x68
	// Line 19379, Address: 0x323c7c, Func Offset: 0x6c
	// Line 19377, Address: 0x323c80, Func Offset: 0x70
	// Line 19379, Address: 0x323c8c, Func Offset: 0x7c
	// Line 19377, Address: 0x323c90, Func Offset: 0x80
	// Line 19379, Address: 0x323c94, Func Offset: 0x84
	// Line 19377, Address: 0x323c98, Func Offset: 0x88
	// Line 19379, Address: 0x323c9c, Func Offset: 0x8c
	// Line 19377, Address: 0x323ca0, Func Offset: 0x90
	// Line 19379, Address: 0x323ca4, Func Offset: 0x94
	// Line 19383, Address: 0x323cb0, Func Offset: 0xa0
	// Line 19379, Address: 0x323cb4, Func Offset: 0xa4
	// Line 19383, Address: 0x323cec, Func Offset: 0xdc
	// Line 19430, Address: 0x323cf4, Func Offset: 0xe4
	// Line 19432, Address: 0x323d04, Func Offset: 0xf4
	// Line 19433, Address: 0x323d0c, Func Offset: 0xfc
	// Line 19434, Address: 0x323d38, Func Offset: 0x128
	// Line 19433, Address: 0x323d40, Func Offset: 0x130
	// Line 19434, Address: 0x323d44, Func Offset: 0x134
	// Line 19435, Address: 0x323d64, Func Offset: 0x154
	// Line 19445, Address: 0x323d70, Func Offset: 0x160
	// Line 19448, Address: 0x323dfc, Func Offset: 0x1ec
	// Line 19449, Address: 0x323e18, Func Offset: 0x208
	// Line 19451, Address: 0x323e30, Func Offset: 0x220
	// Line 19453, Address: 0x323e94, Func Offset: 0x284
	// Line 19462, Address: 0x323eb8, Func Offset: 0x2a8
	// Line 19463, Address: 0x323ebc, Func Offset: 0x2ac
	// Line 19464, Address: 0x323ecc, Func Offset: 0x2bc
	// Line 19468, Address: 0x323ed4, Func Offset: 0x2c4
	// Line 19475, Address: 0x323f00, Func Offset: 0x2f0
	// Line 19486, Address: 0x323f1c, Func Offset: 0x30c
	// Line 19488, Address: 0x323f20, Func Offset: 0x310
	// Line 19489, Address: 0x323f30, Func Offset: 0x320
	// Line 19491, Address: 0x323f38, Func Offset: 0x328
	// Line 19492, Address: 0x323f44, Func Offset: 0x334
	// Line 19493, Address: 0x323f48, Func Offset: 0x338
	// Line 19494, Address: 0x323f58, Func Offset: 0x348
	// Line 19384, Address: 0x323f60, Func Offset: 0x350
	// Line 19494, Address: 0x323f68, Func Offset: 0x358
	// Line 19384, Address: 0x323f70, Func Offset: 0x360
	// Line 19494, Address: 0x323f74, Func Offset: 0x364
	// Line 19400, Address: 0x323f7c, Func Offset: 0x36c
	// Line 19404, Address: 0x323f80, Func Offset: 0x370
	// Line 19494, Address: 0x323f88, Func Offset: 0x378
	// Line 19404, Address: 0x323f8c, Func Offset: 0x37c
	// Line 19494, Address: 0x323f90, Func Offset: 0x380
	// Line 19404, Address: 0x323f94, Func Offset: 0x384
	// Line 19494, Address: 0x323f98, Func Offset: 0x388
	// Line 19405, Address: 0x323fa4, Func Offset: 0x394
	// Line 19494, Address: 0x323fa8, Func Offset: 0x398
	// Line 19391, Address: 0x323fc8, Func Offset: 0x3b8
	// Line 19494, Address: 0x323fcc, Func Offset: 0x3bc
	// Line 19393, Address: 0x323fe0, Func Offset: 0x3d0
	// Line 19494, Address: 0x323fe4, Func Offset: 0x3d4
	// Line 19396, Address: 0x323ff0, Func Offset: 0x3e0
	// Line 19494, Address: 0x323ff4, Func Offset: 0x3e4
	// Line 19396, Address: 0x323ff8, Func Offset: 0x3e8
	// Line 19494, Address: 0x323ffc, Func Offset: 0x3ec
	// Line 19397, Address: 0x324000, Func Offset: 0x3f0
	// Line 19494, Address: 0x324004, Func Offset: 0x3f4
	// Line 19398, Address: 0x324014, Func Offset: 0x404
	// Line 19494, Address: 0x324018, Func Offset: 0x408
	// Line 19437, Address: 0x3240e0, Func Offset: 0x4d0
	// Line 19494, Address: 0x3240e4, Func Offset: 0x4d4
	// Line 19438, Address: 0x3240ec, Func Offset: 0x4dc
	// Line 19437, Address: 0x3240f0, Func Offset: 0x4e0
	// Line 19494, Address: 0x3240f4, Func Offset: 0x4e4
	// Line 19437, Address: 0x3240fc, Func Offset: 0x4ec
	// Line 19494, Address: 0x324108, Func Offset: 0x4f8
	// Line 19472, Address: 0x324110, Func Offset: 0x500
	// Line 19494, Address: 0x324118, Func Offset: 0x508
	// Line 19476, Address: 0x324120, Func Offset: 0x510
	// Line 19494, Address: 0x324124, Func Offset: 0x514
	// Line 19484, Address: 0x324160, Func Offset: 0x550
	// Line 19494, Address: 0x324168, Func Offset: 0x558
	// Line 19521, Address: 0x32416c, Func Offset: 0x55c
	// Line 19547, Address: 0x324188, Func Offset: 0x578
	// Line 19552, Address: 0x3241bc, Func Offset: 0x5ac
	// Line 19553, Address: 0x3241f4, Func Offset: 0x5e4
	// Line 19593, Address: 0x324204, Func Offset: 0x5f4
	// Line 19595, Address: 0x324230, Func Offset: 0x620
	// Line 19526, Address: 0x324260, Func Offset: 0x650
	// Line 19595, Address: 0x324264, Func Offset: 0x654
	// Line 19547, Address: 0x324270, Func Offset: 0x660
	// Line 19595, Address: 0x324274, Func Offset: 0x664
	// Line 19598, Address: 0x324284, Func Offset: 0x674
	// Line 19599, Address: 0x324288, Func Offset: 0x678
	// Line 19598, Address: 0x32428c, Func Offset: 0x67c
	// Line 19599, Address: 0x324290, Func Offset: 0x680
	// Line 19598, Address: 0x324298, Func Offset: 0x688
	// Line 19599, Address: 0x3242c0, Func Offset: 0x6b0
	// Line 19636, Address: 0x324300, Func Offset: 0x6f0
	// Line 19637, Address: 0x324304, Func Offset: 0x6f4
	// Line 19632, Address: 0x324308, Func Offset: 0x6f8
	// Line 19637, Address: 0x32430c, Func Offset: 0x6fc
	// Line 19633, Address: 0x324310, Func Offset: 0x700
	// Line 19637, Address: 0x324314, Func Offset: 0x704
	// Line 19638, Address: 0x324320, Func Offset: 0x710
	// Line 19639, Address: 0x32432c, Func Offset: 0x71c
	// Line 19641, Address: 0x324330, Func Offset: 0x720
	// Line 19642, Address: 0x32433c, Func Offset: 0x72c
	// Line 19645, Address: 0x324348, Func Offset: 0x738
	// Line 19648, Address: 0x324350, Func Offset: 0x740
	// Line 19651, Address: 0x324358, Func Offset: 0x748
	// Line 19652, Address: 0x324360, Func Offset: 0x750
	// Line 19658, Address: 0x324364, Func Offset: 0x754
	// Line 19660, Address: 0x324378, Func Offset: 0x768
	// Line 19662, Address: 0x324380, Func Offset: 0x770
	// Line 19664, Address: 0x324390, Func Offset: 0x780
	// Line 19667, Address: 0x324398, Func Offset: 0x788
	// Line 19784, Address: 0x3243a4, Func Offset: 0x794
	// Line 19782, Address: 0x3243a8, Func Offset: 0x798
	// Line 19784, Address: 0x3243ac, Func Offset: 0x79c
	// Line 19807, Address: 0x3243d4, Func Offset: 0x7c4
	// Line 19814, Address: 0x3243f4, Func Offset: 0x7e4
	// Line 19818, Address: 0x3244b4, Func Offset: 0x8a4
	// Line 19820, Address: 0x3244b8, Func Offset: 0x8a8
	// Line 19818, Address: 0x3244bc, Func Offset: 0x8ac
	// Line 19820, Address: 0x3244c0, Func Offset: 0x8b0
	// Line 19818, Address: 0x3244cc, Func Offset: 0x8bc
	// Line 19819, Address: 0x3244d4, Func Offset: 0x8c4
	// Line 19820, Address: 0x3244e4, Func Offset: 0x8d4
	// Line 19847, Address: 0x32452c, Func Offset: 0x91c
	// Line 19844, Address: 0x324530, Func Offset: 0x920
	// Line 19847, Address: 0x324534, Func Offset: 0x924
	// Line 19867, Address: 0x32455c, Func Offset: 0x94c
	// Line 19873, Address: 0x32457c, Func Offset: 0x96c
	// Line 19877, Address: 0x32463c, Func Offset: 0xa2c
	// Line 19878, Address: 0x32464c, Func Offset: 0xa3c
	// Line 19899, Address: 0x32465c, Func Offset: 0xa4c
	// Line 19599, Address: 0x324664, Func Offset: 0xa54
	// Line 19899, Address: 0x324670, Func Offset: 0xa60
	// Line 19603, Address: 0x324680, Func Offset: 0xa70
	// Line 19899, Address: 0x324684, Func Offset: 0xa74
	// Line 19603, Address: 0x324688, Func Offset: 0xa78
	// Line 19899, Address: 0x32468c, Func Offset: 0xa7c
	// Line 19602, Address: 0x324694, Func Offset: 0xa84
	// Line 19899, Address: 0x324698, Func Offset: 0xa88
	// Line 19603, Address: 0x3246a8, Func Offset: 0xa98
	// Line 19899, Address: 0x3246bc, Func Offset: 0xaac
	// Line 19603, Address: 0x3246c4, Func Offset: 0xab4
	// Line 19899, Address: 0x3246c8, Func Offset: 0xab8
	// Line 19606, Address: 0x3246d8, Func Offset: 0xac8
	// Line 19603, Address: 0x3246e0, Func Offset: 0xad0
	// Line 19899, Address: 0x3246ec, Func Offset: 0xadc
	// Line 19606, Address: 0x3246fc, Func Offset: 0xaec
	// Line 19899, Address: 0x324700, Func Offset: 0xaf0
	// Line 19607, Address: 0x324704, Func Offset: 0xaf4
	// Line 19899, Address: 0x324708, Func Offset: 0xaf8
	// Line 19607, Address: 0x324714, Func Offset: 0xb04
	// Line 19899, Address: 0x324724, Func Offset: 0xb14
	// Line 19609, Address: 0x32472c, Func Offset: 0xb1c
	// Line 19899, Address: 0x324738, Func Offset: 0xb28
	// Line 19609, Address: 0x324744, Func Offset: 0xb34
	// Line 19899, Address: 0x324748, Func Offset: 0xb38
	// Line 19612, Address: 0x324754, Func Offset: 0xb44
	// Line 19899, Address: 0x324758, Func Offset: 0xb48
	// Line 19612, Address: 0x32475c, Func Offset: 0xb4c
	// Line 19899, Address: 0x324760, Func Offset: 0xb50
	// Line 19611, Address: 0x324764, Func Offset: 0xb54
	// Line 19899, Address: 0x324768, Func Offset: 0xb58
	// Line 19611, Address: 0x324774, Func Offset: 0xb64
	// Line 19899, Address: 0x324778, Func Offset: 0xb68
	// Line 19611, Address: 0x324784, Func Offset: 0xb74
	// Line 19899, Address: 0x324788, Func Offset: 0xb78
	// Line 19612, Address: 0x3247a0, Func Offset: 0xb90
	// Line 19899, Address: 0x3247b4, Func Offset: 0xba4
	// Line 19612, Address: 0x3247bc, Func Offset: 0xbac
	// Line 19899, Address: 0x3247c0, Func Offset: 0xbb0
	// Line 19614, Address: 0x3247d0, Func Offset: 0xbc0
	// Line 19899, Address: 0x3247d8, Func Offset: 0xbc8
	// Line 19616, Address: 0x3247dc, Func Offset: 0xbcc
	// Line 19899, Address: 0x3247e0, Func Offset: 0xbd0
	// Line 19616, Address: 0x3247e4, Func Offset: 0xbd4
	// Line 19899, Address: 0x3247e8, Func Offset: 0xbd8
	// Line 19615, Address: 0x3247ec, Func Offset: 0xbdc
	// Line 19899, Address: 0x3247f0, Func Offset: 0xbe0
	// Line 19616, Address: 0x324800, Func Offset: 0xbf0
	// Line 19899, Address: 0x324814, Func Offset: 0xc04
	// Line 19616, Address: 0x32481c, Func Offset: 0xc0c
	// Line 19899, Address: 0x324820, Func Offset: 0xc10
	// Line 19612, Address: 0x32483c, Func Offset: 0xc2c
	// Line 19899, Address: 0x324848, Func Offset: 0xc38
	// Line 19616, Address: 0x324858, Func Offset: 0xc48
	// Line 19899, Address: 0x324864, Func Offset: 0xc54
	// Line 19665, Address: 0x324878, Func Offset: 0xc68
	// Line 19899, Address: 0x324880, Func Offset: 0xc70
	// Line 19668, Address: 0x324888, Func Offset: 0xc78
	// Line 19899, Address: 0x32488c, Func Offset: 0xc7c
	// Line 19669, Address: 0x324898, Func Offset: 0xc88
	// Line 19670, Address: 0x32489c, Func Offset: 0xc8c
	// Line 19820, Address: 0x3248a4, Func Offset: 0xc94
	// Line 19899, Address: 0x3248ac, Func Offset: 0xc9c
	// Line 19825, Address: 0x3248c0, Func Offset: 0xcb0
	// Line 19899, Address: 0x3248c4, Func Offset: 0xcb4
	// Line 19825, Address: 0x3248c8, Func Offset: 0xcb8
	// Line 19823, Address: 0x3248d4, Func Offset: 0xcc4
	// Line 19899, Address: 0x3248d8, Func Offset: 0xcc8
	// Line 19824, Address: 0x3248e4, Func Offset: 0xcd4
	// Line 19899, Address: 0x3248e8, Func Offset: 0xcd8
	// Line 19825, Address: 0x3248f8, Func Offset: 0xce8
	// Line 19899, Address: 0x3248fc, Func Offset: 0xcec
	// Line 19825, Address: 0x324908, Func Offset: 0xcf8
	// Line 19899, Address: 0x32491c, Func Offset: 0xd0c
	// Line 19825, Address: 0x324924, Func Offset: 0xd14
	// Line 19899, Address: 0x32492c, Func Offset: 0xd1c
	// Line 19828, Address: 0x324934, Func Offset: 0xd24
	// Line 19825, Address: 0x32493c, Func Offset: 0xd2c
	// Line 19899, Address: 0x324944, Func Offset: 0xd34
	// Line 19829, Address: 0x324958, Func Offset: 0xd48
	// Line 19899, Address: 0x32495c, Func Offset: 0xd4c
	// Line 19829, Address: 0x324968, Func Offset: 0xd58
	// Line 19899, Address: 0x324978, Func Offset: 0xd68
	// Line 19837, Address: 0x324984, Func Offset: 0xd74
	// Line 19899, Address: 0x324988, Func Offset: 0xd78
	// Line 19837, Address: 0x32498c, Func Offset: 0xd7c
	// Line 19835, Address: 0x324998, Func Offset: 0xd88
	// Line 19899, Address: 0x32499c, Func Offset: 0xd8c
	// Line 19836, Address: 0x3249a8, Func Offset: 0xd98
	// Line 19899, Address: 0x3249ac, Func Offset: 0xd9c
	// Line 19837, Address: 0x3249bc, Func Offset: 0xdac
	// Line 19899, Address: 0x3249c0, Func Offset: 0xdb0
	// Line 19837, Address: 0x3249cc, Func Offset: 0xdbc
	// Line 19899, Address: 0x3249e0, Func Offset: 0xdd0
	// Line 19837, Address: 0x3249e8, Func Offset: 0xdd8
	// Line 19899, Address: 0x3249f0, Func Offset: 0xde0
	// Line 19837, Address: 0x324a00, Func Offset: 0xdf0
	// Line 19899, Address: 0x324a08, Func Offset: 0xdf8
	// Line 19881, Address: 0x324a20, Func Offset: 0xe10
	// Line 19899, Address: 0x324a24, Func Offset: 0xe14
	// Line 19882, Address: 0x324a30, Func Offset: 0xe20
	// Line 19885, Address: 0x324a34, Func Offset: 0xe24
	// Line 19899, Address: 0x324a3c, Func Offset: 0xe2c
	// Line 19886, Address: 0x324a40, Func Offset: 0xe30
	// Line 19899, Address: 0x324a44, Func Offset: 0xe34
	// Line 19886, Address: 0x324a50, Func Offset: 0xe40
	// Line 19899, Address: 0x324a60, Func Offset: 0xe50
	// Line 19891, Address: 0x324a70, Func Offset: 0xe60
	// Line 19899, Address: 0x324a74, Func Offset: 0xe64
	// Line 19892, Address: 0x324a80, Func Offset: 0xe70
	// Line 19899, Address: 0x324a8c, Func Offset: 0xe7c
	// Func End, Address: 0x324ac4, Func Offset: 0xeb4
}

// CalcCombinedDepen__FRfRffffff
// Start address: 0x324ad0
void CalcCombinedDepen(float32& dx, float32& dz, float32 ax, float32 az, float32 bx, float32 bz, float32 fudge)
{
	float32 normX;
	float32 normZ;
	float32 depenZ;
	float32 nddot;
	// Line 19284, Address: 0x324ad0, Func Offset: 0
	// Line 19286, Address: 0x324ad4, Func Offset: 0x4
	// Line 19284, Address: 0x324ad8, Func Offset: 0x8
	// Line 19286, Address: 0x324adc, Func Offset: 0xc
	// Line 19284, Address: 0x324ae0, Func Offset: 0x10
	// Line 19285, Address: 0x324ae4, Func Offset: 0x14
	// Line 19286, Address: 0x324aec, Func Offset: 0x1c
	// Line 19285, Address: 0x324af0, Func Offset: 0x20
	// Line 19286, Address: 0x324af4, Func Offset: 0x24
	// Line 19284, Address: 0x324af8, Func Offset: 0x28
	// Line 19285, Address: 0x324afc, Func Offset: 0x2c
	// Line 19286, Address: 0x324b04, Func Offset: 0x34
	// Line 19293, Address: 0x324b18, Func Offset: 0x48
	// Line 19296, Address: 0x324b28, Func Offset: 0x58
	// Line 19297, Address: 0x324b2c, Func Offset: 0x5c
	// Line 19298, Address: 0x324b3c, Func Offset: 0x6c
	// Line 19299, Address: 0x324b48, Func Offset: 0x78
	// Line 19300, Address: 0x324b4c, Func Offset: 0x7c
	// Line 19301, Address: 0x324b50, Func Offset: 0x80
	// Line 19303, Address: 0x324b54, Func Offset: 0x84
	// Line 19308, Address: 0x324b70, Func Offset: 0xa0
	// Line 19309, Address: 0x324b94, Func Offset: 0xc4
	// Line 19310, Address: 0x324ba4, Func Offset: 0xd4
	// Line 19313, Address: 0x324bb0, Func Offset: 0xe0
	// Line 19316, Address: 0x324bb8, Func Offset: 0xe8
	// Line 19317, Address: 0x324bbc, Func Offset: 0xec
	// Line 19318, Address: 0x324bc8, Func Offset: 0xf8
	// Line 19319, Address: 0x324bd4, Func Offset: 0x104
	// Line 19320, Address: 0x324bd8, Func Offset: 0x108
	// Line 19321, Address: 0x324bdc, Func Offset: 0x10c
	// Line 19323, Address: 0x324be0, Func Offset: 0x110
	// Line 19324, Address: 0x324bf8, Func Offset: 0x128
	// Line 19325, Address: 0x324c00, Func Offset: 0x130
	// Line 19324, Address: 0x324c04, Func Offset: 0x134
	// Line 19325, Address: 0x324c08, Func Offset: 0x138
	// Line 19324, Address: 0x324c0c, Func Offset: 0x13c
	// Line 19325, Address: 0x324c10, Func Offset: 0x140
	// Line 19327, Address: 0x324c14, Func Offset: 0x144
	// Line 19328, Address: 0x324c38, Func Offset: 0x168
	// Line 19337, Address: 0x324c3c, Func Offset: 0x16c
	// Line 19328, Address: 0x324c44, Func Offset: 0x174
	// Line 19329, Address: 0x324c48, Func Offset: 0x178
	// Line 19337, Address: 0x324c50, Func Offset: 0x180
	// Line 19338, Address: 0x324c58, Func Offset: 0x188
	// Line 19337, Address: 0x324c5c, Func Offset: 0x18c
	// Line 19338, Address: 0x324c60, Func Offset: 0x190
	// Line 19328, Address: 0x324c64, Func Offset: 0x194
	// Line 19329, Address: 0x324c7c, Func Offset: 0x1ac
	// Line 19337, Address: 0x324c80, Func Offset: 0x1b0
	// Line 19329, Address: 0x324c84, Func Offset: 0x1b4
	// Line 19337, Address: 0x324c8c, Func Offset: 0x1bc
	// Line 19338, Address: 0x324c98, Func Offset: 0x1c8
	// Line 19339, Address: 0x324ca4, Func Offset: 0x1d4
	// Line 19287, Address: 0x324cac, Func Offset: 0x1dc
	// Line 19288, Address: 0x324cb8, Func Offset: 0x1e8
	// Line 19287, Address: 0x324cbc, Func Offset: 0x1ec
	// Line 19288, Address: 0x324cc0, Func Offset: 0x1f0
	// Line 19339, Address: 0x324cc4, Func Offset: 0x1f4
	// Line 19289, Address: 0x324cc8, Func Offset: 0x1f8
	// Line 19304, Address: 0x324cd0, Func Offset: 0x200
	// Line 19305, Address: 0x324cd8, Func Offset: 0x208
	// Line 19304, Address: 0x324cdc, Func Offset: 0x20c
	// Line 19305, Address: 0x324ce0, Func Offset: 0x210
	// Line 19339, Address: 0x324ce4, Func Offset: 0x214
	// Func End, Address: 0x324cf4, Func Offset: 0x224
}

// PlayerCollisTranslate__FP7xCollisfff
// Start address: 0x324d00
void PlayerCollisTranslate(xCollis* c, float32 x, float32 y, float32 z)
{
	float32 dx;
	float32 dy;
	float32 dz;
	float32 dist2;
	float32 s;
	// Line 19112, Address: 0x324d00, Func Offset: 0
	// Line 19116, Address: 0x324d18, Func Offset: 0x18
	// Line 19125, Address: 0x324d1c, Func Offset: 0x1c
	// Line 19117, Address: 0x324d20, Func Offset: 0x20
	// Line 19125, Address: 0x324d24, Func Offset: 0x24
	// Line 19118, Address: 0x324d28, Func Offset: 0x28
	// Line 19116, Address: 0x324d34, Func Offset: 0x34
	// Line 19117, Address: 0x324d38, Func Offset: 0x38
	// Line 19119, Address: 0x324d3c, Func Offset: 0x3c
	// Line 19118, Address: 0x324d40, Func Offset: 0x40
	// Line 19119, Address: 0x324d44, Func Offset: 0x44
	// Line 19123, Address: 0x324d4c, Func Offset: 0x4c
	// Line 19125, Address: 0x324d50, Func Offset: 0x50
	// Line 19120, Address: 0x324d54, Func Offset: 0x54
	// Line 19121, Address: 0x324d58, Func Offset: 0x58
	// Line 19122, Address: 0x324d5c, Func Offset: 0x5c
	// Line 19126, Address: 0x324d64, Func Offset: 0x64
	// Line 19124, Address: 0x324d68, Func Offset: 0x68
	// Line 19126, Address: 0x324d6c, Func Offset: 0x6c
	// Line 19127, Address: 0x324d70, Func Offset: 0x70
	// Line 19128, Address: 0x324d78, Func Offset: 0x78
	// Line 19119, Address: 0x324d80, Func Offset: 0x80
	// Line 19130, Address: 0x324d88, Func Offset: 0x88
	// Line 19131, Address: 0x324da0, Func Offset: 0xa0
	// Line 19132, Address: 0x324da8, Func Offset: 0xa8
	// Line 19133, Address: 0x324dac, Func Offset: 0xac
	// Line 19132, Address: 0x324db0, Func Offset: 0xb0
	// Line 19145, Address: 0x324db4, Func Offset: 0xb4
	// Line 19112, Address: 0x324dc0, Func Offset: 0xc0
	// Line 19145, Address: 0x324dc4, Func Offset: 0xc4
	// Line 19112, Address: 0x324dd0, Func Offset: 0xd0
	// Line 19145, Address: 0x324dd4, Func Offset: 0xd4
	// Func End, Address: 0x324de4, Func Offset: 0xe4
}

// PlayerCollCheckOneVillain__FP4xEntP6xScenePv
// Start address: 0x324df0
xEnt* PlayerCollCheckOneVillain(xEnt* ent, void* data)
{
	xEnt* p;
	xCollis* coll;
	float32 playerOldRad;
	xSphere tmpsph;
	// Line 18924, Address: 0x324df0, Func Offset: 0
	// Line 18928, Address: 0x324e0c, Func Offset: 0x1c
	// Line 18933, Address: 0x324e20, Func Offset: 0x30
	// Line 18938, Address: 0x324e34, Func Offset: 0x44
	// Line 18931, Address: 0x324e4c, Func Offset: 0x5c
	// Line 18935, Address: 0x324e54, Func Offset: 0x64
	// Line 18941, Address: 0x324e5c, Func Offset: 0x6c
	// Line 18951, Address: 0x324e78, Func Offset: 0x88
	// Line 18944, Address: 0x324e7c, Func Offset: 0x8c
	// Line 18951, Address: 0x324e98, Func Offset: 0xa8
	// Line 18957, Address: 0x324eb8, Func Offset: 0xc8
	// Line 18962, Address: 0x324ee8, Func Offset: 0xf8
	// Line 18963, Address: 0x324eec, Func Offset: 0xfc
	// Line 18964, Address: 0x324ef4, Func Offset: 0x104
	// Line 18963, Address: 0x324f00, Func Offset: 0x110
	// Line 18964, Address: 0x324f04, Func Offset: 0x114
	// Line 18965, Address: 0x324f0c, Func Offset: 0x11c
	// Line 18968, Address: 0x324f10, Func Offset: 0x120
	// Line 18969, Address: 0x324f20, Func Offset: 0x130
	// Line 18970, Address: 0x324f24, Func Offset: 0x134
	// Line 18977, Address: 0x324f2c, Func Offset: 0x13c
	// Line 18971, Address: 0x324f30, Func Offset: 0x140
	// Line 18986, Address: 0x324f34, Func Offset: 0x144
	// Line 18972, Address: 0x324f38, Func Offset: 0x148
	// Line 18973, Address: 0x324f3c, Func Offset: 0x14c
	// Line 18974, Address: 0x324f5c, Func Offset: 0x16c
	// Line 18975, Address: 0x324f60, Func Offset: 0x170
	// Line 18976, Address: 0x324f70, Func Offset: 0x180
	// Line 18977, Address: 0x324f74, Func Offset: 0x184
	// Line 18978, Address: 0x324f78, Func Offset: 0x188
	// Line 18979, Address: 0x324f7c, Func Offset: 0x18c
	// Line 18980, Address: 0x324f8c, Func Offset: 0x19c
	// Line 18981, Address: 0x324f9c, Func Offset: 0x1ac
	// Line 18982, Address: 0x324fac, Func Offset: 0x1bc
	// Line 18983, Address: 0x324fb4, Func Offset: 0x1c4
	// Line 18984, Address: 0x324fb8, Func Offset: 0x1c8
	// Line 18985, Address: 0x324fc0, Func Offset: 0x1d0
	// Line 18986, Address: 0x324fcc, Func Offset: 0x1dc
	// Line 18993, Address: 0x324fd4, Func Offset: 0x1e4
	// Line 18942, Address: 0x325028, Func Offset: 0x238
	// Line 18993, Address: 0x325030, Func Offset: 0x240
	// Line 19001, Address: 0x325050, Func Offset: 0x260
	// Line 19005, Address: 0x325054, Func Offset: 0x264
	// Line 19001, Address: 0x325068, Func Offset: 0x278
	// Line 19002, Address: 0x32506c, Func Offset: 0x27c
	// Line 19003, Address: 0x325080, Func Offset: 0x290
	// Line 19004, Address: 0x32508c, Func Offset: 0x29c
	// Line 19005, Address: 0x325090, Func Offset: 0x2a0
	// Line 19011, Address: 0x32509c, Func Offset: 0x2ac
	// Line 19016, Address: 0x3250a8, Func Offset: 0x2b8
	// Line 19019, Address: 0x3250e8, Func Offset: 0x2f8
	// Line 19023, Address: 0x3250f0, Func Offset: 0x300
	// Line 19029, Address: 0x325148, Func Offset: 0x358
	// Line 19030, Address: 0x32514c, Func Offset: 0x35c
	// Line 19031, Address: 0x325150, Func Offset: 0x360
	// Line 19033, Address: 0x325158, Func Offset: 0x368
	// Line 19035, Address: 0x325168, Func Offset: 0x378
	// Line 19038, Address: 0x32517c, Func Offset: 0x38c
	// Line 19039, Address: 0x32518c, Func Offset: 0x39c
	// Line 19041, Address: 0x325190, Func Offset: 0x3a0
	// Line 19039, Address: 0x325194, Func Offset: 0x3a4
	// Line 19041, Address: 0x325198, Func Offset: 0x3a8
	// Line 19040, Address: 0x3251a0, Func Offset: 0x3b0
	// Line 19039, Address: 0x3251a8, Func Offset: 0x3b8
	// Line 19040, Address: 0x3251dc, Func Offset: 0x3ec
	// Line 19041, Address: 0x3251f4, Func Offset: 0x404
	// Line 19043, Address: 0x32521c, Func Offset: 0x42c
	// Line 19044, Address: 0x325220, Func Offset: 0x430
	// Line 19045, Address: 0x325228, Func Offset: 0x438
	// Line 19046, Address: 0x32522c, Func Offset: 0x43c
	// Line 19047, Address: 0x325230, Func Offset: 0x440
	// Line 19048, Address: 0x325234, Func Offset: 0x444
	// Line 19057, Address: 0x325244, Func Offset: 0x454
	// Line 19102, Address: 0x3252cc, Func Offset: 0x4dc
	// Line 19008, Address: 0x3252d8, Func Offset: 0x4e8
	// Line 19102, Address: 0x3252e0, Func Offset: 0x4f0
	// Line 19027, Address: 0x3252f4, Func Offset: 0x504
	// Line 19102, Address: 0x325304, Func Offset: 0x514
	// Line 19036, Address: 0x325308, Func Offset: 0x518
	// Line 19053, Address: 0x325330, Func Offset: 0x540
	// Line 19102, Address: 0x325334, Func Offset: 0x544
	// Line 19053, Address: 0x32533c, Func Offset: 0x54c
	// Line 19102, Address: 0x325340, Func Offset: 0x550
	// Line 19053, Address: 0x325348, Func Offset: 0x558
	// Line 19102, Address: 0x32534c, Func Offset: 0x55c
	// Line 19103, Address: 0x325358, Func Offset: 0x568
	// Func End, Address: 0x325374, Func Offset: 0x584
}

// CollidePyramidBoxTop__FP7xCollisP4xBoxfP7xSphere
// Start address: 0x325380
uint32 CollidePyramidBoxTop(xCollis* coll, xBox* box, float32 height, xSphere* sph)
{
	float32 dx;
	float32 dz;
	xVec3 point;
	xVec3 corner[2];
	xSweptSphere sws;
	xVec3 start;
	xVec3 end;
	float32 normX;
	float32 normZ;
	float32 normMag;
	// Line 18787, Address: 0x325380, Func Offset: 0
	// Line 18796, Address: 0x325384, Func Offset: 0x4
	// Line 18787, Address: 0x325388, Func Offset: 0x8
	// Line 18796, Address: 0x32538c, Func Offset: 0xc
	// Line 18787, Address: 0x325390, Func Offset: 0x10
	// Line 18796, Address: 0x325394, Func Offset: 0x14
	// Line 18787, Address: 0x325398, Func Offset: 0x18
	// Line 18797, Address: 0x32539c, Func Offset: 0x1c
	// Line 18787, Address: 0x3253a0, Func Offset: 0x20
	// Line 18796, Address: 0x3253d0, Func Offset: 0x50
	// Line 18797, Address: 0x3253e4, Func Offset: 0x64
	// Line 18799, Address: 0x3253e8, Func Offset: 0x68
	// Line 18797, Address: 0x3253ec, Func Offset: 0x6c
	// Line 18798, Address: 0x3253f4, Func Offset: 0x74
	// Line 18803, Address: 0x32540c, Func Offset: 0x8c
	// Line 18800, Address: 0x325410, Func Offset: 0x90
	// Line 18799, Address: 0x325414, Func Offset: 0x94
	// Line 18803, Address: 0x32541c, Func Offset: 0x9c
	// Line 18812, Address: 0x325480, Func Offset: 0x100
	// Line 18813, Address: 0x3254a4, Func Offset: 0x124
	// Line 18818, Address: 0x3254a8, Func Offset: 0x128
	// Line 18821, Address: 0x3254ac, Func Offset: 0x12c
	// Line 18818, Address: 0x3254b8, Func Offset: 0x138
	// Line 18819, Address: 0x3254bc, Func Offset: 0x13c
	// Line 18821, Address: 0x3254c0, Func Offset: 0x140
	// Line 18822, Address: 0x3254c8, Func Offset: 0x148
	// Line 18823, Address: 0x3254dc, Func Offset: 0x15c
	// Line 18827, Address: 0x3254e0, Func Offset: 0x160
	// Line 18824, Address: 0x3254e4, Func Offset: 0x164
	// Line 18827, Address: 0x3254e8, Func Offset: 0x168
	// Line 18823, Address: 0x3254ec, Func Offset: 0x16c
	// Line 18824, Address: 0x3254f0, Func Offset: 0x170
	// Line 18825, Address: 0x3254f8, Func Offset: 0x178
	// Line 18826, Address: 0x325500, Func Offset: 0x180
	// Line 18829, Address: 0x325504, Func Offset: 0x184
	// Line 18830, Address: 0x32550c, Func Offset: 0x18c
	// Line 18834, Address: 0x325510, Func Offset: 0x190
	// Line 18831, Address: 0x325514, Func Offset: 0x194
	// Line 18834, Address: 0x325518, Func Offset: 0x198
	// Line 18830, Address: 0x32551c, Func Offset: 0x19c
	// Line 18831, Address: 0x325520, Func Offset: 0x1a0
	// Line 18832, Address: 0x325528, Func Offset: 0x1a8
	// Line 18833, Address: 0x325530, Func Offset: 0x1b0
	// Line 18837, Address: 0x325534, Func Offset: 0x1b4
	// Line 18838, Address: 0x32553c, Func Offset: 0x1bc
	// Line 18839, Address: 0x325550, Func Offset: 0x1d0
	// Line 18844, Address: 0x325554, Func Offset: 0x1d4
	// Line 18840, Address: 0x325558, Func Offset: 0x1d8
	// Line 18844, Address: 0x32555c, Func Offset: 0x1dc
	// Line 18839, Address: 0x325560, Func Offset: 0x1e0
	// Line 18840, Address: 0x325564, Func Offset: 0x1e4
	// Line 18841, Address: 0x32556c, Func Offset: 0x1ec
	// Line 18842, Address: 0x325574, Func Offset: 0x1f4
	// Line 18845, Address: 0x325578, Func Offset: 0x1f8
	// Line 18846, Address: 0x325580, Func Offset: 0x200
	// Line 18851, Address: 0x325584, Func Offset: 0x204
	// Line 18847, Address: 0x325588, Func Offset: 0x208
	// Line 18851, Address: 0x32558c, Func Offset: 0x20c
	// Line 18846, Address: 0x325590, Func Offset: 0x210
	// Line 18847, Address: 0x325594, Func Offset: 0x214
	// Line 18848, Address: 0x32559c, Func Offset: 0x21c
	// Line 18849, Address: 0x3255a4, Func Offset: 0x224
	// Line 18864, Address: 0x3255ac, Func Offset: 0x22c
	// Line 18865, Address: 0x3255b4, Func Offset: 0x234
	// Line 18867, Address: 0x3255b8, Func Offset: 0x238
	// Line 18868, Address: 0x3255bc, Func Offset: 0x23c
	// Line 18864, Address: 0x3255c0, Func Offset: 0x240
	// Line 18865, Address: 0x3255c4, Func Offset: 0x244
	// Line 18866, Address: 0x3255d8, Func Offset: 0x258
	// Line 18867, Address: 0x3255e0, Func Offset: 0x260
	// Line 18868, Address: 0x3255f8, Func Offset: 0x278
	// Line 18869, Address: 0x325604, Func Offset: 0x284
	// Line 18920, Address: 0x325620, Func Offset: 0x2a0
	// Line 18808, Address: 0x325628, Func Offset: 0x2a8
	// Line 18920, Address: 0x325634, Func Offset: 0x2b4
	// Line 18876, Address: 0x325640, Func Offset: 0x2c0
	// Line 18920, Address: 0x325644, Func Offset: 0x2c4
	// Line 18876, Address: 0x325648, Func Offset: 0x2c8
	// Line 18920, Address: 0x325650, Func Offset: 0x2d0
	// Line 18876, Address: 0x325654, Func Offset: 0x2d4
	// Line 18920, Address: 0x325658, Func Offset: 0x2d8
	// Line 18876, Address: 0x325664, Func Offset: 0x2e4
	// Line 18920, Address: 0x325668, Func Offset: 0x2e8
	// Line 18877, Address: 0x325670, Func Offset: 0x2f0
	// Line 18879, Address: 0x325674, Func Offset: 0x2f4
	// Line 18880, Address: 0x32567c, Func Offset: 0x2fc
	// Line 18920, Address: 0x325688, Func Offset: 0x308
	// Line 18880, Address: 0x32568c, Func Offset: 0x30c
	// Line 18883, Address: 0x325698, Func Offset: 0x318
	// Line 18882, Address: 0x3256a0, Func Offset: 0x320
	// Line 18881, Address: 0x3256a4, Func Offset: 0x324
	// Line 18883, Address: 0x3256a8, Func Offset: 0x328
	// Line 18920, Address: 0x3256b8, Func Offset: 0x338
	// Line 18884, Address: 0x3256c0, Func Offset: 0x340
	// Line 18885, Address: 0x3256c4, Func Offset: 0x344
	// Line 18920, Address: 0x3256c8, Func Offset: 0x348
	// Line 18890, Address: 0x325700, Func Offset: 0x380
	// Line 18920, Address: 0x325708, Func Offset: 0x388
	// Line 18890, Address: 0x32570c, Func Offset: 0x38c
	// Line 18892, Address: 0x325714, Func Offset: 0x394
	// Line 18920, Address: 0x325720, Func Offset: 0x3a0
	// Line 18894, Address: 0x325734, Func Offset: 0x3b4
	// Line 18920, Address: 0x325740, Func Offset: 0x3c0
	// Line 18896, Address: 0x325750, Func Offset: 0x3d0
	// Line 18920, Address: 0x325754, Func Offset: 0x3d4
	// Line 18901, Address: 0x325778, Func Offset: 0x3f8
	// Line 18920, Address: 0x325780, Func Offset: 0x400
	// Line 18917, Address: 0x325788, Func Offset: 0x408
	// Line 18901, Address: 0x325794, Func Offset: 0x414
	// Line 18920, Address: 0x325798, Func Offset: 0x418
	// Line 18905, Address: 0x3257b4, Func Offset: 0x434
	// Line 18920, Address: 0x3257bc, Func Offset: 0x43c
	// Line 18908, Address: 0x3257dc, Func Offset: 0x45c
	// Line 18920, Address: 0x3257e0, Func Offset: 0x460
	// Line 18910, Address: 0x3257ec, Func Offset: 0x46c
	// Line 18920, Address: 0x3257f0, Func Offset: 0x470
	// Line 18914, Address: 0x325808, Func Offset: 0x488
	// Line 18920, Address: 0x325810, Func Offset: 0x490
	// Line 18916, Address: 0x325820, Func Offset: 0x4a0
	// Line 18920, Address: 0x325828, Func Offset: 0x4a8
	// Line 18921, Address: 0x32582c, Func Offset: 0x4ac
	// Func End, Address: 0x325864, Func Offset: 0x4e4
}

// PlayerCollCheckOneEnt__FP4xEntP6xScenePv
// Start address: 0x325870
xEnt* PlayerCollCheckOneEnt(xEnt* ent, void* data)
{
	xEnt* p;
	xCollis* coll;
	uint32 modl_coll;
	xSphere tmpsph;
	uint8 ncolls;
	uint8 idx;
	float32 rsum;
	float32 dx;
	float32 dy;
	float32 dz;
	// Line 18604, Address: 0x325870, Func Offset: 0
	// Line 18609, Address: 0x325874, Func Offset: 0x4
	// Line 18604, Address: 0x325878, Func Offset: 0x8
	// Line 18613, Address: 0x325884, Func Offset: 0x14
	// Line 18604, Address: 0x325888, Func Offset: 0x18
	// Line 18609, Address: 0x325894, Func Offset: 0x24
	// Line 18613, Address: 0x325898, Func Offset: 0x28
	// Line 18616, Address: 0x3258a0, Func Offset: 0x30
	// Line 18622, Address: 0x3258b0, Func Offset: 0x40
	// Line 18628, Address: 0x3258c0, Func Offset: 0x50
	// Line 18638, Address: 0x3258d0, Func Offset: 0x60
	// Line 18633, Address: 0x3258d4, Func Offset: 0x64
	// Line 18638, Address: 0x3258ec, Func Offset: 0x7c
	// Line 18641, Address: 0x3258fc, Func Offset: 0x8c
	// Line 18645, Address: 0x325918, Func Offset: 0xa8
	// Line 18649, Address: 0x32591c, Func Offset: 0xac
	// Line 18645, Address: 0x325930, Func Offset: 0xc0
	// Line 18646, Address: 0x325934, Func Offset: 0xc4
	// Line 18647, Address: 0x325948, Func Offset: 0xd8
	// Line 18648, Address: 0x325954, Func Offset: 0xe4
	// Line 18649, Address: 0x325958, Func Offset: 0xe8
	// Line 18650, Address: 0x325960, Func Offset: 0xf0
	// Line 18653, Address: 0x325968, Func Offset: 0xf8
	// Line 18654, Address: 0x32596c, Func Offset: 0xfc
	// Line 18653, Address: 0x325970, Func Offset: 0x100
	// Line 18654, Address: 0x325974, Func Offset: 0x104
	// Line 18656, Address: 0x325980, Func Offset: 0x110
	// Line 18658, Address: 0x325988, Func Offset: 0x118
	// Line 18661, Address: 0x325998, Func Offset: 0x128
	// Line 18662, Address: 0x3259a0, Func Offset: 0x130
	// Line 18668, Address: 0x3259a4, Func Offset: 0x134
	// Line 18672, Address: 0x3259ac, Func Offset: 0x13c
	// Line 18673, Address: 0x3259b4, Func Offset: 0x144
	// Line 18676, Address: 0x3259b8, Func Offset: 0x148
	// Line 18680, Address: 0x3259c8, Func Offset: 0x158
	// Line 18681, Address: 0x3259d8, Func Offset: 0x168
	// Line 18687, Address: 0x3259e0, Func Offset: 0x170
	// Line 18688, Address: 0x3259e8, Func Offset: 0x178
	// Line 18691, Address: 0x3259fc, Func Offset: 0x18c
	// Line 18697, Address: 0x325a0c, Func Offset: 0x19c
	// Line 18717, Address: 0x325a3c, Func Offset: 0x1cc
	// Line 18722, Address: 0x325ba8, Func Offset: 0x338
	// Line 18725, Address: 0x325bb4, Func Offset: 0x344
	// Line 18726, Address: 0x325bb8, Func Offset: 0x348
	// Line 18727, Address: 0x325bbc, Func Offset: 0x34c
	// Line 18729, Address: 0x325bc4, Func Offset: 0x354
	// Line 18731, Address: 0x325bd4, Func Offset: 0x364
	// Line 18749, Address: 0x325be4, Func Offset: 0x374
	// Line 18756, Address: 0x325c30, Func Offset: 0x3c0
	// Line 18763, Address: 0x325c70, Func Offset: 0x400
	// Line 18765, Address: 0x325c84, Func Offset: 0x414
	// Line 18770, Address: 0x325c90, Func Offset: 0x420
	// Line 18765, Address: 0x325c94, Func Offset: 0x424
	// Line 18764, Address: 0x325c98, Func Offset: 0x428
	// Line 18765, Address: 0x325c9c, Func Offset: 0x42c
	// Line 18766, Address: 0x325ca0, Func Offset: 0x430
	// Line 18768, Address: 0x325ca4, Func Offset: 0x434
	// Line 18769, Address: 0x325cb4, Func Offset: 0x444
	// Line 18770, Address: 0x325cb8, Func Offset: 0x448
	// Line 18771, Address: 0x325cbc, Func Offset: 0x44c
	// Line 18779, Address: 0x325cc0, Func Offset: 0x450
	// Line 18620, Address: 0x325cd0, Func Offset: 0x460
	// Line 18625, Address: 0x325cd8, Func Offset: 0x468
	// Line 18630, Address: 0x325ce4, Func Offset: 0x474
	// Line 18779, Address: 0x325cf0, Func Offset: 0x480
	// Line 18692, Address: 0x325cf4, Func Offset: 0x484
	// Line 18779, Address: 0x325d00, Func Offset: 0x490
	// Line 18733, Address: 0x325d10, Func Offset: 0x4a0
	// Line 18732, Address: 0x325d1c, Func Offset: 0x4ac
	// Line 18779, Address: 0x325d20, Func Offset: 0x4b0
	// Line 18732, Address: 0x325d2c, Func Offset: 0x4bc
	// Line 18779, Address: 0x325d30, Func Offset: 0x4c0
	// Line 18732, Address: 0x325d3c, Func Offset: 0x4cc
	// Line 18779, Address: 0x325d40, Func Offset: 0x4d0
	// Line 18733, Address: 0x325d50, Func Offset: 0x4e0
	// Line 18779, Address: 0x325d5c, Func Offset: 0x4ec
	// Line 18734, Address: 0x325d68, Func Offset: 0x4f8
	// Line 18779, Address: 0x325d6c, Func Offset: 0x4fc
	// Line 18734, Address: 0x325d74, Func Offset: 0x504
	// Line 18779, Address: 0x325d78, Func Offset: 0x508
	// Line 18734, Address: 0x325d80, Func Offset: 0x510
	// Line 18779, Address: 0x325d84, Func Offset: 0x514
	// Line 18736, Address: 0x325d94, Func Offset: 0x524
	// Line 18779, Address: 0x325da0, Func Offset: 0x530
	// Line 18736, Address: 0x325dac, Func Offset: 0x53c
	// Line 18779, Address: 0x325db0, Func Offset: 0x540
	// Line 18736, Address: 0x325db8, Func Offset: 0x548
	// Line 18779, Address: 0x325dd4, Func Offset: 0x564
	// Line 18736, Address: 0x325ddc, Func Offset: 0x56c
	// Line 18779, Address: 0x325de0, Func Offset: 0x570
	// Line 18736, Address: 0x325de8, Func Offset: 0x578
	// Line 18779, Address: 0x325dec, Func Offset: 0x57c
	// Line 18736, Address: 0x325df8, Func Offset: 0x588
	// Line 18779, Address: 0x325dfc, Func Offset: 0x58c
	// Line 18736, Address: 0x325e04, Func Offset: 0x594
	// Line 18779, Address: 0x325e08, Func Offset: 0x598
	// Line 18736, Address: 0x325e10, Func Offset: 0x5a0
	// Line 18780, Address: 0x325e1c, Func Offset: 0x5ac
	// Func End, Address: 0x325e38, Func Offset: 0x5c8
}

// zEntPlayerReset__FP4xEnt
// Start address: 0x325e40
void zEntPlayerReset(xEnt* ent)
{
	int32 i;
	xAnimState* curr;
	xModelInstance* minst;
	uint32 index;
	xColor_tag black;
	xColor_tag clear;
	int32 i;
	xEnt* trackEnt;
	int32 i;
	RwTexture* tex;
	// Line 17954, Address: 0x325e40, Func Offset: 0
	// Line 17965, Address: 0x325e44, Func Offset: 0x4
	// Line 17954, Address: 0x325e48, Func Offset: 0x8
	// Line 17969, Address: 0x325e60, Func Offset: 0x20
	// Line 17954, Address: 0x325e64, Func Offset: 0x24
	// Line 17969, Address: 0x325e68, Func Offset: 0x28
	// Line 17954, Address: 0x325e6c, Func Offset: 0x2c
	// Line 17969, Address: 0x325e70, Func Offset: 0x30
	// Line 17965, Address: 0x325e74, Func Offset: 0x34
	// Line 17962, Address: 0x325e80, Func Offset: 0x40
	// Line 17965, Address: 0x325e84, Func Offset: 0x44
	// Line 17966, Address: 0x325e90, Func Offset: 0x50
	// Line 17970, Address: 0x325e98, Func Offset: 0x58
	// Line 17973, Address: 0x325eb4, Func Offset: 0x74
	// Line 17975, Address: 0x325ee4, Func Offset: 0xa4
	// Line 17978, Address: 0x325f20, Func Offset: 0xe0
	// Line 17979, Address: 0x325f34, Func Offset: 0xf4
	// Line 17981, Address: 0x325f48, Func Offset: 0x108
	// Line 17983, Address: 0x325f64, Func Offset: 0x124
	// Line 17989, Address: 0x325f6c, Func Offset: 0x12c
	// Line 17990, Address: 0x325f78, Func Offset: 0x138
	// Line 17992, Address: 0x325f8c, Func Offset: 0x14c
	// Line 17998, Address: 0x325f9c, Func Offset: 0x15c
	// Line 17999, Address: 0x325fb0, Func Offset: 0x170
	// Line 18000, Address: 0x325fb8, Func Offset: 0x178
	// Line 18006, Address: 0x325fcc, Func Offset: 0x18c
	// Line 18007, Address: 0x325fd4, Func Offset: 0x194
	// Line 18008, Address: 0x325fd8, Func Offset: 0x198
	// Line 18006, Address: 0x325fdc, Func Offset: 0x19c
	// Line 18007, Address: 0x325fe0, Func Offset: 0x1a0
	// Line 18008, Address: 0x325fe4, Func Offset: 0x1a4
	// Line 18006, Address: 0x325fe8, Func Offset: 0x1a8
	// Line 18007, Address: 0x325ff0, Func Offset: 0x1b0
	// Line 18008, Address: 0x325ff4, Func Offset: 0x1b4
	// Line 18011, Address: 0x325ffc, Func Offset: 0x1bc
	// Line 18016, Address: 0x326038, Func Offset: 0x1f8
	// Line 18020, Address: 0x32607c, Func Offset: 0x23c
	// Line 18021, Address: 0x326080, Func Offset: 0x240
	// Line 18025, Address: 0x326088, Func Offset: 0x248
	// Line 18028, Address: 0x326090, Func Offset: 0x250
	// Line 18029, Address: 0x326094, Func Offset: 0x254
	// Line 18028, Address: 0x326098, Func Offset: 0x258
	// Line 18053, Address: 0x32609c, Func Offset: 0x25c
	// Line 18029, Address: 0x3260a0, Func Offset: 0x260
	// Line 18030, Address: 0x3260a8, Func Offset: 0x268
	// Line 18053, Address: 0x3260ac, Func Offset: 0x26c
	// Line 18030, Address: 0x3260b0, Func Offset: 0x270
	// Line 18031, Address: 0x3260b4, Func Offset: 0x274
	// Line 18053, Address: 0x3260b8, Func Offset: 0x278
	// Line 18031, Address: 0x3260bc, Func Offset: 0x27c
	// Line 18055, Address: 0x3260c0, Func Offset: 0x280
	// Line 18032, Address: 0x3260c4, Func Offset: 0x284
	// Line 18055, Address: 0x3260c8, Func Offset: 0x288
	// Line 18032, Address: 0x3260cc, Func Offset: 0x28c
	// Line 18057, Address: 0x3260d0, Func Offset: 0x290
	// Line 18033, Address: 0x3260d4, Func Offset: 0x294
	// Line 18057, Address: 0x3260d8, Func Offset: 0x298
	// Line 18033, Address: 0x3260dc, Func Offset: 0x29c
	// Line 18059, Address: 0x3260e0, Func Offset: 0x2a0
	// Line 18034, Address: 0x3260e4, Func Offset: 0x2a4
	// Line 18059, Address: 0x3260e8, Func Offset: 0x2a8
	// Line 18034, Address: 0x3260ec, Func Offset: 0x2ac
	// Line 18061, Address: 0x3260f0, Func Offset: 0x2b0
	// Line 18035, Address: 0x3260f4, Func Offset: 0x2b4
	// Line 18061, Address: 0x3260f8, Func Offset: 0x2b8
	// Line 18035, Address: 0x3260fc, Func Offset: 0x2bc
	// Line 18063, Address: 0x326100, Func Offset: 0x2c0
	// Line 18036, Address: 0x326104, Func Offset: 0x2c4
	// Line 18063, Address: 0x326108, Func Offset: 0x2c8
	// Line 18036, Address: 0x32610c, Func Offset: 0x2cc
	// Line 18065, Address: 0x326110, Func Offset: 0x2d0
	// Line 18037, Address: 0x326114, Func Offset: 0x2d4
	// Line 18065, Address: 0x326118, Func Offset: 0x2d8
	// Line 18037, Address: 0x32611c, Func Offset: 0x2dc
	// Line 18067, Address: 0x326120, Func Offset: 0x2e0
	// Line 18038, Address: 0x326124, Func Offset: 0x2e4
	// Line 18067, Address: 0x326128, Func Offset: 0x2e8
	// Line 18038, Address: 0x32612c, Func Offset: 0x2ec
	// Line 18069, Address: 0x326130, Func Offset: 0x2f0
	// Line 18039, Address: 0x326134, Func Offset: 0x2f4
	// Line 18069, Address: 0x326138, Func Offset: 0x2f8
	// Line 18039, Address: 0x32613c, Func Offset: 0x2fc
	// Line 18071, Address: 0x326140, Func Offset: 0x300
	// Line 18040, Address: 0x326144, Func Offset: 0x304
	// Line 18071, Address: 0x326148, Func Offset: 0x308
	// Line 18040, Address: 0x32614c, Func Offset: 0x30c
	// Line 18073, Address: 0x326150, Func Offset: 0x310
	// Line 18041, Address: 0x326154, Func Offset: 0x314
	// Line 18073, Address: 0x326158, Func Offset: 0x318
	// Line 18041, Address: 0x32615c, Func Offset: 0x31c
	// Line 18042, Address: 0x326160, Func Offset: 0x320
	// Line 18043, Address: 0x326168, Func Offset: 0x328
	// Line 18044, Address: 0x326170, Func Offset: 0x330
	// Line 18045, Address: 0x326178, Func Offset: 0x338
	// Line 18047, Address: 0x32617c, Func Offset: 0x33c
	// Line 18045, Address: 0x326180, Func Offset: 0x340
	// Line 18046, Address: 0x326184, Func Offset: 0x344
	// Line 18047, Address: 0x326190, Func Offset: 0x350
	// Line 18048, Address: 0x326198, Func Offset: 0x358
	// Line 18049, Address: 0x3261a0, Func Offset: 0x360
	// Line 18050, Address: 0x3261a8, Func Offset: 0x368
	// Line 18051, Address: 0x3261b0, Func Offset: 0x370
	// Line 18052, Address: 0x3261b8, Func Offset: 0x378
	// Line 18054, Address: 0x3261c0, Func Offset: 0x380
	// Line 18056, Address: 0x3261c8, Func Offset: 0x388
	// Line 18058, Address: 0x3261d0, Func Offset: 0x390
	// Line 18060, Address: 0x3261d8, Func Offset: 0x398
	// Line 18062, Address: 0x3261e0, Func Offset: 0x3a0
	// Line 18064, Address: 0x3261e8, Func Offset: 0x3a8
	// Line 18066, Address: 0x3261f0, Func Offset: 0x3b0
	// Line 18068, Address: 0x3261f8, Func Offset: 0x3b8
	// Line 18070, Address: 0x326200, Func Offset: 0x3c0
	// Line 18072, Address: 0x326208, Func Offset: 0x3c8
	// Line 18074, Address: 0x326210, Func Offset: 0x3d0
	// Line 18078, Address: 0x326218, Func Offset: 0x3d8
	// Line 18077, Address: 0x32621c, Func Offset: 0x3dc
	// Line 18078, Address: 0x326220, Func Offset: 0x3e0
	// Line 18080, Address: 0x326224, Func Offset: 0x3e4
	// Line 18077, Address: 0x326228, Func Offset: 0x3e8
	// Line 18080, Address: 0x32622c, Func Offset: 0x3ec
	// Line 18079, Address: 0x326230, Func Offset: 0x3f0
	// Line 18083, Address: 0x326234, Func Offset: 0x3f4
	// Line 18079, Address: 0x326238, Func Offset: 0x3f8
	// Line 18083, Address: 0x32623c, Func Offset: 0x3fc
	// Line 18082, Address: 0x326240, Func Offset: 0x400
	// Line 18083, Address: 0x326244, Func Offset: 0x404
	// Line 18084, Address: 0x32624c, Func Offset: 0x40c
	// Line 18085, Address: 0x326250, Func Offset: 0x410
	// Line 18098, Address: 0x326258, Func Offset: 0x418
	// Line 18089, Address: 0x326264, Func Offset: 0x424
	// Line 18098, Address: 0x326268, Func Offset: 0x428
	// Line 18092, Address: 0x32626c, Func Offset: 0x42c
	// Line 18089, Address: 0x326270, Func Offset: 0x430
	// Line 18092, Address: 0x326278, Func Offset: 0x438
	// Line 18097, Address: 0x32627c, Func Offset: 0x43c
	// Line 18098, Address: 0x326280, Func Offset: 0x440
	// Line 18101, Address: 0x326290, Func Offset: 0x450
	// Line 18089, Address: 0x326294, Func Offset: 0x454
	// Line 18092, Address: 0x326298, Func Offset: 0x458
	// Line 18097, Address: 0x32629c, Func Offset: 0x45c
	// Line 18098, Address: 0x3262a0, Func Offset: 0x460
	// Line 18094, Address: 0x3262a4, Func Offset: 0x464
	// Line 18107, Address: 0x3262a8, Func Offset: 0x468
	// Line 18095, Address: 0x3262ac, Func Offset: 0x46c
	// Line 18098, Address: 0x3262b0, Func Offset: 0x470
	// Line 18101, Address: 0x3262bc, Func Offset: 0x47c
	// Line 18107, Address: 0x3262c0, Func Offset: 0x480
	// Line 18112, Address: 0x3262c8, Func Offset: 0x488
	// Line 18116, Address: 0x3262cc, Func Offset: 0x48c
	// Line 18112, Address: 0x3262d0, Func Offset: 0x490
	// Line 18116, Address: 0x3262d8, Func Offset: 0x498
	// Line 18112, Address: 0x3262e0, Func Offset: 0x4a0
	// Line 18114, Address: 0x3262fc, Func Offset: 0x4bc
	// Line 18116, Address: 0x326308, Func Offset: 0x4c8
	// Line 18117, Address: 0x326310, Func Offset: 0x4d0
	// Line 18120, Address: 0x32631c, Func Offset: 0x4dc
	// Line 18117, Address: 0x326320, Func Offset: 0x4e0
	// Line 18120, Address: 0x326328, Func Offset: 0x4e8
	// Line 18121, Address: 0x326338, Func Offset: 0x4f8
	// Line 18122, Address: 0x32634c, Func Offset: 0x50c
	// Line 18123, Address: 0x326360, Func Offset: 0x520
	// Line 18124, Address: 0x32636c, Func Offset: 0x52c
	// Line 18127, Address: 0x32639c, Func Offset: 0x55c
	// Line 18133, Address: 0x3263a8, Func Offset: 0x568
	// Line 18127, Address: 0x3263ac, Func Offset: 0x56c
	// Line 18133, Address: 0x3263b0, Func Offset: 0x570
	// Line 18134, Address: 0x3263c4, Func Offset: 0x584
	// Line 18136, Address: 0x3263cc, Func Offset: 0x58c
	// Line 18140, Address: 0x3263d0, Func Offset: 0x590
	// Line 18136, Address: 0x3263d4, Func Offset: 0x594
	// Line 18140, Address: 0x326408, Func Offset: 0x5c8
	// Line 18142, Address: 0x326418, Func Offset: 0x5d8
	// Line 18143, Address: 0x32641c, Func Offset: 0x5dc
	// Line 18148, Address: 0x326428, Func Offset: 0x5e8
	// Line 18150, Address: 0x326434, Func Offset: 0x5f4
	// Line 18151, Address: 0x32643c, Func Offset: 0x5fc
	// Line 18152, Address: 0x326448, Func Offset: 0x608
	// Line 18153, Address: 0x326454, Func Offset: 0x614
	// Line 18155, Address: 0x326458, Func Offset: 0x618
	// Line 18156, Address: 0x32645c, Func Offset: 0x61c
	// Line 18160, Address: 0x326468, Func Offset: 0x628
	// Line 18164, Address: 0x326470, Func Offset: 0x630
	// Line 18162, Address: 0x326474, Func Offset: 0x634
	// Line 18161, Address: 0x326480, Func Offset: 0x640
	// Line 18165, Address: 0x326484, Func Offset: 0x644
	// Line 18161, Address: 0x326488, Func Offset: 0x648
	// Line 18165, Address: 0x32648c, Func Offset: 0x64c
	// Line 18166, Address: 0x326490, Func Offset: 0x650
	// Line 18167, Address: 0x326494, Func Offset: 0x654
	// Line 18166, Address: 0x326498, Func Offset: 0x658
	// Line 18167, Address: 0x32649c, Func Offset: 0x65c
	// Line 18170, Address: 0x3264a0, Func Offset: 0x660
	// Line 18171, Address: 0x3264a4, Func Offset: 0x664
	// Line 18170, Address: 0x3264a8, Func Offset: 0x668
	// Line 18171, Address: 0x3264ac, Func Offset: 0x66c
	// Line 18174, Address: 0x3264b0, Func Offset: 0x670
	// Line 18175, Address: 0x3264b4, Func Offset: 0x674
	// Line 18178, Address: 0x3264b8, Func Offset: 0x678
	// Line 18175, Address: 0x3264bc, Func Offset: 0x67c
	// Line 18181, Address: 0x3264c0, Func Offset: 0x680
	// Line 18179, Address: 0x3264cc, Func Offset: 0x68c
	// Line 18164, Address: 0x3264d0, Func Offset: 0x690
	// Line 18174, Address: 0x3264d4, Func Offset: 0x694
	// Line 18181, Address: 0x3264d8, Func Offset: 0x698
	// Line 18183, Address: 0x3264e8, Func Offset: 0x6a8
	// Line 18186, Address: 0x326500, Func Offset: 0x6c0
	// Line 18192, Address: 0x326508, Func Offset: 0x6c8
	// Line 18191, Address: 0x32650c, Func Offset: 0x6cc
	// Line 18192, Address: 0x326510, Func Offset: 0x6d0
	// Line 18193, Address: 0x326514, Func Offset: 0x6d4
	// Line 18199, Address: 0x326518, Func Offset: 0x6d8
	// Line 18189, Address: 0x32651c, Func Offset: 0x6dc
	// Line 18199, Address: 0x326520, Func Offset: 0x6e0
	// Line 18190, Address: 0x326524, Func Offset: 0x6e4
	// Line 18189, Address: 0x326528, Func Offset: 0x6e8
	// Line 18191, Address: 0x32652c, Func Offset: 0x6ec
	// Line 18194, Address: 0x326530, Func Offset: 0x6f0
	// Line 18195, Address: 0x326534, Func Offset: 0x6f4
	// Line 18196, Address: 0x326538, Func Offset: 0x6f8
	// Line 18193, Address: 0x32653c, Func Offset: 0x6fc
	// Line 18198, Address: 0x326540, Func Offset: 0x700
	// Line 18200, Address: 0x326544, Func Offset: 0x704
	// Line 18204, Address: 0x326548, Func Offset: 0x708
	// Line 18200, Address: 0x32654c, Func Offset: 0x70c
	// Line 18199, Address: 0x326550, Func Offset: 0x710
	// Line 18201, Address: 0x326554, Func Offset: 0x714
	// Line 18205, Address: 0x326558, Func Offset: 0x718
	// Line 18201, Address: 0x32655c, Func Offset: 0x71c
	// Line 18202, Address: 0x326560, Func Offset: 0x720
	// Line 18206, Address: 0x326564, Func Offset: 0x724
	// Line 18202, Address: 0x326568, Func Offset: 0x728
	// Line 18203, Address: 0x32656c, Func Offset: 0x72c
	// Line 18207, Address: 0x326570, Func Offset: 0x730
	// Line 18203, Address: 0x326574, Func Offset: 0x734
	// Line 18208, Address: 0x326578, Func Offset: 0x738
	// Line 18215, Address: 0x32657c, Func Offset: 0x73c
	// Line 18208, Address: 0x326580, Func Offset: 0x740
	// Line 18209, Address: 0x326584, Func Offset: 0x744
	// Line 18216, Address: 0x326588, Func Offset: 0x748
	// Line 18209, Address: 0x32658c, Func Offset: 0x74c
	// Line 18210, Address: 0x326590, Func Offset: 0x750
	// Line 18217, Address: 0x326594, Func Offset: 0x754
	// Line 18210, Address: 0x326598, Func Offset: 0x758
	// Line 18211, Address: 0x32659c, Func Offset: 0x75c
	// Line 18220, Address: 0x3265a0, Func Offset: 0x760
	// Line 18211, Address: 0x3265a4, Func Offset: 0x764
	// Line 18221, Address: 0x3265a8, Func Offset: 0x768
	// Line 18225, Address: 0x3265ac, Func Offset: 0x76c
	// Line 18221, Address: 0x3265b0, Func Offset: 0x770
	// Line 18222, Address: 0x3265b4, Func Offset: 0x774
	// Line 18226, Address: 0x3265b8, Func Offset: 0x778
	// Line 18222, Address: 0x3265bc, Func Offset: 0x77c
	// Line 18223, Address: 0x3265c0, Func Offset: 0x780
	// Line 18230, Address: 0x3265c8, Func Offset: 0x788
	// Line 18248, Address: 0x3265d0, Func Offset: 0x790
	// Line 18249, Address: 0x3265dc, Func Offset: 0x79c
	// Line 18252, Address: 0x3265f4, Func Offset: 0x7b4
	// Line 18253, Address: 0x326600, Func Offset: 0x7c0
	// Line 18256, Address: 0x32661c, Func Offset: 0x7dc
	// Line 18257, Address: 0x326628, Func Offset: 0x7e8
	// Line 18260, Address: 0x326640, Func Offset: 0x800
	// Line 18257, Address: 0x326644, Func Offset: 0x804
	// Line 18260, Address: 0x326648, Func Offset: 0x808
	// Line 18265, Address: 0x326658, Func Offset: 0x818
	// Line 18275, Address: 0x326674, Func Offset: 0x834
	// Line 18279, Address: 0x32667c, Func Offset: 0x83c
	// Line 18278, Address: 0x326680, Func Offset: 0x840
	// Line 18280, Address: 0x326684, Func Offset: 0x844
	// Line 18278, Address: 0x326688, Func Offset: 0x848
	// Line 18279, Address: 0x32668c, Func Offset: 0x84c
	// Line 18280, Address: 0x326694, Func Offset: 0x854
	// Line 18279, Address: 0x326698, Func Offset: 0x858
	// Line 18281, Address: 0x32669c, Func Offset: 0x85c
	// Line 18282, Address: 0x3266e8, Func Offset: 0x8a8
	// Line 18288, Address: 0x3266f4, Func Offset: 0x8b4
	// Line 18289, Address: 0x32670c, Func Offset: 0x8cc
	// Line 18288, Address: 0x326714, Func Offset: 0x8d4
	// Line 18289, Address: 0x326720, Func Offset: 0x8e0
	// Line 18290, Address: 0x326744, Func Offset: 0x904
	// Line 18293, Address: 0x326760, Func Offset: 0x920
	// Line 18294, Address: 0x326768, Func Offset: 0x928
	// Line 18297, Address: 0x32677c, Func Offset: 0x93c
	// Line 18298, Address: 0x326784, Func Offset: 0x944
	// Line 18299, Address: 0x326790, Func Offset: 0x950
	// Line 18298, Address: 0x326794, Func Offset: 0x954
	// Line 18299, Address: 0x326798, Func Offset: 0x958
	// Line 18304, Address: 0x326838, Func Offset: 0x9f8
	// Line 18305, Address: 0x326840, Func Offset: 0xa00
	// Line 18307, Address: 0x326860, Func Offset: 0xa20
	// Line 18305, Address: 0x326864, Func Offset: 0xa24
	// Line 18307, Address: 0x326870, Func Offset: 0xa30
	// Line 18313, Address: 0x326890, Func Offset: 0xa50
	// Line 18314, Address: 0x326894, Func Offset: 0xa54
	// Line 18313, Address: 0x326898, Func Offset: 0xa58
	// Line 18314, Address: 0x32689c, Func Offset: 0xa5c
	// Line 18313, Address: 0x3268a0, Func Offset: 0xa60
	// Line 18314, Address: 0x3268a4, Func Offset: 0xa64
	// Line 18313, Address: 0x3268bc, Func Offset: 0xa7c
	// Line 18314, Address: 0x3268c4, Func Offset: 0xa84
	// Line 18317, Address: 0x3268cc, Func Offset: 0xa8c
	// Line 18319, Address: 0x3268d8, Func Offset: 0xa98
	// Line 18320, Address: 0x3268dc, Func Offset: 0xa9c
	// Line 18322, Address: 0x3268e0, Func Offset: 0xaa0
	// Line 18324, Address: 0x326900, Func Offset: 0xac0
	// Line 18326, Address: 0x326910, Func Offset: 0xad0
	// Line 18327, Address: 0x32693c, Func Offset: 0xafc
	// Line 18333, Address: 0x326960, Func Offset: 0xb20
	// Line 18329, Address: 0x326964, Func Offset: 0xb24
	// Line 18333, Address: 0x326968, Func Offset: 0xb28
	// Line 18330, Address: 0x32696c, Func Offset: 0xb2c
	// Line 18333, Address: 0x326970, Func Offset: 0xb30
	// Line 18334, Address: 0x326988, Func Offset: 0xb48
	// Line 18335, Address: 0x3269a8, Func Offset: 0xb68
	// Line 18336, Address: 0x3269c8, Func Offset: 0xb88
	// Line 18339, Address: 0x3269e8, Func Offset: 0xba8
	// Line 18336, Address: 0x3269ec, Func Offset: 0xbac
	// Line 18339, Address: 0x3269f0, Func Offset: 0xbb0
	// Line 18338, Address: 0x3269f8, Func Offset: 0xbb8
	// Line 18340, Address: 0x3269fc, Func Offset: 0xbbc
	// Line 18341, Address: 0x326a00, Func Offset: 0xbc0
	// Line 18339, Address: 0x326a04, Func Offset: 0xbc4
	// Line 18340, Address: 0x326a38, Func Offset: 0xbf8
	// Line 18342, Address: 0x326a3c, Func Offset: 0xbfc
	// Line 18341, Address: 0x326a40, Func Offset: 0xc00
	// Line 18342, Address: 0x326a48, Func Offset: 0xc08
	// Line 18345, Address: 0x326a54, Func Offset: 0xc14
	// Line 18346, Address: 0x326a68, Func Offset: 0xc28
	// Line 18347, Address: 0x326a70, Func Offset: 0xc30
	// Line 18349, Address: 0x326a7c, Func Offset: 0xc3c
	// Line 18352, Address: 0x326a80, Func Offset: 0xc40
	// Line 18353, Address: 0x326a94, Func Offset: 0xc54
	// Line 18354, Address: 0x326a9c, Func Offset: 0xc5c
	// Line 18356, Address: 0x326aa8, Func Offset: 0xc68
	// Line 18365, Address: 0x326aac, Func Offset: 0xc6c
	// Line 18359, Address: 0x326ab0, Func Offset: 0xc70
	// Line 18365, Address: 0x326ab4, Func Offset: 0xc74
	// Line 18359, Address: 0x326ab8, Func Offset: 0xc78
	// Line 18360, Address: 0x326abc, Func Offset: 0xc7c
	// Line 18362, Address: 0x326ac0, Func Offset: 0xc80
	// Line 18365, Address: 0x326ac4, Func Offset: 0xc84
	// Line 18366, Address: 0x326aec, Func Offset: 0xcac
	// Line 18367, Address: 0x326b18, Func Offset: 0xcd8
	// Line 18368, Address: 0x326b44, Func Offset: 0xd04
	// Line 18402, Address: 0x326b70, Func Offset: 0xd30
	// Line 18405, Address: 0x326b80, Func Offset: 0xd40
	// Line 18409, Address: 0x326bdc, Func Offset: 0xd9c
	// Line 18416, Address: 0x326be0, Func Offset: 0xda0
	// Line 18409, Address: 0x326be4, Func Offset: 0xda4
	// Line 18415, Address: 0x326be8, Func Offset: 0xda8
	// Line 18413, Address: 0x326bec, Func Offset: 0xdac
	// Line 18416, Address: 0x326bfc, Func Offset: 0xdbc
	// Line 18417, Address: 0x326c0c, Func Offset: 0xdcc
	// Line 18418, Address: 0x326c10, Func Offset: 0xdd0
	// Line 18419, Address: 0x326c14, Func Offset: 0xdd4
	// Line 18421, Address: 0x326c18, Func Offset: 0xdd8
	// Func End, Address: 0x326c38, Func Offset: 0xdf8
}

// zEntPlayer_ObjIDIsTrack__FUi
// Start address: 0x326c40
int32 zEntPlayer_ObjIDIsTrack(uint32 id)
{
	int32 i;
	// Line 17893, Address: 0x326c40, Func Offset: 0
	// Line 17895, Address: 0x326c50, Func Offset: 0x10
	// Line 17897, Address: 0x326c78, Func Offset: 0x38
	// Line 17899, Address: 0x326c80, Func Offset: 0x40
	// Line 17905, Address: 0x326cc4, Func Offset: 0x84
	// Line 17906, Address: 0x326cd0, Func Offset: 0x90
	// Line 17908, Address: 0x326cf0, Func Offset: 0xb0
	// Line 17910, Address: 0x326cf8, Func Offset: 0xb8
	// Line 17912, Address: 0x326d08, Func Offset: 0xc8
	// Line 17913, Address: 0x326d0c, Func Offset: 0xcc
	// Func End, Address: 0x326d14, Func Offset: 0xd4
}

// zEntPlayerDriveUpdate__FP4xEntP6xScenef
// Start address: 0x326d20
void zEntPlayerDriveUpdate(xEnt* p, float32 dt)
{
	xCollis* coll;
	xEnt* floorEnt;
	zPlatform* plat;
	xEntDrive* drv;
	zPlatform* oplat;
	xEntFrame* dummyFrame;
	xEntFrame** ppDummyFrameUser;
	xSurface* surf;
	xEntFrame dummyFrame;
	float32 jmph;
	uint32 superbounce;
	float32* jmphs;
	xVec3* jmpdir;
	xAnimPlay* aplay;
	xAnimState* spring_state;
	// Line 17438, Address: 0x326d20, Func Offset: 0
	// Line 17445, Address: 0x326d48, Func Offset: 0x28
	// Line 17449, Address: 0x326d50, Func Offset: 0x30
	// Line 17448, Address: 0x326d54, Func Offset: 0x34
	// Line 17449, Address: 0x326d58, Func Offset: 0x38
	// Line 17448, Address: 0x326d5c, Func Offset: 0x3c
	// Line 17449, Address: 0x326d60, Func Offset: 0x40
	// Line 17483, Address: 0x326d6c, Func Offset: 0x4c
	// Line 17485, Address: 0x326dc4, Func Offset: 0xa4
	// Line 17486, Address: 0x326dcc, Func Offset: 0xac
	// Line 17489, Address: 0x326dd0, Func Offset: 0xb0
	// Line 17490, Address: 0x326dd8, Func Offset: 0xb8
	// Line 17492, Address: 0x326de8, Func Offset: 0xc8
	// Line 17494, Address: 0x326e00, Func Offset: 0xe0
	// Line 17496, Address: 0x326e04, Func Offset: 0xe4
	// Line 17501, Address: 0x326e0c, Func Offset: 0xec
	// Line 17510, Address: 0x326e24, Func Offset: 0x104
	// Line 17509, Address: 0x326e28, Func Offset: 0x108
	// Line 17513, Address: 0x326e2c, Func Offset: 0x10c
	// Line 17514, Address: 0x326e3c, Func Offset: 0x11c
	// Line 17516, Address: 0x326e44, Func Offset: 0x124
	// Line 17517, Address: 0x326e58, Func Offset: 0x138
	// Line 17520, Address: 0x326e7c, Func Offset: 0x15c
	// Line 17522, Address: 0x326e8c, Func Offset: 0x16c
	// Line 17529, Address: 0x326e94, Func Offset: 0x174
	// Line 17530, Address: 0x326e9c, Func Offset: 0x17c
	// Line 17533, Address: 0x326eb8, Func Offset: 0x198
	// Line 17534, Address: 0x326ec4, Func Offset: 0x1a4
	// Line 17535, Address: 0x326ecc, Func Offset: 0x1ac
	// Line 17538, Address: 0x326f20, Func Offset: 0x200
	// Line 17539, Address: 0x326f24, Func Offset: 0x204
	// Line 17535, Address: 0x326f28, Func Offset: 0x208
	// Line 17537, Address: 0x326f2c, Func Offset: 0x20c
	// Line 17539, Address: 0x326f30, Func Offset: 0x210
	// Line 17542, Address: 0x326f58, Func Offset: 0x238
	// Line 17544, Address: 0x326f64, Func Offset: 0x244
	// Line 17545, Address: 0x326f70, Func Offset: 0x250
	// Line 17546, Address: 0x326f78, Func Offset: 0x258
	// Line 17550, Address: 0x326fa8, Func Offset: 0x288
	// Line 17556, Address: 0x326fbc, Func Offset: 0x29c
	// Line 17558, Address: 0x326fd0, Func Offset: 0x2b0
	// Line 17559, Address: 0x326fd8, Func Offset: 0x2b8
	// Line 17562, Address: 0x326fec, Func Offset: 0x2cc
	// Line 17564, Address: 0x326ff4, Func Offset: 0x2d4
	// Line 17567, Address: 0x327000, Func Offset: 0x2e0
	// Line 17569, Address: 0x327008, Func Offset: 0x2e8
	// Line 17570, Address: 0x327018, Func Offset: 0x2f8
	// Line 17576, Address: 0x327040, Func Offset: 0x320
	// Line 17577, Address: 0x327048, Func Offset: 0x328
	// Line 17578, Address: 0x327050, Func Offset: 0x330
	// Line 17580, Address: 0x3270a4, Func Offset: 0x384
	// Line 17582, Address: 0x3270c0, Func Offset: 0x3a0
	// Line 17587, Address: 0x3270d0, Func Offset: 0x3b0
	// Line 17588, Address: 0x3270e0, Func Offset: 0x3c0
	// Line 17592, Address: 0x3270fc, Func Offset: 0x3dc
	// Line 17594, Address: 0x327104, Func Offset: 0x3e4
	// Line 17599, Address: 0x32712c, Func Offset: 0x40c
	// Line 17600, Address: 0x327138, Func Offset: 0x418
	// Line 17602, Address: 0x327160, Func Offset: 0x440
	// Line 17604, Address: 0x32717c, Func Offset: 0x45c
	// Line 17607, Address: 0x327184, Func Offset: 0x464
	// Line 17611, Address: 0x3271ac, Func Offset: 0x48c
	// Line 17612, Address: 0x3271c8, Func Offset: 0x4a8
	// Line 17615, Address: 0x3271d0, Func Offset: 0x4b0
	// Line 17616, Address: 0x3271dc, Func Offset: 0x4bc
	// Line 17617, Address: 0x3271f8, Func Offset: 0x4d8
	// Line 17618, Address: 0x327254, Func Offset: 0x534
	// Line 17621, Address: 0x32725c, Func Offset: 0x53c
	// Line 17622, Address: 0x327274, Func Offset: 0x554
	// Line 17623, Address: 0x32728c, Func Offset: 0x56c
	// Line 17626, Address: 0x327294, Func Offset: 0x574
	// Line 17631, Address: 0x3272a0, Func Offset: 0x580
	// Line 17640, Address: 0x3272b0, Func Offset: 0x590
	// Line 17643, Address: 0x3272c8, Func Offset: 0x5a8
	// Line 17645, Address: 0x327324, Func Offset: 0x604
	// Line 17646, Address: 0x327334, Func Offset: 0x614
	// Line 17648, Address: 0x32733c, Func Offset: 0x61c
	// Line 17649, Address: 0x327350, Func Offset: 0x630
	// Line 17651, Address: 0x327374, Func Offset: 0x654
	// Line 17653, Address: 0x327384, Func Offset: 0x664
	// Line 17655, Address: 0x32738c, Func Offset: 0x66c
	// Line 17656, Address: 0x327420, Func Offset: 0x700
	// Line 17661, Address: 0x327458, Func Offset: 0x738
	// Line 17662, Address: 0x327460, Func Offset: 0x740
	// Line 17675, Address: 0x327468, Func Offset: 0x748
	// Line 17678, Address: 0x327474, Func Offset: 0x754
	// Line 17685, Address: 0x327488, Func Offset: 0x768
	// Line 17692, Address: 0x3274b0, Func Offset: 0x790
	// Line 17697, Address: 0x3274c0, Func Offset: 0x7a0
	// Line 17700, Address: 0x3274d8, Func Offset: 0x7b8
	// Line 17702, Address: 0x3274e0, Func Offset: 0x7c0
	// Line 17703, Address: 0x3274f0, Func Offset: 0x7d0
	// Line 17709, Address: 0x3274f8, Func Offset: 0x7d8
	// Line 17715, Address: 0x32753c, Func Offset: 0x81c
	// Line 17716, Address: 0x327548, Func Offset: 0x828
	// Line 17717, Address: 0x327550, Func Offset: 0x830
	// Line 17727, Address: 0x32759c, Func Offset: 0x87c
	// Line 17721, Address: 0x3275a0, Func Offset: 0x880
	// Line 17727, Address: 0x3275a4, Func Offset: 0x884
	// Line 17729, Address: 0x3275c8, Func Offset: 0x8a8
	// Line 17730, Address: 0x3275cc, Func Offset: 0x8ac
	// Line 17729, Address: 0x3275e4, Func Offset: 0x8c4
	// Line 17730, Address: 0x3275e8, Func Offset: 0x8c8
	// Line 17729, Address: 0x3275f4, Func Offset: 0x8d4
	// Line 17730, Address: 0x3275f8, Func Offset: 0x8d8
	// Line 17733, Address: 0x327640, Func Offset: 0x920
	// Line 17761, Address: 0x327650, Func Offset: 0x930
	// Line 17764, Address: 0x327654, Func Offset: 0x934
	// Line 17765, Address: 0x327658, Func Offset: 0x938
	// Line 17766, Address: 0x327660, Func Offset: 0x940
	// Line 17767, Address: 0x327664, Func Offset: 0x944
	// Line 17761, Address: 0x327668, Func Offset: 0x948
	// Line 17764, Address: 0x32768c, Func Offset: 0x96c
	// Line 17765, Address: 0x327690, Func Offset: 0x970
	// Line 17766, Address: 0x327694, Func Offset: 0x974
	// Line 17767, Address: 0x327698, Func Offset: 0x978
	// Line 17770, Address: 0x32769c, Func Offset: 0x97c
	// Line 17773, Address: 0x3276a4, Func Offset: 0x984
	// Line 17774, Address: 0x3276b8, Func Offset: 0x998
	// Line 17775, Address: 0x327708, Func Offset: 0x9e8
	// Line 17776, Address: 0x327710, Func Offset: 0x9f0
	// Line 17781, Address: 0x327750, Func Offset: 0xa30
	// Line 17782, Address: 0x327758, Func Offset: 0xa38
	// Line 17783, Address: 0x327760, Func Offset: 0xa40
	// Line 17784, Address: 0x327770, Func Offset: 0xa50
	// Line 17785, Address: 0x327778, Func Offset: 0xa58
	// Line 17790, Address: 0x327788, Func Offset: 0xa68
	// Line 17793, Address: 0x327790, Func Offset: 0xa70
	// Line 17795, Address: 0x3277a0, Func Offset: 0xa80
	// Line 17798, Address: 0x3277c0, Func Offset: 0xaa0
	// Line 17799, Address: 0x3277cc, Func Offset: 0xaac
	// Line 17801, Address: 0x3277f8, Func Offset: 0xad8
	// Line 17802, Address: 0x327800, Func Offset: 0xae0
	// Line 17803, Address: 0x327808, Func Offset: 0xae8
	// Line 17810, Address: 0x327814, Func Offset: 0xaf4
	// Line 17807, Address: 0x327818, Func Offset: 0xaf8
	// Line 17810, Address: 0x32781c, Func Offset: 0xafc
	// Line 17808, Address: 0x327820, Func Offset: 0xb00
	// Line 17809, Address: 0x327824, Func Offset: 0xb04
	// Line 17815, Address: 0x327828, Func Offset: 0xb08
	// Func End, Address: 0x327848, Func Offset: 0xb28
}

// zEntPlayerSurfDamageUpdate__FP4xEntP6xScenef
// Start address: 0x327850
void zEntPlayerSurfDamageUpdate(xEnt* p)
{
	xCollis* coll;
	xCollis* cend;
	xSurface* surf;
	int32 damaged;
	zSurfaceProps* prop;
	float32 dx;
	float32 dz;
	float32 mag;
	xEnt* cent;
	// Line 17277, Address: 0x327850, Func Offset: 0
	// Line 17279, Address: 0x327854, Func Offset: 0x4
	// Line 17277, Address: 0x327858, Func Offset: 0x8
	// Line 17279, Address: 0x32785c, Func Offset: 0xc
	// Line 17277, Address: 0x327860, Func Offset: 0x10
	// Line 17279, Address: 0x327870, Func Offset: 0x20
	// Line 17284, Address: 0x327884, Func Offset: 0x34
	// Line 17283, Address: 0x327888, Func Offset: 0x38
	// Line 17284, Address: 0x32788c, Func Offset: 0x3c
	// Line 17285, Address: 0x3278a4, Func Offset: 0x54
	// Line 17286, Address: 0x3278b0, Func Offset: 0x60
	// Line 17293, Address: 0x3278c0, Func Offset: 0x70
	// Line 17294, Address: 0x3278cc, Func Offset: 0x7c
	// Line 17298, Address: 0x3278e0, Func Offset: 0x90
	// Line 17299, Address: 0x3278e4, Func Offset: 0x94
	// Line 17302, Address: 0x3278f8, Func Offset: 0xa8
	// Line 17312, Address: 0x327924, Func Offset: 0xd4
	// Line 17313, Address: 0x327938, Func Offset: 0xe8
	// Line 17314, Address: 0x327950, Func Offset: 0x100
	// Line 17313, Address: 0x327954, Func Offset: 0x104
	// Line 17314, Address: 0x327958, Func Offset: 0x108
	// Line 17321, Address: 0x32797c, Func Offset: 0x12c
	// Line 17328, Address: 0x327990, Func Offset: 0x140
	// Line 17341, Address: 0x3279c4, Func Offset: 0x174
	// Line 17344, Address: 0x3279c8, Func Offset: 0x178
	// Line 17342, Address: 0x3279cc, Func Offset: 0x17c
	// Line 17344, Address: 0x3279d0, Func Offset: 0x180
	// Line 17341, Address: 0x3279d8, Func Offset: 0x188
	// Line 17342, Address: 0x3279dc, Func Offset: 0x18c
	// Line 17343, Address: 0x3279e0, Func Offset: 0x190
	// Line 17344, Address: 0x3279f8, Func Offset: 0x1a8
	// Line 17345, Address: 0x327a04, Func Offset: 0x1b4
	// Line 17346, Address: 0x327a08, Func Offset: 0x1b8
	// Line 17349, Address: 0x327a0c, Func Offset: 0x1bc
	// Line 17350, Address: 0x327a10, Func Offset: 0x1c0
	// Line 17345, Address: 0x327a14, Func Offset: 0x1c4
	// Line 17346, Address: 0x327a18, Func Offset: 0x1c8
	// Line 17347, Address: 0x327a28, Func Offset: 0x1d8
	// Line 17348, Address: 0x327a2c, Func Offset: 0x1dc
	// Line 17347, Address: 0x327a30, Func Offset: 0x1e0
	// Line 17348, Address: 0x327a3c, Func Offset: 0x1ec
	// Line 17349, Address: 0x327a4c, Func Offset: 0x1fc
	// Line 17350, Address: 0x327a50, Func Offset: 0x200
	// Line 17333, Address: 0x327a60, Func Offset: 0x210
	// Line 17350, Address: 0x327a64, Func Offset: 0x214
	// Line 17333, Address: 0x327a68, Func Offset: 0x218
	// Line 17350, Address: 0x327a6c, Func Offset: 0x21c
	// Line 17333, Address: 0x327a74, Func Offset: 0x224
	// Line 17350, Address: 0x327a7c, Func Offset: 0x22c
	// Line 17333, Address: 0x327a88, Func Offset: 0x238
	// Line 17350, Address: 0x327a8c, Func Offset: 0x23c
	// Line 17333, Address: 0x327a90, Func Offset: 0x240
	// Line 17350, Address: 0x327a98, Func Offset: 0x248
	// Line 17333, Address: 0x327ac4, Func Offset: 0x274
	// Line 17350, Address: 0x327ac8, Func Offset: 0x278
	// Line 17333, Address: 0x327ad0, Func Offset: 0x280
	// Line 17350, Address: 0x327ad8, Func Offset: 0x288
	// Line 17333, Address: 0x327b08, Func Offset: 0x2b8
	// Line 17350, Address: 0x327b0c, Func Offset: 0x2bc
	// Line 17333, Address: 0x327b20, Func Offset: 0x2d0
	// Line 17350, Address: 0x327b2c, Func Offset: 0x2dc
	// Line 17333, Address: 0x327b34, Func Offset: 0x2e4
	// Line 17350, Address: 0x327b38, Func Offset: 0x2e8
	// Line 17333, Address: 0x327b40, Func Offset: 0x2f0
	// Line 17350, Address: 0x327b44, Func Offset: 0x2f4
	// Line 17356, Address: 0x327b54, Func Offset: 0x304
	// Line 17358, Address: 0x327b58, Func Offset: 0x308
	// Line 17361, Address: 0x327b64, Func Offset: 0x314
	// Line 17363, Address: 0x327b6c, Func Offset: 0x31c
	// Line 17365, Address: 0x327b7c, Func Offset: 0x32c
	// Line 17374, Address: 0x327b8c, Func Offset: 0x33c
	// Line 17375, Address: 0x327ba0, Func Offset: 0x350
	// Line 17376, Address: 0x327ba8, Func Offset: 0x358
	// Line 17379, Address: 0x327bb0, Func Offset: 0x360
	// Line 17381, Address: 0x327bb8, Func Offset: 0x368
	// Line 17382, Address: 0x327bcc, Func Offset: 0x37c
	// Line 17383, Address: 0x327bd0, Func Offset: 0x380
	// Line 17384, Address: 0x327bdc, Func Offset: 0x38c
	// Line 17389, Address: 0x327be0, Func Offset: 0x390
	// Line 17397, Address: 0x327be8, Func Offset: 0x398
	// Line 17398, Address: 0x327bf8, Func Offset: 0x3a8
	// Line 17333, Address: 0x327c00, Func Offset: 0x3b0
	// Line 17398, Address: 0x327c04, Func Offset: 0x3b4
	// Line 17333, Address: 0x327c18, Func Offset: 0x3c8
	// Line 17398, Address: 0x327c24, Func Offset: 0x3d4
	// Func End, Address: 0x327c40, Func Offset: 0x3f0
}

// PlayerBoundUpdate__FP4xEntP5xVec3
// Start address: 0x327c40
void PlayerBoundUpdate(xEnt* ent, xVec3* pos)
{
	// Line 17259, Address: 0x327c40, Func Offset: 0
	// Line 17260, Address: 0x327c4c, Func Offset: 0xc
	// Line 17261, Address: 0x327c54, Func Offset: 0x14
	// Line 17267, Address: 0x327c58, Func Offset: 0x18
	// Line 17261, Address: 0x327c5c, Func Offset: 0x1c
	// Line 17266, Address: 0x327c64, Func Offset: 0x24
	// Line 17267, Address: 0x327c68, Func Offset: 0x28
	// Line 17266, Address: 0x327c80, Func Offset: 0x40
	// Line 17267, Address: 0x327c88, Func Offset: 0x48
	// Line 17269, Address: 0x327ccc, Func Offset: 0x8c
	// Func End, Address: 0x327cdc, Func Offset: 0x9c
}

// PlayerDepenQuery__FP4xEntP4xEntP6xScenefP7xCollis
// Start address: 0x327ce0
uint32 PlayerDepenQuery(xCollis* coll)
{
	xSurface* surf;
	zSurfaceProps* prop;
	// Line 17225, Address: 0x327ce0, Func Offset: 0
	// Line 17226, Address: 0x327ce4, Func Offset: 0x4
	// Line 17225, Address: 0x327ce8, Func Offset: 0x8
	// Line 17226, Address: 0x327cec, Func Offset: 0xc
	// Line 17253, Address: 0x327d00, Func Offset: 0x20
	// Line 17235, Address: 0x327d4c, Func Offset: 0x6c
	// Line 17253, Address: 0x327d50, Func Offset: 0x70
	// Line 17235, Address: 0x327d54, Func Offset: 0x74
	// Line 17238, Address: 0x327d64, Func Offset: 0x84
	// Line 17253, Address: 0x327d6c, Func Offset: 0x8c
	// Line 17245, Address: 0x327d70, Func Offset: 0x90
	// Line 17253, Address: 0x327d74, Func Offset: 0x94
	// Line 17254, Address: 0x327d7c, Func Offset: 0x9c
	// Func End, Address: 0x327d88, Func Offset: 0xa8
}

// zEntPlayerFloorUpdate__FP4xEntP6xScenef
// Start address: 0x327d90
void zEntPlayerFloorUpdate(xEnt* p, float32 dt)
{
	xCollis* fcoll;
	xSurface* fsurf;
	xVec3* vel;
	xVec3 dvel;
	float32 velmag;
	float32 decelmag;
	float32 slickLerp;
	xVec3* fnorm;
	xRay3 ray;
	xCollis rcoll;
	xEnt* fent;
	int32 i;
	float32 dave;
	int32 safecount;
	float32 dmin;
	float32 dmax;
	xVec3 sa;
	xVec3 sb;
	xVec3 na;
	xVec3 nb;
	xVec3* vel;
	xVec3* N;
	xVec3 X;
	xVec3 D;
	xMat3x3 N_to_Up;
	xVec3 D_flat;
	float32 ddotm;
	float32 s;
	float32 s;
	xVec3 lorigins[4];
	// Line 16712, Address: 0x327d90, Func Offset: 0
	// Line 16714, Address: 0x327dd4, Func Offset: 0x44
	// Line 16717, Address: 0x327de0, Func Offset: 0x50
	// Line 16741, Address: 0x327de8, Func Offset: 0x58
	// Line 16717, Address: 0x327dec, Func Offset: 0x5c
	// Line 16718, Address: 0x327df0, Func Offset: 0x60
	// Line 16742, Address: 0x327df4, Func Offset: 0x64
	// Line 16718, Address: 0x327df8, Func Offset: 0x68
	// Line 16741, Address: 0x327dfc, Func Offset: 0x6c
	// Line 16742, Address: 0x327e00, Func Offset: 0x70
	// Line 16743, Address: 0x327e0c, Func Offset: 0x7c
	// Line 16746, Address: 0x327e10, Func Offset: 0x80
	// Line 16745, Address: 0x327e14, Func Offset: 0x84
	// Line 16746, Address: 0x327e18, Func Offset: 0x88
	// Line 16749, Address: 0x327e1c, Func Offset: 0x8c
	// Line 16752, Address: 0x327e3c, Func Offset: 0xac
	// Line 16756, Address: 0x327e48, Func Offset: 0xb8
	// Line 16758, Address: 0x327e5c, Func Offset: 0xcc
	// Line 16759, Address: 0x327e68, Func Offset: 0xd8
	// Line 16760, Address: 0x327e70, Func Offset: 0xe0
	// Line 16759, Address: 0x327e74, Func Offset: 0xe4
	// Line 16760, Address: 0x327e78, Func Offset: 0xe8
	// Line 16762, Address: 0x327e80, Func Offset: 0xf0
	// Line 16760, Address: 0x327e88, Func Offset: 0xf8
	// Line 16764, Address: 0x327e8c, Func Offset: 0xfc
	// Line 16767, Address: 0x327e94, Func Offset: 0x104
	// Line 16765, Address: 0x327e98, Func Offset: 0x108
	// Line 16766, Address: 0x327e9c, Func Offset: 0x10c
	// Line 16767, Address: 0x327ea0, Func Offset: 0x110
	// Line 16765, Address: 0x327ea4, Func Offset: 0x114
	// Line 16767, Address: 0x327ea8, Func Offset: 0x118
	// Line 16768, Address: 0x327eb0, Func Offset: 0x120
	// Line 16770, Address: 0x327eb4, Func Offset: 0x124
	// Line 16772, Address: 0x327ecc, Func Offset: 0x13c
	// Line 16773, Address: 0x327ee4, Func Offset: 0x154
	// Line 16775, Address: 0x327ee8, Func Offset: 0x158
	// Line 16776, Address: 0x327f00, Func Offset: 0x170
	// Line 16780, Address: 0x327f08, Func Offset: 0x178
	// Line 16784, Address: 0x327f28, Func Offset: 0x198
	// Line 16789, Address: 0x327f48, Func Offset: 0x1b8
	// Line 16784, Address: 0x327f4c, Func Offset: 0x1bc
	// Line 16789, Address: 0x327f50, Func Offset: 0x1c0
	// Line 16790, Address: 0x327f54, Func Offset: 0x1c4
	// Line 16789, Address: 0x327f58, Func Offset: 0x1c8
	// Line 16788, Address: 0x327f64, Func Offset: 0x1d4
	// Line 16790, Address: 0x327f68, Func Offset: 0x1d8
	// Line 16791, Address: 0x327f70, Func Offset: 0x1e0
	// Line 16790, Address: 0x327f78, Func Offset: 0x1e8
	// Line 16791, Address: 0x327f7c, Func Offset: 0x1ec
	// Line 16797, Address: 0x327f80, Func Offset: 0x1f0
	// Line 16799, Address: 0x327f94, Func Offset: 0x204
	// Line 16805, Address: 0x327fa8, Func Offset: 0x218
	// Line 16807, Address: 0x327fb4, Func Offset: 0x224
	// Line 16808, Address: 0x327fe4, Func Offset: 0x254
	// Line 16809, Address: 0x327fe8, Func Offset: 0x258
	// Line 16810, Address: 0x327ff0, Func Offset: 0x260
	// Line 16811, Address: 0x327ff8, Func Offset: 0x268
	// Line 16814, Address: 0x327ffc, Func Offset: 0x26c
	// Line 16815, Address: 0x328000, Func Offset: 0x270
	// Line 16816, Address: 0x32800c, Func Offset: 0x27c
	// Line 16820, Address: 0x328018, Func Offset: 0x288
	// Line 16823, Address: 0x328024, Func Offset: 0x294
	// Line 16824, Address: 0x32802c, Func Offset: 0x29c
	// Line 16827, Address: 0x328034, Func Offset: 0x2a4
	// Line 16833, Address: 0x328038, Func Offset: 0x2a8
	// Line 16834, Address: 0x328040, Func Offset: 0x2b0
	// Line 16837, Address: 0x328058, Func Offset: 0x2c8
	// Line 16838, Address: 0x32808c, Func Offset: 0x2fc
	// Line 16837, Address: 0x328090, Func Offset: 0x300
	// Line 16839, Address: 0x328098, Func Offset: 0x308
	// Line 16844, Address: 0x32809c, Func Offset: 0x30c
	// Line 16845, Address: 0x3280b8, Func Offset: 0x328
	// Line 16844, Address: 0x3280bc, Func Offset: 0x32c
	// Line 16845, Address: 0x3280c0, Func Offset: 0x330
	// Line 16846, Address: 0x3280c8, Func Offset: 0x338
	// Line 16848, Address: 0x3280d8, Func Offset: 0x348
	// Line 16849, Address: 0x3280e8, Func Offset: 0x358
	// Line 16850, Address: 0x3280f8, Func Offset: 0x368
	// Line 16851, Address: 0x328104, Func Offset: 0x374
	// Line 16853, Address: 0x32810c, Func Offset: 0x37c
	// Line 16859, Address: 0x328114, Func Offset: 0x384
	// Line 16864, Address: 0x328150, Func Offset: 0x3c0
	// Line 16861, Address: 0x32815c, Func Offset: 0x3cc
	// Line 16862, Address: 0x328164, Func Offset: 0x3d4
	// Line 16861, Address: 0x32816c, Func Offset: 0x3dc
	// Line 16862, Address: 0x328174, Func Offset: 0x3e4
	// Line 16861, Address: 0x328180, Func Offset: 0x3f0
	// Line 16862, Address: 0x328184, Func Offset: 0x3f4
	// Line 16865, Address: 0x328194, Func Offset: 0x404
	// Line 16866, Address: 0x3281a0, Func Offset: 0x410
	// Line 16868, Address: 0x3281a4, Func Offset: 0x414
	// Line 16869, Address: 0x3281ac, Func Offset: 0x41c
	// Line 16870, Address: 0x3281b8, Func Offset: 0x428
	// Line 16871, Address: 0x3281c4, Func Offset: 0x434
	// Line 16875, Address: 0x3281cc, Func Offset: 0x43c
	// Line 16876, Address: 0x3281d4, Func Offset: 0x444
	// Line 16877, Address: 0x3281e4, Func Offset: 0x454
	// Line 16878, Address: 0x3281ec, Func Offset: 0x45c
	// Line 16879, Address: 0x3281f8, Func Offset: 0x468
	// Line 16884, Address: 0x328200, Func Offset: 0x470
	// Line 16891, Address: 0x328208, Func Offset: 0x478
	// Line 16892, Address: 0x328218, Func Offset: 0x488
	// Line 16894, Address: 0x328238, Func Offset: 0x4a8
	// Line 16895, Address: 0x328240, Func Offset: 0x4b0
	// Line 16902, Address: 0x328254, Func Offset: 0x4c4
	// Line 16905, Address: 0x328258, Func Offset: 0x4c8
	// Line 16906, Address: 0x32825c, Func Offset: 0x4cc
	// Line 16909, Address: 0x328260, Func Offset: 0x4d0
	// Line 16911, Address: 0x328264, Func Offset: 0x4d4
	// Line 16895, Address: 0x328268, Func Offset: 0x4d8
	// Line 16911, Address: 0x328274, Func Offset: 0x4e4
	// Line 16895, Address: 0x328278, Func Offset: 0x4e8
	// Line 16910, Address: 0x328288, Func Offset: 0x4f8
	// Line 16900, Address: 0x32828c, Func Offset: 0x4fc
	// Line 16910, Address: 0x328290, Func Offset: 0x500
	// Line 16911, Address: 0x328294, Func Offset: 0x504
	// Line 16900, Address: 0x32829c, Func Offset: 0x50c
	// Line 16902, Address: 0x3282b0, Func Offset: 0x520
	// Line 16905, Address: 0x3282b4, Func Offset: 0x524
	// Line 16906, Address: 0x3282b8, Func Offset: 0x528
	// Line 16910, Address: 0x3282bc, Func Offset: 0x52c
	// Line 16901, Address: 0x3282c0, Func Offset: 0x530
	// Line 16903, Address: 0x3282c4, Func Offset: 0x534
	// Line 16904, Address: 0x3282c8, Func Offset: 0x538
	// Line 16907, Address: 0x3282cc, Func Offset: 0x53c
	// Line 16908, Address: 0x3282d0, Func Offset: 0x540
	// Line 16911, Address: 0x3282d4, Func Offset: 0x544
	// Line 16912, Address: 0x3282dc, Func Offset: 0x54c
	// Line 16924, Address: 0x3282e8, Func Offset: 0x558
	// Line 16922, Address: 0x3282f0, Func Offset: 0x560
	// Line 16924, Address: 0x3282f4, Func Offset: 0x564
	// Line 16921, Address: 0x3282f8, Func Offset: 0x568
	// Line 16923, Address: 0x328300, Func Offset: 0x570
	// Line 16925, Address: 0x328308, Func Offset: 0x578
	// Line 16924, Address: 0x32830c, Func Offset: 0x57c
	// Line 16921, Address: 0x328310, Func Offset: 0x580
	// Line 16926, Address: 0x328314, Func Offset: 0x584
	// Line 16928, Address: 0x32831c, Func Offset: 0x58c
	// Line 16934, Address: 0x328320, Func Offset: 0x590
	// Line 16937, Address: 0x32832c, Func Offset: 0x59c
	// Line 16939, Address: 0x328340, Func Offset: 0x5b0
	// Line 16942, Address: 0x3283b0, Func Offset: 0x620
	// Line 16940, Address: 0x3283b4, Func Offset: 0x624
	// Line 16943, Address: 0x3283b8, Func Offset: 0x628
	// Line 16941, Address: 0x3283bc, Func Offset: 0x62c
	// Line 16942, Address: 0x3283c0, Func Offset: 0x630
	// Line 16945, Address: 0x3283c4, Func Offset: 0x634
	// Line 16946, Address: 0x3283d4, Func Offset: 0x644
	// Line 16947, Address: 0x3283e0, Func Offset: 0x650
	// Line 16948, Address: 0x3283e8, Func Offset: 0x658
	// Line 16949, Address: 0x3283f4, Func Offset: 0x664
	// Line 16954, Address: 0x3283f8, Func Offset: 0x668
	// Line 16955, Address: 0x328410, Func Offset: 0x680
	// Line 16954, Address: 0x32841c, Func Offset: 0x68c
	// Line 16955, Address: 0x328420, Func Offset: 0x690
	// Line 16956, Address: 0x328424, Func Offset: 0x694
	// Line 16954, Address: 0x328428, Func Offset: 0x698
	// Line 16955, Address: 0x32842c, Func Offset: 0x69c
	// Line 16954, Address: 0x328430, Func Offset: 0x6a0
	// Line 16956, Address: 0x32843c, Func Offset: 0x6ac
	// Line 16955, Address: 0x328440, Func Offset: 0x6b0
	// Line 16956, Address: 0x328444, Func Offset: 0x6b4
	// Line 16957, Address: 0x32844c, Func Offset: 0x6bc
	// Line 16958, Address: 0x328450, Func Offset: 0x6c0
	// Line 16959, Address: 0x328468, Func Offset: 0x6d8
	// Line 16962, Address: 0x32846c, Func Offset: 0x6dc
	// Line 16964, Address: 0x328480, Func Offset: 0x6f0
	// Line 17009, Address: 0x32848c, Func Offset: 0x6fc
	// Line 17010, Address: 0x3284a4, Func Offset: 0x714
	// Line 17015, Address: 0x328514, Func Offset: 0x784
	// Line 17011, Address: 0x328518, Func Offset: 0x788
	// Line 17015, Address: 0x32851c, Func Offset: 0x78c
	// Line 17014, Address: 0x328520, Func Offset: 0x790
	// Line 17012, Address: 0x328524, Func Offset: 0x794
	// Line 17013, Address: 0x328528, Func Offset: 0x798
	// Line 17015, Address: 0x32852c, Func Offset: 0x79c
	// Line 17016, Address: 0x328538, Func Offset: 0x7a8
	// Line 17017, Address: 0x32854c, Func Offset: 0x7bc
	// Line 17016, Address: 0x328550, Func Offset: 0x7c0
	// Line 17017, Address: 0x328558, Func Offset: 0x7c8
	// Line 17016, Address: 0x328564, Func Offset: 0x7d4
	// Line 17017, Address: 0x328568, Func Offset: 0x7d8
	// Line 17016, Address: 0x32856c, Func Offset: 0x7dc
	// Line 17017, Address: 0x328570, Func Offset: 0x7e0
	// Line 17016, Address: 0x328574, Func Offset: 0x7e4
	// Line 17017, Address: 0x328578, Func Offset: 0x7e8
	// Line 17016, Address: 0x32857c, Func Offset: 0x7ec
	// Line 17018, Address: 0x328580, Func Offset: 0x7f0
	// Line 17020, Address: 0x32858c, Func Offset: 0x7fc
	// Line 17021, Address: 0x32859c, Func Offset: 0x80c
	// Line 17024, Address: 0x3285a0, Func Offset: 0x810
	// Line 17031, Address: 0x3285b0, Func Offset: 0x820
	// Line 17032, Address: 0x3285cc, Func Offset: 0x83c
	// Line 17031, Address: 0x3285d8, Func Offset: 0x848
	// Line 17032, Address: 0x3285dc, Func Offset: 0x84c
	// Line 17033, Address: 0x3285ec, Func Offset: 0x85c
	// Line 17032, Address: 0x3285f0, Func Offset: 0x860
	// Line 17034, Address: 0x3285f4, Func Offset: 0x864
	// Line 17032, Address: 0x3285f8, Func Offset: 0x868
	// Line 17036, Address: 0x3285fc, Func Offset: 0x86c
	// Line 17037, Address: 0x328604, Func Offset: 0x874
	// Line 17047, Address: 0x328610, Func Offset: 0x880
	// Line 17051, Address: 0x328620, Func Offset: 0x890
	// Line 17047, Address: 0x328628, Func Offset: 0x898
	// Line 17051, Address: 0x32862c, Func Offset: 0x89c
	// Line 17048, Address: 0x328640, Func Offset: 0x8b0
	// Line 17049, Address: 0x328644, Func Offset: 0x8b4
	// Line 17051, Address: 0x328648, Func Offset: 0x8b8
	// Line 17052, Address: 0x32864c, Func Offset: 0x8bc
	// Line 17053, Address: 0x328688, Func Offset: 0x8f8
	// Line 17057, Address: 0x32868c, Func Offset: 0x8fc
	// Line 17053, Address: 0x328694, Func Offset: 0x904
	// Line 17057, Address: 0x3286a0, Func Offset: 0x910
	// Line 17062, Address: 0x3286ac, Func Offset: 0x91c
	// Line 17057, Address: 0x3286b0, Func Offset: 0x920
	// Line 17063, Address: 0x3286b4, Func Offset: 0x924
	// Line 17062, Address: 0x3286b8, Func Offset: 0x928
	// Line 17070, Address: 0x3286bc, Func Offset: 0x92c
	// Line 17066, Address: 0x3286c4, Func Offset: 0x934
	// Line 17063, Address: 0x3286c8, Func Offset: 0x938
	// Line 17066, Address: 0x3286cc, Func Offset: 0x93c
	// Line 17063, Address: 0x3286d0, Func Offset: 0x940
	// Line 17066, Address: 0x3286d4, Func Offset: 0x944
	// Line 17062, Address: 0x3286e0, Func Offset: 0x950
	// Line 17066, Address: 0x3286e4, Func Offset: 0x954
	// Line 17062, Address: 0x3286e8, Func Offset: 0x958
	// Line 17066, Address: 0x3286f4, Func Offset: 0x964
	// Line 17062, Address: 0x3286f8, Func Offset: 0x968
	// Line 17068, Address: 0x3286fc, Func Offset: 0x96c
	// Line 17070, Address: 0x328700, Func Offset: 0x970
	// Line 17062, Address: 0x328704, Func Offset: 0x974
	// Line 17068, Address: 0x328720, Func Offset: 0x990
	// Line 17062, Address: 0x328724, Func Offset: 0x994
	// Line 17066, Address: 0x328728, Func Offset: 0x998
	// Line 17068, Address: 0x328730, Func Offset: 0x9a0
	// Line 17066, Address: 0x328734, Func Offset: 0x9a4
	// Line 17063, Address: 0x32873c, Func Offset: 0x9ac
	// Line 17066, Address: 0x328744, Func Offset: 0x9b4
	// Line 17065, Address: 0x328758, Func Offset: 0x9c8
	// Line 17066, Address: 0x32875c, Func Offset: 0x9cc
	// Line 17065, Address: 0x328760, Func Offset: 0x9d0
	// Line 17064, Address: 0x328764, Func Offset: 0x9d4
	// Line 17066, Address: 0x32877c, Func Offset: 0x9ec
	// Line 17065, Address: 0x32878c, Func Offset: 0x9fc
	// Line 17066, Address: 0x328790, Func Offset: 0xa00
	// Line 17064, Address: 0x328794, Func Offset: 0xa04
	// Line 17067, Address: 0x328798, Func Offset: 0xa08
	// Line 17064, Address: 0x32879c, Func Offset: 0xa0c
	// Line 17067, Address: 0x3287a0, Func Offset: 0xa10
	// Line 17068, Address: 0x3287a8, Func Offset: 0xa18
	// Line 17067, Address: 0x3287ac, Func Offset: 0xa1c
	// Line 17068, Address: 0x3287b0, Func Offset: 0xa20
	// Line 17067, Address: 0x3287b4, Func Offset: 0xa24
	// Line 17068, Address: 0x3287bc, Func Offset: 0xa2c
	// Line 17067, Address: 0x3287c0, Func Offset: 0xa30
	// Line 17068, Address: 0x3287c8, Func Offset: 0xa38
	// Line 17064, Address: 0x3287d0, Func Offset: 0xa40
	// Line 17067, Address: 0x3287d4, Func Offset: 0xa44
	// Line 17070, Address: 0x3287d8, Func Offset: 0xa48
	// Line 17119, Address: 0x3287e8, Func Offset: 0xa58
	// Line 17122, Address: 0x3287f8, Func Offset: 0xa68
	// Line 17120, Address: 0x3287fc, Func Offset: 0xa6c
	// Line 17122, Address: 0x328800, Func Offset: 0xa70
	// Line 17134, Address: 0x328870, Func Offset: 0xae0
	// Line 17135, Address: 0x328888, Func Offset: 0xaf8
	// Line 17137, Address: 0x328890, Func Offset: 0xb00
	// Line 17140, Address: 0x328894, Func Offset: 0xb04
	// Line 17144, Address: 0x32889c, Func Offset: 0xb0c
	// Line 17157, Address: 0x3288f0, Func Offset: 0xb60
	// Line 17160, Address: 0x3288f4, Func Offset: 0xb64
	// Line 17157, Address: 0x3288fc, Func Offset: 0xb6c
	// Line 17158, Address: 0x328900, Func Offset: 0xb70
	// Line 17157, Address: 0x328904, Func Offset: 0xb74
	// Line 17159, Address: 0x328908, Func Offset: 0xb78
	// Line 17160, Address: 0x32890c, Func Offset: 0xb7c
	// Line 17162, Address: 0x328920, Func Offset: 0xb90
	// Line 17161, Address: 0x328924, Func Offset: 0xb94
	// Line 17162, Address: 0x328928, Func Offset: 0xb98
	// Line 17160, Address: 0x32892c, Func Offset: 0xb9c
	// Line 17161, Address: 0x328930, Func Offset: 0xba0
	// Line 17162, Address: 0x328968, Func Offset: 0xbd8
	// Line 17167, Address: 0x328970, Func Offset: 0xbe0
	// Line 17169, Address: 0x3289b4, Func Offset: 0xc24
	// Line 17171, Address: 0x328a14, Func Offset: 0xc84
	// Line 17173, Address: 0x328a30, Func Offset: 0xca0
	// Line 17179, Address: 0x328a50, Func Offset: 0xcc0
	// Line 17185, Address: 0x328a5c, Func Offset: 0xccc
	// Line 17189, Address: 0x328a60, Func Offset: 0xcd0
	// Line 17180, Address: 0x328a64, Func Offset: 0xcd4
	// Line 17185, Address: 0x328a74, Func Offset: 0xce4
	// Line 17186, Address: 0x328a84, Func Offset: 0xcf4
	// Line 17189, Address: 0x328a98, Func Offset: 0xd08
	// Line 17190, Address: 0x328aac, Func Offset: 0xd1c
	// Line 17193, Address: 0x328ab0, Func Offset: 0xd20
	// Line 17194, Address: 0x328ab8, Func Offset: 0xd28
	// Line 17195, Address: 0x328ac4, Func Offset: 0xd34
	// Line 17196, Address: 0x328acc, Func Offset: 0xd3c
	// Line 17199, Address: 0x328adc, Func Offset: 0xd4c
	// Line 17198, Address: 0x328ae0, Func Offset: 0xd50
	// Line 17199, Address: 0x328ae4, Func Offset: 0xd54
	// Line 17200, Address: 0x328ae8, Func Offset: 0xd58
	// Line 17202, Address: 0x328aec, Func Offset: 0xd5c
	// Line 17200, Address: 0x328af0, Func Offset: 0xd60
	// Line 17201, Address: 0x328af4, Func Offset: 0xd64
	// Line 17198, Address: 0x328af8, Func Offset: 0xd68
	// Line 17199, Address: 0x328b00, Func Offset: 0xd70
	// Line 17200, Address: 0x328b04, Func Offset: 0xd74
	// Line 17199, Address: 0x328b08, Func Offset: 0xd78
	// Line 17200, Address: 0x328b0c, Func Offset: 0xd7c
	// Line 17201, Address: 0x328b20, Func Offset: 0xd90
	// Line 17202, Address: 0x328b38, Func Offset: 0xda8
	// Line 17204, Address: 0x328b40, Func Offset: 0xdb0
	// Line 17206, Address: 0x328b44, Func Offset: 0xdb4
	// Line 17207, Address: 0x328b4c, Func Offset: 0xdbc
	// Line 17210, Address: 0x328b58, Func Offset: 0xdc8
	// Line 17207, Address: 0x328b5c, Func Offset: 0xdcc
	// Line 17210, Address: 0x328b60, Func Offset: 0xdd0
	// Line 17211, Address: 0x328b68, Func Offset: 0xdd8
	// Line 17212, Address: 0x328b74, Func Offset: 0xde4
	// Line 17213, Address: 0x328b84, Func Offset: 0xdf4
	// Line 17214, Address: 0x328ba0, Func Offset: 0xe10
	// Line 17215, Address: 0x328ba8, Func Offset: 0xe18
	// Line 17216, Address: 0x328bb4, Func Offset: 0xe24
	// Line 17220, Address: 0x328bbc, Func Offset: 0xe2c
	// Func End, Address: 0x328c00, Func Offset: 0xe70
}

// zEntPlayerTSlideUpdate__FP4xEntP6xScenef
// Start address: 0x328c00
void zEntPlayerTSlideUpdate(xEnt* p, float32 dt)
{
	float32 t;
	float32 s;
	float32 t;
	float32 s;
	int8 @22373;
	float32 tmax;
	int8 @22361;
	float32 tmax;
	// Line 16503, Address: 0x328c00, Func Offset: 0
	// Line 16507, Address: 0x328c04, Func Offset: 0x4
	// Line 16503, Address: 0x328c08, Func Offset: 0x8
	// Line 16510, Address: 0x328c0c, Func Offset: 0xc
	// Line 16503, Address: 0x328c10, Func Offset: 0x10
	// Line 16507, Address: 0x328c1c, Func Offset: 0x1c
	// Line 16510, Address: 0x328c24, Func Offset: 0x24
	// Line 16512, Address: 0x328c2c, Func Offset: 0x2c
	// Line 16510, Address: 0x328c30, Func Offset: 0x30
	// Line 16512, Address: 0x328c34, Func Offset: 0x34
	// Line 16510, Address: 0x328c38, Func Offset: 0x38
	// Line 16512, Address: 0x328c3c, Func Offset: 0x3c
	// Line 16517, Address: 0x328c50, Func Offset: 0x50
	// Line 16548, Address: 0x328c58, Func Offset: 0x58
	// Line 16556, Address: 0x328c6c, Func Offset: 0x6c
	// Line 16558, Address: 0x328c7c, Func Offset: 0x7c
	// Line 16560, Address: 0x328c80, Func Offset: 0x80
	// Line 16568, Address: 0x328c84, Func Offset: 0x84
	// Line 16570, Address: 0x328ca8, Func Offset: 0xa8
	// Line 16574, Address: 0x328cac, Func Offset: 0xac
	// Line 16581, Address: 0x328ccc, Func Offset: 0xcc
	// Line 16582, Address: 0x328ce4, Func Offset: 0xe4
	// Line 16584, Address: 0x328cf0, Func Offset: 0xf0
	// Line 16585, Address: 0x328d00, Func Offset: 0x100
	// Line 16590, Address: 0x328d0c, Func Offset: 0x10c
	// Line 16589, Address: 0x328d10, Func Offset: 0x110
	// Line 16590, Address: 0x328d18, Func Offset: 0x118
	// Line 16593, Address: 0x328d34, Func Offset: 0x134
	// Line 16598, Address: 0x328d44, Func Offset: 0x144
	// Line 16599, Address: 0x328d60, Func Offset: 0x160
	// Line 16600, Address: 0x328d6c, Func Offset: 0x16c
	// Line 16602, Address: 0x328d7c, Func Offset: 0x17c
	// Line 16607, Address: 0x328d88, Func Offset: 0x188
	// Line 16606, Address: 0x328d8c, Func Offset: 0x18c
	// Line 16607, Address: 0x328d94, Func Offset: 0x194
	// Line 16610, Address: 0x328db0, Func Offset: 0x1b0
	// Line 16615, Address: 0x328dbc, Func Offset: 0x1bc
	// Line 16619, Address: 0x328dcc, Func Offset: 0x1cc
	// Line 16637, Address: 0x328ddc, Func Offset: 0x1dc
	// Line 16531, Address: 0x328e08, Func Offset: 0x208
	// Line 16637, Address: 0x328e0c, Func Offset: 0x20c
	// Line 16548, Address: 0x328e48, Func Offset: 0x248
	// Line 16584, Address: 0x328e50, Func Offset: 0x250
	// Line 16637, Address: 0x328e54, Func Offset: 0x254
	// Line 16584, Address: 0x328e5c, Func Offset: 0x25c
	// Line 16637, Address: 0x328e68, Func Offset: 0x268
	// Line 16587, Address: 0x328e74, Func Offset: 0x274
	// Line 16600, Address: 0x328e7c, Func Offset: 0x27c
	// Line 16637, Address: 0x328e80, Func Offset: 0x280
	// Line 16600, Address: 0x328e88, Func Offset: 0x288
	// Line 16637, Address: 0x328e94, Func Offset: 0x294
	// Line 16604, Address: 0x328ea0, Func Offset: 0x2a0
	// Line 16623, Address: 0x328eb0, Func Offset: 0x2b0
	// Line 16637, Address: 0x328eb4, Func Offset: 0x2b4
	// Line 16621, Address: 0x328eb8, Func Offset: 0x2b8
	// Line 16637, Address: 0x328ebc, Func Offset: 0x2bc
	// Line 16621, Address: 0x328ecc, Func Offset: 0x2cc
	// Line 16637, Address: 0x328ed0, Func Offset: 0x2d0
	// Line 16622, Address: 0x328ed4, Func Offset: 0x2d4
	// Line 16637, Address: 0x328ed8, Func Offset: 0x2d8
	// Func End, Address: 0x328f30, Func Offset: 0x330
}

// SlideTrackUpdate__FP4xEnt
// Start address: 0x328f30
void SlideTrackUpdate(xEnt* p)
{
	xCollis colltmp;
	xSphere collsph;
	xQCData qcd;
	RpIntersection isect;
	xVec3* center;
	TrackPolyData tpoly;
	int32 triIndex;
	uint32 i;
	xEnt* trackEnt;
	RwFrame* frame;
	RpGeometry* geom;
	RpTriangle* tri;
	RwTexCoords* tex;
	RwV3d* vert;
	uint16* triidx;
	xVec3 transformedVert0;
	xVec3 transformedVert1;
	xVec3 transformedVert2;
	float32 vcenter;
	float32 dvdx;
	float32 dvdz;
	// Line 16334, Address: 0x328f30, Func Offset: 0
	// Line 16339, Address: 0x328f44, Func Offset: 0x14
	// Line 16334, Address: 0x328f48, Func Offset: 0x18
	// Line 16341, Address: 0x328f4c, Func Offset: 0x1c
	// Line 16334, Address: 0x328f50, Func Offset: 0x20
	// Line 16339, Address: 0x328f94, Func Offset: 0x64
	// Line 16340, Address: 0x328fac, Func Offset: 0x7c
	// Line 16341, Address: 0x328fb4, Func Offset: 0x84
	// Line 16348, Address: 0x328fc4, Func Offset: 0x94
	// Line 16347, Address: 0x328fc8, Func Offset: 0x98
	// Line 16348, Address: 0x328fcc, Func Offset: 0x9c
	// Line 16347, Address: 0x328fd0, Func Offset: 0xa0
	// Line 16348, Address: 0x328fd4, Func Offset: 0xa4
	// Line 16349, Address: 0x328fd8, Func Offset: 0xa8
	// Line 16348, Address: 0x328fdc, Func Offset: 0xac
	// Line 16351, Address: 0x328fe0, Func Offset: 0xb0
	// Line 16349, Address: 0x328fe4, Func Offset: 0xb4
	// Line 16353, Address: 0x328fe8, Func Offset: 0xb8
	// Line 16359, Address: 0x328ff0, Func Offset: 0xc0
	// Line 16349, Address: 0x328ffc, Func Offset: 0xcc
	// Line 16359, Address: 0x329000, Func Offset: 0xd0
	// Line 16350, Address: 0x329004, Func Offset: 0xd4
	// Line 16351, Address: 0x329014, Func Offset: 0xe4
	// Line 16350, Address: 0x329018, Func Offset: 0xe8
	// Line 16352, Address: 0x329020, Func Offset: 0xf0
	// Line 16353, Address: 0x329040, Func Offset: 0x110
	// Line 16359, Address: 0x329048, Func Offset: 0x118
	// Line 16362, Address: 0x329060, Func Offset: 0x130
	// Line 16363, Address: 0x329064, Func Offset: 0x134
	// Line 16367, Address: 0x329078, Func Offset: 0x148
	// Line 16368, Address: 0x329088, Func Offset: 0x158
	// Line 16395, Address: 0x32909c, Func Offset: 0x16c
	// Line 16374, Address: 0x3290a8, Func Offset: 0x178
	// Line 16375, Address: 0x3290ac, Func Offset: 0x17c
	// Line 16374, Address: 0x3290b0, Func Offset: 0x180
	// Line 16375, Address: 0x3290b4, Func Offset: 0x184
	// Line 16393, Address: 0x329134, Func Offset: 0x204
	// Line 16394, Address: 0x329140, Func Offset: 0x210
	// Line 16395, Address: 0x329144, Func Offset: 0x214
	// Line 16400, Address: 0x329154, Func Offset: 0x224
	// Line 16402, Address: 0x329170, Func Offset: 0x240
	// Line 16403, Address: 0x329194, Func Offset: 0x264
	// Line 16407, Address: 0x329198, Func Offset: 0x268
	// Line 16410, Address: 0x3291a8, Func Offset: 0x278
	// Line 16416, Address: 0x3291c0, Func Offset: 0x290
	// Line 16419, Address: 0x3291e0, Func Offset: 0x2b0
	// Line 16420, Address: 0x3291e8, Func Offset: 0x2b8
	// Line 16425, Address: 0x3291f4, Func Offset: 0x2c4
	// Line 16420, Address: 0x3291f8, Func Offset: 0x2c8
	// Line 16432, Address: 0x3291fc, Func Offset: 0x2cc
	// Line 16420, Address: 0x329200, Func Offset: 0x2d0
	// Line 16424, Address: 0x329204, Func Offset: 0x2d4
	// Line 16432, Address: 0x329208, Func Offset: 0x2d8
	// Line 16424, Address: 0x32920c, Func Offset: 0x2dc
	// Line 16425, Address: 0x329210, Func Offset: 0x2e0
	// Line 16426, Address: 0x329214, Func Offset: 0x2e4
	// Line 16425, Address: 0x329218, Func Offset: 0x2e8
	// Line 16427, Address: 0x32921c, Func Offset: 0x2ec
	// Line 16428, Address: 0x329220, Func Offset: 0x2f0
	// Line 16427, Address: 0x329224, Func Offset: 0x2f4
	// Line 16428, Address: 0x32922c, Func Offset: 0x2fc
	// Line 16432, Address: 0x329238, Func Offset: 0x308
	// Line 16433, Address: 0x329288, Func Offset: 0x358
	// Line 16432, Address: 0x329290, Func Offset: 0x360
	// Line 16433, Address: 0x329294, Func Offset: 0x364
	// Line 16432, Address: 0x32929c, Func Offset: 0x36c
	// Line 16433, Address: 0x3292a8, Func Offset: 0x378
	// Line 16434, Address: 0x3292fc, Func Offset: 0x3cc
	// Line 16433, Address: 0x329300, Func Offset: 0x3d0
	// Line 16434, Address: 0x329304, Func Offset: 0x3d4
	// Line 16433, Address: 0x329310, Func Offset: 0x3e0
	// Line 16434, Address: 0x32931c, Func Offset: 0x3ec
	// Line 16454, Address: 0x32938c, Func Offset: 0x45c
	// Line 16434, Address: 0x329390, Func Offset: 0x460
	// Line 16454, Address: 0x329394, Func Offset: 0x464
	// Line 16434, Address: 0x329398, Func Offset: 0x468
	// Line 16454, Address: 0x32939c, Func Offset: 0x46c
	// Line 16456, Address: 0x3293a8, Func Offset: 0x478
	// Line 16454, Address: 0x3293ac, Func Offset: 0x47c
	// Line 16456, Address: 0x3293b0, Func Offset: 0x480
	// Line 16454, Address: 0x3293b4, Func Offset: 0x484
	// Line 16456, Address: 0x3293bc, Func Offset: 0x48c
	// Line 16466, Address: 0x32944c, Func Offset: 0x51c
	// Line 16459, Address: 0x3294b0, Func Offset: 0x580
	// Line 16466, Address: 0x3294b4, Func Offset: 0x584
	// Line 16459, Address: 0x3294b8, Func Offset: 0x588
	// Line 16473, Address: 0x3294d8, Func Offset: 0x5a8
	// Line 16459, Address: 0x3294e0, Func Offset: 0x5b0
	// Line 16473, Address: 0x3294f0, Func Offset: 0x5c0
	// Line 16459, Address: 0x3294f4, Func Offset: 0x5c4
	// Line 16473, Address: 0x3294fc, Func Offset: 0x5cc
	// Line 16459, Address: 0x329500, Func Offset: 0x5d0
	// Line 16466, Address: 0x329510, Func Offset: 0x5e0
	// Line 16473, Address: 0x329520, Func Offset: 0x5f0
	// Line 16466, Address: 0x329558, Func Offset: 0x628
	// Line 16473, Address: 0x32955c, Func Offset: 0x62c
	// Line 16480, Address: 0x329560, Func Offset: 0x630
	// Line 16481, Address: 0x329564, Func Offset: 0x634
	// Line 16482, Address: 0x329568, Func Offset: 0x638
	// Line 16483, Address: 0x329580, Func Offset: 0x650
	// Line 16486, Address: 0x32958c, Func Offset: 0x65c
	// Line 16488, Address: 0x32959c, Func Offset: 0x66c
	// Line 16489, Address: 0x3295a0, Func Offset: 0x670
	// Line 16488, Address: 0x3295a4, Func Offset: 0x674
	// Line 16487, Address: 0x3295a8, Func Offset: 0x678
	// Line 16488, Address: 0x3295ac, Func Offset: 0x67c
	// Line 16489, Address: 0x3295b0, Func Offset: 0x680
	// Line 16488, Address: 0x3295b8, Func Offset: 0x688
	// Line 16486, Address: 0x3295c0, Func Offset: 0x690
	// Line 16487, Address: 0x3295c4, Func Offset: 0x694
	// Line 16498, Address: 0x3295cc, Func Offset: 0x69c
	// Func End, Address: 0x329618, Func Offset: 0x6e8
}

// nearestTrackCB__FP14RpIntersectionP19RpCollisionTrianglefPv
// Start address: 0x329620
RpCollisionTriangle* nearestTrackCB(RpCollisionTriangle* collTriangle, void* data)
{
	TrackPolyData* tpoly;
	float32 currnear;
	xVec3 currpt;
	int32 currvert;
	int32 curredge;
	xVec3 xformVert[4];
	xVec3 xformNorm;
	int32 i;
	float32 pdx[3];
	float32 pdz[3];
	float32 numer;
	float32 denom;
	float32 t;
	float32 testdist2;
	// Line 16176, Address: 0x329620, Func Offset: 0
	// Line 16178, Address: 0x329624, Func Offset: 0x4
	// Line 16186, Address: 0x32962c, Func Offset: 0xc
	// Line 16187, Address: 0x329688, Func Offset: 0x68
	// Line 16188, Address: 0x3296e4, Func Offset: 0xc4
	// Line 16189, Address: 0x32973c, Func Offset: 0x11c
	// Line 16220, Address: 0x32978c, Func Offset: 0x16c
	// Line 16221, Address: 0x329794, Func Offset: 0x174
	// Line 16189, Address: 0x32979c, Func Offset: 0x17c
	// Line 16221, Address: 0x3297a0, Func Offset: 0x180
	// Line 16189, Address: 0x3297a4, Func Offset: 0x184
	// Line 16221, Address: 0x3297a8, Func Offset: 0x188
	// Line 16220, Address: 0x3297b0, Func Offset: 0x190
	// Line 16221, Address: 0x3297b8, Func Offset: 0x198
	// Line 16220, Address: 0x3297bc, Func Offset: 0x19c
	// Line 16221, Address: 0x3297c0, Func Offset: 0x1a0
	// Line 16223, Address: 0x3297c8, Func Offset: 0x1a8
	// Line 16221, Address: 0x3297d4, Func Offset: 0x1b4
	// Line 16224, Address: 0x3297d8, Func Offset: 0x1b8
	// Line 16226, Address: 0x3297e0, Func Offset: 0x1c0
	// Line 16221, Address: 0x3297e4, Func Offset: 0x1c4
	// Line 16225, Address: 0x3297e8, Func Offset: 0x1c8
	// Line 16220, Address: 0x3297ec, Func Offset: 0x1cc
	// Line 16221, Address: 0x3297f0, Func Offset: 0x1d0
	// Line 16226, Address: 0x3297fc, Func Offset: 0x1dc
	// Line 16231, Address: 0x329848, Func Offset: 0x228
	// Line 16230, Address: 0x32984c, Func Offset: 0x22c
	// Line 16231, Address: 0x329850, Func Offset: 0x230
	// Line 16242, Address: 0x329854, Func Offset: 0x234
	// Line 16231, Address: 0x329858, Func Offset: 0x238
	// Line 16232, Address: 0x32985c, Func Offset: 0x23c
	// Line 16231, Address: 0x329868, Func Offset: 0x248
	// Line 16232, Address: 0x329874, Func Offset: 0x254
	// Line 16233, Address: 0x32987c, Func Offset: 0x25c
	// Line 16232, Address: 0x329880, Func Offset: 0x260
	// Line 16233, Address: 0x329884, Func Offset: 0x264
	// Line 16234, Address: 0x329898, Func Offset: 0x278
	// Line 16235, Address: 0x3298a0, Func Offset: 0x280
	// Line 16242, Address: 0x3298a4, Func Offset: 0x284
	// Line 16248, Address: 0x3298ac, Func Offset: 0x28c
	// Line 16242, Address: 0x3298b0, Func Offset: 0x290
	// Line 16248, Address: 0x3298b4, Func Offset: 0x294
	// Line 16251, Address: 0x3298b8, Func Offset: 0x298
	// Line 16248, Address: 0x3298bc, Func Offset: 0x29c
	// Line 16251, Address: 0x3298c0, Func Offset: 0x2a0
	// Line 16296, Address: 0x3298d0, Func Offset: 0x2b0
	// Line 16251, Address: 0x3298d4, Func Offset: 0x2b4
	// Line 16264, Address: 0x3298d8, Func Offset: 0x2b8
	// Line 16248, Address: 0x3298dc, Func Offset: 0x2bc
	// Line 16264, Address: 0x3298e4, Func Offset: 0x2c4
	// Line 16269, Address: 0x3298ec, Func Offset: 0x2cc
	// Line 16264, Address: 0x3298f0, Func Offset: 0x2d0
	// Line 16254, Address: 0x3298f4, Func Offset: 0x2d4
	// Line 16255, Address: 0x3298f8, Func Offset: 0x2d8
	// Line 16253, Address: 0x3298fc, Func Offset: 0x2dc
	// Line 16254, Address: 0x329900, Func Offset: 0x2e0
	// Line 16251, Address: 0x329904, Func Offset: 0x2e4
	// Line 16253, Address: 0x329908, Func Offset: 0x2e8
	// Line 16255, Address: 0x32990c, Func Offset: 0x2ec
	// Line 16254, Address: 0x329910, Func Offset: 0x2f0
	// Line 16257, Address: 0x329914, Func Offset: 0x2f4
	// Line 16256, Address: 0x329918, Func Offset: 0x2f8
	// Line 16253, Address: 0x32991c, Func Offset: 0x2fc
	// Line 16260, Address: 0x329920, Func Offset: 0x300
	// Line 16258, Address: 0x329924, Func Offset: 0x304
	// Line 16260, Address: 0x329928, Func Offset: 0x308
	// Line 16261, Address: 0x329930, Func Offset: 0x310
	// Line 16264, Address: 0x32993c, Func Offset: 0x31c
	// Line 16265, Address: 0x329958, Func Offset: 0x338
	// Line 16269, Address: 0x329960, Func Offset: 0x340
	// Line 16270, Address: 0x32996c, Func Offset: 0x34c
	// Line 16271, Address: 0x329980, Func Offset: 0x360
	// Line 16274, Address: 0x32998c, Func Offset: 0x36c
	// Line 16276, Address: 0x329990, Func Offset: 0x370
	// Line 16275, Address: 0x329994, Func Offset: 0x374
	// Line 16277, Address: 0x329998, Func Offset: 0x378
	// Line 16275, Address: 0x32999c, Func Offset: 0x37c
	// Line 16280, Address: 0x3299ac, Func Offset: 0x38c
	// Line 16283, Address: 0x3299c4, Func Offset: 0x3a4
	// Line 16284, Address: 0x3299d0, Func Offset: 0x3b0
	// Line 16285, Address: 0x3299d8, Func Offset: 0x3b8
	// Line 16286, Address: 0x3299e0, Func Offset: 0x3c0
	// Line 16287, Address: 0x3299f8, Func Offset: 0x3d8
	// Line 16291, Address: 0x329a14, Func Offset: 0x3f4
	// Line 16295, Address: 0x329a20, Func Offset: 0x400
	// Line 16296, Address: 0x329a24, Func Offset: 0x404
	// Line 16295, Address: 0x329a28, Func Offset: 0x408
	// Line 16297, Address: 0x329a2c, Func Offset: 0x40c
	// Line 16295, Address: 0x329a30, Func Offset: 0x410
	// Line 16294, Address: 0x329a34, Func Offset: 0x414
	// Line 16301, Address: 0x329a38, Func Offset: 0x418
	// Line 16304, Address: 0x329a48, Func Offset: 0x428
	// Line 16305, Address: 0x329a58, Func Offset: 0x438
	// Line 16306, Address: 0x329a64, Func Offset: 0x444
	// Line 16305, Address: 0x329a70, Func Offset: 0x450
	// Line 16306, Address: 0x329a7c, Func Offset: 0x45c
	// Line 16307, Address: 0x329a84, Func Offset: 0x464
	// Line 16306, Address: 0x329a88, Func Offset: 0x468
	// Line 16307, Address: 0x329a8c, Func Offset: 0x46c
	// Line 16309, Address: 0x329a94, Func Offset: 0x474
	// Line 16307, Address: 0x329a9c, Func Offset: 0x47c
	// Line 16309, Address: 0x329aa0, Func Offset: 0x480
	// Line 16307, Address: 0x329aa4, Func Offset: 0x484
	// Line 16308, Address: 0x329aac, Func Offset: 0x48c
	// Line 16309, Address: 0x329ab0, Func Offset: 0x490
	// Line 16310, Address: 0x329abc, Func Offset: 0x49c
	// Line 16311, Address: 0x329ac0, Func Offset: 0x4a0
	// Line 16312, Address: 0x329ac4, Func Offset: 0x4a4
	// Line 16313, Address: 0x329acc, Func Offset: 0x4ac
	// Line 16323, Address: 0x329ad4, Func Offset: 0x4b4
	// Line 16324, Address: 0x329ad8, Func Offset: 0x4b8
	// Func End, Address: 0x329ae0, Func Offset: 0x4c0
}

// zEntPlayerVelUpdate__FP4xEntP6xScenef
// Start address: 0x329ae0
void zEntPlayerVelUpdate(xEnt* ent, float32 dt)
{
	xVec3* v;
	float32 min;
	float32 interp;
	float32 speedMult;
	float32 s;
	xCollis* coll;
	float32 rft;
	float32 gft;
	float32 s;
	float32 aft;
	float32 s;
	float32 velen2;
	xCollis* colls;
	xCollis* coll;
	int32 i;
	float32 sft;
	float32 s;
	float32 s;
	// Line 15871, Address: 0x329ae0, Func Offset: 0
	// Line 15873, Address: 0x329b08, Func Offset: 0x28
	// Line 15877, Address: 0x329b18, Func Offset: 0x38
	// Line 15878, Address: 0x329b28, Func Offset: 0x48
	// Line 15881, Address: 0x329b30, Func Offset: 0x50
	// Line 15883, Address: 0x329b34, Func Offset: 0x54
	// Line 15886, Address: 0x329b50, Func Offset: 0x70
	// Line 15887, Address: 0x329b5c, Func Offset: 0x7c
	// Line 15886, Address: 0x329b60, Func Offset: 0x80
	// Line 15887, Address: 0x329b74, Func Offset: 0x94
	// Line 15888, Address: 0x329b80, Func Offset: 0xa0
	// Line 15889, Address: 0x329b90, Func Offset: 0xb0
	// Line 15890, Address: 0x329b98, Func Offset: 0xb8
	// Line 15893, Address: 0x329bac, Func Offset: 0xcc
	// Line 15894, Address: 0x329bb8, Func Offset: 0xd8
	// Line 15893, Address: 0x329bbc, Func Offset: 0xdc
	// Line 15894, Address: 0x329bd0, Func Offset: 0xf0
	// Line 15895, Address: 0x329bdc, Func Offset: 0xfc
	// Line 15896, Address: 0x329bec, Func Offset: 0x10c
	// Line 15897, Address: 0x329bf4, Func Offset: 0x114
	// Line 15899, Address: 0x329c08, Func Offset: 0x128
	// Line 15902, Address: 0x329c10, Func Offset: 0x130
	// Line 15914, Address: 0x329c28, Func Offset: 0x148
	// Line 15918, Address: 0x329c60, Func Offset: 0x180
	// Line 15919, Address: 0x329c78, Func Offset: 0x198
	// Line 15922, Address: 0x329c84, Func Offset: 0x1a4
	// Line 15923, Address: 0x329c90, Func Offset: 0x1b0
	// Line 15924, Address: 0x329c9c, Func Offset: 0x1bc
	// Line 15929, Address: 0x329ca8, Func Offset: 0x1c8
	// Line 15931, Address: 0x329cb8, Func Offset: 0x1d8
	// Line 15932, Address: 0x329cd4, Func Offset: 0x1f4
	// Line 15933, Address: 0x329cdc, Func Offset: 0x1fc
	// Line 15935, Address: 0x329d04, Func Offset: 0x224
	// Line 15939, Address: 0x329d1c, Func Offset: 0x23c
	// Line 15942, Address: 0x329d24, Func Offset: 0x244
	// Line 15945, Address: 0x329d48, Func Offset: 0x268
	// Line 15949, Address: 0x329d5c, Func Offset: 0x27c
	// Line 15952, Address: 0x329d68, Func Offset: 0x288
	// Line 15955, Address: 0x329d70, Func Offset: 0x290
	// Line 15957, Address: 0x329d8c, Func Offset: 0x2ac
	// Line 15958, Address: 0x329d90, Func Offset: 0x2b0
	// Line 15959, Address: 0x329d98, Func Offset: 0x2b8
	// Line 15960, Address: 0x329da4, Func Offset: 0x2c4
	// Line 15985, Address: 0x329db4, Func Offset: 0x2d4
	// Line 15960, Address: 0x329db8, Func Offset: 0x2d8
	// Line 15985, Address: 0x329dbc, Func Offset: 0x2dc
	// Line 15960, Address: 0x329dc0, Func Offset: 0x2e0
	// Line 15985, Address: 0x329dc4, Func Offset: 0x2e4
	// Line 15984, Address: 0x329dc8, Func Offset: 0x2e8
	// Line 15985, Address: 0x329dd8, Func Offset: 0x2f8
	// Line 16008, Address: 0x329de8, Func Offset: 0x308
	// Line 16004, Address: 0x329dec, Func Offset: 0x30c
	// Line 16006, Address: 0x329df0, Func Offset: 0x310
	// Line 16008, Address: 0x329df4, Func Offset: 0x314
	// Line 16015, Address: 0x329e00, Func Offset: 0x320
	// Line 16018, Address: 0x329e10, Func Offset: 0x330
	// Line 16023, Address: 0x329e28, Func Offset: 0x348
	// Line 16024, Address: 0x329e44, Func Offset: 0x364
	// Line 16026, Address: 0x329e4c, Func Offset: 0x36c
	// Line 16029, Address: 0x329e54, Func Offset: 0x374
	// Line 16030, Address: 0x329e64, Func Offset: 0x384
	// Line 16036, Address: 0x329e68, Func Offset: 0x388
	// Line 16040, Address: 0x329e6c, Func Offset: 0x38c
	// Line 16042, Address: 0x329e88, Func Offset: 0x3a8
	// Line 16043, Address: 0x329e90, Func Offset: 0x3b0
	// Line 16044, Address: 0x329e9c, Func Offset: 0x3bc
	// Line 16045, Address: 0x329ea8, Func Offset: 0x3c8
	// Line 16046, Address: 0x329eb4, Func Offset: 0x3d4
	// Line 16089, Address: 0x329ecc, Func Offset: 0x3ec
	// Line 16099, Address: 0x329ed0, Func Offset: 0x3f0
	// Line 16089, Address: 0x329ed4, Func Offset: 0x3f4
	// Line 16062, Address: 0x329ed8, Func Offset: 0x3f8
	// Line 16089, Address: 0x329edc, Func Offset: 0x3fc
	// Line 16099, Address: 0x329ee0, Func Offset: 0x400
	// Line 16067, Address: 0x329ee4, Func Offset: 0x404
	// Line 16058, Address: 0x329ee8, Func Offset: 0x408
	// Line 16062, Address: 0x329f0c, Func Offset: 0x42c
	// Line 16067, Address: 0x329f24, Func Offset: 0x444
	// Line 16062, Address: 0x329f28, Func Offset: 0x448
	// Line 16067, Address: 0x329f2c, Func Offset: 0x44c
	// Line 16062, Address: 0x329f30, Func Offset: 0x450
	// Line 16067, Address: 0x329f34, Func Offset: 0x454
	// Line 16073, Address: 0x329f5c, Func Offset: 0x47c
	// Line 16074, Address: 0x329f70, Func Offset: 0x490
	// Line 16089, Address: 0x329f7c, Func Offset: 0x49c
	// Line 16099, Address: 0x329f90, Func Offset: 0x4b0
	// Line 16122, Address: 0x329f94, Func Offset: 0x4b4
	// Line 16123, Address: 0x329fd0, Func Offset: 0x4f0
	// Line 16134, Address: 0x329fe4, Func Offset: 0x504
	// Line 16142, Address: 0x329ff8, Func Offset: 0x518
	// Line 15903, Address: 0x32a004, Func Offset: 0x524
	// Line 16142, Address: 0x32a00c, Func Offset: 0x52c
	// Line 15903, Address: 0x32a01c, Func Offset: 0x53c
	// Line 16142, Address: 0x32a020, Func Offset: 0x540
	// Line 15904, Address: 0x32a024, Func Offset: 0x544
	// Line 16142, Address: 0x32a028, Func Offset: 0x548
	// Line 15905, Address: 0x32a02c, Func Offset: 0x54c
	// Line 15906, Address: 0x32a030, Func Offset: 0x550
	// Line 16142, Address: 0x32a034, Func Offset: 0x554
	// Line 15907, Address: 0x32a03c, Func Offset: 0x55c
	// Line 16142, Address: 0x32a048, Func Offset: 0x568
	// Line 15909, Address: 0x32a04c, Func Offset: 0x56c
	// Line 16142, Address: 0x32a050, Func Offset: 0x570
	// Line 15910, Address: 0x32a068, Func Offset: 0x588
	// Line 15911, Address: 0x32a06c, Func Offset: 0x58c
	// Line 16142, Address: 0x32a074, Func Offset: 0x594
	// Line 15932, Address: 0x32a080, Func Offset: 0x5a0
	// Line 15937, Address: 0x32a088, Func Offset: 0x5a8
	// Line 16142, Address: 0x32a0a0, Func Offset: 0x5c0
	// Line 15964, Address: 0x32a0a4, Func Offset: 0x5c4
	// Line 15968, Address: 0x32a0ac, Func Offset: 0x5cc
	// Line 16142, Address: 0x32a0b0, Func Offset: 0x5d0
	// Line 15970, Address: 0x32a0b8, Func Offset: 0x5d8
	// Line 15971, Address: 0x32a0bc, Func Offset: 0x5dc
	// Line 16142, Address: 0x32a0c4, Func Offset: 0x5e4
	// Line 15972, Address: 0x32a0c8, Func Offset: 0x5e8
	// Line 16142, Address: 0x32a0cc, Func Offset: 0x5ec
	// Line 15973, Address: 0x32a0d4, Func Offset: 0x5f4
	// Line 15974, Address: 0x32a0d8, Func Offset: 0x5f8
	// Line 16142, Address: 0x32a0e0, Func Offset: 0x600
	// Line 15977, Address: 0x32a0e4, Func Offset: 0x604
	// Line 16142, Address: 0x32a0ec, Func Offset: 0x60c
	// Line 15989, Address: 0x32a0f4, Func Offset: 0x614
	// Line 16142, Address: 0x32a0fc, Func Offset: 0x61c
	// Line 16050, Address: 0x32a100, Func Offset: 0x620
	// Line 16142, Address: 0x32a108, Func Offset: 0x628
	// Func End, Address: 0x32a12c, Func Offset: 0x64c
}

// zEntPlayerEGenUpdate__FP4xEntP6xScenef
// Start address: 0x32a130
void zEntPlayerEGenUpdate(xEnt* p, xScene* sc)
{
	xCollis* earc_coll;
	int32 i;
	zEGenerator* eg;
	xIsect isx;
	float32 ra;
	xBase* rumble;
	// Line 15833, Address: 0x32a130, Func Offset: 0
	// Line 15836, Address: 0x32a134, Func Offset: 0x4
	// Line 15833, Address: 0x32a138, Func Offset: 0x8
	// Line 15834, Address: 0x32a158, Func Offset: 0x28
	// Line 15833, Address: 0x32a15c, Func Offset: 0x2c
	// Line 15834, Address: 0x32a160, Func Offset: 0x30
	// Line 15833, Address: 0x32a164, Func Offset: 0x34
	// Line 15838, Address: 0x32a168, Func Offset: 0x38
	// Line 15833, Address: 0x32a16c, Func Offset: 0x3c
	// Line 15836, Address: 0x32a170, Func Offset: 0x40
	// Line 15838, Address: 0x32a17c, Func Offset: 0x4c
	// Line 15839, Address: 0x32a19c, Func Offset: 0x6c
	// Line 15841, Address: 0x32a1a4, Func Offset: 0x74
	// Line 15843, Address: 0x32a1b4, Func Offset: 0x84
	// Line 15844, Address: 0x32a1c8, Func Offset: 0x98
	// Line 15845, Address: 0x32a1cc, Func Offset: 0x9c
	// Line 15847, Address: 0x32a20c, Func Offset: 0xdc
	// Line 15851, Address: 0x32a210, Func Offset: 0xe0
	// Line 15847, Address: 0x32a218, Func Offset: 0xe8
	// Line 15851, Address: 0x32a21c, Func Offset: 0xec
	// Line 15853, Address: 0x32a230, Func Offset: 0x100
	// Line 15857, Address: 0x32a244, Func Offset: 0x114
	// Line 15858, Address: 0x32a25c, Func Offset: 0x12c
	// Line 15859, Address: 0x32a264, Func Offset: 0x134
	// Line 15863, Address: 0x32a2d4, Func Offset: 0x1a4
	// Line 15864, Address: 0x32a2e8, Func Offset: 0x1b8
	// Func End, Address: 0x32a334, Func Offset: 0x204
}

// zEntPlayerJumpUpdate__FP4xEntP6xScenef
// Start address: 0x32a340
void zEntPlayerJumpUpdate(xEnt* ent, float32 dt)
{
	float32 lerp;
	xCollis* cfloor;
	// Line 15551, Address: 0x32a340, Func Offset: 0
	// Line 15557, Address: 0x32a344, Func Offset: 0x4
	// Line 15551, Address: 0x32a348, Func Offset: 0x8
	// Line 15557, Address: 0x32a34c, Func Offset: 0xc
	// Line 15551, Address: 0x32a350, Func Offset: 0x10
	// Line 15557, Address: 0x32a35c, Func Offset: 0x1c
	// Line 15562, Address: 0x32a3a8, Func Offset: 0x68
	// Line 15565, Address: 0x32a3e8, Func Offset: 0xa8
	// Line 15566, Address: 0x32a3fc, Func Offset: 0xbc
	// Line 15568, Address: 0x32a404, Func Offset: 0xc4
	// Line 15570, Address: 0x32a410, Func Offset: 0xd0
	// Line 15578, Address: 0x32a41c, Func Offset: 0xdc
	// Line 15585, Address: 0x32a424, Func Offset: 0xe4
	// Line 15590, Address: 0x32a444, Func Offset: 0x104
	// Line 15592, Address: 0x32a44c, Func Offset: 0x10c
	// Line 15593, Address: 0x32a454, Func Offset: 0x114
	// Line 15601, Address: 0x32a45c, Func Offset: 0x11c
	// Line 15598, Address: 0x32a460, Func Offset: 0x120
	// Line 15601, Address: 0x32a464, Func Offset: 0x124
	// Line 15629, Address: 0x32a47c, Func Offset: 0x13c
	// Line 15655, Address: 0x32a49c, Func Offset: 0x15c
	// Line 15575, Address: 0x32a500, Func Offset: 0x1c0
	// Line 15603, Address: 0x32a50c, Func Offset: 0x1cc
	// Line 15655, Address: 0x32a510, Func Offset: 0x1d0
	// Line 15604, Address: 0x32a514, Func Offset: 0x1d4
	// Line 15655, Address: 0x32a518, Func Offset: 0x1d8
	// Line 15619, Address: 0x32a534, Func Offset: 0x1f4
	// Line 15655, Address: 0x32a538, Func Offset: 0x1f8
	// Line 15619, Address: 0x32a540, Func Offset: 0x200
	// Line 15655, Address: 0x32a544, Func Offset: 0x204
	// Line 15609, Address: 0x32a574, Func Offset: 0x234
	// Line 15631, Address: 0x32a57c, Func Offset: 0x23c
	// Line 15655, Address: 0x32a580, Func Offset: 0x240
	// Line 15632, Address: 0x32a584, Func Offset: 0x244
	// Line 15655, Address: 0x32a588, Func Offset: 0x248
	// Line 15635, Address: 0x32a5a4, Func Offset: 0x264
	// Line 15655, Address: 0x32a5ac, Func Offset: 0x26c
	// Line 15642, Address: 0x32a5b4, Func Offset: 0x274
	// Line 15655, Address: 0x32a5c0, Func Offset: 0x280
	// Line 15645, Address: 0x32a5c8, Func Offset: 0x288
	// Line 15646, Address: 0x32a5cc, Func Offset: 0x28c
	// Line 15645, Address: 0x32a5d0, Func Offset: 0x290
	// Line 15655, Address: 0x32a5d4, Func Offset: 0x294
	// Line 15646, Address: 0x32a5dc, Func Offset: 0x29c
	// Line 15655, Address: 0x32a5e0, Func Offset: 0x2a0
	// Line 15646, Address: 0x32a5e4, Func Offset: 0x2a4
	// Line 15655, Address: 0x32a5e8, Func Offset: 0x2a8
	// Line 15646, Address: 0x32a5ec, Func Offset: 0x2ac
	// Line 15633, Address: 0x32a600, Func Offset: 0x2c0
	// Line 15655, Address: 0x32a604, Func Offset: 0x2c4
	// Line 15633, Address: 0x32a608, Func Offset: 0x2c8
	// Line 15655, Address: 0x32a614, Func Offset: 0x2d4
	// Line 15642, Address: 0x32a630, Func Offset: 0x2f0
	// Line 15655, Address: 0x32a638, Func Offset: 0x2f8
	// Line 15660, Address: 0x32a650, Func Offset: 0x310
	// Line 15663, Address: 0x32a660, Func Offset: 0x320
	// Line 15676, Address: 0x32a668, Func Offset: 0x328
	// Line 15681, Address: 0x32a674, Func Offset: 0x334
	// Line 15677, Address: 0x32a678, Func Offset: 0x338
	// Line 15678, Address: 0x32a680, Func Offset: 0x340
	// Line 15679, Address: 0x32a688, Func Offset: 0x348
	// Line 15680, Address: 0x32a690, Func Offset: 0x350
	// Line 15681, Address: 0x32a694, Func Offset: 0x354
	// Line 15682, Address: 0x32a69c, Func Offset: 0x35c
	// Line 15683, Address: 0x32a6a4, Func Offset: 0x364
	// Line 15771, Address: 0x32a6b4, Func Offset: 0x374
	// Line 15773, Address: 0x32a6d0, Func Offset: 0x390
	// Line 15788, Address: 0x32a6e0, Func Offset: 0x3a0
	// Line 15791, Address: 0x32a6f4, Func Offset: 0x3b4
	// Line 15792, Address: 0x32a71c, Func Offset: 0x3dc
	// Line 15793, Address: 0x32a724, Func Offset: 0x3e4
	// Line 15794, Address: 0x32a72c, Func Offset: 0x3ec
	// Line 15795, Address: 0x32a730, Func Offset: 0x3f0
	// Line 15803, Address: 0x32a738, Func Offset: 0x3f8
	// Line 15818, Address: 0x32a768, Func Offset: 0x428
	// Line 15828, Address: 0x32a774, Func Offset: 0x434
	// Line 15691, Address: 0x32a780, Func Offset: 0x440
	// Line 15828, Address: 0x32a784, Func Offset: 0x444
	// Line 15691, Address: 0x32a790, Func Offset: 0x450
	// Line 15828, Address: 0x32a794, Func Offset: 0x454
	// Line 15691, Address: 0x32a79c, Func Offset: 0x45c
	// Line 15828, Address: 0x32a7a0, Func Offset: 0x460
	// Line 15691, Address: 0x32a7b0, Func Offset: 0x470
	// Line 15828, Address: 0x32a7b8, Func Offset: 0x478
	// Line 15704, Address: 0x32a7c0, Func Offset: 0x480
	// Line 15828, Address: 0x32a7c4, Func Offset: 0x484
	// Line 15706, Address: 0x32a7d0, Func Offset: 0x490
	// Line 15828, Address: 0x32a7e4, Func Offset: 0x4a4
	// Line 15713, Address: 0x32a7f8, Func Offset: 0x4b8
	// Line 15828, Address: 0x32a800, Func Offset: 0x4c0
	// Line 15724, Address: 0x32a80c, Func Offset: 0x4cc
	// Line 15725, Address: 0x32a810, Func Offset: 0x4d0
	// Line 15828, Address: 0x32a820, Func Offset: 0x4e0
	// Line 15727, Address: 0x32a82c, Func Offset: 0x4ec
	// Line 15828, Address: 0x32a834, Func Offset: 0x4f4
	// Line 15732, Address: 0x32a838, Func Offset: 0x4f8
	// Line 15828, Address: 0x32a840, Func Offset: 0x500
	// Line 15732, Address: 0x32a844, Func Offset: 0x504
	// Line 15828, Address: 0x32a848, Func Offset: 0x508
	// Line 15737, Address: 0x32a86c, Func Offset: 0x52c
	// Line 15828, Address: 0x32a870, Func Offset: 0x530
	// Line 15737, Address: 0x32a87c, Func Offset: 0x53c
	// Line 15828, Address: 0x32a880, Func Offset: 0x540
	// Line 15737, Address: 0x32a88c, Func Offset: 0x54c
	// Line 15828, Address: 0x32a890, Func Offset: 0x550
	// Line 15738, Address: 0x32a898, Func Offset: 0x558
	// Line 15828, Address: 0x32a89c, Func Offset: 0x55c
	// Line 15741, Address: 0x32a8a0, Func Offset: 0x560
	// Line 15828, Address: 0x32a8a8, Func Offset: 0x568
	// Line 15752, Address: 0x32a8ac, Func Offset: 0x56c
	// Line 15828, Address: 0x32a8b8, Func Offset: 0x578
	// Line 15752, Address: 0x32a8bc, Func Offset: 0x57c
	// Line 15828, Address: 0x32a8c0, Func Offset: 0x580
	// Line 15753, Address: 0x32a8cc, Func Offset: 0x58c
	// Line 15828, Address: 0x32a8d8, Func Offset: 0x598
	// Line 15720, Address: 0x32a8e4, Func Offset: 0x5a4
	// Line 15828, Address: 0x32a8ec, Func Offset: 0x5ac
	// Line 15811, Address: 0x32a8f4, Func Offset: 0x5b4
	// Line 15821, Address: 0x32a904, Func Offset: 0x5c4
	// Line 15828, Address: 0x32a908, Func Offset: 0x5c8
	// Func End, Address: 0x32a948, Func Offset: 0x608
}

// zEntPlayerJumpLand__FP4xEnt
// Start address: 0x32a950
void zEntPlayerJumpLand(xEnt* ent)
{
	float32 volumeLandMax;
	float32 volumeLandMin;
	float32 vel;
	float32 diff;
	float32 vol;
	emitterBase* rumbleEffect;
	xSndGroupInfo* sndInfo;
	// Line 15472, Address: 0x32a950, Func Offset: 0
	// Line 15476, Address: 0x32a968, Func Offset: 0x18
	// Line 15478, Address: 0x32a970, Func Offset: 0x20
	// Line 15484, Address: 0x32a97c, Func Offset: 0x2c
	// Line 15485, Address: 0x32a980, Func Offset: 0x30
	// Line 15484, Address: 0x32a984, Func Offset: 0x34
	// Line 15488, Address: 0x32a988, Func Offset: 0x38
	// Line 15485, Address: 0x32a98c, Func Offset: 0x3c
	// Line 15488, Address: 0x32a990, Func Offset: 0x40
	// Line 15495, Address: 0x32a9d4, Func Offset: 0x84
	// Line 15496, Address: 0x32a9d8, Func Offset: 0x88
	// Line 15495, Address: 0x32a9dc, Func Offset: 0x8c
	// Line 15496, Address: 0x32a9e0, Func Offset: 0x90
	// Line 15497, Address: 0x32a9e4, Func Offset: 0x94
	// Line 15500, Address: 0x32a9ec, Func Offset: 0x9c
	// Line 15501, Address: 0x32a9f0, Func Offset: 0xa0
	// Line 15500, Address: 0x32a9f4, Func Offset: 0xa4
	// Line 15501, Address: 0x32a9f8, Func Offset: 0xa8
	// Line 15503, Address: 0x32a9fc, Func Offset: 0xac
	// Line 15507, Address: 0x32aa00, Func Offset: 0xb0
	// Line 15503, Address: 0x32aa04, Func Offset: 0xb4
	// Line 15504, Address: 0x32aa0c, Func Offset: 0xbc
	// Line 15507, Address: 0x32aa10, Func Offset: 0xc0
	// Line 15509, Address: 0x32aa20, Func Offset: 0xd0
	// Line 15512, Address: 0x32aa2c, Func Offset: 0xdc
	// Line 15517, Address: 0x32aa5c, Func Offset: 0x10c
	// Line 15519, Address: 0x32aa94, Func Offset: 0x144
	// Line 15526, Address: 0x32aab4, Func Offset: 0x164
	// Line 15528, Address: 0x32aac4, Func Offset: 0x174
	// Line 15526, Address: 0x32aac8, Func Offset: 0x178
	// Line 15528, Address: 0x32aad0, Func Offset: 0x180
	// Line 15531, Address: 0x32ab3c, Func Offset: 0x1ec
	// Line 15533, Address: 0x32abe0, Func Offset: 0x290
	// Line 15535, Address: 0x32ac0c, Func Offset: 0x2bc
	// Line 15536, Address: 0x32ac68, Func Offset: 0x318
	// Line 15539, Address: 0x32ac90, Func Offset: 0x340
	// Line 15543, Address: 0x32acac, Func Offset: 0x35c
	// Line 15545, Address: 0x32acb4, Func Offset: 0x364
	// Line 15547, Address: 0x32acb8, Func Offset: 0x368
	// Line 15493, Address: 0x32acc4, Func Offset: 0x374
	// Line 15547, Address: 0x32acc8, Func Offset: 0x378
	// Line 15510, Address: 0x32acd8, Func Offset: 0x388
	// Line 15547, Address: 0x32ace8, Func Offset: 0x398
	// Func End, Address: 0x32ad18, Func Offset: 0x3c8
}

// CalcJumpImpulse_Smooth__Ffffff
// Start address: 0x32ad20
float32 CalcJumpImpulse_Smooth(float32 g, float32 j, float32 h, float32 Tgc, float32 Tgs)
{
	uint32 i;
	uint32 solcnt;
	float32 A;
	float32 B;
	float32 Kc;
	float32 D;
	float32 AF;
	float32 Kbf;
	float32 Tm[3];
	float32 Tmfound;
	// Line 15357, Address: 0x32ad20, Func Offset: 0
	// Line 15368, Address: 0x32ad3c, Func Offset: 0x1c
	// Line 15357, Address: 0x32ad40, Func Offset: 0x20
	// Line 15382, Address: 0x32ad44, Func Offset: 0x24
	// Line 15368, Address: 0x32ad48, Func Offset: 0x28
	// Line 15382, Address: 0x32ad4c, Func Offset: 0x2c
	// Line 15357, Address: 0x32ad50, Func Offset: 0x30
	// Line 15382, Address: 0x32ad54, Func Offset: 0x34
	// Line 15357, Address: 0x32ad58, Func Offset: 0x38
	// Line 15382, Address: 0x32ad5c, Func Offset: 0x3c
	// Line 15357, Address: 0x32ad60, Func Offset: 0x40
	// Line 15368, Address: 0x32ad64, Func Offset: 0x44
	// Line 15357, Address: 0x32ad68, Func Offset: 0x48
	// Line 15368, Address: 0x32ad6c, Func Offset: 0x4c
	// Line 15357, Address: 0x32ad70, Func Offset: 0x50
	// Line 15368, Address: 0x32ad84, Func Offset: 0x64
	// Line 15369, Address: 0x32ad94, Func Offset: 0x74
	// Line 15357, Address: 0x32adb0, Func Offset: 0x90
	// Line 15370, Address: 0x32adb8, Func Offset: 0x98
	// Line 15371, Address: 0x32adcc, Func Offset: 0xac
	// Line 15374, Address: 0x32add8, Func Offset: 0xb8
	// Line 15371, Address: 0x32addc, Func Offset: 0xbc
	// Line 15374, Address: 0x32ade4, Func Offset: 0xc4
	// Line 15375, Address: 0x32adf0, Func Offset: 0xd0
	// Line 15382, Address: 0x32adfc, Func Offset: 0xdc
	// Line 15380, Address: 0x32ae04, Func Offset: 0xe4
	// Line 15382, Address: 0x32ae08, Func Offset: 0xe8
	// Line 15379, Address: 0x32ae0c, Func Offset: 0xec
	// Line 15380, Address: 0x32ae18, Func Offset: 0xf8
	// Line 15382, Address: 0x32ae38, Func Offset: 0x118
	// Line 15380, Address: 0x32ae40, Func Offset: 0x120
	// Line 15382, Address: 0x32ae48, Func Offset: 0x128
	// Line 15380, Address: 0x32ae4c, Func Offset: 0x12c
	// Line 15382, Address: 0x32ae54, Func Offset: 0x134
	// Line 15385, Address: 0x32ae5c, Func Offset: 0x13c
	// Line 15388, Address: 0x32ae7c, Func Offset: 0x15c
	// Line 15390, Address: 0x32ae9c, Func Offset: 0x17c
	// Line 15399, Address: 0x32aea8, Func Offset: 0x188
	// Line 15398, Address: 0x32aeac, Func Offset: 0x18c
	// Line 15399, Address: 0x32aeb0, Func Offset: 0x190
	// Line 15400, Address: 0x32aeb8, Func Offset: 0x198
	// Line 15399, Address: 0x32aebc, Func Offset: 0x19c
	// Line 15400, Address: 0x32aec4, Func Offset: 0x1a4
	// Line 15393, Address: 0x32af00, Func Offset: 0x1e0
	// Line 15404, Address: 0x32af24, Func Offset: 0x204
	// Line 15405, Address: 0x32af28, Func Offset: 0x208
	// Line 15408, Address: 0x32af38, Func Offset: 0x218
	// Line 15414, Address: 0x32af70, Func Offset: 0x250
	// Func End, Address: 0x32afa4, Func Offset: 0x284
}

// zEntPlayer_GivePatsSocksCurrentLevel__Fi
// Start address: 0x32afb0
void zEntPlayer_GivePatsSocksCurrentLevel(int32 quantity)
{
	uint32 level;
	// Line 15291, Address: 0x32afb0, Func Offset: 0
	// Line 15292, Address: 0x32afc0, Func Offset: 0x10
	// Line 15295, Address: 0x32afc8, Func Offset: 0x18
	// Line 15296, Address: 0x32afe8, Func Offset: 0x38
	// Line 15303, Address: 0x32aff0, Func Offset: 0x40
	// Line 15306, Address: 0x32b008, Func Offset: 0x58
	// Line 15309, Address: 0x32b014, Func Offset: 0x64
	// Line 15312, Address: 0x32b01c, Func Offset: 0x6c
	// Line 15318, Address: 0x32b024, Func Offset: 0x74
	// Line 15300, Address: 0x32b02c, Func Offset: 0x7c
	// Line 15318, Address: 0x32b030, Func Offset: 0x80
	// Line 15303, Address: 0x32b050, Func Offset: 0xa0
	// Line 15318, Address: 0x32b054, Func Offset: 0xa4
	// Line 15305, Address: 0x32b060, Func Offset: 0xb0
	// Line 15315, Address: 0x32b068, Func Offset: 0xb8
	// Line 15318, Address: 0x32b07c, Func Offset: 0xcc
	// Line 15319, Address: 0x32b08c, Func Offset: 0xdc
	// Func End, Address: 0x32b09c, Func Offset: 0xec
}

// zEntPlayer_MoveInfo__Fv
// Start address: 0x32b0a0
uint32 zEntPlayer_MoveInfo()
{
	uint32 animflags;
	uint32 infoflags;
	int8* nam_ast;
	// Line 15160, Address: 0x32b0a0, Func Offset: 0
	// Line 15161, Address: 0x32b0b4, Func Offset: 0x14
	// Line 15165, Address: 0x32b0cc, Func Offset: 0x2c
	// Line 15172, Address: 0x32b0d8, Func Offset: 0x38
	// Line 15173, Address: 0x32b0ec, Func Offset: 0x4c
	// Line 15175, Address: 0x32b0f0, Func Offset: 0x50
	// Line 15176, Address: 0x32b0fc, Func Offset: 0x5c
	// Line 15178, Address: 0x32b100, Func Offset: 0x60
	// Line 15184, Address: 0x32b114, Func Offset: 0x74
	// Line 15185, Address: 0x32b12c, Func Offset: 0x8c
	// Line 15188, Address: 0x32b130, Func Offset: 0x90
	// Line 15189, Address: 0x32b148, Func Offset: 0xa8
	// Line 15192, Address: 0x32b14c, Func Offset: 0xac
	// Line 15195, Address: 0x32b164, Func Offset: 0xc4
	// Line 15203, Address: 0x32b168, Func Offset: 0xc8
	// Line 15204, Address: 0x32b174, Func Offset: 0xd4
	// Line 15208, Address: 0x32b178, Func Offset: 0xd8
	// Line 15213, Address: 0x32b194, Func Offset: 0xf4
	// Line 15184, Address: 0x32b1a4, Func Offset: 0x104
	// Line 15213, Address: 0x32b1a8, Func Offset: 0x108
	// Line 15188, Address: 0x32b1c0, Func Offset: 0x120
	// Line 15213, Address: 0x32b1c4, Func Offset: 0x124
	// Line 15192, Address: 0x32b1dc, Func Offset: 0x13c
	// Line 15213, Address: 0x32b1e0, Func Offset: 0x140
	// Line 15192, Address: 0x32b1f0, Func Offset: 0x150
	// Line 15213, Address: 0x32b1f4, Func Offset: 0x154
	// Line 15214, Address: 0x32b214, Func Offset: 0x174
	// Func End, Address: 0x32b22c, Func Offset: 0x18c
}

// zEntPlayer_PowerupLevel__F11en_plyratak
// Start address: 0x32b230
en_plyrpup zEntPlayer_PowerupLevel(en_plyratak forThisAttack)
{
	// Line 15101, Address: 0x32b230, Func Offset: 0
	// Line 15104, Address: 0x32b23c, Func Offset: 0xc
	// Line 15108, Address: 0x32b258, Func Offset: 0x28
	// Func End, Address: 0x32b260, Func Offset: 0x30
}

// zEntPlayer_Damage__FP5xBaseUi
// Start address: 0x32b260
int32 zEntPlayer_Damage(xBase* src, uint32 damage)
{
	// Line 14899, Address: 0x32b260, Func Offset: 0
	// Line 14904, Address: 0x32b274, Func Offset: 0x14
	// Line 14905, Address: 0x32b280, Func Offset: 0x20
	// Line 14906, Address: 0x32b28c, Func Offset: 0x2c
	// Line 14907, Address: 0x32b290, Func Offset: 0x30
	// Line 14909, Address: 0x32b298, Func Offset: 0x38
	// Line 14910, Address: 0x32b2a8, Func Offset: 0x48
	// Line 14914, Address: 0x32b2c4, Func Offset: 0x64
	// Line 14917, Address: 0x32b2d0, Func Offset: 0x70
	// Line 14926, Address: 0x32b2dc, Func Offset: 0x7c
	// Line 14928, Address: 0x32b2e8, Func Offset: 0x88
	// Line 14933, Address: 0x32b300, Func Offset: 0xa0
	// Line 14942, Address: 0x32b33c, Func Offset: 0xdc
	// Line 14945, Address: 0x32b380, Func Offset: 0x120
	// Line 14946, Address: 0x32b438, Func Offset: 0x1d8
	// Line 14947, Address: 0x32b4f0, Func Offset: 0x290
	// Line 14949, Address: 0x32b5a8, Func Offset: 0x348
	// Line 14950, Address: 0x32b660, Func Offset: 0x400
	// Line 14951, Address: 0x32b718, Func Offset: 0x4b8
	// Line 14952, Address: 0x32b7d0, Func Offset: 0x570
	// Line 14953, Address: 0x32b888, Func Offset: 0x628
	// Line 14959, Address: 0x32b94c, Func Offset: 0x6ec
	// Line 14985, Address: 0x32ba5c, Func Offset: 0x7fc
	// Line 14987, Address: 0x32ba74, Func Offset: 0x814
	// Line 14988, Address: 0x32ba80, Func Offset: 0x820
	// Line 14990, Address: 0x32ba84, Func Offset: 0x824
	// Line 15008, Address: 0x32ba94, Func Offset: 0x834
	// Line 15012, Address: 0x32baa8, Func Offset: 0x848
	// Line 15011, Address: 0x32baac, Func Offset: 0x84c
	// Line 15012, Address: 0x32bab0, Func Offset: 0x850
	// Line 15013, Address: 0x32bbcc, Func Offset: 0x96c
	// Line 15015, Address: 0x32bc10, Func Offset: 0x9b0
	// Line 15017, Address: 0x32bc1c, Func Offset: 0x9bc
	// Line 15020, Address: 0x32bc78, Func Offset: 0xa18
	// Line 15027, Address: 0x32bc84, Func Offset: 0xa24
	// Line 15028, Address: 0x32bc90, Func Offset: 0xa30
	// Line 15032, Address: 0x32bca0, Func Offset: 0xa40
	// Line 15028, Address: 0x32bcb8, Func Offset: 0xa58
	// Line 15032, Address: 0x32bcbc, Func Offset: 0xa5c
	// Line 15035, Address: 0x32bcc4, Func Offset: 0xa64
	// Line 15038, Address: 0x32bccc, Func Offset: 0xa6c
	// Line 15042, Address: 0x32bce0, Func Offset: 0xa80
	// Line 15043, Address: 0x32bce8, Func Offset: 0xa88
	// Line 15044, Address: 0x32bcec, Func Offset: 0xa8c
	// Line 15047, Address: 0x32bcf0, Func Offset: 0xa90
	// Line 15048, Address: 0x32bcf4, Func Offset: 0xa94
	// Line 15049, Address: 0x32bcfc, Func Offset: 0xa9c
	// Line 15050, Address: 0x32bd00, Func Offset: 0xaa0
	// Line 15043, Address: 0x32bd04, Func Offset: 0xaa4
	// Line 15048, Address: 0x32bd0c, Func Offset: 0xaac
	// Line 15044, Address: 0x32bd10, Func Offset: 0xab0
	// Line 15047, Address: 0x32bd14, Func Offset: 0xab4
	// Line 15049, Address: 0x32bd18, Func Offset: 0xab8
	// Line 15050, Address: 0x32bd1c, Func Offset: 0xabc
	// Line 15055, Address: 0x32bd24, Func Offset: 0xac4
	// Line 15050, Address: 0x32bd28, Func Offset: 0xac8
	// Line 15055, Address: 0x32bd2c, Func Offset: 0xacc
	// Line 15063, Address: 0x32bd40, Func Offset: 0xae0
	// Line 15079, Address: 0x32bd54, Func Offset: 0xaf4
	// Line 15088, Address: 0x32bd5c, Func Offset: 0xafc
	// Line 15091, Address: 0x32bd6c, Func Offset: 0xb0c
	// Line 15092, Address: 0x32bd78, Func Offset: 0xb18
	// Line 15093, Address: 0x32bd80, Func Offset: 0xb20
	// Line 15092, Address: 0x32bd84, Func Offset: 0xb24
	// Line 15095, Address: 0x32bd88, Func Offset: 0xb28
	// Line 14918, Address: 0x32bdc4, Func Offset: 0xb64
	// Line 14936, Address: 0x32bdcc, Func Offset: 0xb6c
	// Line 15095, Address: 0x32bdd8, Func Offset: 0xb78
	// Line 14995, Address: 0x32be14, Func Offset: 0xbb4
	// Line 15095, Address: 0x32be18, Func Offset: 0xbb8
	// Line 15057, Address: 0x32beb4, Func Offset: 0xc54
	// Line 15095, Address: 0x32bebc, Func Offset: 0xc5c
	// Line 15058, Address: 0x32bec0, Func Offset: 0xc60
	// Line 15095, Address: 0x32bec4, Func Offset: 0xc64
	// Line 15058, Address: 0x32becc, Func Offset: 0xc6c
	// Line 15095, Address: 0x32bed0, Func Offset: 0xc70
	// Line 15058, Address: 0x32bed4, Func Offset: 0xc74
	// Line 15095, Address: 0x32bed8, Func Offset: 0xc78
	// Line 15062, Address: 0x32bee0, Func Offset: 0xc80
	// Line 15095, Address: 0x32bee8, Func Offset: 0xc88
	// Line 15069, Address: 0x32befc, Func Offset: 0xc9c
	// Line 15095, Address: 0x32bf08, Func Offset: 0xca8
	// Line 15096, Address: 0x32bf14, Func Offset: 0xcb4
	// Func End, Address: 0x32bf28, Func Offset: 0xcc8
}

// zEntPlayer_DamageNPCKnockBack__FP5xBaseUiP5xVec316ePlayerNMEDamage
// Start address: 0x32bf30
int32 zEntPlayer_DamageNPCKnockBack(xBase* src, uint32 damage, xVec3* npcPos, ePlayerNMEDamage type)
{
	float32 dx;
	float32 dz;
	float32 mag;
	// Line 14805, Address: 0x32bf30, Func Offset: 0
	// Line 14807, Address: 0x32bf34, Func Offset: 0x4
	// Line 14805, Address: 0x32bf38, Func Offset: 0x8
	// Line 14807, Address: 0x32bf50, Func Offset: 0x20
	// Line 14808, Address: 0x32bf5c, Func Offset: 0x2c
	// Line 14810, Address: 0x32bf64, Func Offset: 0x34
	// Line 14813, Address: 0x32bf74, Func Offset: 0x44
	// Line 14823, Address: 0x32bfb4, Func Offset: 0x84
	// Line 14830, Address: 0x32bfdc, Func Offset: 0xac
	// Line 14827, Address: 0x32bfe8, Func Offset: 0xb8
	// Line 14828, Address: 0x32bfec, Func Offset: 0xbc
	// Line 14823, Address: 0x32bff0, Func Offset: 0xc0
	// Line 14827, Address: 0x32bffc, Func Offset: 0xcc
	// Line 14828, Address: 0x32c000, Func Offset: 0xd0
	// Line 14827, Address: 0x32c004, Func Offset: 0xd4
	// Line 14828, Address: 0x32c008, Func Offset: 0xd8
	// Line 14829, Address: 0x32c00c, Func Offset: 0xdc
	// Line 14830, Address: 0x32c020, Func Offset: 0xf0
	// Line 14836, Address: 0x32c02c, Func Offset: 0xfc
	// Line 14839, Address: 0x32c030, Func Offset: 0x100
	// Line 14837, Address: 0x32c034, Func Offset: 0x104
	// Line 14839, Address: 0x32c038, Func Offset: 0x108
	// Line 14836, Address: 0x32c03c, Func Offset: 0x10c
	// Line 14837, Address: 0x32c040, Func Offset: 0x110
	// Line 14841, Address: 0x32c044, Func Offset: 0x114
	// Line 14843, Address: 0x32c048, Func Offset: 0x118
	// Line 14847, Address: 0x32c04c, Func Offset: 0x11c
	// Line 14848, Address: 0x32c050, Func Offset: 0x120
	// Line 14841, Address: 0x32c054, Func Offset: 0x124
	// Line 14843, Address: 0x32c058, Func Offset: 0x128
	// Line 14844, Address: 0x32c060, Func Offset: 0x130
	// Line 14845, Address: 0x32c064, Func Offset: 0x134
	// Line 14844, Address: 0x32c068, Func Offset: 0x138
	// Line 14845, Address: 0x32c074, Func Offset: 0x144
	// Line 14847, Address: 0x32c084, Func Offset: 0x154
	// Line 14848, Address: 0x32c088, Func Offset: 0x158
	// Line 14847, Address: 0x32c08c, Func Offset: 0x15c
	// Line 14877, Address: 0x32c090, Func Offset: 0x160
	// Line 14811, Address: 0x32c098, Func Offset: 0x168
	// Line 14877, Address: 0x32c0a0, Func Offset: 0x170
	// Line 14863, Address: 0x32c0a4, Func Offset: 0x174
	// Line 14877, Address: 0x32c0ac, Func Offset: 0x17c
	// Line 14863, Address: 0x32c0b8, Func Offset: 0x188
	// Line 14877, Address: 0x32c0bc, Func Offset: 0x18c
	// Line 14859, Address: 0x32c0d4, Func Offset: 0x1a4
	// Line 14860, Address: 0x32c0d8, Func Offset: 0x1a8
	// Line 14865, Address: 0x32c0dc, Func Offset: 0x1ac
	// Line 14877, Address: 0x32c0e0, Func Offset: 0x1b0
	// Line 14867, Address: 0x32c0e8, Func Offset: 0x1b8
	// Line 14877, Address: 0x32c0ec, Func Offset: 0x1bc
	// Line 14878, Address: 0x32c118, Func Offset: 0x1e8
	// Func End, Address: 0x32c130, Func Offset: 0x200
}

// zEntPlayer_Damage__FP5xBaseUiPC5xVec3
// Start address: 0x32c130
int32 zEntPlayer_Damage(xBase* src, uint32 damage, xVec3* knockback)
{
	// Line 14761, Address: 0x32c130, Func Offset: 0
	// Line 14762, Address: 0x32c13c, Func Offset: 0xc
	// Line 14765, Address: 0x32c14c, Func Offset: 0x1c
	// Line 14766, Address: 0x32c154, Func Offset: 0x24
	// Line 14769, Address: 0x32c160, Func Offset: 0x30
	// Line 14766, Address: 0x32c164, Func Offset: 0x34
	// Line 14770, Address: 0x32c168, Func Offset: 0x38
	// Line 14766, Address: 0x32c16c, Func Offset: 0x3c
	// Line 14769, Address: 0x32c198, Func Offset: 0x68
	// Line 14770, Address: 0x32c19c, Func Offset: 0x6c
	// Line 14769, Address: 0x32c1a0, Func Offset: 0x70
	// Line 14773, Address: 0x32c1a4, Func Offset: 0x74
	// Line 14763, Address: 0x32c1b0, Func Offset: 0x80
	// Line 14774, Address: 0x32c1b4, Func Offset: 0x84
	// Func End, Address: 0x32c1c4, Func Offset: 0x94
}

// zEntPlayer_setBoulderMode__FUi
// Start address: 0x32c1d0
void zEntPlayer_setBoulderMode(uint32 mode)
{
	// Line 14747, Address: 0x32c1d0, Func Offset: 0
	// Line 14749, Address: 0x32c1d8, Func Offset: 0x8
	// Line 14750, Address: 0x32c1dc, Func Offset: 0xc
	// Line 14751, Address: 0x32c1e0, Func Offset: 0x10
	// Line 14754, Address: 0x32c1e8, Func Offset: 0x18
	// Line 14755, Address: 0x32c1ec, Func Offset: 0x1c
	// Line 14757, Address: 0x32c1f0, Func Offset: 0x20
	// Func End, Address: 0x32c1f8, Func Offset: 0x28
}

// zEntPlayer_Move__FP4xEntP6xScenefP9xEntFrame
// Start address: 0x32c200
void zEntPlayer_Move(xEnt* ent, float32 dt, xEntFrame* frame)
{
	int32 px;
	int32 pz;
	xVec3 inverseNormal;
	xVec3 inverseNormal;
	zPlayerGlobals& p;
	xVec3 damp;
	// Line 14653, Address: 0x32c200, Func Offset: 0
	// Line 14658, Address: 0x32c204, Func Offset: 0x4
	// Line 14653, Address: 0x32c208, Func Offset: 0x8
	// Line 14663, Address: 0x32c20c, Func Offset: 0xc
	// Line 14653, Address: 0x32c210, Func Offset: 0x10
	// Line 14661, Address: 0x32c220, Func Offset: 0x20
	// Line 14655, Address: 0x32c224, Func Offset: 0x24
	// Line 14658, Address: 0x32c22c, Func Offset: 0x2c
	// Line 14661, Address: 0x32c238, Func Offset: 0x38
	// Line 14663, Address: 0x32c244, Func Offset: 0x44
	// Line 14669, Address: 0x32c258, Func Offset: 0x58
	// Line 14663, Address: 0x32c25c, Func Offset: 0x5c
	// Line 14669, Address: 0x32c260, Func Offset: 0x60
	// Line 14665, Address: 0x32c264, Func Offset: 0x64
	// Line 14666, Address: 0x32c268, Func Offset: 0x68
	// Line 14665, Address: 0x32c26c, Func Offset: 0x6c
	// Line 14669, Address: 0x32c270, Func Offset: 0x70
	// Line 14670, Address: 0x32c27c, Func Offset: 0x7c
	// Line 14672, Address: 0x32c288, Func Offset: 0x88
	// Line 14673, Address: 0x32c294, Func Offset: 0x94
	// Line 14675, Address: 0x32c2a0, Func Offset: 0xa0
	// Line 14677, Address: 0x32c2ac, Func Offset: 0xac
	// Line 14678, Address: 0x32c2b8, Func Offset: 0xb8
	// Line 14683, Address: 0x32c2c4, Func Offset: 0xc4
	// Line 14699, Address: 0x32c2e4, Func Offset: 0xe4
	// Line 14700, Address: 0x32c2fc, Func Offset: 0xfc
	// Line 14703, Address: 0x32c304, Func Offset: 0x104
	// Line 14704, Address: 0x32c328, Func Offset: 0x128
	// Line 14705, Address: 0x32c378, Func Offset: 0x178
	// Line 14711, Address: 0x32c384, Func Offset: 0x184
	// Line 14718, Address: 0x32c398, Func Offset: 0x198
	// Line 14726, Address: 0x32c3ac, Func Offset: 0x1ac
	// Line 14729, Address: 0x32c3bc, Func Offset: 0x1bc
	// Line 14671, Address: 0x32c488, Func Offset: 0x288
	// Line 14729, Address: 0x32c490, Func Offset: 0x290
	// Line 14676, Address: 0x32c494, Func Offset: 0x294
	// Line 14729, Address: 0x32c49c, Func Offset: 0x29c
	// Line 14700, Address: 0x32c4a0, Func Offset: 0x2a0
	// Line 14729, Address: 0x32c4a4, Func Offset: 0x2a4
	// Line 14700, Address: 0x32c4ac, Func Offset: 0x2ac
	// Line 14729, Address: 0x32c4b0, Func Offset: 0x2b0
	// Line 14701, Address: 0x32c4b8, Func Offset: 0x2b8
	// Line 14729, Address: 0x32c4bc, Func Offset: 0x2bc
	// Line 14701, Address: 0x32c4c4, Func Offset: 0x2c4
	// Line 14729, Address: 0x32c4ec, Func Offset: 0x2ec
	// Line 14701, Address: 0x32c4f0, Func Offset: 0x2f0
	// Line 14729, Address: 0x32c504, Func Offset: 0x304
	// Line 14702, Address: 0x32c50c, Func Offset: 0x30c
	// Line 14703, Address: 0x32c510, Func Offset: 0x310
	// Line 14729, Address: 0x32c518, Func Offset: 0x318
	// Line 14714, Address: 0x32c524, Func Offset: 0x324
	// Line 14729, Address: 0x32c528, Func Offset: 0x328
	// Line 14714, Address: 0x32c530, Func Offset: 0x330
	// Line 14729, Address: 0x32c534, Func Offset: 0x334
	// Line 14714, Address: 0x32c53c, Func Offset: 0x33c
	// Line 14713, Address: 0x32c540, Func Offset: 0x340
	// Line 14714, Address: 0x32c548, Func Offset: 0x348
	// Line 14729, Address: 0x32c54c, Func Offset: 0x34c
	// Line 14713, Address: 0x32c554, Func Offset: 0x354
	// Line 14729, Address: 0x32c558, Func Offset: 0x358
	// Line 14719, Address: 0x32c56c, Func Offset: 0x36c
	// Line 14723, Address: 0x32c570, Func Offset: 0x370
	// Line 14729, Address: 0x32c574, Func Offset: 0x374
	// Line 14723, Address: 0x32c578, Func Offset: 0x378
	// Line 14729, Address: 0x32c57c, Func Offset: 0x37c
	// Line 14723, Address: 0x32c588, Func Offset: 0x388
	// Line 14719, Address: 0x32c590, Func Offset: 0x390
	// Line 14729, Address: 0x32c594, Func Offset: 0x394
	// Line 14722, Address: 0x32c5a4, Func Offset: 0x3a4
	// Line 14729, Address: 0x32c5b0, Func Offset: 0x3b0
	// Line 14737, Address: 0x32c5d0, Func Offset: 0x3d0
	// Line 14738, Address: 0x32c5d4, Func Offset: 0x3d4
	// Line 14737, Address: 0x32c5d8, Func Offset: 0x3d8
	// Line 14738, Address: 0x32c5dc, Func Offset: 0x3dc
	// Line 14739, Address: 0x32c610, Func Offset: 0x410
	// Line 14738, Address: 0x32c618, Func Offset: 0x418
	// Line 14739, Address: 0x32c61c, Func Offset: 0x41c
	// Line 14738, Address: 0x32c620, Func Offset: 0x420
	// Line 14739, Address: 0x32c628, Func Offset: 0x428
	// Line 14740, Address: 0x32c6cc, Func Offset: 0x4cc
	// Line 14742, Address: 0x32c780, Func Offset: 0x580
	// Func End, Address: 0x32c7c8, Func Offset: 0x5c8
}

// zEntPlayer_RenderEffects__FP4zEnt
// Start address: 0x32c7d0
void zEntPlayer_RenderEffects(zEnt* ent)
{
	// Line 14637, Address: 0x32c7d0, Func Offset: 0
	// Line 14639, Address: 0x32c7d4, Func Offset: 0x4
	// Line 14637, Address: 0x32c7d8, Func Offset: 0x8
	// Line 14639, Address: 0x32c7e0, Func Offset: 0x10
	// Line 14644, Address: 0x32c7ec, Func Offset: 0x1c
	// Line 14648, Address: 0x32c7f4, Func Offset: 0x24
	// Line 14649, Address: 0x32c8f4, Func Offset: 0x124
	// Func End, Address: 0x32c904, Func Offset: 0x134
}

// zEntPlayer_Render__FP4zEnt
// Start address: 0x32c910
void zEntPlayer_Render(zEnt* ent)
{
	float32 rootZadjust;
	RwMatrixTag rootOldMat;
	xAnimSingle* asingle;
	xAnimSingle* ablend;
	xVec3 rootZvec;
	xModelInstance* minst;
	float32 orderDot[2];
	uint32 i;
	int32 oldBucketEnabled;
	uint32 i;
	// Line 14356, Address: 0x32c910, Func Offset: 0
	// Line 14358, Address: 0x32c914, Func Offset: 0x4
	// Line 14356, Address: 0x32c918, Func Offset: 0x8
	// Line 14358, Address: 0x32c938, Func Offset: 0x28
	// Line 14360, Address: 0x32c978, Func Offset: 0x68
	// Line 14363, Address: 0x32c9e8, Func Offset: 0xd8
	// Line 14368, Address: 0x32c9f8, Func Offset: 0xe8
	// Line 14369, Address: 0x32ca08, Func Offset: 0xf8
	// Line 14370, Address: 0x32ca10, Func Offset: 0x100
	// Line 14376, Address: 0x32ca18, Func Offset: 0x108
	// Line 14377, Address: 0x32ca20, Func Offset: 0x110
	// Line 14389, Address: 0x32ca50, Func Offset: 0x140
	// Line 14377, Address: 0x32ca54, Func Offset: 0x144
	// Line 14389, Address: 0x32ca58, Func Offset: 0x148
	// Line 14386, Address: 0x32ca5c, Func Offset: 0x14c
	// Line 14389, Address: 0x32ca60, Func Offset: 0x150
	// Line 14391, Address: 0x32ca94, Func Offset: 0x184
	// Line 14392, Address: 0x32cab0, Func Offset: 0x1a0
	// Line 14393, Address: 0x32cabc, Func Offset: 0x1ac
	// Line 14394, Address: 0x32cadc, Func Offset: 0x1cc
	// Line 14396, Address: 0x32cb0c, Func Offset: 0x1fc
	// Line 14399, Address: 0x32cb54, Func Offset: 0x244
	// Line 14401, Address: 0x32cb88, Func Offset: 0x278
	// Line 14402, Address: 0x32cb9c, Func Offset: 0x28c
	// Line 14403, Address: 0x32cbc4, Func Offset: 0x2b4
	// Line 14402, Address: 0x32cbc8, Func Offset: 0x2b8
	// Line 14403, Address: 0x32cbcc, Func Offset: 0x2bc
	// Line 14402, Address: 0x32cbd0, Func Offset: 0x2c0
	// Line 14403, Address: 0x32cbd4, Func Offset: 0x2c4
	// Line 14404, Address: 0x32cc20, Func Offset: 0x310
	// Line 14461, Address: 0x32cc50, Func Offset: 0x340
	// Line 14465, Address: 0x32cca8, Func Offset: 0x398
	// Line 14461, Address: 0x32ccac, Func Offset: 0x39c
	// Line 14465, Address: 0x32ccb8, Func Offset: 0x3a8
	// Line 14461, Address: 0x32ccc0, Func Offset: 0x3b0
	// Line 14465, Address: 0x32cd24, Func Offset: 0x414
	// Line 14466, Address: 0x32cd48, Func Offset: 0x438
	// Line 14467, Address: 0x32cd50, Func Offset: 0x440
	// Line 14468, Address: 0x32cd58, Func Offset: 0x448
	// Line 14469, Address: 0x32cde4, Func Offset: 0x4d4
	// Line 14470, Address: 0x32cde8, Func Offset: 0x4d8
	// Line 14489, Address: 0x32cdf0, Func Offset: 0x4e0
	// Line 14491, Address: 0x32ce50, Func Offset: 0x540
	// Line 14489, Address: 0x32ce54, Func Offset: 0x544
	// Line 14491, Address: 0x32ce58, Func Offset: 0x548
	// Line 14493, Address: 0x32ce64, Func Offset: 0x554
	// Line 14521, Address: 0x32cedc, Func Offset: 0x5cc
	// Line 14522, Address: 0x32cee4, Func Offset: 0x5d4
	// Line 14524, Address: 0x32cef0, Func Offset: 0x5e0
	// Line 14525, Address: 0x32cf00, Func Offset: 0x5f0
	// Line 14528, Address: 0x32cf7c, Func Offset: 0x66c
	// Line 14529, Address: 0x32cf88, Func Offset: 0x678
	// Line 14530, Address: 0x32cf90, Func Offset: 0x680
	// Line 14532, Address: 0x32cfa4, Func Offset: 0x694
	// Line 14590, Address: 0x32cfac, Func Offset: 0x69c
	// Line 14591, Address: 0x32cfc0, Func Offset: 0x6b0
	// Line 14596, Address: 0x32cfc8, Func Offset: 0x6b8
	// Line 14599, Address: 0x32cfcc, Func Offset: 0x6bc
	// Line 14591, Address: 0x32cfd0, Func Offset: 0x6c0
	// Line 14599, Address: 0x32cfd4, Func Offset: 0x6c4
	// Line 14591, Address: 0x32cfe4, Func Offset: 0x6d4
	// Line 14599, Address: 0x32cfe8, Func Offset: 0x6d8
	// Line 14596, Address: 0x32cffc, Func Offset: 0x6ec
	// Line 14599, Address: 0x32d000, Func Offset: 0x6f0
	// Line 14601, Address: 0x32d030, Func Offset: 0x720
	// Line 14604, Address: 0x32d03c, Func Offset: 0x72c
	// Line 14607, Address: 0x32d048, Func Offset: 0x738
	// Line 14604, Address: 0x32d050, Func Offset: 0x740
	// Line 14607, Address: 0x32d054, Func Offset: 0x744
	// Line 14613, Address: 0x32d05c, Func Offset: 0x74c
	// Line 14616, Address: 0x32d060, Func Offset: 0x750
	// Line 14614, Address: 0x32d064, Func Offset: 0x754
	// Line 14616, Address: 0x32d068, Func Offset: 0x758
	// Line 14618, Address: 0x32d070, Func Offset: 0x760
	// Line 14620, Address: 0x32d074, Func Offset: 0x764
	// Line 14621, Address: 0x32d078, Func Offset: 0x768
	// Line 14623, Address: 0x32d090, Func Offset: 0x780
	// Line 14625, Address: 0x32d098, Func Offset: 0x788
	// Line 14628, Address: 0x32d0a8, Func Offset: 0x798
	// Line 14630, Address: 0x32d12c, Func Offset: 0x81c
	// Line 14631, Address: 0x32d134, Func Offset: 0x824
	// Line 14632, Address: 0x32d280, Func Offset: 0x970
	// Line 14633, Address: 0x32d2d0, Func Offset: 0x9c0
	// Func End, Address: 0x32d2f4, Func Offset: 0x9e4
}

// zEntPlayerUpdateModelSB__Fv
// Start address: 0x32d310
void zEntPlayerUpdateModelSB()
{
	xEnt& ent;
	xModelInstance** mlist;
	xModelInstance* m;
	xAnimSingle* asingle;
	xAnimState* tonguestate;
	// Line 13962, Address: 0x32d310, Func Offset: 0
	// Line 13965, Address: 0x32d32c, Func Offset: 0x1c
	// Line 13963, Address: 0x32d330, Func Offset: 0x20
	// Line 13965, Address: 0x32d334, Func Offset: 0x24
	// Line 13971, Address: 0x32d338, Func Offset: 0x28
	// Line 13963, Address: 0x32d33c, Func Offset: 0x2c
	// Line 13967, Address: 0x32d340, Func Offset: 0x30
	// Line 13972, Address: 0x32d344, Func Offset: 0x34
	// Line 13967, Address: 0x32d348, Func Offset: 0x38
	// Line 13972, Address: 0x32d34c, Func Offset: 0x3c
	// Line 13967, Address: 0x32d350, Func Offset: 0x40
	// Line 13972, Address: 0x32d354, Func Offset: 0x44
	// Line 13973, Address: 0x32d358, Func Offset: 0x48
	// Line 13976, Address: 0x32d3e4, Func Offset: 0xd4
	// Line 13977, Address: 0x32d3e8, Func Offset: 0xd8
	// Line 13978, Address: 0x32d3f0, Func Offset: 0xe0
	// Line 14006, Address: 0x32d400, Func Offset: 0xf0
	// Line 14009, Address: 0x32d410, Func Offset: 0x100
	// Line 14010, Address: 0x32d418, Func Offset: 0x108
	// Line 14011, Address: 0x32d424, Func Offset: 0x114
	// Line 14012, Address: 0x32d430, Func Offset: 0x120
	// Line 14013, Address: 0x32d448, Func Offset: 0x138
	// Line 14019, Address: 0x32d454, Func Offset: 0x144
	// Line 14020, Address: 0x32d458, Func Offset: 0x148
	// Line 14021, Address: 0x32d468, Func Offset: 0x158
	// Line 14022, Address: 0x32d480, Func Offset: 0x170
	// Line 14023, Address: 0x32d490, Func Offset: 0x180
	// Line 14027, Address: 0x32d498, Func Offset: 0x188
	// Line 14028, Address: 0x32d4a0, Func Offset: 0x190
	// Line 14029, Address: 0x32d4ac, Func Offset: 0x19c
	// Line 14030, Address: 0x32d4b8, Func Offset: 0x1a8
	// Line 14031, Address: 0x32d4d0, Func Offset: 0x1c0
	// Line 14037, Address: 0x32d4dc, Func Offset: 0x1cc
	// Line 14038, Address: 0x32d4e0, Func Offset: 0x1d0
	// Line 14039, Address: 0x32d4f0, Func Offset: 0x1e0
	// Line 14040, Address: 0x32d508, Func Offset: 0x1f8
	// Line 14043, Address: 0x32d518, Func Offset: 0x208
	// Line 14046, Address: 0x32d520, Func Offset: 0x210
	// Line 14047, Address: 0x32d524, Func Offset: 0x214
	// Line 14048, Address: 0x32d534, Func Offset: 0x224
	// Line 14049, Address: 0x32d54c, Func Offset: 0x23c
	// Line 14051, Address: 0x32d55c, Func Offset: 0x24c
	// Line 14052, Address: 0x32d560, Func Offset: 0x250
	// Line 14053, Address: 0x32d570, Func Offset: 0x260
	// Line 14054, Address: 0x32d588, Func Offset: 0x278
	// Line 14066, Address: 0x32d594, Func Offset: 0x284
	// Line 14067, Address: 0x32d598, Func Offset: 0x288
	// Line 14068, Address: 0x32d5a8, Func Offset: 0x298
	// Line 14069, Address: 0x32d5c0, Func Offset: 0x2b0
	// Line 14072, Address: 0x32d5cc, Func Offset: 0x2bc
	// Line 14073, Address: 0x32d5d0, Func Offset: 0x2c0
	// Line 14074, Address: 0x32d5e0, Func Offset: 0x2d0
	// Line 14075, Address: 0x32d5f8, Func Offset: 0x2e8
	// Line 14084, Address: 0x32d604, Func Offset: 0x2f4
	// Line 14086, Address: 0x32d608, Func Offset: 0x2f8
	// Line 14096, Address: 0x32d610, Func Offset: 0x300
	// Line 14097, Address: 0x32d624, Func Offset: 0x314
	// Line 14103, Address: 0x32d62c, Func Offset: 0x31c
	// Line 14098, Address: 0x32d630, Func Offset: 0x320
	// Line 14101, Address: 0x32d634, Func Offset: 0x324
	// Line 14102, Address: 0x32d640, Func Offset: 0x330
	// Line 14103, Address: 0x32d658, Func Offset: 0x348
	// Line 14106, Address: 0x32d66c, Func Offset: 0x35c
	// Line 14107, Address: 0x32d678, Func Offset: 0x368
	// Line 14110, Address: 0x32d684, Func Offset: 0x374
	// Line 14107, Address: 0x32d688, Func Offset: 0x378
	// Line 14110, Address: 0x32d68c, Func Offset: 0x37c
	// Line 14111, Address: 0x32d694, Func Offset: 0x384
	// Line 13982, Address: 0x32d6ac, Func Offset: 0x39c
	// Line 14111, Address: 0x32d6b0, Func Offset: 0x3a0
	// Line 14104, Address: 0x32d6e8, Func Offset: 0x3d8
	// Line 14111, Address: 0x32d6ec, Func Offset: 0x3dc
	// Line 14104, Address: 0x32d6f0, Func Offset: 0x3e0
	// Line 14124, Address: 0x32d70c, Func Offset: 0x3fc
	// Line 14125, Address: 0x32d71c, Func Offset: 0x40c
	// Line 14126, Address: 0x32d734, Func Offset: 0x424
	// Line 14129, Address: 0x32d738, Func Offset: 0x428
	// Line 14126, Address: 0x32d73c, Func Offset: 0x42c
	// Line 14129, Address: 0x32d744, Func Offset: 0x434
	// Line 14128, Address: 0x32d748, Func Offset: 0x438
	// Line 14129, Address: 0x32d74c, Func Offset: 0x43c
	// Line 14140, Address: 0x32d764, Func Offset: 0x454
	// Line 14141, Address: 0x32d770, Func Offset: 0x460
	// Line 14142, Address: 0x32d77c, Func Offset: 0x46c
	// Line 14143, Address: 0x32d798, Func Offset: 0x488
	// Line 14144, Address: 0x32d79c, Func Offset: 0x48c
	// Line 14143, Address: 0x32d7a4, Func Offset: 0x494
	// Line 14145, Address: 0x32d7ac, Func Offset: 0x49c
	// Line 14157, Address: 0x32d7b4, Func Offset: 0x4a4
	// Line 14158, Address: 0x32d7b8, Func Offset: 0x4a8
	// Line 14159, Address: 0x32d7c8, Func Offset: 0x4b8
	// Line 14160, Address: 0x32d7e0, Func Offset: 0x4d0
	// Line 14164, Address: 0x32d7e4, Func Offset: 0x4d4
	// Line 14160, Address: 0x32d7e8, Func Offset: 0x4d8
	// Line 14164, Address: 0x32d7f0, Func Offset: 0x4e0
	// Line 14163, Address: 0x32d7f4, Func Offset: 0x4e4
	// Line 14164, Address: 0x32d7f8, Func Offset: 0x4e8
	// Line 14171, Address: 0x32d82c, Func Offset: 0x51c
	// Line 14172, Address: 0x32d838, Func Offset: 0x528
	// Line 14173, Address: 0x32d844, Func Offset: 0x534
	// Line 14174, Address: 0x32d860, Func Offset: 0x550
	// Line 14175, Address: 0x32d864, Func Offset: 0x554
	// Line 14174, Address: 0x32d86c, Func Offset: 0x55c
	// Line 14176, Address: 0x32d874, Func Offset: 0x564
	// Line 14180, Address: 0x32d87c, Func Offset: 0x56c
	// Line 14181, Address: 0x32d88c, Func Offset: 0x57c
	// Line 14182, Address: 0x32d8a8, Func Offset: 0x598
	// Line 14214, Address: 0x32d8b4, Func Offset: 0x5a4
	// Line 14266, Address: 0x32d8b8, Func Offset: 0x5a8
	// Line 14129, Address: 0x32d8fc, Func Offset: 0x5ec
	// Line 14266, Address: 0x32d90c, Func Offset: 0x5fc
	// Line 14149, Address: 0x32d934, Func Offset: 0x624
	// Line 14266, Address: 0x32d938, Func Offset: 0x628
	// Line 14150, Address: 0x32d94c, Func Offset: 0x63c
	// Line 14266, Address: 0x32d954, Func Offset: 0x644
	// Line 14153, Address: 0x32d964, Func Offset: 0x654
	// Line 14148, Address: 0x32d96c, Func Offset: 0x65c
	// Line 14266, Address: 0x32d974, Func Offset: 0x664
	// Line 14179, Address: 0x32d9c0, Func Offset: 0x6b0
	// Line 14266, Address: 0x32d9c8, Func Offset: 0x6b8
	// Func End, Address: 0x32d9e8, Func Offset: 0x6d8
}

// zEntPlayer_ReticleRender__FP4zEnt18ePlayerReticleType
// Start address: 0x32d9f0
void zEntPlayer_ReticleRender()
{
	_SDRenderState old_RenderState;
	int32 i;
	uint32 cheatAlternateTargettingMarker;
	float32 size;
	float32 bounce;
	float32 bound_radius;
	xSphere* sphbnd;
	int32 rc;
	xSphere* sphbnd;
	int32 rc;
	// Line 13856, Address: 0x32d9f0, Func Offset: 0
	// Line 13860, Address: 0x32da20, Func Offset: 0x30
	// Line 13861, Address: 0x32da2c, Func Offset: 0x3c
	// Line 13865, Address: 0x32da34, Func Offset: 0x44
	// Line 13866, Address: 0x32da40, Func Offset: 0x50
	// Line 13869, Address: 0x32da54, Func Offset: 0x64
	// Line 13870, Address: 0x32da78, Func Offset: 0x88
	// Line 13871, Address: 0x32da80, Func Offset: 0x90
	// Line 13873, Address: 0x32da94, Func Offset: 0xa4
	// Line 13875, Address: 0x32dac8, Func Offset: 0xd8
	// Line 13878, Address: 0x32db1c, Func Offset: 0x12c
	// Line 13880, Address: 0x32db2c, Func Offset: 0x13c
	// Line 13878, Address: 0x32db38, Func Offset: 0x148
	// Line 13880, Address: 0x32db44, Func Offset: 0x154
	// Line 13878, Address: 0x32db50, Func Offset: 0x160
	// Line 13880, Address: 0x32db58, Func Offset: 0x168
	// Line 13884, Address: 0x32db60, Func Offset: 0x170
	// Line 13880, Address: 0x32db6c, Func Offset: 0x17c
	// Line 13883, Address: 0x32db84, Func Offset: 0x194
	// Line 13880, Address: 0x32db88, Func Offset: 0x198
	// Line 13883, Address: 0x32db8c, Func Offset: 0x19c
	// Line 13884, Address: 0x32db98, Func Offset: 0x1a8
	// Line 13885, Address: 0x32dba0, Func Offset: 0x1b0
	// Line 13887, Address: 0x32dbb0, Func Offset: 0x1c0
	// Line 13888, Address: 0x32dbc8, Func Offset: 0x1d8
	// Line 13887, Address: 0x32dbd0, Func Offset: 0x1e0
	// Line 13888, Address: 0x32dbd4, Func Offset: 0x1e4
	// Line 13912, Address: 0x32dbe8, Func Offset: 0x1f8
	// Line 13917, Address: 0x32dbf0, Func Offset: 0x200
	// Line 13920, Address: 0x32dbf4, Func Offset: 0x204
	// Line 13917, Address: 0x32dbf8, Func Offset: 0x208
	// Line 13923, Address: 0x32dbfc, Func Offset: 0x20c
	// Line 13918, Address: 0x32dc00, Func Offset: 0x210
	// Line 13923, Address: 0x32dc04, Func Offset: 0x214
	// Line 13920, Address: 0x32dc08, Func Offset: 0x218
	// Line 13923, Address: 0x32dc0c, Func Offset: 0x21c
	// Line 13920, Address: 0x32dc10, Func Offset: 0x220
	// Line 13918, Address: 0x32dc14, Func Offset: 0x224
	// Line 13919, Address: 0x32dc1c, Func Offset: 0x22c
	// Line 13920, Address: 0x32dc28, Func Offset: 0x238
	// Line 13923, Address: 0x32dc34, Func Offset: 0x244
	// Line 13925, Address: 0x32dc3c, Func Offset: 0x24c
	// Line 13927, Address: 0x32dc44, Func Offset: 0x254
	// Line 13931, Address: 0x32dc4c, Func Offset: 0x25c
	// Line 13933, Address: 0x32dc54, Func Offset: 0x264
	// Line 13931, Address: 0x32dc58, Func Offset: 0x268
	// Line 13933, Address: 0x32dc5c, Func Offset: 0x26c
	// Line 13931, Address: 0x32dc60, Func Offset: 0x270
	// Line 13933, Address: 0x32dc70, Func Offset: 0x280
	// Line 13942, Address: 0x32dc78, Func Offset: 0x288
	// Line 13943, Address: 0x32dc80, Func Offset: 0x290
	// Line 13945, Address: 0x32dc94, Func Offset: 0x2a4
	// Line 13907, Address: 0x32dca4, Func Offset: 0x2b4
	// Line 13945, Address: 0x32dca8, Func Offset: 0x2b8
	// Line 13907, Address: 0x32dcac, Func Offset: 0x2bc
	// Line 13889, Address: 0x32dcb4, Func Offset: 0x2c4
	// Line 13945, Address: 0x32dcb8, Func Offset: 0x2c8
	// Line 13892, Address: 0x32dcd8, Func Offset: 0x2e8
	// Line 13945, Address: 0x32dce4, Func Offset: 0x2f4
	// Line 13893, Address: 0x32dcec, Func Offset: 0x2fc
	// Line 13945, Address: 0x32dcf0, Func Offset: 0x300
	// Line 13893, Address: 0x32dcf8, Func Offset: 0x308
	// Line 13945, Address: 0x32dcfc, Func Offset: 0x30c
	// Line 13893, Address: 0x32dd04, Func Offset: 0x314
	// Line 13945, Address: 0x32dd08, Func Offset: 0x318
	// Line 13896, Address: 0x32dd18, Func Offset: 0x328
	// Line 13945, Address: 0x32dd1c, Func Offset: 0x32c
	// Line 13899, Address: 0x32dd50, Func Offset: 0x360
	// Line 13945, Address: 0x32dd54, Func Offset: 0x364
	// Line 13899, Address: 0x32dd78, Func Offset: 0x388
	// Line 13945, Address: 0x32dd84, Func Offset: 0x394
	// Line 13899, Address: 0x32dd88, Func Offset: 0x398
	// Line 13901, Address: 0x32dd90, Func Offset: 0x3a0
	// Line 13945, Address: 0x32dd94, Func Offset: 0x3a4
	// Line 13946, Address: 0x32ddc4, Func Offset: 0x3d4
	// Func End, Address: 0x32ddf8, Func Offset: 0x408
}

// zEntPlayer_BubbleBowlLaneRender__FP4zEnt
// Start address: 0x32de00
void zEntPlayer_BubbleBowlLaneRender(zEnt* ent)
{
	RwMatrixTag* Mat;
	float32 factor;
	xRay3 ray;
	xCollis coll;
	xEnt* ep;
	uint8 alpha;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	_SDRenderState old_rendstat;
	uint8 sRenderDecal;
	int32 sCount;
	RxObjSpace3DVertex vtxbuf[4];
	xVec3 off_corners[4];
	// Line 13696, Address: 0x32de00, Func Offset: 0
	// Line 13699, Address: 0x32de04, Func Offset: 0x4
	// Line 13696, Address: 0x32de08, Func Offset: 0x8
	// Line 13699, Address: 0x32de0c, Func Offset: 0xc
	// Line 13696, Address: 0x32de10, Func Offset: 0x10
	// Line 13700, Address: 0x32de14, Func Offset: 0x14
	// Line 13696, Address: 0x32de18, Func Offset: 0x18
	// Line 13699, Address: 0x32de20, Func Offset: 0x20
	// Line 13697, Address: 0x32de24, Func Offset: 0x24
	// Line 13699, Address: 0x32de28, Func Offset: 0x28
	// Line 13700, Address: 0x32de2c, Func Offset: 0x2c
	// Line 13701, Address: 0x32de38, Func Offset: 0x38
	// Line 13702, Address: 0x32de3c, Func Offset: 0x3c
	// Line 13703, Address: 0x32de54, Func Offset: 0x54
	// Line 13712, Address: 0x32de58, Func Offset: 0x58
	// Line 13745, Address: 0x32de64, Func Offset: 0x64
	// Line 13748, Address: 0x32de70, Func Offset: 0x70
	// Line 13764, Address: 0x32de7c, Func Offset: 0x7c
	// Line 13766, Address: 0x32dec4, Func Offset: 0xc4
	// Line 13767, Address: 0x32dec8, Func Offset: 0xc8
	// Line 13766, Address: 0x32decc, Func Offset: 0xcc
	// Line 13767, Address: 0x32ded0, Func Offset: 0xd0
	// Line 13766, Address: 0x32ded4, Func Offset: 0xd4
	// Line 13777, Address: 0x32ded8, Func Offset: 0xd8
	// Line 13768, Address: 0x32dee0, Func Offset: 0xe0
	// Line 13766, Address: 0x32dee4, Func Offset: 0xe4
	// Line 13767, Address: 0x32deec, Func Offset: 0xec
	// Line 13771, Address: 0x32def0, Func Offset: 0xf0
	// Line 13767, Address: 0x32def4, Func Offset: 0xf4
	// Line 13771, Address: 0x32def8, Func Offset: 0xf8
	// Line 13766, Address: 0x32defc, Func Offset: 0xfc
	// Line 13767, Address: 0x32df00, Func Offset: 0x100
	// Line 13766, Address: 0x32df04, Func Offset: 0x104
	// Line 13767, Address: 0x32df08, Func Offset: 0x108
	// Line 13766, Address: 0x32df0c, Func Offset: 0x10c
	// Line 13771, Address: 0x32df10, Func Offset: 0x110
	// Line 13777, Address: 0x32df1c, Func Offset: 0x11c
	// Line 13776, Address: 0x32df20, Func Offset: 0x120
	// Line 13777, Address: 0x32df24, Func Offset: 0x124
	// Line 13766, Address: 0x32df2c, Func Offset: 0x12c
	// Line 13777, Address: 0x32df30, Func Offset: 0x130
	// Line 13766, Address: 0x32df34, Func Offset: 0x134
	// Line 13776, Address: 0x32df3c, Func Offset: 0x13c
	// Line 13771, Address: 0x32df44, Func Offset: 0x144
	// Line 13776, Address: 0x32df50, Func Offset: 0x150
	// Line 13768, Address: 0x32df54, Func Offset: 0x154
	// Line 13766, Address: 0x32df58, Func Offset: 0x158
	// Line 13768, Address: 0x32df5c, Func Offset: 0x15c
	// Line 13769, Address: 0x32df60, Func Offset: 0x160
	// Line 13781, Address: 0x32df64, Func Offset: 0x164
	// Line 13769, Address: 0x32df68, Func Offset: 0x168
	// Line 13776, Address: 0x32df6c, Func Offset: 0x16c
	// Line 13771, Address: 0x32df70, Func Offset: 0x170
	// Line 13766, Address: 0x32df74, Func Offset: 0x174
	// Line 13771, Address: 0x32df78, Func Offset: 0x178
	// Line 13772, Address: 0x32df7c, Func Offset: 0x17c
	// Line 13771, Address: 0x32df84, Func Offset: 0x184
	// Line 13772, Address: 0x32df88, Func Offset: 0x188
	// Line 13776, Address: 0x32df8c, Func Offset: 0x18c
	// Line 13772, Address: 0x32df90, Func Offset: 0x190
	// Line 13776, Address: 0x32df94, Func Offset: 0x194
	// Line 13772, Address: 0x32df98, Func Offset: 0x198
	// Line 13776, Address: 0x32df9c, Func Offset: 0x19c
	// Line 13772, Address: 0x32dfa0, Func Offset: 0x1a0
	// Line 13773, Address: 0x32dfa4, Func Offset: 0x1a4
	// Line 13776, Address: 0x32dfa8, Func Offset: 0x1a8
	// Line 13773, Address: 0x32dfac, Func Offset: 0x1ac
	// Line 13771, Address: 0x32dfb0, Func Offset: 0x1b0
	// Line 13774, Address: 0x32dfb4, Func Offset: 0x1b4
	// Line 13778, Address: 0x32dfbc, Func Offset: 0x1bc
	// Line 13781, Address: 0x32dfc0, Func Offset: 0x1c0
	// Line 13778, Address: 0x32dfc4, Func Offset: 0x1c4
	// Line 13776, Address: 0x32dfc8, Func Offset: 0x1c8
	// Line 13779, Address: 0x32dfcc, Func Offset: 0x1cc
	// Line 13782, Address: 0x32dfd0, Func Offset: 0x1d0
	// Line 13779, Address: 0x32dfd4, Func Offset: 0x1d4
	// Line 13771, Address: 0x32dfd8, Func Offset: 0x1d8
	// Line 13781, Address: 0x32dfdc, Func Offset: 0x1dc
	// Line 13782, Address: 0x32dfe0, Func Offset: 0x1e0
	// Line 13781, Address: 0x32dfe4, Func Offset: 0x1e4
	// Line 13782, Address: 0x32dff4, Func Offset: 0x1f4
	// Line 13776, Address: 0x32dff8, Func Offset: 0x1f8
	// Line 13782, Address: 0x32dffc, Func Offset: 0x1fc
	// Line 13776, Address: 0x32e000, Func Offset: 0x200
	// Line 13782, Address: 0x32e004, Func Offset: 0x204
	// Line 13781, Address: 0x32e00c, Func Offset: 0x20c
	// Line 13783, Address: 0x32e010, Func Offset: 0x210
	// Line 13781, Address: 0x32e014, Func Offset: 0x214
	// Line 13783, Address: 0x32e018, Func Offset: 0x218
	// Line 13781, Address: 0x32e01c, Func Offset: 0x21c
	// Line 13784, Address: 0x32e020, Func Offset: 0x220
	// Line 13781, Address: 0x32e028, Func Offset: 0x228
	// Line 13788, Address: 0x32e02c, Func Offset: 0x22c
	// Line 13790, Address: 0x32e038, Func Offset: 0x238
	// Line 13791, Address: 0x32e040, Func Offset: 0x240
	// Line 13795, Address: 0x32e044, Func Offset: 0x244
	// Line 13802, Address: 0x32e04c, Func Offset: 0x24c
	// Line 13803, Address: 0x32e060, Func Offset: 0x260
	// Line 13806, Address: 0x32e1e8, Func Offset: 0x3e8
	// Line 13808, Address: 0x32e1f0, Func Offset: 0x3f0
	// Line 13717, Address: 0x32e200, Func Offset: 0x400
	// Line 13808, Address: 0x32e208, Func Offset: 0x408
	// Line 13718, Address: 0x32e218, Func Offset: 0x418
	// Line 13721, Address: 0x32e220, Func Offset: 0x420
	// Line 13808, Address: 0x32e224, Func Offset: 0x424
	// Line 13719, Address: 0x32e22c, Func Offset: 0x42c
	// Line 13808, Address: 0x32e234, Func Offset: 0x434
	// Line 13718, Address: 0x32e248, Func Offset: 0x448
	// Line 13808, Address: 0x32e250, Func Offset: 0x450
	// Line 13718, Address: 0x32e25c, Func Offset: 0x45c
	// Line 13808, Address: 0x32e264, Func Offset: 0x464
	// Line 13719, Address: 0x32e274, Func Offset: 0x474
	// Line 13808, Address: 0x32e278, Func Offset: 0x478
	// Line 13718, Address: 0x32e280, Func Offset: 0x480
	// Line 13808, Address: 0x32e288, Func Offset: 0x488
	// Line 13730, Address: 0x32e298, Func Offset: 0x498
	// Line 13808, Address: 0x32e29c, Func Offset: 0x49c
	// Line 13736, Address: 0x32e2b4, Func Offset: 0x4b4
	// Line 13808, Address: 0x32e2b8, Func Offset: 0x4b8
	// Line 13737, Address: 0x32e2c0, Func Offset: 0x4c0
	// Line 13731, Address: 0x32e2c8, Func Offset: 0x4c8
	// Line 13735, Address: 0x32e2d0, Func Offset: 0x4d0
	// Line 13808, Address: 0x32e2d8, Func Offset: 0x4d8
	// Line 13739, Address: 0x32e2e8, Func Offset: 0x4e8
	// Line 13741, Address: 0x32e2f0, Func Offset: 0x4f0
	// Line 13743, Address: 0x32e2f4, Func Offset: 0x4f4
	// Line 13808, Address: 0x32e2fc, Func Offset: 0x4fc
	// Line 13749, Address: 0x32e300, Func Offset: 0x500
	// Line 13808, Address: 0x32e30c, Func Offset: 0x50c
	// Line 13749, Address: 0x32e314, Func Offset: 0x514
	// Line 13808, Address: 0x32e31c, Func Offset: 0x51c
	// Func End, Address: 0x32e330, Func Offset: 0x530
}

// zEntPlayerDirectionDecalRender__FP11RwMatrixTagP8RwRasterff
// Start address: 0x32e330
void zEntPlayerDirectionDecalRender(RwMatrixTag* Mat, RwRaster* rwras, float32 factor, float32 distance)
{
	xVec3 center;
	xMat4x3 matrix;
	xShadowCache cache;
	int32 i;
	xEnt* ep;
	int32 rc;
	// Line 13638, Address: 0x32e330, Func Offset: 0
	// Line 13645, Address: 0x32e334, Func Offset: 0x4
	// Line 13638, Address: 0x32e338, Func Offset: 0x8
	// Line 13645, Address: 0x32e33c, Func Offset: 0xc
	// Line 13638, Address: 0x32e340, Func Offset: 0x10
	// Line 13659, Address: 0x32e344, Func Offset: 0x14
	// Line 13638, Address: 0x32e348, Func Offset: 0x18
	// Line 13659, Address: 0x32e34c, Func Offset: 0x1c
	// Line 13638, Address: 0x32e350, Func Offset: 0x20
	// Line 13641, Address: 0x32e370, Func Offset: 0x40
	// Line 13666, Address: 0x32e384, Func Offset: 0x54
	// Line 13641, Address: 0x32e398, Func Offset: 0x68
	// Line 13645, Address: 0x32e3a4, Func Offset: 0x74
	// Line 13641, Address: 0x32e3a8, Func Offset: 0x78
	// Line 13645, Address: 0x32e3b0, Func Offset: 0x80
	// Line 13666, Address: 0x32e3b4, Func Offset: 0x84
	// Line 13645, Address: 0x32e3bc, Func Offset: 0x8c
	// Line 13641, Address: 0x32e3c4, Func Offset: 0x94
	// Line 13645, Address: 0x32e3c8, Func Offset: 0x98
	// Line 13646, Address: 0x32e3e0, Func Offset: 0xb0
	// Line 13645, Address: 0x32e3e4, Func Offset: 0xb4
	// Line 13646, Address: 0x32e3f4, Func Offset: 0xc4
	// Line 13645, Address: 0x32e3f8, Func Offset: 0xc8
	// Line 13646, Address: 0x32e400, Func Offset: 0xd0
	// Line 13649, Address: 0x32e41c, Func Offset: 0xec
	// Line 13646, Address: 0x32e420, Func Offset: 0xf0
	// Line 13649, Address: 0x32e430, Func Offset: 0x100
	// Line 13646, Address: 0x32e434, Func Offset: 0x104
	// Line 13649, Address: 0x32e440, Func Offset: 0x110
	// Line 13650, Address: 0x32e454, Func Offset: 0x124
	// Line 13659, Address: 0x32e45c, Func Offset: 0x12c
	// Line 13650, Address: 0x32e460, Func Offset: 0x130
	// Line 13659, Address: 0x32e464, Func Offset: 0x134
	// Line 13650, Address: 0x32e468, Func Offset: 0x138
	// Line 13659, Address: 0x32e470, Func Offset: 0x140
	// Line 13650, Address: 0x32e474, Func Offset: 0x144
	// Line 13659, Address: 0x32e478, Func Offset: 0x148
	// Line 13651, Address: 0x32e47c, Func Offset: 0x14c
	// Line 13659, Address: 0x32e480, Func Offset: 0x150
	// Line 13651, Address: 0x32e484, Func Offset: 0x154
	// Line 13659, Address: 0x32e48c, Func Offset: 0x15c
	// Line 13651, Address: 0x32e490, Func Offset: 0x160
	// Line 13659, Address: 0x32e494, Func Offset: 0x164
	// Line 13651, Address: 0x32e498, Func Offset: 0x168
	// Line 13659, Address: 0x32e49c, Func Offset: 0x16c
	// Line 13651, Address: 0x32e4a0, Func Offset: 0x170
	// Line 13652, Address: 0x32e4a4, Func Offset: 0x174
	// Line 13659, Address: 0x32e4a8, Func Offset: 0x178
	// Line 13652, Address: 0x32e4ac, Func Offset: 0x17c
	// Line 13659, Address: 0x32e4b4, Func Offset: 0x184
	// Line 13652, Address: 0x32e4b8, Func Offset: 0x188
	// Line 13659, Address: 0x32e4bc, Func Offset: 0x18c
	// Line 13652, Address: 0x32e4c0, Func Offset: 0x190
	// Line 13659, Address: 0x32e4cc, Func Offset: 0x19c
	// Line 13652, Address: 0x32e4d0, Func Offset: 0x1a0
	// Line 13666, Address: 0x32e4d4, Func Offset: 0x1a4
	// Line 13659, Address: 0x32e4d8, Func Offset: 0x1a8
	// Line 13661, Address: 0x32e500, Func Offset: 0x1d0
	// Line 13666, Address: 0x32e504, Func Offset: 0x1d4
	// Line 13671, Address: 0x32e50c, Func Offset: 0x1dc
	// Line 13676, Address: 0x32e528, Func Offset: 0x1f8
	// Line 13693, Address: 0x32e53c, Func Offset: 0x20c
	// Line 13681, Address: 0x32e54c, Func Offset: 0x21c
	// Line 13693, Address: 0x32e550, Func Offset: 0x220
	// Line 13690, Address: 0x32e58c, Func Offset: 0x25c
	// Line 13693, Address: 0x32e594, Func Offset: 0x264
	// Func End, Address: 0x32e5cc, Func Offset: 0x29c
}

// zEntPlayer_ShadowModelDisable__Fv
// Start address: 0x32e5d0
void zEntPlayer_ShadowModelDisable()
{
	// Line 13573, Address: 0x32e5d0, Func Offset: 0
	// Line 13577, Address: 0x32e5ec, Func Offset: 0x1c
	// Line 13573, Address: 0x32e5f8, Func Offset: 0x28
	// Line 13577, Address: 0x32e5fc, Func Offset: 0x2c
	// Line 13574, Address: 0x32e614, Func Offset: 0x44
	// Line 13577, Address: 0x32e618, Func Offset: 0x48
	// Line 13575, Address: 0x32e624, Func Offset: 0x54
	// Line 13577, Address: 0x32e630, Func Offset: 0x60
	// Func End, Address: 0x32e638, Func Offset: 0x68
}

// zEntPlayer_ShadowModelEnable__Fv
// Start address: 0x32e640
void zEntPlayer_ShadowModelEnable()
{
	xModelInstance* modelInst;
	xBox* combinedAnimBound;
	// Line 13551, Address: 0x32e640, Func Offset: 0
	// Line 13552, Address: 0x32e644, Func Offset: 0x4
	// Line 13551, Address: 0x32e648, Func Offset: 0x8
	// Line 13552, Address: 0x32e654, Func Offset: 0x14
	// Line 13570, Address: 0x32e66c, Func Offset: 0x2c
	// Line 13552, Address: 0x32e678, Func Offset: 0x38
	// Line 13570, Address: 0x32e67c, Func Offset: 0x3c
	// Line 13560, Address: 0x32e694, Func Offset: 0x54
	// Line 13553, Address: 0x32e69c, Func Offset: 0x5c
	// Line 13570, Address: 0x32e6a0, Func Offset: 0x60
	// Line 13554, Address: 0x32e6ac, Func Offset: 0x6c
	// Line 13570, Address: 0x32e6b0, Func Offset: 0x70
	// Line 13563, Address: 0x32e6d0, Func Offset: 0x90
	// Line 13570, Address: 0x32e6d4, Func Offset: 0x94
	// Line 13566, Address: 0x32e6dc, Func Offset: 0x9c
	// Line 13570, Address: 0x32e6e0, Func Offset: 0xa0
	// Line 13564, Address: 0x32e6fc, Func Offset: 0xbc
	// Line 13570, Address: 0x32e700, Func Offset: 0xc0
	// Line 13564, Address: 0x32e704, Func Offset: 0xc4
	// Line 13570, Address: 0x32e708, Func Offset: 0xc8
	// Func End, Address: 0x32e72c, Func Offset: 0xec
}

// zEntPlayer_PatrickLaunch__FP4xEnt
// Start address: 0x32e730
void zEntPlayer_PatrickLaunch(xEnt* patLauncher)
{
	// Line 13538, Address: 0x32e730, Func Offset: 0
	// Line 13539, Address: 0x32e734, Func Offset: 0x4
	// Func End, Address: 0x32e73c, Func Offset: 0xc
}

// zEntPlayer_CheckCritterContact__FP4xEntf
// Start address: 0x32e740
void zEntPlayer_CheckCritterContact(xEnt* player, float32 dt)
{
	int32 i;
	xEntCollis* plyrcol;
	xCollis* colrec;
	zNMECommon* npc;
	en_npctyp ntyp;
	uint32 anid_player;
	int32 found;
	int32 k;
	xPsyche* psy;
	float32 tym_inGoal;
	uint32 anid_player;
	int32 found;
	int32 k;
	int32 k;
	uint32 mvinf;
	xVec3 dir_push;
	xVec3 vel_push;
	uint32 hashes_pa[6];
	uint32 hashes_ss[3];
	int8 @21072;
	uint32 hashes_cartwheel[2];
	int8 @21067;
	int8 @21064;
	// Line 13319, Address: 0x32e740, Func Offset: 0
	// Line 13323, Address: 0x32e744, Func Offset: 0x4
	// Line 13319, Address: 0x32e748, Func Offset: 0x8
	// Line 13323, Address: 0x32e74c, Func Offset: 0xc
	// Line 13319, Address: 0x32e750, Func Offset: 0x10
	// Line 13323, Address: 0x32e788, Func Offset: 0x48
	// Line 13321, Address: 0x32e78c, Func Offset: 0x4c
	// Line 13323, Address: 0x32e790, Func Offset: 0x50
	// Line 13341, Address: 0x32e79c, Func Offset: 0x5c
	// Line 13346, Address: 0x32e7a8, Func Offset: 0x68
	// Line 13356, Address: 0x32e7b4, Func Offset: 0x74
	// Line 13362, Address: 0x32e7c0, Func Offset: 0x80
	// Line 13363, Address: 0x32e80c, Func Offset: 0xcc
	// Line 13366, Address: 0x32e810, Func Offset: 0xd0
	// Line 13370, Address: 0x32e818, Func Offset: 0xd8
	// Line 13372, Address: 0x32e828, Func Offset: 0xe8
	// Line 13373, Address: 0x32e82c, Func Offset: 0xec
	// Line 13377, Address: 0x32e844, Func Offset: 0x104
	// Line 13380, Address: 0x32e848, Func Offset: 0x108
	// Line 13377, Address: 0x32e850, Func Offset: 0x110
	// Line 13380, Address: 0x32e868, Func Offset: 0x128
	// Line 13381, Address: 0x32e870, Func Offset: 0x130
	// Line 13382, Address: 0x32e878, Func Offset: 0x138
	// Line 13384, Address: 0x32e884, Func Offset: 0x144
	// Line 13385, Address: 0x32e88c, Func Offset: 0x14c
	// Line 13387, Address: 0x32e8a0, Func Offset: 0x160
	// Line 13390, Address: 0x32e8a8, Func Offset: 0x168
	// Line 13392, Address: 0x32e8c4, Func Offset: 0x184
	// Line 13393, Address: 0x32e8d8, Func Offset: 0x198
	// Line 13403, Address: 0x32e8e0, Func Offset: 0x1a0
	// Line 13473, Address: 0x32e8ec, Func Offset: 0x1ac
	// Line 13478, Address: 0x32e948, Func Offset: 0x208
	// Line 13481, Address: 0x32e97c, Func Offset: 0x23c
	// Line 13482, Address: 0x32e984, Func Offset: 0x244
	// Line 13487, Address: 0x32e990, Func Offset: 0x250
	// Line 13488, Address: 0x32e998, Func Offset: 0x258
	// Line 13487, Address: 0x32e99c, Func Offset: 0x25c
	// Line 13488, Address: 0x32e9a4, Func Offset: 0x264
	// Line 13487, Address: 0x32e9ac, Func Offset: 0x26c
	// Line 13488, Address: 0x32e9e8, Func Offset: 0x2a8
	// Line 13492, Address: 0x32ea30, Func Offset: 0x2f0
	// Line 13495, Address: 0x32ea40, Func Offset: 0x300
	// Line 13492, Address: 0x32ea44, Func Offset: 0x304
	// Line 13495, Address: 0x32ea74, Func Offset: 0x334
	// Line 13492, Address: 0x32ea78, Func Offset: 0x338
	// Line 13495, Address: 0x32eb0c, Func Offset: 0x3cc
	// Line 13492, Address: 0x32eb10, Func Offset: 0x3d0
	// Line 13495, Address: 0x32eb24, Func Offset: 0x3e4
	// Line 13492, Address: 0x32eb3c, Func Offset: 0x3fc
	// Line 13495, Address: 0x32eb44, Func Offset: 0x404
	// Line 13496, Address: 0x32eb5c, Func Offset: 0x41c
	// Line 13323, Address: 0x32eb70, Func Offset: 0x430
	// Line 13496, Address: 0x32eb78, Func Offset: 0x438
	// Line 13341, Address: 0x32ebac, Func Offset: 0x46c
	// Line 13496, Address: 0x32ebb0, Func Offset: 0x470
	// Line 13346, Address: 0x32ec2c, Func Offset: 0x4ec
	// Line 13496, Address: 0x32ec30, Func Offset: 0x4f0
	// Line 13356, Address: 0x32ec54, Func Offset: 0x514
	// Line 13496, Address: 0x32ec58, Func Offset: 0x518
	// Line 13413, Address: 0x32ec68, Func Offset: 0x528
	// Line 13496, Address: 0x32ec6c, Func Offset: 0x52c
	// Line 13413, Address: 0x32ec70, Func Offset: 0x530
	// Line 13496, Address: 0x32ec74, Func Offset: 0x534
	// Line 13413, Address: 0x32ec78, Func Offset: 0x538
	// Line 13496, Address: 0x32ec90, Func Offset: 0x550
	// Line 13421, Address: 0x32eca4, Func Offset: 0x564
	// Line 13496, Address: 0x32ecac, Func Offset: 0x56c
	// Line 13425, Address: 0x32ecbc, Func Offset: 0x57c
	// Line 13496, Address: 0x32ecd0, Func Offset: 0x590
	// Line 13441, Address: 0x32ed04, Func Offset: 0x5c4
	// Line 13496, Address: 0x32ed08, Func Offset: 0x5c8
	// Line 13441, Address: 0x32ed0c, Func Offset: 0x5cc
	// Line 13496, Address: 0x32ed10, Func Offset: 0x5d0
	// Line 13444, Address: 0x32ed1c, Func Offset: 0x5dc
	// Line 13445, Address: 0x32ed24, Func Offset: 0x5e4
	// Line 13496, Address: 0x32ed28, Func Offset: 0x5e8
	// Line 13468, Address: 0x32ed44, Func Offset: 0x604
	// Line 13496, Address: 0x32ed50, Func Offset: 0x610
	// Line 13469, Address: 0x32ed5c, Func Offset: 0x61c
	// Line 13447, Address: 0x32ed64, Func Offset: 0x624
	// Line 13496, Address: 0x32ed68, Func Offset: 0x628
	// Line 13448, Address: 0x32ed74, Func Offset: 0x634
	// Line 13496, Address: 0x32ed78, Func Offset: 0x638
	// Line 13448, Address: 0x32ed7c, Func Offset: 0x63c
	// Line 13496, Address: 0x32ed80, Func Offset: 0x640
	// Line 13451, Address: 0x32ed8c, Func Offset: 0x64c
	// Line 13452, Address: 0x32ed94, Func Offset: 0x654
	// Line 13496, Address: 0x32ed98, Func Offset: 0x658
	// Line 13504, Address: 0x32edd4, Func Offset: 0x694
	// Line 13527, Address: 0x32edec, Func Offset: 0x6ac
	// Line 13530, Address: 0x32edf0, Func Offset: 0x6b0
	// Func End, Address: 0x32ee30, Func Offset: 0x6f0
}

// zEntPlayerGauntletBlastRadius__Ff
// Start address: 0x32ee30
void zEntPlayerGauntletBlastRadius(float32 radius)
{
	// Line 13308, Address: 0x32ee30, Func Offset: 0
	// Func End, Address: 0x32ee38, Func Offset: 0x8
}

// zEntPlayer_Update__FP4xEntP6xScenef
// Start address: 0x32ee40
void zEntPlayer_Update(xEnt* ent, xScene* sc, float32 dt)
{
	int32 sPlayerUpdateCount'5032;
	xModelInstance* modelInst;
	int32 i;
	xAnimState* astate;
	xEntBoulder* bbowl;
	xVec3* pos;
	xVec3 velocityNorm;
	xBound bowlBound;
	xBound bowlBound;
	xSphere* bowlSph;
	xBound thrownBound;
	xSphere* bowlSph;
	float32 mvelx;
	float32 mvelz;
	float32 s;
	uint32 total;
	xEnt* oldTarget;
	xEnt* oldTarget;
	xVec3 pos;
	xAnimSingle* single;
	xAnimState* astate;
	zScene* zsc;
	xParEmitterCustomSettings info;
	xVec3 vel;
	xVec3 tmp;
	float32 rate;
	xBound slideB;
	xVec3 normvel;
	uint8* bonelist;
	xAnimSingle* single;
	uint32 num;
	uint8* bp;
	xVec3* posbuf;
	xVec3* velbuf;
	xVec3* pp;
	xVec3* vp;
	uint32 j;
	xMat4x3 mat;
	xAnimSingle* single;
	xAnimState* astate;
	xColor_tag black;
	xColor_tag clear;
	int32 anim_done;
	int32 moveCam;
	int32 stopCam;
	int32 anim;
	uint32 i;
	float32 rad2;
	float32 radold2;
	float32 sdist2;
	float32 sdistold2;
	xEnt* vill;
	uint32 stuckforce;
	float32 playerVel;
	float32 actualVel;
	xRay3 testRay;
	xCollis testColl;
	float32 old_yvel;
	xVec3 suboldpos;
	xVec3 predrive_pos;
	xVec3 motion;
	float32 ndotm;
	float32 sft;
	float32 fg;
	float32 m;
	float32 m;
	uint8 hitting_floor;
	xVec3& player_loc;
	xVec3 driveDist;
	xCollis bbc;
	xBox bbox;
	float32 dist;
	uint32 redo_catchtunnel;
	xVec3 vstart;
	xVec3 vend;
	xSweptSphere sws;
	uint32 iter;
	xSweptSphere swsredo[3];
	xSweptSphere* swscurr;
	xVec3 totalTan;
	float32 distremain;
	xVec3 deltaremain;
	xCollis* wcoll;
	xCollis* gcoll;
	float32 hdotm;
	xSurface* wsurf;
	xCollis* fcoll;
	xBase* b;
	float32 dummy;
	int32 isGoo;
	int32 isBB;
	int32 sliding;
	xVec3 pos_rnd;
	xVec3 vel_rnd;
	float32 dposx;
	float32 dposy;
	float32 dposz;
	float32 animTimeStartDamage;
	float32 boundRadius;
	xBound punchBound;
	xSphere* punchSph;
	xVec3 rhand;
	xModelTag* rhandTag;
	Melee_cbData cbdata;
	xCollis* ceil;
	xEnt* destructent;
	uint8 destroyed;
	xVec3 bashRay;
	float32 hitParams[4];
	xVec3 rhand;
	xModelTag* rhandTag;
	xEntBoulder* boul;
	xVec3 f;
	zNMECommon* npc;
	xCollis* ceil;
	xEnt* destructent;
	xVec3 rhand;
	xModelTag* rhandTag;
	HAZBang* hazbang;
	xVec3 temp;
	xVec3* entPos;
	int32 ignoreYOffset;
	float32 yOffset;
	float32 scaleFactor;
	int32 isBashMech;
	int32 i;
	xMat3x3 tmp_descaled;
	float32 dummy;
	float32 len2;
	float32 len_inv;
	float32 len2;
	float32 len_inv;
	float32 len2;
	float32 len_inv;
	float32 len2;
	float32 len_inv;
	float32 len2;
	float32 len_inv;
	float32 len2;
	float32 len_inv;
	xBound gauntletBound;
	xSphere* gauntletSph;
	xBound flopBound;
	xSphere* flopSph;
	float32 scale;
	float32 xVelScaled;
	float32 zVelScaled;
	float32 cMaxOffset;
	xCollis* floor;
	xEnt* destructent;
	uint8 destroyed;
	xVec3 bounceRay;
	zNMECommon* npc;
	float32 hitParams[4];
	xBound cartwheelBound;
	xSphere* cartwheelSph;
	xCollis* col;
	xEnt* destructent;
	uint8 destroyed;
	int32 hit;
	zNMECommon* npc;
	float32 hitParams[4];
	float32 stunlerp;
	float32 mag;
	float32 lerpspeed;
	xVec3 delta;
	xModelTag* rhtag;
	xModelTag* lhtag;
	float32 radius;
	en_plyratak attackType;
	float32 reach;
	xVec3 rhand;
	xVec3 lhand;
	xBound rhandB;
	xBound lhandB;
	xSphere* rightSph;
	xSphere* leftSph;
	float32 posRadius;
	xVec3* playerPos;
	float32 height;
	xVec3 leftRibbonPos;
	xVec3 rightRibbonPos;
	xVec3 toRhand;
	xVec3 toLhand;
	xEntBoulder* boul;
	int8 tmpStateName[256];
	xAnimSingle* playerAnim;
	xAnimState* itemAnim;
	xVec3 tmptran;
	xQuat tmpquat;
	xMat4x3 objMat;
	xVec3 rotatedLC;
	xEntBoulder* boul;
	xMat4x3 targetMat;
	float32 lerp;
	float32 bottom;
	zNMECommon* npc;
	zNMECommon* npc;
	zNMETiki* tiki;
	RwMatrixTag rootOldMat;
	xMat4x3 tmpMat;
	xVec3 ax;
	float32 rads;
	float32 crs;
	float32 dot;
	xMat3x3 rotMat;
	xVec3 disp;
	float32 closestDist_sqr;
	xVec3 toTarget;
	xEnt* closest;
	int32 canSwing;
	int32 i;
	xEnt* targent;
	xVec3 disp;
	uint32 hash_puitem_puanim;
	int8 @17852;
	float32 aTime;
	xEntCollis old_collis;
	// Line 9409, Address: 0x32ee40, Func Offset: 0
	// Line 9416, Address: 0x32ee9c, Func Offset: 0x5c
	// Line 9423, Address: 0x32eea0, Func Offset: 0x60
	// Line 9424, Address: 0x32eea4, Func Offset: 0x64
	// Line 9425, Address: 0x32eeac, Func Offset: 0x6c
	// Line 9426, Address: 0x32eeb8, Func Offset: 0x78
	// Line 9427, Address: 0x32eebc, Func Offset: 0x7c
	// Line 9432, Address: 0x32eed0, Func Offset: 0x90
	// Line 9433, Address: 0x32eedc, Func Offset: 0x9c
	// Line 9434, Address: 0x32eeec, Func Offset: 0xac
	// Line 9435, Address: 0x32eef8, Func Offset: 0xb8
	// Line 9438, Address: 0x32ef00, Func Offset: 0xc0
	// Line 9440, Address: 0x32ef20, Func Offset: 0xe0
	// Line 9443, Address: 0x32ef34, Func Offset: 0xf4
	// Line 9446, Address: 0x32ef40, Func Offset: 0x100
	// Line 9449, Address: 0x32ef44, Func Offset: 0x104
	// Line 9446, Address: 0x32ef48, Func Offset: 0x108
	// Line 9449, Address: 0x32ef4c, Func Offset: 0x10c
	// Line 9450, Address: 0x32ef54, Func Offset: 0x114
	// Line 9462, Address: 0x32ef64, Func Offset: 0x124
	// Line 9460, Address: 0x32ef68, Func Offset: 0x128
	// Line 9462, Address: 0x32ef6c, Func Offset: 0x12c
	// Line 9463, Address: 0x32ef80, Func Offset: 0x140
	// Line 9467, Address: 0x32f00c, Func Offset: 0x1cc
	// Line 9471, Address: 0x32f018, Func Offset: 0x1d8
	// Line 9473, Address: 0x32f034, Func Offset: 0x1f4
	// Line 9477, Address: 0x32f054, Func Offset: 0x214
	// Line 9474, Address: 0x32f064, Func Offset: 0x224
	// Line 9476, Address: 0x32f070, Func Offset: 0x230
	// Line 9477, Address: 0x32f078, Func Offset: 0x238
	// Line 9478, Address: 0x32f090, Func Offset: 0x250
	// Line 9479, Address: 0x32f098, Func Offset: 0x258
	// Line 9481, Address: 0x32f0a8, Func Offset: 0x268
	// Line 9479, Address: 0x32f0b0, Func Offset: 0x270
	// Line 9481, Address: 0x32f0b8, Func Offset: 0x278
	// Line 9487, Address: 0x32f0c0, Func Offset: 0x280
	// Line 9490, Address: 0x32f12c, Func Offset: 0x2ec
	// Line 9491, Address: 0x32f150, Func Offset: 0x310
	// Line 9495, Address: 0x32f190, Func Offset: 0x350
	// Line 9498, Address: 0x32f19c, Func Offset: 0x35c
	// Line 9500, Address: 0x32f1b8, Func Offset: 0x378
	// Line 9501, Address: 0x32f1c8, Func Offset: 0x388
	// Line 9502, Address: 0x32f1e4, Func Offset: 0x3a4
	// Line 9503, Address: 0x32f1e8, Func Offset: 0x3a8
	// Line 9502, Address: 0x32f1ec, Func Offset: 0x3ac
	// Line 9503, Address: 0x32f1fc, Func Offset: 0x3bc
	// Line 9504, Address: 0x32f210, Func Offset: 0x3d0
	// Line 9505, Address: 0x32f230, Func Offset: 0x3f0
	// Line 9506, Address: 0x32f234, Func Offset: 0x3f4
	// Line 9505, Address: 0x32f238, Func Offset: 0x3f8
	// Line 9506, Address: 0x32f23c, Func Offset: 0x3fc
	// Line 9505, Address: 0x32f244, Func Offset: 0x404
	// Line 9506, Address: 0x32f250, Func Offset: 0x410
	// Line 9508, Address: 0x32f288, Func Offset: 0x448
	// Line 9509, Address: 0x32f298, Func Offset: 0x458
	// Line 9510, Address: 0x32f2a8, Func Offset: 0x468
	// Line 9513, Address: 0x32f2b0, Func Offset: 0x470
	// Line 9516, Address: 0x32f2c4, Func Offset: 0x484
	// Line 9520, Address: 0x32f368, Func Offset: 0x528
	// Line 9528, Address: 0x32f374, Func Offset: 0x534
	// Line 9529, Address: 0x32f37c, Func Offset: 0x53c
	// Line 9530, Address: 0x32f384, Func Offset: 0x544
	// Line 9533, Address: 0x32f390, Func Offset: 0x550
	// Line 9530, Address: 0x32f394, Func Offset: 0x554
	// Line 9532, Address: 0x32f3a8, Func Offset: 0x568
	// Line 9533, Address: 0x32f3b0, Func Offset: 0x570
	// Line 9537, Address: 0x32f3c8, Func Offset: 0x588
	// Line 9533, Address: 0x32f3cc, Func Offset: 0x58c
	// Line 9537, Address: 0x32f3d0, Func Offset: 0x590
	// Line 9533, Address: 0x32f3dc, Func Offset: 0x59c
	// Line 9537, Address: 0x32f3e4, Func Offset: 0x5a4
	// Line 9539, Address: 0x32f3f4, Func Offset: 0x5b4
	// Line 9540, Address: 0x32f40c, Func Offset: 0x5cc
	// Line 9542, Address: 0x32f510, Func Offset: 0x6d0
	// Line 9545, Address: 0x32f518, Func Offset: 0x6d8
	// Line 9546, Address: 0x32f5c8, Func Offset: 0x788
	// Line 9549, Address: 0x32f5d0, Func Offset: 0x790
	// Line 9552, Address: 0x32f5d8, Func Offset: 0x798
	// Line 9553, Address: 0x32f5e0, Func Offset: 0x7a0
	// Line 9555, Address: 0x32f5ec, Func Offset: 0x7ac
	// Line 9560, Address: 0x32f5f8, Func Offset: 0x7b8
	// Line 9562, Address: 0x32f620, Func Offset: 0x7e0
	// Line 9564, Address: 0x32f664, Func Offset: 0x824
	// Line 9565, Address: 0x32f674, Func Offset: 0x834
	// Line 9566, Address: 0x32f678, Func Offset: 0x838
	// Line 9567, Address: 0x32f67c, Func Offset: 0x83c
	// Line 9566, Address: 0x32f680, Func Offset: 0x840
	// Line 9567, Address: 0x32f684, Func Offset: 0x844
	// Line 9570, Address: 0x32f6d8, Func Offset: 0x898
	// Line 9571, Address: 0x32f6e8, Func Offset: 0x8a8
	// Line 9572, Address: 0x32f6ec, Func Offset: 0x8ac
	// Line 9573, Address: 0x32f6f0, Func Offset: 0x8b0
	// Line 9572, Address: 0x32f6f4, Func Offset: 0x8b4
	// Line 9573, Address: 0x32f6f8, Func Offset: 0x8b8
	// Line 9580, Address: 0x32f720, Func Offset: 0x8e0
	// Line 9573, Address: 0x32f724, Func Offset: 0x8e4
	// Line 9580, Address: 0x32f728, Func Offset: 0x8e8
	// Line 9582, Address: 0x32f74c, Func Offset: 0x90c
	// Line 9584, Address: 0x32f764, Func Offset: 0x924
	// Line 9587, Address: 0x32f76c, Func Offset: 0x92c
	// Line 9589, Address: 0x32f770, Func Offset: 0x930
	// Line 9587, Address: 0x32f778, Func Offset: 0x938
	// Line 9589, Address: 0x32f77c, Func Offset: 0x93c
	// Line 9592, Address: 0x32f784, Func Offset: 0x944
	// Line 9596, Address: 0x32f788, Func Offset: 0x948
	// Line 9592, Address: 0x32f78c, Func Offset: 0x94c
	// Line 9596, Address: 0x32f790, Func Offset: 0x950
	// Line 9593, Address: 0x32f794, Func Offset: 0x954
	// Line 9594, Address: 0x32f798, Func Offset: 0x958
	// Line 9596, Address: 0x32f79c, Func Offset: 0x95c
	// Line 9593, Address: 0x32f7a4, Func Offset: 0x964
	// Line 9596, Address: 0x32f7b8, Func Offset: 0x978
	// Line 9597, Address: 0x32f7c0, Func Offset: 0x980
	// Line 9611, Address: 0x32f7e0, Func Offset: 0x9a0
	// Line 9613, Address: 0x32f7ec, Func Offset: 0x9ac
	// Line 9615, Address: 0x32f804, Func Offset: 0x9c4
	// Line 9617, Address: 0x32f82c, Func Offset: 0x9ec
	// Line 9618, Address: 0x32f830, Func Offset: 0x9f0
	// Line 9617, Address: 0x32f838, Func Offset: 0x9f8
	// Line 9618, Address: 0x32f83c, Func Offset: 0x9fc
	// Line 9629, Address: 0x32f874, Func Offset: 0xa34
	// Line 9630, Address: 0x32f880, Func Offset: 0xa40
	// Line 9631, Address: 0x32f8a8, Func Offset: 0xa68
	// Line 9634, Address: 0x32f8ac, Func Offset: 0xa6c
	// Line 9638, Address: 0x32f8f4, Func Offset: 0xab4
	// Line 9645, Address: 0x32f900, Func Offset: 0xac0
	// Line 9640, Address: 0x32f904, Func Offset: 0xac4
	// Line 9645, Address: 0x32f908, Func Offset: 0xac8
	// Line 9641, Address: 0x32f90c, Func Offset: 0xacc
	// Line 9645, Address: 0x32f910, Func Offset: 0xad0
	// Line 9638, Address: 0x32f914, Func Offset: 0xad4
	// Line 9641, Address: 0x32f918, Func Offset: 0xad8
	// Line 9638, Address: 0x32f91c, Func Offset: 0xadc
	// Line 9642, Address: 0x32f920, Func Offset: 0xae0
	// Line 9643, Address: 0x32f924, Func Offset: 0xae4
	// Line 9642, Address: 0x32f928, Func Offset: 0xae8
	// Line 9645, Address: 0x32f92c, Func Offset: 0xaec
	// Line 9642, Address: 0x32f930, Func Offset: 0xaf0
	// Line 9645, Address: 0x32f948, Func Offset: 0xb08
	// Line 9646, Address: 0x32f950, Func Offset: 0xb10
	// Line 9648, Address: 0x32f964, Func Offset: 0xb24
	// Line 9650, Address: 0x32f980, Func Offset: 0xb40
	// Line 9661, Address: 0x32f984, Func Offset: 0xb44
	// Line 9665, Address: 0x32f990, Func Offset: 0xb50
	// Line 9668, Address: 0x32f9a8, Func Offset: 0xb68
	// Line 9671, Address: 0x32f9b4, Func Offset: 0xb74
	// Line 9675, Address: 0x32f9b8, Func Offset: 0xb78
	// Line 9672, Address: 0x32f9c0, Func Offset: 0xb80
	// Line 9670, Address: 0x32f9c4, Func Offset: 0xb84
	// Line 9672, Address: 0x32f9c8, Func Offset: 0xb88
	// Line 9671, Address: 0x32f9cc, Func Offset: 0xb8c
	// Line 9668, Address: 0x32f9d0, Func Offset: 0xb90
	// Line 9675, Address: 0x32f9d4, Func Offset: 0xb94
	// Line 9668, Address: 0x32f9d8, Func Offset: 0xb98
	// Line 9675, Address: 0x32f9dc, Func Offset: 0xb9c
	// Line 9673, Address: 0x32f9e0, Func Offset: 0xba0
	// Line 9672, Address: 0x32f9e4, Func Offset: 0xba4
	// Line 9675, Address: 0x32f9fc, Func Offset: 0xbbc
	// Line 9676, Address: 0x32fa04, Func Offset: 0xbc4
	// Line 9678, Address: 0x32fa18, Func Offset: 0xbd8
	// Line 9680, Address: 0x32fa34, Func Offset: 0xbf4
	// Line 9691, Address: 0x32fa38, Func Offset: 0xbf8
	// Line 9704, Address: 0x32fb10, Func Offset: 0xcd0
	// Line 9708, Address: 0x3301b8, Func Offset: 0x1378
	// Line 9710, Address: 0x3301c4, Func Offset: 0x1384
	// Line 9711, Address: 0x3301d4, Func Offset: 0x1394
	// Line 9712, Address: 0x330298, Func Offset: 0x1458
	// Line 9716, Address: 0x3302a0, Func Offset: 0x1460
	// Line 9717, Address: 0x3302c0, Func Offset: 0x1480
	// Line 9732, Address: 0x3302cc, Func Offset: 0x148c
	// Line 9717, Address: 0x3302d0, Func Offset: 0x1490
	// Line 9733, Address: 0x3302d4, Func Offset: 0x1494
	// Line 9717, Address: 0x3302d8, Func Offset: 0x1498
	// Line 9734, Address: 0x3302e8, Func Offset: 0x14a8
	// Line 9717, Address: 0x3302ec, Func Offset: 0x14ac
	// Line 9734, Address: 0x3302f0, Func Offset: 0x14b0
	// Line 9735, Address: 0x330300, Func Offset: 0x14c0
	// Line 9738, Address: 0x330310, Func Offset: 0x14d0
	// Line 9737, Address: 0x330314, Func Offset: 0x14d4
	// Line 9739, Address: 0x330318, Func Offset: 0x14d8
	// Line 9738, Address: 0x330320, Func Offset: 0x14e0
	// Line 9739, Address: 0x330324, Func Offset: 0x14e4
	// Line 9740, Address: 0x330330, Func Offset: 0x14f0
	// Line 9741, Address: 0x330334, Func Offset: 0x14f4
	// Line 9742, Address: 0x330340, Func Offset: 0x1500
	// Line 9741, Address: 0x330344, Func Offset: 0x1504
	// Line 9743, Address: 0x330348, Func Offset: 0x1508
	// Line 9744, Address: 0x330350, Func Offset: 0x1510
	// Line 9750, Address: 0x330354, Func Offset: 0x1514
	// Line 9753, Address: 0x33035c, Func Offset: 0x151c
	// Line 9756, Address: 0x33036c, Func Offset: 0x152c
	// Line 9755, Address: 0x330370, Func Offset: 0x1530
	// Line 9757, Address: 0x330374, Func Offset: 0x1534
	// Line 9756, Address: 0x33037c, Func Offset: 0x153c
	// Line 9757, Address: 0x330380, Func Offset: 0x1540
	// Line 9758, Address: 0x33038c, Func Offset: 0x154c
	// Line 9759, Address: 0x330390, Func Offset: 0x1550
	// Line 9758, Address: 0x330394, Func Offset: 0x1554
	// Line 9759, Address: 0x330398, Func Offset: 0x1558
	// Line 9760, Address: 0x3303a4, Func Offset: 0x1564
	// Line 9759, Address: 0x3303a8, Func Offset: 0x1568
	// Line 9761, Address: 0x3303ac, Func Offset: 0x156c
	// Line 9762, Address: 0x3303b4, Func Offset: 0x1574
	// Line 9767, Address: 0x3303b8, Func Offset: 0x1578
	// Line 9771, Address: 0x3303bc, Func Offset: 0x157c
	// Line 9774, Address: 0x3303d4, Func Offset: 0x1594
	// Line 9777, Address: 0x3303f0, Func Offset: 0x15b0
	// Line 9778, Address: 0x330404, Func Offset: 0x15c4
	// Line 9781, Address: 0x330410, Func Offset: 0x15d0
	// Line 9785, Address: 0x330418, Func Offset: 0x15d8
	// Line 9788, Address: 0x330428, Func Offset: 0x15e8
	// Line 9789, Address: 0x33043c, Func Offset: 0x15fc
	// Line 9790, Address: 0x330448, Func Offset: 0x1608
	// Line 9795, Address: 0x33044c, Func Offset: 0x160c
	// Line 9798, Address: 0x330490, Func Offset: 0x1650
	// Line 9799, Address: 0x3304a8, Func Offset: 0x1668
	// Line 9801, Address: 0x3304b0, Func Offset: 0x1670
	// Line 9833, Address: 0x3304c4, Func Offset: 0x1684
	// Line 9838, Address: 0x3304c8, Func Offset: 0x1688
	// Line 9833, Address: 0x3304cc, Func Offset: 0x168c
	// Line 9838, Address: 0x3304d0, Func Offset: 0x1690
	// Line 9833, Address: 0x3304d4, Func Offset: 0x1694
	// Line 9834, Address: 0x330500, Func Offset: 0x16c0
	// Line 9838, Address: 0x330504, Func Offset: 0x16c4
	// Line 9839, Address: 0x3305d0, Func Offset: 0x1790
	// Line 9841, Address: 0x3305f0, Func Offset: 0x17b0
	// Line 9842, Address: 0x330604, Func Offset: 0x17c4
	// Line 9845, Address: 0x330630, Func Offset: 0x17f0
	// Line 9846, Address: 0x33063c, Func Offset: 0x17fc
	// Line 9849, Address: 0x330698, Func Offset: 0x1858
	// Line 9850, Address: 0x3306c0, Func Offset: 0x1880
	// Line 9852, Address: 0x3306cc, Func Offset: 0x188c
	// Line 9853, Address: 0x3306d0, Func Offset: 0x1890
	// Line 9852, Address: 0x3306d4, Func Offset: 0x1894
	// Line 9853, Address: 0x3306d8, Func Offset: 0x1898
	// Line 9855, Address: 0x3306e0, Func Offset: 0x18a0
	// Line 9852, Address: 0x3306e4, Func Offset: 0x18a4
	// Line 9853, Address: 0x330718, Func Offset: 0x18d8
	// Line 9852, Address: 0x33071c, Func Offset: 0x18dc
	// Line 9853, Address: 0x330720, Func Offset: 0x18e0
	// Line 9852, Address: 0x330724, Func Offset: 0x18e4
	// Line 9853, Address: 0x33072c, Func Offset: 0x18ec
	// Line 9855, Address: 0x330730, Func Offset: 0x18f0
	// Line 9856, Address: 0x330738, Func Offset: 0x18f8
	// Line 9860, Address: 0x330740, Func Offset: 0x1900
	// Line 9863, Address: 0x330768, Func Offset: 0x1928
	// Line 9866, Address: 0x330770, Func Offset: 0x1930
	// Line 9868, Address: 0x330778, Func Offset: 0x1938
	// Line 9870, Address: 0x3307d4, Func Offset: 0x1994
	// Line 9881, Address: 0x3307f8, Func Offset: 0x19b8
	// Line 9882, Address: 0x330814, Func Offset: 0x19d4
	// Line 9883, Address: 0x33081c, Func Offset: 0x19dc
	// Line 9885, Address: 0x330828, Func Offset: 0x19e8
	// Line 9886, Address: 0x33082c, Func Offset: 0x19ec
	// Line 9885, Address: 0x330830, Func Offset: 0x19f0
	// Line 9886, Address: 0x330834, Func Offset: 0x19f4
	// Line 9887, Address: 0x330838, Func Offset: 0x19f8
	// Line 9888, Address: 0x330840, Func Offset: 0x1a00
	// Line 9889, Address: 0x330844, Func Offset: 0x1a04
	// Line 9888, Address: 0x330854, Func Offset: 0x1a14
	// Line 9889, Address: 0x330858, Func Offset: 0x1a18
	// Line 9920, Address: 0x330864, Func Offset: 0x1a24
	// Line 9892, Address: 0x330868, Func Offset: 0x1a28
	// Line 9920, Address: 0x33086c, Func Offset: 0x1a2c
	// Line 9892, Address: 0x330870, Func Offset: 0x1a30
	// Line 9890, Address: 0x330874, Func Offset: 0x1a34
	// Line 9920, Address: 0x330878, Func Offset: 0x1a38
	// Line 9909, Address: 0x330884, Func Offset: 0x1a44
	// Line 9920, Address: 0x330888, Func Offset: 0x1a48
	// Line 9967, Address: 0x330890, Func Offset: 0x1a50
	// Line 9920, Address: 0x330894, Func Offset: 0x1a54
	// Line 9921, Address: 0x330898, Func Offset: 0x1a58
	// Line 9920, Address: 0x33089c, Func Offset: 0x1a5c
	// Line 9921, Address: 0x3308a0, Func Offset: 0x1a60
	// Line 9920, Address: 0x3308a4, Func Offset: 0x1a64
	// Line 9936, Address: 0x3308b0, Func Offset: 0x1a70
	// Line 9920, Address: 0x3308b4, Func Offset: 0x1a74
	// Line 9936, Address: 0x3308b8, Func Offset: 0x1a78
	// Line 9909, Address: 0x3308bc, Func Offset: 0x1a7c
	// Line 9936, Address: 0x3308c0, Func Offset: 0x1a80
	// Line 9920, Address: 0x3308c4, Func Offset: 0x1a84
	// Line 9967, Address: 0x3308c8, Func Offset: 0x1a88
	// Line 9925, Address: 0x3308cc, Func Offset: 0x1a8c
	// Line 9967, Address: 0x3308d4, Func Offset: 0x1a94
	// Line 9920, Address: 0x3308d8, Func Offset: 0x1a98
	// Line 9967, Address: 0x3308e0, Func Offset: 0x1aa0
	// Line 9909, Address: 0x3308e4, Func Offset: 0x1aa4
	// Line 9967, Address: 0x3308e8, Func Offset: 0x1aa8
	// Line 9920, Address: 0x3308ec, Func Offset: 0x1aac
	// Line 9909, Address: 0x3308f0, Func Offset: 0x1ab0
	// Line 9920, Address: 0x3308fc, Func Offset: 0x1abc
	// Line 9921, Address: 0x330908, Func Offset: 0x1ac8
	// Line 9923, Address: 0x330914, Func Offset: 0x1ad4
	// Line 9921, Address: 0x330920, Func Offset: 0x1ae0
	// Line 9922, Address: 0x330924, Func Offset: 0x1ae4
	// Line 9925, Address: 0x330928, Func Offset: 0x1ae8
	// Line 9936, Address: 0x33092c, Func Offset: 0x1aec
	// Line 9921, Address: 0x330938, Func Offset: 0x1af8
	// Line 9934, Address: 0x33093c, Func Offset: 0x1afc
	// Line 9936, Address: 0x33094c, Func Offset: 0x1b0c
	// Line 9922, Address: 0x330950, Func Offset: 0x1b10
	// Line 9936, Address: 0x330954, Func Offset: 0x1b14
	// Line 9934, Address: 0x330958, Func Offset: 0x1b18
	// Line 9922, Address: 0x33095c, Func Offset: 0x1b1c
	// Line 9923, Address: 0x330960, Func Offset: 0x1b20
	// Line 9924, Address: 0x33096c, Func Offset: 0x1b2c
	// Line 9922, Address: 0x330980, Func Offset: 0x1b40
	// Line 9923, Address: 0x33098c, Func Offset: 0x1b4c
	// Line 9967, Address: 0x330998, Func Offset: 0x1b58
	// Line 9974, Address: 0x3309a0, Func Offset: 0x1b60
	// Line 9982, Address: 0x3309d0, Func Offset: 0x1b90
	// Line 9974, Address: 0x3309d4, Func Offset: 0x1b94
	// Line 9982, Address: 0x3309d8, Func Offset: 0x1b98
	// Line 9987, Address: 0x3309dc, Func Offset: 0x1b9c
	// Line 9980, Address: 0x3309e0, Func Offset: 0x1ba0
	// Line 9983, Address: 0x3309e4, Func Offset: 0x1ba4
	// Line 9987, Address: 0x3309e8, Func Offset: 0x1ba8
	// Line 9983, Address: 0x3309ec, Func Offset: 0x1bac
	// Line 9980, Address: 0x3309f0, Func Offset: 0x1bb0
	// Line 9983, Address: 0x3309f8, Func Offset: 0x1bb8
	// Line 9980, Address: 0x3309fc, Func Offset: 0x1bbc
	// Line 9981, Address: 0x330a00, Func Offset: 0x1bc0
	// Line 9980, Address: 0x330a0c, Func Offset: 0x1bcc
	// Line 9987, Address: 0x330a14, Func Offset: 0x1bd4
	// Line 9986, Address: 0x330a24, Func Offset: 0x1be4
	// Line 9983, Address: 0x330a2c, Func Offset: 0x1bec
	// Line 9986, Address: 0x330a34, Func Offset: 0x1bf4
	// Line 9984, Address: 0x330a38, Func Offset: 0x1bf8
	// Line 9985, Address: 0x330a50, Func Offset: 0x1c10
	// Line 9986, Address: 0x330a60, Func Offset: 0x1c20
	// Line 9987, Address: 0x330a68, Func Offset: 0x1c28
	// Line 9988, Address: 0x330a70, Func Offset: 0x1c30
	// Line 10003, Address: 0x330a84, Func Offset: 0x1c44
	// Line 10004, Address: 0x330a98, Func Offset: 0x1c58
	// Line 10005, Address: 0x330a9c, Func Offset: 0x1c5c
	// Line 10004, Address: 0x330aa0, Func Offset: 0x1c60
	// Line 10005, Address: 0x330ab0, Func Offset: 0x1c70
	// Line 10006, Address: 0x330b34, Func Offset: 0x1cf4
	// Line 10007, Address: 0x330b40, Func Offset: 0x1d00
	// Line 10008, Address: 0x330bb4, Func Offset: 0x1d74
	// Line 10010, Address: 0x330bbc, Func Offset: 0x1d7c
	// Line 10013, Address: 0x330bc4, Func Offset: 0x1d84
	// Line 10011, Address: 0x330bc8, Func Offset: 0x1d88
	// Line 10013, Address: 0x330bcc, Func Offset: 0x1d8c
	// Line 10015, Address: 0x330bd4, Func Offset: 0x1d94
	// Line 10014, Address: 0x330bd8, Func Offset: 0x1d98
	// Line 10016, Address: 0x330bdc, Func Offset: 0x1d9c
	// Line 10018, Address: 0x330bf0, Func Offset: 0x1db0
	// Line 10019, Address: 0x330c04, Func Offset: 0x1dc4
	// Line 10020, Address: 0x330c14, Func Offset: 0x1dd4
	// Line 10024, Address: 0x330c1c, Func Offset: 0x1ddc
	// Line 10021, Address: 0x330c20, Func Offset: 0x1de0
	// Line 10022, Address: 0x330c24, Func Offset: 0x1de4
	// Line 10024, Address: 0x330c28, Func Offset: 0x1de8
	// Line 10027, Address: 0x330c38, Func Offset: 0x1df8
	// Line 10024, Address: 0x330c40, Func Offset: 0x1e00
	// Line 10027, Address: 0x330c44, Func Offset: 0x1e04
	// Line 10028, Address: 0x330c50, Func Offset: 0x1e10
	// Line 10029, Address: 0x330c64, Func Offset: 0x1e24
	// Line 10030, Address: 0x330cd0, Func Offset: 0x1e90
	// Line 10031, Address: 0x330d3c, Func Offset: 0x1efc
	// Line 10033, Address: 0x330da8, Func Offset: 0x1f68
	// Line 10034, Address: 0x330e08, Func Offset: 0x1fc8
	// Line 10035, Address: 0x330e68, Func Offset: 0x2028
	// Line 10036, Address: 0x330eb0, Func Offset: 0x2070
	// Line 10035, Address: 0x330eb4, Func Offset: 0x2074
	// Line 10036, Address: 0x330eb8, Func Offset: 0x2078
	// Line 10035, Address: 0x330ec4, Func Offset: 0x2084
	// Line 10036, Address: 0x330edc, Func Offset: 0x209c
	// Line 10037, Address: 0x330ee8, Func Offset: 0x20a8
	// Line 10038, Address: 0x330efc, Func Offset: 0x20bc
	// Line 10134, Address: 0x330f04, Func Offset: 0x20c4
	// Line 10136, Address: 0x330f2c, Func Offset: 0x20ec
	// Line 10143, Address: 0x330f34, Func Offset: 0x20f4
	// Line 10144, Address: 0x330f40, Func Offset: 0x2100
	// Line 10143, Address: 0x330f48, Func Offset: 0x2108
	// Line 10144, Address: 0x330f4c, Func Offset: 0x210c
	// Line 10145, Address: 0x330f58, Func Offset: 0x2118
	// Line 10147, Address: 0x330f60, Func Offset: 0x2120
	// Line 10148, Address: 0x330f6c, Func Offset: 0x212c
	// Line 10147, Address: 0x330f74, Func Offset: 0x2134
	// Line 10148, Address: 0x330f78, Func Offset: 0x2138
	// Line 10149, Address: 0x330f84, Func Offset: 0x2144
	// Line 10158, Address: 0x330f8c, Func Offset: 0x214c
	// Line 10160, Address: 0x330f90, Func Offset: 0x2150
	// Line 10158, Address: 0x330f94, Func Offset: 0x2154
	// Line 10177, Address: 0x330f98, Func Offset: 0x2158
	// Line 10160, Address: 0x330fa4, Func Offset: 0x2164
	// Line 10178, Address: 0x330fa8, Func Offset: 0x2168
	// Line 10177, Address: 0x330fb0, Func Offset: 0x2170
	// Line 10160, Address: 0x330fb8, Func Offset: 0x2178
	// Line 10178, Address: 0x330fc8, Func Offset: 0x2188
	// Line 10183, Address: 0x331034, Func Offset: 0x21f4
	// Line 10188, Address: 0x33104c, Func Offset: 0x220c
	// Line 10192, Address: 0x331050, Func Offset: 0x2210
	// Line 10188, Address: 0x331054, Func Offset: 0x2214
	// Line 10189, Address: 0x33105c, Func Offset: 0x221c
	// Line 10188, Address: 0x331064, Func Offset: 0x2224
	// Line 10189, Address: 0x33106c, Func Offset: 0x222c
	// Line 10192, Address: 0x331074, Func Offset: 0x2234
	// Line 10193, Address: 0x33107c, Func Offset: 0x223c
	// Line 10195, Address: 0x331090, Func Offset: 0x2250
	// Line 10196, Address: 0x3310ac, Func Offset: 0x226c
	// Line 10198, Address: 0x3310bc, Func Offset: 0x227c
	// Line 10201, Address: 0x33113c, Func Offset: 0x22fc
	// Line 10202, Address: 0x331144, Func Offset: 0x2304
	// Line 10203, Address: 0x331148, Func Offset: 0x2308
	// Line 10202, Address: 0x33114c, Func Offset: 0x230c
	// Line 10203, Address: 0x331150, Func Offset: 0x2310
	// Line 10204, Address: 0x331158, Func Offset: 0x2318
	// Line 10206, Address: 0x331168, Func Offset: 0x2328
	// Line 10208, Address: 0x331174, Func Offset: 0x2334
	// Line 10212, Address: 0x3311a0, Func Offset: 0x2360
	// Line 10214, Address: 0x331258, Func Offset: 0x2418
	// Line 10212, Address: 0x33125c, Func Offset: 0x241c
	// Line 10214, Address: 0x331270, Func Offset: 0x2430
	// Line 10217, Address: 0x331340, Func Offset: 0x2500
	// Line 10222, Address: 0x331398, Func Offset: 0x2558
	// Line 10228, Address: 0x3313dc, Func Offset: 0x259c
	// Line 10229, Address: 0x3313f8, Func Offset: 0x25b8
	// Line 10230, Address: 0x331400, Func Offset: 0x25c0
	// Line 10231, Address: 0x33140c, Func Offset: 0x25cc
	// Line 10247, Address: 0x331414, Func Offset: 0x25d4
	// Line 10248, Address: 0x331430, Func Offset: 0x25f0
	// Line 10249, Address: 0x331438, Func Offset: 0x25f8
	// Line 10250, Address: 0x331444, Func Offset: 0x2604
	// Line 10253, Address: 0x33144c, Func Offset: 0x260c
	// Line 10254, Address: 0x331468, Func Offset: 0x2628
	// Line 10255, Address: 0x331470, Func Offset: 0x2630
	// Line 10256, Address: 0x33147c, Func Offset: 0x263c
	// Line 10258, Address: 0x331484, Func Offset: 0x2644
	// Line 10259, Address: 0x3314a0, Func Offset: 0x2660
	// Line 10260, Address: 0x3314a8, Func Offset: 0x2668
	// Line 10261, Address: 0x3314b4, Func Offset: 0x2674
	// Line 10263, Address: 0x3314bc, Func Offset: 0x267c
	// Line 10264, Address: 0x3314d8, Func Offset: 0x2698
	// Line 10265, Address: 0x3314e0, Func Offset: 0x26a0
	// Line 10266, Address: 0x3314ec, Func Offset: 0x26ac
	// Line 10270, Address: 0x3314f4, Func Offset: 0x26b4
	// Line 10271, Address: 0x331510, Func Offset: 0x26d0
	// Line 10272, Address: 0x331518, Func Offset: 0x26d8
	// Line 10273, Address: 0x331524, Func Offset: 0x26e4
	// Line 10276, Address: 0x33152c, Func Offset: 0x26ec
	// Line 10277, Address: 0x331544, Func Offset: 0x2704
	// Line 10278, Address: 0x331548, Func Offset: 0x2708
	// Line 10279, Address: 0x331554, Func Offset: 0x2714
	// Line 10283, Address: 0x331558, Func Offset: 0x2718
	// Line 10284, Address: 0x331570, Func Offset: 0x2730
	// Line 10285, Address: 0x331574, Func Offset: 0x2734
	// Line 10286, Address: 0x331580, Func Offset: 0x2740
	// Line 10290, Address: 0x331584, Func Offset: 0x2744
	// Line 10291, Address: 0x33159c, Func Offset: 0x275c
	// Line 10292, Address: 0x3315a0, Func Offset: 0x2760
	// Line 10293, Address: 0x3315ac, Func Offset: 0x276c
	// Line 10297, Address: 0x3315b0, Func Offset: 0x2770
	// Line 10298, Address: 0x3315c8, Func Offset: 0x2788
	// Line 10299, Address: 0x3315cc, Func Offset: 0x278c
	// Line 10300, Address: 0x3315d8, Func Offset: 0x2798
	// Line 10305, Address: 0x3315dc, Func Offset: 0x279c
	// Line 10306, Address: 0x3315e0, Func Offset: 0x27a0
	// Line 10305, Address: 0x3315e8, Func Offset: 0x27a8
	// Line 10306, Address: 0x3315ec, Func Offset: 0x27ac
	// Line 10309, Address: 0x3315f8, Func Offset: 0x27b8
	// Line 10312, Address: 0x3315fc, Func Offset: 0x27bc
	// Line 10313, Address: 0x331614, Func Offset: 0x27d4
	// Line 10314, Address: 0x331618, Func Offset: 0x27d8
	// Line 10315, Address: 0x331624, Func Offset: 0x27e4
	// Line 10318, Address: 0x331628, Func Offset: 0x27e8
	// Line 10324, Address: 0x331630, Func Offset: 0x27f0
	// Line 10325, Address: 0x331648, Func Offset: 0x2808
	// Line 10318, Address: 0x331650, Func Offset: 0x2810
	// Line 10324, Address: 0x331654, Func Offset: 0x2814
	// Line 10325, Address: 0x331664, Func Offset: 0x2824
	// Line 10331, Address: 0x331688, Func Offset: 0x2848
	// Line 10333, Address: 0x33169c, Func Offset: 0x285c
	// Line 10336, Address: 0x331704, Func Offset: 0x28c4
	// Line 10342, Address: 0x33172c, Func Offset: 0x28ec
	// Line 10336, Address: 0x331730, Func Offset: 0x28f0
	// Line 10342, Address: 0x331734, Func Offset: 0x28f4
	// Line 10344, Address: 0x33173c, Func Offset: 0x28fc
	// Line 10346, Address: 0x3317a0, Func Offset: 0x2960
	// Line 10347, Address: 0x3317b8, Func Offset: 0x2978
	// Line 10348, Address: 0x3317c0, Func Offset: 0x2980
	// Line 10349, Address: 0x3317dc, Func Offset: 0x299c
	// Line 10353, Address: 0x3317ec, Func Offset: 0x29ac
	// Line 10358, Address: 0x331808, Func Offset: 0x29c8
	// Line 10368, Address: 0x331818, Func Offset: 0x29d8
	// Line 10372, Address: 0x331820, Func Offset: 0x29e0
	// Line 10373, Address: 0x331838, Func Offset: 0x29f8
	// Line 10374, Address: 0x33183c, Func Offset: 0x29fc
	// Line 10375, Address: 0x331848, Func Offset: 0x2a08
	// Line 10387, Address: 0x33184c, Func Offset: 0x2a0c
	// Line 10395, Address: 0x331890, Func Offset: 0x2a50
	// Line 10387, Address: 0x331894, Func Offset: 0x2a54
	// Line 10395, Address: 0x331898, Func Offset: 0x2a58
	// Line 10387, Address: 0x33189c, Func Offset: 0x2a5c
	// Line 10392, Address: 0x33191c, Func Offset: 0x2adc
	// Line 10395, Address: 0x331920, Func Offset: 0x2ae0
	// Line 10396, Address: 0x331944, Func Offset: 0x2b04
	// Line 10400, Address: 0x331958, Func Offset: 0x2b18
	// Line 10406, Address: 0x331960, Func Offset: 0x2b20
	// Line 10403, Address: 0x331964, Func Offset: 0x2b24
	// Line 10406, Address: 0x331968, Func Offset: 0x2b28
	// Line 10410, Address: 0x331994, Func Offset: 0x2b54
	// Line 10413, Address: 0x33199c, Func Offset: 0x2b5c
	// Line 10416, Address: 0x3319a4, Func Offset: 0x2b64
	// Line 10418, Address: 0x331a58, Func Offset: 0x2c18
	// Line 10422, Address: 0x331a60, Func Offset: 0x2c20
	// Line 10425, Address: 0x331a74, Func Offset: 0x2c34
	// Line 10433, Address: 0x331b28, Func Offset: 0x2ce8
	// Line 10436, Address: 0x331b4c, Func Offset: 0x2d0c
	// Line 10433, Address: 0x331b50, Func Offset: 0x2d10
	// Line 10436, Address: 0x331b54, Func Offset: 0x2d14
	// Line 10439, Address: 0x331b68, Func Offset: 0x2d28
	// Line 10441, Address: 0x331b70, Func Offset: 0x2d30
	// Line 10442, Address: 0x331b80, Func Offset: 0x2d40
	// Line 10450, Address: 0x331b84, Func Offset: 0x2d44
	// Line 10452, Address: 0x331b8c, Func Offset: 0x2d4c
	// Line 10453, Address: 0x331b94, Func Offset: 0x2d54
	// Line 10454, Address: 0x331ba0, Func Offset: 0x2d60
	// Line 10455, Address: 0x331ba8, Func Offset: 0x2d68
	// Line 10457, Address: 0x331bb0, Func Offset: 0x2d70
	// Line 10462, Address: 0x331bb8, Func Offset: 0x2d78
	// Line 10466, Address: 0x331bc0, Func Offset: 0x2d80
	// Line 10462, Address: 0x331bc4, Func Offset: 0x2d84
	// Line 10466, Address: 0x331bd4, Func Offset: 0x2d94
	// Line 10474, Address: 0x331c94, Func Offset: 0x2e54
	// Line 10477, Address: 0x331ca0, Func Offset: 0x2e60
	// Line 10480, Address: 0x331cb0, Func Offset: 0x2e70
	// Line 10483, Address: 0x331cb4, Func Offset: 0x2e74
	// Line 10480, Address: 0x331cbc, Func Offset: 0x2e7c
	// Line 10483, Address: 0x331cc0, Func Offset: 0x2e80
	// Line 10480, Address: 0x331cc4, Func Offset: 0x2e84
	// Line 10483, Address: 0x331cd4, Func Offset: 0x2e94
	// Line 10484, Address: 0x331cdc, Func Offset: 0x2e9c
	// Line 10485, Address: 0x331cf8, Func Offset: 0x2eb8
	// Line 10486, Address: 0x331cfc, Func Offset: 0x2ebc
	// Line 10485, Address: 0x331d04, Func Offset: 0x2ec4
	// Line 10486, Address: 0x331d08, Func Offset: 0x2ec8
	// Line 10488, Address: 0x331d14, Func Offset: 0x2ed4
	// Line 10495, Address: 0x331d20, Func Offset: 0x2ee0
	// Line 10496, Address: 0x331d28, Func Offset: 0x2ee8
	// Line 10497, Address: 0x331d6c, Func Offset: 0x2f2c
	// Line 10498, Address: 0x331d74, Func Offset: 0x2f34
	// Line 10500, Address: 0x331db8, Func Offset: 0x2f78
	// Line 10502, Address: 0x331dbc, Func Offset: 0x2f7c
	// Line 10552, Address: 0x331e4c, Func Offset: 0x300c
	// Line 10560, Address: 0x331e54, Func Offset: 0x3014
	// Line 10552, Address: 0x331e58, Func Offset: 0x3018
	// Line 10553, Address: 0x331e64, Func Offset: 0x3024
	// Line 10560, Address: 0x331e78, Func Offset: 0x3038
	// Line 10576, Address: 0x331e8c, Func Offset: 0x304c
	// Line 10597, Address: 0x331f00, Func Offset: 0x30c0
	// Line 10599, Address: 0x331f10, Func Offset: 0x30d0
	// Line 10602, Address: 0x331f18, Func Offset: 0x30d8
	// Line 10603, Address: 0x331f1c, Func Offset: 0x30dc
	// Line 10599, Address: 0x331f24, Func Offset: 0x30e4
	// Line 10603, Address: 0x331f28, Func Offset: 0x30e8
	// Line 10605, Address: 0x331f30, Func Offset: 0x30f0
	// Line 10606, Address: 0x331f38, Func Offset: 0x30f8
	// Line 10609, Address: 0x331f40, Func Offset: 0x3100
	// Line 10610, Address: 0x331f44, Func Offset: 0x3104
	// Line 10606, Address: 0x331f4c, Func Offset: 0x310c
	// Line 10609, Address: 0x331f68, Func Offset: 0x3128
	// Line 10608, Address: 0x331f6c, Func Offset: 0x312c
	// Line 10610, Address: 0x331f74, Func Offset: 0x3134
	// Line 10626, Address: 0x331f7c, Func Offset: 0x313c
	// Line 10627, Address: 0x331f98, Func Offset: 0x3158
	// Line 10628, Address: 0x331fb8, Func Offset: 0x3178
	// Line 10629, Address: 0x331fc4, Func Offset: 0x3184
	// Line 10637, Address: 0x331fcc, Func Offset: 0x318c
	// Line 10629, Address: 0x331fd0, Func Offset: 0x3190
	// Line 10637, Address: 0x331fd8, Func Offset: 0x3198
	// Line 10651, Address: 0x331fe8, Func Offset: 0x31a8
	// Line 10643, Address: 0x331fec, Func Offset: 0x31ac
	// Line 10651, Address: 0x331ff0, Func Offset: 0x31b0
	// Line 10653, Address: 0x332008, Func Offset: 0x31c8
	// Line 10654, Address: 0x332020, Func Offset: 0x31e0
	// Line 10655, Address: 0x332024, Func Offset: 0x31e4
	// Line 10656, Address: 0x33202c, Func Offset: 0x31ec
	// Line 10660, Address: 0x332030, Func Offset: 0x31f0
	// Line 10677, Address: 0x332038, Func Offset: 0x31f8
	// Line 10697, Address: 0x332068, Func Offset: 0x3228
	// Line 10701, Address: 0x332070, Func Offset: 0x3230
	// Line 10699, Address: 0x332074, Func Offset: 0x3234
	// Line 10701, Address: 0x332078, Func Offset: 0x3238
	// Line 10702, Address: 0x332080, Func Offset: 0x3240
	// Line 10701, Address: 0x332084, Func Offset: 0x3244
	// Line 10702, Address: 0x3320a8, Func Offset: 0x3268
	// Line 10701, Address: 0x3320ac, Func Offset: 0x326c
	// Line 10702, Address: 0x3320b4, Func Offset: 0x3274
	// Line 10713, Address: 0x3320c0, Func Offset: 0x3280
	// Line 10714, Address: 0x3320c8, Func Offset: 0x3288
	// Line 10715, Address: 0x3320d8, Func Offset: 0x3298
	// Line 10716, Address: 0x3320e0, Func Offset: 0x32a0
	// Line 10715, Address: 0x3320e4, Func Offset: 0x32a4
	// Line 10716, Address: 0x3320f0, Func Offset: 0x32b0
	// Line 10715, Address: 0x3320f4, Func Offset: 0x32b4
	// Line 10716, Address: 0x3320f8, Func Offset: 0x32b8
	// Line 10715, Address: 0x3320fc, Func Offset: 0x32bc
	// Line 10716, Address: 0x332104, Func Offset: 0x32c4
	// Line 10715, Address: 0x332110, Func Offset: 0x32d0
	// Line 10716, Address: 0x332114, Func Offset: 0x32d4
	// Line 10719, Address: 0x332120, Func Offset: 0x32e0
	// Line 10720, Address: 0x332128, Func Offset: 0x32e8
	// Line 10735, Address: 0x33219c, Func Offset: 0x335c
	// Line 10736, Address: 0x3321b8, Func Offset: 0x3378
	// Line 10738, Address: 0x3321dc, Func Offset: 0x339c
	// Line 10740, Address: 0x3321e4, Func Offset: 0x33a4
	// Line 10741, Address: 0x3321ec, Func Offset: 0x33ac
	// Line 10742, Address: 0x332204, Func Offset: 0x33c4
	// Line 10743, Address: 0x332208, Func Offset: 0x33c8
	// Line 10745, Address: 0x332214, Func Offset: 0x33d4
	// Line 10746, Address: 0x332220, Func Offset: 0x33e0
	// Line 10744, Address: 0x332224, Func Offset: 0x33e4
	// Line 10745, Address: 0x332228, Func Offset: 0x33e8
	// Line 10744, Address: 0x33222c, Func Offset: 0x33ec
	// Line 10745, Address: 0x332230, Func Offset: 0x33f0
	// Line 10746, Address: 0x332238, Func Offset: 0x33f8
	// Line 10745, Address: 0x33223c, Func Offset: 0x33fc
	// Line 10746, Address: 0x332240, Func Offset: 0x3400
	// Line 10745, Address: 0x332244, Func Offset: 0x3404
	// Line 10746, Address: 0x33224c, Func Offset: 0x340c
	// Line 10745, Address: 0x332258, Func Offset: 0x3418
	// Line 10746, Address: 0x33225c, Func Offset: 0x341c
	// Line 10751, Address: 0x332268, Func Offset: 0x3428
	// Line 10757, Address: 0x332280, Func Offset: 0x3440
	// Line 10761, Address: 0x332290, Func Offset: 0x3450
	// Line 10763, Address: 0x332298, Func Offset: 0x3458
	// Line 10766, Address: 0x33229c, Func Offset: 0x345c
	// Line 10767, Address: 0x3322a0, Func Offset: 0x3460
	// Line 10769, Address: 0x3322a4, Func Offset: 0x3464
	// Line 10768, Address: 0x3322a8, Func Offset: 0x3468
	// Line 10769, Address: 0x3322ac, Func Offset: 0x346c
	// Line 10760, Address: 0x3322b0, Func Offset: 0x3470
	// Line 10761, Address: 0x3322c0, Func Offset: 0x3480
	// Line 10763, Address: 0x3322c4, Func Offset: 0x3484
	// Line 10766, Address: 0x3322c8, Func Offset: 0x3488
	// Line 10760, Address: 0x3322cc, Func Offset: 0x348c
	// Line 10767, Address: 0x3322d0, Func Offset: 0x3490
	// Line 10760, Address: 0x3322d4, Func Offset: 0x3494
	// Line 10768, Address: 0x3322d8, Func Offset: 0x3498
	// Line 10761, Address: 0x3322dc, Func Offset: 0x349c
	// Line 10762, Address: 0x3322e0, Func Offset: 0x34a0
	// Line 10764, Address: 0x3322e4, Func Offset: 0x34a4
	// Line 10765, Address: 0x3322e8, Func Offset: 0x34a8
	// Line 10769, Address: 0x3322ec, Func Offset: 0x34ac
	// Line 10770, Address: 0x3322f8, Func Offset: 0x34b8
	// Line 10774, Address: 0x332328, Func Offset: 0x34e8
	// Line 10770, Address: 0x33232c, Func Offset: 0x34ec
	// Line 10774, Address: 0x332330, Func Offset: 0x34f0
	// Line 10771, Address: 0x332334, Func Offset: 0x34f4
	// Line 10772, Address: 0x332338, Func Offset: 0x34f8
	// Line 10774, Address: 0x33233c, Func Offset: 0x34fc
	// Line 10771, Address: 0x332340, Func Offset: 0x3500
	// Line 10773, Address: 0x332350, Func Offset: 0x3510
	// Line 10772, Address: 0x33235c, Func Offset: 0x351c
	// Line 10774, Address: 0x332368, Func Offset: 0x3528
	// Line 10775, Address: 0x332370, Func Offset: 0x3530
	// Line 10786, Address: 0x332378, Func Offset: 0x3538
	// Line 10788, Address: 0x332384, Func Offset: 0x3544
	// Line 10789, Address: 0x33239c, Func Offset: 0x355c
	// Line 10790, Address: 0x3323a8, Func Offset: 0x3568
	// Line 10792, Address: 0x3323ac, Func Offset: 0x356c
	// Line 10793, Address: 0x3323b4, Func Offset: 0x3574
	// Line 10792, Address: 0x3323b8, Func Offset: 0x3578
	// Line 10794, Address: 0x3323bc, Func Offset: 0x357c
	// Line 10792, Address: 0x3323c0, Func Offset: 0x3580
	// Line 10793, Address: 0x3323c4, Func Offset: 0x3584
	// Line 10794, Address: 0x3323d4, Func Offset: 0x3594
	// Line 10795, Address: 0x3323e8, Func Offset: 0x35a8
	// Line 10797, Address: 0x3323fc, Func Offset: 0x35bc
	// Line 10810, Address: 0x332404, Func Offset: 0x35c4
	// Line 10809, Address: 0x332408, Func Offset: 0x35c8
	// Line 10811, Address: 0x33240c, Func Offset: 0x35cc
	// Line 10810, Address: 0x332410, Func Offset: 0x35d0
	// Line 10811, Address: 0x332414, Func Offset: 0x35d4
	// Line 10819, Address: 0x332418, Func Offset: 0x35d8
	// Line 10828, Address: 0x33241c, Func Offset: 0x35dc
	// Line 10820, Address: 0x332424, Func Offset: 0x35e4
	// Line 10826, Address: 0x332430, Func Offset: 0x35f0
	// Line 10819, Address: 0x332434, Func Offset: 0x35f4
	// Line 10820, Address: 0x332438, Func Offset: 0x35f8
	// Line 10828, Address: 0x332444, Func Offset: 0x3604
	// Line 10829, Address: 0x33245c, Func Offset: 0x361c
	// Line 10830, Address: 0x332478, Func Offset: 0x3638
	// Line 10831, Address: 0x33247c, Func Offset: 0x363c
	// Line 10833, Address: 0x33249c, Func Offset: 0x365c
	// Line 10834, Address: 0x3324c0, Func Offset: 0x3680
	// Line 10835, Address: 0x3324c4, Func Offset: 0x3684
	// Line 10836, Address: 0x3324e4, Func Offset: 0x36a4
	// Line 10837, Address: 0x3324e8, Func Offset: 0x36a8
	// Line 10838, Address: 0x3324f0, Func Offset: 0x36b0
	// Line 10856, Address: 0x3324f8, Func Offset: 0x36b8
	// Line 10838, Address: 0x3324fc, Func Offset: 0x36bc
	// Line 10855, Address: 0x332500, Func Offset: 0x36c0
	// Line 10856, Address: 0x332518, Func Offset: 0x36d8
	// Line 10858, Address: 0x33254c, Func Offset: 0x370c
	// Line 10893, Address: 0x332550, Func Offset: 0x3710
	// Line 10858, Address: 0x33255c, Func Offset: 0x371c
	// Line 10893, Address: 0x332570, Func Offset: 0x3730
	// Line 10900, Address: 0x332578, Func Offset: 0x3738
	// Line 10901, Address: 0x332588, Func Offset: 0x3748
	// Line 10909, Address: 0x332598, Func Offset: 0x3758
	// Line 10901, Address: 0x3325a4, Func Offset: 0x3764
	// Line 10905, Address: 0x3325bc, Func Offset: 0x377c
	// Line 10909, Address: 0x3325d4, Func Offset: 0x3794
	// Line 10912, Address: 0x3325dc, Func Offset: 0x379c
	// Line 10915, Address: 0x3325f4, Func Offset: 0x37b4
	// Line 10916, Address: 0x332608, Func Offset: 0x37c8
	// Line 10917, Address: 0x332610, Func Offset: 0x37d0
	// Line 10919, Address: 0x332614, Func Offset: 0x37d4
	// Line 10915, Address: 0x33261c, Func Offset: 0x37dc
	// Line 10916, Address: 0x332620, Func Offset: 0x37e0
	// Line 10915, Address: 0x332628, Func Offset: 0x37e8
	// Line 10919, Address: 0x33262c, Func Offset: 0x37ec
	// Line 10917, Address: 0x332630, Func Offset: 0x37f0
	// Line 10915, Address: 0x332638, Func Offset: 0x37f8
	// Line 10917, Address: 0x332640, Func Offset: 0x3800
	// Line 10916, Address: 0x332648, Func Offset: 0x3808
	// Line 10917, Address: 0x33265c, Func Offset: 0x381c
	// Line 10919, Address: 0x33266c, Func Offset: 0x382c
	// Line 10922, Address: 0x332674, Func Offset: 0x3834
	// Line 10928, Address: 0x33269c, Func Offset: 0x385c
	// Line 10922, Address: 0x3326a4, Func Offset: 0x3864
	// Line 10928, Address: 0x3326bc, Func Offset: 0x387c
	// Line 10938, Address: 0x3326f0, Func Offset: 0x38b0
	// Line 10942, Address: 0x3326f4, Func Offset: 0x38b4
	// Line 10938, Address: 0x3326fc, Func Offset: 0x38bc
	// Line 10942, Address: 0x332704, Func Offset: 0x38c4
	// Line 10943, Address: 0x332718, Func Offset: 0x38d8
	// Line 10944, Address: 0x332758, Func Offset: 0x3918
	// Line 10947, Address: 0x33275c, Func Offset: 0x391c
	// Line 10944, Address: 0x332760, Func Offset: 0x3920
	// Line 10948, Address: 0x332768, Func Offset: 0x3928
	// Line 10966, Address: 0x332774, Func Offset: 0x3934
	// Line 10967, Address: 0x332794, Func Offset: 0x3954
	// Line 10970, Address: 0x332798, Func Offset: 0x3958
	// Line 10971, Address: 0x3327a0, Func Offset: 0x3960
	// Line 10975, Address: 0x3327a8, Func Offset: 0x3968
	// Line 10977, Address: 0x3327b4, Func Offset: 0x3974
	// Line 10976, Address: 0x3327b8, Func Offset: 0x3978
	// Line 10977, Address: 0x3327bc, Func Offset: 0x397c
	// Line 10979, Address: 0x3327e0, Func Offset: 0x39a0
	// Line 10981, Address: 0x3327e4, Func Offset: 0x39a4
	// Line 10983, Address: 0x3327e8, Func Offset: 0x39a8
	// Line 10979, Address: 0x3327ec, Func Offset: 0x39ac
	// Line 10982, Address: 0x3327f4, Func Offset: 0x39b4
	// Line 10981, Address: 0x3327f8, Func Offset: 0x39b8
	// Line 10982, Address: 0x332808, Func Offset: 0x39c8
	// Line 10983, Address: 0x33281c, Func Offset: 0x39dc
	// Line 10985, Address: 0x332830, Func Offset: 0x39f0
	// Line 10989, Address: 0x332844, Func Offset: 0x3a04
	// Line 10990, Address: 0x332850, Func Offset: 0x3a10
	// Line 10989, Address: 0x332854, Func Offset: 0x3a14
	// Line 10990, Address: 0x332860, Func Offset: 0x3a20
	// Line 10991, Address: 0x332864, Func Offset: 0x3a24
	// Line 10989, Address: 0x332868, Func Offset: 0x3a28
	// Line 10990, Address: 0x332870, Func Offset: 0x3a30
	// Line 10991, Address: 0x332884, Func Offset: 0x3a44
	// Line 10993, Address: 0x33289c, Func Offset: 0x3a5c
	// Line 10991, Address: 0x3328a0, Func Offset: 0x3a60
	// Line 11085, Address: 0x3328a4, Func Offset: 0x3a64
	// Line 11098, Address: 0x3328b0, Func Offset: 0x3a70
	// Line 11085, Address: 0x3328bc, Func Offset: 0x3a7c
	// Line 11098, Address: 0x3328e8, Func Offset: 0x3aa8
	// Line 11102, Address: 0x3328f8, Func Offset: 0x3ab8
	// Line 11104, Address: 0x332908, Func Offset: 0x3ac8
	// Line 11112, Address: 0x332914, Func Offset: 0x3ad4
	// Line 11110, Address: 0x33291c, Func Offset: 0x3adc
	// Line 11112, Address: 0x332920, Func Offset: 0x3ae0
	// Line 11110, Address: 0x332924, Func Offset: 0x3ae4
	// Line 11112, Address: 0x332928, Func Offset: 0x3ae8
	// Line 11117, Address: 0x332970, Func Offset: 0x3b30
	// Line 11119, Address: 0x332990, Func Offset: 0x3b50
	// Line 11120, Address: 0x332994, Func Offset: 0x3b54
	// Line 11121, Address: 0x3329a0, Func Offset: 0x3b60
	// Line 11123, Address: 0x3329a8, Func Offset: 0x3b68
	// Line 11124, Address: 0x3329ac, Func Offset: 0x3b6c
	// Line 11123, Address: 0x3329bc, Func Offset: 0x3b7c
	// Line 11124, Address: 0x3329c0, Func Offset: 0x3b80
	// Line 11125, Address: 0x3329cc, Func Offset: 0x3b8c
	// Line 11126, Address: 0x3329d0, Func Offset: 0x3b90
	// Line 11129, Address: 0x3329d8, Func Offset: 0x3b98
	// Line 11130, Address: 0x3329dc, Func Offset: 0x3b9c
	// Line 11129, Address: 0x3329e4, Func Offset: 0x3ba4
	// Line 11130, Address: 0x3329e8, Func Offset: 0x3ba8
	// Line 11129, Address: 0x3329ec, Func Offset: 0x3bac
	// Line 11130, Address: 0x3329f4, Func Offset: 0x3bb4
	// Line 11132, Address: 0x3329fc, Func Offset: 0x3bbc
	// Line 11133, Address: 0x332a00, Func Offset: 0x3bc0
	// Line 11134, Address: 0x332a24, Func Offset: 0x3be4
	// Line 11135, Address: 0x332a28, Func Offset: 0x3be8
	// Line 11136, Address: 0x332aac, Func Offset: 0x3c6c
	// Line 11138, Address: 0x332ab8, Func Offset: 0x3c78
	// Line 11139, Address: 0x332abc, Func Offset: 0x3c7c
	// Line 11143, Address: 0x332ac8, Func Offset: 0x3c88
	// Line 11142, Address: 0x332acc, Func Offset: 0x3c8c
	// Line 11143, Address: 0x332ad0, Func Offset: 0x3c90
	// Line 11142, Address: 0x332ad8, Func Offset: 0x3c98
	// Line 11143, Address: 0x332adc, Func Offset: 0x3c9c
	// Line 11145, Address: 0x332b08, Func Offset: 0x3cc8
	// Line 11147, Address: 0x332b54, Func Offset: 0x3d14
	// Line 11148, Address: 0x332b58, Func Offset: 0x3d18
	// Line 11157, Address: 0x332ba0, Func Offset: 0x3d60
	// Line 11162, Address: 0x332bb4, Func Offset: 0x3d74
	// Line 11165, Address: 0x332bc4, Func Offset: 0x3d84
	// Line 11173, Address: 0x332bd8, Func Offset: 0x3d98
	// Line 11178, Address: 0x332be4, Func Offset: 0x3da4
	// Line 11225, Address: 0x332bec, Func Offset: 0x3dac
	// Line 11226, Address: 0x332c08, Func Offset: 0x3dc8
	// Line 11230, Address: 0x332c10, Func Offset: 0x3dd0
	// Line 11225, Address: 0x332c18, Func Offset: 0x3dd8
	// Line 11230, Address: 0x332c1c, Func Offset: 0x3ddc
	// Line 11231, Address: 0x332c24, Func Offset: 0x3de4
	// Line 11230, Address: 0x332c28, Func Offset: 0x3de8
	// Line 11231, Address: 0x332c3c, Func Offset: 0x3dfc
	// Line 11230, Address: 0x332c44, Func Offset: 0x3e04
	// Line 11231, Address: 0x332c58, Func Offset: 0x3e18
	// Line 11232, Address: 0x332c64, Func Offset: 0x3e24
	// Line 11233, Address: 0x332c74, Func Offset: 0x3e34
	// Line 11234, Address: 0x332c78, Func Offset: 0x3e38
	// Line 11232, Address: 0x332c7c, Func Offset: 0x3e3c
	// Line 11233, Address: 0x332c80, Func Offset: 0x3e40
	// Line 11234, Address: 0x332c88, Func Offset: 0x3e48
	// Line 11241, Address: 0x332c94, Func Offset: 0x3e54
	// Line 11238, Address: 0x332c98, Func Offset: 0x3e58
	// Line 11241, Address: 0x332ca0, Func Offset: 0x3e60
	// Line 11238, Address: 0x332ca4, Func Offset: 0x3e64
	// Line 11241, Address: 0x332cd4, Func Offset: 0x3e94
	// Line 11243, Address: 0x332cdc, Func Offset: 0x3e9c
	// Line 11244, Address: 0x332cec, Func Offset: 0x3eac
	// Line 11245, Address: 0x332d28, Func Offset: 0x3ee8
	// Line 11247, Address: 0x332d30, Func Offset: 0x3ef0
	// Line 11249, Address: 0x332d44, Func Offset: 0x3f04
	// Line 11250, Address: 0x332d50, Func Offset: 0x3f10
	// Line 11252, Address: 0x332d60, Func Offset: 0x3f20
	// Line 11258, Address: 0x332d80, Func Offset: 0x3f40
	// Line 11259, Address: 0x332d98, Func Offset: 0x3f58
	// Line 11260, Address: 0x332d9c, Func Offset: 0x3f5c
	// Line 11261, Address: 0x332da8, Func Offset: 0x3f68
	// Line 11266, Address: 0x332dac, Func Offset: 0x3f6c
	// Line 11270, Address: 0x332dbc, Func Offset: 0x3f7c
	// Line 11271, Address: 0x332de4, Func Offset: 0x3fa4
	// Line 11272, Address: 0x332df0, Func Offset: 0x3fb0
	// Line 11273, Address: 0x332dfc, Func Offset: 0x3fbc
	// Line 11277, Address: 0x332e10, Func Offset: 0x3fd0
	// Line 11278, Address: 0x332e20, Func Offset: 0x3fe0
	// Line 11280, Address: 0x332e24, Func Offset: 0x3fe4
	// Line 11278, Address: 0x332e2c, Func Offset: 0x3fec
	// Line 11279, Address: 0x332e30, Func Offset: 0x3ff0
	// Line 11281, Address: 0x332e34, Func Offset: 0x3ff4
	// Line 11279, Address: 0x332e38, Func Offset: 0x3ff8
	// Line 11281, Address: 0x332e3c, Func Offset: 0x3ffc
	// Line 11278, Address: 0x332e44, Func Offset: 0x4004
	// Line 11280, Address: 0x332e4c, Func Offset: 0x400c
	// Line 11278, Address: 0x332e50, Func Offset: 0x4010
	// Line 11280, Address: 0x332e54, Func Offset: 0x4014
	// Line 11278, Address: 0x332e58, Func Offset: 0x4018
	// Line 11280, Address: 0x332e60, Func Offset: 0x4020
	// Line 11278, Address: 0x332e64, Func Offset: 0x4024
	// Line 11280, Address: 0x332e6c, Func Offset: 0x402c
	// Line 11279, Address: 0x332e74, Func Offset: 0x4034
	// Line 11280, Address: 0x332e78, Func Offset: 0x4038
	// Line 11279, Address: 0x332e80, Func Offset: 0x4040
	// Line 11280, Address: 0x332e84, Func Offset: 0x4044
	// Line 11279, Address: 0x332e88, Func Offset: 0x4048
	// Line 11280, Address: 0x332e8c, Func Offset: 0x404c
	// Line 11279, Address: 0x332e90, Func Offset: 0x4050
	// Line 11280, Address: 0x332e94, Func Offset: 0x4054
	// Line 11279, Address: 0x332ea0, Func Offset: 0x4060
	// Line 11280, Address: 0x332ea4, Func Offset: 0x4064
	// Line 11281, Address: 0x332f28, Func Offset: 0x40e8
	// Line 11295, Address: 0x332f34, Func Offset: 0x40f4
	// Line 11299, Address: 0x332f60, Func Offset: 0x4120
	// Line 11300, Address: 0x332f68, Func Offset: 0x4128
	// Line 11301, Address: 0x332f80, Func Offset: 0x4140
	// Line 11307, Address: 0x332f88, Func Offset: 0x4148
	// Line 11313, Address: 0x332f90, Func Offset: 0x4150
	// Line 11316, Address: 0x332fa0, Func Offset: 0x4160
	// Line 11317, Address: 0x332fac, Func Offset: 0x416c
	// Line 11316, Address: 0x332fb0, Func Offset: 0x4170
	// Line 11317, Address: 0x332fb4, Func Offset: 0x4174
	// Line 11316, Address: 0x332fb8, Func Offset: 0x4178
	// Line 11317, Address: 0x332fbc, Func Offset: 0x417c
	// Line 11316, Address: 0x332fc0, Func Offset: 0x4180
	// Line 11317, Address: 0x33306c, Func Offset: 0x422c
	// Line 11322, Address: 0x333078, Func Offset: 0x4238
	// Line 11330, Address: 0x333094, Func Offset: 0x4254
	// Line 11333, Address: 0x3330b8, Func Offset: 0x4278
	// Line 11341, Address: 0x3330c0, Func Offset: 0x4280
	// Line 11342, Address: 0x3330d4, Func Offset: 0x4294
	// Line 11343, Address: 0x3330dc, Func Offset: 0x429c
	// Line 11349, Address: 0x3330e0, Func Offset: 0x42a0
	// Line 11348, Address: 0x3330ec, Func Offset: 0x42ac
	// Line 11349, Address: 0x333108, Func Offset: 0x42c8
	// Line 11348, Address: 0x33310c, Func Offset: 0x42cc
	// Line 11349, Address: 0x333158, Func Offset: 0x4318
	// Line 11348, Address: 0x333160, Func Offset: 0x4320
	// Line 11349, Address: 0x33317c, Func Offset: 0x433c
	// Line 11348, Address: 0x333184, Func Offset: 0x4344
	// Line 11349, Address: 0x333190, Func Offset: 0x4350
	// Line 11348, Address: 0x3331ac, Func Offset: 0x436c
	// Line 11349, Address: 0x3331b8, Func Offset: 0x4378
	// Line 11348, Address: 0x3331cc, Func Offset: 0x438c
	// Line 11349, Address: 0x3331d0, Func Offset: 0x4390
	// Line 11348, Address: 0x3331fc, Func Offset: 0x43bc
	// Line 11349, Address: 0x333200, Func Offset: 0x43c0
	// Line 11348, Address: 0x33320c, Func Offset: 0x43cc
	// Line 11349, Address: 0x333214, Func Offset: 0x43d4
	// Line 11348, Address: 0x33321c, Func Offset: 0x43dc
	// Line 11349, Address: 0x333220, Func Offset: 0x43e0
	// Line 11348, Address: 0x333234, Func Offset: 0x43f4
	// Line 11349, Address: 0x333240, Func Offset: 0x4400
	// Line 11348, Address: 0x333288, Func Offset: 0x4448
	// Line 11349, Address: 0x333290, Func Offset: 0x4450
	// Line 11351, Address: 0x3333b8, Func Offset: 0x4578
	// Line 11352, Address: 0x3333c0, Func Offset: 0x4580
	// Line 11359, Address: 0x3333c8, Func Offset: 0x4588
	// Line 11362, Address: 0x3333d0, Func Offset: 0x4590
	// Line 11364, Address: 0x3333d4, Func Offset: 0x4594
	// Line 11362, Address: 0x3333d8, Func Offset: 0x4598
	// Line 11363, Address: 0x3333dc, Func Offset: 0x459c
	// Line 11362, Address: 0x3333e0, Func Offset: 0x45a0
	// Line 11363, Address: 0x3333e4, Func Offset: 0x45a4
	// Line 11364, Address: 0x3333ec, Func Offset: 0x45ac
	// Line 11362, Address: 0x3333f0, Func Offset: 0x45b0
	// Line 11363, Address: 0x3333f8, Func Offset: 0x45b8
	// Line 11362, Address: 0x333404, Func Offset: 0x45c4
	// Line 11363, Address: 0x333408, Func Offset: 0x45c8
	// Line 11366, Address: 0x33340c, Func Offset: 0x45cc
	// Line 11371, Address: 0x333418, Func Offset: 0x45d8
	// Line 11370, Address: 0x33341c, Func Offset: 0x45dc
	// Line 11371, Address: 0x333420, Func Offset: 0x45e0
	// Line 11370, Address: 0x333424, Func Offset: 0x45e4
	// Line 11371, Address: 0x333438, Func Offset: 0x45f8
	// Line 11370, Address: 0x33343c, Func Offset: 0x45fc
	// Line 11371, Address: 0x333468, Func Offset: 0x4628
	// Line 11370, Address: 0x33346c, Func Offset: 0x462c
	// Line 11371, Address: 0x333474, Func Offset: 0x4634
	// Line 11377, Address: 0x33347c, Func Offset: 0x463c
	// Line 11379, Address: 0x333494, Func Offset: 0x4654
	// Line 11377, Address: 0x3334a0, Func Offset: 0x4660
	// Line 11379, Address: 0x3334a8, Func Offset: 0x4668
	// Line 11380, Address: 0x3334c8, Func Offset: 0x4688
	// Line 11381, Address: 0x3334d0, Func Offset: 0x4690
	// Line 11382, Address: 0x3334d8, Func Offset: 0x4698
	// Line 11392, Address: 0x3334e0, Func Offset: 0x46a0
	// Line 11393, Address: 0x3334ec, Func Offset: 0x46ac
	// Line 11394, Address: 0x3334f0, Func Offset: 0x46b0
	// Line 11393, Address: 0x3334f4, Func Offset: 0x46b4
	// Line 11397, Address: 0x333514, Func Offset: 0x46d4
	// Line 11420, Address: 0x333518, Func Offset: 0x46d8
	// Line 11410, Address: 0x33351c, Func Offset: 0x46dc
	// Line 11412, Address: 0x333520, Func Offset: 0x46e0
	// Line 11410, Address: 0x333524, Func Offset: 0x46e4
	// Line 11421, Address: 0x333528, Func Offset: 0x46e8
	// Line 11412, Address: 0x33352c, Func Offset: 0x46ec
	// Line 11411, Address: 0x333530, Func Offset: 0x46f0
	// Line 11413, Address: 0x333534, Func Offset: 0x46f4
	// Line 11414, Address: 0x333538, Func Offset: 0x46f8
	// Line 11410, Address: 0x333540, Func Offset: 0x4700
	// Line 11412, Address: 0x333544, Func Offset: 0x4704
	// Line 11411, Address: 0x333548, Func Offset: 0x4708
	// Line 11414, Address: 0x33354c, Func Offset: 0x470c
	// Line 11412, Address: 0x333550, Func Offset: 0x4710
	// Line 11413, Address: 0x333554, Func Offset: 0x4714
	// Line 11414, Address: 0x33355c, Func Offset: 0x471c
	// Line 11413, Address: 0x333560, Func Offset: 0x4720
	// Line 11416, Address: 0x333564, Func Offset: 0x4724
	// Line 11419, Address: 0x333568, Func Offset: 0x4728
	// Line 11416, Address: 0x33356c, Func Offset: 0x472c
	// Line 11414, Address: 0x333570, Func Offset: 0x4730
	// Line 11411, Address: 0x333574, Func Offset: 0x4734
	// Line 11417, Address: 0x333578, Func Offset: 0x4738
	// Line 11414, Address: 0x33357c, Func Offset: 0x473c
	// Line 11419, Address: 0x333580, Func Offset: 0x4740
	// Line 11416, Address: 0x333584, Func Offset: 0x4744
	// Line 11414, Address: 0x333588, Func Offset: 0x4748
	// Line 11416, Address: 0x33358c, Func Offset: 0x474c
	// Line 11417, Address: 0x333590, Func Offset: 0x4750
	// Line 11418, Address: 0x33359c, Func Offset: 0x475c
	// Line 11419, Address: 0x3335a0, Func Offset: 0x4760
	// Line 11416, Address: 0x3335a4, Func Offset: 0x4764
	// Line 11419, Address: 0x3335a8, Func Offset: 0x4768
	// Line 11418, Address: 0x3335ac, Func Offset: 0x476c
	// Line 11416, Address: 0x3335b0, Func Offset: 0x4770
	// Line 11418, Address: 0x3335b4, Func Offset: 0x4774
	// Line 11419, Address: 0x3335bc, Func Offset: 0x477c
	// Line 11418, Address: 0x3335c4, Func Offset: 0x4784
	// Line 11421, Address: 0x3335c8, Func Offset: 0x4788
	// Line 11424, Address: 0x3335d0, Func Offset: 0x4790
	// Line 11429, Address: 0x3335d8, Func Offset: 0x4798
	// Line 11425, Address: 0x3335dc, Func Offset: 0x479c
	// Line 11429, Address: 0x3335e0, Func Offset: 0x47a0
	// Line 11424, Address: 0x3335e8, Func Offset: 0x47a8
	// Line 11425, Address: 0x3335f0, Func Offset: 0x47b0
	// Line 11426, Address: 0x33360c, Func Offset: 0x47cc
	// Line 11429, Address: 0x333614, Func Offset: 0x47d4
	// Line 11430, Address: 0x333620, Func Offset: 0x47e0
	// Line 11431, Address: 0x33362c, Func Offset: 0x47ec
	// Line 11430, Address: 0x333630, Func Offset: 0x47f0
	// Line 11432, Address: 0x33365c, Func Offset: 0x481c
	// Line 11435, Address: 0x333664, Func Offset: 0x4824
	// Line 11432, Address: 0x333668, Func Offset: 0x4828
	// Line 11437, Address: 0x33366c, Func Offset: 0x482c
	// Line 11560, Address: 0x333688, Func Offset: 0x4848
	// Line 11561, Address: 0x33368c, Func Offset: 0x484c
	// Line 11562, Address: 0x333690, Func Offset: 0x4850
	// Line 11563, Address: 0x3336a8, Func Offset: 0x4868
	// Line 11569, Address: 0x3336b8, Func Offset: 0x4878
	// Line 11568, Address: 0x3336bc, Func Offset: 0x487c
	// Line 11569, Address: 0x3336d4, Func Offset: 0x4894
	// Line 11570, Address: 0x3336dc, Func Offset: 0x489c
	// Line 11571, Address: 0x333710, Func Offset: 0x48d0
	// Line 11573, Address: 0x333720, Func Offset: 0x48e0
	// Line 11574, Address: 0x3337cc, Func Offset: 0x498c
	// Line 11577, Address: 0x3337d0, Func Offset: 0x4990
	// Line 11579, Address: 0x3337e0, Func Offset: 0x49a0
	// Line 11584, Address: 0x3337e8, Func Offset: 0x49a8
	// Line 11585, Address: 0x333804, Func Offset: 0x49c4
	// Line 11586, Address: 0x333808, Func Offset: 0x49c8
	// Line 11585, Address: 0x333810, Func Offset: 0x49d0
	// Line 11586, Address: 0x333814, Func Offset: 0x49d4
	// Line 11588, Address: 0x333820, Func Offset: 0x49e0
	// Line 11587, Address: 0x333824, Func Offset: 0x49e4
	// Line 11593, Address: 0x333828, Func Offset: 0x49e8
	// Line 11609, Address: 0x333830, Func Offset: 0x49f0
	// Line 11610, Address: 0x333838, Func Offset: 0x49f8
	// Line 11611, Address: 0x33384c, Func Offset: 0x4a0c
	// Line 11614, Address: 0x333854, Func Offset: 0x4a14
	// Line 11615, Address: 0x333864, Func Offset: 0x4a24
	// Line 11618, Address: 0x33386c, Func Offset: 0x4a2c
	// Line 11620, Address: 0x33387c, Func Offset: 0x4a3c
	// Line 11619, Address: 0x333880, Func Offset: 0x4a40
	// Line 11620, Address: 0x333884, Func Offset: 0x4a44
	// Line 11619, Address: 0x333888, Func Offset: 0x4a48
	// Line 11620, Address: 0x33388c, Func Offset: 0x4a4c
	// Line 11621, Address: 0x3338b0, Func Offset: 0x4a70
	// Line 11624, Address: 0x3338c0, Func Offset: 0x4a80
	// Line 11630, Address: 0x33390c, Func Offset: 0x4acc
	// Line 11632, Address: 0x333914, Func Offset: 0x4ad4
	// Line 11633, Address: 0x333920, Func Offset: 0x4ae0
	// Line 11634, Address: 0x333924, Func Offset: 0x4ae4
	// Line 11636, Address: 0x33392c, Func Offset: 0x4aec
	// Line 11637, Address: 0x333938, Func Offset: 0x4af8
	// Line 11639, Address: 0x33397c, Func Offset: 0x4b3c
	// Line 11641, Address: 0x333984, Func Offset: 0x4b44
	// Line 11642, Address: 0x333988, Func Offset: 0x4b48
	// Line 11648, Address: 0x333990, Func Offset: 0x4b50
	// Line 11650, Address: 0x333998, Func Offset: 0x4b58
	// Line 11651, Address: 0x33399c, Func Offset: 0x4b5c
	// Line 11653, Address: 0x3339a0, Func Offset: 0x4b60
	// Line 11654, Address: 0x3339ac, Func Offset: 0x4b6c
	// Line 11655, Address: 0x3339b0, Func Offset: 0x4b70
	// Line 11657, Address: 0x3339b8, Func Offset: 0x4b78
	// Line 11658, Address: 0x3339bc, Func Offset: 0x4b7c
	// Line 11661, Address: 0x3339c0, Func Offset: 0x4b80
	// Line 11665, Address: 0x3339cc, Func Offset: 0x4b8c
	// Line 11667, Address: 0x3339dc, Func Offset: 0x4b9c
	// Line 11670, Address: 0x3339e4, Func Offset: 0x4ba4
	// Line 11671, Address: 0x3339fc, Func Offset: 0x4bbc
	// Line 11670, Address: 0x333a00, Func Offset: 0x4bc0
	// Line 11671, Address: 0x333a04, Func Offset: 0x4bc4
	// Line 11672, Address: 0x333a08, Func Offset: 0x4bc8
	// Line 11670, Address: 0x333a0c, Func Offset: 0x4bcc
	// Line 11671, Address: 0x333a10, Func Offset: 0x4bd0
	// Line 11673, Address: 0x333a30, Func Offset: 0x4bf0
	// Line 11671, Address: 0x333a34, Func Offset: 0x4bf4
	// Line 11672, Address: 0x333a40, Func Offset: 0x4c00
	// Line 11673, Address: 0x333a64, Func Offset: 0x4c24
	// Line 11672, Address: 0x333a68, Func Offset: 0x4c28
	// Line 11673, Address: 0x333a6c, Func Offset: 0x4c2c
	// Line 11677, Address: 0x333a78, Func Offset: 0x4c38
	// Line 11678, Address: 0x333a80, Func Offset: 0x4c40
	// Line 11683, Address: 0x333a84, Func Offset: 0x4c44
	// Line 11689, Address: 0x333a94, Func Offset: 0x4c54
	// Line 11699, Address: 0x333ab0, Func Offset: 0x4c70
	// Line 11700, Address: 0x333ac8, Func Offset: 0x4c88
	// Line 11705, Address: 0x333ad4, Func Offset: 0x4c94
	// Line 11702, Address: 0x333adc, Func Offset: 0x4c9c
	// Line 11705, Address: 0x333ae0, Func Offset: 0x4ca0
	// Line 11711, Address: 0x333ae8, Func Offset: 0x4ca8
	// Line 11732, Address: 0x333af8, Func Offset: 0x4cb8
	// Line 11739, Address: 0x333b38, Func Offset: 0x4cf8
	// Line 11742, Address: 0x333b44, Func Offset: 0x4d04
	// Line 11741, Address: 0x333b48, Func Offset: 0x4d08
	// Line 11742, Address: 0x333b4c, Func Offset: 0x4d0c
	// Line 11741, Address: 0x333b50, Func Offset: 0x4d10
	// Line 11742, Address: 0x333b54, Func Offset: 0x4d14
	// Line 11743, Address: 0x333b58, Func Offset: 0x4d18
	// Line 11747, Address: 0x333b60, Func Offset: 0x4d20
	// Line 11746, Address: 0x333b64, Func Offset: 0x4d24
	// Line 11747, Address: 0x333b70, Func Offset: 0x4d30
	// Line 11750, Address: 0x333b78, Func Offset: 0x4d38
	// Line 11759, Address: 0x333bac, Func Offset: 0x4d6c
	// Line 11755, Address: 0x333bb0, Func Offset: 0x4d70
	// Line 11759, Address: 0x333bb4, Func Offset: 0x4d74
	// Line 11760, Address: 0x333bbc, Func Offset: 0x4d7c
	// Line 11762, Address: 0x333bd0, Func Offset: 0x4d90
	// Line 11761, Address: 0x333bdc, Func Offset: 0x4d9c
	// Line 11764, Address: 0x333be0, Func Offset: 0x4da0
	// Line 11761, Address: 0x333be8, Func Offset: 0x4da8
	// Line 11764, Address: 0x333bf0, Func Offset: 0x4db0
	// Line 11762, Address: 0x333bf4, Func Offset: 0x4db4
	// Line 11766, Address: 0x333bf8, Func Offset: 0x4db8
	// Line 11761, Address: 0x333bfc, Func Offset: 0x4dbc
	// Line 11766, Address: 0x333c04, Func Offset: 0x4dc4
	// Line 11770, Address: 0x333c0c, Func Offset: 0x4dcc
	// Line 11774, Address: 0x333c18, Func Offset: 0x4dd8
	// Line 11779, Address: 0x333c28, Func Offset: 0x4de8
	// Line 11782, Address: 0x333c2c, Func Offset: 0x4dec
	// Line 11779, Address: 0x333c38, Func Offset: 0x4df8
	// Line 11782, Address: 0x333c3c, Func Offset: 0x4dfc
	// Line 11777, Address: 0x333c48, Func Offset: 0x4e08
	// Line 11778, Address: 0x333c4c, Func Offset: 0x4e0c
	// Line 11782, Address: 0x333c50, Func Offset: 0x4e10
	// Line 11788, Address: 0x333c58, Func Offset: 0x4e18
	// Line 11794, Address: 0x333c78, Func Offset: 0x4e38
	// Line 11803, Address: 0x333c98, Func Offset: 0x4e58
	// Line 11807, Address: 0x333ca0, Func Offset: 0x4e60
	// Line 11808, Address: 0x333cb4, Func Offset: 0x4e74
	// Line 11822, Address: 0x333cc8, Func Offset: 0x4e88
	// Line 11824, Address: 0x333ccc, Func Offset: 0x4e8c
	// Line 11823, Address: 0x333cd4, Func Offset: 0x4e94
	// Line 11822, Address: 0x333cd8, Func Offset: 0x4e98
	// Line 11827, Address: 0x333cdc, Func Offset: 0x4e9c
	// Line 11824, Address: 0x333ce0, Func Offset: 0x4ea0
	// Line 11827, Address: 0x333ce4, Func Offset: 0x4ea4
	// Line 11830, Address: 0x333cec, Func Offset: 0x4eac
	// Line 11832, Address: 0x333d10, Func Offset: 0x4ed0
	// Line 11836, Address: 0x333d30, Func Offset: 0x4ef0
	// Line 11840, Address: 0x333d64, Func Offset: 0x4f24
	// Line 11836, Address: 0x333d68, Func Offset: 0x4f28
	// Line 11840, Address: 0x333d6c, Func Offset: 0x4f2c
	// Line 11836, Address: 0x333d74, Func Offset: 0x4f34
	// Line 11840, Address: 0x333d78, Func Offset: 0x4f38
	// Line 11841, Address: 0x333d80, Func Offset: 0x4f40
	// Line 11840, Address: 0x333d88, Func Offset: 0x4f48
	// Line 11841, Address: 0x333d98, Func Offset: 0x4f58
	// Line 11840, Address: 0x333d9c, Func Offset: 0x4f5c
	// Line 11841, Address: 0x333db4, Func Offset: 0x4f74
	// Line 11845, Address: 0x333dbc, Func Offset: 0x4f7c
	// Line 11846, Address: 0x333dc8, Func Offset: 0x4f88
	// Line 11845, Address: 0x333de4, Func Offset: 0x4fa4
	// Line 11846, Address: 0x333e08, Func Offset: 0x4fc8
	// Line 11848, Address: 0x333e10, Func Offset: 0x4fd0
	// Line 11851, Address: 0x333e18, Func Offset: 0x4fd8
	// Line 11854, Address: 0x333e20, Func Offset: 0x4fe0
	// Line 11855, Address: 0x333e34, Func Offset: 0x4ff4
	// Line 11856, Address: 0x333e44, Func Offset: 0x5004
	// Line 11863, Address: 0x333e6c, Func Offset: 0x502c
	// Line 11864, Address: 0x333e88, Func Offset: 0x5048
	// Line 11867, Address: 0x333e94, Func Offset: 0x5054
	// Line 11868, Address: 0x333ea8, Func Offset: 0x5068
	// Line 11870, Address: 0x333ec8, Func Offset: 0x5088
	// Line 11871, Address: 0x333edc, Func Offset: 0x509c
	// Line 11874, Address: 0x333f00, Func Offset: 0x50c0
	// Line 11875, Address: 0x333f04, Func Offset: 0x50c4
	// Line 11874, Address: 0x333f08, Func Offset: 0x50c8
	// Line 11875, Address: 0x333f0c, Func Offset: 0x50cc
	// Line 11874, Address: 0x333f10, Func Offset: 0x50d0
	// Line 11875, Address: 0x333f14, Func Offset: 0x50d4
	// Line 11876, Address: 0x333f1c, Func Offset: 0x50dc
	// Line 11877, Address: 0x333f24, Func Offset: 0x50e4
	// Line 11879, Address: 0x333f2c, Func Offset: 0x50ec
	// Line 11881, Address: 0x333ffc, Func Offset: 0x51bc
	// Line 11882, Address: 0x334004, Func Offset: 0x51c4
	// Line 11884, Address: 0x334010, Func Offset: 0x51d0
	// Line 11885, Address: 0x334038, Func Offset: 0x51f8
	// Line 11886, Address: 0x334050, Func Offset: 0x5210
	// Line 11887, Address: 0x334058, Func Offset: 0x5218
	// Line 11891, Address: 0x334060, Func Offset: 0x5220
	// Line 11892, Address: 0x334070, Func Offset: 0x5230
	// Line 11899, Address: 0x334074, Func Offset: 0x5234
	// Line 11903, Address: 0x3340bc, Func Offset: 0x527c
	// Line 11905, Address: 0x3340c4, Func Offset: 0x5284
	// Line 11906, Address: 0x3340d4, Func Offset: 0x5294
	// Line 11908, Address: 0x3340d8, Func Offset: 0x5298
	// Line 11911, Address: 0x3340e0, Func Offset: 0x52a0
	// Line 11912, Address: 0x3340e4, Func Offset: 0x52a4
	// Line 11917, Address: 0x3340ec, Func Offset: 0x52ac
	// Line 11918, Address: 0x3340f8, Func Offset: 0x52b8
	// Line 11919, Address: 0x334120, Func Offset: 0x52e0
	// Line 11922, Address: 0x334124, Func Offset: 0x52e4
	// Line 11923, Address: 0x334134, Func Offset: 0x52f4
	// Line 11924, Address: 0x334140, Func Offset: 0x5300
	// Line 11926, Address: 0x334178, Func Offset: 0x5338
	// Line 11928, Address: 0x334184, Func Offset: 0x5344
	// Line 11929, Address: 0x334188, Func Offset: 0x5348
	// Line 11930, Address: 0x33418c, Func Offset: 0x534c
	// Line 11931, Address: 0x3341a4, Func Offset: 0x5364
	// Line 11932, Address: 0x334224, Func Offset: 0x53e4
	// Line 11936, Address: 0x33422c, Func Offset: 0x53ec
	// Line 11937, Address: 0x334238, Func Offset: 0x53f8
	// Line 11941, Address: 0x33423c, Func Offset: 0x53fc
	// Line 11942, Address: 0x334248, Func Offset: 0x5408
	// Line 11948, Address: 0x3342a4, Func Offset: 0x5464
	// Line 11942, Address: 0x3342a8, Func Offset: 0x5468
	// Line 11948, Address: 0x3342ac, Func Offset: 0x546c
	// Line 11942, Address: 0x3342b0, Func Offset: 0x5470
	// Line 11948, Address: 0x3342b4, Func Offset: 0x5474
	// Line 11942, Address: 0x3342b8, Func Offset: 0x5478
	// Line 11948, Address: 0x3342bc, Func Offset: 0x547c
	// Line 11950, Address: 0x3342d4, Func Offset: 0x5494
	// Line 11951, Address: 0x3342e8, Func Offset: 0x54a8
	// Line 11953, Address: 0x3342f8, Func Offset: 0x54b8
	// Line 11954, Address: 0x334300, Func Offset: 0x54c0
	// Line 11965, Address: 0x334308, Func Offset: 0x54c8
	// Line 11964, Address: 0x33430c, Func Offset: 0x54cc
	// Line 11970, Address: 0x334320, Func Offset: 0x54e0
	// Line 11972, Address: 0x334328, Func Offset: 0x54e8
	// Line 11969, Address: 0x33432c, Func Offset: 0x54ec
	// Line 11965, Address: 0x334330, Func Offset: 0x54f0
	// Line 11964, Address: 0x334334, Func Offset: 0x54f4
	// Line 11972, Address: 0x334340, Func Offset: 0x5500
	// Line 11974, Address: 0x334348, Func Offset: 0x5508
	// Line 11975, Address: 0x33434c, Func Offset: 0x550c
	// Line 11974, Address: 0x334350, Func Offset: 0x5510
	// Line 11975, Address: 0x334358, Func Offset: 0x5518
	// Line 11976, Address: 0x33435c, Func Offset: 0x551c
	// Line 11977, Address: 0x334364, Func Offset: 0x5524
	// Line 11979, Address: 0x334370, Func Offset: 0x5530
	// Line 11980, Address: 0x334384, Func Offset: 0x5544
	// Line 11982, Address: 0x33438c, Func Offset: 0x554c
	// Line 11984, Address: 0x334390, Func Offset: 0x5550
	// Line 11985, Address: 0x33439c, Func Offset: 0x555c
	// Line 11986, Address: 0x3343a4, Func Offset: 0x5564
	// Line 11989, Address: 0x3343ac, Func Offset: 0x556c
	// Line 11988, Address: 0x3343b0, Func Offset: 0x5570
	// Line 11989, Address: 0x3343b4, Func Offset: 0x5574
	// Line 11992, Address: 0x3343c4, Func Offset: 0x5584
	// Line 11991, Address: 0x3343c8, Func Offset: 0x5588
	// Line 11992, Address: 0x3343d8, Func Offset: 0x5598
	// Line 11993, Address: 0x3343dc, Func Offset: 0x559c
	// Line 11995, Address: 0x3343f0, Func Offset: 0x55b0
	// Line 11996, Address: 0x3343f8, Func Offset: 0x55b8
	// Line 11998, Address: 0x334400, Func Offset: 0x55c0
	// Line 12000, Address: 0x334404, Func Offset: 0x55c4
	// Line 12001, Address: 0x334408, Func Offset: 0x55c8
	// Line 12004, Address: 0x334410, Func Offset: 0x55d0
	// Line 12005, Address: 0x334414, Func Offset: 0x55d4
	// Line 12009, Address: 0x334418, Func Offset: 0x55d8
	// Line 12010, Address: 0x334420, Func Offset: 0x55e0
	// Line 12012, Address: 0x33442c, Func Offset: 0x55ec
	// Line 12016, Address: 0x334430, Func Offset: 0x55f0
	// Line 12012, Address: 0x334434, Func Offset: 0x55f4
	// Line 12016, Address: 0x334438, Func Offset: 0x55f8
	// Line 12012, Address: 0x33443c, Func Offset: 0x55fc
	// Line 12016, Address: 0x334440, Func Offset: 0x5600
	// Line 12013, Address: 0x334444, Func Offset: 0x5604
	// Line 12016, Address: 0x33444c, Func Offset: 0x560c
	// Line 12012, Address: 0x334454, Func Offset: 0x5614
	// Line 12013, Address: 0x334460, Func Offset: 0x5620
	// Line 12016, Address: 0x334468, Func Offset: 0x5628
	// Line 12013, Address: 0x33446c, Func Offset: 0x562c
	// Line 12016, Address: 0x334474, Func Offset: 0x5634
	// Line 12012, Address: 0x334478, Func Offset: 0x5638
	// Line 12016, Address: 0x33447c, Func Offset: 0x563c
	// Line 12023, Address: 0x3344a4, Func Offset: 0x5664
	// Line 12016, Address: 0x3344ac, Func Offset: 0x566c
	// Line 12023, Address: 0x3344c0, Func Offset: 0x5680
	// Line 12024, Address: 0x33457c, Func Offset: 0x573c
	// Line 12023, Address: 0x334584, Func Offset: 0x5744
	// Line 12024, Address: 0x334598, Func Offset: 0x5758
	// Line 12025, Address: 0x334660, Func Offset: 0x5820
	// Line 12024, Address: 0x334668, Func Offset: 0x5828
	// Line 12025, Address: 0x33467c, Func Offset: 0x583c
	// Line 12026, Address: 0x33476c, Func Offset: 0x592c
	// Line 12028, Address: 0x33477c, Func Offset: 0x593c
	// Line 12026, Address: 0x334780, Func Offset: 0x5940
	// Line 12028, Address: 0x334794, Func Offset: 0x5954
	// Line 12029, Address: 0x33484c, Func Offset: 0x5a0c
	// Line 12028, Address: 0x334850, Func Offset: 0x5a10
	// Line 12029, Address: 0x334864, Func Offset: 0x5a24
	// Line 12030, Address: 0x33491c, Func Offset: 0x5adc
	// Line 12029, Address: 0x334920, Func Offset: 0x5ae0
	// Line 12030, Address: 0x334934, Func Offset: 0x5af4
	// Line 12031, Address: 0x334a00, Func Offset: 0x5bc0
	// Line 12034, Address: 0x334a0c, Func Offset: 0x5bcc
	// Line 12046, Address: 0x334a24, Func Offset: 0x5be4
	// Line 12047, Address: 0x334a38, Func Offset: 0x5bf8
	// Line 12052, Address: 0x334a60, Func Offset: 0x5c20
	// Line 12048, Address: 0x334a64, Func Offset: 0x5c24
	// Line 12052, Address: 0x334a68, Func Offset: 0x5c28
	// Line 12061, Address: 0x334b8c, Func Offset: 0x5d4c
	// Line 12062, Address: 0x334b94, Func Offset: 0x5d54
	// Line 12063, Address: 0x334bb8, Func Offset: 0x5d78
	// Line 12065, Address: 0x334be0, Func Offset: 0x5da0
	// Line 12066, Address: 0x334be4, Func Offset: 0x5da4
	// Line 12070, Address: 0x334d20, Func Offset: 0x5ee0
	// Line 12078, Address: 0x334d38, Func Offset: 0x5ef8
	// Line 12074, Address: 0x334d3c, Func Offset: 0x5efc
	// Line 12078, Address: 0x334d40, Func Offset: 0x5f00
	// Line 12075, Address: 0x334d44, Func Offset: 0x5f04
	// Line 12073, Address: 0x334d48, Func Offset: 0x5f08
	// Line 12078, Address: 0x334d4c, Func Offset: 0x5f0c
	// Line 12075, Address: 0x334d54, Func Offset: 0x5f14
	// Line 12078, Address: 0x334d74, Func Offset: 0x5f34
	// Line 12079, Address: 0x334d7c, Func Offset: 0x5f3c
	// Line 12087, Address: 0x334d90, Func Offset: 0x5f50
	// Line 12094, Address: 0x334eb4, Func Offset: 0x6074
	// Line 12105, Address: 0x334f94, Func Offset: 0x6154
	// Line 12109, Address: 0x334fac, Func Offset: 0x616c
	// Line 12108, Address: 0x334fb4, Func Offset: 0x6174
	// Line 12114, Address: 0x334fb8, Func Offset: 0x6178
	// Line 12109, Address: 0x334fcc, Func Offset: 0x618c
	// Line 12110, Address: 0x334fd0, Func Offset: 0x6190
	// Line 12115, Address: 0x334fdc, Func Offset: 0x619c
	// Line 12110, Address: 0x334fe0, Func Offset: 0x61a0
	// Line 12115, Address: 0x334ff0, Func Offset: 0x61b0
	// Line 12116, Address: 0x334ff8, Func Offset: 0x61b8
	// Line 12117, Address: 0x334ffc, Func Offset: 0x61bc
	// Line 12118, Address: 0x335000, Func Offset: 0x61c0
	// Line 12117, Address: 0x335004, Func Offset: 0x61c4
	// Line 12126, Address: 0x335008, Func Offset: 0x61c8
	// Line 12118, Address: 0x33500c, Func Offset: 0x61cc
	// Line 12126, Address: 0x335010, Func Offset: 0x61d0
	// Line 12122, Address: 0x335014, Func Offset: 0x61d4
	// Line 12126, Address: 0x335018, Func Offset: 0x61d8
	// Line 12123, Address: 0x33501c, Func Offset: 0x61dc
	// Line 12126, Address: 0x335020, Func Offset: 0x61e0
	// Line 12118, Address: 0x335024, Func Offset: 0x61e4
	// Line 12117, Address: 0x335028, Func Offset: 0x61e8
	// Line 12119, Address: 0x33502c, Func Offset: 0x61ec
	// Line 12118, Address: 0x335034, Func Offset: 0x61f4
	// Line 12119, Address: 0x335040, Func Offset: 0x6200
	// Line 12121, Address: 0x335044, Func Offset: 0x6204
	// Line 12122, Address: 0x33504c, Func Offset: 0x620c
	// Line 12123, Address: 0x335054, Func Offset: 0x6214
	// Line 12122, Address: 0x33505c, Func Offset: 0x621c
	// Line 12126, Address: 0x335060, Func Offset: 0x6220
	// Line 12127, Address: 0x335068, Func Offset: 0x6228
	// Line 12137, Address: 0x33507c, Func Offset: 0x623c
	// Line 12138, Address: 0x335080, Func Offset: 0x6240
	// Line 12137, Address: 0x335084, Func Offset: 0x6244
	// Line 12140, Address: 0x335088, Func Offset: 0x6248
	// Line 12139, Address: 0x33508c, Func Offset: 0x624c
	// Line 12140, Address: 0x335090, Func Offset: 0x6250
	// Line 12143, Address: 0x33509c, Func Offset: 0x625c
	// Line 12146, Address: 0x3350b4, Func Offset: 0x6274
	// Line 12150, Address: 0x3350ec, Func Offset: 0x62ac
	// Line 12146, Address: 0x3350f4, Func Offset: 0x62b4
	// Line 12150, Address: 0x3350f8, Func Offset: 0x62b8
	// Line 12151, Address: 0x335100, Func Offset: 0x62c0
	// Line 12150, Address: 0x335108, Func Offset: 0x62c8
	// Line 12151, Address: 0x335118, Func Offset: 0x62d8
	// Line 12150, Address: 0x33511c, Func Offset: 0x62dc
	// Line 12151, Address: 0x335134, Func Offset: 0x62f4
	// Line 12155, Address: 0x33513c, Func Offset: 0x62fc
	// Line 12162, Address: 0x3351e8, Func Offset: 0x63a8
	// Line 12155, Address: 0x335200, Func Offset: 0x63c0
	// Line 12162, Address: 0x335204, Func Offset: 0x63c4
	// Line 12163, Address: 0x33520c, Func Offset: 0x63cc
	// Line 12166, Address: 0x335218, Func Offset: 0x63d8
	// Line 12163, Address: 0x335230, Func Offset: 0x63f0
	// Line 12166, Address: 0x335234, Func Offset: 0x63f4
	// Line 12171, Address: 0x33523c, Func Offset: 0x63fc
	// Line 12173, Address: 0x3352a0, Func Offset: 0x6460
	// Line 12176, Address: 0x3352a8, Func Offset: 0x6468
	// Line 12180, Address: 0x3352ac, Func Offset: 0x646c
	// Line 12181, Address: 0x3352c8, Func Offset: 0x6488
	// Line 12183, Address: 0x3352d8, Func Offset: 0x6498
	// Line 12184, Address: 0x3352e0, Func Offset: 0x64a0
	// Line 12186, Address: 0x3353b0, Func Offset: 0x6570
	// Line 12187, Address: 0x3353b8, Func Offset: 0x6578
	// Line 12188, Address: 0x3353c0, Func Offset: 0x6580
	// Line 12191, Address: 0x33548c, Func Offset: 0x664c
	// Line 12192, Address: 0x335494, Func Offset: 0x6654
	// Line 12194, Address: 0x33549c, Func Offset: 0x665c
	// Line 12195, Address: 0x3354c4, Func Offset: 0x6684
	// Line 12196, Address: 0x3354dc, Func Offset: 0x669c
	// Line 12197, Address: 0x3354e4, Func Offset: 0x66a4
	// Line 12199, Address: 0x3354f0, Func Offset: 0x66b0
	// Line 12200, Address: 0x3354f8, Func Offset: 0x66b8
	// Line 12199, Address: 0x335514, Func Offset: 0x66d4
	// Line 12200, Address: 0x335538, Func Offset: 0x66f8
	// Line 12203, Address: 0x335540, Func Offset: 0x6700
	// Line 12204, Address: 0x335550, Func Offset: 0x6710
	// Line 12210, Address: 0x335554, Func Offset: 0x6714
	// Line 12212, Address: 0x33555c, Func Offset: 0x671c
	// Line 12214, Address: 0x335564, Func Offset: 0x6724
	// Line 12216, Address: 0x335570, Func Offset: 0x6730
	// Line 12219, Address: 0x335578, Func Offset: 0x6738
	// Line 12220, Address: 0x33557c, Func Offset: 0x673c
	// Line 12226, Address: 0x335584, Func Offset: 0x6744
	// Line 12227, Address: 0x335590, Func Offset: 0x6750
	// Line 12228, Address: 0x3355b8, Func Offset: 0x6778
	// Line 12232, Address: 0x3355bc, Func Offset: 0x677c
	// Line 12236, Address: 0x3355d8, Func Offset: 0x6798
	// Line 12237, Address: 0x3355e4, Func Offset: 0x67a4
	// Line 12238, Address: 0x335614, Func Offset: 0x67d4
	// Line 12240, Address: 0x335620, Func Offset: 0x67e0
	// Line 12249, Address: 0x33562c, Func Offset: 0x67ec
	// Line 12244, Address: 0x335630, Func Offset: 0x67f0
	// Line 12246, Address: 0x335634, Func Offset: 0x67f4
	// Line 12249, Address: 0x33563c, Func Offset: 0x67fc
	// Line 12246, Address: 0x335640, Func Offset: 0x6800
	// Line 12244, Address: 0x335644, Func Offset: 0x6804
	// Line 12246, Address: 0x335648, Func Offset: 0x6808
	// Line 12243, Address: 0x33564c, Func Offset: 0x680c
	// Line 12246, Address: 0x335650, Func Offset: 0x6810
	// Line 12249, Address: 0x335654, Func Offset: 0x6814
	// Line 12246, Address: 0x335658, Func Offset: 0x6818
	// Line 12249, Address: 0x33565c, Func Offset: 0x681c
	// Line 12246, Address: 0x335660, Func Offset: 0x6820
	// Line 12244, Address: 0x335670, Func Offset: 0x6830
	// Line 12246, Address: 0x335674, Func Offset: 0x6834
	// Line 12245, Address: 0x335678, Func Offset: 0x6838
	// Line 12246, Address: 0x335690, Func Offset: 0x6850
	// Line 12249, Address: 0x33569c, Func Offset: 0x685c
	// Line 12250, Address: 0x3356a4, Func Offset: 0x6864
	// Line 12257, Address: 0x3356b8, Func Offset: 0x6878
	// Line 12262, Address: 0x3356c0, Func Offset: 0x6880
	// Line 12264, Address: 0x3356c8, Func Offset: 0x6888
	// Line 12267, Address: 0x3356cc, Func Offset: 0x688c
	// Line 12265, Address: 0x3356d0, Func Offset: 0x6890
	// Line 12264, Address: 0x3356d4, Func Offset: 0x6894
	// Line 12285, Address: 0x3356d8, Func Offset: 0x6898
	// Line 12266, Address: 0x3356dc, Func Offset: 0x689c
	// Line 12285, Address: 0x3356e0, Func Offset: 0x68a0
	// Line 12289, Address: 0x335708, Func Offset: 0x68c8
	// Line 12291, Address: 0x335714, Func Offset: 0x68d4
	// Line 12293, Address: 0x3357e8, Func Offset: 0x69a8
	// Line 12294, Address: 0x3357f0, Func Offset: 0x69b0
	// Line 12295, Address: 0x3357f8, Func Offset: 0x69b8
	// Line 12296, Address: 0x335804, Func Offset: 0x69c4
	// Line 12300, Address: 0x335808, Func Offset: 0x69c8
	// Line 12301, Address: 0x335830, Func Offset: 0x69f0
	// Line 12302, Address: 0x335848, Func Offset: 0x6a08
	// Line 12303, Address: 0x335850, Func Offset: 0x6a10
	// Line 12305, Address: 0x33585c, Func Offset: 0x6a1c
	// Line 12306, Address: 0x335868, Func Offset: 0x6a28
	// Line 12308, Address: 0x33586c, Func Offset: 0x6a2c
	// Line 12309, Address: 0x335874, Func Offset: 0x6a34
	// Line 12308, Address: 0x335890, Func Offset: 0x6a50
	// Line 12309, Address: 0x3358b4, Func Offset: 0x6a74
	// Line 12313, Address: 0x3358bc, Func Offset: 0x6a7c
	// Line 12314, Address: 0x3358cc, Func Offset: 0x6a8c
	// Line 12320, Address: 0x3358d0, Func Offset: 0x6a90
	// Line 12322, Address: 0x3358d8, Func Offset: 0x6a98
	// Line 12324, Address: 0x3358e0, Func Offset: 0x6aa0
	// Line 12328, Address: 0x3358f8, Func Offset: 0x6ab8
	// Line 12332, Address: 0x335904, Func Offset: 0x6ac4
	// Line 12335, Address: 0x33590c, Func Offset: 0x6acc
	// Line 12339, Address: 0x335910, Func Offset: 0x6ad0
	// Line 12340, Address: 0x33591c, Func Offset: 0x6adc
	// Line 12341, Address: 0x33596c, Func Offset: 0x6b2c
	// Line 12365, Address: 0x33597c, Func Offset: 0x6b3c
	// Line 12368, Address: 0x3359b4, Func Offset: 0x6b74
	// Line 12369, Address: 0x3359c4, Func Offset: 0x6b84
	// Line 12381, Address: 0x3359e4, Func Offset: 0x6ba4
	// Line 12392, Address: 0x3359f4, Func Offset: 0x6bb4
	// Line 12395, Address: 0x335a04, Func Offset: 0x6bc4
	// Line 12411, Address: 0x335a10, Func Offset: 0x6bd0
	// Line 12414, Address: 0x335a20, Func Offset: 0x6be0
	// Line 12417, Address: 0x335a30, Func Offset: 0x6bf0
	// Line 12425, Address: 0x335a40, Func Offset: 0x6c00
	// Line 12417, Address: 0x335a44, Func Offset: 0x6c04
	// Line 12425, Address: 0x335a48, Func Offset: 0x6c08
	// Line 12431, Address: 0x335a64, Func Offset: 0x6c24
	// Line 12425, Address: 0x335a70, Func Offset: 0x6c30
	// Line 12431, Address: 0x335a78, Func Offset: 0x6c38
	// Line 12432, Address: 0x335aac, Func Offset: 0x6c6c
	// Line 12431, Address: 0x335ab0, Func Offset: 0x6c70
	// Line 12432, Address: 0x335ab4, Func Offset: 0x6c74
	// Line 12431, Address: 0x335ac0, Func Offset: 0x6c80
	// Line 12432, Address: 0x335ac4, Func Offset: 0x6c84
	// Line 12431, Address: 0x335ac8, Func Offset: 0x6c88
	// Line 12435, Address: 0x335acc, Func Offset: 0x6c8c
	// Line 12436, Address: 0x335ad8, Func Offset: 0x6c98
	// Line 12437, Address: 0x335ae4, Func Offset: 0x6ca4
	// Line 12439, Address: 0x335b04, Func Offset: 0x6cc4
	// Line 12440, Address: 0x335b0c, Func Offset: 0x6ccc
	// Line 12444, Address: 0x335b24, Func Offset: 0x6ce4
	// Line 12445, Address: 0x335b34, Func Offset: 0x6cf4
	// Line 12446, Address: 0x335b60, Func Offset: 0x6d20
	// Line 12447, Address: 0x335b68, Func Offset: 0x6d28
	// Line 12450, Address: 0x335b74, Func Offset: 0x6d34
	// Line 12449, Address: 0x335b7c, Func Offset: 0x6d3c
	// Line 12450, Address: 0x335b90, Func Offset: 0x6d50
	// Line 12448, Address: 0x335b9c, Func Offset: 0x6d5c
	// Line 12449, Address: 0x335ba0, Func Offset: 0x6d60
	// Line 12448, Address: 0x335ba4, Func Offset: 0x6d64
	// Line 12449, Address: 0x335bb0, Func Offset: 0x6d70
	// Line 12448, Address: 0x335bbc, Func Offset: 0x6d7c
	// Line 12449, Address: 0x335bc4, Func Offset: 0x6d84
	// Line 12448, Address: 0x335bcc, Func Offset: 0x6d8c
	// Line 12449, Address: 0x335bd4, Func Offset: 0x6d94
	// Line 12450, Address: 0x335bd8, Func Offset: 0x6d98
	// Line 12455, Address: 0x335be0, Func Offset: 0x6da0
	// Line 12457, Address: 0x335bf0, Func Offset: 0x6db0
	// Line 12459, Address: 0x335bf8, Func Offset: 0x6db8
	// Line 12457, Address: 0x335c04, Func Offset: 0x6dc4
	// Line 12458, Address: 0x335c10, Func Offset: 0x6dd0
	// Line 12459, Address: 0x335c20, Func Offset: 0x6de0
	// Line 12465, Address: 0x335c28, Func Offset: 0x6de8
	// Line 12473, Address: 0x335c6c, Func Offset: 0x6e2c
	// Line 12475, Address: 0x335c74, Func Offset: 0x6e34
	// Line 12476, Address: 0x335c80, Func Offset: 0x6e40
	// Line 12477, Address: 0x335c8c, Func Offset: 0x6e4c
	// Line 12478, Address: 0x335c90, Func Offset: 0x6e50
	// Line 12479, Address: 0x335c98, Func Offset: 0x6e58
	// Line 12481, Address: 0x335ca0, Func Offset: 0x6e60
	// Line 12482, Address: 0x335cac, Func Offset: 0x6e6c
	// Line 12483, Address: 0x335cb8, Func Offset: 0x6e78
	// Line 12487, Address: 0x335cc0, Func Offset: 0x6e80
	// Line 12490, Address: 0x335d00, Func Offset: 0x6ec0
	// Line 12491, Address: 0x335d08, Func Offset: 0x6ec8
	// Line 12492, Address: 0x335d10, Func Offset: 0x6ed0
	// Line 12494, Address: 0x335d50, Func Offset: 0x6f10
	// Line 12495, Address: 0x335d54, Func Offset: 0x6f14
	// Line 12494, Address: 0x335d58, Func Offset: 0x6f18
	// Line 12495, Address: 0x335d5c, Func Offset: 0x6f1c
	// Line 12503, Address: 0x335d70, Func Offset: 0x6f30
	// Line 12507, Address: 0x335d74, Func Offset: 0x6f34
	// Line 12503, Address: 0x335d78, Func Offset: 0x6f38
	// Line 12507, Address: 0x335d7c, Func Offset: 0x6f3c
	// Line 12504, Address: 0x335d80, Func Offset: 0x6f40
	// Line 12500, Address: 0x335d84, Func Offset: 0x6f44
	// Line 12504, Address: 0x335d88, Func Offset: 0x6f48
	// Line 12507, Address: 0x335d8c, Func Offset: 0x6f4c
	// Line 12508, Address: 0x335da0, Func Offset: 0x6f60
	// Line 12525, Address: 0x335db4, Func Offset: 0x6f74
	// Line 12527, Address: 0x335db8, Func Offset: 0x6f78
	// Line 12518, Address: 0x335dbc, Func Offset: 0x6f7c
	// Line 12525, Address: 0x335dc0, Func Offset: 0x6f80
	// Line 12520, Address: 0x335dc8, Func Offset: 0x6f88
	// Line 12527, Address: 0x335dd0, Func Offset: 0x6f90
	// Line 12531, Address: 0x335dd8, Func Offset: 0x6f98
	// Line 12533, Address: 0x335ddc, Func Offset: 0x6f9c
	// Line 12531, Address: 0x335de0, Func Offset: 0x6fa0
	// Line 12525, Address: 0x335de4, Func Offset: 0x6fa4
	// Line 12533, Address: 0x335de8, Func Offset: 0x6fa8
	// Line 12518, Address: 0x335dec, Func Offset: 0x6fac
	// Line 12527, Address: 0x335df0, Func Offset: 0x6fb0
	// Line 12525, Address: 0x335df4, Func Offset: 0x6fb4
	// Line 12520, Address: 0x335df8, Func Offset: 0x6fb8
	// Line 12518, Address: 0x335e00, Func Offset: 0x6fc0
	// Line 12527, Address: 0x335e08, Func Offset: 0x6fc8
	// Line 12520, Address: 0x335e10, Func Offset: 0x6fd0
	// Line 12527, Address: 0x335e14, Func Offset: 0x6fd4
	// Line 12525, Address: 0x335e18, Func Offset: 0x6fd8
	// Line 12526, Address: 0x335e24, Func Offset: 0x6fe4
	// Line 12528, Address: 0x335e28, Func Offset: 0x6fe8
	// Line 12527, Address: 0x335e2c, Func Offset: 0x6fec
	// Line 12531, Address: 0x335e30, Func Offset: 0x6ff0
	// Line 12520, Address: 0x335e34, Func Offset: 0x6ff4
	// Line 12531, Address: 0x335e38, Func Offset: 0x6ff8
	// Line 12532, Address: 0x335e60, Func Offset: 0x7020
	// Line 12533, Address: 0x335e64, Func Offset: 0x7024
	// Line 12544, Address: 0x335e70, Func Offset: 0x7030
	// Line 12534, Address: 0x335e78, Func Offset: 0x7038
	// Line 12542, Address: 0x335e80, Func Offset: 0x7040
	// Line 12534, Address: 0x335e84, Func Offset: 0x7044
	// Line 12544, Address: 0x335e88, Func Offset: 0x7048
	// Line 12534, Address: 0x335e90, Func Offset: 0x7050
	// Line 12535, Address: 0x335e94, Func Offset: 0x7054
	// Line 12542, Address: 0x335e98, Func Offset: 0x7058
	// Line 12535, Address: 0x335e9c, Func Offset: 0x705c
	// Line 12534, Address: 0x335ea0, Func Offset: 0x7060
	// Line 12536, Address: 0x335ea4, Func Offset: 0x7064
	// Line 12534, Address: 0x335ea8, Func Offset: 0x7068
	// Line 12536, Address: 0x335eac, Func Offset: 0x706c
	// Line 12535, Address: 0x335eb0, Func Offset: 0x7070
	// Line 12536, Address: 0x335eb8, Func Offset: 0x7078
	// Line 12535, Address: 0x335ebc, Func Offset: 0x707c
	// Line 12536, Address: 0x335ec0, Func Offset: 0x7080
	// Line 12535, Address: 0x335ec8, Func Offset: 0x7088
	// Line 12536, Address: 0x335ecc, Func Offset: 0x708c
	// Line 12537, Address: 0x335ed0, Func Offset: 0x7090
	// Line 12542, Address: 0x335ed8, Func Offset: 0x7098
	// Line 12537, Address: 0x335edc, Func Offset: 0x709c
	// Line 12538, Address: 0x335ee0, Func Offset: 0x70a0
	// Line 12537, Address: 0x335ee8, Func Offset: 0x70a8
	// Line 12542, Address: 0x335eec, Func Offset: 0x70ac
	// Line 12537, Address: 0x335ef0, Func Offset: 0x70b0
	// Line 12542, Address: 0x335ef8, Func Offset: 0x70b8
	// Line 12537, Address: 0x335efc, Func Offset: 0x70bc
	// Line 12538, Address: 0x335f10, Func Offset: 0x70d0
	// Line 12542, Address: 0x335f34, Func Offset: 0x70f4
	// Line 12543, Address: 0x335f64, Func Offset: 0x7124
	// Line 12544, Address: 0x335f68, Func Offset: 0x7128
	// Line 12545, Address: 0x335f70, Func Offset: 0x7130
	// Line 12549, Address: 0x335f88, Func Offset: 0x7148
	// Line 12546, Address: 0x335f8c, Func Offset: 0x714c
	// Line 12547, Address: 0x335f98, Func Offset: 0x7158
	// Line 12546, Address: 0x335f9c, Func Offset: 0x715c
	// Line 12547, Address: 0x335fa8, Func Offset: 0x7168
	// Line 12546, Address: 0x335fac, Func Offset: 0x716c
	// Line 12547, Address: 0x335fb8, Func Offset: 0x7178
	// Line 12546, Address: 0x335fc4, Func Offset: 0x7184
	// Line 12547, Address: 0x335fc8, Func Offset: 0x7188
	// Line 12548, Address: 0x335fcc, Func Offset: 0x718c
	// Line 12549, Address: 0x335fd8, Func Offset: 0x7198
	// Line 12553, Address: 0x335fe0, Func Offset: 0x71a0
	// Line 12548, Address: 0x335fe4, Func Offset: 0x71a4
	// Line 12549, Address: 0x336004, Func Offset: 0x71c4
	// Line 12553, Address: 0x33603c, Func Offset: 0x71fc
	// Line 12554, Address: 0x336048, Func Offset: 0x7208
	// Line 12560, Address: 0x33604c, Func Offset: 0x720c
	// Line 12555, Address: 0x336050, Func Offset: 0x7210
	// Line 12557, Address: 0x336058, Func Offset: 0x7218
	// Line 12560, Address: 0x33605c, Func Offset: 0x721c
	// Line 12563, Address: 0x336064, Func Offset: 0x7224
	// Line 12564, Address: 0x336078, Func Offset: 0x7238
	// Line 12565, Address: 0x33608c, Func Offset: 0x724c
	// Line 12566, Address: 0x3360a0, Func Offset: 0x7260
	// Line 12590, Address: 0x3360b4, Func Offset: 0x7274
	// Line 12592, Address: 0x3360e4, Func Offset: 0x72a4
	// Line 12594, Address: 0x3360f4, Func Offset: 0x72b4
	// Line 12595, Address: 0x336204, Func Offset: 0x73c4
	// Line 12598, Address: 0x33620c, Func Offset: 0x73cc
	// Line 12600, Address: 0x336214, Func Offset: 0x73d4
	// Line 12625, Address: 0x336220, Func Offset: 0x73e0
	// Line 12616, Address: 0x336228, Func Offset: 0x73e8
	// Line 12625, Address: 0x33623c, Func Offset: 0x73fc
	// Line 12616, Address: 0x336240, Func Offset: 0x7400
	// Line 12625, Address: 0x336264, Func Offset: 0x7424
	// Line 12626, Address: 0x33626c, Func Offset: 0x742c
	// Line 12627, Address: 0x33629c, Func Offset: 0x745c
	// Line 12628, Address: 0x3362a4, Func Offset: 0x7464
	// Line 12634, Address: 0x336318, Func Offset: 0x74d8
	// Line 12642, Address: 0x336324, Func Offset: 0x74e4
	// Line 12643, Address: 0x33632c, Func Offset: 0x74ec
	// Line 12645, Address: 0x33633c, Func Offset: 0x74fc
	// Line 12646, Address: 0x336348, Func Offset: 0x7508
	// Line 12647, Address: 0x33634c, Func Offset: 0x750c
	// Line 12652, Address: 0x336350, Func Offset: 0x7510
	// Line 12655, Address: 0x33635c, Func Offset: 0x751c
	// Line 12656, Address: 0x33636c, Func Offset: 0x752c
	// Line 12657, Address: 0x33637c, Func Offset: 0x753c
	// Line 12658, Address: 0x336394, Func Offset: 0x7554
	// Line 12664, Address: 0x33639c, Func Offset: 0x755c
	// Line 12665, Address: 0x3363d8, Func Offset: 0x7598
	// Line 12666, Address: 0x3363e4, Func Offset: 0x75a4
	// Line 12665, Address: 0x3363ec, Func Offset: 0x75ac
	// Line 12666, Address: 0x3363f0, Func Offset: 0x75b0
	// Line 12667, Address: 0x3363f8, Func Offset: 0x75b8
	// Line 12666, Address: 0x3363fc, Func Offset: 0x75bc
	// Line 12667, Address: 0x336400, Func Offset: 0x75c0
	// Line 12675, Address: 0x336418, Func Offset: 0x75d8
	// Line 12667, Address: 0x33641c, Func Offset: 0x75dc
	// Line 12675, Address: 0x336428, Func Offset: 0x75e8
	// Line 12677, Address: 0x336434, Func Offset: 0x75f4
	// Line 12676, Address: 0x33643c, Func Offset: 0x75fc
	// Line 12677, Address: 0x336440, Func Offset: 0x7600
	// Line 12683, Address: 0x336490, Func Offset: 0x7650
	// Line 12685, Address: 0x3364a4, Func Offset: 0x7664
	// Line 12687, Address: 0x3364c8, Func Offset: 0x7688
	// Line 12686, Address: 0x3364d4, Func Offset: 0x7694
	// Line 12687, Address: 0x3364e8, Func Offset: 0x76a8
	// Line 12690, Address: 0x336500, Func Offset: 0x76c0
	// Line 12692, Address: 0x336520, Func Offset: 0x76e0
	// Line 12694, Address: 0x336530, Func Offset: 0x76f0
	// Line 12695, Address: 0x336544, Func Offset: 0x7704
	// Line 12696, Address: 0x336550, Func Offset: 0x7710
	// Line 12695, Address: 0x33655c, Func Offset: 0x771c
	// Line 12696, Address: 0x336564, Func Offset: 0x7724
	// Line 12697, Address: 0x336568, Func Offset: 0x7728
	// Line 12698, Address: 0x336570, Func Offset: 0x7730
	// Line 12699, Address: 0x336580, Func Offset: 0x7740
	// Line 12698, Address: 0x336584, Func Offset: 0x7744
	// Line 12699, Address: 0x336588, Func Offset: 0x7748
	// Line 12698, Address: 0x336590, Func Offset: 0x7750
	// Line 12699, Address: 0x336598, Func Offset: 0x7758
	// Line 12698, Address: 0x3365a0, Func Offset: 0x7760
	// Line 12699, Address: 0x3365a4, Func Offset: 0x7764
	// Line 12708, Address: 0x3365a8, Func Offset: 0x7768
	// Line 12714, Address: 0x3365bc, Func Offset: 0x777c
	// Line 12708, Address: 0x3365c0, Func Offset: 0x7780
	// Line 12714, Address: 0x3365c4, Func Offset: 0x7784
	// Line 12716, Address: 0x336600, Func Offset: 0x77c0
	// Line 12723, Address: 0x336610, Func Offset: 0x77d0
	// Line 12724, Address: 0x336618, Func Offset: 0x77d8
	// Line 12728, Address: 0x33661c, Func Offset: 0x77dc
	// Line 12729, Address: 0x336624, Func Offset: 0x77e4
	// Line 12738, Address: 0x336638, Func Offset: 0x77f8
	// Line 12729, Address: 0x33663c, Func Offset: 0x77fc
	// Line 12738, Address: 0x336640, Func Offset: 0x7800
	// Line 12739, Address: 0x33664c, Func Offset: 0x780c
	// Line 12740, Address: 0x336650, Func Offset: 0x7810
	// Line 12743, Address: 0x336820, Func Offset: 0x79e0
	// Line 12747, Address: 0x336834, Func Offset: 0x79f4
	// Line 12748, Address: 0x33684c, Func Offset: 0x7a0c
	// Line 12749, Address: 0x336854, Func Offset: 0x7a14
	// Line 12750, Address: 0x336858, Func Offset: 0x7a18
	// Line 12748, Address: 0x336860, Func Offset: 0x7a20
	// Line 12750, Address: 0x336864, Func Offset: 0x7a24
	// Line 12748, Address: 0x336868, Func Offset: 0x7a28
	// Line 12749, Address: 0x336870, Func Offset: 0x7a30
	// Line 12750, Address: 0x336884, Func Offset: 0x7a44
	// Line 12751, Address: 0x3368cc, Func Offset: 0x7a8c
	// Line 12755, Address: 0x3368fc, Func Offset: 0x7abc
	// Line 12756, Address: 0x336998, Func Offset: 0x7b58
	// Line 12757, Address: 0x3369a0, Func Offset: 0x7b60
	// Line 12788, Address: 0x336a1c, Func Offset: 0x7bdc
	// Line 12807, Address: 0x336a40, Func Offset: 0x7c00
	// Line 12809, Address: 0x336a4c, Func Offset: 0x7c0c
	// Line 12807, Address: 0x336a50, Func Offset: 0x7c10
	// Line 12809, Address: 0x336a5c, Func Offset: 0x7c1c
	// Line 12810, Address: 0x336a68, Func Offset: 0x7c28
	// Line 12811, Address: 0x336a6c, Func Offset: 0x7c2c
	// Line 12813, Address: 0x336a80, Func Offset: 0x7c40
	// Line 12814, Address: 0x336a98, Func Offset: 0x7c58
	// Line 12823, Address: 0x336aa4, Func Offset: 0x7c64
	// Line 12827, Address: 0x336af8, Func Offset: 0x7cb8
	// Line 12829, Address: 0x336b0c, Func Offset: 0x7ccc
	// Line 12831, Address: 0x336b30, Func Offset: 0x7cf0
	// Line 12834, Address: 0x336b38, Func Offset: 0x7cf8
	// Line 12839, Address: 0x336b3c, Func Offset: 0x7cfc
	// Line 12841, Address: 0x336b58, Func Offset: 0x7d18
	// Line 12842, Address: 0x336b5c, Func Offset: 0x7d1c
	// Line 12844, Address: 0x336b7c, Func Offset: 0x7d3c
	// Line 12846, Address: 0x336b88, Func Offset: 0x7d48
	// Line 12848, Address: 0x336b90, Func Offset: 0x7d50
	// Line 12849, Address: 0x336cb8, Func Offset: 0x7e78
	// Line 12850, Address: 0x336cfc, Func Offset: 0x7ebc
	// Line 12851, Address: 0x336d00, Func Offset: 0x7ec0
	// Line 12854, Address: 0x336d08, Func Offset: 0x7ec8
	// Line 12859, Address: 0x336d0c, Func Offset: 0x7ecc
	// Line 12861, Address: 0x336d28, Func Offset: 0x7ee8
	// Line 12862, Address: 0x336d34, Func Offset: 0x7ef4
	// Line 12863, Address: 0x336d48, Func Offset: 0x7f08
	// Line 12868, Address: 0x336d4c, Func Offset: 0x7f0c
	// Line 12865, Address: 0x336d54, Func Offset: 0x7f14
	// Line 12868, Address: 0x336d64, Func Offset: 0x7f24
	// Line 12871, Address: 0x336d68, Func Offset: 0x7f28
	// Line 12865, Address: 0x336d6c, Func Offset: 0x7f2c
	// Line 12871, Address: 0x336d70, Func Offset: 0x7f30
	// Line 12872, Address: 0x336d78, Func Offset: 0x7f38
	// Line 12875, Address: 0x336d7c, Func Offset: 0x7f3c
	// Line 12877, Address: 0x336d88, Func Offset: 0x7f48
	// Line 12880, Address: 0x336d98, Func Offset: 0x7f58
	// Line 12883, Address: 0x336dc4, Func Offset: 0x7f84
	// Line 12882, Address: 0x336dc8, Func Offset: 0x7f88
	// Line 12883, Address: 0x336dcc, Func Offset: 0x7f8c
	// Line 12884, Address: 0x336de0, Func Offset: 0x7fa0
	// Line 12894, Address: 0x336e28, Func Offset: 0x7fe8
	// Line 12897, Address: 0x336e4c, Func Offset: 0x800c
	// Line 12898, Address: 0x336e58, Func Offset: 0x8018
	// Line 12900, Address: 0x336e60, Func Offset: 0x8020
	// Line 12904, Address: 0x336e74, Func Offset: 0x8034
	// Line 12911, Address: 0x336ed8, Func Offset: 0x8098
	// Line 12912, Address: 0x336ef4, Func Offset: 0x80b4
	// Line 12913, Address: 0x336f0c, Func Offset: 0x80cc
	// Line 12922, Address: 0x336f1c, Func Offset: 0x80dc
	// Line 12924, Address: 0x336f30, Func Offset: 0x80f0
	// Line 12925, Address: 0x337000, Func Offset: 0x81c0
	// Line 12969, Address: 0x33700c, Func Offset: 0x81cc
	// Line 12925, Address: 0x337014, Func Offset: 0x81d4
	// Line 12969, Address: 0x337018, Func Offset: 0x81d8
	// Line 12970, Address: 0x337044, Func Offset: 0x8204
	// Line 12973, Address: 0x337050, Func Offset: 0x8210
	// Line 12985, Address: 0x337054, Func Offset: 0x8214
	// Line 12973, Address: 0x337058, Func Offset: 0x8218
	// Line 12985, Address: 0x33705c, Func Offset: 0x821c
	// Line 12973, Address: 0x337060, Func Offset: 0x8220
	// Line 12984, Address: 0x337070, Func Offset: 0x8230
	// Line 12973, Address: 0x337078, Func Offset: 0x8238
	// Line 12984, Address: 0x33707c, Func Offset: 0x823c
	// Line 12985, Address: 0x3370cc, Func Offset: 0x828c
	// Line 12986, Address: 0x3370d4, Func Offset: 0x8294
	// Line 12985, Address: 0x3370d8, Func Offset: 0x8298
	// Line 12986, Address: 0x3370dc, Func Offset: 0x829c
	// Line 12987, Address: 0x3370e8, Func Offset: 0x82a8
	// Line 12986, Address: 0x3370ec, Func Offset: 0x82ac
	// Line 12985, Address: 0x3370fc, Func Offset: 0x82bc
	// Line 12986, Address: 0x337100, Func Offset: 0x82c0
	// Line 12987, Address: 0x337114, Func Offset: 0x82d4
	// Line 12988, Address: 0x33711c, Func Offset: 0x82dc
	// Line 12990, Address: 0x337128, Func Offset: 0x82e8
	// Line 12992, Address: 0x337148, Func Offset: 0x8308
	// Line 12993, Address: 0x337150, Func Offset: 0x8310
	// Line 12994, Address: 0x337184, Func Offset: 0x8344
	// Line 12995, Address: 0x337198, Func Offset: 0x8358
	// Line 12998, Address: 0x3371a8, Func Offset: 0x8368
	// Line 12999, Address: 0x3371c0, Func Offset: 0x8380
	// Line 13001, Address: 0x3371d4, Func Offset: 0x8394
	// Line 13009, Address: 0x3371ec, Func Offset: 0x83ac
	// Line 13001, Address: 0x3371f0, Func Offset: 0x83b0
	// Line 13009, Address: 0x3371f4, Func Offset: 0x83b4
	// Line 13008, Address: 0x3371f8, Func Offset: 0x83b8
	// Line 13009, Address: 0x3371fc, Func Offset: 0x83bc
	// Line 13010, Address: 0x337204, Func Offset: 0x83c4
	// Line 13009, Address: 0x337208, Func Offset: 0x83c8
	// Line 13010, Address: 0x33720c, Func Offset: 0x83cc
	// Line 13011, Address: 0x337210, Func Offset: 0x83d0
	// Line 13012, Address: 0x33721c, Func Offset: 0x83dc
	// Line 13014, Address: 0x337224, Func Offset: 0x83e4
	// Line 13015, Address: 0x33722c, Func Offset: 0x83ec
	// Line 13017, Address: 0x337278, Func Offset: 0x8438
	// Line 13018, Address: 0x337294, Func Offset: 0x8454
	// Line 13019, Address: 0x33729c, Func Offset: 0x845c
	// Line 13020, Address: 0x3372b8, Func Offset: 0x8478
	// Line 13021, Address: 0x3372c0, Func Offset: 0x8480
	// Line 13023, Address: 0x3372d8, Func Offset: 0x8498
	// Line 13026, Address: 0x3372ec, Func Offset: 0x84ac
	// Line 13029, Address: 0x337308, Func Offset: 0x84c8
	// Line 13026, Address: 0x33730c, Func Offset: 0x84cc
	// Line 13029, Address: 0x337310, Func Offset: 0x84d0
	// Line 13032, Address: 0x33731c, Func Offset: 0x84dc
	// Line 13029, Address: 0x337328, Func Offset: 0x84e8
	// Line 13032, Address: 0x337334, Func Offset: 0x84f4
	// Line 13035, Address: 0x337340, Func Offset: 0x8500
	// Line 13029, Address: 0x33734c, Func Offset: 0x850c
	// Line 13032, Address: 0x337350, Func Offset: 0x8510
	// Line 13035, Address: 0x337354, Func Offset: 0x8514
	// Line 13039, Address: 0x337358, Func Offset: 0x8518
	// Line 13040, Address: 0x33735c, Func Offset: 0x851c
	// Line 13041, Address: 0x337378, Func Offset: 0x8538
	// Line 13040, Address: 0x337390, Func Offset: 0x8550
	// Line 13041, Address: 0x337394, Func Offset: 0x8554
	// Line 13040, Address: 0x3373c0, Func Offset: 0x8580
	// Line 13041, Address: 0x337440, Func Offset: 0x8600
	// Line 13040, Address: 0x33746c, Func Offset: 0x862c
	// Line 13041, Address: 0x337470, Func Offset: 0x8630
	// Line 13042, Address: 0x3374d0, Func Offset: 0x8690
	// Line 13043, Address: 0x3374d8, Func Offset: 0x8698
	// Line 13046, Address: 0x337598, Func Offset: 0x8758
	// Line 13048, Address: 0x3375a0, Func Offset: 0x8760
	// Line 13050, Address: 0x3375b4, Func Offset: 0x8774
	// Line 13053, Address: 0x3375c8, Func Offset: 0x8788
	// Line 13054, Address: 0x3375d8, Func Offset: 0x8798
	// Line 13055, Address: 0x3375dc, Func Offset: 0x879c
	// Line 13056, Address: 0x3375e0, Func Offset: 0x87a0
	// Line 13060, Address: 0x3375e8, Func Offset: 0x87a8
	// Line 13062, Address: 0x3375fc, Func Offset: 0x87bc
	// Line 13067, Address: 0x33760c, Func Offset: 0x87cc
	// Line 13069, Address: 0x337638, Func Offset: 0x87f8
	// Line 13070, Address: 0x337648, Func Offset: 0x8808
	// Line 13078, Address: 0x33764c, Func Offset: 0x880c
	// Line 13070, Address: 0x337650, Func Offset: 0x8810
	// Line 13078, Address: 0x337654, Func Offset: 0x8814
	// Line 13070, Address: 0x337660, Func Offset: 0x8820
	// Line 13078, Address: 0x337698, Func Offset: 0x8858
	// Line 13082, Address: 0x3376e4, Func Offset: 0x88a4
	// Line 13083, Address: 0x3376ec, Func Offset: 0x88ac
	// Line 13092, Address: 0x3376f0, Func Offset: 0x88b0
	// Line 13083, Address: 0x337700, Func Offset: 0x88c0
	// Line 13092, Address: 0x33771c, Func Offset: 0x88dc
	// Line 13097, Address: 0x337768, Func Offset: 0x8928
	// Line 13099, Address: 0x337798, Func Offset: 0x8958
	// Line 13107, Address: 0x33779c, Func Offset: 0x895c
	// Line 13099, Address: 0x3377a0, Func Offset: 0x8960
	// Line 13107, Address: 0x3377a4, Func Offset: 0x8964
	// Line 13099, Address: 0x3377b0, Func Offset: 0x8970
	// Line 13107, Address: 0x3377ec, Func Offset: 0x89ac
	// Line 13115, Address: 0x33783c, Func Offset: 0x89fc
	// Line 13118, Address: 0x337850, Func Offset: 0x8a10
	// Line 13121, Address: 0x337868, Func Offset: 0x8a28
	// Line 13125, Address: 0x33788c, Func Offset: 0x8a4c
	// Line 13137, Address: 0x337894, Func Offset: 0x8a54
	// Line 13141, Address: 0x337898, Func Offset: 0x8a58
	// Line 13137, Address: 0x33789c, Func Offset: 0x8a5c
	// Line 13141, Address: 0x3378a0, Func Offset: 0x8a60
	// Line 13137, Address: 0x3378a8, Func Offset: 0x8a68
	// Line 13141, Address: 0x3378d4, Func Offset: 0x8a94
	// Line 13137, Address: 0x3378d8, Func Offset: 0x8a98
	// Line 13141, Address: 0x3378dc, Func Offset: 0x8a9c
	// Line 13137, Address: 0x3378e8, Func Offset: 0x8aa8
	// Line 13141, Address: 0x3378ec, Func Offset: 0x8aac
	// Line 13143, Address: 0x3378f4, Func Offset: 0x8ab4
	// Line 13142, Address: 0x3378f8, Func Offset: 0x8ab8
	// Line 13151, Address: 0x3378fc, Func Offset: 0x8abc
	// Line 13152, Address: 0x33792c, Func Offset: 0x8aec
	// Line 13155, Address: 0x337930, Func Offset: 0x8af0
	// Line 13159, Address: 0x33793c, Func Offset: 0x8afc
	// Line 13161, Address: 0x337978, Func Offset: 0x8b38
	// Line 13162, Address: 0x33797c, Func Offset: 0x8b3c
	// Line 13165, Address: 0x337980, Func Offset: 0x8b40
	// Line 13170, Address: 0x3379bc, Func Offset: 0x8b7c
	// Line 13165, Address: 0x3379c0, Func Offset: 0x8b80
	// Line 13170, Address: 0x3379c4, Func Offset: 0x8b84
	// Line 13179, Address: 0x3379d0, Func Offset: 0x8b90
	// Line 13180, Address: 0x3379d8, Func Offset: 0x8b98
	// Line 13183, Address: 0x3379dc, Func Offset: 0x8b9c
	// Line 13184, Address: 0x3379e4, Func Offset: 0x8ba4
	// Line 13185, Address: 0x3379e8, Func Offset: 0x8ba8
	// Line 13184, Address: 0x3379ec, Func Offset: 0x8bac
	// Line 13187, Address: 0x3379f0, Func Offset: 0x8bb0
	// Line 13197, Address: 0x337a08, Func Offset: 0x8bc8
	// Line 13187, Address: 0x337a0c, Func Offset: 0x8bcc
	// Line 13188, Address: 0x337a1c, Func Offset: 0x8bdc
	// Line 13189, Address: 0x337a20, Func Offset: 0x8be0
	// Line 13192, Address: 0x337a28, Func Offset: 0x8be8
	// Line 13193, Address: 0x337a40, Func Offset: 0x8c00
	// Line 13195, Address: 0x337a7c, Func Offset: 0x8c3c
	// Line 13197, Address: 0x337a9c, Func Offset: 0x8c5c
	// Line 13198, Address: 0x337aa8, Func Offset: 0x8c68
	// Line 13200, Address: 0x337ab4, Func Offset: 0x8c74
	// Line 13202, Address: 0x337ae8, Func Offset: 0x8ca8
	// Line 13203, Address: 0x337aec, Func Offset: 0x8cac
	// Line 13207, Address: 0x337af0, Func Offset: 0x8cb0
	// Line 13208, Address: 0x337b00, Func Offset: 0x8cc0
	// Line 13209, Address: 0x337b08, Func Offset: 0x8cc8
	// Line 13210, Address: 0x337b14, Func Offset: 0x8cd4
	// Line 13213, Address: 0x337b20, Func Offset: 0x8ce0
	// Line 13212, Address: 0x337b24, Func Offset: 0x8ce4
	// Line 13213, Address: 0x337b28, Func Offset: 0x8ce8
	// Line 13216, Address: 0x337b2c, Func Offset: 0x8cec
	// Line 13218, Address: 0x337b38, Func Offset: 0x8cf8
	// Line 13219, Address: 0x337b40, Func Offset: 0x8d00
	// Line 13224, Address: 0x337b44, Func Offset: 0x8d04
	// Line 13225, Address: 0x337b6c, Func Offset: 0x8d2c
	// Line 13226, Address: 0x337b70, Func Offset: 0x8d30
	// Line 13228, Address: 0x337b84, Func Offset: 0x8d44
	// Line 13231, Address: 0x337b94, Func Offset: 0x8d54
	// Line 13232, Address: 0x337bb8, Func Offset: 0x8d78
	// Line 13235, Address: 0x337bc0, Func Offset: 0x8d80
	// Line 13239, Address: 0x337bc4, Func Offset: 0x8d84
	// Line 13235, Address: 0x337bc8, Func Offset: 0x8d88
	// Line 13239, Address: 0x337bcc, Func Offset: 0x8d8c
	// Line 13235, Address: 0x337bd0, Func Offset: 0x8d90
	// Line 13238, Address: 0x337bfc, Func Offset: 0x8dbc
	// Line 13235, Address: 0x337c00, Func Offset: 0x8dc0
	// Line 13238, Address: 0x337c04, Func Offset: 0x8dc4
	// Line 13235, Address: 0x337c10, Func Offset: 0x8dd0
	// Line 13238, Address: 0x337c18, Func Offset: 0x8dd8
	// Line 13239, Address: 0x337c20, Func Offset: 0x8de0
	// Line 13242, Address: 0x337c30, Func Offset: 0x8df0
	// Line 13241, Address: 0x337c34, Func Offset: 0x8df4
	// Line 13242, Address: 0x337c38, Func Offset: 0x8df8
	// Line 13241, Address: 0x337c44, Func Offset: 0x8e04
	// Line 13242, Address: 0x337c48, Func Offset: 0x8e08
	// Line 13246, Address: 0x337c4c, Func Offset: 0x8e0c
	// Line 13248, Address: 0x337c74, Func Offset: 0x8e34
	// Line 13250, Address: 0x337ca8, Func Offset: 0x8e68
	// Line 13258, Address: 0x337cac, Func Offset: 0x8e6c
	// Line 13260, Address: 0x337cb8, Func Offset: 0x8e78
	// Line 13263, Address: 0x337cbc, Func Offset: 0x8e7c
	// Line 13260, Address: 0x337cc0, Func Offset: 0x8e80
	// Line 13263, Address: 0x337cc8, Func Offset: 0x8e88
	// Line 13260, Address: 0x337ccc, Func Offset: 0x8e8c
	// Line 13263, Address: 0x337d44, Func Offset: 0x8f04
	// Line 13264, Address: 0x337d4c, Func Offset: 0x8f0c
	// Line 13265, Address: 0x337d58, Func Offset: 0x8f18
	// Line 13266, Address: 0x337d5c, Func Offset: 0x8f1c
	// Line 13264, Address: 0x337d60, Func Offset: 0x8f20
	// Line 13265, Address: 0x337d78, Func Offset: 0x8f38
	// Line 13266, Address: 0x337d98, Func Offset: 0x8f58
	// Line 13293, Address: 0x337db8, Func Offset: 0x8f78
	// Line 13296, Address: 0x337dc4, Func Offset: 0x8f84
	// Line 13298, Address: 0x337dd4, Func Offset: 0x8f94
	// Func End, Address: 0x337e2c, Func Offset: 0x8fec
}

// zEntPlayer_Update_HitchSpinAndFade__Ff
// Start address: 0x337e30
void zEntPlayer_Update_HitchSpinAndFade(float32 dt)
{
	xMat3x3 mat_rot;
	int32 i;
	xEnt* hitch;
	xVec3 vec_camToHitch;
	// Line 9356, Address: 0x337e30, Func Offset: 0
	// Line 9358, Address: 0x337e34, Func Offset: 0x4
	// Line 9356, Address: 0x337e38, Func Offset: 0x8
	// Line 9358, Address: 0x337e3c, Func Offset: 0xc
	// Line 9356, Address: 0x337e40, Func Offset: 0x10
	// Line 9358, Address: 0x337e54, Func Offset: 0x24
	// Line 9356, Address: 0x337e58, Func Offset: 0x28
	// Line 9358, Address: 0x337e5c, Func Offset: 0x2c
	// Line 9356, Address: 0x337e60, Func Offset: 0x30
	// Line 9358, Address: 0x337e70, Func Offset: 0x40
	// Line 9359, Address: 0x337e7c, Func Offset: 0x4c
	// Line 9360, Address: 0x337e88, Func Offset: 0x58
	// Line 9363, Address: 0x337e90, Func Offset: 0x60
	// Line 9365, Address: 0x337e9c, Func Offset: 0x6c
	// Line 9366, Address: 0x337eb8, Func Offset: 0x88
	// Line 9365, Address: 0x337ec0, Func Offset: 0x90
	// Line 9375, Address: 0x337ee4, Func Offset: 0xb4
	// Line 9382, Address: 0x337ee8, Func Offset: 0xb8
	// Line 9392, Address: 0x337ef4, Func Offset: 0xc4
	// Line 9395, Address: 0x337f00, Func Offset: 0xd0
	// Line 9393, Address: 0x337f04, Func Offset: 0xd4
	// Line 9366, Address: 0x337f08, Func Offset: 0xd8
	// Line 9369, Address: 0x337f18, Func Offset: 0xe8
	// Line 9375, Address: 0x337f30, Func Offset: 0x100
	// Line 9382, Address: 0x337f50, Func Offset: 0x120
	// Line 9392, Address: 0x337f60, Func Offset: 0x130
	// Line 9382, Address: 0x337f6c, Func Offset: 0x13c
	// Line 9392, Address: 0x337fc0, Func Offset: 0x190
	// Line 9382, Address: 0x337fc4, Func Offset: 0x194
	// Line 9392, Address: 0x337fcc, Func Offset: 0x19c
	// Line 9393, Address: 0x337fec, Func Offset: 0x1bc
	// Line 9395, Address: 0x338008, Func Offset: 0x1d8
	// Line 9397, Address: 0x338028, Func Offset: 0x1f8
	// Line 9404, Address: 0x338070, Func Offset: 0x240
	// Line 9407, Address: 0x338084, Func Offset: 0x254
	// Func End, Address: 0x3380ac, Func Offset: 0x27c
}

// zEntPlayerExplodeBowl__Fv
// Start address: 0x3380b0
void zEntPlayerExplodeBowl()
{
	// Line 9079, Address: 0x3380b0, Func Offset: 0
	// Line 9080, Address: 0x3380cc, Func Offset: 0x1c
	// Line 9084, Address: 0x338118, Func Offset: 0x68
	// Line 9085, Address: 0x33811c, Func Offset: 0x6c
	// Line 9084, Address: 0x338128, Func Offset: 0x78
	// Line 9085, Address: 0x33812c, Func Offset: 0x7c
	// Line 9087, Address: 0x3381f4, Func Offset: 0x144
	// Line 9085, Address: 0x3381fc, Func Offset: 0x14c
	// Line 9087, Address: 0x338200, Func Offset: 0x150
	// Line 9085, Address: 0x338208, Func Offset: 0x158
	// Line 9087, Address: 0x338214, Func Offset: 0x164
	// Func End, Address: 0x33822c, Func Offset: 0x17c
}

// zEntPlayerExplodeHammerThrow__FP5xVec3
// Start address: 0x338230
void zEntPlayerExplodeHammerThrow(xVec3* pos)
{
	// Line 9065, Address: 0x338230, Func Offset: 0
	// Line 9066, Address: 0x338234, Func Offset: 0x4
	// Line 9065, Address: 0x338238, Func Offset: 0x8
	// Line 9067, Address: 0x33823c, Func Offset: 0xc
	// Line 9065, Address: 0x338240, Func Offset: 0x10
	// Line 9067, Address: 0x338244, Func Offset: 0x14
	// Line 9065, Address: 0x338248, Func Offset: 0x18
	// Line 9066, Address: 0x33824c, Func Offset: 0x1c
	// Line 9067, Address: 0x338254, Func Offset: 0x24
	// Line 9068, Address: 0x33826c, Func Offset: 0x3c
	// Line 9069, Address: 0x3382b4, Func Offset: 0x84
	// Line 9072, Address: 0x3382c0, Func Offset: 0x90
	// Line 9073, Address: 0x3382f4, Func Offset: 0xc4
	// Func End, Address: 0x338318, Func Offset: 0xe8
}

// zEntPlayerBowlTargetUpdate__Ff
// Start address: 0x338320
void zEntPlayerBowlTargetUpdate(float32 dt)
{
	zEntPlayerBowlTarget* curr;
	zEntPlayerBowlTarget* next;
	xVec3* pos;
	// Line 8996, Address: 0x338320, Func Offset: 0
	// Line 8999, Address: 0x338338, Func Offset: 0x18
	// Line 9003, Address: 0x338340, Func Offset: 0x20
	// Line 9024, Address: 0x33835c, Func Offset: 0x3c
	// Line 9026, Address: 0x338398, Func Offset: 0x78
	// Line 9032, Address: 0x3383a0, Func Offset: 0x80
	// Line 9035, Address: 0x3383b0, Func Offset: 0x90
	// Line 9037, Address: 0x3383e4, Func Offset: 0xc4
	// Line 9040, Address: 0x3383ec, Func Offset: 0xcc
	// Line 9004, Address: 0x3383f4, Func Offset: 0xd4
	// Line 9005, Address: 0x3383f8, Func Offset: 0xd8
	// Line 9040, Address: 0x3383fc, Func Offset: 0xdc
	// Line 9013, Address: 0x338408, Func Offset: 0xe8
	// Line 9040, Address: 0x33840c, Func Offset: 0xec
	// Line 9013, Address: 0x338418, Func Offset: 0xf8
	// Line 9040, Address: 0x338420, Func Offset: 0x100
	// Line 9013, Address: 0x338428, Func Offset: 0x108
	// Line 9040, Address: 0x33842c, Func Offset: 0x10c
	// Line 9015, Address: 0x338444, Func Offset: 0x124
	// Line 9040, Address: 0x338450, Func Offset: 0x130
	// Line 9019, Address: 0x338470, Func Offset: 0x150
	// Line 9040, Address: 0x338478, Func Offset: 0x158
	// Line 9022, Address: 0x33848c, Func Offset: 0x16c
	// Line 9040, Address: 0x33849c, Func Offset: 0x17c
	// Func End, Address: 0x3384b4, Func Offset: 0x194
}

// zEntPlayerBowlTargetRemoveAll__Fv
// Start address: 0x3384c0
void zEntPlayerBowlTargetRemoveAll()
{
	zEntPlayerBowlTarget* curr;
	zEntPlayerBowlTarget* next;
	// Line 8963, Address: 0x3384c0, Func Offset: 0
	// Line 8966, Address: 0x3384d4, Func Offset: 0x14
	// Line 8968, Address: 0x3384dc, Func Offset: 0x1c
	// Line 8969, Address: 0x3384e0, Func Offset: 0x20
	// Line 8970, Address: 0x338520, Func Offset: 0x60
	// Line 8972, Address: 0x338528, Func Offset: 0x68
	// Line 8973, Address: 0x338530, Func Offset: 0x70
	// Line 8974, Address: 0x33853c, Func Offset: 0x7c
	// Line 8973, Address: 0x338544, Func Offset: 0x84
	// Line 8974, Address: 0x338548, Func Offset: 0x88
	// Func End, Address: 0x338564, Func Offset: 0xa4
}

// zEntPlayerBowlTarget_Remove__FP20zEntPlayerBowlTarget
// Start address: 0x338570
void zEntPlayerBowlTarget_Remove(zEntPlayerBowlTarget* target)
{
	// Line 8935, Address: 0x338570, Func Offset: 0
	// Line 8938, Address: 0x33857c, Func Offset: 0xc
	// Line 8940, Address: 0x33858c, Func Offset: 0x1c
	// Line 8946, Address: 0x33859c, Func Offset: 0x2c
	// Line 8947, Address: 0x3385b0, Func Offset: 0x40
	// Line 8948, Address: 0x3385c0, Func Offset: 0x50
	// Line 8951, Address: 0x3385cc, Func Offset: 0x5c
	// Line 8952, Address: 0x3385d0, Func Offset: 0x60
	// Line 8953, Address: 0x3385d4, Func Offset: 0x64
	// Line 8954, Address: 0x3385dc, Func Offset: 0x6c
	// Line 8955, Address: 0x3385e0, Func Offset: 0x70
	// Line 8956, Address: 0x3385e4, Func Offset: 0x74
	// Line 8957, Address: 0x3385ec, Func Offset: 0x7c
	// Func End, Address: 0x33861c, Func Offset: 0xac
}

// zEntPlayerBowlTarget_Add__FP5xVec3
// Start address: 0x338620
zEntPlayerBowlTarget* zEntPlayerBowlTarget_Add(xVec3* target)
{
	zEntPlayerBowlTarget* result;
	int32 i;
	// Line 8875, Address: 0x338620, Func Offset: 0
	// Line 8878, Address: 0x338624, Func Offset: 0x4
	// Line 8875, Address: 0x338628, Func Offset: 0x8
	// Line 8878, Address: 0x338638, Func Offset: 0x18
	// Line 8881, Address: 0x338648, Func Offset: 0x28
	// Line 8882, Address: 0x338688, Func Offset: 0x68
	// Line 8886, Address: 0x338690, Func Offset: 0x70
	// Line 8888, Address: 0x33869c, Func Offset: 0x7c
	// Line 8890, Address: 0x3386a8, Func Offset: 0x88
	// Line 8891, Address: 0x3386bc, Func Offset: 0x9c
	// Line 8893, Address: 0x3386c4, Func Offset: 0xa4
	// Line 8896, Address: 0x3386dc, Func Offset: 0xbc
	// Line 8898, Address: 0x3386e4, Func Offset: 0xc4
	// Line 8899, Address: 0x3386e8, Func Offset: 0xc8
	// Line 8902, Address: 0x3386f0, Func Offset: 0xd0
	// Line 8903, Address: 0x3386f4, Func Offset: 0xd4
	// Line 8905, Address: 0x3386f8, Func Offset: 0xd8
	// Line 8906, Address: 0x338704, Func Offset: 0xe4
	// Line 8915, Address: 0x338708, Func Offset: 0xe8
	// Line 8919, Address: 0x338710, Func Offset: 0xf0
	// Line 8909, Address: 0x338714, Func Offset: 0xf4
	// Line 8915, Address: 0x338718, Func Offset: 0xf8
	// Line 8919, Address: 0x338720, Func Offset: 0x100
	// Line 8915, Address: 0x338724, Func Offset: 0x104
	// Line 8916, Address: 0x338728, Func Offset: 0x108
	// Line 8915, Address: 0x33872c, Func Offset: 0x10c
	// Line 8909, Address: 0x338730, Func Offset: 0x110
	// Line 8915, Address: 0x338734, Func Offset: 0x114
	// Line 8909, Address: 0x338738, Func Offset: 0x118
	// Line 8915, Address: 0x33873c, Func Offset: 0x11c
	// Line 8916, Address: 0x338750, Func Offset: 0x130
	// Line 8915, Address: 0x338754, Func Offset: 0x134
	// Line 8919, Address: 0x338758, Func Offset: 0x138
	// Line 8920, Address: 0x338764, Func Offset: 0x144
	// Line 8919, Address: 0x338768, Func Offset: 0x148
	// Line 8920, Address: 0x33876c, Func Offset: 0x14c
	// Line 8921, Address: 0x338770, Func Offset: 0x150
	// Line 8922, Address: 0x33877c, Func Offset: 0x15c
	// Line 8926, Address: 0x338788, Func Offset: 0x168
	// Line 8929, Address: 0x3387c0, Func Offset: 0x1a0
	// Line 8926, Address: 0x3387c4, Func Offset: 0x1a4
	// Line 8928, Address: 0x3387c8, Func Offset: 0x1a8
	// Line 8926, Address: 0x3387cc, Func Offset: 0x1ac
	// Line 8928, Address: 0x3387e0, Func Offset: 0x1c0
	// Line 8930, Address: 0x3387f0, Func Offset: 0x1d0
	// Func End, Address: 0x338804, Func Offset: 0x1e4
}

// StartThrow__Fv
// Start address: 0x338810
void StartThrow()
{
	zNMECommon* npc;
	xMat3x3 targetingMat;
	xVec3 tgtpos;
	xVec3 tempPos;
	xMat4x3* tgtmat;
	float32 cDist;
	float32 min;
	float32 max;
	float32 cButtonOutTgtMult;
	xVec3 dir;
	xMat3x3 targetingMat;
	// Line 8760, Address: 0x338810, Func Offset: 0
	// Line 8762, Address: 0x338824, Func Offset: 0x14
	// Line 8766, Address: 0x33883c, Func Offset: 0x2c
	// Line 8769, Address: 0x33884c, Func Offset: 0x3c
	// Line 8772, Address: 0x33885c, Func Offset: 0x4c
	// Line 8773, Address: 0x338880, Func Offset: 0x70
	// Line 8776, Address: 0x338888, Func Offset: 0x78
	// Line 8780, Address: 0x3388b8, Func Offset: 0xa8
	// Line 8782, Address: 0x3388c8, Func Offset: 0xb8
	// Line 8787, Address: 0x3388f8, Func Offset: 0xe8
	// Line 8788, Address: 0x3388fc, Func Offset: 0xec
	// Line 8790, Address: 0x338900, Func Offset: 0xf0
	// Line 8789, Address: 0x338904, Func Offset: 0xf4
	// Line 8788, Address: 0x338908, Func Offset: 0xf8
	// Line 8789, Address: 0x33890c, Func Offset: 0xfc
	// Line 8790, Address: 0x338910, Func Offset: 0x100
	// Line 8791, Address: 0x338968, Func Offset: 0x158
	// Line 8792, Address: 0x338980, Func Offset: 0x170
	// Line 8794, Address: 0x338990, Func Offset: 0x180
	// Line 8796, Address: 0x3389a4, Func Offset: 0x194
	// Line 8800, Address: 0x3389ac, Func Offset: 0x19c
	// Line 8801, Address: 0x3389b0, Func Offset: 0x1a0
	// Line 8808, Address: 0x3389bc, Func Offset: 0x1ac
	// Line 8801, Address: 0x3389c0, Func Offset: 0x1b0
	// Line 8808, Address: 0x3389c4, Func Offset: 0x1b4
	// Line 8801, Address: 0x3389c8, Func Offset: 0x1b8
	// Line 8809, Address: 0x3389d0, Func Offset: 0x1c0
	// Line 8801, Address: 0x3389e0, Func Offset: 0x1d0
	// Line 8809, Address: 0x3389e4, Func Offset: 0x1d4
	// Line 8801, Address: 0x3389e8, Func Offset: 0x1d8
	// Line 8804, Address: 0x338a00, Func Offset: 0x1f0
	// Line 8810, Address: 0x338a14, Func Offset: 0x204
	// Line 8811, Address: 0x338a20, Func Offset: 0x210
	// Line 8812, Address: 0x338a24, Func Offset: 0x214
	// Line 8813, Address: 0x338a30, Func Offset: 0x220
	// Line 8815, Address: 0x338a34, Func Offset: 0x224
	// Line 8817, Address: 0x338a38, Func Offset: 0x228
	// Line 8819, Address: 0x338a40, Func Offset: 0x230
	// Line 8815, Address: 0x338a44, Func Offset: 0x234
	// Line 8817, Address: 0x338a4c, Func Offset: 0x23c
	// Line 8818, Address: 0x338a50, Func Offset: 0x240
	// Line 8817, Address: 0x338a58, Func Offset: 0x248
	// Line 8818, Address: 0x338a5c, Func Offset: 0x24c
	// Line 8819, Address: 0x338a64, Func Offset: 0x254
	// Line 8818, Address: 0x338a6c, Func Offset: 0x25c
	// Line 8819, Address: 0x338a74, Func Offset: 0x264
	// Line 8820, Address: 0x338a8c, Func Offset: 0x27c
	// Line 8821, Address: 0x338a9c, Func Offset: 0x28c
	// Line 8823, Address: 0x338aa4, Func Offset: 0x294
	// Line 8824, Address: 0x338aa8, Func Offset: 0x298
	// Line 8823, Address: 0x338ab8, Func Offset: 0x2a8
	// Line 8824, Address: 0x338abc, Func Offset: 0x2ac
	// Line 8825, Address: 0x338ac8, Func Offset: 0x2b8
	// Line 8829, Address: 0x338ad0, Func Offset: 0x2c0
	// Line 8830, Address: 0x338ad4, Func Offset: 0x2c4
	// Line 8829, Address: 0x338ad8, Func Offset: 0x2c8
	// Line 8830, Address: 0x338ae4, Func Offset: 0x2d4
	// Line 8829, Address: 0x338ae8, Func Offset: 0x2d8
	// Line 8830, Address: 0x338b18, Func Offset: 0x308
	// Line 8832, Address: 0x338b20, Func Offset: 0x310
	// Line 8833, Address: 0x338b40, Func Offset: 0x330
	// Line 8834, Address: 0x338b4c, Func Offset: 0x33c
	// Line 8838, Address: 0x338b54, Func Offset: 0x344
	// Line 8840, Address: 0x338b5c, Func Offset: 0x34c
	// Line 8841, Address: 0x338b7c, Func Offset: 0x36c
	// Line 8842, Address: 0x338b84, Func Offset: 0x374
	// Line 8843, Address: 0x338b94, Func Offset: 0x384
	// Line 8845, Address: 0x338b9c, Func Offset: 0x38c
	// Line 8846, Address: 0x338ba0, Func Offset: 0x390
	// Line 8845, Address: 0x338ba4, Func Offset: 0x394
	// Line 8846, Address: 0x338ba8, Func Offset: 0x398
	// Line 8848, Address: 0x338bac, Func Offset: 0x39c
	// Func End, Address: 0x338bbc, Func Offset: 0x3ac
}

// zEntPlayer_FindGrabEnt__FP4xEntP6zScenePi
// Start address: 0x338bc0
xEnt* zEntPlayer_FindGrabEnt(xEnt* ent, zScene* zsc, int32* failed)
{
	int32 i;
	xEnt* grabent;
	float32 dx;
	float32 dy;
	float32 dz;
	xEntBoulder* boul;
	// Line 8550, Address: 0x338bc0, Func Offset: 0
	// Line 8552, Address: 0x338bc4, Func Offset: 0x4
	// Line 8550, Address: 0x338bc8, Func Offset: 0x8
	// Line 8552, Address: 0x338bec, Func Offset: 0x2c
	// Line 8557, Address: 0x338bf8, Func Offset: 0x38
	// Line 8558, Address: 0x338c0c, Func Offset: 0x4c
	// Line 8561, Address: 0x338c18, Func Offset: 0x58
	// Line 8568, Address: 0x338c5c, Func Offset: 0x9c
	// Line 8574, Address: 0x338c6c, Func Offset: 0xac
	// Line 8575, Address: 0x338c70, Func Offset: 0xb0
	// Line 8577, Address: 0x338c78, Func Offset: 0xb8
	// Line 8578, Address: 0x338c7c, Func Offset: 0xbc
	// Line 8574, Address: 0x338c80, Func Offset: 0xc0
	// Line 8575, Address: 0x338c84, Func Offset: 0xc4
	// Line 8577, Address: 0x338c8c, Func Offset: 0xcc
	// Line 8578, Address: 0x338c90, Func Offset: 0xd0
	// Line 8575, Address: 0x338c94, Func Offset: 0xd4
	// Line 8577, Address: 0x338c98, Func Offset: 0xd8
	// Line 8578, Address: 0x338c9c, Func Offset: 0xdc
	// Line 8581, Address: 0x338cb4, Func Offset: 0xf4
	// Line 8587, Address: 0x338cfc, Func Offset: 0x13c
	// Line 8588, Address: 0x338d0c, Func Offset: 0x14c
	// Line 8592, Address: 0x338d40, Func Offset: 0x180
	// Line 8593, Address: 0x338d54, Func Offset: 0x194
	// Line 8594, Address: 0x338d6c, Func Offset: 0x1ac
	// Line 8597, Address: 0x338d70, Func Offset: 0x1b0
	// Line 8601, Address: 0x338d80, Func Offset: 0x1c0
	// Line 8610, Address: 0x338d90, Func Offset: 0x1d0
	// Line 8617, Address: 0x338de0, Func Offset: 0x220
	// Line 8619, Address: 0x338de8, Func Offset: 0x228
	// Line 8553, Address: 0x338df0, Func Offset: 0x230
	// Line 8619, Address: 0x338df8, Func Offset: 0x238
	// Line 8569, Address: 0x338e1c, Func Offset: 0x25c
	// Line 8570, Address: 0x338e20, Func Offset: 0x260
	// Line 8572, Address: 0x338e24, Func Offset: 0x264
	// Line 8619, Address: 0x338e30, Func Offset: 0x270
	// Line 8603, Address: 0x338e34, Func Offset: 0x274
	// Line 8619, Address: 0x338e38, Func Offset: 0x278
	// Line 8621, Address: 0x338e58, Func Offset: 0x298
	// Line 8622, Address: 0x338e64, Func Offset: 0x2a4
	// Line 8624, Address: 0x338e6c, Func Offset: 0x2ac
	// Line 8626, Address: 0x338e80, Func Offset: 0x2c0
	// Line 8627, Address: 0x338e84, Func Offset: 0x2c4
	// Func End, Address: 0x338ea8, Func Offset: 0x2e8
}

// zEntPlayerKnockToSafety__FP4xEnt
// Start address: 0x338eb0
int32 zEntPlayerKnockToSafety(xEnt* ent)
{
	float32 diffX;
	float32 diffY;
	float32 diffZ;
	float32 popheight;
	float32 ttot;
	float32 velXZ;
	// Line 8509, Address: 0x338eb0, Func Offset: 0
	// Line 8515, Address: 0x338ec4, Func Offset: 0x14
	// Line 8509, Address: 0x338ec8, Func Offset: 0x18
	// Line 8515, Address: 0x338ecc, Func Offset: 0x1c
	// Line 8517, Address: 0x338ed8, Func Offset: 0x28
	// Line 8519, Address: 0x338ee0, Func Offset: 0x30
	// Line 8509, Address: 0x338ee8, Func Offset: 0x38
	// Line 8517, Address: 0x338eec, Func Offset: 0x3c
	// Line 8515, Address: 0x338ef0, Func Offset: 0x40
	// Line 8517, Address: 0x338ef8, Func Offset: 0x48
	// Line 8516, Address: 0x338efc, Func Offset: 0x4c
	// Line 8515, Address: 0x338f00, Func Offset: 0x50
	// Line 8519, Address: 0x338f04, Func Offset: 0x54
	// Line 8518, Address: 0x338f08, Func Offset: 0x58
	// Line 8519, Address: 0x338f1c, Func Offset: 0x6c
	// Line 8527, Address: 0x338f54, Func Offset: 0xa4
	// Line 8528, Address: 0x338f70, Func Offset: 0xc0
	// Line 8527, Address: 0x338f74, Func Offset: 0xc4
	// Line 8536, Address: 0x338f80, Func Offset: 0xd0
	// Line 8528, Address: 0x338f84, Func Offset: 0xd4
	// Line 8537, Address: 0x338f88, Func Offset: 0xd8
	// Line 8529, Address: 0x338f90, Func Offset: 0xe0
	// Line 8528, Address: 0x338f94, Func Offset: 0xe4
	// Line 8537, Address: 0x338f98, Func Offset: 0xe8
	// Line 8528, Address: 0x338f9c, Func Offset: 0xec
	// Line 8537, Address: 0x338fa0, Func Offset: 0xf0
	// Line 8528, Address: 0x338fa4, Func Offset: 0xf4
	// Line 8529, Address: 0x338fac, Func Offset: 0xfc
	// Line 8536, Address: 0x338fbc, Func Offset: 0x10c
	// Line 8531, Address: 0x338fc4, Func Offset: 0x114
	// Line 8537, Address: 0x338fd0, Func Offset: 0x120
	// Line 8541, Address: 0x338fe4, Func Offset: 0x134
	// Line 8542, Address: 0x338ff0, Func Offset: 0x140
	// Line 8545, Address: 0x338ffc, Func Offset: 0x14c
	// Line 8544, Address: 0x339000, Func Offset: 0x150
	// Line 8545, Address: 0x339004, Func Offset: 0x154
	// Line 8544, Address: 0x339008, Func Offset: 0x158
	// Line 8547, Address: 0x33900c, Func Offset: 0x15c
	// Line 8510, Address: 0x339014, Func Offset: 0x164
	// Line 8522, Address: 0x33901c, Func Offset: 0x16c
	// Line 8547, Address: 0x339028, Func Offset: 0x178
	// Line 8540, Address: 0x339034, Func Offset: 0x184
	// Line 8548, Address: 0x33903c, Func Offset: 0x18c
	// Func End, Address: 0x339044, Func Offset: 0x194
}

// zEntPlayer_PredictPos__FP5xVec3ffi
// Start address: 0x339050
void zEntPlayer_PredictPos(xVec3* pos, float32 timeIntoFuture, float32 leadFactor, int32 useTurn)
{
	zPlayerGlobals* g;
	float32 useVel;
	float32 useAngV;
	xMat3x3 rotMat;
	// Line 8475, Address: 0x339050, Func Offset: 0
	// Line 8476, Address: 0x339064, Func Offset: 0x14
	// Line 8478, Address: 0x33906c, Func Offset: 0x1c
	// Line 8479, Address: 0x339070, Func Offset: 0x20
	// Line 8481, Address: 0x339074, Func Offset: 0x24
	// Line 8484, Address: 0x3390b4, Func Offset: 0x64
	// Line 8485, Address: 0x3390c4, Func Offset: 0x74
	// Line 8487, Address: 0x339114, Func Offset: 0xc4
	// Line 8488, Address: 0x339140, Func Offset: 0xf0
	// Line 8489, Address: 0x339148, Func Offset: 0xf8
	// Line 8491, Address: 0x33914c, Func Offset: 0xfc
	// Line 8489, Address: 0x339160, Func Offset: 0x110
	// Line 8491, Address: 0x339180, Func Offset: 0x130
	// Line 8492, Address: 0x33918c, Func Offset: 0x13c
	// Line 8497, Address: 0x3391cc, Func Offset: 0x17c
	// Func End, Address: 0x3391e0, Func Offset: 0x190
}

// zEntPlayer_PredictionUpdate__FP4xEntf
// Start address: 0x3391e0
void zEntPlayer_PredictionUpdate(xEnt* ent, float32 dt)
{
	zPlayerGlobals* g;
	float32 lastVel;
	float32 newAngV;
	float32 r;
	// Line 8423, Address: 0x3391e0, Func Offset: 0
	// Line 8433, Address: 0x3391e4, Func Offset: 0x4
	// Line 8423, Address: 0x3391e8, Func Offset: 0x8
	// Line 8434, Address: 0x3391ec, Func Offset: 0xc
	// Line 8423, Address: 0x3391f0, Func Offset: 0x10
	// Line 8433, Address: 0x3391f4, Func Offset: 0x14
	// Line 8423, Address: 0x3391f8, Func Offset: 0x18
	// Line 8424, Address: 0x339204, Func Offset: 0x24
	// Line 8423, Address: 0x339208, Func Offset: 0x28
	// Line 8436, Address: 0x33920c, Func Offset: 0x2c
	// Line 8423, Address: 0x339210, Func Offset: 0x30
	// Line 8436, Address: 0x339214, Func Offset: 0x34
	// Line 8423, Address: 0x339218, Func Offset: 0x38
	// Line 8424, Address: 0x33921c, Func Offset: 0x3c
	// Line 8430, Address: 0x339220, Func Offset: 0x40
	// Line 8433, Address: 0x339224, Func Offset: 0x44
	// Line 8435, Address: 0x339228, Func Offset: 0x48
	// Line 8429, Address: 0x33922c, Func Offset: 0x4c
	// Line 8430, Address: 0x339238, Func Offset: 0x58
	// Line 8432, Address: 0x33923c, Func Offset: 0x5c
	// Line 8436, Address: 0x339244, Func Offset: 0x64
	// Line 8432, Address: 0x33924c, Func Offset: 0x6c
	// Line 8433, Address: 0x339250, Func Offset: 0x70
	// Line 8432, Address: 0x339254, Func Offset: 0x74
	// Line 8433, Address: 0x339260, Func Offset: 0x80
	// Line 8432, Address: 0x339264, Func Offset: 0x84
	// Line 8433, Address: 0x33926c, Func Offset: 0x8c
	// Line 8432, Address: 0x339270, Func Offset: 0x90
	// Line 8435, Address: 0x339278, Func Offset: 0x98
	// Line 8432, Address: 0x33927c, Func Offset: 0x9c
	// Line 8434, Address: 0x339280, Func Offset: 0xa0
	// Line 8433, Address: 0x339284, Func Offset: 0xa4
	// Line 8435, Address: 0x33928c, Func Offset: 0xac
	// Line 8433, Address: 0x339294, Func Offset: 0xb4
	// Line 8435, Address: 0x339298, Func Offset: 0xb8
	// Line 8436, Address: 0x33929c, Func Offset: 0xbc
	// Line 8437, Address: 0x3392a8, Func Offset: 0xc8
	// Line 8440, Address: 0x3392d8, Func Offset: 0xf8
	// Line 8443, Address: 0x3392ec, Func Offset: 0x10c
	// Line 8440, Address: 0x3392f0, Func Offset: 0x110
	// Line 8443, Address: 0x3392f4, Func Offset: 0x114
	// Line 8440, Address: 0x3392f8, Func Offset: 0x118
	// Line 8443, Address: 0x339308, Func Offset: 0x128
	// Line 8440, Address: 0x33930c, Func Offset: 0x12c
	// Line 8443, Address: 0x339310, Func Offset: 0x130
	// Line 8445, Address: 0x33931c, Func Offset: 0x13c
	// Line 8446, Address: 0x339320, Func Offset: 0x140
	// Line 8445, Address: 0x339324, Func Offset: 0x144
	// Line 8446, Address: 0x339328, Func Offset: 0x148
	// Line 8445, Address: 0x339330, Func Offset: 0x150
	// Line 8446, Address: 0x33933c, Func Offset: 0x15c
	// Line 8448, Address: 0x33936c, Func Offset: 0x18c
	// Line 8449, Address: 0x339394, Func Offset: 0x1b4
	// Line 8450, Address: 0x3393a0, Func Offset: 0x1c0
	// Line 8451, Address: 0x3393ac, Func Offset: 0x1cc
	// Line 8452, Address: 0x3393b4, Func Offset: 0x1d4
	// Line 8455, Address: 0x3393c4, Func Offset: 0x1e4
	// Line 8456, Address: 0x3393d0, Func Offset: 0x1f0
	// Line 8458, Address: 0x3393e0, Func Offset: 0x200
	// Line 8456, Address: 0x3393e8, Func Offset: 0x208
	// Line 8458, Address: 0x3393fc, Func Offset: 0x21c
	// Line 8456, Address: 0x339404, Func Offset: 0x224
	// Line 8458, Address: 0x339408, Func Offset: 0x228
	// Line 8471, Address: 0x339430, Func Offset: 0x250
	// Line 8461, Address: 0x339468, Func Offset: 0x288
	// Line 8460, Address: 0x33946c, Func Offset: 0x28c
	// Line 8461, Address: 0x339470, Func Offset: 0x290
	// Line 8463, Address: 0x339474, Func Offset: 0x294
	// Line 8471, Address: 0x339478, Func Offset: 0x298
	// Line 8463, Address: 0x33947c, Func Offset: 0x29c
	// Line 8471, Address: 0x339484, Func Offset: 0x2a4
	// Line 8464, Address: 0x3394a4, Func Offset: 0x2c4
	// Line 8471, Address: 0x3394a8, Func Offset: 0x2c8
	// Line 8464, Address: 0x3394b0, Func Offset: 0x2d0
	// Line 8471, Address: 0x3394b4, Func Offset: 0x2d4
	// Line 8464, Address: 0x3394bc, Func Offset: 0x2dc
	// Line 8468, Address: 0x3394c0, Func Offset: 0x2e0
	// Line 8471, Address: 0x3394d0, Func Offset: 0x2f0
	// Func End, Address: 0x3394f0, Func Offset: 0x310
}

// zEntPlayer_BoulderVehicleUpdate__FP4xEntP6xScenef
// Start address: 0x3394f0
void zEntPlayer_BoulderVehicleUpdate(xEnt* ent, xScene* sc, float32 dt)
{
	xEntBoulder* shouldDamagePlayer;
	uint8 chkBackup;
	uint8 penBackup;
	xVec2 inputDefl;
	xMat4x3* pCameraMat;
	xEntCollis collis;
	uint8 collisionWithPlat;
	int32 i;
	xEnt* dyn;
	zPlatform* plat;
	xEntBoulder* boul;
	float32 padDefl;
	xVec3 rotFudge;
	float32 ang;
	xMat3x3 rotM;
	xVec3 heading;
	float32 angle;
	float32 mag;
	// Line 8107, Address: 0x3394f0, Func Offset: 0
	// Line 8108, Address: 0x3394f8, Func Offset: 0x8
	// Line 8107, Address: 0x3394fc, Func Offset: 0xc
	// Line 8108, Address: 0x339530, Func Offset: 0x40
	// Line 8119, Address: 0x33953c, Func Offset: 0x4c
	// Line 8117, Address: 0x339540, Func Offset: 0x50
	// Line 8122, Address: 0x339544, Func Offset: 0x54
	// Line 8130, Address: 0x339550, Func Offset: 0x60
	// Line 8123, Address: 0x339558, Func Offset: 0x68
	// Line 8125, Address: 0x339574, Func Offset: 0x84
	// Line 8126, Address: 0x33957c, Func Offset: 0x8c
	// Line 8127, Address: 0x339584, Func Offset: 0x94
	// Line 8128, Address: 0x339588, Func Offset: 0x98
	// Line 8130, Address: 0x339590, Func Offset: 0xa0
	// Line 8133, Address: 0x3395ac, Func Offset: 0xbc
	// Line 8135, Address: 0x3395c8, Func Offset: 0xd8
	// Line 8139, Address: 0x3395cc, Func Offset: 0xdc
	// Line 8135, Address: 0x3395d8, Func Offset: 0xe8
	// Line 8139, Address: 0x3395dc, Func Offset: 0xec
	// Line 8140, Address: 0x3395f4, Func Offset: 0x104
	// Line 8143, Address: 0x339604, Func Offset: 0x114
	// Line 8146, Address: 0x339614, Func Offset: 0x124
	// Line 8149, Address: 0x339624, Func Offset: 0x134
	// Line 8154, Address: 0x339634, Func Offset: 0x144
	// Line 8157, Address: 0x339738, Func Offset: 0x248
	// Line 8165, Address: 0x339824, Func Offset: 0x334
	// Line 8163, Address: 0x339830, Func Offset: 0x340
	// Line 8161, Address: 0x339834, Func Offset: 0x344
	// Line 8162, Address: 0x339838, Func Offset: 0x348
	// Line 8164, Address: 0x339844, Func Offset: 0x354
	// Line 8165, Address: 0x339848, Func Offset: 0x358
	// Line 8166, Address: 0x339854, Func Offset: 0x364
	// Line 8167, Address: 0x339878, Func Offset: 0x388
	// Line 8168, Address: 0x339880, Func Offset: 0x390
	// Line 8170, Address: 0x339898, Func Offset: 0x3a8
	// Line 8173, Address: 0x33989c, Func Offset: 0x3ac
	// Line 8170, Address: 0x3398a0, Func Offset: 0x3b0
	// Line 8173, Address: 0x3398a4, Func Offset: 0x3b4
	// Line 8171, Address: 0x3398ac, Func Offset: 0x3bc
	// Line 8172, Address: 0x3398b4, Func Offset: 0x3c4
	// Line 8173, Address: 0x3398b8, Func Offset: 0x3c8
	// Line 8174, Address: 0x3398c4, Func Offset: 0x3d4
	// Line 8175, Address: 0x3398e8, Func Offset: 0x3f8
	// Line 8176, Address: 0x3398f0, Func Offset: 0x400
	// Line 8178, Address: 0x3398fc, Func Offset: 0x40c
	// Line 8183, Address: 0x33991c, Func Offset: 0x42c
	// Line 8178, Address: 0x339920, Func Offset: 0x430
	// Line 8180, Address: 0x33995c, Func Offset: 0x46c
	// Line 8183, Address: 0x3399a4, Func Offset: 0x4b4
	// Line 8186, Address: 0x3399b0, Func Offset: 0x4c0
	// Line 8187, Address: 0x3399d4, Func Offset: 0x4e4
	// Line 8191, Address: 0x3399dc, Func Offset: 0x4ec
	// Line 8197, Address: 0x339a00, Func Offset: 0x510
	// Line 8198, Address: 0x339a28, Func Offset: 0x538
	// Line 8199, Address: 0x339a30, Func Offset: 0x540
	// Line 8198, Address: 0x339a34, Func Offset: 0x544
	// Line 8199, Address: 0x339a38, Func Offset: 0x548
	// Line 8206, Address: 0x339a44, Func Offset: 0x554
	// Line 8208, Address: 0x339a78, Func Offset: 0x588
	// Line 8212, Address: 0x339a88, Func Offset: 0x598
	// Line 8215, Address: 0x339a8c, Func Offset: 0x59c
	// Line 8217, Address: 0x339a94, Func Offset: 0x5a4
	// Line 8221, Address: 0x339ab8, Func Offset: 0x5c8
	// Line 8225, Address: 0x339acc, Func Offset: 0x5dc
	// Line 8226, Address: 0x339ad4, Func Offset: 0x5e4
	// Line 8229, Address: 0x339ad8, Func Offset: 0x5e8
	// Line 8232, Address: 0x339af4, Func Offset: 0x604
	// Line 8235, Address: 0x339b08, Func Offset: 0x618
	// Line 8241, Address: 0x339b10, Func Offset: 0x620
	// Line 8238, Address: 0x339b14, Func Offset: 0x624
	// Line 8241, Address: 0x339b18, Func Offset: 0x628
	// Line 8248, Address: 0x339b20, Func Offset: 0x630
	// Line 8250, Address: 0x339b40, Func Offset: 0x650
	// Line 8253, Address: 0x339b48, Func Offset: 0x658
	// Line 8254, Address: 0x339b50, Func Offset: 0x660
	// Line 8257, Address: 0x339b54, Func Offset: 0x664
	// Line 8258, Address: 0x339b58, Func Offset: 0x668
	// Line 8260, Address: 0x339b64, Func Offset: 0x674
	// Line 8267, Address: 0x339b98, Func Offset: 0x6a8
	// Line 8260, Address: 0x339b9c, Func Offset: 0x6ac
	// Line 8266, Address: 0x339ba0, Func Offset: 0x6b0
	// Line 8267, Address: 0x339ba4, Func Offset: 0x6b4
	// Line 8266, Address: 0x339bac, Func Offset: 0x6bc
	// Line 8267, Address: 0x339bb0, Func Offset: 0x6c0
	// Line 8272, Address: 0x339bd8, Func Offset: 0x6e8
	// Line 8269, Address: 0x339be0, Func Offset: 0x6f0
	// Line 8272, Address: 0x339c44, Func Offset: 0x754
	// Line 8273, Address: 0x339c4c, Func Offset: 0x75c
	// Line 8274, Address: 0x339c90, Func Offset: 0x7a0
	// Line 8278, Address: 0x339c94, Func Offset: 0x7a4
	// Line 8274, Address: 0x339c98, Func Offset: 0x7a8
	// Line 8278, Address: 0x339ca0, Func Offset: 0x7b0
	// Line 8279, Address: 0x339cb8, Func Offset: 0x7c8
	// Line 8278, Address: 0x339cbc, Func Offset: 0x7cc
	// Line 8279, Address: 0x339cc4, Func Offset: 0x7d4
	// Line 8283, Address: 0x339ccc, Func Offset: 0x7dc
	// Line 8309, Address: 0x339ce8, Func Offset: 0x7f8
	// Line 8313, Address: 0x339cec, Func Offset: 0x7fc
	// Line 8309, Address: 0x339cf0, Func Offset: 0x800
	// Line 8311, Address: 0x339d10, Func Offset: 0x820
	// Line 8313, Address: 0x339d28, Func Offset: 0x838
	// Line 8315, Address: 0x339d40, Func Offset: 0x850
	// Line 8318, Address: 0x339d5c, Func Offset: 0x86c
	// Line 8323, Address: 0x339d6c, Func Offset: 0x87c
	// Line 8318, Address: 0x339d70, Func Offset: 0x880
	// Line 8323, Address: 0x339d74, Func Offset: 0x884
	// Line 8324, Address: 0x339da4, Func Offset: 0x8b4
	// Line 8325, Address: 0x339dc0, Func Offset: 0x8d0
	// Line 8326, Address: 0x339dd0, Func Offset: 0x8e0
	// Line 8328, Address: 0x339de0, Func Offset: 0x8f0
	// Line 8329, Address: 0x339de8, Func Offset: 0x8f8
	// Line 8331, Address: 0x339df0, Func Offset: 0x900
	// Line 8338, Address: 0x339dfc, Func Offset: 0x90c
	// Line 8339, Address: 0x339e00, Func Offset: 0x910
	// Line 8338, Address: 0x339e04, Func Offset: 0x914
	// Line 8339, Address: 0x339e08, Func Offset: 0x918
	// Line 8338, Address: 0x339e0c, Func Offset: 0x91c
	// Line 8339, Address: 0x339e28, Func Offset: 0x938
	// Line 8340, Address: 0x339e30, Func Offset: 0x940
	// Line 8341, Address: 0x339e38, Func Offset: 0x948
	// Line 8343, Address: 0x339e4c, Func Offset: 0x95c
	// Line 8344, Address: 0x339e58, Func Offset: 0x968
	// Line 8350, Address: 0x339e5c, Func Offset: 0x96c
	// Line 8344, Address: 0x339e60, Func Offset: 0x970
	// Line 8349, Address: 0x339ea0, Func Offset: 0x9b0
	// Line 8350, Address: 0x339ea4, Func Offset: 0x9b4
	// Line 8344, Address: 0x339ea8, Func Offset: 0x9b8
	// Line 8349, Address: 0x339f2c, Func Offset: 0xa3c
	// Line 8350, Address: 0x339f38, Func Offset: 0xa48
	// Line 8352, Address: 0x339f50, Func Offset: 0xa60
	// Line 8353, Address: 0x339f5c, Func Offset: 0xa6c
	// Line 8354, Address: 0x339f64, Func Offset: 0xa74
	// Line 8398, Address: 0x339f6c, Func Offset: 0xa7c
	// Line 8399, Address: 0x339f78, Func Offset: 0xa88
	// Line 8401, Address: 0x339f80, Func Offset: 0xa90
	// Line 8403, Address: 0x339f90, Func Offset: 0xaa0
	// Line 8404, Address: 0x339f9c, Func Offset: 0xaac
	// Line 8405, Address: 0x339fa4, Func Offset: 0xab4
	// Line 8407, Address: 0x339fb4, Func Offset: 0xac4
	// Line 8409, Address: 0x339fbc, Func Offset: 0xacc
	// Line 8416, Address: 0x339fd0, Func Offset: 0xae0
	// Line 8130, Address: 0x339fdc, Func Offset: 0xaec
	// Line 8416, Address: 0x339fe0, Func Offset: 0xaf0
	// Line 8130, Address: 0x339ff8, Func Offset: 0xb08
	// Line 8416, Address: 0x339ffc, Func Offset: 0xb0c
	// Line 8130, Address: 0x33a020, Func Offset: 0xb30
	// Line 8416, Address: 0x33a024, Func Offset: 0xb34
	// Line 8130, Address: 0x33a048, Func Offset: 0xb58
	// Line 8416, Address: 0x33a050, Func Offset: 0xb60
	// Line 8141, Address: 0x33a05c, Func Offset: 0xb6c
	// Line 8144, Address: 0x33a068, Func Offset: 0xb78
	// Line 8147, Address: 0x33a074, Func Offset: 0xb84
	// Line 8150, Address: 0x33a080, Func Offset: 0xb90
	// Line 8416, Address: 0x33a08c, Func Offset: 0xb9c
	// Line 8261, Address: 0x33a09c, Func Offset: 0xbac
	// Line 8416, Address: 0x33a0a8, Func Offset: 0xbb8
	// Line 8299, Address: 0x33a0c4, Func Offset: 0xbd4
	// Line 8416, Address: 0x33a0c8, Func Offset: 0xbd8
	// Line 8289, Address: 0x33a0cc, Func Offset: 0xbdc
	// Line 8293, Address: 0x33a0d0, Func Offset: 0xbe0
	// Line 8295, Address: 0x33a0e0, Func Offset: 0xbf0
	// Line 8289, Address: 0x33a0e4, Func Offset: 0xbf4
	// Line 8293, Address: 0x33a0e8, Func Offset: 0xbf8
	// Line 8416, Address: 0x33a0f0, Func Offset: 0xc00
	// Line 8293, Address: 0x33a0f4, Func Offset: 0xc04
	// Line 8416, Address: 0x33a0f8, Func Offset: 0xc08
	// Line 8295, Address: 0x33a100, Func Offset: 0xc10
	// Line 8416, Address: 0x33a104, Func Offset: 0xc14
	// Line 8295, Address: 0x33a110, Func Offset: 0xc20
	// Line 8416, Address: 0x33a114, Func Offset: 0xc24
	// Line 8295, Address: 0x33a118, Func Offset: 0xc28
	// Line 8416, Address: 0x33a11c, Func Offset: 0xc2c
	// Line 8295, Address: 0x33a120, Func Offset: 0xc30
	// Line 8416, Address: 0x33a128, Func Offset: 0xc38
	// Line 8295, Address: 0x33a130, Func Offset: 0xc40
	// Line 8416, Address: 0x33a134, Func Offset: 0xc44
	// Line 8299, Address: 0x33a140, Func Offset: 0xc50
	// Line 8416, Address: 0x33a154, Func Offset: 0xc64
	// Line 8301, Address: 0x33a164, Func Offset: 0xc74
	// Line 8416, Address: 0x33a168, Func Offset: 0xc78
	// Line 8302, Address: 0x33a1a4, Func Offset: 0xcb4
	// Line 8416, Address: 0x33a1a8, Func Offset: 0xcb8
	// Line 8352, Address: 0x33a1c4, Func Offset: 0xcd4
	// Line 8416, Address: 0x33a1cc, Func Offset: 0xcdc
	// Line 8352, Address: 0x33a1d0, Func Offset: 0xce0
	// Line 8416, Address: 0x33a1d4, Func Offset: 0xce4
	// Line 8352, Address: 0x33a1d8, Func Offset: 0xce8
	// Line 8416, Address: 0x33a1dc, Func Offset: 0xcec
	// Line 8352, Address: 0x33a1e4, Func Offset: 0xcf4
	// Line 8416, Address: 0x33a1ec, Func Offset: 0xcfc
	// Line 8384, Address: 0x33a258, Func Offset: 0xd68
	// Line 8416, Address: 0x33a25c, Func Offset: 0xd6c
	// Line 8384, Address: 0x33a260, Func Offset: 0xd70
	// Line 8416, Address: 0x33a264, Func Offset: 0xd74
	// Line 8384, Address: 0x33a26c, Func Offset: 0xd7c
	// Line 8416, Address: 0x33a270, Func Offset: 0xd80
	// Line 8384, Address: 0x33a280, Func Offset: 0xd90
	// Line 8416, Address: 0x33a288, Func Offset: 0xd98
	// Line 8384, Address: 0x33a2b8, Func Offset: 0xdc8
	// Line 8416, Address: 0x33a2bc, Func Offset: 0xdcc
	// Line 8384, Address: 0x33a2c4, Func Offset: 0xdd4
	// Line 8416, Address: 0x33a2c8, Func Offset: 0xdd8
	// Line 8384, Address: 0x33a2d0, Func Offset: 0xde0
	// Line 8416, Address: 0x33a2d8, Func Offset: 0xde8
	// Line 8384, Address: 0x33a2e8, Func Offset: 0xdf8
	// Line 8416, Address: 0x33a2ec, Func Offset: 0xdfc
	// Line 8384, Address: 0x33a2f4, Func Offset: 0xe04
	// Line 8416, Address: 0x33a2f8, Func Offset: 0xe08
	// Line 8384, Address: 0x33a2fc, Func Offset: 0xe0c
	// Line 8416, Address: 0x33a300, Func Offset: 0xe10
	// Line 8384, Address: 0x33a310, Func Offset: 0xe20
	// Line 8416, Address: 0x33a314, Func Offset: 0xe24
	// Line 8384, Address: 0x33a31c, Func Offset: 0xe2c
	// Line 8416, Address: 0x33a320, Func Offset: 0xe30
	// Line 8384, Address: 0x33a324, Func Offset: 0xe34
	// Line 8416, Address: 0x33a328, Func Offset: 0xe38
	// Line 8391, Address: 0x33a33c, Func Offset: 0xe4c
	// Line 8416, Address: 0x33a348, Func Offset: 0xe58
	// Line 8394, Address: 0x33a350, Func Offset: 0xe60
	// Line 8413, Address: 0x33a358, Func Offset: 0xe68
	// Line 8416, Address: 0x33a35c, Func Offset: 0xe6c
	// Line 8413, Address: 0x33a390, Func Offset: 0xea0
	// Line 8416, Address: 0x33a394, Func Offset: 0xea4
	// Line 8413, Address: 0x33a3b0, Func Offset: 0xec0
	// Line 8416, Address: 0x33a3b4, Func Offset: 0xec4
	// Line 8413, Address: 0x33a3b8, Func Offset: 0xec8
	// Line 8416, Address: 0x33a3bc, Func Offset: 0xecc
	// Line 8413, Address: 0x33a3c0, Func Offset: 0xed0
	// Line 8416, Address: 0x33a3c4, Func Offset: 0xed4
	// Line 8413, Address: 0x33a3c8, Func Offset: 0xed8
	// Line 8416, Address: 0x33a3d0, Func Offset: 0xee0
	// Line 8413, Address: 0x33a3dc, Func Offset: 0xeec
	// Line 8416, Address: 0x33a3e4, Func Offset: 0xef4
	// Line 8413, Address: 0x33a3f4, Func Offset: 0xf04
	// Line 8416, Address: 0x33a3f8, Func Offset: 0xf08
	// Line 8413, Address: 0x33a430, Func Offset: 0xf40
	// Line 8416, Address: 0x33a438, Func Offset: 0xf48
	// Func End, Address: 0x33a470, Func Offset: 0xf80
}

// zEntPlayer_BoulderVehicleMove__FP4xEntP6xScenefP9xEntFrame
// Start address: 0x33a470
void zEntPlayer_BoulderVehicleMove(xEntFrame* frame)
{
	// Line 8105, Address: 0x33a470, Func Offset: 0
	// Line 8106, Address: 0x33a474, Func Offset: 0x4
	// Func End, Address: 0x33a47c, Func Offset: 0xc
}

// zEntPlayer_BoulderVehicleRender__FP4zEnt
// Start address: 0x33a480
void zEntPlayer_BoulderVehicleRender()
{
	// Line 8102, Address: 0x33a480, Func Offset: 0
	// Func End, Address: 0x33a488, Func Offset: 0x8
}

// BoulderVEventCB__FP5xBaseP5xBaseUiPCfP5xBaseUi
// Start address: 0x33a490
void BoulderVEventCB()
{
	// Line 8100, Address: 0x33a490, Func Offset: 0
	// Func End, Address: 0x33a498, Func Offset: 0x8
}

// getPadDefl__FP13_tagPadAnalogP5xVec2
// Start address: 0x33a4a0
void getPadDefl(_tagPadAnalog* stick, xVec2* v)
{
	// Line 8072, Address: 0x33a4a0, Func Offset: 0
	// Line 8074, Address: 0x33a4a4, Func Offset: 0x4
	// Line 8073, Address: 0x33a4a8, Func Offset: 0x8
	// Line 8074, Address: 0x33a4ac, Func Offset: 0xc
	// Line 8073, Address: 0x33a4b0, Func Offset: 0x10
	// Line 8074, Address: 0x33a4b4, Func Offset: 0x14
	// Line 8075, Address: 0x33a4e4, Func Offset: 0x44
	// Line 8076, Address: 0x33a50c, Func Offset: 0x6c
	// Line 8077, Address: 0x33a514, Func Offset: 0x74
	// Line 8076, Address: 0x33a518, Func Offset: 0x78
	// Line 8077, Address: 0x33a51c, Func Offset: 0x7c
	// Line 8078, Address: 0x33a534, Func Offset: 0x94
	// Line 8083, Address: 0x33a5a0, Func Offset: 0x100
	// Line 8084, Address: 0x33a5d8, Func Offset: 0x138
	// Line 8085, Address: 0x33a600, Func Offset: 0x160
	// Line 8086, Address: 0x33a60c, Func Offset: 0x16c
	// Line 8087, Address: 0x33a63c, Func Offset: 0x19c
	// Line 8088, Address: 0x33a660, Func Offset: 0x1c0
	// Line 8089, Address: 0x33a698, Func Offset: 0x1f8
	// Line 8092, Address: 0x33a6b8, Func Offset: 0x218
	// Line 8079, Address: 0x33a6c0, Func Offset: 0x220
	// Line 8092, Address: 0x33a6d0, Func Offset: 0x230
	// Line 8079, Address: 0x33a6d4, Func Offset: 0x234
	// Line 8092, Address: 0x33a6d8, Func Offset: 0x238
	// Line 8080, Address: 0x33a6e8, Func Offset: 0x248
	// Line 8092, Address: 0x33a6f8, Func Offset: 0x258
	// Line 8080, Address: 0x33a708, Func Offset: 0x268
	// Line 8092, Address: 0x33a74c, Func Offset: 0x2ac
	// Func End, Address: 0x33a754, Func Offset: 0x2b4
}

// zEntPlayer_SpringboardFX__FP4xEntf
// Start address: 0x33a760
void zEntPlayer_SpringboardFX(xEnt* ent, float32 dt)
{
	xParEmitterCustomSettings info;
	float32 size;
	float32 sLastSpringboardBubbleEmit;
	// Line 7985, Address: 0x33a760, Func Offset: 0
	// Line 7986, Address: 0x33a764, Func Offset: 0x4
	// Line 7985, Address: 0x33a768, Func Offset: 0x8
	// Line 7986, Address: 0x33a770, Func Offset: 0x10
	// Line 7988, Address: 0x33a77c, Func Offset: 0x1c
	// Line 7993, Address: 0x33a798, Func Offset: 0x38
	// Line 7997, Address: 0x33a7a0, Func Offset: 0x40
	// Line 8000, Address: 0x33a7ac, Func Offset: 0x4c
	// Line 7988, Address: 0x33a7b4, Func Offset: 0x54
	// Line 7995, Address: 0x33a7b8, Func Offset: 0x58
	// Line 7992, Address: 0x33a7bc, Func Offset: 0x5c
	// Line 7998, Address: 0x33a7c0, Func Offset: 0x60
	// Line 7995, Address: 0x33a7c4, Func Offset: 0x64
	// Line 7998, Address: 0x33a7c8, Func Offset: 0x68
	// Line 7995, Address: 0x33a7cc, Func Offset: 0x6c
	// Line 7997, Address: 0x33a7d0, Func Offset: 0x70
	// Line 7993, Address: 0x33a7d4, Func Offset: 0x74
	// Line 7998, Address: 0x33a7d8, Func Offset: 0x78
	// Line 7997, Address: 0x33a7dc, Func Offset: 0x7c
	// Line 7998, Address: 0x33a7e0, Func Offset: 0x80
	// Line 8000, Address: 0x33a7e4, Func Offset: 0x84
	// Line 8006, Address: 0x33a7ec, Func Offset: 0x8c
	// Line 8007, Address: 0x33a7f0, Func Offset: 0x90
	// Line 8006, Address: 0x33a800, Func Offset: 0xa0
	// Line 8007, Address: 0x33a804, Func Offset: 0xa4
	// Line 8012, Address: 0x33a810, Func Offset: 0xb0
	// Line 8023, Address: 0x33a814, Func Offset: 0xb4
	// Line 8012, Address: 0x33a818, Func Offset: 0xb8
	// Line 8021, Address: 0x33a81c, Func Offset: 0xbc
	// Line 8026, Address: 0x33a820, Func Offset: 0xc0
	// Line 8023, Address: 0x33a824, Func Offset: 0xc4
	// Line 8026, Address: 0x33a828, Func Offset: 0xc8
	// Line 8028, Address: 0x33a82c, Func Offset: 0xcc
	// Line 8026, Address: 0x33a830, Func Offset: 0xd0
	// Line 8009, Address: 0x33a834, Func Offset: 0xd4
	// Line 8028, Address: 0x33a838, Func Offset: 0xd8
	// Line 8021, Address: 0x33a840, Func Offset: 0xe0
	// Line 8028, Address: 0x33a844, Func Offset: 0xe4
	// Line 8021, Address: 0x33a848, Func Offset: 0xe8
	// Line 8028, Address: 0x33a84c, Func Offset: 0xec
	// Line 8024, Address: 0x33a850, Func Offset: 0xf0
	// Line 8029, Address: 0x33a854, Func Offset: 0xf4
	// Line 8025, Address: 0x33a858, Func Offset: 0xf8
	// Line 8029, Address: 0x33a85c, Func Offset: 0xfc
	// Line 8028, Address: 0x33a868, Func Offset: 0x108
	// Line 8032, Address: 0x33a86c, Func Offset: 0x10c
	// Line 8033, Address: 0x33a8b8, Func Offset: 0x158
	// Line 8032, Address: 0x33a8bc, Func Offset: 0x15c
	// Line 8033, Address: 0x33a8c0, Func Offset: 0x160
	// Line 8039, Address: 0x33a8c4, Func Offset: 0x164
	// Line 8033, Address: 0x33a8c8, Func Offset: 0x168
	// Line 8032, Address: 0x33a8cc, Func Offset: 0x16c
	// Line 8037, Address: 0x33a8d0, Func Offset: 0x170
	// Line 8032, Address: 0x33a8d8, Func Offset: 0x178
	// Line 8036, Address: 0x33a8dc, Func Offset: 0x17c
	// Line 8033, Address: 0x33a8e0, Func Offset: 0x180
	// Line 8032, Address: 0x33a8e4, Func Offset: 0x184
	// Line 8036, Address: 0x33a8e8, Func Offset: 0x188
	// Line 8032, Address: 0x33a8ec, Func Offset: 0x18c
	// Line 8037, Address: 0x33a8f0, Func Offset: 0x190
	// Line 8032, Address: 0x33a8f4, Func Offset: 0x194
	// Line 8039, Address: 0x33a8f8, Func Offset: 0x198
	// Line 8036, Address: 0x33a8fc, Func Offset: 0x19c
	// Line 8039, Address: 0x33a900, Func Offset: 0x1a0
	// Line 8036, Address: 0x33a904, Func Offset: 0x1a4
	// Line 8033, Address: 0x33a908, Func Offset: 0x1a8
	// Line 8037, Address: 0x33a910, Func Offset: 0x1b0
	// Line 8039, Address: 0x33a914, Func Offset: 0x1b4
	// Line 8042, Address: 0x33a91c, Func Offset: 0x1bc
	// Line 8044, Address: 0x33a924, Func Offset: 0x1c4
	// Line 8051, Address: 0x33a940, Func Offset: 0x1e0
	// Func End, Address: 0x33a950, Func Offset: 0x1f0
}

// zEntPlayer_StreakFX__FP4xEntf
// Start address: 0x33a950
void zEntPlayer_StreakFX(xEnt* ent)
{
	xEnt* EntToTrack'476;
	int32 i;
	int32 p;
	int32 cp;
	xVec3 rhand;
	xVec3 rhand;
	xVec3 lhand;
	xVec3 rhand;
	xVec3 lhand;
	xVec3 rfoot;
	xVec3 lfoot;
	xVec3 head;
	xVec3 rhand;
	xVec3 lhand;
	xVec3 rfoot;
	xVec3 lfoot;
	// Line 7789, Address: 0x33a950, Func Offset: 0
	// Line 7793, Address: 0x33a954, Func Offset: 0x4
	// Line 7789, Address: 0x33a958, Func Offset: 0x8
	// Line 7793, Address: 0x33a974, Func Offset: 0x24
	// Line 7797, Address: 0x33a97c, Func Offset: 0x2c
	// Line 7799, Address: 0x33a980, Func Offset: 0x30
	// Line 7797, Address: 0x33a984, Func Offset: 0x34
	// Line 7799, Address: 0x33a988, Func Offset: 0x38
	// Line 7797, Address: 0x33a98c, Func Offset: 0x3c
	// Line 7799, Address: 0x33a994, Func Offset: 0x44
	// Line 7802, Address: 0x33a99c, Func Offset: 0x4c
	// Line 7804, Address: 0x33a9a0, Func Offset: 0x50
	// Line 7806, Address: 0x33a9a8, Func Offset: 0x58
	// Line 7808, Address: 0x33a9b4, Func Offset: 0x64
	// Line 7809, Address: 0x33a9bc, Func Offset: 0x6c
	// Line 7811, Address: 0x33a9c0, Func Offset: 0x70
	// Line 7815, Address: 0x33a9d0, Func Offset: 0x80
	// Line 7822, Address: 0x33a9e4, Func Offset: 0x94
	// Line 7824, Address: 0x33a9ec, Func Offset: 0x9c
	// Line 7828, Address: 0x33aa18, Func Offset: 0xc8
	// Line 7824, Address: 0x33aa1c, Func Offset: 0xcc
	// Line 7828, Address: 0x33aa20, Func Offset: 0xd0
	// Line 7829, Address: 0x33aa2c, Func Offset: 0xdc
	// Line 7828, Address: 0x33aa30, Func Offset: 0xe0
	// Line 7829, Address: 0x33aa34, Func Offset: 0xe4
	// Line 7828, Address: 0x33aa38, Func Offset: 0xe8
	// Line 7829, Address: 0x33aa3c, Func Offset: 0xec
	// Line 7835, Address: 0x33aa44, Func Offset: 0xf4
	// Line 7849, Address: 0x33aa54, Func Offset: 0x104
	// Line 7890, Address: 0x33aa5c, Func Offset: 0x10c
	// Line 7892, Address: 0x33aa68, Func Offset: 0x118
	// Line 7895, Address: 0x33aa90, Func Offset: 0x140
	// Line 7905, Address: 0x33ab60, Func Offset: 0x210
	// Line 7916, Address: 0x33ac34, Func Offset: 0x2e4
	// Line 7917, Address: 0x33ac5c, Func Offset: 0x30c
	// Line 7918, Address: 0x33ac80, Func Offset: 0x330
	// Line 7919, Address: 0x33aca4, Func Offset: 0x354
	// Line 7923, Address: 0x33acc8, Func Offset: 0x378
	// Line 7924, Address: 0x33ace0, Func Offset: 0x390
	// Line 7927, Address: 0x33acec, Func Offset: 0x39c
	// Line 7930, Address: 0x33ad08, Func Offset: 0x3b8
	// Line 7931, Address: 0x33ad30, Func Offset: 0x3e0
	// Line 7932, Address: 0x33ad54, Func Offset: 0x404
	// Line 7933, Address: 0x33ad78, Func Offset: 0x428
	// Line 7941, Address: 0x33ad98, Func Offset: 0x448
	// Line 7943, Address: 0x33ada4, Func Offset: 0x454
	// Line 7946, Address: 0x33adb4, Func Offset: 0x464
	// Line 7955, Address: 0x33adbc, Func Offset: 0x46c
	// Line 7957, Address: 0x33adc0, Func Offset: 0x470
	// Line 7959, Address: 0x33add8, Func Offset: 0x488
	// Line 7960, Address: 0x33ade0, Func Offset: 0x490
	// Line 7964, Address: 0x33ade8, Func Offset: 0x498
	// Line 7967, Address: 0x33adf8, Func Offset: 0x4a8
	// Line 7969, Address: 0x33ae00, Func Offset: 0x4b0
	// Line 7970, Address: 0x33ae20, Func Offset: 0x4d0
	// Line 7971, Address: 0x33ae40, Func Offset: 0x4f0
	// Line 7974, Address: 0x33ae4c, Func Offset: 0x4fc
	// Line 7975, Address: 0x33ae64, Func Offset: 0x514
	// Line 7978, Address: 0x33ae78, Func Offset: 0x528
	// Line 7980, Address: 0x33ae88, Func Offset: 0x538
	// Line 7981, Address: 0x33ae98, Func Offset: 0x548
	// Line 7982, Address: 0x33aea8, Func Offset: 0x558
	// Line 7805, Address: 0x33aeb0, Func Offset: 0x560
	// Line 7807, Address: 0x33aeb8, Func Offset: 0x568
	// Line 7982, Address: 0x33aec4, Func Offset: 0x574
	// Line 7817, Address: 0x33aed4, Func Offset: 0x584
	// Line 7982, Address: 0x33aed8, Func Offset: 0x588
	// Line 7819, Address: 0x33aeec, Func Offset: 0x59c
	// Line 7982, Address: 0x33aef4, Func Offset: 0x5a4
	// Line 7837, Address: 0x33af60, Func Offset: 0x610
	// Line 7982, Address: 0x33af64, Func Offset: 0x614
	// Line 7878, Address: 0x33b044, Func Offset: 0x6f4
	// Line 7982, Address: 0x33b048, Func Offset: 0x6f8
	// Line 7878, Address: 0x33b05c, Func Offset: 0x70c
	// Line 7982, Address: 0x33b06c, Func Offset: 0x71c
	// Line 7878, Address: 0x33b09c, Func Offset: 0x74c
	// Line 7982, Address: 0x33b0a0, Func Offset: 0x750
	// Line 7878, Address: 0x33b0a4, Func Offset: 0x754
	// Line 7982, Address: 0x33b0a8, Func Offset: 0x758
	// Line 7878, Address: 0x33b0b0, Func Offset: 0x760
	// Line 7982, Address: 0x33b0b4, Func Offset: 0x764
	// Line 7878, Address: 0x33b0b8, Func Offset: 0x768
	// Line 7982, Address: 0x33b0c0, Func Offset: 0x770
	// Line 7878, Address: 0x33b0c8, Func Offset: 0x778
	// Line 7982, Address: 0x33b0d0, Func Offset: 0x780
	// Line 7878, Address: 0x33b0d4, Func Offset: 0x784
	// Line 7982, Address: 0x33b0d8, Func Offset: 0x788
	// Line 7878, Address: 0x33b0dc, Func Offset: 0x78c
	// Line 7982, Address: 0x33b0e0, Func Offset: 0x790
	// Line 7878, Address: 0x33b0e8, Func Offset: 0x798
	// Line 7982, Address: 0x33b0ec, Func Offset: 0x79c
	// Line 7878, Address: 0x33b0f0, Func Offset: 0x7a0
	// Line 7982, Address: 0x33b0fc, Func Offset: 0x7ac
	// Line 7879, Address: 0x33b104, Func Offset: 0x7b4
	// Line 7982, Address: 0x33b10c, Func Offset: 0x7bc
	// Line 7856, Address: 0x33b110, Func Offset: 0x7c0
	// Line 7982, Address: 0x33b114, Func Offset: 0x7c4
	// Line 7856, Address: 0x33b11c, Func Offset: 0x7cc
	// Line 7982, Address: 0x33b120, Func Offset: 0x7d0
	// Line 7857, Address: 0x33b150, Func Offset: 0x800
	// Line 7982, Address: 0x33b154, Func Offset: 0x804
	// Line 7857, Address: 0x33b190, Func Offset: 0x840
	// Line 7982, Address: 0x33b19c, Func Offset: 0x84c
	// Line 7857, Address: 0x33b1b8, Func Offset: 0x868
	// Line 7982, Address: 0x33b1bc, Func Offset: 0x86c
	// Line 7857, Address: 0x33b1c0, Func Offset: 0x870
	// Line 7982, Address: 0x33b1c4, Func Offset: 0x874
	// Line 7857, Address: 0x33b1d0, Func Offset: 0x880
	// Line 7982, Address: 0x33b1d4, Func Offset: 0x884
	// Line 7889, Address: 0x33b238, Func Offset: 0x8e8
	// Line 7878, Address: 0x33b240, Func Offset: 0x8f0
	// Line 7982, Address: 0x33b258, Func Offset: 0x908
	// Line 7895, Address: 0x33b2e4, Func Offset: 0x994
	// Line 7982, Address: 0x33b2fc, Func Offset: 0x9ac
	// Line 7946, Address: 0x33b330, Func Offset: 0x9e0
	// Line 7982, Address: 0x33b334, Func Offset: 0x9e4
	// Line 7948, Address: 0x33b344, Func Offset: 0x9f4
	// Line 7982, Address: 0x33b358, Func Offset: 0xa08
	// Line 7955, Address: 0x33b360, Func Offset: 0xa10
	// Line 7982, Address: 0x33b368, Func Offset: 0xa18
	// Func End, Address: 0x33b388, Func Offset: 0xa38
}

// zEntPlayer_SpongeBallInit__FP4xEntP9xEntAsset
// Start address: 0x33b390
void zEntPlayer_SpongeBallInit(xEnt* ent, xEntAsset* asset)
{
	// Line 7654, Address: 0x33b390, Func Offset: 0
	// Line 7656, Address: 0x33b398, Func Offset: 0x8
	// Line 7661, Address: 0x33b3a0, Func Offset: 0x10
	// Line 7658, Address: 0x33b3a4, Func Offset: 0x14
	// Line 7661, Address: 0x33b3a8, Func Offset: 0x18
	// Line 7662, Address: 0x33b3b8, Func Offset: 0x28
	// Line 7664, Address: 0x33b3c0, Func Offset: 0x30
	// Line 7665, Address: 0x33b3c4, Func Offset: 0x34
	// Line 7664, Address: 0x33b3c8, Func Offset: 0x38
	// Line 7665, Address: 0x33b3cc, Func Offset: 0x3c
	// Line 7664, Address: 0x33b3d0, Func Offset: 0x40
	// Line 7666, Address: 0x33b3d4, Func Offset: 0x44
	// Line 7665, Address: 0x33b3d8, Func Offset: 0x48
	// Line 7666, Address: 0x33b3dc, Func Offset: 0x4c
	// Line 7668, Address: 0x33b3e0, Func Offset: 0x50
	// Line 7669, Address: 0x33b3f0, Func Offset: 0x60
	// Func End, Address: 0x33b3fc, Func Offset: 0x6c
}

// zEntPlayer_SpongePatInit__FP4xEntP9xEntAsset
// Start address: 0x33b400
void zEntPlayer_SpongePatInit(xEnt* ent, xEntAsset* asset)
{
	void* info;
	uint32 bufsize;
	// Line 7614, Address: 0x33b400, Func Offset: 0
	// Line 7623, Address: 0x33b404, Func Offset: 0x4
	// Line 7614, Address: 0x33b408, Func Offset: 0x8
	// Line 7623, Address: 0x33b420, Func Offset: 0x20
	// Line 7624, Address: 0x33b42c, Func Offset: 0x2c
	// Line 7626, Address: 0x33b434, Func Offset: 0x34
	// Line 7631, Address: 0x33b43c, Func Offset: 0x3c
	// Line 7633, Address: 0x33b444, Func Offset: 0x44
	// Line 7634, Address: 0x33b468, Func Offset: 0x68
	// Line 7635, Address: 0x33b474, Func Offset: 0x74
	// Line 7643, Address: 0x33b47c, Func Offset: 0x7c
	// Line 7645, Address: 0x33b484, Func Offset: 0x84
	// Line 7647, Address: 0x33b488, Func Offset: 0x88
	// Line 7645, Address: 0x33b48c, Func Offset: 0x8c
	// Line 7650, Address: 0x33b490, Func Offset: 0x90
	// Line 7651, Address: 0x33b4a0, Func Offset: 0xa0
	// Line 7625, Address: 0x33b4a8, Func Offset: 0xa8
	// Line 7651, Address: 0x33b4ac, Func Offset: 0xac
	// Line 7627, Address: 0x33b4c0, Func Offset: 0xc0
	// Line 7651, Address: 0x33b4c4, Func Offset: 0xc4
	// Func End, Address: 0x33b4f8, Func Offset: 0xf8
}

// zEntPlayer_CarInit__FP4xEntP9xEntAsset
// Start address: 0x33b500
void zEntPlayer_CarInit(xEnt* ent, xEntAsset* asset)
{
	void* info;
	uint32 bufsize;
	// Line 7589, Address: 0x33b500, Func Offset: 0
	// Line 7595, Address: 0x33b504, Func Offset: 0x4
	// Line 7589, Address: 0x33b508, Func Offset: 0x8
	// Line 7595, Address: 0x33b520, Func Offset: 0x20
	// Line 7596, Address: 0x33b52c, Func Offset: 0x2c
	// Line 7598, Address: 0x33b534, Func Offset: 0x34
	// Line 7599, Address: 0x33b558, Func Offset: 0x58
	// Line 7600, Address: 0x33b564, Func Offset: 0x64
	// Line 7607, Address: 0x33b56c, Func Offset: 0x6c
	// Line 7610, Address: 0x33b5c0, Func Offset: 0xc0
	// Line 7607, Address: 0x33b5c4, Func Offset: 0xc4
	// Line 7610, Address: 0x33b5c8, Func Offset: 0xc8
	// Line 7611, Address: 0x33b5d4, Func Offset: 0xd4
	// Line 7607, Address: 0x33b60c, Func Offset: 0x10c
	// Line 7611, Address: 0x33b618, Func Offset: 0x118
	// Func End, Address: 0x33b62c, Func Offset: 0x12c
}

// zEntPlayer_PatrickInit__FP4xEntP9xEntAsseti
// Start address: 0x33b630
void zEntPlayer_PatrickInit(xEnt* ent, xEntAsset* asset)
{
	uint32 bufsize;
	void* info;
	// Line 7438, Address: 0x33b630, Func Offset: 0
	// Line 7455, Address: 0x33b634, Func Offset: 0x4
	// Line 7438, Address: 0x33b638, Func Offset: 0x8
	// Line 7455, Address: 0x33b650, Func Offset: 0x20
	// Line 7456, Address: 0x33b65c, Func Offset: 0x2c
	// Line 7458, Address: 0x33b664, Func Offset: 0x34
	// Line 7460, Address: 0x33b66c, Func Offset: 0x3c
	// Line 7462, Address: 0x33b674, Func Offset: 0x44
	// Line 7464, Address: 0x33b67c, Func Offset: 0x4c
	// Line 7466, Address: 0x33b684, Func Offset: 0x54
	// Line 7468, Address: 0x33b68c, Func Offset: 0x5c
	// Line 7470, Address: 0x33b694, Func Offset: 0x64
	// Line 7472, Address: 0x33b69c, Func Offset: 0x6c
	// Line 7474, Address: 0x33b6a4, Func Offset: 0x74
	// Line 7476, Address: 0x33b6ac, Func Offset: 0x7c
	// Line 7481, Address: 0x33b6b4, Func Offset: 0x84
	// Line 7486, Address: 0x33b6bc, Func Offset: 0x8c
	// Line 7483, Address: 0x33b6c0, Func Offset: 0x90
	// Line 7486, Address: 0x33b6c4, Func Offset: 0x94
	// Line 7483, Address: 0x33b6c8, Func Offset: 0x98
	// Line 7486, Address: 0x33b6cc, Func Offset: 0x9c
	// Line 7484, Address: 0x33b6d0, Func Offset: 0xa0
	// Line 7486, Address: 0x33b6d8, Func Offset: 0xa8
	// Line 7488, Address: 0x33b6e8, Func Offset: 0xb8
	// Line 7486, Address: 0x33b6ec, Func Offset: 0xbc
	// Line 7488, Address: 0x33b6f0, Func Offset: 0xc0
	// Line 7492, Address: 0x33b720, Func Offset: 0xf0
	// Line 7494, Address: 0x33b730, Func Offset: 0x100
	// Line 7498, Address: 0x33b764, Func Offset: 0x134
	// Line 7502, Address: 0x33b798, Func Offset: 0x168
	// Line 7506, Address: 0x33b7cc, Func Offset: 0x19c
	// Line 7510, Address: 0x33b808, Func Offset: 0x1d8
	// Line 7514, Address: 0x33b844, Func Offset: 0x214
	// Line 7518, Address: 0x33b880, Func Offset: 0x250
	// Line 7522, Address: 0x33b8bc, Func Offset: 0x28c
	// Line 7526, Address: 0x33b8f8, Func Offset: 0x2c8
	// Line 7531, Address: 0x33b934, Func Offset: 0x304
	// Line 7539, Address: 0x33b968, Func Offset: 0x338
	// Line 7542, Address: 0x33b974, Func Offset: 0x344
	// Line 7544, Address: 0x33b98c, Func Offset: 0x35c
	// Line 7546, Address: 0x33b9a8, Func Offset: 0x378
	// Line 7548, Address: 0x33b9c4, Func Offset: 0x394
	// Line 7550, Address: 0x33b9e0, Func Offset: 0x3b0
	// Line 7552, Address: 0x33b9fc, Func Offset: 0x3cc
	// Line 7554, Address: 0x33ba18, Func Offset: 0x3e8
	// Line 7556, Address: 0x33ba34, Func Offset: 0x404
	// Line 7582, Address: 0x33ba50, Func Offset: 0x420
	// Line 7584, Address: 0x33ba58, Func Offset: 0x428
	// Line 7585, Address: 0x33ba60, Func Offset: 0x430
	// Line 7586, Address: 0x33ba6c, Func Offset: 0x43c
	// Line 7457, Address: 0x33ba74, Func Offset: 0x444
	// Line 7586, Address: 0x33ba78, Func Offset: 0x448
	// Line 7459, Address: 0x33ba8c, Func Offset: 0x45c
	// Line 7586, Address: 0x33ba90, Func Offset: 0x460
	// Line 7461, Address: 0x33baa4, Func Offset: 0x474
	// Line 7586, Address: 0x33baa8, Func Offset: 0x478
	// Line 7463, Address: 0x33babc, Func Offset: 0x48c
	// Line 7586, Address: 0x33bac0, Func Offset: 0x490
	// Line 7465, Address: 0x33bad4, Func Offset: 0x4a4
	// Line 7586, Address: 0x33bad8, Func Offset: 0x4a8
	// Line 7467, Address: 0x33baec, Func Offset: 0x4bc
	// Line 7586, Address: 0x33baf0, Func Offset: 0x4c0
	// Line 7469, Address: 0x33bb04, Func Offset: 0x4d4
	// Line 7586, Address: 0x33bb08, Func Offset: 0x4d8
	// Line 7471, Address: 0x33bb1c, Func Offset: 0x4ec
	// Line 7586, Address: 0x33bb20, Func Offset: 0x4f0
	// Line 7473, Address: 0x33bb34, Func Offset: 0x504
	// Line 7586, Address: 0x33bb38, Func Offset: 0x508
	// Line 7475, Address: 0x33bb4c, Func Offset: 0x51c
	// Line 7586, Address: 0x33bb50, Func Offset: 0x520
	// Line 7477, Address: 0x33bb64, Func Offset: 0x534
	// Line 7586, Address: 0x33bb68, Func Offset: 0x538
	// Func End, Address: 0x33bba0, Func Offset: 0x570
}

// zEntPlayer_SpongeBobInit__FP4xEntP9xEntAsseti
// Start address: 0x33bba0
void zEntPlayer_SpongeBobInit(xEnt* ent, xEntAsset* asset, int32 costumeIndex)
{
	void* sbInfo;
	uint32 sbMINFSize;
	uint8 index;
	xModelInstance* m;
	float32 bbncvtm;
	int32 i;
	uint32 trailerHash;
	int32 i;
	xEnt* hitch;
	int32 drybob_anim_count;
	float32* drybob_chgTime[64];
	float32 drybob_oldTime[64];
	void** drybob_chgData[64];
	void* drybob_oldData[64];
	// Line 7160, Address: 0x33bba0, Func Offset: 0
	// Line 7162, Address: 0x33bba4, Func Offset: 0x4
	// Line 7160, Address: 0x33bba8, Func Offset: 0x8
	// Line 7162, Address: 0x33bbac, Func Offset: 0xc
	// Line 7160, Address: 0x33bbb0, Func Offset: 0x10
	// Line 7162, Address: 0x33bbb4, Func Offset: 0x14
	// Line 7160, Address: 0x33bbb8, Func Offset: 0x18
	// Line 7162, Address: 0x33bbbc, Func Offset: 0x1c
	// Line 7160, Address: 0x33bbc0, Func Offset: 0x20
	// Line 7162, Address: 0x33bbcc, Func Offset: 0x2c
	// Line 7180, Address: 0x33bbdc, Func Offset: 0x3c
	// Line 7162, Address: 0x33bbe0, Func Offset: 0x40
	// Line 7180, Address: 0x33bbe4, Func Offset: 0x44
	// Line 7181, Address: 0x33bbf0, Func Offset: 0x50
	// Line 7188, Address: 0x33bbf8, Func Offset: 0x58
	// Line 7195, Address: 0x33bc00, Func Offset: 0x60
	// Line 7202, Address: 0x33bc08, Func Offset: 0x68
	// Line 7209, Address: 0x33bc10, Func Offset: 0x70
	// Line 7216, Address: 0x33bc18, Func Offset: 0x78
	// Line 7224, Address: 0x33bc20, Func Offset: 0x80
	// Line 7231, Address: 0x33bc28, Func Offset: 0x88
	// Line 7238, Address: 0x33bc30, Func Offset: 0x90
	// Line 7245, Address: 0x33bc38, Func Offset: 0x98
	// Line 7252, Address: 0x33bc40, Func Offset: 0xa0
	// Line 7262, Address: 0x33bc48, Func Offset: 0xa8
	// Line 7264, Address: 0x33bc50, Func Offset: 0xb0
	// Line 7268, Address: 0x33bc54, Func Offset: 0xb4
	// Line 7264, Address: 0x33bc58, Func Offset: 0xb8
	// Line 7268, Address: 0x33bc5c, Func Offset: 0xbc
	// Line 7264, Address: 0x33bc60, Func Offset: 0xc0
	// Line 7268, Address: 0x33bc64, Func Offset: 0xc4
	// Line 7265, Address: 0x33bc68, Func Offset: 0xc8
	// Line 7268, Address: 0x33bc70, Func Offset: 0xd0
	// Line 7270, Address: 0x33bc80, Func Offset: 0xe0
	// Line 7268, Address: 0x33bc84, Func Offset: 0xe4
	// Line 7270, Address: 0x33bc88, Func Offset: 0xe8
	// Line 7272, Address: 0x33bc9c, Func Offset: 0xfc
	// Line 7274, Address: 0x33bcac, Func Offset: 0x10c
	// Line 7275, Address: 0x33bcc0, Func Offset: 0x120
	// Line 7274, Address: 0x33bcc8, Func Offset: 0x128
	// Line 7276, Address: 0x33bcdc, Func Offset: 0x13c
	// Line 7183, Address: 0x33bcf0, Func Offset: 0x150
	// Line 7276, Address: 0x33bcf4, Func Offset: 0x154
	// Line 7190, Address: 0x33bd08, Func Offset: 0x168
	// Line 7276, Address: 0x33bd0c, Func Offset: 0x16c
	// Line 7191, Address: 0x33bd18, Func Offset: 0x178
	// Line 7197, Address: 0x33bd24, Func Offset: 0x184
	// Line 7276, Address: 0x33bd28, Func Offset: 0x188
	// Line 7198, Address: 0x33bd34, Func Offset: 0x194
	// Line 7204, Address: 0x33bd40, Func Offset: 0x1a0
	// Line 7276, Address: 0x33bd44, Func Offset: 0x1a4
	// Line 7205, Address: 0x33bd50, Func Offset: 0x1b0
	// Line 7211, Address: 0x33bd5c, Func Offset: 0x1bc
	// Line 7276, Address: 0x33bd60, Func Offset: 0x1c0
	// Line 7212, Address: 0x33bd6c, Func Offset: 0x1cc
	// Line 7218, Address: 0x33bd78, Func Offset: 0x1d8
	// Line 7276, Address: 0x33bd7c, Func Offset: 0x1dc
	// Line 7220, Address: 0x33bd88, Func Offset: 0x1e8
	// Line 7226, Address: 0x33bd94, Func Offset: 0x1f4
	// Line 7276, Address: 0x33bd98, Func Offset: 0x1f8
	// Line 7227, Address: 0x33bda4, Func Offset: 0x204
	// Line 7233, Address: 0x33bdb0, Func Offset: 0x210
	// Line 7276, Address: 0x33bdb4, Func Offset: 0x214
	// Line 7234, Address: 0x33bdc0, Func Offset: 0x220
	// Line 7240, Address: 0x33bdcc, Func Offset: 0x22c
	// Line 7276, Address: 0x33bdd0, Func Offset: 0x230
	// Line 7241, Address: 0x33bddc, Func Offset: 0x23c
	// Line 7247, Address: 0x33bde8, Func Offset: 0x248
	// Line 7276, Address: 0x33bdec, Func Offset: 0x24c
	// Line 7248, Address: 0x33bdf8, Func Offset: 0x258
	// Line 7254, Address: 0x33be04, Func Offset: 0x264
	// Line 7276, Address: 0x33be08, Func Offset: 0x268
	// Line 7255, Address: 0x33be14, Func Offset: 0x274
	// Line 7276, Address: 0x33be20, Func Offset: 0x280
	// Line 7284, Address: 0x33be28, Func Offset: 0x288
	// Line 7286, Address: 0x33be30, Func Offset: 0x290
	// Line 7288, Address: 0x33be34, Func Offset: 0x294
	// Line 7286, Address: 0x33be38, Func Offset: 0x298
	// Line 7288, Address: 0x33be3c, Func Offset: 0x29c
	// Line 7289, Address: 0x33be40, Func Offset: 0x2a0
	// Line 7286, Address: 0x33be44, Func Offset: 0x2a4
	// Line 7289, Address: 0x33be48, Func Offset: 0x2a8
	// Line 7288, Address: 0x33be4c, Func Offset: 0x2ac
	// Line 7289, Address: 0x33be54, Func Offset: 0x2b4
	// Line 7292, Address: 0x33be64, Func Offset: 0x2c4
	// Line 7295, Address: 0x33be70, Func Offset: 0x2d0
	// Line 7292, Address: 0x33be74, Func Offset: 0x2d4
	// Line 7295, Address: 0x33be78, Func Offset: 0x2d8
	// Line 7299, Address: 0x33bea8, Func Offset: 0x308
	// Line 7303, Address: 0x33bee4, Func Offset: 0x344
	// Line 7306, Address: 0x33bf20, Func Offset: 0x380
	// Line 7309, Address: 0x33bf5c, Func Offset: 0x3bc
	// Line 7312, Address: 0x33bf98, Func Offset: 0x3f8
	// Line 7317, Address: 0x33bfd4, Func Offset: 0x434
	// Line 7321, Address: 0x33c014, Func Offset: 0x474
	// Line 7322, Address: 0x33c020, Func Offset: 0x480
	// Line 7321, Address: 0x33c024, Func Offset: 0x484
	// Line 7322, Address: 0x33c028, Func Offset: 0x488
	// Line 7323, Address: 0x33c030, Func Offset: 0x490
	// Line 7322, Address: 0x33c034, Func Offset: 0x494
	// Line 7323, Address: 0x33c038, Func Offset: 0x498
	// Line 7324, Address: 0x33c040, Func Offset: 0x4a0
	// Line 7323, Address: 0x33c044, Func Offset: 0x4a4
	// Line 7324, Address: 0x33c048, Func Offset: 0x4a8
	// Line 7329, Address: 0x33c054, Func Offset: 0x4b4
	// Line 7325, Address: 0x33c058, Func Offset: 0x4b8
	// Line 7329, Address: 0x33c05c, Func Offset: 0x4bc
	// Line 7325, Address: 0x33c060, Func Offset: 0x4c0
	// Line 7334, Address: 0x33c064, Func Offset: 0x4c4
	// Line 7325, Address: 0x33c068, Func Offset: 0x4c8
	// Line 7329, Address: 0x33c06c, Func Offset: 0x4cc
	// Line 7326, Address: 0x33c070, Func Offset: 0x4d0
	// Line 7345, Address: 0x33c074, Func Offset: 0x4d4
	// Line 7326, Address: 0x33c078, Func Offset: 0x4d8
	// Line 7329, Address: 0x33c07c, Func Offset: 0x4dc
	// Line 7326, Address: 0x33c080, Func Offset: 0x4e0
	// Line 7329, Address: 0x33c088, Func Offset: 0x4e8
	// Line 7345, Address: 0x33c08c, Func Offset: 0x4ec
	// Line 7328, Address: 0x33c090, Func Offset: 0x4f0
	// Line 7329, Address: 0x33c098, Func Offset: 0x4f8
	// Line 7328, Address: 0x33c0a0, Func Offset: 0x500
	// Line 7329, Address: 0x33c0a4, Func Offset: 0x504
	// Line 7348, Address: 0x33c0bc, Func Offset: 0x51c
	// Line 7398, Address: 0x33c268, Func Offset: 0x6c8
	// Line 7399, Address: 0x33c270, Func Offset: 0x6d0
	// Line 7403, Address: 0x33c288, Func Offset: 0x6e8
	// Line 7401, Address: 0x33c28c, Func Offset: 0x6ec
	// Line 7403, Address: 0x33c290, Func Offset: 0x6f0
	// Line 7404, Address: 0x33c29c, Func Offset: 0x6fc
	// Line 7406, Address: 0x33c2cc, Func Offset: 0x72c
	// Line 7404, Address: 0x33c2d8, Func Offset: 0x738
	// Line 7406, Address: 0x33c2dc, Func Offset: 0x73c
	// Line 7405, Address: 0x33c2e0, Func Offset: 0x740
	// Line 7406, Address: 0x33c2f0, Func Offset: 0x750
	// Line 7421, Address: 0x33c308, Func Offset: 0x768
	// Line 7425, Address: 0x33c320, Func Offset: 0x780
	// Line 7428, Address: 0x33c328, Func Offset: 0x788
	// Line 7430, Address: 0x33c334, Func Offset: 0x794
	// Line 7433, Address: 0x33c3ac, Func Offset: 0x80c
	// Line 7432, Address: 0x33c3b8, Func Offset: 0x818
	// Line 7435, Address: 0x33c3bc, Func Offset: 0x81c
	// Line 7430, Address: 0x33c484, Func Offset: 0x8e4
	// Line 7435, Address: 0x33c490, Func Offset: 0x8f0
	// Func End, Address: 0x33c4a8, Func Offset: 0x908
}

// zEntPlayerCommonInit__FP4xEntP9xEntAsset
// Start address: 0x33c4b0
void zEntPlayerCommonInit(xEnt* ent, xEntAsset* asset)
{
	xLightKit* pLightKit;
	xFFXRotMatchState* rms;
	// Line 6936, Address: 0x33c4b0, Func Offset: 0
	// Line 6937, Address: 0x33c4dc, Func Offset: 0x2c
	// Line 6949, Address: 0x33c4f8, Func Offset: 0x48
	// Line 6972, Address: 0x33c500, Func Offset: 0x50
	// Line 6975, Address: 0x33c76c, Func Offset: 0x2bc
	// Line 6976, Address: 0x33c778, Func Offset: 0x2c8
	// Line 6991, Address: 0x33c7a0, Func Offset: 0x2f0
	// Line 6993, Address: 0x33c7a8, Func Offset: 0x2f8
	// Line 6997, Address: 0x33c7ac, Func Offset: 0x2fc
	// Line 6998, Address: 0x33c7b4, Func Offset: 0x304
	// Line 7004, Address: 0x33c7bc, Func Offset: 0x30c
	// Line 6999, Address: 0x33c7c0, Func Offset: 0x310
	// Line 7000, Address: 0x33c7c4, Func Offset: 0x314
	// Line 7004, Address: 0x33c7c8, Func Offset: 0x318
	// Line 6999, Address: 0x33c7d4, Func Offset: 0x324
	// Line 7001, Address: 0x33c7d8, Func Offset: 0x328
	// Line 7000, Address: 0x33c7dc, Func Offset: 0x32c
	// Line 7001, Address: 0x33c7e4, Func Offset: 0x334
	// Line 7004, Address: 0x33c7ec, Func Offset: 0x33c
	// Line 7014, Address: 0x33c7f4, Func Offset: 0x344
	// Line 7009, Address: 0x33c7f8, Func Offset: 0x348
	// Line 7014, Address: 0x33c7fc, Func Offset: 0x34c
	// Line 7009, Address: 0x33c804, Func Offset: 0x354
	// Line 7014, Address: 0x33c808, Func Offset: 0x358
	// Line 7017, Address: 0x33c858, Func Offset: 0x3a8
	// Line 7019, Address: 0x33c860, Func Offset: 0x3b0
	// Line 7018, Address: 0x33c864, Func Offset: 0x3b4
	// Line 7019, Address: 0x33c868, Func Offset: 0x3b8
	// Line 7023, Address: 0x33c874, Func Offset: 0x3c4
	// Line 7028, Address: 0x33c880, Func Offset: 0x3d0
	// Line 7024, Address: 0x33c884, Func Offset: 0x3d4
	// Line 7025, Address: 0x33c890, Func Offset: 0x3e0
	// Line 7026, Address: 0x33c898, Func Offset: 0x3e8
	// Line 7025, Address: 0x33c89c, Func Offset: 0x3ec
	// Line 7027, Address: 0x33c8a0, Func Offset: 0x3f0
	// Line 7026, Address: 0x33c8a8, Func Offset: 0x3f8
	// Line 7027, Address: 0x33c8ac, Func Offset: 0x3fc
	// Line 7028, Address: 0x33c8b0, Func Offset: 0x400
	// Line 7026, Address: 0x33c8b4, Func Offset: 0x404
	// Line 7027, Address: 0x33c8b8, Func Offset: 0x408
	// Line 7029, Address: 0x33c8d0, Func Offset: 0x420
	// Line 7027, Address: 0x33c8d8, Func Offset: 0x428
	// Line 7030, Address: 0x33c8e4, Func Offset: 0x434
	// Line 7027, Address: 0x33c8ec, Func Offset: 0x43c
	// Line 7032, Address: 0x33c8f8, Func Offset: 0x448
	// Line 7028, Address: 0x33c8fc, Func Offset: 0x44c
	// Line 7027, Address: 0x33c900, Func Offset: 0x450
	// Line 7028, Address: 0x33c904, Func Offset: 0x454
	// Line 7032, Address: 0x33c908, Func Offset: 0x458
	// Line 7033, Address: 0x33c910, Func Offset: 0x460
	// Line 7036, Address: 0x33c91c, Func Offset: 0x46c
	// Line 7039, Address: 0x33c924, Func Offset: 0x474
	// Line 7042, Address: 0x33c988, Func Offset: 0x4d8
	// Line 7045, Address: 0x33c990, Func Offset: 0x4e0
	// Line 7047, Address: 0x33c998, Func Offset: 0x4e8
	// Line 7049, Address: 0x33c9ac, Func Offset: 0x4fc
	// Line 7051, Address: 0x33c9b0, Func Offset: 0x500
	// Line 7053, Address: 0x33c9b4, Func Offset: 0x504
	// Line 6941, Address: 0x33c9cc, Func Offset: 0x51c
	// Line 7053, Address: 0x33c9d0, Func Offset: 0x520
	// Line 6943, Address: 0x33c9e4, Func Offset: 0x534
	// Line 7053, Address: 0x33c9f0, Func Offset: 0x540
	// Line 6951, Address: 0x33ca04, Func Offset: 0x554
	// Line 7053, Address: 0x33ca0c, Func Offset: 0x55c
	// Line 6952, Address: 0x33ca14, Func Offset: 0x564
	// Line 7053, Address: 0x33ca18, Func Offset: 0x568
	// Line 6977, Address: 0x33ca34, Func Offset: 0x584
	// Line 7053, Address: 0x33ca38, Func Offset: 0x588
	// Line 6981, Address: 0x33ca54, Func Offset: 0x5a4
	// Line 7053, Address: 0x33ca58, Func Offset: 0x5a8
	// Line 6985, Address: 0x33ca64, Func Offset: 0x5b4
	// Line 7053, Address: 0x33ca68, Func Offset: 0x5b8
	// Line 7014, Address: 0x33ca88, Func Offset: 0x5d8
	// Line 7053, Address: 0x33ca8c, Func Offset: 0x5dc
	// Line 7014, Address: 0x33ca9c, Func Offset: 0x5ec
	// Line 7053, Address: 0x33caa0, Func Offset: 0x5f0
	// Line 7014, Address: 0x33caa8, Func Offset: 0x5f8
	// Line 7053, Address: 0x33caac, Func Offset: 0x5fc
	// Line 7014, Address: 0x33cabc, Func Offset: 0x60c
	// Line 7053, Address: 0x33cac4, Func Offset: 0x614
	// Line 7014, Address: 0x33cad4, Func Offset: 0x624
	// Line 7053, Address: 0x33cad8, Func Offset: 0x628
	// Line 7014, Address: 0x33cadc, Func Offset: 0x62c
	// Line 7054, Address: 0x33caf0, Func Offset: 0x640
	// Func End, Address: 0x33cb1c, Func Offset: 0x66c
}

// load_talk_filter__FPUcP16xModelAssetParamUii
// Start address: 0x33cb20
int32 load_talk_filter(uint8* filter, xModelAssetParam* params, uint32 params_size, int32 max_size)
{
	int32 size;
	float32* non_choices;
	int32 i;
	uint8 skip;
	int32 j;
	// Line 6859, Address: 0x33cb20, Func Offset: 0
	// Line 6862, Address: 0x33cb4c, Func Offset: 0x2c
	// Line 6859, Address: 0x33cb50, Func Offset: 0x30
	// Line 6862, Address: 0x33cb54, Func Offset: 0x34
	// Line 6863, Address: 0x33cb5c, Func Offset: 0x3c
	// Line 6862, Address: 0x33cb60, Func Offset: 0x40
	// Line 6863, Address: 0x33cb64, Func Offset: 0x44
	// Line 6864, Address: 0x33cc94, Func Offset: 0x174
	// Line 6870, Address: 0x33cca0, Func Offset: 0x180
	// Line 6867, Address: 0x33cca4, Func Offset: 0x184
	// Line 6866, Address: 0x33cca8, Func Offset: 0x188
	// Line 6867, Address: 0x33ccac, Func Offset: 0x18c
	// Line 6870, Address: 0x33ccb8, Func Offset: 0x198
	// Line 6871, Address: 0x33ccdc, Func Offset: 0x1bc
	// Line 6872, Address: 0x33ccf0, Func Offset: 0x1d0
	// Line 6875, Address: 0x33ccf8, Func Offset: 0x1d8
	// Line 6876, Address: 0x33cd08, Func Offset: 0x1e8
	// Line 6877, Address: 0x33cd10, Func Offset: 0x1f0
	// Line 6878, Address: 0x33cd18, Func Offset: 0x1f8
	// Line 6879, Address: 0x33cd44, Func Offset: 0x224
	// Func End, Address: 0x33cd68, Func Offset: 0x248
}

// CheckObjectAgainstGauntlet__FP4xEntPv
// Start address: 0x344b20
int32 CheckObjectAgainstGauntlet(xEnt* cbent, void* cbdata)
{
	xBound* meleeB;
	xCollis meleeColl;
	zEntSimpleObj* simpleObj;
	xVec3 boundCenter;
	// Line 6576, Address: 0x344b20, Func Offset: 0
	// Line 6586, Address: 0x344b28, Func Offset: 0x8
	// Line 6576, Address: 0x344b2c, Func Offset: 0xc
	// Line 6581, Address: 0x344b38, Func Offset: 0x18
	// Line 6586, Address: 0x344b3c, Func Offset: 0x1c
	// Line 6588, Address: 0x344b48, Func Offset: 0x28
	// Line 6593, Address: 0x344bc8, Func Offset: 0xa8
	// Line 6597, Address: 0x344bd4, Func Offset: 0xb4
	// Line 6598, Address: 0x344be4, Func Offset: 0xc4
	// Line 6604, Address: 0x344bf8, Func Offset: 0xd8
	// Line 6606, Address: 0x344c04, Func Offset: 0xe4
	// Line 6615, Address: 0x344c0c, Func Offset: 0xec
	// Line 6617, Address: 0x344c18, Func Offset: 0xf8
	// Line 6621, Address: 0x344c2c, Func Offset: 0x10c
	// Line 6622, Address: 0x344c38, Func Offset: 0x118
	// Line 6624, Address: 0x344c3c, Func Offset: 0x11c
	// Line 6601, Address: 0x344c54, Func Offset: 0x134
	// Line 6618, Address: 0x344c5c, Func Offset: 0x13c
	// Line 6624, Address: 0x344c64, Func Offset: 0x144
	// Line 6621, Address: 0x344c74, Func Offset: 0x154
	// Line 6624, Address: 0x344c78, Func Offset: 0x158
	// Line 6621, Address: 0x344c94, Func Offset: 0x174
	// Line 6624, Address: 0x344c98, Func Offset: 0x178
	// Line 6621, Address: 0x344ca8, Func Offset: 0x188
	// Line 6624, Address: 0x344cb4, Func Offset: 0x194
	// Line 6625, Address: 0x344ce0, Func Offset: 0x1c0
	// Func End, Address: 0x344cf4, Func Offset: 0x1d4
}

// CheckNMEAgainstBubbleBowl__FP4xEntPv
// Start address: 0x344d00
int32 CheckNMEAgainstBubbleBowl(xEnt* cbent, void* cbdata)
{
	zNMECommon* npc;
	xVec3 velocityNorm;
	xVec3 toTarget;
	xVec3 toTargetNorm;
	float32 distsqr;
	float32 dx__;
	float32 dy__;
	float32 dz__;
	float32 chkdistSqu;
	zEntPlayerBowlTarget* t;
	// Line 6525, Address: 0x344d00, Func Offset: 0
	// Line 6526, Address: 0x344d04, Func Offset: 0x4
	// Line 6525, Address: 0x344d08, Func Offset: 0x8
	// Line 6526, Address: 0x344d28, Func Offset: 0x28
	// Line 6531, Address: 0x344d34, Func Offset: 0x34
	// Line 6538, Address: 0x344d4c, Func Offset: 0x4c
	// Line 6535, Address: 0x344d58, Func Offset: 0x58
	// Line 6538, Address: 0x344d60, Func Offset: 0x60
	// Line 6535, Address: 0x344d64, Func Offset: 0x64
	// Line 6540, Address: 0x344d68, Func Offset: 0x68
	// Line 6537, Address: 0x344d6c, Func Offset: 0x6c
	// Line 6538, Address: 0x344d7c, Func Offset: 0x7c
	// Line 6540, Address: 0x344d90, Func Offset: 0x90
	// Line 6538, Address: 0x344d94, Func Offset: 0x94
	// Line 6535, Address: 0x344da0, Func Offset: 0xa0
	// Line 6538, Address: 0x344dac, Func Offset: 0xac
	// Line 6540, Address: 0x344dd4, Func Offset: 0xd4
	// Line 6541, Address: 0x344ddc, Func Offset: 0xdc
	// Line 6540, Address: 0x344de4, Func Offset: 0xe4
	// Line 6541, Address: 0x344de8, Func Offset: 0xe8
	// Line 6540, Address: 0x344df4, Func Offset: 0xf4
	// Line 6541, Address: 0x344df8, Func Offset: 0xf8
	// Line 6545, Address: 0x344dfc, Func Offset: 0xfc
	// Line 6541, Address: 0x344e1c, Func Offset: 0x11c
	// Line 6548, Address: 0x344e2c, Func Offset: 0x12c
	// Line 6545, Address: 0x344e30, Func Offset: 0x130
	// Line 6548, Address: 0x344e58, Func Offset: 0x158
	// Line 6553, Address: 0x344e60, Func Offset: 0x160
	// Line 6556, Address: 0x344e78, Func Offset: 0x178
	// Line 6561, Address: 0x344e7c, Func Offset: 0x17c
	// Line 6556, Address: 0x344e84, Func Offset: 0x184
	// Line 6561, Address: 0x344e88, Func Offset: 0x188
	// Line 6556, Address: 0x344e8c, Func Offset: 0x18c
	// Line 6561, Address: 0x344e98, Func Offset: 0x198
	// Line 6556, Address: 0x344e9c, Func Offset: 0x19c
	// Line 6557, Address: 0x344eac, Func Offset: 0x1ac
	// Line 6556, Address: 0x344eb0, Func Offset: 0x1b0
	// Line 6557, Address: 0x344eb4, Func Offset: 0x1b4
	// Line 6556, Address: 0x344ebc, Func Offset: 0x1bc
	// Line 6557, Address: 0x344ec0, Func Offset: 0x1c0
	// Line 6561, Address: 0x344ed0, Func Offset: 0x1d0
	// Line 6564, Address: 0x344ee0, Func Offset: 0x1e0
	// Line 6566, Address: 0x344f14, Func Offset: 0x214
	// Line 6567, Address: 0x344f1c, Func Offset: 0x21c
	// Line 6571, Address: 0x344f20, Func Offset: 0x220
	// Line 6527, Address: 0x344f2c, Func Offset: 0x22c
	// Line 6532, Address: 0x344f34, Func Offset: 0x234
	// Line 6549, Address: 0x344f3c, Func Offset: 0x23c
	// Line 6573, Address: 0x344f40, Func Offset: 0x240
	// Func End, Address: 0x344f68, Func Offset: 0x268
}

// ReturnTheFavor__FP10zNMEHazard
// Start address: 0x344f70
void ReturnTheFavor(zNMEHazard* haz)
{
	xVec3 pos_src;
	xVec3 pos_tgt;
	xVec3 vec;
	xVec3 pos_tgt;
	// Line 6444, Address: 0x344f70, Func Offset: 0
	// Line 6447, Address: 0x344f7c, Func Offset: 0xc
	// Line 6463, Address: 0x344f9c, Func Offset: 0x2c
	// Line 6464, Address: 0x344fa4, Func Offset: 0x34
	// Line 6465, Address: 0x344fa8, Func Offset: 0x38
	// Line 6464, Address: 0x344fac, Func Offset: 0x3c
	// Line 6465, Address: 0x344fb8, Func Offset: 0x48
	// Line 6464, Address: 0x344fcc, Func Offset: 0x5c
	// Line 6465, Address: 0x344fd0, Func Offset: 0x60
	// Line 6464, Address: 0x344fd8, Func Offset: 0x68
	// Line 6465, Address: 0x344fdc, Func Offset: 0x6c
	// Line 6464, Address: 0x344fe4, Func Offset: 0x74
	// Line 6465, Address: 0x344fe8, Func Offset: 0x78
	// Line 6497, Address: 0x345040, Func Offset: 0xd0
	// Line 6499, Address: 0x34504c, Func Offset: 0xdc
	// Line 6504, Address: 0x345050, Func Offset: 0xe0
	// Line 6499, Address: 0x345054, Func Offset: 0xe4
	// Line 6504, Address: 0x345058, Func Offset: 0xe8
	// Line 6499, Address: 0x34505c, Func Offset: 0xec
	// Line 6504, Address: 0x345060, Func Offset: 0xf0
	// Line 6499, Address: 0x345068, Func Offset: 0xf8
	// Line 6504, Address: 0x345070, Func Offset: 0x100
	// Line 6518, Address: 0x345078, Func Offset: 0x108
	// Line 6473, Address: 0x345084, Func Offset: 0x114
	// Line 6518, Address: 0x34508c, Func Offset: 0x11c
	// Line 6473, Address: 0x3450a4, Func Offset: 0x134
	// Line 6518, Address: 0x3450a8, Func Offset: 0x138
	// Line 6470, Address: 0x3450d8, Func Offset: 0x168
	// Line 6518, Address: 0x3450dc, Func Offset: 0x16c
	// Line 6470, Address: 0x3450e4, Func Offset: 0x174
	// Line 6518, Address: 0x3450ec, Func Offset: 0x17c
	// Line 6471, Address: 0x345120, Func Offset: 0x1b0
	// Line 6518, Address: 0x34512c, Func Offset: 0x1bc
	// Line 6473, Address: 0x345138, Func Offset: 0x1c8
	// Line 6518, Address: 0x34513c, Func Offset: 0x1cc
	// Line 6474, Address: 0x345144, Func Offset: 0x1d4
	// Line 6518, Address: 0x345148, Func Offset: 0x1d8
	// Line 6474, Address: 0x34514c, Func Offset: 0x1dc
	// Line 6518, Address: 0x345150, Func Offset: 0x1e0
	// Line 6474, Address: 0x345158, Func Offset: 0x1e8
	// Line 6518, Address: 0x345164, Func Offset: 0x1f4
	// Line 6479, Address: 0x345174, Func Offset: 0x204
	// Line 6518, Address: 0x34517c, Func Offset: 0x20c
	// Line 6479, Address: 0x34518c, Func Offset: 0x21c
	// Line 6480, Address: 0x345190, Func Offset: 0x220
	// Line 6518, Address: 0x345194, Func Offset: 0x224
	// Line 6479, Address: 0x345198, Func Offset: 0x228
	// Line 6518, Address: 0x34519c, Func Offset: 0x22c
	// Line 6479, Address: 0x3451a0, Func Offset: 0x230
	// Line 6480, Address: 0x3451a4, Func Offset: 0x234
	// Line 6518, Address: 0x3451a8, Func Offset: 0x238
	// Line 6519, Address: 0x3451d8, Func Offset: 0x268
	// Func End, Address: 0x3451e4, Func Offset: 0x274
}

// HazardCheck__FR10zNMEHazardPv
// Start address: 0x3451f0
uint8 HazardCheck(zNMEHazard& haz, void* context)
{
	Melee_cbData* cbdata;
	xBound* bnd;
	xVec3 vec_toHaz;
	// Line 6410, Address: 0x3451f0, Func Offset: 0
	// Line 6426, Address: 0x3451f8, Func Offset: 0x8
	// Line 6410, Address: 0x3451fc, Func Offset: 0xc
	// Line 6426, Address: 0x345200, Func Offset: 0x10
	// Line 6410, Address: 0x345204, Func Offset: 0x14
	// Line 6426, Address: 0x345208, Func Offset: 0x18
	// Line 6421, Address: 0x345210, Func Offset: 0x20
	// Line 6426, Address: 0x345214, Func Offset: 0x24
	// Line 6428, Address: 0x345224, Func Offset: 0x34
	// Line 6426, Address: 0x345228, Func Offset: 0x38
	// Line 6428, Address: 0x345270, Func Offset: 0x80
	// Line 6426, Address: 0x345274, Func Offset: 0x84
	// Line 6427, Address: 0x345284, Func Offset: 0x94
	// Line 6426, Address: 0x345288, Func Offset: 0x98
	// Line 6427, Address: 0x345290, Func Offset: 0xa0
	// Line 6428, Address: 0x3452a4, Func Offset: 0xb4
	// Line 6429, Address: 0x3452b4, Func Offset: 0xc4
	// Line 6433, Address: 0x3452bc, Func Offset: 0xcc
	// Line 6437, Address: 0x3452c4, Func Offset: 0xd4
	// Line 6438, Address: 0x3452c8, Func Offset: 0xd8
	// Line 6437, Address: 0x3452cc, Func Offset: 0xdc
	// Line 6438, Address: 0x3452d0, Func Offset: 0xe0
	// Line 6440, Address: 0x3452d8, Func Offset: 0xe8
	// Line 6441, Address: 0x3452dc, Func Offset: 0xec
	// Func End, Address: 0x3452f0, Func Offset: 0x100
}

// CheckObjectAgainstBound__FP4xEntPv
// Start address: 0x3452f0
int32 CheckObjectAgainstBound(xEnt* cbent, void* cbdata)
{
	Melee_cbData* data;
	int32 hitsomething;
	xEnt* ent;
	en_plyratak attack;
	xBound* meleeB;
	xCollis meleeColl;
	xBound tempBound;
	zEntSimpleObj* simpleObj;
	en_xEventTags attackEvent;
	en_npcdmg attackNMEDamageType;
	uint32 attackButtonActType;
	float32 hitParams[4];
	zNMECommon* npc;
	xEntBoulder* boul;
	xVec3 f;
	uint32 paddleFlags;
	uint32 worldSpaceNorm;
	xRay3 tempray;
	float32 hitParams[4];
	// Line 6080, Address: 0x3452f0, Func Offset: 0
	// Line 6094, Address: 0x345320, Func Offset: 0x30
	// Line 6082, Address: 0x345324, Func Offset: 0x34
	// Line 6083, Address: 0x345328, Func Offset: 0x38
	// Line 6085, Address: 0x34532c, Func Offset: 0x3c
	// Line 6086, Address: 0x345330, Func Offset: 0x40
	// Line 6094, Address: 0x345334, Func Offset: 0x44
	// Line 6112, Address: 0x345388, Func Offset: 0x98
	// Line 6123, Address: 0x3453a8, Func Offset: 0xb8
	// Line 6126, Address: 0x3453b4, Func Offset: 0xc4
	// Line 6131, Address: 0x3453c4, Func Offset: 0xd4
	// Line 6149, Address: 0x3453d4, Func Offset: 0xe4
	// Line 6153, Address: 0x3453fc, Func Offset: 0x10c
	// Line 6154, Address: 0x345400, Func Offset: 0x110
	// Line 6156, Address: 0x345404, Func Offset: 0x114
	// Line 6158, Address: 0x34540c, Func Offset: 0x11c
	// Line 6159, Address: 0x345410, Func Offset: 0x120
	// Line 6161, Address: 0x345414, Func Offset: 0x124
	// Line 6163, Address: 0x34541c, Func Offset: 0x12c
	// Line 6164, Address: 0x345420, Func Offset: 0x130
	// Line 6166, Address: 0x345424, Func Offset: 0x134
	// Line 6168, Address: 0x34542c, Func Offset: 0x13c
	// Line 6169, Address: 0x345430, Func Offset: 0x140
	// Line 6171, Address: 0x345434, Func Offset: 0x144
	// Line 6174, Address: 0x34543c, Func Offset: 0x14c
	// Line 6175, Address: 0x345440, Func Offset: 0x150
	// Line 6177, Address: 0x345444, Func Offset: 0x154
	// Line 6181, Address: 0x34544c, Func Offset: 0x15c
	// Line 6179, Address: 0x345450, Func Offset: 0x160
	// Line 6180, Address: 0x345454, Func Offset: 0x164
	// Line 6182, Address: 0x345458, Func Offset: 0x168
	// Line 6184, Address: 0x345460, Func Offset: 0x170
	// Line 6185, Address: 0x345464, Func Offset: 0x174
	// Line 6187, Address: 0x345468, Func Offset: 0x178
	// Line 6189, Address: 0x345470, Func Offset: 0x180
	// Line 6190, Address: 0x345474, Func Offset: 0x184
	// Line 6193, Address: 0x345478, Func Offset: 0x188
	// Line 6195, Address: 0x345480, Func Offset: 0x190
	// Line 6196, Address: 0x345484, Func Offset: 0x194
	// Line 6197, Address: 0x345488, Func Offset: 0x198
	// Line 6206, Address: 0x345490, Func Offset: 0x1a0
	// Line 6223, Address: 0x3454a4, Func Offset: 0x1b4
	// Line 6224, Address: 0x3454b0, Func Offset: 0x1c0
	// Line 6223, Address: 0x3454cc, Func Offset: 0x1dc
	// Line 6224, Address: 0x3454f0, Func Offset: 0x200
	// Line 6228, Address: 0x3454fc, Func Offset: 0x20c
	// Line 6278, Address: 0x345508, Func Offset: 0x218
	// Line 6292, Address: 0x345514, Func Offset: 0x224
	// Line 6306, Address: 0x34551c, Func Offset: 0x22c
	// Line 6372, Address: 0x345528, Func Offset: 0x238
	// Line 6379, Address: 0x345534, Func Offset: 0x244
	// Line 6382, Address: 0x345558, Func Offset: 0x268
	// Line 6385, Address: 0x34555c, Func Offset: 0x26c
	// Line 6390, Address: 0x345564, Func Offset: 0x274
	// Line 6392, Address: 0x345568, Func Offset: 0x278
	// Line 6099, Address: 0x345570, Func Offset: 0x280
	// Line 6115, Address: 0x34557c, Func Offset: 0x28c
	// Line 6117, Address: 0x345580, Func Offset: 0x290
	// Line 6392, Address: 0x345584, Func Offset: 0x294
	// Line 6117, Address: 0x345588, Func Offset: 0x298
	// Line 6392, Address: 0x34558c, Func Offset: 0x29c
	// Line 6117, Address: 0x34559c, Func Offset: 0x2ac
	// Line 6118, Address: 0x3455a0, Func Offset: 0x2b0
	// Line 6392, Address: 0x3455a4, Func Offset: 0x2b4
	// Line 6117, Address: 0x3455c4, Func Offset: 0x2d4
	// Line 6392, Address: 0x3455c8, Func Offset: 0x2d8
	// Line 6119, Address: 0x3455d0, Func Offset: 0x2e0
	// Line 6392, Address: 0x3455d4, Func Offset: 0x2e4
	// Line 6120, Address: 0x3455e0, Func Offset: 0x2f0
	// Line 6127, Address: 0x3455e8, Func Offset: 0x2f8
	// Line 6392, Address: 0x3455f0, Func Offset: 0x300
	// Line 6138, Address: 0x345604, Func Offset: 0x314
	// Line 6392, Address: 0x345608, Func Offset: 0x318
	// Line 6140, Address: 0x34561c, Func Offset: 0x32c
	// Line 6392, Address: 0x345624, Func Offset: 0x334
	// Line 6135, Address: 0x345634, Func Offset: 0x344
	// Line 6392, Address: 0x34563c, Func Offset: 0x34c
	// Line 6256, Address: 0x345640, Func Offset: 0x350
	// Line 6392, Address: 0x34564c, Func Offset: 0x35c
	// Line 6257, Address: 0x345658, Func Offset: 0x368
	// Line 6392, Address: 0x34565c, Func Offset: 0x36c
	// Line 6257, Address: 0x345660, Func Offset: 0x370
	// Line 6392, Address: 0x34566c, Func Offset: 0x37c
	// Line 6258, Address: 0x34567c, Func Offset: 0x38c
	// Line 6392, Address: 0x345684, Func Offset: 0x394
	// Line 6259, Address: 0x345688, Func Offset: 0x398
	// Line 6392, Address: 0x34568c, Func Offset: 0x39c
	// Line 6259, Address: 0x345690, Func Offset: 0x3a0
	// Line 6392, Address: 0x34569c, Func Offset: 0x3ac
	// Line 6264, Address: 0x3456d4, Func Offset: 0x3e4
	// Line 6392, Address: 0x3456d8, Func Offset: 0x3e8
	// Line 6264, Address: 0x3456e4, Func Offset: 0x3f4
	// Line 6392, Address: 0x3456e8, Func Offset: 0x3f8
	// Line 6264, Address: 0x345700, Func Offset: 0x410
	// Line 6392, Address: 0x34570c, Func Offset: 0x41c
	// Line 6264, Address: 0x345720, Func Offset: 0x430
	// Line 6392, Address: 0x345724, Func Offset: 0x434
	// Line 6264, Address: 0x34573c, Func Offset: 0x44c
	// Line 6392, Address: 0x345744, Func Offset: 0x454
	// Line 6264, Address: 0x345748, Func Offset: 0x458
	// Line 6392, Address: 0x34574c, Func Offset: 0x45c
	// Line 6264, Address: 0x345770, Func Offset: 0x480
	// Line 6392, Address: 0x345774, Func Offset: 0x484
	// Line 6264, Address: 0x345778, Func Offset: 0x488
	// Line 6392, Address: 0x34577c, Func Offset: 0x48c
	// Line 6264, Address: 0x345784, Func Offset: 0x494
	// Line 6392, Address: 0x34578c, Func Offset: 0x49c
	// Line 6265, Address: 0x3457a8, Func Offset: 0x4b8
	// Line 6269, Address: 0x3457b0, Func Offset: 0x4c0
	// Line 6392, Address: 0x3457b4, Func Offset: 0x4c4
	// Line 6269, Address: 0x3457c0, Func Offset: 0x4d0
	// Line 6392, Address: 0x3457cc, Func Offset: 0x4dc
	// Line 6269, Address: 0x3457d4, Func Offset: 0x4e4
	// Line 6392, Address: 0x3457d8, Func Offset: 0x4e8
	// Line 6273, Address: 0x3457e8, Func Offset: 0x4f8
	// Line 6392, Address: 0x3457ec, Func Offset: 0x4fc
	// Line 6273, Address: 0x3457f0, Func Offset: 0x500
	// Line 6392, Address: 0x3457f4, Func Offset: 0x504
	// Line 6274, Address: 0x345850, Func Offset: 0x560
	// Line 6392, Address: 0x345864, Func Offset: 0x574
	// Line 6274, Address: 0x345884, Func Offset: 0x594
	// Line 6392, Address: 0x345888, Func Offset: 0x598
	// Line 6274, Address: 0x34588c, Func Offset: 0x59c
	// Line 6392, Address: 0x345890, Func Offset: 0x5a0
	// Line 6274, Address: 0x345894, Func Offset: 0x5a4
	// Line 6392, Address: 0x345898, Func Offset: 0x5a8
	// Line 6274, Address: 0x3458b4, Func Offset: 0x5c4
	// Line 6392, Address: 0x3458d8, Func Offset: 0x5e8
	// Line 6274, Address: 0x3458dc, Func Offset: 0x5ec
	// Line 6392, Address: 0x3458e8, Func Offset: 0x5f8
	// Line 6274, Address: 0x3458ec, Func Offset: 0x5fc
	// Line 6392, Address: 0x3458f8, Func Offset: 0x608
	// Line 6278, Address: 0x345908, Func Offset: 0x618
	// Line 6392, Address: 0x345910, Func Offset: 0x620
	// Line 6280, Address: 0x345918, Func Offset: 0x628
	// Line 6392, Address: 0x34591c, Func Offset: 0x62c
	// Line 6281, Address: 0x345924, Func Offset: 0x634
	// Line 6392, Address: 0x34593c, Func Offset: 0x64c
	// Line 6287, Address: 0x345954, Func Offset: 0x664
	// Line 6392, Address: 0x345958, Func Offset: 0x668
	// Line 6284, Address: 0x34596c, Func Offset: 0x67c
	// Line 6392, Address: 0x345970, Func Offset: 0x680
	// Line 6284, Address: 0x34597c, Func Offset: 0x68c
	// Line 6392, Address: 0x345980, Func Offset: 0x690
	// Line 6284, Address: 0x34598c, Func Offset: 0x69c
	// Line 6392, Address: 0x345990, Func Offset: 0x6a0
	// Line 6288, Address: 0x34599c, Func Offset: 0x6ac
	// Line 6392, Address: 0x3459a0, Func Offset: 0x6b0
	// Line 6289, Address: 0x3459a4, Func Offset: 0x6b4
	// Line 6392, Address: 0x3459a8, Func Offset: 0x6b8
	// Line 6288, Address: 0x3459b0, Func Offset: 0x6c0
	// Line 6392, Address: 0x3459c4, Func Offset: 0x6d4
	// Line 6292, Address: 0x3459d4, Func Offset: 0x6e4
	// Line 6392, Address: 0x3459dc, Func Offset: 0x6ec
	// Line 6293, Address: 0x3459fc, Func Offset: 0x70c
	// Line 6392, Address: 0x345a14, Func Offset: 0x724
	// Line 6293, Address: 0x345a34, Func Offset: 0x744
	// Line 6392, Address: 0x345a4c, Func Offset: 0x75c
	// Line 6293, Address: 0x345a58, Func Offset: 0x768
	// Line 6392, Address: 0x345a5c, Func Offset: 0x76c
	// Line 6293, Address: 0x345a74, Func Offset: 0x784
	// Line 6392, Address: 0x345a7c, Func Offset: 0x78c
	// Line 6293, Address: 0x345a90, Func Offset: 0x7a0
	// Line 6392, Address: 0x345a94, Func Offset: 0x7a4
	// Line 6293, Address: 0x345aac, Func Offset: 0x7bc
	// Line 6392, Address: 0x345ab8, Func Offset: 0x7c8
	// Line 6293, Address: 0x345acc, Func Offset: 0x7dc
	// Line 6392, Address: 0x345ad0, Func Offset: 0x7e0
	// Line 6293, Address: 0x345ae0, Func Offset: 0x7f0
	// Line 6392, Address: 0x345aec, Func Offset: 0x7fc
	// Line 6297, Address: 0x345b10, Func Offset: 0x820
	// Line 6392, Address: 0x345b14, Func Offset: 0x824
	// Line 6297, Address: 0x345b20, Func Offset: 0x830
	// Line 6392, Address: 0x345b2c, Func Offset: 0x83c
	// Line 6301, Address: 0x345b44, Func Offset: 0x854
	// Line 6392, Address: 0x345b48, Func Offset: 0x858
	// Line 6301, Address: 0x345b4c, Func Offset: 0x85c
	// Line 6392, Address: 0x345b50, Func Offset: 0x860
	// Line 6302, Address: 0x345bac, Func Offset: 0x8bc
	// Line 6392, Address: 0x345bc0, Func Offset: 0x8d0
	// Line 6302, Address: 0x345be0, Func Offset: 0x8f0
	// Line 6392, Address: 0x345be4, Func Offset: 0x8f4
	// Line 6302, Address: 0x345be8, Func Offset: 0x8f8
	// Line 6392, Address: 0x345bec, Func Offset: 0x8fc
	// Line 6302, Address: 0x345bf0, Func Offset: 0x900
	// Line 6392, Address: 0x345bf4, Func Offset: 0x904
	// Line 6302, Address: 0x345c10, Func Offset: 0x920
	// Line 6392, Address: 0x345c34, Func Offset: 0x944
	// Line 6302, Address: 0x345c38, Func Offset: 0x948
	// Line 6392, Address: 0x345c44, Func Offset: 0x954
	// Line 6302, Address: 0x345c48, Func Offset: 0x958
	// Line 6392, Address: 0x345c54, Func Offset: 0x964
	// Line 6306, Address: 0x345c64, Func Offset: 0x974
	// Line 6392, Address: 0x345c6c, Func Offset: 0x97c
	// Line 6306, Address: 0x345c70, Func Offset: 0x980
	// Line 6392, Address: 0x345c74, Func Offset: 0x984
	// Line 6311, Address: 0x345c80, Func Offset: 0x990
	// Line 6392, Address: 0x345c84, Func Offset: 0x994
	// Line 6311, Address: 0x345c8c, Func Offset: 0x99c
	// Line 6392, Address: 0x345c90, Func Offset: 0x9a0
	// Line 6311, Address: 0x345ca4, Func Offset: 0x9b4
	// Line 6392, Address: 0x345ca8, Func Offset: 0x9b8
	// Line 6345, Address: 0x345cd0, Func Offset: 0x9e0
	// Line 6392, Address: 0x345cd4, Func Offset: 0x9e4
	// Line 6345, Address: 0x345d30, Func Offset: 0xa40
	// Line 6392, Address: 0x345d34, Func Offset: 0xa44
	// Line 6345, Address: 0x345d38, Func Offset: 0xa48
	// Line 6347, Address: 0x345d4c, Func Offset: 0xa5c
	// Line 6392, Address: 0x345d50, Func Offset: 0xa60
	// Line 6348, Address: 0x345d5c, Func Offset: 0xa6c
	// Line 6392, Address: 0x345d60, Func Offset: 0xa70
	// Line 6351, Address: 0x345d64, Func Offset: 0xa74
	// Line 6352, Address: 0x345d68, Func Offset: 0xa78
	// Line 6392, Address: 0x345d6c, Func Offset: 0xa7c
	// Line 6356, Address: 0x345d88, Func Offset: 0xa98
	// Line 6392, Address: 0x345d8c, Func Offset: 0xa9c
	// Line 6362, Address: 0x345d98, Func Offset: 0xaa8
	// Line 6392, Address: 0x345d9c, Func Offset: 0xaac
	// Line 6364, Address: 0x345da8, Func Offset: 0xab8
	// Line 6392, Address: 0x345dac, Func Offset: 0xabc
	// Line 6364, Address: 0x345db0, Func Offset: 0xac0
	// Line 6392, Address: 0x345db4, Func Offset: 0xac4
	// Line 6370, Address: 0x345dcc, Func Offset: 0xadc
	// Line 6392, Address: 0x345dd4, Func Offset: 0xae4
	// Line 6334, Address: 0x345df4, Func Offset: 0xb04
	// Line 6392, Address: 0x345dfc, Func Offset: 0xb0c
	// Line 6328, Address: 0x345e1c, Func Offset: 0xb2c
	// Line 6392, Address: 0x345e20, Func Offset: 0xb30
	// Line 6330, Address: 0x345e38, Func Offset: 0xb48
	// Line 6392, Address: 0x345e3c, Func Offset: 0xb4c
	// Line 6331, Address: 0x345e44, Func Offset: 0xb54
	// Line 6392, Address: 0x345e48, Func Offset: 0xb58
	// Line 6332, Address: 0x345e50, Func Offset: 0xb60
	// Line 6392, Address: 0x345e54, Func Offset: 0xb64
	// Line 6334, Address: 0x345e64, Func Offset: 0xb74
	// Line 6335, Address: 0x345e68, Func Offset: 0xb78
	// Line 6359, Address: 0x345e70, Func Offset: 0xb80
	// Line 6392, Address: 0x345e74, Func Offset: 0xb84
	// Line 6375, Address: 0x345e90, Func Offset: 0xba0
	// Line 6392, Address: 0x345e94, Func Offset: 0xba4
	// Line 6375, Address: 0x345e98, Func Offset: 0xba8
	// Line 6392, Address: 0x345e9c, Func Offset: 0xbac
	// Line 6375, Address: 0x345ea0, Func Offset: 0xbb0
	// Line 6392, Address: 0x345eb4, Func Offset: 0xbc4
	// Line 6376, Address: 0x345ee0, Func Offset: 0xbf0
	// Line 6392, Address: 0x345ee8, Func Offset: 0xbf8
	// Line 6393, Address: 0x345ef8, Func Offset: 0xc08
	// Func End, Address: 0x345f28, Func Offset: 0xc38
}

// AttackBoundCollide__FP4xEntP6zSceneP6xBound11en_plyratak
// Start address: 0x345f30
int32 AttackBoundCollide(xEnt* ent, zScene* zsc, xBound* meleeB, en_plyratak attack)
{
	Melee_cbData cbdata;
	xVec3 pos;
	int32 doHazChk;
	en_plyrpup pup;
	int32 hitSave;
	// Line 6004, Address: 0x345f30, Func Offset: 0
	// Line 6019, Address: 0x345f38, Func Offset: 0x8
	// Line 6004, Address: 0x345f3c, Func Offset: 0xc
	// Line 6014, Address: 0x345f4c, Func Offset: 0x1c
	// Line 6012, Address: 0x345f54, Func Offset: 0x24
	// Line 6013, Address: 0x345f58, Func Offset: 0x28
	// Line 6019, Address: 0x345f5c, Func Offset: 0x2c
	// Line 6014, Address: 0x345f60, Func Offset: 0x30
	// Line 6019, Address: 0x345f64, Func Offset: 0x34
	// Line 6016, Address: 0x345f68, Func Offset: 0x38
	// Line 6019, Address: 0x345f6c, Func Offset: 0x3c
	// Line 6015, Address: 0x345f70, Func Offset: 0x40
	// Line 6019, Address: 0x345f74, Func Offset: 0x44
	// Line 6018, Address: 0x345f78, Func Offset: 0x48
	// Line 6019, Address: 0x345f7c, Func Offset: 0x4c
	// Line 6018, Address: 0x345f80, Func Offset: 0x50
	// Line 6019, Address: 0x345f90, Func Offset: 0x60
	// Line 6025, Address: 0x345f98, Func Offset: 0x68
	// Line 6031, Address: 0x345fb8, Func Offset: 0x88
	// Line 6043, Address: 0x345fd8, Func Offset: 0xa8
	// Line 6045, Address: 0x345ff8, Func Offset: 0xc8
	// Line 6046, Address: 0x345ffc, Func Offset: 0xcc
	// Line 6047, Address: 0x346004, Func Offset: 0xd4
	// Line 6050, Address: 0x34600c, Func Offset: 0xdc
	// Line 6051, Address: 0x346010, Func Offset: 0xe0
	// Line 6060, Address: 0x34601c, Func Offset: 0xec
	// Line 6064, Address: 0x346038, Func Offset: 0x108
	// Line 6066, Address: 0x34603c, Func Offset: 0x10c
	// Line 6067, Address: 0x346054, Func Offset: 0x124
	// Line 6069, Address: 0x346060, Func Offset: 0x130
	// Line 6070, Address: 0x346180, Func Offset: 0x250
	// Line 6072, Address: 0x3461c4, Func Offset: 0x294
	// Line 6076, Address: 0x3461e0, Func Offset: 0x2b0
	// Line 6077, Address: 0x3461e4, Func Offset: 0x2b4
	// Func End, Address: 0x3461fc, Func Offset: 0x2cc
}

// zEntPlayerKillGauntlet__Fv
// Start address: 0x346200
void zEntPlayerKillGauntlet()
{
	// Line 5987, Address: 0x346200, Func Offset: 0
	// Line 5988, Address: 0x346204, Func Offset: 0x4
	// Line 5989, Address: 0x346208, Func Offset: 0x8
	// Line 5991, Address: 0x34620c, Func Offset: 0xc
	// Func End, Address: 0x346214, Func Offset: 0x14
}

// StunRadiusCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x346220
uint32 StunRadiusCB()
{
	// Line 5882, Address: 0x346220, Func Offset: 0
	// Line 5884, Address: 0x346224, Func Offset: 0x4
	// Line 5882, Address: 0x346228, Func Offset: 0x8
	// Line 5884, Address: 0x34622c, Func Offset: 0xc
	// Line 5885, Address: 0x34623c, Func Offset: 0x1c
	// Line 5887, Address: 0x346360, Func Offset: 0x140
	// Line 5889, Address: 0x34647c, Func Offset: 0x25c
	// Line 5927, Address: 0x3464c0, Func Offset: 0x2a0
	// Line 5926, Address: 0x3464c4, Func Offset: 0x2a4
	// Line 5927, Address: 0x3464c8, Func Offset: 0x2a8
	// Line 5926, Address: 0x3464cc, Func Offset: 0x2ac
	// Line 5927, Address: 0x3464d0, Func Offset: 0x2b0
	// Line 5926, Address: 0x3464d8, Func Offset: 0x2b8
	// Line 5927, Address: 0x3464e0, Func Offset: 0x2c0
	// Line 5930, Address: 0x346500, Func Offset: 0x2e0
	// Line 5931, Address: 0x346508, Func Offset: 0x2e8
	// Line 5932, Address: 0x34656c, Func Offset: 0x34c
	// Line 5933, Address: 0x346578, Func Offset: 0x358
	// Line 5940, Address: 0x346594, Func Offset: 0x374
	// Line 5943, Address: 0x3465c0, Func Offset: 0x3a0
	// Line 5944, Address: 0x3465c8, Func Offset: 0x3a8
	// Line 5946, Address: 0x346628, Func Offset: 0x408
	// Line 5950, Address: 0x346640, Func Offset: 0x420
	// Line 5951, Address: 0x346648, Func Offset: 0x428
	// Line 5955, Address: 0x3466ac, Func Offset: 0x48c
	// Line 5937, Address: 0x3466e0, Func Offset: 0x4c0
	// Line 5955, Address: 0x346704, Func Offset: 0x4e4
	// Line 5937, Address: 0x346708, Func Offset: 0x4e8
	// Line 5955, Address: 0x346714, Func Offset: 0x4f4
	// Line 5937, Address: 0x346718, Func Offset: 0x4f8
	// Line 5955, Address: 0x346724, Func Offset: 0x504
	// Line 5939, Address: 0x346734, Func Offset: 0x514
	// Line 5956, Address: 0x34673c, Func Offset: 0x51c
	// Func End, Address: 0x346744, Func Offset: 0x524
}

// StunStartFallCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x346750
uint32 StunStartFallCB()
{
	// Line 5877, Address: 0x346750, Func Offset: 0
	// Line 5879, Address: 0x346754, Func Offset: 0x4
	// Func End, Address: 0x34675c, Func Offset: 0xc
}

// LassoSwingReleaseCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x346760
uint32 LassoSwingReleaseCB()
{
	// Line 5805, Address: 0x346760, Func Offset: 0
	// Line 5807, Address: 0x34676c, Func Offset: 0xc
	// Line 5810, Address: 0x346824, Func Offset: 0xc4
	// Line 5818, Address: 0x346828, Func Offset: 0xc8
	// Line 5810, Address: 0x34682c, Func Offset: 0xcc
	// Line 5811, Address: 0x346830, Func Offset: 0xd0
	// Line 5809, Address: 0x346838, Func Offset: 0xd8
	// Line 5811, Address: 0x34683c, Func Offset: 0xdc
	// Line 5812, Address: 0x346840, Func Offset: 0xe0
	// Line 5816, Address: 0x346844, Func Offset: 0xe4
	// Line 5812, Address: 0x346848, Func Offset: 0xe8
	// Line 5818, Address: 0x34684c, Func Offset: 0xec
	// Line 5826, Address: 0x346850, Func Offset: 0xf0
	// Line 5819, Address: 0x346854, Func Offset: 0xf4
	// Line 5826, Address: 0x34685c, Func Offset: 0xfc
	// Line 5828, Address: 0x346ca4, Func Offset: 0x544
	// Line 5826, Address: 0x346cc0, Func Offset: 0x560
	// Line 5828, Address: 0x346ccc, Func Offset: 0x56c
	// Line 5829, Address: 0x346ce4, Func Offset: 0x584
	// Func End, Address: 0x346cf0, Func Offset: 0x590
}

// LassoSwingGroundedCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x346cf0
uint32 LassoSwingGroundedCB()
{
	// Line 5786, Address: 0x346cf0, Func Offset: 0
	// Line 5788, Address: 0x346cfc, Func Offset: 0xc
	// Line 5792, Address: 0x346db0, Func Offset: 0xc0
	// Line 5791, Address: 0x346db4, Func Offset: 0xc4
	// Line 5794, Address: 0x346dbc, Func Offset: 0xcc
	// Line 5790, Address: 0x346dc0, Func Offset: 0xd0
	// Line 5796, Address: 0x346dc4, Func Offset: 0xd4
	// Line 5792, Address: 0x346dc8, Func Offset: 0xd8
	// Line 5793, Address: 0x346dcc, Func Offset: 0xdc
	// Line 5794, Address: 0x346dd4, Func Offset: 0xe4
	// Line 5797, Address: 0x346dd8, Func Offset: 0xe8
	// Func End, Address: 0x346de4, Func Offset: 0xf4
}

// LassoSwingCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x346df0
uint32 LassoSwingCB(xAnimSingle* anim)
{
	// Line 5767, Address: 0x346df0, Func Offset: 0
	// Line 5770, Address: 0x346df4, Func Offset: 0x4
	// Line 5767, Address: 0x346df8, Func Offset: 0x8
	// Line 5772, Address: 0x346dfc, Func Offset: 0xc
	// Line 5767, Address: 0x346e00, Func Offset: 0x10
	// Line 5770, Address: 0x346e04, Func Offset: 0x14
	// Line 5772, Address: 0x346e0c, Func Offset: 0x1c
	// Line 5774, Address: 0x346e18, Func Offset: 0x28
	// Line 5775, Address: 0x346e20, Func Offset: 0x30
	// Line 5776, Address: 0x346e24, Func Offset: 0x34
	// Line 5777, Address: 0x346e2c, Func Offset: 0x3c
	// Line 5780, Address: 0x346e3c, Func Offset: 0x4c
	// Line 5784, Address: 0x346e80, Func Offset: 0x90
	// Line 5783, Address: 0x346e84, Func Offset: 0x94
	// Line 5784, Address: 0x346e88, Func Offset: 0x98
	// Func End, Address: 0x346e94, Func Offset: 0xa4
}

// LassoSwingTossCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x346ea0
uint32 LassoSwingTossCB()
{
	// Line 5744, Address: 0x346ea0, Func Offset: 0
	// Line 5748, Address: 0x346eac, Func Offset: 0xc
	// Line 5749, Address: 0x346f70, Func Offset: 0xd0
	// Line 5751, Address: 0x347078, Func Offset: 0x1d8
	// Line 5752, Address: 0x347080, Func Offset: 0x1e0
	// Line 5751, Address: 0x34708c, Func Offset: 0x1ec
	// Line 5752, Address: 0x347090, Func Offset: 0x1f0
	// Line 5756, Address: 0x347098, Func Offset: 0x1f8
	// Line 5757, Address: 0x34709c, Func Offset: 0x1fc
	// Line 5756, Address: 0x3470a4, Func Offset: 0x204
	// Line 5757, Address: 0x3470a8, Func Offset: 0x208
	// Line 5756, Address: 0x3470b0, Func Offset: 0x210
	// Line 5757, Address: 0x3470cc, Func Offset: 0x22c
	// Line 5759, Address: 0x34711c, Func Offset: 0x27c
	// Line 5760, Address: 0x34714c, Func Offset: 0x2ac
	// Line 5763, Address: 0x34717c, Func Offset: 0x2dc
	// Line 5764, Address: 0x347188, Func Offset: 0x2e8
	// Line 5761, Address: 0x3471ac, Func Offset: 0x30c
	// Line 5764, Address: 0x3471b0, Func Offset: 0x310
	// Line 5761, Address: 0x3471b8, Func Offset: 0x318
	// Line 5764, Address: 0x3471bc, Func Offset: 0x31c
	// Line 5761, Address: 0x3471c4, Func Offset: 0x324
	// Line 5765, Address: 0x3471d0, Func Offset: 0x330
	// Func End, Address: 0x3471dc, Func Offset: 0x33c
}

// LassoSwingGroundedBeginCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x3471e0
uint32 LassoSwingGroundedBeginCB(xAnimTransition* tran, xAnimSingle* anim, void* object)
{
	xEnt* ent;
	// Line 5734, Address: 0x3471e0, Func Offset: 0
	// Line 5737, Address: 0x3471e4, Func Offset: 0x4
	// Line 5734, Address: 0x3471e8, Func Offset: 0x8
	// Line 5737, Address: 0x347200, Func Offset: 0x20
	// Line 5738, Address: 0x34764c, Func Offset: 0x46c
	// Line 5739, Address: 0x347658, Func Offset: 0x478
	// Line 5738, Address: 0x347664, Func Offset: 0x484
	// Line 5739, Address: 0x34766c, Func Offset: 0x48c
	// Line 5741, Address: 0x347674, Func Offset: 0x494
	// Line 5737, Address: 0x347690, Func Offset: 0x4b0
	// Line 5741, Address: 0x34769c, Func Offset: 0x4bc
	// Line 5742, Address: 0x3476b4, Func Offset: 0x4d4
	// Func End, Address: 0x3476cc, Func Offset: 0x4ec
}

// LassoSwingBeginCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x3476d0
uint32 LassoSwingBeginCB(void* object)
{
	xEnt* ent;
	// Line 5697, Address: 0x3476d0, Func Offset: 0
	// Line 5700, Address: 0x3476dc, Func Offset: 0xc
	// Line 5698, Address: 0x3476e0, Func Offset: 0x10
	// Line 5702, Address: 0x3476e4, Func Offset: 0x14
	// Line 5709, Address: 0x3476f4, Func Offset: 0x24
	// Line 5711, Address: 0x3476f8, Func Offset: 0x28
	// Line 5709, Address: 0x3476fc, Func Offset: 0x2c
	// Line 5711, Address: 0x347700, Func Offset: 0x30
	// Line 5712, Address: 0x347710, Func Offset: 0x40
	// Line 5714, Address: 0x347714, Func Offset: 0x44
	// Line 5712, Address: 0x347718, Func Offset: 0x48
	// Line 5714, Address: 0x347738, Func Offset: 0x68
	// Line 5715, Address: 0x347854, Func Offset: 0x184
	// Line 5717, Address: 0x347898, Func Offset: 0x1c8
	// Line 5724, Address: 0x3478a0, Func Offset: 0x1d0
	// Line 5728, Address: 0x3478ac, Func Offset: 0x1dc
	// Line 5717, Address: 0x3478b0, Func Offset: 0x1e0
	// Line 5719, Address: 0x3478b4, Func Offset: 0x1e4
	// Line 5722, Address: 0x3478d0, Func Offset: 0x200
	// Line 5724, Address: 0x3478f4, Func Offset: 0x224
	// Line 5728, Address: 0x347910, Func Offset: 0x240
	// Line 5729, Address: 0x347918, Func Offset: 0x248
	// Line 5730, Address: 0x347920, Func Offset: 0x250
	// Line 5732, Address: 0x347928, Func Offset: 0x258
	// Line 5704, Address: 0x347930, Func Offset: 0x260
	// Line 5705, Address: 0x347934, Func Offset: 0x264
	// Line 5732, Address: 0x347938, Func Offset: 0x268
	// Line 5705, Address: 0x34793c, Func Offset: 0x26c
	// Line 5732, Address: 0x347944, Func Offset: 0x274
	// Line 5707, Address: 0x347964, Func Offset: 0x294
	// Line 5733, Address: 0x34796c, Func Offset: 0x29c
	// Func End, Address: 0x34797c, Func Offset: 0x2ac
}

// LassoSwingReleaseCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x347980
uint32 LassoSwingReleaseCheck()
{
	// Line 5690, Address: 0x347980, Func Offset: 0
	// Line 5694, Address: 0x347a18, Func Offset: 0x98
	// Func End, Address: 0x347a20, Func Offset: 0xa0
}

// LassoSwingBeginCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x347a20
uint32 LassoSwingBeginCheck()
{
	// Line 5679, Address: 0x347a20, Func Offset: 0
	// Line 5681, Address: 0x347a40, Func Offset: 0x20
	// Func End, Address: 0x347a48, Func Offset: 0x28
}

// LassoSwingGroundedBeginCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x347a50
uint32 LassoSwingGroundedBeginCheck()
{
	// Line 5674, Address: 0x347a50, Func Offset: 0
	// Line 5676, Address: 0x347a74, Func Offset: 0x24
	// Func End, Address: 0x347a7c, Func Offset: 0x2c
}

// PatrickHammerThrowCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x347a80
uint32 PatrickHammerThrowCB(void* object)
{
	zEnt* ent;
	// Line 5561, Address: 0x347a80, Func Offset: 0
	// Line 5562, Address: 0x347a88, Func Offset: 0x8
	// Line 5564, Address: 0x347a8c, Func Offset: 0xc
	// Line 5565, Address: 0x347aa4, Func Offset: 0x24
	// Line 5569, Address: 0x347aa8, Func Offset: 0x28
	// Line 5570, Address: 0x347ab0, Func Offset: 0x30
	// Line 5571, Address: 0x347b74, Func Offset: 0xf4
	// Line 5572, Address: 0x347c80, Func Offset: 0x200
	// Line 5574, Address: 0x347cc4, Func Offset: 0x244
	// Line 5575, Address: 0x347cfc, Func Offset: 0x27c
	// Func End, Address: 0x347d04, Func Offset: 0x284
}

// PatrickHammerSpinCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x347d10
uint32 PatrickHammerSpinCB()
{
	// Line 5556, Address: 0x347d10, Func Offset: 0
	// Line 5558, Address: 0x347d14, Func Offset: 0x4
	// Func End, Address: 0x347d1c, Func Offset: 0xc
}

// PatrickHammerCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x347d20
uint32 PatrickHammerCB()
{
	// Line 5535, Address: 0x347d20, Func Offset: 0
	// Line 5537, Address: 0x347d30, Func Offset: 0x10
	// Line 5541, Address: 0x347d48, Func Offset: 0x28
	// Line 5548, Address: 0x347d58, Func Offset: 0x38
	// Line 5544, Address: 0x347d5c, Func Offset: 0x3c
	// Line 5545, Address: 0x347d60, Func Offset: 0x40
	// Line 5544, Address: 0x347d64, Func Offset: 0x44
	// Line 5548, Address: 0x347d68, Func Offset: 0x48
	// Line 5549, Address: 0x347d70, Func Offset: 0x50
	// Line 5550, Address: 0x347e90, Func Offset: 0x170
	// Line 5551, Address: 0x347eec, Func Offset: 0x1cc
	// Line 5552, Address: 0x347ef0, Func Offset: 0x1d0
	// Line 5553, Address: 0x347f10, Func Offset: 0x1f0
	// Func End, Address: 0x347f1c, Func Offset: 0x1fc
}

// PatrickGrabThrowStartCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x347f20
uint32 PatrickGrabThrowStartCB(void* object)
{
	zEnt* ent;
	// Line 5502, Address: 0x347f20, Func Offset: 0
	// Line 5503, Address: 0x347f24, Func Offset: 0x4
	// Line 5502, Address: 0x347f28, Func Offset: 0x8
	// Line 5506, Address: 0x347f2c, Func Offset: 0xc
	// Line 5504, Address: 0x347f30, Func Offset: 0x10
	// Line 5508, Address: 0x347f34, Func Offset: 0x14
	// Line 5509, Address: 0x347f4c, Func Offset: 0x2c
	// Line 5513, Address: 0x347f50, Func Offset: 0x30
	// Line 5514, Address: 0x347f54, Func Offset: 0x34
	// Line 5513, Address: 0x347f58, Func Offset: 0x38
	// Line 5515, Address: 0x347f5c, Func Offset: 0x3c
	// Line 5516, Address: 0x347f7c, Func Offset: 0x5c
	// Func End, Address: 0x347f88, Func Offset: 0x68
}

// GetPatrickTarget__FP4xEnt
// Start address: 0x347f90
xEnt* GetPatrickTarget(xEnt* ent)
{
	xEnt* result;
	xCollis* coll;
	xEnt* floorEnt;
	zPlatform* plat;
	float32 dx;
	float32 dz;
	float32 ddot;
	xVec3 relpos;
	xVec3 tgtpos;
	int32 i;
	float32 bestTargetDot;
	xVec3* bestTargetPos;
	zScene* zsc;
	int32 grabbedIsFruit;
	float32 maxHeight;
	xEnt* tgtent;
	_zEntButton* entButton;
	xMat3x3 targetingMat;
	float32 dx;
	float32 dy;
	float32 dz;
	float32 ddot;
	float32 maxdist2;
	float32 mindist2;
	xVec3 toTarget;
	// Line 5273, Address: 0x347f90, Func Offset: 0
	// Line 5291, Address: 0x347fec, Func Offset: 0x5c
	// Line 5292, Address: 0x347ff4, Func Offset: 0x64
	// Line 5293, Address: 0x348010, Func Offset: 0x80
	// Line 5295, Address: 0x348028, Func Offset: 0x98
	// Line 5300, Address: 0x348038, Func Offset: 0xa8
	// Line 5302, Address: 0x348088, Func Offset: 0xf8
	// Line 5303, Address: 0x348098, Func Offset: 0x108
	// Line 5302, Address: 0x3480a4, Func Offset: 0x114
	// Line 5303, Address: 0x3480a8, Func Offset: 0x118
	// Line 5307, Address: 0x3480bc, Func Offset: 0x12c
	// Line 5309, Address: 0x3480c8, Func Offset: 0x138
	// Line 5307, Address: 0x3480cc, Func Offset: 0x13c
	// Line 5306, Address: 0x3480d0, Func Offset: 0x140
	// Line 5308, Address: 0x3480d4, Func Offset: 0x144
	// Line 5309, Address: 0x3480dc, Func Offset: 0x14c
	// Line 5310, Address: 0x348138, Func Offset: 0x1a8
	// Line 5309, Address: 0x34813c, Func Offset: 0x1ac
	// Line 5310, Address: 0x348144, Func Offset: 0x1b4
	// Line 5309, Address: 0x348148, Func Offset: 0x1b8
	// Line 5311, Address: 0x34814c, Func Offset: 0x1bc
	// Line 5313, Address: 0x348164, Func Offset: 0x1d4
	// Line 5317, Address: 0x348170, Func Offset: 0x1e0
	// Line 5318, Address: 0x34817c, Func Offset: 0x1ec
	// Line 5322, Address: 0x34819c, Func Offset: 0x20c
	// Line 5318, Address: 0x3481a0, Func Offset: 0x210
	// Line 5322, Address: 0x3481a4, Func Offset: 0x214
	// Line 5323, Address: 0x3481b4, Func Offset: 0x224
	// Line 5322, Address: 0x3481c4, Func Offset: 0x234
	// Line 5323, Address: 0x3481c8, Func Offset: 0x238
	// Line 5324, Address: 0x3481d4, Func Offset: 0x244
	// Line 5325, Address: 0x3481fc, Func Offset: 0x26c
	// Line 5326, Address: 0x348218, Func Offset: 0x288
	// Line 5327, Address: 0x348234, Func Offset: 0x2a4
	// Line 5332, Address: 0x348248, Func Offset: 0x2b8
	// Line 5327, Address: 0x34824c, Func Offset: 0x2bc
	// Line 5332, Address: 0x34825c, Func Offset: 0x2cc
	// Line 5344, Address: 0x348264, Func Offset: 0x2d4
	// Line 5345, Address: 0x348274, Func Offset: 0x2e4
	// Line 5348, Address: 0x348288, Func Offset: 0x2f8
	// Line 5349, Address: 0x3482e8, Func Offset: 0x358
	// Line 5350, Address: 0x348300, Func Offset: 0x370
	// Line 5356, Address: 0x348330, Func Offset: 0x3a0
	// Line 5357, Address: 0x34833c, Func Offset: 0x3ac
	// Line 5360, Address: 0x348348, Func Offset: 0x3b8
	// Line 5366, Address: 0x348370, Func Offset: 0x3e0
	// Line 5372, Address: 0x348374, Func Offset: 0x3e4
	// Line 5375, Address: 0x34838c, Func Offset: 0x3fc
	// Line 5376, Address: 0x3483a0, Func Offset: 0x410
	// Line 5388, Address: 0x3483a8, Func Offset: 0x418
	// Line 5390, Address: 0x3483b4, Func Offset: 0x424
	// Line 5395, Address: 0x3483c4, Func Offset: 0x434
	// Line 5396, Address: 0x3483e8, Func Offset: 0x458
	// Line 5399, Address: 0x348414, Func Offset: 0x484
	// Line 5401, Address: 0x34841c, Func Offset: 0x48c
	// Line 5399, Address: 0x348420, Func Offset: 0x490
	// Line 5403, Address: 0x348428, Func Offset: 0x498
	// Line 5405, Address: 0x348448, Func Offset: 0x4b8
	// Line 5407, Address: 0x34845c, Func Offset: 0x4cc
	// Line 5408, Address: 0x348464, Func Offset: 0x4d4
	// Line 5409, Address: 0x348468, Func Offset: 0x4d8
	// Line 5417, Address: 0x34847c, Func Offset: 0x4ec
	// Line 5420, Address: 0x348480, Func Offset: 0x4f0
	// Line 5421, Address: 0x3484a4, Func Offset: 0x514
	// Line 5427, Address: 0x3484b0, Func Offset: 0x520
	// Line 5421, Address: 0x3484b4, Func Offset: 0x524
	// Line 5427, Address: 0x3484b8, Func Offset: 0x528
	// Line 5421, Address: 0x3484c4, Func Offset: 0x534
	// Line 5430, Address: 0x3484cc, Func Offset: 0x53c
	// Line 5423, Address: 0x3484d4, Func Offset: 0x544
	// Line 5427, Address: 0x3484fc, Func Offset: 0x56c
	// Line 5423, Address: 0x348508, Func Offset: 0x578
	// Line 5427, Address: 0x34850c, Func Offset: 0x57c
	// Line 5430, Address: 0x348520, Func Offset: 0x590
	// Line 5438, Address: 0x348538, Func Offset: 0x5a8
	// Line 5437, Address: 0x34853c, Func Offset: 0x5ac
	// Line 5438, Address: 0x348540, Func Offset: 0x5b0
	// Line 5437, Address: 0x348544, Func Offset: 0x5b4
	// Line 5430, Address: 0x34854c, Func Offset: 0x5bc
	// Line 5437, Address: 0x348554, Func Offset: 0x5c4
	// Line 5433, Address: 0x348558, Func Offset: 0x5c8
	// Line 5438, Address: 0x348564, Func Offset: 0x5d4
	// Line 5441, Address: 0x34856c, Func Offset: 0x5dc
	// Line 5444, Address: 0x3485b4, Func Offset: 0x624
	// Line 5446, Address: 0x3485cc, Func Offset: 0x63c
	// Line 5448, Address: 0x3485d4, Func Offset: 0x644
	// Line 5446, Address: 0x3485d8, Func Offset: 0x648
	// Line 5449, Address: 0x3485e0, Func Offset: 0x650
	// Line 5452, Address: 0x3485ec, Func Offset: 0x65c
	// Line 5458, Address: 0x348624, Func Offset: 0x694
	// Line 5460, Address: 0x348634, Func Offset: 0x6a4
	// Line 5465, Address: 0x348638, Func Offset: 0x6a8
	// Line 5467, Address: 0x348644, Func Offset: 0x6b4
	// Line 5468, Address: 0x348660, Func Offset: 0x6d0
	// Line 5469, Address: 0x34866c, Func Offset: 0x6dc
	// Line 5471, Address: 0x348674, Func Offset: 0x6e4
	// Line 5472, Address: 0x348678, Func Offset: 0x6e8
	// Line 5480, Address: 0x348688, Func Offset: 0x6f8
	// Line 5481, Address: 0x3486a0, Func Offset: 0x710
	// Line 5486, Address: 0x3486c8, Func Offset: 0x738
	// Line 5481, Address: 0x3486cc, Func Offset: 0x73c
	// Line 5486, Address: 0x3486d0, Func Offset: 0x740
	// Line 5487, Address: 0x3486e4, Func Offset: 0x754
	// Line 5488, Address: 0x3486f0, Func Offset: 0x760
	// Line 5489, Address: 0x348708, Func Offset: 0x778
	// Line 5490, Address: 0x348714, Func Offset: 0x784
	// Line 5491, Address: 0x348720, Func Offset: 0x790
	// Line 5494, Address: 0x34872c, Func Offset: 0x79c
	// Line 5491, Address: 0x348730, Func Offset: 0x7a0
	// Line 5495, Address: 0x348738, Func Offset: 0x7a8
	// Line 5496, Address: 0x348744, Func Offset: 0x7b4
	// Line 5498, Address: 0x348760, Func Offset: 0x7d0
	// Line 5499, Address: 0x348764, Func Offset: 0x7d4
	// Func End, Address: 0x3487c0, Func Offset: 0x830
}

// PatCartwheelLoopCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x3487c0
uint32 PatCartwheelLoopCB()
{
	// Line 5254, Address: 0x3487c0, Func Offset: 0
	// Func End, Address: 0x3487c8, Func Offset: 0x8
}

// PatNoCartwheelCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x3487d0
uint32 PatNoCartwheelCB()
{
	// Line 5246, Address: 0x3487d0, Func Offset: 0
	// Line 5247, Address: 0x3487dc, Func Offset: 0xc
	// Line 5248, Address: 0x348894, Func Offset: 0xc4
	// Line 5250, Address: 0x348948, Func Offset: 0x178
	// Line 5249, Address: 0x34894c, Func Offset: 0x17c
	// Line 5250, Address: 0x348950, Func Offset: 0x180
	// Func End, Address: 0x348958, Func Offset: 0x188
}

// PatCartwheelNoCartwheelCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x348960
uint32 PatCartwheelNoCartwheelCheck()
{
	// Line 5229, Address: 0x348960, Func Offset: 0
	// Line 5232, Address: 0x34896c, Func Offset: 0xc
	// Line 5235, Address: 0x348984, Func Offset: 0x24
	// Line 5236, Address: 0x348990, Func Offset: 0x30
	// Line 5239, Address: 0x348998, Func Offset: 0x38
	// Line 5230, Address: 0x3489e8, Func Offset: 0x88
	// Line 5233, Address: 0x3489f0, Func Offset: 0x90
	// Line 5244, Address: 0x3489f4, Func Offset: 0x94
	// Func End, Address: 0x3489fc, Func Offset: 0x9c
}

// PatCartwheelCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x348a00
uint32 PatCartwheelCB()
{
	// Line 5210, Address: 0x348a00, Func Offset: 0
	// Line 5218, Address: 0x348a04, Func Offset: 0x4
	// Line 5210, Address: 0x348a08, Func Offset: 0x8
	// Line 5214, Address: 0x348a0c, Func Offset: 0xc
	// Line 5210, Address: 0x348a10, Func Offset: 0x10
	// Line 5218, Address: 0x348a18, Func Offset: 0x18
	// Line 5212, Address: 0x348a20, Func Offset: 0x20
	// Line 5218, Address: 0x348a24, Func Offset: 0x24
	// Line 5212, Address: 0x348a28, Func Offset: 0x28
	// Line 5214, Address: 0x348a34, Func Offset: 0x34
	// Line 5216, Address: 0x348a38, Func Offset: 0x38
	// Line 5218, Address: 0x348a3c, Func Offset: 0x3c
	// Line 5219, Address: 0x348a44, Func Offset: 0x44
	// Line 5221, Address: 0x348b64, Func Offset: 0x164
	// Line 5223, Address: 0x348c80, Func Offset: 0x280
	// Line 5225, Address: 0x348cc4, Func Offset: 0x2c4
	// Line 5224, Address: 0x348cc8, Func Offset: 0x2c8
	// Line 5225, Address: 0x348ccc, Func Offset: 0x2cc
	// Func End, Address: 0x348cd8, Func Offset: 0x2d8
}

// PatCartwheelCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x348ce0
uint32 PatCartwheelCheck()
{
	// Line 5195, Address: 0x348ce0, Func Offset: 0
	// Line 5198, Address: 0x348cec, Func Offset: 0xc
	// Line 5201, Address: 0x348cf8, Func Offset: 0x18
	// Line 5202, Address: 0x348d04, Func Offset: 0x24
	// Line 5205, Address: 0x348d0c, Func Offset: 0x2c
	// Line 5208, Address: 0x348d5c, Func Offset: 0x7c
	// Func End, Address: 0x348d64, Func Offset: 0x84
}

// PatrickGrabCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x348d70
uint32 PatrickGrabCB()
{
	xAnimState* stat;
	xVec3 tmptran;
	xQuat tmpquat;
	xMat4x3 objMat;
	xMat4x3 targetMat;
	// Line 5044, Address: 0x348d70, Func Offset: 0
	// Line 5045, Address: 0x348d74, Func Offset: 0x4
	// Line 5044, Address: 0x348d78, Func Offset: 0x8
	// Line 5045, Address: 0x348d88, Func Offset: 0x18
	// Line 5046, Address: 0x348ea4, Func Offset: 0x134
	// Line 5047, Address: 0x348ee8, Func Offset: 0x178
	// Line 5049, Address: 0x348eec, Func Offset: 0x17c
	// Line 5047, Address: 0x348ef0, Func Offset: 0x180
	// Line 5052, Address: 0x348ef8, Func Offset: 0x188
	// Line 5053, Address: 0x348efc, Func Offset: 0x18c
	// Line 5049, Address: 0x348f00, Func Offset: 0x190
	// Line 5052, Address: 0x348f04, Func Offset: 0x194
	// Line 5053, Address: 0x348f08, Func Offset: 0x198
	// Line 5047, Address: 0x348f10, Func Offset: 0x1a0
	// Line 5054, Address: 0x348f14, Func Offset: 0x1a4
	// Line 5055, Address: 0x348f1c, Func Offset: 0x1ac
	// Line 5059, Address: 0x348f40, Func Offset: 0x1d0
	// Line 5065, Address: 0x348f6c, Func Offset: 0x1fc
	// Line 5062, Address: 0x348f70, Func Offset: 0x200
	// Line 5065, Address: 0x348f78, Func Offset: 0x208
	// Line 5066, Address: 0x348f94, Func Offset: 0x224
	// Line 5071, Address: 0x348f9c, Func Offset: 0x22c
	// Line 5072, Address: 0x348fc4, Func Offset: 0x254
	// Line 5074, Address: 0x348fd0, Func Offset: 0x260
	// Line 5072, Address: 0x348fdc, Func Offset: 0x26c
	// Line 5073, Address: 0x348fe0, Func Offset: 0x270
	// Line 5074, Address: 0x348ff4, Func Offset: 0x284
	// Line 5073, Address: 0x349004, Func Offset: 0x294
	// Line 5074, Address: 0x34900c, Func Offset: 0x29c
	// Line 5075, Address: 0x34901c, Func Offset: 0x2ac
	// Line 5076, Address: 0x349020, Func Offset: 0x2b0
	// Line 5075, Address: 0x34902c, Func Offset: 0x2bc
	// Line 5076, Address: 0x349048, Func Offset: 0x2d8
	// Line 5077, Address: 0x349050, Func Offset: 0x2e0
	// Line 5078, Address: 0x34906c, Func Offset: 0x2fc
	// Line 5079, Address: 0x349074, Func Offset: 0x304
	// Line 5081, Address: 0x34907c, Func Offset: 0x30c
	// Line 5078, Address: 0x349084, Func Offset: 0x314
	// Line 5079, Address: 0x349090, Func Offset: 0x320
	// Line 5081, Address: 0x3490a4, Func Offset: 0x334
	// Line 5082, Address: 0x3490ac, Func Offset: 0x33c
	// Line 5083, Address: 0x3490b8, Func Offset: 0x348
	// Line 5084, Address: 0x3490c0, Func Offset: 0x350
	// Line 5085, Address: 0x3490c8, Func Offset: 0x358
	// Line 5083, Address: 0x3490d0, Func Offset: 0x360
	// Line 5084, Address: 0x3490e4, Func Offset: 0x374
	// Line 5085, Address: 0x3490f8, Func Offset: 0x388
	// Line 5097, Address: 0x34910c, Func Offset: 0x39c
	// Line 5098, Address: 0x34913c, Func Offset: 0x3cc
	// Line 5103, Address: 0x349158, Func Offset: 0x3e8
	// Line 5106, Address: 0x349174, Func Offset: 0x404
	// Line 5109, Address: 0x349184, Func Offset: 0x414
	// Line 5112, Address: 0x349190, Func Offset: 0x420
	// Line 5118, Address: 0x3491a0, Func Offset: 0x430
	// Line 5120, Address: 0x3491a4, Func Offset: 0x434
	// Line 5056, Address: 0x3491c8, Func Offset: 0x458
	// Line 5120, Address: 0x3491cc, Func Offset: 0x45c
	// Line 5058, Address: 0x3491e0, Func Offset: 0x470
	// Line 5120, Address: 0x3491e8, Func Offset: 0x478
	// Line 5121, Address: 0x34921c, Func Offset: 0x4ac
	// Func End, Address: 0x349234, Func Offset: 0x4c4
}

// PatrickMeleeCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x349240
uint32 PatrickMeleeCB(xAnimSingle* anim)
{
	// Line 5026, Address: 0x349240, Func Offset: 0
	// Line 5028, Address: 0x349244, Func Offset: 0x4
	// Line 5026, Address: 0x349248, Func Offset: 0x8
	// Line 5028, Address: 0x34924c, Func Offset: 0xc
	// Line 5035, Address: 0x349254, Func Offset: 0x14
	// Line 5032, Address: 0x349258, Func Offset: 0x18
	// Line 5035, Address: 0x34925c, Func Offset: 0x1c
	// Line 5036, Address: 0x349374, Func Offset: 0x134
	// Line 5038, Address: 0x349380, Func Offset: 0x140
	// Line 5039, Address: 0x34943c, Func Offset: 0x1fc
	// Line 5040, Address: 0x3494f4, Func Offset: 0x2b4
	// Line 5042, Address: 0x349538, Func Offset: 0x2f8
	// Line 5041, Address: 0x34953c, Func Offset: 0x2fc
	// Line 5042, Address: 0x349540, Func Offset: 0x300
	// Func End, Address: 0x349548, Func Offset: 0x308
}

// PatrickStunCheckHeadbutt__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x349550
uint32 PatrickStunCheckHeadbutt()
{
	// Line 5016, Address: 0x349550, Func Offset: 0
	// Line 5017, Address: 0x349564, Func Offset: 0x14
	// Line 5020, Address: 0x34956c, Func Offset: 0x1c
	// Line 5023, Address: 0x3495b4, Func Offset: 0x64
	// Func End, Address: 0x3495bc, Func Offset: 0x6c
}

// PatrickStunCheckButtslam__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x3495c0
uint32 PatrickStunCheckButtslam()
{
	// Line 5005, Address: 0x3495c0, Func Offset: 0
	// Line 5006, Address: 0x3495d4, Func Offset: 0x14
	// Line 5009, Address: 0x3495dc, Func Offset: 0x1c
	// Line 5012, Address: 0x349624, Func Offset: 0x64
	// Func End, Address: 0x34962c, Func Offset: 0x6c
}

// PatrickAttackCheckMelee2__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x349630
uint32 PatrickAttackCheckMelee2()
{
	// Line 4985, Address: 0x349630, Func Offset: 0
	// Line 4988, Address: 0x349644, Func Offset: 0x14
	// Line 4986, Address: 0x349698, Func Offset: 0x68
	// Line 4988, Address: 0x3496a0, Func Offset: 0x70
	// Line 4989, Address: 0x3496ac, Func Offset: 0x7c
	// Func End, Address: 0x3496b4, Func Offset: 0x84
}

// PatrickAttackCheckMelee1__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x3496c0
uint32 PatrickAttackCheckMelee1()
{
	// Line 4977, Address: 0x3496c0, Func Offset: 0
	// Line 4980, Address: 0x3496d4, Func Offset: 0x14
	// Line 4978, Address: 0x349728, Func Offset: 0x68
	// Line 4980, Address: 0x349730, Func Offset: 0x70
	// Line 4981, Address: 0x34973c, Func Offset: 0x7c
	// Func End, Address: 0x349744, Func Offset: 0x84
}

// PatrickHammerThrowCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x349750
uint32 PatrickHammerThrowCheck()
{
	// Line 4966, Address: 0x349750, Func Offset: 0
	// Func End, Address: 0x349758, Func Offset: 0x8
}

// PatrickHammerCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x349760
uint32 PatrickHammerCheck()
{
	// Line 4962, Address: 0x349760, Func Offset: 0
	// Func End, Address: 0x349768, Func Offset: 0x8
}

// PatrickGrabThrowStart__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x349770
uint32 PatrickGrabThrowStart()
{
	// Line 4955, Address: 0x349770, Func Offset: 0
	// Line 4958, Address: 0x3497b4, Func Offset: 0x44
	// Func End, Address: 0x3497bc, Func Offset: 0x4c
}

// PatrickGrabKill__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x3497c0
uint32 PatrickGrabKill()
{
	// Line 4950, Address: 0x3497c0, Func Offset: 0
	// Line 4951, Address: 0x3497cc, Func Offset: 0xc
	// Func End, Address: 0x3497d4, Func Offset: 0x14
}

// PatrickGrabFailed__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x3497e0
uint32 PatrickGrabFailed()
{
	// Line 4946, Address: 0x3497e0, Func Offset: 0
	// Line 4947, Address: 0x3497e4, Func Offset: 0x4
	// Func End, Address: 0x3497ec, Func Offset: 0xc
}

// PatrickGrabCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x3497f0
uint32 PatrickGrabCheck()
{
	// Line 4942, Address: 0x3497f0, Func Offset: 0
	// Line 4943, Address: 0x3497f4, Func Offset: 0x4
	// Func End, Address: 0x3497fc, Func Offset: 0xc
}

// LedgeFinishCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x349800
uint32 LedgeFinishCB()
{
	// Line 4935, Address: 0x349800, Func Offset: 0
	// Line 4936, Address: 0x34980c, Func Offset: 0xc
	// Line 4934, Address: 0x349810, Func Offset: 0x10
	// Line 4936, Address: 0x349814, Func Offset: 0x14
	// Line 4939, Address: 0x349818, Func Offset: 0x18
	// Func End, Address: 0x349820, Func Offset: 0x20
}

// LedgeGrabCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x349820
uint32 LedgeGrabCB(void* object)
{
	// Line 4915, Address: 0x349820, Func Offset: 0
	// Line 4916, Address: 0x349830, Func Offset: 0x10
	// Line 4917, Address: 0x3498f0, Func Offset: 0xd0
	// Line 4918, Address: 0x349918, Func Offset: 0xf8
	// Line 4920, Address: 0x34991c, Func Offset: 0xfc
	// Line 4918, Address: 0x349920, Func Offset: 0x100
	// Line 4920, Address: 0x34992c, Func Offset: 0x10c
	// Line 4919, Address: 0x349934, Func Offset: 0x114
	// Line 4918, Address: 0x349938, Func Offset: 0x118
	// Line 4919, Address: 0x34993c, Func Offset: 0x11c
	// Line 4920, Address: 0x34995c, Func Offset: 0x13c
	// Line 4922, Address: 0x34996c, Func Offset: 0x14c
	// Line 4923, Address: 0x34997c, Func Offset: 0x15c
	// Line 4925, Address: 0x349998, Func Offset: 0x178
	// Line 4929, Address: 0x34999c, Func Offset: 0x17c
	// Line 4917, Address: 0x3499ac, Func Offset: 0x18c
	// Line 4929, Address: 0x3499b0, Func Offset: 0x190
	// Line 4917, Address: 0x3499c0, Func Offset: 0x1a0
	// Line 4921, Address: 0x3499c8, Func Offset: 0x1a8
	// Line 4922, Address: 0x3499dc, Func Offset: 0x1bc
	// Line 4930, Address: 0x3499e4, Func Offset: 0x1c4
	// Func End, Address: 0x3499f4, Func Offset: 0x1d4
}

// LedgeGrabCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x349a00
uint32 LedgeGrabCheck()
{
	// Line 4911, Address: 0x349a00, Func Offset: 0
	// Line 4912, Address: 0x349a28, Func Offset: 0x28
	// Func End, Address: 0x349a30, Func Offset: 0x30
}

// TrackPrefallJumpCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x349a30
uint32 TrackPrefallJumpCheck()
{
	// Line 4904, Address: 0x349a30, Func Offset: 0
	// Line 4907, Address: 0x349ac0, Func Offset: 0x90
	// Func End, Address: 0x349ac8, Func Offset: 0x98
}

// TrackFallCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x349ad0
uint32 TrackFallCB()
{
	// Line 4898, Address: 0x349ad0, Func Offset: 0
	// Line 4899, Address: 0x349adc, Func Offset: 0xc
	// Line 4901, Address: 0x349ae8, Func Offset: 0x18
	// Func End, Address: 0x349af0, Func Offset: 0x20
}

// TrackFallCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x349af0
uint32 TrackFallCheck()
{
	// Line 4890, Address: 0x349af0, Func Offset: 0
	// Line 4894, Address: 0x349b3c, Func Offset: 0x4c
	// Func End, Address: 0x349b44, Func Offset: 0x54
}

// NoslideTrackCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x349b50
uint32 NoslideTrackCheck()
{
	// Line 4884, Address: 0x349b50, Func Offset: 0
	// Line 4887, Address: 0x349b7c, Func Offset: 0x2c
	// Func End, Address: 0x349b84, Func Offset: 0x34
}

// NoslideTrackCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x349b90
uint32 NoslideTrackCB()
{
	// Line 4879, Address: 0x349b90, Func Offset: 0
	// Line 4881, Address: 0x349b94, Func Offset: 0x4
	// Func End, Address: 0x349b9c, Func Offset: 0xc
}

// SlideTrackCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x349ba0
uint32 SlideTrackCB()
{
	// Line 4866, Address: 0x349ba0, Func Offset: 0
	// Line 4868, Address: 0x349ba4, Func Offset: 0x4
	// Line 4866, Address: 0x349ba8, Func Offset: 0x8
	// Line 4867, Address: 0x349bac, Func Offset: 0xc
	// Line 4871, Address: 0x349bb4, Func Offset: 0x14
	// Line 4873, Address: 0x349bc0, Func Offset: 0x20
	// Line 4876, Address: 0x349c74, Func Offset: 0xd4
	// Line 4875, Address: 0x349c78, Func Offset: 0xd8
	// Line 4876, Address: 0x349c7c, Func Offset: 0xdc
	// Func End, Address: 0x349c84, Func Offset: 0xe4
}

// SlideTrackCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x349c90
uint32 SlideTrackCheck()
{
	// Line 4863, Address: 0x349c90, Func Offset: 0
	// Line 4864, Address: 0x349c98, Func Offset: 0x8
	// Func End, Address: 0x349ca0, Func Offset: 0x10
}

// BoulderRollDoneCB__Fv
// Start address: 0x349ca0
uint32 BoulderRollDoneCB()
{
	xParEmitterCustomSettings info;
	// Line 4797, Address: 0x349ca0, Func Offset: 0
	// Line 4799, Address: 0x349cc0, Func Offset: 0x20
	// Line 4798, Address: 0x349cc4, Func Offset: 0x24
	// Line 4799, Address: 0x349ccc, Func Offset: 0x2c
	// Line 4803, Address: 0x349cf8, Func Offset: 0x58
	// Line 4805, Address: 0x349e08, Func Offset: 0x168
	// Line 4810, Address: 0x349e18, Func Offset: 0x178
	// Line 4820, Address: 0x349e1c, Func Offset: 0x17c
	// Line 4810, Address: 0x349e20, Func Offset: 0x180
	// Line 4819, Address: 0x349e24, Func Offset: 0x184
	// Line 4810, Address: 0x349e28, Func Offset: 0x188
	// Line 4819, Address: 0x349e2c, Func Offset: 0x18c
	// Line 4820, Address: 0x349e34, Func Offset: 0x194
	// Line 4821, Address: 0x349e3c, Func Offset: 0x19c
	// Line 4819, Address: 0x349e44, Func Offset: 0x1a4
	// Line 4820, Address: 0x349e64, Func Offset: 0x1c4
	// Line 4821, Address: 0x349e78, Func Offset: 0x1d8
	// Line 4822, Address: 0x349e9c, Func Offset: 0x1fc
	// Line 4823, Address: 0x349ea4, Func Offset: 0x204
	// Line 4826, Address: 0x349eac, Func Offset: 0x20c
	// Line 4831, Address: 0x349edc, Func Offset: 0x23c
	// Line 4828, Address: 0x349ee0, Func Offset: 0x240
	// Line 4831, Address: 0x349ee8, Func Offset: 0x248
	// Line 4837, Address: 0x349ef0, Func Offset: 0x250
	// Line 4828, Address: 0x349ef4, Func Offset: 0x254
	// Line 4830, Address: 0x349ef8, Func Offset: 0x258
	// Line 4837, Address: 0x349f00, Func Offset: 0x260
	// Line 4830, Address: 0x349f04, Func Offset: 0x264
	// Line 4833, Address: 0x349f08, Func Offset: 0x268
	// Line 4830, Address: 0x349f0c, Func Offset: 0x26c
	// Line 4837, Address: 0x349f10, Func Offset: 0x270
	// Line 4830, Address: 0x349f14, Func Offset: 0x274
	// Line 4835, Address: 0x349f18, Func Offset: 0x278
	// Line 4830, Address: 0x349f1c, Func Offset: 0x27c
	// Line 4831, Address: 0x349f24, Func Offset: 0x284
	// Line 4833, Address: 0x349f2c, Func Offset: 0x28c
	// Line 4835, Address: 0x349f3c, Func Offset: 0x29c
	// Line 4830, Address: 0x349f4c, Func Offset: 0x2ac
	// Line 4831, Address: 0x349f50, Func Offset: 0x2b0
	// Line 4833, Address: 0x349f54, Func Offset: 0x2b4
	// Line 4837, Address: 0x349f58, Func Offset: 0x2b8
	// Line 4839, Address: 0x349f60, Func Offset: 0x2c0
	// Line 4840, Address: 0x349f64, Func Offset: 0x2c4
	// Line 4839, Address: 0x349f68, Func Offset: 0x2c8
	// Line 4840, Address: 0x349f6c, Func Offset: 0x2cc
	// Line 4839, Address: 0x349f70, Func Offset: 0x2d0
	// Line 4837, Address: 0x349f78, Func Offset: 0x2d8
	// Line 4839, Address: 0x349f7c, Func Offset: 0x2dc
	// Line 4840, Address: 0x349fb8, Func Offset: 0x318
	// Line 4848, Address: 0x349fc0, Func Offset: 0x320
	// Line 4849, Address: 0x349fc8, Func Offset: 0x328
	// Line 4850, Address: 0x349fcc, Func Offset: 0x32c
	// Line 4848, Address: 0x349fd0, Func Offset: 0x330
	// Line 4849, Address: 0x349fd4, Func Offset: 0x334
	// Line 4850, Address: 0x349fd8, Func Offset: 0x338
	// Line 4848, Address: 0x349fdc, Func Offset: 0x33c
	// Line 4849, Address: 0x349fe4, Func Offset: 0x344
	// Line 4850, Address: 0x349ff0, Func Offset: 0x350
	// Line 4851, Address: 0x349ffc, Func Offset: 0x35c
	// Line 4855, Address: 0x34a004, Func Offset: 0x364
	// Line 4853, Address: 0x34a00c, Func Offset: 0x36c
	// Line 4855, Address: 0x34a010, Func Offset: 0x370
	// Line 4857, Address: 0x34a030, Func Offset: 0x390
	// Line 4859, Address: 0x34a034, Func Offset: 0x394
	// Line 4845, Address: 0x34a058, Func Offset: 0x3b8
	// Line 4859, Address: 0x34a05c, Func Offset: 0x3bc
	// Line 4860, Address: 0x34a074, Func Offset: 0x3d4
	// Func End, Address: 0x34a098, Func Offset: 0x3f8
}

// BoulderRollCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34a0a0
uint32 BoulderRollCB()
{
	xParEmitterCustomSettings info;
	// Line 4661, Address: 0x34a0a0, Func Offset: 0
	// Line 4662, Address: 0x34a0c0, Func Offset: 0x20
	// Line 4672, Address: 0x34a0cc, Func Offset: 0x2c
	// Line 4677, Address: 0x34a0f4, Func Offset: 0x54
	// Line 4687, Address: 0x34a0f8, Func Offset: 0x58
	// Line 4677, Address: 0x34a0fc, Func Offset: 0x5c
	// Line 4678, Address: 0x34a108, Func Offset: 0x68
	// Line 4680, Address: 0x34a11c, Func Offset: 0x7c
	// Line 4687, Address: 0x34a12c, Func Offset: 0x8c
	// Line 4688, Address: 0x34a138, Func Offset: 0x98
	// Line 4695, Address: 0x34a13c, Func Offset: 0x9c
	// Line 4688, Address: 0x34a140, Func Offset: 0xa0
	// Line 4696, Address: 0x34a144, Func Offset: 0xa4
	// Line 4688, Address: 0x34a148, Func Offset: 0xa8
	// Line 4697, Address: 0x34a154, Func Offset: 0xb4
	// Line 4688, Address: 0x34a158, Func Offset: 0xb8
	// Line 4690, Address: 0x34a15c, Func Offset: 0xbc
	// Line 4688, Address: 0x34a160, Func Offset: 0xc0
	// Line 4695, Address: 0x34a164, Func Offset: 0xc4
	// Line 4689, Address: 0x34a168, Func Offset: 0xc8
	// Line 4690, Address: 0x34a16c, Func Offset: 0xcc
	// Line 4689, Address: 0x34a170, Func Offset: 0xd0
	// Line 4696, Address: 0x34a174, Func Offset: 0xd4
	// Line 4697, Address: 0x34a178, Func Offset: 0xd8
	// Line 4707, Address: 0x34a17c, Func Offset: 0xdc
	// Line 4709, Address: 0x34a184, Func Offset: 0xe4
	// Line 4690, Address: 0x34a188, Func Offset: 0xe8
	// Line 4709, Address: 0x34a18c, Func Offset: 0xec
	// Line 4690, Address: 0x34a190, Func Offset: 0xf0
	// Line 4692, Address: 0x34a1bc, Func Offset: 0x11c
	// Line 4693, Address: 0x34a1dc, Func Offset: 0x13c
	// Line 4695, Address: 0x34a214, Func Offset: 0x174
	// Line 4696, Address: 0x34a220, Func Offset: 0x180
	// Line 4697, Address: 0x34a22c, Func Offset: 0x18c
	// Line 4702, Address: 0x34a238, Func Offset: 0x198
	// Line 4706, Address: 0x34a240, Func Offset: 0x1a0
	// Line 4707, Address: 0x34a248, Func Offset: 0x1a8
	// Line 4709, Address: 0x34a25c, Func Offset: 0x1bc
	// Line 4711, Address: 0x34a274, Func Offset: 0x1d4
	// Line 4712, Address: 0x34a27c, Func Offset: 0x1dc
	// Line 4713, Address: 0x34a288, Func Offset: 0x1e8
	// Line 4714, Address: 0x34a298, Func Offset: 0x1f8
	// Line 4724, Address: 0x34a2a8, Func Offset: 0x208
	// Line 4715, Address: 0x34a2b0, Func Offset: 0x210
	// Line 4717, Address: 0x34a2d8, Func Offset: 0x238
	// Line 4719, Address: 0x34a30c, Func Offset: 0x26c
	// Line 4721, Address: 0x34a340, Func Offset: 0x2a0
	// Line 4724, Address: 0x34a370, Func Offset: 0x2d0
	// Line 4728, Address: 0x34a378, Func Offset: 0x2d8
	// Line 4738, Address: 0x34a37c, Func Offset: 0x2dc
	// Line 4728, Address: 0x34a380, Func Offset: 0x2e0
	// Line 4737, Address: 0x34a384, Func Offset: 0x2e4
	// Line 4728, Address: 0x34a388, Func Offset: 0x2e8
	// Line 4737, Address: 0x34a38c, Func Offset: 0x2ec
	// Line 4738, Address: 0x34a394, Func Offset: 0x2f4
	// Line 4739, Address: 0x34a39c, Func Offset: 0x2fc
	// Line 4737, Address: 0x34a3a4, Func Offset: 0x304
	// Line 4738, Address: 0x34a3c4, Func Offset: 0x324
	// Line 4739, Address: 0x34a3d8, Func Offset: 0x338
	// Line 4740, Address: 0x34a3fc, Func Offset: 0x35c
	// Line 4741, Address: 0x34a404, Func Offset: 0x364
	// Line 4742, Address: 0x34a40c, Func Offset: 0x36c
	// Line 4747, Address: 0x34a43c, Func Offset: 0x39c
	// Line 4744, Address: 0x34a440, Func Offset: 0x3a0
	// Line 4747, Address: 0x34a448, Func Offset: 0x3a8
	// Line 4753, Address: 0x34a450, Func Offset: 0x3b0
	// Line 4744, Address: 0x34a454, Func Offset: 0x3b4
	// Line 4746, Address: 0x34a458, Func Offset: 0x3b8
	// Line 4753, Address: 0x34a460, Func Offset: 0x3c0
	// Line 4746, Address: 0x34a464, Func Offset: 0x3c4
	// Line 4749, Address: 0x34a468, Func Offset: 0x3c8
	// Line 4746, Address: 0x34a46c, Func Offset: 0x3cc
	// Line 4753, Address: 0x34a470, Func Offset: 0x3d0
	// Line 4746, Address: 0x34a474, Func Offset: 0x3d4
	// Line 4751, Address: 0x34a478, Func Offset: 0x3d8
	// Line 4746, Address: 0x34a47c, Func Offset: 0x3dc
	// Line 4747, Address: 0x34a484, Func Offset: 0x3e4
	// Line 4749, Address: 0x34a48c, Func Offset: 0x3ec
	// Line 4751, Address: 0x34a49c, Func Offset: 0x3fc
	// Line 4746, Address: 0x34a4ac, Func Offset: 0x40c
	// Line 4747, Address: 0x34a4b0, Func Offset: 0x410
	// Line 4749, Address: 0x34a4b4, Func Offset: 0x414
	// Line 4753, Address: 0x34a4b8, Func Offset: 0x418
	// Line 4755, Address: 0x34a4c0, Func Offset: 0x420
	// Line 4756, Address: 0x34a4c4, Func Offset: 0x424
	// Line 4755, Address: 0x34a4c8, Func Offset: 0x428
	// Line 4756, Address: 0x34a4cc, Func Offset: 0x42c
	// Line 4755, Address: 0x34a4d0, Func Offset: 0x430
	// Line 4753, Address: 0x34a4d8, Func Offset: 0x438
	// Line 4755, Address: 0x34a4dc, Func Offset: 0x43c
	// Line 4756, Address: 0x34a518, Func Offset: 0x478
	// Line 4766, Address: 0x34a520, Func Offset: 0x480
	// Line 4764, Address: 0x34a528, Func Offset: 0x488
	// Line 4766, Address: 0x34a52c, Func Offset: 0x48c
	// Line 4770, Address: 0x34a54c, Func Offset: 0x4ac
	// Line 4771, Address: 0x34a568, Func Offset: 0x4c8
	// Line 4772, Address: 0x34a588, Func Offset: 0x4e8
	// Line 4778, Address: 0x34a594, Func Offset: 0x4f4
	// Line 4780, Address: 0x34a598, Func Offset: 0x4f8
	// Line 4778, Address: 0x34a59c, Func Offset: 0x4fc
	// Line 4780, Address: 0x34a5b0, Func Offset: 0x510
	// Line 4669, Address: 0x34a5bc, Func Offset: 0x51c
	// Line 4780, Address: 0x34a5c8, Func Offset: 0x528
	// Line 4760, Address: 0x34a5cc, Func Offset: 0x52c
	// Line 4780, Address: 0x34a5d0, Func Offset: 0x530
	// Line 4781, Address: 0x34a5e8, Func Offset: 0x548
	// Func End, Address: 0x34a60c, Func Offset: 0x56c
}

// BoulderRollWindupCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34a610
uint32 BoulderRollWindupCB()
{
	// Line 4642, Address: 0x34a610, Func Offset: 0
	// Line 4644, Address: 0x34a614, Func Offset: 0x4
	// Line 4642, Address: 0x34a618, Func Offset: 0x8
	// Line 4644, Address: 0x34a61c, Func Offset: 0xc
	// Line 4648, Address: 0x34a738, Func Offset: 0x128
	// Line 4659, Address: 0x34a7ec, Func Offset: 0x1dc
	// Line 4658, Address: 0x34a7f0, Func Offset: 0x1e0
	// Line 4659, Address: 0x34a7f4, Func Offset: 0x1e4
	// Func End, Address: 0x34a7fc, Func Offset: 0x1ec
}

// BoulderRollCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34a800
uint32 BoulderRollCheck()
{
	// Line 4636, Address: 0x34a800, Func Offset: 0
	// Line 4640, Address: 0x34a818, Func Offset: 0x18
	// Func End, Address: 0x34a820, Func Offset: 0x20
}

// BoulderRollIdleCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34a820
uint32 BoulderRollIdleCheck()
{
	// Line 4631, Address: 0x34a820, Func Offset: 0
	// Line 4632, Address: 0x34a84c, Func Offset: 0x2c
	// Func End, Address: 0x34a854, Func Offset: 0x34
}

// BoulderRollMoveCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34a860
uint32 BoulderRollMoveCheck()
{
	// Line 4627, Address: 0x34a860, Func Offset: 0
	// Line 4628, Address: 0x34a88c, Func Offset: 0x2c
	// Func End, Address: 0x34a894, Func Offset: 0x34
}

// FallCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34a8a0
uint32 FallCheck()
{
	// Line 4616, Address: 0x34a8a0, Func Offset: 0
	// Line 4618, Address: 0x34a8c8, Func Offset: 0x28
	// Func End, Address: 0x34a8d0, Func Offset: 0x30
}

// TongueDblSpinCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34a8d0
uint32 TongueDblSpinCB(xAnimSingle* anim)
{
	// Line 4595, Address: 0x34a8d0, Func Offset: 0
	// Line 4596, Address: 0x34a8d4, Func Offset: 0x4
	// Line 4595, Address: 0x34a8d8, Func Offset: 0x8
	// Line 4597, Address: 0x34a8e0, Func Offset: 0x10
	// Func End, Address: 0x34a8e8, Func Offset: 0x18
}

// TongueDblJumpCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34a8f0
uint32 TongueDblJumpCB(xAnimTransition* tran, xAnimSingle* anim, void* object)
{
	// Line 4587, Address: 0x34a8f0, Func Offset: 0
	// Line 4588, Address: 0x34a8fc, Func Offset: 0xc
	// Line 4589, Address: 0x34a904, Func Offset: 0x14
	// Line 4588, Address: 0x34a908, Func Offset: 0x18
	// Line 4589, Address: 0x34a90c, Func Offset: 0x1c
	// Line 4591, Address: 0x34a920, Func Offset: 0x30
	// Line 4588, Address: 0x34a924, Func Offset: 0x34
	// Line 4589, Address: 0x34a92c, Func Offset: 0x3c
	// Line 4590, Address: 0x34a940, Func Offset: 0x50
	// Line 4592, Address: 0x34a950, Func Offset: 0x60
	// Func End, Address: 0x34a960, Func Offset: 0x70
}

// DblJumpCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34a960
uint32 DblJumpCB()
{
	float32 dirx;
	float32 dirz;
	float32 speed;
	float32 len2;
	float32 len_inv;
	// Line 4553, Address: 0x34a960, Func Offset: 0
	// Line 4556, Address: 0x34a974, Func Offset: 0x14
	// Line 4553, Address: 0x34a978, Func Offset: 0x18
	// Line 4556, Address: 0x34a97c, Func Offset: 0x1c
	// Line 4558, Address: 0x34a9dc, Func Offset: 0x7c
	// Line 4557, Address: 0x34a9e0, Func Offset: 0x80
	// Line 4559, Address: 0x34a9e8, Func Offset: 0x88
	// Line 4565, Address: 0x34a9ec, Func Offset: 0x8c
	// Line 4559, Address: 0x34a9f0, Func Offset: 0x90
	// Line 4560, Address: 0x34a9f4, Func Offset: 0x94
	// Line 4566, Address: 0x34a9f8, Func Offset: 0x98
	// Line 4558, Address: 0x34a9fc, Func Offset: 0x9c
	// Line 4559, Address: 0x34aa08, Func Offset: 0xa8
	// Line 4558, Address: 0x34aa0c, Func Offset: 0xac
	// Line 4560, Address: 0x34aa10, Func Offset: 0xb0
	// Line 4565, Address: 0x34aa14, Func Offset: 0xb4
	// Line 4566, Address: 0x34aa18, Func Offset: 0xb8
	// Line 4571, Address: 0x34aa38, Func Offset: 0xd8
	// Line 4572, Address: 0x34aaa8, Func Offset: 0x148
	// Line 4576, Address: 0x34aaac, Func Offset: 0x14c
	// Line 4572, Address: 0x34aab8, Func Offset: 0x158
	// Line 4576, Address: 0x34aabc, Func Offset: 0x15c
	// Line 4577, Address: 0x34aae4, Func Offset: 0x184
	// Line 4578, Address: 0x34ab00, Func Offset: 0x1a0
	// Line 4579, Address: 0x34ab1c, Func Offset: 0x1bc
	// Line 4582, Address: 0x34ab24, Func Offset: 0x1c4
	// Line 4554, Address: 0x34ab30, Func Offset: 0x1d0
	// Line 4582, Address: 0x34ab38, Func Offset: 0x1d8
	// Line 4583, Address: 0x34ab44, Func Offset: 0x1e4
	// Func End, Address: 0x34ab4c, Func Offset: 0x1ec
}

// DblJumpCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34ab50
uint32 DblJumpCheck()
{
	// Line 4535, Address: 0x34ab50, Func Offset: 0
	// Line 4537, Address: 0x34ab54, Func Offset: 0x4
	// Line 4535, Address: 0x34ab58, Func Offset: 0x8
	// Line 4537, Address: 0x34ab5c, Func Offset: 0xc
	// Line 4541, Address: 0x34ab74, Func Offset: 0x24
	// Line 4545, Address: 0x34abac, Func Offset: 0x5c
	// Line 4548, Address: 0x34acc8, Func Offset: 0x178
	// Line 4538, Address: 0x34acd8, Func Offset: 0x188
	// Line 4542, Address: 0x34ace0, Func Offset: 0x190
	// Line 4549, Address: 0x34ace4, Func Offset: 0x194
	// Func End, Address: 0x34acf0, Func Offset: 0x1a0
}

// BounceCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34acf0
uint32 BounceCB()
{
	// Line 4526, Address: 0x34acf0, Func Offset: 0
	// Line 4527, Address: 0x34acf8, Func Offset: 0x8
	// Line 4528, Address: 0x34ad00, Func Offset: 0x10
	// Line 4529, Address: 0x34ad04, Func Offset: 0x14
	// Line 4528, Address: 0x34ad08, Func Offset: 0x18
	// Line 4529, Address: 0x34ad0c, Func Offset: 0x1c
	// Line 4530, Address: 0x34ad14, Func Offset: 0x24
	// Line 4532, Address: 0x34ad1c, Func Offset: 0x2c
	// Line 4531, Address: 0x34ad20, Func Offset: 0x30
	// Line 4532, Address: 0x34ad24, Func Offset: 0x34
	// Func End, Address: 0x34ad2c, Func Offset: 0x3c
}

// BounceCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34ad30
uint32 BounceCheck()
{
	// Line 4523, Address: 0x34ad30, Func Offset: 0
	// Line 4524, Address: 0x34ad3c, Func Offset: 0xc
	// Func End, Address: 0x34ad44, Func Offset: 0x14
}

// JumpApexCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34ad50
uint32 JumpApexCheck()
{
	// Line 4494, Address: 0x34ad50, Func Offset: 0
	// Line 4495, Address: 0x34ad7c, Func Offset: 0x2c
	// Func End, Address: 0x34ad84, Func Offset: 0x34
}

// JumpCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34ad90
uint32 JumpCB()
{
	// Line 4469, Address: 0x34ad90, Func Offset: 0
	// Line 4470, Address: 0x34ad94, Func Offset: 0x4
	// Line 4469, Address: 0x34ad98, Func Offset: 0x8
	// Line 4470, Address: 0x34ad9c, Func Offset: 0xc
	// Line 4473, Address: 0x34adac, Func Offset: 0x1c
	// Line 4470, Address: 0x34adb0, Func Offset: 0x20
	// Line 4473, Address: 0x34adb4, Func Offset: 0x24
	// Line 4474, Address: 0x34ae14, Func Offset: 0x84
	// Line 4476, Address: 0x34ae38, Func Offset: 0xa8
	// Line 4477, Address: 0x34aef0, Func Offset: 0x160
	// Line 4478, Address: 0x34afa8, Func Offset: 0x218
	// Line 4479, Address: 0x34b06c, Func Offset: 0x2dc
	// Line 4480, Address: 0x34b178, Func Offset: 0x3e8
	// Line 4482, Address: 0x34b1bc, Func Offset: 0x42c
	// Line 4483, Address: 0x34b1c0, Func Offset: 0x430
	// Line 4484, Address: 0x34b1c4, Func Offset: 0x434
	// Line 4489, Address: 0x34b1cc, Func Offset: 0x43c
	// Line 4482, Address: 0x34b1d0, Func Offset: 0x440
	// Line 4484, Address: 0x34b1dc, Func Offset: 0x44c
	// Line 4482, Address: 0x34b1e0, Func Offset: 0x450
	// Line 4489, Address: 0x34b1e8, Func Offset: 0x458
	// Line 4471, Address: 0x34b1f0, Func Offset: 0x460
	// Line 4489, Address: 0x34b1f8, Func Offset: 0x468
	// Line 4474, Address: 0x34b20c, Func Offset: 0x47c
	// Line 4489, Address: 0x34b218, Func Offset: 0x488
	// Line 4490, Address: 0x34b230, Func Offset: 0x4a0
	// Func End, Address: 0x34b23c, Func Offset: 0x4ac
}

// JumpCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34b240
uint32 JumpCheck()
{
	// Line 4465, Address: 0x34b240, Func Offset: 0
	// Line 4466, Address: 0x34b284, Func Offset: 0x44
	// Func End, Address: 0x34b28c, Func Offset: 0x4c
}

// WallJumpFallCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34b290
uint32 WallJumpFallCB()
{
	// Line 4456, Address: 0x34b290, Func Offset: 0
	// Line 4458, Address: 0x34b298, Func Offset: 0x8
	// Line 4459, Address: 0x34b29c, Func Offset: 0xc
	// Func End, Address: 0x34b2a4, Func Offset: 0x14
}

// WallJumpStickCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34b2b0
uint32 WallJumpStickCB()
{
	// Line 4445, Address: 0x34b2b0, Func Offset: 0
	// Line 4448, Address: 0x34b2b4, Func Offset: 0x4
	// Line 4450, Address: 0x34b2c0, Func Offset: 0x10
	// Line 4451, Address: 0x34b2c4, Func Offset: 0x14
	// Func End, Address: 0x34b2cc, Func Offset: 0x1c
}

// WallJumpFallCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34b2d0
uint32 WallJumpFallCheck()
{
	// Line 4440, Address: 0x34b2d0, Func Offset: 0
	// Line 4441, Address: 0x34b2ec, Func Offset: 0x1c
	// Func End, Address: 0x34b2f4, Func Offset: 0x24
}

// WallJumpLandFlightCallback__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34b300
uint32 WallJumpLandFlightCallback()
{
	// Line 4434, Address: 0x34b300, Func Offset: 0
	// Line 4435, Address: 0x34b308, Func Offset: 0x8
	// Line 4436, Address: 0x34b30c, Func Offset: 0xc
	// Func End, Address: 0x34b314, Func Offset: 0x14
}

// WallJumpLandFlightCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34b320
uint32 WallJumpLandFlightCheck()
{
	// Line 4428, Address: 0x34b320, Func Offset: 0
	// Line 4429, Address: 0x34b328, Func Offset: 0x8
	// Func End, Address: 0x34b330, Func Offset: 0x10
}

// WallJumpFlightLandCallback__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34b330
uint32 WallJumpFlightLandCallback()
{
	// Line 4417, Address: 0x34b330, Func Offset: 0
	// Line 4420, Address: 0x34b334, Func Offset: 0x4
	// Line 4417, Address: 0x34b338, Func Offset: 0x8
	// Line 4419, Address: 0x34b33c, Func Offset: 0xc
	// Line 4420, Address: 0x34b340, Func Offset: 0x10
	// Line 4419, Address: 0x34b344, Func Offset: 0x14
	// Line 4420, Address: 0x34b348, Func Offset: 0x18
	// Line 4423, Address: 0x34b45c, Func Offset: 0x12c
	// Line 4422, Address: 0x34b460, Func Offset: 0x130
	// Line 4423, Address: 0x34b464, Func Offset: 0x134
	// Func End, Address: 0x34b46c, Func Offset: 0x13c
}

// WallJumpFlightLandCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34b470
uint32 WallJumpFlightLandCheck()
{
	// Line 4413, Address: 0x34b470, Func Offset: 0
	// Line 4414, Address: 0x34b478, Func Offset: 0x8
	// Func End, Address: 0x34b480, Func Offset: 0x10
}

// WallJumpCallback__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34b480
uint32 WallJumpCallback()
{
	zJumpParam wallParam;
	xEntFrame* frame;
	xVec3* velocity;
	// Line 4358, Address: 0x34b480, Func Offset: 0
	// Line 4360, Address: 0x34b484, Func Offset: 0x4
	// Line 4358, Address: 0x34b488, Func Offset: 0x8
	// Line 4360, Address: 0x34b49c, Func Offset: 0x1c
	// Line 4362, Address: 0x34b4a0, Func Offset: 0x20
	// Line 4360, Address: 0x34b4a8, Func Offset: 0x28
	// Line 4362, Address: 0x34b4b8, Func Offset: 0x38
	// Line 4361, Address: 0x34b4bc, Func Offset: 0x3c
	// Line 4362, Address: 0x34b4c0, Func Offset: 0x40
	// Line 4360, Address: 0x34b4c8, Func Offset: 0x48
	// Line 4361, Address: 0x34b4d4, Func Offset: 0x54
	// Line 4362, Address: 0x34b4e0, Func Offset: 0x60
	// Line 4365, Address: 0x34b4e8, Func Offset: 0x68
	// Line 4368, Address: 0x34b54c, Func Offset: 0xcc
	// Line 4371, Address: 0x34b670, Func Offset: 0x1f0
	// Line 4374, Address: 0x34b674, Func Offset: 0x1f4
	// Line 4371, Address: 0x34b678, Func Offset: 0x1f8
	// Line 4377, Address: 0x34b67c, Func Offset: 0x1fc
	// Line 4374, Address: 0x34b680, Func Offset: 0x200
	// Line 4377, Address: 0x34b684, Func Offset: 0x204
	// Line 4380, Address: 0x34b68c, Func Offset: 0x20c
	// Line 4391, Address: 0x34b690, Func Offset: 0x210
	// Line 4394, Address: 0x34b698, Func Offset: 0x218
	// Line 4390, Address: 0x34b6a0, Func Offset: 0x220
	// Line 4391, Address: 0x34b6a4, Func Offset: 0x224
	// Line 4390, Address: 0x34b6a8, Func Offset: 0x228
	// Line 4382, Address: 0x34b6ac, Func Offset: 0x22c
	// Line 4390, Address: 0x34b6b0, Func Offset: 0x230
	// Line 4398, Address: 0x34b6b4, Func Offset: 0x234
	// Line 4380, Address: 0x34b6b8, Func Offset: 0x238
	// Line 4394, Address: 0x34b6bc, Func Offset: 0x23c
	// Line 4398, Address: 0x34b6c4, Func Offset: 0x244
	// Line 4380, Address: 0x34b6c8, Func Offset: 0x248
	// Line 4398, Address: 0x34b6cc, Func Offset: 0x24c
	// Line 4382, Address: 0x34b6d4, Func Offset: 0x254
	// Line 4383, Address: 0x34b6d8, Func Offset: 0x258
	// Line 4390, Address: 0x34b6dc, Func Offset: 0x25c
	// Line 4391, Address: 0x34b6e4, Func Offset: 0x264
	// Line 4390, Address: 0x34b6ec, Func Offset: 0x26c
	// Line 4391, Address: 0x34b6f8, Func Offset: 0x278
	// Line 4390, Address: 0x34b6fc, Func Offset: 0x27c
	// Line 4391, Address: 0x34b710, Func Offset: 0x290
	// Line 4394, Address: 0x34b730, Func Offset: 0x2b0
	// Line 4395, Address: 0x34b73c, Func Offset: 0x2bc
	// Line 4398, Address: 0x34b754, Func Offset: 0x2d4
	// Line 4402, Address: 0x34b78c, Func Offset: 0x30c
	// Line 4407, Address: 0x34b790, Func Offset: 0x310
	// Line 4402, Address: 0x34b794, Func Offset: 0x314
	// Line 4403, Address: 0x34b79c, Func Offset: 0x31c
	// Line 4404, Address: 0x34b7a0, Func Offset: 0x320
	// Line 4407, Address: 0x34b7b4, Func Offset: 0x334
	// Line 4408, Address: 0x34b7c8, Func Offset: 0x348
	// Func End, Address: 0x34b7e4, Func Offset: 0x364
}

// WallJumpLaunchCallback__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34b7f0
uint32 WallJumpLaunchCallback()
{
	// Line 4338, Address: 0x34b7f0, Func Offset: 0
	// Line 4341, Address: 0x34b7f4, Func Offset: 0x4
	// Line 4338, Address: 0x34b7fc, Func Offset: 0xc
	// Line 4340, Address: 0x34b800, Func Offset: 0x10
	// Line 4341, Address: 0x34b808, Func Offset: 0x18
	// Line 4340, Address: 0x34b80c, Func Offset: 0x1c
	// Line 4341, Address: 0x34b810, Func Offset: 0x20
	// Line 4344, Address: 0x34b818, Func Offset: 0x28
	// Line 4348, Address: 0x34b820, Func Offset: 0x30
	// Line 4351, Address: 0x34b824, Func Offset: 0x34
	// Line 4355, Address: 0x34b86c, Func Offset: 0x7c
	// Line 4354, Address: 0x34b870, Func Offset: 0x80
	// Line 4355, Address: 0x34b874, Func Offset: 0x84
	// Func End, Address: 0x34b87c, Func Offset: 0x8c
}

// WallJumpLaunchCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34b880
uint32 WallJumpLaunchCheck()
{
	// Line 4330, Address: 0x34b880, Func Offset: 0
	// Line 4334, Address: 0x34b8d4, Func Offset: 0x54
	// Line 4331, Address: 0x34b8e4, Func Offset: 0x64
	// Line 4335, Address: 0x34b8e8, Func Offset: 0x68
	// Func End, Address: 0x34b8f0, Func Offset: 0x70
}

// DoWallJumpCheck__Fv
// Start address: 0x34b8f0
void DoWallJumpCheck()
{
	xEnt* ent;
	xVec3 start;
	xVec3 end;
	xSweptSphere sws;
	xSurface* surf;
	zSurfaceProps* surfaceProperties;
	float32 sVerticalCos;
	float32 sSweptrad;
	float32 sAtdist;
	// Line 4264, Address: 0x34b8f0, Func Offset: 0
	// Line 4277, Address: 0x34b8f8, Func Offset: 0x8
	// Line 4264, Address: 0x34b8fc, Func Offset: 0xc
	// Line 4278, Address: 0x34b900, Func Offset: 0x10
	// Line 4265, Address: 0x34b904, Func Offset: 0x14
	// Line 4280, Address: 0x34b908, Func Offset: 0x18
	// Line 4281, Address: 0x34b90c, Func Offset: 0x1c
	// Line 4287, Address: 0x34b910, Func Offset: 0x20
	// Line 4280, Address: 0x34b914, Func Offset: 0x24
	// Line 4287, Address: 0x34b918, Func Offset: 0x28
	// Line 4265, Address: 0x34b924, Func Offset: 0x34
	// Line 4268, Address: 0x34b928, Func Offset: 0x38
	// Line 4277, Address: 0x34b92c, Func Offset: 0x3c
	// Line 4278, Address: 0x34b93c, Func Offset: 0x4c
	// Line 4280, Address: 0x34b944, Func Offset: 0x54
	// Line 4278, Address: 0x34b948, Func Offset: 0x58
	// Line 4279, Address: 0x34b958, Func Offset: 0x68
	// Line 4280, Address: 0x34b968, Func Offset: 0x78
	// Line 4281, Address: 0x34b974, Func Offset: 0x84
	// Line 4282, Address: 0x34b97c, Func Offset: 0x8c
	// Line 4281, Address: 0x34b980, Func Offset: 0x90
	// Line 4282, Address: 0x34b994, Func Offset: 0xa4
	// Line 4287, Address: 0x34b9a8, Func Offset: 0xb8
	// Line 4288, Address: 0x34b9b0, Func Offset: 0xc0
	// Line 4325, Address: 0x34b9d4, Func Offset: 0xe4
	// Line 4303, Address: 0x34ba18, Func Offset: 0x128
	// Line 4325, Address: 0x34ba1c, Func Offset: 0x12c
	// Line 4310, Address: 0x34ba30, Func Offset: 0x140
	// Line 4325, Address: 0x34ba34, Func Offset: 0x144
	// Line 4310, Address: 0x34ba40, Func Offset: 0x150
	// Line 4325, Address: 0x34ba44, Func Offset: 0x154
	// Line 4310, Address: 0x34ba48, Func Offset: 0x158
	// Line 4325, Address: 0x34ba4c, Func Offset: 0x15c
	// Line 4310, Address: 0x34ba50, Func Offset: 0x160
	// Line 4325, Address: 0x34ba64, Func Offset: 0x174
	// Line 4320, Address: 0x34ba98, Func Offset: 0x1a8
	// Line 4325, Address: 0x34ba9c, Func Offset: 0x1ac
	// Func End, Address: 0x34bae0, Func Offset: 0x1f0
}

// SpatulaGrabStopCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34bae0
uint32 SpatulaGrabStopCB()
{
	// Line 4181, Address: 0x34bae0, Func Offset: 0
	// Line 4185, Address: 0x34bae4, Func Offset: 0x4
	// Line 4181, Address: 0x34bae8, Func Offset: 0x8
	// Line 4185, Address: 0x34baf8, Func Offset: 0x18
	// Line 4187, Address: 0x34bb04, Func Offset: 0x24
	// Line 4191, Address: 0x34bb0c, Func Offset: 0x2c
	// Line 4192, Address: 0x34bb14, Func Offset: 0x34
	// Line 4193, Address: 0x34bb1c, Func Offset: 0x3c
	// Line 4195, Address: 0x34bb28, Func Offset: 0x48
	// Line 4198, Address: 0x34bb3c, Func Offset: 0x5c
	// Line 4202, Address: 0x34bb4c, Func Offset: 0x6c
	// Line 4205, Address: 0x34bb54, Func Offset: 0x74
	// Line 4207, Address: 0x34bb94, Func Offset: 0xb4
	// Line 4210, Address: 0x34bc10, Func Offset: 0x130
	// Line 4209, Address: 0x34bc18, Func Offset: 0x138
	// Line 4210, Address: 0x34bc1c, Func Offset: 0x13c
	// Func End, Address: 0x34bc2c, Func Offset: 0x14c
}

// SpatulaGrabCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34bc30
uint32 SpatulaGrabCB(void* object)
{
	xEnt* ent;
	// Line 4136, Address: 0x34bc30, Func Offset: 0
	// Line 4143, Address: 0x34bc34, Func Offset: 0x4
	// Line 4136, Address: 0x34bc38, Func Offset: 0x8
	// Line 4141, Address: 0x34bc3c, Func Offset: 0xc
	// Line 4138, Address: 0x34bc40, Func Offset: 0x10
	// Line 4141, Address: 0x34bc44, Func Offset: 0x14
	// Line 4142, Address: 0x34bc48, Func Offset: 0x18
	// Line 4143, Address: 0x34bc4c, Func Offset: 0x1c
	// Line 4144, Address: 0x34bc50, Func Offset: 0x20
	// Line 4147, Address: 0x34bc54, Func Offset: 0x24
	// Line 4148, Address: 0x34bc60, Func Offset: 0x30
	// Line 4149, Address: 0x34bc70, Func Offset: 0x40
	// Line 4152, Address: 0x34bc74, Func Offset: 0x44
	// Line 4153, Address: 0x34bc78, Func Offset: 0x48
	// Line 4170, Address: 0x34bc7c, Func Offset: 0x4c
	// Line 4149, Address: 0x34bc80, Func Offset: 0x50
	// Line 4152, Address: 0x34bc84, Func Offset: 0x54
	// Line 4170, Address: 0x34bc88, Func Offset: 0x58
	// Line 4173, Address: 0x34bc90, Func Offset: 0x60
	// Line 4175, Address: 0x34bc98, Func Offset: 0x68
	// Line 4176, Address: 0x34bca8, Func Offset: 0x78
	// Func End, Address: 0x34bcb4, Func Offset: 0x84
}

// SpatulaGrabCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34bcc0
uint32 SpatulaGrabCheck()
{
	// Line 4133, Address: 0x34bcc0, Func Offset: 0
	// Func End, Address: 0x34bcc8, Func Offset: 0x8
}

// DefeatedCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34bcd0
uint32 DefeatedCB()
{
	zShrapnelAsset* deathShrap;
	// Line 4089, Address: 0x34bcd0, Func Offset: 0
	// Line 4090, Address: 0x34bcdc, Func Offset: 0xc
	// Line 4099, Address: 0x34bce8, Func Offset: 0x18
	// Line 4100, Address: 0x34bcec, Func Offset: 0x1c
	// Line 4099, Address: 0x34bcf0, Func Offset: 0x20
	// Line 4100, Address: 0x34bcf4, Func Offset: 0x24
	// Line 4128, Address: 0x34bcfc, Func Offset: 0x2c
	// Line 4096, Address: 0x34bd0c, Func Offset: 0x3c
	// Line 4094, Address: 0x34bd10, Func Offset: 0x40
	// Line 4128, Address: 0x34bd14, Func Offset: 0x44
	// Line 4095, Address: 0x34bd18, Func Offset: 0x48
	// Line 4128, Address: 0x34bd1c, Func Offset: 0x4c
	// Line 4096, Address: 0x34bd38, Func Offset: 0x68
	// Line 4128, Address: 0x34bd3c, Func Offset: 0x6c
	// Line 4096, Address: 0x34bd44, Func Offset: 0x74
	// Line 4128, Address: 0x34bd48, Func Offset: 0x78
	// Line 4096, Address: 0x34bd58, Func Offset: 0x88
	// Line 4128, Address: 0x34bd60, Func Offset: 0x90
	// Line 4108, Address: 0x34bd88, Func Offset: 0xb8
	// Line 4128, Address: 0x34bd90, Func Offset: 0xc0
	// Line 4108, Address: 0x34bd98, Func Offset: 0xc8
	// Line 4128, Address: 0x34bdd4, Func Offset: 0x104
	// Line 4109, Address: 0x34bdf4, Func Offset: 0x124
	// Line 4128, Address: 0x34bdf8, Func Offset: 0x128
	// Line 4110, Address: 0x34be08, Func Offset: 0x138
	// Line 4128, Address: 0x34be0c, Func Offset: 0x13c
	// Line 4110, Address: 0x34be14, Func Offset: 0x144
	// Line 4128, Address: 0x34be18, Func Offset: 0x148
	// Line 4114, Address: 0x34be38, Func Offset: 0x168
	// Line 4128, Address: 0x34be3c, Func Offset: 0x16c
	// Line 4115, Address: 0x34be58, Func Offset: 0x188
	// Line 4128, Address: 0x34be5c, Func Offset: 0x18c
	// Line 4115, Address: 0x34be60, Func Offset: 0x190
	// Line 4128, Address: 0x34be64, Func Offset: 0x194
	// Line 4129, Address: 0x34beb8, Func Offset: 0x1e8
	// Func End, Address: 0x34bec8, Func Offset: 0x1f8
}

// Defeated03Check__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34bed0
uint32 Defeated03Check(xAnimTransition* tran)
{
	// Line 4071, Address: 0x34bed0, Func Offset: 0
	// Line 4073, Address: 0x34bf08, Func Offset: 0x38
	// Func End, Address: 0x34bf10, Func Offset: 0x40
}

// Defeated02Check__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34bf10
uint32 Defeated02Check(xAnimTransition* tran)
{
	// Line 4065, Address: 0x34bf10, Func Offset: 0
	// Line 4067, Address: 0x34bf48, Func Offset: 0x38
	// Func End, Address: 0x34bf50, Func Offset: 0x40
}

// Defeated01Check__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34bf50
uint32 Defeated01Check(xAnimTransition* tran)
{
	// Line 4059, Address: 0x34bf50, Func Offset: 0
	// Line 4061, Address: 0x34bf94, Func Offset: 0x44
	// Func End, Address: 0x34bf9c, Func Offset: 0x4c
}

// DefeatedCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34bfa0
uint32 DefeatedCheck()
{
	// Line 4053, Address: 0x34bfa0, Func Offset: 0
	// Line 4054, Address: 0x34bfb4, Func Offset: 0x14
	// Func End, Address: 0x34bfbc, Func Offset: 0x1c
}

// Hit05CB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34bfc0
uint32 Hit05CB()
{
	// Line 4047, Address: 0x34bfc0, Func Offset: 0
	// Line 4046, Address: 0x34bfc4, Func Offset: 0x4
	// Line 4048, Address: 0x34bfc8, Func Offset: 0x8
	// Line 4049, Address: 0x34bfcc, Func Offset: 0xc
	// Func End, Address: 0x34bfd4, Func Offset: 0x14
}

// Hit05Check__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34bfe0
uint32 Hit05Check()
{
	// Line 4042, Address: 0x34bfe0, Func Offset: 0
	// Line 4043, Address: 0x34bffc, Func Offset: 0x1c
	// Func End, Address: 0x34c004, Func Offset: 0x24
}

// Hit04CB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34c010
uint32 Hit04CB()
{
	// Line 4037, Address: 0x34c010, Func Offset: 0
	// Line 4036, Address: 0x34c014, Func Offset: 0x4
	// Line 4038, Address: 0x34c018, Func Offset: 0x8
	// Line 4039, Address: 0x34c01c, Func Offset: 0xc
	// Func End, Address: 0x34c024, Func Offset: 0x14
}

// Hit04Check__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34c030
uint32 Hit04Check()
{
	// Line 4032, Address: 0x34c030, Func Offset: 0
	// Line 4033, Address: 0x34c04c, Func Offset: 0x1c
	// Func End, Address: 0x34c054, Func Offset: 0x24
}

// Hit03CB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34c060
uint32 Hit03CB()
{
	// Line 4027, Address: 0x34c060, Func Offset: 0
	// Line 4026, Address: 0x34c064, Func Offset: 0x4
	// Line 4028, Address: 0x34c068, Func Offset: 0x8
	// Line 4029, Address: 0x34c06c, Func Offset: 0xc
	// Func End, Address: 0x34c074, Func Offset: 0x14
}

// Hit03Check__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34c080
uint32 Hit03Check()
{
	// Line 4022, Address: 0x34c080, Func Offset: 0
	// Line 4023, Address: 0x34c09c, Func Offset: 0x1c
	// Func End, Address: 0x34c0a4, Func Offset: 0x24
}

// Hit02CB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34c0b0
uint32 Hit02CB()
{
	// Line 4017, Address: 0x34c0b0, Func Offset: 0
	// Line 4016, Address: 0x34c0b4, Func Offset: 0x4
	// Line 4018, Address: 0x34c0b8, Func Offset: 0x8
	// Line 4019, Address: 0x34c0bc, Func Offset: 0xc
	// Func End, Address: 0x34c0c4, Func Offset: 0x14
}

// Hit02Check__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34c0d0
uint32 Hit02Check()
{
	// Line 4012, Address: 0x34c0d0, Func Offset: 0
	// Line 4013, Address: 0x34c0ec, Func Offset: 0x1c
	// Func End, Address: 0x34c0f4, Func Offset: 0x24
}

// Hit01CB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34c100
uint32 Hit01CB()
{
	// Line 4007, Address: 0x34c100, Func Offset: 0
	// Line 4006, Address: 0x34c104, Func Offset: 0x4
	// Line 4008, Address: 0x34c108, Func Offset: 0x8
	// Line 4009, Address: 0x34c10c, Func Offset: 0xc
	// Func End, Address: 0x34c114, Func Offset: 0x14
}

// Hit01Check__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34c120
uint32 Hit01Check()
{
	// Line 4002, Address: 0x34c120, Func Offset: 0
	// Line 4003, Address: 0x34c13c, Func Offset: 0x1c
	// Func End, Address: 0x34c144, Func Offset: 0x24
}

// HitCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34c150
uint32 HitCB()
{
	// Line 3997, Address: 0x34c150, Func Offset: 0
	// Line 3999, Address: 0x34c154, Func Offset: 0x4
	// Func End, Address: 0x34c15c, Func Offset: 0xc
}

// HitCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34c160
uint32 HitCheck()
{
	// Line 3994, Address: 0x34c160, Func Offset: 0
	// Func End, Address: 0x34c168, Func Offset: 0x8
}

// GooDeathCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34c170
uint32 GooDeathCB()
{
	// Line 3975, Address: 0x34c170, Func Offset: 0
	// Line 3977, Address: 0x34c174, Func Offset: 0x4
	// Line 3975, Address: 0x34c178, Func Offset: 0x8
	// Line 3978, Address: 0x34c17c, Func Offset: 0xc
	// Line 3977, Address: 0x34c180, Func Offset: 0x10
	// Line 3978, Address: 0x34c184, Func Offset: 0x14
	// Line 3977, Address: 0x34c188, Func Offset: 0x18
	// Line 3979, Address: 0x34c18c, Func Offset: 0x1c
	// Line 3981, Address: 0x34c194, Func Offset: 0x24
	// Line 3980, Address: 0x34c198, Func Offset: 0x28
	// Line 3981, Address: 0x34c19c, Func Offset: 0x2c
	// Line 3980, Address: 0x34c1a8, Func Offset: 0x38
	// Line 3981, Address: 0x34c1ac, Func Offset: 0x3c
	// Line 3982, Address: 0x34c1f0, Func Offset: 0x80
	// Line 3983, Address: 0x34c2a8, Func Offset: 0x138
	// Line 3986, Address: 0x34c35c, Func Offset: 0x1ec
	// Line 3985, Address: 0x34c360, Func Offset: 0x1f0
	// Line 3986, Address: 0x34c364, Func Offset: 0x1f4
	// Func End, Address: 0x34c36c, Func Offset: 0x1fc
}

// GooCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34c370
uint32 GooCheck()
{
	// Line 3933, Address: 0x34c370, Func Offset: 0
	// Line 3935, Address: 0x34c384, Func Offset: 0x14
	// Line 3938, Address: 0x34c394, Func Offset: 0x24
	// Line 3939, Address: 0x34c3b0, Func Offset: 0x40
	// Line 3934, Address: 0x34c3b8, Func Offset: 0x48
	// Line 3936, Address: 0x34c3c0, Func Offset: 0x50
	// Line 3945, Address: 0x34c3c8, Func Offset: 0x58
	// Line 3946, Address: 0x34c3cc, Func Offset: 0x5c
	// Func End, Address: 0x34c3d4, Func Offset: 0x64
}

// BbowlRecoverRunSlipCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34c3e0
uint32 BbowlRecoverRunSlipCheck(xAnimSingle* anim)
{
	// Line 3928, Address: 0x34c3e0, Func Offset: 0
	// Line 3930, Address: 0x34c484, Func Offset: 0xa4
	// Func End, Address: 0x34c48c, Func Offset: 0xac
}

// BbowlRecoverRunOutOfWorldCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34c490
uint32 BbowlRecoverRunOutOfWorldCheck(xAnimSingle* anim)
{
	// Line 3923, Address: 0x34c490, Func Offset: 0
	// Line 3925, Address: 0x34c588, Func Offset: 0xf8
	// Func End, Address: 0x34c590, Func Offset: 0x100
}

// BbowlRecoverRunCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34c590
uint32 BbowlRecoverRunCheck(xAnimSingle* anim)
{
	// Line 3906, Address: 0x34c590, Func Offset: 0
	// Line 3908, Address: 0x34c684, Func Offset: 0xf4
	// Func End, Address: 0x34c68c, Func Offset: 0xfc
}

// BbowlRecoverWalkCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34c690
uint32 BbowlRecoverWalkCheck(xAnimSingle* anim)
{
	// Line 3901, Address: 0x34c690, Func Offset: 0
	// Line 3903, Address: 0x34c784, Func Offset: 0xf4
	// Func End, Address: 0x34c78c, Func Offset: 0xfc
}

// BbowlTossEndCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34c790
uint32 BbowlTossEndCB()
{
	// Line 3883, Address: 0x34c790, Func Offset: 0
	// Line 3884, Address: 0x34c7a4, Func Offset: 0x14
	// Line 3886, Address: 0x34c7ac, Func Offset: 0x1c
	// Line 3890, Address: 0x34c7e4, Func Offset: 0x54
	// Line 3888, Address: 0x34c7e8, Func Offset: 0x58
	// Line 3889, Address: 0x34c7f0, Func Offset: 0x60
	// Line 3890, Address: 0x34c7f4, Func Offset: 0x64
	// Line 3889, Address: 0x34c7f8, Func Offset: 0x68
	// Line 3893, Address: 0x34c7fc, Func Offset: 0x6c
	// Line 3894, Address: 0x34c8b8, Func Offset: 0x128
	// Line 3897, Address: 0x34c9d4, Func Offset: 0x244
	// Line 3886, Address: 0x34c9e8, Func Offset: 0x258
	// Line 3897, Address: 0x34c9ec, Func Offset: 0x25c
	// Line 3886, Address: 0x34ca04, Func Offset: 0x274
	// Line 3897, Address: 0x34ca0c, Func Offset: 0x27c
	// Line 3886, Address: 0x34ca14, Func Offset: 0x284
	// Line 3897, Address: 0x34ca18, Func Offset: 0x288
	// Line 3886, Address: 0x34ca34, Func Offset: 0x2a4
	// Line 3897, Address: 0x34ca38, Func Offset: 0x2a8
	// Line 3886, Address: 0x34ca64, Func Offset: 0x2d4
	// Line 3898, Address: 0x34ca70, Func Offset: 0x2e0
	// Func End, Address: 0x34ca84, Func Offset: 0x2f4
}

// BbowlWindupEndCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34ca90
uint32 BbowlWindupEndCheck(xAnimSingle* anim)
{
	// Line 3875, Address: 0x34ca90, Func Offset: 0
	// Line 3876, Address: 0x34ca94, Func Offset: 0x4
	// Line 3877, Address: 0x34cab0, Func Offset: 0x20
	// Line 3879, Address: 0x34cab8, Func Offset: 0x28
	// Line 3880, Address: 0x34cabc, Func Offset: 0x2c
	// Line 3881, Address: 0x34cac0, Func Offset: 0x30
	// Func End, Address: 0x34cac8, Func Offset: 0x38
}

// BbowlCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34cad0
uint32 BbowlCB()
{
	xEntFrame* frame;
	float32 x;
	float32 z;
	// Line 3829, Address: 0x34cad0, Func Offset: 0
	// Line 3833, Address: 0x34cad4, Func Offset: 0x4
	// Line 3829, Address: 0x34cad8, Func Offset: 0x8
	// Line 3833, Address: 0x34cadc, Func Offset: 0xc
	// Line 3834, Address: 0x34cbf8, Func Offset: 0x128
	// Line 3837, Address: 0x34ccbc, Func Offset: 0x1ec
	// Line 3839, Address: 0x34cd0c, Func Offset: 0x23c
	// Line 3844, Address: 0x34cd50, Func Offset: 0x280
	// Line 3839, Address: 0x34cd5c, Func Offset: 0x28c
	// Line 3842, Address: 0x34cd68, Func Offset: 0x298
	// Line 3853, Address: 0x34cd70, Func Offset: 0x2a0
	// Line 3842, Address: 0x34cd74, Func Offset: 0x2a4
	// Line 3844, Address: 0x34cd78, Func Offset: 0x2a8
	// Line 3843, Address: 0x34cd80, Func Offset: 0x2b0
	// Line 3844, Address: 0x34cd88, Func Offset: 0x2b8
	// Line 3843, Address: 0x34cd8c, Func Offset: 0x2bc
	// Line 3844, Address: 0x34cd90, Func Offset: 0x2c0
	// Line 3843, Address: 0x34cd94, Func Offset: 0x2c4
	// Line 3853, Address: 0x34cda4, Func Offset: 0x2d4
	// Line 3854, Address: 0x34cdb0, Func Offset: 0x2e0
	// Line 3859, Address: 0x34cdb8, Func Offset: 0x2e8
	// Line 3861, Address: 0x34cdc4, Func Offset: 0x2f4
	// Line 3869, Address: 0x34cdc8, Func Offset: 0x2f8
	// Line 3871, Address: 0x34cdcc, Func Offset: 0x2fc
	// Line 3859, Address: 0x34cdd0, Func Offset: 0x300
	// Line 3869, Address: 0x34cdd4, Func Offset: 0x304
	// Line 3872, Address: 0x34cdd8, Func Offset: 0x308
	// Line 3859, Address: 0x34cddc, Func Offset: 0x30c
	// Line 3861, Address: 0x34cdec, Func Offset: 0x31c
	// Line 3869, Address: 0x34ce0c, Func Offset: 0x33c
	// Line 3871, Address: 0x34ce10, Func Offset: 0x340
	// Line 3868, Address: 0x34ce14, Func Offset: 0x344
	// Line 3872, Address: 0x34ce18, Func Offset: 0x348
	// Line 3836, Address: 0x34ce24, Func Offset: 0x354
	// Line 3872, Address: 0x34ce28, Func Offset: 0x358
	// Line 3873, Address: 0x34ce58, Func Offset: 0x388
	// Func End, Address: 0x34ce64, Func Offset: 0x394
}

// BbowlCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34ce70
uint32 BbowlCheck()
{
	uint8 doBowl;
	// Line 3792, Address: 0x34ce70, Func Offset: 0
	// Line 3795, Address: 0x34ce80, Func Offset: 0x10
	// Line 3797, Address: 0x34ce8c, Func Offset: 0x1c
	// Line 3799, Address: 0x34cea8, Func Offset: 0x38
	// Line 3801, Address: 0x34ceb0, Func Offset: 0x40
	// Line 3803, Address: 0x34cecc, Func Offset: 0x5c
	// Line 3805, Address: 0x34ced4, Func Offset: 0x64
	// Line 3808, Address: 0x34cee0, Func Offset: 0x70
	// Line 3811, Address: 0x34cf24, Func Offset: 0xb4
	// Line 3809, Address: 0x34cf78, Func Offset: 0x108
	// Line 3811, Address: 0x34cf7c, Func Offset: 0x10c
	// Line 3809, Address: 0x34cf84, Func Offset: 0x114
	// Line 3811, Address: 0x34cf88, Func Offset: 0x118
	// Line 3809, Address: 0x34cf8c, Func Offset: 0x11c
	// Line 3812, Address: 0x34cf90, Func Offset: 0x120
	// Line 3814, Address: 0x34cf98, Func Offset: 0x128
	// Line 3817, Address: 0x34cfa0, Func Offset: 0x130
	// Line 3818, Address: 0x34cfe0, Func Offset: 0x170
	// Line 3821, Address: 0x34d014, Func Offset: 0x1a4
	// Line 3793, Address: 0x34d020, Func Offset: 0x1b0
	// Line 3796, Address: 0x34d028, Func Offset: 0x1b8
	// Line 3798, Address: 0x34d030, Func Offset: 0x1c0
	// Line 3800, Address: 0x34d038, Func Offset: 0x1c8
	// Line 3802, Address: 0x34d040, Func Offset: 0x1d0
	// Line 3804, Address: 0x34d048, Func Offset: 0x1d8
	// Line 3823, Address: 0x34d04c, Func Offset: 0x1dc
	// Func End, Address: 0x34d054, Func Offset: 0x1e4
}

// BBounceToJumpCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34d060
uint32 BBounceToJumpCB()
{
	// Line 3779, Address: 0x34d060, Func Offset: 0
	// Line 3780, Address: 0x34d06c, Func Offset: 0xc
	// Line 3779, Address: 0x34d070, Func Offset: 0x10
	// Line 3780, Address: 0x34d074, Func Offset: 0x14
	// Line 3781, Address: 0x34d0d4, Func Offset: 0x74
	// Line 3782, Address: 0x34d0d8, Func Offset: 0x78
	// Line 3783, Address: 0x34d0dc, Func Offset: 0x7c
	// Line 3784, Address: 0x34d0e4, Func Offset: 0x84
	// Line 3785, Address: 0x34d0e8, Func Offset: 0x88
	// Line 3786, Address: 0x34d0ec, Func Offset: 0x8c
	// Line 3781, Address: 0x34d0f0, Func Offset: 0x90
	// Line 3782, Address: 0x34d0fc, Func Offset: 0x9c
	// Line 3781, Address: 0x34d100, Func Offset: 0xa0
	// Line 3783, Address: 0x34d108, Func Offset: 0xa8
	// Line 3784, Address: 0x34d10c, Func Offset: 0xac
	// Line 3786, Address: 0x34d110, Func Offset: 0xb0
	// Line 3788, Address: 0x34d118, Func Offset: 0xb8
	// Line 3789, Address: 0x34d12c, Func Offset: 0xcc
	// Func End, Address: 0x34d138, Func Offset: 0xd8
}

// BBounceToJumpCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34d140
uint32 BBounceToJumpCheck()
{
	// Line 3777, Address: 0x34d140, Func Offset: 0
	// Func End, Address: 0x34d148, Func Offset: 0x8
}

// BBounceStrikeCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34d150
uint32 BBounceStrikeCB()
{
	// Line 3762, Address: 0x34d150, Func Offset: 0
	// Line 3764, Address: 0x34d15c, Func Offset: 0xc
	// Line 3765, Address: 0x34d218, Func Offset: 0xc8
	// Line 3766, Address: 0x34d334, Func Offset: 0x1e4
	// Line 3768, Address: 0x34d36c, Func Offset: 0x21c
	// Line 3773, Address: 0x34d374, Func Offset: 0x224
	// Line 3772, Address: 0x34d378, Func Offset: 0x228
	// Line 3773, Address: 0x34d37c, Func Offset: 0x22c
	// Func End, Address: 0x34d384, Func Offset: 0x234
}

// BBounceStrikeCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34d390
uint32 BBounceStrikeCheck()
{
	// Line 3758, Address: 0x34d390, Func Offset: 0
	// Line 3760, Address: 0x34d3b0, Func Offset: 0x20
	// Func End, Address: 0x34d3b8, Func Offset: 0x28
}

// BBounceAttackCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34d3c0
uint32 BBounceAttackCB()
{
	// Line 3753, Address: 0x34d3c0, Func Offset: 0
	// Line 3754, Address: 0x34d3d4, Func Offset: 0x14
	// Line 3753, Address: 0x34d3d8, Func Offset: 0x18
	// Line 3755, Address: 0x34d3dc, Func Offset: 0x1c
	// Func End, Address: 0x34d3e4, Func Offset: 0x24
}

// BubbleBounceCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34d3f0
uint32 BubbleBounceCB()
{
	// Line 3732, Address: 0x34d3f0, Func Offset: 0
	// Line 3733, Address: 0x34d3f8, Func Offset: 0x8
	// Line 3734, Address: 0x34d400, Func Offset: 0x10
	// Line 3742, Address: 0x34d404, Func Offset: 0x14
	// Line 3748, Address: 0x34d408, Func Offset: 0x18
	// Line 3734, Address: 0x34d40c, Func Offset: 0x1c
	// Line 3735, Address: 0x34d418, Func Offset: 0x28
	// Line 3736, Address: 0x34d428, Func Offset: 0x38
	// Line 3742, Address: 0x34d438, Func Offset: 0x48
	// Line 3739, Address: 0x34d43c, Func Offset: 0x4c
	// Line 3740, Address: 0x34d440, Func Offset: 0x50
	// Line 3741, Address: 0x34d444, Func Offset: 0x54
	// Line 3744, Address: 0x34d448, Func Offset: 0x58
	// Line 3749, Address: 0x34d44c, Func Offset: 0x5c
	// Func End, Address: 0x34d458, Func Offset: 0x68
}

// BubbleBounceCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34d460
uint32 BubbleBounceCheck()
{
	// Line 3730, Address: 0x34d460, Func Offset: 0
	// Func End, Address: 0x34d468, Func Offset: 0x8
}

// BbashStart01EffectMissCB__FUiP17xAnimActiveEffectP11xAnimSinglePv
// Start address: 0x34d470
uint32 BbashStart01EffectMissCB()
{
	// Line 3715, Address: 0x34d470, Func Offset: 0
	// Line 3716, Address: 0x34d474, Func Offset: 0x4
	// Line 3715, Address: 0x34d478, Func Offset: 0x8
	// Line 3716, Address: 0x34d47c, Func Offset: 0xc
	// Line 3719, Address: 0x34d594, Func Offset: 0x124
	// Line 3718, Address: 0x34d598, Func Offset: 0x128
	// Line 3719, Address: 0x34d59c, Func Offset: 0x12c
	// Func End, Address: 0x34d5a4, Func Offset: 0x134
}

// BBashStrikeCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34d5b0
uint32 BBashStrikeCB()
{
	// Line 3699, Address: 0x34d5b0, Func Offset: 0
	// Line 3700, Address: 0x34d5b8, Func Offset: 0x8
	// Line 3703, Address: 0x34d5cc, Func Offset: 0x1c
	// Line 3704, Address: 0x34d684, Func Offset: 0xd4
	// Line 3705, Address: 0x34d740, Func Offset: 0x190
	// Line 3706, Address: 0x34d754, Func Offset: 0x1a4
	// Line 3709, Address: 0x34d86c, Func Offset: 0x2bc
	// Line 3708, Address: 0x34d870, Func Offset: 0x2c0
	// Line 3709, Address: 0x34d874, Func Offset: 0x2c4
	// Func End, Address: 0x34d87c, Func Offset: 0x2cc
}

// BBashStrikeCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34d880
uint32 BBashStrikeCheck()
{
	// Line 3697, Address: 0x34d880, Func Offset: 0
	// Func End, Address: 0x34d888, Func Offset: 0x8
}

// BubbleBashCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34d890
uint32 BubbleBashCB()
{
	// Line 3668, Address: 0x34d890, Func Offset: 0
	// Line 3670, Address: 0x34d894, Func Offset: 0x4
	// Line 3668, Address: 0x34d898, Func Offset: 0x8
	// Line 3670, Address: 0x34d89c, Func Offset: 0xc
	// Line 3671, Address: 0x34d9b8, Func Offset: 0x128
	// Line 3672, Address: 0x34da00, Func Offset: 0x170
	// Line 3674, Address: 0x34dab4, Func Offset: 0x224
	// Line 3676, Address: 0x34dab8, Func Offset: 0x228
	// Line 3677, Address: 0x34dabc, Func Offset: 0x22c
	// Line 3681, Address: 0x34dac0, Func Offset: 0x230
	// Line 3674, Address: 0x34dac8, Func Offset: 0x238
	// Line 3676, Address: 0x34dad4, Func Offset: 0x244
	// Line 3675, Address: 0x34dad8, Func Offset: 0x248
	// Line 3676, Address: 0x34dae0, Func Offset: 0x250
	// Line 3675, Address: 0x34dae4, Func Offset: 0x254
	// Line 3681, Address: 0x34daf4, Func Offset: 0x264
	// Line 3677, Address: 0x34daf8, Func Offset: 0x268
	// Line 3682, Address: 0x34dafc, Func Offset: 0x26c
	// Line 3676, Address: 0x34db00, Func Offset: 0x270
	// Line 3688, Address: 0x34db04, Func Offset: 0x274
	// Line 3690, Address: 0x34db0c, Func Offset: 0x27c
	// Line 3692, Address: 0x34db10, Func Offset: 0x280
	// Line 3690, Address: 0x34db14, Func Offset: 0x284
	// Line 3693, Address: 0x34db18, Func Offset: 0x288
	// Func End, Address: 0x34db24, Func Offset: 0x294
}

// BubbleBashCheckGauntlet__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34db30
uint32 BubbleBashCheckGauntlet()
{
	// Line 3658, Address: 0x34db30, Func Offset: 0
	// Line 3662, Address: 0x34db44, Func Offset: 0x14
	// Line 3663, Address: 0x34db50, Func Offset: 0x20
	// Line 3659, Address: 0x34db58, Func Offset: 0x28
	// Line 3665, Address: 0x34db60, Func Offset: 0x30
	// Line 3666, Address: 0x34dc10, Func Offset: 0xe0
	// Func End, Address: 0x34dc18, Func Offset: 0xe8
}

// BubbleBashCheckPunch__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34dc20
uint32 BubbleBashCheckPunch()
{
	// Line 3650, Address: 0x34dc20, Func Offset: 0
	// Line 3653, Address: 0x34dc34, Func Offset: 0x14
	// Line 3651, Address: 0x34dcc0, Func Offset: 0xa0
	// Line 3653, Address: 0x34dcc8, Func Offset: 0xa8
	// Line 3654, Address: 0x34dcf0, Func Offset: 0xd0
	// Func End, Address: 0x34dcf8, Func Offset: 0xd8
}

// BubbleSpinCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34dd00
uint32 BubbleSpinCB(xAnimSingle* anim)
{
	// Line 3611, Address: 0x34dd00, Func Offset: 0
	// Line 3619, Address: 0x34dd04, Func Offset: 0x4
	// Line 3611, Address: 0x34dd08, Func Offset: 0x8
	// Line 3616, Address: 0x34dd0c, Func Offset: 0xc
	// Line 3619, Address: 0x34dd10, Func Offset: 0x10
	// Line 3620, Address: 0x34de2c, Func Offset: 0x12c
	// Line 3621, Address: 0x34de70, Func Offset: 0x170
	// Line 3623, Address: 0x34de7c, Func Offset: 0x17c
	// Line 3626, Address: 0x34df34, Func Offset: 0x234
	// Line 3625, Address: 0x34df38, Func Offset: 0x238
	// Line 3626, Address: 0x34df3c, Func Offset: 0x23c
	// Func End, Address: 0x34df44, Func Offset: 0x244
}

// BubbleSpinCheck2__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34df50
uint32 BubbleSpinCheck2()
{
	// Line 3604, Address: 0x34df50, Func Offset: 0
	// Line 3607, Address: 0x34df64, Func Offset: 0x14
	// Line 3605, Address: 0x34dfbc, Func Offset: 0x6c
	// Line 3607, Address: 0x34dfc4, Func Offset: 0x74
	// Line 3608, Address: 0x34dfd4, Func Offset: 0x84
	// Func End, Address: 0x34dfdc, Func Offset: 0x8c
}

// BubbleSpinCheck1__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34dfe0
uint32 BubbleSpinCheck1()
{
	// Line 3596, Address: 0x34dfe0, Func Offset: 0
	// Line 3599, Address: 0x34dff4, Func Offset: 0x14
	// Line 3597, Address: 0x34e04c, Func Offset: 0x6c
	// Line 3599, Address: 0x34e054, Func Offset: 0x74
	// Line 3600, Address: 0x34e064, Func Offset: 0x84
	// Func End, Address: 0x34e06c, Func Offset: 0x8c
}

// LandSlipRunCallback__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34e070
uint32 LandSlipRunCallback()
{
	// Line 3494, Address: 0x34e070, Func Offset: 0
	// Line 3495, Address: 0x34e074, Func Offset: 0x4
	// Line 3494, Address: 0x34e078, Func Offset: 0x8
	// Line 3495, Address: 0x34e07c, Func Offset: 0xc
	// Line 3496, Address: 0x34e19c, Func Offset: 0x12c
	// Line 3498, Address: 0x34e1a0, Func Offset: 0x130
	// Line 3499, Address: 0x34e1ac, Func Offset: 0x13c
	// Line 3502, Address: 0x34e1b8, Func Offset: 0x148
	// Line 3501, Address: 0x34e1bc, Func Offset: 0x14c
	// Line 3502, Address: 0x34e1c0, Func Offset: 0x150
	// Func End, Address: 0x34e1c8, Func Offset: 0x158
}

// LandCallback__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34e1d0
uint32 LandCallback()
{
	// Line 3484, Address: 0x34e1d0, Func Offset: 0
	// Line 3485, Address: 0x34e1d4, Func Offset: 0x4
	// Line 3484, Address: 0x34e1d8, Func Offset: 0x8
	// Line 3487, Address: 0x34e1dc, Func Offset: 0xc
	// Line 3488, Address: 0x34e1e8, Func Offset: 0x18
	// Line 3489, Address: 0x34e1f4, Func Offset: 0x24
	// Line 3491, Address: 0x34e1f8, Func Offset: 0x28
	// Line 3489, Address: 0x34e1fc, Func Offset: 0x2c
	// Line 3492, Address: 0x34e200, Func Offset: 0x30
	// Func End, Address: 0x34e20c, Func Offset: 0x3c
}

// LandNoTrackSlipIdleCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34e210
uint32 LandNoTrackSlipIdleCheck()
{
	// Line 3475, Address: 0x34e210, Func Offset: 0
	// Line 3477, Address: 0x34e288, Func Offset: 0x78
	// Func End, Address: 0x34e290, Func Offset: 0x80
}

// LandNoTrackSlipRunCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34e290
uint32 LandNoTrackSlipRunCheck()
{
	// Line 3470, Address: 0x34e290, Func Offset: 0
	// Line 3472, Address: 0x34e308, Func Offset: 0x78
	// Func End, Address: 0x34e310, Func Offset: 0x80
}

// LandNoTrackFastCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34e310
uint32 LandNoTrackFastCheck()
{
	// Line 3466, Address: 0x34e310, Func Offset: 0
	// Line 3467, Address: 0x34e364, Func Offset: 0x54
	// Func End, Address: 0x34e36c, Func Offset: 0x5c
}

// LandSlipRunCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34e370
uint32 LandSlipRunCheck()
{
	// Line 3460, Address: 0x34e370, Func Offset: 0
	// Line 3463, Address: 0x34e3bc, Func Offset: 0x4c
	// Func End, Address: 0x34e3c4, Func Offset: 0x54
}

// LandSlipIdleCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34e3d0
uint32 LandSlipIdleCheck()
{
	// Line 3454, Address: 0x34e3d0, Func Offset: 0
	// Line 3457, Address: 0x34e41c, Func Offset: 0x4c
	// Func End, Address: 0x34e424, Func Offset: 0x54
}

// LandNoTrackWalkCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34e430
uint32 LandNoTrackWalkCheck()
{
	// Line 3450, Address: 0x34e430, Func Offset: 0
	// Line 3451, Address: 0x34e484, Func Offset: 0x54
	// Func End, Address: 0x34e48c, Func Offset: 0x5c
}

// LandRunCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34e490
uint32 LandRunCheck()
{
	// Line 3430, Address: 0x34e490, Func Offset: 0
	// Line 3431, Address: 0x34e4b8, Func Offset: 0x28
	// Func End, Address: 0x34e4c0, Func Offset: 0x30
}

// LandHighCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34e4c0
uint32 LandHighCheck()
{
	// Line 3425, Address: 0x34e4c0, Func Offset: 0
	// Line 3427, Address: 0x34e4e4, Func Offset: 0x24
	// Func End, Address: 0x34e4ec, Func Offset: 0x2c
}

// LandNoTrackCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34e4f0
uint32 LandNoTrackCheck()
{
	// Line 3421, Address: 0x34e4f0, Func Offset: 0
	// Line 3422, Address: 0x34e52c, Func Offset: 0x3c
	// Func End, Address: 0x34e534, Func Offset: 0x44
}

// LandTrackCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34e540
uint32 LandTrackCheck()
{
	// Line 3417, Address: 0x34e540, Func Offset: 0
	// Line 3418, Address: 0x34e57c, Func Offset: 0x3c
	// Func End, Address: 0x34e584, Func Offset: 0x44
}

// LandCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34e590
uint32 LandCheck()
{
	// Line 3413, Address: 0x34e590, Func Offset: 0
	// Line 3414, Address: 0x34e59c, Func Offset: 0xc
	// Func End, Address: 0x34e5a4, Func Offset: 0x14
}

// SlideDecelerateCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34e5b0
uint32 SlideDecelerateCB()
{
	// Line 3410, Address: 0x34e5b0, Func Offset: 0
	// Func End, Address: 0x34e5b8, Func Offset: 0x8
}

// SlideDecelerateCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34e5c0
uint32 SlideDecelerateCheck(xAnimSingle* anim)
{
	// Line 3393, Address: 0x34e5c0, Func Offset: 0
	// Line 3396, Address: 0x34e5d0, Func Offset: 0x10
	// Line 3399, Address: 0x34e608, Func Offset: 0x48
	// Line 3394, Address: 0x34e610, Func Offset: 0x50
	// Line 3403, Address: 0x34e618, Func Offset: 0x58
	// Line 3406, Address: 0x34e61c, Func Offset: 0x5c
	// Func End, Address: 0x34e624, Func Offset: 0x64
}

// SlideAccelerateCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34e630
uint32 SlideAccelerateCB()
{
	// Line 3389, Address: 0x34e630, Func Offset: 0
	// Func End, Address: 0x34e638, Func Offset: 0x8
}

// SlideAccelerateCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34e640
uint32 SlideAccelerateCheck(xAnimSingle* anim)
{
	// Line 3373, Address: 0x34e640, Func Offset: 0
	// Line 3376, Address: 0x34e650, Func Offset: 0x10
	// Line 3379, Address: 0x34e68c, Func Offset: 0x4c
	// Line 3374, Address: 0x34e694, Func Offset: 0x54
	// Line 3383, Address: 0x34e69c, Func Offset: 0x5c
	// Line 3385, Address: 0x34e6a0, Func Offset: 0x60
	// Func End, Address: 0x34e6a8, Func Offset: 0x68
}

// SlideCruisingCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34e6b0
uint32 SlideCruisingCB()
{
	// Line 3369, Address: 0x34e6b0, Func Offset: 0
	// Func End, Address: 0x34e6b8, Func Offset: 0x8
}

// SlideCruisingCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34e6c0
uint32 SlideCruisingCheck(xAnimSingle* anim)
{
	// Line 3353, Address: 0x34e6c0, Func Offset: 0
	// Line 3356, Address: 0x34e6d0, Func Offset: 0x10
	// Line 3359, Address: 0x34e718, Func Offset: 0x58
	// Line 3354, Address: 0x34e720, Func Offset: 0x60
	// Line 3363, Address: 0x34e728, Func Offset: 0x68
	// Line 3365, Address: 0x34e72c, Func Offset: 0x6c
	// Func End, Address: 0x34e734, Func Offset: 0x74
}

// InactiveCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34e740
uint32 InactiveCB()
{
	// Line 3234, Address: 0x34e740, Func Offset: 0
	// Line 3236, Address: 0x34e744, Func Offset: 0x4
	// Line 3233, Address: 0x34e748, Func Offset: 0x8
	// Line 3234, Address: 0x34e74c, Func Offset: 0xc
	// Line 3235, Address: 0x34e750, Func Offset: 0x10
	// Line 3238, Address: 0x34e754, Func Offset: 0x14
	// Func End, Address: 0x34e75c, Func Offset: 0x1c
}

// InactiveCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34e760
uint32 InactiveCheck(xAnimTransition* tran)
{
	// Line 3227, Address: 0x34e760, Func Offset: 0
	// Line 3230, Address: 0x34e7a4, Func Offset: 0x44
	// Func End, Address: 0x34e7ac, Func Offset: 0x4c
}

// IdleCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34e7b0
uint32 IdleCB()
{
	// Line 3205, Address: 0x34e7b0, Func Offset: 0
	// Line 3206, Address: 0x34e7bc, Func Offset: 0xc
	// Line 3208, Address: 0x34e870, Func Offset: 0xc0
	// Line 3209, Address: 0x34e874, Func Offset: 0xc4
	// Line 3210, Address: 0x34e878, Func Offset: 0xc8
	// Func End, Address: 0x34e884, Func Offset: 0xd4
}

// NoSlipCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34e890
uint32 NoSlipCB()
{
	// Line 3198, Address: 0x34e890, Func Offset: 0
	// Line 3199, Address: 0x34e89c, Func Offset: 0xc
	// Line 3202, Address: 0x34e950, Func Offset: 0xc0
	// Line 3201, Address: 0x34e954, Func Offset: 0xc4
	// Line 3202, Address: 0x34e958, Func Offset: 0xc8
	// Func End, Address: 0x34e960, Func Offset: 0xd0
}

// SlipRunCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34e960
uint32 SlipRunCB()
{
	// Line 3192, Address: 0x34e960, Func Offset: 0
	// Line 3193, Address: 0x34e964, Func Offset: 0x4
	// Line 3192, Address: 0x34e968, Func Offset: 0x8
	// Line 3193, Address: 0x34e96c, Func Offset: 0xc
	// Line 3196, Address: 0x34ea84, Func Offset: 0x124
	// Line 3195, Address: 0x34ea88, Func Offset: 0x128
	// Line 3196, Address: 0x34ea8c, Func Offset: 0x12c
	// Func End, Address: 0x34ea94, Func Offset: 0x134
}

// AnyStopCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34eaa0
uint32 AnyStopCheck()
{
	// Line 3188, Address: 0x34eaa0, Func Offset: 0
	// Line 3189, Address: 0x34eaac, Func Offset: 0xc
	// Func End, Address: 0x34eab4, Func Offset: 0x14
}

// AnyMoveCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34eac0
uint32 AnyMoveCheck()
{
	// Line 3184, Address: 0x34eac0, Func Offset: 0
	// Line 3185, Address: 0x34eac8, Func Offset: 0x8
	// Func End, Address: 0x34ead0, Func Offset: 0x10
}

// IdleSlipCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34ead0
uint32 IdleSlipCheck()
{
	// Line 3176, Address: 0x34ead0, Func Offset: 0
	// Line 3181, Address: 0x34eb4c, Func Offset: 0x7c
	// Func End, Address: 0x34eb54, Func Offset: 0x84
}

// IdleStoicCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34eb60
uint32 IdleStoicCheck()
{
	// Line 3145, Address: 0x34eb60, Func Offset: 0
	// Line 3152, Address: 0x34ebec, Func Offset: 0x8c
	// Func End, Address: 0x34ebf4, Func Offset: 0x94
}

// IdleCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34ec00
uint32 IdleCheck()
{
	// Line 3137, Address: 0x34ec00, Func Offset: 0
	// Line 3142, Address: 0x34ec8c, Func Offset: 0x8c
	// Func End, Address: 0x34ec94, Func Offset: 0x94
}

// WalkStoicCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34eca0
uint32 WalkStoicCheck()
{
	// Line 3102, Address: 0x34eca0, Func Offset: 0
	// Line 3103, Address: 0x34eca8, Func Offset: 0x8
	// Line 3111, Address: 0x34ed64, Func Offset: 0xc4
	// Func End, Address: 0x34ed6c, Func Offset: 0xcc
}

// WalkCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34ed70
uint32 WalkCheck()
{
	// Line 3093, Address: 0x34ed70, Func Offset: 0
	// Line 3094, Address: 0x34ed78, Func Offset: 0x8
	// Line 3100, Address: 0x34ee34, Func Offset: 0xc4
	// Func End, Address: 0x34ee3c, Func Offset: 0xcc
}

// RunOutOfWorldCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34ee40
uint32 RunOutOfWorldCheck()
{
	// Line 3084, Address: 0x34ee40, Func Offset: 0
	// Line 3085, Address: 0x34ee48, Func Offset: 0x8
	// Line 3091, Address: 0x34ef08, Func Offset: 0xc8
	// Func End, Address: 0x34ef10, Func Offset: 0xd0
}

// RunSlipCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34ef10
uint32 RunSlipCheck()
{
	// Line 3077, Address: 0x34ef10, Func Offset: 0
	// Line 3082, Address: 0x34ef8c, Func Offset: 0x7c
	// Func End, Address: 0x34ef94, Func Offset: 0x84
}

// RunStoicCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34efa0
uint32 RunStoicCheck()
{
	// Line 3042, Address: 0x34efa0, Func Offset: 0
	// Line 3043, Address: 0x34efa8, Func Offset: 0x8
	// Line 3051, Address: 0x34f064, Func Offset: 0xc4
	// Func End, Address: 0x34f06c, Func Offset: 0xcc
}

// RunAnyCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x34f070
uint32 RunAnyCheck()
{
	// Line 3022, Address: 0x34f070, Func Offset: 0
	// Line 3023, Address: 0x34f078, Func Offset: 0x8
	// Line 3029, Address: 0x34f134, Func Offset: 0xc4
	// Func End, Address: 0x34f13c, Func Offset: 0xcc
}

// zEntPlayerHealthResetAll__Fv
// Start address: 0x34f140
void zEntPlayerHealthResetAll()
{
	// Line 3002, Address: 0x34f140, Func Offset: 0
	// Line 3003, Address: 0x34f14c, Func Offset: 0xc
	// Line 3004, Address: 0x34f150, Func Offset: 0x10
	// Line 3003, Address: 0x34f154, Func Offset: 0x14
	// Line 3002, Address: 0x34f158, Func Offset: 0x18
	// Line 3003, Address: 0x34f15c, Func Offset: 0x1c
	// Line 3004, Address: 0x34f160, Func Offset: 0x20
	// Line 3003, Address: 0x34f164, Func Offset: 0x24
	// Line 3005, Address: 0x34f168, Func Offset: 0x28
	// Func End, Address: 0x34f170, Func Offset: 0x30
}

// InvReset__Fv
// Start address: 0x34f170
void InvReset()
{
	uint32 i;
	int32 j;
	int32 world;
	int32 task;
	// Line 2955, Address: 0x34f170, Func Offset: 0
	// Line 2956, Address: 0x34f174, Func Offset: 0x4
	// Line 2955, Address: 0x34f178, Func Offset: 0x8
	// Line 2956, Address: 0x34f17c, Func Offset: 0xc
	// Line 2955, Address: 0x34f180, Func Offset: 0x10
	// Line 2957, Address: 0x34f184, Func Offset: 0x14
	// Line 2955, Address: 0x34f188, Func Offset: 0x18
	// Line 2964, Address: 0x34f18c, Func Offset: 0x1c
	// Line 2956, Address: 0x34f190, Func Offset: 0x20
	// Line 2958, Address: 0x34f194, Func Offset: 0x24
	// Line 2957, Address: 0x34f198, Func Offset: 0x28
	// Line 2958, Address: 0x34f19c, Func Offset: 0x2c
	// Line 2960, Address: 0x34f1a0, Func Offset: 0x30
	// Line 2963, Address: 0x34f1b4, Func Offset: 0x44
	// Line 2960, Address: 0x34f1b8, Func Offset: 0x48
	// Line 2963, Address: 0x34f1bc, Func Offset: 0x4c
	// Line 2964, Address: 0x34f1c4, Func Offset: 0x54
	// Line 2963, Address: 0x34f1d4, Func Offset: 0x64
	// Line 2964, Address: 0x34f1d8, Func Offset: 0x68
	// Line 2965, Address: 0x34f1e0, Func Offset: 0x70
	// Line 2968, Address: 0x34f1e4, Func Offset: 0x74
	// Line 2965, Address: 0x34f1e8, Func Offset: 0x78
	// Line 2968, Address: 0x34f1f0, Func Offset: 0x80
	// Line 2966, Address: 0x34f1f4, Func Offset: 0x84
	// Line 2967, Address: 0x34f1fc, Func Offset: 0x8c
	// Line 2968, Address: 0x34f204, Func Offset: 0x94
	// Line 2971, Address: 0x34f218, Func Offset: 0xa8
	// Line 2973, Address: 0x34f224, Func Offset: 0xb4
	// Line 2975, Address: 0x34f228, Func Offset: 0xb8
	// Line 2974, Address: 0x34f22c, Func Offset: 0xbc
	// Line 2975, Address: 0x34f230, Func Offset: 0xc0
	// Line 2979, Address: 0x34f270, Func Offset: 0x100
	// Line 2982, Address: 0x34f288, Func Offset: 0x118
	// Line 2983, Address: 0x34f29c, Func Offset: 0x12c
	// Line 2985, Address: 0x34f2a4, Func Offset: 0x134
	// Line 2987, Address: 0x34f2bc, Func Offset: 0x14c
	// Line 2985, Address: 0x34f2c0, Func Offset: 0x150
	// Line 2987, Address: 0x34f2c4, Func Offset: 0x154
	// Line 2990, Address: 0x34f2d0, Func Offset: 0x160
	// Line 2991, Address: 0x34f2e8, Func Offset: 0x178
	// Line 2992, Address: 0x34f2f8, Func Offset: 0x188
	// Line 2991, Address: 0x34f300, Func Offset: 0x190
	// Line 2992, Address: 0x34f30c, Func Offset: 0x19c
	// Line 2993, Address: 0x34f31c, Func Offset: 0x1ac
	// Line 2969, Address: 0x34f324, Func Offset: 0x1b4
	// Line 2993, Address: 0x34f328, Func Offset: 0x1b8
	// Line 2969, Address: 0x34f32c, Func Offset: 0x1bc
	// Line 2993, Address: 0x34f338, Func Offset: 0x1c8
	// Func End, Address: 0x34f34c, Func Offset: 0x1dc
}

// PlayerAbsControl__FP4xEntfff
// Start address: 0x34f350
void PlayerAbsControl(xEnt* ent, float32 x, float32 z, float32 dt)
{
	uint32 animUserFlag;
	uint32 blendUserFlag;
	float32 angle;
	float32 mag;
	float32 scalemag;
	float32 dir_dp;
	float32 turnfactor;
	float32 diffAngle;
	float32 autodist2d;
	float32 camAngle;
	xMat4x3* m;
	xVec3 euler;
	float32 dx;
	float32 dz;
	float32 atime;
	float32 drot;
	xMat3x3 rotY;
	float32 m;
	xVec3 belly;
	float32 curFactor;
	zPlayerGlobals* pg;
	float32 slideAccel;
	float32 accelX;
	float32 accelZ;
	float32 fwdComponent;
	float32 sideComponent;
	float32 veldown;
	float32 targetLean;
	uint32 moveFlag;
	xMat3x3 rotY;
	float32 dampen;
	float32 accelMag;
	float32 peakLerp;
	float32 slickLerp;
	float32 s;
	float32 s;
	xVec3 dposBeforeAnim;
	float32 invUpdateCount;
	// Line 2079, Address: 0x34f350, Func Offset: 0
	// Line 2089, Address: 0x34f398, Func Offset: 0x48
	// Line 2082, Address: 0x34f39c, Func Offset: 0x4c
	// Line 2092, Address: 0x34f3a0, Func Offset: 0x50
	// Line 2082, Address: 0x34f3b0, Func Offset: 0x60
	// Line 2086, Address: 0x34f3b4, Func Offset: 0x64
	// Line 2092, Address: 0x34f3b8, Func Offset: 0x68
	// Line 2093, Address: 0x34f3c0, Func Offset: 0x70
	// Line 2097, Address: 0x34f3d8, Func Offset: 0x88
	// Line 2099, Address: 0x34f3ec, Func Offset: 0x9c
	// Line 2100, Address: 0x34f3f4, Func Offset: 0xa4
	// Line 2104, Address: 0x34f3f8, Func Offset: 0xa8
	// Line 2105, Address: 0x34f440, Func Offset: 0xf0
	// Line 2106, Address: 0x34f448, Func Offset: 0xf8
	// Line 2114, Address: 0x34f44c, Func Offset: 0xfc
	// Line 2115, Address: 0x34f45c, Func Offset: 0x10c
	// Line 2117, Address: 0x34f494, Func Offset: 0x144
	// Line 2120, Address: 0x34f4a8, Func Offset: 0x158
	// Line 2123, Address: 0x34f4bc, Func Offset: 0x16c
	// Line 2129, Address: 0x34f4f8, Func Offset: 0x1a8
	// Line 2126, Address: 0x34f4fc, Func Offset: 0x1ac
	// Line 2129, Address: 0x34f500, Func Offset: 0x1b0
	// Line 2126, Address: 0x34f508, Func Offset: 0x1b8
	// Line 2129, Address: 0x34f50c, Func Offset: 0x1bc
	// Line 2133, Address: 0x34f530, Func Offset: 0x1e0
	// Line 2134, Address: 0x34f534, Func Offset: 0x1e4
	// Line 2138, Address: 0x34f53c, Func Offset: 0x1ec
	// Line 2141, Address: 0x34f550, Func Offset: 0x200
	// Line 2146, Address: 0x34f56c, Func Offset: 0x21c
	// Line 2155, Address: 0x34f57c, Func Offset: 0x22c
	// Line 2146, Address: 0x34f580, Func Offset: 0x230
	// Line 2155, Address: 0x34f584, Func Offset: 0x234
	// Line 2157, Address: 0x34f58c, Func Offset: 0x23c
	// Line 2158, Address: 0x34f598, Func Offset: 0x248
	// Line 2161, Address: 0x34f5ac, Func Offset: 0x25c
	// Line 2162, Address: 0x34f5c4, Func Offset: 0x274
	// Line 2161, Address: 0x34f5d0, Func Offset: 0x280
	// Line 2162, Address: 0x34f5d8, Func Offset: 0x288
	// Line 2163, Address: 0x34f5ec, Func Offset: 0x29c
	// Line 2164, Address: 0x34f600, Func Offset: 0x2b0
	// Line 2166, Address: 0x34f618, Func Offset: 0x2c8
	// Line 2165, Address: 0x34f624, Func Offset: 0x2d4
	// Line 2166, Address: 0x34f62c, Func Offset: 0x2dc
	// Line 2167, Address: 0x34f638, Func Offset: 0x2e8
	// Line 2168, Address: 0x34f64c, Func Offset: 0x2fc
	// Line 2169, Address: 0x34f668, Func Offset: 0x318
	// Line 2172, Address: 0x34f67c, Func Offset: 0x32c
	// Line 2174, Address: 0x34f680, Func Offset: 0x330
	// Line 2172, Address: 0x34f684, Func Offset: 0x334
	// Line 2174, Address: 0x34f688, Func Offset: 0x338
	// Line 2172, Address: 0x34f694, Func Offset: 0x344
	// Line 2173, Address: 0x34f6a0, Func Offset: 0x350
	// Line 2174, Address: 0x34f6b4, Func Offset: 0x364
	// Line 2175, Address: 0x34f6c8, Func Offset: 0x378
	// Line 2176, Address: 0x34f6d8, Func Offset: 0x388
	// Line 2177, Address: 0x34f6f4, Func Offset: 0x3a4
	// Line 2182, Address: 0x34f700, Func Offset: 0x3b0
	// Line 2186, Address: 0x34f708, Func Offset: 0x3b8
	// Line 2191, Address: 0x34f720, Func Offset: 0x3d0
	// Line 2186, Address: 0x34f728, Func Offset: 0x3d8
	// Line 2191, Address: 0x34f72c, Func Offset: 0x3dc
	// Line 2195, Address: 0x34f74c, Func Offset: 0x3fc
	// Line 2198, Address: 0x34f794, Func Offset: 0x444
	// Line 2202, Address: 0x34f7e4, Func Offset: 0x494
	// Line 2205, Address: 0x34f7e8, Func Offset: 0x498
	// Line 2202, Address: 0x34f7ec, Func Offset: 0x49c
	// Line 2205, Address: 0x34f7f0, Func Offset: 0x4a0
	// Line 2206, Address: 0x34f814, Func Offset: 0x4c4
	// Line 2208, Address: 0x34f818, Func Offset: 0x4c8
	// Line 2210, Address: 0x34f820, Func Offset: 0x4d0
	// Line 2212, Address: 0x34f824, Func Offset: 0x4d4
	// Line 2210, Address: 0x34f82c, Func Offset: 0x4dc
	// Line 2212, Address: 0x34f830, Func Offset: 0x4e0
	// Line 2211, Address: 0x34f834, Func Offset: 0x4e4
	// Line 2210, Address: 0x34f838, Func Offset: 0x4e8
	// Line 2211, Address: 0x34f848, Func Offset: 0x4f8
	// Line 2212, Address: 0x34f854, Func Offset: 0x504
	// Line 2213, Address: 0x34f860, Func Offset: 0x510
	// Line 2214, Address: 0x34f874, Func Offset: 0x524
	// Line 2215, Address: 0x34f890, Func Offset: 0x540
	// Line 2217, Address: 0x34f8a4, Func Offset: 0x554
	// Line 2221, Address: 0x34f8b4, Func Offset: 0x564
	// Line 2218, Address: 0x34f8b8, Func Offset: 0x568
	// Line 2221, Address: 0x34f8bc, Func Offset: 0x56c
	// Line 2222, Address: 0x34f8e0, Func Offset: 0x590
	// Line 2223, Address: 0x34f8fc, Func Offset: 0x5ac
	// Line 2224, Address: 0x34f910, Func Offset: 0x5c0
	// Line 2231, Address: 0x34f914, Func Offset: 0x5c4
	// Line 2233, Address: 0x34f91c, Func Offset: 0x5cc
	// Line 2235, Address: 0x34f934, Func Offset: 0x5e4
	// Line 2239, Address: 0x34f938, Func Offset: 0x5e8
	// Line 2235, Address: 0x34f944, Func Offset: 0x5f4
	// Line 2239, Address: 0x34f954, Func Offset: 0x604
	// Line 2240, Address: 0x34f968, Func Offset: 0x618
	// Line 2241, Address: 0x34f978, Func Offset: 0x628
	// Line 2242, Address: 0x34f994, Func Offset: 0x644
	// Line 2244, Address: 0x34f9a0, Func Offset: 0x650
	// Line 2248, Address: 0x34f9a4, Func Offset: 0x654
	// Line 2249, Address: 0x34f9bc, Func Offset: 0x66c
	// Line 2248, Address: 0x34f9c0, Func Offset: 0x670
	// Line 2249, Address: 0x34f9c4, Func Offset: 0x674
	// Line 2253, Address: 0x34f9ec, Func Offset: 0x69c
	// Line 2257, Address: 0x34fa18, Func Offset: 0x6c8
	// Line 2258, Address: 0x34fa20, Func Offset: 0x6d0
	// Line 2260, Address: 0x34fa24, Func Offset: 0x6d4
	// Line 2257, Address: 0x34fa34, Func Offset: 0x6e4
	// Line 2258, Address: 0x34fa40, Func Offset: 0x6f0
	// Line 2259, Address: 0x34fa50, Func Offset: 0x700
	// Line 2260, Address: 0x34fa60, Func Offset: 0x710
	// Line 2264, Address: 0x34fa64, Func Offset: 0x714
	// Line 2266, Address: 0x34fa74, Func Offset: 0x724
	// Line 2271, Address: 0x34fa7c, Func Offset: 0x72c
	// Line 2272, Address: 0x34faa4, Func Offset: 0x754
	// Line 2273, Address: 0x34fac8, Func Offset: 0x778
	// Line 2276, Address: 0x34faf0, Func Offset: 0x7a0
	// Line 2275, Address: 0x34fafc, Func Offset: 0x7ac
	// Line 2276, Address: 0x34fb04, Func Offset: 0x7b4
	// Line 2277, Address: 0x34fb10, Func Offset: 0x7c0
	// Line 2278, Address: 0x34fb24, Func Offset: 0x7d4
	// Line 2279, Address: 0x34fb40, Func Offset: 0x7f0
	// Line 2281, Address: 0x34fb54, Func Offset: 0x804
	// Line 2283, Address: 0x34fb58, Func Offset: 0x808
	// Line 2281, Address: 0x34fb5c, Func Offset: 0x80c
	// Line 2283, Address: 0x34fb60, Func Offset: 0x810
	// Line 2281, Address: 0x34fb6c, Func Offset: 0x81c
	// Line 2282, Address: 0x34fb78, Func Offset: 0x828
	// Line 2283, Address: 0x34fb8c, Func Offset: 0x83c
	// Line 2284, Address: 0x34fba0, Func Offset: 0x850
	// Line 2285, Address: 0x34fbb0, Func Offset: 0x860
	// Line 2286, Address: 0x34fbcc, Func Offset: 0x87c
	// Line 2291, Address: 0x34fbd8, Func Offset: 0x888
	// Line 2296, Address: 0x34fbe0, Func Offset: 0x890
	// Line 2298, Address: 0x34fbf8, Func Offset: 0x8a8
	// Line 2299, Address: 0x34fbfc, Func Offset: 0x8ac
	// Line 2302, Address: 0x34fc14, Func Offset: 0x8c4
	// Line 2303, Address: 0x34fc2c, Func Offset: 0x8dc
	// Line 2304, Address: 0x34fc38, Func Offset: 0x8e8
	// Line 2305, Address: 0x34fc48, Func Offset: 0x8f8
	// Line 2306, Address: 0x34fc5c, Func Offset: 0x90c
	// Line 2309, Address: 0x34fc64, Func Offset: 0x914
	// Line 2313, Address: 0x34fcb4, Func Offset: 0x964
	// Line 2314, Address: 0x34fcd0, Func Offset: 0x980
	// Line 2315, Address: 0x34fcdc, Func Offset: 0x98c
	// Line 2316, Address: 0x34fcf0, Func Offset: 0x9a0
	// Line 2317, Address: 0x34fd0c, Func Offset: 0x9bc
	// Line 2321, Address: 0x34fd24, Func Offset: 0x9d4
	// Line 2320, Address: 0x34fd30, Func Offset: 0x9e0
	// Line 2321, Address: 0x34fd34, Func Offset: 0x9e4
	// Line 2320, Address: 0x34fd3c, Func Offset: 0x9ec
	// Line 2321, Address: 0x34fd40, Func Offset: 0x9f0
	// Line 2322, Address: 0x34fd4c, Func Offset: 0x9fc
	// Line 2323, Address: 0x34fd6c, Func Offset: 0xa1c
	// Line 2324, Address: 0x34fd88, Func Offset: 0xa38
	// Line 2326, Address: 0x34fd9c, Func Offset: 0xa4c
	// Line 2331, Address: 0x34fda4, Func Offset: 0xa54
	// Line 2334, Address: 0x34fda8, Func Offset: 0xa58
	// Line 2331, Address: 0x34fdac, Func Offset: 0xa5c
	// Line 2334, Address: 0x34fdb8, Func Offset: 0xa68
	// Line 2336, Address: 0x34fdc0, Func Offset: 0xa70
	// Line 2338, Address: 0x34fdc4, Func Offset: 0xa74
	// Line 2336, Address: 0x34fdcc, Func Offset: 0xa7c
	// Line 2338, Address: 0x34fdd0, Func Offset: 0xa80
	// Line 2336, Address: 0x34fdd4, Func Offset: 0xa84
	// Line 2338, Address: 0x34fddc, Func Offset: 0xa8c
	// Line 2339, Address: 0x34fde8, Func Offset: 0xa98
	// Line 2340, Address: 0x34fdfc, Func Offset: 0xaac
	// Line 2341, Address: 0x34fe18, Func Offset: 0xac8
	// Line 2344, Address: 0x34fe2c, Func Offset: 0xadc
	// Line 2347, Address: 0x34fe3c, Func Offset: 0xaec
	// Line 2349, Address: 0x34fe4c, Func Offset: 0xafc
	// Line 2365, Address: 0x34fe5c, Func Offset: 0xb0c
	// Line 2367, Address: 0x34fe6c, Func Offset: 0xb1c
	// Line 2369, Address: 0x34fe80, Func Offset: 0xb30
	// Line 2370, Address: 0x34fe8c, Func Offset: 0xb3c
	// Line 2373, Address: 0x34fe9c, Func Offset: 0xb4c
	// Line 2374, Address: 0x34feb0, Func Offset: 0xb60
	// Line 2378, Address: 0x34ff00, Func Offset: 0xbb0
	// Line 2379, Address: 0x34ff0c, Func Offset: 0xbbc
	// Line 2382, Address: 0x34ff1c, Func Offset: 0xbcc
	// Line 2384, Address: 0x34ff2c, Func Offset: 0xbdc
	// Line 2383, Address: 0x34ff30, Func Offset: 0xbe0
	// Line 2384, Address: 0x34ff34, Func Offset: 0xbe4
	// Line 2386, Address: 0x34ff40, Func Offset: 0xbf0
	// Line 2387, Address: 0x34ff4c, Func Offset: 0xbfc
	// Line 2388, Address: 0x34ff58, Func Offset: 0xc08
	// Line 2389, Address: 0x34ff74, Func Offset: 0xc24
	// Line 2391, Address: 0x34ff7c, Func Offset: 0xc2c
	// Line 2392, Address: 0x34ff88, Func Offset: 0xc38
	// Line 2393, Address: 0x34ff9c, Func Offset: 0xc4c
	// Line 2395, Address: 0x34ffb4, Func Offset: 0xc64
	// Line 2396, Address: 0x34ffc4, Func Offset: 0xc74
	// Line 2395, Address: 0x34ffcc, Func Offset: 0xc7c
	// Line 2396, Address: 0x34ffd4, Func Offset: 0xc84
	// Line 2395, Address: 0x34ffd8, Func Offset: 0xc88
	// Line 2396, Address: 0x34ffe0, Func Offset: 0xc90
	// Line 2400, Address: 0x34ffe8, Func Offset: 0xc98
	// Line 2402, Address: 0x34fff0, Func Offset: 0xca0
	// Line 2403, Address: 0x34fff4, Func Offset: 0xca4
	// Line 2402, Address: 0x34fff8, Func Offset: 0xca8
	// Line 2407, Address: 0x34fffc, Func Offset: 0xcac
	// Line 2410, Address: 0x350010, Func Offset: 0xcc0
	// Line 2411, Address: 0x350020, Func Offset: 0xcd0
	// Line 2414, Address: 0x35004c, Func Offset: 0xcfc
	// Line 2417, Address: 0x350074, Func Offset: 0xd24
	// Line 2418, Address: 0x35008c, Func Offset: 0xd3c
	// Line 2420, Address: 0x350098, Func Offset: 0xd48
	// Line 2421, Address: 0x3500a0, Func Offset: 0xd50
	// Line 2422, Address: 0x3500ac, Func Offset: 0xd5c
	// Line 2423, Address: 0x3500b4, Func Offset: 0xd64
	// Line 2424, Address: 0x3500b8, Func Offset: 0xd68
	// Line 2425, Address: 0x3500c4, Func Offset: 0xd74
	// Line 2427, Address: 0x3500cc, Func Offset: 0xd7c
	// Line 2428, Address: 0x3500d4, Func Offset: 0xd84
	// Line 2433, Address: 0x3500dc, Func Offset: 0xd8c
	// Line 2445, Address: 0x3500ec, Func Offset: 0xd9c
	// Line 2447, Address: 0x3500f4, Func Offset: 0xda4
	// Line 2458, Address: 0x35014c, Func Offset: 0xdfc
	// Line 2447, Address: 0x350154, Func Offset: 0xe04
	// Line 2458, Address: 0x350158, Func Offset: 0xe08
	// Line 2447, Address: 0x35015c, Func Offset: 0xe0c
	// Line 2458, Address: 0x350160, Func Offset: 0xe10
	// Line 2460, Address: 0x350188, Func Offset: 0xe38
	// Line 2462, Address: 0x350194, Func Offset: 0xe44
	// Line 2464, Address: 0x3501a8, Func Offset: 0xe58
	// Line 2465, Address: 0x3501b4, Func Offset: 0xe64
	// Line 2469, Address: 0x3501c4, Func Offset: 0xe74
	// Line 2470, Address: 0x3501d8, Func Offset: 0xe88
	// Line 2474, Address: 0x3501e0, Func Offset: 0xe90
	// Line 2469, Address: 0x3501e4, Func Offset: 0xe94
	// Line 2470, Address: 0x3501e8, Func Offset: 0xe98
	// Line 2474, Address: 0x3501f4, Func Offset: 0xea4
	// Line 2475, Address: 0x350200, Func Offset: 0xeb0
	// Line 2474, Address: 0x350204, Func Offset: 0xeb4
	// Line 2475, Address: 0x350208, Func Offset: 0xeb8
	// Line 2484, Address: 0x35021c, Func Offset: 0xecc
	// Line 2476, Address: 0x350224, Func Offset: 0xed4
	// Line 2475, Address: 0x350228, Func Offset: 0xed8
	// Line 2476, Address: 0x350230, Func Offset: 0xee0
	// Line 2477, Address: 0x350238, Func Offset: 0xee8
	// Line 2484, Address: 0x350240, Func Offset: 0xef0
	// Line 2485, Address: 0x350248, Func Offset: 0xef8
	// Line 2486, Address: 0x350254, Func Offset: 0xf04
	// Line 2490, Address: 0x350260, Func Offset: 0xf10
	// Line 2491, Address: 0x350268, Func Offset: 0xf18
	// Line 2492, Address: 0x350280, Func Offset: 0xf30
	// Line 2494, Address: 0x35028c, Func Offset: 0xf3c
	// Line 2499, Address: 0x3502a4, Func Offset: 0xf54
	// Line 2500, Address: 0x3502b8, Func Offset: 0xf68
	// Line 2501, Address: 0x3502c0, Func Offset: 0xf70
	// Line 2500, Address: 0x3502c8, Func Offset: 0xf78
	// Line 2501, Address: 0x3502d4, Func Offset: 0xf84
	// Line 2500, Address: 0x3502dc, Func Offset: 0xf8c
	// Line 2502, Address: 0x3502e0, Func Offset: 0xf90
	// Line 2503, Address: 0x3502e8, Func Offset: 0xf98
	// Line 2504, Address: 0x3502f0, Func Offset: 0xfa0
	// Line 2503, Address: 0x3502f8, Func Offset: 0xfa8
	// Line 2504, Address: 0x350304, Func Offset: 0xfb4
	// Line 2503, Address: 0x35030c, Func Offset: 0xfbc
	// Line 2504, Address: 0x350310, Func Offset: 0xfc0
	// Line 2506, Address: 0x350314, Func Offset: 0xfc4
	// Line 2507, Address: 0x350324, Func Offset: 0xfd4
	// Line 2506, Address: 0x35032c, Func Offset: 0xfdc
	// Line 2507, Address: 0x350338, Func Offset: 0xfe8
	// Line 2509, Address: 0x350344, Func Offset: 0xff4
	// Line 2512, Address: 0x350350, Func Offset: 0x1000
	// Line 2506, Address: 0x350354, Func Offset: 0x1004
	// Line 2509, Address: 0x350358, Func Offset: 0x1008
	// Line 2512, Address: 0x350360, Func Offset: 0x1010
	// Line 2513, Address: 0x35036c, Func Offset: 0x101c
	// Line 2515, Address: 0x350388, Func Offset: 0x1038
	// Line 2516, Address: 0x35038c, Func Offset: 0x103c
	// Line 2515, Address: 0x350390, Func Offset: 0x1040
	// Line 2516, Address: 0x350394, Func Offset: 0x1044
	// Line 2517, Address: 0x35039c, Func Offset: 0x104c
	// Line 2528, Address: 0x3503bc, Func Offset: 0x106c
	// Line 2529, Address: 0x3503c8, Func Offset: 0x1078
	// Line 2528, Address: 0x3503d4, Func Offset: 0x1084
	// Line 2529, Address: 0x3503d8, Func Offset: 0x1088
	// Line 2533, Address: 0x3503f0, Func Offset: 0x10a0
	// Line 2534, Address: 0x350408, Func Offset: 0x10b8
	// Line 2536, Address: 0x350420, Func Offset: 0x10d0
	// Line 2534, Address: 0x350424, Func Offset: 0x10d4
	// Line 2538, Address: 0x35042c, Func Offset: 0x10dc
	// Line 2539, Address: 0x350434, Func Offset: 0x10e4
	// Line 2540, Address: 0x350438, Func Offset: 0x10e8
	// Line 2543, Address: 0x350440, Func Offset: 0x10f0
	// Line 2544, Address: 0x35044c, Func Offset: 0x10fc
	// Line 2545, Address: 0x35045c, Func Offset: 0x110c
	// Line 2544, Address: 0x350460, Func Offset: 0x1110
	// Line 2545, Address: 0x350464, Func Offset: 0x1114
	// Line 2544, Address: 0x350468, Func Offset: 0x1118
	// Line 2545, Address: 0x35046c, Func Offset: 0x111c
	// Line 2549, Address: 0x350470, Func Offset: 0x1120
	// Line 2551, Address: 0x350488, Func Offset: 0x1138
	// Line 2550, Address: 0x350494, Func Offset: 0x1144
	// Line 2551, Address: 0x35049c, Func Offset: 0x114c
	// Line 2552, Address: 0x3504a8, Func Offset: 0x1158
	// Line 2553, Address: 0x3504bc, Func Offset: 0x116c
	// Line 2554, Address: 0x3504d8, Func Offset: 0x1188
	// Line 2556, Address: 0x3504ec, Func Offset: 0x119c
	// Line 2558, Address: 0x3504f0, Func Offset: 0x11a0
	// Line 2556, Address: 0x3504f4, Func Offset: 0x11a4
	// Line 2558, Address: 0x3504f8, Func Offset: 0x11a8
	// Line 2556, Address: 0x350504, Func Offset: 0x11b4
	// Line 2557, Address: 0x350510, Func Offset: 0x11c0
	// Line 2558, Address: 0x350524, Func Offset: 0x11d4
	// Line 2559, Address: 0x350538, Func Offset: 0x11e8
	// Line 2560, Address: 0x350548, Func Offset: 0x11f8
	// Line 2561, Address: 0x350564, Func Offset: 0x1214
	// Line 2563, Address: 0x350570, Func Offset: 0x1220
	// Line 2567, Address: 0x350574, Func Offset: 0x1224
	// Line 2569, Address: 0x350580, Func Offset: 0x1230
	// Line 2570, Address: 0x350598, Func Offset: 0x1248
	// Line 2571, Address: 0x35059c, Func Offset: 0x124c
	// Line 2570, Address: 0x3505a4, Func Offset: 0x1254
	// Line 2571, Address: 0x3505a8, Func Offset: 0x1258
	// Line 2570, Address: 0x3505ac, Func Offset: 0x125c
	// Line 2571, Address: 0x3505b4, Func Offset: 0x1264
	// Line 2572, Address: 0x3505c0, Func Offset: 0x1270
	// Line 2573, Address: 0x3505d4, Func Offset: 0x1284
	// Line 2574, Address: 0x3505f0, Func Offset: 0x12a0
	// Line 2578, Address: 0x350604, Func Offset: 0x12b4
	// Line 2579, Address: 0x350610, Func Offset: 0x12c0
	// Line 2578, Address: 0x350614, Func Offset: 0x12c4
	// Line 2579, Address: 0x350618, Func Offset: 0x12c8
	// Line 2578, Address: 0x350620, Func Offset: 0x12d0
	// Line 2579, Address: 0x35062c, Func Offset: 0x12dc
	// Line 2580, Address: 0x350640, Func Offset: 0x12f0
	// Line 2581, Address: 0x350650, Func Offset: 0x1300
	// Line 2584, Address: 0x350680, Func Offset: 0x1330
	// Line 2585, Address: 0x350690, Func Offset: 0x1340
	// Line 2586, Address: 0x350698, Func Offset: 0x1348
	// Line 2590, Address: 0x3506a0, Func Offset: 0x1350
	// Line 2591, Address: 0x3506ac, Func Offset: 0x135c
	// Line 2596, Address: 0x3506b0, Func Offset: 0x1360
	// Line 2590, Address: 0x3506b8, Func Offset: 0x1368
	// Line 2600, Address: 0x3506bc, Func Offset: 0x136c
	// Line 2590, Address: 0x3506c0, Func Offset: 0x1370
	// Line 2591, Address: 0x3506c4, Func Offset: 0x1374
	// Line 2592, Address: 0x3506d4, Func Offset: 0x1384
	// Line 2596, Address: 0x3506e4, Func Offset: 0x1394
	// Line 2597, Address: 0x3506ec, Func Offset: 0x139c
	// Line 2600, Address: 0x3506f4, Func Offset: 0x13a4
	// Line 2601, Address: 0x350704, Func Offset: 0x13b4
	// Line 2602, Address: 0x350714, Func Offset: 0x13c4
	// Line 2604, Address: 0x350720, Func Offset: 0x13d0
	// Line 2603, Address: 0x350724, Func Offset: 0x13d4
	// Line 2604, Address: 0x350728, Func Offset: 0x13d8
	// Line 2603, Address: 0x35072c, Func Offset: 0x13dc
	// Line 2605, Address: 0x350730, Func Offset: 0x13e0
	// Line 2604, Address: 0x350734, Func Offset: 0x13e4
	// Line 2605, Address: 0x35073c, Func Offset: 0x13ec
	// Line 2606, Address: 0x350744, Func Offset: 0x13f4
	// Line 2610, Address: 0x35074c, Func Offset: 0x13fc
	// Line 2638, Address: 0x35075c, Func Offset: 0x140c
	// Line 2643, Address: 0x350764, Func Offset: 0x1414
	// Line 2647, Address: 0x350774, Func Offset: 0x1424
	// Line 2650, Address: 0x350784, Func Offset: 0x1434
	// Line 2653, Address: 0x35078c, Func Offset: 0x143c
	// Line 2654, Address: 0x35079c, Func Offset: 0x144c
	// Line 2655, Address: 0x3507ac, Func Offset: 0x145c
	// Line 2657, Address: 0x3507b8, Func Offset: 0x1468
	// Line 2661, Address: 0x3507c0, Func Offset: 0x1470
	// Line 2665, Address: 0x3507c8, Func Offset: 0x1478
	// Line 2670, Address: 0x3507dc, Func Offset: 0x148c
	// Line 2672, Address: 0x3507e8, Func Offset: 0x1498
	// Line 2674, Address: 0x350838, Func Offset: 0x14e8
	// Line 2675, Address: 0x35085c, Func Offset: 0x150c
	// Line 2676, Address: 0x350860, Func Offset: 0x1510
	// Line 2678, Address: 0x350868, Func Offset: 0x1518
	// Line 2679, Address: 0x35087c, Func Offset: 0x152c
	// Line 2680, Address: 0x350880, Func Offset: 0x1530
	// Line 2688, Address: 0x35088c, Func Offset: 0x153c
	// Line 2689, Address: 0x3508ac, Func Offset: 0x155c
	// Line 2690, Address: 0x3508bc, Func Offset: 0x156c
	// Line 2691, Address: 0x3508c8, Func Offset: 0x1578
	// Line 2693, Address: 0x3508dc, Func Offset: 0x158c
	// Line 2695, Address: 0x3508e8, Func Offset: 0x1598
	// Line 2696, Address: 0x3508f0, Func Offset: 0x15a0
	// Line 2699, Address: 0x3508fc, Func Offset: 0x15ac
	// Line 2700, Address: 0x350908, Func Offset: 0x15b8
	// Line 2707, Address: 0x350920, Func Offset: 0x15d0
	// Line 2704, Address: 0x350924, Func Offset: 0x15d4
	// Line 2707, Address: 0x350928, Func Offset: 0x15d8
	// Line 2704, Address: 0x35092c, Func Offset: 0x15dc
	// Line 2707, Address: 0x350930, Func Offset: 0x15e0
	// Line 2708, Address: 0x35094c, Func Offset: 0x15fc
	// Line 2704, Address: 0x350950, Func Offset: 0x1600
	// Line 2708, Address: 0x350954, Func Offset: 0x1604
	// Line 2709, Address: 0x35095c, Func Offset: 0x160c
	// Line 2711, Address: 0x350960, Func Offset: 0x1610
	// Line 2713, Address: 0x35097c, Func Offset: 0x162c
	// Line 2712, Address: 0x350988, Func Offset: 0x1638
	// Line 2714, Address: 0x35098c, Func Offset: 0x163c
	// Line 2719, Address: 0x350994, Func Offset: 0x1644
	// Line 2720, Address: 0x3509b8, Func Offset: 0x1668
	// Line 2721, Address: 0x3509bc, Func Offset: 0x166c
	// Line 2725, Address: 0x3509c4, Func Offset: 0x1674
	// Line 2727, Address: 0x3509d8, Func Offset: 0x1688
	// Line 2728, Address: 0x3509e0, Func Offset: 0x1690
	// Line 2731, Address: 0x3509f0, Func Offset: 0x16a0
	// Line 2732, Address: 0x350a04, Func Offset: 0x16b4
	// Line 2735, Address: 0x350a54, Func Offset: 0x1704
	// Line 2736, Address: 0x350a64, Func Offset: 0x1714
	// Line 2738, Address: 0x350a6c, Func Offset: 0x171c
	// Line 2741, Address: 0x350a90, Func Offset: 0x1740
	// Line 2744, Address: 0x350ad0, Func Offset: 0x1780
	// Line 2745, Address: 0x350ad4, Func Offset: 0x1784
	// Line 2744, Address: 0x350ad8, Func Offset: 0x1788
	// Line 2745, Address: 0x350adc, Func Offset: 0x178c
	// Line 2746, Address: 0x350ae8, Func Offset: 0x1798
	// Line 2747, Address: 0x350af4, Func Offset: 0x17a4
	// Line 2748, Address: 0x350af8, Func Offset: 0x17a8
	// Line 2749, Address: 0x350b04, Func Offset: 0x17b4
	// Line 2752, Address: 0x350b08, Func Offset: 0x17b8
	// Line 2754, Address: 0x350b10, Func Offset: 0x17c0
	// Line 2757, Address: 0x350b18, Func Offset: 0x17c8
	// Line 2764, Address: 0x350b1c, Func Offset: 0x17cc
	// Line 2766, Address: 0x350b4c, Func Offset: 0x17fc
	// Line 2768, Address: 0x350b9c, Func Offset: 0x184c
	// Line 2769, Address: 0x350c04, Func Offset: 0x18b4
	// Line 2772, Address: 0x350c0c, Func Offset: 0x18bc
	// Line 2777, Address: 0x350c8c, Func Offset: 0x193c
	// Line 2779, Address: 0x350c98, Func Offset: 0x1948
	// Line 2782, Address: 0x350ca0, Func Offset: 0x1950
	// Line 2787, Address: 0x350d10, Func Offset: 0x19c0
	// Line 2788, Address: 0x350d34, Func Offset: 0x19e4
	// Line 2793, Address: 0x350d44, Func Offset: 0x19f4
	// Line 2794, Address: 0x350d50, Func Offset: 0x1a00
	// Line 2793, Address: 0x350d54, Func Offset: 0x1a04
	// Line 2796, Address: 0x350d58, Func Offset: 0x1a08
	// Line 2794, Address: 0x350d5c, Func Offset: 0x1a0c
	// Line 2793, Address: 0x350d64, Func Offset: 0x1a14
	// Line 2794, Address: 0x350d68, Func Offset: 0x1a18
	// Line 2796, Address: 0x350d78, Func Offset: 0x1a28
	// Line 2799, Address: 0x350d8c, Func Offset: 0x1a3c
	// Line 2798, Address: 0x350d94, Func Offset: 0x1a44
	// Line 2799, Address: 0x350d98, Func Offset: 0x1a48
	// Line 2798, Address: 0x350d9c, Func Offset: 0x1a4c
	// Line 2800, Address: 0x350da0, Func Offset: 0x1a50
	// Line 2802, Address: 0x350da8, Func Offset: 0x1a58
	// Line 2801, Address: 0x350db0, Func Offset: 0x1a60
	// Line 2802, Address: 0x350db4, Func Offset: 0x1a64
	// Line 2801, Address: 0x350db8, Func Offset: 0x1a68
	// Line 2802, Address: 0x350dbc, Func Offset: 0x1a6c
	// Line 2804, Address: 0x350dc0, Func Offset: 0x1a70
	// Line 2805, Address: 0x350de4, Func Offset: 0x1a94
	// Line 2807, Address: 0x350df4, Func Offset: 0x1aa4
	// Line 2805, Address: 0x350df8, Func Offset: 0x1aa8
	// Line 2807, Address: 0x350e00, Func Offset: 0x1ab0
	// Line 2805, Address: 0x350e08, Func Offset: 0x1ab8
	// Line 2807, Address: 0x350e14, Func Offset: 0x1ac4
	// Line 2808, Address: 0x350e1c, Func Offset: 0x1acc
	// Line 2809, Address: 0x350e34, Func Offset: 0x1ae4
	// Line 2811, Address: 0x350e4c, Func Offset: 0x1afc
	// Line 2813, Address: 0x350e54, Func Offset: 0x1b04
	// Line 2823, Address: 0x350e64, Func Offset: 0x1b14
	// Line 2813, Address: 0x350e70, Func Offset: 0x1b20
	// Line 2823, Address: 0x350e74, Func Offset: 0x1b24
	// Line 2826, Address: 0x350ea0, Func Offset: 0x1b50
	// Line 2828, Address: 0x350eac, Func Offset: 0x1b5c
	// Line 2830, Address: 0x350ee0, Func Offset: 0x1b90
	// Line 2833, Address: 0x350eec, Func Offset: 0x1b9c
	// Line 2834, Address: 0x350efc, Func Offset: 0x1bac
	// Line 2835, Address: 0x350f08, Func Offset: 0x1bb8
	// Line 2834, Address: 0x350f10, Func Offset: 0x1bc0
	// Line 2835, Address: 0x350f18, Func Offset: 0x1bc8
	// Line 2836, Address: 0x350f28, Func Offset: 0x1bd8
	// Line 2840, Address: 0x350f40, Func Offset: 0x1bf0
	// Line 2841, Address: 0x350f58, Func Offset: 0x1c08
	// Line 2843, Address: 0x350f70, Func Offset: 0x1c20
	// Line 2851, Address: 0x350f84, Func Offset: 0x1c34
	// Line 2849, Address: 0x350f88, Func Offset: 0x1c38
	// Line 2851, Address: 0x350f9c, Func Offset: 0x1c4c
	// Line 2852, Address: 0x350fa4, Func Offset: 0x1c54
	// Line 2854, Address: 0x3510f4, Func Offset: 0x1da4
	// Line 2855, Address: 0x351100, Func Offset: 0x1db0
	// Line 2856, Address: 0x351104, Func Offset: 0x1db4
	// Line 2857, Address: 0x351110, Func Offset: 0x1dc0
	// Line 2858, Address: 0x351118, Func Offset: 0x1dc8
	// Line 2859, Address: 0x351120, Func Offset: 0x1dd0
	// Line 2855, Address: 0x351128, Func Offset: 0x1dd8
	// Line 2856, Address: 0x351130, Func Offset: 0x1de0
	// Line 2859, Address: 0x351134, Func Offset: 0x1de4
	// Line 2856, Address: 0x351138, Func Offset: 0x1de8
	// Line 2857, Address: 0x351144, Func Offset: 0x1df4
	// Line 2858, Address: 0x351158, Func Offset: 0x1e08
	// Line 2859, Address: 0x35116c, Func Offset: 0x1e1c
	// Line 2861, Address: 0x35117c, Func Offset: 0x1e2c
	// Line 2862, Address: 0x351188, Func Offset: 0x1e38
	// Line 2863, Address: 0x35118c, Func Offset: 0x1e3c
	// Line 2861, Address: 0x351190, Func Offset: 0x1e40
	// Line 2866, Address: 0x351194, Func Offset: 0x1e44
	// Line 2861, Address: 0x351198, Func Offset: 0x1e48
	// Line 2862, Address: 0x3511a0, Func Offset: 0x1e50
	// Line 2863, Address: 0x3511b4, Func Offset: 0x1e64
	// Line 2866, Address: 0x3511c8, Func Offset: 0x1e78
	// Line 2868, Address: 0x3511f4, Func Offset: 0x1ea4
	// Line 2866, Address: 0x3511f8, Func Offset: 0x1ea8
	// Line 2868, Address: 0x351200, Func Offset: 0x1eb0
	// Line 2869, Address: 0x351214, Func Offset: 0x1ec4
	// Line 2870, Address: 0x351220, Func Offset: 0x1ed0
	// Line 2871, Address: 0x351224, Func Offset: 0x1ed4
	// Line 2869, Address: 0x351240, Func Offset: 0x1ef0
	// Line 2871, Address: 0x351244, Func Offset: 0x1ef4
	// Line 2869, Address: 0x351248, Func Offset: 0x1ef8
	// Line 2871, Address: 0x35124c, Func Offset: 0x1efc
	// Line 2869, Address: 0x351250, Func Offset: 0x1f00
	// Line 2870, Address: 0x351258, Func Offset: 0x1f08
	// Line 2871, Address: 0x351274, Func Offset: 0x1f24
	// Line 2884, Address: 0x3512b8, Func Offset: 0x1f68
	// Line 2894, Address: 0x351340, Func Offset: 0x1ff0
	// Line 2884, Address: 0x351344, Func Offset: 0x1ff4
	// Line 2894, Address: 0x351368, Func Offset: 0x2018
	// Line 2895, Address: 0x351370, Func Offset: 0x2020
	// Line 2897, Address: 0x351380, Func Offset: 0x2030
	// Line 2898, Address: 0x35138c, Func Offset: 0x203c
	// Line 2900, Address: 0x3513a8, Func Offset: 0x2058
	// Func End, Address: 0x3513e8, Func Offset: 0x2098
}

// TurnToFace__FP4xEntPC5xVec3ff
// Start address: 0x3513f0
void TurnToFace(xEnt* ent, xVec3* target, float32 speedLimit, float32 dt)
{
	xVec3 currentFacing;
	float32 angle;
	float32 maxAngle;
	// Line 2040, Address: 0x3513f0, Func Offset: 0
	// Line 2042, Address: 0x351414, Func Offset: 0x24
	// Line 2043, Address: 0x35142c, Func Offset: 0x3c
	// Line 2042, Address: 0x351430, Func Offset: 0x40
	// Line 2043, Address: 0x35143c, Func Offset: 0x4c
	// Line 2047, Address: 0x351450, Func Offset: 0x60
	// Line 2043, Address: 0x351454, Func Offset: 0x64
	// Line 2047, Address: 0x351458, Func Offset: 0x68
	// Line 2046, Address: 0x35145c, Func Offset: 0x6c
	// Line 2043, Address: 0x351464, Func Offset: 0x74
	// Line 2047, Address: 0x35146c, Func Offset: 0x7c
	// Line 2046, Address: 0x351470, Func Offset: 0x80
	// Line 2047, Address: 0x351484, Func Offset: 0x94
	// Line 2066, Address: 0x351490, Func Offset: 0xa0
	// Line 2049, Address: 0x35149c, Func Offset: 0xac
	// Line 2066, Address: 0x3514a4, Func Offset: 0xb4
	// Line 2049, Address: 0x3514b0, Func Offset: 0xc0
	// Line 2066, Address: 0x3514bc, Func Offset: 0xcc
	// Line 2049, Address: 0x3514c8, Func Offset: 0xd8
	// Line 2066, Address: 0x3514d4, Func Offset: 0xe4
	// Line 2050, Address: 0x3514dc, Func Offset: 0xec
	// Line 2066, Address: 0x3514e0, Func Offset: 0xf0
	// Line 2053, Address: 0x3514e8, Func Offset: 0xf8
	// Line 2066, Address: 0x3514f8, Func Offset: 0x108
	// Line 2053, Address: 0x351500, Func Offset: 0x110
	// Line 2066, Address: 0x351510, Func Offset: 0x120
	// Line 2053, Address: 0x351518, Func Offset: 0x128
	// Line 2066, Address: 0x351520, Func Offset: 0x130
	// Line 2055, Address: 0x351528, Func Offset: 0x138
	// Line 2056, Address: 0x35152c, Func Offset: 0x13c
	// Line 2066, Address: 0x351530, Func Offset: 0x140
	// Line 2057, Address: 0x351538, Func Offset: 0x148
	// Line 2066, Address: 0x35153c, Func Offset: 0x14c
	// Line 2060, Address: 0x351540, Func Offset: 0x150
	// Line 2066, Address: 0x351544, Func Offset: 0x154
	// Line 2060, Address: 0x351548, Func Offset: 0x158
	// Line 2066, Address: 0x35154c, Func Offset: 0x15c
	// Line 2061, Address: 0x351554, Func Offset: 0x164
	// Line 2066, Address: 0x351558, Func Offset: 0x168
	// Line 2064, Address: 0x351564, Func Offset: 0x174
	// Line 2066, Address: 0x351570, Func Offset: 0x180
	// Func End, Address: 0x35158c, Func Offset: 0x19c
}

// DampenControls__FPfPfff
// Start address: 0x351590
void DampenControls(float32* angle, float32* mag, float32 x, float32 y)
{
	// Line 1894, Address: 0x351590, Func Offset: 0
	// Line 1896, Address: 0x3515b4, Func Offset: 0x24
	// Line 1909, Address: 0x3515d4, Func Offset: 0x44
	// Line 1910, Address: 0x351624, Func Offset: 0x94
	// Line 1912, Address: 0x351628, Func Offset: 0x98
	// Line 1913, Address: 0x351678, Func Offset: 0xe8
	// Line 1915, Address: 0x35167c, Func Offset: 0xec
	// Line 1921, Address: 0x351690, Func Offset: 0x100
	// Line 1922, Address: 0x3516ac, Func Offset: 0x11c
	// Line 1928, Address: 0x3516b8, Func Offset: 0x128
	// Line 1929, Address: 0x3516f8, Func Offset: 0x168
	// Line 1928, Address: 0x3516fc, Func Offset: 0x16c
	// Line 1929, Address: 0x351714, Func Offset: 0x184
	// Line 1934, Address: 0x351720, Func Offset: 0x190
	// Line 1935, Address: 0x351738, Func Offset: 0x1a8
	// Line 1915, Address: 0x351740, Func Offset: 0x1b0
	// Line 1935, Address: 0x351744, Func Offset: 0x1b4
	// Line 1918, Address: 0x351750, Func Offset: 0x1c0
	// Line 1935, Address: 0x351758, Func Offset: 0x1c8
	// Line 1932, Address: 0x35175c, Func Offset: 0x1cc
	// Line 1935, Address: 0x35176c, Func Offset: 0x1dc
	// Func End, Address: 0x351788, Func Offset: 0x1f8
}

// SetPlayerKillsVillainTimer__Ff
// Start address: 0x351790
void SetPlayerKillsVillainTimer()
{
	// Line 1866, Address: 0x351790, Func Offset: 0
	// Line 1867, Address: 0x351794, Func Offset: 0x4
	// Line 1866, Address: 0x351798, Func Offset: 0x8
	// Line 1867, Address: 0x3517a0, Func Offset: 0x10
	// Line 1871, Address: 0x3517cc, Func Offset: 0x3c
	// Line 1872, Address: 0x351810, Func Offset: 0x80
	// Line 1877, Address: 0x351818, Func Offset: 0x88
	// Line 1882, Address: 0x351830, Func Offset: 0xa0
	// Func End, Address: 0x35183c, Func Offset: 0xac
}

// VillainNoticesPlayer__FP10zNMECommon
// Start address: 0x351840
void VillainNoticesPlayer(zNMECommon* npc)
{
	en_npctyp ntyp;
	_tagePlayerStreamSnd sound;
	xMat4x3 camMat;
	xVec3 vDirCamToEnemy;
	// Line 1831, Address: 0x351840, Func Offset: 0
	// Line 1832, Address: 0x351854, Func Offset: 0x14
	// Line 1834, Address: 0x351858, Func Offset: 0x18
	// Line 1838, Address: 0x351870, Func Offset: 0x30
	// Line 1839, Address: 0x351884, Func Offset: 0x44
	// Line 1842, Address: 0x35188c, Func Offset: 0x4c
	// Line 1863, Address: 0x3518bc, Func Offset: 0x7c
	// Line 1852, Address: 0x3518f0, Func Offset: 0xb0
	// Line 1863, Address: 0x3518f4, Func Offset: 0xb4
	// Line 1850, Address: 0x351938, Func Offset: 0xf8
	// Line 1863, Address: 0x35193c, Func Offset: 0xfc
	// Line 1850, Address: 0x351940, Func Offset: 0x100
	// Line 1863, Address: 0x351944, Func Offset: 0x104
	// Line 1850, Address: 0x35195c, Func Offset: 0x11c
	// Line 1863, Address: 0x351960, Func Offset: 0x120
	// Line 1852, Address: 0x351980, Func Offset: 0x140
	// Line 1863, Address: 0x351990, Func Offset: 0x150
	// Line 1854, Address: 0x35199c, Func Offset: 0x15c
	// Line 1863, Address: 0x3519a0, Func Offset: 0x160
	// Line 1854, Address: 0x3519b0, Func Offset: 0x170
	// Line 1863, Address: 0x3519b8, Func Offset: 0x178
	// Line 1854, Address: 0x3519bc, Func Offset: 0x17c
	// Line 1863, Address: 0x3519c0, Func Offset: 0x180
	// Line 1854, Address: 0x3519dc, Func Offset: 0x19c
	// Line 1863, Address: 0x3519e0, Func Offset: 0x1a0
	// Line 1854, Address: 0x3519e4, Func Offset: 0x1a4
	// Line 1863, Address: 0x3519e8, Func Offset: 0x1a8
	// Func End, Address: 0x351a0c, Func Offset: 0x1cc
}

// zEntPlayerControlOff__F13zControlOwner
// Start address: 0x351a10
void zEntPlayerControlOff(zControlOwner owner)
{
	uint32 originalValue;
	// Line 1732, Address: 0x351a10, Func Offset: 0
	// Line 1733, Address: 0x351a14, Func Offset: 0x4
	// Line 1732, Address: 0x351a18, Func Offset: 0x8
	// Line 1735, Address: 0x351a1c, Func Offset: 0xc
	// Line 1733, Address: 0x351a20, Func Offset: 0x10
	// Line 1734, Address: 0x351a24, Func Offset: 0x14
	// Line 1735, Address: 0x351a28, Func Offset: 0x18
	// Line 1734, Address: 0x351a30, Func Offset: 0x20
	// Line 1738, Address: 0x351a34, Func Offset: 0x24
	// Line 1740, Address: 0x351a3c, Func Offset: 0x2c
	// Line 1741, Address: 0x351a48, Func Offset: 0x38
	// Line 1743, Address: 0x351a58, Func Offset: 0x48
	// Line 1747, Address: 0x351a60, Func Offset: 0x50
	// Line 1748, Address: 0x351a68, Func Offset: 0x58
	// Func End, Address: 0x351a74, Func Offset: 0x64
}

// zEntPlayerControlOn__F13zControlOwner
// Start address: 0x351a80
void zEntPlayerControlOn(zControlOwner owner)
{
	uint32 originalValue;
	// Line 1703, Address: 0x351a80, Func Offset: 0
	// Line 1704, Address: 0x351a84, Func Offset: 0x4
	// Line 1703, Address: 0x351a88, Func Offset: 0x8
	// Line 1704, Address: 0x351a98, Func Offset: 0x18
	// Line 1705, Address: 0x351a9c, Func Offset: 0x1c
	// Line 1708, Address: 0x351aa8, Func Offset: 0x28
	// Line 1710, Address: 0x351ab0, Func Offset: 0x30
	// Line 1711, Address: 0x351abc, Func Offset: 0x3c
	// Line 1713, Address: 0x351acc, Func Offset: 0x4c
	// Line 1718, Address: 0x351ad4, Func Offset: 0x54
	// Line 1725, Address: 0x351ae8, Func Offset: 0x68
	// Line 1726, Address: 0x351b24, Func Offset: 0xa4
	// Line 1727, Address: 0x351b4c, Func Offset: 0xcc
	// Line 1730, Address: 0x351b78, Func Offset: 0xf8
	// Func End, Address: 0x351b8c, Func Offset: 0x10c
}

// zEntPlayerKillCarry__Fv
// Start address: 0x351b90
void zEntPlayerKillCarry()
{
	zNMECommon* npc;
	xMat3x3 targetingMat;
	// Line 1667, Address: 0x351b90, Func Offset: 0
	// Line 1668, Address: 0x351ba0, Func Offset: 0x10
	// Line 1669, Address: 0x351ba8, Func Offset: 0x18
	// Line 1670, Address: 0x351bac, Func Offset: 0x1c
	// Line 1671, Address: 0x351bc0, Func Offset: 0x30
	// Line 1670, Address: 0x351bc4, Func Offset: 0x34
	// Line 1671, Address: 0x351bcc, Func Offset: 0x3c
	// Line 1674, Address: 0x351bd4, Func Offset: 0x44
	// Line 1676, Address: 0x351bf4, Func Offset: 0x64
	// Line 1680, Address: 0x351c20, Func Offset: 0x90
	// Line 1682, Address: 0x351c44, Func Offset: 0xb4
	// Line 1686, Address: 0x351c58, Func Offset: 0xc8
	// Line 1689, Address: 0x351c6c, Func Offset: 0xdc
	// Line 1690, Address: 0x351c90, Func Offset: 0x100
	// Line 1691, Address: 0x351c98, Func Offset: 0x108
	// Line 1698, Address: 0x351ca8, Func Offset: 0x118
	// Line 1700, Address: 0x351cb0, Func Offset: 0x120
	// Func End, Address: 0x351cbc, Func Offset: 0x12c
}

