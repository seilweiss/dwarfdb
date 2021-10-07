typedef struct VideoDec;
typedef struct sceMpeg;
typedef struct sceMpegCbData;
typedef struct sceMpegCbDataError;
typedef struct sceMpegCbDataTimeStamp;
typedef struct VoData;
typedef struct sceMpegCbDataStr;
typedef struct VoTag;
typedef struct TimeStamp;
typedef struct VoBuf;
typedef struct sceIpuDmaEnv;
typedef struct ViBuf;
typedef enum sceMpegCbType;

typedef int32(*type_0)(sceMpeg*, sceMpegCbData*, void*);
typedef int32(*type_1)(sceMpeg*, sceMpegCbData*, void*);
typedef int32(*type_2)(sceMpeg*, sceMpegCbData*, void*);
typedef int32(*type_3)(sceMpeg*, sceMpegCbDataTimeStamp*, void*);
typedef int32(*type_9)(sceMpeg*, sceMpegCbDataError*, void*);
typedef int32(*type_10)(sceMpeg*, sceMpegCbData*, void*);

typedef uint8 type_4[1382400];
typedef int32 type_5[15];
typedef uint32 type_6[32896];
typedef uint32 type_7[32896][2];
typedef uint8 type_8[4];

struct VideoDec
{
	sceMpeg mpeg;
	ViBuf vibuf;
	uint32 state;
	int32 sema;
	int32 hid_endimage;
	int32 hid_vblank;
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

struct sceMpegCbData
{
	union
	{
		sceMpegCbType type;
		sceMpegCbDataError error;
		sceMpegCbDataTimeStamp ts;
		sceMpegCbDataStr str;
	};
};

struct sceMpegCbDataError
{
	sceMpegCbType type;
	int8* errMessage;
};

struct sceMpegCbDataTimeStamp
{
	sceMpegCbType type;
	long32 pts;
	long32 dts;
};

struct VoData
{
	uint8 v[1382400];
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

struct VoTag
{
	int32 status;
	int32 dummy[15];
	uint32 v[32896][2];
};

struct TimeStamp
{
	long32 pts;
	long32 dts;
	int32 pos;
	int32 len;
};

struct VoBuf
{
	VoData* data;
	VoTag* tag;
	int32 write;
	int32 count;
	int32 size;
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

VideoDec videoDec;
VoBuf voBuf;
int32(*mpegTS)(sceMpeg*, sceMpegCbDataTimeStamp*, void*);
int32(*mpegRestartDMA)(sceMpeg*, sceMpegCbData*, void*);
int32(*mpegStopDMA)(sceMpeg*, sceMpegCbData*, void*);
int32(*mpegNodata)(sceMpeg*, sceMpegCbData*, void*);
int32(*mpegError)(sceMpeg*, sceMpegCbDataError*, void*);

int32 mpegTS(sceMpegCbDataTimeStamp* cbts);
int32 mpegRestartDMA();
int32 mpegStopDMA();
int32 mpegNodata();
int32 mpegError(sceMpegCbDataError* cberror);
int32 decBs0(VideoDec* vd);
void videoDecMain(VideoDec* vd);
int32 videoDecIsFlushed(VideoDec* vd);
int32 videoDecFlush(VideoDec* vd);
int32 videoDecPutTs(VideoDec* vd, long32 pts_val, long32 dts_val, uint8* start, int32 len);
uint32 videoDecGetState(VideoDec* vd);
void videoDecAbort(VideoDec* vd);
int32 videoDecDelete(VideoDec* vd);
void videoDecEndPut(VideoDec* vd, int32 size);
void videoDecBeginPut(VideoDec* vd, uint8** ptr0, int32* len0, uint8** ptr1, int32* len1);
int32 videoDecSetStream(VideoDec* vd, int32 strType, int32 ch, int32(*cb)(sceMpeg*, sceMpegCbData*, void*), void* data);
int32 videoDecCreate(VideoDec* vd, uint8* mpegWork, int32 mpegWorkSize, <unknown fundamental type (0xa510)>* data, <unknown fundamental type (0xa510)>* tag, int32 tagSize, TimeStamp* pts, int32 n_pts);

// mpegTS__FP7sceMpegP22sceMpegCbDataTimeStampPv
// Start address: 0x260300
int32 mpegTS(sceMpegCbDataTimeStamp* cbts)
{
	TimeStamp ts;
	// Line 405, Address: 0x260300, Func Offset: 0
	// Line 408, Address: 0x260310, Func Offset: 0x10
	// Line 409, Address: 0x260320, Func Offset: 0x20
	// Line 411, Address: 0x260324, Func Offset: 0x24
	// Line 409, Address: 0x260328, Func Offset: 0x28
	// Line 410, Address: 0x26032c, Func Offset: 0x2c
	// Line 412, Address: 0x260334, Func Offset: 0x34
	// Func End, Address: 0x260344, Func Offset: 0x44
}

// mpegRestartDMA__FP7sceMpegP13sceMpegCbDataPv
// Start address: 0x260350
int32 mpegRestartDMA()
{
	// Line 393, Address: 0x260350, Func Offset: 0
	// Line 395, Address: 0x260354, Func Offset: 0x4
	// Line 393, Address: 0x260358, Func Offset: 0x8
	// Line 395, Address: 0x26035c, Func Offset: 0xc
	// Line 397, Address: 0x260364, Func Offset: 0x14
	// Line 396, Address: 0x260368, Func Offset: 0x18
	// Line 397, Address: 0x26036c, Func Offset: 0x1c
	// Func End, Address: 0x260374, Func Offset: 0x24
}

// mpegStopDMA__FP7sceMpegP13sceMpegCbDataPv
// Start address: 0x260380
int32 mpegStopDMA()
{
	// Line 382, Address: 0x260380, Func Offset: 0
	// Line 384, Address: 0x260384, Func Offset: 0x4
	// Line 382, Address: 0x260388, Func Offset: 0x8
	// Line 384, Address: 0x26038c, Func Offset: 0xc
	// Line 386, Address: 0x260394, Func Offset: 0x14
	// Line 385, Address: 0x260398, Func Offset: 0x18
	// Line 386, Address: 0x26039c, Func Offset: 0x1c
	// Func End, Address: 0x2603a4, Func Offset: 0x24
}

// mpegNodata__FP7sceMpegP13sceMpegCbDataPv
// Start address: 0x2603b0
int32 mpegNodata()
{
	// Line 371, Address: 0x2603b0, Func Offset: 0
	// Line 372, Address: 0x2603b8, Func Offset: 0x8
	// Line 373, Address: 0x2603c0, Func Offset: 0x10
	// Line 375, Address: 0x2603cc, Func Offset: 0x1c
	// Line 374, Address: 0x2603d0, Func Offset: 0x20
	// Line 375, Address: 0x2603d4, Func Offset: 0x24
	// Func End, Address: 0x2603dc, Func Offset: 0x2c
}

// mpegError__FP7sceMpegP18sceMpegCbDataErrorPv
// Start address: 0x2603e0
int32 mpegError(sceMpegCbDataError* cberror)
{
	// Line 361, Address: 0x2603e0, Func Offset: 0
	// Line 362, Address: 0x2603e8, Func Offset: 0x8
	// Line 364, Address: 0x2603f8, Func Offset: 0x18
	// Line 363, Address: 0x2603fc, Func Offset: 0x1c
	// Line 364, Address: 0x260400, Func Offset: 0x20
	// Func End, Address: 0x260408, Func Offset: 0x28
}

// decBs0__FP8VideoDec
// Start address: 0x260410
int32 decBs0(VideoDec* vd)
{
	int32 image_h;
	int32 image_w;
	int32 i;
	int32 status;
	int32 ret;
	VoData* voData;
	// Line 284, Address: 0x260410, Func Offset: 0
	// Line 295, Address: 0x26043c, Func Offset: 0x2c
	// Line 297, Address: 0x260454, Func Offset: 0x44
	// Line 299, Address: 0x260464, Func Offset: 0x54
	// Line 300, Address: 0x260474, Func Offset: 0x64
	// Line 309, Address: 0x26047c, Func Offset: 0x6c
	// Line 310, Address: 0x260484, Func Offset: 0x74
	// Line 317, Address: 0x26049c, Func Offset: 0x8c
	// Line 319, Address: 0x2604ac, Func Offset: 0x9c
	// Line 320, Address: 0x2604b4, Func Offset: 0xa4
	// Line 323, Address: 0x2604c0, Func Offset: 0xb0
	// Line 327, Address: 0x2604cc, Func Offset: 0xbc
	// Line 328, Address: 0x2604d0, Func Offset: 0xc0
	// Line 330, Address: 0x2604d4, Func Offset: 0xc4
	// Line 333, Address: 0x2604e4, Func Offset: 0xd4
	// Line 337, Address: 0x260508, Func Offset: 0xf8
	// Line 339, Address: 0x26054c, Func Offset: 0x13c
	// Line 346, Address: 0x260560, Func Offset: 0x150
	// Line 348, Address: 0x26056c, Func Offset: 0x15c
	// Line 349, Address: 0x260574, Func Offset: 0x164
	// Line 351, Address: 0x260588, Func Offset: 0x178
	// Line 353, Address: 0x260594, Func Offset: 0x184
	// Line 354, Address: 0x260598, Func Offset: 0x188
	// Func End, Address: 0x2605c4, Func Offset: 0x1b4
}

// videoDecMain__FP8VideoDec
// Start address: 0x2605d0
void videoDecMain(VideoDec* vd)
{
	// Line 263, Address: 0x2605d0, Func Offset: 0
	// Line 264, Address: 0x2605e0, Func Offset: 0x10
	// Line 266, Address: 0x2605ec, Func Offset: 0x1c
	// Line 268, Address: 0x2605fc, Func Offset: 0x2c
	// Line 271, Address: 0x260604, Func Offset: 0x34
	// Line 273, Address: 0x260620, Func Offset: 0x50
	// Line 274, Address: 0x260628, Func Offset: 0x58
	// Func End, Address: 0x26063c, Func Offset: 0x6c
}

// videoDecIsFlushed__FP8VideoDec
// Start address: 0x260640
int32 videoDecIsFlushed(VideoDec* vd)
{
	// Line 253, Address: 0x260640, Func Offset: 0
	// Line 254, Address: 0x260654, Func Offset: 0x14
	// Line 256, Address: 0x260680, Func Offset: 0x40
	// Func End, Address: 0x260694, Func Offset: 0x54
}

// videoDecFlush__FP8VideoDec
// Start address: 0x2606a0
int32 videoDecFlush(VideoDec* vd)
{
	int32 d1;
	int32 d0;
	uint8 seq_end_code[4];
	uint8* pd1Unc;
	uint8* pd0Unc;
	uint8* pd1;
	uint8* pd0;
	// Line 216, Address: 0x2606a0, Func Offset: 0
	// Line 221, Address: 0x2606b8, Func Offset: 0x18
	// Line 225, Address: 0x2606c4, Func Offset: 0x24
	// Line 227, Address: 0x2606e0, Func Offset: 0x40
	// Line 228, Address: 0x2606f8, Func Offset: 0x58
	// Line 231, Address: 0x260700, Func Offset: 0x60
	// Line 232, Address: 0x260704, Func Offset: 0x64
	// Line 231, Address: 0x260708, Func Offset: 0x68
	// Line 234, Address: 0x260710, Func Offset: 0x70
	// Line 232, Address: 0x260714, Func Offset: 0x74
	// Line 231, Address: 0x260718, Func Offset: 0x78
	// Line 232, Address: 0x26071c, Func Offset: 0x7c
	// Line 231, Address: 0x260720, Func Offset: 0x80
	// Line 234, Address: 0x260724, Func Offset: 0x84
	// Line 236, Address: 0x2607e8, Func Offset: 0x148
	// Line 238, Address: 0x2607f4, Func Offset: 0x154
	// Line 240, Address: 0x2607fc, Func Offset: 0x15c
	// Line 241, Address: 0x260808, Func Offset: 0x168
	// Line 244, Address: 0x260810, Func Offset: 0x170
	// Line 245, Address: 0x260814, Func Offset: 0x174
	// Func End, Address: 0x260830, Func Offset: 0x190
}

// videoDecPutTs__FP8VideoDecllPUci
// Start address: 0x260830
int32 videoDecPutTs(VideoDec* vd, long32 pts_val, long32 dts_val, uint8* start, int32 len)
{
	TimeStamp ts;
	// Line 176, Address: 0x260830, Func Offset: 0
	// Line 180, Address: 0x260838, Func Offset: 0x8
	// Line 181, Address: 0x26083c, Func Offset: 0xc
	// Line 182, Address: 0x260840, Func Offset: 0x10
	// Line 184, Address: 0x260844, Func Offset: 0x14
	// Line 182, Address: 0x26084c, Func Offset: 0x1c
	// Line 183, Address: 0x260854, Func Offset: 0x24
	// Line 184, Address: 0x260858, Func Offset: 0x28
	// Line 185, Address: 0x260860, Func Offset: 0x30
	// Func End, Address: 0x26086c, Func Offset: 0x3c
}

// videoDecGetState__FP8VideoDec
// Start address: 0x260870
uint32 videoDecGetState(VideoDec* vd)
{
	// Line 155, Address: 0x260870, Func Offset: 0
	// Func End, Address: 0x260878, Func Offset: 0x8
}

// videoDecAbort__FP8VideoDec
// Start address: 0x260880
void videoDecAbort(VideoDec* vd)
{
	// Line 145, Address: 0x260880, Func Offset: 0
	// Line 146, Address: 0x260884, Func Offset: 0x4
	// Func End, Address: 0x26088c, Func Offset: 0xc
}

// videoDecDelete__FP8VideoDec
// Start address: 0x260890
int32 videoDecDelete(VideoDec* vd)
{
	// Line 132, Address: 0x260890, Func Offset: 0
	// Line 133, Address: 0x2608a0, Func Offset: 0x10
	// Line 134, Address: 0x2608a8, Func Offset: 0x18
	// Line 137, Address: 0x2608b0, Func Offset: 0x20
	// Line 136, Address: 0x2608b8, Func Offset: 0x28
	// Line 137, Address: 0x2608bc, Func Offset: 0x2c
	// Func End, Address: 0x2608c4, Func Offset: 0x34
}

// videoDecEndPut__FP8VideoDeci
// Start address: 0x2608d0
void videoDecEndPut(VideoDec* vd, int32 size)
{
	// Line 115, Address: 0x2608d0, Func Offset: 0
	// Func End, Address: 0x2608d8, Func Offset: 0x8
}

// videoDecBeginPut__FP8VideoDecPPUcPiPPUcPi
// Start address: 0x2608e0
void videoDecBeginPut(VideoDec* vd, uint8** ptr0, int32* len0, uint8** ptr1, int32* len1)
{
	// Line 106, Address: 0x2608e0, Func Offset: 0
	// Func End, Address: 0x2608e8, Func Offset: 0x8
}

// videoDecSetStream__FP8VideoDeciiPFP7sceMpegP13sceMpegCbDataPv_iPv
// Start address: 0x2608f0
int32 videoDecSetStream(VideoDec* vd, int32 strType, int32 ch, int32(*cb)(sceMpeg*, sceMpegCbData*, void*), void* data)
{
	// Line 94, Address: 0x2608f0, Func Offset: 0
	// Line 95, Address: 0x2608f8, Func Offset: 0x8
	// Line 97, Address: 0x260900, Func Offset: 0x10
	// Line 96, Address: 0x260904, Func Offset: 0x14
	// Line 97, Address: 0x260908, Func Offset: 0x18
	// Func End, Address: 0x260910, Func Offset: 0x20
}

// videoDecCreate__FP8VideoDecPUciP1P1iP9TimeStampi
// Start address: 0x260910
int32 videoDecCreate(VideoDec* vd, uint8* mpegWork, int32 mpegWorkSize, <unknown fundamental type (0xa510)>* data, <unknown fundamental type (0xa510)>* tag, int32 tagSize, TimeStamp* pts, int32 n_pts)
{
	// Line 55, Address: 0x260910, Func Offset: 0
	// Line 57, Address: 0x260944, Func Offset: 0x34
	// Line 60, Address: 0x26094c, Func Offset: 0x3c
	// Line 62, Address: 0x260964, Func Offset: 0x54
	// Line 64, Address: 0x26097c, Func Offset: 0x6c
	// Line 66, Address: 0x260994, Func Offset: 0x84
	// Line 68, Address: 0x2609ac, Func Offset: 0x9c
	// Line 74, Address: 0x2609c4, Func Offset: 0xb4
	// Line 77, Address: 0x2609e4, Func Offset: 0xd4
	// Line 76, Address: 0x260a00, Func Offset: 0xf0
	// Line 77, Address: 0x260a04, Func Offset: 0xf4
	// Func End, Address: 0x260a0c, Func Offset: 0xfc
}

