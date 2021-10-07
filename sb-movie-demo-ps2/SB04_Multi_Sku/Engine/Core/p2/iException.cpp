typedef struct _sceGpChain;
typedef enum HISMemoryType;
typedef struct sceGsZbuf;
typedef struct tGS_DISPLAY2;
typedef struct sceGsTex0;
typedef struct sceGsTrxdir;
typedef struct _sceDmaTag;
typedef struct sceGsPabe;
typedef struct HISDebugState;
typedef struct sceGsTrxreg;
typedef struct _sceGpAdc;
typedef struct sceGpLoadImage;
typedef struct sceGsAlpha;
typedef struct sceGsFrame;
typedef struct tGS_DISPFB2;
typedef struct sceGsDrawEnv1;
typedef enum HISMainThreadState;
typedef struct sceGpAlphaEnv;
typedef struct sceGsTex1;
typedef struct sceGsDBuff;
typedef struct _sceGpReg;
typedef struct sceGsTrxpos;
typedef struct sceGsDthe;
typedef struct sceGifTag;
typedef struct sceGsClear;
typedef struct tGS_SMODE2;
typedef struct sceGsFog;
typedef struct sceGsColclamp;
typedef struct sceGsTest;
typedef struct sceGsBitbltbuf;
typedef enum HISStreamThreadState;
typedef struct sceGsTexflush;
typedef struct tGS_PMODE;
typedef struct sceGsPrmodecont;
typedef enum HISRequestThreadState;
typedef struct xSysFontTbl;
typedef struct sceGsSt;
typedef struct sceGpPrimR;
typedef struct _sceGifPackAd;
typedef struct sceGsScissor;
typedef struct sceGsXyz;
typedef struct sceGsUv;
typedef struct sceGsFba;
typedef struct Request;
typedef struct sceGsDispEnv;
typedef struct sceGpTexEnv;
typedef struct sceGsRgbaq;
typedef struct sceGsClamp;
typedef struct sceGsXyoffset;
typedef struct tGS_BGCOLOR;
typedef struct sceGsTexa;
typedef struct sceGpTextureArg;
typedef struct sceGsXyzf;
typedef struct sceGsPrim;

typedef void(*type_2)(int32, uint32);

typedef Request type_0[16];
typedef uint32 type_1[2];
typedef int8* type_3[0];
typedef uint32 type_4[4096];
typedef int8* type_5[14];
typedef uint32 type_6[10];
typedef int8* type_7[32];
typedef uint32 type_8[2];
typedef int8* type_9[0];
typedef int8 type_10[1024];
typedef int8 type_11[128];
typedef int8* type_12[0];
typedef int8 type_13[128];
typedef xSysFontTbl type_14[128];
typedef sceGsDispEnv type_15[2];
typedef int8 type_16[127];
typedef int8 type_17[32];
typedef _sceGpReg type_18[1];
typedef int8 type_19[1024];

struct _sceGpChain
{
	<unknown fundamental type (0xa510)>* ot;
	<unknown fundamental type (0xa510)>* pKick;
	<unknown fundamental type (0xa510)>* pEnd;
	int32 resolution;
};

enum HISMemoryType
{
	HIS_MEMORY_EE,
	HIS_MEMORY_IOP,
	HIS_MEMORY_SPU
};

struct sceGsZbuf
{
	struct
	{
		ulong32 ZBP : 9;
		ulong32 pad09 : 15;
		ulong32 PSM : 4;
		ulong32 pad28 : 4;
		ulong32 ZMSK : 1;
		ulong32 pad33 : 31;
	};
};

struct tGS_DISPLAY2
{
	struct
	{
		uint32 DX : 12;
		uint32 DY : 11;
		uint32 MAGH : 4;
		uint32 MAGV : 2;
		uint32 p0 : 3;
	};
	struct
	{
		uint32 DW : 12;
		uint32 DH : 11;
		uint32 p1 : 9;
	};
};

struct sceGsTex0
{
	struct
	{
		ulong32 TBP0 : 14;
		ulong32 TBW : 6;
		ulong32 PSM : 6;
		ulong32 TW : 4;
		ulong32 TH : 4;
		ulong32 TCC : 1;
		ulong32 TFX : 2;
		ulong32 CBP : 14;
		ulong32 CPSM : 4;
		ulong32 CSM : 1;
		ulong32 CSA : 5;
		ulong32 CLD : 3;
	};
};

struct sceGsTrxdir
{
	struct
	{
		ulong32 XDR : 2;
		ulong32 pad02 : 62;
	};
};

struct _sceDmaTag
{
	uint16 qwc;
	uint8 mark;
	uint8 id;
	_sceDmaTag* next;
	uint32 p[2];
};

struct sceGsPabe
{
	struct
	{
		ulong32 PABE : 1;
		ulong32 pad01 : 63;
	};
};

struct HISDebugState
{
	int32 retryCount;
	HISRequestThreadState requestThread;
	HISMainThreadState mainThread;
	HISStreamThreadState streamThread;
	uint8 abortted;
	int8 abortMessage[127];
	Request requests[16];
};

struct sceGsTrxreg
{
	struct
	{
		ulong32 RRW : 12;
		ulong32 pad12 : 20;
		ulong32 RRH : 12;
		ulong32 pad44 : 20;
	};
};

struct _sceGpAdc
{
	int32 ADC;
	int32 pad;
};

struct sceGpLoadImage
{
	_sceDmaTag dmacnt;
	sceGifTag giftag1;
	sceGsBitbltbuf bitbltbuf;
	long32 bitbltbufaddr;
	sceGsTrxpos trxpos;
	long32 trxposaddr;
	sceGsTrxreg trxreg;
	long32 trxregaddr;
	sceGsTrxdir trxdir;
	long32 trxdiraddr;
	sceGifTag giftag2;
	_sceDmaTag dmaref;
	_sceDmaTag dmanext;
	sceGifTag giftag3;
	sceGsTexflush texflush;
	long32 texflushaddr;
};

struct sceGsAlpha
{
	struct
	{
		ulong32 A : 2;
		ulong32 B : 2;
		ulong32 C : 2;
		ulong32 D : 2;
		ulong32 pad8 : 24;
		ulong32 FIX : 8;
		ulong32 pad40 : 24;
	};
};

