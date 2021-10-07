typedef struct st_ELIST;
typedef struct st_ENODE;



struct st_ELIST
{
	st_ENODE* head;
	st_ENODE* tail;
	st_ENODE* tailprev;
};

struct st_ENODE
{
	st_ENODE* next;
	st_ENODE* prev;
};


void MoveList(st_ELIST* to, st_ELIST* from);
st_ENODE* RemHead(st_ELIST* list);
void AddTail(st_ELIST* list, st_ENODE* node);
void AddHead(st_ELIST* list, st_ENODE* node);
void NewList(st_ELIST* list);

// MoveList__FP8st_ELISTP8st_ELIST
// Start address: 0x1a7f70
void MoveList(st_ELIST* to, st_ELIST* from)
{
	// Line 118, Address: 0x1a7f70, Func Offset: 0
	// Line 123, Address: 0x1a7f90, Func Offset: 0x20
	// Line 125, Address: 0x1a7f98, Func Offset: 0x28
	// Line 128, Address: 0x1a7f9c, Func Offset: 0x2c
	// Line 123, Address: 0x1a7fa0, Func Offset: 0x30
	// Line 124, Address: 0x1a7fac, Func Offset: 0x3c
	// Line 125, Address: 0x1a7fb4, Func Offset: 0x44
	// Line 128, Address: 0x1a7fbc, Func Offset: 0x4c
	// Line 131, Address: 0x1a7fc8, Func Offset: 0x58
	// Func End, Address: 0x1a7fd0, Func Offset: 0x60
}

// RemHead__FP8st_ELIST
// Start address: 0x1a7fd0
st_ENODE* RemHead(st_ELIST* list)
{
	// Line 61, Address: 0x1a7fd0, Func Offset: 0
	// Line 65, Address: 0x1a7fe8, Func Offset: 0x18
	// Line 68, Address: 0x1a7ffc, Func Offset: 0x2c
	// Func End, Address: 0x1a8004, Func Offset: 0x34
}

// AddTail__FP8st_ELISTP8st_ENODE
// Start address: 0x1a8010
void AddTail(st_ELIST* list, st_ENODE* node)
{
	// Line 53, Address: 0x1a8010, Func Offset: 0
	// Line 55, Address: 0x1a8034, Func Offset: 0x24
	// Func End, Address: 0x1a803c, Func Offset: 0x2c
}

// AddHead__FP8st_ELISTP8st_ENODE
// Start address: 0x1a8040
void AddHead(st_ELIST* list, st_ENODE* node)
{
	// Line 48, Address: 0x1a8040, Func Offset: 0
	// Line 50, Address: 0x1a8054, Func Offset: 0x14
	// Func End, Address: 0x1a805c, Func Offset: 0x1c
}

// NewList__FP8st_ELIST
// Start address: 0x1a8060
void NewList(st_ELIST* list)
{
	// Line 41, Address: 0x1a8060, Func Offset: 0
	// Line 42, Address: 0x1a8068, Func Offset: 0x8
	// Line 45, Address: 0x1a806c, Func Offset: 0xc
	// Func End, Address: 0x1a8074, Func Offset: 0x14
}

