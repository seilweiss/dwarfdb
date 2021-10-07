typedef struct ios_base;
typedef struct _anon0;
typedef struct _RefCountedPtr_0;
typedef struct compressed_pair_imp;
typedef struct CharArray;
typedef struct pair;
typedef struct _RefCountedPtr_1;
typedef struct locale;
typedef struct facet;
typedef struct _anon1;
typedef struct compressed_pair;
typedef struct __vector_imp;
typedef struct allocator_0;
typedef struct vector;
typedef struct failure;
typedef struct __locale_imp;
typedef struct basic_streambuf;
typedef struct basic_ios;
typedef struct exception;
typedef struct allocator_1;
typedef struct __vector_pod;
typedef enum fmtflags : uint16;
typedef struct Init;
typedef struct _MSLstring;
typedef struct _anon2;
typedef struct _anon3;
typedef struct basic_string;
typedef struct _anon4;
typedef struct _anon5;
typedef struct basic_istream;
typedef struct _EmptyMemberOpt_0;
typedef struct basic_ostream;
typedef enum iostate : uint8;
typedef struct compile_assert;
typedef struct _anon6;
typedef struct allocator_2;
typedef struct _EmptyMemberOpt_1;
typedef enum event : uint8;
typedef struct _anon7;

typedef void(*type_0)(event, ios_base&, int32);
typedef void*(*type_1)(failure*, int16);
typedef void*(*type_2)(Init*, int16);


struct ios_base
{
	pair* cb_vec_;
	uint32 cb_siz_;
	uint32 cb_cap_;
	long32* iarray_;
	uint32 isize_;
	void** parray_;
	uint32 psize_;
	locale* loc_;
	void* rdbuf_;
	long32 precision_;
	long32 width_;
	fmtflags fmtflags_;
	iostate iostate_;
	iostate exceptions_;
};

struct _anon0
{
};

struct _RefCountedPtr_0
{
	__locale_imp* ptr_;
	int32* refCount_;
};

struct compressed_pair_imp : allocator_1
{
	uint32 second_;

	uint32& second();
	allocator_1& first();
};

struct CharArray
{
	uint32 size_;
	_EmptyMemberOpt_1 alloc_;
	uint32 refcount_;
	int8* data_;
};

struct pair
{
	void(*first)(event, ios_base&, int32);
	int32 second;
};

struct _RefCountedPtr_1
{
	int8* ptr_;
	int32* refCount_;
};

struct locale
{
	_RefCountedPtr_0 imp_;
};

struct facet
{
	uint32 ref_;
};

struct _anon1
{
};

struct compressed_pair : compressed_pair_imp
{

	uint32& second();
	allocator_1& first();
};

struct __vector_imp : __vector_pod, compile_assert
{
};

struct allocator_0
{
};

struct vector : __vector_imp
{
};

struct failure : exception
{
	_MSLstring what_;
};

struct __locale_imp
{
	vector facets_;
	basic_string name_;
};

struct basic_streambuf
{
	int8* gbeg_;
	int8* gnext_;
	int8* gend_;
	int8* pbeg_;
	int8* pnext_;
	int8* pend_;
	locale loc_;
};

struct basic_ios : ios_base
{
	basic_ostream* tiestr_;
	int8 fill_;
};

struct exception
{
};

struct allocator_1
{
};

struct __vector_pod
{
	compressed_pair capacity_;
	uint32 size_;
	uint32* data_;

	void* __dt();
	uint32& cap();
	allocator_1& alloc();
	uint32&* data();
};

enum fmtflags : uint16
{
	boolalpha = 0x1,
	dec,
	fixed = 0x4,
	hex = 0x8,
	internal = 0x10,
	left = 0x20,
	oct = 0x40,
	right = 0x80,
	scientific = 0x100,
	showbase = 0x200,
	showpoint = 0x400,
	showpos = 0x800,
	skipws = 0x1000,
	unitbuf = 0x2000,
	uppercase = 0x4000,
	adjustfield = 0xb0,
	basefield = 0x4a,
	floatfield = 0x104
};

struct Init
{
};

struct _MSLstring
{
	_RefCountedPtr_1 data_;
};

struct _anon2
{
};

struct _anon3
{
};

struct basic_string
{
	_EmptyMemberOpt_0 alloc_;
};

struct _anon4
{
};

struct _anon5
{
};

struct basic_istream : basic_ios
{
	long32 gcount_;
};

struct _EmptyMemberOpt_0 : allocator_0
{
	CharArray* m_;
};

struct basic_ostream : basic_ios
{
};

enum iostate : uint8
{
	goodbit,
	badbit,
	eofbit,
	failbit = 0x4
};

struct compile_assert
{
};

struct _anon6
{
};

struct allocator_2
{
};

struct _EmptyMemberOpt_1 : allocator_2
{
	uint32 m_;
};

enum event : uint8
{
	erase_event,
	imbue_event,
	copyfmt_event
};

struct _anon7
{
};

void*(*__dt)(failure*, int16);
_anon5 __vt__Q23std9exception;
_anon2 __vt__Q33std8ios_base7failure;
_anon0 __vt__Q23std8ios_base;
basic_ostream cerr;
basic_ostream clog;
basic_ostream cout;
basic_istream cin;
void*(*__dt)(Init*, int16);
_RefCountedPtr_0 global_s;
_anon3 __RTTI__Q23std8ios_base;
_anon7 __RTTI__Q23std9exception;
_anon4 __RTTI__Q33std8ios_base7failure;
_anon1 __vt__Q33std6locale5facet;
_anon6 __RTTI__Q33std6locale5facet;


