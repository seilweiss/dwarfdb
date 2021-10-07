



void CollideTrigger(xScene* sc);
uint8 xRayHitsTrigger(xVec3& start, xVec3& end, xBox& b, uint8& end_inside);
uint8 Damage();
void zPlayerEventCB(xBase* from, xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget, uint32 toParamWidgetID);
uint32 TalkDoneCheck(xAnimTransition* tran);
uint32 TalkCheck(xAnimTransition* tran);
void SpeakStop();
void SetEnemyIsNear(uint8 isit);
void SpeakStart(iSndGroupHandle hSoundGroup, int32 anim);
void Init(xEntAsset* asset);
void bound_update_wrapper(xEnt* ent, xVec3* pos);

// CollideTrigger__7zPlayerFP6xScene
// Start address: 0x307be0
void zPlayer::CollideTrigger(xScene* sc)
{
	uint8 end_inside'215;
	xVec3 end_pos;
	xVec3 start_pos;
	xVec3 frame_dir;
	int32 i;
	zEntTrigger* trig;
	xTriggerAsset* tasset;
	uint8 end_inside;
	uint8 collide;
	xVec3 start;
	xVec3 end;
	xSphere sphere;
	// Line 862, Address: 0x307be0, Func Offset: 0
	// Line 879, Address: 0x307be4, Func Offset: 0x4
	// Line 862, Address: 0x307be8, Func Offset: 0x8
	// Line 879, Address: 0x307bec, Func Offset: 0xc
	// Line 862, Address: 0x307bf0, Func Offset: 0x10
	// Line 879, Address: 0x307bf4, Func Offset: 0x14
	// Line 862, Address: 0x307bf8, Func Offset: 0x18
	// Line 876, Address: 0x307bfc, Func Offset: 0x1c
	// Line 862, Address: 0x307c00, Func Offset: 0x20
	// Line 876, Address: 0x307c04, Func Offset: 0x24
	// Line 862, Address: 0x307c08, Func Offset: 0x28
	// Line 879, Address: 0x307c50, Func Offset: 0x70
	// Line 862, Address: 0x307c54, Func Offset: 0x74
	// Line 879, Address: 0x307c58, Func Offset: 0x78
	// Line 876, Address: 0x307c5c, Func Offset: 0x7c
	// Line 879, Address: 0x307c88, Func Offset: 0xa8
	// Line 884, Address: 0x307c90, Func Offset: 0xb0
	// Line 889, Address: 0x307c94, Func Offset: 0xb4
	// Line 888, Address: 0x307c98, Func Offset: 0xb8
	// Line 884, Address: 0x307ca0, Func Offset: 0xc0
	// Line 888, Address: 0x307ca4, Func Offset: 0xc4
	// Line 884, Address: 0x307ca8, Func Offset: 0xc8
	// Line 888, Address: 0x307cac, Func Offset: 0xcc
	// Line 884, Address: 0x307cb4, Func Offset: 0xd4
	// Line 888, Address: 0x307cb8, Func Offset: 0xd8
	// Line 884, Address: 0x307cbc, Func Offset: 0xdc
	// Line 888, Address: 0x307cc4, Func Offset: 0xe4
	// Line 889, Address: 0x307ccc, Func Offset: 0xec
	// Line 888, Address: 0x307cd0, Func Offset: 0xf0
	// Line 889, Address: 0x307cd4, Func Offset: 0xf4
	// Line 888, Address: 0x307cd8, Func Offset: 0xf8
	// Line 889, Address: 0x307cdc, Func Offset: 0xfc
	// Line 900, Address: 0x307cf4, Func Offset: 0x114
	// Line 901, Address: 0x307d1c, Func Offset: 0x13c
	// Line 908, Address: 0x307d30, Func Offset: 0x150
	// Line 913, Address: 0x307d48, Func Offset: 0x168
	// Line 916, Address: 0x307d90, Func Offset: 0x1b0
	// Line 919, Address: 0x307d9c, Func Offset: 0x1bc
	// Line 938, Address: 0x307db0, Func Offset: 0x1d0
	// Line 942, Address: 0x307db4, Func Offset: 0x1d4
	// Line 925, Address: 0x307db8, Func Offset: 0x1d8
	// Line 940, Address: 0x307dbc, Func Offset: 0x1dc
	// Line 938, Address: 0x307dc0, Func Offset: 0x1e0
	// Line 939, Address: 0x307dc4, Func Offset: 0x1e4
	// Line 938, Address: 0x307dc8, Func Offset: 0x1e8
	// Line 942, Address: 0x307dcc, Func Offset: 0x1ec
	// Line 946, Address: 0x307de8, Func Offset: 0x208
	// Line 947, Address: 0x307e28, Func Offset: 0x248
	// Line 950, Address: 0x307e68, Func Offset: 0x288
	// Line 951, Address: 0x307e7c, Func Offset: 0x29c
	// Line 957, Address: 0x307e84, Func Offset: 0x2a4
	// Line 961, Address: 0x307e88, Func Offset: 0x2a8
	// Line 957, Address: 0x307e8c, Func Offset: 0x2ac
	// Line 961, Address: 0x307e94, Func Offset: 0x2b4
	// Line 958, Address: 0x307e98, Func Offset: 0x2b8
	// Line 957, Address: 0x307e9c, Func Offset: 0x2bc
	// Line 961, Address: 0x307ea0, Func Offset: 0x2c0
	// Line 957, Address: 0x307ea4, Func Offset: 0x2c4
	// Line 961, Address: 0x307ea8, Func Offset: 0x2c8
	// Line 966, Address: 0x307fc4, Func Offset: 0x3e4
	// Line 968, Address: 0x307ff4, Func Offset: 0x414
	// Line 970, Address: 0x308004, Func Offset: 0x424
	// Line 972, Address: 0x308034, Func Offset: 0x454
	// Line 973, Address: 0x308058, Func Offset: 0x478
	// Line 983, Address: 0x3080c0, Func Offset: 0x4e0
	// Line 986, Address: 0x3080cc, Func Offset: 0x4ec
	// Line 988, Address: 0x3080fc, Func Offset: 0x51c
	// Line 990, Address: 0x30810c, Func Offset: 0x52c
	// Line 992, Address: 0x308148, Func Offset: 0x568
	// Line 994, Address: 0x30816c, Func Offset: 0x58c
	// Line 1003, Address: 0x3081d4, Func Offset: 0x5f4
	// Line 1006, Address: 0x3081e4, Func Offset: 0x604
	// Line 1008, Address: 0x308200, Func Offset: 0x620
	// Line 1009, Address: 0x30822c, Func Offset: 0x64c
	// Line 1014, Address: 0x308250, Func Offset: 0x670
	// Line 1015, Address: 0x308264, Func Offset: 0x684
	// Line 895, Address: 0x3082a4, Func Offset: 0x6c4
	// Line 1015, Address: 0x3082b8, Func Offset: 0x6d8
	// Line 900, Address: 0x3082c4, Func Offset: 0x6e4
	// Line 1015, Address: 0x3082d8, Func Offset: 0x6f8
	// Line 900, Address: 0x3082dc, Func Offset: 0x6fc
	// Line 1015, Address: 0x3082e4, Func Offset: 0x704
	// Line 961, Address: 0x308310, Func Offset: 0x730
	// Line 979, Address: 0x30831c, Func Offset: 0x73c
	// Line 1015, Address: 0x308338, Func Offset: 0x758
	// Line 980, Address: 0x308344, Func Offset: 0x764
	// Line 1015, Address: 0x308348, Func Offset: 0x768
	// Line 980, Address: 0x308358, Func Offset: 0x778
	// Line 1015, Address: 0x308378, Func Offset: 0x798
	// Line 980, Address: 0x308380, Func Offset: 0x7a0
	// Line 1015, Address: 0x3083a0, Func Offset: 0x7c0
	// Line 999, Address: 0x3083b0, Func Offset: 0x7d0
	// Line 1015, Address: 0x3083cc, Func Offset: 0x7ec
	// Line 1000, Address: 0x3083d8, Func Offset: 0x7f8
	// Line 1015, Address: 0x3083dc, Func Offset: 0x7fc
	// Line 1000, Address: 0x3083ec, Func Offset: 0x80c
	// Line 1015, Address: 0x30840c, Func Offset: 0x82c
	// Line 1000, Address: 0x308414, Func Offset: 0x834
	// Line 1015, Address: 0x308434, Func Offset: 0x854
	// Func End, Address: 0x30849c, Func Offset: 0x8bc
}

