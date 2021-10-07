typedef struct __xScrFxMgr;

typedef void(*type_0)(int32);
typedef void(*type_1)();
typedef void(*type_2)();
typedef void(*type_3)(int32);
typedef int32(*type_4)();
typedef void(*type_5)();


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

__xScrFxMgr gScrFx;
void(*xScrFxScriptComplete)();
int32(*xScrFxScriptBusy)();
void(*xScrFxScriptShake)(int32);
void(*xScrFxScriptFadeIn)();
void(*xScrFxScriptFadeOut)();
void(*xScrFxScriptLetterbox)(int32);

void xScrFxShake(int32 permilli);
void xScrFxFadeIn();
void xScrFxFadeOut();
void xScrFxLetterbox(int32 flag);
void xScrFxScriptComplete();
int32 xScrFxScriptBusy();
void xScrFxScriptShake(int32 permilli);
void xScrFxScriptFadeIn();
void xScrFxScriptFadeOut();
void xScrFxScriptLetterbox(int32 flag);
void xScrFxRegisterScriptCalls();

// xScrFxShake__Fi
// Start address: 0x3329d0
void xScrFxShake(int32 permilli)
{
	// Line 167, Address: 0x3329d0, Func Offset: 0
	// Line 168, Address: 0x3329d8, Func Offset: 0x8
	// Line 169, Address: 0x3329e0, Func Offset: 0x10
	// Func End, Address: 0x3329f0, Func Offset: 0x20
}

// xScrFxFadeIn__Fv
// Start address: 0x3329f0
void xScrFxFadeIn()
{
	// Line 149, Address: 0x3329f0, Func Offset: 0
	// Line 150, Address: 0x3329f8, Func Offset: 0x8
	// Line 151, Address: 0x332a00, Func Offset: 0x10
	// Line 152, Address: 0x332a0c, Func Offset: 0x1c
	// Line 153, Address: 0x332a14, Func Offset: 0x24
	// Line 154, Address: 0x332a1c, Func Offset: 0x2c
	// Line 155, Address: 0x332a24, Func Offset: 0x34
	// Line 156, Address: 0x332a2c, Func Offset: 0x3c
	// Func End, Address: 0x332a3c, Func Offset: 0x4c
}

// xScrFxFadeOut__Fv
// Start address: 0x332a40
void xScrFxFadeOut()
{
	// Line 130, Address: 0x332a40, Func Offset: 0
	// Line 131, Address: 0x332a48, Func Offset: 0x8
	// Line 132, Address: 0x332a50, Func Offset: 0x10
	// Line 133, Address: 0x332a5c, Func Offset: 0x1c
	// Line 134, Address: 0x332a64, Func Offset: 0x24
	// Line 135, Address: 0x332a6c, Func Offset: 0x2c
	// Line 136, Address: 0x332a74, Func Offset: 0x34
	// Line 137, Address: 0x332a7c, Func Offset: 0x3c
	// Func End, Address: 0x332a8c, Func Offset: 0x4c
}

// xScrFxLetterbox__Fi
// Start address: 0x332a90
void xScrFxLetterbox(int32 flag)
{
	// Line 115, Address: 0x332a90, Func Offset: 0
	// Line 116, Address: 0x332a98, Func Offset: 0x8
	// Line 117, Address: 0x332aa0, Func Offset: 0x10
	// Line 118, Address: 0x332aa8, Func Offset: 0x18
	// Func End, Address: 0x332ab8, Func Offset: 0x28
}

// xScrFxScriptComplete__Fv
// Start address: 0x332ac0
void xScrFxScriptComplete()
{
	// Line 98, Address: 0x332ac0, Func Offset: 0
	// Line 99, Address: 0x332ac8, Func Offset: 0x8
	// Line 100, Address: 0x332ad0, Func Offset: 0x10
	// Line 101, Address: 0x332ad8, Func Offset: 0x18
	// Line 102, Address: 0x332b58, Func Offset: 0x98
	// Func End, Address: 0x332b68, Func Offset: 0xa8
}

// xScrFxScriptBusy__Fv
// Start address: 0x332b70
int32 xScrFxScriptBusy()
{
	// Line 82, Address: 0x332b70, Func Offset: 0
	// Line 84, Address: 0x332b80, Func Offset: 0x10
	// Line 88, Address: 0x332b98, Func Offset: 0x28
	// Line 90, Address: 0x332ba8, Func Offset: 0x38
	// Line 94, Address: 0x332bc0, Func Offset: 0x50
	// Line 95, Address: 0x332bc4, Func Offset: 0x54
	// Func End, Address: 0x332bcc, Func Offset: 0x5c
}

// xScrFxScriptShake__Fi
// Start address: 0x332bd0
void xScrFxScriptShake(int32 permilli)
{
	// Line 76, Address: 0x332bd0, Func Offset: 0
	// Line 77, Address: 0x332bd8, Func Offset: 0x8
	// Line 78, Address: 0x332be0, Func Offset: 0x10
	// Func End, Address: 0x332bf0, Func Offset: 0x20
}

// xScrFxScriptFadeIn__Fv
// Start address: 0x332bf0
void xScrFxScriptFadeIn()
{
	// Line 71, Address: 0x332bf0, Func Offset: 0
	// Line 72, Address: 0x332bf8, Func Offset: 0x8
	// Line 73, Address: 0x332c2c, Func Offset: 0x3c
	// Func End, Address: 0x332c3c, Func Offset: 0x4c
}

// xScrFxScriptFadeOut__Fv
// Start address: 0x332c40
void xScrFxScriptFadeOut()
{
	// Line 66, Address: 0x332c40, Func Offset: 0
	// Line 67, Address: 0x332c48, Func Offset: 0x8
	// Line 68, Address: 0x332c7c, Func Offset: 0x3c
	// Func End, Address: 0x332c8c, Func Offset: 0x4c
}

// xScrFxScriptLetterbox__Fi
// Start address: 0x332c90
void xScrFxScriptLetterbox(int32 flag)
{
	// Line 61, Address: 0x332c90, Func Offset: 0
	// Line 62, Address: 0x332c98, Func Offset: 0x8
	// Line 63, Address: 0x332ca8, Func Offset: 0x18
	// Func End, Address: 0x332cb8, Func Offset: 0x28
}

// xScrFxRegisterScriptCalls__Fv
// Start address: 0x332cc0
void xScrFxRegisterScriptCalls()
{
	// Line 37, Address: 0x332cc0, Func Offset: 0
	// Line 38, Address: 0x332cc8, Func Offset: 0x8
	// Line 39, Address: 0x332ce4, Func Offset: 0x24
	// Line 40, Address: 0x332d00, Func Offset: 0x40
	// Line 41, Address: 0x332d1c, Func Offset: 0x5c
	// Line 42, Address: 0x332d38, Func Offset: 0x78
	// Line 43, Address: 0x332d54, Func Offset: 0x94
	// Line 44, Address: 0x332d70, Func Offset: 0xb0
	// Func End, Address: 0x332d80, Func Offset: 0xc0
}

