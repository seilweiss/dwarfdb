typedef struct tagxStateLink;
typedef struct tagxState;


typedef tagxStateLink type_0[16];
typedef tagxStateLink type_1[3];
typedef tagxStateLink type_2[1];
typedef tagxStateLink type_3[1];
typedef tagxStateLink type_4[1];
typedef uint8 type_5[15];
typedef tagxStateLink type_6[3];
typedef tagxStateLink type_7[1];
typedef tagxStateLink type_8[12];
typedef tagxStateLink type_9[1];
typedef tagxStateLink type_10[1];
typedef tagxStateLink type_11[1];
typedef tagxStateLink type_12[1];
typedef uint8 type_13[15];
typedef tagxStateLink type_14[16];
typedef tagxStateLink type_15[3];
typedef tagxStateLink type_16[1];
typedef tagxStateLink type_17[12];
typedef tagxStateLink type_18[1];
typedef tagxState type_19[19];
typedef tagxStateLink type_20[3];
typedef tagxStateLink type_21[1];

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

uint8 g_npkJointsAll[15];
uint8 g_npkJointsUpperOnly[15];
tagxStateLink link_npk_Idle[16];
tagxStateLink link_npk_IdleReady[16];
tagxStateLink link_npk_Walk[12];
tagxStateLink link_npk_Run[12];
tagxStateLink link_npk_DodgeLeft[1];
tagxStateLink link_npk_DodgeRight[1];
tagxStateLink link_npk_AttackMeleeLeftIdle[3];
tagxStateLink link_npk_AttackMeleeRightIdle[3];
tagxStateLink link_npk_AttackMeleeLeftIdleReady[3];
tagxStateLink link_npk_AttackMeleeRightIdleReady[3];
tagxStateLink link_npk_InjuryShortInIdle[1];
tagxStateLink link_npk_InjuryLongInIdle[1];
tagxStateLink link_npk_InjuryShortInIdleReady[1];
tagxStateLink link_npk_InjuryLongInIdleReady[1];
tagxStateLink link_npk_InjuryShortInWalk[1];
tagxStateLink link_npk_InjuryLongInWalk[1];
tagxStateLink link_npk_InjuryShortInRun[1];
tagxStateLink link_npk_InjuryLongInRun[1];
tagxStateLink link_npk_Die[1];
tagxState g_npkStates[19];

void xNPKStateReset();
void xNPKStateInit();

// xNPKStateReset__Fv
// Start address: 0x3559f0
void xNPKStateReset()
{
	// Line 72, Address: 0x3559f0, Func Offset: 0
	// Line 74, Address: 0x3559f8, Func Offset: 0x8
	// Line 76, Address: 0x355a0c, Func Offset: 0x1c
	// Func End, Address: 0x355a1c, Func Offset: 0x2c
}

// xNPKStateInit__Fv
// Start address: 0x355a20
void xNPKStateInit()
{
	// Line 67, Address: 0x355a20, Func Offset: 0
	// Line 69, Address: 0x355a28, Func Offset: 0x8
	// Line 70, Address: 0x355a3c, Func Offset: 0x1c
	// Func End, Address: 0x355a4c, Func Offset: 0x2c
}

