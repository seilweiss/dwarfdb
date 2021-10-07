typedef struct tagxStateLink;
typedef struct tagxState;


typedef tagxStateLink type_0[1];
typedef tagxStateLink type_1[1];
typedef tagxStateLink type_2[1];
typedef tagxState type_3[22];
typedef tagxStateLink type_4[7];
typedef tagxStateLink type_5[1];
typedef uint8 type_6[57];
typedef tagxStateLink type_7[1];
typedef tagxStateLink type_8[1];
typedef tagxStateLink type_9[1];
typedef tagxStateLink type_10[12];
typedef tagxStateLink type_11[1];
typedef tagxStateLink type_12[1];
typedef tagxStateLink type_13[1];
typedef tagxStateLink type_14[1];
typedef uint8 type_15[57];
typedef tagxStateLink type_16[9];
typedef tagxStateLink type_17[1];
typedef tagxStateLink type_18[1];
typedef tagxStateLink type_19[1];
typedef tagxStateLink type_20[3];
typedef tagxStateLink type_21[1];
typedef tagxStateLink type_22[1];
typedef tagxStateLink type_23[1];
typedef tagxStateLink type_24[1];

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

uint8 g_nazJointsAll[57];
uint8 g_nazJointsUpperOnly[57];
tagxStateLink link_naz_Idle[9];
tagxStateLink link_naz_RemoveKnife[1];
tagxStateLink link_naz_IdleNeck[12];
tagxStateLink link_naz_Walk[3];
tagxStateLink link_naz_WalkNeck[7];
tagxStateLink link_naz_DodgeLeft[1];
tagxStateLink link_naz_DodgeRight[1];
tagxStateLink link_naz_DodgeLeftNeck[1];
tagxStateLink link_naz_DodgeRightNeck[1];
tagxStateLink link_naz_AttackMeleeSlash[1];
tagxStateLink link_naz_AttackMeleeStab[1];
tagxStateLink link_naz_AttackRangeJolt[1];
tagxStateLink link_naz_AttackRangeBiteNeck[1];
tagxStateLink link_naz_AttackRangeButtNeck[1];
tagxStateLink link_naz_InjuryMeleeFront[1];
tagxStateLink link_naz_InjuryRangeFront[1];
tagxStateLink link_naz_InjuryMeleeFrontNeck[1];
tagxStateLink link_naz_InjuryMeleeLeftNeck[1];
tagxStateLink link_naz_InjuryMeleeRightNeck[1];
tagxStateLink link_naz_InjuryMeleeUpNeck[1];
tagxStateLink link_naz_InjuryMeleeDownNeck[1];
tagxStateLink link_naz_InjuryRangeFrontNeck[1];
tagxState g_nazStates[22];

void xNAZStateReset();
void xNAZStateInit();

// xNAZStateReset__Fv
// Start address: 0x3561d0
void xNAZStateReset()
{
	// Line 159, Address: 0x3561d0, Func Offset: 0
	// Line 161, Address: 0x3561d8, Func Offset: 0x8
	// Line 163, Address: 0x3561ec, Func Offset: 0x1c
	// Func End, Address: 0x3561fc, Func Offset: 0x2c
}

// xNAZStateInit__Fv
// Start address: 0x356200
void xNAZStateInit()
{
	// Line 149, Address: 0x356200, Func Offset: 0
	// Line 150, Address: 0x356208, Func Offset: 0x8
	// Line 151, Address: 0x35621c, Func Offset: 0x1c
	// Func End, Address: 0x35622c, Func Offset: 0x2c
}

