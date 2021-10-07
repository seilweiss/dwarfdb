typedef struct ReadBuf;
typedef struct AudioDec;
typedef struct TimeStamp;
typedef struct sceMpegCbDataStr;
typedef struct ViBuf;
typedef struct sceIpuDmaEnv;
typedef struct VideoDec;
typedef struct sceMpeg;
typedef struct SpuStreamHeader;
typedef enum sceMpegCbType;
typedef struct SpuStreamBody;


typedef uint8 type_0[327680];
typedef int8 type_1[4];
typedef int8 type_2[4];

struct ReadBuf
{
	uint8 data[327680];
	int32 put;
	int32 count;
	int32 size;
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

struct TimeStamp
{
	long32 pts;
	long32 dts;
	int32 pos;
	int32 len;
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

struct SpuStreamBody
{
	int8 id[4];
	int32 size;
};

AudioDec audioDec;
VideoDec videoDec;

int32 pcmCallback(sceMpegCbDataStr* str, void* data);
int32 videoCallback(sceMpegCbDataStr* str, void* data);

// pcmCallback__FP7sceMpegP16sceMpegCbDataStrPv
// Start address: 0x262080
int32 pcmCallback(sceMpegCbDataStr* str, void* data)
{
	int32 len;
	int32 d1;
	int32 d0;
	uint8* pd1;
	uint8* pd0;
	int32 s1;
	uint8* ps0;
	ReadBuf* rb;
	// Line 83, Address: 0x262080, Func Offset: 0
	// Line 98, Address: 0x2620ac, Func Offset: 0x2c
	// Line 97, Address: 0x2620b4, Func Offset: 0x34
	// Line 98, Address: 0x2620b8, Func Offset: 0x38
	// Line 97, Address: 0x2620bc, Func Offset: 0x3c
	// Line 98, Address: 0x2620c0, Func Offset: 0x40
	// Line 99, Address: 0x2620d0, Func Offset: 0x50
	// Line 101, Address: 0x2620d4, Func Offset: 0x54
	// Line 104, Address: 0x2620d8, Func Offset: 0x58
	// Line 101, Address: 0x2620dc, Func Offset: 0x5c
	// Line 104, Address: 0x2620e0, Func Offset: 0x60
	// Line 105, Address: 0x2620f0, Func Offset: 0x70
	// Line 107, Address: 0x2620f4, Func Offset: 0x74
	// Line 108, Address: 0x262110, Func Offset: 0x90
	// Line 110, Address: 0x2621e4, Func Offset: 0x164
	// Line 116, Address: 0x2621f4, Func Offset: 0x174
	// Line 117, Address: 0x262200, Func Offset: 0x180
	// Func End, Address: 0x262230, Func Offset: 0x1b0
}

// videoCallback__FP7sceMpegP16sceMpegCbDataStrPv
// Start address: 0x262230
int32 videoCallback(sceMpegCbDataStr* str, void* data)
{
	int32 d1;
	int32 d0;
	uint8* pd1Unc;
	uint8* pd0Unc;
	uint8* pd1;
	uint8* pd0;
	int32 s1;
	int32 s0;
	uint8* ps0;
	ReadBuf* rb;
	// Line 43, Address: 0x262230, Func Offset: 0
	// Line 47, Address: 0x262260, Func Offset: 0x30
	// Line 45, Address: 0x26226c, Func Offset: 0x3c
	// Line 47, Address: 0x262270, Func Offset: 0x40
	// Line 56, Address: 0x26228c, Func Offset: 0x5c
	// Line 48, Address: 0x262290, Func Offset: 0x60
	// Line 56, Address: 0x262294, Func Offset: 0x64
	// Line 57, Address: 0x2622ac, Func Offset: 0x7c
	// Line 58, Address: 0x2622b8, Func Offset: 0x88
	// Line 57, Address: 0x2622bc, Func Offset: 0x8c
	// Line 60, Address: 0x2622c0, Func Offset: 0x90
	// Line 57, Address: 0x2622c4, Func Offset: 0x94
	// Line 60, Address: 0x2622cc, Func Offset: 0x9c
	// Line 58, Address: 0x2622d0, Func Offset: 0xa0
	// Line 60, Address: 0x2622d8, Func Offset: 0xa8
	// Line 63, Address: 0x2623a0, Func Offset: 0x170
	// Line 64, Address: 0x2623a8, Func Offset: 0x178
	// Line 65, Address: 0x2623d0, Func Offset: 0x1a0
	// Line 69, Address: 0x2623dc, Func Offset: 0x1ac
	// Line 75, Address: 0x2623ec, Func Offset: 0x1bc
	// Line 76, Address: 0x2623f8, Func Offset: 0x1c8
	// Func End, Address: 0x262428, Func Offset: 0x1f8
}

