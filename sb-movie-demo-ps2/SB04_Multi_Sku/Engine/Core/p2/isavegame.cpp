



uint8 iSGCheckMemoryCard(int32 index);
uint8 iSGCheckForGameFiles(int32 mcPort);
uint8 iSGIsGameCorrupt(st_ISGSESSION* sess);
void iSGIconInit(void* iconData, uint32 size);
void iSGMakeTimeStamp(int8* str);
int32 iSG_is_MCOP_realerr(int32 mcop, int32 que_rc);
int32 iSG_is_synccode_realerr(int32 mcop, int32 mcopret);
en_ISGMCA_STATUS iSG_mcasync_chkop(st_ISG_MEMCARD_DATA* mcdata, int32 block, int32* sync_resval);
int32 iSG_mca_fwrite(st_ISG_MEMCARD_DATA* mcdata, int8* data, int32 n);
int32 iSG_mca_fopen(st_ISG_MEMCARD_DATA* mcdata, int8* fname, en_ISG_IOMODE mode);
int32 iSG_mca_unfmt(st_ISG_MEMCARD_DATA* mcdata);
int32 iSG_mca_fmt(st_ISG_MEMCARD_DATA* mcdata, int32 force);
int32 iSG_get_fmoddate(st_ISG_MEMCARD_DATA* mcdata, int8* fname, int32* sec, int32* min, int32* hr, int32* mon, int32* day, int32* yr);
int32 iSG_get_finfo(st_ISG_MEMCARD_DATA* mcdata, int8* fname, int8* path);
int32 iSG_isSpaceForFile_Startup(st_ISG_MEMCARD_DATA* mcdata, int32 mcidx, int8* dpath, int32* bytesNeeded, int32* availOnDisk);
int32 iSG_isSpaceForFile(st_ISG_MEMCARD_DATA* mcdata, int32 mcidx, int32 fsize, int8* dpath, int8* fname, int32* bytesNeeded, int32* availOnDisk);
int32 iSG_mc_availDirEnt(st_ISG_MEMCARD_DATA* mcdata, int32 mcidx, int8* dpath);
int32 iSG_mc_availclust(st_ISG_MEMCARD_DATA* mcdata, int32 mcidx);
int32 iSG_mc_isPSIIcard(st_ISG_MEMCARD_DATA* mcdata, int32 mcidx);
int32 iSG_mc_isformatted(st_ISG_MEMCARD_DATA* mcdata, int32 mcidx);
int32 iSG_mc_exists(st_ISG_MEMCARD_DATA* mcdata, int32 mcidx);
int32 iSG_mcidx_portslot(int32 mcidx, int32* port, int32* slot, int32* concnt);
void SQUIB_init_st_iconsys(sceMcIconSys* icsys);
int32 iSG_add_sysicons(st_ISG_MEMCARD_DATA* mcdata);
int32 iSG_add_cfgholder(st_ISG_MEMCARD_DATA* mcdata);
int32 iSG_start_your_engines();
int32 iSGAutoSave_Monitor(st_ISGSESSION* isg, int32 idx_target);
void iSGAutoSave_Disconnect(st_ISGSESSION* isg);
st_ISGSESSION* iSGAutoSave_Connect(int32 idx_target, void* cltdata, void(*chg)(void*, en_CHGCODE));
void iSGAutoSave_Startup();
en_ASYNC_OPERR iSGOpError(st_ISGSESSION* isgdata, int8* errmsg);
en_ASYNC_OPSTAT iSGPollStatus(st_ISGSESSION* isgdata, en_ASYNC_OPCODE* curop, int32 block);
int32 iSGReadLeader(st_ISGSESSION* isgdata, int8* fname, int8* databuf, int32 numbytes, int32 async);
int32 iSGLoadFile(st_ISGSESSION* isgdata, int8* fname, int8* databuf, int32 async);
int32 iSGSaveFile(st_ISGSESSION* isgdata, int8* fname, int8* data, int32 n, int32 async);
int32 iSGSetupGameDir(st_ISGSESSION* isgdata, int8* dname, int32 force_iconfix);
int32 iSGSelectGameDir(st_ISGSESSION* isgdata, int8* dname);
int8* iSGFileModDate(st_ISGSESSION* isgdata, int8* fname, int32* sec, int32* min, int32* hr, int32* mon, int32* day, int32* yr);
int8* iSGFileModDate(st_ISGSESSION* isgdata, int8* fname);
int32 iSGFileSize(st_ISGSESSION* isgdata, int8* fname);
uint8 iSGGameExists(st_ISGSESSION* isgdata, int8* fname);
int32 iSGTgtHaveRoomStartup(st_ISGSESSION* isgdata, int32 tidx, int32 fsize, int8* dpath, int8* fname, int32* bytesNeeded, int32* availOnDisk);
int32 iSGTgtHaveRoom(st_ISGSESSION* isgdata, int32 tidx, int32 fsize, int8* dpath, int8* fname, int32* bytesNeeded, int32* availOnDisk);
int32 iSGTgtSetActive(st_ISGSESSION* isgdata, int32 tgtidx);
uint32 iSGTgtState(st_ISGSESSION* isgdata, int32 tgtidx, int8* dpath);
int32 iSGTgtFormat(st_ISGSESSION* isgdata, int32 tgtidx, int32 async);
int32 iSGTgtPhysSlotIdx();
int32 iSGTgtCount(int32* max);
void iSGSessionEnd(st_ISGSESSION* isgdata);
st_ISGSESSION* iSGSessionBegin(void* cltdata, void(*chgfunc)(void*, en_CHGCODE), int32 monitor);
int8* iSGMakeName(en_NAMEGEN_TYPE type, int8* base, int32 idx);
int32 iSGShutdown();
int32 iSGStartup();

// iSGCheckMemoryCard__FP13st_ISGSESSIONi
// Start address: 0x4a2820
uint8 iSGCheckMemoryCard(int32 index)
{
	int32 result;
	// Line 5552, Address: 0x4a2820, Func Offset: 0
	// Line 5554, Address: 0x4a2824, Func Offset: 0x4
	// Line 5552, Address: 0x4a2828, Func Offset: 0x8
	// Line 5554, Address: 0x4a282c, Func Offset: 0xc
	// Line 5555, Address: 0x4a2844, Func Offset: 0x24
	// Line 5559, Address: 0x4a2854, Func Offset: 0x34
	// Line 5563, Address: 0x4a2858, Func Offset: 0x38
	// Line 5559, Address: 0x4a285c, Func Offset: 0x3c
	// Line 5563, Address: 0x4a2864, Func Offset: 0x44
	// Func End, Address: 0x4a286c, Func Offset: 0x4c
}

// iSGCheckForGameFiles__Fi
// Start address: 0x4a2870
uint8 iSGCheckForGameFiles(int32 mcPort)
{
	int8 fileNames[25][3];
	int8 gameDir[26];
	int32 resultCode;
	int32 i;
	// Line 5502, Address: 0x4a2870, Func Offset: 0
	// Line 5507, Address: 0x4a2874, Func Offset: 0x4
	// Line 5502, Address: 0x4a2878, Func Offset: 0x8
	// Line 5507, Address: 0x4a287c, Func Offset: 0xc
	// Line 5502, Address: 0x4a2880, Func Offset: 0x10
	// Line 5507, Address: 0x4a2884, Func Offset: 0x14
	// Line 5502, Address: 0x4a2888, Func Offset: 0x18
	// Line 5507, Address: 0x4a2894, Func Offset: 0x24
	// Line 5516, Address: 0x4a28b8, Func Offset: 0x48
	// Line 5520, Address: 0x4a28e8, Func Offset: 0x78
	// Line 5521, Address: 0x4a28fc, Func Offset: 0x8c
	// Line 5524, Address: 0x4a290c, Func Offset: 0x9c
	// Line 5549, Address: 0x4a2918, Func Offset: 0xa8
	// Line 5516, Address: 0x4a2920, Func Offset: 0xb0
	// Line 5549, Address: 0x4a2928, Func Offset: 0xb8
	// Line 5516, Address: 0x4a2930, Func Offset: 0xc0
	// Line 5549, Address: 0x4a2934, Func Offset: 0xc4
	// Line 5516, Address: 0x4a293c, Func Offset: 0xcc
	// Line 5549, Address: 0x4a2940, Func Offset: 0xd0
	// Line 5516, Address: 0x4a2948, Func Offset: 0xd8
	// Line 5549, Address: 0x4a294c, Func Offset: 0xdc
	// Line 5516, Address: 0x4a2954, Func Offset: 0xe4
	// Line 5549, Address: 0x4a2958, Func Offset: 0xe8
	// Line 5516, Address: 0x4a2960, Func Offset: 0xf0
	// Line 5549, Address: 0x4a2964, Func Offset: 0xf4
	// Line 5516, Address: 0x4a2974, Func Offset: 0x104
	// Line 5549, Address: 0x4a29a4, Func Offset: 0x134
	// Line 5531, Address: 0x4a29a8, Func Offset: 0x138
	// Line 5549, Address: 0x4a29b4, Func Offset: 0x144
	// Line 5532, Address: 0x4a29bc, Func Offset: 0x14c
	// Line 5549, Address: 0x4a29c4, Func Offset: 0x154
	// Line 5539, Address: 0x4a29e0, Func Offset: 0x170
	// Line 5549, Address: 0x4a29e8, Func Offset: 0x178
	// Line 5542, Address: 0x4a29f0, Func Offset: 0x180
	// Line 5549, Address: 0x4a29f8, Func Offset: 0x188
	// Line 5550, Address: 0x4a2a10, Func Offset: 0x1a0
	// Func End, Address: 0x4a2a28, Func Offset: 0x1b8
}

// iSGIsGameCorrupt__FP13st_ISGSESSIONi
// Start address: 0x4a2a30
uint8 iSGIsGameCorrupt(st_ISGSESSION* sess)
{
	int8 fileNames[25][3];
	int8 gameDir[26];
	int32 resultCode;
	int32 i;
	// Line 5448, Address: 0x4a2a30, Func Offset: 0
	// Line 5453, Address: 0x4a2a34, Func Offset: 0x4
	// Line 5448, Address: 0x4a2a38, Func Offset: 0x8
	// Line 5453, Address: 0x4a2a3c, Func Offset: 0xc
	// Line 5448, Address: 0x4a2a40, Func Offset: 0x10
	// Line 5453, Address: 0x4a2a44, Func Offset: 0x14
	// Line 5448, Address: 0x4a2a48, Func Offset: 0x18
	// Line 5453, Address: 0x4a2a54, Func Offset: 0x24
	// Line 5460, Address: 0x4a2a78, Func Offset: 0x48
	// Line 5461, Address: 0x4a2a90, Func Offset: 0x60
	// Line 5465, Address: 0x4a2aac, Func Offset: 0x7c
	// Line 5469, Address: 0x4a2acc, Func Offset: 0x9c
	// Line 5470, Address: 0x4a2ae0, Func Offset: 0xb0
	// Line 5473, Address: 0x4a2af0, Func Offset: 0xc0
	// Line 5498, Address: 0x4a2afc, Func Offset: 0xcc
	// Line 5460, Address: 0x4a2b04, Func Offset: 0xd4
	// Line 5498, Address: 0x4a2b0c, Func Offset: 0xdc
	// Line 5460, Address: 0x4a2b14, Func Offset: 0xe4
	// Line 5498, Address: 0x4a2b18, Func Offset: 0xe8
	// Line 5460, Address: 0x4a2b20, Func Offset: 0xf0
	// Line 5498, Address: 0x4a2b24, Func Offset: 0xf4
	// Line 5460, Address: 0x4a2b2c, Func Offset: 0xfc
	// Line 5498, Address: 0x4a2b30, Func Offset: 0x100
	// Line 5460, Address: 0x4a2b38, Func Offset: 0x108
	// Line 5498, Address: 0x4a2b3c, Func Offset: 0x10c
	// Line 5460, Address: 0x4a2b44, Func Offset: 0x114
	// Line 5498, Address: 0x4a2b48, Func Offset: 0x118
	// Line 5460, Address: 0x4a2b58, Func Offset: 0x128
	// Line 5498, Address: 0x4a2b88, Func Offset: 0x158
	// Line 5480, Address: 0x4a2b90, Func Offset: 0x160
	// Line 5498, Address: 0x4a2b94, Func Offset: 0x164
	// Line 5481, Address: 0x4a2ba4, Func Offset: 0x174
	// Line 5498, Address: 0x4a2bac, Func Offset: 0x17c
	// Line 5488, Address: 0x4a2bc8, Func Offset: 0x198
	// Line 5498, Address: 0x4a2bd0, Func Offset: 0x1a0
	// Line 5491, Address: 0x4a2bd8, Func Offset: 0x1a8
	// Line 5498, Address: 0x4a2be0, Func Offset: 0x1b0
	// Line 5499, Address: 0x4a2bf8, Func Offset: 0x1c8
	// Func End, Address: 0x4a2c10, Func Offset: 0x1e0
}

// iSGIconInit__FPvUi
// Start address: 0x4a2c10
void iSGIconInit(void* iconData, uint32 size)
{
	// Line 5440, Address: 0x4a2c10, Func Offset: 0
	// Line 5444, Address: 0x4a2c14, Func Offset: 0x4
	// Func End, Address: 0x4a2c1c, Func Offset: 0xc
}

// iSGMakeTimeStamp__FPc
// Start address: 0x4a2c20
void iSGMakeTimeStamp(int8* str)
{
	// Line 5428, Address: 0x4a2c20, Func Offset: 0
	// Func End, Address: 0x4a2c28, Func Offset: 0x8
}

// iSG_is_MCOP_realerr__Fii
// Start address: 0x4a2c30
int32 iSG_is_MCOP_realerr(int32 mcop, int32 que_rc)
{
	int32 is_ok;
	// Line 4456, Address: 0x4a2c30, Func Offset: 0
	// Line 4478, Address: 0x4a2c58, Func Offset: 0x28
	// Line 4487, Address: 0x4a2c60, Func Offset: 0x30
	// Line 4500, Address: 0x4a2c68, Func Offset: 0x38
	// Line 4505, Address: 0x4a2c6c, Func Offset: 0x3c
	// Func End, Address: 0x4a2c74, Func Offset: 0x44
}

