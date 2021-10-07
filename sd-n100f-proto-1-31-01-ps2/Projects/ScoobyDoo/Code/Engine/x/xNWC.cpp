typedef struct tagxStateLink;
typedef struct tagxState;


typedef tagxStateLink type_0[12];
typedef tagxStateLink type_1[3];
typedef tagxStateLink type_2[1];
typedef tagxStateLink type_3[1];
typedef tagxStateLink type_4[1];
typedef uint8 type_5[14];
typedef tagxStateLink type_6[1];
typedef tagxStateLink type_7[1];
typedef tagxStateLink type_8[3];
typedef tagxStateLink type_9[1];
typedef tagxStateLink type_10[1];
typedef tagxStateLink type_11[12];
typedef tagxStateLink type_12[1];
typedef tagxStateLink type_13[1];
typedef tagxStateLink type_14[1];
typedef tagxStateLink type_15[3];
typedef uint8 type_16[14];
typedef tagxState type_17[26];
typedef tagxStateLink type_18[1];
typedef tagxStateLink type_19[18];
typedef tagxStateLink type_20[1];
typedef tagxStateLink type_21[5];
typedef tagxStateLink type_22[1];
typedef tagxStateLink type_23[11];
typedef tagxStateLink type_24[1];
typedef tagxStateLink type_25[1];
typedef tagxStateLink type_26[1];
typedef tagxStateLink type_27[3];
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

uint8 g_nwcJointsAll[14];
uint8 g_nwcJointsUpperOnly[14];
tagxStateLink link_nwc_Idle[18];
tagxStateLink link_nwc_Hop[12];
tagxStateLink link_nwc_HopPain[12];
tagxStateLink link_nwc_Walk[11];
tagxStateLink link_nwc_DodgeLeft[1];
tagxStateLink link_nwc_AttackLeft[3];
tagxStateLink link_nwc_AttackRight[3];
tagxStateLink link_nwc_AttackStrong[3];
tagxStateLink link_nwc_InjuryMelee[1];
tagxStateLink link_nwc_InjuryStrongInComboIdle[1];
tagxStateLink link_nwc_InjuryMeleeStrong[1];
tagxStateLink link_nwc_InjuryInWalkStop[1];
tagxStateLink link_nwc_InjuryInWalkKeepWalking[1];
tagxStateLink link_nwc_DeathMelee1[1];
tagxStateLink link_nwc_DeathMelee2[1];
tagxStateLink link_nwc_DeathMelee3[1];
tagxStateLink link_nwc_DeathMelee4[1];
tagxStateLink link_nwc_DeathRange1[1];
tagxStateLink link_nwc_DeathRange2[1];
tagxStateLink link_nwc_DeathRange3[1];
tagxStateLink link_nwc_DeathRange4[1];
tagxStateLink link_nwc_ComboIdle[5];
tagxStateLink link_nwc_ComboIdleChainsaw[3];
tagxStateLink link_nwc_ComboMissDeath[1];
tagxStateLink link_nwc_ComboDeathGun[1];
tagxStateLink link_nwc_ComboDeathAxe[1];
tagxState g_nwcStates[26];

void xNWCStateReset();
void xNWCStateInit();

// xNWCStateReset__Fv
// Start address: 0x355750
void xNWCStateReset()
{
	// Line 75, Address: 0x355750, Func Offset: 0
	// Line 77, Address: 0x355758, Func Offset: 0x8
	// Line 79, Address: 0x35576c, Func Offset: 0x1c
	// Func End, Address: 0x35577c, Func Offset: 0x2c
}

// xNWCStateInit__Fv
// Start address: 0x355780
void xNWCStateInit()
{
	// Line 64, Address: 0x355780, Func Offset: 0
	// Line 66, Address: 0x355788, Func Offset: 0x8
	// Line 67, Address: 0x35579c, Func Offset: 0x1c
	// Func End, Address: 0x3557ac, Func Offset: 0x2c
}

