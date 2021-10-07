typedef struct ExecutionThread;
typedef struct JExecutableMethod;
typedef struct JExecutableField;
typedef struct JExecutableClass;
typedef struct ExecutionFrame;
typedef struct ExternalFunc;
typedef struct _class_0;
typedef struct tagFile;
typedef struct _class_1;
typedef struct JExecutableDescriptor;

typedef int32(*type_0)(int32, int32, int32, int32, int32);
typedef void(*type_2)();
typedef void(*type_3)(int32, int32);
typedef void(*type_5)(int8*);
typedef void(*type_6)(int32, int32, int32);
typedef int32(*type_7)(int8*, int32);
typedef void(*type_8)(int32, int32, int32, int32);
typedef int32(*type_9)(int8*, int8*, int32);
typedef void(*type_10)(int32, int32, int32, int32, int32);
typedef void(*type_11)(uint32);
typedef void(*type_12)(int32, int8*);
typedef void(*type_14)(int32, int32, int32, int32, int32, int32, int32);
typedef void(*type_15)(int32, int32, int8*);
typedef void(*type_16)(int32, int8*, int8*);
typedef void(*type_17)(int32, int32, int32, int32, int32, int32, int32, int32);
typedef void(*type_18)(int32, int8*, int8*, int8*);
typedef void(*type_20)(int32, int8*, int32, int32);
typedef void(*type_22)(int32, int8*, int8*, int32, int32);
typedef int32(*type_23)(int32, int8*, int8*, int32, int32, int32);
typedef void(*type_24)(int32);
typedef int32(*type_26)();
typedef int32(*type_27)(int32);
typedef int32(*type_28)(int32, int32);
typedef int32(*type_30)(int32, int32, int32);
typedef int32(*type_31)(int32, int32, int32, int32);

typedef int32 type_1[20];
typedef ExecutionThread type_4[20];
typedef int32 type_13[11];
typedef int8 type_19[256];
typedef ulong32 type_21[20];
typedef int8 type_25[2048];
typedef ExecutionFrame type_29[20];
typedef int8 type_32[256];
typedef int8 type_33[256];
typedef uint8 type_34[37888];
typedef ExternalFunc type_35[286];
typedef int8 type_36[256];

struct ExecutionThread
{
	ExecutionFrame frameStack[20];
	uint32 wakeParameter;
	uint32 wakeParameter2;
	uint32 wakeParameter3;
	uint32 wakeCondition;
	int32 frameCount;
	uint32 amAlive;
	uint32 amActive;
	uint32 previousWakeParameter;
	uint32 pauseFlags;
};

struct JExecutableMethod
{
	uint16 methodNameIndex;
	uint16 descriptorIndex;
	uint16 accessFlags;
	int8 parameterWordCount;
	int8 isExternal;
	uint16 specialFunctionFlags;
	int16 executableClassIndex;
	int16 externalRecordIndex;
	uint16 maxStack;
	uint16 maxLocals;
	uint16 codeLength;
	int32 codeIndexInPool;
};

struct JExecutableField
{
	_class_1 value;
	int16 resolvedOffset;
	uint16 resolvedWords;
};

struct JExecutableClass
{
	int16 classNameIndex;
	int16 constantIndex;
	int16 resolvedParentDataWords;
	int16 resolvedDataWords;
	int16 executableMethodIndexInPool;
	int16 executableFieldIndexInPool;
	uint16 executableMethodsCount;
	uint16 executableFieldsCount;
	int16 superClassIndex;
	uint8 myIndex;
	uint8 amInitialized;
};

struct ExecutionFrame
{
	JExecutableMethod* theMethod;
	uint8* pc8;
	uint8* origPc8;
	uint32* lvPool;
	uint32* opTop;
	uint16 lvPoolIndex;
	uint16 opPoolIndex;
	uint8 returnEncountered;
	uint8 exceptionThrown;
	uint8 returnWords;
	uint8 lastException;
	void* previousFrame;
};

struct ExternalFunc
{
	int8* funcName;
	int32 funcType;
	_class_0 f;
};

struct _class_0
{
	union
	{
		void* untyped;
		void(*v_v_funcPtr)();
		void(*v_s_funcPtr)(int8*);
		int32(*i_si_funcPtr)(int8*, int32);
		int32(*i_ssi_funcPtr)(int8*, int8*, int32);
		void(*v_u_funcPtr)(uint32);
		void(*v_is_funcPtr)(int32, int8*);
		void(*v_iis_funcPtr)(int32, int32, int8*);
		void(*v_iss_funcPtr)(int32, int8*, int8*);
		void(*v_isss_funcPtr)(int32, int8*, int8*, int8*);
		void(*v_isii_funcPtr)(int32, int8*, int32, int32);
		void(*v_issii_funcPtr)(int32, int8*, int8*, int32, int32);
		int32(*i_issiii_funcPtr)(int32, int8*, int8*, int32, int32, int32);
		void(*v_i_funcPtr)(int32);
		int32(*i_v_funcPtr)();
		int32(*i_i_funcPtr)(int32);
		int32(*i_ii_funcPtr)(int32, int32);
		int32(*i_iii_funcPtr)(int32, int32, int32);
		int32(*i_iiii_funcPtr)(int32, int32, int32, int32);
		int32(*i_iiiii_funcPtr)(int32, int32, int32, int32, int32);
		void(*v_ii_funcPtr)(int32, int32);
		void(*v_iii_funcPtr)(int32, int32, int32);
		void(*v_iiii_funcPtr)(int32, int32, int32, int32);
		void(*v_iiiii_funcPtr)(int32, int32, int32, int32, int32);
		void(*v_iiiiiii_funcPtr)(int32, int32, int32, int32, int32, int32, int32);
		void(*v_iiiiiiii_funcPtr)(int32, int32, int32, int32, int32, int32, int32, int32);
	};
};

struct tagFile
{
	int8 m_name[256];
	int32 m_state;
	int32 m_desc;
	uint32 m_fpos;
};

struct _class_1
{
	uint32 word1;
};

struct JExecutableDescriptor
{
	uint32 fieldPoolUsed;
	uint32 methodPoolUsed;
	uint32 classCount;
	uint32 codePoolUsed;
	uint32 stringPoolUsed;
	uint32 constantValuePoolUsed;
	uint32 constantMapPoolUsed;
	JExecutableField* fieldPool;
	JExecutableMethod* methodPool;
	JExecutableClass* classList;
	uint8* codePoolU8;
	uint8* stringPool;
	uint32* constantValuePool;
	int16* constantMapPool;
};

int32 debugOpFlag;
int32 debugCallFlag;
int32 debugThread;
ExecutionThread threadList[20];
int32 threadCount;
ExternalFunc externalFuncList[286];
int32 externalFuncCount;
ExecutionThread* currentThread;
uint32 currentThreadFrameNumber;
int32 doLevelMemoryAllocate;
int32 jumpBuffer[11];
ulong32 threadTotalTime[20];
int32 sDebugMaxFrameCountInit;
int32 sDebugMaxFrameCount[20];
JExecutableDescriptor gExecutableDescriptor;
uint32 MemoryPoolLevelAllocated;
uint32 MemoryPoolAllocated;
ulong32 gTimerValue;
uint8 MemoryPoolDataPool[37888];

int8* InterpreterDumpThreadsToScreen();
int8* InterpreterDumpThreads();
int32 InterpreterExecuteFrame(ExecutionFrame* inputFrame);
void InterpreterRegisterExternalFunction(int32 funcType, int8* name, void* func);
int32 InterpreterDoExternalCallIII_I(int32 threadFlag, int32 execFlag, uint32 pauseFlags, uint32 methodPtr, int32 parm1, int32 parm2, int32 parm3, int32* retVal);
int32 InterpreterDoExternalCallI_I(int32 threadFlag, int32 execFlag, uint32 pauseFlags, uint32 methodPtr, int32 parm1, int32* retVal);
int32 InterpreterDoExternalCallIIIIIIIIIII_I(int32 threadFlag, int32 execFlag, uint32 pauseFlags, uint32 methodPtr, int32 parm1, int32 parm2, int32 parm3, int32 parm4, int32 parm5, int32 parm6, int32 parm7, int32 parm8, int32 parm9, int32 parm10, int32 parm11, int32* retVal);
int32 InterpreterDoExternalCallPIII(int32 threadFlag, int32 execFlag, uint32 pauseFlags, uint32 methodPtr, int32 parm1, int32 parm2, int32 parm3, int32 parm4);
int32 InterpreterDoExternalCallIIII(int32 threadFlag, int32 execFlag, uint32 pauseFlags, uint32 methodPtr, int32 parm1, int32 parm2, int32 parm3, int32 parm4);
int32 InterpreterDoExternalCallII(int32 threadFlag, int32 execFlag, uint32 pauseFlags, uint32 methodPtr, int32 parm1, int32 parm2);
int32 InterpreterDoExternalCallI(int32 threadFlag, int32 execFlag, uint32 pauseFlags, uint32 methodPtr, int32 parm1);
int32 InterpreterDoExternalCall(int32 threadFlag, int32 execFlag, uint32 pauseFlags, uint32 methodPtr);
uint32 InterpreterFindCall(int8* className, int8* methodName, int8* descriptor);
uint32 InterpreterProcessEvent(int32 objectType, int32 objectId, int32 eventType);
void InterpreterExecuteThreads(uint32 pauseMask);
void InterpreterDestroyAllThreads();
void InterpreterDestroyThreadSearch(int32 objectType, int32 objectId, int32 eventType);
uint32 InterpreterAllocateThread();
void InterpreterInit(int32 maxPools);

// InterpreterDumpThreadsToScreen__Fii
// Start address: 0x39d280
int8* InterpreterDumpThreadsToScreen()
{
	int8* className;
	int8* lastClass;
	int8 dispStr[2048];
	int32 j;
	int32 i;
	// Line 10376, Address: 0x39d280, Func Offset: 0
	// Line 10381, Address: 0x39d298, Func Offset: 0x18
	// Line 10383, Address: 0x39d2a4, Func Offset: 0x24
	// Line 10385, Address: 0x39d2b0, Func Offset: 0x30
	// Line 10386, Address: 0x39d2c4, Func Offset: 0x44
	// Line 10387, Address: 0x39d2d4, Func Offset: 0x54
	// Line 10390, Address: 0x39d2dc, Func Offset: 0x5c
	// Line 10392, Address: 0x39d2f4, Func Offset: 0x74
	// Line 10395, Address: 0x39d30c, Func Offset: 0x8c
	// Line 10397, Address: 0x39d318, Func Offset: 0x98
	// Line 10399, Address: 0x39d338, Func Offset: 0xb8
	// Line 10401, Address: 0x39d33c, Func Offset: 0xbc
	// Line 10403, Address: 0x39d374, Func Offset: 0xf4
	// Line 10406, Address: 0x39d3a0, Func Offset: 0x120
	// Line 10407, Address: 0x39d3b8, Func Offset: 0x138
	// Line 10411, Address: 0x39d3c4, Func Offset: 0x144
	// Line 10413, Address: 0x39d3ec, Func Offset: 0x16c
	// Line 10414, Address: 0x39d438, Func Offset: 0x1b8
	// Line 10416, Address: 0x39d450, Func Offset: 0x1d0
	// Line 10417, Address: 0x39d464, Func Offset: 0x1e4
	// Line 10419, Address: 0x39d468, Func Offset: 0x1e8
	// Line 10422, Address: 0x39d484, Func Offset: 0x204
	// Line 10424, Address: 0x39d48c, Func Offset: 0x20c
	// Line 10425, Address: 0x39d4e0, Func Offset: 0x260
	// Line 10428, Address: 0x39d4e8, Func Offset: 0x268
	// Line 10429, Address: 0x39d53c, Func Offset: 0x2bc
	// Line 10432, Address: 0x39d540, Func Offset: 0x2c0
	// Line 10433, Address: 0x39d564, Func Offset: 0x2e4
	// Line 10436, Address: 0x39d578, Func Offset: 0x2f8
	// Line 10437, Address: 0x39d5a4, Func Offset: 0x324
	// Line 10438, Address: 0x39d5b8, Func Offset: 0x338
	// Line 10439, Address: 0x39d5c4, Func Offset: 0x344
	// Line 10442, Address: 0x39d5cc, Func Offset: 0x34c
	// Line 10443, Address: 0x39d5e4, Func Offset: 0x364
	// Line 10444, Address: 0x39d5e8, Func Offset: 0x368
	// Line 10448, Address: 0x39d600, Func Offset: 0x380
	// Line 10449, Address: 0x39d604, Func Offset: 0x384
	// Func End, Address: 0x39d624, Func Offset: 0x3a4
}

// InterpreterDumpThreads__Fv
// Start address: 0x39d630
int8* InterpreterDumpThreads()
{
	int8* className;
	int8* lastClass;
	int32 j;
	int32 i;
	// Line 10233, Address: 0x39d630, Func Offset: 0
	// Line 10237, Address: 0x39d648, Func Offset: 0x18
	// Line 10238, Address: 0x39d658, Func Offset: 0x28
	// Line 10239, Address: 0x39d664, Func Offset: 0x34
	// Line 10240, Address: 0x39d684, Func Offset: 0x54
	// Line 10242, Address: 0x39d688, Func Offset: 0x58
	// Line 10243, Address: 0x39d6c4, Func Offset: 0x94
	// Line 10245, Address: 0x39d6d0, Func Offset: 0xa0
	// Line 10246, Address: 0x39d71c, Func Offset: 0xec
	// Line 10247, Address: 0x39d734, Func Offset: 0x104
	// Line 10253, Address: 0x39d748, Func Offset: 0x118
	// Line 10254, Address: 0x39d750, Func Offset: 0x120
	// Line 10255, Address: 0x39d790, Func Offset: 0x160
	// Line 10257, Address: 0x39d798, Func Offset: 0x168
	// Line 10258, Address: 0x39d7dc, Func Offset: 0x1ac
	// Line 10260, Address: 0x39d7e0, Func Offset: 0x1b0
	// Line 10262, Address: 0x39d814, Func Offset: 0x1e4
	// Line 10263, Address: 0x39d838, Func Offset: 0x208
	// Line 10265, Address: 0x39d848, Func Offset: 0x218
	// Line 10267, Address: 0x39d874, Func Offset: 0x244
	// Line 10268, Address: 0x39d884, Func Offset: 0x254
	// Line 10269, Address: 0x39d888, Func Offset: 0x258
	// Line 10270, Address: 0x39d8a0, Func Offset: 0x270
	// Line 10274, Address: 0x39d8b0, Func Offset: 0x280
	// Line 10275, Address: 0x39d8b4, Func Offset: 0x284
	// Func End, Address: 0x39d8d4, Func Offset: 0x2a4
}

