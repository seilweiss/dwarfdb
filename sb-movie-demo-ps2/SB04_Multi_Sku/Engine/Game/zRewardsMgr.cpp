



void SetPlayerDead();
void GiveAllRewardsNow();
void ParseValuesFromIni(xIniFile* ini);
void IncManlinessPoints(uint32 points, uint8 set);
uint32 GetUpgradeRangeUpper();
uint32 GetUpgradeRangeLower();
void ResetLastComboIndex();
uint32 GetLastComboIndex();
void ResetLastComboManlinessPoints();
uint32 GetLastComboManlinessPoints();
void SpawnRewards(int32 numRewards, xVec3& fromPos);
void Update(float32 dt);
uint32 GetComboManlinessPoints();
void GiveReward(en_npctyp enemy, xVec3& fromPos);
void zRewardsMgrStartup();

// SetPlayerDead__11zRewardsMgrFv
// Start address: 0x303880
void zRewardsMgr::SetPlayerDead()
{
	// Line 767, Address: 0x303880, Func Offset: 0
	// Line 768, Address: 0x303884, Func Offset: 0x4
	// Func End, Address: 0x30388c, Func Offset: 0xc
}

// GiveAllRewardsNow__11zRewardsMgrFv
// Start address: 0x303890
void zRewardsMgr::GiveAllRewardsNow()
{
	int32 i;
	// Line 750, Address: 0x303890, Func Offset: 0
	// Line 753, Address: 0x303894, Func Offset: 0x4
	// Line 750, Address: 0x303898, Func Offset: 0x8
	// Line 755, Address: 0x3038a8, Func Offset: 0x18
	// Line 757, Address: 0x3038c0, Func Offset: 0x30
	// Line 755, Address: 0x3038c4, Func Offset: 0x34
	// Line 757, Address: 0x3038cc, Func Offset: 0x3c
	// Line 758, Address: 0x3038dc, Func Offset: 0x4c
	// Line 759, Address: 0x3038e0, Func Offset: 0x50
	// Line 761, Address: 0x3038e8, Func Offset: 0x58
	// Line 762, Address: 0x3038f8, Func Offset: 0x68
	// Func End, Address: 0x30390c, Func Offset: 0x7c
}

