typedef enum eGameMode;
typedef enum _GameOstrich;


typedef uint32 type_0[4];
typedef uint32 type_1[8];
typedef uint32 type_2[2];
typedef uint32 type_3[1];
typedef uint32 type_4[3];
typedef uint32 type_5[4];
typedef uint32 type_6[2];
typedef uint32 type_7[3];
typedef uint32 type_8[3];
typedef uint32 type_9[2];
typedef uint32 type_10[12];
typedef uint32 type_11[8];
typedef uint32 type_12[3];
typedef uint32 type_13[1];
typedef uint32 type_14[2];

enum eGameMode
{
	eGameMode_Boot,
	eGameMode_Intro,
	eGameMode_Title,
	eGameMode_Start,
	eGameMode_Load,
	eGameMode_Options,
	eGameMode_Save,
	eGameMode_Pause,
	eGameMode_WorldMap,
	eGameMode_MonsterGallery,
	eGameMode_ConceptArtGallery,
	eGameMode_Game,
	eGameMode_Count
};

enum _GameOstrich
{
	eGameOstrich_Loading,
	eGameOstrich_PlayingMovie,
	eGameOstrich_InScene,
	eGameOstrich_Total
};

int32 gGameState;
eGameMode gGameMode;
_GameOstrich gGameOstrich;
uint32 sGameMode_DispatchTable[12];
uint32 sGameState_DispatchTable[8];
uint32 sPauseState_DispatchTable[2];
uint32 sSaveState_DispatchTable[3];
uint32 sOptionsState_DispatchTable[1];
uint32 sLoadState_DispatchTable[3];
uint32 sTitleState_DispatchTable[2];
uint32 sIntroState_DispatchTable[4];
uint32 sGameState_DoDispatchTable[8];
uint32 sPauseState_DoDispatchTable[2];
uint32 sSaveState_DoDispatchTable[3];
uint32 sOptionsState_DoDispatchTable[1];
uint32 sLoadState_DoDispatchTable[3];
uint32 sTitleState_DoDispatchTable[2];
uint32 sIntroState_DoDispatchTable[4];
uint32 startPressed;

void zGameModeSwitch(eGameMode modeNew);
void zGameStateSwitch(int32 theNewState);
void zGameStateSwitchEvent(int32 event);
void zGameSetOstrich(_GameOstrich o);
_GameOstrich zGameGetOstrich();
int32 zGameModeGet();
int32 zGameStateGet();

// zGameModeSwitch__F9eGameMode
// Start address: 0x136ca0
void zGameModeSwitch(eGameMode modeNew)
{
	eGameMode modeOld;
	// Line 314, Address: 0x136ca0, Func Offset: 0
	// Line 318, Address: 0x136cb0, Func Offset: 0x10
	// Line 323, Address: 0x136cb8, Func Offset: 0x18
	// Line 327, Address: 0x136ce8, Func Offset: 0x48
	// Line 328, Address: 0x136cf4, Func Offset: 0x54
	// Line 329, Address: 0x136cfc, Func Offset: 0x5c
	// Line 332, Address: 0x136d24, Func Offset: 0x84
	// Line 398, Address: 0x136d30, Func Offset: 0x90
	// Line 365, Address: 0x136d3c, Func Offset: 0x9c
	// Line 398, Address: 0x136d40, Func Offset: 0xa0
	// Line 400, Address: 0x136d50, Func Offset: 0xb0
	// Func End, Address: 0x136d64, Func Offset: 0xc4
}

