typedef struct JExecutableMethod;
typedef struct ExecutionFrame;
typedef struct ExecutionThread;


typedef uint32 type_0[480];
typedef uint32 type_1[480];
typedef int32 type_2[11];
typedef ExecutionFrame type_3[20];
typedef int32 type_4[120];
typedef int32 type_5[120];

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

uint32 ExecutionThreadLvPool[480];
uint32 ExecutionThreadOpStackPool[480];
int32 lvPoolMap[120];
int32 lvLastFree;
int32 opPoolMap[120];
int32 opLastFree;
int32 currentLvCount;
int32 currentOpCount;
int32 maxLvCount;
int32 maxOpCount;
int32 jumpBuffer[11];
int32 jumpBuffer[11];
int32 jumpBuffer[11];
int32 jumpBuffer[11];

ExecutionFrame* ExecutionThreadPopFrame(ExecutionThread* inst);
ExecutionFrame* ExecutionThreadPushFrame(ExecutionThread* inst, JExecutableMethod* meth);
void ExecutionThreadStop(ExecutionThread* inst);
void ExecutionThreadStart(ExecutionThread* inst);
int32 getOpSlot(int32 size);
int32 getLvSlot(int32 size);
void ExecutionThreadInitPools();

// ExecutionThreadPopFrame__FP15ExecutionThread
// Start address: 0x3a5550
ExecutionFrame* ExecutionThreadPopFrame(ExecutionThread* inst)
{
	// Line 407, Address: 0x3a5550, Func Offset: 0
	// Line 411, Address: 0x3a5560, Func Offset: 0x10
	// Line 413, Address: 0x3a556c, Func Offset: 0x1c
	// Line 419, Address: 0x3a5580, Func Offset: 0x30
	// Line 420, Address: 0x3a558c, Func Offset: 0x3c
	// Line 421, Address: 0x3a55f0, Func Offset: 0xa0
	// Line 426, Address: 0x3a5654, Func Offset: 0x104
	// Line 431, Address: 0x3a567c, Func Offset: 0x12c
	// Func End, Address: 0x3a5690, Func Offset: 0x140
}

// ExecutionThreadPushFrame__FP15ExecutionThreadP17JExecutableMethod
// Start address: 0x3a5690
ExecutionFrame* ExecutionThreadPushFrame(ExecutionThread* inst, JExecutableMethod* meth)
{
	int32 lvIndex;
	int32 opIndex;
	// Line 361, Address: 0x3a5690, Func Offset: 0
	// Line 365, Address: 0x3a56b0, Func Offset: 0x20
	// Line 367, Address: 0x3a56c0, Func Offset: 0x30
	// Line 368, Address: 0x3a56c8, Func Offset: 0x38
	// Line 378, Address: 0x3a56dc, Func Offset: 0x4c
	// Line 379, Address: 0x3a56ec, Func Offset: 0x5c
	// Line 380, Address: 0x3a56fc, Func Offset: 0x6c
	// Line 381, Address: 0x3a5734, Func Offset: 0xa4
	// Line 382, Address: 0x3a5744, Func Offset: 0xb4
	// Line 385, Address: 0x3a5754, Func Offset: 0xc4
	// Line 386, Address: 0x3a5768, Func Offset: 0xd8
	// Func End, Address: 0x3a5788, Func Offset: 0xf8
}

// ExecutionThreadStop__FP15ExecutionThread
// Start address: 0x3a5790
void ExecutionThreadStop(ExecutionThread* inst)
{
	// Line 315, Address: 0x3a5790, Func Offset: 0
	// Line 316, Address: 0x3a5794, Func Offset: 0x4
	// Func End, Address: 0x3a579c, Func Offset: 0xc
}

// ExecutionThreadStart__FP15ExecutionThread
// Start address: 0x3a57a0
void ExecutionThreadStart(ExecutionThread* inst)
{
	// Line 292, Address: 0x3a57a0, Func Offset: 0
	// Line 293, Address: 0x3a57a8, Func Offset: 0x8
	// Func End, Address: 0x3a57b0, Func Offset: 0x10
}

