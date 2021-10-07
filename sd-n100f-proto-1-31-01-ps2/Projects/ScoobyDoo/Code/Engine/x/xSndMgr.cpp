typedef struct Vector3D;
typedef struct _iWAV;
typedef struct tagXStreamMDSDirectory;
typedef struct _iSFX;
typedef struct _xSndMgrData;
typedef struct XStreamHeader;
typedef struct tagXStreamDirectoryEntry;


typedef int8 type_0[16];
typedef tagXStreamDirectoryEntry type_1[1000];
typedef _iSFX type_2[64];
typedef _iWAV type_3[96];
typedef uint32 type_4[2];
typedef int8 type_5[2048];
typedef uint32 type_6[5];
typedef uint32 type_7[5];
typedef uint32 type_8[5];
typedef _iWAV* type_9[5];
typedef int8 type_10[128];
typedef int8 type_11[32];

struct Vector3D
{
	float32 x;
	float32 y;
	float32 z;
};

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

struct tagXStreamMDSDirectory
{
	uint32 count;
	tagXStreamDirectoryEntry directory[1000];
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

struct XStreamHeader
{
	uint32 id;
	uint32 versionID;
	uint8 month;
	uint8 day;
	uint8 hour;
	uint8 minute;
	uint32 mdsOffset;
	uint32 mdsLength;
	tagXStreamMDSDirectory directory;
	int8 safety[2048];
};

struct tagXStreamDirectoryEntry
{
	uint32 id;
	uint32 type;
	uint32 offset;
	uint32 length;
};

_xSndMgrData gSndMgr;
int8 scriptSoundAssetName[16];
int8 vAssertBuf2[128];
XStreamHeader currentHeader;

void xSndMgrSetVoicePosition(int32 voice, float32 x, float32 y, float32 z);
void xSndMgrSetVoiceRadius(int32 voice, float32 radius);
int32 xSndMgrGetUnusedVoice();
int32 xSndMgrLoadSoundBuffer(uint8* buffer, uint32 length);
int32 xSndMgrGetAssetSND_ID(uint32 assetID);
void xSndMgrSetListenerPosition(float32 posX, float32 posY, float32 posZ);
void xSndMgrSetListenerRadius(float32 radius);
int32 xSndMgrPlay3DSoundFreq(int32 soundID, int32 soundVol, int32 freq, Vector3D* p);
void xSndMgrIdle(ulong32 time);
void xSndMgrLevelReset();
void xSndMgrSetLevelReset();
void xSndMgrPrepareNonStaticSoundBanks();
void xSndMgrRemoveWavFromBankList(_iWAV* wav);
void xSndMgrAddWavToBankList(_iWAV* wav);
void xSndMgrSetActiveSoundBank(int32 bank);
void xSndMgrDispose();
void xSndMgrMasterVolumeChange();
void xSndMgrInit();

// xSndMgrSetVoicePosition__Fifff
// Start address: 0x330620
void xSndMgrSetVoicePosition(int32 voice, float32 x, float32 y, float32 z)
{
	// Line 1196, Address: 0x330620, Func Offset: 0
	// Line 1197, Address: 0x330648, Func Offset: 0x28
	// Line 1198, Address: 0x3306e8, Func Offset: 0xc8
	// Line 1200, Address: 0x33078c, Func Offset: 0x16c
	// Line 1201, Address: 0x3307a8, Func Offset: 0x188
	// Line 1202, Address: 0x3307c4, Func Offset: 0x1a4
	// Line 1204, Address: 0x3307e0, Func Offset: 0x1c0
	// Line 1205, Address: 0x330804, Func Offset: 0x1e4
	// Func End, Address: 0x330824, Func Offset: 0x204
}

// xSndMgrSetVoiceRadius__Fif
// Start address: 0x330830
void xSndMgrSetVoiceRadius(int32 voice, float32 radius)
{
	// Line 1173, Address: 0x330830, Func Offset: 0
	// Line 1174, Address: 0x330848, Func Offset: 0x18
	// Line 1175, Address: 0x3308e8, Func Offset: 0xb8
	// Line 1177, Address: 0x33098c, Func Offset: 0x15c
	// Line 1179, Address: 0x3309a8, Func Offset: 0x178
	// Line 1180, Address: 0x3309cc, Func Offset: 0x19c
	// Func End, Address: 0x3309e4, Func Offset: 0x1b4
}

// xSndMgrGetUnusedVoice__Fv
// Start address: 0x3309f0
int32 xSndMgrGetUnusedVoice()
{
	int32 i;
	// Line 1046, Address: 0x3309f0, Func Offset: 0
	// Line 1047, Address: 0x330a00, Func Offset: 0x10
	// Line 1049, Address: 0x330a0c, Func Offset: 0x1c
	// Line 1051, Address: 0x330a18, Func Offset: 0x28
	// Line 1053, Address: 0x330a40, Func Offset: 0x50
	// Line 1055, Address: 0x330a48, Func Offset: 0x58
	// Line 1057, Address: 0x330a5c, Func Offset: 0x6c
	// Line 1058, Address: 0x330a60, Func Offset: 0x70
	// Func End, Address: 0x330a68, Func Offset: 0x78
}

// xSndMgrLoadSoundBuffer__FPUcUi
// Start address: 0x330a70
int32 xSndMgrLoadSoundBuffer(uint8* buffer, uint32 length)
{
	int32 soundID;
	// Line 982, Address: 0x330a70, Func Offset: 0
	// Line 985, Address: 0x330a78, Func Offset: 0x8
	// Line 987, Address: 0x330a88, Func Offset: 0x18
	// Line 991, Address: 0x330a94, Func Offset: 0x24
	// Line 992, Address: 0x330b08, Func Offset: 0x98
	// Line 994, Address: 0x330b14, Func Offset: 0xa4
	// Line 996, Address: 0x330b24, Func Offset: 0xb4
	// Line 999, Address: 0x330b30, Func Offset: 0xc0
	// Line 1000, Address: 0x330b38, Func Offset: 0xc8
	// Func End, Address: 0x330b48, Func Offset: 0xd8
}

// xSndMgrGetAssetSND_ID__FUi
// Start address: 0x330b50
int32 xSndMgrGetAssetSND_ID(uint32 assetID)
{
	int32 i;
	// Line 830, Address: 0x330b50, Func Offset: 0
	// Line 833, Address: 0x330b5c, Func Offset: 0xc
	// Line 835, Address: 0x330b68, Func Offset: 0x18
	// Line 837, Address: 0x330b98, Func Offset: 0x48
	// Line 838, Address: 0x330bc4, Func Offset: 0x74
	// Line 840, Address: 0x330bcc, Func Offset: 0x7c
	// Line 842, Address: 0x330bdc, Func Offset: 0x8c
	// Line 843, Address: 0x330bf0, Func Offset: 0xa0
	// Line 844, Address: 0x330bf4, Func Offset: 0xa4
	// Func End, Address: 0x330c04, Func Offset: 0xb4
}

// xSndMgrSetListenerPosition__Ffff
// Start address: 0x330c10
void xSndMgrSetListenerPosition(float32 posX, float32 posY, float32 posZ)
{
	// Line 693, Address: 0x330c10, Func Offset: 0
	// Line 696, Address: 0x330c20, Func Offset: 0x10
	// Line 700, Address: 0x330c68, Func Offset: 0x58
	// Line 701, Address: 0x330c70, Func Offset: 0x60
	// Line 702, Address: 0x330c78, Func Offset: 0x68
	// Line 703, Address: 0x330c80, Func Offset: 0x70
	// Line 705, Address: 0x330c8c, Func Offset: 0x7c
	// Func End, Address: 0x330c94, Func Offset: 0x84
}

// xSndMgrSetListenerRadius__Ff
// Start address: 0x330ca0
void xSndMgrSetListenerRadius(float32 radius)
{
	// Line 673, Address: 0x330ca0, Func Offset: 0
	// Line 676, Address: 0x330cb0, Func Offset: 0x10
	// Line 678, Address: 0x330cc8, Func Offset: 0x28
	// Line 679, Address: 0x330cd0, Func Offset: 0x30
	// Line 681, Address: 0x330cdc, Func Offset: 0x3c
	// Func End, Address: 0x330ce4, Func Offset: 0x44
}

// xSndMgrPlay3DSoundFreq__FiiiP8Vector3D
// Start address: 0x330cf0
int32 xSndMgrPlay3DSoundFreq(int32 soundID, int32 soundVol, int32 freq, Vector3D* p)
{
	int32 v;
	// Line 647, Address: 0x330cf0, Func Offset: 0
	// Line 651, Address: 0x330d00, Func Offset: 0x10
	// Line 653, Address: 0x330d08, Func Offset: 0x18
	// Line 655, Address: 0x330d14, Func Offset: 0x24
	// Line 656, Address: 0x330d38, Func Offset: 0x48
	// Line 657, Address: 0x330d5c, Func Offset: 0x6c
	// Line 661, Address: 0x330dbc, Func Offset: 0xcc
	// Func End, Address: 0x330dd0, Func Offset: 0xe0
}

// xSndMgrIdle__FUl
// Start address: 0x330dd0
void xSndMgrIdle(ulong32 time)
{
	// Line 609, Address: 0x330dd0, Func Offset: 0
	// Line 610, Address: 0x330dd8, Func Offset: 0x8
	// Line 613, Address: 0x330de8, Func Offset: 0x18
	// Line 615, Address: 0x330df0, Func Offset: 0x20
	// Func End, Address: 0x330e00, Func Offset: 0x30
}

// xSndMgrLevelReset__Fv
// Start address: 0x330e00
void xSndMgrLevelReset()
{
	// Line 590, Address: 0x330e00, Func Offset: 0
	// Line 591, Address: 0x330e10, Func Offset: 0x10
	// Line 595, Address: 0x330e20, Func Offset: 0x20
	// Line 596, Address: 0x330e28, Func Offset: 0x28
	// Line 597, Address: 0x3310a4, Func Offset: 0x2a4
	// Func End, Address: 0x3310bc, Func Offset: 0x2bc
}

// xSndMgrSetLevelReset__Fv
// Start address: 0x3310c0
void xSndMgrSetLevelReset()
{
	int32 i;
	// Line 559, Address: 0x3310c0, Func Offset: 0
	// Line 563, Address: 0x3310d0, Func Offset: 0x10
	// Line 566, Address: 0x3310e0, Func Offset: 0x20
	// Line 568, Address: 0x3310ec, Func Offset: 0x2c
	// Line 570, Address: 0x331118, Func Offset: 0x58
	// Line 572, Address: 0x331140, Func Offset: 0x80
	// Line 574, Address: 0x331154, Func Offset: 0x94
	// Line 577, Address: 0x33115c, Func Offset: 0x9c
	// Line 578, Address: 0x3313d8, Func Offset: 0x318
	// Line 580, Address: 0x3313f8, Func Offset: 0x338
	// Func End, Address: 0x331410, Func Offset: 0x350
}

// xSndMgrPrepareNonStaticSoundBanks__Fv
// Start address: 0x331410
void xSndMgrPrepareNonStaticSoundBanks()
{
	uint32 sramGenericSize;
	uint32 freeSRAM;
	uint32 usedSRAM;
	// Line 482, Address: 0x331410, Func Offset: 0
	// Line 485, Address: 0x331420, Func Offset: 0x10
	// Line 488, Address: 0x331430, Func Offset: 0x20
	// Line 489, Address: 0x3315c4, Func Offset: 0x1b4
	// Line 491, Address: 0x3315d0, Func Offset: 0x1c0
	// Line 493, Address: 0x331674, Func Offset: 0x264
	// Line 496, Address: 0x331688, Func Offset: 0x278
	// Line 498, Address: 0x33168c, Func Offset: 0x27c
	// Line 499, Address: 0x3316a4, Func Offset: 0x294
	// Line 500, Address: 0x3316b8, Func Offset: 0x2a8
	// Line 503, Address: 0x331764, Func Offset: 0x354
	// Line 505, Address: 0x331778, Func Offset: 0x368
	// Line 507, Address: 0x3317a0, Func Offset: 0x390
	// Line 508, Address: 0x33184c, Func Offset: 0x43c
	// Line 509, Address: 0x331850, Func Offset: 0x440
	// Line 512, Address: 0x331858, Func Offset: 0x448
	// Line 529, Address: 0x331864, Func Offset: 0x454
	// Line 530, Address: 0x331884, Func Offset: 0x474
	// Line 531, Address: 0x3318a0, Func Offset: 0x490
	// Line 535, Address: 0x3318bc, Func Offset: 0x4ac
	// Line 538, Address: 0x3318cc, Func Offset: 0x4bc
	// Line 539, Address: 0x3318e8, Func Offset: 0x4d8
	// Line 542, Address: 0x331904, Func Offset: 0x4f4
	// Line 543, Address: 0x3319e4, Func Offset: 0x5d4
	// Line 544, Address: 0x331ac4, Func Offset: 0x6b4
	// Line 545, Address: 0x331ba4, Func Offset: 0x794
	// Line 548, Address: 0x331c84, Func Offset: 0x874
	// Line 549, Address: 0x331ca4, Func Offset: 0x894
	// Func End, Address: 0x331cbc, Func Offset: 0x8ac
}

// xSndMgrRemoveWavFromBankList__FP5_iWAV
// Start address: 0x331cc0
void xSndMgrRemoveWavFromBankList(_iWAV* wav)
{
	_iWAV* prev;
	_iWAV* idx;
	// Line 397, Address: 0x331cc0, Func Offset: 0
	// Line 398, Address: 0x331cd4, Func Offset: 0x14
	// Line 399, Address: 0x331d74, Func Offset: 0xb4
	// Line 401, Address: 0x331e2c, Func Offset: 0x16c
	// Line 403, Address: 0x331e4c, Func Offset: 0x18c
	// Line 404, Address: 0x331e68, Func Offset: 0x1a8
	// Line 405, Address: 0x331e6c, Func Offset: 0x1ac
	// Line 411, Address: 0x331e74, Func Offset: 0x1b4
	// Line 412, Address: 0x331e90, Func Offset: 0x1d0
	// Line 415, Address: 0x331e98, Func Offset: 0x1d8
	// Line 418, Address: 0x331ea0, Func Offset: 0x1e0
	// Line 419, Address: 0x331f40, Func Offset: 0x280
	// Line 420, Address: 0x331f48, Func Offset: 0x288
	// Line 421, Address: 0x331f4c, Func Offset: 0x28c
	// Line 423, Address: 0x331f54, Func Offset: 0x294
	// Line 424, Address: 0x331f58, Func Offset: 0x298
	// Line 425, Address: 0x331f60, Func Offset: 0x2a0
	// Line 428, Address: 0x331f68, Func Offset: 0x2a8
	// Line 429, Address: 0x331f7c, Func Offset: 0x2bc
	// Line 431, Address: 0x332014, Func Offset: 0x354
	// Func End, Address: 0x33202c, Func Offset: 0x36c
}

// xSndMgrAddWavToBankList__FP5_iWAV
// Start address: 0x332030
void xSndMgrAddWavToBankList(_iWAV* wav)
{
	_iWAV* prev;
	_iWAV* idx;
	// Line 341, Address: 0x332030, Func Offset: 0
	// Line 342, Address: 0x332048, Func Offset: 0x18
	// Line 343, Address: 0x3320e8, Func Offset: 0xb8
	// Line 345, Address: 0x33218c, Func Offset: 0x15c
	// Line 347, Address: 0x3321ac, Func Offset: 0x17c
	// Line 348, Address: 0x3321c4, Func Offset: 0x194
	// Line 353, Address: 0x3321cc, Func Offset: 0x19c
	// Line 355, Address: 0x3321e8, Func Offset: 0x1b8
	// Line 357, Address: 0x3321f0, Func Offset: 0x1c0
	// Line 359, Address: 0x332290, Func Offset: 0x260
	// Line 362, Address: 0x3322a4, Func Offset: 0x274
	// Line 364, Address: 0x3322ac, Func Offset: 0x27c
	// Line 365, Address: 0x3322b4, Func Offset: 0x284
	// Line 366, Address: 0x3322cc, Func Offset: 0x29c
	// Line 369, Address: 0x3322d4, Func Offset: 0x2a4
	// Line 370, Address: 0x3322d8, Func Offset: 0x2a8
	// Line 371, Address: 0x3322dc, Func Offset: 0x2ac
	// Line 373, Address: 0x3322e0, Func Offset: 0x2b0
	// Line 376, Address: 0x3322e8, Func Offset: 0x2b8
	// Line 377, Address: 0x3322ec, Func Offset: 0x2bc
	// Line 378, Address: 0x3322f4, Func Offset: 0x2c4
	// Line 381, Address: 0x332300, Func Offset: 0x2d0
	// Line 383, Address: 0x332304, Func Offset: 0x2d4
	// Func End, Address: 0x332320, Func Offset: 0x2f0
}

// xSndMgrSetActiveSoundBank__Fi
// Start address: 0x332320
void xSndMgrSetActiveSoundBank(int32 bank)
{
	// Line 199, Address: 0x332320, Func Offset: 0
	// Line 200, Address: 0x332330, Func Offset: 0x10
	// Line 202, Address: 0x332344, Func Offset: 0x24
	// Line 203, Address: 0x3323e4, Func Offset: 0xc4
	// Line 205, Address: 0x332488, Func Offset: 0x168
	// Line 206, Address: 0x332490, Func Offset: 0x170
	// Func End, Address: 0x3324a4, Func Offset: 0x184
}

// xSndMgrDispose__Fv
// Start address: 0x3324b0
void xSndMgrDispose()
{
	// Line 167, Address: 0x3324b0, Func Offset: 0
	// Line 168, Address: 0x3324b8, Func Offset: 0x8
	// Line 169, Address: 0x3324c0, Func Offset: 0x10
	// Func End, Address: 0x3324d0, Func Offset: 0x20
}

// xSndMgrMasterVolumeChange__Fv
// Start address: 0x3324d0
void xSndMgrMasterVolumeChange()
{
	_iSFX* sp;
	int32 i;
	// Line 139, Address: 0x3324d0, Func Offset: 0
	// Line 141, Address: 0x3324e4, Func Offset: 0x14
	// Line 143, Address: 0x3324f4, Func Offset: 0x24
	// Line 146, Address: 0x332518, Func Offset: 0x48
	// Line 149, Address: 0x332528, Func Offset: 0x58
	// Line 155, Address: 0x33253c, Func Offset: 0x6c
	// Func End, Address: 0x332544, Func Offset: 0x74
}

// xSndMgrInit__Fv
// Start address: 0x332550
void xSndMgrInit()
{
	int32 i;
	// Line 43, Address: 0x332550, Func Offset: 0
	// Line 48, Address: 0x332558, Func Offset: 0x8
	// Line 51, Address: 0x332560, Func Offset: 0x10
	// Line 57, Address: 0x33256c, Func Offset: 0x1c
	// Line 61, Address: 0x332578, Func Offset: 0x28
	// Line 64, Address: 0x332580, Func Offset: 0x30
	// Line 68, Address: 0x3325a0, Func Offset: 0x50
	// Line 70, Address: 0x3325ac, Func Offset: 0x5c
	// Line 71, Address: 0x3325c8, Func Offset: 0x78
	// Line 72, Address: 0x3325e4, Func Offset: 0x94
	// Line 73, Address: 0x332604, Func Offset: 0xb4
	// Line 74, Address: 0x332620, Func Offset: 0xd0
	// Line 75, Address: 0x33263c, Func Offset: 0xec
	// Line 76, Address: 0x332658, Func Offset: 0x108
	// Line 77, Address: 0x332674, Func Offset: 0x124
	// Line 78, Address: 0x332690, Func Offset: 0x140
	// Line 79, Address: 0x3326ac, Func Offset: 0x15c
	// Line 80, Address: 0x3326c8, Func Offset: 0x178
	// Line 81, Address: 0x3326e4, Func Offset: 0x194
	// Line 82, Address: 0x332700, Func Offset: 0x1b0
	// Line 83, Address: 0x33271c, Func Offset: 0x1cc
	// Line 87, Address: 0x33272c, Func Offset: 0x1dc
	// Line 89, Address: 0x332738, Func Offset: 0x1e8
	// Line 90, Address: 0x33275c, Func Offset: 0x20c
	// Line 91, Address: 0x332780, Func Offset: 0x230
	// Line 93, Address: 0x3327c8, Func Offset: 0x278
	// Line 94, Address: 0x3327ec, Func Offset: 0x29c
	// Line 95, Address: 0x332810, Func Offset: 0x2c0
	// Line 96, Address: 0x332834, Func Offset: 0x2e4
	// Line 97, Address: 0x332858, Func Offset: 0x308
	// Line 98, Address: 0x33287c, Func Offset: 0x32c
	// Line 99, Address: 0x3328a0, Func Offset: 0x350
	// Line 100, Address: 0x3328c4, Func Offset: 0x374
	// Line 101, Address: 0x3328e8, Func Offset: 0x398
	// Line 103, Address: 0x33290c, Func Offset: 0x3bc
	// Line 106, Address: 0x33291c, Func Offset: 0x3cc
	// Line 111, Address: 0x332924, Func Offset: 0x3d4
	// Line 114, Address: 0x33292c, Func Offset: 0x3dc
	// Line 115, Address: 0x332938, Func Offset: 0x3e8
	// Func End, Address: 0x332948, Func Offset: 0x3f8
}

