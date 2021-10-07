



uint8 HandleEvent(xBase* from, uint32 toEvent, float32* toParam, xBase* toParamWidget, uint32 toParamWidgetID);
void* __ct(zUI* ui);
uint8 HandleEvent(xBase* from, uint32 toEvent, float32* toParam, xBase* toParamWidget, uint32 toParamWidgetID);
void* __ct(zUI* ui);
uint8 HandleEvent(xBase* from, uint32 toEvent, float32* toParam, xBase* toParamWidget, uint32 toParamWidgetID);
void PreUpdate();
void Reset();
void* __ct(zUI* ui);
void Update(float32 dt);
void Start(xVec3& start, xVec3& end, float32 timeForEffect, float32 randomYMultiplier, float32 speedMultiplier, float32 probabilityToSpawn);
void PlayUpgradeFMV(int32 powerupIdx);
uint8 HandleEvent(xBase* from, uint32 toEvent, float32* toParam, xBase* toParamWidget, uint32 toParamWidgetID);
void* __ct(zUI* ui);
void InitScreen();
uint8 HandleEvent(xBase* from, uint32 toEvent, float32* toParam, xBase* toParamWidget, uint32 toParamWidgetID);
void EnterScreen();
void InitScreen();
uint8 HandleEvent(xBase* from, uint32 toEvent, float32* toParam, xBase* toParamWidget, uint32 toParamWidgetID);
uint8 HandleEvent(xBase* from, uint32 toEvent, float32* toParam, xBase* toParamWidget, uint32 toParamWidgetID);
void PostUpdate();
void PreUpdate();
void PostInitMotion();
void ResetMotion();
void InitModel(zUIModel* model, zUIModel* placeholder, float32 globalOffsetX, float32 globalOffsetY);
void* __ct(zUI* ui);
void PostUpdate(float32 dt);
uint8 HandleEvent(xBase* from, uint32 toEvent, float32* toParam, xBase* toParamWidget, uint32 toParamWidgetID);
void SelectCurrentIcon();
void UpdateText();
void MoveSelection(uint8 row, uint8 column, uint8 playSound);
void EnterScreen();
void InitScreen();
void* __ct(zUI* ui);
void InitExtrasList(xIniFile* ini);
void ResetExtrasStatus();
void ClearAllButThisCostume(uint32 index);
uint32 GivePlayerTreasureChest(uint32 numChests);
uint32 IsCheatEnabled(eExtrasScreenCheats cheat);
uint32 IsCostumeEnabled(eSNDCurrentPlayer player);
uint8 GetNumChestsNeeded();
uint32 zMenuSB_IsTaskUnlocked(uint32 sceneID, uint32 taskID);
void zMenuSB_UnlockAllTasks();
void zMenuSB_LoadTaskDefaults();
void zMenuSB_InitTaskDefaults(xIniFile* ini);
void zMenuSB_LoadMenuCounters(xSerial* s);
void zMenuSB_SaveMenuCounters(xSerial* s);
uint8 zMenuSB_EnsureFreeAudioStream(uint8 willingToStopMainGameMusic);
void zMenuSB_UpdatePowerUpMenu();
void zMenuSB_InitPowerUpMenu();

// HandleEvent__22zUICustomPalRedirectorFP5xBaseUiPCfP5xBaseUi
// Start address: 0x2c02d0
uint8 zUICustomPalRedirector::HandleEvent(xBase* from, uint32 toEvent, float32* toParam, xBase* toParamWidget, uint32 toParamWidgetID)
{
	zUI* palUI;
	// Line 1982, Address: 0x2c02d0, Func Offset: 0
	// Line 1983, Address: 0x2c02d4, Func Offset: 0x4
	// Line 1982, Address: 0x2c02d8, Func Offset: 0x8
	// Line 1983, Address: 0x2c0304, Func Offset: 0x34
	// Line 1988, Address: 0x2c0310, Func Offset: 0x40
	// Line 1992, Address: 0x2c0324, Func Offset: 0x54
	// Line 1993, Address: 0x2c0378, Func Offset: 0xa8
	// Line 1996, Address: 0x2c0380, Func Offset: 0xb0
	// Line 1997, Address: 0x2c0388, Func Offset: 0xb8
	// Func End, Address: 0x2c03ac, Func Offset: 0xdc
}

// __ct__22zUICustomPalRedirectorFP3zUI
// Start address: 0x2c03b0
void* zUICustomPalRedirector::__ct(zUI* ui)
{
	// Line 1977, Address: 0x2c03b0, Func Offset: 0
	// Line 1979, Address: 0x2c03c8, Func Offset: 0x18
	// Func End, Address: 0x2c03d4, Func Offset: 0x24
}

// HandleEvent__21zUICustomDialogPlayerFP5xBaseUiPCfP5xBaseUi
// Start address: 0x2c03e0
uint8 zUICustomDialogPlayer::HandleEvent(xBase* from, uint32 toEvent, float32* toParam, xBase* toParamWidget, uint32 toParamWidgetID)
{
	// Line 1929, Address: 0x2c03e0, Func Offset: 0
	// Line 1930, Address: 0x2c03e4, Func Offset: 0x4
	// Line 1929, Address: 0x2c03e8, Func Offset: 0x8
	// Line 1930, Address: 0x2c03f0, Func Offset: 0x10
	// Line 1934, Address: 0x2c0418, Func Offset: 0x38
	// Line 1937, Address: 0x2c0420, Func Offset: 0x40
	// Line 1941, Address: 0x2c0430, Func Offset: 0x50
	// Line 1942, Address: 0x2c0448, Func Offset: 0x68
	// Line 1956, Address: 0x2c0454, Func Offset: 0x74
	// Line 1958, Address: 0x2c045c, Func Offset: 0x7c
	// Line 1959, Address: 0x2c047c, Func Offset: 0x9c
	// Line 1961, Address: 0x2c0480, Func Offset: 0xa0
	// Line 1963, Address: 0x2c0488, Func Offset: 0xa8
	// Line 1947, Address: 0x2c0498, Func Offset: 0xb8
	// Line 1963, Address: 0x2c049c, Func Offset: 0xbc
	// Line 1947, Address: 0x2c04ac, Func Offset: 0xcc
	// Line 1963, Address: 0x2c04b0, Func Offset: 0xd0
	// Line 1952, Address: 0x2c04b8, Func Offset: 0xd8
	// Line 1947, Address: 0x2c04c0, Func Offset: 0xe0
	// Line 1963, Address: 0x2c04c4, Func Offset: 0xe4
	// Line 1947, Address: 0x2c04cc, Func Offset: 0xec
	// Line 1963, Address: 0x2c04d0, Func Offset: 0xf0
	// Line 1947, Address: 0x2c04e0, Func Offset: 0x100
	// Line 1963, Address: 0x2c04e8, Func Offset: 0x108
	// Line 1947, Address: 0x2c04ec, Func Offset: 0x10c
	// Line 1963, Address: 0x2c04f0, Func Offset: 0x110
	// Line 1947, Address: 0x2c0510, Func Offset: 0x130
	// Line 1963, Address: 0x2c0514, Func Offset: 0x134
	// Line 1947, Address: 0x2c053c, Func Offset: 0x15c
	// Line 1963, Address: 0x2c0540, Func Offset: 0x160
	// Line 1949, Address: 0x2c0564, Func Offset: 0x184
	// Line 1963, Address: 0x2c0580, Func Offset: 0x1a0
	// Line 1965, Address: 0x2c0590, Func Offset: 0x1b0
	// Func End, Address: 0x2c05a0, Func Offset: 0x1c0
}

// __ct__21zUICustomDialogPlayerFP3zUI
// Start address: 0x2c05a0
void* zUICustomDialogPlayer::__ct(zUI* ui)
{
	// Line 1924, Address: 0x2c05a0, Func Offset: 0
	// Line 1926, Address: 0x2c05b8, Func Offset: 0x18
	// Func End, Address: 0x2c05c4, Func Offset: 0x24
}

// HandleEvent__33zUICustomUpgradeTutorialContollerFP5xBaseUiPCfP5xBaseUi
// Start address: 0x2c05d0
uint8 zUICustomUpgradeTutorialContoller::HandleEvent(xBase* from, uint32 toEvent, float32* toParam, xBase* toParamWidget, uint32 toParamWidgetID)
{
	ztalkbox* activeTalkbox;
	uint8 textBox;
	// Line 1853, Address: 0x2c05d0, Func Offset: 0
	// Line 1858, Address: 0x2c05d4, Func Offset: 0x4
	// Line 1853, Address: 0x2c05d8, Func Offset: 0x8
	// Line 1858, Address: 0x2c05e4, Func Offset: 0x14
	// Line 1861, Address: 0x2c0608, Func Offset: 0x38
	// Line 1862, Address: 0x2c0610, Func Offset: 0x40
	// Line 1861, Address: 0x2c0614, Func Offset: 0x44
	// Line 1862, Address: 0x2c0618, Func Offset: 0x48
	// Line 1868, Address: 0x2c062c, Func Offset: 0x5c
	// Line 1870, Address: 0x2c0638, Func Offset: 0x68
	// Line 1873, Address: 0x2c0640, Func Offset: 0x70
	// Line 1876, Address: 0x2c0648, Func Offset: 0x78
	// Line 1877, Address: 0x2c0650, Func Offset: 0x80
	// Line 1878, Address: 0x2c0658, Func Offset: 0x88
	// Line 1884, Address: 0x2c067c, Func Offset: 0xac
	// Line 1887, Address: 0x2c0690, Func Offset: 0xc0
	// Line 1888, Address: 0x2c0698, Func Offset: 0xc8
	// Line 1889, Address: 0x2c06a0, Func Offset: 0xd0
	// Line 1896, Address: 0x2c06c4, Func Offset: 0xf4
	// Line 1899, Address: 0x2c06d0, Func Offset: 0x100
	// Line 1901, Address: 0x2c06d8, Func Offset: 0x108
	// Line 1915, Address: 0x2c06f4, Func Offset: 0x124
	// Line 1916, Address: 0x2c0708, Func Offset: 0x138
	// Func End, Address: 0x2c071c, Func Offset: 0x14c
}

// PreUpdate__33zUICustomUpgradeTutorialContollerFf
// Start address: 0x2c0720
void zUICustomUpgradeTutorialContoller::PreUpdate()
{
	// Line 1837, Address: 0x2c0720, Func Offset: 0
	// Line 1838, Address: 0x2c0730, Func Offset: 0x10
	// Line 1840, Address: 0x2c0738, Func Offset: 0x18
	// Line 1842, Address: 0x2c0748, Func Offset: 0x28
	// Line 1844, Address: 0x2c0768, Func Offset: 0x48
	// Line 1850, Address: 0x2c0770, Func Offset: 0x50
	// Func End, Address: 0x2c0780, Func Offset: 0x60
}

// Reset__33zUICustomUpgradeTutorialContollerFv
// Start address: 0x2c0780
void zUICustomUpgradeTutorialContoller::Reset()
{
	// Line 1833, Address: 0x2c0780, Func Offset: 0
	// Line 1834, Address: 0x2c0788, Func Offset: 0x8
	// Func End, Address: 0x2c0790, Func Offset: 0x10
}

// __ct__33zUICustomUpgradeTutorialContollerFP3zUI
// Start address: 0x2c0790
void* zUICustomUpgradeTutorialContoller::__ct(zUI* ui)
{
	// Line 1824, Address: 0x2c0790, Func Offset: 0
	// Line 1828, Address: 0x2c0794, Func Offset: 0x4
	// Line 1824, Address: 0x2c0798, Func Offset: 0x8
	// Line 1826, Address: 0x2c07b0, Func Offset: 0x20
	// Line 1829, Address: 0x2c07b4, Func Offset: 0x24
	// Line 1827, Address: 0x2c07b8, Func Offset: 0x28
	// Line 1829, Address: 0x2c07c4, Func Offset: 0x34
	// Func End, Address: 0x2c07cc, Func Offset: 0x3c
}

