typedef struct _iWAV;
typedef struct _iSFX;
typedef struct AudioStream_s;
typedef struct tagXStreamMDSDirectory;
typedef struct XStreamHeader;
typedef struct Vector3D;
typedef struct tagFile;
typedef struct tagXStreamDirectoryEntry;
typedef struct _xSndMgrData;

typedef void(*type_9)(AudioStream_s*);

typedef uint32 type_0[5];
typedef uint32 type_1[5];
typedef tagXStreamDirectoryEntry type_2[1000];
typedef uint32 type_3[5];
typedef _iWAV* type_4[5];
typedef int8 type_5[256];
typedef int8 type_6[32];
typedef uint8 type_7[64];
typedef int8 type_8[2048];
typedef int8 type_10[128];
typedef _iSFX type_11[64];
typedef _iWAV type_12[96];
typedef uint32 type_13[2];

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

struct tagXStreamMDSDirectory
{
	uint32 count;
	tagXStreamDirectoryEntry directory[1000];
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

struct Vector3D
{
	float32 x;
	float32 y;
	float32 z;
};

struct tagFile
{
	int8 m_name[256];
	int32 m_state;
	int32 m_desc;
	uint32 m_fpos;
};

struct tagXStreamDirectoryEntry
{
	uint32 id;
	uint32 type;
	uint32 offset;
	uint32 length;
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

uint32 sram_addr;
uint32 SRAMbase;
int32 p2SndMgrSafeToAudioInterrupt;
int32 p2SndMgrSafeToAudioDriverInterrupt;
int32 NextStrPointerInitialized;
AudioStream_s* myAudioStreams;
AudioStream_s* myNextAudioStream;
uint8 p2_voice_status[64];
_xSndMgrData gSndMgr;
int8 vAssertBuf2[128];
XStreamHeader currentHeader;

void* iSndMgrCreateStream(int8* FileName, int32 looping);
void iSndMgrSetVoiceFrequency();
void iSndMgrStopSound(int32 soundVoice);
int32 iSndMgrPlaySoundVolLoop(int32 soundID, int32 soundVol, int32 loopCount);
int32 iSndMgrPlaySoundVolFreq(int32 soundID, int32 soundVol, int32 freq);
int32 iSndMgrPlaySoundVol(int32 soundID, int32 soundVol);
int32 iSndMgrPlaySound(_iSFX* sfx);
int32 iSndMgrLoadSoundBuffer(uint8* buffer, uint32 soundSize, int32 soundID);
void iSndMgrFixFreq(int32 soundID, int32 newFreq);
uint32 iSndMgrGetSRAMSize();
int32 iSndMgrTransferToSRAM(uint8* buffer, uint32 size, _iWAV* wav);
int32 iSndMgrBankMakeRoom(int32 bank, uint32* addr, uint32 size);
void iSndMgrUnpause();
void iSndMgrPause();
void p2SndMgrUpdateVoice(int32 status, _iSFX* sp);
void p2SndMgrCalcVol(_iSFX* sp);
void iSndMgrIdle();
void iSndMgrDebugMode();
void iSndMgrFreeAll();
void iSndMgrLevelReset();
void iSndMgrSetLevelReset();
void iSndMgrDispose();
void iSndMgrInit();

// iSndMgrCreateStream__FPci
// Start address: 0x36c710
void* iSndMgrCreateStream(int8* FileName, int32 looping)
{
	AudioStream_s* pStream;
	// Line 2109, Address: 0x36c710, Func Offset: 0
	// Line 2112, Address: 0x36c718, Func Offset: 0x8
	// Line 2113, Address: 0x36c724, Func Offset: 0x14
	// Line 2114, Address: 0x36c72c, Func Offset: 0x1c
	// Line 2116, Address: 0x36c734, Func Offset: 0x24
	// Line 2117, Address: 0x36c73c, Func Offset: 0x2c
	// Line 2119, Address: 0x36c740, Func Offset: 0x30
	// Line 2121, Address: 0x36c74c, Func Offset: 0x3c
	// Func End, Address: 0x36c75c, Func Offset: 0x4c
}

// iSndMgrSetVoiceFrequency__Fii
// Start address: 0x36c760
void iSndMgrSetVoiceFrequency()
{
	// Line 2100, Address: 0x36c760, Func Offset: 0
	// Func End, Address: 0x36c768, Func Offset: 0x8
}

// iSndMgrStopSound__Fi
// Start address: 0x36c770
void iSndMgrStopSound(int32 soundVoice)
{
	_iSFX* sp;
	// Line 2070, Address: 0x36c770, Func Offset: 0
	// Line 2073, Address: 0x36c780, Func Offset: 0x10
	// Line 2077, Address: 0x36c78c, Func Offset: 0x1c
	// Line 2080, Address: 0x36c7a4, Func Offset: 0x34
	// Line 2082, Address: 0x36c7b4, Func Offset: 0x44
	// Line 2084, Address: 0x36c7c4, Func Offset: 0x54
	// Func End, Address: 0x36c7cc, Func Offset: 0x5c
}

// iSndMgrPlaySoundVolLoop__Fiii
// Start address: 0x36c7d0
int32 iSndMgrPlaySoundVolLoop(int32 soundID, int32 soundVol, int32 loopCount)
{
	_iWAV* wav;
	_iSFX* sfx;
	int32 voice;
	// Line 1894, Address: 0x36c7d0, Func Offset: 0
	// Line 1899, Address: 0x36c7ec, Func Offset: 0x1c
	// Line 1900, Address: 0x36c7fc, Func Offset: 0x2c
	// Line 1903, Address: 0x36c808, Func Offset: 0x38
	// Line 1905, Address: 0x36c814, Func Offset: 0x44
	// Line 1906, Address: 0x36c824, Func Offset: 0x54
	// Line 1909, Address: 0x36c830, Func Offset: 0x60
	// Line 1910, Address: 0x36c844, Func Offset: 0x74
	// Line 1911, Address: 0x36c858, Func Offset: 0x88
	// Line 1915, Address: 0x36c864, Func Offset: 0x94
	// Line 1918, Address: 0x36c888, Func Offset: 0xb8
	// Line 1919, Address: 0x36c894, Func Offset: 0xc4
	// Line 1920, Address: 0x36c8a8, Func Offset: 0xd8
	// Line 1924, Address: 0x36c8b4, Func Offset: 0xe4
	// Line 1925, Address: 0x36c8bc, Func Offset: 0xec
	// Line 1927, Address: 0x36c8c8, Func Offset: 0xf8
	// Line 1931, Address: 0x36c8d4, Func Offset: 0x104
	// Line 1935, Address: 0x36c8ec, Func Offset: 0x11c
	// Line 1938, Address: 0x36c8f0, Func Offset: 0x120
	// Line 1939, Address: 0x36c8f8, Func Offset: 0x128
	// Line 1940, Address: 0x36c8fc, Func Offset: 0x12c
	// Line 1941, Address: 0x36c904, Func Offset: 0x134
	// Line 1942, Address: 0x36c90c, Func Offset: 0x13c
	// Line 1943, Address: 0x36c910, Func Offset: 0x140
	// Line 1944, Address: 0x36c914, Func Offset: 0x144
	// Line 1945, Address: 0x36c91c, Func Offset: 0x14c
	// Line 1946, Address: 0x36c924, Func Offset: 0x154
	// Line 1953, Address: 0x36c928, Func Offset: 0x158
	// Line 1954, Address: 0x36c930, Func Offset: 0x160
	// Func End, Address: 0x36c94c, Func Offset: 0x17c
}

// iSndMgrPlaySoundVolFreq__Fiii
// Start address: 0x36c950
int32 iSndMgrPlaySoundVolFreq(int32 soundID, int32 soundVol, int32 freq)
{
	_iWAV* wav;
	_iSFX* sfx;
	int32 voice;
	// Line 1826, Address: 0x36c950, Func Offset: 0
	// Line 1831, Address: 0x36c974, Func Offset: 0x24
	// Line 1834, Address: 0x36ca1c, Func Offset: 0xcc
	// Line 1837, Address: 0x36ca28, Func Offset: 0xd8
	// Line 1840, Address: 0x36ca34, Func Offset: 0xe4
	// Line 1841, Address: 0x36ca48, Func Offset: 0xf8
	// Line 1842, Address: 0x36ca5c, Func Offset: 0x10c
	// Line 1846, Address: 0x36ca68, Func Offset: 0x118
	// Line 1849, Address: 0x36ca8c, Func Offset: 0x13c
	// Line 1850, Address: 0x36ca98, Func Offset: 0x148
	// Line 1851, Address: 0x36caac, Func Offset: 0x15c
	// Line 1855, Address: 0x36cab8, Func Offset: 0x168
	// Line 1856, Address: 0x36cac0, Func Offset: 0x170
	// Line 1858, Address: 0x36cacc, Func Offset: 0x17c
	// Line 1862, Address: 0x36cad8, Func Offset: 0x188
	// Line 1865, Address: 0x36caf0, Func Offset: 0x1a0
	// Line 1866, Address: 0x36caf4, Func Offset: 0x1a4
	// Line 1867, Address: 0x36cafc, Func Offset: 0x1ac
	// Line 1868, Address: 0x36cb04, Func Offset: 0x1b4
	// Line 1869, Address: 0x36cb0c, Func Offset: 0x1bc
	// Line 1870, Address: 0x36cb10, Func Offset: 0x1c0
	// Line 1871, Address: 0x36cb18, Func Offset: 0x1c8
	// Line 1873, Address: 0x36cb28, Func Offset: 0x1d8
	// Line 1874, Address: 0x36cb2c, Func Offset: 0x1dc
	// Line 1875, Address: 0x36cb34, Func Offset: 0x1e4
	// Line 1878, Address: 0x36cb38, Func Offset: 0x1e8
	// Line 1879, Address: 0x36cb40, Func Offset: 0x1f0
	// Func End, Address: 0x36cb60, Func Offset: 0x210
}

// iSndMgrPlaySoundVol__Fii
// Start address: 0x36cb60
int32 iSndMgrPlaySoundVol(int32 soundID, int32 soundVol)
{
	_iWAV* wav;
	_iSFX* sfx;
	int32 voice;
	// Line 1760, Address: 0x36cb60, Func Offset: 0
	// Line 1765, Address: 0x36cb7c, Func Offset: 0x1c
	// Line 1768, Address: 0x36cc24, Func Offset: 0xc4
	// Line 1771, Address: 0x36cc30, Func Offset: 0xd0
	// Line 1774, Address: 0x36cc3c, Func Offset: 0xdc
	// Line 1775, Address: 0x36cc50, Func Offset: 0xf0
	// Line 1776, Address: 0x36cc64, Func Offset: 0x104
	// Line 1780, Address: 0x36cc70, Func Offset: 0x110
	// Line 1783, Address: 0x36cc94, Func Offset: 0x134
	// Line 1784, Address: 0x36cca0, Func Offset: 0x140
	// Line 1785, Address: 0x36ccb4, Func Offset: 0x154
	// Line 1789, Address: 0x36ccc0, Func Offset: 0x160
	// Line 1790, Address: 0x36ccc8, Func Offset: 0x168
	// Line 1792, Address: 0x36ccd4, Func Offset: 0x174
	// Line 1796, Address: 0x36cce0, Func Offset: 0x180
	// Line 1799, Address: 0x36ccf8, Func Offset: 0x198
	// Line 1800, Address: 0x36ccfc, Func Offset: 0x19c
	// Line 1801, Address: 0x36cd04, Func Offset: 0x1a4
	// Line 1802, Address: 0x36cd0c, Func Offset: 0x1ac
	// Line 1803, Address: 0x36cd14, Func Offset: 0x1b4
	// Line 1804, Address: 0x36cd18, Func Offset: 0x1b8
	// Line 1805, Address: 0x36cd20, Func Offset: 0x1c0
	// Line 1806, Address: 0x36cd28, Func Offset: 0x1c8
	// Line 1808, Address: 0x36cd2c, Func Offset: 0x1cc
	// Line 1809, Address: 0x36cd34, Func Offset: 0x1d4
	// Func End, Address: 0x36cd50, Func Offset: 0x1f0
}

// iSndMgrPlaySound__FP5_iSFX
// Start address: 0x36cd50
int32 iSndMgrPlaySound(_iSFX* sfx)
{
	uint32 voice;
	_iWAV* wav;
	// Line 1683, Address: 0x36cd50, Func Offset: 0
	// Line 1688, Address: 0x36cd60, Func Offset: 0x10
	// Line 1689, Address: 0x36cd70, Func Offset: 0x20
	// Line 1691, Address: 0x36cd7c, Func Offset: 0x2c
	// Line 1694, Address: 0x36ce1c, Func Offset: 0xcc
	// Line 1696, Address: 0x36ce2c, Func Offset: 0xdc
	// Line 1697, Address: 0x36ce3c, Func Offset: 0xec
	// Line 1700, Address: 0x36ce48, Func Offset: 0xf8
	// Line 1701, Address: 0x36ce64, Func Offset: 0x114
	// Line 1702, Address: 0x36ce78, Func Offset: 0x128
	// Line 1706, Address: 0x36ce84, Func Offset: 0x134
	// Line 1707, Address: 0x36ce88, Func Offset: 0x138
	// Line 1710, Address: 0x36ceb0, Func Offset: 0x160
	// Line 1711, Address: 0x36cebc, Func Offset: 0x16c
	// Line 1712, Address: 0x36ced0, Func Offset: 0x180
	// Line 1748, Address: 0x36cedc, Func Offset: 0x18c
	// Line 1751, Address: 0x36cef0, Func Offset: 0x1a0
	// Line 1752, Address: 0x36cefc, Func Offset: 0x1ac
	// Line 1753, Address: 0x36cf18, Func Offset: 0x1c8
	// Line 1756, Address: 0x36cf34, Func Offset: 0x1e4
	// Line 1757, Address: 0x36cf3c, Func Offset: 0x1ec
	// Func End, Address: 0x36cf50, Func Offset: 0x200
}

// iSndMgrLoadSoundBuffer__FPUcUii
// Start address: 0x36cf50
int32 iSndMgrLoadSoundBuffer(uint8* buffer, uint32 soundSize, int32 soundID)
{
	uint32 oldSRAMAddr;
	uint8* dst;
	uint32 soundDataSize;
	_iWAV* wav;
	// Line 1379, Address: 0x36cf50, Func Offset: 0
	// Line 1388, Address: 0x36cf74, Func Offset: 0x24
	// Line 1389, Address: 0x36cf84, Func Offset: 0x34
	// Line 1391, Address: 0x36cf90, Func Offset: 0x40
	// Line 1399, Address: 0x36d030, Func Offset: 0xe0
	// Line 1400, Address: 0x36d054, Func Offset: 0x104
	// Line 1401, Address: 0x36d05c, Func Offset: 0x10c
	// Line 1402, Address: 0x36d064, Func Offset: 0x114
	// Line 1403, Address: 0x36d06c, Func Offset: 0x11c
	// Line 1404, Address: 0x36d070, Func Offset: 0x120
	// Line 1405, Address: 0x36d074, Func Offset: 0x124
	// Line 1406, Address: 0x36d080, Func Offset: 0x130
	// Line 1415, Address: 0x36d088, Func Offset: 0x138
	// Line 1417, Address: 0x36d0a4, Func Offset: 0x154
	// Line 1418, Address: 0x36d0a8, Func Offset: 0x158
	// Line 1423, Address: 0x36d0b4, Func Offset: 0x164
	// Line 1427, Address: 0x36d0c0, Func Offset: 0x170
	// Line 1428, Address: 0x36d164, Func Offset: 0x214
	// Line 1429, Address: 0x36d168, Func Offset: 0x218
	// Func End, Address: 0x36d188, Func Offset: 0x238
}

// iSndMgrFixFreq__Fii
// Start address: 0x36d190
void iSndMgrFixFreq(int32 soundID, int32 newFreq)
{
	_iWAV* wav;
	// Line 1357, Address: 0x36d190, Func Offset: 0
	// Line 1359, Address: 0x36d1b0, Func Offset: 0x20
	// Line 1360, Address: 0x36d1b4, Func Offset: 0x24
	// Line 1362, Address: 0x36d1bc, Func Offset: 0x2c
	// Func End, Address: 0x36d1c4, Func Offset: 0x34
}

// iSndMgrGetSRAMSize__Fv
// Start address: 0x36d1d0
uint32 iSndMgrGetSRAMSize()
{
	// Line 1345, Address: 0x36d1d0, Func Offset: 0
	// Line 1346, Address: 0x36d1d8, Func Offset: 0x8
	// Func End, Address: 0x36d1e0, Func Offset: 0x10
}

// iSndMgrTransferToSRAM__FPUcUiP5_iWAV
// Start address: 0x36d1e0
int32 iSndMgrTransferToSRAM(uint8* buffer, uint32 size, _iWAV* wav)
{
	_iWAV* tmp;
	int32 bank;
	int32 s;
	int32 i;
	uint32 spusize;
	uint32 count;
	// Line 1067, Address: 0x36d1e0, Func Offset: 0
	// Line 1073, Address: 0x36d204, Func Offset: 0x24
	// Line 1076, Address: 0x36d208, Func Offset: 0x28
	// Line 1080, Address: 0x36d248, Func Offset: 0x68
	// Line 1081, Address: 0x36d258, Func Offset: 0x78
	// Line 1082, Address: 0x36d2f0, Func Offset: 0x110
	// Line 1088, Address: 0x36d2f8, Func Offset: 0x118
	// Line 1094, Address: 0x36d310, Func Offset: 0x130
	// Line 1097, Address: 0x36d320, Func Offset: 0x140
	// Line 1104, Address: 0x36d32c, Func Offset: 0x14c
	// Line 1108, Address: 0x36d48c, Func Offset: 0x2ac
	// Line 1110, Address: 0x36d4ac, Func Offset: 0x2cc
	// Line 1111, Address: 0x36d4bc, Func Offset: 0x2dc
	// Line 1114, Address: 0x36d554, Func Offset: 0x374
	// Line 1116, Address: 0x36d558, Func Offset: 0x378
	// Line 1126, Address: 0x36d564, Func Offset: 0x384
	// Line 1129, Address: 0x36d584, Func Offset: 0x3a4
	// Line 1132, Address: 0x36d59c, Func Offset: 0x3bc
	// Line 1133, Address: 0x36d5c4, Func Offset: 0x3e4
	// Line 1136, Address: 0x36d5d0, Func Offset: 0x3f0
	// Line 1137, Address: 0x36d5ec, Func Offset: 0x40c
	// Line 1138, Address: 0x36d608, Func Offset: 0x428
	// Line 1143, Address: 0x36d624, Func Offset: 0x444
	// Line 1145, Address: 0x36d630, Func Offset: 0x450
	// Line 1146, Address: 0x36d658, Func Offset: 0x478
	// Line 1148, Address: 0x36d680, Func Offset: 0x4a0
	// Line 1149, Address: 0x36d68c, Func Offset: 0x4ac
	// Line 1150, Address: 0x36d6b8, Func Offset: 0x4d8
	// Line 1159, Address: 0x36d6cc, Func Offset: 0x4ec
	// Line 1163, Address: 0x36d6d4, Func Offset: 0x4f4
	// Line 1166, Address: 0x36d6dc, Func Offset: 0x4fc
	// Line 1168, Address: 0x36d714, Func Offset: 0x534
	// Line 1169, Address: 0x36d728, Func Offset: 0x548
	// Line 1170, Address: 0x36d72c, Func Offset: 0x54c
	// Line 1175, Address: 0x36d738, Func Offset: 0x558
	// Line 1179, Address: 0x36d760, Func Offset: 0x580
	// Line 1180, Address: 0x36d77c, Func Offset: 0x59c
	// Line 1182, Address: 0x36d780, Func Offset: 0x5a0
	// Line 1183, Address: 0x36d794, Func Offset: 0x5b4
	// Line 1185, Address: 0x36d79c, Func Offset: 0x5bc
	// Line 1186, Address: 0x36d7c4, Func Offset: 0x5e4
	// Line 1187, Address: 0x36d7cc, Func Offset: 0x5ec
	// Line 1189, Address: 0x36d7d8, Func Offset: 0x5f8
	// Line 1191, Address: 0x36d7e4, Func Offset: 0x604
	// Line 1193, Address: 0x36d80c, Func Offset: 0x62c
	// Line 1194, Address: 0x36d83c, Func Offset: 0x65c
	// Line 1195, Address: 0x36d840, Func Offset: 0x660
	// Line 1196, Address: 0x36d854, Func Offset: 0x674
	// Line 1204, Address: 0x36d860, Func Offset: 0x680
	// Line 1210, Address: 0x36d878, Func Offset: 0x698
	// Line 1213, Address: 0x36d888, Func Offset: 0x6a8
	// Line 1221, Address: 0x36d894, Func Offset: 0x6b4
	// Line 1225, Address: 0x36d9f4, Func Offset: 0x814
	// Line 1227, Address: 0x36da14, Func Offset: 0x834
	// Line 1228, Address: 0x36da24, Func Offset: 0x844
	// Line 1232, Address: 0x36dabc, Func Offset: 0x8dc
	// Line 1234, Address: 0x36dac0, Func Offset: 0x8e0
	// Line 1244, Address: 0x36dacc, Func Offset: 0x8ec
	// Line 1255, Address: 0x36daec, Func Offset: 0x90c
	// Line 1259, Address: 0x36daf4, Func Offset: 0x914
	// Line 1261, Address: 0x36db2c, Func Offset: 0x94c
	// Line 1263, Address: 0x36db6c, Func Offset: 0x98c
	// Line 1264, Address: 0x36db70, Func Offset: 0x990
	// Line 1268, Address: 0x36db7c, Func Offset: 0x99c
	// Line 1274, Address: 0x36db94, Func Offset: 0x9b4
	// Line 1277, Address: 0x36dba4, Func Offset: 0x9c4
	// Line 1284, Address: 0x36dbb0, Func Offset: 0x9d0
	// Line 1288, Address: 0x36dd10, Func Offset: 0xb30
	// Line 1290, Address: 0x36dd30, Func Offset: 0xb50
	// Line 1291, Address: 0x36dd40, Func Offset: 0xb60
	// Line 1295, Address: 0x36ddd8, Func Offset: 0xbf8
	// Line 1297, Address: 0x36dddc, Func Offset: 0xbfc
	// Line 1307, Address: 0x36dde8, Func Offset: 0xc08
	// Line 1310, Address: 0x36de08, Func Offset: 0xc28
	// Line 1313, Address: 0x36de20, Func Offset: 0xc40
	// Line 1323, Address: 0x36de48, Func Offset: 0xc68
	// Line 1326, Address: 0x36de50, Func Offset: 0xc70
	// Line 1327, Address: 0x36de68, Func Offset: 0xc88
	// Line 1331, Address: 0x36df00, Func Offset: 0xd20
	// Line 1332, Address: 0x36df04, Func Offset: 0xd24
	// Func End, Address: 0x36df24, Func Offset: 0xd44
}

// iSndMgrBankMakeRoom__FiPUiUi
// Start address: 0x36df30
int32 iSndMgrBankMakeRoom(int32 bank, uint32* addr, uint32 size)
{
	uint32 delta;
	int32 s;
	_iWAV* oldprev;
	_iWAV* old;
	_iWAV* prev;
	_iWAV* idx;
	// Line 877, Address: 0x36df30, Func Offset: 0
	// Line 888, Address: 0x36df60, Func Offset: 0x30
	// Line 891, Address: 0x36df78, Func Offset: 0x48
	// Line 893, Address: 0x36df80, Func Offset: 0x50
	// Line 894, Address: 0x36df98, Func Offset: 0x68
	// Line 907, Address: 0x36dfa4, Func Offset: 0x74
	// Line 909, Address: 0x36dfac, Func Offset: 0x7c
	// Line 910, Address: 0x36e058, Func Offset: 0x128
	// Line 912, Address: 0x36e110, Func Offset: 0x1e0
	// Line 914, Address: 0x36e124, Func Offset: 0x1f4
	// Line 920, Address: 0x36e130, Func Offset: 0x200
	// Line 921, Address: 0x36e140, Func Offset: 0x210
	// Line 924, Address: 0x36e14c, Func Offset: 0x21c
	// Line 925, Address: 0x36e150, Func Offset: 0x220
	// Line 926, Address: 0x36e1f8, Func Offset: 0x2c8
	// Line 927, Address: 0x36e200, Func Offset: 0x2d0
	// Line 929, Address: 0x36e208, Func Offset: 0x2d8
	// Line 936, Address: 0x36e238, Func Offset: 0x308
	// Line 937, Address: 0x36e248, Func Offset: 0x318
	// Line 945, Address: 0x36e254, Func Offset: 0x324
	// Line 946, Address: 0x36e274, Func Offset: 0x344
	// Line 949, Address: 0x36e27c, Func Offset: 0x34c
	// Line 951, Address: 0x36e290, Func Offset: 0x360
	// Line 952, Address: 0x36e294, Func Offset: 0x364
	// Line 955, Address: 0x36e298, Func Offset: 0x368
	// Line 956, Address: 0x36e29c, Func Offset: 0x36c
	// Line 957, Address: 0x36e2a4, Func Offset: 0x374
	// Line 965, Address: 0x36e2b0, Func Offset: 0x380
	// Line 967, Address: 0x36e2bc, Func Offset: 0x38c
	// Line 969, Address: 0x36e2e4, Func Offset: 0x3b4
	// Line 975, Address: 0x36e30c, Func Offset: 0x3dc
	// Line 978, Address: 0x36e318, Func Offset: 0x3e8
	// Line 986, Address: 0x36e32c, Func Offset: 0x3fc
	// Line 988, Address: 0x36e330, Func Offset: 0x400
	// Line 990, Address: 0x36e338, Func Offset: 0x408
	// Line 996, Address: 0x36e3ec, Func Offset: 0x4bc
	// Line 998, Address: 0x36e404, Func Offset: 0x4d4
	// Line 999, Address: 0x36e41c, Func Offset: 0x4ec
	// Line 1002, Address: 0x36e424, Func Offset: 0x4f4
	// Line 1004, Address: 0x36e4c8, Func Offset: 0x598
	// Line 1005, Address: 0x36e4d0, Func Offset: 0x5a0
	// Line 1017, Address: 0x36e4e0, Func Offset: 0x5b0
	// Line 1019, Address: 0x36e520, Func Offset: 0x5f0
	// Line 1022, Address: 0x36e524, Func Offset: 0x5f4
	// Line 1038, Address: 0x36e528, Func Offset: 0x5f8
	// Line 1040, Address: 0x36e530, Func Offset: 0x600
	// Func End, Address: 0x36e55c, Func Offset: 0x62c
}

// iSndMgrUnpause__Fv
// Start address: 0x36e560
void iSndMgrUnpause()
{
	// Line 846, Address: 0x36e560, Func Offset: 0
	// Line 847, Address: 0x36e56c, Func Offset: 0xc
	// Line 849, Address: 0x36e57c, Func Offset: 0x1c
	// Line 852, Address: 0x36e58c, Func Offset: 0x2c
	// Line 853, Address: 0x36e594, Func Offset: 0x34
	// Line 854, Address: 0x36e60c, Func Offset: 0xac
	// Line 855, Address: 0x36e614, Func Offset: 0xb4
	// Func End, Address: 0x36e628, Func Offset: 0xc8
}

// iSndMgrPause__Fv
// Start address: 0x36e630
void iSndMgrPause()
{
	// Line 826, Address: 0x36e630, Func Offset: 0
	// Line 827, Address: 0x36e63c, Func Offset: 0xc
	// Line 829, Address: 0x36e64c, Func Offset: 0x1c
	// Line 832, Address: 0x36e65c, Func Offset: 0x2c
	// Line 833, Address: 0x36e6bc, Func Offset: 0x8c
	// Line 834, Address: 0x36e6c4, Func Offset: 0x94
	// Line 835, Address: 0x36e6d0, Func Offset: 0xa0
	// Func End, Address: 0x36e6e4, Func Offset: 0xb4
}

// p2SndMgrUpdateVoice__FiiP5_iSFX
// Start address: 0x36e6f0
void p2SndMgrUpdateVoice(int32 status, _iSFX* sp)
{
	int32 voice;
	// Line 710, Address: 0x36e6f0, Func Offset: 0
	// Line 723, Address: 0x36e700, Func Offset: 0x10
	// Line 727, Address: 0x36e708, Func Offset: 0x18
	// Line 730, Address: 0x36e734, Func Offset: 0x44
	// Line 733, Address: 0x36e740, Func Offset: 0x50
	// Line 736, Address: 0x36e748, Func Offset: 0x58
	// Line 741, Address: 0x36e754, Func Offset: 0x64
	// Line 745, Address: 0x36e75c, Func Offset: 0x6c
	// Line 747, Address: 0x36e768, Func Offset: 0x78
	// Line 748, Address: 0x36e774, Func Offset: 0x84
	// Line 750, Address: 0x36e818, Func Offset: 0x128
	// Line 753, Address: 0x36e8ac, Func Offset: 0x1bc
	// Line 759, Address: 0x36e8bc, Func Offset: 0x1cc
	// Line 762, Address: 0x36e918, Func Offset: 0x228
	// Line 764, Address: 0x36e928, Func Offset: 0x238
	// Line 765, Address: 0x36e934, Func Offset: 0x244
	// Line 770, Address: 0x36e948, Func Offset: 0x258
	// Line 773, Address: 0x36e950, Func Offset: 0x260
	// Line 776, Address: 0x36e95c, Func Offset: 0x26c
	// Line 778, Address: 0x36e970, Func Offset: 0x280
	// Line 779, Address: 0x36ea04, Func Offset: 0x314
	// Line 782, Address: 0x36ea0c, Func Offset: 0x31c
	// Line 783, Address: 0x36ea20, Func Offset: 0x330
	// Line 786, Address: 0x36ea2c, Func Offset: 0x33c
	// Line 789, Address: 0x36ea4c, Func Offset: 0x35c
	// Line 793, Address: 0x36ea58, Func Offset: 0x368
	// Line 794, Address: 0x36ea74, Func Offset: 0x384
	// Line 795, Address: 0x36ea98, Func Offset: 0x3a8
	// Line 796, Address: 0x36eaa0, Func Offset: 0x3b0
	// Line 798, Address: 0x36eab4, Func Offset: 0x3c4
	// Line 800, Address: 0x36eac0, Func Offset: 0x3d0
	// Line 804, Address: 0x36eae4, Func Offset: 0x3f4
	// Line 806, Address: 0x36eaf4, Func Offset: 0x404
	// Line 809, Address: 0x36eb94, Func Offset: 0x4a4
	// Line 815, Address: 0x36ebb0, Func Offset: 0x4c0
	// Func End, Address: 0x36ebc4, Func Offset: 0x4d4
}

// p2SndMgrCalcVol__FP5_iSFX
// Start address: 0x36ebd0
void p2SndMgrCalcVol(_iSFX* sp)
{
	int32 vol_right;
	int32 vol_left;
	float32 lrad2;
	float32 rad2;
	float32 distance;
	float32 vol;
	// Line 523, Address: 0x36ebd0, Func Offset: 0
	// Line 530, Address: 0x36ebf0, Func Offset: 0x20
	// Line 531, Address: 0x36ebf4, Func Offset: 0x24
	// Line 533, Address: 0x36ebf8, Func Offset: 0x28
	// Line 537, Address: 0x36ec08, Func Offset: 0x38
	// Line 538, Address: 0x36ec18, Func Offset: 0x48
	// Line 539, Address: 0x36ec1c, Func Offset: 0x4c
	// Line 542, Address: 0x36ec2c, Func Offset: 0x5c
	// Line 543, Address: 0x36ec48, Func Offset: 0x78
	// Line 544, Address: 0x36ec4c, Func Offset: 0x7c
	// Line 547, Address: 0x36ec54, Func Offset: 0x84
	// Line 551, Address: 0x36ec64, Func Offset: 0x94
	// Line 555, Address: 0x36ec74, Func Offset: 0xa4
	// Line 556, Address: 0x36ecc8, Func Offset: 0xf8
	// Line 559, Address: 0x36ecd0, Func Offset: 0x100
	// Line 561, Address: 0x36ecd4, Func Offset: 0x104
	// Line 564, Address: 0x36ecdc, Func Offset: 0x10c
	// Line 566, Address: 0x36ed8c, Func Offset: 0x1bc
	// Line 568, Address: 0x36ed9c, Func Offset: 0x1cc
	// Line 569, Address: 0x36eda0, Func Offset: 0x1d0
	// Line 572, Address: 0x36eda8, Func Offset: 0x1d8
	// Line 582, Address: 0x36edf0, Func Offset: 0x220
	// Line 584, Address: 0x36ee00, Func Offset: 0x230
	// Line 585, Address: 0x36ee10, Func Offset: 0x240
	// Line 586, Address: 0x36ee20, Func Offset: 0x250
	// Line 589, Address: 0x36ee28, Func Offset: 0x258
	// Line 590, Address: 0x36ee38, Func Offset: 0x268
	// Line 595, Address: 0x36ee48, Func Offset: 0x278
	// Line 597, Address: 0x36ee5c, Func Offset: 0x28c
	// Line 598, Address: 0x36eed4, Func Offset: 0x304
	// Line 601, Address: 0x36ef4c, Func Offset: 0x37c
	// Line 602, Address: 0x36ef50, Func Offset: 0x380
	// Line 604, Address: 0x36ef54, Func Offset: 0x384
	// Func End, Address: 0x36ef78, Func Offset: 0x3a8
}

// iSndMgrIdle__FUl
// Start address: 0x36ef80
void iSndMgrIdle()
{
	_iSFX* sp;
	uint32 i;
	// Line 490, Address: 0x36ef80, Func Offset: 0
	// Line 495, Address: 0x36ef90, Func Offset: 0x10
	// Line 503, Address: 0x36efa0, Func Offset: 0x20
	// Line 505, Address: 0x36efb4, Func Offset: 0x34
	// Line 507, Address: 0x36efc4, Func Offset: 0x44
	// Line 508, Address: 0x36efd0, Func Offset: 0x50
	// Line 509, Address: 0x36efd8, Func Offset: 0x58
	// Line 511, Address: 0x36efe8, Func Offset: 0x68
	// Line 513, Address: 0x36f0a8, Func Offset: 0x128
	// Line 516, Address: 0x36f0c8, Func Offset: 0x148
	// Line 517, Address: 0x36f0dc, Func Offset: 0x15c
	// Line 518, Address: 0x36f0e4, Func Offset: 0x164
	// Func End, Address: 0x36f0fc, Func Offset: 0x17c
}

// iSndMgrDebugMode__Fi
// Start address: 0x36f100
void iSndMgrDebugMode()
{
	// Line 475, Address: 0x36f100, Func Offset: 0
	// Func End, Address: 0x36f108, Func Offset: 0x8
}

// iSndMgrFreeAll__Fv
// Start address: 0x36f110
void iSndMgrFreeAll()
{
	int32 s;
	int32 i;
	// Line 426, Address: 0x36f110, Func Offset: 0
	// Line 429, Address: 0x36f120, Func Offset: 0x10
	// Line 433, Address: 0x36f130, Func Offset: 0x20
	// Line 436, Address: 0x36f13c, Func Offset: 0x2c
	// Line 439, Address: 0x36f16c, Func Offset: 0x5c
	// Line 441, Address: 0x36f198, Func Offset: 0x88
	// Line 445, Address: 0x36f1c8, Func Offset: 0xb8
	// Line 448, Address: 0x36f1ec, Func Offset: 0xdc
	// Line 450, Address: 0x36f210, Func Offset: 0x100
	// Line 452, Address: 0x36f224, Func Offset: 0x114
	// Line 454, Address: 0x36f230, Func Offset: 0x120
	// Line 456, Address: 0x36f258, Func Offset: 0x148
	// Line 457, Address: 0x36f418, Func Offset: 0x308
	// Line 458, Address: 0x36f524, Func Offset: 0x414
	// Line 459, Address: 0x36f528, Func Offset: 0x418
	// Line 463, Address: 0x36f53c, Func Offset: 0x42c
	// Line 465, Address: 0x36f548, Func Offset: 0x438
	// Line 466, Address: 0x36f564, Func Offset: 0x454
	// Line 467, Address: 0x36f580, Func Offset: 0x470
	// Line 468, Address: 0x36f59c, Func Offset: 0x48c
	// Line 470, Address: 0x36f5ac, Func Offset: 0x49c
	// Func End, Address: 0x36f5c4, Func Offset: 0x4b4
}

// iSndMgrLevelReset__Fv
// Start address: 0x36f5d0
void iSndMgrLevelReset()
{
	int32 s;
	int32 i;
	// Line 355, Address: 0x36f5d0, Func Offset: 0
	// Line 358, Address: 0x36f5e0, Func Offset: 0x10
	// Line 362, Address: 0x36f5f0, Func Offset: 0x20
	// Line 365, Address: 0x36f5fc, Func Offset: 0x2c
	// Line 368, Address: 0x36f62c, Func Offset: 0x5c
	// Line 376, Address: 0x36f658, Func Offset: 0x88
	// Line 378, Address: 0x36f664, Func Offset: 0x94
	// Line 380, Address: 0x36f688, Func Offset: 0xb8
	// Line 381, Address: 0x36f6b8, Func Offset: 0xe8
	// Line 382, Address: 0x36f878, Func Offset: 0x2a8
	// Line 383, Address: 0x36f984, Func Offset: 0x3b4
	// Line 385, Address: 0x36f988, Func Offset: 0x3b8
	// Line 386, Address: 0x36f99c, Func Offset: 0x3cc
	// Line 389, Address: 0x36fa68, Func Offset: 0x498
	// Line 400, Address: 0x36fa94, Func Offset: 0x4c4
	// Line 403, Address: 0x36fab8, Func Offset: 0x4e8
	// Line 405, Address: 0x36fadc, Func Offset: 0x50c
	// Line 406, Address: 0x36fae0, Func Offset: 0x510
	// Line 409, Address: 0x36faf4, Func Offset: 0x524
	// Line 411, Address: 0x36fb00, Func Offset: 0x530
	// Line 412, Address: 0x36fb1c, Func Offset: 0x54c
	// Line 413, Address: 0x36fb38, Func Offset: 0x568
	// Line 414, Address: 0x36fb54, Func Offset: 0x584
	// Line 416, Address: 0x36fb64, Func Offset: 0x594
	// Func End, Address: 0x36fb7c, Func Offset: 0x5ac
}

// iSndMgrSetLevelReset__Fv
// Start address: 0x36fb80
void iSndMgrSetLevelReset()
{
	int32 i;
	// Line 319, Address: 0x36fb80, Func Offset: 0
	// Line 322, Address: 0x36fb88, Func Offset: 0x8
	// Line 327, Address: 0x36fb98, Func Offset: 0x18
	// Line 330, Address: 0x36fba4, Func Offset: 0x24
	// Line 335, Address: 0x36fbd4, Func Offset: 0x54
	// Line 336, Address: 0x36fbfc, Func Offset: 0x7c
	// Line 338, Address: 0x36fc04, Func Offset: 0x84
	// Line 339, Address: 0x36fc28, Func Offset: 0xa8
	// Line 343, Address: 0x36fc3c, Func Offset: 0xbc
	// Func End, Address: 0x36fc4c, Func Offset: 0xcc
}

// iSndMgrDispose__Fv
// Start address: 0x36fc50
void iSndMgrDispose()
{
	AudioStream_s* next;
	AudioStream_s* cur;
	// Line 186, Address: 0x36fc50, Func Offset: 0
	// Line 189, Address: 0x36fc5c, Func Offset: 0xc
	// Line 190, Address: 0x36fc64, Func Offset: 0x14
	// Line 193, Address: 0x36fc6c, Func Offset: 0x1c
	// Line 195, Address: 0x36fc78, Func Offset: 0x28
	// Line 196, Address: 0x36fc7c, Func Offset: 0x2c
	// Line 197, Address: 0x36fc84, Func Offset: 0x34
	// Line 199, Address: 0x36fc98, Func Offset: 0x48
	// Line 200, Address: 0x36fc9c, Func Offset: 0x4c
	// Line 202, Address: 0x36fca0, Func Offset: 0x50
	// Line 203, Address: 0x36fca8, Func Offset: 0x58
	// Func End, Address: 0x36fcbc, Func Offset: 0x6c
}

// iSndMgrInit__Fv
// Start address: 0x36fcc0
void iSndMgrInit()
{
	uint32 i;
	uint32 driverSize;
	uint32* driverImage;
	// Line 144, Address: 0x36fcc0, Func Offset: 0
	// Line 155, Address: 0x36fcc8, Func Offset: 0x8
	// Line 159, Address: 0x36fccc, Func Offset: 0xc
	// Line 160, Address: 0x36fcd8, Func Offset: 0x18
	// Line 161, Address: 0x36fcec, Func Offset: 0x2c
	// Line 162, Address: 0x36fd00, Func Offset: 0x40
	// Line 163, Address: 0x36fd14, Func Offset: 0x54
	// Line 164, Address: 0x36fd28, Func Offset: 0x68
	// Line 166, Address: 0x36fd3c, Func Offset: 0x7c
	// Line 170, Address: 0x36fd4c, Func Offset: 0x8c
	// Line 172, Address: 0x36fd58, Func Offset: 0x98
	// Line 173, Address: 0x36fd68, Func Offset: 0xa8
	// Func End, Address: 0x36fd78, Func Offset: 0xb8
}

