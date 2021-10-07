typedef struct ViBuf;
typedef struct QWORD;
typedef struct TimeStamp;
typedef struct sceIpuDmaEnv;
typedef struct SemaParam;


typedef ulong32 type_0[2];
typedef uint32 type_1[4];
typedef uint16 type_2[8];
typedef uint8 type_3[16];

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

struct QWORD
{
	union
	{
		<unknown fundamental type (0xa510)> q;
		ulong32 l[2];
		uint32 i[4];
		uint16 s[8];
		uint8 c[16];
	};
};

struct TimeStamp
{
	long32 pts;
	long32 dts;
	int32 pos;
	int32 len;
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

struct SemaParam
{
	int32 currentCount;
	int32 maxCount;
	int32 initCount;
	int32 numWaitThreads;
	uint32 attr;
	uint32 option;
};


int32 viBufGetTs(ViBuf* f, TimeStamp* ts);
int32 viBufPutTs(ViBuf* f, TimeStamp* ts);
int32 viBufModifyPts(ViBuf* f, TimeStamp* new_ts);
void viBufFlush(ViBuf* f);
int32 viBufCount(ViBuf* f);
int32 viBufDelete(ViBuf* f);
int32 viBufRestartDMA(ViBuf* f);
int32 viBufStopDMA(ViBuf* f);
int32 viBufAddDMA(ViBuf* f);
void viBufEndPut(ViBuf* f, int32 size);
void viBufBeginPut(ViBuf* f, uint8** ptr0, int32* len0, uint8** ptr1, int32* len1);
int32 viBufReset(ViBuf* f);
int32 viBufCreate(ViBuf* f, <unknown fundamental type (0xa510)>* data, <unknown fundamental type (0xa510)>* tag, int32 size, TimeStamp* ts, int32 n_ts);

// viBufGetTs__FP5ViBufP9TimeStamp
// Start address: 0x260a10
int32 viBufGetTs(ViBuf* f, TimeStamp* ts)
{
	int32 rd;
	int32 i;
	int32 tscount;
	int32 isEnd;
	int32 datasize;
	uint32 stop;
	int32 bp;
	uint32 ipubp;
	uint32 d4madr;
	// Line 618, Address: 0x260a10, Func Offset: 0
	// Line 619, Address: 0x260a2c, Func Offset: 0x1c
	// Line 632, Address: 0x260a38, Func Offset: 0x28
	// Line 620, Address: 0x260a40, Func Offset: 0x30
	// Line 632, Address: 0x260a48, Func Offset: 0x38
	// Line 635, Address: 0x260a50, Func Offset: 0x40
	// Line 637, Address: 0x260a54, Func Offset: 0x44
	// Line 642, Address: 0x260a58, Func Offset: 0x48
	// Line 639, Address: 0x260a5c, Func Offset: 0x4c
	// Line 642, Address: 0x260a60, Func Offset: 0x50
	// Line 635, Address: 0x260a68, Func Offset: 0x58
	// Line 639, Address: 0x260a6c, Func Offset: 0x5c
	// Line 642, Address: 0x260a70, Func Offset: 0x60
	// Line 640, Address: 0x260a74, Func Offset: 0x64
	// Line 637, Address: 0x260a78, Func Offset: 0x68
	// Line 642, Address: 0x260a7c, Func Offset: 0x6c
	// Line 645, Address: 0x260a98, Func Offset: 0x88
	// Line 648, Address: 0x260a9c, Func Offset: 0x8c
	// Line 642, Address: 0x260aa4, Func Offset: 0x94
	// Line 648, Address: 0x260aac, Func Offset: 0x9c
	// Line 642, Address: 0x260ab4, Func Offset: 0xa4
	// Line 648, Address: 0x260ab8, Func Offset: 0xa8
	// Line 650, Address: 0x260ac0, Func Offset: 0xb0
	// Line 652, Address: 0x260ac4, Func Offset: 0xb4
	// Line 650, Address: 0x260ac8, Func Offset: 0xb8
	// Line 652, Address: 0x260ae0, Func Offset: 0xd0
	// Line 655, Address: 0x260b18, Func Offset: 0x108
	// Line 657, Address: 0x260b1c, Func Offset: 0x10c
	// Line 655, Address: 0x260b20, Func Offset: 0x110
	// Line 656, Address: 0x260b24, Func Offset: 0x114
	// Line 657, Address: 0x260b34, Func Offset: 0x124
	// Line 658, Address: 0x260b40, Func Offset: 0x130
	// Line 661, Address: 0x260b4c, Func Offset: 0x13c
	// Line 662, Address: 0x260b74, Func Offset: 0x164
	// Line 663, Address: 0x260b78, Func Offset: 0x168
	// Line 665, Address: 0x260b98, Func Offset: 0x188
	// Line 668, Address: 0x260ba0, Func Offset: 0x190
	// Line 667, Address: 0x260bb8, Func Offset: 0x1a8
	// Line 668, Address: 0x260bbc, Func Offset: 0x1ac
	// Func End, Address: 0x260bc4, Func Offset: 0x1b4
}

// viBufPutTs__FP5ViBufP9TimeStamp
// Start address: 0x260bd0
int32 viBufPutTs(ViBuf* f, TimeStamp* ts)
{
	int32 ret;
	// Line 587, Address: 0x260bd0, Func Offset: 0
	// Line 590, Address: 0x260be8, Func Offset: 0x18
	// Line 592, Address: 0x260bf8, Func Offset: 0x28
	// Line 594, Address: 0x260c0c, Func Offset: 0x3c
	// Line 596, Address: 0x260c14, Func Offset: 0x44
	// Line 598, Address: 0x260c2c, Func Offset: 0x5c
	// Line 599, Address: 0x260c48, Func Offset: 0x78
	// Line 600, Address: 0x260c68, Func Offset: 0x98
	// Line 601, Address: 0x260c88, Func Offset: 0xb8
	// Line 603, Address: 0x260ca8, Func Offset: 0xd8
	// Line 604, Address: 0x260cb4, Func Offset: 0xe4
	// Line 606, Address: 0x260cd4, Func Offset: 0x104
	// Line 609, Address: 0x260cd8, Func Offset: 0x108
	// Line 611, Address: 0x260ce0, Func Offset: 0x110
	// Line 612, Address: 0x260ce4, Func Offset: 0x114
	// Func End, Address: 0x260cfc, Func Offset: 0x12c
}

// viBufModifyPts__FP5ViBufP9TimeStamp
// Start address: 0x260d00
int32 viBufModifyPts(ViBuf* f, TimeStamp* new_ts)
{
	int32 loop;
	int32 datasize;
	int32 rd;
	TimeStamp* ts;
	// Line 543, Address: 0x260d00, Func Offset: 0
	// Line 544, Address: 0x260d0c, Func Offset: 0xc
	// Line 545, Address: 0x260d10, Func Offset: 0x10
	// Line 543, Address: 0x260d14, Func Offset: 0x14
	// Line 547, Address: 0x260d2c, Func Offset: 0x2c
	// Line 549, Address: 0x260d34, Func Offset: 0x34
	// Line 551, Address: 0x260d48, Func Offset: 0x48
	// Line 555, Address: 0x260d60, Func Offset: 0x60
	// Line 556, Address: 0x260d8c, Func Offset: 0x8c
	// Line 558, Address: 0x260db0, Func Offset: 0xb0
	// Line 559, Address: 0x260dc8, Func Offset: 0xc8
	// Line 561, Address: 0x260dd4, Func Offset: 0xd4
	// Line 562, Address: 0x260de0, Func Offset: 0xe0
	// Line 564, Address: 0x260dec, Func Offset: 0xec
	// Line 565, Address: 0x260df0, Func Offset: 0xf0
	// Line 566, Address: 0x260df4, Func Offset: 0xf4
	// Line 567, Address: 0x260df8, Func Offset: 0xf8
	// Line 568, Address: 0x260dfc, Func Offset: 0xfc
	// Line 569, Address: 0x260e00, Func Offset: 0x100
	// Line 571, Address: 0x260e14, Func Offset: 0x114
	// Line 572, Address: 0x260e1c, Func Offset: 0x11c
	// Line 575, Address: 0x260e20, Func Offset: 0x120
	// Line 576, Address: 0x260e38, Func Offset: 0x138
	// Line 579, Address: 0x260e40, Func Offset: 0x140
	// Line 580, Address: 0x260e44, Func Offset: 0x144
	// Func End, Address: 0x260e4c, Func Offset: 0x14c
}

// viBufFlush__FP5ViBuf
// Start address: 0x260e50
void viBufFlush(ViBuf* f)
{
	// Line 528, Address: 0x260e50, Func Offset: 0
	// Line 529, Address: 0x260e60, Func Offset: 0x10
	// Line 531, Address: 0x260e68, Func Offset: 0x18
	// Line 533, Address: 0x260e88, Func Offset: 0x38
	// Line 534, Address: 0x260e90, Func Offset: 0x40
	// Func End, Address: 0x260ea0, Func Offset: 0x50
}

// viBufCount__FP5ViBuf
// Start address: 0x260ea0
int32 viBufCount(ViBuf* f)
{
	int32 ret;
	// Line 511, Address: 0x260ea0, Func Offset: 0
	// Line 514, Address: 0x260eb0, Func Offset: 0x10
	// Line 516, Address: 0x260eb8, Func Offset: 0x18
	// Line 518, Address: 0x260ec0, Func Offset: 0x20
	// Line 516, Address: 0x260ec4, Func Offset: 0x24
	// Line 518, Address: 0x260ec8, Func Offset: 0x28
	// Line 520, Address: 0x260ed0, Func Offset: 0x30
	// Line 521, Address: 0x260ed4, Func Offset: 0x34
	// Func End, Address: 0x260ee4, Func Offset: 0x44
}

// viBufDelete__FP5ViBuf
// Start address: 0x260ef0
int32 viBufDelete(ViBuf* f)
{
	// Line 479, Address: 0x260ef0, Func Offset: 0
	// Line 480, Address: 0x260efc, Func Offset: 0xc
	// Line 481, Address: 0x260f4c, Func Offset: 0x5c
	// Line 482, Address: 0x260f54, Func Offset: 0x64
	// Line 483, Address: 0x260f5c, Func Offset: 0x6c
	// Line 485, Address: 0x260f64, Func Offset: 0x74
	// Line 487, Address: 0x260f6c, Func Offset: 0x7c
	// Line 486, Address: 0x260f74, Func Offset: 0x84
	// Line 487, Address: 0x260f78, Func Offset: 0x88
	// Func End, Address: 0x260f80, Func Offset: 0x90
}

// viBufRestartDMA__FP5ViBuf
// Start address: 0x260f80
int32 viBufRestartDMA(ViBuf* f)
{
	int32 index_next;
	int32 index;
	uint32 d4chcr_next;
	uint32 d4tadr_next;
	uint32 d4qwc_next;
	uint32 d4madr_next;
	int32 bp;
	// Line 383, Address: 0x260f80, Func Offset: 0
	// Line 395, Address: 0x260fa8, Func Offset: 0x28
	// Line 398, Address: 0x260fb0, Func Offset: 0x30
	// Line 404, Address: 0x260fb4, Func Offset: 0x34
	// Line 402, Address: 0x260fb8, Func Offset: 0x38
	// Line 401, Address: 0x260fbc, Func Offset: 0x3c
	// Line 409, Address: 0x260fc0, Func Offset: 0x40
	// Line 403, Address: 0x260fc4, Func Offset: 0x44
	// Line 401, Address: 0x260fc8, Func Offset: 0x48
	// Line 402, Address: 0x260fdc, Func Offset: 0x5c
	// Line 401, Address: 0x260fe0, Func Offset: 0x60
	// Line 409, Address: 0x260fe8, Func Offset: 0x68
	// Line 398, Address: 0x260fec, Func Offset: 0x6c
	// Line 409, Address: 0x260ff0, Func Offset: 0x70
	// Line 411, Address: 0x260ff8, Func Offset: 0x78
	// Line 412, Address: 0x260ffc, Func Offset: 0x7c
	// Line 410, Address: 0x261000, Func Offset: 0x80
	// Line 412, Address: 0x261008, Func Offset: 0x88
	// Line 411, Address: 0x261010, Func Offset: 0x90
	// Line 412, Address: 0x261014, Func Offset: 0x94
	// Line 417, Address: 0x261018, Func Offset: 0x98
	// Line 420, Address: 0x26104c, Func Offset: 0xcc
	// Line 421, Address: 0x261080, Func Offset: 0x100
	// Line 422, Address: 0x261088, Func Offset: 0x108
	// Line 424, Address: 0x261090, Func Offset: 0x110
	// Line 426, Address: 0x2610e8, Func Offset: 0x168
	// Line 427, Address: 0x2610f4, Func Offset: 0x174
	// Line 428, Address: 0x261104, Func Offset: 0x184
	// Line 432, Address: 0x26114c, Func Offset: 0x1cc
	// Line 435, Address: 0x261160, Func Offset: 0x1e0
	// Line 436, Address: 0x261190, Func Offset: 0x210
	// Line 437, Address: 0x261194, Func Offset: 0x214
	// Line 442, Address: 0x2611a0, Func Offset: 0x220
	// Line 443, Address: 0x2611b8, Func Offset: 0x238
	// Line 444, Address: 0x2611c4, Func Offset: 0x244
	// Line 445, Address: 0x2611d0, Func Offset: 0x250
	// Line 448, Address: 0x261220, Func Offset: 0x2a0
	// Line 450, Address: 0x26122c, Func Offset: 0x2ac
	// Line 452, Address: 0x261250, Func Offset: 0x2d0
	// Line 454, Address: 0x261258, Func Offset: 0x2d8
	// Line 455, Address: 0x261274, Func Offset: 0x2f4
	// Line 458, Address: 0x261278, Func Offset: 0x2f8
	// Line 459, Address: 0x261280, Func Offset: 0x300
	// Line 460, Address: 0x261288, Func Offset: 0x308
	// Line 461, Address: 0x261290, Func Offset: 0x310
	// Line 462, Address: 0x26129c, Func Offset: 0x31c
	// Line 465, Address: 0x2612e8, Func Offset: 0x368
	// Line 467, Address: 0x2612f0, Func Offset: 0x370
	// Line 465, Address: 0x2612f4, Func Offset: 0x374
	// Line 467, Address: 0x2612f8, Func Offset: 0x378
	// Line 469, Address: 0x2612fc, Func Offset: 0x37c
	// Line 472, Address: 0x261304, Func Offset: 0x384
	// Line 471, Address: 0x261324, Func Offset: 0x3a4
	// Line 472, Address: 0x261328, Func Offset: 0x3a8
	// Func End, Address: 0x261330, Func Offset: 0x3b0
}

// viBufStopDMA__FP5ViBuf
// Start address: 0x261330
int32 viBufStopDMA(ViBuf* f)
{
	// Line 348, Address: 0x261330, Func Offset: 0
	// Line 349, Address: 0x261340, Func Offset: 0x10
	// Line 353, Address: 0x261348, Func Offset: 0x18
	// Line 355, Address: 0x261398, Func Offset: 0x68
	// Line 356, Address: 0x2613a4, Func Offset: 0x74
	// Line 357, Address: 0x2613b0, Func Offset: 0x80
	// Line 358, Address: 0x2613bc, Func Offset: 0x8c
	// Line 362, Address: 0x2613c8, Func Offset: 0x98
	// Line 365, Address: 0x2613ec, Func Offset: 0xbc
	// Line 366, Address: 0x261438, Func Offset: 0x108
	// Line 367, Address: 0x261444, Func Offset: 0x114
	// Line 368, Address: 0x261450, Func Offset: 0x120
	// Line 370, Address: 0x26145c, Func Offset: 0x12c
	// Line 371, Address: 0x261468, Func Offset: 0x138
	// Line 373, Address: 0x261474, Func Offset: 0x144
	// Line 376, Address: 0x26147c, Func Offset: 0x14c
	// Line 375, Address: 0x261484, Func Offset: 0x154
	// Line 376, Address: 0x261488, Func Offset: 0x158
	// Func End, Address: 0x261490, Func Offset: 0x160
}

// viBufAddDMA__FP5ViBuf
// Start address: 0x261490
int32 viBufAddDMA(ViBuf* f)
{
	int32 read_n;
	int32 read_start;
	int32 consume;
	int32 isNewData;
	uint32 d4chcr;
	int32 last;
	int32 index;
	int32 i;
	// Line 250, Address: 0x261490, Func Offset: 0
	// Line 260, Address: 0x2614a8, Func Offset: 0x18
	// Line 262, Address: 0x2614b4, Func Offset: 0x24
	// Line 263, Address: 0x2614c0, Func Offset: 0x30
	// Line 264, Address: 0x2614c8, Func Offset: 0x38
	// Line 265, Address: 0x2614d0, Func Offset: 0x40
	// Line 277, Address: 0x2614d8, Func Offset: 0x48
	// Line 278, Address: 0x261528, Func Offset: 0x98
	// Line 284, Address: 0x261530, Func Offset: 0xa0
	// Line 285, Address: 0x261558, Func Offset: 0xc8
	// Line 286, Address: 0x261590, Func Offset: 0x100
	// Line 287, Address: 0x2615a8, Func Offset: 0x118
	// Line 293, Address: 0x2615b4, Func Offset: 0x124
	// Line 294, Address: 0x2615c0, Func Offset: 0x130
	// Line 293, Address: 0x2615c4, Func Offset: 0x134
	// Line 294, Address: 0x2615d8, Func Offset: 0x148
	// Line 295, Address: 0x2615e8, Func Offset: 0x158
	// Line 301, Address: 0x261600, Func Offset: 0x170
	// Line 302, Address: 0x261608, Func Offset: 0x178
	// Line 303, Address: 0x261614, Func Offset: 0x184
	// Line 302, Address: 0x261624, Func Offset: 0x194
	// Line 309, Address: 0x261634, Func Offset: 0x1a4
	// Line 302, Address: 0x26163c, Func Offset: 0x1ac
	// Line 303, Address: 0x261640, Func Offset: 0x1b0
	// Line 313, Address: 0x261664, Func Offset: 0x1d4
	// Line 315, Address: 0x261670, Func Offset: 0x1e0
	// Line 321, Address: 0x2616b4, Func Offset: 0x224
	// Line 315, Address: 0x2616b8, Func Offset: 0x228
	// Line 321, Address: 0x2616c4, Func Offset: 0x234
	// Line 322, Address: 0x2616c8, Func Offset: 0x238
	// Line 321, Address: 0x2616d0, Func Offset: 0x240
	// Line 322, Address: 0x2616e0, Func Offset: 0x250
	// Line 324, Address: 0x2616e8, Func Offset: 0x258
	// Line 330, Address: 0x2616f4, Func Offset: 0x264
	// Line 331, Address: 0x261700, Func Offset: 0x270
	// Line 333, Address: 0x261708, Func Offset: 0x278
	// Line 335, Address: 0x261714, Func Offset: 0x284
	// Line 338, Address: 0x261760, Func Offset: 0x2d0
	// Line 340, Address: 0x261768, Func Offset: 0x2d8
	// Line 341, Address: 0x26176c, Func Offset: 0x2dc
	// Func End, Address: 0x261784, Func Offset: 0x2f4
}

// viBufEndPut__FP5ViBufi
// Start address: 0x261790
void viBufEndPut(ViBuf* f, int32 size)
{
	// Line 236, Address: 0x261790, Func Offset: 0
	// Line 237, Address: 0x2617a4, Func Offset: 0x14
	// Line 239, Address: 0x2617b0, Func Offset: 0x20
	// Line 240, Address: 0x2617b4, Func Offset: 0x24
	// Line 239, Address: 0x2617bc, Func Offset: 0x2c
	// Line 240, Address: 0x2617c4, Func Offset: 0x34
	// Line 242, Address: 0x2617d0, Func Offset: 0x40
	// Line 243, Address: 0x2617d8, Func Offset: 0x48
	// Func End, Address: 0x2617ec, Func Offset: 0x5c
}

// viBufBeginPut__FP5ViBufPPUcPiPPUcPi
// Start address: 0x2617f0
void viBufBeginPut(ViBuf* f, uint8** ptr0, int32* len0, uint8** ptr1, int32* len1)
{
	int32 en;
	int32 es;
	// Line 202, Address: 0x2617f0, Func Offset: 0
	// Line 208, Address: 0x261810, Func Offset: 0x20
	// Line 213, Address: 0x261828, Func Offset: 0x38
	// Line 214, Address: 0x261838, Func Offset: 0x48
	// Line 213, Address: 0x26183c, Func Offset: 0x4c
	// Line 214, Address: 0x26184c, Func Offset: 0x5c
	// Line 213, Address: 0x26185c, Func Offset: 0x6c
	// Line 216, Address: 0x261860, Func Offset: 0x70
	// Line 217, Address: 0x261870, Func Offset: 0x80
	// Line 218, Address: 0x26187c, Func Offset: 0x8c
	// Line 219, Address: 0x261880, Func Offset: 0x90
	// Line 221, Address: 0x261884, Func Offset: 0x94
	// Line 222, Address: 0x26188c, Func Offset: 0x9c
	// Line 223, Address: 0x261898, Func Offset: 0xa8
	// Line 224, Address: 0x2618a4, Func Offset: 0xb4
	// Line 225, Address: 0x2618ac, Func Offset: 0xbc
	// Line 228, Address: 0x2618bc, Func Offset: 0xcc
	// Line 229, Address: 0x2618c4, Func Offset: 0xd4
	// Func End, Address: 0x2618e4, Func Offset: 0xf4
}

// viBufReset__FP5ViBuf
// Start address: 0x2618f0
int32 viBufReset(ViBuf* f)
{
	int32 i;
	// Line 152, Address: 0x2618f0, Func Offset: 0
	// Line 155, Address: 0x2618f8, Func Offset: 0x8
	// Line 156, Address: 0x2618fc, Func Offset: 0xc
	// Line 157, Address: 0x261900, Func Offset: 0x10
	// Line 158, Address: 0x261904, Func Offset: 0x14
	// Line 160, Address: 0x26190c, Func Offset: 0x1c
	// Line 161, Address: 0x261910, Func Offset: 0x20
	// Line 162, Address: 0x261914, Func Offset: 0x24
	// Line 163, Address: 0x261924, Func Offset: 0x34
	// Line 167, Address: 0x261928, Func Offset: 0x38
	// Line 163, Address: 0x26192c, Func Offset: 0x3c
	// Line 164, Address: 0x261934, Func Offset: 0x44
	// Line 165, Address: 0x261940, Func Offset: 0x50
	// Line 166, Address: 0x26194c, Func Offset: 0x5c
	// Line 167, Address: 0x26195c, Func Offset: 0x6c
	// Line 173, Address: 0x261970, Func Offset: 0x80
	// Line 174, Address: 0x261984, Func Offset: 0x94
	// Line 180, Address: 0x26198c, Func Offset: 0x9c
	// Line 174, Address: 0x261990, Func Offset: 0xa0
	// Line 180, Address: 0x2619b4, Func Offset: 0xc4
	// Line 181, Address: 0x2619c8, Func Offset: 0xd8
	// Line 188, Address: 0x2619dc, Func Offset: 0xec
	// Line 181, Address: 0x2619e0, Func Offset: 0xf0
	// Line 188, Address: 0x2619fc, Func Offset: 0x10c
	// Line 189, Address: 0x261a00, Func Offset: 0x110
	// Line 190, Address: 0x261a14, Func Offset: 0x124
	// Line 191, Address: 0x261a24, Func Offset: 0x134
	// Line 194, Address: 0x261a74, Func Offset: 0x184
	// Line 193, Address: 0x261a78, Func Offset: 0x188
	// Line 194, Address: 0x261a7c, Func Offset: 0x18c
	// Func End, Address: 0x261a84, Func Offset: 0x194
}

// viBufCreate__FP5ViBufP1P1iP9TimeStampi
// Start address: 0x261a90
int32 viBufCreate(ViBuf* f, <unknown fundamental type (0xa510)>* data, <unknown fundamental type (0xa510)>* tag, int32 size, TimeStamp* ts, int32 n_ts)
{
	SemaParam param;
	// Line 117, Address: 0x261a90, Func Offset: 0
	// Line 121, Address: 0x261a9c, Func Offset: 0xc
	// Line 120, Address: 0x261aa8, Func Offset: 0x18
	// Line 121, Address: 0x261aac, Func Offset: 0x1c
	// Line 122, Address: 0x261ab4, Func Offset: 0x24
	// Line 123, Address: 0x261ab8, Func Offset: 0x28
	// Line 125, Address: 0x261ac0, Func Offset: 0x30
	// Line 126, Address: 0x261ac4, Func Offset: 0x34
	// Line 132, Address: 0x261ac8, Func Offset: 0x38
	// Line 133, Address: 0x261ad4, Func Offset: 0x44
	// Line 134, Address: 0x261ad8, Func Offset: 0x48
	// Line 140, Address: 0x261ae4, Func Offset: 0x54
	// Line 142, Address: 0x261aec, Func Offset: 0x5c
	// Line 145, Address: 0x261af0, Func Offset: 0x60
	// Line 144, Address: 0x261af8, Func Offset: 0x68
	// Line 145, Address: 0x261afc, Func Offset: 0x6c
	// Func End, Address: 0x261b04, Func Offset: 0x74
}

