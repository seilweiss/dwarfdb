typedef struct JExecutableField;
typedef struct JExecutableMethod;
typedef struct JExecutableClass;
typedef struct ExecutionFrame;
typedef struct _class;
typedef struct JExecutableDescriptor;



struct JExecutableField
{
	_class value;
	int16 resolvedOffset;
	uint16 resolvedWords;
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

struct _class
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

JExecutableDescriptor gExecutableDescriptor;

void ExecutionFrameInit(ExecutionFrame* inst, JExecutableMethod* meth, uint32* lvp, uint32* opp);

// ExecutionFrameInit__FP14ExecutionFrameP17JExecutableMethodPUiPUi
// Start address: 0x39d240
void ExecutionFrameInit(ExecutionFrame* inst, JExecutableMethod* meth, uint32* lvp, uint32* opp)
{
	// Line 41, Address: 0x39d240, Func Offset: 0
	// Line 42, Address: 0x39d244, Func Offset: 0x4
	// Line 43, Address: 0x39d248, Func Offset: 0x8
	// Line 49, Address: 0x39d24c, Func Offset: 0xc
	// Line 50, Address: 0x39d260, Func Offset: 0x20
	// Line 53, Address: 0x39d268, Func Offset: 0x28
	// Line 54, Address: 0x39d26c, Func Offset: 0x2c
	// Line 55, Address: 0x39d270, Func Offset: 0x30
	// Line 56, Address: 0x39d274, Func Offset: 0x34
	// Line 57, Address: 0x39d278, Func Offset: 0x38
	// Func End, Address: 0x39d280, Func Offset: 0x40
}

