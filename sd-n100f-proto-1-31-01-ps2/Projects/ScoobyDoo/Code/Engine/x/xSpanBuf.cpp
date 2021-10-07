typedef struct xSpan;



struct xSpan
{
	float32 m_a;
	float32 m_b;
	float32 m_a2;
	float32 m_b2;
	int32 m_userData;
	xSpan* m_next;
	xSpan* m_prev;
};

xSpan* m_dead;

void xSpanBufferInsert();
void xSpanBufferInit();
void xSpanBufferDispose();

// xSpanBufferInsert__FP11xSpanBufferffffi
// Start address: 0x3305f0
void xSpanBufferInsert()
{
	// Line 315, Address: 0x3305f0, Func Offset: 0
	// Func End, Address: 0x3305f8, Func Offset: 0x8
}

// xSpanBufferInit__FP11xSpanBuffer
// Start address: 0x330600
void xSpanBufferInit()
{
	// Line 80, Address: 0x330600, Func Offset: 0
	// Func End, Address: 0x330608, Func Offset: 0x8
}

// xSpanBufferDispose__FP11xSpanBuffer
// Start address: 0x330610
void xSpanBufferDispose()
{
	// Line 49, Address: 0x330610, Func Offset: 0
	// Func End, Address: 0x330618, Func Offset: 0x8
}