// ParseValuesFromIni__11zRewardsMgrFP8xIniFile
// Start address: 0x303910
void zRewardsMgr::ParseValuesFromIni(xIniFile* ini)
{
	int32 i;
	int8 lower[64];
	int8 upper[64];
	int8 normal[64];
	int8 upgradeTok[64];
	int8* iniString;
	int32 idx;
	uint32 count;
	uint32 values[2];
	uint32 i;
	uint32 sceneID;
	int8* start;
	uint8 foundSpace;
	int8 strValue[64];
	// Line 600, Address: 0x303910, Func Offset: 0
	// Line 604, Address: 0x303940, Func Offset: 0x30
	// Line 606, Address: 0x30394c, Func Offset: 0x3c
	// Line 607, Address: 0x303960, Func Offset: 0x50
	// Line 608, Address: 0x303974, Func Offset: 0x64
	// Line 610, Address: 0x303988, Func Offset: 0x78
	// Line 611, Address: 0x30399c, Func Offset: 0x8c
	// Line 612, Address: 0x3039b0, Func Offset: 0xa0
	// Line 613, Address: 0x3039c4, Func Offset: 0xb4
	// Line 615, Address: 0x3039d4, Func Offset: 0xc4
	// Line 616, Address: 0x303a24, Func Offset: 0x114
	// Line 615, Address: 0x303a2c, Func Offset: 0x11c
	// Line 616, Address: 0x303a30, Func Offset: 0x120
	// Line 617, Address: 0x303a78, Func Offset: 0x168
	// Line 616, Address: 0x303a80, Func Offset: 0x170
	// Line 617, Address: 0x303a84, Func Offset: 0x174
	// Line 618, Address: 0x303acc, Func Offset: 0x1bc
	// Line 617, Address: 0x303ad4, Func Offset: 0x1c4
	// Line 618, Address: 0x303ad8, Func Offset: 0x1c8
	// Line 619, Address: 0x303b20, Func Offset: 0x210
	// Line 618, Address: 0x303b28, Func Offset: 0x218
	// Line 619, Address: 0x303b2c, Func Offset: 0x21c
	// Line 621, Address: 0x303b74, Func Offset: 0x264
	// Line 619, Address: 0x303b7c, Func Offset: 0x26c
	// Line 621, Address: 0x303b80, Func Offset: 0x270
	// Line 623, Address: 0x303bc8, Func Offset: 0x2b8
	// Line 621, Address: 0x303bd0, Func Offset: 0x2c0
	// Line 623, Address: 0x303bd4, Func Offset: 0x2c4
	// Line 624, Address: 0x303c1c, Func Offset: 0x30c
	// Line 623, Address: 0x303c24, Func Offset: 0x314
	// Line 624, Address: 0x303c28, Func Offset: 0x318
	// Line 625, Address: 0x303c70, Func Offset: 0x360
	// Line 624, Address: 0x303c78, Func Offset: 0x368
	// Line 625, Address: 0x303c7c, Func Offset: 0x36c
	// Line 627, Address: 0x303cc4, Func Offset: 0x3b4
	// Line 625, Address: 0x303ccc, Func Offset: 0x3bc
	// Line 627, Address: 0x303cd0, Func Offset: 0x3c0
	// Line 628, Address: 0x303d18, Func Offset: 0x408
	// Line 627, Address: 0x303d20, Func Offset: 0x410
	// Line 628, Address: 0x303d24, Func Offset: 0x414
	// Line 629, Address: 0x303d6c, Func Offset: 0x45c
	// Line 628, Address: 0x303d74, Func Offset: 0x464
	// Line 629, Address: 0x303d78, Func Offset: 0x468
	// Line 631, Address: 0x303dc0, Func Offset: 0x4b0
	// Line 629, Address: 0x303dc8, Func Offset: 0x4b8
	// Line 631, Address: 0x303dcc, Func Offset: 0x4bc
	// Line 632, Address: 0x303e14, Func Offset: 0x504
	// Line 631, Address: 0x303e1c, Func Offset: 0x50c
	// Line 632, Address: 0x303e20, Func Offset: 0x510
	// Line 633, Address: 0x303e68, Func Offset: 0x558
	// Line 632, Address: 0x303e70, Func Offset: 0x560
	// Line 633, Address: 0x303e74, Func Offset: 0x564
	// Line 635, Address: 0x303ebc, Func Offset: 0x5ac
	// Line 633, Address: 0x303ec4, Func Offset: 0x5b4
	// Line 635, Address: 0x303ec8, Func Offset: 0x5b8
	// Line 636, Address: 0x303f10, Func Offset: 0x600
	// Line 635, Address: 0x303f18, Func Offset: 0x608
	// Line 636, Address: 0x303f1c, Func Offset: 0x60c
	// Line 637, Address: 0x303f64, Func Offset: 0x654
	// Line 636, Address: 0x303f6c, Func Offset: 0x65c
	// Line 637, Address: 0x303f70, Func Offset: 0x660
	// Line 639, Address: 0x303fb8, Func Offset: 0x6a8
	// Line 637, Address: 0x303fc0, Func Offset: 0x6b0
	// Line 639, Address: 0x303fc4, Func Offset: 0x6b4
	// Line 640, Address: 0x30400c, Func Offset: 0x6fc
	// Line 639, Address: 0x304014, Func Offset: 0x704
	// Line 640, Address: 0x304018, Func Offset: 0x708
	// Line 641, Address: 0x304060, Func Offset: 0x750
	// Line 640, Address: 0x304068, Func Offset: 0x758
	// Line 641, Address: 0x30406c, Func Offset: 0x75c
	// Line 643, Address: 0x3040b4, Func Offset: 0x7a4
	// Line 641, Address: 0x3040bc, Func Offset: 0x7ac
	// Line 643, Address: 0x3040c0, Func Offset: 0x7b0
	// Line 644, Address: 0x304108, Func Offset: 0x7f8
	// Line 643, Address: 0x304110, Func Offset: 0x800
	// Line 644, Address: 0x304114, Func Offset: 0x804
	// Line 645, Address: 0x30415c, Func Offset: 0x84c
	// Line 644, Address: 0x304164, Func Offset: 0x854
	// Line 645, Address: 0x304168, Func Offset: 0x858
	// Line 647, Address: 0x3041b0, Func Offset: 0x8a0
	// Line 645, Address: 0x3041b8, Func Offset: 0x8a8
	// Line 647, Address: 0x3041bc, Func Offset: 0x8ac
	// Line 648, Address: 0x304204, Func Offset: 0x8f4
	// Line 647, Address: 0x30420c, Func Offset: 0x8fc
	// Line 648, Address: 0x304210, Func Offset: 0x900
	// Line 649, Address: 0x304258, Func Offset: 0x948
	// Line 648, Address: 0x304260, Func Offset: 0x950
	// Line 649, Address: 0x304264, Func Offset: 0x954
	// Line 651, Address: 0x3042ac, Func Offset: 0x99c
	// Line 649, Address: 0x3042b4, Func Offset: 0x9a4
	// Line 651, Address: 0x3042b8, Func Offset: 0x9a8
	// Line 652, Address: 0x304300, Func Offset: 0x9f0
	// Line 651, Address: 0x304308, Func Offset: 0x9f8
	// Line 652, Address: 0x30430c, Func Offset: 0x9fc
	// Line 653, Address: 0x304354, Func Offset: 0xa44
	// Line 652, Address: 0x30435c, Func Offset: 0xa4c
	// Line 653, Address: 0x304360, Func Offset: 0xa50
	// Line 654, Address: 0x3043a8, Func Offset: 0xa98
	// Line 653, Address: 0x3043b0, Func Offset: 0xaa0
	// Line 654, Address: 0x3043b4, Func Offset: 0xaa4
	// Line 655, Address: 0x3043fc, Func Offset: 0xaec
	// Line 654, Address: 0x304404, Func Offset: 0xaf4
	// Line 655, Address: 0x304408, Func Offset: 0xaf8
	// Line 656, Address: 0x304450, Func Offset: 0xb40
	// Line 655, Address: 0x304458, Func Offset: 0xb48
	// Line 656, Address: 0x30445c, Func Offset: 0xb4c
	// Line 657, Address: 0x3044a4, Func Offset: 0xb94
	// Line 656, Address: 0x3044ac, Func Offset: 0xb9c
	// Line 657, Address: 0x3044b0, Func Offset: 0xba0
	// Line 659, Address: 0x3044f8, Func Offset: 0xbe8
	// Line 657, Address: 0x304500, Func Offset: 0xbf0
	// Line 659, Address: 0x304504, Func Offset: 0xbf4
	// Line 661, Address: 0x30454c, Func Offset: 0xc3c
	// Line 659, Address: 0x304554, Func Offset: 0xc44
	// Line 661, Address: 0x304558, Func Offset: 0xc48
	// Line 662, Address: 0x3045a0, Func Offset: 0xc90
	// Line 661, Address: 0x3045a8, Func Offset: 0xc98
	// Line 662, Address: 0x3045ac, Func Offset: 0xc9c
	// Line 663, Address: 0x3045f4, Func Offset: 0xce4
	// Line 662, Address: 0x3045fc, Func Offset: 0xcec
	// Line 663, Address: 0x304600, Func Offset: 0xcf0
	// Line 666, Address: 0x304648, Func Offset: 0xd38
	// Line 663, Address: 0x304650, Func Offset: 0xd40
	// Line 666, Address: 0x304654, Func Offset: 0xd44
	// Line 667, Address: 0x304660, Func Offset: 0xd50
	// Line 670, Address: 0x304670, Func Offset: 0xd60
	// Line 671, Address: 0x304684, Func Offset: 0xd74
	// Line 672, Address: 0x304694, Func Offset: 0xd84
	// Line 674, Address: 0x30469c, Func Offset: 0xd8c
	// Line 676, Address: 0x3046ac, Func Offset: 0xd9c
	// Line 674, Address: 0x3046b8, Func Offset: 0xda8
	// Line 676, Address: 0x3046bc, Func Offset: 0xdac
	// Line 686, Address: 0x3046c4, Func Offset: 0xdb4
	// Line 684, Address: 0x3046dc, Func Offset: 0xdcc
	// Line 686, Address: 0x3046e0, Func Offset: 0xdd0
	// Line 745, Address: 0x3046f8, Func Offset: 0xde8
	// Line 693, Address: 0x30472c, Func Offset: 0xe1c
	// Line 745, Address: 0x304730, Func Offset: 0xe20
	// Line 696, Address: 0x304740, Func Offset: 0xe30
	// Line 745, Address: 0x304744, Func Offset: 0xe34
	// Line 697, Address: 0x304768, Func Offset: 0xe58
	// Line 745, Address: 0x30476c, Func Offset: 0xe5c
	// Line 697, Address: 0x304778, Func Offset: 0xe68
	// Line 745, Address: 0x30477c, Func Offset: 0xe6c
	// Line 699, Address: 0x30478c, Func Offset: 0xe7c
	// Line 745, Address: 0x304794, Func Offset: 0xe84
	// Line 700, Address: 0x30479c, Func Offset: 0xe8c
	// Line 745, Address: 0x3047a0, Func Offset: 0xe90
	// Line 700, Address: 0x3047a4, Func Offset: 0xe94
	// Line 745, Address: 0x3047a8, Func Offset: 0xe98
	// Line 709, Address: 0x3047c8, Func Offset: 0xeb8
	// Line 703, Address: 0x3047cc, Func Offset: 0xebc
	// Line 745, Address: 0x3047d0, Func Offset: 0xec0
	// Line 706, Address: 0x3047e4, Func Offset: 0xed4
	// Line 745, Address: 0x3047e8, Func Offset: 0xed8
	// Line 708, Address: 0x3047f0, Func Offset: 0xee0
	// Line 709, Address: 0x3047f4, Func Offset: 0xee4
	// Line 745, Address: 0x3047f8, Func Offset: 0xee8
	// Line 715, Address: 0x30482c, Func Offset: 0xf1c
	// Line 745, Address: 0x304830, Func Offset: 0xf20
	// Line 718, Address: 0x304840, Func Offset: 0xf30
	// Line 745, Address: 0x304844, Func Offset: 0xf34
	// Line 729, Address: 0x30485c, Func Offset: 0xf4c
	// Line 745, Address: 0x304860, Func Offset: 0xf50
	// Line 742, Address: 0x304884, Func Offset: 0xf74
	// Line 745, Address: 0x304888, Func Offset: 0xf78
	// Line 744, Address: 0x304890, Func Offset: 0xf80
	// Line 745, Address: 0x304894, Func Offset: 0xf84
	// Line 723, Address: 0x3048c4, Func Offset: 0xfb4
	// Line 745, Address: 0x3048c8, Func Offset: 0xfb8
	// Line 746, Address: 0x304908, Func Offset: 0xff8
	// Func End, Address: 0x304938, Func Offset: 0x1028
}

