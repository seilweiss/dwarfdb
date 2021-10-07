typedef struct _sif_serve_data;
typedef struct _sif_queue_data;
typedef struct iSndFileInfo;
typedef struct _sif_client_data;
typedef struct _sif_rpc_data;

typedef void(*type_0)(void*);
typedef void(*type_3)(void*);
typedef void*(*type_9)(uint32, void*, int32);

typedef ulong32 type_1[48];
typedef uint32 type_2[128];
typedef int32 type_4[48];
typedef int32 type_5[48];
typedef uint16 type_6[1024];
typedef int32 type_7[48];
typedef int32 type_8[48];
typedef uint8 type_10[48];
typedef uint16 type_11[1024];
typedef int32 type_12[48];
typedef int32 type_13[48];

struct _sif_serve_data
{
	uint32 command;
	void*(*func)(uint32, void*, int32);
	void* buff;
	int32 size;
	void*(*cfunc)(uint32, void*, int32);
	void* cbuff;
	int32 csize;
	_sif_client_data* client;
	void* paddr;
	uint32 fno;
	void* receive;
	int32 rsize;
	int32 rmode;
	uint32 rid;
	_sif_serve_data* link;
	_sif_serve_data* next;
	_sif_queue_data* base;
};

struct _sif_queue_data
{
	int32 key;
	int32 active;
	_sif_serve_data* link;
	_sif_serve_data* start;
	_sif_serve_data* end;
	_sif_queue_data* next;
};

struct iSndFileInfo
{
	uint32 assetID;
	uint16 flags;
	uint16 freq;
	uint32 lsn;
	uint16 offset;
	uint16 ID;
	uint32 size;
	uint32 hip_idx;
};

struct _sif_client_data
{
	_sif_rpc_data rpcd;
	uint32 command;
	void* buff;
	void* cbuff;
	void(*func)(void*);
	void* para;
	_sif_serve_data* serve;
};

struct _sif_rpc_data
{
	void* paddr;
	uint32 pid;
	int32 tid;
	uint32 mode;
};

uint32 StreamIRXVersion;
int32 IOP_Cnt;
uint16 senddata[1024];
uint16 IOPCommandData[1024];
uint32 cached_sbuff2[128];
uint32* sbuff2;
int32 SOUND_STEREO_READY_FLAG;
int32 SOUND_CD_STATUS;
int32 SOUND_SPU_ADDR;
int32 SOUND_STREAM_CD_ACCESS;
int32 SOUND_STREAM_CD_ACCESS_CHAN;
int32 SOUND_IOP_REQUEST_LOAD;
int32 SOUND_STREAM_STATUS[48];
int32 SOUND_STREAM_SPU_CHAN[48];
int32 SOUND_STREAM_ID[48];
int32 SOUND_STREAM_SPU_ADDR[48];
int32 SOUND_STREAM_PLAY_HALF[48];
int32 SOUND_STREAM_ENV[48];
int32 SOUND_SFX_TRANSFER_STATUS;
int32 SOUND_SFX_TRANSFER_END;
uint32 SOUND_IOP_DATA_ADDRESS;
uint32 SOUND_IOP_DATA_SIZE;
uint32 SOUND_IOP_DATA_SEEK;
uint32 SOUND_IOP_DATA_CHECK;
uint32 SOUND_IOP_DATA_ID;
_sif_client_data gCd;
uint8 SOUND_SPUKeyStatus[48];
ulong32 SOUND_SPUVol[48];
uint32 iopFrameCount;
int32 jptest;
void(*JP)(void*);