struct sceGsFrame
{
	struct
	{
		ulong32 FBP : 9;
		ulong32 pad09 : 7;
		ulong32 FBW : 6;
		ulong32 pad22 : 2;
		ulong32 PSM : 6;
		ulong32 pad30 : 2;
		ulong32 FBMSK : 32;
	};
};

struct tGS_DISPFB2
{
	struct
	{
		uint32 FBP : 9;
		uint32 FBW : 6;
		uint32 PSM : 5;
		uint32 p0 : 12;
	};
	struct
	{
		uint32 DBX : 11;
		uint32 DBY : 11;
		uint32 p1 : 10;
	};
};

struct sceGsDrawEnv1
{
	sceGsFrame frame1;
	ulong32 frame1addr;
	sceGsZbuf zbuf1;
	long32 zbuf1addr;
	sceGsXyoffset xyoffset1;
	long32 xyoffset1addr;
	sceGsScissor scissor1;
	long32 scissor1addr;
	sceGsPrmodecont prmodecont;
	long32 prmodecontaddr;
	sceGsColclamp colclamp;
	long32 colclampaddr;
	sceGsDthe dthe;
	long32 dtheaddr;
	sceGsTest test1;
	long32 test1addr;
};

enum HISMainThreadState
{
	HIS_MAIN_THREAD_NOTHING,
	HIS_MAIN_THREAD_WAIT,
	HIS_MAIN_THREAD_PROCESS,
	HIS_MAIN_THREAD_WAIT_FOR_REQUEST_START,
	HIS_MAIN_THREAD_WAIT_FOR_REQUEST_WAIT1,
	HIS_MAIN_THREAD_WAIT_FOR_REQUEST_WAIT2,
	HIS_MAIN_THREAD_WAIT_FOR_REQUEST_END,
	HIS_MAIN_THREAD_DELAY_START,
	HIS_MAIN_THREAD_DELAY_END,
	HIS_MAIN_THREAD_RETURN
};

struct sceGpAlphaEnv
{
	_sceDmaTag dmanext;
	sceGifTag giftag;
	sceGsAlpha alpha;
	long32 alphaaddr;
	sceGsPabe pabe;
	long32 pabeaddr;
	sceGsTexa texa;
	long32 texaaddr;
	sceGsFba fba;
	long32 fbaaddr;
};

struct sceGsTex1
{
	struct
	{
		ulong32 LCM : 1;
		ulong32 pad01 : 1;
		ulong32 MXL : 3;
		ulong32 MMAG : 1;
		ulong32 MMIN : 3;
		ulong32 MTBA : 1;
		ulong32 pad10 : 9;
		ulong32 L : 2;
		ulong32 pad21 : 11;
		ulong32 K : 12;
		ulong32 pad44 : 20;
	};
};

struct sceGsDBuff
{
	sceGsDispEnv disp[2];
	sceGifTag giftag0;
	sceGsDrawEnv1 draw0;
	sceGsClear clear0;
	sceGifTag giftag1;
	sceGsDrawEnv1 draw1;
	sceGsClear clear1;
};

struct _sceGpReg
{
	union
	{
		sceGsPrim prim;
		sceGsRgbaq rgbaq;
		sceGsSt st;
		sceGsUv uv;
		sceGsXyzf xyzf;
		sceGsXyz xyz;
		sceGsTex0 tex0;
		sceGsClamp clamp;
		sceGsFog fog;
		_sceGpAdc adc;
		ulong32 ul;
		uint32 ui[2];
	};
};

struct sceGsTrxpos
{
	struct
	{
		ulong32 SSAX : 11;
		ulong32 pad11 : 5;
		ulong32 SSAY : 11;
		ulong32 pad27 : 5;
		ulong32 DSAX : 11;
		ulong32 pad43 : 5;
		ulong32 DSAY : 11;
		ulong32 DIR : 2;
		ulong32 pad61 : 3;
	};
};

struct sceGsDthe
{
	struct
	{
		ulong32 DTHE : 1;
		ulong32 pad01 : 63;
	};
};

struct sceGifTag
{
	struct
	{
		ulong32 NLOOP : 15;
		ulong32 EOP : 1;
		ulong32 pad16 : 16;
		ulong32 id : 14;
		ulong32 PRE : 1;
		ulong32 PRIM : 11;
		ulong32 FLG : 2;
		ulong32 NREG : 4;
	};
	struct
	{
		ulong32 REGS0 : 4;
		ulong32 REGS1 : 4;
		ulong32 REGS2 : 4;
		ulong32 REGS3 : 4;
		ulong32 REGS4 : 4;
		ulong32 REGS5 : 4;
		ulong32 REGS6 : 4;
		ulong32 REGS7 : 4;
		ulong32 REGS8 : 4;
		ulong32 REGS9 : 4;
		ulong32 REGS10 : 4;
		ulong32 REGS11 : 4;
		ulong32 REGS12 : 4;
		ulong32 REGS13 : 4;
		ulong32 REGS14 : 4;
		ulong32 REGS15 : 4;
	};
};

struct sceGsClear
{
	sceGsTest testa;
	long32 testaaddr;
	sceGsPrim prim;
	long32 primaddr;
	sceGsRgbaq rgbaq;
	long32 rgbaqaddr;
	sceGsXyz xyz2a;
	long32 xyz2aaddr;
	sceGsXyz xyz2b;
	long32 xyz2baddr;
	sceGsTest testb;
	long32 testbaddr;
};

struct tGS_SMODE2
{
	struct
	{
		uint32 INT : 1;
		uint32 FFMD : 1;
		uint32 DPMS : 2;
		uint32 p0 : 28;
	};
	uint32 p1;
};

struct sceGsFog
{
	struct
	{
		ulong32 pad00 : 56;
		ulong32 F : 8;
	};
};

struct sceGsColclamp
{
	struct
	{
		ulong32 CLAMP : 1;
		ulong32 pad01 : 63;
	};
};

