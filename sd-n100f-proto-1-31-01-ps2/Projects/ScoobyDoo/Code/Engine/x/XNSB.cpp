typedef struct tagxStateLink;
typedef struct tagxState;


typedef tagxStateLink type_0[12];
typedef tagxStateLink type_1[1];
typedef tagxStateLink type_2[11];
typedef uint8 type_3[17];
typedef tagxStateLink type_4[1];
typedef tagxStateLink type_5[12];
typedef tagxState type_6[9];
typedef tagxStateLink type_7[2];
typedef tagxStateLink type_8[1];
typedef tagxStateLink type_9[11];
typedef tagxStateLink type_10[2];

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

uint8 g_nsbJointsAll[17];
tagxStateLink link_nsb_Idle[12];
tagxStateLink link_nsb_RRun[12];
tagxStateLink link_nsb_FlySlow[11];
tagxStateLink link_nsb_FlyFast[11];
tagxStateLink link_nsb_MeleeWeakFromIdle[2];
tagxStateLink link_nsb_MeleeWeakFromRRun[2];
tagxStateLink link_nsb_Injury[1];
tagxStateLink link_nsb_DieMelee[1];
tagxStateLink link_nsb_DieRange[1];
tagxState g_nsbStates[9];

void xNSBStateReset();
void xNSBStateInit();

// xNSBStateReset__Fv
// Start address: 0x355930
void xNSBStateReset()
{
	// Line 56, Address: 0x355930, Func Offset: 0
	// Line 58, Address: 0x355938, Func Offset: 0x8
	// Line 60, Address: 0x35594c, Func Offset: 0x1c
	// Func End, Address: 0x35595c, Func Offset: 0x2c
}

// xNSBStateInit__Fv
// Start address: 0x355960
void xNSBStateInit()
{
	// Line 51, Address: 0x355960, Func Offset: 0
	// Line 53, Address: 0x355968, Func Offset: 0x8
	// Line 54, Address: 0x35597c, Func Offset: 0x1c
	// Func End, Address: 0x35598c, Func Offset: 0x2c
}