// Update__20UpgradeSparkleEffectFf
// Start address: 0x2c07d0
void Update(float32 dt)
{
	RwCamera* currentCamera;
	RwMatrixTag* mat;
	xVec3 pos[2];
	xVec3 vel[2];
	int32 i;
	float32 scale;
	float32 fRand;
	// Line 1735, Address: 0x2c07d0, Func Offset: 0
	// Line 1736, Address: 0x2c0804, Func Offset: 0x34
	// Line 1738, Address: 0x2c0818, Func Offset: 0x48
	// Line 1741, Address: 0x2c0824, Func Offset: 0x54
	// Line 1747, Address: 0x2c083c, Func Offset: 0x6c
	// Line 1748, Address: 0x2c0844, Func Offset: 0x74
	// Line 1752, Address: 0x2c0854, Func Offset: 0x84
	// Line 1754, Address: 0x2c0978, Func Offset: 0x1a8
	// Line 1753, Address: 0x2c097c, Func Offset: 0x1ac
	// Line 1754, Address: 0x2c0980, Func Offset: 0x1b0
	// Line 1755, Address: 0x2c0984, Func Offset: 0x1b4
	// Line 1756, Address: 0x2c0988, Func Offset: 0x1b8
	// Line 1764, Address: 0x2c0990, Func Offset: 0x1c0
	// Line 1765, Address: 0x2c0998, Func Offset: 0x1c8
	// Line 1767, Address: 0x2c09a0, Func Offset: 0x1d0
	// Line 1768, Address: 0x2c09a4, Func Offset: 0x1d4
	// Line 1771, Address: 0x2c09ac, Func Offset: 0x1dc
	// Line 1779, Address: 0x2c09fc, Func Offset: 0x22c
	// Line 1782, Address: 0x2c0a24, Func Offset: 0x254
	// Line 1785, Address: 0x2c0a28, Func Offset: 0x258
	// Line 1782, Address: 0x2c0a34, Func Offset: 0x264
	// Line 1783, Address: 0x2c0a38, Func Offset: 0x268
	// Line 1784, Address: 0x2c0a40, Func Offset: 0x270
	// Line 1785, Address: 0x2c0a44, Func Offset: 0x274
	// Line 1793, Address: 0x2c0a50, Func Offset: 0x280
	// Line 1785, Address: 0x2c0a54, Func Offset: 0x284
	// Line 1793, Address: 0x2c0a5c, Func Offset: 0x28c
	// Line 1794, Address: 0x2c0a64, Func Offset: 0x294
	// Line 1793, Address: 0x2c0a6c, Func Offset: 0x29c
	// Line 1797, Address: 0x2c0a78, Func Offset: 0x2a8
	// Line 1793, Address: 0x2c0a7c, Func Offset: 0x2ac
	// Line 1797, Address: 0x2c0a80, Func Offset: 0x2b0
	// Line 1793, Address: 0x2c0a84, Func Offset: 0x2b4
	// Line 1794, Address: 0x2c0a90, Func Offset: 0x2c0
	// Line 1793, Address: 0x2c0a98, Func Offset: 0x2c8
	// Line 1800, Address: 0x2c0a9c, Func Offset: 0x2cc
	// Line 1794, Address: 0x2c0aa0, Func Offset: 0x2d0
	// Line 1797, Address: 0x2c0aa4, Func Offset: 0x2d4
	// Line 1794, Address: 0x2c0aa8, Func Offset: 0x2d8
	// Line 1785, Address: 0x2c0aac, Func Offset: 0x2dc
	// Line 1793, Address: 0x2c0ab0, Func Offset: 0x2e0
	// Line 1794, Address: 0x2c0ab4, Func Offset: 0x2e4
	// Line 1797, Address: 0x2c0abc, Func Offset: 0x2ec
	// Line 1794, Address: 0x2c0ac0, Func Offset: 0x2f0
	// Line 1797, Address: 0x2c0acc, Func Offset: 0x2fc
	// Line 1793, Address: 0x2c0ad0, Func Offset: 0x300
	// Line 1797, Address: 0x2c0ad4, Func Offset: 0x304
	// Line 1800, Address: 0x2c0ae0, Func Offset: 0x310
	// Line 1802, Address: 0x2c0ae4, Func Offset: 0x314
	// Line 1800, Address: 0x2c0ae8, Func Offset: 0x318
	// Line 1797, Address: 0x2c0af0, Func Offset: 0x320
	// Line 1800, Address: 0x2c0af8, Func Offset: 0x328
	// Line 1802, Address: 0x2c0afc, Func Offset: 0x32c
	// Line 1801, Address: 0x2c0b00, Func Offset: 0x330
	// Line 1800, Address: 0x2c0b04, Func Offset: 0x334
	// Line 1801, Address: 0x2c0b08, Func Offset: 0x338
	// Line 1802, Address: 0x2c0b0c, Func Offset: 0x33c
	// Line 1801, Address: 0x2c0b10, Func Offset: 0x340
	// Line 1802, Address: 0x2c0b18, Func Offset: 0x348
	// Line 1805, Address: 0x2c0b34, Func Offset: 0x364
	// Line 1806, Address: 0x2c0b78, Func Offset: 0x3a8
	// Line 1805, Address: 0x2c0b7c, Func Offset: 0x3ac
	// Line 1806, Address: 0x2c0b80, Func Offset: 0x3b0
	// Line 1805, Address: 0x2c0b88, Func Offset: 0x3b8
	// Line 1806, Address: 0x2c0b8c, Func Offset: 0x3bc
	// Line 1809, Address: 0x2c0bd0, Func Offset: 0x400
	// Line 1807, Address: 0x2c0bd8, Func Offset: 0x408
	// Line 1806, Address: 0x2c0bdc, Func Offset: 0x40c
	// Line 1815, Address: 0x2c0be0, Func Offset: 0x410
	// Line 1807, Address: 0x2c0be4, Func Offset: 0x414
	// Line 1814, Address: 0x2c0be8, Func Offset: 0x418
	// Line 1809, Address: 0x2c0bec, Func Offset: 0x41c
	// Line 1808, Address: 0x2c0bf0, Func Offset: 0x420
	// Line 1807, Address: 0x2c0bf4, Func Offset: 0x424
	// Line 1808, Address: 0x2c0bf8, Func Offset: 0x428
	// Line 1814, Address: 0x2c0bfc, Func Offset: 0x42c
	// Line 1807, Address: 0x2c0c00, Func Offset: 0x430
	// Line 1815, Address: 0x2c0c04, Func Offset: 0x434
	// Line 1809, Address: 0x2c0c08, Func Offset: 0x438
	// Line 1808, Address: 0x2c0c0c, Func Offset: 0x43c
	// Line 1809, Address: 0x2c0c14, Func Offset: 0x444
	// Line 1812, Address: 0x2c0c20, Func Offset: 0x450
	// Line 1809, Address: 0x2c0c24, Func Offset: 0x454
	// Line 1808, Address: 0x2c0c28, Func Offset: 0x458
	// Line 1809, Address: 0x2c0c2c, Func Offset: 0x45c
	// Line 1814, Address: 0x2c0c38, Func Offset: 0x468
	// Line 1809, Address: 0x2c0c3c, Func Offset: 0x46c
	// Line 1813, Address: 0x2c0c44, Func Offset: 0x474
	// Line 1812, Address: 0x2c0c48, Func Offset: 0x478
	// Line 1813, Address: 0x2c0c50, Func Offset: 0x480
	// Line 1812, Address: 0x2c0c58, Func Offset: 0x488
	// Line 1813, Address: 0x2c0c5c, Func Offset: 0x48c
	// Line 1814, Address: 0x2c0c60, Func Offset: 0x490
	// Line 1813, Address: 0x2c0c68, Func Offset: 0x498
	// Line 1814, Address: 0x2c0c6c, Func Offset: 0x49c
	// Line 1813, Address: 0x2c0c70, Func Offset: 0x4a0
	// Line 1812, Address: 0x2c0c74, Func Offset: 0x4a4
	// Line 1813, Address: 0x2c0c78, Func Offset: 0x4a8
	// Line 1815, Address: 0x2c0c8c, Func Offset: 0x4bc
	// Line 1818, Address: 0x2c0c94, Func Offset: 0x4c4
	// Line 1821, Address: 0x2c0ca4, Func Offset: 0x4d4
	// Line 1743, Address: 0x2c0cac, Func Offset: 0x4dc
	// Line 1821, Address: 0x2c0cb4, Func Offset: 0x4e4
	// Line 1761, Address: 0x2c0cb8, Func Offset: 0x4e8
	// Line 1752, Address: 0x2c0cc0, Func Offset: 0x4f0
	// Line 1821, Address: 0x2c0cc4, Func Offset: 0x4f4
	// Line 1752, Address: 0x2c0ccc, Func Offset: 0x4fc
	// Line 1821, Address: 0x2c0cd0, Func Offset: 0x500
	// Line 1752, Address: 0x2c0ce0, Func Offset: 0x510
	// Line 1821, Address: 0x2c0ce8, Func Offset: 0x518
	// Line 1752, Address: 0x2c0cec, Func Offset: 0x51c
	// Line 1821, Address: 0x2c0cf0, Func Offset: 0x520
	// Line 1752, Address: 0x2c0d10, Func Offset: 0x540
	// Line 1821, Address: 0x2c0d14, Func Offset: 0x544
	// Line 1752, Address: 0x2c0d3c, Func Offset: 0x56c
	// Line 1821, Address: 0x2c0d40, Func Offset: 0x570
	// Func End, Address: 0x2c0d9c, Func Offset: 0x5cc
}

// Start__20UpgradeSparkleEffectFR5xVec3R5xVec3ffff
// Start address: 0x2c0da0
void Start(xVec3& start, xVec3& end, float32 timeForEffect, float32 randomYMultiplier, float32 speedMultiplier, float32 probabilityToSpawn)
{
	// Line 1701, Address: 0x2c0da0, Func Offset: 0
	// Line 1702, Address: 0x2c0da4, Func Offset: 0x4
	// Line 1703, Address: 0x2c0da8, Func Offset: 0x8
	// Line 1704, Address: 0x2c0dc0, Func Offset: 0x20
	// Line 1708, Address: 0x2c0dc8, Func Offset: 0x28
	// Line 1703, Address: 0x2c0dcc, Func Offset: 0x2c
	// Line 1704, Address: 0x2c0dd0, Func Offset: 0x30
	// Line 1703, Address: 0x2c0dd4, Func Offset: 0x34
	// Line 1704, Address: 0x2c0ddc, Func Offset: 0x3c
	// Line 1708, Address: 0x2c0dec, Func Offset: 0x4c
	// Line 1704, Address: 0x2c0df0, Func Offset: 0x50
	// Line 1705, Address: 0x2c0df8, Func Offset: 0x58
	// Line 1706, Address: 0x2c0dfc, Func Offset: 0x5c
	// Line 1709, Address: 0x2c0e00, Func Offset: 0x60
	// Func End, Address: 0x2c0e08, Func Offset: 0x68
}

// PlayUpgradeFMV__20UpgradeSparkleEffectFi
// Start address: 0x2c0e10
void PlayUpgradeFMV(int32 powerupIdx)
{
	// Line 1688, Address: 0x2c0e10, Func Offset: 0
	// Line 1689, Address: 0x2c0e20, Func Offset: 0x10
	// Line 1693, Address: 0x2c0e38, Func Offset: 0x28
	// Line 1694, Address: 0x2c0e64, Func Offset: 0x54
	// Line 1695, Address: 0x2c0f18, Func Offset: 0x108
	// Line 1697, Address: 0x2c0f38, Func Offset: 0x128
	// Line 1695, Address: 0x2c0f40, Func Offset: 0x130
	// Line 1697, Address: 0x2c0f44, Func Offset: 0x134
	// Line 1695, Address: 0x2c0f4c, Func Offset: 0x13c
	// Line 1697, Address: 0x2c0f50, Func Offset: 0x140
	// Line 1695, Address: 0x2c0f60, Func Offset: 0x150
	// Line 1697, Address: 0x2c0f68, Func Offset: 0x158
	// Line 1695, Address: 0x2c0f6c, Func Offset: 0x15c
	// Line 1697, Address: 0x2c0f70, Func Offset: 0x160
	// Line 1695, Address: 0x2c0f90, Func Offset: 0x180
	// Line 1697, Address: 0x2c0f94, Func Offset: 0x184
	// Line 1695, Address: 0x2c0fbc, Func Offset: 0x1ac
	// Line 1697, Address: 0x2c0fc0, Func Offset: 0x1b0
	// Line 1696, Address: 0x2c0fe4, Func Offset: 0x1d4
	// Line 1697, Address: 0x2c0fe8, Func Offset: 0x1d8
	// Func End, Address: 0x2c1008, Func Offset: 0x1f8
}

// HandleEvent__20zUICustomLoadingTextFP5xBaseUiPCfP5xBaseUi
// Start address: 0x2c1010
uint8 zUICustomLoadingText::HandleEvent(xBase* from, uint32 toEvent, float32* toParam, xBase* toParamWidget, uint32 toParamWidgetID)
{
	int8* levelName;
	// Line 1618, Address: 0x2c1010, Func Offset: 0
	// Line 1619, Address: 0x2c1014, Func Offset: 0x4
	// Line 1618, Address: 0x2c1018, Func Offset: 0x8
	// Line 1619, Address: 0x2c1020, Func Offset: 0x10
	// Line 1620, Address: 0x2c1028, Func Offset: 0x18
	// Line 1622, Address: 0x2c1038, Func Offset: 0x28
	// Line 1623, Address: 0x2c1040, Func Offset: 0x30
	// Line 1625, Address: 0x2c1048, Func Offset: 0x38
	// Line 1626, Address: 0x2c104c, Func Offset: 0x3c
	// Func End, Address: 0x2c105c, Func Offset: 0x4c
}

// __ct__20zUICustomLoadingTextFP3zUI
// Start address: 0x2c1060
void* zUICustomLoadingText::__ct(zUI* ui)
{
	// Line 1607, Address: 0x2c1060, Func Offset: 0
	// Line 1610, Address: 0x2c1078, Func Offset: 0x18
	// Func End, Address: 0x2c1084, Func Offset: 0x24
}