// IncManlinessPoints__11zRewardsMgrFUib
// Start address: 0x304940
void zRewardsMgr::IncManlinessPoints(uint32 points, uint8 set)
{
	uint32 currentRange;
	// Line 543, Address: 0x304940, Func Offset: 0
	// Line 545, Address: 0x304950, Func Offset: 0x10
	// Line 560, Address: 0x304958, Func Offset: 0x18
	// Line 565, Address: 0x304978, Func Offset: 0x38
	// Line 566, Address: 0x30497c, Func Offset: 0x3c
	// Line 565, Address: 0x304980, Func Offset: 0x40
	// Line 566, Address: 0x304984, Func Offset: 0x44
	// Line 568, Address: 0x3049a8, Func Offset: 0x68
	// Line 570, Address: 0x3049bc, Func Offset: 0x7c
	// Line 576, Address: 0x3049c4, Func Offset: 0x84
	// Line 580, Address: 0x3049d4, Func Offset: 0x94
	// Line 581, Address: 0x3049e8, Func Offset: 0xa8
	// Line 582, Address: 0x3049f0, Func Offset: 0xb0
	// Line 584, Address: 0x304a18, Func Offset: 0xd8
	// Line 588, Address: 0x304a20, Func Offset: 0xe0
	// Line 593, Address: 0x304a30, Func Offset: 0xf0
	// Line 597, Address: 0x304a4c, Func Offset: 0x10c
	// Line 547, Address: 0x304a64, Func Offset: 0x124
	// Line 597, Address: 0x304a68, Func Offset: 0x128
	// Line 557, Address: 0x304a90, Func Offset: 0x150
	// Line 597, Address: 0x304a98, Func Offset: 0x158
	// Line 595, Address: 0x304ac0, Func Offset: 0x180
	// Line 597, Address: 0x304acc, Func Offset: 0x18c
	// Func End, Address: 0x304adc, Func Offset: 0x19c
}