// iSG_is_synccode_realerr__FiiP19st_ISG_MEMCARD_DATA
// Start address: 0x4a2c80
int32 iSG_is_synccode_realerr(int32 mcop, int32 mcopret)
{
	int32 is_ok;
	// Line 4068, Address: 0x4a2c80, Func Offset: 0
	// Line 4442, Address: 0x4a2c88, Func Offset: 0x8
	// Line 4100, Address: 0x4a2ca4, Func Offset: 0x24
	// Line 4442, Address: 0x4a2ca8, Func Offset: 0x28
	// Line 4131, Address: 0x4a2cb0, Func Offset: 0x30
	// Line 4442, Address: 0x4a2cb4, Func Offset: 0x34
	// Line 4158, Address: 0x4a2cbc, Func Offset: 0x3c
	// Line 4442, Address: 0x4a2cc0, Func Offset: 0x40
	// Line 4176, Address: 0x4a2cc8, Func Offset: 0x48
	// Line 4442, Address: 0x4a2ccc, Func Offset: 0x4c
	// Line 4198, Address: 0x4a2cd4, Func Offset: 0x54
	// Line 4442, Address: 0x4a2cd8, Func Offset: 0x58
	// Line 4229, Address: 0x4a2ce0, Func Offset: 0x60
	// Line 4442, Address: 0x4a2ce4, Func Offset: 0x64
	// Line 4247, Address: 0x4a2cec, Func Offset: 0x6c
	// Line 4442, Address: 0x4a2cf0, Func Offset: 0x70
	// Line 4272, Address: 0x4a2cf8, Func Offset: 0x78
	// Line 4442, Address: 0x4a2cfc, Func Offset: 0x7c
	// Line 4295, Address: 0x4a2d04, Func Offset: 0x84
	// Line 4442, Address: 0x4a2d08, Func Offset: 0x88
	// Line 4313, Address: 0x4a2d10, Func Offset: 0x90
	// Line 4442, Address: 0x4a2d14, Func Offset: 0x94
	// Line 4333, Address: 0x4a2d1c, Func Offset: 0x9c
	// Line 4442, Address: 0x4a2d20, Func Offset: 0xa0
	// Line 4362, Address: 0x4a2d28, Func Offset: 0xa8
	// Line 4442, Address: 0x4a2d2c, Func Offset: 0xac
	// Line 4372, Address: 0x4a2d34, Func Offset: 0xb4
	// Line 4442, Address: 0x4a2d38, Func Offset: 0xb8
	// Line 4382, Address: 0x4a2d40, Func Offset: 0xc0
	// Line 4442, Address: 0x4a2d44, Func Offset: 0xc4
	// Line 4402, Address: 0x4a2d4c, Func Offset: 0xcc
	// Line 4442, Address: 0x4a2d50, Func Offset: 0xd0
	// Line 4422, Address: 0x4a2d58, Func Offset: 0xd8
	// Line 4442, Address: 0x4a2d5c, Func Offset: 0xdc
	// Line 4433, Address: 0x4a2d64, Func Offset: 0xe4
	// Line 4442, Address: 0x4a2d68, Func Offset: 0xe8
	// Line 4073, Address: 0x4a2d78, Func Offset: 0xf8
	// Line 4080, Address: 0x4a2d80, Func Offset: 0x100
	// Line 4442, Address: 0x4a2d84, Func Offset: 0x104
	// Line 4080, Address: 0x4a2d8c, Func Offset: 0x10c
	// Line 4442, Address: 0x4a2d90, Func Offset: 0x110
	// Line 4099, Address: 0x4a2da0, Func Offset: 0x120
	// Line 4101, Address: 0x4a2da8, Func Offset: 0x128
	// Line 4442, Address: 0x4a2dac, Func Offset: 0x12c
	// Line 4101, Address: 0x4a2db4, Func Offset: 0x134
	// Line 4442, Address: 0x4a2db8, Func Offset: 0x138
	// Line 4101, Address: 0x4a2dc0, Func Offset: 0x140
	// Line 4442, Address: 0x4a2dc4, Func Offset: 0x144
	// Line 4101, Address: 0x4a2dcc, Func Offset: 0x14c
	// Line 4442, Address: 0x4a2dd0, Func Offset: 0x150
	// Line 4101, Address: 0x4a2dd8, Func Offset: 0x158
	// Line 4442, Address: 0x4a2ddc, Func Offset: 0x15c
	// Line 4101, Address: 0x4a2de4, Func Offset: 0x164
	// Line 4104, Address: 0x4a2dec, Func Offset: 0x16c
	// Line 4105, Address: 0x4a2df0, Func Offset: 0x170
	// Line 4108, Address: 0x4a2df8, Func Offset: 0x178
	// Line 4109, Address: 0x4a2dfc, Func Offset: 0x17c
	// Line 4113, Address: 0x4a2e04, Func Offset: 0x184
	// Line 4114, Address: 0x4a2e08, Func Offset: 0x188
	// Line 4127, Address: 0x4a2e10, Func Offset: 0x190
	// Line 4130, Address: 0x4a2e14, Func Offset: 0x194
	// Line 4132, Address: 0x4a2e1c, Func Offset: 0x19c
	// Line 4442, Address: 0x4a2e20, Func Offset: 0x1a0
	// Line 4132, Address: 0x4a2e28, Func Offset: 0x1a8
	// Line 4442, Address: 0x4a2e2c, Func Offset: 0x1ac
	// Line 4132, Address: 0x4a2e34, Func Offset: 0x1b4
	// Line 4442, Address: 0x4a2e38, Func Offset: 0x1b8
	// Line 4132, Address: 0x4a2e40, Func Offset: 0x1c0
	// Line 4135, Address: 0x4a2e48, Func Offset: 0x1c8
	// Line 4136, Address: 0x4a2e4c, Func Offset: 0x1cc
	// Line 4139, Address: 0x4a2e54, Func Offset: 0x1d4
	// Line 4140, Address: 0x4a2e58, Func Offset: 0x1d8
	// Line 4148, Address: 0x4a2e60, Func Offset: 0x1e0
	// Line 4149, Address: 0x4a2e64, Func Offset: 0x1e4
	// Line 4154, Address: 0x4a2e6c, Func Offset: 0x1ec
	// Line 4157, Address: 0x4a2e70, Func Offset: 0x1f0
	// Line 4159, Address: 0x4a2e78, Func Offset: 0x1f8
	// Line 4442, Address: 0x4a2e7c, Func Offset: 0x1fc
	// Line 4159, Address: 0x4a2e84, Func Offset: 0x204
	// Line 4442, Address: 0x4a2e88, Func Offset: 0x208
	// Line 4159, Address: 0x4a2e90, Func Offset: 0x210
	// Line 4162, Address: 0x4a2e98, Func Offset: 0x218
	// Line 4163, Address: 0x4a2e9c, Func Offset: 0x21c
	// Line 4166, Address: 0x4a2ea4, Func Offset: 0x224
	// Line 4167, Address: 0x4a2ea8, Func Offset: 0x228
	// Line 4172, Address: 0x4a2eb0, Func Offset: 0x230
	// Line 4175, Address: 0x4a2eb4, Func Offset: 0x234
	// Line 4177, Address: 0x4a2ebc, Func Offset: 0x23c
	// Line 4442, Address: 0x4a2ec0, Func Offset: 0x240
	// Line 4177, Address: 0x4a2ec8, Func Offset: 0x248
	// Line 4442, Address: 0x4a2ecc, Func Offset: 0x24c
	// Line 4177, Address: 0x4a2ed4, Func Offset: 0x254
	// Line 4442, Address: 0x4a2ed8, Func Offset: 0x258
	// Line 4177, Address: 0x4a2ee0, Func Offset: 0x260
	// Line 4180, Address: 0x4a2ee8, Func Offset: 0x268
	// Line 4181, Address: 0x4a2eec, Func Offset: 0x26c
	// Line 4184, Address: 0x4a2ef4, Func Offset: 0x274
	// Line 4185, Address: 0x4a2ef8, Func Offset: 0x278
	// Line 4188, Address: 0x4a2f00, Func Offset: 0x280
	// Line 4189, Address: 0x4a2f04, Func Offset: 0x284
	// Line 4194, Address: 0x4a2f0c, Func Offset: 0x28c
	// Line 4197, Address: 0x4a2f10, Func Offset: 0x290
	// Line 4199, Address: 0x4a2f18, Func Offset: 0x298
	// Line 4442, Address: 0x4a2f1c, Func Offset: 0x29c
	// Line 4199, Address: 0x4a2f24, Func Offset: 0x2a4
	// Line 4442, Address: 0x4a2f28, Func Offset: 0x2a8
	// Line 4199, Address: 0x4a2f30, Func Offset: 0x2b0
	// Line 4442, Address: 0x4a2f34, Func Offset: 0x2b4
	// Line 4199, Address: 0x4a2f3c, Func Offset: 0x2bc
	// Line 4442, Address: 0x4a2f40, Func Offset: 0x2c0
	// Line 4199, Address: 0x4a2f48, Func Offset: 0x2c8
	// Line 4442, Address: 0x4a2f4c, Func Offset: 0x2cc
	// Line 4199, Address: 0x4a2f54, Func Offset: 0x2d4
	// Line 4202, Address: 0x4a2f5c, Func Offset: 0x2dc
	// Line 4203, Address: 0x4a2f60, Func Offset: 0x2e0
	// Line 4206, Address: 0x4a2f68, Func Offset: 0x2e8
	// Line 4207, Address: 0x4a2f6c, Func Offset: 0x2ec
	// Line 4210, Address: 0x4a2f74, Func Offset: 0x2f4
	// Line 4211, Address: 0x4a2f78, Func Offset: 0x2f8
	// Line 4214, Address: 0x4a2f80, Func Offset: 0x300
	// Line 4215, Address: 0x4a2f84, Func Offset: 0x304
	// Line 4219, Address: 0x4a2f8c, Func Offset: 0x30c
	// Line 4220, Address: 0x4a2f90, Func Offset: 0x310
	// Line 4225, Address: 0x4a2f98, Func Offset: 0x318
	// Line 4228, Address: 0x4a2f9c, Func Offset: 0x31c
	// Line 4230, Address: 0x4a2fa4, Func Offset: 0x324
	// Line 4442, Address: 0x4a2fa8, Func Offset: 0x328
	// Line 4230, Address: 0x4a2fb0, Func Offset: 0x330
	// Line 4442, Address: 0x4a2fb4, Func Offset: 0x334
	// Line 4230, Address: 0x4a2fbc, Func Offset: 0x33c
	// Line 4233, Address: 0x4a2fc4, Func Offset: 0x344
	// Line 4234, Address: 0x4a2fc8, Func Offset: 0x348
	// Line 4237, Address: 0x4a2fd0, Func Offset: 0x350
	// Line 4238, Address: 0x4a2fd4, Func Offset: 0x354
	// Line 4243, Address: 0x4a2fdc, Func Offset: 0x35c
	// Line 4246, Address: 0x4a2fe0, Func Offset: 0x360
	// Line 4248, Address: 0x4a2fe8, Func Offset: 0x368
	// Line 4442, Address: 0x4a2fec, Func Offset: 0x36c
	// Line 4248, Address: 0x4a2ff4, Func Offset: 0x374
	// Line 4442, Address: 0x4a2ff8, Func Offset: 0x378
	// Line 4248, Address: 0x4a3000, Func Offset: 0x380
	// Line 4442, Address: 0x4a3004, Func Offset: 0x384
	// Line 4248, Address: 0x4a300c, Func Offset: 0x38c
	// Line 4251, Address: 0x4a3014, Func Offset: 0x394
	// Line 4252, Address: 0x4a3018, Func Offset: 0x398
	// Line 4256, Address: 0x4a3020, Func Offset: 0x3a0
	// Line 4257, Address: 0x4a3024, Func Offset: 0x3a4
	// Line 4262, Address: 0x4a302c, Func Offset: 0x3ac
	// Line 4263, Address: 0x4a3030, Func Offset: 0x3b0
	// Line 4268, Address: 0x4a3038, Func Offset: 0x3b8
	// Line 4271, Address: 0x4a303c, Func Offset: 0x3bc
	// Line 4273, Address: 0x4a3044, Func Offset: 0x3c4
	// Line 4442, Address: 0x4a3048, Func Offset: 0x3c8
	// Line 4273, Address: 0x4a3050, Func Offset: 0x3d0
	// Line 4442, Address: 0x4a3054, Func Offset: 0x3d4
	// Line 4273, Address: 0x4a305c, Func Offset: 0x3dc
	// Line 4442, Address: 0x4a3060, Func Offset: 0x3e0
	// Line 4273, Address: 0x4a3068, Func Offset: 0x3e8
	// Line 4276, Address: 0x4a3070, Func Offset: 0x3f0
	// Line 4277, Address: 0x4a3074, Func Offset: 0x3f4
	// Line 4280, Address: 0x4a307c, Func Offset: 0x3fc
	// Line 4281, Address: 0x4a3080, Func Offset: 0x400
	// Line 4285, Address: 0x4a3088, Func Offset: 0x408
	// Line 4286, Address: 0x4a308c, Func Offset: 0x40c
	// Line 4291, Address: 0x4a3094, Func Offset: 0x414
	// Line 4294, Address: 0x4a3098, Func Offset: 0x418
	// Line 4296, Address: 0x4a30a0, Func Offset: 0x420
	// Line 4442, Address: 0x4a30a4, Func Offset: 0x424
	// Line 4296, Address: 0x4a30ac, Func Offset: 0x42c
	// Line 4442, Address: 0x4a30b0, Func Offset: 0x430
	// Line 4296, Address: 0x4a30b8, Func Offset: 0x438
	// Line 4299, Address: 0x4a30c0, Func Offset: 0x440
	// Line 4300, Address: 0x4a30c4, Func Offset: 0x444
	// Line 4303, Address: 0x4a30cc, Func Offset: 0x44c
	// Line 4304, Address: 0x4a30d0, Func Offset: 0x450
	// Line 4309, Address: 0x4a30d8, Func Offset: 0x458
	// Line 4312, Address: 0x4a30dc, Func Offset: 0x45c
	// Line 4314, Address: 0x4a30e4, Func Offset: 0x464
	// Line 4442, Address: 0x4a30e8, Func Offset: 0x468
	// Line 4314, Address: 0x4a30f0, Func Offset: 0x470
	// Line 4442, Address: 0x4a30f4, Func Offset: 0x474
	// Line 4314, Address: 0x4a30fc, Func Offset: 0x47c
	// Line 4318, Address: 0x4a3104, Func Offset: 0x484
	// Line 4319, Address: 0x4a3108, Func Offset: 0x488
	// Line 4323, Address: 0x4a3110, Func Offset: 0x490
	// Line 4324, Address: 0x4a3114, Func Offset: 0x494
	// Line 4329, Address: 0x4a311c, Func Offset: 0x49c
	// Line 4332, Address: 0x4a3120, Func Offset: 0x4a0
	// Line 4334, Address: 0x4a3128, Func Offset: 0x4a8
	// Line 4442, Address: 0x4a312c, Func Offset: 0x4ac
	// Line 4334, Address: 0x4a3134, Func Offset: 0x4b4
	// Line 4442, Address: 0x4a3138, Func Offset: 0x4b8
	// Line 4334, Address: 0x4a3140, Func Offset: 0x4c0
	// Line 4442, Address: 0x4a3144, Func Offset: 0x4c4
	// Line 4334, Address: 0x4a314c, Func Offset: 0x4cc
	// Line 4442, Address: 0x4a3150, Func Offset: 0x4d0
	// Line 4334, Address: 0x4a3158, Func Offset: 0x4d8
	// Line 4337, Address: 0x4a3160, Func Offset: 0x4e0
	// Line 4338, Address: 0x4a3164, Func Offset: 0x4e4
	// Line 4342, Address: 0x4a316c, Func Offset: 0x4ec
	// Line 4343, Address: 0x4a3170, Func Offset: 0x4f0
	// Line 4348, Address: 0x4a3178, Func Offset: 0x4f8
	// Line 4349, Address: 0x4a317c, Func Offset: 0x4fc
	// Line 4352, Address: 0x4a3184, Func Offset: 0x504
	// Line 4353, Address: 0x4a3188, Func Offset: 0x508
	// Line 4358, Address: 0x4a3190, Func Offset: 0x510
	// Line 4361, Address: 0x4a3194, Func Offset: 0x514
	// Line 4371, Address: 0x4a319c, Func Offset: 0x51c
	// Line 4381, Address: 0x4a31a4, Func Offset: 0x524
	// Line 4383, Address: 0x4a31ac, Func Offset: 0x52c
	// Line 4442, Address: 0x4a31b0, Func Offset: 0x530
	// Line 4383, Address: 0x4a31b8, Func Offset: 0x538
	// Line 4442, Address: 0x4a31bc, Func Offset: 0x53c
	// Line 4383, Address: 0x4a31c4, Func Offset: 0x544
	// Line 4387, Address: 0x4a31cc, Func Offset: 0x54c
	// Line 4388, Address: 0x4a31d0, Func Offset: 0x550
	// Line 4398, Address: 0x4a31d8, Func Offset: 0x558
	// Line 4401, Address: 0x4a31dc, Func Offset: 0x55c
	// Line 4403, Address: 0x4a31e4, Func Offset: 0x564
	// Line 4442, Address: 0x4a31e8, Func Offset: 0x568
	// Line 4403, Address: 0x4a31f0, Func Offset: 0x570
	// Line 4442, Address: 0x4a31f4, Func Offset: 0x574
	// Line 4403, Address: 0x4a31fc, Func Offset: 0x57c
	// Line 4406, Address: 0x4a3204, Func Offset: 0x584
	// Line 4407, Address: 0x4a3208, Func Offset: 0x588
	// Line 4412, Address: 0x4a3210, Func Offset: 0x590
	// Line 4413, Address: 0x4a3214, Func Offset: 0x594
	// Line 4418, Address: 0x4a321c, Func Offset: 0x59c
	// Line 4421, Address: 0x4a3220, Func Offset: 0x5a0
	// Line 4432, Address: 0x4a3228, Func Offset: 0x5a8
	// Line 4443, Address: 0x4a3230, Func Offset: 0x5b0
	// Func End, Address: 0x4a3238, Func Offset: 0x5b8
}

