



int32 create_system(xParticleBatchSystem& system);
int32 compare_group_systems_function(void* e1, void* e2);
void create();
int32 xParticleBatchEmit(int32 system_id, int32 amount, uint8** mem);
int32 xParticleBatchAddSystem(xParticleBatchSystem& system);
void xParticleBatchPreRender();
void xParticleBatchReset();
void xParticleBatchSceneExit();
void xParticleBatchSceneEnter();
void merge_blocks(internal_system& system);
void add_to_bucket(internal_system& isys);
void pre_render_buckets(system_bucket* first, system_bucket* last, float32 dt);
void pre_render_buckets(system_bucket* first, system_bucket* last, float32 dt);
void pre_render_buckets(system_bucket* first, system_bucket* last, float32 dt);
void pre_render_buckets(system_bucket* first, system_bucket* last, float32 dt);
void pre_render_buckets(system_bucket* first, system_bucket* last, float32 dt);
void pre_render_buckets(system_bucket* first, system_bucket* last, float32 dt);

// create_system__19xParticleBatchGroupFRC20xParticleBatchSystem
// Start address: 0x3a9940
int32 xParticleBatchGroup::create_system(xParticleBatchSystem& system)
{
	uint8* end_elements;
	uint8* found;
	// Line 620, Address: 0x3a9940, Func Offset: 0
	// Line 622, Address: 0x3a9944, Func Offset: 0x4
	// Line 620, Address: 0x3a9948, Func Offset: 0x8
	// Line 622, Address: 0x3a994c, Func Offset: 0xc
	// Line 620, Address: 0x3a9950, Func Offset: 0x10
	// Line 622, Address: 0x3a9954, Func Offset: 0x14
	// Line 620, Address: 0x3a9958, Func Offset: 0x18
	// Line 621, Address: 0x3a9968, Func Offset: 0x28
	// Line 622, Address: 0x3a996c, Func Offset: 0x2c
	// Line 621, Address: 0x3a9970, Func Offset: 0x30
	// Line 622, Address: 0x3a9978, Func Offset: 0x38
	// Line 624, Address: 0x3a9984, Func Offset: 0x44
	// Line 625, Address: 0x3a998c, Func Offset: 0x4c
	// Line 630, Address: 0x3a9994, Func Offset: 0x54
	// Line 631, Address: 0x3a9a3c, Func Offset: 0xfc
	// Line 635, Address: 0x3a9a40, Func Offset: 0x100
	// Line 631, Address: 0x3a9a44, Func Offset: 0x104
	// Line 635, Address: 0x3a9a48, Func Offset: 0x108
	// Line 631, Address: 0x3a9a4c, Func Offset: 0x10c
	// Line 632, Address: 0x3a9a54, Func Offset: 0x114
	// Line 635, Address: 0x3a9a60, Func Offset: 0x120
	// Line 637, Address: 0x3a9a70, Func Offset: 0x130
	// Line 638, Address: 0x3a9a84, Func Offset: 0x144
	// Func End, Address: 0x3a9a9c, Func Offset: 0x15c
}

// compare_group_systems_function__19@unnamed@xWad4_cpp@FPCvPCv
// Start address: 0x3a9aa0
int32 compare_group_systems_function(void* e1, void* e2)
{
	// Line 609, Address: 0x3a9aa0, Func Offset: 0
	// Line 614, Address: 0x3a9ac8, Func Offset: 0x28
	// Line 615, Address: 0x3a9c48, Func Offset: 0x1a8
	// Func End, Address: 0x3a9c50, Func Offset: 0x1b0
}

// create__19xParticleBatchGroupFv
// Start address: 0x3a9c50
void xParticleBatchGroup::create()
{
	// Line 562, Address: 0x3a9c50, Func Offset: 0
	// Line 566, Address: 0x3a9c54, Func Offset: 0x4
	// Line 562, Address: 0x3a9c58, Func Offset: 0x8
	// Line 566, Address: 0x3a9c64, Func Offset: 0x14
	// Line 567, Address: 0x3a9c74, Func Offset: 0x24
	// Line 568, Address: 0x3a9c78, Func Offset: 0x28
	// Func End, Address: 0x3a9c88, Func Offset: 0x38
}

