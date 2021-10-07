typedef struct st_ISG_MEMCARD_DATA;
typedef struct st_ISGSESSION;
typedef struct sceMcIconSys;
typedef struct sceMcTblGetDir;
typedef enum en_ISGMCA_STATUS;
typedef enum en_CHGCODE;
typedef enum en_ISG_IOMODE;
typedef struct st_ISGTHUMDATA;
typedef enum en_MEMCARD_SEEKPT;
typedef struct sceMcStDateTime;
typedef enum en_NAMEGEN_TYPE;
typedef struct sceCdCLOCK;
typedef enum en_ASYNC_OPCODE;
typedef enum en_ASYNC_OPSTAT;
typedef enum en_ASYNC_OPERR;
typedef enum en_ISGMC_ERRSTATUS;


typedef int32 type_0[4];
typedef int8 type_1[64];
typedef float32 type_2[4];
typedef float32 type_3[4][3];
typedef int32 type_4[2];
typedef uint8 type_5[4];
typedef int8 type_6[32];
typedef int8 type_7[32][8];
typedef float32 type_8[4][3];
typedef int8 type_9[64];
typedef int32 type_10[4][4];
typedef float32 type_11[4][3];
typedef int8* type_12[8];
typedef float32 type_13[4][3];
typedef int8 type_14[992];
typedef uint8 type_15[68];
typedef uint8 type_16[64];
typedef uint8 type_17[64];
typedef uint8 type_18[64];
typedef uint8 type_19[512];
typedef int8 type_20[93814];
typedef uint8 type_21[68];
typedef int8 type_22[64];
typedef int8 type_23[32];
typedef int8 type_24[32];
typedef int32 type_25[2];
typedef int8 type_26[64];
typedef int8* type_27[3];
typedef int8 type_28[64];
typedef int8 type_29[64];
typedef int8 type_30[32];
typedef int8 type_31[32];
typedef int8 type_32[64];
typedef uint8 type_33[32];
typedef int32 type_34[4][4];

struct st_ISG_MEMCARD_DATA
{
	int32 mcport;
	int32 mcslot;
	int32 mcfp;
	en_ISG_IOMODE fmode;
	int8 gamepath[64];
	sceMcTblGetDir finfo;
	int32 cur_mcop;
	en_ISGMC_ERRSTATUS mcerr;
	int32 allow_cache;
};

struct st_ISGSESSION
{
	st_ISG_MEMCARD_DATA* mcdata;
	int8 gameroot[64];
	int8 gamedir[64];
	en_ASYNC_OPCODE as_curop;
	en_ASYNC_OPSTAT as_opstat;
	en_ASYNC_OPERR as_operr;
	en_CHGCODE chgcode;
};

struct sceMcIconSys
{
	uint8 Head[4];
	uint16 Reserv1;
	uint16 OffsLF;
	uint32 Reserv2;
	uint32 TransRate;
	int32 BgColor[4][4];
	float32 LightDir[4][3];
	float32 LightColor[4][3];
	float32 Ambient[4];
	uint8 TitleName[68];
	uint8 FnameView[64];
	uint8 FnameCopy[64];
	uint8 FnameDel[64];
	uint8 Reserve3[512];
};

struct sceMcTblGetDir
{
	sceMcStDateTime _Create;
	sceMcStDateTime _Modify;
	uint32 FileSizeByte;
	uint16 AttrFile;
	uint16 Reserve1;
	uint32 Reserve2;
	uint32 PdaAplNo;
	uint8 EntryName[32];
};

enum en_ISGMCA_STATUS
{
	ISG_MCA_STAT_DONE_ERR = 0xffffffff,
	ISG_MCA_STAT_INPROG,
	ISG_MCA_STAT_DONE
};

enum en_CHGCODE
{
	ISG_CHG_NONE,
	ISG_CHG_TARGET,
	ISG_CHG_GAMELIST
};

enum en_ISG_IOMODE
{
	ISG_IOMODE_READ = 0x1,
	ISG_IOMODE_WRITE,
	ISG_IOMODE_APPEND
};

struct st_ISGTHUMDATA
{
};

enum en_MEMCARD_SEEKPT
{
	ISG_MCSEEK_TOP,
	ISG_MCSEEK_CUR,
	ISG_MCSEEK_END
};

struct sceMcStDateTime
{
	uint8 Resv2;
	uint8 Sec;
	uint8 Min;
	uint8 Hour;
	uint8 Day;
	uint8 Month;
	uint16 Year;
};

enum en_NAMEGEN_TYPE
{
	ISG_NGTYP_GAMEDIR,
	ISG_NGTYP_GAMEFILE,
	ISG_NGTYP_CONFIG,
	ISG_NGTYP_ICONTHUM
};

struct sceCdCLOCK
{
	uint8 stat;
	uint8 second;
	uint8 minute;
	uint8 hour;
	uint8 pad;
	uint8 day;
	uint8 month;
	uint8 year;
};

enum en_ASYNC_OPCODE
{
	ISG_OPER_NOOP,
	ISG_OPER_INIT,
	ISG_OPER_SAVE,
	ISG_OPER_LOAD
};

enum en_ASYNC_OPSTAT
{
	ISG_OPSTAT_FAILURE = 0xffffffff,
	ISG_OPSTAT_INPROG,
	ISG_OPSTAT_SUCCESS
};

enum en_ASYNC_OPERR
{
	ISG_OPERR_NONE,
	ISG_OPERR_NOOPER,
	ISG_OPERR_MULTIOPER,
	ISG_OPERR_INITFAIL,
	ISG_OPERR_GAMEDIR,
	ISG_OPERR_SVNOSPACE,
	ISG_OPERR_SVINIT,
	ISG_OPERR_SVWRITE,
	ISG_OPERR_SVOPEN,
	ISG_OPERR_LDINIT,
	ISG_OPERR_LDREAD,
	ISG_OPERR_LDOPEN,
	ISG_OPERR_TGTERR,
	ISG_OPERR_TGTREM,
	ISG_OPERR_TGTPREP
};

enum en_ISGMC_ERRSTATUS
{
	ISGMC_ERR_NONE,
	ISGMC_ERR_NOMEMCARD,
	ISGMC_ERR_MKDIR,
	ISGMC_ERR_OPEN,
	ISGMC_ERR_CLOSE,
	ISGMC_ERR_READ,
	ISGMC_ERR_WRITE
};

int8 g_scoobydoo_icon_list[93814];
int8* g_scoobydoo_icon_copy;
int8* g_scoobydoo_icon_delete;
int32 g_isginit;
st_ISG_MEMCARD_DATA g_mcdata;
st_ISGSESSION g_isgdata;
int8* g_isg_scemodule[3];
int8* g_strz_egotrip[8];

int32 iSG_is_synccode_realerr(int32 mcop, int32 mcopret);
en_ISGMCA_STATUS iSG_mcasync_chkop(st_ISG_MEMCARD_DATA* mcdata, int32 block, int32* sync_resval);
int32 iSG_mca_fwrite(st_ISG_MEMCARD_DATA* mcdata, int8* data, int32 n);
int32 iSG_mca_fread(st_ISG_MEMCARD_DATA* mcdata, int8* buf, int32 bufsize);
int32 iSG_mca_fclose(st_ISG_MEMCARD_DATA* mcdata);
int32 iSG_mca_fopen(st_ISG_MEMCARD_DATA* mcdata, int8* fname, en_ISG_IOMODE mode);
int32 iSG_mca_chdir(st_ISG_MEMCARD_DATA* mcdata, int8* dname);
int32 iSG_mca_mkdir(st_ISG_MEMCARD_DATA* mcdata, int8* dname);
int32 iSG_mca_unfmt(st_ISG_MEMCARD_DATA* mcdata);
int32 iSG_mca_fmt(st_ISG_MEMCARD_DATA* mcdata, int32 force);
int32 iSG_get_fmoddate(st_ISG_MEMCARD_DATA* mcdata, int8* fname, int32* sec, int32* min, int32* hr, int32* mon, int32* day, int32* yr);
int32 iSG_get_finfo(st_ISG_MEMCARD_DATA* mcdata, int8* fname, int8* path);
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
int32 iSGTgtHaveRoom(st_ISGSESSION* isgdata, int32 tidx, int32 fsize, int8* dpath, int8* fname, int32* bytesNeeded, int32* availOnDisk);
int32 iSGTgtSetActive(st_ISGSESSION* isgdata, int32 tgtidx);
uint32 iSGTgtState(st_ISGSESSION* isgdata, int32 tgtidx, int8* dpath);
int32 iSGTgtFormat(st_ISGSESSION* isgdata, int32 tgtidx, int32 async);
int32 iSGTgtPhysSlotIdx();
int32 iSGTgtCount(int32* max);
void iSGSessionEnd(st_ISGSESSION* isgdata);
st_ISGSESSION* iSGSessionBegin();
int8* iSGMakeName(en_NAMEGEN_TYPE type, int8* base, int32 idx);
int32 iSGShutdown();
int32 iSGStartup();

