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

uint8 g_nnrJointsAll[17];
uint8 g_nnrJointsUpperOnly[17];
tagxStateLink link_nnr_Idle[16];
tagxStateLink link_nnr_IdleReadyRun[16];
tagxStateLink link_nnr_Walk[12];
tagxStateLink link_nnr_Run[12];
tagxStateLink link_nnr_HopFromIdle[3];
tagxStateLink link_nnr_HopFromRRun[3];
tagxStateLink link_nnr_DodgeLeftFromIdle[3];
tagxStateLink link_nnr_DodgeRightFromIdle[3];
tagxStateLink link_nnr_DodgeLeftFromRRun[3];
tagxStateLink link_nnr_DodgeRightFromRRun[3];
tagxStateLink link_nnr_AttackJumpFromIdle[3];
tagxStateLink link_nnr_AttackJumpFromRRun[3];
tagxStateLink link_nnr_InjuryStrongAsThread[1];
tagxStateLink link_nnr_InjuryFrontAsThread[1];
tagxStateLink link_nnr_InjuryJumpingFromIdle[1];
tagxStateLink link_nnr_InjuryJumpingFromRRun[1];
tagxStateLink link_nnr_Die[1];
tagxStateLink link_nnr_DieJumping[1];
tagxState g_nnrStates[18];

void xNNRStateReset();
void xNNRStateInit();

// xNNRStateReset__Fv
// Start address: 0x355ab0
void xNNRStateReset()
{
	// Line 81, Address: 0x355ab0, Func Offset: 0
	// Line 83, Address: 0x355ab8, Func Offset: 0x8
	// Line 85, Address: 0x355acc, Func Offset: 0x1c
	// Func End, Address: 0x355adc, Func Offset: 0x2c
}

// xNNRStateInit__Fv
// Start address: 0x355ae0
void xNNRStateInit()
{
	// Line 70, Address: 0x355ae0, Func Offset: 0
	// Line 72, Address: 0x355ae8, Func Offset: 0x8
	// Line 73, Address: 0x355afc, Func Offset: 0x1c
	// Func End, Address: 0x355b0c, Func Offset: 0x2c
}