// InterpreterExecuteFrame__FP14ExecutionFrame
// Start address: 0x39d8e0
int32 InterpreterExecuteFrame(ExecutionFrame* inputFrame)
{
	int32 i;
	ExecutionFrame* prevFrame;
	int32 v1;
	int32 _off;
	uint32 bc2;
	uint32 bc1;
	int32 constant;
	int32 index;
	uint32 c2;
	uint32 c1;
	uint32 i2;
	uint32 i1;
	uint32 theConstValue;
	int16 theConstMapValue;
	int32 ind;
	uint32 bc2;
	uint32 bc1;
	int32 instanceClassIndex;
	void* ptr;
	JExecutableClass* file;
	uint32* ref;
	uint8* theArray;
	uint32 units;
	uint32 type;
	uint8* theArray;
	int32 units;
	uint32 theConstValue;
	int16 theConstMapValue;
	int32 ind;
	int32 bc2;
	int32 bc1;
	uint32 value;
	JExecutableField* newField;
	int32 key;
	int32 i;
	int32 theOffset;
	int32 searchKey;
	int32 npairs;
	int32 defaultOffset;
	uint8* base;
	int32 io;
	int32 _off;
	int32 index;
	int32 highIndex;
	int32 lowIndex;
	int32 defaultOffset;
	uint8* base;
	uint32 ind;
	int32 _off;
	uint32 bc2;
	uint32 bc1;
	int32 _off;
	uint32 bc2;
	uint32 bc1;
	uint32 v2;
	uint32 v1;
	int32 _off;
	uint32 bc2;
	uint32 bc1;
	uint32 v2;
	uint32 v1;
	int32 _off;
	uint32 bc2;
	uint32 bc1;
	int32 v2;
	int32 v1;
	int32 _off;
	uint32 bc2;
	uint32 bc1;
	int32 v2;
	int32 v1;
	int32 _off;
	uint32 bc2;
	uint32 bc1;
	int32 v2;
	int32 v1;
	int32 _off;
	uint32 bc2;
	uint32 bc1;
	int32 v2;
	int32 v1;
	int32 _off;
	uint32 bc2;
	uint32 bc1;
	int32 v2;
	int32 v1;
	int32 _off;
	uint32 bc2;
	uint32 bc1;
	int32 v2;
	int32 v1;
	int32 v1;
	int32 _off;
	uint32 bc2;
	uint32 bc1;
	int32 v1;
	int32 _off;
	uint32 bc2;
	uint32 bc1;
	int32 v1;
	int32 _off;
	uint32 bc2;
	uint32 bc1;
	int32 v1;
	int32 _off;
	uint32 bc2;
	uint32 bc1;
	int32 v1;
	int32 _off;
	uint32 bc2;
	uint32 bc1;
	int32 v1;
	int32 _off;
	uint32 bc2;
	uint32 bc1;
	int16 tmp;
	int32 tmp;
	uint32 index;
	uint32 v1;
	uint32 v2;
	uint32 v1;
	uint32 v2;
	uint32 v1;
	uint32 v2;
	uint32 v1;
	uint32 v2;
	int32 v1;
	uint32 v2;
	int32 v1;
	uint32 v2;
	int32 v1;
	int32 v1;
	int32 v2;
	int32 v1;
	int32 v2;
	int32 b;
	int32 a;
	int32 v1;
	int32 v2;
	int32 b;
	int32 a;
	uint32 w2;
	uint32 w1;
	uint32 w4;
	uint32 w3;
	uint32 w2;
	uint32 w1;
	uint32 w3;
	uint32 w2;
	uint32 w1;
	uint32 w2;
	uint32 w1;
	uint32 w3;
	uint32 w2;
	uint32 w1;
	uint32 w2;
	uint32 w1;
	uint32* debugRef;
	uint8* ref;
	int32 index;
	uint8 value;
	uint32* debugRef;
	uint8* ref;
	int32 index;
	uint8 value;
	uint32* ref;
	uint32 index;
	uint32 value;
	int32* ref;
	uint32 index;
	int32 value;
	uint32* debugRef;
	uint8* ref;
	int32 index;
	uint32* debugRef;
	uint8* ref;
	int32 index;
	int32* ref;
	int32 index;
	uint32 theConstValue;
	int16 theConstMapValue;
	int32 ind;
	uint32 bc2;
	uint32 bc1;
	uint32 val;
	uint32 theConstValue;
	int16 theConstMapValue;
	uint32 ind;
	uint32 val;
	int16 value;
	uint16 bc2;
	uint16 bc1;
	uint32 theConstValue;
	int16 theConstMapValue;
	int32 ind;
	uint32 bc2;
	uint32 bc1;
	uint8* theInstance;
	JExecutableClass* file;
	uint32* ref;
	uint32 index;
	int32 _off;
	uint32 bc2;
	uint32 bc1;
	int32 i;
	ExecutionFrame* newFrame;
	JExecutableMethod* newMethod;
	int32 v1;
	int32 _off;
	uint32 bc2;
	uint32 bc1;
	int32 _off;
	uint32 bc2;
	uint32 bc1;
	int32 ind;
	int32 bc2;
	int32 bc1;
	JExecutableField* newField;
	uint32 theConstValue;
	int32 ind;
	int32 bc2;
	int32 bc1;
	JExecutableField* newField;
	int32 ind;
	int32 bc2;
	int32 bc1;
	void* ptr;
	JExecutableField* newField;
	uint32 fieldIndex;
	int32 ind;
	int32 bc2;
	int32 bc1;
	void* ptr;
	JExecutableField* newField;
	uint32* lvp;
	ExecutionFrame* newFrame;
	int32 i;
	int32 j;
	int32 i;
	int32 threadToAwake;
	int32 threadToSuspend;
	uint32 flags;
	ExternalFunc* theExternalFunc;
	int8* val;
	int32 len;
	int32 _off;
	int32 parm8;
	int32 parm7;
	int32 parm6;
	int32 parm5;
	int32 parm4;
	int32 parm3;
	int32 parm2;
	int32 parm1;
	int32 _off2;
	int32 bc2;
	int32 bc1;
	JExecutableMethod* newMethod;
	uint32 theConstValue;
	int16 theConstMapValue;
	int32 ind;
	int32 bc2;
	int32 bc1;
	void* ptr;
	uint32 value;
	JExecutableField* newField;
	JExecutableMethod* tm;
	JExecutableClass* instanceClass;
	int32 _off;
	int32 bc2;
	int32 bc1;
	int32 i;
	ExecutionFrame* newFrame;
	JExecutableMethod* newMethod;
	JExecutableMethod* tm;
	JExecutableClass* instanceClass;
	uint32 methodIndex;
	int32 _off;
	int32 bc2;
	int32 bc1;
	int32 i;
	ExecutionFrame* newFrame;
	JExecutableMethod* newMethod;
	JExecutableMethod* execMethodPool;
	JExecutableField* execFieldPool;
	int16* myExecConstantMapPool;
	uint32* execConstantValuePool;
	JExecutableClass* execClassList;
	uint32 currentThreadFrameNumberSave;
	ExecutionThread* currentThreadSave;
	uint32* fastLv;
	uint32* fastOpTop;
	uint8* fastPc;
	uint32 op;
	int8 buf2[256];
	int8 buf1[256];
	int8 buf3[256];
	// Line 4670, Address: 0x39d8e0, Func Offset: 0
	// Line 4703, Address: 0x39d910, Func Offset: 0x30
	// Line 4704, Address: 0x39d918, Func Offset: 0x38
	// Line 4706, Address: 0x39d924, Func Offset: 0x44
	// Line 4707, Address: 0x39d930, Func Offset: 0x50
	// Line 4773, Address: 0x39d93c, Func Offset: 0x5c
	// Line 4778, Address: 0x39d948, Func Offset: 0x68
	// Line 4790, Address: 0x39d978, Func Offset: 0x98
	// Line 4848, Address: 0x39d980, Func Offset: 0xa0
	// Line 4855, Address: 0x39d9a8, Func Offset: 0xc8
	// Line 4860, Address: 0x39d9b4, Func Offset: 0xd4
	// Line 4876, Address: 0x39d9bc, Func Offset: 0xdc
	// Line 4877, Address: 0x39d9c4, Func Offset: 0xe4
	// Line 4878, Address: 0x39d9c8, Func Offset: 0xe8
	// Line 4888, Address: 0x39d9d0, Func Offset: 0xf0
	// Line 4889, Address: 0x39d9d8, Func Offset: 0xf8
	// Line 4890, Address: 0x39d9e0, Func Offset: 0x100
	// Line 4906, Address: 0x39d9e8, Func Offset: 0x108
	// Line 4907, Address: 0x39da0c, Func Offset: 0x12c
	// Line 4908, Address: 0x39da14, Func Offset: 0x134
	// Line 4909, Address: 0x39da2c, Func Offset: 0x14c
	// Line 4913, Address: 0x39da34, Func Offset: 0x154
	// Line 4914, Address: 0x39da54, Func Offset: 0x174
	// Line 4918, Address: 0x39da68, Func Offset: 0x188
	// Line 4919, Address: 0x39da70, Func Offset: 0x190
	// Line 4920, Address: 0x39da7c, Func Offset: 0x19c
	// Line 4925, Address: 0x39da80, Func Offset: 0x1a0
	// Line 4926, Address: 0x39daa0, Func Offset: 0x1c0
	// Line 4927, Address: 0x39daa8, Func Offset: 0x1c8
	// Line 4928, Address: 0x39dac0, Func Offset: 0x1e0
	// Line 4934, Address: 0x39dac8, Func Offset: 0x1e8
	// Line 4937, Address: 0x39dad8, Func Offset: 0x1f8
	// Line 4939, Address: 0x39db04, Func Offset: 0x224
	// Line 4943, Address: 0x39db14, Func Offset: 0x234
	// Line 4945, Address: 0x39db24, Func Offset: 0x244
	// Line 4946, Address: 0x39db34, Func Offset: 0x254
	// Line 4978, Address: 0x39db38, Func Offset: 0x258
	// Line 4982, Address: 0x39db48, Func Offset: 0x268
	// Line 4985, Address: 0x39db74, Func Offset: 0x294
	// Line 4986, Address: 0x39db78, Func Offset: 0x298
	// Line 4987, Address: 0x39db88, Func Offset: 0x2a8
	// Line 4989, Address: 0x39db90, Func Offset: 0x2b0
	// Line 4990, Address: 0x39dba0, Func Offset: 0x2c0
	// Line 4991, Address: 0x39dbb0, Func Offset: 0x2d0
	// Line 4993, Address: 0x39dbb8, Func Offset: 0x2d8
	// Line 4994, Address: 0x39dbc8, Func Offset: 0x2e8
	// Line 4995, Address: 0x39dbd8, Func Offset: 0x2f8
	// Line 4996, Address: 0x39dbe8, Func Offset: 0x308
	// Line 4998, Address: 0x39dbf0, Func Offset: 0x310
	// Line 4999, Address: 0x39dc00, Func Offset: 0x320
	// Line 5000, Address: 0x39dc10, Func Offset: 0x330
	// Line 5001, Address: 0x39dc20, Func Offset: 0x340
	// Line 5002, Address: 0x39dc30, Func Offset: 0x350
	// Line 5004, Address: 0x39dc38, Func Offset: 0x358
	// Line 5005, Address: 0x39dc48, Func Offset: 0x368
	// Line 5006, Address: 0x39dc58, Func Offset: 0x378
	// Line 5007, Address: 0x39dc68, Func Offset: 0x388
	// Line 5008, Address: 0x39dc78, Func Offset: 0x398
	// Line 5009, Address: 0x39dc88, Func Offset: 0x3a8
	// Line 5011, Address: 0x39dc90, Func Offset: 0x3b0
	// Line 5012, Address: 0x39dc9c, Func Offset: 0x3bc
	// Line 5013, Address: 0x39dcb4, Func Offset: 0x3d4
	// Line 5016, Address: 0x39dcc8, Func Offset: 0x3e8
	// Line 5032, Address: 0x39dcd8, Func Offset: 0x3f8
	// Line 5033, Address: 0x39dce0, Func Offset: 0x400
	// Line 5034, Address: 0x39dce4, Func Offset: 0x404
	// Line 5035, Address: 0x39dce8, Func Offset: 0x408
	// Line 5036, Address: 0x39dd24, Func Offset: 0x444
	// Line 5048, Address: 0x39dd2c, Func Offset: 0x44c
	// Line 5049, Address: 0x39dd34, Func Offset: 0x454
	// Line 5050, Address: 0x39dd3c, Func Offset: 0x45c
	// Line 5063, Address: 0x39dd44, Func Offset: 0x464
	// Line 5067, Address: 0x39dd58, Func Offset: 0x478
	// Line 5068, Address: 0x39dd78, Func Offset: 0x498
	// Line 5069, Address: 0x39dd80, Func Offset: 0x4a0
	// Line 5070, Address: 0x39dd98, Func Offset: 0x4b8
	// Line 5076, Address: 0x39dda0, Func Offset: 0x4c0
	// Line 5079, Address: 0x39ddb0, Func Offset: 0x4d0
	// Line 5081, Address: 0x39dddc, Func Offset: 0x4fc
	// Line 5085, Address: 0x39ddec, Func Offset: 0x50c
	// Line 5087, Address: 0x39ddfc, Func Offset: 0x51c
	// Line 5088, Address: 0x39de0c, Func Offset: 0x52c
	// Line 5120, Address: 0x39de10, Func Offset: 0x530
	// Line 5124, Address: 0x39de20, Func Offset: 0x540
	// Line 5127, Address: 0x39de4c, Func Offset: 0x56c
	// Line 5128, Address: 0x39de50, Func Offset: 0x570
	// Line 5129, Address: 0x39de60, Func Offset: 0x580
	// Line 5131, Address: 0x39de68, Func Offset: 0x588
	// Line 5132, Address: 0x39de78, Func Offset: 0x598
	// Line 5133, Address: 0x39de88, Func Offset: 0x5a8
	// Line 5135, Address: 0x39de90, Func Offset: 0x5b0
	// Line 5136, Address: 0x39dea0, Func Offset: 0x5c0
	// Line 5137, Address: 0x39deb0, Func Offset: 0x5d0
	// Line 5138, Address: 0x39dec0, Func Offset: 0x5e0
	// Line 5140, Address: 0x39dec8, Func Offset: 0x5e8
	// Line 5141, Address: 0x39ded8, Func Offset: 0x5f8
	// Line 5142, Address: 0x39dee8, Func Offset: 0x608
	// Line 5143, Address: 0x39def8, Func Offset: 0x618
	// Line 5144, Address: 0x39df08, Func Offset: 0x628
	// Line 5146, Address: 0x39df10, Func Offset: 0x630
	// Line 5147, Address: 0x39df20, Func Offset: 0x640
	// Line 5148, Address: 0x39df30, Func Offset: 0x650
	// Line 5149, Address: 0x39df40, Func Offset: 0x660
	// Line 5150, Address: 0x39df50, Func Offset: 0x670
	// Line 5151, Address: 0x39df60, Func Offset: 0x680
	// Line 5153, Address: 0x39df68, Func Offset: 0x688
	// Line 5154, Address: 0x39df74, Func Offset: 0x694
	// Line 5155, Address: 0x39df8c, Func Offset: 0x6ac
	// Line 5158, Address: 0x39dfa0, Func Offset: 0x6c0
	// Line 5174, Address: 0x39dfb0, Func Offset: 0x6d0
	// Line 5175, Address: 0x39dfb8, Func Offset: 0x6d8
	// Line 5176, Address: 0x39dfbc, Func Offset: 0x6dc
	// Line 5177, Address: 0x39dfc0, Func Offset: 0x6e0
	// Line 5178, Address: 0x39dffc, Func Offset: 0x71c
	// Line 5188, Address: 0x39e004, Func Offset: 0x724
	// Line 5193, Address: 0x39e010, Func Offset: 0x730
	// Line 5208, Address: 0x39e018, Func Offset: 0x738
	// Line 5209, Address: 0x39e020, Func Offset: 0x740
	// Line 5210, Address: 0x39e028, Func Offset: 0x748
	// Line 5212, Address: 0x39e030, Func Offset: 0x750
	// Line 5213, Address: 0x39e040, Func Offset: 0x760
	// Line 5217, Address: 0x39e050, Func Offset: 0x770
	// Line 5221, Address: 0x39e05c, Func Offset: 0x77c
	// Line 5227, Address: 0x39e064, Func Offset: 0x784
	// Line 5230, Address: 0x39e06c, Func Offset: 0x78c
	// Line 5231, Address: 0x39e074, Func Offset: 0x794
	// Line 5244, Address: 0x39e088, Func Offset: 0x7a8
	// Line 5251, Address: 0x39e094, Func Offset: 0x7b4
	// Line 5259, Address: 0x39e09c, Func Offset: 0x7bc
	// Line 5260, Address: 0x39e0a4, Func Offset: 0x7c4
	// Line 5261, Address: 0x39e0ac, Func Offset: 0x7cc
	// Line 5270, Address: 0x39e0b4, Func Offset: 0x7d4
	// Line 5271, Address: 0x39e0cc, Func Offset: 0x7ec
	// Line 5272, Address: 0x39e0d4, Func Offset: 0x7f4
	// Line 5273, Address: 0x39e0ec, Func Offset: 0x80c
	// Line 5277, Address: 0x39e0f4, Func Offset: 0x814
	// Line 5294, Address: 0x39e128, Func Offset: 0x848
	// Line 5317, Address: 0x39e134, Func Offset: 0x854
	// Line 5321, Address: 0x39e144, Func Offset: 0x864
	// Line 5325, Address: 0x39e164, Func Offset: 0x884
	// Line 5326, Address: 0x39e194, Func Offset: 0x8b4
	// Line 5327, Address: 0x39e198, Func Offset: 0x8b8
	// Line 5328, Address: 0x39e1a8, Func Offset: 0x8c8
	// Line 5334, Address: 0x39e1b0, Func Offset: 0x8d0
	// Line 5336, Address: 0x39e1b8, Func Offset: 0x8d8
	// Line 5337, Address: 0x39e1bc, Func Offset: 0x8dc
	// Line 5338, Address: 0x39e1c0, Func Offset: 0x8e0
	// Line 5340, Address: 0x39e1c4, Func Offset: 0x8e4
	// Line 5341, Address: 0x39e1dc, Func Offset: 0x8fc
	// Line 5342, Address: 0x39e1ec, Func Offset: 0x90c
	// Line 5343, Address: 0x39e204, Func Offset: 0x924
	// Line 5348, Address: 0x39e20c, Func Offset: 0x92c
	// Line 5349, Address: 0x39e214, Func Offset: 0x934
	// Line 5351, Address: 0x39e21c, Func Offset: 0x93c
	// Line 5352, Address: 0x39e220, Func Offset: 0x940
	// Line 5353, Address: 0x39e224, Func Offset: 0x944
	// Line 5354, Address: 0x39e228, Func Offset: 0x948
	// Line 5355, Address: 0x39e240, Func Offset: 0x960
	// Line 5356, Address: 0x39e250, Func Offset: 0x970
	// Line 5357, Address: 0x39e274, Func Offset: 0x994
	// Line 5362, Address: 0x39e27c, Func Offset: 0x99c
	// Line 5363, Address: 0x39e284, Func Offset: 0x9a4
	// Line 5364, Address: 0x39e28c, Func Offset: 0x9ac
	// Line 5366, Address: 0x39e294, Func Offset: 0x9b4
	// Line 5367, Address: 0x39e298, Func Offset: 0x9b8
	// Line 5368, Address: 0x39e29c, Func Offset: 0x9bc
	// Line 5369, Address: 0x39e2a0, Func Offset: 0x9c0
	// Line 5370, Address: 0x39e2b8, Func Offset: 0x9d8
	// Line 5372, Address: 0x39e2c8, Func Offset: 0x9e8
	// Line 5373, Address: 0x39e2cc, Func Offset: 0x9ec
	// Line 5374, Address: 0x39e2d0, Func Offset: 0x9f0
	// Line 5375, Address: 0x39e2d4, Func Offset: 0x9f4
	// Line 5376, Address: 0x39e2ec, Func Offset: 0xa0c
	// Line 5378, Address: 0x39e2fc, Func Offset: 0xa1c
	// Line 5379, Address: 0x39e328, Func Offset: 0xa48
	// Line 5384, Address: 0x39e330, Func Offset: 0xa50
	// Line 5385, Address: 0x39e338, Func Offset: 0xa58
	// Line 5387, Address: 0x39e340, Func Offset: 0xa60
	// Line 5388, Address: 0x39e344, Func Offset: 0xa64
	// Line 5389, Address: 0x39e348, Func Offset: 0xa68
	// Line 5390, Address: 0x39e34c, Func Offset: 0xa6c
	// Line 5391, Address: 0x39e364, Func Offset: 0xa84
	// Line 5392, Address: 0x39e374, Func Offset: 0xa94
	// Line 5393, Address: 0x39e390, Func Offset: 0xab0
	// Line 5398, Address: 0x39e398, Func Offset: 0xab8
	// Line 5399, Address: 0x39e3a0, Func Offset: 0xac0
	// Line 5400, Address: 0x39e3a8, Func Offset: 0xac8
	// Line 5402, Address: 0x39e3b0, Func Offset: 0xad0
	// Line 5403, Address: 0x39e3b4, Func Offset: 0xad4
	// Line 5404, Address: 0x39e3b8, Func Offset: 0xad8
	// Line 5405, Address: 0x39e3bc, Func Offset: 0xadc
	// Line 5406, Address: 0x39e3d4, Func Offset: 0xaf4
	// Line 5407, Address: 0x39e3e4, Func Offset: 0xb04
	// Line 5408, Address: 0x39e404, Func Offset: 0xb24
	// Line 5413, Address: 0x39e40c, Func Offset: 0xb2c
	// Line 5414, Address: 0x39e414, Func Offset: 0xb34
	// Line 5415, Address: 0x39e41c, Func Offset: 0xb3c
	// Line 5417, Address: 0x39e424, Func Offset: 0xb44
	// Line 5418, Address: 0x39e428, Func Offset: 0xb48
	// Line 5419, Address: 0x39e42c, Func Offset: 0xb4c
	// Line 5420, Address: 0x39e430, Func Offset: 0xb50
	// Line 5421, Address: 0x39e448, Func Offset: 0xb68
	// Line 5423, Address: 0x39e458, Func Offset: 0xb78
	// Line 5424, Address: 0x39e45c, Func Offset: 0xb7c
	// Line 5425, Address: 0x39e460, Func Offset: 0xb80
	// Line 5426, Address: 0x39e464, Func Offset: 0xb84
	// Line 5427, Address: 0x39e47c, Func Offset: 0xb9c
	// Line 5429, Address: 0x39e48c, Func Offset: 0xbac
	// Line 5430, Address: 0x39e4b0, Func Offset: 0xbd0
	// Line 5435, Address: 0x39e4b8, Func Offset: 0xbd8
	// Line 5436, Address: 0x39e4c4, Func Offset: 0xbe4
	// Line 5437, Address: 0x39e4cc, Func Offset: 0xbec
	// Line 5438, Address: 0x39e4d4, Func Offset: 0xbf4
	// Line 5440, Address: 0x39e4dc, Func Offset: 0xbfc
	// Line 5441, Address: 0x39e4e0, Func Offset: 0xc00
	// Line 5442, Address: 0x39e4e4, Func Offset: 0xc04
	// Line 5443, Address: 0x39e4e8, Func Offset: 0xc08
	// Line 5444, Address: 0x39e500, Func Offset: 0xc20
	// Line 5446, Address: 0x39e510, Func Offset: 0xc30
	// Line 5447, Address: 0x39e514, Func Offset: 0xc34
	// Line 5448, Address: 0x39e518, Func Offset: 0xc38
	// Line 5449, Address: 0x39e51c, Func Offset: 0xc3c
	// Line 5450, Address: 0x39e534, Func Offset: 0xc54
	// Line 5452, Address: 0x39e544, Func Offset: 0xc64
	// Line 5453, Address: 0x39e54c, Func Offset: 0xc6c
	// Line 5454, Address: 0x39e554, Func Offset: 0xc74
	// Line 5455, Address: 0x39e55c, Func Offset: 0xc7c
	// Line 5456, Address: 0x39e574, Func Offset: 0xc94
	// Line 5458, Address: 0x39e584, Func Offset: 0xca4
	// Line 5459, Address: 0x39e5b0, Func Offset: 0xcd0
	// Line 5464, Address: 0x39e5b8, Func Offset: 0xcd8
	// Line 5465, Address: 0x39e5c4, Func Offset: 0xce4
	// Line 5466, Address: 0x39e5cc, Func Offset: 0xcec
	// Line 5467, Address: 0x39e5d4, Func Offset: 0xcf4
	// Line 5469, Address: 0x39e5dc, Func Offset: 0xcfc
	// Line 5470, Address: 0x39e5e0, Func Offset: 0xd00
	// Line 5471, Address: 0x39e5e4, Func Offset: 0xd04
	// Line 5472, Address: 0x39e5e8, Func Offset: 0xd08
	// Line 5473, Address: 0x39e600, Func Offset: 0xd20
	// Line 5474, Address: 0x39e610, Func Offset: 0xd30
	// Line 5475, Address: 0x39e634, Func Offset: 0xd54
	// Line 5480, Address: 0x39e63c, Func Offset: 0xd5c
	// Line 5481, Address: 0x39e648, Func Offset: 0xd68
	// Line 5482, Address: 0x39e654, Func Offset: 0xd74
	// Line 5483, Address: 0x39e65c, Func Offset: 0xd7c
	// Line 5484, Address: 0x39e664, Func Offset: 0xd84
	// Line 5486, Address: 0x39e66c, Func Offset: 0xd8c
	// Line 5487, Address: 0x39e670, Func Offset: 0xd90
	// Line 5488, Address: 0x39e674, Func Offset: 0xd94
	// Line 5489, Address: 0x39e678, Func Offset: 0xd98
	// Line 5490, Address: 0x39e690, Func Offset: 0xdb0
	// Line 5492, Address: 0x39e6a0, Func Offset: 0xdc0
	// Line 5493, Address: 0x39e6a4, Func Offset: 0xdc4
	// Line 5494, Address: 0x39e6a8, Func Offset: 0xdc8
	// Line 5495, Address: 0x39e6ac, Func Offset: 0xdcc
	// Line 5496, Address: 0x39e6c4, Func Offset: 0xde4
	// Line 5497, Address: 0x39e6d4, Func Offset: 0xdf4
	// Line 5498, Address: 0x39e700, Func Offset: 0xe20
	// Line 5503, Address: 0x39e708, Func Offset: 0xe28
	// Line 5504, Address: 0x39e714, Func Offset: 0xe34
	// Line 5505, Address: 0x39e720, Func Offset: 0xe40
	// Line 5506, Address: 0x39e72c, Func Offset: 0xe4c
	// Line 5507, Address: 0x39e734, Func Offset: 0xe54
	// Line 5508, Address: 0x39e73c, Func Offset: 0xe5c
	// Line 5510, Address: 0x39e744, Func Offset: 0xe64
	// Line 5511, Address: 0x39e748, Func Offset: 0xe68
	// Line 5512, Address: 0x39e74c, Func Offset: 0xe6c
	// Line 5513, Address: 0x39e750, Func Offset: 0xe70
	// Line 5514, Address: 0x39e768, Func Offset: 0xe88
	// Line 5516, Address: 0x39e778, Func Offset: 0xe98
	// Line 5517, Address: 0x39e77c, Func Offset: 0xe9c
	// Line 5518, Address: 0x39e780, Func Offset: 0xea0
	// Line 5519, Address: 0x39e784, Func Offset: 0xea4
	// Line 5520, Address: 0x39e79c, Func Offset: 0xebc
	// Line 5522, Address: 0x39e7ac, Func Offset: 0xecc
	// Line 5523, Address: 0x39e7e4, Func Offset: 0xf04
	// Line 5559, Address: 0x39e7ec, Func Offset: 0xf0c
	// Line 5560, Address: 0x39e7f4, Func Offset: 0xf14
	// Line 5561, Address: 0x39e808, Func Offset: 0xf28
	// Line 5563, Address: 0x39e810, Func Offset: 0xf30
	// Line 5564, Address: 0x39e828, Func Offset: 0xf48
	// Line 5566, Address: 0x39e830, Func Offset: 0xf50
	// Line 5567, Address: 0x39e838, Func Offset: 0xf58
	// Line 5568, Address: 0x39e854, Func Offset: 0xf74
	// Line 5570, Address: 0x39e85c, Func Offset: 0xf7c
	// Line 5571, Address: 0x39e860, Func Offset: 0xf80
	// Line 5572, Address: 0x39e864, Func Offset: 0xf84
	// Line 5573, Address: 0x39e868, Func Offset: 0xf88
	// Line 5574, Address: 0x39e888, Func Offset: 0xfa8
	// Line 5576, Address: 0x39e890, Func Offset: 0xfb0
	// Line 5577, Address: 0x39e894, Func Offset: 0xfb4
	// Line 5578, Address: 0x39e898, Func Offset: 0xfb8
	// Line 5579, Address: 0x39e89c, Func Offset: 0xfbc
	// Line 5580, Address: 0x39e8a0, Func Offset: 0xfc0
	// Line 5581, Address: 0x39e8c4, Func Offset: 0xfe4
	// Line 5583, Address: 0x39e8cc, Func Offset: 0xfec
	// Line 5584, Address: 0x39e8d4, Func Offset: 0xff4
	// Line 5585, Address: 0x39e8d8, Func Offset: 0xff8
	// Line 5586, Address: 0x39e8dc, Func Offset: 0xffc
	// Line 5587, Address: 0x39e8e0, Func Offset: 0x1000
	// Line 5588, Address: 0x39e8e4, Func Offset: 0x1004
	// Line 5589, Address: 0x39e90c, Func Offset: 0x102c
	// Line 5591, Address: 0x39e914, Func Offset: 0x1034
	// Line 5592, Address: 0x39e91c, Func Offset: 0x103c
	// Line 5593, Address: 0x39e924, Func Offset: 0x1044
	// Line 5594, Address: 0x39e928, Func Offset: 0x1048
	// Line 5595, Address: 0x39e92c, Func Offset: 0x104c
	// Line 5596, Address: 0x39e930, Func Offset: 0x1050
	// Line 5597, Address: 0x39e934, Func Offset: 0x1054
	// Line 5598, Address: 0x39e960, Func Offset: 0x1080
	// Line 5600, Address: 0x39e968, Func Offset: 0x1088
	// Line 5601, Address: 0x39e96c, Func Offset: 0x108c
	// Line 5602, Address: 0x39e970, Func Offset: 0x1090
	// Line 5603, Address: 0x39e974, Func Offset: 0x1094
	// Line 5604, Address: 0x39e98c, Func Offset: 0x10ac
	// Line 5606, Address: 0x39e994, Func Offset: 0x10b4
	// Line 5607, Address: 0x39e998, Func Offset: 0x10b8
	// Line 5608, Address: 0x39e99c, Func Offset: 0x10bc
	// Line 5609, Address: 0x39e9a0, Func Offset: 0x10c0
	// Line 5610, Address: 0x39e9a4, Func Offset: 0x10c4
	// Line 5611, Address: 0x39e9c0, Func Offset: 0x10e0
	// Line 5613, Address: 0x39e9c8, Func Offset: 0x10e8
	// Line 5614, Address: 0x39e9d0, Func Offset: 0x10f0
	// Line 5615, Address: 0x39e9d4, Func Offset: 0x10f4
	// Line 5616, Address: 0x39e9d8, Func Offset: 0x10f8
	// Line 5617, Address: 0x39e9dc, Func Offset: 0x10fc
	// Line 5618, Address: 0x39e9e0, Func Offset: 0x1100
	// Line 5619, Address: 0x39ea00, Func Offset: 0x1120
	// Line 5621, Address: 0x39ea08, Func Offset: 0x1128
	// Line 5622, Address: 0x39ea10, Func Offset: 0x1130
	// Line 5623, Address: 0x39ea18, Func Offset: 0x1138
	// Line 5624, Address: 0x39ea1c, Func Offset: 0x113c
	// Line 5625, Address: 0x39ea20, Func Offset: 0x1140
	// Line 5626, Address: 0x39ea24, Func Offset: 0x1144
	// Line 5627, Address: 0x39ea28, Func Offset: 0x1148
	// Line 5628, Address: 0x39ea4c, Func Offset: 0x116c
	// Line 5630, Address: 0x39ea54, Func Offset: 0x1174
	// Line 5631, Address: 0x39ea58, Func Offset: 0x1178
	// Line 5632, Address: 0x39ea60, Func Offset: 0x1180
	// Line 5633, Address: 0x39ea68, Func Offset: 0x1188
	// Line 5634, Address: 0x39ea70, Func Offset: 0x1190
	// Line 5635, Address: 0x39ea74, Func Offset: 0x1194
	// Line 5636, Address: 0x39ea78, Func Offset: 0x1198
	// Line 5637, Address: 0x39ea7c, Func Offset: 0x119c
	// Line 5638, Address: 0x39ea80, Func Offset: 0x11a0
	// Line 5639, Address: 0x39eaa8, Func Offset: 0x11c8
	// Line 5641, Address: 0x39eab0, Func Offset: 0x11d0
	// Line 5642, Address: 0x39eab4, Func Offset: 0x11d4
	// Line 5643, Address: 0x39eab8, Func Offset: 0x11d8
	// Line 5644, Address: 0x39eac0, Func Offset: 0x11e0
	// Line 5645, Address: 0x39eac8, Func Offset: 0x11e8
	// Line 5646, Address: 0x39ead0, Func Offset: 0x11f0
	// Line 5647, Address: 0x39ead4, Func Offset: 0x11f4
	// Line 5648, Address: 0x39ead8, Func Offset: 0x11f8
	// Line 5649, Address: 0x39eadc, Func Offset: 0x11fc
	// Line 5650, Address: 0x39eae0, Func Offset: 0x1200
	// Line 5651, Address: 0x39eb08, Func Offset: 0x1228
	// Line 5766, Address: 0x39eb10, Func Offset: 0x1230
	// Line 5773, Address: 0x39eb28, Func Offset: 0x1248
	// Line 5775, Address: 0x39eb38, Func Offset: 0x1258
	// Line 5777, Address: 0x39eb40, Func Offset: 0x1260
	// Line 5779, Address: 0x39eb44, Func Offset: 0x1264
	// Line 5780, Address: 0x39eb4c, Func Offset: 0x126c
	// Line 5784, Address: 0x39eb58, Func Offset: 0x1278
	// Line 5785, Address: 0x39eb6c, Func Offset: 0x128c
	// Line 5786, Address: 0x39eb7c, Func Offset: 0x129c
	// Line 5793, Address: 0x39eb84, Func Offset: 0x12a4
	// Line 5794, Address: 0x39eba0, Func Offset: 0x12c0
	// Line 5798, Address: 0x39ebac, Func Offset: 0x12cc
	// Line 5802, Address: 0x39ebb8, Func Offset: 0x12d8
	// Line 5803, Address: 0x39ebc0, Func Offset: 0x12e0
	// Line 5806, Address: 0x39ebcc, Func Offset: 0x12ec
	// Line 5810, Address: 0x39ebd8, Func Offset: 0x12f8
	// Line 5811, Address: 0x39ebec, Func Offset: 0x130c
	// Line 5812, Address: 0x39ebfc, Func Offset: 0x131c
	// Line 5819, Address: 0x39ec04, Func Offset: 0x1324
	// Line 5820, Address: 0x39ec20, Func Offset: 0x1340
	// Line 5824, Address: 0x39ec2c, Func Offset: 0x134c
	// Line 5828, Address: 0x39ec38, Func Offset: 0x1358
	// Line 5829, Address: 0x39ec40, Func Offset: 0x1360
	// Line 5832, Address: 0x39ec4c, Func Offset: 0x136c
	// Line 5836, Address: 0x39ec58, Func Offset: 0x1378
	// Line 5837, Address: 0x39ec6c, Func Offset: 0x138c
	// Line 5838, Address: 0x39ec7c, Func Offset: 0x139c
	// Line 5845, Address: 0x39ec84, Func Offset: 0x13a4
	// Line 5846, Address: 0x39ec94, Func Offset: 0x13b4
	// Line 5847, Address: 0x39eca4, Func Offset: 0x13c4
	// Line 5848, Address: 0x39ecb4, Func Offset: 0x13d4
	// Line 5852, Address: 0x39ecc0, Func Offset: 0x13e0
	// Line 5856, Address: 0x39eccc, Func Offset: 0x13ec
	// Line 5857, Address: 0x39ecd4, Func Offset: 0x13f4
	// Line 5860, Address: 0x39ece0, Func Offset: 0x1400
	// Line 5864, Address: 0x39ecec, Func Offset: 0x140c
	// Line 5865, Address: 0x39ed00, Func Offset: 0x1420
	// Line 5866, Address: 0x39ed10, Func Offset: 0x1430
	// Line 5872, Address: 0x39ed18, Func Offset: 0x1438
	// Line 5873, Address: 0x39ed28, Func Offset: 0x1448
	// Line 5874, Address: 0x39ed38, Func Offset: 0x1458
	// Line 5875, Address: 0x39ed48, Func Offset: 0x1468
	// Line 5879, Address: 0x39ed54, Func Offset: 0x1474
	// Line 5883, Address: 0x39ed60, Func Offset: 0x1480
	// Line 5884, Address: 0x39ed68, Func Offset: 0x1488
	// Line 5887, Address: 0x39ed74, Func Offset: 0x1494
	// Line 5891, Address: 0x39ed80, Func Offset: 0x14a0
	// Line 5892, Address: 0x39ed94, Func Offset: 0x14b4
	// Line 5893, Address: 0x39eda4, Func Offset: 0x14c4
	// Line 5899, Address: 0x39edac, Func Offset: 0x14cc
	// Line 5903, Address: 0x39edb8, Func Offset: 0x14d8
	// Line 5904, Address: 0x39edc0, Func Offset: 0x14e0
	// Line 5907, Address: 0x39edcc, Func Offset: 0x14ec
	// Line 5909, Address: 0x39edd8, Func Offset: 0x14f8
	// Line 5914, Address: 0x39ede0, Func Offset: 0x1500
	// Line 5915, Address: 0x39ede8, Func Offset: 0x1508
	// Line 5916, Address: 0x39edf8, Func Offset: 0x1518
	// Line 5922, Address: 0x39ee00, Func Offset: 0x1520
	// Line 5923, Address: 0x39ee20, Func Offset: 0x1540
	// Line 5924, Address: 0x39ee50, Func Offset: 0x1570
	// Line 5926, Address: 0x39ee58, Func Offset: 0x1578
	// Line 5931, Address: 0x39ee70, Func Offset: 0x1590
	// Line 5932, Address: 0x39ee88, Func Offset: 0x15a8
	// Line 5936, Address: 0x39eea4, Func Offset: 0x15c4
	// Line 5939, Address: 0x39eeac, Func Offset: 0x15cc
	// Line 5941, Address: 0x39eeb8, Func Offset: 0x15d8
	// Line 5946, Address: 0x39eec0, Func Offset: 0x15e0
	// Line 5947, Address: 0x39eec8, Func Offset: 0x15e8
	// Line 5948, Address: 0x39eed8, Func Offset: 0x15f8
	// Line 5955, Address: 0x39eee0, Func Offset: 0x1600
	// Line 5958, Address: 0x39ef00, Func Offset: 0x1620
	// Line 5959, Address: 0x39ef1c, Func Offset: 0x163c
	// Line 5961, Address: 0x39ef24, Func Offset: 0x1644
	// Line 5962, Address: 0x39ef54, Func Offset: 0x1674
	// Line 5967, Address: 0x39ef6c, Func Offset: 0x168c
	// Line 5970, Address: 0x39ef74, Func Offset: 0x1694
	// Line 5974, Address: 0x39ef80, Func Offset: 0x16a0
	// Line 5975, Address: 0x39ef94, Func Offset: 0x16b4
	// Line 5976, Address: 0x39efa4, Func Offset: 0x16c4
	// Line 5982, Address: 0x39efac, Func Offset: 0x16cc
	// Line 5986, Address: 0x39efb8, Func Offset: 0x16d8
	// Line 5990, Address: 0x39efc0, Func Offset: 0x16e0
	// Line 5991, Address: 0x39efc8, Func Offset: 0x16e8
	// Line 5994, Address: 0x39efd4, Func Offset: 0x16f4
	// Line 5999, Address: 0x39efe0, Func Offset: 0x1700
	// Line 6000, Address: 0x39efec, Func Offset: 0x170c
	// Line 6002, Address: 0x39f00c, Func Offset: 0x172c
	// Line 6003, Address: 0x39f02c, Func Offset: 0x174c
	// Line 6004, Address: 0x39f040, Func Offset: 0x1760
	// Line 6006, Address: 0x39f048, Func Offset: 0x1768
	// Line 6007, Address: 0x39f05c, Func Offset: 0x177c
	// Line 6008, Address: 0x39f060, Func Offset: 0x1780
	// Line 6009, Address: 0x39f06c, Func Offset: 0x178c
	// Line 6010, Address: 0x39f0f0, Func Offset: 0x1810
	// Line 6011, Address: 0x39f11c, Func Offset: 0x183c
	// Line 6012, Address: 0x39f120, Func Offset: 0x1840
	// Line 6017, Address: 0x39f138, Func Offset: 0x1858
	// Line 6020, Address: 0x39f140, Func Offset: 0x1860
	// Line 6029, Address: 0x39f14c, Func Offset: 0x186c
	// Line 6038, Address: 0x39f158, Func Offset: 0x1878
	// Line 6039, Address: 0x39f164, Func Offset: 0x1884
	// Line 6043, Address: 0x39f16c, Func Offset: 0x188c
	// Line 6046, Address: 0x39f174, Func Offset: 0x1894
	// Line 6047, Address: 0x39f180, Func Offset: 0x18a0
	// Line 6051, Address: 0x39f184, Func Offset: 0x18a4
	// Line 6053, Address: 0x39f18c, Func Offset: 0x18ac
	// Line 6056, Address: 0x39f198, Func Offset: 0x18b8
	// Line 6060, Address: 0x39f19c, Func Offset: 0x18bc
	// Line 6083, Address: 0x39f1a4, Func Offset: 0x18c4
	// Line 6088, Address: 0x39f1b4, Func Offset: 0x18d4
	// Line 6089, Address: 0x39f1b8, Func Offset: 0x18d8
	// Line 6090, Address: 0x39f1c4, Func Offset: 0x18e4
	// Line 6091, Address: 0x39f1d8, Func Offset: 0x18f8
	// Line 6108, Address: 0x39f1e8, Func Offset: 0x1908
	// Line 6109, Address: 0x39f1f0, Func Offset: 0x1910
	// Line 6110, Address: 0x39f1f4, Func Offset: 0x1914
	// Line 6111, Address: 0x39f1f8, Func Offset: 0x1918
	// Line 6112, Address: 0x39f234, Func Offset: 0x1954
	// Line 6125, Address: 0x39f23c, Func Offset: 0x195c
	// Line 6126, Address: 0x39f244, Func Offset: 0x1964
	// Line 6127, Address: 0x39f24c, Func Offset: 0x196c
	// Line 6131, Address: 0x39f254, Func Offset: 0x1974
	// Line 6132, Address: 0x39f274, Func Offset: 0x1994
	// Line 6136, Address: 0x39f280, Func Offset: 0x19a0
	// Line 6140, Address: 0x39f288, Func Offset: 0x19a8
	// Line 6141, Address: 0x39f290, Func Offset: 0x19b0
	// Line 6142, Address: 0x39f29c, Func Offset: 0x19bc
	// Line 6157, Address: 0x39f2a0, Func Offset: 0x19c0
	// Line 6158, Address: 0x39f2a8, Func Offset: 0x19c8
	// Line 6159, Address: 0x39f2b0, Func Offset: 0x19d0
	// Line 6160, Address: 0x39f2c8, Func Offset: 0x19e8
	// Line 6165, Address: 0x39f2d0, Func Offset: 0x19f0
	// Line 6172, Address: 0x39f2e4, Func Offset: 0x1a04
	// Line 6181, Address: 0x39f2ec, Func Offset: 0x1a0c
	// Line 6182, Address: 0x39f2f4, Func Offset: 0x1a14
	// Line 6183, Address: 0x39f2fc, Func Offset: 0x1a1c
	// Line 6187, Address: 0x39f304, Func Offset: 0x1a24
	// Line 6191, Address: 0x39f30c, Func Offset: 0x1a2c
	// Line 6205, Address: 0x39f318, Func Offset: 0x1a38
	// Line 6206, Address: 0x39f320, Func Offset: 0x1a40
	// Line 6207, Address: 0x39f328, Func Offset: 0x1a48
	// Line 6208, Address: 0x39f340, Func Offset: 0x1a60
	// Line 6213, Address: 0x39f348, Func Offset: 0x1a68
	// Line 6220, Address: 0x39f35c, Func Offset: 0x1a7c
	// Line 6228, Address: 0x39f364, Func Offset: 0x1a84
	// Line 6229, Address: 0x39f36c, Func Offset: 0x1a8c
	// Line 6230, Address: 0x39f374, Func Offset: 0x1a94
	// Line 6231, Address: 0x39f37c, Func Offset: 0x1a9c
	// Line 6235, Address: 0x39f39c, Func Offset: 0x1abc
	// Line 6236, Address: 0x39f3a4, Func Offset: 0x1ac4
	// Line 6237, Address: 0x39f3b0, Func Offset: 0x1ad0
	// Line 6242, Address: 0x39f3b4, Func Offset: 0x1ad4
	// Line 6252, Address: 0x39f3c0, Func Offset: 0x1ae0
	// Line 6259, Address: 0x39f3cc, Func Offset: 0x1aec
	// Line 6267, Address: 0x39f3d4, Func Offset: 0x1af4
	// Line 6268, Address: 0x39f3dc, Func Offset: 0x1afc
	// Line 6269, Address: 0x39f3e4, Func Offset: 0x1b04
	// Line 6273, Address: 0x39f3ec, Func Offset: 0x1b0c
	// Line 6283, Address: 0x39f3f8, Func Offset: 0x1b18
	// Line 6290, Address: 0x39f404, Func Offset: 0x1b24
	// Line 6298, Address: 0x39f40c, Func Offset: 0x1b2c
	// Line 6303, Address: 0x39f418, Func Offset: 0x1b38
	// Line 6309, Address: 0x39f420, Func Offset: 0x1b40
	// Line 6310, Address: 0x39f428, Func Offset: 0x1b48
	// Line 6311, Address: 0x39f430, Func Offset: 0x1b50
	// Line 6318, Address: 0x39f438, Func Offset: 0x1b58
	// Line 6324, Address: 0x39f440, Func Offset: 0x1b60
	// Line 6334, Address: 0x39f448, Func Offset: 0x1b68
	// Line 6339, Address: 0x39f454, Func Offset: 0x1b74
	// Line 6345, Address: 0x39f45c, Func Offset: 0x1b7c
	// Line 6346, Address: 0x39f464, Func Offset: 0x1b84
	// Line 6347, Address: 0x39f46c, Func Offset: 0x1b8c
	// Line 6351, Address: 0x39f474, Func Offset: 0x1b94
	// Line 6359, Address: 0x39f47c, Func Offset: 0x1b9c
	// Line 6360, Address: 0x39f484, Func Offset: 0x1ba4
	// Line 6367, Address: 0x39f48c, Func Offset: 0x1bac
	// Line 6379, Address: 0x39f494, Func Offset: 0x1bb4
	// Line 6380, Address: 0x39f49c, Func Offset: 0x1bbc
	// Line 6381, Address: 0x39f4a4, Func Offset: 0x1bc4
	// Line 6389, Address: 0x39f4ac, Func Offset: 0x1bcc
	// Line 6390, Address: 0x39f4c4, Func Offset: 0x1be4
	// Line 6391, Address: 0x39f4cc, Func Offset: 0x1bec
	// Line 6392, Address: 0x39f4e4, Func Offset: 0x1c04
	// Line 6395, Address: 0x39f4ec, Func Offset: 0x1c0c
	// Line 6420, Address: 0x39f520, Func Offset: 0x1c40
	// Line 6424, Address: 0x39f530, Func Offset: 0x1c50
	// Line 6425, Address: 0x39f53c, Func Offset: 0x1c5c
	// Line 6426, Address: 0x39f554, Func Offset: 0x1c74
	// Line 6427, Address: 0x39f568, Func Offset: 0x1c88
	// Line 6442, Address: 0x39f578, Func Offset: 0x1c98
	// Line 6443, Address: 0x39f580, Func Offset: 0x1ca0
	// Line 6444, Address: 0x39f584, Func Offset: 0x1ca4
	// Line 6445, Address: 0x39f588, Func Offset: 0x1ca8
	// Line 6446, Address: 0x39f5c4, Func Offset: 0x1ce4
	// Line 6456, Address: 0x39f5cc, Func Offset: 0x1cec
	// Line 6461, Address: 0x39f5d8, Func Offset: 0x1cf8
	// Line 6471, Address: 0x39f5e0, Func Offset: 0x1d00
	// Line 6476, Address: 0x39f5e8, Func Offset: 0x1d08
	// Line 6482, Address: 0x39f5f0, Func Offset: 0x1d10
	// Line 6483, Address: 0x39f5f8, Func Offset: 0x1d18
	// Line 6492, Address: 0x39f600, Func Offset: 0x1d20
	// Line 6493, Address: 0x39f618, Func Offset: 0x1d38
	// Line 6494, Address: 0x39f620, Func Offset: 0x1d40
	// Line 6495, Address: 0x39f638, Func Offset: 0x1d58
	// Line 6499, Address: 0x39f640, Func Offset: 0x1d60
	// Line 6501, Address: 0x39f654, Func Offset: 0x1d74
	// Line 6509, Address: 0x39f65c, Func Offset: 0x1d7c
	// Line 6514, Address: 0x39f66c, Func Offset: 0x1d8c
	// Line 6525, Address: 0x39f674, Func Offset: 0x1d94
	// Line 6526, Address: 0x39f67c, Func Offset: 0x1d9c
	// Line 6531, Address: 0x39f680, Func Offset: 0x1da0
	// Line 6540, Address: 0x39f688, Func Offset: 0x1da8
	// Line 6541, Address: 0x39f690, Func Offset: 0x1db0
	// Line 6543, Address: 0x39f698, Func Offset: 0x1db8
	// Line 6544, Address: 0x39f6a0, Func Offset: 0x1dc0
	// Line 6545, Address: 0x39f6b0, Func Offset: 0x1dd0
	// Line 6550, Address: 0x39f6c0, Func Offset: 0x1de0
	// Line 6551, Address: 0x39f6c8, Func Offset: 0x1de8
	// Line 6552, Address: 0x39f6d0, Func Offset: 0x1df0
	// Line 6553, Address: 0x39f6e8, Func Offset: 0x1e08
	// Line 6556, Address: 0x39f6f0, Func Offset: 0x1e10
	// Line 6565, Address: 0x39f700, Func Offset: 0x1e20
	// Line 6572, Address: 0x39f74c, Func Offset: 0x1e6c
	// Line 6575, Address: 0x39f774, Func Offset: 0x1e94
	// Line 6583, Address: 0x39f77c, Func Offset: 0x1e9c
	// Line 6604, Address: 0x39f784, Func Offset: 0x1ea4
	// Line 6609, Address: 0x39f78c, Func Offset: 0x1eac
	// Line 6619, Address: 0x39f794, Func Offset: 0x1eb4
	// Line 6624, Address: 0x39f7a0, Func Offset: 0x1ec0
	// Line 6634, Address: 0x39f7a8, Func Offset: 0x1ec8
	// Line 6639, Address: 0x39f7b4, Func Offset: 0x1ed4
	// Line 6649, Address: 0x39f7bc, Func Offset: 0x1edc
	// Line 6654, Address: 0x39f7c8, Func Offset: 0x1ee8
	// Line 6664, Address: 0x39f7d0, Func Offset: 0x1ef0
	// Line 6669, Address: 0x39f7dc, Func Offset: 0x1efc
	// Line 6674, Address: 0x39f7e4, Func Offset: 0x1f04
	// Line 6679, Address: 0x39f808, Func Offset: 0x1f28
	// Line 6684, Address: 0x39f810, Func Offset: 0x1f30
	// Line 6689, Address: 0x39f834, Func Offset: 0x1f54
	// Line 6750, Address: 0x39f83c, Func Offset: 0x1f5c
	// Line 6751, Address: 0x39f860, Func Offset: 0x1f80
	// Line 6754, Address: 0x39f868, Func Offset: 0x1f88
	// Line 6755, Address: 0x39f88c, Func Offset: 0x1fac
	// Line 6760, Address: 0x39f894, Func Offset: 0x1fb4
	// Line 6761, Address: 0x39f89c, Func Offset: 0x1fbc
	// Line 6762, Address: 0x39f8a4, Func Offset: 0x1fc4
	// Line 6764, Address: 0x39f8c4, Func Offset: 0x1fe4
	// Line 6776, Address: 0x39f8cc, Func Offset: 0x1fec
	// Line 6787, Address: 0x39f8d4, Func Offset: 0x1ff4
	// Line 6788, Address: 0x39f8dc, Func Offset: 0x1ffc
	// Line 6789, Address: 0x39f8ec, Func Offset: 0x200c
	// Line 6791, Address: 0x39f8fc, Func Offset: 0x201c
	// Line 6792, Address: 0x39f904, Func Offset: 0x2024
	// Line 6793, Address: 0x39f90c, Func Offset: 0x202c
	// Line 6794, Address: 0x39f924, Func Offset: 0x2044
	// Line 6799, Address: 0x39f92c, Func Offset: 0x204c
	// Line 6817, Address: 0x39f934, Func Offset: 0x2054
	// Line 6825, Address: 0x39f93c, Func Offset: 0x205c
	// Line 6826, Address: 0x39f944, Func Offset: 0x2064
	// Line 6827, Address: 0x39f94c, Func Offset: 0x206c
	// Line 6828, Address: 0x39f954, Func Offset: 0x2074
	// Line 6829, Address: 0x39f964, Func Offset: 0x2084
	// Line 6831, Address: 0x39f974, Func Offset: 0x2094
	// Line 6832, Address: 0x39f97c, Func Offset: 0x209c
	// Line 6833, Address: 0x39f984, Func Offset: 0x20a4
	// Line 6834, Address: 0x39f99c, Func Offset: 0x20bc
	// Line 6839, Address: 0x39f9a4, Func Offset: 0x20c4
	// Line 6846, Address: 0x39f9ac, Func Offset: 0x20cc
	// Line 6849, Address: 0x39f9b4, Func Offset: 0x20d4
	// Line 6850, Address: 0x39f9d8, Func Offset: 0x20f8
	// Line 6858, Address: 0x39f9e0, Func Offset: 0x2100
	// Line 6863, Address: 0x39f9fc, Func Offset: 0x211c
	// Line 6868, Address: 0x39fa04, Func Offset: 0x2124
	// Line 6869, Address: 0x39fa28, Func Offset: 0x2148
	// Line 6890, Address: 0x39fa30, Func Offset: 0x2150
	// Line 6891, Address: 0x39fa54, Func Offset: 0x2174
	// Line 6899, Address: 0x39fa5c, Func Offset: 0x217c
	// Line 6904, Address: 0x39fa78, Func Offset: 0x2198
	// Line 6914, Address: 0x39fa80, Func Offset: 0x21a0
	// Line 6919, Address: 0x39fa8c, Func Offset: 0x21ac
	// Line 6929, Address: 0x39fa94, Func Offset: 0x21b4
	// Line 6934, Address: 0x39faa0, Func Offset: 0x21c0
	// Line 6939, Address: 0x39faa8, Func Offset: 0x21c8
	// Line 6940, Address: 0x39facc, Func Offset: 0x21ec
	// Line 6943, Address: 0x39fad4, Func Offset: 0x21f4
	// Line 6944, Address: 0x39faf8, Func Offset: 0x2218
	// Line 6947, Address: 0x39fb00, Func Offset: 0x2220
	// Line 6948, Address: 0x39fb24, Func Offset: 0x2244
	// Line 6951, Address: 0x39fb2c, Func Offset: 0x224c
	// Line 6952, Address: 0x39fb50, Func Offset: 0x2270
	// Line 7017, Address: 0x39fb58, Func Offset: 0x2278
	// Line 7018, Address: 0x39fb7c, Func Offset: 0x229c
	// Line 7021, Address: 0x39fb84, Func Offset: 0x22a4
	// Line 7022, Address: 0x39fba8, Func Offset: 0x22c8
	// Line 7025, Address: 0x39fbb0, Func Offset: 0x22d0
	// Line 7026, Address: 0x39fbd4, Func Offset: 0x22f4
	// Line 7029, Address: 0x39fbdc, Func Offset: 0x22fc
	// Line 7030, Address: 0x39fc00, Func Offset: 0x2320
	// Line 7038, Address: 0x39fc08, Func Offset: 0x2328
	// Line 7043, Address: 0x39fc14, Func Offset: 0x2334
	// Line 7053, Address: 0x39fc1c, Func Offset: 0x233c
	// Line 7058, Address: 0x39fc28, Func Offset: 0x2348
	// Line 7068, Address: 0x39fc30, Func Offset: 0x2350
	// Line 7073, Address: 0x39fc3c, Func Offset: 0x235c
	// Line 7084, Address: 0x39fc44, Func Offset: 0x2364
	// Line 7085, Address: 0x39fc4c, Func Offset: 0x236c
	// Line 7088, Address: 0x39fc54, Func Offset: 0x2374
	// Line 7089, Address: 0x39fc70, Func Offset: 0x2390
	// Line 7090, Address: 0x39fc78, Func Offset: 0x2398
	// Line 7091, Address: 0x39fc90, Func Offset: 0x23b0
	// Line 7095, Address: 0x39fc98, Func Offset: 0x23b8
	// Line 7097, Address: 0x39fcac, Func Offset: 0x23cc
	// Line 7100, Address: 0x39fcb4, Func Offset: 0x23d4
	// Line 7101, Address: 0x39fcd8, Func Offset: 0x23f8
	// Line 7126, Address: 0x39fce0, Func Offset: 0x2400
	// Line 7127, Address: 0x39fd04, Func Offset: 0x2424
	// Line 7136, Address: 0x39fd0c, Func Offset: 0x242c
	// Line 7137, Address: 0x39fd14, Func Offset: 0x2434
	// Line 7142, Address: 0x39fd1c, Func Offset: 0x243c
	// Line 7143, Address: 0x39fd38, Func Offset: 0x2458
	// Line 7144, Address: 0x39fd40, Func Offset: 0x2460
	// Line 7145, Address: 0x39fd58, Func Offset: 0x2478
	// Line 7149, Address: 0x39fd60, Func Offset: 0x2480
	// Line 7151, Address: 0x39fd70, Func Offset: 0x2490
	// Line 7160, Address: 0x39fd78, Func Offset: 0x2498
	// Line 7161, Address: 0x39fd80, Func Offset: 0x24a0
	// Line 7166, Address: 0x39fd88, Func Offset: 0x24a8
	// Line 7167, Address: 0x39fda0, Func Offset: 0x24c0
	// Line 7168, Address: 0x39fda8, Func Offset: 0x24c8
	// Line 7169, Address: 0x39fdc0, Func Offset: 0x24e0
	// Line 7173, Address: 0x39fdc8, Func Offset: 0x24e8
	// Line 7175, Address: 0x39fdd8, Func Offset: 0x24f8
	// Line 7178, Address: 0x39fde0, Func Offset: 0x2500
	// Line 7179, Address: 0x39fe04, Func Offset: 0x2524
	// Line 7188, Address: 0x39fe0c, Func Offset: 0x252c
	// Line 7193, Address: 0x39fe28, Func Offset: 0x2548
	// Line 7198, Address: 0x39fe30, Func Offset: 0x2550
	// Line 7199, Address: 0x39fe54, Func Offset: 0x2574
	// Line 7220, Address: 0x39fe5c, Func Offset: 0x257c
	// Line 7221, Address: 0x39fe80, Func Offset: 0x25a0
	// Line 7230, Address: 0x39fe88, Func Offset: 0x25a8
	// Line 7235, Address: 0x39fea4, Func Offset: 0x25c4
	// Line 7245, Address: 0x39feac, Func Offset: 0x25cc
	// Line 7250, Address: 0x39feb8, Func Offset: 0x25d8
	// Line 7260, Address: 0x39fec0, Func Offset: 0x25e0
	// Line 7265, Address: 0x39fecc, Func Offset: 0x25ec
	// Line 7275, Address: 0x39fed4, Func Offset: 0x25f4
	// Line 7280, Address: 0x39fee0, Func Offset: 0x2600
	// Line 7290, Address: 0x39fee8, Func Offset: 0x2608
	// Line 7295, Address: 0x39fef4, Func Offset: 0x2614
	// Line 7300, Address: 0x39fefc, Func Offset: 0x261c
	// Line 7301, Address: 0x39ff20, Func Offset: 0x2640
	// Line 7304, Address: 0x39ff28, Func Offset: 0x2648
	// Line 7305, Address: 0x39ff4c, Func Offset: 0x266c
	// Line 7308, Address: 0x39ff54, Func Offset: 0x2674
	// Line 7309, Address: 0x39ff78, Func Offset: 0x2698
	// Line 7312, Address: 0x39ff80, Func Offset: 0x26a0
	// Line 7313, Address: 0x39ffa4, Func Offset: 0x26c4
	// Line 7377, Address: 0x39ffac, Func Offset: 0x26cc
	// Line 7378, Address: 0x39ffd0, Func Offset: 0x26f0
	// Line 7381, Address: 0x39ffd8, Func Offset: 0x26f8
	// Line 7382, Address: 0x39fffc, Func Offset: 0x271c
	// Line 7385, Address: 0x3a0004, Func Offset: 0x2724
	// Line 7386, Address: 0x3a0028, Func Offset: 0x2748
	// Line 7389, Address: 0x3a0030, Func Offset: 0x2750
	// Line 7390, Address: 0x3a0054, Func Offset: 0x2774
	// Line 7397, Address: 0x3a005c, Func Offset: 0x277c
	// Line 7402, Address: 0x3a0068, Func Offset: 0x2788
	// Line 7412, Address: 0x3a0070, Func Offset: 0x2790
	// Line 7417, Address: 0x3a007c, Func Offset: 0x279c
	// Line 7427, Address: 0x3a0084, Func Offset: 0x27a4
	// Line 7432, Address: 0x3a0090, Func Offset: 0x27b0
	// Line 7442, Address: 0x3a0098, Func Offset: 0x27b8
	// Line 7447, Address: 0x3a00a4, Func Offset: 0x27c4
	// Line 7458, Address: 0x3a00ac, Func Offset: 0x27cc
	// Line 7459, Address: 0x3a00b4, Func Offset: 0x27d4
	// Line 7460, Address: 0x3a00bc, Func Offset: 0x27dc
	// Line 7463, Address: 0x3a00c4, Func Offset: 0x27e4
	// Line 7464, Address: 0x3a00e0, Func Offset: 0x2800
	// Line 7465, Address: 0x3a00e8, Func Offset: 0x2808
	// Line 7466, Address: 0x3a0100, Func Offset: 0x2820
	// Line 7470, Address: 0x3a0108, Func Offset: 0x2828
	// Line 7472, Address: 0x3a0114, Func Offset: 0x2834
	// Line 7475, Address: 0x3a011c, Func Offset: 0x283c
	// Line 7476, Address: 0x3a0140, Func Offset: 0x2860
	// Line 7502, Address: 0x3a0148, Func Offset: 0x2868
	// Line 7503, Address: 0x3a016c, Func Offset: 0x288c
	// Line 7507, Address: 0x3a0174, Func Offset: 0x2894
	// Line 7508, Address: 0x3a017c, Func Offset: 0x289c
	// Line 7509, Address: 0x3a0184, Func Offset: 0x28a4
	// Line 7518, Address: 0x3a018c, Func Offset: 0x28ac
	// Line 7519, Address: 0x3a01a8, Func Offset: 0x28c8
	// Line 7520, Address: 0x3a01b0, Func Offset: 0x28d0
	// Line 7521, Address: 0x3a01c8, Func Offset: 0x28e8
	// Line 7525, Address: 0x3a01d0, Func Offset: 0x28f0
	// Line 7527, Address: 0x3a01dc, Func Offset: 0x28fc
	// Line 7536, Address: 0x3a01e4, Func Offset: 0x2904
	// Line 7537, Address: 0x3a01ec, Func Offset: 0x290c
	// Line 7538, Address: 0x3a01f4, Func Offset: 0x2914
	// Line 7543, Address: 0x3a01fc, Func Offset: 0x291c
	// Line 7544, Address: 0x3a0218, Func Offset: 0x2938
	// Line 7545, Address: 0x3a0220, Func Offset: 0x2940
	// Line 7546, Address: 0x3a0238, Func Offset: 0x2958
	// Line 7550, Address: 0x3a0240, Func Offset: 0x2960
	// Line 7552, Address: 0x3a0248, Func Offset: 0x2968
	// Line 7561, Address: 0x3a0250, Func Offset: 0x2970
	// Line 7562, Address: 0x3a0258, Func Offset: 0x2978
	// Line 7563, Address: 0x3a0260, Func Offset: 0x2980
	// Line 7568, Address: 0x3a0268, Func Offset: 0x2988
	// Line 7569, Address: 0x3a0280, Func Offset: 0x29a0
	// Line 7570, Address: 0x3a0288, Func Offset: 0x29a8
	// Line 7571, Address: 0x3a02a0, Func Offset: 0x29c0
	// Line 7575, Address: 0x3a02a8, Func Offset: 0x29c8
	// Line 7577, Address: 0x3a02b0, Func Offset: 0x29d0
	// Line 7580, Address: 0x3a02b8, Func Offset: 0x29d8
	// Line 7581, Address: 0x3a02dc, Func Offset: 0x29fc
	// Line 7589, Address: 0x3a02e4, Func Offset: 0x2a04
	// Line 7594, Address: 0x3a02e8, Func Offset: 0x2a08
	// Line 7604, Address: 0x3a02f0, Func Offset: 0x2a10
	// Line 7605, Address: 0x3a02f4, Func Offset: 0x2a14
	// Line 7610, Address: 0x3a02f8, Func Offset: 0x2a18
	// Line 7621, Address: 0x3a0300, Func Offset: 0x2a20
	// Line 7622, Address: 0x3a0308, Func Offset: 0x2a28
	// Line 7623, Address: 0x3a0310, Func Offset: 0x2a30
	// Line 7624, Address: 0x3a0318, Func Offset: 0x2a38
	// Line 7625, Address: 0x3a0320, Func Offset: 0x2a40
	// Line 7631, Address: 0x3a0328, Func Offset: 0x2a48
	// Line 7642, Address: 0x3a0330, Func Offset: 0x2a50
	// Line 7643, Address: 0x3a0338, Func Offset: 0x2a58
	// Line 7644, Address: 0x3a0340, Func Offset: 0x2a60
	// Line 7645, Address: 0x3a0348, Func Offset: 0x2a68
	// Line 7646, Address: 0x3a0350, Func Offset: 0x2a70
	// Line 7647, Address: 0x3a0358, Func Offset: 0x2a78
	// Line 7648, Address: 0x3a0360, Func Offset: 0x2a80
	// Line 7654, Address: 0x3a0368, Func Offset: 0x2a88
	// Line 7665, Address: 0x3a0370, Func Offset: 0x2a90
	// Line 7666, Address: 0x3a0378, Func Offset: 0x2a98
	// Line 7667, Address: 0x3a0380, Func Offset: 0x2aa0
	// Line 7668, Address: 0x3a0388, Func Offset: 0x2aa8
	// Line 7669, Address: 0x3a0390, Func Offset: 0x2ab0
	// Line 7670, Address: 0x3a0398, Func Offset: 0x2ab8
	// Line 7676, Address: 0x3a03a0, Func Offset: 0x2ac0
	// Line 7687, Address: 0x3a03a8, Func Offset: 0x2ac8
	// Line 7688, Address: 0x3a03b0, Func Offset: 0x2ad0
	// Line 7689, Address: 0x3a03b8, Func Offset: 0x2ad8
	// Line 7690, Address: 0x3a03c0, Func Offset: 0x2ae0
	// Line 7691, Address: 0x3a03c8, Func Offset: 0x2ae8
	// Line 7692, Address: 0x3a03d0, Func Offset: 0x2af0
	// Line 7693, Address: 0x3a03d8, Func Offset: 0x2af8
	// Line 7694, Address: 0x3a03e0, Func Offset: 0x2b00
	// Line 7700, Address: 0x3a03e8, Func Offset: 0x2b08
	// Line 7711, Address: 0x3a03f0, Func Offset: 0x2b10
	// Line 7712, Address: 0x3a03f8, Func Offset: 0x2b18
	// Line 7713, Address: 0x3a0400, Func Offset: 0x2b20
	// Line 7714, Address: 0x3a0408, Func Offset: 0x2b28
	// Line 7715, Address: 0x3a0410, Func Offset: 0x2b30
	// Line 7716, Address: 0x3a0418, Func Offset: 0x2b38
	// Line 7717, Address: 0x3a0420, Func Offset: 0x2b40
	// Line 7718, Address: 0x3a0428, Func Offset: 0x2b48
	// Line 7719, Address: 0x3a0430, Func Offset: 0x2b50
	// Line 7720, Address: 0x3a0438, Func Offset: 0x2b58
	// Line 7726, Address: 0x3a0440, Func Offset: 0x2b60
	// Line 7737, Address: 0x3a0448, Func Offset: 0x2b68
	// Line 7738, Address: 0x3a0450, Func Offset: 0x2b70
	// Line 7739, Address: 0x3a0458, Func Offset: 0x2b78
	// Line 7740, Address: 0x3a0460, Func Offset: 0x2b80
	// Line 7746, Address: 0x3a0468, Func Offset: 0x2b88
	// Line 7757, Address: 0x3a0470, Func Offset: 0x2b90
	// Line 7758, Address: 0x3a0478, Func Offset: 0x2b98
	// Line 7759, Address: 0x3a0480, Func Offset: 0x2ba0
	// Line 7765, Address: 0x3a048c, Func Offset: 0x2bac
	// Line 7770, Address: 0x3a0494, Func Offset: 0x2bb4
	// Line 7771, Address: 0x3a04b8, Func Offset: 0x2bd8
	// Line 7796, Address: 0x3a04c0, Func Offset: 0x2be0
	// Line 7797, Address: 0x3a04e4, Func Offset: 0x2c04
	// Line 7806, Address: 0x3a04ec, Func Offset: 0x2c0c
	// Line 7807, Address: 0x3a04f4, Func Offset: 0x2c14
	// Line 7808, Address: 0x3a04fc, Func Offset: 0x2c1c
	// Line 7814, Address: 0x3a0508, Func Offset: 0x2c28
	// Line 7819, Address: 0x3a0510, Func Offset: 0x2c30
	// Line 7820, Address: 0x3a0534, Func Offset: 0x2c54
	// Line 7845, Address: 0x3a053c, Func Offset: 0x2c5c
	// Line 7846, Address: 0x3a0560, Func Offset: 0x2c80
	// Line 7855, Address: 0x3a0568, Func Offset: 0x2c88
	// Line 7856, Address: 0x3a0570, Func Offset: 0x2c90
	// Line 7857, Address: 0x3a0578, Func Offset: 0x2c98
	// Line 7863, Address: 0x3a0584, Func Offset: 0x2ca4
	// Line 7868, Address: 0x3a058c, Func Offset: 0x2cac
	// Line 7869, Address: 0x3a05b0, Func Offset: 0x2cd0
	// Line 7894, Address: 0x3a05b8, Func Offset: 0x2cd8
	// Line 7895, Address: 0x3a05dc, Func Offset: 0x2cfc
	// Line 7904, Address: 0x3a05e4, Func Offset: 0x2d04
	// Line 7905, Address: 0x3a05ec, Func Offset: 0x2d0c
	// Line 7907, Address: 0x3a05f4, Func Offset: 0x2d14
	// Line 7908, Address: 0x3a05fc, Func Offset: 0x2d1c
	// Line 7909, Address: 0x3a0604, Func Offset: 0x2d24
	// Line 7910, Address: 0x3a061c, Func Offset: 0x2d3c
	// Line 7913, Address: 0x3a0624, Func Offset: 0x2d44
	// Line 7915, Address: 0x3a0640, Func Offset: 0x2d60
	// Line 7918, Address: 0x3a0648, Func Offset: 0x2d68
	// Line 7919, Address: 0x3a066c, Func Offset: 0x2d8c
	// Line 7947, Address: 0x3a0674, Func Offset: 0x2d94
	// Line 7948, Address: 0x3a0698, Func Offset: 0x2db8
	// Line 7957, Address: 0x3a06a0, Func Offset: 0x2dc0
	// Line 7958, Address: 0x3a06a8, Func Offset: 0x2dc8
	// Line 7959, Address: 0x3a06b0, Func Offset: 0x2dd0
	// Line 7965, Address: 0x3a06cc, Func Offset: 0x2dec
	// Line 7970, Address: 0x3a06d4, Func Offset: 0x2df4
	// Line 7971, Address: 0x3a06f8, Func Offset: 0x2e18
	// Line 7974, Address: 0x3a0700, Func Offset: 0x2e20
	// Line 7975, Address: 0x3a0724, Func Offset: 0x2e44
	// Line 7978, Address: 0x3a072c, Func Offset: 0x2e4c
	// Line 7979, Address: 0x3a0750, Func Offset: 0x2e70
	// Line 7988, Address: 0x3a0758, Func Offset: 0x2e78
	// Line 7989, Address: 0x3a0764, Func Offset: 0x2e84
	// Line 7995, Address: 0x3a076c, Func Offset: 0x2e8c
	// Line 8000, Address: 0x3a0774, Func Offset: 0x2e94
	// Line 8001, Address: 0x3a0798, Func Offset: 0x2eb8
	// Line 8024, Address: 0x3a07a0, Func Offset: 0x2ec0
	// Line 8025, Address: 0x3a07c4, Func Offset: 0x2ee4
	// Line 8034, Address: 0x3a07cc, Func Offset: 0x2eec
	// Line 8035, Address: 0x3a07d4, Func Offset: 0x2ef4
	// Line 8036, Address: 0x3a07dc, Func Offset: 0x2efc
	// Line 8042, Address: 0x3a07e8, Func Offset: 0x2f08
	// Line 8047, Address: 0x3a07f0, Func Offset: 0x2f10
	// Line 8048, Address: 0x3a0814, Func Offset: 0x2f34
	// Line 8057, Address: 0x3a081c, Func Offset: 0x2f3c
	// Line 8058, Address: 0x3a0824, Func Offset: 0x2f44
	// Line 8059, Address: 0x3a082c, Func Offset: 0x2f4c
	// Line 8065, Address: 0x3a0838, Func Offset: 0x2f58
	// Line 8070, Address: 0x3a0840, Func Offset: 0x2f60
	// Line 8071, Address: 0x3a0864, Func Offset: 0x2f84
	// Line 8080, Address: 0x3a086c, Func Offset: 0x2f8c
	// Line 8081, Address: 0x3a0874, Func Offset: 0x2f94
	// Line 8082, Address: 0x3a087c, Func Offset: 0x2f9c
	// Line 8088, Address: 0x3a0888, Func Offset: 0x2fa8
	// Line 8093, Address: 0x3a0890, Func Offset: 0x2fb0
	// Line 8094, Address: 0x3a08b4, Func Offset: 0x2fd4
	// Line 8103, Address: 0x3a08bc, Func Offset: 0x2fdc
	// Line 8104, Address: 0x3a08c4, Func Offset: 0x2fe4
	// Line 8105, Address: 0x3a08cc, Func Offset: 0x2fec
	// Line 8111, Address: 0x3a08d8, Func Offset: 0x2ff8
	// Line 8116, Address: 0x3a08e0, Func Offset: 0x3000
	// Line 8117, Address: 0x3a0904, Func Offset: 0x3024
	// Line 8126, Address: 0x3a090c, Func Offset: 0x302c
	// Line 8127, Address: 0x3a0914, Func Offset: 0x3034
	// Line 8128, Address: 0x3a091c, Func Offset: 0x303c
	// Line 8134, Address: 0x3a0928, Func Offset: 0x3048
	// Line 8139, Address: 0x3a0930, Func Offset: 0x3050
	// Line 8140, Address: 0x3a0954, Func Offset: 0x3074
	// Line 8149, Address: 0x3a095c, Func Offset: 0x307c
	// Line 8150, Address: 0x3a0964, Func Offset: 0x3084
	// Line 8151, Address: 0x3a096c, Func Offset: 0x308c
	// Line 8157, Address: 0x3a0978, Func Offset: 0x3098
	// Line 8162, Address: 0x3a0980, Func Offset: 0x30a0
	// Line 8163, Address: 0x3a09a4, Func Offset: 0x30c4
	// Line 8172, Address: 0x3a09ac, Func Offset: 0x30cc
	// Line 8173, Address: 0x3a09b4, Func Offset: 0x30d4
	// Line 8179, Address: 0x3a09d0, Func Offset: 0x30f0
	// Line 8184, Address: 0x3a09d8, Func Offset: 0x30f8
	// Line 8185, Address: 0x3a09fc, Func Offset: 0x311c
	// Line 8208, Address: 0x3a0a04, Func Offset: 0x3124
	// Line 8209, Address: 0x3a0a28, Func Offset: 0x3148
	// Line 8212, Address: 0x3a0a30, Func Offset: 0x3150
	// Line 8213, Address: 0x3a0a54, Func Offset: 0x3174
	// Line 8216, Address: 0x3a0a5c, Func Offset: 0x317c
	// Line 8217, Address: 0x3a0a80, Func Offset: 0x31a0
	// Line 8220, Address: 0x3a0a88, Func Offset: 0x31a8
	// Line 8221, Address: 0x3a0aac, Func Offset: 0x31cc
	// Line 8244, Address: 0x3a0ab4, Func Offset: 0x31d4
	// Line 8245, Address: 0x3a0ad8, Func Offset: 0x31f8
	// Line 8248, Address: 0x3a0ae0, Func Offset: 0x3200
	// Line 8249, Address: 0x3a0b04, Func Offset: 0x3224
	// Line 8252, Address: 0x3a0b0c, Func Offset: 0x322c
	// Line 8253, Address: 0x3a0b30, Func Offset: 0x3250
	// Line 8256, Address: 0x3a0b38, Func Offset: 0x3258
	// Line 8257, Address: 0x3a0b5c, Func Offset: 0x327c
	// Line 8260, Address: 0x3a0b64, Func Offset: 0x3284
	// Line 8261, Address: 0x3a0b88, Func Offset: 0x32a8
	// Line 8265, Address: 0x3a0b90, Func Offset: 0x32b0
	// Line 8266, Address: 0x3a0b98, Func Offset: 0x32b8
	// Line 8267, Address: 0x3a0b9c, Func Offset: 0x32bc
	// Line 8269, Address: 0x3a0ba4, Func Offset: 0x32c4
	// Line 8272, Address: 0x3a0bac, Func Offset: 0x32cc
	// Line 8273, Address: 0x3a0bd0, Func Offset: 0x32f0
	// Line 8277, Address: 0x3a0bd8, Func Offset: 0x32f8
	// Line 8278, Address: 0x3a0be0, Func Offset: 0x3300
	// Line 8280, Address: 0x3a0be8, Func Offset: 0x3308
	// Line 8283, Address: 0x3a0bf0, Func Offset: 0x3310
	// Line 8284, Address: 0x3a0c14, Func Offset: 0x3334
	// Line 8343, Address: 0x3a0c1c, Func Offset: 0x333c
	// Line 8344, Address: 0x3a0c40, Func Offset: 0x3360
	// Line 8347, Address: 0x3a0c48, Func Offset: 0x3368
	// Line 8348, Address: 0x3a0c6c, Func Offset: 0x338c
	// Line 8352, Address: 0x3a0c74, Func Offset: 0x3394
	// Line 8353, Address: 0x3a0c7c, Func Offset: 0x339c
	// Line 8354, Address: 0x3a0c84, Func Offset: 0x33a4
	// Line 8358, Address: 0x3a0c8c, Func Offset: 0x33ac
	// Line 8365, Address: 0x3a0c94, Func Offset: 0x33b4
	// Line 8366, Address: 0x3a0c9c, Func Offset: 0x33bc
	// Line 8373, Address: 0x3a0ca4, Func Offset: 0x33c4
	// Line 8379, Address: 0x3a0cac, Func Offset: 0x33cc
	// Line 8380, Address: 0x3a0cb4, Func Offset: 0x33d4
	// Line 8381, Address: 0x3a0cbc, Func Offset: 0x33dc
	// Line 8385, Address: 0x3a0cc4, Func Offset: 0x33e4
	// Line 8392, Address: 0x3a0ccc, Func Offset: 0x33ec
	// Line 8393, Address: 0x3a0cd4, Func Offset: 0x33f4
	// Line 8400, Address: 0x3a0cdc, Func Offset: 0x33fc
	// Line 8406, Address: 0x3a0ce4, Func Offset: 0x3404
	// Line 8407, Address: 0x3a0cec, Func Offset: 0x340c
	// Line 8408, Address: 0x3a0cf4, Func Offset: 0x3414
	// Line 8412, Address: 0x3a0cfc, Func Offset: 0x341c
	// Line 8419, Address: 0x3a0d04, Func Offset: 0x3424
	// Line 8420, Address: 0x3a0d0c, Func Offset: 0x342c
	// Line 8427, Address: 0x3a0d14, Func Offset: 0x3434
	// Line 8433, Address: 0x3a0d1c, Func Offset: 0x343c
	// Line 8434, Address: 0x3a0d24, Func Offset: 0x3444
	// Line 8435, Address: 0x3a0d2c, Func Offset: 0x344c
	// Line 8439, Address: 0x3a0d34, Func Offset: 0x3454
	// Line 8446, Address: 0x3a0d3c, Func Offset: 0x345c
	// Line 8447, Address: 0x3a0d44, Func Offset: 0x3464
	// Line 8454, Address: 0x3a0d4c, Func Offset: 0x346c
	// Line 8460, Address: 0x3a0d54, Func Offset: 0x3474
	// Line 8461, Address: 0x3a0d5c, Func Offset: 0x347c
	// Line 8462, Address: 0x3a0d64, Func Offset: 0x3484
	// Line 8466, Address: 0x3a0d6c, Func Offset: 0x348c
	// Line 8473, Address: 0x3a0d74, Func Offset: 0x3494
	// Line 8474, Address: 0x3a0d7c, Func Offset: 0x349c
	// Line 8481, Address: 0x3a0d84, Func Offset: 0x34a4
	// Line 8487, Address: 0x3a0d8c, Func Offset: 0x34ac
	// Line 8488, Address: 0x3a0d94, Func Offset: 0x34b4
	// Line 8489, Address: 0x3a0d9c, Func Offset: 0x34bc
	// Line 8493, Address: 0x3a0da4, Func Offset: 0x34c4
	// Line 8500, Address: 0x3a0dac, Func Offset: 0x34cc
	// Line 8501, Address: 0x3a0db4, Func Offset: 0x34d4
	// Line 8508, Address: 0x3a0dbc, Func Offset: 0x34dc
	// Line 8516, Address: 0x3a0dc4, Func Offset: 0x34e4
	// Line 8517, Address: 0x3a0dcc, Func Offset: 0x34ec
	// Line 8518, Address: 0x3a0dd4, Func Offset: 0x34f4
	// Line 8528, Address: 0x3a0ddc, Func Offset: 0x34fc
	// Line 8529, Address: 0x3a0de4, Func Offset: 0x3504
	// Line 8536, Address: 0x3a0dec, Func Offset: 0x350c
	// Line 8537, Address: 0x3a0df4, Func Offset: 0x3514
	// Line 8544, Address: 0x3a0dfc, Func Offset: 0x351c
	// Line 8552, Address: 0x3a0e04, Func Offset: 0x3524
	// Line 8553, Address: 0x3a0e0c, Func Offset: 0x352c
	// Line 8554, Address: 0x3a0e14, Func Offset: 0x3534
	// Line 8565, Address: 0x3a0e1c, Func Offset: 0x353c
	// Line 8566, Address: 0x3a0e24, Func Offset: 0x3544
	// Line 8574, Address: 0x3a0e2c, Func Offset: 0x354c
	// Line 8575, Address: 0x3a0e34, Func Offset: 0x3554
	// Line 8582, Address: 0x3a0e3c, Func Offset: 0x355c
	// Line 8590, Address: 0x3a0e44, Func Offset: 0x3564
	// Line 8591, Address: 0x3a0e4c, Func Offset: 0x356c
	// Line 8592, Address: 0x3a0e54, Func Offset: 0x3574
	// Line 8603, Address: 0x3a0e5c, Func Offset: 0x357c
	// Line 8604, Address: 0x3a0e64, Func Offset: 0x3584
	// Line 8612, Address: 0x3a0e6c, Func Offset: 0x358c
	// Line 8613, Address: 0x3a0e78, Func Offset: 0x3598
	// Line 8620, Address: 0x3a0e80, Func Offset: 0x35a0
	// Line 8628, Address: 0x3a0e88, Func Offset: 0x35a8
	// Line 8629, Address: 0x3a0e90, Func Offset: 0x35b0
	// Line 8630, Address: 0x3a0e98, Func Offset: 0x35b8
	// Line 8641, Address: 0x3a0ea0, Func Offset: 0x35c0
	// Line 8642, Address: 0x3a0ea8, Func Offset: 0x35c8
	// Line 8650, Address: 0x3a0eb0, Func Offset: 0x35d0
	// Line 8651, Address: 0x3a0ebc, Func Offset: 0x35dc
	// Line 8658, Address: 0x3a0ec4, Func Offset: 0x35e4
	// Line 8666, Address: 0x3a0ecc, Func Offset: 0x35ec
	// Line 8667, Address: 0x3a0ed4, Func Offset: 0x35f4
	// Line 8668, Address: 0x3a0edc, Func Offset: 0x35fc
	// Line 8679, Address: 0x3a0ee4, Func Offset: 0x3604
	// Line 8680, Address: 0x3a0eec, Func Offset: 0x360c
	// Line 8688, Address: 0x3a0ef4, Func Offset: 0x3614
	// Line 8689, Address: 0x3a0f00, Func Offset: 0x3620
	// Line 8696, Address: 0x3a0f08, Func Offset: 0x3628
	// Line 8704, Address: 0x3a0f10, Func Offset: 0x3630
	// Line 8705, Address: 0x3a0f18, Func Offset: 0x3638
	// Line 8706, Address: 0x3a0f20, Func Offset: 0x3640
	// Line 8717, Address: 0x3a0f28, Func Offset: 0x3648
	// Line 8718, Address: 0x3a0f30, Func Offset: 0x3650
	// Line 8726, Address: 0x3a0f38, Func Offset: 0x3658
	// Line 8727, Address: 0x3a0f44, Func Offset: 0x3664
	// Line 8734, Address: 0x3a0f4c, Func Offset: 0x366c
	// Line 8742, Address: 0x3a0f54, Func Offset: 0x3674
	// Line 8743, Address: 0x3a0f5c, Func Offset: 0x367c
	// Line 8744, Address: 0x3a0f64, Func Offset: 0x3684
	// Line 8755, Address: 0x3a0f6c, Func Offset: 0x368c
	// Line 8756, Address: 0x3a0f74, Func Offset: 0x3694
	// Line 8763, Address: 0x3a0f7c, Func Offset: 0x369c
	// Line 8764, Address: 0x3a0f84, Func Offset: 0x36a4
	// Line 8771, Address: 0x3a0f8c, Func Offset: 0x36ac
	// Line 8779, Address: 0x3a0f94, Func Offset: 0x36b4
	// Line 8780, Address: 0x3a0f9c, Func Offset: 0x36bc
	// Line 8781, Address: 0x3a0fa4, Func Offset: 0x36c4
	// Line 8792, Address: 0x3a0fac, Func Offset: 0x36cc
	// Line 8793, Address: 0x3a0fb4, Func Offset: 0x36d4
	// Line 8801, Address: 0x3a0fbc, Func Offset: 0x36dc
	// Line 8802, Address: 0x3a0fc4, Func Offset: 0x36e4
	// Line 8809, Address: 0x3a0fcc, Func Offset: 0x36ec
	// Line 8816, Address: 0x3a0fd4, Func Offset: 0x36f4
	// Line 8817, Address: 0x3a0fdc, Func Offset: 0x36fc
	// Line 8818, Address: 0x3a0fe4, Func Offset: 0x3704
	// Line 8825, Address: 0x3a0fec, Func Offset: 0x370c
	// Line 8826, Address: 0x3a0ff4, Func Offset: 0x3714
	// Line 8832, Address: 0x3a0ffc, Func Offset: 0x371c
	// Line 8838, Address: 0x3a1004, Func Offset: 0x3724
	// Line 8849, Address: 0x3a1008, Func Offset: 0x3728
	// Line 8856, Address: 0x3a1014, Func Offset: 0x3734
	// Line 8882, Address: 0x3a101c, Func Offset: 0x373c
	// Line 8891, Address: 0x3a1020, Func Offset: 0x3740
	// Line 8892, Address: 0x3a1028, Func Offset: 0x3748
	// Line 8893, Address: 0x3a102c, Func Offset: 0x374c
	// Line 8898, Address: 0x3a1058, Func Offset: 0x3778
	// Line 8902, Address: 0x3a1080, Func Offset: 0x37a0
	// Line 8906, Address: 0x3a10a8, Func Offset: 0x37c8
	// Line 8910, Address: 0x3a10d0, Func Offset: 0x37f0
	// Line 8914, Address: 0x3a10d4, Func Offset: 0x37f4
	// Line 8916, Address: 0x3a10dc, Func Offset: 0x37fc
	// Line 8918, Address: 0x3a10f8, Func Offset: 0x3818
	// Line 8920, Address: 0x3a1100, Func Offset: 0x3820
	// Line 8921, Address: 0x3a1108, Func Offset: 0x3828
	// Line 8927, Address: 0x3a1140, Func Offset: 0x3860
	// Line 8934, Address: 0x3a1148, Func Offset: 0x3868
	// Line 8960, Address: 0x3a1150, Func Offset: 0x3870
	// Line 8969, Address: 0x3a1154, Func Offset: 0x3874
	// Line 8970, Address: 0x3a115c, Func Offset: 0x387c
	// Line 8971, Address: 0x3a1160, Func Offset: 0x3880
	// Line 8976, Address: 0x3a1188, Func Offset: 0x38a8
	// Line 8980, Address: 0x3a11b0, Func Offset: 0x38d0
	// Line 8984, Address: 0x3a11d8, Func Offset: 0x38f8
	// Line 8988, Address: 0x3a11dc, Func Offset: 0x38fc
	// Line 8994, Address: 0x3a11e4, Func Offset: 0x3904
	// Line 8997, Address: 0x3a11f0, Func Offset: 0x3910
	// Line 9001, Address: 0x3a1218, Func Offset: 0x3938
	// Line 9005, Address: 0x3a121c, Func Offset: 0x393c
	// Line 9008, Address: 0x3a1224, Func Offset: 0x3944
	// Line 9011, Address: 0x3a124c, Func Offset: 0x396c
	// Line 9014, Address: 0x3a1254, Func Offset: 0x3974
	// Line 9017, Address: 0x3a1258, Func Offset: 0x3978
	// Line 9021, Address: 0x3a1270, Func Offset: 0x3990
	// Line 9028, Address: 0x3a1278, Func Offset: 0x3998
	// Line 9044, Address: 0x3a1280, Func Offset: 0x39a0
	// Line 9045, Address: 0x3a1288, Func Offset: 0x39a8
	// Line 9046, Address: 0x3a1290, Func Offset: 0x39b0
	// Line 9049, Address: 0x3a1298, Func Offset: 0x39b8
	// Line 9050, Address: 0x3a12bc, Func Offset: 0x39dc
	// Line 9064, Address: 0x3a12c4, Func Offset: 0x39e4
	// Line 9065, Address: 0x3a12cc, Func Offset: 0x39ec
	// Line 9066, Address: 0x3a12d4, Func Offset: 0x39f4
	// Line 9069, Address: 0x3a12dc, Func Offset: 0x39fc
	// Line 9070, Address: 0x3a1300, Func Offset: 0x3a20
	// Line 9084, Address: 0x3a1308, Func Offset: 0x3a28
	// Line 9085, Address: 0x3a1310, Func Offset: 0x3a30
	// Line 9086, Address: 0x3a1318, Func Offset: 0x3a38
	// Line 9098, Address: 0x3a1320, Func Offset: 0x3a40
	// Line 9099, Address: 0x3a1328, Func Offset: 0x3a48
	// Line 9100, Address: 0x3a1330, Func Offset: 0x3a50
	// Line 9101, Address: 0x3a1338, Func Offset: 0x3a58
	// Line 9102, Address: 0x3a1348, Func Offset: 0x3a68
	// Line 9106, Address: 0x3a1358, Func Offset: 0x3a78
	// Line 9110, Address: 0x3a1364, Func Offset: 0x3a84
	// Line 9125, Address: 0x3a136c, Func Offset: 0x3a8c
	// Line 9132, Address: 0x3a1370, Func Offset: 0x3a90
	// Line 9137, Address: 0x3a1378, Func Offset: 0x3a98
	// Line 9138, Address: 0x3a139c, Func Offset: 0x3abc
	// Line 9141, Address: 0x3a13a4, Func Offset: 0x3ac4
	// Line 9142, Address: 0x3a13c8, Func Offset: 0x3ae8
	// Line 9152, Address: 0x3a13d0, Func Offset: 0x3af0
	// Line 9162, Address: 0x3a13d8, Func Offset: 0x3af8
	// Line 9165, Address: 0x3a13e0, Func Offset: 0x3b00
	// Line 9166, Address: 0x3a13e8, Func Offset: 0x3b08
	// Line 9167, Address: 0x3a13f0, Func Offset: 0x3b10
	// Line 9168, Address: 0x3a1408, Func Offset: 0x3b28
	// Line 9174, Address: 0x3a1410, Func Offset: 0x3b30
	// Line 9175, Address: 0x3a1428, Func Offset: 0x3b48
	// Line 9176, Address: 0x3a1434, Func Offset: 0x3b54
	// Line 9177, Address: 0x3a1440, Func Offset: 0x3b60
	// Line 9179, Address: 0x3a1448, Func Offset: 0x3b68
	// Line 9181, Address: 0x3a1454, Func Offset: 0x3b74
	// Line 9183, Address: 0x3a145c, Func Offset: 0x3b7c
	// Line 9184, Address: 0x3a1468, Func Offset: 0x3b88
	// Line 9185, Address: 0x3a1474, Func Offset: 0x3b94
	// Line 9187, Address: 0x3a147c, Func Offset: 0x3b9c
	// Line 9190, Address: 0x3a1488, Func Offset: 0x3ba8
	// Line 9194, Address: 0x3a1498, Func Offset: 0x3bb8
	// Line 9196, Address: 0x3a14a0, Func Offset: 0x3bc0
	// Line 9205, Address: 0x3a14a8, Func Offset: 0x3bc8
	// Line 9206, Address: 0x3a14ac, Func Offset: 0x3bcc
	// Line 9216, Address: 0x3a14b0, Func Offset: 0x3bd0
	// Line 9221, Address: 0x3a14b8, Func Offset: 0x3bd8
	// Line 9223, Address: 0x3a14e4, Func Offset: 0x3c04
	// Line 9227, Address: 0x3a14f4, Func Offset: 0x3c14
	// Line 9229, Address: 0x3a14fc, Func Offset: 0x3c1c
	// Line 9233, Address: 0x3a1504, Func Offset: 0x3c24
	// Line 9241, Address: 0x3a150c, Func Offset: 0x3c2c
	// Line 9243, Address: 0x3a1518, Func Offset: 0x3c38
	// Line 9246, Address: 0x3a1520, Func Offset: 0x3c40
	// Line 9247, Address: 0x3a1544, Func Offset: 0x3c64
	// Line 9255, Address: 0x3a154c, Func Offset: 0x3c6c
	// Line 9256, Address: 0x3a1550, Func Offset: 0x3c70
	// Line 9261, Address: 0x3a1554, Func Offset: 0x3c74
	// Line 9271, Address: 0x3a155c, Func Offset: 0x3c7c
	// Line 9272, Address: 0x3a1564, Func Offset: 0x3c84
	// Line 9274, Address: 0x3a156c, Func Offset: 0x3c8c
	// Line 9275, Address: 0x3a1574, Func Offset: 0x3c94
	// Line 9276, Address: 0x3a1584, Func Offset: 0x3ca4
	// Line 9281, Address: 0x3a1594, Func Offset: 0x3cb4
	// Line 9282, Address: 0x3a159c, Func Offset: 0x3cbc
	// Line 9283, Address: 0x3a15a4, Func Offset: 0x3cc4
	// Line 9284, Address: 0x3a15bc, Func Offset: 0x3cdc
	// Line 9287, Address: 0x3a15c4, Func Offset: 0x3ce4
	// Line 9294, Address: 0x3a15d4, Func Offset: 0x3cf4
	// Line 9295, Address: 0x3a15dc, Func Offset: 0x3cfc
	// Line 9304, Address: 0x3a15e4, Func Offset: 0x3d04
	// Line 9305, Address: 0x3a15e8, Func Offset: 0x3d08
	// Line 9306, Address: 0x3a15f4, Func Offset: 0x3d14
	// Line 9307, Address: 0x3a1600, Func Offset: 0x3d20
	// Line 9309, Address: 0x3a1608, Func Offset: 0x3d28
	// Line 9310, Address: 0x3a1624, Func Offset: 0x3d44
	// Line 9311, Address: 0x3a1638, Func Offset: 0x3d58
	// Line 9313, Address: 0x3a1640, Func Offset: 0x3d60
	// Line 9314, Address: 0x3a1644, Func Offset: 0x3d64
	// Line 9315, Address: 0x3a1648, Func Offset: 0x3d68
	// Line 9319, Address: 0x3a1658, Func Offset: 0x3d78
	// Line 9320, Address: 0x3a1664, Func Offset: 0x3d84
	// Line 9324, Address: 0x3a166c, Func Offset: 0x3d8c
	// Line 9332, Address: 0x3a1674, Func Offset: 0x3d94
	// Line 9337, Address: 0x3a1678, Func Offset: 0x3d98
	// Line 9347, Address: 0x3a1680, Func Offset: 0x3da0
	// Line 9352, Address: 0x3a1684, Func Offset: 0x3da4
	// Line 9364, Address: 0x3a168c, Func Offset: 0x3dac
	// Line 9368, Address: 0x3a1694, Func Offset: 0x3db4
	// Line 9376, Address: 0x3a16a8, Func Offset: 0x3dc8
	// Line 9377, Address: 0x3a16b0, Func Offset: 0x3dd0
	// Line 9378, Address: 0x3a16b8, Func Offset: 0x3dd8
	// Line 9379, Address: 0x3a16c0, Func Offset: 0x3de0
	// Line 9380, Address: 0x3a16c8, Func Offset: 0x3de8
	// Line 9381, Address: 0x3a16d0, Func Offset: 0x3df0
	// Line 9383, Address: 0x3a16d8, Func Offset: 0x3df8
	// Line 9385, Address: 0x3a16ec, Func Offset: 0x3e0c
	// Line 9387, Address: 0x3a16f4, Func Offset: 0x3e14
	// Line 9390, Address: 0x3a1718, Func Offset: 0x3e38
	// Line 9393, Address: 0x3a1720, Func Offset: 0x3e40
	// Line 9394, Address: 0x3a1744, Func Offset: 0x3e64
	// Line 9398, Address: 0x3a174c, Func Offset: 0x3e6c
	// Line 9399, Address: 0x3a1754, Func Offset: 0x3e74
	// Line 9400, Address: 0x3a175c, Func Offset: 0x3e7c
	// Line 9404, Address: 0x3a1764, Func Offset: 0x3e84
	// Line 9412, Address: 0x3a176c, Func Offset: 0x3e8c
	// Line 9413, Address: 0x3a1774, Func Offset: 0x3e94
	// Line 9416, Address: 0x3a177c, Func Offset: 0x3e9c
	// Line 9419, Address: 0x3a1784, Func Offset: 0x3ea4
	// Line 9420, Address: 0x3a17a8, Func Offset: 0x3ec8
	// Line 9423, Address: 0x3a17b0, Func Offset: 0x3ed0
	// Line 9424, Address: 0x3a17d4, Func Offset: 0x3ef4
	// Line 9427, Address: 0x3a17dc, Func Offset: 0x3efc
	// Line 9428, Address: 0x3a1800, Func Offset: 0x3f20
	// Line 9431, Address: 0x3a1808, Func Offset: 0x3f28
	// Line 9432, Address: 0x3a182c, Func Offset: 0x3f4c
	// Line 9435, Address: 0x3a1834, Func Offset: 0x3f54
	// Line 9436, Address: 0x3a1858, Func Offset: 0x3f78
	// Line 9439, Address: 0x3a1860, Func Offset: 0x3f80
	// Line 9440, Address: 0x3a1884, Func Offset: 0x3fa4
	// Line 9444, Address: 0x3a188c, Func Offset: 0x3fac
	// Line 9445, Address: 0x3a18b0, Func Offset: 0x3fd0
	// Line 9448, Address: 0x3a18b8, Func Offset: 0x3fd8
	// Line 9449, Address: 0x3a18dc, Func Offset: 0x3ffc
	// Line 9452, Address: 0x3a18e4, Func Offset: 0x4004
	// Line 9453, Address: 0x3a1908, Func Offset: 0x4028
	// Line 9456, Address: 0x3a1910, Func Offset: 0x4030
	// Line 9457, Address: 0x3a1934, Func Offset: 0x4054
	// Line 9460, Address: 0x3a193c, Func Offset: 0x405c
	// Line 9461, Address: 0x3a1960, Func Offset: 0x4080
	// Line 9464, Address: 0x3a1968, Func Offset: 0x4088
	// Line 9465, Address: 0x3a198c, Func Offset: 0x40ac
	// Line 9469, Address: 0x3a1994, Func Offset: 0x40b4
	// Line 9470, Address: 0x3a19b8, Func Offset: 0x40d8
	// Line 9473, Address: 0x3a19c0, Func Offset: 0x40e0
	// Line 9474, Address: 0x3a19e4, Func Offset: 0x4104
	// Line 9477, Address: 0x3a19ec, Func Offset: 0x410c
	// Line 9478, Address: 0x3a1a10, Func Offset: 0x4130
	// Line 9481, Address: 0x3a1a18, Func Offset: 0x4138
	// Line 9482, Address: 0x3a1a3c, Func Offset: 0x415c
	// Line 9485, Address: 0x3a1a44, Func Offset: 0x4164
	// Line 9486, Address: 0x3a1a68, Func Offset: 0x4188
	// Line 9489, Address: 0x3a1a70, Func Offset: 0x4190
	// Line 9490, Address: 0x3a1a94, Func Offset: 0x41b4
	// Line 9492, Address: 0x3a1a9c, Func Offset: 0x41bc
	// Line 9493, Address: 0x3a1ac0, Func Offset: 0x41e0
	// Line 9496, Address: 0x3a1ac8, Func Offset: 0x41e8
	// Line 9497, Address: 0x3a1aec, Func Offset: 0x420c
	// Line 9500, Address: 0x3a1af4, Func Offset: 0x4214
	// Line 9501, Address: 0x3a1b18, Func Offset: 0x4238
	// Line 9504, Address: 0x3a1b20, Func Offset: 0x4240
	// Line 9505, Address: 0x3a1b44, Func Offset: 0x4264
	// Line 9508, Address: 0x3a1b4c, Func Offset: 0x426c
	// Line 9509, Address: 0x3a1b70, Func Offset: 0x4290
	// Line 9512, Address: 0x3a1b78, Func Offset: 0x4298
	// Line 9513, Address: 0x3a1b9c, Func Offset: 0x42bc
	// Line 9516, Address: 0x3a1ba4, Func Offset: 0x42c4
	// Line 9517, Address: 0x3a1bc8, Func Offset: 0x42e8
	// Line 9520, Address: 0x3a1bd0, Func Offset: 0x42f0
	// Line 9521, Address: 0x3a1bf4, Func Offset: 0x4314
	// Line 9524, Address: 0x3a1bfc, Func Offset: 0x431c
	// Line 9525, Address: 0x3a1c20, Func Offset: 0x4340
	// Line 9528, Address: 0x3a1c28, Func Offset: 0x4348
	// Line 9529, Address: 0x3a1c4c, Func Offset: 0x436c
	// Line 9532, Address: 0x3a1c54, Func Offset: 0x4374
	// Line 9533, Address: 0x3a1c78, Func Offset: 0x4398
	// Line 9535, Address: 0x3a1c80, Func Offset: 0x43a0
	// Line 9536, Address: 0x3a1ca4, Func Offset: 0x43c4
	// Line 9539, Address: 0x3a1cac, Func Offset: 0x43cc
	// Line 9540, Address: 0x3a1cd0, Func Offset: 0x43f0
	// Line 9543, Address: 0x3a1cd8, Func Offset: 0x43f8
	// Line 9544, Address: 0x3a1cfc, Func Offset: 0x441c
	// Line 9547, Address: 0x3a1d04, Func Offset: 0x4424
	// Line 9548, Address: 0x3a1d28, Func Offset: 0x4448
	// Line 9551, Address: 0x3a1d30, Func Offset: 0x4450
	// Line 9552, Address: 0x3a1d54, Func Offset: 0x4474
	// Line 9555, Address: 0x3a1d5c, Func Offset: 0x447c
	// Line 9556, Address: 0x3a1d80, Func Offset: 0x44a0
	// Line 9559, Address: 0x3a1d88, Func Offset: 0x44a8
	// Line 9560, Address: 0x3a1dac, Func Offset: 0x44cc
	// Line 9563, Address: 0x3a1db4, Func Offset: 0x44d4
	// Line 9564, Address: 0x3a1dd8, Func Offset: 0x44f8
	// Line 9567, Address: 0x3a1de0, Func Offset: 0x4500
	// Line 9568, Address: 0x3a1e04, Func Offset: 0x4524
	// Line 9571, Address: 0x3a1e0c, Func Offset: 0x452c
	// Line 9572, Address: 0x3a1e30, Func Offset: 0x4550
	// Line 9575, Address: 0x3a1e38, Func Offset: 0x4558
	// Line 9576, Address: 0x3a1e5c, Func Offset: 0x457c
	// Line 9579, Address: 0x3a1e64, Func Offset: 0x4584
	// Line 9580, Address: 0x3a1e88, Func Offset: 0x45a8
	// Line 9583, Address: 0x3a1e90, Func Offset: 0x45b0
	// Line 9584, Address: 0x3a1eb4, Func Offset: 0x45d4
	// Line 9587, Address: 0x3a1ebc, Func Offset: 0x45dc
	// Line 9588, Address: 0x3a1ee0, Func Offset: 0x4600
	// Line 9591, Address: 0x3a1ee8, Func Offset: 0x4608
	// Line 9592, Address: 0x3a1f0c, Func Offset: 0x462c
	// Line 9595, Address: 0x3a1f14, Func Offset: 0x4634
	// Line 9596, Address: 0x3a1f38, Func Offset: 0x4658
	// Line 9599, Address: 0x3a1f40, Func Offset: 0x4660
	// Line 9600, Address: 0x3a1f64, Func Offset: 0x4684
	// Line 9603, Address: 0x3a1f6c, Func Offset: 0x468c
	// Line 9604, Address: 0x3a1f90, Func Offset: 0x46b0
	// Line 9607, Address: 0x3a1f98, Func Offset: 0x46b8
	// Line 9608, Address: 0x3a1fbc, Func Offset: 0x46dc
	// Line 9611, Address: 0x3a1fc4, Func Offset: 0x46e4
	// Line 9612, Address: 0x3a1fe8, Func Offset: 0x4708
	// Line 9615, Address: 0x3a1ff0, Func Offset: 0x4710
	// Line 9616, Address: 0x3a2014, Func Offset: 0x4734
	// Line 9619, Address: 0x3a201c, Func Offset: 0x473c
	// Line 9620, Address: 0x3a2040, Func Offset: 0x4760
	// Line 9623, Address: 0x3a2048, Func Offset: 0x4768
	// Line 9624, Address: 0x3a206c, Func Offset: 0x478c
	// Line 9627, Address: 0x3a2074, Func Offset: 0x4794
	// Line 9628, Address: 0x3a2098, Func Offset: 0x47b8
	// Line 9816, Address: 0x3a20a0, Func Offset: 0x47c0
	// Line 9820, Address: 0x3a20c4, Func Offset: 0x47e4
	// Line 9822, Address: 0x3a20c8, Func Offset: 0x47e8
	// Line 9825, Address: 0x3a20d4, Func Offset: 0x47f4
	// Line 9827, Address: 0x3a20e4, Func Offset: 0x4804
	// Line 9830, Address: 0x3a20f4, Func Offset: 0x4814
	// Line 9831, Address: 0x3a20fc, Func Offset: 0x481c
	// Line 9832, Address: 0x3a2108, Func Offset: 0x4828
	// Line 9837, Address: 0x3a2120, Func Offset: 0x4840
	// Line 9841, Address: 0x3a212c, Func Offset: 0x484c
	// Line 9842, Address: 0x3a2130, Func Offset: 0x4850
	// Line 9852, Address: 0x3a216c, Func Offset: 0x488c
	// Line 9854, Address: 0x3a2170, Func Offset: 0x4890
	// Line 9865, Address: 0x3a217c, Func Offset: 0x489c
	// Line 9867, Address: 0x3a2190, Func Offset: 0x48b0
	// Line 9868, Address: 0x3a21bc, Func Offset: 0x48dc
	// Line 9869, Address: 0x3a21c0, Func Offset: 0x48e0
	// Line 9870, Address: 0x3a21d0, Func Offset: 0x48f0
	// Line 9872, Address: 0x3a21d8, Func Offset: 0x48f8
	// Line 9873, Address: 0x3a21e8, Func Offset: 0x4908
	// Line 9875, Address: 0x3a21f0, Func Offset: 0x4910
	// Line 9876, Address: 0x3a2200, Func Offset: 0x4920
	// Line 9878, Address: 0x3a2208, Func Offset: 0x4928
	// Line 9879, Address: 0x3a2218, Func Offset: 0x4938
	// Line 9881, Address: 0x3a2220, Func Offset: 0x4940
	// Line 9882, Address: 0x3a2230, Func Offset: 0x4950
	// Line 9884, Address: 0x3a2238, Func Offset: 0x4958
	// Line 9885, Address: 0x3a2248, Func Offset: 0x4968
	// Line 9887, Address: 0x3a2250, Func Offset: 0x4970
	// Line 9888, Address: 0x3a2260, Func Offset: 0x4980
	// Line 9890, Address: 0x3a2268, Func Offset: 0x4988
	// Line 9891, Address: 0x3a2278, Func Offset: 0x4998
	// Line 9893, Address: 0x3a2280, Func Offset: 0x49a0
	// Line 9900, Address: 0x3a2290, Func Offset: 0x49b0
	// Line 9901, Address: 0x3a22a0, Func Offset: 0x49c0
	// Line 9902, Address: 0x3a22ac, Func Offset: 0x49cc
	// Line 9903, Address: 0x3a2310, Func Offset: 0x4a30
	// Line 9905, Address: 0x3a232c, Func Offset: 0x4a4c
	// Line 9944, Address: 0x3a2338, Func Offset: 0x4a58
	// Line 9945, Address: 0x3a2340, Func Offset: 0x4a60
	// Line 9953, Address: 0x3a234c, Func Offset: 0x4a6c
	// Line 9954, Address: 0x3a2354, Func Offset: 0x4a74
	// Line 9955, Address: 0x3a2358, Func Offset: 0x4a78
	// Func End, Address: 0x3a238c, Func Offset: 0x4aac
}