// GetUpgradeRangeUpper__11zRewardsMgrCFv
// Start address: 0x304ae0
uint32 GetUpgradeRangeUpper()
{
	// Line 491, Address: 0x304ae0, Func Offset: 0
	// Line 495, Address: 0x304ae8, Func Offset: 0x8
	// Line 498, Address: 0x304b10, Func Offset: 0x30
	// Func End, Address: 0x304b18, Func Offset: 0x38
}

// GetUpgradeRangeLower__11zRewardsMgrCFv
// Start address: 0x304b20
uint32 GetUpgradeRangeLower()
{
	// Line 480, Address: 0x304b20, Func Offset: 0
	// Line 484, Address: 0x304b28, Func Offset: 0x8
	// Line 488, Address: 0x304b48, Func Offset: 0x28
	// Func End, Address: 0x304b50, Func Offset: 0x30
}

// ResetLastComboIndex__11zRewardsMgrFv
// Start address: 0x304b50
void zRewardsMgr::ResetLastComboIndex()
{
	// Line 477, Address: 0x304b50, Func Offset: 0
	// Func End, Address: 0x304b58, Func Offset: 0x8
}

// GetLastComboIndex__11zRewardsMgrCFv
// Start address: 0x304b60
uint32 zRewardsMgr::GetLastComboIndex()
{
	// Line 471, Address: 0x304b60, Func Offset: 0
	// Func End, Address: 0x304b68, Func Offset: 0x8
}

