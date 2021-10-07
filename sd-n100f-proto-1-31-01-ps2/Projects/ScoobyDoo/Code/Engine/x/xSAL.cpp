typedef struct tagxStateLink;
typedef struct tagxState;


typedef tagxStateLink type_0[1];
typedef uint8 type_1[17];
typedef tagxStateLink type_2[2];
typedef tagxState type_3[3];
typedef uint8 type_4[17];
typedef tagxStateLink type_5[1];

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

uint8 g_salJointsAll[17];
uint8 g_salJointsUpperOnly[17];
tagxStateLink link_sal_Idle[2];
tagxStateLink link_sal_LookBack[1];
tagxStateLink link_sal_LookFoot[1];
tagxState g_salStates[3];

void xSALStateReset();
void xSALStateInit();

// xSALStateReset__Fv
// Start address: 0x339be0
void xSALStateReset()
{
	// Line 77, Address: 0x339be0, Func Offset: 0
	// Line 78, Address: 0x339be8, Func Offset: 0x8
	// Line 79, Address: 0x339bfc, Func Offset: 0x1c
	// Func End, Address: 0x339c0c, Func Offset: 0x2c
}

// xSALStateInit__Fv
// Start address: 0x339c10
void xSALStateInit()
{
	// Line 71, Address: 0x339c10, Func Offset: 0
	// Line 72, Address: 0x339c18, Func Offset: 0x8
	// Line 73, Address: 0x339c2c, Func Offset: 0x1c
	// Func End, Address: 0x339c3c, Func Offset: 0x2c
}