// getOpSlot__Fi
// Start address: 0x3a57b0
int32 getOpSlot(int32 size)
{
	int32 returnIndex;
	int32 entriesNeeded;
	int32 j;
	int32 i;
	// Line 182, Address: 0x3a57b0, Func Offset: 0
	// Line 190, Address: 0x3a57b8, Func Offset: 0x8
	// Line 191, Address: 0x3a57c0, Func Offset: 0x10
	// Line 195, Address: 0x3a57cc, Func Offset: 0x1c
	// Line 196, Address: 0x3a57d4, Func Offset: 0x24
	// Line 197, Address: 0x3a57dc, Func Offset: 0x2c
	// Line 202, Address: 0x3a57e0, Func Offset: 0x30
	// Line 203, Address: 0x3a57ec, Func Offset: 0x3c
	// Line 204, Address: 0x3a5800, Func Offset: 0x50
	// Line 212, Address: 0x3a5808, Func Offset: 0x58
	// Line 213, Address: 0x3a5814, Func Offset: 0x64
	// Line 214, Address: 0x3a5830, Func Offset: 0x80
	// Line 215, Address: 0x3a5834, Func Offset: 0x84
	// Line 216, Address: 0x3a5840, Func Offset: 0x90
	// Line 219, Address: 0x3a5860, Func Offset: 0xb0
	// Line 220, Address: 0x3a5864, Func Offset: 0xb4
	// Line 222, Address: 0x3a586c, Func Offset: 0xbc
	// Line 223, Address: 0x3a5880, Func Offset: 0xd0
	// Line 226, Address: 0x3a5888, Func Offset: 0xd8
	// Line 227, Address: 0x3a5894, Func Offset: 0xe4
	// Line 230, Address: 0x3a589c, Func Offset: 0xec
	// Line 231, Address: 0x3a58b0, Func Offset: 0x100
	// Line 232, Address: 0x3a58b8, Func Offset: 0x108
	// Line 236, Address: 0x3a58c0, Func Offset: 0x110
	// Line 238, Address: 0x3a58dc, Func Offset: 0x12c
	// Line 246, Address: 0x3a58f4, Func Offset: 0x144
	// Line 249, Address: 0x3a5908, Func Offset: 0x158
	// Line 250, Address: 0x3a590c, Func Offset: 0x15c
	// Func End, Address: 0x3a591c, Func Offset: 0x16c
}

// getLvSlot__Fi
// Start address: 0x3a5920
int32 getLvSlot(int32 size)
{
	int32 returnIndex;
	int32 entriesNeeded;
	int32 j;
	int32 i;
	// Line 84, Address: 0x3a5920, Func Offset: 0
	// Line 92, Address: 0x3a5928, Func Offset: 0x8
	// Line 93, Address: 0x3a5930, Func Offset: 0x10
	// Line 98, Address: 0x3a593c, Func Offset: 0x1c
	// Line 99, Address: 0x3a5944, Func Offset: 0x24
	// Line 100, Address: 0x3a594c, Func Offset: 0x2c
	// Line 105, Address: 0x3a5950, Func Offset: 0x30
	// Line 106, Address: 0x3a595c, Func Offset: 0x3c
	// Line 107, Address: 0x3a5970, Func Offset: 0x50
	// Line 115, Address: 0x3a5978, Func Offset: 0x58
	// Line 116, Address: 0x3a5984, Func Offset: 0x64
	// Line 117, Address: 0x3a59a0, Func Offset: 0x80
	// Line 118, Address: 0x3a59a4, Func Offset: 0x84
	// Line 119, Address: 0x3a59b0, Func Offset: 0x90
	// Line 122, Address: 0x3a59d0, Func Offset: 0xb0
	// Line 123, Address: 0x3a59d4, Func Offset: 0xb4
	// Line 125, Address: 0x3a59dc, Func Offset: 0xbc
	// Line 126, Address: 0x3a59f0, Func Offset: 0xd0
	// Line 129, Address: 0x3a59f8, Func Offset: 0xd8
	// Line 130, Address: 0x3a5a04, Func Offset: 0xe4
	// Line 133, Address: 0x3a5a0c, Func Offset: 0xec
	// Line 134, Address: 0x3a5a20, Func Offset: 0x100
	// Line 135, Address: 0x3a5a2c, Func Offset: 0x10c
	// Line 136, Address: 0x3a5a34, Func Offset: 0x114
	// Line 139, Address: 0x3a5a38, Func Offset: 0x118
	// Line 143, Address: 0x3a5a40, Func Offset: 0x120
	// Line 145, Address: 0x3a5a5c, Func Offset: 0x13c
	// Line 153, Address: 0x3a5a74, Func Offset: 0x154
	// Line 154, Address: 0x3a5a7c, Func Offset: 0x15c
	// Line 157, Address: 0x3a5a90, Func Offset: 0x170
	// Line 158, Address: 0x3a5a94, Func Offset: 0x174
	// Func End, Address: 0x3a5aa4, Func Offset: 0x184
}

// ExecutionThreadInitPools__Fv
// Start address: 0x3a5ab0
void ExecutionThreadInitPools()
{
	// Line 76, Address: 0x3a5ab0, Func Offset: 0
	// Line 77, Address: 0x3a5ab8, Func Offset: 0x8
	// Line 78, Address: 0x3a5ad0, Func Offset: 0x20
	// Line 79, Address: 0x3a5ae8, Func Offset: 0x38
	// Line 80, Address: 0x3a5aec, Func Offset: 0x3c
	// Line 81, Address: 0x3a5af0, Func Offset: 0x40
	// Func End, Address: 0x3a5b00, Func Offset: 0x50
}