// InterpreterRegisterExternalFunction__FiPCcPv
// Start address: 0x3a2390
void InterpreterRegisterExternalFunction(int32 funcType, int8* name, void* func)
{
	// Line 4541, Address: 0x3a2390, Func Offset: 0
	// Line 4544, Address: 0x3a23b0, Func Offset: 0x20
	// Line 4546, Address: 0x3a23c0, Func Offset: 0x30
	// Line 4551, Address: 0x3a23d4, Func Offset: 0x44
	// Line 4552, Address: 0x3a23f4, Func Offset: 0x64
	// Line 4553, Address: 0x3a2414, Func Offset: 0x84
	// Line 4557, Address: 0x3a2434, Func Offset: 0xa4
	// Line 4558, Address: 0x3a2440, Func Offset: 0xb0
	// Func End, Address: 0x3a245c, Func Offset: 0xcc
}

// InterpreterDoExternalCallIII_I__FiiUiUiiiiPi
// Start address: 0x3a2460
int32 InterpreterDoExternalCallIII_I(int32 threadFlag, int32 execFlag, uint32 pauseFlags, uint32 methodPtr, int32 parm1, int32 parm2, int32 parm3, int32* retVal)
{
	int32 status;
	uint32 threadIndex;
	ExecutionThread* thisThread;
	JExecutableMethod* theMethod;
	// Line 3977, Address: 0x3a2460, Func Offset: 0
	// Line 3992, Address: 0x3a24ac, Func Offset: 0x4c
	// Line 3996, Address: 0x3a24dc, Func Offset: 0x7c
	// Line 4021, Address: 0x3a24f0, Func Offset: 0x90
	// Line 4022, Address: 0x3a250c, Func Offset: 0xac
	// Line 4029, Address: 0x3a2510, Func Offset: 0xb0
	// Line 4030, Address: 0x3a251c, Func Offset: 0xbc
	// Line 4031, Address: 0x3a2520, Func Offset: 0xc0
	// Line 4033, Address: 0x3a2528, Func Offset: 0xc8
	// Line 4034, Address: 0x3a2534, Func Offset: 0xd4
	// Line 4035, Address: 0x3a2540, Func Offset: 0xe0
	// Line 4038, Address: 0x3a2548, Func Offset: 0xe8
	// Line 4043, Address: 0x3a255c, Func Offset: 0xfc
	// Line 4047, Address: 0x3a2570, Func Offset: 0x110
	// Line 4050, Address: 0x3a2574, Func Offset: 0x114
	// Line 4051, Address: 0x3a2584, Func Offset: 0x124
	// Line 4052, Address: 0x3a2598, Func Offset: 0x138
	// Line 4053, Address: 0x3a25ac, Func Offset: 0x14c
	// Line 4054, Address: 0x3a25c0, Func Offset: 0x160
	// Line 4058, Address: 0x3a25cc, Func Offset: 0x16c
	// Line 4066, Address: 0x3a25e4, Func Offset: 0x184
	// Line 4067, Address: 0x3a2618, Func Offset: 0x1b8
	// Line 4068, Address: 0x3a2634, Func Offset: 0x1d4
	// Line 4069, Address: 0x3a2640, Func Offset: 0x1e0
	// Line 4085, Address: 0x3a270c, Func Offset: 0x2ac
	// Line 4086, Address: 0x3a2710, Func Offset: 0x2b0
	// Func End, Address: 0x3a2744, Func Offset: 0x2e4
}

