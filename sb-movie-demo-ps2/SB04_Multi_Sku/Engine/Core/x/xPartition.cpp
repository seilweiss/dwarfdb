



void xPartitionSpaceMove(_tagPartSpace* src, _tagPartSpace* dest, uint32 data);
int32 xPartitionUpdate(_tagPartition* part, void* data, int32 old_idx, xVec3* current_pos);
int32 xPartitionInsert(_tagPartition* part, void* insert_data, xVec3* insert_pos);
void xPartitionWorld(_tagPartition* part, xEnv* env, int32 x_spaces, int32 y_spaces, int32 z_spaces);
void xPartitionVolume(_tagPartition* part, xVolume* volume, int32 x_spaces, int32 y_spaces, int32 z_spaces);
void xPartitionReset();

// xPartitionSpaceMove__FP13_tagPartSpaceP13_tagPartSpaceUi
// Start address: 0x3a9190
void xPartitionSpaceMove(_tagPartSpace* src, _tagPartSpace* dest, uint32 data)
{
	_tagPartLink* dest_lnk;
	_tagPartLink* src_lnk;
	_tagPartLink* src_pre;
	// Line 323, Address: 0x3a9190, Func Offset: 0
	// Line 326, Address: 0x3a9194, Func Offset: 0x4
	// Line 328, Address: 0x3a919c, Func Offset: 0xc
	// Line 329, Address: 0x3a91a4, Func Offset: 0x14
	// Line 337, Address: 0x3a91b8, Func Offset: 0x28
	// Line 333, Address: 0x3a91bc, Func Offset: 0x2c
	// Line 337, Address: 0x3a91c0, Func Offset: 0x30
	// Line 339, Address: 0x3a91c8, Func Offset: 0x38
	// Line 340, Address: 0x3a91cc, Func Offset: 0x3c
	// Line 341, Address: 0x3a91d0, Func Offset: 0x40
	// Line 344, Address: 0x3a91e8, Func Offset: 0x58
	// Line 347, Address: 0x3a91f0, Func Offset: 0x60
	// Line 348, Address: 0x3a91f4, Func Offset: 0x64
	// Line 351, Address: 0x3a91fc, Func Offset: 0x6c
	// Line 352, Address: 0x3a9208, Func Offset: 0x78
	// Line 353, Address: 0x3a9210, Func Offset: 0x80
	// Func End, Address: 0x3a9218, Func Offset: 0x88
}

// xPartitionUpdate__FP13_tagPartitionPviP5xVec3
// Start address: 0x3a9220
int32 xPartitionUpdate(_tagPartition* part, void* data, int32 old_idx, xVec3* current_pos)
{
	int32 cur_idx;
	_tagPartSpace* src;
	// Line 264, Address: 0x3a9220, Func Offset: 0
	// Line 266, Address: 0x3a9234, Func Offset: 0x14
	// Line 286, Address: 0x3a929c, Func Offset: 0x7c
	// Line 292, Address: 0x3a92ec, Func Offset: 0xcc
	// Line 302, Address: 0x3a92f4, Func Offset: 0xd4
	// Line 311, Address: 0x3a9318, Func Offset: 0xf8
	// Line 313, Address: 0x3a934c, Func Offset: 0x12c
	// Line 271, Address: 0x3a9354, Func Offset: 0x134
	// Line 272, Address: 0x3a9358, Func Offset: 0x138
	// Line 295, Address: 0x3a9360, Func Offset: 0x140
	// Line 314, Address: 0x3a9364, Func Offset: 0x144
	// Func End, Address: 0x3a9374, Func Offset: 0x154
}

