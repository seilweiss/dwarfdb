typedef struct SpuStreamHeader;
typedef struct AudioDec;
typedef struct sceSifDmaData;
typedef struct SpuStreamBody;
typedef struct xSndVol;
typedef struct _xVec3;
typedef struct iSndVol;
typedef struct xSndGlobals;
typedef struct xSndVoiceInfo;
typedef struct iSndInfo;


typedef int8 type_0[4];
typedef int8 type_1[4];
typedef int8 type_2[2048];
typedef xSndVoiceInfo type_3[48];

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

struct sceSifDmaData
{
	uint32 data;
	uint32 addr;
	uint32 size;
	uint32 mode;
};

struct SpuStreamBody
{
	int8 id[4];
	int32 size;
};

struct xSndVol
{
	float32 volL;
	float32 volR;
};

struct _xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct iSndVol
{
	int16 volL;
	int16 volR;
};

struct xSndGlobals
{
	uint32 stereo;
	uint32 SndCount;
	xSndVol mastervol;
	xSndVol streamvol;
	xSndVol fxvol;
	xSndVoiceInfo voice[48];
	_xVec3 right;
	_xVec3 up;
	_xVec3 at;
	_xVec3 pos;
	float32 radius2;
	_xVec3 nearpos;
	_xVec3 farpos;
	uint32 suspendCD;
};

struct xSndVoiceInfo
{
	uint32 assetID;
	uint32 sndID;
	uint32 parentID;
	_xVec3* parentPos;
	int32 internalID;
	uint16 flags;
	uint16 priority;
	float32 vol;
	float32 pitch;
	uint32 sample_rate;
	uint32 deadct;
	_xVec3 pos;
	float32 radius2;
	iSndInfo ps;
};

struct iSndInfo
{
	uint32 flags;
	iSndVol vol;
	uint32 pitch;
};

int8 _0_buf[2048];
xSndGlobals gSnd;

int32 sendToIOP2area(int32 pd0, int32 d0, int32 pd1, int32 d1, uint8* ps0, int32 s0, uint8* ps1, int32 s1);
int32 audioDecSendToIOP(AudioDec* ad);
int32 audioDecIsPreset(AudioDec* ad);
void audioDecEndPut(AudioDec* ad, int32 size);
void audioDecBeginPut(AudioDec* ad, uint8** ptr0, int32* len0, uint8** ptr1, int32* len1);
void audioDecReset(AudioDec* ad);
void audioDecStart(AudioDec* ad);
int32 audioDecDelete(AudioDec* ad);
int32 audioDecCreate(AudioDec* ad, uint8* buff, int32 buffSize, int32 iopBuffSize);

// sendToIOP2area__FiiiiPUciPUci
// Start address: 0x2635e0
int32 sendToIOP2area(int32 pd0, int32 d0, int32 pd1, int32 d1, uint8* ps0, int32 s0, uint8* ps1, int32 s1)
{
	int32 diff;
	// Line 431, Address: 0x2635e0, Func Offset: 0
	// Line 432, Address: 0x263608, Func Offset: 0x28
	// Line 433, Address: 0x263634, Func Offset: 0x54
	// Line 434, Address: 0x263638, Func Offset: 0x58
	// Line 435, Address: 0x263644, Func Offset: 0x64
	// Line 436, Address: 0x26364c, Func Offset: 0x6c
	// Line 445, Address: 0x263650, Func Offset: 0x70
	// Line 446, Address: 0x26365c, Func Offset: 0x7c
	// Line 447, Address: 0x2636a8, Func Offset: 0xc8
	// Line 448, Address: 0x2636f8, Func Offset: 0x118
	// Line 449, Address: 0x26374c, Func Offset: 0x16c
	// Line 450, Address: 0x263754, Func Offset: 0x174
	// Line 451, Address: 0x263760, Func Offset: 0x180
	// Line 452, Address: 0x2637b0, Func Offset: 0x1d0
	// Line 453, Address: 0x263800, Func Offset: 0x220
	// Line 454, Address: 0x263854, Func Offset: 0x274
	// Line 455, Address: 0x26385c, Func Offset: 0x27c
	// Line 456, Address: 0x2638a8, Func Offset: 0x2c8
	// Line 459, Address: 0x2638f8, Func Offset: 0x318
	// Line 460, Address: 0x2638fc, Func Offset: 0x31c
	// Func End, Address: 0x263928, Func Offset: 0x348
}