// iSG_is_synccode_realerr__FiiP19st_ISG_MEMCARD_DATA
// Start address: 0x188bb0
int32 iSG_is_synccode_realerr(int32 mcop, int32 mcopret)
{
	int32 is_ok;
	// Line 3537, Address: 0x188bb0, Func Offset: 0
	// Line 3538, Address: 0x188bb8, Func Offset: 0x8
	// Line 3542, Address: 0x188bc4, Func Offset: 0x14
	// Line 3546, Address: 0x188bcc, Func Offset: 0x1c
	// Line 3549, Address: 0x188bd4, Func Offset: 0x24
	// Line 3568, Address: 0x188bf4, Func Offset: 0x44
	// Line 3569, Address: 0x188bfc, Func Offset: 0x4c
	// Line 3570, Address: 0x188c08, Func Offset: 0x58
	// Line 3573, Address: 0x188c4c, Func Offset: 0x9c
	// Line 3574, Address: 0x188c50, Func Offset: 0xa0
	// Line 3577, Address: 0x188c58, Func Offset: 0xa8
	// Line 3578, Address: 0x188c5c, Func Offset: 0xac
	// Line 3582, Address: 0x188c64, Func Offset: 0xb4
	// Line 3583, Address: 0x188c68, Func Offset: 0xb8
	// Line 3596, Address: 0x188c70, Func Offset: 0xc0
	// Line 3599, Address: 0x188c74, Func Offset: 0xc4
	// Line 3600, Address: 0x188c7c, Func Offset: 0xcc
	// Line 3601, Address: 0x188c88, Func Offset: 0xd8
	// Line 3604, Address: 0x188cb4, Func Offset: 0x104
	// Line 3605, Address: 0x188cb8, Func Offset: 0x108
	// Line 3608, Address: 0x188cc0, Func Offset: 0x110
	// Line 3609, Address: 0x188cc4, Func Offset: 0x114
	// Line 3617, Address: 0x188ccc, Func Offset: 0x11c
	// Line 3618, Address: 0x188cd0, Func Offset: 0x120
	// Line 3623, Address: 0x188cd8, Func Offset: 0x128
	// Line 3626, Address: 0x188cdc, Func Offset: 0x12c
	// Line 3627, Address: 0x188ce4, Func Offset: 0x134
	// Line 3628, Address: 0x188cf0, Func Offset: 0x140
	// Line 3631, Address: 0x188d10, Func Offset: 0x160
	// Line 3632, Address: 0x188d14, Func Offset: 0x164
	// Line 3635, Address: 0x188d1c, Func Offset: 0x16c
	// Line 3636, Address: 0x188d20, Func Offset: 0x170
	// Line 3641, Address: 0x188d28, Func Offset: 0x178
	// Line 3644, Address: 0x188d2c, Func Offset: 0x17c
	// Line 3645, Address: 0x188d34, Func Offset: 0x184
	// Line 3646, Address: 0x188d40, Func Offset: 0x190
	// Line 3649, Address: 0x188d6c, Func Offset: 0x1bc
	// Line 3650, Address: 0x188d70, Func Offset: 0x1c0
	// Line 3653, Address: 0x188d78, Func Offset: 0x1c8
	// Line 3654, Address: 0x188d7c, Func Offset: 0x1cc
	// Line 3657, Address: 0x188d84, Func Offset: 0x1d4
	// Line 3658, Address: 0x188d88, Func Offset: 0x1d8
	// Line 3663, Address: 0x188d90, Func Offset: 0x1e0
	// Line 3666, Address: 0x188d94, Func Offset: 0x1e4
	// Line 3667, Address: 0x188d9c, Func Offset: 0x1ec
	// Line 3668, Address: 0x188da8, Func Offset: 0x1f8
	// Line 3671, Address: 0x188dec, Func Offset: 0x23c
	// Line 3672, Address: 0x188df0, Func Offset: 0x240
	// Line 3675, Address: 0x188df8, Func Offset: 0x248
	// Line 3676, Address: 0x188dfc, Func Offset: 0x24c
	// Line 3679, Address: 0x188e04, Func Offset: 0x254
	// Line 3680, Address: 0x188e08, Func Offset: 0x258
	// Line 3683, Address: 0x188e10, Func Offset: 0x260
	// Line 3684, Address: 0x188e14, Func Offset: 0x264
	// Line 3688, Address: 0x188e1c, Func Offset: 0x26c
	// Line 3689, Address: 0x188e20, Func Offset: 0x270
	// Line 3694, Address: 0x188e28, Func Offset: 0x278
	// Line 3697, Address: 0x188e2c, Func Offset: 0x27c
	// Line 3698, Address: 0x188e34, Func Offset: 0x284
	// Line 3699, Address: 0x188e40, Func Offset: 0x290
	// Line 3702, Address: 0x188e60, Func Offset: 0x2b0
	// Line 3703, Address: 0x188e64, Func Offset: 0x2b4
	// Line 3706, Address: 0x188e6c, Func Offset: 0x2bc
	// Line 3707, Address: 0x188e70, Func Offset: 0x2c0
	// Line 3712, Address: 0x188e78, Func Offset: 0x2c8
	// Line 3715, Address: 0x188e7c, Func Offset: 0x2cc
	// Line 3716, Address: 0x188e84, Func Offset: 0x2d4
	// Line 3717, Address: 0x188e90, Func Offset: 0x2e0
	// Line 3720, Address: 0x188ebc, Func Offset: 0x30c
	// Line 3721, Address: 0x188ec0, Func Offset: 0x310
	// Line 3725, Address: 0x188ec8, Func Offset: 0x318
	// Line 3726, Address: 0x188ecc, Func Offset: 0x31c
	// Line 3731, Address: 0x188ed4, Func Offset: 0x324
	// Line 3732, Address: 0x188ed8, Func Offset: 0x328
	// Line 3737, Address: 0x188ee0, Func Offset: 0x330
	// Line 3740, Address: 0x188ee4, Func Offset: 0x334
	// Line 3741, Address: 0x188eec, Func Offset: 0x33c
	// Line 3742, Address: 0x188ef8, Func Offset: 0x348
	// Line 3745, Address: 0x188f24, Func Offset: 0x374
	// Line 3746, Address: 0x188f28, Func Offset: 0x378
	// Line 3749, Address: 0x188f30, Func Offset: 0x380
	// Line 3750, Address: 0x188f34, Func Offset: 0x384
	// Line 3754, Address: 0x188f3c, Func Offset: 0x38c
	// Line 3755, Address: 0x188f40, Func Offset: 0x390
	// Line 3760, Address: 0x188f48, Func Offset: 0x398
	// Line 3763, Address: 0x188f4c, Func Offset: 0x39c
	// Line 3764, Address: 0x188f54, Func Offset: 0x3a4
	// Line 3765, Address: 0x188f60, Func Offset: 0x3b0
	// Line 3768, Address: 0x188f80, Func Offset: 0x3d0
	// Line 3769, Address: 0x188f84, Func Offset: 0x3d4
	// Line 3772, Address: 0x188f8c, Func Offset: 0x3dc
	// Line 3773, Address: 0x188f90, Func Offset: 0x3e0
	// Line 3778, Address: 0x188f98, Func Offset: 0x3e8
	// Line 3781, Address: 0x188f9c, Func Offset: 0x3ec
	// Line 3782, Address: 0x188fa4, Func Offset: 0x3f4
	// Line 3783, Address: 0x188fb0, Func Offset: 0x400
	// Line 3787, Address: 0x188fd0, Func Offset: 0x420
	// Line 3788, Address: 0x188fd4, Func Offset: 0x424
	// Line 3792, Address: 0x188fdc, Func Offset: 0x42c
	// Line 3793, Address: 0x188fe0, Func Offset: 0x430
	// Line 3798, Address: 0x188fe8, Func Offset: 0x438
	// Line 3801, Address: 0x188fec, Func Offset: 0x43c
	// Line 3802, Address: 0x188ff4, Func Offset: 0x444
	// Line 3803, Address: 0x189000, Func Offset: 0x450
	// Line 3806, Address: 0x189038, Func Offset: 0x488
	// Line 3807, Address: 0x18903c, Func Offset: 0x48c
	// Line 3811, Address: 0x189044, Func Offset: 0x494
	// Line 3812, Address: 0x189048, Func Offset: 0x498
	// Line 3817, Address: 0x189050, Func Offset: 0x4a0
	// Line 3818, Address: 0x189054, Func Offset: 0x4a4
	// Line 3821, Address: 0x18905c, Func Offset: 0x4ac
	// Line 3822, Address: 0x189060, Func Offset: 0x4b0
	// Line 3827, Address: 0x189068, Func Offset: 0x4b8
	// Line 3830, Address: 0x18906c, Func Offset: 0x4bc
	// Line 3831, Address: 0x189074, Func Offset: 0x4c4
	// Line 3840, Address: 0x189080, Func Offset: 0x4d0
	// Line 3841, Address: 0x189088, Func Offset: 0x4d8
	// Line 3850, Address: 0x189094, Func Offset: 0x4e4
	// Line 3851, Address: 0x18909c, Func Offset: 0x4ec
	// Line 3852, Address: 0x1890a8, Func Offset: 0x4f8
	// Line 3856, Address: 0x1890c8, Func Offset: 0x518
	// Line 3857, Address: 0x1890cc, Func Offset: 0x51c
	// Line 3867, Address: 0x1890d4, Func Offset: 0x524
	// Line 3870, Address: 0x1890d8, Func Offset: 0x528
	// Line 3871, Address: 0x1890e0, Func Offset: 0x530
	// Line 3872, Address: 0x1890ec, Func Offset: 0x53c
	// Line 3875, Address: 0x18910c, Func Offset: 0x55c
	// Line 3876, Address: 0x189110, Func Offset: 0x560
	// Line 3881, Address: 0x189118, Func Offset: 0x568
	// Line 3882, Address: 0x18911c, Func Offset: 0x56c
	// Line 3887, Address: 0x189124, Func Offset: 0x574
	// Line 3890, Address: 0x189128, Func Offset: 0x578
	// Line 3891, Address: 0x189130, Func Offset: 0x580
	// Line 3901, Address: 0x18913c, Func Offset: 0x58c
	// Line 3902, Address: 0x189144, Func Offset: 0x594
	// Line 3908, Address: 0x189150, Func Offset: 0x5a0
	// Line 3912, Address: 0x189154, Func Offset: 0x5a4
	// Func End, Address: 0x18915c, Func Offset: 0x5ac
}

// iSG_mcasync_chkop__FP19st_ISG_MEMCARD_DATAiPi
// Start address: 0x189160
en_ISGMCA_STATUS iSG_mcasync_chkop(st_ISG_MEMCARD_DATA* mcdata, int32 block, int32* sync_resval)
{
	int32 mcf;
	int32 ret;
	int32 rc;
	en_ISGMCA_STATUS result;
	// Line 3432, Address: 0x189160, Func Offset: 0
	// Line 3436, Address: 0x18917c, Func Offset: 0x1c
	// Line 3438, Address: 0x189180, Func Offset: 0x20
	// Line 3440, Address: 0x189190, Func Offset: 0x30
	// Line 3445, Address: 0x1891ac, Func Offset: 0x4c
	// Line 3459, Address: 0x1891bc, Func Offset: 0x5c
	// Line 3462, Address: 0x1891e4, Func Offset: 0x84
	// Line 3463, Address: 0x1891e8, Func Offset: 0x88
	// Line 3467, Address: 0x1891f0, Func Offset: 0x90
	// Line 3468, Address: 0x1891f4, Func Offset: 0x94
	// Line 3471, Address: 0x1891fc, Func Offset: 0x9c
	// Line 3472, Address: 0x189200, Func Offset: 0xa0
	// Line 3476, Address: 0x189208, Func Offset: 0xa8
	// Line 3478, Address: 0x18920c, Func Offset: 0xac
	// Line 3482, Address: 0x189210, Func Offset: 0xb0
	// Line 3487, Address: 0x189228, Func Offset: 0xc8
	// Line 3489, Address: 0x18923c, Func Offset: 0xdc
	// Line 3493, Address: 0x189250, Func Offset: 0xf0
	// Line 3496, Address: 0x18925c, Func Offset: 0xfc
	// Line 3497, Address: 0x18926c, Func Offset: 0x10c
	// Line 3499, Address: 0x189274, Func Offset: 0x114
	// Line 3503, Address: 0x189278, Func Offset: 0x118
	// Line 3506, Address: 0x189288, Func Offset: 0x128
	// Line 3508, Address: 0x1892a0, Func Offset: 0x140
	// Line 3510, Address: 0x1892a8, Func Offset: 0x148
	// Line 3517, Address: 0x1892b0, Func Offset: 0x150
	// Line 3518, Address: 0x1892b4, Func Offset: 0x154
	// Func End, Address: 0x1892d4, Func Offset: 0x174
}

