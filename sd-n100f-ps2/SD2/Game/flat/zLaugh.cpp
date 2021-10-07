typedef struct zLaughSituation;


typedef int8 type_0[32];
typedef uint32 type_1[17];
typedef zLaughSituation type_2[15];

struct zLaughSituation
{
	uint32 countMax;
	float32 delay;
	float32 punchDelay;
	float32 elapsedTime;
	uint32 count;
};

int32 sLastLaughEnum;
uint32 sLaughSoundID[17];
float32 sLaughTimer;
zLaughSituation* sLaughQueueData;
zLaughSituation sLaughInfo[15];
int32 sLastRefLaugh;

void zLaughUpdate(float32 dt);
void zLaughNotify(int32 situation);
int32 zLaughNextLaughEnum();
void zLaughInit();

// zLaughUpdate__Ff
// Start address: 0x2773d0
void zLaughUpdate(float32 dt)
{
	int32 i;
	// Line 194, Address: 0x2773d0, Func Offset: 0
	// Line 197, Address: 0x2773e8, Func Offset: 0x18
	// Line 199, Address: 0x2773f0, Func Offset: 0x20
	// Line 204, Address: 0x277480, Func Offset: 0xb0
	// Line 199, Address: 0x277488, Func Offset: 0xb8
	// Line 204, Address: 0x277490, Func Offset: 0xc0
	// Line 207, Address: 0x277498, Func Offset: 0xc8
	// Line 214, Address: 0x2774c4, Func Offset: 0xf4
	// Line 216, Address: 0x2774dc, Func Offset: 0x10c
	// Line 217, Address: 0x2774e4, Func Offset: 0x114
	// Line 218, Address: 0x2774f4, Func Offset: 0x124
	// Line 221, Address: 0x2774f8, Func Offset: 0x128
	// Line 223, Address: 0x277520, Func Offset: 0x150
	// Line 227, Address: 0x2775b0, Func Offset: 0x1e0
	// Func End, Address: 0x2775c4, Func Offset: 0x1f4
}

// zLaughNotify__Fi
// Start address: 0x2775d0
void zLaughNotify(int32 situation)
{
	zLaughSituation* s;
	// Line 161, Address: 0x2775d0, Func Offset: 0
	// Line 164, Address: 0x2775e8, Func Offset: 0x18
	// Line 169, Address: 0x2775f8, Func Offset: 0x28
	// Line 175, Address: 0x277608, Func Offset: 0x38
	// Line 182, Address: 0x277620, Func Offset: 0x50
	// Line 188, Address: 0x277638, Func Offset: 0x68
	// Line 189, Address: 0x277640, Func Offset: 0x70
	// Line 191, Address: 0x277644, Func Offset: 0x74
	// Func End, Address: 0x27764c, Func Offset: 0x7c
}

// zLaughNextLaughEnum__Fv
// Start address: 0x277650
int32 zLaughNextLaughEnum()
{
	int32 i;
	// Line 86, Address: 0x277650, Func Offset: 0
	// Line 87, Address: 0x277664, Func Offset: 0x14
	// Line 89, Address: 0x277678, Func Offset: 0x28
	// Line 93, Address: 0x27767c, Func Offset: 0x2c
	// Line 95, Address: 0x277684, Func Offset: 0x34
	// Line 97, Address: 0x2776a0, Func Offset: 0x50
	// Line 101, Address: 0x2776b0, Func Offset: 0x60
	// Line 104, Address: 0x2776bc, Func Offset: 0x6c
	// Line 105, Address: 0x2776cc, Func Offset: 0x7c
	// Line 106, Address: 0x2776d0, Func Offset: 0x80
	// Line 109, Address: 0x2776e0, Func Offset: 0x90
	// Func End, Address: 0x2776f8, Func Offset: 0xa8
}

// zLaughInit__Fv
// Start address: 0x277700
void zLaughInit()
{
	int8 str[32];
	int32 i;
	// Line 65, Address: 0x277700, Func Offset: 0
	// Line 70, Address: 0x277714, Func Offset: 0x14
	// Line 73, Address: 0x27771c, Func Offset: 0x1c
	// Line 74, Address: 0x277730, Func Offset: 0x30
	// Line 75, Address: 0x277738, Func Offset: 0x38
	// Line 74, Address: 0x27773c, Func Offset: 0x3c
	// Line 75, Address: 0x277740, Func Offset: 0x40
	// Line 77, Address: 0x277754, Func Offset: 0x54
	// Line 79, Address: 0x27775c, Func Offset: 0x5c
	// Line 80, Address: 0x277760, Func Offset: 0x60
	// Line 79, Address: 0x277768, Func Offset: 0x68
	// Line 80, Address: 0x27776c, Func Offset: 0x6c
	// Line 81, Address: 0x2777e8, Func Offset: 0xe8
	// Line 80, Address: 0x2777f0, Func Offset: 0xf0
	// Line 81, Address: 0x2777f8, Func Offset: 0xf8
	// Line 82, Address: 0x277800, Func Offset: 0x100
	// Func End, Address: 0x277814, Func Offset: 0x114
}