// zGameStateSwitch__Fi
// Start address: 0x136d70
void zGameStateSwitch(int32 theNewState)
{
	uint32 theEvent;
	int32 stateOld;
	// Line 258, Address: 0x136d70, Func Offset: 0
	// Line 260, Address: 0x136d78, Func Offset: 0x8
	// Line 267, Address: 0x136d80, Func Offset: 0x10
	// Line 261, Address: 0x136d84, Func Offset: 0x14
	// Line 267, Address: 0x136d88, Func Offset: 0x18
	// Line 269, Address: 0x136d98, Func Offset: 0x28
	// Line 272, Address: 0x136d9c, Func Offset: 0x2c
	// Line 275, Address: 0x136dc4, Func Offset: 0x54
	// Line 276, Address: 0x136dd4, Func Offset: 0x64
	// Line 278, Address: 0x136ddc, Func Offset: 0x6c
	// Line 279, Address: 0x136de8, Func Offset: 0x78
	// Line 281, Address: 0x136df0, Func Offset: 0x80
	// Line 282, Address: 0x136e00, Func Offset: 0x90
	// Line 284, Address: 0x136e08, Func Offset: 0x98
	// Line 285, Address: 0x136e14, Func Offset: 0xa4
	// Line 287, Address: 0x136e1c, Func Offset: 0xac
	// Line 288, Address: 0x136e2c, Func Offset: 0xbc
	// Line 290, Address: 0x136e34, Func Offset: 0xc4
	// Line 291, Address: 0x136e40, Func Offset: 0xd0
	// Line 293, Address: 0x136e48, Func Offset: 0xd8
	// Line 307, Address: 0x136e60, Func Offset: 0xf0
	// Line 308, Address: 0x136e68, Func Offset: 0xf8
	// Line 309, Address: 0x136e70, Func Offset: 0x100
	// Func End, Address: 0x136e7c, Func Offset: 0x10c
}

// zGameStateSwitchEvent__Fi
// Start address: 0x136e80
void zGameStateSwitchEvent(int32 event)
{
	int32 new_state;
	int32 new_mode;
	// Line 213, Address: 0x136e80, Func Offset: 0
	// Line 214, Address: 0x136e98, Func Offset: 0x18
	// Line 215, Address: 0x136e9c, Func Offset: 0x1c
	// Line 218, Address: 0x136ea0, Func Offset: 0x20
	// Line 219, Address: 0x136ea8, Func Offset: 0x28
	// Line 224, Address: 0x136eac, Func Offset: 0x2c
	// Line 225, Address: 0x136eec, Func Offset: 0x6c
	// Line 226, Address: 0x136f20, Func Offset: 0xa0
	// Line 227, Address: 0x136f60, Func Offset: 0xe0
	// Line 228, Address: 0x136f90, Func Offset: 0x110
	// Line 229, Address: 0x136fd0, Func Offset: 0x150
	// Line 230, Address: 0x137004, Func Offset: 0x184
	// Line 236, Address: 0x137030, Func Offset: 0x1b0
	// Line 238, Address: 0x137038, Func Offset: 0x1b8
	// Line 242, Address: 0x137040, Func Offset: 0x1c0
	// Line 245, Address: 0x137050, Func Offset: 0x1d0
	// Line 248, Address: 0x137058, Func Offset: 0x1d8
	// Func End, Address: 0x137074, Func Offset: 0x1f4
}

// zGameSetOstrich__F12_GameOstrich
// Start address: 0x137080
void zGameSetOstrich(_GameOstrich o)
{
	// Line 184, Address: 0x137080, Func Offset: 0
	// Func End, Address: 0x137088, Func Offset: 0x8
}

// zGameGetOstrich__Fv
// Start address: 0x137090
_GameOstrich zGameGetOstrich()
{
	// Line 179, Address: 0x137090, Func Offset: 0
	// Func End, Address: 0x137098, Func Offset: 0x8
}

// zGameModeGet__Fv
// Start address: 0x1370a0
int32 zGameModeGet()
{
	// Line 171, Address: 0x1370a0, Func Offset: 0
	// Func End, Address: 0x1370a8, Func Offset: 0x8
}

// zGameStateGet__Fv
// Start address: 0x1370b0
int32 zGameStateGet()
{
	// Line 160, Address: 0x1370b0, Func Offset: 0
	// Func End, Address: 0x1370b8, Func Offset: 0x8
}