struct sceGsTest
{
	struct
	{
		ulong32 ATE : 1;
		ulong32 ATST : 3;
		ulong32 AREF : 8;
		ulong32 AFAIL : 2;
		ulong32 DATE : 1;
		ulong32 DATM : 1;
		ulong32 ZTE : 1;
		ulong32 ZTST : 2;
		ulong32 pad19 : 45;
	};
};

struct sceGsBitbltbuf
{
	struct
	{
		ulong32 SBP : 14;
		ulong32 pad14 : 2;
		ulong32 SBW : 6;
		ulong32 pad22 : 2;
		ulong32 SPSM : 6;
		ulong32 pad30 : 2;
		ulong32 DBP : 14;
		ulong32 pad46 : 2;
		ulong32 DBW : 6;
		ulong32 pad54 : 2;
		ulong32 DPSM : 6;
		ulong32 pad62 : 2;
	};
};

enum HISStreamThreadState
{
	HIS_STREAM_THREAD_NOTHING,
	HIS_STREAM_THREAD_WAIT_EVENT,
	HIS_STREAM_THREAD_WAIT_LOCK,
	HIS_STREAM_THREAD_PROCESS_STREAMS
};

struct sceGsTexflush
{
	ulong32 pad00;
};

struct tGS_PMODE
{
	struct
	{
		uint32 EN1 : 1;
		uint32 EN2 : 1;
		uint32 CRTMD : 3;
		uint32 MMOD : 1;
		uint32 AMOD : 1;
		uint32 SLBG : 1;
		uint32 ALP : 8;
		uint32 p0 : 16;
	};
	uint32 p1;
};

struct sceGsPrmodecont
{
	struct
	{
		ulong32 AC : 1;
		ulong32 pad01 : 63;
	};
};

enum HISRequestThreadState
{
	HIS_REQUEST_THREAD_NOTHING,
	HIS_REQUEST_THREAD_WAIT_LOCK1,
	HIS_REQUEST_THREAD_REQUEST_LOOP,
	HIS_REQUEST_THREAD_WAIT_REQUEST,
	HIS_REQUEST_THREAD_WAIT_LOCK2,
	HIS_REQUEST_THREAD_REQUEST_FINISHED,
	HIS_REQUEST_THREAD_RETRY_START,
	HIS_REQUEST_THREAD_RETRY_END,
	HIS_REQUEST_THREAD_CALLING_FINISH_REQUEST,
	HIS_REQUEST_THREAD_CALLING_DATA_CALLBACK,
	HIS_REQUEST_THREAD_DONE_DATA_CALLBACK,
	HIS_REQUEST_THREAD_SUBMIT,
	HIS_REQUEST_THREAD_WAIT_DMA,
	HIS_REQUEST_THREAD_WAIT_DMA_DONE,
	HIS_REQUEST_THREAD_NEW_DMA,
	HIS_REQUEST_THREAD_NEW_DMA_DONE,
	HIS_REQUEST_THREAD_CALLING_DONE_CALLBACK,
	HIS_REQUEST_THREAD_DONE_DONE_CALLBACK,
	HIS_REQUEST_THREAD_FINISH_REQUEST_DONE,
	HIS_REQUEST_THREAD_FIND_NEW_REQUEST,
	HIS_REQUEST_THREAD_SCHEDULE_REQUEST,
	HIS_REQUEST_THREAD_HOSTIO_RELEASE,
	HIS_REQUEST_THREAD_HOSTIO_OPEN,
	HIS_REQUEST_THREAD_HOSTIO_SEEK_READ,
	HIS_REQUEST_THREAD_WAIT_LOCK3
};

struct xSysFontTbl
{
	int32 x;
	int32 y;
};

struct sceGsSt
{
	float32 s;
	float32 T;
};

struct sceGpPrimR
{
	_sceDmaTag dmanext;
	sceGifTag giftag1;
	_sceGifPackAd userreg;
	sceGifTag giftag2;
	_sceGpReg reg[1];
};

struct _sceGifPackAd
{
	ulong32 DATA;
	ulong32 ADDR;
};

struct sceGsScissor
{
	struct
	{
		ulong32 SCAX0 : 11;
		ulong32 pad11 : 5;
		ulong32 SCAX1 : 11;
		ulong32 pad27 : 5;
		ulong32 SCAY0 : 11;
		ulong32 pad43 : 5;
		ulong32 SCAY1 : 11;
		ulong32 pad59 : 5;
	};
};

struct sceGsXyz
{
	struct
	{
		ulong32 X : 16;
		ulong32 Y : 16;
		ulong32 Z : 32;
	};
};

struct sceGsUv
{
	struct
	{
		ulong32 U : 14;
		ulong32 pad14 : 2;
		ulong32 V : 14;
		ulong32 pad30 : 34;
	};
};

struct sceGsFba
{
	struct
	{
		ulong32 FBA : 1;
		ulong32 pad01 : 63;
	};
};

struct Request
{
	int8 filename[32];
	int32 startSector;
	int32 countSector;
	void* destination;
	HISMemoryType destinationType;
	uint8 finished;
	uint8 cancelled;
	uint8 valid;
	uint8 failed;
};

struct sceGsDispEnv
{
	tGS_PMODE pmode;
	tGS_SMODE2 smode2;
	tGS_DISPFB2 dispfb;
	tGS_DISPLAY2 display;
	tGS_BGCOLOR bgcolor;
};

struct sceGpTexEnv
{
	_sceDmaTag dmanext;
	sceGifTag giftag;
	sceGsTex1 tex1;
	long32 tex1addr;
	sceGsTex0 tex0;
	long32 tex0addr;
	sceGsClamp clamp;
	long32 clampaddr;
};

struct sceGsRgbaq
{
	struct
	{
		uint32 R : 8;
		uint32 G : 8;
		uint32 B : 8;
		uint32 A : 8;
	};
	float32 Q;
};

struct sceGsClamp
{
	struct
	{
		ulong32 WMS : 2;
		ulong32 WMT : 2;
		ulong32 MINU : 10;
		ulong32 MAXU : 10;
		ulong32 MINV : 10;
		ulong32 MAXV : 10;
		ulong32 pad44 : 20;
	};
};

struct sceGsXyoffset
{
	struct
	{
		ulong32 OFX : 16;
		ulong32 pad16 : 16;
		ulong32 OFY : 16;
		ulong32 pad48 : 16;
	};
};

