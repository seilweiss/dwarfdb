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

uint8 g_nmcJointsAll[16];
uint8 g_nmcJointsUpperOnly[16];
tagxStateLink link_nmc_Idle[21];
tagxStateLink link_nmc_Run[11];
tagxStateLink link_nmc_DodgeLeft[1];
tagxStateLink link_nmc_DodgeRight[1];
tagxStateLink link_nmc_BlockLeft[1];
tagxStateLink link_nmc_BlockRight[1];
tagxStateLink link_nmc_AttackMeleeLeft[1];
tagxStateLink link_nmc_AttackMeleeRight[1];
tagxStateLink link_nmc_AttackMeleeStrong[1];
tagxStateLink link_nmc_AttackRangePounce[1];
tagxStateLink link_nmc_AttackRangePounceSlash[1];
tagxStateLink link_nmc_InjuryFrontInIdle[1];
tagxStateLink link_nmc_InjuryStrongInIdle[1];
tagxStateLink link_nmc_InjuryFrontInRun[1];
tagxStateLink link_nmc_InjuryStrongInRun[1];
tagxStateLink link_nmc_InjuryInThread[1];
tagxStateLink link_nmc_DeathMelee1[1];
tagxStateLink link_nmc_DeathRange1[1];
tagxStateLink link_nmc_ComboIdle[3];
tagxStateLink link_nmc_ComboIdleChainsaw[3];
tagxStateLink link_nmc_ComboMissDeath[1];
tagxStateLink link_nmc_ComboDeathGun[1];
tagxStateLink link_nmc_ComboDeathAxe[1];
tagxState g_nmcStates[23];

void xNMCStateReset();
void xNMCStateInit();

// xNMCStateReset__Fv
// Start address: 0x355db0
void xNMCStateReset()
{
	// Line 80, Address: 0x355db0, Func Offset: 0
	// Line 83, Address: 0x355db8, Func Offset: 0x8
	// Line 85, Address: 0x355dcc, Func Offset: 0x1c
	// Func End, Address: 0x355ddc, Func Offset: 0x2c
}

// xNMCStateInit__Fv
// Start address: 0x355de0
void xNMCStateInit()
{
	// Line 69, Address: 0x355de0, Func Offset: 0
	// Line 71, Address: 0x355de8, Func Offset: 0x8
	// Line 72, Address: 0x355dfc, Func Offset: 0x1c
	// Func End, Address: 0x355e0c, Func Offset: 0x2c
}

