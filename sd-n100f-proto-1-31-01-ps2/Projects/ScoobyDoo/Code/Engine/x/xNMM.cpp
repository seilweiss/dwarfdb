typedef struct tagxStateLink;
typedef struct tagxState;


typedef tagxStateLink type_0[11];
typedef tagxStateLink type_1[1];
typedef tagxStateLink type_2[1];
typedef tagxStateLink type_3[1];
typedef tagxStateLink type_4[1];
typedef tagxStateLink type_5[1];
typedef uint8 type_6[16];
typedef tagxStateLink type_7[1];
typedef tagxStateLink type_8[1];
typedef tagxStateLink type_9[1];
typedef tagxStateLink type_10[1];
typedef tagxStateLink type_11[1];
typedef tagxStateLink type_12[3];
typedef tagxState type_13[23];
typedef tagxStateLink type_14[1];
typedef tagxStateLink type_15[1];
typedef uint8 type_16[16];
typedef tagxStateLink type_17[21];
typedef tagxStateLink type_18[1];
typedef tagxStateLink type_19[1];
typedef tagxStateLink type_20[1];
typedef tagxStateLink type_21[1];
typedef tagxStateLink type_22[1];
typedef tagxStateLink type_23[3];
typedef tagxStateLink type_24[1];
typedef tagxStateLink type_25[1];

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

uint8 g_nmmJointsAll[16];
uint8 g_nmmJointsUpperOnly[16];
tagxStateLink link_nmm_Idle[21];
tagxStateLink link_nmm_Run[11];
tagxStateLink link_nmm_DodgeLeft[1];
tagxStateLink link_nmm_DodgeRight[1];
tagxStateLink link_nmm_BlockLeft[1];
tagxStateLink link_nmm_BlockRight[1];
tagxStateLink link_nmm_AttackMeleeLeft[1];
tagxStateLink link_nmm_AttackMeleeRight[1];
tagxStateLink link_nmm_AttackMeleeStrong[1];
tagxStateLink link_nmm_AttackRangePounce[1];
tagxStateLink link_nmm_AttackRangePounceStab[1];
tagxStateLink link_nmm_InjuryFrontInIdle[1];
tagxStateLink link_nmm_InjuryStrongInIdle[1];
tagxStateLink link_nmm_InjuryFrontInRun[1];
tagxStateLink link_nmm_InjuryStrongInRun[1];
tagxStateLink link_nmm_InjuryInThread[1];
tagxStateLink link_nmm_DeathMelee1[1];
tagxStateLink link_nmm_DeathRange1[1];
tagxStateLink link_nmm_ComboIdle[3];
tagxStateLink link_nmm_ComboIdleChainsaw[3];
tagxStateLink link_nmm_ComboMissDeath[1];
tagxStateLink link_nmm_ComboDeathGun[1];
tagxStateLink link_nmm_ComboDeathAxe[1];
tagxState g_nmmStates[23];

void xNMMStateReset();
void xNMMStateInit();

// xNMMStateReset__Fv
// Start address: 0x355c90
void xNMMStateReset()
{
	// Line 81, Address: 0x355c90, Func Offset: 0
	// Line 83, Address: 0x355c98, Func Offset: 0x8
	// Line 85, Address: 0x355cac, Func Offset: 0x1c
	// Func End, Address: 0x355cbc, Func Offset: 0x2c
}

// xNMMStateInit__Fv
// Start address: 0x355cc0
void xNMMStateInit()
{
	// Line 70, Address: 0x355cc0, Func Offset: 0
	// Line 72, Address: 0x355cc8, Func Offset: 0x8
	// Line 73, Address: 0x355cdc, Func Offset: 0x1c
	// Func End, Address: 0x355cec, Func Offset: 0x2c
}