// xRayHitsTrigger__FRC5xVec3RC5xVec3RC4xBoxRb
// Start address: 0x3084a0
uint8 xRayHitsTrigger(xVec3& start, xVec3& end, xBox& b, uint8& end_inside)
{
	float32 hit_x;
	float32 hit_y;
	float32 hit_z;
	// Line 630, Address: 0x3084a0, Func Offset: 0
	// Line 635, Address: 0x308558, Func Offset: 0xb8
	// Line 641, Address: 0x308570, Func Offset: 0xd0
	// Line 646, Address: 0x3085d4, Func Offset: 0x134
	// Line 650, Address: 0x3085e0, Func Offset: 0x140
	// Line 658, Address: 0x308618, Func Offset: 0x178
	// Line 650, Address: 0x30863c, Func Offset: 0x19c
	// Line 658, Address: 0x308640, Func Offset: 0x1a0
	// Line 650, Address: 0x30864c, Func Offset: 0x1ac
	// Line 658, Address: 0x308650, Func Offset: 0x1b0
	// Line 650, Address: 0x30865c, Func Offset: 0x1bc
	// Line 658, Address: 0x308660, Func Offset: 0x1c0
	// Line 650, Address: 0x30866c, Func Offset: 0x1cc
	// Line 658, Address: 0x308670, Func Offset: 0x1d0
	// Line 650, Address: 0x308684, Func Offset: 0x1e4
	// Line 658, Address: 0x308688, Func Offset: 0x1e8
	// Line 650, Address: 0x308694, Func Offset: 0x1f4
	// Line 658, Address: 0x308698, Func Offset: 0x1f8
	// Line 650, Address: 0x3086a4, Func Offset: 0x204
	// Line 658, Address: 0x3086a8, Func Offset: 0x208
	// Line 673, Address: 0x3086b8, Func Offset: 0x218
	// Line 677, Address: 0x30876c, Func Offset: 0x2cc
	// Line 681, Address: 0x308774, Func Offset: 0x2d4
	// Line 685, Address: 0x308834, Func Offset: 0x394
	// Line 650, Address: 0x308844, Func Offset: 0x3a4
	// Line 685, Address: 0x308848, Func Offset: 0x3a8
	// Line 673, Address: 0x308858, Func Offset: 0x3b8
	// Line 685, Address: 0x30885c, Func Offset: 0x3bc
	// Line 690, Address: 0x30886c, Func Offset: 0x3cc
	// Line 694, Address: 0x30892c, Func Offset: 0x48c
	// Line 698, Address: 0x308934, Func Offset: 0x494
	// Line 702, Address: 0x3089f4, Func Offset: 0x554
	// Line 706, Address: 0x3089fc, Func Offset: 0x55c
	// Line 710, Address: 0x308ab8, Func Offset: 0x618
	// Line 714, Address: 0x308ac0, Func Offset: 0x620
	// Line 718, Address: 0x308b78, Func Offset: 0x6d8
	// Line 722, Address: 0x308b80, Func Offset: 0x6e0
	// Line 723, Address: 0x308b84, Func Offset: 0x6e4
	// Func End, Address: 0x308b8c, Func Offset: 0x6ec
}

