



void update(float32 dt);
void collide(float32 dt);
void apply_standard_input(float32 dt);
void set_frame(xEntFrame* frame);
void start();
void create();

// update__9zCamDriveFR6xScenef
// Start address: 0x395290
void zCamDrive::update(float32 dt)
{
	xVec3 dPos;
	xVec3 target_velocity;
	int32 x;
	float32 input_vel_x;
	float32 offsetX;
	xVec3 new_target_position;
	xMat4x3 dest;
	xVec3 old_position;
	xQuat old_orientation;
	xVec3 camera_to_player;
	xQuat rotation;
	xVec3 up;
	// Line 361, Address: 0x395290, Func Offset: 0
	// Line 364, Address: 0x395294, Func Offset: 0x4
	// Line 361, Address: 0x395298, Func Offset: 0x8
	// Line 364, Address: 0x39529c, Func Offset: 0xc
	// Line 361, Address: 0x3952a0, Func Offset: 0x10
	// Line 364, Address: 0x3952a4, Func Offset: 0x14
	// Line 361, Address: 0x3952a8, Func Offset: 0x18
	// Line 364, Address: 0x3952b4, Func Offset: 0x24
	// Line 361, Address: 0x3952b8, Func Offset: 0x28
	// Line 364, Address: 0x3952bc, Func Offset: 0x2c
	// Line 369, Address: 0x3952c4, Func Offset: 0x34
	// Line 381, Address: 0x3952c8, Func Offset: 0x38
	// Line 369, Address: 0x3952d0, Func Offset: 0x40
	// Line 373, Address: 0x3952d8, Func Offset: 0x48
	// Line 369, Address: 0x3952dc, Func Offset: 0x4c
	// Line 373, Address: 0x3952e0, Func Offset: 0x50
	// Line 369, Address: 0x3952e4, Func Offset: 0x54
	// Line 381, Address: 0x3952e8, Func Offset: 0x58
	// Line 369, Address: 0x3952f4, Func Offset: 0x64
	// Line 381, Address: 0x3952f8, Func Offset: 0x68
	// Line 382, Address: 0x395300, Func Offset: 0x70
	// Line 369, Address: 0x395308, Func Offset: 0x78
	// Line 381, Address: 0x395314, Func Offset: 0x84
	// Line 369, Address: 0x395318, Func Offset: 0x88
	// Line 373, Address: 0x395358, Func Offset: 0xc8
	// Line 375, Address: 0x395370, Func Offset: 0xe0
	// Line 373, Address: 0x39537c, Func Offset: 0xec
	// Line 381, Address: 0x395384, Func Offset: 0xf4
	// Line 373, Address: 0x395388, Func Offset: 0xf8
	// Line 381, Address: 0x395390, Func Offset: 0x100
	// Line 373, Address: 0x395394, Func Offset: 0x104
	// Line 375, Address: 0x395398, Func Offset: 0x108
	// Line 381, Address: 0x39539c, Func Offset: 0x10c
	// Line 373, Address: 0x3953a0, Func Offset: 0x110
	// Line 375, Address: 0x3953a4, Func Offset: 0x114
	// Line 381, Address: 0x3953a8, Func Offset: 0x118
	// Line 375, Address: 0x3953b0, Func Offset: 0x120
	// Line 381, Address: 0x3953b4, Func Offset: 0x124
	// Line 375, Address: 0x3953b8, Func Offset: 0x128
	// Line 381, Address: 0x3953c0, Func Offset: 0x130
	// Line 379, Address: 0x3953d8, Func Offset: 0x148
	// Line 381, Address: 0x3953e0, Func Offset: 0x150
	// Line 379, Address: 0x395410, Func Offset: 0x180
	// Line 381, Address: 0x395414, Func Offset: 0x184
	// Line 382, Address: 0x395424, Func Offset: 0x194
	// Line 384, Address: 0x395434, Func Offset: 0x1a4
	// Line 382, Address: 0x395438, Func Offset: 0x1a8
	// Line 384, Address: 0x39543c, Func Offset: 0x1ac
	// Line 382, Address: 0x395440, Func Offset: 0x1b0
	// Line 389, Address: 0x395444, Func Offset: 0x1b4
	// Line 390, Address: 0x39545c, Func Offset: 0x1cc
	// Line 395, Address: 0x395460, Func Offset: 0x1d0
	// Line 397, Address: 0x395474, Func Offset: 0x1e4
	// Line 399, Address: 0x395480, Func Offset: 0x1f0
	// Line 401, Address: 0x3954ac, Func Offset: 0x21c
	// Line 403, Address: 0x3954b0, Func Offset: 0x220
	// Line 407, Address: 0x3954b8, Func Offset: 0x228
	// Line 409, Address: 0x3954d4, Func Offset: 0x244
	// Line 410, Address: 0x3954f0, Func Offset: 0x260
	// Line 413, Address: 0x3954f8, Func Offset: 0x268
	// Line 417, Address: 0x395514, Func Offset: 0x284
	// Line 419, Address: 0x395520, Func Offset: 0x290
	// Line 420, Address: 0x39552c, Func Offset: 0x29c
	// Line 422, Address: 0x39553c, Func Offset: 0x2ac
	// Line 423, Address: 0x395540, Func Offset: 0x2b0
	// Line 447, Address: 0x395544, Func Offset: 0x2b4
	// Line 448, Address: 0x395548, Func Offset: 0x2b8
	// Line 450, Address: 0x395554, Func Offset: 0x2c4
	// Line 453, Address: 0x395588, Func Offset: 0x2f8
	// Line 455, Address: 0x3955b0, Func Offset: 0x320
	// Line 456, Address: 0x3955cc, Func Offset: 0x33c
	// Line 459, Address: 0x3955d4, Func Offset: 0x344
	// Line 460, Address: 0x3955d8, Func Offset: 0x348
	// Line 459, Address: 0x3955e8, Func Offset: 0x358
	// Line 460, Address: 0x3955ec, Func Offset: 0x35c
	// Line 465, Address: 0x3955f8, Func Offset: 0x368
	// Line 468, Address: 0x395614, Func Offset: 0x384
	// Line 472, Address: 0x395618, Func Offset: 0x388
	// Line 468, Address: 0x39561c, Func Offset: 0x38c
	// Line 472, Address: 0x395634, Func Offset: 0x3a4
	// Line 468, Address: 0x39563c, Func Offset: 0x3ac
	// Line 470, Address: 0x3956c4, Func Offset: 0x434
	// Line 468, Address: 0x3956c8, Func Offset: 0x438
	// Line 470, Address: 0x3956d4, Func Offset: 0x444
	// Line 472, Address: 0x395734, Func Offset: 0x4a4
	// Line 474, Address: 0x395740, Func Offset: 0x4b0
	// Line 477, Address: 0x39574c, Func Offset: 0x4bc
	// Line 479, Address: 0x395758, Func Offset: 0x4c8
	// Line 488, Address: 0x39575c, Func Offset: 0x4cc
	// Line 479, Address: 0x395760, Func Offset: 0x4d0
	// Line 488, Address: 0x395764, Func Offset: 0x4d4
	// Line 479, Address: 0x395768, Func Offset: 0x4d8
	// Line 486, Address: 0x39576c, Func Offset: 0x4dc
	// Line 479, Address: 0x395770, Func Offset: 0x4e0
	// Line 486, Address: 0x395774, Func Offset: 0x4e4
	// Line 479, Address: 0x395778, Func Offset: 0x4e8
	// Line 486, Address: 0x39577c, Func Offset: 0x4ec
	// Line 479, Address: 0x395780, Func Offset: 0x4f0
	// Line 486, Address: 0x395784, Func Offset: 0x4f4
	// Line 479, Address: 0x395788, Func Offset: 0x4f8
	// Line 488, Address: 0x3957ac, Func Offset: 0x51c
	// Line 479, Address: 0x3957b0, Func Offset: 0x520
	// Line 481, Address: 0x3957f8, Func Offset: 0x568
	// Line 484, Address: 0x3957fc, Func Offset: 0x56c
	// Line 481, Address: 0x395800, Func Offset: 0x570
	// Line 482, Address: 0x395804, Func Offset: 0x574
	// Line 481, Address: 0x395810, Func Offset: 0x580
	// Line 482, Address: 0x39581c, Func Offset: 0x58c
	// Line 484, Address: 0x395820, Func Offset: 0x590
	// Line 482, Address: 0x395828, Func Offset: 0x598
	// Line 484, Address: 0x39582c, Func Offset: 0x59c
	// Line 482, Address: 0x395834, Func Offset: 0x5a4
	// Line 481, Address: 0x395838, Func Offset: 0x5a8
	// Line 484, Address: 0x39583c, Func Offset: 0x5ac
	// Line 482, Address: 0x395854, Func Offset: 0x5c4
	// Line 484, Address: 0x395858, Func Offset: 0x5c8
	// Line 482, Address: 0x395868, Func Offset: 0x5d8
	// Line 484, Address: 0x39586c, Func Offset: 0x5dc
	// Line 486, Address: 0x395894, Func Offset: 0x604
	// Line 488, Address: 0x3958f8, Func Offset: 0x668
	// Line 486, Address: 0x3958fc, Func Offset: 0x66c
	// Line 488, Address: 0x395900, Func Offset: 0x670
	// Line 486, Address: 0x395910, Func Offset: 0x680
	// Line 488, Address: 0x395914, Func Offset: 0x684
	// Line 490, Address: 0x395954, Func Offset: 0x6c4
	// Line 491, Address: 0x39599c, Func Offset: 0x70c
	// Line 493, Address: 0x3959a8, Func Offset: 0x718
	// Line 495, Address: 0x3959b4, Func Offset: 0x724
	// Line 497, Address: 0x3959bc, Func Offset: 0x72c
	// Line 498, Address: 0x3959c8, Func Offset: 0x738
	// Line 497, Address: 0x3959d4, Func Offset: 0x744
	// Line 498, Address: 0x3959d8, Func Offset: 0x748
	// Line 497, Address: 0x3959dc, Func Offset: 0x74c
	// Line 498, Address: 0x3959e4, Func Offset: 0x754
	// Line 502, Address: 0x3959f4, Func Offset: 0x764
	// Line 512, Address: 0x395a00, Func Offset: 0x770
	// Line 392, Address: 0x395a08, Func Offset: 0x778
	// Line 512, Address: 0x395a24, Func Offset: 0x794
	// Line 392, Address: 0x395a28, Func Offset: 0x798
	// Line 512, Address: 0x395a3c, Func Offset: 0x7ac
	// Line 431, Address: 0x395a40, Func Offset: 0x7b0
	// Line 512, Address: 0x395a4c, Func Offset: 0x7bc
	// Line 436, Address: 0x395a68, Func Offset: 0x7d8
	// Line 512, Address: 0x395a6c, Func Offset: 0x7dc
	// Line 437, Address: 0x395a74, Func Offset: 0x7e4
	// Line 512, Address: 0x395a78, Func Offset: 0x7e8
	// Line 488, Address: 0x395aa4, Func Offset: 0x814
	// Line 512, Address: 0x395aac, Func Offset: 0x81c
	// Line 507, Address: 0x395b04, Func Offset: 0x874
	// Line 512, Address: 0x395b08, Func Offset: 0x878
	// Func End, Address: 0x395b38, Func Offset: 0x8a8
}

