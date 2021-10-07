



uint8 IsRingChallengeActive();
xMat4x3* GetPlayerToCheck();
void Update(float32 dt);
void Reset();
void EventHandler(xBase* to, uint32 event);
void Load(xBase& data, xDynAsset& asset);

// IsRingChallengeActive__12zRingControlFv
// Start address: 0x300ef0
uint8 zRingControl::IsRingChallengeActive()
{
	// Line 508, Address: 0x300ef0, Func Offset: 0
	// Line 512, Address: 0x300ef4, Func Offset: 0x4
	// Line 515, Address: 0x300f0c, Func Offset: 0x1c
	// Func End, Address: 0x300f14, Func Offset: 0x24
}

// GetPlayerToCheck__12zRingControlCFv
// Start address: 0x300f20
xMat4x3* zRingControl::GetPlayerToCheck()
{
	// Line 358, Address: 0x300f20, Func Offset: 0
	// Line 360, Address: 0x300f28, Func Offset: 0x8
	// Line 363, Address: 0x300f50, Func Offset: 0x30
	// Line 365, Address: 0x300f60, Func Offset: 0x40
	// Line 369, Address: 0x300f74, Func Offset: 0x54
	// Line 371, Address: 0x300f84, Func Offset: 0x64
	// Line 376, Address: 0x300f98, Func Offset: 0x78
	// Line 378, Address: 0x300fa4, Func Offset: 0x84
	// Line 380, Address: 0x300fb4, Func Offset: 0x94
	// Line 387, Address: 0x300fc8, Func Offset: 0xa8
	// Line 389, Address: 0x300fd4, Func Offset: 0xb4
	// Line 391, Address: 0x300fe0, Func Offset: 0xc0
	// Line 397, Address: 0x300ff4, Func Offset: 0xd4
	// Line 399, Address: 0x301000, Func Offset: 0xe0
	// Line 401, Address: 0x301010, Func Offset: 0xf0
	// Line 407, Address: 0x301020, Func Offset: 0x100
	// Line 409, Address: 0x301030, Func Offset: 0x110
	// Line 414, Address: 0x301044, Func Offset: 0x124
	// Line 416, Address: 0x301048, Func Offset: 0x128
	// Func End, Address: 0x301054, Func Offset: 0x134
}