// Damage__7zPlayerFP5xBasei10zHitSource10zHitTargetPC5xVec3
// Start address: 0x308b90
uint8 zPlayer::Damage()
{
	// Line 543, Address: 0x308b90, Func Offset: 0
	// Line 546, Address: 0x308b9c, Func Offset: 0xc
	// Line 549, Address: 0x308bb8, Func Offset: 0x28
	// Line 551, Address: 0x308bc0, Func Offset: 0x30
	// Line 552, Address: 0x308bc8, Func Offset: 0x38
	// Line 554, Address: 0x308bd4, Func Offset: 0x44
	// Line 553, Address: 0x308bd8, Func Offset: 0x48
	// Line 554, Address: 0x308bdc, Func Offset: 0x4c
	// Line 555, Address: 0x308c00, Func Offset: 0x70
	// Line 564, Address: 0x308c10, Func Offset: 0x80
	// Line 563, Address: 0x308c14, Func Offset: 0x84
	// Line 564, Address: 0x308c18, Func Offset: 0x88
	// Func End, Address: 0x308c24, Func Offset: 0x94
}

// zPlayerEventCB__7zPlayerFP5xBaseP5xBaseUiPCfP5xBaseUi
// Start address: 0x308c30
void zPlayer::zPlayerEventCB(xBase* from, xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget, uint32 toParamWidgetID)
{
	// Line 463, Address: 0x308c38, Func Offset: 0x8
	// Func End, Address: 0x308c4c, Func Offset: 0x1c
}