void SOUND_DelayThread(ulong32 microsec);
void SOUND_LoadBlock(void* cmd, uint32 size);
void SOUND_SetDVDMode(int32 mode);
void SOUND_SetCutsceneMode(int32 mode);
void SOUND_SetHIPName(int32 idx, int8* HIP);
void SOUND_SetFileInfo(int32 slot, iSndFileInfo* info);
void SOUND_PauseChannel(int32 channel, int32 pause);
int32 FlushIOPCommand(int32 type);
int32 SOUND_CheckAndStartStereo(uint32 spuchannel1, uint32 spuchannel2, uint32 pitch);
void SOUND_CopyIOPBuffer();
void SetIOPCommand(int16 command, int16 length);
void SOUND_AllocateStreamBuffer(int32 strm, uint32 spuaddr, uint32 size);
void SOUND_SetMaxStreamLimit(int32 limit);
void SOUND_CloseStreamBuffer(int32 strm);
void SOUND_InitStreamData(int32 loadtype);
void SOUND_InitSPU();
void SOUND_GetStatus(int32 AllowLoad, int32 reqcheck);
int32 SOUND_StopSound(int32 SPUChannel);
int32 SOUND_StopStream(int32 SPUChannel);
int32 SOUND_SetChannelPitch(int32 Chan, int32 Pch);
int32 SOUND_SetChannelVolume(int32 Chan, int32 VL, int32 VR);
int32 SOUND_PlaySFX(int32 ID, int32 Chan, int32 VL, int32 VR, int32 Spd, int32 at, int32 rl);
int32 SOUND_PlayStream(int32 Stream, int32 StrmChan, int32 Channel, int32 VL, int32 VR, int32 Spd, int32 flag, int32 at, int32 rl);
void JP();
int32 SOUND_InitIOP();

// SOUND_DelayThread__FUl
// Start address: 0x19bec0
void SOUND_DelayThread(ulong32 microsec)
{
	// Line 967, Address: 0x19bec0, Func Offset: 0
	// Line 968, Address: 0x19becc, Func Offset: 0xc
	// Line 969, Address: 0x19bed4, Func Offset: 0x14
	// Func End, Address: 0x19bee0, Func Offset: 0x20
}

// SOUND_LoadBlock__FUlPvUi
// Start address: 0x19bee0
void SOUND_LoadBlock(void* cmd, uint32 size)
{
	// Line 955, Address: 0x19bee0, Func Offset: 0
	// Line 957, Address: 0x19beec, Func Offset: 0xc
	// Line 958, Address: 0x19befc, Func Offset: 0x1c
	// Line 959, Address: 0x19bf10, Func Offset: 0x30
	// Func End, Address: 0x19bf20, Func Offset: 0x40
}

// SOUND_SetDVDMode__Fi
// Start address: 0x19bf20
void SOUND_SetDVDMode(int32 mode)
{
	// Line 939, Address: 0x19bf20, Func Offset: 0
	// Line 940, Address: 0x19bf28, Func Offset: 0x8
	// Func End, Address: 0x19bf34, Func Offset: 0x14
}

// SOUND_SetCutsceneMode__Fi
// Start address: 0x19bf40
void SOUND_SetCutsceneMode(int32 mode)
{
	// Line 924, Address: 0x19bf40, Func Offset: 0
	// Line 925, Address: 0x19bf48, Func Offset: 0x8
	// Func End, Address: 0x19bf54, Func Offset: 0x14
}

// SOUND_SetHIPName__FiPc
// Start address: 0x19bf60
void SOUND_SetHIPName(int32 idx, int8* HIP)
{
	// Line 907, Address: 0x19bf60, Func Offset: 0
	// Line 909, Address: 0x19bf68, Func Offset: 0x8
	// Line 910, Address: 0x19bf70, Func Offset: 0x10
	// Line 911, Address: 0x19bf80, Func Offset: 0x20
	// Line 912, Address: 0x19bf8c, Func Offset: 0x2c
	// Func End, Address: 0x19bf98, Func Offset: 0x38
}

// SOUND_SetFileInfo__FiP12iSndFileInfo
// Start address: 0x19bfa0
void SOUND_SetFileInfo(int32 slot, iSndFileInfo* info)
{
	// Line 892, Address: 0x19bfa0, Func Offset: 0
	// Line 894, Address: 0x19bfa8, Func Offset: 0x8
	// Line 895, Address: 0x19bfb0, Func Offset: 0x10
	// Line 896, Address: 0x19bfc0, Func Offset: 0x20
	// Line 897, Address: 0x19bfcc, Func Offset: 0x2c
	// Func End, Address: 0x19bfd8, Func Offset: 0x38
}

