typedef struct tagxStateLink;
typedef struct tagxState;


typedef tagxStateLink type_0[1];
typedef tagxStateLink type_1[11];
typedef tagxStateLink type_2[1];
typedef uint8 type_3[32];
typedef tagxStateLink type_4[5];
typedef tagxStateLink type_5[1];
typedef tagxStateLink type_6[1];
typedef tagxStateLink type_7[1];
typedef tagxStateLink type_8[1];
typedef tagxStateLink type_9[13];
typedef tagxStateLink type_10[1];
typedef tagxStateLink type_11[16];
typedef uint8 type_12[32];
typedef tagxStateLink type_13[5];
typedef tagxStateLink type_14[1];
typedef tagxStateLink type_15[1];
typedef tagxStateLink type_16[1];
typedef tagxState type_17[19];
typedef tagxStateLink type_18[5];
typedef tagxStateLink type_19[1];
typedef tagxStateLink type_20[14];
typedef tagxStateLink type_21[5];

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

uint8 g_nmiJointsAll[32];
uint8 g_nmiJointsUpperOnly[32];
tagxStateLink link_nmi_Idle[16];
tagxStateLink link_nmi_IdleLow[14];
tagxStateLink link_nmi_Turn180Left[1];
tagxStateLink link_nmi_Turn180Right[1];
tagxStateLink link_nmi_Walk[11];
tagxStateLink link_nmi_WalkLow[13];
tagxStateLink link_nmi_AttackMeleeLeft[5];
tagxStateLink link_nmi_AttackMeleeRight[5];
tagxStateLink link_nmi_AttackRangeLeft[5];
tagxStateLink link_nmi_AttackRangeRight[5];
tagxStateLink link_nmi_InjuryLeftLongFromIdle[1];
tagxStateLink link_nmi_InjuryLeftShortFromIdle[1];
tagxStateLink link_nmi_InjuryRightLongFromIdle[1];
tagxStateLink link_nmi_InjuryRightShortFromIdle[1];
tagxStateLink link_nmi_InjuryLeftLongFromIdleUpper[1];
tagxStateLink link_nmi_InjuryLeftShortFromIdleUpper[1];
tagxStateLink link_nmi_InjuryRightLongFromIdleUpper[1];
tagxStateLink link_nmi_InjuryRightShortFromIdleUpper[1];
tagxStateLink link_nmi_DeathMelee3[1];
tagxState g_nmiStates[19];

void xNMIStateReset();
void xNMIStateInit();

// xNMIStateReset__Fv
// Start address: 0x355cf0
void xNMIStateReset()
{
	// Line 113, Address: 0x355cf0, Func Offset: 0
	// Line 115, Address: 0x355cf8, Func Offset: 0x8
	// Line 117, Address: 0x355d0c, Func Offset: 0x1c
	// Func End, Address: 0x355d1c, Func Offset: 0x2c
}

// xNMIStateInit__Fv
// Start address: 0x355d20
void xNMIStateInit()
{
	// Line 102, Address: 0x355d20, Func Offset: 0
	// Line 104, Address: 0x355d28, Func Offset: 0x8
	// Line 105, Address: 0x355d3c, Func Offset: 0x1c
	// Func End, Address: 0x355d4c, Func Offset: 0x2c
}