// InitScreen__18zUICustomExtrasArtFv
// Start address: 0x2c1090
void zUICustomExtrasArt::InitScreen()
{
	xBase* b;
	// Line 1544, Address: 0x2c1090, Func Offset: 0
	// Line 1546, Address: 0x2c1094, Func Offset: 0x4
	// Line 1544, Address: 0x2c1098, Func Offset: 0x8
	// Line 1546, Address: 0x2c10a4, Func Offset: 0x14
	// Line 1547, Address: 0x2c10ac, Func Offset: 0x1c
	// Line 1548, Address: 0x2c10c4, Func Offset: 0x34
	// Line 1550, Address: 0x2c10c8, Func Offset: 0x38
	// Line 1551, Address: 0x2c10d4, Func Offset: 0x44
	// Line 1552, Address: 0x2c10ec, Func Offset: 0x5c
	// Line 1554, Address: 0x2c10f0, Func Offset: 0x60
	// Line 1555, Address: 0x2c10fc, Func Offset: 0x6c
	// Line 1556, Address: 0x2c1114, Func Offset: 0x84
	// Line 1558, Address: 0x2c1118, Func Offset: 0x88
	// Line 1559, Address: 0x2c1124, Func Offset: 0x94
	// Line 1560, Address: 0x2c113c, Func Offset: 0xac
	// Line 1561, Address: 0x2c1140, Func Offset: 0xb0
	// Func End, Address: 0x2c1150, Func Offset: 0xc0
}

// HandleEvent__18zUICustomExtrasArtFP5xBaseUiPCfP5xBaseUi
// Start address: 0x2c1150
uint8 zUICustomExtrasArt::HandleEvent(xBase* from, uint32 toEvent, float32* toParam, xBase* toParamWidget, uint32 toParamWidgetID)
{
	long32 curTime;
	long32 curTime;
	// Line 1492, Address: 0x2c1150, Func Offset: 0
	// Line 1494, Address: 0x2c1154, Func Offset: 0x4
	// Line 1492, Address: 0x2c1158, Func Offset: 0x8
	// Line 1494, Address: 0x2c1164, Func Offset: 0x14
	// Line 1498, Address: 0x2c1194, Func Offset: 0x44
	// Line 1499, Address: 0x2c119c, Func Offset: 0x4c
	// Line 1502, Address: 0x2c11a4, Func Offset: 0x54
	// Line 1503, Address: 0x2c11f4, Func Offset: 0xa4
	// Line 1509, Address: 0x2c11fc, Func Offset: 0xac
	// Line 1510, Address: 0x2c1204, Func Offset: 0xb4
	// Line 1509, Address: 0x2c1208, Func Offset: 0xb8
	// Line 1510, Address: 0x2c120c, Func Offset: 0xbc
	// Line 1520, Address: 0x2c122c, Func Offset: 0xdc
	// Line 1525, Address: 0x2c1234, Func Offset: 0xe4
	// Line 1526, Address: 0x2c123c, Func Offset: 0xec
	// Line 1525, Address: 0x2c1240, Func Offset: 0xf0
	// Line 1526, Address: 0x2c1244, Func Offset: 0xf4
	// Line 1536, Address: 0x2c1264, Func Offset: 0x114
	// Line 1539, Address: 0x2c126c, Func Offset: 0x11c
	// Line 1502, Address: 0x2c1284, Func Offset: 0x134
	// Line 1539, Address: 0x2c1288, Func Offset: 0x138
	// Line 1502, Address: 0x2c128c, Func Offset: 0x13c
	// Line 1539, Address: 0x2c1290, Func Offset: 0x140
	// Line 1502, Address: 0x2c1294, Func Offset: 0x144
	// Line 1539, Address: 0x2c129c, Func Offset: 0x14c
	// Line 1502, Address: 0x2c12a8, Func Offset: 0x158
	// Line 1539, Address: 0x2c12bc, Func Offset: 0x16c
	// Line 1502, Address: 0x2c12c0, Func Offset: 0x170
	// Line 1539, Address: 0x2c12d0, Func Offset: 0x180
	// Line 1502, Address: 0x2c12e0, Func Offset: 0x190
	// Line 1539, Address: 0x2c12e8, Func Offset: 0x198
	// Line 1502, Address: 0x2c1300, Func Offset: 0x1b0
	// Line 1539, Address: 0x2c1310, Func Offset: 0x1c0
	// Line 1502, Address: 0x2c1318, Func Offset: 0x1c8
	// Line 1539, Address: 0x2c131c, Func Offset: 0x1cc
	// Line 1502, Address: 0x2c1328, Func Offset: 0x1d8
	// Line 1539, Address: 0x2c132c, Func Offset: 0x1dc
	// Line 1513, Address: 0x2c1344, Func Offset: 0x1f4
	// Line 1539, Address: 0x2c1348, Func Offset: 0x1f8
	// Line 1513, Address: 0x2c134c, Func Offset: 0x1fc
	// Line 1539, Address: 0x2c1360, Func Offset: 0x210
	// Line 1514, Address: 0x2c136c, Func Offset: 0x21c
	// Line 1539, Address: 0x2c1384, Func Offset: 0x234
	// Line 1517, Address: 0x2c13a4, Func Offset: 0x254
	// Line 1539, Address: 0x2c13b8, Func Offset: 0x268
	// Line 1515, Address: 0x2c13d0, Func Offset: 0x280
	// Line 1539, Address: 0x2c13d4, Func Offset: 0x284
	// Line 1515, Address: 0x2c13d8, Func Offset: 0x288
	// Line 1539, Address: 0x2c13dc, Func Offset: 0x28c
	// Line 1515, Address: 0x2c13e0, Func Offset: 0x290
	// Line 1539, Address: 0x2c13e8, Func Offset: 0x298
	// Line 1515, Address: 0x2c13f4, Func Offset: 0x2a4
	// Line 1539, Address: 0x2c1408, Func Offset: 0x2b8
	// Line 1515, Address: 0x2c140c, Func Offset: 0x2bc
	// Line 1539, Address: 0x2c141c, Func Offset: 0x2cc
	// Line 1515, Address: 0x2c142c, Func Offset: 0x2dc
	// Line 1539, Address: 0x2c1434, Func Offset: 0x2e4
	// Line 1515, Address: 0x2c144c, Func Offset: 0x2fc
	// Line 1539, Address: 0x2c145c, Func Offset: 0x30c
	// Line 1515, Address: 0x2c1464, Func Offset: 0x314
	// Line 1539, Address: 0x2c1468, Func Offset: 0x318
	// Line 1515, Address: 0x2c1474, Func Offset: 0x324
	// Line 1539, Address: 0x2c1478, Func Offset: 0x328
	// Line 1529, Address: 0x2c1490, Func Offset: 0x340
	// Line 1539, Address: 0x2c1494, Func Offset: 0x344
	// Line 1529, Address: 0x2c1498, Func Offset: 0x348
	// Line 1539, Address: 0x2c14ac, Func Offset: 0x35c
	// Line 1530, Address: 0x2c14b8, Func Offset: 0x368
	// Line 1539, Address: 0x2c14d0, Func Offset: 0x380
	// Line 1533, Address: 0x2c14f0, Func Offset: 0x3a0
	// Line 1539, Address: 0x2c1504, Func Offset: 0x3b4
	// Line 1531, Address: 0x2c151c, Func Offset: 0x3cc
	// Line 1539, Address: 0x2c1520, Func Offset: 0x3d0
	// Line 1531, Address: 0x2c1524, Func Offset: 0x3d4
	// Line 1539, Address: 0x2c1528, Func Offset: 0x3d8
	// Line 1531, Address: 0x2c152c, Func Offset: 0x3dc
	// Line 1539, Address: 0x2c1534, Func Offset: 0x3e4
	// Line 1531, Address: 0x2c1540, Func Offset: 0x3f0
	// Line 1539, Address: 0x2c1554, Func Offset: 0x404
	// Line 1531, Address: 0x2c1558, Func Offset: 0x408
	// Line 1539, Address: 0x2c1568, Func Offset: 0x418
	// Line 1531, Address: 0x2c1578, Func Offset: 0x428
	// Line 1539, Address: 0x2c1580, Func Offset: 0x430
	// Line 1531, Address: 0x2c1598, Func Offset: 0x448
	// Line 1539, Address: 0x2c15a8, Func Offset: 0x458
	// Line 1531, Address: 0x2c15b0, Func Offset: 0x460
	// Line 1539, Address: 0x2c15b4, Func Offset: 0x464
	// Line 1531, Address: 0x2c15c0, Func Offset: 0x470
	// Line 1539, Address: 0x2c15c4, Func Offset: 0x474
	// Line 1541, Address: 0x2c15d8, Func Offset: 0x488
	// Func End, Address: 0x2c15ec, Func Offset: 0x49c
}

// EnterScreen__20zUICustomExtrasSoundFv
// Start address: 0x2c15f0
void zUICustomExtrasSound::EnterScreen()
{
	xGroup* soundList;
	uint32 numText;
	int8 soundTextName[19];
	uint32 i;
	zUIText* uiText;
	int8* descriptionText;
	// Line 1435, Address: 0x2c15f0, Func Offset: 0
	// Line 1439, Address: 0x2c1614, Func Offset: 0x24
	// Line 1440, Address: 0x2c1624, Func Offset: 0x34
	// Line 1442, Address: 0x2c1630, Func Offset: 0x40
	// Line 1447, Address: 0x2c1638, Func Offset: 0x48
	// Line 1442, Address: 0x2c163c, Func Offset: 0x4c
	// Line 1447, Address: 0x2c1640, Func Offset: 0x50
	// Line 1448, Address: 0x2c1668, Func Offset: 0x78
	// Line 1451, Address: 0x2c1678, Func Offset: 0x88
	// Line 1448, Address: 0x2c1680, Func Offset: 0x90
	// Line 1449, Address: 0x2c169c, Func Offset: 0xac
	// Line 1451, Address: 0x2c16ac, Func Offset: 0xbc
	// Line 1453, Address: 0x2c16bc, Func Offset: 0xcc
	// Line 1456, Address: 0x2c16cc, Func Offset: 0xdc
	// Line 1470, Address: 0x2c16dc, Func Offset: 0xec
	// Line 1472, Address: 0x2c16fc, Func Offset: 0x10c
	// Line 1473, Address: 0x2c1710, Func Offset: 0x120
	// Line 1474, Address: 0x2c1768, Func Offset: 0x178
	// Line 1458, Address: 0x2c1770, Func Offset: 0x180
	// Line 1474, Address: 0x2c1774, Func Offset: 0x184
	// Line 1458, Address: 0x2c1778, Func Offset: 0x188
	// Line 1474, Address: 0x2c1784, Func Offset: 0x194
	// Line 1458, Address: 0x2c178c, Func Offset: 0x19c
	// Line 1459, Address: 0x2c1790, Func Offset: 0x1a0
	// Line 1458, Address: 0x2c1794, Func Offset: 0x1a4
	// Line 1474, Address: 0x2c1798, Func Offset: 0x1a8
	// Line 1459, Address: 0x2c17a0, Func Offset: 0x1b0
	// Line 1474, Address: 0x2c17a4, Func Offset: 0x1b4
	// Line 1461, Address: 0x2c17b0, Func Offset: 0x1c0
	// Line 1474, Address: 0x2c17b4, Func Offset: 0x1c4
	// Line 1465, Address: 0x2c17bc, Func Offset: 0x1cc
	// Line 1474, Address: 0x2c17c0, Func Offset: 0x1d0
	// Line 1465, Address: 0x2c17c4, Func Offset: 0x1d4
	// Line 1474, Address: 0x2c17dc, Func Offset: 0x1ec
	// Line 1466, Address: 0x2c17e4, Func Offset: 0x1f4
	// Line 1474, Address: 0x2c17f0, Func Offset: 0x200
	// Func End, Address: 0x2c1814, Func Offset: 0x224
}

// InitScreen__20zUICustomExtrasSoundFv
// Start address: 0x2c1820
void zUICustomExtrasSound::InitScreen()
{
	xBase* b;
	// Line 1414, Address: 0x2c1820, Func Offset: 0
	// Line 1416, Address: 0x2c1824, Func Offset: 0x4
	// Line 1414, Address: 0x2c1828, Func Offset: 0x8
	// Line 1416, Address: 0x2c1834, Func Offset: 0x14
	// Line 1417, Address: 0x2c183c, Func Offset: 0x1c
	// Line 1418, Address: 0x2c1854, Func Offset: 0x34
	// Line 1420, Address: 0x2c1858, Func Offset: 0x38
	// Line 1421, Address: 0x2c1864, Func Offset: 0x44
	// Line 1422, Address: 0x2c187c, Func Offset: 0x5c
	// Line 1425, Address: 0x2c1880, Func Offset: 0x60
	// Line 1426, Address: 0x2c188c, Func Offset: 0x6c
	// Line 1427, Address: 0x2c18a4, Func Offset: 0x84
	// Line 1429, Address: 0x2c18a8, Func Offset: 0x88
	// Line 1430, Address: 0x2c18b4, Func Offset: 0x94
	// Line 1431, Address: 0x2c18cc, Func Offset: 0xac
	// Line 1432, Address: 0x2c18d0, Func Offset: 0xb0
	// Func End, Address: 0x2c18e0, Func Offset: 0xc0
}