// ResetLastComboManlinessPoints__11zRewardsMgrFv
// Start address: 0x304b70
void zRewardsMgr::ResetLastComboManlinessPoints()
{
	// Line 465, Address: 0x304b70, Func Offset: 0
	// Func End, Address: 0x304b78, Func Offset: 0x8
}

// GetLastComboManlinessPoints__11zRewardsMgrCFv
// Start address: 0x304b80
uint32 zRewardsMgr::GetLastComboManlinessPoints()
{
	// Line 459, Address: 0x304b80, Func Offset: 0
	// Func End, Address: 0x304b88, Func Offset: 0x8
}

// SpawnRewards__11zRewardsMgrFiRC5xVec3
// Start address: 0x304b90
void zRewardsMgr::SpawnRewards(int32 numRewards, xVec3& fromPos)
{
	int32 i;
	int32 j;
	int32 numPickupsToSpawn;
	int32 manlinessOfEachType[5];
	zEntPickup* p;
	// Line 364, Address: 0x304b90, Func Offset: 0
	// Line 365, Address: 0x304bbc, Func Offset: 0x2c
	// Line 377, Address: 0x304bc4, Func Offset: 0x34
	// Line 381, Address: 0x304bd4, Func Offset: 0x44
	// Line 383, Address: 0x304c10, Func Offset: 0x80
	// Line 390, Address: 0x304c1c, Func Offset: 0x8c
	// Line 397, Address: 0x304c24, Func Offset: 0x94
	// Line 404, Address: 0x304c30, Func Offset: 0xa0
	// Line 411, Address: 0x304c38, Func Offset: 0xa8
	// Line 414, Address: 0x304c40, Func Offset: 0xb0
	// Line 413, Address: 0x304c44, Func Offset: 0xb4
	// Line 414, Address: 0x304c48, Func Offset: 0xb8
	// Line 420, Address: 0x304c50, Func Offset: 0xc0
	// Line 422, Address: 0x304c58, Func Offset: 0xc8
	// Line 424, Address: 0x304c60, Func Offset: 0xd0
	// Line 444, Address: 0x304c68, Func Offset: 0xd8
	// Line 430, Address: 0x304c90, Func Offset: 0x100
	// Line 444, Address: 0x304c94, Func Offset: 0x104
	// Line 435, Address: 0x304cc0, Func Offset: 0x130
	// Line 444, Address: 0x304cc4, Func Offset: 0x134
	// Line 436, Address: 0x304ccc, Func Offset: 0x13c
	// Line 444, Address: 0x304cd0, Func Offset: 0x140
	// Line 387, Address: 0x304d1c, Func Offset: 0x18c
	// Line 444, Address: 0x304d28, Func Offset: 0x198
	// Line 394, Address: 0x304d34, Func Offset: 0x1a4
	// Line 444, Address: 0x304d40, Func Offset: 0x1b0
	// Line 401, Address: 0x304d4c, Func Offset: 0x1bc
	// Line 444, Address: 0x304d58, Func Offset: 0x1c8
	// Line 408, Address: 0x304d64, Func Offset: 0x1d4
	// Line 445, Address: 0x304d70, Func Offset: 0x1e0
	// Line 444, Address: 0x304d78, Func Offset: 0x1e8
	// Line 445, Address: 0x304d7c, Func Offset: 0x1ec
	// Line 446, Address: 0x304d84, Func Offset: 0x1f4
	// Func End, Address: 0x304dac, Func Offset: 0x21c
}