// iSG_mca_fwrite__FP19st_ISG_MEMCARD_DATAPci
// Start address: 0x1892e0
int32 iSG_mca_fwrite(st_ISG_MEMCARD_DATA* mcdata, int8* data, int32 n)
{
	int32 rc;
	int32 result;
	// Line 3297, Address: 0x1892e0, Func Offset: 0
	// Line 3302, Address: 0x1892f0, Func Offset: 0x10
	// Line 3305, Address: 0x1892f4, Func Offset: 0x14
	// Line 3307, Address: 0x18930c, Func Offset: 0x2c
	// Line 3308, Address: 0x189314, Func Offset: 0x34
	// Line 3309, Address: 0x18931c, Func Offset: 0x3c
	// Line 3310, Address: 0x18936c, Func Offset: 0x8c
	// Line 3320, Address: 0x189378, Func Offset: 0x98
	// Line 3321, Address: 0x18937c, Func Offset: 0x9c
	// Func End, Address: 0x189390, Func Offset: 0xb0
}

// iSG_mca_fread__FP19st_ISG_MEMCARD_DATAPci
// Start address: 0x189390
int32 iSG_mca_fread(st_ISG_MEMCARD_DATA* mcdata, int8* buf, int32 bufsize)
{
	int32 rc;
	int32 result;
	// Line 3246, Address: 0x189390, Func Offset: 0
	// Line 3251, Address: 0x1893a0, Func Offset: 0x10
	// Line 3253, Address: 0x1893b8, Func Offset: 0x28
	// Line 3254, Address: 0x1893c0, Func Offset: 0x30
	// Line 3255, Address: 0x1893c8, Func Offset: 0x38
	// Line 3256, Address: 0x189418, Func Offset: 0x88
	// Line 3266, Address: 0x189424, Func Offset: 0x94
	// Line 3267, Address: 0x189428, Func Offset: 0x98
	// Func End, Address: 0x18943c, Func Offset: 0xac
}

// iSG_mca_fclose__FP19st_ISG_MEMCARD_DATA
// Start address: 0x189440
int32 iSG_mca_fclose(st_ISG_MEMCARD_DATA* mcdata)
{
	int32 rc;
	int32 result;
	// Line 3107, Address: 0x189440, Func Offset: 0
	// Line 3111, Address: 0x189450, Func Offset: 0x10
	// Line 3112, Address: 0x18945c, Func Offset: 0x1c
	// Line 3113, Address: 0x189468, Func Offset: 0x28
	// Line 3114, Address: 0x1894b8, Func Offset: 0x78
	// Line 3123, Address: 0x1894c4, Func Offset: 0x84
	// Line 3124, Address: 0x1894c8, Func Offset: 0x88
	// Func End, Address: 0x1894dc, Func Offset: 0x9c
}

// iSG_mca_fopen__FP19st_ISG_MEMCARD_DATAPCc13en_ISG_IOMODE
// Start address: 0x1894e0
int32 iSG_mca_fopen(st_ISG_MEMCARD_DATA* mcdata, int8* fname, en_ISG_IOMODE mode)
{
	int32 ps2mode;
	int32 rc;
	int32 result;
	// Line 3045, Address: 0x1894e0, Func Offset: 0
	// Line 3046, Address: 0x1894f0, Func Offset: 0x10
	// Line 3059, Address: 0x1894f4, Func Offset: 0x14
	// Line 3062, Address: 0x189508, Func Offset: 0x28
	// Line 3063, Address: 0x189510, Func Offset: 0x30
	// Line 3064, Address: 0x189520, Func Offset: 0x40
	// Line 3065, Address: 0x189570, Func Offset: 0x90
	// Line 3074, Address: 0x18957c, Func Offset: 0x9c
	// Line 3076, Address: 0x189580, Func Offset: 0xa0
	// Func End, Address: 0x189594, Func Offset: 0xb4
}

// iSG_mca_chdir__FP19st_ISG_MEMCARD_DATAPc
// Start address: 0x1895a0
int32 iSG_mca_chdir(st_ISG_MEMCARD_DATA* mcdata, int8* dname)
{
	int32 rc;
	int32 result;
	// Line 2985, Address: 0x1895a0, Func Offset: 0
	// Line 2990, Address: 0x1895b0, Func Offset: 0x10
	// Line 2992, Address: 0x1895b4, Func Offset: 0x14
	// Line 2993, Address: 0x1895c4, Func Offset: 0x24
	// Line 2994, Address: 0x1895d8, Func Offset: 0x38
	// Line 2995, Address: 0x189628, Func Offset: 0x88
	// Line 3004, Address: 0x189634, Func Offset: 0x94
	// Line 3005, Address: 0x189638, Func Offset: 0x98
	// Func End, Address: 0x18964c, Func Offset: 0xac
}

// iSG_mca_mkdir__FP19st_ISG_MEMCARD_DATAPc
// Start address: 0x189650
int32 iSG_mca_mkdir(st_ISG_MEMCARD_DATA* mcdata, int8* dname)
{
	int32 rc;
	int32 result;
	// Line 2933, Address: 0x189650, Func Offset: 0
	// Line 2938, Address: 0x189660, Func Offset: 0x10
	// Line 2940, Address: 0x189664, Func Offset: 0x14
	// Line 2941, Address: 0x189674, Func Offset: 0x24
	// Line 2942, Address: 0x189684, Func Offset: 0x34
	// Line 2943, Address: 0x1896d4, Func Offset: 0x84
	// Line 2952, Address: 0x1896e0, Func Offset: 0x90
	// Line 2953, Address: 0x1896e4, Func Offset: 0x94
	// Func End, Address: 0x1896f8, Func Offset: 0xa8
}

// iSG_mca_unfmt__FP19st_ISG_MEMCARD_DATA
// Start address: 0x189700
int32 iSG_mca_unfmt(st_ISG_MEMCARD_DATA* mcdata)
{
	int32 rc;
	int32 result;
	// Line 2865, Address: 0x189700, Func Offset: 0
	// Line 2870, Address: 0x189710, Func Offset: 0x10
	// Line 2874, Address: 0x189714, Func Offset: 0x14
	// Line 2875, Address: 0x189724, Func Offset: 0x24
	// Line 2880, Address: 0x18972c, Func Offset: 0x2c
	// Line 2885, Address: 0x189734, Func Offset: 0x34
	// Line 2886, Address: 0x189738, Func Offset: 0x38
	// Line 2887, Address: 0x189744, Func Offset: 0x44
	// Line 2888, Address: 0x189794, Func Offset: 0x94
	// Line 2899, Address: 0x1897a0, Func Offset: 0xa0
	// Line 2900, Address: 0x1897a4, Func Offset: 0xa4
	// Func End, Address: 0x1897b8, Func Offset: 0xb8
}

// iSG_mca_fmt__FP19st_ISG_MEMCARD_DATAi
// Start address: 0x1897c0
int32 iSG_mca_fmt(st_ISG_MEMCARD_DATA* mcdata, int32 force)
{
	int32 rc;
	int32 result;
	// Line 2779, Address: 0x1897c0, Func Offset: 0
	// Line 2784, Address: 0x1897d4, Func Offset: 0x14
	// Line 2787, Address: 0x1897dc, Func Offset: 0x1c
	// Line 2788, Address: 0x1897ec, Func Offset: 0x2c
	// Line 2791, Address: 0x1897fc, Func Offset: 0x3c
	// Line 2796, Address: 0x189818, Func Offset: 0x58
	// Line 2797, Address: 0x189824, Func Offset: 0x64
	// Line 2805, Address: 0x18982c, Func Offset: 0x6c
	// Line 2813, Address: 0x189834, Func Offset: 0x74
	// Line 2815, Address: 0x189838, Func Offset: 0x78
	// Line 2816, Address: 0x189844, Func Offset: 0x84
	// Line 2817, Address: 0x189894, Func Offset: 0xd4
	// Line 2828, Address: 0x1898a0, Func Offset: 0xe0
	// Line 2829, Address: 0x1898a4, Func Offset: 0xe4
	// Func End, Address: 0x1898bc, Func Offset: 0xfc
}

// iSG_get_fmoddate__FP19st_ISG_MEMCARD_DATAPCcPiPiPiPiPiPi
// Start address: 0x1898c0
int32 iSG_get_fmoddate(st_ISG_MEMCARD_DATA* mcdata, int8* fname, int32* sec, int32* min, int32* hr, int32* mon, int32* day, int32* yr)
{
	sceMcTblGetDir* finf;
	int32 rc;
	int32 result;
	// Line 2699, Address: 0x1898c0, Func Offset: 0
	// Line 2702, Address: 0x189900, Func Offset: 0x40
	// Line 2705, Address: 0x189904, Func Offset: 0x44
	// Line 2706, Address: 0x189910, Func Offset: 0x50
	// Line 2710, Address: 0x189920, Func Offset: 0x60
	// Line 2711, Address: 0x189930, Func Offset: 0x70
	// Line 2712, Address: 0x189940, Func Offset: 0x80
	// Line 2713, Address: 0x189950, Func Offset: 0x90
	// Line 2714, Address: 0x189960, Func Offset: 0xa0
	// Line 2715, Address: 0x189970, Func Offset: 0xb0
	// Line 2719, Address: 0x189980, Func Offset: 0xc0
	// Line 2720, Address: 0x189984, Func Offset: 0xc4
	// Func End, Address: 0x1899b0, Func Offset: 0xf0
}