// SOUND_PauseChannel__Fii
// Start address: 0x19bfe0
void SOUND_PauseChannel(int32 channel, int32 pause)
{
	// Line 876, Address: 0x19bfe0, Func Offset: 0
	// Line 877, Address: 0x19bfe8, Func Offset: 0x8
	// Line 878, Address: 0x19bff0, Func Offset: 0x10
	// Func End, Address: 0x19bffc, Func Offset: 0x1c
}

// FlushIOPCommand__Fi
// Start address: 0x19c000
int32 FlushIOPCommand(int32 type)
{
	int32 a;
	int32 oldcnt;
	// Line 697, Address: 0x19c000, Func Offset: 0
	// Line 700, Address: 0x19c00c, Func Offset: 0xc
	// Line 702, Address: 0x19c014, Func Offset: 0x14
	// Line 703, Address: 0x19c020, Func Offset: 0x20
	// Line 704, Address: 0x19c028, Func Offset: 0x28
	// Line 705, Address: 0x19c034, Func Offset: 0x34
	// Line 707, Address: 0x19c03c, Func Offset: 0x3c
	// Line 708, Address: 0x19c048, Func Offset: 0x48
	// Line 709, Address: 0x19c050, Func Offset: 0x50
	// Line 712, Address: 0x19c058, Func Offset: 0x58
	// Line 713, Address: 0x19c08c, Func Offset: 0x8c
	// Line 715, Address: 0x19c090, Func Offset: 0x90
	// Line 714, Address: 0x19c098, Func Offset: 0x98
	// Line 717, Address: 0x19c09c, Func Offset: 0x9c
	// Func End, Address: 0x19c0ac, Func Offset: 0xac
}

// SOUND_CheckAndStartStereo__FUiUiUi
// Start address: 0x19c0b0
int32 SOUND_CheckAndStartStereo(uint32 spuchannel1, uint32 spuchannel2, uint32 pitch)
{
	// Line 658, Address: 0x19c0b0, Func Offset: 0
	// Line 659, Address: 0x19c0b4, Func Offset: 0x4
	// Line 660, Address: 0x19c0c0, Func Offset: 0x10
	// Line 661, Address: 0x19c0c8, Func Offset: 0x18
	// Line 662, Address: 0x19c0d4, Func Offset: 0x24
	// Line 664, Address: 0x19c0dc, Func Offset: 0x2c
	// Line 665, Address: 0x19c0e0, Func Offset: 0x30
	// Line 666, Address: 0x19c0e8, Func Offset: 0x38
	// Line 667, Address: 0x19c0f0, Func Offset: 0x40
	// Line 668, Address: 0x19c0fc, Func Offset: 0x4c
	// Line 669, Address: 0x19c100, Func Offset: 0x50
	// Func End, Address: 0x19c10c, Func Offset: 0x5c
}

