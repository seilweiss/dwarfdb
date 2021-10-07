typedef struct tagxStateLink;
typedef struct tagxState;


typedef tagxStateLink type_0[1];
typedef tagxStateLink type_1[1];
typedef tagxStateLink type_2[1];
typedef tagxStateLink type_3[4];
typedef tagxStateLink type_4[1];
typedef uint8 type_5[17];
typedef tagxStateLink type_6[1];
typedef tagxStateLink type_7[1];
typedef tagxStateLink type_8[1];
typedef tagxStateLink type_9[1];
typedef tagxStateLink type_10[1];
typedef tagxStateLink type_11[1];
typedef tagxStateLink type_12[3];
typedef tagxStateLink type_13[1];
typedef uint8 type_14[17];
typedef tagxStateLink type_15[11];
typedef tagxStateLink type_16[1];
typedef tagxStateLink type_17[1];
typedef tagxState type_18[21];
typedef tagxStateLink type_19[10];
typedef tagxStateLink type_20[1];
typedef tagxStateLink type_21[1];
typedef tagxStateLink type_22[4];
typedef tagxStateLink type_23[1];

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

uint8 g_nbaJointsAll[17];
uint8 g_nbaJointsUpperOnly[17];
tagxStateLink link_nba_Idle[11];
tagxStateLink link_nba_Idle1FromIdle[1];
tagxStateLink link_nba_Idle1FromRRun[1];
tagxStateLink link_nba_StandRRun[10];
tagxStateLink link_nba_Walk[4];
tagxStateLink link_nba_WalkBack[3];
tagxStateLink link_nba_Run[4];
tagxStateLink link_nba_DodgeLeftFromIdle[1];
tagxStateLink link_nba_DodgeRightFromIdle[1];
tagxStateLink link_nba_DodgeLeftFromRRun[1];
tagxStateLink link_nba_DodgeRightFromRRun[1];
tagxStateLink link_nba_AttackBackhandFromIdle[1];
tagxStateLink link_nba_AttackBothHandsFromIdle[1];
tagxStateLink link_nba_AttackStrongFromIdle[1];
tagxStateLink link_nba_AttackBackhandFromRRun[1];
tagxStateLink link_nba_AttackBothHandsFromRRun[1];
tagxStateLink link_nba_AttackStrongFromRRun[1];
tagxStateLink link_nba_InjuryFrontFullBodyThread[1];
tagxStateLink link_nba_InjuryStrongFullBodyThread[1];
tagxStateLink link_nba_InjuryFrontUpperBodyThread[1];
tagxStateLink link_nba_InjuryStrongUpperBodyThread[1];
tagxState g_nbaStates[21];

void xNBAStateReset();
void xNBAStateInit();

// xNBAStateReset__Fv
// Start address: 0x356170
void xNBAStateReset()
{
	// Line 84, Address: 0x356170, Func Offset: 0
	// Line 86, Address: 0x356178, Func Offset: 0x8
	// Line 88, Address: 0x35618c, Func Offset: 0x1c
	// Func End, Address: 0x35619c, Func Offset: 0x2c
}

// xNBAStateInit__Fv
// Start address: 0x3561a0
void xNBAStateInit()
{
	// Line 71, Address: 0x3561a0, Func Offset: 0
	// Line 73, Address: 0x3561a8, Func Offset: 0x8
	// Line 75, Address: 0x3561bc, Func Offset: 0x1c
	// Func End, Address: 0x3561cc, Func Offset: 0x2c
}

