typedef struct __xScrFxMgr;



struct __xScrFxMgr
{
	uint16 m_letterbox;
	uint8 m_startFadeOut;
	uint8 m_doneFadeOut;
	uint8 m_startFadeIn;
	uint8 m_doneFadeIn;
	uint16 m_fadeOutCounter;
	uint16 m_fadeInCounter;
	int16 shake;
};

int32 p2MainLetterboxHeight;
int32 p2MainLetterboxDelta;
__xScrFxMgr gScrFx;
uint32 gScreenSaver;

void iScrFxFinishFade();
void iScrFxRender();
void iScrFxShake();
void iScrFxFadeIn();
void iScrFxFadeOut();
void iScrFxLetterbox(int32 flag);
void iScrFxIdle();

// iScrFxFinishFade__Fv
// Start address: 0x36fd90
void iScrFxFinishFade()
{
	// Line 224, Address: 0x36fd90, Func Offset: 0
	// Line 225, Address: 0x36fd98, Func Offset: 0x8
	// Line 229, Address: 0x36fda0, Func Offset: 0x10
	// Line 230, Address: 0x36fda8, Func Offset: 0x18
	// Line 231, Address: 0x36fdb0, Func Offset: 0x20
	// Line 232, Address: 0x36fdb8, Func Offset: 0x28
	// Line 233, Address: 0x36fdc0, Func Offset: 0x30
	// Line 234, Address: 0x36fe88, Func Offset: 0xf8
	// Line 235, Address: 0x36fe90, Func Offset: 0x100
	// Line 236, Address: 0x36fea0, Func Offset: 0x110
	// Func End, Address: 0x36feb0, Func Offset: 0x120
}

// iScrFxRender__Fv
// Start address: 0x36feb0
void iScrFxRender()
{
	// Line 147, Address: 0x36feb0, Func Offset: 0
	// Line 158, Address: 0x36feb8, Func Offset: 0x8
	// Line 160, Address: 0x36fec8, Func Offset: 0x18
	// Line 162, Address: 0x36fed8, Func Offset: 0x28
	// Line 166, Address: 0x36ff04, Func Offset: 0x54
	// Line 167, Address: 0x36ff18, Func Offset: 0x68
	// Line 169, Address: 0x36ff24, Func Offset: 0x74
	// Line 171, Address: 0x36ff3c, Func Offset: 0x8c
	// Line 172, Address: 0x36ff48, Func Offset: 0x98
	// Line 174, Address: 0x36ff50, Func Offset: 0xa0
	// Line 178, Address: 0x36ff64, Func Offset: 0xb4
	// Line 180, Address: 0x36ff74, Func Offset: 0xc4
	// Line 182, Address: 0x36ff84, Func Offset: 0xd4
	// Line 186, Address: 0x36ffb8, Func Offset: 0x108
	// Line 187, Address: 0x36ffcc, Func Offset: 0x11c
	// Line 188, Address: 0x36ffe4, Func Offset: 0x134
	// Line 189, Address: 0x36fff0, Func Offset: 0x140
	// Line 194, Address: 0x36fffc, Func Offset: 0x14c
	// Line 195, Address: 0x37000c, Func Offset: 0x15c
	// Line 197, Address: 0x37001c, Func Offset: 0x16c
	// Line 198, Address: 0x370024, Func Offset: 0x174
	// Line 199, Address: 0x370028, Func Offset: 0x178
	// Line 200, Address: 0x370030, Func Offset: 0x180
	// Line 202, Address: 0x37003c, Func Offset: 0x18c
	// Line 203, Address: 0x370040, Func Offset: 0x190
	// Line 205, Address: 0x370044, Func Offset: 0x194
	// Line 207, Address: 0x370050, Func Offset: 0x1a0
	// Line 209, Address: 0x370074, Func Offset: 0x1c4
	// Line 216, Address: 0x3700a0, Func Offset: 0x1f0
	// Line 218, Address: 0x3700ac, Func Offset: 0x1fc
	// Line 221, Address: 0x3700d4, Func Offset: 0x224
	// Func End, Address: 0x3700e4, Func Offset: 0x234
}

// iScrFxShake__Fi
// Start address: 0x3700f0
void iScrFxShake()
{
	// Line 133, Address: 0x3700f0, Func Offset: 0
	// Line 135, Address: 0x3700f8, Func Offset: 0x8
	// Func End, Address: 0x370100, Func Offset: 0x10
}

// iScrFxFadeIn__Fv
// Start address: 0x370100
void iScrFxFadeIn()
{
	// Line 116, Address: 0x370100, Func Offset: 0
	// Func End, Address: 0x370108, Func Offset: 0x8
}

// iScrFxFadeOut__Fv
// Start address: 0x370110
void iScrFxFadeOut()
{
	// Line 103, Address: 0x370110, Func Offset: 0
	// Func End, Address: 0x370118, Func Offset: 0x8
}

// iScrFxLetterbox__Fi
// Start address: 0x370120
void iScrFxLetterbox(int32 flag)
{
	// Line 86, Address: 0x370120, Func Offset: 0
	// Line 87, Address: 0x370128, Func Offset: 0x8
	// Line 89, Address: 0x370138, Func Offset: 0x18
	// Line 90, Address: 0x370140, Func Offset: 0x20
	// Func End, Address: 0x370148, Func Offset: 0x28
}

// iScrFxIdle__Fv
// Start address: 0x370150
void iScrFxIdle()
{
	// Line 47, Address: 0x370150, Func Offset: 0
	// Line 49, Address: 0x370160, Func Offset: 0x10
	// Line 50, Address: 0x370174, Func Offset: 0x24
	// Line 52, Address: 0x370180, Func Offset: 0x30
	// Line 54, Address: 0x370198, Func Offset: 0x48
	// Line 55, Address: 0x3701a4, Func Offset: 0x54
	// Line 58, Address: 0x3701ac, Func Offset: 0x5c
	// Line 62, Address: 0x3701c0, Func Offset: 0x70
	// Line 64, Address: 0x3701d0, Func Offset: 0x80
	// Line 65, Address: 0x3701e4, Func Offset: 0x94
	// Line 67, Address: 0x3701fc, Func Offset: 0xac
	// Line 68, Address: 0x370208, Func Offset: 0xb8
	// Line 71, Address: 0x370214, Func Offset: 0xc4
	// Func End, Address: 0x37021c, Func Offset: 0xcc
}