// SOUND_CopyIOPBuffer__Fv
// Start address: 0x19c110
void SOUND_CopyIOPBuffer()
{
	int32 count;
	int32 streamnum;
	int32 streams;
	int32 l;
	int32 k;
	int32 j;
	int32 i;
	// Line 489, Address: 0x19c110, Func Offset: 0
	// Line 495, Address: 0x19c118, Func Offset: 0x8
	// Line 497, Address: 0x19c124, Func Offset: 0x14
	// Line 499, Address: 0x19c128, Func Offset: 0x18
	// Line 501, Address: 0x19c130, Func Offset: 0x20
	// Line 505, Address: 0x19c160, Func Offset: 0x50
	// Line 504, Address: 0x19c164, Func Offset: 0x54
	// Line 505, Address: 0x19c168, Func Offset: 0x58
	// Line 506, Address: 0x19c16c, Func Offset: 0x5c
	// Line 519, Address: 0x19c17c, Func Offset: 0x6c
	// Line 520, Address: 0x19c184, Func Offset: 0x74
	// Line 521, Address: 0x19c18c, Func Offset: 0x7c
	// Line 511, Address: 0x19c194, Func Offset: 0x84
	// Line 512, Address: 0x19c19c, Func Offset: 0x8c
	// Line 513, Address: 0x19c1a0, Func Offset: 0x90
	// Line 511, Address: 0x19c1a4, Func Offset: 0x94
	// Line 512, Address: 0x19c1a8, Func Offset: 0x98
	// Line 513, Address: 0x19c1ac, Func Offset: 0x9c
	// Line 508, Address: 0x19c1b0, Func Offset: 0xa0
	// Line 509, Address: 0x19c1b4, Func Offset: 0xa4
	// Line 511, Address: 0x19c1bc, Func Offset: 0xac
	// Line 512, Address: 0x19c1c8, Func Offset: 0xb8
	// Line 513, Address: 0x19c1d8, Func Offset: 0xc8
	// Line 514, Address: 0x19c1e8, Func Offset: 0xd8
	// Line 516, Address: 0x19c1f4, Func Offset: 0xe4
	// Line 517, Address: 0x19c1f8, Func Offset: 0xe8
	// Line 518, Address: 0x19c1fc, Func Offset: 0xec
	// Line 519, Address: 0x19c200, Func Offset: 0xf0
	// Line 520, Address: 0x19c210, Func Offset: 0x100
	// Line 521, Address: 0x19c218, Func Offset: 0x108
	// Line 523, Address: 0x19c21c, Func Offset: 0x10c
	// Line 522, Address: 0x19c224, Func Offset: 0x114
	// Line 520, Address: 0x19c228, Func Offset: 0x118
	// Line 521, Address: 0x19c22c, Func Offset: 0x11c
	// Line 523, Address: 0x19c234, Func Offset: 0x124
	// Line 525, Address: 0x19c240, Func Offset: 0x130
	// Line 531, Address: 0x19c250, Func Offset: 0x140
	// Line 525, Address: 0x19c258, Func Offset: 0x148
	// Line 526, Address: 0x19c25c, Func Offset: 0x14c
	// Line 527, Address: 0x19c264, Func Offset: 0x154
	// Line 528, Address: 0x19c26c, Func Offset: 0x15c
	// Line 529, Address: 0x19c274, Func Offset: 0x164
	// Line 533, Address: 0x19c27c, Func Offset: 0x16c
	// Line 535, Address: 0x19c2a0, Func Offset: 0x190
	// Line 536, Address: 0x19c2a4, Func Offset: 0x194
	// Line 538, Address: 0x19c2b0, Func Offset: 0x1a0
	// Line 541, Address: 0x19c2cc, Func Offset: 0x1bc
	// Line 543, Address: 0x19c2d4, Func Offset: 0x1c4
	// Line 544, Address: 0x19c2d8, Func Offset: 0x1c8
	// Line 543, Address: 0x19c2e0, Func Offset: 0x1d0
	// Line 544, Address: 0x19c2e4, Func Offset: 0x1d4
	// Line 545, Address: 0x19c2ec, Func Offset: 0x1dc
	// Line 548, Address: 0x19c2fc, Func Offset: 0x1ec
	// Line 558, Address: 0x19c308, Func Offset: 0x1f8
	// Line 548, Address: 0x19c30c, Func Offset: 0x1fc
	// Line 549, Address: 0x19c318, Func Offset: 0x208
	// Line 550, Address: 0x19c320, Func Offset: 0x210
	// Line 551, Address: 0x19c328, Func Offset: 0x218
	// Line 552, Address: 0x19c330, Func Offset: 0x220
	// Line 555, Address: 0x19c338, Func Offset: 0x228
	// Line 556, Address: 0x19c340, Func Offset: 0x230
	// Line 559, Address: 0x19c348, Func Offset: 0x238
	// Line 563, Address: 0x19c418, Func Offset: 0x308
	// Line 569, Address: 0x19c420, Func Offset: 0x310
	// Line 570, Address: 0x19c434, Func Offset: 0x324
	// Line 577, Address: 0x19c440, Func Offset: 0x330
	// Func End, Address: 0x19c450, Func Offset: 0x340
}

