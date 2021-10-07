typedef struct HISGetFirstValidRequestReturn;
typedef struct HISRemoteSetParamParameter;
typedef struct HISEnableEffectsParameter;
typedef struct HISRemoteBlockTransStatusReturn;
typedef struct HISGetSPUStartAddressReturn;
typedef struct HISGetSoundDebugVoiceParameter;
typedef struct HISFlushHostIOHandlesParameter;
typedef struct HISPlayStreamParameter;
typedef struct HISGetSPUEndAddressReturn;
typedef struct HISPlayExternalStreamParameter;
typedef struct HISFileIndexDebug;
typedef struct HISSetVoicePitchReturn;
typedef struct HISResumeVoiceParameter;
typedef struct HISGetFreeRequestCountReturn;
typedef struct HISRemoteSetParamReturn;
typedef struct HISEnableEffectsReturn;
typedef struct HISBatchSoundCommandsReturn;
typedef struct HISSetMasterVolumeParameter;
typedef struct HISLoadExternalStreamParameter;
typedef struct HISGetVersionParameter;
typedef struct HISGetFileIndexParameter;
typedef struct HISPlayExternalStreamReturn;
typedef enum HISStreamThreadState;
typedef struct HISNullParameter;
typedef struct HISFlushHostIOHandlesReturn;
typedef struct HISSetEffectParameter;
typedef struct HISGetSoundDebugVoiceReturn;
typedef struct HISSetMasterVolumeReturn;
typedef struct HISCancelRequestParameter;
typedef struct HISGetVersionReturn;
typedef struct HISSoundDebug;
typedef enum HISRequestThreadState;
typedef struct HISDebugState;
typedef struct HISDelayFrameParameter;
typedef struct HISPlaySoundParameter;
typedef struct HISResumeVoiceReturn;
typedef struct _sif_client_data;
typedef struct HISGetFileIndexReturn;
typedef struct HISRemoteVoiceTransParameter;
typedef struct HISSetEffectReturn;
typedef struct HISGetVoiceStatusParameter;
typedef struct HISGetFirstValidRequestParameter;
typedef struct HISLoadExternalStreamReturn;
typedef struct HISRemoteBlockTransParameter;
typedef struct HISNullReturn;
typedef struct HISCancelRequestReturn;
typedef struct HISDelayFrameReturn;
typedef struct HISPlaySoundReturn;
typedef struct HISWaitForRequestParameter;
typedef struct HISGetFileIndexDebugParameter;
typedef struct HISRemoteVoiceTransStatusParameter;
typedef struct _sif_serve_data;
typedef struct HISSetVoicePitchParameter;
typedef struct HISGetVoiceStatusReturn;
typedef struct HISPlayStreamReturn;
typedef struct HISRemoteBlockTransReturn;
typedef struct HISRequestDebug;
typedef struct HISStopVoiceParameter;
typedef struct HISGetSoundDebugParameter;
typedef struct HISGetFileIndexDebugReturn;
typedef struct HISRemoteVoiceTransStatusReturn;
typedef struct _class;
typedef struct HISRemoteVoiceTransReturn;
typedef struct HISWaitForRequestReturn;
typedef struct HISCloseRequestParameter;
typedef struct HISJoinStereoVoicesParameter;
typedef struct _sif_queue_data;
typedef struct HISStopVoiceReturn;
typedef struct HISLoadBlockAsyncParameter;
typedef struct HISGetDebugStateParameter;
typedef struct HISGetSoundDebugReturn;
typedef struct HISGetExternalStreamBufferParameter;
typedef struct HISCloseRequestReturn;
typedef struct HISDebugControlParameter;
typedef struct HISPauseVoiceParameter;
typedef struct HISLoadBlockAsyncReturn;
typedef struct HISGetDebugStateReturn;
typedef struct HISInitParameter;
typedef struct Request;
typedef struct HISSetVoiceVolumeParameter;
typedef struct HISJoinStereoVoicesReturn;
typedef struct HISPauseVoiceReturn;
typedef struct HISGetFileSizeParameter;
typedef struct HISWaitForAllRequestsParameter;
typedef struct HISGetExternalStreamBufferReturn;
typedef struct HISGetRequestCountParameter;
typedef struct HISSetVoiceVolumeReturn;
typedef struct HISGetFreeRequestCountParameter;
typedef struct HISGetFileSizeReturn;
typedef struct HISInitReturn;
typedef struct HISGetRequestCountReturn;
typedef struct HISSoundDebugVoice;
typedef struct HISDebugControlReturn;
typedef struct HISWaitForAllRequestsReturn;
typedef enum HISMediaType;
typedef struct HISGetRequestDebugParameter;
typedef struct _sif_receive_data;
typedef struct HISGetRequestDebugReturn;
typedef enum HISMemoryType;
typedef struct HISGetSPUStartAddressParameter;
typedef enum HISStatus;
typedef struct _sif_rpc_data;
typedef enum HISMainThreadState;
typedef struct HISGetRequestStatusParameter;
typedef struct HISRemoteBlockTransStatusParameter;
typedef struct HISGetRequestStatusReturn;
typedef struct HISGetSPUEndAddressParameter;

typedef void*(*type_80)(uint32, void*, int32);
typedef void(*type_86)(void*);