// Update__12zRingControlFf
// Start address: 0x301060
void zRingControl::Update(float32 dt)
{
	xMat4x3* playerMatrix;
	// Line 250, Address: 0x301060, Func Offset: 0
	// Line 252, Address: 0x301064, Func Offset: 0x4
	// Line 250, Address: 0x301068, Func Offset: 0x8
	// Line 252, Address: 0x301084, Func Offset: 0x24
	// Line 255, Address: 0x3010ac, Func Offset: 0x4c
	// Line 257, Address: 0x3010b4, Func Offset: 0x54
	// Line 259, Address: 0x3010bc, Func Offset: 0x5c
	// Line 260, Address: 0x3010c0, Func Offset: 0x60
	// Line 263, Address: 0x301150, Func Offset: 0xf0
	// Line 269, Address: 0x301168, Func Offset: 0x108
	// Line 272, Address: 0x301188, Func Offset: 0x128
	// Line 275, Address: 0x3011a0, Func Offset: 0x140
	// Line 277, Address: 0x3011cc, Func Offset: 0x16c
	// Line 355, Address: 0x301248, Func Offset: 0x1e8
	// Line 261, Address: 0x301250, Func Offset: 0x1f0
	// Line 269, Address: 0x301258, Func Offset: 0x1f8
	// Line 355, Address: 0x30126c, Func Offset: 0x20c
	// Line 277, Address: 0x30127c, Func Offset: 0x21c
	// Line 355, Address: 0x301280, Func Offset: 0x220
	// Line 277, Address: 0x30128c, Func Offset: 0x22c
	// Line 355, Address: 0x3012a4, Func Offset: 0x244
	// Line 277, Address: 0x3012ac, Func Offset: 0x24c
	// Line 355, Address: 0x3012d0, Func Offset: 0x270
	// Line 282, Address: 0x3012e0, Func Offset: 0x280
	// Line 355, Address: 0x3012e8, Func Offset: 0x288
	// Line 282, Address: 0x3012f0, Func Offset: 0x290
	// Line 355, Address: 0x3012f8, Func Offset: 0x298
	// Line 282, Address: 0x301314, Func Offset: 0x2b4
	// Line 355, Address: 0x301318, Func Offset: 0x2b8
	// Line 286, Address: 0x301324, Func Offset: 0x2c4
	// Line 289, Address: 0x301328, Func Offset: 0x2c8
	// Line 355, Address: 0x301348, Func Offset: 0x2e8
	// Line 292, Address: 0x301370, Func Offset: 0x310
	// Line 355, Address: 0x301374, Func Offset: 0x314
	// Line 292, Address: 0x301384, Func Offset: 0x324
	// Line 355, Address: 0x30139c, Func Offset: 0x33c
	// Line 293, Address: 0x3013a4, Func Offset: 0x344
	// Line 355, Address: 0x3013ac, Func Offset: 0x34c
	// Line 292, Address: 0x3013b4, Func Offset: 0x354
	// Line 296, Address: 0x3013c0, Func Offset: 0x360
	// Line 355, Address: 0x3013c4, Func Offset: 0x364
	// Line 296, Address: 0x3013cc, Func Offset: 0x36c
	// Line 355, Address: 0x3013d0, Func Offset: 0x370
	// Line 308, Address: 0x3013e8, Func Offset: 0x388
	// Line 355, Address: 0x3013f4, Func Offset: 0x394
	// Line 314, Address: 0x301414, Func Offset: 0x3b4
	// Line 355, Address: 0x30141c, Func Offset: 0x3bc
	// Line 314, Address: 0x301424, Func Offset: 0x3c4
	// Line 355, Address: 0x301428, Func Offset: 0x3c8
	// Line 334, Address: 0x30147c, Func Offset: 0x41c
	// Line 355, Address: 0x301480, Func Offset: 0x420
	// Line 334, Address: 0x3014a4, Func Offset: 0x444
	// Line 355, Address: 0x3014a8, Func Offset: 0x448
	// Line 334, Address: 0x3014bc, Func Offset: 0x45c
	// Line 355, Address: 0x3014c0, Func Offset: 0x460
	// Line 337, Address: 0x3014e4, Func Offset: 0x484
	// Line 355, Address: 0x3014ec, Func Offset: 0x48c
	// Line 337, Address: 0x3014f0, Func Offset: 0x490
	// Line 355, Address: 0x3014f4, Func Offset: 0x494
	// Line 340, Address: 0x301508, Func Offset: 0x4a8
	// Line 355, Address: 0x30150c, Func Offset: 0x4ac
	// Line 303, Address: 0x301524, Func Offset: 0x4c4
	// Line 355, Address: 0x301528, Func Offset: 0x4c8
	// Line 314, Address: 0x30154c, Func Offset: 0x4ec
	// Line 355, Address: 0x301550, Func Offset: 0x4f0
	// Line 314, Address: 0x301568, Func Offset: 0x508
	// Line 355, Address: 0x30156c, Func Offset: 0x50c
	// Line 314, Address: 0x301574, Func Offset: 0x514
	// Line 355, Address: 0x30157c, Func Offset: 0x51c
	// Line 323, Address: 0x301590, Func Offset: 0x530
	// Line 355, Address: 0x3015ac, Func Offset: 0x54c
	// Line 328, Address: 0x3015c4, Func Offset: 0x564
	// Line 355, Address: 0x3015c8, Func Offset: 0x568
	// Line 348, Address: 0x3015e0, Func Offset: 0x580
	// Line 326, Address: 0x3015e8, Func Offset: 0x588
	// Line 355, Address: 0x3015ec, Func Offset: 0x58c
	// Line 326, Address: 0x3015f8, Func Offset: 0x598
	// Line 355, Address: 0x3015fc, Func Offset: 0x59c
	// Line 326, Address: 0x30160c, Func Offset: 0x5ac
	// Line 355, Address: 0x301624, Func Offset: 0x5c4
	// Line 326, Address: 0x30163c, Func Offset: 0x5dc
	// Line 355, Address: 0x301650, Func Offset: 0x5f0
	// Line 337, Address: 0x301654, Func Offset: 0x5f4
	// Line 355, Address: 0x301658, Func Offset: 0x5f8
	// Line 337, Address: 0x301664, Func Offset: 0x604
	// Line 355, Address: 0x30167c, Func Offset: 0x61c
	// Line 337, Address: 0x301688, Func Offset: 0x628
	// Line 355, Address: 0x30168c, Func Offset: 0x62c
	// Line 337, Address: 0x3016a4, Func Offset: 0x644
	// Line 355, Address: 0x3016bc, Func Offset: 0x65c
	// Line 337, Address: 0x3016c4, Func Offset: 0x664
	// Line 355, Address: 0x3016cc, Func Offset: 0x66c
	// Line 337, Address: 0x3016d4, Func Offset: 0x674
	// Line 355, Address: 0x3016f8, Func Offset: 0x698
	// Func End, Address: 0x301730, Func Offset: 0x6d0
}

