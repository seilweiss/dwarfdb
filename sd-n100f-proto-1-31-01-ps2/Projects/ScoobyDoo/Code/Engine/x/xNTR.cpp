typedef struct tagxStateLink;
typedef struct tagxState;


typedef tagxStateLink type_0[1];
typedef uint8 type_1[17];
typedef tagxState type_2[6];
typedef tagxStateLink type_3[1];
typedef tagxStateLink type_4[1];
typedef tagxStateLink type_5[1];
typedef tagxStateLink type_6[1];
typedef tagxStateLink type_7[12];

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

uint8 g_ntrJointsAll[17];
tagxStateLink link_ntr_Idle[12];
tagxStateLink link_ntr_AttackNear1[1];
tagxStateLink link_ntr_AttackNear2[1];
tagxStateLink link_ntr_AttackFar[1];
tagxStateLink link_ntr_InjuryMiddle[1];
tagxStateLink link_ntr_Death[1];
tagxState g_ntrStates[6];

void xNTRStateReset();
void xNTRStateInit();

// xNTRStateReset__Fv
// Start address: 0x3557b0
void xNTRStateReset()
{
	// Line 62, Address: 0x3557b0, Func Offset: 0
	// Line 64, Address: 0x3557b8, Func Offset: 0x8
	// Line 66, Address: 0x3557cc, Func Offset: 0x1c
	// Func End, Address: 0x3557dc, Func Offset: 0x2c
}

// xNTRStateInit__Fv
// Start address: 0x3557e0
void xNTRStateInit()
{
	// Line 51, Address: 0x3557e0, Func Offset: 0
	// Line 53, Address: 0x3557e8, Func Offset: 0x8
	// Line 54, Address: 0x3557fc, Func Offset: 0x1c
	// Func End, Address: 0x35580c, Func Offset: 0x2c
}