// iSG_get_finfo__FP19st_ISG_MEMCARD_DATAPCcPCc
// Start address: 0x1899b0
int32 iSG_get_finfo(st_ISG_MEMCARD_DATA* mcdata, int8* fname, int8* path)
{
	int32 numfound;
	int32 len;
	int8 str_buf[64];
	int32 rc;
	int32 result;
	// Line 2619, Address: 0x1899b0, Func Offset: 0
	// Line 2622, Address: 0x1899c4, Func Offset: 0x14
	// Line 2619, Address: 0x1899c8, Func Offset: 0x18
	// Line 2622, Address: 0x1899cc, Func Offset: 0x1c
	// Line 2624, Address: 0x189a00, Func Offset: 0x50
	// Line 2630, Address: 0x189a04, Func Offset: 0x54
	// Line 2634, Address: 0x189a30, Func Offset: 0x80
	// Line 2642, Address: 0x189a38, Func Offset: 0x88
	// Line 2645, Address: 0x189a3c, Func Offset: 0x8c
	// Line 2646, Address: 0x189a64, Func Offset: 0xb4
	// Line 2647, Address: 0x189a6c, Func Offset: 0xbc
	// Line 2648, Address: 0x189a8c, Func Offset: 0xdc
	// Line 2649, Address: 0x189aa4, Func Offset: 0xf4
	// Line 2650, Address: 0x189aac, Func Offset: 0xfc
	// Line 2651, Address: 0x189ac0, Func Offset: 0x110
	// Line 2652, Address: 0x189ac8, Func Offset: 0x118
	// Line 2653, Address: 0x189af0, Func Offset: 0x140
	// Line 2656, Address: 0x189afc, Func Offset: 0x14c
	// Line 2658, Address: 0x189b18, Func Offset: 0x168
	// Line 2659, Address: 0x189b68, Func Offset: 0x1b8
	// Line 2661, Address: 0x189b78, Func Offset: 0x1c8
	// Line 2663, Address: 0x189b84, Func Offset: 0x1d4
	// Line 2664, Address: 0x189b98, Func Offset: 0x1e8
	// Line 2668, Address: 0x189ba4, Func Offset: 0x1f4
	// Line 2674, Address: 0x189ba8, Func Offset: 0x1f8
	// Line 2677, Address: 0x189bc0, Func Offset: 0x210
	// Line 2678, Address: 0x189bc8, Func Offset: 0x218
	// Line 2680, Address: 0x189bcc, Func Offset: 0x21c
	// Line 2681, Address: 0x189bd0, Func Offset: 0x220
	// Func End, Address: 0x189bec, Func Offset: 0x23c
}

// iSG_isSpaceForFile__FP19st_ISG_MEMCARD_DATAiiPCcPCcPiPi
// Start address: 0x189bf0
int32 iSG_isSpaceForFile(st_ISG_MEMCARD_DATA* mcdata, int32 mcidx, int32 fsize, int8* dpath, int8* fname, int32* bytesNeeded, int32* availOnDisk)
{
	int32 reset_mcpath;
	int32 totclust;
	int32 estclust;
	int32 xtra_fent;
	int32 fEc_need;
	int32 fc_need;
	int32 rc;
	// Line 2250, Address: 0x189bf0, Func Offset: 0
	// Line 2265, Address: 0x189c34, Func Offset: 0x44
	// Line 2268, Address: 0x189c48, Func Offset: 0x58
	// Line 2272, Address: 0x189c58, Func Offset: 0x68
	// Line 2276, Address: 0x189c6c, Func Offset: 0x7c
	// Line 2277, Address: 0x189c7c, Func Offset: 0x8c
	// Line 2321, Address: 0x189c84, Func Offset: 0x94
	// Line 2323, Address: 0x189c98, Func Offset: 0xa8
	// Line 2335, Address: 0x189ca0, Func Offset: 0xb0
	// Line 2337, Address: 0x189cac, Func Offset: 0xbc
	// Line 2351, Address: 0x189cb8, Func Offset: 0xc8
	// Line 2353, Address: 0x189ccc, Func Offset: 0xdc
	// Line 2354, Address: 0x189cec, Func Offset: 0xfc
	// Line 2356, Address: 0x189cf4, Func Offset: 0x104
	// Line 2358, Address: 0x189d08, Func Offset: 0x118
	// Line 2363, Address: 0x189d1c, Func Offset: 0x12c
	// Line 2368, Address: 0x189d20, Func Offset: 0x130
	// Line 2379, Address: 0x189d2c, Func Offset: 0x13c
	// Line 2381, Address: 0x189d38, Func Offset: 0x148
	// Line 2382, Address: 0x189d44, Func Offset: 0x154
	// Line 2384, Address: 0x189d50, Func Offset: 0x160
	// Line 2385, Address: 0x189d54, Func Offset: 0x164
	// Line 2384, Address: 0x189d7c, Func Offset: 0x18c
	// Line 2385, Address: 0x189d80, Func Offset: 0x190
	// Func End, Address: 0x189d88, Func Offset: 0x198
}

// iSG_mc_availDirEnt__FP19st_ISG_MEMCARD_DATAiPCc
// Start address: 0x189d90
int32 iSG_mc_availDirEnt(st_ISG_MEMCARD_DATA* mcdata, int32 mcidx, int8* dpath)
{
	int32 rc;
	int32 result;
	// Line 2195, Address: 0x189d90, Func Offset: 0
	// Line 2204, Address: 0x189da4, Func Offset: 0x14
	// Line 2207, Address: 0x189db4, Func Offset: 0x24
	// Line 2210, Address: 0x189dcc, Func Offset: 0x3c
	// Line 2211, Address: 0x189ddc, Func Offset: 0x4c
	// Line 2212, Address: 0x189e2c, Func Offset: 0x9c
	// Line 2214, Address: 0x189e38, Func Offset: 0xa8
	// Line 2216, Address: 0x189e40, Func Offset: 0xb0
	// Line 2217, Address: 0x189e50, Func Offset: 0xc0
	// Line 2230, Address: 0x189e5c, Func Offset: 0xcc
	// Line 2232, Address: 0x189e68, Func Offset: 0xd8
	// Func End, Address: 0x189e80, Func Offset: 0xf0
}

// iSG_mc_availclust__FP19st_ISG_MEMCARD_DATAi
// Start address: 0x189e80
int32 iSG_mc_availclust(st_ISG_MEMCARD_DATA* mcdata, int32 mcidx)
{
	int32 clust;
	int32 rc;
	int32 result;
	// Line 2138, Address: 0x189e80, Func Offset: 0
	// Line 2143, Address: 0x189e90, Func Offset: 0x10
	// Line 2140, Address: 0x189e94, Func Offset: 0x14
	// Line 2147, Address: 0x189e9c, Func Offset: 0x1c
	// Line 2150, Address: 0x189ea0, Func Offset: 0x20
	// Line 2153, Address: 0x189eb4, Func Offset: 0x34
	// Line 2154, Address: 0x189ecc, Func Offset: 0x4c
	// Line 2155, Address: 0x189f1c, Func Offset: 0x9c
	// Line 2157, Address: 0x189f28, Func Offset: 0xa8
	// Line 2161, Address: 0x189f30, Func Offset: 0xb0
	// Line 2162, Address: 0x189f3c, Func Offset: 0xbc
	// Line 2170, Address: 0x189f48, Func Offset: 0xc8
	// Line 2172, Address: 0x189f58, Func Offset: 0xd8
	// Func End, Address: 0x189f6c, Func Offset: 0xec
}

// iSG_mc_isPSIIcard__FP19st_ISG_MEMCARD_DATAi
// Start address: 0x189f70
int32 iSG_mc_isPSIIcard(st_ISG_MEMCARD_DATA* mcdata, int32 mcidx)
{
	int32 type;
	int32 rc;
	int32 result;
	// Line 2077, Address: 0x189f70, Func Offset: 0
	// Line 2082, Address: 0x189f80, Func Offset: 0x10
	// Line 2079, Address: 0x189f84, Func Offset: 0x14
	// Line 2084, Address: 0x189f8c, Func Offset: 0x1c
	// Line 2089, Address: 0x189f90, Func Offset: 0x20
	// Line 2092, Address: 0x189fa4, Func Offset: 0x34
	// Line 2093, Address: 0x189fbc, Func Offset: 0x4c
	// Line 2094, Address: 0x18a00c, Func Offset: 0x9c
	// Line 2096, Address: 0x18a018, Func Offset: 0xa8
	// Line 2100, Address: 0x18a020, Func Offset: 0xb0
	// Line 2102, Address: 0x18a030, Func Offset: 0xc0
	// Line 2105, Address: 0x18a044, Func Offset: 0xd4
	// Line 2127, Address: 0x18a054, Func Offset: 0xe4
	// Line 2133, Address: 0x18a058, Func Offset: 0xe8
	// Line 2134, Address: 0x18a05c, Func Offset: 0xec
	// Func End, Address: 0x18a070, Func Offset: 0x100
}

// iSG_mc_isformatted__FP19st_ISG_MEMCARD_DATAi
// Start address: 0x18a070
int32 iSG_mc_isformatted(st_ISG_MEMCARD_DATA* mcdata, int32 mcidx)
{
	int32 is_fmtd;
	int32 rc;
	int32 result;
	// Line 2034, Address: 0x18a070, Func Offset: 0
	// Line 2039, Address: 0x18a080, Func Offset: 0x10
	// Line 2036, Address: 0x18a084, Func Offset: 0x14
	// Line 2041, Address: 0x18a08c, Func Offset: 0x1c
	// Line 2044, Address: 0x18a090, Func Offset: 0x20
	// Line 2047, Address: 0x18a0a4, Func Offset: 0x34
	// Line 2048, Address: 0x18a0bc, Func Offset: 0x4c
	// Line 2049, Address: 0x18a10c, Func Offset: 0x9c
	// Line 2052, Address: 0x18a118, Func Offset: 0xa8
	// Line 2054, Address: 0x18a120, Func Offset: 0xb0
	// Line 2055, Address: 0x18a12c, Func Offset: 0xbc
	// Line 2058, Address: 0x18a134, Func Offset: 0xc4
	// Line 2063, Address: 0x18a138, Func Offset: 0xc8
	// Line 2073, Address: 0x18a150, Func Offset: 0xe0
	// Func End, Address: 0x18a164, Func Offset: 0xf4
}

// iSG_mc_exists__FP19st_ISG_MEMCARD_DATAi
// Start address: 0x18a170
int32 iSG_mc_exists(st_ISG_MEMCARD_DATA* mcdata, int32 mcidx)
{
	int32 rc;
	int32 result;
	// Line 1995, Address: 0x18a170, Func Offset: 0
	// Line 1997, Address: 0x18a180, Func Offset: 0x10
	// Line 2003, Address: 0x18a188, Func Offset: 0x18
	// Line 2008, Address: 0x18a18c, Func Offset: 0x1c
	// Line 2011, Address: 0x18a1a0, Func Offset: 0x30
	// Line 2012, Address: 0x18a1b8, Func Offset: 0x48
	// Line 2013, Address: 0x18a208, Func Offset: 0x98
	// Line 2015, Address: 0x18a214, Func Offset: 0xa4
	// Line 2017, Address: 0x18a21c, Func Offset: 0xac
	// Line 2019, Address: 0x18a22c, Func Offset: 0xbc
	// Line 2029, Address: 0x18a23c, Func Offset: 0xcc
	// Line 2030, Address: 0x18a240, Func Offset: 0xd0
	// Func End, Address: 0x18a254, Func Offset: 0xe4
}

