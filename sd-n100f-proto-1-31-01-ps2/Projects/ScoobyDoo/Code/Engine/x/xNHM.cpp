typedef struct tagxStateLink;
typedef struct tagxState;


typedef tagxStateLink type_0[12];
typedef tagxStateLink type_1[3];
typedef tagxStateLink type_2[1];
typedef tagxStateLink type_3[1];
typedef uint8 type_4[17];
typedef tagxStateLink type_5[1];
typedef tagxStateLink type_6[1];
typedef tagxStateLink type_7[1];
typedef tagxStateLink type_8[18];
typedef tagxStateLink type_9[1];
typedef tagxStateLink type_10[1];
typedef tagxStateLink type_11[1];
typedef tagxStateLink type_12[12];
typedef tagxStateLink type_13[1];
typedef tagxStateLink type_14[1];
typedef tagxStateLink type_15[1];
typedef tagxStateLink type_16[1];
typedef tagxState type_17[27];
typedef tagxStateLink type_18[1];
typedef tagxStateLink type_19[18];
typedef tagxStateLink type_20[3];
typedef tagxStateLink type_21[1];
typedef tagxStateLink type_22[1];
typedef tagxStateLink type_23[1];
typedef tagxStateLink type_24[1];
typedef tagxStateLink type_25[1];
typedef tagxStateLink type_26[1];
typedef tagxStateLink type_27[1];
typedef tagxStateLink type_28[1];

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

uint8 g_nhmJointsAll[17];
tagxStateLink link_nhm_Idle[18];
tagxStateLink link_nhm_RRun[18];
tagxStateLink link_nhm_Walk[12];
tagxStateLink link_nhm_Run[12];
tagxStateLink link_nhm_DodgeLeft[1];
tagxStateLink link_nhm_DodgeRight[1];
tagxStateLink link_nhm_AttackMeleeLeft[1];
tagxStateLink link_nhm_AttackMeleeRight[1];
tagxStateLink link_nhm_AttackMeleeStrong[1];
tagxStateLink link_nhm_InjuryShortInIdle[1];
tagxStateLink link_nhm_InjuryLongInIdle[1];
tagxStateLink link_nhm_InjuryShortInWalk[1];
tagxStateLink link_nhm_InjuryLongInWalk[1];
tagxStateLink link_nhm_InjuryInCombo[1];
tagxStateLink link_nhm_DeathMelee1[1];
tagxStateLink link_nhm_DeathMelee2[1];
tagxStateLink link_nhm_DeathMelee3[1];
tagxStateLink link_nhm_DeathMelee4[1];
tagxStateLink link_nhm_DeathRange1[1];
tagxStateLink link_nhm_DeathRange2[1];
tagxStateLink link_nhm_DeathRange3[1];
tagxStateLink link_nhm_DeathRange4[1];
tagxStateLink link_nhm_ComboIdle[3];
tagxStateLink link_nhm_ComboIdleChainsaw[3];
tagxStateLink link_nhm_ComboMissDeath[1];
tagxStateLink link_nhm_ComboDeathGun[1];
tagxStateLink link_nhm_ComboDeathAxe[1];
tagxState g_nhmStates[27];

void xNHMStateReset();
void xNHMStateInit();

// xNHMStateReset__Fv
// Start address: 0x355e70
void xNHMStateReset()
{
	// Line 63, Address: 0x355e70, Func Offset: 0
	// Line 65, Address: 0x355e78, Func Offset: 0x8
	// Line 67, Address: 0x355e8c, Func Offset: 0x1c
	// Func End, Address: 0x355e9c, Func Offset: 0x2c
}

// xNHMStateInit__Fv
// Start address: 0x355ea0
void xNHMStateInit()
{
	// Line 51, Address: 0x355ea0, Func Offset: 0
	// Line 53, Address: 0x355ea8, Func Offset: 0x8
	// Line 55, Address: 0x355ebc, Func Offset: 0x1c
	// Func End, Address: 0x355ecc, Func Offset: 0x2c
}