struct tGS_BGCOLOR
{
	struct
	{
		uint32 R : 8;
		uint32 G : 8;
		uint32 B : 8;
		uint32 p0 : 8;
	};
	uint32 p1;
};

struct sceGsTexa
{
	struct
	{
		ulong32 TA0 : 8;
		ulong32 pad08 : 7;
		ulong32 AEM : 1;
		ulong32 pad16 : 16;
		ulong32 TA1 : 8;
		ulong32 pad40 : 24;
	};
};

struct sceGpTextureArg
{
	int16 tbp;
	int16 tbw;
	int16 tpsm;
	int16 tx;
	int16 ty;
	int16 tw;
	int16 th;
	int16 cbp;
	int16 cpsm;
};

struct sceGsXyzf
{
	struct
	{
		ulong32 X : 16;
		ulong32 Y : 16;
		ulong32 Z : 24;
		ulong32 F : 8;
	};
};

struct sceGsPrim
{
	struct
	{
		ulong32 PRIM : 3;
		ulong32 IIP : 1;
		ulong32 TME : 1;
		ulong32 FGE : 1;
		ulong32 ABE : 1;
		ulong32 AA1 : 1;
		ulong32 FST : 1;
		ulong32 CTXT : 1;
		ulong32 FIX : 1;
		ulong32 pad11 : 53;
	};
};

xSysFontTbl xSysFontLookup[128];
uint32 xSysFontRGBA[4096];
uint8 exceptionsEnabled;
int8* excep_table[14];
int8* reg_table[32];
_sceGpChain sChain;
sceGpPrimR* sSprpac;
long32 iExceptionHangCurr;
long32 iExceptionHangCheck;
void* iExceptionHangAddr;
uint32 sOldFreeSpace;
long32 sOldTime;
void(*iExceptionDMAYieldCB)(int32, uint32);
int8* HISRequestThreadStateNames[0];
int8* HISStreamThreadStateNames[0];
int8* HISMainThreadStateNames[0];

void iExceptionRwDMAInit();
void iExceptionDMAYieldCB(int32 blocked, uint32 freeSpace);
void iExceptionInit();
void iExceptionMemCrash();
void iExceptionIOPCrash();
void iExceptionGraphInit(uint8 iHandler);
void iExceptionDrawChar(int8* todraw, int32 x, int32 y, int32 w, int32 h, int32 spc, uint8 iHandler);
void iExceptionClearRect(int32 x, int32 y, int32 w, int32 h, uint8 iHandler);

// iExceptionRwDMAInit__Fv
// Start address: 0x1caef0
void iExceptionRwDMAInit()
{
	// Line 601, Address: 0x1caef0, Func Offset: 0
	// Func End, Address: 0x1caefc, Func Offset: 0xc
}

// iExceptionDMAYieldCB__FiUi
// Start address: 0x1caf00
void iExceptionDMAYieldCB(int32 blocked, uint32 freeSpace)
{
	long32 currTime;
	// Line 580, Address: 0x1caf00, Func Offset: 0
	// Line 581, Address: 0x1caf14, Func Offset: 0x14
	// Line 582, Address: 0x1caf1c, Func Offset: 0x1c
	// Line 583, Address: 0x1caf28, Func Offset: 0x28
	// Line 584, Address: 0x1caf38, Func Offset: 0x38
	// Line 585, Address: 0x1caf68, Func Offset: 0x68
	// Line 586, Address: 0x1caf94, Func Offset: 0x94
	// Line 590, Address: 0x1cb044, Func Offset: 0x144
	// Line 591, Address: 0x1cb048, Func Offset: 0x148
	// Line 595, Address: 0x1cb04c, Func Offset: 0x14c
	// Line 593, Address: 0x1cb064, Func Offset: 0x164
	// Line 596, Address: 0x1cb070, Func Offset: 0x170
	// Func End, Address: 0x1cb084, Func Offset: 0x184
}

// iExceptionInit__Fv
// Start address: 0x1cb090
void iExceptionInit()
{
	// Line 573, Address: 0x1cb090, Func Offset: 0
	// Line 574, Address: 0x1cb094, Func Offset: 0x4
	// Func End, Address: 0x1cb09c, Func Offset: 0xc
}

// iExceptionMemCrash__FPCcUiPCc
// Start address: 0x1cb0a0
void iExceptionMemCrash()
{
	// Line 534, Address: 0x1cb0a0, Func Offset: 0
	// Func End, Address: 0x1cb0a8, Func Offset: 0x8
}

