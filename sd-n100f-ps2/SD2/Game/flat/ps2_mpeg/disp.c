typedef struct VoData;
typedef struct sceGsPrim;
typedef struct sceGsDrawEnv1;
typedef struct sceGsDthe;
typedef struct sceGsColclamp;
typedef struct sceGifPacket;
typedef struct sceGsScissor;
typedef struct VoTag;
typedef struct sceDmaChan;
typedef struct sceGsDBuff;
typedef struct tGS_SMODE2;
typedef struct sceGsXyoffset;
typedef struct VoBuf;
typedef struct _sceDmaTag;
typedef struct sceGsXyz;
typedef struct tGS_DISPFB2;
typedef struct tD_CHCR;
typedef struct tGS_BGCOLOR;
typedef struct sceGsPrmodecont;
typedef struct sceGsTest;
typedef struct sceGsRgbaq;
typedef struct sceGsZbuf;
typedef struct sceGsFrame;
typedef struct tGS_PMODE;
typedef struct sceGsDispEnv;
typedef struct sceGifTag;
typedef struct sceGsClear;
typedef struct tGS_DISPLAY2;


typedef uint8 type_0[1382400];
typedef int32 type_1[15];
typedef uint32 type_2[32896];
typedef uint32 type_3[32896][2];
typedef sceGsDispEnv type_4[2];
typedef uint32 type_5[3];
typedef uint32 type_6[3];
typedef uint32 type_7[3];
typedef ulong32 type_8[2];
typedef uint32 type_9[3];
typedef uint32 type_10[3];
typedef ulong32 type_11[2];
typedef uint32 type_12[3];
typedef ulong32 type_13[2];
typedef uint32 type_14[4];
typedef uint32 type_15[4];
typedef uint32 type_16[3];
typedef uint32 type_17[2];