// HandleEvent__20zUICustomExtrasSoundFP5xBaseUiPCfP5xBaseUi
// Start address: 0x2c18e0
uint8 zUICustomExtrasSound::HandleEvent(xBase* from, uint32 toEvent, float32* toParam, xBase* toParamWidget, uint32 toParamWidgetID)
{
	xGroup* soundList;
	// Line 1340, Address: 0x2c18e0, Func Offset: 0
	// Line 1341, Address: 0x2c18e4, Func Offset: 0x4
	// Line 1340, Address: 0x2c18e8, Func Offset: 0x8
	// Line 1341, Address: 0x2c18f4, Func Offset: 0x14
	// Line 1345, Address: 0x2c1938, Func Offset: 0x58
	// Line 1346, Address: 0x2c1940, Func Offset: 0x60
	// Line 1347, Address: 0x2c1944, Func Offset: 0x64
	// Line 1350, Address: 0x2c194c, Func Offset: 0x6c
	// Line 1351, Address: 0x2c1954, Func Offset: 0x74
	// Line 1352, Address: 0x2c1958, Func Offset: 0x78
	// Line 1356, Address: 0x2c1964, Func Offset: 0x84
	// Line 1364, Address: 0x2c1970, Func Offset: 0x90
	// Line 1365, Address: 0x2c1978, Func Offset: 0x98
	// Line 1367, Address: 0x2c1998, Func Offset: 0xb8
	// Line 1370, Address: 0x2c19a4, Func Offset: 0xc4
	// Line 1367, Address: 0x2c19a8, Func Offset: 0xc8
	// Line 1370, Address: 0x2c19ac, Func Offset: 0xcc
	// Line 1378, Address: 0x2c19c0, Func Offset: 0xe0
	// Line 1379, Address: 0x2c19c8, Func Offset: 0xe8
	// Line 1381, Address: 0x2c19e8, Func Offset: 0x108
	// Line 1388, Address: 0x2c19f8, Func Offset: 0x118
	// Line 1390, Address: 0x2c1a24, Func Offset: 0x144
	// Line 1391, Address: 0x2c1a2c, Func Offset: 0x14c
	// Line 1393, Address: 0x2c1a4c, Func Offset: 0x16c
	// Line 1399, Address: 0x2c1a70, Func Offset: 0x190
	// Line 1402, Address: 0x2c1a7c, Func Offset: 0x19c
	// Line 1403, Address: 0x2c1a84, Func Offset: 0x1a4
	// Line 1404, Address: 0x2c1aa0, Func Offset: 0x1c0
	// Line 1405, Address: 0x2c1ac4, Func Offset: 0x1e4
	// Line 1406, Address: 0x2c1ac8, Func Offset: 0x1e8
	// Line 1409, Address: 0x2c1ad0, Func Offset: 0x1f0
	// Line 1358, Address: 0x2c1ae4, Func Offset: 0x204
	// Line 1409, Address: 0x2c1ae8, Func Offset: 0x208
	// Line 1358, Address: 0x2c1aec, Func Offset: 0x20c
	// Line 1409, Address: 0x2c1af0, Func Offset: 0x210
	// Line 1358, Address: 0x2c1af4, Func Offset: 0x214
	// Line 1409, Address: 0x2c1b08, Func Offset: 0x228
	// Line 1358, Address: 0x2c1b1c, Func Offset: 0x23c
	// Line 1409, Address: 0x2c1b38, Func Offset: 0x258
	// Line 1360, Address: 0x2c1b4c, Func Offset: 0x26c
	// Line 1409, Address: 0x2c1b60, Func Offset: 0x280
	// Line 1361, Address: 0x2c1b68, Func Offset: 0x288
	// Line 1372, Address: 0x2c1b70, Func Offset: 0x290
	// Line 1409, Address: 0x2c1b74, Func Offset: 0x294
	// Line 1372, Address: 0x2c1b78, Func Offset: 0x298
	// Line 1409, Address: 0x2c1b7c, Func Offset: 0x29c
	// Line 1372, Address: 0x2c1b80, Func Offset: 0x2a0
	// Line 1409, Address: 0x2c1b94, Func Offset: 0x2b4
	// Line 1372, Address: 0x2c1ba8, Func Offset: 0x2c8
	// Line 1409, Address: 0x2c1bc4, Func Offset: 0x2e4
	// Line 1374, Address: 0x2c1bd8, Func Offset: 0x2f8
	// Line 1409, Address: 0x2c1bec, Func Offset: 0x30c
	// Line 1375, Address: 0x2c1bf4, Func Offset: 0x314
	// Line 1409, Address: 0x2c1bfc, Func Offset: 0x31c
	// Line 1393, Address: 0x2c1c04, Func Offset: 0x324
	// Line 1409, Address: 0x2c1c08, Func Offset: 0x328
	// Line 1393, Address: 0x2c1c18, Func Offset: 0x338
	// Line 1409, Address: 0x2c1c20, Func Offset: 0x340
	// Line 1393, Address: 0x2c1c24, Func Offset: 0x344
	// Line 1409, Address: 0x2c1c28, Func Offset: 0x348
	// Line 1393, Address: 0x2c1c44, Func Offset: 0x364
	// Line 1409, Address: 0x2c1c48, Func Offset: 0x368
	// Line 1393, Address: 0x2c1c6c, Func Offset: 0x38c
	// Line 1409, Address: 0x2c1c70, Func Offset: 0x390
	// Line 1397, Address: 0x2c1cb4, Func Offset: 0x3d4
	// Line 1409, Address: 0x2c1cb8, Func Offset: 0x3d8
	// Line 1397, Address: 0x2c1cbc, Func Offset: 0x3dc
	// Line 1409, Address: 0x2c1cd0, Func Offset: 0x3f0
	// Line 1411, Address: 0x2c1ce0, Func Offset: 0x400
	// Func End, Address: 0x2c1cf4, Func Offset: 0x414
}

// HandleEvent__19zUICustomExtrasIconFP5xBaseUiPCfP5xBaseUi
// Start address: 0x2c1d00
uint8 zUICustomExtrasIcon::HandleEvent(xBase* from, uint32 toEvent, float32* toParam, xBase* toParamWidget, uint32 toParamWidgetID)
{
	uint8 select_status;
	// Line 1312, Address: 0x2c1d00, Func Offset: 0
	// Line 1313, Address: 0x2c1d04, Func Offset: 0x4
	// Line 1312, Address: 0x2c1d08, Func Offset: 0x8
	// Line 1313, Address: 0x2c1d18, Func Offset: 0x18
	// Line 1321, Address: 0x2c1d20, Func Offset: 0x20
	// Line 1324, Address: 0x2c1d2c, Func Offset: 0x2c
	// Line 1329, Address: 0x2c1d50, Func Offset: 0x50
	// Line 1319, Address: 0x2c1d98, Func Offset: 0x98
	// Line 1329, Address: 0x2c1d9c, Func Offset: 0x9c
	// Line 1330, Address: 0x2c1da0, Func Offset: 0xa0
	// Func End, Address: 0x2c1db8, Func Offset: 0xb8
}

// PostUpdate__19zUICustomExtrasIconFf
// Start address: 0x2c1dc0
void zUICustomExtrasIcon::PostUpdate()
{
	// Line 1304, Address: 0x2c1dc0, Func Offset: 0
	// Line 1307, Address: 0x2c1de0, Func Offset: 0x20
	// Line 1309, Address: 0x2c1de8, Func Offset: 0x28
	// Func End, Address: 0x2c1df0, Func Offset: 0x30
}

// PreUpdate__19zUICustomExtrasIconFf
// Start address: 0x2c1df0
void zUICustomExtrasIcon::PreUpdate()
{
	zUIModel* uimodel;
	// Line 1295, Address: 0x2c1df0, Func Offset: 0
	// Line 1298, Address: 0x2c1e10, Func Offset: 0x20
	// Line 1299, Address: 0x2c1e18, Func Offset: 0x28
	// Line 1301, Address: 0x2c1e1c, Func Offset: 0x2c
	// Func End, Address: 0x2c1e24, Func Offset: 0x34
}

// PostInitMotion__19zUICustomExtrasIconFv
// Start address: 0x2c1e30
void zUICustomExtrasIcon::PostInitMotion()
{
	// Line 1256, Address: 0x2c1e30, Func Offset: 0
	// Line 1257, Address: 0x2c1e44, Func Offset: 0x14
	// Line 1258, Address: 0x2c1e54, Func Offset: 0x24
	// Func End, Address: 0x2c1e5c, Func Offset: 0x2c
}

// ResetMotion__19zUICustomExtrasIconFv
// Start address: 0x2c1e60
void zUICustomExtrasIcon::ResetMotion()
{
	// Line 1244, Address: 0x2c1e60, Func Offset: 0
	// Line 1245, Address: 0x2c1e68, Func Offset: 0x8
	// Line 1248, Address: 0x2c1e78, Func Offset: 0x18
	// Line 1250, Address: 0x2c1e84, Func Offset: 0x24
	// Line 1246, Address: 0x2c1e98, Func Offset: 0x38
	// Line 1250, Address: 0x2c1e9c, Func Offset: 0x3c
	// Line 1246, Address: 0x2c1eac, Func Offset: 0x4c
	// Line 1250, Address: 0x2c1eb8, Func Offset: 0x58
	// Line 1249, Address: 0x2c1ebc, Func Offset: 0x5c
	// Line 1250, Address: 0x2c1ec0, Func Offset: 0x60
	// Func End, Address: 0x2c1ed8, Func Offset: 0x78
}

// InitModel__19zUICustomExtrasIconFP8zUIModelP8zUIModelff
// Start address: 0x2c1ee0
void zUICustomExtrasIcon::InitModel(zUIModel* model, zUIModel* placeholder, float32 globalOffsetX, float32 globalOffsetY)
{
	zUIModel* uiModel;
	zUIModelAsset* uiModelAsset;
	zUIModelAsset* modelAsset;
	// Line 1199, Address: 0x2c1ee0, Func Offset: 0
	// Line 1202, Address: 0x2c1f08, Func Offset: 0x28
	// Line 1204, Address: 0x2c1f10, Func Offset: 0x30
	// Line 1203, Address: 0x2c1f18, Func Offset: 0x38
	// Line 1209, Address: 0x2c1f1c, Func Offset: 0x3c
	// Line 1206, Address: 0x2c1f20, Func Offset: 0x40
	// Line 1207, Address: 0x2c1f28, Func Offset: 0x48
	// Line 1208, Address: 0x2c1f30, Func Offset: 0x50
	// Line 1209, Address: 0x2c1f34, Func Offset: 0x54
	// Line 1212, Address: 0x2c1f3c, Func Offset: 0x5c
	// Line 1213, Address: 0x2c1f44, Func Offset: 0x64
	// Line 1216, Address: 0x2c1f4c, Func Offset: 0x6c
	// Line 1217, Address: 0x2c1f58, Func Offset: 0x78
	// Line 1218, Address: 0x2c1f64, Func Offset: 0x84
	// Line 1219, Address: 0x2c1f6c, Func Offset: 0x8c
	// Line 1222, Address: 0x2c1f74, Func Offset: 0x94
	// Line 1223, Address: 0x2c1f7c, Func Offset: 0x9c
	// Line 1224, Address: 0x2c1f84, Func Offset: 0xa4
	// Line 1225, Address: 0x2c1f88, Func Offset: 0xa8
	// Func End, Address: 0x2c1fac, Func Offset: 0xcc
}

// __ct__19zUICustomExtrasIconFP3zUI
// Start address: 0x2c1fb0
void* zUICustomExtrasIcon::__ct(zUI* ui)
{
	// Line 1191, Address: 0x2c1fb0, Func Offset: 0
	// Line 1196, Address: 0x2c1fd4, Func Offset: 0x24
	// Line 1191, Address: 0x2c1fd8, Func Offset: 0x28
	// Line 1196, Address: 0x2c1fec, Func Offset: 0x3c
	// Func End, Address: 0x2c1ff4, Func Offset: 0x44
}

// PostUpdate__22zUICustomExtrasManagerFf
// Start address: 0x2c2000
void zUICustomExtrasManager::PostUpdate(float32 dt)
{
	uint32 i;
	// Line 1184, Address: 0x2c2000, Func Offset: 0
	// Line 1186, Address: 0x2c2024, Func Offset: 0x24
	// Line 1187, Address: 0x2c202c, Func Offset: 0x2c
	// Line 1188, Address: 0x2c20a0, Func Offset: 0xa0
	// Func End, Address: 0x2c20c0, Func Offset: 0xc0
}

