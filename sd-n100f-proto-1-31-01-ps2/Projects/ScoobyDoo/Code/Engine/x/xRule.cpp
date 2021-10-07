typedef struct xRule;
typedef struct iConditionRuntime;
typedef struct xCondition;
typedef struct XStreamHeader;
typedef struct iActionRuntime;
typedef struct xAction;
typedef struct iActionResource;
typedef struct tagXStreamDirectoryEntry;
typedef struct iConditionResource;
typedef struct iRuleResource;
typedef struct tagXStreamMDSDirectory;


typedef tagXStreamDirectoryEntry type_0[1000];
typedef int8 type_1[2048];
typedef int8 type_2[128];

struct xRule
{
	iRuleResource* m_resource;
	void* m_runtime;
};

struct iConditionRuntime
{
	xCondition* m_operand;
	uint16 m_match;
	uint16 m_trigger;
};

struct xCondition
{
	iConditionResource* m_resource;
	iConditionRuntime* m_runtime;
};

struct XStreamHeader
{
	uint32 id;
	uint32 versionID;
	uint8 month;
	uint8 day;
	uint8 hour;
	uint8 minute;
	uint32 mdsOffset;
	uint32 mdsLength;
	tagXStreamMDSDirectory directory;
	int8 safety[2048];
};

struct iActionRuntime
{
	xAction* m_and;
};

struct xAction
{
	iActionResource* m_resource;
	iActionRuntime* m_runtime;
};

struct iActionResource
{
	uint8 m_cmdType;
	uint8 m_cmd;
	uint16 pad;
	uint32 m_cmdParameter;
};

struct tagXStreamDirectoryEntry
{
	uint32 id;
	uint32 type;
	uint32 offset;
	uint32 length;
};

struct iConditionResource
{
	uint8 m_osFlags;
	uint8 m_onFlags;
	uint8 m_whoFlags;
	uint8 m_operator;
	uint8 m_cmdType;
	uint8 m_cmd;
	uint16 pad;
	uint32 m_cmdParameter;
};

struct iRuleResource
{
	uint32 m_actionCount;
	xAction* m_action;
	uint32 m_conditionCount;
	xCondition* m_condition;
};

struct tagXStreamMDSDirectory
{
	uint32 count;
	tagXStreamDirectoryEntry directory[1000];
};

int8 vAssertBuf2[128];
XStreamHeader currentHeader;

void xRuleExecute(xRule* rule);
void xRuleEvaluate(xRule* rule);
void xRuleGameEvent(xRule* rule, uint32 eventWho, uint32 eventType, uint32 eventCmd, uint32 eventData);

// xRuleExecute__FP5xRule
// Start address: 0x339ca0
void xRuleExecute(xRule* rule)
{
	uint32 i;
	// Line 48, Address: 0x339ca0, Func Offset: 0
	// Line 51, Address: 0x339cb4, Func Offset: 0x14
	// Line 52, Address: 0x339d54, Func Offset: 0xb4
	// Line 53, Address: 0x339df8, Func Offset: 0x158
	// Line 54, Address: 0x339ea0, Func Offset: 0x200
	// Line 57, Address: 0x339f4c, Func Offset: 0x2ac
	// Line 59, Address: 0x339f58, Func Offset: 0x2b8
	// Line 60, Address: 0x339f70, Func Offset: 0x2d0
	// Line 61, Address: 0x339f8c, Func Offset: 0x2ec
	// Func End, Address: 0x339fa4, Func Offset: 0x304
}

// xRuleEvaluate__FP5xRule
// Start address: 0x339fb0
void xRuleEvaluate(xRule* rule)
{
	// Line 30, Address: 0x339fb0, Func Offset: 0
	// Line 31, Address: 0x339fc0, Func Offset: 0x10
	// Line 32, Address: 0x33a060, Func Offset: 0xb0
	// Line 33, Address: 0x33a104, Func Offset: 0x154
	// Line 34, Address: 0x33a1ac, Func Offset: 0x1fc
	// Line 36, Address: 0x33a258, Func Offset: 0x2a8
	// Line 38, Address: 0x33a268, Func Offset: 0x2b8
	// Line 41, Address: 0x33a284, Func Offset: 0x2d4
	// Line 45, Address: 0x33a290, Func Offset: 0x2e0
	// Func End, Address: 0x33a2a4, Func Offset: 0x2f4
}

// xRuleGameEvent__FP5xRuleUiUiUiUi
// Start address: 0x33a2b0
void xRuleGameEvent(xRule* rule, uint32 eventWho, uint32 eventType, uint32 eventCmd, uint32 eventData)
{
	// Line 17, Address: 0x33a2b0, Func Offset: 0
	// Line 18, Address: 0x33a2e0, Func Offset: 0x30
	// Line 19, Address: 0x33a380, Func Offset: 0xd0
	// Line 20, Address: 0x33a424, Func Offset: 0x174
	// Line 21, Address: 0x33a4cc, Func Offset: 0x21c
	// Line 24, Address: 0x33a578, Func Offset: 0x2c8
	// Line 25, Address: 0x33a588, Func Offset: 0x2d8
	// Line 27, Address: 0x33a5a8, Func Offset: 0x2f8
	// Func End, Address: 0x33a5cc, Func Offset: 0x31c
}

