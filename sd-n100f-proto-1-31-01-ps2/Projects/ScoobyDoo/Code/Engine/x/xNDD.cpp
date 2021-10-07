typedef struct tagxStateLink;
typedef struct tagxState;


typedef tagxStateLink type_0[1];
typedef tagxStateLink type_1[12];
typedef tagxStateLink type_2[3];
typedef tagxStateLink type_3[1];
typedef tagxState type_4[30];
typedef tagxStateLink type_5[20];
typedef tagxStateLink type_6[2];
typedef uint8 type_7[17];
typedef tagxStateLink type_8[3];
typedef tagxStateLink type_9[3];
typedef tagxStateLink type_10[1];
typedef tagxStateLink type_11[3];
typedef tagxStateLink type_12[1];
typedef tagxStateLink type_13[1];
typedef tagxStateLink type_14[12];
typedef tagxStateLink type_15[3];
typedef tagxStateLink type_16[1];
typedef tagxStateLink type_17[20];
typedef tagxStateLink type_18[3];
typedef uint8 type_19[17];
typedef tagxStateLink type_20[1];
typedef tagxStateLink type_21[3];
typedef tagxStateLink type_22[1];
typedef tagxStateLink type_23[3];
typedef tagxStateLink type_24[1];
typedef tagxStateLink type_25[1];
typedef tagxStateLink type_26[1];
typedef tagxStateLink type_27[2];
typedef tagxStateLink type_28[3];
typedef tagxStateLink type_29[1];
typedef tagxStateLink type_30[1];
typedef tagxStateLink type_31[3];
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

uint8 g_nddJointsAll[17];
uint8 g_nddJointsUpperOnly[17];
tagxStateLink link_ndd_PreBirth[1];
tagxStateLink link_ndd_Idle[20];
tagxStateLink link_ndd_RRun[20];
tagxStateLink link_ndd_PopUp[1];
tagxStateLink link_ndd_FlyThroughWindow[1];
tagxStateLink link_ndd_Dive[1];
tagxStateLink link_ndd_Walk[12];
tagxStateLink link_ndd_Run[12];
tagxStateLink link_ndd_DodgeLeft[2];
tagxStateLink link_ndd_DodgeRight[2];
tagxStateLink link_ndd_AttackLeft[3];
tagxStateLink link_ndd_AttackRight[3];
tagxStateLink link_ndd_AttackStrong[3];
tagxStateLink link_ndd_AttackVomit[3];
tagxStateLink link_ndd_AttackLeftFromRRun[3];
tagxStateLink link_ndd_AttackRightFromRRun[3];
tagxStateLink link_ndd_AttackStrongFromRRun[3];
tagxStateLink link_ndd_AttackVomitFromRRun[3];
tagxStateLink link_ndd_InjuryFront[1];
tagxStateLink link_ndd_InjuryFrontFromAttack[1];
tagxStateLink link_ndd_InjuryFrontFromAttackRRun[1];
tagxStateLink link_ndd_InjuryFrontInWalk[1];
tagxStateLink link_ndd_DeathMelee1[1];
tagxStateLink link_ndd_DeathMelee2[1];
tagxStateLink link_ndd_DeathRange1[1];
tagxStateLink link_ndd_ComboIdle[3];
tagxStateLink link_ndd_ComboIdleChainsaw[3];
tagxStateLink link_ndd_ComboMissDeath[1];
tagxStateLink link_ndd_ComboDeathGun[1];
tagxStateLink link_ndd_ComboDeathAxe[1];
tagxState g_nddStates[30];

void xNDDStateReset();
void xNDDStateInit();

// xNDDStateReset__Fv
// Start address: 0x355ff0
void xNDDStateReset()
{
	// Line 77, Address: 0x355ff0, Func Offset: 0
	// Line 79, Address: 0x355ff8, Func Offset: 0x8
	// Line 81, Address: 0x35600c, Func Offset: 0x1c
	// Func End, Address: 0x35601c, Func Offset: 0x2c
}

// xNDDStateInit__Fv
// Start address: 0x356020
void xNDDStateInit()
{
	// Line 70, Address: 0x356020, Func Offset: 0
	// Line 72, Address: 0x356028, Func Offset: 0x8
	// Line 74, Address: 0x35603c, Func Offset: 0x1c
	// Func End, Address: 0x35604c, Func Offset: 0x2c
}