// xParticleBatchEmit__FiiPPUc
// Start address: 0x3a9c90
int32 xParticleBatchEmit(int32 system_id, int32 amount, uint8** mem)
{
	internal_system& isys;
	int32 remain;
	// Line 522, Address: 0x3a9c90, Func Offset: 0
	// Line 525, Address: 0x3a9ca4, Func Offset: 0x14
	// Line 526, Address: 0x3a9cac, Func Offset: 0x1c
	// Line 531, Address: 0x3a9cb8, Func Offset: 0x28
	// Line 530, Address: 0x3a9cbc, Func Offset: 0x2c
	// Line 531, Address: 0x3a9cc0, Func Offset: 0x30
	// Line 530, Address: 0x3a9cc8, Func Offset: 0x38
	// Line 532, Address: 0x3a9ccc, Func Offset: 0x3c
	// Line 531, Address: 0x3a9cd0, Func Offset: 0x40
	// Line 532, Address: 0x3a9cd4, Func Offset: 0x44
	// Line 537, Address: 0x3a9cdc, Func Offset: 0x4c
	// Line 540, Address: 0x3a9ce0, Func Offset: 0x50
	// Line 537, Address: 0x3a9ce4, Func Offset: 0x54
	// Line 538, Address: 0x3a9cec, Func Offset: 0x5c
	// Line 540, Address: 0x3a9cf4, Func Offset: 0x64
	// Line 525, Address: 0x3a9d2c, Func Offset: 0x9c
	// Line 540, Address: 0x3a9d30, Func Offset: 0xa0
	// Line 525, Address: 0x3a9d4c, Func Offset: 0xbc
	// Line 540, Address: 0x3a9d54, Func Offset: 0xc4
	// Line 525, Address: 0x3a9d9c, Func Offset: 0x10c
	// Line 527, Address: 0x3a9da4, Func Offset: 0x114
	// Line 534, Address: 0x3a9dac, Func Offset: 0x11c
	// Line 541, Address: 0x3a9db8, Func Offset: 0x128
	// Func End, Address: 0x3a9dc0, Func Offset: 0x130
}

// xParticleBatchAddSystem__FRC20xParticleBatchSystem
// Start address: 0x3a9dc0
int32 xParticleBatchAddSystem(xParticleBatchSystem& system)
{
	int32 system_id;
	internal_system& isys;
	// Line 480, Address: 0x3a9dc0, Func Offset: 0
	// Line 484, Address: 0x3a9dc4, Func Offset: 0x4
	// Line 480, Address: 0x3a9dc8, Func Offset: 0x8
	// Line 485, Address: 0x3a9dcc, Func Offset: 0xc
	// Line 480, Address: 0x3a9dd0, Func Offset: 0x10
	// Line 485, Address: 0x3a9dd4, Func Offset: 0x14
	// Line 482, Address: 0x3a9dd8, Func Offset: 0x18
	// Line 485, Address: 0x3a9ddc, Func Offset: 0x1c
	// Line 484, Address: 0x3a9dec, Func Offset: 0x2c
	// Line 485, Address: 0x3a9df0, Func Offset: 0x30
	// Line 483, Address: 0x3a9e00, Func Offset: 0x40
	// Line 484, Address: 0x3a9e08, Func Offset: 0x48
	// Line 485, Address: 0x3a9e10, Func Offset: 0x50
	// Line 490, Address: 0x3a9e6c, Func Offset: 0xac
	// Line 493, Address: 0x3a9e74, Func Offset: 0xb4
	// Line 494, Address: 0x3a9e88, Func Offset: 0xc8
	// Func End, Address: 0x3a9e98, Func Offset: 0xd8
}

