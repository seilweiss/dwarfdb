



uint8 xSubTitlesRender(uint32 aid, float32 fTime);
void xSubTitlesUnloaded();
void* xSubTitlesRead(void* indata, uint32 insize, uint32* outsize);

// xSubTitlesRender__FUif
// Start address: 0x44cd50
uint8 xSubTitlesRender(uint32 aid, float32 fTime)
{
	uint32 uSearchIndex;
	int8* pszDisplay;
	xtextbox tbSubtitles;
	xSubtitlesAsset* m_pCurrentAsset;
	uint32 m_uLastTimeKey;
	// Line 67, Address: 0x44cd50, Func Offset: 0
	// Line 70, Address: 0x44cd68, Func Offset: 0x18
	// Line 71, Address: 0x44cd70, Func Offset: 0x20
	// Line 73, Address: 0x44cd8c, Func Offset: 0x3c
	// Line 77, Address: 0x44cda4, Func Offset: 0x54
	// Line 82, Address: 0x44cdb0, Func Offset: 0x60
	// Line 86, Address: 0x44cdb8, Func Offset: 0x68
	// Line 93, Address: 0x44cde8, Func Offset: 0x98
	// Line 94, Address: 0x44cdec, Func Offset: 0x9c
	// Line 95, Address: 0x44ce0c, Func Offset: 0xbc
	// Line 101, Address: 0x44ce38, Func Offset: 0xe8
	// Line 105, Address: 0x44ce58, Func Offset: 0x108
	// Line 106, Address: 0x44ce60, Func Offset: 0x110
	// Line 110, Address: 0x44ce80, Func Offset: 0x130
	// Line 112, Address: 0x44ce88, Func Offset: 0x138
	// Line 114, Address: 0x44cea0, Func Offset: 0x150
	// Line 118, Address: 0x44cea4, Func Offset: 0x154
	// Line 115, Address: 0x44ceb8, Func Offset: 0x168
	// Line 116, Address: 0x44cebc, Func Offset: 0x16c
	// Line 118, Address: 0x44cec0, Func Offset: 0x170
	// Line 116, Address: 0x44cec4, Func Offset: 0x174
	// Line 118, Address: 0x44cec8, Func Offset: 0x178
	// Line 116, Address: 0x44ced0, Func Offset: 0x180
	// Line 114, Address: 0x44ced4, Func Offset: 0x184
	// Line 118, Address: 0x44ced8, Func Offset: 0x188
	// Line 114, Address: 0x44cedc, Func Offset: 0x18c
	// Line 118, Address: 0x44cee0, Func Offset: 0x190
	// Line 114, Address: 0x44cee4, Func Offset: 0x194
	// Line 115, Address: 0x44cee8, Func Offset: 0x198
	// Line 118, Address: 0x44ceec, Func Offset: 0x19c
	// Line 112, Address: 0x44cf00, Func Offset: 0x1b0
	// Line 118, Address: 0x44cf04, Func Offset: 0x1b4
	// Line 115, Address: 0x44cf0c, Func Offset: 0x1bc
	// Line 118, Address: 0x44cf10, Func Offset: 0x1c0
	// Line 115, Address: 0x44cf14, Func Offset: 0x1c4
	// Line 118, Address: 0x44cf18, Func Offset: 0x1c8
	// Line 115, Address: 0x44cf2c, Func Offset: 0x1dc
	// Line 114, Address: 0x44cf30, Func Offset: 0x1e0
	// Line 118, Address: 0x44cf34, Func Offset: 0x1e4
	// Line 115, Address: 0x44cf44, Func Offset: 0x1f4
	// Line 114, Address: 0x44cf48, Func Offset: 0x1f8
	// Line 118, Address: 0x44cf4c, Func Offset: 0x1fc
	// Line 115, Address: 0x44cf74, Func Offset: 0x224
	// Line 118, Address: 0x44cf78, Func Offset: 0x228
	// Line 121, Address: 0x44d1f8, Func Offset: 0x4a8
	// Line 122, Address: 0x44d204, Func Offset: 0x4b4
	// Line 121, Address: 0x44d208, Func Offset: 0x4b8
	// Line 122, Address: 0x44d20c, Func Offset: 0x4bc
	// Line 128, Address: 0x44d210, Func Offset: 0x4c0
	// Line 123, Address: 0x44d214, Func Offset: 0x4c4
	// Line 122, Address: 0x44d218, Func Offset: 0x4c8
	// Line 123, Address: 0x44d21c, Func Offset: 0x4cc
	// Line 126, Address: 0x44d220, Func Offset: 0x4d0
	// Line 124, Address: 0x44d224, Func Offset: 0x4d4
	// Line 123, Address: 0x44d228, Func Offset: 0x4d8
	// Line 126, Address: 0x44d22c, Func Offset: 0x4dc
	// Line 123, Address: 0x44d230, Func Offset: 0x4e0
	// Line 125, Address: 0x44d234, Func Offset: 0x4e4
	// Line 128, Address: 0x44d238, Func Offset: 0x4e8
	// Line 125, Address: 0x44d23c, Func Offset: 0x4ec
	// Line 124, Address: 0x44d244, Func Offset: 0x4f4
	// Line 125, Address: 0x44d248, Func Offset: 0x4f8
	// Line 126, Address: 0x44d24c, Func Offset: 0x4fc
	// Line 125, Address: 0x44d250, Func Offset: 0x500
	// Line 126, Address: 0x44d254, Func Offset: 0x504
	// Line 128, Address: 0x44d258, Func Offset: 0x508
	// Line 129, Address: 0x44d274, Func Offset: 0x524
	// Line 75, Address: 0x44d27c, Func Offset: 0x52c
	// Line 129, Address: 0x44d280, Func Offset: 0x530
	// Line 80, Address: 0x44d290, Func Offset: 0x540
	// Line 83, Address: 0x44d298, Func Offset: 0x548
	// Line 90, Address: 0x44d2a0, Func Offset: 0x550
	// Line 130, Address: 0x44d2a4, Func Offset: 0x554
	// Func End, Address: 0x44d2bc, Func Offset: 0x56c
}

// xSubTitlesUnloaded__FPvUi
// Start address: 0x44d2c0
void xSubTitlesUnloaded()
{
	// Line 64, Address: 0x44d2c0, Func Offset: 0
	// Func End, Address: 0x44d2c8, Func Offset: 0x8
}

// xSubTitlesRead__FPvUiPvUiPUi
// Start address: 0x44d2d0
void* xSubTitlesRead(void* indata, uint32 insize, uint32* outsize)
{
	xSubtitlesAsset* pSubTitleAsset;
	// Line 54, Address: 0x44d2d0, Func Offset: 0
	// Line 55, Address: 0x44d2f4, Func Offset: 0x24
	// Line 56, Address: 0x44d308, Func Offset: 0x38
	// Line 57, Address: 0x44d318, Func Offset: 0x48
	// Line 58, Address: 0x44d31c, Func Offset: 0x4c
	// Line 59, Address: 0x44d320, Func Offset: 0x50
	// Func End, Address: 0x44d33c, Func Offset: 0x6c
}