struct VoData
{
	uint8 v[1382400];
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

struct sceGifPacket
{
	uint32* pCurrent;
	<unknown fundamental type (0xa510)>* pBase;
	<unknown fundamental type (0xa510)>* pDmaTag;
	ulong32* pGifTag;
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

struct VoTag
{
	int32 status;
	int32 dummy[15];
	uint32 v[32896][2];
};

struct sceDmaChan
{
	tD_CHCR chcr;
	uint32 p0[3];
	void* madr;
	uint32 p1[3];
	uint32 qwc;
	uint32 p2[3];
	_sceDmaTag* tadr;
	uint32 p3[3];
	void* as0;
	uint32 p4[3];
	void* as1;
	uint32 p5[3];
	uint32 p6[4];
	uint32 p7[4];
	void* sadr;
	uint32 p8[3];
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

struct VoBuf
{
	VoData* data;
	VoTag* tag;
	int32 write;
	int32 count;
	int32 size;
};

struct _sceDmaTag
{
	uint16 qwc;
	uint8 mark;
	uint8 id;
	_sceDmaTag* next;
	uint32 p[2];
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

struct tD_CHCR
{
	struct
	{
		uint32 DIR : 1;
		uint32 p0 : 1;
		uint32 MOD : 2;
		uint32 ASP : 2;
		uint32 TTE : 1;
		uint32 TIE : 1;
		uint32 STR : 1;
		uint32 p1 : 7;
		uint32 TAG : 16;
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

struct sceGsPrmodecont
{
	struct
	{
		ulong32 AC : 1;
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

struct sceGsDispEnv
{
	tGS_PMODE pmode;
	tGS_SMODE2 smode2;
	tGS_DISPFB2 dispfb;
	tGS_DISPLAY2 display;
	tGS_BGCOLOR bgcolor;
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

int32 isCountVblank;
int32 vblankCount;
int32 isFrameEnd;
int32 oddeven;
int32 handler_error;
int32 frd;
VoBuf voBuf;
sceGsDBuff sony_db;

void endDisplay();
void startDisplay(int32 waitEven);
int32 handler_endimage();
int32 vblankHandler();
void setImageTag(uint32* tags, void* image, int32 index, int32 image_w, int32 image_h);
void clearGsMem(int32 r, int32 g, int32 b, int32 disp_width, int32 disp_height);

// endDisplay__Fv
// Start address: 0x262e00
void endDisplay()
{
	// Line 323, Address: 0x262e00, Func Offset: 0
	// Line 325, Address: 0x262e04, Func Offset: 0x4
	// Func End, Address: 0x262e0c, Func Offset: 0xc
}

// startDisplay__Fi
// Start address: 0x262e10
void startDisplay(int32 waitEven)
{
	// Line 307, Address: 0x262e10, Func Offset: 0
	// Line 310, Address: 0x262e20, Func Offset: 0x10
	// Line 313, Address: 0x262e3c, Func Offset: 0x2c
	// Line 312, Address: 0x262e44, Func Offset: 0x34
	// Line 314, Address: 0x262e48, Func Offset: 0x38
	// Line 315, Address: 0x262e4c, Func Offset: 0x3c
	// Func End, Address: 0x262e5c, Func Offset: 0x4c
}

// handler_endimage__Fi
// Start address: 0x262e60
int32 handler_endimage()
{
	// Line 292, Address: 0x262e60, Func Offset: 0
	// Line 293, Address: 0x262e68, Func Offset: 0x8
	// Line 294, Address: 0x262e74, Func Offset: 0x14
	// Line 295, Address: 0x262e7c, Func Offset: 0x1c
	// Line 297, Address: 0x262e80, Func Offset: 0x20
	// Line 299, Address: 0x262e88, Func Offset: 0x28
	// Line 298, Address: 0x262e8c, Func Offset: 0x2c
	// Line 299, Address: 0x262e90, Func Offset: 0x30
	// Func End, Address: 0x262e98, Func Offset: 0x38
}

// vblankHandler__Fi
// Start address: 0x262ea0
int32 vblankHandler()
{
	VoTag* tag;
	sceDmaChan* dmaGif_loadimage;
	// Line 239, Address: 0x262ea0, Func Offset: 0
	// Line 240, Address: 0x262eac, Func Offset: 0xc
	// Line 241, Address: 0x262ebc, Func Offset: 0x1c
	// Line 243, Address: 0x262edc, Func Offset: 0x3c
	// Line 245, Address: 0x262ee8, Func Offset: 0x48
	// Line 247, Address: 0x262eec, Func Offset: 0x4c
	// Line 245, Address: 0x262ef4, Func Offset: 0x54
	// Line 247, Address: 0x262ef8, Func Offset: 0x58
	// Line 248, Address: 0x262f04, Func Offset: 0x64
	// Line 249, Address: 0x262f10, Func Offset: 0x70
	// Line 250, Address: 0x262f1c, Func Offset: 0x7c
	// Line 251, Address: 0x262f24, Func Offset: 0x84
	// Line 252, Address: 0x262f30, Func Offset: 0x90
	// Line 253, Address: 0x262f38, Func Offset: 0x98
	// Line 256, Address: 0x262f40, Func Offset: 0xa0
	// Line 260, Address: 0x262f9c, Func Offset: 0xfc
	// Line 261, Address: 0x262fb8, Func Offset: 0x118
	// Line 264, Address: 0x262fc4, Func Offset: 0x124
	// Line 265, Address: 0x262fd0, Func Offset: 0x130
	// Line 267, Address: 0x262fdc, Func Offset: 0x13c
	// Line 269, Address: 0x262fe0, Func Offset: 0x140
	// Line 270, Address: 0x263004, Func Offset: 0x164
	// Line 273, Address: 0x26300c, Func Offset: 0x16c
	// Line 274, Address: 0x263018, Func Offset: 0x178
	// Line 276, Address: 0x26302c, Func Offset: 0x18c
	// Line 278, Address: 0x263030, Func Offset: 0x190
	// Line 282, Address: 0x263038, Func Offset: 0x198
	// Line 283, Address: 0x263040, Func Offset: 0x1a0
	// Line 285, Address: 0x263044, Func Offset: 0x1a4
	// Func End, Address: 0x263058, Func Offset: 0x1b8
}

// setImageTag__FPUiPviii
// Start address: 0x263060
void setImageTag(uint32* tags, void* image, int32 index, int32 image_w, int32 image_h)
{
	ulong32* tag;
	ulong32 giftag_eop[2];
	ulong32 giftag[2];
	sceGifPacket packet;
	int32 j;
	int32 i;
	int32 mby;
	int32 mbx;
	// Line 120, Address: 0x263060, Func Offset: 0
	// Line 132, Address: 0x26308c, Func Offset: 0x2c
	// Line 125, Address: 0x2630ac, Func Offset: 0x4c
	// Line 134, Address: 0x2630b0, Func Offset: 0x50
	// Line 132, Address: 0x2630bc, Func Offset: 0x5c
	// Line 134, Address: 0x2630c0, Func Offset: 0x60
	// Line 136, Address: 0x2630c4, Func Offset: 0x64
	// Line 126, Address: 0x2630cc, Func Offset: 0x6c
	// Line 136, Address: 0x2630d0, Func Offset: 0x70
	// Line 137, Address: 0x2630e8, Func Offset: 0x88
	// Line 139, Address: 0x2630f0, Func Offset: 0x90
	// Line 155, Address: 0x2630f8, Func Offset: 0x98
	// Line 159, Address: 0x26310c, Func Offset: 0xac
	// Line 160, Address: 0x26311c, Func Offset: 0xbc
	// Line 162, Address: 0x263134, Func Offset: 0xd4
	// Line 163, Address: 0x26314c, Func Offset: 0xec
	// Line 170, Address: 0x263154, Func Offset: 0xf4
	// Line 171, Address: 0x263164, Func Offset: 0x104
	// Line 173, Address: 0x263180, Func Offset: 0x120
	// Line 177, Address: 0x263194, Func Offset: 0x134
	// Line 178, Address: 0x2631a4, Func Offset: 0x144
	// Line 180, Address: 0x2631c0, Func Offset: 0x160
	// Line 181, Address: 0x2631d0, Func Offset: 0x170
	// Line 185, Address: 0x2631d8, Func Offset: 0x178
	// Line 186, Address: 0x2631e4, Func Offset: 0x184
	// Line 189, Address: 0x2631f8, Func Offset: 0x198
	// Line 187, Address: 0x2631fc, Func Offset: 0x19c
	// Line 189, Address: 0x263200, Func Offset: 0x1a0
	// Line 191, Address: 0x263218, Func Offset: 0x1b8
	// Line 190, Address: 0x263220, Func Offset: 0x1c0
	// Line 191, Address: 0x263224, Func Offset: 0x1c4
	// Line 192, Address: 0x263230, Func Offset: 0x1d0
	// Line 206, Address: 0x263240, Func Offset: 0x1e0
	// Line 210, Address: 0x263254, Func Offset: 0x1f4
	// Line 211, Address: 0x263264, Func Offset: 0x204
	// Line 212, Address: 0x263274, Func Offset: 0x214
	// Line 214, Address: 0x263284, Func Offset: 0x224
	// Line 219, Address: 0x2632a8, Func Offset: 0x248
	// Line 221, Address: 0x2632b8, Func Offset: 0x258
	// Line 222, Address: 0x2632cc, Func Offset: 0x26c
	// Line 223, Address: 0x2632e0, Func Offset: 0x280
	// Line 225, Address: 0x263318, Func Offset: 0x2b8
	// Line 227, Address: 0x263330, Func Offset: 0x2d0
	// Line 231, Address: 0x263338, Func Offset: 0x2d8
	// Line 232, Address: 0x263340, Func Offset: 0x2e0
	// Func End, Address: 0x263370, Func Offset: 0x310
}

// clearGsMem__Fiiiii
// Start address: 0x263370
void clearGsMem(int32 r, int32 g, int32 b, int32 disp_width, int32 disp_height)
{
	sceDmaChan* dmaGif;
	<unknown fundamental type (0xa510)>* packetBase;
	sceGifPacket packet;
	ulong32 giftag_clear[2];
	// Line 59, Address: 0x263370, Func Offset: 0
	// Line 60, Address: 0x263390, Func Offset: 0x20
	// Line 59, Address: 0x263394, Func Offset: 0x24
	// Line 60, Address: 0x263398, Func Offset: 0x28
	// Line 63, Address: 0x2633b8, Func Offset: 0x48
	// Line 65, Address: 0x2633cc, Func Offset: 0x5c
	// Line 77, Address: 0x2633d8, Func Offset: 0x68
	// Line 68, Address: 0x2633dc, Func Offset: 0x6c
	// Line 69, Address: 0x2633e8, Func Offset: 0x78
	// Line 70, Address: 0x2633f4, Func Offset: 0x84
	// Line 71, Address: 0x2633fc, Func Offset: 0x8c
	// Line 69, Address: 0x263400, Func Offset: 0x90
	// Line 70, Address: 0x26340c, Func Offset: 0x9c
	// Line 71, Address: 0x263410, Func Offset: 0xa0
	// Line 72, Address: 0x263414, Func Offset: 0xa4
	// Line 77, Address: 0x26341c, Func Offset: 0xac
	// Line 70, Address: 0x263424, Func Offset: 0xb4
	// Line 71, Address: 0x263430, Func Offset: 0xc0
	// Line 72, Address: 0x263440, Func Offset: 0xd0
	// Line 77, Address: 0x26344c, Func Offset: 0xdc
	// Line 82, Address: 0x2634a8, Func Offset: 0x138
	// Line 83, Address: 0x2634b4, Func Offset: 0x144
	// Line 84, Address: 0x2634c0, Func Offset: 0x150
	// Line 86, Address: 0x2634c8, Func Offset: 0x158
	// Line 87, Address: 0x2634d4, Func Offset: 0x164
	// Line 89, Address: 0x2634dc, Func Offset: 0x16c
	// Line 93, Address: 0x2634f0, Func Offset: 0x180
	// Line 94, Address: 0x263500, Func Offset: 0x190
	// Line 96, Address: 0x263510, Func Offset: 0x1a0
	// Line 97, Address: 0x263544, Func Offset: 0x1d4
	// Line 99, Address: 0x263554, Func Offset: 0x1e4
	// Line 101, Address: 0x26356c, Func Offset: 0x1fc
	// Line 104, Address: 0x263574, Func Offset: 0x204
	// Line 106, Address: 0x26357c, Func Offset: 0x20c
	// Line 107, Address: 0x263584, Func Offset: 0x214
	// Line 108, Address: 0x263590, Func Offset: 0x220
	// Line 109, Address: 0x26359c, Func Offset: 0x22c
	// Line 111, Address: 0x2635a8, Func Offset: 0x238
	// Line 113, Address: 0x2635b0, Func Offset: 0x240
	// Func End, Address: 0x2635d8, Func Offset: 0x268
}

