



void zGameStatePauseUnpauseSnd(uint8 pause);
void zGameModeSwitch(eGameMode modeNew);
void SB04FMVPauseSoundCB(uint8 doPause);
void zGameStateSwitch(int32 theNewState);
void zGameStateSwitchEvent(int32 event);
void zGameSetOstrich(_GameOstrich o);
_GameOstrich zGameGetOstrich();
int32 zGameModeGet();
int32 zGameStateGet();

// zGameStatePauseUnpauseSnd__Fb
// Start address: 0x2d1c60
void zGameStatePauseUnpauseSnd(uint8 pause)
{
	// Line 469, Address: 0x2d1c60, Func Offset: 0
	// Line 473, Address: 0x2d1c64, Func Offset: 0x4
	// Line 469, Address: 0x2d1c68, Func Offset: 0x8
	// Line 473, Address: 0x2d1c74, Func Offset: 0x14
	// Line 474, Address: 0x2d1c80, Func Offset: 0x20
	// Line 475, Address: 0x2d1c90, Func Offset: 0x30
	// Line 479, Address: 0x2d1ca0, Func Offset: 0x40
	// Func End, Address: 0x2d1cb0, Func Offset: 0x50
}

// zGameModeSwitch__F9eGameMode
// Start address: 0x2d1cb0
void zGameModeSwitch(eGameMode modeNew)
{
	eGameMode modeOld;
	// Line 368, Address: 0x2d1cb0, Func Offset: 0
	// Line 377, Address: 0x2d1cb4, Func Offset: 0x4
	// Line 368, Address: 0x2d1cb8, Func Offset: 0x8
	// Line 372, Address: 0x2d1cc0, Func Offset: 0x10
	// Line 377, Address: 0x2d1cc8, Func Offset: 0x18
	// Line 378, Address: 0x2d1ce0, Func Offset: 0x30
	// Line 380, Address: 0x2d1d00, Func Offset: 0x50
	// Line 381, Address: 0x2d1d0c, Func Offset: 0x5c
	// Line 384, Address: 0x2d1d24, Func Offset: 0x74
	// Line 387, Address: 0x2d1d34, Func Offset: 0x84
	// Line 388, Address: 0x2d1d44, Func Offset: 0x94
	// Line 390, Address: 0x2d1d74, Func Offset: 0xc4
	// Line 391, Address: 0x2d1d7c, Func Offset: 0xcc
	// Line 394, Address: 0x2d1d9c, Func Offset: 0xec
	// Line 396, Address: 0x2d1db0, Func Offset: 0x100
	// Line 464, Address: 0x2d1de0, Func Offset: 0x130
	// Line 466, Address: 0x2d1e00, Func Offset: 0x150
	// Line 380, Address: 0x2d1e08, Func Offset: 0x158
	// Line 466, Address: 0x2d1e0c, Func Offset: 0x15c
	// Func End, Address: 0x2d1e28, Func Offset: 0x178
}

// SB04FMVPauseSoundCB__Fb
// Start address: 0x2d1e30
void SB04FMVPauseSoundCB(uint8 doPause)
{
	// Line 343, Address: 0x2d1e30, Func Offset: 0
	// Line 344, Address: 0x2d1e3c, Func Offset: 0xc
	// Line 350, Address: 0x2d1e4c, Func Offset: 0x1c
	// Line 352, Address: 0x2d1e54, Func Offset: 0x24
	// Line 353, Address: 0x2d1e64, Func Offset: 0x34
	// Line 362, Address: 0x2d1e6c, Func Offset: 0x3c
	// Line 365, Address: 0x2d1e78, Func Offset: 0x48
	// Line 346, Address: 0x2d1e80, Func Offset: 0x50
	// Line 365, Address: 0x2d1e84, Func Offset: 0x54
	// Line 347, Address: 0x2d1e8c, Func Offset: 0x5c
	// Line 365, Address: 0x2d1e94, Func Offset: 0x64
	// Func End, Address: 0x2d1ea0, Func Offset: 0x70
}

