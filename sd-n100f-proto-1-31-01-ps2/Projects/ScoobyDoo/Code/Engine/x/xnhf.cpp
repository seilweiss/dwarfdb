typedef struct tagxStateLink;
typedef struct tagxState;


typedef tagxStateLink type_0[1];
typedef tagxStateLink type_1[3];
typedef tagxStateLink type_2[16];
typedef tagxStateLink type_3[1];
typedef uint8 type_4[17];
typedef tagxStateLink type_5[1];
typedef tagxStateLink type_6[1];
typedef tagxStateLink type_7[1];
typedef tagxStateLink type_8[1];
typedef tagxStateLink type_9[1];
typedef tagxStateLink type_10[11];
typedef tagxStateLink type_11[1];
typedef tagxState type_12[17];
typedef tagxStateLink type_13[1];
typedef tagxStateLink type_14[3];
typedef tagxStateLink type_15[1];
typedef tagxStateLink type_16[1];
typedef tagxStateLink type_17[1];
typedef tagxStateLink type_18[1];

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

uint8 g_nhfJointsAll[17];
tagxStateLink link_nhf_Idle[16];
tagxStateLink link_nhf_Walk[11];
tagxStateLink link_nhf_DodgeLeft[1];
tagxStateLink link_nhf_DodgeRight[1];
tagxStateLink link_nhf_AttackMeleeLeft[1];
tagxStateLink link_nhf_AttackMeleeRight[1];
tagxStateLink link_nhf_InjuryShortInIdle[1];
tagxStateLink link_nhf_InjuryLongInIdle[1];
tagxStateLink link_nhf_InjuryShortInWalk[1];
tagxStateLink link_nhf_InjuryLongInWalk[1];
tagxStateLink link_nhf_InjuryInComboIdle[1];
tagxStateLink link_nhf_Death[1];
tagxStateLink link_nhf_ComboIdle[3];
tagxStateLink link_nhf_ComboIdleChainsaw[3];
tagxStateLink link_nhf_ComboMissDeath[1];
tagxStateLink link_nhf_ComboDeathGun[1];
tagxStateLink link_nhf_ComboDeathAxe[1];
tagxState g_nhfStates[17];

void xNHFStateReset();
void xNHFStateInit();

// xNHFStateReset__Fv
// Start address: 0x355ed0
void xNHFStateReset()
{
	// Line 63, Address: 0x355ed0, Func Offset: 0
	// Line 65, Address: 0x355ed8, Func Offset: 0x8
	// Line 67, Address: 0x355eec, Func Offset: 0x1c
	// Func End, Address: 0x355efc, Func Offset: 0x2c
}

// xNHFStateInit__Fv
// Start address: 0x355f00
void xNHFStateInit()
{
	// Line 51, Address: 0x355f00, Func Offset: 0
	// Line 53, Address: 0x355f08, Func Offset: 0x8
	// Line 55, Address: 0x355f1c, Func Offset: 0x1c
	// Func End, Address: 0x355f2c, Func Offset: 0x2c
}