// Update__11zRewardsMgrFf
// Start address: 0x304db0
void zRewardsMgr::Update(float32 dt)
{
	int32 i;
	int32 j;
	// Line 297, Address: 0x304db0, Func Offset: 0
	// Line 300, Address: 0x304dd0, Func Offset: 0x20
	// Line 305, Address: 0x304ddc, Func Offset: 0x2c
	// Line 311, Address: 0x304df4, Func Offset: 0x44
	// Line 313, Address: 0x304e0c, Func Offset: 0x5c
	// Line 315, Address: 0x304e14, Func Offset: 0x64
	// Line 317, Address: 0x304e20, Func Offset: 0x70
	// Line 319, Address: 0x304e44, Func Offset: 0x94
	// Line 320, Address: 0x304e54, Func Offset: 0xa4
	// Line 321, Address: 0x304e78, Func Offset: 0xc8
	// Line 322, Address: 0x304e80, Func Offset: 0xd0
	// Line 324, Address: 0x304e88, Func Offset: 0xd8
	// Line 325, Address: 0x304e98, Func Offset: 0xe8
	// Line 328, Address: 0x304ea8, Func Offset: 0xf8
	// Line 330, Address: 0x304ec0, Func Offset: 0x110
	// Line 333, Address: 0x304ec4, Func Offset: 0x114
	// Line 350, Address: 0x304ed0, Func Offset: 0x120
	// Line 352, Address: 0x304ed8, Func Offset: 0x128
	// Line 354, Address: 0x304ef0, Func Offset: 0x140
	// Line 352, Address: 0x304ef4, Func Offset: 0x144
	// Line 354, Address: 0x304f00, Func Offset: 0x150
	// Line 356, Address: 0x304f0c, Func Offset: 0x15c
	// Line 358, Address: 0x304f14, Func Offset: 0x164
	// Line 360, Address: 0x304f24, Func Offset: 0x174
	// Line 361, Address: 0x304f28, Func Offset: 0x178
	// Line 307, Address: 0x304f30, Func Offset: 0x180
	// Line 361, Address: 0x304f3c, Func Offset: 0x18c
	// Line 336, Address: 0x304f48, Func Offset: 0x198
	// Line 361, Address: 0x304f4c, Func Offset: 0x19c
	// Line 337, Address: 0x304f58, Func Offset: 0x1a8
	// Line 361, Address: 0x304f5c, Func Offset: 0x1ac
	// Func End, Address: 0x304f8c, Func Offset: 0x1dc
}

