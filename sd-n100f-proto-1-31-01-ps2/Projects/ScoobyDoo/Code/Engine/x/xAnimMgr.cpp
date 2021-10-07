typedef struct iAnimData;
typedef struct _Bigint;
typedef struct xAnimMgr;
typedef struct compressed_pair;
typedef struct vector_0;
typedef struct compile_assert;
typedef struct tagXStreamMDSDirectory;
typedef struct _reent;
typedef struct _atexit;
typedef struct _RwV3d;
typedef struct iAnimInstance;
typedef struct xModule;
typedef struct allocator;
typedef struct __sFILE;
typedef struct __vector_pod;
typedef struct XStreamHeader;
typedef struct xAnimData;
typedef struct _RpSkinFrame;
typedef struct __sbuf;
typedef struct _RpSkinAnim;
typedef struct tagXStreamDirectoryEntry;
typedef struct tm;
typedef struct _RtQuat;
typedef struct _class_0;
typedef struct _class_1;
typedef struct __vector_imp_0;
typedef struct _glue;
typedef struct _class_2;
typedef struct _anon0;
typedef struct __vector_imp_1;
typedef struct vector_1;
typedef struct compressed_pair_imp;

typedef int32(*type_0)(void*);
typedef void(*type_6)(int32);
typedef void(*type_9)();
typedef void(*type_12)(_reent*);
typedef int32(*type_14)(void*, int8*, int32);
typedef int32(*type_17)(void*, int8*, int32);
typedef long32(*type_18)(void*, long32, int32);

typedef uint32 type_1[30];
typedef uint8 type_2[3];
typedef uint8 type_3[1];
typedef uint32 type_4[1];
typedef tagXStreamDirectoryEntry type_5[1000];
typedef int8 type_7[32];
typedef __sFILE type_8[3];
typedef void(*type_10)()[32];
typedef int8 type_11[25];
typedef int8 type_13[2048];
typedef int8 type_15[26];
typedef int8 type_16[128];
typedef uint8* type_19[30];

struct iAnimData
{
	_RpSkinAnim* skin_anim;
	int8* m_name;
	float32 duration;
};

struct _Bigint
{
	_Bigint* _next;
	int32 _k;
	int32 _maxwds;
	int32 _sign;
	int32 _wds;
	uint32 _x[1];
};

struct xAnimMgr : xModule
{
	vector_1 anims;
	vector_0 ress;
	uint32 ID_counter;

	void* __dt();
	void restart();
	xAnimData* getAnimData(uint32 anim_ID);
	uint32 loadAnim(int8* filename, int8* name);
	void kill();
	void init();
};

struct compressed_pair : compressed_pair_imp
{
};

struct vector_0 : __vector_imp_1
{
};

struct compile_assert
{
};

struct tagXStreamMDSDirectory
{
	uint32 count;
	tagXStreamDirectoryEntry directory[1000];
};

struct _reent
{
	int32 _errno;
	__sFILE* _stdin;
	__sFILE* _stdout;
	__sFILE* _stderr;
	int32 _inc;
	int8 _emergency[25];
	int32 _current_category;
	int8* _current_locale;
	int32 __sdidinit;
	void(*__cleanup)(_reent*);
	_Bigint* _result;
	int32 _result_k;
	_Bigint* _p5s;
	_Bigint** _freelist;
	int32 _cvtlen;
	int8* _cvtbuf;
	_class_0 _new;
	_atexit* _atexit;
	_atexit _atexit0;
	void(*_sig_func)(int32);
	_glue __sglue;
	__sFILE __sf[3];
};

struct _atexit
{
	_atexit* _next;
	int32 _ind;
	void(*_fns)()[32];
};

struct _RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct iAnimInstance
{
	float32 time;
};

struct xModule
{
	int32 m_type;
	int8 m_name[32];
	int32 m_init;
	int32 m_state;
};

struct allocator
{
};

struct __sFILE
{
	uint8* _p;
	int32 _r;
	int32 _w;
	int16 _flags;
	int16 _file;
	__sbuf _bf;
	int32 _lbfsize;
	void* _cookie;
	int32(*_read)(void*, int8*, int32);
	int32(*_write)(void*, int8*, int32);
	long32(*_seek)(void*, long32, int32);
	int32(*_close)(void*);
	__sbuf _ub;
	uint8* _up;
	int32 _ur;
	uint8 _ubuf[3];
	uint8 _nbuf[1];
	__sbuf _lb;
	int32 _blksize;
	int32 _offset;
	_reent* _data;
};

struct __vector_pod
{
	compressed_pair capacity_;
	uint32 size_;
	uint32* data_;