// TalkDoneCheck__7zPlayerFP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x308c50
uint32 zPlayer::TalkDoneCheck(xAnimTransition* tran)
{
	// Line 415, Address: 0x308c50, Func Offset: 0
	// Line 416, Address: 0x308c60, Func Offset: 0x10
	// Func End, Address: 0x308c68, Func Offset: 0x18
}

// TalkCheck__7zPlayerFP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x308c70
uint32 zPlayer::TalkCheck(xAnimTransition* tran)
{
	// Line 410, Address: 0x308c70, Func Offset: 0
	// Line 411, Address: 0x308c80, Func Offset: 0x10
	// Func End, Address: 0x308c88, Func Offset: 0x18
}

// SpeakStop__7zPlayerFv
// Start address: 0x308c90
void zPlayer::SpeakStop()
{
	// Line 388, Address: 0x308c90, Func Offset: 0
	// Line 389, Address: 0x308c9c, Func Offset: 0xc
	// Line 390, Address: 0x308ca8, Func Offset: 0x18
	// Func End, Address: 0x308cb0, Func Offset: 0x20
}

// SetEnemyIsNear__7zPlayerFb
// Start address: 0x308cb0
void zPlayer::SetEnemyIsNear(uint8 isit)
{
	// Line 383, Address: 0x308cb0, Func Offset: 0
	// Line 384, Address: 0x308cd8, Func Offset: 0x28
	// Func End, Address: 0x308ce0, Func Offset: 0x30
}