// GetComboManlinessPoints__11zRewardsMgrFv
// Start address: 0x304f90
uint32 zRewardsMgr::GetComboManlinessPoints()
{
	int32 comboIndex;
	// Line 253, Address: 0x304f90, Func Offset: 0
	// Line 256, Address: 0x304fa8, Func Offset: 0x18
	// Line 258, Address: 0x304fb4, Func Offset: 0x24
	// Line 264, Address: 0x304fc0, Func Offset: 0x30
	// Line 275, Address: 0x304fcc, Func Offset: 0x3c
	// Line 276, Address: 0x305024, Func Offset: 0x94
	// Line 278, Address: 0x30507c, Func Offset: 0xec
	// Line 280, Address: 0x305094, Func Offset: 0x104
	// Line 283, Address: 0x3050ac, Func Offset: 0x11c
	// Line 290, Address: 0x3050b4, Func Offset: 0x124
	// Line 260, Address: 0x3050dc, Func Offset: 0x14c
	// Line 266, Address: 0x3050e4, Func Offset: 0x154
	// Line 285, Address: 0x3050f0, Func Offset: 0x160
	// Line 290, Address: 0x3050f4, Func Offset: 0x164
	// Line 294, Address: 0x305104, Func Offset: 0x174
	// Func End, Address: 0x30510c, Func Offset: 0x17c
}