// collide__9zCamDriveFf
// Start address: 0x395b40
void zCamDrive::collide(float32 dt)
{
	xQuat old_orient;
	xMat4x3 dest;
	xSweptSphere sws;
	float32 target_distance;
	xVec3 start;
	xVec3 end;
	xVec3 camera_to_player;
	// Line 284, Address: 0x395b40, Func Offset: 0
	// Line 290, Address: 0x395b48, Func Offset: 0x8
	// Line 284, Address: 0x395b4c, Func Offset: 0xc
	// Line 287, Address: 0x395b58, Func Offset: 0x18
	// Line 290, Address: 0x395b74, Func Offset: 0x34
	// Line 287, Address: 0x395b78, Func Offset: 0x38
	// Line 290, Address: 0x395b80, Func Offset: 0x40
	// Line 294, Address: 0x395b88, Func Offset: 0x48
	// Line 295, Address: 0x395b8c, Func Offset: 0x4c
	// Line 296, Address: 0x395b94, Func Offset: 0x54
	// Line 295, Address: 0x395b98, Func Offset: 0x58
	// Line 296, Address: 0x395bac, Func Offset: 0x6c
	// Line 303, Address: 0x395bc4, Func Offset: 0x84
	// Line 305, Address: 0x395bd4, Func Offset: 0x94
	// Line 323, Address: 0x395bf4, Func Offset: 0xb4
	// Line 341, Address: 0x395bfc, Func Offset: 0xbc
	// Line 343, Address: 0x395c18, Func Offset: 0xd8
	// Line 344, Address: 0x395c24, Func Offset: 0xe4
	// Line 347, Address: 0x395c28, Func Offset: 0xe8
	// Line 344, Address: 0x395c2c, Func Offset: 0xec
	// Line 347, Address: 0x395c30, Func Offset: 0xf0
	// Line 344, Address: 0x395c34, Func Offset: 0xf4
	// Line 346, Address: 0x395c38, Func Offset: 0xf8
	// Line 344, Address: 0x395c3c, Func Offset: 0xfc
	// Line 346, Address: 0x395c40, Func Offset: 0x100
	// Line 344, Address: 0x395c44, Func Offset: 0x104
	// Line 346, Address: 0x395c48, Func Offset: 0x108
	// Line 344, Address: 0x395c4c, Func Offset: 0x10c
	// Line 346, Address: 0x395c50, Func Offset: 0x110
	// Line 344, Address: 0x395c54, Func Offset: 0x114
	// Line 347, Address: 0x395c78, Func Offset: 0x138
	// Line 344, Address: 0x395c7c, Func Offset: 0x13c
	// Line 346, Address: 0x395cc4, Func Offset: 0x184
	// Line 347, Address: 0x395d28, Func Offset: 0x1e8
	// Line 346, Address: 0x395d2c, Func Offset: 0x1ec
	// Line 347, Address: 0x395d30, Func Offset: 0x1f0
	// Line 346, Address: 0x395d40, Func Offset: 0x200
	// Line 347, Address: 0x395d44, Func Offset: 0x204
	// Line 349, Address: 0x395d84, Func Offset: 0x244
	// Line 350, Address: 0x395dcc, Func Offset: 0x28c
	// Line 353, Address: 0x395dd8, Func Offset: 0x298
	// Line 354, Address: 0x395ddc, Func Offset: 0x29c
	// Line 353, Address: 0x395de0, Func Offset: 0x2a0
	// Line 354, Address: 0x395de4, Func Offset: 0x2a4
	// Line 353, Address: 0x395de8, Func Offset: 0x2a8
	// Line 354, Address: 0x395dec, Func Offset: 0x2ac
	// Line 353, Address: 0x395df0, Func Offset: 0x2b0
	// Line 354, Address: 0x395e0c, Func Offset: 0x2cc
	// Line 357, Address: 0x395e14, Func Offset: 0x2d4
	// Line 322, Address: 0x395e28, Func Offset: 0x2e8
	// Line 357, Address: 0x395e30, Func Offset: 0x2f0
	// Line 347, Address: 0x395e44, Func Offset: 0x304
	// Line 357, Address: 0x395e4c, Func Offset: 0x30c
	// Func End, Address: 0x395e5c, Func Offset: 0x31c
}

