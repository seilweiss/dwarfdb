typedef struct tagxStateLink;
typedef struct tagxState;


typedef tagxStateLink type_0[1];
typedef tagxStateLink type_1[2];
typedef uint8 type_2[57];
typedef tagxStateLink type_3[1];
typedef tagxStateLink type_4[1];
typedef tagxStateLink type_5[1];
typedef tagxState type_6[13];
typedef tagxStateLink type_7[14];
typedef tagxStateLink type_8[1];
typedef uint8 type_9[57];
typedef tagxStateLink type_10[1];
typedef tagxStateLink type_11[1];
typedef tagxStateLink type_12[2];
typedef tagxStateLink type_13[3];
typedef tagxStateLink type_14[1];
typedef tagxStateLink type_15[1];

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

uint8 g_nabJointsAll[57];
uint8 g_nabJointsUpperOnly[57];
tagxStateLink link_nab_Idle[14];
tagxStateLink link_nab_Run[3];
tagxStateLink link_nab_DodgeLeft[1];
tagxStateLink link_nab_DodgeRight[1];
tagxStateLink link_nab_BlockLeft[1];
tagxStateLink link_nab_BlockRight[1];
tagxStateLink link_nab_RotateClkwise[2];
tagxStateLink link_nab_RotateCClkwise[2];
tagxStateLink link_nab_AttackMeleeSaw[1];
tagxStateLink link_nab_AttackMeleeHammer3[1];
tagxStateLink link_nab_AttackMeleeBackhand[1];
tagxStateLink link_nab_InjuryMelee[1];
tagxStateLink link_nab_InjuryRange[1];
tagxState g_nabStates[13];

void xNABStateReset();
void xNABStateInit();

// xNABStateReset__Fv
// Start address: 0x3566c0
void xNABStateReset()
{
	// Line 160, Address: 0x3566c0, Func Offset: 0
	// Line 162, Address: 0x3566c8, Func Offset: 0x8
	// Line 164, Address: 0x3566dc, Func Offset: 0x1c
	// Func End, Address: 0x3566ec, Func Offset: 0x2c
}

// xNABStateInit__Fv
// Start address: 0x3566f0
void xNABStateInit()
{
	// Line 150, Address: 0x3566f0, Func Offset: 0
	// Line 151, Address: 0x3566f8, Func Offset: 0x8
	// Line 152, Address: 0x35670c, Func Offset: 0x1c
	// Func End, Address: 0x35671c, Func Offset: 0x2c
}

