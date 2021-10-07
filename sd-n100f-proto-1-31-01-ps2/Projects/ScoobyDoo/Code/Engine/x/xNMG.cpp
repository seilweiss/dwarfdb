typedef struct tagxStateLink;
typedef struct tagxState;


typedef tagxStateLink type_0[1];
typedef tagxStateLink type_1[1];
typedef tagxStateLink type_2[1];
typedef uint8 type_3[16];
typedef tagxStateLink type_4[1];
typedef tagxStateLink type_5[1];
typedef tagxStateLink type_6[1];
typedef tagxStateLink type_7[1];
typedef tagxStateLink type_8[1];
typedef tagxStateLink type_9[14];
typedef tagxStateLink type_10[1];
typedef uint8 type_11[16];
typedef tagxStateLink type_12[1];
typedef tagxStateLink type_13[1];
typedef tagxStateLink type_14[1];
typedef tagxStateLink type_15[1];
typedef tagxStateLink type_16[1];
typedef tagxStateLink type_17[11];
typedef tagxStateLink type_18[1];
typedef tagxState type_19[17];

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

uint8 g_nmgJointsAll[16];
uint8 g_nmgJointsUpperOnly[16];
tagxStateLink link_nmg_Idle[14];
tagxStateLink link_nmg_Walk[11];
tagxStateLink link_nmg_AttackMeleeLeft[1];
tagxStateLink link_nmg_AttackMeleeRight[1];
tagxStateLink link_nmg_AttackStrong[1];
tagxStateLink link_nmg_InjuryMeleeIdle[1];
tagxStateLink link_nmg_InjuryRangeIdle[1];
tagxStateLink link_nmg_InjuryMeleeWalk[1];
tagxStateLink link_nmg_InjuryRangeWalk[1];
tagxStateLink link_nmg_DeathMelee1[1];
tagxStateLink link_nmg_DeathMelee2[1];
tagxStateLink link_nmg_DeathMelee3[1];
tagxStateLink link_nmg_DeathMelee4[1];
tagxStateLink link_nmg_DeathRange1[1];
tagxStateLink link_nmg_DeathRange2[1];
tagxStateLink link_nmg_DeathRange3[1];
tagxStateLink link_nmg_DeathRange4[1];
tagxState g_nmgStates[17];

void xNMGStateReset();
void xNMGStateInit();

// xNMGStateReset__Fv
// Start address: 0x355d50
void xNMGStateReset()
{
	// Line 81, Address: 0x355d50, Func Offset: 0
	// Line 82, Address: 0x355d58, Func Offset: 0x8
	// Line 84, Address: 0x355d6c, Func Offset: 0x1c
	// Func End, Address: 0x355d7c, Func Offset: 0x2c
}

// xNMGStateInit__Fv
// Start address: 0x355d80
void xNMGStateInit()
{
	// Line 69, Address: 0x355d80, Func Offset: 0
	// Line 71, Address: 0x355d88, Func Offset: 0x8
	// Line 72, Address: 0x355d9c, Func Offset: 0x1c
	// Func End, Address: 0x355dac, Func Offset: 0x2c
}

