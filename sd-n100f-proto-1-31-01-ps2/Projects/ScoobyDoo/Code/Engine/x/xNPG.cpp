typedef struct tagxStateLink;
typedef struct tagxState;


typedef tagxStateLink type_0[12];
typedef tagxStateLink type_1[3];
typedef tagxStateLink type_2[17];
typedef tagxStateLink type_3[3];
typedef uint8 type_4[17];
typedef tagxStateLink type_5[1];
typedef tagxStateLink type_6[1];
typedef tagxStateLink type_7[3];
typedef tagxStateLink type_8[3];
typedef tagxStateLink type_9[1];
typedef tagxStateLink type_10[1];
typedef tagxStateLink type_11[3];
typedef tagxState type_12[17];
typedef tagxStateLink type_13[12];
typedef tagxStateLink type_14[3];
typedef tagxStateLink type_15[3];
typedef tagxStateLink type_16[1];
typedef tagxStateLink type_17[16];
typedef tagxStateLink type_18[3];

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

uint8 g_npgJointsAll[17];
tagxStateLink link_npg_Idle[17];
tagxStateLink link_npg_PreBirth[1];
tagxStateLink link_npg_IdleReadyToRun[16];
tagxStateLink link_npg_PopUp[1];
tagxStateLink link_npg_Walk[12];
tagxStateLink link_npg_Run[12];
tagxStateLink link_npg_DodgeLeftFromIdle[3];
tagxStateLink link_npg_DodgeRightFromIdle[3];
tagxStateLink link_npg_DodgeLeftFromRRun[3];
tagxStateLink link_npg_DodgeRightFromRRun[3];
tagxStateLink link_npg_AttackGoreFromIdle[3];
tagxStateLink link_npg_AttackHeadButtFromIdle[3];
tagxStateLink link_npg_AttackGoreFromRRun[3];
tagxStateLink link_npg_AttackHeadButtFromRRun[3];
tagxStateLink link_npg_InjuryDown[1];
tagxStateLink link_npg_Injury2Left[1];
tagxStateLink link_npg_Death1[1];
tagxState g_npgStates[17];

void xNPGStateReset();
void xNPGStateInit();

// xNPGStateReset__Fv
// Start address: 0x355a50
void xNPGStateReset()
{
	// Line 62, Address: 0x355a50, Func Offset: 0
	// Line 64, Address: 0x355a58, Func Offset: 0x8
	// Line 67, Address: 0x355a6c, Func Offset: 0x1c
	// Func End, Address: 0x355a7c, Func Offset: 0x2c
}

// xNPGStateInit__Fv
// Start address: 0x355a80
void xNPGStateInit()
{
	// Line 51, Address: 0x355a80, Func Offset: 0
	// Line 53, Address: 0x355a88, Func Offset: 0x8
	// Line 54, Address: 0x355a9c, Func Offset: 0x1c
	// Func End, Address: 0x355aac, Func Offset: 0x2c
}

