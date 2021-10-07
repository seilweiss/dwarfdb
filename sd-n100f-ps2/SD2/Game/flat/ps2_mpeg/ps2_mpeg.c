typedef struct TimeStamp;
typedef struct VideoDec;
typedef struct _tagxRumble;
typedef struct sceGsDrawEnv1;
typedef struct tGS_DISPFB2;
typedef struct sceMpeg;
typedef struct sceMpegCbDataStr;
typedef struct ThreadParam;
typedef struct sceGsPrim;
typedef struct tGS_BGCOLOR;
typedef struct sceGsDthe;
typedef struct sceGsColclamp;
typedef struct VoData;
typedef struct sceGsDBuff;
typedef struct sceGsScissor;
typedef enum _tagRumbleType;
typedef struct VoTag;
typedef struct StrFile;
typedef struct tGS_PMODE;
typedef struct sceGsXyoffset;
typedef struct ReadBuf;
typedef struct VoBuf;
typedef struct tGS_DISPLAY2;
typedef struct sceCdlFILE;
typedef struct SpuStreamHeader;
typedef struct sceGsXyz;
typedef struct sceGsPrmodecont;
typedef struct sceIpuDmaEnv;
typedef struct ViBuf;
typedef struct sceGsTest;
typedef enum _tagPadState;
typedef struct tGS_SMODE2;
typedef struct SpuStreamBody;
typedef struct _tagiPad;
typedef struct sceGsDispEnv;
typedef struct sceGsClear;
typedef struct sceGsRgbaq;
typedef struct sceGsFrame;
typedef enum sceMpegCbType;
typedef struct _tagPadAnalog;
typedef struct AudioDec;
typedef struct sceGsZbuf;
typedef struct _tagxPad;
typedef struct sceGifTag;

typedef void(*type_0)(VideoDec*);
typedef int32(*type_1)(sceMpeg*, sceMpegCbDataStr*, void*);
typedef int32(*type_5)(sceMpeg*, sceMpegCbDataStr*, void*);
typedef int32(*type_8)(int32);
typedef int32(*type_9)(int32);
typedef void(*type_17)();

typedef uint8 type_2[22];
typedef uint8 type_3[1382400];
typedef uint8 type_4[22];
typedef _tagxPad type_6[4];
typedef sceGsDispEnv type_7[2];
typedef int32 type_10[15];
typedef uint32 type_11[32896];
typedef uint32 type_12[32896][2];
typedef int8 type_13[128];
typedef int8 type_14[4];
typedef int8 type_15[16];
typedef uint8 type_16[8];
typedef int8 type_18[4];
typedef uint8 type_19[327680];

struct TimeStamp
{
	long32 pts;
	long32 dts;
	int32 pos;
	int32 len;
};

