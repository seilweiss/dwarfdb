typedef struct tagxStateLink;
typedef struct tagxState;


typedef tagxStateLink type_0[17];
typedef tagxStateLink type_1[2];
typedef tagxState type_2[22];
typedef tagxStateLink type_3[2];
typedef tagxStateLink type_4[2];
typedef tagxStateLink type_5[2];
typedef uint8 type_6[18];
typedef tagxStateLink type_7[13];
typedef tagxStateLink type_8[1];
typedef tagxStateLink type_9[2];
typedef tagxStateLink type_10[2];
typedef tagxStateLink type_11[2];
typedef tagxStateLink type_12[2];
typedef tagxStateLink type_13[2];
typedef tagxStateLink type_14[2];
typedef uint8 type_15[18];
typedef tagxStateLink type_16[17];
typedef tagxStateLink type_17[2];
typedef tagxStateLink type_18[1];
typedef tagxStateLink type_19[2];
typedef tagxStateLink type_20[2];
typedef tagxStateLink type_21[2];
typedef tagxStateLink type_22[2];
typedef tagxStateLink type_23[13];
typedef tagxStateLink type_24[2];

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

uint8 g_nslJointsAll[18];
uint8 g_nslJointsUpperOnly[18];
tagxStateLink link_nsl_Idle[17];
tagxStateLink link_nsl_RRun[17];
tagxStateLink link_nsl_LaughterFromIdle[2];
tagxStateLink link_nsl_LaughterFromRRun[2];
tagxStateLink link_nsl_CallBatsFromIdle[2];
tagxStateLink link_nsl_CallBatsFromRRun[2];
tagxStateLink link_nsl_Walk[13];
tagxStateLink link_nsl_Run[13];
tagxStateLink link_nsl_DodgeLeftFromIdle[2];
tagxStateLink link_nsl_DodgeRightFromIdle[2];
tagxStateLink link_nsl_DodgeLeftFromRRun[2];
tagxStateLink link_nsl_DodgeRightFromRRun[2];
tagxStateLink link_nsl_AttackMeleeLeftFromIdle[2];
tagxStateLink link_nsl_AttackMeleeRightFromIdle[2];
tagxStateLink link_nsl_AttackMeleeLeftFromRRun[2];
tagxStateLink link_nsl_AttackMeleeRightFromRRun[2];
tagxStateLink link_nsl_AttackMeleeLeftWalk[2];
tagxStateLink link_nsl_AttackMeleeRightWalk[2];
tagxStateLink link_nsl_AttackMeleeLeftRun[2];
tagxStateLink link_nsl_AttackMeleeRightRun[2];
tagxStateLink link_nsl_InjuryStalactite[1];
tagxStateLink link_nsl_DeathStalactite[1];
tagxState g_nslStates[22];

void xNSLStateReset();
void xNSLStateInit();

// xNSLStateReset__Fv
// Start address: 0x355870
void xNSLStateReset()
{
	// Line 79, Address: 0x355870, Func Offset: 0
	// Line 81, Address: 0x355878, Func Offset: 0x8
	// Line 83, Address: 0x35588c, Func Offset: 0x1c
	// Func End, Address: 0x35589c, Func Offset: 0x2c
}

// xNSLStateInit__Fv
// Start address: 0x3558a0
void xNSLStateInit()
{
	// Line 73, Address: 0x3558a0, Func Offset: 0
	// Line 75, Address: 0x3558a8, Func Offset: 0x8
	// Line 76, Address: 0x3558bc, Func Offset: 0x1c
	// Func End, Address: 0x3558cc, Func Offset: 0x2c
}

