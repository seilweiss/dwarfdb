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

uint8 g_nnqJointsAll[17];
uint8 g_nnqJointsUpperOnly[17];
tagxStateLink link_nnq_Idle[16];
tagxStateLink link_nnq_IdleReadyRun[16];
tagxStateLink link_nnq_Walk[12];
tagxStateLink link_nnq_Run[12];
tagxStateLink link_nnq_HopFromIdle[3];
tagxStateLink link_nnq_HopFromRRun[3];
tagxStateLink link_nnq_DodgeLeftFromIdle[3];
tagxStateLink link_nnq_DodgeRightFromIdle[3];
tagxStateLink link_nnq_DodgeLeftFromRRun[3];
tagxStateLink link_nnq_DodgeRightFromRRun[3];
tagxStateLink link_nnq_AttackJumpFromIdle[3];
tagxStateLink link_nnq_AttackJumpFromRRun[3];
tagxStateLink link_nnq_InjuryStrongAsThread[1];
tagxStateLink link_nnq_InjuryFrontAsThread[1];
tagxStateLink link_nnq_InjuryJumpingFromIdle[1];
tagxStateLink link_nnq_InjuryJumpingFromRRun[1];
tagxStateLink link_nnq_Die[1];
tagxStateLink link_nnq_DieJumping[1];
tagxState g_nnqStates[18];

void xNNQStateReset();
void xNNQStateInit();

// xNNQStateReset__Fv
// Start address: 0x355b10
void xNNQStateReset()
{
	// Line 77, Address: 0x355b10, Func Offset: 0
	// Line 79, Address: 0x355b18, Func Offset: 0x8
	// Line 81, Address: 0x355b2c, Func Offset: 0x1c
	// Func End, Address: 0x355b3c, Func Offset: 0x2c
}

// xNNQStateInit__Fv
// Start address: 0x355b40
void xNNQStateInit()
{
	// Line 70, Address: 0x355b40, Func Offset: 0
	// Line 72, Address: 0x355b48, Func Offset: 0x8
	// Line 74, Address: 0x355b5c, Func Offset: 0x1c
	// Func End, Address: 0x355b6c, Func Offset: 0x2c
}