// InterpreterDoExternalCallI_I__FiiUiUiiPi
// Start address: 0x3a2750
int32 InterpreterDoExternalCallI_I(int32 threadFlag, int32 execFlag, uint32 pauseFlags, uint32 methodPtr, int32 parm1, int32* retVal)
{
	int32 status;
	uint32 threadIndex;
	ExecutionThread* thisThread;
	JExecutableMethod* theMethod;
	// Line 3829, Address: 0x3a2750, Func Offset: 0
	// Line 3844, Address: 0x3a2790, Func Offset: 0x40
	// Line 3848, Address: 0x3a27c0, Func Offset: 0x70
	// Line 3873, Address: 0x3a27d4, Func Offset: 0x84
	// Line 3874, Address: 0x3a27f0, Func Offset: 0xa0
	// Line 3881, Address: 0x3a27f4, Func Offset: 0xa4
	// Line 3882, Address: 0x3a2800, Func Offset: 0xb0
	// Line 3883, Address: 0x3a2804, Func Offset: 0xb4
	// Line 3885, Address: 0x3a280c, Func Offset: 0xbc
	// Line 3886, Address: 0x3a2818, Func Offset: 0xc8
	// Line 3887, Address: 0x3a2824, Func Offset: 0xd4
	// Line 3890, Address: 0x3a282c, Func Offset: 0xdc
	// Line 3895, Address: 0x3a2840, Func Offset: 0xf0
	// Line 3899, Address: 0x3a2854, Func Offset: 0x104
	// Line 3902, Address: 0x3a2858, Func Offset: 0x108
	// Line 3903, Address: 0x3a2868, Func Offset: 0x118
	// Line 3904, Address: 0x3a287c, Func Offset: 0x12c
	// Line 3908, Address: 0x3a2888, Func Offset: 0x138
	// Line 3916, Address: 0x3a28a0, Func Offset: 0x150
	// Line 3917, Address: 0x3a28d4, Func Offset: 0x184
	// Line 3918, Address: 0x3a28ec, Func Offset: 0x19c
	// Line 3919, Address: 0x3a28f8, Func Offset: 0x1a8
	// Line 3935, Address: 0x3a29c4, Func Offset: 0x274
	// Line 3936, Address: 0x3a29c8, Func Offset: 0x278
	// Func End, Address: 0x3a29f8, Func Offset: 0x2a8
}