// xParticleBatchPreRender__Fv
// Start address: 0x3a9ea0
void xParticleBatchPreRender()
{
	float32 dt;
	// Line 460, Address: 0x3a9ea0, Func Offset: 0
	// Line 463, Address: 0x3a9ea4, Func Offset: 0x4
	// Line 460, Address: 0x3a9ea8, Func Offset: 0x8
	// Line 463, Address: 0x3a9eac, Func Offset: 0xc
	// Line 460, Address: 0x3a9eb0, Func Offset: 0x10
	// Line 463, Address: 0x3a9eb4, Func Offset: 0x14
	// Line 461, Address: 0x3a9eb8, Func Offset: 0x18
	// Line 463, Address: 0x3a9ebc, Func Offset: 0x1c
	// Line 461, Address: 0x3a9ec0, Func Offset: 0x20
	// Line 463, Address: 0x3a9ec4, Func Offset: 0x24
	// Line 465, Address: 0x3a9edc, Func Offset: 0x3c
	// Line 467, Address: 0x3a9f10, Func Offset: 0x70
	// Line 469, Address: 0x3a9f44, Func Offset: 0xa4
	// Line 471, Address: 0x3a9f78, Func Offset: 0xd8
	// Line 473, Address: 0x3a9fac, Func Offset: 0x10c
	// Line 475, Address: 0x3a9fe0, Func Offset: 0x140
	// Func End, Address: 0x3a9ff0, Func Offset: 0x150
}

// xParticleBatchReset__Fv
// Start address: 0x3a9ff0
void xParticleBatchReset()
{
	internal_system* sys;
	internal_system* end_sys;
	block_info* b;
	block_info* endb;
	uint8* mem;
	// Line 435, Address: 0x3a9ff0, Func Offset: 0
	// Line 436, Address: 0x3aa004, Func Offset: 0x14
	// Line 438, Address: 0x3aa00c, Func Offset: 0x1c
	// Line 439, Address: 0x3aa010, Func Offset: 0x20
	// Line 440, Address: 0x3aa014, Func Offset: 0x24
	// Line 441, Address: 0x3aa018, Func Offset: 0x28
	// Line 442, Address: 0x3aa01c, Func Offset: 0x2c
	// Line 447, Address: 0x3aa028, Func Offset: 0x38
	// Line 445, Address: 0x3aa02c, Func Offset: 0x3c
	// Line 446, Address: 0x3aa030, Func Offset: 0x40
	// Line 445, Address: 0x3aa034, Func Offset: 0x44
	// Line 446, Address: 0x3aa038, Func Offset: 0x48
	// Line 448, Address: 0x3aa03c, Func Offset: 0x4c
	// Line 450, Address: 0x3aa044, Func Offset: 0x54
	// Line 451, Address: 0x3aa048, Func Offset: 0x58
	// Line 452, Address: 0x3aa050, Func Offset: 0x60
	// Line 453, Address: 0x3aa060, Func Offset: 0x70
	// Line 457, Address: 0x3aa064, Func Offset: 0x74
	// Func End, Address: 0x3aa06c, Func Offset: 0x7c
}

// xParticleBatchSceneExit__Fv
// Start address: 0x3aa070
void xParticleBatchSceneExit()
{
	// Line 430, Address: 0x3aa070, Func Offset: 0
	// Func End, Address: 0x3aa078, Func Offset: 0x8
}

// xParticleBatchSceneEnter__Fv
// Start address: 0x3aa080
void xParticleBatchSceneEnter()
{
	// Line 414, Address: 0x3aa080, Func Offset: 0
	// Line 415, Address: 0x3aa084, Func Offset: 0x4
	// Line 414, Address: 0x3aa088, Func Offset: 0x8
	// Line 415, Address: 0x3aa08c, Func Offset: 0xc
	// Line 420, Address: 0x3aa09c, Func Offset: 0x1c
	// Line 415, Address: 0x3aa0a0, Func Offset: 0x20
	// Line 420, Address: 0x3aa0a4, Func Offset: 0x24
	// Line 422, Address: 0x3aa0b8, Func Offset: 0x38
	// Line 425, Address: 0x3aa0c0, Func Offset: 0x40
	// Func End, Address: 0x3aa0cc, Func Offset: 0x4c
}