// iSG_mcasync_chkop__FP19st_ISG_MEMCARD_DATAiPi
// Start address: 0x4a3240
en_ISGMCA_STATUS iSG_mcasync_chkop(st_ISG_MEMCARD_DATA* mcdata, int32 block, int32* sync_resval)
{
	en_ISGMCA_STATUS result;
	int32 mcf;
	int32 rc;
	int32 ret;
	uint32 on;
	// Line 3958, Address: 0x4a3240, Func Offset: 0
	// Line 3963, Address: 0x4a3264, Func Offset: 0x24
	// Line 3964, Address: 0x4a326c, Func Offset: 0x2c
	// Line 3966, Address: 0x4a3274, Func Offset: 0x34
	// Line 3968, Address: 0x4a3278, Func Offset: 0x38
	// Line 3966, Address: 0x4a3284, Func Offset: 0x44
	// Line 3968, Address: 0x4a3288, Func Offset: 0x48
	// Line 3972, Address: 0x4a328c, Func Offset: 0x4c
	// Line 3986, Address: 0x4a329c, Func Offset: 0x5c
	// Line 3990, Address: 0x4a32c0, Func Offset: 0x80
	// Line 3995, Address: 0x4a32c8, Func Offset: 0x88
	// Line 3999, Address: 0x4a32d0, Func Offset: 0x90
	// Line 4003, Address: 0x4a32d8, Func Offset: 0x98
	// Line 4005, Address: 0x4a32dc, Func Offset: 0x9c
	// Line 4009, Address: 0x4a32e0, Func Offset: 0xa0
	// Line 4010, Address: 0x4a32f0, Func Offset: 0xb0
	// Line 4015, Address: 0x4a32f8, Func Offset: 0xb8
	// Line 4017, Address: 0x4a3300, Func Offset: 0xc0
	// Line 4018, Address: 0x4a3330, Func Offset: 0xf0
	// Line 4022, Address: 0x4a3340, Func Offset: 0x100
	// Line 4048, Address: 0x4a334c, Func Offset: 0x10c
	// Line 4028, Address: 0x4a336c, Func Offset: 0x12c
	// Line 4048, Address: 0x4a3370, Func Offset: 0x130
	// Line 4049, Address: 0x4a33ac, Func Offset: 0x16c
	// Func End, Address: 0x4a33cc, Func Offset: 0x18c
}

// iSG_mca_fwrite__FP19st_ISG_MEMCARD_DATAPci
// Start address: 0x4a33d0
int32 iSG_mca_fwrite(st_ISG_MEMCARD_DATA* mcdata, int8* data, int32 n)
{
	int32 result;
	int32 rc;
	// Line 3822, Address: 0x4a33d0, Func Offset: 0
	// Line 3827, Address: 0x4a33e4, Func Offset: 0x14
	// Line 3830, Address: 0x4a33e8, Func Offset: 0x18
	// Line 3845, Address: 0x4a33f8, Func Offset: 0x28
	// Line 3832, Address: 0x4a3400, Func Offset: 0x30
	// Line 3845, Address: 0x4a3404, Func Offset: 0x34
	// Line 3846, Address: 0x4a342c, Func Offset: 0x5c
	// Func End, Address: 0x4a3440, Func Offset: 0x70
}

// iSG_mca_fopen__FP19st_ISG_MEMCARD_DATAPCc13en_ISG_IOMODE
// Start address: 0x4a3440
int32 iSG_mca_fopen(st_ISG_MEMCARD_DATA* mcdata, int8* fname, en_ISG_IOMODE mode)
{
	int32 result;
	int32 ps2mode;
	int32 rc;
	// Line 3564, Address: 0x4a3440, Func Offset: 0
	// Line 3565, Address: 0x4a3450, Func Offset: 0x10
	// Line 3579, Address: 0x4a3454, Func Offset: 0x14
	// Line 3582, Address: 0x4a3468, Func Offset: 0x28
	// Line 3583, Address: 0x4a346c, Func Offset: 0x2c
	// Line 3582, Address: 0x4a3470, Func Offset: 0x30
	// Line 3583, Address: 0x4a3474, Func Offset: 0x34
	// Line 3584, Address: 0x4a3480, Func Offset: 0x40
	// Line 3585, Address: 0x4a348c, Func Offset: 0x4c
	// Line 3586, Address: 0x4a3494, Func Offset: 0x54
	// Line 3595, Address: 0x4a3498, Func Offset: 0x58
	// Line 3597, Address: 0x4a349c, Func Offset: 0x5c
	// Func End, Address: 0x4a34b0, Func Offset: 0x70
}

// iSG_mca_unfmt__FP19st_ISG_MEMCARD_DATA
// Start address: 0x4a34b0
int32 iSG_mca_unfmt(st_ISG_MEMCARD_DATA* mcdata)
{
	int32 result;
	int32 ret;
	int32 rc;
	// Line 3384, Address: 0x4a34b0, Func Offset: 0
	// Line 3388, Address: 0x4a34c4, Func Offset: 0x14
	// Line 3392, Address: 0x4a34c8, Func Offset: 0x18
	// Line 3393, Address: 0x4a34d4, Func Offset: 0x24
	// Line 3397, Address: 0x4a34dc, Func Offset: 0x2c
	// Line 3418, Address: 0x4a34e0, Func Offset: 0x30
	// Line 3403, Address: 0x4a34e8, Func Offset: 0x38
	// Line 3418, Address: 0x4a34ec, Func Offset: 0x3c
	// Line 3419, Address: 0x4a3518, Func Offset: 0x68
	// Func End, Address: 0x4a352c, Func Offset: 0x7c
}

// iSG_mca_fmt__FP19st_ISG_MEMCARD_DATAi
// Start address: 0x4a3530
int32 iSG_mca_fmt(st_ISG_MEMCARD_DATA* mcdata, int32 force)
{
	int32 result;
	int32 rval;
	int32 ret;
	int32 rc;
	// Line 3298, Address: 0x4a3530, Func Offset: 0
	// Line 3302, Address: 0x4a354c, Func Offset: 0x1c
	// Line 3305, Address: 0x4a3550, Func Offset: 0x20
	// Line 3306, Address: 0x4a355c, Func Offset: 0x2c
	// Line 3309, Address: 0x4a356c, Func Offset: 0x3c
	// Line 3314, Address: 0x4a3588, Func Offset: 0x58
	// Line 3315, Address: 0x4a3594, Func Offset: 0x64
	// Line 3322, Address: 0x4a359c, Func Offset: 0x6c
	// Line 3347, Address: 0x4a35a0, Func Offset: 0x70
	// Line 3331, Address: 0x4a35a8, Func Offset: 0x78
	// Line 3347, Address: 0x4a35ac, Func Offset: 0x7c
	// Line 3348, Address: 0x4a35d8, Func Offset: 0xa8
	// Func End, Address: 0x4a35f0, Func Offset: 0xc0
}

// iSG_get_fmoddate__FP19st_ISG_MEMCARD_DATAPCcPiPiPiPiPiPi
// Start address: 0x4a35f0
int32 iSG_get_fmoddate(st_ISG_MEMCARD_DATA* mcdata, int8* fname, int32* sec, int32* min, int32* hr, int32* mon, int32* day, int32* yr)
{
	int32 result;
	sceMcTblGetDir* finf;
	int32 rc;
	// Line 3211, Address: 0x4a35f0, Func Offset: 0
	// Line 3212, Address: 0x4a3600, Func Offset: 0x10
	// Line 3211, Address: 0x4a3604, Func Offset: 0x14
	// Line 3213, Address: 0x4a3634, Func Offset: 0x44
	// Line 3216, Address: 0x4a3638, Func Offset: 0x48
	// Line 3217, Address: 0x4a3640, Func Offset: 0x50
	// Line 3222, Address: 0x4a3648, Func Offset: 0x58
	// Line 3223, Address: 0x4a3650, Func Offset: 0x60
	// Line 3224, Address: 0x4a3658, Func Offset: 0x68
	// Line 3225, Address: 0x4a3660, Func Offset: 0x70
	// Line 3226, Address: 0x4a3668, Func Offset: 0x78
	// Line 3227, Address: 0x4a3670, Func Offset: 0x80
	// Line 3228, Address: 0x4a3678, Func Offset: 0x88
	// Line 3229, Address: 0x4a3680, Func Offset: 0x90
	// Line 3230, Address: 0x4a3688, Func Offset: 0x98
	// Line 3231, Address: 0x4a3690, Func Offset: 0xa0
	// Line 3232, Address: 0x4a3698, Func Offset: 0xa8
	// Line 3233, Address: 0x4a36a0, Func Offset: 0xb0
	// Line 3237, Address: 0x4a36a8, Func Offset: 0xb8
	// Line 3218, Address: 0x4a36b4, Func Offset: 0xc4
	// Line 3238, Address: 0x4a36bc, Func Offset: 0xcc
	// Func End, Address: 0x4a36e4, Func Offset: 0xf4
}

// iSG_get_finfo__FP19st_ISG_MEMCARD_DATAPCcPCc
// Start address: 0x4a36f0
int32 iSG_get_finfo(st_ISG_MEMCARD_DATA* mcdata, int8* fname, int8* path)
{
	int32 result;
	int8 str_buf[64];
	int32 len;
	int32 rc;
	int32 numfound;
	// Line 3122, Address: 0x4a36f0, Func Offset: 0
	// Line 3132, Address: 0x4a3714, Func Offset: 0x24
	// Line 3136, Address: 0x4a3740, Func Offset: 0x50
	// Line 3144, Address: 0x4a3748, Func Offset: 0x58
	// Line 3150, Address: 0x4a3750, Func Offset: 0x60
	// Line 3151, Address: 0x4a3778, Func Offset: 0x88
	// Line 3152, Address: 0x4a3788, Func Offset: 0x98
	// Line 3156, Address: 0x4a37a0, Func Offset: 0xb0
	// Line 3164, Address: 0x4a37b8, Func Offset: 0xc8
	// Line 3166, Address: 0x4a37d4, Func Offset: 0xe4
	// Line 3167, Address: 0x4a37e0, Func Offset: 0xf0
	// Line 3168, Address: 0x4a37e8, Func Offset: 0xf8
	// Line 3185, Address: 0x4a37ec, Func Offset: 0xfc
	// Line 3187, Address: 0x4a3804, Func Offset: 0x114
	// Line 3193, Address: 0x4a3808, Func Offset: 0x118
	// Line 3153, Address: 0x4a3810, Func Offset: 0x120
	// Line 3193, Address: 0x4a3818, Func Offset: 0x128
	// Line 3154, Address: 0x4a3824, Func Offset: 0x134
	// Line 3193, Address: 0x4a382c, Func Offset: 0x13c
	// Line 3159, Address: 0x4a3840, Func Offset: 0x150
	// Line 3193, Address: 0x4a3844, Func Offset: 0x154
	// Line 3159, Address: 0x4a384c, Func Offset: 0x15c
	// Line 3193, Address: 0x4a3854, Func Offset: 0x164
	// Line 3171, Address: 0x4a3868, Func Offset: 0x178
	// Line 3193, Address: 0x4a386c, Func Offset: 0x17c
	// Line 3173, Address: 0x4a3878, Func Offset: 0x188
	// Line 3193, Address: 0x4a387c, Func Offset: 0x18c
	// Line 3174, Address: 0x4a3884, Func Offset: 0x194
	// Line 3193, Address: 0x4a388c, Func Offset: 0x19c
	// Line 3194, Address: 0x4a38a8, Func Offset: 0x1b8
	// Func End, Address: 0x4a38c4, Func Offset: 0x1d4
}

// iSG_isSpaceForFile_Startup__FP19st_ISG_MEMCARD_DATAiiPCcPCcPiPi
// Start address: 0x4a38d0
int32 iSG_isSpaceForFile_Startup(st_ISG_MEMCARD_DATA* mcdata, int32 mcidx, int8* dpath, int32* bytesNeeded, int32* availOnDisk)
{
	int32 fc_need;
	int32 fEc_need;
	int32 xtra_fent;
	int32 estclust;
	int32 reset_mcpath;
	int32 rc;
	int8 fileNames[25][5];
	int32 i;
	int32 totclust;
	// Line 2765, Address: 0x4a38d0, Func Offset: 0
	// Line 2777, Address: 0x4a38e4, Func Offset: 0x14
	// Line 2765, Address: 0x4a38e8, Func Offset: 0x18
	// Line 2778, Address: 0x4a390c, Func Offset: 0x3c
	// Line 2781, Address: 0x4a3920, Func Offset: 0x50
	// Line 2785, Address: 0x4a3930, Func Offset: 0x60
	// Line 2789, Address: 0x4a3944, Func Offset: 0x74
	// Line 2790, Address: 0x4a3954, Func Offset: 0x84
	// Line 2792, Address: 0x4a395c, Func Offset: 0x8c
	// Line 2850, Address: 0x4a3960, Func Offset: 0x90
	// Line 2861, Address: 0x4a396c, Func Offset: 0x9c
	// Line 2864, Address: 0x4a3974, Func Offset: 0xa4
	// Line 2865, Address: 0x4a397c, Func Offset: 0xac
	// Line 2866, Address: 0x4a3980, Func Offset: 0xb0
	// Line 2867, Address: 0x4a3988, Func Offset: 0xb8
	// Line 2870, Address: 0x4a398c, Func Offset: 0xbc
	// Line 2806, Address: 0x4a3998, Func Offset: 0xc8
	// Line 2870, Address: 0x4a399c, Func Offset: 0xcc
	// Line 2824, Address: 0x4a39b0, Func Offset: 0xe0
	// Line 2870, Address: 0x4a39b4, Func Offset: 0xe4
	// Line 2810, Address: 0x4a39b8, Func Offset: 0xe8
	// Line 2870, Address: 0x4a39bc, Func Offset: 0xec
	// Line 2825, Address: 0x4a39c0, Func Offset: 0xf0
	// Line 2870, Address: 0x4a39c4, Func Offset: 0xf4
	// Line 2825, Address: 0x4a39c8, Func Offset: 0xf8
	// Line 2870, Address: 0x4a39cc, Func Offset: 0xfc
	// Line 2825, Address: 0x4a39d0, Func Offset: 0x100
	// Line 2870, Address: 0x4a39d8, Func Offset: 0x108
	// Line 2835, Address: 0x4a39e0, Func Offset: 0x110
	// Line 2870, Address: 0x4a39e4, Func Offset: 0x114
	// Line 2837, Address: 0x4a39e8, Func Offset: 0x118
	// Line 2870, Address: 0x4a39f0, Func Offset: 0x120
	// Line 2837, Address: 0x4a3a00, Func Offset: 0x130
	// Line 2870, Address: 0x4a3a0c, Func Offset: 0x13c
	// Line 2840, Address: 0x4a3a20, Func Offset: 0x150
	// Line 2870, Address: 0x4a3a24, Func Offset: 0x154
	// Line 2871, Address: 0x4a3a48, Func Offset: 0x178
	// Func End, Address: 0x4a3a78, Func Offset: 0x1a8
}