typedef int8 type_0[20];
typedef int8 type_1[36];
typedef int8 type_2[17];
typedef int8 type_3[17];
typedef int8 type_4[17];
typedef int8 type_5[20];
typedef int8 type_6[17];
typedef int8 type_7[17];
typedef int8 type_8[64];
typedef uint32 type_9[2];
typedef int8 type_10[30];
typedef int8 type_11[48];
typedef int8 type_12[17];
typedef int8 type_13[20];
typedef int8 type_14[20];
typedef int8 type_15[17];
typedef int8 type_16[36];
typedef int8 type_17[20];
typedef int8 type_18[17];
typedef int8 type_19[17];
typedef int8 type_20[17];
typedef int8 type_21[32];
typedef int8 type_22[17];
typedef int8 type_23[17];
typedef int8 type_24[17];
typedef int8 type_25[20];
typedef int8 type_26[20];
typedef int8 type_27[24];
typedef int8 type_28[20];
typedef int8 type_29[32];
typedef int8 type_30[48];
typedef int8 type_31[20];
typedef int8 type_32[24];
typedef int8 type_33[18];
typedef int8 type_34[76];
typedef int8 type_35[20];
typedef int8 type_36[20];
typedef int8 type_37[20];
typedef int8 type_38[24];
typedef int8 type_39[17];
typedef int8 type_40[24];
typedef int8 type_41[17];
typedef uint32 type_42[2];
typedef int8 type_43[44];
typedef int8 type_44[17];
typedef int8 type_45[992];
typedef int8 type_46[17];
typedef int8 type_47[17];
typedef int8 type_48[20];
typedef int8 type_49[18];
typedef int8 type_50[127];
typedef int8 type_51[20];
typedef int8 type_52[20];
typedef int8 type_53[22];
typedef int8 type_54[17];
typedef int8 type_55[20];
typedef int8 type_56[88];
typedef int8 type_57[17];
typedef int8 type_58[92];
typedef int8 type_59[32];
typedef int8 type_60[17];
typedef int8 type_61[64];
typedef int8 type_62[17];
typedef int8 type_63[17];
typedef int8 type_64[17];
typedef int8 type_65[18];
typedef int8 type_66[20];
typedef int8 type_67[17];
typedef int8 type_68[48];
typedef int8 type_69[64];
typedef int8 type_70[17];
typedef int8 type_71[20];
typedef int8 type_72[20];
typedef int8 type_73[17];
typedef int8 type_74[20];
typedef int8 type_75[17];
typedef int8 type_76[20];
typedef int8 type_77[17];
typedef int8 type_78[17];
typedef int8 type_79[17];
typedef int8 type_81[17];
typedef int8 type_82[44];
typedef int8 type_83[20];
typedef int8 type_84[17];
typedef Request type_85[16];
typedef int8 type_87[17];
typedef int8 type_88[20];
typedef int8 type_89[4096];
typedef int8 type_90[20];
typedef uint32 type_91[2];
typedef int8 type_92[20];
typedef int8 type_93[20];
typedef int8 type_94[20];
typedef int8 type_95[48];
typedef int8 type_96[20];
typedef int8 type_97[17];
typedef int8 type_98[17];
typedef int8 type_99[20];
typedef int8 type_100[20];
typedef int8 type_101[17];
typedef int8 type_102[20];
typedef int8 type_103[20];

struct HISGetFirstValidRequestReturn
{
	int32 request;
};

struct HISRemoteSetParamParameter
{
	uint16 reg;
	uint16 value;
};

struct HISEnableEffectsParameter
{
	uint8 enabled;
};

struct HISRemoteBlockTransStatusReturn
{
	uint32 ret;
};

struct HISGetSPUStartAddressReturn
{
	int32 address;
};

struct HISGetSoundDebugVoiceParameter
{
	int32 voice;
};

struct HISFlushHostIOHandlesParameter
{
};

struct HISPlayStreamParameter
{
	int32 fileIndex;
	int32 logicalSectorNumber;
	int32 dataSize;
	int32 blockSize;
	uint16 voice;
	int16 leftVolume;
	int16 rightVolume;
	uint16 pitch;
	uint16 flags;
	uint16 attack;
	uint16 release;
	uint16 interleaveSectors;
};

struct HISGetSPUEndAddressReturn
{
	int32 address;
};

struct HISPlayExternalStreamParameter
{
	int32 blockSize;
	uint16 voice;
	int16 leftVolume;
	int16 rightVolume;
	uint16 pitch;
	uint16 flags;
	uint16 attack;
	uint16 release;
};

struct HISFileIndexDebug
{
	int32 logicalSectorNumber;
	int32 size;
	int32 sizeInSectors;
	int8 name[48];
};

struct HISSetVoicePitchReturn
{
};

struct HISResumeVoiceParameter
{
	uint16 voice;
};

struct HISGetFreeRequestCountReturn
{
	int32 count;
};

struct HISRemoteSetParamReturn
{
};

struct HISEnableEffectsReturn
{
};

struct HISBatchSoundCommandsReturn
{
	uint32 status[2];
};

struct HISSetMasterVolumeParameter
{
	int16 leftVolume;
	int16 rightVolume;
};

struct HISLoadExternalStreamParameter
{
	uint16 voice;
	uint16 buffer;
	void* address;
};

struct HISGetVersionParameter
{
};

struct HISGetFileIndexParameter
{
	int8 filename[48];
};

struct HISPlayExternalStreamReturn
{
};

enum HISStreamThreadState
{
	HIS_STREAM_THREAD_NOTHING,
	HIS_STREAM_THREAD_WAIT_EVENT,
	HIS_STREAM_THREAD_WAIT_LOCK,
	HIS_STREAM_THREAD_PROCESS_STREAMS
};

struct HISNullParameter
{
};

struct HISFlushHostIOHandlesReturn
{
};

struct HISSetEffectParameter
{
	uint16 mode;
	int16 leftDepth;
	int16 rightDepth;
	uint16 delay;
	uint16 feedback;
	int16 leftVolume;
	int16 rightVolume;
};

struct HISGetSoundDebugVoiceReturn
{
	HISSoundDebugVoice soundDebugVoice;
};

struct HISSetMasterVolumeReturn
{
};

struct HISCancelRequestParameter
{
	int32 requestID;
};

struct HISGetVersionReturn
{
	int32 version;
};