// iSG_mcidx_portslot__FiPiPiPi
// Start address: 0x18a260
int32 iSG_mcidx_portslot(int32 mcidx, int32* port, int32* slot, int32* concnt)
{
	int32 cur_mcop;
	int32 use_port;
	int32 con_p1;
	int32 con_p0;
	int32 tp;
	int32 type;
	int32 i;
	int32 ret;
	int32 rc;
	int32 result;
	// Line 1732, Address: 0x18a260, Func Offset: 0
	// Line 1733, Address: 0x18a290, Func Offset: 0x30
	// Line 1892, Address: 0x18a2a0, Func Offset: 0x40
	// Line 1735, Address: 0x18a2a4, Func Offset: 0x44
	// Line 1739, Address: 0x18a2a8, Func Offset: 0x48
	// Line 1752, Address: 0x18a2ac, Func Offset: 0x4c
	// Line 1746, Address: 0x18a2b0, Func Offset: 0x50
	// Line 1747, Address: 0x18a2b4, Func Offset: 0x54
	// Line 1892, Address: 0x18a2b8, Func Offset: 0x58
	// Line 1895, Address: 0x18a2c0, Func Offset: 0x60
	// Line 1911, Address: 0x18a2c8, Func Offset: 0x68
	// Line 1915, Address: 0x18a2cc, Func Offset: 0x6c
	// Line 1922, Address: 0x18a2d8, Func Offset: 0x78
	// Line 1923, Address: 0x18a2f4, Func Offset: 0x94
	// Line 1924, Address: 0x18a348, Func Offset: 0xe8
	// Line 1926, Address: 0x18a350, Func Offset: 0xf0
	// Line 1930, Address: 0x18a360, Func Offset: 0x100
	// Line 1934, Address: 0x18a368, Func Offset: 0x108
	// Line 1936, Address: 0x18a378, Func Offset: 0x118
	// Line 1944, Address: 0x18a3a4, Func Offset: 0x144
	// Line 1948, Address: 0x18a3b0, Func Offset: 0x150
	// Line 1949, Address: 0x18a3b4, Func Offset: 0x154
	// Line 1951, Address: 0x18a3b8, Func Offset: 0x158
	// Line 1952, Address: 0x18a3c8, Func Offset: 0x168
	// Line 1963, Address: 0x18a3cc, Func Offset: 0x16c
	// Line 1965, Address: 0x18a3d0, Func Offset: 0x170
	// Line 1967, Address: 0x18a3e4, Func Offset: 0x184
	// Line 1972, Address: 0x18a3f8, Func Offset: 0x198
	// Line 1974, Address: 0x18a404, Func Offset: 0x1a4
	// Line 1975, Address: 0x18a40c, Func Offset: 0x1ac
	// Line 1976, Address: 0x18a410, Func Offset: 0x1b0
	// Line 1979, Address: 0x18a414, Func Offset: 0x1b4
	// Line 1980, Address: 0x18a418, Func Offset: 0x1b8
	// Line 1990, Address: 0x18a420, Func Offset: 0x1c0
	// Line 1991, Address: 0x18a424, Func Offset: 0x1c4
	// Func End, Address: 0x18a454, Func Offset: 0x1f4
}

// SQUIB_init_st_iconsys__FP12sceMcIconSys
// Start address: 0x18a460
void SQUIB_init_st_iconsys(sceMcIconSys* icsys)
{
	uint8 sjistitle[68];
	int8* iconname;
	float32 ambient[4];
	float32 lightcol[4][3];
	float32 lightdir[4][3];
	int32 bgcolor[4][4];
	// Line 1619, Address: 0x18a460, Func Offset: 0
	// Line 1629, Address: 0x18a468, Func Offset: 0x8
	// Line 1619, Address: 0x18a46c, Func Offset: 0xc
	// Line 1629, Address: 0x18a470, Func Offset: 0x10
	// Line 1640, Address: 0x18a488, Func Offset: 0x28
	// Line 1650, Address: 0x18a48c, Func Offset: 0x2c
	// Line 1629, Address: 0x18a494, Func Offset: 0x34
	// Line 1640, Address: 0x18a49c, Func Offset: 0x3c
	// Line 1629, Address: 0x18a4a0, Func Offset: 0x40
	// Line 1640, Address: 0x18a4a4, Func Offset: 0x44
	// Line 1629, Address: 0x18a4a8, Func Offset: 0x48
	// Line 1650, Address: 0x18a4ac, Func Offset: 0x4c
	// Line 1656, Address: 0x18a4b4, Func Offset: 0x54
	// Line 1640, Address: 0x18a4bc, Func Offset: 0x5c
	// Line 1660, Address: 0x18a4c8, Func Offset: 0x68
	// Line 1640, Address: 0x18a4cc, Func Offset: 0x6c
	// Line 1660, Address: 0x18a4d8, Func Offset: 0x78
	// Line 1650, Address: 0x18a4dc, Func Offset: 0x7c
	// Line 1656, Address: 0x18a4e8, Func Offset: 0x88
	// Line 1660, Address: 0x18a4ec, Func Offset: 0x8c
	// Line 1665, Address: 0x18a4f0, Func Offset: 0x90
	// Line 1650, Address: 0x18a4f4, Func Offset: 0x94
	// Line 1656, Address: 0x18a500, Func Offset: 0xa0
	// Line 1665, Address: 0x18a504, Func Offset: 0xa4
	// Line 1656, Address: 0x18a508, Func Offset: 0xa8
	// Line 1660, Address: 0x18a50c, Func Offset: 0xac
	// Line 1665, Address: 0x18a530, Func Offset: 0xd0
	// Line 1668, Address: 0x18a538, Func Offset: 0xd8
	// Line 1669, Address: 0x18a540, Func Offset: 0xe0
	// Line 1670, Address: 0x18a548, Func Offset: 0xe8
	// Line 1671, Address: 0x18a550, Func Offset: 0xf0
	// Line 1674, Address: 0x18a558, Func Offset: 0xf8
	// Line 1677, Address: 0x18a560, Func Offset: 0x100
	// Line 1679, Address: 0x18a570, Func Offset: 0x110
	// Line 1682, Address: 0x18a57c, Func Offset: 0x11c
	// Line 1683, Address: 0x18a58c, Func Offset: 0x12c
	// Line 1684, Address: 0x18a598, Func Offset: 0x138
	// Line 1685, Address: 0x18a5a8, Func Offset: 0x148
	// Line 1686, Address: 0x18a5b4, Func Offset: 0x154
	// Line 1687, Address: 0x18a5c4, Func Offset: 0x164
	// Line 1690, Address: 0x18a5d0, Func Offset: 0x170
	// Line 1691, Address: 0x18a5d8, Func Offset: 0x178
	// Line 1692, Address: 0x18a5e4, Func Offset: 0x184
	// Line 1693, Address: 0x18a5f4, Func Offset: 0x194
	// Line 1694, Address: 0x18a604, Func Offset: 0x1a4
	// Line 1697, Address: 0x18a614, Func Offset: 0x1b4
	// Func End, Address: 0x18a624, Func Offset: 0x1c4
}

// iSG_add_sysicons__FP19st_ISG_MEMCARD_DATA
// Start address: 0x18a630
int32 iSG_add_sysicons(st_ISG_MEMCARD_DATA* mcdata)
{
	int8* iconname;
	sceMcIconSys icsysdata;
	// Line 1470, Address: 0x18a630, Func Offset: 0
	// Line 1480, Address: 0x18a644, Func Offset: 0x14
	// Line 1484, Address: 0x18a64c, Func Offset: 0x1c
	// Line 1485, Address: 0x18a65c, Func Offset: 0x2c
	// Line 1486, Address: 0x18a694, Func Offset: 0x64
	// Line 1491, Address: 0x18a69c, Func Offset: 0x6c
	// Line 1492, Address: 0x18a6c4, Func Offset: 0x94
	// Line 1504, Address: 0x18a6e4, Func Offset: 0xb4
	// Line 1505, Address: 0x18a6f4, Func Offset: 0xc4
	// Line 1506, Address: 0x18a72c, Func Offset: 0xfc
	// Line 1511, Address: 0x18a734, Func Offset: 0x104
	// Line 1513, Address: 0x18a764, Func Offset: 0x134
	// Line 1516, Address: 0x18a784, Func Offset: 0x154
	// Line 1517, Address: 0x18a794, Func Offset: 0x164
	// Line 1518, Address: 0x18a7cc, Func Offset: 0x19c
	// Line 1523, Address: 0x18a7d4, Func Offset: 0x1a4
	// Line 1525, Address: 0x18a800, Func Offset: 0x1d0
	// Line 1528, Address: 0x18a820, Func Offset: 0x1f0
	// Line 1529, Address: 0x18a830, Func Offset: 0x200
	// Line 1530, Address: 0x18a868, Func Offset: 0x238
	// Line 1535, Address: 0x18a870, Func Offset: 0x240
	// Line 1537, Address: 0x18a89c, Func Offset: 0x26c
	// Line 1541, Address: 0x18a8bc, Func Offset: 0x28c
	// Line 1540, Address: 0x18a8c8, Func Offset: 0x298
	// Line 1541, Address: 0x18a8cc, Func Offset: 0x29c
	// Func End, Address: 0x18a8d4, Func Offset: 0x2a4
}

// iSG_add_cfgholder__FP19st_ISG_MEMCARD_DATA
// Start address: 0x18a8e0
int32 iSG_add_cfgholder(st_ISG_MEMCARD_DATA* mcdata)
{
	int8* cfgname;
	int8* strptr;
	int8 cfgdata[992];
	// Line 1420, Address: 0x18a8e0, Func Offset: 0
	// Line 1425, Address: 0x18a8f8, Func Offset: 0x18
	// Line 1443, Address: 0x18a928, Func Offset: 0x48
	// Line 1445, Address: 0x18a93c, Func Offset: 0x5c
	// Line 1446, Address: 0x18a940, Func Offset: 0x60
	// Line 1447, Address: 0x18a948, Func Offset: 0x68
	// Line 1448, Address: 0x18a950, Func Offset: 0x70
	// Line 1450, Address: 0x18a958, Func Offset: 0x78
	// Line 1453, Address: 0x18a964, Func Offset: 0x84
	// Line 1456, Address: 0x18a974, Func Offset: 0x94
	// Line 1457, Address: 0x18a9ac, Func Offset: 0xcc
	// Line 1461, Address: 0x18a9b4, Func Offset: 0xd4
	// Line 1462, Address: 0x18a9d8, Func Offset: 0xf8
	// Line 1466, Address: 0x18a9f8, Func Offset: 0x118
	// Line 1465, Address: 0x18aa08, Func Offset: 0x128
	// Line 1466, Address: 0x18aa0c, Func Offset: 0x12c
	// Func End, Address: 0x18aa14, Func Offset: 0x134
}