// InterpreterDoExternalCallIIIIIIIIIII_I__FiiUiUiiiiiiiiiiiiPi
// Start address: 0x3a2a00
int32 InterpreterDoExternalCallIIIIIIIIIII_I(int32 threadFlag, int32 execFlag, uint32 pauseFlags, uint32 methodPtr, int32 parm1, int32 parm2, int32 parm3, int32 parm4, int32 parm5, int32 parm6, int32 parm7, int32 parm8, int32 parm9, int32 parm10, int32 parm11, int32* retVal)
{
	int32 status;
	uint32 threadIndex;
	ExecutionThread* thisThread;
	JExecutableMethod* theMethod;
	// Line 3529, Address: 0x3a2a00, Func Offset: 0
	// Line 3544, Address: 0x3a2a4c, Func Offset: 0x4c
	// Line 3548, Address: 0x3a2a7c, Func Offset: 0x7c
	// Line 3573, Address: 0x3a2a90, Func Offset: 0x90
	// Line 3574, Address: 0x3a2aac, Func Offset: 0xac
	// Line 3581, Address: 0x3a2ab0, Func Offset: 0xb0
	// Line 3582, Address: 0x3a2abc, Func Offset: 0xbc
	// Line 3583, Address: 0x3a2ac0, Func Offset: 0xc0
	// Line 3585, Address: 0x3a2ac8, Func Offset: 0xc8
	// Line 3586, Address: 0x3a2ad4, Func Offset: 0xd4
	// Line 3587, Address: 0x3a2ae0, Func Offset: 0xe0
	// Line 3590, Address: 0x3a2ae8, Func Offset: 0xe8
	// Line 3595, Address: 0x3a2afc, Func Offset: 0xfc
	// Line 3599, Address: 0x3a2b10, Func Offset: 0x110
	// Line 3602, Address: 0x3a2b14, Func Offset: 0x114
	// Line 3603, Address: 0x3a2b24, Func Offset: 0x124
	// Line 3604, Address: 0x3a2b38, Func Offset: 0x138
	// Line 3605, Address: 0x3a2b4c, Func Offset: 0x14c
	// Line 3606, Address: 0x3a2b60, Func Offset: 0x160
	// Line 3607, Address: 0x3a2b78, Func Offset: 0x178
	// Line 3608, Address: 0x3a2b90, Func Offset: 0x190
	// Line 3609, Address: 0x3a2ba8, Func Offset: 0x1a8
	// Line 3610, Address: 0x3a2bc0, Func Offset: 0x1c0
	// Line 3611, Address: 0x3a2bd8, Func Offset: 0x1d8
	// Line 3612, Address: 0x3a2bf0, Func Offset: 0x1f0
	// Line 3613, Address: 0x3a2c08, Func Offset: 0x208
	// Line 3614, Address: 0x3a2c20, Func Offset: 0x220
	// Line 3618, Address: 0x3a2c2c, Func Offset: 0x22c
	// Line 3626, Address: 0x3a2c44, Func Offset: 0x244
	// Line 3627, Address: 0x3a2c78, Func Offset: 0x278
	// Line 3628, Address: 0x3a2c84, Func Offset: 0x284
	// Line 3629, Address: 0x3a2c90, Func Offset: 0x290
	// Line 3631, Address: 0x3a2c98, Func Offset: 0x298
	// Line 3632, Address: 0x3a2cb4, Func Offset: 0x2b4
	// Line 3648, Address: 0x3a2d7c, Func Offset: 0x37c
	// Line 3649, Address: 0x3a2d80, Func Offset: 0x380
	// Func End, Address: 0x3a2db4, Func Offset: 0x3b4
}

