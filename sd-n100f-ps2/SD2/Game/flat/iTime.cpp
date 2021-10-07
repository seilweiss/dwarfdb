typedef struct prof_info;

typedef int32(*type)(int32);


struct prof_info
{
	uint32 addr;
	uint32 len;
	uint32 count;
};

int32 tim0_handler_id;
long32 tim0_high;
int32 sProfLevel;
int8* sProfMap;
int8** sProfFunc;
int8** sProfFile;
uint32* sProfBin;
uint32 sProfCount;
uint32 pvsyncaddr;
prof_info* pip;
uint32 pil;
uint32 app_top;
uint32 app_end;
uint32 app_hits;
uint32 kernel_hits;
uint32 vsync_hits;
uint32 scene_id;
uint32 prof_enable;
uint32* profSampleBuffer;
uint32* profSampleStatic;
uint32 profSampleSize;
int32 initted;
float32 sGameTime;
int32(*TimerHandler)(int32);

void iFuncProfileFuncs();
void iFuncProfileDump();
void iInstrProfileDump();
void iFuncProfileParse();
void iProfileClear(uint32 sceneID);
void iTimeSetGame(float32 time);
void iTimeGameAdvance(float32 elapsed);
float32 iTimeDiffSec(long32 t0, long32 t1);
float32 iTimeDiffSec(long32 time);
long32 iTimeGet();
int32 TimerHandler(int32 ca);
void iTimeExit();
void iTimeInit();

// iFuncProfileFuncs__Fii
// Start address: 0x126360
void iFuncProfileFuncs()
{
	// Line 866, Address: 0x126360, Func Offset: 0
	// Func End, Address: 0x126368, Func Offset: 0x8
}

// iFuncProfileDump__Fv
// Start address: 0x126370
void iFuncProfileDump()
{
	// Line 647, Address: 0x126370, Func Offset: 0
	// Func End, Address: 0x126378, Func Offset: 0x8
}

// iInstrProfileDump__FPc
// Start address: 0x126380
void iInstrProfileDump()
{
	// Line 607, Address: 0x126380, Func Offset: 0
	// Func End, Address: 0x126388, Func Offset: 0x8
}

// iFuncProfileParse__FPci
// Start address: 0x126390
void iFuncProfileParse()
{
	// Line 569, Address: 0x126390, Func Offset: 0
	// Func End, Address: 0x126398, Func Offset: 0x8
}

// iProfileClear__FUi
// Start address: 0x1263a0
void iProfileClear(uint32 sceneID)
{
	int32 i;
	// Line 364, Address: 0x1263a0, Func Offset: 0
	// Line 366, Address: 0x1263b0, Func Offset: 0x10
	// Line 365, Address: 0x1263b4, Func Offset: 0x14
	// Line 366, Address: 0x1263b8, Func Offset: 0x18
	// Line 367, Address: 0x1263c0, Func Offset: 0x20
	// Line 369, Address: 0x1263cc, Func Offset: 0x2c
	// Line 370, Address: 0x1263d8, Func Offset: 0x38
	// Line 371, Address: 0x1263dc, Func Offset: 0x3c
	// Line 370, Address: 0x1263e0, Func Offset: 0x40
	// Line 371, Address: 0x1263ec, Func Offset: 0x4c
	// Line 372, Address: 0x126400, Func Offset: 0x60
	// Line 373, Address: 0x126410, Func Offset: 0x70
	// Line 378, Address: 0x126414, Func Offset: 0x74
	// Line 375, Address: 0x126420, Func Offset: 0x80
	// Line 376, Address: 0x126424, Func Offset: 0x84
	// Line 377, Address: 0x126428, Func Offset: 0x88
	// Line 378, Address: 0x12642c, Func Offset: 0x8c
	// Line 379, Address: 0x126430, Func Offset: 0x90
	// Func End, Address: 0x126440, Func Offset: 0xa0
}

// iTimeSetGame__Ff
// Start address: 0x126440
void iTimeSetGame(float32 time)
{
	// Line 345, Address: 0x126440, Func Offset: 0
	// Func End, Address: 0x126448, Func Offset: 0x8
}