// iExceptionIOPCrash__Fv
// Start address: 0x1cb0b0
void iExceptionIOPCrash()
{
	int8 tmpstr[1024];
	int32 line;
	HISDebugState* state;
	int32 i;
	Request& r;
	uint8 neverTrue;
	// Line 383, Address: 0x1cb0b0, Func Offset: 0
	// Line 384, Address: 0x1cb0c8, Func Offset: 0x18
	// Line 388, Address: 0x1cb0d4, Func Offset: 0x24
	// Line 389, Address: 0x1cb0d8, Func Offset: 0x28
	// Line 390, Address: 0x1cb0e4, Func Offset: 0x34
	// Line 391, Address: 0x1cb0f8, Func Offset: 0x48
	// Line 390, Address: 0x1cb0fc, Func Offset: 0x4c
	// Line 391, Address: 0x1cb100, Func Offset: 0x50
	// Line 390, Address: 0x1cb110, Func Offset: 0x60
	// Line 391, Address: 0x1cb114, Func Offset: 0x64
	// Line 392, Address: 0x1cb11c, Func Offset: 0x6c
	// Line 393, Address: 0x1cb12c, Func Offset: 0x7c
	// Line 392, Address: 0x1cb130, Func Offset: 0x80
	// Line 393, Address: 0x1cb138, Func Offset: 0x88
	// Line 392, Address: 0x1cb13c, Func Offset: 0x8c
	// Line 393, Address: 0x1cb140, Func Offset: 0x90
	// Line 392, Address: 0x1cb14c, Func Offset: 0x9c
	// Line 393, Address: 0x1cb150, Func Offset: 0xa0
	// Line 392, Address: 0x1cb154, Func Offset: 0xa4
	// Line 393, Address: 0x1cb158, Func Offset: 0xa8
	// Line 397, Address: 0x1cb164, Func Offset: 0xb4
	// Line 398, Address: 0x1cb170, Func Offset: 0xc0
	// Line 402, Address: 0x1cb178, Func Offset: 0xc8
	// Line 403, Address: 0x1cb18c, Func Offset: 0xdc
	// Line 407, Address: 0x1cb1ac, Func Offset: 0xfc
	// Line 408, Address: 0x1cb1d4, Func Offset: 0x124
	// Line 412, Address: 0x1cb1f4, Func Offset: 0x144
	// Line 413, Address: 0x1cb21c, Func Offset: 0x16c
	// Line 417, Address: 0x1cb23c, Func Offset: 0x18c
	// Line 418, Address: 0x1cb264, Func Offset: 0x1b4
	// Line 422, Address: 0x1cb284, Func Offset: 0x1d4
	// Line 423, Address: 0x1cb29c, Func Offset: 0x1ec
	// Line 425, Address: 0x1cb2bc, Func Offset: 0x20c
	// Line 428, Address: 0x1cb2c0, Func Offset: 0x210
	// Line 429, Address: 0x1cb2c8, Func Offset: 0x218
	// Line 431, Address: 0x1cb2d4, Func Offset: 0x224
	// Line 432, Address: 0x1cb2d8, Func Offset: 0x228
	// Line 442, Address: 0x1cb360, Func Offset: 0x2b0
	// Line 445, Address: 0x1cb380, Func Offset: 0x2d0
	// Line 444, Address: 0x1cb384, Func Offset: 0x2d4
	// Line 445, Address: 0x1cb388, Func Offset: 0x2d8
	// Line 444, Address: 0x1cb38c, Func Offset: 0x2dc
	// Line 445, Address: 0x1cb390, Func Offset: 0x2e0
	// Line 448, Address: 0x1cb398, Func Offset: 0x2e8
	// Line 450, Address: 0x1cb39c, Func Offset: 0x2ec
	// Line 451, Address: 0x1cb3b8, Func Offset: 0x308
	// Line 399, Address: 0x1cb3c0, Func Offset: 0x310
	// Line 451, Address: 0x1cb3c4, Func Offset: 0x314
	// Line 399, Address: 0x1cb3c8, Func Offset: 0x318
	// Line 451, Address: 0x1cb3d8, Func Offset: 0x328
	// Line 401, Address: 0x1cb3e0, Func Offset: 0x330
	// Line 451, Address: 0x1cb3e8, Func Offset: 0x338
	// Func End, Address: 0x1cb404, Func Offset: 0x354
}

// iExceptionGraphInit__Fb
// Start address: 0x1cb410
void iExceptionGraphInit(uint8 iHandler)
{
	sceGpLoadImage loadimage;
	sceGpTexEnv texenv;
	sceGpAlphaEnv alphaenv;
	sceGpTextureArg texarg;
	sceGsDBuff db;
	// Line 223, Address: 0x1cb410, Func Offset: 0
	// Line 234, Address: 0x1cb420, Func Offset: 0x10
	// Line 235, Address: 0x1cb428, Func Offset: 0x18
	// Line 236, Address: 0x1cb430, Func Offset: 0x20
	// Line 237, Address: 0x1cb438, Func Offset: 0x28
	// Line 238, Address: 0x1cb440, Func Offset: 0x30
	// Line 239, Address: 0x1cb448, Func Offset: 0x38
	// Line 240, Address: 0x1cb450, Func Offset: 0x40
	// Line 241, Address: 0x1cb458, Func Offset: 0x48
	// Line 242, Address: 0x1cb460, Func Offset: 0x50
	// Line 244, Address: 0x1cb468, Func Offset: 0x58
	// Line 245, Address: 0x1cb470, Func Offset: 0x60
	// Line 247, Address: 0x1cb478, Func Offset: 0x68
	// Line 248, Address: 0x1cb48c, Func Offset: 0x7c
	// Line 249, Address: 0x1cb494, Func Offset: 0x84
	// Line 253, Address: 0x1cb49c, Func Offset: 0x8c
	// Line 254, Address: 0x1cb4bc, Func Offset: 0xac
	// Line 258, Address: 0x1cb4c8, Func Offset: 0xb8
	// Line 254, Address: 0x1cb4cc, Func Offset: 0xbc
	// Line 258, Address: 0x1cb4d8, Func Offset: 0xc8
	// Line 254, Address: 0x1cb4e0, Func Offset: 0xd0
	// Line 258, Address: 0x1cb4e4, Func Offset: 0xd4
	// Line 261, Address: 0x1cb4f0, Func Offset: 0xe0
	// Line 267, Address: 0x1cb4f4, Func Offset: 0xe4
	// Line 261, Address: 0x1cb4f8, Func Offset: 0xe8
	// Line 262, Address: 0x1cb4fc, Func Offset: 0xec
	// Line 263, Address: 0x1cb500, Func Offset: 0xf0
	// Line 262, Address: 0x1cb504, Func Offset: 0xf4
	// Line 265, Address: 0x1cb508, Func Offset: 0xf8
	// Line 264, Address: 0x1cb50c, Func Offset: 0xfc
	// Line 265, Address: 0x1cb510, Func Offset: 0x100
	// Line 266, Address: 0x1cb514, Func Offset: 0x104
	// Line 264, Address: 0x1cb518, Func Offset: 0x108
	// Line 267, Address: 0x1cb51c, Func Offset: 0x10c
	// Line 268, Address: 0x1cb524, Func Offset: 0x114
	// Line 269, Address: 0x1cb530, Func Offset: 0x120
	// Line 270, Address: 0x1cb53c, Func Offset: 0x12c
	// Line 271, Address: 0x1cb554, Func Offset: 0x144
	// Line 272, Address: 0x1cb568, Func Offset: 0x158
	// Line 273, Address: 0x1cb578, Func Offset: 0x168
	// Line 274, Address: 0x1cb58c, Func Offset: 0x17c
	// Line 275, Address: 0x1cb5a0, Func Offset: 0x190
	// Line 276, Address: 0x1cb5b4, Func Offset: 0x1a4
	// Line 277, Address: 0x1cb5bc, Func Offset: 0x1ac
	// Line 279, Address: 0x1cb5cc, Func Offset: 0x1bc
	// Line 280, Address: 0x1cb5d4, Func Offset: 0x1c4
	// Line 281, Address: 0x1cb5e4, Func Offset: 0x1d4
	// Line 284, Address: 0x1cb5f0, Func Offset: 0x1e0
	// Line 285, Address: 0x1cb5f8, Func Offset: 0x1e8
	// Line 286, Address: 0x1cb600, Func Offset: 0x1f0
	// Line 287, Address: 0x1cb604, Func Offset: 0x1f4
	// Line 286, Address: 0x1cb608, Func Offset: 0x1f8
	// Line 287, Address: 0x1cb60c, Func Offset: 0x1fc
	// Line 290, Address: 0x1cb618, Func Offset: 0x208
	// Line 291, Address: 0x1cb624, Func Offset: 0x214
	// Line 295, Address: 0x1cb638, Func Offset: 0x228
	// Line 296, Address: 0x1cb644, Func Offset: 0x234
	// Func End, Address: 0x1cb654, Func Offset: 0x244
}