// merge_blocks__19@unnamed@xWad4_cpp@FRQ219@unnamed@xWad4_cpp@15internal_system
// Start address: 0x3aa0d0
void merge_blocks(internal_system& system)
{
	block_info* first;
	block_info* second;
	block_info* s0;
	block_info* s1;
	block_info** ps0;
	block_info* b;
	block_info** pb;
	// Line 279, Address: 0x3aa0d0, Func Offset: 0
	// Line 282, Address: 0x3aa0ec, Func Offset: 0x1c
	// Line 285, Address: 0x3aa0f4, Func Offset: 0x24
	// Line 286, Address: 0x3aa108, Func Offset: 0x38
	// Line 288, Address: 0x3aa118, Func Offset: 0x48
	// Line 290, Address: 0x3aa120, Func Offset: 0x50
	// Line 291, Address: 0x3aa124, Func Offset: 0x54
	// Line 293, Address: 0x3aa130, Func Offset: 0x60
	// Line 294, Address: 0x3aa140, Func Offset: 0x70
	// Line 295, Address: 0x3aa150, Func Offset: 0x80
	// Line 296, Address: 0x3aa160, Func Offset: 0x90
	// Line 297, Address: 0x3aa164, Func Offset: 0x94
	// Line 302, Address: 0x3aa180, Func Offset: 0xb0
	// Line 311, Address: 0x3aa194, Func Offset: 0xc4
	// Line 305, Address: 0x3aa1a8, Func Offset: 0xd8
	// Line 311, Address: 0x3aa1b0, Func Offset: 0xe0
	// Func End, Address: 0x3aa204, Func Offset: 0x134
}

// add_to_bucket__19@unnamed@xWad4_cpp@FRQ219@unnamed@xWad4_cpp@15internal_system
// Start address: 0x3aa210
void add_to_bucket(internal_system& isys)
{
	int32& bsize;
	system_bucket* begin_bucket;
	system_bucket* end_bucket;
	system_bucket key;
	system_bucket* bucket;
	// Line 152, Address: 0x3aa210, Func Offset: 0
	// Line 167, Address: 0x3aa214, Func Offset: 0x4
	// Line 152, Address: 0x3aa218, Func Offset: 0x8
	// Line 155, Address: 0x3aa21c, Func Offset: 0xc
	// Line 152, Address: 0x3aa220, Func Offset: 0x10
	// Line 167, Address: 0x3aa224, Func Offset: 0x14
	// Line 152, Address: 0x3aa228, Func Offset: 0x18
	// Line 156, Address: 0x3aa22c, Func Offset: 0x1c
	// Line 152, Address: 0x3aa230, Func Offset: 0x20
	// Line 155, Address: 0x3aa234, Func Offset: 0x24
	// Line 152, Address: 0x3aa238, Func Offset: 0x28
	// Line 156, Address: 0x3aa23c, Func Offset: 0x2c
	// Line 152, Address: 0x3aa240, Func Offset: 0x30
	// Line 161, Address: 0x3aa248, Func Offset: 0x38
	// Line 167, Address: 0x3aa24c, Func Offset: 0x3c
	// Line 155, Address: 0x3aa254, Func Offset: 0x44
	// Line 161, Address: 0x3aa25c, Func Offset: 0x4c
	// Line 156, Address: 0x3aa260, Func Offset: 0x50
	// Line 157, Address: 0x3aa264, Func Offset: 0x54
	// Line 156, Address: 0x3aa268, Func Offset: 0x58
	// Line 162, Address: 0x3aa26c, Func Offset: 0x5c
	// Line 156, Address: 0x3aa270, Func Offset: 0x60
	// Line 157, Address: 0x3aa274, Func Offset: 0x64
	// Line 162, Address: 0x3aa27c, Func Offset: 0x6c
	// Line 157, Address: 0x3aa280, Func Offset: 0x70
	// Line 163, Address: 0x3aa284, Func Offset: 0x74
	// Line 157, Address: 0x3aa288, Func Offset: 0x78
	// Line 167, Address: 0x3aa28c, Func Offset: 0x7c
	// Line 163, Address: 0x3aa290, Func Offset: 0x80
	// Line 164, Address: 0x3aa294, Func Offset: 0x84
	// Line 165, Address: 0x3aa29c, Func Offset: 0x8c
	// Line 166, Address: 0x3aa2a4, Func Offset: 0x94
	// Line 167, Address: 0x3aa2ac, Func Offset: 0x9c
	// Line 170, Address: 0x3aa2b4, Func Offset: 0xa4
	// Line 179, Address: 0x3aa2bc, Func Offset: 0xac
	// Line 183, Address: 0x3aa2c4, Func Offset: 0xb4
	// Line 185, Address: 0x3aa2cc, Func Offset: 0xbc
	// Line 184, Address: 0x3aa314, Func Offset: 0x104
	// Line 185, Address: 0x3aa31c, Func Offset: 0x10c
	// Func End, Address: 0x3aa344, Func Offset: 0x134
}