// HandleEvent__22zUICustomExtrasManagerFP5xBaseUiPCfP5xBaseUi
// Start address: 0x2c20c0
uint8 zUICustomExtrasManager::HandleEvent(xBase* from, uint32 toEvent, float32* toParam, xBase* toParamWidget, uint32 toParamWidgetID)
{
	// Line 1131, Address: 0x2c20c0, Func Offset: 0
	// Line 1132, Address: 0x2c20c4, Func Offset: 0x4
	// Line 1131, Address: 0x2c20c8, Func Offset: 0x8
	// Line 1132, Address: 0x2c20d0, Func Offset: 0x10
	// Line 1137, Address: 0x2c2130, Func Offset: 0x70
	// Line 1138, Address: 0x2c2288, Func Offset: 0x1c8
	// Line 1139, Address: 0x2c2290, Func Offset: 0x1d0
	// Line 1140, Address: 0x2c2294, Func Offset: 0x1d4
	// Line 1143, Address: 0x2c229c, Func Offset: 0x1dc
	// Line 1144, Address: 0x2c22a4, Func Offset: 0x1e4
	// Line 1147, Address: 0x2c22ac, Func Offset: 0x1ec
	// Line 1148, Address: 0x2c22b4, Func Offset: 0x1f4
	// Line 1152, Address: 0x2c22bc, Func Offset: 0x1fc
	// Line 1153, Address: 0x2c22d4, Func Offset: 0x214
	// Line 1156, Address: 0x2c22dc, Func Offset: 0x21c
	// Line 1157, Address: 0x2c22f4, Func Offset: 0x234
	// Line 1160, Address: 0x2c22fc, Func Offset: 0x23c
	// Line 1161, Address: 0x2c2314, Func Offset: 0x254
	// Line 1164, Address: 0x2c231c, Func Offset: 0x25c
	// Line 1165, Address: 0x2c2334, Func Offset: 0x274
	// Line 1168, Address: 0x2c233c, Func Offset: 0x27c
	// Line 1169, Address: 0x2c2344, Func Offset: 0x284
	// Line 1172, Address: 0x2c234c, Func Offset: 0x28c
	// Line 1173, Address: 0x2c235c, Func Offset: 0x29c
	// Line 1174, Address: 0x2c2368, Func Offset: 0x2a8
	// Line 1173, Address: 0x2c236c, Func Offset: 0x2ac
	// Line 1174, Address: 0x2c2370, Func Offset: 0x2b0
	// Line 1175, Address: 0x2c2388, Func Offset: 0x2c8
	// Line 1176, Address: 0x2c238c, Func Offset: 0x2cc
	// Line 1179, Address: 0x2c2394, Func Offset: 0x2d4
	// Line 1181, Address: 0x2c239c, Func Offset: 0x2dc
	// Func End, Address: 0x2c23ac, Func Offset: 0x2ec
}

// SelectCurrentIcon__22zUICustomExtrasManagerFv
// Start address: 0x2c23b0
void zUICustomExtrasManager::SelectCurrentIcon()
{
	extraEntry& currentIcon;
	// Line 1057, Address: 0x2c23b0, Func Offset: 0
	// Line 1059, Address: 0x2c23b4, Func Offset: 0x4
	// Line 1057, Address: 0x2c23b8, Func Offset: 0x8
	// Line 1059, Address: 0x2c23bc, Func Offset: 0xc
	// Line 1057, Address: 0x2c23c0, Func Offset: 0x10
	// Line 1061, Address: 0x2c23c4, Func Offset: 0x14
	// Line 1057, Address: 0x2c23c8, Func Offset: 0x18
	// Line 1061, Address: 0x2c23dc, Func Offset: 0x2c
	// Line 1057, Address: 0x2c23e0, Func Offset: 0x30
	// Line 1059, Address: 0x2c23f0, Func Offset: 0x40
	// Line 1061, Address: 0x2c23f4, Func Offset: 0x44
	// Line 1063, Address: 0x2c2408, Func Offset: 0x58
	// Line 1064, Address: 0x2c2410, Func Offset: 0x60
	// Line 1065, Address: 0x2c2430, Func Offset: 0x80
	// Line 1068, Address: 0x2c243c, Func Offset: 0x8c
	// Line 1069, Address: 0x2c2444, Func Offset: 0x94
	// Line 1076, Address: 0x2c2470, Func Offset: 0xc0
	// Line 1077, Address: 0x2c249c, Func Offset: 0xec
	// Line 1085, Address: 0x2c2504, Func Offset: 0x154
	// Line 1088, Address: 0x2c250c, Func Offset: 0x15c
	// Line 1090, Address: 0x2c2510, Func Offset: 0x160
	// Line 1088, Address: 0x2c2514, Func Offset: 0x164
	// Line 1090, Address: 0x2c2518, Func Offset: 0x168
	// Line 1089, Address: 0x2c251c, Func Offset: 0x16c
	// Line 1090, Address: 0x2c2520, Func Offset: 0x170
	// Line 1089, Address: 0x2c2524, Func Offset: 0x174
	// Line 1090, Address: 0x2c2528, Func Offset: 0x178
	// Line 1089, Address: 0x2c2530, Func Offset: 0x180
	// Line 1090, Address: 0x2c2538, Func Offset: 0x188
	// Line 1091, Address: 0x2c2544, Func Offset: 0x194
	// Line 1092, Address: 0x2c2570, Func Offset: 0x1c0
	// Line 1095, Address: 0x2c2578, Func Offset: 0x1c8
	// Line 1097, Address: 0x2c257c, Func Offset: 0x1cc
	// Line 1095, Address: 0x2c2580, Func Offset: 0x1d0
	// Line 1097, Address: 0x2c2584, Func Offset: 0x1d4
	// Line 1096, Address: 0x2c2588, Func Offset: 0x1d8
	// Line 1097, Address: 0x2c258c, Func Offset: 0x1dc
	// Line 1096, Address: 0x2c2590, Func Offset: 0x1e0
	// Line 1097, Address: 0x2c2594, Func Offset: 0x1e4
	// Line 1096, Address: 0x2c259c, Func Offset: 0x1ec
	// Line 1097, Address: 0x2c25a4, Func Offset: 0x1f4
	// Line 1098, Address: 0x2c25b0, Func Offset: 0x200
	// Line 1099, Address: 0x2c25dc, Func Offset: 0x22c
	// Line 1102, Address: 0x2c25e4, Func Offset: 0x234
	// Line 1104, Address: 0x2c25f4, Func Offset: 0x244
	// Line 1110, Address: 0x2c2600, Func Offset: 0x250
	// Line 1112, Address: 0x2c2628, Func Offset: 0x278
	// Line 1113, Address: 0x2c2630, Func Offset: 0x280
	// Line 1116, Address: 0x2c2638, Func Offset: 0x288
	// Line 1117, Address: 0x2c2648, Func Offset: 0x298
	// Line 1120, Address: 0x2c2654, Func Offset: 0x2a4
	// Line 1121, Address: 0x2c267c, Func Offset: 0x2cc
	// Line 1128, Address: 0x2c2684, Func Offset: 0x2d4
	// Line 1071, Address: 0x2c2690, Func Offset: 0x2e0
	// Line 1128, Address: 0x2c2694, Func Offset: 0x2e4
	// Line 1071, Address: 0x2c269c, Func Offset: 0x2ec
	// Line 1128, Address: 0x2c26a0, Func Offset: 0x2f0
	// Line 1071, Address: 0x2c26a8, Func Offset: 0x2f8
	// Line 1128, Address: 0x2c26ac, Func Offset: 0x2fc
	// Line 1071, Address: 0x2c26b4, Func Offset: 0x304
	// Line 1128, Address: 0x2c26b8, Func Offset: 0x308
	// Line 1071, Address: 0x2c26c0, Func Offset: 0x310
	// Line 1128, Address: 0x2c26c4, Func Offset: 0x314
	// Line 1071, Address: 0x2c26cc, Func Offset: 0x31c
	// Line 1128, Address: 0x2c26d4, Func Offset: 0x324
	// Line 1107, Address: 0x2c26e0, Func Offset: 0x330
	// Line 1128, Address: 0x2c26f0, Func Offset: 0x340
	// Line 1107, Address: 0x2c26f4, Func Offset: 0x344
	// Line 1128, Address: 0x2c2700, Func Offset: 0x350
	// Line 1108, Address: 0x2c271c, Func Offset: 0x36c
	// Line 1128, Address: 0x2c2724, Func Offset: 0x374
	// Line 1118, Address: 0x2c2728, Func Offset: 0x378
	// Line 1128, Address: 0x2c2738, Func Offset: 0x388
	// Line 1118, Address: 0x2c273c, Func Offset: 0x38c
	// Line 1128, Address: 0x2c2744, Func Offset: 0x394
	// Line 1118, Address: 0x2c2760, Func Offset: 0x3b0
	// Line 1128, Address: 0x2c2768, Func Offset: 0x3b8
	// Func End, Address: 0x2c2780, Func Offset: 0x3d0
}

// UpdateText__22zUICustomExtrasManagerFv
// Start address: 0x2c2780
void zUICustomExtrasManager::UpdateText()
{
	uint8 isLocked;
	int8* descriptionText;
	int8 descriptionString[25];
	int8 actionString[26];
	uint32 type;
	int8* actionText;
	// Line 970, Address: 0x2c2780, Func Offset: 0
	// Line 973, Address: 0x2c2784, Func Offset: 0x4
	// Line 970, Address: 0x2c2788, Func Offset: 0x8
	// Line 973, Address: 0x2c278c, Func Offset: 0xc
	// Line 970, Address: 0x2c2790, Func Offset: 0x10
	// Line 973, Address: 0x2c2794, Func Offset: 0x14
	// Line 970, Address: 0x2c2798, Func Offset: 0x18
	// Line 973, Address: 0x2c27a4, Func Offset: 0x24
	// Line 971, Address: 0x2c27a8, Func Offset: 0x28
	// Line 976, Address: 0x2c27b4, Func Offset: 0x34
	// Line 971, Address: 0x2c27b8, Func Offset: 0x38
	// Line 973, Address: 0x2c27c4, Func Offset: 0x44
	// Line 976, Address: 0x2c27cc, Func Offset: 0x4c
	// Line 979, Address: 0x2c27d4, Func Offset: 0x54
	// Line 981, Address: 0x2c27dc, Func Offset: 0x5c
	// Line 998, Address: 0x2c27f4, Func Offset: 0x74
	// Line 1002, Address: 0x2c27fc, Func Offset: 0x7c
	// Line 1004, Address: 0x2c2808, Func Offset: 0x88
	// Line 1006, Address: 0x2c2838, Func Offset: 0xb8
	// Line 1008, Address: 0x2c2858, Func Offset: 0xd8
	// Line 1011, Address: 0x2c2868, Func Offset: 0xe8
	// Line 1008, Address: 0x2c2878, Func Offset: 0xf8
	// Line 1009, Address: 0x2c287c, Func Offset: 0xfc
	// Line 1008, Address: 0x2c2880, Func Offset: 0x100
	// Line 1009, Address: 0x2c288c, Func Offset: 0x10c
	// Line 1011, Address: 0x2c2894, Func Offset: 0x114
	// Line 1014, Address: 0x2c289c, Func Offset: 0x11c
	// Line 1015, Address: 0x2c28a0, Func Offset: 0x120
	// Line 1014, Address: 0x2c28a4, Func Offset: 0x124
	// Line 1018, Address: 0x2c28a8, Func Offset: 0x128
	// Line 1019, Address: 0x2c28bc, Func Offset: 0x13c
	// Line 1021, Address: 0x2c28c4, Func Offset: 0x144
	// Line 986, Address: 0x2c28d8, Func Offset: 0x158
	// Line 1021, Address: 0x2c28dc, Func Offset: 0x15c
	// Line 986, Address: 0x2c28e0, Func Offset: 0x160
	// Line 1021, Address: 0x2c28e4, Func Offset: 0x164
	// Line 986, Address: 0x2c28e8, Func Offset: 0x168
	// Line 1021, Address: 0x2c28f0, Func Offset: 0x170
	// Line 988, Address: 0x2c28fc, Func Offset: 0x17c
	// Line 1021, Address: 0x2c2900, Func Offset: 0x180
	// Line 988, Address: 0x2c290c, Func Offset: 0x18c
	// Line 1021, Address: 0x2c2910, Func Offset: 0x190
	// Line 988, Address: 0x2c2914, Func Offset: 0x194
	// Line 1021, Address: 0x2c2918, Func Offset: 0x198
	// Line 988, Address: 0x2c2928, Func Offset: 0x1a8
	// Line 991, Address: 0x2c2938, Func Offset: 0x1b8
	// Line 989, Address: 0x2c293c, Func Offset: 0x1bc
	// Line 988, Address: 0x2c2940, Func Offset: 0x1c0
	// Line 1021, Address: 0x2c2944, Func Offset: 0x1c4
	// Line 989, Address: 0x2c2950, Func Offset: 0x1d0
	// Line 991, Address: 0x2c2954, Func Offset: 0x1d4
	// Line 1021, Address: 0x2c2958, Func Offset: 0x1d8
	// Line 991, Address: 0x2c2960, Func Offset: 0x1e0
	// Line 992, Address: 0x2c2964, Func Offset: 0x1e4
	// Line 991, Address: 0x2c2968, Func Offset: 0x1e8
	// Line 1021, Address: 0x2c296c, Func Offset: 0x1ec
	// Line 992, Address: 0x2c2978, Func Offset: 0x1f8
	// Line 1021, Address: 0x2c297c, Func Offset: 0x1fc
	// Line 994, Address: 0x2c2988, Func Offset: 0x208
	// Line 1021, Address: 0x2c298c, Func Offset: 0x20c
	// Func End, Address: 0x2c29b4, Func Offset: 0x234
}