struct VideoDec
{
	sceMpeg mpeg;
	ViBuf vibuf;
	uint32 state;
	int32 sema;
	int32 hid_endimage;
	int32 hid_vblank;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
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

struct sceMpeg
{
	int32 width;
	int32 height;
	int32 frameCount;
	long32 pts;
	long32 dts;
	ulong32 flags;
	long32 pts2nd;
	long32 dts2nd;
	ulong32 flags2nd;
	void* sys;
};

struct sceMpegCbDataStr
{
	sceMpegCbType type;
	uint8* header;
	uint8* data;
	uint32 len;
	long32 pts;
	long32 dts;
};

struct ThreadParam
{
	int32 status;
	void* entry;
	void* stack;
	int32 stackSize;
	void* gpReg;
	int32 initPriority;
	int32 currentPriority;
	uint32 attr;
	uint32 option;
	int32 waitType;
	int32 waitId;
	int32 wakeupCount;
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

struct sceGsDthe
{
	struct
	{
		ulong32 DTHE : 1;
		ulong32 pad01 : 63;
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

struct VoData
{
	uint8 v[1382400];
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

enum _tagRumbleType
{
	eRumble_Off,
	eRumble_VeryLightHi,
	eRumble_VeryLight,
	eRumble_LightHi,
	eRumble_Light,
	eRumble_MediumHi,
	eRumble_Medium,
	eRumble_HeavyHi,
	eRumble_Heavy,
	eRumble_VeryHeavyHi,
	eRumble_VeryHeavy,
	eRumble_Total,
	eRumbleForceU32 = 0x7fffffff
};

struct VoTag
{
	int32 status;
	int32 dummy[15];
	uint32 v[32896][2];
};

struct StrFile
{
	int32 isOnCD;
	int32 size;
	sceCdlFILE fp;
	uint8* iopBuf;
	int32 fd;
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

struct ReadBuf
{
	uint8 data[327680];
	int32 put;
	int32 count;
	int32 size;
};

struct VoBuf
{
	VoData* data;
	VoTag* tag;
	int32 write;
	int32 count;
	int32 size;
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

struct sceCdlFILE
{
	uint32 lsn;
	uint32 size;
	int8 name[16];
	uint8 date[8];
	uint32 flag;
};

struct SpuStreamHeader
{
	int8 id[4];
	int32 size;
	int32 type;
	int32 rate;
	int32 ch;
	int32 interSize;
	int32 loopStart;
	int32 loopEnd;
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

struct sceGsPrmodecont
{
	struct
	{
		ulong32 AC : 1;
		ulong32 pad01 : 63;
	};
};

struct sceIpuDmaEnv
{
	uint32 d4madr;
	uint32 d4tadr;
	uint32 d4qwc;
	uint32 d4chcr;
	uint32 d3madr;
	uint32 d3qwc;
	uint32 d3chcr;
	uint32 ipubp;
	uint32 ipuctrl;
};

struct ViBuf
{
	<unknown fundamental type (0xa510)>* data;
	<unknown fundamental type (0xa510)>* tag;
	int32 n;
	int32 dmaStart;
	int32 dmaN;
	int32 readBytes;
	int32 buffSize;
	sceIpuDmaEnv env;
	int32 sema;
	int32 isActive;
	long32 totalBytes;
	TimeStamp* ts;
	int32 n_ts;
	int32 count_ts;
	int32 wt_ts;
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

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
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

struct SpuStreamBody
{
	int8 id[4];
	int32 size;
};

struct _tagiPad
{
	int32 port;
};

struct sceGsDispEnv
{
	tGS_PMODE pmode;
	tGS_SMODE2 smode2;
	tGS_DISPFB2 dispfb;
	tGS_DISPLAY2 display;
	tGS_BGCOLOR bgcolor;
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

enum sceMpegCbType
{
	sceMpegCbError,
	sceMpegCbNodata,
	sceMpegCbStopDMA,
	sceMpegCbRestartDMA,
	sceMpegCbBackground,
	sceMpegCbTimeStamp,
	sceMpegCbStr
};

struct _tagPadAnalog
{
	int8 x;
	int8 y;
};

struct AudioDec
{
	int32 state;
	SpuStreamHeader sshd;
	SpuStreamBody ssbd;
	int32 hdrCount;
	uint8* data;
	int32 put;
	int32 count;
	int32 size;
	int32 totalBytes;
	int32 iopBuff;
	int32 iopBuffSize;
	int32 iopLastPos;
	int32 iopPausePos;
	int32 totalBytesSent;
	int32 iopZero;
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

struct _tagxPad
{
	uint8 value[22];
	uint8 last_value[22];
	uint32 on;
	uint32 pressed;
	uint32 released;
	_tagPadAnalog analog1;
	_tagPadAnalog analog2;
	_tagPadState state;
	uint32 flags;
	_tagxRumble rumble_head;
	int16 port;
	int16 slot;
	_tagiPad context;
	float32 al2d_timer;
	float32 ar2d_timer;
	float32 d_timer;
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

VoData* voBufData;
VoTag* voBufTag;
<unknown fundamental type (0xa510)>* viBufTag;
uint8* mpegWork;
int32 mpegWorkSz;
int8* defStack;
ReadBuf* readBufp;
uint8* audioBuff;
<unknown fundamental type (0xa510)>* viBufData;
int8* videoDecStack;
TimeStamp* timeStamp;
int32 videoDecTh;
int32 defaultTh;
StrFile infile;
VideoDec videoDec;
AudioDec audioDec;
VoBuf voBuf;
int32 frd;
uint32 controller_val;
int32 isWithAudio;
sceGsDBuff sony_db;
uint32 skip_buttons;
uint32 skip_time;
int32(*handler_endimage)(int32);
int32(*vblankHandler)(int32);
void(*videoDecMain)(VideoDec*);
void* _gp;
void(*defMain)();
int32(*pcmCallback)(sceMpeg*, sceMpegCbDataStr*, void*);
int32(*videoCallback)(sceMpeg*, sceMpegCbDataStr*, void*);
_tagxPad mPad[4];

void ErrMessage(int8* message);
void defMain();
void termAll();
int32 initAll(int8* bsfilename);
void switchThread();
int32 readMpeg(VideoDec* vd, ReadBuf* rb, StrFile* file);
int32 ps2_mpeg_play(int8* fname, int8* work_area, int32 work_area_size, uint32 buttons, float32 time);

// ErrMessage__FPc
// Start address: 0x262430
void ErrMessage(int8* message)
{
	// Line 595, Address: 0x262434, Func Offset: 0x4
	// Func End, Address: 0x262440, Func Offset: 0x10
}

// defMain__Fv
// Start address: 0x262440
void defMain()
{
	// Line 583, Address: 0x262440, Func Offset: 0
	// Line 585, Address: 0x262448, Func Offset: 0x8
	// Line 586, Address: 0x262450, Func Offset: 0x10
	// Func End, Address: 0x262458, Func Offset: 0x18
}

// termAll__Fv
// Start address: 0x262460
void termAll()
{
	// Line 550, Address: 0x262460, Func Offset: 0
	// Line 551, Address: 0x26246c, Func Offset: 0xc
	// Line 552, Address: 0x262474, Func Offset: 0x14
	// Line 554, Address: 0x262480, Func Offset: 0x20
	// Line 555, Address: 0x26248c, Func Offset: 0x2c
	// Line 557, Address: 0x262494, Func Offset: 0x34
	// Line 558, Address: 0x2624a0, Func Offset: 0x40
	// Line 560, Address: 0x2624a8, Func Offset: 0x48
	// Line 561, Address: 0x2624b0, Func Offset: 0x50
	// Line 563, Address: 0x2624c4, Func Offset: 0x64
	// Line 564, Address: 0x2624cc, Func Offset: 0x6c
	// Line 566, Address: 0x2624d8, Func Offset: 0x78
	// Line 567, Address: 0x2624e0, Func Offset: 0x80
	// Line 569, Address: 0x2624ec, Func Offset: 0x8c
	// Line 572, Address: 0x2624f8, Func Offset: 0x98
	// Line 573, Address: 0x26250c, Func Offset: 0xac
	// Line 574, Address: 0x262520, Func Offset: 0xc0
	// Line 575, Address: 0x262534, Func Offset: 0xd4
	// Line 576, Address: 0x262548, Func Offset: 0xe8
	// Func End, Address: 0x262558, Func Offset: 0xf8
}

// initAll__FPCc
// Start address: 0x262560
int32 initAll(int8* bsfilename)
{
	ThreadParam th_param;
	// Line 448, Address: 0x262560, Func Offset: 0
	// Line 451, Address: 0x26258c, Func Offset: 0x2c
	// Line 452, Address: 0x262594, Func Offset: 0x34
	// Line 458, Address: 0x26259c, Func Offset: 0x3c
	// Line 451, Address: 0x2625a0, Func Offset: 0x40
	// Line 452, Address: 0x2625ac, Func Offset: 0x4c
	// Line 458, Address: 0x2625b4, Func Offset: 0x54
	// Line 464, Address: 0x2625bc, Func Offset: 0x5c
	// Line 465, Address: 0x2625c4, Func Offset: 0x64
	// Line 478, Address: 0x2625f0, Func Offset: 0x90
	// Line 484, Address: 0x262608, Func Offset: 0xa8
	// Line 486, Address: 0x262624, Func Offset: 0xc4
	// Line 487, Address: 0x262630, Func Offset: 0xd0
	// Line 495, Address: 0x26264c, Func Offset: 0xec
	// Line 501, Address: 0x262674, Func Offset: 0x114
	// Line 502, Address: 0x262684, Func Offset: 0x124
	// Line 503, Address: 0x26268c, Func Offset: 0x12c
	// Line 504, Address: 0x262694, Func Offset: 0x134
	// Line 502, Address: 0x26269c, Func Offset: 0x13c
	// Line 503, Address: 0x2626a0, Func Offset: 0x140
	// Line 504, Address: 0x2626a4, Func Offset: 0x144
	// Line 505, Address: 0x2626a8, Func Offset: 0x148
	// Line 506, Address: 0x2626b4, Func Offset: 0x154
	// Line 507, Address: 0x2626b8, Func Offset: 0x158
	// Line 508, Address: 0x2626cc, Func Offset: 0x16c
	// Line 514, Address: 0x2626d8, Func Offset: 0x178
	// Line 515, Address: 0x2626e4, Func Offset: 0x184
	// Line 516, Address: 0x2626e8, Func Offset: 0x188
	// Line 517, Address: 0x2626ec, Func Offset: 0x18c
	// Line 520, Address: 0x2626f0, Func Offset: 0x190
	// Line 515, Address: 0x2626f4, Func Offset: 0x194
	// Line 516, Address: 0x2626f8, Func Offset: 0x198
	// Line 517, Address: 0x2626fc, Func Offset: 0x19c
	// Line 518, Address: 0x262700, Func Offset: 0x1a0
	// Line 520, Address: 0x262704, Func Offset: 0x1a4
	// Line 521, Address: 0x262714, Func Offset: 0x1b4
	// Line 527, Address: 0x262720, Func Offset: 0x1c0
	// Line 528, Address: 0x262738, Func Offset: 0x1d8
	// Line 529, Address: 0x262748, Func Offset: 0x1e8
	// Line 536, Address: 0x262750, Func Offset: 0x1f0
	// Line 537, Address: 0x262764, Func Offset: 0x204
	// Line 539, Address: 0x26276c, Func Offset: 0x20c
	// Line 540, Address: 0x262784, Func Offset: 0x224
	// Line 542, Address: 0x26278c, Func Offset: 0x22c
	// Line 543, Address: 0x262790, Func Offset: 0x230
	// Func End, Address: 0x2627c0, Func Offset: 0x260
}

// switchThread__Fv
// Start address: 0x2627c0
void switchThread()
{
	// Line 431, Address: 0x2627c0, Func Offset: 0
	// Func End, Address: 0x2627c8, Func Offset: 0x8
}

// readMpeg__FP8VideoDecP7ReadBufP7StrFile
// Start address: 0x2627d0
int32 readMpeg(VideoDec* vd, ReadBuf* rb, StrFile* file)
{
	long32 t1;
	long32 t0;
	int32 isStarted;
	int32 proceed;
	int32 count;
	int32 writerest;
	int32 readrest;
	int32 getsize;
	int32 putsize;
	uint8* get_ptr;
	uint8* put_ptr;
	// Line 304, Address: 0x2627d0, Func Offset: 0
	// Line 311, Address: 0x262800, Func Offset: 0x30
	// Line 315, Address: 0x26280c, Func Offset: 0x3c
	// Line 322, Address: 0x262810, Func Offset: 0x40
	// Line 325, Address: 0x262858, Func Offset: 0x88
	// Line 329, Address: 0x262860, Func Offset: 0x90
	// Line 335, Address: 0x262870, Func Offset: 0xa0
	// Line 341, Address: 0x26289c, Func Offset: 0xcc
	// Line 343, Address: 0x2628a4, Func Offset: 0xd4
	// Line 349, Address: 0x2628a8, Func Offset: 0xd8
	// Line 350, Address: 0x2628b4, Func Offset: 0xe4
	// Line 351, Address: 0x2628cc, Func Offset: 0xfc
	// Line 352, Address: 0x2628dc, Func Offset: 0x10c
	// Line 353, Address: 0x2628e8, Func Offset: 0x118
	// Line 354, Address: 0x2628ec, Func Offset: 0x11c
	// Line 356, Address: 0x2628f0, Func Offset: 0x120
	// Line 362, Address: 0x2628fc, Func Offset: 0x12c
	// Line 363, Address: 0x262908, Func Offset: 0x138
	// Line 365, Address: 0x262910, Func Offset: 0x140
	// Line 368, Address: 0x262934, Func Offset: 0x164
	// Line 369, Address: 0x262940, Func Offset: 0x170
	// Line 371, Address: 0x262944, Func Offset: 0x174
	// Line 377, Address: 0x262948, Func Offset: 0x178
	// Line 382, Address: 0x262954, Func Offset: 0x184
	// Line 383, Address: 0x262960, Func Offset: 0x190
	// Line 384, Address: 0x26298c, Func Offset: 0x1bc
	// Line 387, Address: 0x262994, Func Offset: 0x1c4
	// Line 395, Address: 0x262998, Func Offset: 0x1c8
	// Line 397, Address: 0x2629cc, Func Offset: 0x1fc
	// Line 398, Address: 0x2629d4, Func Offset: 0x204
	// Line 399, Address: 0x2629e0, Func Offset: 0x210
	// Line 401, Address: 0x2629e8, Func Offset: 0x218
	// Line 403, Address: 0x2629ec, Func Offset: 0x21c
	// Line 406, Address: 0x262a10, Func Offset: 0x240
	// Line 407, Address: 0x262a24, Func Offset: 0x254
	// Line 408, Address: 0x262a2c, Func Offset: 0x25c
	// Line 411, Address: 0x262a40, Func Offset: 0x270
	// Line 414, Address: 0x262a48, Func Offset: 0x278
	// Line 415, Address: 0x262a50, Func Offset: 0x280
	// Line 417, Address: 0x262a78, Func Offset: 0x2a8
	// Line 418, Address: 0x262a80, Func Offset: 0x2b0
	// Line 419, Address: 0x262a8c, Func Offset: 0x2bc
	// Line 423, Address: 0x262a94, Func Offset: 0x2c4
	// Line 422, Address: 0x262abc, Func Offset: 0x2ec
	// Line 423, Address: 0x262ac0, Func Offset: 0x2f0
	// Func End, Address: 0x262ac8, Func Offset: 0x2f8
}

// ps2_mpeg_play__FPCcPciUif
// Start address: 0x262ad0
int32 ps2_mpeg_play(int8* fname, int8* work_area, int32 work_area_size, uint32 buttons, float32 time)
{
	int8* bp;
	int8* extra_buf;
	int8 filename[128];
	int8* ptr;
	uint32 i;
	// Line 158, Address: 0x262ad0, Func Offset: 0
	// Line 174, Address: 0x262af8, Func Offset: 0x28
	// Line 175, Address: 0x262b18, Func Offset: 0x48
	// Line 176, Address: 0x262b20, Func Offset: 0x50
	// Line 178, Address: 0x262b28, Func Offset: 0x58
	// Line 179, Address: 0x262b30, Func Offset: 0x60
	// Line 181, Address: 0x262b48, Func Offset: 0x78
	// Line 186, Address: 0x262b64, Func Offset: 0x94
	// Line 184, Address: 0x262b68, Func Offset: 0x98
	// Line 186, Address: 0x262b74, Func Offset: 0xa4
	// Line 187, Address: 0x262b7c, Func Offset: 0xac
	// Line 186, Address: 0x262b80, Func Offset: 0xb0
	// Line 187, Address: 0x262b84, Func Offset: 0xb4
	// Line 188, Address: 0x262b8c, Func Offset: 0xbc
	// Line 187, Address: 0x262b90, Func Offset: 0xc0
	// Line 188, Address: 0x262b94, Func Offset: 0xc4
	// Line 189, Address: 0x262b9c, Func Offset: 0xcc
	// Line 185, Address: 0x262ba0, Func Offset: 0xd0
	// Line 188, Address: 0x262ba4, Func Offset: 0xd4
	// Line 189, Address: 0x262bac, Func Offset: 0xdc
	// Line 190, Address: 0x262bb4, Func Offset: 0xe4
	// Line 189, Address: 0x262bb8, Func Offset: 0xe8
	// Line 190, Address: 0x262bbc, Func Offset: 0xec
	// Line 191, Address: 0x262bc4, Func Offset: 0xf4
	// Line 190, Address: 0x262bc8, Func Offset: 0xf8
	// Line 191, Address: 0x262bcc, Func Offset: 0xfc
	// Line 192, Address: 0x262bd4, Func Offset: 0x104
	// Line 191, Address: 0x262bd8, Func Offset: 0x108
	// Line 192, Address: 0x262bdc, Func Offset: 0x10c
	// Line 194, Address: 0x262be4, Func Offset: 0x114
	// Line 196, Address: 0x262bf8, Func Offset: 0x128
	// Line 200, Address: 0x262c00, Func Offset: 0x130
	// Line 202, Address: 0x262c38, Func Offset: 0x168
	// Line 203, Address: 0x262c3c, Func Offset: 0x16c
	// Line 202, Address: 0x262c40, Func Offset: 0x170
	// Line 203, Address: 0x262c44, Func Offset: 0x174
	// Line 205, Address: 0x262c4c, Func Offset: 0x17c
	// Line 208, Address: 0x262c58, Func Offset: 0x188
	// Line 211, Address: 0x262c5c, Func Offset: 0x18c
	// Line 205, Address: 0x262c60, Func Offset: 0x190
	// Line 208, Address: 0x262c64, Func Offset: 0x194
	// Line 209, Address: 0x262c6c, Func Offset: 0x19c
	// Line 213, Address: 0x262c70, Func Offset: 0x1a0
	// Line 214, Address: 0x262c78, Func Offset: 0x1a8
	// Line 216, Address: 0x262c8c, Func Offset: 0x1bc
	// Line 217, Address: 0x262c94, Func Offset: 0x1c4
	// Line 219, Address: 0x262c9c, Func Offset: 0x1cc
	// Line 222, Address: 0x262cb0, Func Offset: 0x1e0
	// Line 224, Address: 0x262cc8, Func Offset: 0x1f8
	// Line 226, Address: 0x262cec, Func Offset: 0x21c
	// Line 229, Address: 0x262cf4, Func Offset: 0x224
	// Line 230, Address: 0x262d08, Func Offset: 0x238
	// Line 235, Address: 0x262d10, Func Offset: 0x240
	// Line 237, Address: 0x262d8c, Func Offset: 0x2bc
	// Line 239, Address: 0x262d90, Func Offset: 0x2c0
	// Line 240, Address: 0x262d98, Func Offset: 0x2c8
	// Line 242, Address: 0x262dac, Func Offset: 0x2dc
	// Line 244, Address: 0x262dc4, Func Offset: 0x2f4
	// Line 245, Address: 0x262dcc, Func Offset: 0x2fc
	// Line 247, Address: 0x262dd4, Func Offset: 0x304
	// Line 248, Address: 0x262dd8, Func Offset: 0x308
	// Func End, Address: 0x262e00, Func Offset: 0x330
}