// pre_render_buckets<21ptank_pool__color_mat>__19@unnamed@xWad4_cpp@FPQ219@unnamed@xWad4_cpp@13system_bucketPQ219@unnamed@xWad4_cpp@13system_bucketf_v
// Start address: 0x3c6890
void pre_render_buckets(system_bucket* first, system_bucket* last, float32 dt)
{
	ptank_pool__color_mat pool;
	system_bucket* bucket;
	internal_system* system;
	uint8 started;
	uint8 lost_any;
	block_info* block;
	int32 newused;
	// Line 342, Address: 0x3c6890, Func Offset: 0
	// Line 344, Address: 0x3c6894, Func Offset: 0x4
	// Line 342, Address: 0x3c6898, Func Offset: 0x8
	// Line 344, Address: 0x3c68cc, Func Offset: 0x3c
	// Line 346, Address: 0x3c68e8, Func Offset: 0x58
	// Line 348, Address: 0x3c68f0, Func Offset: 0x60
	// Line 350, Address: 0x3c68f8, Func Offset: 0x68
	// Line 354, Address: 0x3c6904, Func Offset: 0x74
	// Line 361, Address: 0x3c690c, Func Offset: 0x7c
	// Line 365, Address: 0x3c6910, Func Offset: 0x80
	// Line 366, Address: 0x3c6914, Func Offset: 0x84
	// Line 369, Address: 0x3c6920, Func Offset: 0x90
	// Line 371, Address: 0x3c6940, Func Offset: 0xb0
	// Line 372, Address: 0x3c694c, Func Offset: 0xbc
	// Line 373, Address: 0x3c6950, Func Offset: 0xc0
	// Line 374, Address: 0x3c6960, Func Offset: 0xd0
	// Line 375, Address: 0x3c6964, Func Offset: 0xd4
	// Line 376, Address: 0x3c6970, Func Offset: 0xe0
	// Line 377, Address: 0x3c6978, Func Offset: 0xe8
	// Line 378, Address: 0x3c69c0, Func Offset: 0x130
	// Line 381, Address: 0x3c69dc, Func Offset: 0x14c
	// Line 382, Address: 0x3c6a24, Func Offset: 0x194
	// Line 383, Address: 0x3c6a48, Func Offset: 0x1b8
	// Line 359, Address: 0x3c6a54, Func Offset: 0x1c4
	// Line 360, Address: 0x3c6a58, Func Offset: 0x1c8
	// Line 383, Address: 0x3c6a5c, Func Offset: 0x1cc
	// Line 377, Address: 0x3c6abc, Func Offset: 0x22c
	// Line 383, Address: 0x3c6ac8, Func Offset: 0x238
	// Func End, Address: 0x3c6b0c, Func Offset: 0x27c
}