// apply_standard_input__9zCamDriveFf
// Start address: 0x395e60
void zCamDrive::apply_standard_input(float32 dt)
{
	int32 x;
	int32 y;
	float32 input_vel_x;
	float32 input_vel_y;
	xQuat rotation;
	xVec3 up;
	xVec3 camera_position;
	xVec3 camera_to_player;
	xMat3x3 dest;
	xQuat target_orientation;
	xQuat old_orientation;
	float32 old_orientation_v;
	xQuat new_orientation;
	float32 target_responsiveness;
	float32 blend;
	// Line 161, Address: 0x395e60, Func Offset: 0
	// Line 164, Address: 0x395e80, Func Offset: 0x20
	// Line 163, Address: 0x395e84, Func Offset: 0x24
	// Line 164, Address: 0x395e88, Func Offset: 0x28
	// Line 161, Address: 0x395e8c, Func Offset: 0x2c
	// Line 167, Address: 0x395e94, Func Offset: 0x34
	// Line 168, Address: 0x395eac, Func Offset: 0x4c
	// Line 173, Address: 0x395eb0, Func Offset: 0x50
	// Line 174, Address: 0x395ec4, Func Offset: 0x64
	// Line 178, Address: 0x395ec8, Func Offset: 0x68
	// Line 185, Address: 0x395ed4, Func Offset: 0x74
	// Line 186, Address: 0x395ed8, Func Offset: 0x78
	// Line 189, Address: 0x395edc, Func Offset: 0x7c
	// Line 190, Address: 0x395f18, Func Offset: 0xb8
	// Line 193, Address: 0x395f44, Func Offset: 0xe4
	// Line 190, Address: 0x395f4c, Func Offset: 0xec
	// Line 193, Address: 0x395f50, Func Offset: 0xf0
	// Line 190, Address: 0x395f54, Func Offset: 0xf4
	// Line 193, Address: 0x395f58, Func Offset: 0xf8
	// Line 190, Address: 0x395f5c, Func Offset: 0xfc
	// Line 193, Address: 0x395f60, Func Offset: 0x100
	// Line 190, Address: 0x395f64, Func Offset: 0x104
	// Line 193, Address: 0x395f68, Func Offset: 0x108
	// Line 194, Address: 0x395f80, Func Offset: 0x120
	// Line 193, Address: 0x395f84, Func Offset: 0x124
	// Line 194, Address: 0x395f98, Func Offset: 0x138
	// Line 196, Address: 0x395fa4, Func Offset: 0x144
	// Line 198, Address: 0x395fb4, Func Offset: 0x154
	// Line 234, Address: 0x395fc8, Func Offset: 0x168
	// Line 236, Address: 0x395fcc, Func Offset: 0x16c
	// Line 170, Address: 0x395fd4, Func Offset: 0x174
	// Line 236, Address: 0x395ff0, Func Offset: 0x190
	// Line 170, Address: 0x395ff4, Func Offset: 0x194
	// Line 176, Address: 0x396008, Func Offset: 0x1a8
	// Line 236, Address: 0x396018, Func Offset: 0x1b8
	// Line 176, Address: 0x39601c, Func Offset: 0x1bc
	// Line 236, Address: 0x396030, Func Offset: 0x1d0
	// Line 180, Address: 0x396034, Func Offset: 0x1d4
	// Line 236, Address: 0x396040, Func Offset: 0x1e0
	// Line 181, Address: 0x396050, Func Offset: 0x1f0
	// Line 236, Address: 0x396068, Func Offset: 0x208
	// Line 181, Address: 0x39606c, Func Offset: 0x20c
	// Line 236, Address: 0x396074, Func Offset: 0x214
	// Line 182, Address: 0x396084, Func Offset: 0x224
	// Line 236, Address: 0x39608c, Func Offset: 0x22c
	// Line 204, Address: 0x396098, Func Offset: 0x238
	// Line 236, Address: 0x3960a0, Func Offset: 0x240
	// Line 204, Address: 0x3960ac, Func Offset: 0x24c
	// Line 236, Address: 0x3960b0, Func Offset: 0x250
	// Line 202, Address: 0x3960e0, Func Offset: 0x280
	// Line 236, Address: 0x3960e4, Func Offset: 0x284
	// Line 202, Address: 0x3960e8, Func Offset: 0x288
	// Line 236, Address: 0x3960f0, Func Offset: 0x290
	// Line 202, Address: 0x396130, Func Offset: 0x2d0
	// Line 236, Address: 0x39613c, Func Offset: 0x2dc
	// Line 203, Address: 0x396160, Func Offset: 0x300
	// Line 236, Address: 0x396164, Func Offset: 0x304
	// Line 203, Address: 0x396188, Func Offset: 0x328
	// Line 236, Address: 0x396190, Func Offset: 0x330
	// Line 204, Address: 0x3961c0, Func Offset: 0x360
	// Line 236, Address: 0x3961d4, Func Offset: 0x374
	// Line 204, Address: 0x3961e0, Func Offset: 0x380
	// Line 236, Address: 0x3961e4, Func Offset: 0x384
	// Line 207, Address: 0x39621c, Func Offset: 0x3bc
	// Line 236, Address: 0x396220, Func Offset: 0x3c0
	// Line 207, Address: 0x39622c, Func Offset: 0x3cc
	// Line 236, Address: 0x396230, Func Offset: 0x3d0
	// Line 207, Address: 0x396234, Func Offset: 0x3d4
	// Line 236, Address: 0x396238, Func Offset: 0x3d8
	// Line 216, Address: 0x396250, Func Offset: 0x3f0
	// Line 236, Address: 0x396254, Func Offset: 0x3f4
	// Line 218, Address: 0x396258, Func Offset: 0x3f8
	// Line 236, Address: 0x39625c, Func Offset: 0x3fc
	// Line 218, Address: 0x396260, Func Offset: 0x400
	// Line 236, Address: 0x396264, Func Offset: 0x404
	// Line 218, Address: 0x396268, Func Offset: 0x408
	// Line 216, Address: 0x39626c, Func Offset: 0x40c
	// Line 236, Address: 0x396270, Func Offset: 0x410
	// Line 216, Address: 0x396274, Func Offset: 0x414
	// Line 236, Address: 0x396280, Func Offset: 0x420
	// Line 216, Address: 0x3962a4, Func Offset: 0x444
	// Line 236, Address: 0x3962b8, Func Offset: 0x458
	// Line 216, Address: 0x3962bc, Func Offset: 0x45c
	// Line 217, Address: 0x3962c4, Func Offset: 0x464
	// Line 236, Address: 0x3962c8, Func Offset: 0x468
	// Line 220, Address: 0x3962dc, Func Offset: 0x47c
	// Line 236, Address: 0x3962f0, Func Offset: 0x490
	// Line 227, Address: 0x39631c, Func Offset: 0x4bc
	// Line 225, Address: 0x396328, Func Offset: 0x4c8
	// Line 236, Address: 0x39632c, Func Offset: 0x4cc
	// Line 227, Address: 0x396340, Func Offset: 0x4e0
	// Line 236, Address: 0x396344, Func Offset: 0x4e4
	// Line 228, Address: 0x39634c, Func Offset: 0x4ec
	// Line 230, Address: 0x396350, Func Offset: 0x4f0
	// Line 236, Address: 0x396354, Func Offset: 0x4f4
	// Line 231, Address: 0x396368, Func Offset: 0x508
	// Line 233, Address: 0x39637c, Func Offset: 0x51c
	// Line 236, Address: 0x396388, Func Offset: 0x528
	// Line 204, Address: 0x396390, Func Offset: 0x530
	// Line 236, Address: 0x396394, Func Offset: 0x534
	// Line 204, Address: 0x39639c, Func Offset: 0x53c
	// Line 236, Address: 0x3963a4, Func Offset: 0x544
	// Line 221, Address: 0x3963b8, Func Offset: 0x558
	// Line 236, Address: 0x3963c0, Func Offset: 0x560
	// Line 221, Address: 0x3963c4, Func Offset: 0x564
	// Line 236, Address: 0x3963c8, Func Offset: 0x568
	// Line 221, Address: 0x3963d0, Func Offset: 0x570
	// Line 236, Address: 0x3963e0, Func Offset: 0x580
	// Func End, Address: 0x3963f4, Func Offset: 0x594
}

