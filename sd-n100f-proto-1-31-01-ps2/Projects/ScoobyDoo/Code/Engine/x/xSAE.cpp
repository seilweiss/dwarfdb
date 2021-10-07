typedef struct tagxStateLink;
typedef struct tagxState;


typedef tagxStateLink type_0[2];
typedef uint8 type_1[16];
typedef tagxStateLink type_2[4];
typedef tagxStateLink type_3[1];
typedef tagxStateLink type_4[2];
typedef tagxStateLink type_5[4];
typedef tagxStateLink type_6[1];
typedef uint8 type_7[16];
typedef tagxStateLink type_8[4];
typedef tagxStateLink type_9[1];
typedef tagxStateLink type_10[2];
typedef tagxStateLink type_11[4];
typedef tagxStateLink type_12[1];
typedef tagxStateLink type_13[2];
typedef tagxState type_14[12];

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

uint8 g_saeJointsAll[16];
uint8 g_saeJointsUpperOnly[16];
tagxStateLink link_sae_Idle[4];
tagxStateLink link_sae_IdleBook[4];
tagxStateLink link_sae_IdleReady[4];
tagxStateLink link_sae_IdleReadyBook[4];
tagxStateLink link_sae_Walk[2];
tagxStateLink link_sae_Run[2];
tagxStateLink link_sae_WalkBook[2];
tagxStateLink link_sae_RunBook[2];
tagxStateLink link_sae_WipeBrow[1];
tagxStateLink link_sae_ScratchLeg[1];
tagxStateLink link_sae_WipeHands[1];
tagxStateLink link_sae_LookAround[1];
tagxState g_saeStates[12];

void xSAEStateReset();
void xSAEStateInit();

// xSAEStateReset__Fv
// Start address: 0x339c40
void xSAEStateReset()
{
	// Line 74, Address: 0x339c40, Func Offset: 0
	// Line 75, Address: 0x339c48, Func Offset: 0x8
	// Line 77, Address: 0x339c5c, Func Offset: 0x1c
	// Func End, Address: 0x339c6c, Func Offset: 0x2c
}

// xSAEStateInit__Fv
// Start address: 0x339c70
void xSAEStateInit()
{
	// Line 69, Address: 0x339c70, Func Offset: 0
	// Line 70, Address: 0x339c78, Func Offset: 0x8
	// Line 71, Address: 0x339c8c, Func Offset: 0x1c
	// Func End, Address: 0x339c9c, Func Offset: 0x2c
}

