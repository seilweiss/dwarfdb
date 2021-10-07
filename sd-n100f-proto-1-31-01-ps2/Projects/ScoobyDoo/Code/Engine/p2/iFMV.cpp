typedef struct _iWAV;
typedef struct Vector3D;
typedef struct _iSFX;
typedef struct _xSndMgrData;


typedef int8 type_0[64];
typedef _iSFX type_1[64];
typedef _iWAV type_2[96];
typedef uint32 type_3[2];
typedef uint32 type_4[5];
typedef uint32 type_5[5];
typedef uint32 type_6[5];
typedef uint8 type_7[307200];
typedef _iWAV* type_8[5];
typedef int8 type_9[32];

struct _iWAV
{
	uint8 m_used;
	uint8 m_bank;
	uint16 m_pad;
	int32 m_idx;
	int8 m_name[32];
	uint32 m_assetID;
	uint32 m_size;
	uint32 m_samples;
	uint32 m_age;
	uint32 m_addr;
	uint32 m_sramsize;
	uint32 m_freq;
	uint32 m_type;
	uint32 m_locked;
	uint32 m_pitch;
	_iWAV* m_next;
};

struct Vector3D
{
	float32 x;
	float32 y;
	float32 z;
};

struct _iSFX
{
	int32 m_idx;
	int32 m_wavIdx;
	uint32 m_flags;
	uint32 m_soundPriority;
	void* m_callback;
	uint32 m_callbackData;
	Vector3D m_position;
	Vector3D m_velocity;
	float32 m_radius;
	uint16 m_playChunk;
	uint16 m_playChunkCount;
	uint32 m_volC[2];
	uint32 m_vol;
	uint32 m_pan;
	int16 m_loopCount;
	uint16 m_freq;
	uint16 m_pitch;
	uint16 m_userRef;
};

struct _xSndMgrData
{
	_iSFX m_voice[64];
	_iWAV m_id[96];
	Vector3D m_listenPos;
	Vector3D m_listenRot;
	uint8 m_masterVolume;
	uint8 m_isPaused;
	uint8 m_inStereo;
	uint8 m_pad;
	float32 m_listenRad;
	uint16 m_pad2;
	uint8 m_listenTouch;
	uint8 m_initialized;
	uint16 m_lastRef;
	uint8 m_paused;
	uint8 m_activeBank;
	uint32 m_bankMaxAddr[5];
	uint32 m_bankMinAddr[5];
	uint32 m_bankIdxAddr[5];
	_iWAV* m_bankList[5];
};

uint32 gFMVassetID;
uint8 gAudioMem[307200];
uint8 gAudioStatus;
_xSndMgrData gSndMgr;

uint32 iFMVStopAudio();
uint32 iFMVStartAudio(uint32 audioID, uint32 flags);
uint32 iFMVPlayMovie();

// iFMVStopAudio__Fv
// Start address: 0x388080
uint32 iFMVStopAudio()
{
	// Line 83, Address: 0x388080, Func Offset: 0
	// Line 84, Address: 0x388088, Func Offset: 0x8
	// Line 86, Address: 0x388098, Func Offset: 0x18
	// Line 87, Address: 0x3880a0, Func Offset: 0x20
	// Line 89, Address: 0x3880a4, Func Offset: 0x24
	// Line 90, Address: 0x3880a8, Func Offset: 0x28
	// Func End, Address: 0x3880b8, Func Offset: 0x38
}

// iFMVStartAudio__FUiUi
// Start address: 0x3880c0
uint32 iFMVStartAudio(uint32 audioID, uint32 flags)
{
	int8 audioFileName[64];
	// Line 46, Address: 0x3880c0, Func Offset: 0
	// Line 49, Address: 0x3880d0, Func Offset: 0x10
	// Line 50, Address: 0x3880dc, Func Offset: 0x1c
	// Line 53, Address: 0x3880f0, Func Offset: 0x30
	// Line 56, Address: 0x38811c, Func Offset: 0x5c
	// Line 57, Address: 0x38812c, Func Offset: 0x6c
	// Line 59, Address: 0x388144, Func Offset: 0x84
	// Line 60, Address: 0x388154, Func Offset: 0x94
	// Line 64, Address: 0x388160, Func Offset: 0xa0
	// Line 66, Address: 0x388170, Func Offset: 0xb0
	// Line 68, Address: 0x38818c, Func Offset: 0xcc
	// Line 69, Address: 0x3881a4, Func Offset: 0xe4
	// Line 72, Address: 0x3881b8, Func Offset: 0xf8
	// Line 74, Address: 0x3881c0, Func Offset: 0x100
	// Line 75, Address: 0x3881c4, Func Offset: 0x104
	// Func End, Address: 0x3881d8, Func Offset: 0x118
}

// iFMVPlayMovie__FUiUi
// Start address: 0x3881e0
uint32 iFMVPlayMovie()
{
	// Line 35, Address: 0x3881e0, Func Offset: 0
	// Line 36, Address: 0x3881e4, Func Offset: 0x4
	// Func End, Address: 0x3881ec, Func Offset: 0xc
}