// xPartitionInsert__FP13_tagPartitionPvP5xVec3
// Start address: 0x3a9380
int32 xPartitionInsert(_tagPartition* part, void* insert_data, xVec3* insert_pos)
{
	// Line 230, Address: 0x3a9380, Func Offset: 0
	// Line 232, Address: 0x3a939c, Func Offset: 0x1c
	// Line 254, Address: 0x3a9404, Func Offset: 0x84
	// Line 256, Address: 0x3a9408, Func Offset: 0x88
	// Line 254, Address: 0x3a940c, Func Offset: 0x8c
	// Line 256, Address: 0x3a9458, Func Offset: 0xd8
	// Line 237, Address: 0x3a94bc, Func Offset: 0x13c
	// Line 256, Address: 0x3a94c0, Func Offset: 0x140
	// Line 237, Address: 0x3a94dc, Func Offset: 0x15c
	// Line 256, Address: 0x3a94e0, Func Offset: 0x160
	// Line 238, Address: 0x3a94f0, Func Offset: 0x170
	// Line 256, Address: 0x3a94f4, Func Offset: 0x174
	// Line 238, Address: 0x3a94fc, Func Offset: 0x17c
	// Line 256, Address: 0x3a9504, Func Offset: 0x184
	// Line 258, Address: 0x3a951c, Func Offset: 0x19c
	// Line 256, Address: 0x3a9520, Func Offset: 0x1a0
	// Line 259, Address: 0x3a952c, Func Offset: 0x1ac
	// Func End, Address: 0x3a9544, Func Offset: 0x1c4
}

// xPartitionWorld__FP13_tagPartitionP4xEnviii
// Start address: 0x3a9550
void xPartitionWorld(_tagPartition* part, xEnv* env, int32 x_spaces, int32 y_spaces, int32 z_spaces)
{
	xBox* bb;
	float32 dx;
	float32 dy;
	float32 dz;
	int32 z;
	int32 y;
	int32 x;
	// Line 182, Address: 0x3a9550, Func Offset: 0
	// Line 187, Address: 0x3a9588, Func Offset: 0x38
	// Line 190, Address: 0x3a9594, Func Offset: 0x44
	// Line 209, Address: 0x3a9598, Func Offset: 0x48
	// Line 190, Address: 0x3a959c, Func Offset: 0x4c
	// Line 191, Address: 0x3a95a0, Func Offset: 0x50
	// Line 192, Address: 0x3a95b8, Func Offset: 0x68
	// Line 197, Address: 0x3a95d0, Func Offset: 0x80
	// Line 195, Address: 0x3a95d8, Func Offset: 0x88
	// Line 196, Address: 0x3a95e0, Func Offset: 0x90
	// Line 197, Address: 0x3a95e8, Func Offset: 0x98
	// Line 200, Address: 0x3a95ec, Func Offset: 0x9c
	// Line 195, Address: 0x3a95f0, Func Offset: 0xa0
	// Line 201, Address: 0x3a95f4, Func Offset: 0xa4
	// Line 202, Address: 0x3a95f8, Func Offset: 0xa8
	// Line 203, Address: 0x3a95fc, Func Offset: 0xac
	// Line 196, Address: 0x3a9600, Func Offset: 0xb0
	// Line 203, Address: 0x3a9604, Func Offset: 0xb4
	// Line 204, Address: 0x3a9610, Func Offset: 0xc0
	// Line 205, Address: 0x3a9620, Func Offset: 0xd0
	// Line 209, Address: 0x3a9630, Func Offset: 0xe0
	// Line 211, Address: 0x3a9658, Func Offset: 0x108
	// Line 209, Address: 0x3a965c, Func Offset: 0x10c
	// Line 211, Address: 0x3a9660, Func Offset: 0x110
	// Line 213, Address: 0x3a9668, Func Offset: 0x118
	// Line 215, Address: 0x3a9678, Func Offset: 0x128
	// Line 220, Address: 0x3a9688, Func Offset: 0x138
	// Line 221, Address: 0x3a9698, Func Offset: 0x148
	// Line 224, Address: 0x3a96a8, Func Offset: 0x158
	// Line 225, Address: 0x3a96b8, Func Offset: 0x168
	// Line 218, Address: 0x3a96c4, Func Offset: 0x174
	// Line 225, Address: 0x3a96c8, Func Offset: 0x178
	// Line 218, Address: 0x3a96cc, Func Offset: 0x17c
	// Line 225, Address: 0x3a96d0, Func Offset: 0x180
	// Line 217, Address: 0x3a96d4, Func Offset: 0x184
	// Line 225, Address: 0x3a96e8, Func Offset: 0x198
	// Line 218, Address: 0x3a96ec, Func Offset: 0x19c
	// Line 225, Address: 0x3a96f0, Func Offset: 0x1a0
	// Line 218, Address: 0x3a96f4, Func Offset: 0x1a4
	// Line 225, Address: 0x3a96f8, Func Offset: 0x1a8
	// Func End, Address: 0x3a9740, Func Offset: 0x1f0
}