// audioDecSendToIOP__FP8AudioDec
// Start address: 0x263930
int32 audioDecSendToIOP(AudioDec* ad)
{
	int32 pos;
	int32 countAdj;
	int32 count_sent;
	int32 s1;
	uint8* ps0;
	int32 d1;
	int32 d0;
	int32 pd1;
	int32 pd0;
	// Line 346, Address: 0x263930, Func Offset: 0
	// Line 354, Address: 0x263940, Func Offset: 0x10
	// Line 356, Address: 0x26397c, Func Offset: 0x4c
	// Line 360, Address: 0x263984, Func Offset: 0x54
	// Line 362, Address: 0x263990, Func Offset: 0x60
	// Line 363, Address: 0x263994, Func Offset: 0x64
	// Line 360, Address: 0x263998, Func Offset: 0x68
	// Line 361, Address: 0x26399c, Func Offset: 0x6c
	// Line 360, Address: 0x2639a4, Func Offset: 0x74
	// Line 364, Address: 0x2639a8, Func Offset: 0x78
	// Line 367, Address: 0x2639b0, Func Offset: 0x80
	// Line 369, Address: 0x2639c0, Func Offset: 0x90
	// Line 367, Address: 0x2639c8, Func Offset: 0x98
	// Line 369, Address: 0x2639d4, Func Offset: 0xa4
	// Line 370, Address: 0x263a28, Func Offset: 0xf8
	// Line 373, Address: 0x263a30, Func Offset: 0x100
	// Line 377, Address: 0x263a38, Func Offset: 0x108
	// Line 381, Address: 0x263a60, Func Offset: 0x130
	// Line 383, Address: 0x263a78, Func Offset: 0x148
	// Line 386, Address: 0x263a90, Func Offset: 0x160
	// Line 387, Address: 0x263ab0, Func Offset: 0x180
	// Line 390, Address: 0x263abc, Func Offset: 0x18c
	// Line 395, Address: 0x263ac0, Func Offset: 0x190
	// Line 390, Address: 0x263ac4, Func Offset: 0x194
	// Line 392, Address: 0x263acc, Func Offset: 0x19c
	// Line 393, Address: 0x263ad8, Func Offset: 0x1a8
	// Line 396, Address: 0x263af8, Func Offset: 0x1c8
	// Func End, Address: 0x263b0c, Func Offset: 0x1dc
}

// audioDecIsPreset__FP8AudioDec
// Start address: 0x263b10
int32 audioDecIsPreset(AudioDec* ad)
{
	// Line 338, Address: 0x263b10, Func Offset: 0
	// Line 339, Address: 0x263b1c, Func Offset: 0xc
	// Func End, Address: 0x263b24, Func Offset: 0x14
}

// audioDecEndPut__FP8AudioDeci
// Start address: 0x263b30
void audioDecEndPut(AudioDec* ad, int32 size)
{
	int32 hdr_add;
	// Line 270, Address: 0x263b30, Func Offset: 0
	// Line 271, Address: 0x263b3c, Func Offset: 0xc
	// Line 272, Address: 0x263b50, Func Offset: 0x20
	// Line 274, Address: 0x263b5c, Func Offset: 0x2c
	// Line 275, Address: 0x263b6c, Func Offset: 0x3c
	// Line 325, Address: 0x263b74, Func Offset: 0x44
	// Line 327, Address: 0x263b78, Func Offset: 0x48
	// Line 328, Address: 0x263b98, Func Offset: 0x68
	// Line 329, Address: 0x263ba4, Func Offset: 0x74
	// Line 330, Address: 0x263bac, Func Offset: 0x7c
	// Func End, Address: 0x263bb4, Func Offset: 0x84
}

// audioDecBeginPut__FP8AudioDecPPUcPiPPUcPi
// Start address: 0x263bc0
void audioDecBeginPut(AudioDec* ad, uint8** ptr0, int32* len0, uint8** ptr1, int32* len1)
{
	int32 len;
	// Line 236, Address: 0x263bc0, Func Offset: 0
	// Line 237, Address: 0x263bcc, Func Offset: 0xc
	// Line 238, Address: 0x263bd4, Func Offset: 0x14
	// Line 237, Address: 0x263bd8, Func Offset: 0x18
	// Line 238, Address: 0x263be0, Func Offset: 0x20
	// Line 239, Address: 0x263bec, Func Offset: 0x2c
	// Line 240, Address: 0x263bf4, Func Offset: 0x34
	// Line 242, Address: 0x263bf8, Func Offset: 0x38
	// Line 249, Address: 0x263c00, Func Offset: 0x40
	// Line 251, Address: 0x263c08, Func Offset: 0x48
	// Line 249, Address: 0x263c0c, Func Offset: 0x4c
	// Line 251, Address: 0x263c10, Func Offset: 0x50
	// Line 252, Address: 0x263c20, Func Offset: 0x60
	// Line 253, Address: 0x263c2c, Func Offset: 0x6c
	// Line 254, Address: 0x263c30, Func Offset: 0x70
	// Line 256, Address: 0x263c34, Func Offset: 0x74
	// Line 257, Address: 0x263c3c, Func Offset: 0x7c
	// Line 258, Address: 0x263c48, Func Offset: 0x88
	// Line 259, Address: 0x263c58, Func Offset: 0x98
	// Line 260, Address: 0x263c60, Func Offset: 0xa0
	// Line 262, Address: 0x263c74, Func Offset: 0xb4
	// Func End, Address: 0x263c7c, Func Offset: 0xbc
}