// zGameStateSwitch__Fi
// Start address: 0x2d1ea0
void zGameStateSwitch(int32 theNewState)
{
	int32 stateOld;
	uint32 theEvent;
	// Line 273, Address: 0x2d1ea0, Func Offset: 0
	// Line 282, Address: 0x2d1ea4, Func Offset: 0x4
	// Line 273, Address: 0x2d1ea8, Func Offset: 0x8
	// Line 275, Address: 0x2d1eb8, Func Offset: 0x18
	// Line 276, Address: 0x2d1ebc, Func Offset: 0x1c
	// Line 282, Address: 0x2d1ec0, Func Offset: 0x20
	// Line 284, Address: 0x2d1ed0, Func Offset: 0x30
	// Line 285, Address: 0x2d1ee0, Func Offset: 0x40
	// Line 286, Address: 0x2d1eec, Func Offset: 0x4c
	// Line 287, Address: 0x2d1f10, Func Offset: 0x70
	// Line 288, Address: 0x2d1f14, Func Offset: 0x74
	// Line 289, Address: 0x2d1f34, Func Offset: 0x94
	// Line 290, Address: 0x2d1f3c, Func Offset: 0x9c
	// Line 291, Address: 0x2d1f5c, Func Offset: 0xbc
	// Line 294, Address: 0x2d1f64, Func Offset: 0xc4
	// Line 297, Address: 0x2d1f8c, Func Offset: 0xec
	// Line 298, Address: 0x2d1f9c, Func Offset: 0xfc
	// Line 300, Address: 0x2d1fa4, Func Offset: 0x104
	// Line 301, Address: 0x2d1fb0, Func Offset: 0x110
	// Line 303, Address: 0x2d1fb8, Func Offset: 0x118
	// Line 304, Address: 0x2d1fc8, Func Offset: 0x128
	// Line 306, Address: 0x2d1fd0, Func Offset: 0x130
	// Line 307, Address: 0x2d1fdc, Func Offset: 0x13c
	// Line 309, Address: 0x2d1fe4, Func Offset: 0x144
	// Line 310, Address: 0x2d1ff4, Func Offset: 0x154
	// Line 312, Address: 0x2d1ffc, Func Offset: 0x15c
	// Line 313, Address: 0x2d2008, Func Offset: 0x168
	// Line 315, Address: 0x2d2010, Func Offset: 0x170
	// Line 329, Address: 0x2d2024, Func Offset: 0x184
	// Line 331, Address: 0x2d202c, Func Offset: 0x18c
	// Func End, Address: 0x2d2054, Func Offset: 0x1b4
}

// zGameStateSwitchEvent__Fi
// Start address: 0x2d2060
void zGameStateSwitchEvent(int32 event)
{
	int32 new_mode;
	int32 new_state;
	// Line 222, Address: 0x2d2060, Func Offset: 0
	// Line 233, Address: 0x2d2064, Func Offset: 0x4
	// Line 222, Address: 0x2d2068, Func Offset: 0x8
	// Line 233, Address: 0x2d206c, Func Offset: 0xc
	// Line 222, Address: 0x2d2070, Func Offset: 0x10
	// Line 233, Address: 0x2d2074, Func Offset: 0x14
	// Line 222, Address: 0x2d2078, Func Offset: 0x18
	// Line 227, Address: 0x2d207c, Func Offset: 0x1c
	// Line 222, Address: 0x2d2080, Func Offset: 0x20
	// Line 228, Address: 0x2d2084, Func Offset: 0x24
	// Line 222, Address: 0x2d2088, Func Offset: 0x28
	// Line 223, Address: 0x2d208c, Func Offset: 0x2c
	// Line 224, Address: 0x2d2090, Func Offset: 0x30
	// Line 233, Address: 0x2d2094, Func Offset: 0x34
	// Line 234, Address: 0x2d20cc, Func Offset: 0x6c
	// Line 235, Address: 0x2d210c, Func Offset: 0xac
	// Line 236, Address: 0x2d2150, Func Offset: 0xf0
	// Line 237, Address: 0x2d218c, Func Offset: 0x12c
	// Line 238, Address: 0x2d21d0, Func Offset: 0x170
	// Line 239, Address: 0x2d2210, Func Offset: 0x1b0
	// Line 241, Address: 0x2d2244, Func Offset: 0x1e4
	// Line 246, Address: 0x2d2248, Func Offset: 0x1e8
	// Line 252, Address: 0x2d2250, Func Offset: 0x1f0
	// Line 263, Address: 0x2d2260, Func Offset: 0x200
	// Line 248, Address: 0x2d2268, Func Offset: 0x208
	// Line 263, Address: 0x2d226c, Func Offset: 0x20c
	// Line 255, Address: 0x2d227c, Func Offset: 0x21c
	// Line 263, Address: 0x2d2280, Func Offset: 0x220
	// Line 256, Address: 0x2d2288, Func Offset: 0x228
	// Line 263, Address: 0x2d228c, Func Offset: 0x22c
	// Func End, Address: 0x2d22c0, Func Offset: 0x260
}

// zGameSetOstrich__F12_GameOstrich
// Start address: 0x2d22c0
void zGameSetOstrich(_GameOstrich o)
{
	// Line 193, Address: 0x2d22c0, Func Offset: 0
	// Func End, Address: 0x2d22c8, Func Offset: 0x8
}

// zGameGetOstrich__Fv
// Start address: 0x2d22d0
_GameOstrich zGameGetOstrich()
{
	// Line 188, Address: 0x2d22d0, Func Offset: 0
	// Func End, Address: 0x2d22d8, Func Offset: 0x8
}

// zGameModeGet__Fv
// Start address: 0x2d22e0
int32 zGameModeGet()
{
	// Line 180, Address: 0x2d22e0, Func Offset: 0
	// Func End, Address: 0x2d22e8, Func Offset: 0x8
}

// zGameStateGet__Fv
// Start address: 0x2d22f0
int32 zGameStateGet()
{
	// Line 169, Address: 0x2d22f0, Func Offset: 0
	// Func End, Address: 0x2d22f8, Func Offset: 0x8
}