// pre_render_buckets<25ptank_pool__color_mat_uv2>__19@unnamed@xWad4_cpp@FPQ219@unnamed@xWad4_cpp@13system_bucketPQ219@unnamed@xWad4_cpp@13system_bucketf_v
// Start address: 0x3c6b10
void pre_render_buckets(system_bucket* first, system_bucket* last, float32 dt)
{
	ptank_pool__color_mat_uv2 pool;
	system_bucket* bucket;
	internal_system* system;
	uint8 started;
	uint8 lost_any;
	block_info* block;
	int32 newused;
	// Line 342, Address: 0x3c6b10, Func Offset: 0
	// Line 344, Address: 0x3c6b14, Func Offset: 0x4
	// Line 342, Address: 0x3c6b18, Func Offset: 0x8
	// Line 344, Address: 0x3c6b4c, Func Offset: 0x3c
	// Line 346, Address: 0x3c6b68, Func Offset: 0x58
	// Line 348, Address: 0x3c6b70, Func Offset: 0x60
	// Line 350, Address: 0x3c6b78, Func Offset: 0x68
	// Line 354, Address: 0x3c6b84, Func Offset: 0x74
	// Line 361, Address: 0x3c6b8c, Func Offset: 0x7c
	// Line 365, Address: 0x3c6b90, Func Offset: 0x80
	// Line 366, Address: 0x3c6b94, Func Offset: 0x84
	// Line 369, Address: 0x3c6ba0, Func Offset: 0x90
	// Line 371, Address: 0x3c6bc0, Func Offset: 0xb0
	// Line 372, Address: 0x3c6bcc, Func Offset: 0xbc
	// Line 373, Address: 0x3c6bd0, Func Offset: 0xc0
	// Line 374, Address: 0x3c6be0, Func Offset: 0xd0
	// Line 375, Address: 0x3c6be4, Func Offset: 0xd4
	// Line 376, Address: 0x3c6bf0, Func Offset: 0xe0
	// Line 377, Address: 0x3c6bf8, Func Offset: 0xe8
	// Line 378, Address: 0x3c6c40, Func Offset: 0x130
	// Line 381, Address: 0x3c6c5c, Func Offset: 0x14c
	// Line 382, Address: 0x3c6ca4, Func Offset: 0x194
	// Line 383, Address: 0x3c6cc8, Func Offset: 0x1b8
	// Line 359, Address: 0x3c6cd4, Func Offset: 0x1c4
	// Line 360, Address: 0x3c6cd8, Func Offset: 0x1c8
	// Line 383, Address: 0x3c6cdc, Func Offset: 0x1cc
	// Line 377, Address: 0x3c6d3c, Func Offset: 0x22c
	// Line 383, Address: 0x3c6d48, Func Offset: 0x238
	// Func End, Address: 0x3c6d8c, Func Offset: 0x27c
}

// pre_render_buckets<26ptank_pool__pos_color_size>__19@unnamed@xWad4_cpp@FPQ219@unnamed@xWad4_cpp@13system_bucketPQ219@unnamed@xWad4_cpp@13system_bucketf_v
// Start address: 0x3c6d90
void pre_render_buckets(system_bucket* first, system_bucket* last, float32 dt)
{
	ptank_pool__pos_color_size pool;
	system_bucket* bucket;
	internal_system* system;
	uint8 started;
	uint8 lost_any;
	block_info* block;
	int32 newused;
	// Line 342, Address: 0x3c6d90, Func Offset: 0
	// Line 344, Address: 0x3c6d94, Func Offset: 0x4
	// Line 342, Address: 0x3c6d98, Func Offset: 0x8
	// Line 344, Address: 0x3c6dcc, Func Offset: 0x3c
	// Line 346, Address: 0x3c6de8, Func Offset: 0x58
	// Line 348, Address: 0x3c6df0, Func Offset: 0x60
	// Line 350, Address: 0x3c6df8, Func Offset: 0x68
	// Line 354, Address: 0x3c6e04, Func Offset: 0x74
	// Line 361, Address: 0x3c6e0c, Func Offset: 0x7c
	// Line 365, Address: 0x3c6e10, Func Offset: 0x80
	// Line 366, Address: 0x3c6e14, Func Offset: 0x84
	// Line 369, Address: 0x3c6e20, Func Offset: 0x90
	// Line 371, Address: 0x3c6e40, Func Offset: 0xb0
	// Line 372, Address: 0x3c6e4c, Func Offset: 0xbc
	// Line 373, Address: 0x3c6e50, Func Offset: 0xc0
	// Line 374, Address: 0x3c6e60, Func Offset: 0xd0
	// Line 375, Address: 0x3c6e64, Func Offset: 0xd4
	// Line 376, Address: 0x3c6e70, Func Offset: 0xe0
	// Line 377, Address: 0x3c6e78, Func Offset: 0xe8
	// Line 378, Address: 0x3c6ec0, Func Offset: 0x130
	// Line 381, Address: 0x3c6edc, Func Offset: 0x14c
	// Line 382, Address: 0x3c6f24, Func Offset: 0x194
	// Line 383, Address: 0x3c6f48, Func Offset: 0x1b8
	// Line 359, Address: 0x3c6f54, Func Offset: 0x1c4
	// Line 360, Address: 0x3c6f58, Func Offset: 0x1c8
	// Line 383, Address: 0x3c6f5c, Func Offset: 0x1cc
	// Line 377, Address: 0x3c6fbc, Func Offset: 0x22c
	// Line 383, Address: 0x3c6fc8, Func Offset: 0x238
	// Func End, Address: 0x3c700c, Func Offset: 0x27c
}