// SetIOPCommand__Fss
// Start address: 0x19c450
void SetIOPCommand(int16 command, int16 length)
{
	int32 i;
	// Line 431, Address: 0x19c450, Func Offset: 0
	// Line 434, Address: 0x19c46c, Func Offset: 0x1c
	// Line 444, Address: 0x19c48c, Func Offset: 0x3c
	// Line 445, Address: 0x19c498, Func Offset: 0x48
	// Line 446, Address: 0x19c4a8, Func Offset: 0x58
	// Line 468, Address: 0x19c4b8, Func Offset: 0x68
	// Line 467, Address: 0x19c4bc, Func Offset: 0x6c
	// Line 469, Address: 0x19c4c0, Func Offset: 0x70
	// Line 472, Address: 0x19c4c8, Func Offset: 0x78
	// Line 473, Address: 0x19c4d8, Func Offset: 0x88
	// Line 475, Address: 0x19c4e4, Func Offset: 0x94
	// Line 473, Address: 0x19c4e8, Func Offset: 0x98
	// Line 475, Address: 0x19c4ec, Func Offset: 0x9c
	// Line 477, Address: 0x19c50c, Func Offset: 0xbc
	// Line 475, Address: 0x19c628, Func Offset: 0x1d8
	// Line 477, Address: 0x19c62c, Func Offset: 0x1dc
	// Line 475, Address: 0x19c630, Func Offset: 0x1e0
	// Line 477, Address: 0x19c638, Func Offset: 0x1e8
	// Line 478, Address: 0x19c648, Func Offset: 0x1f8
	// Line 477, Address: 0x19c64c, Func Offset: 0x1fc
	// Line 478, Address: 0x19c654, Func Offset: 0x204
	// Line 481, Address: 0x19c668, Func Offset: 0x218
	// Line 479, Address: 0x19c670, Func Offset: 0x220
	// Line 481, Address: 0x19c674, Func Offset: 0x224
	// Line 479, Address: 0x19c678, Func Offset: 0x228
	// Line 481, Address: 0x19c67c, Func Offset: 0x22c
	// Line 479, Address: 0x19c680, Func Offset: 0x230
	// Line 481, Address: 0x19c684, Func Offset: 0x234
	// Line 480, Address: 0x19c688, Func Offset: 0x238
	// Line 482, Address: 0x19c694, Func Offset: 0x244
	// Func End, Address: 0x19c6b4, Func Offset: 0x264
}

// SOUND_AllocateStreamBuffer__FiUiUi
// Start address: 0x19c6c0
void SOUND_AllocateStreamBuffer(int32 strm, uint32 spuaddr, uint32 size)
{
	// Line 402, Address: 0x19c6c0, Func Offset: 0
	// Line 403, Address: 0x19c6c8, Func Offset: 0x8
	// Line 404, Address: 0x19c6d4, Func Offset: 0x14
	// Line 405, Address: 0x19c6e4, Func Offset: 0x24
	// Line 406, Address: 0x19c6f0, Func Offset: 0x30
	// Line 408, Address: 0x19c6f8, Func Offset: 0x38
	// Func End, Address: 0x19c704, Func Offset: 0x44
}

// SOUND_SetMaxStreamLimit__Fi
// Start address: 0x19c710
void SOUND_SetMaxStreamLimit(int32 limit)
{
	// Line 389, Address: 0x19c710, Func Offset: 0
	// Line 390, Address: 0x19c718, Func Offset: 0x8
	// Func End, Address: 0x19c724, Func Offset: 0x14
}

// SOUND_CloseStreamBuffer__Fi
// Start address: 0x19c730
void SOUND_CloseStreamBuffer(int32 strm)
{
	// Line 377, Address: 0x19c730, Func Offset: 0
	// Line 378, Address: 0x19c738, Func Offset: 0x8
	// Func End, Address: 0x19c744, Func Offset: 0x14
}

// SOUND_InitStreamData__Fi
// Start address: 0x19c750
void SOUND_InitStreamData(int32 loadtype)
{
	// Line 363, Address: 0x19c750, Func Offset: 0
	// Line 364, Address: 0x19c758, Func Offset: 0x8
	// Func End, Address: 0x19c764, Func Offset: 0x14
}

// SOUND_InitSPU__Fv
// Start address: 0x19c770
void SOUND_InitSPU()
{
	// Line 351, Address: 0x19c770, Func Offset: 0
	// Func End, Address: 0x19c77c, Func Offset: 0xc
}