// MoveSelection__22zUICustomExtrasManagerFUcUcb
// Start address: 0x2c29c0
void zUICustomExtrasManager::MoveSelection(uint8 row, uint8 column, uint8 playSound)
{
	uint8 badLocation;
	uint32 gridIndex;
	uint32 size;
	uint32 i;
	zUI* aura;
	float32 x;
	float32 y;
	zUICustomExtrasIcon* custom;
	// Line 926, Address: 0x2c29c0, Func Offset: 0
	// Line 927, Address: 0x2c29c4, Func Offset: 0x4
	// Line 926, Address: 0x2c29c8, Func Offset: 0x8
	// Line 928, Address: 0x2c29e8, Func Offset: 0x28
	// Line 933, Address: 0x2c2a1c, Func Offset: 0x5c
	// Line 935, Address: 0x2c2a24, Func Offset: 0x64
	// Line 936, Address: 0x2c2a38, Func Offset: 0x78
	// Line 937, Address: 0x2c2a58, Func Offset: 0x98
	// Line 940, Address: 0x2c2a68, Func Offset: 0xa8
	// Line 941, Address: 0x2c2a70, Func Offset: 0xb0
	// Line 940, Address: 0x2c2a74, Func Offset: 0xb4
	// Line 942, Address: 0x2c2a78, Func Offset: 0xb8
	// Line 945, Address: 0x2c2a7c, Func Offset: 0xbc
	// Line 946, Address: 0x2c2a8c, Func Offset: 0xcc
	// Line 948, Address: 0x2c2a9c, Func Offset: 0xdc
	// Line 951, Address: 0x2c2aa8, Func Offset: 0xe8
	// Line 961, Address: 0x2c2aac, Func Offset: 0xec
	// Line 951, Address: 0x2c2ab0, Func Offset: 0xf0
	// Line 959, Address: 0x2c2ab4, Func Offset: 0xf4
	// Line 951, Address: 0x2c2ab8, Func Offset: 0xf8
	// Line 960, Address: 0x2c2ac4, Func Offset: 0x104
	// Line 961, Address: 0x2c2acc, Func Offset: 0x10c
	// Line 951, Address: 0x2c2ad0, Func Offset: 0x110
	// Line 960, Address: 0x2c2ad8, Func Offset: 0x118
	// Line 955, Address: 0x2c2adc, Func Offset: 0x11c
	// Line 956, Address: 0x2c2ae4, Func Offset: 0x124
	// Line 955, Address: 0x2c2aec, Func Offset: 0x12c
	// Line 960, Address: 0x2c2af0, Func Offset: 0x130
	// Line 956, Address: 0x2c2b04, Func Offset: 0x144
	// Line 960, Address: 0x2c2b08, Func Offset: 0x148
	// Line 961, Address: 0x2c2b1c, Func Offset: 0x15c
	// Line 963, Address: 0x2c2b28, Func Offset: 0x168
	// Line 965, Address: 0x2c2b30, Func Offset: 0x170
	// Line 966, Address: 0x2c2b44, Func Offset: 0x184
	// Line 967, Address: 0x2c2b64, Func Offset: 0x1a4
	// Func End, Address: 0x2c2b84, Func Offset: 0x1c4
}

// EnterScreen__22zUICustomExtrasManagerFv
// Start address: 0x2c2b90
void zUICustomExtrasManager::EnterScreen()
{
	uint32 i;
	uint32 numExtras;
	zUI* placeholder;
	uint32 numItems;
	uint32 j;
	zUI* uiObject;
	float32 x;
	float32 y;
	zUICustomExtrasIcon* custom;
	// Line 798, Address: 0x2c2b90, Func Offset: 0
	// Line 801, Address: 0x2c2bd0, Func Offset: 0x40
	// Line 802, Address: 0x2c2bd8, Func Offset: 0x48
	// Line 805, Address: 0x2c2bfc, Func Offset: 0x6c
	// Line 809, Address: 0x2c2c14, Func Offset: 0x84
	// Line 815, Address: 0x2c2c18, Func Offset: 0x88
	// Line 809, Address: 0x2c2c1c, Func Offset: 0x8c
	// Line 815, Address: 0x2c2c24, Func Offset: 0x94
	// Line 817, Address: 0x2c2cc8, Func Offset: 0x138
	// Line 818, Address: 0x2c2ce0, Func Offset: 0x150
	// Line 820, Address: 0x2c2d10, Func Offset: 0x180
	// Line 824, Address: 0x2c2d38, Func Offset: 0x1a8
	// Line 827, Address: 0x2c2d40, Func Offset: 0x1b0
	// Line 829, Address: 0x2c2d60, Func Offset: 0x1d0
	// Line 830, Address: 0x2c2da0, Func Offset: 0x210
	// Line 829, Address: 0x2c2da8, Func Offset: 0x218
	// Line 830, Address: 0x2c2dac, Func Offset: 0x21c
	// Line 837, Address: 0x2c2db8, Func Offset: 0x228
	// Line 850, Address: 0x2c2dc4, Func Offset: 0x234
	// Line 851, Address: 0x2c2dd0, Func Offset: 0x240
	// Line 878, Address: 0x2c2ddc, Func Offset: 0x24c
	// Line 879, Address: 0x2c2de8, Func Offset: 0x258
	// Line 885, Address: 0x2c2dec, Func Offset: 0x25c
	// Line 886, Address: 0x2c2e0c, Func Offset: 0x27c
	// Line 846, Address: 0x2c2e40, Func Offset: 0x2b0
	// Line 886, Address: 0x2c2e44, Func Offset: 0x2b4
	// Line 862, Address: 0x2c2eac, Func Offset: 0x31c
	// Line 864, Address: 0x2c2eb0, Func Offset: 0x320
	// Line 867, Address: 0x2c2eb8, Func Offset: 0x328
	// Line 868, Address: 0x2c2ec4, Func Offset: 0x334
	// Line 886, Address: 0x2c2ec8, Func Offset: 0x338
	// Line 873, Address: 0x2c2ed4, Func Offset: 0x344
	// Line 886, Address: 0x2c2ed8, Func Offset: 0x348
	// Line 873, Address: 0x2c2edc, Func Offset: 0x34c
	// Line 886, Address: 0x2c2ee0, Func Offset: 0x350
	// Line 873, Address: 0x2c2eec, Func Offset: 0x35c
	// Line 886, Address: 0x2c2ef0, Func Offset: 0x360
	// Line 873, Address: 0x2c2ef4, Func Offset: 0x364
	// Line 886, Address: 0x2c2ef8, Func Offset: 0x368
	// Line 881, Address: 0x2c2f50, Func Offset: 0x3c0
	// Line 886, Address: 0x2c2f54, Func Offset: 0x3c4
	// Line 881, Address: 0x2c2f70, Func Offset: 0x3e0
	// Line 886, Address: 0x2c2f74, Func Offset: 0x3e4
	// Line 881, Address: 0x2c2fb0, Func Offset: 0x420
	// Line 886, Address: 0x2c2fb4, Func Offset: 0x424
	// Line 881, Address: 0x2c2fc0, Func Offset: 0x430
	// Line 886, Address: 0x2c2fc4, Func Offset: 0x434
	// Line 881, Address: 0x2c2fcc, Func Offset: 0x43c
	// Line 886, Address: 0x2c2fd0, Func Offset: 0x440
	// Line 881, Address: 0x2c2fdc, Func Offset: 0x44c
	// Line 886, Address: 0x2c2fe0, Func Offset: 0x450
	// Line 881, Address: 0x2c2fe4, Func Offset: 0x454
	// Line 886, Address: 0x2c2fe8, Func Offset: 0x458
	// Line 881, Address: 0x2c2ff8, Func Offset: 0x468
	// Line 886, Address: 0x2c3004, Func Offset: 0x474
	// Func End, Address: 0x2c3044, Func Offset: 0x4b4
}

// InitScreen__22zUICustomExtrasManagerFv
// Start address: 0x2c3050
void zUICustomExtrasManager::InitScreen()
{
	uint32 i;
	xGroup* subscreenGroup;
	zUI* subUI;
	xGroup* gridGroup;
	xBase* b;
	xGroup* iconGroup;
	zUI* baseIcon;
	xGroup* rowGroup;
	uint8 size;
	uint8 j;
	// Line 678, Address: 0x2c3050, Func Offset: 0
	// Line 685, Address: 0x2c307c, Func Offset: 0x2c
	// Line 688, Address: 0x2c308c, Func Offset: 0x3c
	// Line 685, Address: 0x2c3090, Func Offset: 0x40
	// Line 688, Address: 0x2c3094, Func Offset: 0x44
	// Line 689, Address: 0x2c30a4, Func Offset: 0x54
	// Line 691, Address: 0x2c30b4, Func Offset: 0x64
	// Line 692, Address: 0x2c30c4, Func Offset: 0x74
	// Line 694, Address: 0x2c30cc, Func Offset: 0x7c
	// Line 695, Address: 0x2c311c, Func Offset: 0xcc
	// Line 699, Address: 0x2c3128, Func Offset: 0xd8
	// Line 700, Address: 0x2c3138, Func Offset: 0xe8
	// Line 702, Address: 0x2c3140, Func Offset: 0xf0
	// Line 703, Address: 0x2c317c, Func Offset: 0x12c
	// Line 710, Address: 0x2c3188, Func Offset: 0x138
	// Line 707, Address: 0x2c318c, Func Offset: 0x13c
	// Line 710, Address: 0x2c3190, Func Offset: 0x140
	// Line 711, Address: 0x2c3198, Func Offset: 0x148
	// Line 712, Address: 0x2c31b0, Func Offset: 0x160
	// Line 715, Address: 0x2c31b4, Func Offset: 0x164
	// Line 714, Address: 0x2c31b8, Func Offset: 0x168
	// Line 715, Address: 0x2c31bc, Func Offset: 0x16c
	// Line 716, Address: 0x2c31c4, Func Offset: 0x174
	// Line 717, Address: 0x2c31dc, Func Offset: 0x18c
	// Line 720, Address: 0x2c31e0, Func Offset: 0x190
	// Line 721, Address: 0x2c31f4, Func Offset: 0x1a4
	// Line 722, Address: 0x2c31fc, Func Offset: 0x1ac
	// Line 725, Address: 0x2c3224, Func Offset: 0x1d4
	// Line 729, Address: 0x2c3228, Func Offset: 0x1d8
	// Line 725, Address: 0x2c3230, Func Offset: 0x1e0
	// Line 726, Address: 0x2c3234, Func Offset: 0x1e4
	// Line 727, Address: 0x2c3240, Func Offset: 0x1f0
	// Line 729, Address: 0x2c3248, Func Offset: 0x1f8
	// Line 730, Address: 0x2c3250, Func Offset: 0x200
	// Line 731, Address: 0x2c3268, Func Offset: 0x218
	// Line 734, Address: 0x2c326c, Func Offset: 0x21c
	// Line 735, Address: 0x2c327c, Func Offset: 0x22c
	// Line 737, Address: 0x2c328c, Func Offset: 0x23c
	// Line 738, Address: 0x2c329c, Func Offset: 0x24c
	// Line 740, Address: 0x2c32a4, Func Offset: 0x254
	// Line 751, Address: 0x2c32ac, Func Offset: 0x25c
	// Line 753, Address: 0x2c32b4, Func Offset: 0x264
	// Line 763, Address: 0x2c32c0, Func Offset: 0x270
	// Line 766, Address: 0x2c32d8, Func Offset: 0x288
	// Line 767, Address: 0x2c32e4, Func Offset: 0x294
	// Line 768, Address: 0x2c32fc, Func Offset: 0x2ac
	// Line 770, Address: 0x2c3300, Func Offset: 0x2b0
	// Line 771, Address: 0x2c330c, Func Offset: 0x2bc
	// Line 772, Address: 0x2c3324, Func Offset: 0x2d4
	// Line 774, Address: 0x2c3328, Func Offset: 0x2d8
	// Line 775, Address: 0x2c3334, Func Offset: 0x2e4
	// Line 776, Address: 0x2c334c, Func Offset: 0x2fc
	// Line 778, Address: 0x2c3350, Func Offset: 0x300
	// Line 779, Address: 0x2c335c, Func Offset: 0x30c
	// Line 780, Address: 0x2c3374, Func Offset: 0x324
	// Line 783, Address: 0x2c3378, Func Offset: 0x328
	// Line 784, Address: 0x2c3384, Func Offset: 0x334
	// Line 785, Address: 0x2c339c, Func Offset: 0x34c
	// Line 787, Address: 0x2c33a0, Func Offset: 0x350
	// Line 788, Address: 0x2c33ac, Func Offset: 0x35c
	// Line 789, Address: 0x2c33c4, Func Offset: 0x374
	// Line 791, Address: 0x2c33c8, Func Offset: 0x378
	// Line 792, Address: 0x2c33d4, Func Offset: 0x384
	// Line 793, Address: 0x2c33ec, Func Offset: 0x39c
	// Line 794, Address: 0x2c33f0, Func Offset: 0x3a0
	// Line 745, Address: 0x2c33fc, Func Offset: 0x3ac
	// Line 794, Address: 0x2c3400, Func Offset: 0x3b0
	// Line 745, Address: 0x2c340c, Func Offset: 0x3bc
	// Line 794, Address: 0x2c3410, Func Offset: 0x3c0
	// Line 753, Address: 0x2c3424, Func Offset: 0x3d4
	// Line 794, Address: 0x2c3428, Func Offset: 0x3d8
	// Line 755, Address: 0x2c342c, Func Offset: 0x3dc
	// Line 756, Address: 0x2c3430, Func Offset: 0x3e0
	// Line 755, Address: 0x2c3434, Func Offset: 0x3e4
	// Line 794, Address: 0x2c3438, Func Offset: 0x3e8
	// Line 761, Address: 0x2c3468, Func Offset: 0x418
	// Line 794, Address: 0x2c346c, Func Offset: 0x41c
	// Line 762, Address: 0x2c3494, Func Offset: 0x444
	// Line 794, Address: 0x2c3498, Func Offset: 0x448
	// Func End, Address: 0x2c34dc, Func Offset: 0x48c
}