// InterpreterDoExternalCallPIII__FiiUiUiiiii
// Start address: 0x3a2dc0
int32 InterpreterDoExternalCallPIII(int32 threadFlag, int32 execFlag, uint32 pauseFlags, uint32 methodPtr, int32 parm1, int32 parm2, int32 parm3, int32 parm4)
{
	uint32 threadIndex;
	ExecutionThread* thisThread;
	JExecutableMethod* theMethod;
	// Line 3073, Address: 0x3a2dc0, Func Offset: 0
	// Line 3088, Address: 0x3a2e0c, Func Offset: 0x4c
	// Line 3092, Address: 0x3a2e3c, Func Offset: 0x7c
	// Line 3117, Address: 0x3a2e50, Func Offset: 0x90
	// Line 3118, Address: 0x3a2e6c, Func Offset: 0xac
	// Line 3125, Address: 0x3a2e70, Func Offset: 0xb0
	// Line 3126, Address: 0x3a2e7c, Func Offset: 0xbc
	// Line 3127, Address: 0x3a2e80, Func Offset: 0xc0
	// Line 3129, Address: 0x3a2e88, Func Offset: 0xc8
	// Line 3130, Address: 0x3a2e94, Func Offset: 0xd4
	// Line 3131, Address: 0x3a2ea0, Func Offset: 0xe0
	// Line 3134, Address: 0x3a2ea8, Func Offset: 0xe8
	// Line 3139, Address: 0x3a2ebc, Func Offset: 0xfc
	// Line 3143, Address: 0x3a2ed0, Func Offset: 0x110
	// Line 3146, Address: 0x3a2ed4, Func Offset: 0x114
	// Line 3147, Address: 0x3a2ee4, Func Offset: 0x124
	// Line 3148, Address: 0x3a2ef8, Func Offset: 0x138
	// Line 3149, Address: 0x3a2f0c, Func Offset: 0x14c
	// Line 3150, Address: 0x3a2f20, Func Offset: 0x160
	// Line 3151, Address: 0x3a2f38, Func Offset: 0x178
	// Line 3155, Address: 0x3a2f44, Func Offset: 0x184
	// Line 3162, Address: 0x3a2f5c, Func Offset: 0x19c
	// Line 3163, Address: 0x3a2f9c, Func Offset: 0x1dc
	// Line 3179, Address: 0x3a3064, Func Offset: 0x2a4
	// Line 3180, Address: 0x3a3068, Func Offset: 0x2a8
	// Func End, Address: 0x3a309c, Func Offset: 0x2dc
}