// iTimeGameAdvance__Ff
// Start address: 0x126450
void iTimeGameAdvance(float32 elapsed)
{
	// Line 338, Address: 0x126450, Func Offset: 0
	// Line 339, Address: 0x126458, Func Offset: 0x8
	// Func End, Address: 0x126460, Func Offset: 0x10
}

// iTimeDiffSec__Fll
// Start address: 0x126460
float32 iTimeDiffSec(long32 t0, long32 t1)
{
	// Line 320, Address: 0x126460, Func Offset: 0
	// Line 321, Address: 0x126468, Func Offset: 0x8
	// Line 322, Address: 0x12647c, Func Offset: 0x1c
	// Line 321, Address: 0x126480, Func Offset: 0x20
	// Line 322, Address: 0x126484, Func Offset: 0x24
	// Func End, Address: 0x12648c, Func Offset: 0x2c
}

// iTimeDiffSec__Fl
// Start address: 0x126490
float32 iTimeDiffSec(long32 time)
{
	// Line 316, Address: 0x126490, Func Offset: 0
	// Line 317, Address: 0x126498, Func Offset: 0x8
	// Line 316, Address: 0x12649c, Func Offset: 0xc
	// Line 317, Address: 0x1264a0, Func Offset: 0x10
	// Line 318, Address: 0x1264b4, Func Offset: 0x24
	// Func End, Address: 0x1264c4, Func Offset: 0x34
}

// iTimeGet__Fv
// Start address: 0x1264d0
long32 iTimeGet()
{
	long32 low1;
	long32 high1;
	long32 low0;
	long32 high0;
	// Line 295, Address: 0x1264d0, Func Offset: 0
	// Line 294, Address: 0x1264d4, Func Offset: 0x4
	// Line 295, Address: 0x1264d8, Func Offset: 0x8
	// Line 296, Address: 0x1264dc, Func Offset: 0xc
	// Line 297, Address: 0x1264e0, Func Offset: 0x10
	// Line 300, Address: 0x1264e4, Func Offset: 0x14
	// Line 304, Address: 0x126500, Func Offset: 0x30
	// Func End, Address: 0x126508, Func Offset: 0x38
}

// TimerHandler__Fi
// Start address: 0x126510
int32 TimerHandler(int32 ca)
{
	// Line 150, Address: 0x126510, Func Offset: 0
	// Line 153, Address: 0x126530, Func Offset: 0x20
	// Line 156, Address: 0x126534, Func Offset: 0x24
	// Line 153, Address: 0x126538, Func Offset: 0x28
	// Line 156, Address: 0x126540, Func Offset: 0x30
	// Line 160, Address: 0x12654c, Func Offset: 0x3c
	// Line 163, Address: 0x126554, Func Offset: 0x44
	// Func End, Address: 0x12655c, Func Offset: 0x4c
}

// iTimeExit__Fv
// Start address: 0x126560
void iTimeExit()
{
	// Line 133, Address: 0x126560, Func Offset: 0
	// Line 135, Address: 0x126568, Func Offset: 0x8
	// Line 136, Address: 0x126570, Func Offset: 0x10
	// Line 137, Address: 0x12657c, Func Offset: 0x1c
	// Func End, Address: 0x126588, Func Offset: 0x28
}

// iTimeInit__Fv
// Start address: 0x126590
void iTimeInit()
{
	// Line 87, Address: 0x126590, Func Offset: 0
	// Line 98, Address: 0x126594, Func Offset: 0x4
	// Line 87, Address: 0x126598, Func Offset: 0x8
	// Line 98, Address: 0x12659c, Func Offset: 0xc
	// Line 101, Address: 0x1265b0, Func Offset: 0x20
	// Line 102, Address: 0x1265b4, Func Offset: 0x24
	// Line 103, Address: 0x1265bc, Func Offset: 0x2c
	// Line 104, Address: 0x1265c4, Func Offset: 0x34
	// Line 120, Address: 0x1265cc, Func Offset: 0x3c
	// Line 122, Address: 0x1265d8, Func Offset: 0x48
	// Line 123, Address: 0x1265e0, Func Offset: 0x50
	// Func End, Address: 0x1265ec, Func Offset: 0x5c
}