// __ct__22zUICustomExtrasManagerFP3zUI
// Start address: 0x2c34e0
void* zUICustomExtrasManager::__ct(zUI* ui)
{
	// Line 663, Address: 0x2c34e0, Func Offset: 0
	// Line 672, Address: 0x2c34f8, Func Offset: 0x18
	// Line 663, Address: 0x2c34fc, Func Offset: 0x1c
	// Line 672, Address: 0x2c3544, Func Offset: 0x64
	// Func End, Address: 0x2c354c, Func Offset: 0x6c
}

// InitExtrasList__22zUICustomExtrasManagerFP8xIniFile
// Start address: 0x2c3550
void zUICustomExtrasManager::InitExtrasList(xIniFile* ini)
{
	int32 idx;
	int8* buf;
	uint32 currentExtra;
	int32 chestCount;
	// Line 617, Address: 0x2c3550, Func Offset: 0
	// Line 618, Address: 0x2c3554, Func Offset: 0x4
	// Line 617, Address: 0x2c3558, Func Offset: 0x8
	// Line 618, Address: 0x2c355c, Func Offset: 0xc
	// Line 617, Address: 0x2c3560, Func Offset: 0x10
	// Line 618, Address: 0x2c3570, Func Offset: 0x20
	// Line 617, Address: 0x2c3574, Func Offset: 0x24
	// Line 618, Address: 0x2c3578, Func Offset: 0x28
	// Line 620, Address: 0x2c3584, Func Offset: 0x34
	// Line 623, Address: 0x2c35a4, Func Offset: 0x54
	// Line 620, Address: 0x2c35a8, Func Offset: 0x58
	// Line 622, Address: 0x2c35ac, Func Offset: 0x5c
	// Line 623, Address: 0x2c35b0, Func Offset: 0x60
	// Line 624, Address: 0x2c35b4, Func Offset: 0x64
	// Line 630, Address: 0x2c35bc, Func Offset: 0x6c
	// Line 658, Address: 0x2c3600, Func Offset: 0xb0
	// Line 660, Address: 0x2c360c, Func Offset: 0xbc
	// Line 633, Address: 0x2c3620, Func Offset: 0xd0
	// Line 660, Address: 0x2c3630, Func Offset: 0xe0
	// Line 633, Address: 0x2c3644, Func Offset: 0xf4
	// Line 660, Address: 0x2c364c, Func Offset: 0xfc
	// Line 633, Address: 0x2c3654, Func Offset: 0x104
	// Line 660, Address: 0x2c3658, Func Offset: 0x108
	// Line 635, Address: 0x2c367c, Func Offset: 0x12c
	// Line 660, Address: 0x2c3690, Func Offset: 0x140
	// Line 635, Address: 0x2c3698, Func Offset: 0x148
	// Line 660, Address: 0x2c36a0, Func Offset: 0x150
	// Line 644, Address: 0x2c36bc, Func Offset: 0x16c
	// Line 660, Address: 0x2c36d0, Func Offset: 0x180
	// Line 644, Address: 0x2c36e4, Func Offset: 0x194
	// Line 660, Address: 0x2c36ec, Func Offset: 0x19c
	// Line 644, Address: 0x2c36f4, Func Offset: 0x1a4
	// Line 660, Address: 0x2c36f8, Func Offset: 0x1a8
	// Line 646, Address: 0x2c371c, Func Offset: 0x1cc
	// Line 660, Address: 0x2c3730, Func Offset: 0x1e0
	// Line 646, Address: 0x2c3738, Func Offset: 0x1e8
	// Line 660, Address: 0x2c3740, Func Offset: 0x1f0
	// Line 652, Address: 0x2c3764, Func Offset: 0x214
	// Line 660, Address: 0x2c3768, Func Offset: 0x218
	// Line 657, Address: 0x2c3778, Func Offset: 0x228
	// Line 660, Address: 0x2c377c, Func Offset: 0x22c
	// Line 650, Address: 0x2c379c, Func Offset: 0x24c
	// Line 660, Address: 0x2c37a8, Func Offset: 0x258
	// Func End, Address: 0x2c37c8, Func Offset: 0x278
}

// ResetExtrasStatus__22zUICustomExtrasManagerFv
// Start address: 0x2c37d0
void zUICustomExtrasManager::ResetExtrasStatus()
{
	uint32 i;
	// Line 611, Address: 0x2c37d0, Func Offset: 0
	// Line 612, Address: 0x2c37d4, Func Offset: 0x4
	// Line 613, Address: 0x2c3860, Func Offset: 0x90
	// Func End, Address: 0x2c3868, Func Offset: 0x98
}

// ClearAllButThisCostume__FUi
// Start address: 0x2c3870
void ClearAllButThisCostume(uint32 index)
{
	eSNDCurrentPlayer playerID;
	uint32 i;
	uint8 curID;
	uint32 j;
	// Line 574, Address: 0x2c3870, Func Offset: 0
	// Line 576, Address: 0x2c3874, Func Offset: 0x4
	// Line 574, Address: 0x2c3878, Func Offset: 0x8
	// Line 576, Address: 0x2c3890, Func Offset: 0x20
	// Line 579, Address: 0x2c38a0, Func Offset: 0x30
	// Line 576, Address: 0x2c38a4, Func Offset: 0x34
	// Line 579, Address: 0x2c38a8, Func Offset: 0x38
	// Line 581, Address: 0x2c38e0, Func Offset: 0x70
	// Line 582, Address: 0x2c38e4, Func Offset: 0x74
	// Line 585, Address: 0x2c38f8, Func Offset: 0x88
	// Line 587, Address: 0x2c3910, Func Offset: 0xa0
	// Line 588, Address: 0x2c3924, Func Offset: 0xb4
	// Line 589, Address: 0x2c3938, Func Offset: 0xc8
	// Line 590, Address: 0x2c3948, Func Offset: 0xd8
	// Func End, Address: 0x2c3950, Func Offset: 0xe0
}

// GivePlayerTreasureChest__22zUICustomExtrasManagerFUi
// Start address: 0x2c3950
uint32 zUICustomExtrasManager::GivePlayerTreasureChest(uint32 numChests)
{
	uint32 newChestTotal;
	uint32 i;
	xBase* b;
	// Line 546, Address: 0x2c3950, Func Offset: 0
	// Line 547, Address: 0x2c3954, Func Offset: 0x4
	// Line 550, Address: 0x2c395c, Func Offset: 0xc
	// Line 551, Address: 0x2c3960, Func Offset: 0x10
	// Line 550, Address: 0x2c3964, Func Offset: 0x14
	// Line 553, Address: 0x2c3968, Func Offset: 0x18
	// Line 551, Address: 0x2c3970, Func Offset: 0x20
	// Line 553, Address: 0x2c3974, Func Offset: 0x24
	// Line 555, Address: 0x2c398c, Func Offset: 0x3c
	// Line 559, Address: 0x2c39a0, Func Offset: 0x50
	// Line 560, Address: 0x2c39a8, Func Offset: 0x58
	// Line 561, Address: 0x2c39c0, Func Offset: 0x70
	// Line 563, Address: 0x2c39e0, Func Offset: 0x90
	// Line 548, Address: 0x2c39e8, Func Offset: 0x98
	// Line 565, Address: 0x2c39f0, Func Offset: 0xa0
	// Line 567, Address: 0x2c3a00, Func Offset: 0xb0
	// Line 568, Address: 0x2c3a04, Func Offset: 0xb4
	// Func End, Address: 0x2c3a10, Func Offset: 0xc0
}

// IsCheatEnabled__22zUICustomExtrasManagerF19eExtrasScreenCheats
// Start address: 0x2c3a10
uint32 zUICustomExtrasManager::IsCheatEnabled(eExtrasScreenCheats cheat)
{
	// Line 541, Address: 0x2c3a10, Func Offset: 0
	// Line 542, Address: 0x2c3a6c, Func Offset: 0x5c
	// Func End, Address: 0x2c3a74, Func Offset: 0x64
}

// IsCostumeEnabled__22zUICustomExtrasManagerF17eSNDCurrentPlayer
// Start address: 0x2c3a80
uint32 zUICustomExtrasManager::IsCostumeEnabled(eSNDCurrentPlayer player)
{
	uint32 i;
	// Line 515, Address: 0x2c3a80, Func Offset: 0
	// Line 536, Address: 0x2c3a9c, Func Offset: 0x1c
	// Line 515, Address: 0x2c3aa0, Func Offset: 0x20
	// Line 522, Address: 0x2c3aa4, Func Offset: 0x24
	// Line 536, Address: 0x2c3aa8, Func Offset: 0x28
	// Line 517, Address: 0x2c3aac, Func Offset: 0x2c
	// Line 533, Address: 0x2c3ab8, Func Offset: 0x38
	// Line 517, Address: 0x2c3ac0, Func Offset: 0x40
	// Line 533, Address: 0x2c3ac4, Func Offset: 0x44
	// Line 536, Address: 0x2c3ad0, Func Offset: 0x50
	// Line 522, Address: 0x2c3af4, Func Offset: 0x74
	// Line 536, Address: 0x2c3af8, Func Offset: 0x78
	// Line 522, Address: 0x2c3b14, Func Offset: 0x94
	// Line 536, Address: 0x2c3b20, Func Offset: 0xa0
	// Line 522, Address: 0x2c3b30, Func Offset: 0xb0
	// Line 536, Address: 0x2c3b38, Func Offset: 0xb8
	// Line 523, Address: 0x2c3b40, Func Offset: 0xc0
	// Line 536, Address: 0x2c3b44, Func Offset: 0xc4
	// Line 523, Address: 0x2c3b50, Func Offset: 0xd0
	// Line 536, Address: 0x2c3b54, Func Offset: 0xd4
	// Line 523, Address: 0x2c3b58, Func Offset: 0xd8
	// Line 536, Address: 0x2c3b60, Func Offset: 0xe0
	// Line 530, Address: 0x2c3b70, Func Offset: 0xf0
	// Line 536, Address: 0x2c3b74, Func Offset: 0xf4
	// Line 530, Address: 0x2c3b80, Func Offset: 0x100
	// Line 536, Address: 0x2c3b84, Func Offset: 0x104
	// Line 537, Address: 0x2c3b8c, Func Offset: 0x10c
	// Func End, Address: 0x2c3b94, Func Offset: 0x114
}

// GetNumChestsNeeded__22zUICustomExtrasManagerFv
// Start address: 0x2c3ba0
uint8 zUICustomExtrasManager::GetNumChestsNeeded()
{
	// Line 501, Address: 0x2c3ba0, Func Offset: 0
	// Func End, Address: 0x2c3ba8, Func Offset: 0x8
}

// zMenuSB_IsTaskUnlocked__FUiUi
// Start address: 0x2c3bb0
uint32 zMenuSB_IsTaskUnlocked(uint32 sceneID, uint32 taskID)
{
	// Line 409, Address: 0x2c3bb0, Func Offset: 0
	// Line 412, Address: 0x2c3bc0, Func Offset: 0x10
	// Line 413, Address: 0x2c3c24, Func Offset: 0x74
	// Line 414, Address: 0x2c3c44, Func Offset: 0x94
	// Func End, Address: 0x2c3c4c, Func Offset: 0x9c
}

// zMenuSB_UnlockAllTasks__Fv
// Start address: 0x2c3c50
void zMenuSB_UnlockAllTasks()
{
	int8 counterName[19];
	uint32 currentWorld;
	uint32 currentTask;
	_xCounter* counter;
	// Line 362, Address: 0x2c3c50, Func Offset: 0
	// Line 363, Address: 0x2c3c54, Func Offset: 0x4
	// Line 362, Address: 0x2c3c58, Func Offset: 0x8
	// Line 363, Address: 0x2c3c5c, Func Offset: 0xc
	// Line 362, Address: 0x2c3c60, Func Offset: 0x10
	// Line 363, Address: 0x2c3c64, Func Offset: 0x14
	// Line 362, Address: 0x2c3c68, Func Offset: 0x18
	// Line 363, Address: 0x2c3c6c, Func Offset: 0x1c
	// Line 362, Address: 0x2c3c70, Func Offset: 0x20
	// Line 363, Address: 0x2c3c8c, Func Offset: 0x3c
	// Line 365, Address: 0x2c3ca8, Func Offset: 0x58
	// Line 393, Address: 0x2c3cb8, Func Offset: 0x68
	// Line 368, Address: 0x2c3ce0, Func Offset: 0x90
	// Line 393, Address: 0x2c3ce8, Func Offset: 0x98
	// Line 371, Address: 0x2c3cf0, Func Offset: 0xa0
	// Line 393, Address: 0x2c3cf4, Func Offset: 0xa4
	// Line 371, Address: 0x2c3cf8, Func Offset: 0xa8
	// Line 393, Address: 0x2c3d04, Func Offset: 0xb4
	// Line 374, Address: 0x2c3d08, Func Offset: 0xb8
	// Line 371, Address: 0x2c3d0c, Func Offset: 0xbc
	// Line 393, Address: 0x2c3d10, Func Offset: 0xc0
	// Line 372, Address: 0x2c3d14, Func Offset: 0xc4
	// Line 371, Address: 0x2c3d18, Func Offset: 0xc8
	// Line 393, Address: 0x2c3d1c, Func Offset: 0xcc
	// Line 372, Address: 0x2c3d24, Func Offset: 0xd4
	// Line 393, Address: 0x2c3d28, Func Offset: 0xd8
	// Line 377, Address: 0x2c3d58, Func Offset: 0x108
	// Line 393, Address: 0x2c3d5c, Func Offset: 0x10c
	// Line 377, Address: 0x2c3d60, Func Offset: 0x110
	// Line 393, Address: 0x2c3d6c, Func Offset: 0x11c
	// Line 377, Address: 0x2c3d74, Func Offset: 0x124
	// Line 378, Address: 0x2c3d78, Func Offset: 0x128
	// Line 377, Address: 0x2c3d7c, Func Offset: 0x12c
	// Line 393, Address: 0x2c3d80, Func Offset: 0x130
	// Line 378, Address: 0x2c3d88, Func Offset: 0x138
	// Line 393, Address: 0x2c3d8c, Func Offset: 0x13c
	// Line 389, Address: 0x2c3dac, Func Offset: 0x15c
	// Line 393, Address: 0x2c3db0, Func Offset: 0x160
	// Line 391, Address: 0x2c3dbc, Func Offset: 0x16c
	// Line 393, Address: 0x2c3dc0, Func Offset: 0x170
	// Func End, Address: 0x2c3e10, Func Offset: 0x1c0
}

