typedef struct tagxStateLink;
typedef struct tagxState;


typedef tagxState type_0[8];
typedef tagxStateLink type_1[2];
typedef uint8 type_2[17];
typedef tagxStateLink type_3[1];
typedef tagxStateLink type_4[4];
typedef tagxStateLink type_5[1];
typedef tagxStateLink type_6[1];
typedef tagxStateLink type_7[2];
typedef tagxStateLink type_8[1];
typedef tagxStateLink type_9[4];

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

uint8 g_nhaJointsAll[17];
tagxStateLink link_nha_Idle[4];
tagxStateLink link_nha_StandRRun[4];
tagxStateLink link_nha_Walk[2];
tagxStateLink link_nha_Run[2];
tagxStateLink link_nha_DodgeLeft[1];
tagxStateLink link_nha_DodgeRight[1];
tagxStateLink link_nha_DodgeLeftReady[1];
tagxStateLink link_nha_DodgeRightReady[1];
tagxState g_nhaStates[8];

void xNHAStateReset();
void xNHAStateInit();

// xNHAStateReset__Fv
// Start address: 0x355f30
void xNHAStateReset()
{
	// Line 63, Address: 0x355f30, Func Offset: 0
	// Line 65, Address: 0x355f38, Func Offset: 0x8
	// Line 67, Address: 0x355f4c, Func Offset: 0x1c
	// Func End, Address: 0x355f5c, Func Offset: 0x2c
}

// xNHAStateInit__Fv
// Start address: 0x355f60
void xNHAStateInit()
{
	// Line 51, Address: 0x355f60, Func Offset: 0
	// Line 53, Address: 0x355f68, Func Offset: 0x8
	// Line 55, Address: 0x355f7c, Func Offset: 0x1c
	// Func End, Address: 0x355f8c, Func Offset: 0x2c
}

