typedef struct _class;
typedef struct JExecutableDescriptor;
typedef struct JExecutableMethod;
typedef struct JExecutableClass;
typedef struct JExecutableField;


typedef uint8 type_0[37888];
typedef uint8 type_1[2560];
typedef int8 type_2[256];
typedef int32 type_3[11];

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

struct JExecutableField
{
	_class value;
	int16 resolvedOffset;
	uint16 resolvedWords;
};

uint8 MemoryPoolDataPool[37888];
uint32 MemoryPoolAllocated;
uint8 MemoryPoolLevelPool[2560];
uint32 MemoryPoolLevelAllocated;
JExecutableDescriptor gExecutableDescriptor;
int32 jumpBuffer[11];
int32 jumpBuffer[11];

void* MemoryPoolLevelAllocate(int32 unitCount, int32 unitSize);
void* MemoryPoolAllocate(int32 unitCount, int32 unitSize);

// MemoryPoolLevelAllocate__Fii
// Start address: 0x3a4c20
void* MemoryPoolLevelAllocate(int32 unitCount, int32 unitSize)
{
	void* retVal;
	// Line 108, Address: 0x3a4c20, Func Offset: 0
	// Line 114, Address: 0x3a4c38, Func Offset: 0x18
	// Line 116, Address: 0x3a4c54, Func Offset: 0x34
	// Line 121, Address: 0x3a4c68, Func Offset: 0x48
	// Line 125, Address: 0x3a4c8c, Func Offset: 0x6c
	// Line 126, Address: 0x3a4ca0, Func Offset: 0x80
	// Line 130, Address: 0x3a4cb4, Func Offset: 0x94
	// Line 131, Address: 0x3a4cc8, Func Offset: 0xa8
	// Line 136, Address: 0x3a4cdc, Func Offset: 0xbc
	// Line 137, Address: 0x3a4cec, Func Offset: 0xcc
	// Line 143, Address: 0x3a4d08, Func Offset: 0xe8
	// Func End, Address: 0x3a4d20, Func Offset: 0x100
}

// MemoryPoolAllocate__Fii
// Start address: 0x3a4d20
void* MemoryPoolAllocate(int32 unitCount, int32 unitSize)
{
	void* retVal;
	// Line 52, Address: 0x3a4d20, Func Offset: 0
	// Line 58, Address: 0x3a4d38, Func Offset: 0x18
	// Line 60, Address: 0x3a4d58, Func Offset: 0x38
	// Line 65, Address: 0x3a4d6c, Func Offset: 0x4c
	// Line 69, Address: 0x3a4d90, Func Offset: 0x70
	// Line 70, Address: 0x3a4da4, Func Offset: 0x84
	// Line 74, Address: 0x3a4db8, Func Offset: 0x98
	// Line 75, Address: 0x3a4dcc, Func Offset: 0xac
	// Line 80, Address: 0x3a4de0, Func Offset: 0xc0
	// Line 81, Address: 0x3a4df0, Func Offset: 0xd0
	// Line 87, Address: 0x3a4e0c, Func Offset: 0xec
	// Func End, Address: 0x3a4e24, Func Offset: 0x104
}

