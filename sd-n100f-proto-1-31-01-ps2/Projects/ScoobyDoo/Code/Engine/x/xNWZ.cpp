typedef struct tagxStateLink;
typedef struct tagxState;


typedef tagxStateLink type_0[1];
typedef tagxStateLink type_1[1];
typedef tagxStateLink type_2[1];
typedef tagxState type_3[15];
typedef uint8 type_4[51];
typedef tagxStateLink type_5[1];
typedef tagxStateLink type_6[1];
typedef tagxStateLink type_7[1];
typedef tagxStateLink type_8[1];
typedef tagxStateLink type_9[19];
typedef tagxStateLink type_10[1];
typedef uint8 type_11[51];
typedef tagxStateLink type_12[1];
typedef tagxStateLink type_13[1];
typedef tagxStateLink type_14[1];
typedef tagxStateLink type_15[1];
typedef tagxStateLink type_16[11];
typedef tagxStateLink type_17[1];

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

uint8 g_nwzJointsAll[51];
uint8 g_nwzJointsUpperOnly[51];
tagxStateLink link_nwz_Idle[19];
tagxStateLink link_nwz_Run[11];
tagxStateLink link_nwz_DodgeLeft[1];
tagxStateLink link_nwz_DodgeRight[1];
tagxStateLink link_nwz_BlockLeft[1];
tagxStateLink link_nwz_BlockRight[1];
tagxStateLink link_nwz_AttackMeleeKick[1];
tagxStateLink link_nwz_AttackRangeCape[1];
tagxStateLink link_nwz_AttackRangeThrow[1];
tagxStateLink link_nwz_AttackRangeSky[1];
tagxStateLink link_nwz_InjuryMeleeFromIdle[1];
tagxStateLink link_nwz_InjuryRangeFromIdle[1];
tagxStateLink link_nwz_InjuryMeleeUpperBodyThread[1];
tagxStateLink link_nwz_InjuryRangeUpperBodyThread[1];
tagxStateLink link_nwz_DieVortex[1];
tagxState g_nwzStates[15];

void xNWZStateReset();
void xNWZStateInit();

// xNWZStateReset__Fv
// Start address: 0x3556f0
void xNWZStateReset()
{
	// Line 149, Address: 0x3556f0, Func Offset: 0
	// Line 151, Address: 0x3556f8, Func Offset: 0x8
	// Line 153, Address: 0x35570c, Func Offset: 0x1c
	// Func End, Address: 0x35571c, Func Offset: 0x2c
}

// xNWZStateInit__Fv
// Start address: 0x355720
void xNWZStateInit()
{
	// Line 138, Address: 0x355720, Func Offset: 0
	// Line 140, Address: 0x355728, Func Offset: 0x8
	// Line 141, Address: 0x35573c, Func Offset: 0x1c
	// Func End, Address: 0x35574c, Func Offset: 0x2c
}