// SOUND_GetStatus__Fii
// Start address: 0x19c780
void SOUND_GetStatus(int32 AllowLoad, int32 reqcheck)
{
	// Line 323, Address: 0x19c780, Func Offset: 0
	// Line 324, Address: 0x19c788, Func Offset: 0x8
	// Line 325, Address: 0x19c790, Func Offset: 0x10
	// Func End, Address: 0x19c79c, Func Offset: 0x1c
}

// SOUND_StopSound__Fi
// Start address: 0x19c7a0
int32 SOUND_StopSound(int32 SPUChannel)
{
	// Line 300, Address: 0x19c7a0, Func Offset: 0
	// Line 301, Address: 0x19c7a4, Func Offset: 0x4
	// Line 302, Address: 0x19c7b8, Func Offset: 0x18
	// Line 304, Address: 0x19c7c0, Func Offset: 0x20
	// Line 305, Address: 0x19c7c4, Func Offset: 0x24
	// Line 306, Address: 0x19c7d0, Func Offset: 0x30
	// Line 307, Address: 0x19c7d4, Func Offset: 0x34
	// Func End, Address: 0x19c7e0, Func Offset: 0x40
}

// SOUND_StopStream__Fi
// Start address: 0x19c7e0
int32 SOUND_StopStream(int32 SPUChannel)
{
	// Line 281, Address: 0x19c7e0, Func Offset: 0
	// Line 282, Address: 0x19c7e4, Func Offset: 0x4
	// Line 283, Address: 0x19c7ec, Func Offset: 0xc
	// Line 285, Address: 0x19c7f4, Func Offset: 0x14
	// Line 286, Address: 0x19c7fc, Func Offset: 0x1c
	// Line 287, Address: 0x19c808, Func Offset: 0x28
	// Line 288, Address: 0x19c80c, Func Offset: 0x2c
	// Func End, Address: 0x19c818, Func Offset: 0x38
}

// SOUND_SetChannelPitch__Fii
// Start address: 0x19c820
int32 SOUND_SetChannelPitch(int32 Chan, int32 Pch)
{
	// Line 260, Address: 0x19c820, Func Offset: 0
	// Line 261, Address: 0x19c824, Func Offset: 0x4
	// Line 262, Address: 0x19c838, Func Offset: 0x18
	// Line 264, Address: 0x19c840, Func Offset: 0x20
	// Line 265, Address: 0x19c844, Func Offset: 0x24
	// Line 266, Address: 0x19c84c, Func Offset: 0x2c
	// Line 267, Address: 0x19c858, Func Offset: 0x38
	// Line 268, Address: 0x19c85c, Func Offset: 0x3c
	// Func End, Address: 0x19c868, Func Offset: 0x48
}

// SOUND_SetChannelVolume__Fiii
// Start address: 0x19c870
int32 SOUND_SetChannelVolume(int32 Chan, int32 VL, int32 VR)
{
	// Line 237, Address: 0x19c870, Func Offset: 0
	// Line 238, Address: 0x19c874, Func Offset: 0x4
	// Line 239, Address: 0x19c888, Func Offset: 0x18
	// Line 241, Address: 0x19c890, Func Offset: 0x20
	// Line 242, Address: 0x19c894, Func Offset: 0x24
	// Line 243, Address: 0x19c89c, Func Offset: 0x2c
	// Line 244, Address: 0x19c8a4, Func Offset: 0x34
	// Line 246, Address: 0x19c8b0, Func Offset: 0x40
	// Line 247, Address: 0x19c8b4, Func Offset: 0x44
	// Func End, Address: 0x19c8c0, Func Offset: 0x50
}

