typedef struct DoubleChar;
typedef struct SJIS_STRUCT;


typedef int8 type_0[10];
typedef int8 type_1[10][6];
typedef int8 type_2[16];
typedef uint16 type_3[33];
typedef int8 type_4[0];
typedef uint32 type_5[256];
typedef uint16 type_6[33];
typedef uint16 type_7[2];
typedef uint16 type_8[2][3];

struct DoubleChar
{
	uint8 byte1;
	uint8 byte2;
};

struct SJIS_STRUCT
{
	union
	{
		uint16 sjisChar;
		DoubleChar doubleChar;
	};
};

int32 g_xutilinit;
int32 g_crc_needinit;
uint32 g_crc32_table[256];
uint16 ascii_table[2][3];
uint16 ascii_k_table[33];
uint16 ascii_special_table[33];
int8 _ctype_[0];

int32 xUtil_yesno(float32 wt_yes);
int32 xUtil_yesno();
uint8 itoBCD(uint16 dec);
uint8 itoBCD(uint8 dec);
uint8 BCDtoi(uint8 hex);
void strtosjis(uint8* string, uint8* dest);
uint32 xUtil_crc_update(uint32 crc_accum, int8* data, int32 datasize);
uint32 xUtil_crc_init();
int8* xUtil_idtag2string(uint32 srctag, int32 bufidx);
int32 xUtilShutdown();
int32 xUtilStartup();

// xUtil_yesno__Ff
// Start address: 0x18ded0
int32 xUtil_yesno(float32 wt_yes)
{
	// Line 707, Address: 0x18ded0, Func Offset: 0
	// Line 710, Address: 0x18dedc, Func Offset: 0xc
	// Line 711, Address: 0x18defc, Func Offset: 0x2c
	// Line 712, Address: 0x18df1c, Func Offset: 0x4c
	// Line 714, Address: 0x18df38, Func Offset: 0x68
	// Func End, Address: 0x18df48, Func Offset: 0x78
}

// xUtil_yesno__Fv
// Start address: 0x18df50
int32 xUtil_yesno()
{
	// Line 702, Address: 0x18df50, Func Offset: 0
	// Line 703, Address: 0x18df58, Func Offset: 0x8
	// Line 704, Address: 0x18df80, Func Offset: 0x30
	// Func End, Address: 0x18df8c, Func Offset: 0x3c
}

// itoBCD__FUs
// Start address: 0x18df90
uint8 itoBCD(uint16 dec)
{
	int32 ones;
	// Line 688, Address: 0x18df90, Func Offset: 0
	// Line 692, Address: 0x18df9c, Func Offset: 0xc
	// Line 688, Address: 0x18dfa4, Func Offset: 0x14
	// Line 692, Address: 0x18dfa8, Func Offset: 0x18
	// Line 693, Address: 0x18dfe8, Func Offset: 0x58
	// Func End, Address: 0x18dff0, Func Offset: 0x60
}

// itoBCD__FUc
// Start address: 0x18dff0
uint8 itoBCD(uint8 dec)
{
	int32 ones;
	// Line 682, Address: 0x18dff0, Func Offset: 0
	// Line 684, Address: 0x18dffc, Func Offset: 0xc
	// Line 682, Address: 0x18e004, Func Offset: 0x14
	// Line 684, Address: 0x18e008, Func Offset: 0x18
	// Line 685, Address: 0x18e048, Func Offset: 0x58
	// Func End, Address: 0x18e050, Func Offset: 0x60
}

// BCDtoi__FUc
// Start address: 0x18e050
uint8 BCDtoi(uint8 hex)
{
	int8 c[16];
	// Line 675, Address: 0x18e050, Func Offset: 0
	// Line 677, Address: 0x18e054, Func Offset: 0x4
	// Line 675, Address: 0x18e05c, Func Offset: 0xc
	// Line 677, Address: 0x18e060, Func Offset: 0x10
	// Line 678, Address: 0x18e06c, Func Offset: 0x1c
	// Line 679, Address: 0x18e074, Func Offset: 0x24
	// Line 678, Address: 0x18e078, Func Offset: 0x28
	// Line 679, Address: 0x18e07c, Func Offset: 0x2c
	// Func End, Address: 0x18e084, Func Offset: 0x34
}