// audioDecReset__FP8AudioDec
// Start address: 0x263c80
void audioDecReset(AudioDec* ad)
{
	// Line 206, Address: 0x263c80, Func Offset: 0
	// Line 211, Address: 0x263c8c, Func Offset: 0xc
	// Line 213, Address: 0x263d10, Func Offset: 0x90
	// Line 214, Address: 0x263d14, Func Offset: 0x94
	// Line 215, Address: 0x263d18, Func Offset: 0x98
	// Line 216, Address: 0x263d1c, Func Offset: 0x9c
	// Line 217, Address: 0x263d20, Func Offset: 0xa0
	// Line 218, Address: 0x263d24, Func Offset: 0xa4
	// Line 219, Address: 0x263d28, Func Offset: 0xa8
	// Line 220, Address: 0x263d2c, Func Offset: 0xac
	// Line 221, Address: 0x263d30, Func Offset: 0xb0
	// Func End, Address: 0x263d40, Func Offset: 0xc0
}

// audioDecStart__FP8AudioDec
// Start address: 0x263d40
void audioDecStart(AudioDec* ad)
{
	// Line 196, Address: 0x263d40, Func Offset: 0
	// Line 198, Address: 0x263d50, Func Offset: 0x10
	// Line 199, Address: 0x263db8, Func Offset: 0x78
	// Func End, Address: 0x263dc8, Func Offset: 0x88
}

// audioDecDelete__FP8AudioDec
// Start address: 0x263dd0
int32 audioDecDelete(AudioDec* ad)
{
	// Line 126, Address: 0x263dd0, Func Offset: 0
	// Line 127, Address: 0x263de0, Func Offset: 0x10
	// Line 128, Address: 0x263de8, Func Offset: 0x18
	// Line 134, Address: 0x263df0, Func Offset: 0x20
	// Line 137, Address: 0x263e2c, Func Offset: 0x5c
	// Line 136, Address: 0x263e34, Func Offset: 0x64
	// Line 137, Address: 0x263e38, Func Offset: 0x68
	// Func End, Address: 0x263e40, Func Offset: 0x70
}

// audioDecCreate__FP8AudioDecPUcii
// Start address: 0x263e40
int32 audioDecCreate(AudioDec* ad, uint8* buff, int32 buffSize, int32 iopBuffSize)
{
	uint32 mvol;
	// Line 64, Address: 0x263e40, Func Offset: 0
	// Line 65, Address: 0x263e50, Func Offset: 0x10
	// Line 66, Address: 0x263e54, Func Offset: 0x14
	// Line 67, Address: 0x263e58, Func Offset: 0x18
	// Line 68, Address: 0x263e5c, Func Offset: 0x1c
	// Line 69, Address: 0x263e60, Func Offset: 0x20
	// Line 70, Address: 0x263e64, Func Offset: 0x24
	// Line 71, Address: 0x263e68, Func Offset: 0x28
	// Line 72, Address: 0x263e70, Func Offset: 0x30
	// Line 74, Address: 0x263e74, Func Offset: 0x34
	// Line 75, Address: 0x263e78, Func Offset: 0x38
	// Line 76, Address: 0x263e7c, Func Offset: 0x3c
	// Line 82, Address: 0x263e84, Func Offset: 0x44
	// Line 83, Address: 0x263e98, Func Offset: 0x58
	// Line 84, Address: 0x263ea4, Func Offset: 0x64
	// Line 85, Address: 0x263eb0, Func Offset: 0x70
	// Line 87, Address: 0x263eb8, Func Offset: 0x78
	// Line 94, Address: 0x263ec4, Func Offset: 0x84
	// Line 95, Address: 0x263ed8, Func Offset: 0x98
	// Line 96, Address: 0x263ee4, Func Offset: 0xa4
	// Line 97, Address: 0x263ef0, Func Offset: 0xb0
	// Line 99, Address: 0x263ef8, Func Offset: 0xb8
	// Line 103, Address: 0x263f04, Func Offset: 0xc4
	// Line 104, Address: 0x263f1c, Func Offset: 0xdc
	// Line 113, Address: 0x263f68, Func Offset: 0x128
	// Line 115, Address: 0x263fa0, Func Offset: 0x160
	// Line 118, Address: 0x263fdc, Func Offset: 0x19c
	// Line 119, Address: 0x263fe0, Func Offset: 0x1a0
	// Func End, Address: 0x263ff4, Func Offset: 0x1b4
}