// iExceptionDrawChar__FPCciiiiib
// Start address: 0x1cb660
void iExceptionDrawChar(int8* todraw, int32 x, int32 y, int32 w, int32 h, int32 spc, uint8 iHandler)
{
	int32 level;
	int32 uu;
	int32 vv;
	int32 index;
	// Line 157, Address: 0x1cb660, Func Offset: 0
	// Line 159, Address: 0x1cb664, Func Offset: 0x4
	// Line 157, Address: 0x1cb668, Func Offset: 0x8
	// Line 160, Address: 0x1cb698, Func Offset: 0x38
	// Line 157, Address: 0x1cb6a0, Func Offset: 0x40
	// Line 160, Address: 0x1cb6a8, Func Offset: 0x48
	// Line 162, Address: 0x1cb708, Func Offset: 0xa8
	// Line 169, Address: 0x1cb714, Func Offset: 0xb4
	// Line 170, Address: 0x1cb71c, Func Offset: 0xbc
	// Line 171, Address: 0x1cb720, Func Offset: 0xc0
	// Line 170, Address: 0x1cb724, Func Offset: 0xc4
	// Line 172, Address: 0x1cb728, Func Offset: 0xc8
	// Line 173, Address: 0x1cb740, Func Offset: 0xe0
	// Line 174, Address: 0x1cb744, Func Offset: 0xe4
	// Line 178, Address: 0x1cb74c, Func Offset: 0xec
	// Line 180, Address: 0x1cb75c, Func Offset: 0xfc
	// Line 178, Address: 0x1cb760, Func Offset: 0x100
	// Line 183, Address: 0x1cb770, Func Offset: 0x110
	// Line 178, Address: 0x1cb774, Func Offset: 0x114
	// Line 179, Address: 0x1cb77c, Func Offset: 0x11c
	// Line 178, Address: 0x1cb780, Func Offset: 0x120
	// Line 179, Address: 0x1cb78c, Func Offset: 0x12c
	// Line 178, Address: 0x1cb790, Func Offset: 0x130
	// Line 179, Address: 0x1cb794, Func Offset: 0x134
	// Line 178, Address: 0x1cb79c, Func Offset: 0x13c
	// Line 179, Address: 0x1cb7a0, Func Offset: 0x140
	// Line 178, Address: 0x1cb7a4, Func Offset: 0x144
	// Line 179, Address: 0x1cb7ac, Func Offset: 0x14c
	// Line 181, Address: 0x1cb7b4, Func Offset: 0x154
	// Line 179, Address: 0x1cb7b8, Func Offset: 0x158
	// Line 180, Address: 0x1cb7bc, Func Offset: 0x15c
	// Line 178, Address: 0x1cb7c0, Func Offset: 0x160
	// Line 179, Address: 0x1cb7d4, Func Offset: 0x174
	// Line 178, Address: 0x1cb7e0, Func Offset: 0x180
	// Line 180, Address: 0x1cb7e4, Func Offset: 0x184
	// Line 179, Address: 0x1cb7e8, Func Offset: 0x188
	// Line 180, Address: 0x1cb7ec, Func Offset: 0x18c
	// Line 178, Address: 0x1cb7f8, Func Offset: 0x198
	// Line 180, Address: 0x1cb804, Func Offset: 0x1a4
	// Line 179, Address: 0x1cb808, Func Offset: 0x1a8
	// Line 180, Address: 0x1cb80c, Func Offset: 0x1ac
	// Line 181, Address: 0x1cb848, Func Offset: 0x1e8
	// Line 180, Address: 0x1cb84c, Func Offset: 0x1ec
	// Line 181, Address: 0x1cb850, Func Offset: 0x1f0
	// Line 180, Address: 0x1cb854, Func Offset: 0x1f4
	// Line 179, Address: 0x1cb858, Func Offset: 0x1f8
	// Line 180, Address: 0x1cb85c, Func Offset: 0x1fc
	// Line 179, Address: 0x1cb860, Func Offset: 0x200
	// Line 180, Address: 0x1cb864, Func Offset: 0x204
	// Line 179, Address: 0x1cb868, Func Offset: 0x208
	// Line 180, Address: 0x1cb870, Func Offset: 0x210
	// Line 179, Address: 0x1cb874, Func Offset: 0x214
	// Line 181, Address: 0x1cb878, Func Offset: 0x218
	// Line 179, Address: 0x1cb890, Func Offset: 0x230
	// Line 181, Address: 0x1cb898, Func Offset: 0x238
	// Line 179, Address: 0x1cb89c, Func Offset: 0x23c
	// Line 181, Address: 0x1cb8a0, Func Offset: 0x240
	// Line 180, Address: 0x1cb8a4, Func Offset: 0x244
	// Line 181, Address: 0x1cb8a8, Func Offset: 0x248
	// Line 180, Address: 0x1cb8ac, Func Offset: 0x24c
	// Line 182, Address: 0x1cb8b0, Func Offset: 0x250
	// Line 180, Address: 0x1cb8b4, Func Offset: 0x254
	// Line 182, Address: 0x1cb8c0, Func Offset: 0x260
	// Line 181, Address: 0x1cb8c4, Func Offset: 0x264
	// Line 185, Address: 0x1cb8c8, Func Offset: 0x268
	// Line 180, Address: 0x1cb8cc, Func Offset: 0x26c
	// Line 181, Address: 0x1cb908, Func Offset: 0x2a8
	// Line 185, Address: 0x1cb954, Func Offset: 0x2f4
	// Line 188, Address: 0x1cb95c, Func Offset: 0x2fc
	// Line 189, Address: 0x1cb964, Func Offset: 0x304
	// Line 191, Address: 0x1cb978, Func Offset: 0x318
	// Line 192, Address: 0x1cb980, Func Offset: 0x320
	// Line 193, Address: 0x1cb990, Func Offset: 0x330
	// Line 194, Address: 0x1cb99c, Func Offset: 0x33c
	// Line 195, Address: 0x1cb9a4, Func Offset: 0x344
	// Line 198, Address: 0x1cb9a8, Func Offset: 0x348
	// Line 199, Address: 0x1cb9ac, Func Offset: 0x34c
	// Line 201, Address: 0x1cb9c0, Func Offset: 0x360
	// Line 203, Address: 0x1cb9c8, Func Offset: 0x368
	// Line 202, Address: 0x1cb9cc, Func Offset: 0x36c
	// Line 204, Address: 0x1cb9d0, Func Offset: 0x370
	// Line 203, Address: 0x1cb9d4, Func Offset: 0x374
	// Line 202, Address: 0x1cb9d8, Func Offset: 0x378
	// Line 203, Address: 0x1cb9e0, Func Offset: 0x380
	// Line 204, Address: 0x1cb9e4, Func Offset: 0x384
	// Line 208, Address: 0x1cba28, Func Offset: 0x3c8
	// Line 204, Address: 0x1cba30, Func Offset: 0x3d0
	// Line 205, Address: 0x1cba38, Func Offset: 0x3d8
	// Line 207, Address: 0x1cba3c, Func Offset: 0x3dc
	// Line 204, Address: 0x1cba40, Func Offset: 0x3e0
	// Line 208, Address: 0x1cba64, Func Offset: 0x404
	// Line 205, Address: 0x1cba74, Func Offset: 0x414
	// Line 208, Address: 0x1cba78, Func Offset: 0x418
	// Line 205, Address: 0x1cba7c, Func Offset: 0x41c
	// Line 207, Address: 0x1cba80, Func Offset: 0x420
	// Line 205, Address: 0x1cba84, Func Offset: 0x424
	// Line 206, Address: 0x1cba88, Func Offset: 0x428
	// Line 207, Address: 0x1cba8c, Func Offset: 0x42c
	// Line 205, Address: 0x1cba90, Func Offset: 0x430
	// Line 206, Address: 0x1cba94, Func Offset: 0x434
	// Line 207, Address: 0x1cba98, Func Offset: 0x438
	// Line 206, Address: 0x1cba9c, Func Offset: 0x43c
	// Line 207, Address: 0x1cbaa0, Func Offset: 0x440
	// Line 205, Address: 0x1cbae4, Func Offset: 0x484
	// Line 207, Address: 0x1cbaf0, Func Offset: 0x490
	// Line 209, Address: 0x1cbaf8, Func Offset: 0x498
	// Line 208, Address: 0x1cbb00, Func Offset: 0x4a0
	// Line 205, Address: 0x1cbb10, Func Offset: 0x4b0
	// Line 206, Address: 0x1cbb14, Func Offset: 0x4b4
	// Line 205, Address: 0x1cbb18, Func Offset: 0x4b8
	// Line 207, Address: 0x1cbb1c, Func Offset: 0x4bc
	// Line 205, Address: 0x1cbb20, Func Offset: 0x4c0
	// Line 210, Address: 0x1cbb24, Func Offset: 0x4c4
	// Line 208, Address: 0x1cbb28, Func Offset: 0x4c8
	// Line 205, Address: 0x1cbb2c, Func Offset: 0x4cc
	// Line 206, Address: 0x1cbb48, Func Offset: 0x4e8
	// Line 207, Address: 0x1cbb6c, Func Offset: 0x50c
	// Line 208, Address: 0x1cbb78, Func Offset: 0x518
	// Line 207, Address: 0x1cbb7c, Func Offset: 0x51c
	// Line 208, Address: 0x1cbbc0, Func Offset: 0x560
	// Line 210, Address: 0x1cbc10, Func Offset: 0x5b0
	// Line 165, Address: 0x1cbc20, Func Offset: 0x5c0
	// Line 212, Address: 0x1cbc28, Func Offset: 0x5c8
	// Line 213, Address: 0x1cbc30, Func Offset: 0x5d0
	// Line 215, Address: 0x1cbc40, Func Offset: 0x5e0
	// Line 216, Address: 0x1cbc48, Func Offset: 0x5e8
	// Line 217, Address: 0x1cbc58, Func Offset: 0x5f8
	// Line 218, Address: 0x1cbc64, Func Offset: 0x604
	// Line 220, Address: 0x1cbc6c, Func Offset: 0x60c
	// Func End, Address: 0x1cbc9c, Func Offset: 0x63c
}