// set_frame__9zCamDriveFP9xEntFrame
// Start address: 0x396400
void zCamDrive::set_frame(xEntFrame* frame)
{
	// Line 141, Address: 0x396400, Func Offset: 0
	// Func End, Address: 0x396408, Func Offset: 0x8
}

// start__9zCamDriveFv
// Start address: 0x396410
void zCamDrive::start()
{
	xVec3 camera_position;
	xVec3 camera_to_player;
	xMat3x3 dest;
	// Line 89, Address: 0x396410, Func Offset: 0
	// Line 90, Address: 0x39641c, Func Offset: 0xc
	// Line 94, Address: 0x396424, Func Offset: 0x14
	// Line 112, Address: 0x396428, Func Offset: 0x18
	// Line 97, Address: 0x39642c, Func Offset: 0x1c
	// Line 112, Address: 0x396430, Func Offset: 0x20
	// Line 98, Address: 0x396434, Func Offset: 0x24
	// Line 121, Address: 0x396438, Func Offset: 0x28
	// Line 99, Address: 0x39643c, Func Offset: 0x2c
	// Line 121, Address: 0x396440, Func Offset: 0x30
	// Line 100, Address: 0x396444, Func Offset: 0x34
	// Line 121, Address: 0x396448, Func Offset: 0x38
	// Line 101, Address: 0x39644c, Func Offset: 0x3c
	// Line 122, Address: 0x396450, Func Offset: 0x40
	// Line 102, Address: 0x396454, Func Offset: 0x44
	// Line 122, Address: 0x396458, Func Offset: 0x48
	// Line 103, Address: 0x39645c, Func Offset: 0x4c
	// Line 112, Address: 0x396460, Func Offset: 0x50
	// Line 104, Address: 0x396464, Func Offset: 0x54
	// Line 112, Address: 0x396468, Func Offset: 0x58
	// Line 105, Address: 0x39646c, Func Offset: 0x5c
	// Line 122, Address: 0x396470, Func Offset: 0x60
	// Line 106, Address: 0x396474, Func Offset: 0x64
	// Line 121, Address: 0x396478, Func Offset: 0x68
	// Line 107, Address: 0x39647c, Func Offset: 0x6c
	// Line 122, Address: 0x396480, Func Offset: 0x70
	// Line 108, Address: 0x396484, Func Offset: 0x74
	// Line 112, Address: 0x396488, Func Offset: 0x78
	// Line 108, Address: 0x396490, Func Offset: 0x80
	// Line 109, Address: 0x396494, Func Offset: 0x84
	// Line 123, Address: 0x396498, Func Offset: 0x88
	// Line 109, Address: 0x3964a4, Func Offset: 0x94
	// Line 110, Address: 0x3964a8, Func Offset: 0x98
	// Line 111, Address: 0x3964ac, Func Offset: 0x9c
	// Line 112, Address: 0x3964b0, Func Offset: 0xa0
	// Line 113, Address: 0x3964bc, Func Offset: 0xac
	// Line 114, Address: 0x3964d8, Func Offset: 0xc8
	// Line 115, Address: 0x3964e0, Func Offset: 0xd0
	// Line 117, Address: 0x3964e8, Func Offset: 0xd8
	// Line 118, Address: 0x39656c, Func Offset: 0x15c
	// Line 121, Address: 0x396570, Func Offset: 0x160
	// Line 122, Address: 0x396574, Func Offset: 0x164
	// Line 121, Address: 0x39657c, Func Offset: 0x16c
	// Line 122, Address: 0x396580, Func Offset: 0x170
	// Line 121, Address: 0x396588, Func Offset: 0x178
	// Line 122, Address: 0x396590, Func Offset: 0x180
	// Line 121, Address: 0x396594, Func Offset: 0x184
	// Line 122, Address: 0x3965c8, Func Offset: 0x1b8
	// Line 121, Address: 0x3965d0, Func Offset: 0x1c0
	// Line 122, Address: 0x3965f8, Func Offset: 0x1e8
	// Line 121, Address: 0x3965fc, Func Offset: 0x1ec
	// Line 122, Address: 0x39661c, Func Offset: 0x20c
	// Line 121, Address: 0x396620, Func Offset: 0x210
	// Line 122, Address: 0x396624, Func Offset: 0x214
	// Line 121, Address: 0x39662c, Func Offset: 0x21c
	// Line 122, Address: 0x396634, Func Offset: 0x224
	// Line 121, Address: 0x396638, Func Offset: 0x228
	// Line 122, Address: 0x39663c, Func Offset: 0x22c
	// Line 123, Address: 0x396674, Func Offset: 0x264
	// Line 126, Address: 0x3966a8, Func Offset: 0x298
	// Line 127, Address: 0x3966f0, Func Offset: 0x2e0
	// Line 129, Address: 0x3966fc, Func Offset: 0x2ec
	// Line 130, Address: 0x39677c, Func Offset: 0x36c
	// Line 132, Address: 0x3967dc, Func Offset: 0x3cc
	// Line 123, Address: 0x3967f0, Func Offset: 0x3e0
	// Line 132, Address: 0x3967f4, Func Offset: 0x3e4
	// Line 123, Address: 0x3967fc, Func Offset: 0x3ec
	// Line 132, Address: 0x396804, Func Offset: 0x3f4
	// Func End, Address: 0x396820, Func Offset: 0x410
}

