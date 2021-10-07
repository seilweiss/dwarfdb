typedef struct iWaterInstancedWaves;
typedef struct xVec4;
typedef struct iWaterWave;


typedef float32 type_0[4];
typedef iWaterInstancedWaves type_1[3];
typedef float32 type_2[4];
typedef float32 type_3[4];
typedef float32 type_4[4];
typedef float32 type_5[4];
typedef float32 type_6[4];
typedef float32 type_7[4];
typedef float32 type_8[4];

struct iWaterInstancedWaves
{
	float32 startcos[4];
	float32 startsin[4];
	float32 dxcos[4];
	float32 dxsin[4];
	float32 dzcos[4];
	float32 dzsin[4];
	float32 xfreq[4];
	float32 zfreq[4];
};

struct xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
};

struct iWaterWave
{
	float32 phase;
	float32 amplitude;
	float32 frequency_x;
	float32 frequency_z;
};

uint8 processing;
int32 xsize;
int32 zsize;
int32 iwaves_size;
uint16 code_addr;
<unknown fundamental type (0xa510)> iWaterVU0_ComputeHeightmap;
<unknown fundamental type (0xa510)> iWaterVU0_ComputeHeightmapEnd;

void iWaterAnimateEnd(float32* Ay, float32* Nx, float32* Ny, float32* Nz);
void iWaterAnimateBegin(int32 xsize, int32 zsize);
void iWaterAnimateUploadWaves(iWaterInstancedWaves* iwaves, int32 iwaves_size);
void iWaterAnimateUploadCode();
void iWaterMoveWaves(iWaterInstancedWaves* out, int32 out_size, iWaterWave* waves, float32 x, float32 z);
void iWaterSetupWaves(iWaterInstancedWaves* out, int32 out_size, iWaterWave* waves, float32 dxz);

// iWaterAnimateEnd__FPfPfPfPf
// Start address: 0x2b24e0
void iWaterAnimateEnd(float32* Ay, float32* Nx, float32* Ny, float32* Nz)
{
	// Line 739, Address: 0x2b24e0, Func Offset: 0
	// Line 740, Address: 0x2b24e4, Func Offset: 0x4
	// Line 741, Address: 0x2b2794, Func Offset: 0x2b4
	// Func End, Address: 0x2b279c, Func Offset: 0x2bc
}

// iWaterAnimateBegin__Fii
// Start address: 0x2b27a0
void iWaterAnimateBegin(int32 xsize, int32 zsize)
{
	// Line 723, Address: 0x2b27a0, Func Offset: 0
	// Line 731, Address: 0x2b27ac, Func Offset: 0xc
	// Line 723, Address: 0x2b27b0, Func Offset: 0x10
	// Line 728, Address: 0x2b27b4, Func Offset: 0x14
	// Line 729, Address: 0x2b27b8, Func Offset: 0x18
	// Line 730, Address: 0x2b27bc, Func Offset: 0x1c
	// Line 731, Address: 0x2b27c0, Func Offset: 0x20
	// Line 732, Address: 0x2b27fc, Func Offset: 0x5c
	// Func End, Address: 0x2b2810, Func Offset: 0x70
}

// iWaterAnimateUploadWaves__FPC20iWaterInstancedWavesi
// Start address: 0x2b2810
void iWaterAnimateUploadWaves(iWaterInstancedWaves* iwaves, int32 iwaves_size)
{
	iWaterInstancedWaves test_iwaves[3];
	// Line 716, Address: 0x2b2810, Func Offset: 0
	// Line 718, Address: 0x2b2828, Func Offset: 0x18
	// Line 719, Address: 0x2b282c, Func Offset: 0x1c
	// Line 720, Address: 0x2b2a0c, Func Offset: 0x1fc
	// Func End, Address: 0x2b2a20, Func Offset: 0x210
}

// iWaterAnimateUploadCode__Fv
// Start address: 0x2b2a20
void iWaterAnimateUploadCode()
{
	// Line 712, Address: 0x2b2a20, Func Offset: 0
	// Func End, Address: 0x2b2a3c, Func Offset: 0x1c
}

