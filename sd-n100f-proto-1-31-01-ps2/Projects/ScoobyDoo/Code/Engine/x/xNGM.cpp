typedef struct tagxStateLink;
typedef struct tagxState;


typedef tagxStateLink type_0[1];
typedef tagxStateLink type_1[1];
typedef tagxStateLink type_2[1];
typedef tagxStateLink type_3[1];
typedef tagxStateLink type_4[1];
typedef uint8 type_5[18];
typedef tagxStateLink type_6[1];
typedef tagxStateLink type_7[13];
typedef tagxStateLink type_8[1];
typedef tagxStateLink type_9[1];
typedef tagxState type_10[28];
typedef tagxStateLink type_11[1];
typedef tagxStateLink type_12[1];
typedef tagxStateLink type_13[3];
typedef tagxStateLink type_14[19];
typedef tagxStateLink type_15[1];
typedef tagxStateLink type_16[1];
typedef uint8 type_17[18];
typedef tagxStateLink type_18[1];
typedef tagxStateLink type_19[1];
typedef tagxStateLink type_20[1];
typedef tagxStateLink type_21[20];
typedef tagxStateLink type_22[1];
typedef tagxStateLink type_23[1];
typedef tagxStateLink type_24[1];
typedef tagxStateLink type_25[3];
typedef tagxStateLink type_26[13];
typedef tagxStateLink type_27[1];
typedef tagxStateLink type_28[1];
typedef tagxStateLink type_29[1];
typedef tagxStateLink type_30[1];

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

uint8 g_ngmJointsAll[18];
uint8 g_ngmJointsUpperOnly[18];
tagxStateLink link_ngm_Idle[20];
tagxStateLink link_ngm_PreBirth[1];
tagxStateLink link_ngm_RRun[19];
tagxStateLink link_ngm_Walk[13];
tagxStateLink link_ngm_Run[13];
tagxStateLink link_ngm_DodgeLeft[1];
tagxStateLink link_ngm_DodgeRight[1];
tagxStateLink link_ngm_AttackRangeFront[1];
tagxStateLink link_ngm_AttackRangeLeft[1];
tagxStateLink link_ngm_AttackRangeRight[1];
tagxStateLink link_ngm_AttackMelee[1];
tagxStateLink link_ngm_InjuryMelee[1];
tagxStateLink link_ngm_InjuryRange[1];
tagxStateLink link_ngm_InjuryMeleeThread[1];
tagxStateLink link_ngm_InjuryRangeThread[1];
tagxStateLink link_ngm_DeathMelee1[1];
tagxStateLink link_ngm_DeathMelee2[1];
tagxStateLink link_ngm_DeathMelee3[1];
tagxStateLink link_ngm_DeathMelee4[1];
tagxStateLink link_ngm_DeathRange1[1];
tagxStateLink link_ngm_DeathRange2[1];
tagxStateLink link_ngm_DeathRange3[1];
tagxStateLink link_ngm_DeathRange4[1];
tagxStateLink link_ngm_ComboIdle[3];
tagxStateLink link_ngm_ComboIdleChainsaw[3];
tagxStateLink link_ngm_ComboMissDeath[1];
tagxStateLink link_ngm_ComboDeathGun[1];
tagxStateLink link_ngm_ComboDeathAxe[1];
tagxState g_ngmStates[28];

void xNGMStateReset();
void xNGMStateInit();

// xNGMStateReset__Fv
// Start address: 0x355f90
void xNGMStateReset()
{
	// Line 85, Address: 0x355f90, Func Offset: 0
	// Line 87, Address: 0x355f98, Func Offset: 0x8
	// Line 89, Address: 0x355fac, Func Offset: 0x1c
	// Func End, Address: 0x355fbc, Func Offset: 0x2c
}

// xNGMStateInit__Fv
// Start address: 0x355fc0
void xNGMStateInit()
{
	// Line 73, Address: 0x355fc0, Func Offset: 0
	// Line 75, Address: 0x355fc8, Func Offset: 0x8
	// Line 77, Address: 0x355fdc, Func Offset: 0x1c
	// Func End, Address: 0x355fec, Func Offset: 0x2c
}

