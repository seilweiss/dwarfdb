typedef struct tagxStateLink;
typedef struct tagxState;


typedef tagxState type_0[3];
typedef uint8 type_1[4];
typedef tagxStateLink type_2[1];
typedef tagxStateLink type_3[1];
typedef tagxStateLink type_4[9];

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

uint8 g_ntaJointsAll[4];
tagxStateLink link_nta_Idle[9];
tagxStateLink link_nta_Attack[1];
tagxStateLink link_nta_Die[1];
tagxState g_ntaStates[3];

void xNTAStateReset();
void xNTAStateInit();

// xNTAStateReset__Fv
// Start address: 0x355810
void xNTAStateReset()
{
	// Line 48, Address: 0x355810, Func Offset: 0
	// Line 50, Address: 0x355818, Func Offset: 0x8
	// Line 52, Address: 0x35582c, Func Offset: 0x1c
	// Func End, Address: 0x35583c, Func Offset: 0x2c
}

// xNTAStateInit__Fv
// Start address: 0x355840
void xNTAStateInit()
{
	// Line 37, Address: 0x355840, Func Offset: 0
	// Line 39, Address: 0x355848, Func Offset: 0x8
	// Line 40, Address: 0x35585c, Func Offset: 0x1c
	// Func End, Address: 0x35586c, Func Offset: 0x2c
}