// pre_render_buckets<30ptank_pool__pos_color_size_uv2>__19@unnamed@xWad4_cpp@FPQ219@unnamed@xWad4_cpp@13system_bucketPQ219@unnamed@xWad4_cpp@13system_bucketf_v
// Start address: 0x3c7010
void pre_render_buckets(system_bucket* first, system_bucket* last, float32 dt)
{
	ptank_pool__pos_color_size_uv2 pool;
	system_bucket* bucket;
	internal_system* system;
	uint8 started;
	uint8 lost_any;
	block_info* block;
	int32 newused;
	// Line 342, Address: 0x3c7010, Func Offset: 0
	// Line 344, Address: 0x3c7014, Func Offset: 0x4
	// Line 342, Address: 0x3c7018, Func Offset: 0x8
	// Line 344, Address: 0x3c704c, Func Offset: 0x3c
	// Line 346, Address: 0x3c7068, Func Offset: 0x58
	// Line 348, Address: 0x3c7070, Func Offset: 0x60
	// Line 350, Address: 0x3c7078, Func Offset: 0x68
	// Line 354, Address: 0x3c7084, Func Offset: 0x74
	// Line 361, Address: 0x3c708c, Func Offset: 0x7c
	// Line 365, Address: 0x3c7090, Func Offset: 0x80
	// Line 366, Address: 0x3c7094, Func Offset: 0x84
	// Line 369, Address: 0x3c70a0, Func Offset: 0x90
	// Line 371, Address: 0x3c70c0, Func Offset: 0xb0
	// Line 372, Address: 0x3c70cc, Func Offset: 0xbc
	// Line 373, Address: 0x3c70d0, Func Offset: 0xc0
	// Line 374, Address: 0x3c70e0, Func Offset: 0xd0
	// Line 375, Address: 0x3c70e4, Func Offset: 0xd4
	// Line 376, Address: 0x3c70f0, Func Offset: 0xe0
	// Line 377, Address: 0x3c70f8, Func Offset: 0xe8
	// Line 378, Address: 0x3c7140, Func Offset: 0x130
	// Line 381, Address: 0x3c715c, Func Offset: 0x14c
	// Line 382, Address: 0x3c71a4, Func Offset: 0x194
	// Line 383, Address: 0x3c71c8, Func Offset: 0x1b8
	// Line 359, Address: 0x3c71d4, Func Offset: 0x1c4
	// Line 360, Address: 0x3c71d8, Func Offset: 0x1c8
	// Line 383, Address: 0x3c71dc, Func Offset: 0x1cc
	// Line 377, Address: 0x3c723c, Func Offset: 0x22c
	// Line 383, Address: 0x3c7248, Func Offset: 0x238
	// Func End, Address: 0x3c728c, Func Offset: 0x27c
}