// zMenuSB_LoadTaskDefaults__Fv
// Start address: 0x2c3e10
void zMenuSB_LoadTaskDefaults()
{
	int8 counterName[19];
	uint32 currentWorld;
	uint32 currentTask;
	_xCounter* counter;
	// Line 329, Address: 0x2c3e10, Func Offset: 0
	// Line 330, Address: 0x2c3e14, Func Offset: 0x4
	// Line 329, Address: 0x2c3e18, Func Offset: 0x8
	// Line 330, Address: 0x2c3e1c, Func Offset: 0xc
	// Line 329, Address: 0x2c3e20, Func Offset: 0x10
	// Line 330, Address: 0x2c3e24, Func Offset: 0x14
	// Line 329, Address: 0x2c3e28, Func Offset: 0x18
	// Line 330, Address: 0x2c3e2c, Func Offset: 0x1c
	// Line 329, Address: 0x2c3e30, Func Offset: 0x20
	// Line 330, Address: 0x2c3e4c, Func Offset: 0x3c
	// Line 332, Address: 0x2c3e68, Func Offset: 0x58
	// Line 359, Address: 0x2c3e78, Func Offset: 0x68
	// Line 335, Address: 0x2c3ea0, Func Offset: 0x90
	// Line 359, Address: 0x2c3ea8, Func Offset: 0x98
	// Line 338, Address: 0x2c3eb0, Func Offset: 0xa0
	// Line 359, Address: 0x2c3eb4, Func Offset: 0xa4
	// Line 338, Address: 0x2c3eb8, Func Offset: 0xa8
	// Line 359, Address: 0x2c3ec4, Func Offset: 0xb4
	// Line 341, Address: 0x2c3ec8, Func Offset: 0xb8
	// Line 338, Address: 0x2c3ecc, Func Offset: 0xbc
	// Line 359, Address: 0x2c3ed0, Func Offset: 0xc0
	// Line 339, Address: 0x2c3ed4, Func Offset: 0xc4
	// Line 338, Address: 0x2c3ed8, Func Offset: 0xc8
	// Line 359, Address: 0x2c3edc, Func Offset: 0xcc
	// Line 339, Address: 0x2c3ee4, Func Offset: 0xd4
	// Line 359, Address: 0x2c3ee8, Func Offset: 0xd8
	// Line 344, Address: 0x2c3f18, Func Offset: 0x108
	// Line 359, Address: 0x2c3f1c, Func Offset: 0x10c
	// Line 344, Address: 0x2c3f20, Func Offset: 0x110
	// Line 359, Address: 0x2c3f2c, Func Offset: 0x11c
	// Line 344, Address: 0x2c3f34, Func Offset: 0x124
	// Line 345, Address: 0x2c3f38, Func Offset: 0x128
	// Line 344, Address: 0x2c3f3c, Func Offset: 0x12c
	// Line 359, Address: 0x2c3f40, Func Offset: 0x130
	// Line 345, Address: 0x2c3f48, Func Offset: 0x138
	// Line 359, Address: 0x2c3f4c, Func Offset: 0x13c
	// Func End, Address: 0x2c3fc0, Func Offset: 0x1b0
}

// zMenuSB_InitTaskDefaults__FP8xIniFile
// Start address: 0x2c3fc0
void zMenuSB_InitTaskDefaults(xIniFile* ini)
{
	int32 idx;
	int8* buf;
	uint32 currentWorld;
	uint32 currentTask;
	// Line 295, Address: 0x2c3fc0, Func Offset: 0
	// Line 296, Address: 0x2c3fc4, Func Offset: 0x4
	// Line 295, Address: 0x2c3fc8, Func Offset: 0x8
	// Line 296, Address: 0x2c3fcc, Func Offset: 0xc
	// Line 295, Address: 0x2c3fd0, Func Offset: 0x10
	// Line 296, Address: 0x2c3fdc, Func Offset: 0x1c
	// Line 295, Address: 0x2c3fe0, Func Offset: 0x20
	// Line 296, Address: 0x2c3fe4, Func Offset: 0x24
	// Line 298, Address: 0x2c3ff0, Func Offset: 0x30
	// Line 300, Address: 0x2c4010, Func Offset: 0x50
	// Line 298, Address: 0x2c4014, Func Offset: 0x54
	// Line 300, Address: 0x2c4018, Func Offset: 0x58
	// Line 301, Address: 0x2c401c, Func Offset: 0x5c
	// Line 305, Address: 0x2c4024, Func Offset: 0x64
	// Line 324, Address: 0x2c4068, Func Offset: 0xa8
	// Line 326, Address: 0x2c4074, Func Offset: 0xb4
	// Line 306, Address: 0x2c407c, Func Offset: 0xbc
	// Line 326, Address: 0x2c4080, Func Offset: 0xc0
	// Line 310, Address: 0x2c4088, Func Offset: 0xc8
	// Line 326, Address: 0x2c408c, Func Offset: 0xcc
	// Line 309, Address: 0x2c4090, Func Offset: 0xd0
	// Line 310, Address: 0x2c4094, Func Offset: 0xd4
	// Line 314, Address: 0x2c40a4, Func Offset: 0xe4
	// Line 326, Address: 0x2c40a8, Func Offset: 0xe8
	// Line 314, Address: 0x2c40bc, Func Offset: 0xfc
	// Line 326, Address: 0x2c40c4, Func Offset: 0x104
	// Line 314, Address: 0x2c40cc, Func Offset: 0x10c
	// Line 326, Address: 0x2c40d0, Func Offset: 0x110
	// Line 319, Address: 0x2c40e4, Func Offset: 0x124
	// Line 326, Address: 0x2c40ec, Func Offset: 0x12c
	// Line 323, Address: 0x2c4100, Func Offset: 0x140
	// Line 326, Address: 0x2c4104, Func Offset: 0x144
	// Line 316, Address: 0x2c4128, Func Offset: 0x168
	// Line 326, Address: 0x2c412c, Func Offset: 0x16c
	// Func End, Address: 0x2c4164, Func Offset: 0x1a4
}

// zMenuSB_LoadMenuCounters__FP7xSerial
// Start address: 0x2c4170
void zMenuSB_LoadMenuCounters(xSerial* s)
{
	uint32 taskGroupID;
	xGroup* group;
	uint32 numCounters;
	_xCounter* counter;
	uint32 i;
	// Line 277, Address: 0x2c4170, Func Offset: 0
	// Line 279, Address: 0x2c4184, Func Offset: 0x14
	// Line 277, Address: 0x2c4188, Func Offset: 0x18
	// Line 279, Address: 0x2c418c, Func Offset: 0x1c
	// Line 280, Address: 0x2c4198, Func Offset: 0x28
	// Line 283, Address: 0x2c41a4, Func Offset: 0x34
	// Line 285, Address: 0x2c41b0, Func Offset: 0x40
	// Line 292, Address: 0x2c41bc, Func Offset: 0x4c
	// Line 287, Address: 0x2c41c4, Func Offset: 0x54
	// Line 292, Address: 0x2c41c8, Func Offset: 0x58
	// Line 288, Address: 0x2c41d0, Func Offset: 0x60
	// Line 292, Address: 0x2c41d4, Func Offset: 0x64
	// Func End, Address: 0x2c420c, Func Offset: 0x9c
}

// zMenuSB_SaveMenuCounters__FP7xSerial
// Start address: 0x2c4210
void zMenuSB_SaveMenuCounters(xSerial* s)
{
	uint32 taskGroupID;
	xGroup* group;
	uint32 numCounters;
	_xCounter* counter;
	uint32 i;
	// Line 261, Address: 0x2c4210, Func Offset: 0
	// Line 263, Address: 0x2c4224, Func Offset: 0x14
	// Line 261, Address: 0x2c4228, Func Offset: 0x18
	// Line 263, Address: 0x2c422c, Func Offset: 0x1c
	// Line 264, Address: 0x2c4238, Func Offset: 0x28
	// Line 267, Address: 0x2c4244, Func Offset: 0x34
	// Line 269, Address: 0x2c4250, Func Offset: 0x40
	// Line 274, Address: 0x2c425c, Func Offset: 0x4c
	// Line 271, Address: 0x2c4264, Func Offset: 0x54
	// Line 274, Address: 0x2c4268, Func Offset: 0x58
	// Line 272, Address: 0x2c4270, Func Offset: 0x60
	// Line 274, Address: 0x2c4274, Func Offset: 0x64
	// Func End, Address: 0x2c42ac, Func Offset: 0x9c
}

// zMenuSB_EnsureFreeAudioStream__Fb
// Start address: 0x2c42b0
uint8 zMenuSB_EnsureFreeAudioStream(uint8 willingToStopMainGameMusic)
{
	uint8 haveFreeStreamedVoice;
	// Line 215, Address: 0x2c42b0, Func Offset: 0
	// Line 217, Address: 0x2c42b4, Func Offset: 0x4
	// Line 215, Address: 0x2c42b8, Func Offset: 0x8
	// Line 217, Address: 0x2c42c4, Func Offset: 0x14
	// Line 218, Address: 0x2c42d4, Func Offset: 0x24
	// Line 221, Address: 0x2c42dc, Func Offset: 0x2c
	// Line 222, Address: 0x2c42e4, Func Offset: 0x34
	// Line 228, Address: 0x2c42f8, Func Offset: 0x48
	// Line 229, Address: 0x2c4304, Func Offset: 0x54
	// Line 228, Address: 0x2c4308, Func Offset: 0x58
	// Line 229, Address: 0x2c430c, Func Offset: 0x5c
	// Line 230, Address: 0x2c434c, Func Offset: 0x9c
	// Line 238, Address: 0x2c4358, Func Offset: 0xa8
	// Line 225, Address: 0x2c4360, Func Offset: 0xb0
	// Line 238, Address: 0x2c4368, Func Offset: 0xb8
	// Line 239, Address: 0x2c437c, Func Offset: 0xcc
	// Func End, Address: 0x2c438c, Func Offset: 0xdc
}

// zMenuSB_UpdatePowerUpMenu__Fv
// Start address: 0x2c4390
void zMenuSB_UpdatePowerUpMenu()
{
	uint32 i;
	// Line 176, Address: 0x2c4390, Func Offset: 0
	// Line 177, Address: 0x2c4398, Func Offset: 0x8
	// Line 186, Address: 0x2c43ac, Func Offset: 0x1c
	// Line 177, Address: 0x2c43b0, Func Offset: 0x20
	// Line 182, Address: 0x2c43b4, Func Offset: 0x24
	// Line 186, Address: 0x2c43b8, Func Offset: 0x28
	// Line 177, Address: 0x2c43c0, Func Offset: 0x30
	// Line 179, Address: 0x2c43c4, Func Offset: 0x34
	// Line 182, Address: 0x2c43d0, Func Offset: 0x40
	// Line 185, Address: 0x2c43d8, Func Offset: 0x48
	// Line 186, Address: 0x2c43e4, Func Offset: 0x54
	// Line 189, Address: 0x2c43fc, Func Offset: 0x6c
	// Line 190, Address: 0x2c4400, Func Offset: 0x70
	// Line 191, Address: 0x2c4418, Func Offset: 0x88
	// Line 196, Address: 0x2c4460, Func Offset: 0xd0
	// Func End, Address: 0x2c4484, Func Offset: 0xf4
}

// zMenuSB_InitPowerUpMenu__Fv
// Start address: 0x2c4490
void zMenuSB_InitPowerUpMenu()
{
	uint32 i;
	// Line 152, Address: 0x2c4490, Func Offset: 0
	// Line 153, Address: 0x2c44a0, Func Offset: 0x10
	// Line 155, Address: 0x2c44a4, Func Offset: 0x14
	// Line 158, Address: 0x2c44f8, Func Offset: 0x68
	// Line 160, Address: 0x2c450c, Func Offset: 0x7c
	// Line 162, Address: 0x2c451c, Func Offset: 0x8c
	// Line 163, Address: 0x2c45e8, Func Offset: 0x158
	// Func End, Address: 0x2c4614, Func Offset: 0x184
}

