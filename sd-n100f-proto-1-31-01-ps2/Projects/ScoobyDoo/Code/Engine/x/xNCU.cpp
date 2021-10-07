typedef struct tagxStateLink;
typedef struct tagxState;


typedef tagxState type_0[7];
typedef tagxStateLink type_1[1];
typedef uint8 type_2[59];
typedef tagxStateLink type_3[1];
typedef tagxStateLink type_4[6];
typedef tagxStateLink type_5[1];
typedef uint8 type_6[59];
typedef tagxStateLink type_7[1];
typedef tagxStateLink type_8[3];
typedef tagxStateLink type_9[1];

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

uint8 g_ncuJointsAll[59];
uint8 g_ncuJointsUpperOnly[59];
tagxStateLink link_ncu_Idle[6];
tagxStateLink link_ncu_Walk[3];
tagxStateLink link_ncu_AttackMeleeSwipe[1];
tagxStateLink link_ncu_AttackMeleeBite[1];
tagxStateLink link_ncu_AttackRangeShoot[1];
tagxStateLink link_ncu_Injury[1];
tagxStateLink link_ncu_InjuryStrong[1];
tagxState g_ncuStates[7];

void xNCUStateReset();
void xNCUStateInit();

// xNCUStateReset__Fv
// Start address: 0x356050
void xNCUStateReset()
{
	// Line 166, Address: 0x356050, Func Offset: 0
	// Line 168, Address: 0x356058, Func Offset: 0x8
	// Line 170, Address: 0x35606c, Func Offset: 0x1c
	// Func End, Address: 0x35607c, Func Offset: 0x2c
}

// xNCUStateInit__Fv
// Start address: 0x356080
void xNCUStateInit()
{
	// Line 154, Address: 0x356080, Func Offset: 0
	// Line 156, Address: 0x356088, Func Offset: 0x8
	// Line 158, Address: 0x35609c, Func Offset: 0x1c
	// Func End, Address: 0x3560ac, Func Offset: 0x2c
}

