typedef struct tagxStateLink;
typedef struct tagxState;


typedef tagxStateLink type_0[1];
typedef uint8 type_1[16];
typedef tagxStateLink type_2[3];
typedef tagxStateLink type_3[1];
typedef uint8 type_4[16];
typedef tagxStateLink type_5[1];
typedef tagxState type_6[4];

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

uint8 g_nmrJointsAll[16];
uint8 g_nmrJointsUpperOnly[16];
tagxStateLink link_nmr_Work[3];
tagxStateLink link_nmr_TalkLong[1];
tagxStateLink link_nmr_TalkShort[1];
tagxStateLink link_nmr_GiveObject[1];
tagxState g_nmrStates[4];

void xNMRStateReset();
void xNMRStateInit();

// xNMRStateReset__Fv
// Start address: 0x355c30
void xNMRStateReset()
{
	// Line 81, Address: 0x355c30, Func Offset: 0
	// Line 82, Address: 0x355c38, Func Offset: 0x8
	// Line 83, Address: 0x355c4c, Func Offset: 0x1c
	// Func End, Address: 0x355c5c, Func Offset: 0x2c
}

// xNMRStateInit__Fv
// Start address: 0x355c60
void xNMRStateInit()
{
	// Line 70, Address: 0x355c60, Func Offset: 0
	// Line 72, Address: 0x355c68, Func Offset: 0x8
	// Line 73, Address: 0x355c7c, Func Offset: 0x1c
	// Func End, Address: 0x355c8c, Func Offset: 0x2c
}

