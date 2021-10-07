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
typedef tagxStateLink type_8[1];
typedef tagxStateLink type_9[1];
typedef tagxStateLink type_10[1];
typedef tagxStateLink type_11[1];
typedef tagxStateLink type_12[1];
typedef tagxStateLink type_13[1];
typedef tagxStateLink type_14[1];
typedef tagxStateLink type_15[1];
typedef uint8 type_16[14];
typedef tagxState type_17[26];
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

uint8 g_nnmJointsAll[14];
uint8 g_nnmJointsUpperOnly[14];
tagxStateLink link_nnm_Idle[18];
tagxStateLink link_nnm_Walk[12];
tagxStateLink link_nnm_DodgeLeft[1];
tagxStateLink link_nnm_DodgeRight[1];
tagxStateLink link_nnm_AttackRangeFront[1];
tagxStateLink link_nnm_AttackRangeLeft[1];
tagxStateLink link_nnm_AttackRangeRight[1];
tagxStateLink link_nnm_AttackMelee[1];
tagxStateLink link_nnm_InjuryMeleeComboIdle[1];
tagxStateLink link_nnm_InjuryMeleeIdle[1];
tagxStateLink link_nnm_InjuryRangeIdle[1];
tagxStateLink link_nnm_InjuryMeleeWalk[1];
tagxStateLink link_nnm_InjuryRangeWalk[1];
tagxStateLink link_nnm_DeathMelee1[1];
tagxStateLink link_nnm_DeathMelee2[1];
tagxStateLink link_nnm_DeathMelee3[1];
tagxStateLink link_nnm_DeathMelee4[1];
tagxStateLink link_nnm_DeathRange1[1];
tagxStateLink link_nnm_DeathRange2[1];
tagxStateLink link_nnm_DeathRange3[1];
tagxStateLink link_nnm_DeathRange4[1];
tagxStateLink link_nnm_ComboIdle[3];
tagxStateLink link_nnm_ComboIdleChainsaw[3];
tagxStateLink link_nnm_ComboMissDeath[1];
tagxStateLink link_nnm_ComboDeathGun[1];
tagxStateLink link_nnm_ComboDeathAxe[1];
tagxState g_nnmStates[26];

void xNNMStateReset();
void xNNMStateInit();

// xNNMStateReset__Fv
// Start address: 0x355bd0
void xNNMStateReset()
{
	// Line 75, Address: 0x355bd0, Func Offset: 0
	// Line 77, Address: 0x355bd8, Func Offset: 0x8
	// Line 79, Address: 0x355bec, Func Offset: 0x1c
	// Func End, Address: 0x355bfc, Func Offset: 0x2c
}

// xNNMStateInit__Fv
// Start address: 0x355c00
void xNNMStateInit()
{
	// Line 64, Address: 0x355c00, Func Offset: 0
	// Line 66, Address: 0x355c08, Func Offset: 0x8
	// Line 67, Address: 0x355c1c, Func Offset: 0x1c
	// Func End, Address: 0x355c2c, Func Offset: 0x2c
}