// SOUND_PlaySFX__Fiiiiiii
// Start address: 0x19c8c0
int32 SOUND_PlaySFX(int32 ID, int32 Chan, int32 VL, int32 VR, int32 Spd, int32 at, int32 rl)
{
	int32 adsr;
	// Line 204, Address: 0x19c8c0, Func Offset: 0
	// Line 207, Address: 0x19c8c4, Func Offset: 0x4
	// Line 208, Address: 0x19c8d8, Func Offset: 0x18
	// Line 213, Address: 0x19c8e0, Func Offset: 0x20
	// Line 210, Address: 0x19c8e4, Func Offset: 0x24
	// Line 214, Address: 0x19c8f8, Func Offset: 0x38
	// Line 215, Address: 0x19c900, Func Offset: 0x40
	// Line 216, Address: 0x19c908, Func Offset: 0x48
	// Line 217, Address: 0x19c910, Func Offset: 0x50
	// Line 218, Address: 0x19c918, Func Offset: 0x58
	// Line 219, Address: 0x19c920, Func Offset: 0x60
	// Line 220, Address: 0x19c928, Func Offset: 0x68
	// Line 222, Address: 0x19c934, Func Offset: 0x74
	// Line 223, Address: 0x19c938, Func Offset: 0x78
	// Func End, Address: 0x19c944, Func Offset: 0x84
}

// SOUND_PlayStream__Fiiiiiiiii
// Start address: 0x19c950
int32 SOUND_PlayStream(int32 Stream, int32 StrmChan, int32 Channel, int32 VL, int32 VR, int32 Spd, int32 flag, int32 at, int32 rl)
{
	int32 adsr;
	// Line 165, Address: 0x19c950, Func Offset: 0
	// Line 168, Address: 0x19c954, Func Offset: 0x4
	// Line 169, Address: 0x19c968, Func Offset: 0x18
	// Line 171, Address: 0x19c970, Func Offset: 0x20
	// Line 175, Address: 0x19c980, Func Offset: 0x30
	// Line 177, Address: 0x19c984, Func Offset: 0x34
	// Line 175, Address: 0x19c98c, Func Offset: 0x3c
	// Line 178, Address: 0x19c990, Func Offset: 0x40
	// Line 179, Address: 0x19c998, Func Offset: 0x48
	// Line 174, Address: 0x19c99c, Func Offset: 0x4c
	// Line 179, Address: 0x19c9a0, Func Offset: 0x50
	// Line 180, Address: 0x19c9a4, Func Offset: 0x54
	// Line 181, Address: 0x19c9ac, Func Offset: 0x5c
	// Line 182, Address: 0x19c9b4, Func Offset: 0x64
	// Line 174, Address: 0x19c9bc, Func Offset: 0x6c
	// Line 183, Address: 0x19c9c4, Func Offset: 0x74
	// Line 184, Address: 0x19c9cc, Func Offset: 0x7c
	// Line 185, Address: 0x19c9d8, Func Offset: 0x88
	// Line 186, Address: 0x19c9dc, Func Offset: 0x8c
	// Func End, Address: 0x19c9e8, Func Offset: 0x98
}

// JP__FPv
// Start address: 0x19c9f0
void JP()
{
	// Line 111, Address: 0x19c9f0, Func Offset: 0
	// Func End, Address: 0x19c9f8, Func Offset: 0x8
}

// SOUND_InitIOP__Fv
// Start address: 0x19ca00
int32 SOUND_InitIOP()
{
	int32 i;
	// Line 88, Address: 0x19ca00, Func Offset: 0
	// Line 84, Address: 0x19ca08, Func Offset: 0x8
	// Line 88, Address: 0x19ca0c, Func Offset: 0xc
	// Line 84, Address: 0x19ca10, Func Offset: 0x10
	// Line 88, Address: 0x19ca14, Func Offset: 0x14
	// Line 91, Address: 0x19ca1c, Func Offset: 0x1c
	// Line 94, Address: 0x19ca24, Func Offset: 0x24
	// Line 97, Address: 0x19ca3c, Func Offset: 0x3c
	// Line 98, Address: 0x19ca40, Func Offset: 0x40
	// Line 99, Address: 0x19ca5c, Func Offset: 0x5c
	// Line 102, Address: 0x19ca6c, Func Offset: 0x6c
	// Line 103, Address: 0x19ca74, Func Offset: 0x74
	// Line 102, Address: 0x19ca78, Func Offset: 0x78
	// Line 104, Address: 0x19ca7c, Func Offset: 0x7c
	// Func End, Address: 0x19ca88, Func Offset: 0x88
}

