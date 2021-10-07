typedef struct descriptor;
typedef struct AudioStream_s;
typedef struct _class_0;
typedef struct _class_1;

typedef void(*type_2)(AudioStream_s*);
typedef void(*type_13)(AudioStream_s*);

typedef int8 type_0[32];
typedef int8 type_1[30];
typedef void* type_3[4];
typedef int8 type_4[21];
typedef AudioStream_s* type_5[4];
typedef void* type_6[128];
typedef int8 type_7[35];
typedef void* type_8[4];
typedef int8 type_9[14];
typedef int8 type_10[30];
typedef int32 type_11[4];
typedef void* type_12[4];

struct descriptor
{
	descriptor* l;
	_class_0 u;
	int32 pad1;
	int32 pad2;
};

struct AudioStream_s
{
	int32 id;
	AudioStream_s* pNext;
	int32 status;
	void* pAmStream;
	int32 PendingRequestCounter;
	uint32 interruptsTillEnd;
	int8* pFileName;
	void* pPlayBuffer;
	void* pTransferBuffer;
	int32 QueueRequested;
	int32 Queued;
	void(*m_callback)(AudioStream_s*);
	int16 lastVol;
	int16 lastVolAtten;
};

struct _class_0
{
	union
	{
		_class_1 ts;
		int32 tgsz;
	};
};

struct _class_1
{
	struct
	{
		uint32 size : 31;
		uint32 tag : 1;
	};
};

descriptor alloc_h;
descriptor free_h;
descriptor* h_start;
int32 h_size;
int8 MustCallInitStr[30];
int8 NoReintStr[30];
int32 AudioStreamSystemInitialized;
int8 par_inv_str[21];
int8 out_of_mem_str[14];
int8 snd_mgr_err_str[32];
int32 AudioStreamUniqueID;
int32 StreamBufferUsed[4];
void* StreamHeaderBuffer[4];
void* StreamTransferBuffer[4];
void* StreamPlayBuffer[4];
AudioStream_s* AudioStreamBuf[4];
int32 p2SndMgrSafeToAudioInterrupt;

void iAudioStreamDestroy();
void iAudioStreamUnpause();
void iAudioStreamPause();
void* iAudioStreamCreate();
void iAudioStreamDeinitSystem();
void iAudioStreamInitSystem();
int32 iAudioStreamPaused(AudioStream_s* pStream);
int32 iAudioStreamPlaying(AudioStream_s* pStream);

// iAudioStreamDestroy__FP13AudioStream_s
// Start address: 0x38aeb0
void iAudioStreamDestroy()
{
	// Line 700, Address: 0x38aeb0, Func Offset: 0
	// Func End, Address: 0x38aeb8, Func Offset: 0x8
}

// iAudioStreamUnpause__FP13AudioStream_s
// Start address: 0x38aec0
void iAudioStreamUnpause()
{
	// Line 680, Address: 0x38aec0, Func Offset: 0
	// Func End, Address: 0x38aec8, Func Offset: 0x8
}

// iAudioStreamPause__FP13AudioStream_s
// Start address: 0x38aed0
void iAudioStreamPause()
{
	// Line 671, Address: 0x38aed0, Func Offset: 0
	// Func End, Address: 0x38aed8, Func Offset: 0x8
}

// iAudioStreamCreate__FPci
// Start address: 0x38aee0
void* iAudioStreamCreate()
{
	// Line 563, Address: 0x38aee0, Func Offset: 0
	// Line 564, Address: 0x38aee4, Func Offset: 0x4
	// Func End, Address: 0x38aeec, Func Offset: 0xc
}

// iAudioStreamDeinitSystem__Fv
// Start address: 0x38aef0
void iAudioStreamDeinitSystem()
{
	// Line 442, Address: 0x38aef0, Func Offset: 0
	// Func End, Address: 0x38aef8, Func Offset: 0x8
}

// iAudioStreamInitSystem__FPvi
// Start address: 0x38af00
void iAudioStreamInitSystem()
{
	// Line 412, Address: 0x38af00, Func Offset: 0
	// Func End, Address: 0x38af08, Func Offset: 0x8
}

// iAudioStreamPaused__FP13AudioStream_s
// Start address: 0x38af10
int32 iAudioStreamPaused(AudioStream_s* pStream)
{
	// Line 327, Address: 0x38af10, Func Offset: 0
	// Func End, Address: 0x38af20, Func Offset: 0x10
}

// iAudioStreamPlaying__FP13AudioStream_s
// Start address: 0x38af20
int32 iAudioStreamPlaying(AudioStream_s* pStream)
{
	// Line 326, Address: 0x38af20, Func Offset: 0
	// Func End, Address: 0x38af30, Func Offset: 0x10
}