// iExceptionClearRect__Fiiiib
// Start address: 0x1cbca0
void iExceptionClearRect(int32 x, int32 y, int32 w, int32 h, uint8 iHandler)
{
	int32 level;
	int32 uu;
	int32 vv;
	int32 index;
	// Line 130, Address: 0x1cbca0, Func Offset: 0
	// Line 139, Address: 0x1cbca4, Func Offset: 0x4
	// Line 130, Address: 0x1cbcb0, Func Offset: 0x10
	// Line 139, Address: 0x1cbcb4, Func Offset: 0x14
	// Line 130, Address: 0x1cbcb8, Func Offset: 0x18
	// Line 139, Address: 0x1cbcbc, Func Offset: 0x1c
	// Line 130, Address: 0x1cbcc0, Func Offset: 0x20
	// Line 139, Address: 0x1cbcc4, Func Offset: 0x24
	// Line 130, Address: 0x1cbccc, Func Offset: 0x2c
	// Line 139, Address: 0x1cbcd0, Func Offset: 0x30
	// Line 130, Address: 0x1cbcd4, Func Offset: 0x34
	// Line 139, Address: 0x1cbcd8, Func Offset: 0x38
	// Line 130, Address: 0x1cbcdc, Func Offset: 0x3c
	// Line 139, Address: 0x1cbce0, Func Offset: 0x40
	// Line 130, Address: 0x1cbce4, Func Offset: 0x44
	// Line 138, Address: 0x1cbce8, Func Offset: 0x48
	// Line 139, Address: 0x1cbcec, Func Offset: 0x4c
	// Line 130, Address: 0x1cbcf0, Func Offset: 0x50
	// Line 139, Address: 0x1cbcf8, Func Offset: 0x58
	// Line 130, Address: 0x1cbcfc, Func Offset: 0x5c
	// Line 139, Address: 0x1cbd04, Func Offset: 0x64
	// Line 138, Address: 0x1cbd08, Func Offset: 0x68
	// Line 139, Address: 0x1cbd0c, Func Offset: 0x6c
	// Line 130, Address: 0x1cbd14, Func Offset: 0x74
	// Line 134, Address: 0x1cbd18, Func Offset: 0x78
	// Line 138, Address: 0x1cbd1c, Func Offset: 0x7c
	// Line 134, Address: 0x1cbd20, Func Offset: 0x80
	// Line 138, Address: 0x1cbd2c, Func Offset: 0x8c
	// Line 136, Address: 0x1cbd40, Func Offset: 0xa0
	// Line 138, Address: 0x1cbd44, Func Offset: 0xa4
	// Line 136, Address: 0x1cbd48, Func Offset: 0xa8
	// Line 135, Address: 0x1cbd50, Func Offset: 0xb0
	// Line 138, Address: 0x1cbd54, Func Offset: 0xb4
	// Line 135, Address: 0x1cbd58, Func Offset: 0xb8
	// Line 138, Address: 0x1cbd5c, Func Offset: 0xbc
	// Line 135, Address: 0x1cbd70, Func Offset: 0xd0
	// Line 134, Address: 0x1cbd7c, Func Offset: 0xdc
	// Line 136, Address: 0x1cbd8c, Func Offset: 0xec
	// Line 134, Address: 0x1cbd94, Func Offset: 0xf4
	// Line 137, Address: 0x1cbd98, Func Offset: 0xf8
	// Line 136, Address: 0x1cbda4, Func Offset: 0x104
	// Line 137, Address: 0x1cbda8, Func Offset: 0x108
	// Line 136, Address: 0x1cbdac, Func Offset: 0x10c
	// Line 140, Address: 0x1cbdb8, Func Offset: 0x118
	// Line 136, Address: 0x1cbdbc, Func Offset: 0x11c
	// Line 137, Address: 0x1cbdc4, Func Offset: 0x124
	// Line 136, Address: 0x1cbdc8, Func Offset: 0x128
	// Line 137, Address: 0x1cbdcc, Func Offset: 0x12c
	// Line 140, Address: 0x1cbdd4, Func Offset: 0x134
	// Line 137, Address: 0x1cbddc, Func Offset: 0x13c
	// Line 138, Address: 0x1cbde0, Func Offset: 0x140
	// Line 136, Address: 0x1cbdf0, Func Offset: 0x150
	// Line 138, Address: 0x1cbdf4, Func Offset: 0x154
	// Line 136, Address: 0x1cbdf8, Func Offset: 0x158
	// Line 138, Address: 0x1cbe00, Func Offset: 0x160
	// Line 137, Address: 0x1cbe04, Func Offset: 0x164
	// Line 138, Address: 0x1cbe08, Func Offset: 0x168
	// Line 140, Address: 0x1cbe10, Func Offset: 0x170
	// Line 138, Address: 0x1cbe14, Func Offset: 0x174
	// Line 137, Address: 0x1cbe20, Func Offset: 0x180
	// Line 138, Address: 0x1cbe3c, Func Offset: 0x19c
	// Line 139, Address: 0x1cbe84, Func Offset: 0x1e4
	// Line 142, Address: 0x1cbecc, Func Offset: 0x22c
	// Line 141, Address: 0x1cbed8, Func Offset: 0x238
	// Line 143, Address: 0x1cbee0, Func Offset: 0x240
	// Line 145, Address: 0x1cbef4, Func Offset: 0x254
	// Line 143, Address: 0x1cbef8, Func Offset: 0x258
	// Line 144, Address: 0x1cbefc, Func Offset: 0x25c
	// Line 141, Address: 0x1cbf08, Func Offset: 0x268
	// Line 142, Address: 0x1cbf0c, Func Offset: 0x26c
	// Line 141, Address: 0x1cbf10, Func Offset: 0x270
	// Line 143, Address: 0x1cbf14, Func Offset: 0x274
	// Line 145, Address: 0x1cbf18, Func Offset: 0x278
	// Line 141, Address: 0x1cbf1c, Func Offset: 0x27c
	// Line 142, Address: 0x1cbf38, Func Offset: 0x298
	// Line 143, Address: 0x1cbf58, Func Offset: 0x2b8
	// Line 144, Address: 0x1cbf68, Func Offset: 0x2c8
	// Line 143, Address: 0x1cbf6c, Func Offset: 0x2cc
	// Line 144, Address: 0x1cbfa8, Func Offset: 0x308
	// Line 145, Address: 0x1cbff0, Func Offset: 0x350
	// Line 146, Address: 0x1cbff8, Func Offset: 0x358
	// Line 147, Address: 0x1cc000, Func Offset: 0x360
	// Line 149, Address: 0x1cc010, Func Offset: 0x370
	// Line 150, Address: 0x1cc018, Func Offset: 0x378
	// Line 151, Address: 0x1cc028, Func Offset: 0x388
	// Line 152, Address: 0x1cc034, Func Offset: 0x394
	// Line 153, Address: 0x1cc03c, Func Offset: 0x39c
	// Func End, Address: 0x1cc06c, Func Offset: 0x3cc
}