// pre_render_buckets<30ptank_pool__pos_color_size_rot>__19@unnamed@xWad4_cpp@FPQ219@unnamed@xWad4_cpp@13system_bucketPQ219@unnamed@xWad4_cpp@13system_bucketf_v
// Start address: 0x3c7290
void pre_render_buckets(system_bucket* first, system_bucket* last, float32 dt)
{
	ptank_pool__pos_color_size_rot pool;
	system_bucket* bucket;
	internal_system* system;
	uint8 started;
	uint8 lost_any;
	block_info* block;
	int32 newused;
	// Line 342, Address: 0x3c7290, Func Offset: 0
	// Line 344, Address: 0x3c7294, Func Offset: 0x4
	// Line 342, Address: 0x3c7298, Func Offset: 0x8
	// Line 344, Address: 0x3c72cc, Func Offset: 0x3c
	// Line 346, Address: 0x3c72e8, Func Offset: 0x58
	// Line 348, Address: 0x3c72f0, Func Offset: 0x60
	// Line 350, Address: 0x3c72f8, Func Offset: 0x68
	// Line 354, Address: 0x3c7304, Func Offset: 0x74
	// Line 361, Address: 0x3c730c, Func Offset: 0x7c
	// Line 365, Address: 0x3c7310, Func Offset: 0x80
	// Line 366, Address: 0x3c7314, Func Offset: 0x84
	// Line 369, Address: 0x3c7320, Func Offset: 0x90
	// Line 371, Address: 0x3c7340, Func Offset: 0xb0
	// Line 372, Address: 0x3c734c, Func Offset: 0xbc
	// Line 373, Address: 0x3c7350, Func Offset: 0xc0
	// Line 374, Address: 0x3c7360, Func Offset: 0xd0
	// Line 375, Address: 0x3c7364, Func Offset: 0xd4
	// Line 376, Address: 0x3c7370, Func Offset: 0xe0
	// Line 377, Address: 0x3c7378, Func Offset: 0xe8
	// Line 378, Address: 0x3c73c0, Func Offset: 0x130
	// Line 381, Address: 0x3c73dc, Func Offset: 0x14c
	// Line 382, Address: 0x3c7424, Func Offset: 0x194
	// Line 383, Address: 0x3c7448, Func Offset: 0x1b8
	// Line 359, Address: 0x3c7454, Func Offset: 0x1c4
	// Line 360, Address: 0x3c7458, Func Offset: 0x1c8
	// Line 383, Address: 0x3c745c, Func Offset: 0x1cc
	// Line 377, Address: 0x3c74bc, Func Offset: 0x22c
	// Line 383, Address: 0x3c74c8, Func Offset: 0x238
	// Func End, Address: 0x3c750c, Func Offset: 0x27c
}

// pre_render_buckets<34ptank_pool__pos_color_size_rot_uv2>__19@unnamed@xWad4_cpp@FPQ219@unnamed@xWad4_cpp@13system_bucketPQ219@unnamed@xWad4_cpp@13system_bucketf_v
// Start address: 0x3c7510
void pre_render_buckets(system_bucket* first, system_bucket* last, float32 dt)
{
	ptank_pool__pos_color_size_rot_uv2 pool;
	system_bucket* bucket;
	internal_system* system;
	uint8 started;
	uint8 lost_any;
	block_info* block;
	int32 newused;
	// Line 342, Address: 0x3c7510, Func Offset: 0
	// Line 344, Address: 0x3c7514, Func Offset: 0x4
	// Line 342, Address: 0x3c7518, Func Offset: 0x8
	// Line 344, Address: 0x3c754c, Func Offset: 0x3c
	// Line 346, Address: 0x3c7568, Func Offset: 0x58
	// Line 348, Address: 0x3c7570, Func Offset: 0x60
	// Line 350, Address: 0x3c7578, Func Offset: 0x68
	// Line 354, Address: 0x3c7584, Func Offset: 0x74
	// Line 361, Address: 0x3c758c, Func Offset: 0x7c
	// Line 365, Address: 0x3c7590, Func Offset: 0x80
	// Line 366, Address: 0x3c7594, Func Offset: 0x84
	// Line 369, Address: 0x3c75a0, Func Offset: 0x90
	// Line 371, Address: 0x3c75c0, Func Offset: 0xb0
	// Line 372, Address: 0x3c75cc, Func Offset: 0xbc
	// Line 373, Address: 0x3c75d0, Func Offset: 0xc0
	// Line 374, Address: 0x3c75e0, Func Offset: 0xd0
	// Line 375, Address: 0x3c75e4, Func Offset: 0xd4
	// Line 376, Address: 0x3c75f0, Func Offset: 0xe0
	// Line 377, Address: 0x3c75f8, Func Offset: 0xe8
	// Line 378, Address: 0x3c7640, Func Offset: 0x130
	// Line 381, Address: 0x3c765c, Func Offset: 0x14c
	// Line 382, Address: 0x3c76a4, Func Offset: 0x194
	// Line 383, Address: 0x3c76c8, Func Offset: 0x1b8
	// Line 359, Address: 0x3c76d4, Func Offset: 0x1c4
	// Line 360, Address: 0x3c76d8, Func Offset: 0x1c8
	// Line 383, Address: 0x3c76dc, Func Offset: 0x1cc
	// Line 377, Address: 0x3c773c, Func Offset: 0x22c
	// Line 383, Address: 0x3c7748, Func Offset: 0x238
	// Func End, Address: 0x3c778c, Func Offset: 0x27c
}