// iSG_start_your_engines__Fv
// Start address: 0x18aa20
int32 iSG_start_your_engines()
{
	int32 rc;
	int32 result;
	// Line 1244, Address: 0x18aa20, Func Offset: 0
	// Line 1246, Address: 0x18aa34, Func Offset: 0x14
	// Line 1254, Address: 0x18aa38, Func Offset: 0x18
	// Line 1257, Address: 0x18aa40, Func Offset: 0x20
	// Line 1259, Address: 0x18aa48, Func Offset: 0x28
	// Line 1262, Address: 0x18aa50, Func Offset: 0x30
	// Line 1263, Address: 0x18aa54, Func Offset: 0x34
	// Line 1262, Address: 0x18aa58, Func Offset: 0x38
	// Line 1265, Address: 0x18aa5c, Func Offset: 0x3c
	// Line 1267, Address: 0x18aa64, Func Offset: 0x44
	// Line 1315, Address: 0x18aa78, Func Offset: 0x58
	// Line 1316, Address: 0x18aa80, Func Offset: 0x60
	// Line 1317, Address: 0x18aa88, Func Offset: 0x68
	// Line 1324, Address: 0x18aab0, Func Offset: 0x90
	// Line 1336, Address: 0x18aab8, Func Offset: 0x98
	// Line 1337, Address: 0x18aabc, Func Offset: 0x9c
	// Func End, Address: 0x18aad0, Func Offset: 0xb0
}

// iSGOpError__FP13st_ISGSESSIONPc
// Start address: 0x18aad0
en_ASYNC_OPERR iSGOpError(st_ISGSESSION* isgdata, int8* errmsg)
{
	// Line 1180, Address: 0x18aad0, Func Offset: 0
	// Line 1182, Address: 0x18aae0, Func Offset: 0x10
	// Line 1184, Address: 0x18ab10, Func Offset: 0x40
	// Line 1185, Address: 0x18ab24, Func Offset: 0x54
	// Line 1187, Address: 0x18ab2c, Func Offset: 0x5c
	// Line 1188, Address: 0x18ab40, Func Offset: 0x70
	// Line 1190, Address: 0x18ab48, Func Offset: 0x78
	// Line 1191, Address: 0x18ab5c, Func Offset: 0x8c
	// Line 1193, Address: 0x18ab64, Func Offset: 0x94
	// Line 1194, Address: 0x18ab78, Func Offset: 0xa8
	// Line 1196, Address: 0x18ab80, Func Offset: 0xb0
	// Line 1197, Address: 0x18ab94, Func Offset: 0xc4
	// Line 1199, Address: 0x18ab9c, Func Offset: 0xcc
	// Line 1200, Address: 0x18abb0, Func Offset: 0xe0
	// Line 1202, Address: 0x18abb8, Func Offset: 0xe8
	// Line 1203, Address: 0x18abcc, Func Offset: 0xfc
	// Line 1205, Address: 0x18abd4, Func Offset: 0x104
	// Line 1206, Address: 0x18abe8, Func Offset: 0x118
	// Line 1208, Address: 0x18abf0, Func Offset: 0x120
	// Line 1209, Address: 0x18ac04, Func Offset: 0x134
	// Line 1211, Address: 0x18ac0c, Func Offset: 0x13c
	// Line 1212, Address: 0x18ac20, Func Offset: 0x150
	// Line 1214, Address: 0x18ac28, Func Offset: 0x158
	// Line 1215, Address: 0x18ac3c, Func Offset: 0x16c
	// Line 1217, Address: 0x18ac44, Func Offset: 0x174
	// Line 1218, Address: 0x18ac58, Func Offset: 0x188
	// Line 1220, Address: 0x18ac60, Func Offset: 0x190
	// Line 1221, Address: 0x18ac74, Func Offset: 0x1a4
	// Line 1223, Address: 0x18ac7c, Func Offset: 0x1ac
	// Line 1224, Address: 0x18ac90, Func Offset: 0x1c0
	// Line 1226, Address: 0x18ac98, Func Offset: 0x1c8
	// Line 1230, Address: 0x18acb0, Func Offset: 0x1e0
	// Line 1232, Address: 0x18acb4, Func Offset: 0x1e4
	// Line 1233, Address: 0x18acb8, Func Offset: 0x1e8
	// Func End, Address: 0x18accc, Func Offset: 0x1fc
}

// iSGPollStatus__FP13st_ISGSESSIONP15en_ASYNC_OPCODEi
// Start address: 0x18acd0
en_ASYNC_OPSTAT iSGPollStatus(st_ISGSESSION* isgdata, en_ASYNC_OPCODE* curop, int32 block)
{
	int32 rc;
	// Line 1109, Address: 0x18acd0, Func Offset: 0
	// Line 1113, Address: 0x18ace0, Func Offset: 0x10
	// Line 1118, Address: 0x18acf0, Func Offset: 0x20
	// Line 1120, Address: 0x18acfc, Func Offset: 0x2c
	// Line 1121, Address: 0x18ad00, Func Offset: 0x30
	// Line 1122, Address: 0x18ad08, Func Offset: 0x38
	// Line 1131, Address: 0x18ad10, Func Offset: 0x40
	// Line 1133, Address: 0x18ad20, Func Offset: 0x50
	// Line 1134, Address: 0x18ad28, Func Offset: 0x58
	// Line 1136, Address: 0x18ad2c, Func Offset: 0x5c
	// Line 1137, Address: 0x18ad34, Func Offset: 0x64
	// Line 1138, Address: 0x18ad3c, Func Offset: 0x6c
	// Line 1139, Address: 0x18ad40, Func Offset: 0x70
	// Line 1141, Address: 0x18ad6c, Func Offset: 0x9c
	// Line 1142, Address: 0x18ad70, Func Offset: 0xa0
	// Line 1145, Address: 0x18ad78, Func Offset: 0xa8
	// Line 1146, Address: 0x18ad7c, Func Offset: 0xac
	// Line 1149, Address: 0x18ad84, Func Offset: 0xb4
	// Line 1150, Address: 0x18ad88, Func Offset: 0xb8
	// Line 1170, Address: 0x18ad90, Func Offset: 0xc0
	// Line 1171, Address: 0x18ad94, Func Offset: 0xc4
	// Line 1172, Address: 0x18ad98, Func Offset: 0xc8
	// Line 1175, Address: 0x18adb8, Func Offset: 0xe8
	// Line 1176, Address: 0x18adc0, Func Offset: 0xf0
	// Func End, Address: 0x18add4, Func Offset: 0x104
}

// iSGReadLeader__FP13st_ISGSESSIONPCcPcii
// Start address: 0x18ade0
int32 iSGReadLeader(st_ISGSESSION* isgdata, int8* fname, int8* databuf, int32 numbytes, int32 async)
{
	int32 rc;
	int32 result;
	// Line 1005, Address: 0x18ade0, Func Offset: 0
	// Line 1017, Address: 0x18ae08, Func Offset: 0x28
	// Line 1006, Address: 0x18ae14, Func Offset: 0x34
	// Line 1017, Address: 0x18ae24, Func Offset: 0x44
	// Line 1019, Address: 0x18ae58, Func Offset: 0x78
	// Line 1021, Address: 0x18ae60, Func Offset: 0x80
	// Line 1022, Address: 0x18ae64, Func Offset: 0x84
	// Line 1023, Address: 0x18ae6c, Func Offset: 0x8c
	// Line 1024, Address: 0x18ae74, Func Offset: 0x94
	// Line 1027, Address: 0x18ae78, Func Offset: 0x98
	// Line 1030, Address: 0x18ae88, Func Offset: 0xa8
	// Line 1031, Address: 0x18ae8c, Func Offset: 0xac
	// Line 1032, Address: 0x18ae90, Func Offset: 0xb0
	// Line 1038, Address: 0x18ae94, Func Offset: 0xb4
	// Line 1040, Address: 0x18aed0, Func Offset: 0xf0
	// Line 1043, Address: 0x18aed8, Func Offset: 0xf8
	// Line 1044, Address: 0x18aedc, Func Offset: 0xfc
	// Line 1046, Address: 0x18aee4, Func Offset: 0x104
	// Line 1052, Address: 0x18aeec, Func Offset: 0x10c
	// Line 1054, Address: 0x18aef4, Func Offset: 0x114
	// Line 1056, Address: 0x18af04, Func Offset: 0x124
	// Line 1059, Address: 0x18af0c, Func Offset: 0x12c
	// Line 1060, Address: 0x18af14, Func Offset: 0x134
	// Line 1064, Address: 0x18af1c, Func Offset: 0x13c
	// Line 1061, Address: 0x18af20, Func Offset: 0x140
	// Line 1064, Address: 0x18af24, Func Offset: 0x144
	// Line 1067, Address: 0x18af40, Func Offset: 0x160
	// Line 1071, Address: 0x18af48, Func Offset: 0x168
	// Line 1073, Address: 0x18af84, Func Offset: 0x1a4
	// Line 1078, Address: 0x18af8c, Func Offset: 0x1ac
	// Line 1079, Address: 0x18af90, Func Offset: 0x1b0
	// Line 1080, Address: 0x18af98, Func Offset: 0x1b8
	// Line 1083, Address: 0x18af9c, Func Offset: 0x1bc
	// Line 1090, Address: 0x18afbc, Func Offset: 0x1dc
	// Line 1091, Address: 0x18afc0, Func Offset: 0x1e0
	// Func End, Address: 0x18afec, Func Offset: 0x20c
}

// iSGLoadFile__FP13st_ISGSESSIONPCcPci
// Start address: 0x18aff0
int32 iSGLoadFile(st_ISGSESSION* isgdata, int8* fname, int8* databuf, int32 async)
{
	// Line 985, Address: 0x18aff0, Func Offset: 0
	// Line 993, Address: 0x18b00c, Func Offset: 0x1c
	// Line 999, Address: 0x18b048, Func Offset: 0x58
	// Line 1001, Address: 0x18b058, Func Offset: 0x68
	// Line 1000, Address: 0x18b070, Func Offset: 0x80
	// Line 1001, Address: 0x18b074, Func Offset: 0x84
	// Func End, Address: 0x18b07c, Func Offset: 0x8c
}