// iSG_isSpaceForFile__FP19st_ISG_MEMCARD_DATAiiPCcPCcPiPi
// Start address: 0x4a3a80
int32 iSG_isSpaceForFile(st_ISG_MEMCARD_DATA* mcdata, int32 mcidx, int32 fsize, int8* dpath, int8* fname, int32* bytesNeeded, int32* availOnDisk)
{
	int32 fc_need;
	int32 fEc_need;
	int32 xtra_fent;
	int32 estclust;
	int32 reset_mcpath;
	int32 rc;
	int32 totclust;
	// Line 2603, Address: 0x4a3a80, Func Offset: 0
	// Line 2615, Address: 0x4a3a9c, Func Offset: 0x1c
	// Line 2603, Address: 0x4a3aa0, Func Offset: 0x20
	// Line 2616, Address: 0x4a3ac4, Func Offset: 0x44
	// Line 2619, Address: 0x4a3ad8, Func Offset: 0x58
	// Line 2623, Address: 0x4a3ae8, Func Offset: 0x68
	// Line 2627, Address: 0x4a3afc, Func Offset: 0x7c
	// Line 2628, Address: 0x4a3b0c, Func Offset: 0x8c
	// Line 2675, Address: 0x4a3b14, Func Offset: 0x94
	// Line 2726, Address: 0x4a3b18, Func Offset: 0x98
	// Line 2737, Address: 0x4a3b24, Func Offset: 0xa4
	// Line 2740, Address: 0x4a3b2c, Func Offset: 0xac
	// Line 2741, Address: 0x4a3b34, Func Offset: 0xb4
	// Line 2742, Address: 0x4a3b38, Func Offset: 0xb8
	// Line 2743, Address: 0x4a3b40, Func Offset: 0xc0
	// Line 2746, Address: 0x4a3b44, Func Offset: 0xc4
	// Line 2690, Address: 0x4a3b50, Func Offset: 0xd0
	// Line 2746, Address: 0x4a3b54, Func Offset: 0xd4
	// Line 2708, Address: 0x4a3b68, Func Offset: 0xe8
	// Line 2746, Address: 0x4a3b6c, Func Offset: 0xec
	// Line 2708, Address: 0x4a3b78, Func Offset: 0xf8
	// Line 2711, Address: 0x4a3b7c, Func Offset: 0xfc
	// Line 2746, Address: 0x4a3b84, Func Offset: 0x104
	// Line 2711, Address: 0x4a3b94, Func Offset: 0x114
	// Line 2746, Address: 0x4a3ba0, Func Offset: 0x120
	// Line 2716, Address: 0x4a3bbc, Func Offset: 0x13c
	// Line 2714, Address: 0x4a3bc8, Func Offset: 0x148
	// Line 2747, Address: 0x4a3bdc, Func Offset: 0x15c
	// Func End, Address: 0x4a3c0c, Func Offset: 0x18c
}

// iSG_mc_availDirEnt__FP19st_ISG_MEMCARD_DATAiPCc
// Start address: 0x4a3c10
int32 iSG_mc_availDirEnt(st_ISG_MEMCARD_DATA* mcdata, int32 mcidx, int8* dpath)
{
	int32 result;
	int32 rc;
	int32 clust;
	// Line 2543, Address: 0x4a3c10, Func Offset: 0
	// Line 2552, Address: 0x4a3c14, Func Offset: 0x4
	// Line 2543, Address: 0x4a3c18, Func Offset: 0x8
	// Line 2555, Address: 0x4a3c1c, Func Offset: 0xc
	// Line 2543, Address: 0x4a3c20, Func Offset: 0x10
	// Line 2548, Address: 0x4a3c34, Func Offset: 0x24
	// Line 2555, Address: 0x4a3c38, Func Offset: 0x28
	// Line 2552, Address: 0x4a3c3c, Func Offset: 0x2c
	// Line 2546, Address: 0x4a3c40, Func Offset: 0x30
	// Line 2555, Address: 0x4a3c44, Func Offset: 0x34
	// Line 2558, Address: 0x4a3c50, Func Offset: 0x40
	// Line 2559, Address: 0x4a3c60, Func Offset: 0x50
	// Line 2560, Address: 0x4a3c6c, Func Offset: 0x5c
	// Line 2561, Address: 0x4a3c74, Func Offset: 0x64
	// Line 2563, Address: 0x4a3c78, Func Offset: 0x68
	// Line 2583, Address: 0x4a3c80, Func Offset: 0x70
	// Line 2565, Address: 0x4a3c94, Func Offset: 0x84
	// Line 2583, Address: 0x4a3c98, Func Offset: 0x88
	// Line 2585, Address: 0x4a3cb0, Func Offset: 0xa0
	// Func End, Address: 0x4a3cc4, Func Offset: 0xb4
}

// iSG_mc_availclust__FP19st_ISG_MEMCARD_DATAi
// Start address: 0x4a3cd0
int32 iSG_mc_availclust(st_ISG_MEMCARD_DATA* mcdata, int32 mcidx)
{
	int32 result;
	int32 rc;
	int32 clust;
	// Line 2480, Address: 0x4a3cd0, Func Offset: 0
	// Line 2492, Address: 0x4a3cd4, Func Offset: 0x4
	// Line 2480, Address: 0x4a3cd8, Func Offset: 0x8
	// Line 2485, Address: 0x4a3ce8, Func Offset: 0x18
	// Line 2483, Address: 0x4a3cec, Func Offset: 0x1c
	// Line 2489, Address: 0x4a3cf0, Func Offset: 0x20
	// Line 2492, Address: 0x4a3cf4, Func Offset: 0x24
	// Line 2495, Address: 0x4a3d04, Func Offset: 0x34
	// Line 2496, Address: 0x4a3d1c, Func Offset: 0x4c
	// Line 2497, Address: 0x4a3d28, Func Offset: 0x58
	// Line 2498, Address: 0x4a3d30, Func Offset: 0x60
	// Line 2500, Address: 0x4a3d34, Func Offset: 0x64
	// Line 2516, Address: 0x4a3d3c, Func Offset: 0x6c
	// Line 2504, Address: 0x4a3d50, Func Offset: 0x80
	// Line 2516, Address: 0x4a3d54, Func Offset: 0x84
	// Line 2518, Address: 0x4a3d6c, Func Offset: 0x9c
	// Func End, Address: 0x4a3d7c, Func Offset: 0xac
}

// iSG_mc_isPSIIcard__FP19st_ISG_MEMCARD_DATAi
// Start address: 0x4a3d80
int32 iSG_mc_isPSIIcard(st_ISG_MEMCARD_DATA* mcdata, int32 mcidx)
{
	int32 result;
	int32 rc;
	int32 type;
	// Line 2416, Address: 0x4a3d80, Func Offset: 0
	// Line 2428, Address: 0x4a3d84, Func Offset: 0x4
	// Line 2416, Address: 0x4a3d88, Func Offset: 0x8
	// Line 2421, Address: 0x4a3d98, Func Offset: 0x18
	// Line 2419, Address: 0x4a3d9c, Func Offset: 0x1c
	// Line 2423, Address: 0x4a3da0, Func Offset: 0x20
	// Line 2428, Address: 0x4a3da4, Func Offset: 0x24
	// Line 2431, Address: 0x4a3db4, Func Offset: 0x34
	// Line 2432, Address: 0x4a3dcc, Func Offset: 0x4c
	// Line 2433, Address: 0x4a3dd8, Func Offset: 0x58
	// Line 2434, Address: 0x4a3de0, Func Offset: 0x60
	// Line 2436, Address: 0x4a3de4, Func Offset: 0x64
	// Line 2475, Address: 0x4a3dec, Func Offset: 0x6c
	// Line 2440, Address: 0x4a3df4, Func Offset: 0x74
	// Line 2475, Address: 0x4a3df8, Func Offset: 0x78
	// Line 2442, Address: 0x4a3e00, Func Offset: 0x80
	// Line 2475, Address: 0x4a3e04, Func Offset: 0x84
	// Line 2446, Address: 0x4a3e10, Func Offset: 0x90
	// Line 2475, Address: 0x4a3e14, Func Offset: 0x94
	// Line 2443, Address: 0x4a3e24, Func Offset: 0xa4
	// Line 2476, Address: 0x4a3e2c, Func Offset: 0xac
	// Func End, Address: 0x4a3e40, Func Offset: 0xc0
}

// iSG_mc_isformatted__FP19st_ISG_MEMCARD_DATAi
// Start address: 0x4a3e40
int32 iSG_mc_isformatted(st_ISG_MEMCARD_DATA* mcdata, int32 mcidx)
{
	int32 result;
	int32 rc;
	int32 is_fmtd;
	// Line 2371, Address: 0x4a3e40, Func Offset: 0
	// Line 2381, Address: 0x4a3e44, Func Offset: 0x4
	// Line 2371, Address: 0x4a3e48, Func Offset: 0x8
	// Line 2376, Address: 0x4a3e58, Func Offset: 0x18
	// Line 2374, Address: 0x4a3e5c, Func Offset: 0x1c
	// Line 2378, Address: 0x4a3e60, Func Offset: 0x20
	// Line 2381, Address: 0x4a3e64, Func Offset: 0x24
	// Line 2384, Address: 0x4a3e74, Func Offset: 0x34
	// Line 2385, Address: 0x4a3e8c, Func Offset: 0x4c
	// Line 2386, Address: 0x4a3e98, Func Offset: 0x58
	// Line 2387, Address: 0x4a3ea0, Func Offset: 0x60
	// Line 2390, Address: 0x4a3ea4, Func Offset: 0x64
	// Line 2401, Address: 0x4a3eac, Func Offset: 0x6c
	// Line 2402, Address: 0x4a3eb4, Func Offset: 0x74
	// Line 2411, Address: 0x4a3ebc, Func Offset: 0x7c
	// Line 2392, Address: 0x4a3ec4, Func Offset: 0x84
	// Line 2411, Address: 0x4a3ec8, Func Offset: 0x88
	// Line 2412, Address: 0x4a3ee0, Func Offset: 0xa0
	// Func End, Address: 0x4a3ef4, Func Offset: 0xb4
}

// iSG_mc_exists__FP19st_ISG_MEMCARD_DATAi
// Start address: 0x4a3f00
int32 iSG_mc_exists(st_ISG_MEMCARD_DATA* mcdata, int32 mcidx)
{
	int32 result;
	int32 rc;
	// Line 2332, Address: 0x4a3f00, Func Offset: 0
	// Line 2344, Address: 0x4a3f04, Func Offset: 0x4
	// Line 2332, Address: 0x4a3f08, Func Offset: 0x8
	// Line 2335, Address: 0x4a3f18, Func Offset: 0x18
	// Line 2344, Address: 0x4a3f1c, Func Offset: 0x1c
	// Line 2339, Address: 0x4a3f20, Func Offset: 0x20
	// Line 2344, Address: 0x4a3f24, Func Offset: 0x24
	// Line 2347, Address: 0x4a3f30, Func Offset: 0x30
	// Line 2348, Address: 0x4a3f48, Func Offset: 0x48
	// Line 2349, Address: 0x4a3f54, Func Offset: 0x54
	// Line 2351, Address: 0x4a3f60, Func Offset: 0x60
	// Line 2366, Address: 0x4a3f68, Func Offset: 0x68
	// Line 2353, Address: 0x4a3f70, Func Offset: 0x70
	// Line 2366, Address: 0x4a3f74, Func Offset: 0x74
	// Line 2355, Address: 0x4a3f7c, Func Offset: 0x7c
	// Line 2366, Address: 0x4a3f80, Func Offset: 0x80
	// Line 2367, Address: 0x4a3f90, Func Offset: 0x90
	// Func End, Address: 0x4a3fa4, Func Offset: 0xa4
}

// iSG_mcidx_portslot__FiPiPiPi
// Start address: 0x4a3fb0
int32 iSG_mcidx_portslot(int32 mcidx, int32* port, int32* slot, int32* concnt)
{
	int32 result;
	int32 rc;
	int32 ret;
	int32 i;
	int32 type;
	int32 tp;
	int32 con_p0;
	int32 con_p1;
	int32 use_port;
	int32 cur_mcop;
	// Line 2065, Address: 0x4a3fb0, Func Offset: 0
	// Line 2067, Address: 0x4a3fd0, Func Offset: 0x20
	// Line 2065, Address: 0x4a3fd4, Func Offset: 0x24
	// Line 2226, Address: 0x4a3fe0, Func Offset: 0x30
	// Line 2065, Address: 0x4a3fe4, Func Offset: 0x34
	// Line 2080, Address: 0x4a3fec, Func Offset: 0x3c
	// Line 2065, Address: 0x4a3ff0, Func Offset: 0x40
	// Line 2081, Address: 0x4a3ff4, Func Offset: 0x44
	// Line 2083, Address: 0x4a3ffc, Func Offset: 0x4c
	// Line 2069, Address: 0x4a4000, Func Offset: 0x50
	// Line 2073, Address: 0x4a4004, Func Offset: 0x54
	// Line 2226, Address: 0x4a4008, Func Offset: 0x58
	// Line 2229, Address: 0x4a4010, Func Offset: 0x60
	// Line 2245, Address: 0x4a4018, Func Offset: 0x68
	// Line 2249, Address: 0x4a401c, Func Offset: 0x6c
	// Line 2256, Address: 0x4a4020, Func Offset: 0x70
	// Line 2257, Address: 0x4a403c, Func Offset: 0x8c
	// Line 2258, Address: 0x4a4048, Func Offset: 0x98
	// Line 2301, Address: 0x4a4050, Func Offset: 0xa0
	// Line 2306, Address: 0x4a4060, Func Offset: 0xb0
	// Line 2308, Address: 0x4a406c, Func Offset: 0xbc
	// Line 2309, Address: 0x4a4074, Func Offset: 0xc4
	// Line 2310, Address: 0x4a4078, Func Offset: 0xc8
	// Line 2314, Address: 0x4a407c, Func Offset: 0xcc
	// Line 2313, Address: 0x4a4080, Func Offset: 0xd0
	// Line 2314, Address: 0x4a4084, Func Offset: 0xd4
	// Line 2327, Address: 0x4a4088, Func Offset: 0xd8
	// Line 2268, Address: 0x4a40a8, Func Offset: 0xf8
	// Line 2327, Address: 0x4a40ac, Func Offset: 0xfc
	// Line 2270, Address: 0x4a40b8, Func Offset: 0x108
	// Line 2327, Address: 0x4a40bc, Func Offset: 0x10c
	// Line 2270, Address: 0x4a40c4, Func Offset: 0x114
	// Line 2327, Address: 0x4a40c8, Func Offset: 0x118
	// Line 2270, Address: 0x4a40d8, Func Offset: 0x128
	// Line 2327, Address: 0x4a40e0, Func Offset: 0x130
	// Line 2282, Address: 0x4a40ec, Func Offset: 0x13c
	// Line 2327, Address: 0x4a40f0, Func Offset: 0x140
	// Line 2285, Address: 0x4a40f8, Func Offset: 0x148
	// Line 2327, Address: 0x4a4100, Func Offset: 0x150
	// Line 2328, Address: 0x4a4128, Func Offset: 0x178
	// Func End, Address: 0x4a4158, Func Offset: 0x1a8
}

