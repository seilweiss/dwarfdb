typedef struct zFMVFile;
typedef enum eFMVFile;


typedef int8 type_0[32];
typedef zFMVFile type_1[41];
typedef int8 type_2[32];

struct zFMVFile
{
	eFMVFile type;
	int8 fileName[32];
	uint32 fileNameID;
};

enum eFMVFile
{
	eFMVFile_HeavyIronLOGO,
	eFMVFile_SDTitleSequence,
	eFMVFile_Demo1,
	eFMVFile_Demo2,
	eFMVFile_Demo3,
	eFMVFile_Demo4,
	eFMVFile_Demo5,
	eFMVFile_Demo6,
	eFMVFile_Demo7,
	eFMVFile_Demo8,
	eFMVFile_Demo9,
	eFMVFile_Demo10,
	eFMVFile_Demo11,
	eFMVFile_Demo12,
	eFMVFile_Demo13,
	eFMVFile_Demo14,
	eFMVFile_Demo15,
	eFMVFile_THQLOGO,
	eFMVFile_WarnerBrosLOGO,
	eFMVFile_WBExtra0,
	eFMVFile_WBExtra1,
	eFMVFile_WBExtra2,
	eFMVFile_WBExtra3,
	eFMVFile_WBExtra4,
	eFMVFile_Credits,
	eFMVFile_EndCredits,
	eFMVFile_RenderWareLOGO,
	eFMVFile_Cin1,
	eFMVFile_Cin2,
	eFMVFile_Cin3,
	eFMVFile_Cin4,
	eFMVFile_Cin5,
	eFMVFile_Cin6,
	eFMVFile_Cin7,
	eFMVFile_Cin8,
	eFMVFile_Cin9,
	eFMVFile_Cin10,
	eFMVFile_Cin11,
	eFMVFile_Cin12,
	eFMVFile_Cin13,
	eFMVFile_Cin14,
	eFMVFileCount
};

zFMVFile zFMVFileTable[41];
int32 sweLocalPacketState;

int8* zFMVFileGetName(eFMVFile fileEnum);
uint32 zFMVPlay(int8* filename, uint32 buttons, float32 time);

// zFMVFileGetName__F8eFMVFile
// Start address: 0x26c3d0
int8* zFMVFileGetName(eFMVFile fileEnum)
{
	// Line 107, Address: 0x26c3d0, Func Offset: 0
	// Line 108, Address: 0x26c3e8, Func Offset: 0x18
	// Func End, Address: 0x26c3f0, Func Offset: 0x20
}

// zFMVPlay__FPcUif
// Start address: 0x26c3f0
uint32 zFMVPlay(int8* filename, uint32 buttons, float32 time)
{
	uint32 ret;
	int8 c[32];
	// Line 65, Address: 0x26c3f0, Func Offset: 0
	// Line 71, Address: 0x26c400, Func Offset: 0x10
	// Line 65, Address: 0x26c404, Func Offset: 0x14
	// Line 71, Address: 0x26c408, Func Offset: 0x18
	// Line 65, Address: 0x26c40c, Func Offset: 0x1c
	// Line 71, Address: 0x26c414, Func Offset: 0x24
	// Line 76, Address: 0x26c428, Func Offset: 0x38
	// Line 78, Address: 0x26c430, Func Offset: 0x40
	// Line 79, Address: 0x26c438, Func Offset: 0x48
	// Line 81, Address: 0x26c450, Func Offset: 0x60
	// Line 83, Address: 0x26c458, Func Offset: 0x68
	// Line 86, Address: 0x26c460, Func Offset: 0x70
	// Line 88, Address: 0x26c470, Func Offset: 0x80
	// Line 90, Address: 0x26c478, Func Offset: 0x88
	// Line 92, Address: 0x26c480, Func Offset: 0x90
	// Line 96, Address: 0x26c484, Func Offset: 0x94
	// Func End, Address: 0x26c49c, Func Offset: 0xac
}