// strtosjis__FPUcPUc
// Start address: 0x18e090
void strtosjis(uint8* string, uint8* dest)
{
	uint8* dest2;
	uint8 stmp2;
	uint8 stmp;
	int32 ascii_code;
	int32 sjis_code;
	int32 i;
	// Line 527, Address: 0x18e090, Func Offset: 0
	// Line 533, Address: 0x18e0b4, Func Offset: 0x24
	// Line 543, Address: 0x18e0b8, Func Offset: 0x28
	// Line 547, Address: 0x18e0bc, Func Offset: 0x2c
	// Line 548, Address: 0x18e0c0, Func Offset: 0x30
	// Line 551, Address: 0x18e10c, Func Offset: 0x7c
	// Line 554, Address: 0x18e114, Func Offset: 0x84
	// Line 552, Address: 0x18e118, Func Offset: 0x88
	// Line 554, Address: 0x18e11c, Func Offset: 0x8c
	// Line 555, Address: 0x18e130, Func Offset: 0xa0
	// Line 557, Address: 0x18e138, Func Offset: 0xa8
	// Line 558, Address: 0x18e150, Func Offset: 0xc0
	// Line 560, Address: 0x18e158, Func Offset: 0xc8
	// Line 561, Address: 0x18e170, Func Offset: 0xe0
	// Line 563, Address: 0x18e178, Func Offset: 0xe8
	// Line 564, Address: 0x18e190, Func Offset: 0x100
	// Line 566, Address: 0x18e198, Func Offset: 0x108
	// Line 567, Address: 0x18e1b0, Func Offset: 0x120
	// Line 569, Address: 0x18e1b8, Func Offset: 0x128
	// Line 570, Address: 0x18e1d0, Func Offset: 0x140
	// Line 572, Address: 0x18e1d8, Func Offset: 0x148
	// Line 573, Address: 0x18e1f0, Func Offset: 0x160
	// Line 575, Address: 0x18e1f8, Func Offset: 0x168
	// Line 576, Address: 0x18e208, Func Offset: 0x178
	// Line 582, Address: 0x18e210, Func Offset: 0x180
	// Line 587, Address: 0x18e260, Func Offset: 0x1d0
	// Line 588, Address: 0x18e26c, Func Offset: 0x1dc
	// Line 589, Address: 0x18e274, Func Offset: 0x1e4
	// Line 590, Address: 0x18e284, Func Offset: 0x1f4
	// Func End, Address: 0x18e2a4, Func Offset: 0x214
}

// xUtil_crc_update__FUiPci
// Start address: 0x18e2b0
uint32 xUtil_crc_update(uint32 crc_accum, int8* data, int32 datasize)
{
	int32 j;
	int32 i;
	// Line 500, Address: 0x18e2b0, Func Offset: 0
	// Line 506, Address: 0x18e2d0, Func Offset: 0x20
	// Line 508, Address: 0x18e2e4, Func Offset: 0x34
	// Line 511, Address: 0x18e2ec, Func Offset: 0x3c
	// Line 513, Address: 0x18e304, Func Offset: 0x54
	// Line 512, Address: 0x18e344, Func Offset: 0x94
	// Line 513, Address: 0x18e34c, Func Offset: 0x9c
	// Line 512, Address: 0x18e35c, Func Offset: 0xac
	// Line 513, Address: 0x18e364, Func Offset: 0xb4
	// Line 512, Address: 0x18e388, Func Offset: 0xd8
	// Line 513, Address: 0x18e38c, Func Offset: 0xdc
	// Line 512, Address: 0x18e390, Func Offset: 0xe0
	// Line 513, Address: 0x18e394, Func Offset: 0xe4
	// Line 512, Address: 0x18e3b0, Func Offset: 0x100
	// Line 513, Address: 0x18e3b4, Func Offset: 0x104
	// Line 512, Address: 0x18e3b8, Func Offset: 0x108
	// Line 513, Address: 0x18e3bc, Func Offset: 0x10c
	// Line 512, Address: 0x18e3d0, Func Offset: 0x120
	// Line 513, Address: 0x18e3d4, Func Offset: 0x124
	// Line 512, Address: 0x18e3d8, Func Offset: 0x128
	// Line 513, Address: 0x18e3dc, Func Offset: 0x12c
	// Line 512, Address: 0x18e3f0, Func Offset: 0x140
	// Line 513, Address: 0x18e3f4, Func Offset: 0x144
	// Line 512, Address: 0x18e3f8, Func Offset: 0x148
	// Line 513, Address: 0x18e3fc, Func Offset: 0x14c
	// Line 512, Address: 0x18e410, Func Offset: 0x160
	// Line 513, Address: 0x18e414, Func Offset: 0x164
	// Line 512, Address: 0x18e418, Func Offset: 0x168
	// Line 513, Address: 0x18e41c, Func Offset: 0x16c
	// Line 512, Address: 0x18e430, Func Offset: 0x180
	// Line 513, Address: 0x18e434, Func Offset: 0x184
	// Line 512, Address: 0x18e438, Func Offset: 0x188
	// Line 513, Address: 0x18e43c, Func Offset: 0x18c
	// Line 512, Address: 0x18e450, Func Offset: 0x1a0
	// Line 513, Address: 0x18e454, Func Offset: 0x1a4
	// Line 512, Address: 0x18e458, Func Offset: 0x1a8
	// Line 513, Address: 0x18e45c, Func Offset: 0x1ac
	// Line 512, Address: 0x18e490, Func Offset: 0x1e0
	// Line 514, Address: 0x18e494, Func Offset: 0x1e4
	// Line 513, Address: 0x18e498, Func Offset: 0x1e8
	// Line 514, Address: 0x18e49c, Func Offset: 0x1ec
	// Line 513, Address: 0x18e4a0, Func Offset: 0x1f0
	// Line 512, Address: 0x18e4a4, Func Offset: 0x1f4
	// Line 513, Address: 0x18e4a8, Func Offset: 0x1f8
	// Line 514, Address: 0x18e4b8, Func Offset: 0x208
	// Line 516, Address: 0x18e4c0, Func Offset: 0x210
	// Line 517, Address: 0x18e4c4, Func Offset: 0x214
	// Func End, Address: 0x18e4e8, Func Offset: 0x238
}

