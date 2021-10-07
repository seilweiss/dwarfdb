typedef struct tagxStateLink;
typedef struct tagxState;


typedef tagxStateLink type_0[1];
typedef tagxStateLink type_1[1];
typedef tagxStateLink type_2[1];
typedef tagxStateLink type_3[1];
typedef tagxState type_4[30];
typedef tagxStateLink type_5[19];
typedef tagxStateLink type_6[1];
typedef uint8 type_7[15];
typedef tagxStateLink type_8[1];
typedef tagxStateLink type_9[3];
typedef tagxStateLink type_10[1];
typedef tagxStateLink type_11[1];
typedef tagxStateLink type_12[1];
typedef tagxStateLink type_13[1];
typedef tagxStateLink type_14[1];
typedef tagxStateLink type_15[1];
typedef tagxStateLink type_16[1];
typedef tagxStateLink type_17[12];
typedef tagxStateLink type_18[1];
typedef uint8 type_19[15];
typedef tagxStateLink type_20[1];
typedef tagxStateLink type_21[3];
typedef tagxStateLink type_22[1];
typedef tagxStateLink type_23[1];
typedef tagxStateLink type_24[1];
typedef tagxStateLink type_25[19];
typedef tagxStateLink type_26[1];
typedef tagxStateLink type_27[1];
typedef tagxStateLink type_28[1];
typedef tagxStateLink type_29[1];
typedef tagxStateLink type_30[12];
typedef tagxStateLink type_31[1];
typedef tagxStateLink type_32[1];

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

uint8 g_ncgJointsAll[15];
uint8 g_ncgJointsUpperOnly[15];
tagxStateLink link_ncg_Idle[19];
tagxStateLink link_ncg_IdleReady[19];
tagxStateLink link_ncg_Walk[12];
tagxStateLink link_ncg_Run[12];
tagxStateLink link_ncg_DodgeLeftIdle[1];
tagxStateLink link_ncg_DodgeRightIdle[1];
tagxStateLink link_ncg_DodgeLeftIdleReady[1];
tagxStateLink link_ncg_DodgeRightIdleReady[1];
tagxStateLink link_ncg_AttackMeleeLeftIdle[1];
tagxStateLink link_ncg_AttackMeleeRightIdle[1];
tagxStateLink link_ncg_AttackMeleeStabIdle[1];
tagxStateLink link_ncg_AttackMeleeStrongIdle[1];
tagxStateLink link_ncg_AttackMeleeLeftIdleReady[1];
tagxStateLink link_ncg_AttackMeleeRightIdleReady[1];
tagxStateLink link_ncg_AttackMeleeStabIdleReady[1];
tagxStateLink link_ncg_AttackMeleeStrongIdleReady[1];
tagxStateLink link_ncg_InjuryFrontIdle[1];
tagxStateLink link_ncg_InjuryFrontInComboIdle[1];
tagxStateLink link_ncg_InjuryStrongIdle[1];
tagxStateLink link_ncg_InjuryFrontIdleReady[1];
tagxStateLink link_ncg_InjuryStrongIdleReady[1];
tagxStateLink link_ncg_InjuryFrontUpperBodyThread[1];
tagxStateLink link_ncg_InjuryStrongUpperBodyThread[1];
tagxStateLink link_ncg_DieMelee[1];
tagxStateLink link_ncg_DieRange[1];
tagxStateLink link_ncg_ComboIdle[3];
tagxStateLink link_ncg_ComboIdleChainsaw[3];
tagxStateLink link_ncg_ComboMissDeath[1];
tagxStateLink link_ncg_ComboDeathGun[1];
tagxStateLink link_ncg_ComboDeathAxe[1];
tagxState g_ncgStates[30];

void xNCGStateReset();
void xNCGStateInit();

// xNCGStateReset__Fv
// Start address: 0x3560b0
void xNCGStateReset()
{
	// Line 80, Address: 0x3560b0, Func Offset: 0
	// Line 82, Address: 0x3560b8, Func Offset: 0x8
	// Line 84, Address: 0x3560cc, Func Offset: 0x1c
	// Func End, Address: 0x3560dc, Func Offset: 0x2c
}

// xNCGStateInit__Fv
// Start address: 0x3560e0
void xNCGStateInit()
{
	// Line 67, Address: 0x3560e0, Func Offset: 0
	// Line 69, Address: 0x3560e8, Func Offset: 0x8
	// Line 71, Address: 0x3560fc, Func Offset: 0x1c
	// Func End, Address: 0x35610c, Func Offset: 0x2c
}