// SpeakStart__7zPlayerF15iSndGroupHandlei
// Start address: 0x308ce0
void zPlayer::SpeakStart(iSndGroupHandle hSoundGroup, int32 anim)
{
	// Line 372, Address: 0x308ce0, Func Offset: 0
	// Line 373, Address: 0x308ce4, Func Offset: 0x4
	// Line 372, Address: 0x308ce8, Func Offset: 0x8
	// Line 373, Address: 0x308cec, Func Offset: 0xc
	// Line 372, Address: 0x308cf0, Func Offset: 0x10
	// Line 373, Address: 0x308cfc, Func Offset: 0x1c
	// Line 374, Address: 0x308d08, Func Offset: 0x28
	// Line 373, Address: 0x308d0c, Func Offset: 0x2c
	// Line 374, Address: 0x308d10, Func Offset: 0x30
	// Line 373, Address: 0x308d14, Func Offset: 0x34
	// Line 374, Address: 0x308d18, Func Offset: 0x38
	// Line 375, Address: 0x308d2c, Func Offset: 0x4c
	// Line 376, Address: 0x308d34, Func Offset: 0x54
	// Line 377, Address: 0x308d44, Func Offset: 0x64
	// Line 376, Address: 0x308d48, Func Offset: 0x68
	// Line 378, Address: 0x308d4c, Func Offset: 0x6c
	// Line 377, Address: 0x308d50, Func Offset: 0x70
	// Line 379, Address: 0x308d54, Func Offset: 0x74
	// Line 376, Address: 0x308d64, Func Offset: 0x84
	// Line 379, Address: 0x308d70, Func Offset: 0x90
	// Func End, Address: 0x308d84, Func Offset: 0xa4
}

// Init__7zPlayerFP9xEntAsset
// Start address: 0x308d90
void zPlayer::Init(xEntAsset* asset)
{
	xModelInstance* m;
	// Line 215, Address: 0x308d90, Func Offset: 0
	// Line 220, Address: 0x308d94, Func Offset: 0x4
	// Line 215, Address: 0x308d98, Func Offset: 0x8
	// Line 216, Address: 0x308d9c, Func Offset: 0xc
	// Line 215, Address: 0x308da0, Func Offset: 0x10
	// Line 220, Address: 0x308da4, Func Offset: 0x14
	// Line 215, Address: 0x308da8, Func Offset: 0x18
	// Line 217, Address: 0x308dac, Func Offset: 0x1c
	// Line 216, Address: 0x308db0, Func Offset: 0x20
	// Line 217, Address: 0x308dc4, Func Offset: 0x34
	// Line 220, Address: 0x308dcc, Func Offset: 0x3c
	// Line 222, Address: 0x308dd4, Func Offset: 0x44
	// Line 224, Address: 0x308dd8, Func Offset: 0x48
	// Line 225, Address: 0x308ddc, Func Offset: 0x4c
	// Line 222, Address: 0x308de0, Func Offset: 0x50
	// Line 224, Address: 0x308de8, Func Offset: 0x58
	// Line 225, Address: 0x308df4, Func Offset: 0x64
	// Line 271, Address: 0x308e00, Func Offset: 0x70
	// Line 272, Address: 0x308e0c, Func Offset: 0x7c
	// Line 308, Address: 0x308e28, Func Offset: 0x98
	// Line 309, Address: 0x308e34, Func Offset: 0xa4
	// Line 327, Address: 0x308e5c, Func Offset: 0xcc
	// Line 329, Address: 0x308e64, Func Offset: 0xd4
	// Line 368, Address: 0x308e68, Func Offset: 0xd8
	// Line 310, Address: 0x308e94, Func Offset: 0x104
	// Line 368, Address: 0x308e98, Func Offset: 0x108
	// Line 312, Address: 0x308ea0, Func Offset: 0x110
	// Line 368, Address: 0x308ea4, Func Offset: 0x114
	// Line 313, Address: 0x308eb0, Func Offset: 0x120
	// Line 368, Address: 0x308eb4, Func Offset: 0x124
	// Line 314, Address: 0x308ec0, Func Offset: 0x130
	// Line 368, Address: 0x308ec4, Func Offset: 0x134
	// Func End, Address: 0x308efc, Func Offset: 0x16c
}

// bound_update_wrapper__19@unnamed@zWad3_cpp@FP4xEntP5xVec3
// Start address: 0x308f00
void bound_update_wrapper(xEnt* ent, xVec3* pos)
{
	// Line 152, Address: 0x308f00, Func Offset: 0
	// Func End, Address: 0x308f10, Func Offset: 0x10
}