// xUtil_crc_init__Fv
// Start address: 0x18e4f0
uint32 xUtil_crc_init()
{
	uint32 crc_accum;
	int32 j;
	int32 i;
	// Line 471, Address: 0x18e4f0, Func Offset: 0
	// Line 474, Address: 0x18e500, Func Offset: 0x10
	// Line 476, Address: 0x18e508, Func Offset: 0x18
	// Line 478, Address: 0x18e50c, Func Offset: 0x1c
	// Line 480, Address: 0x18e510, Func Offset: 0x20
	// Line 479, Address: 0x18e518, Func Offset: 0x28
	// Line 480, Address: 0x18e534, Func Offset: 0x44
	// Line 481, Address: 0x18e538, Func Offset: 0x48
	// Line 483, Address: 0x18e540, Func Offset: 0x50
	// Line 484, Address: 0x18e544, Func Offset: 0x54
	// Line 485, Address: 0x18e548, Func Offset: 0x58
	// Line 488, Address: 0x18e558, Func Offset: 0x68
	// Line 487, Address: 0x18e55c, Func Offset: 0x6c
	// Line 488, Address: 0x18e560, Func Offset: 0x70
	// Line 490, Address: 0x18e56c, Func Offset: 0x7c
	// Line 493, Address: 0x18e570, Func Offset: 0x80
	// Line 494, Address: 0x18e574, Func Offset: 0x84
	// Func End, Address: 0x18e57c, Func Offset: 0x8c
}

// xUtil_idtag2string__FUii
// Start address: 0x18e580
int8* xUtil_idtag2string(uint32 srctag, int32 bufidx)
{
	int8 t;
	int32 l;
	int8* uc;
	int8* strptr;
	uint32 tag;
	int8 buf[10][6];
	// Line 191, Address: 0x18e580, Func Offset: 0
	// Line 192, Address: 0x18e584, Func Offset: 0x4
	// Line 198, Address: 0x18e588, Func Offset: 0x8
	// Line 199, Address: 0x18e5a8, Func Offset: 0x28
	// Line 204, Address: 0x18e5bc, Func Offset: 0x3c
	// Line 210, Address: 0x18e5c4, Func Offset: 0x44
	// Line 213, Address: 0x18e5d4, Func Offset: 0x54
	// Line 214, Address: 0x18e5e4, Func Offset: 0x64
	// Line 218, Address: 0x18e5f4, Func Offset: 0x74
	// Line 222, Address: 0x18e614, Func Offset: 0x94
	// Line 223, Address: 0x18e638, Func Offset: 0xb8
	// Line 224, Address: 0x18e65c, Func Offset: 0xdc
	// Line 225, Address: 0x18e680, Func Offset: 0x100
	// Line 226, Address: 0x18e6a0, Func Offset: 0x120
	// Line 234, Address: 0x18e6a8, Func Offset: 0x128
	// Line 235, Address: 0x18e6cc, Func Offset: 0x14c
	// Line 236, Address: 0x18e6f0, Func Offset: 0x170
	// Line 237, Address: 0x18e714, Func Offset: 0x194
	// Line 244, Address: 0x18e738, Func Offset: 0x1b8
	// Line 245, Address: 0x18e744, Func Offset: 0x1c4
	// Line 248, Address: 0x18e74c, Func Offset: 0x1cc
	// Line 249, Address: 0x18e770, Func Offset: 0x1f0
	// Line 250, Address: 0x18e794, Func Offset: 0x214
	// Line 251, Address: 0x18e7b8, Func Offset: 0x238
	// Line 253, Address: 0x18e7dc, Func Offset: 0x25c
	// Line 257, Address: 0x18e7e0, Func Offset: 0x260
	// Func End, Address: 0x18e7e8, Func Offset: 0x268
}

// xUtilShutdown__Fv
// Start address: 0x18e7f0
int32 xUtilShutdown()
{
	// Line 173, Address: 0x18e7f0, Func Offset: 0
	// Line 183, Address: 0x18e7fc, Func Offset: 0xc
	// Func End, Address: 0x18e804, Func Offset: 0x14
}

// xUtilStartup__Fv
// Start address: 0x18e810
int32 xUtilStartup()
{
	// Line 155, Address: 0x18e810, Func Offset: 0
	// Line 157, Address: 0x18e818, Func Offset: 0x8
	// Line 163, Address: 0x18e828, Func Offset: 0x18
	// Line 168, Address: 0x18e830, Func Offset: 0x20
	// Line 167, Address: 0x18e834, Func Offset: 0x24
	// Line 168, Address: 0x18e838, Func Offset: 0x28
	// Func End, Address: 0x18e840, Func Offset: 0x30
}

