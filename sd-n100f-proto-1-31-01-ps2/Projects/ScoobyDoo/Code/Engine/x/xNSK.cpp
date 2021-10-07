typedef struct tagxStateLink;
typedef struct tagxState;


typedef tagxStateLink type_0[1];
typedef tagxStateLink type_1[22];
typedef tagxStateLink type_2[1];
typedef tagxStateLink type_3[1];
typedef tagxStateLink type_4[1];
typedef tagxState type_5[37];
typedef tagxStateLink type_6[12];
typedef uint8 type_7[16];
typedef tagxStateLink type_8[1];
typedef tagxStateLink type_9[1];
typedef tagxStateLink type_10[3];
typedef tagxStateLink type_11[1];
typedef tagxStateLink type_12[1];
typedef tagxStateLink type_13[1];
typedef tagxStateLink type_14[1];
typedef tagxStateLink type_15[1];
typedef tagxStateLink type_16[1];
typedef tagxStateLink type_17[22];
typedef tagxStateLink type_18[1];
typedef tagxStateLink type_19[1];
typedef tagxStateLink type_20[1];
typedef tagxStateLink type_21[1];
typedef uint8 type_22[16];
typedef tagxStateLink type_23[1];
typedef tagxStateLink type_24[1];
typedef tagxStateLink type_25[3];
typedef tagxStateLink type_26[1];
typedef tagxStateLink type_27[1];
typedef tagxStateLink type_28[1];
typedef tagxStateLink type_29[1];
typedef tagxStateLink type_30[1];
typedef tagxStateLink type_31[1];
typedef tagxStateLink type_32[12];
typedef tagxStateLink type_33[1];
typedef tagxStateLink type_34[1];
typedef tagxStateLink type_35[1];
typedef tagxStateLink type_36[1];
typedef tagxStateLink type_37[1];
typedef tagxStateLink type_38[1];
typedef tagxStateLink type_39[1];

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

uint8 g_nskJointsAll[16];
uint8 g_nskJointsUpperOnly[16];
tagxStateLink link_nsk_PreBirth[1];
tagxStateLink link_nsk_PopUp[1];
tagxStateLink link_nsk_Dive[1];
tagxStateLink link_nsk_Idle[22];
tagxStateLink link_nsk_StandRRun[22];
tagxStateLink link_nsk_Walk[12];
tagxStateLink link_nsk_Run[12];
tagxStateLink link_nsk_DodgeLeftIdle[1];
tagxStateLink link_nsk_DodgeRightIdle[1];
tagxStateLink link_nsk_BlockLeftIdle[1];
tagxStateLink link_nsk_BlockRightIdle[1];
tagxStateLink link_nsk_DodgeLeftReady[1];
tagxStateLink link_nsk_DodgeRightReady[1];
tagxStateLink link_nsk_BlockLeftReady[1];
tagxStateLink link_nsk_BlockRightReady[1];
tagxStateLink link_nsk_AttackMeleeLeftIdle[1];
tagxStateLink link_nsk_AttackMeleeRightIdle[1];
tagxStateLink link_nsk_AttackStrongSpinIdle[1];
tagxStateLink link_nsk_AttackStrongSlapIdle[1];
tagxStateLink link_nsk_AttackMeleeLeftRRun[1];
tagxStateLink link_nsk_AttackMeleeRightRRun[1];
tagxStateLink link_nsk_AttackStrongSpinRRun[1];
tagxStateLink link_nsk_AttackStrongSlapRRun[1];
tagxStateLink link_nsk_InjuryFromIdle[1];
tagxStateLink link_nsk_InjuryStrongFromIdle[1];
tagxStateLink link_nsk_InjuryFromRRun[1];
tagxStateLink link_nsk_InjuryStrongFromRRun[1];
tagxStateLink link_nsk_InjuryUpperBodyThread[1];
tagxStateLink link_nsk_DieHeartAttack[1];
tagxStateLink link_nsk_DieFlyBack[1];
tagxStateLink link_nsk_DieFallForward[1];
tagxStateLink link_nsk_DieBrokenSpine[1];
tagxStateLink link_nsk_ComboIdle[3];
tagxStateLink link_nsk_ComboIdleChainsaw[3];
tagxStateLink link_nsk_ComboMissDeath[1];
tagxStateLink link_nsk_ComboDeathGun[1];
tagxStateLink link_nsk_ComboDeathAxe[1];
tagxState g_nskStates[37];

void xNSKStateReset();
void xNSKStateInit();

// xNSKStateReset__Fv
// Start address: 0x3558d0
void xNSKStateReset()
{
	// Line 76, Address: 0x3558d0, Func Offset: 0
	// Line 78, Address: 0x3558d8, Func Offset: 0x8
	// Line 80, Address: 0x3558ec, Func Offset: 0x1c
	// Func End, Address: 0x3558fc, Func Offset: 0x2c
}

// xNSKStateInit__Fv
// Start address: 0x355900
void xNSKStateInit()
{
	// Line 69, Address: 0x355900, Func Offset: 0
	// Line 71, Address: 0x355908, Func Offset: 0x8
	// Line 73, Address: 0x35591c, Func Offset: 0x1c
	// Func End, Address: 0x35592c, Func Offset: 0x2c
}