// Reset__12zRingControlFv
// Start address: 0x301730
void zRingControl::Reset()
{
	uint32 i;
	int8 errorMsg[100];
	RpAtomic* tempInstance;
	// Line 120, Address: 0x301730, Func Offset: 0
	// Line 122, Address: 0x30174c, Func Offset: 0x1c
	// Line 123, Address: 0x30175c, Func Offset: 0x2c
	// Line 124, Address: 0x301768, Func Offset: 0x38
	// Line 125, Address: 0x301774, Func Offset: 0x44
	// Line 126, Address: 0x301780, Func Offset: 0x50
	// Line 129, Address: 0x301794, Func Offset: 0x64
	// Line 131, Address: 0x3017ac, Func Offset: 0x7c
	// Line 133, Address: 0x3017b4, Func Offset: 0x84
	// Line 135, Address: 0x3017bc, Func Offset: 0x8c
	// Line 137, Address: 0x3017d8, Func Offset: 0xa8
	// Line 138, Address: 0x3017e0, Func Offset: 0xb0
	// Line 139, Address: 0x3017e4, Func Offset: 0xb4
	// Line 140, Address: 0x3017e8, Func Offset: 0xb8
	// Line 145, Address: 0x3017ec, Func Offset: 0xbc
	// Line 148, Address: 0x301804, Func Offset: 0xd4
	// Line 150, Address: 0x301884, Func Offset: 0x154
	// Line 152, Address: 0x3018a4, Func Offset: 0x174
	// Line 158, Address: 0x3018b8, Func Offset: 0x188
	// Line 159, Address: 0x3018d8, Func Offset: 0x1a8
	// Line 158, Address: 0x3018e0, Func Offset: 0x1b0
	// Line 159, Address: 0x3018e4, Func Offset: 0x1b4
	// Line 162, Address: 0x3018f0, Func Offset: 0x1c0
	// Line 164, Address: 0x301900, Func Offset: 0x1d0
	// Line 167, Address: 0x301904, Func Offset: 0x1d4
	// Line 169, Address: 0x30190c, Func Offset: 0x1dc
	// Line 170, Address: 0x301914, Func Offset: 0x1e4
	// Line 172, Address: 0x301918, Func Offset: 0x1e8
	// Line 177, Address: 0x30191c, Func Offset: 0x1ec
	// Line 178, Address: 0x30193c, Func Offset: 0x20c
	// Line 182, Address: 0x30194c, Func Offset: 0x21c
	// Line 184, Address: 0x301960, Func Offset: 0x230
	// Line 185, Address: 0x301988, Func Offset: 0x258
	// Line 148, Address: 0x3019a0, Func Offset: 0x270
	// Line 185, Address: 0x3019a8, Func Offset: 0x278
	// Line 187, Address: 0x3019b8, Func Offset: 0x288
	// Line 191, Address: 0x3019d0, Func Offset: 0x2a0
	// Line 194, Address: 0x3019e4, Func Offset: 0x2b4
	// Line 195, Address: 0x3019e8, Func Offset: 0x2b8
	// Func End, Address: 0x301a08, Func Offset: 0x2d8
}

// EventHandler__12zRingControlFP5xBaseP5xBaseUiPCfP5xBaseUi
// Start address: 0x301a10
void zRingControl::EventHandler(xBase* to, uint32 event)
{
	zRingControl& ringControl;
	// Line 94, Address: 0x301a10, Func Offset: 0
	// Line 99, Address: 0x301a14, Func Offset: 0x4
	// Line 94, Address: 0x301a18, Func Offset: 0x8
	// Line 97, Address: 0x301a24, Func Offset: 0x14
	// Line 94, Address: 0x301a28, Func Offset: 0x18
	// Line 99, Address: 0x301a2c, Func Offset: 0x1c
	// Line 102, Address: 0x301a78, Func Offset: 0x68
	// Line 103, Address: 0x301a84, Func Offset: 0x74
	// Line 106, Address: 0x301afc, Func Offset: 0xec
	// Line 107, Address: 0x301b00, Func Offset: 0xf0
	// Line 110, Address: 0x301b08, Func Offset: 0xf8
	// Line 111, Address: 0x301b14, Func Offset: 0x104
	// Line 114, Address: 0x301b1c, Func Offset: 0x10c
	// Line 117, Address: 0x301b20, Func Offset: 0x110
	// Line 103, Address: 0x301b38, Func Offset: 0x128
	// Line 117, Address: 0x301b4c, Func Offset: 0x13c
	// Line 103, Address: 0x301b54, Func Offset: 0x144
	// Line 117, Address: 0x301b78, Func Offset: 0x168
	// Line 104, Address: 0x301b80, Func Offset: 0x170
	// Line 117, Address: 0x301b88, Func Offset: 0x178
	// Func End, Address: 0x301ba4, Func Offset: 0x194
}

// Load__12zRingControlFR5xBaseR9xDynAssetUi
// Start address: 0x301bb0
void zRingControl::Load(xBase& data, xDynAsset& asset)
{
	// Line 88, Address: 0x301bb0, Func Offset: 0
	// Line 90, Address: 0x301bc4, Func Offset: 0x14
	// Line 91, Address: 0x301bd0, Func Offset: 0x20
	// Line 90, Address: 0x301be0, Func Offset: 0x30
	// Line 91, Address: 0x301be4, Func Offset: 0x34
	// Line 90, Address: 0x301c0c, Func Offset: 0x5c
	// Line 91, Address: 0x301c10, Func Offset: 0x60
	// Line 90, Address: 0x301c14, Func Offset: 0x64
	// Line 91, Address: 0x301c18, Func Offset: 0x68
	// Line 90, Address: 0x301c1c, Func Offset: 0x6c
	// Line 91, Address: 0x301c24, Func Offset: 0x74
	// Func End, Address: 0x301c4c, Func Offset: 0x9c
}