struct HISSoundDebug
{
	int16 leftVolume;
	int16 rightVolume;
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

struct HISDelayFrameParameter
{
};

struct HISPlaySoundParameter
{
	uint32 address;
	uint16 voice;
	int16 leftVolume;
	int16 rightVolume;
	uint16 pitch;
	uint16 flags;
	uint16 attack;
	uint16 release;
};

struct HISResumeVoiceReturn
{
};

struct _sif_client_data
{
	_sif_rpc_data rpcd;
	uint32 command;
	void* buff;
	void* gp;
	void(*func)(void*);
	void* para;
	_sif_serve_data* serve;
};

struct HISGetFileIndexReturn
{
	int32 index;
};

struct HISRemoteVoiceTransParameter
{
	int16 channel;
	uint16 mode;
	uint8* m_addr;
	uint32 s_addr;
	uint32 size;
};

struct HISSetEffectReturn
{
};

struct HISGetVoiceStatusParameter
{
};

struct HISGetFirstValidRequestParameter
{
};

struct HISLoadExternalStreamReturn
{
};

struct HISRemoteBlockTransParameter
{
	int16 channel;
	uint16 mode;
	uint8* m_addr;
	uint32 size;
	uint8* start_addr;
};

struct HISNullReturn
{
};

struct HISCancelRequestReturn
{
	uint8 success;
};

struct HISDelayFrameReturn
{
};

struct HISPlaySoundReturn
{
};

struct HISWaitForRequestParameter
{
};

struct HISGetFileIndexDebugParameter
{
	int32 fileIndex;
};

struct HISRemoteVoiceTransStatusParameter
{
	int16 channel;
	int16 flag;
};

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

struct HISSetVoicePitchParameter
{
	uint16 voice;
	uint16 pitch;
};

struct HISGetVoiceStatusReturn
{
	uint32 status[2];
};

struct HISPlayStreamReturn
{
};

struct HISRemoteBlockTransReturn
{
	int32 ret;
};

struct HISRequestDebug
{
	_class small;
	int32 destination;
	int32 currentPriority;
	int32 originalPriority;
	int32 fileIndex;
	int32 startSector;
	int32 sectorsToRead;
};

struct HISStopVoiceParameter
{
	uint16 voice;
};

struct HISGetSoundDebugParameter
{
};

struct HISGetFileIndexDebugReturn
{
	HISFileIndexDebug fileIndexDebug;
};

struct HISRemoteVoiceTransStatusReturn
{
	uint32 ret;
};

struct _class
{
	struct
	{
		int32 nextRequest : 8;
		HISStatus status : 8;
		HISMemoryType destinationType : 8;
	};
};

struct HISRemoteVoiceTransReturn
{
	int32 ret;
};

struct HISWaitForRequestReturn
{
};

struct HISCloseRequestParameter
{
	int32 requestID;
};

struct HISJoinStereoVoicesParameter
{
	uint16 voice1;
	uint16 voice2;
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

struct HISStopVoiceReturn
{
};

struct HISLoadBlockAsyncParameter
{
	int32 fileIndex;
	int32 sourceBlock;
	int32 sourceSize;
	void* destinationAddress;
	HISMemoryType destinationType;
	int32 priority;
	int32 flags;
};

struct HISGetDebugStateParameter
{
};

struct HISGetSoundDebugReturn
{
	HISSoundDebug soundDebug;
};

struct HISGetExternalStreamBufferParameter
{
	int32 voice;
};

struct HISCloseRequestReturn
{
	uint8 success;
};

struct HISDebugControlParameter
{
	int32 parameter;
	int32 value0;
	int32 value1;
	int8 value2[64];
};

struct HISPauseVoiceParameter
{
	uint16 voice;
};

struct HISLoadBlockAsyncReturn
{
	int32 requestID;
};

struct HISGetDebugStateReturn
{
	HISDebugState* returnValue;
};

struct HISInitParameter
{
	HISMediaType mediaType;
	uint8 allowEffects;
	int8 cacheSubDirectory[64];
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

struct HISSetVoiceVolumeParameter
{
	uint16 voice;
	int16 leftVolume;
	int16 rightVolume;
};

struct HISJoinStereoVoicesReturn
{
};

struct HISPauseVoiceReturn
{
};

struct HISGetFileSizeParameter
{
	int32 fileIndex;
};

struct HISWaitForAllRequestsParameter
{
};

struct HISGetExternalStreamBufferReturn
{
	int32 buffer;
};

struct HISGetRequestCountParameter
{
};

struct HISSetVoiceVolumeReturn
{
};

struct HISGetFreeRequestCountParameter
{
};

struct HISGetFileSizeReturn
{
	int32 size;
};

struct HISInitReturn
{
};

struct HISGetRequestCountReturn
{
	int32 count;
};

struct HISSoundDebugVoice
{
	uint32 address;
	int16 leftVolume;
	int16 rightVolume;
	uint16 pitch;
	uint16 envelope;
	uint8 kon;
	uint8 koff;
	uint8 endx;
	uint8 external;
	uint8 streaming;
	uint8 reading;
	uint8 readingBuffer;
	uint8 byteMode;
	union
	{
		int32 currentSector;
		int32 currentOffset;
	};
	int32 sectorsLeft;
	int32 dataSize;
};

struct HISDebugControlReturn
{
	int32 returnValue;
};

struct HISWaitForAllRequestsReturn
{
};

enum HISMediaType
{
	HIS_MEDIA_CDROM,
	HIS_MEDIA_DVD,
	HIS_MEDIA_HOSTIO
};

struct HISGetRequestDebugParameter
{
	int32 requestID;
};

struct _sif_receive_data
{
	_sif_rpc_data rpcd;
	void* src;
	void* dest;
	int32 size;
};

struct HISGetRequestDebugReturn
{
	HISRequestDebug requestDebug;
};

enum HISMemoryType
{
	HIS_MEMORY_EE,
	HIS_MEMORY_IOP,
	HIS_MEMORY_SPU
};

struct HISGetSPUStartAddressParameter
{
};

enum HISStatus
{
	HIS_STATUS_INVALID_ID,
	HIS_STATUS_DONE,
	HIS_STATUS_IN_PROGRESS,
	HIS_STATUS_IN_QUEUE,
	HIS_STATUS_PARTIAL,
	HIS_STATUS_FAILED,
	HIS_STATUS_CANCELLED,
	HIS_STATUS_DMA_WAIT
};

struct _sif_rpc_data
{
	void* paddr;
	uint32 pid;
	int32 tid;
	uint32 mode;
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

struct HISGetRequestStatusParameter
{
	int32 requestID;
};

struct HISRemoteBlockTransStatusParameter
{
	int16 channel;
	int16 flag;
};

struct HISGetRequestStatusReturn
{
	HISStatus currentStatus;
};

struct HISGetSPUEndAddressParameter
{
};

_sif_client_data clientData;
uint8 asyncFire;
uint32 cachedVoiceStatus[2];
int8 cachedVoiceStatusReturn[24];
HISDebugState* _iopState;
int8 asyncRequestBuffers[4096];
int8* asyncRequestBuffer;
int32 asyncRequestCurrent;

void HISFlushAsyncRequestsNoWait();
void HISFlushAsyncRequests();
void HISPlayExternalStreamAsync(int32 voice, int32 leftVolume, int32 rightVolume, int32 pitch, int32 flags, int32 attack, int32 release, int32 blockSize);
void HISJoinStereoVoicesAsync(int32 voice1, int32 voice2);
void HISResumeVoiceAsync(int32 voice);
void HISPauseVoiceAsync(int32 voice);
void HISStopVoiceAsync(int32 voice);
void HISSetVoicePitchAsync(int32 voice, int32 pitch);
void HISSetVoiceVolumeAsync(int32 voice, int32 leftVolume, int32 rightVolume);
void HISPlayStreamAsync(int32 voice, int32 leftVolume, int32 rightVolume, int32 pitch, int32 fileIndex, int32 logicalSectorNumber, int32 dataSize, int32 flags, int32 attack, int32 release, int32 blockSize, int32 interleaveSectors);
void HISPlaySoundAsync(int32 voice, int32 leftVolume, int32 rightVolume, int32 pitch, uint32 address, int32 flags, int32 attack, int32 release);
HISDebugState* HISGetDebugState();
void HISSetEffect(int32 mode, int32 leftDepth, int32 rightDepth, int32 delay, int32 feedback, int32 leftVolume, int32 rightVolume);
void HISEnableEffects(uint8 enabled);
int32 HISGetSPUEndAddress();
int32 HISGetSPUStartAddress();
int32 HISGetExternalStreamBuffer(int32 voice);
void HISLoadExternalStream(int32 voice, int32 buffer, void* address);
void HISSetMasterVolume(int32 leftVolume, int32 rightVolume);
void HISGetCachedVoiceStatus(uint32* status);
void HISFlushHostIOHandles();
int32 HISGetFileSize(int32 fileIndex);
void HISWaitForRequest();
uint8 HISCloseRequest(int32 requestID);
uint8 HISCancelRequest(int32 requestID);
HISStatus HISGetRequestStatus(int32 requestID);
int32 HISLoadBlockAsync(int32 fileIndex, int32 sourceBlock, int32 sourceSize, void* destinationAddress, HISMemoryType destinationType, int32 priority, int32 flags);
int32 HISGetFileIndex(int8* filename);
int32 HISGetVersion();
void HISInit(HISMediaType mediaType, int8* cacheSubDirectory);
void HISInitStubs();
void _SyncRPCMain();

// HISFlushAsyncRequestsNoWait__Fv
// Start address: 0x1cc910
void HISFlushAsyncRequestsNoWait()
{
	// Line 1094, Address: 0x1cc910, Func Offset: 0
	// Line 1095, Address: 0x1cc920, Func Offset: 0x10
	// Line 1097, Address: 0x1cc96c, Func Offset: 0x5c
	// Line 1102, Address: 0x1cc978, Func Offset: 0x68
	// Line 1105, Address: 0x1cc994, Func Offset: 0x84
	// Line 1107, Address: 0x1cc9a0, Func Offset: 0x90
	// Func End, Address: 0x1cc9b4, Func Offset: 0xa4
}

// HISFlushAsyncRequests__Fv
// Start address: 0x1cc9c0
void HISFlushAsyncRequests()
{
	// Line 1089, Address: 0x1cc9c0, Func Offset: 0
	// Line 1090, Address: 0x1cc9d4, Func Offset: 0x14
	// Line 1091, Address: 0x1cca2c, Func Offset: 0x6c
	// Func End, Address: 0x1cca44, Func Offset: 0x84
}

// HISPlayExternalStreamAsync__Fiiiiiiii
// Start address: 0x1cca50
void HISPlayExternalStreamAsync(int32 voice, int32 leftVolume, int32 rightVolume, int32 pitch, int32 flags, int32 attack, int32 release, int32 blockSize)
{
	// Line 1041, Address: 0x1cca50, Func Offset: 0
	// Line 1044, Address: 0x1cca6c, Func Offset: 0x1c
	// Line 1045, Address: 0x1cca80, Func Offset: 0x30
	// Line 1046, Address: 0x1cca84, Func Offset: 0x34
	// Line 1047, Address: 0x1cca88, Func Offset: 0x38
	// Line 1048, Address: 0x1cca8c, Func Offset: 0x3c
	// Line 1049, Address: 0x1cca90, Func Offset: 0x40
	// Line 1050, Address: 0x1cca94, Func Offset: 0x44
	// Line 1051, Address: 0x1cca98, Func Offset: 0x48
	// Line 1053, Address: 0x1cca9c, Func Offset: 0x4c
	// Func End, Address: 0x1ccaa4, Func Offset: 0x54
}

// HISJoinStereoVoicesAsync__Fii
// Start address: 0x1ccab0
void HISJoinStereoVoicesAsync(int32 voice1, int32 voice2)
{
	// Line 1026, Address: 0x1ccab0, Func Offset: 0
	// Line 1029, Address: 0x1ccacc, Func Offset: 0x1c
	// Line 1030, Address: 0x1ccae0, Func Offset: 0x30
	// Line 1032, Address: 0x1ccae4, Func Offset: 0x34
	// Func End, Address: 0x1ccaec, Func Offset: 0x3c
}

// HISResumeVoiceAsync__Fi
// Start address: 0x1ccaf0
void HISResumeVoiceAsync(int32 voice)
{
	// Line 1012, Address: 0x1ccaf0, Func Offset: 0
	// Line 1015, Address: 0x1ccb0c, Func Offset: 0x1c
	// Line 1017, Address: 0x1ccb20, Func Offset: 0x30
	// Func End, Address: 0x1ccb28, Func Offset: 0x38
}

// HISPauseVoiceAsync__Fi
// Start address: 0x1ccb30
void HISPauseVoiceAsync(int32 voice)
{
	// Line 999, Address: 0x1ccb30, Func Offset: 0
	// Line 1002, Address: 0x1ccb4c, Func Offset: 0x1c
	// Line 1004, Address: 0x1ccb60, Func Offset: 0x30
	// Func End, Address: 0x1ccb68, Func Offset: 0x38
}

// HISStopVoiceAsync__Fi
// Start address: 0x1ccb70
void HISStopVoiceAsync(int32 voice)
{
	// Line 986, Address: 0x1ccb70, Func Offset: 0
	// Line 989, Address: 0x1ccb8c, Func Offset: 0x1c
	// Line 991, Address: 0x1ccba0, Func Offset: 0x30
	// Func End, Address: 0x1ccba8, Func Offset: 0x38
}

// HISSetVoicePitchAsync__Fii
// Start address: 0x1ccbb0
void HISSetVoicePitchAsync(int32 voice, int32 pitch)
{
	// Line 972, Address: 0x1ccbb0, Func Offset: 0
	// Line 975, Address: 0x1ccbcc, Func Offset: 0x1c
	// Line 976, Address: 0x1ccbe0, Func Offset: 0x30
	// Line 978, Address: 0x1ccbe4, Func Offset: 0x34
	// Func End, Address: 0x1ccbec, Func Offset: 0x3c
}

// HISSetVoiceVolumeAsync__Fiii
// Start address: 0x1ccbf0
void HISSetVoiceVolumeAsync(int32 voice, int32 leftVolume, int32 rightVolume)
{
	// Line 957, Address: 0x1ccbf0, Func Offset: 0
	// Line 960, Address: 0x1ccc0c, Func Offset: 0x1c
	// Line 961, Address: 0x1ccc20, Func Offset: 0x30
	// Line 962, Address: 0x1ccc24, Func Offset: 0x34
	// Line 964, Address: 0x1ccc28, Func Offset: 0x38
	// Func End, Address: 0x1ccc30, Func Offset: 0x40
}

// HISPlayStreamAsync__Fiiiiiiiiiiii
// Start address: 0x1ccc30
void HISPlayStreamAsync(int32 voice, int32 leftVolume, int32 rightVolume, int32 pitch, int32 fileIndex, int32 logicalSectorNumber, int32 dataSize, int32 flags, int32 attack, int32 release, int32 blockSize, int32 interleaveSectors)
{
	// Line 931, Address: 0x1ccc30, Func Offset: 0
	// Line 943, Address: 0x1ccc3c, Func Offset: 0xc
	// Line 944, Address: 0x1ccc40, Func Offset: 0x10
	// Line 945, Address: 0x1ccc44, Func Offset: 0x14
	// Line 946, Address: 0x1ccc48, Func Offset: 0x18
	// Line 931, Address: 0x1ccc4c, Func Offset: 0x1c
	// Line 934, Address: 0x1ccc5c, Func Offset: 0x2c
	// Line 935, Address: 0x1ccc70, Func Offset: 0x40
	// Line 936, Address: 0x1ccc74, Func Offset: 0x44
	// Line 937, Address: 0x1ccc78, Func Offset: 0x48
	// Line 938, Address: 0x1ccc7c, Func Offset: 0x4c
	// Line 939, Address: 0x1ccc80, Func Offset: 0x50
	// Line 940, Address: 0x1ccc84, Func Offset: 0x54
	// Line 941, Address: 0x1ccc88, Func Offset: 0x58
	// Line 942, Address: 0x1ccc8c, Func Offset: 0x5c
	// Line 943, Address: 0x1ccc90, Func Offset: 0x60
	// Line 944, Address: 0x1ccc94, Func Offset: 0x64
	// Line 945, Address: 0x1ccc98, Func Offset: 0x68
	// Line 947, Address: 0x1ccc9c, Func Offset: 0x6c
	// Func End, Address: 0x1ccca4, Func Offset: 0x74
}

// HISPlaySoundAsync__FiiiiUiiii
// Start address: 0x1cccb0
void HISPlaySoundAsync(int32 voice, int32 leftVolume, int32 rightVolume, int32 pitch, uint32 address, int32 flags, int32 attack, int32 release)
{
	// Line 906, Address: 0x1cccb0, Func Offset: 0
	// Line 909, Address: 0x1ccccc, Func Offset: 0x1c
	// Line 910, Address: 0x1ccce0, Func Offset: 0x30
	// Line 911, Address: 0x1ccce4, Func Offset: 0x34
	// Line 912, Address: 0x1ccce8, Func Offset: 0x38
	// Line 913, Address: 0x1cccec, Func Offset: 0x3c
	// Line 914, Address: 0x1cccf0, Func Offset: 0x40
	// Line 915, Address: 0x1cccf4, Func Offset: 0x44
	// Line 916, Address: 0x1cccf8, Func Offset: 0x48
	// Line 918, Address: 0x1cccfc, Func Offset: 0x4c
	// Func End, Address: 0x1ccd04, Func Offset: 0x54
}

// HISGetDebugState__Fv
// Start address: 0x1ccd10
HISDebugState* HISGetDebugState()
{
	_sif_receive_data receiveData;
	int8 state[992];
	// Line 880, Address: 0x1ccd10, Func Offset: 0
	// Line 883, Address: 0x1ccd1c, Func Offset: 0xc
	// Line 888, Address: 0x1ccd24, Func Offset: 0x14
	// Line 890, Address: 0x1ccd3c, Func Offset: 0x2c
	// Line 891, Address: 0x1ccd44, Func Offset: 0x34
	// Func End, Address: 0x1ccd50, Func Offset: 0x40
}

// HISSetEffect__Fiiiiiii
// Start address: 0x1ccd50
void HISSetEffect(int32 mode, int32 leftDepth, int32 rightDepth, int32 delay, int32 feedback, int32 leftVolume, int32 rightVolume)
{
	int8 inputBuffer[30];
	HISSetEffectParameter* input;
	int8 outputBuffer[17];
	HISSetEffectReturn* output;
	// Line 747, Address: 0x1ccd50, Func Offset: 0
	// Line 749, Address: 0x1ccd60, Func Offset: 0x10
	// Line 761, Address: 0x1ccd64, Func Offset: 0x14
	// Line 749, Address: 0x1ccd68, Func Offset: 0x18
	// Line 752, Address: 0x1ccd6c, Func Offset: 0x1c
	// Line 753, Address: 0x1ccd70, Func Offset: 0x20
	// Line 754, Address: 0x1ccd74, Func Offset: 0x24
	// Line 755, Address: 0x1ccd78, Func Offset: 0x28
	// Line 756, Address: 0x1ccd7c, Func Offset: 0x2c
	// Line 757, Address: 0x1ccd80, Func Offset: 0x30
	// Line 761, Address: 0x1ccd84, Func Offset: 0x34
	// Line 762, Address: 0x1ccdc0, Func Offset: 0x70
	// Func End, Address: 0x1ccdd4, Func Offset: 0x84
}

// HISEnableEffects__Fb
// Start address: 0x1ccde0
void HISEnableEffects(uint8 enabled)
{
	int8 inputBuffer[17];
	HISEnableEffectsParameter* input;
	int8 outputBuffer[17];
	HISEnableEffectsReturn* output;
	// Line 735, Address: 0x1ccde0, Func Offset: 0
	// Line 737, Address: 0x1ccdf0, Func Offset: 0x10
	// Line 743, Address: 0x1ccdf4, Func Offset: 0x14
	// Line 737, Address: 0x1ccdf8, Func Offset: 0x18
	// Line 743, Address: 0x1ccdfc, Func Offset: 0x1c
	// Line 744, Address: 0x1cce38, Func Offset: 0x58
	// Func End, Address: 0x1cce4c, Func Offset: 0x6c
}

// HISGetSPUEndAddress__Fv
// Start address: 0x1cce50
int32 HISGetSPUEndAddress()
{
	int8 inputBuffer[17];
	HISGetSPUEndAddressParameter* input;
	int8 outputBuffer[20];
	HISGetSPUEndAddressReturn* output;
	// Line 723, Address: 0x1cce50, Func Offset: 0
	// Line 725, Address: 0x1cce60, Func Offset: 0x10
	// Line 728, Address: 0x1cce64, Func Offset: 0x14
	// Line 731, Address: 0x1ccea4, Func Offset: 0x54
	// Line 732, Address: 0x1ccea8, Func Offset: 0x58
	// Func End, Address: 0x1ccebc, Func Offset: 0x6c
}

// HISGetSPUStartAddress__Fv
// Start address: 0x1ccec0
int32 HISGetSPUStartAddress()
{
	int8 inputBuffer[17];
	HISGetSPUStartAddressParameter* input;
	int8 outputBuffer[20];
	HISGetSPUStartAddressReturn* output;
	// Line 711, Address: 0x1ccec0, Func Offset: 0
	// Line 713, Address: 0x1cced0, Func Offset: 0x10
	// Line 716, Address: 0x1cced4, Func Offset: 0x14
	// Line 719, Address: 0x1ccf14, Func Offset: 0x54
	// Line 720, Address: 0x1ccf18, Func Offset: 0x58
	// Func End, Address: 0x1ccf2c, Func Offset: 0x6c
}

// HISGetExternalStreamBuffer__Fi
// Start address: 0x1ccf30
int32 HISGetExternalStreamBuffer(int32 voice)
{
	int8 inputBuffer[20];
	HISGetExternalStreamBufferParameter* input;
	int8 outputBuffer[20];
	HISGetExternalStreamBufferReturn* output;
	// Line 694, Address: 0x1ccf30, Func Offset: 0
	// Line 698, Address: 0x1ccf40, Func Offset: 0x10
	// Line 704, Address: 0x1ccf44, Func Offset: 0x14
	// Line 698, Address: 0x1ccf48, Func Offset: 0x18
	// Line 704, Address: 0x1ccf4c, Func Offset: 0x1c
	// Line 707, Address: 0x1ccf88, Func Offset: 0x58
	// Line 708, Address: 0x1ccf8c, Func Offset: 0x5c
	// Func End, Address: 0x1ccfa0, Func Offset: 0x70
}

// HISLoadExternalStream__FiiPCv
// Start address: 0x1ccfa0
void HISLoadExternalStream(int32 voice, int32 buffer, void* address)
{
	int8 inputBuffer[24];
	HISLoadExternalStreamParameter* input;
	int8 outputBuffer[17];
	HISLoadExternalStreamReturn* output;
	// Line 678, Address: 0x1ccfa0, Func Offset: 0
	// Line 682, Address: 0x1ccfb0, Func Offset: 0x10
	// Line 690, Address: 0x1ccfb4, Func Offset: 0x14
	// Line 682, Address: 0x1ccfb8, Func Offset: 0x18
	// Line 685, Address: 0x1ccfbc, Func Offset: 0x1c
	// Line 686, Address: 0x1ccfc0, Func Offset: 0x20
	// Line 690, Address: 0x1ccfc4, Func Offset: 0x24
	// Line 691, Address: 0x1cd000, Func Offset: 0x60
	// Func End, Address: 0x1cd014, Func Offset: 0x74
}

// HISSetMasterVolume__Fii
// Start address: 0x1cd020
void HISSetMasterVolume(int32 leftVolume, int32 rightVolume)
{
	int8 inputBuffer[20];
	HISSetMasterVolumeParameter* input;
	int8 outputBuffer[17];
	HISSetMasterVolumeReturn* output;
	// Line 440, Address: 0x1cd020, Func Offset: 0
	// Line 442, Address: 0x1cd030, Func Offset: 0x10
	// Line 449, Address: 0x1cd034, Func Offset: 0x14
	// Line 442, Address: 0x1cd038, Func Offset: 0x18
	// Line 445, Address: 0x1cd03c, Func Offset: 0x1c
	// Line 449, Address: 0x1cd040, Func Offset: 0x20
	// Line 450, Address: 0x1cd07c, Func Offset: 0x5c
	// Func End, Address: 0x1cd090, Func Offset: 0x70
}

// HISGetCachedVoiceStatus__FPUi
// Start address: 0x1cd090
void HISGetCachedVoiceStatus(uint32* status)
{
	// Line 430, Address: 0x1cd090, Func Offset: 0
	// Line 432, Address: 0x1cd09c, Func Offset: 0xc
	// Line 435, Address: 0x1cd0a8, Func Offset: 0x18
	// Line 436, Address: 0x1cd0b0, Func Offset: 0x20
	// Line 437, Address: 0x1cd0b4, Func Offset: 0x24
	// Func End, Address: 0x1cd0dc, Func Offset: 0x4c
}

// HISFlushHostIOHandles__Fv
// Start address: 0x1cd0e0
void HISFlushHostIOHandles()
{
	int8 inputBuffer[17];
	HISFlushHostIOHandlesParameter* input;
	int8 outputBuffer[17];
	HISFlushHostIOHandlesReturn* output;
	// Line 327, Address: 0x1cd0e0, Func Offset: 0
	// Line 329, Address: 0x1cd0f0, Func Offset: 0x10
	// Line 332, Address: 0x1cd0f4, Func Offset: 0x14
	// Line 333, Address: 0x1cd134, Func Offset: 0x54
	// Func End, Address: 0x1cd148, Func Offset: 0x68
}

// HISGetFileSize__Fi
// Start address: 0x1cd150
int32 HISGetFileSize(int32 fileIndex)
{
	int8 inputBuffer[20];
	HISGetFileSizeParameter* input;
	int8 outputBuffer[20];
	HISGetFileSizeReturn* output;
	// Line 312, Address: 0x1cd150, Func Offset: 0
	// Line 314, Address: 0x1cd160, Func Offset: 0x10
	// Line 320, Address: 0x1cd164, Func Offset: 0x14
	// Line 314, Address: 0x1cd168, Func Offset: 0x18
	// Line 320, Address: 0x1cd16c, Func Offset: 0x1c
	// Line 323, Address: 0x1cd1a8, Func Offset: 0x58
	// Line 324, Address: 0x1cd1ac, Func Offset: 0x5c
	// Func End, Address: 0x1cd1c0, Func Offset: 0x70
}

// HISWaitForRequest__Fv
// Start address: 0x1cd1c0
void HISWaitForRequest()
{
	int8 inputBuffer[17];
	HISWaitForRequestParameter* input;
	int8 outputBuffer[17];
	HISWaitForRequestReturn* output;
	// Line 294, Address: 0x1cd1c0, Func Offset: 0
	// Line 296, Address: 0x1cd1d0, Func Offset: 0x10
	// Line 299, Address: 0x1cd1d4, Func Offset: 0x14
	// Line 300, Address: 0x1cd214, Func Offset: 0x54
	// Func End, Address: 0x1cd228, Func Offset: 0x68
}

// HISCloseRequest__Fi
// Start address: 0x1cd230
uint8 HISCloseRequest(int32 requestID)
{
	int8 inputBuffer[20];
	HISCloseRequestParameter* input;
	int8 outputBuffer[17];
	HISCloseRequestReturn* output;
	// Line 253, Address: 0x1cd230, Func Offset: 0
	// Line 257, Address: 0x1cd240, Func Offset: 0x10
	// Line 263, Address: 0x1cd244, Func Offset: 0x14
	// Line 257, Address: 0x1cd248, Func Offset: 0x18
	// Line 263, Address: 0x1cd24c, Func Offset: 0x1c
	// Line 266, Address: 0x1cd288, Func Offset: 0x58
	// Line 267, Address: 0x1cd28c, Func Offset: 0x5c
	// Func End, Address: 0x1cd2a0, Func Offset: 0x70
}

// HISCancelRequest__Fi
// Start address: 0x1cd2a0
uint8 HISCancelRequest(int32 requestID)
{
	int8 inputBuffer[20];
	HISCancelRequestParameter* input;
	int8 outputBuffer[17];
	HISCancelRequestReturn* output;
	// Line 237, Address: 0x1cd2a0, Func Offset: 0
	// Line 240, Address: 0x1cd2b0, Func Offset: 0x10
	// Line 246, Address: 0x1cd2b4, Func Offset: 0x14
	// Line 240, Address: 0x1cd2b8, Func Offset: 0x18
	// Line 246, Address: 0x1cd2bc, Func Offset: 0x1c
	// Line 249, Address: 0x1cd2f8, Func Offset: 0x58
	// Line 250, Address: 0x1cd2fc, Func Offset: 0x5c
	// Func End, Address: 0x1cd310, Func Offset: 0x70
}

// HISGetRequestStatus__Fi
// Start address: 0x1cd310
HISStatus HISGetRequestStatus(int32 requestID)
{
	int8 inputBuffer[20];
	HISGetRequestStatusParameter* input;
	int8 outputBuffer[20];
	HISGetRequestStatusReturn* output;
	// Line 217, Address: 0x1cd310, Func Offset: 0
	// Line 221, Address: 0x1cd320, Func Offset: 0x10
	// Line 227, Address: 0x1cd324, Func Offset: 0x14
	// Line 221, Address: 0x1cd328, Func Offset: 0x18
	// Line 227, Address: 0x1cd32c, Func Offset: 0x1c
	// Line 233, Address: 0x1cd368, Func Offset: 0x58
	// Line 234, Address: 0x1cd36c, Func Offset: 0x5c
	// Func End, Address: 0x1cd380, Func Offset: 0x70
}

// HISLoadBlockAsync__FiiiPv13HISMemoryTypeii
// Start address: 0x1cd380
int32 HISLoadBlockAsync(int32 fileIndex, int32 sourceBlock, int32 sourceSize, void* destinationAddress, HISMemoryType destinationType, int32 priority, int32 flags)
{
	int8 inputBuffer[44];
	HISLoadBlockAsyncParameter* input;
	int8 outputBuffer[20];
	HISLoadBlockAsyncReturn* output;
	// Line 188, Address: 0x1cd380, Func Offset: 0
	// Line 194, Address: 0x1cd390, Func Offset: 0x10
	// Line 197, Address: 0x1cd394, Func Offset: 0x14
	// Line 194, Address: 0x1cd398, Func Offset: 0x18
	// Line 198, Address: 0x1cd39c, Func Offset: 0x1c
	// Line 202, Address: 0x1cd3a0, Func Offset: 0x20
	// Line 203, Address: 0x1cd3a4, Func Offset: 0x24
	// Line 199, Address: 0x1cd3a8, Func Offset: 0x28
	// Line 200, Address: 0x1cd3ac, Func Offset: 0x2c
	// Line 206, Address: 0x1cd3b0, Func Offset: 0x30
	// Line 210, Address: 0x1cd3b8, Func Offset: 0x38
	// Line 213, Address: 0x1cd3f8, Func Offset: 0x78
	// Line 207, Address: 0x1cd400, Func Offset: 0x80
	// Line 213, Address: 0x1cd408, Func Offset: 0x88
	// Line 214, Address: 0x1cd418, Func Offset: 0x98
	// Func End, Address: 0x1cd42c, Func Offset: 0xac
}

// HISGetFileIndex__FPCc
// Start address: 0x1cd430
int32 HISGetFileIndex(int8* filename)
{
	int8 inputBuffer[64];
	HISGetFileIndexParameter* input;
	int8 outputBuffer[20];
	HISGetFileIndexReturn* output;
	// Line 171, Address: 0x1cd430, Func Offset: 0
	// Line 173, Address: 0x1cd440, Func Offset: 0x10
	// Line 171, Address: 0x1cd444, Func Offset: 0x14
	// Line 177, Address: 0x1cd448, Func Offset: 0x18
	// Line 180, Address: 0x1cd454, Func Offset: 0x24
	// Line 183, Address: 0x1cd494, Func Offset: 0x64
	// Line 184, Address: 0x1cd498, Func Offset: 0x68
	// Func End, Address: 0x1cd4ac, Func Offset: 0x7c
}

// HISGetVersion__Fv
// Start address: 0x1cd4b0
int32 HISGetVersion()
{
	int8 inputBuffer[17];
	HISGetVersionParameter* input;
	int8 outputBuffer[20];
	HISGetVersionReturn* output;
	// Line 159, Address: 0x1cd4b0, Func Offset: 0
	// Line 161, Address: 0x1cd4c0, Func Offset: 0x10
	// Line 164, Address: 0x1cd4c4, Func Offset: 0x14
	// Line 167, Address: 0x1cd504, Func Offset: 0x54
	// Line 168, Address: 0x1cd508, Func Offset: 0x58
	// Func End, Address: 0x1cd51c, Func Offset: 0x6c
}

// HISInit__F12HISMediaTypePCc
// Start address: 0x1cd520
void HISInit(HISMediaType mediaType, int8* cacheSubDirectory)
{
	int8 inputBuffer[88];
	HISInitParameter* input;
	int8 outputBuffer[17];
	HISInitReturn* output;
	// Line 137, Address: 0x1cd520, Func Offset: 0
	// Line 139, Address: 0x1cd530, Func Offset: 0x10
	// Line 142, Address: 0x1cd534, Func Offset: 0x14
	// Line 143, Address: 0x1cd538, Func Offset: 0x18
	// Line 148, Address: 0x1cd540, Func Offset: 0x20
	// Line 152, Address: 0x1cd548, Func Offset: 0x28
	// Line 155, Address: 0x1cd588, Func Offset: 0x68
	// Line 156, Address: 0x1cd5d0, Func Offset: 0xb0
	// Line 144, Address: 0x1cd5d8, Func Offset: 0xb8
	// Line 156, Address: 0x1cd5e0, Func Offset: 0xc0
	// Func End, Address: 0x1cd5f4, Func Offset: 0xd4
}

// HISInitStubs__Fv
// Start address: 0x1cd600
void HISInitStubs()
{
	// Line 116, Address: 0x1cd600, Func Offset: 0
	// Line 121, Address: 0x1cd608, Func Offset: 0x8
	// Line 125, Address: 0x1cd610, Func Offset: 0x10
	// Line 127, Address: 0x1cd624, Func Offset: 0x24
	// Line 130, Address: 0x1cd634, Func Offset: 0x34
	// Line 133, Address: 0x1cd638, Func Offset: 0x38
	// Line 134, Address: 0x1cd63c, Func Offset: 0x3c
	// Func End, Address: 0x1cd648, Func Offset: 0x48
}

// _SyncRPCMain__22@unnamed@HisStubs_cpp@Fv
// Start address: 0x1cd650
void _SyncRPCMain()
{
	long32 startTime;
	long32 endTime;
	HISBatchSoundCommandsReturn* ret;
	// Line 35, Address: 0x1cd650, Func Offset: 0
	// Line 36, Address: 0x1cd65c, Func Offset: 0xc
	// Line 46, Address: 0x1cd668, Func Offset: 0x18
	// Line 39, Address: 0x1cd698, Func Offset: 0x48
	// Line 46, Address: 0x1cd69c, Func Offset: 0x4c
	// Line 40, Address: 0x1cd6c0, Func Offset: 0x70
	// Line 46, Address: 0x1cd6c4, Func Offset: 0x74
	// Line 40, Address: 0x1cd6cc, Func Offset: 0x7c
	// Line 46, Address: 0x1cd6dc, Func Offset: 0x8c
	// Line 41, Address: 0x1cd6ec, Func Offset: 0x9c
	// Line 46, Address: 0x1cd6f0, Func Offset: 0xa0
	// Line 41, Address: 0x1cd704, Func Offset: 0xb4
	// Line 46, Address: 0x1cd708, Func Offset: 0xb8
	// Line 44, Address: 0x1cd720, Func Offset: 0xd0
	// Line 47, Address: 0x1cd728, Func Offset: 0xd8
	// Line 55, Address: 0x1cd734, Func Offset: 0xe4
	// Func End, Address: 0x1cd768, Func Offset: 0x118
}

