



void destroy();
xCam* get_next();
xCamConfigFollow* config_follow();
void spring_interp(xVec3& s, float32& v, xVec3& s0, xVec3& s1, float32 dt, float32 speed);
void spring_interp(xQuat& s, float32& v, xQuat& s0, xQuat& s1, float32 dt, float32 speed);
void spring_interp(float32& s, float32& v, float32& s0, float32& s1, float32 dt, float32 speed);

// destroy__4xCamFv
// Start address: 0x24aba0
void xCam::destroy()
{
	// Line 236, Address: 0x24aba0, Func Offset: 0
	// Func End, Address: 0x24aba8, Func Offset: 0x8
}

// get_next__4xCamFv
// Start address: 0x2a6b40
xCam* xCam::get_next()
{
	// Line 259, Address: 0x2a6b40, Func Offset: 0
	// Func End, Address: 0x2a6b48, Func Offset: 0x8
}

// config_follow__4xCamFv
// Start address: 0x2a6b50
xCamConfigFollow* xCam::config_follow()
{
	// Line 273, Address: 0x2a6b50, Func Offset: 0
	// Func End, Address: 0x2a6b58, Func Offset: 0x8
}

// spring_interp<5xVec3,f>__4xCamFR5xVec3RfRC5xVec3RC5xVec3ff_v
// Start address: 0x399960
void spring_interp(xVec3& s, float32& v, xVec3& s0, xVec3& s1, float32 dt, float32 speed)
{
	// Line 884, Address: 0x399960, Func Offset: 0
	// Line 885, Address: 0x399998, Func Offset: 0x38
	// Line 886, Address: 0x3999a4, Func Offset: 0x44
	// Line 887, Address: 0x399a7c, Func Offset: 0x11c
	// Line 886, Address: 0x399a9c, Func Offset: 0x13c
	// Line 887, Address: 0x399aac, Func Offset: 0x14c
	// Line 886, Address: 0x399ac0, Func Offset: 0x160
	// Line 887, Address: 0x399ac8, Func Offset: 0x168
	// Func End, Address: 0x399ae8, Func Offset: 0x188
}

// spring_interp<5xQuat,f>__4xCamFR5xQuatRfRC5xQuatRC5xQuatff_v
// Start address: 0x399af0
void spring_interp(xQuat& s, float32& v, xQuat& s0, xQuat& s1, float32 dt, float32 speed)
{
	// Line 884, Address: 0x399af0, Func Offset: 0
	// Line 885, Address: 0x399b30, Func Offset: 0x40
	// Line 886, Address: 0x399b44, Func Offset: 0x54
	// Line 887, Address: 0x399ce4, Func Offset: 0x1f4
	// Line 886, Address: 0x399cf4, Func Offset: 0x204
	// Line 887, Address: 0x399d10, Func Offset: 0x220
	// Line 886, Address: 0x399d18, Func Offset: 0x228
	// Line 887, Address: 0x399d30, Func Offset: 0x240
	// Line 886, Address: 0x399d50, Func Offset: 0x260
	// Line 887, Address: 0x399d74, Func Offset: 0x284
	// Func End, Address: 0x399db0, Func Offset: 0x2c0
}

// spring_interp<f,f>__4xCamFRfRfRCfRCfff_v
// Start address: 0x399db0
void spring_interp(float32& s, float32& v, float32& s0, float32& s1, float32 dt, float32 speed)
{
	// Line 884, Address: 0x399db0, Func Offset: 0
	// Line 885, Address: 0x399de8, Func Offset: 0x38
	// Line 886, Address: 0x399df4, Func Offset: 0x44
	// Line 887, Address: 0x399e30, Func Offset: 0x80
	// Func End, Address: 0x399e54, Func Offset: 0xa4
}