	void reserve(uint32 n);
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

struct xAnimData : iAnimInstance
{
	uint32 m_assetID;
	uint32 m_ID;
	iAnimData* m_resource;
};

struct _RpSkinFrame
{
	_RtQuat q;
	_RwV3d t;
	float32 time;
	_RpSkinFrame* prevFrame;
};

struct __sbuf
{
	uint8* _base;
	int32 _size;
};

struct _RpSkinAnim
{
	int32 numFrames;
	int32 flags;
	float32 duration;
	_RpSkinFrame* pFrames;
};

struct tagXStreamDirectoryEntry
{
	uint32 id;
	uint32 type;
	uint32 offset;
	uint32 length;
};

struct tm
{
	int32 tm_sec;
	int32 tm_min;
	int32 tm_hour;
	int32 tm_mday;
	int32 tm_mon;
	int32 tm_year;
	int32 tm_wday;
	int32 tm_yday;
	int32 tm_isdst;
};

struct _RtQuat
{
	_RwV3d imag;
	float32 real;
};

struct _class_0
{
	union
	{
		_class_1 _reent;
		_class_2 _unused;
	};
};

struct _class_1
{
	uint32 _rand_next;
	int8* _strtok_last;
	int8 _asctime_buf[26];
	tm _localtime_buf;
	int32 _gamma_signgam;
};

struct __vector_imp_0 : __vector_pod, compile_assert
{
};

struct _glue
{
	_glue* _next;
	int32 _niobs;
	__sFILE* _iobs;
};

struct _class_2
{
	uint8* _nextf[30];
	uint32 _nmalloc[30];
};

struct _anon0
{
};

struct __vector_imp_1 : __vector_pod, compile_assert
{
};

struct vector_1 : __vector_imp_0
{
};

struct compressed_pair_imp : allocator
{
	uint32 second_;
};

xAnimMgr* gAnimMgr;
_anon0 __vt__8xAnimMgr;
int8 vAssertBuf2[128];
XStreamHeader currentHeader;
_reent* _impure_ptr;

xAnimData* getAnimData(uint32 anim_ID);
uint32 loadAnim(int8* filename, int8* name);
void nextFrame();
void kill();
void init();

// getAnimData__8xAnimMgrFUi
// Start address: 0x3ffbd0
xAnimData* xAnimMgr::getAnimData(uint32 anim_ID)
{
	xAnimData** ea;
	xAnimData** ai;
	// Line 93, Address: 0x3ffbd0, Func Offset: 0
	// Line 95, Address: 0x3ffbec, Func Offset: 0x1c
	// Line 97, Address: 0x3ffbfc, Func Offset: 0x2c
	// Line 99, Address: 0x3ffc08, Func Offset: 0x38
	// Line 100, Address: 0x3ffc18, Func Offset: 0x48
	// Line 101, Address: 0x3ffc1c, Func Offset: 0x4c
	// Func End, Address: 0x3ffc24, Func Offset: 0x54
}

// loadAnim__8xAnimMgrFPCcPCcUi
// Start address: 0x3ffc30
uint32 xAnimMgr::loadAnim(int8* filename, int8* name)
{
	xAnimData* dat;
	iAnimData* res;
	// Line 58, Address: 0x3ffc30, Func Offset: 0
	// Line 59, Address: 0x3ffc5c, Func Offset: 0x2c
	// Line 61, Address: 0x3ffcd8, Func Offset: 0xa8
	// Line 63, Address: 0x3ffce4, Func Offset: 0xb4
	// Line 64, Address: 0x3ffd10, Func Offset: 0xe0
	// Line 65, Address: 0x3ffdb4, Func Offset: 0x184
	// Line 69, Address: 0x3ffe38, Func Offset: 0x208
	// Line 71, Address: 0x3ffe70, Func Offset: 0x240
	// Line 72, Address: 0x3fff14, Func Offset: 0x2e4
	// Line 73, Address: 0x3fff98, Func Offset: 0x368
	// Line 74, Address: 0x3fff9c, Func Offset: 0x36c
	// Func End, Address: 0x3fffc4, Func Offset: 0x394
}

// nextFrame__8xAnimMgrFv
// Start address: 0x3fffd0
void xAnimMgr::nextFrame()
{
	// Line 54, Address: 0x3fffd0, Func Offset: 0
	// Func End, Address: 0x3fffd8, Func Offset: 0x8
}

// kill__8xAnimMgrFv
// Start address: 0x3fffe0
void xAnimMgr::kill()
{
	iAnimData** del;
	iAnimData** re;
	iAnimData** ri;
	xAnimData** del;
	xAnimData** ae;
	xAnimData** ai;
	// Line 29, Address: 0x3fffe0, Func Offset: 0
	// Line 30, Address: 0x3ffff8, Func Offset: 0x18
	// Line 31, Address: 0x3ffffc, Func Offset: 0x1c
	// Line 32, Address: 0x40000c, Func Offset: 0x2c
	// Line 34, Address: 0x400014, Func Offset: 0x34
	// Line 35, Address: 0x400018, Func Offset: 0x38
	// Line 36, Address: 0x40001c, Func Offset: 0x3c
	// Line 37, Address: 0x40003c, Func Offset: 0x5c
	// Line 38, Address: 0x400048, Func Offset: 0x68
	// Line 40, Address: 0x40004c, Func Offset: 0x6c
	// Line 41, Address: 0x400050, Func Offset: 0x70
	// Line 42, Address: 0x400060, Func Offset: 0x80
	// Line 44, Address: 0x400068, Func Offset: 0x88
	// Line 45, Address: 0x40006c, Func Offset: 0x8c
	// Line 46, Address: 0x400070, Func Offset: 0x90
	// Line 47, Address: 0x400090, Func Offset: 0xb0
	// Line 48, Address: 0x400098, Func Offset: 0xb8
	// Line 49, Address: 0x40009c, Func Offset: 0xbc
	// Func End, Address: 0x4000b8, Func Offset: 0xd8
}

// init__8xAnimMgrFv
// Start address: 0x4000c0
void xAnimMgr::init()
{
	// Line 19, Address: 0x4000c0, Func Offset: 0
	// Line 20, Address: 0x4000d0, Func Offset: 0x10
	// Line 21, Address: 0x4000d8, Func Offset: 0x18
	// Line 22, Address: 0x40017c, Func Offset: 0xbc
	// Line 23, Address: 0x400220, Func Offset: 0x160
	// Line 24, Address: 0x400224, Func Offset: 0x164
	// Line 25, Address: 0x400228, Func Offset: 0x168
	// Func End, Address: 0x40023c, Func Offset: 0x17c
}