// SQUIB_init_st_iconsys__FP12sceMcIconSys
// Start address: 0x4a4160
void SQUIB_init_st_iconsys(sceMcIconSys* icsys)
{
	int32 bgcolor[4][4];
	float32 lightdir[4][3];
	float32 lightcol[4][3];
	float32 ambient[4];
	int8* iconname;
	uint8 sjistitle[68];
	// Line 1936, Address: 0x4a4160, Func Offset: 0
	// Line 1946, Address: 0x4a4164, Func Offset: 0x4
	// Line 1936, Address: 0x4a4168, Func Offset: 0x8
	// Line 1946, Address: 0x4a416c, Func Offset: 0xc
	// Line 1936, Address: 0x4a4170, Func Offset: 0x10
	// Line 1946, Address: 0x4a4174, Func Offset: 0x14
	// Line 1960, Address: 0x4a41a0, Func Offset: 0x40
	// Line 1970, Address: 0x4a421c, Func Offset: 0xbc
	// Line 1960, Address: 0x4a4220, Func Offset: 0xc0
	// Line 1970, Address: 0x4a4230, Func Offset: 0xd0
	// Line 1960, Address: 0x4a423c, Func Offset: 0xdc
	// Line 1970, Address: 0x4a4240, Func Offset: 0xe0
	// Line 1976, Address: 0x4a4270, Func Offset: 0x110
	// Line 1970, Address: 0x4a4274, Func Offset: 0x114
	// Line 1976, Address: 0x4a42b4, Func Offset: 0x154
	// Line 1970, Address: 0x4a42b8, Func Offset: 0x158
	// Line 1976, Address: 0x4a42c0, Func Offset: 0x160
	// Line 1970, Address: 0x4a42c8, Func Offset: 0x168
	// Line 1976, Address: 0x4a42cc, Func Offset: 0x16c
	// Line 1970, Address: 0x4a42d8, Func Offset: 0x178
	// Line 1980, Address: 0x4a42dc, Func Offset: 0x17c
	// Line 1976, Address: 0x4a42e0, Func Offset: 0x180
	// Line 1980, Address: 0x4a42f0, Func Offset: 0x190
	// Line 1985, Address: 0x4a4318, Func Offset: 0x1b8
	// Line 1988, Address: 0x4a4328, Func Offset: 0x1c8
	// Line 1989, Address: 0x4a432c, Func Offset: 0x1cc
	// Line 1988, Address: 0x4a4330, Func Offset: 0x1d0
	// Line 1991, Address: 0x4a4334, Func Offset: 0x1d4
	// Line 1990, Address: 0x4a4338, Func Offset: 0x1d8
	// Line 1989, Address: 0x4a433c, Func Offset: 0x1dc
	// Line 1990, Address: 0x4a4340, Func Offset: 0x1e0
	// Line 2008, Address: 0x4a4344, Func Offset: 0x1e4
	// Line 1998, Address: 0x4a4348, Func Offset: 0x1e8
	// Line 1991, Address: 0x4a434c, Func Offset: 0x1ec
	// Line 1998, Address: 0x4a4350, Func Offset: 0x1f0
	// Line 2008, Address: 0x4a4354, Func Offset: 0x1f4
	// Line 2010, Address: 0x4a435c, Func Offset: 0x1fc
	// Line 2012, Address: 0x4a436c, Func Offset: 0x20c
	// Line 2015, Address: 0x4a437c, Func Offset: 0x21c
	// Line 2016, Address: 0x4a438c, Func Offset: 0x22c
	// Line 2017, Address: 0x4a4398, Func Offset: 0x238
	// Line 2018, Address: 0x4a43a8, Func Offset: 0x248
	// Line 2019, Address: 0x4a43b4, Func Offset: 0x254
	// Line 2020, Address: 0x4a43c4, Func Offset: 0x264
	// Line 2023, Address: 0x4a43d0, Func Offset: 0x270
	// Line 2024, Address: 0x4a43d4, Func Offset: 0x274
	// Line 2023, Address: 0x4a43d8, Func Offset: 0x278
	// Line 2024, Address: 0x4a43dc, Func Offset: 0x27c
	// Line 2025, Address: 0x4a43e8, Func Offset: 0x288
	// Line 2026, Address: 0x4a43f8, Func Offset: 0x298
	// Line 2027, Address: 0x4a4408, Func Offset: 0x2a8
	// Line 2030, Address: 0x4a4418, Func Offset: 0x2b8
	// Func End, Address: 0x4a4428, Func Offset: 0x2c8
}

// iSG_add_sysicons__FP19st_ISG_MEMCARD_DATA
// Start address: 0x4a4430
int32 iSG_add_sysicons(st_ISG_MEMCARD_DATA* mcdata)
{
	sceMcIconSys icsysdata;
	int8* iconname;
	// Line 1776, Address: 0x4a4430, Func Offset: 0
	// Line 1786, Address: 0x4a4444, Func Offset: 0x14
	// Line 1790, Address: 0x4a444c, Func Offset: 0x1c
	// Line 1791, Address: 0x4a445c, Func Offset: 0x2c
	// Line 1792, Address: 0x4a4478, Func Offset: 0x48
	// Line 1798, Address: 0x4a4484, Func Offset: 0x54
	// Line 1799, Address: 0x4a4494, Func Offset: 0x64
	// Line 1801, Address: 0x4a44a4, Func Offset: 0x74
	// Line 1802, Address: 0x4a44c8, Func Offset: 0x98
	// Line 1814, Address: 0x4a4508, Func Offset: 0xd8
	// Line 1815, Address: 0x4a4518, Func Offset: 0xe8
	// Line 1816, Address: 0x4a4534, Func Offset: 0x104
	// Line 1857, Address: 0x4a453c, Func Offset: 0x10c
	// Line 1791, Address: 0x4a4544, Func Offset: 0x114
	// Line 1857, Address: 0x4a4548, Func Offset: 0x118
	// Line 1791, Address: 0x4a4550, Func Offset: 0x120
	// Line 1857, Address: 0x4a4554, Func Offset: 0x124
	// Line 1815, Address: 0x4a4564, Func Offset: 0x134
	// Line 1857, Address: 0x4a4568, Func Offset: 0x138
	// Line 1815, Address: 0x4a4570, Func Offset: 0x140
	// Line 1857, Address: 0x4a4574, Func Offset: 0x144
	// Line 1821, Address: 0x4a459c, Func Offset: 0x16c
	// Line 1857, Address: 0x4a45a0, Func Offset: 0x170
	// Line 1823, Address: 0x4a45a8, Func Offset: 0x178
	// Line 1857, Address: 0x4a45ac, Func Offset: 0x17c
	// Line 1823, Address: 0x4a45d0, Func Offset: 0x1a0
	// Line 1857, Address: 0x4a45d4, Func Offset: 0x1a4
	// Line 1823, Address: 0x4a45dc, Func Offset: 0x1ac
	// Line 1857, Address: 0x4a45e0, Func Offset: 0x1b0
	// Line 1858, Address: 0x4a45f0, Func Offset: 0x1c0
	// Func End, Address: 0x4a4604, Func Offset: 0x1d4
}

// iSG_add_cfgholder__FP19st_ISG_MEMCARD_DATA
// Start address: 0x4a4610
int32 iSG_add_cfgholder(st_ISG_MEMCARD_DATA* mcdata)
{
	int8 cfgdata[992];
	int8* strptr;
	int8* cfgname;
	// Line 1726, Address: 0x4a4610, Func Offset: 0
	// Line 1731, Address: 0x4a4614, Func Offset: 0x4
	// Line 1726, Address: 0x4a4618, Func Offset: 0x8
	// Line 1731, Address: 0x4a461c, Func Offset: 0xc
	// Line 1726, Address: 0x4a4620, Func Offset: 0x10
	// Line 1731, Address: 0x4a462c, Func Offset: 0x1c
	// Line 1749, Address: 0x4a4650, Func Offset: 0x40
	// Line 1752, Address: 0x4a4660, Func Offset: 0x50
	// Line 1753, Address: 0x4a4678, Func Offset: 0x68
	// Line 1754, Address: 0x4a4688, Func Offset: 0x78
	// Line 1756, Address: 0x4a468c, Func Offset: 0x7c
	// Line 1759, Address: 0x4a4698, Func Offset: 0x88
	// Line 1762, Address: 0x4a46a8, Func Offset: 0x98
	// Line 1763, Address: 0x4a46c4, Func Offset: 0xb4
	// Line 1771, Address: 0x4a46cc, Func Offset: 0xbc
	// Line 1762, Address: 0x4a46d4, Func Offset: 0xc4
	// Line 1771, Address: 0x4a46d8, Func Offset: 0xc8
	// Line 1762, Address: 0x4a46e0, Func Offset: 0xd0
	// Line 1771, Address: 0x4a46e4, Func Offset: 0xd4
	// Line 1767, Address: 0x4a4708, Func Offset: 0xf8
	// Line 1771, Address: 0x4a470c, Func Offset: 0xfc
	// Line 1768, Address: 0x4a4714, Func Offset: 0x104
	// Line 1771, Address: 0x4a4718, Func Offset: 0x108
	// Line 1768, Address: 0x4a473c, Func Offset: 0x12c
	// Line 1771, Address: 0x4a4740, Func Offset: 0x130
	// Line 1768, Address: 0x4a4748, Func Offset: 0x138
	// Line 1771, Address: 0x4a474c, Func Offset: 0x13c
	// Line 1772, Address: 0x4a475c, Func Offset: 0x14c
	// Func End, Address: 0x4a4774, Func Offset: 0x164
}

// iSG_start_your_engines__Fv
// Start address: 0x4a4780
int32 iSG_start_your_engines()
{
	int32 result;
	int32 rc;
	// Line 1545, Address: 0x4a4780, Func Offset: 0
	// Line 1555, Address: 0x4a4784, Func Offset: 0x4
	// Line 1545, Address: 0x4a4788, Func Offset: 0x8
	// Line 1555, Address: 0x4a4794, Func Offset: 0x14
	// Line 1556, Address: 0x4a47a8, Func Offset: 0x28
	// Line 1558, Address: 0x4a47b8, Func Offset: 0x38
	// Line 1607, Address: 0x4a47c8, Func Offset: 0x48
	// Line 1608, Address: 0x4a47d0, Func Offset: 0x50
	// Line 1615, Address: 0x4a47f4, Func Offset: 0x74
	// Line 1618, Address: 0x4a47fc, Func Offset: 0x7c
	// Line 1627, Address: 0x4a4800, Func Offset: 0x80
	// Line 1628, Address: 0x4a4804, Func Offset: 0x84
	// Func End, Address: 0x4a4818, Func Offset: 0x98
}

// iSGAutoSave_Monitor__FP13st_ISGSESSIONi
// Start address: 0x4a4820
int32 iSGAutoSave_Monitor(st_ISGSESSION* isg, int32 idx_target)
{
	uint32 stat;
	// Line 1512, Address: 0x4a4820, Func Offset: 0
	// Line 1513, Address: 0x4a4830, Func Offset: 0x10
	// Line 1520, Address: 0x4a4838, Func Offset: 0x18
	// Line 1521, Address: 0x4a4840, Func Offset: 0x20
	// Line 1533, Address: 0x4a4854, Func Offset: 0x34
	// Line 1513, Address: 0x4a485c, Func Offset: 0x3c
	// Line 1533, Address: 0x4a4864, Func Offset: 0x44
	// Line 1529, Address: 0x4a4870, Func Offset: 0x50
	// Line 1533, Address: 0x4a4878, Func Offset: 0x58
	// Line 1534, Address: 0x4a4894, Func Offset: 0x74
	// Func End, Address: 0x4a48a4, Func Offset: 0x84
}

// iSGAutoSave_Disconnect__FP13st_ISGSESSION
// Start address: 0x4a48b0
void iSGAutoSave_Disconnect(st_ISGSESSION* isg)
{
	// Line 1507, Address: 0x4a48b0, Func Offset: 0
	// Func End, Address: 0x4a48bc, Func Offset: 0xc
}

// iSGAutoSave_Connect__FiPvPFPv10en_CHGCODE_v
// Start address: 0x4a48c0
st_ISGSESSION* iSGAutoSave_Connect(int32 idx_target, void* cltdata, void(*chg)(void*, en_CHGCODE))
{
	st_ISGSESSION* isg;
	// Line 1490, Address: 0x4a48c0, Func Offset: 0
	// Line 1491, Address: 0x4a48d8, Func Offset: 0x18
	// Line 1492, Address: 0x4a48ec, Func Offset: 0x2c
	// Line 1494, Address: 0x4a48f4, Func Offset: 0x34
	// Line 1497, Address: 0x4a4928, Func Offset: 0x68
	// Line 1502, Address: 0x4a4930, Func Offset: 0x70
	// Line 1498, Address: 0x4a494c, Func Offset: 0x8c
	// Line 1502, Address: 0x4a4954, Func Offset: 0x94
	// Line 1503, Address: 0x4a4964, Func Offset: 0xa4
	// Func End, Address: 0x4a497c, Func Offset: 0xbc
}

// iSGAutoSave_Startup__Fv
// Start address: 0x4a4980
void iSGAutoSave_Startup()
{
	// Line 1482, Address: 0x4a4980, Func Offset: 0
	// Func End, Address: 0x4a4988, Func Offset: 0x8
}

// iSGOpError__FP13st_ISGSESSIONPc
// Start address: 0x4a4990
en_ASYNC_OPERR iSGOpError(st_ISGSESSION* isgdata, int8* errmsg)
{
	// Line 1417, Address: 0x4a4990, Func Offset: 0
	// Line 1418, Address: 0x4a49a4, Func Offset: 0x14
	// Line 1422, Address: 0x4a49b0, Func Offset: 0x20
	// Line 1424, Address: 0x4a49d8, Func Offset: 0x48
	// Line 1425, Address: 0x4a49ec, Func Offset: 0x5c
	// Line 1427, Address: 0x4a49f4, Func Offset: 0x64
	// Line 1428, Address: 0x4a4a08, Func Offset: 0x78
	// Line 1430, Address: 0x4a4a10, Func Offset: 0x80
	// Line 1431, Address: 0x4a4a24, Func Offset: 0x94
	// Line 1433, Address: 0x4a4a2c, Func Offset: 0x9c
	// Line 1434, Address: 0x4a4a40, Func Offset: 0xb0
	// Line 1436, Address: 0x4a4a48, Func Offset: 0xb8
	// Line 1437, Address: 0x4a4a5c, Func Offset: 0xcc
	// Line 1439, Address: 0x4a4a64, Func Offset: 0xd4
	// Line 1440, Address: 0x4a4a78, Func Offset: 0xe8
	// Line 1442, Address: 0x4a4a80, Func Offset: 0xf0
	// Line 1443, Address: 0x4a4a94, Func Offset: 0x104
	// Line 1445, Address: 0x4a4a9c, Func Offset: 0x10c
	// Line 1446, Address: 0x4a4ab0, Func Offset: 0x120
	// Line 1448, Address: 0x4a4ab8, Func Offset: 0x128
	// Line 1449, Address: 0x4a4acc, Func Offset: 0x13c
	// Line 1451, Address: 0x4a4ad4, Func Offset: 0x144
	// Line 1452, Address: 0x4a4ae8, Func Offset: 0x158
	// Line 1454, Address: 0x4a4af0, Func Offset: 0x160
	// Line 1455, Address: 0x4a4b04, Func Offset: 0x174
	// Line 1457, Address: 0x4a4b0c, Func Offset: 0x17c
	// Line 1458, Address: 0x4a4b20, Func Offset: 0x190
	// Line 1460, Address: 0x4a4b28, Func Offset: 0x198
	// Line 1461, Address: 0x4a4b3c, Func Offset: 0x1ac
	// Line 1463, Address: 0x4a4b44, Func Offset: 0x1b4
	// Line 1464, Address: 0x4a4b58, Func Offset: 0x1c8
	// Line 1466, Address: 0x4a4b60, Func Offset: 0x1d0
	// Line 1470, Address: 0x4a4b74, Func Offset: 0x1e4
	// Line 1472, Address: 0x4a4b78, Func Offset: 0x1e8
	// Line 1473, Address: 0x4a4b84, Func Offset: 0x1f4
	// Func End, Address: 0x4a4b98, Func Offset: 0x208
}

