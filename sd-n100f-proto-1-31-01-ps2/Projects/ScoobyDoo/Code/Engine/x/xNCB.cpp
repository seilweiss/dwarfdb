typedef struct tagxStateLink;
typedef struct tagxState;


typedef tagxStateLink type_0[1];
typedef tagxStateLink type_1[1];
typedef tagxState type_2[30];
typedef tagxStateLink type_3[1];
typedef tagxStateLink type_4[1];
typedef tagxStateLink type_5[1];
typedef uint8 type_6[16];
typedef tagxStateLink type_7[1];
typedef tagxStateLink type_8[12];
typedef tagxStateLink type_9[1];
typedef tagxStateLink type_10[1];
typedef tagxStateLink type_11[1];
typedef tagxStateLink type_12[1];
typedef tagxStateLink type_13[1];
typedef tagxStateLink type_14[1];
typedef tagxStateLink type_15[17];
typedef tagxStateLink type_16[1];
typedef tagxStateLink type_17[1];
typedef uint8 type_18[16];
typedef tagxStateLink type_19[1];
typedef tagxStateLink type_20[12];
typedef tagxStateLink type_21[1];
typedef tagxStateLink type_22[1];
typedef tagxStateLink type_23[1];
typedef tagxStateLink type_24[1];
typedef tagxStateLink type_25[1];
typedef tagxStateLink type_26[1];
typedef tagxStateLink type_27[1];
typedef tagxStateLink type_28[17];
typedef tagxStateLink type_29[1];
typedef tagxStateLink type_30[1];
typedef tagxStateLink type_31[1];
typedef tagxStateLink type_32[1];

struct tagxStateLink
{
	uint8 m_command;
	uint8 m_flags;
	uint16 m_state;
};

struct tagxState
{
	uint32 m_assetID;
	int32 m_animState;
	uint8* m_activeJoints;
	int16 m_calloutNumber;
	uint8 m_enterEvent;
	uint8 m_exitEvent;
	int32 m_linkCount;
	tagxStateLink* m_links;
};

uint8 g_ncbJointsAll[16];
uint8 g_ncbJointsUpperOnly[16];
tagxStateLink link_ncb_PreBirth[1];
tagxStateLink link_ncb_PopUp[1];
tagxStateLink link_ncb_Idle[17];
tagxStateLink link_ncb_StandRRun[17];
tagxStateLink link_ncb_Walk[12];
tagxStateLink link_ncb_Run[12];
tagxStateLink link_ncb_DodgeLeft[1];
tagxStateLink link_ncb_DodgeRight[1];
tagxStateLink link_ncb_DodgeLeftReady[1];
tagxStateLink link_ncb_DodgeRightReady[1];
tagxStateLink link_ncb_AttackLeft[1];
tagxStateLink link_ncb_AttackSpin[1];
tagxStateLink link_ncb_AttackSwipe[1];
tagxStateLink link_ncb_AttackLeftReady[1];
tagxStateLink link_ncb_AttackSpinReady[1];
tagxStateLink link_ncb_AttackSwipeReady[1];
tagxStateLink link_ncb_Injury1[1];
tagxStateLink link_ncb_Injury2[1];
tagxStateLink link_ncb_Injury1Ready[1];
tagxStateLink link_ncb_Injury2Ready[1];
tagxStateLink link_ncb_Injury1WhileMoving[1];
tagxStateLink link_ncb_Injury2WhileMoving[1];
tagxStateLink link_ncb_DeathMelee1[1];
tagxStateLink link_ncb_DeathMelee2[1];
tagxStateLink link_ncb_DeathMelee3[1];
tagxStateLink link_ncb_DeathMelee4[1];
tagxStateLink link_ncb_DeathRange1[1];
tagxStateLink link_ncb_DeathRange2[1];
tagxStateLink link_ncb_DeathRange3[1];
tagxStateLink link_ncb_DeathRange4[1];
tagxState g_ncbStates[30];

void xNCBStateReset();
void xNCBStateInit();

// xNCBStateReset__Fv
// Start address: 0x356110
void xNCBStateReset()
{
	// Line 82, Address: 0x356110, Func Offset: 0
	// Line 84, Address: 0x356118, Func Offset: 0x8
	// Line 86, Address: 0x35612c, Func Offset: 0x1c
	// Func End, Address: 0x35613c, Func Offset: 0x2c
}

// xNCBStateInit__Fv
// Start address: 0x356140
void xNCBStateInit()
{
	// Line 69, Address: 0x356140, Func Offset: 0
	// Line 71, Address: 0x356148, Func Offset: 0x8
	// Line 73, Address: 0x35615c, Func Offset: 0x1c
	// Func End, Address: 0x35616c, Func Offset: 0x2c
}