// iSGSaveFile__FP13st_ISGSESSIONPCcPcii
// Start address: 0x18b080
int32 iSGSaveFile(st_ISGSESSION* isgdata, int8* fname, int8* data, int32 n, int32 async)
{
	int32 rc;
	int32 result;
	// Line 885, Address: 0x18b080, Func Offset: 0
	// Line 895, Address: 0x18b0a8, Func Offset: 0x28
	// Line 886, Address: 0x18b0b4, Func Offset: 0x34
	// Line 895, Address: 0x18b0c4, Func Offset: 0x44
	// Line 897, Address: 0x18b0f8, Func Offset: 0x78
	// Line 899, Address: 0x18b100, Func Offset: 0x80
	// Line 900, Address: 0x18b104, Func Offset: 0x84
	// Line 901, Address: 0x18b10c, Func Offset: 0x8c
	// Line 902, Address: 0x18b114, Func Offset: 0x94
	// Line 905, Address: 0x18b118, Func Offset: 0x98
	// Line 909, Address: 0x18b128, Func Offset: 0xa8
	// Line 910, Address: 0x18b12c, Func Offset: 0xac
	// Line 911, Address: 0x18b130, Func Offset: 0xb0
	// Line 918, Address: 0x18b134, Func Offset: 0xb4
	// Line 920, Address: 0x18b16c, Func Offset: 0xec
	// Line 923, Address: 0x18b174, Func Offset: 0xf4
	// Line 924, Address: 0x18b178, Func Offset: 0xf8
	// Line 926, Address: 0x18b180, Func Offset: 0x100
	// Line 932, Address: 0x18b188, Func Offset: 0x108
	// Line 938, Address: 0x18b190, Func Offset: 0x110
	// Line 940, Address: 0x18b1a0, Func Offset: 0x120
	// Line 943, Address: 0x18b1a8, Func Offset: 0x128
	// Line 944, Address: 0x18b1b0, Func Offset: 0x130
	// Line 947, Address: 0x18b1b8, Func Offset: 0x138
	// Line 945, Address: 0x18b1bc, Func Offset: 0x13c
	// Line 947, Address: 0x18b1c0, Func Offset: 0x140
	// Line 950, Address: 0x18b1dc, Func Offset: 0x15c
	// Line 954, Address: 0x18b1e4, Func Offset: 0x164
	// Line 956, Address: 0x18b21c, Func Offset: 0x19c
	// Line 959, Address: 0x18b224, Func Offset: 0x1a4
	// Line 963, Address: 0x18b244, Func Offset: 0x1c4
	// Line 964, Address: 0x18b280, Func Offset: 0x200
	// Line 966, Address: 0x18b288, Func Offset: 0x208
	// Line 969, Address: 0x18b290, Func Offset: 0x210
	// Line 970, Address: 0x18b294, Func Offset: 0x214
	// Line 971, Address: 0x18b29c, Func Offset: 0x21c
	// Line 978, Address: 0x18b2a0, Func Offset: 0x220
	// Line 979, Address: 0x18b2a4, Func Offset: 0x224
	// Func End, Address: 0x18b2d0, Func Offset: 0x250
}

// iSGSetupGameDir__FP13st_ISGSESSIONPCci
// Start address: 0x18b2d0
int32 iSGSetupGameDir(st_ISGSESSION* isgdata, int8* dname, int32 force_iconfix)
{
	int8* strptr;
	int32 dir_isnew;
	st_ISG_MEMCARD_DATA* mcdata;
	int32 rc;
	int32 result;
	// Line 758, Address: 0x18b2d0, Func Offset: 0
	// Line 762, Address: 0x18b2ec, Func Offset: 0x1c
	// Line 759, Address: 0x18b2f8, Func Offset: 0x28
	// Line 763, Address: 0x18b2fc, Func Offset: 0x2c
	// Line 771, Address: 0x18b300, Func Offset: 0x30
	// Line 772, Address: 0x18b308, Func Offset: 0x38
	// Line 777, Address: 0x18b320, Func Offset: 0x50
	// Line 778, Address: 0x18b330, Func Offset: 0x60
	// Line 781, Address: 0x18b338, Func Offset: 0x68
	// Line 785, Address: 0x18b33c, Func Offset: 0x6c
	// Line 786, Address: 0x18b370, Func Offset: 0xa0
	// Line 790, Address: 0x18b37c, Func Offset: 0xac
	// Line 794, Address: 0x18b384, Func Offset: 0xb4
	// Line 795, Address: 0x18b3b4, Func Offset: 0xe4
	// Line 799, Address: 0x18b3c0, Func Offset: 0xf0
	// Line 804, Address: 0x18b3c8, Func Offset: 0xf8
	// Line 805, Address: 0x18b3f8, Func Offset: 0x128
	// Line 808, Address: 0x18b404, Func Offset: 0x134
	// Line 817, Address: 0x18b414, Func Offset: 0x144
	// Line 818, Address: 0x18b420, Func Offset: 0x150
	// Line 819, Address: 0x18b434, Func Offset: 0x164
	// Line 820, Address: 0x18b444, Func Offset: 0x174
	// Line 821, Address: 0x18b458, Func Offset: 0x188
	// Line 822, Address: 0x18b468, Func Offset: 0x198
	// Line 823, Address: 0x18b478, Func Offset: 0x1a8
	// Line 822, Address: 0x18b47c, Func Offset: 0x1ac
	// Line 823, Address: 0x18b480, Func Offset: 0x1b0
	// Line 824, Address: 0x18b48c, Func Offset: 0x1bc
	// Line 825, Address: 0x18b4a0, Func Offset: 0x1d0
	// Line 826, Address: 0x18b4b0, Func Offset: 0x1e0
	// Line 828, Address: 0x18b4c4, Func Offset: 0x1f4
	// Line 839, Address: 0x18b4d0, Func Offset: 0x200
	// Line 849, Address: 0x18b4dc, Func Offset: 0x20c
	// Line 854, Address: 0x18b4e4, Func Offset: 0x214
	// Line 860, Address: 0x18b4ec, Func Offset: 0x21c
	// Line 861, Address: 0x18b4f8, Func Offset: 0x228
	// Line 862, Address: 0x18b508, Func Offset: 0x238
	// Line 863, Address: 0x18b510, Func Offset: 0x240
	// Line 864, Address: 0x18b518, Func Offset: 0x248
	// Line 868, Address: 0x18b524, Func Offset: 0x254
	// Line 869, Address: 0x18b530, Func Offset: 0x260
	// Line 877, Address: 0x18b53c, Func Offset: 0x26c
	// Line 878, Address: 0x18b540, Func Offset: 0x270
	// Func End, Address: 0x18b560, Func Offset: 0x290
}

// iSGSelectGameDir__FP13st_ISGSESSIONPCc
// Start address: 0x18b560
int32 iSGSelectGameDir(st_ISGSESSION* isgdata, int8* dname)
{
	// Line 729, Address: 0x18b560, Func Offset: 0
	// Line 740, Address: 0x18b570, Func Offset: 0x10
	// Line 741, Address: 0x18b584, Func Offset: 0x24
	// Line 742, Address: 0x18b594, Func Offset: 0x34
	// Line 743, Address: 0x18b59c, Func Offset: 0x3c
	// Line 744, Address: 0x18b5b0, Func Offset: 0x50
	// Line 746, Address: 0x18b5b4, Func Offset: 0x54
	// Line 744, Address: 0x18b5b8, Func Offset: 0x58
	// Line 746, Address: 0x18b5bc, Func Offset: 0x5c
	// Line 748, Address: 0x18b5f4, Func Offset: 0x94
	// Line 749, Address: 0x18b5f8, Func Offset: 0x98
	// Func End, Address: 0x18b60c, Func Offset: 0xac
}

// iSGFileModDate__FP13st_ISGSESSIONPCcPiPiPiPiPiPi
// Start address: 0x18b610
int8* iSGFileModDate(st_ISGSESSION* isgdata, int8* fname, int32* sec, int32* min, int32* hr, int32* mon, int32* day, int32* yr)
{
	sceCdCLOCK clock;
	sceMcTblGetDir* finf;
	int32 rc;
	int8 datestr[64];
	// Line 679, Address: 0x18b610, Func Offset: 0
	// Line 682, Address: 0x18b634, Func Offset: 0x24
	// Line 686, Address: 0x18b638, Func Offset: 0x28
	// Line 688, Address: 0x18b640, Func Offset: 0x30
	// Line 690, Address: 0x18b64c, Func Offset: 0x3c
	// Line 695, Address: 0x18b65c, Func Offset: 0x4c
	// Line 696, Address: 0x18b66c, Func Offset: 0x5c
	// Line 697, Address: 0x18b67c, Func Offset: 0x6c
	// Line 698, Address: 0x18b68c, Func Offset: 0x7c
	// Line 699, Address: 0x18b69c, Func Offset: 0x8c
	// Line 700, Address: 0x18b6ac, Func Offset: 0x9c
	// Line 702, Address: 0x18b6bc, Func Offset: 0xac
	// Line 704, Address: 0x18b6c4, Func Offset: 0xb4
	// Line 705, Address: 0x18b6d0, Func Offset: 0xc0
	// Line 706, Address: 0x18b6dc, Func Offset: 0xcc
	// Line 707, Address: 0x18b6e8, Func Offset: 0xd8
	// Line 708, Address: 0x18b6f4, Func Offset: 0xe4
	// Line 709, Address: 0x18b700, Func Offset: 0xf0
	// Line 712, Address: 0x18b710, Func Offset: 0x100
	// Line 716, Address: 0x18b73c, Func Offset: 0x12c
	// Line 717, Address: 0x18b744, Func Offset: 0x134
	// Func End, Address: 0x18b76c, Func Offset: 0x15c
}

// iSGFileModDate__FP13st_ISGSESSIONPCc
// Start address: 0x18b770
int8* iSGFileModDate(st_ISGSESSION* isgdata, int8* fname)
{
	int8* date_str;
	// Line 654, Address: 0x18b770, Func Offset: 0
	// Func End, Address: 0x18b78c, Func Offset: 0x1c
}

// iSGFileSize__FP13st_ISGSESSIONPCc
// Start address: 0x18b790
int32 iSGFileSize(st_ISGSESSION* isgdata, int8* fname)
{
	int32 size;
	// Line 600, Address: 0x18b790, Func Offset: 0
	// Line 605, Address: 0x18b79c, Func Offset: 0xc
	// Line 607, Address: 0x18b7bc, Func Offset: 0x2c
	// Line 609, Address: 0x18b7c8, Func Offset: 0x38
	// Func End, Address: 0x18b7d8, Func Offset: 0x48
}

// iSGTgtHaveRoom__FP13st_ISGSESSIONiiPCcPCcPiPi
// Start address: 0x18b7e0
int32 iSGTgtHaveRoom(st_ISGSESSION* isgdata, int32 tidx, int32 fsize, int8* dpath, int8* fname, int32* bytesNeeded, int32* availOnDisk)
{
	int32 result;
	// Line 538, Address: 0x18b7e0, Func Offset: 0
	// Func End, Address: 0x18b7e8, Func Offset: 0x8
}

// iSGTgtSetActive__FP13st_ISGSESSIONi
// Start address: 0x18b7f0
int32 iSGTgtSetActive(st_ISGSESSION* isgdata, int32 tgtidx)
{
	// Line 516, Address: 0x18b7f0, Func Offset: 0
	// Line 520, Address: 0x18b800, Func Offset: 0x10
	// Line 522, Address: 0x18b848, Func Offset: 0x58
	// Line 523, Address: 0x18b84c, Func Offset: 0x5c
	// Func End, Address: 0x18b860, Func Offset: 0x70
}

