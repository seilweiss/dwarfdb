typedef struct tagxStateLink;
typedef struct tagxState;


typedef tagxStateLink type_0[1];
typedef tagxStateLink type_1[3];
typedef tagxStateLink type_2[1];
typedef tagxStateLink type_3[1];
typedef uint8 type_4[16];
typedef tagxStateLink type_5[1];
typedef tagxStateLink type_6[1];
typedef tagxStateLink type_7[1];
typedef tagxStateLink type_8[1];
typedef tagxStateLink type_9[1];
typedef tagxStateLink type_10[1];
typedef tagxStateLink type_11[1];
typedef tagxStateLink type_12[1];
typedef uint8 type_13[16];
typedef tagxStateLink type_14[19];
typedef tagxStateLink type_15[1];
typedef tagxStateLink type_16[3];
typedef tagxState type_17[21];
typedef tagxStateLink type_18[1];
typedef tagxStateLink type_19[1];
typedef tagxStateLink type_20[1];
typedef tagxStateLink type_21[1];
typedef tagxStateLink type_22[1];
typedef tagxStateLink type_23[11];

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

uint8 g_nmaJointsAll[16];
uint8 g_nmaJointsUpperOnly[16];
tagxStateLink link_nma_Idle[19];
tagxStateLink link_nma_Run[11];
tagxStateLink link_nma_DodgeLeft[1];
tagxStateLink link_nma_DodgeRight[1];
tagxStateLink link_nma_BlockLeft[1];
tagxStateLink link_nma_BlockRight[1];
tagxStateLink link_nma_AttackMelee[1];
tagxStateLink link_nma_AttackBow[1];
tagxStateLink link_nma_AttackBowQuick[1];
tagxStateLink link_nma_InjuryFrontInIdle[1];
tagxStateLink link_nma_InjuryStrongInIdle[1];
tagxStateLink link_nma_InjuryFrontInRun[1];
tagxStateLink link_nma_InjuryStrongInRun[1];
tagxStateLink link_nma_InjuryInThread[1];
tagxStateLink link_nma_DeathMelee1[1];
tagxStateLink link_nma_DeathRange1[1];
tagxStateLink link_nma_ComboIdle[3];
tagxStateLink link_nma_ComboIdleChainsaw[3];
tagxStateLink link_nma_ComboMissDeath[1];
tagxStateLink link_nma_ComboDeathGun[1];
tagxStateLink link_nma_ComboDeathAxe[1];
tagxState g_nmaStates[21];

void xNMAStateReset();
void xNMAStateInit();

// xNMAStateReset__Fv
// Start address: 0x355e10
void xNMAStateReset()
{
	// Line 78, Address: 0x355e10, Func Offset: 0
	// Line 80, Address: 0x355e18, Func Offset: 0x8
	// Line 82, Address: 0x355e2c, Func Offset: 0x1c
	// Func End, Address: 0x355e3c, Func Offset: 0x2c
}

// xNMAStateInit__Fv
// Start address: 0x355e40
void xNMAStateInit()
{
	// Line 67, Address: 0x355e40, Func Offset: 0
	// Line 69, Address: 0x355e48, Func Offset: 0x8
	// Line 70, Address: 0x355e5c, Func Offset: 0x1c
	// Func End, Address: 0x355e6c, Func Offset: 0x2c
}