// create__9zCamDriveFv
// Start address: 0x396820
void zCamDrive::create()
{
	// Line 29, Address: 0x396820, Func Offset: 0
	// Line 30, Address: 0x39682c, Func Offset: 0xc
	// Line 31, Address: 0x396834, Func Offset: 0x14
	// Line 35, Address: 0x396838, Func Offset: 0x18
	// Line 32, Address: 0x39683c, Func Offset: 0x1c
	// Line 36, Address: 0x396840, Func Offset: 0x20
	// Line 33, Address: 0x396844, Func Offset: 0x24
	// Line 39, Address: 0x396848, Func Offset: 0x28
	// Line 35, Address: 0x39684c, Func Offset: 0x2c
	// Line 40, Address: 0x396850, Func Offset: 0x30
	// Line 36, Address: 0x396854, Func Offset: 0x34
	// Line 41, Address: 0x396858, Func Offset: 0x38
	// Line 38, Address: 0x39685c, Func Offset: 0x3c
	// Line 43, Address: 0x396860, Func Offset: 0x40
	// Line 39, Address: 0x396864, Func Offset: 0x44
	// Line 46, Address: 0x396868, Func Offset: 0x48
	// Line 40, Address: 0x39686c, Func Offset: 0x4c
	// Line 48, Address: 0x396870, Func Offset: 0x50
	// Line 41, Address: 0x396874, Func Offset: 0x54
	// Line 49, Address: 0x396878, Func Offset: 0x58
	// Line 42, Address: 0x39687c, Func Offset: 0x5c
	// Line 51, Address: 0x396880, Func Offset: 0x60
	// Line 43, Address: 0x396884, Func Offset: 0x64
	// Line 52, Address: 0x396888, Func Offset: 0x68
	// Line 44, Address: 0x39688c, Func Offset: 0x6c
	// Line 55, Address: 0x396890, Func Offset: 0x70
	// Line 45, Address: 0x396894, Func Offset: 0x74
	// Line 56, Address: 0x396898, Func Offset: 0x78
	// Line 46, Address: 0x39689c, Func Offset: 0x7c
	// Line 61, Address: 0x3968a0, Func Offset: 0x80
	// Line 47, Address: 0x3968a4, Func Offset: 0x84
	// Line 57, Address: 0x3968a8, Func Offset: 0x88
	// Line 48, Address: 0x3968ac, Func Offset: 0x8c
	// Line 49, Address: 0x3968b0, Func Offset: 0x90
	// Line 58, Address: 0x3968b4, Func Offset: 0x94
	// Line 50, Address: 0x3968b8, Func Offset: 0x98
	// Line 58, Address: 0x3968bc, Func Offset: 0x9c
	// Line 51, Address: 0x3968c0, Func Offset: 0xa0
	// Line 62, Address: 0x3968c4, Func Offset: 0xa4
	// Line 52, Address: 0x3968c8, Func Offset: 0xa8
	// Line 65, Address: 0x3968cc, Func Offset: 0xac
	// Line 53, Address: 0x3968d0, Func Offset: 0xb0
	// Line 71, Address: 0x3968d4, Func Offset: 0xb4
	// Line 54, Address: 0x3968d8, Func Offset: 0xb8
	// Line 71, Address: 0x3968dc, Func Offset: 0xbc
	// Line 55, Address: 0x3968e0, Func Offset: 0xc0
	// Line 73, Address: 0x3968e4, Func Offset: 0xc4
	// Line 56, Address: 0x3968e8, Func Offset: 0xc8
	// Line 73, Address: 0x3968ec, Func Offset: 0xcc
	// Line 57, Address: 0x3968f0, Func Offset: 0xd0
	// Line 82, Address: 0x3968f4, Func Offset: 0xd4
	// Line 58, Address: 0x3968f8, Func Offset: 0xd8
	// Line 77, Address: 0x3968fc, Func Offset: 0xdc
	// Line 59, Address: 0x396900, Func Offset: 0xe0
	// Line 82, Address: 0x396904, Func Offset: 0xe4
	// Line 60, Address: 0x396908, Func Offset: 0xe8
	// Line 84, Address: 0x39690c, Func Offset: 0xec
	// Line 61, Address: 0x396910, Func Offset: 0xf0
	// Line 62, Address: 0x396914, Func Offset: 0xf4
	// Line 63, Address: 0x396918, Func Offset: 0xf8
	// Line 65, Address: 0x39691c, Func Offset: 0xfc
	// Line 68, Address: 0x396920, Func Offset: 0x100
	// Line 69, Address: 0x396924, Func Offset: 0x104
	// Line 70, Address: 0x396928, Func Offset: 0x108
	// Line 71, Address: 0x39692c, Func Offset: 0x10c
	// Line 72, Address: 0x396930, Func Offset: 0x110
	// Line 73, Address: 0x396934, Func Offset: 0x114
	// Line 74, Address: 0x396938, Func Offset: 0x118
	// Line 75, Address: 0x39693c, Func Offset: 0x11c
	// Line 77, Address: 0x396940, Func Offset: 0x120
	// Line 78, Address: 0x396944, Func Offset: 0x124
	// Line 79, Address: 0x396948, Func Offset: 0x128
	// Line 82, Address: 0x39694c, Func Offset: 0x12c
	// Line 83, Address: 0x396950, Func Offset: 0x130
	// Line 84, Address: 0x396954, Func Offset: 0x134
	// Line 86, Address: 0x396958, Func Offset: 0x138
	// Func End, Address: 0x396968, Func Offset: 0x148
}

