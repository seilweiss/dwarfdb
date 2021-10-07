typedef struct JExecutableClass;
typedef struct _class;
typedef struct JExecutableMethod;
typedef struct JExecutableDescriptor;
typedef struct JExecutableField;


typedef int32 type[11];

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

struct _class
{
	uint32 word1;
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

struct JExecutableField
{
	_class value;
	int16 resolvedOffset;
	uint16 resolvedWords;
};

JExecutableDescriptor gExecutableDescriptor;
int32 jumpBuffer[11];