// InterpreterDoExternalCallIIII__FiiUiUiiiii
// Start address: 0x3a30a0
int32 InterpreterDoExternalCallIIII(int32 threadFlag, int32 execFlag, uint32 pauseFlags, uint32 methodPtr, int32 parm1, int32 parm2, int32 parm3, int32 parm4)
{
	uint32 threadIndex;
	ExecutionThread* thisThread;
	JExecutableMethod* theMethod;
	// Line 2929, Address: 0x3a30a0, Func Offset: 0
	// Line 2944, Address: 0x3a30ec, Func Offset: 0x4c
	// Line 2948, Address: 0x3a311c, Func Offset: 0x7c
	// Line 2973, Address: 0x3a3130, Func Offset: 0x90
	// Line 2974, Address: 0x3a314c, Func Offset: 0xac
	// Line 2981, Address: 0x3a3150, Func Offset: 0xb0
	// Line 2982, Address: 0x3a315c, Func Offset: 0xbc
	// Line 2983, Address: 0x3a3160, Func Offset: 0xc0
	// Line 2985, Address: 0x3a3168, Func Offset: 0xc8
	// Line 2986, Address: 0x3a3174, Func Offset: 0xd4
	// Line 2987, Address: 0x3a3180, Func Offset: 0xe0
	// Line 2990, Address: 0x3a3188, Func Offset: 0xe8
	// Line 2995, Address: 0x3a319c, Func Offset: 0xfc
	// Line 2999, Address: 0x3a31b0, Func Offset: 0x110
	// Line 3002, Address: 0x3a31b4, Func Offset: 0x114
	// Line 3003, Address: 0x3a31c4, Func Offset: 0x124
	// Line 3004, Address: 0x3a31d8, Func Offset: 0x138
	// Line 3005, Address: 0x3a31ec, Func Offset: 0x14c
	// Line 3006, Address: 0x3a3200, Func Offset: 0x160
	// Line 3007, Address: 0x3a3218, Func Offset: 0x178
	// Line 3011, Address: 0x3a3224, Func Offset: 0x184
	// Line 3018, Address: 0x3a323c, Func Offset: 0x19c
	// Line 3019, Address: 0x3a327c, Func Offset: 0x1dc
	// Line 3035, Address: 0x3a3344, Func Offset: 0x2a4
	// Line 3036, Address: 0x3a3348, Func Offset: 0x2a8
	// Func End, Address: 0x3a337c, Func Offset: 0x2dc
}