// xPartitionVolume__FP13_tagPartitionP7xVolumeiii
// Start address: 0x3a9740
void xPartitionVolume(_tagPartition* part, xVolume* volume, int32 x_spaces, int32 y_spaces, int32 z_spaces)
{
	xBound* xb;
	xBox* bb;
	float32 dx;
	float32 dy;
	float32 dz;
	int32 z;
	int32 y;
	int32 x;
	// Line 131, Address: 0x3a9740, Func Offset: 0
	// Line 138, Address: 0x3a9778, Func Offset: 0x38
	// Line 141, Address: 0x3a9784, Func Offset: 0x44
	// Line 143, Address: 0x3a978c, Func Offset: 0x4c
	// Line 161, Address: 0x3a9790, Func Offset: 0x50
	// Line 143, Address: 0x3a9794, Func Offset: 0x54
	// Line 144, Address: 0x3a97a8, Func Offset: 0x68
	// Line 149, Address: 0x3a97c0, Func Offset: 0x80
	// Line 147, Address: 0x3a97c8, Func Offset: 0x88
	// Line 148, Address: 0x3a97d0, Func Offset: 0x90
	// Line 149, Address: 0x3a97d8, Func Offset: 0x98
	// Line 152, Address: 0x3a97dc, Func Offset: 0x9c
	// Line 147, Address: 0x3a97e0, Func Offset: 0xa0
	// Line 153, Address: 0x3a97e4, Func Offset: 0xa4
	// Line 154, Address: 0x3a97e8, Func Offset: 0xa8
	// Line 155, Address: 0x3a97ec, Func Offset: 0xac
	// Line 148, Address: 0x3a97f0, Func Offset: 0xb0
	// Line 155, Address: 0x3a97f4, Func Offset: 0xb4
	// Line 156, Address: 0x3a9800, Func Offset: 0xc0
	// Line 157, Address: 0x3a9810, Func Offset: 0xd0
	// Line 161, Address: 0x3a9820, Func Offset: 0xe0
	// Line 163, Address: 0x3a9848, Func Offset: 0x108
	// Line 161, Address: 0x3a984c, Func Offset: 0x10c
	// Line 163, Address: 0x3a9850, Func Offset: 0x110
	// Line 165, Address: 0x3a9858, Func Offset: 0x118
	// Line 167, Address: 0x3a9868, Func Offset: 0x128
	// Line 172, Address: 0x3a9878, Func Offset: 0x138
	// Line 173, Address: 0x3a9888, Func Offset: 0x148
	// Line 176, Address: 0x3a9898, Func Offset: 0x158
	// Line 177, Address: 0x3a98a8, Func Offset: 0x168
	// Line 170, Address: 0x3a98b4, Func Offset: 0x174
	// Line 177, Address: 0x3a98b8, Func Offset: 0x178
	// Line 170, Address: 0x3a98bc, Func Offset: 0x17c
	// Line 177, Address: 0x3a98c0, Func Offset: 0x180
	// Line 169, Address: 0x3a98c4, Func Offset: 0x184
	// Line 177, Address: 0x3a98d8, Func Offset: 0x198
	// Line 170, Address: 0x3a98dc, Func Offset: 0x19c
	// Line 177, Address: 0x3a98e0, Func Offset: 0x1a0
	// Line 170, Address: 0x3a98e4, Func Offset: 0x1a4
	// Line 177, Address: 0x3a98e8, Func Offset: 0x1a8
	// Func End, Address: 0x3a9930, Func Offset: 0x1f0
}

// xPartitionReset__Fv
// Start address: 0x3a9930
void xPartitionReset()
{
	// Line 60, Address: 0x3a9930, Func Offset: 0
	// Func End, Address: 0x3a9938, Func Offset: 0x8
}

