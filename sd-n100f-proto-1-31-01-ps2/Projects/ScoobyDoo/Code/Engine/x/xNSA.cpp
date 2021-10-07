typedef struct tagxStateLink;
typedef struct tagxState;


typedef tagxStateLink type_0[1];
typedef tagxStateLink type_1[1];
typedef tagxStateLink type_2[1];
typedef tagxStateLink type_3[1];
typedef tagxStateLink type_4[1];
typedef tagxStateLink type_5[1];
typedef tagxStateLink type_6[3];
typedef uint8 type_7[16];
typedef tagxStateLink type_8[22];
typedef tagxStateLink type_9[1];
typedef tagxStateLink type_10[1];
typedef tagxStateLink type_11[1];
typedef tagxStateLink type_12[1];
typedef tagxStateLink type_13[1];
typedef tagxStateLink type_14[1];
typedef tagxStateLink type_15[1];
typedef tagxStateLink type_16[1];
typedef tagxStateLink type_17[1];
typedef tagxStateLink type_18[1];
typedef tagxStateLink type_19[1];
typedef tagxStateLink type_20[1];
typedef uint8 type_21[16];
typedef tagxStateLink type_22[14];
typedef tagxStateLink type_23[1];
typedef tagxStateLink type_24[1];
typedef tagxStateLink type_25[1];
typedef tagxState type_26[34];
typedef tagxStateLink type_27[1];
typedef tagxStateLink type_28[1];
typedef tagxStateLink type_29[1];
typedef tagxStateLink type_30[3];
typedef tagxStateLink type_31[24];
typedef tagxStateLink type_32[1];
typedef tagxStateLink type_33[1];
typedef tagxStateLink type_34[1];
typedef tagxStateLink type_35[1];
typedef tagxStateLink type_36[14];

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

uint8 g_nsaJointsAll[16];
uint8 g_nsaJointsUpperOnly[16];
tagxStateLink link_nsa_Idle[24];
tagxStateLink link_nsa_StandRRun[22];
tagxStateLink link_nsa_Walk[14];
tagxStateLink link_nsa_Run[14];
tagxStateLink link_nsa_DodgeLeft[1];
tagxStateLink link_nsa_DodgeRight[1];
tagxStateLink link_nsa_BlockLeft[1];
tagxStateLink link_nsa_BlockRight[1];
tagxStateLink link_nsa_DodgeLeftReady[1];
tagxStateLink link_nsa_DodgeRightReady[1];
tagxStateLink link_nsa_BlockLeftReady[1];
tagxStateLink link_nsa_BlockRightReady[1];
tagxStateLink link_nsa_RotateClkwise[1];
tagxStateLink link_nsa_RotateCClkwise[1];
tagxStateLink link_nsa_AttackMeleeLeft[1];
tagxStateLink link_nsa_AttackMeleeRight[1];
tagxStateLink link_nsa_AttackStrong[1];
tagxStateLink link_nsa_InjuryStrongThread[1];
tagxStateLink link_nsa_InjuryThread[1];
tagxStateLink link_nsa_InjuryStrongUpperBody[1];
tagxStateLink link_nsa_InjuryUpperBody[1];
tagxStateLink link_nsa_InjuryMoveThread[1];
tagxStateLink link_nsa_InjuryStrongMoveThread[1];
tagxStateLink link_nsa_DieMelee[1];
tagxStateLink link_nsa_DieRange[1];
tagxStateLink link_nsa_DieOpossum1[1];
tagxStateLink link_nsa_WakeOpossum1[1];
tagxStateLink link_nsa_DieOpossum2[1];
tagxStateLink link_nsa_WakeOpossum2[1];
tagxStateLink link_nsa_ComboIdle[3];
tagxStateLink link_nsa_ComboIdleChainsaw[3];
tagxStateLink link_nsa_ComboMissDeath[1];
tagxStateLink link_nsa_ComboDeathGun[1];
tagxStateLink link_nsa_ComboDeathAxe[1];
tagxState g_nsaStates[34];

void xNSAStateReset();
void xNSAStateInit();

// xNSAStateReset__Fv
// Start address: 0x355990
void xNSAStateReset()
{
	// Line 74, Address: 0x355990, Func Offset: 0
	// Line 76, Address: 0x355998, Func Offset: 0x8
	// Line 78, Address: 0x3559ac, Func Offset: 0x1c
	// Func End, Address: 0x3559bc, Func Offset: 0x2c
}

// xNSAStateInit__Fv
// Start address: 0x3559c0
void xNSAStateInit()
{
	// Line 69, Address: 0x3559c0, Func Offset: 0
	// Line 71, Address: 0x3559c8, Func Offset: 0x8
	// Line 72, Address: 0x3559dc, Func Offset: 0x1c
	// Func End, Address: 0x3559ec, Func Offset: 0x2c
}