// iWaterMoveWaves__FP20iWaterInstancedWavesiPC10iWaterWaveiff
// Start address: 0x2b2a40
void iWaterMoveWaves(iWaterInstancedWaves* out, int32 out_size, iWaterWave* waves, float32 x, float32 z)
{
	iWaterInstancedWaves* end_out;
	int32 i;
	float32 t;
	// Line 690, Address: 0x2b2a40, Func Offset: 0
	// Line 694, Address: 0x2b2a44, Func Offset: 0x4
	// Line 690, Address: 0x2b2a48, Func Offset: 0x8
	// Line 694, Address: 0x2b2a68, Func Offset: 0x28
	// Line 690, Address: 0x2b2a6c, Func Offset: 0x2c
	// Line 696, Address: 0x2b2a7c, Func Offset: 0x3c
	// Line 698, Address: 0x2b2a84, Func Offset: 0x44
	// Line 701, Address: 0x2b2a90, Func Offset: 0x50
	// Line 702, Address: 0x2b2ab0, Func Offset: 0x70
	// Line 703, Address: 0x2b2abc, Func Offset: 0x7c
	// Line 702, Address: 0x2b2ac0, Func Offset: 0x80
	// Line 703, Address: 0x2b2ac4, Func Offset: 0x84
	// Line 705, Address: 0x2b2ad0, Func Offset: 0x90
	// Line 703, Address: 0x2b2ad8, Func Offset: 0x98
	// Line 704, Address: 0x2b2adc, Func Offset: 0x9c
	// Line 703, Address: 0x2b2ae0, Func Offset: 0xa0
	// Line 705, Address: 0x2b2ae4, Func Offset: 0xa4
	// Line 706, Address: 0x2b2aec, Func Offset: 0xac
	// Line 707, Address: 0x2b2af8, Func Offset: 0xb8
	// Func End, Address: 0x2b2b24, Func Offset: 0xe4
}

// iWaterSetupWaves__FP20iWaterInstancedWavesiPC10iWaterWaveif
// Start address: 0x2b2b30
void iWaterSetupWaves(iWaterInstancedWaves* out, int32 out_size, iWaterWave* waves, float32 dxz)
{
	iWaterInstancedWaves* end_out;
	int32 i;
	float32 tx;
	float32 tz;
	// Line 662, Address: 0x2b2b30, Func Offset: 0
	// Line 666, Address: 0x2b2b34, Func Offset: 0x4
	// Line 662, Address: 0x2b2b38, Func Offset: 0x8
	// Line 666, Address: 0x2b2b58, Func Offset: 0x28
	// Line 662, Address: 0x2b2b5c, Func Offset: 0x2c
	// Line 668, Address: 0x2b2b64, Func Offset: 0x34
	// Line 670, Address: 0x2b2b6c, Func Offset: 0x3c
	// Line 673, Address: 0x2b2b78, Func Offset: 0x48
	// Line 674, Address: 0x2b2b80, Func Offset: 0x50
	// Line 675, Address: 0x2b2b88, Func Offset: 0x58
	// Line 676, Address: 0x2b2b98, Func Offset: 0x68
	// Line 677, Address: 0x2b2ba0, Func Offset: 0x70
	// Line 678, Address: 0x2b2ba8, Func Offset: 0x78
	// Line 684, Address: 0x2b2bb8, Func Offset: 0x88
	// Line 680, Address: 0x2b2bbc, Func Offset: 0x8c
	// Line 684, Address: 0x2b2bc0, Func Offset: 0x90
	// Line 681, Address: 0x2b2bc4, Func Offset: 0x94
	// Line 680, Address: 0x2b2bc8, Func Offset: 0x98
	// Line 683, Address: 0x2b2bd0, Func Offset: 0xa0
	// Line 681, Address: 0x2b2bd4, Func Offset: 0xa4
	// Line 684, Address: 0x2b2bdc, Func Offset: 0xac
	// Line 685, Address: 0x2b2be4, Func Offset: 0xb4
	// Line 686, Address: 0x2b2bf0, Func Offset: 0xc0
	// Func End, Address: 0x2b2c18, Func Offset: 0xe8
}