// iSGPollStatus__FP13st_ISGSESSIONP15en_ASYNC_OPCODEi
// Start address: 0x4a4ba0
en_ASYNC_OPSTAT iSGPollStatus(st_ISGSESSION* isgdata, en_ASYNC_OPCODE* curop, int32 block)
{
	int32 rc;
	int32 sceResultCode;
	// Line 1331, Address: 0x4a4ba0, Func Offset: 0
	// Line 1335, Address: 0x4a4bb4, Func Offset: 0x14
	// Line 1340, Address: 0x4a4bc4, Func Offset: 0x24
	// Line 1343, Address: 0x4a4bd0, Func Offset: 0x30
	// Line 1342, Address: 0x4a4bd4, Func Offset: 0x34
	// Line 1343, Address: 0x4a4bd8, Func Offset: 0x38
	// Line 1344, Address: 0x4a4bdc, Func Offset: 0x3c
	// Line 1345, Address: 0x4a4be0, Func Offset: 0x40
	// Line 1356, Address: 0x4a4be8, Func Offset: 0x48
	// Line 1358, Address: 0x4a4bf8, Func Offset: 0x58
	// Line 1363, Address: 0x4a4c00, Func Offset: 0x60
	// Line 1364, Address: 0x4a4c08, Func Offset: 0x68
	// Line 1365, Address: 0x4a4c0c, Func Offset: 0x6c
	// Line 1367, Address: 0x4a4c3c, Func Offset: 0x9c
	// Line 1368, Address: 0x4a4c40, Func Offset: 0xa0
	// Line 1367, Address: 0x4a4c44, Func Offset: 0xa4
	// Line 1369, Address: 0x4a4c48, Func Offset: 0xa8
	// Line 1372, Address: 0x4a4c50, Func Offset: 0xb0
	// Line 1373, Address: 0x4a4c54, Func Offset: 0xb4
	// Line 1372, Address: 0x4a4c58, Func Offset: 0xb8
	// Line 1374, Address: 0x4a4c5c, Func Offset: 0xbc
	// Line 1377, Address: 0x4a4c64, Func Offset: 0xc4
	// Line 1378, Address: 0x4a4c68, Func Offset: 0xc8
	// Line 1377, Address: 0x4a4c6c, Func Offset: 0xcc
	// Line 1379, Address: 0x4a4c70, Func Offset: 0xd0
	// Line 1389, Address: 0x4a4c78, Func Offset: 0xd8
	// Line 1392, Address: 0x4a4c88, Func Offset: 0xe8
	// Line 1391, Address: 0x4a4c8c, Func Offset: 0xec
	// Line 1394, Address: 0x4a4c90, Func Offset: 0xf0
	// Line 1396, Address: 0x4a4c98, Func Offset: 0xf8
	// Line 1412, Address: 0x4a4ca0, Func Offset: 0x100
	// Line 1362, Address: 0x4a4cb0, Func Offset: 0x110
	// Line 1409, Address: 0x4a4cb8, Func Offset: 0x118
	// Line 1412, Address: 0x4a4cbc, Func Offset: 0x11c
	// Line 1409, Address: 0x4a4cec, Func Offset: 0x14c
	// Line 1412, Address: 0x4a4cf0, Func Offset: 0x150
	// Line 1409, Address: 0x4a4cf8, Func Offset: 0x158
	// Line 1412, Address: 0x4a4cfc, Func Offset: 0x15c
	// Line 1413, Address: 0x4a4d0c, Func Offset: 0x16c
	// Func End, Address: 0x4a4d24, Func Offset: 0x184
}

// iSGReadLeader__FP13st_ISGSESSIONPCcPcii
// Start address: 0x4a4d30
int32 iSGReadLeader(st_ISGSESSION* isgdata, int8* fname, int8* databuf, int32 numbytes, int32 async)
{
	int32 result;
	// Line 1222, Address: 0x4a4d30, Func Offset: 0
	// Line 1234, Address: 0x4a4d34, Func Offset: 0x4
	// Line 1222, Address: 0x4a4d38, Func Offset: 0x8
	// Line 1223, Address: 0x4a4d70, Func Offset: 0x40
	// Line 1222, Address: 0x4a4d74, Func Offset: 0x44
	// Line 1234, Address: 0x4a4d78, Func Offset: 0x48
	// Line 1223, Address: 0x4a4d7c, Func Offset: 0x4c
	// Line 1234, Address: 0x4a4d80, Func Offset: 0x50
	// Line 1236, Address: 0x4a4dc0, Func Offset: 0x90
	// Line 1245, Address: 0x4a4dc8, Func Offset: 0x98
	// Line 1234, Address: 0x4a4dd8, Func Offset: 0xa8
	// Line 1245, Address: 0x4a4ddc, Func Offset: 0xac
	// Line 1234, Address: 0x4a4de4, Func Offset: 0xb4
	// Line 1245, Address: 0x4a4de8, Func Offset: 0xb8
	// Line 1239, Address: 0x4a4dfc, Func Offset: 0xcc
	// Line 1245, Address: 0x4a4e00, Func Offset: 0xd0
	// Line 1242, Address: 0x4a4e04, Func Offset: 0xd4
	// Line 1240, Address: 0x4a4e08, Func Offset: 0xd8
	// Line 1245, Address: 0x4a4e0c, Func Offset: 0xdc
	// Line 1241, Address: 0x4a4e10, Func Offset: 0xe0
	// Line 1257, Address: 0x4a4e1c, Func Offset: 0xec
	// Line 1248, Address: 0x4a4e20, Func Offset: 0xf0
	// Line 1257, Address: 0x4a4e24, Func Offset: 0xf4
	// Line 1249, Address: 0x4a4e28, Func Offset: 0xf8
	// Line 1257, Address: 0x4a4e2c, Func Offset: 0xfc
	// Line 1250, Address: 0x4a4e30, Func Offset: 0x100
	// Line 1251, Address: 0x4a4e34, Func Offset: 0x104
	// Line 1257, Address: 0x4a4e38, Func Offset: 0x108
	// Line 1259, Address: 0x4a4e4c, Func Offset: 0x11c
	// Line 1272, Address: 0x4a4e54, Func Offset: 0x124
	// Line 1274, Address: 0x4a4e5c, Func Offset: 0x12c
	// Line 1276, Address: 0x4a4e70, Func Offset: 0x140
	// Line 1279, Address: 0x4a4e78, Func Offset: 0x148
	// Line 1280, Address: 0x4a4e7c, Func Offset: 0x14c
	// Line 1279, Address: 0x4a4e80, Func Offset: 0x150
	// Line 1282, Address: 0x4a4e84, Func Offset: 0x154
	// Line 1281, Address: 0x4a4e88, Func Offset: 0x158
	// Line 1280, Address: 0x4a4e8c, Func Offset: 0x15c
	// Line 1281, Address: 0x4a4e90, Func Offset: 0x160
	// Line 1285, Address: 0x4a4e94, Func Offset: 0x164
	// Line 1288, Address: 0x4a4ed8, Func Offset: 0x1a8
	// Line 1292, Address: 0x4a4ee0, Func Offset: 0x1b0
	// Line 1294, Address: 0x4a4f00, Func Offset: 0x1d0
	// Line 1305, Address: 0x4a4f08, Func Offset: 0x1d8
	// Line 1312, Address: 0x4a4f4c, Func Offset: 0x21c
	// Line 1257, Address: 0x4a4f58, Func Offset: 0x228
	// Line 1312, Address: 0x4a4f5c, Func Offset: 0x22c
	// Line 1257, Address: 0x4a4f64, Func Offset: 0x234
	// Line 1312, Address: 0x4a4f68, Func Offset: 0x238
	// Line 1263, Address: 0x4a4f78, Func Offset: 0x248
	// Line 1312, Address: 0x4a4f7c, Func Offset: 0x24c
	// Line 1265, Address: 0x4a4f80, Func Offset: 0x250
	// Line 1264, Address: 0x4a4f84, Func Offset: 0x254
	// Line 1312, Address: 0x4a4f88, Func Offset: 0x258
	// Line 1266, Address: 0x4a4f8c, Func Offset: 0x25c
	// Line 1274, Address: 0x4a4f94, Func Offset: 0x264
	// Line 1312, Address: 0x4a4f9c, Func Offset: 0x26c
	// Line 1292, Address: 0x4a4fc8, Func Offset: 0x298
	// Line 1312, Address: 0x4a4fd0, Func Offset: 0x2a0
	// Line 1292, Address: 0x4a4ffc, Func Offset: 0x2cc
	// Line 1312, Address: 0x4a5000, Func Offset: 0x2d0
	// Line 1292, Address: 0x4a5008, Func Offset: 0x2d8
	// Line 1312, Address: 0x4a500c, Func Offset: 0x2dc
	// Line 1300, Address: 0x4a501c, Func Offset: 0x2ec
	// Line 1312, Address: 0x4a5020, Func Offset: 0x2f0
	// Line 1302, Address: 0x4a5024, Func Offset: 0x2f4
	// Line 1301, Address: 0x4a5028, Func Offset: 0x2f8
	// Line 1312, Address: 0x4a502c, Func Offset: 0x2fc
	// Line 1313, Address: 0x4a5038, Func Offset: 0x308
	// Func End, Address: 0x4a5068, Func Offset: 0x338
}

// iSGLoadFile__FP13st_ISGSESSIONPCcPci
// Start address: 0x4a5070
int32 iSGLoadFile(st_ISGSESSION* isgdata, int8* fname, int8* databuf, int32 async)
{
	// Line 1202, Address: 0x4a5070, Func Offset: 0
	// Line 1210, Address: 0x4a509c, Func Offset: 0x2c
	// Line 1216, Address: 0x4a50c0, Func Offset: 0x50
	// Line 1217, Address: 0x4a50d4, Func Offset: 0x64
	// Line 1218, Address: 0x4a50e4, Func Offset: 0x74
	// Func End, Address: 0x4a5104, Func Offset: 0x94
}

// iSGSaveFile__FP13st_ISGSESSIONPCcPciiPc
// Start address: 0x4a5110
int32 iSGSaveFile(st_ISGSESSION* isgdata, int8* fname, int8* data, int32 n, int32 async)
{
	int32 result;
	int32 rc;
	// Line 1097, Address: 0x4a5110, Func Offset: 0
	// Line 1107, Address: 0x4a5114, Func Offset: 0x4
	// Line 1097, Address: 0x4a5118, Func Offset: 0x8
	// Line 1098, Address: 0x4a5154, Func Offset: 0x44
	// Line 1107, Address: 0x4a515c, Func Offset: 0x4c
	// Line 1109, Address: 0x4a51a0, Func Offset: 0x90
	// Line 1118, Address: 0x4a51a8, Func Offset: 0x98
	// Line 1107, Address: 0x4a51b8, Func Offset: 0xa8
	// Line 1118, Address: 0x4a51bc, Func Offset: 0xac
	// Line 1107, Address: 0x4a51c4, Func Offset: 0xb4
	// Line 1118, Address: 0x4a51c8, Func Offset: 0xb8
	// Line 1112, Address: 0x4a51dc, Func Offset: 0xcc
	// Line 1118, Address: 0x4a51e0, Func Offset: 0xd0
	// Line 1115, Address: 0x4a51e4, Func Offset: 0xd4
	// Line 1113, Address: 0x4a51e8, Func Offset: 0xd8
	// Line 1118, Address: 0x4a51ec, Func Offset: 0xdc
	// Line 1114, Address: 0x4a51f0, Func Offset: 0xe0
	// Line 1132, Address: 0x4a51fc, Func Offset: 0xec
	// Line 1122, Address: 0x4a5200, Func Offset: 0xf0
	// Line 1132, Address: 0x4a5204, Func Offset: 0xf4
	// Line 1123, Address: 0x4a5208, Func Offset: 0xf8
	// Line 1124, Address: 0x4a520c, Func Offset: 0xfc
	// Line 1125, Address: 0x4a5210, Func Offset: 0x100
	// Line 1132, Address: 0x4a5214, Func Offset: 0x104
	// Line 1134, Address: 0x4a5228, Func Offset: 0x118
	// Line 1147, Address: 0x4a5230, Func Offset: 0x120
	// Line 1153, Address: 0x4a5238, Func Offset: 0x128
	// Line 1155, Address: 0x4a5248, Func Offset: 0x138
	// Line 1158, Address: 0x4a5250, Func Offset: 0x140
	// Line 1159, Address: 0x4a5254, Func Offset: 0x144
	// Line 1158, Address: 0x4a5258, Func Offset: 0x148
	// Line 1161, Address: 0x4a525c, Func Offset: 0x14c
	// Line 1160, Address: 0x4a5260, Func Offset: 0x150
	// Line 1159, Address: 0x4a5264, Func Offset: 0x154
	// Line 1160, Address: 0x4a5268, Func Offset: 0x158
	// Line 1163, Address: 0x4a526c, Func Offset: 0x15c
	// Line 1166, Address: 0x4a52b4, Func Offset: 0x1a4
	// Line 1170, Address: 0x4a52bc, Func Offset: 0x1ac
	// Line 1172, Address: 0x4a52dc, Func Offset: 0x1cc
	// Line 1186, Address: 0x4a52e4, Func Offset: 0x1d4
	// Line 1185, Address: 0x4a52e8, Func Offset: 0x1d8
	// Line 1188, Address: 0x4a52ec, Func Offset: 0x1dc
	// Line 1187, Address: 0x4a52f0, Func Offset: 0x1e0
	// Line 1186, Address: 0x4a52f4, Func Offset: 0x1e4
	// Line 1187, Address: 0x4a52f8, Func Offset: 0x1e8
	// Line 1195, Address: 0x4a52fc, Func Offset: 0x1ec
	// Line 1132, Address: 0x4a5308, Func Offset: 0x1f8
	// Line 1195, Address: 0x4a530c, Func Offset: 0x1fc
	// Line 1132, Address: 0x4a5314, Func Offset: 0x204
	// Line 1195, Address: 0x4a5318, Func Offset: 0x208
	// Line 1138, Address: 0x4a5328, Func Offset: 0x218
	// Line 1195, Address: 0x4a532c, Func Offset: 0x21c
	// Line 1140, Address: 0x4a5330, Func Offset: 0x220
	// Line 1139, Address: 0x4a5334, Func Offset: 0x224
	// Line 1195, Address: 0x4a5338, Func Offset: 0x228
	// Line 1141, Address: 0x4a533c, Func Offset: 0x22c
	// Line 1170, Address: 0x4a5344, Func Offset: 0x234
	// Line 1195, Address: 0x4a5348, Func Offset: 0x238
	// Line 1170, Address: 0x4a5350, Func Offset: 0x240
	// Line 1195, Address: 0x4a5354, Func Offset: 0x244
	// Line 1175, Address: 0x4a5368, Func Offset: 0x258
	// Line 1195, Address: 0x4a536c, Func Offset: 0x25c
	// Line 1175, Address: 0x4a5390, Func Offset: 0x280
	// Line 1195, Address: 0x4a5394, Func Offset: 0x284
	// Line 1175, Address: 0x4a539c, Func Offset: 0x28c
	// Line 1195, Address: 0x4a53a0, Func Offset: 0x290
	// Line 1179, Address: 0x4a53ac, Func Offset: 0x29c
	// Line 1195, Address: 0x4a53b8, Func Offset: 0x2a8
	// Line 1179, Address: 0x4a53c8, Func Offset: 0x2b8
	// Line 1195, Address: 0x4a53d0, Func Offset: 0x2c0
	// Line 1179, Address: 0x4a53d4, Func Offset: 0x2c4
	// Line 1195, Address: 0x4a53d8, Func Offset: 0x2c8
	// Line 1179, Address: 0x4a53e0, Func Offset: 0x2d0
	// Line 1195, Address: 0x4a53e4, Func Offset: 0x2d4
	// Line 1182, Address: 0x4a53ec, Func Offset: 0x2dc
	// Line 1196, Address: 0x4a53f4, Func Offset: 0x2e4
	// Func End, Address: 0x4a5424, Func Offset: 0x314
}