// InterpreterDoExternalCallII__FiiUiUiii
// Start address: 0x3a3380
int32 InterpreterDoExternalCallII(int32 threadFlag, int32 execFlag, uint32 pauseFlags, uint32 methodPtr, int32 parm1, int32 parm2)
{
	uint32 threadIndex;
	ExecutionThread* thisThread;
	JExecutableMethod* theMethod;
	// Line 2641, Address: 0x3a3380, Func Offset: 0
	// Line 2657, Address: 0x3a33c0, Func Offset: 0x40
	// Line 2661, Address: 0x3a33f0, Func Offset: 0x70
	// Line 2687, Address: 0x3a3404, Func Offset: 0x84
	// Line 2688, Address: 0x3a3420, Func Offset: 0xa0
	// Line 2695, Address: 0x3a3424, Func Offset: 0xa4
	// Line 2696, Address: 0x3a3430, Func Offset: 0xb0
	// Line 2697, Address: 0x3a3434, Func Offset: 0xb4
	// Line 2699, Address: 0x3a343c, Func Offset: 0xbc
	// Line 2700, Address: 0x3a3448, Func Offset: 0xc8
	// Line 2701, Address: 0x3a3454, Func Offset: 0xd4
	// Line 2704, Address: 0x3a345c, Func Offset: 0xdc
	// Line 2709, Address: 0x3a3470, Func Offset: 0xf0
	// Line 2713, Address: 0x3a3484, Func Offset: 0x104
	// Line 2716, Address: 0x3a3488, Func Offset: 0x108
	// Line 2717, Address: 0x3a3498, Func Offset: 0x118
	// Line 2718, Address: 0x3a34ac, Func Offset: 0x12c
	// Line 2719, Address: 0x3a34c0, Func Offset: 0x140
	// Line 2723, Address: 0x3a34cc, Func Offset: 0x14c
	// Line 2730, Address: 0x3a34e4, Func Offset: 0x164
	// Line 2731, Address: 0x3a3524, Func Offset: 0x1a4
	// Line 2747, Address: 0x3a35ec, Func Offset: 0x26c
	// Line 2748, Address: 0x3a35f0, Func Offset: 0x270
	// Func End, Address: 0x3a3620, Func Offset: 0x2a0
}

// InterpreterDoExternalCallI__FiiUiUii
// Start address: 0x3a3620
int32 InterpreterDoExternalCallI(int32 threadFlag, int32 execFlag, uint32 pauseFlags, uint32 methodPtr, int32 parm1)
{
	uint32 threadIndex;
	ExecutionThread* thisThread;
	JExecutableMethod* theMethod;
	// Line 2501, Address: 0x3a3620, Func Offset: 0
	// Line 2516, Address: 0x3a3658, Func Offset: 0x38
	// Line 2520, Address: 0x3a3688, Func Offset: 0x68
	// Line 2544, Address: 0x3a369c, Func Offset: 0x7c
	// Line 2545, Address: 0x3a36b8, Func Offset: 0x98
	// Line 2552, Address: 0x3a36bc, Func Offset: 0x9c
	// Line 2553, Address: 0x3a36c8, Func Offset: 0xa8
	// Line 2554, Address: 0x3a36cc, Func Offset: 0xac
	// Line 2556, Address: 0x3a36d4, Func Offset: 0xb4
	// Line 2557, Address: 0x3a36e0, Func Offset: 0xc0
	// Line 2558, Address: 0x3a36ec, Func Offset: 0xcc
	// Line 2561, Address: 0x3a36f4, Func Offset: 0xd4
	// Line 2566, Address: 0x3a3708, Func Offset: 0xe8
	// Line 2570, Address: 0x3a371c, Func Offset: 0xfc
	// Line 2573, Address: 0x3a3720, Func Offset: 0x100
	// Line 2574, Address: 0x3a3730, Func Offset: 0x110
	// Line 2575, Address: 0x3a3744, Func Offset: 0x124
	// Line 2579, Address: 0x3a3750, Func Offset: 0x130
	// Line 2586, Address: 0x3a3768, Func Offset: 0x148
	// Line 2587, Address: 0x3a37a8, Func Offset: 0x188
	// Line 2603, Address: 0x3a3874, Func Offset: 0x254
	// Line 2604, Address: 0x3a3878, Func Offset: 0x258
	// Func End, Address: 0x3a38a4, Func Offset: 0x284
}

// InterpreterDoExternalCall__FiiUiUi
// Start address: 0x3a38b0
int32 InterpreterDoExternalCall(int32 threadFlag, int32 execFlag, uint32 pauseFlags, uint32 methodPtr)
{
	uint32 threadIndex;
	ExecutionThread* thisThread;
	JExecutableMethod* theMethod;
	// Line 2365, Address: 0x3a38b0, Func Offset: 0
	// Line 2380, Address: 0x3a38e0, Func Offset: 0x30
	// Line 2383, Address: 0x3a3910, Func Offset: 0x60
	// Line 2406, Address: 0x3a3924, Func Offset: 0x74
	// Line 2407, Address: 0x3a3940, Func Offset: 0x90
	// Line 2414, Address: 0x3a3944, Func Offset: 0x94
	// Line 2415, Address: 0x3a3950, Func Offset: 0xa0
	// Line 2416, Address: 0x3a3954, Func Offset: 0xa4
	// Line 2418, Address: 0x3a395c, Func Offset: 0xac
	// Line 2419, Address: 0x3a3968, Func Offset: 0xb8
	// Line 2420, Address: 0x3a3974, Func Offset: 0xc4
	// Line 2423, Address: 0x3a397c, Func Offset: 0xcc
	// Line 2428, Address: 0x3a3990, Func Offset: 0xe0
	// Line 2432, Address: 0x3a39a4, Func Offset: 0xf4
	// Line 2435, Address: 0x3a39a8, Func Offset: 0xf8
	// Line 2436, Address: 0x3a39b8, Func Offset: 0x108
	// Line 2440, Address: 0x3a39c4, Func Offset: 0x114
	// Line 2447, Address: 0x3a39dc, Func Offset: 0x12c
	// Line 2448, Address: 0x3a3a1c, Func Offset: 0x16c
	// Line 2464, Address: 0x3a3ae4, Func Offset: 0x234
	// Line 2465, Address: 0x3a3ae8, Func Offset: 0x238
	// Func End, Address: 0x3a3b10, Func Offset: 0x260
}

// InterpreterFindCall__FPCcPCcPCc
// Start address: 0x3a3b10
uint32 InterpreterFindCall(int8* className, int8* methodName, int8* descriptor)
{
	JExecutableMethod* theMethod;
	JExecutableClass* theClass;
	// Line 2295, Address: 0x3a3b10, Func Offset: 0
	// Line 2301, Address: 0x3a3b34, Func Offset: 0x24
	// Line 2303, Address: 0x3a3bb8, Func Offset: 0xa8
	// Line 2305, Address: 0x3a3bc0, Func Offset: 0xb0
	// Line 2311, Address: 0x3a3bd4, Func Offset: 0xc4
	// Line 2313, Address: 0x3a3bec, Func Offset: 0xdc
	// Line 2315, Address: 0x3a3bf4, Func Offset: 0xe4
	// Line 2321, Address: 0x3a3c08, Func Offset: 0xf8
	// Line 2323, Address: 0x3a3c18, Func Offset: 0x108
	// Line 2329, Address: 0x3a3c2c, Func Offset: 0x11c
	// Line 2330, Address: 0x3a3c30, Func Offset: 0x120
	// Func End, Address: 0x3a3c50, Func Offset: 0x140
}

// InterpreterProcessEvent__Fiii
// Start address: 0x3a3c50
uint32 InterpreterProcessEvent(int32 objectType, int32 objectId, int32 eventType)
{
	int32* eventList;
	int32 j;
	int32* eventList;
	int32 j;
	uint32 returnCount;
	int32 i;
	// Line 1464, Address: 0x3a3c50, Func Offset: 0
	// Line 1466, Address: 0x3a3c78, Func Offset: 0x28
	// Line 1473, Address: 0x3a3c7c, Func Offset: 0x2c
	// Line 1474, Address: 0x3a3c88, Func Offset: 0x38
	// Line 1475, Address: 0x3a3cc8, Func Offset: 0x78
	// Line 1478, Address: 0x3a3d08, Func Offset: 0xb8
	// Line 1482, Address: 0x3a3da8, Func Offset: 0x158
	// Line 1488, Address: 0x3a3dc4, Func Offset: 0x174
	// Line 1490, Address: 0x3a3dc8, Func Offset: 0x178
	// Line 1492, Address: 0x3a3dd0, Func Offset: 0x180
	// Line 1496, Address: 0x3a3e50, Func Offset: 0x200
	// Line 1501, Address: 0x3a3e68, Func Offset: 0x218
	// Line 1502, Address: 0x3a3e74, Func Offset: 0x224
	// Line 1503, Address: 0x3a3e88, Func Offset: 0x238
	// Line 1504, Address: 0x3a3ea4, Func Offset: 0x254
	// Line 1505, Address: 0x3a3ea8, Func Offset: 0x258
	// Line 1507, Address: 0x3a3eb0, Func Offset: 0x260
	// Line 1510, Address: 0x3a3ec8, Func Offset: 0x278
	// Line 1512, Address: 0x3a3ed0, Func Offset: 0x280
	// Line 1514, Address: 0x3a3f08, Func Offset: 0x2b8
	// Line 1517, Address: 0x3a3fa8, Func Offset: 0x358
	// Line 1519, Address: 0x3a3fc0, Func Offset: 0x370
	// Line 1521, Address: 0x3a3fc8, Func Offset: 0x378
	// Line 1525, Address: 0x3a4048, Func Offset: 0x3f8
	// Line 1530, Address: 0x3a4060, Func Offset: 0x410
	// Line 1531, Address: 0x3a406c, Func Offset: 0x41c
	// Line 1532, Address: 0x3a4080, Func Offset: 0x430
	// Line 1533, Address: 0x3a4098, Func Offset: 0x448
	// Line 1535, Address: 0x3a40a0, Func Offset: 0x450
	// Line 1542, Address: 0x3a40b8, Func Offset: 0x468
	// Line 1546, Address: 0x3a40d0, Func Offset: 0x480
	// Line 1547, Address: 0x3a40d4, Func Offset: 0x484
	// Func End, Address: 0x3a40f8, Func Offset: 0x4a8
}

// InterpreterExecuteThreads__FUi
// Start address: 0x3a4100
void InterpreterExecuteThreads(uint32 pauseMask)
{
	uint32 currentTime;
	int32 threadStatus;
	int32 i;
	// Line 1278, Address: 0x3a4100, Func Offset: 0
	// Line 1309, Address: 0x3a4118, Func Offset: 0x18
	// Line 1314, Address: 0x3a4124, Func Offset: 0x24
	// Line 1319, Address: 0x3a412c, Func Offset: 0x2c
	// Line 1343, Address: 0x3a4138, Func Offset: 0x38
	// Line 1349, Address: 0x3a4158, Func Offset: 0x58
	// Line 1358, Address: 0x3a417c, Func Offset: 0x7c
	// Line 1359, Address: 0x3a419c, Func Offset: 0x9c
	// Line 1360, Address: 0x3a41c0, Func Offset: 0xc0
	// Line 1361, Address: 0x3a41e8, Func Offset: 0xe8
	// Line 1362, Address: 0x3a4204, Func Offset: 0x104
	// Line 1368, Address: 0x3a420c, Func Offset: 0x10c
	// Line 1369, Address: 0x3a4230, Func Offset: 0x130
	// Line 1370, Address: 0x3a4254, Func Offset: 0x154
	// Line 1392, Address: 0x3a4270, Func Offset: 0x170
	// Line 1397, Address: 0x3a42f8, Func Offset: 0x1f8
	// Line 1398, Address: 0x3a4304, Func Offset: 0x204
	// Line 1399, Address: 0x3a4324, Func Offset: 0x224
	// Line 1404, Address: 0x3a433c, Func Offset: 0x23c
	// Line 1406, Address: 0x3a4344, Func Offset: 0x244
	// Line 1407, Address: 0x3a4350, Func Offset: 0x250
	// Line 1411, Address: 0x3a441c, Func Offset: 0x31c
	// Line 1413, Address: 0x3a4424, Func Offset: 0x324
	// Line 1414, Address: 0x3a4430, Func Offset: 0x330
	// Line 1425, Address: 0x3a44fc, Func Offset: 0x3fc
	// Line 1441, Address: 0x3a4518, Func Offset: 0x418
	// Func End, Address: 0x3a4534, Func Offset: 0x434
}

// InterpreterDestroyAllThreads__Fv
// Start address: 0x3a4540
void InterpreterDestroyAllThreads()
{
	int32 i;
	// Line 1213, Address: 0x3a4540, Func Offset: 0
	// Line 1216, Address: 0x3a454c, Func Offset: 0xc
	// Line 1220, Address: 0x3a4558, Func Offset: 0x18
	// Line 1225, Address: 0x3a4578, Func Offset: 0x38
	// Line 1226, Address: 0x3a4644, Func Offset: 0x104
	// Line 1227, Address: 0x3a4660, Func Offset: 0x120
	// Func End, Address: 0x3a4674, Func Offset: 0x134
}

// InterpreterDestroyThreadSearch__Fiii
// Start address: 0x3a4680
void InterpreterDestroyThreadSearch(int32 objectType, int32 objectId, int32 eventType)
{
	int32 i;
	// Line 1178, Address: 0x3a4680, Func Offset: 0
	// Line 1181, Address: 0x3a46a4, Func Offset: 0x24
	// Line 1182, Address: 0x3a46b0, Func Offset: 0x30
	// Line 1183, Address: 0x3a46f0, Func Offset: 0x70
	// Line 1187, Address: 0x3a47a0, Func Offset: 0x120
	// Line 1189, Address: 0x3a486c, Func Offset: 0x1ec
	// Line 1190, Address: 0x3a4870, Func Offset: 0x1f0
	// Line 1191, Address: 0x3a4888, Func Offset: 0x208
	// Func End, Address: 0x3a48a8, Func Offset: 0x228
}

// InterpreterAllocateThread__Fv
// Start address: 0x3a48b0
uint32 InterpreterAllocateThread()
{
	int32 theThread;
	int32 i;
	// Line 1070, Address: 0x3a48b0, Func Offset: 0
	// Line 1072, Address: 0x3a48bc, Func Offset: 0xc
	// Line 1076, Address: 0x3a48c0, Func Offset: 0x10
	// Line 1077, Address: 0x3a48d4, Func Offset: 0x24
	// Line 1082, Address: 0x3a48e8, Func Offset: 0x38
	// Line 1083, Address: 0x3a48f4, Func Offset: 0x44
	// Line 1084, Address: 0x3a4914, Func Offset: 0x64
	// Line 1085, Address: 0x3a4918, Func Offset: 0x68
	// Line 1087, Address: 0x3a4920, Func Offset: 0x70
	// Line 1089, Address: 0x3a4938, Func Offset: 0x88
	// Line 1090, Address: 0x3a4944, Func Offset: 0x94
	// Line 1094, Address: 0x3a4954, Func Offset: 0xa4
	// Line 1095, Address: 0x3a4970, Func Offset: 0xc0
	// Line 1096, Address: 0x3a4988, Func Offset: 0xd8
	// Line 1097, Address: 0x3a49a0, Func Offset: 0xf0
	// Line 1100, Address: 0x3a49b8, Func Offset: 0x108
	// Line 1103, Address: 0x3a49cc, Func Offset: 0x11c
	// Line 1104, Address: 0x3a49d0, Func Offset: 0x120
	// Func End, Address: 0x3a49e4, Func Offset: 0x134
}

// InterpreterInit__Fi
// Start address: 0x3a49f0
void InterpreterInit(int32 maxPools)
{
	int32 j;
	int32 i;
	// Line 256, Address: 0x3a49f0, Func Offset: 0
	// Line 262, Address: 0x3a49f8, Func Offset: 0x8
	// Line 266, Address: 0x3a49fc, Func Offset: 0xc
	// Line 271, Address: 0x3a4a00, Func Offset: 0x10
	// Line 272, Address: 0x3a4a08, Func Offset: 0x18
	// Line 322, Address: 0x3a4a14, Func Offset: 0x24
	// Line 336, Address: 0x3a4a1c, Func Offset: 0x2c
	// Line 337, Address: 0x3a4a48, Func Offset: 0x58
	// Line 338, Address: 0x3a4a74, Func Offset: 0x84
	// Line 342, Address: 0x3a4aa0, Func Offset: 0xb0
	// Line 344, Address: 0x3a4ad0, Func Offset: 0xe0
	// Line 345, Address: 0x3a4b00, Func Offset: 0x110
	// Line 346, Address: 0x3a4b2c, Func Offset: 0x13c
	// Line 350, Address: 0x3a4b58, Func Offset: 0x168
	// Line 351, Address: 0x3a4b64, Func Offset: 0x174
	// Line 352, Address: 0x3a4b80, Func Offset: 0x190
	// Line 353, Address: 0x3a4b9c, Func Offset: 0x1ac
	// Line 354, Address: 0x3a4bbc, Func Offset: 0x1cc
	// Line 356, Address: 0x3a4bcc, Func Offset: 0x1dc
	// Line 357, Address: 0x3a4bd8, Func Offset: 0x1e8
	// Line 358, Address: 0x3a4bec, Func Offset: 0x1fc
	// Line 363, Address: 0x3a4c00, Func Offset: 0x210
	// Line 364, Address: 0x3a4c08, Func Offset: 0x218
	// Func End, Address: 0x3a4c18, Func Offset: 0x228
}