// iSGTgtState__FP13st_ISGSESSIONiPCc
// Start address: 0x18b860
uint32 iSGTgtState(st_ISGSESSION* isgdata, int32 tgtidx, int8* dpath)
{
	int32 rc;
	uint32 state;
	// Line 475, Address: 0x18b860, Func Offset: 0
	// Line 483, Address: 0x18b87c, Func Offset: 0x1c
	// Line 484, Address: 0x18b890, Func Offset: 0x30
	// Line 485, Address: 0x18b898, Func Offset: 0x38
	// Line 487, Address: 0x18b8a0, Func Offset: 0x40
	// Line 488, Address: 0x18b8ac, Func Offset: 0x4c
	// Line 489, Address: 0x18b8b4, Func Offset: 0x54
	// Line 492, Address: 0x18b8bc, Func Offset: 0x5c
	// Line 493, Address: 0x18b8c8, Func Offset: 0x68
	// Line 494, Address: 0x18b8d8, Func Offset: 0x78
	// Line 496, Address: 0x18b8e0, Func Offset: 0x80
	// Line 497, Address: 0x18b8e8, Func Offset: 0x88
	// Line 498, Address: 0x18b920, Func Offset: 0xc0
	// Line 501, Address: 0x18b92c, Func Offset: 0xcc
	// Line 502, Address: 0x18b930, Func Offset: 0xd0
	// Func End, Address: 0x18b94c, Func Offset: 0xec
}

// iSGTgtFormat__FP13st_ISGSESSIONii
// Start address: 0x18b950
int32 iSGTgtFormat(st_ISGSESSION* isgdata, int32 tgtidx, int32 async)
{
	int32 rc;
	int32 result;
	// Line 433, Address: 0x18b950, Func Offset: 0
	// Line 437, Address: 0x18b96c, Func Offset: 0x1c
	// Line 439, Address: 0x18b980, Func Offset: 0x30
	// Line 442, Address: 0x18b98c, Func Offset: 0x3c
	// Line 443, Address: 0x18b998, Func Offset: 0x48
	// Line 445, Address: 0x18b9a8, Func Offset: 0x58
	// Line 446, Address: 0x18b9e0, Func Offset: 0x90
	// Line 447, Address: 0x18b9e8, Func Offset: 0x98
	// Line 448, Address: 0x18b9f0, Func Offset: 0xa0
	// Line 452, Address: 0x18b9f8, Func Offset: 0xa8
	// Line 454, Address: 0x18b9fc, Func Offset: 0xac
	// Line 455, Address: 0x18ba08, Func Offset: 0xb8
	// Line 456, Address: 0x18ba10, Func Offset: 0xc0
	// Line 457, Address: 0x18ba14, Func Offset: 0xc4
	// Line 459, Address: 0x18ba1c, Func Offset: 0xcc
	// Line 462, Address: 0x18ba24, Func Offset: 0xd4
	// Line 463, Address: 0x18ba28, Func Offset: 0xd8
	// Line 468, Address: 0x18ba2c, Func Offset: 0xdc
	// Line 469, Address: 0x18ba30, Func Offset: 0xe0
	// Func End, Address: 0x18ba4c, Func Offset: 0xfc
}

// iSGTgtPhysSlotIdx__FP13st_ISGSESSIONi
// Start address: 0x18ba50
int32 iSGTgtPhysSlotIdx()
{
	int32 ds;
	int32 dp;
	int32 concnt[2];
	// Line 370, Address: 0x18ba50, Func Offset: 0
	// Line 372, Address: 0x18ba58, Func Offset: 0x8
	// Line 378, Address: 0x18ba60, Func Offset: 0x10
	// Line 387, Address: 0x18ba74, Func Offset: 0x24
	// Line 388, Address: 0x18ba78, Func Offset: 0x28
	// Func End, Address: 0x18ba84, Func Offset: 0x34
}

// iSGTgtCount__FP13st_ISGSESSIONPi
// Start address: 0x18ba90
int32 iSGTgtCount(int32* max)
{
	int32 ds;
	int32 dp;
	int32 concnt[2];
	int32 tgtmax;
	int32 rc;
	// Line 340, Address: 0x18ba90, Func Offset: 0
	// Line 343, Address: 0x18baa0, Func Offset: 0x10
	// Line 348, Address: 0x18baac, Func Offset: 0x1c
	// Line 351, Address: 0x18bac0, Func Offset: 0x30
	// Line 355, Address: 0x18bacc, Func Offset: 0x3c
	// Line 357, Address: 0x18bad4, Func Offset: 0x44
	// Line 359, Address: 0x18bae0, Func Offset: 0x50
	// Line 363, Address: 0x18baec, Func Offset: 0x5c
	// Line 364, Address: 0x18baf4, Func Offset: 0x64
	// Line 363, Address: 0x18bb00, Func Offset: 0x70
	// Line 364, Address: 0x18bb04, Func Offset: 0x74
	// Func End, Address: 0x18bb0c, Func Offset: 0x7c
}

// iSGSessionEnd__FP13st_ISGSESSION
// Start address: 0x18bb10
void iSGSessionEnd(st_ISGSESSION* isgdata)
{
	// Line 316, Address: 0x18bb10, Func Offset: 0
	// Func End, Address: 0x18bb1c, Func Offset: 0xc
}

// iSGSessionBegin__FPvPFPv10en_CHGCODE_v
// Start address: 0x18bb20
st_ISGSESSION* iSGSessionBegin()
{
	// Line 280, Address: 0x18bb20, Func Offset: 0
	// Line 285, Address: 0x18bb24, Func Offset: 0x4
	// Line 280, Address: 0x18bb28, Func Offset: 0x8
	// Line 285, Address: 0x18bb2c, Func Offset: 0xc
	// Line 288, Address: 0x18bb3c, Func Offset: 0x1c
	// Line 289, Address: 0x18bb4c, Func Offset: 0x2c
	// Line 290, Address: 0x18bb54, Func Offset: 0x34
	// Line 294, Address: 0x18bb60, Func Offset: 0x40
	// Line 291, Address: 0x18bb64, Func Offset: 0x44
	// Line 294, Address: 0x18bb68, Func Offset: 0x48
	// Line 291, Address: 0x18bb6c, Func Offset: 0x4c
	// Line 294, Address: 0x18bb70, Func Offset: 0x50
	// Line 292, Address: 0x18bb74, Func Offset: 0x54
	// Line 294, Address: 0x18bb78, Func Offset: 0x58
	// Line 299, Address: 0x18bb84, Func Offset: 0x64
	// Line 308, Address: 0x18bb90, Func Offset: 0x70
	// Line 299, Address: 0x18bb98, Func Offset: 0x78
	// Line 300, Address: 0x18bb9c, Func Offset: 0x7c
	// Line 301, Address: 0x18bba8, Func Offset: 0x88
	// Line 302, Address: 0x18bbb4, Func Offset: 0x94
	// Line 303, Address: 0x18bbc0, Func Offset: 0xa0
	// Line 304, Address: 0x18bbcc, Func Offset: 0xac
	// Line 309, Address: 0x18bbd8, Func Offset: 0xb8
	// Func End, Address: 0x18bbe4, Func Offset: 0xc4
}

// iSGMakeName__F15en_NAMEGEN_TYPEPCci
// Start address: 0x18bbf0
int8* iSGMakeName(en_NAMEGEN_TYPE type, int8* base, int32 idx)
{
	int8* fmt_sbd;
	int8* fmt_sd;
	int8* fmt_sb;
	int8* use_buf;
	int32 rotate;
	int8 rotatebuf[32][8];
	int8 init;
	// Line 182, Address: 0x18bbf0, Func Offset: 0
	// Line 184, Address: 0x18bbfc, Func Offset: 0xc
	// Line 186, Address: 0x18bc18, Func Offset: 0x28
	// Line 193, Address: 0x18bc20, Func Offset: 0x30
	// Line 187, Address: 0x18bc24, Func Offset: 0x34
	// Line 188, Address: 0x18bc2c, Func Offset: 0x3c
	// Line 193, Address: 0x18bc34, Func Offset: 0x44
	// Line 194, Address: 0x18bc4c, Func Offset: 0x5c
	// Line 210, Address: 0x18bc60, Func Offset: 0x70
	// Line 213, Address: 0x18bc8c, Func Offset: 0x9c
	// Line 214, Address: 0x18bcac, Func Offset: 0xbc
	// Line 215, Address: 0x18bcbc, Func Offset: 0xcc
	// Line 228, Address: 0x18bcc4, Func Offset: 0xd4
	// Line 230, Address: 0x18bccc, Func Offset: 0xdc
	// Line 231, Address: 0x18bcf0, Func Offset: 0x100
	// Line 232, Address: 0x18bd00, Func Offset: 0x110
	// Line 234, Address: 0x18bd08, Func Offset: 0x118
	// Line 235, Address: 0x18bd10, Func Offset: 0x120
	// Line 237, Address: 0x18bd2c, Func Offset: 0x13c
	// Line 238, Address: 0x18bd34, Func Offset: 0x144
	// Line 240, Address: 0x18bd4c, Func Offset: 0x15c
	// Line 244, Address: 0x18bd54, Func Offset: 0x164
	// Line 245, Address: 0x18bd5c, Func Offset: 0x16c
	// Line 247, Address: 0x18bd6c, Func Offset: 0x17c
	// Line 248, Address: 0x18bd74, Func Offset: 0x184
	// Line 250, Address: 0x18bd7c, Func Offset: 0x18c
	// Line 251, Address: 0x18bd8c, Func Offset: 0x19c
	// Line 252, Address: 0x18bd9c, Func Offset: 0x1ac
	// Line 255, Address: 0x18bda4, Func Offset: 0x1b4
	// Line 256, Address: 0x18bdb4, Func Offset: 0x1c4
	// Line 268, Address: 0x18bdc4, Func Offset: 0x1d4
	// Line 269, Address: 0x18bdc8, Func Offset: 0x1d8
	// Func End, Address: 0x18bdd8, Func Offset: 0x1e8
}

// iSGShutdown__Fv
// Start address: 0x18bde0
int32 iSGShutdown()
{
	// Line 161, Address: 0x18bde0, Func Offset: 0
	// Line 173, Address: 0x18bdec, Func Offset: 0xc
	// Func End, Address: 0x18bdf4, Func Offset: 0x14
}

// iSGStartup__Fv
// Start address: 0x18be00
int32 iSGStartup()
{
	// Line 102, Address: 0x18be00, Func Offset: 0
	// Line 108, Address: 0x18be08, Func Offset: 0x8
	// Line 116, Address: 0x18be18, Func Offset: 0x18
	// Line 154, Address: 0x18be20, Func Offset: 0x20
	// Line 153, Address: 0x18be24, Func Offset: 0x24
	// Line 154, Address: 0x18be28, Func Offset: 0x28
	// Func End, Address: 0x18be30, Func Offset: 0x30
}