// iSGSetupGameDir__FP13st_ISGSESSIONPCci
// Start address: 0x4a5430
int32 iSGSetupGameDir(st_ISGSESSION* isgdata, int8* dname, int32 force_iconfix)
{
	int32 result;
	int32 rc;
	st_ISG_MEMCARD_DATA* mcdata;
	int32 dir_isnew;
	int8* strptr;
	// Line 955, Address: 0x4a5430, Func Offset: 0
	// Line 956, Address: 0x4a5454, Func Offset: 0x24
	// Line 955, Address: 0x4a5458, Func Offset: 0x28
	// Line 959, Address: 0x4a545c, Func Offset: 0x2c
	// Line 960, Address: 0x4a5460, Func Offset: 0x30
	// Line 968, Address: 0x4a5464, Func Offset: 0x34
	// Line 969, Address: 0x4a546c, Func Offset: 0x3c
	// Line 974, Address: 0x4a5484, Func Offset: 0x54
	// Line 975, Address: 0x4a5494, Func Offset: 0x64
	// Line 987, Address: 0x4a549c, Func Offset: 0x6c
	// Line 996, Address: 0x4a54a4, Func Offset: 0x74
	// Line 1005, Address: 0x4a54ac, Func Offset: 0x7c
	// Line 1014, Address: 0x4a54bc, Func Offset: 0x8c
	// Line 1015, Address: 0x4a54c8, Func Offset: 0x98
	// Line 1016, Address: 0x4a54dc, Func Offset: 0xac
	// Line 1017, Address: 0x4a54ec, Func Offset: 0xbc
	// Line 1025, Address: 0x4a5500, Func Offset: 0xd0
	// Line 1026, Address: 0x4a5510, Func Offset: 0xe0
	// Line 1030, Address: 0x4a5524, Func Offset: 0xf4
	// Line 1047, Address: 0x4a5530, Func Offset: 0x100
	// Line 1056, Address: 0x4a5534, Func Offset: 0x104
	// Line 1058, Address: 0x4a553c, Func Offset: 0x10c
	// Line 1061, Address: 0x4a5540, Func Offset: 0x110
	// Line 1066, Address: 0x4a5548, Func Offset: 0x118
	// Line 1072, Address: 0x4a5550, Func Offset: 0x120
	// Line 1073, Address: 0x4a555c, Func Offset: 0x12c
	// Line 1074, Address: 0x4a556c, Func Offset: 0x13c
	// Line 1075, Address: 0x4a5574, Func Offset: 0x144
	// Line 1076, Address: 0x4a557c, Func Offset: 0x14c
	// Line 1080, Address: 0x4a5588, Func Offset: 0x158
	// Line 1081, Address: 0x4a5594, Func Offset: 0x164
	// Line 1089, Address: 0x4a55a0, Func Offset: 0x170
	// Line 982, Address: 0x4a55b0, Func Offset: 0x180
	// Line 1089, Address: 0x4a55b4, Func Offset: 0x184
	// Line 978, Address: 0x4a55b8, Func Offset: 0x188
	// Line 1089, Address: 0x4a55bc, Func Offset: 0x18c
	// Line 982, Address: 0x4a55c0, Func Offset: 0x190
	// Line 1089, Address: 0x4a55c4, Func Offset: 0x194
	// Line 982, Address: 0x4a55c8, Func Offset: 0x198
	// Line 1089, Address: 0x4a55d0, Func Offset: 0x1a0
	// Line 982, Address: 0x4a55ec, Func Offset: 0x1bc
	// Line 1089, Address: 0x4a55f0, Func Offset: 0x1c0
	// Line 982, Address: 0x4a5608, Func Offset: 0x1d8
	// Line 1089, Address: 0x4a560c, Func Offset: 0x1dc
	// Line 982, Address: 0x4a5614, Func Offset: 0x1e4
	// Line 1089, Address: 0x4a5618, Func Offset: 0x1e8
	// Line 991, Address: 0x4a562c, Func Offset: 0x1fc
	// Line 1089, Address: 0x4a5630, Func Offset: 0x200
	// Line 991, Address: 0x4a5634, Func Offset: 0x204
	// Line 1089, Address: 0x4a5638, Func Offset: 0x208
	// Line 991, Address: 0x4a563c, Func Offset: 0x20c
	// Line 1089, Address: 0x4a5640, Func Offset: 0x210
	// Line 991, Address: 0x4a5660, Func Offset: 0x230
	// Line 1089, Address: 0x4a5664, Func Offset: 0x234
	// Line 991, Address: 0x4a567c, Func Offset: 0x24c
	// Line 1089, Address: 0x4a5680, Func Offset: 0x250
	// Line 991, Address: 0x4a5688, Func Offset: 0x258
	// Line 1089, Address: 0x4a568c, Func Offset: 0x25c
	// Line 1001, Address: 0x4a56a0, Func Offset: 0x270
	// Line 1089, Address: 0x4a56a4, Func Offset: 0x274
	// Line 1001, Address: 0x4a56a8, Func Offset: 0x278
	// Line 1089, Address: 0x4a56ac, Func Offset: 0x27c
	// Line 1001, Address: 0x4a56b0, Func Offset: 0x280
	// Line 1089, Address: 0x4a56b4, Func Offset: 0x284
	// Line 1001, Address: 0x4a56b8, Func Offset: 0x288
	// Line 1089, Address: 0x4a56bc, Func Offset: 0x28c
	// Line 1001, Address: 0x4a56d8, Func Offset: 0x2a8
	// Line 1089, Address: 0x4a56dc, Func Offset: 0x2ac
	// Line 1001, Address: 0x4a56f4, Func Offset: 0x2c4
	// Line 1089, Address: 0x4a56f8, Func Offset: 0x2c8
	// Line 1001, Address: 0x4a5700, Func Offset: 0x2d0
	// Line 1089, Address: 0x4a5704, Func Offset: 0x2d4
	// Line 1090, Address: 0x4a5714, Func Offset: 0x2e4
	// Func End, Address: 0x4a5734, Func Offset: 0x304
}

// iSGSelectGameDir__FP13st_ISGSESSIONPCc
// Start address: 0x4a5740
int32 iSGSelectGameDir(st_ISGSESSION* isgdata, int8* dname)
{
	// Line 926, Address: 0x4a5740, Func Offset: 0
	// Line 937, Address: 0x4a5744, Func Offset: 0x4
	// Line 926, Address: 0x4a5748, Func Offset: 0x8
	// Line 937, Address: 0x4a574c, Func Offset: 0xc
	// Line 926, Address: 0x4a5750, Func Offset: 0x10
	// Line 937, Address: 0x4a5760, Func Offset: 0x20
	// Line 938, Address: 0x4a5768, Func Offset: 0x28
	// Line 939, Address: 0x4a5778, Func Offset: 0x38
	// Line 940, Address: 0x4a5780, Func Offset: 0x40
	// Line 941, Address: 0x4a5794, Func Offset: 0x54
	// Line 943, Address: 0x4a5798, Func Offset: 0x58
	// Line 941, Address: 0x4a57a8, Func Offset: 0x68
	// Line 943, Address: 0x4a57b0, Func Offset: 0x70
	// Line 945, Address: 0x4a57e8, Func Offset: 0xa8
	// Line 943, Address: 0x4a57f0, Func Offset: 0xb0
	// Line 945, Address: 0x4a57f4, Func Offset: 0xb4
	// Line 943, Address: 0x4a57fc, Func Offset: 0xbc
	// Line 945, Address: 0x4a5800, Func Offset: 0xc0
	// Line 946, Address: 0x4a5810, Func Offset: 0xd0
	// Func End, Address: 0x4a5828, Func Offset: 0xe8
}

// iSGFileModDate__FP13st_ISGSESSIONPCcPiPiPiPiPiPi
// Start address: 0x4a5830
int8* iSGFileModDate(st_ISGSESSION* isgdata, int8* fname, int32* sec, int32* min, int32* hr, int32* mon, int32* day, int32* yr)
{
	int32 rc;
	sceMcTblGetDir* finf;
	sceCdCLOCK clock;
	int8 datestr[64];
	// Line 868, Address: 0x4a5830, Func Offset: 0
	// Line 875, Address: 0x4a5834, Func Offset: 0x4
	// Line 868, Address: 0x4a5838, Func Offset: 0x8
	// Line 871, Address: 0x4a5858, Func Offset: 0x28
	// Line 875, Address: 0x4a585c, Func Offset: 0x2c
	// Line 877, Address: 0x4a5860, Func Offset: 0x30
	// Line 879, Address: 0x4a586c, Func Offset: 0x3c
	// Line 884, Address: 0x4a587c, Func Offset: 0x4c
	// Line 885, Address: 0x4a588c, Func Offset: 0x5c
	// Line 886, Address: 0x4a589c, Func Offset: 0x6c
	// Line 887, Address: 0x4a58ac, Func Offset: 0x7c
	// Line 888, Address: 0x4a58bc, Func Offset: 0x8c
	// Line 889, Address: 0x4a58cc, Func Offset: 0x9c
	// Line 891, Address: 0x4a58dc, Func Offset: 0xac
	// Line 893, Address: 0x4a58e4, Func Offset: 0xb4
	// Line 894, Address: 0x4a58f0, Func Offset: 0xc0
	// Line 895, Address: 0x4a58fc, Func Offset: 0xcc
	// Line 896, Address: 0x4a5908, Func Offset: 0xd8
	// Line 897, Address: 0x4a5914, Func Offset: 0xe4
	// Line 898, Address: 0x4a5920, Func Offset: 0xf0
	// Line 908, Address: 0x4a592c, Func Offset: 0xfc
	// Line 898, Address: 0x4a5930, Func Offset: 0x100
	// Line 908, Address: 0x4a5934, Func Offset: 0x104
	// Line 913, Address: 0x4a595c, Func Offset: 0x12c
	// Line 914, Address: 0x4a5964, Func Offset: 0x134
	// Func End, Address: 0x4a598c, Func Offset: 0x15c
}

// iSGFileModDate__FP13st_ISGSESSIONPCc
// Start address: 0x4a5990
int8* iSGFileModDate(st_ISGSESSION* isgdata, int8* fname)
{
	int8* date_str;
	// Line 843, Address: 0x4a5990, Func Offset: 0
	// Func End, Address: 0x4a59ac, Func Offset: 0x1c
}

// iSGFileSize__FP13st_ISGSESSIONPCc
// Start address: 0x4a59b0
int32 iSGFileSize(st_ISGSESSION* isgdata, int8* fname)
{
	int32 size;
	// Line 789, Address: 0x4a59b0, Func Offset: 0
	// Line 794, Address: 0x4a59bc, Func Offset: 0xc
	// Line 796, Address: 0x4a59e0, Func Offset: 0x30
	// Line 797, Address: 0x4a59e8, Func Offset: 0x38
	// Line 798, Address: 0x4a59f8, Func Offset: 0x48
	// Func End, Address: 0x4a5a04, Func Offset: 0x54
}

// iSGGameExists__FP13st_ISGSESSIONPCc
// Start address: 0x4a5a10
uint8 iSGGameExists(st_ISGSESSION* isgdata, int8* fname)
{
	int32 rc;
	int8 str_buf[64];
	int32 len;
	int32 numfound;
	st_ISG_MEMCARD_DATA* mcdata;
	int8* path;
	// Line 708, Address: 0x4a5a10, Func Offset: 0
	// Line 711, Address: 0x4a5a14, Func Offset: 0x4
	// Line 708, Address: 0x4a5a18, Func Offset: 0x8
	// Line 711, Address: 0x4a5a1c, Func Offset: 0xc
	// Line 708, Address: 0x4a5a20, Func Offset: 0x10
	// Line 711, Address: 0x4a5a2c, Func Offset: 0x1c
	// Line 713, Address: 0x4a5a50, Func Offset: 0x40
	// Line 723, Address: 0x4a5a54, Func Offset: 0x44
	// Line 715, Address: 0x4a5a58, Func Offset: 0x48
	// Line 716, Address: 0x4a5a5c, Func Offset: 0x4c
	// Line 726, Address: 0x4a5a60, Func Offset: 0x50
	// Line 728, Address: 0x4a5a88, Func Offset: 0x78
	// Line 729, Address: 0x4a5a98, Func Offset: 0x88
	// Line 735, Address: 0x4a5ab0, Func Offset: 0xa0
	// Line 742, Address: 0x4a5ac8, Func Offset: 0xb8
	// Line 744, Address: 0x4a5ae4, Func Offset: 0xd4
	// Line 745, Address: 0x4a5af0, Func Offset: 0xe0
	// Line 765, Address: 0x4a5af8, Func Offset: 0xe8
	// Line 731, Address: 0x4a5b00, Func Offset: 0xf0
	// Line 765, Address: 0x4a5b08, Func Offset: 0xf8
	// Line 732, Address: 0x4a5b14, Func Offset: 0x104
	// Line 765, Address: 0x4a5b1c, Func Offset: 0x10c
	// Line 738, Address: 0x4a5b30, Func Offset: 0x120
	// Line 765, Address: 0x4a5b34, Func Offset: 0x124
	// Line 738, Address: 0x4a5b3c, Func Offset: 0x12c
	// Line 765, Address: 0x4a5b44, Func Offset: 0x134
	// Line 751, Address: 0x4a5b58, Func Offset: 0x148
	// Line 765, Address: 0x4a5b5c, Func Offset: 0x14c
	// Line 753, Address: 0x4a5b64, Func Offset: 0x154
	// Line 765, Address: 0x4a5b68, Func Offset: 0x158
	// Line 766, Address: 0x4a5b7c, Func Offset: 0x16c
	// Func End, Address: 0x4a5b94, Func Offset: 0x184
}

// iSGTgtHaveRoomStartup__FP13st_ISGSESSIONiiPCcPCcPiPiPi
// Start address: 0x4a5ba0
int32 iSGTgtHaveRoomStartup(st_ISGSESSION* isgdata, int32 tidx, int32 fsize, int8* dpath, int8* fname, int32* bytesNeeded, int32* availOnDisk)
{
	int32 result;
	// Line 665, Address: 0x4a5ba0, Func Offset: 0
	// Func End, Address: 0x4a5ba8, Func Offset: 0x8
}

// iSGTgtHaveRoom__FP13st_ISGSESSIONiiPCcPCcPiPiPi
// Start address: 0x4a5bb0
int32 iSGTgtHaveRoom(st_ISGSESSION* isgdata, int32 tidx, int32 fsize, int8* dpath, int8* fname, int32* bytesNeeded, int32* availOnDisk)
{
	int32 result;
	int32 i;
	int8* gameName;
	// Line 635, Address: 0x4a5bb0, Func Offset: 0
	// Line 639, Address: 0x4a5bf0, Func Offset: 0x40
	// Line 654, Address: 0x4a5bf8, Func Offset: 0x48
	// Line 656, Address: 0x4a5c18, Func Offset: 0x68
	// Line 641, Address: 0x4a5c20, Func Offset: 0x70
	// Line 644, Address: 0x4a5c24, Func Offset: 0x74
	// Line 656, Address: 0x4a5c2c, Func Offset: 0x7c
	// Line 645, Address: 0x4a5c34, Func Offset: 0x84
	// Line 656, Address: 0x4a5c38, Func Offset: 0x88
	// Line 648, Address: 0x4a5c54, Func Offset: 0xa4
	// Line 656, Address: 0x4a5c68, Func Offset: 0xb8
	// Line 650, Address: 0x4a5c70, Func Offset: 0xc0
	// Line 656, Address: 0x4a5c78, Func Offset: 0xc8
	// Line 657, Address: 0x4a5c90, Func Offset: 0xe0
	// Func End, Address: 0x4a5cbc, Func Offset: 0x10c
}

