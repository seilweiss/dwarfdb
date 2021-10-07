typedef struct tagxStateLink;
typedef struct tagxState;


typedef tagxStateLink type_0[1];
typedef tagxStateLink type_1[3];
typedef tagxStateLink type_2[1];
typedef uint8 type_3[17];
typedef tagxStateLink type_4[3];
typedef tagxStateLink type_5[1];
typedef tagxStateLink type_6[12];
typedef tagxStateLink type_7[3];
typedef tagxState type_8[18];
typedef tagxStateLink type_9[3];
typedef tagxStateLink type_10[1];
typedef tagxStateLink type_11[16];
typedef uint8 type_12[17];
typedef tagxStateLink type_13[3];
typedef tagxStateLink type_14[1];
typedef tagxStateLink type_15[12];
typedef tagxStateLink type_16[3];
typedef tagxStateLink type_17[3];
typedef tagxStateLink type_18[1];
typedef tagxStateLink type_19[16];
typedef tagxStateLink type_20[3];

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

uint8 g_nnpJointsAll[17];
uint8 g_nnpJointsUpperOnly[17];
tagxStateLink link_nnp_Idle[16];
tagxStateLink link_nnp_IdleReadyRun[16];
tagxStateLink link_nnp_Walk[12];
tagxStateLink link_nnp_Run[12];
tagxStateLink link_nnp_HopFromIdle[3];
tagxStateLink link_nnp_HopFromRRun[3];
tagxStateLink link_nnp_DodgeLeftFromIdle[3];
tagxStateLink link_nnp_DodgeRightFromIdle[3];
tagxStateLink link_nnp_DodgeLeftFromRRun[3];
tagxStateLink link_nnp_DodgeRightFromRRun[3];
tagxStateLink link_nnp_AttackJumpFromIdle[3];
tagxStateLink link_nnp_AttackJumpFromRRun[3];
tagxStateLink link_nnp_InjuryStrongAsThread[1];
tagxStateLink link_nnp_InjuryFrontAsThread[1];
tagxStateLink link_nnp_InjuryJumpingFromIdle[1];
tagxStateLink link_nnp_InjuryJumpingFromRRun[1];
tagxStateLink link_nnp_Die[1];
tagxStateLink link_nnp_DieJumping[1];
tagxState g_nnpStates[18];

void xNNPStateReset();
void xNNPStateInit();

// xNNPStateReset__Fv
// Start address: 0x355b70
void xNNPStateReset()
{
	// Line 82, Address: 0x355b70, Func Offset: 0
	// Line 84, Address: 0x355b78, Func Offset: 0x8
	// Line 86, Address: 0x355b8c, Func Offset: 0x1c
	// Func End, Address: 0x355b9c, Func Offset: 0x2c
}

// xNNPStateInit__Fv
// Start address: 0x355ba0
void xNNPStateInit()
{
	// Line 70, Address: 0x355ba0, Func Offset: 0
	// Line 72, Address: 0x355ba8, Func Offset: 0x8
	// Line 74, Address: 0x355bbc, Func Offset: 0x1c
	// Func End, Address: 0x355bcc, Func Offset: 0x2c
}