// GiveReward__11zRewardsMgrF9en_npctypRC5xVec3
// Start address: 0x305110
void zRewardsMgr::GiveReward(en_npctyp enemy, xVec3& fromPos)
{
	int32 i;
	// Line 216, Address: 0x305110, Func Offset: 0
	// Line 219, Address: 0x305118, Func Offset: 0x8
	// Line 230, Address: 0x305128, Func Offset: 0x18
	// Line 233, Address: 0x305134, Func Offset: 0x24
	// Line 230, Address: 0x305138, Func Offset: 0x28
	// Line 232, Address: 0x30513c, Func Offset: 0x2c
	// Line 233, Address: 0x305144, Func Offset: 0x34
	// Line 232, Address: 0x305148, Func Offset: 0x38
	// Line 233, Address: 0x30514c, Func Offset: 0x3c
	// Line 232, Address: 0x305150, Func Offset: 0x40
	// Line 233, Address: 0x305154, Func Offset: 0x44
	// Line 245, Address: 0x305200, Func Offset: 0xf0
	// Line 233, Address: 0x305204, Func Offset: 0xf4
	// Line 234, Address: 0x305228, Func Offset: 0x118
	// Line 233, Address: 0x30522c, Func Offset: 0x11c
	// Line 234, Address: 0x305230, Func Offset: 0x120
	// Line 233, Address: 0x305234, Func Offset: 0x124
	// Line 234, Address: 0x305238, Func Offset: 0x128
	// Line 235, Address: 0x30523c, Func Offset: 0x12c
	// Line 234, Address: 0x305240, Func Offset: 0x130
	// Line 235, Address: 0x30524c, Func Offset: 0x13c
	// Line 241, Address: 0x30525c, Func Offset: 0x14c
	// Line 244, Address: 0x3052a0, Func Offset: 0x190
	// Line 245, Address: 0x3052b0, Func Offset: 0x1a0
	// Line 222, Address: 0x3052c4, Func Offset: 0x1b4
	// Line 245, Address: 0x3052c8, Func Offset: 0x1b8
	// Line 222, Address: 0x3052dc, Func Offset: 0x1cc
	// Line 245, Address: 0x3052e0, Func Offset: 0x1d0
	// Line 222, Address: 0x3052ec, Func Offset: 0x1dc
	// Line 245, Address: 0x3052f0, Func Offset: 0x1e0
	// Line 222, Address: 0x3052f4, Func Offset: 0x1e4
	// Line 245, Address: 0x3052fc, Func Offset: 0x1ec
	// Line 222, Address: 0x30530c, Func Offset: 0x1fc
	// Line 245, Address: 0x305310, Func Offset: 0x200
	// Line 222, Address: 0x305314, Func Offset: 0x204
	// Line 245, Address: 0x305318, Func Offset: 0x208
	// Line 222, Address: 0x305328, Func Offset: 0x218
	// Line 245, Address: 0x30532c, Func Offset: 0x21c
	// Line 222, Address: 0x305338, Func Offset: 0x228
	// Line 245, Address: 0x30533c, Func Offset: 0x22c
	// Line 222, Address: 0x305340, Func Offset: 0x230
	// Line 245, Address: 0x305348, Func Offset: 0x238
	// Line 222, Address: 0x305358, Func Offset: 0x248
	// Line 245, Address: 0x305360, Func Offset: 0x250
	// Line 222, Address: 0x30536c, Func Offset: 0x25c
	// Line 245, Address: 0x305370, Func Offset: 0x260
	// Line 222, Address: 0x305384, Func Offset: 0x274
	// Line 245, Address: 0x305388, Func Offset: 0x278
	// Line 222, Address: 0x30539c, Func Offset: 0x28c
	// Line 245, Address: 0x3053a0, Func Offset: 0x290
	// Line 223, Address: 0x3053a8, Func Offset: 0x298
	// Line 245, Address: 0x3053b0, Func Offset: 0x2a0
	// Line 222, Address: 0x3053c4, Func Offset: 0x2b4
	// Line 245, Address: 0x3053c8, Func Offset: 0x2b8
	// Line 222, Address: 0x3053d0, Func Offset: 0x2c0
	// Line 245, Address: 0x3053d8, Func Offset: 0x2c8
	// Line 222, Address: 0x3053ec, Func Offset: 0x2dc
	// Line 245, Address: 0x3053f0, Func Offset: 0x2e0
	// Line 222, Address: 0x3053f8, Func Offset: 0x2e8
	// Line 245, Address: 0x305400, Func Offset: 0x2f0
	// Line 222, Address: 0x305404, Func Offset: 0x2f4
	// Line 245, Address: 0x305408, Func Offset: 0x2f8
	// Line 222, Address: 0x305410, Func Offset: 0x300
	// Line 245, Address: 0x305418, Func Offset: 0x308
	// Line 233, Address: 0x30542c, Func Offset: 0x31c
	// Line 245, Address: 0x305430, Func Offset: 0x320
	// Line 233, Address: 0x305438, Func Offset: 0x328
	// Line 245, Address: 0x305440, Func Offset: 0x330
	// Line 233, Address: 0x305454, Func Offset: 0x344
	// Line 245, Address: 0x305458, Func Offset: 0x348
	// Line 233, Address: 0x305460, Func Offset: 0x350
	// Line 245, Address: 0x305468, Func Offset: 0x358
	// Line 233, Address: 0x30546c, Func Offset: 0x35c
	// Line 245, Address: 0x305470, Func Offset: 0x360
	// Line 233, Address: 0x305478, Func Offset: 0x368
	// Line 245, Address: 0x305480, Func Offset: 0x370
	// Line 242, Address: 0x305490, Func Offset: 0x380
	// Line 245, Address: 0x305498, Func Offset: 0x388
	// Func End, Address: 0x3054a4, Func Offset: 0x394
}

// zRewardsMgrStartup__Fv
// Start address: 0x3054b0
void zRewardsMgrStartup()
{
	int8 @12711;
	zRewardsMgr rewardsMgr;
	// Line 99, Address: 0x3054b0, Func Offset: 0
	// Line 101, Address: 0x3054b8, Func Offset: 0x8
	// Line 102, Address: 0x3054c4, Func Offset: 0x14
	// Line 103, Address: 0x3054d4, Func Offset: 0x24
	// Line 104, Address: 0x3054dc, Func Offset: 0x2c
	// Line 101, Address: 0x305510, Func Offset: 0x60
	// Line 104, Address: 0x305514, Func Offset: 0x64
	// Line 101, Address: 0x305520, Func Offset: 0x70
	// Line 104, Address: 0x305524, Func Offset: 0x74
	// Line 101, Address: 0x305528, Func Offset: 0x78
	// Line 104, Address: 0x30552c, Func Offset: 0x7c
	// Line 101, Address: 0x30553c, Func Offset: 0x8c
	// Line 104, Address: 0x305548, Func Offset: 0x98
	// Func End, Address: 0x305554, Func Offset: 0xa4
}