// iSGTgtSetActive__FP13st_ISGSESSIONi
// Start address: 0x4a5cc0
int32 iSGTgtSetActive(st_ISGSESSION* isgdata, int32 tgtidx)
{
	// Line 614, Address: 0x4a5cc0, Func Offset: 0
	// Line 618, Address: 0x4a5cc4, Func Offset: 0x4
	// Line 614, Address: 0x4a5cc8, Func Offset: 0x8
	// Line 618, Address: 0x4a5ccc, Func Offset: 0xc
	// Line 614, Address: 0x4a5cd0, Func Offset: 0x10
	// Line 618, Address: 0x4a5cd8, Func Offset: 0x18
	// Line 620, Address: 0x4a5d04, Func Offset: 0x44
	// Line 621, Address: 0x4a5d20, Func Offset: 0x60
	// Func End, Address: 0x4a5d34, Func Offset: 0x74
}

// iSGTgtState__FP13st_ISGSESSIONiPCc
// Start address: 0x4a5d40
uint32 iSGTgtState(st_ISGSESSION* isgdata, int32 tgtidx, int8* dpath)
{
	uint32 state;
	int32 rc;
	// Line 573, Address: 0x4a5d40, Func Offset: 0
	// Line 574, Address: 0x4a5d50, Func Offset: 0x10
	// Line 573, Address: 0x4a5d54, Func Offset: 0x14
	// Line 581, Address: 0x4a5d64, Func Offset: 0x24
	// Line 582, Address: 0x4a5d70, Func Offset: 0x30
	// Line 583, Address: 0x4a5d78, Func Offset: 0x38
	// Line 585, Address: 0x4a5d80, Func Offset: 0x40
	// Line 586, Address: 0x4a5d8c, Func Offset: 0x4c
	// Line 587, Address: 0x4a5d94, Func Offset: 0x54
	// Line 590, Address: 0x4a5d9c, Func Offset: 0x5c
	// Line 591, Address: 0x4a5da8, Func Offset: 0x68
	// Line 594, Address: 0x4a5db0, Func Offset: 0x70
	// Line 595, Address: 0x4a5db8, Func Offset: 0x78
	// Line 596, Address: 0x4a5e04, Func Offset: 0xc4
	// Line 599, Address: 0x4a5e10, Func Offset: 0xd0
	// Line 592, Address: 0x4a5e1c, Func Offset: 0xdc
	// Line 595, Address: 0x4a5e24, Func Offset: 0xe4
	// Line 599, Address: 0x4a5e28, Func Offset: 0xe8
	// Line 595, Address: 0x4a5e30, Func Offset: 0xf0
	// Line 599, Address: 0x4a5e34, Func Offset: 0xf4
	// Line 600, Address: 0x4a5e44, Func Offset: 0x104
	// Func End, Address: 0x4a5e60, Func Offset: 0x120
}

// iSGTgtFormat__FP13st_ISGSESSIONiiPi
// Start address: 0x4a5e60
int32 iSGTgtFormat(st_ISGSESSION* isgdata, int32 tgtidx, int32 async)
{
	int32 result;
	int32 rc;
	// Line 528, Address: 0x4a5e60, Func Offset: 0
	// Line 532, Address: 0x4a5e84, Func Offset: 0x24
	// Line 534, Address: 0x4a5e90, Func Offset: 0x30
	// Line 537, Address: 0x4a5e9c, Func Offset: 0x3c
	// Line 538, Address: 0x4a5ea8, Func Offset: 0x48
	// Line 544, Address: 0x4a5eb0, Func Offset: 0x50
	// Line 548, Address: 0x4a5eb8, Func Offset: 0x58
	// Line 550, Address: 0x4a5ec0, Func Offset: 0x60
	// Line 551, Address: 0x4a5ecc, Func Offset: 0x6c
	// Line 552, Address: 0x4a5ed4, Func Offset: 0x74
	// Line 553, Address: 0x4a5ed8, Func Offset: 0x78
	// Line 552, Address: 0x4a5edc, Func Offset: 0x7c
	// Line 555, Address: 0x4a5ee0, Func Offset: 0x80
	// Line 554, Address: 0x4a5ee4, Func Offset: 0x84
	// Line 553, Address: 0x4a5ee8, Func Offset: 0x88
	// Line 556, Address: 0x4a5eec, Func Offset: 0x8c
	// Line 559, Address: 0x4a5ef4, Func Offset: 0x94
	// Line 560, Address: 0x4a5ef8, Func Offset: 0x98
	// Line 561, Address: 0x4a5efc, Func Offset: 0x9c
	// Line 566, Address: 0x4a5f00, Func Offset: 0xa0
	// Line 540, Address: 0x4a5f14, Func Offset: 0xb4
	// Line 566, Address: 0x4a5f1c, Func Offset: 0xbc
	// Line 543, Address: 0x4a5f34, Func Offset: 0xd4
	// Line 540, Address: 0x4a5f3c, Func Offset: 0xdc
	// Line 566, Address: 0x4a5f40, Func Offset: 0xe0
	// Line 540, Address: 0x4a5f48, Func Offset: 0xe8
	// Line 566, Address: 0x4a5f4c, Func Offset: 0xec
	// Line 567, Address: 0x4a5f5c, Func Offset: 0xfc
	// Func End, Address: 0x4a5f78, Func Offset: 0x118
}

// iSGTgtPhysSlotIdx__FP13st_ISGSESSIONi
// Start address: 0x4a5f80
int32 iSGTgtPhysSlotIdx()
{
	int32 concnt[2];
	int32 dp;
	int32 ds;
	// Line 465, Address: 0x4a5f80, Func Offset: 0
	// Line 467, Address: 0x4a5f84, Func Offset: 0x4
	// Line 473, Address: 0x4a5fb0, Func Offset: 0x30
	// Line 482, Address: 0x4a5fc4, Func Offset: 0x44
	// Line 483, Address: 0x4a5fc8, Func Offset: 0x48
	// Func End, Address: 0x4a5fd4, Func Offset: 0x54
}

// iSGTgtCount__FP13st_ISGSESSIONPi
// Start address: 0x4a5fe0
int32 iSGTgtCount(int32* max)
{
	int32 rc;
	int32 tgtmax;
	int32 concnt[2];
	int32 dp;
	int32 ds;
	// Line 435, Address: 0x4a5fe0, Func Offset: 0
	// Line 438, Address: 0x4a5fe4, Func Offset: 0x4
	// Line 435, Address: 0x4a5fe8, Func Offset: 0x8
	// Line 438, Address: 0x4a5fec, Func Offset: 0xc
	// Line 435, Address: 0x4a5ff0, Func Offset: 0x10
	// Line 438, Address: 0x4a5ff8, Func Offset: 0x18
	// Line 443, Address: 0x4a601c, Func Offset: 0x3c
	// Line 446, Address: 0x4a6030, Func Offset: 0x50
	// Line 450, Address: 0x4a603c, Func Offset: 0x5c
	// Line 452, Address: 0x4a6044, Func Offset: 0x64
	// Line 454, Address: 0x4a6050, Func Offset: 0x70
	// Line 458, Address: 0x4a605c, Func Offset: 0x7c
	// Line 459, Address: 0x4a6064, Func Offset: 0x84
	// Line 458, Address: 0x4a6070, Func Offset: 0x90
	// Line 459, Address: 0x4a6074, Func Offset: 0x94
	// Func End, Address: 0x4a607c, Func Offset: 0x9c
}

// iSGSessionEnd__FP13st_ISGSESSION
// Start address: 0x4a6080
void iSGSessionEnd(st_ISGSESSION* isgdata)
{
	// Line 411, Address: 0x4a6080, Func Offset: 0
	// Func End, Address: 0x4a608c, Func Offset: 0xc
}

// iSGSessionBegin__FPvPFPv10en_CHGCODE_vi
// Start address: 0x4a6090
st_ISGSESSION* iSGSessionBegin(void* cltdata, void(*chgfunc)(void*, en_CHGCODE), int32 monitor)
{
	st_ISGSESSION* isgdata;
	// Line 365, Address: 0x4a6090, Func Offset: 0
	// Line 369, Address: 0x4a60b0, Func Offset: 0x20
	// Line 373, Address: 0x4a60cc, Func Offset: 0x3c
	// Line 376, Address: 0x4a60dc, Func Offset: 0x4c
	// Line 377, Address: 0x4a60f4, Func Offset: 0x64
	// Line 379, Address: 0x4a60fc, Func Offset: 0x6c
	// Line 380, Address: 0x4a6100, Func Offset: 0x70
	// Line 389, Address: 0x4a6108, Func Offset: 0x78
	// Line 381, Address: 0x4a610c, Func Offset: 0x7c
	// Line 389, Address: 0x4a6110, Func Offset: 0x80
	// Line 383, Address: 0x4a6114, Func Offset: 0x84
	// Line 389, Address: 0x4a6118, Func Offset: 0x88
	// Line 386, Address: 0x4a611c, Func Offset: 0x8c
	// Line 389, Address: 0x4a6120, Func Offset: 0x90
	// Line 394, Address: 0x4a6128, Func Offset: 0x98
	// Line 403, Address: 0x4a6130, Func Offset: 0xa0
	// Line 394, Address: 0x4a6134, Func Offset: 0xa4
	// Line 395, Address: 0x4a6138, Func Offset: 0xa8
	// Line 396, Address: 0x4a6140, Func Offset: 0xb0
	// Line 397, Address: 0x4a6148, Func Offset: 0xb8
	// Line 398, Address: 0x4a6150, Func Offset: 0xc0
	// Line 399, Address: 0x4a6158, Func Offset: 0xc8
	// Line 404, Address: 0x4a6160, Func Offset: 0xd0
	// Func End, Address: 0x4a617c, Func Offset: 0xec
}

// iSGMakeName__F15en_NAMEGEN_TYPEPCci
// Start address: 0x4a6180
int8* iSGMakeName(en_NAMEGEN_TYPE type, int8* base, int32 idx)
{
	int8* use_buf;
	int8* fmt_sb;
	int8* fmt_sd;
	int8* fmt_sbd;
	int32 rotate;
	int8 rotatebuf[32][8];
	// Line 264, Address: 0x4a6180, Func Offset: 0
	// Line 275, Address: 0x4a6184, Func Offset: 0x4
	// Line 264, Address: 0x4a6188, Func Offset: 0x8
	// Line 276, Address: 0x4a618c, Func Offset: 0xc
	// Line 264, Address: 0x4a6190, Func Offset: 0x10
	// Line 275, Address: 0x4a61a8, Func Offset: 0x28
	// Line 264, Address: 0x4a61ac, Func Offset: 0x2c
	// Line 275, Address: 0x4a61b0, Func Offset: 0x30
	// Line 268, Address: 0x4a61b4, Func Offset: 0x34
	// Line 269, Address: 0x4a61b8, Func Offset: 0x38
	// Line 270, Address: 0x4a61bc, Func Offset: 0x3c
	// Line 275, Address: 0x4a61c0, Func Offset: 0x40
	// Line 268, Address: 0x4a61c8, Func Offset: 0x48
	// Line 269, Address: 0x4a61cc, Func Offset: 0x4c
	// Line 270, Address: 0x4a61d0, Func Offset: 0x50
	// Line 275, Address: 0x4a61d4, Func Offset: 0x54
	// Line 276, Address: 0x4a61d8, Func Offset: 0x58
	// Line 292, Address: 0x4a61e0, Func Offset: 0x60
	// Line 295, Address: 0x4a6210, Func Offset: 0x90
	// Line 311, Address: 0x4a6234, Func Offset: 0xb4
	// Line 313, Address: 0x4a624c, Func Offset: 0xcc
	// Line 315, Address: 0x4a6254, Func Offset: 0xd4
	// Line 329, Address: 0x4a6278, Func Offset: 0xf8
	// Line 333, Address: 0x4a6280, Func Offset: 0x100
	// Line 335, Address: 0x4a6288, Func Offset: 0x108
	// Line 336, Address: 0x4a6298, Func Offset: 0x118
	// Line 353, Address: 0x4a62a8, Func Offset: 0x128
	// Line 296, Address: 0x4a62c0, Func Offset: 0x140
	// Line 353, Address: 0x4a62c4, Func Offset: 0x144
	// Line 297, Address: 0x4a62cc, Func Offset: 0x14c
	// Line 311, Address: 0x4a62d4, Func Offset: 0x154
	// Line 353, Address: 0x4a62dc, Func Offset: 0x15c
	// Line 311, Address: 0x4a62e4, Func Offset: 0x164
	// Line 353, Address: 0x4a62e8, Func Offset: 0x168
	// Line 311, Address: 0x4a62f0, Func Offset: 0x170
	// Line 353, Address: 0x4a62f4, Func Offset: 0x174
	// Line 311, Address: 0x4a62fc, Func Offset: 0x17c
	// Line 353, Address: 0x4a6300, Func Offset: 0x180
	// Line 311, Address: 0x4a6308, Func Offset: 0x188
	// Line 353, Address: 0x4a630c, Func Offset: 0x18c
	// Line 311, Address: 0x4a6314, Func Offset: 0x194
	// Line 353, Address: 0x4a6318, Func Offset: 0x198
	// Line 311, Address: 0x4a6328, Func Offset: 0x1a8
	// Line 316, Address: 0x4a6358, Func Offset: 0x1d8
	// Line 353, Address: 0x4a635c, Func Offset: 0x1dc
	// Line 317, Address: 0x4a6364, Func Offset: 0x1e4
	// Line 353, Address: 0x4a636c, Func Offset: 0x1ec
	// Line 320, Address: 0x4a6378, Func Offset: 0x1f8
	// Line 353, Address: 0x4a6384, Func Offset: 0x204
	// Line 322, Address: 0x4a638c, Func Offset: 0x20c
	// Line 323, Address: 0x4a6394, Func Offset: 0x214
	// Line 353, Address: 0x4a639c, Func Offset: 0x21c
	// Line 325, Address: 0x4a63a4, Func Offset: 0x224
	// Line 353, Address: 0x4a63ac, Func Offset: 0x22c
	// Line 330, Address: 0x4a63b0, Func Offset: 0x230
	// Line 353, Address: 0x4a63b4, Func Offset: 0x234
	// Line 332, Address: 0x4a63c0, Func Offset: 0x240
	// Line 340, Address: 0x4a63c8, Func Offset: 0x248
	// Line 353, Address: 0x4a63d0, Func Offset: 0x250
	// Line 341, Address: 0x4a63dc, Func Offset: 0x25c
	// Line 353, Address: 0x4a63e0, Func Offset: 0x260
	// Line 354, Address: 0x4a63f0, Func Offset: 0x270
	// Func End, Address: 0x4a640c, Func Offset: 0x28c
}

// iSGShutdown__Fv
// Start address: 0x4a6410
int32 iSGShutdown()
{
	// Line 169, Address: 0x4a6410, Func Offset: 0
	// Line 181, Address: 0x4a6418, Func Offset: 0x8
	// Func End, Address: 0x4a6420, Func Offset: 0x10
}

// iSGStartup__Fv
// Start address: 0x4a6420
int32 iSGStartup()
{
	// Line 110, Address: 0x4a6420, Func Offset: 0
	// Line 116, Address: 0x4a6428, Func Offset: 0x8
	// Line 161, Address: 0x4a6438, Func Offset: 0x18
	// Line 162, Address: 0x4a6450, Func Offset: 0x30
	// Func End, Address: 0x4a645c, Func Offset: 0x3c
}

