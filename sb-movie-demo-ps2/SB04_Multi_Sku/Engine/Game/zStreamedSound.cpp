



void Reset();
void InitWithSounds(zStreamedSound* soundList);
void PlaySoundDelayed(float32 delay);
void PlaySound();
void StopLastPlayedSound();

// Reset__18zStreamedSoundListFv
// Start address: 0x2e6be0
void zStreamedSoundList::Reset()
{
	zStreamedSound* sp;
	uint32 i;
	// Line 402, Address: 0x2e6be0, Func Offset: 0
	// Line 401, Address: 0x2e6be4, Func Offset: 0x4
	// Line 402, Address: 0x2e6be8, Func Offset: 0x8
	// Line 404, Address: 0x2e6bf4, Func Offset: 0x14
	// Line 405, Address: 0x2e6bfc, Func Offset: 0x1c
	// Line 404, Address: 0x2e6c00, Func Offset: 0x20
	// Line 405, Address: 0x2e6c08, Func Offset: 0x28
	// Line 406, Address: 0x2e6c18, Func Offset: 0x38
	// Func End, Address: 0x2e6c20, Func Offset: 0x40
}

// InitWithSounds__18zStreamedSoundListFP14zStreamedSoundUi
// Start address: 0x2e6c20
void zStreamedSoundList::InitWithSounds(zStreamedSound* soundList)
{
	// Line 385, Address: 0x2e6c20, Func Offset: 0
	// Line 386, Address: 0x2e6c3c, Func Offset: 0x1c
	// Line 387, Address: 0x2e6c44, Func Offset: 0x24
	// Line 388, Address: 0x2e6c48, Func Offset: 0x28
	// Line 389, Address: 0x2e6c4c, Func Offset: 0x2c
	// Line 391, Address: 0x2e6c58, Func Offset: 0x38
	// Line 393, Address: 0x2e6ca8, Func Offset: 0x88
	// Line 392, Address: 0x2e6cac, Func Offset: 0x8c
	// Line 393, Address: 0x2e6cb0, Func Offset: 0x90
	// Line 394, Address: 0x2e6cb8, Func Offset: 0x98
	// Line 397, Address: 0x2e6cc4, Func Offset: 0xa4
	// Func End, Address: 0x2e6ce0, Func Offset: 0xc0
}

// PlaySoundDelayed__14zStreamedSoundFf
// Start address: 0x2e6ce0
void zStreamedSound::PlaySoundDelayed(float32 delay)
{
	float32 timeNow;
	float32 futureTime;
	// Line 340, Address: 0x2e6ce0, Func Offset: 0
	// Line 344, Address: 0x2e6cf4, Func Offset: 0x14
	// Line 354, Address: 0x2e6d00, Func Offset: 0x20
	// Line 347, Address: 0x2e6d10, Func Offset: 0x30
	// Line 354, Address: 0x2e6d14, Func Offset: 0x34
	// Line 348, Address: 0x2e6d18, Func Offset: 0x38
	// Line 354, Address: 0x2e6d1c, Func Offset: 0x3c
	// Func End, Address: 0x2e6d44, Func Offset: 0x64
}

// PlaySound__14zStreamedSoundFv
// Start address: 0x2e6d50
void zStreamedSound::PlaySound()
{
	int32 delayBits;
	// Line 320, Address: 0x2e6d50, Func Offset: 0
	// Line 321, Address: 0x2e6d64, Func Offset: 0x14
	// Line 322, Address: 0x2e6d6c, Func Offset: 0x1c
	// Line 324, Address: 0x2e6d74, Func Offset: 0x24
	// Line 333, Address: 0x2e6dc0, Func Offset: 0x70
	// Line 331, Address: 0x2e6dcc, Func Offset: 0x7c
	// Line 333, Address: 0x2e6dd0, Func Offset: 0x80
	// Line 331, Address: 0x2e6de0, Func Offset: 0x90
	// Line 333, Address: 0x2e6de4, Func Offset: 0x94
	// Line 331, Address: 0x2e6e10, Func Offset: 0xc0
	// Line 333, Address: 0x2e6e14, Func Offset: 0xc4
	// Line 331, Address: 0x2e6e40, Func Offset: 0xf0
	// Line 333, Address: 0x2e6e44, Func Offset: 0xf4
	// Line 331, Address: 0x2e6e4c, Func Offset: 0xfc
	// Line 333, Address: 0x2e6e54, Func Offset: 0x104
	// Line 331, Address: 0x2e6e5c, Func Offset: 0x10c
	// Line 333, Address: 0x2e6e64, Func Offset: 0x114
	// Line 331, Address: 0x2e6e74, Func Offset: 0x124
	// Line 333, Address: 0x2e6e78, Func Offset: 0x128
	// Line 331, Address: 0x2e6e8c, Func Offset: 0x13c
	// Line 333, Address: 0x2e6e90, Func Offset: 0x140
	// Line 331, Address: 0x2e6e9c, Func Offset: 0x14c
	// Line 333, Address: 0x2e6ea0, Func Offset: 0x150
	// Line 331, Address: 0x2e6eac, Func Offset: 0x15c
	// Line 333, Address: 0x2e6eb8, Func Offset: 0x168
	// Line 331, Address: 0x2e6ec8, Func Offset: 0x178
	// Line 333, Address: 0x2e6ecc, Func Offset: 0x17c
	// Line 331, Address: 0x2e6ed4, Func Offset: 0x184
	// Line 333, Address: 0x2e6ed8, Func Offset: 0x188
	// Line 331, Address: 0x2e6ee4, Func Offset: 0x194
	// Line 333, Address: 0x2e6ef8, Func Offset: 0x1a8
	// Line 331, Address: 0x2e6f08, Func Offset: 0x1b8
	// Line 333, Address: 0x2e6f0c, Func Offset: 0x1bc
	// Line 331, Address: 0x2e6f14, Func Offset: 0x1c4
	// Line 333, Address: 0x2e6f18, Func Offset: 0x1c8
	// Line 331, Address: 0x2e6f20, Func Offset: 0x1d0
	// Line 333, Address: 0x2e6f2c, Func Offset: 0x1dc
	// Line 331, Address: 0x2e6f34, Func Offset: 0x1e4
	// Line 333, Address: 0x2e6f38, Func Offset: 0x1e8
	// Line 331, Address: 0x2e6f40, Func Offset: 0x1f0
	// Line 333, Address: 0x2e6f94, Func Offset: 0x244
	// Func End, Address: 0x2e6fac, Func Offset: 0x25c
}

// StopLastPlayedSound__14zStreamedSoundFv
// Start address: 0x2e6fb0
void zStreamedSound::StopLastPlayedSound()
{
	// Line 231, Address: 0x2e6fb0, Func Offset: 0
	// Line 232, Address: 0x2e6fb4, Func Offset: 0x4
	// Line 231, Address: 0x2e6fb8, Func Offset: 0x8
	// Line 232, Address: 0x2e6fbc, Func Offset: 0xc
	// Line 234, Address: 0x2e6fe8, Func Offset: 0x38
	// Line 235, Address: 0x2e6fec, Func Offset: 0x3c
	// Func End, Address: 0x2e7010, Func Offset: 0x60
}

