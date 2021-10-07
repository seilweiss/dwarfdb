typedef struct JExecutableClass;
typedef struct JExecutableMethod;
typedef struct _class;
typedef struct JExecutableField;
typedef struct JExecutableDescriptor;



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

struct _class
{
	uint32 word1;
};

struct JExecutableField
{
	_class value;
	int16 resolvedOffset;
	uint16 resolvedWords;
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

int32 JExecutableClassGetParentDataWords(JExecutableClass* inst);
int32 JExecutableClassGetDataWords(JExecutableClass* inst);
JExecutableMethod* JExecutableClassResolveMethodByStringIndex(JExecutableClass* inst, uint32 nameIndex, uint32 descrIndex);
JExecutableMethod* JExecutableClassResolveMethod(JExecutableClass* inst, int8* name, int8* descr);

// JExecutableClassGetParentDataWords__FP16JExecutableClass
// Start address: 0x3a4e30
int32 JExecutableClassGetParentDataWords(JExecutableClass* inst)
{
	JExecutableClass* file;
	// Line 324, Address: 0x3a4e30, Func Offset: 0
	// Line 327, Address: 0x3a4e4c, Func Offset: 0x1c
	// Line 328, Address: 0x3a4e58, Func Offset: 0x28
	// Line 333, Address: 0x3a4e64, Func Offset: 0x34
	// Line 334, Address: 0x3a4e70, Func Offset: 0x40
	// Line 335, Address: 0x3a4e74, Func Offset: 0x44
	// Line 342, Address: 0x3a4e80, Func Offset: 0x50
	// Line 343, Address: 0x3a4e9c, Func Offset: 0x6c
	// Line 348, Address: 0x3a4f7c, Func Offset: 0x14c
	// Line 349, Address: 0x3a4f84, Func Offset: 0x154
	// Func End, Address: 0x3a4fa4, Func Offset: 0x174
}

// JExecutableClassGetDataWords__FP16JExecutableClass
// Start address: 0x3a4fb0
int32 JExecutableClassGetDataWords(JExecutableClass* inst)
{
	// Line 301, Address: 0x3a4fb0, Func Offset: 0
	// Line 302, Address: 0x3a4fc8, Func Offset: 0x18
	// Line 303, Address: 0x3a50a4, Func Offset: 0xf4
	// Func End, Address: 0x3a50c0, Func Offset: 0x110
}

// JExecutableClassResolveMethodByStringIndex__FP16JExecutableClassUiUi
// Start address: 0x3a50c0
JExecutableMethod* JExecutableClassResolveMethodByStringIndex(JExecutableClass* inst, uint32 nameIndex, uint32 descrIndex)
{
	int32 i;
	JExecutableMethod* executableMethods;
	// Line 258, Address: 0x3a50c0, Func Offset: 0
	// Line 261, Address: 0x3a50c8, Func Offset: 0x8
	// Line 263, Address: 0x3a50e4, Func Offset: 0x24
	// Line 264, Address: 0x3a50f0, Func Offset: 0x30
	// Line 267, Address: 0x3a5128, Func Offset: 0x68
	// Line 269, Address: 0x3a5140, Func Offset: 0x80
	// Line 274, Address: 0x3a5150, Func Offset: 0x90
	// Line 275, Address: 0x3a515c, Func Offset: 0x9c
	// Line 280, Address: 0x3a5244, Func Offset: 0x184
	// Line 281, Address: 0x3a5248, Func Offset: 0x188
	// Func End, Address: 0x3a5258, Func Offset: 0x198
}

// JExecutableClassResolveMethod__FP16JExecutableClassPCcPCc
// Start address: 0x3a5260
JExecutableMethod* JExecutableClassResolveMethod(JExecutableClass* inst, int8* name, int8* descr)
{
	int32 i;
	JExecutableMethod* executableMethods;
	// Line 205, Address: 0x3a5260, Func Offset: 0
	// Line 208, Address: 0x3a5288, Func Offset: 0x28
	// Line 210, Address: 0x3a52a4, Func Offset: 0x44
	// Line 211, Address: 0x3a52b0, Func Offset: 0x50
	// Line 212, Address: 0x3a52b8, Func Offset: 0x58
	// Line 213, Address: 0x3a52ec, Func Offset: 0x8c
	// Line 217, Address: 0x3a5304, Func Offset: 0xa4
	// Line 219, Address: 0x3a536c, Func Offset: 0x10c
	// Line 222, Address: 0x3a5384, Func Offset: 0x124
	// Line 227, Address: 0x3a5398, Func Offset: 0x138
	// Line 228, Address: 0x3a53a4, Func Offset: 0x144
	// Line 233, Address: 0x3a551c, Func Offset: 0x2bc
	// Line 234, Address: 0x3a5520, Func Offset: 0x2c0
	// Func End, Address: 0x3a5544, Func Offset: 0x2e4
}

